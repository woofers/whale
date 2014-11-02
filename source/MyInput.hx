package;

import flixel.FlxG;
import flixel.util.FlxMath;

/*----------------------------------------------------
Class: MyInput
Description: Get correct input method for device
Condition: Tidy
Author: Jaxson Van Doorn, 2014
-----------------------------------------------------*/
class MyInput
{
	/*----------------------------------------------------
	Public Variables
	-----------------------------------------------------*/

	/*----------------------------------------------------
	Private Variables
	-----------------------------------------------------*/

	private static var accelerometerSensitivity:Float = 0.4;

	/*----------------------------------------------------
	Function: Left
	Description: Keybinding for moving left
	Returns: Bool
	-----------------------------------------------------*/
	public static function left():Bool
	{
		#if !FLX_NO_KEYBOARD

			if (FlxG.keys.anyPressed(["LEFT", "A"]))
			{
				return true;
			}

		#elseif !FLX_NO_TOUCH

			if (getAccelerometerX() >= accelerometerSensitivity)
			{
				return true;
			}

		#end

		return false;
	}

	/*----------------------------------------------------
	Function: Right
	Description: Keybinding for moving right
	Returns: Bool
	-----------------------------------------------------*/
	public static function right():Bool
	{
		#if !FLX_NO_KEYBOARD

			if (FlxG.keys.anyPressed(["RIGHT", "D"]))
			{
				return true;
			}

		#elseif !FLX_NO_TOUCH

			if (getAccelerometerX() <= accelerometerSensitivity)
			{
				return true;
			}

		#end

		return false;
	}

	/*----------------------------------------------------
	Function: getAccelerometerX
	Description: Gets x value of the accelerometer & converts it to an interger
	Returns: Int
	-----------------------------------------------------*/
	private static function getAccelerometerX()
	{
		#if mobile

			var ax = (FlxMath.roundDecimal(FlxG.accelerometer.x, 2) * 10);
			return ax;

		#end
	}
}