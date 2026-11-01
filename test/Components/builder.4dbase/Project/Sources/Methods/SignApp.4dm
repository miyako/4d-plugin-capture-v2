//%attributes = {"invisible":true,"shared":true}
#DECLARE($credentials : Object; $plist : Object)->$signApp : cs:C1710.SignApp

$signApp:=cs:C1710.SignApp.new($credentials; $plist)