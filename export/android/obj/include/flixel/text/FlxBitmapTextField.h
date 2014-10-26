#ifndef INCLUDED_flixel_text_FlxBitmapTextField
#define INCLUDED_flixel_text_FlxBitmapTextField

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#include <flixel/FlxSprite.h>
HX_DECLARE_CLASS1(flixel,FlxBasic)
HX_DECLARE_CLASS1(flixel,FlxObject)
HX_DECLARE_CLASS1(flixel,FlxSprite)
HX_DECLARE_CLASS2(flixel,interfaces,IFlxDestroyable)
HX_DECLARE_CLASS2(flixel,text,FlxBitmapTextField)
HX_DECLARE_CLASS3(flixel,text,pxText,PxBitmapFont)
namespace flixel{
namespace text{


class HXCPP_CLASS_ATTRIBUTES  FlxBitmapTextField_obj : public ::flixel::FlxSprite_obj{
	public:
		typedef ::flixel::FlxSprite_obj super;
		typedef FlxBitmapTextField_obj OBJ_;
		FlxBitmapTextField_obj();
		Void __construct(::flixel::text::pxText::PxBitmapFont PxFont);

	public:
		inline void *operator new( size_t inSize, bool inContainer=true)
			{ return hx::Object::operator new(inSize,inContainer); }
		static hx::ObjectPtr< FlxBitmapTextField_obj > __new(::flixel::text::pxText::PxBitmapFont PxFont);
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~FlxBitmapTextField_obj();

		HX_DO_RTTI;
		static void __boot();
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		::String __ToString() const { return HX_CSTRING("FlxBitmapTextField"); }

		::flixel::text::pxText::PxBitmapFont _font;
		::String _text;
		int _textColor;
		bool _useTextColor;
		bool _outline;
		int _outlineColor;
		bool _shadow;
		int _shadowColor;
		bool _background;
		int _backgroundColor;
		int _alignment;
		int _padding;
		int _lineSpacing;
		int _letterSpacing;
		Float _fontScale;
		bool _autoUpperCase;
		bool _wordWrap;
		bool _fixedWidth;
		int _numSpacesInTab;
		::String _tabSpaces;
		bool _pendingTextChange;
		bool _multiLine;
		Array< Float > _drawData;
		Array< Float > _bgDrawData;
		virtual Void destroy( );

		virtual Void update( );

		virtual int get_numSpacesInTab( );
		Dynamic get_numSpacesInTab_dyn();

		virtual int set_numSpacesInTab( int Value);
		Dynamic set_numSpacesInTab_dyn();

		virtual Void draw( );

		virtual int set_color( int Color);

		virtual int get_textColor( );
		Dynamic get_textColor_dyn();

		virtual int set_textColor( int Value);
		Dynamic set_textColor_dyn();

		virtual bool get_useTextColor( );
		Dynamic get_useTextColor_dyn();

		virtual bool set_useTextColor( bool Value);
		Dynamic set_useTextColor_dyn();

		virtual Float set_alpha( Float PxAlpha);

		virtual ::String get_text( );
		Dynamic get_text_dyn();

		virtual ::String set_text( ::String PxText);
		Dynamic set_text_dyn();

		virtual Void updateBitmapData( );
		Dynamic updateBitmapData_dyn();

		virtual bool get_background( );
		Dynamic get_background_dyn();

		virtual bool set_background( bool Value);
		Dynamic set_background_dyn();

		virtual int get_backgroundColor( );
		Dynamic get_backgroundColor_dyn();

		virtual int set_backgroundColor( int Value);
		Dynamic set_backgroundColor_dyn();

		virtual bool get_shadow( );
		Dynamic get_shadow_dyn();

		virtual bool set_shadow( bool Value);
		Dynamic set_shadow_dyn();

		virtual int get_shadowColor( );
		Dynamic get_shadowColor_dyn();

		virtual int set_shadowColor( int Value);
		Dynamic set_shadowColor_dyn();

		virtual int get_padding( );
		Dynamic get_padding_dyn();

		virtual int set_padding( int Value);
		Dynamic set_padding_dyn();

		virtual Float set_width( Float PxWidth);

		virtual int get_alignment( );
		Dynamic get_alignment_dyn();

		virtual int set_alignment( int PxAlignment);
		Dynamic set_alignment_dyn();

		virtual bool get_multiLine( );
		Dynamic get_multiLine_dyn();

		virtual bool set_multiLine( bool PxMultiLine);
		Dynamic set_multiLine_dyn();

		virtual bool get_outline( );
		Dynamic get_outline_dyn();

		virtual bool set_outline( bool Value);
		Dynamic set_outline_dyn();

		virtual int get_outlineColor( );
		Dynamic get_outlineColor_dyn();

		virtual int set_outlineColor( int Value);
		Dynamic set_outlineColor_dyn();

		virtual ::flixel::text::pxText::PxBitmapFont get_font( );
		Dynamic get_font_dyn();

		virtual ::flixel::text::pxText::PxBitmapFont set_font( ::flixel::text::pxText::PxBitmapFont PxFont);
		Dynamic set_font_dyn();

		virtual int get_lineSpacing( );
		Dynamic get_lineSpacing_dyn();

		virtual int set_lineSpacing( int PxSpacing);
		Dynamic set_lineSpacing_dyn();

		virtual Float get_fontScale( );
		Dynamic get_fontScale_dyn();

		virtual Float set_fontScale( Float PxScale);
		Dynamic set_fontScale_dyn();

		virtual int get_letterSpacing( );
		Dynamic get_letterSpacing_dyn();

		virtual int set_letterSpacing( int PxSpacing);
		Dynamic set_letterSpacing_dyn();

		virtual bool get_autoUpperCase( );
		Dynamic get_autoUpperCase_dyn();

		virtual bool set_autoUpperCase( bool Value);
		Dynamic set_autoUpperCase_dyn();

		virtual bool get_wordWrap( );
		Dynamic get_wordWrap_dyn();

		virtual bool set_wordWrap( bool Value);
		Dynamic set_wordWrap_dyn();

		virtual bool get_fixedWidth( );
		Dynamic get_fixedWidth_dyn();

		virtual bool set_fixedWidth( bool Value);
		Dynamic set_fixedWidth_dyn();

		virtual Void updateGlyphs( hx::Null< bool >  TextGlyphs,hx::Null< bool >  ShadowGlyphs,hx::Null< bool >  OutlineGlyphs);
		Dynamic updateGlyphs_dyn();

};

} // end namespace flixel
} // end namespace text

#endif /* INCLUDED_flixel_text_FlxBitmapTextField */ 
