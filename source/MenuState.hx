package;

import flixel.FlxG;
import flixel.FlxSprite;
import flixel.FlxState;
import flixel.text.FlxText;
import flixel.ui.FlxButton;
import flixel.math.FlxMath;

class MenuState extends FlxState
{
	private var bg:FlxSprite;

	override public function create():Void
	{
		super.create();

		// Add BG
		bg = new FlxSprite(0, 0);
		bg.loadGraphic("assets/images/ui/mobile/startScreen.png");
		add(bg);
	}

	override public function destroy():Void
	{
		super.destroy();
	}

    override public function update(dt:Float):Void
	{
		super.update(dt);
        FlxG.switchState(new PlayState());
	}
}
