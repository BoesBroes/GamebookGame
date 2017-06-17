#ifndef INCLUDED_ManifestResources
#define INCLUDED_ManifestResources

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS0(ManifestResources)
HX_DECLARE_CLASS2(lime,utils,AssetLibrary)


class HXCPP_CLASS_ATTRIBUTES  ManifestResources_obj : public hx::Object{
	public:
		typedef hx::Object super;
		typedef ManifestResources_obj OBJ_;
		ManifestResources_obj();
		Void __construct();

	public:
		inline void *operator new( size_t inSize, bool inContainer=false,const char *inName="ManifestResources")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		static hx::ObjectPtr< ManifestResources_obj > __new();
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~ManifestResources_obj();

		HX_DO_RTTI_ALL;
		static bool __GetStatic(const ::String &inString, Dynamic &outValue, hx::PropertyAccess inCallProp);
		static bool __SetStatic(const ::String &inString, Dynamic &ioValue, hx::PropertyAccess inCallProp);
		static void __register();
		::String __ToString() const { return HX_HCSTRING("ManifestResources","\x16","\x0e","\x30","\x56"); }

		static Array< ::Dynamic > preloadLibraries;
		static Array< ::String > preloadLibraryNames;
		static Void init( Dynamic config);
		static Dynamic init_dyn();

};


#endif /* INCLUDED_ManifestResources */ 
