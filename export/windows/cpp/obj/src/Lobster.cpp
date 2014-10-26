#include <hxcpp.h>

#ifndef INCLUDED_Lobster
#include <Lobster.h>
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
#ifndef INCLUDED_flixel_animation_FlxAnimationController
#include <flixel/animation/FlxAnimationController.h>
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

Void Lobster_obj::__construct(int direction,Float posY)
{
HX_STACK_FRAME("Lobster","new",0x10944a9f,"Lobster.new","Lobster.hx",30,0xf4982db1)
HX_STACK_THIS(this)
HX_STACK_ARG(direction,"direction")
HX_STACK_ARG(posY,"posY")
{
	HX_STACK_LINE(31)
	super::__construct((int)0,(int)0,null());
	HX_STACK_LINE(33)
	this->setPos(direction,posY);
	HX_STACK_LINE(36)
	::flixel::util::loaders::SparrowData _g = ::flixel::util::loaders::SparrowData_obj::__new(HX_CSTRING("assets/images/sprites/lobster.xml"),HX_CSTRING("assets/images/sprites/lobster.png"));		HX_STACK_VAR(_g,"_g");
	HX_STACK_LINE(36)
	this->loadGraphicFromTexture(_g,null(),null());
	HX_STACK_LINE(39)
	this->animation->addByPrefix(HX_CSTRING("grab"),HX_CSTRING("Grab"),(int)9,null());
	HX_STACK_LINE(42)
	this->maxVelocity->set((int)500,(int)600);
	HX_STACK_LINE(45)
	this->animation->play(HX_CSTRING("grab"),null(),null());
}
;
	return null();
}

//Lobster_obj::~Lobster_obj() { }

Dynamic Lobster_obj::__CreateEmpty() { return  new Lobster_obj; }
hx::ObjectPtr< Lobster_obj > Lobster_obj::__new(int direction,Float posY)
{  hx::ObjectPtr< Lobster_obj > result = new Lobster_obj();
	result->__construct(direction,posY);
	return result;}

Dynamic Lobster_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< Lobster_obj > result = new Lobster_obj();
	result->__construct(inArgs[0],inArgs[1]);
	return result;}

Void Lobster_obj::kill( ){
{
		HX_STACK_FRAME("Lobster","kill",0x6f345c7f,"Lobster.kill","Lobster.hx",55,0xf4982db1)
		HX_STACK_THIS(this)
		HX_STACK_LINE(55)
		this->super::kill();
	}
return null();
}


Void Lobster_obj::update( ){
{
		HX_STACK_FRAME("Lobster","update",0xec71bd2a,"Lobster.update","Lobster.hx",65,0xf4982db1)
		HX_STACK_THIS(this)
		HX_STACK_LINE(65)
		this->super::update();
	}
return null();
}


Void Lobster_obj::setPos( int direction,Float posY){
{
		HX_STACK_FRAME("Lobster","setPos",0xd4d92233,"Lobster.setPos","Lobster.hx",75,0xf4982db1)
		HX_STACK_THIS(this)
		HX_STACK_ARG(direction,"direction")
		HX_STACK_ARG(posY,"posY")
		HX_STACK_LINE(75)
		switch( (int)(direction)){
			case (int)0: {
				HX_STACK_LINE(81)
				this->set_x((int)-100);
				HX_STACK_LINE(82)
				this->set_y(posY);
				HX_STACK_LINE(85)
				this->scale->set_x((int)1);
			}
			;break;
			case (int)1: {
				HX_STACK_LINE(91)
				this->set_x((int)800);
				HX_STACK_LINE(92)
				this->set_y(posY);
				HX_STACK_LINE(95)
				this->scale->set_x((int)-1);
			}
			;break;
			default: {
				HX_STACK_LINE(101)
				this->set_x((int)350);
				HX_STACK_LINE(102)
				this->set_y(posY);
				HX_STACK_LINE(105)
				this->scale->set_x((int)1);
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(Lobster_obj,setPos,(void))


Lobster_obj::Lobster_obj()
{
}

Dynamic Lobster_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"kill") ) { return kill_dyn(); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"update") ) { return update_dyn(); }
		if (HX_FIELD_EQ(inName,"setPos") ) { return setPos_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic Lobster_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	return super::__SetField(inName,inValue,inCallProp);
}

void Lobster_obj::__GetFields(Array< ::String> &outFields)
{
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	String(null()) };

#if HXCPP_SCRIPTABLE
static hx::StorageInfo *sMemberStorageInfo = 0;
#endif

static ::String sMemberFields[] = {
	HX_CSTRING("kill"),
	HX_CSTRING("update"),
	HX_CSTRING("setPos"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(Lobster_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(Lobster_obj::__mClass,"__mClass");
};

#endif

Class Lobster_obj::__mClass;

void Lobster_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("Lobster"), hx::TCanCast< Lobster_obj> ,sStaticFields,sMemberFields,
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

void Lobster_obj::__boot()
{
}

