#ifndef INCLUDED_lime_text_Font
#define INCLUDED_lime_text_Font

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS1(haxe,IMap)
HX_DECLARE_CLASS2(haxe,ds,IntMap)
HX_DECLARE_CLASS2(haxe,io,Bytes)
HX_DECLARE_CLASS2(lime,app,Future)
HX_DECLARE_CLASS2(lime,graphics,Image)
HX_DECLARE_CLASS2(lime,text,Font)
HX_DECLARE_CLASS2(lime,text,GlyphMetrics)
namespace lime{
namespace text{


class HXCPP_CLASS_ATTRIBUTES  Font_obj : public hx::Object{
	public:
		typedef hx::Object super;
		typedef Font_obj OBJ_;
		Font_obj();
		Void __construct(::String name);

	public:
		inline void *operator new( size_t inSize, bool inContainer=true,const char *inName="lime.text.Font")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		static hx::ObjectPtr< Font_obj > __new(::String name);
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~Font_obj();

		HX_DO_RTTI_ALL;
		Dynamic __Field(const ::String &inString, hx::PropertyAccess inCallProp);
		static bool __GetStatic(const ::String &inString, Dynamic &outValue, hx::PropertyAccess inCallProp);
		Dynamic __SetField(const ::String &inString,const Dynamic &inValue, hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		::String __ToString() const { return HX_HCSTRING("Font","\xef","\x89","\x99","\x2e"); }

		static ::lime::text::Font fromBytes( ::haxe::io::Bytes bytes);
		static Dynamic fromBytes_dyn();

		static ::lime::text::Font fromFile( ::String path);
		static Dynamic fromFile_dyn();

		static ::lime::app::Future loadFromBytes( ::haxe::io::Bytes bytes);
		static Dynamic loadFromBytes_dyn();

		static ::lime::app::Future loadFromFile( ::String path);
		static Dynamic loadFromFile_dyn();

		static ::lime::app::Future loadFromName( ::String path);
		static Dynamic loadFromName_dyn();

		int ascender;
		int descender;
		int height;
		::String name;
		int numGlyphs;
		Dynamic src;
		int underlinePosition;
		int underlineThickness;
		int unitsPerEM;
		::String __fontPath;
		::String __fontPathWithoutDirectory;
		virtual Dynamic decompose( );
		Dynamic decompose_dyn();

		virtual int getGlyph( ::String character);
		Dynamic getGlyph_dyn();

		virtual Array< int > getGlyphs( ::String characters);
		Dynamic getGlyphs_dyn();

		virtual ::lime::text::GlyphMetrics getGlyphMetrics( int glyph);
		Dynamic getGlyphMetrics_dyn();

		virtual ::lime::graphics::Image renderGlyph( int glyph,int fontSize);
		Dynamic renderGlyph_dyn();

		virtual ::haxe::ds::IntMap renderGlyphs( Array< int > glyphs,int fontSize);
		Dynamic renderGlyphs_dyn();

		virtual Void __fromBytes( ::haxe::io::Bytes bytes);
		Dynamic __fromBytes_dyn();

		virtual Void __fromFile( ::String path);
		Dynamic __fromFile_dyn();

		virtual ::lime::app::Future __loadFromName( ::String name);
		Dynamic __loadFromName_dyn();

		virtual Void __setSize( int size);
		Dynamic __setSize_dyn();

		virtual int get_ascender( );
		Dynamic get_ascender_dyn();

		virtual int get_descender( );
		Dynamic get_descender_dyn();

		virtual int get_height( );
		Dynamic get_height_dyn();

		virtual int get_numGlyphs( );
		Dynamic get_numGlyphs_dyn();

		virtual int get_underlinePosition( );
		Dynamic get_underlinePosition_dyn();

		virtual int get_underlineThickness( );
		Dynamic get_underlineThickness_dyn();

		virtual int get_unitsPerEM( );
		Dynamic get_unitsPerEM_dyn();

};

} // end namespace lime
} // end namespace text

#endif /* INCLUDED_lime_text_Font */ 
