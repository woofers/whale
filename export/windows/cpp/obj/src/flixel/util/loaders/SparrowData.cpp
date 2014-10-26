#include <hxcpp.h>

#ifndef INCLUDED_List
#include <List.h>
#endif
#ifndef INCLUDED_Std
#include <Std.h>
#endif
#ifndef INCLUDED_Xml
#include <Xml.h>
#endif
#ifndef INCLUDED_flixel_FlxG
#include <flixel/FlxG.h>
#endif
#ifndef INCLUDED_flixel_interfaces_IFlxDestroyable
#include <flixel/interfaces/IFlxDestroyable.h>
#endif
#ifndef INCLUDED_flixel_interfaces_IFlxPooled
#include <flixel/interfaces/IFlxPooled.h>
#endif
#ifndef INCLUDED_flixel_system_frontEnds_BitmapFrontEnd
#include <flixel/system/frontEnds/BitmapFrontEnd.h>
#endif
#ifndef INCLUDED_flixel_util_FlxPoint
#include <flixel/util/FlxPoint.h>
#endif
#ifndef INCLUDED_flixel_util_FlxPool_flixel_util_FlxPoint
#include <flixel/util/FlxPool_flixel_util_FlxPoint.h>
#endif
#ifndef INCLUDED_flixel_util_loaders_CachedGraphics
#include <flixel/util/loaders/CachedGraphics.h>
#endif
#ifndef INCLUDED_flixel_util_loaders_SparrowData
#include <flixel/util/loaders/SparrowData.h>
#endif
#ifndef INCLUDED_flixel_util_loaders_TextureAtlasFrame
#include <flixel/util/loaders/TextureAtlasFrame.h>
#endif
#ifndef INCLUDED_flixel_util_loaders_TexturePackerData
#include <flixel/util/loaders/TexturePackerData.h>
#endif
#ifndef INCLUDED_haxe_xml_Fast
#include <haxe/xml/Fast.h>
#endif
#ifndef INCLUDED_haxe_xml__Fast_AttribAccess
#include <haxe/xml/_Fast/AttribAccess.h>
#endif
#ifndef INCLUDED_haxe_xml__Fast_HasAttribAccess
#include <haxe/xml/_Fast/HasAttribAccess.h>
#endif
#ifndef INCLUDED_haxe_xml__Fast_NodeListAccess
#include <haxe/xml/_Fast/NodeListAccess.h>
#endif
#ifndef INCLUDED_openfl_Assets
#include <openfl/Assets.h>
#endif
#ifndef INCLUDED_openfl_display_BitmapData
#include <openfl/display/BitmapData.h>
#endif
#ifndef INCLUDED_openfl_display_IBitmapDrawable
#include <openfl/display/IBitmapDrawable.h>
#endif
#ifndef INCLUDED_openfl_geom_Rectangle
#include <openfl/geom/Rectangle.h>
#endif
namespace flixel{
namespace util{
namespace loaders{

Void SparrowData_obj::__construct(::String Description,::String AssetName)
{
HX_STACK_FRAME("flixel.util.loaders.SparrowData","new",0xc675c5a0,"flixel.util.loaders.SparrowData.new","flixel/util/loaders/SparrowData.hx",22,0xe6ca11f1)
HX_STACK_THIS(this)
HX_STACK_ARG(Description,"Description")
HX_STACK_ARG(AssetName,"AssetName")
{
	HX_STACK_LINE(22)
	super::__construct(Description,AssetName);
}
;
	return null();
}

//SparrowData_obj::~SparrowData_obj() { }

Dynamic SparrowData_obj::__CreateEmpty() { return  new SparrowData_obj; }
hx::ObjectPtr< SparrowData_obj > SparrowData_obj::__new(::String Description,::String AssetName)
{  hx::ObjectPtr< SparrowData_obj > result = new SparrowData_obj();
	result->__construct(Description,AssetName);
	return result;}

Dynamic SparrowData_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< SparrowData_obj > result = new SparrowData_obj();
	result->__construct(inArgs[0],inArgs[1]);
	return result;}

Void SparrowData_obj::parseData( ){
{
		HX_STACK_FRAME("flixel.util.loaders.SparrowData","parseData",0xceef0d3d,"flixel.util.loaders.SparrowData.parseData","flixel/util/loaders/SparrowData.hx",30,0xe6ca11f1)
		HX_STACK_THIS(this)
		HX_STACK_LINE(32)
		if (((this->frames->length != (int)0))){
			HX_STACK_LINE(32)
			return null();
		}
		HX_STACK_LINE(34)
		if (((bool((this->assetName == null())) || bool((this->description == null()))))){
			HX_STACK_LINE(34)
			return null();
		}
		struct _Function_1_1{
			inline static ::flixel::util::loaders::CachedGraphics Block( hx::ObjectPtr< ::flixel::util::loaders::SparrowData_obj > __this){
				HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","flixel/util/loaders/SparrowData.hx",36,0xe6ca11f1)
				{
					HX_STACK_LINE(36)
					bool Unique = false;		HX_STACK_VAR(Unique,"Unique");
					HX_STACK_LINE(36)
					return ::flixel::FlxG_obj::bitmap->addWithSpaces(__this->assetName,(int)0,(int)0,(int)1,(int)1,Unique,null());
				}
				return null();
			}
		};
		HX_STACK_LINE(36)
		this->asset = (_Function_1_1::Block(this))->bitmap;
		HX_STACK_LINE(37)
		::String _g = ::openfl::Assets_obj::getText(this->description);		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(37)
		::Xml _g1 = ::Xml_obj::parse(_g)->firstElement();		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(37)
		::haxe::xml::Fast data = ::haxe::xml::Fast_obj::__new(_g1);		HX_STACK_VAR(data,"data");
		HX_STACK_LINE(39)
		for(::cpp::FastIterator_obj< ::haxe::xml::Fast > *__it = ::cpp::CreateFastIterator< ::haxe::xml::Fast >(data->nodes->resolve(HX_CSTRING("SubTexture"))->iterator());  __it->hasNext(); ){
			::haxe::xml::Fast texture = __it->next();
			{
				HX_STACK_LINE(41)
				::flixel::util::loaders::TextureAtlasFrame texFrame = ::flixel::util::loaders::TextureAtlasFrame_obj::__new();		HX_STACK_VAR(texFrame,"texFrame");
				HX_STACK_LINE(42)
				bool _g2 = texture->has->resolve(HX_CSTRING("frameX"));		HX_STACK_VAR(_g2,"_g2");
				HX_STACK_LINE(42)
				texFrame->trimmed = _g2;
				HX_STACK_LINE(43)
				texFrame->rotated = false;
				HX_STACK_LINE(44)
				::String _g3 = texture->att->resolve(HX_CSTRING("name"));		HX_STACK_VAR(_g3,"_g3");
				HX_STACK_LINE(44)
				texFrame->name = _g3;
				HX_STACK_LINE(47)
				::String _g4 = texture->att->resolve(HX_CSTRING("x"));		HX_STACK_VAR(_g4,"_g4");
				HX_STACK_LINE(47)
				Float _g5 = ::Std_obj::parseFloat(_g4);		HX_STACK_VAR(_g5,"_g5");
				HX_STACK_LINE(47)
				::String _g6 = texture->att->resolve(HX_CSTRING("y"));		HX_STACK_VAR(_g6,"_g6");
				HX_STACK_LINE(47)
				Float _g7 = ::Std_obj::parseFloat(_g6);		HX_STACK_VAR(_g7,"_g7");
				HX_STACK_LINE(48)
				::String _g8 = texture->att->resolve(HX_CSTRING("width"));		HX_STACK_VAR(_g8,"_g8");
				HX_STACK_LINE(48)
				Float _g9 = ::Std_obj::parseFloat(_g8);		HX_STACK_VAR(_g9,"_g9");
				HX_STACK_LINE(48)
				::String _g10 = texture->att->resolve(HX_CSTRING("height"));		HX_STACK_VAR(_g10,"_g10");
				HX_STACK_LINE(48)
				Float _g11 = ::Std_obj::parseFloat(_g10);		HX_STACK_VAR(_g11,"_g11");
				HX_STACK_LINE(46)
				::openfl::geom::Rectangle rect = ::openfl::geom::Rectangle_obj::__new(_g5,_g7,_g9,_g11);		HX_STACK_VAR(rect,"rect");
				HX_STACK_LINE(50)
				::openfl::geom::Rectangle size;		HX_STACK_VAR(size,"size");
				HX_STACK_LINE(50)
				if ((texFrame->trimmed)){
					HX_STACK_LINE(52)
					::String _g12 = texture->att->resolve(HX_CSTRING("frameX"));		HX_STACK_VAR(_g12,"_g12");
					HX_STACK_LINE(52)
					Dynamic _g13 = ::Std_obj::parseInt(_g12);		HX_STACK_VAR(_g13,"_g13");
					HX_STACK_LINE(52)
					::String _g14 = texture->att->resolve(HX_CSTRING("frameY"));		HX_STACK_VAR(_g14,"_g14");
					HX_STACK_LINE(52)
					Dynamic _g15 = ::Std_obj::parseInt(_g14);		HX_STACK_VAR(_g15,"_g15");
					HX_STACK_LINE(53)
					::String _g16 = texture->att->resolve(HX_CSTRING("frameWidth"));		HX_STACK_VAR(_g16,"_g16");
					HX_STACK_LINE(53)
					Dynamic _g17 = ::Std_obj::parseInt(_g16);		HX_STACK_VAR(_g17,"_g17");
					HX_STACK_LINE(53)
					::String _g18 = texture->att->resolve(HX_CSTRING("frameHeight"));		HX_STACK_VAR(_g18,"_g18");
					HX_STACK_LINE(53)
					Dynamic _g19 = ::Std_obj::parseInt(_g18);		HX_STACK_VAR(_g19,"_g19");
					HX_STACK_LINE(51)
					size = ::openfl::geom::Rectangle_obj::__new(_g13,_g15,_g17,_g19);
				}
				else{
					HX_STACK_LINE(55)
					size = ::openfl::geom::Rectangle_obj::__new((int)0,(int)0,rect->width,rect->height);
				}
				HX_STACK_LINE(57)
				::flixel::util::FlxPoint _g20;		HX_STACK_VAR(_g20,"_g20");
				HX_STACK_LINE(57)
				{
					HX_STACK_LINE(57)
					::flixel::util::FlxPoint point = ::flixel::util::FlxPoint_obj::_pool->get()->set((int)0,(int)0);		HX_STACK_VAR(point,"point");
					HX_STACK_LINE(57)
					point->_inPool = false;
					HX_STACK_LINE(57)
					_g20 = point;
				}
				HX_STACK_LINE(57)
				texFrame->offset = _g20;
				HX_STACK_LINE(58)
				Float _g21 = -(size->get_left());		HX_STACK_VAR(_g21,"_g21");
				HX_STACK_LINE(58)
				Float _g22 = -(size->get_top());		HX_STACK_VAR(_g22,"_g22");
				HX_STACK_LINE(58)
				texFrame->offset->set(_g21,_g22);
				HX_STACK_LINE(60)
				::flixel::util::FlxPoint _g23;		HX_STACK_VAR(_g23,"_g23");
				HX_STACK_LINE(60)
				{
					HX_STACK_LINE(60)
					::flixel::util::FlxPoint point = ::flixel::util::FlxPoint_obj::_pool->get()->set(size->width,size->height);		HX_STACK_VAR(point,"point");
					HX_STACK_LINE(60)
					point->_inPool = false;
					HX_STACK_LINE(60)
					_g23 = point;
				}
				HX_STACK_LINE(60)
				texFrame->sourceSize = _g23;
				HX_STACK_LINE(61)
				texFrame->frame = rect;
				HX_STACK_LINE(63)
				this->frames->push(texFrame);
			}
;
		}
	}
return null();
}



SparrowData_obj::SparrowData_obj()
{
}

Dynamic SparrowData_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 9:
		if (HX_FIELD_EQ(inName,"parseData") ) { return parseData_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic SparrowData_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	return super::__SetField(inName,inValue,inCallProp);
}

void SparrowData_obj::__GetFields(Array< ::String> &outFields)
{
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	String(null()) };

#if HXCPP_SCRIPTABLE
static hx::StorageInfo *sMemberStorageInfo = 0;
#endif

static ::String sMemberFields[] = {
	HX_CSTRING("parseData"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(SparrowData_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(SparrowData_obj::__mClass,"__mClass");
};

#endif

Class SparrowData_obj::__mClass;

void SparrowData_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("flixel.util.loaders.SparrowData"), hx::TCanCast< SparrowData_obj> ,sStaticFields,sMemberFields,
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

void SparrowData_obj::__boot()
{
}

} // end namespace flixel
} // end namespace util
} // end namespace loaders
