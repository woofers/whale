package;

import flixel.FlxG;
import flixel.FlxObject;
import flixel.FlxSprite;
import flixel.graphics.frames.FlxAtlasFrames;

/*----------------------------------------------------
Class: Lobster
Description: Static lobster enemy
Condition: Tidy
Author: Jaxson Van Doorn, 2014
-----------------------------------------------------*/
class Lobster extends Enemy
{
    public static inline var LEFT:Int = 0;
    public static inline var RIGHT:Int = 1;
    public static inline var MIDDLE:Int = 2;

    private static inline var LEFT_LOCATION:Int = -100;
    private static inline var RIGHT_LOCATION:Int = 800;
    private static inline var MIDDLE_LOCATION:Int = 350;

    private static inline var ANIMATION_SPEED:Int = 7;
    private static inline var SCORE = 7;

    public function new(direction:Int, y):Void
    {
        // Set Direction
        super(direction);

        // Set Location
        setLocation(y);

        // Load Spritesheet
        frames = FlxAtlasFrames.fromSparrow(
                "assets/images/sprites/lobster.png",
                "assets/images/sprites/lobster.xml");

        // Create Animations
        animation.addByPrefix("grab", "Grab", ANIMATION_SPEED);

        // Max velocities on player
        maxVelocity.set(500, 600);

        // Playing Animation
        animation.play("grab");

        // Set Score
        setScore(SCORE);
    }

    override public function kill():Void
    {
        super.kill();
    }

    override public function update(dt:Float):Void
    {
        super.update(dt);
    }

    public function setLocation(y:Int):Void
    {
        this.y = y;
        switch (getDirection())
        {
            // Left
            case 0:

                // Set Positions
                this.x = LEFT_LOCATION;

                // Set Scale
                scale.x = 1;

            // Right
            case 1:

                // Set Positions
                x = RIGHT_LOCATION;

                // Set Scale
                scale.x = -1;

            // Middle
            default:

                // Set Positions
                x = MIDDLE_LOCATION;

                // Set Scale
                scale.x = 1;
        }
    }
}
