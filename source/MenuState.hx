package;

import flixel.FlxG;
import flixel.FlxSprite;
import flixel.FlxState;
import flixel.text.FlxText;
import flixel.ui.FlxButton;
import flixel.util.FlxMath;

/*----------------------------------------------------
Class: MenuState
Description: State launched on boot up
Condition: Tidy
Author: Jaxson Van Doorn, 2014
-----------------------------------------------------*/
class MenuState extends FlxState
{
	/*----------------------------------------------------
	Public Variables
	-----------------------------------------------------*/

	/*----------------------------------------------------
	Private Variables
	-----------------------------------------------------*/
	
	private var bg:FlxSprite;

	/*----------------------------------------------------
	Function: Create
	Description: Called when this state is created
	Returns: Void
	-----------------------------------------------------*/
	override public function create():Void
	{
		super.create();

		// Add Bg
		bg = new FlxSprite(0, 0);
		bg.loadGraphic("assets/images/ui/mobile/startScreen.png");
		add(bg);
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
	override public function update():Void
	{
		super.update();

		if (true)
		{
			FlxG.switchState(new PlayState());
		}
	}	
}