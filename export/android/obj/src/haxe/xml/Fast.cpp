#include <hxcpp.h>

#ifndef INCLUDED_Std
#include <Std.h>
#endif
#ifndef INCLUDED_Xml
#include <Xml.h>
#endif
#ifndef INCLUDED_XmlType
#include <XmlType.h>
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
#ifndef INCLUDED_haxe_xml__Fast_HasNodeAccess
#include <haxe/xml/_Fast/HasNodeAccess.h>
#endif
#ifndef INCLUDED_haxe_xml__Fast_NodeAccess
#include <haxe/xml/_Fast/NodeAccess.h>
#endif
#ifndef INCLUDED_haxe_xml__Fast_NodeListAccess
#include <haxe/xml/_Fast/NodeListAccess.h>
#endif
namespace haxe{
namespace xml{

Void Fast_obj::__construct(::Xml x)
{
HX_STACK_FRAME("haxe.xml.Fast","new",0xda21546d,"haxe.xml.Fast.new","D:\\Documents\\Development\\HAXE\\haxe\\std/haxe/xml/Fast.hx",122,0xa7b64698)
HX_STACK_THIS(this)
HX_STACK_ARG(x,"x")
{
	HX_STACK_LINE(123)
	if (((bool((x->nodeType != ::Xml_obj::Document)) && bool((x->nodeType != ::Xml_obj::Element))))){
		HX_STACK_LINE(124)
		::String _g = ::Std_obj::string(x->nodeType);		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(124)
		HX_STACK_DO_THROW((HX_CSTRING("Invalid nodeType ") + _g));
	}
	HX_STACK_LINE(125)
	this->x = x;
	HX_STACK_LINE(126)
	::haxe::xml::_Fast::NodeAccess _g1 = ::haxe::xml::_Fast::NodeAccess_obj::__new(x);		HX_STACK_VAR(_g1,"_g1");
	HX_STACK_LINE(126)
	this->node = _g1;
	HX_STACK_LINE(127)
	::haxe::xml::_Fast::NodeListAccess _g2 = ::haxe::xml::_Fast::NodeListAccess_obj::__new(x);		HX_STACK_VAR(_g2,"_g2");
	HX_STACK_LINE(127)
	this->nodes = _g2;
	HX_STACK_LINE(128)
	::haxe::xml::_Fast::AttribAccess _g3 = ::haxe::xml::_Fast::AttribAccess_obj::__new(x);		HX_STACK_VAR(_g3,"_g3");
	HX_STACK_LINE(128)
	this->att = _g3;
	HX_STACK_LINE(129)
	::haxe::xml::_Fast::HasAttribAccess _g4 = ::haxe::xml::_Fast::HasAttribAccess_obj::__new(x);		HX_STACK_VAR(_g4,"_g4");
	HX_STACK_LINE(129)
	this->has = _g4;
	HX_STACK_LINE(130)
	::haxe::xml::_Fast::HasNodeAccess _g5 = ::haxe::xml::_Fast::HasNodeAccess_obj::__new(x);		HX_STACK_VAR(_g5,"_g5");
	HX_STACK_LINE(130)
	this->hasNode = _g5;
}
;
	return null();
}

//Fast_obj::~Fast_obj() { }

Dynamic Fast_obj::__CreateEmpty() { return  new Fast_obj; }
hx::ObjectPtr< Fast_obj > Fast_obj::__new(::Xml x)
{  hx::ObjectPtr< Fast_obj > result = new Fast_obj();
	result->__construct(x);
	return result;}

Dynamic Fast_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< Fast_obj > result = new Fast_obj();
	result->__construct(inArgs[0]);
	return result;}


Fast_obj::Fast_obj()
{
}

void Fast_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(Fast);
	HX_MARK_MEMBER_NAME(x,"x");
	HX_MARK_MEMBER_NAME(node,"node");
	HX_MARK_MEMBER_NAME(nodes,"nodes");
	HX_MARK_MEMBER_NAME(att,"att");
	HX_MARK_MEMBER_NAME(has,"has");
	HX_MARK_MEMBER_NAME(hasNode,"hasNode");
	HX_MARK_END_CLASS();
}

void Fast_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(x,"x");
	HX_VISIT_MEMBER_NAME(node,"node");
	HX_VISIT_MEMBER_NAME(nodes,"nodes");
	HX_VISIT_MEMBER_NAME(att,"att");
	HX_VISIT_MEMBER_NAME(has,"has");
	HX_VISIT_MEMBER_NAME(hasNode,"hasNode");
}

Dynamic Fast_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 1:
		if (HX_FIELD_EQ(inName,"x") ) { return x; }
		break;
	case 3:
		if (HX_FIELD_EQ(inName,"att") ) { return att; }
		if (HX_FIELD_EQ(inName,"has") ) { return has; }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"node") ) { return node; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"nodes") ) { return nodes; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"hasNode") ) { return hasNode; }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic Fast_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 1:
		if (HX_FIELD_EQ(inName,"x") ) { x=inValue.Cast< ::Xml >(); return inValue; }
		break;
	case 3:
		if (HX_FIELD_EQ(inName,"att") ) { att=inValue.Cast< ::haxe::xml::_Fast::AttribAccess >(); return inValue; }
		if (HX_FIELD_EQ(inName,"has") ) { has=inValue.Cast< ::haxe::xml::_Fast::HasAttribAccess >(); return inValue; }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"node") ) { node=inValue.Cast< ::haxe::xml::_Fast::NodeAccess >(); return inValue; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"nodes") ) { nodes=inValue.Cast< ::haxe::xml::_Fast::NodeListAccess >(); return inValue; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"hasNode") ) { hasNode=inValue.Cast< ::haxe::xml::_Fast::HasNodeAccess >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void Fast_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_CSTRING("x"));
	outFields->push(HX_CSTRING("node"));
	outFields->push(HX_CSTRING("nodes"));
	outFields->push(HX_CSTRING("att"));
	outFields->push(HX_CSTRING("has"));
	outFields->push(HX_CSTRING("hasNode"));
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	String(null()) };

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsObject /*::Xml*/ ,(int)offsetof(Fast_obj,x),HX_CSTRING("x")},
	{hx::fsObject /*::haxe::xml::_Fast::NodeAccess*/ ,(int)offsetof(Fast_obj,node),HX_CSTRING("node")},
	{hx::fsObject /*::haxe::xml::_Fast::NodeListAccess*/ ,(int)offsetof(Fast_obj,nodes),HX_CSTRING("nodes")},
	{hx::fsObject /*::haxe::xml::_Fast::AttribAccess*/ ,(int)offsetof(Fast_obj,att),HX_CSTRING("att")},
	{hx::fsObject /*::haxe::xml::_Fast::HasAttribAccess*/ ,(int)offsetof(Fast_obj,has),HX_CSTRING("has")},
	{hx::fsObject /*::haxe::xml::_Fast::HasNodeAccess*/ ,(int)offsetof(Fast_obj,hasNode),HX_CSTRING("hasNode")},
	{ hx::fsUnknown, 0, null()}
};
#endif

static ::String sMemberFields[] = {
	HX_CSTRING("x"),
	HX_CSTRING("node"),
	HX_CSTRING("nodes"),
	HX_CSTRING("att"),
	HX_CSTRING("has"),
	HX_CSTRING("hasNode"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(Fast_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(Fast_obj::__mClass,"__mClass");
};

#endif

Class Fast_obj::__mClass;

void Fast_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("haxe.xml.Fast"), hx::TCanCast< Fast_obj> ,sStaticFields,sMemberFields,
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

void Fast_obj::__boot()
{
}

} // end namespace haxe
} // end namespace xml
