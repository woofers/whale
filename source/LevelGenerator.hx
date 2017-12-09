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
    private var enemies:FlxSpriteGroup;

	// Spacing
	private var y:Int;
    private static inline var spawnSpacing = 950;
	private static inline var ySpacingMax:Int = 600;
	private static inline var ySpacingMin:Int = 520;
    private static inline var spawnLimit:Int = 14;

	// Character Codes
	private var eelCode:Int = 0;
	private var lobsterCode:Int = 1;
	private var lastSpawned:Int;	// 0 Eel || 1 Lobster
    private var isUp:Bool;

    public function new(enemies:FlxSpriteGroup):Void
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
		y = startY();
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
				case 0:
					addEel(FlxG.random.bool(50), y);

				// Static Lobster
				case 1:
					isFirstLobster = true;
                    trace("Lobster");
					for (i in 0... FlxG.random.int(1, 2))
					{
						addLobster(y);
					}

				default:
					trace("default");
			}
		}
	}

	/*----------------------------------------------------
	Function: addEel
	Description: Spawn and add eels to the group
	Returns: Void
	-----------------------------------------------------*/
	public function addEel(direction, posY):Void
	{
        enemies.add(new Eel(player, direction, posY));
		lastSpawned = eelCode;
	}

	/*----------------------------------------------------
	Function: addLobster
	Description: Spawn and add lobster to the group
	Returns: Void
	-----------------------------------------------------*/
	public function addLobster(posY):Void
	{
		// 0 Left | 1 Right | 2 Middle

		if (isFirstLobster)
		{
			direction = FlxG.random.int(0, 1);
		}
		else
		{
          if (direction == 0)
          {
              direction = 1;
          }
          else
          {
              direction = 0;
          }
		}
		enemies.add(new Lobster(direction, posY));
		lastSpawned = lobsterCode;
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
	private function startY():Int
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
		if (lastSpawned == eelCode)
		{
			if (!FlxG.random.bool(38))
			{
				return eelCode;
			}
            return lobsterCode;
		}
		else if (lastSpawned == lobsterCode)
		{
			if (!FlxG.random.bool(35))
			{
				return eelCode;
			}
			return lobsterCode;
		}
        return eelCode;
	}
}
