#ifndef INCLUDED_openfl__internal_symbols_StaticTextRecord
#define INCLUDED_openfl__internal_symbols_StaticTextRecord

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS3(openfl,_internal,symbols,StaticTextRecord)
namespace openfl{
namespace _internal{
namespace symbols{


class HXCPP_CLASS_ATTRIBUTES  StaticTextRecord_obj : public hx::Object{
	public:
		typedef hx::Object super;
		typedef StaticTextRecord_obj OBJ_;
		StaticTextRecord_obj();
		Void __construct();

	public:
		inline void *operator new( size_t inSize, bool inContainer=true,const char *inName="openfl._internal.symbols.StaticTextRecord")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		static hx::ObjectPtr< StaticTextRecord_obj > __new();
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~StaticTextRecord_obj();

		HX_DO_RTTI_ALL;
		Dynamic __Field(const ::String &inString, hx::PropertyAccess inCallProp);
		Dynamic __SetField(const ::String &inString,const Dynamic &inValue, hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		::String __ToString() const { return HX_HCSTRING("StaticTextRecord","\x8c","\x99","\x9c","\x6e"); }

		Array< int > advances;
		Dynamic color;
		int fontHeight;
		Dynamic fontID;
		Array< int > glyphs;
		Dynamic offsetX;
		Dynamic offsetY;
};

} // end namespace openfl
} // end namespace _internal
} // end namespace symbols

#endif /* INCLUDED_openfl__internal_symbols_StaticTextRecord */ 
