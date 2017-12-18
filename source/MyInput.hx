package;

import flixel.FlxG;
import flixel.math.FlxMath;

/**
     Class to get correct input method for device
     Author: Jaxson Van Doorn
**/
class MyInput
{
    private static var accelerometerSensitivity:Float = 1;

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

    public static function right():Bool
    {
        #if !FLX_NO_KEYBOARD

            if (FlxG.keys.anyPressed(["RIGHT", "D"]))
            {
                return true;
            }

        #elseif !FLX_NO_TOUCH

            if (getAccelerometerX() <= -accelerometerSensitivity)
            {
                return true;
            }

        #end

        return false;
    }

    /**
        Gets `x` value of the accelerometer and converts it to an int
    **/
    private static function getAccelerometerX():Float
    {
        #if mobile

            return FlxMath.roundDecimal(FlxG.accelerometer.x, 2) * 10;

        #end

        return 0;
    }
}
