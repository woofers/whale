package;

import flixel.FlxG;
import flixel.FlxSprite;
import flixel.FlxState;
import flixel.text.FlxText;
import flixel.ui.FlxButton;
import flixel.math.FlxMath;

class MenuState extends FlxState
{
    private var bg:FlxButton;

    override public function create():Void
    {
        super.create();

        // Add BG
        bg = new FlxButton(0, 0, "", startGame);
        bg.loadGraphic("assets/images/ui/menu/startScreen.png");
        bg.scrollFactor.x = bg.scrollFactor.y = 0;
        add(bg);
    }

    override public function destroy():Void
    {
        super.destroy();
    }

    override public function update(dt:Float):Void
    {
        super.update(dt);
    }

    private function startGame():Void
    {
        FlxG.switchState(new PlayState());
    }
}
