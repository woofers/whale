#ifndef INCLUDED_Player
#define INCLUDED_Player

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#include <flixel/FlxSprite.h>
HX_DECLARE_CLASS0(Player)
HX_DECLARE_CLASS1(flixel,FlxBasic)
HX_DECLARE_CLASS1(flixel,FlxObject)
HX_DECLARE_CLASS1(flixel,FlxSprite)
HX_DECLARE_CLASS2(flixel,interfaces,IFlxDestroyable)


class HXCPP_CLASS_ATTRIBUTES  Player_obj : public ::flixel::FlxSprite_obj{
	public:
		typedef ::flixel::FlxSprite_obj super;
		typedef Player_obj OBJ_;
		Player_obj();
		Void __construct();

	public:
		inline void *operator new( size_t inSize, bool inContainer=true)
			{ return hx::Object::operator new(inSize,inContainer); }
		static hx::ObjectPtr< Player_obj > __new();
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~Player_obj();

		HX_DO_RTTI;
		static void __boot();
		static void __register();
		::String __ToString() const { return HX_CSTRING("Player"); }

		int swimmingSpeed;
		int hitTime;
		virtual Void update( );

		virtual Void resetPlayer( );
		Dynamic resetPlayer_dyn();

		virtual Void hitBox( );
		Dynamic hitBox_dyn();

		virtual Void switchDirrection( );
		Dynamic switchDirrection_dyn();

		virtual bool isGoingDown( );
		Dynamic isGoingDown_dyn();

		virtual bool hitDetected( );
		Dynamic hitDetected_dyn();

		virtual Void hitTolerance( );
		Dynamic hitTolerance_dyn();

		virtual Void screenBounds( );
		Dynamic screenBounds_dyn();

		static Float startX;
		static Float startY;
		static int switchDirrectionTop;
		static int switchDirrectionBottom;
};


#endif /* INCLUDED_Player */ 
