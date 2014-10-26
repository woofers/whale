#ifndef INCLUDED_flixel_text_pxText_PxTextAlign
#define INCLUDED_flixel_text_pxText_PxTextAlign

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS3(flixel,text,pxText,PxTextAlign)
namespace flixel{
namespace text{
namespace pxText{


class HXCPP_CLASS_ATTRIBUTES  PxTextAlign_obj : public hx::Object{
	public:
		typedef hx::Object super;
		typedef PxTextAlign_obj OBJ_;
		PxTextAlign_obj();
		Void __construct();

	public:
		inline void *operator new( size_t inSize, bool inContainer=false)
			{ return hx::Object::operator new(inSize,inContainer); }
		static hx::ObjectPtr< PxTextAlign_obj > __new();
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~PxTextAlign_obj();

		HX_DO_RTTI;
		static void __boot();
		static void __register();
		::String __ToString() const { return HX_CSTRING("PxTextAlign"); }

		static int LEFT;
		static int RIGHT;
		static int CENTER;
};

} // end namespace flixel
} // end namespace text
} // end namespace pxText

#endif /* INCLUDED_flixel_text_pxText_PxTextAlign */ 
