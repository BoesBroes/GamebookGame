package;

import motion.Actuate;
import motion.easing.Linear;
import openfl.display.Sprite;
import openfl.Lib;
import openfl.Lib.getTimer;
import openfl.Assets;
import openfl.display.BitmapData;
import openfl.display.Bitmap;
import openfl.geom.Point;
import openfl.events.KeyboardEvent;
import openfl.events.MouseEvent;
import openfl.media.Sound;
import openfl.media.SoundChannel;
import openfl.events.Event;
import openfl.display.StageDisplayState;
import openfl.display.StageScaleMode;
import openfl.utils.Timer;
import openfl.events.TimerEvent;
import openfl.text.TextField;
import openfl.text.TextFormat;
import openfl.text.TextFieldAutoSize;
import openfl.text.TextFieldType;
import sys.db.Connection;
import sys.db.ResultSet;
import sys.db.Sqlite;


/**
 * ...
 * @author L'Jonathanos
 */
class Main extends Sprite 
{
	//var lastTime : Int = 0;
	var stopTimer:Bool = false;
	var countdownSprite:Sprite;
	var scoreDisplay:TextField;
	var nameDisplay:TextField;
	var creditnameDisplay:TextField;
	var jobDisplay:TextField;
	var QADisplay:TextField;
	var QA2Display:TextField;
	var QA4Display:TextField;
	var ADisplay:TextField;
	var A2Display:TextField;
	var A3Display:TextField;
	var A4Display:TextField;
	var endDisplay:TextField;
	var end2Display:TextField;
	var end3Display:TextField;
	var end4Display:TextField;
	var startButton:Button;
	var playmusicButton:Button;
	var musicButton:Button;
	var leaderboardButton:Button;
	var backButton:Button;
	var quitButton:Button;
	var creditButton:Button;
	var answerButton1:Button;
	var answerButton2:Button;
	var okayButton:Button;
	
	public static var answer:TextField;
	public static var answertext:TextField;
	private static var input:String;
	public static var input2:TextField;
	public static var text:TextField;
	private static var input3:String;

	
	
	public function new() 
	{
		super();
		//starts the game, plays music and goes fullscreen
		gamestart();
		
		Menu.playMusic("whiteguy");
		
		ToggleFullScreen();
	}

	
	 public function ToggleFullScreen()
    {
       
               
        //check the current display state, if it is not full screen, change to full screen
        if (Lib.current.stage.displayState != StageDisplayState.FULL_SCREEN_INTERACTIVE )
        {
            Lib.current.stage.displayState = StageDisplayState.FULL_SCREEN_INTERACTIVE;
           
			var currentWindowWidth : Float;
			var currentWindowHeight : Float;
			var widthRatio : Float;
			var heightRatio : Float;
			
            //check window height and width and calculate ratio    
            currentWindowWidth  = Lib.current.stage.stageWidth;
            currentWindowHeight =  Lib.current.stage.stageHeight;
            widthRatio = currentWindowWidth / 1920;
            heightRatio = currentWindowHeight / 1080;
			
			
			stage.scaleX = widthRatio;
            stage.scaleY = heightRatio;
			
       
        }
	}
	
	function gamestart()
	{
		//Adding buttons with mouseEvents and functions, nothing special going on here
		var backdropData : BitmapData = Assets.getBitmapData("img/white.png");
		var backdrop : Bitmap = new Bitmap(backdropData);
		addChild(backdrop);
		backdrop.scaleX = 1;
		backdrop.scaleY = 1;
		
		startButton = new Button('Start_Button');
		addChild(startButton);
		startButton.x = 823.5;
		startButton.y = 350;
		startButton.addEventListener(MouseEvent.CLICK, startGame);
		startButton.addEventListener(MouseEvent.ROLL_OVER, startRoll);
		startButton.addEventListener(MouseEvent.ROLL_OUT, startOut);
		
		musicButton = new Button('Music_Button');
		musicButton.addEventListener(MouseEvent.CLICK, OnMusicButton);
		addChild(musicButton);
		musicButton.x = 823.5;
		musicButton.y = 450;
		musicButton.addEventListener(MouseEvent.ROLL_OVER, musicRoll);
		musicButton.addEventListener(MouseEvent.ROLL_OUT, musicOut);
		
		leaderboardButton = new Button('Leaderboard_Button');
		leaderboardButton.addEventListener(MouseEvent.CLICK, OnLeaderboardButton);
		addChild(leaderboardButton);
		leaderboardButton.x = 1123.5;
		leaderboardButton.y = 350;
		leaderboardButton.addEventListener(MouseEvent.ROLL_OVER, leaderboardRoll);
		leaderboardButton.addEventListener(MouseEvent.ROLL_OUT, leaderboardOut);
		
	
		quitButton = new Button('Quit_Button');
		addChild(quitButton);
		quitButton.x = 523.5;
		quitButton.y = 350;
		quitButton.addEventListener(MouseEvent.CLICK, OnQuitGame);
		quitButton.addEventListener(MouseEvent.ROLL_OVER, quitRoll);
		quitButton.addEventListener(MouseEvent.ROLL_OUT, quitOut);
		
		creditButton = new Button('Credit_Button');
		addChild(creditButton);
		creditButton.x = 823.5;
		creditButton.y = 550;
		creditButton.addEventListener(MouseEvent.CLICK, OnCreditGame);
		creditButton.addEventListener(MouseEvent.ROLL_OVER, creditRoll);
		creditButton.addEventListener(MouseEvent.ROLL_OUT, creditOut);
		
		
	}
	
	function startGame(event : MouseEvent)
	{
		removeChildren();
		
		var backdropData : BitmapData = Assets.getBitmapData("img/whiter.png");
		var backdrop : Bitmap = new Bitmap(backdropData);
		addChild(backdrop);
		backdrop.scaleX = 1;
		backdrop.scaleY = 1;
		
		//instead of adding textformats in each function I could do it at the top, but I did not..
		var QATextFormat:TextFormat = new TextFormat("fonts/PAPYRUS.TTF", 30, 0xFF000000, true);
		var QATextFormat2:TextFormat = new TextFormat("fonts/PAPYRUS.TTF", 28, 0xFF000000, true);

		//goes to the database Class and function to get data, this happens a lot throughout the code
		var result = Database.getQ1();
		for (row in result)
		{
			
		    var QA = row.QA;
	    	trace('$QA');
			
	    	QADisplay = new TextField();
	    	QADisplay.autoSize = TextFieldAutoSize.LEFT;
	    	QADisplay.defaultTextFormat = QATextFormat;
	    	QADisplay.selectable = false;
	    	QADisplay.border = false;
	    	QADisplay.x = 300;
			QADisplay.y = 50;
	    	QADisplay.text = Std.string(QA);
	    	addChild( QADisplay );
		}
		//like here
		var result = Database.getA1();
		for (row in result)
		{
			
		    var creditname = row.QA;
		    var QA = row.QA;
	    	trace('$QA');
			
	    	ADisplay = new TextField();
	    	ADisplay.autoSize = TextFieldAutoSize.LEFT;
	    	ADisplay.defaultTextFormat = QATextFormat2;
	    	ADisplay.selectable = false;
	    	ADisplay.border = false;
	    	ADisplay.x = 300;
			ADisplay.y = 510;
	    	ADisplay.text = Std.string(QA);
	    	addChild( ADisplay );
			ADisplay.addEventListener(MouseEvent.CLICK, OnNextQuest);
			ADisplay.addEventListener(MouseEvent.ROLL_OVER, ARoll);
		    ADisplay.addEventListener(MouseEvent.ROLL_OUT, AOut);
		}
		//and here, not going to comment every time a function calls a database from now on
		var result = Database.getA2();
		for (row in result)
		{
			
			
		    var creditname = row.QA;
		    var QA = row.QA;
	    	trace('$QA');
			
	    	A2Display = new TextField();
	    	A2Display.autoSize = TextFieldAutoSize.LEFT;
	    	A2Display.defaultTextFormat = QATextFormat2;
	    	A2Display.selectable = false;
	    	A2Display.border = false;
	    	A2Display.x = 300;
			A2Display.y = 610;
	    	A2Display.text = Std.string(QA);
	    	addChild( A2Display );
			A2Display.addEventListener(MouseEvent.CLICK, OnBlackButton);
			A2Display.addEventListener(MouseEvent.ROLL_OVER, A2Roll);
		    A2Display.addEventListener(MouseEvent.ROLL_OUT, A2Out);
			//note that every answer is a button which launches a function when clicked on
			//it also makes a sound and moves when hovering over it with a mouse
		}
		
	}
	
	function OnNextQuest(event : MouseEvent)
	{
		removeChildren();
		
		//does the same as startgame but with different parts of the database
		//note that I use way too many
		var backdropData : BitmapData = Assets.getBitmapData("img/whiter.png");
		var backdrop : Bitmap = new Bitmap(backdropData);
		addChild(backdrop);
		backdrop.scaleX = 1;
		backdrop.scaleY = 1;
		
		var QATextFormat:TextFormat = new TextFormat("fonts/PAPYRUS.TTF", 30, 0xFF000000, true);
		var QATextFormat2:TextFormat = new TextFormat("fonts/PAPYRUS.TTF", 28, 0xFF000000, true);

		//same old cup o' tea
		var result = Database.getQ2();
		for (row in result)
		{
			
		    var QA = row.QA;
	    	trace('$QA');
			
	    	QA2Display = new TextField();
	    	QA2Display.autoSize = TextFieldAutoSize.LEFT;
	    	QA2Display.defaultTextFormat = QATextFormat;
	    	QA2Display.selectable = false;
	    	QA2Display.border = false;
	    	QA2Display.x = 300;
			QA2Display.y = 50;
	    	QA2Display.text = Std.string(QA);
	    	addChild( QA2Display );
		}
		
		var result = Database.getA3();
		for (row in result)
		{
			
		    var QA = row.QA;
	    	trace('$QA');
			
	    	A3Display = new TextField();
	    	A3Display.autoSize = TextFieldAutoSize.LEFT;
	    	A3Display.defaultTextFormat = QATextFormat2;
	    	A3Display.selectable = false;
	    	A3Display.border = false;
	    	A3Display.x = 300;
			A3Display.y = 510;
	    	A3Display.text = Std.string(QA);
	    	addChild( A3Display );
			A3Display.addEventListener(MouseEvent.CLICK, OnWalk);
			A3Display.addEventListener(MouseEvent.ROLL_OVER, A3Roll);
		    A3Display.addEventListener(MouseEvent.ROLL_OUT, A3Out);
		}
		
		var result = Database.getA4();
		for (row in result)
		{
			
		    var QA = row.QA;
	    	trace('$QA');
			
	    	A4Display = new TextField();
	    	A4Display.autoSize = TextFieldAutoSize.LEFT;
	    	A4Display.defaultTextFormat = QATextFormat2;
	    	A4Display.selectable = false;
	    	A4Display.border = false;
	    	A4Display.x = 300;
			A4Display.y = 610;
	    	A4Display.text = Std.string(QA);
	    	addChild( A4Display );
			A4Display.addEventListener(MouseEvent.CLICK, OnStay);
			A4Display.addEventListener(MouseEvent.ROLL_OVER, A4Roll);
		    A4Display.addEventListener(MouseEvent.ROLL_OUT, A4Out);
		}
	}
	
	function OnWalk(event : MouseEvent)
	{
		stopTimer = false;
		//timer is false so the tooLate function doesnt run fully
		removeChildren();
		
		//the timer based on actuate
		var backdropData : BitmapData = Assets.getBitmapData("img/whiter.png");
		var backdrop : Bitmap = new Bitmap(backdropData);
		addChild(backdrop);
		backdrop.scaleX = 1;
		backdrop.scaleY = 1;
		
		var rect = new BitmapData(Lib.current.stage.stageWidth, 10, false, 0x000000);
		countdownSprite = new Sprite();
		countdownSprite.addChild(new Bitmap(rect));
		addChild(countdownSprite);

		//this should be long enough right?
		Actuate.update(function(x) { countdownSprite.scaleX = x; }, 3, [1], [0])
		
		.ease(Linear.easeNone)
		.onComplete(function() { TooLate(); });
		
		var QATextFormat:TextFormat = new TextFormat("fonts/PAPYRUS.TTF", 30, 0xFF000000, true);
		var QATextFormat2:TextFormat = new TextFormat("fonts/PAPYRUS.TTF", 28, 0xFF000000, true);
		
		var result = Database.getQ3();
		for (row in result)
		{
		    var QA = row.QA;
	    	trace('$QA');
			
	    	QA4Display= new TextField();
	    	QA4Display.autoSize = TextFieldAutoSize.LEFT;
	    	QA4Display.defaultTextFormat = QATextFormat;
	    	QA4Display.selectable = false;
	    	QA4Display.border = false;
	    	QA4Display.x = 300;
			QA4Display.y = 50;
	    	QA4Display.text = Std.string(QA);
	    	addChild( QA4Display  );
			
			
		}
		
		var result = Database.getA5();
		for (row in result)
		{
			
		    var QA = row.QA;
	    	trace('$QA');
			
	    	end2Display = new TextField();
	    	end2Display.autoSize = TextFieldAutoSize.LEFT;
	    	end2Display.defaultTextFormat = QATextFormat2;
	    	end2Display.selectable = false;
	    	end2Display.border = false;
	    	end2Display.x = 300;
			end2Display.y = 610;
	    	end2Display.text = Std.string(QA);
	    	addChild( end2Display );
			end2Display.addEventListener(MouseEvent.CLICK, OnBluffing);
			end2Display.addEventListener(MouseEvent.ROLL_OVER, End2Roll);
		    end2Display.addEventListener(MouseEvent.ROLL_OUT, End2Out);
			
		}
		
		var result = Database.getA6();
		for (row in result)
		{
			var QA = row.QA;
	    	trace('$QA');
			
		    endDisplay= new TextField();
	    	endDisplay.autoSize = TextFieldAutoSize.LEFT;
	    	endDisplay.defaultTextFormat = QATextFormat2;
	    	endDisplay.selectable = false;
	    	endDisplay.border = false;
	    	endDisplay.x = 300;
			endDisplay.y = 510;
	    	endDisplay.text = Std.string(QA);
	    	addChild( endDisplay  );
			endDisplay.addEventListener(MouseEvent.CLICK, OnFight);
			endDisplay.addEventListener(MouseEvent.ROLL_OVER, EndRoll);
		    endDisplay.addEventListener(MouseEvent.ROLL_OUT, EndOut);
			
		}
		
	}
	
	function OnBluffing(event : MouseEvent)
	{
		stopTimer = true;
		removeChildren();
		//nothing interesting new things here either
		var backdropData : BitmapData = Assets.getBitmapData("img/whiter.png");
		var backdrop : Bitmap = new Bitmap(backdropData);
		addChild(backdrop);
		backdrop.scaleX = 1;
		backdrop.scaleY = 1;
		
		var QATextFormat:TextFormat = new TextFormat("fonts/PAPYRUS.TTF", 30, 0xFF000000, true);
		
		var result = Database.getVictory();
		for (row in result)
		{
		    var QA = row.QA;
	    	trace('$QA');
			
	    	endDisplay= new TextField();
	    	endDisplay.autoSize = TextFieldAutoSize.LEFT;
	    	endDisplay.defaultTextFormat = QATextFormat;
	    	endDisplay.selectable = false;
	    	endDisplay.border = false;
	    	endDisplay.x = 300;
			endDisplay.y = 50;
	    	endDisplay.text = Std.string(QA);
	    	addChild( endDisplay  );
			endDisplay.addEventListener(MouseEvent.CLICK, Victory);
			endDisplay.addEventListener(MouseEvent.ROLL_OVER, EndRoll);
		    endDisplay.addEventListener(MouseEvent.ROLL_OUT, EndOut);
			
		}
	}
	
	function OnFight(event : MouseEvent)
	{
		stopTimer = true;
		
		removeChildren();
		
		var backdropData : BitmapData = Assets.getBitmapData("img/whiter.png");
		var backdrop : Bitmap = new Bitmap(backdropData);
		addChild(backdrop);
		backdrop.scaleX = 1;
		backdrop.scaleY = 1;
		
		var QATextFormat:TextFormat = new TextFormat("fonts/PAPYRUS.TTF", 30, 0xFF000000, true);
		
		var result = Database.getEnd5();
		for (row in result)
		{
		    var QA = row.QA;
	    	trace('$QA');
			
	    	endDisplay= new TextField();
	    	endDisplay.autoSize = TextFieldAutoSize.LEFT;
	    	endDisplay.defaultTextFormat = QATextFormat;
	    	endDisplay.selectable = false;
	    	endDisplay.border = false;
	    	endDisplay.x = 300;
			endDisplay.y = 50;
	    	endDisplay.text = Std.string(QA);
	    	addChild( endDisplay  );
			endDisplay.addEventListener(MouseEvent.CLICK, OnEnd);
			endDisplay.addEventListener(MouseEvent.ROLL_OVER, EndRoll);
		    endDisplay.addEventListener(MouseEvent.ROLL_OUT, EndOut);
			
		}
	}
	
	function OnStay(event : MouseEvent)
	{
		removeChildren();
		
		var backdropData : BitmapData = Assets.getBitmapData("img/whiter.png");
		var backdrop : Bitmap = new Bitmap(backdropData);
		addChild(backdrop);
		backdrop.scaleX = 1;
		backdrop.scaleY = 1;
		
		
		var QATextFormat:TextFormat = new TextFormat("fonts/PAPYRUS.TTF", 30, 0xFF000000, true);
		
		var result = Database.getEnd4();
		for (row in result)
		{
			//this button takes you back to start menu
		    var QA = row.QA;
	    	trace('$QA');
			
	    	end4Display = new TextField();
	    	end4Display.autoSize = TextFieldAutoSize.LEFT;
	    	end4Display.defaultTextFormat = QATextFormat;
	    	end4Display.selectable = false;
	    	end4Display.border = false;
	    	end4Display.x = 300;
			end4Display.y = 50;
	    	end4Display.text = Std.string(QA);
	    	addChild( end4Display  );
			end4Display.addEventListener(MouseEvent.CLICK, OnEnd);
			end4Display.addEventListener(MouseEvent.ROLL_OVER, End4Roll);
		    end4Display.addEventListener(MouseEvent.ROLL_OUT, End4Out);
			
		}
	}
	
	function OnEnd(event : MouseEvent)
	{
		gamestart();
	}
	
	
	function OnBlackButton(event : MouseEvent)
	{
		removeChildren();
		//hey, the background is now black!
		var backdropData : BitmapData = Assets.getBitmapData("img/black.png");
		var backdrop : Bitmap = new Bitmap(backdropData);
		addChild(backdrop);
		backdrop.scaleX = 1;
		backdrop.scaleY = 1;
		
		var result = Database.getEnd();
		for (row in result)
		{
			var QATextFormat:TextFormat = new TextFormat("fonts/PAPYRUS.TTF", 40, 0xFFFFFF, true);
			
		    var QA = row.QA;
	    	trace('$QA');
			
			endDisplay = new TextField();
	    	endDisplay.autoSize = TextFieldAutoSize.LEFT;
	    	endDisplay.defaultTextFormat = QATextFormat;
	    	endDisplay.selectable = false;
	    	endDisplay.border = false;
	    	endDisplay.x = 400;
			endDisplay.y = 500;
	    	endDisplay.text = Std.string(QA);
	    	addChild( endDisplay );
			endDisplay.addEventListener(MouseEvent.CLICK, OnBlack2Button);
			endDisplay.addEventListener(MouseEvent.ROLL_OVER, EndRoll);
		    endDisplay.addEventListener(MouseEvent.ROLL_OUT, EndOut);
		}
	}
	
	function OnBlack2Button(event : MouseEvent)
	{
		removeChildren();
		
		var backdropData : BitmapData = Assets.getBitmapData("img/black.png");
		var backdrop : Bitmap = new Bitmap(backdropData);
		addChild(backdrop);
		backdrop.scaleX = 1;
		backdrop.scaleY = 1;
		
		var result = Database.getEnd2();
		for (row in result)
		{
			var QATextFormat:TextFormat = new TextFormat("fonts/PAPYRUS.TTF", 40, 0xFFFFFF, true);
			
		    var QA = row.QA;
	    	trace('$QA');
			
			end2Display = new TextField();
	    	end2Display.autoSize = TextFieldAutoSize.LEFT;
	    	end2Display.defaultTextFormat = QATextFormat;
	    	end2Display.selectable = false;
	    	end2Display.border = false;
	    	end2Display.x = 400;
			end2Display.y = 500;
	    	end2Display.text = Std.string(QA);
	    	addChild( end2Display );
			end2Display.addEventListener(MouseEvent.CLICK, OnBlack3Button);
			end2Display.addEventListener(MouseEvent.ROLL_OVER, End2Roll);
		    end2Display.addEventListener(MouseEvent.ROLL_OUT, End2Out);
		}
	}
	
	function OnBlack3Button(event : MouseEvent)
	{
		removeChildren();
		//actually, the black is not necesarry at all but its already added anyway
		var backdropData : BitmapData = Assets.getBitmapData("img/black.png");
		var backdrop : Bitmap = new Bitmap(backdropData);
		addChild(backdrop);
		backdrop.scaleX = 1;
		backdrop.scaleY = 1;
		
		var result = Database.getEnd3();
		for (row in result)
		{
			var QATextFormat:TextFormat = new TextFormat("fonts/PAPYRUS.TTF", 40, 0xFFFFFF, true);
			
		    var QA = row.QA;
	    	trace('$QA');
			
			end3Display = new TextField();
	    	end3Display.autoSize = TextFieldAutoSize.LEFT;
	    	end3Display.defaultTextFormat = QATextFormat;
	    	end3Display.selectable = false;
	    	end3Display.border = false;
	    	end3Display.x = 400;
			end3Display.y = 500;
	    	end3Display.text = Std.string(QA);
	    	addChild( end3Display );
			end3Display.addEventListener(MouseEvent.CLICK, OnBlack4Button);
			end3Display.addEventListener(MouseEvent.ROLL_OVER, End3Roll);
		    end3Display.addEventListener(MouseEvent.ROLL_OUT, End3Out);
		}
	}
	
	function OnBlack4Button(event : MouseEvent)
	{
		//takes back to start menu
		gamestart();
	}
	
	function TooLate()
	{
		//only works if the player did not press a button
		if (stopTimer == false)
		{	
			removeChildren();
			
			var backdropData : BitmapData = Assets.getBitmapData("img/whiter.png");
			var backdrop : Bitmap = new Bitmap(backdropData);
			addChild(backdrop);
			backdrop.scaleX = 1;
			backdrop.scaleY = 1;
			
			var QATextFormat:TextFormat = new TextFormat("fonts/PAPYRUS.TTF", 40, 0xFF000000, true);
			var result = Database.getLate();
			for (row in result)
			{
				
				var creditname = row.QA;
				var QA = row.QA;
				trace('$QA');
				
				ADisplay = new TextField();
				ADisplay.autoSize = TextFieldAutoSize.LEFT;
				ADisplay.defaultTextFormat = QATextFormat;
				ADisplay.selectable = false;
				ADisplay.border = false;
				ADisplay.x = 300;
				ADisplay.y = 510;
				ADisplay.text = Std.string(QA);
				addChild( ADisplay );
				ADisplay.addEventListener(MouseEvent.CLICK, OnBlack4Button);
				ADisplay.addEventListener(MouseEvent.ROLL_OVER, ARoll);
				ADisplay.addEventListener(MouseEvent.ROLL_OUT, AOut);
			}
		}
		trace ("boii");
	}
			
	function Victory(event : MouseEvent)
	{
		removeChildren();
		
		var backdropData : BitmapData = Assets.getBitmapData("img/whiter.png");
		var backdrop : Bitmap = new Bitmap(backdropData);
		addChild(backdrop);
		backdrop.scaleX = 1;
		backdrop.scaleY = 1;
		//creates textfield with an input
		input2 = new TextField();
		input2.border = true;
		input2.multiline = false;
		input2.selectable = true;
		input2.type = TextFieldType.INPUT;
		input2.autoSize = TextFieldAutoSize.LEFT;
		input2.background = true;
		input2.backgroundColor = 0xababab;
		input2.x = 930;
		input2.y = 240;
		addChild(input2);
	    //just a text
		text = new TextField();
		text.border = true;
		text.multiline = false;
		text.selectable = false;
		text.text = "Fill in your name for the highscores and press next";
		text.autoSize = TextFieldAutoSize.LEFT;
		text.background = true;
		text.backgroundColor = 0xababab;
		text.x = 850;
		text.y = 190;
		addChild( text );
		//sends data from the input to the database with the nameScene function
		okayButton = new Button("okay_Button");
		addChild(okayButton);
		okayButton.x = 850;
		okayButton.y = 430;
		okayButton.addEventListener(MouseEvent.CLICK, nameScene);
		okayButton.addEventListener(MouseEvent.ROLL_OVER, okayRoll);
		okayButton.addEventListener(MouseEvent.ROLL_OUT, okayOut);

	}
	
	public static function Setanswer2(newName2:String)
	{
		//for inserting in the database
		input3 = newName2;
	}
	
		public static function Getanswer2()
	{
		//returns the answer
		return input3;
	}


	
	function nameScene(event:MouseEvent)
	{
		//inserts the input in database and takes you back to the menu
		Setanswer2(input2.text);
		var result = Database.getInstance();
	    result.request("create table if not exists highscores (name text);");
	    result.request('insert into highscores values (\'$input3\');');
		gamestart();
	}
	
	public static function Setanswer(newName:String)
	{
		input = newName;
	}
	
	public static function Getanswer()
	{
		return input;
	}

	
	function OnCreditGame(event : MouseEvent)
	{
		removeChildren();
		
		
		//setup the textformat with a nice font	
		var scoreTextFormat:TextFormat = new TextFormat("fonts/PAPYRUS.TTF", 28, 0xFF000000, true);
		
		var backdropData : BitmapData = Assets.getBitmapData("img/whiter.png");
		var backdrop : Bitmap = new Bitmap(backdropData);
		addChild(backdrop);
		backdrop.scaleX = 1;
		backdrop.scaleY = 1;
		
		var yPos:Int = 10;
		//for ordering the credits
		
		var result = Database.getCredits();
		for (row in result)
		{
			yPos += 50;
			
		    var creditname = row.Name;
		    var job = row.Job;
	    	trace('$creditname - $job');
			
			
            //displays highscores
	    	jobDisplay = new TextField();
	    	jobDisplay.autoSize = TextFieldAutoSize.LEFT;
	    	jobDisplay.defaultTextFormat = scoreTextFormat;
	    	jobDisplay.selectable = false;
	    	jobDisplay.border = false;
	    	jobDisplay.x = 300;
			jobDisplay.y = yPos;
	    	jobDisplay.text = Std.string(job);
	    	addChild( jobDisplay );
		
	    	creditnameDisplay = new TextField();
	    	creditnameDisplay.autoSize = TextFieldAutoSize.LEFT;
	      	creditnameDisplay.defaultTextFormat = scoreTextFormat;
	    	creditnameDisplay.selectable = false;
	    	creditnameDisplay.border = false;
	    	creditnameDisplay.x = 10;
			creditnameDisplay.y = yPos;
		    creditnameDisplay.text = Std.string(creditname);
		    addChild( creditnameDisplay );
		}
		
		//back to the menu
		backButton = new Button('Back_Button');
		backButton.addEventListener(MouseEvent.CLICK, OnBackButton);
		addChild(backButton);
		backButton.x = 450;
		backButton.y = 850;
		backButton.addEventListener(MouseEvent.ROLL_OVER, backRoll);
		backButton.addEventListener(MouseEvent.ROLL_OUT, backOut);
	}
	
	function OnQuitGame(event : MouseEvent)
	{
		openfl.system.System.exit(0);
	}

	
	function OnPlayMusicButton(event : MouseEvent)
	{
		Menu.playMusic("whiteguy");
		//removes playmusicButton and changes it with the musicbutton
		//the musicbutton actually stops the music
		removeChild(playmusicButton);
		
		musicButton = new Button('Music_Button');
		musicButton.addEventListener(MouseEvent.CLICK, OnMusicButton);
		addChild(musicButton);
		musicButton.x = 823.5;
		musicButton.y = 450;
		musicButton.addEventListener(MouseEvent.ROLL_OVER, musicRoll);
		musicButton.addEventListener(MouseEvent.ROLL_OUT, musicOut);
	}
	
	function OnMusicButton(event : MouseEvent)
	{
		Menu.stopMusic("whiteguy");
		//removes the musicbutton and replaces it with the playmusicButton
		//the playmusicButton actually plays music
		removeChild(musicButton);
		
		playmusicButton = new Button('Play_Button');
		playmusicButton.addEventListener(MouseEvent.CLICK, OnPlayMusicButton);
		addChild(playmusicButton);
		playmusicButton.x = 823.5;
		playmusicButton.y = 450;
		playmusicButton.addEventListener(MouseEvent.ROLL_OVER, playmusicRoll);
		playmusicButton.addEventListener(MouseEvent.ROLL_OUT, playmusicOut);
	}

	function OnLeaderboardButton(event : MouseEvent)
	{
		removeChildren();
		
		
		//setup the textformat with the same nice font
		var scoreTextFormat:TextFormat = new TextFormat("fonts/PAPYRUS.TTF", 28, 0xFF000000, true);
		
		var backdropData : BitmapData = Assets.getBitmapData("img/whiter.png");
		var backdrop : Bitmap = new Bitmap(backdropData);
		addChild(backdrop);
		backdrop.scaleX = 1;
		backdrop.scaleY = 1;
		
		var yPos:Int = 10;
		//for ordering the highscores
		
		var result = Database.getHighscores();
		for (row in result)
		{
			yPos += 50;
			
		    var name = row.name;
	    	trace('$name');
		
	    	nameDisplay = new TextField();
	    	nameDisplay.autoSize = TextFieldAutoSize.LEFT;
	      	nameDisplay.defaultTextFormat = scoreTextFormat;
	    	nameDisplay.selectable = false;
	    	nameDisplay.border = false;
	    	nameDisplay.x = 10;
			nameDisplay.y = yPos;
		    nameDisplay.text = Std.string(name);
		    addChild( nameDisplay );
		}
		
		//back to the menu
		backButton = new Button('Back_Button');
		backButton.addEventListener(MouseEvent.CLICK, OnBackButton);
		addChild(backButton);
		backButton.x = 450;
		backButton.y = 850;
		backButton.addEventListener(MouseEvent.ROLL_OVER, backRoll);
		backButton.addEventListener(MouseEvent.ROLL_OUT, backOut);
	}
	
	
	
	function OnBackButton(event : MouseEvent)
	{
		gamestart();
	}

	
	//lots of fancy animations and SFX, all the same
	function startRoll(event:MouseEvent)
	{
		startButton.scaleX = 1.15;
		startButton.scaleY = 1.15;
		Menu.playSFX("SFX");
	}
	
	function startOut(event:MouseEvent)
	{
		startButton.scaleX = 1;
		startButton.scaleY = 1;
		Menu.playSFX("OUT");
	}
	
	function playmusicRoll(event:MouseEvent)
	{
		playmusicButton.scaleX = 1.15;
		playmusicButton.scaleY = 1.15;
		Menu.playSFX("SFX");
	}
	
	function playmusicOut(event:MouseEvent)
	{
		playmusicButton.scaleX = 1;
		playmusicButton.scaleY = 1;
		Menu.playSFX("OUT");
	}

	function musicRoll(event:MouseEvent)
	{
		musicButton.scaleX = 1.15;
		musicButton.scaleY = 1.15;
		Menu.playSFX("SFX");
	}
	
	function musicOut(event:MouseEvent)
	{
		musicButton.scaleX = 1;
		musicButton.scaleY = 1;
		Menu.playSFX("OUT");
	}
	
	function leaderboardRoll(event:MouseEvent)
	{
		leaderboardButton.scaleX = 1.15;
		leaderboardButton.scaleY = 1.15;
		Menu.playSFX("SFX");
	}
	
	function leaderboardOut(event:MouseEvent)
	{
		leaderboardButton.scaleX = 1;
		leaderboardButton.scaleY = 1;
		Menu.playSFX("OUT");
	}

	function backRoll(event:MouseEvent)
	{
		backButton.scaleX = 1.15;
		backButton.scaleY = 1.15;
		Menu.playSFX("SFX");
	}
	
	function backOut(event:MouseEvent)
	{
		backButton.scaleX = 1;
		backButton.scaleY = 1;
		Menu.playSFX("OUT");
	}
	
	function quitRoll(event:MouseEvent)
	{
		quitButton.scaleX = 1.15;
		quitButton.scaleY = 1.15;
		Menu.playSFX("SFX");
	}
	
	function quitOut(event:MouseEvent)
	{
		quitButton.scaleX = 1;
		quitButton.scaleY = 1;
		Menu.playSFX("OUT");
	}
	
	function creditRoll(event:MouseEvent)
	{
		creditButton.scaleX = 1.15;
		creditButton.scaleY = 1.15;
		Menu.playSFX("SFX");
	}
	
	function creditOut(event:MouseEvent)
	{
		creditButton.scaleX = 1;
		creditButton.scaleY = 1;
		Menu.playSFX("OUT");
	}
	
	function okayRoll(event:MouseEvent)
	{
		okayButton.scaleX = 1.15;
		okayButton.scaleY = 1.15;
		Menu.playSFX("SFX");
	}
	
	function okayOut(event:MouseEvent)
	{
		okayButton.scaleX = 1;
		okayButton.scaleY = 1;
		Menu.playSFX("OUT");
	}
	
	function QARoll(event:MouseEvent)
	{
		QADisplay.scaleX = 1.15;
		QADisplay.scaleY = 1.15;
		Menu.playSFX("SFX");
	}
	
	function QAOut(event:MouseEvent)
	{
		QADisplay.scaleX = 1;
		QADisplay.scaleY = 1;
		Menu.playSFX("OUT");
	}
	
	function ARoll(event:MouseEvent)
	{
		ADisplay.scaleX = 1.15;
		ADisplay.scaleY = 1.15;
		Menu.playSFX("SFX");
	}
	
	function AOut(event:MouseEvent)
	{
		ADisplay.scaleX = 1;
		ADisplay.scaleY = 1;
		Menu.playSFX("OUT");
	}
	
	function A2Roll(event:MouseEvent)
	{
		A2Display.scaleX = 1.15;
		A2Display.scaleY = 1.15;
		Menu.playSFX("SFX");
	}
	
	function A2Out(event:MouseEvent)
	{
		A2Display.scaleX = 1;
		A2Display.scaleY = 1;
		Menu.playSFX("OUT");
	}
	
	function EndRoll(event:MouseEvent)
	{
		endDisplay.scaleX = 1.15;
		endDisplay.scaleY = 1.15;
		Menu.playSFX("SFX");
	}
	
	function EndOut(event:MouseEvent)
	{
		endDisplay.scaleX = 1;
		endDisplay.scaleY = 1;
		Menu.playSFX("OUT");
	}
	
	function End2Roll(event:MouseEvent)
	{
		end2Display.scaleX = 1.15;
		end2Display.scaleY = 1.15;
		Menu.playSFX("SFX");
	}
	
	function End2Out(event:MouseEvent)
	{
		end2Display.scaleX = 1;
		end2Display.scaleY = 1;
		Menu.playSFX("OUT");
	}
	
	function End3Roll(event:MouseEvent)
	{
		end3Display.scaleX = 1.15;
		end3Display.scaleY = 1.15;
		Menu.playSFX("SFX");
	}
	
	function End3Out(event:MouseEvent)
	{
		end3Display.scaleX = 1;
		end3Display.scaleY = 1;
		Menu.playSFX("OUT");
	}
	
	function End4Roll(event:MouseEvent)
	{
		end4Display.scaleX = 1.15;
		end4Display.scaleY = 1.15;
		Menu.playSFX("SFX");
	}
	
	function End4Out(event:MouseEvent)
	{
		end4Display.scaleX = 1;
		end4Display.scaleY = 1;
		Menu.playSFX("OUT");
	}
	
	function A3Roll(event:MouseEvent)
	{
		A3Display.scaleX = 1.15;
		A3Display.scaleY = 1.15;
		Menu.playSFX("SFX");
	}
	
	function A3Out(event:MouseEvent)
	{
		A3Display.scaleX = 1;
		A3Display.scaleY = 1;
		Menu.playSFX("OUT");
	}
	
	function A4Roll(event:MouseEvent)
	{
		A4Display.scaleX = 1.15;
		A4Display.scaleY = 1.15;
		Menu.playSFX("SFX");
	}
	
	function A4Out(event:MouseEvent)
	{
		A4Display.scaleX = 1;
		A4Display.scaleY = 1;
		Menu.playSFX("OUT");
	}
}
