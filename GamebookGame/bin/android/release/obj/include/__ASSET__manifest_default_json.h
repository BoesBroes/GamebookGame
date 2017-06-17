#ifndef INCLUDED___ASSET__manifest_default_json
#define INCLUDED___ASSET__manifest_default_json

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#ifndef INCLUDED_haxe_io_Bytes
#include <haxe/io/Bytes.h>
#endif
HX_DECLARE_CLASS0(__ASSET__manifest_default_json)
HX_DECLARE_CLASS2(haxe,io,Bytes)


class HXCPP_CLASS_ATTRIBUTES  __ASSET__manifest_default_json_obj : public ::haxe::io::Bytes_obj{
	public:
		typedef ::haxe::io::Bytes_obj super;
		typedef __ASSET__manifest_default_json_obj OBJ_;
		__ASSET__manifest_default_json_obj();
		Void __construct(Dynamic length,Array< unsigned char > bytesData);

	public:
		inline void *operator new( size_t inSize, bool inContainer=true,const char *inName="__ASSET__manifest_default_json")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		static hx::ObjectPtr< __ASSET__manifest_default_json_obj > __new(Dynamic length,Array< unsigned char > bytesData);
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~__ASSET__manifest_default_json_obj();

		HX_DO_RTTI_ALL;
		static bool __GetStatic(const ::String &inString, Dynamic &outValue, hx::PropertyAccess inCallProp);
		static bool __SetStatic(const ::String &inString, Dynamic &ioValue, hx::PropertyAccess inCallProp);
		static void __register();
		::String __ToString() const { return HX_HCSTRING("__ASSET__manifest_default_json","\xa6","\x53","\x40","\x78"); }

		static void __boot();
		static ::String resourceName;
};


#endif /* INCLUDED___ASSET__manifest_default_json */ 
