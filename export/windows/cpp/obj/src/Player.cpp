#include <hxcpp.h>

#ifndef INCLUDED_LevelGenerator
#include <LevelGenerator.h>
#endif
#ifndef INCLUDED_MyInput
#include <MyInput.h>
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
#ifndef INCLUDED_flixel_animation_FlxAnimationController
#include <flixel/animation/FlxAnimationController.h>
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
#ifndef INCLUDED_flixel_util_FlxCollision
#include <flixel/util/FlxCollision.h>
#endif
#ifndef INCLUDED_flixel_util_FlxPoint
#include <flixel/util/FlxPoint.h>
#endif
#ifndef INCLUDED_flixel_util_loaders_SparrowData
#include <flixel/util/loaders/SparrowData.h>
#endif
#ifndef INCLUDED_flixel_util_loaders_TexturePackerData
#include <flixel/util/loaders/TexturePackerData.h>
#endif

Void Player_obj::__construct()
{
HX_STACK_FRAME("Player","new",0x8d5554f3,"Player.new","Player.hx",15,0xa27fc9dd)
HX_STACK_THIS(this)
{
	HX_STACK_LINE(31)
	this->hitTime = (int)0;
	HX_STACK_LINE(30)
	this->swimmingSpeed = (int)600;
	HX_STACK_LINE(41)
	::Player_obj::startX = ((Float(::flixel::FlxG_obj::width) / Float((int)3)) + (int)100);
	HX_STACK_LINE(42)
	::Player_obj::startY = ::Player_obj::switchDirrectionTop;
	HX_STACK_LINE(45)
	super::__construct(::Player_obj::startX,::Player_obj::startY,null());
	HX_STACK_LINE(48)
	::flixel::util::loaders::SparrowData _g = ::flixel::util::loaders::SparrowData_obj::__new(HX_CSTRING("assets/images/sprites/player.xml"),HX_CSTRING("assets/images/sprites/player.png"));		HX_STACK_VAR(_g,"_g");
	HX_STACK_LINE(48)
	this->loadGraphicFromTexture(_g,null(),null());
	HX_STACK_LINE(51)
	this->animation->addByPrefix(HX_CSTRING("swim"),HX_CSTRING("Swim"),(int)11,null());
	HX_STACK_LINE(54)
	this->maxVelocity->set((int)500,(int)600);
	HX_STACK_LINE(57)
	this->acceleration->set_y(this->swimmingSpeed);
	HX_STACK_LINE(60)
	this->drag->set_x((this->maxVelocity->x * (int)4));
	HX_STACK_LINE(62)
	this->hitBox();
}
;
	return null();
}

//Player_obj::~Player_obj() { }

Dynamic Player_obj::__CreateEmpty() { return  new Player_obj; }
hx::ObjectPtr< Player_obj > Player_obj::__new()
{  hx::ObjectPtr< Player_obj > result = new Player_obj();
	result->__construct();
	return result;}

Dynamic Player_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< Player_obj > result = new Player_obj();
	result->__construct();
	return result;}

Void Player_obj::update( ){
{
		HX_STACK_FRAME("Player","update",0xf1f8df56,"Player.update","Player.hx",71,0xa27fc9dd)
		HX_STACK_THIS(this)
		HX_STACK_LINE(73)
		this->acceleration->set_x((int)0);
		HX_STACK_LINE(76)
		this->switchDirrection();
		HX_STACK_LINE(79)
		this->screenBounds();
		HX_STACK_LINE(82)
		if ((this->hitDetected())){
			HX_STACK_LINE(84)
			this->hitTolerance();
		}
		else{
			HX_STACK_LINE(88)
			this->hitTime = (int)0;
		}
		HX_STACK_LINE(92)
		if (((bool((this->acceleration->y > (int)0)) || bool((this->acceleration->y < (int)0))))){
			HX_STACK_LINE(94)
			this->animation->play(HX_CSTRING("swim"),null(),null());
		}
		HX_STACK_LINE(98)
		if ((::MyInput_obj::left())){
			HX_STACK_LINE(100)
			this->acceleration->set_x((-(this->maxVelocity->x) * (int)18));
		}
		else{
			HX_STACK_LINE(104)
			if ((::MyInput_obj::right())){
				HX_STACK_LINE(106)
				this->acceleration->set_x((this->maxVelocity->x * (int)18));
			}
			else{
			}
		}
		HX_STACK_LINE(113)
		this->super::update();
	}
return null();
}


Void Player_obj::resetPlayer( ){
{
		HX_STACK_FRAME("Player","resetPlayer",0x68923e23,"Player.resetPlayer","Player.hx",122,0xa27fc9dd)
		HX_STACK_THIS(this)
		HX_STACK_LINE(123)
		this->set_x(::Player_obj::startX);
		HX_STACK_LINE(124)
		this->set_y(::Player_obj::startY);
		HX_STACK_LINE(126)
		this->hitTime = (int)0;
		HX_STACK_LINE(128)
		::LevelGenerator_obj::reset();
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(Player_obj,resetPlayer,(void))

Void Player_obj::hitBox( ){
{
		HX_STACK_FRAME("Player","hitBox",0xc202fec5,"Player.hitBox","Player.hx",138,0xa27fc9dd)
		HX_STACK_THIS(this)
		HX_STACK_LINE(138)
		if (((this->scale->x > (int)0))){
			HX_STACK_LINE(140)
			this->set_width((int)171);
			HX_STACK_LINE(141)
			this->set_height((int)150);
			HX_STACK_LINE(142)
			this->offset->set_x((int)17);
			HX_STACK_LINE(143)
			this->offset->set_y((int)249);
		}
		else{
			HX_STACK_LINE(147)
			this->set_width((int)171);
			HX_STACK_LINE(148)
			this->set_height((int)150);
			HX_STACK_LINE(149)
			this->offset->set_x((int)147);
			HX_STACK_LINE(150)
			this->offset->set_y((int)122);
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(Player_obj,hitBox,(void))

Void Player_obj::switchDirrection( ){
{
		HX_STACK_FRAME("Player","switchDirrection",0x0bb4e818,"Player.switchDirrection","Player.hx",160,0xa27fc9dd)
		HX_STACK_THIS(this)
		HX_STACK_LINE(162)
		if (((  (((this->y > ::Player_obj::switchDirrectionBottom))) ? bool(this->isGoingDown()) : bool(false) ))){
			HX_STACK_LINE(165)
			this->acceleration->set_y(-(this->swimmingSpeed));
			HX_STACK_LINE(168)
			this->scale->set_x(-(this->scale->x));
			HX_STACK_LINE(169)
			this->scale->set_y(-(this->scale->y));
			HX_STACK_LINE(172)
			this->hitBox();
			HX_STACK_LINE(174)
			::LevelGenerator_obj::reset();
		}
		HX_STACK_LINE(178)
		if (((  (((this->y < ::Player_obj::switchDirrectionTop))) ? bool(!(this->isGoingDown())) : bool(false) ))){
			HX_STACK_LINE(181)
			this->acceleration->set_y(this->swimmingSpeed);
			HX_STACK_LINE(184)
			this->scale->set_x(-(this->scale->x));
			HX_STACK_LINE(185)
			this->scale->set_y(-(this->scale->y));
			HX_STACK_LINE(188)
			this->hitBox();
			HX_STACK_LINE(190)
			::LevelGenerator_obj::reset();
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(Player_obj,switchDirrection,(void))

bool Player_obj::isGoingDown( ){
	HX_STACK_FRAME("Player","isGoingDown",0xa0628b85,"Player.isGoingDown","Player.hx",200,0xa27fc9dd)
	HX_STACK_THIS(this)
	HX_STACK_LINE(201)
	if (((this->acceleration->y > (int)0))){
		HX_STACK_LINE(203)
		return true;
	}
	HX_STACK_LINE(206)
	return false;
}


HX_DEFINE_DYNAMIC_FUNC0(Player_obj,isGoingDown,return )

bool Player_obj::hitDetected( ){
	HX_STACK_FRAME("Player","hitDetected",0xc3143a88,"Player.hitDetected","Player.hx",216,0xa27fc9dd)
	HX_STACK_THIS(this)
	HX_STACK_LINE(218)
	{
		HX_STACK_LINE(218)
		int _g1 = (int)0;		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(218)
		int _g = ::PlayState_obj::killGroup->group->countLiving();		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(218)
		while((true)){
			HX_STACK_LINE(218)
			if ((!(((_g1 < _g))))){
				HX_STACK_LINE(218)
				break;
			}
			HX_STACK_LINE(218)
			int i = (_g1)++;		HX_STACK_VAR(i,"i");
			HX_STACK_LINE(220)
			if ((::flixel::util::FlxCollision_obj::pixelPerfectCheck(hx::ObjectPtr<OBJ_>(this),::PlayState_obj::killGroup->group->members->__GetItem(i),null(),null()))){
				HX_STACK_LINE(222)
				return true;
			}
		}
	}
	HX_STACK_LINE(226)
	return false;
}


HX_DEFINE_DYNAMIC_FUNC0(Player_obj,hitDetected,return )

Void Player_obj::hitTolerance( ){
{
		HX_STACK_FRAME("Player","hitTolerance",0xa37cc547,"Player.hitTolerance","Player.hx",235,0xa27fc9dd)
		HX_STACK_THIS(this)
		HX_STACK_LINE(236)
		(this->hitTime)++;
		HX_STACK_LINE(238)
		if (((this->hitTime > (int)24))){
			HX_STACK_LINE(240)
			this->resetPlayer();
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(Player_obj,hitTolerance,(void))

Void Player_obj::screenBounds( ){
{
		HX_STACK_FRAME("Player","screenBounds",0x5eac600e,"Player.screenBounds","Player.hx",250,0xa27fc9dd)
		HX_STACK_THIS(this)
		HX_STACK_LINE(252)
		if (((this->x <= (int)0))){
			HX_STACK_LINE(252)
			this->set_x((int)0);
		}
		HX_STACK_LINE(253)
		if (((this->x >= (int)900))){
			HX_STACK_LINE(253)
			this->set_x((int)900);
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(Player_obj,screenBounds,(void))

Float Player_obj::startX;

Float Player_obj::startY;

int Player_obj::switchDirrectionTop;

int Player_obj::switchDirrectionBottom;


Player_obj::Player_obj()
{
}

Dynamic Player_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 6:
		if (HX_FIELD_EQ(inName,"startX") ) { return startX; }
		if (HX_FIELD_EQ(inName,"startY") ) { return startY; }
		if (HX_FIELD_EQ(inName,"update") ) { return update_dyn(); }
		if (HX_FIELD_EQ(inName,"hitBox") ) { return hitBox_dyn(); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"hitTime") ) { return hitTime; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"resetPlayer") ) { return resetPlayer_dyn(); }
		if (HX_FIELD_EQ(inName,"isGoingDown") ) { return isGoingDown_dyn(); }
		if (HX_FIELD_EQ(inName,"hitDetected") ) { return hitDetected_dyn(); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"hitTolerance") ) { return hitTolerance_dyn(); }
		if (HX_FIELD_EQ(inName,"screenBounds") ) { return screenBounds_dyn(); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"swimmingSpeed") ) { return swimmingSpeed; }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"switchDirrection") ) { return switchDirrection_dyn(); }
		break;
	case 19:
		if (HX_FIELD_EQ(inName,"switchDirrectionTop") ) { return switchDirrectionTop; }
		break;
	case 22:
		if (HX_FIELD_EQ(inName,"switchDirrectionBottom") ) { return switchDirrectionBottom; }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic Player_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 6:
		if (HX_FIELD_EQ(inName,"startX") ) { startX=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"startY") ) { startY=inValue.Cast< Float >(); return inValue; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"hitTime") ) { hitTime=inValue.Cast< int >(); return inValue; }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"swimmingSpeed") ) { swimmingSpeed=inValue.Cast< int >(); return inValue; }
		break;
	case 19:
		if (HX_FIELD_EQ(inName,"switchDirrectionTop") ) { switchDirrectionTop=inValue.Cast< int >(); return inValue; }
		break;
	case 22:
		if (HX_FIELD_EQ(inName,"switchDirrectionBottom") ) { switchDirrectionBottom=inValue.Cast< int >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void Player_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_CSTRING("swimmingSpeed"));
	outFields->push(HX_CSTRING("hitTime"));
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	HX_CSTRING("startX"),
	HX_CSTRING("startY"),
	HX_CSTRING("switchDirrectionTop"),
	HX_CSTRING("switchDirrectionBottom"),
	String(null()) };

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsInt,(int)offsetof(Player_obj,swimmingSpeed),HX_CSTRING("swimmingSpeed")},
	{hx::fsInt,(int)offsetof(Player_obj,hitTime),HX_CSTRING("hitTime")},
	{ hx::fsUnknown, 0, null()}
};
#endif

static ::String sMemberFields[] = {
	HX_CSTRING("swimmingSpeed"),
	HX_CSTRING("hitTime"),
	HX_CSTRING("update"),
	HX_CSTRING("resetPlayer"),
	HX_CSTRING("hitBox"),
	HX_CSTRING("switchDirrection"),
	HX_CSTRING("isGoingDown"),
	HX_CSTRING("hitDetected"),
	HX_CSTRING("hitTolerance"),
	HX_CSTRING("screenBounds"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(Player_obj::__mClass,"__mClass");
	HX_MARK_MEMBER_NAME(Player_obj::startX,"startX");
	HX_MARK_MEMBER_NAME(Player_obj::startY,"startY");
	HX_MARK_MEMBER_NAME(Player_obj::switchDirrectionTop,"switchDirrectionTop");
	HX_MARK_MEMBER_NAME(Player_obj::switchDirrectionBottom,"switchDirrectionBottom");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(Player_obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(Player_obj::startX,"startX");
	HX_VISIT_MEMBER_NAME(Player_obj::startY,"startY");
	HX_VISIT_MEMBER_NAME(Player_obj::switchDirrectionTop,"switchDirrectionTop");
	HX_VISIT_MEMBER_NAME(Player_obj::switchDirrectionBottom,"switchDirrectionBottom");
};

#endif

Class Player_obj::__mClass;

void Player_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("Player"), hx::TCanCast< Player_obj> ,sStaticFields,sMemberFields,
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

void Player_obj::__boot()
{
	switchDirrectionTop= (int)460;
	switchDirrectionBottom= (int)10760;
}

