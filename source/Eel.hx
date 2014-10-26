package;

import flixel.FlxG;
import flixel.FlxObject;
import flixel.FlxSprite;
import flixel.util.loaders.SparrowData;

/*----------------------------------------------------
Class: Eel
Description: Moving Eel Enemy
Condition: Tidy
Author: Jaxson Van Doorn, 2014
-----------------------------------------------------*/
class Eel extends FlxSprite
{
	/*----------------------------------------------------
	Public Variables
	-----------------------------------------------------*/

	/*----------------------------------------------------
	Private Variables
	-----------------------------------------------------*/

	private var movingSpeed:Int = 13;

	/*----------------------------------------------------
	Function: New
	Description: Called when the sprite is added to a state
	Returns: Void
	-----------------------------------------------------*/
	public function new(direction, posY):Void
	{
		super(0, 0);

		// Set Positions
		setPos(direction, posY);

		// Load Spritesheet
		loadGraphicFromTexture(new SparrowData("assets/images/sprites/eel.xml", "assets/images/sprites/eel.png"));
		
		// Create Animations
		animation.addByPrefix("swim", "Swim", 9);
		
		// Max velocities on player
		maxVelocity.set(500, 600);

		// Playing Animation
		animation.play("swim");
	}

	/*----------------------------------------------------
	Function: Kill
	Description: Called when the sprite is removed from a state
	Returns: Void
	-----------------------------------------------------*/
	override public function kill():Void
	{
		super.kill();
	}
	
	/*----------------------------------------------------
	Function: Update
	Description: Called 60 times a second
	Returns: Void
	-----------------------------------------------------*/
	override public function update():Void
	{
		// Move when Player is Near
		if (playerIsNear())
		{
			// Controlls Dirrection Moving
			if (scale.x > 0)
			{
				acceleration.x += movingSpeed;
			}
			else
			{
				acceleration.x -= movingSpeed;
			}
		}
		
		super.update();
	}
	
	/*----------------------------------------------------
	Function: setPos
	Description: Sets position of the eels
	Returns: Void
	-----------------------------------------------------*/
	public function setPos(direction, posY):Void
	{
		if (direction)
		{
			// Set Positions
			x = -550 - 220;
			y = posY;
			
			// Set Scale
			scale.x = 1;
		}
		else
		{
			// Set Positions
			x = 1326 - 149;
			y = posY;

			// Set Scale
			scale.x = -1;
		}
	}
	
	/*----------------------------------------------------
	Function: playerIsNear
	Description: Check if the player is near enough for the eel to start moving
	Returns: Void
	-----------------------------------------------------*/
	private function playerIsNear():Bool
	{
		if (PlayState.player.acceleration.y > 0)
		{
			if (PlayState.player.y + 1000 > y)
			{
				return true;
			}
		}
		else
		{
			if (PlayState.player.y - 1000 < y)
			{
				return true;
			}
		}

		return false;
	}
}