//%attributes = {"invisible":true}
$buildApp:=BuildApp(New object:C1471)

$buildApp.findLicenses(New collection:C1472("4DOE"; "4UOE"))

$applicationsFolder:=Folder:C1567(fk applications folder:K87:20)
$resourcesFolder:=Folder:C1567(Get 4D folder:C485(Current resources folder:K5:16); fk platform path:K87:2)
$libraryImagesFolder:=$resourcesFolder.folder("Images").folder("library")

$version:=Application version:C493($build)
$folderName:="4D v"+Substring:C12($version; 1; 2)+"."+Substring:C12($version; 4; 1)

$buildApp.settings.BuildApplicationName:="Doctor’s Good Will"
$buildApp.settings.BuildApplicationSerialized:=True:C214

$buildApp.settings.BuildMacDestFolder:=System folder:C487(Desktop:K41:16)+Generate UUID:C1066

$buildApp.settings.SourcesFiles.RuntimeVL.RuntimeVLIncludeIt:=True:C214
$buildApp.settings.SourcesFiles.RuntimeVL.RuntimeVLMacFolder:=$applicationsFolder.folder($folderName).folder("4D Volume Desktop.app").platformPath
$buildApp.settings.SourcesFiles.RuntimeVL.RuntimeVLIconMacPath:=$libraryImagesFolder.file("dgw2.icns").platformPath
$buildApp.settings.SourcesFiles.RuntimeVL.IsOEM:=True:C214

$buildApp.settings.SignApplication.MacSignature:=False:C215
$buildApp.settings.SignApplication.AdHocSign:=False:C215

$buildApp.settings.ArrayExcludedComponentName.Item.push("builder")

$status:=$buildApp.build()

If ($status.success)
	
	$app:=$buildApp.getPlatformDestinationFolder().folder("Final Application").folder($buildApp.settings.BuildApplicationName+".app")
	
	$credentials:=New object:C1471
	$credentials.username:="keisuke.miyako@4d.com"  //apple ID
	$credentials.password:="@keychain:altool"  //app specific password or keychain label; must be literal to use listProviders()
	
	$signApp:=SignApp($credentials)
	
	$statuses:=$signApp.sign($app)
	
	$status:=$signApp.archive($app)
	
	If ($status.success)
		$status:=$signApp.notarize($status.file)
	End if 
	
End if 