#include <hxcpp.h>

#ifndef INCLUDED_MyInput
#include <MyInput.h>
#endif
#ifndef INCLUDED_flixel_FlxG
#include <flixel/FlxG.h>
#endif
#ifndef INCLUDED_flixel_input_keyboard_FlxKeyboard
#include <flixel/input/keyboard/FlxKeyboard.h>
#endif
#ifndef INCLUDED_flixel_interfaces_IFlxInput
#include <flixel/interfaces/IFlxInput.h>
#endif

Void MyInput_obj::__construct()
{
	return null();
}

//MyInput_obj::~MyInput_obj() { }

Dynamic MyInput_obj::__CreateEmpty() { return  new MyInput_obj; }
hx::ObjectPtr< MyInput_obj > MyInput_obj::__new()
{  hx::ObjectPtr< MyInput_obj > result = new MyInput_obj();
	result->__construct();
	return result;}

Dynamic MyInput_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< MyInput_obj > result = new MyInput_obj();
	result->__construct();
	return result;}

Float MyInput_obj::accelerometerSensitivity;

bool MyInput_obj::left( ){
	HX_STACK_FRAME("MyInput","left",0x5591bd97,"MyInput.left","MyInput.hx",30,0x2ac68ca0)
	HX_STACK_LINE(33)
	if ((::flixel::FlxG_obj::keys->checkKeyStatus(Array_obj< ::String >::__new().Add(HX_CSTRING("LEFT")).Add(HX_CSTRING("A")),(int)1))){
		HX_STACK_LINE(35)
		return true;
	}
	HX_STACK_LINE(47)
	return false;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(MyInput_obj,left,return )

bool MyInput_obj::right( ){
	HX_STACK_FRAME("MyInput","right",0x0101344c,"MyInput.right","MyInput.hx",56,0x2ac68ca0)
	HX_STACK_LINE(59)
	if ((::flixel::FlxG_obj::keys->checkKeyStatus(Array_obj< ::String >::__new().Add(HX_CSTRING("RIGHT")).Add(HX_CSTRING("D")),(int)1))){
		HX_STACK_LINE(61)
		return true;
	}
	HX_STACK_LINE(73)
	return false;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(MyInput_obj,right,return )

Void MyInput_obj::getAccelerometerX( ){
{
		HX_STACK_FRAME("MyInput","getAccelerometerX",0x7d8f964f,"MyInput.getAccelerometerX","MyInput.hx",82,0x2ac68ca0)
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(MyInput_obj,getAccelerometerX,(void))


MyInput_obj::MyInput_obj()
{
}

Dynamic MyInput_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"left") ) { return left_dyn(); }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"right") ) { return right_dyn(); }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"getAccelerometerX") ) { return getAccelerometerX_dyn(); }
		break;
	case 24:
		if (HX_FIELD_EQ(inName,"accelerometerSensitivity") ) { return accelerometerSensitivity; }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic MyInput_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 24:
		if (HX_FIELD_EQ(inName,"accelerometerSensitivity") ) { accelerometerSensitivity=inValue.Cast< Float >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void MyInput_obj::__GetFields(Array< ::String> &outFields)
{
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	HX_CSTRING("accelerometerSensitivity"),
	HX_CSTRING("left"),
	HX_CSTRING("right"),
	HX_CSTRING("getAccelerometerX"),
	String(null()) };

#if HXCPP_SCRIPTABLE
static hx::StorageInfo *sMemberStorageInfo = 0;
#endif

static ::String sMemberFields[] = {
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(MyInput_obj::__mClass,"__mClass");
	HX_MARK_MEMBER_NAME(MyInput_obj::accelerometerSensitivity,"accelerometerSensitivity");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(MyInput_obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(MyInput_obj::accelerometerSensitivity,"accelerometerSensitivity");
};

#endif

Class MyInput_obj::__mClass;

void MyInput_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("MyInput"), hx::TCanCast< MyInput_obj> ,sStaticFields,sMemberFields,
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

void MyInput_obj::__boot()
{
	accelerometerSensitivity= 0.4;
}

