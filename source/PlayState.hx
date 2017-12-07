package;

import flixel.FlxG;
import flixel.group.FlxGroup;
import flixel.util.FlxCollision;
import flixel.FlxCamera;
import flixel.FlxCamera.FlxCameraFollowStyle;
import flixel.FlxSprite;
import flixel.FlxState;
import flixel.ui.FlxButton;
import flixel.text.FlxText;
import flixel.math.FlxMath;
import flixel.math.FlxRandom;

import flixel.text.FlxBitmapText;
import flixel.graphics.frames.FlxBitmapFont;
import flixel.text.FlxText;
import openfl.Assets;
import flixel.util.FlxColor;
import flixel.FlxSubState;
import flixel.ui.FlxButton;

/*----------------------------------------------------
Class: PlayState
Description: State when the user is playing the game
Condition: Ok
Author: Jaxson Van Doorn, 2014
-----------------------------------------------------*/
class PlayState extends FlxState
{
	/*----------------------------------------------------
	Public Variables
	-----------------------------------------------------*/

	public static var pauseMenu:PauseMenu;

	// Player
	public static var player:Player;

	// Instant Kill Group
	public static var killGroup:flixel.group.FlxSpriteGroup;

	// Score Header
	public static  var scoreHeader:FlxSprite;

	// Score
	public static var scoreValue:String;
	public static var scoreField:FlxBitmapText;

	// Pause Button
	public static var pauseButton:FlxButton;

	/*----------------------------------------------------
	Private Variables
	-----------------------------------------------------*/

	// Score
	private var fontStyle:FlxBitmapFont;

	/*----------------------------------------------------
	Function: Create
	Description: Called when this state is created
	Returns: Void
	-----------------------------------------------------*/
	override public function create():Void
	{
		super.create();

		createBackground();
		createText();

		// Player
		player = new Player();
		add(player);

		// Group
		killGroup = new flixel.group.FlxSpriteGroup();
		LevelGenerator.generate();
		add(killGroup);

		createPauseMenu();
		createPauseGameButton();

		// Camera
		FlxG.camera.setScrollBoundsRect(0, 0, 1080, 11520, true);
		FlxG.camera.follow(player, FlxCameraFollowStyle.PLATFORMER);
	}

	/*----------------------------------------------------
	Function: Destroy
	Description: Called when this state is destroyed
	Returns: Void
	-----------------------------------------------------*/
	override public function destroy():Void
	{
		super.destroy();
	}

	/*----------------------------------------------------
	Function: Update
	Description: Called 60 times a second
	Returns: Void
	-----------------------------------------------------*/
  override public function update(dt:Float):Void
	{
		super.update(dt);
	}

	/*----------------------------------------------------
	Function: createText
	Description: Creates score text
	Returns: Void
	-----------------------------------------------------*/
	private function createText():Void
	{
		// Score Header
		scoreHeader = new FlxSprite(40, 40, "assets/images/ui/pause/score.png");
		scoreHeader.scrollFactor.x = scoreHeader.scrollFactor.y = 0;
		scoreHeader.origin.x = scoreHeader.origin.y = 0;
		scoreHeader.scale.x = scoreHeader.scale.y = 0.2;
		add(scoreHeader);

		// Font Style
		fontStyle = FlxBitmapFont.fromAngelCode(
                Assets.getBitmapData(
                     "assets/font/font.png"),
                     Xml.parse(Assets.getText("assets/font/font.fnt")));

		// Score
		scoreField = new FlxBitmapText(fontStyle);
		scoreField.scrollFactor.x = scoreField.scrollFactor.y = 0;
		scoreField.text = "0";
		scoreField.useTextColor = false;
		scoreField.color = 0xffEE4D4D;
		scoreField.x = 45;
		scoreField.y = 80;

		scoreField.alignment = FlxTextAlign.CENTER;
		scoreField.multiLine = true;
		scoreField.wordWrap = false;
		//scoreField._fixedWidth = false;

		add(scoreField);
	}

	/*----------------------------------------------------
	Function: createBackground
	Description: Adds the background to the stage
	Returns: Void
	-----------------------------------------------------*/
	private function createBackground():Void
	{
		// Background
		add(new FlxSprite(0, 0, "assets/images/background/0.png"));
		add(new FlxSprite(0, 2048, "assets/images/background/1.png"));
		add(new FlxSprite(0, 4096, "assets/images/background/2.png"));
		add(new FlxSprite(0, 6144, "assets/images/background/3.png"));
		add(new FlxSprite(0, 8192, "assets/images/background/4.png"));
		add(new FlxSprite(0, 10240, "assets/images/background/5.png"));
	}

	public static function createPauseMenu():Void
	{
		pauseMenu = new PauseMenu();
	}

	/*----------------------------------------------------
	Function: createPauseGameButton
	Description: Creates the button to pause the game
	Returns: Void
	-----------------------------------------------------*/
	private function createPauseGameButton():Void
	{
		pauseButton = new FlxButton(900, 20, "", pauseGame);
		pauseButton.loadGraphic("assets/images/ui/pause/pause.png");
		pauseButton.scrollFactor.x = pauseButton.scrollFactor.y = 0;
		add(pauseButton);
	}

	/*----------------------------------------------------
	Function: pauseGame
	Description: Function called by the a button to pause the game
	Returns: Void
	-----------------------------------------------------*/
	private function pauseGame():Void
	{
		// Hide Other UI Elements
		pauseButton.visible = false;
		scoreHeader.visible = false;
		scoreField.visible = false;

		openSubState(pauseMenu);
	}
}
