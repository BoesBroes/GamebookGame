#ifndef INCLUDED_openfl_display_DefaultPreloader
#define INCLUDED_openfl_display_DefaultPreloader

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#ifndef INCLUDED_openfl_display_Sprite
#include <openfl/display/Sprite.h>
#endif
HX_DECLARE_CLASS2(openfl,display,DefaultPreloader)
HX_DECLARE_CLASS2(openfl,display,DisplayObject)
HX_DECLARE_CLASS2(openfl,display,DisplayObjectContainer)
HX_DECLARE_CLASS2(openfl,display,IBitmapDrawable)
HX_DECLARE_CLASS2(openfl,display,InteractiveObject)
HX_DECLARE_CLASS2(openfl,display,Sprite)
HX_DECLARE_CLASS2(openfl,events,Event)
HX_DECLARE_CLASS2(openfl,events,EventDispatcher)
HX_DECLARE_CLASS2(openfl,events,IEventDispatcher)
HX_DECLARE_CLASS2(openfl,events,ProgressEvent)
namespace openfl{
namespace display{


class HXCPP_CLASS_ATTRIBUTES  DefaultPreloader_obj : public ::openfl::display::Sprite_obj{
	public:
		typedef ::openfl::display::Sprite_obj super;
		typedef DefaultPreloader_obj OBJ_;
		DefaultPreloader_obj();
		Void __construct();

	public:
		inline void *operator new( size_t inSize, bool inContainer=true,const char *inName="openfl.display.DefaultPreloader")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		static hx::ObjectPtr< DefaultPreloader_obj > __new();
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~DefaultPreloader_obj();

		HX_DO_RTTI_ALL;
		Dynamic __Field(const ::String &inString, hx::PropertyAccess inCallProp);
		Dynamic __SetField(const ::String &inString,const Dynamic &inValue, hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		::String __ToString() const { return HX_HCSTRING("DefaultPreloader","\x95","\x27","\x6f","\x5f"); }

		int endAnimation;
		::openfl::display::Sprite outline;
		::openfl::display::Sprite progress;
		int startAnimation;
		virtual int getBackgroundColor( );
		Dynamic getBackgroundColor_dyn();

		virtual Float getHeight( );
		Dynamic getHeight_dyn();

		virtual Float getWidth( );
		Dynamic getWidth_dyn();

		virtual Void onInit( );
		Dynamic onInit_dyn();

		virtual Void onLoaded( );
		Dynamic onLoaded_dyn();

		virtual Void onUpdate( int bytesLoaded,int bytesTotal);
		Dynamic onUpdate_dyn();

		virtual Void this_onAddedToStage( ::openfl::events::Event event);
		Dynamic this_onAddedToStage_dyn();

		virtual Void this_onComplete( ::openfl::events::Event event);
		Dynamic this_onComplete_dyn();

		virtual Void this_onEnterFrame( ::openfl::events::Event event);
		Dynamic this_onEnterFrame_dyn();

		virtual Void this_onProgress( ::openfl::events::ProgressEvent event);
		Dynamic this_onProgress_dyn();

};

} // end namespace openfl
} // end namespace display

#endif /* INCLUDED_openfl_display_DefaultPreloader */ 
