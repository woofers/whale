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
    private var player:Player;

    public function new(player:Player, direction:Bool, y:Int):Void
    {
        this.player = player;

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
		if (player.acceleration.y > 0)
		{
            return player.y + detectionDistance > y;
		}
        return player.y - detectionDistance < y;
	}
}
