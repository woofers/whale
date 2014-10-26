#ifndef INCLUDED_PlayState
#define INCLUDED_PlayState

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#include <flixel/FlxState.h>
HX_DECLARE_CLASS0(PauseMenu)
HX_DECLARE_CLASS0(PlayState)
HX_DECLARE_CLASS0(Player)
HX_DECLARE_CLASS1(flixel,FlxBasic)
HX_DECLARE_CLASS1(flixel,FlxObject)
HX_DECLARE_CLASS1(flixel,FlxSprite)
HX_DECLARE_CLASS1(flixel,FlxState)
HX_DECLARE_CLASS1(flixel,FlxSubState)
HX_DECLARE_CLASS2(flixel,group,FlxGroup)
HX_DECLARE_CLASS2(flixel,group,FlxSpriteGroup)
HX_DECLARE_CLASS2(flixel,group,FlxTypedGroup)
HX_DECLARE_CLASS2(flixel,group,FlxTypedSpriteGroup)
HX_DECLARE_CLASS2(flixel,interfaces,IFlxDestroyable)
HX_DECLARE_CLASS2(flixel,text,FlxBitmapTextField)
HX_DECLARE_CLASS3(flixel,text,pxText,PxBitmapFont)
HX_DECLARE_CLASS2(flixel,ui,FlxButton)
HX_DECLARE_CLASS2(flixel,ui,FlxTypedButton)


class HXCPP_CLASS_ATTRIBUTES  PlayState_obj : public ::flixel::FlxState_obj{
	public:
		typedef ::flixel::FlxState_obj super;
		typedef PlayState_obj OBJ_;
		PlayState_obj();
		Void __construct(Dynamic MaxSize);

	public:
		inline void *operator new( size_t inSize, bool inContainer=true)
			{ return hx::Object::operator new(inSize,inContainer); }
		static hx::ObjectPtr< PlayState_obj > __new(Dynamic MaxSize);
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~PlayState_obj();

		HX_DO_RTTI;
		static void __boot();
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		::String __ToString() const { return HX_CSTRING("PlayState"); }

		::flixel::text::pxText::PxBitmapFont fontStyle;
		virtual Void create( );

		virtual Void destroy( );

		virtual Void update( );

		virtual Void createText( );
		Dynamic createText_dyn();

		virtual Void createBackground( );
		Dynamic createBackground_dyn();

		virtual Void createPauseGameButton( );
		Dynamic createPauseGameButton_dyn();

		virtual Void pauseGame( );
		Dynamic pauseGame_dyn();

		static ::PauseMenu pauseMenu;
		static ::Player player;
		static ::flixel::group::FlxSpriteGroup killGroup;
		static ::flixel::FlxSprite scoreHeader;
		static ::String scoreValue;
		static ::flixel::text::FlxBitmapTextField scoreField;
		static ::flixel::ui::FlxButton pauseButton;
		static Void createPauseMenu( );
		static Dynamic createPauseMenu_dyn();

};


#endif /* INCLUDED_PlayState */ 
