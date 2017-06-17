#ifndef INCLUDED_Button
#define INCLUDED_Button

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#ifndef INCLUDED_openfl_display_Sprite
#include <openfl/display/Sprite.h>
#endif
HX_DECLARE_CLASS0(Button)
HX_DECLARE_CLASS2(openfl,display,Bitmap)
HX_DECLARE_CLASS2(openfl,display,DisplayObject)
HX_DECLARE_CLASS2(openfl,display,DisplayObjectContainer)
HX_DECLARE_CLASS2(openfl,display,IBitmapDrawable)
HX_DECLARE_CLASS2(openfl,display,InteractiveObject)
HX_DECLARE_CLASS2(openfl,display,Sprite)
HX_DECLARE_CLASS2(openfl,events,Event)
HX_DECLARE_CLASS2(openfl,events,EventDispatcher)
HX_DECLARE_CLASS2(openfl,events,IEventDispatcher)
HX_DECLARE_CLASS2(openfl,events,MouseEvent)


class HXCPP_CLASS_ATTRIBUTES  Button_obj : public ::openfl::display::Sprite_obj{
	public:
		typedef ::openfl::display::Sprite_obj super;
		typedef Button_obj OBJ_;
		Button_obj();
		Void __construct(::String _imageName);

	public:
		inline void *operator new( size_t inSize, bool inContainer=true,const char *inName="Button")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		static hx::ObjectPtr< Button_obj > __new(::String _imageName);
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~Button_obj();

		HX_DO_RTTI_ALL;
		Dynamic __Field(const ::String &inString, hx::PropertyAccess inCallProp);
		Dynamic __SetField(const ::String &inString,const Dynamic &inValue, hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		::String __ToString() const { return HX_HCSTRING("Button","\x12","\xd6","\x74","\x0e"); }

		::String imageName;
		::openfl::display::Bitmap image;
		virtual Void OnMouseClick( ::openfl::events::MouseEvent event);
		Dynamic OnMouseClick_dyn();

		virtual Void onRoll( ::openfl::events::MouseEvent event);
		Dynamic onRoll_dyn();

		virtual Void onOut( ::openfl::events::MouseEvent event);
		Dynamic onOut_dyn();

};


#endif /* INCLUDED_Button */ 
