//%attributes = {}
C_TEXT:C284($1;$path)

If (Is macOS:C1572)
	
	If (Value type:C1509($1)=Is undefined:K8:13)
		
		If (Storage:C1525.ENVIRONMENT.DEVELOPER_DIR#Null:C1517)
			Use (Storage:C1525.ENVIRONMENT)
				OB REMOVE:C1226(Storage:C1525.ENVIRONMENT;"DEVELOPER_DIR")
			End use 
		End if 
		
	Else 
		
		$path:=$1
		
		Use (Storage:C1525)
			
			If (Storage:C1525.ENVIRONMENT=Null:C1517)
				Storage:C1525.ENVIRONMENT:=New shared object:C1526
			End if 
			
			Use (Storage:C1525.ENVIRONMENT)
				Storage:C1525.ENVIRONMENT.DEVELOPER_DIR:=$path
			End use 
			
		End use 
		
	End if 
	
End if 