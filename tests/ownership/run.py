#!/usr/bin/env python3
"""Build and run the ownership harness against a source tree.

    python3 tests/ownership/run.py --tree . --out /tmp/out --expect-none
    python3 tests/ownership/run.py --tree /tmp/baseline --out /tmp/out-base \
        --expect tests/ownership/baseline-expected-failures.txt

The harness sources always come from this directory; only the plugin sources
(4DPlugin-Capture.cpp, support/, the bundled SDK, a/libjsoncpp.a) come from
--tree, so the same harness can judge the baseline and the fixed tree.
"""

import argparse
import hashlib
import json
import os
import subprocess
import sys

HERE = os.path.dirname(os.path.abspath(__file__))

# git blob ids of the complete bundled SDK; the harness refuses any other SDK.
SDK_BLOBS = {
    "4D Plugin API/4DPluginAPI.c": "62f745e91d81ef2c3c901c656ea8e175d3b173e8",
    "4D Plugin API/4DPluginAPI.h": "528bf1d2552df08d6a8b1bc95011a9b72934ad5c",
    "4D Plugin API/PublicTypes.h": "9ae20b001bff9128f690fff3e6c3f873b6238333",
    "4D Plugin API/PrivateTypes.h": "a3098cb662cdbc43ba574fdef72a059c4c6d1cd4",
    "4D Plugin API/EntryPoints.h": "da428d5f6ca23b0a30371c7288a01d29aa3c466a",
    "4D Plugin API/Flags.h": "7a5a35539f27430a3fd9cb711d6b789051316471",
}

PROBES = {
    "clean_exit": (0, None),
    "double_dispose_string": (-6, "double or foreign unistring dispose"),
    "shallow_alias_double_clear": (-6, "double or foreign unistring dispose"),
    "clear_poisoned_variable": (-6, "clear of unknown or poisoned variable kind"),
    "denied_engine_selector": (-6, "unexpected engine selector"),
    "denied_av_selector": (-6, "DENIED platform boundary: authorizationStatusForMediaType:"),
    "denied_av_session": (-6, "DENIED platform boundary: AVCaptureSession +alloc"),
}

FORBIDDEN_LINKS = ("AVFoundation", "CoreMedia", "Security.framework", "CoreGraphics", "AppKit", "Cocoa", "QuartzCore")

SAN = ["-g", "-O1", "-fno-omit-frame-pointer", "-fsanitize=address,undefined", "-fno-sanitize-recover=all"]


def blob_id(path):
    with open(path, "rb") as f:
        data = f.read()
    return hashlib.sha1(b"blob %d\0" % len(data) + data).hexdigest()


def sha256(path):
    with open(path, "rb") as f:
        return hashlib.sha256(f.read()).hexdigest()


def run(cmd, log, **kw):
    log.write("$ " + " ".join(cmd) + "\n")
    p = subprocess.run(cmd, stdout=subprocess.PIPE, stderr=subprocess.STDOUT, universal_newlines=True, **kw)
    log.write(p.stdout)
    log.write("exit %d\n" % p.returncode)
    if p.returncode != 0:
        sys.stderr.write(p.stdout)
        raise SystemExit("command failed (%d): %s" % (p.returncode, " ".join(cmd)))
    return p.stdout


def build(tree, out, log):
    sdk = os.path.join(tree, "4D Plugin API")
    objs = os.path.join(out, "obj")
    os.makedirs(objs, exist_ok=True)
    inc = ["-I", sdk, "-I", os.path.join(tree, "include"), "-I", os.path.join(tree, "support"), "-I", tree, "-I", HERE]
    cxx = ["clang++", "-std=c++11"] + SAN + inc
    objcxx = cxx + ["-x", "objective-c++", "-fno-objc-arc"]
    units = [
        (["clang", "-x", "c"] + SAN + ["-Wno-multichar", "-Wno-int-conversion", "-I", sdk], os.path.join(sdk, "4DPluginAPI.c"), "api.o"),
        (objcxx, os.path.join(tree, "4DPlugin-Capture.cpp"), "capture.o"),
        (cxx, os.path.join(tree, "support", "4DPlugin-JSON.cpp"), "json.o"),
        (objcxx, os.path.join(HERE, "platform_stubs.mm"), "stubs.o"),
        (objcxx + ["-Wno-multichar"], os.path.join(HERE, "main.mm"), "main.o"),
    ]
    outs = []
    for flags, src, name in units:
        o = os.path.join(objs, name)
        run(flags + ["-c", src, "-o", o], log)
        outs.append(o)
    exe = os.path.join(out, "ownership-harness")
    run(["clang++"] + SAN + outs + [os.path.join(tree, "a", "libjsoncpp.a"),
         "-framework", "Foundation", "-framework", "CoreFoundation", "-o", exe], log)
    links = run(["otool", "-L", exe], log)
    for bad in FORBIDDEN_LINKS:
        if bad in links:
            raise SystemExit("harness links forbidden framework %s" % bad)
    return exe


def main():
    ap = argparse.ArgumentParser()
    ap.add_argument("--tree", required=True)
    ap.add_argument("--out", required=True)
    group = ap.add_mutually_exclusive_group(required=True)
    group.add_argument("--expect", help="file listing the exact expected failing tests")
    group.add_argument("--expect-none", action="store_true")
    args = ap.parse_args()

    tree = os.path.abspath(args.tree)
    out = os.path.abspath(args.out)
    os.makedirs(out, exist_ok=True)

    for rel, expected in SDK_BLOBS.items():
        actual = blob_id(os.path.join(tree, rel))
        if actual != expected:
            raise SystemExit("bundled SDK changed: %s is %s, expected %s" % (rel, actual, expected))

    env = dict(os.environ)
    env["ASAN_OPTIONS"] = "detect_leaks=0:abort_on_error=0"
    env["UBSAN_OPTIONS"] = "print_stacktrace=1:halt_on_error=1"

    with open(os.path.join(out, "build.log"), "w") as log:
        exe = build(tree, out, log)

    tests = subprocess.run([exe, "--list"], stdout=subprocess.PIPE, universal_newlines=True, env=env, check=True).stdout.split()
    probes_listed = subprocess.run([exe, "--list-probes"], stdout=subprocess.PIPE, universal_newlines=True, env=env, check=True).stdout.split()
    if sorted(probes_listed) != sorted(PROBES):
        raise SystemExit("probe set mismatch: %s" % probes_listed)

    results = {}
    with open(os.path.join(out, "tests.log"), "w") as log:
        for name in tests:
            p = subprocess.run([exe, "--test", name], stdout=subprocess.PIPE, stderr=subprocess.STDOUT,
                               universal_newlines=True, env=env)
            log.write("=== %s exit %d\n%s" % (name, p.returncode, p.stdout))
            if p.returncode == 0 and ("PASS %s" % name) in p.stdout:
                results[name] = "PASS"
            elif p.returncode == 1 and ("FAIL %s" % name) in p.stdout:
                results[name] = "FAIL"
            else:
                results[name] = "CRASH(%d)" % p.returncode
            print("%-45s %s" % (name, results[name]))

    probe_ok = True
    with open(os.path.join(out, "probes.log"), "w") as log:
        for name, (code, needle) in sorted(PROBES.items()):
            p = subprocess.run([exe, "--probe", name], stdout=subprocess.PIPE, stderr=subprocess.STDOUT,
                               universal_newlines=True, env=env)
            log.write("=== probe %s exit %d\n%s" % (name, p.returncode, p.stdout))
            ok = p.returncode == code and (needle is None or needle in p.stdout)
            probe_ok = probe_ok and ok
            print("probe %-39s exit %-4d %s" % (name, p.returncode, "as expected" if ok else "UNEXPECTED"))

    failing = sorted(n for n, r in results.items() if r != "PASS")
    if args.expect:
        with open(args.expect) as f:
            expected = sorted(l.strip() for l in f if l.strip() and not l.startswith("#"))
    else:
        expected = []

    summary = {
        "tree": tree,
        "tests": len(results),
        "passed": sum(1 for r in results.values() if r == "PASS"),
        "failing": failing,
        "expected_failing": expected,
        "probes": len(PROBES),
        "probes_as_expected": probe_ok,
        "harness_sha256": {f: sha256(os.path.join(HERE, f)) for f in sorted(os.listdir(HERE)) if not f.startswith(".")},
        "sdk_blobs": SDK_BLOBS,
    }
    with open(os.path.join(out, "summary.json"), "w") as f:
        json.dump(summary, f, indent=2, sort_keys=True)

    print("tests %d passed %d failing %d (expected %d); probes %s" %
          (len(results), summary["passed"], len(failing), len(expected), "ok" if probe_ok else "UNEXPECTED"))
    if failing != expected:
        print("unexpected failures: %s" % sorted(set(failing) - set(expected)))
        print("expected but passing: %s" % sorted(set(expected) - set(failing)))
        return 1
    return 0 if probe_ok else 1


if __name__ == "__main__":
    sys.exit(main())
