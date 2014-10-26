#include <hxcpp.h>

#ifndef INCLUDED_flixel_input_touch_FlxTouch
#include <flixel/input/touch/FlxTouch.h>
#endif
#ifndef INCLUDED_flixel_interfaces_IFlxDestroyable
#include <flixel/interfaces/IFlxDestroyable.h>
#endif
#ifndef INCLUDED_flixel_interfaces_IFlxPooled
#include <flixel/interfaces/IFlxPooled.h>
#endif
#ifndef INCLUDED_flixel_util_FlxPoint
#include <flixel/util/FlxPoint.h>
#endif
namespace flixel{
namespace input{
namespace touch{

Void FlxTouch_obj::__construct(Dynamic X,Dynamic Y)
{
HX_STACK_FRAME("flixel.input.touch.FlxTouch","new",0xa47319c4,"flixel.input.touch.FlxTouch.new","flixel/input/touch/FlxTouch.hx",19,0x7bf286c9)
HX_STACK_THIS(this)
HX_STACK_ARG(X,"X")
HX_STACK_ARG(Y,"Y")
{
	HX_STACK_LINE(19)
	super::__construct(X,Y);
}
;
	return null();
}

//FlxTouch_obj::~FlxTouch_obj() { }

Dynamic FlxTouch_obj::__CreateEmpty() { return  new FlxTouch_obj; }
hx::ObjectPtr< FlxTouch_obj > FlxTouch_obj::__new(Dynamic X,Dynamic Y)
{  hx::ObjectPtr< FlxTouch_obj > result = new FlxTouch_obj();
	result->__construct(X,Y);
	return result;}

Dynamic FlxTouch_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< FlxTouch_obj > result = new FlxTouch_obj();
	result->__construct(inArgs[0],inArgs[1]);
	return result;}

hx::Object *FlxTouch_obj::__ToInterface(const hx::type_info &inType) {
	if (inType==typeid( ::flixel::interfaces::IFlxDestroyable_obj)) return operator ::flixel::interfaces::IFlxDestroyable_obj *();
	return super::__ToInterface(inType);
}


FlxTouch_obj::FlxTouch_obj()
{
}

Dynamic FlxTouch_obj::__Field(const ::String &inName,bool inCallProp)
{
	return super::__Field(inName,inCallProp);
}

Dynamic FlxTouch_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	return super::__SetField(inName,inValue,inCallProp);
}

void FlxTouch_obj::__GetFields(Array< ::String> &outFields)
{
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	String(null()) };

#if HXCPP_SCRIPTABLE
static hx::StorageInfo *sMemberStorageInfo = 0;
#endif

static ::String sMemberFields[] = {
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(FlxTouch_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(FlxTouch_obj::__mClass,"__mClass");
};

#endif

Class FlxTouch_obj::__mClass;

void FlxTouch_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("flixel.input.touch.FlxTouch"), hx::TCanCast< FlxTouch_obj> ,sStaticFields,sMemberFields,
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

void FlxTouch_obj::__boot()
{
}

} // end namespace flixel
} // end namespace input
} // end namespace touch
