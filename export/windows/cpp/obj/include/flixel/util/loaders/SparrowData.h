#ifndef INCLUDED_flixel_util_loaders_SparrowData
#define INCLUDED_flixel_util_loaders_SparrowData

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#include <flixel/util/loaders/TexturePackerData.h>
HX_DECLARE_CLASS2(flixel,interfaces,IFlxDestroyable)
HX_DECLARE_CLASS3(flixel,util,loaders,SparrowData)
HX_DECLARE_CLASS3(flixel,util,loaders,TexturePackerData)
namespace flixel{
namespace util{
namespace loaders{


class HXCPP_CLASS_ATTRIBUTES  SparrowData_obj : public ::flixel::util::loaders::TexturePackerData_obj{
	public:
		typedef ::flixel::util::loaders::TexturePackerData_obj super;
		typedef SparrowData_obj OBJ_;
		SparrowData_obj();
		Void __construct(::String Description,::String AssetName);

	public:
		inline void *operator new( size_t inSize, bool inContainer=true)
			{ return hx::Object::operator new(inSize,inContainer); }
		static hx::ObjectPtr< SparrowData_obj > __new(::String Description,::String AssetName);
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~SparrowData_obj();

		HX_DO_RTTI;
		static void __boot();
		static void __register();
		::String __ToString() const { return HX_CSTRING("SparrowData"); }

		virtual Void parseData( );

};

} // end namespace flixel
} // end namespace util
} // end namespace loaders

#endif /* INCLUDED_flixel_util_loaders_SparrowData */ 
