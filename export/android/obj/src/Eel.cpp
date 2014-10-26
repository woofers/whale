#include <hxcpp.h>

#ifndef INCLUDED_Eel
#include <Eel.h>
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
#ifndef INCLUDED_flixel_animation_FlxAnimationController
#include <flixel/animation/FlxAnimationController.h>
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
#ifndef INCLUDED_flixel_util_FlxPoint
#include <flixel/util/FlxPoint.h>
#endif
#ifndef INCLUDED_flixel_util_loaders_SparrowData
#include <flixel/util/loaders/SparrowData.h>
#endif
#ifndef INCLUDED_flixel_util_loaders_TexturePackerData
#include <flixel/util/loaders/TexturePackerData.h>
#endif

Void Eel_obj::__construct(bool direction,Float posY)
{
HX_STACK_FRAME("Eel","new",0xe556bade,"Eel.new","Eel.hx",14,0x059eca52)
HX_STACK_THIS(this)
HX_STACK_ARG(direction,"direction")
HX_STACK_ARG(posY,"posY")
{
	HX_STACK_LINE(24)
	this->movingSpeed = (int)13;
	HX_STACK_LINE(33)
	super::__construct((int)0,(int)0,null());
	HX_STACK_LINE(36)
	this->setPos(direction,posY);
	HX_STACK_LINE(39)
	::flixel::util::loaders::SparrowData _g = ::flixel::util::loaders::SparrowData_obj::__new(HX_CSTRING("assets/images/sprites/eel.xml"),HX_CSTRING("assets/images/sprites/eel.png"));		HX_STACK_VAR(_g,"_g");
	HX_STACK_LINE(39)
	this->loadGraphicFromTexture(_g,null(),null());
	HX_STACK_LINE(42)
	this->animation->addByPrefix(HX_CSTRING("swim"),HX_CSTRING("Swim"),(int)9,null());
	HX_STACK_LINE(45)
	this->maxVelocity->set((int)500,(int)600);
	HX_STACK_LINE(48)
	this->animation->play(HX_CSTRING("swim"),null(),null());
}
;
	return null();
}

//Eel_obj::~Eel_obj() { }

Dynamic Eel_obj::__CreateEmpty() { return  new Eel_obj; }
hx::ObjectPtr< Eel_obj > Eel_obj::__new(bool direction,Float posY)
{  hx::ObjectPtr< Eel_obj > result = new Eel_obj();
	result->__construct(direction,posY);
	return result;}

Dynamic Eel_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< Eel_obj > result = new Eel_obj();
	result->__construct(inArgs[0],inArgs[1]);
	return result;}

Void Eel_obj::kill( ){
{
		HX_STACK_FRAME("Eel","kill",0xc4942360,"Eel.kill","Eel.hx",58,0x059eca52)
		HX_STACK_THIS(this)
		HX_STACK_LINE(58)
		this->super::kill();
	}
return null();
}


Void Eel_obj::update( ){
{
		HX_STACK_FRAME("Eel","update",0x2e79be4b,"Eel.update","Eel.hx",67,0x059eca52)
		HX_STACK_THIS(this)
		HX_STACK_LINE(69)
		if ((this->playerIsNear())){
			HX_STACK_LINE(72)
			if (((this->scale->x > (int)0))){
				HX_STACK_LINE(74)
				::flixel::util::FlxPoint _g = this->acceleration;		HX_STACK_VAR(_g,"_g");
				HX_STACK_LINE(74)
				_g->set_x((_g->x + this->movingSpeed));
			}
			else{
				HX_STACK_LINE(78)
				::flixel::util::FlxPoint _g = this->acceleration;		HX_STACK_VAR(_g,"_g");
				HX_STACK_LINE(78)
				_g->set_x((_g->x - this->movingSpeed));
			}
		}
		HX_STACK_LINE(82)
		this->super::update();
	}
return null();
}


Void Eel_obj::setPos( bool direction,Float posY){
{
		HX_STACK_FRAME("Eel","setPos",0x16e12354,"Eel.setPos","Eel.hx",92,0x059eca52)
		HX_STACK_THIS(this)
		HX_STACK_ARG(direction,"direction")
		HX_STACK_ARG(posY,"posY")
		HX_STACK_LINE(92)
		if ((direction)){
			HX_STACK_LINE(95)
			this->set_x((int)-770);
			HX_STACK_LINE(96)
			this->set_y(posY);
			HX_STACK_LINE(99)
			this->scale->set_x((int)1);
		}
		else{
			HX_STACK_LINE(104)
			this->set_x((int)1177);
			HX_STACK_LINE(105)
			this->set_y(posY);
			HX_STACK_LINE(108)
			this->scale->set_x((int)-1);
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(Eel_obj,setPos,(void))

bool Eel_obj::playerIsNear( ){
	HX_STACK_FRAME("Eel","playerIsNear",0x8351a9f5,"Eel.playerIsNear","Eel.hx",118,0x059eca52)
	HX_STACK_THIS(this)
	HX_STACK_LINE(119)
	if (((::PlayState_obj::player->acceleration->y > (int)0))){
		HX_STACK_LINE(121)
		if ((((::PlayState_obj::player->y + (int)1000) > this->y))){
			HX_STACK_LINE(123)
			return true;
		}
	}
	else{
		HX_STACK_LINE(128)
		if ((((::PlayState_obj::player->y - (int)1000) < this->y))){
			HX_STACK_LINE(130)
			return true;
		}
	}
	HX_STACK_LINE(134)
	return false;
}


HX_DEFINE_DYNAMIC_FUNC0(Eel_obj,playerIsNear,return )


Eel_obj::Eel_obj()
{
}

Dynamic Eel_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"kill") ) { return kill_dyn(); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"update") ) { return update_dyn(); }
		if (HX_FIELD_EQ(inName,"setPos") ) { return setPos_dyn(); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"movingSpeed") ) { return movingSpeed; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"playerIsNear") ) { return playerIsNear_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic Eel_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 11:
		if (HX_FIELD_EQ(inName,"movingSpeed") ) { movingSpeed=inValue.Cast< int >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void Eel_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_CSTRING("movingSpeed"));
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	String(null()) };

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsInt,(int)offsetof(Eel_obj,movingSpeed),HX_CSTRING("movingSpeed")},
	{ hx::fsUnknown, 0, null()}
};
#endif

static ::String sMemberFields[] = {
	HX_CSTRING("movingSpeed"),
	HX_CSTRING("kill"),
	HX_CSTRING("update"),
	HX_CSTRING("setPos"),
	HX_CSTRING("playerIsNear"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(Eel_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(Eel_obj::__mClass,"__mClass");
};

#endif

Class Eel_obj::__mClass;

void Eel_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("Eel"), hx::TCanCast< Eel_obj> ,sStaticFields,sMemberFields,
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

void Eel_obj::__boot()
{
}

