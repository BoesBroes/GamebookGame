package;

	import openfl.display.Sprite;
	import openfl.Assets;
	import openfl.display.Bitmap;
	import openfl.display.BitmapData;
	import openfl.events.MouseEvent;

/**
 * ...
 * @author Me
 */
class Button extends Sprite
{
	var imageName:String;
	var image:Bitmap;

	public function new(_imageName:String) 
	{
		super();
		//automatically converts the bitmapdata to a new bitmap
		//makes the code a lot shorter
		imageName = _imageName;
		var imageData = Assets.getBitmapData('img/buttons/${imageName}.png');
		var image = new Bitmap(imageData);
		addChild(image);
		
		
		//default setup for the buttons
		addEventListener(MouseEvent.CLICK, OnMouseClick);
		addEventListener(MouseEvent.ROLL_OVER, onRoll);
		addEventListener(MouseEvent.ROLL_OUT, onOut);
	}
	
	function OnMouseClick(event:MouseEvent)
	{
		
	}
	
	public function onRoll(event: MouseEvent)
	{
		
	}
	
	public function onOut(event: MouseEvent)
	{
		
	}
	
}
