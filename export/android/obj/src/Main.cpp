#include <hxcpp.h>

#ifndef INCLUDED_Main
#include <Main.h>
#endif
#ifndef INCLUDED_MenuState
#include <MenuState.h>
#endif
#ifndef INCLUDED_MyFlxGame
#include <MyFlxGame.h>
#endif
#ifndef INCLUDED_flixel_FlxBasic
#include <flixel/FlxBasic.h>
#endif
#ifndef INCLUDED_flixel_FlxGame
#include <flixel/FlxGame.h>
#endif
#ifndef INCLUDED_flixel_FlxState
#include <flixel/FlxState.h>
#endif
#ifndef INCLUDED_flixel_group_FlxGroup
#include <flixel/group/FlxGroup.h>
#endif
#ifndef INCLUDED_flixel_group_FlxTypedGroup
#include <flixel/group/FlxTypedGroup.h>
#endif
#ifndef INCLUDED_flixel_interfaces_IFlxDestroyable
#include <flixel/interfaces/IFlxDestroyable.h>
#endif
#ifndef INCLUDED_openfl_Lib
#include <openfl/Lib.h>
#endif
#ifndef INCLUDED_openfl_display_DisplayObject
#include <openfl/display/DisplayObject.h>
#endif
#ifndef INCLUDED_openfl_display_DisplayObjectContainer
#include <openfl/display/DisplayObjectContainer.h>
#endif
#ifndef INCLUDED_openfl_display_IBitmapDrawable
#include <openfl/display/IBitmapDrawable.h>
#endif
#ifndef INCLUDED_openfl_display_InteractiveObject
#include <openfl/display/InteractiveObject.h>
#endif
#ifndef INCLUDED_openfl_display_MovieClip
#include <openfl/display/MovieClip.h>
#endif
#ifndef INCLUDED_openfl_display_Sprite
#include <openfl/display/Sprite.h>
#endif
#ifndef INCLUDED_openfl_display_Stage
#include <openfl/display/Stage.h>
#endif
#ifndef INCLUDED_openfl_events_Event
#include <openfl/events/Event.h>
#endif
#ifndef INCLUDED_openfl_events_EventDispatcher
#include <openfl/events/EventDispatcher.h>
#endif
#ifndef INCLUDED_openfl_events_IEventDispatcher
#include <openfl/events/IEventDispatcher.h>
#endif

Void Main_obj::__construct()
{
HX_STACK_FRAME("Main","new",0x6616a5cb,"Main.new","Main.hx",12,0x087e5c05)
HX_STACK_THIS(this)
{
	HX_STACK_LINE(20)
	this->startFullscreen = false;
	HX_STACK_LINE(19)
	this->skipSplash = true;
	HX_STACK_LINE(18)
	this->framerate = (int)60;
	HX_STACK_LINE(17)
	this->zoom = (int)-1;
	HX_STACK_LINE(16)
	this->initialState = hx::ClassOf< ::MenuState >();
	HX_STACK_LINE(15)
	this->gameHeight = (int)1920;
	HX_STACK_LINE(14)
	this->gameWidth = (int)1080;
	HX_STACK_LINE(31)
	super::__construct();
	HX_STACK_LINE(33)
	::openfl::display::Stage _g = this->get_stage();		HX_STACK_VAR(_g,"_g");
	HX_STACK_LINE(33)
	if (((_g != null()))){
		HX_STACK_LINE(35)
		this->init(null());
	}
	else{
		HX_STACK_LINE(39)
		this->addEventListener(::openfl::events::Event_obj::ADDED_TO_STAGE,this->init_dyn(),null(),null(),null());
	}
}
;
	return null();
}

//Main_obj::~Main_obj() { }

Dynamic Main_obj::__CreateEmpty() { return  new Main_obj; }
hx::ObjectPtr< Main_obj > Main_obj::__new()
{  hx::ObjectPtr< Main_obj > result = new Main_obj();
	result->__construct();
	return result;}

Dynamic Main_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< Main_obj > result = new Main_obj();
	result->__construct();
	return result;}

Void Main_obj::init( ::openfl::events::Event E){
{
		HX_STACK_FRAME("Main","init",0xea732345,"Main.init","Main.hx",44,0x087e5c05)
		HX_STACK_THIS(this)
		HX_STACK_ARG(E,"E")
		HX_STACK_LINE(45)
		if ((this->hasEventListener(::openfl::events::Event_obj::ADDED_TO_STAGE))){
			HX_STACK_LINE(47)
			this->removeEventListener(::openfl::events::Event_obj::ADDED_TO_STAGE,this->init_dyn(),null());
		}
		HX_STACK_LINE(50)
		this->setupGame();
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Main_obj,init,(void))

Void Main_obj::setupGame( ){
{
		HX_STACK_FRAME("Main","setupGame",0x7f7688ba,"Main.setupGame","Main.hx",54,0x087e5c05)
		HX_STACK_THIS(this)
		HX_STACK_LINE(69)
		::MyFlxGame _g = ::MyFlxGame_obj::__new(this->gameWidth,this->gameHeight,this->initialState,this->zoom,this->framerate,this->framerate,this->skipSplash,this->startFullscreen);		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(69)
		this->addChild(_g);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(Main_obj,setupGame,(void))

Void Main_obj::main( ){
{
		HX_STACK_FRAME("Main","main",0xed0e206e,"Main.main","Main.hx",25,0x087e5c05)
		HX_STACK_LINE(26)
		::Main _g = ::Main_obj::__new();		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(26)
		::openfl::Lib_obj::get_current()->addChild(_g);
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(Main_obj,main,(void))


Main_obj::Main_obj()
{
}

void Main_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(Main);
	HX_MARK_MEMBER_NAME(gameWidth,"gameWidth");
	HX_MARK_MEMBER_NAME(gameHeight,"gameHeight");
	HX_MARK_MEMBER_NAME(initialState,"initialState");
	HX_MARK_MEMBER_NAME(zoom,"zoom");
	HX_MARK_MEMBER_NAME(framerate,"framerate");
	HX_MARK_MEMBER_NAME(skipSplash,"skipSplash");
	HX_MARK_MEMBER_NAME(startFullscreen,"startFullscreen");
	::openfl::display::DisplayObjectContainer_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void Main_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(gameWidth,"gameWidth");
	HX_VISIT_MEMBER_NAME(gameHeight,"gameHeight");
	HX_VISIT_MEMBER_NAME(initialState,"initialState");
	HX_VISIT_MEMBER_NAME(zoom,"zoom");
	HX_VISIT_MEMBER_NAME(framerate,"framerate");
	HX_VISIT_MEMBER_NAME(skipSplash,"skipSplash");
	HX_VISIT_MEMBER_NAME(startFullscreen,"startFullscreen");
	::openfl::display::DisplayObjectContainer_obj::__Visit(HX_VISIT_ARG);
}

Dynamic Main_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"main") ) { return main_dyn(); }
		if (HX_FIELD_EQ(inName,"zoom") ) { return zoom; }
		if (HX_FIELD_EQ(inName,"init") ) { return init_dyn(); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"gameWidth") ) { return gameWidth; }
		if (HX_FIELD_EQ(inName,"framerate") ) { return framerate; }
		if (HX_FIELD_EQ(inName,"setupGame") ) { return setupGame_dyn(); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"gameHeight") ) { return gameHeight; }
		if (HX_FIELD_EQ(inName,"skipSplash") ) { return skipSplash; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"initialState") ) { return initialState; }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"startFullscreen") ) { return startFullscreen; }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic Main_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"zoom") ) { zoom=inValue.Cast< Float >(); return inValue; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"gameWidth") ) { gameWidth=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"framerate") ) { framerate=inValue.Cast< int >(); return inValue; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"gameHeight") ) { gameHeight=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"skipSplash") ) { skipSplash=inValue.Cast< bool >(); return inValue; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"initialState") ) { initialState=inValue.Cast< ::Class >(); return inValue; }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"startFullscreen") ) { startFullscreen=inValue.Cast< bool >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void Main_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_CSTRING("gameWidth"));
	outFields->push(HX_CSTRING("gameHeight"));
	outFields->push(HX_CSTRING("initialState"));
	outFields->push(HX_CSTRING("zoom"));
	outFields->push(HX_CSTRING("framerate"));
	outFields->push(HX_CSTRING("skipSplash"));
	outFields->push(HX_CSTRING("startFullscreen"));
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	HX_CSTRING("main"),
	String(null()) };

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsInt,(int)offsetof(Main_obj,gameWidth),HX_CSTRING("gameWidth")},
	{hx::fsInt,(int)offsetof(Main_obj,gameHeight),HX_CSTRING("gameHeight")},
	{hx::fsObject /*::Class*/ ,(int)offsetof(Main_obj,initialState),HX_CSTRING("initialState")},
	{hx::fsFloat,(int)offsetof(Main_obj,zoom),HX_CSTRING("zoom")},
	{hx::fsInt,(int)offsetof(Main_obj,framerate),HX_CSTRING("framerate")},
	{hx::fsBool,(int)offsetof(Main_obj,skipSplash),HX_CSTRING("skipSplash")},
	{hx::fsBool,(int)offsetof(Main_obj,startFullscreen),HX_CSTRING("startFullscreen")},
	{ hx::fsUnknown, 0, null()}
};
#endif

static ::String sMemberFields[] = {
	HX_CSTRING("gameWidth"),
	HX_CSTRING("gameHeight"),
	HX_CSTRING("initialState"),
	HX_CSTRING("zoom"),
	HX_CSTRING("framerate"),
	HX_CSTRING("skipSplash"),
	HX_CSTRING("startFullscreen"),
	HX_CSTRING("init"),
	HX_CSTRING("setupGame"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(Main_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(Main_obj::__mClass,"__mClass");
};

#endif

Class Main_obj::__mClass;

void Main_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("Main"), hx::TCanCast< Main_obj> ,sStaticFields,sMemberFields,
	&__CreateEmpty, &__Create,
	&super::__SGetClass(), 0, sMarkStatics
#ifdef HXCPP_VISIT_ALLOCS
    , sVisitStatics
#endif
#ifdef HXCPP_SCRIPTABLE
    , sMemberStorageInfo
#endif
);
}

void Main_obj::__boot()
{
}

