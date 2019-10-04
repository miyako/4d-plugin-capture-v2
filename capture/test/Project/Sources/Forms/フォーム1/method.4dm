$event:=Form event:C388

Case of 
	: ($event=On Resize:K2:27)
		
		  //core animation layer is independent of 4D form object resizing, need to do it ourselves
		
		OBJECT GET COORDINATES:C663(*;"Frame";$left;$top;$right;$bottom)
		
		GET WINDOW RECT:C443($l;$t;$r;$b;Current form window:C827)
		
		Form:C1466.x:=$left
		Form:C1466.y:=($b-$t)-($bottom)
		Form:C1466.width:=$right-$left
		Form:C1466.height:=$bottom-$top
		
		capture Update (Form:C1466)
		
		  //however, because of deferred animation, it might be better to not move or resize frequently
		
	: ($event=On Timer:K2:25)
		
		SET TIMER:C645(0)
		
		capture Start (Form:C1466)
		
	: ($event=On Load:K2:1)
		
		Form:C1466.flipH:=True:C214
		Form:C1466.flipV:=False:C215
		Form:C1466.window:=Current form window:C827
		Form:C1466.status:=capture Request permisson 
		
		OBJECT GET COORDINATES:C663(*;"Frame";$left;$top;$right;$bottom)
		
		  //core animation frame is (0,0) at bottom left
		  //the preview layer is relative to the bottom edge of the window
		GET WINDOW RECT:C443($l;$t;$r;$b;Current form window:C827)
		
		Form:C1466.x:=$left
		Form:C1466.y:=($b-$t)-($bottom)
		Form:C1466.width:=$right-$left
		Form:C1466.height:=$bottom-$top
		
		  //we want to add the preview layer after (on top of) all form objects
		SET TIMER:C645(-1)
		
	: ($event=On Unload:K2:2)
		
		SET TIMER:C645(0)
		
		capture Stop 
		
End case 