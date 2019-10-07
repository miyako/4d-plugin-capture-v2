//%attributes = {}
C_TEXT:C284($1;$applicationPath;$2;$archivePath)

If (Is macOS:C1572)
	
	  //$1
	If (Value type:C1509($1)#Is undefined:K8:13)
		$applicationPath:=$1
	Else 
		  //default:current application
		$applicationPath:=Application file:C491
	End if 
	$applicationPathObject:=Path to object:C1547($applicationPath)
	
	  //$2
	If (Value type:C1509($2)#Is undefined:K8:13)
		$archivePath:=$2
	Else 
		  //default:next to current application
		$archivePath:=$applicationPathObject.parentFolder+$applicationPathObject.name+".zip"
	End if 
	$archivePathObject:=Path to object:C1547($archivePath)
	
	  //if $2 is a folder, use $1.name+".zip"
	If ($archivePathObject.isFolder)
		$archivePath:=$archivePath+$applicationPathObject.name+".zip"
		$archivePathObject:=Path to object:C1547($archivePath)
	End if 
	
	  //ditto -c -k must be .zip
	If ($archivePathObject.extension#".zip")
		$archivePath:=$archivePathObject.parentFolder+$archivePathObject.name+".zip"
		$archivePathObject:=Path to object:C1547($archivePath)
	End if 
	
	  //ditto automatically creates intermediate folders if they doesn't already exist
	C_BLOB:C604($stdIn;$stdOut;$stdErr)
	C_LONGINT:C283($pid)
	  //.app is a parent folder so --keepParent
	$command:="ditto -c -k --keepParent "+\
		escape_param (Convert path system to POSIX:C1106($applicationPath))+" "+\
		escape_param (Convert path system to POSIX:C1106($archivePath))
	SET ENVIRONMENT VARIABLE:C812("_4D_OPTION_BLOCKING_EXTERNAL_PROCESS";"TRUE")
	LAUNCH EXTERNAL PROCESS:C811($command;$stdIn;$stdOut;$stdErr;$pid)
	  //ditto does not return much information in stdOut or stdErr
End if 