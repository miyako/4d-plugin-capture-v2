//%attributes = {"invisible":true}
C_TEXT:C284($1;$applicationPath;$2;$archivePath;$3;$signingIdentity;$4;$installLocation)
C_OBJECT:C1216($0;$status)

$status:=New object:C1471("success";False:C215)

If (Count parameters:C259>1)
	
	If (Is macOS:C1572)
		
		  //$1
		$applicationPath:=$1
		If ($applicationPath="")
			$applicationPath:=Application file:C491
		End if 
		
		If ($applicationPath[[Length:C16($applicationPath)]]=Folder separator:K24:12)
			$applicationPath:=Substring:C12($applicationPath;1;Length:C16($applicationPath)-1)
		End if 
		
		$applicationPathObject:=Path to object:C1547($applicationPath)
		
		  //$2
		$archivePath:=$2
		If ($archivePath="")
			$archivePath:=$applicationPathObject.parentFolder+$applicationPathObject.name+".pkg"
		End if 
		
		$archivePathObject:=Path to object:C1547($archivePath)
		
		  //if $2 is a folder, use $1.name+".pkg"
		If ($archivePathObject.isFolder)
			$archivePath:=$archivePath+$applicationPathObject.name+".pkg"
			$archivePathObject:=Path to object:C1547($archivePath)
		End if 
		
		  //$3
		If (Count parameters:C259>2)
			$signingIdentity:=$3
		End if 
		
		If ($signingIdentity="")
			$identity:=find_identity 
			$identity:=$identity.query("name == :1";"Developer ID Installer:@")
			If ($identity.length#0)
				$signingIdentity:=$identity[0].name
			End if 
		End if 
		
		$installLocation:="/Applications"
		
		  //$4
		If (Count parameters:C259>3)
			$installLocation:=$installLocation+"/"+$4
		End if 
		
		If ($archivePath="")
			$archivePath:=$applicationPathObject.parentFolder+$applicationPathObject.name+".pkg"
		End if 
		
		$payloadPath:=Temporary folder:C486+Generate UUID:C1066+Folder separator:K24:12
		CREATE FOLDER:C475($payloadPath;*)
		
		C_BLOB:C604($stdIn;$stdOut;$stdErr)
		
		$command:="mkdir payload"
		
		SET ENVIRONMENT VARIABLE:C812("_4D_OPTION_CURRENT_DIRECTORY";$payloadPath)
		LAUNCH EXTERNAL PROCESS:C811($command;$stdIn;$stdOut;$stdErr;$pid)
		
		C_LONGINT:C283($pid)
		  //better to receive output in xml plist 
		$command:="cp -R "+\
			escape_param (Convert path system to POSIX:C1106($applicationPath))+" "+\
			escape_param (Convert path system to POSIX:C1106($payloadPath+"payload"))
		SET ENVIRONMENT VARIABLE:C812("_4D_OPTION_BLOCKING_EXTERNAL_PROCESS";"TRUE")
		LAUNCH EXTERNAL PROCESS:C811($command;$stdIn;$stdOut;$stdErr;$pid)
		
		$command:="pkgbuild --analyze --root payload component.plist"
		
		SET ENVIRONMENT VARIABLE:C812("_4D_OPTION_CURRENT_DIRECTORY";$payloadPath)
		LAUNCH EXTERNAL PROCESS:C811($command;$stdIn;$stdOut;$stdErr;$pid)
		
		$command:="plutil -replace BundleIsRelocatable -bool NO component.plist"
		SET ENVIRONMENT VARIABLE:C812("_4D_OPTION_CURRENT_DIRECTORY";$payloadPath)
		LAUNCH EXTERNAL PROCESS:C811($command;$stdIn;$stdOut;$stdErr;$pid)
		
		$command:="pkgbuild --sign "+escape_param ($signingIdentity)+" --root payload --install-location "+\
			$installLocation+" --component-plist component.plist "+\
			escape_param (Convert path system to POSIX:C1106($archivePath))
		SET ENVIRONMENT VARIABLE:C812("_4D_OPTION_CURRENT_DIRECTORY";$payloadPath)
		LAUNCH EXTERNAL PROCESS:C811($command;$stdIn;$stdOut;$stdErr;$pid)
		
		If (BLOB size:C605($stdErr)#0)
			$status.pkgbuild:=Convert to text:C1012($stdErr;"utf-8")
		Else 
			If (BLOB size:C605($stdOut)#0)
				$status.pkgbuild:=Convert to text:C1012($stdOut;"utf-8")
			End if 
			$status.success:=True:C214
		End if 
		
	End if 
	
End if 

$0:=$status