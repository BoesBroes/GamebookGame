#ifndef INCLUDED_openfl__internal_swf_SWFLite
#define INCLUDED_openfl__internal_swf_SWFLite

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS1(haxe,IMap)
HX_DECLARE_CLASS2(haxe,ds,IntMap)
HX_DECLARE_CLASS2(haxe,ds,StringMap)
HX_DECLARE_CLASS2(lime,utils,AssetLibrary)
HX_DECLARE_CLASS3(openfl,_internal,swf,SWFLite)
HX_DECLARE_CLASS3(openfl,_internal,swf,SWFLiteLibrary)
HX_DECLARE_CLASS3(openfl,_internal,symbols,SWFSymbol)
HX_DECLARE_CLASS3(openfl,_internal,symbols,SpriteSymbol)
HX_DECLARE_CLASS2(openfl,display,BitmapData)
HX_DECLARE_CLASS2(openfl,display,DisplayObject)
HX_DECLARE_CLASS2(openfl,display,DisplayObjectContainer)
HX_DECLARE_CLASS2(openfl,display,IBitmapDrawable)
HX_DECLARE_CLASS2(openfl,display,InteractiveObject)
HX_DECLARE_CLASS2(openfl,display,MovieClip)
HX_DECLARE_CLASS2(openfl,display,SimpleButton)
HX_DECLARE_CLASS2(openfl,display,Sprite)
HX_DECLARE_CLASS2(openfl,events,EventDispatcher)
HX_DECLARE_CLASS2(openfl,events,IEventDispatcher)
HX_DECLARE_CLASS2(openfl,utils,AssetLibrary)
namespace openfl{
namespace _internal{
namespace swf{


class HXCPP_CLASS_ATTRIBUTES  SWFLite_obj : public hx::Object{
	public:
		typedef hx::Object super;
		typedef SWFLite_obj OBJ_;
		SWFLite_obj();
		Void __construct();

	public:
		inline void *operator new( size_t inSize, bool inContainer=true,const char *inName="openfl._internal.swf.SWFLite")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		static hx::ObjectPtr< SWFLite_obj > __new();
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~SWFLite_obj();

		HX_DO_RTTI_ALL;
		Dynamic __Field(const ::String &inString, hx::PropertyAccess inCallProp);
		static bool __GetStatic(const ::String &inString, Dynamic &outValue, hx::PropertyAccess inCallProp);
		Dynamic __SetField(const ::String &inString,const Dynamic &inValue, hx::PropertyAccess inCallProp);
		static bool __SetStatic(const ::String &inString, Dynamic &ioValue, hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		::String __ToString() const { return HX_HCSTRING("SWFLite","\x70","\xc9","\x1a","\xc5"); }

		static void __boot();
		static ::haxe::ds::StringMap instances;
		static ::hx::Class resolveClass( ::String name);
		static Dynamic resolveClass_dyn();

		static ::Enum resolveEnum( ::String name);
		static Dynamic resolveEnum_dyn();

		static ::openfl::_internal::swf::SWFLite unserialize( ::String data);
		static Dynamic unserialize_dyn();

		Float frameRate;
		::openfl::_internal::swf::SWFLiteLibrary library;
		::openfl::_internal::symbols::SpriteSymbol root;
		::haxe::ds::IntMap symbols;
		virtual ::openfl::display::SimpleButton createButton( ::String className);
		Dynamic createButton_dyn();

		virtual ::openfl::display::MovieClip createMovieClip( ::String className);
		Dynamic createMovieClip_dyn();

		virtual ::openfl::display::BitmapData getBitmapData( ::String className);
		Dynamic getBitmapData_dyn();

		virtual bool hasSymbol( ::String className);
		Dynamic hasSymbol_dyn();

		virtual ::String serialize( );
		Dynamic serialize_dyn();

};

} // end namespace openfl
} // end namespace _internal
} // end namespace swf

#endif /* INCLUDED_openfl__internal_swf_SWFLite */ 
