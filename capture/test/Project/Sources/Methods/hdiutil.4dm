//%attributes = {"invisible":true}
C_TEXT:C284($1;$applicationPath;$2;$archivePath)
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
			$archivePath:=$applicationPathObject.parentFolder+$applicationPathObject.name+".dmg"
		End if 
		
		$archivePathObject:=Path to object:C1547($archivePath)
		
		  //if $2 is a folder, use $1.name+".dmg"
		If ($archivePathObject.isFolder)
			$archivePath:=$archivePath+$applicationPathObject.name+".dmg"
			$archivePathObject:=Path to object:C1547($archivePath)
		End if 
		
		If ($archivePathObject.extension#".dmg")
			$archivePath:=$archivePathObject.parentFolder+$archivePathObject.name+".dmg"
			$archivePathObject:=Path to object:C1547($archivePath)
		End if 
		
		  //hdiutil fails if the target already exists
		If (Test path name:C476($archivePath)=Is a document:K24:1)
			DELETE DOCUMENT:C159($archivePath)
		End if 
		
		  //hdiutil does not create intermediate folders
		CREATE FOLDER:C475($archivePathObject.parentFolder;*)
		
		C_BLOB:C604($stdIn;$stdOut;$stdErr)
		C_LONGINT:C283($pid)
		  //better to receive output in xml plist 
		$command:="hdiutil create -format UDBZ -plist -srcfolder "+\
			escape_param (Convert path system to POSIX:C1106($applicationPath))+" "+\
			escape_param (Convert path system to POSIX:C1106($archivePath))
		SET ENVIRONMENT VARIABLE:C812("_4D_OPTION_BLOCKING_EXTERNAL_PROCESS";"TRUE")
		LAUNCH EXTERNAL PROCESS:C811($command;$stdIn;$stdOut;$stdErr;$pid)
		
		If (BLOB size:C605($stdErr)=0)
			$status.success:=True:C214
			$info:=Convert to text:C1012($stdOut;"utf-8")
			ON ERR CALL:C155("error_xml")
			$dom:=DOM Parse XML variable:C720($info)
			ON ERR CALL:C155("")
			If (OK=1)
				ARRAY TEXT:C222($strings;0)
				C_TEXT:C284($path)
				$string:=DOM Find XML element:C864($dom;"plist/array/string";$strings)
				$status.hdiutil:=New collection:C1472
				For ($i;1;Size of array:C274($strings))
					$string:=$strings{$i}
					DOM GET XML ELEMENT VALUE:C731($string;$path)
					$status.hdiutil.push(Convert path POSIX to system:C1107($path))
				End for 
				DOM CLOSE XML:C722($dom)
			End if 
		Else 
			$status.hdiutil:=Convert to text:C1012($stdErr;"utf-8")
			$status.hdiutil:=Split string:C1554($status.hdiutil;"\n";sk ignore empty strings:K86:1 | sk trim spaces:K86:2)
		End if 
		
	End if 
	
End if 

$0:=$status