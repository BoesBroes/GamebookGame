#ifndef INCLUDED_openfl__internal_text_TextEngine
#define INCLUDED_openfl__internal_text_TextEngine

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS0(EReg)
HX_DECLARE_CLASS1(haxe,IMap)
HX_DECLARE_CLASS1(haxe,Timer)
HX_DECLARE_CLASS2(haxe,ds,StringMap)
HX_DECLARE_CLASS3(lime,graphics,opengl,GLObject)
HX_DECLARE_CLASS2(lime,text,Font)
HX_DECLARE_CLASS2(lime,text,TextLayout)
HX_DECLARE_CLASS2(openfl,_Vector,FloatVector)
HX_DECLARE_CLASS2(openfl,_Vector,IVector)
HX_DECLARE_CLASS2(openfl,_Vector,IntVector)
HX_DECLARE_CLASS2(openfl,_Vector,ObjectVector)
HX_DECLARE_CLASS3(openfl,_internal,text,TextEngine)
HX_DECLARE_CLASS2(openfl,display,DisplayObject)
HX_DECLARE_CLASS2(openfl,display,IBitmapDrawable)
HX_DECLARE_CLASS2(openfl,display,InteractiveObject)
HX_DECLARE_CLASS2(openfl,events,EventDispatcher)
HX_DECLARE_CLASS2(openfl,events,IEventDispatcher)
HX_DECLARE_CLASS2(openfl,geom,Rectangle)
HX_DECLARE_CLASS2(openfl,text,Font)
HX_DECLARE_CLASS2(openfl,text,TextField)
HX_DECLARE_CLASS2(openfl,text,TextFormat)
namespace openfl{
namespace _internal{
namespace text{


class HXCPP_CLASS_ATTRIBUTES  TextEngine_obj : public hx::Object{
	public:
		typedef hx::Object super;
		typedef TextEngine_obj OBJ_;
		TextEngine_obj();
		Void __construct(::openfl::text::TextField textField);

	public:
		inline void *operator new( size_t inSize, bool inContainer=true,const char *inName="openfl._internal.text.TextEngine")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		static hx::ObjectPtr< TextEngine_obj > __new(::openfl::text::TextField textField);
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~TextEngine_obj();

		HX_DO_RTTI_ALL;
		Dynamic __Field(const ::String &inString, hx::PropertyAccess inCallProp);
		static bool __GetStatic(const ::String &inString, Dynamic &outValue, hx::PropertyAccess inCallProp);
		Dynamic __SetField(const ::String &inString,const Dynamic &inValue, hx::PropertyAccess inCallProp);
		static bool __SetStatic(const ::String &inString, Dynamic &ioValue, hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		::String __ToString() const { return HX_HCSTRING("TextEngine","\x6f","\xcc","\x25","\x2a"); }

		static void __boot();
		static int UTF8_TAB;
		static int UTF8_ENDLINE;
		static int UTF8_SPACE;
		static int UTF8_HYPHEN;
		static ::haxe::ds::StringMap __defaultFonts;
		static ::openfl::text::Font findFont( ::String name);
		static Dynamic findFont_dyn();

		static Float getFormatHeight( ::openfl::text::TextFormat format);
		static Dynamic getFormatHeight_dyn();

		static ::String getFont( ::openfl::text::TextFormat format);
		static Dynamic getFont_dyn();

		static ::openfl::text::Font getFontInstance( ::openfl::text::TextFormat format);
		static Dynamic getFontInstance_dyn();

		Dynamic antiAliasType;
		Dynamic autoSize;
		bool background;
		int backgroundColor;
		bool border;
		int borderColor;
		int bottomScrollV;
		::openfl::geom::Rectangle bounds;
		int caretIndex;
		bool embedFonts;
		Dynamic gridFitType;
		Float height;
		::openfl::_Vector::ObjectVector layoutGroups;
		::openfl::_Vector::FloatVector lineAscents;
		::openfl::_Vector::IntVector lineBreaks;
		::openfl::_Vector::FloatVector lineDescents;
		::openfl::_Vector::FloatVector lineLeadings;
		::openfl::_Vector::FloatVector lineHeights;
		::openfl::_Vector::FloatVector lineWidths;
		int maxChars;
		int maxScrollH;
		int maxScrollV;
		bool multiline;
		int numLines;
		::String restrict;
		int scrollH;
		int scrollV;
		bool selectable;
		Float sharpness;
		::String text;
		Float textHeight;
		::openfl::_Vector::ObjectVector textFormatRanges;
		Float textWidth;
		Dynamic type;
		Float width;
		bool wordWrap;
		::openfl::text::TextField textField;
		::haxe::Timer __cursorTimer;
		bool __hasFocus;
		bool __isKeyDown;
		int __measuredHeight;
		int __measuredWidth;
		::EReg __restrictRegexp;
		int __selectionStart;
		bool __showCursor;
		::openfl::text::TextFormat __textFormat;
		::lime::text::TextLayout __textLayout;
		::lime::graphics::opengl::GLObject __texture;
		Dynamic __useIntAdvances;
		Dynamic __cairoFont;
		::openfl::text::Font __font;
		virtual ::EReg createRestrictRegexp( ::String restrict);
		Dynamic createRestrictRegexp_dyn();

		virtual Void getBounds( );
		Dynamic getBounds_dyn();

		virtual ::String getLine( int index);
		Dynamic getLine_dyn();

		virtual int getLineBreakIndex( hx::Null< int >  startIndex);
		Dynamic getLineBreakIndex_dyn();

		virtual Void getLineMeasurements( );
		Dynamic getLineMeasurements_dyn();

		virtual Void getLayoutGroups( );
		Dynamic getLayoutGroups_dyn();

		virtual Void setTextAlignment( );
		Dynamic setTextAlignment_dyn();

		virtual Void update( );
		Dynamic update_dyn();

		virtual ::String set_restrict( ::String value);
		Dynamic set_restrict_dyn();

		virtual ::String set_text( ::String value);
		Dynamic set_text_dyn();

};

} // end namespace openfl
} // end namespace _internal
} // end namespace text

#endif /* INCLUDED_openfl__internal_text_TextEngine */ 
