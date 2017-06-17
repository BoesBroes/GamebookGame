#include <hxcpp.h>

#ifndef INCLUDED_Reflect
#include <Reflect.h>
#endif
#ifndef INCLUDED_lime__backend_native_NativeWindow
#include <lime/_backend/native/NativeWindow.h>
#endif
#ifndef INCLUDED_lime_app_Application
#include <lime/app/Application.h>
#endif
#ifndef INCLUDED_lime_app_IModule
#include <lime/app/IModule.h>
#endif
#ifndef INCLUDED_lime_app_Module
#include <lime/app/Module.h>
#endif
#ifndef INCLUDED_lime_app__Event_Float_Float_Int_Void
#include <lime/app/_Event_Float_Float_Int_Void.h>
#endif
#ifndef INCLUDED_lime_app__Event_Float_Float_Void
#include <lime/app/_Event_Float_Float_Void.h>
#endif
#ifndef INCLUDED_lime_app__Event_Int_Int_Void
#include <lime/app/_Event_Int_Int_Void.h>
#endif
#ifndef INCLUDED_lime_app__Event_String_Int_Int_Void
#include <lime/app/_Event_String_Int_Int_Void.h>
#endif
#ifndef INCLUDED_lime_app__Event_String_Void
#include <lime/app/_Event_String_Void.h>
#endif
#ifndef INCLUDED_lime_app__Event_Void_Void
#include <lime/app/_Event_Void_Void.h>
#endif
#ifndef INCLUDED_lime_app__Event_lime_ui_KeyCode_lime_ui_KeyModifier_Void
#include <lime/app/_Event_lime_ui_KeyCode_lime_ui_KeyModifier_Void.h>
#endif
#ifndef INCLUDED_lime_graphics_Image
#include <lime/graphics/Image.h>
#endif
#ifndef INCLUDED_lime_graphics_Renderer
#include <lime/graphics/Renderer.h>
#endif
#ifndef INCLUDED_lime_system_Display
#include <lime/system/Display.h>
#endif
#ifndef INCLUDED_lime_system_DisplayMode
#include <lime/system/DisplayMode.h>
#endif
#ifndef INCLUDED_lime_ui_Window
#include <lime/ui/Window.h>
#endif
#ifndef INCLUDED_openfl_display_DisplayObject
#include <openfl/display/DisplayObject.h>
#endif
#ifndef INCLUDED_openfl_display_DisplayObjectContainer
#include <openfl/display/DisplayObjectContainer.h>
#endif
#ifndef INCLUDED_openfl_display_IBitmapDrawable
#include <openfl/display/IBitmapDrawable.h>
#endif
#ifndef INCLUDED_openfl_display_InteractiveObject
#include <openfl/display/InteractiveObject.h>
#endif
#ifndef INCLUDED_openfl_display_Stage
#include <openfl/display/Stage.h>
#endif
#ifndef INCLUDED_openfl_events_EventDispatcher
#include <openfl/events/EventDispatcher.h>
#endif
#ifndef INCLUDED_openfl_events_IEventDispatcher
#include <openfl/events/IEventDispatcher.h>
#endif
namespace lime{
namespace ui{

Void Window_obj::__construct(Dynamic config)
{
{
	this->onTextInput = ::lime::app::_Event_String_Void_obj::__new();
	this->onTextEdit = ::lime::app::_Event_String_Int_Int_Void_obj::__new();
	this->onRestore = ::lime::app::_Event_Void_Void_obj::__new();
	this->onResize = ::lime::app::_Event_Int_Int_Void_obj::__new();
	this->onMove = ::lime::app::_Event_Float_Float_Void_obj::__new();
	this->onMouseWheel = ::lime::app::_Event_Float_Float_Void_obj::__new();
	this->onMouseUp = ::lime::app::_Event_Float_Float_Int_Void_obj::__new();
	this->onMouseMoveRelative = ::lime::app::_Event_Float_Float_Void_obj::__new();
	this->onMouseMove = ::lime::app::_Event_Float_Float_Void_obj::__new();
	this->onMouseDown = ::lime::app::_Event_Float_Float_Int_Void_obj::__new();
	this->onMinimize = ::lime::app::_Event_Void_Void_obj::__new();
	this->onLeave = ::lime::app::_Event_Void_Void_obj::__new();
	this->onKeyUp = ::lime::app::_Event_lime_ui_KeyCode_lime_ui_KeyModifier_Void_obj::__new();
	this->onKeyDown = ::lime::app::_Event_lime_ui_KeyCode_lime_ui_KeyModifier_Void_obj::__new();
	this->onFullscreen = ::lime::app::_Event_Void_Void_obj::__new();
	this->onFocusOut = ::lime::app::_Event_Void_Void_obj::__new();
	this->onFocusIn = ::lime::app::_Event_Void_Void_obj::__new();
	this->onEnter = ::lime::app::_Event_Void_Void_obj::__new();
	this->onDropFile = ::lime::app::_Event_String_Void_obj::__new();
	this->onDeactivate = ::lime::app::_Event_Void_Void_obj::__new();
	this->onCreate = ::lime::app::_Event_Void_Void_obj::__new();
	this->onClose = ::lime::app::_Event_Void_Void_obj::__new();
	this->onActivate = ::lime::app::_Event_Void_Void_obj::__new();
	this->config = config;
	this->__width = (int)0;
	this->__height = (int)0;
	this->__fullscreen = false;
	this->__scale = (int)1;
	this->__x = (int)0;
	this->__y = (int)0;
	this->__title = HX_HCSTRING("","\x00","\x00","\x00","\x00");
	this->id = (int)-1;
	bool tmp = (config != null());
	if ((tmp)){
		Dynamic tmp1 = config;
		bool tmp2 = ::Reflect_obj::hasField(tmp1,HX_HCSTRING("width","\x06","\xb6","\x62","\xca"));
		if ((tmp2)){
			this->__width = config->__Field(HX_HCSTRING("width","\x06","\xb6","\x62","\xca"), hx::paccDynamic );
		}
		Dynamic tmp3 = config;
		bool tmp4 = ::Reflect_obj::hasField(tmp3,HX_HCSTRING("height","\xe7","\x07","\x4c","\x02"));
		if ((tmp4)){
			this->__height = config->__Field(HX_HCSTRING("height","\xe7","\x07","\x4c","\x02"), hx::paccDynamic );
		}
		Dynamic tmp5 = config;
		bool tmp6 = ::Reflect_obj::hasField(tmp5,HX_HCSTRING("x","\x78","\x00","\x00","\x00"));
		if ((tmp6)){
			this->__x = config->__Field(HX_HCSTRING("x","\x78","\x00","\x00","\x00"), hx::paccDynamic );
		}
		Dynamic tmp7 = config;
		bool tmp8 = ::Reflect_obj::hasField(tmp7,HX_HCSTRING("y","\x79","\x00","\x00","\x00"));
		if ((tmp8)){
			this->__y = config->__Field(HX_HCSTRING("y","\x79","\x00","\x00","\x00"), hx::paccDynamic );
		}
		Dynamic tmp9 = config;
		bool tmp10 = ::Reflect_obj::hasField(tmp9,HX_HCSTRING("fullscreen","\x3b","\x3a","\xb4","\xf9"));
		if ((tmp10)){
			this->__fullscreen = config->__Field(HX_HCSTRING("fullscreen","\x3b","\x3a","\xb4","\xf9"), hx::paccDynamic );
		}
		Dynamic tmp11 = config;
		bool tmp12 = ::Reflect_obj::hasField(tmp11,HX_HCSTRING("borderless","\x45","\x46","\x71","\x17"));
		if ((tmp12)){
			this->__borderless = config->__Field(HX_HCSTRING("borderless","\x45","\x46","\x71","\x17"), hx::paccDynamic );
		}
		Dynamic tmp13 = config;
		bool tmp14 = ::Reflect_obj::hasField(tmp13,HX_HCSTRING("resizable","\x6b","\x37","\x50","\xa9"));
		if ((tmp14)){
			this->__resizable = config->__Field(HX_HCSTRING("resizable","\x6b","\x37","\x50","\xa9"), hx::paccDynamic );
		}
		Dynamic tmp15 = config;
		bool tmp16 = ::Reflect_obj::hasField(tmp15,HX_HCSTRING("title","\x98","\x15","\x3b","\x10"));
		if ((tmp16)){
			this->__title = config->__Field(HX_HCSTRING("title","\x98","\x15","\x3b","\x10"), hx::paccDynamic );
		}
	}
	::lime::_backend::native::NativeWindow tmp1 = ::lime::_backend::native::NativeWindow_obj::__new(hx::ObjectPtr<OBJ_>(this));
	this->backend = tmp1;
}
;
	return null();
}

//Window_obj::~Window_obj() { }

Dynamic Window_obj::__CreateEmpty() { return  new Window_obj; }
hx::ObjectPtr< Window_obj > Window_obj::__new(Dynamic config)
{  hx::ObjectPtr< Window_obj > _result_ = new Window_obj();
	_result_->__construct(config);
	return _result_;}

Dynamic Window_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< Window_obj > _result_ = new Window_obj();
	_result_->__construct(inArgs[0]);
	return _result_;}

Void Window_obj::alert( ::String message,::String title){
{
		::lime::_backend::native::NativeWindow tmp = this->backend;
		::String tmp1 = message;
		::String tmp2 = title;
		tmp->alert(tmp1,tmp2);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(Window_obj,alert,(void))

Void Window_obj::close( ){
{
		::lime::_backend::native::NativeWindow tmp = this->backend;
		tmp->close();
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(Window_obj,close,(void))

Void Window_obj::create( ::lime::app::Application application){
{
		this->application = application;
		::lime::_backend::native::NativeWindow tmp = this->backend;
		::lime::app::Application tmp1 = application;
		tmp->create(tmp1);
		::lime::graphics::Renderer tmp2 = this->renderer;
		bool tmp3 = (tmp2 != null());
		if ((tmp3)){
			::lime::graphics::Renderer tmp4 = this->renderer;
			tmp4->create();
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Window_obj,create,(void))

Void Window_obj::focus( ){
{
		::lime::_backend::native::NativeWindow tmp = this->backend;
		tmp->focus();
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(Window_obj,focus,(void))

Void Window_obj::move( int x,int y){
{
		::lime::_backend::native::NativeWindow tmp = this->backend;
		int tmp1 = x;
		int tmp2 = y;
		tmp->move(tmp1,tmp2);
		this->__x = x;
		this->__y = y;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(Window_obj,move,(void))

Void Window_obj::resize( int width,int height){
{
		::lime::_backend::native::NativeWindow tmp = this->backend;
		int tmp1 = width;
		int tmp2 = height;
		tmp->resize(tmp1,tmp2);
		this->__width = width;
		this->__height = height;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(Window_obj,resize,(void))

Void Window_obj::setIcon( ::lime::graphics::Image image){
{
		bool tmp = (image == null());
		if ((tmp)){
			return null();
		}
		::lime::_backend::native::NativeWindow tmp1 = this->backend;
		::lime::graphics::Image tmp2 = image;
		tmp1->setIcon(tmp2);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Window_obj,setIcon,(void))

::String Window_obj::toString( ){
	return HX_HCSTRING("[object Window]","\x87","\xe9","\x90","\xf1");
}


HX_DEFINE_DYNAMIC_FUNC0(Window_obj,toString,return )

::lime::_system::Display Window_obj::get_display( ){
	::lime::_backend::native::NativeWindow tmp = this->backend;
	::lime::_system::Display tmp1 = tmp->getDisplay();
	return tmp1;
}


HX_DEFINE_DYNAMIC_FUNC0(Window_obj,get_display,return )

::lime::_system::DisplayMode Window_obj::get_displayMode( ){
	::lime::_backend::native::NativeWindow tmp = this->backend;
	::lime::_system::DisplayMode tmp1 = tmp->getDisplayMode();
	return tmp1;
}


HX_DEFINE_DYNAMIC_FUNC0(Window_obj,get_displayMode,return )

::lime::_system::DisplayMode Window_obj::set_displayMode( ::lime::_system::DisplayMode value){
	::lime::_backend::native::NativeWindow tmp = this->backend;
	::lime::_system::DisplayMode tmp1 = value;
	::lime::_system::DisplayMode tmp2 = tmp->setDisplayMode(tmp1);
	return tmp2;
}


HX_DEFINE_DYNAMIC_FUNC1(Window_obj,set_displayMode,return )

bool Window_obj::get_borderless( ){
	bool tmp = this->__borderless;
	return tmp;
}


HX_DEFINE_DYNAMIC_FUNC0(Window_obj,get_borderless,return )

bool Window_obj::set_borderless( bool value){
	::lime::_backend::native::NativeWindow tmp = this->backend;
	bool tmp1 = value;
	bool tmp2 = tmp->setBorderless(tmp1);
	bool tmp3 = this->__borderless = tmp2;
	return tmp3;
}


HX_DEFINE_DYNAMIC_FUNC1(Window_obj,set_borderless,return )

bool Window_obj::get_enableTextEvents( ){
	::lime::_backend::native::NativeWindow tmp = this->backend;
	bool tmp1 = tmp->getEnableTextEvents();
	return tmp1;
}


HX_DEFINE_DYNAMIC_FUNC0(Window_obj,get_enableTextEvents,return )

bool Window_obj::set_enableTextEvents( bool value){
	::lime::_backend::native::NativeWindow tmp = this->backend;
	bool tmp1 = value;
	bool tmp2 = tmp->setEnableTextEvents(tmp1);
	return tmp2;
}


HX_DEFINE_DYNAMIC_FUNC1(Window_obj,set_enableTextEvents,return )

bool Window_obj::get_fullscreen( ){
	bool tmp = this->__fullscreen;
	return tmp;
}


HX_DEFINE_DYNAMIC_FUNC0(Window_obj,get_fullscreen,return )

bool Window_obj::set_fullscreen( bool value){
	::lime::_backend::native::NativeWindow tmp = this->backend;
	bool tmp1 = value;
	bool tmp2 = tmp->setFullscreen(tmp1);
	bool tmp3 = this->__fullscreen = tmp2;
	return tmp3;
}


HX_DEFINE_DYNAMIC_FUNC1(Window_obj,set_fullscreen,return )

int Window_obj::get_height( ){
	int tmp = this->__height;
	return tmp;
}


HX_DEFINE_DYNAMIC_FUNC0(Window_obj,get_height,return )

int Window_obj::set_height( int value){
	int tmp = this->__width;
	int tmp1 = value;
	this->resize(tmp,tmp1);
	int tmp2 = this->__height;
	return tmp2;
}


HX_DEFINE_DYNAMIC_FUNC1(Window_obj,set_height,return )

bool Window_obj::get_maximized( ){
	bool tmp = this->__maximized;
	return tmp;
}


HX_DEFINE_DYNAMIC_FUNC0(Window_obj,get_maximized,return )

bool Window_obj::set_maximized( bool value){
	this->__minimized = false;
	::lime::_backend::native::NativeWindow tmp = this->backend;
	bool tmp1 = value;
	bool tmp2 = tmp->setMaximized(tmp1);
	bool tmp3 = this->__maximized = tmp2;
	return tmp3;
}


HX_DEFINE_DYNAMIC_FUNC1(Window_obj,set_maximized,return )

bool Window_obj::get_minimized( ){
	bool tmp = this->__minimized;
	return tmp;
}


HX_DEFINE_DYNAMIC_FUNC0(Window_obj,get_minimized,return )

bool Window_obj::set_minimized( bool value){
	this->__maximized = false;
	::lime::_backend::native::NativeWindow tmp = this->backend;
	bool tmp1 = value;
	bool tmp2 = tmp->setMinimized(tmp1);
	bool tmp3 = this->__minimized = tmp2;
	return tmp3;
}


HX_DEFINE_DYNAMIC_FUNC1(Window_obj,set_minimized,return )

bool Window_obj::get_resizable( ){
	bool tmp = this->__resizable;
	return tmp;
}


HX_DEFINE_DYNAMIC_FUNC0(Window_obj,get_resizable,return )

bool Window_obj::set_resizable( bool value){
	::lime::_backend::native::NativeWindow tmp = this->backend;
	bool tmp1 = value;
	bool tmp2 = tmp->setResizable(tmp1);
	this->__resizable = tmp2;
	bool tmp3 = this->__resizable;
	return tmp3;
}


HX_DEFINE_DYNAMIC_FUNC1(Window_obj,set_resizable,return )

Float Window_obj::get_scale( ){
	Float tmp = this->__scale;
	return tmp;
}


HX_DEFINE_DYNAMIC_FUNC0(Window_obj,get_scale,return )

::String Window_obj::get_title( ){
	::String tmp = this->__title;
	return tmp;
}


HX_DEFINE_DYNAMIC_FUNC0(Window_obj,get_title,return )

::String Window_obj::set_title( ::String value){
	::lime::_backend::native::NativeWindow tmp = this->backend;
	::String tmp1 = value;
	::String tmp2 = tmp->setTitle(tmp1);
	::String tmp3 = this->__title = tmp2;
	return tmp3;
}


HX_DEFINE_DYNAMIC_FUNC1(Window_obj,set_title,return )

int Window_obj::get_width( ){
	int tmp = this->__width;
	return tmp;
}


HX_DEFINE_DYNAMIC_FUNC0(Window_obj,get_width,return )

int Window_obj::set_width( int value){
	int tmp = value;
	int tmp1 = this->__height;
	this->resize(tmp,tmp1);
	int tmp2 = this->__width;
	return tmp2;
}


HX_DEFINE_DYNAMIC_FUNC1(Window_obj,set_width,return )

int Window_obj::get_x( ){
	int tmp = this->__x;
	return tmp;
}


HX_DEFINE_DYNAMIC_FUNC0(Window_obj,get_x,return )

int Window_obj::set_x( int value){
	int tmp = value;
	int tmp1 = this->__y;
	this->move(tmp,tmp1);
	int tmp2 = this->__x;
	return tmp2;
}


HX_DEFINE_DYNAMIC_FUNC1(Window_obj,set_x,return )

int Window_obj::get_y( ){
	int tmp = this->__y;
	return tmp;
}


HX_DEFINE_DYNAMIC_FUNC0(Window_obj,get_y,return )

int Window_obj::set_y( int value){
	int tmp = this->__x;
	int tmp1 = value;
	this->move(tmp,tmp1);
	int tmp2 = this->__y;
	return tmp2;
}


HX_DEFINE_DYNAMIC_FUNC1(Window_obj,set_y,return )


Window_obj::Window_obj()
{
}

void Window_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(Window);
	HX_MARK_MEMBER_NAME(application,"application");
	HX_MARK_MEMBER_NAME(config,"config");
	HX_MARK_MEMBER_NAME(display,"display");
	HX_MARK_MEMBER_NAME(id,"id");
	HX_MARK_MEMBER_NAME(onActivate,"onActivate");
	HX_MARK_MEMBER_NAME(onClose,"onClose");
	HX_MARK_MEMBER_NAME(onCreate,"onCreate");
	HX_MARK_MEMBER_NAME(onDeactivate,"onDeactivate");
	HX_MARK_MEMBER_NAME(onDropFile,"onDropFile");
	HX_MARK_MEMBER_NAME(onEnter,"onEnter");
	HX_MARK_MEMBER_NAME(onFocusIn,"onFocusIn");
	HX_MARK_MEMBER_NAME(onFocusOut,"onFocusOut");
	HX_MARK_MEMBER_NAME(onFullscreen,"onFullscreen");
	HX_MARK_MEMBER_NAME(onKeyDown,"onKeyDown");
	HX_MARK_MEMBER_NAME(onKeyUp,"onKeyUp");
	HX_MARK_MEMBER_NAME(onLeave,"onLeave");
	HX_MARK_MEMBER_NAME(onMinimize,"onMinimize");
	HX_MARK_MEMBER_NAME(onMouseDown,"onMouseDown");
	HX_MARK_MEMBER_NAME(onMouseMove,"onMouseMove");
	HX_MARK_MEMBER_NAME(onMouseMoveRelative,"onMouseMoveRelative");
	HX_MARK_MEMBER_NAME(onMouseUp,"onMouseUp");
	HX_MARK_MEMBER_NAME(onMouseWheel,"onMouseWheel");
	HX_MARK_MEMBER_NAME(onMove,"onMove");
	HX_MARK_MEMBER_NAME(onResize,"onResize");
	HX_MARK_MEMBER_NAME(onRestore,"onRestore");
	HX_MARK_MEMBER_NAME(onTextEdit,"onTextEdit");
	HX_MARK_MEMBER_NAME(onTextInput,"onTextInput");
	HX_MARK_MEMBER_NAME(renderer,"renderer");
	HX_MARK_MEMBER_NAME(scale,"scale");
	HX_MARK_MEMBER_NAME(stage,"stage");
	HX_MARK_MEMBER_NAME(backend,"backend");
	HX_MARK_MEMBER_NAME(__borderless,"__borderless");
	HX_MARK_MEMBER_NAME(__fullscreen,"__fullscreen");
	HX_MARK_MEMBER_NAME(__height,"__height");
	HX_MARK_MEMBER_NAME(__maximized,"__maximized");
	HX_MARK_MEMBER_NAME(__minimized,"__minimized");
	HX_MARK_MEMBER_NAME(__resizable,"__resizable");
	HX_MARK_MEMBER_NAME(__scale,"__scale");
	HX_MARK_MEMBER_NAME(__title,"__title");
	HX_MARK_MEMBER_NAME(__width,"__width");
	HX_MARK_MEMBER_NAME(__x,"__x");
	HX_MARK_MEMBER_NAME(__y,"__y");
	HX_MARK_END_CLASS();
}

void Window_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(application,"application");
	HX_VISIT_MEMBER_NAME(config,"config");
	HX_VISIT_MEMBER_NAME(display,"display");
	HX_VISIT_MEMBER_NAME(id,"id");
	HX_VISIT_MEMBER_NAME(onActivate,"onActivate");
	HX_VISIT_MEMBER_NAME(onClose,"onClose");
	HX_VISIT_MEMBER_NAME(onCreate,"onCreate");
	HX_VISIT_MEMBER_NAME(onDeactivate,"onDeactivate");
	HX_VISIT_MEMBER_NAME(onDropFile,"onDropFile");
	HX_VISIT_MEMBER_NAME(onEnter,"onEnter");
	HX_VISIT_MEMBER_NAME(onFocusIn,"onFocusIn");
	HX_VISIT_MEMBER_NAME(onFocusOut,"onFocusOut");
	HX_VISIT_MEMBER_NAME(onFullscreen,"onFullscreen");
	HX_VISIT_MEMBER_NAME(onKeyDown,"onKeyDown");
	HX_VISIT_MEMBER_NAME(onKeyUp,"onKeyUp");
	HX_VISIT_MEMBER_NAME(onLeave,"onLeave");
	HX_VISIT_MEMBER_NAME(onMinimize,"onMinimize");
	HX_VISIT_MEMBER_NAME(onMouseDown,"onMouseDown");
	HX_VISIT_MEMBER_NAME(onMouseMove,"onMouseMove");
	HX_VISIT_MEMBER_NAME(onMouseMoveRelative,"onMouseMoveRelative");
	HX_VISIT_MEMBER_NAME(onMouseUp,"onMouseUp");
	HX_VISIT_MEMBER_NAME(onMouseWheel,"onMouseWheel");
	HX_VISIT_MEMBER_NAME(onMove,"onMove");
	HX_VISIT_MEMBER_NAME(onResize,"onResize");
	HX_VISIT_MEMBER_NAME(onRestore,"onRestore");
	HX_VISIT_MEMBER_NAME(onTextEdit,"onTextEdit");
	HX_VISIT_MEMBER_NAME(onTextInput,"onTextInput");
	HX_VISIT_MEMBER_NAME(renderer,"renderer");
	HX_VISIT_MEMBER_NAME(scale,"scale");
	HX_VISIT_MEMBER_NAME(stage,"stage");
	HX_VISIT_MEMBER_NAME(backend,"backend");
	HX_VISIT_MEMBER_NAME(__borderless,"__borderless");
	HX_VISIT_MEMBER_NAME(__fullscreen,"__fullscreen");
	HX_VISIT_MEMBER_NAME(__height,"__height");
	HX_VISIT_MEMBER_NAME(__maximized,"__maximized");
	HX_VISIT_MEMBER_NAME(__minimized,"__minimized");
	HX_VISIT_MEMBER_NAME(__resizable,"__resizable");
	HX_VISIT_MEMBER_NAME(__scale,"__scale");
	HX_VISIT_MEMBER_NAME(__title,"__title");
	HX_VISIT_MEMBER_NAME(__width,"__width");
	HX_VISIT_MEMBER_NAME(__x,"__x");
	HX_VISIT_MEMBER_NAME(__y,"__y");
}

Dynamic Window_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 1:
		if (HX_FIELD_EQ(inName,"x") ) { if (inCallProp == hx::paccAlways) return get_x(); }
		if (HX_FIELD_EQ(inName,"y") ) { if (inCallProp == hx::paccAlways) return get_y(); }
		break;
	case 2:
		if (HX_FIELD_EQ(inName,"id") ) { return id; }
		break;
	case 3:
		if (HX_FIELD_EQ(inName,"__x") ) { return __x; }
		if (HX_FIELD_EQ(inName,"__y") ) { return __y; }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"move") ) { return move_dyn(); }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"scale") ) { return inCallProp == hx::paccAlways ? get_scale() : scale; }
		if (HX_FIELD_EQ(inName,"stage") ) { return stage; }
		if (HX_FIELD_EQ(inName,"title") ) { if (inCallProp == hx::paccAlways) return get_title(); }
		if (HX_FIELD_EQ(inName,"width") ) { if (inCallProp == hx::paccAlways) return get_width(); }
		if (HX_FIELD_EQ(inName,"alert") ) { return alert_dyn(); }
		if (HX_FIELD_EQ(inName,"close") ) { return close_dyn(); }
		if (HX_FIELD_EQ(inName,"focus") ) { return focus_dyn(); }
		if (HX_FIELD_EQ(inName,"get_x") ) { return get_x_dyn(); }
		if (HX_FIELD_EQ(inName,"set_x") ) { return set_x_dyn(); }
		if (HX_FIELD_EQ(inName,"get_y") ) { return get_y_dyn(); }
		if (HX_FIELD_EQ(inName,"set_y") ) { return set_y_dyn(); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"config") ) { return config; }
		if (HX_FIELD_EQ(inName,"height") ) { if (inCallProp == hx::paccAlways) return get_height(); }
		if (HX_FIELD_EQ(inName,"onMove") ) { return onMove; }
		if (HX_FIELD_EQ(inName,"create") ) { return create_dyn(); }
		if (HX_FIELD_EQ(inName,"resize") ) { return resize_dyn(); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"display") ) { return inCallProp == hx::paccAlways ? get_display() : display; }
		if (HX_FIELD_EQ(inName,"onClose") ) { return onClose; }
		if (HX_FIELD_EQ(inName,"onEnter") ) { return onEnter; }
		if (HX_FIELD_EQ(inName,"onKeyUp") ) { return onKeyUp; }
		if (HX_FIELD_EQ(inName,"onLeave") ) { return onLeave; }
		if (HX_FIELD_EQ(inName,"backend") ) { return backend; }
		if (HX_FIELD_EQ(inName,"__scale") ) { return __scale; }
		if (HX_FIELD_EQ(inName,"__title") ) { return __title; }
		if (HX_FIELD_EQ(inName,"__width") ) { return __width; }
		if (HX_FIELD_EQ(inName,"setIcon") ) { return setIcon_dyn(); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"onCreate") ) { return onCreate; }
		if (HX_FIELD_EQ(inName,"onResize") ) { return onResize; }
		if (HX_FIELD_EQ(inName,"renderer") ) { return renderer; }
		if (HX_FIELD_EQ(inName,"__height") ) { return __height; }
		if (HX_FIELD_EQ(inName,"toString") ) { return toString_dyn(); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"maximized") ) { if (inCallProp == hx::paccAlways) return get_maximized(); }
		if (HX_FIELD_EQ(inName,"minimized") ) { if (inCallProp == hx::paccAlways) return get_minimized(); }
		if (HX_FIELD_EQ(inName,"onFocusIn") ) { return onFocusIn; }
		if (HX_FIELD_EQ(inName,"onKeyDown") ) { return onKeyDown; }
		if (HX_FIELD_EQ(inName,"onMouseUp") ) { return onMouseUp; }
		if (HX_FIELD_EQ(inName,"onRestore") ) { return onRestore; }
		if (HX_FIELD_EQ(inName,"resizable") ) { if (inCallProp == hx::paccAlways) return get_resizable(); }
		if (HX_FIELD_EQ(inName,"get_scale") ) { return get_scale_dyn(); }
		if (HX_FIELD_EQ(inName,"get_title") ) { return get_title_dyn(); }
		if (HX_FIELD_EQ(inName,"set_title") ) { return set_title_dyn(); }
		if (HX_FIELD_EQ(inName,"get_width") ) { return get_width_dyn(); }
		if (HX_FIELD_EQ(inName,"set_width") ) { return set_width_dyn(); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"borderless") ) { if (inCallProp == hx::paccAlways) return get_borderless(); }
		if (HX_FIELD_EQ(inName,"fullscreen") ) { if (inCallProp == hx::paccAlways) return get_fullscreen(); }
		if (HX_FIELD_EQ(inName,"onActivate") ) { return onActivate; }
		if (HX_FIELD_EQ(inName,"onDropFile") ) { return onDropFile; }
		if (HX_FIELD_EQ(inName,"onFocusOut") ) { return onFocusOut; }
		if (HX_FIELD_EQ(inName,"onMinimize") ) { return onMinimize; }
		if (HX_FIELD_EQ(inName,"onTextEdit") ) { return onTextEdit; }
		if (HX_FIELD_EQ(inName,"get_height") ) { return get_height_dyn(); }
		if (HX_FIELD_EQ(inName,"set_height") ) { return set_height_dyn(); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"application") ) { return application; }
		if (HX_FIELD_EQ(inName,"displayMode") ) { if (inCallProp == hx::paccAlways) return get_displayMode(); }
		if (HX_FIELD_EQ(inName,"onMouseDown") ) { return onMouseDown; }
		if (HX_FIELD_EQ(inName,"onMouseMove") ) { return onMouseMove; }
		if (HX_FIELD_EQ(inName,"onTextInput") ) { return onTextInput; }
		if (HX_FIELD_EQ(inName,"__maximized") ) { return __maximized; }
		if (HX_FIELD_EQ(inName,"__minimized") ) { return __minimized; }
		if (HX_FIELD_EQ(inName,"__resizable") ) { return __resizable; }
		if (HX_FIELD_EQ(inName,"get_display") ) { return get_display_dyn(); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"onDeactivate") ) { return onDeactivate; }
		if (HX_FIELD_EQ(inName,"onFullscreen") ) { return onFullscreen; }
		if (HX_FIELD_EQ(inName,"onMouseWheel") ) { return onMouseWheel; }
		if (HX_FIELD_EQ(inName,"__borderless") ) { return __borderless; }
		if (HX_FIELD_EQ(inName,"__fullscreen") ) { return __fullscreen; }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"get_maximized") ) { return get_maximized_dyn(); }
		if (HX_FIELD_EQ(inName,"set_maximized") ) { return set_maximized_dyn(); }
		if (HX_FIELD_EQ(inName,"get_minimized") ) { return get_minimized_dyn(); }
		if (HX_FIELD_EQ(inName,"set_minimized") ) { return set_minimized_dyn(); }
		if (HX_FIELD_EQ(inName,"get_resizable") ) { return get_resizable_dyn(); }
		if (HX_FIELD_EQ(inName,"set_resizable") ) { return set_resizable_dyn(); }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"get_borderless") ) { return get_borderless_dyn(); }
		if (HX_FIELD_EQ(inName,"set_borderless") ) { return set_borderless_dyn(); }
		if (HX_FIELD_EQ(inName,"get_fullscreen") ) { return get_fullscreen_dyn(); }
		if (HX_FIELD_EQ(inName,"set_fullscreen") ) { return set_fullscreen_dyn(); }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"get_displayMode") ) { return get_displayMode_dyn(); }
		if (HX_FIELD_EQ(inName,"set_displayMode") ) { return set_displayMode_dyn(); }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"enableTextEvents") ) { if (inCallProp == hx::paccAlways) return get_enableTextEvents(); }
		break;
	case 19:
		if (HX_FIELD_EQ(inName,"onMouseMoveRelative") ) { return onMouseMoveRelative; }
		break;
	case 20:
		if (HX_FIELD_EQ(inName,"get_enableTextEvents") ) { return get_enableTextEvents_dyn(); }
		if (HX_FIELD_EQ(inName,"set_enableTextEvents") ) { return set_enableTextEvents_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic Window_obj::__SetField(const ::String &inName,const Dynamic &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 1:
		if (HX_FIELD_EQ(inName,"x") ) { if (inCallProp == hx::paccAlways) return set_x(inValue); }
		if (HX_FIELD_EQ(inName,"y") ) { if (inCallProp == hx::paccAlways) return set_y(inValue); }
		break;
	case 2:
		if (HX_FIELD_EQ(inName,"id") ) { id=inValue.Cast< int >(); return inValue; }
		break;
	case 3:
		if (HX_FIELD_EQ(inName,"__x") ) { __x=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"__y") ) { __y=inValue.Cast< int >(); return inValue; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"scale") ) { scale=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"stage") ) { stage=inValue.Cast< ::openfl::display::Stage >(); return inValue; }
		if (HX_FIELD_EQ(inName,"title") ) { if (inCallProp == hx::paccAlways) return set_title(inValue); }
		if (HX_FIELD_EQ(inName,"width") ) { if (inCallProp == hx::paccAlways) return set_width(inValue); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"config") ) { config=inValue.Cast< Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"height") ) { if (inCallProp == hx::paccAlways) return set_height(inValue); }
		if (HX_FIELD_EQ(inName,"onMove") ) { onMove=inValue.Cast< ::lime::app::_Event_Float_Float_Void >(); return inValue; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"display") ) { display=inValue.Cast< ::lime::_system::Display >(); return inValue; }
		if (HX_FIELD_EQ(inName,"onClose") ) { onClose=inValue.Cast< ::lime::app::_Event_Void_Void >(); return inValue; }
		if (HX_FIELD_EQ(inName,"onEnter") ) { onEnter=inValue.Cast< ::lime::app::_Event_Void_Void >(); return inValue; }
		if (HX_FIELD_EQ(inName,"onKeyUp") ) { onKeyUp=inValue.Cast< ::lime::app::_Event_lime_ui_KeyCode_lime_ui_KeyModifier_Void >(); return inValue; }
		if (HX_FIELD_EQ(inName,"onLeave") ) { onLeave=inValue.Cast< ::lime::app::_Event_Void_Void >(); return inValue; }
		if (HX_FIELD_EQ(inName,"backend") ) { backend=inValue.Cast< ::lime::_backend::native::NativeWindow >(); return inValue; }
		if (HX_FIELD_EQ(inName,"__scale") ) { __scale=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"__title") ) { __title=inValue.Cast< ::String >(); return inValue; }
		if (HX_FIELD_EQ(inName,"__width") ) { __width=inValue.Cast< int >(); return inValue; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"onCreate") ) { onCreate=inValue.Cast< ::lime::app::_Event_Void_Void >(); return inValue; }
		if (HX_FIELD_EQ(inName,"onResize") ) { onResize=inValue.Cast< ::lime::app::_Event_Int_Int_Void >(); return inValue; }
		if (HX_FIELD_EQ(inName,"renderer") ) { renderer=inValue.Cast< ::lime::graphics::Renderer >(); return inValue; }
		if (HX_FIELD_EQ(inName,"__height") ) { __height=inValue.Cast< int >(); return inValue; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"maximized") ) { if (inCallProp == hx::paccAlways) return set_maximized(inValue); }
		if (HX_FIELD_EQ(inName,"minimized") ) { if (inCallProp == hx::paccAlways) return set_minimized(inValue); }
		if (HX_FIELD_EQ(inName,"onFocusIn") ) { onFocusIn=inValue.Cast< ::lime::app::_Event_Void_Void >(); return inValue; }
		if (HX_FIELD_EQ(inName,"onKeyDown") ) { onKeyDown=inValue.Cast< ::lime::app::_Event_lime_ui_KeyCode_lime_ui_KeyModifier_Void >(); return inValue; }
		if (HX_FIELD_EQ(inName,"onMouseUp") ) { onMouseUp=inValue.Cast< ::lime::app::_Event_Float_Float_Int_Void >(); return inValue; }
		if (HX_FIELD_EQ(inName,"onRestore") ) { onRestore=inValue.Cast< ::lime::app::_Event_Void_Void >(); return inValue; }
		if (HX_FIELD_EQ(inName,"resizable") ) { if (inCallProp == hx::paccAlways) return set_resizable(inValue); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"borderless") ) { if (inCallProp == hx::paccAlways) return set_borderless(inValue); }
		if (HX_FIELD_EQ(inName,"fullscreen") ) { if (inCallProp == hx::paccAlways) return set_fullscreen(inValue); }
		if (HX_FIELD_EQ(inName,"onActivate") ) { onActivate=inValue.Cast< ::lime::app::_Event_Void_Void >(); return inValue; }
		if (HX_FIELD_EQ(inName,"onDropFile") ) { onDropFile=inValue.Cast< ::lime::app::_Event_String_Void >(); return inValue; }
		if (HX_FIELD_EQ(inName,"onFocusOut") ) { onFocusOut=inValue.Cast< ::lime::app::_Event_Void_Void >(); return inValue; }
		if (HX_FIELD_EQ(inName,"onMinimize") ) { onMinimize=inValue.Cast< ::lime::app::_Event_Void_Void >(); return inValue; }
		if (HX_FIELD_EQ(inName,"onTextEdit") ) { onTextEdit=inValue.Cast< ::lime::app::_Event_String_Int_Int_Void >(); return inValue; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"application") ) { application=inValue.Cast< ::lime::app::Application >(); return inValue; }
		if (HX_FIELD_EQ(inName,"displayMode") ) { if (inCallProp == hx::paccAlways) return set_displayMode(inValue); }
		if (HX_FIELD_EQ(inName,"onMouseDown") ) { onMouseDown=inValue.Cast< ::lime::app::_Event_Float_Float_Int_Void >(); return inValue; }
		if (HX_FIELD_EQ(inName,"onMouseMove") ) { onMouseMove=inValue.Cast< ::lime::app::_Event_Float_Float_Void >(); return inValue; }
		if (HX_FIELD_EQ(inName,"onTextInput") ) { onTextInput=inValue.Cast< ::lime::app::_Event_String_Void >(); return inValue; }
		if (HX_FIELD_EQ(inName,"__maximized") ) { __maximized=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"__minimized") ) { __minimized=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"__resizable") ) { __resizable=inValue.Cast< bool >(); return inValue; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"onDeactivate") ) { onDeactivate=inValue.Cast< ::lime::app::_Event_Void_Void >(); return inValue; }
		if (HX_FIELD_EQ(inName,"onFullscreen") ) { onFullscreen=inValue.Cast< ::lime::app::_Event_Void_Void >(); return inValue; }
		if (HX_FIELD_EQ(inName,"onMouseWheel") ) { onMouseWheel=inValue.Cast< ::lime::app::_Event_Float_Float_Void >(); return inValue; }
		if (HX_FIELD_EQ(inName,"__borderless") ) { __borderless=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"__fullscreen") ) { __fullscreen=inValue.Cast< bool >(); return inValue; }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"enableTextEvents") ) { if (inCallProp == hx::paccAlways) return set_enableTextEvents(inValue); }
		break;
	case 19:
		if (HX_FIELD_EQ(inName,"onMouseMoveRelative") ) { onMouseMoveRelative=inValue.Cast< ::lime::app::_Event_Float_Float_Void >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void Window_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("application","\x50","\xab","\x3e","\x2a"));
	outFields->push(HX_HCSTRING("borderless","\x45","\x46","\x71","\x17"));
	outFields->push(HX_HCSTRING("config","\xc2","\x56","\xd2","\xc7"));
	outFields->push(HX_HCSTRING("display","\x42","\x2a","\x4a","\xbb"));
	outFields->push(HX_HCSTRING("displayMode","\xc5","\x72","\x53","\x30"));
	outFields->push(HX_HCSTRING("enableTextEvents","\x09","\xe4","\x09","\x6a"));
	outFields->push(HX_HCSTRING("fullscreen","\x3b","\x3a","\xb4","\xf9"));
	outFields->push(HX_HCSTRING("height","\xe7","\x07","\x4c","\x02"));
	outFields->push(HX_HCSTRING("id","\xdb","\x5b","\x00","\x00"));
	outFields->push(HX_HCSTRING("maximized","\x18","\x0e","\xe1","\xfe"));
	outFields->push(HX_HCSTRING("minimized","\x86","\xfb","\x9d","\x28"));
	outFields->push(HX_HCSTRING("onActivate","\xf2","\xef","\x62","\xc3"));
	outFields->push(HX_HCSTRING("onClose","\x19","\xb6","\xa0","\xde"));
	outFields->push(HX_HCSTRING("onCreate","\x7b","\x5d","\xbc","\x5b"));
	outFields->push(HX_HCSTRING("onDeactivate","\x33","\xfe","\x44","\x14"));
	outFields->push(HX_HCSTRING("onDropFile","\x8a","\x4a","\x0d","\xc7"));
	outFields->push(HX_HCSTRING("onEnter","\x79","\x0b","\xc4","\x06"));
	outFields->push(HX_HCSTRING("onFocusIn","\x7e","\xfe","\x2d","\x19"));
	outFields->push(HX_HCSTRING("onFocusOut","\xd5","\x43","\x15","\xef"));
	outFields->push(HX_HCSTRING("onFullscreen","\x3a","\xdc","\xf7","\xd1"));
	outFields->push(HX_HCSTRING("onKeyDown","\x42","\x22","\xf2","\x73"));
	outFields->push(HX_HCSTRING("onKeyUp","\x3b","\x58","\x3c","\x75"));
	outFields->push(HX_HCSTRING("onLeave","\x58","\xd3","\x90","\x08"));
	outFields->push(HX_HCSTRING("onMinimize","\x5d","\x13","\x30","\xff"));
	outFields->push(HX_HCSTRING("onMouseDown","\x08","\x94","\x05","\x11"));
	outFields->push(HX_HCSTRING("onMouseMove","\xb7","\x7e","\xf8","\x16"));
	outFields->push(HX_HCSTRING("onMouseMoveRelative","\xa3","\x06","\xbf","\x7a"));
	outFields->push(HX_HCSTRING("onMouseUp","\x81","\xac","\x1d","\x98"));
	outFields->push(HX_HCSTRING("onMouseWheel","\x35","\xca","\xca","\xbf"));
	outFields->push(HX_HCSTRING("onMove","\xd0","\xeb","\xea","\xea"));
	outFields->push(HX_HCSTRING("onResize","\x73","\x50","\x28","\xe8"));
	outFields->push(HX_HCSTRING("onRestore","\xef","\x1f","\x5b","\x42"));
	outFields->push(HX_HCSTRING("onTextEdit","\x96","\xf1","\xc0","\x23"));
	outFields->push(HX_HCSTRING("onTextInput","\xfe","\x36","\x4e","\x79"));
	outFields->push(HX_HCSTRING("renderer","\x43","\xc5","\xdb","\xb2"));
	outFields->push(HX_HCSTRING("resizable","\x6b","\x37","\x50","\xa9"));
	outFields->push(HX_HCSTRING("scale","\x8a","\xce","\xce","\x78"));
	outFields->push(HX_HCSTRING("stage","\xbe","\x6a","\x0b","\x84"));
	outFields->push(HX_HCSTRING("title","\x98","\x15","\x3b","\x10"));
	outFields->push(HX_HCSTRING("width","\x06","\xb6","\x62","\xca"));
	outFields->push(HX_HCSTRING("x","\x78","\x00","\x00","\x00"));
	outFields->push(HX_HCSTRING("y","\x79","\x00","\x00","\x00"));
	outFields->push(HX_HCSTRING("backend","\x14","\xbc","\x87","\xfb"));
	outFields->push(HX_HCSTRING("__borderless","\x65","\xc1","\x04","\x50"));
	outFields->push(HX_HCSTRING("__fullscreen","\x5b","\xb5","\x47","\x32"));
	outFields->push(HX_HCSTRING("__height","\x07","\x73","\x7b","\xaa"));
	outFields->push(HX_HCSTRING("__maximized","\xf8","\x56","\x0d","\x2d"));
	outFields->push(HX_HCSTRING("__minimized","\x66","\x44","\xca","\x56"));
	outFields->push(HX_HCSTRING("__resizable","\x4b","\x80","\x7c","\xd7"));
	outFields->push(HX_HCSTRING("__scale","\x6a","\x27","\x2d","\xe3"));
	outFields->push(HX_HCSTRING("__title","\x78","\x6e","\x99","\x7a"));
	outFields->push(HX_HCSTRING("__width","\xe6","\x0e","\xc1","\x34"));
	outFields->push(HX_HCSTRING("__x","\x58","\x69","\x48","\x00"));
	outFields->push(HX_HCSTRING("__y","\x59","\x69","\x48","\x00"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsObject /*::lime::app::Application*/ ,(int)offsetof(Window_obj,application),HX_HCSTRING("application","\x50","\xab","\x3e","\x2a")},
	{hx::fsObject /*Dynamic*/ ,(int)offsetof(Window_obj,config),HX_HCSTRING("config","\xc2","\x56","\xd2","\xc7")},
	{hx::fsObject /*::lime::_system::Display*/ ,(int)offsetof(Window_obj,display),HX_HCSTRING("display","\x42","\x2a","\x4a","\xbb")},
	{hx::fsInt,(int)offsetof(Window_obj,id),HX_HCSTRING("id","\xdb","\x5b","\x00","\x00")},
	{hx::fsObject /*::lime::app::_Event_Void_Void*/ ,(int)offsetof(Window_obj,onActivate),HX_HCSTRING("onActivate","\xf2","\xef","\x62","\xc3")},
	{hx::fsObject /*::lime::app::_Event_Void_Void*/ ,(int)offsetof(Window_obj,onClose),HX_HCSTRING("onClose","\x19","\xb6","\xa0","\xde")},
	{hx::fsObject /*::lime::app::_Event_Void_Void*/ ,(int)offsetof(Window_obj,onCreate),HX_HCSTRING("onCreate","\x7b","\x5d","\xbc","\x5b")},
	{hx::fsObject /*::lime::app::_Event_Void_Void*/ ,(int)offsetof(Window_obj,onDeactivate),HX_HCSTRING("onDeactivate","\x33","\xfe","\x44","\x14")},
	{hx::fsObject /*::lime::app::_Event_String_Void*/ ,(int)offsetof(Window_obj,onDropFile),HX_HCSTRING("onDropFile","\x8a","\x4a","\x0d","\xc7")},
	{hx::fsObject /*::lime::app::_Event_Void_Void*/ ,(int)offsetof(Window_obj,onEnter),HX_HCSTRING("onEnter","\x79","\x0b","\xc4","\x06")},
	{hx::fsObject /*::lime::app::_Event_Void_Void*/ ,(int)offsetof(Window_obj,onFocusIn),HX_HCSTRING("onFocusIn","\x7e","\xfe","\x2d","\x19")},
	{hx::fsObject /*::lime::app::_Event_Void_Void*/ ,(int)offsetof(Window_obj,onFocusOut),HX_HCSTRING("onFocusOut","\xd5","\x43","\x15","\xef")},
	{hx::fsObject /*::lime::app::_Event_Void_Void*/ ,(int)offsetof(Window_obj,onFullscreen),HX_HCSTRING("onFullscreen","\x3a","\xdc","\xf7","\xd1")},
	{hx::fsObject /*::lime::app::_Event_lime_ui_KeyCode_lime_ui_KeyModifier_Void*/ ,(int)offsetof(Window_obj,onKeyDown),HX_HCSTRING("onKeyDown","\x42","\x22","\xf2","\x73")},
	{hx::fsObject /*::lime::app::_Event_lime_ui_KeyCode_lime_ui_KeyModifier_Void*/ ,(int)offsetof(Window_obj,onKeyUp),HX_HCSTRING("onKeyUp","\x3b","\x58","\x3c","\x75")},
	{hx::fsObject /*::lime::app::_Event_Void_Void*/ ,(int)offsetof(Window_obj,onLeave),HX_HCSTRING("onLeave","\x58","\xd3","\x90","\x08")},
	{hx::fsObject /*::lime::app::_Event_Void_Void*/ ,(int)offsetof(Window_obj,onMinimize),HX_HCSTRING("onMinimize","\x5d","\x13","\x30","\xff")},
	{hx::fsObject /*::lime::app::_Event_Float_Float_Int_Void*/ ,(int)offsetof(Window_obj,onMouseDown),HX_HCSTRING("onMouseDown","\x08","\x94","\x05","\x11")},
	{hx::fsObject /*::lime::app::_Event_Float_Float_Void*/ ,(int)offsetof(Window_obj,onMouseMove),HX_HCSTRING("onMouseMove","\xb7","\x7e","\xf8","\x16")},
	{hx::fsObject /*::lime::app::_Event_Float_Float_Void*/ ,(int)offsetof(Window_obj,onMouseMoveRelative),HX_HCSTRING("onMouseMoveRelative","\xa3","\x06","\xbf","\x7a")},
	{hx::fsObject /*::lime::app::_Event_Float_Float_Int_Void*/ ,(int)offsetof(Window_obj,onMouseUp),HX_HCSTRING("onMouseUp","\x81","\xac","\x1d","\x98")},
	{hx::fsObject /*::lime::app::_Event_Float_Float_Void*/ ,(int)offsetof(Window_obj,onMouseWheel),HX_HCSTRING("onMouseWheel","\x35","\xca","\xca","\xbf")},
	{hx::fsObject /*::lime::app::_Event_Float_Float_Void*/ ,(int)offsetof(Window_obj,onMove),HX_HCSTRING("onMove","\xd0","\xeb","\xea","\xea")},
	{hx::fsObject /*::lime::app::_Event_Int_Int_Void*/ ,(int)offsetof(Window_obj,onResize),HX_HCSTRING("onResize","\x73","\x50","\x28","\xe8")},
	{hx::fsObject /*::lime::app::_Event_Void_Void*/ ,(int)offsetof(Window_obj,onRestore),HX_HCSTRING("onRestore","\xef","\x1f","\x5b","\x42")},
	{hx::fsObject /*::lime::app::_Event_String_Int_Int_Void*/ ,(int)offsetof(Window_obj,onTextEdit),HX_HCSTRING("onTextEdit","\x96","\xf1","\xc0","\x23")},
	{hx::fsObject /*::lime::app::_Event_String_Void*/ ,(int)offsetof(Window_obj,onTextInput),HX_HCSTRING("onTextInput","\xfe","\x36","\x4e","\x79")},
	{hx::fsObject /*::lime::graphics::Renderer*/ ,(int)offsetof(Window_obj,renderer),HX_HCSTRING("renderer","\x43","\xc5","\xdb","\xb2")},
	{hx::fsFloat,(int)offsetof(Window_obj,scale),HX_HCSTRING("scale","\x8a","\xce","\xce","\x78")},
	{hx::fsObject /*::openfl::display::Stage*/ ,(int)offsetof(Window_obj,stage),HX_HCSTRING("stage","\xbe","\x6a","\x0b","\x84")},
	{hx::fsObject /*::lime::_backend::native::NativeWindow*/ ,(int)offsetof(Window_obj,backend),HX_HCSTRING("backend","\x14","\xbc","\x87","\xfb")},
	{hx::fsBool,(int)offsetof(Window_obj,__borderless),HX_HCSTRING("__borderless","\x65","\xc1","\x04","\x50")},
	{hx::fsBool,(int)offsetof(Window_obj,__fullscreen),HX_HCSTRING("__fullscreen","\x5b","\xb5","\x47","\x32")},
	{hx::fsInt,(int)offsetof(Window_obj,__height),HX_HCSTRING("__height","\x07","\x73","\x7b","\xaa")},
	{hx::fsBool,(int)offsetof(Window_obj,__maximized),HX_HCSTRING("__maximized","\xf8","\x56","\x0d","\x2d")},
	{hx::fsBool,(int)offsetof(Window_obj,__minimized),HX_HCSTRING("__minimized","\x66","\x44","\xca","\x56")},
	{hx::fsBool,(int)offsetof(Window_obj,__resizable),HX_HCSTRING("__resizable","\x4b","\x80","\x7c","\xd7")},
	{hx::fsFloat,(int)offsetof(Window_obj,__scale),HX_HCSTRING("__scale","\x6a","\x27","\x2d","\xe3")},
	{hx::fsString,(int)offsetof(Window_obj,__title),HX_HCSTRING("__title","\x78","\x6e","\x99","\x7a")},
	{hx::fsInt,(int)offsetof(Window_obj,__width),HX_HCSTRING("__width","\xe6","\x0e","\xc1","\x34")},
	{hx::fsInt,(int)offsetof(Window_obj,__x),HX_HCSTRING("__x","\x58","\x69","\x48","\x00")},
	{hx::fsInt,(int)offsetof(Window_obj,__y),HX_HCSTRING("__y","\x59","\x69","\x48","\x00")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo *sStaticStorageInfo = 0;
#endif

static ::String sMemberFields[] = {
	HX_HCSTRING("application","\x50","\xab","\x3e","\x2a"),
	HX_HCSTRING("config","\xc2","\x56","\xd2","\xc7"),
	HX_HCSTRING("display","\x42","\x2a","\x4a","\xbb"),
	HX_HCSTRING("id","\xdb","\x5b","\x00","\x00"),
	HX_HCSTRING("onActivate","\xf2","\xef","\x62","\xc3"),
	HX_HCSTRING("onClose","\x19","\xb6","\xa0","\xde"),
	HX_HCSTRING("onCreate","\x7b","\x5d","\xbc","\x5b"),
	HX_HCSTRING("onDeactivate","\x33","\xfe","\x44","\x14"),
	HX_HCSTRING("onDropFile","\x8a","\x4a","\x0d","\xc7"),
	HX_HCSTRING("onEnter","\x79","\x0b","\xc4","\x06"),
	HX_HCSTRING("onFocusIn","\x7e","\xfe","\x2d","\x19"),
	HX_HCSTRING("onFocusOut","\xd5","\x43","\x15","\xef"),
	HX_HCSTRING("onFullscreen","\x3a","\xdc","\xf7","\xd1"),
	HX_HCSTRING("onKeyDown","\x42","\x22","\xf2","\x73"),
	HX_HCSTRING("onKeyUp","\x3b","\x58","\x3c","\x75"),
	HX_HCSTRING("onLeave","\x58","\xd3","\x90","\x08"),
	HX_HCSTRING("onMinimize","\x5d","\x13","\x30","\xff"),
	HX_HCSTRING("onMouseDown","\x08","\x94","\x05","\x11"),
	HX_HCSTRING("onMouseMove","\xb7","\x7e","\xf8","\x16"),
	HX_HCSTRING("onMouseMoveRelative","\xa3","\x06","\xbf","\x7a"),
	HX_HCSTRING("onMouseUp","\x81","\xac","\x1d","\x98"),
	HX_HCSTRING("onMouseWheel","\x35","\xca","\xca","\xbf"),
	HX_HCSTRING("onMove","\xd0","\xeb","\xea","\xea"),
	HX_HCSTRING("onResize","\x73","\x50","\x28","\xe8"),
	HX_HCSTRING("onRestore","\xef","\x1f","\x5b","\x42"),
	HX_HCSTRING("onTextEdit","\x96","\xf1","\xc0","\x23"),
	HX_HCSTRING("onTextInput","\xfe","\x36","\x4e","\x79"),
	HX_HCSTRING("renderer","\x43","\xc5","\xdb","\xb2"),
	HX_HCSTRING("scale","\x8a","\xce","\xce","\x78"),
	HX_HCSTRING("stage","\xbe","\x6a","\x0b","\x84"),
	HX_HCSTRING("backend","\x14","\xbc","\x87","\xfb"),
	HX_HCSTRING("__borderless","\x65","\xc1","\x04","\x50"),
	HX_HCSTRING("__fullscreen","\x5b","\xb5","\x47","\x32"),
	HX_HCSTRING("__height","\x07","\x73","\x7b","\xaa"),
	HX_HCSTRING("__maximized","\xf8","\x56","\x0d","\x2d"),
	HX_HCSTRING("__minimized","\x66","\x44","\xca","\x56"),
	HX_HCSTRING("__resizable","\x4b","\x80","\x7c","\xd7"),
	HX_HCSTRING("__scale","\x6a","\x27","\x2d","\xe3"),
	HX_HCSTRING("__title","\x78","\x6e","\x99","\x7a"),
	HX_HCSTRING("__width","\xe6","\x0e","\xc1","\x34"),
	HX_HCSTRING("__x","\x58","\x69","\x48","\x00"),
	HX_HCSTRING("__y","\x59","\x69","\x48","\x00"),
	HX_HCSTRING("alert","\x5c","\x57","\x8e","\x21"),
	HX_HCSTRING("close","\xb8","\x17","\x63","\x48"),
	HX_HCSTRING("create","\xfc","\x66","\x0f","\x7c"),
	HX_HCSTRING("focus","\xd8","\x5f","\x89","\x04"),
	HX_HCSTRING("move","\x11","\xe3","\x60","\x48"),
	HX_HCSTRING("resize","\xf4","\x59","\x7b","\x08"),
	HX_HCSTRING("setIcon","\x3b","\x28","\x37","\x0b"),
	HX_HCSTRING("toString","\xac","\xd0","\x6e","\x38"),
	HX_HCSTRING("get_display","\x59","\x8a","\x44","\x41"),
	HX_HCSTRING("get_displayMode","\x5c","\x2a","\x35","\xf1"),
	HX_HCSTRING("set_displayMode","\x68","\xa7","\x00","\xed"),
	HX_HCSTRING("get_borderless","\x8e","\xce","\x66","\x8d"),
	HX_HCSTRING("set_borderless","\x02","\xb7","\x86","\xad"),
	HX_HCSTRING("get_enableTextEvents","\x12","\x49","\x74","\x88"),
	HX_HCSTRING("set_enableTextEvents","\x86","\x00","\x2c","\x55"),
	HX_HCSTRING("get_fullscreen","\x84","\xc2","\xa9","\x6f"),
	HX_HCSTRING("set_fullscreen","\xf8","\xaa","\xc9","\x8f"),
	HX_HCSTRING("get_height","\xb0","\x77","\xd3","\xf2"),
	HX_HCSTRING("set_height","\x24","\x16","\x51","\xf6"),
	HX_HCSTRING("get_maximized","\xef","\xe1","\x44","\xc0"),
	HX_HCSTRING("set_maximized","\xfb","\xc3","\x4a","\x05"),
	HX_HCSTRING("get_minimized","\x5d","\xcf","\x01","\xea"),
	HX_HCSTRING("set_minimized","\x69","\xb1","\x07","\x2f"),
	HX_HCSTRING("get_resizable","\x42","\x0b","\xb4","\x6a"),
	HX_HCSTRING("set_resizable","\x4e","\xed","\xb9","\xaf"),
	HX_HCSTRING("get_scale","\xe1","\x2a","\x78","\xbc"),
	HX_HCSTRING("get_title","\xef","\x71","\xe4","\x53"),
	HX_HCSTRING("set_title","\xfb","\x5d","\x35","\x37"),
	HX_HCSTRING("get_width","\x5d","\x12","\x0c","\x0e"),
	HX_HCSTRING("set_width","\x69","\xfe","\x5c","\xf1"),
	HX_HCSTRING("get_x","\x4f","\xa5","\x60","\x91"),
	HX_HCSTRING("set_x","\x5b","\x9b","\x2f","\x7a"),
	HX_HCSTRING("get_y","\x50","\xa5","\x60","\x91"),
	HX_HCSTRING("set_y","\x5c","\x9b","\x2f","\x7a"),
	::String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(Window_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(Window_obj::__mClass,"__mClass");
};

#endif

hx::Class Window_obj::__mClass;

void Window_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("lime.ui.Window","\x51","\x58","\xb8","\xfe");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = hx::Class_obj::dupFunctions(sMemberFields);
	__mClass->mCanCast = hx::TCanCast< Window_obj >;
#ifdef HXCPP_VISIT_ALLOCS
	__mClass->mVisitFunc = sVisitStatics;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = sStaticStorageInfo;
#endif
	hx::RegisterClass(__mClass->mName, __mClass);
}

} // end namespace lime
} // end namespace ui
