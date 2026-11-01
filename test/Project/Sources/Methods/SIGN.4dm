//%attributes = {}
$version:=Application version:C493($build)
$folderName:="4D v"+Substring:C12($version; 1; 2)+"."+Substring:C12($version; 4; 1)

$app:=Folder:C1567(fk applications folder:K87:20).folder($folderName).folder("4D.app")

If ($app.exists)
	
	CONFIRM:C162("codesign "+$app.fullName+"?")
	
	If (OK=1)
		$credentials:=New object:C1471
		$credentials.username:="keisuke.miyako@4d.com"
		$credentials.password:="@keychain:altool"
		
		$plist:=New object:C1471
		
		$signApp:=SignApp($credentials; $plist)
		
		$statuses:=$signApp.sign($app)
		$status:=$signApp.archive($app)
		If ($status.success)
			$status:=$signApp.notarize($status.file)
		End if 
		
		TRACE:C157
	End if 
End if 