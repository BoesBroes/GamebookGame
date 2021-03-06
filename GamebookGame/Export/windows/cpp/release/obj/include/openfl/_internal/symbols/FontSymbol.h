#ifndef INCLUDED_openfl__internal_symbols_FontSymbol
#define INCLUDED_openfl__internal_symbols_FontSymbol

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#ifndef INCLUDED_openfl__internal_symbols_SWFSymbol
#include <openfl/_internal/symbols/SWFSymbol.h>
#endif
HX_DECLARE_CLASS3(openfl,_internal,swf,ShapeCommand)
HX_DECLARE_CLASS3(openfl,_internal,symbols,FontSymbol)
HX_DECLARE_CLASS3(openfl,_internal,symbols,SWFSymbol)
namespace openfl{
namespace _internal{
namespace symbols{


class HXCPP_CLASS_ATTRIBUTES  FontSymbol_obj : public ::openfl::_internal::symbols::SWFSymbol_obj{
	public:
		typedef ::openfl::_internal::symbols::SWFSymbol_obj super;
		typedef FontSymbol_obj OBJ_;
		FontSymbol_obj();
		Void __construct();

	public:
		inline void *operator new( size_t inSize, bool inContainer=true,const char *inName="openfl._internal.symbols.FontSymbol")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		static hx::ObjectPtr< FontSymbol_obj > __new();
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~FontSymbol_obj();

		HX_DO_RTTI_ALL;
		Dynamic __Field(const ::String &inString, hx::PropertyAccess inCallProp);
		Dynamic __SetField(const ::String &inString,const Dynamic &inValue, hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		::String __ToString() const { return HX_HCSTRING("FontSymbol","\xa7","\x4a","\xe2","\x99"); }

		Array< int > advances;
		bool bold;
		Array< int > codes;
		Array< ::Dynamic > glyphs;
		bool italic;
		int leading;
		::String name;
};

} // end namespace openfl
} // end namespace _internal
} // end namespace symbols

#endif /* INCLUDED_openfl__internal_symbols_FontSymbol */ 
