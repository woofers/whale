#include <hxcpp.h>

#ifndef INCLUDED_flixel_text_pxText_PxTextAlign
#include <flixel/text/pxText/PxTextAlign.h>
#endif
namespace flixel{
namespace text{
namespace pxText{

Void PxTextAlign_obj::__construct()
{
	return null();
}

//PxTextAlign_obj::~PxTextAlign_obj() { }

Dynamic PxTextAlign_obj::__CreateEmpty() { return  new PxTextAlign_obj; }
hx::ObjectPtr< PxTextAlign_obj > PxTextAlign_obj::__new()
{  hx::ObjectPtr< PxTextAlign_obj > result = new PxTextAlign_obj();
	result->__construct();
	return result;}

Dynamic PxTextAlign_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< PxTextAlign_obj > result = new PxTextAlign_obj();
	result->__construct();
	return result;}

int PxTextAlign_obj::LEFT;

int PxTextAlign_obj::RIGHT;

int PxTextAlign_obj::CENTER;


PxTextAlign_obj::PxTextAlign_obj()
{
}

Dynamic PxTextAlign_obj::__Field(const ::String &inName,bool inCallProp)
{
	return super::__Field(inName,inCallProp);
}

Dynamic PxTextAlign_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	return super::__SetField(inName,inValue,inCallProp);
}

void PxTextAlign_obj::__GetFields(Array< ::String> &outFields)
{
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	HX_CSTRING("LEFT"),
	HX_CSTRING("RIGHT"),
	HX_CSTRING("CENTER"),
	String(null()) };

#if HXCPP_SCRIPTABLE
static hx::StorageInfo *sMemberStorageInfo = 0;
#endif

static ::String sMemberFields[] = {
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(PxTextAlign_obj::__mClass,"__mClass");
	HX_MARK_MEMBER_NAME(PxTextAlign_obj::LEFT,"LEFT");
	HX_MARK_MEMBER_NAME(PxTextAlign_obj::RIGHT,"RIGHT");
	HX_MARK_MEMBER_NAME(PxTextAlign_obj::CENTER,"CENTER");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(PxTextAlign_obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(PxTextAlign_obj::LEFT,"LEFT");
	HX_VISIT_MEMBER_NAME(PxTextAlign_obj::RIGHT,"RIGHT");
	HX_VISIT_MEMBER_NAME(PxTextAlign_obj::CENTER,"CENTER");
};

#endif

Class PxTextAlign_obj::__mClass;

void PxTextAlign_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("flixel.text.pxText.PxTextAlign"), hx::TCanCast< PxTextAlign_obj> ,sStaticFields,sMemberFields,
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

void PxTextAlign_obj::__boot()
{
	LEFT= (int)1;
	RIGHT= (int)2;
	CENTER= (int)3;
}

} // end namespace flixel
} // end namespace text
} // end namespace pxText
