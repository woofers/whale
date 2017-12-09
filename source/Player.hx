package;

import flixel.FlxG;
import flixel.FlxObject;
import flixel.FlxSprite;
import flixel.util.FlxCollision;
import flixel.graphics.frames.FlxAtlasFrames;
import flixel.group.FlxGroup;
import flixel.group.FlxSpriteGroup;

/*----------------------------------------------------
Class: Player
Description: The character the player controls
Condition: Tidy
Author: Jaxson Van Doorn, 2014
-----------------------------------------------------*/
class Player extends FlxSprite
{
	public static inline var switchDirrectionTop:Int = 460;
	public static inline var switchDirrectionBottom:Int = 10760;

    public static var START_LOCATION_X = FlxG.width / 3 + 100;
    public static inline var START_LOCATION_Y = switchDirrectionTop;
	private static inline var SWIM_SPEED:Int = 600;
    private static inline var DRAG:Int = 4;
    private static inline var ACCELERATION_X:Int = 18;
    private static inline var HIT_TIME:Int = 14;

	private var hitTime:Int;
    private var level:LevelGenerator;
    private var enemies:FlxSpriteGroup;
    private var score:Int;

    public function new(level:LevelGenerator, enemies:FlxSpriteGroup):Void
	{
        this.level = level;
        this.enemies = enemies;

        START_LOCATION_X = FlxG.width / 3 + 100;

		// Set Positions
		super(START_LOCATION_X, START_LOCATION_Y);

		// Load Spritesheet
		this.frames = FlxAtlasFrames.fromSparrow("assets/images/sprites/player.png",
                                                 "assets/images/sprites/player.xml");

		// Create Animations
		animation.addByPrefix("swim", "Swim", 11);

		// Max Velocities on Player
		maxVelocity.set(500, 600);

		// Simulate Descending or Ascending on the Player
		acceleration.y = SWIM_SPEED;

		// Drag
		drag.x = maxVelocity.x * DRAG;

		// Set Hitbox For Current Dirrection
		hitBox();
	}

	/*----------------------------------------------------
	Function: Update
	Description: Called 60 times a second
	Returns: Void
	-----------------------------------------------------*/
    override public function update(dt:Float):Void
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
			acceleration.x = -maxVelocity.x * ACCELERATION_X;
		}
		// Right
		else if (MyInput.right())
		{
			acceleration.x = maxVelocity.x * ACCELERATION_X;
		}

		super.update(dt);
	}

	/*----------------------------------------------------
	Function: hitTolerance
	Description: Makes sure the player is in contact with the enemy for a more than 0.01 of a second
	Returns: Void
	-----------------------------------------------------*/
	private function hitTolerance():Void
	{
		hitTime ++;
		if (hitTime > HIT_TIME)
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
		x = START_LOCATION_X;
		y = START_LOCATION_Y;
		velocity.x = 0;
		velocity.y = 0;

		hitTime = 0;
		level.reset(false);
	}

	/*----------------------------------------------------
	Function: hitBox
	Description: Adjust hitbox for facing right or left
	Returns: Void
	-----------------------------------------------------*/
	private function hitBox():Void
	{
        width = 171;
        height = 150;
		if (scale.x > 0)
		{
			offset.x = 17;
			offset.y = 249;
		}
		else
		{
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
			acceleration.y = -SWIM_SPEED;

            // Flip Player
            scale.x *= -1;
            scale.y *= -1;
            hitBox();

			level.reset(true);
		}

		// Go Down
		if (y < switchDirrectionTop && !isGoingDown())
		{
			// Switchs Dirrection
			acceleration.y = SWIM_SPEED;

            // Flip Player
            scale.x *= -1;
            scale.y *= -1;
            hitBox();

			level.reset(false);
		}
	}

    /**
        Returns whether or not the player is falling down
    **/
	public function isGoingDown():Bool
	{
        return acceleration.y > 0;
	}

	/**
        Handles hit detection
    **/
	private function hitDetected():Bool
	{
		for (i in 0... enemies.countLiving())
		{
			if (FlxCollision.pixelPerfectCheck(this, enemies.members[i]))
			{
				return true;
			}
		}
		return false;
	}

	private function screenBounds():Void
	{
		// Screen Bounds
		if (x <= 0) x = 0;
		if (x >= 900) x = 900;
	}
}
