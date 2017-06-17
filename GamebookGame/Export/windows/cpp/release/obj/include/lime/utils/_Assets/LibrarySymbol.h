#ifndef INCLUDED_lime_utils__Assets_LibrarySymbol
#define INCLUDED_lime_utils__Assets_LibrarySymbol

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS2(lime,utils,AssetLibrary)
HX_DECLARE_CLASS3(lime,utils,_Assets,LibrarySymbol)
namespace lime{
namespace utils{
namespace _Assets{


class HXCPP_CLASS_ATTRIBUTES  LibrarySymbol_obj : public hx::Object{
	public:
		typedef hx::Object super;
		typedef LibrarySymbol_obj OBJ_;
		LibrarySymbol_obj();
		Void __construct(::String id);

	public:
		inline void *operator new( size_t inSize, bool inContainer=true,const char *inName="lime.utils._Assets.LibrarySymbol")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		static hx::ObjectPtr< LibrarySymbol_obj > __new(::String id);
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~LibrarySymbol_obj();

		HX_DO_RTTI_ALL;
		Dynamic __Field(const ::String &inString, hx::PropertyAccess inCallProp);
		Dynamic __SetField(const ::String &inString,const Dynamic &inValue, hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		::String __ToString() const { return HX_HCSTRING("LibrarySymbol","\x93","\x88","\xfe","\xd3"); }

		::lime::utils::AssetLibrary library;
		::String libraryName;
		::String symbolName;
		virtual bool isLocal( ::String type);
		Dynamic isLocal_dyn();

		virtual bool exists( ::String type);
		Dynamic exists_dyn();

};

} // end namespace lime
} // end namespace utils
} // end namespace _Assets

#endif /* INCLUDED_lime_utils__Assets_LibrarySymbol */ 
