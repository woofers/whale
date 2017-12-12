package;

import flixel.FlxG;
import flixel.FlxObject;
import flixel.FlxSprite;
import flixel.graphics.frames.FlxAtlasFrames;

class Enemy extends FlxSprite
{
    private var addedToScore:Bool;
    private var scoreValue:Int = 10;

    public function new():Void
    {
        super(0, 0);

        // Max velocities on player
        maxVelocity.set(500, 600);
    }

    override public function kill():Void
    {
        super.kill();
    }

    override public function update(dt:Float):Void
    {
        super.update(dt);
    }

    public function setScore(score:Int):Void
    {
        this.scoreValue = score;
    }

    public function score():Int
    {
        return scoreValue;
    }

    public function addToScore(player:Player):Int
    {
        if (addedToScore) return 0;
        if (player.isGoingDown())
        {
            if (player.y > y)
            {
                addedToScore = true;
                return scoreValue;
            }
        }
        else
        {
            if (player.y < y)
            {
                addedToScore = true;
                return scoreValue;
            }
        }
        return 0;
    }
}
