#ifndef INCLUDED_LevelGenerator
#define INCLUDED_LevelGenerator

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS0(Eel)
HX_DECLARE_CLASS0(LevelGenerator)
HX_DECLARE_CLASS0(Lobster)
HX_DECLARE_CLASS1(flixel,FlxBasic)
HX_DECLARE_CLASS1(flixel,FlxObject)
HX_DECLARE_CLASS1(flixel,FlxSprite)
HX_DECLARE_CLASS2(flixel,interfaces,IFlxDestroyable)


class HXCPP_CLASS_ATTRIBUTES  LevelGenerator_obj : public hx::Object{
	public:
		typedef hx::Object super;
		typedef LevelGenerator_obj OBJ_;
		LevelGenerator_obj();
		Void __construct();

	public:
		inline void *operator new( size_t inSize, bool inContainer=false)
			{ return hx::Object::operator new(inSize,inContainer); }
		static hx::ObjectPtr< LevelGenerator_obj > __new();
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~LevelGenerator_obj();

		HX_DO_RTTI;
		static void __boot();
		static void __register();
		::String __ToString() const { return HX_CSTRING("LevelGenerator"); }

		static ::Eel eel;
		static ::Lobster lobster;
		static int lobsterRoll;
		static bool isFirstLobster;
		static int y;
		static int ySpacingMax;
		static int ySpacingMin;
		static int lastSpawned;
		static int eelCode;
		static int lobsterCode;
		static Void generate( );
		static Dynamic generate_dyn();

		static Void addEel( bool direction,Float posY);
		static Dynamic addEel_dyn();

		static Void addLobster( Float posY);
		static Dynamic addLobster_dyn();

		static Void removeEnemies( );
		static Dynamic removeEnemies_dyn();

		static int startY( );
		static Dynamic startY_dyn();

		static Void reset( );
		static Dynamic reset_dyn();

		static int random( );
		static Dynamic random_dyn();

};


#endif /* INCLUDED_LevelGenerator */ 
