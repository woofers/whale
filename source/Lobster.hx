package;

import flixel.FlxG;
import flixel.FlxObject;
import flixel.FlxSprite;
import flixel.util.loaders.SparrowData;

/*----------------------------------------------------
Class: Lobster
Description: Static lobster enemy
Condition: Tidy
Author: Jaxson Van Doorn, 2014
-----------------------------------------------------*/
class Lobster extends FlxSprite
{
	/*----------------------------------------------------
	Public Variables
	-----------------------------------------------------*/

	/*----------------------------------------------------
	Private Variables
	-----------------------------------------------------*/

	/*----------------------------------------------------
	Function: New
	Description: Called when the sprite is added to a state
	Returns: Void
	-----------------------------------------------------*/
	public function new(direction, posY):Void
	{
		super(0, 0);

		setPos(direction, posY);

		// Load Spritesheet
		loadGraphicFromTexture(new SparrowData("assets/images/sprites/lobster.xml", "assets/images/sprites/lobster.png"));
		
		// Create Animations
		animation.addByPrefix("grab", "Grab", 9);
		
		// Max velocities on player
		maxVelocity.set(500, 600);

		// Playing Animation
		animation.play("grab");
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
		super.update();
	}

	/*----------------------------------------------------
	Function: setPos
	Description: Sets position of the eels
	Returns: Void
	-----------------------------------------------------*/
	public function setPos(direction, posY):Void
	{
		switch (direction) 
		{
			// Left
			case 0:

				// Set Positions
				x = -100;
				y = posY;
			
				// Set Scale
				scale.x = 1;

			// Right
			case 1:

				// Set Positions
				x = 800;
				y = posY;
			
				// Set Scale
				scale.x = -1;

			// Middle
			default:

				// Set Positions
				x = 350;
				y = posY;

				// Set Scale
				scale.x = 1;
		}
	}
}