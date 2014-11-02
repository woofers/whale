package;

import flixel.FlxG;
import flixel.FlxObject;
import flixel.FlxSprite;
import flixel.util.FlxCollision;
import flixel.util.loaders.SparrowData;

/*----------------------------------------------------
Class: Player
Description: The character the player controls
Condition: Needs work
Author: Jaxson Van Doorn, 2014
-----------------------------------------------------*/
class Player extends FlxSprite
{
	/*----------------------------------------------------
	Public Variables
	-----------------------------------------------------*/

	public static var startX:Float;
	public static var startY:Float;
	public static var switchDirrectionTop:Int = 460;
	public static var switchDirrectionBottom:Int = 10760;

	/*----------------------------------------------------
	Private Variables
	-----------------------------------------------------*/

	private var swimmingSpeed:Int = 600;
	private var hitTime:Int = 0;

	/*----------------------------------------------------
	Function: New
	Description: Called when the sprite is added to a state
	Returns: Void
	-----------------------------------------------------*/
	public function new():Void
	{
		// Define Start Positions
		startX = FlxG.width / 3 + 100;
		startY = switchDirrectionTop;

		// Set Positions
		super(startX, startY);

		// Load Spritesheet
		loadGraphicFromTexture(new SparrowData("assets/images/sprites/player.xml", "assets/images/sprites/player.png"));

		// Create Animations
		animation.addByPrefix("swim", "Swim", 11);

		// Max Velocities on Player
		maxVelocity.set(500, 600);

		// Simulate Descending or Ascending on the Player
		acceleration.y = swimmingSpeed;

		// Drag
		drag.x = maxVelocity.x * 4;

		// Set Hitbox For Current Dirrection
		hitBox();
	}

	/*----------------------------------------------------
	Function: Update
	Description: Called 60 times a second
	Returns: Void
	-----------------------------------------------------*/
	override public function update():Void
	{
		// Rest Acceleration
		acceleration.x = 0;

		// Handles Dirrection Switching
		switchDirrection();

		// Creates Screen Bounds
		screenBounds();

		// Hit Detection
		if (hitDetected())
		{
			hitTolerance();
		}
		else
		{
			hitTime = 0;
		}

		// Animation Control
		if (acceleration.y > 0 || acceleration.y < 0)
		{
			animation.play("swim");
		}

		// Left
		if (MyInput.left())
		{
			acceleration.x = -maxVelocity.x * 18;
		}

		// Right
		else if (MyInput.right())
		{
			acceleration.x = maxVelocity.x * 18;
		}

		// Still
		else
		{}

		super.update();
	}


	/*----------------------------------------------------
	Function: hitTolerance
	Description: Makes sure the player is in contact with the enemy for a more than 0.01 of a second
	Returns: Void
	-----------------------------------------------------*/
	private function hitTolerance():Void
	{
		hitTime ++;

		if (hitTime > 24)
		{
			resetPlayer();
		}
	}

	/*----------------------------------------------------
	Function: resetPlayer
	Description: Resets the player and the enemies
	Returns: Void
	-----------------------------------------------------*/
	private function resetPlayer():Void
	{
		x = startX;
		y = startY;

		hitTime = 0;

		LevelGenerator.reset();
	}

	/*----------------------------------------------------
	Function: hitBox
	Description: Adjust hitbox for facing right or left
	Returns: Void
	-----------------------------------------------------*/
	private function hitBox():Void
	{
		if (scale.x > 0)
		{
			width = 171;
			height = 150;
			offset.x = 17;
			offset.y = 249;
		}
		else
		{
			width = 171;
			height = 150;
			offset.x = 147;
			offset.y = 122;
		}
	}

	/*----------------------------------------------------
	Function: switchDirrection
	Description: Switch dirrection of the player
	Returns: Void
	-----------------------------------------------------*/
	private function switchDirrection():Void
	{
		// Go Up
		if (y > switchDirrectionBottom && isGoingDown())
		{
			// Switchs Dirrection
			acceleration.y = -swimmingSpeed;

			// Flip Player
			scale.x = -scale.x;
			scale.y = -scale.y;

			// Adjust Hitbox
			hitBox();

			LevelGenerator.reset();
		}

		// Go Down
		if (y < switchDirrectionTop && !isGoingDown())
		{
			// Switchs Dirrection
			acceleration.y = swimmingSpeed;

			// Flip Player
			scale.x = -scale.x;
			scale.y = -scale.y;

			// Adjust Hitbox
			hitBox();

			LevelGenerator.reset();
		}
	}

	/*----------------------------------------------------
	Function: isGoingDown
	Description: Return whether or not the player is falling down
	Returns: Bool
	-----------------------------------------------------*/
	private function isGoingDown():Bool
	{
		if (acceleration.y > 0)
		{
			return true;
		}

		return false;
	}


	/*----------------------------------------------------
	Function: hitDetected
	Description: Handles hit detection
	Returns: Bool
	-----------------------------------------------------*/
	private function hitDetected():Bool
	{
		// Colide
		for (i in 0... PlayState.killGroup.countLiving())
		{
			if (FlxCollision.pixelPerfectCheck(this, PlayState.killGroup.members[i]))
			{
				return true;
			}
		}

		return false;
	}

	/*----------------------------------------------------
	Function: screenBounds
	Description: Creates a invisible screen boundary for the player
	Returns: Void
	-----------------------------------------------------*/
	private function screenBounds():Void
	{
		// Screen Bounds
		if (x <= 0) x = 0;
		if (x >= 900) x = 900;
	}
}