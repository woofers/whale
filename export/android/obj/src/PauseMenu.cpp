#include <hxcpp.h>

#ifndef INCLUDED_PauseMenu
#include <PauseMenu.h>
#endif
#ifndef INCLUDED_PlayState
#include <PlayState.h>
#endif
#ifndef INCLUDED_Xml
#include <Xml.h>
#endif
#ifndef INCLUDED_flixel_FlxBasic
#include <flixel/FlxBasic.h>
#endif
#ifndef INCLUDED_flixel_FlxObject
#include <flixel/FlxObject.h>
#endif
#ifndef INCLUDED_flixel_FlxSprite
#include <flixel/FlxSprite.h>
#endif
#ifndef INCLUDED_flixel_FlxState
#include <flixel/FlxState.h>
#endif
#ifndef INCLUDED_flixel_FlxSubState
#include <flixel/FlxSubState.h>
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
#ifndef INCLUDED_flixel_interfaces_IFlxPooled
#include <flixel/interfaces/IFlxPooled.h>
#endif
#ifndef INCLUDED_flixel_text_FlxBitmapTextField
#include <flixel/text/FlxBitmapTextField.h>
#endif
#ifndef INCLUDED_flixel_text_pxText_PxBitmapFont
#include <flixel/text/pxText/PxBitmapFont.h>
#endif
#ifndef INCLUDED_flixel_ui_FlxButton
#include <flixel/ui/FlxButton.h>
#endif
#ifndef INCLUDED_flixel_ui_FlxTypedButton
#include <flixel/ui/FlxTypedButton.h>
#endif
#ifndef INCLUDED_flixel_util_FlxPoint
#include <flixel/util/FlxPoint.h>
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

Void PauseMenu_obj::__construct(Dynamic BGColor)
{
HX_STACK_FRAME("PauseMenu","new",0x4a0c6b07,"PauseMenu.new","PauseMenu.hx",21,0x1d081249)
HX_STACK_THIS(this)
HX_STACK_ARG(BGColor,"BGColor")
{
	HX_STACK_LINE(21)
	super::__construct(BGColor);
}
;
	return null();
}

//PauseMenu_obj::~PauseMenu_obj() { }

Dynamic PauseMenu_obj::__CreateEmpty() { return  new PauseMenu_obj; }
hx::ObjectPtr< PauseMenu_obj > PauseMenu_obj::__new(Dynamic BGColor)
{  hx::ObjectPtr< PauseMenu_obj > result = new PauseMenu_obj();
	result->__construct(BGColor);
	return result;}

Dynamic PauseMenu_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< PauseMenu_obj > result = new PauseMenu_obj();
	result->__construct(inArgs[0]);
	return result;}

Void PauseMenu_obj::create( ){
{
		HX_STACK_FRAME("PauseMenu","create",0x4e95aeb5,"PauseMenu.create","PauseMenu.hx",54,0x1d081249)
		HX_STACK_THIS(this)
		HX_STACK_LINE(55)
		this->super::create();
		HX_STACK_LINE(58)
		::flixel::FlxSprite _g = ::flixel::FlxSprite_obj::__new((int)0,(int)0,HX_CSTRING("assets/images/ui/pause/darken.png"));		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(58)
		this->darken = _g;
		HX_STACK_LINE(59)
		Float _g1 = this->darken->scrollFactor->set_y((int)0);		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(59)
		this->darken->scrollFactor->set_x(_g1);
		HX_STACK_LINE(60)
		Float _g2 = this->darken->origin->set_y((int)0);		HX_STACK_VAR(_g2,"_g2");
		HX_STACK_LINE(60)
		this->darken->origin->set_x(_g2);
		HX_STACK_LINE(61)
		this->darken->scale->set_x((int)1080);
		HX_STACK_LINE(62)
		this->darken->scale->set_y((int)1920);
		HX_STACK_LINE(63)
		this->add(this->darken);
		HX_STACK_LINE(66)
		::flixel::FlxSprite _g3 = ::flixel::FlxSprite_obj::__new((int)127,(int)255,HX_CSTRING("assets/images/ui/pause/score.png"));		HX_STACK_VAR(_g3,"_g3");
		HX_STACK_LINE(66)
		this->scoreHeader = _g3;
		HX_STACK_LINE(67)
		Float _g4 = this->scoreHeader->scrollFactor->set_y((int)0);		HX_STACK_VAR(_g4,"_g4");
		HX_STACK_LINE(67)
		this->scoreHeader->scrollFactor->set_x(_g4);
		HX_STACK_LINE(68)
		this->add(this->scoreHeader);
		HX_STACK_LINE(71)
		::openfl::display::BitmapData _g5 = ::openfl::Assets_obj::getBitmapData(HX_CSTRING("assets/font/font.png"),null());		HX_STACK_VAR(_g5,"_g5");
		HX_STACK_LINE(71)
		::String _g6 = ::openfl::Assets_obj::getText(HX_CSTRING("assets/font/font.fnt"));		HX_STACK_VAR(_g6,"_g6");
		HX_STACK_LINE(71)
		::Xml _g7 = ::Xml_obj::parse(_g6);		HX_STACK_VAR(_g7,"_g7");
		HX_STACK_LINE(71)
		::flixel::text::pxText::PxBitmapFont _g8 = ::flixel::text::pxText::PxBitmapFont_obj::__new()->loadAngelCode(_g5,_g7);		HX_STACK_VAR(_g8,"_g8");
		HX_STACK_LINE(71)
		this->fontStyle = _g8;
		HX_STACK_LINE(74)
		::flixel::text::FlxBitmapTextField _g9 = ::flixel::text::FlxBitmapTextField_obj::__new(this->fontStyle);		HX_STACK_VAR(_g9,"_g9");
		HX_STACK_LINE(74)
		this->scoreField = _g9;
		HX_STACK_LINE(75)
		this->scoreField->set_text(HX_CSTRING("101"));
		HX_STACK_LINE(76)
		Float _g10 = this->scoreField->scrollFactor->set_y((int)0);		HX_STACK_VAR(_g10,"_g10");
		HX_STACK_LINE(76)
		this->scoreField->scrollFactor->set_x(_g10);
		HX_STACK_LINE(77)
		this->scoreField->set_useTextColor(false);
		HX_STACK_LINE(78)
		this->scoreField->set_color((int)-1159859);
		HX_STACK_LINE(79)
		Float _g11 = this->scoreField->set_y((int)500);		HX_STACK_VAR(_g11,"_g11");
		HX_STACK_LINE(79)
		this->scoreField->set_x(_g11);
		HX_STACK_LINE(80)
		this->add(this->scoreField);
		HX_STACK_LINE(83)
		::flixel::ui::FlxButton _g12 = ::flixel::ui::FlxButton_obj::__new((int)313,(int)1187,HX_CSTRING(""),this->resumeGame_dyn());		HX_STACK_VAR(_g12,"_g12");
		HX_STACK_LINE(83)
		this->resumeButton = _g12;
		HX_STACK_LINE(84)
		this->resumeButton->loadGraphic(HX_CSTRING("assets/images/ui/pause/play.png"),null(),null(),null(),null(),null());
		HX_STACK_LINE(85)
		Float _g13 = this->resumeButton->scrollFactor->set_y((int)0);		HX_STACK_VAR(_g13,"_g13");
		HX_STACK_LINE(85)
		this->resumeButton->scrollFactor->set_x(_g13);
		HX_STACK_LINE(86)
		this->add(this->resumeButton);
		HX_STACK_LINE(89)
		::flixel::ui::FlxButton _g14 = ::flixel::ui::FlxButton_obj::__new((int)731,(int)1047,HX_CSTRING(""),this->resumeGame_dyn());		HX_STACK_VAR(_g14,"_g14");
		HX_STACK_LINE(89)
		this->settingsButton = _g14;
		HX_STACK_LINE(90)
		this->settingsButton->loadGraphic(HX_CSTRING("assets/images/ui/pause/settings.png"),null(),null(),null(),null(),null());
		HX_STACK_LINE(91)
		Float _g15 = this->settingsButton->scrollFactor->set_y((int)0);		HX_STACK_VAR(_g15,"_g15");
		HX_STACK_LINE(91)
		this->settingsButton->scrollFactor->set_x(_g15);
		HX_STACK_LINE(92)
		this->add(this->settingsButton);
		HX_STACK_LINE(95)
		::flixel::ui::FlxButton _g16 = ::flixel::ui::FlxButton_obj::__new((int)175,(int)1616,HX_CSTRING(""),this->resumeGame_dyn());		HX_STACK_VAR(_g16,"_g16");
		HX_STACK_LINE(95)
		this->exitButton = _g16;
		HX_STACK_LINE(96)
		this->exitButton->loadGraphic(HX_CSTRING("assets/images/ui/pause/exit.png"),null(),null(),null(),null(),null());
		HX_STACK_LINE(97)
		Float _g17 = this->exitButton->scrollFactor->set_y((int)0);		HX_STACK_VAR(_g17,"_g17");
		HX_STACK_LINE(97)
		this->exitButton->scrollFactor->set_x(_g17);
		HX_STACK_LINE(98)
		this->add(this->exitButton);
	}
return null();
}


Void PauseMenu_obj::update( ){
{
		HX_STACK_FRAME("PauseMenu","update",0x598bcdc2,"PauseMenu.update","PauseMenu.hx",108,0x1d081249)
		HX_STACK_THIS(this)
		HX_STACK_LINE(108)
		this->super::update();
	}
return null();
}


Void PauseMenu_obj::resumeGame( ){
{
		HX_STACK_FRAME("PauseMenu","resumeGame",0xfece7c78,"PauseMenu.resumeGame","PauseMenu.hx",117,0x1d081249)
		HX_STACK_THIS(this)
		HX_STACK_LINE(118)
		this->close();
		HX_STACK_LINE(119)
		::PlayState_obj::createPauseMenu();
		HX_STACK_LINE(121)
		::PlayState_obj::pauseButton->set_visible(true);
		HX_STACK_LINE(122)
		::PlayState_obj::scoreHeader->set_visible(true);
		HX_STACK_LINE(123)
		::PlayState_obj::scoreField->set_visible(true);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(PauseMenu_obj,resumeGame,(void))


PauseMenu_obj::PauseMenu_obj()
{
}

void PauseMenu_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(PauseMenu);
	HX_MARK_MEMBER_NAME(darken,"darken");
	HX_MARK_MEMBER_NAME(scoreHeader,"scoreHeader");
	HX_MARK_MEMBER_NAME(scoreValue,"scoreValue");
	HX_MARK_MEMBER_NAME(scoreField,"scoreField");
	HX_MARK_MEMBER_NAME(fontStyle,"fontStyle");
	HX_MARK_MEMBER_NAME(resumeButton,"resumeButton");
	HX_MARK_MEMBER_NAME(settingsButton,"settingsButton");
	HX_MARK_MEMBER_NAME(exitButton,"exitButton");
	::flixel::FlxSubState_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void PauseMenu_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(darken,"darken");
	HX_VISIT_MEMBER_NAME(scoreHeader,"scoreHeader");
	HX_VISIT_MEMBER_NAME(scoreValue,"scoreValue");
	HX_VISIT_MEMBER_NAME(scoreField,"scoreField");
	HX_VISIT_MEMBER_NAME(fontStyle,"fontStyle");
	HX_VISIT_MEMBER_NAME(resumeButton,"resumeButton");
	HX_VISIT_MEMBER_NAME(settingsButton,"settingsButton");
	HX_VISIT_MEMBER_NAME(exitButton,"exitButton");
	::flixel::FlxSubState_obj::__Visit(HX_VISIT_ARG);
}

Dynamic PauseMenu_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 6:
		if (HX_FIELD_EQ(inName,"darken") ) { return darken; }
		if (HX_FIELD_EQ(inName,"create") ) { return create_dyn(); }
		if (HX_FIELD_EQ(inName,"update") ) { return update_dyn(); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"fontStyle") ) { return fontStyle; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"scoreValue") ) { return scoreValue; }
		if (HX_FIELD_EQ(inName,"scoreField") ) { return scoreField; }
		if (HX_FIELD_EQ(inName,"exitButton") ) { return exitButton; }
		if (HX_FIELD_EQ(inName,"resumeGame") ) { return resumeGame_dyn(); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"scoreHeader") ) { return scoreHeader; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"resumeButton") ) { return resumeButton; }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"settingsButton") ) { return settingsButton; }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic PauseMenu_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 6:
		if (HX_FIELD_EQ(inName,"darken") ) { darken=inValue.Cast< ::flixel::FlxSprite >(); return inValue; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"fontStyle") ) { fontStyle=inValue.Cast< ::flixel::text::pxText::PxBitmapFont >(); return inValue; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"scoreValue") ) { scoreValue=inValue.Cast< ::String >(); return inValue; }
		if (HX_FIELD_EQ(inName,"scoreField") ) { scoreField=inValue.Cast< ::flixel::text::FlxBitmapTextField >(); return inValue; }
		if (HX_FIELD_EQ(inName,"exitButton") ) { exitButton=inValue.Cast< ::flixel::ui::FlxButton >(); return inValue; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"scoreHeader") ) { scoreHeader=inValue.Cast< ::flixel::FlxSprite >(); return inValue; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"resumeButton") ) { resumeButton=inValue.Cast< ::flixel::ui::FlxButton >(); return inValue; }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"settingsButton") ) { settingsButton=inValue.Cast< ::flixel::ui::FlxButton >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void PauseMenu_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_CSTRING("darken"));
	outFields->push(HX_CSTRING("scoreHeader"));
	outFields->push(HX_CSTRING("scoreValue"));
	outFields->push(HX_CSTRING("scoreField"));
	outFields->push(HX_CSTRING("fontStyle"));
	outFields->push(HX_CSTRING("resumeButton"));
	outFields->push(HX_CSTRING("settingsButton"));
	outFields->push(HX_CSTRING("exitButton"));
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	String(null()) };

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsObject /*::flixel::FlxSprite*/ ,(int)offsetof(PauseMenu_obj,darken),HX_CSTRING("darken")},
	{hx::fsObject /*::flixel::FlxSprite*/ ,(int)offsetof(PauseMenu_obj,scoreHeader),HX_CSTRING("scoreHeader")},
	{hx::fsString,(int)offsetof(PauseMenu_obj,scoreValue),HX_CSTRING("scoreValue")},
	{hx::fsObject /*::flixel::text::FlxBitmapTextField*/ ,(int)offsetof(PauseMenu_obj,scoreField),HX_CSTRING("scoreField")},
	{hx::fsObject /*::flixel::text::pxText::PxBitmapFont*/ ,(int)offsetof(PauseMenu_obj,fontStyle),HX_CSTRING("fontStyle")},
	{hx::fsObject /*::flixel::ui::FlxButton*/ ,(int)offsetof(PauseMenu_obj,resumeButton),HX_CSTRING("resumeButton")},
	{hx::fsObject /*::flixel::ui::FlxButton*/ ,(int)offsetof(PauseMenu_obj,settingsButton),HX_CSTRING("settingsButton")},
	{hx::fsObject /*::flixel::ui::FlxButton*/ ,(int)offsetof(PauseMenu_obj,exitButton),HX_CSTRING("exitButton")},
	{ hx::fsUnknown, 0, null()}
};
#endif

static ::String sMemberFields[] = {
	HX_CSTRING("darken"),
	HX_CSTRING("scoreHeader"),
	HX_CSTRING("scoreValue"),
	HX_CSTRING("scoreField"),
	HX_CSTRING("fontStyle"),
	HX_CSTRING("resumeButton"),
	HX_CSTRING("settingsButton"),
	HX_CSTRING("exitButton"),
	HX_CSTRING("create"),
	HX_CSTRING("update"),
	HX_CSTRING("resumeGame"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(PauseMenu_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(PauseMenu_obj::__mClass,"__mClass");
};

#endif

Class PauseMenu_obj::__mClass;

void PauseMenu_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("PauseMenu"), hx::TCanCast< PauseMenu_obj> ,sStaticFields,sMemberFields,
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

void PauseMenu_obj::__boot()
{
}

