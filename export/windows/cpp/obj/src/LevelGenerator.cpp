#include <hxcpp.h>

#ifndef INCLUDED_Eel
#include <Eel.h>
#endif
#ifndef INCLUDED_LevelGenerator
#include <LevelGenerator.h>
#endif
#ifndef INCLUDED_Lobster
#include <Lobster.h>
#endif
#ifndef INCLUDED_PlayState
#include <PlayState.h>
#endif
#ifndef INCLUDED_Player
#include <Player.h>
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
#ifndef INCLUDED_flixel_util_FlxPoint
#include <flixel/util/FlxPoint.h>
#endif
#ifndef INCLUDED_flixel_util_FlxRandom
#include <flixel/util/FlxRandom.h>
#endif
#ifndef INCLUDED_haxe_Log
#include <haxe/Log.h>
#endif

Void LevelGenerator_obj::__construct()
{
	return null();
}

//LevelGenerator_obj::~LevelGenerator_obj() { }

Dynamic LevelGenerator_obj::__CreateEmpty() { return  new LevelGenerator_obj; }
hx::ObjectPtr< LevelGenerator_obj > LevelGenerator_obj::__new()
{  hx::ObjectPtr< LevelGenerator_obj > result = new LevelGenerator_obj();
	result->__construct();
	return result;}

Dynamic LevelGenerator_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< LevelGenerator_obj > result = new LevelGenerator_obj();
	result->__construct();
	return result;}

::Eel LevelGenerator_obj::eel;

::Lobster LevelGenerator_obj::lobster;

int LevelGenerator_obj::lobsterRoll;

bool LevelGenerator_obj::isFirstLobster;

int LevelGenerator_obj::y;

int LevelGenerator_obj::ySpacingMax;

int LevelGenerator_obj::ySpacingMin;

int LevelGenerator_obj::lastSpawned;

int LevelGenerator_obj::eelCode;

int LevelGenerator_obj::lobsterCode;

Void LevelGenerator_obj::generate( ){
{
		HX_STACK_FRAME("LevelGenerator","generate",0xbc8bf534,"LevelGenerator.generate","LevelGenerator.hx",51,0x1b8157cf)
		HX_STACK_LINE(52)
		int _g = ::LevelGenerator_obj::startY();		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(52)
		::LevelGenerator_obj::y = _g;
		HX_STACK_LINE(54)
		{
			HX_STACK_LINE(54)
			int _g1 = (int)0;		HX_STACK_VAR(_g1,"_g1");
			HX_STACK_LINE(54)
			while((true)){
				HX_STACK_LINE(54)
				if ((!(((_g1 < (int)14))))){
					HX_STACK_LINE(54)
					break;
				}
				HX_STACK_LINE(54)
				int i = (_g1)++;		HX_STACK_VAR(i,"i");
				HX_STACK_LINE(56)
				if (((::PlayState_obj::player->acceleration->y > (int)0))){
					HX_STACK_LINE(58)
					int _g11 = ::flixel::util::FlxRandom_obj::intRanged(::LevelGenerator_obj::ySpacingMin,::LevelGenerator_obj::ySpacingMax,null());		HX_STACK_VAR(_g11,"_g11");
					HX_STACK_LINE(58)
					hx::AddEq(::LevelGenerator_obj::y,_g11);
				}
				else{
					HX_STACK_LINE(62)
					int _g2 = ::flixel::util::FlxRandom_obj::intRanged(::LevelGenerator_obj::ySpacingMin,::LevelGenerator_obj::ySpacingMax,null());		HX_STACK_VAR(_g2,"_g2");
					HX_STACK_LINE(62)
					hx::SubEq(::LevelGenerator_obj::y,_g2);
				}
				HX_STACK_LINE(66)
				{
					HX_STACK_LINE(66)
					int _g11 = ::LevelGenerator_obj::random();		HX_STACK_VAR(_g11,"_g11");
					HX_STACK_LINE(66)
					switch( (int)(_g11)){
						case (int)0: {
							HX_STACK_LINE(70)
							Float _g3 = ::flixel::util::FlxRandom_obj::floatRanged((int)0,(int)100,null());		HX_STACK_VAR(_g3,"_g3");
							HX_STACK_LINE(70)
							bool _g4 = (_g3 < (int)50);		HX_STACK_VAR(_g4,"_g4");
							HX_STACK_LINE(70)
							::LevelGenerator_obj::addEel(_g4,::LevelGenerator_obj::y);
						}
						;break;
						case (int)1: {
							HX_STACK_LINE(74)
							::LevelGenerator_obj::isFirstLobster = true;
							HX_STACK_LINE(76)
							{
								HX_STACK_LINE(76)
								int _g3 = (int)0;		HX_STACK_VAR(_g3,"_g3");
								HX_STACK_LINE(76)
								int _g2 = ::flixel::util::FlxRandom_obj::intRanged((int)1,(int)2,null());		HX_STACK_VAR(_g2,"_g2");
								HX_STACK_LINE(76)
								while((true)){
									HX_STACK_LINE(76)
									if ((!(((_g3 < _g2))))){
										HX_STACK_LINE(76)
										break;
									}
									HX_STACK_LINE(76)
									int i1 = (_g3)++;		HX_STACK_VAR(i1,"i1");
									HX_STACK_LINE(78)
									::LevelGenerator_obj::addLobster(::LevelGenerator_obj::y);
								}
							}
						}
						;break;
						case (int)2: {
							HX_STACK_LINE(83)
							::haxe::Log_obj::trace((int)2,hx::SourceInfo(HX_CSTRING("LevelGenerator.hx"),83,HX_CSTRING("LevelGenerator"),HX_CSTRING("generate")));
						}
						;break;
						default: {
							HX_STACK_LINE(87)
							::haxe::Log_obj::trace(HX_CSTRING("default"),hx::SourceInfo(HX_CSTRING("LevelGenerator.hx"),87,HX_CSTRING("LevelGenerator"),HX_CSTRING("generate")));
						}
					}
				}
			}
		}
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(LevelGenerator_obj,generate,(void))

Void LevelGenerator_obj::addEel( bool direction,Float posY){
{
		HX_STACK_FRAME("LevelGenerator","addEel",0x6e35d4aa,"LevelGenerator.addEel","LevelGenerator.hx",98,0x1b8157cf)
		HX_STACK_ARG(direction,"direction")
		HX_STACK_ARG(posY,"posY")
		HX_STACK_LINE(99)
		::Eel _g = ::Eel_obj::__new(direction,posY);		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(99)
		::LevelGenerator_obj::eel = _g;
		HX_STACK_LINE(100)
		::PlayState_obj::killGroup->add(::LevelGenerator_obj::eel);
		HX_STACK_LINE(101)
		::LevelGenerator_obj::lastSpawned = (int)0;
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(LevelGenerator_obj,addEel,(void))

Void LevelGenerator_obj::addLobster( Float posY){
{
		HX_STACK_FRAME("LevelGenerator","addLobster",0xaed066eb,"LevelGenerator.addLobster","LevelGenerator.hx",110,0x1b8157cf)
		HX_STACK_ARG(posY,"posY")
		HX_STACK_LINE(113)
		if ((::LevelGenerator_obj::isFirstLobster)){
			HX_STACK_LINE(115)
			int _g = ::flixel::util::FlxRandom_obj::intRanged((int)0,(int)1,null());		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(115)
			::LevelGenerator_obj::lobsterRoll = _g;
		}
		else{
			HX_STACK_LINE(119)
			if (((::LevelGenerator_obj::lobsterRoll == (int)1))){
				HX_STACK_LINE(121)
				::LevelGenerator_obj::lobsterRoll = (int)0;
			}
			else{
				HX_STACK_LINE(123)
				if (((::LevelGenerator_obj::lobsterRoll == (int)0))){
					HX_STACK_LINE(125)
					::LevelGenerator_obj::lobsterRoll = (int)1;
				}
			}
		}
		HX_STACK_LINE(129)
		::Lobster _g1 = ::Lobster_obj::__new(::LevelGenerator_obj::lobsterRoll,posY);		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(129)
		::LevelGenerator_obj::lobster = _g1;
		HX_STACK_LINE(130)
		::PlayState_obj::killGroup->add(::LevelGenerator_obj::lobster);
		HX_STACK_LINE(132)
		::LevelGenerator_obj::lastSpawned = (int)1;
		HX_STACK_LINE(134)
		::LevelGenerator_obj::isFirstLobster = false;
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(LevelGenerator_obj,addLobster,(void))

Void LevelGenerator_obj::removeEnemies( ){
{
		HX_STACK_FRAME("LevelGenerator","removeEnemies",0xbe041263,"LevelGenerator.removeEnemies","LevelGenerator.hx",144,0x1b8157cf)
		HX_STACK_LINE(144)
		int _g1 = (int)0;		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(144)
		int _g = ::PlayState_obj::killGroup->group->countLiving();		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(144)
		while((true)){
			HX_STACK_LINE(144)
			if ((!(((_g1 < _g))))){
				HX_STACK_LINE(144)
				break;
			}
			HX_STACK_LINE(144)
			int i = (_g1)++;		HX_STACK_VAR(i,"i");
			HX_STACK_LINE(146)
			::flixel::FlxSprite _g2 = ::PlayState_obj::killGroup->group->getFirstAlive();		HX_STACK_VAR(_g2,"_g2");
			HX_STACK_LINE(146)
			::PlayState_obj::killGroup->remove(_g2,null());
		}
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(LevelGenerator_obj,removeEnemies,(void))

int LevelGenerator_obj::startY( ){
	HX_STACK_FRAME("LevelGenerator","startY",0xd53229f6,"LevelGenerator.startY","LevelGenerator.hx",156,0x1b8157cf)
	HX_STACK_LINE(157)
	if (((::PlayState_obj::player->acceleration->y > (int)0))){
		HX_STACK_LINE(159)
		return ((::Player_obj::switchDirrectionTop + (int)500) + (int)450);
	}
	HX_STACK_LINE(162)
	return ((::Player_obj::switchDirrectionBottom - (int)500) - (int)450);
}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(LevelGenerator_obj,startY,return )

Void LevelGenerator_obj::reset( ){
{
		HX_STACK_FRAME("LevelGenerator","reset",0x0b4c8e70,"LevelGenerator.reset","LevelGenerator.hx",171,0x1b8157cf)
		HX_STACK_LINE(172)
		::LevelGenerator_obj::removeEnemies();
		HX_STACK_LINE(173)
		::LevelGenerator_obj::generate();
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(LevelGenerator_obj,reset,(void))

int LevelGenerator_obj::random( ){
	HX_STACK_FRAME("LevelGenerator","random",0x86c6ea42,"LevelGenerator.random","LevelGenerator.hx",183,0x1b8157cf)
	HX_STACK_LINE(183)
	if (((::LevelGenerator_obj::lastSpawned == ::LevelGenerator_obj::eelCode))){
		HX_STACK_LINE(185)
		Float _g = ::flixel::util::FlxRandom_obj::floatRanged((int)0,(int)100,null());		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(185)
		if ((!(((_g < (int)38))))){
			HX_STACK_LINE(187)
			return ::LevelGenerator_obj::eelCode;
		}
		else{
			HX_STACK_LINE(191)
			return ::LevelGenerator_obj::lobsterCode;
		}
	}
	else{
		HX_STACK_LINE(194)
		if (((::LevelGenerator_obj::lastSpawned == ::LevelGenerator_obj::lobsterCode))){
			HX_STACK_LINE(196)
			Float _g1 = ::flixel::util::FlxRandom_obj::floatRanged((int)0,(int)100,null());		HX_STACK_VAR(_g1,"_g1");
			HX_STACK_LINE(196)
			if ((!(((_g1 < (int)35))))){
				HX_STACK_LINE(198)
				return ::LevelGenerator_obj::eelCode;
			}
			HX_STACK_LINE(201)
			return ::LevelGenerator_obj::lobsterCode;
		}
		else{
			HX_STACK_LINE(205)
			return (int)0;
		}
	}
	HX_STACK_LINE(183)
	return (int)0;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(LevelGenerator_obj,random,return )


LevelGenerator_obj::LevelGenerator_obj()
{
}

Dynamic LevelGenerator_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 1:
		if (HX_FIELD_EQ(inName,"y") ) { return y; }
		break;
	case 3:
		if (HX_FIELD_EQ(inName,"eel") ) { return eel; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"reset") ) { return reset_dyn(); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"addEel") ) { return addEel_dyn(); }
		if (HX_FIELD_EQ(inName,"startY") ) { return startY_dyn(); }
		if (HX_FIELD_EQ(inName,"random") ) { return random_dyn(); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"lobster") ) { return lobster; }
		if (HX_FIELD_EQ(inName,"eelCode") ) { return eelCode; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"generate") ) { return generate_dyn(); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"addLobster") ) { return addLobster_dyn(); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"lobsterRoll") ) { return lobsterRoll; }
		if (HX_FIELD_EQ(inName,"ySpacingMax") ) { return ySpacingMax; }
		if (HX_FIELD_EQ(inName,"ySpacingMin") ) { return ySpacingMin; }
		if (HX_FIELD_EQ(inName,"lastSpawned") ) { return lastSpawned; }
		if (HX_FIELD_EQ(inName,"lobsterCode") ) { return lobsterCode; }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"removeEnemies") ) { return removeEnemies_dyn(); }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"isFirstLobster") ) { return isFirstLobster; }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic LevelGenerator_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 1:
		if (HX_FIELD_EQ(inName,"y") ) { y=inValue.Cast< int >(); return inValue; }
		break;
	case 3:
		if (HX_FIELD_EQ(inName,"eel") ) { eel=inValue.Cast< ::Eel >(); return inValue; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"lobster") ) { lobster=inValue.Cast< ::Lobster >(); return inValue; }
		if (HX_FIELD_EQ(inName,"eelCode") ) { eelCode=inValue.Cast< int >(); return inValue; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"lobsterRoll") ) { lobsterRoll=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"ySpacingMax") ) { ySpacingMax=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"ySpacingMin") ) { ySpacingMin=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"lastSpawned") ) { lastSpawned=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"lobsterCode") ) { lobsterCode=inValue.Cast< int >(); return inValue; }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"isFirstLobster") ) { isFirstLobster=inValue.Cast< bool >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void LevelGenerator_obj::__GetFields(Array< ::String> &outFields)
{
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	HX_CSTRING("eel"),
	HX_CSTRING("lobster"),
	HX_CSTRING("lobsterRoll"),
	HX_CSTRING("isFirstLobster"),
	HX_CSTRING("y"),
	HX_CSTRING("ySpacingMax"),
	HX_CSTRING("ySpacingMin"),
	HX_CSTRING("lastSpawned"),
	HX_CSTRING("eelCode"),
	HX_CSTRING("lobsterCode"),
	HX_CSTRING("generate"),
	HX_CSTRING("addEel"),
	HX_CSTRING("addLobster"),
	HX_CSTRING("removeEnemies"),
	HX_CSTRING("startY"),
	HX_CSTRING("reset"),
	HX_CSTRING("random"),
	String(null()) };

#if HXCPP_SCRIPTABLE
static hx::StorageInfo *sMemberStorageInfo = 0;
#endif

static ::String sMemberFields[] = {
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(LevelGenerator_obj::__mClass,"__mClass");
	HX_MARK_MEMBER_NAME(LevelGenerator_obj::eel,"eel");
	HX_MARK_MEMBER_NAME(LevelGenerator_obj::lobster,"lobster");
	HX_MARK_MEMBER_NAME(LevelGenerator_obj::lobsterRoll,"lobsterRoll");
	HX_MARK_MEMBER_NAME(LevelGenerator_obj::isFirstLobster,"isFirstLobster");
	HX_MARK_MEMBER_NAME(LevelGenerator_obj::y,"y");
	HX_MARK_MEMBER_NAME(LevelGenerator_obj::ySpacingMax,"ySpacingMax");
	HX_MARK_MEMBER_NAME(LevelGenerator_obj::ySpacingMin,"ySpacingMin");
	HX_MARK_MEMBER_NAME(LevelGenerator_obj::lastSpawned,"lastSpawned");
	HX_MARK_MEMBER_NAME(LevelGenerator_obj::eelCode,"eelCode");
	HX_MARK_MEMBER_NAME(LevelGenerator_obj::lobsterCode,"lobsterCode");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(LevelGenerator_obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(LevelGenerator_obj::eel,"eel");
	HX_VISIT_MEMBER_NAME(LevelGenerator_obj::lobster,"lobster");
	HX_VISIT_MEMBER_NAME(LevelGenerator_obj::lobsterRoll,"lobsterRoll");
	HX_VISIT_MEMBER_NAME(LevelGenerator_obj::isFirstLobster,"isFirstLobster");
	HX_VISIT_MEMBER_NAME(LevelGenerator_obj::y,"y");
	HX_VISIT_MEMBER_NAME(LevelGenerator_obj::ySpacingMax,"ySpacingMax");
	HX_VISIT_MEMBER_NAME(LevelGenerator_obj::ySpacingMin,"ySpacingMin");
	HX_VISIT_MEMBER_NAME(LevelGenerator_obj::lastSpawned,"lastSpawned");
	HX_VISIT_MEMBER_NAME(LevelGenerator_obj::eelCode,"eelCode");
	HX_VISIT_MEMBER_NAME(LevelGenerator_obj::lobsterCode,"lobsterCode");
};

#endif

Class LevelGenerator_obj::__mClass;

void LevelGenerator_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("LevelGenerator"), hx::TCanCast< LevelGenerator_obj> ,sStaticFields,sMemberFields,
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

void LevelGenerator_obj::__boot()
{
	ySpacingMax= (int)600;
	ySpacingMin= (int)520;
	eelCode= (int)0;
	lobsterCode= (int)1;
}

