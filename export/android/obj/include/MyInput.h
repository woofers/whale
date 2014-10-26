#ifndef INCLUDED_MyInput
#define INCLUDED_MyInput

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS0(MyInput)


class HXCPP_CLASS_ATTRIBUTES  MyInput_obj : public hx::Object{
	public:
		typedef hx::Object super;
		typedef MyInput_obj OBJ_;
		MyInput_obj();
		Void __construct();

	public:
		inline void *operator new( size_t inSize, bool inContainer=false)
			{ return hx::Object::operator new(inSize,inContainer); }
		static hx::ObjectPtr< MyInput_obj > __new();
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~MyInput_obj();

		HX_DO_RTTI;
		static void __boot();
		static void __register();
		::String __ToString() const { return HX_CSTRING("MyInput"); }

		static Float accelerometerSensitivity;
		static bool left( );
		static Dynamic left_dyn();

		static bool right( );
		static Dynamic right_dyn();

		static Float getAccelerometerX( );
		static Dynamic getAccelerometerX_dyn();

};


#endif /* INCLUDED_MyInput */ 
