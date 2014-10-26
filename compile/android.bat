cd ..
haxelib run openfl build Project.xml android
pause
adb shell am start -a android.intent.action.DELETE -d package:com.example.myapp
cd export\android\bin\bin\
pause
adb install Whale-debug.apk