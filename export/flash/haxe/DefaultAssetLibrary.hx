package;


import haxe.Timer;
import haxe.Unserializer;
import openfl.display.Bitmap;
import openfl.display.BitmapData;
import openfl.display.MovieClip;
import openfl.events.Event;
import openfl.text.Font;
import openfl.media.Sound;
import openfl.net.URLRequest;
import openfl.utils.ByteArray;
import openfl.Assets;

#if (flash || js)
import openfl.display.Loader;
import openfl.events.Event;
import openfl.net.URLLoader;
#end

#if sys
import sys.FileSystem;
#end

#if ios
import openfl.utils.SystemPath;
#end


@:access(openfl.media.Sound)
class DefaultAssetLibrary extends AssetLibrary {
	
	
	public var className (default, null) = new Map <String, Dynamic> ();
	public var path (default, null) = new Map <String, String> ();
	public var type (default, null) = new Map <String, AssetType> ();
	
	private var lastModified:Float;
	private var timer:Timer;
	
	
	public function new () {
		
		super ();
		
		#if flash
		
		className.set ("assets/font/font.fnt", __ASSET__assets_font_font_fnt);
		type.set ("assets/font/font.fnt", AssetType.TEXT);
		className.set ("assets/font/font.png", __ASSET__assets_font_font_png);
		type.set ("assets/font/font.png", AssetType.IMAGE);
		className.set ("assets/font/LITTLELO.TTF", __ASSET__assets_font_littlelo_ttf);
		type.set ("assets/font/LITTLELO.TTF", AssetType.FONT);
		className.set ("assets/font/project.ltr", __ASSET__assets_font_project_ltr);
		type.set ("assets/font/project.ltr", AssetType.TEXT);
		className.set ("assets/images/background/0.png", __ASSET__assets_images_background_0_png);
		type.set ("assets/images/background/0.png", AssetType.IMAGE);
		className.set ("assets/images/background/1.png", __ASSET__assets_images_background_1_png);
		type.set ("assets/images/background/1.png", AssetType.IMAGE);
		className.set ("assets/images/background/2.png", __ASSET__assets_images_background_2_png);
		type.set ("assets/images/background/2.png", AssetType.IMAGE);
		className.set ("assets/images/background/3.png", __ASSET__assets_images_background_3_png);
		type.set ("assets/images/background/3.png", AssetType.IMAGE);
		className.set ("assets/images/background/4.png", __ASSET__assets_images_background_4_png);
		type.set ("assets/images/background/4.png", AssetType.IMAGE);
		className.set ("assets/images/background/5.png", __ASSET__assets_images_background_5_png);
		type.set ("assets/images/background/5.png", AssetType.IMAGE);
		className.set ("assets/images/sprites/eel.png", __ASSET__assets_images_sprites_eel_png);
		type.set ("assets/images/sprites/eel.png", AssetType.IMAGE);
		className.set ("assets/images/sprites/eel.xml", __ASSET__assets_images_sprites_eel_xml);
		type.set ("assets/images/sprites/eel.xml", AssetType.TEXT);
		className.set ("assets/images/sprites/lobster.png", __ASSET__assets_images_sprites_lobster_png);
		type.set ("assets/images/sprites/lobster.png", AssetType.IMAGE);
		className.set ("assets/images/sprites/lobster.xml", __ASSET__assets_images_sprites_lobster_xml);
		type.set ("assets/images/sprites/lobster.xml", AssetType.TEXT);
		className.set ("assets/images/sprites/player.png", __ASSET__assets_images_sprites_player_png);
		type.set ("assets/images/sprites/player.png", AssetType.IMAGE);
		className.set ("assets/images/sprites/player.xml", __ASSET__assets_images_sprites_player_xml);
		type.set ("assets/images/sprites/player.xml", AssetType.TEXT);
		className.set ("assets/images/ui/mobile/startScreen.png", __ASSET__assets_images_ui_mobile_startscreen_png);
		type.set ("assets/images/ui/mobile/startScreen.png", AssetType.IMAGE);
		className.set ("assets/images/ui/pause/exit.PNG", __ASSET__assets_images_ui_pause_exit_png);
		type.set ("assets/images/ui/pause/exit.PNG", AssetType.IMAGE);
		className.set ("assets/images/ui/pause/play.png", __ASSET__assets_images_ui_pause_play_png);
		type.set ("assets/images/ui/pause/play.png", AssetType.IMAGE);
		className.set ("assets/images/ui/pause/settings.png", __ASSET__assets_images_ui_pause_settings_png);
		type.set ("assets/images/ui/pause/settings.png", AssetType.IMAGE);
		className.set ("assets/sounds/beep.mp3", __ASSET__assets_sounds_beep_mp3);
		type.set ("assets/sounds/beep.mp3", AssetType.MUSIC);
		className.set ("assets/sounds/flixel.mp3", __ASSET__assets_sounds_flixel_mp3);
		type.set ("assets/sounds/flixel.mp3", AssetType.MUSIC);
		
		
		#elseif html5
		
		var id;
		id = "assets/font/font.fnt";
		path.set (id, id);
		type.set (id, AssetType.TEXT);
		id = "assets/font/font.png";
		path.set (id, id);
		type.set (id, AssetType.IMAGE);
		id = "assets/font/LITTLELO.TTF";
		className.set (id, __ASSET__assets_font_littlelo_ttf);
		type.set (id, AssetType.FONT);
		id = "assets/font/project.ltr";
		path.set (id, id);
		type.set (id, AssetType.TEXT);
		id = "assets/images/background/0.png";
		path.set (id, id);
		type.set (id, AssetType.IMAGE);
		id = "assets/images/background/1.png";
		path.set (id, id);
		type.set (id, AssetType.IMAGE);
		id = "assets/images/background/2.png";
		path.set (id, id);
		type.set (id, AssetType.IMAGE);
		id = "assets/images/background/3.png";
		path.set (id, id);
		type.set (id, AssetType.IMAGE);
		id = "assets/images/background/4.png";
		path.set (id, id);
		type.set (id, AssetType.IMAGE);
		id = "assets/images/background/5.png";
		path.set (id, id);
		type.set (id, AssetType.IMAGE);
		id = "assets/images/sprites/eel.png";
		path.set (id, id);
		type.set (id, AssetType.IMAGE);
		id = "assets/images/sprites/eel.xml";
		path.set (id, id);
		type.set (id, AssetType.TEXT);
		id = "assets/images/sprites/lobster.png";
		path.set (id, id);
		type.set (id, AssetType.IMAGE);
		id = "assets/images/sprites/lobster.xml";
		path.set (id, id);
		type.set (id, AssetType.TEXT);
		id = "assets/images/sprites/player.png";
		path.set (id, id);
		type.set (id, AssetType.IMAGE);
		id = "assets/images/sprites/player.xml";
		path.set (id, id);
		type.set (id, AssetType.TEXT);
		id = "assets/images/ui/mobile/startScreen.png";
		path.set (id, id);
		type.set (id, AssetType.IMAGE);
		id = "assets/images/ui/pause/exit.PNG";
		path.set (id, id);
		type.set (id, AssetType.IMAGE);
		id = "assets/images/ui/pause/play.png";
		path.set (id, id);
		type.set (id, AssetType.IMAGE);
		id = "assets/images/ui/pause/settings.png";
		path.set (id, id);
		type.set (id, AssetType.IMAGE);
		id = "assets/sounds/beep.mp3";
		path.set (id, id);
		type.set (id, AssetType.MUSIC);
		id = "assets/sounds/flixel.mp3";
		path.set (id, id);
		type.set (id, AssetType.MUSIC);
		
		
		#else
		
		#if (windows || mac || linux)
		
		var useManifest = false;
		
		className.set ("assets/font/font.fnt", __ASSET__assets_font_font_fnt);
		type.set ("assets/font/font.fnt", AssetType.TEXT);
		
		className.set ("assets/font/font.png", __ASSET__assets_font_font_png);
		type.set ("assets/font/font.png", AssetType.IMAGE);
		
		className.set ("assets/font/LITTLELO.TTF", __ASSET__assets_font_littlelo_ttf);
		type.set ("assets/font/LITTLELO.TTF", AssetType.FONT);
		
		className.set ("assets/font/project.ltr", __ASSET__assets_font_project_ltr);
		type.set ("assets/font/project.ltr", AssetType.TEXT);
		
		className.set ("assets/images/background/0.png", __ASSET__assets_images_background_0_png);
		type.set ("assets/images/background/0.png", AssetType.IMAGE);
		
		className.set ("assets/images/background/1.png", __ASSET__assets_images_background_1_png);
		type.set ("assets/images/background/1.png", AssetType.IMAGE);
		
		className.set ("assets/images/background/2.png", __ASSET__assets_images_background_2_png);
		type.set ("assets/images/background/2.png", AssetType.IMAGE);
		
		className.set ("assets/images/background/3.png", __ASSET__assets_images_background_3_png);
		type.set ("assets/images/background/3.png", AssetType.IMAGE);
		
		className.set ("assets/images/background/4.png", __ASSET__assets_images_background_4_png);
		type.set ("assets/images/background/4.png", AssetType.IMAGE);
		
		className.set ("assets/images/background/5.png", __ASSET__assets_images_background_5_png);
		type.set ("assets/images/background/5.png", AssetType.IMAGE);
		
		className.set ("assets/images/sprites/eel.png", __ASSET__assets_images_sprites_eel_png);
		type.set ("assets/images/sprites/eel.png", AssetType.IMAGE);
		
		className.set ("assets/images/sprites/eel.xml", __ASSET__assets_images_sprites_eel_xml);
		type.set ("assets/images/sprites/eel.xml", AssetType.TEXT);
		
		className.set ("assets/images/sprites/lobster.png", __ASSET__assets_images_sprites_lobster_png);
		type.set ("assets/images/sprites/lobster.png", AssetType.IMAGE);
		
		className.set ("assets/images/sprites/lobster.xml", __ASSET__assets_images_sprites_lobster_xml);
		type.set ("assets/images/sprites/lobster.xml", AssetType.TEXT);
		
		className.set ("assets/images/sprites/player.png", __ASSET__assets_images_sprites_player_png);
		type.set ("assets/images/sprites/player.png", AssetType.IMAGE);
		
		className.set ("assets/images/sprites/player.xml", __ASSET__assets_images_sprites_player_xml);
		type.set ("assets/images/sprites/player.xml", AssetType.TEXT);
		
		className.set ("assets/images/ui/mobile/startScreen.png", __ASSET__assets_images_ui_mobile_startscreen_png);
		type.set ("assets/images/ui/mobile/startScreen.png", AssetType.IMAGE);
		
		className.set ("assets/images/ui/pause/exit.PNG", __ASSET__assets_images_ui_pause_exit_png);
		type.set ("assets/images/ui/pause/exit.PNG", AssetType.IMAGE);
		
		className.set ("assets/images/ui/pause/play.png", __ASSET__assets_images_ui_pause_play_png);
		type.set ("assets/images/ui/pause/play.png", AssetType.IMAGE);
		
		className.set ("assets/images/ui/pause/settings.png", __ASSET__assets_images_ui_pause_settings_png);
		type.set ("assets/images/ui/pause/settings.png", AssetType.IMAGE);
		
		className.set ("assets/sounds/beep.mp3", __ASSET__assets_sounds_beep_mp3);
		type.set ("assets/sounds/beep.mp3", AssetType.MUSIC);
		
		className.set ("assets/sounds/flixel.mp3", __ASSET__assets_sounds_flixel_mp3);
		type.set ("assets/sounds/flixel.mp3", AssetType.MUSIC);
		
		
		if (useManifest) {
			
			loadManifest ();
			
			if (Sys.args ().indexOf ("-livereload") > -1) {
				
				var path = FileSystem.fullPath ("manifest");
				lastModified = FileSystem.stat (path).mtime.getTime ();
				
				timer = new Timer (2000);
				timer.run = function () {
					
					var modified = FileSystem.stat (path).mtime.getTime ();
					
					if (modified > lastModified) {
						
						lastModified = modified;
						loadManifest ();
						
						if (eventCallback != null) {
							
							eventCallback (this, "change");
							
						}
						
					}
					
				}
				
			}
			
		}
		
		#else
		
		loadManifest ();
		
		#end
		#end
		
	}
	
	
	public override function exists (id:String, type:AssetType):Bool {
		
		var assetType = this.type.get (id);
		
		#if pixi
		
		if (assetType == IMAGE) {
			
			return true;
			
		} else {
			
			return false;
			
		}
		
		#end
		
		if (assetType != null) {
			
			if (assetType == type || ((type == SOUND || type == MUSIC) && (assetType == MUSIC || assetType == SOUND))) {
				
				return true;
				
			}
			
			#if flash
			
			if ((assetType == BINARY || assetType == TEXT) && type == BINARY) {
				
				return true;
				
			} else if (path.exists (id)) {
				
				return true;
				
			}
			
			#else
			
			if (type == BINARY || type == null) {
				
				return true;
				
			}
			
			#end
			
		}
		
		return false;
		
	}
	
	
	public override function getBitmapData (id:String):BitmapData {
		
		#if pixi
		
		return BitmapData.fromImage (path.get (id));
		
		#elseif (flash)
		
		return cast (Type.createInstance (className.get (id), []), BitmapData);
		
		#elseif openfl_html5
		
		return BitmapData.fromImage (ApplicationMain.images.get (path.get (id)));
		
		#elseif js
		
		return cast (ApplicationMain.loaders.get (path.get (id)).contentLoaderInfo.content, Bitmap).bitmapData;
		
		#else
		
		if (className.exists(id)) return cast (Type.createInstance (className.get (id), []), BitmapData);
		else return BitmapData.load (path.get (id));
		
		#end
		
	}
	
	
	public override function getBytes (id:String):ByteArray {
		
		#if (flash)
		
		return cast (Type.createInstance (className.get (id), []), ByteArray);

		#elseif (js || openfl_html5 || pixi)
		
		var bytes:ByteArray = null;
		var data = ApplicationMain.urlLoaders.get (path.get (id)).data;
		
		if (Std.is (data, String)) {
			
			bytes = new ByteArray ();
			bytes.writeUTFBytes (data);
			
		} else if (Std.is (data, ByteArray)) {
			
			bytes = cast data;
			
		} else {
			
			bytes = null;
			
		}

		if (bytes != null) {
			
			bytes.position = 0;
			return bytes;
			
		} else {
			
			return null;
		}
		
		#else
		
		if (className.exists(id)) return cast (Type.createInstance (className.get (id), []), ByteArray);
		else return ByteArray.readFile (path.get (id));
		
		#end
		
	}
	
	
	public override function getFont (id:String):Font {
		
		#if pixi
		
		return null;
		
		#elseif (flash || js)
		
		return cast (Type.createInstance (className.get (id), []), Font);
		
		#else
		
		if (className.exists(id)) {
			var fontClass = className.get(id);
			Font.registerFont(fontClass);
			return cast (Type.createInstance (fontClass, []), Font);
		} else return new Font (path.get (id));
		
		#end
		
	}
	
	
	public override function getMusic (id:String):Sound {
		
		#if pixi
		
		return null;
		
		#elseif (flash)
		
		return cast (Type.createInstance (className.get (id), []), Sound);
		
		#elseif openfl_html5
		
		var sound = new Sound ();
		sound.__buffer = true;
		sound.load (new URLRequest (path.get (id)));
		return sound; 
		
		#elseif js
		
		return new Sound (new URLRequest (path.get (id)));
		
		#else
		
		if (className.exists(id)) return cast (Type.createInstance (className.get (id), []), Sound);
		else return new Sound (new URLRequest (path.get (id)), null, true);
		
		#end
		
	}
	
	
	public override function getPath (id:String):String {
		
		#if ios
		
		return SystemPath.applicationDirectory + "/assets/" + path.get (id);
		
		#else
		
		return path.get (id);
		
		#end
		
	}
	
	
	public override function getSound (id:String):Sound {
		
		#if pixi
		
		return null;
		
		#elseif (flash)
		
		return cast (Type.createInstance (className.get (id), []), Sound);
		
		#elseif js
		
		return new Sound (new URLRequest (path.get (id)));
		
		#else
		
		if (className.exists(id)) return cast (Type.createInstance (className.get (id), []), Sound);
		else return new Sound (new URLRequest (path.get (id)), null, type.get (id) == MUSIC);
		
		#end
		
	}
	
	
	public override function getText (id:String):String {
		
		#if js
		
		var bytes:ByteArray = null;
		var data = ApplicationMain.urlLoaders.get (path.get (id)).data;
		
		if (Std.is (data, String)) {
			
			return cast data;
			
		} else if (Std.is (data, ByteArray)) {
			
			bytes = cast data;
			
		} else {
			
			bytes = null;
			
		}
		
		if (bytes != null) {
			
			bytes.position = 0;
			return bytes.readUTFBytes (bytes.length);
			
		} else {
			
			return null;
		}
		
		#else
		
		var bytes = getBytes (id);
		
		if (bytes == null) {
			
			return null;
			
		} else {
			
			return bytes.readUTFBytes (bytes.length);
			
		}
		
		#end
		
	}
	
	
	public override function isLocal (id:String, type:AssetType):Bool {
		
		#if flash
		
		if (type != AssetType.MUSIC && type != AssetType.SOUND) {
			
			return className.exists (id);
			
		}
		
		#end
		
		return true;
		
	}
	
	
	public override function list (type:AssetType):Array<String> {
		
		var items = [];
		
		for (id in this.type.keys ()) {
			
			if (type == null || exists (id, type)) {
				
				items.push (id);
				
			}
			
		}
		
		return items;
		
	}
	
	
	public override function loadBitmapData (id:String, handler:BitmapData -> Void):Void {
		
		#if pixi
		
		handler (getBitmapData (id));
		
		#elseif (flash || js)
		
		if (path.exists (id)) {
			
			var loader = new Loader ();
			loader.contentLoaderInfo.addEventListener (Event.COMPLETE, function (event:Event) {
				
				handler (cast (event.currentTarget.content, Bitmap).bitmapData);
				
			});
			loader.load (new URLRequest (path.get (id)));
			
		} else {
			
			handler (getBitmapData (id));
			
		}
		
		#else
		
		handler (getBitmapData (id));
		
		#end
		
	}
	
	
	public override function loadBytes (id:String, handler:ByteArray -> Void):Void {
		
		#if pixi
		
		handler (getBytes (id));
		
		#elseif (flash || js)
		
		if (path.exists (id)) {
			
			var loader = new URLLoader ();
			loader.addEventListener (Event.COMPLETE, function (event:Event) {
				
				var bytes = new ByteArray ();
				bytes.writeUTFBytes (event.currentTarget.data);
				bytes.position = 0;
				
				handler (bytes);
				
			});
			loader.load (new URLRequest (path.get (id)));
			
		} else {
			
			handler (getBytes (id));
			
		}
		
		#else
		
		handler (getBytes (id));
		
		#end
		
	}
	
	
	public override function loadFont (id:String, handler:Font -> Void):Void {
		
		#if (flash || js)
		
		/*if (path.exists (id)) {
			
			var loader = new Loader ();
			loader.contentLoaderInfo.addEventListener (Event.COMPLETE, function (event) {
				
				handler (cast (event.currentTarget.content, Bitmap).bitmapData);
				
			});
			loader.load (new URLRequest (path.get (id)));
			
		} else {*/
			
			handler (getFont (id));
			
		//}
		
		#else
		
		handler (getFont (id));
		
		#end
		
	}
	
	
	#if (!flash && !html5)
	private function loadManifest ():Void {
		
		try {
			
			#if blackberry
			var bytes = ByteArray.readFile ("app/native/manifest");
			#elseif tizen
			var bytes = ByteArray.readFile ("../res/manifest");
			#elseif emscripten
			var bytes = ByteArray.readFile ("assets/manifest");
			#else
			var bytes = ByteArray.readFile ("manifest");
			#end
			
			if (bytes != null) {
				
				bytes.position = 0;
				
				if (bytes.length > 0) {
					
					var data = bytes.readUTFBytes (bytes.length);
					
					if (data != null && data.length > 0) {
						
						var manifest:Array<Dynamic> = Unserializer.run (data);
						
						for (asset in manifest) {
							
							if (!className.exists (asset.id)) {
								
								path.set (asset.id, asset.path);
								type.set (asset.id, Type.createEnum (AssetType, asset.type));
								
							}
							
						}
						
					}
					
				}
				
			} else {
				
				trace ("Warning: Could not load asset manifest (bytes was null)");
				
			}
		
		} catch (e:Dynamic) {
			
			trace ('Warning: Could not load asset manifest (${e})');
			
		}
		
	}
	#end
	
	
	public override function loadMusic (id:String, handler:Sound -> Void):Void {
		
		#if (flash || js)
		
		/*if (path.exists (id)) {
			
			var loader = new Loader ();
			loader.contentLoaderInfo.addEventListener (Event.COMPLETE, function (event) {
				
				handler (cast (event.currentTarget.content, Bitmap).bitmapData);
				
			});
			loader.load (new URLRequest (path.get (id)));
			
		} else {*/
			
			handler (getMusic (id));
			
		//}
		
		#else
		
		handler (getMusic (id));
		
		#end
		
	}
	
	
	public override function loadSound (id:String, handler:Sound -> Void):Void {
		
		#if (flash || js)
		
		/*if (path.exists (id)) {
			
			var loader = new Loader ();
			loader.contentLoaderInfo.addEventListener (Event.COMPLETE, function (event) {
				
				handler (cast (event.currentTarget.content, Bitmap).bitmapData);
				
			});
			loader.load (new URLRequest (path.get (id)));
			
		} else {*/
			
			handler (getSound (id));
			
		//}
		
		#else
		
		handler (getSound (id));
		
		#end
		
	}
	
	
	public override function loadText (id:String, handler:String -> Void):Void {
		
		#if js
		
		if (path.exists (id)) {
			
			var loader = new URLLoader ();
			loader.addEventListener (Event.COMPLETE, function (event:Event) {
				
				handler (event.currentTarget.data);
				
			});
			loader.load (new URLRequest (path.get (id)));
			
		} else {
			
			handler (getText (id));
			
		}
		
		#else
		
		var callback = function (bytes:ByteArray):Void {
			
			if (bytes == null) {
				
				handler (null);
				
			} else {
				
				handler (bytes.readUTFBytes (bytes.length));
				
			}
			
		}
		
		loadBytes (id, callback);
		
		#end
		
	}
	
	
}


#if pixi
#elseif flash

@:keep class __ASSET__assets_font_font_fnt extends openfl.utils.ByteArray { }
@:keep class __ASSET__assets_font_font_png extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep class __ASSET__assets_font_littlelo_ttf extends openfl.text.Font { }
@:keep class __ASSET__assets_font_project_ltr extends openfl.utils.ByteArray { }
@:keep class __ASSET__assets_images_background_0_png extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep class __ASSET__assets_images_background_1_png extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep class __ASSET__assets_images_background_2_png extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep class __ASSET__assets_images_background_3_png extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep class __ASSET__assets_images_background_4_png extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep class __ASSET__assets_images_background_5_png extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep class __ASSET__assets_images_sprites_eel_png extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep class __ASSET__assets_images_sprites_eel_xml extends openfl.utils.ByteArray { }
@:keep class __ASSET__assets_images_sprites_lobster_png extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep class __ASSET__assets_images_sprites_lobster_xml extends openfl.utils.ByteArray { }
@:keep class __ASSET__assets_images_sprites_player_png extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep class __ASSET__assets_images_sprites_player_xml extends openfl.utils.ByteArray { }
@:keep class __ASSET__assets_images_ui_mobile_startscreen_png extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep class __ASSET__assets_images_ui_pause_exit_png extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep class __ASSET__assets_images_ui_pause_play_png extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep class __ASSET__assets_images_ui_pause_settings_png extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep class __ASSET__assets_sounds_beep_mp3 extends openfl.media.Sound { }
@:keep class __ASSET__assets_sounds_flixel_mp3 extends openfl.media.Sound { }


#elseif html5



@:keep class __ASSET__assets_font_littlelo_ttf extends flash.text.Font { #if (!openfl_html5_dom) public function new () { super (); fontName = "assets/font/LITTLELO.TTF"; } #end }





















#elseif (windows || mac || linux)


@:file("assets/font/font.fnt") class __ASSET__assets_font_font_fnt extends flash.utils.ByteArray {}
@:bitmap("assets/font/font.png") class __ASSET__assets_font_font_png extends flash.display.BitmapData {}
@:font("assets/font/LITTLELO.TTF") class __ASSET__assets_font_littlelo_ttf extends flash.text.Font {}
@:file("assets/font/project.ltr") class __ASSET__assets_font_project_ltr extends flash.utils.ByteArray {}
@:bitmap("assets/images/background/0.png") class __ASSET__assets_images_background_0_png extends flash.display.BitmapData {}
@:bitmap("assets/images/background/1.png") class __ASSET__assets_images_background_1_png extends flash.display.BitmapData {}
@:bitmap("assets/images/background/2.png") class __ASSET__assets_images_background_2_png extends flash.display.BitmapData {}
@:bitmap("assets/images/background/3.png") class __ASSET__assets_images_background_3_png extends flash.display.BitmapData {}
@:bitmap("assets/images/background/4.png") class __ASSET__assets_images_background_4_png extends flash.display.BitmapData {}
@:bitmap("assets/images/background/5.png") class __ASSET__assets_images_background_5_png extends flash.display.BitmapData {}
@:bitmap("assets/images/sprites/eel.png") class __ASSET__assets_images_sprites_eel_png extends flash.display.BitmapData {}
@:file("assets/images/sprites/eel.xml") class __ASSET__assets_images_sprites_eel_xml extends flash.utils.ByteArray {}
@:bitmap("assets/images/sprites/lobster.png") class __ASSET__assets_images_sprites_lobster_png extends flash.display.BitmapData {}
@:file("assets/images/sprites/lobster.xml") class __ASSET__assets_images_sprites_lobster_xml extends flash.utils.ByteArray {}
@:bitmap("assets/images/sprites/player.png") class __ASSET__assets_images_sprites_player_png extends flash.display.BitmapData {}
@:file("assets/images/sprites/player.xml") class __ASSET__assets_images_sprites_player_xml extends flash.utils.ByteArray {}
@:bitmap("assets/images/ui/mobile/startScreen.png") class __ASSET__assets_images_ui_mobile_startscreen_png extends flash.display.BitmapData {}
@:bitmap("assets/images/ui/pause/exit.PNG") class __ASSET__assets_images_ui_pause_exit_png extends flash.display.BitmapData {}
@:bitmap("assets/images/ui/pause/play.png") class __ASSET__assets_images_ui_pause_play_png extends flash.display.BitmapData {}
@:bitmap("assets/images/ui/pause/settings.png") class __ASSET__assets_images_ui_pause_settings_png extends flash.display.BitmapData {}
@:sound("D:/Documents/Development/HAXE/haxe/lib/flixel/3,3,5/assets/sounds/beep.mp3") class __ASSET__assets_sounds_beep_mp3 extends flash.media.Sound {}
@:sound("D:/Documents/Development/HAXE/haxe/lib/flixel/3,3,5/assets/sounds/flixel.mp3") class __ASSET__assets_sounds_flixel_mp3 extends flash.media.Sound {}


#end
