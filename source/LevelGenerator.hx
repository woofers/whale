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
class LevelGenerator
{
    private var isFirstLobster:Bool;
    private var direction:Int;
    private var player:Player;
    private var enemies:FlxTypedSpriteGroup<Enemy>;

    // Spacing
    private var y:Int;
    private static inline var spawnSpacing = 950;
    private static inline var ySpacingMax:Int = 600;
    private static inline var ySpacingMin:Int = 530;
    private static inline var spawnLimit:Int = 14;

    private static inline var EEL:Int = 0;
    private static inline var LOBSTER:Int = 1;

    private var lastSpawned:Int;
    private var isUp:Bool;

    public function new(enemies:FlxTypedSpriteGroup<Enemy>):Void
    {
        this.enemies = enemies;
    }

    public function setPlayer(player:Player):Void
    {
        this.player = player;
    }

    public function generate(isUp:Bool = false):Void
    {
        this.isUp = isUp;
        y = startLocation();
        for (i in 0... spawnLimit)
        {
            if (isUp)
            {
                y += FlxG.random.int(ySpacingMin, ySpacingMax);
            }
            else
            {
                y -= FlxG.random.int(ySpacingMin, ySpacingMax);
            }

            // Spawns a enemy
            switch (random())
            {
                // Moving Eel
                case EEL:
                    addEel(FlxG.random.bool(50), y);

                // Static Lobster
                case LOBSTER:
                    isFirstLobster = true;
                    var max:Int = 3;
                    var count:Int = 0;
                    if (lastSpawned == LOBSTER) max = 2;
                    for (i in 0... max)
                    {
                        if (FlxG.random.bool(50) || count < 0 && i == 2)
                        {
                            addLobster(i, y);
                            count ++;
                        }
                        if (count == 2) break;
                    }
            }
        }
    }

    /*----------------------------------------------------
    Function: addEel
    Description: Spawn and add eels to the group
    Returns: Void
    -----------------------------------------------------*/
    public function addEel(direction:Bool, posY:Int):Void
    {
        enemies.add(new Eel(player, direction, posY));
        lastSpawned = EEL;
    }

    /*----------------------------------------------------
    Function: addLobster
    Description: Spawn and add lobster to the group
    Returns: Void
    -----------------------------------------------------*/
    public function addLobster(direction:Int, y:Int):Void
    {
        enemies.add(new Lobster(direction, y));
        lastSpawned = LOBSTER;
        isFirstLobster = false;
    }

    public function removeEnemies():Void
    {
        for (i in 0... enemies.countLiving())
        {
            enemies.remove(enemies.getFirstAlive());
        }
    }

    /**
        Description: Determines where to start the level generation
        Returns: Int
    **/
    private function startLocation():Int
    {
        if (isUp)
        {
             return Player.switchDirrectionTop + spawnSpacing;
        }
        return Player.switchDirrectionBottom - spawnSpacing;
    }

    public function reset(isUp:Bool):Void
    {
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
        if (lastSpawned == EEL)
        {
            if (!FlxG.random.bool(38))
            {
                return EEL;
            }
            return LOBSTER;
        }
        else if (lastSpawned == LOBSTER)
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
