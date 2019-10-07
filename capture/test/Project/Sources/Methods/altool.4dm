//%attributes = {}
C_OBJECT:C1216($1;$params;$0;$status)

$status:=New object:C1471("success";False:C215)

If (Is macOS:C1572)
	
	If (Value type:C1509($1)=Is object:K8:27)
		
		$params:=$1
		
		Case of 
			: (Value type:C1509($params.RequestUUID)=Is text:K8:3)
				$command:="xcrun altool --notarization-info "+$params.RequestUUID
			: (Value type:C1509($params.file)=Is text:K8:3)
				$command:="xcrun altool --notarize-app --file "+escape_param(Convert path system to POSIX:C1106($params.file))
			Else 
				$command:=""
		End case 
		
		If ($command#"")
			If (Value type:C1509($params.primaryBundleId)=Is text:K8:3)
				$command:=$command+" --primary-bundle-id "+escape_param($params.primaryBundleId)
			End if 
			If (Value type:C1509($params.username)=Is text:K8:3)
				$command:=$command+" --username "+escape_param($params.username)
			End if 
			If (Value type:C1509($params.password)=Is text:K8:3)
				$command:=$command+" --password "+escape_param($params.password)
			End if 
			
			xcode_select  //for xcrun
			
			C_BLOB:C604($stdIn;$stdOut;$stdErr)
			C_LONGINT:C283($pid)
			SET ENVIRONMENT VARIABLE:C812("_4D_OPTION_BLOCKING_EXTERNAL_PROCESS";"TRUE")
			LAUNCH EXTERNAL PROCESS:C811($command;$stdIn;$stdOut;$stdErr;$pid)
			
			C_TEXT:C284($info)
			
			If (BLOB size:C605($stdErr)#0)
				$info:=Convert to text:C1012($stdErr;"utf-8")
			End if 
			
			If (BLOB size:C605($stdOut)#0)
				$info:=Convert to text:C1012($stdOut;"utf-8")
			End if 
			
			ARRAY LONGINT:C221($pos;0)
			ARRAY LONGINT:C221($len;0)
			C_LONGINT:C283($i)
			$i:=1
			
			$status.success:=($info="@No errors uploading@")
			
			If ($status.success)
				  //upload successful
				While (Match regex:C1019("(?m)^\\s*(\\S+)\\s*=\\s*(.+)$";$info;$i;$pos;$len))
					$key:=Substring:C12($info;$pos{1};$len{1})
					$status[$key]:=Substring:C12($info;$pos{2};$len{2})
					If ($status[$key]="(null)")
						$status[$key]:=Null:C1517
					End if 
					$i:=$pos{2}+$len{2}
				End while 
				If ($status.RequestUUID#Null:C1517)
					$params.RequestUUID:=$status.RequestUUID
					  //2nd call, get status
					$status:=altool ($params)
				End if 
			Else 
				$status.success:=($info="@No errors getting notarization info@")
				If ($status.success)
					  //got status
					While (Match regex:C1019("(?m)^\\s*(\\S+)\\s*:\\s*(.+)$";$info;$i;$pos;$len))
						$key:=Substring:C12($info;$pos{1};$len{1})
						$status[$key]:=Substring:C12($info;$pos{2};$len{2})
						If ($status[$key]="(null)")
							$status[$key]:=Null:C1517
						End if 
						$i:=$pos{2}+$len{2}
					End while 
					If ($status.LogFileURL#Null:C1517)
						If ($status.LogFileURL="https://@")
							If (HTTP Get:C1157($status.LogFileURL;$stdOut)=200)
								$json:=Convert to text:C1012($stdOut;"utf-8")
								$status.LogFile:=JSON Parse:C1218($json)
							End if 
						End if 
					End if 
				Else 
					  //already uploaded?
					If (Match regex:C1019("(?m)^\\s*Package Summary:$";$info;1;$pos;$len))
						$info:=Substring:C12($info;$pos{0}+$len{0})
						If (Match regex:C1019("\"The software asset has already been uploaded. The upload ID is (.+)\"";$info;1;$pos;$len))
							$params.RequestUUID:=Substring:C12($info;$pos{1};$len{1})
							  //2nd call, get status
							$status:=altool ($params)
						End if 
					End if 
				End if 
			End if 
		End if 
	End if 
End if 

$0:=$status