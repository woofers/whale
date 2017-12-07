package;

import flixel.FlxG;
import flixel.group.FlxGroup;
import flixel.FlxCamera;
import flixel.FlxSprite;
import flixel.FlxState;
import flixel.text.FlxText;
import flixel.math.FlxMath;
import flixel.math.FlxRandom;

/*----------------------------------------------------
Class: LevelGenerator
Description: Handles level generation
Condition: Ok
Author: Jaxson Van Doorn, 2014
-----------------------------------------------------*/
class LevelGenerator
{
	/*----------------------------------------------------
	Public Variables
	-----------------------------------------------------*/

	public static var eel:Eel;
	public static var lobster:Lobster;

	/*----------------------------------------------------
	Private Variables
	-----------------------------------------------------*/

	private static var lobsterRoll:Int;
	private static var isFirstLobster:Bool;

	// Spacing
	private static var y:Int;
	private static var ySpacingMax:Int = 600;
	private static var ySpacingMin:Int = 520;

	private static var lastSpawned:Int;	// 0 Eel || 1 Lobster

	// Character Codes
	private static var eelCode:Int = 0;
	private static var lobsterCode:Int = 1;

	/*----------------------------------------------------
	Function: Generate
	Description: Main generating function
	Returns: Void
	-----------------------------------------------------*/
	public static function generate():Void
	{
		y = startY();

		for (i in 0... 14)
		{
			if (PlayState.player.acceleration.y > 0)
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

					for (i in 0... FlxG.random.int(1, 2))
					{
						addLobster(y);
					}

				// NULL
				case 2:
					trace(2);

				// NULL
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
	public static function addEel(direction, posY):Void
	{
		eel = new Eel(direction, posY);
		PlayState.killGroup.add(eel);
		lastSpawned = 0;
	}

	/*----------------------------------------------------
	Function: addLobster
	Description: Spawn and add lobster to the group
	Returns: Void
	-----------------------------------------------------*/
	public static function addLobster(posY):Void
	{
		// 0 Left | 1 Right | 2 Middle

		if (isFirstLobster)
		{
			lobsterRoll = FlxG.random.int(0, 1);
		}
		else
		{
			if (lobsterRoll == 1)
			{
				lobsterRoll = 0;
			}
			else if (lobsterRoll == 0)
			{
				lobsterRoll = 1;
			}
		}

		lobster = new Lobster(lobsterRoll, posY);
		PlayState.killGroup.add(lobster);

		lastSpawned = 1;

		isFirstLobster = false;
	}

	/*----------------------------------------------------
	Function: removeEnemies
	Description: Removes eels from the eel group
	Returns: Void
	-----------------------------------------------------*/
	public static function removeEnemies():Void
	{
		for (i in 0... PlayState.killGroup.countLiving())
		{
			PlayState.killGroup.remove(PlayState.killGroup.getFirstAlive());
		}
	}

	/*----------------------------------------------------
	Function: startY
	Description: Determines where to start the level generation
	Returns: Int
	-----------------------------------------------------*/
	private static function startY():Int
	{
		if (PlayState.player.acceleration.y > 0)
		{
			return Player.switchDirrectionTop + 500 + 450;
		}

		return Player.switchDirrectionBottom - 500 - 450;
	}

	/*----------------------------------------------------
	Function: reset
	Description: Removes the current level and generates a new one
	Returns: Void
	-----------------------------------------------------*/
	public static function reset():Void
	{
		LevelGenerator.removeEnemies();
		LevelGenerator.generate();
	}

	/*----------------------------------------------------
	Function: random
	Description: Randomly choses what enemy to spawn and decreases the chance of getting the same one twice in a row
	Returns: Void
	-----------------------------------------------------*/
	public static function random():Int
	{
		if (lastSpawned == eelCode)
		{
			if (!FlxG.random.bool(38))
			{
				return eelCode;
			}
			else
			{
				return lobsterCode;
			}
		}
		else if (lastSpawned == lobsterCode)
		{
			if (!FlxG.random.bool(35))
			{
				return eelCode;
			}

			return lobsterCode;
		}
		else
		{
            return eelCode;
		}
	}
}
