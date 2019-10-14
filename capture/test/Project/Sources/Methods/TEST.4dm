//%attributes = {}
If (False:C215)
	
	$xcode:=xcode_get_path   //xcode-select -p
	
	xcode_SET_PATH ($xcode.paths[1])
	
End if 

C_TEXT:C284($signingIdentity)
$identity:=find_identity 
$identity:=$identity.query("name == :1";"Developer ID Application:@")
If ($identity.length#0)
	$signingIdentity:=$identity[0].name
End if 

C_OBJECT:C1216($noEntitlements;$noOptions)  //alias for Null: no entitlements
$entitlements:=New object:C1471  //empty object: default entitlements

$plist:=New object:C1471  //empty object: use current plist (no change)


$force:=New object:C1471("force";True:C214)
$remove:=New object:C1471("remove";True:C214)

$path:="Macintosh HD:Applications:4D:4D v17.3:4D.app:"

$versionID:="v1"

$signApp:=True:C214
$signNativeComponents:=True:C214

  //these are not necessary (signed with .app, presumably)
$signFrameworks:=False:C215
$signInternalComponents:=False:C215

$signPlugins:=True:C214
$signSASLPlugins:=True:C214
$signPHP:=True:C214
$signHelpers:=True:C214
$signUpdater:=True:C214

$statuses:=New collection:C1472
ARRAY TEXT:C222($componentPaths;0)

If ($path[[Length:C16($path)]]=Folder separator:K24:12)
	$path:=Substring:C12($path;1;Length:C16($path)-1)
End if 

If ($signApp)
	
	  //codesign: inside ===> outside
	
	  //first, clean all (--remove-signature and xaatr -rc)
	codesign ($path;$signingIdentity;$plist;$entitlements;$remove)
	
	If ($signNativeComponents)
		  //--remove-signature, because CEF has nested code
		$componentPath:=$path+New collection:C1472("";"Contents";"Native Components";"").join(Folder separator:K24:12)
		If (Test path name:C476($componentPath)=Is a folder:K24:2)
			FOLDER LIST:C473($componentPath;$componentPaths)
			For ($i;1;Size of array:C274($componentPaths))
				codesign ($componentPath+$componentPaths{$i};$signingIdentity;$plist;$noentitlements;$remove)
			End for 
		End if 
	End if 
	
	If ($signHelpers)
		  //for 17.x
		$componentPath:=$path+New collection:C1472("";"Contents";"MacOS";"HelperTool").join(Folder separator:K24:12)
		If (Test path name:C476($componentPath)=Is a document:K24:1)
			$statuses.push(codesign ($componentPath;$signingIdentity;$plist;$entitlements;$force))
		End if 
		$componentPath:=$path+New collection:C1472("";"Contents";"MacOS";"InstallTool").join(Folder separator:K24:12)
		If (Test path name:C476($componentPath)=Is a document:K24:1)
			$statuses.push(codesign ($componentPath;$signingIdentity;$plist;$entitlements;$force))
		End if 
		  //for R release
		$componentPath:=$path+New collection:C1472("";"Contents";"MacOS";"InstallTool.app";"Contents";"Library";"LaunchServices";"com.4D.Helper").join(Folder separator:K24:12)
		If (Test path name:C476($componentPath)=Is a document:K24:1)
			$statuses.push(codesign ($componentPath;$signingIdentity;$plist;$entitlements;$force))
		End if 
		$componentPath:=$path+New collection:C1472("";"Contents";"MacOS";"InstallTool.app";"").join(Folder separator:K24:12)
		If (Test path name:C476($componentPath)=Is a document:K24:1)
			$statuses.push(codesign ($componentPath;$signingIdentity;$plist;$entitlements;$force))
		End if 
	End if 
	
	If ($signNativeComponents)
		
		  //sometimes, there is a framework folder here; symlink here will prevent codesign, so delete it
		$componentPath:=$path+New collection:C1472("";"Contents";"Native Components";"WebViewerCEF.bundle";"Contents";"Frameworks";"4D Helper.app";"Contents";"Frameworks";"").join(Folder separator:K24:12)
		DELETE FOLDER:C693($componentPath;Delete with contents:K24:24)
		
		$componentPath:=$path+New collection:C1472("";"Contents";"Native Components";"WebViewerCEF.bundle";"Contents";"Frameworks";"4D Helper.app";"Contents";"MacOS";"4D Helper").join(Folder separator:K24:12)
		
		$from:="@executable_path/../Frameworks/Chromium Embedded Framework.framework/Chromium Embedded Framework"
		$to:="@executable_path/../../../../Frameworks/Chromium Embedded Framework.framework/Chromium Embedded Framework"
		install_name_tool ($componentPath;$from;$to)
		
		  //sign with hardened runtime because this is an app
		$componentPath:=$path+New collection:C1472("";"Contents";"Native Components";"WebViewerCEF.bundle";"Contents";"Frameworks";"4D Helper.app";"").join(Folder separator:K24:12)
		$statuses.push(codesign ($componentPath;$signingIdentity;$plist;$entitlements;$force))
		
		  //first, sign dylibs
		$componentPath:=$path+New collection:C1472("";"Contents";"Native Components";"WebViewerCEF.bundle";"Contents";"Frameworks";"Chromium Embedded Framework.framework";"Libraries";"").join(Folder separator:K24:12)
		
		  //for R release
		If (Test path name:C476($componentPath)=Is a folder:K24:2)
			DOCUMENT LIST:C474($componentPath;$componentPaths;Recursive parsing:K24:13 | Ignore invisible:K24:16 | Absolute path:K24:14)
			For ($i;1;Size of array:C274($componentPaths))
				$statuses.push(codesign ($componentPaths{$i};$signingIdentity;$plist;$noentitlements;$force))
			End for 
		End if 
		
		  //next, sign Chromium Embedded Framework
		$componentPath:=$path+New collection:C1472("";"Contents";"Native Components";"WebViewerCEF.bundle";"Contents";"Frameworks";"Chromium Embedded Framework.framework";"").join(Folder separator:K24:12)
		$statuses.push(codesign ($componentPath;$signingIdentity;$plist;$noentitlements;$force))
		
		  //sign these without hardened runtime; don't use --deep or 4D Helper will become invalid
		$componentPath:=$path+New collection:C1472("";"Contents";"Native Components";"").join(Folder separator:K24:12)
		FOLDER LIST:C473($componentPath;$componentPaths)
		For ($i;1;Size of array:C274($componentPaths))
			$statuses.push(codesign ($componentPath+$componentPaths{$i};$signingIdentity;$plist;$noentitlements;$noOptions))
		End for 
	End if 
	
	If ($signUpdater)
		
		  //first, sign dylibs
		$componentPath:=$path+New collection:C1472("";"Contents";"Resources";"Updater";"Updater.app";"Contents";"Frameworks";"").join(Folder separator:K24:12)
		
		If (Test path name:C476($componentPath)=Is a folder:K24:2)
			DOCUMENT LIST:C474($componentPath;$componentPaths;Recursive parsing:K24:13 | Ignore invisible:K24:16 | Absolute path:K24:14)
			For ($i;1;Size of array:C274($componentPaths))
				$statuses.push(codesign ($componentPaths{$i};$signingIdentity;$plist;$noentitlements;$force))
			End for 
			
			  //sign with hardened runtime because this is an app
			$componentPath:=$path+New collection:C1472("";"Contents";"Resources";"Updater";"Updater.app";"").join(Folder separator:K24:12)
			$statuses.push(codesign ($componentPath;$signingIdentity;$plist;$entitlements;$force))
			
		End if 
		
	End if 
	
	If ($signFrameworks)
		$componentPath:=$path+New collection:C1472("";"Contents";"Frameworks";"").join(Folder separator:K24:12)
		FOLDER LIST:C473($componentPath;$componentPaths)
		For ($i;1;Size of array:C274($componentPaths))
			$statuses.push(codesign ($componentPath+$componentPaths{$i};$signingIdentity;$plist;$noentitlements;$force))
		End for 
	End if 
	
	If ($signInternalComponents)
		$componentPath:=$path+New collection:C1472("";"Contents";"Resources";"Internal Components";"").join(Folder separator:K24:12)
		DOCUMENT LIST:C474($componentPath;$componentPaths;Recursive parsing:K24:13 | Ignore invisible:K24:16 | Absolute path:K24:14)
		$extensions:=New collection:C1472(".html";".json";".js")
		For ($i;1;Size of array:C274($componentPaths))
			$nativeComponent:=$componentPaths{$i}
			If ($extensions.indexOf(Path to object:C1547($nativeComponent).extension)#-1)
				$statuses.push(codesign ($nativeComponent;$signingIdentity;$plist;$noentitlements;$force))
			End if 
		End for 
	End if 
	
	If ($signPlugins)
		  //sign these without hardened runtime
		  //need to put Internet Commands 17R5 instead of 17.2
		$componentPath:=$path+New collection:C1472("";"Contents";"Plugins";"").join(Folder separator:K24:12)
		FOLDER LIST:C473($componentPath;$componentPaths)
		For ($i;1;Size of array:C274($componentPaths))
			$statuses.push(codesign ($componentPath+$componentPaths{$i};$signingIdentity;$plist;$noEntitlements;$force))
		End for 
	End if 
	
	If ($signSASLPlugins)
		  //sign without hardened runtime
		$componentPath:=$path+New collection:C1472("";"Contents";"SASL Plugins";"libdigestmd5.plugin").join(Folder separator:K24:12)
		$statuses.push(codesign ($componentPath;$signingIdentity;$plist;$noEntitlements;$force))
	End if 
	
	If ($signPHP)
		  //sign with hardened runtime
		$componentPath:=$path+New collection:C1472("";"Contents";"Resources";"php";"Mac";"php-fcgi-4d").join(Folder separator:K24:12)
		$statuses.push(codesign ($componentPath;$signingIdentity;$plist;$entitlements;$force))
	End if 
	
	  //the app 
	$statuses.push(codesign ($path;$signingIdentity;$plist;$entitlements;$noOptions))
	
End if 

TRACE:C157

$statuses.push(hdiutil ($path;System folder:C487(Desktop:K41:16)+$versionID+Folder separator:K24:12))  //larger, but faster than ditto (zip)

xcode_SET_PATH   //use default

C_OBJECT:C1216($params)
$params:=New object:C1471

  //to upload
$params.primaryBundleId:="com.4D."+$versionID
$params.file:=System folder:C487(Desktop:K41:16)+$versionID+Folder separator:K24:12+"4D.dmg"

$params.primaryBundleId:="com.4D."+$versionID
$params.username:="keisuke.miyako@4d.com"  //account
$params.password:="@keychain:altool"  //location for app specific password

$status:=altool ($params)

TRACE:C157
