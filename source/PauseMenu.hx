package;

import flash.system.System;
import flixel.FlxG;
import flixel.ui.FlxButton;
import flixel.FlxSubState;
import flixel.FlxSprite;
import flixel.text.FlxBitmapText;
import flixel.graphics.frames.FlxBitmapFont;
import flixel.text.FlxText;
import openfl.Assets;
import flixel.util.FlxColor;
import openfl.Lib;

/**
    Author: Jaxson Van Doorn
**/
class PauseMenu extends FlxSubState
{
    // Black Overlay
    private var darken:FlxSprite;

    // Score Header
    private var scoreHeader:FlxSprite;

    // Score
    private var scoreValue:String;
    private var scoreField:FlxBitmapText;
    private var fontStyle:FlxBitmapFont;

    // Buttons
    private var resumeButton:FlxButton;
    private var settingsButton:FlxButton;
    private var exitButton:FlxButton;

    // PlayState
    private var playState:PlayState;


    public function new(playState:PlayState):Void
    {
        super();
        this.playState = playState;
    }

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
        fontStyle = FlxBitmapFont.fromAngelCode(
                        Assets.getBitmapData("assets/font/font.png"),
                        Xml.parse(Assets.getText("assets/font/font.fnt")));

        // Score
        scoreField = new FlxBitmapText(fontStyle);
        scoreField.text = playState.score();
        scoreField.scrollFactor.x = scoreField.scrollFactor.y = 0;
        scoreField.useTextColor = false;
        scoreField.color = 0xffEE4D4D;
        scoreField.x = scoreField.y = 500;
        add(scoreField);

        // Resume Button
        resumeButton = new FlxButton(293, 977, "", resumeGame);
        resumeButton.loadGraphic("assets/images/ui/pause/play.png");
        resumeButton.scrollFactor.x = resumeButton.scrollFactor.y = 0;
        add(resumeButton);

        // Settings Button
        settingsButton = new FlxButton(751, 827, "", resumeGame);
        settingsButton.loadGraphic("assets/images/ui/pause/settings.png");
        settingsButton.scrollFactor.x = settingsButton.scrollFactor.y = 0;
        add(settingsButton);

        // Exit Button
        exitButton = new FlxButton(145, 1436, "", closeGame);
        exitButton.loadGraphic("assets/images/ui/pause/exit.png");
        exitButton.scrollFactor.x = exitButton.scrollFactor.y = 0;
        add(exitButton);
    }

    override public function update(dt:Float):Void
    {
        super.update(dt);
    }

    /**
        Exits the pause menu state
    **/
    private function resumeGame():Void
    {
        close();
        playState.createPauseMenu();

        // Show Hidden UI Elements
        playState.showMenu();
    }

    private function closeGame():Void
    {
        Lib.exit();
    }
}
