#ifndef INCLUDED_lime_utils_AssetLibrary
#define INCLUDED_lime_utils_AssetLibrary

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS1(haxe,IMap)
HX_DECLARE_CLASS2(haxe,ds,StringMap)
HX_DECLARE_CLASS2(haxe,io,Bytes)
HX_DECLARE_CLASS2(lime,app,Future)
HX_DECLARE_CLASS2(lime,app,Promise_lime_utils_AssetLibrary)
HX_DECLARE_CLASS2(lime,app,_Event_Void_Void)
HX_DECLARE_CLASS2(lime,graphics,Image)
HX_DECLARE_CLASS2(lime,media,AudioBuffer)
HX_DECLARE_CLASS2(lime,text,Font)
HX_DECLARE_CLASS2(lime,utils,AssetLibrary)
HX_DECLARE_CLASS2(lime,utils,AssetManifest)
namespace lime{
namespace utils{


class HXCPP_CLASS_ATTRIBUTES  AssetLibrary_obj : public hx::Object{
	public:
		typedef hx::Object super;
		typedef AssetLibrary_obj OBJ_;
		AssetLibrary_obj();
		Void __construct();

	public:
		inline void *operator new( size_t inSize, bool inContainer=true,const char *inName="lime.utils.AssetLibrary")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		static hx::ObjectPtr< AssetLibrary_obj > __new();
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~AssetLibrary_obj();

		HX_DO_RTTI_ALL;
		Dynamic __Field(const ::String &inString, hx::PropertyAccess inCallProp);
		static bool __GetStatic(const ::String &inString, Dynamic &outValue, hx::PropertyAccess inCallProp);
		Dynamic __SetField(const ::String &inString,const Dynamic &inValue, hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		::String __ToString() const { return HX_HCSTRING("AssetLibrary","\x0b","\x4f","\xd4","\x27"); }

		static ::lime::utils::AssetLibrary fromBytes( ::haxe::io::Bytes bytes,::String rootPath);
		static Dynamic fromBytes_dyn();

		static ::lime::utils::AssetLibrary fromFile( ::String path,::String rootPath);
		static Dynamic fromFile_dyn();

		static ::lime::utils::AssetLibrary fromManifest( ::lime::utils::AssetManifest manifest);
		static Dynamic fromManifest_dyn();

		static ::lime::app::Future loadFromBytes( ::haxe::io::Bytes bytes,::String rootPath);
		static Dynamic loadFromBytes_dyn();

		static ::lime::app::Future loadFromFile( ::String path,::String rootPath);
		static Dynamic loadFromFile_dyn();

		static ::lime::app::Future loadFromManifest( ::lime::utils::AssetManifest manifest);
		static Dynamic loadFromManifest_dyn();

		::lime::app::_Event_Void_Void onChange;
		int assetsLoaded;
		int assetsTotal;
		int bytesLoaded;
		::haxe::ds::StringMap bytesLoadedCache;
		int bytesTotal;
		::haxe::ds::StringMap cachedAudioBuffers;
		::haxe::ds::StringMap cachedBytes;
		::haxe::ds::StringMap cachedFonts;
		::haxe::ds::StringMap cachedImages;
		::haxe::ds::StringMap cachedText;
		::haxe::ds::StringMap classTypes;
		bool loaded;
		::haxe::ds::StringMap pathGroups;
		::haxe::ds::StringMap paths;
		::haxe::ds::StringMap preload;
		::lime::app::Promise_lime_utils_AssetLibrary promise;
		::haxe::ds::StringMap sizes;
		::haxe::ds::StringMap types;
		virtual bool exists( ::String id,::String type);
		Dynamic exists_dyn();

		virtual Dynamic getAsset( ::String id,::String type);
		Dynamic getAsset_dyn();

		virtual ::lime::media::AudioBuffer getAudioBuffer( ::String id);
		Dynamic getAudioBuffer_dyn();

		virtual ::haxe::io::Bytes getBytes( ::String id);
		Dynamic getBytes_dyn();

		virtual ::lime::text::Font getFont( ::String id);
		Dynamic getFont_dyn();

		virtual ::lime::graphics::Image getImage( ::String id);
		Dynamic getImage_dyn();

		virtual ::String getPath( ::String id);
		Dynamic getPath_dyn();

		virtual ::String getText( ::String id);
		Dynamic getText_dyn();

		virtual bool isLocal( ::String id,::String type);
		Dynamic isLocal_dyn();

		virtual Array< ::String > list( ::String type);
		Dynamic list_dyn();

		virtual ::lime::app::Future loadAsset( ::String id,::String type);
		Dynamic loadAsset_dyn();

		virtual ::lime::app::Future load( );
		Dynamic load_dyn();

		virtual ::lime::app::Future loadAudioBuffer( ::String id);
		Dynamic loadAudioBuffer_dyn();

		virtual ::lime::app::Future loadBytes( ::String id);
		Dynamic loadBytes_dyn();

		virtual ::lime::app::Future loadFont( ::String id);
		Dynamic loadFont_dyn();

		virtual ::lime::app::Future loadImage( ::String id);
		Dynamic loadImage_dyn();

		virtual ::lime::app::Future loadText( ::String id);
		Dynamic loadText_dyn();

		virtual Void unload( );
		Dynamic unload_dyn();

		virtual Void __assetLoaded( ::String id);
		Dynamic __assetLoaded_dyn();

		virtual Void __fromManifest( ::lime::utils::AssetManifest manifest);
		Dynamic __fromManifest_dyn();

		virtual Void loadAudioBuffer_onComplete( ::String id,::lime::media::AudioBuffer audioBuffer);
		Dynamic loadAudioBuffer_onComplete_dyn();

		virtual Void loadBytes_onComplete( ::String id,::haxe::io::Bytes bytes);
		Dynamic loadBytes_onComplete_dyn();

		virtual Void loadFont_onComplete( ::String id,::lime::text::Font font);
		Dynamic loadFont_onComplete_dyn();

		virtual Void loadImage_onComplete( ::String id,::lime::graphics::Image image);
		Dynamic loadImage_onComplete_dyn();

		virtual Void loadText_onComplete( ::String id,::String text);
		Dynamic loadText_onComplete_dyn();

		virtual Void load_onError( ::String id,Dynamic message);
		Dynamic load_onError_dyn();

		virtual Void load_onProgress( ::String id,int bytesLoaded,int bytesTotal);
		Dynamic load_onProgress_dyn();

};

} // end namespace lime
} // end namespace utils

#endif /* INCLUDED_lime_utils_AssetLibrary */ 
