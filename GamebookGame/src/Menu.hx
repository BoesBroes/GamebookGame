package;

//import lime.ui.Window.Stage;
import openfl.display.Sprite;
import openfl.Lib;
import openfl.Assets;
import openfl.display.BitmapData;
import openfl.display.Bitmap;
import openfl.geom.Point;
import openfl.events.KeyboardEvent;
import openfl.events.MouseEvent;
import openfl.media.Sound;
import openfl.media.SoundChannel;
import openfl.events.Event;
import openfl.display.StageScaleMode;
import openfl.utils.Timer;
import openfl.events.TimerEvent;
import openfl.display.DisplayObject;
import openfl.display.Stage;
import openfl.media.Sound;
import openfl.media.SoundChannel;
import openfl.media.SoundTransform;





/**
 * ...
 * @author L'Jonathanos
 */

class Menu extends Sprite
{
	//okay this class should actually be named soundmanager
	//it manages the sound
	//thats why the name Menu is not really right
	
	static var musicChannel:SoundChannel;
	static var sfxChannel:SoundChannel;
	static var playedMusic:Sound;
	static var sfxSoundPlay:Sound;
	static var musicPlaying:Bool = true;
		
	public static function playMusic(musicName:String)
	{
		//if there is music playing, stops music
		if (musicChannel != null)
			musicChannel.stop();
		
			
		//plays Music
		playedMusic = Assets.getMusic("music/" + musicName + ".wav");
		musicChannel = playedMusic.play(0.0, 1000);
		
		
		/*Sound transformer.
		 * 1st parameter is volume, 0 is minimum, 1 is maximum
		 * wnd parameter is placing(3d) , -1 is left, 1 is right, 0 is center
		 * */
		musicChannel.soundTransform = new SoundTransform(0.90, 0);
	}
	
	public static function stopMusic(musicName:String)
	{
		if (musicChannel != null)
		musicChannel.stop();
		//stops the music
	}
	
	public static function playSFX(sfxName:String )
	{
		//Plays sound effect
		sfxSoundPlay = Assets.getSound("music/" + sfxName + ".wav");
		
		//makes sure sfx is being played on its own channel
		sfxChannel = sfxSoundPlay.play();
	}
	

	
}