//%attributes = {}
C_TEXT:C284($1;$applicationPath;$2;$signingIdentity;$key)
C_OBJECT:C1216($3;$keys;$4;$entitlements;$5;$options;$0;$status)

$status:=New object:C1471("success";False:C215)

If (Count parameters:C259>4)
	
	If (Is macOS:C1572)
		
		  //$1
		$applicationPath:=$1
		If ($applicationPath="")
			$applicationPath:=Application file:C491
		End if 
		
		If ($applicationPath[[Length:C16($applicationPath)]]=Folder separator:K24:12)
			$applicationPath:=Substring:C12($applicationPath;1;Length:C16($applicationPath)-1)
		End if 
		
		  //$2
		$signingIdentity:=$2
		If ($signingIdentity="")
			$identity:=find_identity 
			$identity:=$identity.query("name == :1";"Developer ID Application:@")
			If ($identity.length#0)
				$signingIdentity:=$identity[0].name
			End if 
		End if 
		
		If (True:C214)
			  //keys to always insert in Info.plist (UsageDescription) because they can not be added later
			  //https://developer.apple.com/documentation/bundleresources/information_property_list
			$keys:=New object:C1471
			$keys.NSRequiresAquaSystemAppearance:="NO"
			$keys.NSAppleEventsUsageDescription:=""
			$keys.NSCalendarsUsageDescription:=""
			$keys.NSContactsUsageDescription:=""
			$keys.NSRemindersUsageDescription:=""
			$keys.NSCameraUsageDescription:=""
			$keys.NSMicrophoneUsageDescription:=""
			$keys.NSLocationUsageDescription:=""
			$keys.NSPhotoLibraryUsageDescription:=""
			$keys.NSSystemAdministrationUsageDescription:=""
		End if 
		
		If (True:C214)
			  //Hardened Runtime entitlements
			  //https://developer.apple.com/documentation/security/hardened_runtime_entitlements?language=objc
			$entitlements:=New object:C1471
			$entitlements["com.apple.security.automation.apple-events"]:=True:C214
			  // whether the app may send Apple Events to other app
			$entitlements["com.apple.security.cs.allow-dyld-environment-variables"]:=True:C214
			  // whether the app may be impacted by dyld environment variables
			$entitlements["com.apple.security.cs.allow-jit"]:=True:C214
			  // whether the app may create writable and executable memory using the MAP_JIT flag
			$entitlements["com.apple.security.cs.allow-unsigned-executable-memory"]:=True:C214
			  // whether the app may create writable and executable memory without using the MAP_JIT flag
			$entitlements["com.apple.security.cs.debugger"]:=True:C214
			  // whether the app is a debugger and may attach to other processes or get task ports
			$entitlements["com.apple.security.cs.disable-executable-page-protection"]:=True:C214
			  // whether to disable code signing protections while launching the app
			$entitlements["com.apple.security.cs.disable-library-validation"]:=True:C214
			  // whether the app may load plug-ins or frameworks signed by other developers
			
			$entitlements["com.apple.security.get-task-allow"]:=True:C214  //need this for debugging
			
			$entitlements["com.apple.security.device.audio-input"]:=True:C214
			  // whether the app may record audio using the built-in microphone and access audio input using Core Audio
			$entitlements["com.apple.security.device.camera"]:=True:C214
			  // whether the app may capture movies and still images using the built-in camera
			$entitlements["com.apple.security.personal-information.photos-library"]:=True:C214
			  // whether the app may have read-write access to the user's Photos library
			$entitlements["com.apple.security.personal-information.location"]:=True:C214
			  // whether the app may access location information from Location Services
			$entitlements["com.apple.security.personal-information.addressbook"]:=True:C214
			  // whether the app may have read-write access to contacts in the user's address book
			$entitlements["com.apple.security.personal-information.calendars"]:=True:C214
			  // whether the app may have read-write access to the user's calendar
		End if 
		
		  //$3: plist keys
		If ($3#Null:C1517)
			For each ($key;$3)
				$keys[$key]:=$3[$key]
			End for each 
		End if 
		
		  //$4: entitlements
		If ($4#Null:C1517)
			For each ($key;$4)
				$entitlements[$key]:=$4[$key]
			End for each 
		End if 
		
		C_LONGINT:C283($i)
		C_TEXT:C284($keyName)
		
		C_BLOB:C604($stdIn;$stdOut;$stdErr)
		C_LONGINT:C283($pid)
		
		C_OBJECT:C1216($applicationPathObject)
		$applicationPathObject:=Path to object:C1547($applicationPath)
		
		If (Test path name:C476($applicationPath)=Is a folder:K24:2)  //(path object).isFolder is false if path does not end with separator
			
			  //bundle, framework, app
			$bundleType:=Substring:C12($applicationPathObject.extension;2)
			$status[$bundleType]:=$applicationPath
			
			  //look for plist for .app or .bundle
			$infoPlistPath:=$applicationPath+\
				Choose:C955($applicationPathObject.isFolder;"";Folder separator:K24:12)+\
				"Contents"+Folder separator:K24:12+"Info.plist"
			$plistExists:=(Test path name:C476($infoPlistPath)=Is a document:K24:1)
			
			If (Not:C34($plistExists))
				  //look for plist for .framework
				$resourcesPath:=$applicationPath+Choose:C955($applicationPathObject.isFolder;"";Folder separator:K24:12)+"Resources"
				RESOLVE ALIAS:C695($resourcesPath;$resourcesPath)
				$infoPlistPath:=$resourcesPath+"Info.plist"
				$plistExists:=(Test path name:C476($infoPlistPath)=Is a document:K24:1)
			End if 
			
			If (Not:C34($plistExists))
				  //look for plist for .framework where Resources is not a symbolic link
				$resourcesPath:=$applicationPath+Choose:C955($applicationPathObject.isFolder;"";Folder separator:K24:12)+"Resources"+Folder separator:K24:12
				$infoPlistPath:=$resourcesPath+"Info.plist"
				$plistExists:=(Test path name:C476($infoPlistPath)=Is a document:K24:1)
			End if 
			
			If ($plistExists) & ($bundleType="app")
				C_TEXT:C284($dom)
				ON ERR CALL:C155("error_xml")
				$dom:=DOM Parse XML source:C719($infoPlistPath)
				ON ERR CALL:C155("")
				If (OK=1)
					C_TEXT:C284($dict)
					$dict:=DOM Find XML element:C864($dom;"plist/dict")
					
					ARRAY TEXT:C222($domKeys;0)
					$domKey:=DOM Find XML element:C864($dict;"dict/key";$domKeys)
					
					  //remove keys we want to write
					For ($i;1;Size of array:C274($domKeys))
						$domKey:=$domKeys{$i}
						DOM GET XML ELEMENT VALUE:C731($domKey;$keyName)
						If ($keys[$keyName]#Null:C1517)
							DOM REMOVE XML ELEMENT:C869(DOM Get next sibling XML element:C724($domKey))
							DOM REMOVE XML ELEMENT:C869($domKey)
						End if 
					End for 
					
					  //write keys
					For each ($key;$keys)
						Case of 
							: (Value type:C1509($keys[$key])=Is text:K8:3)
								DOM SET XML ELEMENT VALUE:C868(DOM Create XML element:C865($dict;"key");$key)
								DOM SET XML ELEMENT VALUE:C868(DOM Create XML element:C865($dict;"string");$keys[$key])
							: (Value type:C1509($keys[$key])=Is boolean:K8:9)
								DOM SET XML ELEMENT VALUE:C868(DOM Create XML element:C865($dict;"key");$key)
								If (Bool:C1537($keys[$key]))
									$value:=DOM Create XML element:C865($dict;"true")
								Else 
									$value:=DOM Create XML element:C865($dict;"false")
								End if 
							Else 
								  //dict, array, etc.
						End case 
					End for each 
					
					ON ERR CALL:C155("error_xml")
					DOM EXPORT TO FILE:C862($dom;$infoPlistPath)
					ON ERR CALL:C155("")
					
					If (OK=1)
						
						$status.success:=True:C214
						$status.plist:=$infoPlistPath
						
						$infoPlistPathObject:=Path to object:C1547($infoPlistPath)
						
						SET ENVIRONMENT VARIABLE:C812("_4D_OPTION_CURRENT_DIRECTORY";$infoPlistPathObject.parentFolder)
						SET ENVIRONMENT VARIABLE:C812("_4D_OPTION_BLOCKING_EXTERNAL_PROCESS";"TRUE")
						LAUNCH EXTERNAL PROCESS:C811("plutil -convert xml1 "+escape_param ($infoPlistPathObject.name+$infoPlistPathObject.extension);$stdIn;$stdOut;$stdErr;$pid)
						
						If (Not:C34(Bool:C1537($5.remove)))
							  //modification to info.plist makes the signature invalid
							$command:="codesign --verbose --sign "+\
								escape_param ($signingIdentity)+" "+\
								escape_param ($infoPlistPathObject.name+$infoPlistPathObject.extension)
							
							SET ENVIRONMENT VARIABLE:C812("_4D_OPTION_CURRENT_DIRECTORY";$infoPlistPathObject.parentFolder)
							SET ENVIRONMENT VARIABLE:C812("_4D_OPTION_BLOCKING_EXTERNAL_PROCESS";"TRUE")
							LAUNCH EXTERNAL PROCESS:C811($command;$stdIn;$stdOut;$stdErr;$pid)
							
							If (BLOB size:C605($stdErr)#0)
								$status.codesign:=Convert to text:C1012($stdErr;"utf-8")
							End if 
						End if 
						
					Else 
						$status.error:=New object:C1471("ERROR";ERROR;"ERROR FORMULA";ERROR FORMULA)
					End if 
					DOM CLOSE XML:C722($dom)
				Else 
					$status.error:=New object:C1471("ERROR";ERROR;"ERROR FORMULA";ERROR FORMULA)
				End if 
			Else 
				  //no plist in package!
			End if 
		Else 
			  //not a package, no plist
		End if 
		
		If (Bool:C1537($5.remove))
			
			If (Test path name:C476($applicationPath)=Is a folder:K24:2)
				
				  //recursively remove extended attributes incase of --remove-signature
				SET ENVIRONMENT VARIABLE:C812("_4D_OPTION_CURRENT_DIRECTORY";$applicationPath+\
					Choose:C955($applicationPathObject.isFolder;"";Folder separator:K24:12))
				SET ENVIRONMENT VARIABLE:C812("_4D_OPTION_BLOCKING_EXTERNAL_PROCESS";"TRUE")
				LAUNCH EXTERNAL PROCESS:C811("xattr -cr .";$stdIn;$stdOut;$stdErr;$pid)
				
			End if 
			
		End if 
		
		If (Bool:C1537($5.remove))
			$command:="codesign --remove-signature "+\
				escape_param ($applicationPathObject.name+$applicationPathObject.extension)
		Else 
			If (Bool:C1537($5.local))
				$command:="codesign --verbose --deep "
			Else 
				$command:="codesign --verbose --deep --timestamp "
			End if 
			If (Bool:C1537($5.force))
				$command:=$command+"--force "
			End if 
			
		End if 
		
		If (Not:C34(Bool:C1537($5.remove)))
			
			If ($4=Null:C1517)
				
				  //no hardened runtime
				$command:=$command+" --sign "+\
					escape_param ($signingIdentity)+" "+\
					escape_param ($applicationPathObject.name+$applicationPathObject.extension)
				
			Else 
				
				  //create entitlements.plist
				$entitlementsPath:=Temporary folder:C486+Generate UUID:C1066+Folder separator:K24:12
				CREATE FOLDER:C475($entitlementsPath;*)
				$entitlementsPath:=$entitlementsPath+"entitlements.plist"
				$dom:=DOM Create XML Ref:C861("plist")
				$doctype:=DOM Append XML child node:C1080($dom;XML DOCTYPE:K45:19;"plist PUBLIC \"-//Apple//DTD PLIST 1.0//EN\" \"http://www.apple.com/DTDs/PropertyList-1.0.dtd\"")
				DOM SET XML ATTRIBUTE:C866($dom;"version";"1.0")
				$dict:=DOM Create XML element:C865($dom;"dict")
				For each ($key;$entitlements)
					Case of 
						: (Value type:C1509($entitlements[$key])=Is text:K8:3)
							DOM SET XML ELEMENT VALUE:C868(DOM Create XML element:C865($dict;"key");$key)
							DOM SET XML ELEMENT VALUE:C868(DOM Create XML element:C865($dict;"string");$keys[$key])
						: (Value type:C1509($entitlements[$key])=Is boolean:K8:9)
							DOM SET XML ELEMENT VALUE:C868(DOM Create XML element:C865($dict;"key");$key)
							If (Bool:C1537($entitlements[$key]))
								$value:=DOM Create XML element:C865($dict;"true")
							Else 
								$value:=DOM Create XML element:C865($dict;"false")
							End if 
						Else 
							  //TODO: string, array, dict...
					End case 
				End for each 
				ON ERR CALL:C155("error_xml")
				DOM EXPORT TO FILE:C862($dom;$entitlementsPath)
				ON ERR CALL:C155("")
				DOM CLOSE XML:C722($dom)
				
				$entitlementsPathObject:=Path to object:C1547($entitlementsPath)
				SET ENVIRONMENT VARIABLE:C812("_4D_OPTION_CURRENT_DIRECTORY";$entitlementsPathObject.parentFolder)
				SET ENVIRONMENT VARIABLE:C812("_4D_OPTION_BLOCKING_EXTERNAL_PROCESS";"TRUE")
				LAUNCH EXTERNAL PROCESS:C811("plutil -convert xml1 "+escape_param ($entitlementsPathObject.name+$entitlementsPathObject.extension);$stdIn;$stdOut;$stdErr;$pid)
				
				$command:=$command+" --options=runtime --entitlements "+\
					escape_param (Convert path system to POSIX:C1106($entitlementsPath))+" --sign "+\
					escape_param ($signingIdentity)+" "+\
					escape_param ($applicationPathObject.name+$applicationPathObject.extension)
				
				$status.entitlements:=$entitlements
				
			End if 
			
		End if 
		
		SET ENVIRONMENT VARIABLE:C812("_4D_OPTION_CURRENT_DIRECTORY";$applicationPathObject.parentFolder)
		SET ENVIRONMENT VARIABLE:C812("_4D_OPTION_BLOCKING_EXTERNAL_PROCESS";"TRUE")
		
		CLEAR VARIABLE:C89($stdOut)
		CLEAR VARIABLE:C89($stdErr)
		
		LAUNCH EXTERNAL PROCESS:C811($command;$stdIn;$stdOut;$stdErr;$pid)
		
		If (BLOB size:C605($stdErr)#0)
			$status.codesign:=Convert to text:C1012($stdErr;"utf-8")
			$status.success:=($status.codesign="@replacing existing signature@")
			$status.success:=$status.success | ($status.codesign="@signed@")  //app bundle, bundle, generic...
			$status.codesign:=Split string:C1554($status.codesign;"\n";sk ignore empty strings:K86:1 | sk trim spaces:K86:2)
		Else 
			$status.success:=True:C214
		End if 
		
	End if 
End if 

$0:=$status