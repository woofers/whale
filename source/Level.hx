package;

import flixel.FlxG;
import flixel.FlxCamera;
import flixel.FlxSprite;
import flixel.FlxState;
import flixel.text.FlxText;
import flixel.math.FlxMath;
import flixel.math.FlxRandom;
import flixel.group.FlxGroup;
import flixel.group.FlxSpriteGroup;

/**
   Author: Jaxson Van Doorn
**/
class Level
{
    // Sprites
    private var player:Player;
    private var enemies:FlxTypedSpriteGroup<Enemy>;

    // Spacing
    private static inline var SPAWN_SPACING = 950;
    private static inline var Y_SPACING_MAX:Int = 600;
    private static inline var Y_SPACING_MIN:Int = 550;
    private static inline var SPAWN_LIMIT:Int = 14;

    // Eniemies
    private static inline var EEL:Int = 0;
    private static inline var LOBSTER:Int = 1;

    private var y:Int;
    private var lastSpawned:Enemy;
    private var isUp:Bool;

    public function new(enemies:FlxTypedSpriteGroup<Enemy>):Void
    {
        this.enemies = enemies;
    }

    public function setPlayer(player:Player):Void
    {
        this.player = player;
    }

    private function typeOf(enemy:Enemy):String
    {
        if (enemy == null) return "";
        return Type.getClassName(Type.getClass(enemy));
    }

    public function kill():Void
    {
        this.player = null;
        removeEnemies();
        this.enemies.kill();
        this.enemies = null;
    }

    public function generate(isUp:Bool = false):Void
    {
        this.isUp = isUp;
        y = startLocation();
        for (i in 0... SPAWN_LIMIT)
        {
            if (isUp)
            {
                y -= FlxG.random.int(Y_SPACING_MIN, Y_SPACING_MAX);
            }
            else
            {
                y += FlxG.random.int(Y_SPACING_MIN, Y_SPACING_MAX);
            }

            // Spawns a enemy
            switch (random())
            {
                // Moving Eel
                case EEL:
                    addEel(FlxG.random.int(0, 1));

                // Static Lobster
                case LOBSTER:
                    addLobsters(3);
            }
        }
    }


    public function addLobsters(max:Int):Void
    {
        var blocked:Int = -1;
        switch (lastSpawned.getDirection())
        {
            case Lobster.LEFT:
                blocked = Lobster.RIGHT;
            case Lobster.RIGHT:
                blocked = Lobster.LEFT;
        }
        max = FlxG.random.int(1, max);
        var i:Int = 0;
        var spawned:Int = 0;
        while (i < max && spawned < max - 1)
        {
            if (i != blocked)
            {
                addLobster(i, y);
                spawned ++;
            }
            i ++;
        }
    }

    /*----------------------------------------------------
    Function: addEel
    Description: Spawn and add eels to the group
    Returns: Void
    -----------------------------------------------------*/
    public function addEel(direction:Int):Void
    {
        lastSpawned = new Eel(player, direction, y);
        enemies.add(lastSpawned);
    }

    /*----------------------------------------------------
    Function: addLobster
    Description: Spawn and add lobster to the group
    Returns: Void
    -----------------------------------------------------*/
    public function addLobster(direction:Int, y:Int):Void
    {
        lastSpawned = new Lobster(direction, y);
        enemies.add(lastSpawned);
    }

    public function removeEnemies():Void
    {
        var remove:Enemy;
        for (i in 0... enemies.countLiving())
        {
            remove = enemies.getFirstAlive();
            enemies.remove(remove);
            remove.destroy();
        }
        remove = null;
        lastSpawned = null;
    }

    /**
        Description: Determines where to start the level generation
        Returns: Int
    **/
    private function startLocation():Int
    {
        if (isUp)
        {
            return Player.SWITCH_DIRECTION_BOTTOM - SPAWN_SPACING;
        }
        return Player.SWITCH_DIRECTION_TOP + SPAWN_SPACING;
    }

    public function reset(isUp:Bool):Void
    {
        this.isUp = isUp;
        removeEnemies();
        generate(isUp);
    }

    /**
        Randomly choses what enemy to spawn and decreases
        the chance of getting the same one twice in a row.
        Returns `Int` enemy code
    **/
    public function random():Int
    {
        if (typeOf(lastSpawned) == "Eel")
        {
            if (!FlxG.random.bool(38))
            {
                return EEL;
            }
            return LOBSTER;
        }
        else if (typeOf(lastSpawned) == "Lobster")
        {
            if (!FlxG.random.bool(35))
            {
                return EEL;
            }
            return LOBSTER;
        }
        return EEL;
    }
}
