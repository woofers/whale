#ifndef INCLUDED_flixel_text_pxText_PxDefaultFontGenerator
#define INCLUDED_flixel_text_pxText_PxDefaultFontGenerator

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS3(flixel,text,pxText,PxDefaultFontGenerator)
namespace flixel{
namespace text{
namespace pxText{


class HXCPP_CLASS_ATTRIBUTES  PxDefaultFontGenerator_obj : public hx::Object{
	public:
		typedef hx::Object super;
		typedef PxDefaultFontGenerator_obj OBJ_;
		PxDefaultFontGenerator_obj();
		Void __construct();

	public:
		inline void *operator new( size_t inSize, bool inContainer=false)
			{ return hx::Object::operator new(inSize,inContainer); }
		static hx::ObjectPtr< PxDefaultFontGenerator_obj > __new();
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~PxDefaultFontGenerator_obj();

		HX_DO_RTTI;
		static void __boot();
		static void __register();
		::String __ToString() const { return HX_CSTRING("PxDefaultFontGenerator"); }

		static ::String fontData;
		static Void generateAndStoreDefaultFont( );
		static Dynamic generateAndStoreDefaultFont_dyn();

};

} // end namespace flixel
} // end namespace text
} // end namespace pxText

#endif /* INCLUDED_flixel_text_pxText_PxDefaultFontGenerator */ 
