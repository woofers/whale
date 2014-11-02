package;

import flixel.FlxG;
import flixel.ui.FlxButton;
import flixel.FlxSubState;
import flixel.FlxSprite;
import flixel.text.FlxBitmapTextField;
import flixel.text.pxText.PxBitmapFont;
import flixel.text.pxText.PxTextAlign;
import openfl.Assets;
import flixel.util.FlxColor;

/*----------------------------------------------------
Class: PauseMenu
Description: Get correct input method for device
Condition: Tidy
Author: Jaxson Van Doorn, 2014
-----------------------------------------------------*/
class PauseMenu extends FlxSubState
{
	/*----------------------------------------------------
	Public Variables
	-----------------------------------------------------*/

	/*----------------------------------------------------
	Private Variables
	-----------------------------------------------------*/

	// Black Overlay
	private var darken:FlxSprite;

	// Score Header
	private var scoreHeader:FlxSprite;

	// Score
	private var scoreValue:String;
	private var scoreField:FlxBitmapTextField;
	private var fontStyle:PxBitmapFont;

	// Buttons
	private var resumeButton:FlxButton;
	private var settingsButton:FlxButton;
	private var exitButton:FlxButton;

	/*----------------------------------------------------
	Function: Create
	Description: Called when this state is created
	Returns: Void
	-----------------------------------------------------*/
	override public function create():Void
	{
		super.create();

		// Darken Screen
		darken = new FlxSprite(0, 0, "assets/images/ui/pause/darken.png");
		darken.scrollFactor.x = darken.scrollFactor.y = 0;
		darken.origin.x = darken.origin.y = 0;
		darken.scale.x = 1080;
		darken.scale.y = 1920;
		add(darken);

		// Score Header
		scoreHeader = new FlxSprite(127, 255, "assets/images/ui/pause/score.png");
		scoreHeader.scrollFactor.x = scoreHeader.scrollFactor.y = 0;
		add(scoreHeader);

		// Font Style
		fontStyle = new PxBitmapFont().loadAngelCode(Assets.getBitmapData("assets/font/font.png"), Xml.parse(Assets.getText("assets/font/font.fnt")));

		// Score
		scoreField = new FlxBitmapTextField(fontStyle);
		scoreField.text = PlayState.scoreValue;
		scoreField.scrollFactor.x = scoreField.scrollFactor.y = 0;
		scoreField.useTextColor = false;
		scoreField.color = 0xffEE4D4D;
		scoreField.x = scoreField.y = 500;
		add(scoreField);

		// Resume Button
		resumeButton = new FlxButton(313, 1187, "", resumeGame);
		resumeButton.loadGraphic("assets/images/ui/pause/play.png");
		resumeButton.scrollFactor.x = resumeButton.scrollFactor.y = 0;
		add(resumeButton);

		// Settings Button
		settingsButton = new FlxButton(731, 1047, "", resumeGame);
		settingsButton.loadGraphic("assets/images/ui/pause/settings.png");
		settingsButton.scrollFactor.x = settingsButton.scrollFactor.y = 0;
		add(settingsButton);

		// Exit Button
		exitButton = new FlxButton(175, 1616, "", resumeGame);
		exitButton.loadGraphic("assets/images/ui/pause/exit.png");
		exitButton.scrollFactor.x = exitButton.scrollFactor.y = 0;
		add(exitButton);
	}

	/*----------------------------------------------------
	Function: Update
	Description: Called 60 times a second
	Returns: Void
	-----------------------------------------------------*/
	override public function update():Void
	{
		super.update();
	}

	/*----------------------------------------------------
	Function: resumeGame
	Description: Exits the pause menu state
	Returns: Void
	-----------------------------------------------------*/
	private function resumeGame():Void
	{
		close();
		PlayState.createPauseMenu();

		// Show Hidden UI Elements
		PlayState.pauseButton.visible = true;
		PlayState.scoreHeader.visible = true;
		PlayState.scoreField.visible = true;
	}
}