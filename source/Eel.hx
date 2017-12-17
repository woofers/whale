package;

import flixel.FlxG;
import flixel.FlxObject;
import flixel.FlxSprite;
import flixel.graphics.frames.FlxAtlasFrames;

/**
   Eeel Enemy
   Author: Jaxson Van Doorn
**/
class Eel extends Enemy
{
    private static inline var LEFT:Int = 0;
    private static inline var RIGHT:Int = 1;

    private static inline var MOVING_SPEED:Int = 12;
    private static inline var ANIMATION_SPEED:Int = 9;
    private static inline var DETECTION_DISTANCE:Int = 1000;
    private static inline var LEFT_LOCATION:Int = -770;
    private static inline var RIGHT_LOCATION:Int = 1177;
    private static inline var SCORE = 15;

    private var player:Player;

    public function new(player:Player, direction:Int, y:Int):Void
    {
        this.player = player;

        // Set Direction
        super(direction);

        // Set Position
        setLocation(y);

        // Load Spritesheet
        frames = FlxAtlasFrames.fromSparrow("assets/images/sprites/eel.png",
                                            "assets/images/sprites/eel.xml");
        // Create Animations
        animation.addByPrefix("swim", "Swim", ANIMATION_SPEED);

        // Playing Animation
        animation.play("swim");

        // Set Score
        setScore(SCORE);
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
            if (scale.x > 0)
            {
                acceleration.x += MOVING_SPEED;
            }
            else
            {
                acceleration.x -= MOVING_SPEED;
            }
        }
        super.update(dt);
    }

    public function setLocation(y:Int):Void
    {
        this.y = y;
        if (getDirection() == LEFT)
        {
            // Set Positions
            x = LEFT_LOCATION;

            // Set Scale
            scale.x = 1;
        }
        else
        {
            // Set Positions
            x = RIGHT_LOCATION;

            // Set Scale
            scale.x = -1;
        }
    }

    private function playerIsNear():Bool
    {
        if (player.acceleration.y > 0)
        {
            return player.y + DETECTION_DISTANCE > y;
        }
        return player.y - DETECTION_DISTANCE < y;
    }
}
