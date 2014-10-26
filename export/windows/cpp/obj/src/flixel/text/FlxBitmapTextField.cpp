#include <hxcpp.h>

#ifndef INCLUDED_Std
#include <Std.h>
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
#ifndef INCLUDED_flixel_interfaces_IFlxDestroyable
#include <flixel/interfaces/IFlxDestroyable.h>
#endif
#ifndef INCLUDED_flixel_interfaces_IFlxPooled
#include <flixel/interfaces/IFlxPooled.h>
#endif
#ifndef INCLUDED_flixel_system_frontEnds_BitmapFrontEnd
#include <flixel/system/frontEnds/BitmapFrontEnd.h>
#endif
#ifndef INCLUDED_flixel_system_layer_DrawStackItem
#include <flixel/system/layer/DrawStackItem.h>
#endif
#ifndef INCLUDED_flixel_text_FlxBitmapTextField
#include <flixel/text/FlxBitmapTextField.h>
#endif
#ifndef INCLUDED_flixel_text_pxText_PxBitmapFont
#include <flixel/text/pxText/PxBitmapFont.h>
#endif
#ifndef INCLUDED_flixel_text_pxText_PxDefaultFontGenerator
#include <flixel/text/pxText/PxDefaultFontGenerator.h>
#endif
#ifndef INCLUDED_flixel_util_FlxPoint
#include <flixel/util/FlxPoint.h>
#endif
#ifndef INCLUDED_flixel_util_loaders_CachedGraphics
#include <flixel/util/loaders/CachedGraphics.h>
#endif
#ifndef INCLUDED_hxMath
#include <hxMath.h>
#endif
#ifndef INCLUDED_openfl_display_BitmapData
#include <openfl/display/BitmapData.h>
#endif
#ifndef INCLUDED_openfl_display_IBitmapDrawable
#include <openfl/display/IBitmapDrawable.h>
#endif
namespace flixel{
namespace text{

Void FlxBitmapTextField_obj::__construct(::flixel::text::pxText::PxBitmapFont PxFont)
{
HX_STACK_FRAME("flixel.text.FlxBitmapTextField","new",0x83a8242d,"flixel.text.FlxBitmapTextField.new","flixel/text/FlxBitmapTextField.hx",22,0xd7ef4783)
HX_STACK_THIS(this)
HX_STACK_ARG(PxFont,"PxFont")
{
	HX_STACK_LINE(48)
	this->_multiLine = false;
	HX_STACK_LINE(47)
	this->_pendingTextChange = false;
	HX_STACK_LINE(45)
	this->_tabSpaces = HX_CSTRING("    ");
	HX_STACK_LINE(44)
	this->_numSpacesInTab = (int)4;
	HX_STACK_LINE(41)
	this->_wordWrap = true;
	HX_STACK_LINE(40)
	this->_autoUpperCase = false;
	HX_STACK_LINE(39)
	this->_fontScale = (int)1;
	HX_STACK_LINE(38)
	this->_letterSpacing = (int)0;
	HX_STACK_LINE(37)
	this->_lineSpacing = (int)0;
	HX_STACK_LINE(35)
	this->_padding = (int)0;
	HX_STACK_LINE(34)
	this->_alignment = (int)1;
	HX_STACK_LINE(33)
	this->_backgroundColor = (int)16777215;
	HX_STACK_LINE(32)
	this->_background = false;
	HX_STACK_LINE(31)
	this->_shadowColor = (int)0;
	HX_STACK_LINE(30)
	this->_shadow = false;
	HX_STACK_LINE(29)
	this->_outlineColor = (int)0;
	HX_STACK_LINE(28)
	this->_outline = false;
	HX_STACK_LINE(27)
	this->_useTextColor = true;
	HX_STACK_LINE(26)
	this->_textColor = (int)0;
	HX_STACK_LINE(25)
	this->_text = HX_CSTRING("");
	HX_STACK_LINE(65)
	super::__construct(null(),null(),null());
	HX_STACK_LINE(67)
	this->set_width((int)2);
	HX_STACK_LINE(68)
	this->set_alpha((int)1);
	HX_STACK_LINE(70)
	if (((PxFont == null()))){
		HX_STACK_LINE(72)
		::flixel::text::pxText::PxBitmapFont _g = ::flixel::text::pxText::PxBitmapFont_obj::fetch(HX_CSTRING("default"));		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(72)
		if (((_g == null()))){
			HX_STACK_LINE(74)
			::flixel::text::pxText::PxDefaultFontGenerator_obj::generateAndStoreDefaultFont();
		}
		HX_STACK_LINE(77)
		::flixel::text::pxText::PxBitmapFont _g1 = ::flixel::text::pxText::PxBitmapFont_obj::fetch(HX_CSTRING("default"));		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(77)
		this->_font = _g1;
	}
	else{
		HX_STACK_LINE(81)
		this->_font = PxFont;
	}
	HX_STACK_LINE(88)
	::openfl::display::BitmapData _g2 = this->_font->get_pixels();		HX_STACK_VAR(_g2,"_g2");
	HX_STACK_LINE(88)
	this->set_pixels(_g2);
	HX_STACK_LINE(89)
	this->_drawData = Array_obj< Float >::__new();
	HX_STACK_LINE(90)
	this->_bgDrawData = Array_obj< Float >::__new();
	HX_STACK_LINE(93)
	this->_pendingTextChange = true;
}
;
	return null();
}

//FlxBitmapTextField_obj::~FlxBitmapTextField_obj() { }

Dynamic FlxBitmapTextField_obj::__CreateEmpty() { return  new FlxBitmapTextField_obj; }
hx::ObjectPtr< FlxBitmapTextField_obj > FlxBitmapTextField_obj::__new(::flixel::text::pxText::PxBitmapFont PxFont)
{  hx::ObjectPtr< FlxBitmapTextField_obj > result = new FlxBitmapTextField_obj();
	result->__construct(PxFont);
	return result;}

Dynamic FlxBitmapTextField_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< FlxBitmapTextField_obj > result = new FlxBitmapTextField_obj();
	result->__construct(inArgs[0]);
	return result;}

Void FlxBitmapTextField_obj::destroy( ){
{
		HX_STACK_FRAME("flixel.text.FlxBitmapTextField","destroy",0x2d24eb47,"flixel.text.FlxBitmapTextField.destroy","flixel/text/FlxBitmapTextField.hx",100,0xd7ef4783)
		HX_STACK_THIS(this)
		HX_STACK_LINE(101)
		this->_font = null();
		HX_STACK_LINE(108)
		this->_drawData = null();
		HX_STACK_LINE(109)
		this->_bgDrawData = null();
		HX_STACK_LINE(112)
		this->super::destroy();
	}
return null();
}


Void FlxBitmapTextField_obj::update( ){
{
		HX_STACK_FRAME("flixel.text.FlxBitmapTextField","update",0x3467d05c,"flixel.text.FlxBitmapTextField.update","flixel/text/FlxBitmapTextField.hx",116,0xd7ef4783)
		HX_STACK_THIS(this)
		HX_STACK_LINE(117)
		if ((this->_pendingTextChange)){
			HX_STACK_LINE(119)
			this->updateBitmapData();
		}
		HX_STACK_LINE(122)
		this->super::update();
	}
return null();
}


int FlxBitmapTextField_obj::get_numSpacesInTab( ){
	HX_STACK_FRAME("flixel.text.FlxBitmapTextField","get_numSpacesInTab",0x44851639,"flixel.text.FlxBitmapTextField.get_numSpacesInTab","flixel/text/FlxBitmapTextField.hx",129,0xd7ef4783)
	HX_STACK_THIS(this)
	HX_STACK_LINE(129)
	return this->_numSpacesInTab;
}


HX_DEFINE_DYNAMIC_FUNC0(FlxBitmapTextField_obj,get_numSpacesInTab,return )

int FlxBitmapTextField_obj::set_numSpacesInTab( int Value){
	HX_STACK_FRAME("flixel.text.FlxBitmapTextField","set_numSpacesInTab",0x213448ad,"flixel.text.FlxBitmapTextField.set_numSpacesInTab","flixel/text/FlxBitmapTextField.hx",133,0xd7ef4783)
	HX_STACK_THIS(this)
	HX_STACK_ARG(Value,"Value")
	HX_STACK_LINE(134)
	if (((bool((this->_numSpacesInTab != Value)) && bool((Value > (int)0))))){
		HX_STACK_LINE(136)
		this->_numSpacesInTab = Value;
		HX_STACK_LINE(137)
		this->_tabSpaces = HX_CSTRING("");
		HX_STACK_LINE(139)
		{
			HX_STACK_LINE(139)
			int _g = (int)0;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(139)
			while((true)){
				HX_STACK_LINE(139)
				if ((!(((_g < Value))))){
					HX_STACK_LINE(139)
					break;
				}
				HX_STACK_LINE(139)
				int i = (_g)++;		HX_STACK_VAR(i,"i");
				HX_STACK_LINE(141)
				hx::AddEq(this->_tabSpaces,HX_CSTRING(" "));
			}
		}
		HX_STACK_LINE(144)
		this->_pendingTextChange = true;
	}
	HX_STACK_LINE(147)
	return Value;
}


HX_DEFINE_DYNAMIC_FUNC1(FlxBitmapTextField_obj,set_numSpacesInTab,return )

Void FlxBitmapTextField_obj::draw( ){
{
		HX_STACK_FRAME("flixel.text.FlxBitmapTextField","draw",0xa8e52b97,"flixel.text.FlxBitmapTextField.draw","flixel/text/FlxBitmapTextField.hx",162,0xd7ef4783)
		HX_STACK_THIS(this)
		HX_STACK_LINE(163)
		if ((this->_pendingTextChange)){
			HX_STACK_LINE(165)
			this->updateBitmapData();
		}
		HX_STACK_LINE(168)
		::flixel::system::layer::DrawStackItem bgDrawItem = null();		HX_STACK_VAR(bgDrawItem,"bgDrawItem");
		HX_STACK_LINE(169)
		::flixel::system::layer::DrawStackItem drawItem;		HX_STACK_VAR(drawItem,"drawItem");
		HX_STACK_LINE(170)
		Array< Float > currDrawData;		HX_STACK_VAR(currDrawData,"currDrawData");
		HX_STACK_LINE(171)
		int currIndex;		HX_STACK_VAR(currIndex,"currIndex");
		HX_STACK_LINE(173)
		int j = (int)0;		HX_STACK_VAR(j,"j");
		HX_STACK_LINE(174)
		int textLength = ::Std_obj::_int((Float(this->_drawData->length) / Float((int)6)));		HX_STACK_VAR(textLength,"textLength");
		HX_STACK_LINE(175)
		int currPosInArr;		HX_STACK_VAR(currPosInArr,"currPosInArr");
		HX_STACK_LINE(176)
		Float currTileID;		HX_STACK_VAR(currTileID,"currTileID");
		HX_STACK_LINE(177)
		Float currTileX;		HX_STACK_VAR(currTileX,"currTileX");
		HX_STACK_LINE(178)
		Float currTileY;		HX_STACK_VAR(currTileY,"currTileY");
		HX_STACK_LINE(179)
		Float currTileRed;		HX_STACK_VAR(currTileRed,"currTileRed");
		HX_STACK_LINE(180)
		Float currTileGreen;		HX_STACK_VAR(currTileGreen,"currTileGreen");
		HX_STACK_LINE(181)
		Float currTileBlue;		HX_STACK_VAR(currTileBlue,"currTileBlue");
		HX_STACK_LINE(183)
		Float relativeX;		HX_STACK_VAR(relativeX,"relativeX");
		HX_STACK_LINE(184)
		Float relativeY;		HX_STACK_VAR(relativeY,"relativeY");
		HX_STACK_LINE(186)
		int camID;		HX_STACK_VAR(camID,"camID");
		HX_STACK_LINE(188)
		{
			HX_STACK_LINE(188)
			int _g = (int)0;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(188)
			Array< ::Dynamic > _g1 = this->get_cameras();		HX_STACK_VAR(_g1,"_g1");
			HX_STACK_LINE(188)
			while((true)){
				HX_STACK_LINE(188)
				if ((!(((_g < _g1->length))))){
					HX_STACK_LINE(188)
					break;
				}
				HX_STACK_LINE(188)
				::flixel::FlxCamera camera = _g1->__get(_g).StaticCast< ::flixel::FlxCamera >();		HX_STACK_VAR(camera,"camera");
				HX_STACK_LINE(188)
				++(_g);
				HX_STACK_LINE(190)
				if ((this->_background)){
					HX_STACK_LINE(192)
					::flixel::util::loaders::CachedGraphics _g2 = ::flixel::FlxG_obj::bitmap->get_whitePixel();		HX_STACK_VAR(_g2,"_g2");
					HX_STACK_LINE(192)
					::flixel::system::layer::DrawStackItem _g11 = camera->getDrawStackItem(_g2,true,this->_blendInt,this->antialiasing);		HX_STACK_VAR(_g11,"_g11");
					HX_STACK_LINE(192)
					bgDrawItem = _g11;
				}
				HX_STACK_LINE(196)
				::flixel::system::layer::DrawStackItem _g2 = camera->getDrawStackItem(this->cachedGraphics,true,this->_blendInt,this->antialiasing);		HX_STACK_VAR(_g2,"_g2");
				HX_STACK_LINE(196)
				drawItem = _g2;
				HX_STACK_LINE(198)
				if (((  ((!(((bool(!(camera->visible)) || bool(!(camera->exists))))))) ? bool(!(this->isOnScreen(camera))) : bool(true) ))){
					HX_STACK_LINE(200)
					continue;
				}
				HX_STACK_LINE(203)
				this->_point->set_x((((this->x - (camera->scroll->x * this->scrollFactor->x)) - this->offset->x) + this->origin->x));
				HX_STACK_LINE(204)
				this->_point->set_y((((this->y - (camera->scroll->y * this->scrollFactor->y)) - this->offset->y) + this->origin->y));
				HX_STACK_LINE(206)
				Float csx = (int)1;		HX_STACK_VAR(csx,"csx");
				HX_STACK_LINE(207)
				Float ssy = (int)0;		HX_STACK_VAR(ssy,"ssy");
				HX_STACK_LINE(208)
				Float ssx = (int)0;		HX_STACK_VAR(ssx,"ssx");
				HX_STACK_LINE(209)
				Float csy = (int)1;		HX_STACK_VAR(csy,"csy");
				HX_STACK_LINE(210)
				Float x1 = (int)0;		HX_STACK_VAR(x1,"x1");
				HX_STACK_LINE(211)
				Float y1 = (int)0;		HX_STACK_VAR(y1,"y1");
				HX_STACK_LINE(213)
				if ((!(this->isSimpleRender()))){
					HX_STACK_LINE(215)
					if ((this->_angleChanged)){
						HX_STACK_LINE(217)
						Float radians = (this->angle * ((Float(::Math_obj::PI) / Float((int)180))));		HX_STACK_VAR(radians,"radians");
						HX_STACK_LINE(218)
						Float _g3 = ::Math_obj::sin(radians);		HX_STACK_VAR(_g3,"_g3");
						HX_STACK_LINE(218)
						this->_sinAngle = _g3;
						HX_STACK_LINE(219)
						Float _g4 = ::Math_obj::cos(radians);		HX_STACK_VAR(_g4,"_g4");
						HX_STACK_LINE(219)
						this->_cosAngle = _g4;
						HX_STACK_LINE(220)
						this->_angleChanged = false;
					}
					HX_STACK_LINE(223)
					csx = (this->_cosAngle * this->scale->x);
					HX_STACK_LINE(224)
					ssy = (this->_sinAngle * this->scale->y);
					HX_STACK_LINE(225)
					ssx = (this->_sinAngle * this->scale->x);
					HX_STACK_LINE(226)
					csy = (this->_cosAngle * this->scale->y);
					HX_STACK_LINE(228)
					x1 = (this->origin->x - this->_halfWidth);
					HX_STACK_LINE(229)
					y1 = (this->origin->y - this->_halfHeight);
				}
				HX_STACK_LINE(232)
				if ((this->_background)){
					HX_STACK_LINE(234)
					currDrawData = bgDrawItem->drawData;
					HX_STACK_LINE(235)
					currIndex = bgDrawItem->position;
					HX_STACK_LINE(237)
					currTileX = (this->_bgDrawData->__get((int)1) - x1);
					HX_STACK_LINE(238)
					currTileY = (this->_bgDrawData->__get((int)2) - y1);
					HX_STACK_LINE(240)
					relativeX = ((currTileX * csx) - (currTileY * ssy));
					HX_STACK_LINE(241)
					relativeY = ((currTileX * ssx) + (currTileY * csy));
					HX_STACK_LINE(243)
					int _g5 = (currIndex)++;		HX_STACK_VAR(_g5,"_g5");
					HX_STACK_LINE(243)
					currDrawData[_g5] = (this->_point->x + relativeX);
					HX_STACK_LINE(244)
					int _g6 = (currIndex)++;		HX_STACK_VAR(_g6,"_g6");
					HX_STACK_LINE(244)
					currDrawData[_g6] = (this->_point->y + relativeY);
					HX_STACK_LINE(246)
					int _g7 = (currIndex)++;		HX_STACK_VAR(_g7,"_g7");
					HX_STACK_LINE(246)
					currDrawData[_g7] = this->_bgDrawData->__get((int)0);
					HX_STACK_LINE(248)
					int _g8 = (currIndex)++;		HX_STACK_VAR(_g8,"_g8");
					HX_STACK_LINE(248)
					Float _g9 = this->get_width();		HX_STACK_VAR(_g9,"_g9");
					HX_STACK_LINE(248)
					currDrawData[_g8] = (csx * _g9);
					HX_STACK_LINE(249)
					int _g10 = (currIndex)++;		HX_STACK_VAR(_g10,"_g10");
					HX_STACK_LINE(249)
					Float _g11 = this->get_width();		HX_STACK_VAR(_g11,"_g11");
					HX_STACK_LINE(249)
					currDrawData[_g10] = (ssx * _g11);
					HX_STACK_LINE(250)
					int _g12 = (currIndex)++;		HX_STACK_VAR(_g12,"_g12");
					HX_STACK_LINE(250)
					Float _g13 = this->get_height();		HX_STACK_VAR(_g13,"_g13");
					HX_STACK_LINE(250)
					currDrawData[_g12] = (-(ssy) * _g13);
					HX_STACK_LINE(251)
					int _g14 = (currIndex)++;		HX_STACK_VAR(_g14,"_g14");
					HX_STACK_LINE(251)
					Float _g15 = this->get_height();		HX_STACK_VAR(_g15,"_g15");
					HX_STACK_LINE(251)
					currDrawData[_g14] = (csy * _g15);
					HX_STACK_LINE(253)
					int _g16 = (currIndex)++;		HX_STACK_VAR(_g16,"_g16");
					HX_STACK_LINE(253)
					currDrawData[_g16] = this->_bgDrawData->__get((int)3);
					HX_STACK_LINE(254)
					int _g17 = (currIndex)++;		HX_STACK_VAR(_g17,"_g17");
					HX_STACK_LINE(254)
					currDrawData[_g17] = this->_bgDrawData->__get((int)4);
					HX_STACK_LINE(255)
					int _g18 = (currIndex)++;		HX_STACK_VAR(_g18,"_g18");
					HX_STACK_LINE(255)
					currDrawData[_g18] = this->_bgDrawData->__get((int)5);
					HX_STACK_LINE(256)
					int _g19 = (currIndex)++;		HX_STACK_VAR(_g19,"_g19");
					HX_STACK_LINE(256)
					currDrawData[_g19] = this->alpha;
					HX_STACK_LINE(258)
					bgDrawItem->position = currIndex;
				}
				HX_STACK_LINE(261)
				currDrawData = drawItem->drawData;
				HX_STACK_LINE(262)
				currIndex = drawItem->position;
				HX_STACK_LINE(264)
				while((true)){
					HX_STACK_LINE(264)
					if ((!(((j < textLength))))){
						HX_STACK_LINE(264)
						break;
					}
					HX_STACK_LINE(266)
					currPosInArr = (j * (int)6);
					HX_STACK_LINE(267)
					currTileID = this->_drawData->__get(currPosInArr);
					HX_STACK_LINE(268)
					currTileX = (this->_drawData->__get((currPosInArr + (int)1)) - x1);
					HX_STACK_LINE(269)
					currTileY = (this->_drawData->__get((currPosInArr + (int)2)) - y1);
					HX_STACK_LINE(270)
					currTileRed = this->_drawData->__get((currPosInArr + (int)3));
					HX_STACK_LINE(271)
					currTileGreen = this->_drawData->__get((currPosInArr + (int)4));
					HX_STACK_LINE(272)
					currTileBlue = this->_drawData->__get((currPosInArr + (int)5));
					HX_STACK_LINE(274)
					relativeX = ((currTileX * csx) - (currTileY * ssy));
					HX_STACK_LINE(275)
					relativeY = ((currTileX * ssx) + (currTileY * csy));
					HX_STACK_LINE(277)
					int _g20 = (currIndex)++;		HX_STACK_VAR(_g20,"_g20");
					HX_STACK_LINE(277)
					currDrawData[_g20] = (this->_point->x + relativeX);
					HX_STACK_LINE(278)
					int _g21 = (currIndex)++;		HX_STACK_VAR(_g21,"_g21");
					HX_STACK_LINE(278)
					currDrawData[_g21] = (this->_point->y + relativeY);
					HX_STACK_LINE(280)
					int _g22 = (currIndex)++;		HX_STACK_VAR(_g22,"_g22");
					HX_STACK_LINE(280)
					currDrawData[_g22] = currTileID;
					HX_STACK_LINE(282)
					int _g23 = (currIndex)++;		HX_STACK_VAR(_g23,"_g23");
					HX_STACK_LINE(282)
					currDrawData[_g23] = (csx * this->_fontScale);
					HX_STACK_LINE(283)
					int _g24 = (currIndex)++;		HX_STACK_VAR(_g24,"_g24");
					HX_STACK_LINE(283)
					currDrawData[_g24] = (ssx * this->_fontScale);
					HX_STACK_LINE(284)
					int _g25 = (currIndex)++;		HX_STACK_VAR(_g25,"_g25");
					HX_STACK_LINE(284)
					currDrawData[_g25] = (-(ssy) * this->_fontScale);
					HX_STACK_LINE(285)
					int _g26 = (currIndex)++;		HX_STACK_VAR(_g26,"_g26");
					HX_STACK_LINE(285)
					currDrawData[_g26] = (csy * this->_fontScale);
					HX_STACK_LINE(287)
					int _g27 = (currIndex)++;		HX_STACK_VAR(_g27,"_g27");
					HX_STACK_LINE(287)
					currDrawData[_g27] = currTileRed;
					HX_STACK_LINE(288)
					int _g28 = (currIndex)++;		HX_STACK_VAR(_g28,"_g28");
					HX_STACK_LINE(288)
					currDrawData[_g28] = currTileGreen;
					HX_STACK_LINE(289)
					int _g29 = (currIndex)++;		HX_STACK_VAR(_g29,"_g29");
					HX_STACK_LINE(289)
					currDrawData[_g29] = currTileBlue;
					HX_STACK_LINE(290)
					int _g30 = (currIndex)++;		HX_STACK_VAR(_g30,"_g30");
					HX_STACK_LINE(290)
					currDrawData[_g30] = this->alpha;
					HX_STACK_LINE(291)
					(j)++;
				}
				HX_STACK_LINE(294)
				drawItem->position = currIndex;
				HX_STACK_LINE(297)
				(::flixel::FlxBasic_obj::_VISIBLECOUNT)++;
			}
		}
	}
return null();
}


int FlxBitmapTextField_obj::set_color( int Color){
	HX_STACK_FRAME("flixel.text.FlxBitmapTextField","set_color",0xeddb6553,"flixel.text.FlxBitmapTextField.set_color","flixel/text/FlxBitmapTextField.hx",303,0xd7ef4783)
	HX_STACK_THIS(this)
	HX_STACK_ARG(Color,"Color")
	HX_STACK_LINE(304)
	this->super::set_color(Color);
	HX_STACK_LINE(305)
	this->_pendingTextChange = true;
	HX_STACK_LINE(307)
	return this->color;
}


int FlxBitmapTextField_obj::get_textColor( ){
	HX_STACK_FRAME("flixel.text.FlxBitmapTextField","get_textColor",0x67e3cb5a,"flixel.text.FlxBitmapTextField.get_textColor","flixel/text/FlxBitmapTextField.hx",318,0xd7ef4783)
	HX_STACK_THIS(this)
	HX_STACK_LINE(318)
	return this->_textColor;
}


HX_DEFINE_DYNAMIC_FUNC0(FlxBitmapTextField_obj,get_textColor,return )

int FlxBitmapTextField_obj::set_textColor( int Value){
	HX_STACK_FRAME("flixel.text.FlxBitmapTextField","set_textColor",0xace9ad66,"flixel.text.FlxBitmapTextField.set_textColor","flixel/text/FlxBitmapTextField.hx",322,0xd7ef4783)
	HX_STACK_THIS(this)
	HX_STACK_ARG(Value,"Value")
	HX_STACK_LINE(323)
	if (((this->_textColor != Value))){
		HX_STACK_LINE(325)
		this->_textColor = Value;
		HX_STACK_LINE(326)
		this->updateGlyphs(true,false,false);
		HX_STACK_LINE(327)
		this->_pendingTextChange = true;
	}
	HX_STACK_LINE(330)
	return Value;
}


HX_DEFINE_DYNAMIC_FUNC1(FlxBitmapTextField_obj,set_textColor,return )

bool FlxBitmapTextField_obj::get_useTextColor( ){
	HX_STACK_FRAME("flixel.text.FlxBitmapTextField","get_useTextColor",0x6683f0cb,"flixel.text.FlxBitmapTextField.get_useTextColor","flixel/text/FlxBitmapTextField.hx",337,0xd7ef4783)
	HX_STACK_THIS(this)
	HX_STACK_LINE(337)
	return this->_useTextColor;
}


HX_DEFINE_DYNAMIC_FUNC0(FlxBitmapTextField_obj,get_useTextColor,return )

bool FlxBitmapTextField_obj::set_useTextColor( bool Value){
	HX_STACK_FRAME("flixel.text.FlxBitmapTextField","set_useTextColor",0xbcc5de3f,"flixel.text.FlxBitmapTextField.set_useTextColor","flixel/text/FlxBitmapTextField.hx",341,0xd7ef4783)
	HX_STACK_THIS(this)
	HX_STACK_ARG(Value,"Value")
	HX_STACK_LINE(342)
	if (((this->_useTextColor != Value))){
		HX_STACK_LINE(344)
		this->_useTextColor = Value;
		HX_STACK_LINE(345)
		this->updateGlyphs(true,false,false);
		HX_STACK_LINE(346)
		this->_pendingTextChange = true;
	}
	HX_STACK_LINE(349)
	return Value;
}


HX_DEFINE_DYNAMIC_FUNC1(FlxBitmapTextField_obj,set_useTextColor,return )

Float FlxBitmapTextField_obj::set_alpha( Float PxAlpha){
	HX_STACK_FRAME("flixel.text.FlxBitmapTextField","set_alpha",0xc5159b4e,"flixel.text.FlxBitmapTextField.set_alpha","flixel/text/FlxBitmapTextField.hx",353,0xd7ef4783)
	HX_STACK_THIS(this)
	HX_STACK_ARG(PxAlpha,"PxAlpha")
	HX_STACK_LINE(357)
	this->alpha = PxAlpha;
	HX_STACK_LINE(358)
	this->_pendingTextChange = true;
	HX_STACK_LINE(361)
	return PxAlpha;
}


::String FlxBitmapTextField_obj::get_text( ){
	HX_STACK_FRAME("flixel.text.FlxBitmapTextField","get_text",0x4efc4d49,"flixel.text.FlxBitmapTextField.get_text","flixel/text/FlxBitmapTextField.hx",373,0xd7ef4783)
	HX_STACK_THIS(this)
	HX_STACK_LINE(373)
	return this->_text;
}


HX_DEFINE_DYNAMIC_FUNC0(FlxBitmapTextField_obj,get_text,return )

::String FlxBitmapTextField_obj::set_text( ::String PxText){
	HX_STACK_FRAME("flixel.text.FlxBitmapTextField","set_text",0xfd59a6bd,"flixel.text.FlxBitmapTextField.set_text","flixel/text/FlxBitmapTextField.hx",377,0xd7ef4783)
	HX_STACK_THIS(this)
	HX_STACK_ARG(PxText,"PxText")
	HX_STACK_LINE(378)
	if (((PxText != this->_text))){
		HX_STACK_LINE(380)
		this->_text = PxText;
		HX_STACK_LINE(381)
		this->_pendingTextChange = true;
	}
	HX_STACK_LINE(384)
	return this->_text;
}


HX_DEFINE_DYNAMIC_FUNC1(FlxBitmapTextField_obj,set_text,return )

Void FlxBitmapTextField_obj::updateBitmapData( ){
{
		HX_STACK_FRAME("flixel.text.FlxBitmapTextField","updateBitmapData",0x8cac1535,"flixel.text.FlxBitmapTextField.updateBitmapData","flixel/text/FlxBitmapTextField.hx",391,0xd7ef4783)
		HX_STACK_THIS(this)
		HX_STACK_LINE(392)
		if ((!(this->_pendingTextChange))){
			HX_STACK_LINE(394)
			return null();
		}
		HX_STACK_LINE(397)
		if (((this->_font == null()))){
			HX_STACK_LINE(399)
			return null();
		}
		HX_STACK_LINE(402)
		::String preparedText;		HX_STACK_VAR(preparedText,"preparedText");
		HX_STACK_LINE(402)
		if ((this->_autoUpperCase)){
			HX_STACK_LINE(402)
			preparedText = this->_text.toUpperCase();
		}
		else{
			HX_STACK_LINE(402)
			preparedText = this->_text;
		}
		HX_STACK_LINE(403)
		int calcFieldWidth = (int)0;		HX_STACK_VAR(calcFieldWidth,"calcFieldWidth");
		HX_STACK_LINE(404)
		Array< ::String > rows = Array_obj< ::String >::__new();		HX_STACK_VAR(rows,"rows");
		HX_STACK_LINE(409)
		int fontHeight = this->_font->getFontHeight();		HX_STACK_VAR(fontHeight,"fontHeight");
		HX_STACK_LINE(412)
		int alignment = this->_alignment;		HX_STACK_VAR(alignment,"alignment");
		HX_STACK_LINE(415)
		bool lineComplete;		HX_STACK_VAR(lineComplete,"lineComplete");
		HX_STACK_LINE(418)
		Array< ::String > lines = preparedText.split(HX_CSTRING("\n"));		HX_STACK_VAR(lines,"lines");
		HX_STACK_LINE(419)
		int i = (int)-1;		HX_STACK_VAR(i,"i");
		HX_STACK_LINE(420)
		int j = (int)-1;		HX_STACK_VAR(j,"j");
		HX_STACK_LINE(422)
		if ((!(this->_multiLine))){
			HX_STACK_LINE(424)
			lines = Array_obj< ::String >::__new().Add(lines->__get((int)0));
		}
		HX_STACK_LINE(427)
		int wordLength;		HX_STACK_VAR(wordLength,"wordLength");
		HX_STACK_LINE(428)
		::String word;		HX_STACK_VAR(word,"word");
		HX_STACK_LINE(429)
		::String tempStr;		HX_STACK_VAR(tempStr,"tempStr");
		HX_STACK_LINE(431)
		while((true)){
			HX_STACK_LINE(431)
			int _g = ++(i);		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(431)
			if ((!(((_g < lines->length))))){
				HX_STACK_LINE(431)
				break;
			}
			HX_STACK_LINE(433)
			if ((this->_fixedWidth)){
				HX_STACK_LINE(435)
				lineComplete = false;
				HX_STACK_LINE(436)
				Array< ::String > words = Array_obj< ::String >::__new();		HX_STACK_VAR(words,"words");
				HX_STACK_LINE(438)
				if ((!(this->get_wordWrap()))){
					HX_STACK_LINE(440)
					Array< ::String > _g1 = lines->__get(i).split(HX_CSTRING("\t"))->join(this->_tabSpaces).split(HX_CSTRING(" "));		HX_STACK_VAR(_g1,"_g1");
					HX_STACK_LINE(440)
					words = _g1;
				}
				else{
					HX_STACK_LINE(444)
					Array< ::String > _g2 = lines->__get(i).split(HX_CSTRING("\t"))->join(HX_CSTRING(" \t ")).split(HX_CSTRING(" "));		HX_STACK_VAR(_g2,"_g2");
					HX_STACK_LINE(444)
					words = _g2;
				}
				HX_STACK_LINE(447)
				if (((words->length > (int)0))){
					HX_STACK_LINE(449)
					int wordPos = (int)0;		HX_STACK_VAR(wordPos,"wordPos");
					HX_STACK_LINE(450)
					::String txt = HX_CSTRING("");		HX_STACK_VAR(txt,"txt");
					HX_STACK_LINE(452)
					while((true)){
						HX_STACK_LINE(452)
						if ((!((!(lineComplete))))){
							HX_STACK_LINE(452)
							break;
						}
						HX_STACK_LINE(454)
						word = words->__get(wordPos);
						HX_STACK_LINE(455)
						bool changed = false;		HX_STACK_VAR(changed,"changed");
						HX_STACK_LINE(456)
						::String currentRow = (txt + word);		HX_STACK_VAR(currentRow,"currentRow");
						HX_STACK_LINE(458)
						if ((this->_wordWrap)){
							HX_STACK_LINE(460)
							::String prevWord;		HX_STACK_VAR(prevWord,"prevWord");
							HX_STACK_LINE(460)
							if (((wordPos > (int)0))){
								HX_STACK_LINE(460)
								prevWord = words->__get((wordPos - (int)1));
							}
							else{
								HX_STACK_LINE(460)
								prevWord = HX_CSTRING("");
							}
							HX_STACK_LINE(461)
							::String nextWord;		HX_STACK_VAR(nextWord,"nextWord");
							HX_STACK_LINE(461)
							if (((wordPos < words->length))){
								HX_STACK_LINE(461)
								nextWord = words->__get((wordPos + (int)1));
							}
							else{
								HX_STACK_LINE(461)
								nextWord = HX_CSTRING("");
							}
							HX_STACK_LINE(462)
							if (((prevWord != HX_CSTRING("\t")))){
								HX_STACK_LINE(462)
								hx::AddEq(currentRow,HX_CSTRING(" "));
							}
							HX_STACK_LINE(464)
							int _g3 = this->_font->getTextWidth(currentRow,this->_letterSpacing,this->_fontScale);		HX_STACK_VAR(_g3,"_g3");
							HX_STACK_LINE(464)
							Float _g4 = this->get_width();		HX_STACK_VAR(_g4,"_g4");
							HX_STACK_LINE(464)
							if (((_g3 > _g4))){
								HX_STACK_LINE(466)
								if (((txt == HX_CSTRING("")))){
									HX_STACK_LINE(468)
									words->splice((int)0,(int)1);
								}
								else{
									HX_STACK_LINE(472)
									::String _g5 = txt.substr((int)0,(txt.length - (int)1));		HX_STACK_VAR(_g5,"_g5");
									HX_STACK_LINE(472)
									rows->push(_g5);
								}
								HX_STACK_LINE(475)
								txt = HX_CSTRING("");
								HX_STACK_LINE(477)
								if ((this->_multiLine)){
									HX_STACK_LINE(479)
									if (((bool((word == HX_CSTRING("\t"))) && bool((wordPos < words->length))))){
										HX_STACK_LINE(481)
										words->splice((int)0,(wordPos + (int)1));
									}
									else{
										HX_STACK_LINE(485)
										words->splice((int)0,wordPos);
									}
								}
								else{
									HX_STACK_LINE(490)
									words->splice((int)0,words->length);
								}
								HX_STACK_LINE(493)
								wordPos = (int)0;
								HX_STACK_LINE(494)
								changed = true;
							}
							else{
								HX_STACK_LINE(498)
								if (((word == HX_CSTRING("\t")))){
									HX_STACK_LINE(500)
									hx::AddEq(txt,this->_tabSpaces);
								}
								HX_STACK_LINE(502)
								if (((bool((nextWord == HX_CSTRING("\t"))) || bool((prevWord == HX_CSTRING("\t")))))){
									HX_STACK_LINE(504)
									hx::AddEq(txt,word);
								}
								else{
									HX_STACK_LINE(508)
									hx::AddEq(txt,(word + HX_CSTRING(" ")));
								}
								HX_STACK_LINE(510)
								(wordPos)++;
							}
						}
						else{
							HX_STACK_LINE(515)
							int _g6 = this->_font->getTextWidth(currentRow,this->_letterSpacing,this->_fontScale);		HX_STACK_VAR(_g6,"_g6");
							HX_STACK_LINE(515)
							Float _g7 = this->get_width();		HX_STACK_VAR(_g7,"_g7");
							HX_STACK_LINE(515)
							if (((_g6 > _g7))){
								HX_STACK_LINE(517)
								if (((word != HX_CSTRING("")))){
									HX_STACK_LINE(519)
									j = (int)0;
									HX_STACK_LINE(520)
									tempStr = HX_CSTRING("");
									HX_STACK_LINE(521)
									wordLength = word.length;
									HX_STACK_LINE(522)
									while((true)){
										HX_STACK_LINE(522)
										if ((!(((j < wordLength))))){
											HX_STACK_LINE(522)
											break;
										}
										HX_STACK_LINE(524)
										::String _g8 = word.charAt(j);		HX_STACK_VAR(_g8,"_g8");
										HX_STACK_LINE(524)
										::String _g9 = (txt + _g8);		HX_STACK_VAR(_g9,"_g9");
										HX_STACK_LINE(524)
										currentRow = _g9;
										HX_STACK_LINE(526)
										int _g10 = this->_font->getTextWidth(currentRow,this->_letterSpacing,this->_fontScale);		HX_STACK_VAR(_g10,"_g10");
										HX_STACK_LINE(526)
										Float _g11 = this->get_width();		HX_STACK_VAR(_g11,"_g11");
										HX_STACK_LINE(526)
										if (((_g10 > _g11))){
											HX_STACK_LINE(528)
											::String _g12 = txt.substr((int)0,(txt.length - (int)1));		HX_STACK_VAR(_g12,"_g12");
											HX_STACK_LINE(528)
											rows->push(_g12);
											HX_STACK_LINE(529)
											txt = HX_CSTRING("");
											HX_STACK_LINE(530)
											word = HX_CSTRING("");
											HX_STACK_LINE(531)
											wordPos = words->length;
											HX_STACK_LINE(532)
											j = wordLength;
											HX_STACK_LINE(533)
											changed = true;
										}
										else{
											HX_STACK_LINE(537)
											::String _g13 = word.charAt(j);		HX_STACK_VAR(_g13,"_g13");
											HX_STACK_LINE(537)
											hx::AddEq(txt,_g13);
										}
										HX_STACK_LINE(540)
										(j)++;
									}
								}
								else{
									HX_STACK_LINE(545)
									changed = false;
									HX_STACK_LINE(546)
									wordPos = words->length;
								}
							}
							else{
								HX_STACK_LINE(551)
								hx::AddEq(txt,(word + HX_CSTRING(" ")));
								HX_STACK_LINE(552)
								(wordPos)++;
							}
						}
						HX_STACK_LINE(556)
						if (((wordPos >= words->length))){
							HX_STACK_LINE(558)
							if ((!(changed))){
								HX_STACK_LINE(560)
								int _g14 = this->_font->getTextWidth(txt,this->_letterSpacing,this->_fontScale);		HX_STACK_VAR(_g14,"_g14");
								HX_STACK_LINE(560)
								Float _g15 = ::Math_obj::max(calcFieldWidth,_g14);		HX_STACK_VAR(_g15,"_g15");
								HX_STACK_LINE(560)
								int _g16 = ::Std_obj::_int(_g15);		HX_STACK_VAR(_g16,"_g16");
								HX_STACK_LINE(560)
								calcFieldWidth = _g16;
								HX_STACK_LINE(561)
								rows->push(txt);
							}
							HX_STACK_LINE(563)
							lineComplete = true;
						}
					}
				}
				else{
					HX_STACK_LINE(569)
					rows->push(HX_CSTRING(""));
				}
			}
			else{
				HX_STACK_LINE(574)
				::String lineWithoutTabs = lines->__get(i).split(HX_CSTRING("\t"))->join(this->_tabSpaces);		HX_STACK_VAR(lineWithoutTabs,"lineWithoutTabs");
				HX_STACK_LINE(575)
				int _g17 = this->_font->getTextWidth(lineWithoutTabs,this->_letterSpacing,this->_fontScale);		HX_STACK_VAR(_g17,"_g17");
				HX_STACK_LINE(575)
				Float _g18 = ::Math_obj::max(calcFieldWidth,_g17);		HX_STACK_VAR(_g18,"_g18");
				HX_STACK_LINE(575)
				int _g19 = ::Std_obj::_int(_g18);		HX_STACK_VAR(_g19,"_g19");
				HX_STACK_LINE(575)
				calcFieldWidth = _g19;
				HX_STACK_LINE(576)
				rows->push(lineWithoutTabs);
			}
		}
		HX_STACK_LINE(580)
		int finalWidth;		HX_STACK_VAR(finalWidth,"finalWidth");
		HX_STACK_LINE(580)
		if ((this->_fixedWidth)){
			HX_STACK_LINE(580)
			Float _g20 = this->get_width();		HX_STACK_VAR(_g20,"_g20");
			HX_STACK_LINE(580)
			finalWidth = ::Std_obj::_int(_g20);
		}
		else{
			HX_STACK_LINE(580)
			finalWidth = ((calcFieldWidth + (this->_padding * (int)2)) + ((  ((this->_outline)) ? int((int)2) : int((int)0) )));
		}
		HX_STACK_LINE(586)
		Float _g21 = ::Math_obj::max((int)1,((((rows->length * fontHeight) * this->_fontScale) + ((  ((this->_shadow)) ? int((int)1) : int((int)0) ))) + ((  ((this->_outline)) ? int((int)2) : int((int)0) ))));		HX_STACK_VAR(_g21,"_g21");
		HX_STACK_LINE(586)
		Float _g22 = ((this->_padding * (int)2) + _g21);		HX_STACK_VAR(_g22,"_g22");
		HX_STACK_LINE(586)
		int _g23 = ::Std_obj::_int(_g22);		HX_STACK_VAR(_g23,"_g23");
		HX_STACK_LINE(586)
		int finalHeight;		HX_STACK_VAR(finalHeight,"finalHeight");
		HX_STACK_LINE(586)
		finalHeight = (_g23 + ((  (((rows->length >= (int)1))) ? int((this->_lineSpacing * ((rows->length - (int)1)))) : int((int)0) )));
		HX_STACK_LINE(588)
		int _g24 = this->frameWidth = finalWidth;		HX_STACK_VAR(_g24,"_g24");
		HX_STACK_LINE(588)
		this->set_width(_g24);
		HX_STACK_LINE(589)
		int _g25 = this->frameHeight = finalHeight;		HX_STACK_VAR(_g25,"_g25");
		HX_STACK_LINE(589)
		this->set_height(_g25);
		HX_STACK_LINE(590)
		this->frames = (int)1;
		HX_STACK_LINE(591)
		Float _g26 = this->get_width();		HX_STACK_VAR(_g26,"_g26");
		HX_STACK_LINE(591)
		Float _g27 = (_g26 * 0.5);		HX_STACK_VAR(_g27,"_g27");
		HX_STACK_LINE(591)
		this->origin->set_x(_g27);
		HX_STACK_LINE(592)
		Float _g28 = this->get_height();		HX_STACK_VAR(_g28,"_g28");
		HX_STACK_LINE(592)
		Float _g29 = (_g28 * 0.5);		HX_STACK_VAR(_g29,"_g29");
		HX_STACK_LINE(592)
		this->origin->set_y(_g29);
		HX_STACK_LINE(594)
		this->_halfWidth = this->origin->x;
		HX_STACK_LINE(595)
		this->_halfHeight = this->origin->y;
		HX_STACK_LINE(608)
		this->_drawData->splice((int)0,this->_drawData->length);
		HX_STACK_LINE(609)
		this->_bgDrawData->splice((int)0,this->_bgDrawData->length);
		HX_STACK_LINE(611)
		if (((this->cachedGraphics == null()))){
			HX_STACK_LINE(613)
			return null();
		}
		HX_STACK_LINE(617)
		if ((this->_background)){
			HX_STACK_LINE(620)
			int _g30 = this->_font->get_bgTileID();		HX_STACK_VAR(_g30,"_g30");
			HX_STACK_LINE(620)
			this->_bgDrawData->push(_g30);
			HX_STACK_LINE(621)
			this->_bgDrawData->push(-(this->_halfWidth));
			HX_STACK_LINE(622)
			this->_bgDrawData->push(-(this->_halfHeight));
			HX_STACK_LINE(625)
			Float colorMultiplier = 1.5378700499807768e-005;		HX_STACK_VAR(colorMultiplier,"colorMultiplier");
			HX_STACK_LINE(627)
			Float red = (((int(this->_backgroundColor) >> int((int)16))) * colorMultiplier);		HX_STACK_VAR(red,"red");
			HX_STACK_LINE(628)
			Float green = (((int((int(this->_backgroundColor) >> int((int)8))) & int((int)255))) * colorMultiplier);		HX_STACK_VAR(green,"green");
			HX_STACK_LINE(629)
			Float blue = (((int(this->_backgroundColor) & int((int)255))) * colorMultiplier);		HX_STACK_VAR(blue,"blue");
			HX_STACK_LINE(631)
			hx::MultEq(red,(int(this->color) >> int((int)16)));
			HX_STACK_LINE(632)
			hx::MultEq(green,(int((int(this->color) >> int((int)8))) & int((int)255)));
			HX_STACK_LINE(633)
			hx::MultEq(blue,(int(this->color) & int((int)255)));
			HX_STACK_LINE(636)
			this->_bgDrawData->push(red);
			HX_STACK_LINE(637)
			this->_bgDrawData->push(green);
			HX_STACK_LINE(638)
			this->_bgDrawData->push(blue);
		}
		HX_STACK_LINE(642)
		if (((this->_fontScale > (int)0))){
			HX_STACK_LINE(649)
			int row = (int)0;		HX_STACK_VAR(row,"row");
			HX_STACK_LINE(651)
			{
				HX_STACK_LINE(651)
				int _g = (int)0;		HX_STACK_VAR(_g,"_g");
				HX_STACK_LINE(651)
				while((true)){
					HX_STACK_LINE(651)
					if ((!(((_g < rows->length))))){
						HX_STACK_LINE(651)
						break;
					}
					HX_STACK_LINE(651)
					::String t = rows->__get(_g);		HX_STACK_VAR(t,"t");
					HX_STACK_LINE(651)
					++(_g);
					HX_STACK_LINE(654)
					int ox = (int)0;		HX_STACK_VAR(ox,"ox");
					HX_STACK_LINE(655)
					int oy = (int)0;		HX_STACK_VAR(oy,"oy");
					HX_STACK_LINE(657)
					if (((alignment == (int)3))){
						HX_STACK_LINE(659)
						if ((this->_fixedWidth)){
							HX_STACK_LINE(661)
							Float _g31 = this->get_width();		HX_STACK_VAR(_g31,"_g31");
							HX_STACK_LINE(661)
							int _g32 = this->_font->getTextWidth(t,this->_letterSpacing,this->_fontScale);		HX_STACK_VAR(_g32,"_g32");
							HX_STACK_LINE(661)
							Float _g33 = (_g31 - _g32);		HX_STACK_VAR(_g33,"_g33");
							HX_STACK_LINE(661)
							Float _g34 = (Float(_g33) / Float((int)2));		HX_STACK_VAR(_g34,"_g34");
							HX_STACK_LINE(661)
							int _g35 = ::Std_obj::_int(_g34);		HX_STACK_VAR(_g35,"_g35");
							HX_STACK_LINE(661)
							ox = _g35;
						}
						else{
							HX_STACK_LINE(665)
							int _g36 = this->_font->getTextWidth(t,this->_letterSpacing,this->_fontScale);		HX_STACK_VAR(_g36,"_g36");
							HX_STACK_LINE(665)
							int _g37 = (finalWidth - _g36);		HX_STACK_VAR(_g37,"_g37");
							HX_STACK_LINE(665)
							Float _g38 = (Float(_g37) / Float((int)2));		HX_STACK_VAR(_g38,"_g38");
							HX_STACK_LINE(665)
							int _g39 = ::Std_obj::_int(_g38);		HX_STACK_VAR(_g39,"_g39");
							HX_STACK_LINE(665)
							ox = _g39;
						}
					}
					HX_STACK_LINE(668)
					if (((alignment == (int)2))){
						HX_STACK_LINE(670)
						if ((this->_fixedWidth)){
							HX_STACK_LINE(672)
							Float _g40 = this->get_width();		HX_STACK_VAR(_g40,"_g40");
							HX_STACK_LINE(672)
							int _g41 = ::Std_obj::_int(_g40);		HX_STACK_VAR(_g41,"_g41");
							HX_STACK_LINE(672)
							int _g42 = this->_font->getTextWidth(t,this->_letterSpacing,this->_fontScale);		HX_STACK_VAR(_g42,"_g42");
							HX_STACK_LINE(672)
							int _g43 = ::Std_obj::_int(_g42);		HX_STACK_VAR(_g43,"_g43");
							HX_STACK_LINE(672)
							int _g44 = (_g41 - _g43);		HX_STACK_VAR(_g44,"_g44");
							HX_STACK_LINE(672)
							ox = _g44;
						}
						else{
							HX_STACK_LINE(676)
							int _g45 = this->_font->getTextWidth(t,this->_letterSpacing,this->_fontScale);		HX_STACK_VAR(_g45,"_g45");
							HX_STACK_LINE(676)
							int _g46 = ::Std_obj::_int(_g45);		HX_STACK_VAR(_g46,"_g46");
							HX_STACK_LINE(676)
							int _g47 = (finalWidth - _g46);		HX_STACK_VAR(_g47,"_g47");
							HX_STACK_LINE(676)
							int _g48 = this->get_padding();		HX_STACK_VAR(_g48,"_g48");
							HX_STACK_LINE(676)
							int _g49 = ((int)2 * _g48);		HX_STACK_VAR(_g49,"_g49");
							HX_STACK_LINE(676)
							int _g50 = (_g47 - _g49);		HX_STACK_VAR(_g50,"_g50");
							HX_STACK_LINE(676)
							ox = _g50;
						}
					}
					HX_STACK_LINE(679)
					if ((this->_outline)){
						HX_STACK_LINE(681)
						{
							HX_STACK_LINE(681)
							int _g2 = (int)0;		HX_STACK_VAR(_g2,"_g2");
							HX_STACK_LINE(681)
							int _g1 = (int)3;		HX_STACK_VAR(_g1,"_g1");
							HX_STACK_LINE(681)
							while((true)){
								HX_STACK_LINE(681)
								if ((!(((_g2 < _g1))))){
									HX_STACK_LINE(681)
									break;
								}
								HX_STACK_LINE(681)
								int py = (_g2)++;		HX_STACK_VAR(py,"py");
								HX_STACK_LINE(683)
								{
									HX_STACK_LINE(683)
									int _g4 = (int)0;		HX_STACK_VAR(_g4,"_g4");
									HX_STACK_LINE(683)
									int _g3 = (int)3;		HX_STACK_VAR(_g3,"_g3");
									HX_STACK_LINE(683)
									while((true)){
										HX_STACK_LINE(683)
										if ((!(((_g4 < _g3))))){
											HX_STACK_LINE(683)
											break;
										}
										HX_STACK_LINE(683)
										int px = (_g4)++;		HX_STACK_VAR(px,"px");
										HX_STACK_LINE(688)
										this->_font->render(this->_drawData,t,this->_outlineColor,this->color,this->alpha,(((px + ox) + this->_padding) - this->_halfWidth),(((py + (row * (((fontHeight * this->_fontScale) + this->_lineSpacing)))) + this->_padding) - this->_halfHeight),this->_letterSpacing,this->_fontScale,null());
									}
								}
							}
						}
						HX_STACK_LINE(692)
						hx::AddEq(ox,(int)1);
						HX_STACK_LINE(693)
						hx::AddEq(oy,(int)1);
					}
					HX_STACK_LINE(695)
					if ((this->_shadow)){
						HX_STACK_LINE(700)
						this->_font->render(this->_drawData,t,this->_shadowColor,this->color,this->alpha,((((int)1 + ox) + this->_padding) - this->_halfWidth),(((((int)1 + oy) + (row * (((fontHeight * this->_fontScale) + this->_lineSpacing)))) + this->_padding) - this->_halfHeight),this->_letterSpacing,this->_fontScale,null());
					}
					HX_STACK_LINE(707)
					this->_font->render(this->_drawData,t,this->_textColor,this->color,this->alpha,((ox + this->_padding) - this->_halfWidth),(((oy + (row * (((fontHeight * this->_fontScale) + this->_lineSpacing)))) + this->_padding) - this->_halfHeight),this->_letterSpacing,this->_fontScale,this->_useTextColor);
					HX_STACK_LINE(709)
					(row)++;
				}
			}
		}
		HX_STACK_LINE(719)
		this->_pendingTextChange = false;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(FlxBitmapTextField_obj,updateBitmapData,(void))

bool FlxBitmapTextField_obj::get_background( ){
	HX_STACK_FRAME("flixel.text.FlxBitmapTextField","get_background",0xa814718a,"flixel.text.FlxBitmapTextField.get_background","flixel/text/FlxBitmapTextField.hx",729,0xd7ef4783)
	HX_STACK_THIS(this)
	HX_STACK_LINE(729)
	return this->_background;
}


HX_DEFINE_DYNAMIC_FUNC0(FlxBitmapTextField_obj,get_background,return )

bool FlxBitmapTextField_obj::set_background( bool Value){
	HX_STACK_FRAME("flixel.text.FlxBitmapTextField","set_background",0xc83459fe,"flixel.text.FlxBitmapTextField.set_background","flixel/text/FlxBitmapTextField.hx",733,0xd7ef4783)
	HX_STACK_THIS(this)
	HX_STACK_ARG(Value,"Value")
	HX_STACK_LINE(734)
	if (((this->_background != Value))){
		HX_STACK_LINE(736)
		this->_background = Value;
		HX_STACK_LINE(737)
		this->_pendingTextChange = true;
	}
	HX_STACK_LINE(740)
	return this->_background;
}


HX_DEFINE_DYNAMIC_FUNC1(FlxBitmapTextField_obj,set_background,return )

int FlxBitmapTextField_obj::get_backgroundColor( ){
	HX_STACK_FRAME("flixel.text.FlxBitmapTextField","get_backgroundColor",0xedfb9b79,"flixel.text.FlxBitmapTextField.get_backgroundColor","flixel/text/FlxBitmapTextField.hx",750,0xd7ef4783)
	HX_STACK_THIS(this)
	HX_STACK_LINE(750)
	return this->_backgroundColor;
}


HX_DEFINE_DYNAMIC_FUNC0(FlxBitmapTextField_obj,get_backgroundColor,return )

int FlxBitmapTextField_obj::set_backgroundColor( int Value){
	HX_STACK_FRAME("flixel.text.FlxBitmapTextField","set_backgroundColor",0x2a988e85,"flixel.text.FlxBitmapTextField.set_backgroundColor","flixel/text/FlxBitmapTextField.hx",754,0xd7ef4783)
	HX_STACK_THIS(this)
	HX_STACK_ARG(Value,"Value")
	HX_STACK_LINE(755)
	if (((this->_backgroundColor != Value))){
		HX_STACK_LINE(757)
		this->_backgroundColor = Value;
		HX_STACK_LINE(759)
		if ((this->_background)){
			HX_STACK_LINE(761)
			this->_pendingTextChange = true;
		}
	}
	HX_STACK_LINE(764)
	return this->_backgroundColor;
}


HX_DEFINE_DYNAMIC_FUNC1(FlxBitmapTextField_obj,set_backgroundColor,return )

bool FlxBitmapTextField_obj::get_shadow( ){
	HX_STACK_FRAME("flixel.text.FlxBitmapTextField","get_shadow",0x8539a77c,"flixel.text.FlxBitmapTextField.get_shadow","flixel/text/FlxBitmapTextField.hx",774,0xd7ef4783)
	HX_STACK_THIS(this)
	HX_STACK_LINE(774)
	return this->_shadow;
}


HX_DEFINE_DYNAMIC_FUNC0(FlxBitmapTextField_obj,get_shadow,return )

bool FlxBitmapTextField_obj::set_shadow( bool Value){
	HX_STACK_FRAME("flixel.text.FlxBitmapTextField","set_shadow",0x88b745f0,"flixel.text.FlxBitmapTextField.set_shadow","flixel/text/FlxBitmapTextField.hx",778,0xd7ef4783)
	HX_STACK_THIS(this)
	HX_STACK_ARG(Value,"Value")
	HX_STACK_LINE(779)
	if (((this->_shadow != Value))){
		HX_STACK_LINE(781)
		this->_shadow = Value;
		HX_STACK_LINE(782)
		this->_outline = false;
		HX_STACK_LINE(783)
		this->updateGlyphs(false,this->_shadow,false);
		HX_STACK_LINE(784)
		this->_pendingTextChange = true;
	}
	HX_STACK_LINE(787)
	return Value;
}


HX_DEFINE_DYNAMIC_FUNC1(FlxBitmapTextField_obj,set_shadow,return )

int FlxBitmapTextField_obj::get_shadowColor( ){
	HX_STACK_FRAME("flixel.text.FlxBitmapTextField","get_shadowColor",0xf7339847,"flixel.text.FlxBitmapTextField.get_shadowColor","flixel/text/FlxBitmapTextField.hx",797,0xd7ef4783)
	HX_STACK_THIS(this)
	HX_STACK_LINE(797)
	return this->_shadowColor;
}


HX_DEFINE_DYNAMIC_FUNC0(FlxBitmapTextField_obj,get_shadowColor,return )

int FlxBitmapTextField_obj::set_shadowColor( int Value){
	HX_STACK_FRAME("flixel.text.FlxBitmapTextField","set_shadowColor",0xf2ff1553,"flixel.text.FlxBitmapTextField.set_shadowColor","flixel/text/FlxBitmapTextField.hx",801,0xd7ef4783)
	HX_STACK_THIS(this)
	HX_STACK_ARG(Value,"Value")
	HX_STACK_LINE(802)
	if (((this->_shadowColor != Value))){
		HX_STACK_LINE(804)
		this->_shadowColor = Value;
		HX_STACK_LINE(805)
		this->updateGlyphs(false,this->_shadow,false);
		HX_STACK_LINE(806)
		this->_pendingTextChange = true;
	}
	HX_STACK_LINE(809)
	return Value;
}


HX_DEFINE_DYNAMIC_FUNC1(FlxBitmapTextField_obj,set_shadowColor,return )

int FlxBitmapTextField_obj::get_padding( ){
	HX_STACK_FRAME("flixel.text.FlxBitmapTextField","get_padding",0x7e2822b5,"flixel.text.FlxBitmapTextField.get_padding","flixel/text/FlxBitmapTextField.hx",819,0xd7ef4783)
	HX_STACK_THIS(this)
	HX_STACK_LINE(819)
	return this->_padding;
}


HX_DEFINE_DYNAMIC_FUNC0(FlxBitmapTextField_obj,get_padding,return )

int FlxBitmapTextField_obj::set_padding( int Value){
	HX_STACK_FRAME("flixel.text.FlxBitmapTextField","set_padding",0x889529c1,"flixel.text.FlxBitmapTextField.set_padding","flixel/text/FlxBitmapTextField.hx",823,0xd7ef4783)
	HX_STACK_THIS(this)
	HX_STACK_ARG(Value,"Value")
	HX_STACK_LINE(824)
	if (((this->_padding != Value))){
		HX_STACK_LINE(826)
		this->_padding = Value;
		HX_STACK_LINE(827)
		this->_pendingTextChange = true;
	}
	HX_STACK_LINE(830)
	return Value;
}


HX_DEFINE_DYNAMIC_FUNC1(FlxBitmapTextField_obj,set_padding,return )

Float FlxBitmapTextField_obj::set_width( Float PxWidth){
	HX_STACK_FRAME("flixel.text.FlxBitmapTextField","set_width",0x6de1a9f6,"flixel.text.FlxBitmapTextField.set_width","flixel/text/FlxBitmapTextField.hx",837,0xd7ef4783)
	HX_STACK_THIS(this)
	HX_STACK_ARG(PxWidth,"PxWidth")
	HX_STACK_LINE(838)
	int _g = ::Std_obj::_int(PxWidth);		HX_STACK_VAR(_g,"_g");
	HX_STACK_LINE(838)
	PxWidth = _g;
	HX_STACK_LINE(840)
	if (((PxWidth < (int)1))){
		HX_STACK_LINE(842)
		PxWidth = (int)1;
	}
	HX_STACK_LINE(844)
	Float _g1 = this->get_width();		HX_STACK_VAR(_g1,"_g1");
	HX_STACK_LINE(844)
	if (((PxWidth != _g1))){
		HX_STACK_LINE(846)
		this->_pendingTextChange = true;
	}
	HX_STACK_LINE(849)
	return this->super::set_width(PxWidth);
}


int FlxBitmapTextField_obj::get_alignment( ){
	HX_STACK_FRAME("flixel.text.FlxBitmapTextField","get_alignment",0x6ed7acc7,"flixel.text.FlxBitmapTextField.get_alignment","flixel/text/FlxBitmapTextField.hx",860,0xd7ef4783)
	HX_STACK_THIS(this)
	HX_STACK_LINE(860)
	return this->_alignment;
}


HX_DEFINE_DYNAMIC_FUNC0(FlxBitmapTextField_obj,get_alignment,return )

int FlxBitmapTextField_obj::set_alignment( int PxAlignment){
	HX_STACK_FRAME("flixel.text.FlxBitmapTextField","set_alignment",0xb3dd8ed3,"flixel.text.FlxBitmapTextField.set_alignment","flixel/text/FlxBitmapTextField.hx",864,0xd7ef4783)
	HX_STACK_THIS(this)
	HX_STACK_ARG(PxAlignment,"PxAlignment")
	HX_STACK_LINE(865)
	if (((this->_alignment != PxAlignment))){
		HX_STACK_LINE(867)
		this->_alignment = PxAlignment;
		HX_STACK_LINE(868)
		this->_pendingTextChange = true;
	}
	HX_STACK_LINE(871)
	return PxAlignment;
}


HX_DEFINE_DYNAMIC_FUNC1(FlxBitmapTextField_obj,set_alignment,return )

bool FlxBitmapTextField_obj::get_multiLine( ){
	HX_STACK_FRAME("flixel.text.FlxBitmapTextField","get_multiLine",0x0d84c8f1,"flixel.text.FlxBitmapTextField.get_multiLine","flixel/text/FlxBitmapTextField.hx",881,0xd7ef4783)
	HX_STACK_THIS(this)
	HX_STACK_LINE(881)
	return this->_multiLine;
}


HX_DEFINE_DYNAMIC_FUNC0(FlxBitmapTextField_obj,get_multiLine,return )

bool FlxBitmapTextField_obj::set_multiLine( bool PxMultiLine){
	HX_STACK_FRAME("flixel.text.FlxBitmapTextField","set_multiLine",0x528aaafd,"flixel.text.FlxBitmapTextField.set_multiLine","flixel/text/FlxBitmapTextField.hx",885,0xd7ef4783)
	HX_STACK_THIS(this)
	HX_STACK_ARG(PxMultiLine,"PxMultiLine")
	HX_STACK_LINE(886)
	if (((this->_multiLine != PxMultiLine))){
		HX_STACK_LINE(888)
		this->_multiLine = PxMultiLine;
		HX_STACK_LINE(889)
		this->_pendingTextChange = true;
	}
	HX_STACK_LINE(892)
	return PxMultiLine;
}


HX_DEFINE_DYNAMIC_FUNC1(FlxBitmapTextField_obj,set_multiLine,return )

bool FlxBitmapTextField_obj::get_outline( ){
	HX_STACK_FRAME("flixel.text.FlxBitmapTextField","get_outline",0x8f68e066,"flixel.text.FlxBitmapTextField.get_outline","flixel/text/FlxBitmapTextField.hx",902,0xd7ef4783)
	HX_STACK_THIS(this)
	HX_STACK_LINE(902)
	return this->_outline;
}


HX_DEFINE_DYNAMIC_FUNC0(FlxBitmapTextField_obj,get_outline,return )

bool FlxBitmapTextField_obj::set_outline( bool Value){
	HX_STACK_FRAME("flixel.text.FlxBitmapTextField","set_outline",0x99d5e772,"flixel.text.FlxBitmapTextField.set_outline","flixel/text/FlxBitmapTextField.hx",906,0xd7ef4783)
	HX_STACK_THIS(this)
	HX_STACK_ARG(Value,"Value")
	HX_STACK_LINE(907)
	if (((this->_outline != Value))){
		HX_STACK_LINE(909)
		this->_outline = Value;
		HX_STACK_LINE(910)
		this->_shadow = false;
		HX_STACK_LINE(911)
		this->updateGlyphs(false,false,true);
		HX_STACK_LINE(912)
		this->_pendingTextChange = true;
	}
	HX_STACK_LINE(915)
	return Value;
}


HX_DEFINE_DYNAMIC_FUNC1(FlxBitmapTextField_obj,set_outline,return )

int FlxBitmapTextField_obj::get_outlineColor( ){
	HX_STACK_FRAME("flixel.text.FlxBitmapTextField","get_outlineColor",0x2e5bcf1d,"flixel.text.FlxBitmapTextField.get_outlineColor","flixel/text/FlxBitmapTextField.hx",925,0xd7ef4783)
	HX_STACK_THIS(this)
	HX_STACK_LINE(925)
	return this->_outlineColor;
}


HX_DEFINE_DYNAMIC_FUNC0(FlxBitmapTextField_obj,get_outlineColor,return )

int FlxBitmapTextField_obj::set_outlineColor( int Value){
	HX_STACK_FRAME("flixel.text.FlxBitmapTextField","set_outlineColor",0x849dbc91,"flixel.text.FlxBitmapTextField.set_outlineColor","flixel/text/FlxBitmapTextField.hx",929,0xd7ef4783)
	HX_STACK_THIS(this)
	HX_STACK_ARG(Value,"Value")
	HX_STACK_LINE(930)
	if (((this->_outlineColor != Value))){
		HX_STACK_LINE(932)
		this->_outlineColor = Value;
		HX_STACK_LINE(933)
		this->updateGlyphs(false,false,this->_outline);
		HX_STACK_LINE(934)
		this->_pendingTextChange = true;
	}
	HX_STACK_LINE(937)
	return Value;
}


HX_DEFINE_DYNAMIC_FUNC1(FlxBitmapTextField_obj,set_outlineColor,return )

::flixel::text::pxText::PxBitmapFont FlxBitmapTextField_obj::get_font( ){
	HX_STACK_FRAME("flixel.text.FlxBitmapTextField","get_font",0x45c2de6b,"flixel.text.FlxBitmapTextField.get_font","flixel/text/FlxBitmapTextField.hx",947,0xd7ef4783)
	HX_STACK_THIS(this)
	HX_STACK_LINE(947)
	return this->_font;
}


HX_DEFINE_DYNAMIC_FUNC0(FlxBitmapTextField_obj,get_font,return )

::flixel::text::pxText::PxBitmapFont FlxBitmapTextField_obj::set_font( ::flixel::text::pxText::PxBitmapFont PxFont){
	HX_STACK_FRAME("flixel.text.FlxBitmapTextField","set_font",0xf42037df,"flixel.text.FlxBitmapTextField.set_font","flixel/text/FlxBitmapTextField.hx",951,0xd7ef4783)
	HX_STACK_THIS(this)
	HX_STACK_ARG(PxFont,"PxFont")
	HX_STACK_LINE(952)
	if (((this->_font != PxFont))){
		HX_STACK_LINE(954)
		this->_font = PxFont;
		HX_STACK_LINE(955)
		this->updateGlyphs(true,this->_shadow,this->_outline);
		HX_STACK_LINE(956)
		this->_pendingTextChange = true;
		HX_STACK_LINE(959)
		::openfl::display::BitmapData _g = this->_font->get_pixels();		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(959)
		this->set_pixels(_g);
	}
	HX_STACK_LINE(963)
	return PxFont;
}


HX_DEFINE_DYNAMIC_FUNC1(FlxBitmapTextField_obj,set_font,return )

int FlxBitmapTextField_obj::get_lineSpacing( ){
	HX_STACK_FRAME("flixel.text.FlxBitmapTextField","get_lineSpacing",0x0619f4d3,"flixel.text.FlxBitmapTextField.get_lineSpacing","flixel/text/FlxBitmapTextField.hx",973,0xd7ef4783)
	HX_STACK_THIS(this)
	HX_STACK_LINE(973)
	return this->_lineSpacing;
}


HX_DEFINE_DYNAMIC_FUNC0(FlxBitmapTextField_obj,get_lineSpacing,return )

int FlxBitmapTextField_obj::set_lineSpacing( int PxSpacing){
	HX_STACK_FRAME("flixel.text.FlxBitmapTextField","set_lineSpacing",0x01e571df,"flixel.text.FlxBitmapTextField.set_lineSpacing","flixel/text/FlxBitmapTextField.hx",977,0xd7ef4783)
	HX_STACK_THIS(this)
	HX_STACK_ARG(PxSpacing,"PxSpacing")
	HX_STACK_LINE(978)
	if (((this->_lineSpacing != PxSpacing))){
		HX_STACK_LINE(980)
		Float _g = ::Math_obj::abs(PxSpacing);		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(980)
		int _g1 = ::Std_obj::_int(_g);		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(980)
		this->_lineSpacing = _g1;
		HX_STACK_LINE(981)
		this->_pendingTextChange = true;
	}
	HX_STACK_LINE(984)
	return PxSpacing;
}


HX_DEFINE_DYNAMIC_FUNC1(FlxBitmapTextField_obj,set_lineSpacing,return )

Float FlxBitmapTextField_obj::get_fontScale( ){
	HX_STACK_FRAME("flixel.text.FlxBitmapTextField","get_fontScale",0xa9443c1f,"flixel.text.FlxBitmapTextField.get_fontScale","flixel/text/FlxBitmapTextField.hx",994,0xd7ef4783)
	HX_STACK_THIS(this)
	HX_STACK_LINE(994)
	return this->_fontScale;
}


HX_DEFINE_DYNAMIC_FUNC0(FlxBitmapTextField_obj,get_fontScale,return )

Float FlxBitmapTextField_obj::set_fontScale( Float PxScale){
	HX_STACK_FRAME("flixel.text.FlxBitmapTextField","set_fontScale",0xee4a1e2b,"flixel.text.FlxBitmapTextField.set_fontScale","flixel/text/FlxBitmapTextField.hx",998,0xd7ef4783)
	HX_STACK_THIS(this)
	HX_STACK_ARG(PxScale,"PxScale")
	HX_STACK_LINE(999)
	Float tmp = ::Math_obj::abs(PxScale);		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(1001)
	if (((tmp != this->_fontScale))){
		HX_STACK_LINE(1003)
		this->_fontScale = tmp;
		HX_STACK_LINE(1004)
		this->updateGlyphs(true,this->_shadow,this->_outline);
		HX_STACK_LINE(1005)
		this->_pendingTextChange = true;
	}
	HX_STACK_LINE(1008)
	return PxScale;
}


HX_DEFINE_DYNAMIC_FUNC1(FlxBitmapTextField_obj,set_fontScale,return )

int FlxBitmapTextField_obj::get_letterSpacing( ){
	HX_STACK_FRAME("flixel.text.FlxBitmapTextField","get_letterSpacing",0x0c124321,"flixel.text.FlxBitmapTextField.get_letterSpacing","flixel/text/FlxBitmapTextField.hx",1015,0xd7ef4783)
	HX_STACK_THIS(this)
	HX_STACK_LINE(1015)
	return this->_letterSpacing;
}


HX_DEFINE_DYNAMIC_FUNC0(FlxBitmapTextField_obj,get_letterSpacing,return )

int FlxBitmapTextField_obj::set_letterSpacing( int PxSpacing){
	HX_STACK_FRAME("flixel.text.FlxBitmapTextField","set_letterSpacing",0x2f801b2d,"flixel.text.FlxBitmapTextField.set_letterSpacing","flixel/text/FlxBitmapTextField.hx",1019,0xd7ef4783)
	HX_STACK_THIS(this)
	HX_STACK_ARG(PxSpacing,"PxSpacing")
	HX_STACK_LINE(1020)
	Float _g = ::Math_obj::abs(PxSpacing);		HX_STACK_VAR(_g,"_g");
	HX_STACK_LINE(1020)
	int tmp = ::Std_obj::_int(_g);		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(1022)
	if (((tmp != this->_letterSpacing))){
		HX_STACK_LINE(1024)
		this->_letterSpacing = tmp;
		HX_STACK_LINE(1025)
		this->_pendingTextChange = true;
	}
	HX_STACK_LINE(1028)
	return this->_letterSpacing;
}


HX_DEFINE_DYNAMIC_FUNC1(FlxBitmapTextField_obj,set_letterSpacing,return )

bool FlxBitmapTextField_obj::get_autoUpperCase( ){
	HX_STACK_FRAME("flixel.text.FlxBitmapTextField","get_autoUpperCase",0xca7863a7,"flixel.text.FlxBitmapTextField.get_autoUpperCase","flixel/text/FlxBitmapTextField.hx",1035,0xd7ef4783)
	HX_STACK_THIS(this)
	HX_STACK_LINE(1035)
	return this->_autoUpperCase;
}


HX_DEFINE_DYNAMIC_FUNC0(FlxBitmapTextField_obj,get_autoUpperCase,return )

bool FlxBitmapTextField_obj::set_autoUpperCase( bool Value){
	HX_STACK_FRAME("flixel.text.FlxBitmapTextField","set_autoUpperCase",0xede63bb3,"flixel.text.FlxBitmapTextField.set_autoUpperCase","flixel/text/FlxBitmapTextField.hx",1039,0xd7ef4783)
	HX_STACK_THIS(this)
	HX_STACK_ARG(Value,"Value")
	HX_STACK_LINE(1040)
	if (((this->_autoUpperCase != Value))){
		HX_STACK_LINE(1042)
		this->_autoUpperCase = Value;
		HX_STACK_LINE(1043)
		this->_pendingTextChange = true;
	}
	HX_STACK_LINE(1046)
	return this->_autoUpperCase;
}


HX_DEFINE_DYNAMIC_FUNC1(FlxBitmapTextField_obj,set_autoUpperCase,return )

bool FlxBitmapTextField_obj::get_wordWrap( ){
	HX_STACK_FRAME("flixel.text.FlxBitmapTextField","get_wordWrap",0x48a01350,"flixel.text.FlxBitmapTextField.get_wordWrap","flixel/text/FlxBitmapTextField.hx",1053,0xd7ef4783)
	HX_STACK_THIS(this)
	HX_STACK_LINE(1053)
	return this->_wordWrap;
}


HX_DEFINE_DYNAMIC_FUNC0(FlxBitmapTextField_obj,get_wordWrap,return )

bool FlxBitmapTextField_obj::set_wordWrap( bool Value){
	HX_STACK_FRAME("flixel.text.FlxBitmapTextField","set_wordWrap",0x5d9936c4,"flixel.text.FlxBitmapTextField.set_wordWrap","flixel/text/FlxBitmapTextField.hx",1057,0xd7ef4783)
	HX_STACK_THIS(this)
	HX_STACK_ARG(Value,"Value")
	HX_STACK_LINE(1058)
	if (((this->_wordWrap != Value))){
		HX_STACK_LINE(1060)
		this->_wordWrap = Value;
		HX_STACK_LINE(1061)
		this->_pendingTextChange = true;
	}
	HX_STACK_LINE(1064)
	return this->_wordWrap;
}


HX_DEFINE_DYNAMIC_FUNC1(FlxBitmapTextField_obj,set_wordWrap,return )

bool FlxBitmapTextField_obj::get_fixedWidth( ){
	HX_STACK_FRAME("flixel.text.FlxBitmapTextField","get_fixedWidth",0x3584458e,"flixel.text.FlxBitmapTextField.get_fixedWidth","flixel/text/FlxBitmapTextField.hx",1071,0xd7ef4783)
	HX_STACK_THIS(this)
	HX_STACK_LINE(1071)
	return this->_fixedWidth;
}


HX_DEFINE_DYNAMIC_FUNC0(FlxBitmapTextField_obj,get_fixedWidth,return )

bool FlxBitmapTextField_obj::set_fixedWidth( bool Value){
	HX_STACK_FRAME("flixel.text.FlxBitmapTextField","set_fixedWidth",0x55a42e02,"flixel.text.FlxBitmapTextField.set_fixedWidth","flixel/text/FlxBitmapTextField.hx",1075,0xd7ef4783)
	HX_STACK_THIS(this)
	HX_STACK_ARG(Value,"Value")
	HX_STACK_LINE(1076)
	if (((this->_fixedWidth != Value))){
		HX_STACK_LINE(1078)
		this->_fixedWidth = Value;
		HX_STACK_LINE(1079)
		this->_pendingTextChange = true;
	}
	HX_STACK_LINE(1082)
	return this->_fixedWidth;
}


HX_DEFINE_DYNAMIC_FUNC1(FlxBitmapTextField_obj,set_fixedWidth,return )

Void FlxBitmapTextField_obj::updateGlyphs( hx::Null< bool >  __o_TextGlyphs,hx::Null< bool >  __o_ShadowGlyphs,hx::Null< bool >  __o_OutlineGlyphs){
bool TextGlyphs = __o_TextGlyphs.Default(false);
bool ShadowGlyphs = __o_ShadowGlyphs.Default(false);
bool OutlineGlyphs = __o_OutlineGlyphs.Default(false);
	HX_STACK_FRAME("flixel.text.FlxBitmapTextField","updateGlyphs",0x40c7eac3,"flixel.text.FlxBitmapTextField.updateGlyphs","flixel/text/FlxBitmapTextField.hx",1086,0xd7ef4783)
	HX_STACK_THIS(this)
	HX_STACK_ARG(TextGlyphs,"TextGlyphs")
	HX_STACK_ARG(ShadowGlyphs,"ShadowGlyphs")
	HX_STACK_ARG(OutlineGlyphs,"OutlineGlyphs")
{
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC3(FlxBitmapTextField_obj,updateGlyphs,(void))


FlxBitmapTextField_obj::FlxBitmapTextField_obj()
{
}

void FlxBitmapTextField_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(FlxBitmapTextField);
	HX_MARK_MEMBER_NAME(_font,"_font");
	HX_MARK_MEMBER_NAME(_text,"_text");
	HX_MARK_MEMBER_NAME(_textColor,"_textColor");
	HX_MARK_MEMBER_NAME(_useTextColor,"_useTextColor");
	HX_MARK_MEMBER_NAME(_outline,"_outline");
	HX_MARK_MEMBER_NAME(_outlineColor,"_outlineColor");
	HX_MARK_MEMBER_NAME(_shadow,"_shadow");
	HX_MARK_MEMBER_NAME(_shadowColor,"_shadowColor");
	HX_MARK_MEMBER_NAME(_background,"_background");
	HX_MARK_MEMBER_NAME(_backgroundColor,"_backgroundColor");
	HX_MARK_MEMBER_NAME(_alignment,"_alignment");
	HX_MARK_MEMBER_NAME(_padding,"_padding");
	HX_MARK_MEMBER_NAME(_lineSpacing,"_lineSpacing");
	HX_MARK_MEMBER_NAME(_letterSpacing,"_letterSpacing");
	HX_MARK_MEMBER_NAME(_fontScale,"_fontScale");
	HX_MARK_MEMBER_NAME(_autoUpperCase,"_autoUpperCase");
	HX_MARK_MEMBER_NAME(_wordWrap,"_wordWrap");
	HX_MARK_MEMBER_NAME(_fixedWidth,"_fixedWidth");
	HX_MARK_MEMBER_NAME(_numSpacesInTab,"_numSpacesInTab");
	HX_MARK_MEMBER_NAME(_tabSpaces,"_tabSpaces");
	HX_MARK_MEMBER_NAME(_pendingTextChange,"_pendingTextChange");
	HX_MARK_MEMBER_NAME(_multiLine,"_multiLine");
	HX_MARK_MEMBER_NAME(_drawData,"_drawData");
	HX_MARK_MEMBER_NAME(_bgDrawData,"_bgDrawData");
	::flixel::FlxSprite_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void FlxBitmapTextField_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(_font,"_font");
	HX_VISIT_MEMBER_NAME(_text,"_text");
	HX_VISIT_MEMBER_NAME(_textColor,"_textColor");
	HX_VISIT_MEMBER_NAME(_useTextColor,"_useTextColor");
	HX_VISIT_MEMBER_NAME(_outline,"_outline");
	HX_VISIT_MEMBER_NAME(_outlineColor,"_outlineColor");
	HX_VISIT_MEMBER_NAME(_shadow,"_shadow");
	HX_VISIT_MEMBER_NAME(_shadowColor,"_shadowColor");
	HX_VISIT_MEMBER_NAME(_background,"_background");
	HX_VISIT_MEMBER_NAME(_backgroundColor,"_backgroundColor");
	HX_VISIT_MEMBER_NAME(_alignment,"_alignment");
	HX_VISIT_MEMBER_NAME(_padding,"_padding");
	HX_VISIT_MEMBER_NAME(_lineSpacing,"_lineSpacing");
	HX_VISIT_MEMBER_NAME(_letterSpacing,"_letterSpacing");
	HX_VISIT_MEMBER_NAME(_fontScale,"_fontScale");
	HX_VISIT_MEMBER_NAME(_autoUpperCase,"_autoUpperCase");
	HX_VISIT_MEMBER_NAME(_wordWrap,"_wordWrap");
	HX_VISIT_MEMBER_NAME(_fixedWidth,"_fixedWidth");
	HX_VISIT_MEMBER_NAME(_numSpacesInTab,"_numSpacesInTab");
	HX_VISIT_MEMBER_NAME(_tabSpaces,"_tabSpaces");
	HX_VISIT_MEMBER_NAME(_pendingTextChange,"_pendingTextChange");
	HX_VISIT_MEMBER_NAME(_multiLine,"_multiLine");
	HX_VISIT_MEMBER_NAME(_drawData,"_drawData");
	HX_VISIT_MEMBER_NAME(_bgDrawData,"_bgDrawData");
	::flixel::FlxSprite_obj::__Visit(HX_VISIT_ARG);
}

Dynamic FlxBitmapTextField_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"draw") ) { return draw_dyn(); }
		if (HX_FIELD_EQ(inName,"text") ) { return get_text(); }
		if (HX_FIELD_EQ(inName,"font") ) { return get_font(); }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"_font") ) { return _font; }
		if (HX_FIELD_EQ(inName,"_text") ) { return _text; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"update") ) { return update_dyn(); }
		if (HX_FIELD_EQ(inName,"shadow") ) { return get_shadow(); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"_shadow") ) { return _shadow; }
		if (HX_FIELD_EQ(inName,"destroy") ) { return destroy_dyn(); }
		if (HX_FIELD_EQ(inName,"padding") ) { return get_padding(); }
		if (HX_FIELD_EQ(inName,"outline") ) { return get_outline(); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"_outline") ) { return _outline; }
		if (HX_FIELD_EQ(inName,"_padding") ) { return _padding; }
		if (HX_FIELD_EQ(inName,"get_text") ) { return get_text_dyn(); }
		if (HX_FIELD_EQ(inName,"set_text") ) { return set_text_dyn(); }
		if (HX_FIELD_EQ(inName,"get_font") ) { return get_font_dyn(); }
		if (HX_FIELD_EQ(inName,"set_font") ) { return set_font_dyn(); }
		if (HX_FIELD_EQ(inName,"wordWrap") ) { return get_wordWrap(); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"_wordWrap") ) { return _wordWrap; }
		if (HX_FIELD_EQ(inName,"_drawData") ) { return _drawData; }
		if (HX_FIELD_EQ(inName,"set_color") ) { return set_color_dyn(); }
		if (HX_FIELD_EQ(inName,"textColor") ) { return get_textColor(); }
		if (HX_FIELD_EQ(inName,"set_alpha") ) { return set_alpha_dyn(); }
		if (HX_FIELD_EQ(inName,"set_width") ) { return set_width_dyn(); }
		if (HX_FIELD_EQ(inName,"alignment") ) { return get_alignment(); }
		if (HX_FIELD_EQ(inName,"multiLine") ) { return get_multiLine(); }
		if (HX_FIELD_EQ(inName,"fontScale") ) { return get_fontScale(); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"_textColor") ) { return _textColor; }
		if (HX_FIELD_EQ(inName,"_alignment") ) { return _alignment; }
		if (HX_FIELD_EQ(inName,"_fontScale") ) { return _fontScale; }
		if (HX_FIELD_EQ(inName,"_tabSpaces") ) { return _tabSpaces; }
		if (HX_FIELD_EQ(inName,"_multiLine") ) { return _multiLine; }
		if (HX_FIELD_EQ(inName,"background") ) { return get_background(); }
		if (HX_FIELD_EQ(inName,"get_shadow") ) { return get_shadow_dyn(); }
		if (HX_FIELD_EQ(inName,"set_shadow") ) { return set_shadow_dyn(); }
		if (HX_FIELD_EQ(inName,"fixedWidth") ) { return get_fixedWidth(); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"_background") ) { return _background; }
		if (HX_FIELD_EQ(inName,"_fixedWidth") ) { return _fixedWidth; }
		if (HX_FIELD_EQ(inName,"_bgDrawData") ) { return _bgDrawData; }
		if (HX_FIELD_EQ(inName,"shadowColor") ) { return get_shadowColor(); }
		if (HX_FIELD_EQ(inName,"get_padding") ) { return get_padding_dyn(); }
		if (HX_FIELD_EQ(inName,"set_padding") ) { return set_padding_dyn(); }
		if (HX_FIELD_EQ(inName,"get_outline") ) { return get_outline_dyn(); }
		if (HX_FIELD_EQ(inName,"set_outline") ) { return set_outline_dyn(); }
		if (HX_FIELD_EQ(inName,"lineSpacing") ) { return get_lineSpacing(); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"_shadowColor") ) { return _shadowColor; }
		if (HX_FIELD_EQ(inName,"_lineSpacing") ) { return _lineSpacing; }
		if (HX_FIELD_EQ(inName,"useTextColor") ) { return get_useTextColor(); }
		if (HX_FIELD_EQ(inName,"outlineColor") ) { return get_outlineColor(); }
		if (HX_FIELD_EQ(inName,"get_wordWrap") ) { return get_wordWrap_dyn(); }
		if (HX_FIELD_EQ(inName,"set_wordWrap") ) { return set_wordWrap_dyn(); }
		if (HX_FIELD_EQ(inName,"updateGlyphs") ) { return updateGlyphs_dyn(); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"_useTextColor") ) { return _useTextColor; }
		if (HX_FIELD_EQ(inName,"_outlineColor") ) { return _outlineColor; }
		if (HX_FIELD_EQ(inName,"get_textColor") ) { return get_textColor_dyn(); }
		if (HX_FIELD_EQ(inName,"set_textColor") ) { return set_textColor_dyn(); }
		if (HX_FIELD_EQ(inName,"get_alignment") ) { return get_alignment_dyn(); }
		if (HX_FIELD_EQ(inName,"set_alignment") ) { return set_alignment_dyn(); }
		if (HX_FIELD_EQ(inName,"get_multiLine") ) { return get_multiLine_dyn(); }
		if (HX_FIELD_EQ(inName,"set_multiLine") ) { return set_multiLine_dyn(); }
		if (HX_FIELD_EQ(inName,"get_fontScale") ) { return get_fontScale_dyn(); }
		if (HX_FIELD_EQ(inName,"set_fontScale") ) { return set_fontScale_dyn(); }
		if (HX_FIELD_EQ(inName,"letterSpacing") ) { return get_letterSpacing(); }
		if (HX_FIELD_EQ(inName,"autoUpperCase") ) { return get_autoUpperCase(); }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"_letterSpacing") ) { return _letterSpacing; }
		if (HX_FIELD_EQ(inName,"_autoUpperCase") ) { return _autoUpperCase; }
		if (HX_FIELD_EQ(inName,"numSpacesInTab") ) { return get_numSpacesInTab(); }
		if (HX_FIELD_EQ(inName,"get_background") ) { return get_background_dyn(); }
		if (HX_FIELD_EQ(inName,"set_background") ) { return set_background_dyn(); }
		if (HX_FIELD_EQ(inName,"get_fixedWidth") ) { return get_fixedWidth_dyn(); }
		if (HX_FIELD_EQ(inName,"set_fixedWidth") ) { return set_fixedWidth_dyn(); }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"_numSpacesInTab") ) { return _numSpacesInTab; }
		if (HX_FIELD_EQ(inName,"backgroundColor") ) { return get_backgroundColor(); }
		if (HX_FIELD_EQ(inName,"get_shadowColor") ) { return get_shadowColor_dyn(); }
		if (HX_FIELD_EQ(inName,"set_shadowColor") ) { return set_shadowColor_dyn(); }
		if (HX_FIELD_EQ(inName,"get_lineSpacing") ) { return get_lineSpacing_dyn(); }
		if (HX_FIELD_EQ(inName,"set_lineSpacing") ) { return set_lineSpacing_dyn(); }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"_backgroundColor") ) { return _backgroundColor; }
		if (HX_FIELD_EQ(inName,"get_useTextColor") ) { return get_useTextColor_dyn(); }
		if (HX_FIELD_EQ(inName,"set_useTextColor") ) { return set_useTextColor_dyn(); }
		if (HX_FIELD_EQ(inName,"updateBitmapData") ) { return updateBitmapData_dyn(); }
		if (HX_FIELD_EQ(inName,"get_outlineColor") ) { return get_outlineColor_dyn(); }
		if (HX_FIELD_EQ(inName,"set_outlineColor") ) { return set_outlineColor_dyn(); }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"get_letterSpacing") ) { return get_letterSpacing_dyn(); }
		if (HX_FIELD_EQ(inName,"set_letterSpacing") ) { return set_letterSpacing_dyn(); }
		if (HX_FIELD_EQ(inName,"get_autoUpperCase") ) { return get_autoUpperCase_dyn(); }
		if (HX_FIELD_EQ(inName,"set_autoUpperCase") ) { return set_autoUpperCase_dyn(); }
		break;
	case 18:
		if (HX_FIELD_EQ(inName,"_pendingTextChange") ) { return _pendingTextChange; }
		if (HX_FIELD_EQ(inName,"get_numSpacesInTab") ) { return get_numSpacesInTab_dyn(); }
		if (HX_FIELD_EQ(inName,"set_numSpacesInTab") ) { return set_numSpacesInTab_dyn(); }
		break;
	case 19:
		if (HX_FIELD_EQ(inName,"get_backgroundColor") ) { return get_backgroundColor_dyn(); }
		if (HX_FIELD_EQ(inName,"set_backgroundColor") ) { return set_backgroundColor_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic FlxBitmapTextField_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"text") ) { return set_text(inValue); }
		if (HX_FIELD_EQ(inName,"font") ) { return set_font(inValue); }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"_font") ) { _font=inValue.Cast< ::flixel::text::pxText::PxBitmapFont >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_text") ) { _text=inValue.Cast< ::String >(); return inValue; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"shadow") ) { return set_shadow(inValue); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"_shadow") ) { _shadow=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"padding") ) { return set_padding(inValue); }
		if (HX_FIELD_EQ(inName,"outline") ) { return set_outline(inValue); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"_outline") ) { _outline=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_padding") ) { _padding=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"wordWrap") ) { return set_wordWrap(inValue); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"_wordWrap") ) { _wordWrap=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_drawData") ) { _drawData=inValue.Cast< Array< Float > >(); return inValue; }
		if (HX_FIELD_EQ(inName,"textColor") ) { return set_textColor(inValue); }
		if (HX_FIELD_EQ(inName,"alignment") ) { return set_alignment(inValue); }
		if (HX_FIELD_EQ(inName,"multiLine") ) { return set_multiLine(inValue); }
		if (HX_FIELD_EQ(inName,"fontScale") ) { return set_fontScale(inValue); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"_textColor") ) { _textColor=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_alignment") ) { _alignment=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_fontScale") ) { _fontScale=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_tabSpaces") ) { _tabSpaces=inValue.Cast< ::String >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_multiLine") ) { _multiLine=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"background") ) { return set_background(inValue); }
		if (HX_FIELD_EQ(inName,"fixedWidth") ) { return set_fixedWidth(inValue); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"_background") ) { _background=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_fixedWidth") ) { _fixedWidth=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_bgDrawData") ) { _bgDrawData=inValue.Cast< Array< Float > >(); return inValue; }
		if (HX_FIELD_EQ(inName,"shadowColor") ) { return set_shadowColor(inValue); }
		if (HX_FIELD_EQ(inName,"lineSpacing") ) { return set_lineSpacing(inValue); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"_shadowColor") ) { _shadowColor=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_lineSpacing") ) { _lineSpacing=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"useTextColor") ) { return set_useTextColor(inValue); }
		if (HX_FIELD_EQ(inName,"outlineColor") ) { return set_outlineColor(inValue); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"_useTextColor") ) { _useTextColor=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_outlineColor") ) { _outlineColor=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"letterSpacing") ) { return set_letterSpacing(inValue); }
		if (HX_FIELD_EQ(inName,"autoUpperCase") ) { return set_autoUpperCase(inValue); }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"_letterSpacing") ) { _letterSpacing=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_autoUpperCase") ) { _autoUpperCase=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"numSpacesInTab") ) { return set_numSpacesInTab(inValue); }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"_numSpacesInTab") ) { _numSpacesInTab=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"backgroundColor") ) { return set_backgroundColor(inValue); }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"_backgroundColor") ) { _backgroundColor=inValue.Cast< int >(); return inValue; }
		break;
	case 18:
		if (HX_FIELD_EQ(inName,"_pendingTextChange") ) { _pendingTextChange=inValue.Cast< bool >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void FlxBitmapTextField_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_CSTRING("_font"));
	outFields->push(HX_CSTRING("_text"));
	outFields->push(HX_CSTRING("_textColor"));
	outFields->push(HX_CSTRING("_useTextColor"));
	outFields->push(HX_CSTRING("_outline"));
	outFields->push(HX_CSTRING("_outlineColor"));
	outFields->push(HX_CSTRING("_shadow"));
	outFields->push(HX_CSTRING("_shadowColor"));
	outFields->push(HX_CSTRING("_background"));
	outFields->push(HX_CSTRING("_backgroundColor"));
	outFields->push(HX_CSTRING("_alignment"));
	outFields->push(HX_CSTRING("_padding"));
	outFields->push(HX_CSTRING("_lineSpacing"));
	outFields->push(HX_CSTRING("_letterSpacing"));
	outFields->push(HX_CSTRING("_fontScale"));
	outFields->push(HX_CSTRING("_autoUpperCase"));
	outFields->push(HX_CSTRING("_wordWrap"));
	outFields->push(HX_CSTRING("_fixedWidth"));
	outFields->push(HX_CSTRING("_numSpacesInTab"));
	outFields->push(HX_CSTRING("_tabSpaces"));
	outFields->push(HX_CSTRING("_pendingTextChange"));
	outFields->push(HX_CSTRING("_multiLine"));
	outFields->push(HX_CSTRING("_drawData"));
	outFields->push(HX_CSTRING("_bgDrawData"));
	outFields->push(HX_CSTRING("numSpacesInTab"));
	outFields->push(HX_CSTRING("textColor"));
	outFields->push(HX_CSTRING("useTextColor"));
	outFields->push(HX_CSTRING("text"));
	outFields->push(HX_CSTRING("background"));
	outFields->push(HX_CSTRING("backgroundColor"));
	outFields->push(HX_CSTRING("shadow"));
	outFields->push(HX_CSTRING("shadowColor"));
	outFields->push(HX_CSTRING("padding"));
	outFields->push(HX_CSTRING("alignment"));
	outFields->push(HX_CSTRING("multiLine"));
	outFields->push(HX_CSTRING("outline"));
	outFields->push(HX_CSTRING("outlineColor"));
	outFields->push(HX_CSTRING("font"));
	outFields->push(HX_CSTRING("lineSpacing"));
	outFields->push(HX_CSTRING("fontScale"));
	outFields->push(HX_CSTRING("letterSpacing"));
	outFields->push(HX_CSTRING("autoUpperCase"));
	outFields->push(HX_CSTRING("wordWrap"));
	outFields->push(HX_CSTRING("fixedWidth"));
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	String(null()) };

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsObject /*::flixel::text::pxText::PxBitmapFont*/ ,(int)offsetof(FlxBitmapTextField_obj,_font),HX_CSTRING("_font")},
	{hx::fsString,(int)offsetof(FlxBitmapTextField_obj,_text),HX_CSTRING("_text")},
	{hx::fsInt,(int)offsetof(FlxBitmapTextField_obj,_textColor),HX_CSTRING("_textColor")},
	{hx::fsBool,(int)offsetof(FlxBitmapTextField_obj,_useTextColor),HX_CSTRING("_useTextColor")},
	{hx::fsBool,(int)offsetof(FlxBitmapTextField_obj,_outline),HX_CSTRING("_outline")},
	{hx::fsInt,(int)offsetof(FlxBitmapTextField_obj,_outlineColor),HX_CSTRING("_outlineColor")},
	{hx::fsBool,(int)offsetof(FlxBitmapTextField_obj,_shadow),HX_CSTRING("_shadow")},
	{hx::fsInt,(int)offsetof(FlxBitmapTextField_obj,_shadowColor),HX_CSTRING("_shadowColor")},
	{hx::fsBool,(int)offsetof(FlxBitmapTextField_obj,_background),HX_CSTRING("_background")},
	{hx::fsInt,(int)offsetof(FlxBitmapTextField_obj,_backgroundColor),HX_CSTRING("_backgroundColor")},
	{hx::fsInt,(int)offsetof(FlxBitmapTextField_obj,_alignment),HX_CSTRING("_alignment")},
	{hx::fsInt,(int)offsetof(FlxBitmapTextField_obj,_padding),HX_CSTRING("_padding")},
	{hx::fsInt,(int)offsetof(FlxBitmapTextField_obj,_lineSpacing),HX_CSTRING("_lineSpacing")},
	{hx::fsInt,(int)offsetof(FlxBitmapTextField_obj,_letterSpacing),HX_CSTRING("_letterSpacing")},
	{hx::fsFloat,(int)offsetof(FlxBitmapTextField_obj,_fontScale),HX_CSTRING("_fontScale")},
	{hx::fsBool,(int)offsetof(FlxBitmapTextField_obj,_autoUpperCase),HX_CSTRING("_autoUpperCase")},
	{hx::fsBool,(int)offsetof(FlxBitmapTextField_obj,_wordWrap),HX_CSTRING("_wordWrap")},
	{hx::fsBool,(int)offsetof(FlxBitmapTextField_obj,_fixedWidth),HX_CSTRING("_fixedWidth")},
	{hx::fsInt,(int)offsetof(FlxBitmapTextField_obj,_numSpacesInTab),HX_CSTRING("_numSpacesInTab")},
	{hx::fsString,(int)offsetof(FlxBitmapTextField_obj,_tabSpaces),HX_CSTRING("_tabSpaces")},
	{hx::fsBool,(int)offsetof(FlxBitmapTextField_obj,_pendingTextChange),HX_CSTRING("_pendingTextChange")},
	{hx::fsBool,(int)offsetof(FlxBitmapTextField_obj,_multiLine),HX_CSTRING("_multiLine")},
	{hx::fsObject /*Array< Float >*/ ,(int)offsetof(FlxBitmapTextField_obj,_drawData),HX_CSTRING("_drawData")},
	{hx::fsObject /*Array< Float >*/ ,(int)offsetof(FlxBitmapTextField_obj,_bgDrawData),HX_CSTRING("_bgDrawData")},
	{ hx::fsUnknown, 0, null()}
};
#endif

static ::String sMemberFields[] = {
	HX_CSTRING("_font"),
	HX_CSTRING("_text"),
	HX_CSTRING("_textColor"),
	HX_CSTRING("_useTextColor"),
	HX_CSTRING("_outline"),
	HX_CSTRING("_outlineColor"),
	HX_CSTRING("_shadow"),
	HX_CSTRING("_shadowColor"),
	HX_CSTRING("_background"),
	HX_CSTRING("_backgroundColor"),
	HX_CSTRING("_alignment"),
	HX_CSTRING("_padding"),
	HX_CSTRING("_lineSpacing"),
	HX_CSTRING("_letterSpacing"),
	HX_CSTRING("_fontScale"),
	HX_CSTRING("_autoUpperCase"),
	HX_CSTRING("_wordWrap"),
	HX_CSTRING("_fixedWidth"),
	HX_CSTRING("_numSpacesInTab"),
	HX_CSTRING("_tabSpaces"),
	HX_CSTRING("_pendingTextChange"),
	HX_CSTRING("_multiLine"),
	HX_CSTRING("_drawData"),
	HX_CSTRING("_bgDrawData"),
	HX_CSTRING("destroy"),
	HX_CSTRING("update"),
	HX_CSTRING("get_numSpacesInTab"),
	HX_CSTRING("set_numSpacesInTab"),
	HX_CSTRING("draw"),
	HX_CSTRING("set_color"),
	HX_CSTRING("get_textColor"),
	HX_CSTRING("set_textColor"),
	HX_CSTRING("get_useTextColor"),
	HX_CSTRING("set_useTextColor"),
	HX_CSTRING("set_alpha"),
	HX_CSTRING("get_text"),
	HX_CSTRING("set_text"),
	HX_CSTRING("updateBitmapData"),
	HX_CSTRING("get_background"),
	HX_CSTRING("set_background"),
	HX_CSTRING("get_backgroundColor"),
	HX_CSTRING("set_backgroundColor"),
	HX_CSTRING("get_shadow"),
	HX_CSTRING("set_shadow"),
	HX_CSTRING("get_shadowColor"),
	HX_CSTRING("set_shadowColor"),
	HX_CSTRING("get_padding"),
	HX_CSTRING("set_padding"),
	HX_CSTRING("set_width"),
	HX_CSTRING("get_alignment"),
	HX_CSTRING("set_alignment"),
	HX_CSTRING("get_multiLine"),
	HX_CSTRING("set_multiLine"),
	HX_CSTRING("get_outline"),
	HX_CSTRING("set_outline"),
	HX_CSTRING("get_outlineColor"),
	HX_CSTRING("set_outlineColor"),
	HX_CSTRING("get_font"),
	HX_CSTRING("set_font"),
	HX_CSTRING("get_lineSpacing"),
	HX_CSTRING("set_lineSpacing"),
	HX_CSTRING("get_fontScale"),
	HX_CSTRING("set_fontScale"),
	HX_CSTRING("get_letterSpacing"),
	HX_CSTRING("set_letterSpacing"),
	HX_CSTRING("get_autoUpperCase"),
	HX_CSTRING("set_autoUpperCase"),
	HX_CSTRING("get_wordWrap"),
	HX_CSTRING("set_wordWrap"),
	HX_CSTRING("get_fixedWidth"),
	HX_CSTRING("set_fixedWidth"),
	HX_CSTRING("updateGlyphs"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(FlxBitmapTextField_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(FlxBitmapTextField_obj::__mClass,"__mClass");
};

#endif

Class FlxBitmapTextField_obj::__mClass;

void FlxBitmapTextField_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("flixel.text.FlxBitmapTextField"), hx::TCanCast< FlxBitmapTextField_obj> ,sStaticFields,sMemberFields,
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

void FlxBitmapTextField_obj::__boot()
{
}

} // end namespace flixel
} // end namespace text
