package;

import flixel.FlxG;
import flixel.math.FlxMath;

/**
     Class to get correct input method for device
     Author: Jaxson Van Doorn
**/
class MyInput
{
    private static inline var DEADZONE:Float = 0.5;
    private static inline var CAP:Float = 1.45;

    public static function left():Bool
    {
        #if !FLX_NO_KEYBOARD

            if (FlxG.keys.anyPressed(["LEFT", "A"]))
            {
                return true;
            }

        #elseif !FLX_NO_TOUCH

            if (getAccelerometerX() >= DEADZONE)
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

            if (getAccelerometerX() <= -DEADZONE)
            {
                return true;
            }

        #end

        return false;
    }

    public static function leftValue():Float
    {
        #if !FLX_NO_KEYBOARD

            return 1;

        #elseif !FLX_NO_TOUCH

            return Math.max(getAccelerometerX() - DEADZONE, CAP) / CAP;

        #end
    }

    public static function rightValue():Float
    {
        #if !FLX_NO_KEYBOARD

            return 1;

        #elseif !FLX_NO_TOUCH

            return Math.max(getAccelerometerX() + DEADZONE, -CAP) / -CAP;

        #end
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
