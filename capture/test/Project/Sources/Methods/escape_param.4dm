//%attributes = {}
C_TEXT:C284($1;$param;$0)

If (Value type:C1509($1)#Is undefined:K8:13)
	$param:=$1
	C_LONGINT:C283($i)
	If (Is macOS:C1572)
		$metacharacters:="\\!\"#$%&'()=~|<>?;*`[] "
		For ($i;1;Length:C16($metacharacters))
			$metacharacter:=Substring:C12($metacharacters;$i;1)
			$param:=Replace string:C233($param;$metacharacter;"\\"+$metacharacter;*)
		End for 
	End if 
End if 

$0:=$param