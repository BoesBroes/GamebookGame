#ifndef INCLUDED_lime__backend_native_NativeWindow
#define INCLUDED_lime__backend_native_NativeWindow

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS3(lime,_backend,native,NativeWindow)
HX_DECLARE_CLASS2(lime,app,Application)
HX_DECLARE_CLASS2(lime,app,IModule)
HX_DECLARE_CLASS2(lime,app,Module)
HX_DECLARE_CLASS2(lime,graphics,Image)
HX_DECLARE_CLASS2(lime,_system,Display)
HX_DECLARE_CLASS2(lime,_system,DisplayMode)
HX_DECLARE_CLASS2(lime,ui,Window)
namespace lime{
namespace _backend{
namespace native{


class HXCPP_CLASS_ATTRIBUTES  NativeWindow_obj : public hx::Object{
	public:
		typedef hx::Object super;
		typedef NativeWindow_obj OBJ_;
		NativeWindow_obj();
		Void __construct(::lime::ui::Window parent);

	public:
		inline void *operator new( size_t inSize, bool inContainer=true,const char *inName="lime._backend.native.NativeWindow")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		static hx::ObjectPtr< NativeWindow_obj > __new(::lime::ui::Window parent);
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~NativeWindow_obj();

		HX_DO_RTTI_ALL;
		Dynamic __Field(const ::String &inString, hx::PropertyAccess inCallProp);
		Dynamic __SetField(const ::String &inString,const Dynamic &inValue, hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		::String __ToString() const { return HX_HCSTRING("NativeWindow","\x07","\xe9","\xb5","\xcf"); }

		Dynamic handle;
		bool closing;
		::lime::_system::DisplayMode displayMode;
		::lime::ui::Window parent;
		virtual Void alert( ::String message,::String title);
		Dynamic alert_dyn();

		virtual Void close( );
		Dynamic close_dyn();

		virtual Void create( ::lime::app::Application application);
		Dynamic create_dyn();

		virtual Void focus( );
		Dynamic focus_dyn();

		virtual ::lime::_system::Display getDisplay( );
		Dynamic getDisplay_dyn();

		virtual ::lime::_system::DisplayMode getDisplayMode( );
		Dynamic getDisplayMode_dyn();

		virtual ::lime::_system::DisplayMode setDisplayMode( ::lime::_system::DisplayMode value);
		Dynamic setDisplayMode_dyn();

		virtual bool getEnableTextEvents( );
		Dynamic getEnableTextEvents_dyn();

		virtual Void move( int x,int y);
		Dynamic move_dyn();

		virtual Void resize( int width,int height);
		Dynamic resize_dyn();

		virtual bool setBorderless( bool value);
		Dynamic setBorderless_dyn();

		virtual bool setEnableTextEvents( bool value);
		Dynamic setEnableTextEvents_dyn();

		virtual bool setFullscreen( bool value);
		Dynamic setFullscreen_dyn();

		virtual Void setIcon( ::lime::graphics::Image image);
		Dynamic setIcon_dyn();

		virtual bool setMaximized( bool value);
		Dynamic setMaximized_dyn();

		virtual bool setMinimized( bool value);
		Dynamic setMinimized_dyn();

		virtual bool setResizable( bool value);
		Dynamic setResizable_dyn();

		virtual ::String setTitle( ::String value);
		Dynamic setTitle_dyn();

};

} // end namespace lime
} // end namespace _backend
} // end namespace native

#endif /* INCLUDED_lime__backend_native_NativeWindow */ 
