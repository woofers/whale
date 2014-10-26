#ifndef INCLUDED_MyFlxGame
#define INCLUDED_MyFlxGame

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#include <flixel/FlxGame.h>
HX_DECLARE_CLASS0(MyFlxGame)
HX_DECLARE_CLASS1(flixel,FlxGame)
HX_DECLARE_CLASS2(openfl,display,DisplayObject)
HX_DECLARE_CLASS2(openfl,display,DisplayObjectContainer)
HX_DECLARE_CLASS2(openfl,display,IBitmapDrawable)
HX_DECLARE_CLASS2(openfl,display,InteractiveObject)
HX_DECLARE_CLASS2(openfl,display,Sprite)
HX_DECLARE_CLASS2(openfl,events,EventDispatcher)
HX_DECLARE_CLASS2(openfl,events,IEventDispatcher)


class HXCPP_CLASS_ATTRIBUTES  MyFlxGame_obj : public ::flixel::FlxGame_obj{
	public:
		typedef ::flixel::FlxGame_obj super;
		typedef MyFlxGame_obj OBJ_;
		MyFlxGame_obj();
		Void __construct(Dynamic GameSizeX,Dynamic GameSizeY,::Class InitialState,Dynamic Zoom,Dynamic UpdateFramerate,Dynamic DrawFramerate,Dynamic SkipSplash,Dynamic StartFullscreen);

	public:
		inline void *operator new( size_t inSize, bool inContainer=true)
			{ return hx::Object::operator new(inSize,inContainer); }
		static hx::ObjectPtr< MyFlxGame_obj > __new(Dynamic GameSizeX,Dynamic GameSizeY,::Class InitialState,Dynamic Zoom,Dynamic UpdateFramerate,Dynamic DrawFramerate,Dynamic SkipSplash,Dynamic StartFullscreen);
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~MyFlxGame_obj();

		HX_DO_RTTI;
		static void __boot();
		static void __register();
		::String __ToString() const { return HX_CSTRING("MyFlxGame"); }

		virtual Void onFocus( Dynamic _);

		virtual Void onFocusLost( Dynamic _);

};


#endif /* INCLUDED_MyFlxGame */ 
