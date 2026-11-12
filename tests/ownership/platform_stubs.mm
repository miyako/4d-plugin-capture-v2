// Deny-by-default replacements for every AVFoundation / CoreGraphics /
// Security / CoreMedia symbol the plugin links against. The harness never
// links those frameworks, so no camera, microphone, capture session, TCC
// prompt or device enumeration can happen: any selector or function that is
// not an explicit synthetic fixture aborts the process.

#import <Foundation/Foundation.h>
#include <objc/runtime.h>
#include <Security/SecTask.h>
#include <cstdio>
#include <cstdlib>
#include "platform_stubs.h"

static void deny(const char *what) {
    fprintf(stderr, "DENIED platform boundary: %s\n", what);
    fflush(stderr);
    abort();
}

#define DENY_CLASS(name)                                                         \
    @interface name : NSObject                                                   \
    @end                                                                         \
    @implementation name                                                         \
    + (id)alloc { deny(#name " +alloc"); return nil; }                           \
    + (id)allocWithZone:(NSZone *)zone { deny(#name " +allocWithZone:"); return nil; } \
    + (void)doesNotRecognizeSelector:(SEL)sel { deny(sel_getName(sel)); }        \
    - (void)doesNotRecognizeSelector:(SEL)sel { deny(sel_getName(sel)); }        \
    @end

DENY_CLASS(AVCaptureDeviceInput)
DENY_CLASS(AVCaptureMovieFileOutput)
DENY_CLASS(AVCaptureSession)
DENY_CLASS(AVCaptureStillImageOutput)
DENY_CLASS(AVCaptureVideoDataOutput)
DENY_CLASS(AVCaptureVideoPreviewLayer)

@interface HarnessDevice : NSObject {
@public
    NSString *mediaType;
    NSString *uniqueID;
    NSString *modelID;
    NSString *manufacturer;
    NSString *localizedName;
    BOOL connected;
}
@end

@implementation HarnessDevice
- (BOOL)hasMediaType:(NSString *)type { return [mediaType isEqualToString:type]; }
- (NSString *)uniqueID { return uniqueID; }
- (NSString *)modelID { return modelID; }
- (NSString *)manufacturer { return manufacturer; }
- (NSString *)localizedName { return localizedName; }
- (BOOL)isConnected { return connected; }
- (void)doesNotRecognizeSelector:(SEL)sel { deny(sel_getName(sel)); }
- (void)dealloc {
    [mediaType release];
    [uniqueID release];
    [modelID release];
    [manufacturer release];
    [localizedName release];
    [super dealloc];
}
@end

static NSString *fixture_string(const char *utf8) {
    return utf8 ? [[NSString alloc] initWithUTF8String:utf8] : nil;
}

static NSArray *gFixtureDevices = nil;
static int gDeviceEnumerations = 0;

extern "C" void harness_set_devices(const HarnessDeviceFixture *devices, int count) {
    NSMutableArray *array = [NSMutableArray array];
    for (int i = 0; i < count; ++i) {
        HarnessDevice *d = [[HarnessDevice alloc] init];
        d->mediaType = [(devices[i].video ? @"vide" : @"soun") copy];
        d->uniqueID = fixture_string(devices[i].uniqueID);
        d->modelID = fixture_string(devices[i].modelID);
        d->manufacturer = fixture_string(devices[i].manufacturer);
        d->localizedName = fixture_string(devices[i].localizedName);
        d->connected = devices[i].connected ? YES : NO;
        [array addObject:d];
        [d release];
    }
    [gFixtureDevices release];
    gFixtureDevices = [array copy];
}

extern "C" int harness_device_enumerations(void) { return gDeviceEnumerations; }

@interface AVCaptureDevice : NSObject
@end

@implementation AVCaptureDevice
+ (id)alloc { deny("AVCaptureDevice +alloc"); return nil; }
+ (id)allocWithZone:(NSZone *)zone { deny("AVCaptureDevice +allocWithZone:"); return nil; }
+ (NSArray *)devices {
    ++gDeviceEnumerations;
    return gFixtureDevices ? gFixtureDevices : @[];
}
+ (void)doesNotRecognizeSelector:(SEL)sel { deny(sel_getName(sel)); }
- (void)doesNotRecognizeSelector:(SEL)sel { deny(sel_getName(sel)); }
@end

extern "C" void harness_probe_denied_selector(void) {
    [NSClassFromString(@"AVCaptureDevice") performSelector:@selector(authorizationStatusForMediaType:) withObject:@"vide"];
}

extern "C" void harness_probe_denied_session(void) {
    [[NSClassFromString(@"AVCaptureSession") alloc] init];
}

#define STRING_CONSTANT(name, value) extern "C" NSString *const name = @value;

STRING_CONSTANT(AVCaptureDeviceWasConnectedNotification, "AVCaptureDeviceWasConnectedNotification")
STRING_CONSTANT(AVCaptureDeviceWasDisconnectedNotification, "AVCaptureDeviceWasDisconnectedNotification")
STRING_CONSTANT(AVCaptureSessionDidStartRunningNotification, "AVCaptureSessionDidStartRunningNotification")
STRING_CONSTANT(AVCaptureSessionDidStopRunningNotification, "AVCaptureSessionDidStopRunningNotification")
STRING_CONSTANT(AVCaptureSessionInterruptionEndedNotification, "AVCaptureSessionInterruptionEndedNotification")
STRING_CONSTANT(AVCaptureSessionRuntimeErrorNotification, "AVCaptureSessionRuntimeErrorNotification")
STRING_CONSTANT(AVCaptureSessionWasInterruptedNotification, "AVCaptureSessionWasInterruptedNotification")
STRING_CONSTANT(AVCaptureSessionPreset1280x720, "AVCaptureSessionPreset1280x720")
STRING_CONSTANT(AVCaptureSessionPreset320x240, "AVCaptureSessionPreset320x240")
STRING_CONSTANT(AVCaptureSessionPreset352x288, "AVCaptureSessionPreset352x288")
STRING_CONSTANT(AVCaptureSessionPreset640x480, "AVCaptureSessionPreset640x480")
STRING_CONSTANT(AVCaptureSessionPreset960x540, "AVCaptureSessionPreset960x540")
STRING_CONSTANT(AVCaptureSessionPresetHigh, "AVCaptureSessionPresetHigh")
STRING_CONSTANT(AVCaptureSessionPresetLow, "AVCaptureSessionPresetLow")
STRING_CONSTANT(AVCaptureSessionPresetMedium, "AVCaptureSessionPresetMedium")
STRING_CONSTANT(AVCaptureSessionPresetiFrame1280x720, "AVCaptureSessionPresetiFrame1280x720")
STRING_CONSTANT(AVCaptureSessionPresetiFrame960x540, "AVCaptureSessionPresetiFrame960x540")
STRING_CONSTANT(AVMediaTypeAudio, "soun")
STRING_CONSTANT(AVMediaTypeVideo, "vide")
STRING_CONSTANT(AVVideoAverageBitRateKey, "AverageBitRate")
STRING_CONSTANT(AVVideoCodecKey, "AVVideoCodecKey")
STRING_CONSTANT(AVVideoCodecTypeAppleProRes422, "apcn")
STRING_CONSTANT(AVVideoCodecTypeAppleProRes4444, "ap4h")
STRING_CONSTANT(AVVideoCodecTypeH264, "avc1")
STRING_CONSTANT(AVVideoCodecTypeHEVC, "hvc1")
STRING_CONSTANT(AVVideoCodecTypeJPEG, "jpeg")
STRING_CONSTANT(AVVideoCompressionPropertiesKey, "AVVideoCompressionPropertiesKey")
STRING_CONSTANT(AVVideoHeightKey, "AVVideoHeightKey")
STRING_CONSTANT(AVVideoMaxKeyFrameIntervalDurationKey, "MaxKeyFrameIntervalDuration")
STRING_CONSTANT(AVVideoMaxKeyFrameIntervalKey, "MaxKeyFrameInterval")
STRING_CONSTANT(AVVideoQualityKey, "Quality")
STRING_CONSTANT(AVVideoWidthKey, "AVVideoWidthKey")

// Never-returning deny stubs: the signatures only need to satisfy the linker.
extern "C" void CGContextScaleCTM(void) { deny("CGContextScaleCTM"); }
extern "C" void CGContextTranslateCTM(void) { deny("CGContextTranslateCTM"); }
extern "C" void CMTimeMakeWithSeconds(void) { deny("CMTimeMakeWithSeconds"); }
extern "C" CFTypeRef SecTaskCopyValueForEntitlement(SecTaskRef, CFStringRef, CFErrorRef *) { deny("SecTaskCopyValueForEntitlement"); return NULL; }
extern "C" SecTaskRef SecTaskCreateFromSelf(CFAllocatorRef) { deny("SecTaskCreateFromSelf"); return NULL; }
