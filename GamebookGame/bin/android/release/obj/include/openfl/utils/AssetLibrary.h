#ifndef INCLUDED_openfl_utils_AssetLibrary
#define INCLUDED_openfl_utils_AssetLibrary

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#ifndef INCLUDED_lime_utils_AssetLibrary
#include <lime/utils/AssetLibrary.h>
#endif
HX_DECLARE_CLASS2(haxe,io,Bytes)
HX_DECLARE_CLASS2(lime,app,Future)
HX_DECLARE_CLASS2(lime,utils,AssetLibrary)
HX_DECLARE_CLASS2(lime,utils,AssetManifest)
HX_DECLARE_CLASS2(openfl,display,DisplayObject)
HX_DECLARE_CLASS2(openfl,display,DisplayObjectContainer)
HX_DECLARE_CLASS2(openfl,display,IBitmapDrawable)
HX_DECLARE_CLASS2(openfl,display,InteractiveObject)
HX_DECLARE_CLASS2(openfl,display,MovieClip)
HX_DECLARE_CLASS2(openfl,display,Sprite)
HX_DECLARE_CLASS2(openfl,events,EventDispatcher)
HX_DECLARE_CLASS2(openfl,events,IEventDispatcher)
HX_DECLARE_CLASS2(openfl,utils,AssetLibrary)
HX_DECLARE_CLASS2(openfl,utils,ByteArrayData)
HX_DECLARE_CLASS2(openfl,utils,IDataInput)
HX_DECLARE_CLASS2(openfl,utils,IDataOutput)
namespace openfl{
namespace utils{


class HXCPP_CLASS_ATTRIBUTES  AssetLibrary_obj : public ::lime::utils::AssetLibrary_obj{
	public:
		typedef ::lime::utils::AssetLibrary_obj super;
		typedef AssetLibrary_obj OBJ_;
		AssetLibrary_obj();
		Void __construct();

	public:
		inline void *operator new( size_t inSize, bool inContainer=true,const char *inName="openfl.utils.AssetLibrary")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		static hx::ObjectPtr< AssetLibrary_obj > __new();
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~AssetLibrary_obj();

		HX_DO_RTTI_ALL;
		Dynamic __Field(const ::String &inString, hx::PropertyAccess inCallProp);
		static bool __GetStatic(const ::String &inString, Dynamic &outValue, hx::PropertyAccess inCallProp);
		static void __register();
		::String __ToString() const { return HX_HCSTRING("AssetLibrary","\x0b","\x4f","\xd4","\x27"); }

		static ::openfl::utils::AssetLibrary fromBytes( ::openfl::utils::ByteArrayData bytes,::String rootPath);
		static Dynamic fromBytes_dyn();

		static ::openfl::utils::AssetLibrary fromFile( ::String path,::String rootPath);
		static Dynamic fromFile_dyn();

		static ::openfl::utils::AssetLibrary fromManifest( ::lime::utils::AssetManifest manifest);
		static Dynamic fromManifest_dyn();

		static ::lime::app::Future loadFromBytes( ::openfl::utils::ByteArrayData bytes,::String rootPath);
		static Dynamic loadFromBytes_dyn();

		static ::lime::app::Future loadFromFile( ::String path,::String rootPath);
		static Dynamic loadFromFile_dyn();

		static ::lime::app::Future loadFromManifest( ::lime::utils::AssetManifest manifest);
		static Dynamic loadFromManifest_dyn();

		virtual ::openfl::display::MovieClip getMovieClip( ::String id);
		Dynamic getMovieClip_dyn();

		virtual ::lime::app::Future loadMovieClip( ::String id);
		Dynamic loadMovieClip_dyn();

};

} // end namespace openfl
} // end namespace utils

#endif /* INCLUDED_openfl_utils_AssetLibrary */ 
