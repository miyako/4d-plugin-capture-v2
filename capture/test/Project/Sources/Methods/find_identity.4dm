//%attributes = {"invisible":true}
C_COLLECTION:C1488($0;$identity)

$identity:=New collection:C1472

If (Is macOS:C1572)
	C_BLOB:C604($stdIn;$stdOut;$stdErr)
	C_LONGINT:C283($pid)
	SET ENVIRONMENT VARIABLE:C812("_4D_OPTION_BLOCKING_EXTERNAL_PROCESS";"TRUE")
	LAUNCH EXTERNAL PROCESS:C811("security find-identity -p basic -v";$stdIn;$stdOut;$stdErr;$pid)
	
	  //basic, to include installer (codesigning does not include it)
	
	$info:=Convert to text:C1012($stdOut;"utf-8")
	
	ARRAY LONGINT:C221($pos;0)
	ARRAY LONGINT:C221($len;0)
	C_LONGINT:C283($i)
	$i:=1
	While (Match regex:C1019("(?m)\\s+(\\d+\\))\\s+([:Hex_Digit:]+)\\s+\"([^\"]+)\"$";$info;$i;$pos;$len))
		$identity.push(New object:C1471("id";Substring:C12($info;$pos{2};$len{2});"name";Substring:C12($info;$pos{3};$len{3})))
		$i:=$pos{3}+$len{3}
	End while 
End if 

$0:=$identity
