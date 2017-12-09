package;

import flixel.FlxG;
import flixel.group.FlxGroup;
import flixel.group.FlxSpriteGroup;
import flixel.util.FlxCollision;
import flixel.FlxCamera;
import flixel.FlxCamera.FlxCameraFollowStyle;
import flixel.FlxSprite;
import flixel.FlxState;
import flixel.ui.FlxButton;
import flixel.text.FlxText;
import flixel.math.FlxMath;
import flixel.math.FlxRandom;
import flixel.group.FlxSpriteGroup;

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

	private var player:Player;
    private var level:LevelGenerator;
	private var enemies:FlxSpriteGroup;

	public var scoreHeader:FlxSprite;
	public var scoreValue:Int;
	public var scoreField:FlxBitmapText;
	public var pauseButton:FlxButton;
	public var pauseMenu:PauseMenu;
	private var fontStyle:FlxBitmapFont;

    private static inline var SCREEN_WIDTH = 1080;
    private static inline var SCREEN_HEIGHT = 11520;

	override public function create():Void
	{
		super.create();

		createBackground();
		createText();

		// Group
		enemies = new FlxSpriteGroup();
		add(enemies);

        // Level
        level = new LevelGenerator(enemies);

		// Player
        player = new Player(level, enemies);
        level.setPlayer(player);
        add(player);

        level.generate();

		createPauseMenu();
		createPauseGameButton();

		// Camera
		FlxG.camera.setScrollBoundsRect(0, 0, SCREEN_WIDTH, SCREEN_HEIGHT, true);
		FlxG.camera.follow(player, FlxCameraFollowStyle.PLATFORMER);
	}

	override public function destroy():Void
	{
		super.destroy();
	}

    override public function update(dt:Float):Void
	{
		super.update(dt);
	}

	public function setScore(value:Int):Void
	{
		scoreValue += value;
		scoreField.text = intToString(scoreValue);
	}

	public function intToString(i:Int):String
	{
		var strbuf:StringBuf = new StringBuf();
		strbuf.add(i);
		return strbuf.toString();
	}

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
		add(scoreField);
	}

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

	public function createPauseMenu():Void
	{
		pauseMenu = new PauseMenu(this);
	}

	private function createPauseGameButton():Void
	{
		pauseButton = new FlxButton(900, 20, "", pauseGame);
		pauseButton.loadGraphic("assets/images/ui/pause/pause.png");
		pauseButton.scrollFactor.x = pauseButton.scrollFactor.y = 0;
		add(pauseButton);
	}

    private function hideMenu():Void
    {
		pauseButton.visible = false;
		scoreHeader.visible = false;
		scoreField.visible = false;
    }

    public function showMenu():Void
    {
		pauseButton.visible = true;
		scoreHeader.visible = true;
		scoreField.visible = true;
    }

	/*----------------------------------------------------
	Function: pauseGame
	Description: Function called by the a button to pause the game
	Returns: Void
	-----------------------------------------------------*/
	private function pauseGame():Void
	{
		// Hide Other UI Elements
        hideMenu();
		openSubState(pauseMenu);
	}
}
