#ifndef INCLUDED_PauseMenu
#define INCLUDED_PauseMenu

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#include <flixel/FlxSubState.h>
HX_DECLARE_CLASS0(PauseMenu)
HX_DECLARE_CLASS1(flixel,FlxBasic)
HX_DECLARE_CLASS1(flixel,FlxObject)
HX_DECLARE_CLASS1(flixel,FlxSprite)
HX_DECLARE_CLASS1(flixel,FlxState)
HX_DECLARE_CLASS1(flixel,FlxSubState)
HX_DECLARE_CLASS2(flixel,group,FlxGroup)
HX_DECLARE_CLASS2(flixel,group,FlxTypedGroup)
HX_DECLARE_CLASS2(flixel,interfaces,IFlxDestroyable)
HX_DECLARE_CLASS2(flixel,text,FlxBitmapTextField)
HX_DECLARE_CLASS3(flixel,text,pxText,PxBitmapFont)
HX_DECLARE_CLASS2(flixel,ui,FlxButton)
HX_DECLARE_CLASS2(flixel,ui,FlxTypedButton)


class HXCPP_CLASS_ATTRIBUTES  PauseMenu_obj : public ::flixel::FlxSubState_obj{
	public:
		typedef ::flixel::FlxSubState_obj super;
		typedef PauseMenu_obj OBJ_;
		PauseMenu_obj();
		Void __construct(Dynamic BGColor);

	public:
		inline void *operator new( size_t inSize, bool inContainer=true)
			{ return hx::Object::operator new(inSize,inContainer); }
		static hx::ObjectPtr< PauseMenu_obj > __new(Dynamic BGColor);
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~PauseMenu_obj();

		HX_DO_RTTI;
		static void __boot();
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		::String __ToString() const { return HX_CSTRING("PauseMenu"); }

		::flixel::FlxSprite darken;
		::flixel::FlxSprite scoreHeader;
		::String scoreValue;
		::flixel::text::FlxBitmapTextField scoreField;
		::flixel::text::pxText::PxBitmapFont fontStyle;
		::flixel::ui::FlxButton resumeButton;
		::flixel::ui::FlxButton settingsButton;
		::flixel::ui::FlxButton exitButton;
		virtual Void create( );

		virtual Void update( );

		virtual Void resumeGame( );
		Dynamic resumeGame_dyn();

};


#endif /* INCLUDED_PauseMenu */ 
