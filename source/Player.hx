package;

import flixel.FlxG;
import flixel.FlxObject;
import flixel.FlxSprite;
import flixel.util.FlxCollision;
import flixel.graphics.frames.FlxAtlasFrames;
import flixel.group.FlxGroup;
import flixel.group.FlxSpriteGroup;

/**
    The character the player controls
    Author: Jaxson Van Doorn
**/
class Player extends FlxSprite
{
    public static inline var SWITCH_DIRECTION_TOP:Int = 460;
    public static inline var SWITCH_DIRECTION_BOTTOM:Int = 10760;

    public static var START_LOCATION_X = FlxG.width / 3 + 100;
    public static inline var START_LOCATION_Y = SWITCH_DIRECTION_TOP;
    private static inline var SWIM_SPEED:Int = 600;
    private static inline var DRAG:Int = 4;
    private static inline var ACCELERATION_X:Int = 18;
    private static inline var HIT_TIME:Int = 1200;

    private var hitTime:Int;
    private var level:Level;
    private var enemies:FlxTypedSpriteGroup<Enemy>;
    private var scoreValue:Int;

    public function new(level:Level, enemies:FlxTypedSpriteGroup<Enemy>):Void
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

    override public function kill():Void
    {
        this.enemies = null;
        super.kill();
    }

    override public function update(dt:Float):Void
    {
        // Rest Acceleration
        acceleration.x = 0;

        // Handles Dirrection Switching
        switchDirrection();

        // Creates Screen Bounds
        screenBounds();

        // Calculate Score
        for (i in 0... enemies.countLiving())
        {
            scoreValue += enemies.group.members[i].addToScore(this);
        }

        // Hit Detection
        if (hitDetected())
        {
            hitTolerance(dt);
        }
        else
        {
            hitTime = 0;
        }

        // Animation Control
        if (acceleration.y != 0)
        {
            animation.play("swim");
        }


        // Left
        if (MyInput.left())
        {
            acceleration.x = -maxVelocity.x * ACCELERATION_X * MyInput.leftValue();
        }
        // Right
        else if (MyInput.right())
        {
            acceleration.x = maxVelocity.x * ACCELERATION_X * MyInput.rightValue();
        }
        super.update(dt);
    }

    /**
        Makes sure the player is in contact with the enemy for a reasonable
        amount of time to detect a hit
    **/
    private function hitTolerance(dt:Float):Void
    {
        hitTime ++;
        if (hitTime > HIT_TIME * dt)
        {
            resetPlayer();
        }
    }

    /**
        Resets the player and the enemies
    **/
    private function resetPlayer():Void
    {
        x = START_LOCATION_X;
        y = START_LOCATION_Y;
        velocity.x = 0;
        velocity.y = 0;

        hitTime = 0;
        level.reset(false);
        scoreValue = 0;
    }

    /**
        Adjust hitbox for facing right or left
    **/
    private function hitBox():Void
    {
        // Really bad practice to control the hitbox this way
        // but was done a long time ago and it works fine
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

    /**
        Switch dirrection of the player
    **/
    private function switchDirrection():Void
    {

        // Go Up
        if (y > SWITCH_DIRECTION_BOTTOM && isGoingDown())
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
        if (y < SWITCH_DIRECTION_TOP && !isGoingDown())
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

    public function score():Int
    {
        return scoreValue;
    }
}
