/* --------------------------------------------------------------------------------
 #
 #	4DPlugin-Capture.h
 #	source generated by 4D Plugin Wizard
 #	Project : Capture
 #	author : miyako
 #	2019/10/03
 #  
 # --------------------------------------------------------------------------------*/

#ifndef PLUGIN_CAPTURE_H
#define PLUGIN_CAPTURE_H

#include "4DPluginAPI.h"
#include "4DPlugin-JSON.h"

#if VERSIONWIN
#include "windows.h"
#include "dshow.h"
#include "qedit.h"
#include "Shlwapi.h" //PathRemoveFileSpec
#pragma comment(lib, "strmiids")
#pragma comment(lib, "shlwapi")
#include <map>
#include <mutex>
#include <d3d9.h>
#include <vmr9.h>

class ComInitClass {
    
private:
    
    bool _comReady;
    
public:
    
    ComInitClass() {
        //COINIT_MULTITHREADED will fail in 4D plugin
        if (SUCCEEDED(CoInitializeEx(NULL, COINIT_APARTMENTTHREADED))) {
            _comReady = true;
        }
    }
    
    ~ComInitClass() {
        CoUninitialize();
    }
    
public:
    
    bool isComReady() {
        
        return _comReady;
        
    }
};

class CaptureMan : public IUnknown
{
    
private:
    
    ULONG m_cRefCount; // Reference count
    IVideoWindow    *videoWindow;
    IMediaControl    *mediaControl;
    IGraphBuilder    *graphBuilder;
    IBaseFilter        *deviceFilter;
    IBaseFilter        *grabberFilter;
    ICaptureGraphBuilder2 *captureGraphBuilder;
    ISampleGrabber    *sampleGrabber;
	IAMVideoControl	*videoControl;
	IFileSinkFilter *sinkFilter;
	IBaseFilter *fileFilter;
    PA_long32        windowRef;
	std::wstring devicePath;
	std::wstring filePath;

	IVMRWindowlessControl9 *windowlessControl9;
	IVMRFilterConfig9 *filterConfig9;
	IBaseFilter *vmr9Filter;

    bool isConfigured;
    
public:
    
	bool isWindowRef(PA_long32 w);
	bool isDeviceUniqueID(const wchar_t *uniqueID);
    void startRunning();
    void stopRunning();

	void update(
		PA_long32 w,
		PA_long32 x,
		PA_long32 y,
		PA_long32 width,
		PA_long32 height,
		bool hidden);

    void setup(const wchar_t *deviceName,
		PA_long32 w,
		PA_long32 x,
		PA_long32 y,
		PA_long32 width,
		PA_long32 height,
		const wchar_t *file);

    PA_Picture copyImage();

	CaptureMan();
	~CaptureMan();

	// IUnknown methods...
	virtual HRESULT _stdcall QueryInterface(REFIID riid, void **ppvObject) {
		*ppvObject = NULL;
		return E_NOTIMPL;
	}

	virtual ULONG _stdcall AddRef(void) {
		return InterlockedIncrement(&m_cRefCount);
	}

	virtual ULONG _stdcall Release(void) {
		if (!InterlockedDecrement(&m_cRefCount))
		{
			delete this;
			return 0;
		}
		return m_cRefCount;
	}
};

#endif

#if VERSIONMAC
#import <AVFoundation/AVFoundation.h>
#import <Security/Security.h>
#import <CoreFoundation/CoreFoundation.h>
#import <CoreMedia/CoreMedia.h>
#import <Cocoa/Cocoa.h>
#import <QuartzCore/CALayer.h>

#ifndef errAEEventWouldRequireUserConsent
enum {
    errAEEventWouldRequireUserConsent     =     -1744
};
#endif

typedef enum {
    
    request_permission_unknown = 0,
    request_permission_authorized = 1,
    request_permission_not_determined = 2,
    request_permission_denied = 3,
    request_permission_restricted = 4
    
}request_permission_t;

@interface CaptureMan : NSObject <AVCaptureFileOutputRecordingDelegate> {
    
    AVCaptureSession *captureSession;
    AVCaptureDevice *videoDevice;
    AVCaptureDeviceInput *videoInput;
    AVCaptureVideoDataOutput *videoOutput;
    AVCaptureVideoPreviewLayer *previewLayer;
    AVCaptureMovieFileOutput *fileOutput;
    NSString *deviceUniqueID;
    
    CGRect previewLayerFrame;
    NSView *superLayerView;
    
    AVCaptureStillImageOutput *imageOutput;
    
    std::vector<unsigned char>buf;
    
    bool imageCaptured;
    bool isConfigured;
    
    NSNotificationCenter *notificationCenter;
}

- (id)initWithUniqueID:(const char *)uniqueID;

- (void)onDeviceDisconnected:(NSNotification *)notification;
- (void)onDeviceConnected:(NSNotification *)notification;
- (void)onStopRunning:(NSNotification *)notification;
- (void)onStartRunning:(NSNotification *)notification;
- (void)onSessionRuntimeError:(NSNotification *)notification;
- (void)onSessionInterruptionEnded:(NSNotification *)notification;
- (void)onInterrupted:(NSNotification *)notification;

- (void)startRecording:(NSURL *)url;
- (void)stopRecording;
- (void)pauseRecording;
- (void)resumeRecording;

- (bool)isImageReady;
- (bool)isDeviceUniqueID:(const char *)uniqueID;
- (PA_Picture)copyImage;
- (void)captureImage;
- (void)prepareForCaptureImage;
- (void)startRunning;
- (void)stopRunning;
- (void)setPreviewLayerView:(NSView *)view frame:(NSRect)frame flipH:(bool)flipH flipV:(bool)flipV;
- (void)updatePreviewLayerFrame:(NSRect)frame flipH:(bool)flipH flipV:(bool)flipV hidden:(bool)hidden;
@end

#endif

#pragma mark -

void capture_Request_permisson(PA_PluginParameters params);
void capture_Start(PA_PluginParameters params);
void capture_Stop(PA_PluginParameters params);
void capture_Image(PA_PluginParameters params);
void capture_Update(PA_PluginParameters params);
void capture_Start_recording(PA_PluginParameters params);
void capture_Stop_recording(PA_PluginParameters params);
void capture_Pause_recording(PA_PluginParameters params);
void capture_Resume_recording(PA_PluginParameters params);
void capture_Devices(PA_PluginParameters params);

#endif /* PLUGIN_CAPTURE_H */
