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
    public static inline var LEFT:Bool = true;
    public static inline var RIGHT:Bool = false;

    private static inline var MOVING_SPEED:Int = 13;
    private static inline var ANIMATION_SPEED:Int = 9;
    private static inline var DETECTION_DISTANCE = 1000;
    private static inline var LEFT_LOCATION = -770;
    private static inline var RIGHT_LOCATION = 1177;

    private var player:Player;

    public function new(player:Player, direction:Bool, y:Int):Void
    {
        this.player = player;

        super();

        // Set Positions
        setLocation(direction, y);

        // Load Spritesheet
        frames = FlxAtlasFrames.fromSparrow("assets/images/sprites/eel.png",
                                            "assets/images/sprites/eel.xml");

        // Create Animations
        animation.addByPrefix("swim", "Swim", ANIMATION_SPEED);

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

    public function setLocation(direction:Bool, y:Int):Void
    {
        this.y = y;
        if (direction)
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
