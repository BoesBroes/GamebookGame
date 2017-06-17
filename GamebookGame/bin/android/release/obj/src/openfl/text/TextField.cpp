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
#ifndef INCLUDED_haxe_ds_IntMap
#include <haxe/ds/IntMap.h>
#endif
#ifndef INCLUDED_haxe_ds_StringMap
#include <haxe/ds/StringMap.h>
#endif
#ifndef INCLUDED_lime__backend_native_NativeWindow
#include <lime/_backend/native/NativeWindow.h>
#endif
#ifndef INCLUDED_lime_app_IModule
#include <lime/app/IModule.h>
#endif
#ifndef INCLUDED_lime_app__Event_String_Void
#include <lime/app/_Event_String_Void.h>
#endif
#ifndef INCLUDED_lime_app__Event_lime_ui_KeyCode_lime_ui_KeyModifier_Void
#include <lime/app/_Event_lime_ui_KeyCode_lime_ui_KeyModifier_Void.h>
#endif
#ifndef INCLUDED_lime_graphics_CanvasRenderContext
#include <lime/graphics/CanvasRenderContext.h>
#endif
#ifndef INCLUDED_lime_system_Clipboard
#include <lime/system/Clipboard.h>
#endif
#ifndef INCLUDED_lime_text_Font
#include <lime/text/Font.h>
#endif
#ifndef INCLUDED_lime_ui_MouseCursor
#include <lime/ui/MouseCursor.h>
#endif
#ifndef INCLUDED_lime_ui_Window
#include <lime/ui/Window.h>
#endif
#ifndef INCLUDED_lime_ui__KeyModifier_KeyModifier_Impl_
#include <lime/ui/_KeyModifier/KeyModifier_Impl_.h>
#endif
#ifndef INCLUDED_lime_utils_Log
#include <lime/utils/Log.h>
#endif
#ifndef INCLUDED_lime_utils_ObjectPool_openfl_geom_Rectangle
#include <lime/utils/ObjectPool_openfl_geom_Rectangle.h>
#endif
#ifndef INCLUDED_openfl_Lib
#include <openfl/Lib.h>
#endif
#ifndef INCLUDED_openfl__Vector_FloatVector
#include <openfl/_Vector/FloatVector.h>
#endif
#ifndef INCLUDED_openfl__Vector_IVector
#include <openfl/_Vector/IVector.h>
#endif
#ifndef INCLUDED_openfl__Vector_ObjectVector
#include <openfl/_Vector/ObjectVector.h>
#endif
#ifndef INCLUDED_openfl__internal_renderer_RenderSession
#include <openfl/_internal/renderer/RenderSession.h>
#endif
#ifndef INCLUDED_openfl__internal_renderer_cairo_CairoTextField
#include <openfl/_internal/renderer/cairo/CairoTextField.h>
#endif
#ifndef INCLUDED_openfl__internal_swf_SWFLite
#include <openfl/_internal/swf/SWFLite.h>
#endif
#ifndef INCLUDED_openfl__internal_symbols_DynamicTextSymbol
#include <openfl/_internal/symbols/DynamicTextSymbol.h>
#endif
#ifndef INCLUDED_openfl__internal_symbols_FontSymbol
#include <openfl/_internal/symbols/FontSymbol.h>
#endif
#ifndef INCLUDED_openfl__internal_symbols_SWFSymbol
#include <openfl/_internal/symbols/SWFSymbol.h>
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
#ifndef INCLUDED_openfl_display_DisplayObjectContainer
#include <openfl/display/DisplayObjectContainer.h>
#endif
#ifndef INCLUDED_openfl_display_Graphics
#include <openfl/display/Graphics.h>
#endif
#ifndef INCLUDED_openfl_display_IBitmapDrawable
#include <openfl/display/IBitmapDrawable.h>
#endif
#ifndef INCLUDED_openfl_display_InteractiveObject
#include <openfl/display/InteractiveObject.h>
#endif
#ifndef INCLUDED_openfl_display_Stage
#include <openfl/display/Stage.h>
#endif
#ifndef INCLUDED_openfl_events_Event
#include <openfl/events/Event.h>
#endif
#ifndef INCLUDED_openfl_events_EventDispatcher
#include <openfl/events/EventDispatcher.h>
#endif
#ifndef INCLUDED_openfl_events_FocusEvent
#include <openfl/events/FocusEvent.h>
#endif
#ifndef INCLUDED_openfl_events_IEventDispatcher
#include <openfl/events/IEventDispatcher.h>
#endif
#ifndef INCLUDED_openfl_events_MouseEvent
#include <openfl/events/MouseEvent.h>
#endif
#ifndef INCLUDED_openfl_events_TextEvent
#include <openfl/events/TextEvent.h>
#endif
#ifndef INCLUDED_openfl_geom_Matrix
#include <openfl/geom/Matrix.h>
#endif
#ifndef INCLUDED_openfl_geom_Rectangle
#include <openfl/geom/Rectangle.h>
#endif
#ifndef INCLUDED_openfl_net_URLRequest
#include <openfl/net/URLRequest.h>
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
#ifndef INCLUDED_openfl_text_TextLineMetrics
#include <openfl/text/TextLineMetrics.h>
#endif
#ifndef INCLUDED_openfl_text__TextFormatAlign_TextFormatAlign_Impl_
#include <openfl/text/_TextFormatAlign/TextFormatAlign_Impl_.h>
#endif
namespace openfl{
namespace text{

Void TextField_obj::__construct()
{
{
	super::__construct();
	this->__caretIndex = (int)-1;
	this->__displayAsPassword = false;
	::openfl::display::Graphics tmp = ::openfl::display::Graphics_obj::__new(hx::ObjectPtr<OBJ_>(this));
	this->__graphics = tmp;
	::openfl::_internal::text::TextEngine tmp1 = ::openfl::_internal::text::TextEngine_obj::__new(hx::ObjectPtr<OBJ_>(this));
	this->__textEngine = tmp1;
	this->__layoutDirty = true;
	this->__offsetX = (int)0;
	this->__offsetY = (int)0;
	this->__tabEnabled = true;
	this->__mouseWheelEnabled = true;
	this->__text = HX_HCSTRING("","\x00","\x00","\x00","\x00");
	::openfl::text::TextFormat tmp2 = ::openfl::text::TextField_obj::__defaultTextFormat;
	bool tmp3 = (tmp2 == null());
	if ((tmp3)){
		::openfl::text::TextFormat tmp4 = ::openfl::text::TextFormat_obj::__new(HX_HCSTRING("Times New Roman","\x03","\x86","\x44","\xc3"),(int)12,(int)0,false,false,false,HX_HCSTRING("","\x00","\x00","\x00","\x00"),HX_HCSTRING("","\x00","\x00","\x00","\x00"),((Dynamic)((int)3)),(int)0,(int)0,(int)0,(int)0);
		::openfl::text::TextField_obj::__defaultTextFormat = tmp4;
		::openfl::text::TextFormat tmp5 = ::openfl::text::TextField_obj::__defaultTextFormat;
		tmp5->blockIndent = (int)0;
		::openfl::text::TextFormat tmp6 = ::openfl::text::TextField_obj::__defaultTextFormat;
		tmp6->bullet = false;
		::openfl::text::TextFormat tmp7 = ::openfl::text::TextField_obj::__defaultTextFormat;
		tmp7->letterSpacing = (int)0;
		::openfl::text::TextFormat tmp8 = ::openfl::text::TextField_obj::__defaultTextFormat;
		tmp8->kerning = false;
	}
	::openfl::text::TextFormat tmp4 = ::openfl::text::TextField_obj::__defaultTextFormat;
	::openfl::text::TextFormat tmp5 = tmp4->clone();
	this->__textFormat = tmp5;
	{
		::openfl::text::TextFormat tmp6 = this->__textFormat;
		::openfl::_internal::text::TextFormatRange tmp7 = ::openfl::_internal::text::TextFormatRange_obj::__new(tmp6,(int)0,(int)0);
		::openfl::_internal::text::TextFormatRange x = tmp7;
		::openfl::_internal::text::TextEngine tmp8 = this->__textEngine;
		::openfl::_internal::text::TextFormatRange tmp9 = x;
		tmp8->textFormatRanges->push(tmp9);
	}
	Dynamic tmp6 = this->this_onMouseDown_dyn();
	this->addEventListener(HX_HCSTRING("mouseDown","\x27","\xb1","\xc2","\xee"),tmp6,null(),null(),null());
}
;
	return null();
}

//TextField_obj::~TextField_obj() { }

Dynamic TextField_obj::__CreateEmpty() { return  new TextField_obj; }
hx::ObjectPtr< TextField_obj > TextField_obj::__new()
{  hx::ObjectPtr< TextField_obj > _result_ = new TextField_obj();
	_result_->__construct();
	return _result_;}

Dynamic TextField_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< TextField_obj > _result_ = new TextField_obj();
	_result_->__construct();
	return _result_;}

Void TextField_obj::appendText( ::String text){
{
		bool tmp = (text == null());
		bool tmp1 = !(tmp);
		bool tmp2;
		if ((tmp1)){
			tmp2 = (text == HX_HCSTRING("","\x00","\x00","\x00","\x00"));
		}
		else{
			tmp2 = true;
		}
		if ((tmp2)){
			return null();
		}
		this->__dirty = true;
		this->__layoutDirty = true;
		::String tmp3 = this->__text;
		::String tmp4 = text;
		::String tmp5 = (tmp3 + tmp4);
		this->__updateText(tmp5);
		::String tmp6 = this->__text;
		::openfl::_internal::text::TextFormatRange tmp7;
		{
			::openfl::_internal::text::TextEngine tmp8 = this->__textEngine;
			int tmp9 = tmp8->textFormatRanges->get_length();
			int tmp10 = (tmp9 - (int)1);
			int index = tmp10;
			::openfl::_internal::text::TextEngine tmp11 = this->__textEngine;
			int tmp12 = index;
			tmp7 = tmp11->textFormatRanges->get(tmp12);
		}
		tmp7->end = tmp6.length;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(TextField_obj,appendText,(void))

::openfl::geom::Rectangle TextField_obj::getCharBoundaries( int charIndex){
	bool tmp = (charIndex < (int)0);
	bool tmp1 = !(tmp);
	bool tmp2;
	if ((tmp1)){
		int tmp3 = charIndex;
		::String tmp4 = this->__text;
		::String tmp5 = tmp4;
		int tmp6 = tmp5.length;
		int tmp7 = (tmp6 - (int)1);
		int tmp8 = tmp7;
		tmp2 = (tmp3 > tmp8);
	}
	else{
		tmp2 = true;
	}
	if ((tmp2)){
		return null();
	}
	this->__updateLayout();
	{
		int _g = (int)0;
		::openfl::_internal::text::TextEngine tmp3 = this->__textEngine;
		::openfl::_Vector::ObjectVector _g1 = tmp3->layoutGroups;
		while((true)){
			int tmp4 = _g;
			int tmp5 = _g1->get_length();
			bool tmp6 = (tmp4 < tmp5);
			bool tmp7 = !(tmp6);
			if ((tmp7)){
				break;
			}
			int tmp8 = _g;
			::openfl::_internal::text::TextLayoutGroup tmp9 = _g1->get(tmp8);
			::openfl::_internal::text::TextLayoutGroup group = tmp9;
			++(_g);
			bool tmp10 = (charIndex >= group->startIndex);
			bool tmp11;
			if ((tmp10)){
				tmp11 = (charIndex <= group->endIndex);
			}
			else{
				tmp11 = false;
			}
			if ((tmp11)){
				Float x = group->offsetX;
				{
					int _g3 = (int)0;
					int tmp12 = (charIndex - group->startIndex);
					int _g2 = tmp12;
					while((true)){
						bool tmp13 = (_g3 < _g2);
						bool tmp14 = !(tmp13);
						if ((tmp14)){
							break;
						}
						int tmp15 = (_g3)++;
						int i = tmp15;
						Float tmp16 = group->advances->__get(i);
						hx::AddEq(x,tmp16);
					}
				}
				Float tmp12 = x;
				Float tmp13 = group->offsetY;
				int tmp14 = (charIndex - group->startIndex);
				Float tmp15 = group->advances->__get(tmp14);
				Float tmp16 = (group->ascent + group->descent);
				::openfl::geom::Rectangle tmp17 = ::openfl::geom::Rectangle_obj::__new(tmp12,tmp13,tmp15,tmp16);
				return tmp17;
			}
		}
	}
	return null();
}


HX_DEFINE_DYNAMIC_FUNC1(TextField_obj,getCharBoundaries,return )

int TextField_obj::getCharIndexAtPoint( Float x,Float y){
	bool tmp = (x <= (int)2);
	bool tmp1 = !(tmp);
	bool tmp2 = tmp1;
	bool tmp3;
	if ((tmp2)){
		Float tmp4 = x;
		Float tmp5 = this->get_width();
		Float tmp6 = tmp5;
		Float tmp7 = tmp6;
		Float tmp8 = (tmp7 + (int)4);
		Float tmp9 = tmp8;
		Float tmp10 = tmp9;
		tmp3 = (tmp4 > tmp10);
	}
	else{
		tmp3 = true;
	}
	bool tmp4 = !(tmp3);
	bool tmp5 = tmp4;
	bool tmp6;
	if ((tmp5)){
		tmp6 = (y <= (int)0);
	}
	else{
		tmp6 = true;
	}
	bool tmp7 = !(tmp6);
	bool tmp8;
	if ((tmp7)){
		Float tmp9 = y;
		Float tmp10 = this->get_height();
		Float tmp11 = tmp10;
		Float tmp12 = (tmp11 + (int)4);
		Float tmp13 = tmp12;
		tmp8 = (tmp9 > tmp13);
	}
	else{
		tmp8 = true;
	}
	if ((tmp8)){
		return (int)-1;
	}
	this->__updateLayout();
	int tmp9 = this->get_scrollH();
	hx::AddEq(x,tmp9);
	{
		int _g1 = (int)0;
		int tmp10 = this->get_scrollV();
		int tmp11 = (tmp10 - (int)1);
		int _g = tmp11;
		while((true)){
			bool tmp12 = (_g1 < _g);
			bool tmp13 = !(tmp12);
			if ((tmp13)){
				break;
			}
			int tmp14 = (_g1)++;
			int i = tmp14;
			::openfl::_internal::text::TextEngine tmp15 = this->__textEngine;
			int tmp16 = i;
			Float tmp17 = tmp15->lineHeights->get(tmp16);
			hx::AddEq(y,tmp17);
		}
	}
	{
		int _g = (int)0;
		::openfl::_internal::text::TextEngine tmp10 = this->__textEngine;
		::openfl::_Vector::ObjectVector _g1 = tmp10->layoutGroups;
		while((true)){
			int tmp11 = _g;
			int tmp12 = _g1->get_length();
			bool tmp13 = (tmp11 < tmp12);
			bool tmp14 = !(tmp13);
			if ((tmp14)){
				break;
			}
			int tmp15 = _g;
			::openfl::_internal::text::TextLayoutGroup tmp16 = _g1->get(tmp15);
			::openfl::_internal::text::TextLayoutGroup group = tmp16;
			++(_g);
			bool tmp17 = (y >= group->offsetY);
			bool tmp18;
			if ((tmp17)){
				Float tmp19 = y;
				Float tmp20 = (group->offsetY + group->height);
				Float tmp21 = tmp20;
				tmp18 = (tmp19 <= tmp21);
			}
			else{
				tmp18 = false;
			}
			if ((tmp18)){
				bool tmp19 = (x >= group->offsetX);
				bool tmp20;
				if ((tmp19)){
					Float tmp21 = x;
					Float tmp22 = (group->offsetX + group->width);
					Float tmp23 = tmp22;
					tmp20 = (tmp21 <= tmp23);
				}
				else{
					tmp20 = false;
				}
				if ((tmp20)){
					Float advance = ((Float)0.0);
					{
						int _g3 = (int)0;
						int tmp21 = group->advances->length;
						int _g2 = tmp21;
						while((true)){
							bool tmp22 = (_g3 < _g2);
							bool tmp23 = !(tmp22);
							if ((tmp23)){
								break;
							}
							int tmp24 = (_g3)++;
							int i = tmp24;
							Float tmp25 = group->advances->__get(i);
							hx::AddEq(advance,tmp25);
							Float tmp26 = x;
							Float tmp27 = (group->offsetX + advance);
							bool tmp28 = (tmp26 <= tmp27);
							if ((tmp28)){
								int tmp29 = (group->startIndex + i);
								return tmp29;
							}
						}
					}
					int tmp21 = group->endIndex;
					return tmp21;
				}
			}
		}
	}
	return (int)-1;
}


HX_DEFINE_DYNAMIC_FUNC2(TextField_obj,getCharIndexAtPoint,return )

int TextField_obj::getFirstCharInParagraph( int charIndex){
	bool tmp = (charIndex < (int)0);
	bool tmp1 = !(tmp);
	bool tmp2;
	if ((tmp1)){
		int tmp3 = charIndex;
		::String tmp4 = this->__text;
		::String tmp5 = tmp4;
		int tmp6 = tmp5.length;
		int tmp7 = (tmp6 - (int)1);
		int tmp8 = tmp7;
		tmp2 = (tmp3 > tmp8);
	}
	else{
		tmp2 = true;
	}
	if ((tmp2)){
		return (int)0;
	}
	::openfl::_internal::text::TextEngine tmp3 = this->__textEngine;
	int tmp4 = tmp3->getLineBreakIndex(null());
	int index = tmp4;
	int startIndex = (int)0;
	while((true)){
		bool tmp5 = (index > (int)-1);
		bool tmp6 = !(tmp5);
		if ((tmp6)){
			break;
		}
		bool tmp7 = (index <= charIndex);
		if ((tmp7)){
			int tmp8 = (index + (int)1);
			startIndex = tmp8;
		}
		else{
			bool tmp8 = (index > charIndex);
			if ((tmp8)){
				break;
			}
		}
		::openfl::_internal::text::TextEngine tmp8 = this->__textEngine;
		int tmp9 = (index + (int)1);
		int tmp10 = tmp8->getLineBreakIndex(tmp9);
		index = tmp10;
	}
	int tmp5 = startIndex;
	return tmp5;
}


HX_DEFINE_DYNAMIC_FUNC1(TextField_obj,getFirstCharInParagraph,return )

int TextField_obj::getLineIndexAtPoint( Float x,Float y){
	this->__updateLayout();
	bool tmp = (x <= (int)2);
	bool tmp1 = !(tmp);
	bool tmp2 = tmp1;
	bool tmp3;
	if ((tmp2)){
		Float tmp4 = x;
		Float tmp5 = this->get_width();
		Float tmp6 = tmp5;
		Float tmp7 = tmp6;
		Float tmp8 = (tmp7 + (int)4);
		Float tmp9 = tmp8;
		Float tmp10 = tmp9;
		tmp3 = (tmp4 > tmp10);
	}
	else{
		tmp3 = true;
	}
	bool tmp4 = !(tmp3);
	bool tmp5 = tmp4;
	bool tmp6;
	if ((tmp5)){
		tmp6 = (y <= (int)0);
	}
	else{
		tmp6 = true;
	}
	bool tmp7 = !(tmp6);
	bool tmp8;
	if ((tmp7)){
		Float tmp9 = y;
		Float tmp10 = this->get_height();
		Float tmp11 = tmp10;
		Float tmp12 = (tmp11 + (int)4);
		Float tmp13 = tmp12;
		tmp8 = (tmp9 > tmp13);
	}
	else{
		tmp8 = true;
	}
	if ((tmp8)){
		return (int)-1;
	}
	{
		int _g1 = (int)0;
		int tmp9 = this->get_scrollV();
		int tmp10 = (tmp9 - (int)1);
		int _g = tmp10;
		while((true)){
			bool tmp11 = (_g1 < _g);
			bool tmp12 = !(tmp11);
			if ((tmp12)){
				break;
			}
			int tmp13 = (_g1)++;
			int i = tmp13;
			::openfl::_internal::text::TextEngine tmp14 = this->__textEngine;
			int tmp15 = i;
			Float tmp16 = tmp14->lineHeights->get(tmp15);
			hx::AddEq(y,tmp16);
		}
	}
	{
		int _g = (int)0;
		::openfl::_internal::text::TextEngine tmp9 = this->__textEngine;
		::openfl::_Vector::ObjectVector _g1 = tmp9->layoutGroups;
		while((true)){
			int tmp10 = _g;
			int tmp11 = _g1->get_length();
			bool tmp12 = (tmp10 < tmp11);
			bool tmp13 = !(tmp12);
			if ((tmp13)){
				break;
			}
			int tmp14 = _g;
			::openfl::_internal::text::TextLayoutGroup tmp15 = _g1->get(tmp14);
			::openfl::_internal::text::TextLayoutGroup group = tmp15;
			++(_g);
			bool tmp16 = (y >= group->offsetY);
			bool tmp17;
			if ((tmp16)){
				Float tmp18 = y;
				Float tmp19 = (group->offsetY + group->height);
				Float tmp20 = tmp19;
				tmp17 = (tmp18 <= tmp20);
			}
			else{
				tmp17 = false;
			}
			if ((tmp17)){
				int tmp18 = group->lineIndex;
				return tmp18;
			}
		}
	}
	return (int)-1;
}


HX_DEFINE_DYNAMIC_FUNC2(TextField_obj,getLineIndexAtPoint,return )

int TextField_obj::getLineIndexOfChar( int charIndex){
	bool tmp = (charIndex < (int)0);
	bool tmp1 = !(tmp);
	bool tmp2;
	if ((tmp1)){
		int tmp3 = charIndex;
		::String tmp4 = this->__text;
		::String tmp5 = tmp4;
		int tmp6 = tmp5.length;
		tmp2 = (tmp3 > tmp6);
	}
	else{
		tmp2 = true;
	}
	if ((tmp2)){
		return (int)-1;
	}
	this->__updateLayout();
	{
		int _g = (int)0;
		::openfl::_internal::text::TextEngine tmp3 = this->__textEngine;
		::openfl::_Vector::ObjectVector _g1 = tmp3->layoutGroups;
		while((true)){
			int tmp4 = _g;
			int tmp5 = _g1->get_length();
			bool tmp6 = (tmp4 < tmp5);
			bool tmp7 = !(tmp6);
			if ((tmp7)){
				break;
			}
			int tmp8 = _g;
			::openfl::_internal::text::TextLayoutGroup tmp9 = _g1->get(tmp8);
			::openfl::_internal::text::TextLayoutGroup group = tmp9;
			++(_g);
			bool tmp10 = (group->startIndex <= charIndex);
			bool tmp11;
			if ((tmp10)){
				tmp11 = (group->endIndex >= charIndex);
			}
			else{
				tmp11 = false;
			}
			if ((tmp11)){
				int tmp12 = group->lineIndex;
				return tmp12;
			}
		}
	}
	return (int)-1;
}


HX_DEFINE_DYNAMIC_FUNC1(TextField_obj,getLineIndexOfChar,return )

int TextField_obj::getLineLength( int lineIndex){
	this->__updateLayout();
	bool tmp = (lineIndex < (int)0);
	bool tmp1 = !(tmp);
	bool tmp2;
	if ((tmp1)){
		int tmp3 = lineIndex;
		::openfl::_internal::text::TextEngine tmp4 = this->__textEngine;
		::openfl::_internal::text::TextEngine tmp5 = tmp4;
		int tmp6 = tmp5->numLines;
		int tmp7 = (tmp6 - (int)1);
		int tmp8 = tmp7;
		tmp2 = (tmp3 > tmp8);
	}
	else{
		tmp2 = true;
	}
	if ((tmp2)){
		return (int)0;
	}
	int startIndex = (int)-1;
	int endIndex = (int)-1;
	{
		int _g = (int)0;
		::openfl::_internal::text::TextEngine tmp3 = this->__textEngine;
		::openfl::_Vector::ObjectVector _g1 = tmp3->layoutGroups;
		while((true)){
			int tmp4 = _g;
			int tmp5 = _g1->get_length();
			bool tmp6 = (tmp4 < tmp5);
			bool tmp7 = !(tmp6);
			if ((tmp7)){
				break;
			}
			int tmp8 = _g;
			::openfl::_internal::text::TextLayoutGroup tmp9 = _g1->get(tmp8);
			::openfl::_internal::text::TextLayoutGroup group = tmp9;
			++(_g);
			bool tmp10 = (group->lineIndex == lineIndex);
			if ((tmp10)){
				bool tmp11 = (startIndex == (int)-1);
				if ((tmp11)){
					startIndex = group->startIndex;
				}
			}
			else{
				int tmp11 = group->lineIndex;
				int tmp12 = (lineIndex + (int)1);
				bool tmp13 = (tmp11 == tmp12);
				if ((tmp13)){
					endIndex = group->startIndex;
					break;
				}
			}
		}
	}
	bool tmp3 = (endIndex == (int)-1);
	if ((tmp3)){
		::String tmp4 = this->__text;
		endIndex = tmp4.length;
	}
	int tmp4 = (endIndex - startIndex);
	return tmp4;
}


HX_DEFINE_DYNAMIC_FUNC1(TextField_obj,getLineLength,return )

::openfl::text::TextLineMetrics TextField_obj::getLineMetrics( int lineIndex){
	this->__updateLayout();
	::openfl::_internal::text::TextEngine tmp = this->__textEngine;
	int tmp1 = lineIndex;
	Float tmp2 = tmp->lineAscents->get(tmp1);
	Float ascender = tmp2;
	::openfl::_internal::text::TextEngine tmp3 = this->__textEngine;
	int tmp4 = lineIndex;
	Float tmp5 = tmp3->lineDescents->get(tmp4);
	Float descender = tmp5;
	::openfl::_internal::text::TextEngine tmp6 = this->__textEngine;
	int tmp7 = lineIndex;
	Float tmp8 = tmp6->lineLeadings->get(tmp7);
	Float leading = tmp8;
	::openfl::_internal::text::TextEngine tmp9 = this->__textEngine;
	int tmp10 = lineIndex;
	Float tmp11 = tmp9->lineHeights->get(tmp10);
	Float lineHeight = tmp11;
	::openfl::_internal::text::TextEngine tmp12 = this->__textEngine;
	int tmp13 = lineIndex;
	Float tmp14 = tmp12->lineWidths->get(tmp13);
	Float lineWidth = tmp14;
	Float tmp15;
	{
		::openfl::text::TextFormat tmp16 = this->__textFormat;
		Dynamic _g = tmp16->align;
		Dynamic tmp17 = _g;
		switch( (int)(tmp17)){
			case (int)3: case (int)2: case (int)5: {
				tmp15 = (int)2;
			}
			;break;
			case (int)4: case (int)1: {
				::openfl::_internal::text::TextEngine tmp18 = this->__textEngine;
				Float tmp19 = tmp18->width;
				Float tmp20 = lineWidth;
				Float tmp21 = (tmp19 - tmp20);
				tmp15 = (tmp21 - (int)2);
			}
			;break;
			case (int)0: {
				::openfl::_internal::text::TextEngine tmp18 = this->__textEngine;
				Float tmp19 = tmp18->width;
				Float tmp20 = lineWidth;
				Float tmp21 = (tmp19 - tmp20);
				tmp15 = (Float(tmp21) / Float((int)2));
			}
			;break;
		}
	}
	Float margin = tmp15;
	::openfl::text::TextLineMetrics tmp16 = ::openfl::text::TextLineMetrics_obj::__new(margin,lineWidth,lineHeight,ascender,descender,leading);
	return tmp16;
}


HX_DEFINE_DYNAMIC_FUNC1(TextField_obj,getLineMetrics,return )

int TextField_obj::getLineOffset( int lineIndex){
	this->__updateLayout();
	bool tmp = (lineIndex < (int)0);
	bool tmp1 = !(tmp);
	bool tmp2;
	if ((tmp1)){
		int tmp3 = lineIndex;
		::openfl::_internal::text::TextEngine tmp4 = this->__textEngine;
		::openfl::_internal::text::TextEngine tmp5 = tmp4;
		int tmp6 = tmp5->numLines;
		int tmp7 = (tmp6 - (int)1);
		int tmp8 = tmp7;
		tmp2 = (tmp3 > tmp8);
	}
	else{
		tmp2 = true;
	}
	if ((tmp2)){
		return (int)-1;
	}
	{
		int _g = (int)0;
		::openfl::_internal::text::TextEngine tmp3 = this->__textEngine;
		::openfl::_Vector::ObjectVector _g1 = tmp3->layoutGroups;
		while((true)){
			int tmp4 = _g;
			int tmp5 = _g1->get_length();
			bool tmp6 = (tmp4 < tmp5);
			bool tmp7 = !(tmp6);
			if ((tmp7)){
				break;
			}
			int tmp8 = _g;
			::openfl::_internal::text::TextLayoutGroup tmp9 = _g1->get(tmp8);
			::openfl::_internal::text::TextLayoutGroup group = tmp9;
			++(_g);
			bool tmp10 = (group->lineIndex == lineIndex);
			if ((tmp10)){
				int tmp11 = group->startIndex;
				return tmp11;
			}
		}
	}
	return (int)0;
}


HX_DEFINE_DYNAMIC_FUNC1(TextField_obj,getLineOffset,return )

::String TextField_obj::getLineText( int lineIndex){
	this->__updateLayout();
	bool tmp = (lineIndex < (int)0);
	bool tmp1 = !(tmp);
	bool tmp2;
	if ((tmp1)){
		int tmp3 = lineIndex;
		::openfl::_internal::text::TextEngine tmp4 = this->__textEngine;
		::openfl::_internal::text::TextEngine tmp5 = tmp4;
		int tmp6 = tmp5->numLines;
		int tmp7 = (tmp6 - (int)1);
		int tmp8 = tmp7;
		tmp2 = (tmp3 > tmp8);
	}
	else{
		tmp2 = true;
	}
	if ((tmp2)){
		return null();
	}
	int startIndex = (int)-1;
	int endIndex = (int)-1;
	{
		int _g = (int)0;
		::openfl::_internal::text::TextEngine tmp3 = this->__textEngine;
		::openfl::_Vector::ObjectVector _g1 = tmp3->layoutGroups;
		while((true)){
			int tmp4 = _g;
			int tmp5 = _g1->get_length();
			bool tmp6 = (tmp4 < tmp5);
			bool tmp7 = !(tmp6);
			if ((tmp7)){
				break;
			}
			int tmp8 = _g;
			::openfl::_internal::text::TextLayoutGroup tmp9 = _g1->get(tmp8);
			::openfl::_internal::text::TextLayoutGroup group = tmp9;
			++(_g);
			bool tmp10 = (group->lineIndex == lineIndex);
			if ((tmp10)){
				bool tmp11 = (startIndex == (int)-1);
				if ((tmp11)){
					startIndex = group->startIndex;
				}
			}
			else{
				int tmp11 = group->lineIndex;
				int tmp12 = (lineIndex + (int)1);
				bool tmp13 = (tmp11 == tmp12);
				if ((tmp13)){
					endIndex = group->startIndex;
					break;
				}
			}
		}
	}
	bool tmp3 = (endIndex == (int)-1);
	if ((tmp3)){
		::String tmp4 = this->__text;
		endIndex = tmp4.length;
	}
	::openfl::_internal::text::TextEngine tmp4 = this->__textEngine;
	int tmp5 = startIndex;
	int tmp6 = endIndex;
	::String tmp7 = tmp4->text.substring(tmp5,tmp6);
	return tmp7;
}


HX_DEFINE_DYNAMIC_FUNC1(TextField_obj,getLineText,return )

int TextField_obj::getParagraphLength( int charIndex){
	bool tmp = (charIndex < (int)0);
	bool tmp1 = !(tmp);
	bool tmp2;
	if ((tmp1)){
		int tmp3 = charIndex;
		::String tmp4 = this->__text;
		::String tmp5 = tmp4;
		int tmp6 = tmp5.length;
		int tmp7 = (tmp6 - (int)1);
		int tmp8 = tmp7;
		tmp2 = (tmp3 > tmp8);
	}
	else{
		tmp2 = true;
	}
	if ((tmp2)){
		return (int)0;
	}
	int tmp3 = charIndex;
	int tmp4 = this->getFirstCharInParagraph(tmp3);
	int startIndex = tmp4;
	::openfl::_internal::text::TextEngine tmp5 = this->__textEngine;
	int tmp6 = charIndex;
	int tmp7 = tmp5->getLineBreakIndex(tmp6);
	int tmp8 = (tmp7 + (int)1);
	int endIndex = tmp8;
	bool tmp9 = (endIndex == (int)0);
	if ((tmp9)){
		::String tmp10 = this->__text;
		endIndex = tmp10.length;
	}
	int tmp10 = (endIndex - startIndex);
	return tmp10;
}


HX_DEFINE_DYNAMIC_FUNC1(TextField_obj,getParagraphLength,return )

::openfl::text::TextFormat TextField_obj::getTextFormat( hx::Null< int >  __o_beginIndex,hx::Null< int >  __o_endIndex){
int beginIndex = __o_beginIndex.Default(0);
int endIndex = __o_endIndex.Default(0);
{
		::openfl::text::TextFormat format = null();
		{
			int _g = (int)0;
			::openfl::_internal::text::TextEngine tmp = this->__textEngine;
			::openfl::_Vector::ObjectVector _g1 = tmp->textFormatRanges;
			while((true)){
				int tmp1 = _g;
				int tmp2 = _g1->get_length();
				bool tmp3 = (tmp1 < tmp2);
				bool tmp4 = !(tmp3);
				if ((tmp4)){
					break;
				}
				int tmp5 = _g;
				::openfl::_internal::text::TextFormatRange tmp6 = _g1->get(tmp5);
				::openfl::_internal::text::TextFormatRange group = tmp6;
				++(_g);
				bool tmp7 = (group->start <= beginIndex);
				bool tmp8 = tmp7;
				bool tmp9;
				if ((tmp8)){
					tmp9 = (group->end >= beginIndex);
				}
				else{
					tmp9 = false;
				}
				bool tmp10 = !(tmp9);
				bool tmp11;
				if ((tmp10)){
					bool tmp12 = (group->start <= endIndex);
					bool tmp13 = tmp12;
					bool tmp14 = tmp13;
					if ((tmp14)){
						tmp11 = (group->end >= endIndex);
					}
					else{
						tmp11 = false;
					}
				}
				else{
					tmp11 = true;
				}
				if ((tmp11)){
					bool tmp12 = (format == null());
					if ((tmp12)){
						::openfl::text::TextFormat tmp13 = group->format->clone();
						format = tmp13;
					}
					else{
						::String tmp13 = group->format->font;
						::String tmp14 = format->font;
						bool tmp15 = (tmp13 != tmp14);
						if ((tmp15)){
							format->font = null();
						}
						Dynamic tmp16 = group->format->size;
						Dynamic tmp17 = format->size;
						bool tmp18 = (tmp16 != tmp17);
						if ((tmp18)){
							format->size = null();
						}
						Dynamic tmp19 = group->format->color;
						Dynamic tmp20 = format->color;
						bool tmp21 = (tmp19 != tmp20);
						if ((tmp21)){
							format->color = null();
						}
						Dynamic tmp22 = group->format->bold;
						Dynamic tmp23 = format->bold;
						bool tmp24 = (tmp22 != tmp23);
						if ((tmp24)){
							format->bold = null();
						}
						Dynamic tmp25 = group->format->italic;
						Dynamic tmp26 = format->italic;
						bool tmp27 = (tmp25 != tmp26);
						if ((tmp27)){
							format->italic = null();
						}
						Dynamic tmp28 = group->format->underline;
						Dynamic tmp29 = format->underline;
						bool tmp30 = (tmp28 != tmp29);
						if ((tmp30)){
							format->underline = null();
						}
						::String tmp31 = group->format->url;
						::String tmp32 = format->url;
						bool tmp33 = (tmp31 != tmp32);
						if ((tmp33)){
							format->url = null();
						}
						::String tmp34 = group->format->target;
						::String tmp35 = format->target;
						bool tmp36 = (tmp34 != tmp35);
						if ((tmp36)){
							format->target = null();
						}
						Dynamic tmp37 = group->format->align;
						Dynamic tmp38 = format->align;
						bool tmp39 = (tmp37 != tmp38);
						if ((tmp39)){
							format->align = null();
						}
						Dynamic tmp40 = group->format->leftMargin;
						Dynamic tmp41 = format->leftMargin;
						bool tmp42 = (tmp40 != tmp41);
						if ((tmp42)){
							format->leftMargin = null();
						}
						Dynamic tmp43 = group->format->rightMargin;
						Dynamic tmp44 = format->rightMargin;
						bool tmp45 = (tmp43 != tmp44);
						if ((tmp45)){
							format->rightMargin = null();
						}
						Dynamic tmp46 = group->format->indent;
						Dynamic tmp47 = format->indent;
						bool tmp48 = (tmp46 != tmp47);
						if ((tmp48)){
							format->indent = null();
						}
						Dynamic tmp49 = group->format->leading;
						Dynamic tmp50 = format->leading;
						bool tmp51 = (tmp49 != tmp50);
						if ((tmp51)){
							format->leading = null();
						}
						Dynamic tmp52 = group->format->blockIndent;
						Dynamic tmp53 = format->blockIndent;
						bool tmp54 = (tmp52 != tmp53);
						if ((tmp54)){
							format->blockIndent = null();
						}
						Dynamic tmp55 = group->format->bullet;
						Dynamic tmp56 = format->bullet;
						bool tmp57 = (tmp55 != tmp56);
						if ((tmp57)){
							format->bullet = null();
						}
						Dynamic tmp58 = group->format->kerning;
						Dynamic tmp59 = format->kerning;
						bool tmp60 = (tmp58 != tmp59);
						if ((tmp60)){
							format->kerning = null();
						}
						Dynamic tmp61 = group->format->letterSpacing;
						Dynamic tmp62 = format->letterSpacing;
						bool tmp63 = (tmp61 != tmp62);
						if ((tmp63)){
							format->letterSpacing = null();
						}
						bool tmp64 = (group->format->tabStops != format->tabStops);
						if ((tmp64)){
							format->tabStops = null();
						}
					}
				}
			}
		}
		::openfl::text::TextFormat tmp = format;
		return tmp;
	}
}


HX_DEFINE_DYNAMIC_FUNC2(TextField_obj,getTextFormat,return )

Void TextField_obj::replaceSelectedText( ::String value){
{
		bool tmp = (value == HX_HCSTRING("","\x00","\x00","\x00","\x00"));
		bool tmp1;
		if ((tmp)){
			int tmp2 = this->__selectionIndex;
			int tmp3 = tmp2;
			int tmp4 = this->__caretIndex;
			int tmp5 = tmp4;
			tmp1 = (tmp3 == tmp5);
		}
		else{
			tmp1 = false;
		}
		if ((tmp1)){
			return null();
		}
		int tmp2 = this->__caretIndex;
		int tmp3 = this->__selectionIndex;
		bool tmp4 = (tmp2 < tmp3);
		int tmp5;
		if ((tmp4)){
			tmp5 = this->__caretIndex;
		}
		else{
			tmp5 = this->__selectionIndex;
		}
		int startIndex = tmp5;
		int tmp6 = this->__caretIndex;
		int tmp7 = this->__selectionIndex;
		bool tmp8 = (tmp6 > tmp7);
		int tmp9;
		if ((tmp8)){
			tmp9 = this->__caretIndex;
		}
		else{
			tmp9 = this->__selectionIndex;
		}
		int endIndex = tmp9;
		int tmp10 = startIndex;
		int tmp11 = endIndex;
		::String tmp12 = value;
		this->replaceText(tmp10,tmp11,tmp12);
		int tmp13 = (startIndex + value.length);
		int i = tmp13;
		int tmp14 = i;
		int tmp15 = i;
		this->setSelection(tmp14,tmp15);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(TextField_obj,replaceSelectedText,(void))

Void TextField_obj::replaceText( int beginIndex,int endIndex,::String newText){
{
		bool tmp = (endIndex < beginIndex);
		bool tmp1 = !(tmp);
		bool tmp2 = tmp1;
		bool tmp3;
		if ((tmp2)){
			tmp3 = (beginIndex < (int)0);
		}
		else{
			tmp3 = true;
		}
		bool tmp4 = !(tmp3);
		bool tmp5 = tmp4;
		bool tmp6;
		if ((tmp5)){
			int tmp7 = endIndex;
			::String tmp8 = this->__text;
			::String tmp9 = tmp8;
			::String tmp10 = tmp9;
			int tmp11 = tmp10.length;
			tmp6 = (tmp7 > tmp11);
		}
		else{
			tmp6 = true;
		}
		bool tmp7 = !(tmp6);
		bool tmp8;
		if ((tmp7)){
			tmp8 = (newText == null());
		}
		else{
			tmp8 = true;
		}
		if ((tmp8)){
			return null();
		}
		::String tmp9 = this->__text;
		int tmp10 = beginIndex;
		::String tmp11 = tmp9.substring((int)0,tmp10);
		::String tmp12 = newText;
		::String tmp13 = (tmp11 + tmp12);
		::String tmp14 = this->__text;
		int tmp15 = endIndex;
		::String tmp16 = tmp14.substring(tmp15,null());
		::String tmp17 = (tmp13 + tmp16);
		this->__updateText(tmp17);
		int tmp18 = newText.length;
		int tmp19 = (endIndex - beginIndex);
		int tmp20 = (tmp18 - tmp19);
		int offset = tmp20;
		int i = (int)0;
		::openfl::_internal::text::TextFormatRange range;
		while((true)){
			int tmp21 = i;
			::openfl::_internal::text::TextEngine tmp22 = this->__textEngine;
			int tmp23 = tmp22->textFormatRanges->get_length();
			bool tmp24 = (tmp21 < tmp23);
			bool tmp25 = !(tmp24);
			if ((tmp25)){
				break;
			}
			::openfl::_internal::text::TextEngine tmp26 = this->__textEngine;
			int tmp27 = i;
			::openfl::_internal::text::TextFormatRange tmp28 = tmp26->textFormatRanges->get(tmp27);
			range = tmp28;
			bool tmp29 = (range->start <= beginIndex);
			bool tmp30;
			if ((tmp29)){
				tmp30 = (range->end >= endIndex);
			}
			else{
				tmp30 = false;
			}
			if ((tmp30)){
				hx::AddEq(range->end,offset);
				(i)++;
			}
			else{
				bool tmp31 = (range->start >= beginIndex);
				bool tmp32;
				if ((tmp31)){
					tmp32 = (range->end <= endIndex);
				}
				else{
					tmp32 = false;
				}
				if ((tmp32)){
					bool tmp33 = (i > (int)0);
					if ((tmp33)){
						::openfl::_internal::text::TextEngine tmp34 = this->__textEngine;
						int tmp35 = i;
						::openfl::_Vector::IVector tmp36 = tmp34->textFormatRanges->splice(tmp35,(int)1);
						tmp36;
					}
					else{
						range->start = (int)0;
						int tmp34 = (beginIndex + newText.length);
						range->end = tmp34;
						(i)++;
					}
					int tmp34 = (range->end - range->start);
					hx::SubEq(offset,tmp34);
				}
				else{
					bool tmp33 = (range->start > beginIndex);
					bool tmp34;
					if ((tmp33)){
						tmp34 = (range->start <= endIndex);
					}
					else{
						tmp34 = false;
					}
					if ((tmp34)){
						hx::AddEq(range->start,offset);
						(i)++;
					}
					else{
						(i)++;
					}
				}
			}
		}
		this->__dirty = true;
		this->__layoutDirty = true;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC3(TextField_obj,replaceText,(void))

Void TextField_obj::setSelection( int beginIndex,int endIndex){
{
		this->__selectionIndex = beginIndex;
		this->__caretIndex = endIndex;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(TextField_obj,setSelection,(void))

Void TextField_obj::setTextFormat( ::openfl::text::TextFormat format,hx::Null< int >  __o_beginIndex,hx::Null< int >  __o_endIndex){
int beginIndex = __o_beginIndex.Default(0);
int endIndex = __o_endIndex.Default(0);
{
		::String tmp = this->get_text();
		int max = tmp.length;
		::openfl::_internal::text::TextFormatRange range;
		bool tmp1 = (beginIndex < (int)0);
		if ((tmp1)){
			beginIndex = (int)0;
		}
		bool tmp2 = (endIndex < (int)0);
		if ((tmp2)){
			endIndex = (int)0;
		}
		bool tmp3 = (endIndex == (int)0);
		if ((tmp3)){
			bool tmp4 = (beginIndex == (int)0);
			if ((tmp4)){
				endIndex = max;
			}
			else{
				int tmp5 = (beginIndex + (int)1);
				endIndex = tmp5;
			}
		}
		bool tmp4 = (endIndex < beginIndex);
		if ((tmp4)){
			return null();
		}
		bool tmp5 = (beginIndex == (int)0);
		bool tmp6;
		if ((tmp5)){
			tmp6 = (endIndex == max);
		}
		else{
			tmp6 = false;
		}
		if ((tmp6)){
			::openfl::text::TextFormat tmp7 = this->__textFormat;
			::openfl::text::TextFormat tmp8 = format;
			tmp7->__merge(tmp8);
			::openfl::_internal::text::TextEngine tmp9 = this->__textEngine;
			int tmp10 = tmp9->textFormatRanges->get_length();
			bool tmp11 = (tmp10 > (int)1);
			if ((tmp11)){
				{
					::openfl::_internal::text::TextEngine tmp12 = this->__textEngine;
					int tmp13 = tmp12->textFormatRanges->get_length();
					int tmp14 = (tmp13 - (int)1);
					int len = tmp14;
					::openfl::_internal::text::TextEngine tmp15 = this->__textEngine;
					int tmp16 = len;
					::openfl::_Vector::IVector tmp17 = tmp15->textFormatRanges->splice((int)1,tmp16);
					tmp17;
				}
				::openfl::_internal::text::TextEngine tmp12 = this->__textEngine;
				::openfl::_internal::text::TextFormatRange tmp13 = tmp12->textFormatRanges->get((int)0);
				range = tmp13;
				::openfl::text::TextFormat tmp14 = this->__textFormat;
				range->format = tmp14;
				range->start = (int)0;
				range->end = max;
			}
		}
		else{
			::openfl::_internal::text::TextEngine tmp7 = this->__textEngine;
			int tmp8 = tmp7->textFormatRanges->get_length();
			int index = tmp8;
			int searchIndex;
			while((true)){
				bool tmp9 = (index > (int)0);
				bool tmp10 = !(tmp9);
				if ((tmp10)){
					break;
				}
				(index)--;
				::openfl::_internal::text::TextEngine tmp11 = this->__textEngine;
				int tmp12 = index;
				::openfl::_internal::text::TextFormatRange tmp13 = tmp11->textFormatRanges->get(tmp12);
				range = tmp13;
				bool tmp14 = (range->start == beginIndex);
				bool tmp15;
				if ((tmp14)){
					tmp15 = (range->end == endIndex);
				}
				else{
					tmp15 = false;
				}
				if ((tmp15)){
					::openfl::text::TextFormat tmp16 = ::openfl::text::TextField_obj::__defaultTextFormat;
					::openfl::text::TextFormat tmp17 = tmp16->clone();
					range->format = tmp17;
					::openfl::text::TextFormat tmp18 = format;
					range->format->__merge(tmp18);
					return null();
				}
				bool tmp16 = (range->start > beginIndex);
				bool tmp17;
				if ((tmp16)){
					tmp17 = (range->end < endIndex);
				}
				else{
					tmp17 = false;
				}
				if ((tmp17)){
					::openfl::_internal::text::TextEngine tmp18 = this->__textEngine;
					::openfl::_internal::text::TextFormatRange tmp19 = range;
					int tmp20 = tmp18->textFormatRanges->indexOf(tmp19,(int)0);
					searchIndex = tmp20;
					bool tmp21 = (searchIndex > (int)-1);
					if ((tmp21)){
						::openfl::_internal::text::TextEngine tmp22 = this->__textEngine;
						int tmp23 = searchIndex;
						::openfl::_Vector::IVector tmp24 = tmp22->textFormatRanges->splice(tmp23,(int)1);
						tmp24;
					}
				}
			}
			::openfl::_internal::text::TextFormatRange prevRange = null();
			::openfl::_internal::text::TextFormatRange nextRange = null();
			{
				int _g1 = (int)0;
				::openfl::_internal::text::TextEngine tmp9 = this->__textEngine;
				int tmp10 = tmp9->textFormatRanges->get_length();
				int _g = tmp10;
				while((true)){
					bool tmp11 = (_g1 < _g);
					bool tmp12 = !(tmp11);
					if ((tmp12)){
						break;
					}
					int tmp13 = (_g1)++;
					int i = tmp13;
					::openfl::_internal::text::TextEngine tmp14 = this->__textEngine;
					int tmp15 = i;
					::openfl::_internal::text::TextFormatRange tmp16 = tmp14->textFormatRanges->get(tmp15);
					range = tmp16;
					bool tmp17 = (beginIndex > (int)0);
					if ((tmp17)){
						bool tmp18 = (prevRange == null());
						bool tmp19;
						if ((tmp18)){
							tmp19 = (range->end >= beginIndex);
						}
						else{
							tmp19 = false;
						}
						if ((tmp19)){
							prevRange = range;
						}
					}
					bool tmp18 = (endIndex < max);
					if ((tmp18)){
						bool tmp19 = (range->start <= endIndex);
						if ((tmp19)){
							nextRange = range;
						}
					}
				}
			}
			bool tmp9 = (nextRange == prevRange);
			if ((tmp9)){
				::openfl::text::TextFormat tmp10 = nextRange->format->clone();
				int tmp11 = nextRange->start;
				int tmp12 = nextRange->end;
				::openfl::_internal::text::TextFormatRange tmp13 = ::openfl::_internal::text::TextFormatRange_obj::__new(tmp10,tmp11,tmp12);
				nextRange = tmp13;
				::openfl::_internal::text::TextEngine tmp14 = this->__textEngine;
				::openfl::_internal::text::TextFormatRange tmp15 = nextRange;
				tmp14->textFormatRanges->push(tmp15);
			}
			bool tmp10 = (prevRange != null());
			if ((tmp10)){
				prevRange->end = beginIndex;
				bool tmp11 = (prevRange->end <= prevRange->start);
				if ((tmp11)){
					::openfl::_internal::text::TextEngine tmp12 = this->__textEngine;
					::openfl::_internal::text::TextFormatRange tmp13 = prevRange;
					int tmp14 = tmp12->textFormatRanges->indexOf(tmp13,(int)0);
					searchIndex = tmp14;
					bool tmp15 = (searchIndex > (int)-1);
					if ((tmp15)){
						::openfl::_internal::text::TextEngine tmp16 = this->__textEngine;
						int tmp17 = searchIndex;
						::openfl::_Vector::IVector tmp18 = tmp16->textFormatRanges->splice(tmp17,(int)1);
						tmp18;
					}
					prevRange = null();
				}
			}
			bool tmp11 = (nextRange != null());
			if ((tmp11)){
				nextRange->start = endIndex;
				bool tmp12 = (nextRange->start >= nextRange->end);
				if ((tmp12)){
					::openfl::_internal::text::TextEngine tmp13 = this->__textEngine;
					::openfl::_internal::text::TextFormatRange tmp14 = nextRange;
					int tmp15 = tmp13->textFormatRanges->indexOf(tmp14,(int)0);
					searchIndex = tmp15;
					bool tmp16 = (searchIndex > (int)-1);
					if ((tmp16)){
						::openfl::_internal::text::TextEngine tmp17 = this->__textEngine;
						int tmp18 = searchIndex;
						::openfl::_Vector::IVector tmp19 = tmp17->textFormatRanges->splice(tmp18,(int)1);
						tmp19;
					}
					nextRange = null();
				}
			}
			::openfl::text::TextFormat tmp12 = ::openfl::text::TextField_obj::__defaultTextFormat;
			::openfl::text::TextFormat tmp13 = tmp12->clone();
			::openfl::text::TextFormat textFormat = tmp13;
			::openfl::text::TextFormat tmp14 = format;
			textFormat->__merge(tmp14);
			{
				::openfl::_internal::text::TextFormatRange tmp15 = ::openfl::_internal::text::TextFormatRange_obj::__new(textFormat,beginIndex,endIndex);
				::openfl::_internal::text::TextFormatRange x = tmp15;
				::openfl::_internal::text::TextEngine tmp16 = this->__textEngine;
				::openfl::_internal::text::TextFormatRange tmp17 = x;
				tmp16->textFormatRanges->push(tmp17);
			}
			{
				::openfl::_internal::text::TextEngine tmp15 = this->__textEngine;

				HX_BEGIN_LOCAL_FUNC_S0(hx::LocalFunc,_Function_3_1)
				int __ArgCount() const { return 2; }
				int run(::openfl::_internal::text::TextFormatRange a,::openfl::_internal::text::TextFormatRange b){
					{
						bool tmp16 = (a->start < b->start);
						bool tmp17 = !(tmp16);
						bool tmp18;
						if ((tmp17)){
							tmp18 = (a->end < b->end);
						}
						else{
							tmp18 = true;
						}
						if ((tmp18)){
							return (int)-1;
						}
						else{
							bool tmp19 = (a->start > b->start);
							bool tmp20 = !(tmp19);
							bool tmp21;
							if ((tmp20)){
								tmp21 = (a->end > b->end);
							}
							else{
								tmp21 = true;
							}
							if ((tmp21)){
								return (int)1;
							}
						}
						return (int)0;
					}
					return null();
				}
				HX_END_LOCAL_FUNC2(return)

				tmp15->textFormatRanges->sort( Dynamic(new _Function_3_1()));
			}
		}
		this->__dirty = true;
		this->__layoutDirty = true;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC3(TextField_obj,setTextFormat,(void))

Void TextField_obj::__caretBeginningOfLine( ){
{
		int tmp = this->__selectionIndex;
		int tmp1 = this->__caretIndex;
		bool tmp2 = (tmp == tmp1);
		bool tmp3 = !(tmp2);
		bool tmp4;
		if ((tmp3)){
			int tmp5 = this->__caretIndex;
			int tmp6 = tmp5;
			int tmp7 = this->__selectionIndex;
			int tmp8 = tmp7;
			tmp4 = (tmp6 < tmp8);
		}
		else{
			tmp4 = true;
		}
		if ((tmp4)){
			int tmp5 = this->__caretIndex;
			int tmp6 = this->getLineIndexOfChar(tmp5);
			int tmp7 = this->getLineOffset(tmp6);
			this->__caretIndex = tmp7;
		}
		else{
			int tmp5 = this->__selectionIndex;
			int tmp6 = this->getLineIndexOfChar(tmp5);
			int tmp7 = this->getLineOffset(tmp6);
			this->__selectionIndex = tmp7;
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(TextField_obj,__caretBeginningOfLine,(void))

Void TextField_obj::__caretEndOfLine( ){
{
		int lineIndex;
		int tmp = this->__selectionIndex;
		int tmp1 = this->__caretIndex;
		bool tmp2 = (tmp == tmp1);
		if ((tmp2)){
			int tmp3 = this->__caretIndex;
			int tmp4 = this->getLineIndexOfChar(tmp3);
			lineIndex = tmp4;
		}
		else{
			int tmp3 = this->__caretIndex;
			int tmp4 = this->__selectionIndex;
			Float tmp5 = ::Math_obj::max(tmp3,tmp4);
			int tmp6 = ::Std_obj::_int(tmp5);
			int tmp7 = this->getLineIndexOfChar(tmp6);
			lineIndex = tmp7;
		}
		int tmp3 = lineIndex;
		::openfl::_internal::text::TextEngine tmp4 = this->__textEngine;
		int tmp5 = tmp4->numLines;
		int tmp6 = (tmp5 - (int)1);
		bool tmp7 = (tmp3 < tmp6);
		if ((tmp7)){
			int tmp8 = (lineIndex + (int)1);
			int tmp9 = this->getLineOffset(tmp8);
			int tmp10 = (tmp9 - (int)1);
			this->__caretIndex = tmp10;
		}
		else{
			::String tmp8 = this->__text;
			this->__caretIndex = tmp8.length;
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(TextField_obj,__caretEndOfLine,(void))

Void TextField_obj::__caretNextCharacter( ){
{
		int tmp = this->__caretIndex;
		::String tmp1 = this->__text;
		int tmp2 = tmp1.length;
		bool tmp3 = (tmp < tmp2);
		if ((tmp3)){
			(this->__caretIndex)++;
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(TextField_obj,__caretNextCharacter,(void))

Void TextField_obj::__caretNextLine( Dynamic lineIndex,Dynamic caretIndex){
{
		bool tmp = (lineIndex == null());
		if ((tmp)){
			int tmp1 = this->__caretIndex;
			int tmp2 = this->getLineIndexOfChar(tmp1);
			lineIndex = tmp2;
		}
		Dynamic tmp1 = lineIndex;
		::openfl::_internal::text::TextEngine tmp2 = this->__textEngine;
		int tmp3 = tmp2->numLines;
		int tmp4 = (tmp3 - (int)1);
		bool tmp5 = (tmp1 < tmp4);
		if ((tmp5)){
			bool tmp6 = (caretIndex == null());
			if ((tmp6)){
				int tmp7 = this->__caretIndex;
				caretIndex = tmp7;
			}
			Dynamic tmp7 = caretIndex;
			int tmp8 = (lineIndex + (int)1);
			int tmp9 = this->__getCharIndexOnDifferentLine(tmp7,tmp8);
			this->__caretIndex = tmp9;
		}
		else{
			::String tmp6 = this->__text;
			this->__caretIndex = tmp6.length;
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(TextField_obj,__caretNextLine,(void))

Void TextField_obj::__caretPreviousCharacter( ){
{
		int tmp = this->__caretIndex;
		bool tmp1 = (tmp > (int)0);
		if ((tmp1)){
			(this->__caretIndex)--;
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(TextField_obj,__caretPreviousCharacter,(void))

Void TextField_obj::__caretPreviousLine( Dynamic lineIndex,Dynamic caretIndex){
{
		bool tmp = (lineIndex == null());
		if ((tmp)){
			int tmp1 = this->__caretIndex;
			int tmp2 = this->getLineIndexOfChar(tmp1);
			lineIndex = tmp2;
		}
		bool tmp1 = (lineIndex > (int)0);
		if ((tmp1)){
			bool tmp2 = (caretIndex == null());
			if ((tmp2)){
				int tmp3 = this->__caretIndex;
				caretIndex = tmp3;
			}
			Dynamic tmp3 = caretIndex;
			int tmp4 = (lineIndex - (int)1);
			int tmp5 = this->__getCharIndexOnDifferentLine(tmp3,tmp4);
			this->__caretIndex = tmp5;
		}
		else{
			this->__caretIndex = (int)0;
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(TextField_obj,__caretPreviousLine,(void))

bool TextField_obj::__dispatch( ::openfl::events::Event event){
	bool tmp = (event->eventPhase == (int)2);
	bool tmp1;
	if ((tmp)){
		tmp1 = (event->type == HX_HCSTRING("mouseUp","\xe0","\xf3","\x72","\xc0"));
	}
	else{
		tmp1 = false;
	}
	if ((tmp1)){
		::openfl::events::MouseEvent event1 = ((::openfl::events::MouseEvent)(event));
		Float tmp2 = this->get_mouseX();
		Float tmp3 = this->get_mouseY();
		::openfl::_internal::text::TextLayoutGroup tmp4 = this->__getGroup(tmp2,tmp3,true);
		::openfl::_internal::text::TextLayoutGroup group = tmp4;
		bool tmp5 = (group != null());
		if ((tmp5)){
			::String tmp6 = group->format->url;
			::String url = tmp6;
			bool tmp7 = (url != HX_HCSTRING("","\x00","\x00","\x00","\x00"));
			if ((tmp7)){
				::String tmp8 = url;
				bool tmp9 = ::StringTools_obj::startsWith(tmp8,HX_HCSTRING("event:","\xe0","\x4e","\x6a","\x96"));
				if ((tmp9)){
					::String tmp10 = url.substr((int)6,null());
					::openfl::events::TextEvent tmp11 = ::openfl::events::TextEvent_obj::__new(HX_HCSTRING("link","\xfa","\x17","\xb3","\x47"),false,false,tmp10);
					this->dispatchEvent(tmp11);
				}
				else{
					::openfl::net::URLRequest tmp10 = ::openfl::net::URLRequest_obj::__new(url);
					::openfl::Lib_obj::getURL(tmp10,null());
				}
			}
		}
	}
	::openfl::events::Event tmp2 = event;
	bool tmp3 = this->super::__dispatch(tmp2);
	return tmp3;
}


Void TextField_obj::__fromSymbol( ::openfl::_internal::swf::SWFLite swf,::openfl::_internal::symbols::DynamicTextSymbol symbol){
{
		this->__symbol = symbol;
		Float tmp = symbol->width;
		this->set_width(tmp);
		Float tmp1 = symbol->height;
		this->set_height(tmp1);
		this->__offsetX = symbol->x;
		this->__offsetY = symbol->y;
		bool tmp2 = symbol->multiline;
		this->set_multiline(tmp2);
		bool tmp3 = symbol->wordWrap;
		this->set_wordWrap(tmp3);
		bool tmp4 = symbol->password;
		this->set_displayAsPassword(tmp4);
		bool tmp5 = symbol->border;
		if ((tmp5)){
			this->set_border(true);
			this->set_background(true);
		}
		bool tmp6 = symbol->selectable;
		this->set_selectable(tmp6);
		bool tmp7 = symbol->input;
		if ((tmp7)){
			this->set_type(((Dynamic)((int)1)));
		}
		::openfl::text::TextFormat tmp8 = ::openfl::text::TextFormat_obj::__new(null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null());
		::openfl::text::TextFormat format = tmp8;
		bool tmp9 = (symbol->color != null());
		if ((tmp9)){
			int tmp10 = (int(symbol->color) & int((int)16777215));
			format->color = tmp10;
		}
		Float tmp10 = (Float(symbol->fontHeight) / Float((int)20));
		int tmp11 = ::Math_obj::round(tmp10);
		format->size = tmp11;
		int tmp12 = symbol->fontID;
		::openfl::_internal::symbols::SWFSymbol tmp13 = swf->symbols->get(tmp12);
		::openfl::_internal::symbols::FontSymbol font = ((::openfl::_internal::symbols::FontSymbol)(tmp13));
		bool tmp14 = (font != null());
		if ((tmp14)){
		}
		format->font = symbol->fontName;
		bool found = false;
		{
			::String _g = format->font;
			bool tmp15 = (_g == null());
			if ((tmp15)){
				found = true;
			}
			else{
				::String tmp16 = _g;
				::String _switch_1 = (tmp16);
				if (  ( _switch_1==HX_HCSTRING("_sans","\x32","\xa0","\x5e","\xff")) ||  ( _switch_1==HX_HCSTRING("_serif","\xbe","\x66","\x15","\x76")) ||  ( _switch_1==HX_HCSTRING("_typewriter","\x0c","\x5e","\x52","\x94")) ||  ( _switch_1==HX_HCSTRING("","\x00","\x00","\x00","\x00"))){
					found = true;
				}
				else  {
					int _g1 = (int)0;
					Array< ::Dynamic > _g2 = ::openfl::text::Font_obj::enumerateFonts(null());
					while((true)){
						bool tmp17 = (_g1 < _g2->length);
						bool tmp18 = !(tmp17);
						if ((tmp18)){
							break;
						}
						::openfl::text::Font tmp19 = _g2->__get(_g1).StaticCast< ::openfl::text::Font >();
						::openfl::text::Font font1 = tmp19;
						++(_g1);
						bool tmp20 = (font1->name == format->font);
						if ((tmp20)){
							found = true;
							break;
						}
					}
				}
;
;
			}
		}
		bool tmp15 = found;
		if ((tmp15)){
			this->set_embedFonts(true);
		}
		else{
			::haxe::ds::StringMap tmp16 = ::openfl::text::TextField_obj::__missingFontWarning;
			::String tmp17 = format->font;
			bool tmp18 = tmp16->exists(tmp17);
			bool tmp19 = !(tmp18);
			if ((tmp19)){
				bool tmp20;
				{
					::haxe::ds::StringMap tmp21 = ::openfl::text::TextField_obj::__missingFontWarning;
					::String tmp22 = format->font;
					tmp21->set(tmp22,true);
					tmp20 = true;
				}
				tmp20;
				::String tmp21 = (HX_HCSTRING("Could not find required font \"","\x97","\x15","\xe8","\x5b") + format->font);
				::String tmp22 = (tmp21 + HX_HCSTRING("\", it has not been embedded","\x4c","\x66","\x7a","\x0a"));
				Dynamic tmp23 = hx::SourceInfo(HX_HCSTRING("TextField.hx","\x31","\xa8","\x83","\xa8"),977,HX_HCSTRING("openfl.text.TextField","\xca","\xa8","\xd5","\xef"),HX_HCSTRING("__fromSymbol","\x82","\x2f","\xb5","\x6a"));
				::lime::utils::Log_obj::warn(tmp22,tmp23);
			}
		}
		bool tmp16 = (symbol->align != null());
		if ((tmp16)){
			bool tmp17 = (symbol->align == HX_HCSTRING("center","\xd5","\x25","\xdb","\x05"));
			if ((tmp17)){
				format->align = ((Dynamic)((int)0));
			}
			else{
				bool tmp18 = (symbol->align == HX_HCSTRING("right","\xdc","\x0b","\x64","\xe9"));
				if ((tmp18)){
					format->align = ((Dynamic)((int)4));
				}
				else{
					bool tmp19 = (symbol->align == HX_HCSTRING("justify","\x50","\xdf","\xb5","\x83"));
					if ((tmp19)){
						format->align = ((Dynamic)((int)2));
					}
				}
			}
			Float tmp18 = (Float(symbol->leftMargin) / Float((int)20));
			int tmp19 = ::Std_obj::_int(tmp18);
			format->leftMargin = tmp19;
			Float tmp20 = (Float(symbol->rightMargin) / Float((int)20));
			int tmp21 = ::Std_obj::_int(tmp20);
			format->rightMargin = tmp21;
			Float tmp22 = (Float(symbol->indent) / Float((int)20));
			int tmp23 = ::Std_obj::_int(tmp22);
			format->indent = tmp23;
			Float tmp24 = (Float(symbol->leading) / Float((int)20));
			int tmp25 = ::Std_obj::_int(tmp24);
			format->leading = tmp25;
			bool tmp26 = this->get_embedFonts();
			if ((tmp26)){
				hx::AddEq(format->leading,(int)4);
			}
		}
		::openfl::text::TextFormat tmp17 = format;
		this->set_defaultTextFormat(tmp17);
		bool tmp18 = (symbol->text != null());
		if ((tmp18)){
			bool tmp19 = symbol->html;
			if ((tmp19)){
				::String tmp20 = symbol->text;
				this->set_htmlText(tmp20);
			}
			else{
				::String tmp20 = symbol->text;
				this->set_text(tmp20);
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(TextField_obj,__fromSymbol,(void))

::String TextField_obj::__getAttributeMatch( ::EReg regex){
	::String tmp = regex->matched((int)2);
	bool tmp1 = (tmp != null());
	::String tmp2;
	if ((tmp1)){
		tmp2 = regex->matched((int)2);
	}
	else{
		tmp2 = regex->matched((int)3);
	}
	return tmp2;
}


HX_DEFINE_DYNAMIC_FUNC1(TextField_obj,__getAttributeMatch,return )

Void TextField_obj::__getBounds( ::openfl::geom::Rectangle rect,::openfl::geom::Matrix matrix){
{
		this->__updateLayout();
		::lime::utils::ObjectPool_openfl_geom_Rectangle tmp = ::openfl::geom::Rectangle_obj::__pool;
		::openfl::geom::Rectangle tmp1 = tmp->get();
		::openfl::geom::Rectangle bounds = tmp1;
		::openfl::_internal::text::TextEngine tmp2 = this->__textEngine;
		::openfl::geom::Rectangle tmp3 = tmp2->bounds;
		bounds->copyFrom(tmp3);
		Float tmp4 = this->__offsetX;
		hx::AddEq(bounds->x,tmp4);
		Float tmp5 = this->__offsetY;
		hx::AddEq(bounds->y,tmp5);
		::openfl::geom::Rectangle tmp6 = bounds;
		::openfl::geom::Matrix tmp7 = matrix;
		bounds->__transform(tmp6,tmp7);
		Float tmp8 = bounds->x;
		Float tmp9 = bounds->y;
		Float tmp10 = bounds->width;
		Float tmp11 = bounds->height;
		rect->__expand(tmp8,tmp9,tmp10,tmp11);
		::lime::utils::ObjectPool_openfl_geom_Rectangle tmp12 = ::openfl::geom::Rectangle_obj::__pool;
		::openfl::geom::Rectangle tmp13 = bounds;
		tmp12->release(tmp13);
	}
return null();
}


int TextField_obj::__getCharIndexOnDifferentLine( int charIndex,int lineIndex){
	bool tmp = (charIndex < (int)0);
	bool tmp1 = !(tmp);
	bool tmp2;
	if ((tmp1)){
		int tmp3 = charIndex;
		::String tmp4 = this->__text;
		::String tmp5 = tmp4;
		int tmp6 = tmp5.length;
		tmp2 = (tmp3 > tmp6);
	}
	else{
		tmp2 = true;
	}
	if ((tmp2)){
		return (int)-1;
	}
	bool tmp3 = (lineIndex < (int)0);
	bool tmp4 = !(tmp3);
	bool tmp5;
	if ((tmp4)){
		int tmp6 = lineIndex;
		::openfl::_internal::text::TextEngine tmp7 = this->__textEngine;
		::openfl::_internal::text::TextEngine tmp8 = tmp7;
		int tmp9 = tmp8->numLines;
		int tmp10 = (tmp9 - (int)1);
		int tmp11 = tmp10;
		tmp5 = (tmp6 > tmp11);
	}
	else{
		tmp5 = true;
	}
	if ((tmp5)){
		return (int)-1;
	}
	Dynamic x = null();
	Dynamic y = null();
	{
		int _g = (int)0;
		::openfl::_internal::text::TextEngine tmp6 = this->__textEngine;
		::openfl::_Vector::ObjectVector _g1 = tmp6->layoutGroups;
		while((true)){
			int tmp7 = _g;
			int tmp8 = _g1->get_length();
			bool tmp9 = (tmp7 < tmp8);
			bool tmp10 = !(tmp9);
			if ((tmp10)){
				break;
			}
			int tmp11 = _g;
			::openfl::_internal::text::TextLayoutGroup tmp12 = _g1->get(tmp11);
			::openfl::_internal::text::TextLayoutGroup group = tmp12;
			++(_g);
			bool tmp13 = (charIndex >= group->startIndex);
			bool tmp14;
			if ((tmp13)){
				tmp14 = (charIndex <= group->endIndex);
			}
			else{
				tmp14 = false;
			}
			if ((tmp14)){
				x = group->offsetX;
				{
					int _g3 = (int)0;
					int tmp15 = (charIndex - group->startIndex);
					int _g2 = tmp15;
					while((true)){
						bool tmp16 = (_g3 < _g2);
						bool tmp17 = !(tmp16);
						if ((tmp17)){
							break;
						}
						int tmp18 = (_g3)++;
						int i = tmp18;
						Float tmp19 = group->advances->__get(i);
						hx::AddEq(x,tmp19);
					}
				}
				bool tmp15 = (y != null());
				if ((tmp15)){
					Dynamic tmp16 = x;
					Dynamic tmp17 = y;
					int tmp18 = this->__getPosition(tmp16,tmp17);
					return tmp18;
				}
			}
			bool tmp15 = (group->lineIndex == lineIndex);
			if ((tmp15)){
				Float tmp16 = group->offsetY;
				Float tmp17 = (Float(group->height) / Float((int)2));
				Float tmp18 = (tmp16 + tmp17);
				y = tmp18;
				bool tmp19 = (x != null());
				if ((tmp19)){
					Dynamic tmp20 = x;
					Dynamic tmp21 = y;
					int tmp22 = this->__getPosition(tmp20,tmp21);
					return tmp22;
				}
			}
		}
	}
	return (int)-1;
}


HX_DEFINE_DYNAMIC_FUNC2(TextField_obj,__getCharIndexOnDifferentLine,return )

::lime::ui::MouseCursor TextField_obj::__getCursor( ){
	Float tmp = this->get_mouseX();
	Float tmp1 = this->get_mouseY();
	::openfl::_internal::text::TextLayoutGroup tmp2 = this->__getGroup(tmp,tmp1,true);
	::openfl::_internal::text::TextLayoutGroup group = tmp2;
	bool tmp3 = (group != null());
	bool tmp4;
	if ((tmp3)){
		::String tmp5 = group->format->url;
		::String tmp6 = tmp5;
		tmp4 = (tmp6 != HX_HCSTRING("","\x00","\x00","\x00","\x00"));
	}
	else{
		tmp4 = false;
	}
	if ((tmp4)){
		return ::lime::ui::MouseCursor_obj::POINTER;
	}
	else{
		::openfl::_internal::text::TextEngine tmp5 = this->__textEngine;
		bool tmp6 = tmp5->selectable;
		if ((tmp6)){
			return ::lime::ui::MouseCursor_obj::TEXT;
		}
	}
	return null();
}


::openfl::_internal::text::TextLayoutGroup TextField_obj::__getGroup( Float x,Float y,hx::Null< bool >  __o_precise){
bool precise = __o_precise.Default(false);
{
		this->__updateLayout();
		int tmp = this->get_scrollH();
		hx::AddEq(x,tmp);
		{
			int _g1 = (int)0;
			int tmp1 = this->get_scrollV();
			int tmp2 = (tmp1 - (int)1);
			int _g = tmp2;
			while((true)){
				bool tmp3 = (_g1 < _g);
				bool tmp4 = !(tmp3);
				if ((tmp4)){
					break;
				}
				int tmp5 = (_g1)++;
				int i = tmp5;
				::openfl::_internal::text::TextEngine tmp6 = this->__textEngine;
				int tmp7 = i;
				Float tmp8 = tmp6->lineHeights->get(tmp7);
				hx::AddEq(y,tmp8);
			}
		}
		bool tmp1 = precise;
		bool tmp2 = tmp1;
		bool tmp3 = !(tmp2);
		bool tmp4;
		if ((tmp3)){
			Float tmp5 = y;
			::openfl::_internal::text::TextEngine tmp6 = this->__textEngine;
			::openfl::_internal::text::TextEngine tmp7 = tmp6;
			Float tmp8 = tmp7->textHeight;
			tmp4 = (tmp5 > tmp8);
		}
		else{
			tmp4 = false;
		}
		if ((tmp4)){
			::openfl::_internal::text::TextEngine tmp5 = this->__textEngine;
			y = tmp5->textHeight;
		}
		bool firstGroup = true;
		::openfl::_internal::text::TextLayoutGroup group;
		::openfl::_internal::text::TextLayoutGroup nextGroup;
		{
			int _g1 = (int)0;
			::openfl::_internal::text::TextEngine tmp5 = this->__textEngine;
			int tmp6 = tmp5->layoutGroups->get_length();
			int _g = tmp6;
			while((true)){
				bool tmp7 = (_g1 < _g);
				bool tmp8 = !(tmp7);
				if ((tmp8)){
					break;
				}
				int tmp9 = (_g1)++;
				int i = tmp9;
				::openfl::_internal::text::TextEngine tmp10 = this->__textEngine;
				int tmp11 = i;
				::openfl::_internal::text::TextLayoutGroup tmp12 = tmp10->layoutGroups->get(tmp11);
				group = tmp12;
				int tmp13 = i;
				::openfl::_internal::text::TextEngine tmp14 = this->__textEngine;
				int tmp15 = tmp14->layoutGroups->get_length();
				int tmp16 = (tmp15 - (int)1);
				bool tmp17 = (tmp13 < tmp16);
				if ((tmp17)){
					::openfl::_internal::text::TextEngine tmp18 = this->__textEngine;
					int tmp19 = (i + (int)1);
					::openfl::_internal::text::TextLayoutGroup tmp20 = tmp18->layoutGroups->get(tmp19);
					nextGroup = tmp20;
				}
				else{
					nextGroup = null();
				}
				bool tmp18 = firstGroup;
				if ((tmp18)){
					bool tmp19 = (y < group->offsetY);
					if ((tmp19)){
						y = group->offsetY;
					}
					bool tmp20 = (x < group->offsetX);
					if ((tmp20)){
						x = group->offsetX;
					}
					firstGroup = false;
				}
				bool tmp19 = (y >= group->offsetY);
				bool tmp20 = tmp19;
				bool tmp21;
				if ((tmp20)){
					Float tmp22 = y;
					Float tmp23 = (group->offsetY + group->height);
					Float tmp24 = tmp23;
					Float tmp25 = tmp24;
					tmp21 = (tmp22 <= tmp25);
				}
				else{
					tmp21 = false;
				}
				bool tmp22 = !(tmp21);
				bool tmp23;
				if ((tmp22)){
					bool tmp24 = precise;
					bool tmp25 = tmp24;
					bool tmp26 = tmp25;
					bool tmp27 = !(tmp26);
					bool tmp28 = tmp27;
					bool tmp29 = tmp28;
					if ((tmp29)){
						tmp23 = (nextGroup == null());
					}
					else{
						tmp23 = false;
					}
				}
				else{
					tmp23 = true;
				}
				if ((tmp23)){
					bool tmp24 = (x >= group->offsetX);
					bool tmp25 = tmp24;
					bool tmp26;
					if ((tmp25)){
						Float tmp27 = x;
						Float tmp28 = (group->offsetX + group->width);
						Float tmp29 = tmp28;
						Float tmp30 = tmp29;
						tmp26 = (tmp27 <= tmp30);
					}
					else{
						tmp26 = false;
					}
					bool tmp27 = !(tmp26);
					bool tmp28;
					if ((tmp27)){
						bool tmp29 = precise;
						bool tmp30 = tmp29;
						bool tmp31 = tmp30;
						bool tmp32 = !(tmp31);
						bool tmp33 = tmp32;
						bool tmp34 = tmp33;
						if ((tmp34)){
							bool tmp35 = (nextGroup == null());
							bool tmp36 = tmp35;
							bool tmp37 = tmp36;
							bool tmp38 = tmp37;
							bool tmp39 = tmp38;
							bool tmp40 = !(tmp39);
							bool tmp41 = tmp40;
							bool tmp42 = tmp41;
							bool tmp43 = tmp42;
							bool tmp44 = tmp43;
							if ((tmp44)){
								tmp28 = (nextGroup->lineIndex != group->lineIndex);
							}
							else{
								tmp28 = true;
							}
						}
						else{
							tmp28 = false;
						}
					}
					else{
						tmp28 = true;
					}
					if ((tmp28)){
						::openfl::_internal::text::TextLayoutGroup tmp29 = group;
						return tmp29;
					}
				}
			}
		}
		return null();
	}
}


HX_DEFINE_DYNAMIC_FUNC3(TextField_obj,__getGroup,return )

int TextField_obj::__getPosition( Float x,Float y){
	Float tmp = x;
	Float tmp1 = y;
	::openfl::_internal::text::TextLayoutGroup tmp2 = this->__getGroup(tmp,tmp1,null());
	::openfl::_internal::text::TextLayoutGroup group = tmp2;
	bool tmp3 = (group == null());
	if ((tmp3)){
		::String tmp4 = this->__text;
		int tmp5 = tmp4.length;
		return tmp5;
	}
	Float advance = ((Float)0.0);
	{
		int _g1 = (int)0;
		int tmp4 = group->advances->length;
		int _g = tmp4;
		while((true)){
			bool tmp5 = (_g1 < _g);
			bool tmp6 = !(tmp5);
			if ((tmp6)){
				break;
			}
			int tmp7 = (_g1)++;
			int i = tmp7;
			Float tmp8 = group->advances->__get(i);
			hx::AddEq(advance,tmp8);
			Float tmp9 = x;
			Float tmp10 = (group->offsetX + advance);
			bool tmp11 = (tmp9 <= tmp10);
			if ((tmp11)){
				Float tmp12 = x;
				Float tmp13 = group->offsetX;
				Float tmp14 = advance;
				Float tmp15 = group->advances->__get(i);
				Float tmp16 = (tmp14 - tmp15);
				Float tmp17 = (tmp13 + tmp16);
				Float tmp18 = group->advances->__get(i);
				Float tmp19 = (Float(tmp18) / Float((int)2));
				Float tmp20 = (tmp17 + tmp19);
				bool tmp21 = (tmp12 <= tmp20);
				if ((tmp21)){
					int tmp22 = (group->startIndex + i);
					return tmp22;
				}
				else{
					int tmp22 = (group->startIndex + i);
					int tmp23 = group->endIndex;
					bool tmp24 = (tmp22 < tmp23);
					int tmp25;
					if ((tmp24)){
						int tmp26 = (group->startIndex + i);
						tmp25 = (tmp26 + (int)1);
					}
					else{
						tmp25 = group->endIndex;
					}
					return tmp25;
				}
			}
		}
	}
	int tmp4 = group->endIndex;
	return tmp4;
}


HX_DEFINE_DYNAMIC_FUNC2(TextField_obj,__getPosition,return )

bool TextField_obj::__hitTest( Float x,Float y,bool shapeFlag,Array< ::Dynamic > stack,bool interactiveOnly,::openfl::display::DisplayObject hitObject){
	bool tmp = hitObject->get_visible();
	bool tmp1 = tmp;
	bool tmp2 = !(tmp1);
	bool tmp3 = !(tmp2);
	bool tmp4 = tmp3;
	bool tmp5;
	if ((tmp4)){
		tmp5 = this->__isMask;
	}
	else{
		tmp5 = true;
	}
	bool tmp6 = !(tmp5);
	bool tmp7;
	if ((tmp6)){
		bool tmp8 = interactiveOnly;
		bool tmp9 = tmp8;
		if ((tmp9)){
			bool tmp10 = this->mouseEnabled;
			bool tmp11 = tmp10;
			bool tmp12 = tmp11;
			bool tmp13 = tmp12;
			bool tmp14 = tmp13;
			tmp7 = !(tmp14);
		}
		else{
			tmp7 = false;
		}
	}
	else{
		tmp7 = true;
	}
	if ((tmp7)){
		return false;
	}
	::openfl::display::DisplayObject tmp8 = this->get_mask();
	bool tmp9 = (tmp8 != null());
	bool tmp10;
	if ((tmp9)){
		::openfl::display::DisplayObject tmp11 = this->get_mask();
		::openfl::display::DisplayObject tmp12 = tmp11;
		Float tmp13 = x;
		Float tmp14 = y;
		Float tmp15 = tmp13;
		Float tmp16 = tmp14;
		bool tmp17 = tmp12->__hitTestMask(tmp15,tmp16);
		bool tmp18 = tmp17;
		bool tmp19 = tmp18;
		tmp10 = !(tmp19);
	}
	else{
		tmp10 = false;
	}
	if ((tmp10)){
		return false;
	}
	this->__getRenderTransform();
	this->__updateLayout();
	Float tmp11;
	{
		::openfl::geom::Matrix tmp12 = this->__renderTransform;
		::openfl::geom::Matrix _this = tmp12;
		Float tmp13 = (_this->a * _this->d);
		Float tmp14 = (_this->b * _this->c);
		Float tmp15 = (tmp13 - tmp14);
		Float norm = tmp15;
		bool tmp16 = (norm == (int)0);
		if ((tmp16)){
			Float tmp17 = _this->tx;
			tmp11 = -(tmp17);
		}
		else{
			Float tmp17 = (Float(((Float)1.0)) / Float(norm));
			Float tmp18 = _this->c;
			Float tmp19 = (_this->ty - y);
			Float tmp20 = (tmp18 * tmp19);
			Float tmp21 = _this->d;
			Float tmp22 = (x - _this->tx);
			Float tmp23 = (tmp21 * tmp22);
			Float tmp24 = (tmp20 + tmp23);
			tmp11 = (tmp17 * tmp24);
		}
	}
	Float px = tmp11;
	Float tmp12;
	{
		::openfl::geom::Matrix tmp13 = this->__renderTransform;
		::openfl::geom::Matrix _this = tmp13;
		Float tmp14 = (_this->a * _this->d);
		Float tmp15 = (_this->b * _this->c);
		Float tmp16 = (tmp14 - tmp15);
		Float norm = tmp16;
		bool tmp17 = (norm == (int)0);
		if ((tmp17)){
			Float tmp18 = _this->ty;
			tmp12 = -(tmp18);
		}
		else{
			Float tmp18 = (Float(((Float)1.0)) / Float(norm));
			Float tmp19 = _this->a;
			Float tmp20 = (y - _this->ty);
			Float tmp21 = (tmp19 * tmp20);
			Float tmp22 = _this->b;
			Float tmp23 = (_this->tx - x);
			Float tmp24 = (tmp22 * tmp23);
			Float tmp25 = (tmp21 + tmp24);
			tmp12 = (tmp18 * tmp25);
		}
	}
	Float py = tmp12;
	::openfl::_internal::text::TextEngine tmp13 = this->__textEngine;
	Float tmp14 = px;
	Float tmp15 = py;
	bool tmp16 = tmp13->bounds->contains(tmp14,tmp15);
	if ((tmp16)){
		bool tmp17 = (stack != null());
		if ((tmp17)){
			::openfl::display::DisplayObject tmp18 = hitObject;
			stack->push(tmp18);
		}
		return true;
	}
	return false;
}


bool TextField_obj::__hitTestMask( Float x,Float y){
	this->__getRenderTransform();
	this->__updateLayout();
	Float tmp;
	{
		::openfl::geom::Matrix tmp1 = this->__renderTransform;
		::openfl::geom::Matrix _this = tmp1;
		Float tmp2 = (_this->a * _this->d);
		Float tmp3 = (_this->b * _this->c);
		Float tmp4 = (tmp2 - tmp3);
		Float norm = tmp4;
		bool tmp5 = (norm == (int)0);
		if ((tmp5)){
			Float tmp6 = _this->tx;
			tmp = -(tmp6);
		}
		else{
			Float tmp6 = (Float(((Float)1.0)) / Float(norm));
			Float tmp7 = _this->c;
			Float tmp8 = (_this->ty - y);
			Float tmp9 = (tmp7 * tmp8);
			Float tmp10 = _this->d;
			Float tmp11 = (x - _this->tx);
			Float tmp12 = (tmp10 * tmp11);
			Float tmp13 = (tmp9 + tmp12);
			tmp = (tmp6 * tmp13);
		}
	}
	Float px = tmp;
	Float tmp1;
	{
		::openfl::geom::Matrix tmp2 = this->__renderTransform;
		::openfl::geom::Matrix _this = tmp2;
		Float tmp3 = (_this->a * _this->d);
		Float tmp4 = (_this->b * _this->c);
		Float tmp5 = (tmp3 - tmp4);
		Float norm = tmp5;
		bool tmp6 = (norm == (int)0);
		if ((tmp6)){
			Float tmp7 = _this->ty;
			tmp1 = -(tmp7);
		}
		else{
			Float tmp7 = (Float(((Float)1.0)) / Float(norm));
			Float tmp8 = _this->a;
			Float tmp9 = (y - _this->ty);
			Float tmp10 = (tmp8 * tmp9);
			Float tmp11 = _this->b;
			Float tmp12 = (_this->tx - x);
			Float tmp13 = (tmp11 * tmp12);
			Float tmp14 = (tmp10 + tmp13);
			tmp1 = (tmp7 * tmp14);
		}
	}
	Float py = tmp1;
	::openfl::_internal::text::TextEngine tmp2 = this->__textEngine;
	Float tmp3 = px;
	Float tmp4 = py;
	bool tmp5 = tmp2->bounds->contains(tmp3,tmp4);
	if ((tmp5)){
		return true;
	}
	return false;
}


Void TextField_obj::__renderCairo( ::openfl::_internal::renderer::RenderSession renderSession){
{
		::openfl::_internal::renderer::RenderSession tmp = renderSession;
		::openfl::geom::Matrix tmp1 = this->__worldTransform;
		::openfl::_internal::renderer::cairo::CairoTextField_obj::render(hx::ObjectPtr<OBJ_>(this),tmp,tmp1);
		::openfl::_internal::renderer::RenderSession tmp2 = renderSession;
		this->super::__renderCairo(tmp2);
	}
return null();
}


Void TextField_obj::__renderCanvas( ::openfl::_internal::renderer::RenderSession renderSession){
{
		::openfl::_internal::text::TextEngine tmp = this->__textEngine;
		Dynamic tmp1 = tmp->antiAliasType;
		bool tmp2 = (tmp1 == ((Dynamic)((int)0)));
		bool tmp3;
		if ((tmp2)){
			::openfl::_internal::text::TextEngine tmp4 = this->__textEngine;
			::openfl::_internal::text::TextEngine tmp5 = tmp4;
			Dynamic tmp6 = tmp5->gridFitType;
			tmp3 = (tmp6 == ((Dynamic)((int)1)));
		}
		else{
			tmp3 = false;
		}
		if ((tmp3)){
			bool tmp4 = renderSession->context->imageSmoothingEnabled;
			bool smoothingEnabled = tmp4;
			bool tmp5 = smoothingEnabled;
			if ((tmp5)){
				renderSession->context->__FieldRef(HX_HCSTRING("mozImageSmoothingEnabled","\xf0","\x68","\xe1","\xd7")) = false;
				renderSession->context->__FieldRef(HX_HCSTRING("msImageSmoothingEnabled","\xa2","\x61","\x6c","\xa3")) = false;
				renderSession->context->imageSmoothingEnabled = false;
			}
			::openfl::_internal::renderer::RenderSession tmp6 = renderSession;
			this->super::__renderCanvas(tmp6);
			bool tmp7 = smoothingEnabled;
			if ((tmp7)){
				renderSession->context->__FieldRef(HX_HCSTRING("mozImageSmoothingEnabled","\xf0","\x68","\xe1","\xd7")) = true;
				renderSession->context->__FieldRef(HX_HCSTRING("msImageSmoothingEnabled","\xa2","\x61","\x6c","\xa3")) = true;
				renderSession->context->imageSmoothingEnabled = true;
			}
		}
		else{
			::openfl::_internal::renderer::RenderSession tmp4 = renderSession;
			this->super::__renderCanvas(tmp4);
		}
	}
return null();
}


Void TextField_obj::__renderDOM( ::openfl::_internal::renderer::RenderSession renderSession){
{
	}
return null();
}


Void TextField_obj::__renderGL( ::openfl::_internal::renderer::RenderSession renderSession){
{
		::openfl::_internal::renderer::RenderSession tmp = renderSession;
		::openfl::geom::Matrix tmp1 = this->__worldTransform;
		::openfl::_internal::renderer::cairo::CairoTextField_obj::render(hx::ObjectPtr<OBJ_>(this),tmp,tmp1);
		::openfl::_internal::renderer::RenderSession tmp2 = renderSession;
		this->super::__renderGL(tmp2);
	}
return null();
}


Void TextField_obj::__startCursorTimer( ){
{
		Dynamic tmp = this->__startCursorTimer_dyn();
		::haxe::Timer tmp1 = ::haxe::Timer_obj::delay(tmp,(int)600);
		this->__cursorTimer = tmp1;
		bool tmp2 = this->__showCursor;
		bool tmp3 = !(tmp2);
		this->__showCursor = tmp3;
		this->__dirty = true;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(TextField_obj,__startCursorTimer,(void))

Void TextField_obj::__startTextInput( ){
{
		int tmp = this->__caretIndex;
		bool tmp1 = (tmp < (int)0);
		if ((tmp1)){
			::String tmp2 = this->__text;
			this->__caretIndex = tmp2.length;
			int tmp3 = this->__caretIndex;
			this->__selectionIndex = tmp3;
		}
		::openfl::display::Stage tmp2 = this->stage;
		bool tmp3 = (tmp2 != null());
		if ((tmp3)){
			::openfl::display::Stage tmp4 = this->stage;
			::lime::_backend::native::NativeWindow tmp5 = tmp4->window->backend;
			tmp5->setEnableTextEvents(true);
			bool tmp6 = this->__inputEnabled;
			bool tmp7 = !(tmp6);
			if ((tmp7)){
				::openfl::display::Stage tmp8 = this->stage;
				::lime::_backend::native::NativeWindow tmp9 = tmp8->window->backend;
				tmp9->setEnableTextEvents(true);
				::openfl::display::Stage tmp10 = this->stage;
				::lime::app::_Event_String_Void tmp11 = tmp10->window->onTextInput;
				Dynamic tmp12 = this->window_onTextInput_dyn();
				bool tmp13 = tmp11->has(tmp12);
				bool tmp14 = !(tmp13);
				if ((tmp14)){
					::openfl::display::Stage tmp15 = this->stage;
					::lime::app::_Event_String_Void tmp16 = tmp15->window->onTextInput;
					Dynamic tmp17 = this->window_onTextInput_dyn();
					tmp16->add(tmp17,null(),null());
					::openfl::display::Stage tmp18 = this->stage;
					::lime::app::_Event_lime_ui_KeyCode_lime_ui_KeyModifier_Void tmp19 = tmp18->window->onKeyDown;
					Dynamic tmp20 = this->window_onKeyDown_dyn();
					tmp19->add(tmp20,null(),null());
				}
				this->__inputEnabled = true;
				this->__startCursorTimer();
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(TextField_obj,__startTextInput,(void))

Void TextField_obj::__stopCursorTimer( ){
{
		::haxe::Timer tmp = this->__cursorTimer;
		bool tmp1 = (tmp != null());
		if ((tmp1)){
			::haxe::Timer tmp2 = this->__cursorTimer;
			tmp2->stop();
			this->__cursorTimer = null();
		}
		bool tmp2 = this->__showCursor;
		if ((tmp2)){
			this->__showCursor = false;
			this->__dirty = true;
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(TextField_obj,__stopCursorTimer,(void))

Void TextField_obj::__stopTextInput( ){
{
		bool tmp = this->__inputEnabled;
		bool tmp1;
		if ((tmp)){
			::openfl::display::Stage tmp2 = this->stage;
			::openfl::display::Stage tmp3 = tmp2;
			tmp1 = (tmp3 != null());
		}
		else{
			tmp1 = false;
		}
		if ((tmp1)){
			::openfl::display::Stage tmp2 = this->stage;
			::lime::_backend::native::NativeWindow tmp3 = tmp2->window->backend;
			tmp3->setEnableTextEvents(false);
			::openfl::display::Stage tmp4 = this->stage;
			::lime::app::_Event_String_Void tmp5 = tmp4->window->onTextInput;
			Dynamic tmp6 = this->window_onTextInput_dyn();
			tmp5->remove(tmp6);
			::openfl::display::Stage tmp7 = this->stage;
			::lime::app::_Event_lime_ui_KeyCode_lime_ui_KeyModifier_Void tmp8 = tmp7->window->onKeyDown;
			Dynamic tmp9 = this->window_onKeyDown_dyn();
			tmp8->remove(tmp9);
			this->__inputEnabled = false;
			this->__stopCursorTimer();
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(TextField_obj,__stopTextInput,(void))

Void TextField_obj::__updateLayout( ){
{
		bool tmp = this->__layoutDirty;
		if ((tmp)){
			::openfl::_internal::text::TextEngine tmp1 = this->__textEngine;
			Float cacheWidth = tmp1->width;
			::openfl::_internal::text::TextEngine tmp2 = this->__textEngine;
			Float cacheHeight = tmp2->height;
			::openfl::_internal::text::TextEngine tmp3 = this->__textEngine;
			tmp3->update();
			::openfl::_internal::text::TextEngine tmp4 = this->__textEngine;
			Dynamic tmp5 = tmp4->autoSize;
			bool tmp6 = (tmp5 != ((Dynamic)((int)2)));
			if ((tmp6)){
				::openfl::_internal::text::TextEngine tmp7 = this->__textEngine;
				Float tmp8 = tmp7->width;
				Float tmp9 = cacheWidth;
				bool tmp10 = (tmp8 != tmp9);
				if ((tmp10)){
					::openfl::_internal::text::TextEngine tmp11 = this->__textEngine;
					Dynamic _g = tmp11->autoSize;
					Dynamic tmp12 = _g;
					switch( (int)(tmp12)){
						case (int)3: {
							::openfl::text::TextField _g1 = hx::ObjectPtr<OBJ_>(this);
							Float tmp13 = _g1->get_x();
							Float tmp14 = cacheWidth;
							::openfl::_internal::text::TextEngine tmp15 = this->__textEngine;
							Float tmp16 = tmp15->width;
							Float tmp17 = (tmp14 - tmp16);
							Float tmp18 = (tmp13 + tmp17);
							_g1->set_x(tmp18);
						}
						;break;
						case (int)0: {
							::openfl::text::TextField _g1 = hx::ObjectPtr<OBJ_>(this);
							Float tmp13 = _g1->get_x();
							Float tmp14 = cacheWidth;
							::openfl::_internal::text::TextEngine tmp15 = this->__textEngine;
							Float tmp16 = tmp15->width;
							Float tmp17 = (tmp14 - tmp16);
							Float tmp18 = (Float(tmp17) / Float((int)2));
							Float tmp19 = (tmp13 + tmp18);
							_g1->set_x(tmp19);
						}
						;break;
						default: {
						}
					}
				}
				::openfl::_internal::text::TextEngine tmp11 = this->__textEngine;
				tmp11->getBounds();
			}
			this->__layoutDirty = false;
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(TextField_obj,__updateLayout,(void))

Void TextField_obj::__updateText( ::String value){
{
		this->__text = value;
		::String tmp = this->__text;
		int tmp1 = tmp.length;
		int tmp2 = this->__caretIndex;
		bool tmp3 = (tmp1 < tmp2);
		if ((tmp3)){
			::String tmp4 = this->__text;
			int tmp5 = this->__caretIndex = tmp4.length;
			this->__selectionIndex = tmp5;
		}
		bool tmp4 = this->__displayAsPassword;
		bool tmp5 = !(tmp4);
		if ((tmp5)){
			::openfl::_internal::text::TextEngine tmp6 = this->__textEngine;
			::String tmp7 = this->__text;
			tmp6->set_text(tmp7);
		}
		else{
			::String tmp6 = this->get_text();
			int length = tmp6.length;
			::String mask = HX_HCSTRING("","\x00","\x00","\x00","\x00");
			{
				int _g = (int)0;
				while((true)){
					bool tmp7 = (_g < length);
					bool tmp8 = !(tmp7);
					if ((tmp8)){
						break;
					}
					int tmp9 = (_g)++;
					int i = tmp9;
					hx::AddEq(mask,HX_HCSTRING("*","\x2a","\x00","\x00","\x00"));
				}
			}
			::openfl::_internal::text::TextEngine tmp7 = this->__textEngine;
			::String tmp8 = mask;
			tmp7->set_text(tmp8);
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(TextField_obj,__updateText,(void))

Void TextField_obj::__updateTransforms( ::openfl::geom::Matrix overrideTransform){
{
		::openfl::geom::Matrix tmp = overrideTransform;
		this->super::__updateTransforms(tmp);
		{
			::openfl::geom::Matrix tmp1 = this->__renderTransform;
			::openfl::geom::Matrix _this = tmp1;
			Float tmp2 = this->__offsetX;
			Float px = tmp2;
			Float tmp3 = this->__offsetY;
			Float py = tmp3;
			Float tmp4 = (px * _this->a);
			Float tmp5 = (py * _this->c);
			Float tmp6 = (tmp4 + tmp5);
			Float tmp7 = _this->tx;
			Float tmp8 = (tmp6 + tmp7);
			_this->tx = tmp8;
			Float tmp9 = (px * _this->b);
			Float tmp10 = (py * _this->d);
			Float tmp11 = (tmp9 + tmp10);
			Float tmp12 = _this->ty;
			Float tmp13 = (tmp11 + tmp12);
			_this->ty = tmp13;
		}
	}
return null();
}


Dynamic TextField_obj::get_antiAliasType( ){
	::openfl::_internal::text::TextEngine tmp = this->__textEngine;
	Dynamic tmp1 = tmp->antiAliasType;
	return tmp1;
}


HX_DEFINE_DYNAMIC_FUNC0(TextField_obj,get_antiAliasType,return )

Dynamic TextField_obj::set_antiAliasType( Dynamic value){
	Dynamic tmp = value;
	::openfl::_internal::text::TextEngine tmp1 = this->__textEngine;
	Dynamic tmp2 = tmp1->antiAliasType;
	bool tmp3 = (tmp != tmp2);
	if ((tmp3)){
	}
	::openfl::_internal::text::TextEngine tmp4 = this->__textEngine;
	Dynamic tmp5 = tmp4->antiAliasType = value;
	return tmp5;
}


HX_DEFINE_DYNAMIC_FUNC1(TextField_obj,set_antiAliasType,return )

Dynamic TextField_obj::get_autoSize( ){
	::openfl::_internal::text::TextEngine tmp = this->__textEngine;
	Dynamic tmp1 = tmp->autoSize;
	return tmp1;
}


HX_DEFINE_DYNAMIC_FUNC0(TextField_obj,get_autoSize,return )

Dynamic TextField_obj::set_autoSize( Dynamic value){
	Dynamic tmp = value;
	::openfl::_internal::text::TextEngine tmp1 = this->__textEngine;
	Dynamic tmp2 = tmp1->autoSize;
	bool tmp3 = (tmp != tmp2);
	if ((tmp3)){
		this->__dirty = true;
		this->__layoutDirty = true;
	}
	::openfl::_internal::text::TextEngine tmp4 = this->__textEngine;
	Dynamic tmp5 = tmp4->autoSize = value;
	return tmp5;
}


HX_DEFINE_DYNAMIC_FUNC1(TextField_obj,set_autoSize,return )

bool TextField_obj::get_background( ){
	::openfl::_internal::text::TextEngine tmp = this->__textEngine;
	bool tmp1 = tmp->background;
	return tmp1;
}


HX_DEFINE_DYNAMIC_FUNC0(TextField_obj,get_background,return )

bool TextField_obj::set_background( bool value){
	bool tmp = value;
	::openfl::_internal::text::TextEngine tmp1 = this->__textEngine;
	bool tmp2 = tmp1->background;
	bool tmp3 = (tmp != tmp2);
	if ((tmp3)){
		this->__dirty = true;
	}
	::openfl::_internal::text::TextEngine tmp4 = this->__textEngine;
	bool tmp5 = tmp4->background = value;
	return tmp5;
}


HX_DEFINE_DYNAMIC_FUNC1(TextField_obj,set_background,return )

int TextField_obj::get_backgroundColor( ){
	::openfl::_internal::text::TextEngine tmp = this->__textEngine;
	int tmp1 = tmp->backgroundColor;
	return tmp1;
}


HX_DEFINE_DYNAMIC_FUNC0(TextField_obj,get_backgroundColor,return )

int TextField_obj::set_backgroundColor( int value){
	int tmp = value;
	::openfl::_internal::text::TextEngine tmp1 = this->__textEngine;
	int tmp2 = tmp1->backgroundColor;
	bool tmp3 = (tmp != tmp2);
	if ((tmp3)){
		this->__dirty = true;
	}
	::openfl::_internal::text::TextEngine tmp4 = this->__textEngine;
	int tmp5 = tmp4->backgroundColor = value;
	return tmp5;
}


HX_DEFINE_DYNAMIC_FUNC1(TextField_obj,set_backgroundColor,return )

bool TextField_obj::get_border( ){
	::openfl::_internal::text::TextEngine tmp = this->__textEngine;
	bool tmp1 = tmp->border;
	return tmp1;
}


HX_DEFINE_DYNAMIC_FUNC0(TextField_obj,get_border,return )

bool TextField_obj::set_border( bool value){
	bool tmp = value;
	::openfl::_internal::text::TextEngine tmp1 = this->__textEngine;
	bool tmp2 = tmp1->border;
	bool tmp3 = (tmp != tmp2);
	if ((tmp3)){
		this->__dirty = true;
	}
	::openfl::_internal::text::TextEngine tmp4 = this->__textEngine;
	bool tmp5 = tmp4->border = value;
	return tmp5;
}


HX_DEFINE_DYNAMIC_FUNC1(TextField_obj,set_border,return )

int TextField_obj::get_borderColor( ){
	::openfl::_internal::text::TextEngine tmp = this->__textEngine;
	int tmp1 = tmp->borderColor;
	return tmp1;
}


HX_DEFINE_DYNAMIC_FUNC0(TextField_obj,get_borderColor,return )

int TextField_obj::set_borderColor( int value){
	int tmp = value;
	::openfl::_internal::text::TextEngine tmp1 = this->__textEngine;
	int tmp2 = tmp1->borderColor;
	bool tmp3 = (tmp != tmp2);
	if ((tmp3)){
		this->__dirty = true;
	}
	::openfl::_internal::text::TextEngine tmp4 = this->__textEngine;
	int tmp5 = tmp4->borderColor = value;
	return tmp5;
}


HX_DEFINE_DYNAMIC_FUNC1(TextField_obj,set_borderColor,return )

int TextField_obj::get_bottomScrollV( ){
	this->__updateLayout();
	::openfl::_internal::text::TextEngine tmp = this->__textEngine;
	int tmp1 = tmp->bottomScrollV;
	return tmp1;
}


HX_DEFINE_DYNAMIC_FUNC0(TextField_obj,get_bottomScrollV,return )

int TextField_obj::get_caretIndex( ){
	int tmp = this->__caretIndex;
	return tmp;
}


HX_DEFINE_DYNAMIC_FUNC0(TextField_obj,get_caretIndex,return )

::openfl::text::TextFormat TextField_obj::get_defaultTextFormat( ){
	::openfl::text::TextFormat tmp = this->__textFormat;
	::openfl::text::TextFormat tmp1 = tmp->clone();
	return tmp1;
}


HX_DEFINE_DYNAMIC_FUNC0(TextField_obj,get_defaultTextFormat,return )

::openfl::text::TextFormat TextField_obj::set_defaultTextFormat( ::openfl::text::TextFormat value){
	::openfl::text::TextFormat tmp = this->__textFormat;
	::openfl::text::TextFormat tmp1 = value;
	tmp->__merge(tmp1);
	this->__layoutDirty = true;
	this->__dirty = true;
	::openfl::text::TextFormat tmp2 = value;
	return tmp2;
}


HX_DEFINE_DYNAMIC_FUNC1(TextField_obj,set_defaultTextFormat,return )

bool TextField_obj::get_displayAsPassword( ){
	bool tmp = this->__displayAsPassword;
	return tmp;
}


HX_DEFINE_DYNAMIC_FUNC0(TextField_obj,get_displayAsPassword,return )

bool TextField_obj::set_displayAsPassword( bool value){
	bool tmp = value;
	bool tmp1 = this->__displayAsPassword;
	bool tmp2 = (tmp != tmp1);
	if ((tmp2)){
		this->__dirty = true;
		this->__layoutDirty = true;
		this->__displayAsPassword = value;
		::String tmp3 = this->__text;
		this->__updateText(tmp3);
	}
	bool tmp3 = value;
	return tmp3;
}


HX_DEFINE_DYNAMIC_FUNC1(TextField_obj,set_displayAsPassword,return )

bool TextField_obj::get_embedFonts( ){
	::openfl::_internal::text::TextEngine tmp = this->__textEngine;
	bool tmp1 = tmp->embedFonts;
	return tmp1;
}


HX_DEFINE_DYNAMIC_FUNC0(TextField_obj,get_embedFonts,return )

bool TextField_obj::set_embedFonts( bool value){
	::openfl::_internal::text::TextEngine tmp = this->__textEngine;
	bool tmp1 = tmp->embedFonts = value;
	return tmp1;
}


HX_DEFINE_DYNAMIC_FUNC1(TextField_obj,set_embedFonts,return )

Dynamic TextField_obj::get_gridFitType( ){
	::openfl::_internal::text::TextEngine tmp = this->__textEngine;
	Dynamic tmp1 = tmp->gridFitType;
	return tmp1;
}


HX_DEFINE_DYNAMIC_FUNC0(TextField_obj,get_gridFitType,return )

Dynamic TextField_obj::set_gridFitType( Dynamic value){
	::openfl::_internal::text::TextEngine tmp = this->__textEngine;
	Dynamic tmp1 = tmp->gridFitType = value;
	return tmp1;
}


HX_DEFINE_DYNAMIC_FUNC1(TextField_obj,set_gridFitType,return )

Float TextField_obj::get_height( ){
	this->__updateLayout();
	::openfl::_internal::text::TextEngine tmp = this->__textEngine;
	Float tmp1 = tmp->height;
	Float tmp2 = this->get_scaleY();
	Float tmp3 = ::Math_obj::abs(tmp2);
	Float tmp4 = (tmp1 * tmp3);
	return tmp4;
}


Float TextField_obj::set_height( Float value){
	Float tmp = value;
	::openfl::_internal::text::TextEngine tmp1 = this->__textEngine;
	Float tmp2 = tmp1->height;
	bool tmp3 = (tmp != tmp2);
	if ((tmp3)){
		this->__setTransformDirty();
		this->__dirty = true;
		this->__layoutDirty = true;
		::openfl::_internal::text::TextEngine tmp4 = this->__textEngine;
		tmp4->height = value;
	}
	::openfl::_internal::text::TextEngine tmp4 = this->__textEngine;
	Float tmp5 = tmp4->height;
	Float tmp6 = this->get_scaleY();
	Float tmp7 = ::Math_obj::abs(tmp6);
	Float tmp8 = (tmp5 * tmp7);
	return tmp8;
}


::String TextField_obj::get_htmlText( ){
	::String tmp = this->__text;
	return tmp;
}


HX_DEFINE_DYNAMIC_FUNC0(TextField_obj,get_htmlText,return )

::String TextField_obj::set_htmlText( ::String value){
	bool tmp = this->__isHTML;
	bool tmp1 = tmp;
	bool tmp2 = !(tmp1);
	bool tmp3 = !(tmp2);
	bool tmp4;
	if ((tmp3)){
		::String tmp5 = this->__text;
		::String tmp6 = tmp5;
		::String tmp7 = value;
		tmp4 = (tmp6 != tmp7);
	}
	else{
		tmp4 = true;
	}
	if ((tmp4)){
		this->__dirty = true;
		this->__layoutDirty = true;
	}
	this->__isHTML = true;
	{
		::EReg tmp5 = ::openfl::text::TextField_obj::__regexBreakTag;
		::String tmp6 = value;
		::String tmp7 = tmp5->replace(tmp6,HX_HCSTRING("\n","\x0a","\x00","\x00","\x00"));
		value = tmp7;
		::EReg tmp8 = ::openfl::text::TextField_obj::__regexEntities->__get((int)0).StaticCast< ::EReg >();
		::String tmp9 = value;
		::String tmp10 = tmp8->replace(tmp9,HX_HCSTRING("\"","\x22","\x00","\x00","\x00"));
		value = tmp10;
		::EReg tmp11 = ::openfl::text::TextField_obj::__regexEntities->__get((int)1).StaticCast< ::EReg >();
		::String tmp12 = value;
		::String tmp13 = tmp11->replace(tmp12,HX_HCSTRING("'","\x27","\x00","\x00","\x00"));
		value = tmp13;
		::EReg tmp14 = ::openfl::text::TextField_obj::__regexEntities->__get((int)2).StaticCast< ::EReg >();
		::String tmp15 = value;
		::String tmp16 = tmp14->replace(tmp15,HX_HCSTRING("&","\x26","\x00","\x00","\x00"));
		value = tmp16;
		Array< ::String > segments = value.split(HX_HCSTRING("<","\x3c","\x00","\x00","\x00"));
		bool tmp17 = (segments->length == (int)1);
		if ((tmp17)){
			::EReg tmp18 = ::openfl::text::TextField_obj::__regexHTMLTag;
			::String tmp19 = value;
			::String tmp20 = tmp18->replace(tmp19,HX_HCSTRING("","\x00","\x00","\x00","\x00"));
			value = tmp20;
			::openfl::_internal::text::TextEngine tmp21 = this->__textEngine;
			int tmp22 = tmp21->textFormatRanges->get_length();
			bool tmp23 = (tmp22 > (int)1);
			if ((tmp23)){
				::openfl::_internal::text::TextEngine tmp24 = this->__textEngine;
				int tmp25 = tmp24->textFormatRanges->get_length();
				int tmp26 = (tmp25 - (int)1);
				int len = tmp26;
				::openfl::_internal::text::TextEngine tmp27 = this->__textEngine;
				int tmp28 = len;
				::openfl::_Vector::IVector tmp29 = tmp27->textFormatRanges->splice((int)1,tmp28);
				tmp29;
			}
			::EReg tmp24 = ::openfl::text::TextField_obj::__regexEntities->__get((int)3).StaticCast< ::EReg >();
			::String tmp25 = value;
			::String tmp26 = tmp24->replace(tmp25,HX_HCSTRING("<","\x3c","\x00","\x00","\x00"));
			value = tmp26;
			::EReg tmp27 = ::openfl::text::TextField_obj::__regexEntities->__get((int)4).StaticCast< ::EReg >();
			::String tmp28 = value;
			::String tmp29 = tmp27->replace(tmp28,HX_HCSTRING(">","\x3e","\x00","\x00","\x00"));
			value = tmp29;
			::openfl::_internal::text::TextEngine tmp30 = this->__textEngine;
			::openfl::_internal::text::TextFormatRange tmp31 = tmp30->textFormatRanges->get((int)0);
			::openfl::_internal::text::TextFormatRange range = tmp31;
			::openfl::text::TextFormat tmp32 = this->__textFormat;
			range->format = tmp32;
			range->start = (int)0;
			range->end = value.length;
			::String tmp33 = value;
			this->__updateText(tmp33);
			::String tmp34 = value;
			return tmp34;
		}
		else{
			{
				::openfl::_internal::text::TextEngine tmp18 = this->__textEngine;
				int tmp19 = tmp18->textFormatRanges->get_length();
				int len = tmp19;
				::openfl::_internal::text::TextEngine tmp20 = this->__textEngine;
				int tmp21 = len;
				::openfl::_Vector::IVector tmp22 = tmp20->textFormatRanges->splice((int)0,tmp21);
				tmp22;
			}
			value = HX_HCSTRING("","\x00","\x00","\x00","\x00");
			::String segment;
			{
				int _g1 = (int)0;
				int _g = segments->length;
				while((true)){
					bool tmp18 = (_g1 < _g);
					bool tmp19 = !(tmp18);
					if ((tmp19)){
						break;
					}
					int tmp20 = (_g1)++;
					int i = tmp20;
					::String tmp21 = segments->__get(i);
					segment = tmp21;
					::EReg tmp22 = ::openfl::text::TextField_obj::__regexEntities->__get((int)3).StaticCast< ::EReg >();
					::String tmp23 = segment;
					::String tmp24 = tmp22->replace(tmp23,HX_HCSTRING("<","\x3c","\x00","\x00","\x00"));
					segment = tmp24;
					::EReg tmp25 = ::openfl::text::TextField_obj::__regexEntities->__get((int)4).StaticCast< ::EReg >();
					::String tmp26 = segment;
					::String tmp27 = tmp25->replace(tmp26,HX_HCSTRING(">","\x3e","\x00","\x00","\x00"));
					segment = tmp27;
					::String tmp28 = segment;
					segments[i] = tmp28;
				}
			}
			::openfl::text::TextFormat tmp18 = this->__textFormat;
			::openfl::text::TextFormat tmp19 = tmp18->clone();
			Array< ::Dynamic > formatStack = Array_obj< ::Dynamic >::__new().Add(tmp19);
			::String sub;
			bool noLineBreak = false;
			{
				int _g = (int)0;
				while((true)){
					bool tmp20 = (_g < segments->length);
					bool tmp21 = !(tmp20);
					if ((tmp21)){
						break;
					}
					::String tmp22 = segments->__get(_g);
					::String segment1 = tmp22;
					++(_g);
					bool tmp23 = (segment1 == HX_HCSTRING("","\x00","\x00","\x00","\x00"));
					if ((tmp23)){
						continue;
					}
					::String tmp24 = segment1.substr((int)0,(int)1);
					bool tmp25 = (tmp24 == HX_HCSTRING("/","\x2f","\x00","\x00","\x00"));
					bool isClosingTag = tmp25;
					int tmp26 = segment1.indexOf(HX_HCSTRING(">","\x3e","\x00","\x00","\x00"),null());
					int tagEndIndex = tmp26;
					int tmp27 = (tagEndIndex + (int)1);
					int start = tmp27;
					int tmp28 = segment1.indexOf(HX_HCSTRING(" ","\x20","\x00","\x00","\x00"),null());
					int spaceIndex = tmp28;
					bool tmp29 = isClosingTag;
					int tmp30;
					if ((tmp29)){
						tmp30 = (int)1;
					}
					else{
						tmp30 = (int)0;
					}
					int tmp31 = spaceIndex;
					int tmp32 = (int)-1;
					bool tmp33 = (tmp31 > tmp32);
					bool tmp34;
					if ((tmp33)){
						tmp34 = (spaceIndex < tagEndIndex);
					}
					else{
						tmp34 = false;
					}
					Dynamic tmp35;
					if ((tmp34)){
						tmp35 = spaceIndex;
					}
					else{
						tmp35 = tagEndIndex;
					}
					::String tmp36 = segment1.substring(tmp30,tmp35);
					::String tagName = tmp36;
					::openfl::text::TextFormat format;
					bool tmp37 = isClosingTag;
					if ((tmp37)){
						formatStack->pop().StaticCast< ::openfl::text::TextFormat >();
						int tmp38 = (formatStack->length - (int)1);
						::openfl::text::TextFormat tmp39 = formatStack->__get(tmp38).StaticCast< ::openfl::text::TextFormat >();
						::openfl::text::TextFormat tmp40 = tmp39->clone();
						format = tmp40;
						::String tmp41 = tagName.toLowerCase();
						bool tmp42 = (tmp41 == HX_HCSTRING("p","\x70","\x00","\x00","\x00"));
						bool tmp43;
						if ((tmp42)){
							::openfl::_internal::text::TextEngine tmp44 = this->__textEngine;
							::openfl::_internal::text::TextEngine tmp45 = tmp44;
							int tmp46 = tmp45->textFormatRanges->get_length();
							int tmp47 = tmp46;
							tmp43 = (tmp47 > (int)0);
						}
						else{
							tmp43 = false;
						}
						if ((tmp43)){
							hx::AddEq(value,HX_HCSTRING("\n","\x0a","\x00","\x00","\x00"));
							noLineBreak = true;
						}
						bool tmp44 = (start < segment1.length);
						if ((tmp44)){
							int tmp45 = start;
							::String tmp46 = segment1.substr(tmp45,null());
							sub = tmp46;
							{
								::openfl::text::TextFormat tmp47 = format;
								int tmp48 = value.length;
								int tmp49 = (value.length + sub.length);
								::openfl::_internal::text::TextFormatRange tmp50 = ::openfl::_internal::text::TextFormatRange_obj::__new(tmp47,tmp48,tmp49);
								::openfl::_internal::text::TextFormatRange x = tmp50;
								::openfl::_internal::text::TextEngine tmp51 = this->__textEngine;
								::openfl::_internal::text::TextFormatRange tmp52 = x;
								tmp51->textFormatRanges->push(tmp52);
							}
							hx::AddEq(value,sub);
							noLineBreak = false;
						}
					}
					else{
						int tmp38 = (formatStack->length - (int)1);
						::openfl::text::TextFormat tmp39 = formatStack->__get(tmp38).StaticCast< ::openfl::text::TextFormat >();
						::openfl::text::TextFormat tmp40 = tmp39->clone();
						format = tmp40;
						bool tmp41 = (tagEndIndex > (int)-1);
						if ((tmp41)){
							{
								::String tmp42 = tagName.toLowerCase();
								::String _g1 = tmp42;
								::String tmp43 = _g1;
								::String _switch_2 = (tmp43);
								if (  ( _switch_2==HX_HCSTRING("a","\x61","\x00","\x00","\x00"))){
									::EReg tmp44 = ::openfl::text::TextField_obj::__regexHref;
									::String tmp45 = segment1;
									bool tmp46 = tmp44->match(tmp45);
									if ((tmp46)){
										::EReg tmp47 = ::openfl::text::TextField_obj::__regexHref;
										::String tmp48 = this->__getAttributeMatch(tmp47);
										format->url = tmp48;
									}
								}
								else if (  ( _switch_2==HX_HCSTRING("p","\x70","\x00","\x00","\x00"))){
									::openfl::_internal::text::TextEngine tmp44 = this->__textEngine;
									int tmp45 = tmp44->textFormatRanges->get_length();
									bool tmp46 = (tmp45 > (int)0);
									bool tmp47;
									if ((tmp46)){
										bool tmp48 = noLineBreak;
										bool tmp49 = tmp48;
										tmp47 = !(tmp49);
									}
									else{
										tmp47 = false;
									}
									if ((tmp47)){
										hx::AddEq(value,HX_HCSTRING("\n","\x0a","\x00","\x00","\x00"));
									}
									::EReg tmp48 = ::openfl::text::TextField_obj::__regexAlign;
									::String tmp49 = segment1;
									bool tmp50 = tmp48->match(tmp49);
									if ((tmp50)){
										::EReg tmp51 = ::openfl::text::TextField_obj::__regexAlign;
										::String tmp52 = this->__getAttributeMatch(tmp51);
										::String tmp53 = tmp52.toLowerCase();
										Dynamic tmp54 = ::openfl::text::_TextFormatAlign::TextFormatAlign_Impl__obj::fromString(tmp53);
										format->align = tmp54;
									}
								}
								else if (  ( _switch_2==HX_HCSTRING("font","\xcf","\x5d","\xc0","\x43"))){
									::EReg tmp44 = ::openfl::text::TextField_obj::__regexFace;
									::String tmp45 = segment1;
									bool tmp46 = tmp44->match(tmp45);
									if ((tmp46)){
										::EReg tmp47 = ::openfl::text::TextField_obj::__regexFace;
										::String tmp48 = this->__getAttributeMatch(tmp47);
										format->font = tmp48;
									}
									::EReg tmp47 = ::openfl::text::TextField_obj::__regexColor;
									::String tmp48 = segment1;
									bool tmp49 = tmp47->match(tmp48);
									if ((tmp49)){
										::EReg tmp50 = ::openfl::text::TextField_obj::__regexColor;
										::String tmp51 = this->__getAttributeMatch(tmp50);
										::String tmp52 = (HX_HCSTRING("0x","\x48","\x2a","\x00","\x00") + tmp51);
										Dynamic tmp53 = ::Std_obj::parseInt(tmp52);
										format->color = tmp53;
									}
									::EReg tmp50 = ::openfl::text::TextField_obj::__regexSize;
									::String tmp51 = segment1;
									bool tmp52 = tmp50->match(tmp51);
									if ((tmp52)){
										::EReg tmp53 = ::openfl::text::TextField_obj::__regexSize;
										::String tmp54 = this->__getAttributeMatch(tmp53);
										::String sizeAttr = tmp54;
										Dynamic tmp55 = sizeAttr.charCodeAt((int)0);
										Dynamic firstChar = tmp55;
										bool tmp56 = (firstChar == (int)43);
										bool tmp57 = !(tmp56);
										bool tmp58;
										if ((tmp57)){
											tmp58 = (firstChar == (int)45);
										}
										else{
											tmp58 = true;
										}
										if ((tmp58)){
											bool tmp59 = (formatStack->length >= (int)2);
											::openfl::text::TextFormat tmp60;
											if ((tmp59)){
												int tmp61 = (formatStack->length - (int)2);
												tmp60 = formatStack->__get(tmp61).StaticCast< ::openfl::text::TextFormat >();
											}
											else{
												tmp60 = this->__textFormat;
											}
											::openfl::text::TextFormat parentFormat = tmp60;
											Dynamic tmp61 = parentFormat->size;
											::String tmp62 = sizeAttr;
											Dynamic tmp63 = ::Std_obj::parseInt(tmp62);
											int tmp64 = (tmp61 + tmp63);
											format->size = tmp64;
										}
										else{
											::String tmp59 = sizeAttr;
											Dynamic tmp60 = ::Std_obj::parseInt(tmp59);
											format->size = tmp60;
										}
									}
								}
								else if (  ( _switch_2==HX_HCSTRING("b","\x62","\x00","\x00","\x00"))){
									format->bold = true;
								}
								else if (  ( _switch_2==HX_HCSTRING("u","\x75","\x00","\x00","\x00"))){
									format->underline = true;
								}
								else if (  ( _switch_2==HX_HCSTRING("i","\x69","\x00","\x00","\x00")) ||  ( _switch_2==HX_HCSTRING("em","\x68","\x58","\x00","\x00"))){
									format->italic = true;
								}
								else if (  ( _switch_2==HX_HCSTRING("textformat","\xa4","\x9b","\xea","\xff"))){
									::EReg tmp44 = ::openfl::text::TextField_obj::__regexBlockIndent;
									::String tmp45 = segment1;
									bool tmp46 = tmp44->match(tmp45);
									if ((tmp46)){
										::EReg tmp47 = ::openfl::text::TextField_obj::__regexBlockIndent;
										::String tmp48 = this->__getAttributeMatch(tmp47);
										Dynamic tmp49 = ::Std_obj::parseInt(tmp48);
										format->blockIndent = tmp49;
									}
									::EReg tmp47 = ::openfl::text::TextField_obj::__regexIndent;
									::String tmp48 = segment1;
									bool tmp49 = tmp47->match(tmp48);
									if ((tmp49)){
										::EReg tmp50 = ::openfl::text::TextField_obj::__regexIndent;
										::String tmp51 = this->__getAttributeMatch(tmp50);
										Dynamic tmp52 = ::Std_obj::parseInt(tmp51);
										format->indent = tmp52;
									}
									::EReg tmp50 = ::openfl::text::TextField_obj::__regexLeading;
									::String tmp51 = segment1;
									bool tmp52 = tmp50->match(tmp51);
									if ((tmp52)){
										::EReg tmp53 = ::openfl::text::TextField_obj::__regexLeading;
										::String tmp54 = this->__getAttributeMatch(tmp53);
										Dynamic tmp55 = ::Std_obj::parseInt(tmp54);
										format->leading = tmp55;
									}
									::EReg tmp53 = ::openfl::text::TextField_obj::__regexLeftMargin;
									::String tmp54 = segment1;
									bool tmp55 = tmp53->match(tmp54);
									if ((tmp55)){
										::EReg tmp56 = ::openfl::text::TextField_obj::__regexLeftMargin;
										::String tmp57 = this->__getAttributeMatch(tmp56);
										Dynamic tmp58 = ::Std_obj::parseInt(tmp57);
										format->leftMargin = tmp58;
									}
									::EReg tmp56 = ::openfl::text::TextField_obj::__regexRightMargin;
									::String tmp57 = segment1;
									bool tmp58 = tmp56->match(tmp57);
									if ((tmp58)){
										::EReg tmp59 = ::openfl::text::TextField_obj::__regexRightMargin;
										::String tmp60 = this->__getAttributeMatch(tmp59);
										Dynamic tmp61 = ::Std_obj::parseInt(tmp60);
										format->rightMargin = tmp61;
									}
									::EReg tmp59 = ::openfl::text::TextField_obj::__regexTabStops;
									::String tmp60 = segment1;
									bool tmp61 = tmp59->match(tmp60);
									if ((tmp61)){
										::EReg tmp62 = ::openfl::text::TextField_obj::__regexTabStops;
										::String tmp63 = this->__getAttributeMatch(tmp62);
										Array< ::String > values = tmp63.split(HX_HCSTRING(" ","\x20","\x00","\x00","\x00"));
										Array< ::Dynamic > tabStops = Array_obj< ::Dynamic >::__new();
										{
											int _g2 = (int)0;
											while((true)){
												bool tmp64 = (_g2 < values->length);
												bool tmp65 = !(tmp64);
												if ((tmp65)){
													break;
												}
												::String tmp66 = values->__get(_g2);
												::String stop = tmp66;
												++(_g2);
												::String tmp67 = stop;
												Dynamic tmp68 = ::Std_obj::parseInt(tmp67);
												tabStops->push(tmp68);
											}
										}
										format->tabStops = tabStops;
									}
								}
							}
							::openfl::text::TextFormat tmp42 = format;
							formatStack->push(tmp42);
							bool tmp43 = (start < segment1.length);
							if ((tmp43)){
								int tmp44 = start;
								::String tmp45 = segment1.substring(tmp44,null());
								sub = tmp45;
								{
									::openfl::text::TextFormat tmp46 = format;
									int tmp47 = value.length;
									int tmp48 = (value.length + sub.length);
									::openfl::_internal::text::TextFormatRange tmp49 = ::openfl::_internal::text::TextFormatRange_obj::__new(tmp46,tmp47,tmp48);
									::openfl::_internal::text::TextFormatRange x = tmp49;
									::openfl::_internal::text::TextEngine tmp50 = this->__textEngine;
									::openfl::_internal::text::TextFormatRange tmp51 = x;
									tmp50->textFormatRanges->push(tmp51);
								}
								hx::AddEq(value,sub);
								noLineBreak = false;
							}
						}
						else{
							{
								::openfl::text::TextFormat tmp42 = format;
								int tmp43 = value.length;
								int tmp44 = (value.length + segment1.length);
								::openfl::_internal::text::TextFormatRange tmp45 = ::openfl::_internal::text::TextFormatRange_obj::__new(tmp42,tmp43,tmp44);
								::openfl::_internal::text::TextFormatRange x = tmp45;
								::openfl::_internal::text::TextEngine tmp46 = this->__textEngine;
								::openfl::_internal::text::TextFormatRange tmp47 = x;
								tmp46->textFormatRanges->push(tmp47);
							}
							hx::AddEq(value,segment1);
							noLineBreak = false;
						}
					}
				}
			}
			::openfl::_internal::text::TextEngine tmp20 = this->__textEngine;
			int tmp21 = tmp20->textFormatRanges->get_length();
			bool tmp22 = (tmp21 == (int)0);
			if ((tmp22)){
				::openfl::text::TextFormat tmp23 = formatStack->__get((int)0).StaticCast< ::openfl::text::TextFormat >();
				::openfl::_internal::text::TextFormatRange tmp24 = ::openfl::_internal::text::TextFormatRange_obj::__new(tmp23,(int)0,(int)0);
				::openfl::_internal::text::TextFormatRange x = tmp24;
				::openfl::_internal::text::TextEngine tmp25 = this->__textEngine;
				::openfl::_internal::text::TextFormatRange tmp26 = x;
				tmp25->textFormatRanges->push(tmp26);
			}
		}
	}
	::String tmp5 = value;
	this->__updateText(tmp5);
	::String tmp6 = value;
	return tmp6;
}


HX_DEFINE_DYNAMIC_FUNC1(TextField_obj,set_htmlText,return )

int TextField_obj::get_length( ){
	::String tmp = this->__text;
	bool tmp1 = (tmp != null());
	if ((tmp1)){
		::String tmp2 = this->__text;
		int tmp3 = tmp2.length;
		return tmp3;
	}
	return (int)0;
}


HX_DEFINE_DYNAMIC_FUNC0(TextField_obj,get_length,return )

int TextField_obj::get_maxChars( ){
	::openfl::_internal::text::TextEngine tmp = this->__textEngine;
	int tmp1 = tmp->maxChars;
	return tmp1;
}


HX_DEFINE_DYNAMIC_FUNC0(TextField_obj,get_maxChars,return )

int TextField_obj::set_maxChars( int value){
	int tmp = value;
	::openfl::_internal::text::TextEngine tmp1 = this->__textEngine;
	int tmp2 = tmp1->maxChars;
	bool tmp3 = (tmp != tmp2);
	if ((tmp3)){
		this->__dirty = true;
		this->__layoutDirty = true;
	}
	::openfl::_internal::text::TextEngine tmp4 = this->__textEngine;
	int tmp5 = tmp4->maxChars = value;
	return tmp5;
}


HX_DEFINE_DYNAMIC_FUNC1(TextField_obj,set_maxChars,return )

int TextField_obj::get_maxScrollH( ){
	this->__updateLayout();
	::openfl::_internal::text::TextEngine tmp = this->__textEngine;
	int tmp1 = tmp->maxScrollH;
	return tmp1;
}


HX_DEFINE_DYNAMIC_FUNC0(TextField_obj,get_maxScrollH,return )

int TextField_obj::get_maxScrollV( ){
	this->__updateLayout();
	::openfl::_internal::text::TextEngine tmp = this->__textEngine;
	int tmp1 = tmp->maxScrollV;
	return tmp1;
}


HX_DEFINE_DYNAMIC_FUNC0(TextField_obj,get_maxScrollV,return )

bool TextField_obj::get_mouseWheelEnabled( ){
	bool tmp = this->__mouseWheelEnabled;
	return tmp;
}


HX_DEFINE_DYNAMIC_FUNC0(TextField_obj,get_mouseWheelEnabled,return )

bool TextField_obj::set_mouseWheelEnabled( bool value){
	bool tmp = this->__mouseWheelEnabled = value;
	return tmp;
}


HX_DEFINE_DYNAMIC_FUNC1(TextField_obj,set_mouseWheelEnabled,return )

bool TextField_obj::get_multiline( ){
	::openfl::_internal::text::TextEngine tmp = this->__textEngine;
	bool tmp1 = tmp->multiline;
	return tmp1;
}


HX_DEFINE_DYNAMIC_FUNC0(TextField_obj,get_multiline,return )

bool TextField_obj::set_multiline( bool value){
	bool tmp = value;
	::openfl::_internal::text::TextEngine tmp1 = this->__textEngine;
	bool tmp2 = tmp1->multiline;
	bool tmp3 = (tmp != tmp2);
	if ((tmp3)){
		this->__dirty = true;
		this->__layoutDirty = true;
	}
	::openfl::_internal::text::TextEngine tmp4 = this->__textEngine;
	bool tmp5 = tmp4->multiline = value;
	return tmp5;
}


HX_DEFINE_DYNAMIC_FUNC1(TextField_obj,set_multiline,return )

int TextField_obj::get_numLines( ){
	this->__updateLayout();
	::openfl::_internal::text::TextEngine tmp = this->__textEngine;
	int tmp1 = tmp->numLines;
	return tmp1;
}


HX_DEFINE_DYNAMIC_FUNC0(TextField_obj,get_numLines,return )

::String TextField_obj::get_restrict( ){
	::openfl::_internal::text::TextEngine tmp = this->__textEngine;
	::String tmp1 = tmp->restrict;
	return tmp1;
}


HX_DEFINE_DYNAMIC_FUNC0(TextField_obj,get_restrict,return )

::String TextField_obj::set_restrict( ::String value){
	::openfl::_internal::text::TextEngine tmp = this->__textEngine;
	::String tmp1 = value;
	::String tmp2 = tmp->set_restrict(tmp1);
	return tmp2;
}


HX_DEFINE_DYNAMIC_FUNC1(TextField_obj,set_restrict,return )

int TextField_obj::get_scrollH( ){
	::openfl::_internal::text::TextEngine tmp = this->__textEngine;
	int tmp1 = tmp->scrollH;
	return tmp1;
}


HX_DEFINE_DYNAMIC_FUNC0(TextField_obj,get_scrollH,return )

int TextField_obj::set_scrollH( int value){
	this->__updateLayout();
	int tmp = value;
	::openfl::_internal::text::TextEngine tmp1 = this->__textEngine;
	int tmp2 = tmp1->maxScrollH;
	bool tmp3 = (tmp > tmp2);
	if ((tmp3)){
		::openfl::_internal::text::TextEngine tmp4 = this->__textEngine;
		value = tmp4->maxScrollH;
	}
	bool tmp4 = (value < (int)0);
	if ((tmp4)){
		value = (int)0;
	}
	int tmp5 = value;
	::openfl::_internal::text::TextEngine tmp6 = this->__textEngine;
	int tmp7 = tmp6->scrollH;
	bool tmp8 = (tmp5 != tmp7);
	if ((tmp8)){
		this->__dirty = true;
	}
	::openfl::_internal::text::TextEngine tmp9 = this->__textEngine;
	int tmp10 = tmp9->scrollH = value;
	return tmp10;
}


HX_DEFINE_DYNAMIC_FUNC1(TextField_obj,set_scrollH,return )

int TextField_obj::get_scrollV( ){
	::openfl::_internal::text::TextEngine tmp = this->__textEngine;
	int tmp1 = tmp->scrollV;
	return tmp1;
}


HX_DEFINE_DYNAMIC_FUNC0(TextField_obj,get_scrollV,return )

int TextField_obj::set_scrollV( int value){
	this->__updateLayout();
	int tmp = value;
	::openfl::_internal::text::TextEngine tmp1 = this->__textEngine;
	int tmp2 = tmp1->maxScrollV;
	bool tmp3 = (tmp > tmp2);
	if ((tmp3)){
		::openfl::_internal::text::TextEngine tmp4 = this->__textEngine;
		value = tmp4->maxScrollV;
	}
	bool tmp4 = (value < (int)1);
	if ((tmp4)){
		value = (int)1;
	}
	int tmp5 = value;
	::openfl::_internal::text::TextEngine tmp6 = this->__textEngine;
	int tmp7 = tmp6->scrollV;
	bool tmp8 = (tmp5 != tmp7);
	if ((tmp8)){
		this->__dirty = true;
	}
	::openfl::_internal::text::TextEngine tmp9 = this->__textEngine;
	int tmp10 = tmp9->scrollV = value;
	return tmp10;
}


HX_DEFINE_DYNAMIC_FUNC1(TextField_obj,set_scrollV,return )

bool TextField_obj::get_selectable( ){
	::openfl::_internal::text::TextEngine tmp = this->__textEngine;
	bool tmp1 = tmp->selectable;
	return tmp1;
}


HX_DEFINE_DYNAMIC_FUNC0(TextField_obj,get_selectable,return )

bool TextField_obj::set_selectable( bool value){
	bool tmp = value;
	::openfl::_internal::text::TextEngine tmp1 = this->__textEngine;
	bool tmp2 = tmp1->selectable;
	bool tmp3 = (tmp != tmp2);
	bool tmp4;
	if ((tmp3)){
		Dynamic tmp5 = this->get_type();
		Dynamic tmp6 = tmp5;
		tmp4 = (tmp6 == ((Dynamic)((int)1)));
	}
	else{
		tmp4 = false;
	}
	if ((tmp4)){
		::openfl::display::Stage tmp5 = this->stage;
		bool tmp6 = (tmp5 != null());
		bool tmp7;
		if ((tmp6)){
			::openfl::display::Stage tmp8 = this->stage;
			::openfl::display::Stage tmp9 = tmp8;
			::openfl::display::InteractiveObject tmp10 = tmp9->get_focus();
			::openfl::display::InteractiveObject tmp11 = tmp10;
			tmp7 = (tmp11 == hx::ObjectPtr<OBJ_>(this));
		}
		else{
			tmp7 = false;
		}
		if ((tmp7)){
			this->__startTextInput();
		}
		else{
			bool tmp8 = value;
			bool tmp9 = !(tmp8);
			if ((tmp9)){
				this->__stopTextInput();
			}
		}
	}
	::openfl::_internal::text::TextEngine tmp5 = this->__textEngine;
	bool tmp6 = tmp5->selectable = value;
	return tmp6;
}


HX_DEFINE_DYNAMIC_FUNC1(TextField_obj,set_selectable,return )

int TextField_obj::get_selectionBeginIndex( ){
	int tmp = this->__caretIndex;
	int tmp1 = this->__selectionIndex;
	Float tmp2 = ::Math_obj::min(tmp,tmp1);
	int tmp3 = ::Std_obj::_int(tmp2);
	return tmp3;
}


HX_DEFINE_DYNAMIC_FUNC0(TextField_obj,get_selectionBeginIndex,return )

int TextField_obj::get_selectionEndIndex( ){
	int tmp = this->__caretIndex;
	int tmp1 = this->__selectionIndex;
	Float tmp2 = ::Math_obj::max(tmp,tmp1);
	int tmp3 = ::Std_obj::_int(tmp2);
	return tmp3;
}


HX_DEFINE_DYNAMIC_FUNC0(TextField_obj,get_selectionEndIndex,return )

Float TextField_obj::get_sharpness( ){
	::openfl::_internal::text::TextEngine tmp = this->__textEngine;
	Float tmp1 = tmp->sharpness;
	return tmp1;
}


HX_DEFINE_DYNAMIC_FUNC0(TextField_obj,get_sharpness,return )

Float TextField_obj::set_sharpness( Float value){
	Float tmp = value;
	::openfl::_internal::text::TextEngine tmp1 = this->__textEngine;
	Float tmp2 = tmp1->sharpness;
	bool tmp3 = (tmp != tmp2);
	if ((tmp3)){
		this->__dirty = true;
	}
	::openfl::_internal::text::TextEngine tmp4 = this->__textEngine;
	Float tmp5 = tmp4->sharpness = value;
	return tmp5;
}


HX_DEFINE_DYNAMIC_FUNC1(TextField_obj,set_sharpness,return )

::String TextField_obj::get_text( ){
	::String tmp = this->__text;
	return tmp;
}


HX_DEFINE_DYNAMIC_FUNC0(TextField_obj,get_text,return )

::String TextField_obj::set_text( ::String value){
	bool tmp = this->__isHTML;
	bool tmp1 = !(tmp);
	bool tmp2;
	if ((tmp1)){
		::String tmp3 = this->__text;
		::String tmp4 = tmp3;
		::String tmp5 = value;
		tmp2 = (tmp4 != tmp5);
	}
	else{
		tmp2 = true;
	}
	if ((tmp2)){
		this->__dirty = true;
		this->__layoutDirty = true;
	}
	else{
		::String tmp3 = value;
		return tmp3;
	}
	::openfl::_internal::text::TextEngine tmp3 = this->__textEngine;
	int tmp4 = tmp3->textFormatRanges->get_length();
	bool tmp5 = (tmp4 > (int)1);
	if ((tmp5)){
		::openfl::_internal::text::TextEngine tmp6 = this->__textEngine;
		int tmp7 = tmp6->textFormatRanges->get_length();
		int tmp8 = (tmp7 - (int)1);
		int len = tmp8;
		::openfl::_internal::text::TextEngine tmp9 = this->__textEngine;
		int tmp10 = len;
		::openfl::_Vector::IVector tmp11 = tmp9->textFormatRanges->splice((int)1,tmp10);
		tmp11;
	}
	::openfl::_internal::text::TextEngine tmp6 = this->__textEngine;
	::openfl::_internal::text::TextFormatRange tmp7 = tmp6->textFormatRanges->get((int)0);
	::openfl::_internal::text::TextFormatRange range = tmp7;
	::openfl::text::TextFormat tmp8 = this->__textFormat;
	range->format = tmp8;
	range->start = (int)0;
	range->end = value.length;
	this->__isHTML = false;
	::String tmp9 = value;
	this->__updateText(tmp9);
	::String tmp10 = value;
	return tmp10;
}


HX_DEFINE_DYNAMIC_FUNC1(TextField_obj,set_text,return )

int TextField_obj::get_textColor( ){
	::openfl::text::TextFormat tmp = this->__textFormat;
	Dynamic tmp1 = tmp->color;
	return tmp1;
}


HX_DEFINE_DYNAMIC_FUNC0(TextField_obj,get_textColor,return )

int TextField_obj::set_textColor( int value){
	int tmp = value;
	::openfl::text::TextFormat tmp1 = this->__textFormat;
	Dynamic tmp2 = tmp1->color;
	bool tmp3 = (tmp != tmp2);
	if ((tmp3)){
		this->__dirty = true;
	}
	{
		int _g = (int)0;
		::openfl::_internal::text::TextEngine tmp4 = this->__textEngine;
		::openfl::_Vector::ObjectVector _g1 = tmp4->textFormatRanges;
		while((true)){
			int tmp5 = _g;
			int tmp6 = _g1->get_length();
			bool tmp7 = (tmp5 < tmp6);
			bool tmp8 = !(tmp7);
			if ((tmp8)){
				break;
			}
			int tmp9 = _g;
			::openfl::_internal::text::TextFormatRange tmp10 = _g1->get(tmp9);
			::openfl::_internal::text::TextFormatRange range = tmp10;
			++(_g);
			range->format->color = value;
		}
	}
	::openfl::text::TextFormat tmp4 = this->__textFormat;
	Dynamic tmp5 = tmp4->color = value;
	return tmp5;
}


HX_DEFINE_DYNAMIC_FUNC1(TextField_obj,set_textColor,return )

Float TextField_obj::get_textWidth( ){
	this->__updateLayout();
	::openfl::_internal::text::TextEngine tmp = this->__textEngine;
	Float tmp1 = tmp->textWidth;
	return tmp1;
}


HX_DEFINE_DYNAMIC_FUNC0(TextField_obj,get_textWidth,return )

Float TextField_obj::get_textHeight( ){
	this->__updateLayout();
	::openfl::_internal::text::TextEngine tmp = this->__textEngine;
	Float tmp1 = tmp->textHeight;
	return tmp1;
}


HX_DEFINE_DYNAMIC_FUNC0(TextField_obj,get_textHeight,return )

Dynamic TextField_obj::get_type( ){
	::openfl::_internal::text::TextEngine tmp = this->__textEngine;
	Dynamic tmp1 = tmp->type;
	return tmp1;
}


HX_DEFINE_DYNAMIC_FUNC0(TextField_obj,get_type,return )

Dynamic TextField_obj::set_type( Dynamic value){
	Dynamic tmp = value;
	::openfl::_internal::text::TextEngine tmp1 = this->__textEngine;
	Dynamic tmp2 = tmp1->type;
	bool tmp3 = (tmp != tmp2);
	if ((tmp3)){
		bool tmp4 = (value == ((Dynamic)((int)1)));
		if ((tmp4)){
			Dynamic tmp5 = this->this_onFocusIn_dyn();
			this->addEventListener(HX_HCSTRING("focusIn","\xdd","\x45","\x83","\x41"),tmp5,null(),null(),null());
			Dynamic tmp6 = this->this_onFocusOut_dyn();
			this->addEventListener(HX_HCSTRING("focusOut","\x96","\x6f","\x5e","\x11"),tmp6,null(),null(),null());
			Dynamic tmp7 = this->this_onAddedToStage_dyn();
			this->addEventListener(HX_HCSTRING("addedToStage","\x63","\x22","\x55","\x0c"),tmp7,null(),null(),null());
			this->this_onFocusIn(null());
			::openfl::_internal::text::TextEngine tmp8 = this->__textEngine;
			tmp8->__useIntAdvances = true;
		}
		else{
			Dynamic tmp5 = this->this_onFocusIn_dyn();
			this->removeEventListener(HX_HCSTRING("focusIn","\xdd","\x45","\x83","\x41"),tmp5,null());
			Dynamic tmp6 = this->this_onFocusOut_dyn();
			this->removeEventListener(HX_HCSTRING("focusOut","\x96","\x6f","\x5e","\x11"),tmp6,null());
			Dynamic tmp7 = this->this_onAddedToStage_dyn();
			this->removeEventListener(HX_HCSTRING("addedToStage","\x63","\x22","\x55","\x0c"),tmp7,null());
			this->__stopTextInput();
			::openfl::_internal::text::TextEngine tmp8 = this->__textEngine;
			tmp8->__useIntAdvances = null();
		}
		this->__dirty = true;
	}
	::openfl::_internal::text::TextEngine tmp4 = this->__textEngine;
	Dynamic tmp5 = tmp4->type = value;
	return tmp5;
}


HX_DEFINE_DYNAMIC_FUNC1(TextField_obj,set_type,return )

Float TextField_obj::get_width( ){
	this->__updateLayout();
	::openfl::_internal::text::TextEngine tmp = this->__textEngine;
	Float tmp1 = tmp->width;
	Float tmp2 = this->__scaleX;
	Float tmp3 = ::Math_obj::abs(tmp2);
	Float tmp4 = (tmp1 * tmp3);
	return tmp4;
}


Float TextField_obj::set_width( Float value){
	Float tmp = value;
	::openfl::_internal::text::TextEngine tmp1 = this->__textEngine;
	Float tmp2 = tmp1->width;
	bool tmp3 = (tmp != tmp2);
	if ((tmp3)){
		this->__setTransformDirty();
		this->__dirty = true;
		this->__layoutDirty = true;
		::openfl::_internal::text::TextEngine tmp4 = this->__textEngine;
		tmp4->width = value;
	}
	::openfl::_internal::text::TextEngine tmp4 = this->__textEngine;
	Float tmp5 = tmp4->width;
	Float tmp6 = this->__scaleX;
	Float tmp7 = ::Math_obj::abs(tmp6);
	Float tmp8 = (tmp5 * tmp7);
	return tmp8;
}


bool TextField_obj::get_wordWrap( ){
	::openfl::_internal::text::TextEngine tmp = this->__textEngine;
	bool tmp1 = tmp->wordWrap;
	return tmp1;
}


HX_DEFINE_DYNAMIC_FUNC0(TextField_obj,get_wordWrap,return )

bool TextField_obj::set_wordWrap( bool value){
	bool tmp = value;
	::openfl::_internal::text::TextEngine tmp1 = this->__textEngine;
	bool tmp2 = tmp1->wordWrap;
	bool tmp3 = (tmp != tmp2);
	if ((tmp3)){
		this->__dirty = true;
		this->__layoutDirty = true;
	}
	::openfl::_internal::text::TextEngine tmp4 = this->__textEngine;
	bool tmp5 = tmp4->wordWrap = value;
	return tmp5;
}


HX_DEFINE_DYNAMIC_FUNC1(TextField_obj,set_wordWrap,return )

Void TextField_obj::stage_onMouseMove( ::openfl::events::MouseEvent event){
{
		::openfl::display::Stage tmp = this->stage;
		bool tmp1 = (tmp == null());
		if ((tmp1)){
			return null();
		}
		::openfl::_internal::text::TextEngine tmp2 = this->__textEngine;
		bool tmp3 = tmp2->selectable;
		bool tmp4;
		if ((tmp3)){
			int tmp5 = this->__selectionIndex;
			int tmp6 = tmp5;
			tmp4 = (tmp6 >= (int)0);
		}
		else{
			tmp4 = false;
		}
		if ((tmp4)){
			this->__updateLayout();
			Float tmp5 = this->get_mouseX();
			Float tmp6 = this->get_mouseY();
			int tmp7 = this->__getPosition(tmp5,tmp6);
			int position = tmp7;
			int tmp8 = position;
			int tmp9 = this->__caretIndex;
			bool tmp10 = (tmp8 != tmp9);
			if ((tmp10)){
				this->__caretIndex = position;
				this->__dirty = true;
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(TextField_obj,stage_onMouseMove,(void))

Void TextField_obj::stage_onMouseUp( ::openfl::events::MouseEvent event){
{
		::openfl::display::Stage tmp = this->stage;
		bool tmp1 = (tmp == null());
		if ((tmp1)){
			return null();
		}
		::openfl::display::Stage tmp2 = this->stage;
		Dynamic tmp3 = this->stage_onMouseMove_dyn();
		tmp2->removeEventListener(HX_HCSTRING("mouseMove","\xd6","\x9b","\xb5","\xf4"),tmp3,null());
		::openfl::display::Stage tmp4 = this->stage;
		Dynamic tmp5 = this->stage_onMouseUp_dyn();
		tmp4->removeEventListener(HX_HCSTRING("mouseUp","\xe0","\xf3","\x72","\xc0"),tmp5,null());
		::openfl::display::Stage tmp6 = this->stage;
		::openfl::display::InteractiveObject tmp7 = tmp6->get_focus();
		bool tmp8 = (tmp7 == hx::ObjectPtr<OBJ_>(this));
		if ((tmp8)){
			this->__getWorldTransform();
			this->__updateLayout();
			Float tmp9;
			{
				::openfl::geom::Matrix tmp10 = this->__worldTransform;
				::openfl::geom::Matrix _this = tmp10;
				Float tmp11 = this->get_x();
				Float px = tmp11;
				Float tmp12 = this->get_y();
				Float py = tmp12;
				Float tmp13 = (_this->a * _this->d);
				Float tmp14 = (_this->b * _this->c);
				Float tmp15 = (tmp13 - tmp14);
				Float norm = tmp15;
				bool tmp16 = (norm == (int)0);
				if ((tmp16)){
					Float tmp17 = _this->tx;
					tmp9 = -(tmp17);
				}
				else{
					Float tmp17 = (Float(((Float)1.0)) / Float(norm));
					Float tmp18 = _this->c;
					Float tmp19 = (_this->ty - py);
					Float tmp20 = (tmp18 * tmp19);
					Float tmp21 = _this->d;
					Float tmp22 = (px - _this->tx);
					Float tmp23 = (tmp21 * tmp22);
					Float tmp24 = (tmp20 + tmp23);
					tmp9 = (tmp17 * tmp24);
				}
			}
			Float px = tmp9;
			Float tmp10;
			{
				::openfl::geom::Matrix tmp11 = this->__worldTransform;
				::openfl::geom::Matrix _this = tmp11;
				Float tmp12 = this->get_x();
				Float px1 = tmp12;
				Float tmp13 = this->get_y();
				Float py = tmp13;
				Float tmp14 = (_this->a * _this->d);
				Float tmp15 = (_this->b * _this->c);
				Float tmp16 = (tmp14 - tmp15);
				Float norm = tmp16;
				bool tmp17 = (norm == (int)0);
				if ((tmp17)){
					Float tmp18 = _this->ty;
					tmp10 = -(tmp18);
				}
				else{
					Float tmp18 = (Float(((Float)1.0)) / Float(norm));
					Float tmp19 = _this->a;
					Float tmp20 = (py - _this->ty);
					Float tmp21 = (tmp19 * tmp20);
					Float tmp22 = _this->b;
					Float tmp23 = (_this->tx - px1);
					Float tmp24 = (tmp22 * tmp23);
					Float tmp25 = (tmp21 + tmp24);
					tmp10 = (tmp18 * tmp25);
				}
			}
			Float py = tmp10;
			Float tmp11 = this->get_mouseX();
			Float tmp12 = this->get_mouseY();
			int tmp13 = this->__getPosition(tmp11,tmp12);
			int upPos = tmp13;
			int leftPos;
			int rightPos;
			int tmp14 = this->__selectionIndex;
			int tmp15 = upPos;
			Float tmp16 = ::Math_obj::min(tmp14,tmp15);
			int tmp17 = ::Std_obj::_int(tmp16);
			leftPos = tmp17;
			int tmp18 = this->__selectionIndex;
			int tmp19 = upPos;
			Float tmp20 = ::Math_obj::max(tmp18,tmp19);
			int tmp21 = ::Std_obj::_int(tmp20);
			rightPos = tmp21;
			this->__selectionIndex = leftPos;
			this->__caretIndex = rightPos;
			bool tmp22 = this->__inputEnabled;
			if ((tmp22)){
				this->this_onFocusIn(null());
				this->__stopCursorTimer();
				this->__startCursorTimer();
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(TextField_obj,stage_onMouseUp,(void))

Void TextField_obj::this_onAddedToStage( ::openfl::events::Event event){
{
		this->this_onFocusIn(null());
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(TextField_obj,this_onAddedToStage,(void))

Void TextField_obj::this_onFocusIn( ::openfl::events::FocusEvent event){
{
		bool tmp = this->get_selectable();
		bool tmp1 = tmp;
		bool tmp2;
		if ((tmp1)){
			Dynamic tmp3 = this->get_type();
			Dynamic tmp4 = tmp3;
			Dynamic tmp5 = tmp4;
			tmp2 = (tmp5 == ((Dynamic)((int)1)));
		}
		else{
			tmp2 = false;
		}
		bool tmp3 = tmp2;
		bool tmp4;
		if ((tmp3)){
			::openfl::display::Stage tmp5 = this->stage;
			::openfl::display::Stage tmp6 = tmp5;
			::openfl::display::Stage tmp7 = tmp6;
			tmp4 = (tmp7 != null());
		}
		else{
			tmp4 = false;
		}
		bool tmp5;
		if ((tmp4)){
			::openfl::display::Stage tmp6 = this->stage;
			::openfl::display::Stage tmp7 = tmp6;
			::openfl::display::InteractiveObject tmp8 = tmp7->get_focus();
			::openfl::display::InteractiveObject tmp9 = tmp8;
			tmp5 = (tmp9 == hx::ObjectPtr<OBJ_>(this));
		}
		else{
			tmp5 = false;
		}
		if ((tmp5)){
			this->__startTextInput();
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(TextField_obj,this_onFocusIn,(void))

Void TextField_obj::this_onFocusOut( ::openfl::events::FocusEvent event){
{
		this->__stopTextInput();
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(TextField_obj,this_onFocusOut,(void))

Void TextField_obj::this_onMouseDown( ::openfl::events::MouseEvent event){
{
		bool tmp = this->get_selectable();
		bool tmp1 = !(tmp);
		if ((tmp1)){
			return null();
		}
		this->__updateLayout();
		Float tmp2 = this->get_mouseX();
		Float tmp3 = this->get_mouseY();
		int tmp4 = this->__getPosition(tmp2,tmp3);
		this->__caretIndex = tmp4;
		int tmp5 = this->__caretIndex;
		this->__selectionIndex = tmp5;
		this->__dirty = true;
		::openfl::display::Stage tmp6 = this->stage;
		Dynamic tmp7 = this->stage_onMouseMove_dyn();
		tmp6->addEventListener(HX_HCSTRING("mouseMove","\xd6","\x9b","\xb5","\xf4"),tmp7,null(),null(),null());
		::openfl::display::Stage tmp8 = this->stage;
		Dynamic tmp9 = this->stage_onMouseUp_dyn();
		tmp8->addEventListener(HX_HCSTRING("mouseUp","\xe0","\xf3","\x72","\xc0"),tmp9,null(),null(),null());
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(TextField_obj,this_onMouseDown,(void))

Void TextField_obj::window_onKeyDown( int key,int modifier){
{
		int tmp = key;
		switch( (int)(tmp)){
			case (int)13: case (int)1073741912: {
				::openfl::_internal::text::TextEngine tmp1 = this->__textEngine;
				bool tmp2 = tmp1->multiline;
				if ((tmp2)){
					this->replaceSelectedText(HX_HCSTRING("\n","\x0a","\x00","\x00","\x00"));
					::openfl::events::Event tmp3 = ::openfl::events::Event_obj::__new(HX_HCSTRING("change","\x70","\x91","\x72","\xb7"),true,null());
					this->dispatchEvent(tmp3);
				}
			}
			;break;
			case (int)8: {
				int tmp1 = this->__selectionIndex;
				int tmp2 = this->__caretIndex;
				bool tmp3 = (tmp1 == tmp2);
				bool tmp4;
				if ((tmp3)){
					int tmp5 = this->__caretIndex;
					int tmp6 = tmp5;
					tmp4 = (tmp6 > (int)0);
				}
				else{
					tmp4 = false;
				}
				if ((tmp4)){
					int tmp5 = this->__caretIndex;
					int tmp6 = (tmp5 - (int)1);
					this->__selectionIndex = tmp6;
				}
				int tmp5 = this->__selectionIndex;
				int tmp6 = this->__caretIndex;
				bool tmp7 = (tmp5 != tmp6);
				if ((tmp7)){
					this->replaceSelectedText(HX_HCSTRING("","\x00","\x00","\x00","\x00"));
					int tmp8 = this->__caretIndex;
					this->__selectionIndex = tmp8;
					::openfl::events::Event tmp9 = ::openfl::events::Event_obj::__new(HX_HCSTRING("change","\x70","\x91","\x72","\xb7"),true,null());
					this->dispatchEvent(tmp9);
				}
			}
			;break;
			case (int)127: {
				int tmp1 = this->__selectionIndex;
				int tmp2 = this->__caretIndex;
				bool tmp3 = (tmp1 == tmp2);
				bool tmp4;
				if ((tmp3)){
					int tmp5 = this->__caretIndex;
					int tmp6 = tmp5;
					::String tmp7 = this->__text;
					::String tmp8 = tmp7;
					int tmp9 = tmp8.length;
					tmp4 = (tmp6 < tmp9);
				}
				else{
					tmp4 = false;
				}
				if ((tmp4)){
					int tmp5 = this->__caretIndex;
					int tmp6 = (tmp5 + (int)1);
					this->__selectionIndex = tmp6;
				}
				int tmp5 = this->__selectionIndex;
				int tmp6 = this->__caretIndex;
				bool tmp7 = (tmp5 != tmp6);
				if ((tmp7)){
					this->replaceSelectedText(HX_HCSTRING("","\x00","\x00","\x00","\x00"));
					int tmp8 = this->__caretIndex;
					this->__selectionIndex = tmp8;
					::openfl::events::Event tmp9 = ::openfl::events::Event_obj::__new(HX_HCSTRING("change","\x70","\x91","\x72","\xb7"),true,null());
					this->dispatchEvent(tmp9);
				}
			}
			;break;
			case (int)1073741904: {
				int tmp1 = modifier;
				bool tmp2 = ::lime::ui::_KeyModifier::KeyModifier_Impl__obj::get_metaKey(tmp1);
				if ((tmp2)){
					this->__caretBeginningOfLine();
					int tmp3 = modifier;
					bool tmp4 = ::lime::ui::_KeyModifier::KeyModifier_Impl__obj::get_shiftKey(tmp3);
					bool tmp5 = !(tmp4);
					if ((tmp5)){
						int tmp6 = this->__caretIndex;
						this->__selectionIndex = tmp6;
					}
				}
				else{
					int tmp3 = modifier;
					bool tmp4 = ::lime::ui::_KeyModifier::KeyModifier_Impl__obj::get_shiftKey(tmp3);
					if ((tmp4)){
						this->__caretPreviousCharacter();
					}
					else{
						int tmp5 = this->__selectionIndex;
						int tmp6 = this->__caretIndex;
						bool tmp7 = (tmp5 == tmp6);
						if ((tmp7)){
							this->__caretPreviousCharacter();
						}
						else{
							int tmp8 = this->__caretIndex;
							int tmp9 = this->__selectionIndex;
							Float tmp10 = ::Math_obj::min(tmp8,tmp9);
							int tmp11 = ::Std_obj::_int(tmp10);
							this->__caretIndex = tmp11;
						}
						int tmp8 = this->__caretIndex;
						this->__selectionIndex = tmp8;
					}
				}
				this->__stopCursorTimer();
				this->__startCursorTimer();
			}
			;break;
			case (int)1073741903: {
				int tmp1 = modifier;
				bool tmp2 = ::lime::ui::_KeyModifier::KeyModifier_Impl__obj::get_metaKey(tmp1);
				if ((tmp2)){
					this->__caretEndOfLine();
					int tmp3 = modifier;
					bool tmp4 = ::lime::ui::_KeyModifier::KeyModifier_Impl__obj::get_shiftKey(tmp3);
					bool tmp5 = !(tmp4);
					if ((tmp5)){
						int tmp6 = this->__caretIndex;
						this->__selectionIndex = tmp6;
					}
				}
				else{
					int tmp3 = modifier;
					bool tmp4 = ::lime::ui::_KeyModifier::KeyModifier_Impl__obj::get_shiftKey(tmp3);
					if ((tmp4)){
						this->__caretNextCharacter();
					}
					else{
						int tmp5 = this->__selectionIndex;
						int tmp6 = this->__caretIndex;
						bool tmp7 = (tmp5 == tmp6);
						if ((tmp7)){
							this->__caretNextCharacter();
						}
						else{
							int tmp8 = this->__caretIndex;
							int tmp9 = this->__selectionIndex;
							Float tmp10 = ::Math_obj::max(tmp8,tmp9);
							int tmp11 = ::Std_obj::_int(tmp10);
							this->__caretIndex = tmp11;
						}
						int tmp8 = this->__caretIndex;
						this->__selectionIndex = tmp8;
					}
				}
				this->__stopCursorTimer();
				this->__startCursorTimer();
			}
			;break;
			case (int)1073741905: {
				int tmp1 = modifier;
				bool tmp2 = ::lime::ui::_KeyModifier::KeyModifier_Impl__obj::get_shiftKey(tmp1);
				if ((tmp2)){
					this->__caretNextLine(null(),null());
				}
				else{
					int tmp3 = this->__selectionIndex;
					int tmp4 = this->__caretIndex;
					bool tmp5 = (tmp3 == tmp4);
					if ((tmp5)){
						this->__caretNextLine(null(),null());
					}
					else{
						int tmp6 = this->__caretIndex;
						int tmp7 = this->__selectionIndex;
						Float tmp8 = ::Math_obj::max(tmp6,tmp7);
						int tmp9 = ::Std_obj::_int(tmp8);
						int tmp10 = this->getLineIndexOfChar(tmp9);
						int lineIndex = tmp10;
						int tmp11 = lineIndex;
						int tmp12 = this->__caretIndex;
						int tmp13 = this->__selectionIndex;
						Float tmp14 = ::Math_obj::min(tmp12,tmp13);
						int tmp15 = ::Std_obj::_int(tmp14);
						this->__caretNextLine(tmp11,tmp15);
					}
					int tmp6 = this->__caretIndex;
					this->__selectionIndex = tmp6;
				}
				this->__stopCursorTimer();
				this->__startCursorTimer();
			}
			;break;
			case (int)1073741906: {
				int tmp1 = modifier;
				bool tmp2 = ::lime::ui::_KeyModifier::KeyModifier_Impl__obj::get_shiftKey(tmp1);
				if ((tmp2)){
					this->__caretPreviousLine(null(),null());
				}
				else{
					int tmp3 = this->__selectionIndex;
					int tmp4 = this->__caretIndex;
					bool tmp5 = (tmp3 == tmp4);
					if ((tmp5)){
						this->__caretPreviousLine(null(),null());
					}
					else{
						int tmp6 = this->__caretIndex;
						int tmp7 = this->__selectionIndex;
						Float tmp8 = ::Math_obj::min(tmp6,tmp7);
						int tmp9 = ::Std_obj::_int(tmp8);
						int tmp10 = this->getLineIndexOfChar(tmp9);
						int lineIndex = tmp10;
						int tmp11 = lineIndex;
						int tmp12 = this->__caretIndex;
						int tmp13 = this->__selectionIndex;
						Float tmp14 = ::Math_obj::min(tmp12,tmp13);
						int tmp15 = ::Std_obj::_int(tmp14);
						this->__caretPreviousLine(tmp11,tmp15);
					}
					int tmp6 = this->__caretIndex;
					this->__selectionIndex = tmp6;
				}
				this->__stopCursorTimer();
				this->__startCursorTimer();
			}
			;break;
			case (int)1073741898: {
				this->__caretBeginningOfLine();
				this->__stopCursorTimer();
				this->__startCursorTimer();
			}
			;break;
			case (int)1073741901: {
				this->__caretEndOfLine();
				this->__stopCursorTimer();
				this->__startCursorTimer();
			}
			;break;
			case (int)99: {
				int tmp1 = modifier;
				bool tmp2 = ::lime::ui::_KeyModifier::KeyModifier_Impl__obj::get_ctrlKey(tmp1);
				if ((tmp2)){
					::String tmp3 = this->__text;
					int tmp4 = this->__caretIndex;
					int tmp5 = this->__selectionIndex;
					::String tmp6 = tmp3.substring(tmp4,tmp5);
					::lime::_system::Clipboard_obj::set_text(tmp6);
				}
			}
			;break;
			case (int)120: {
				int tmp1 = modifier;
				bool tmp2 = ::lime::ui::_KeyModifier::KeyModifier_Impl__obj::get_ctrlKey(tmp1);
				if ((tmp2)){
					::String tmp3 = this->__text;
					int tmp4 = this->__caretIndex;
					int tmp5 = this->__selectionIndex;
					::String tmp6 = tmp3.substring(tmp4,tmp5);
					::lime::_system::Clipboard_obj::set_text(tmp6);
					int tmp7 = this->__caretIndex;
					int tmp8 = this->__selectionIndex;
					bool tmp9 = (tmp7 != tmp8);
					if ((tmp9)){
						this->replaceSelectedText(HX_HCSTRING("","\x00","\x00","\x00","\x00"));
						::openfl::events::Event tmp10 = ::openfl::events::Event_obj::__new(HX_HCSTRING("change","\x70","\x91","\x72","\xb7"),true,null());
						this->dispatchEvent(tmp10);
					}
				}
			}
			;break;
			case (int)118: {
				int tmp1 = modifier;
				bool tmp2 = ::lime::ui::_KeyModifier::KeyModifier_Impl__obj::get_ctrlKey(tmp1);
				if ((tmp2)){
					::String tmp3 = ::lime::_system::Clipboard_obj::get_text();
					::String text = tmp3;
					bool tmp4 = (text != null());
					if ((tmp4)){
						::String tmp5 = text;
						this->replaceSelectedText(tmp5);
					}
					else{
						this->replaceSelectedText(HX_HCSTRING("","\x00","\x00","\x00","\x00"));
					}
					::openfl::events::Event tmp5 = ::openfl::events::Event_obj::__new(HX_HCSTRING("change","\x70","\x91","\x72","\xb7"),true,null());
					this->dispatchEvent(tmp5);
				}
				else{
					::String tmp3 = this->__text;
					::openfl::_internal::text::TextFormatRange tmp4;
					{
						::openfl::_internal::text::TextEngine tmp5 = this->__textEngine;
						int tmp6 = tmp5->textFormatRanges->get_length();
						int tmp7 = (tmp6 - (int)1);
						int index = tmp7;
						::openfl::_internal::text::TextEngine tmp8 = this->__textEngine;
						int tmp9 = index;
						tmp4 = tmp8->textFormatRanges->get(tmp9);
					}
					tmp4->end = tmp3.length;
				}
			}
			;break;
			case (int)97: {
				int tmp1 = modifier;
				bool tmp2 = ::lime::ui::_KeyModifier::KeyModifier_Impl__obj::get_ctrlKey(tmp1);
				if ((tmp2)){
					::String tmp3 = this->__text;
					this->__caretIndex = tmp3.length;
					this->__selectionIndex = (int)0;
				}
			}
			;break;
			default: {
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(TextField_obj,window_onKeyDown,(void))

Void TextField_obj::window_onTextInput( ::String value){
{
		::String tmp = value;
		this->replaceSelectedText(tmp);
		::openfl::events::Event tmp1 = ::openfl::events::Event_obj::__new(HX_HCSTRING("change","\x70","\x91","\x72","\xb7"),true,null());
		this->dispatchEvent(tmp1);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(TextField_obj,window_onTextInput,(void))

::openfl::text::TextFormat TextField_obj::__defaultTextFormat;

::haxe::ds::StringMap TextField_obj::__missingFontWarning;

::EReg TextField_obj::__regexAlign;

::EReg TextField_obj::__regexColor;

::EReg TextField_obj::__regexBlockIndent;

::EReg TextField_obj::__regexBreakTag;

Array< ::Dynamic > TextField_obj::__regexEntities;

::EReg TextField_obj::__regexFace;

::EReg TextField_obj::__regexHref;

::EReg TextField_obj::__regexHTMLTag;

::EReg TextField_obj::__regexIndent;

::EReg TextField_obj::__regexLeading;

::EReg TextField_obj::__regexLeftMargin;

::EReg TextField_obj::__regexRightMargin;

::EReg TextField_obj::__regexTabStops;

::EReg TextField_obj::__regexSize;


TextField_obj::TextField_obj()
{
}

void TextField_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(TextField);
	HX_MARK_MEMBER_NAME(__bounds,"__bounds");
	HX_MARK_MEMBER_NAME(__caretIndex,"__caretIndex");
	HX_MARK_MEMBER_NAME(__cursorTimer,"__cursorTimer");
	HX_MARK_MEMBER_NAME(__dirty,"__dirty");
	HX_MARK_MEMBER_NAME(__displayAsPassword,"__displayAsPassword");
	HX_MARK_MEMBER_NAME(__inputEnabled,"__inputEnabled");
	HX_MARK_MEMBER_NAME(__isHTML,"__isHTML");
	HX_MARK_MEMBER_NAME(__layoutDirty,"__layoutDirty");
	HX_MARK_MEMBER_NAME(__mouseWheelEnabled,"__mouseWheelEnabled");
	HX_MARK_MEMBER_NAME(__offsetX,"__offsetX");
	HX_MARK_MEMBER_NAME(__offsetY,"__offsetY");
	HX_MARK_MEMBER_NAME(__selectionIndex,"__selectionIndex");
	HX_MARK_MEMBER_NAME(__showCursor,"__showCursor");
	HX_MARK_MEMBER_NAME(__symbol,"__symbol");
	HX_MARK_MEMBER_NAME(__text,"__text");
	HX_MARK_MEMBER_NAME(__htmlText,"__htmlText");
	HX_MARK_MEMBER_NAME(__textEngine,"__textEngine");
	HX_MARK_MEMBER_NAME(__textFormat,"__textFormat");
	::openfl::display::InteractiveObject_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void TextField_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(__bounds,"__bounds");
	HX_VISIT_MEMBER_NAME(__caretIndex,"__caretIndex");
	HX_VISIT_MEMBER_NAME(__cursorTimer,"__cursorTimer");
	HX_VISIT_MEMBER_NAME(__dirty,"__dirty");
	HX_VISIT_MEMBER_NAME(__displayAsPassword,"__displayAsPassword");
	HX_VISIT_MEMBER_NAME(__inputEnabled,"__inputEnabled");
	HX_VISIT_MEMBER_NAME(__isHTML,"__isHTML");
	HX_VISIT_MEMBER_NAME(__layoutDirty,"__layoutDirty");
	HX_VISIT_MEMBER_NAME(__mouseWheelEnabled,"__mouseWheelEnabled");
	HX_VISIT_MEMBER_NAME(__offsetX,"__offsetX");
	HX_VISIT_MEMBER_NAME(__offsetY,"__offsetY");
	HX_VISIT_MEMBER_NAME(__selectionIndex,"__selectionIndex");
	HX_VISIT_MEMBER_NAME(__showCursor,"__showCursor");
	HX_VISIT_MEMBER_NAME(__symbol,"__symbol");
	HX_VISIT_MEMBER_NAME(__text,"__text");
	HX_VISIT_MEMBER_NAME(__htmlText,"__htmlText");
	HX_VISIT_MEMBER_NAME(__textEngine,"__textEngine");
	HX_VISIT_MEMBER_NAME(__textFormat,"__textFormat");
	::openfl::display::InteractiveObject_obj::__Visit(HX_VISIT_ARG);
}

Dynamic TextField_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"text") ) { if (inCallProp == hx::paccAlways) return get_text(); }
		if (HX_FIELD_EQ(inName,"type") ) { if (inCallProp == hx::paccAlways) return get_type(); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"border") ) { if (inCallProp == hx::paccAlways) return get_border(); }
		if (HX_FIELD_EQ(inName,"length") ) { if (inCallProp == hx::paccAlways) return get_length(); }
		if (HX_FIELD_EQ(inName,"__text") ) { return __text; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"scrollH") ) { if (inCallProp == hx::paccAlways) return get_scrollH(); }
		if (HX_FIELD_EQ(inName,"scrollV") ) { if (inCallProp == hx::paccAlways) return get_scrollV(); }
		if (HX_FIELD_EQ(inName,"__dirty") ) { return __dirty; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"autoSize") ) { if (inCallProp == hx::paccAlways) return get_autoSize(); }
		if (HX_FIELD_EQ(inName,"htmlText") ) { if (inCallProp == hx::paccAlways) return get_htmlText(); }
		if (HX_FIELD_EQ(inName,"maxChars") ) { if (inCallProp == hx::paccAlways) return get_maxChars(); }
		if (HX_FIELD_EQ(inName,"numLines") ) { if (inCallProp == hx::paccAlways) return get_numLines(); }
		if (HX_FIELD_EQ(inName,"restrict") ) { if (inCallProp == hx::paccAlways) return get_restrict(); }
		if (HX_FIELD_EQ(inName,"wordWrap") ) { if (inCallProp == hx::paccAlways) return get_wordWrap(); }
		if (HX_FIELD_EQ(inName,"__bounds") ) { return __bounds; }
		if (HX_FIELD_EQ(inName,"__isHTML") ) { return __isHTML; }
		if (HX_FIELD_EQ(inName,"__symbol") ) { return __symbol; }
		if (HX_FIELD_EQ(inName,"get_text") ) { return get_text_dyn(); }
		if (HX_FIELD_EQ(inName,"set_text") ) { return set_text_dyn(); }
		if (HX_FIELD_EQ(inName,"get_type") ) { return get_type_dyn(); }
		if (HX_FIELD_EQ(inName,"set_type") ) { return set_type_dyn(); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"multiline") ) { if (inCallProp == hx::paccAlways) return get_multiline(); }
		if (HX_FIELD_EQ(inName,"sharpness") ) { if (inCallProp == hx::paccAlways) return get_sharpness(); }
		if (HX_FIELD_EQ(inName,"textColor") ) { if (inCallProp == hx::paccAlways) return get_textColor(); }
		if (HX_FIELD_EQ(inName,"textWidth") ) { if (inCallProp == hx::paccAlways) return get_textWidth(); }
		if (HX_FIELD_EQ(inName,"__offsetX") ) { return __offsetX; }
		if (HX_FIELD_EQ(inName,"__offsetY") ) { return __offsetY; }
		if (HX_FIELD_EQ(inName,"__hitTest") ) { return __hitTest_dyn(); }
		if (HX_FIELD_EQ(inName,"get_width") ) { return get_width_dyn(); }
		if (HX_FIELD_EQ(inName,"set_width") ) { return set_width_dyn(); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"background") ) { if (inCallProp == hx::paccAlways) return get_background(); }
		if (HX_FIELD_EQ(inName,"caretIndex") ) { if (inCallProp == hx::paccAlways) return get_caretIndex(); }
		if (HX_FIELD_EQ(inName,"embedFonts") ) { if (inCallProp == hx::paccAlways) return get_embedFonts(); }
		if (HX_FIELD_EQ(inName,"maxScrollH") ) { if (inCallProp == hx::paccAlways) return get_maxScrollH(); }
		if (HX_FIELD_EQ(inName,"maxScrollV") ) { if (inCallProp == hx::paccAlways) return get_maxScrollV(); }
		if (HX_FIELD_EQ(inName,"selectable") ) { if (inCallProp == hx::paccAlways) return get_selectable(); }
		if (HX_FIELD_EQ(inName,"textHeight") ) { if (inCallProp == hx::paccAlways) return get_textHeight(); }
		if (HX_FIELD_EQ(inName,"__htmlText") ) { return __htmlText; }
		if (HX_FIELD_EQ(inName,"appendText") ) { return appendText_dyn(); }
		if (HX_FIELD_EQ(inName,"__dispatch") ) { return __dispatch_dyn(); }
		if (HX_FIELD_EQ(inName,"__getGroup") ) { return __getGroup_dyn(); }
		if (HX_FIELD_EQ(inName,"__renderGL") ) { return __renderGL_dyn(); }
		if (HX_FIELD_EQ(inName,"get_border") ) { return get_border_dyn(); }
		if (HX_FIELD_EQ(inName,"set_border") ) { return set_border_dyn(); }
		if (HX_FIELD_EQ(inName,"get_height") ) { return get_height_dyn(); }
		if (HX_FIELD_EQ(inName,"set_height") ) { return set_height_dyn(); }
		if (HX_FIELD_EQ(inName,"get_length") ) { return get_length_dyn(); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"borderColor") ) { if (inCallProp == hx::paccAlways) return get_borderColor(); }
		if (HX_FIELD_EQ(inName,"gridFitType") ) { if (inCallProp == hx::paccAlways) return get_gridFitType(); }
		if (HX_FIELD_EQ(inName,"getLineText") ) { return getLineText_dyn(); }
		if (HX_FIELD_EQ(inName,"replaceText") ) { return replaceText_dyn(); }
		if (HX_FIELD_EQ(inName,"__getBounds") ) { return __getBounds_dyn(); }
		if (HX_FIELD_EQ(inName,"__getCursor") ) { return __getCursor_dyn(); }
		if (HX_FIELD_EQ(inName,"__renderDOM") ) { return __renderDOM_dyn(); }
		if (HX_FIELD_EQ(inName,"get_scrollH") ) { return get_scrollH_dyn(); }
		if (HX_FIELD_EQ(inName,"set_scrollH") ) { return set_scrollH_dyn(); }
		if (HX_FIELD_EQ(inName,"get_scrollV") ) { return get_scrollV_dyn(); }
		if (HX_FIELD_EQ(inName,"set_scrollV") ) { return set_scrollV_dyn(); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"__caretIndex") ) { return __caretIndex; }
		if (HX_FIELD_EQ(inName,"__showCursor") ) { return __showCursor; }
		if (HX_FIELD_EQ(inName,"__textEngine") ) { return __textEngine; }
		if (HX_FIELD_EQ(inName,"__textFormat") ) { return __textFormat; }
		if (HX_FIELD_EQ(inName,"setSelection") ) { return setSelection_dyn(); }
		if (HX_FIELD_EQ(inName,"__fromSymbol") ) { return __fromSymbol_dyn(); }
		if (HX_FIELD_EQ(inName,"__updateText") ) { return __updateText_dyn(); }
		if (HX_FIELD_EQ(inName,"get_autoSize") ) { return get_autoSize_dyn(); }
		if (HX_FIELD_EQ(inName,"set_autoSize") ) { return set_autoSize_dyn(); }
		if (HX_FIELD_EQ(inName,"get_htmlText") ) { return get_htmlText_dyn(); }
		if (HX_FIELD_EQ(inName,"set_htmlText") ) { return set_htmlText_dyn(); }
		if (HX_FIELD_EQ(inName,"get_maxChars") ) { return get_maxChars_dyn(); }
		if (HX_FIELD_EQ(inName,"set_maxChars") ) { return set_maxChars_dyn(); }
		if (HX_FIELD_EQ(inName,"get_numLines") ) { return get_numLines_dyn(); }
		if (HX_FIELD_EQ(inName,"get_restrict") ) { return get_restrict_dyn(); }
		if (HX_FIELD_EQ(inName,"set_restrict") ) { return set_restrict_dyn(); }
		if (HX_FIELD_EQ(inName,"get_wordWrap") ) { return get_wordWrap_dyn(); }
		if (HX_FIELD_EQ(inName,"set_wordWrap") ) { return set_wordWrap_dyn(); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"antiAliasType") ) { if (inCallProp == hx::paccAlways) return get_antiAliasType(); }
		if (HX_FIELD_EQ(inName,"bottomScrollV") ) { if (inCallProp == hx::paccAlways) return get_bottomScrollV(); }
		if (HX_FIELD_EQ(inName,"__cursorTimer") ) { return __cursorTimer; }
		if (HX_FIELD_EQ(inName,"__layoutDirty") ) { return __layoutDirty; }
		if (HX_FIELD_EQ(inName,"getLineLength") ) { return getLineLength_dyn(); }
		if (HX_FIELD_EQ(inName,"getLineOffset") ) { return getLineOffset_dyn(); }
		if (HX_FIELD_EQ(inName,"getTextFormat") ) { return getTextFormat_dyn(); }
		if (HX_FIELD_EQ(inName,"setTextFormat") ) { return setTextFormat_dyn(); }
		if (HX_FIELD_EQ(inName,"__getPosition") ) { return __getPosition_dyn(); }
		if (HX_FIELD_EQ(inName,"__hitTestMask") ) { return __hitTestMask_dyn(); }
		if (HX_FIELD_EQ(inName,"__renderCairo") ) { return __renderCairo_dyn(); }
		if (HX_FIELD_EQ(inName,"get_multiline") ) { return get_multiline_dyn(); }
		if (HX_FIELD_EQ(inName,"set_multiline") ) { return set_multiline_dyn(); }
		if (HX_FIELD_EQ(inName,"get_sharpness") ) { return get_sharpness_dyn(); }
		if (HX_FIELD_EQ(inName,"set_sharpness") ) { return set_sharpness_dyn(); }
		if (HX_FIELD_EQ(inName,"get_textColor") ) { return get_textColor_dyn(); }
		if (HX_FIELD_EQ(inName,"set_textColor") ) { return set_textColor_dyn(); }
		if (HX_FIELD_EQ(inName,"get_textWidth") ) { return get_textWidth_dyn(); }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"__inputEnabled") ) { return __inputEnabled; }
		if (HX_FIELD_EQ(inName,"getLineMetrics") ) { return getLineMetrics_dyn(); }
		if (HX_FIELD_EQ(inName,"__renderCanvas") ) { return __renderCanvas_dyn(); }
		if (HX_FIELD_EQ(inName,"__updateLayout") ) { return __updateLayout_dyn(); }
		if (HX_FIELD_EQ(inName,"get_background") ) { return get_background_dyn(); }
		if (HX_FIELD_EQ(inName,"set_background") ) { return set_background_dyn(); }
		if (HX_FIELD_EQ(inName,"get_caretIndex") ) { return get_caretIndex_dyn(); }
		if (HX_FIELD_EQ(inName,"get_embedFonts") ) { return get_embedFonts_dyn(); }
		if (HX_FIELD_EQ(inName,"set_embedFonts") ) { return set_embedFonts_dyn(); }
		if (HX_FIELD_EQ(inName,"get_maxScrollH") ) { return get_maxScrollH_dyn(); }
		if (HX_FIELD_EQ(inName,"get_maxScrollV") ) { return get_maxScrollV_dyn(); }
		if (HX_FIELD_EQ(inName,"get_selectable") ) { return get_selectable_dyn(); }
		if (HX_FIELD_EQ(inName,"set_selectable") ) { return set_selectable_dyn(); }
		if (HX_FIELD_EQ(inName,"get_textHeight") ) { return get_textHeight_dyn(); }
		if (HX_FIELD_EQ(inName,"this_onFocusIn") ) { return this_onFocusIn_dyn(); }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"backgroundColor") ) { if (inCallProp == hx::paccAlways) return get_backgroundColor(); }
		if (HX_FIELD_EQ(inName,"__caretNextLine") ) { return __caretNextLine_dyn(); }
		if (HX_FIELD_EQ(inName,"__stopTextInput") ) { return __stopTextInput_dyn(); }
		if (HX_FIELD_EQ(inName,"get_borderColor") ) { return get_borderColor_dyn(); }
		if (HX_FIELD_EQ(inName,"set_borderColor") ) { return set_borderColor_dyn(); }
		if (HX_FIELD_EQ(inName,"get_gridFitType") ) { return get_gridFitType_dyn(); }
		if (HX_FIELD_EQ(inName,"set_gridFitType") ) { return set_gridFitType_dyn(); }
		if (HX_FIELD_EQ(inName,"stage_onMouseUp") ) { return stage_onMouseUp_dyn(); }
		if (HX_FIELD_EQ(inName,"this_onFocusOut") ) { return this_onFocusOut_dyn(); }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"__selectionIndex") ) { return __selectionIndex; }
		if (HX_FIELD_EQ(inName,"__caretEndOfLine") ) { return __caretEndOfLine_dyn(); }
		if (HX_FIELD_EQ(inName,"__startTextInput") ) { return __startTextInput_dyn(); }
		if (HX_FIELD_EQ(inName,"this_onMouseDown") ) { return this_onMouseDown_dyn(); }
		if (HX_FIELD_EQ(inName,"window_onKeyDown") ) { return window_onKeyDown_dyn(); }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"defaultTextFormat") ) { if (inCallProp == hx::paccAlways) return get_defaultTextFormat(); }
		if (HX_FIELD_EQ(inName,"displayAsPassword") ) { if (inCallProp == hx::paccAlways) return get_displayAsPassword(); }
		if (HX_FIELD_EQ(inName,"mouseWheelEnabled") ) { if (inCallProp == hx::paccAlways) return get_mouseWheelEnabled(); }
		if (HX_FIELD_EQ(inName,"selectionEndIndex") ) { if (inCallProp == hx::paccAlways) return get_selectionEndIndex(); }
		if (HX_FIELD_EQ(inName,"getCharBoundaries") ) { return getCharBoundaries_dyn(); }
		if (HX_FIELD_EQ(inName,"__stopCursorTimer") ) { return __stopCursorTimer_dyn(); }
		if (HX_FIELD_EQ(inName,"get_antiAliasType") ) { return get_antiAliasType_dyn(); }
		if (HX_FIELD_EQ(inName,"set_antiAliasType") ) { return set_antiAliasType_dyn(); }
		if (HX_FIELD_EQ(inName,"get_bottomScrollV") ) { return get_bottomScrollV_dyn(); }
		if (HX_FIELD_EQ(inName,"stage_onMouseMove") ) { return stage_onMouseMove_dyn(); }
		break;
	case 18:
		if (HX_FIELD_EQ(inName,"getLineIndexOfChar") ) { return getLineIndexOfChar_dyn(); }
		if (HX_FIELD_EQ(inName,"getParagraphLength") ) { return getParagraphLength_dyn(); }
		if (HX_FIELD_EQ(inName,"__startCursorTimer") ) { return __startCursorTimer_dyn(); }
		if (HX_FIELD_EQ(inName,"__updateTransforms") ) { return __updateTransforms_dyn(); }
		if (HX_FIELD_EQ(inName,"window_onTextInput") ) { return window_onTextInput_dyn(); }
		break;
	case 19:
		if (HX_FIELD_EQ(inName,"selectionBeginIndex") ) { if (inCallProp == hx::paccAlways) return get_selectionBeginIndex(); }
		if (HX_FIELD_EQ(inName,"__displayAsPassword") ) { return __displayAsPassword; }
		if (HX_FIELD_EQ(inName,"__mouseWheelEnabled") ) { return __mouseWheelEnabled; }
		if (HX_FIELD_EQ(inName,"getCharIndexAtPoint") ) { return getCharIndexAtPoint_dyn(); }
		if (HX_FIELD_EQ(inName,"getLineIndexAtPoint") ) { return getLineIndexAtPoint_dyn(); }
		if (HX_FIELD_EQ(inName,"replaceSelectedText") ) { return replaceSelectedText_dyn(); }
		if (HX_FIELD_EQ(inName,"__caretPreviousLine") ) { return __caretPreviousLine_dyn(); }
		if (HX_FIELD_EQ(inName,"__getAttributeMatch") ) { return __getAttributeMatch_dyn(); }
		if (HX_FIELD_EQ(inName,"get_backgroundColor") ) { return get_backgroundColor_dyn(); }
		if (HX_FIELD_EQ(inName,"set_backgroundColor") ) { return set_backgroundColor_dyn(); }
		if (HX_FIELD_EQ(inName,"this_onAddedToStage") ) { return this_onAddedToStage_dyn(); }
		break;
	case 20:
		if (HX_FIELD_EQ(inName,"__caretNextCharacter") ) { return __caretNextCharacter_dyn(); }
		break;
	case 21:
		if (HX_FIELD_EQ(inName,"get_defaultTextFormat") ) { return get_defaultTextFormat_dyn(); }
		if (HX_FIELD_EQ(inName,"set_defaultTextFormat") ) { return set_defaultTextFormat_dyn(); }
		if (HX_FIELD_EQ(inName,"get_displayAsPassword") ) { return get_displayAsPassword_dyn(); }
		if (HX_FIELD_EQ(inName,"set_displayAsPassword") ) { return set_displayAsPassword_dyn(); }
		if (HX_FIELD_EQ(inName,"get_mouseWheelEnabled") ) { return get_mouseWheelEnabled_dyn(); }
		if (HX_FIELD_EQ(inName,"set_mouseWheelEnabled") ) { return set_mouseWheelEnabled_dyn(); }
		if (HX_FIELD_EQ(inName,"get_selectionEndIndex") ) { return get_selectionEndIndex_dyn(); }
		break;
	case 22:
		if (HX_FIELD_EQ(inName,"__caretBeginningOfLine") ) { return __caretBeginningOfLine_dyn(); }
		break;
	case 23:
		if (HX_FIELD_EQ(inName,"getFirstCharInParagraph") ) { return getFirstCharInParagraph_dyn(); }
		if (HX_FIELD_EQ(inName,"get_selectionBeginIndex") ) { return get_selectionBeginIndex_dyn(); }
		break;
	case 24:
		if (HX_FIELD_EQ(inName,"__caretPreviousCharacter") ) { return __caretPreviousCharacter_dyn(); }
		break;
	case 29:
		if (HX_FIELD_EQ(inName,"__getCharIndexOnDifferentLine") ) { return __getCharIndexOnDifferentLine_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

bool TextField_obj::__GetStatic(const ::String &inName, Dynamic &outValue, hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 11:
		if (HX_FIELD_EQ(inName,"__regexFace") ) { outValue = __regexFace; return true;  }
		if (HX_FIELD_EQ(inName,"__regexHref") ) { outValue = __regexHref; return true;  }
		if (HX_FIELD_EQ(inName,"__regexSize") ) { outValue = __regexSize; return true;  }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"__regexAlign") ) { outValue = __regexAlign; return true;  }
		if (HX_FIELD_EQ(inName,"__regexColor") ) { outValue = __regexColor; return true;  }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"__regexIndent") ) { outValue = __regexIndent; return true;  }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"__regexHTMLTag") ) { outValue = __regexHTMLTag; return true;  }
		if (HX_FIELD_EQ(inName,"__regexLeading") ) { outValue = __regexLeading; return true;  }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"__regexBreakTag") ) { outValue = __regexBreakTag; return true;  }
		if (HX_FIELD_EQ(inName,"__regexEntities") ) { outValue = __regexEntities; return true;  }
		if (HX_FIELD_EQ(inName,"__regexTabStops") ) { outValue = __regexTabStops; return true;  }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"__regexLeftMargin") ) { outValue = __regexLeftMargin; return true;  }
		break;
	case 18:
		if (HX_FIELD_EQ(inName,"__regexBlockIndent") ) { outValue = __regexBlockIndent; return true;  }
		if (HX_FIELD_EQ(inName,"__regexRightMargin") ) { outValue = __regexRightMargin; return true;  }
		break;
	case 19:
		if (HX_FIELD_EQ(inName,"__defaultTextFormat") ) { outValue = __defaultTextFormat; return true;  }
		break;
	case 20:
		if (HX_FIELD_EQ(inName,"__missingFontWarning") ) { outValue = __missingFontWarning; return true;  }
	}
	return false;
}

Dynamic TextField_obj::__SetField(const ::String &inName,const Dynamic &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"text") ) { if (inCallProp == hx::paccAlways) return set_text(inValue); }
		if (HX_FIELD_EQ(inName,"type") ) { if (inCallProp == hx::paccAlways) return set_type(inValue); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"border") ) { if (inCallProp == hx::paccAlways) return set_border(inValue); }
		if (HX_FIELD_EQ(inName,"__text") ) { __text=inValue.Cast< ::String >(); return inValue; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"scrollH") ) { if (inCallProp == hx::paccAlways) return set_scrollH(inValue); }
		if (HX_FIELD_EQ(inName,"scrollV") ) { if (inCallProp == hx::paccAlways) return set_scrollV(inValue); }
		if (HX_FIELD_EQ(inName,"__dirty") ) { __dirty=inValue.Cast< bool >(); return inValue; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"autoSize") ) { if (inCallProp == hx::paccAlways) return set_autoSize(inValue); }
		if (HX_FIELD_EQ(inName,"htmlText") ) { if (inCallProp == hx::paccAlways) return set_htmlText(inValue); }
		if (HX_FIELD_EQ(inName,"maxChars") ) { if (inCallProp == hx::paccAlways) return set_maxChars(inValue); }
		if (HX_FIELD_EQ(inName,"restrict") ) { if (inCallProp == hx::paccAlways) return set_restrict(inValue); }
		if (HX_FIELD_EQ(inName,"wordWrap") ) { if (inCallProp == hx::paccAlways) return set_wordWrap(inValue); }
		if (HX_FIELD_EQ(inName,"__bounds") ) { __bounds=inValue.Cast< ::openfl::geom::Rectangle >(); return inValue; }
		if (HX_FIELD_EQ(inName,"__isHTML") ) { __isHTML=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"__symbol") ) { __symbol=inValue.Cast< ::openfl::_internal::symbols::DynamicTextSymbol >(); return inValue; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"multiline") ) { if (inCallProp == hx::paccAlways) return set_multiline(inValue); }
		if (HX_FIELD_EQ(inName,"sharpness") ) { if (inCallProp == hx::paccAlways) return set_sharpness(inValue); }
		if (HX_FIELD_EQ(inName,"textColor") ) { if (inCallProp == hx::paccAlways) return set_textColor(inValue); }
		if (HX_FIELD_EQ(inName,"__offsetX") ) { __offsetX=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"__offsetY") ) { __offsetY=inValue.Cast< Float >(); return inValue; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"background") ) { if (inCallProp == hx::paccAlways) return set_background(inValue); }
		if (HX_FIELD_EQ(inName,"embedFonts") ) { if (inCallProp == hx::paccAlways) return set_embedFonts(inValue); }
		if (HX_FIELD_EQ(inName,"selectable") ) { if (inCallProp == hx::paccAlways) return set_selectable(inValue); }
		if (HX_FIELD_EQ(inName,"__htmlText") ) { __htmlText=inValue.Cast< ::String >(); return inValue; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"borderColor") ) { if (inCallProp == hx::paccAlways) return set_borderColor(inValue); }
		if (HX_FIELD_EQ(inName,"gridFitType") ) { if (inCallProp == hx::paccAlways) return set_gridFitType(inValue); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"__caretIndex") ) { __caretIndex=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"__showCursor") ) { __showCursor=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"__textEngine") ) { __textEngine=inValue.Cast< ::openfl::_internal::text::TextEngine >(); return inValue; }
		if (HX_FIELD_EQ(inName,"__textFormat") ) { __textFormat=inValue.Cast< ::openfl::text::TextFormat >(); return inValue; }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"antiAliasType") ) { if (inCallProp == hx::paccAlways) return set_antiAliasType(inValue); }
		if (HX_FIELD_EQ(inName,"__cursorTimer") ) { __cursorTimer=inValue.Cast< ::haxe::Timer >(); return inValue; }
		if (HX_FIELD_EQ(inName,"__layoutDirty") ) { __layoutDirty=inValue.Cast< bool >(); return inValue; }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"__inputEnabled") ) { __inputEnabled=inValue.Cast< bool >(); return inValue; }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"backgroundColor") ) { if (inCallProp == hx::paccAlways) return set_backgroundColor(inValue); }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"__selectionIndex") ) { __selectionIndex=inValue.Cast< int >(); return inValue; }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"defaultTextFormat") ) { if (inCallProp == hx::paccAlways) return set_defaultTextFormat(inValue); }
		if (HX_FIELD_EQ(inName,"displayAsPassword") ) { if (inCallProp == hx::paccAlways) return set_displayAsPassword(inValue); }
		if (HX_FIELD_EQ(inName,"mouseWheelEnabled") ) { if (inCallProp == hx::paccAlways) return set_mouseWheelEnabled(inValue); }
		break;
	case 19:
		if (HX_FIELD_EQ(inName,"__displayAsPassword") ) { __displayAsPassword=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"__mouseWheelEnabled") ) { __mouseWheelEnabled=inValue.Cast< bool >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

bool TextField_obj::__SetStatic(const ::String &inName,Dynamic &ioValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 11:
		if (HX_FIELD_EQ(inName,"__regexFace") ) { __regexFace=ioValue.Cast< ::EReg >(); return true; }
		if (HX_FIELD_EQ(inName,"__regexHref") ) { __regexHref=ioValue.Cast< ::EReg >(); return true; }
		if (HX_FIELD_EQ(inName,"__regexSize") ) { __regexSize=ioValue.Cast< ::EReg >(); return true; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"__regexAlign") ) { __regexAlign=ioValue.Cast< ::EReg >(); return true; }
		if (HX_FIELD_EQ(inName,"__regexColor") ) { __regexColor=ioValue.Cast< ::EReg >(); return true; }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"__regexIndent") ) { __regexIndent=ioValue.Cast< ::EReg >(); return true; }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"__regexHTMLTag") ) { __regexHTMLTag=ioValue.Cast< ::EReg >(); return true; }
		if (HX_FIELD_EQ(inName,"__regexLeading") ) { __regexLeading=ioValue.Cast< ::EReg >(); return true; }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"__regexBreakTag") ) { __regexBreakTag=ioValue.Cast< ::EReg >(); return true; }
		if (HX_FIELD_EQ(inName,"__regexEntities") ) { __regexEntities=ioValue.Cast< Array< ::Dynamic > >(); return true; }
		if (HX_FIELD_EQ(inName,"__regexTabStops") ) { __regexTabStops=ioValue.Cast< ::EReg >(); return true; }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"__regexLeftMargin") ) { __regexLeftMargin=ioValue.Cast< ::EReg >(); return true; }
		break;
	case 18:
		if (HX_FIELD_EQ(inName,"__regexBlockIndent") ) { __regexBlockIndent=ioValue.Cast< ::EReg >(); return true; }
		if (HX_FIELD_EQ(inName,"__regexRightMargin") ) { __regexRightMargin=ioValue.Cast< ::EReg >(); return true; }
		break;
	case 19:
		if (HX_FIELD_EQ(inName,"__defaultTextFormat") ) { __defaultTextFormat=ioValue.Cast< ::openfl::text::TextFormat >(); return true; }
		break;
	case 20:
		if (HX_FIELD_EQ(inName,"__missingFontWarning") ) { __missingFontWarning=ioValue.Cast< ::haxe::ds::StringMap >(); return true; }
	}
	return false;
}

void TextField_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("antiAliasType","\x68","\xc4","\xfa","\xe7"));
	outFields->push(HX_HCSTRING("autoSize","\xd0","\x8f","\x79","\x2f"));
	outFields->push(HX_HCSTRING("background","\xee","\x93","\x1d","\x26"));
	outFields->push(HX_HCSTRING("backgroundColor","\x95","\x4e","\x47","\x0d"));
	outFields->push(HX_HCSTRING("border","\xec","\x4c","\x1a","\x64"));
	outFields->push(HX_HCSTRING("borderColor","\xd7","\x3c","\xd5","\xd6"));
	outFields->push(HX_HCSTRING("bottomScrollV","\xfe","\xf7","\x87","\x8b"));
	outFields->push(HX_HCSTRING("caretIndex","\x8f","\xb6","\x5b","\xdd"));
	outFields->push(HX_HCSTRING("defaultTextFormat","\xe5","\xc7","\xe0","\x0a"));
	outFields->push(HX_HCSTRING("displayAsPassword","\x0f","\xcb","\x96","\xea"));
	outFields->push(HX_HCSTRING("embedFonts","\x2b","\xc7","\xe1","\x8e"));
	outFields->push(HX_HCSTRING("gridFitType","\x05","\xf3","\x13","\xb4"));
	outFields->push(HX_HCSTRING("htmlText","\xb8","\x1f","\x38","\x10"));
	outFields->push(HX_HCSTRING("length","\xe6","\x94","\x07","\x9f"));
	outFields->push(HX_HCSTRING("maxChars","\x99","\xef","\xd0","\xef"));
	outFields->push(HX_HCSTRING("maxScrollH","\x57","\xad","\xfc","\x9a"));
	outFields->push(HX_HCSTRING("maxScrollV","\x65","\xad","\xfc","\x9a"));
	outFields->push(HX_HCSTRING("mouseWheelEnabled","\xeb","\x16","\x54","\x65"));
	outFields->push(HX_HCSTRING("multiline","\xed","\xd2","\x11","\x9e"));
	outFields->push(HX_HCSTRING("numLines","\xd9","\xf1","\x11","\x32"));
	outFields->push(HX_HCSTRING("restrict","\x3c","\xcb","\x9e","\xf1"));
	outFields->push(HX_HCSTRING("scrollH","\x9b","\x33","\xd8","\x30"));
	outFields->push(HX_HCSTRING("scrollV","\xa9","\x33","\xd8","\x30"));
	outFields->push(HX_HCSTRING("selectable","\x96","\xb6","\x2a","\xc4"));
	outFields->push(HX_HCSTRING("selectionBeginIndex","\x95","\x7f","\x17","\xd7"));
	outFields->push(HX_HCSTRING("selectionEndIndex","\xa3","\x0d","\x42","\x4b"));
	outFields->push(HX_HCSTRING("sharpness","\x81","\x22","\x25","\x1b"));
	outFields->push(HX_HCSTRING("text","\xad","\xcc","\xf9","\x4c"));
	outFields->push(HX_HCSTRING("textColor","\x76","\x01","\x4a","\xe3"));
	outFields->push(HX_HCSTRING("textHeight","\x74","\x88","\x3c","\x39"));
	outFields->push(HX_HCSTRING("textWidth","\x19","\x46","\x50","\x63"));
	outFields->push(HX_HCSTRING("type","\xba","\xf2","\x08","\x4d"));
	outFields->push(HX_HCSTRING("wordWrap","\xb4","\x14","\xdb","\x00"));
	outFields->push(HX_HCSTRING("__bounds","\x95","\xf1","\x4c","\x0e"));
	outFields->push(HX_HCSTRING("__caretIndex","\xaf","\x31","\xef","\x15"));
	outFields->push(HX_HCSTRING("__cursorTimer","\xef","\x59","\x8f","\xe1"));
	outFields->push(HX_HCSTRING("__dirty","\xf2","\xa8","\x2e","\x44"));
	outFields->push(HX_HCSTRING("__displayAsPassword","\xef","\xf3","\x86","\x9d"));
	outFields->push(HX_HCSTRING("__inputEnabled","\xb7","\xe0","\x1d","\x37"));
	outFields->push(HX_HCSTRING("__isHTML","\x75","\x61","\x94","\x0a"));
	outFields->push(HX_HCSTRING("__layoutDirty","\xe8","\xe9","\x31","\xd3"));
	outFields->push(HX_HCSTRING("__mouseWheelEnabled","\xcb","\x3f","\x44","\x18"));
	outFields->push(HX_HCSTRING("__offsetX","\x45","\x5a","\xb3","\x58"));
	outFields->push(HX_HCSTRING("__offsetY","\x46","\x5a","\xb3","\x58"));
	outFields->push(HX_HCSTRING("__selectionIndex","\x46","\x0a","\xc3","\x7d"));
	outFields->push(HX_HCSTRING("__showCursor","\xd3","\xae","\xf0","\xe0"));
	outFields->push(HX_HCSTRING("__symbol","\x78","\x1a","\x0d","\x97"));
	outFields->push(HX_HCSTRING("__text","\xcd","\x2f","\xf2","\xfb"));
	outFields->push(HX_HCSTRING("__htmlText","\xd8","\x92","\x70","\xb3"));
	outFields->push(HX_HCSTRING("__textEngine","\x6f","\x43","\x08","\x6c"));
	outFields->push(HX_HCSTRING("__textFormat","\xe4","\x8a","\x12","\x6d"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsObject /*::openfl::geom::Rectangle*/ ,(int)offsetof(TextField_obj,__bounds),HX_HCSTRING("__bounds","\x95","\xf1","\x4c","\x0e")},
	{hx::fsInt,(int)offsetof(TextField_obj,__caretIndex),HX_HCSTRING("__caretIndex","\xaf","\x31","\xef","\x15")},
	{hx::fsObject /*::haxe::Timer*/ ,(int)offsetof(TextField_obj,__cursorTimer),HX_HCSTRING("__cursorTimer","\xef","\x59","\x8f","\xe1")},
	{hx::fsBool,(int)offsetof(TextField_obj,__dirty),HX_HCSTRING("__dirty","\xf2","\xa8","\x2e","\x44")},
	{hx::fsBool,(int)offsetof(TextField_obj,__displayAsPassword),HX_HCSTRING("__displayAsPassword","\xef","\xf3","\x86","\x9d")},
	{hx::fsBool,(int)offsetof(TextField_obj,__inputEnabled),HX_HCSTRING("__inputEnabled","\xb7","\xe0","\x1d","\x37")},
	{hx::fsBool,(int)offsetof(TextField_obj,__isHTML),HX_HCSTRING("__isHTML","\x75","\x61","\x94","\x0a")},
	{hx::fsBool,(int)offsetof(TextField_obj,__layoutDirty),HX_HCSTRING("__layoutDirty","\xe8","\xe9","\x31","\xd3")},
	{hx::fsBool,(int)offsetof(TextField_obj,__mouseWheelEnabled),HX_HCSTRING("__mouseWheelEnabled","\xcb","\x3f","\x44","\x18")},
	{hx::fsFloat,(int)offsetof(TextField_obj,__offsetX),HX_HCSTRING("__offsetX","\x45","\x5a","\xb3","\x58")},
	{hx::fsFloat,(int)offsetof(TextField_obj,__offsetY),HX_HCSTRING("__offsetY","\x46","\x5a","\xb3","\x58")},
	{hx::fsInt,(int)offsetof(TextField_obj,__selectionIndex),HX_HCSTRING("__selectionIndex","\x46","\x0a","\xc3","\x7d")},
	{hx::fsBool,(int)offsetof(TextField_obj,__showCursor),HX_HCSTRING("__showCursor","\xd3","\xae","\xf0","\xe0")},
	{hx::fsObject /*::openfl::_internal::symbols::DynamicTextSymbol*/ ,(int)offsetof(TextField_obj,__symbol),HX_HCSTRING("__symbol","\x78","\x1a","\x0d","\x97")},
	{hx::fsString,(int)offsetof(TextField_obj,__text),HX_HCSTRING("__text","\xcd","\x2f","\xf2","\xfb")},
	{hx::fsString,(int)offsetof(TextField_obj,__htmlText),HX_HCSTRING("__htmlText","\xd8","\x92","\x70","\xb3")},
	{hx::fsObject /*::openfl::_internal::text::TextEngine*/ ,(int)offsetof(TextField_obj,__textEngine),HX_HCSTRING("__textEngine","\x6f","\x43","\x08","\x6c")},
	{hx::fsObject /*::openfl::text::TextFormat*/ ,(int)offsetof(TextField_obj,__textFormat),HX_HCSTRING("__textFormat","\xe4","\x8a","\x12","\x6d")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo sStaticStorageInfo[] = {
	{hx::fsObject /*::openfl::text::TextFormat*/ ,(void *) &TextField_obj::__defaultTextFormat,HX_HCSTRING("__defaultTextFormat","\xc5","\xf0","\xd0","\xbd")},
	{hx::fsObject /*::haxe::ds::StringMap*/ ,(void *) &TextField_obj::__missingFontWarning,HX_HCSTRING("__missingFontWarning","\xa7","\x0d","\x0e","\x1a")},
	{hx::fsObject /*::EReg*/ ,(void *) &TextField_obj::__regexAlign,HX_HCSTRING("__regexAlign","\x9e","\x21","\xd1","\x2d")},
	{hx::fsObject /*::EReg*/ ,(void *) &TextField_obj::__regexColor,HX_HCSTRING("__regexColor","\x3c","\x3c","\x9c","\x56")},
	{hx::fsObject /*::EReg*/ ,(void *) &TextField_obj::__regexBlockIndent,HX_HCSTRING("__regexBlockIndent","\x32","\x61","\xa3","\xa8")},
	{hx::fsObject /*::EReg*/ ,(void *) &TextField_obj::__regexBreakTag,HX_HCSTRING("__regexBreakTag","\xa2","\xf1","\x6b","\xe6")},
	{hx::fsObject /*Array< ::Dynamic >*/ ,(void *) &TextField_obj::__regexEntities,HX_HCSTRING("__regexEntities","\x08","\x59","\x3f","\x8c")},
	{hx::fsObject /*::EReg*/ ,(void *) &TextField_obj::__regexFace,HX_HCSTRING("__regexFace","\xe4","\xc7","\x66","\x12")},
	{hx::fsObject /*::EReg*/ ,(void *) &TextField_obj::__regexHref,HX_HCSTRING("__regexHref","\x32","\x1d","\xc6","\x13")},
	{hx::fsObject /*::EReg*/ ,(void *) &TextField_obj::__regexHTMLTag,HX_HCSTRING("__regexHTMLTag","\xe8","\x74","\xf4","\x76")},
	{hx::fsObject /*::EReg*/ ,(void *) &TextField_obj::__regexIndent,HX_HCSTRING("__regexIndent","\x73","\xbf","\x84","\x3f")},
	{hx::fsObject /*::EReg*/ ,(void *) &TextField_obj::__regexLeading,HX_HCSTRING("__regexLeading","\xdf","\x25","\x4c","\x7d")},
	{hx::fsObject /*::EReg*/ ,(void *) &TextField_obj::__regexLeftMargin,HX_HCSTRING("__regexLeftMargin","\x1c","\x6e","\x33","\xf3")},
	{hx::fsObject /*::EReg*/ ,(void *) &TextField_obj::__regexRightMargin,HX_HCSTRING("__regexRightMargin","\xc3","\x30","\xd7","\x98")},
	{hx::fsObject /*::EReg*/ ,(void *) &TextField_obj::__regexTabStops,HX_HCSTRING("__regexTabStops","\x63","\x56","\x64","\xec")},
	{hx::fsObject /*::EReg*/ ,(void *) &TextField_obj::__regexSize,HX_HCSTRING("__regexSize","\x08","\xb4","\x04","\x1b")},
	{ hx::fsUnknown, 0, null()}
};
#endif

static ::String sMemberFields[] = {
	HX_HCSTRING("__bounds","\x95","\xf1","\x4c","\x0e"),
	HX_HCSTRING("__caretIndex","\xaf","\x31","\xef","\x15"),
	HX_HCSTRING("__cursorTimer","\xef","\x59","\x8f","\xe1"),
	HX_HCSTRING("__dirty","\xf2","\xa8","\x2e","\x44"),
	HX_HCSTRING("__displayAsPassword","\xef","\xf3","\x86","\x9d"),
	HX_HCSTRING("__inputEnabled","\xb7","\xe0","\x1d","\x37"),
	HX_HCSTRING("__isHTML","\x75","\x61","\x94","\x0a"),
	HX_HCSTRING("__layoutDirty","\xe8","\xe9","\x31","\xd3"),
	HX_HCSTRING("__mouseWheelEnabled","\xcb","\x3f","\x44","\x18"),
	HX_HCSTRING("__offsetX","\x45","\x5a","\xb3","\x58"),
	HX_HCSTRING("__offsetY","\x46","\x5a","\xb3","\x58"),
	HX_HCSTRING("__selectionIndex","\x46","\x0a","\xc3","\x7d"),
	HX_HCSTRING("__showCursor","\xd3","\xae","\xf0","\xe0"),
	HX_HCSTRING("__symbol","\x78","\x1a","\x0d","\x97"),
	HX_HCSTRING("__text","\xcd","\x2f","\xf2","\xfb"),
	HX_HCSTRING("__htmlText","\xd8","\x92","\x70","\xb3"),
	HX_HCSTRING("__textEngine","\x6f","\x43","\x08","\x6c"),
	HX_HCSTRING("__textFormat","\xe4","\x8a","\x12","\x6d"),
	HX_HCSTRING("appendText","\xa7","\xcf","\x05","\x5b"),
	HX_HCSTRING("getCharBoundaries","\x74","\x85","\xa1","\x8b"),
	HX_HCSTRING("getCharIndexAtPoint","\x17","\xee","\x9c","\xaa"),
	HX_HCSTRING("getFirstCharInParagraph","\xf9","\x5c","\x3d","\x08"),
	HX_HCSTRING("getLineIndexAtPoint","\x35","\xdc","\x50","\x98"),
	HX_HCSTRING("getLineIndexOfChar","\xb5","\x68","\x99","\xa1"),
	HX_HCSTRING("getLineLength","\x30","\xec","\x21","\xd0"),
	HX_HCSTRING("getLineMetrics","\xb9","\xab","\xc6","\xf2"),
	HX_HCSTRING("getLineOffset","\xdd","\xee","\x59","\x91"),
	HX_HCSTRING("getLineText","\x77","\xdd","\x16","\xb0"),
	HX_HCSTRING("getParagraphLength","\xfe","\x0e","\x4e","\xc4"),
	HX_HCSTRING("getTextFormat","\xfa","\x6b","\xf1","\x90"),
	HX_HCSTRING("replaceSelectedText","\xfc","\xfe","\x33","\xbb"),
	HX_HCSTRING("replaceText","\x01","\x6b","\x95","\x61"),
	HX_HCSTRING("setSelection","\x4a","\xb8","\x6a","\xb2"),
	HX_HCSTRING("setTextFormat","\x06","\x4e","\xf7","\xd5"),
	HX_HCSTRING("__caretBeginningOfLine","\x45","\xc9","\x47","\xfd"),
	HX_HCSTRING("__caretEndOfLine","\x03","\x74","\xb1","\x5c"),
	HX_HCSTRING("__caretNextCharacter","\xd3","\x7b","\x4f","\xea"),
	HX_HCSTRING("__caretNextLine","\x0a","\x68","\xad","\x0d"),
	HX_HCSTRING("__caretPreviousCharacter","\x8f","\xce","\x6c","\x11"),
	HX_HCSTRING("__caretPreviousLine","\xce","\x0e","\x89","\x48"),
	HX_HCSTRING("__dispatch","\xda","\x41","\x9c","\xc1"),
	HX_HCSTRING("__fromSymbol","\x82","\x2f","\xb5","\x6a"),
	HX_HCSTRING("__getAttributeMatch","\x9f","\x3b","\x2c","\x45"),
	HX_HCSTRING("__getBounds","\x8b","\x58","\xa0","\x10"),
	HX_HCSTRING("__getCharIndexOnDifferentLine","\x08","\x76","\x0f","\x0a"),
	HX_HCSTRING("__getCursor","\xec","\x60","\x6b","\xe9"),
	HX_HCSTRING("__getGroup","\xe9","\x35","\x04","\x9d"),
	HX_HCSTRING("__getPosition","\x3f","\xa4","\x66","\x39"),
	HX_HCSTRING("__hitTest","\x25","\xb1","\xcd","\x63"),
	HX_HCSTRING("__hitTestMask","\xb1","\x14","\xfd","\x3b"),
	HX_HCSTRING("__renderCairo","\x32","\x9e","\x42","\x55"),
	HX_HCSTRING("__renderCanvas","\xee","\xdb","\x58","\x48"),
	HX_HCSTRING("__renderDOM","\xac","\xf5","\x83","\xfb"),
	HX_HCSTRING("__renderGL","\x1b","\x1e","\x14","\x56"),
	HX_HCSTRING("__startCursorTimer","\xed","\x46","\xa3","\x83"),
	HX_HCSTRING("__startTextInput","\x7b","\xae","\x85","\xaa"),
	HX_HCSTRING("__stopCursorTimer","\x0d","\xcd","\x6c","\x26"),
	HX_HCSTRING("__stopTextInput","\x9b","\x6c","\xcb","\xa1"),
	HX_HCSTRING("__updateLayout","\xb3","\xd8","\x3c","\x79"),
	HX_HCSTRING("__updateText","\x76","\x32","\x42","\x3e"),
	HX_HCSTRING("__updateTransforms","\x10","\xf4","\xb0","\x50"),
	HX_HCSTRING("get_antiAliasType","\xbf","\xcf","\x6a","\xee"),
	HX_HCSTRING("set_antiAliasType","\xcb","\xa7","\xd8","\x11"),
	HX_HCSTRING("get_autoSize","\xd9","\x43","\x93","\xe4"),
	HX_HCSTRING("set_autoSize","\x4d","\x67","\x8c","\xf9"),
	HX_HCSTRING("get_background","\x37","\x1c","\x13","\x9c"),
	HX_HCSTRING("set_background","\xab","\x04","\x33","\xbc"),
	HX_HCSTRING("get_backgroundColor","\xac","\x1d","\x52","\x98"),
	HX_HCSTRING("set_backgroundColor","\xb8","\x10","\xef","\xd4"),
	HX_HCSTRING("get_border","\xb5","\xbc","\xa1","\x54"),
	HX_HCSTRING("set_border","\x29","\x5b","\x1f","\x58"),
	HX_HCSTRING("get_borderColor","\x6e","\xf4","\xb6","\x97"),
	HX_HCSTRING("set_borderColor","\x7a","\x71","\x82","\x93"),
	HX_HCSTRING("get_bottomScrollV","\x55","\x03","\xf8","\x91"),
	HX_HCSTRING("get_caretIndex","\xd8","\x3e","\x51","\x53"),
	HX_HCSTRING("get_defaultTextFormat","\xbc","\xca","\x8e","\x89"),
	HX_HCSTRING("set_defaultTextFormat","\xc8","\x98","\x97","\xdd"),
	HX_HCSTRING("get_displayAsPassword","\xe6","\xcd","\x44","\x69"),
	HX_HCSTRING("set_displayAsPassword","\xf2","\x9b","\x4d","\xbd"),
	HX_HCSTRING("get_embedFonts","\x74","\x4f","\xd7","\x04"),
	HX_HCSTRING("set_embedFonts","\xe8","\x37","\xf7","\x24"),
	HX_HCSTRING("get_gridFitType","\x9c","\xaa","\xf5","\x74"),
	HX_HCSTRING("set_gridFitType","\xa8","\x27","\xc1","\x70"),
	HX_HCSTRING("get_height","\xb0","\x77","\xd3","\xf2"),
	HX_HCSTRING("set_height","\x24","\x16","\x51","\xf6"),
	HX_HCSTRING("get_htmlText","\xc1","\xd3","\x51","\xc5"),
	HX_HCSTRING("set_htmlText","\x35","\xf7","\x4a","\xda"),
	HX_HCSTRING("get_length","\xaf","\x04","\x8f","\x8f"),
	HX_HCSTRING("get_maxChars","\xa2","\xa3","\xea","\xa4"),
	HX_HCSTRING("set_maxChars","\x16","\xc7","\xe3","\xb9"),
	HX_HCSTRING("get_maxScrollH","\xa0","\x35","\xf2","\x10"),
	HX_HCSTRING("get_maxScrollV","\xae","\x35","\xf2","\x10"),
	HX_HCSTRING("get_mouseWheelEnabled","\xc2","\x19","\x02","\xe4"),
	HX_HCSTRING("set_mouseWheelEnabled","\xce","\xe7","\x0a","\x38"),
	HX_HCSTRING("get_multiline","\xc4","\xa6","\x75","\x5f"),
	HX_HCSTRING("set_multiline","\xd0","\x88","\x7b","\xa4"),
	HX_HCSTRING("get_numLines","\xe2","\xa5","\x2b","\xe7"),
	HX_HCSTRING("get_restrict","\x45","\x7f","\xb8","\xa6"),
	HX_HCSTRING("set_restrict","\xb9","\xa2","\xb1","\xbb"),
	HX_HCSTRING("get_scrollH","\xb2","\x93","\xd2","\xb6"),
	HX_HCSTRING("set_scrollH","\xbe","\x9a","\x3f","\xc1"),
	HX_HCSTRING("get_scrollV","\xc0","\x93","\xd2","\xb6"),
	HX_HCSTRING("set_scrollV","\xcc","\x9a","\x3f","\xc1"),
	HX_HCSTRING("get_selectable","\xdf","\x3e","\x20","\x3a"),
	HX_HCSTRING("set_selectable","\x53","\x27","\x40","\x5a"),
	HX_HCSTRING("get_selectionBeginIndex","\x2c","\x26","\x6d","\xdf"),
	HX_HCSTRING("get_selectionEndIndex","\x7a","\x10","\xf0","\xc9"),
	HX_HCSTRING("get_sharpness","\x58","\xf6","\x88","\xdc"),
	HX_HCSTRING("set_sharpness","\x64","\xd8","\x8e","\x21"),
	HX_HCSTRING("get_text","\x36","\x88","\xb4","\xcc"),
	HX_HCSTRING("set_text","\xaa","\xe1","\x11","\x7b"),
	HX_HCSTRING("get_textColor","\x4d","\xd5","\xad","\xa4"),
	HX_HCSTRING("set_textColor","\x59","\xb7","\xb3","\xe9"),
	HX_HCSTRING("get_textWidth","\xf0","\x19","\xb4","\x24"),
	HX_HCSTRING("get_textHeight","\xbd","\x10","\x32","\xaf"),
	HX_HCSTRING("get_type","\x43","\xae","\xc3","\xcc"),
	HX_HCSTRING("set_type","\xb7","\x07","\x21","\x7b"),
	HX_HCSTRING("get_width","\x5d","\x12","\x0c","\x0e"),
	HX_HCSTRING("set_width","\x69","\xfe","\x5c","\xf1"),
	HX_HCSTRING("get_wordWrap","\xbd","\xc8","\xf4","\xb5"),
	HX_HCSTRING("set_wordWrap","\x31","\xec","\xed","\xca"),
	HX_HCSTRING("stage_onMouseMove","\x76","\xbc","\x61","\xde"),
	HX_HCSTRING("stage_onMouseUp","\x80","\xac","\x07","\xd1"),
	HX_HCSTRING("this_onAddedToStage","\x23","\x9e","\xce","\x72"),
	HX_HCSTRING("this_onFocusIn","\x1d","\x62","\xfb","\xdc"),
	HX_HCSTRING("this_onFocusOut","\x56","\x0b","\xff","\x7e"),
	HX_HCSTRING("this_onMouseDown","\x67","\x5d","\xaa","\x6d"),
	HX_HCSTRING("window_onKeyDown","\xf3","\x7d","\x3b","\xd1"),
	HX_HCSTRING("window_onTextInput","\xef","\xa0","\x6a","\xc0"),
	::String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(TextField_obj::__mClass,"__mClass");
	HX_MARK_MEMBER_NAME(TextField_obj::__defaultTextFormat,"__defaultTextFormat");
	HX_MARK_MEMBER_NAME(TextField_obj::__missingFontWarning,"__missingFontWarning");
	HX_MARK_MEMBER_NAME(TextField_obj::__regexAlign,"__regexAlign");
	HX_MARK_MEMBER_NAME(TextField_obj::__regexColor,"__regexColor");
	HX_MARK_MEMBER_NAME(TextField_obj::__regexBlockIndent,"__regexBlockIndent");
	HX_MARK_MEMBER_NAME(TextField_obj::__regexBreakTag,"__regexBreakTag");
	HX_MARK_MEMBER_NAME(TextField_obj::__regexEntities,"__regexEntities");
	HX_MARK_MEMBER_NAME(TextField_obj::__regexFace,"__regexFace");
	HX_MARK_MEMBER_NAME(TextField_obj::__regexHref,"__regexHref");
	HX_MARK_MEMBER_NAME(TextField_obj::__regexHTMLTag,"__regexHTMLTag");
	HX_MARK_MEMBER_NAME(TextField_obj::__regexIndent,"__regexIndent");
	HX_MARK_MEMBER_NAME(TextField_obj::__regexLeading,"__regexLeading");
	HX_MARK_MEMBER_NAME(TextField_obj::__regexLeftMargin,"__regexLeftMargin");
	HX_MARK_MEMBER_NAME(TextField_obj::__regexRightMargin,"__regexRightMargin");
	HX_MARK_MEMBER_NAME(TextField_obj::__regexTabStops,"__regexTabStops");
	HX_MARK_MEMBER_NAME(TextField_obj::__regexSize,"__regexSize");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(TextField_obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(TextField_obj::__defaultTextFormat,"__defaultTextFormat");
	HX_VISIT_MEMBER_NAME(TextField_obj::__missingFontWarning,"__missingFontWarning");
	HX_VISIT_MEMBER_NAME(TextField_obj::__regexAlign,"__regexAlign");
	HX_VISIT_MEMBER_NAME(TextField_obj::__regexColor,"__regexColor");
	HX_VISIT_MEMBER_NAME(TextField_obj::__regexBlockIndent,"__regexBlockIndent");
	HX_VISIT_MEMBER_NAME(TextField_obj::__regexBreakTag,"__regexBreakTag");
	HX_VISIT_MEMBER_NAME(TextField_obj::__regexEntities,"__regexEntities");
	HX_VISIT_MEMBER_NAME(TextField_obj::__regexFace,"__regexFace");
	HX_VISIT_MEMBER_NAME(TextField_obj::__regexHref,"__regexHref");
	HX_VISIT_MEMBER_NAME(TextField_obj::__regexHTMLTag,"__regexHTMLTag");
	HX_VISIT_MEMBER_NAME(TextField_obj::__regexIndent,"__regexIndent");
	HX_VISIT_MEMBER_NAME(TextField_obj::__regexLeading,"__regexLeading");
	HX_VISIT_MEMBER_NAME(TextField_obj::__regexLeftMargin,"__regexLeftMargin");
	HX_VISIT_MEMBER_NAME(TextField_obj::__regexRightMargin,"__regexRightMargin");
	HX_VISIT_MEMBER_NAME(TextField_obj::__regexTabStops,"__regexTabStops");
	HX_VISIT_MEMBER_NAME(TextField_obj::__regexSize,"__regexSize");
};

#endif

hx::Class TextField_obj::__mClass;

static ::String sStaticFields[] = {
	HX_HCSTRING("__defaultTextFormat","\xc5","\xf0","\xd0","\xbd"),
	HX_HCSTRING("__missingFontWarning","\xa7","\x0d","\x0e","\x1a"),
	HX_HCSTRING("__regexAlign","\x9e","\x21","\xd1","\x2d"),
	HX_HCSTRING("__regexColor","\x3c","\x3c","\x9c","\x56"),
	HX_HCSTRING("__regexBlockIndent","\x32","\x61","\xa3","\xa8"),
	HX_HCSTRING("__regexBreakTag","\xa2","\xf1","\x6b","\xe6"),
	HX_HCSTRING("__regexEntities","\x08","\x59","\x3f","\x8c"),
	HX_HCSTRING("__regexFace","\xe4","\xc7","\x66","\x12"),
	HX_HCSTRING("__regexHref","\x32","\x1d","\xc6","\x13"),
	HX_HCSTRING("__regexHTMLTag","\xe8","\x74","\xf4","\x76"),
	HX_HCSTRING("__regexIndent","\x73","\xbf","\x84","\x3f"),
	HX_HCSTRING("__regexLeading","\xdf","\x25","\x4c","\x7d"),
	HX_HCSTRING("__regexLeftMargin","\x1c","\x6e","\x33","\xf3"),
	HX_HCSTRING("__regexRightMargin","\xc3","\x30","\xd7","\x98"),
	HX_HCSTRING("__regexTabStops","\x63","\x56","\x64","\xec"),
	HX_HCSTRING("__regexSize","\x08","\xb4","\x04","\x1b"),
	::String(null()) };

void TextField_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("openfl.text.TextField","\xca","\xa8","\xd5","\xef");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &TextField_obj::__GetStatic;
	__mClass->mSetStaticField = &TextField_obj::__SetStatic;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(sStaticFields);
	__mClass->mMembers = hx::Class_obj::dupFunctions(sMemberFields);
	__mClass->mCanCast = hx::TCanCast< TextField_obj >;
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

void TextField_obj::__boot()
{
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
	__missingFontWarning= _Function_0_1::Block();
	__regexAlign= ::EReg_obj::__new(HX_HCSTRING("align=(\"([^\"]+)\"|'([^']+)')","\x46","\x80","\x3f","\x0e"),HX_HCSTRING("i","\x69","\x00","\x00","\x00"));
	__regexColor= ::EReg_obj::__new(HX_HCSTRING("color=(\"#([^\"]+)\"|'#([^']+)')","\x36","\x15","\x0f","\x76"),HX_HCSTRING("i","\x69","\x00","\x00","\x00"));
	__regexBlockIndent= ::EReg_obj::__new(HX_HCSTRING("blockindent=(\"([^\"]+)\"|'([^']+)')","\xfa","\xc9","\x96","\x24"),HX_HCSTRING("i","\x69","\x00","\x00","\x00"));
	__regexBreakTag= ::EReg_obj::__new(HX_HCSTRING("<br\\s*/?>","\x47","\xed","\x43","\xf6"),HX_HCSTRING("gi","\x22","\x5a","\x00","\x00"));
struct _Function_0_2{
	inline static Array< ::Dynamic > Block( ){
		{
			::EReg tmp = ::EReg_obj::__new(HX_HCSTRING("&quot;","\x2c","\xd9","\x81","\x8f"),HX_HCSTRING("g","\x67","\x00","\x00","\x00"));
			::EReg tmp1 = ::EReg_obj::__new(HX_HCSTRING("&apos;","\x22","\x7f","\xca","\x55"),HX_HCSTRING("g","\x67","\x00","\x00","\x00"));
			::EReg tmp2 = ::EReg_obj::__new(HX_HCSTRING("&amp;","\xdd","\xd4","\xaa","\x21"),HX_HCSTRING("g","\x67","\x00","\x00","\x00"));
			::EReg tmp3 = ::EReg_obj::__new(HX_HCSTRING("&lt;","\x4d","\x74","\x70","\x19"),HX_HCSTRING("g","\x67","\x00","\x00","\x00"));
			::EReg tmp4 = ::EReg_obj::__new(HX_HCSTRING("&gt;","\x08","\xa9","\x6c","\x19"),HX_HCSTRING("g","\x67","\x00","\x00","\x00"));
			return Array_obj< ::Dynamic >::__new().Add(tmp).Add(tmp1).Add(tmp2).Add(tmp3).Add(tmp4);
		}
		return null();
	}
};
	__regexEntities= _Function_0_2::Block();
	__regexFace= ::EReg_obj::__new(HX_HCSTRING("face=(\"([^\"]+)\"|'([^']+)')","\x1e","\x00","\x2b","\x89"),HX_HCSTRING("i","\x69","\x00","\x00","\x00"));
	__regexHref= ::EReg_obj::__new(HX_HCSTRING("href=(\"([^\"]+)\"|'([^']+)')","\xec","\x3f","\xeb","\xb5"),HX_HCSTRING("i","\x69","\x00","\x00","\x00"));
	__regexHTMLTag= ::EReg_obj::__new(HX_HCSTRING("<.*?>","\x97","\xb4","\x92","\xaa"),HX_HCSTRING("g","\x67","\x00","\x00","\x00"));
	__regexIndent= ::EReg_obj::__new(HX_HCSTRING(" indent=(\"([^\"]+)\"|'([^']+)')","\x4d","\xdb","\x5b","\x9f"),HX_HCSTRING("i","\x69","\x00","\x00","\x00"));
	__regexLeading= ::EReg_obj::__new(HX_HCSTRING("leading=(\"([^\"]+)\"|'([^']+)')","\x07","\x25","\x07","\xae"),HX_HCSTRING("i","\x69","\x00","\x00","\x00"));
	__regexLeftMargin= ::EReg_obj::__new(HX_HCSTRING("leftmargin=(\"([^\"]+)\"|'([^']+)')","\xf6","\xe4","\xc9","\x11"),HX_HCSTRING("i","\x69","\x00","\x00","\x00"));
	__regexRightMargin= ::EReg_obj::__new(HX_HCSTRING("rightmargin=(\"([^\"]+)\"|'([^']+)')","\x4b","\x8e","\x21","\xc0"),HX_HCSTRING("i","\x69","\x00","\x00","\x00"));
	__regexTabStops= ::EReg_obj::__new(HX_HCSTRING("tabstops=(\"([^\"]+)\"|'([^']+)')","\x7d","\xfe","\x73","\x09"),HX_HCSTRING("i","\x69","\x00","\x00","\x00"));
	__regexSize= ::EReg_obj::__new(HX_HCSTRING("size=(\"([^\"]+)\"|'([^']+)')","\x42","\x27","\xbe","\x87"),HX_HCSTRING("i","\x69","\x00","\x00","\x00"));
}

} // end namespace openfl
} // end namespace text
