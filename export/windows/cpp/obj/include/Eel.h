#ifndef INCLUDED_Eel
#define INCLUDED_Eel

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#include <flixel/FlxSprite.h>
HX_DECLARE_CLASS0(Eel)
HX_DECLARE_CLASS1(flixel,FlxBasic)
HX_DECLARE_CLASS1(flixel,FlxObject)
HX_DECLARE_CLASS1(flixel,FlxSprite)
HX_DECLARE_CLASS2(flixel,interfaces,IFlxDestroyable)


class HXCPP_CLASS_ATTRIBUTES  Eel_obj : public ::flixel::FlxSprite_obj{
	public:
		typedef ::flixel::FlxSprite_obj super;
		typedef Eel_obj OBJ_;
		Eel_obj();
		Void __construct(bool direction,Float posY);

	public:
		inline void *operator new( size_t inSize, bool inContainer=true)
			{ return hx::Object::operator new(inSize,inContainer); }
		static hx::ObjectPtr< Eel_obj > __new(bool direction,Float posY);
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~Eel_obj();

		HX_DO_RTTI;
		static void __boot();
		static void __register();
		::String __ToString() const { return HX_CSTRING("Eel"); }

		int movingSpeed;
		virtual Void kill( );

		virtual Void update( );

		virtual Void setPos( bool direction,Float posY);
		Dynamic setPos_dyn();

		virtual bool playerIsNear( );
		Dynamic playerIsNear_dyn();

};


#endif /* INCLUDED_Eel */ 
