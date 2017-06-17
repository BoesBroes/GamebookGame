#include <hxcpp.h>

#include "hxMath.h"
#ifndef INCLUDED_EReg
#include <EReg.h>
#endif
#ifndef INCLUDED_Std
#include <Std.h>
#endif
#ifndef INCLUDED_StringTools
#include <StringTools.h>
#endif
#ifndef INCLUDED_haxe_IMap
#include <haxe/IMap.h>
#endif
#ifndef INCLUDED_haxe_Timer
#include <haxe/Timer.h>
#endif
#ifndef INCLUDED_haxe_ds_StringMap
#include <haxe/ds/StringMap.h>
#endif
#ifndef INCLUDED_lime_graphics_opengl_GLObject
#include <lime/graphics/opengl/GLObject.h>
#endif
#ifndef INCLUDED_lime_math_Vector2
#include <lime/math/Vector2.h>
#endif
#ifndef INCLUDED_lime_system_System
#include <lime/system/System.h>
#endif
#ifndef INCLUDED_lime_text_Font
#include <lime/text/Font.h>
#endif
#ifndef INCLUDED_lime_text_GlyphPosition
#include <lime/text/GlyphPosition.h>
#endif
#ifndef INCLUDED_lime_text_TextLayout
#include <lime/text/TextLayout.h>
#endif
#ifndef INCLUDED_openfl__Vector_FloatVector
#include <openfl/_Vector/FloatVector.h>
#endif
#ifndef INCLUDED_openfl__Vector_IVector
#include <openfl/_Vector/IVector.h>
#endif
#ifndef INCLUDED_openfl__Vector_IntVector
#include <openfl/_Vector/IntVector.h>
#endif
#ifndef INCLUDED_openfl__Vector_ObjectVector
#include <openfl/_Vector/ObjectVector.h>
#endif
#ifndef INCLUDED_openfl__internal_text_TextEngine
#include <openfl/_internal/text/TextEngine.h>
#endif
#ifndef INCLUDED_openfl__internal_text_TextFormatRange
#include <openfl/_internal/text/TextFormatRange.h>
#endif
#ifndef INCLUDED_openfl__internal_text_TextLayoutGroup
#include <openfl/_internal/text/TextLayoutGroup.h>
#endif
#ifndef INCLUDED_openfl_display_DisplayObject
#include <openfl/display/DisplayObject.h>
#endif
#ifndef INCLUDED_openfl_display_IBitmapDrawable
#include <openfl/display/IBitmapDrawable.h>
#endif
#ifndef INCLUDED_openfl_display_InteractiveObject
#include <openfl/display/InteractiveObject.h>
#endif
#ifndef INCLUDED_openfl_events_EventDispatcher
#include <openfl/events/EventDispatcher.h>
#endif
#ifndef INCLUDED_openfl_events_IEventDispatcher
#include <openfl/events/IEventDispatcher.h>
#endif
#ifndef INCLUDED_openfl_geom_Rectangle
#include <openfl/geom/Rectangle.h>
#endif
#ifndef INCLUDED_openfl_text_Font
#include <openfl/text/Font.h>
#endif
#ifndef INCLUDED_openfl_text_TextField
#include <openfl/text/TextField.h>
#endif
#ifndef INCLUDED_openfl_text_TextFormat
#include <openfl/text/TextFormat.h>
#endif
namespace openfl{
namespace _internal{
namespace text{

Void TextEngine_obj::__construct(::openfl::text::TextField textField)
{
{
	this->textField = textField;
	this->width = (int)100;
	this->height = (int)100;
	this->set_text(HX_HCSTRING("","\x00","\x00","\x00","\x00"));
	::openfl::geom::Rectangle tmp = ::openfl::geom::Rectangle_obj::__new((int)0,(int)0,(int)0,(int)0);
	this->bounds = tmp;
	this->type = ((Dynamic)((int)0));
	this->autoSize = ((Dynamic)((int)2));
	this->embedFonts = false;
	this->selectable = true;
	this->borderColor = (int)0;
	this->border = false;
	this->backgroundColor = (int)16777215;
	this->background = false;
	this->gridFitType = ((Dynamic)((int)1));
	this->maxChars = (int)0;
	this->multiline = false;
	this->sharpness = (int)0;
	this->scrollH = (int)0;
	this->scrollV = (int)1;
	this->wordWrap = false;
	::openfl::_Vector::FloatVector tmp1;
	{
		int length = null();
		bool fixed = null();
		::openfl::_Vector::FloatVector tmp2 = ::openfl::_Vector::FloatVector_obj::__new(length,fixed,null());
		::openfl::_Vector::FloatVector tmp3 = tmp2;
		tmp1 = tmp3;
	}
	this->lineAscents = tmp1;
	::openfl::_Vector::IntVector tmp2;
	{
		int length = null();
		bool fixed = null();
		::openfl::_Vector::IntVector tmp3 = ::openfl::_Vector::IntVector_obj::__new(length,fixed,null());
		::openfl::_Vector::IntVector tmp4 = tmp3;
		tmp2 = tmp4;
	}
	this->lineBreaks = tmp2;
	::openfl::_Vector::FloatVector tmp3;
	{
		int length = null();
		bool fixed = null();
		::openfl::_Vector::FloatVector tmp4 = ::openfl::_Vector::FloatVector_obj::__new(length,fixed,null());
		::openfl::_Vector::FloatVector tmp5 = tmp4;
		tmp3 = tmp5;
	}
	this->lineDescents = tmp3;
	::openfl::_Vector::FloatVector tmp4;
	{
		int length = null();
		bool fixed = null();
		::openfl::_Vector::FloatVector tmp5 = ::openfl::_Vector::FloatVector_obj::__new(length,fixed,null());
		::openfl::_Vector::FloatVector tmp6 = tmp5;
		tmp4 = tmp6;
	}
	this->lineLeadings = tmp4;
	::openfl::_Vector::FloatVector tmp5;
	{
		int length = null();
		bool fixed = null();
		::openfl::_Vector::FloatVector tmp6 = ::openfl::_Vector::FloatVector_obj::__new(length,fixed,null());
		::openfl::_Vector::FloatVector tmp7 = tmp6;
		tmp5 = tmp7;
	}
	this->lineHeights = tmp5;
	::openfl::_Vector::FloatVector tmp6;
	{
		int length = null();
		bool fixed = null();
		::openfl::_Vector::FloatVector tmp7 = ::openfl::_Vector::FloatVector_obj::__new(length,fixed,null());
		::openfl::_Vector::FloatVector tmp8 = tmp7;
		tmp6 = tmp8;
	}
	this->lineWidths = tmp6;
	::openfl::_Vector::ObjectVector tmp7;
	{
		int length = null();
		bool fixed = null();
		::openfl::_Vector::ObjectVector tmp8 = ::openfl::_Vector::ObjectVector_obj::__new(length,fixed,null());
		::openfl::_Vector::ObjectVector tmp9 = tmp8;
		tmp7 = tmp9;
	}
	this->layoutGroups = tmp7;
	::openfl::_Vector::ObjectVector tmp8;
	{
		int length = null();
		bool fixed = null();
		::openfl::_Vector::ObjectVector tmp9 = ::openfl::_Vector::ObjectVector_obj::__new(length,fixed,null());
		::openfl::_Vector::ObjectVector tmp10 = tmp9;
		tmp8 = tmp10;
	}
	this->textFormatRanges = tmp8;
}
;
	return null();
}

//TextEngine_obj::~TextEngine_obj() { }

Dynamic TextEngine_obj::__CreateEmpty() { return  new TextEngine_obj; }
hx::ObjectPtr< TextEngine_obj > TextEngine_obj::__new(::openfl::text::TextField textField)
{  hx::ObjectPtr< TextEngine_obj > _result_ = new TextEngine_obj();
	_result_->__construct(textField);
	return _result_;}

Dynamic TextEngine_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< TextEngine_obj > _result_ = new TextEngine_obj();
	_result_->__construct(inArgs[0]);
	return _result_;}

::EReg TextEngine_obj::createRestrictRegexp( ::String restrict){
	::EReg tmp = ::EReg_obj::__new(HX_HCSTRING("\\^(.-.|.)","\xee","\xf5","\xda","\xba"),HX_HCSTRING("gu","\x2e","\x5a","\x00","\x00"));
	::EReg declinedRange = tmp;
	Array< ::String > declined = Array_obj< ::String >::__new().Add(HX_HCSTRING("","\x00","\x00","\x00","\x00"));
	::String tmp1 = restrict;

	HX_BEGIN_LOCAL_FUNC_S1(hx::LocalFunc,_Function_1_1,Array< ::String >,declined)
	int __ArgCount() const { return 1; }
	::String run(::EReg ereg){
		{
			::String tmp2 = ereg->matched((int)1);
			hx::AddEq(declined[(int)0],tmp2);
			return HX_HCSTRING("","\x00","\x00","\x00","\x00");
		}
		return null();
	}
	HX_END_LOCAL_FUNC1(return)

	::String tmp2 = declinedRange->map(tmp1, Dynamic(new _Function_1_1(declined)));
	::String accepted = tmp2;
	Array< ::String > testRegexpParts = Array_obj< ::String >::__new();
	bool tmp3 = (accepted.length > (int)0);
	if ((tmp3)){
		::String tmp4 = (HX_HCSTRING("[^","\xa3","\x4f","\x00","\x00") + restrict);
		::String tmp5 = (tmp4 + HX_HCSTRING("]","\x5d","\x00","\x00","\x00"));
		testRegexpParts->push(tmp5);
	}
	bool tmp4 = (declined->__get((int)0).length > (int)0);
	if ((tmp4)){
		::String tmp5 = (HX_HCSTRING("[","\x5b","\x00","\x00","\x00") + declined->__get((int)0));
		::String tmp6 = (tmp5 + HX_HCSTRING("]","\x5d","\x00","\x00","\x00"));
		testRegexpParts->push(tmp6);
	}
	::String tmp5 = testRegexpParts->join(HX_HCSTRING("|","\x7c","\x00","\x00","\x00"));
	::String tmp6 = (HX_HCSTRING("(","\x28","\x00","\x00","\x00") + tmp5);
	::String tmp7 = (tmp6 + HX_HCSTRING(")","\x29","\x00","\x00","\x00"));
	::EReg tmp8 = ::EReg_obj::__new(tmp7,HX_HCSTRING("g","\x67","\x00","\x00","\x00"));
	return tmp8;
}


HX_DEFINE_DYNAMIC_FUNC1(TextEngine_obj,createRestrictRegexp,return )

Void TextEngine_obj::getBounds( ){
{
		bool tmp = this->border;
		int tmp1;
		if ((tmp)){
			tmp1 = (int)1;
		}
		else{
			tmp1 = (int)0;
		}
		int padding = tmp1;
		Float tmp2 = this->width;
		int tmp3 = padding;
		Float tmp4 = (tmp2 + tmp3);
		::openfl::geom::Rectangle tmp5 = this->bounds;
		tmp5->width = tmp4;
		Float tmp6 = this->height;
		int tmp7 = padding;
		Float tmp8 = (tmp6 + tmp7);
		::openfl::geom::Rectangle tmp9 = this->bounds;
		tmp9->height = tmp8;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(TextEngine_obj,getBounds,(void))

::String TextEngine_obj::getLine( int index){
	bool tmp = (index < (int)0);
	bool tmp1 = !(tmp);
	bool tmp2;
	if ((tmp1)){
		int tmp3 = index;
		::openfl::_Vector::IntVector tmp4 = this->lineBreaks;
		::openfl::_Vector::IntVector tmp5 = tmp4;
		int tmp6 = tmp5->get_length();
		int tmp7 = tmp6;
		int tmp8 = (tmp7 + (int)1);
		int tmp9 = tmp8;
		tmp2 = (tmp3 > tmp9);
	}
	else{
		tmp2 = true;
	}
	if ((tmp2)){
		return null();
	}
	::openfl::_Vector::IntVector tmp3 = this->lineBreaks;
	int tmp4 = tmp3->get_length();
	bool tmp5 = (tmp4 == (int)0);
	if ((tmp5)){
		::String tmp6 = this->text;
		return tmp6;
	}
	else{
		::String tmp6 = this->text;
		bool tmp7 = (index > (int)0);
		int tmp8;
		if ((tmp7)){
			::openfl::_Vector::IntVector tmp9 = this->lineBreaks;
			int tmp10 = (index - (int)1);
			int tmp11 = tmp9->get(tmp10);
			tmp8 = tmp11;
		}
		else{
			tmp8 = (int)0;
		}
		::openfl::_Vector::IntVector tmp9 = this->lineBreaks;
		int tmp10 = index;
		int tmp11 = tmp9->get(tmp10);
		int tmp12 = tmp11;
		::String tmp13 = tmp6.substring(tmp8,tmp12);
		return tmp13;
	}
	return null();
}


HX_DEFINE_DYNAMIC_FUNC1(TextEngine_obj,getLine,return )

int TextEngine_obj::getLineBreakIndex( hx::Null< int >  __o_startIndex){
int startIndex = __o_startIndex.Default(0);
{
		::String tmp = this->text;
		int tmp1 = startIndex;
		int tmp2 = tmp.indexOf(HX_HCSTRING("\n","\x0a","\x00","\x00","\x00"),tmp1);
		int cr = tmp2;
		::String tmp3 = this->text;
		int tmp4 = startIndex;
		int tmp5 = tmp3.indexOf(HX_HCSTRING("\r","\x0d","\x00","\x00","\x00"),tmp4);
		int lf = tmp5;
		bool tmp6 = (cr == (int)-1);
		if ((tmp6)){
			int tmp7 = lf;
			return tmp7;
		}
		bool tmp7 = (lf == (int)-1);
		if ((tmp7)){
			int tmp8 = cr;
			return tmp8;
		}
		bool tmp8 = (cr < lf);
		int tmp9;
		if ((tmp8)){
			tmp9 = cr;
		}
		else{
			tmp9 = lf;
		}
		return tmp9;
	}
}


HX_DEFINE_DYNAMIC_FUNC1(TextEngine_obj,getLineBreakIndex,return )

Void TextEngine_obj::getLineMeasurements( ){
{
		::openfl::_Vector::FloatVector tmp = this->lineAscents;
		tmp->set_length((int)0);
		::openfl::_Vector::FloatVector tmp1 = this->lineDescents;
		tmp1->set_length((int)0);
		::openfl::_Vector::FloatVector tmp2 = this->lineLeadings;
		tmp2->set_length((int)0);
		::openfl::_Vector::FloatVector tmp3 = this->lineHeights;
		tmp3->set_length((int)0);
		::openfl::_Vector::FloatVector tmp4 = this->lineWidths;
		tmp4->set_length((int)0);
		Float currentLineAscent = ((Float)0.0);
		Float currentLineDescent = ((Float)0.0);
		Dynamic currentLineLeading = null();
		Float currentLineHeight = ((Float)0.0);
		Float currentLineWidth = ((Float)0.0);
		this->textWidth = (int)0;
		this->textHeight = (int)0;
		this->numLines = (int)1;
		this->bottomScrollV = (int)0;
		this->maxScrollH = (int)0;
		{
			int _g = (int)0;
			::openfl::_Vector::ObjectVector tmp5 = this->layoutGroups;
			::openfl::_Vector::ObjectVector _g1 = tmp5;
			while((true)){
				int tmp6 = _g;
				int tmp7 = _g1->get_length();
				bool tmp8 = (tmp6 < tmp7);
				bool tmp9 = !(tmp8);
				if ((tmp9)){
					break;
				}
				int tmp10 = _g;
				::openfl::_internal::text::TextLayoutGroup tmp11 = _g1->get(tmp10);
				::openfl::_internal::text::TextLayoutGroup group = tmp11;
				++(_g);
				while((true)){
					int tmp12 = group->lineIndex;
					int tmp13 = this->numLines;
					int tmp14 = (tmp13 - (int)1);
					bool tmp15 = (tmp12 > tmp14);
					bool tmp16 = !(tmp15);
					if ((tmp16)){
						break;
					}
					::openfl::_Vector::FloatVector tmp17 = this->lineAscents;
					Float tmp18 = currentLineAscent;
					tmp17->push(tmp18);
					::openfl::_Vector::FloatVector tmp19 = this->lineDescents;
					Float tmp20 = currentLineDescent;
					tmp19->push(tmp20);
					::openfl::_Vector::FloatVector tmp21 = this->lineLeadings;
					bool tmp22 = (currentLineLeading != null());
					Float tmp23;
					if ((tmp22)){
						tmp23 = currentLineLeading;
					}
					else{
						tmp23 = (int)0;
					}
					tmp21->push(tmp23);
					::openfl::_Vector::FloatVector tmp24 = this->lineHeights;
					Float tmp25 = currentLineHeight;
					tmp24->push(tmp25);
					::openfl::_Vector::FloatVector tmp26 = this->lineWidths;
					Float tmp27 = currentLineWidth;
					tmp26->push(tmp27);
					currentLineAscent = (int)0;
					currentLineDescent = (int)0;
					currentLineLeading = null();
					currentLineHeight = (int)0;
					currentLineWidth = (int)0;
					(this->numLines)++;
					Float tmp28 = this->textHeight;
					Float tmp29 = this->height;
					Float tmp30 = (tmp29 - (int)2);
					bool tmp31 = (tmp28 <= tmp30);
					if ((tmp31)){
						(this->bottomScrollV)++;
					}
				}
				Float tmp12 = currentLineAscent;
				Float tmp13 = group->ascent;
				Float tmp14 = ::Math_obj::max(tmp12,tmp13);
				currentLineAscent = tmp14;
				Float tmp15 = currentLineDescent;
				Float tmp16 = group->descent;
				Float tmp17 = ::Math_obj::max(tmp15,tmp16);
				currentLineDescent = tmp17;
				bool tmp18 = (currentLineLeading == null());
				if ((tmp18)){
					currentLineLeading = group->leading;
				}
				else{
					Dynamic tmp19 = currentLineLeading;
					int tmp20 = group->leading;
					Float tmp21 = ::Math_obj::max(tmp19,tmp20);
					int tmp22 = ::Std_obj::_int(tmp21);
					currentLineLeading = tmp22;
				}
				Float tmp19 = currentLineHeight;
				Float tmp20 = group->height;
				Float tmp21 = ::Math_obj::max(tmp19,tmp20);
				currentLineHeight = tmp21;
				Float tmp22 = (group->offsetX - (int)2);
				Float tmp23 = group->width;
				Float tmp24 = (tmp22 + tmp23);
				currentLineWidth = tmp24;
				Float tmp25 = currentLineWidth;
				Float tmp26 = this->textWidth;
				bool tmp27 = (tmp25 > tmp26);
				if ((tmp27)){
					this->textWidth = currentLineWidth;
				}
				Float tmp28 = (group->offsetY - (int)2);
				Float tmp29 = group->ascent;
				Float tmp30 = (tmp28 + tmp29);
				Float tmp31 = group->descent;
				Float tmp32 = (tmp30 + tmp31);
				this->textHeight = tmp32;
			}
		}
		::openfl::_Vector::FloatVector tmp5 = this->lineAscents;
		Float tmp6 = currentLineAscent;
		tmp5->push(tmp6);
		::openfl::_Vector::FloatVector tmp7 = this->lineDescents;
		Float tmp8 = currentLineDescent;
		tmp7->push(tmp8);
		::openfl::_Vector::FloatVector tmp9 = this->lineLeadings;
		bool tmp10 = (currentLineLeading != null());
		Float tmp11;
		if ((tmp10)){
			tmp11 = currentLineLeading;
		}
		else{
			tmp11 = (int)0;
		}
		tmp9->push(tmp11);
		::openfl::_Vector::FloatVector tmp12 = this->lineHeights;
		Float tmp13 = currentLineHeight;
		tmp12->push(tmp13);
		::openfl::_Vector::FloatVector tmp14 = this->lineWidths;
		Float tmp15 = currentLineWidth;
		tmp14->push(tmp15);
		int tmp16 = this->numLines;
		bool tmp17 = (tmp16 == (int)1);
		if ((tmp17)){
			this->bottomScrollV = (int)1;
			bool tmp18 = (currentLineLeading > (int)0);
			if ((tmp18)){
				hx::AddEq(this->textHeight,currentLineLeading);
			}
		}
		else{
			Float tmp18 = this->textHeight;
			Float tmp19 = this->height;
			Float tmp20 = (tmp19 - (int)2);
			bool tmp21 = (tmp18 <= tmp20);
			if ((tmp21)){
				(this->bottomScrollV)++;
			}
		}
		Dynamic tmp18 = this->autoSize;
		bool tmp19 = (tmp18 != ((Dynamic)((int)2)));
		if ((tmp19)){
			Dynamic tmp20 = this->autoSize;
			Dynamic _g = tmp20;
			Dynamic tmp21 = _g;
			switch( (int)(tmp21)){
				case (int)1: case (int)3: case (int)0: {
					bool tmp22 = this->wordWrap;
					bool tmp23 = !(tmp22);
					if ((tmp23)){
						Float tmp24 = this->textWidth;
						Float tmp25 = (tmp24 + (int)4);
						this->width = tmp25;
					}
					Float tmp24 = this->textHeight;
					Float tmp25 = (tmp24 + (int)4);
					this->height = tmp25;
					int tmp26 = this->numLines;
					this->bottomScrollV = tmp26;
				}
				;break;
				default: {
				}
			}
		}
		Float tmp20 = this->textWidth;
		Float tmp21 = this->width;
		Float tmp22 = (tmp21 - (int)4);
		bool tmp23 = (tmp20 > tmp22);
		if ((tmp23)){
			Float tmp24 = this->textWidth;
			Float tmp25 = this->width;
			Float tmp26 = (tmp24 - tmp25);
			Float tmp27 = (tmp26 + (int)4);
			int tmp28 = ::Std_obj::_int(tmp27);
			this->maxScrollH = tmp28;
		}
		else{
			this->maxScrollH = (int)0;
		}
		int tmp24 = this->numLines;
		int tmp25 = this->bottomScrollV;
		int tmp26 = (tmp24 - tmp25);
		int tmp27 = (tmp26 + (int)1);
		this->maxScrollV = tmp27;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(TextEngine_obj,getLineMeasurements,(void))

Void TextEngine_obj::getLayoutGroups( ){
{
		::openfl::_internal::text::TextEngine _g = hx::ObjectPtr<OBJ_>(this);
		::openfl::_Vector::ObjectVector tmp = this->layoutGroups;
		tmp->set_length((int)0);
		int rangeIndex = (int)-1;
		::openfl::_internal::text::TextFormatRange formatRange = null();
		::lime::text::Font font = null();
		::openfl::text::TextFormat tmp1 = ::openfl::text::TextField_obj::__defaultTextFormat;
		::openfl::text::TextFormat tmp2 = tmp1->clone();
		::openfl::text::TextFormat currentFormat = tmp2;
		int leading = (int)0;
		Float ascent = ((Float)0.0);
		Float descent = ((Float)0.0);
		::openfl::_internal::text::TextLayoutGroup layoutGroup = null();
		Array< Float > advances = null();
		Float widthValue;
		Float heightValue = ((Float)0.0);
		int previousSpaceIndex = (int)-2;
		::String tmp3 = this->text;
		int tmp4 = tmp3.indexOf(HX_HCSTRING(" ","\x20","\x00","\x00","\x00"),null());
		int spaceIndex = tmp4;
		int tmp5 = this->getLineBreakIndex(null());
		int breakIndex = tmp5;
		Float offsetX = ((Float)2.0);
		Float offsetY = ((Float)2.0);
		int textIndex = (int)0;
		int lineIndex = (int)0;
		::openfl::text::TextFormat lineFormat = null();
		{
			int tmp6 = rangeIndex;
			int tmp7 = _g->textFormatRanges->get_length();
			int tmp8 = (tmp7 - (int)1);
			bool tmp9 = (tmp6 < tmp8);
			if ((tmp9)){
				(rangeIndex)++;
				int tmp10 = rangeIndex;
				::openfl::_internal::text::TextFormatRange tmp11 = _g->textFormatRanges->get(tmp10);
				formatRange = tmp11;
				::openfl::text::TextFormat tmp12 = formatRange->format;
				currentFormat->__merge(tmp12);
				::openfl::text::TextFormat tmp13 = currentFormat;
				::openfl::text::Font tmp14 = ::openfl::_internal::text::TextEngine_obj::getFontInstance(tmp13);
				font = tmp14;
				bool tmp15 = (font != null());
				if ((tmp15)){
					int tmp16 = font->get_ascender();
					int tmp17 = font->get_unitsPerEM();
					Float tmp18 = (Float(tmp16) / Float(tmp17));
					Dynamic tmp19 = currentFormat->size;
					Float tmp20 = (tmp18 * tmp19);
					ascent = tmp20;
					int tmp21 = font->get_descender();
					int tmp22 = font->get_unitsPerEM();
					Float tmp23 = (Float(tmp21) / Float(tmp22));
					Dynamic tmp24 = currentFormat->size;
					Float tmp25 = (tmp23 * tmp24);
					Float tmp26 = ::Math_obj::abs(tmp25);
					descent = tmp26;
					leading = currentFormat->leading;
					Float tmp27 = (ascent + descent);
					int tmp28 = leading;
					Float tmp29 = (tmp27 + tmp28);
					heightValue = tmp29;
				}
				else{
					ascent = currentFormat->size;
					Float tmp16 = (currentFormat->size * ((Float)0.185));
					descent = tmp16;
					leading = currentFormat->leading;
					Float tmp17 = (ascent + descent);
					int tmp18 = leading;
					Float tmp19 = (tmp17 + tmp18);
					heightValue = tmp19;
				}
			}
		}
		lineFormat = formatRange->format;
		bool wrap;
		::String tmp6 = this->text;
		int maxLoops = tmp6.length;
		bool tmp7 = this->multiline;
		if ((tmp7)){
			(maxLoops)++;
		}
		while((true)){
			bool tmp8 = (textIndex < maxLoops);
			bool tmp9 = !(tmp8);
			if ((tmp9)){
				break;
			}
			bool tmp10 = (breakIndex > (int)-1);
			bool tmp11 = tmp10;
			bool tmp12;
			if ((tmp11)){
				int tmp13 = spaceIndex;
				int tmp14 = (int)-1;
				int tmp15 = tmp14;
				int tmp16 = tmp15;
				bool tmp17 = (tmp13 == tmp16);
				bool tmp18 = tmp17;
				bool tmp19 = tmp18;
				bool tmp20 = tmp19;
				bool tmp21 = tmp20;
				bool tmp22 = !(tmp21);
				bool tmp23 = tmp22;
				bool tmp24 = tmp23;
				bool tmp25 = tmp24;
				bool tmp26 = tmp25;
				if ((tmp26)){
					tmp12 = (breakIndex < spaceIndex);
				}
				else{
					tmp12 = true;
				}
			}
			else{
				tmp12 = false;
			}
			bool tmp13;
			if ((tmp12)){
				tmp13 = (formatRange->end >= breakIndex);
			}
			else{
				tmp13 = false;
			}
			if ((tmp13)){
				bool tmp14 = (textIndex <= breakIndex);
				if ((tmp14)){
					{
						bool tmp15 = (layoutGroup == null());
						bool tmp16 = !(tmp15);
						bool tmp17;
						if ((tmp16)){
							tmp17 = (layoutGroup->startIndex != layoutGroup->endIndex);
						}
						else{
							tmp17 = true;
						}
						if ((tmp17)){
							::openfl::_internal::text::TextLayoutGroup tmp18 = ::openfl::_internal::text::TextLayoutGroup_obj::__new(formatRange->format,textIndex,breakIndex);
							layoutGroup = tmp18;
							::openfl::_internal::text::TextLayoutGroup tmp19 = layoutGroup;
							_g->layoutGroups->push(tmp19);
						}
						else{
							layoutGroup->format = formatRange->format;
							layoutGroup->startIndex = textIndex;
							layoutGroup->endIndex = breakIndex;
						}
					}
					{
						Array< Float > advances1 = Array_obj< Float >::__new();
						bool tmp15 = (_g->__textLayout == null());
						if ((tmp15)){
							::lime::text::TextLayout tmp16 = ::lime::text::TextLayout_obj::__new(null(),null(),null(),null(),null(),null());
							_g->__textLayout = tmp16;
						}
						Float width = ((Float)0.0);
						_g->__textLayout->set_text(null());
						::lime::text::Font tmp16 = font;
						_g->__textLayout->set_font(tmp16);
						Dynamic tmp17 = formatRange->format->size;
						bool tmp18 = (tmp17 != null());
						if ((tmp18)){
							Dynamic tmp19 = formatRange->format->size;
							_g->__textLayout->set_size(tmp19);
						}
						::String tmp19 = this->text;
						int tmp20 = textIndex;
						int tmp21 = breakIndex;
						::String tmp22 = tmp19.substring(tmp20,tmp21);
						_g->__textLayout->set_text(tmp22);
						{
							int _g1 = (int)0;
							Array< ::Dynamic > _g2 = _g->__textLayout->get_positions();
							while((true)){
								bool tmp23 = (_g1 < _g2->length);
								bool tmp24 = !(tmp23);
								if ((tmp24)){
									break;
								}
								::lime::text::GlyphPosition tmp25 = _g2->__get(_g1).StaticCast< ::lime::text::GlyphPosition >();
								::lime::text::GlyphPosition position = tmp25;
								++(_g1);
								Float tmp26 = position->advance->x;
								advances1->push(tmp26);
							}
						}
						layoutGroup->advances = advances1;
					}
					layoutGroup->offsetX = offsetX;
					layoutGroup->ascent = ascent;
					layoutGroup->descent = descent;
					layoutGroup->leading = leading;
					layoutGroup->lineIndex = lineIndex;
					layoutGroup->offsetY = offsetY;
					Float tmp15;
					{
						Array< Float > advances1 = layoutGroup->advances;
						Float width = ((Float)0.0);
						{
							int _g1 = (int)0;
							while((true)){
								bool tmp16 = (_g1 < advances1->length);
								bool tmp17 = !(tmp16);
								if ((tmp17)){
									break;
								}
								Float tmp18 = advances1->__get(_g1);
								Float advance = tmp18;
								++(_g1);
								hx::AddEq(width,advance);
							}
						}
						tmp15 = width;
					}
					layoutGroup->width = tmp15;
					layoutGroup->height = heightValue;
					layoutGroup = null();
				}
				else{
					bool tmp15 = (layoutGroup != null());
					bool tmp16;
					if ((tmp15)){
						tmp16 = (layoutGroup->startIndex != layoutGroup->endIndex);
					}
					else{
						tmp16 = false;
					}
					if ((tmp16)){
						int tmp17 = layoutGroup->advances->length;
						int tmp18 = (tmp17 - (int)1);
						Float tmp19 = layoutGroup->advances->__get(tmp18);
						hx::SubEq(layoutGroup->width,tmp19);
						layoutGroup = null();
					}
				}
				hx::AddEq(offsetY,heightValue);
				offsetX = (int)2;
				bool tmp15 = (formatRange->end == breakIndex);
				if ((tmp15)){
					{
						int tmp16 = rangeIndex;
						int tmp17 = _g->textFormatRanges->get_length();
						int tmp18 = (tmp17 - (int)1);
						bool tmp19 = (tmp16 < tmp18);
						if ((tmp19)){
							(rangeIndex)++;
							int tmp20 = rangeIndex;
							::openfl::_internal::text::TextFormatRange tmp21 = _g->textFormatRanges->get(tmp20);
							formatRange = tmp21;
							::openfl::text::TextFormat tmp22 = formatRange->format;
							currentFormat->__merge(tmp22);
							::openfl::text::TextFormat tmp23 = currentFormat;
							::openfl::text::Font tmp24 = ::openfl::_internal::text::TextEngine_obj::getFontInstance(tmp23);
							font = tmp24;
							bool tmp25 = (font != null());
							if ((tmp25)){
								int tmp26 = font->get_ascender();
								int tmp27 = font->get_unitsPerEM();
								Float tmp28 = (Float(tmp26) / Float(tmp27));
								Dynamic tmp29 = currentFormat->size;
								Float tmp30 = (tmp28 * tmp29);
								ascent = tmp30;
								int tmp31 = font->get_descender();
								int tmp32 = font->get_unitsPerEM();
								Float tmp33 = (Float(tmp31) / Float(tmp32));
								Dynamic tmp34 = currentFormat->size;
								Float tmp35 = (tmp33 * tmp34);
								Float tmp36 = ::Math_obj::abs(tmp35);
								descent = tmp36;
								leading = currentFormat->leading;
								Float tmp37 = (ascent + descent);
								int tmp38 = leading;
								Float tmp39 = (tmp37 + tmp38);
								heightValue = tmp39;
							}
							else{
								ascent = currentFormat->size;
								Float tmp26 = (currentFormat->size * ((Float)0.185));
								descent = tmp26;
								leading = currentFormat->leading;
								Float tmp27 = (ascent + descent);
								int tmp28 = leading;
								Float tmp29 = (tmp27 + tmp28);
								heightValue = tmp29;
							}
						}
					}
					lineFormat = formatRange->format;
				}
				int tmp16 = (breakIndex + (int)1);
				textIndex = tmp16;
				int tmp17 = textIndex;
				int tmp18 = this->getLineBreakIndex(tmp17);
				breakIndex = tmp18;
				(lineIndex)++;
			}
			else{
				bool tmp14 = (formatRange->end >= spaceIndex);
				bool tmp15 = tmp14;
				bool tmp16;
				if ((tmp15)){
					int tmp17 = spaceIndex;
					int tmp18 = (int)-1;
					int tmp19 = tmp18;
					int tmp20 = tmp19;
					tmp16 = (tmp17 > tmp20);
				}
				else{
					tmp16 = false;
				}
				bool tmp17;
				if ((tmp16)){
					tmp17 = (textIndex < formatRange->end);
				}
				else{
					tmp17 = false;
				}
				if ((tmp17)){
					bool tmp18 = (layoutGroup != null());
					bool tmp19;
					if ((tmp18)){
						tmp19 = (layoutGroup->startIndex != layoutGroup->endIndex);
					}
					else{
						tmp19 = false;
					}
					if ((tmp19)){
						layoutGroup = null();
					}
					wrap = false;
					while((true)){
						bool tmp20 = (textIndex == formatRange->end);
						if ((tmp20)){
							break;
						}
						int tmp21 = spaceIndex;
						int tmp22 = (int)-1;
						bool tmp23 = (tmp21 == tmp22);
						int tmp24;
						if ((tmp23)){
							int tmp25 = breakIndex;
							int tmp26 = (int)-1;
							bool tmp27 = (tmp25 == tmp26);
							if ((tmp27)){
								tmp24 = formatRange->end;
							}
							else{
								tmp24 = breakIndex;
							}
						}
						else{
							int tmp25 = (spaceIndex + (int)1);
							int tmp26 = formatRange->end;
							bool tmp27 = (tmp25 > tmp26);
							if ((tmp27)){
								tmp24 = formatRange->end;
							}
							else{
								tmp24 = (spaceIndex + (int)1);
							}
						}
						int endIndex = tmp24;
						{
							Array< Float > advances1 = Array_obj< Float >::__new();
							bool tmp25 = (_g->__textLayout == null());
							if ((tmp25)){
								::lime::text::TextLayout tmp26 = ::lime::text::TextLayout_obj::__new(null(),null(),null(),null(),null(),null());
								_g->__textLayout = tmp26;
							}
							Float width = ((Float)0.0);
							_g->__textLayout->set_text(null());
							::lime::text::Font tmp26 = font;
							_g->__textLayout->set_font(tmp26);
							Dynamic tmp27 = formatRange->format->size;
							bool tmp28 = (tmp27 != null());
							if ((tmp28)){
								Dynamic tmp29 = formatRange->format->size;
								_g->__textLayout->set_size(tmp29);
							}
							::String tmp29 = this->text;
							int tmp30 = textIndex;
							int tmp31 = endIndex;
							::String tmp32 = tmp29.substring(tmp30,tmp31);
							_g->__textLayout->set_text(tmp32);
							{
								int _g1 = (int)0;
								Array< ::Dynamic > _g2 = _g->__textLayout->get_positions();
								while((true)){
									bool tmp33 = (_g1 < _g2->length);
									bool tmp34 = !(tmp33);
									if ((tmp34)){
										break;
									}
									::lime::text::GlyphPosition tmp35 = _g2->__get(_g1).StaticCast< ::lime::text::GlyphPosition >();
									::lime::text::GlyphPosition position = tmp35;
									++(_g1);
									Float tmp36 = position->advance->x;
									advances1->push(tmp36);
								}
							}
							advances = advances1;
						}
						Float tmp25;
						{
							Float width = ((Float)0.0);
							{
								int _g1 = (int)0;
								while((true)){
									bool tmp26 = (_g1 < advances->length);
									bool tmp27 = !(tmp26);
									if ((tmp27)){
										break;
									}
									Float tmp28 = advances->__get(_g1);
									Float advance = tmp28;
									++(_g1);
									hx::AddEq(width,advance);
								}
							}
							tmp25 = width;
						}
						widthValue = tmp25;
						bool tmp26 = (lineFormat->align == ((Dynamic)((int)2)));
						if ((tmp26)){
							bool tmp27 = (advances->length > (int)0);
							bool tmp28;
							if ((tmp27)){
								tmp28 = (textIndex == previousSpaceIndex);
							}
							else{
								tmp28 = false;
							}
							if ((tmp28)){
								(textIndex)++;
								Dynamic tmp29 = advances->shift();
								Dynamic spaceWidth = tmp29;
								hx::SubEq(widthValue,spaceWidth);
								hx::AddEq(offsetX,spaceWidth);
							}
							bool tmp29 = (advances->length > (int)0);
							bool tmp30;
							if ((tmp29)){
								int tmp31 = endIndex;
								int tmp32 = (spaceIndex + (int)1);
								int tmp33 = tmp32;
								tmp30 = (tmp31 == tmp33);
							}
							else{
								tmp30 = false;
							}
							if ((tmp30)){
								(endIndex)--;
								Dynamic tmp31 = advances->pop();
								Dynamic spaceWidth = tmp31;
								hx::SubEq(widthValue,spaceWidth);
							}
						}
						bool tmp27 = this->wordWrap;
						if ((tmp27)){
							Float tmp28 = (offsetX + widthValue);
							Float tmp29 = this->width;
							bool tmp30 = (tmp28 > tmp29);
							if ((tmp30)){
								wrap = true;
							}
						}
						bool tmp28 = wrap;
						if ((tmp28)){
							bool tmp29 = (lineFormat->align != ((Dynamic)((int)2)));
							bool tmp30;
							if ((tmp29)){
								bool tmp31 = (layoutGroup != null());
								bool tmp32 = tmp31;
								bool tmp33 = tmp32;
								bool tmp34 = !(tmp33);
								bool tmp35 = tmp34;
								bool tmp36 = tmp35;
								if ((tmp36)){
									::openfl::_Vector::ObjectVector tmp37 = this->layoutGroups;
									::openfl::_Vector::ObjectVector tmp38 = tmp37;
									::openfl::_Vector::ObjectVector tmp39 = tmp38;
									int tmp40 = tmp39->get_length();
									int tmp41 = tmp40;
									int tmp42 = tmp41;
									tmp30 = (tmp42 > (int)0);
								}
								else{
									tmp30 = true;
								}
							}
							else{
								tmp30 = false;
							}
							if ((tmp30)){
								::openfl::_internal::text::TextLayoutGroup previous = layoutGroup;
								bool tmp31 = (previous == null());
								if ((tmp31)){
									::openfl::_internal::text::TextLayoutGroup tmp32;
									{
										::openfl::_Vector::ObjectVector tmp33 = this->layoutGroups;
										int tmp34 = tmp33->get_length();
										int tmp35 = (tmp34 - (int)1);
										int index = tmp35;
										::openfl::_Vector::ObjectVector tmp36 = this->layoutGroups;
										int tmp37 = index;
										tmp32 = tmp36->get(tmp37);
									}
									previous = tmp32;
								}
								int tmp32 = previous->advances->length;
								int tmp33 = (tmp32 - (int)1);
								Float tmp34 = previous->advances->__get(tmp33);
								hx::SubEq(previous->width,tmp34);
								(previous->endIndex)--;
							}
							hx::AddEq(offsetY,heightValue);
							::openfl::_Vector::ObjectVector tmp31 = this->layoutGroups;
							int tmp32 = tmp31->get_length();
							int tmp33 = (tmp32 - (int)1);
							int i = tmp33;
							int offsetCount = (int)0;
							while((true)){
								::openfl::_Vector::ObjectVector tmp34 = this->layoutGroups;
								int tmp35 = i;
								::openfl::_internal::text::TextLayoutGroup tmp36 = tmp34->get(tmp35);
								layoutGroup = tmp36;
								bool tmp37 = (i > (int)0);
								bool tmp38;
								if ((tmp37)){
									tmp38 = (layoutGroup->startIndex > previousSpaceIndex);
								}
								else{
									tmp38 = false;
								}
								if ((tmp38)){
									(offsetCount)++;
								}
								else{
									break;
								}
								(i)--;
							}
							(lineIndex)++;
							offsetX = (int)2;
							bool tmp34 = (offsetCount > (int)0);
							if ((tmp34)){
								::openfl::_internal::text::TextLayoutGroup tmp35;
								{
									::openfl::_Vector::ObjectVector tmp36 = this->layoutGroups;
									int tmp37 = tmp36->get_length();
									int tmp38 = offsetCount;
									int tmp39 = (tmp37 - tmp38);
									int index = tmp39;
									::openfl::_Vector::ObjectVector tmp40 = this->layoutGroups;
									int tmp41 = index;
									tmp35 = tmp40->get(tmp41);
								}
								Float bumpX = tmp35->offsetX;
								{
									::openfl::_Vector::ObjectVector tmp36 = this->layoutGroups;
									int tmp37 = tmp36->get_length();
									int tmp38 = offsetCount;
									int tmp39 = (tmp37 - tmp38);
									int _g1 = tmp39;
									::openfl::_Vector::ObjectVector tmp40 = this->layoutGroups;
									int tmp41 = tmp40->get_length();
									int _g2 = tmp41;
									while((true)){
										bool tmp42 = (_g1 < _g2);
										bool tmp43 = !(tmp42);
										if ((tmp43)){
											break;
										}
										int tmp44 = (_g1)++;
										int i1 = tmp44;
										::openfl::_Vector::ObjectVector tmp45 = this->layoutGroups;
										int tmp46 = i1;
										::openfl::_internal::text::TextLayoutGroup tmp47 = tmp45->get(tmp46);
										layoutGroup = tmp47;
										hx::SubEq(layoutGroup->offsetX,bumpX);
										layoutGroup->offsetY = offsetY;
										layoutGroup->lineIndex = lineIndex;
										hx::AddEq(offsetX,layoutGroup->width);
									}
								}
							}
							{
								bool tmp35 = (layoutGroup == null());
								bool tmp36 = !(tmp35);
								bool tmp37;
								if ((tmp36)){
									tmp37 = (layoutGroup->startIndex != layoutGroup->endIndex);
								}
								else{
									tmp37 = true;
								}
								if ((tmp37)){
									::openfl::_internal::text::TextLayoutGroup tmp38 = ::openfl::_internal::text::TextLayoutGroup_obj::__new(formatRange->format,textIndex,endIndex);
									layoutGroup = tmp38;
									::openfl::_internal::text::TextLayoutGroup tmp39 = layoutGroup;
									_g->layoutGroups->push(tmp39);
								}
								else{
									layoutGroup->format = formatRange->format;
									layoutGroup->startIndex = textIndex;
									layoutGroup->endIndex = endIndex;
								}
							}
							layoutGroup->advances = advances;
							layoutGroup->offsetX = offsetX;
							layoutGroup->ascent = ascent;
							layoutGroup->descent = descent;
							layoutGroup->leading = leading;
							layoutGroup->lineIndex = lineIndex;
							layoutGroup->offsetY = offsetY;
							layoutGroup->width = widthValue;
							layoutGroup->height = heightValue;
							hx::AddEq(offsetX,widthValue);
							textIndex = endIndex;
							wrap = false;
						}
						else{
							bool tmp29 = (layoutGroup != null());
							bool tmp30;
							if ((tmp29)){
								tmp30 = (textIndex == spaceIndex);
							}
							else{
								tmp30 = false;
							}
							if ((tmp30)){
								bool tmp31 = (lineFormat->align != ((Dynamic)((int)2)));
								if ((tmp31)){
									layoutGroup->endIndex = spaceIndex;
								}
							}
							else{
								bool tmp31 = (layoutGroup == null());
								bool tmp32 = !(tmp31);
								bool tmp33;
								if ((tmp32)){
									tmp33 = (lineFormat->align == ((Dynamic)((int)2)));
								}
								else{
									tmp33 = true;
								}
								if ((tmp33)){
									{
										bool tmp34 = (layoutGroup == null());
										bool tmp35 = !(tmp34);
										bool tmp36;
										if ((tmp35)){
											tmp36 = (layoutGroup->startIndex != layoutGroup->endIndex);
										}
										else{
											tmp36 = true;
										}
										if ((tmp36)){
											::openfl::_internal::text::TextLayoutGroup tmp37 = ::openfl::_internal::text::TextLayoutGroup_obj::__new(formatRange->format,textIndex,endIndex);
											layoutGroup = tmp37;
											::openfl::_internal::text::TextLayoutGroup tmp38 = layoutGroup;
											_g->layoutGroups->push(tmp38);
										}
										else{
											layoutGroup->format = formatRange->format;
											layoutGroup->startIndex = textIndex;
											layoutGroup->endIndex = endIndex;
										}
									}
									layoutGroup->advances = advances;
									layoutGroup->offsetX = offsetX;
									layoutGroup->ascent = ascent;
									layoutGroup->descent = descent;
									layoutGroup->leading = leading;
									layoutGroup->lineIndex = lineIndex;
									layoutGroup->offsetY = offsetY;
									layoutGroup->width = widthValue;
									layoutGroup->height = heightValue;
								}
								else{
									layoutGroup->endIndex = endIndex;
									layoutGroup->advances = layoutGroup->advances->concat(advances);
									hx::AddEq(layoutGroup->width,widthValue);
									bool tmp34 = (breakIndex == endIndex);
									if ((tmp34)){
										(endIndex)++;
									}
								}
							}
							hx::AddEq(offsetX,widthValue);
							textIndex = endIndex;
						}
						::String tmp29 = this->text;
						int tmp30 = textIndex;
						int tmp31 = tmp29.indexOf(HX_HCSTRING(" ","\x20","\x00","\x00","\x00"),tmp30);
						int nextSpaceIndex = tmp31;
						bool tmp32 = (formatRange->end <= previousSpaceIndex);
						if ((tmp32)){
							layoutGroup = null();
							textIndex = formatRange->end;
							{
								int tmp33 = rangeIndex;
								int tmp34 = _g->textFormatRanges->get_length();
								int tmp35 = (tmp34 - (int)1);
								bool tmp36 = (tmp33 < tmp35);
								if ((tmp36)){
									(rangeIndex)++;
									int tmp37 = rangeIndex;
									::openfl::_internal::text::TextFormatRange tmp38 = _g->textFormatRanges->get(tmp37);
									formatRange = tmp38;
									::openfl::text::TextFormat tmp39 = formatRange->format;
									currentFormat->__merge(tmp39);
									::openfl::text::TextFormat tmp40 = currentFormat;
									::openfl::text::Font tmp41 = ::openfl::_internal::text::TextEngine_obj::getFontInstance(tmp40);
									font = tmp41;
									bool tmp42 = (font != null());
									if ((tmp42)){
										int tmp43 = font->get_ascender();
										int tmp44 = font->get_unitsPerEM();
										Float tmp45 = (Float(tmp43) / Float(tmp44));
										Dynamic tmp46 = currentFormat->size;
										Float tmp47 = (tmp45 * tmp46);
										ascent = tmp47;
										int tmp48 = font->get_descender();
										int tmp49 = font->get_unitsPerEM();
										Float tmp50 = (Float(tmp48) / Float(tmp49));
										Dynamic tmp51 = currentFormat->size;
										Float tmp52 = (tmp50 * tmp51);
										Float tmp53 = ::Math_obj::abs(tmp52);
										descent = tmp53;
										leading = currentFormat->leading;
										Float tmp54 = (ascent + descent);
										int tmp55 = leading;
										Float tmp56 = (tmp54 + tmp55);
										heightValue = tmp56;
									}
									else{
										ascent = currentFormat->size;
										Float tmp43 = (currentFormat->size * ((Float)0.185));
										descent = tmp43;
										leading = currentFormat->leading;
										Float tmp44 = (ascent + descent);
										int tmp45 = leading;
										Float tmp46 = (tmp44 + tmp45);
										heightValue = tmp46;
									}
								}
							}
						}
						else{
							bool tmp33 = (breakIndex == previousSpaceIndex);
							if ((tmp33)){
								layoutGroup->endIndex = breakIndex;
								int tmp34 = (breakIndex - layoutGroup->startIndex);
								int tmp35 = layoutGroup->advances->length;
								int tmp36 = (tmp34 - tmp35);
								bool tmp37 = (tmp36 < (int)0);
								if ((tmp37)){
									layoutGroup->advances->push(((Float)0.0));
								}
								int tmp38 = (breakIndex + (int)1);
								textIndex = tmp38;
							}
							previousSpaceIndex = spaceIndex;
							spaceIndex = nextSpaceIndex;
						}
						int tmp33 = breakIndex;
						int tmp34 = (int)-1;
						bool tmp35 = (tmp33 > tmp34);
						bool tmp36 = tmp35;
						bool tmp37;
						if ((tmp36)){
							bool tmp38 = (spaceIndex > breakIndex);
							bool tmp39 = tmp38;
							bool tmp40 = tmp39;
							bool tmp41 = tmp40;
							bool tmp42 = tmp41;
							bool tmp43 = !(tmp42);
							bool tmp44 = tmp43;
							bool tmp45 = tmp44;
							bool tmp46 = tmp45;
							bool tmp47 = tmp46;
							if ((tmp47)){
								int tmp48 = spaceIndex;
								int tmp49 = (int)-1;
								int tmp50 = tmp49;
								int tmp51 = tmp50;
								int tmp52 = tmp51;
								bool tmp53 = (tmp48 == tmp52);
								bool tmp54 = tmp53;
								bool tmp55 = tmp54;
								bool tmp56 = tmp55;
								bool tmp57 = tmp56;
								bool tmp58 = tmp57;
								bool tmp59 = tmp58;
								if ((tmp59)){
									tmp37 = (breakIndex <= textIndex);
								}
								else{
									tmp37 = false;
								}
							}
							else{
								tmp37 = true;
							}
						}
						else{
							tmp37 = false;
						}
						bool tmp38 = !(tmp37);
						bool tmp39 = tmp38;
						bool tmp40;
						if ((tmp39)){
							int tmp41 = textIndex;
							::String tmp42 = this->text;
							::String tmp43 = tmp42;
							::String tmp44 = tmp43;
							int tmp45 = tmp44.length;
							tmp40 = (tmp41 > tmp45);
						}
						else{
							tmp40 = true;
						}
						bool tmp41 = !(tmp40);
						bool tmp42;
						if ((tmp41)){
							tmp42 = (spaceIndex > formatRange->end);
						}
						else{
							tmp42 = true;
						}
						if ((tmp42)){
							break;
						}
					}
				}
				else{
					bool tmp18 = (textIndex > formatRange->end);
					if ((tmp18)){
						break;
					}
					else{
						bool tmp19 = (textIndex < formatRange->end);
						bool tmp20 = !(tmp19);
						bool tmp21;
						if ((tmp20)){
							int tmp22 = textIndex;
							::String tmp23 = this->text;
							::String tmp24 = tmp23;
							int tmp25 = tmp24.length;
							tmp21 = (tmp22 == tmp25);
						}
						else{
							tmp21 = true;
						}
						if ((tmp21)){
							{
								Array< Float > advances1 = Array_obj< Float >::__new();
								bool tmp22 = (_g->__textLayout == null());
								if ((tmp22)){
									::lime::text::TextLayout tmp23 = ::lime::text::TextLayout_obj::__new(null(),null(),null(),null(),null(),null());
									_g->__textLayout = tmp23;
								}
								Float width = ((Float)0.0);
								_g->__textLayout->set_text(null());
								::lime::text::Font tmp23 = font;
								_g->__textLayout->set_font(tmp23);
								Dynamic tmp24 = formatRange->format->size;
								bool tmp25 = (tmp24 != null());
								if ((tmp25)){
									Dynamic tmp26 = formatRange->format->size;
									_g->__textLayout->set_size(tmp26);
								}
								::String tmp26 = this->text;
								int tmp27 = textIndex;
								int tmp28 = formatRange->end;
								::String tmp29 = tmp26.substring(tmp27,tmp28);
								_g->__textLayout->set_text(tmp29);
								{
									int _g1 = (int)0;
									Array< ::Dynamic > _g2 = _g->__textLayout->get_positions();
									while((true)){
										bool tmp30 = (_g1 < _g2->length);
										bool tmp31 = !(tmp30);
										if ((tmp31)){
											break;
										}
										::lime::text::GlyphPosition tmp32 = _g2->__get(_g1).StaticCast< ::lime::text::GlyphPosition >();
										::lime::text::GlyphPosition position = tmp32;
										++(_g1);
										Float tmp33 = position->advance->x;
										advances1->push(tmp33);
									}
								}
								advances = advances1;
							}
							Float tmp22;
							{
								Float width = ((Float)0.0);
								{
									int _g1 = (int)0;
									while((true)){
										bool tmp23 = (_g1 < advances->length);
										bool tmp24 = !(tmp23);
										if ((tmp24)){
											break;
										}
										Float tmp25 = advances->__get(_g1);
										Float advance = tmp25;
										++(_g1);
										hx::AddEq(width,advance);
									}
								}
								tmp22 = width;
							}
							widthValue = tmp22;
							bool tmp23 = (layoutGroup != null());
							bool tmp24;
							if ((tmp23)){
								tmp24 = (layoutGroup->startIndex != layoutGroup->endIndex);
							}
							else{
								tmp24 = false;
							}
							if ((tmp24)){
								layoutGroup->advances = layoutGroup->advances->concat(advances);
								hx::AddEq(layoutGroup->width,widthValue);
								layoutGroup->endIndex = formatRange->end;
							}
							else{
								{
									int endIndex = formatRange->end;
									bool tmp25 = (layoutGroup == null());
									bool tmp26 = !(tmp25);
									bool tmp27;
									if ((tmp26)){
										tmp27 = (layoutGroup->startIndex != layoutGroup->endIndex);
									}
									else{
										tmp27 = true;
									}
									if ((tmp27)){
										::openfl::_internal::text::TextLayoutGroup tmp28 = ::openfl::_internal::text::TextLayoutGroup_obj::__new(formatRange->format,textIndex,endIndex);
										layoutGroup = tmp28;
										::openfl::_internal::text::TextLayoutGroup tmp29 = layoutGroup;
										_g->layoutGroups->push(tmp29);
									}
									else{
										layoutGroup->format = formatRange->format;
										layoutGroup->startIndex = textIndex;
										layoutGroup->endIndex = endIndex;
									}
								}
								{
									Array< Float > advances1 = Array_obj< Float >::__new();
									bool tmp25 = (_g->__textLayout == null());
									if ((tmp25)){
										::lime::text::TextLayout tmp26 = ::lime::text::TextLayout_obj::__new(null(),null(),null(),null(),null(),null());
										_g->__textLayout = tmp26;
									}
									Float width = ((Float)0.0);
									_g->__textLayout->set_text(null());
									::lime::text::Font tmp26 = font;
									_g->__textLayout->set_font(tmp26);
									Dynamic tmp27 = formatRange->format->size;
									bool tmp28 = (tmp27 != null());
									if ((tmp28)){
										Dynamic tmp29 = formatRange->format->size;
										_g->__textLayout->set_size(tmp29);
									}
									::String tmp29 = this->text;
									int tmp30 = textIndex;
									int tmp31 = formatRange->end;
									::String tmp32 = tmp29.substring(tmp30,tmp31);
									_g->__textLayout->set_text(tmp32);
									{
										int _g1 = (int)0;
										Array< ::Dynamic > _g2 = _g->__textLayout->get_positions();
										while((true)){
											bool tmp33 = (_g1 < _g2->length);
											bool tmp34 = !(tmp33);
											if ((tmp34)){
												break;
											}
											::lime::text::GlyphPosition tmp35 = _g2->__get(_g1).StaticCast< ::lime::text::GlyphPosition >();
											::lime::text::GlyphPosition position = tmp35;
											++(_g1);
											Float tmp36 = position->advance->x;
											advances1->push(tmp36);
										}
									}
									layoutGroup->advances = advances1;
								}
								layoutGroup->offsetX = offsetX;
								layoutGroup->ascent = ascent;
								layoutGroup->descent = descent;
								layoutGroup->leading = leading;
								layoutGroup->lineIndex = lineIndex;
								layoutGroup->offsetY = offsetY;
								Float tmp25;
								{
									Array< Float > advances1 = layoutGroup->advances;
									Float width = ((Float)0.0);
									{
										int _g1 = (int)0;
										while((true)){
											bool tmp26 = (_g1 < advances1->length);
											bool tmp27 = !(tmp26);
											if ((tmp27)){
												break;
											}
											Float tmp28 = advances1->__get(_g1);
											Float advance = tmp28;
											++(_g1);
											hx::AddEq(width,advance);
										}
									}
									tmp25 = width;
								}
								layoutGroup->width = tmp25;
								layoutGroup->height = heightValue;
							}
							hx::AddEq(offsetX,widthValue);
							textIndex = formatRange->end;
						}
					}
					{
						int tmp19 = rangeIndex;
						int tmp20 = _g->textFormatRanges->get_length();
						int tmp21 = (tmp20 - (int)1);
						bool tmp22 = (tmp19 < tmp21);
						if ((tmp22)){
							(rangeIndex)++;
							int tmp23 = rangeIndex;
							::openfl::_internal::text::TextFormatRange tmp24 = _g->textFormatRanges->get(tmp23);
							formatRange = tmp24;
							::openfl::text::TextFormat tmp25 = formatRange->format;
							currentFormat->__merge(tmp25);
							::openfl::text::TextFormat tmp26 = currentFormat;
							::openfl::text::Font tmp27 = ::openfl::_internal::text::TextEngine_obj::getFontInstance(tmp26);
							font = tmp27;
							bool tmp28 = (font != null());
							if ((tmp28)){
								int tmp29 = font->get_ascender();
								int tmp30 = font->get_unitsPerEM();
								Float tmp31 = (Float(tmp29) / Float(tmp30));
								Dynamic tmp32 = currentFormat->size;
								Float tmp33 = (tmp31 * tmp32);
								ascent = tmp33;
								int tmp34 = font->get_descender();
								int tmp35 = font->get_unitsPerEM();
								Float tmp36 = (Float(tmp34) / Float(tmp35));
								Dynamic tmp37 = currentFormat->size;
								Float tmp38 = (tmp36 * tmp37);
								Float tmp39 = ::Math_obj::abs(tmp38);
								descent = tmp39;
								leading = currentFormat->leading;
								Float tmp40 = (ascent + descent);
								int tmp41 = leading;
								Float tmp42 = (tmp40 + tmp41);
								heightValue = tmp42;
							}
							else{
								ascent = currentFormat->size;
								Float tmp29 = (currentFormat->size * ((Float)0.185));
								descent = tmp29;
								leading = currentFormat->leading;
								Float tmp30 = (ascent + descent);
								int tmp31 = leading;
								Float tmp32 = (tmp30 + tmp31);
								heightValue = tmp32;
							}
						}
					}
					bool tmp19 = (textIndex == formatRange->end);
					if ((tmp19)){
						(textIndex)++;
						break;
					}
				}
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(TextEngine_obj,getLayoutGroups,(void))

Void TextEngine_obj::setTextAlignment( ){
{
		int lineIndex = (int)-1;
		Float offsetX = ((Float)0.0);
		Float tmp = this->width;
		Float tmp1 = (tmp - (int)4);
		Float totalWidth = tmp1;
		::openfl::_internal::text::TextLayoutGroup group;
		int lineLength;
		{
			int _g1 = (int)0;
			::openfl::_Vector::ObjectVector tmp2 = this->layoutGroups;
			int tmp3 = tmp2->get_length();
			int _g = tmp3;
			while((true)){
				bool tmp4 = (_g1 < _g);
				bool tmp5 = !(tmp4);
				if ((tmp5)){
					break;
				}
				int tmp6 = (_g1)++;
				int i = tmp6;
				::openfl::_Vector::ObjectVector tmp7 = this->layoutGroups;
				int tmp8 = i;
				::openfl::_internal::text::TextLayoutGroup tmp9 = tmp7->get(tmp8);
				group = tmp9;
				bool tmp10 = (group->lineIndex != lineIndex);
				if ((tmp10)){
					lineIndex = group->lineIndex;
					{
						Dynamic tmp11 = group->format->align;
						Dynamic _g2 = tmp11;
						Dynamic tmp12 = _g2;
						switch( (int)(tmp12)){
							case (int)0: {
								::openfl::_Vector::FloatVector tmp13 = this->lineWidths;
								int tmp14 = lineIndex;
								Float tmp15 = tmp13->get(tmp14);
								Float tmp16 = tmp15;
								Float tmp17 = totalWidth;
								bool tmp18 = (tmp16 < tmp17);
								if ((tmp18)){
									Float tmp19 = totalWidth;
									::openfl::_Vector::FloatVector tmp20 = this->lineWidths;
									int tmp21 = lineIndex;
									Float tmp22 = tmp20->get(tmp21);
									Float tmp23 = tmp22;
									Float tmp24 = (tmp19 - tmp23);
									Float tmp25 = (Float(tmp24) / Float((int)2));
									int tmp26 = ::Math_obj::round(tmp25);
									offsetX = tmp26;
								}
								else{
									offsetX = (int)0;
								}
							}
							;break;
							case (int)4: {
								::openfl::_Vector::FloatVector tmp13 = this->lineWidths;
								int tmp14 = lineIndex;
								Float tmp15 = tmp13->get(tmp14);
								Float tmp16 = tmp15;
								Float tmp17 = totalWidth;
								bool tmp18 = (tmp16 < tmp17);
								if ((tmp18)){
									Float tmp19 = totalWidth;
									::openfl::_Vector::FloatVector tmp20 = this->lineWidths;
									int tmp21 = lineIndex;
									Float tmp22 = tmp20->get(tmp21);
									Float tmp23 = tmp22;
									Float tmp24 = (tmp19 - tmp23);
									int tmp25 = ::Math_obj::round(tmp24);
									offsetX = tmp25;
								}
								else{
									offsetX = (int)0;
								}
							}
							;break;
							case (int)2: {
								::openfl::_Vector::FloatVector tmp13 = this->lineWidths;
								int tmp14 = lineIndex;
								Float tmp15 = tmp13->get(tmp14);
								Float tmp16 = tmp15;
								Float tmp17 = totalWidth;
								bool tmp18 = (tmp16 < tmp17);
								if ((tmp18)){
									lineLength = (int)1;
									{
										int tmp19 = (i + (int)1);
										int _g4 = tmp19;
										::openfl::_Vector::ObjectVector tmp20 = this->layoutGroups;
										int tmp21 = tmp20->get_length();
										int _g3 = tmp21;
										while((true)){
											bool tmp22 = (_g4 < _g3);
											bool tmp23 = !(tmp22);
											if ((tmp23)){
												break;
											}
											int tmp24 = (_g4)++;
											int j = tmp24;
											::openfl::_Vector::ObjectVector tmp25 = this->layoutGroups;
											int tmp26 = j;
											::openfl::_internal::text::TextLayoutGroup tmp27 = tmp25->get(tmp26);
											int tmp28 = tmp27->lineIndex;
											int tmp29 = lineIndex;
											bool tmp30 = (tmp28 == tmp29);
											if ((tmp30)){
												bool tmp31 = (j == (int)0);
												bool tmp32 = !(tmp31);
												bool tmp33;
												if ((tmp32)){
													::String tmp34 = this->text;
													::String tmp35 = tmp34;
													::openfl::_Vector::ObjectVector tmp36 = this->layoutGroups;
													::openfl::_Vector::ObjectVector tmp37 = tmp36;
													int tmp38 = j;
													int tmp39 = tmp38;
													::openfl::_internal::text::TextLayoutGroup tmp40 = tmp37->get(tmp39);
													::openfl::_internal::text::TextLayoutGroup tmp41 = tmp40;
													int tmp42 = tmp41->startIndex;
													int tmp43 = tmp42;
													int tmp44 = (tmp43 - (int)1);
													int tmp45 = tmp44;
													int tmp46 = tmp45;
													Dynamic tmp47 = tmp35.charCodeAt(tmp46);
													Dynamic tmp48 = tmp47;
													tmp33 = (tmp48 == (int)32);
												}
												else{
													tmp33 = true;
												}
												if ((tmp33)){
													(lineLength)++;
												}
											}
											else{
												break;
											}
										}
									}
									bool tmp19 = (lineLength > (int)1);
									if ((tmp19)){
										::openfl::_Vector::ObjectVector tmp20 = this->layoutGroups;
										int tmp21 = (i + lineLength);
										int tmp22 = (tmp21 - (int)1);
										::openfl::_internal::text::TextLayoutGroup tmp23 = tmp20->get(tmp22);
										group = tmp23;
										::String tmp24 = this->text;
										int tmp25 = group->endIndex;
										Dynamic tmp26 = tmp24.charCodeAt(tmp25);
										Dynamic endChar = tmp26;
										int tmp27 = group->endIndex;
										::String tmp28 = this->text;
										int tmp29 = tmp28.length;
										bool tmp30 = (tmp27 < tmp29);
										bool tmp31 = tmp30;
										bool tmp32;
										if ((tmp31)){
											tmp32 = (endChar != (int)10);
										}
										else{
											tmp32 = false;
										}
										bool tmp33;
										if ((tmp32)){
											tmp33 = (endChar != (int)13);
										}
										else{
											tmp33 = false;
										}
										if ((tmp33)){
											Float tmp34 = totalWidth;
											::openfl::_Vector::FloatVector tmp35 = this->lineWidths;
											int tmp36 = lineIndex;
											Float tmp37 = tmp35->get(tmp36);
											Float tmp38 = tmp37;
											Float tmp39 = (tmp34 - tmp38);
											int tmp40 = (lineLength - (int)1);
											Float tmp41 = (Float(tmp39) / Float(tmp40));
											offsetX = tmp41;
											int j = (int)0;
											while((true)){
												bool tmp42 = (j > (int)1);
												bool tmp43;
												if ((tmp42)){
													::String tmp44 = this->text;
													::String tmp45 = tmp44;
													::openfl::_Vector::ObjectVector tmp46 = this->layoutGroups;
													::openfl::_Vector::ObjectVector tmp47 = tmp46;
													int tmp48 = j;
													int tmp49 = tmp48;
													::openfl::_internal::text::TextLayoutGroup tmp50 = tmp47->get(tmp49);
													::openfl::_internal::text::TextLayoutGroup tmp51 = tmp50;
													int tmp52 = tmp51->startIndex;
													int tmp53 = tmp52;
													int tmp54 = (tmp53 - (int)1);
													int tmp55 = tmp54;
													int tmp56 = tmp55;
													Dynamic tmp57 = tmp45.charCodeAt(tmp56);
													Dynamic tmp58 = tmp57;
													tmp43 = (tmp58 != (int)32);
												}
												else{
													tmp43 = false;
												}
												if ((tmp43)){
													Float tmp44 = offsetX;
													int tmp45 = (j - (int)1);
													Float tmp46 = (tmp44 * tmp45);
													::openfl::_Vector::ObjectVector tmp47 = this->layoutGroups;
													int tmp48 = (i + j);
													::openfl::_internal::text::TextLayoutGroup tmp49 = tmp47->get(tmp48);
													hx::AddEq(tmp49->offsetX,tmp46);
													(j)++;
												}
												Float tmp44 = (offsetX * j);
												::openfl::_Vector::ObjectVector tmp45 = this->layoutGroups;
												int tmp46 = (i + j);
												::openfl::_internal::text::TextLayoutGroup tmp47 = tmp45->get(tmp46);
												hx::AddEq(tmp47->offsetX,tmp44);
												int tmp48 = ++(j);
												int tmp49 = lineLength;
												bool tmp50 = (tmp48 < tmp49);
												bool tmp51 = !(tmp50);
												if ((tmp51)){
													break;
												}
											}
										}
									}
								}
								offsetX = (int)0;
							}
							;break;
							default: {
								offsetX = (int)0;
							}
						}
					}
				}
				bool tmp11 = (offsetX > (int)0);
				if ((tmp11)){
					hx::AddEq(group->offsetX,offsetX);
				}
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(TextEngine_obj,setTextAlignment,(void))

Void TextEngine_obj::update( ){
{
		::String tmp = this->text;
		bool tmp1 = (tmp == null());
		bool tmp2 = !(tmp1);
		bool tmp3 = tmp2;
		bool tmp4;
		if ((tmp3)){
			bool tmp5 = this->multiline;
			bool tmp6 = tmp5;
			bool tmp7 = tmp6;
			bool tmp8 = tmp7;
			bool tmp9 = tmp8;
			bool tmp10 = tmp9;
			bool tmp11 = !(tmp10);
			bool tmp12 = tmp11;
			bool tmp13 = tmp12;
			bool tmp14 = tmp13;
			bool tmp15 = tmp14;
			if ((tmp15)){
				::String tmp16 = this->text;
				::String tmp17 = tmp16;
				::String tmp18 = tmp17;
				::String tmp19 = tmp18;
				::String tmp20 = tmp19;
				::String tmp21 = tmp20;
				::String tmp22 = tmp21;
				::String tmp23 = ::StringTools_obj::trim(tmp22);
				::String tmp24 = tmp23;
				::String tmp25 = tmp24;
				::String tmp26 = tmp25;
				tmp4 = (tmp26 == HX_HCSTRING("","\x00","\x00","\x00","\x00"));
			}
			else{
				tmp4 = false;
			}
		}
		else{
			tmp4 = true;
		}
		bool tmp5 = !(tmp4);
		bool tmp6;
		if ((tmp5)){
			::openfl::_Vector::ObjectVector tmp7 = this->textFormatRanges;
			::openfl::_Vector::ObjectVector tmp8 = tmp7;
			int tmp9 = tmp8->get_length();
			int tmp10 = tmp9;
			tmp6 = (tmp10 == (int)0);
		}
		else{
			tmp6 = true;
		}
		if ((tmp6)){
			::openfl::_Vector::FloatVector tmp7 = this->lineAscents;
			tmp7->set_length((int)0);
			::openfl::_Vector::IntVector tmp8 = this->lineBreaks;
			tmp8->set_length((int)0);
			::openfl::_Vector::FloatVector tmp9 = this->lineDescents;
			tmp9->set_length((int)0);
			::openfl::_Vector::FloatVector tmp10 = this->lineLeadings;
			tmp10->set_length((int)0);
			::openfl::_Vector::FloatVector tmp11 = this->lineHeights;
			tmp11->set_length((int)0);
			::openfl::_Vector::FloatVector tmp12 = this->lineWidths;
			tmp12->set_length((int)0);
			::openfl::_Vector::ObjectVector tmp13 = this->layoutGroups;
			tmp13->set_length((int)0);
			this->textWidth = (int)0;
			this->textHeight = (int)0;
			this->numLines = (int)1;
			this->maxScrollH = (int)0;
			this->maxScrollV = (int)1;
			this->bottomScrollV = (int)1;
		}
		else{
			this->getLayoutGroups();
			this->getLineMeasurements();
			this->setTextAlignment();
		}
		this->getBounds();
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(TextEngine_obj,update,(void))

::String TextEngine_obj::set_restrict( ::String value){
	::String tmp = this->restrict;
	::String tmp1 = value;
	bool tmp2 = (tmp == tmp1);
	if ((tmp2)){
		::String tmp3 = this->restrict;
		return tmp3;
	}
	this->restrict = value;
	::String tmp3 = this->restrict;
	bool tmp4 = (tmp3 == null());
	bool tmp5 = !(tmp4);
	bool tmp6;
	if ((tmp5)){
		::String tmp7 = this->restrict;
		::String tmp8 = tmp7;
		int tmp9 = tmp8.length;
		tmp6 = (tmp9 == (int)0);
	}
	else{
		tmp6 = true;
	}
	if ((tmp6)){
		this->__restrictRegexp = null();
	}
	else{
		::String tmp7 = value;
		::EReg tmp8 = this->createRestrictRegexp(tmp7);
		this->__restrictRegexp = tmp8;
	}
	::String tmp7 = this->restrict;
	return tmp7;
}


HX_DEFINE_DYNAMIC_FUNC1(TextEngine_obj,set_restrict,return )

::String TextEngine_obj::set_text( ::String value){
	bool tmp = (value == null());
	if ((tmp)){
		::String tmp1 = this->text = value;
		return tmp1;
	}
	::EReg tmp1 = this->__restrictRegexp;
	bool tmp2 = (tmp1 != null());
	if ((tmp2)){
		::EReg tmp3 = this->__restrictRegexp;
		::String tmp4 = value;
		::String tmp5 = tmp3->split(tmp4)->join(HX_HCSTRING("","\x00","\x00","\x00","\x00"));
		value = tmp5;
	}
	int tmp3 = this->maxChars;
	bool tmp4 = (tmp3 > (int)0);
	bool tmp5;
	if ((tmp4)){
		int tmp6 = value.length;
		int tmp7 = this->maxChars;
		int tmp8 = tmp7;
		tmp5 = (tmp6 > tmp8);
	}
	else{
		tmp5 = false;
	}
	if ((tmp5)){
		int tmp6 = this->maxChars;
		::String tmp7 = value.substr((int)0,tmp6);
		value = tmp7;
	}
	this->text = value;
	::String tmp6 = this->text;
	return tmp6;
}


HX_DEFINE_DYNAMIC_FUNC1(TextEngine_obj,set_text,return )

int TextEngine_obj::UTF8_TAB;

int TextEngine_obj::UTF8_ENDLINE;

int TextEngine_obj::UTF8_SPACE;

int TextEngine_obj::UTF8_HYPHEN;

::haxe::ds::StringMap TextEngine_obj::__defaultFonts;

::openfl::text::Font TextEngine_obj::findFont( ::String name){
	{
		int _g = (int)0;
		Array< ::Dynamic > _g1 = ::openfl::text::Font_obj::__registeredFonts;
		while((true)){
			bool tmp = (_g < _g1->length);
			bool tmp1 = !(tmp);
			if ((tmp1)){
				break;
			}
			::openfl::text::Font tmp2 = _g1->__get(_g).StaticCast< ::openfl::text::Font >();
			::openfl::text::Font registeredFont = tmp2;
			++(_g);
			bool tmp3 = (registeredFont == null());
			if ((tmp3)){
				continue;
			}
			bool tmp4 = (registeredFont->name == name);
			bool tmp5 = !(tmp4);
			bool tmp6;
			if ((tmp5)){
				bool tmp7 = (registeredFont->__fontPath != null());
				bool tmp8 = tmp7;
				bool tmp9 = tmp8;
				if ((tmp9)){
					bool tmp10 = (registeredFont->__fontPath == name);
					bool tmp11 = tmp10;
					bool tmp12 = tmp11;
					bool tmp13 = tmp12;
					bool tmp14 = tmp13;
					bool tmp15 = !(tmp14);
					bool tmp16 = tmp15;
					bool tmp17 = tmp16;
					bool tmp18 = tmp17;
					bool tmp19 = tmp18;
					if ((tmp19)){
						tmp6 = (registeredFont->__fontPathWithoutDirectory == name);
					}
					else{
						tmp6 = true;
					}
				}
				else{
					tmp6 = false;
				}
			}
			else{
				tmp6 = true;
			}
			if ((tmp6)){
				::openfl::text::Font tmp7 = registeredFont;
				return tmp7;
			}
		}
	}
	::String tmp = name;
	::openfl::text::Font tmp1 = ::openfl::text::Font_obj::fromFile(tmp);
	::openfl::text::Font font = tmp1;
	bool tmp2 = (font != null());
	if ((tmp2)){
		::openfl::text::Font tmp3 = font;
		::openfl::text::Font_obj::__registeredFonts->push(tmp3);
		::openfl::text::Font tmp4 = font;
		return tmp4;
	}
	return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(TextEngine_obj,findFont,return )

Float TextEngine_obj::getFormatHeight( ::openfl::text::TextFormat format){
	Float ascent;
	Float descent;
	Dynamic leading;
	::openfl::text::TextFormat tmp = format;
	::openfl::text::Font tmp1 = ::openfl::_internal::text::TextEngine_obj::getFontInstance(tmp);
	::openfl::text::Font font = tmp1;
	bool tmp2 = (font != null());
	if ((tmp2)){
		int tmp3 = font->get_ascender();
		int tmp4 = font->get_unitsPerEM();
		Float tmp5 = (Float(tmp3) / Float(tmp4));
		Dynamic tmp6 = format->size;
		Float tmp7 = (tmp5 * tmp6);
		ascent = tmp7;
		int tmp8 = font->get_descender();
		int tmp9 = font->get_unitsPerEM();
		Float tmp10 = (Float(tmp8) / Float(tmp9));
		Dynamic tmp11 = format->size;
		Float tmp12 = (tmp10 * tmp11);
		Float tmp13 = ::Math_obj::abs(tmp12);
		descent = tmp13;
		leading = format->leading;
	}
	else{
		ascent = format->size;
		Float tmp3 = (format->size * ((Float)0.185));
		descent = tmp3;
		leading = format->leading;
	}
	Float tmp3 = (ascent + descent);
	Dynamic tmp4 = leading;
	Float tmp5 = (tmp3 + tmp4);
	return tmp5;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(TextEngine_obj,getFormatHeight,return )

::String TextEngine_obj::getFont( ::openfl::text::TextFormat format){
	Dynamic tmp = format->italic;
	::String tmp1;
	if ((tmp)){
		tmp1 = HX_HCSTRING("italic ","\x30","\xe3","\x44","\x91");
	}
	else{
		tmp1 = HX_HCSTRING("normal ","\x19","\x70","\xda","\x2b");
	}
	::String font = tmp1;
	hx::AddEq(font,HX_HCSTRING("normal ","\x19","\x70","\xda","\x2b"));
	Dynamic tmp2 = format->bold;
	::String tmp3;
	if ((tmp2)){
		tmp3 = HX_HCSTRING("bold ","\xfb","\xd2","\xf5","\xb6");
	}
	else{
		tmp3 = HX_HCSTRING("normal ","\x19","\x70","\xda","\x2b");
	}
	hx::AddEq(font,tmp3);
	::String tmp4 = (format->size + HX_HCSTRING("px","\x08","\x62","\x00","\x00"));
	hx::AddEq(font,tmp4);
	int tmp5 = (format->leading + format->size);
	int tmp6 = (tmp5 + (int)3);
	::String tmp7 = (HX_HCSTRING("/","\x2f","\x00","\x00","\x00") + tmp6);
	::String tmp8 = (tmp7 + HX_HCSTRING("px ","\x18","\x65","\x55","\x00"));
	hx::AddEq(font,tmp8);
	::String tmp9;
	{
		::String _g = format->font;
		::String tmp10 = _g;
		::String _switch_1 = (tmp10);
		if (  ( _switch_1==HX_HCSTRING("_sans","\x32","\xa0","\x5e","\xff"))){
			tmp9 = HX_HCSTRING("sans-serif","\xc3","\x60","\xfb","\x08");
		}
		else if (  ( _switch_1==HX_HCSTRING("_serif","\xbe","\x66","\x15","\x76"))){
			tmp9 = HX_HCSTRING("serif","\x7d","\x1f","\x2e","\x7a");
		}
		else if (  ( _switch_1==HX_HCSTRING("_typewriter","\x0c","\x5e","\x52","\x94"))){
			tmp9 = HX_HCSTRING("monospace","\xc3","\xd1","\xe5","\x5e");
		}
		else  {
			::EReg tmp11 = ::EReg_obj::__new(HX_HCSTRING("^[\\s'\"]+(.*)[\\s'\"]+$","\xeb","\xe4","\xeb","\xf5"),HX_HCSTRING("","\x00","\x00","\x00","\x00"));
			::String tmp12 = format->font;
			::String tmp13 = tmp11->replace(tmp12,HX_HCSTRING("$1","\x8d","\x1f","\x00","\x00"));
			::String tmp14 = (HX_HCSTRING("'","\x27","\x00","\x00","\x00") + tmp13);
			tmp9 = (tmp14 + HX_HCSTRING("'","\x27","\x00","\x00","\x00"));
		}
;
;
	}
	::String tmp10 = (HX_HCSTRING("","\x00","\x00","\x00","\x00") + tmp9);
	hx::AddEq(font,tmp10);
	::String tmp11 = font;
	return tmp11;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(TextEngine_obj,getFont,return )

::openfl::text::Font TextEngine_obj::getFontInstance( ::openfl::text::TextFormat format){
	::openfl::text::Font instance = null();
	Array< ::String > fontList = null();
	bool tmp = (format != null());
	bool tmp1;
	if ((tmp)){
		tmp1 = (format->font != null());
	}
	else{
		tmp1 = false;
	}
	if ((tmp1)){
		::haxe::ds::StringMap tmp2 = ::openfl::_internal::text::TextEngine_obj::__defaultFonts;
		::String tmp3 = format->font;
		bool tmp4 = tmp2->exists(tmp3);
		if ((tmp4)){
			::haxe::ds::StringMap tmp5 = ::openfl::_internal::text::TextEngine_obj::__defaultFonts;
			::String tmp6 = format->font;
			::openfl::text::Font tmp7 = tmp5->get(tmp6);
			::openfl::text::Font tmp8 = tmp7;
			return tmp8;
		}
		::String tmp5 = format->font;
		::openfl::text::Font tmp6 = ::openfl::_internal::text::TextEngine_obj::findFont(tmp5);
		instance = tmp6;
		bool tmp7 = (instance != null());
		if ((tmp7)){
			::openfl::text::Font tmp8 = instance;
			return tmp8;
		}
		::String tmp8 = ::lime::_system::System_obj::get_fontsDirectory();
		::String systemFontDirectory = tmp8;
		{
			::String _g = format->font;
			::String tmp9 = _g;
			::String _switch_2 = (tmp9);
			if (  ( _switch_2==HX_HCSTRING("_sans","\x32","\xa0","\x5e","\xff"))){
				Dynamic tmp10 = format->bold;
				if ((tmp10)){
					Dynamic tmp11 = format->italic;
					if ((tmp11)){
						::String tmp12 = (systemFontDirectory + HX_HCSTRING("/arialbi.ttf","\x73","\x0e","\x91","\x06"));
						fontList = Array_obj< ::String >::__new().Add(tmp12);
					}
					else{
						::String tmp12 = (systemFontDirectory + HX_HCSTRING("/arialbd.ttf","\xee","\x27","\x90","\x25"));
						fontList = Array_obj< ::String >::__new().Add(tmp12);
					}
				}
				else{
					Dynamic tmp11 = format->italic;
					if ((tmp11)){
						::String tmp12 = (systemFontDirectory + HX_HCSTRING("/ariali.ttf","\x2d","\xc9","\x3e","\x6e"));
						fontList = Array_obj< ::String >::__new().Add(tmp12);
					}
					else{
						::String tmp12 = (systemFontDirectory + HX_HCSTRING("/arial.ttf","\x2c","\x34","\x8e","\xd8"));
						fontList = Array_obj< ::String >::__new().Add(tmp12);
					}
				}
			}
			else if (  ( _switch_2==HX_HCSTRING("_serif","\xbe","\x66","\x15","\x76"))){
			}
			else if (  ( _switch_2==HX_HCSTRING("_typewriter","\x0c","\x5e","\x52","\x94"))){
				Dynamic tmp10 = format->bold;
				if ((tmp10)){
					Dynamic tmp11 = format->italic;
					if ((tmp11)){
						::String tmp12 = (systemFontDirectory + HX_HCSTRING("/courbi.ttf","\x77","\x1e","\xb8","\xe7"));
						fontList = Array_obj< ::String >::__new().Add(tmp12);
					}
					else{
						::String tmp12 = (systemFontDirectory + HX_HCSTRING("/courbd.ttf","\xf2","\x37","\xb7","\x06"));
						fontList = Array_obj< ::String >::__new().Add(tmp12);
					}
				}
				else{
					Dynamic tmp11 = format->italic;
					if ((tmp11)){
						::String tmp12 = (systemFontDirectory + HX_HCSTRING("/couri.ttf","\xa9","\xa5","\xb8","\xd7"));
						fontList = Array_obj< ::String >::__new().Add(tmp12);
					}
					else{
						::String tmp12 = (systemFontDirectory + HX_HCSTRING("/cour.ttf","\x30","\x7b","\xd2","\x6a"));
						fontList = Array_obj< ::String >::__new().Add(tmp12);
					}
				}
			}
			else  {
				::String tmp10 = (systemFontDirectory + HX_HCSTRING("/","\x2f","\x00","\x00","\x00"));
				::String tmp11 = format->font;
				::String tmp12 = (tmp10 + tmp11);
				fontList = Array_obj< ::String >::__new().Add(tmp12);
			}
;
;
		}
		bool tmp9 = (fontList != null());
		if ((tmp9)){
			int _g = (int)0;
			while((true)){
				bool tmp10 = (_g < fontList->length);
				bool tmp11 = !(tmp10);
				if ((tmp11)){
					break;
				}
				::String tmp12 = fontList->__get(_g);
				::String font = tmp12;
				++(_g);
				::String tmp13 = font;
				::openfl::text::Font tmp14 = ::openfl::_internal::text::TextEngine_obj::findFont(tmp13);
				instance = tmp14;
				bool tmp15 = (instance != null());
				if ((tmp15)){
					::haxe::ds::StringMap tmp16 = ::openfl::_internal::text::TextEngine_obj::__defaultFonts;
					::String tmp17 = format->font;
					::openfl::text::Font tmp18 = instance;
					tmp16->set(tmp17,tmp18);
					::openfl::text::Font tmp19 = instance;
					return tmp19;
				}
			}
		}
		::openfl::text::Font tmp10 = ::openfl::_internal::text::TextEngine_obj::findFont(HX_HCSTRING("_serif","\xbe","\x66","\x15","\x76"));
		instance = tmp10;
		bool tmp11 = (instance != null());
		if ((tmp11)){
			::openfl::text::Font tmp12 = instance;
			return tmp12;
		}
	}
	::String tmp2 = ::lime::_system::System_obj::get_fontsDirectory();
	::String systemFontDirectory = tmp2;
	Dynamic tmp3 = format->bold;
	if ((tmp3)){
		Dynamic tmp4 = format->italic;
		if ((tmp4)){
			::String tmp5 = (systemFontDirectory + HX_HCSTRING("/timesbi.ttf","\x36","\x79","\x1a","\x28"));
			fontList = Array_obj< ::String >::__new().Add(tmp5);
		}
		else{
			::String tmp5 = (systemFontDirectory + HX_HCSTRING("/timesbd.ttf","\xb1","\x92","\x19","\x47"));
			fontList = Array_obj< ::String >::__new().Add(tmp5);
		}
	}
	else{
		Dynamic tmp4 = format->italic;
		if ((tmp4)){
			::String tmp5 = (systemFontDirectory + HX_HCSTRING("/timesi.ttf","\xca","\x27","\xe8","\xa0"));
			fontList = Array_obj< ::String >::__new().Add(tmp5);
		}
		else{
			::String tmp5 = (systemFontDirectory + HX_HCSTRING("/times.ttf","\x2f","\x58","\x44","\xc5"));
			fontList = Array_obj< ::String >::__new().Add(tmp5);
		}
	}
	{
		int _g = (int)0;
		while((true)){
			bool tmp4 = (_g < fontList->length);
			bool tmp5 = !(tmp4);
			if ((tmp5)){
				break;
			}
			::String tmp6 = fontList->__get(_g);
			::String font = tmp6;
			++(_g);
			::String tmp7 = font;
			::openfl::text::Font tmp8 = ::openfl::_internal::text::TextEngine_obj::findFont(tmp7);
			instance = tmp8;
			bool tmp9 = (instance != null());
			if ((tmp9)){
				::haxe::ds::StringMap tmp10 = ::openfl::_internal::text::TextEngine_obj::__defaultFonts;
				::String tmp11 = format->font;
				::openfl::text::Font tmp12 = instance;
				tmp10->set(tmp11,tmp12);
				::openfl::text::Font tmp13 = instance;
				return tmp13;
			}
		}
	}
	::haxe::ds::StringMap tmp4 = ::openfl::_internal::text::TextEngine_obj::__defaultFonts;
	::String tmp5 = format->font;
	tmp4->set(tmp5,null());
	return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(TextEngine_obj,getFontInstance,return )


TextEngine_obj::TextEngine_obj()
{
}

void TextEngine_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(TextEngine);
	HX_MARK_MEMBER_NAME(antiAliasType,"antiAliasType");
	HX_MARK_MEMBER_NAME(autoSize,"autoSize");
	HX_MARK_MEMBER_NAME(background,"background");
	HX_MARK_MEMBER_NAME(backgroundColor,"backgroundColor");
	HX_MARK_MEMBER_NAME(border,"border");
	HX_MARK_MEMBER_NAME(borderColor,"borderColor");
	HX_MARK_MEMBER_NAME(bottomScrollV,"bottomScrollV");
	HX_MARK_MEMBER_NAME(bounds,"bounds");
	HX_MARK_MEMBER_NAME(caretIndex,"caretIndex");
	HX_MARK_MEMBER_NAME(embedFonts,"embedFonts");
	HX_MARK_MEMBER_NAME(gridFitType,"gridFitType");
	HX_MARK_MEMBER_NAME(height,"height");
	HX_MARK_MEMBER_NAME(layoutGroups,"layoutGroups");
	HX_MARK_MEMBER_NAME(lineAscents,"lineAscents");
	HX_MARK_MEMBER_NAME(lineBreaks,"lineBreaks");
	HX_MARK_MEMBER_NAME(lineDescents,"lineDescents");
	HX_MARK_MEMBER_NAME(lineLeadings,"lineLeadings");
	HX_MARK_MEMBER_NAME(lineHeights,"lineHeights");
	HX_MARK_MEMBER_NAME(lineWidths,"lineWidths");
	HX_MARK_MEMBER_NAME(maxChars,"maxChars");
	HX_MARK_MEMBER_NAME(maxScrollH,"maxScrollH");
	HX_MARK_MEMBER_NAME(maxScrollV,"maxScrollV");
	HX_MARK_MEMBER_NAME(multiline,"multiline");
	HX_MARK_MEMBER_NAME(numLines,"numLines");
	HX_MARK_MEMBER_NAME(restrict,"restrict");
	HX_MARK_MEMBER_NAME(scrollH,"scrollH");
	HX_MARK_MEMBER_NAME(scrollV,"scrollV");
	HX_MARK_MEMBER_NAME(selectable,"selectable");
	HX_MARK_MEMBER_NAME(sharpness,"sharpness");
	HX_MARK_MEMBER_NAME(text,"text");
	HX_MARK_MEMBER_NAME(textHeight,"textHeight");
	HX_MARK_MEMBER_NAME(textFormatRanges,"textFormatRanges");
	HX_MARK_MEMBER_NAME(textWidth,"textWidth");
	HX_MARK_MEMBER_NAME(type,"type");
	HX_MARK_MEMBER_NAME(width,"width");
	HX_MARK_MEMBER_NAME(wordWrap,"wordWrap");
	HX_MARK_MEMBER_NAME(textField,"textField");
	HX_MARK_MEMBER_NAME(__cursorTimer,"__cursorTimer");
	HX_MARK_MEMBER_NAME(__hasFocus,"__hasFocus");
	HX_MARK_MEMBER_NAME(__isKeyDown,"__isKeyDown");
	HX_MARK_MEMBER_NAME(__measuredHeight,"__measuredHeight");
	HX_MARK_MEMBER_NAME(__measuredWidth,"__measuredWidth");
	HX_MARK_MEMBER_NAME(__restrictRegexp,"__restrictRegexp");
	HX_MARK_MEMBER_NAME(__selectionStart,"__selectionStart");
	HX_MARK_MEMBER_NAME(__showCursor,"__showCursor");
	HX_MARK_MEMBER_NAME(__textFormat,"__textFormat");
	HX_MARK_MEMBER_NAME(__textLayout,"__textLayout");
	HX_MARK_MEMBER_NAME(__texture,"__texture");
	HX_MARK_MEMBER_NAME(__useIntAdvances,"__useIntAdvances");
	HX_MARK_MEMBER_NAME(__cairoFont,"__cairoFont");
	HX_MARK_MEMBER_NAME(__font,"__font");
	HX_MARK_END_CLASS();
}

void TextEngine_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(antiAliasType,"antiAliasType");
	HX_VISIT_MEMBER_NAME(autoSize,"autoSize");
	HX_VISIT_MEMBER_NAME(background,"background");
	HX_VISIT_MEMBER_NAME(backgroundColor,"backgroundColor");
	HX_VISIT_MEMBER_NAME(border,"border");
	HX_VISIT_MEMBER_NAME(borderColor,"borderColor");
	HX_VISIT_MEMBER_NAME(bottomScrollV,"bottomScrollV");
	HX_VISIT_MEMBER_NAME(bounds,"bounds");
	HX_VISIT_MEMBER_NAME(caretIndex,"caretIndex");
	HX_VISIT_MEMBER_NAME(embedFonts,"embedFonts");
	HX_VISIT_MEMBER_NAME(gridFitType,"gridFitType");
	HX_VISIT_MEMBER_NAME(height,"height");
	HX_VISIT_MEMBER_NAME(layoutGroups,"layoutGroups");
	HX_VISIT_MEMBER_NAME(lineAscents,"lineAscents");
	HX_VISIT_MEMBER_NAME(lineBreaks,"lineBreaks");
	HX_VISIT_MEMBER_NAME(lineDescents,"lineDescents");
	HX_VISIT_MEMBER_NAME(lineLeadings,"lineLeadings");
	HX_VISIT_MEMBER_NAME(lineHeights,"lineHeights");
	HX_VISIT_MEMBER_NAME(lineWidths,"lineWidths");
	HX_VISIT_MEMBER_NAME(maxChars,"maxChars");
	HX_VISIT_MEMBER_NAME(maxScrollH,"maxScrollH");
	HX_VISIT_MEMBER_NAME(maxScrollV,"maxScrollV");
	HX_VISIT_MEMBER_NAME(multiline,"multiline");
	HX_VISIT_MEMBER_NAME(numLines,"numLines");
	HX_VISIT_MEMBER_NAME(restrict,"restrict");
	HX_VISIT_MEMBER_NAME(scrollH,"scrollH");
	HX_VISIT_MEMBER_NAME(scrollV,"scrollV");
	HX_VISIT_MEMBER_NAME(selectable,"selectable");
	HX_VISIT_MEMBER_NAME(sharpness,"sharpness");
	HX_VISIT_MEMBER_NAME(text,"text");
	HX_VISIT_MEMBER_NAME(textHeight,"textHeight");
	HX_VISIT_MEMBER_NAME(textFormatRanges,"textFormatRanges");
	HX_VISIT_MEMBER_NAME(textWidth,"textWidth");
	HX_VISIT_MEMBER_NAME(type,"type");
	HX_VISIT_MEMBER_NAME(width,"width");
	HX_VISIT_MEMBER_NAME(wordWrap,"wordWrap");
	HX_VISIT_MEMBER_NAME(textField,"textField");
	HX_VISIT_MEMBER_NAME(__cursorTimer,"__cursorTimer");
	HX_VISIT_MEMBER_NAME(__hasFocus,"__hasFocus");
	HX_VISIT_MEMBER_NAME(__isKeyDown,"__isKeyDown");
	HX_VISIT_MEMBER_NAME(__measuredHeight,"__measuredHeight");
	HX_VISIT_MEMBER_NAME(__measuredWidth,"__measuredWidth");
	HX_VISIT_MEMBER_NAME(__restrictRegexp,"__restrictRegexp");
	HX_VISIT_MEMBER_NAME(__selectionStart,"__selectionStart");
	HX_VISIT_MEMBER_NAME(__showCursor,"__showCursor");
	HX_VISIT_MEMBER_NAME(__textFormat,"__textFormat");
	HX_VISIT_MEMBER_NAME(__textLayout,"__textLayout");
	HX_VISIT_MEMBER_NAME(__texture,"__texture");
	HX_VISIT_MEMBER_NAME(__useIntAdvances,"__useIntAdvances");
	HX_VISIT_MEMBER_NAME(__cairoFont,"__cairoFont");
	HX_VISIT_MEMBER_NAME(__font,"__font");
}

Dynamic TextEngine_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"text") ) { return text; }
		if (HX_FIELD_EQ(inName,"type") ) { return type; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"width") ) { return width; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"border") ) { return border; }
		if (HX_FIELD_EQ(inName,"bounds") ) { return bounds; }
		if (HX_FIELD_EQ(inName,"height") ) { return height; }
		if (HX_FIELD_EQ(inName,"__font") ) { return __font; }
		if (HX_FIELD_EQ(inName,"update") ) { return update_dyn(); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"scrollH") ) { return scrollH; }
		if (HX_FIELD_EQ(inName,"scrollV") ) { return scrollV; }
		if (HX_FIELD_EQ(inName,"getLine") ) { return getLine_dyn(); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"autoSize") ) { return autoSize; }
		if (HX_FIELD_EQ(inName,"maxChars") ) { return maxChars; }
		if (HX_FIELD_EQ(inName,"numLines") ) { return numLines; }
		if (HX_FIELD_EQ(inName,"restrict") ) { return restrict; }
		if (HX_FIELD_EQ(inName,"wordWrap") ) { return wordWrap; }
		if (HX_FIELD_EQ(inName,"set_text") ) { return set_text_dyn(); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"multiline") ) { return multiline; }
		if (HX_FIELD_EQ(inName,"sharpness") ) { return sharpness; }
		if (HX_FIELD_EQ(inName,"textWidth") ) { return textWidth; }
		if (HX_FIELD_EQ(inName,"textField") ) { return textField; }
		if (HX_FIELD_EQ(inName,"__texture") ) { return __texture; }
		if (HX_FIELD_EQ(inName,"getBounds") ) { return getBounds_dyn(); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"background") ) { return background; }
		if (HX_FIELD_EQ(inName,"caretIndex") ) { return caretIndex; }
		if (HX_FIELD_EQ(inName,"embedFonts") ) { return embedFonts; }
		if (HX_FIELD_EQ(inName,"lineBreaks") ) { return lineBreaks; }
		if (HX_FIELD_EQ(inName,"lineWidths") ) { return lineWidths; }
		if (HX_FIELD_EQ(inName,"maxScrollH") ) { return maxScrollH; }
		if (HX_FIELD_EQ(inName,"maxScrollV") ) { return maxScrollV; }
		if (HX_FIELD_EQ(inName,"selectable") ) { return selectable; }
		if (HX_FIELD_EQ(inName,"textHeight") ) { return textHeight; }
		if (HX_FIELD_EQ(inName,"__hasFocus") ) { return __hasFocus; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"borderColor") ) { return borderColor; }
		if (HX_FIELD_EQ(inName,"gridFitType") ) { return gridFitType; }
		if (HX_FIELD_EQ(inName,"lineAscents") ) { return lineAscents; }
		if (HX_FIELD_EQ(inName,"lineHeights") ) { return lineHeights; }
		if (HX_FIELD_EQ(inName,"__isKeyDown") ) { return __isKeyDown; }
		if (HX_FIELD_EQ(inName,"__cairoFont") ) { return __cairoFont; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"layoutGroups") ) { return layoutGroups; }
		if (HX_FIELD_EQ(inName,"lineDescents") ) { return lineDescents; }
		if (HX_FIELD_EQ(inName,"lineLeadings") ) { return lineLeadings; }
		if (HX_FIELD_EQ(inName,"__showCursor") ) { return __showCursor; }
		if (HX_FIELD_EQ(inName,"__textFormat") ) { return __textFormat; }
		if (HX_FIELD_EQ(inName,"__textLayout") ) { return __textLayout; }
		if (HX_FIELD_EQ(inName,"set_restrict") ) { return set_restrict_dyn(); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"antiAliasType") ) { return antiAliasType; }
		if (HX_FIELD_EQ(inName,"bottomScrollV") ) { return bottomScrollV; }
		if (HX_FIELD_EQ(inName,"__cursorTimer") ) { return __cursorTimer; }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"backgroundColor") ) { return backgroundColor; }
		if (HX_FIELD_EQ(inName,"__measuredWidth") ) { return __measuredWidth; }
		if (HX_FIELD_EQ(inName,"getLayoutGroups") ) { return getLayoutGroups_dyn(); }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"textFormatRanges") ) { return textFormatRanges; }
		if (HX_FIELD_EQ(inName,"__measuredHeight") ) { return __measuredHeight; }
		if (HX_FIELD_EQ(inName,"__restrictRegexp") ) { return __restrictRegexp; }
		if (HX_FIELD_EQ(inName,"__selectionStart") ) { return __selectionStart; }
		if (HX_FIELD_EQ(inName,"__useIntAdvances") ) { return __useIntAdvances; }
		if (HX_FIELD_EQ(inName,"setTextAlignment") ) { return setTextAlignment_dyn(); }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"getLineBreakIndex") ) { return getLineBreakIndex_dyn(); }
		break;
	case 19:
		if (HX_FIELD_EQ(inName,"getLineMeasurements") ) { return getLineMeasurements_dyn(); }
		break;
	case 20:
		if (HX_FIELD_EQ(inName,"createRestrictRegexp") ) { return createRestrictRegexp_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

bool TextEngine_obj::__GetStatic(const ::String &inName, Dynamic &outValue, hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 7:
		if (HX_FIELD_EQ(inName,"getFont") ) { outValue = getFont_dyn(); return true;  }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"findFont") ) { outValue = findFont_dyn(); return true;  }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"__defaultFonts") ) { outValue = __defaultFonts; return true;  }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"getFormatHeight") ) { outValue = getFormatHeight_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"getFontInstance") ) { outValue = getFontInstance_dyn(); return true;  }
	}
	return false;
}

Dynamic TextEngine_obj::__SetField(const ::String &inName,const Dynamic &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"text") ) { if (inCallProp == hx::paccAlways) return set_text(inValue);text=inValue.Cast< ::String >(); return inValue; }
		if (HX_FIELD_EQ(inName,"type") ) { type=inValue.Cast< Dynamic >(); return inValue; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"width") ) { width=inValue.Cast< Float >(); return inValue; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"border") ) { border=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"bounds") ) { bounds=inValue.Cast< ::openfl::geom::Rectangle >(); return inValue; }
		if (HX_FIELD_EQ(inName,"height") ) { height=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"__font") ) { __font=inValue.Cast< ::openfl::text::Font >(); return inValue; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"scrollH") ) { scrollH=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"scrollV") ) { scrollV=inValue.Cast< int >(); return inValue; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"autoSize") ) { autoSize=inValue.Cast< Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"maxChars") ) { maxChars=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"numLines") ) { numLines=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"restrict") ) { if (inCallProp == hx::paccAlways) return set_restrict(inValue);restrict=inValue.Cast< ::String >(); return inValue; }
		if (HX_FIELD_EQ(inName,"wordWrap") ) { wordWrap=inValue.Cast< bool >(); return inValue; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"multiline") ) { multiline=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"sharpness") ) { sharpness=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"textWidth") ) { textWidth=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"textField") ) { textField=inValue.Cast< ::openfl::text::TextField >(); return inValue; }
		if (HX_FIELD_EQ(inName,"__texture") ) { __texture=inValue.Cast< ::lime::graphics::opengl::GLObject >(); return inValue; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"background") ) { background=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"caretIndex") ) { caretIndex=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"embedFonts") ) { embedFonts=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"lineBreaks") ) { lineBreaks=inValue.Cast< ::openfl::_Vector::IntVector >(); return inValue; }
		if (HX_FIELD_EQ(inName,"lineWidths") ) { lineWidths=inValue.Cast< ::openfl::_Vector::FloatVector >(); return inValue; }
		if (HX_FIELD_EQ(inName,"maxScrollH") ) { maxScrollH=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"maxScrollV") ) { maxScrollV=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"selectable") ) { selectable=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"textHeight") ) { textHeight=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"__hasFocus") ) { __hasFocus=inValue.Cast< bool >(); return inValue; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"borderColor") ) { borderColor=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"gridFitType") ) { gridFitType=inValue.Cast< Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"lineAscents") ) { lineAscents=inValue.Cast< ::openfl::_Vector::FloatVector >(); return inValue; }
		if (HX_FIELD_EQ(inName,"lineHeights") ) { lineHeights=inValue.Cast< ::openfl::_Vector::FloatVector >(); return inValue; }
		if (HX_FIELD_EQ(inName,"__isKeyDown") ) { __isKeyDown=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"__cairoFont") ) { __cairoFont=inValue.Cast< Dynamic >(); return inValue; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"layoutGroups") ) { layoutGroups=inValue.Cast< ::openfl::_Vector::ObjectVector >(); return inValue; }
		if (HX_FIELD_EQ(inName,"lineDescents") ) { lineDescents=inValue.Cast< ::openfl::_Vector::FloatVector >(); return inValue; }
		if (HX_FIELD_EQ(inName,"lineLeadings") ) { lineLeadings=inValue.Cast< ::openfl::_Vector::FloatVector >(); return inValue; }
		if (HX_FIELD_EQ(inName,"__showCursor") ) { __showCursor=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"__textFormat") ) { __textFormat=inValue.Cast< ::openfl::text::TextFormat >(); return inValue; }
		if (HX_FIELD_EQ(inName,"__textLayout") ) { __textLayout=inValue.Cast< ::lime::text::TextLayout >(); return inValue; }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"antiAliasType") ) { antiAliasType=inValue.Cast< Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"bottomScrollV") ) { bottomScrollV=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"__cursorTimer") ) { __cursorTimer=inValue.Cast< ::haxe::Timer >(); return inValue; }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"backgroundColor") ) { backgroundColor=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"__measuredWidth") ) { __measuredWidth=inValue.Cast< int >(); return inValue; }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"textFormatRanges") ) { textFormatRanges=inValue.Cast< ::openfl::_Vector::ObjectVector >(); return inValue; }
		if (HX_FIELD_EQ(inName,"__measuredHeight") ) { __measuredHeight=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"__restrictRegexp") ) { __restrictRegexp=inValue.Cast< ::EReg >(); return inValue; }
		if (HX_FIELD_EQ(inName,"__selectionStart") ) { __selectionStart=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"__useIntAdvances") ) { __useIntAdvances=inValue.Cast< Dynamic >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

bool TextEngine_obj::__SetStatic(const ::String &inName,Dynamic &ioValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 14:
		if (HX_FIELD_EQ(inName,"__defaultFonts") ) { __defaultFonts=ioValue.Cast< ::haxe::ds::StringMap >(); return true; }
	}
	return false;
}

void TextEngine_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("antiAliasType","\x68","\xc4","\xfa","\xe7"));
	outFields->push(HX_HCSTRING("autoSize","\xd0","\x8f","\x79","\x2f"));
	outFields->push(HX_HCSTRING("background","\xee","\x93","\x1d","\x26"));
	outFields->push(HX_HCSTRING("backgroundColor","\x95","\x4e","\x47","\x0d"));
	outFields->push(HX_HCSTRING("border","\xec","\x4c","\x1a","\x64"));
	outFields->push(HX_HCSTRING("borderColor","\xd7","\x3c","\xd5","\xd6"));
	outFields->push(HX_HCSTRING("bottomScrollV","\xfe","\xf7","\x87","\x8b"));
	outFields->push(HX_HCSTRING("bounds","\x75","\x86","\x1d","\x66"));
	outFields->push(HX_HCSTRING("caretIndex","\x8f","\xb6","\x5b","\xdd"));
	outFields->push(HX_HCSTRING("embedFonts","\x2b","\xc7","\xe1","\x8e"));
	outFields->push(HX_HCSTRING("gridFitType","\x05","\xf3","\x13","\xb4"));
	outFields->push(HX_HCSTRING("height","\xe7","\x07","\x4c","\x02"));
	outFields->push(HX_HCSTRING("layoutGroups","\x9e","\xa2","\x6c","\x37"));
	outFields->push(HX_HCSTRING("lineAscents","\x45","\x0c","\xc2","\x3e"));
	outFields->push(HX_HCSTRING("lineBreaks","\xe8","\xfd","\x5b","\xea"));
	outFields->push(HX_HCSTRING("lineDescents","\x0d","\xad","\x64","\x49"));
	outFields->push(HX_HCSTRING("lineLeadings","\x01","\x23","\x97","\x76"));
	outFields->push(HX_HCSTRING("lineHeights","\x18","\x99","\x8e","\x3e"));
	outFields->push(HX_HCSTRING("lineWidths","\xc1","\x8a","\xa4","\x20"));
	outFields->push(HX_HCSTRING("maxChars","\x99","\xef","\xd0","\xef"));
	outFields->push(HX_HCSTRING("maxScrollH","\x57","\xad","\xfc","\x9a"));
	outFields->push(HX_HCSTRING("maxScrollV","\x65","\xad","\xfc","\x9a"));
	outFields->push(HX_HCSTRING("multiline","\xed","\xd2","\x11","\x9e"));
	outFields->push(HX_HCSTRING("numLines","\xd9","\xf1","\x11","\x32"));
	outFields->push(HX_HCSTRING("restrict","\x3c","\xcb","\x9e","\xf1"));
	outFields->push(HX_HCSTRING("scrollH","\x9b","\x33","\xd8","\x30"));
	outFields->push(HX_HCSTRING("scrollV","\xa9","\x33","\xd8","\x30"));
	outFields->push(HX_HCSTRING("selectable","\x96","\xb6","\x2a","\xc4"));
	outFields->push(HX_HCSTRING("sharpness","\x81","\x22","\x25","\x1b"));
	outFields->push(HX_HCSTRING("text","\xad","\xcc","\xf9","\x4c"));
	outFields->push(HX_HCSTRING("textHeight","\x74","\x88","\x3c","\x39"));
	outFields->push(HX_HCSTRING("textFormatRanges","\xfa","\x0e","\x49","\xa2"));
	outFields->push(HX_HCSTRING("textWidth","\x19","\x46","\x50","\x63"));
	outFields->push(HX_HCSTRING("type","\xba","\xf2","\x08","\x4d"));
	outFields->push(HX_HCSTRING("width","\x06","\xb6","\x62","\xca"));
	outFields->push(HX_HCSTRING("wordWrap","\xb4","\x14","\xdb","\x00"));
	outFields->push(HX_HCSTRING("textField","\xcd","\x24","\x81","\x99"));
	outFields->push(HX_HCSTRING("__cursorTimer","\xef","\x59","\x8f","\xe1"));
	outFields->push(HX_HCSTRING("__hasFocus","\x3e","\x1d","\x1a","\x34"));
	outFields->push(HX_HCSTRING("__isKeyDown","\xb7","\x2f","\x72","\xce"));
	outFields->push(HX_HCSTRING("__measuredHeight","\xed","\xb6","\x23","\x42"));
	outFields->push(HX_HCSTRING("__measuredWidth","\xc0","\x49","\xec","\x02"));
	outFields->push(HX_HCSTRING("__restrictRegexp","\x45","\x9f","\xae","\xa9"));
	outFields->push(HX_HCSTRING("__selectionStart","\x96","\xe3","\xb9","\x43"));
	outFields->push(HX_HCSTRING("__showCursor","\xd3","\xae","\xf0","\xe0"));
	outFields->push(HX_HCSTRING("__textFormat","\xe4","\x8a","\x12","\x6d"));
	outFields->push(HX_HCSTRING("__textLayout","\x57","\xaa","\x3c","\xc8"));
	outFields->push(HX_HCSTRING("__texture","\xbb","\x19","\x2f","\x20"));
	outFields->push(HX_HCSTRING("__useIntAdvances","\xd9","\x17","\x72","\x7d"));
	outFields->push(HX_HCSTRING("__cairoFont","\x57","\xe7","\xb5","\x28"));
	outFields->push(HX_HCSTRING("__font","\xef","\xc0","\xb8","\xf2"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsObject /*Dynamic*/ ,(int)offsetof(TextEngine_obj,antiAliasType),HX_HCSTRING("antiAliasType","\x68","\xc4","\xfa","\xe7")},
	{hx::fsObject /*Dynamic*/ ,(int)offsetof(TextEngine_obj,autoSize),HX_HCSTRING("autoSize","\xd0","\x8f","\x79","\x2f")},
	{hx::fsBool,(int)offsetof(TextEngine_obj,background),HX_HCSTRING("background","\xee","\x93","\x1d","\x26")},
	{hx::fsInt,(int)offsetof(TextEngine_obj,backgroundColor),HX_HCSTRING("backgroundColor","\x95","\x4e","\x47","\x0d")},
	{hx::fsBool,(int)offsetof(TextEngine_obj,border),HX_HCSTRING("border","\xec","\x4c","\x1a","\x64")},
	{hx::fsInt,(int)offsetof(TextEngine_obj,borderColor),HX_HCSTRING("borderColor","\xd7","\x3c","\xd5","\xd6")},
	{hx::fsInt,(int)offsetof(TextEngine_obj,bottomScrollV),HX_HCSTRING("bottomScrollV","\xfe","\xf7","\x87","\x8b")},
	{hx::fsObject /*::openfl::geom::Rectangle*/ ,(int)offsetof(TextEngine_obj,bounds),HX_HCSTRING("bounds","\x75","\x86","\x1d","\x66")},
	{hx::fsInt,(int)offsetof(TextEngine_obj,caretIndex),HX_HCSTRING("caretIndex","\x8f","\xb6","\x5b","\xdd")},
	{hx::fsBool,(int)offsetof(TextEngine_obj,embedFonts),HX_HCSTRING("embedFonts","\x2b","\xc7","\xe1","\x8e")},
	{hx::fsObject /*Dynamic*/ ,(int)offsetof(TextEngine_obj,gridFitType),HX_HCSTRING("gridFitType","\x05","\xf3","\x13","\xb4")},
	{hx::fsFloat,(int)offsetof(TextEngine_obj,height),HX_HCSTRING("height","\xe7","\x07","\x4c","\x02")},
	{hx::fsObject /*::openfl::_Vector::ObjectVector*/ ,(int)offsetof(TextEngine_obj,layoutGroups),HX_HCSTRING("layoutGroups","\x9e","\xa2","\x6c","\x37")},
	{hx::fsObject /*::openfl::_Vector::FloatVector*/ ,(int)offsetof(TextEngine_obj,lineAscents),HX_HCSTRING("lineAscents","\x45","\x0c","\xc2","\x3e")},
	{hx::fsObject /*::openfl::_Vector::IntVector*/ ,(int)offsetof(TextEngine_obj,lineBreaks),HX_HCSTRING("lineBreaks","\xe8","\xfd","\x5b","\xea")},
	{hx::fsObject /*::openfl::_Vector::FloatVector*/ ,(int)offsetof(TextEngine_obj,lineDescents),HX_HCSTRING("lineDescents","\x0d","\xad","\x64","\x49")},
	{hx::fsObject /*::openfl::_Vector::FloatVector*/ ,(int)offsetof(TextEngine_obj,lineLeadings),HX_HCSTRING("lineLeadings","\x01","\x23","\x97","\x76")},
	{hx::fsObject /*::openfl::_Vector::FloatVector*/ ,(int)offsetof(TextEngine_obj,lineHeights),HX_HCSTRING("lineHeights","\x18","\x99","\x8e","\x3e")},
	{hx::fsObject /*::openfl::_Vector::FloatVector*/ ,(int)offsetof(TextEngine_obj,lineWidths),HX_HCSTRING("lineWidths","\xc1","\x8a","\xa4","\x20")},
	{hx::fsInt,(int)offsetof(TextEngine_obj,maxChars),HX_HCSTRING("maxChars","\x99","\xef","\xd0","\xef")},
	{hx::fsInt,(int)offsetof(TextEngine_obj,maxScrollH),HX_HCSTRING("maxScrollH","\x57","\xad","\xfc","\x9a")},
	{hx::fsInt,(int)offsetof(TextEngine_obj,maxScrollV),HX_HCSTRING("maxScrollV","\x65","\xad","\xfc","\x9a")},
	{hx::fsBool,(int)offsetof(TextEngine_obj,multiline),HX_HCSTRING("multiline","\xed","\xd2","\x11","\x9e")},
	{hx::fsInt,(int)offsetof(TextEngine_obj,numLines),HX_HCSTRING("numLines","\xd9","\xf1","\x11","\x32")},
	{hx::fsString,(int)offsetof(TextEngine_obj,restrict),HX_HCSTRING("restrict","\x3c","\xcb","\x9e","\xf1")},
	{hx::fsInt,(int)offsetof(TextEngine_obj,scrollH),HX_HCSTRING("scrollH","\x9b","\x33","\xd8","\x30")},
	{hx::fsInt,(int)offsetof(TextEngine_obj,scrollV),HX_HCSTRING("scrollV","\xa9","\x33","\xd8","\x30")},
	{hx::fsBool,(int)offsetof(TextEngine_obj,selectable),HX_HCSTRING("selectable","\x96","\xb6","\x2a","\xc4")},
	{hx::fsFloat,(int)offsetof(TextEngine_obj,sharpness),HX_HCSTRING("sharpness","\x81","\x22","\x25","\x1b")},
	{hx::fsString,(int)offsetof(TextEngine_obj,text),HX_HCSTRING("text","\xad","\xcc","\xf9","\x4c")},
	{hx::fsFloat,(int)offsetof(TextEngine_obj,textHeight),HX_HCSTRING("textHeight","\x74","\x88","\x3c","\x39")},
	{hx::fsObject /*::openfl::_Vector::ObjectVector*/ ,(int)offsetof(TextEngine_obj,textFormatRanges),HX_HCSTRING("textFormatRanges","\xfa","\x0e","\x49","\xa2")},
	{hx::fsFloat,(int)offsetof(TextEngine_obj,textWidth),HX_HCSTRING("textWidth","\x19","\x46","\x50","\x63")},
	{hx::fsObject /*Dynamic*/ ,(int)offsetof(TextEngine_obj,type),HX_HCSTRING("type","\xba","\xf2","\x08","\x4d")},
	{hx::fsFloat,(int)offsetof(TextEngine_obj,width),HX_HCSTRING("width","\x06","\xb6","\x62","\xca")},
	{hx::fsBool,(int)offsetof(TextEngine_obj,wordWrap),HX_HCSTRING("wordWrap","\xb4","\x14","\xdb","\x00")},
	{hx::fsObject /*::openfl::text::TextField*/ ,(int)offsetof(TextEngine_obj,textField),HX_HCSTRING("textField","\xcd","\x24","\x81","\x99")},
	{hx::fsObject /*::haxe::Timer*/ ,(int)offsetof(TextEngine_obj,__cursorTimer),HX_HCSTRING("__cursorTimer","\xef","\x59","\x8f","\xe1")},
	{hx::fsBool,(int)offsetof(TextEngine_obj,__hasFocus),HX_HCSTRING("__hasFocus","\x3e","\x1d","\x1a","\x34")},
	{hx::fsBool,(int)offsetof(TextEngine_obj,__isKeyDown),HX_HCSTRING("__isKeyDown","\xb7","\x2f","\x72","\xce")},
	{hx::fsInt,(int)offsetof(TextEngine_obj,__measuredHeight),HX_HCSTRING("__measuredHeight","\xed","\xb6","\x23","\x42")},
	{hx::fsInt,(int)offsetof(TextEngine_obj,__measuredWidth),HX_HCSTRING("__measuredWidth","\xc0","\x49","\xec","\x02")},
	{hx::fsObject /*::EReg*/ ,(int)offsetof(TextEngine_obj,__restrictRegexp),HX_HCSTRING("__restrictRegexp","\x45","\x9f","\xae","\xa9")},
	{hx::fsInt,(int)offsetof(TextEngine_obj,__selectionStart),HX_HCSTRING("__selectionStart","\x96","\xe3","\xb9","\x43")},
	{hx::fsBool,(int)offsetof(TextEngine_obj,__showCursor),HX_HCSTRING("__showCursor","\xd3","\xae","\xf0","\xe0")},
	{hx::fsObject /*::openfl::text::TextFormat*/ ,(int)offsetof(TextEngine_obj,__textFormat),HX_HCSTRING("__textFormat","\xe4","\x8a","\x12","\x6d")},
	{hx::fsObject /*::lime::text::TextLayout*/ ,(int)offsetof(TextEngine_obj,__textLayout),HX_HCSTRING("__textLayout","\x57","\xaa","\x3c","\xc8")},
	{hx::fsObject /*::lime::graphics::opengl::GLObject*/ ,(int)offsetof(TextEngine_obj,__texture),HX_HCSTRING("__texture","\xbb","\x19","\x2f","\x20")},
	{hx::fsObject /*Dynamic*/ ,(int)offsetof(TextEngine_obj,__useIntAdvances),HX_HCSTRING("__useIntAdvances","\xd9","\x17","\x72","\x7d")},
	{hx::fsObject /*Dynamic*/ ,(int)offsetof(TextEngine_obj,__cairoFont),HX_HCSTRING("__cairoFont","\x57","\xe7","\xb5","\x28")},
	{hx::fsObject /*::openfl::text::Font*/ ,(int)offsetof(TextEngine_obj,__font),HX_HCSTRING("__font","\xef","\xc0","\xb8","\xf2")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo sStaticStorageInfo[] = {
	{hx::fsInt,(void *) &TextEngine_obj::UTF8_TAB,HX_HCSTRING("UTF8_TAB","\x07","\xd5","\x41","\x1d")},
	{hx::fsInt,(void *) &TextEngine_obj::UTF8_ENDLINE,HX_HCSTRING("UTF8_ENDLINE","\x01","\x29","\x41","\xcf")},
	{hx::fsInt,(void *) &TextEngine_obj::UTF8_SPACE,HX_HCSTRING("UTF8_SPACE","\xf8","\x7b","\xa9","\xc7")},
	{hx::fsInt,(void *) &TextEngine_obj::UTF8_HYPHEN,HX_HCSTRING("UTF8_HYPHEN","\x60","\x3c","\x3f","\xbf")},
	{hx::fsObject /*::haxe::ds::StringMap*/ ,(void *) &TextEngine_obj::__defaultFonts,HX_HCSTRING("__defaultFonts","\x63","\x76","\xad","\xda")},
	{ hx::fsUnknown, 0, null()}
};
#endif

static ::String sMemberFields[] = {
	HX_HCSTRING("antiAliasType","\x68","\xc4","\xfa","\xe7"),
	HX_HCSTRING("autoSize","\xd0","\x8f","\x79","\x2f"),
	HX_HCSTRING("background","\xee","\x93","\x1d","\x26"),
	HX_HCSTRING("backgroundColor","\x95","\x4e","\x47","\x0d"),
	HX_HCSTRING("border","\xec","\x4c","\x1a","\x64"),
	HX_HCSTRING("borderColor","\xd7","\x3c","\xd5","\xd6"),
	HX_HCSTRING("bottomScrollV","\xfe","\xf7","\x87","\x8b"),
	HX_HCSTRING("bounds","\x75","\x86","\x1d","\x66"),
	HX_HCSTRING("caretIndex","\x8f","\xb6","\x5b","\xdd"),
	HX_HCSTRING("embedFonts","\x2b","\xc7","\xe1","\x8e"),
	HX_HCSTRING("gridFitType","\x05","\xf3","\x13","\xb4"),
	HX_HCSTRING("height","\xe7","\x07","\x4c","\x02"),
	HX_HCSTRING("layoutGroups","\x9e","\xa2","\x6c","\x37"),
	HX_HCSTRING("lineAscents","\x45","\x0c","\xc2","\x3e"),
	HX_HCSTRING("lineBreaks","\xe8","\xfd","\x5b","\xea"),
	HX_HCSTRING("lineDescents","\x0d","\xad","\x64","\x49"),
	HX_HCSTRING("lineLeadings","\x01","\x23","\x97","\x76"),
	HX_HCSTRING("lineHeights","\x18","\x99","\x8e","\x3e"),
	HX_HCSTRING("lineWidths","\xc1","\x8a","\xa4","\x20"),
	HX_HCSTRING("maxChars","\x99","\xef","\xd0","\xef"),
	HX_HCSTRING("maxScrollH","\x57","\xad","\xfc","\x9a"),
	HX_HCSTRING("maxScrollV","\x65","\xad","\xfc","\x9a"),
	HX_HCSTRING("multiline","\xed","\xd2","\x11","\x9e"),
	HX_HCSTRING("numLines","\xd9","\xf1","\x11","\x32"),
	HX_HCSTRING("restrict","\x3c","\xcb","\x9e","\xf1"),
	HX_HCSTRING("scrollH","\x9b","\x33","\xd8","\x30"),
	HX_HCSTRING("scrollV","\xa9","\x33","\xd8","\x30"),
	HX_HCSTRING("selectable","\x96","\xb6","\x2a","\xc4"),
	HX_HCSTRING("sharpness","\x81","\x22","\x25","\x1b"),
	HX_HCSTRING("text","\xad","\xcc","\xf9","\x4c"),
	HX_HCSTRING("textHeight","\x74","\x88","\x3c","\x39"),
	HX_HCSTRING("textFormatRanges","\xfa","\x0e","\x49","\xa2"),
	HX_HCSTRING("textWidth","\x19","\x46","\x50","\x63"),
	HX_HCSTRING("type","\xba","\xf2","\x08","\x4d"),
	HX_HCSTRING("width","\x06","\xb6","\x62","\xca"),
	HX_HCSTRING("wordWrap","\xb4","\x14","\xdb","\x00"),
	HX_HCSTRING("textField","\xcd","\x24","\x81","\x99"),
	HX_HCSTRING("__cursorTimer","\xef","\x59","\x8f","\xe1"),
	HX_HCSTRING("__hasFocus","\x3e","\x1d","\x1a","\x34"),
	HX_HCSTRING("__isKeyDown","\xb7","\x2f","\x72","\xce"),
	HX_HCSTRING("__measuredHeight","\xed","\xb6","\x23","\x42"),
	HX_HCSTRING("__measuredWidth","\xc0","\x49","\xec","\x02"),
	HX_HCSTRING("__restrictRegexp","\x45","\x9f","\xae","\xa9"),
	HX_HCSTRING("__selectionStart","\x96","\xe3","\xb9","\x43"),
	HX_HCSTRING("__showCursor","\xd3","\xae","\xf0","\xe0"),
	HX_HCSTRING("__textFormat","\xe4","\x8a","\x12","\x6d"),
	HX_HCSTRING("__textLayout","\x57","\xaa","\x3c","\xc8"),
	HX_HCSTRING("__texture","\xbb","\x19","\x2f","\x20"),
	HX_HCSTRING("__useIntAdvances","\xd9","\x17","\x72","\x7d"),
	HX_HCSTRING("__cairoFont","\x57","\xe7","\xb5","\x28"),
	HX_HCSTRING("__font","\xef","\xc0","\xb8","\xf2"),
	HX_HCSTRING("createRestrictRegexp","\x41","\xd0","\x6b","\xe1"),
	HX_HCSTRING("getBounds","\xab","\x0f","\x74","\xe2"),
	HX_HCSTRING("getLine","\xaa","\xc7","\x35","\x1a"),
	HX_HCSTRING("getLineBreakIndex","\x1d","\x16","\x36","\x36"),
	HX_HCSTRING("getLineMeasurements","\xc1","\x9f","\x81","\x56"),
	HX_HCSTRING("getLayoutGroups","\x54","\xf8","\x56","\x5a"),
	HX_HCSTRING("setTextAlignment","\x74","\x0f","\x33","\x62"),
	HX_HCSTRING("update","\x09","\x86","\x05","\x87"),
	HX_HCSTRING("set_restrict","\xb9","\xa2","\xb1","\xbb"),
	HX_HCSTRING("set_text","\xaa","\xe1","\x11","\x7b"),
	::String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(TextEngine_obj::__mClass,"__mClass");
	HX_MARK_MEMBER_NAME(TextEngine_obj::UTF8_TAB,"UTF8_TAB");
	HX_MARK_MEMBER_NAME(TextEngine_obj::UTF8_ENDLINE,"UTF8_ENDLINE");
	HX_MARK_MEMBER_NAME(TextEngine_obj::UTF8_SPACE,"UTF8_SPACE");
	HX_MARK_MEMBER_NAME(TextEngine_obj::UTF8_HYPHEN,"UTF8_HYPHEN");
	HX_MARK_MEMBER_NAME(TextEngine_obj::__defaultFonts,"__defaultFonts");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(TextEngine_obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(TextEngine_obj::UTF8_TAB,"UTF8_TAB");
	HX_VISIT_MEMBER_NAME(TextEngine_obj::UTF8_ENDLINE,"UTF8_ENDLINE");
	HX_VISIT_MEMBER_NAME(TextEngine_obj::UTF8_SPACE,"UTF8_SPACE");
	HX_VISIT_MEMBER_NAME(TextEngine_obj::UTF8_HYPHEN,"UTF8_HYPHEN");
	HX_VISIT_MEMBER_NAME(TextEngine_obj::__defaultFonts,"__defaultFonts");
};

#endif

hx::Class TextEngine_obj::__mClass;

static ::String sStaticFields[] = {
	HX_HCSTRING("UTF8_TAB","\x07","\xd5","\x41","\x1d"),
	HX_HCSTRING("UTF8_ENDLINE","\x01","\x29","\x41","\xcf"),
	HX_HCSTRING("UTF8_SPACE","\xf8","\x7b","\xa9","\xc7"),
	HX_HCSTRING("UTF8_HYPHEN","\x60","\x3c","\x3f","\xbf"),
	HX_HCSTRING("__defaultFonts","\x63","\x76","\xad","\xda"),
	HX_HCSTRING("findFont","\xa8","\x6a","\x54","\x96"),
	HX_HCSTRING("getFormatHeight","\x34","\x24","\x4b","\x62"),
	HX_HCSTRING("getFont","\x85","\x0d","\x43","\x16"),
	HX_HCSTRING("getFontInstance","\x3a","\x76","\x96","\x9e"),
	::String(null()) };

void TextEngine_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("openfl._internal.text.TextEngine","\x60","\x7a","\x88","\xa0");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &TextEngine_obj::__GetStatic;
	__mClass->mSetStaticField = &TextEngine_obj::__SetStatic;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(sStaticFields);
	__mClass->mMembers = hx::Class_obj::dupFunctions(sMemberFields);
	__mClass->mCanCast = hx::TCanCast< TextEngine_obj >;
#ifdef HXCPP_VISIT_ALLOCS
	__mClass->mVisitFunc = sVisitStatics;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = sStaticStorageInfo;
#endif
	hx::RegisterClass(__mClass->mName, __mClass);
}

void TextEngine_obj::__boot()
{
	UTF8_TAB= (int)9;
	UTF8_ENDLINE= (int)10;
	UTF8_SPACE= (int)32;
	UTF8_HYPHEN= (int)45;
struct _Function_0_1{
	inline static ::haxe::ds::StringMap Block( ){
		{
			::haxe::ds::StringMap tmp = ::haxe::ds::StringMap_obj::__new();
			::haxe::ds::StringMap tmp1 = tmp;
			return tmp1;
		}
		return null();
	}
};
	__defaultFonts= _Function_0_1::Block();
}

} // end namespace openfl
} // end namespace _internal
} // end namespace text
