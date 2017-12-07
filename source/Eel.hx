package;

import flixel.FlxG;
import flixel.FlxObject;
import flixel.FlxSprite;
import flixel.graphics.frames.FlxAtlasFrames;

/**
   Eeel Enemy
   Author: Jaxson Van Doorn
**/
class Eel extends FlxSprite
{
	private static inline var movingSpeed:Int = 13;
	private static inline var animationSpeed:Int = 9;
    private static inline var detectionDistance = 1000;
    private static inline var leftLocation = -770;
    private static inline var rightLocation = 1177;

    public function new(direction:Bool, y:Int):Void
	{
		super(0, 0);

		// Set Positions
		setLocation(direction, y);

		// Load Spritesheet
		frames = FlxAtlasFrames.fromSparrow("assets/images/sprites/eel.png",
                                            "assets/images/sprites/eel.xml");

		// Create Animations
		animation.addByPrefix("swim", "Swim", animationSpeed);

		// Max velocities on player
		maxVelocity.set(500, 600);

		// Playing Animation
		animation.play("swim");
	}

	override public function kill():Void
	{
		super.kill();
	}

    override public function update(dt:Float):Void
	{
		// Move when Player is Near
		if (playerIsNear())
		{
			// Control Direction Moving
            acceleration.x += movingSpeed * (scale.x / scale.x);
		}

		// Add To Score When Passed
		if (Player.isGoingDown())
		{
			if (PlayState.player.y > y)
			{
				Main.setScore(10);
			}
		}
		else
		{
			if (PlayState.player.y < y)
			{
				Main.setScore(10);
			}
		}

		super.update(dt);
	}

	public function setLocation(direction, y):Void
	{
		if (direction)
		{
			// Set Positions
            x = leftLocation;
			this.y = y;

			// Set Scale
			scale.x = 1;
		}
		else
		{
			// Set Positions
            x = rightLocation;
			this.y = y;

			// Set Scale
			scale.x = -1;
		}
	}

	private function playerIsNear():Bool
	{
		if (PlayState.player.acceleration.y > 0)
		{
            return PlayState.player.y + detectionDistance > y;
		}
        return PlayState.player.y - detectionDistance < y;
	}
}
