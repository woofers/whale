#include <hxcpp.h>

#ifndef INCLUDED_LevelGenerator
#include <LevelGenerator.h>
#endif
#ifndef INCLUDED_PauseMenu
#include <PauseMenu.h>
#endif
#ifndef INCLUDED_PlayState
#include <PlayState.h>
#endif
#ifndef INCLUDED_Player
#include <Player.h>
#endif
#ifndef INCLUDED_Xml
#include <Xml.h>
#endif
#ifndef INCLUDED_flixel_FlxBasic
#include <flixel/FlxBasic.h>
#endif
#ifndef INCLUDED_flixel_FlxCamera
#include <flixel/FlxCamera.h>
#endif
#ifndef INCLUDED_flixel_FlxG
#include <flixel/FlxG.h>
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
#ifndef INCLUDED_flixel_group_FlxSpriteGroup
#include <flixel/group/FlxSpriteGroup.h>
#endif
#ifndef INCLUDED_flixel_group_FlxTypedGroup
#include <flixel/group/FlxTypedGroup.h>
#endif
#ifndef INCLUDED_flixel_group_FlxTypedSpriteGroup
#include <flixel/group/FlxTypedSpriteGroup.h>
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

Void PlayState_obj::__construct(Dynamic MaxSize)
{
HX_STACK_FRAME("PlayState","new",0xf8bf96cf,"PlayState.new","PlayState.hx",29,0xb30d7781)
HX_STACK_THIS(this)
HX_STACK_ARG(MaxSize,"MaxSize")
{
	HX_STACK_LINE(29)
	super::__construct(MaxSize);
}
;
	return null();
}

//PlayState_obj::~PlayState_obj() { }

Dynamic PlayState_obj::__CreateEmpty() { return  new PlayState_obj; }
hx::ObjectPtr< PlayState_obj > PlayState_obj::__new(Dynamic MaxSize)
{  hx::ObjectPtr< PlayState_obj > result = new PlayState_obj();
	result->__construct(MaxSize);
	return result;}

Dynamic PlayState_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< PlayState_obj > result = new PlayState_obj();
	result->__construct(inArgs[0]);
	return result;}

Void PlayState_obj::create( ){
{
		HX_STACK_FRAME("PlayState","create",0x82220fed,"PlayState.create","PlayState.hx",66,0xb30d7781)
		HX_STACK_THIS(this)
		HX_STACK_LINE(67)
		this->super::create();
		HX_STACK_LINE(69)
		this->createBackground();
		HX_STACK_LINE(70)
		this->createText();
		HX_STACK_LINE(73)
		::Player _g = ::Player_obj::__new();		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(73)
		::PlayState_obj::player = _g;
		HX_STACK_LINE(74)
		this->add(::PlayState_obj::player);
		HX_STACK_LINE(77)
		::flixel::group::FlxSpriteGroup _g1 = ::flixel::group::FlxSpriteGroup_obj::__new(null(),null(),null());		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(77)
		::PlayState_obj::killGroup = _g1;
		HX_STACK_LINE(78)
		::LevelGenerator_obj::generate();
		HX_STACK_LINE(79)
		this->add(::PlayState_obj::killGroup);
		HX_STACK_LINE(81)
		::PlayState_obj::createPauseMenu();
		HX_STACK_LINE(82)
		this->createPauseGameButton();
		HX_STACK_LINE(85)
		::flixel::FlxG_obj::camera->setBounds((int)0,(int)0,(int)1080,(int)11520,true);
		HX_STACK_LINE(86)
		::flixel::FlxG_obj::camera->follow(::PlayState_obj::player,(int)1,null(),null());
	}
return null();
}


Void PlayState_obj::destroy( ){
{
		HX_STACK_FRAME("PlayState","destroy",0x6ec756e9,"PlayState.destroy","PlayState.hx",96,0xb30d7781)
		HX_STACK_THIS(this)
		HX_STACK_LINE(96)
		this->super::destroy();
	}
return null();
}


Void PlayState_obj::update( ){
{
		HX_STACK_FRAME("PlayState","update",0x8d182efa,"PlayState.update","PlayState.hx",106,0xb30d7781)
		HX_STACK_THIS(this)
		HX_STACK_LINE(106)
		this->super::update();
	}
return null();
}


Void PlayState_obj::createText( ){
{
		HX_STACK_FRAME("PlayState","createText",0xeba0033a,"PlayState.createText","PlayState.hx",115,0xb30d7781)
		HX_STACK_THIS(this)
		HX_STACK_LINE(117)
		::flixel::FlxSprite _g = ::flixel::FlxSprite_obj::__new((int)40,(int)40,HX_CSTRING("assets/images/ui/pause/score.png"));		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(117)
		::PlayState_obj::scoreHeader = _g;
		HX_STACK_LINE(118)
		Float _g1 = ::PlayState_obj::scoreHeader->scrollFactor->set_y((int)0);		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(118)
		::PlayState_obj::scoreHeader->scrollFactor->set_x(_g1);
		HX_STACK_LINE(119)
		Float _g2 = ::PlayState_obj::scoreHeader->origin->set_y((int)0);		HX_STACK_VAR(_g2,"_g2");
		HX_STACK_LINE(119)
		::PlayState_obj::scoreHeader->origin->set_x(_g2);
		HX_STACK_LINE(120)
		Float _g3 = ::PlayState_obj::scoreHeader->scale->set_y(0.2);		HX_STACK_VAR(_g3,"_g3");
		HX_STACK_LINE(120)
		::PlayState_obj::scoreHeader->scale->set_x(_g3);
		HX_STACK_LINE(121)
		this->add(::PlayState_obj::scoreHeader);
		HX_STACK_LINE(124)
		::openfl::display::BitmapData _g4 = ::openfl::Assets_obj::getBitmapData(HX_CSTRING("assets/font/font.png"),null());		HX_STACK_VAR(_g4,"_g4");
		HX_STACK_LINE(124)
		::String _g5 = ::openfl::Assets_obj::getText(HX_CSTRING("assets/font/font.fnt"));		HX_STACK_VAR(_g5,"_g5");
		HX_STACK_LINE(124)
		::Xml _g6 = ::Xml_obj::parse(_g5);		HX_STACK_VAR(_g6,"_g6");
		HX_STACK_LINE(124)
		::flixel::text::pxText::PxBitmapFont _g7 = ::flixel::text::pxText::PxBitmapFont_obj::__new()->loadAngelCode(_g4,_g6);		HX_STACK_VAR(_g7,"_g7");
		HX_STACK_LINE(124)
		this->fontStyle = _g7;
		HX_STACK_LINE(127)
		::flixel::text::FlxBitmapTextField _g8 = ::flixel::text::FlxBitmapTextField_obj::__new(this->fontStyle);		HX_STACK_VAR(_g8,"_g8");
		HX_STACK_LINE(127)
		::PlayState_obj::scoreField = _g8;
		HX_STACK_LINE(128)
		Float _g9 = ::PlayState_obj::scoreField->scrollFactor->set_y((int)0);		HX_STACK_VAR(_g9,"_g9");
		HX_STACK_LINE(128)
		::PlayState_obj::scoreField->scrollFactor->set_x(_g9);
		HX_STACK_LINE(129)
		::PlayState_obj::scoreField->set_text(HX_CSTRING("1234"));
		HX_STACK_LINE(130)
		::PlayState_obj::scoreField->set_useTextColor(false);
		HX_STACK_LINE(131)
		::PlayState_obj::scoreField->set_color((int)-1159859);
		HX_STACK_LINE(132)
		::PlayState_obj::scoreField->set_x((int)45);
		HX_STACK_LINE(133)
		::PlayState_obj::scoreField->set_y((int)80);
		HX_STACK_LINE(135)
		::PlayState_obj::scoreField->set_alignment((int)3);
		HX_STACK_LINE(136)
		::PlayState_obj::scoreField->set_multiLine(true);
		HX_STACK_LINE(137)
		::PlayState_obj::scoreField->set_wordWrap(false);
		HX_STACK_LINE(138)
		::PlayState_obj::scoreField->set_fixedWidth(false);
		HX_STACK_LINE(140)
		this->add(::PlayState_obj::scoreField);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(PlayState_obj,createText,(void))

Void PlayState_obj::createBackground( ){
{
		HX_STACK_FRAME("PlayState","createBackground",0xb3a2b23b,"PlayState.createBackground","PlayState.hx",149,0xb30d7781)
		HX_STACK_THIS(this)
		HX_STACK_LINE(151)
		::flixel::FlxSprite _g = ::flixel::FlxSprite_obj::__new((int)0,(int)0,HX_CSTRING("assets/images/background/0.png"));		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(151)
		this->add(_g);
		HX_STACK_LINE(152)
		::flixel::FlxSprite _g1 = ::flixel::FlxSprite_obj::__new((int)0,(int)2048,HX_CSTRING("assets/images/background/1.png"));		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(152)
		this->add(_g1);
		HX_STACK_LINE(153)
		::flixel::FlxSprite _g2 = ::flixel::FlxSprite_obj::__new((int)0,(int)4096,HX_CSTRING("assets/images/background/2.png"));		HX_STACK_VAR(_g2,"_g2");
		HX_STACK_LINE(153)
		this->add(_g2);
		HX_STACK_LINE(154)
		::flixel::FlxSprite _g3 = ::flixel::FlxSprite_obj::__new((int)0,(int)6144,HX_CSTRING("assets/images/background/3.png"));		HX_STACK_VAR(_g3,"_g3");
		HX_STACK_LINE(154)
		this->add(_g3);
		HX_STACK_LINE(155)
		::flixel::FlxSprite _g4 = ::flixel::FlxSprite_obj::__new((int)0,(int)8192,HX_CSTRING("assets/images/background/4.png"));		HX_STACK_VAR(_g4,"_g4");
		HX_STACK_LINE(155)
		this->add(_g4);
		HX_STACK_LINE(156)
		::flixel::FlxSprite _g5 = ::flixel::FlxSprite_obj::__new((int)0,(int)10240,HX_CSTRING("assets/images/background/5.png"));		HX_STACK_VAR(_g5,"_g5");
		HX_STACK_LINE(156)
		this->add(_g5);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(PlayState_obj,createBackground,(void))

Void PlayState_obj::createPauseGameButton( ){
{
		HX_STACK_FRAME("PlayState","createPauseGameButton",0x152aa0ad,"PlayState.createPauseGameButton","PlayState.hx",170,0xb30d7781)
		HX_STACK_THIS(this)
		HX_STACK_LINE(171)
		::flixel::ui::FlxButton _g = ::flixel::ui::FlxButton_obj::__new((int)900,(int)20,HX_CSTRING(""),this->pauseGame_dyn());		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(171)
		::PlayState_obj::pauseButton = _g;
		HX_STACK_LINE(172)
		::PlayState_obj::pauseButton->loadGraphic(HX_CSTRING("assets/images/ui/pause/pause.png"),null(),null(),null(),null(),null());
		HX_STACK_LINE(173)
		Float _g1 = ::PlayState_obj::pauseButton->scrollFactor->set_y((int)0);		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(173)
		::PlayState_obj::pauseButton->scrollFactor->set_x(_g1);
		HX_STACK_LINE(174)
		this->add(::PlayState_obj::pauseButton);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(PlayState_obj,createPauseGameButton,(void))

Void PlayState_obj::pauseGame( ){
{
		HX_STACK_FRAME("PlayState","pauseGame",0x85186db7,"PlayState.pauseGame","PlayState.hx",183,0xb30d7781)
		HX_STACK_THIS(this)
		HX_STACK_LINE(184)
		::PlayState_obj::pauseButton->set_visible(false);
		HX_STACK_LINE(185)
		::PlayState_obj::scoreHeader->set_visible(false);
		HX_STACK_LINE(186)
		::PlayState_obj::scoreField->set_visible(false);
		HX_STACK_LINE(187)
		{
			HX_STACK_LINE(187)
			this->_requestSubStateReset = true;
			HX_STACK_LINE(187)
			this->_requestedSubState = ::PlayState_obj::pauseMenu;
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(PlayState_obj,pauseGame,(void))

::PauseMenu PlayState_obj::pauseMenu;

::Player PlayState_obj::player;

::flixel::group::FlxSpriteGroup PlayState_obj::killGroup;

::flixel::FlxSprite PlayState_obj::scoreHeader;

::String PlayState_obj::scoreValue;

::flixel::text::FlxBitmapTextField PlayState_obj::scoreField;

::flixel::ui::FlxButton PlayState_obj::pauseButton;

Void PlayState_obj::createPauseMenu( ){
{
		HX_STACK_FRAME("PlayState","createPauseMenu",0x7a27e608,"PlayState.createPauseMenu","PlayState.hx",160,0xb30d7781)
		HX_STACK_LINE(161)
		::PauseMenu _g = ::PauseMenu_obj::__new(null());		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(161)
		::PlayState_obj::pauseMenu = _g;
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(PlayState_obj,createPauseMenu,(void))


PlayState_obj::PlayState_obj()
{
}

void PlayState_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(PlayState);
	HX_MARK_MEMBER_NAME(fontStyle,"fontStyle");
	::flixel::FlxState_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void PlayState_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(fontStyle,"fontStyle");
	::flixel::FlxState_obj::__Visit(HX_VISIT_ARG);
}

Dynamic PlayState_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 6:
		if (HX_FIELD_EQ(inName,"player") ) { return player; }
		if (HX_FIELD_EQ(inName,"create") ) { return create_dyn(); }
		if (HX_FIELD_EQ(inName,"update") ) { return update_dyn(); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"destroy") ) { return destroy_dyn(); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"pauseMenu") ) { return pauseMenu; }
		if (HX_FIELD_EQ(inName,"killGroup") ) { return killGroup; }
		if (HX_FIELD_EQ(inName,"fontStyle") ) { return fontStyle; }
		if (HX_FIELD_EQ(inName,"pauseGame") ) { return pauseGame_dyn(); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"scoreValue") ) { return scoreValue; }
		if (HX_FIELD_EQ(inName,"scoreField") ) { return scoreField; }
		if (HX_FIELD_EQ(inName,"createText") ) { return createText_dyn(); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"scoreHeader") ) { return scoreHeader; }
		if (HX_FIELD_EQ(inName,"pauseButton") ) { return pauseButton; }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"createPauseMenu") ) { return createPauseMenu_dyn(); }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"createBackground") ) { return createBackground_dyn(); }
		break;
	case 21:
		if (HX_FIELD_EQ(inName,"createPauseGameButton") ) { return createPauseGameButton_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic PlayState_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 6:
		if (HX_FIELD_EQ(inName,"player") ) { player=inValue.Cast< ::Player >(); return inValue; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"pauseMenu") ) { pauseMenu=inValue.Cast< ::PauseMenu >(); return inValue; }
		if (HX_FIELD_EQ(inName,"killGroup") ) { killGroup=inValue.Cast< ::flixel::group::FlxSpriteGroup >(); return inValue; }
		if (HX_FIELD_EQ(inName,"fontStyle") ) { fontStyle=inValue.Cast< ::flixel::text::pxText::PxBitmapFont >(); return inValue; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"scoreValue") ) { scoreValue=inValue.Cast< ::String >(); return inValue; }
		if (HX_FIELD_EQ(inName,"scoreField") ) { scoreField=inValue.Cast< ::flixel::text::FlxBitmapTextField >(); return inValue; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"scoreHeader") ) { scoreHeader=inValue.Cast< ::flixel::FlxSprite >(); return inValue; }
		if (HX_FIELD_EQ(inName,"pauseButton") ) { pauseButton=inValue.Cast< ::flixel::ui::FlxButton >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void PlayState_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_CSTRING("fontStyle"));
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	HX_CSTRING("pauseMenu"),
	HX_CSTRING("player"),
	HX_CSTRING("killGroup"),
	HX_CSTRING("scoreHeader"),
	HX_CSTRING("scoreValue"),
	HX_CSTRING("scoreField"),
	HX_CSTRING("pauseButton"),
	HX_CSTRING("createPauseMenu"),
	String(null()) };

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsObject /*::flixel::text::pxText::PxBitmapFont*/ ,(int)offsetof(PlayState_obj,fontStyle),HX_CSTRING("fontStyle")},
	{ hx::fsUnknown, 0, null()}
};
#endif

static ::String sMemberFields[] = {
	HX_CSTRING("fontStyle"),
	HX_CSTRING("create"),
	HX_CSTRING("destroy"),
	HX_CSTRING("update"),
	HX_CSTRING("createText"),
	HX_CSTRING("createBackground"),
	HX_CSTRING("createPauseGameButton"),
	HX_CSTRING("pauseGame"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(PlayState_obj::__mClass,"__mClass");
	HX_MARK_MEMBER_NAME(PlayState_obj::pauseMenu,"pauseMenu");
	HX_MARK_MEMBER_NAME(PlayState_obj::player,"player");
	HX_MARK_MEMBER_NAME(PlayState_obj::killGroup,"killGroup");
	HX_MARK_MEMBER_NAME(PlayState_obj::scoreHeader,"scoreHeader");
	HX_MARK_MEMBER_NAME(PlayState_obj::scoreValue,"scoreValue");
	HX_MARK_MEMBER_NAME(PlayState_obj::scoreField,"scoreField");
	HX_MARK_MEMBER_NAME(PlayState_obj::pauseButton,"pauseButton");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(PlayState_obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(PlayState_obj::pauseMenu,"pauseMenu");
	HX_VISIT_MEMBER_NAME(PlayState_obj::player,"player");
	HX_VISIT_MEMBER_NAME(PlayState_obj::killGroup,"killGroup");
	HX_VISIT_MEMBER_NAME(PlayState_obj::scoreHeader,"scoreHeader");
	HX_VISIT_MEMBER_NAME(PlayState_obj::scoreValue,"scoreValue");
	HX_VISIT_MEMBER_NAME(PlayState_obj::scoreField,"scoreField");
	HX_VISIT_MEMBER_NAME(PlayState_obj::pauseButton,"pauseButton");
};

#endif

Class PlayState_obj::__mClass;

void PlayState_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("PlayState"), hx::TCanCast< PlayState_obj> ,sStaticFields,sMemberFields,
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

void PlayState_obj::__boot()
{
}

