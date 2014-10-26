#ifndef INCLUDED_flixel_input_touch_FlxTouch
#define INCLUDED_flixel_input_touch_FlxTouch

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#include <flixel/util/FlxPoint.h>
#include <flixel/interfaces/IFlxDestroyable.h>
HX_DECLARE_CLASS3(flixel,input,touch,FlxTouch)
HX_DECLARE_CLASS2(flixel,interfaces,IFlxDestroyable)
HX_DECLARE_CLASS2(flixel,interfaces,IFlxPooled)
HX_DECLARE_CLASS2(flixel,util,FlxPoint)
namespace flixel{
namespace input{
namespace touch{


class HXCPP_CLASS_ATTRIBUTES  FlxTouch_obj : public ::flixel::util::FlxPoint_obj{
	public:
		typedef ::flixel::util::FlxPoint_obj super;
		typedef FlxTouch_obj OBJ_;
		FlxTouch_obj();
		Void __construct(Dynamic X,Dynamic Y);

	public:
		inline void *operator new( size_t inSize, bool inContainer=false)
			{ return hx::Object::operator new(inSize,inContainer); }
		static hx::ObjectPtr< FlxTouch_obj > __new(Dynamic X,Dynamic Y);
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~FlxTouch_obj();

		HX_DO_RTTI;
		static void __boot();
		static void __register();
		inline operator ::flixel::interfaces::IFlxDestroyable_obj *()
			{ return new ::flixel::interfaces::IFlxDestroyable_delegate_< FlxTouch_obj >(this); }
		hx::Object *__ToInterface(const hx::type_info &inType);
		::String __ToString() const { return HX_CSTRING("FlxTouch"); }

};

} // end namespace flixel
} // end namespace input
} // end namespace touch

#endif /* INCLUDED_flixel_input_touch_FlxTouch */ 
