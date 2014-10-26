#include <hxcpp.h>

#ifndef INCLUDED_MyFlxGame
#include <MyFlxGame.h>
#endif
#ifndef INCLUDED_flixel_FlxBasic
#include <flixel/FlxBasic.h>
#endif
#ifndef INCLUDED_flixel_FlxG
#include <flixel/FlxG.h>
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
#ifndef INCLUDED_flixel_interfaces_IFlxInput
#include <flixel/interfaces/IFlxInput.h>
#endif
#ifndef INCLUDED_flixel_interfaces_IFlxSignal
#include <flixel/interfaces/IFlxSignal.h>
#endif
#ifndef INCLUDED_flixel_system_frontEnds_InputFrontEnd
#include <flixel/system/frontEnds/InputFrontEnd.h>
#endif
#ifndef INCLUDED_flixel_system_frontEnds_SignalFrontEnd
#include <flixel/system/frontEnds/SignalFrontEnd.h>
#endif
#ifndef INCLUDED_flixel_system_frontEnds_SoundFrontEnd
#include <flixel/system/frontEnds/SoundFrontEnd.h>
#endif
#ifndef INCLUDED_flixel_util__FlxSignal_FlxSignal0
#include <flixel/util/_FlxSignal/FlxSignal0.h>
#endif
#ifndef INCLUDED_flixel_util__FlxSignal_FlxSignalBase
#include <flixel/util/_FlxSignal/FlxSignalBase.h>
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
#ifndef INCLUDED_openfl_display_Sprite
#include <openfl/display/Sprite.h>
#endif
#ifndef INCLUDED_openfl_display_Stage
#include <openfl/display/Stage.h>
#endif
#ifndef INCLUDED_openfl_events_EventDispatcher
#include <openfl/events/EventDispatcher.h>
#endif
#ifndef INCLUDED_openfl_events_IEventDispatcher
#include <openfl/events/IEventDispatcher.h>
#endif

Void MyFlxGame_obj::__construct(Dynamic GameSizeX,Dynamic GameSizeY,::Class InitialState,Dynamic Zoom,Dynamic UpdateFramerate,Dynamic DrawFramerate,Dynamic SkipSplash,Dynamic StartFullscreen)
{
HX_STACK_FRAME("MyFlxGame","new",0xc57fe04a,"MyFlxGame.new","MyFlxGame.hx",12,0x68343666)
HX_STACK_THIS(this)
HX_STACK_ARG(GameSizeX,"GameSizeX")
HX_STACK_ARG(GameSizeY,"GameSizeY")
HX_STACK_ARG(InitialState,"InitialState")
HX_STACK_ARG(Zoom,"Zoom")
HX_STACK_ARG(UpdateFramerate,"UpdateFramerate")
HX_STACK_ARG(DrawFramerate,"DrawFramerate")
HX_STACK_ARG(SkipSplash,"SkipSplash")
HX_STACK_ARG(StartFullscreen,"StartFullscreen")
{
	HX_STACK_LINE(12)
	super::__construct(GameSizeX,GameSizeY,InitialState,Zoom,UpdateFramerate,DrawFramerate,SkipSplash,StartFullscreen);
}
;
	return null();
}

//MyFlxGame_obj::~MyFlxGame_obj() { }

Dynamic MyFlxGame_obj::__CreateEmpty() { return  new MyFlxGame_obj; }
hx::ObjectPtr< MyFlxGame_obj > MyFlxGame_obj::__new(Dynamic GameSizeX,Dynamic GameSizeY,::Class InitialState,Dynamic Zoom,Dynamic UpdateFramerate,Dynamic DrawFramerate,Dynamic SkipSplash,Dynamic StartFullscreen)
{  hx::ObjectPtr< MyFlxGame_obj > result = new MyFlxGame_obj();
	result->__construct(GameSizeX,GameSizeY,InitialState,Zoom,UpdateFramerate,DrawFramerate,SkipSplash,StartFullscreen);
	return result;}

Dynamic MyFlxGame_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< MyFlxGame_obj > result = new MyFlxGame_obj();
	result->__construct(inArgs[0],inArgs[1],inArgs[2],inArgs[3],inArgs[4],inArgs[5],inArgs[6],inArgs[7]);
	return result;}

Void MyFlxGame_obj::onFocus( Dynamic _){
{
		HX_STACK_FRAME("MyFlxGame","onFocus",0x246a4b23,"MyFlxGame.onFocus","MyFlxGame.hx",15,0x68343666)
		HX_STACK_THIS(this)
		HX_STACK_ARG(_,"_")
		HX_STACK_LINE(33)
		this->_lostFocus = false;
		HX_STACK_LINE(34)
		::flixel::FlxG_obj::signals->focusGained->dispatch();
		HX_STACK_LINE(36)
		if ((!(::flixel::FlxG_obj::autoPause))){
			HX_STACK_LINE(38)
			this->_state->onFocus();
			HX_STACK_LINE(39)
			return null();
		}
		HX_STACK_LINE(46)
		this->get_stage()->set_frameRate(::flixel::FlxG_obj::drawFramerate);
		HX_STACK_LINE(48)
		::flixel::FlxG_obj::sound->onFocus();
		HX_STACK_LINE(50)
		{
			HX_STACK_LINE(50)
			int _g = (int)0;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(50)
			Array< ::flixel::interfaces::IFlxInput > _g1 = ::flixel::FlxG_obj::inputs->list;		HX_STACK_VAR(_g1,"_g1");
			HX_STACK_LINE(50)
			while((true)){
				HX_STACK_LINE(50)
				if ((!(((_g < _g1->length))))){
					HX_STACK_LINE(50)
					break;
				}
				HX_STACK_LINE(50)
				::flixel::interfaces::IFlxInput input = _g1->__get(_g);		HX_STACK_VAR(input,"input");
				HX_STACK_LINE(50)
				++(_g);
				HX_STACK_LINE(50)
				input->onFocus();
			}
		}
	}
return null();
}


Void MyFlxGame_obj::onFocusLost( Dynamic _){
{
		HX_STACK_FRAME("MyFlxGame","onFocusLost",0x0882eea7,"MyFlxGame.onFocusLost","MyFlxGame.hx",54,0x68343666)
		HX_STACK_THIS(this)
		HX_STACK_ARG(_,"_")
		HX_STACK_LINE(62)
		this->_lostFocus = true;
		HX_STACK_LINE(64)
		::flixel::FlxG_obj::signals->focusLost->dispatch();
		HX_STACK_LINE(66)
		if ((!(::flixel::FlxG_obj::autoPause))){
			HX_STACK_LINE(68)
			this->_state->onFocusLost();
			HX_STACK_LINE(69)
			return null();
		}
		HX_STACK_LINE(76)
		this->get_stage()->set_frameRate(this->focusLostFramerate);
		HX_STACK_LINE(78)
		::flixel::FlxG_obj::sound->onFocusLost();
		HX_STACK_LINE(80)
		{
			HX_STACK_LINE(80)
			int _g = (int)0;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(80)
			Array< ::flixel::interfaces::IFlxInput > _g1 = ::flixel::FlxG_obj::inputs->list;		HX_STACK_VAR(_g1,"_g1");
			HX_STACK_LINE(80)
			while((true)){
				HX_STACK_LINE(80)
				if ((!(((_g < _g1->length))))){
					HX_STACK_LINE(80)
					break;
				}
				HX_STACK_LINE(80)
				::flixel::interfaces::IFlxInput input = _g1->__get(_g);		HX_STACK_VAR(input,"input");
				HX_STACK_LINE(80)
				++(_g);
				HX_STACK_LINE(80)
				input->onFocusLost();
			}
		}
	}
return null();
}



MyFlxGame_obj::MyFlxGame_obj()
{
}

Dynamic MyFlxGame_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 7:
		if (HX_FIELD_EQ(inName,"onFocus") ) { return onFocus_dyn(); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"onFocusLost") ) { return onFocusLost_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic MyFlxGame_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	return super::__SetField(inName,inValue,inCallProp);
}

void MyFlxGame_obj::__GetFields(Array< ::String> &outFields)
{
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	String(null()) };

#if HXCPP_SCRIPTABLE
static hx::StorageInfo *sMemberStorageInfo = 0;
#endif

static ::String sMemberFields[] = {
	HX_CSTRING("onFocus"),
	HX_CSTRING("onFocusLost"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(MyFlxGame_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(MyFlxGame_obj::__mClass,"__mClass");
};

#endif

Class MyFlxGame_obj::__mClass;

void MyFlxGame_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("MyFlxGame"), hx::TCanCast< MyFlxGame_obj> ,sStaticFields,sMemberFields,
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

void MyFlxGame_obj::__boot()
{
}

