//%attributes = {}
C_TEXT:C284($1;$componentPath;$2;$from;$3;$to)
C_OBJECT:C1216($0;$status)

$status:=New object:C1471("success";False:C215)

If (Is macOS:C1572)
	
	If (Value type:C1509($2)#Is undefined:K8:13)
		
		$componentPath:=$1
		$componentPathObject:=Path to object:C1547($componentPath)
		
		If (Value type:C1509($3)#Is undefined:K8:13)
			$from:=$2
			$to:=$3
			$command:="install_name_tool -change "
			$command:=$command+\
				"'"+$from+"' "+\
				"'"+$to+"' "+\
				"'"+Convert path system to POSIX:C1106($componentPath)+"'"
		Else 
			$to:=$2
			$command:="install_name_tool -id "+\
				"'"+$to+"' "+\
				"'"+Convert path system to POSIX:C1106($componentPath)+"'"
		End if 
		
		C_BLOB:C604($stdIn;$stdOut;$stdErr)
		C_LONGINT:C283($pid)
		SET ENVIRONMENT VARIABLE:C812("_4D_OPTION_BLOCKING_EXTERNAL_PROCESS";"TRUE")
		LAUNCH EXTERNAL PROCESS:C811($command;$stdIn;$stdOut;$stdErr;$pid)
		
		If (BLOB size:C605($stdErr)#0)
			$status.install_name_tool:=Convert to text:C1012($stdErr;"utf-8")
		Else 
			$status.success:=True:C214
		End if 
		
	End if 
	
End if 

$0:=$status