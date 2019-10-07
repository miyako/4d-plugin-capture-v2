//%attributes = {}
C_OBJECT:C1216($0;$info)
C_TEXT:C284($path;$paths)

$info:=New object:C1471("path";Null:C1517;"paths";New collection:C1472)

If (Is macOS:C1572)
	C_BLOB:C604($stdIn;$stdOut;$stdErr)
	C_LONGINT:C283($pid)
	SET ENVIRONMENT VARIABLE:C812("_4D_OPTION_BLOCKING_EXTERNAL_PROCESS";"TRUE")
	LAUNCH EXTERNAL PROCESS:C811("xcode-select -p";$stdIn;$stdOut;$stdErr;$pid)
	
	$path:=Convert to text:C1012($stdOut;"utf-8")
	
	C_LONGINT:C283($pos)
	C_LONGINT:C283($len)
	
	If (Match regex:C1019("^.+$";$path;1;$pos;$len))
		$path:=Substring:C12($path;$pos;$len)
		$info.path:=$path
		$info.paths.push($path)
	End if 
	
	SET ENVIRONMENT VARIABLE:C812("_4D_OPTION_BLOCKING_EXTERNAL_PROCESS";"TRUE")
	LAUNCH EXTERNAL PROCESS:C811("mdfind "+escape_param ("kMDItemCFBundleIdentifier == 'com.apple.dt.Xcode'");$stdIn;$stdOut;$stdErr;$pid)
	
	$paths:=Convert to text:C1012($stdOut;"utf-8")
	
	$i:=1
	
	While (Match regex:C1019("(?m)^.+$";$paths;$i;$pos;$len))
		$path:=Substring:C12($paths;$pos;$len)+"/Contents/Developer"
		If ($info.paths.indexOf($path)=-1)
			$info.paths.push($path)
		End if 
		$i:=$pos+$len
	End while 
	
End if 

$0:=$info