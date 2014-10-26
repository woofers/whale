package lime;


import lime.utils.Assets;


class AssetData {

	private static var initialized:Bool = false;
	
	public static var library = new #if haxe3 Map <String, #else Hash <#end LibraryType> ();
	public static var path = new #if haxe3 Map <String, #else Hash <#end String> ();
	public static var type = new #if haxe3 Map <String, #else Hash <#end AssetType> ();	
	
	public static function initialize():Void {
		
		if (!initialized) {
			
			path.set ("assets/font/font.fnt", "assets/font/font.fnt");
			type.set ("assets/font/font.fnt", Reflect.field (AssetType, "text".toUpperCase ()));
			path.set ("assets/font/font.png", "assets/font/font.png");
			type.set ("assets/font/font.png", Reflect.field (AssetType, "image".toUpperCase ()));
			path.set ("assets/font/LITTLELO.TTF", "assets/font/LITTLELO.TTF");
			type.set ("assets/font/LITTLELO.TTF", Reflect.field (AssetType, "font".toUpperCase ()));
			path.set ("assets/font/project.ltr", "assets/font/project.ltr");
			type.set ("assets/font/project.ltr", Reflect.field (AssetType, "text".toUpperCase ()));
			path.set ("assets/images/background/0.png", "assets/images/background/0.png");
			type.set ("assets/images/background/0.png", Reflect.field (AssetType, "image".toUpperCase ()));
			path.set ("assets/images/background/1.png", "assets/images/background/1.png");
			type.set ("assets/images/background/1.png", Reflect.field (AssetType, "image".toUpperCase ()));
			path.set ("assets/images/background/2.png", "assets/images/background/2.png");
			type.set ("assets/images/background/2.png", Reflect.field (AssetType, "image".toUpperCase ()));
			path.set ("assets/images/background/3.png", "assets/images/background/3.png");
			type.set ("assets/images/background/3.png", Reflect.field (AssetType, "image".toUpperCase ()));
			path.set ("assets/images/background/4.png", "assets/images/background/4.png");
			type.set ("assets/images/background/4.png", Reflect.field (AssetType, "image".toUpperCase ()));
			path.set ("assets/images/background/5.png", "assets/images/background/5.png");
			type.set ("assets/images/background/5.png", Reflect.field (AssetType, "image".toUpperCase ()));
			path.set ("assets/images/sprites/eel.png", "assets/images/sprites/eel.png");
			type.set ("assets/images/sprites/eel.png", Reflect.field (AssetType, "image".toUpperCase ()));
			path.set ("assets/images/sprites/eel.xml", "assets/images/sprites/eel.xml");
			type.set ("assets/images/sprites/eel.xml", Reflect.field (AssetType, "text".toUpperCase ()));
			path.set ("assets/images/sprites/lobster.png", "assets/images/sprites/lobster.png");
			type.set ("assets/images/sprites/lobster.png", Reflect.field (AssetType, "image".toUpperCase ()));
			path.set ("assets/images/sprites/lobster.xml", "assets/images/sprites/lobster.xml");
			type.set ("assets/images/sprites/lobster.xml", Reflect.field (AssetType, "text".toUpperCase ()));
			path.set ("assets/images/sprites/player.png", "assets/images/sprites/player.png");
			type.set ("assets/images/sprites/player.png", Reflect.field (AssetType, "image".toUpperCase ()));
			path.set ("assets/images/sprites/player.xml", "assets/images/sprites/player.xml");
			type.set ("assets/images/sprites/player.xml", Reflect.field (AssetType, "text".toUpperCase ()));
			path.set ("assets/images/ui/mobile/startScreen.png", "assets/images/ui/mobile/startScreen.png");
			type.set ("assets/images/ui/mobile/startScreen.png", Reflect.field (AssetType, "image".toUpperCase ()));
			path.set ("assets/images/ui/pause/darken.png", "assets/images/ui/pause/darken.png");
			type.set ("assets/images/ui/pause/darken.png", Reflect.field (AssetType, "image".toUpperCase ()));
			path.set ("assets/images/ui/pause/exit.png", "assets/images/ui/pause/exit.png");
			type.set ("assets/images/ui/pause/exit.png", Reflect.field (AssetType, "image".toUpperCase ()));
			path.set ("assets/images/ui/pause/pause.png", "assets/images/ui/pause/pause.png");
			type.set ("assets/images/ui/pause/pause.png", Reflect.field (AssetType, "image".toUpperCase ()));
			path.set ("assets/images/ui/pause/play.png", "assets/images/ui/pause/play.png");
			type.set ("assets/images/ui/pause/play.png", Reflect.field (AssetType, "image".toUpperCase ()));
			path.set ("assets/images/ui/pause/score.png", "assets/images/ui/pause/score.png");
			type.set ("assets/images/ui/pause/score.png", Reflect.field (AssetType, "image".toUpperCase ()));
			path.set ("assets/images/ui/pause/settings.png", "assets/images/ui/pause/settings.png");
			type.set ("assets/images/ui/pause/settings.png", Reflect.field (AssetType, "image".toUpperCase ()));
			path.set ("assets/sounds/beep.ogg", "assets/sounds/beep.ogg");
			type.set ("assets/sounds/beep.ogg", Reflect.field (AssetType, "sound".toUpperCase ()));
			path.set ("assets/sounds/flixel.ogg", "assets/sounds/flixel.ogg");
			type.set ("assets/sounds/flixel.ogg", Reflect.field (AssetType, "sound".toUpperCase ()));
			
			
			initialized = true;
			
		} //!initialized
		
	} //initialize
	
	
} //AssetData
