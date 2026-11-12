# Ownership regression harness

Compiles the real plugin sources (`4DPlugin-Capture.cpp`, `support/4DPlugin-JSON.cpp`) and the unchanged bundled `4D Plugin API` against a fake 4D engine that tracks every engine string, object, picture and handle, with ASan/UBSan. Each test runs in its own process and fails if any engine value leaks or is released twice.

AVFoundation, CoreMedia, CoreGraphics and Security entry points are replaced by stubs that abort on use; devices are synthetic fixtures. No camera, microphone, permission prompt, UI or network is touched. macOS only.

```sh
python3 tests/ownership/run.py --tree . --out /tmp/capture-ownership --expect-none
```

`baseline-expected-failures.txt` lists the tests that fail on the unfixed baseline `084615c` (issue #1); CI runs the same harness against `git archive` of that commit.
