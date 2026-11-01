![version](https://img.shields.io/badge/version-19%2B-5682DF)
![platform](https://img.shields.io/static/v1?label=platform&message=mac-intel%20|%20mac-arm%20|%20win-64&color=blue)
[![license](https://img.shields.io/github/license/miyako/4d-plugin-capture-v2)](LICENSE)
![downloads](https://img.shields.io/github/downloads/miyako/4d-plugin-capture-v2/total)

---

# capture — command reference

The `capture` plugin shows a live camera preview inside a 4D form window, takes still pictures and records video. On macOS it drives **AVFoundation** (an `AVCaptureSession` with a preview layer drawn over the window's content view); on Windows it drives **DirectShow** (a capture filter graph whose video window is parented to the 4D window). Still images come back as a 4D `Picture` (JPEG on macOS, BMP on Windows), the device list as a `Collection` of objects, and the permission check as an `Object`.

The plugin manages **one** camera session per 4D application. Every command acts on that single session; starting with a different device or window replaces it.

| Command | Returns | Purpose |
|---|---|---|
| [`capture Request permission`](#capture-request-permission) | `Object` | Check (and on first use, request) camera access on macOS |
| [`capture Devices`](#capture-devices) | `Collection` | List the video capture devices |
| [`capture Start`](#capture-start) | — | Create the session if needed, place the preview in a window and start it |
| [`capture Update`](#capture-update) | — | Move, resize, flip or hide the preview |
| [`capture Image`](#capture-image) | `Picture` | Take a still picture from the running session |
| [`capture Stop`](#capture-stop) | — | Stop the session |
| [`capture Start recording`](#capture-start-recording) | — | Start recording a movie file (macOS) |
| [`capture Pause recording`](#capture-pause-recording) | — | Pause the recording (macOS) |
| [`capture Resume recording`](#capture-resume-recording) | — | Resume a paused recording (macOS) |
| [`capture Stop recording`](#capture-stop-recording) | — | Stop and finish the recording (macOS) |

**Platforms:** macOS (Intel and Apple silicon), Windows 64-bit. Windows support is limited (no flipping, no recording commands, fewer options).

---

## Requirements & platform notes

- **Failure is silent.** No command raises a 4D error. When something is missing (permission, a valid window, a camera), the command does nothing, and [`capture Image`](#capture-image) returns an empty picture. Check the result of [`capture Request permission`](#capture-request-permission) and of [`capture Devices`](#capture-devices) before relying on the preview.
- **On macOS, call [`capture Request permission`](#capture-request-permission) first.** Every command except [`capture Request permission`](#capture-request-permission) and [`capture Devices`](#capture-devices) does nothing until camera access has been granted to the 4D application in this session. Camera access needs macOS 10.14 or later.
- **On macOS, the 4D application itself must declare camera use.** macOS checks the *host* application, not the plugin. The 4D application's `Info.plist` must contain `NSCameraUsageDescription` (and `NSMicrophoneUsageDescription`), and its code signature must carry the `com.apple.security.device.camera` (and `com.apple.security.device.microphone`) entitlement. The project's [`SIGN.4dm`](test/Project/Sources/Methods/SIGN.4dm) shows how the author re-signs 4D for this. Recent 4D versions may already include these (see the 4D blog post on [webcam support in web areas](https://blog.4d.com/webcam-support-in-web-areas/)); check your version.
- **The preview is drawn on top of the form.** On macOS it is a Core Animation layer added over the window's content; on Windows it is a child video window. It is not a form object: 4D does not move, resize, clip or hide it for you. Use [`capture Update`](#capture-update) when the form is resized, and call [`capture Stop`](#capture-stop) when the form closes.
- **Coordinates differ by platform.** On macOS the preview frame is measured from the **bottom-left** corner of the window's content area; on Windows from the **top-left** corner of the window's client area. See [Preview coordinates](#preview-coordinates).
- **Threads.** [`capture Request permission`](#capture-request-permission) and [`capture Devices`](#capture-devices) are thread-safe. All other commands must run in a cooperative process; the 4D compiler rejects them in preemptive code. (This applies to builds from the current source; older builds marked more commands thread-safe.)
- **Picture formats.** [`capture Image`](#capture-image) returns JPEG data on macOS and a 24-bit BMP on Windows. 4D handles both as ordinary pictures.

---

## capture Request permission

### Syntax

```4d
status := capture Request permission
```

| Parameter | Type | Description |
|---|---|---|
| Result | `Object` | `success` (Boolean) and, on failure, `errorMessage` (Text) |

### Description

**On macOS**, the command checks, in order, that the 4D application declares `NSCameraUsageDescription`, that its signature carries the `com.apple.security.device.camera` entitlement, and then asks macOS for the current camera authorization. It then repeats the same three checks for the microphone.

| Property | Type | Description |
|---|---|---|
| `success` | Boolean | `True` when camera access is granted (see the note on the microphone below) |
| `errorMessage` | Text | Present when a check failed; describes the last failure |

Possible `errorMessage` values:

| `errorMessage` | Meaning |
|---|---|
| `"NSCameraUsageDescription is missing in app info.plist"` | The 4D application's `Info.plist` has no camera usage description |
| `"com.apple.security.device.camera is missing in app entitlement"` | The 4D application is not signed with the camera entitlement |
| `"com.apple.security.device.camera is set to false in app entitlement"` | The entitlement exists but is `false` |
| `"com.apple.security.device.camera could not be read from app entitlement"` | macOS could not read the application's entitlements |
| `"permission not determined"` | The user has not answered yet; macOS shows its permission dialog |
| `"permission denied"` | The user refused access (change it in System Settings > Privacy & Security) |
| `"permission restricted"` | Access is blocked by a device policy |
| `"microphoneUsageDescription is missing in app info.plist"`, and the `microphone` equivalents of the messages above | The same checks failed for the microphone |

- **The first call usually returns `"permission not determined"`.** macOS shows its dialog asynchronously; the command does not wait for the answer. Once the user clicks **Allow**, the plugin's commands start working. Call [`capture Request permission`](#capture-request-permission) again to get an updated `success`.
- **The microphone check runs after the camera check and can overwrite the result.** If the camera is granted but a microphone requirement is missing, `success` is `False` and `errorMessage` describes the microphone problem, **yet the capture commands still work**, because only camera access gates them. Read `errorMessage` to tell the two cases apart.
- **On macOS earlier than 10.14** the authorization status can't be read, camera access is never recorded as granted, and the other commands stay inactive.

**On Windows**, there is no permission model to check: the command returns an empty object (`{}`), with no `success` property. The other commands do not depend on it.

### Example

From the plugin's own test form (`TEST/method.4dm`, `On Load`):

```4d
Form:C1466.status:=capture Request permission
```

Checking the result before starting a preview:

```4d
var $status : Object
$status:=capture Request permission

If (Is macOS)
	If ($status.success)
		// camera access granted: safe to call capture Start
	Else 
		ALERT("Camera unavailable: "+String($status.errorMessage))
	End if 
End if 
```

---

## capture Devices

### Syntax

```4d
devices := capture Devices
```

| Parameter | Type | Description |
|---|---|---|
| Result | `Collection` | One object per video capture device |

### Description

Lists the video capture devices currently known to the system. The property names differ by platform:

**On macOS** (video devices only):

| Property | Type | Description |
|---|---|---|
| `uniqueID` | Text | Stable identifier; pass it as `device` to [`capture Start`](#capture-start) |
| `localizedName` | Text | Display name, e.g. "FaceTime HD Camera" |
| `modelID` | Text | Model identifier |
| `manufacturer` | Text | Manufacturer name |
| `connected` | Boolean | `True` if the device is currently connected |

**On Windows**:

| Property | Type | Description |
|---|---|---|
| `devicePath` | Text | Device path; pass it as `device` to [`capture Start`](#capture-start) |
| `friendlyName` | Text | Display name |
| `description` | Text | Description, when the driver provides one (often absent) |

A property is omitted when the system provides no value for it. The command does not require camera permission, and returns an empty collection when there are no cameras.

### Example

From the plugin's own test method (`TEST.4dm`):

```4d
$devices:=capture Devices 
```

Picking a device by name and starting the preview with it:

```4d
var $devices : Collection
var $device : Object
var $options : Object

$devices:=capture Devices
$options:=New object("window"; Current form window; "x"; 20; "y"; 20; "width"; 320; "height"; 240)

For each ($device; $devices)
	If (Is macOS)
		If (Position("FaceTime"; String($device.localizedName))>0)
			$options.device:=$device.uniqueID
		End if 
	Else 
		If (Position("USB"; String($device.friendlyName))>0)
			$options.device:=$device.devicePath
		End if 
	End if 
End for each 

capture Start($options)
```

---

## capture Start

### Syntax

```4d
capture Start ( options )
```

| Parameter | Type | Description |
|---|---|---|
| `options` | `Object` | Window, preview frame, device and session settings (see below) |
| Result | — | Nothing |

Options read on both platforms:

| Property | Type | Description |
|---|---|---|
| `window` | Longint | 4D window reference that hosts the preview, e.g. `Current form window` |
| `x`, `y` | Longint | Position of the preview, in [platform coordinates](#preview-coordinates) |
| `width`, `height` | Longint | Size of the preview |
| `device` | Text | Device to use: `uniqueID` on macOS, `devicePath` on Windows (from [`capture Devices`](#capture-devices)). Omit for the default camera |

Options read **on macOS only**:

| Property | Type | Description |
|---|---|---|
| `flipH` | Boolean | Mirror the preview horizontally |
| `flipV` | Boolean | Flip the preview vertically |
| `force` | Boolean | Discard the current session and create a new one |
| `preset` | Text | Capture quality: `"low"`, `"medium"`, `"high"` (default), `"320x240"`, `"352x288"`, `"640x480"`, `"960x540"`, `"1280x720"`, `"i960x540"`, `"i1280x720"` |
| `videoCodec` | Text | Codec for recordings: `"H264"`, `"HEVC"`, `"JPEG"`, `"AppleProRes422"`, `"AppleProRes4444"` |
| `quality` | Real | Recording compression quality, `0.0`–`1.0` |
| `averageBitRate` | Longint | Recording bit rate, in bits per second |
| `maxKeyFrameInterval` | Longint | Maximum number of frames between key frames |
| `maxKeyFrameIntervalDuration` | Real | Maximum time between key frames, in seconds |
| `videoWidth`, `videoHeight` | Longint | Recorded video size, in pixels |
| `maxRecordedDuration` | Longint | Stop recording automatically after this many seconds |
| `maxRecordedFileSize` | Real | Stop recording automatically at this file size, in bytes |

Option read **on Windows only**:

| Property | Type | Description |
|---|---|---|
| `file` | Text | Full path of an `.avi` file. The camera is recorded to this file while the session runs |

### Description

[`capture Start`](#capture-start) creates the camera session the first time it is called, attaches the preview to `window` at the given frame, and starts the camera. It returns immediately; the camera starts in the background, and the first frames appear a moment later.

**On macOS**, the work runs in 4D's main process.
- The session is **replaced** when `force` is `True`, or when `device` names a different camera than the current session. Otherwise the existing session is reused, and calling [`capture Start`](#capture-start) again only moves the preview (to another window, if `window` changed) and re-applies the options.
- `preset` is applied only if the camera supports it; an unsupported value is ignored.
- The recording options (`videoCodec` through `maxRecordedFileSize`) apply to movies recorded later with [`capture Start recording`](#capture-start-recording). Each value is added to the settings already in effect. A combination AVFoundation rejects is ignored silently; the recording then uses its default settings.
- The preview keeps the camera's aspect ratio inside the frame.

**On Windows**:
- The capture graph is **rebuilt** when `window` refers to a different window than before, or when `device` names a different camera. Otherwise [`capture Start`](#capture-start) only moves the preview and starts it again. `force` is ignored.
- `file` is read only when the graph is built (the first call, or after a window or device change). It can't be changed on a running session.
- The preview is letterboxed to the camera's aspect ratio inside the frame.
- If `window` is missing or invalid, nothing is created.

**Add the preview after the form has drawn.** The preview is added over everything already in the window. The test form calls [`capture Start`](#capture-start) from `On Timer`, armed in `On Load`, so that the layer goes on top of the form objects; on macOS it then calls `REDRAW WINDOW` to make Core Animation draw the new layer.

### Example

From the plugin's own test form (`TEST/method.4dm`): the options are prepared in `On Load`, and the session is started on the first timer tick.

```4d
	: ($event=On Timer:K2:25)
		
		SET TIMER:C645(0)
		
		If (Is Windows:C1573)
			//Form.file:=System folder(Desktop)+"test.avi"
		End if 
		
		capture Start(Form:C1466)
		
		If (Is macOS:C1572)
			//touch for core animation
			REDRAW WINDOW:C456(Current form window:C827)
		End if 
		
	: ($event=On Load:K2:1)
		
		Form:C1466.flipH:=True:C214
		Form:C1466.flipV:=False:C215
		Form:C1466.window:=Current form window:C827
		Form:C1466.status:=capture Request permission
		
		OBJECT GET COORDINATES:C663(*; "Frame"; $left; $top; $right; $bottom)
		
		If (Is macOS:C1572)
			
			//Form.device:=""
			
			//core animation frame is (0,0) at bottom left
			//the preview layer is relative to the bottom edge of the window
			GET WINDOW RECT:C443($l; $t; $r; $b; Current form window:C827)
			
			Form:C1466.x:=$left
			Form:C1466.y:=($b-$t)-($bottom)
			Form:C1466.width:=$right-$left
			Form:C1466.height:=$bottom-$top
			
		Else 
			Form:C1466.x:=$left
			Form:C1466.y:=$top
			Form:C1466.width:=$right-$left
			Form:C1466.height:=$bottom-$top
		End if 
		
		If (Is Windows:C1573)
			OBJECT SET VISIBLE:C603(*; "flip@"; False:C215)
			OBJECT SET VISIBLE:C603(*; "@recording"; False:C215)
		End if 
		
		//we want to add the preview layer after (on top of) all form objects
		SET TIMER:C645(-1)
```

A mirrored 720p preview with recording settings (macOS):

```4d
var $options : Object
$options:=New object
$options.window:=Current form window
$options.x:=20
$options.y:=20
$options.width:=640
$options.height:=360
$options.flipH:=True
$options.preset:="1280x720"
$options.videoCodec:="H264"
$options.averageBitRate:=4000000
$options.maxRecordedDuration:=60

capture Start($options)
```

Recording the preview to a file from the start (Windows):

```4d
var $options : Object
$options:=New object("window"; Current form window; "x"; 20; "y"; 20; "width"; 640; "height"; 480)
$options.file:=System folder(Desktop)+"capture.avi"

capture Start($options)
```

---

## capture Update

### Syntax

```4d
capture Update ( options )
```

| Parameter | Type | Description |
|---|---|---|
| `options` | `Object` | New frame and display settings |
| Result | — | Nothing |

| Property | Type | Description |
|---|---|---|
| `x`, `y`, `width`, `height` | Longint | New preview frame, in [platform coordinates](#preview-coordinates) |
| `hidden` | Boolean | `True` hides the preview, `False` shows it |
| `flipH`, `flipV` | Boolean | Mirror or flip the preview (**macOS only**) |

### Description

Changes how the running preview is displayed, without restarting the camera. Pass the complete set of values each time: a property you omit is read as `0` or `False`, so leaving out `width` gives the preview a width of 0, and leaving out `flipH` turns mirroring off.

[`capture Update`](#capture-update) can't move the preview to another window; use [`capture Start`](#capture-start) for that. It does nothing if no session exists.

**On macOS**, the change runs in 4D's main process and Core Animation applies it on its next frame, so frequent calls during a live resize can lag behind the form.

**On Windows**, `flipH` and `flipV` are ignored, and the preview is letterboxed to the camera's aspect ratio inside the frame.

### Example

From the plugin's own test form (`TEST/method.4dm`, `On Resize`):

```4d
	: ($event=On Resize:K2:27)
		
		OBJECT GET COORDINATES:C663(*; "Frame"; $left; $top; $right; $bottom)
		
		If (Is macOS:C1572)
			
			//core animation layer is independent of 4D form object resizing, need to do it ourselves
			GET WINDOW RECT:C443($l; $t; $r; $b; Current form window:C827)
			
			Form:C1466.x:=$left
			Form:C1466.y:=($b-$t)-($bottom)
			Form:C1466.width:=$right-$left
			Form:C1466.height:=$bottom-$top
			
		Else 
			Form:C1466.x:=$left
			Form:C1466.y:=$top
			Form:C1466.width:=$right-$left
			Form:C1466.height:=$bottom-$top
		End if 
		
		capture Update(Form:C1466)
		
		//however, because of deferred animation, it might be better to not move or resize frequently
```

The test form's `flipH` and `flipV` checkboxes call it with the form object, which already holds the frame:

```4d
capture Update (Form:C1466)
```

Hiding the preview while a dialog covers it, then showing it again:

```4d
Form.hidden:=True
capture Update(Form)

// ... show the dialog ...

Form.hidden:=False
capture Update(Form)
```

---

## capture Image

### Syntax

```4d
picture := capture Image
```

| Parameter | Type | Description |
|---|---|---|
| Result | `Picture` | The current frame; empty if none is available |

### Description

Takes a still picture from the running session.

**On macOS**, the command asks AVFoundation for a still image and waits for it, letting other 4D processes run meanwhile. The result is JPEG data at the session's resolution (see `preset` in [`capture Start`](#capture-start)).
- If the camera doesn't deliver within **10 seconds** (for example, it was unplugged), the command gives up and returns an empty picture.
- If the session is not running (never started, or stopped with [`capture Stop`](#capture-stop)), the command returns immediately with the **last picture taken**, or an empty picture if there is none.
- It returns an empty picture when camera access hasn't been granted.

(The 10-second limit and the unplugged-camera handling apply to builds from the current source. Older builds could wait forever, or crash when the camera disappeared.)

**On Windows**, the command copies the most recent frame and returns it as a 24-bit BMP. It returns an empty picture until the preview has delivered a first frame, so call it while the preview is running.

### Example

From the plugin's own test form (the `Snap` button):

```4d
Form:C1466.image:=capture Image 
```

Checking that a picture was actually returned:

```4d
var $picture : Picture
$picture:=capture Image

If (Picture size($picture)>0)
	Form.image:=$picture
Else 
	ALERT("No image: is the camera running?")
End if 
```

To save the picture to disk, combine it with 4D's picture commands (for example, converting it to a specific format before writing it to a file). Check the 4D Language Reference for the exact syntax on your version.

---

## capture Stop

### Syntax

```4d
capture Stop
```

| Parameter | Type | Description |
|---|---|---|
| Result | — | Nothing |

### Description

Stops the camera. The session itself is kept, so a later [`capture Start`](#capture-start) restarts it quickly with the same device.

**On macOS**, stopping the session also stops a recording in progress. The preview layer stays in the window (it is not removed) but no longer shows a live image; hide it with `hidden` in [`capture Update`](#capture-update) if needed. **On Windows**, the preview window is hidden.

Call [`capture Stop`](#capture-stop) when the form that hosts the preview closes; otherwise the camera keeps running.

### Example

From the plugin's own test form (`TEST/method.4dm`, `On Unload`):

```4d
	: ($event=On Unload:K2:2)
		
		SET TIMER:C645(0)
		
		capture Stop
```

---

## capture Start recording

### Syntax

```4d
capture Start recording ( options )
```

| Parameter | Type | Description |
|---|---|---|
| `options` | `Object` | `file`: full path of the movie file to write |
| Result | — | Nothing |

| Property | Type | Description |
|---|---|---|
| `file` | Text | Full path of the movie file, as a 4D system path (as returned by `System folder` or `Get 4D folder`). Use the `.mov` extension |

### Description

**macOS only.** Starts recording the running session to a QuickTime movie file. Recording starts in the background; the command returns at once. Start the session with [`capture Start`](#capture-start) first. The command has no effect while a recording is already in progress.

The path must be a 4D system path, which on macOS uses colons (`Macintosh HD:Users:…`). A POSIX path (`/Users/…`) is not converted.

The file uses the recording settings given to [`capture Start`](#capture-start) (`videoCodec`, `quality`, `averageBitRate`, `maxRecordedDuration`, and so on). Set those options there: [`capture Start recording`](#capture-start-recording) itself reads only `file`.

A recording stops when you call [`capture Stop recording`](#capture-stop-recording), when the session stops ([`capture Stop`](#capture-stop)), on a capture error, or when `maxRecordedDuration` or `maxRecordedFileSize` is reached.

**On Windows**, this command does nothing. To record on Windows, pass `file` to [`capture Start`](#capture-start).

### Example

From the plugin's own test form (the `Start recording` button):

```4d
Form:C1466.file:=System folder:C487(Desktop:K41:16)+"test.mov"

capture Start recording (Form:C1466)
```

A recording file named after the current time:

```4d
var $options : Object
$options:=New object
$options.file:=System folder(Desktop)+"capture-"+Replace string(String(Current time); ":"; "-")+".mov"

capture Start recording($options)
```

---

## capture Pause recording

### Syntax

```4d
capture Pause recording
```

| Parameter | Type | Description |
|---|---|---|
| Result | — | Nothing |

### Description

**macOS only.** Pauses the recording in progress; the file stays open. Resume it with [`capture Resume recording`](#capture-resume-recording). The command has no effect if nothing is being recorded, and does nothing on Windows.

### Example

From the plugin's own test form (the `Pause recording` button):

```4d
capture Pause recording 
```

---

## capture Resume recording

### Syntax

```4d
capture Resume recording
```

| Parameter | Type | Description |
|---|---|---|
| Result | — | Nothing |

### Description

**macOS only.** Resumes a recording paused with [`capture Pause recording`](#capture-pause-recording). The movie continues in the same file, without the paused interval. The command does nothing on Windows.

### Example

From the plugin's own test form (the `Resume recording` button):

```4d
capture Resume recording 
```

---

## capture Stop recording

### Syntax

```4d
capture Stop recording
```

| Parameter | Type | Description |
|---|---|---|
| Result | — | Nothing |

### Description

**macOS only.** Stops the recording in progress. The camera and the preview keep running. AVFoundation finishes writing the file in the background, so the file may not be complete for a short moment after the command returns. The command does nothing on Windows.

### Example

From the plugin's own test form (the `Stop recording` button):

```4d
capture Stop recording 
```

---

## Preview coordinates

The preview frame passed to [`capture Start`](#capture-start) and [`capture Update`](#capture-update) is not in form coordinates.

- **On macOS** it is relative to the window's content area with the origin at the **bottom-left** corner, and `y` grows upward. To place the preview over a form object, convert its `$bottom` coordinate as the test form does: `y := window height - $bottom`.
- **On Windows** it is relative to the window's client area with the origin at the **top-left** corner, the same orientation as form coordinates.

A reusable project method that returns a frame for a form object:

**`CAPTURE_FRAME ( objectName ) → Object`**

| Parameter | Type | Description |
|---|---|---|
| `objectName` | Text | Name of the form object the preview should cover |
| Result | `Object` | `window`, `x`, `y`, `width`, `height` for the current form window |

```4d
#DECLARE($objectName : Text) : Object

var $left; $top; $right; $bottom : Integer
var $l; $t; $r; $b : Integer
var $frame : Object

OBJECT GET COORDINATES(*; $objectName; $left; $top; $right; $bottom)

$frame:=New object("window"; Current form window)
$frame.x:=$left
$frame.width:=$right-$left
$frame.height:=$bottom-$top

If (Is macOS)
	GET WINDOW RECT($l; $t; $r; $b; Current form window)
	$frame.y:=($b-$t)-$bottom
Else 
	$frame.y:=$top
End if 

$0:=$frame
```

---

## Full example: a camera form

A form with a rectangle named `Frame` (where the preview goes) and a picture variable bound to `Form.image`. The form method requests access, starts the preview once the form is drawn, follows resizes, and stops the camera when the form closes. It uses the [`CAPTURE_FRAME`](#preview-coordinates) method above.

```4d
var $frame : Object

Case of 
	: (Form event code=On Load)
		Form.status:=capture Request permission
		Form.flipH:=True
		SET TIMER(-1)  // start after the form is drawn, so the preview is on top
		
	: (Form event code=On Timer)
		SET TIMER(0)
		$frame:=CAPTURE_FRAME("Frame")
		$frame.flipH:=Form.flipH
		capture Start($frame)
		If (Is macOS)
			REDRAW WINDOW(Current form window)
		End if 
		
	: (Form event code=On Resize)
		$frame:=CAPTURE_FRAME("Frame")
		$frame.flipH:=Form.flipH
		capture Update($frame)
		
	: (Form event code=On Unload)
		SET TIMER(0)
		capture Stop
		
End case 
```

A `Snap` button's object method:

```4d
Form.image:=capture Image
```

---

## Error handling & troubleshooting

- **Nothing appears and no error is raised (macOS).** Camera access has not been granted. Check `success` and `errorMessage` from [`capture Request permission`](#capture-request-permission); every other command except [`capture Devices`](#capture-devices) does nothing without it.
- **`success` is `False` but the preview works (macOS).** The microphone check failed after the camera was granted (for example, `NSMicrophoneUsageDescription` is missing). Camera features work; recordings may have no sound.
- **"permission not determined" on the first call.** macOS is showing its permission dialog. Call [`capture Request permission`](#capture-request-permission) again after the user answers.
- **"…is missing in app info.plist" or "…in app entitlement".** The 4D application (not the plugin) must declare camera use and be signed with the camera entitlement. See [Requirements & platform notes](#requirements--platform-notes).
- **The preview is in the wrong place on macOS.** The frame is measured from the bottom-left corner. Convert `y` as shown in [Preview coordinates](#preview-coordinates).
- **The preview is hidden behind or drawn over the wrong objects.** The preview is added on top of whatever the window shows when [`capture Start`](#capture-start) runs. Call it from `On Timer` after `On Load`, as the test form does, and use `hidden` in [`capture Update`](#capture-update) to get it out of the way.
- **The preview doesn't follow the form.** 4D doesn't manage it; call [`capture Update`](#capture-update) on `On Resize`.
- **[`capture Image`](#capture-image) returns an empty picture.** The session isn't running yet (on Windows, no frame has been delivered yet), permission is missing, or the camera didn't answer within 10 seconds on macOS.
- **[`capture Image`](#capture-image) returns an old picture (macOS).** The session was stopped; the command returns the last picture taken. Start the session again first.
- **A device from [`capture Devices`](#capture-devices) isn't used.** Pass `uniqueID` on macOS or `devicePath` on Windows as `device`, not the display name.
- **Recording commands do nothing on Windows.** Recording on Windows uses the `file` option of [`capture Start`](#capture-start); the recording commands are macOS only.
- **Recording settings seem ignored (macOS).** Set them in [`capture Start`](#capture-start), not in [`capture Start recording`](#capture-start-recording). A combination AVFoundation rejects is dropped silently.
- **The compiler rejects a command in a preemptive method.** Only [`capture Request permission`](#capture-request-permission) and [`capture Devices`](#capture-devices) are thread-safe; run the other commands in a cooperative process.
- **The camera stays on after the form closes.** Call [`capture Stop`](#capture-stop) in `On Unload`.

---

## Quick reference

```4d
// macOS: once per session, before anything else
$status:=capture Request permission  // $status.success, $status.errorMessage

// pick a device (optional)
$devices:=capture Devices  // macOS: uniqueID, localizedName…  Windows: devicePath, friendlyName…

// start a preview over a form area (y from the bottom on macOS)
$o:=New object("window"; Current form window; "x"; 20; "y"; 20; "width"; 320; "height"; 240)
$o.device:=$devices[0].uniqueID  // Windows: $devices[0].devicePath
capture Start($o)

// follow the form
$o.width:=640
$o.height:=480
capture Update($o)

// still picture (JPEG on macOS, BMP on Windows)
$picture:=capture Image

// record (macOS)
capture Start recording(New object("file"; System folder(Desktop)+"movie.mov"))
capture Pause recording
capture Resume recording
capture Stop recording

// done
capture Stop
```
