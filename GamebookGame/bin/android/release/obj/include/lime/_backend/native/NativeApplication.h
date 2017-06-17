#ifndef INCLUDED_lime__backend_native_NativeApplication
#define INCLUDED_lime__backend_native_NativeApplication

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS0(List)
HX_DECLARE_CLASS1(haxe,IMap)
HX_DECLARE_CLASS2(haxe,ds,IntMap)
HX_DECLARE_CLASS3(lime,_backend,native,NativeApplication)
HX_DECLARE_CLASS3(lime,_backend,native,NativeCFFI)
HX_DECLARE_CLASS4(lime,_backend,native,_NativeApplication,ApplicationEventInfo)
HX_DECLARE_CLASS4(lime,_backend,native,_NativeApplication,DropEventInfo)
HX_DECLARE_CLASS4(lime,_backend,native,_NativeApplication,GamepadEventInfo)
HX_DECLARE_CLASS4(lime,_backend,native,_NativeApplication,JoystickEventInfo)
HX_DECLARE_CLASS4(lime,_backend,native,_NativeApplication,KeyEventInfo)
HX_DECLARE_CLASS4(lime,_backend,native,_NativeApplication,MouseEventInfo)
HX_DECLARE_CLASS4(lime,_backend,native,_NativeApplication,RenderEventInfo)
HX_DECLARE_CLASS4(lime,_backend,native,_NativeApplication,SensorEventInfo)
HX_DECLARE_CLASS4(lime,_backend,native,_NativeApplication,TextEventInfo)
HX_DECLARE_CLASS4(lime,_backend,native,_NativeApplication,TouchEventInfo)
HX_DECLARE_CLASS4(lime,_backend,native,_NativeApplication,WindowEventInfo)
HX_DECLARE_CLASS2(lime,app,Application)
HX_DECLARE_CLASS2(lime,app,IModule)
HX_DECLARE_CLASS2(lime,app,Module)
namespace lime{
namespace _backend{
namespace native{


class HXCPP_CLASS_ATTRIBUTES  NativeApplication_obj : public hx::Object{
	public:
		typedef hx::Object super;
		typedef NativeApplication_obj OBJ_;
		NativeApplication_obj();
		Void __construct(::lime::app::Application parent);

	public:
		inline void *operator new( size_t inSize, bool inContainer=true,const char *inName="lime._backend.native.NativeApplication")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		static hx::ObjectPtr< NativeApplication_obj > __new(::lime::app::Application parent);
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~NativeApplication_obj();

		HX_DO_RTTI_ALL;
		Dynamic __Field(const ::String &inString, hx::PropertyAccess inCallProp);
		Dynamic __SetField(const ::String &inString,const Dynamic &inValue, hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		static void __init__();

		::String __ToString() const { return HX_HCSTRING("NativeApplication","\xd9","\x82","\x56","\xe0"); }

		::lime::_backend::native::_NativeApplication::ApplicationEventInfo applicationEventInfo;
		::haxe::ds::IntMap currentTouches;
		::lime::_backend::native::_NativeApplication::DropEventInfo dropEventInfo;
		::lime::_backend::native::_NativeApplication::GamepadEventInfo gamepadEventInfo;
		::lime::_backend::native::_NativeApplication::JoystickEventInfo joystickEventInfo;
		::lime::_backend::native::_NativeApplication::KeyEventInfo keyEventInfo;
		::lime::_backend::native::_NativeApplication::MouseEventInfo mouseEventInfo;
		::lime::_backend::native::_NativeApplication::RenderEventInfo renderEventInfo;
		::lime::_backend::native::_NativeApplication::SensorEventInfo sensorEventInfo;
		::lime::_backend::native::_NativeApplication::TextEventInfo textEventInfo;
		::lime::_backend::native::_NativeApplication::TouchEventInfo touchEventInfo;
		::List unusedTouchesPool;
		::lime::_backend::native::_NativeApplication::WindowEventInfo windowEventInfo;
		Dynamic handle;
		Float frameRate;
		::lime::app::Application parent;
		bool toggleFullscreen;
		virtual Void create( Dynamic config);
		Dynamic create_dyn();

		virtual int exec( );
		Dynamic exec_dyn();

		virtual Void exit( );
		Dynamic exit_dyn();

		virtual Float getFrameRate( );
		Dynamic getFrameRate_dyn();

		virtual Void handleApplicationEvent( );
		Dynamic handleApplicationEvent_dyn();

		virtual Void handleDropEvent( );
		Dynamic handleDropEvent_dyn();

		virtual Void handleGamepadEvent( );
		Dynamic handleGamepadEvent_dyn();

		virtual Void handleJoystickEvent( );
		Dynamic handleJoystickEvent_dyn();

		virtual Void handleKeyEvent( );
		Dynamic handleKeyEvent_dyn();

		virtual Void handleMouseEvent( );
		Dynamic handleMouseEvent_dyn();

		virtual Void handleRenderEvent( );
		Dynamic handleRenderEvent_dyn();

		virtual Void handleSensorEvent( );
		Dynamic handleSensorEvent_dyn();

		virtual Void handleTextEvent( );
		Dynamic handleTextEvent_dyn();

		virtual Void handleTouchEvent( );
		Dynamic handleTouchEvent_dyn();

		virtual Void handleWindowEvent( );
		Dynamic handleWindowEvent_dyn();

		virtual Float setFrameRate( Float value);
		Dynamic setFrameRate_dyn();

		virtual Void updateTimer( );
		Dynamic updateTimer_dyn();

};

} // end namespace lime
} // end namespace _backend
} // end namespace native

#endif /* INCLUDED_lime__backend_native_NativeApplication */ 
