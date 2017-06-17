#include <hxcpp.h>

#ifndef INCLUDED_Reflect
#include <Reflect.h>
#endif
#ifndef INCLUDED_lime__backend_native_NativeApplication
#include <lime/_backend/native/NativeApplication.h>
#endif
#ifndef INCLUDED_lime__backend_native_NativeCFFI
#include <lime/_backend/native/NativeCFFI.h>
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
#ifndef INCLUDED_lime_app__Event_Void_Void
#include <lime/app/_Event_Void_Void.h>
#endif
#ifndef INCLUDED_lime_graphics_Image
#include <lime/graphics/Image.h>
#endif
#ifndef INCLUDED_lime_graphics_ImageBuffer
#include <lime/graphics/ImageBuffer.h>
#endif
#ifndef INCLUDED_lime_system_Display
#include <lime/system/Display.h>
#endif
#ifndef INCLUDED_lime_system_DisplayMode
#include <lime/system/DisplayMode.h>
#endif
#ifndef INCLUDED_lime_system_System
#include <lime/system/System.h>
#endif
#ifndef INCLUDED_lime_ui_Window
#include <lime/ui/Window.h>
#endif
namespace lime{
namespace _backend{
namespace native{

Void NativeWindow_obj::__construct(::lime::ui::Window parent)
{
{
	this->parent = parent;
	::lime::_system::DisplayMode tmp = ::lime::_system::DisplayMode_obj::__new((int)0,(int)0,(int)0,(int)0);
	this->displayMode = tmp;
}
;
	return null();
}

//NativeWindow_obj::~NativeWindow_obj() { }

Dynamic NativeWindow_obj::__CreateEmpty() { return  new NativeWindow_obj; }
hx::ObjectPtr< NativeWindow_obj > NativeWindow_obj::__new(::lime::ui::Window parent)
{  hx::ObjectPtr< NativeWindow_obj > _result_ = new NativeWindow_obj();
	_result_->__construct(parent);
	return _result_;}

Dynamic NativeWindow_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< NativeWindow_obj > _result_ = new NativeWindow_obj();
	_result_->__construct(inArgs[0]);
	return _result_;}

Void NativeWindow_obj::alert( ::String message,::String title){
{
		Dynamic tmp = this->handle;
		bool tmp1 = (tmp != null());
		if ((tmp1)){
			::lime::_backend::native::NativeCFFI_obj::cffi_lime_window_alert.call(hx::DynamicPtr(this->handle),message,title);
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(NativeWindow_obj,alert,(void))

Void NativeWindow_obj::close( ){
{
		bool tmp = this->closing;
		bool tmp1 = !(tmp);
		if ((tmp1)){
			this->closing = true;
			::lime::ui::Window tmp2 = this->parent;
			tmp2->onClose->dispatch();
			::lime::ui::Window tmp3 = this->parent;
			bool tmp4 = tmp3->onClose->canceled;
			bool tmp5 = !(tmp4);
			if ((tmp5)){
				Dynamic tmp6 = this->handle;
				bool tmp7 = (tmp6 != null());
				if ((tmp7)){
					::lime::_backend::native::NativeCFFI_obj::cffi_lime_window_close.call(hx::DynamicPtr(this->handle));
					this->handle = null();
				}
			}
			else{
				this->closing = false;
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(NativeWindow_obj,close,(void))

Void NativeWindow_obj::create( ::lime::app::Application application){
{
		::lime::ui::Window tmp = this->parent;
		::String tmp1 = tmp->__title;
		bool tmp2 = (tmp1 != null());
		bool tmp3;
		if ((tmp2)){
			::lime::ui::Window tmp4 = this->parent;
			::lime::ui::Window tmp5 = tmp4;
			::String tmp6 = tmp5->__title;
			tmp3 = (tmp6 != HX_HCSTRING("","\x00","\x00","\x00","\x00"));
		}
		else{
			tmp3 = false;
		}
		::String tmp4;
		if ((tmp3)){
			::lime::ui::Window tmp5 = this->parent;
			tmp4 = tmp5->__title;
		}
		else{
			tmp4 = HX_HCSTRING("Lime Application","\xc5","\xb5","\x9d","\xec");
		}
		::String title = tmp4;
		int flags = (int)0;
		::lime::ui::Window tmp5 = this->parent;
		Dynamic tmp6 = tmp5->config;
		bool tmp7 = (tmp6 != null());
		if ((tmp7)){
			::lime::ui::Window tmp8 = this->parent;
			Dynamic tmp9 = tmp8->config;
			bool tmp10 = ::Reflect_obj::hasField(tmp9,HX_HCSTRING("antialiasing","\xf4","\x16","\xb3","\x48"));
			if ((tmp10)){
				::lime::ui::Window tmp11 = this->parent;
				Dynamic tmp12 = tmp11->config->__Field(HX_HCSTRING("antialiasing","\xf4","\x16","\xb3","\x48"), hx::paccDynamic );
				bool tmp13 = (tmp12 >= (int)4);
				if ((tmp13)){
					hx::OrEq(flags,(int)96);
				}
				else{
					::lime::ui::Window tmp14 = this->parent;
					Dynamic tmp15 = tmp14->config->__Field(HX_HCSTRING("antialiasing","\xf4","\x16","\xb3","\x48"), hx::paccDynamic );
					bool tmp16 = (tmp15 >= (int)2);
					if ((tmp16)){
						hx::OrEq(flags,(int)32);
					}
				}
			}
			::lime::ui::Window tmp11 = this->parent;
			Dynamic tmp12 = tmp11->config;
			Dynamic tmp13 = tmp12;
			bool tmp14 = ::Reflect_obj::hasField(tmp13,HX_HCSTRING("allowHighDPI","\x92","\x07","\xa2","\xb4"));
			bool tmp15;
			if ((tmp14)){
				::lime::ui::Window tmp16 = this->parent;
				::lime::ui::Window tmp17 = tmp16;
				tmp15 = tmp17->config->__Field(HX_HCSTRING("allowHighDPI","\x92","\x07","\xa2","\xb4"), hx::paccDynamic );
			}
			else{
				tmp15 = false;
			}
			if ((tmp15)){
				hx::OrEq(flags,(int)2048);
			}
			::lime::ui::Window tmp16 = this->parent;
			Dynamic tmp17 = tmp16->config;
			Dynamic tmp18 = tmp17;
			bool tmp19 = ::Reflect_obj::hasField(tmp18,HX_HCSTRING("alwaysOnTop","\x67","\x4d","\x53","\x16"));
			bool tmp20;
			if ((tmp19)){
				::lime::ui::Window tmp21 = this->parent;
				::lime::ui::Window tmp22 = tmp21;
				tmp20 = tmp22->config->__Field(HX_HCSTRING("alwaysOnTop","\x67","\x4d","\x53","\x16"), hx::paccDynamic );
			}
			else{
				tmp20 = false;
			}
			if ((tmp20)){
				hx::OrEq(flags,(int)32768);
			}
			::lime::ui::Window tmp21 = this->parent;
			bool tmp22 = tmp21->__borderless;
			if ((tmp22)){
				hx::OrEq(flags,(int)2);
			}
			::lime::ui::Window tmp23 = this->parent;
			Dynamic tmp24 = tmp23->config;
			Dynamic tmp25 = tmp24;
			bool tmp26 = ::Reflect_obj::hasField(tmp25,HX_HCSTRING("depthBuffer","\x63","\x46","\x9e","\x52"));
			bool tmp27;
			if ((tmp26)){
				::lime::ui::Window tmp28 = this->parent;
				::lime::ui::Window tmp29 = tmp28;
				tmp27 = tmp29->config->__Field(HX_HCSTRING("depthBuffer","\x63","\x46","\x9e","\x52"), hx::paccDynamic );
			}
			else{
				tmp27 = false;
			}
			if ((tmp27)){
				hx::OrEq(flags,(int)512);
			}
			::lime::ui::Window tmp28 = this->parent;
			bool tmp29 = tmp28->__fullscreen;
			if ((tmp29)){
				hx::OrEq(flags,(int)1);
			}
			::lime::ui::Window tmp30 = this->parent;
			Dynamic tmp31 = tmp30->config;
			Dynamic tmp32 = tmp31;
			bool tmp33 = ::Reflect_obj::hasField(tmp32,HX_HCSTRING("hardware","\xa8","\xe2","\xd3","\x75"));
			bool tmp34;
			if ((tmp33)){
				::lime::ui::Window tmp35 = this->parent;
				::lime::ui::Window tmp36 = tmp35;
				tmp34 = tmp36->config->__Field(HX_HCSTRING("hardware","\xa8","\xe2","\xd3","\x75"), hx::paccDynamic );
			}
			else{
				tmp34 = false;
			}
			if ((tmp34)){
				hx::OrEq(flags,(int)8);
			}
			::lime::ui::Window tmp35 = this->parent;
			Dynamic tmp36 = tmp35->config;
			Dynamic tmp37 = tmp36;
			bool tmp38 = ::Reflect_obj::hasField(tmp37,HX_HCSTRING("hidden","\x6a","\xff","\x95","\x4c"));
			bool tmp39;
			if ((tmp38)){
				::lime::ui::Window tmp40 = this->parent;
				::lime::ui::Window tmp41 = tmp40;
				tmp39 = tmp41->config->__Field(HX_HCSTRING("hidden","\x6a","\xff","\x95","\x4c"), hx::paccDynamic );
			}
			else{
				tmp39 = false;
			}
			if ((tmp39)){
				hx::OrEq(flags,(int)4096);
			}
			::lime::ui::Window tmp40 = this->parent;
			Dynamic tmp41 = tmp40->config;
			Dynamic tmp42 = tmp41;
			bool tmp43 = ::Reflect_obj::hasField(tmp42,HX_HCSTRING("maximized","\x18","\x0e","\xe1","\xfe"));
			bool tmp44;
			if ((tmp43)){
				::lime::ui::Window tmp45 = this->parent;
				::lime::ui::Window tmp46 = tmp45;
				tmp44 = tmp46->config->__Field(HX_HCSTRING("maximized","\x18","\x0e","\xe1","\xfe"), hx::paccDynamic );
			}
			else{
				tmp44 = false;
			}
			if ((tmp44)){
				hx::OrEq(flags,(int)16384);
			}
			::lime::ui::Window tmp45 = this->parent;
			Dynamic tmp46 = tmp45->config;
			Dynamic tmp47 = tmp46;
			bool tmp48 = ::Reflect_obj::hasField(tmp47,HX_HCSTRING("minimized","\x86","\xfb","\x9d","\x28"));
			bool tmp49;
			if ((tmp48)){
				::lime::ui::Window tmp50 = this->parent;
				::lime::ui::Window tmp51 = tmp50;
				tmp49 = tmp51->config->__Field(HX_HCSTRING("minimized","\x86","\xfb","\x9d","\x28"), hx::paccDynamic );
			}
			else{
				tmp49 = false;
			}
			if ((tmp49)){
				hx::OrEq(flags,(int)8192);
			}
			::lime::ui::Window tmp50 = this->parent;
			bool tmp51 = tmp50->__resizable;
			if ((tmp51)){
				hx::OrEq(flags,(int)4);
			}
			::lime::ui::Window tmp52 = this->parent;
			Dynamic tmp53 = tmp52->config;
			Dynamic tmp54 = tmp53;
			bool tmp55 = ::Reflect_obj::hasField(tmp54,HX_HCSTRING("stencilBuffer","\x1c","\x94","\x39","\x31"));
			bool tmp56;
			if ((tmp55)){
				::lime::ui::Window tmp57 = this->parent;
				::lime::ui::Window tmp58 = tmp57;
				tmp56 = tmp58->config->__Field(HX_HCSTRING("stencilBuffer","\x1c","\x94","\x39","\x31"), hx::paccDynamic );
			}
			else{
				tmp56 = false;
			}
			if ((tmp56)){
				hx::OrEq(flags,(int)1024);
			}
			::lime::ui::Window tmp57 = this->parent;
			Dynamic tmp58 = tmp57->config;
			Dynamic tmp59 = tmp58;
			bool tmp60 = ::Reflect_obj::hasField(tmp59,HX_HCSTRING("vsync","\xd1","\x2d","\xa8","\x3d"));
			bool tmp61;
			if ((tmp60)){
				::lime::ui::Window tmp62 = this->parent;
				::lime::ui::Window tmp63 = tmp62;
				tmp61 = tmp63->config->__Field(HX_HCSTRING("vsync","\xd1","\x2d","\xa8","\x3d"), hx::paccDynamic );
			}
			else{
				tmp61 = false;
			}
			if ((tmp61)){
				hx::OrEq(flags,(int)16);
			}
		}
		this->handle = ((Dynamic)(::lime::_backend::native::NativeCFFI_obj::cffi_lime_window_create.call(hx::DynamicPtr(application->backend->handle),this->parent->__width,this->parent->__height,flags,title)));
		Dynamic tmp8 = this->handle;
		bool tmp9 = (tmp8 != null());
		if ((tmp9)){
			::lime::ui::Window tmp10 = this->parent;
			tmp10->__width = ::lime::_backend::native::NativeCFFI_obj::cffi_lime_window_get_width.call(hx::DynamicPtr(this->handle));
			::lime::ui::Window tmp11 = this->parent;
			tmp11->__height = ::lime::_backend::native::NativeCFFI_obj::cffi_lime_window_get_height.call(hx::DynamicPtr(this->handle));
			::lime::ui::Window tmp12 = this->parent;
			tmp12->__x = ::lime::_backend::native::NativeCFFI_obj::cffi_lime_window_get_x.call(hx::DynamicPtr(this->handle));
			::lime::ui::Window tmp13 = this->parent;
			tmp13->__y = ::lime::_backend::native::NativeCFFI_obj::cffi_lime_window_get_y.call(hx::DynamicPtr(this->handle));
			::lime::ui::Window tmp14 = this->parent;
			tmp14->id = ::lime::_backend::native::NativeCFFI_obj::cffi_lime_window_get_id.call(hx::DynamicPtr(this->handle));
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(NativeWindow_obj,create,(void))

Void NativeWindow_obj::focus( ){
{
		Dynamic tmp = this->handle;
		bool tmp1 = (tmp != null());
		if ((tmp1)){
			::lime::_backend::native::NativeCFFI_obj::cffi_lime_window_focus.call(hx::DynamicPtr(this->handle));
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(NativeWindow_obj,focus,(void))

::lime::_system::Display NativeWindow_obj::getDisplay( ){
	Dynamic tmp = this->handle;
	bool tmp1 = (tmp != null());
	if ((tmp1)){
		int index = ::lime::_backend::native::NativeCFFI_obj::cffi_lime_window_get_display.call(hx::DynamicPtr(this->handle));
		bool tmp2 = (index > (int)-1);
		if ((tmp2)){
			int tmp3 = index;
			::lime::_system::Display tmp4 = ::lime::_system::System_obj::getDisplay(tmp3);
			return tmp4;
		}
	}
	return null();
}


HX_DEFINE_DYNAMIC_FUNC0(NativeWindow_obj,getDisplay,return )

::lime::_system::DisplayMode NativeWindow_obj::getDisplayMode( ){
	Dynamic tmp = this->handle;
	bool tmp1 = (tmp != null());
	if ((tmp1)){
		Dynamic data = ((Dynamic)(::lime::_backend::native::NativeCFFI_obj::cffi_lime_window_get_display_mode.call(hx::DynamicPtr(this->handle))));
		::lime::_system::DisplayMode tmp2 = this->displayMode;
		tmp2->__FieldRef(HX_HCSTRING("width","\x06","\xb6","\x62","\xca")) = data->__Field(HX_HCSTRING("width","\x06","\xb6","\x62","\xca"), hx::paccDynamic );
		::lime::_system::DisplayMode tmp3 = this->displayMode;
		tmp3->__FieldRef(HX_HCSTRING("height","\xe7","\x07","\x4c","\x02")) = data->__Field(HX_HCSTRING("height","\xe7","\x07","\x4c","\x02"), hx::paccDynamic );
		::lime::_system::DisplayMode tmp4 = this->displayMode;
		tmp4->__FieldRef(HX_HCSTRING("pixelFormat","\x5d","\x72","\x1b","\x6f")) = data->__Field(HX_HCSTRING("pixelFormat","\x5d","\x72","\x1b","\x6f"), hx::paccDynamic );
		::lime::_system::DisplayMode tmp5 = this->displayMode;
		tmp5->__FieldRef(HX_HCSTRING("refreshRate","\x5b","\xe2","\x3f","\x40")) = data->__Field(HX_HCSTRING("refreshRate","\x5b","\xe2","\x3f","\x40"), hx::paccDynamic );
	}
	::lime::_system::DisplayMode tmp2 = this->displayMode;
	return tmp2;
}


HX_DEFINE_DYNAMIC_FUNC0(NativeWindow_obj,getDisplayMode,return )

::lime::_system::DisplayMode NativeWindow_obj::setDisplayMode( ::lime::_system::DisplayMode value){
	Dynamic tmp = this->handle;
	bool tmp1 = (tmp != null());
	if ((tmp1)){
		Dynamic data = ((Dynamic)(::lime::_backend::native::NativeCFFI_obj::cffi_lime_window_set_display_mode.call(hx::DynamicPtr(this->handle),hx::DynamicPtr(value))));
		::lime::_system::DisplayMode tmp2 = this->displayMode;
		tmp2->__FieldRef(HX_HCSTRING("width","\x06","\xb6","\x62","\xca")) = data->__Field(HX_HCSTRING("width","\x06","\xb6","\x62","\xca"), hx::paccDynamic );
		::lime::_system::DisplayMode tmp3 = this->displayMode;
		tmp3->__FieldRef(HX_HCSTRING("height","\xe7","\x07","\x4c","\x02")) = data->__Field(HX_HCSTRING("height","\xe7","\x07","\x4c","\x02"), hx::paccDynamic );
		::lime::_system::DisplayMode tmp4 = this->displayMode;
		tmp4->__FieldRef(HX_HCSTRING("pixelFormat","\x5d","\x72","\x1b","\x6f")) = data->__Field(HX_HCSTRING("pixelFormat","\x5d","\x72","\x1b","\x6f"), hx::paccDynamic );
		::lime::_system::DisplayMode tmp5 = this->displayMode;
		tmp5->__FieldRef(HX_HCSTRING("refreshRate","\x5b","\xe2","\x3f","\x40")) = data->__Field(HX_HCSTRING("refreshRate","\x5b","\xe2","\x3f","\x40"), hx::paccDynamic );
	}
	::lime::_system::DisplayMode tmp2 = this->displayMode;
	return tmp2;
}


HX_DEFINE_DYNAMIC_FUNC1(NativeWindow_obj,setDisplayMode,return )

bool NativeWindow_obj::getEnableTextEvents( ){
	Dynamic tmp = this->handle;
	bool tmp1 = (tmp != null());
	if ((tmp1)){
		return ::lime::_backend::native::NativeCFFI_obj::cffi_lime_window_get_enable_text_events.call(hx::DynamicPtr(this->handle));
	}
	return false;
}


HX_DEFINE_DYNAMIC_FUNC0(NativeWindow_obj,getEnableTextEvents,return )

Void NativeWindow_obj::move( int x,int y){
{
		Dynamic tmp = this->handle;
		bool tmp1 = (tmp != null());
		if ((tmp1)){
			::lime::_backend::native::NativeCFFI_obj::cffi_lime_window_move.call(hx::DynamicPtr(this->handle),x,y);
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(NativeWindow_obj,move,(void))

Void NativeWindow_obj::resize( int width,int height){
{
		Dynamic tmp = this->handle;
		bool tmp1 = (tmp != null());
		if ((tmp1)){
			::lime::_backend::native::NativeCFFI_obj::cffi_lime_window_resize.call(hx::DynamicPtr(this->handle),width,height);
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(NativeWindow_obj,resize,(void))

bool NativeWindow_obj::setBorderless( bool value){
	Dynamic tmp = this->handle;
	bool tmp1 = (tmp != null());
	if ((tmp1)){
		::lime::_backend::native::NativeCFFI_obj::cffi_lime_window_set_borderless.call(hx::DynamicPtr(this->handle),value);
	}
	bool tmp2 = value;
	return tmp2;
}


HX_DEFINE_DYNAMIC_FUNC1(NativeWindow_obj,setBorderless,return )

bool NativeWindow_obj::setEnableTextEvents( bool value){
	Dynamic tmp = this->handle;
	bool tmp1 = (tmp != null());
	if ((tmp1)){
		::lime::_backend::native::NativeCFFI_obj::cffi_lime_window_set_enable_text_events.call(hx::DynamicPtr(this->handle),value);
	}
	bool tmp2 = value;
	return tmp2;
}


HX_DEFINE_DYNAMIC_FUNC1(NativeWindow_obj,setEnableTextEvents,return )

bool NativeWindow_obj::setFullscreen( bool value){
	Dynamic tmp = this->handle;
	bool tmp1 = (tmp != null());
	if ((tmp1)){
		value = ::lime::_backend::native::NativeCFFI_obj::cffi_lime_window_set_fullscreen.call(hx::DynamicPtr(this->handle),value);
		::lime::ui::Window tmp2 = this->parent;
		tmp2->__width = ::lime::_backend::native::NativeCFFI_obj::cffi_lime_window_get_width.call(hx::DynamicPtr(this->handle));
		::lime::ui::Window tmp3 = this->parent;
		tmp3->__height = ::lime::_backend::native::NativeCFFI_obj::cffi_lime_window_get_height.call(hx::DynamicPtr(this->handle));
		::lime::ui::Window tmp4 = this->parent;
		tmp4->__x = ::lime::_backend::native::NativeCFFI_obj::cffi_lime_window_get_x.call(hx::DynamicPtr(this->handle));
		::lime::ui::Window tmp5 = this->parent;
		tmp5->__y = ::lime::_backend::native::NativeCFFI_obj::cffi_lime_window_get_y.call(hx::DynamicPtr(this->handle));
		bool tmp6 = value;
		if ((tmp6)){
			::lime::ui::Window tmp7 = this->parent;
			tmp7->onFullscreen->dispatch();
		}
	}
	bool tmp2 = value;
	return tmp2;
}


HX_DEFINE_DYNAMIC_FUNC1(NativeWindow_obj,setFullscreen,return )

Void NativeWindow_obj::setIcon( ::lime::graphics::Image image){
{
		Dynamic tmp = this->handle;
		bool tmp1 = (tmp != null());
		if ((tmp1)){
			::lime::_backend::native::NativeCFFI_obj::cffi_lime_window_set_icon.call(hx::DynamicPtr(this->handle),hx::DynamicPtr(image->buffer));
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(NativeWindow_obj,setIcon,(void))

bool NativeWindow_obj::setMaximized( bool value){
	Dynamic tmp = this->handle;
	bool tmp1 = (tmp != null());
	if ((tmp1)){
		return ::lime::_backend::native::NativeCFFI_obj::cffi_lime_window_set_maximized.call(hx::DynamicPtr(this->handle),value);
	}
	bool tmp2 = value;
	return tmp2;
}


HX_DEFINE_DYNAMIC_FUNC1(NativeWindow_obj,setMaximized,return )

bool NativeWindow_obj::setMinimized( bool value){
	Dynamic tmp = this->handle;
	bool tmp1 = (tmp != null());
	if ((tmp1)){
		return ::lime::_backend::native::NativeCFFI_obj::cffi_lime_window_set_minimized.call(hx::DynamicPtr(this->handle),value);
	}
	bool tmp2 = value;
	return tmp2;
}


HX_DEFINE_DYNAMIC_FUNC1(NativeWindow_obj,setMinimized,return )

bool NativeWindow_obj::setResizable( bool value){
	Dynamic tmp = this->handle;
	bool tmp1 = (tmp != null());
	if ((tmp1)){
		::lime::_backend::native::NativeCFFI_obj::cffi_lime_window_set_resizable.call(hx::DynamicPtr(this->handle),value);
		::lime::_backend::native::NativeCFFI_obj::cffi_lime_window_set_borderless.call(hx::DynamicPtr(this->handle),!(this->parent->__borderless));
		::lime::_backend::native::NativeCFFI_obj::cffi_lime_window_set_borderless.call(hx::DynamicPtr(this->handle),this->parent->__borderless);
	}
	bool tmp2 = value;
	return tmp2;
}


HX_DEFINE_DYNAMIC_FUNC1(NativeWindow_obj,setResizable,return )

::String NativeWindow_obj::setTitle( ::String value){
	Dynamic tmp = this->handle;
	bool tmp1 = (tmp != null());
	if ((tmp1)){
		return ((Dynamic)(::lime::_backend::native::NativeCFFI_obj::cffi_lime_window_set_title.call(hx::DynamicPtr(this->handle),value)));
	}
	::String tmp2 = value;
	return tmp2;
}


HX_DEFINE_DYNAMIC_FUNC1(NativeWindow_obj,setTitle,return )


NativeWindow_obj::NativeWindow_obj()
{
}

void NativeWindow_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(NativeWindow);
	HX_MARK_MEMBER_NAME(handle,"handle");
	HX_MARK_MEMBER_NAME(closing,"closing");
	HX_MARK_MEMBER_NAME(displayMode,"displayMode");
	HX_MARK_MEMBER_NAME(parent,"parent");
	HX_MARK_END_CLASS();
}

void NativeWindow_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(handle,"handle");
	HX_VISIT_MEMBER_NAME(closing,"closing");
	HX_VISIT_MEMBER_NAME(displayMode,"displayMode");
	HX_VISIT_MEMBER_NAME(parent,"parent");
}

Dynamic NativeWindow_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"move") ) { return move_dyn(); }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"alert") ) { return alert_dyn(); }
		if (HX_FIELD_EQ(inName,"close") ) { return close_dyn(); }
		if (HX_FIELD_EQ(inName,"focus") ) { return focus_dyn(); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"handle") ) { return handle; }
		if (HX_FIELD_EQ(inName,"parent") ) { return parent; }
		if (HX_FIELD_EQ(inName,"create") ) { return create_dyn(); }
		if (HX_FIELD_EQ(inName,"resize") ) { return resize_dyn(); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"closing") ) { return closing; }
		if (HX_FIELD_EQ(inName,"setIcon") ) { return setIcon_dyn(); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"setTitle") ) { return setTitle_dyn(); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"getDisplay") ) { return getDisplay_dyn(); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"displayMode") ) { return displayMode; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"setMaximized") ) { return setMaximized_dyn(); }
		if (HX_FIELD_EQ(inName,"setMinimized") ) { return setMinimized_dyn(); }
		if (HX_FIELD_EQ(inName,"setResizable") ) { return setResizable_dyn(); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"setBorderless") ) { return setBorderless_dyn(); }
		if (HX_FIELD_EQ(inName,"setFullscreen") ) { return setFullscreen_dyn(); }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"getDisplayMode") ) { return getDisplayMode_dyn(); }
		if (HX_FIELD_EQ(inName,"setDisplayMode") ) { return setDisplayMode_dyn(); }
		break;
	case 19:
		if (HX_FIELD_EQ(inName,"getEnableTextEvents") ) { return getEnableTextEvents_dyn(); }
		if (HX_FIELD_EQ(inName,"setEnableTextEvents") ) { return setEnableTextEvents_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic NativeWindow_obj::__SetField(const ::String &inName,const Dynamic &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 6:
		if (HX_FIELD_EQ(inName,"handle") ) { handle=inValue.Cast< Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"parent") ) { parent=inValue.Cast< ::lime::ui::Window >(); return inValue; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"closing") ) { closing=inValue.Cast< bool >(); return inValue; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"displayMode") ) { displayMode=inValue.Cast< ::lime::_system::DisplayMode >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void NativeWindow_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("handle","\xa8","\x83","\xfd","\xb7"));
	outFields->push(HX_HCSTRING("closing","\xf5","\xde","\x25","\x79"));
	outFields->push(HX_HCSTRING("displayMode","\xc5","\x72","\x53","\x30"));
	outFields->push(HX_HCSTRING("parent","\x2a","\x05","\x7e","\xed"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsObject /*Dynamic*/ ,(int)offsetof(NativeWindow_obj,handle),HX_HCSTRING("handle","\xa8","\x83","\xfd","\xb7")},
	{hx::fsBool,(int)offsetof(NativeWindow_obj,closing),HX_HCSTRING("closing","\xf5","\xde","\x25","\x79")},
	{hx::fsObject /*::lime::_system::DisplayMode*/ ,(int)offsetof(NativeWindow_obj,displayMode),HX_HCSTRING("displayMode","\xc5","\x72","\x53","\x30")},
	{hx::fsObject /*::lime::ui::Window*/ ,(int)offsetof(NativeWindow_obj,parent),HX_HCSTRING("parent","\x2a","\x05","\x7e","\xed")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo *sStaticStorageInfo = 0;
#endif

static ::String sMemberFields[] = {
	HX_HCSTRING("handle","\xa8","\x83","\xfd","\xb7"),
	HX_HCSTRING("closing","\xf5","\xde","\x25","\x79"),
	HX_HCSTRING("displayMode","\xc5","\x72","\x53","\x30"),
	HX_HCSTRING("parent","\x2a","\x05","\x7e","\xed"),
	HX_HCSTRING("alert","\x5c","\x57","\x8e","\x21"),
	HX_HCSTRING("close","\xb8","\x17","\x63","\x48"),
	HX_HCSTRING("create","\xfc","\x66","\x0f","\x7c"),
	HX_HCSTRING("focus","\xd8","\x5f","\x89","\x04"),
	HX_HCSTRING("getDisplay","\x4c","\xb0","\xab","\x0a"),
	HX_HCSTRING("getDisplayMode","\xcf","\xc5","\xf1","\xb7"),
	HX_HCSTRING("setDisplayMode","\x43","\xae","\x11","\xd8"),
	HX_HCSTRING("getEnableTextEvents","\xbf","\x4c","\x30","\x24"),
	HX_HCSTRING("move","\x11","\xe3","\x60","\x48"),
	HX_HCSTRING("resize","\xf4","\x59","\x7b","\x08"),
	HX_HCSTRING("setBorderless","\x87","\x84","\xe9","\xb8"),
	HX_HCSTRING("setEnableTextEvents","\xcb","\x3f","\xcd","\x60"),
	HX_HCSTRING("setFullscreen","\x7d","\x78","\x2c","\x9b"),
	HX_HCSTRING("setIcon","\x3b","\x28","\x37","\x0b"),
	HX_HCSTRING("setMaximized","\x16","\xce","\x30","\x23"),
	HX_HCSTRING("setMinimized","\x84","\xbb","\xed","\x4c"),
	HX_HCSTRING("setResizable","\x69","\xf7","\x9f","\xcd"),
	HX_HCSTRING("setTitle","\x96","\x7e","\x6f","\x1e"),
	::String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(NativeWindow_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(NativeWindow_obj::__mClass,"__mClass");
};

#endif

hx::Class NativeWindow_obj::__mClass;

void NativeWindow_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("lime._backend.native.NativeWindow","\xde","\x3b","\x5b","\x7f");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = hx::Class_obj::dupFunctions(sMemberFields);
	__mClass->mCanCast = hx::TCanCast< NativeWindow_obj >;
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
} // end namespace _backend
} // end namespace native
