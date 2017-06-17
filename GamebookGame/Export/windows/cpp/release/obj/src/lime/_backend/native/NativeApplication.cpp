#include <hxcpp.h>

#ifndef INCLUDED_List
#include <List.h>
#endif
#ifndef INCLUDED_haxe_IMap
#include <haxe/IMap.h>
#endif
#ifndef INCLUDED_haxe_Timer
#include <haxe/Timer.h>
#endif
#ifndef INCLUDED_haxe_ds_IntMap
#include <haxe/ds/IntMap.h>
#endif
#ifndef INCLUDED_lime__backend_native_NativeApplication
#include <lime/_backend/native/NativeApplication.h>
#endif
#ifndef INCLUDED_lime__backend_native_NativeCFFI
#include <lime/_backend/native/NativeCFFI.h>
#endif
#ifndef INCLUDED_lime__backend_native_NativeGLRenderContext
#include <lime/_backend/native/NativeGLRenderContext.h>
#endif
#ifndef INCLUDED_lime__backend_native_NativeRenderer
#include <lime/_backend/native/NativeRenderer.h>
#endif
#ifndef INCLUDED_lime__backend_native__NativeApplication_ApplicationEventInfo
#include <lime/_backend/native/_NativeApplication/ApplicationEventInfo.h>
#endif
#ifndef INCLUDED_lime__backend_native__NativeApplication_DropEventInfo
#include <lime/_backend/native/_NativeApplication/DropEventInfo.h>
#endif
#ifndef INCLUDED_lime__backend_native__NativeApplication_GamepadEventInfo
#include <lime/_backend/native/_NativeApplication/GamepadEventInfo.h>
#endif
#ifndef INCLUDED_lime__backend_native__NativeApplication_JoystickEventInfo
#include <lime/_backend/native/_NativeApplication/JoystickEventInfo.h>
#endif
#ifndef INCLUDED_lime__backend_native__NativeApplication_KeyEventInfo
#include <lime/_backend/native/_NativeApplication/KeyEventInfo.h>
#endif
#ifndef INCLUDED_lime__backend_native__NativeApplication_MouseEventInfo
#include <lime/_backend/native/_NativeApplication/MouseEventInfo.h>
#endif
#ifndef INCLUDED_lime__backend_native__NativeApplication_RenderEventInfo
#include <lime/_backend/native/_NativeApplication/RenderEventInfo.h>
#endif
#ifndef INCLUDED_lime__backend_native__NativeApplication_SensorEventInfo
#include <lime/_backend/native/_NativeApplication/SensorEventInfo.h>
#endif
#ifndef INCLUDED_lime__backend_native__NativeApplication_TextEventInfo
#include <lime/_backend/native/_NativeApplication/TextEventInfo.h>
#endif
#ifndef INCLUDED_lime__backend_native__NativeApplication_TouchEventInfo
#include <lime/_backend/native/_NativeApplication/TouchEventInfo.h>
#endif
#ifndef INCLUDED_lime__backend_native__NativeApplication_WindowEventInfo
#include <lime/_backend/native/_NativeApplication/WindowEventInfo.h>
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
#ifndef INCLUDED_lime_app__Event_Float_Float_Float_Void
#include <lime/app/_Event_Float_Float_Float_Void.h>
#endif
#ifndef INCLUDED_lime_app__Event_Float_Float_Int_Void
#include <lime/app/_Event_Float_Float_Int_Void.h>
#endif
#ifndef INCLUDED_lime_app__Event_Float_Float_Void
#include <lime/app/_Event_Float_Float_Void.h>
#endif
#ifndef INCLUDED_lime_app__Event_Int_Float_Float_Void
#include <lime/app/_Event_Int_Float_Float_Void.h>
#endif
#ifndef INCLUDED_lime_app__Event_Int_Float_Void
#include <lime/app/_Event_Int_Float_Void.h>
#endif
#ifndef INCLUDED_lime_app__Event_Int_Int_Void
#include <lime/app/_Event_Int_Int_Void.h>
#endif
#ifndef INCLUDED_lime_app__Event_Int_Void
#include <lime/app/_Event_Int_Void.h>
#endif
#ifndef INCLUDED_lime_app__Event_Int_lime_ui_JoystickHatPosition_Void
#include <lime/app/_Event_Int_lime_ui_JoystickHatPosition_Void.h>
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
#ifndef INCLUDED_lime_app__Event_lime_graphics_RenderContext_Void
#include <lime/app/_Event_lime_graphics_RenderContext_Void.h>
#endif
#ifndef INCLUDED_lime_app__Event_lime_ui_GamepadAxis_Float_Void
#include <lime/app/_Event_lime_ui_GamepadAxis_Float_Void.h>
#endif
#ifndef INCLUDED_lime_app__Event_lime_ui_GamepadButton_Void
#include <lime/app/_Event_lime_ui_GamepadButton_Void.h>
#endif
#ifndef INCLUDED_lime_app__Event_lime_ui_KeyCode_lime_ui_KeyModifier_Void
#include <lime/app/_Event_lime_ui_KeyCode_lime_ui_KeyModifier_Void.h>
#endif
#ifndef INCLUDED_lime_app__Event_lime_ui_Touch_Void
#include <lime/app/_Event_lime_ui_Touch_Void.h>
#endif
#ifndef INCLUDED_lime_graphics_RenderContext
#include <lime/graphics/RenderContext.h>
#endif
#ifndef INCLUDED_lime_graphics_Renderer
#include <lime/graphics/Renderer.h>
#endif
#ifndef INCLUDED_lime_graphics_opengl_GL
#include <lime/graphics/opengl/GL.h>
#endif
#ifndef INCLUDED_lime_media_AudioContext
#include <lime/media/AudioContext.h>
#endif
#ifndef INCLUDED_lime_media_AudioManager
#include <lime/media/AudioManager.h>
#endif
#ifndef INCLUDED_lime_system_Sensor
#include <lime/system/Sensor.h>
#endif
#ifndef INCLUDED_lime_system_System
#include <lime/system/System.h>
#endif
#ifndef INCLUDED_lime_ui_Gamepad
#include <lime/ui/Gamepad.h>
#endif
#ifndef INCLUDED_lime_ui_Joystick
#include <lime/ui/Joystick.h>
#endif
#ifndef INCLUDED_lime_ui_Touch
#include <lime/ui/Touch.h>
#endif
#ifndef INCLUDED_lime_ui_Window
#include <lime/ui/Window.h>
#endif
#ifndef INCLUDED_lime_ui__KeyModifier_KeyModifier_Impl_
#include <lime/ui/_KeyModifier/KeyModifier_Impl_.h>
#endif
namespace lime{
namespace _backend{
namespace native{

Void NativeApplication_obj::__construct(::lime::app::Application parent)
{
{
	this->windowEventInfo = ::lime::_backend::native::_NativeApplication::WindowEventInfo_obj::__new(null(),null(),null(),null(),null(),null());
	this->unusedTouchesPool = ::List_obj::__new();
	this->touchEventInfo = ::lime::_backend::native::_NativeApplication::TouchEventInfo_obj::__new(null(),null(),null(),null(),null(),null(),null(),null());
	this->textEventInfo = ::lime::_backend::native::_NativeApplication::TextEventInfo_obj::__new(null(),null(),null(),null(),null());
	this->sensorEventInfo = ::lime::_backend::native::_NativeApplication::SensorEventInfo_obj::__new(null(),null(),null(),null(),null());
	this->renderEventInfo = ::lime::_backend::native::_NativeApplication::RenderEventInfo_obj::__new((int)0,null());
	this->mouseEventInfo = ::lime::_backend::native::_NativeApplication::MouseEventInfo_obj::__new(null(),null(),null(),null(),null(),null(),null());
	this->keyEventInfo = ::lime::_backend::native::_NativeApplication::KeyEventInfo_obj::__new(null(),null(),null(),null());
	this->joystickEventInfo = ::lime::_backend::native::_NativeApplication::JoystickEventInfo_obj::__new(null(),null(),null(),null(),null(),null());
	this->gamepadEventInfo = ::lime::_backend::native::_NativeApplication::GamepadEventInfo_obj::__new(null(),null(),null(),null(),null());
	this->dropEventInfo = ::lime::_backend::native::_NativeApplication::DropEventInfo_obj::__new(null(),null());
	this->currentTouches = ::haxe::ds::IntMap_obj::__new();
	this->applicationEventInfo = ::lime::_backend::native::_NativeApplication::ApplicationEventInfo_obj::__new((int)0,null());
	this->parent = parent;
	this->frameRate = (int)60;
	this->toggleFullscreen = true;
	::lime::media::AudioManager_obj::init(null());
}
;
	return null();
}

//NativeApplication_obj::~NativeApplication_obj() { }

Dynamic NativeApplication_obj::__CreateEmpty() { return  new NativeApplication_obj; }
hx::ObjectPtr< NativeApplication_obj > NativeApplication_obj::__new(::lime::app::Application parent)
{  hx::ObjectPtr< NativeApplication_obj > _result_ = new NativeApplication_obj();
	_result_->__construct(parent);
	return _result_;}

Dynamic NativeApplication_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< NativeApplication_obj > _result_ = new NativeApplication_obj();
	_result_->__construct(inArgs[0]);
	return _result_;}

void NativeApplication_obj::__init__() {
{
	Dynamic init = hx::ClassOf< ::lime::_backend::native::NativeCFFI >();
}
}

Void NativeApplication_obj::create( Dynamic config){
{
		struct _Function_1_1{
			inline static Dynamic Block( ){
				{
					hx::Anon __result = hx::Anon_obj::Create();
					return __result;
				}
				return null();
			}
		};
		this->handle = ((Dynamic)(::lime::_backend::native::NativeCFFI_obj::cffi_lime_application_create.call(hx::DynamicPtr(_Function_1_1::Block()))));
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(NativeApplication_obj,create,(void))

int NativeApplication_obj::exec( ){
	::lime::_backend::native::NativeCFFI_obj::cffi_lime_application_event_manager_register.call(hx::DynamicPtr(this->handleApplicationEvent_dyn()),hx::DynamicPtr(this->applicationEventInfo));
	::lime::_backend::native::NativeCFFI_obj::cffi_lime_drop_event_manager_register.call(hx::DynamicPtr(this->handleDropEvent_dyn()),hx::DynamicPtr(this->dropEventInfo));
	::lime::_backend::native::NativeCFFI_obj::cffi_lime_gamepad_event_manager_register.call(hx::DynamicPtr(this->handleGamepadEvent_dyn()),hx::DynamicPtr(this->gamepadEventInfo));
	::lime::_backend::native::NativeCFFI_obj::cffi_lime_joystick_event_manager_register.call(hx::DynamicPtr(this->handleJoystickEvent_dyn()),hx::DynamicPtr(this->joystickEventInfo));
	::lime::_backend::native::NativeCFFI_obj::cffi_lime_key_event_manager_register.call(hx::DynamicPtr(this->handleKeyEvent_dyn()),hx::DynamicPtr(this->keyEventInfo));
	::lime::_backend::native::NativeCFFI_obj::cffi_lime_mouse_event_manager_register.call(hx::DynamicPtr(this->handleMouseEvent_dyn()),hx::DynamicPtr(this->mouseEventInfo));
	::lime::_backend::native::NativeCFFI_obj::cffi_lime_render_event_manager_register.call(hx::DynamicPtr(this->handleRenderEvent_dyn()),hx::DynamicPtr(this->renderEventInfo));
	::lime::_backend::native::NativeCFFI_obj::cffi_lime_text_event_manager_register.call(hx::DynamicPtr(this->handleTextEvent_dyn()),hx::DynamicPtr(this->textEventInfo));
	::lime::_backend::native::NativeCFFI_obj::cffi_lime_touch_event_manager_register.call(hx::DynamicPtr(this->handleTouchEvent_dyn()),hx::DynamicPtr(this->touchEventInfo));
	::lime::_backend::native::NativeCFFI_obj::cffi_lime_window_event_manager_register.call(hx::DynamicPtr(this->handleWindowEvent_dyn()),hx::DynamicPtr(this->windowEventInfo));
	int result = ::lime::_backend::native::NativeCFFI_obj::cffi_lime_application_exec.call(hx::DynamicPtr(this->handle));
	::lime::app::Application tmp = this->parent;
	int tmp1 = result;
	tmp->onExit->dispatch(tmp1);
	int tmp2 = result;
	return tmp2;
	return (int)0;
}


HX_DEFINE_DYNAMIC_FUNC0(NativeApplication_obj,exec,return )

Void NativeApplication_obj::exit( ){
{
		::lime::media::AudioManager_obj::shutdown();
		::lime::_backend::native::NativeCFFI_obj::cffi_lime_application_quit.call(hx::DynamicPtr(this->handle));
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(NativeApplication_obj,exit,(void))

Float NativeApplication_obj::getFrameRate( ){
	Float tmp = this->frameRate;
	return tmp;
}


HX_DEFINE_DYNAMIC_FUNC0(NativeApplication_obj,getFrameRate,return )

Void NativeApplication_obj::handleApplicationEvent( ){
{
		::lime::_backend::native::_NativeApplication::ApplicationEventInfo tmp = this->applicationEventInfo;
		int _g = tmp->type;
		int tmp1 = _g;
		switch( (int)(tmp1)){
			case (int)0: {
				this->updateTimer();
				::lime::app::Application tmp2 = this->parent;
				::lime::_backend::native::_NativeApplication::ApplicationEventInfo tmp3 = this->applicationEventInfo;
				int tmp4 = tmp3->deltaTime;
				tmp2->onUpdate->dispatch(tmp4);
			}
			;break;
			case (int)1: {
			}
			;break;
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(NativeApplication_obj,handleApplicationEvent,(void))

Void NativeApplication_obj::handleDropEvent( ){
{
		int _g = (int)0;
		::lime::app::Application tmp = this->parent;
		Array< ::Dynamic > _g1 = tmp->__windows;
		while((true)){
			bool tmp1 = (_g < _g1->length);
			bool tmp2 = !(tmp1);
			if ((tmp2)){
				break;
			}
			::lime::ui::Window tmp3 = _g1->__get(_g).StaticCast< ::lime::ui::Window >();
			::lime::ui::Window window = tmp3;
			++(_g);
			::lime::_backend::native::_NativeApplication::DropEventInfo tmp4 = this->dropEventInfo;
			::String tmp5 = tmp4->file;
			window->onDropFile->dispatch(tmp5);
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(NativeApplication_obj,handleDropEvent,(void))

Void NativeApplication_obj::handleGamepadEvent( ){
{
		::lime::_backend::native::_NativeApplication::GamepadEventInfo tmp = this->gamepadEventInfo;
		int _g = tmp->type;
		int tmp1 = _g;
		switch( (int)(tmp1)){
			case (int)0: {
				::haxe::ds::IntMap tmp2 = ::lime::ui::Gamepad_obj::devices;
				::lime::_backend::native::_NativeApplication::GamepadEventInfo tmp3 = this->gamepadEventInfo;
				int tmp4 = tmp3->id;
				::lime::ui::Gamepad tmp5 = tmp2->get(tmp4);
				::lime::ui::Gamepad gamepad = tmp5;
				bool tmp6 = (gamepad != null());
				if ((tmp6)){
					::lime::_backend::native::_NativeApplication::GamepadEventInfo tmp7 = this->gamepadEventInfo;
					int tmp8 = tmp7->axis;
					::lime::_backend::native::_NativeApplication::GamepadEventInfo tmp9 = this->gamepadEventInfo;
					Float tmp10 = tmp9->value;
					gamepad->onAxisMove->dispatch(tmp8,tmp10);
				}
			}
			;break;
			case (int)1: {
				::haxe::ds::IntMap tmp2 = ::lime::ui::Gamepad_obj::devices;
				::lime::_backend::native::_NativeApplication::GamepadEventInfo tmp3 = this->gamepadEventInfo;
				int tmp4 = tmp3->id;
				::lime::ui::Gamepad tmp5 = tmp2->get(tmp4);
				::lime::ui::Gamepad gamepad = tmp5;
				bool tmp6 = (gamepad != null());
				if ((tmp6)){
					::lime::_backend::native::_NativeApplication::GamepadEventInfo tmp7 = this->gamepadEventInfo;
					int tmp8 = tmp7->button;
					gamepad->onButtonDown->dispatch(tmp8);
				}
			}
			;break;
			case (int)2: {
				::haxe::ds::IntMap tmp2 = ::lime::ui::Gamepad_obj::devices;
				::lime::_backend::native::_NativeApplication::GamepadEventInfo tmp3 = this->gamepadEventInfo;
				int tmp4 = tmp3->id;
				::lime::ui::Gamepad tmp5 = tmp2->get(tmp4);
				::lime::ui::Gamepad gamepad = tmp5;
				bool tmp6 = (gamepad != null());
				if ((tmp6)){
					::lime::_backend::native::_NativeApplication::GamepadEventInfo tmp7 = this->gamepadEventInfo;
					int tmp8 = tmp7->button;
					gamepad->onButtonUp->dispatch(tmp8);
				}
			}
			;break;
			case (int)3: {
				::lime::_backend::native::_NativeApplication::GamepadEventInfo tmp2 = this->gamepadEventInfo;
				int tmp3 = tmp2->id;
				::lime::ui::Gamepad_obj::__connect(tmp3);
			}
			;break;
			case (int)4: {
				::lime::_backend::native::_NativeApplication::GamepadEventInfo tmp2 = this->gamepadEventInfo;
				int tmp3 = tmp2->id;
				::lime::ui::Gamepad_obj::__disconnect(tmp3);
			}
			;break;
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(NativeApplication_obj,handleGamepadEvent,(void))

Void NativeApplication_obj::handleJoystickEvent( ){
{
		::lime::_backend::native::_NativeApplication::JoystickEventInfo tmp = this->joystickEventInfo;
		int _g = tmp->type;
		int tmp1 = _g;
		switch( (int)(tmp1)){
			case (int)0: {
				::haxe::ds::IntMap tmp2 = ::lime::ui::Joystick_obj::devices;
				::lime::_backend::native::_NativeApplication::JoystickEventInfo tmp3 = this->joystickEventInfo;
				int tmp4 = tmp3->id;
				::lime::ui::Joystick tmp5 = tmp2->get(tmp4);
				::lime::ui::Joystick joystick = tmp5;
				bool tmp6 = (joystick != null());
				if ((tmp6)){
					::lime::_backend::native::_NativeApplication::JoystickEventInfo tmp7 = this->joystickEventInfo;
					int tmp8 = tmp7->index;
					::lime::_backend::native::_NativeApplication::JoystickEventInfo tmp9 = this->joystickEventInfo;
					Float tmp10 = tmp9->x;
					joystick->onAxisMove->dispatch(tmp8,tmp10);
				}
			}
			;break;
			case (int)1: {
				::haxe::ds::IntMap tmp2 = ::lime::ui::Joystick_obj::devices;
				::lime::_backend::native::_NativeApplication::JoystickEventInfo tmp3 = this->joystickEventInfo;
				int tmp4 = tmp3->id;
				::lime::ui::Joystick tmp5 = tmp2->get(tmp4);
				::lime::ui::Joystick joystick = tmp5;
				bool tmp6 = (joystick != null());
				if ((tmp6)){
					::lime::_backend::native::_NativeApplication::JoystickEventInfo tmp7 = this->joystickEventInfo;
					int tmp8 = tmp7->index;
					::lime::_backend::native::_NativeApplication::JoystickEventInfo tmp9 = this->joystickEventInfo;
					int tmp10 = tmp9->value;
					joystick->onHatMove->dispatch(tmp8,tmp10);
				}
			}
			;break;
			case (int)2: {
				::haxe::ds::IntMap tmp2 = ::lime::ui::Joystick_obj::devices;
				::lime::_backend::native::_NativeApplication::JoystickEventInfo tmp3 = this->joystickEventInfo;
				int tmp4 = tmp3->id;
				::lime::ui::Joystick tmp5 = tmp2->get(tmp4);
				::lime::ui::Joystick joystick = tmp5;
				bool tmp6 = (joystick != null());
				if ((tmp6)){
					::lime::_backend::native::_NativeApplication::JoystickEventInfo tmp7 = this->joystickEventInfo;
					int tmp8 = tmp7->index;
					::lime::_backend::native::_NativeApplication::JoystickEventInfo tmp9 = this->joystickEventInfo;
					Float tmp10 = tmp9->x;
					::lime::_backend::native::_NativeApplication::JoystickEventInfo tmp11 = this->joystickEventInfo;
					Float tmp12 = tmp11->y;
					joystick->onTrackballMove->dispatch(tmp8,tmp10,tmp12);
				}
			}
			;break;
			case (int)3: {
				::haxe::ds::IntMap tmp2 = ::lime::ui::Joystick_obj::devices;
				::lime::_backend::native::_NativeApplication::JoystickEventInfo tmp3 = this->joystickEventInfo;
				int tmp4 = tmp3->id;
				::lime::ui::Joystick tmp5 = tmp2->get(tmp4);
				::lime::ui::Joystick joystick = tmp5;
				bool tmp6 = (joystick != null());
				if ((tmp6)){
					::lime::_backend::native::_NativeApplication::JoystickEventInfo tmp7 = this->joystickEventInfo;
					int tmp8 = tmp7->index;
					joystick->onButtonDown->dispatch(tmp8);
				}
			}
			;break;
			case (int)4: {
				::haxe::ds::IntMap tmp2 = ::lime::ui::Joystick_obj::devices;
				::lime::_backend::native::_NativeApplication::JoystickEventInfo tmp3 = this->joystickEventInfo;
				int tmp4 = tmp3->id;
				::lime::ui::Joystick tmp5 = tmp2->get(tmp4);
				::lime::ui::Joystick joystick = tmp5;
				bool tmp6 = (joystick != null());
				if ((tmp6)){
					::lime::_backend::native::_NativeApplication::JoystickEventInfo tmp7 = this->joystickEventInfo;
					int tmp8 = tmp7->index;
					joystick->onButtonUp->dispatch(tmp8);
				}
			}
			;break;
			case (int)5: {
				::lime::_backend::native::_NativeApplication::JoystickEventInfo tmp2 = this->joystickEventInfo;
				int tmp3 = tmp2->id;
				::lime::ui::Joystick_obj::__connect(tmp3);
			}
			;break;
			case (int)6: {
				::lime::_backend::native::_NativeApplication::JoystickEventInfo tmp2 = this->joystickEventInfo;
				int tmp3 = tmp2->id;
				::lime::ui::Joystick_obj::__disconnect(tmp3);
			}
			;break;
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(NativeApplication_obj,handleJoystickEvent,(void))

Void NativeApplication_obj::handleKeyEvent( ){
{
		::lime::app::Application tmp = this->parent;
		::lime::_backend::native::_NativeApplication::KeyEventInfo tmp1 = this->keyEventInfo;
		int tmp2 = tmp1->windowID;
		::lime::ui::Window tmp3 = tmp->windowByID->get(tmp2);
		::lime::ui::Window window = tmp3;
		bool tmp4 = (window != null());
		if ((tmp4)){
			::lime::_backend::native::_NativeApplication::KeyEventInfo tmp5 = this->keyEventInfo;
			int type = tmp5->type;
			::lime::_backend::native::_NativeApplication::KeyEventInfo tmp6 = this->keyEventInfo;
			int keyCode = tmp6->keyCode;
			::lime::_backend::native::_NativeApplication::KeyEventInfo tmp7 = this->keyEventInfo;
			int modifier = tmp7->modifier;
			int tmp8 = type;
			switch( (int)(tmp8)){
				case (int)0: {
					int tmp9 = keyCode;
					int tmp10 = modifier;
					window->onKeyDown->dispatch(tmp9,tmp10);
				}
				;break;
				case (int)1: {
					int tmp9 = keyCode;
					int tmp10 = modifier;
					window->onKeyUp->dispatch(tmp9,tmp10);
				}
				;break;
			}
			bool tmp9 = (keyCode == (int)13);
			if ((tmp9)){
				bool tmp10 = (type == (int)0);
				if ((tmp10)){
					bool tmp11 = this->toggleFullscreen;
					bool tmp12 = tmp11;
					bool tmp13;
					if ((tmp12)){
						int tmp14 = modifier;
						int tmp15 = tmp14;
						int tmp16 = tmp15;
						tmp13 = ::lime::ui::_KeyModifier::KeyModifier_Impl__obj::get_altKey(tmp16);
					}
					else{
						tmp13 = false;
					}
					bool tmp14;
					if ((tmp13)){
						int tmp15 = modifier;
						int tmp16 = tmp15;
						bool tmp17 = ::lime::ui::_KeyModifier::KeyModifier_Impl__obj::get_ctrlKey(tmp16);
						bool tmp18 = tmp17;
						bool tmp19 = tmp18;
						bool tmp20 = tmp19;
						bool tmp21 = !(tmp20);
						bool tmp22 = tmp21;
						bool tmp23 = tmp22;
						bool tmp24;
						bool tmp25 = tmp23;
						if ((tmp25)){
							int tmp26 = modifier;
							int tmp27 = tmp26;
							int tmp28 = tmp27;
							int tmp29 = tmp28;
							bool tmp30 = ::lime::ui::_KeyModifier::KeyModifier_Impl__obj::get_shiftKey(tmp29);
							bool tmp31 = tmp30;
							bool tmp32 = tmp31;
							bool tmp33 = tmp32;
							bool tmp34 = tmp33;
							bool tmp35 = tmp34;
							bool tmp36 = tmp35;
							bool tmp37 = !(tmp36);
							tmp24 = tmp37;
						}
						else{
							tmp24 = false;
						}
						bool tmp26 = tmp24;
						if ((tmp26)){
							int tmp27 = modifier;
							int tmp28 = tmp27;
							int tmp29 = tmp28;
							bool tmp30 = ::lime::ui::_KeyModifier::KeyModifier_Impl__obj::get_metaKey(tmp29);
							bool tmp31 = tmp30;
							bool tmp32 = tmp31;
							bool tmp33 = tmp32;
							bool tmp34 = tmp33;
							tmp14 = !(tmp34);
						}
						else{
							tmp14 = false;
						}
					}
					else{
						tmp14 = false;
					}
					if ((tmp14)){
						this->toggleFullscreen = false;
						bool tmp15 = window->onKeyDown->canceled;
						bool tmp16 = !(tmp15);
						if ((tmp16)){
							bool tmp17 = window->__fullscreen;
							bool tmp18 = !(tmp17);
							window->set_fullscreen(tmp18);
						}
					}
				}
				else{
					this->toggleFullscreen = true;
				}
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(NativeApplication_obj,handleKeyEvent,(void))

Void NativeApplication_obj::handleMouseEvent( ){
{
		::lime::app::Application tmp = this->parent;
		::lime::_backend::native::_NativeApplication::MouseEventInfo tmp1 = this->mouseEventInfo;
		int tmp2 = tmp1->windowID;
		::lime::ui::Window tmp3 = tmp->windowByID->get(tmp2);
		::lime::ui::Window window = tmp3;
		bool tmp4 = (window != null());
		if ((tmp4)){
			::lime::_backend::native::_NativeApplication::MouseEventInfo tmp5 = this->mouseEventInfo;
			int _g = tmp5->type;
			int tmp6 = _g;
			switch( (int)(tmp6)){
				case (int)0: {
					::lime::_backend::native::_NativeApplication::MouseEventInfo tmp7 = this->mouseEventInfo;
					Float tmp8 = tmp7->x;
					::lime::_backend::native::_NativeApplication::MouseEventInfo tmp9 = this->mouseEventInfo;
					Float tmp10 = tmp9->y;
					::lime::_backend::native::_NativeApplication::MouseEventInfo tmp11 = this->mouseEventInfo;
					int tmp12 = tmp11->button;
					window->onMouseDown->dispatch(tmp8,tmp10,tmp12);
				}
				;break;
				case (int)1: {
					::lime::_backend::native::_NativeApplication::MouseEventInfo tmp7 = this->mouseEventInfo;
					Float tmp8 = tmp7->x;
					::lime::_backend::native::_NativeApplication::MouseEventInfo tmp9 = this->mouseEventInfo;
					Float tmp10 = tmp9->y;
					::lime::_backend::native::_NativeApplication::MouseEventInfo tmp11 = this->mouseEventInfo;
					int tmp12 = tmp11->button;
					window->onMouseUp->dispatch(tmp8,tmp10,tmp12);
				}
				;break;
				case (int)2: {
					::lime::_backend::native::_NativeApplication::MouseEventInfo tmp7 = this->mouseEventInfo;
					Float tmp8 = tmp7->x;
					::lime::_backend::native::_NativeApplication::MouseEventInfo tmp9 = this->mouseEventInfo;
					Float tmp10 = tmp9->y;
					window->onMouseMove->dispatch(tmp8,tmp10);
					::lime::_backend::native::_NativeApplication::MouseEventInfo tmp11 = this->mouseEventInfo;
					Float tmp12 = tmp11->movementX;
					::lime::_backend::native::_NativeApplication::MouseEventInfo tmp13 = this->mouseEventInfo;
					Float tmp14 = tmp13->movementY;
					window->onMouseMoveRelative->dispatch(tmp12,tmp14);
				}
				;break;
				case (int)3: {
					::lime::_backend::native::_NativeApplication::MouseEventInfo tmp7 = this->mouseEventInfo;
					Float tmp8 = tmp7->x;
					::lime::_backend::native::_NativeApplication::MouseEventInfo tmp9 = this->mouseEventInfo;
					Float tmp10 = tmp9->y;
					window->onMouseWheel->dispatch(tmp8,tmp10);
				}
				;break;
				default: {
				}
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(NativeApplication_obj,handleMouseEvent,(void))

Void NativeApplication_obj::handleRenderEvent( ){
{
		int _g = (int)0;
		::lime::app::Application tmp = this->parent;
		Array< ::Dynamic > _g1 = tmp->__renderers;
		while((true)){
			bool tmp1 = (_g < _g1->length);
			bool tmp2 = !(tmp1);
			if ((tmp2)){
				break;
			}
			::lime::graphics::Renderer tmp3 = _g1->__get(_g).StaticCast< ::lime::graphics::Renderer >();
			::lime::graphics::Renderer renderer = tmp3;
			++(_g);
			bool tmp4 = (renderer == null());
			if ((tmp4)){
				continue;
			}
			::lime::app::Application tmp5 = this->parent;
			tmp5->renderer = renderer;
			{
				::lime::_backend::native::_NativeApplication::RenderEventInfo tmp6 = this->renderEventInfo;
				int _g2 = tmp6->type;
				int tmp7 = _g2;
				switch( (int)(tmp7)){
					case (int)0: {
						bool tmp8 = (renderer->context != null());
						if ((tmp8)){
							renderer->render();
							renderer->onRender->dispatch();
							bool tmp9 = renderer->onRender->canceled;
							bool tmp10 = !(tmp9);
							if ((tmp10)){
								renderer->flip();
							}
						}
					}
					;break;
					case (int)1: {
						bool tmp8 = renderer->backend->useHardware;
						bool tmp9;
						if ((tmp8)){
							tmp9 = (renderer->context != null());
						}
						else{
							tmp9 = false;
						}
						if ((tmp9)){
							{
								::lime::graphics::RenderContext _g3 = renderer->context;
								switch( (int)(_g3->__Index())){
									case (int)0: {
										::lime::_backend::native::NativeGLRenderContext tmp10 = (::lime::graphics::RenderContext(_g3))->__Param(0);
										::lime::_backend::native::NativeGLRenderContext gl = tmp10;
										{
											gl->__contextLost();
											::lime::_backend::native::NativeGLRenderContext tmp11 = ::lime::graphics::opengl::GL_obj::context;
											::lime::_backend::native::NativeGLRenderContext tmp12 = gl;
											bool tmp13 = (tmp11 == tmp12);
											if ((tmp13)){
												::lime::graphics::opengl::GL_obj::context = null();
											}
										}
									}
									;break;
									default: {
									}
								}
							}
							renderer->context = null();
							renderer->onContextLost->dispatch();
						}
					}
					;break;
					case (int)2: {
						bool tmp8 = renderer->backend->useHardware;
						if ((tmp8)){
							::lime::_backend::native::NativeGLRenderContext tmp9 = ::lime::_backend::native::NativeGLRenderContext_obj::__new();
							::lime::graphics::opengl::GL_obj::context = tmp9;
							::lime::_backend::native::NativeGLRenderContext tmp10 = ::lime::graphics::opengl::GL_obj::context;
							::lime::graphics::RenderContext tmp11 = ::lime::graphics::RenderContext_obj::OPENGL(tmp10);
							renderer->context = tmp11;
							::lime::graphics::RenderContext tmp12 = renderer->context;
							renderer->onContextRestored->dispatch(tmp12);
						}
					}
					;break;
				}
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(NativeApplication_obj,handleRenderEvent,(void))

Void NativeApplication_obj::handleSensorEvent( ){
{
		::haxe::ds::IntMap tmp = ::lime::_system::Sensor_obj::sensorByID;
		::lime::_backend::native::_NativeApplication::SensorEventInfo tmp1 = this->sensorEventInfo;
		int tmp2 = tmp1->id;
		::lime::_system::Sensor tmp3 = tmp->get(tmp2);
		::lime::_system::Sensor sensor = tmp3;
		bool tmp4 = (sensor != null());
		if ((tmp4)){
			::lime::_backend::native::_NativeApplication::SensorEventInfo tmp5 = this->sensorEventInfo;
			Float tmp6 = tmp5->x;
			::lime::_backend::native::_NativeApplication::SensorEventInfo tmp7 = this->sensorEventInfo;
			Float tmp8 = tmp7->y;
			::lime::_backend::native::_NativeApplication::SensorEventInfo tmp9 = this->sensorEventInfo;
			Float tmp10 = tmp9->z;
			sensor->__Field(HX_HCSTRING("onUpdate","\x88","\x7c","\xb2","\x66"), hx::paccDynamic )->__Field(HX_HCSTRING("dispatch","\xba","\xce","\x63","\x1e"), hx::paccDynamic )(tmp6,tmp8,tmp10);
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(NativeApplication_obj,handleSensorEvent,(void))

Void NativeApplication_obj::handleTextEvent( ){
{
		::lime::app::Application tmp = this->parent;
		::lime::_backend::native::_NativeApplication::TextEventInfo tmp1 = this->textEventInfo;
		int tmp2 = tmp1->windowID;
		::lime::ui::Window tmp3 = tmp->windowByID->get(tmp2);
		::lime::ui::Window window = tmp3;
		bool tmp4 = (window != null());
		if ((tmp4)){
			::lime::_backend::native::_NativeApplication::TextEventInfo tmp5 = this->textEventInfo;
			int _g = tmp5->type;
			int tmp6 = _g;
			switch( (int)(tmp6)){
				case (int)0: {
					::lime::_backend::native::_NativeApplication::TextEventInfo tmp7 = this->textEventInfo;
					::String tmp8 = tmp7->text;
					window->onTextInput->dispatch(tmp8);
				}
				;break;
				case (int)1: {
					::lime::_backend::native::_NativeApplication::TextEventInfo tmp7 = this->textEventInfo;
					::String tmp8 = tmp7->text;
					::lime::_backend::native::_NativeApplication::TextEventInfo tmp9 = this->textEventInfo;
					int tmp10 = tmp9->start;
					::lime::_backend::native::_NativeApplication::TextEventInfo tmp11 = this->textEventInfo;
					int tmp12 = tmp11->length;
					window->onTextEdit->dispatch(tmp8,tmp10,tmp12);
				}
				;break;
				default: {
				}
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(NativeApplication_obj,handleTextEvent,(void))

Void NativeApplication_obj::handleTouchEvent( ){
{
		::lime::_backend::native::_NativeApplication::TouchEventInfo tmp = this->touchEventInfo;
		int _g = tmp->type;
		int tmp1 = _g;
		switch( (int)(tmp1)){
			case (int)0: {
				::List tmp2 = this->unusedTouchesPool;
				::lime::ui::Touch tmp3 = tmp2->pop();
				::lime::ui::Touch touch = tmp3;
				bool tmp4 = (touch == null());
				if ((tmp4)){
					::lime::_backend::native::_NativeApplication::TouchEventInfo tmp5 = this->touchEventInfo;
					Float tmp6 = tmp5->x;
					::lime::_backend::native::_NativeApplication::TouchEventInfo tmp7 = this->touchEventInfo;
					Float tmp8 = tmp7->y;
					::lime::_backend::native::_NativeApplication::TouchEventInfo tmp9 = this->touchEventInfo;
					int tmp10 = tmp9->id;
					::lime::_backend::native::_NativeApplication::TouchEventInfo tmp11 = this->touchEventInfo;
					Float tmp12 = tmp11->dx;
					::lime::_backend::native::_NativeApplication::TouchEventInfo tmp13 = this->touchEventInfo;
					Float tmp14 = tmp13->dy;
					::lime::_backend::native::_NativeApplication::TouchEventInfo tmp15 = this->touchEventInfo;
					Float tmp16 = tmp15->pressure;
					::lime::_backend::native::_NativeApplication::TouchEventInfo tmp17 = this->touchEventInfo;
					int tmp18 = tmp17->device;
					::lime::ui::Touch tmp19 = ::lime::ui::Touch_obj::__new(tmp6,tmp8,tmp10,tmp12,tmp14,tmp16,tmp18);
					touch = tmp19;
				}
				else{
					::lime::_backend::native::_NativeApplication::TouchEventInfo tmp5 = this->touchEventInfo;
					touch->x = tmp5->x;
					::lime::_backend::native::_NativeApplication::TouchEventInfo tmp6 = this->touchEventInfo;
					touch->y = tmp6->y;
					::lime::_backend::native::_NativeApplication::TouchEventInfo tmp7 = this->touchEventInfo;
					touch->id = tmp7->id;
					::lime::_backend::native::_NativeApplication::TouchEventInfo tmp8 = this->touchEventInfo;
					touch->dx = tmp8->dx;
					::lime::_backend::native::_NativeApplication::TouchEventInfo tmp9 = this->touchEventInfo;
					touch->dy = tmp9->dy;
					::lime::_backend::native::_NativeApplication::TouchEventInfo tmp10 = this->touchEventInfo;
					touch->pressure = tmp10->pressure;
					::lime::_backend::native::_NativeApplication::TouchEventInfo tmp11 = this->touchEventInfo;
					touch->device = tmp11->device;
				}
				::haxe::ds::IntMap tmp5 = this->currentTouches;
				int tmp6 = touch->id;
				::lime::ui::Touch tmp7 = touch;
				tmp5->set(tmp6,tmp7);
				::lime::app::_Event_lime_ui_Touch_Void tmp8 = ::lime::ui::Touch_obj::onStart;
				::lime::ui::Touch tmp9 = touch;
				tmp8->dispatch(tmp9);
			}
			;break;
			case (int)1: {
				::haxe::ds::IntMap tmp2 = this->currentTouches;
				::lime::_backend::native::_NativeApplication::TouchEventInfo tmp3 = this->touchEventInfo;
				int tmp4 = tmp3->id;
				::lime::ui::Touch tmp5 = tmp2->get(tmp4);
				::lime::ui::Touch touch = tmp5;
				bool tmp6 = (touch != null());
				if ((tmp6)){
					::lime::_backend::native::_NativeApplication::TouchEventInfo tmp7 = this->touchEventInfo;
					touch->x = tmp7->x;
					::lime::_backend::native::_NativeApplication::TouchEventInfo tmp8 = this->touchEventInfo;
					touch->y = tmp8->y;
					::lime::_backend::native::_NativeApplication::TouchEventInfo tmp9 = this->touchEventInfo;
					touch->dx = tmp9->dx;
					::lime::_backend::native::_NativeApplication::TouchEventInfo tmp10 = this->touchEventInfo;
					touch->dy = tmp10->dy;
					::lime::_backend::native::_NativeApplication::TouchEventInfo tmp11 = this->touchEventInfo;
					touch->pressure = tmp11->pressure;
					::lime::app::_Event_lime_ui_Touch_Void tmp12 = ::lime::ui::Touch_obj::onEnd;
					::lime::ui::Touch tmp13 = touch;
					tmp12->dispatch(tmp13);
					::haxe::ds::IntMap tmp14 = this->currentTouches;
					::lime::_backend::native::_NativeApplication::TouchEventInfo tmp15 = this->touchEventInfo;
					int tmp16 = tmp15->id;
					tmp14->remove(tmp16);
					::List tmp17 = this->unusedTouchesPool;
					::lime::ui::Touch tmp18 = touch;
					tmp17->add(tmp18);
				}
			}
			;break;
			case (int)2: {
				::haxe::ds::IntMap tmp2 = this->currentTouches;
				::lime::_backend::native::_NativeApplication::TouchEventInfo tmp3 = this->touchEventInfo;
				int tmp4 = tmp3->id;
				::lime::ui::Touch tmp5 = tmp2->get(tmp4);
				::lime::ui::Touch touch = tmp5;
				bool tmp6 = (touch != null());
				if ((tmp6)){
					::lime::_backend::native::_NativeApplication::TouchEventInfo tmp7 = this->touchEventInfo;
					touch->x = tmp7->x;
					::lime::_backend::native::_NativeApplication::TouchEventInfo tmp8 = this->touchEventInfo;
					touch->y = tmp8->y;
					::lime::_backend::native::_NativeApplication::TouchEventInfo tmp9 = this->touchEventInfo;
					touch->dx = tmp9->dx;
					::lime::_backend::native::_NativeApplication::TouchEventInfo tmp10 = this->touchEventInfo;
					touch->dy = tmp10->dy;
					::lime::_backend::native::_NativeApplication::TouchEventInfo tmp11 = this->touchEventInfo;
					touch->pressure = tmp11->pressure;
					::lime::app::_Event_lime_ui_Touch_Void tmp12 = ::lime::ui::Touch_obj::onMove;
					::lime::ui::Touch tmp13 = touch;
					tmp12->dispatch(tmp13);
				}
			}
			;break;
			default: {
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(NativeApplication_obj,handleTouchEvent,(void))

Void NativeApplication_obj::handleWindowEvent( ){
{
		::lime::app::Application tmp = this->parent;
		::lime::_backend::native::_NativeApplication::WindowEventInfo tmp1 = this->windowEventInfo;
		int tmp2 = tmp1->windowID;
		::lime::ui::Window tmp3 = tmp->windowByID->get(tmp2);
		::lime::ui::Window window = tmp3;
		bool tmp4 = (window != null());
		if ((tmp4)){
			::lime::_backend::native::_NativeApplication::WindowEventInfo tmp5 = this->windowEventInfo;
			int _g = tmp5->type;
			int tmp6 = _g;
			switch( (int)(tmp6)){
				case (int)0: {
					window->onActivate->dispatch();
					::lime::media::AudioManager_obj::resume();
				}
				;break;
				case (int)1: {
					window->close();
				}
				;break;
				case (int)2: {
					window->onDeactivate->dispatch();
					::lime::media::AudioManager_obj::suspend();
				}
				;break;
				case (int)3: {
					window->onEnter->dispatch();
				}
				;break;
				case (int)4: {
					window->onFocusIn->dispatch();
				}
				;break;
				case (int)5: {
					window->onFocusOut->dispatch();
				}
				;break;
				case (int)6: {
					window->onLeave->dispatch();
				}
				;break;
				case (int)7: {
					window->__minimized = true;
					window->onMinimize->dispatch();
				}
				;break;
				case (int)8: {
					::lime::_backend::native::_NativeApplication::WindowEventInfo tmp7 = this->windowEventInfo;
					window->__x = tmp7->x;
					::lime::_backend::native::_NativeApplication::WindowEventInfo tmp8 = this->windowEventInfo;
					window->__y = tmp8->y;
					::lime::_backend::native::_NativeApplication::WindowEventInfo tmp9 = this->windowEventInfo;
					int tmp10 = tmp9->x;
					::lime::_backend::native::_NativeApplication::WindowEventInfo tmp11 = this->windowEventInfo;
					int tmp12 = tmp11->y;
					window->onMove->dispatch(tmp10,tmp12);
				}
				;break;
				case (int)9: {
					::lime::_backend::native::_NativeApplication::WindowEventInfo tmp7 = this->windowEventInfo;
					window->__width = tmp7->width;
					::lime::_backend::native::_NativeApplication::WindowEventInfo tmp8 = this->windowEventInfo;
					window->__height = tmp8->height;
					::lime::_backend::native::_NativeApplication::WindowEventInfo tmp9 = this->windowEventInfo;
					int tmp10 = tmp9->width;
					::lime::_backend::native::_NativeApplication::WindowEventInfo tmp11 = this->windowEventInfo;
					int tmp12 = tmp11->height;
					window->onResize->dispatch(tmp10,tmp12);
				}
				;break;
				case (int)10: {
					window->__fullscreen = false;
					window->__minimized = false;
					window->onRestore->dispatch();
				}
				;break;
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(NativeApplication_obj,handleWindowEvent,(void))

Float NativeApplication_obj::setFrameRate( Float value){
	::lime::_backend::native::NativeCFFI_obj::cffi_lime_application_set_frame_rate.call(hx::DynamicPtr(this->handle),value);
	Float tmp = this->frameRate = value;
	return tmp;
}


HX_DEFINE_DYNAMIC_FUNC1(NativeApplication_obj,setFrameRate,return )

Void NativeApplication_obj::updateTimer( ){
{
		int tmp = ::haxe::Timer_obj::sRunningTimers->length;
		bool tmp1 = (tmp > (int)0);
		if ((tmp1)){
			int tmp2 = ::lime::_system::System_obj::getTimer();
			int currentTime = tmp2;
			bool foundNull = false;
			::haxe::Timer timer;
			{
				int _g1 = (int)0;
				int tmp3 = ::haxe::Timer_obj::sRunningTimers->length;
				int _g = tmp3;
				while((true)){
					bool tmp4 = (_g1 < _g);
					bool tmp5 = !(tmp4);
					if ((tmp5)){
						break;
					}
					int tmp6 = (_g1)++;
					int i = tmp6;
					::haxe::Timer tmp7 = ::haxe::Timer_obj::sRunningTimers->__get(i).StaticCast< ::haxe::Timer >();
					timer = tmp7;
					bool tmp8 = (timer != null());
					if ((tmp8)){
						bool tmp9 = (currentTime >= timer->mFireAt);
						if ((tmp9)){
							hx::AddEq(timer->mFireAt,timer->mTime);
							timer->run();
						}
					}
					else{
						foundNull = true;
					}
				}
			}
			bool tmp3 = foundNull;
			if ((tmp3)){

				HX_BEGIN_LOCAL_FUNC_S0(hx::LocalFunc,_Function_3_1)
				int __ArgCount() const { return 1; }
				bool run(::haxe::Timer val){
					{
						bool tmp4 = (val != null());
						return tmp4;
					}
					return null();
				}
				HX_END_LOCAL_FUNC1(return)

				::haxe::Timer_obj::sRunningTimers = ::haxe::Timer_obj::sRunningTimers->filter( Dynamic(new _Function_3_1()));
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(NativeApplication_obj,updateTimer,(void))


NativeApplication_obj::NativeApplication_obj()
{
}

void NativeApplication_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(NativeApplication);
	HX_MARK_MEMBER_NAME(applicationEventInfo,"applicationEventInfo");
	HX_MARK_MEMBER_NAME(currentTouches,"currentTouches");
	HX_MARK_MEMBER_NAME(dropEventInfo,"dropEventInfo");
	HX_MARK_MEMBER_NAME(gamepadEventInfo,"gamepadEventInfo");
	HX_MARK_MEMBER_NAME(joystickEventInfo,"joystickEventInfo");
	HX_MARK_MEMBER_NAME(keyEventInfo,"keyEventInfo");
	HX_MARK_MEMBER_NAME(mouseEventInfo,"mouseEventInfo");
	HX_MARK_MEMBER_NAME(renderEventInfo,"renderEventInfo");
	HX_MARK_MEMBER_NAME(sensorEventInfo,"sensorEventInfo");
	HX_MARK_MEMBER_NAME(textEventInfo,"textEventInfo");
	HX_MARK_MEMBER_NAME(touchEventInfo,"touchEventInfo");
	HX_MARK_MEMBER_NAME(unusedTouchesPool,"unusedTouchesPool");
	HX_MARK_MEMBER_NAME(windowEventInfo,"windowEventInfo");
	HX_MARK_MEMBER_NAME(handle,"handle");
	HX_MARK_MEMBER_NAME(frameRate,"frameRate");
	HX_MARK_MEMBER_NAME(parent,"parent");
	HX_MARK_MEMBER_NAME(toggleFullscreen,"toggleFullscreen");
	HX_MARK_END_CLASS();
}

void NativeApplication_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(applicationEventInfo,"applicationEventInfo");
	HX_VISIT_MEMBER_NAME(currentTouches,"currentTouches");
	HX_VISIT_MEMBER_NAME(dropEventInfo,"dropEventInfo");
	HX_VISIT_MEMBER_NAME(gamepadEventInfo,"gamepadEventInfo");
	HX_VISIT_MEMBER_NAME(joystickEventInfo,"joystickEventInfo");
	HX_VISIT_MEMBER_NAME(keyEventInfo,"keyEventInfo");
	HX_VISIT_MEMBER_NAME(mouseEventInfo,"mouseEventInfo");
	HX_VISIT_MEMBER_NAME(renderEventInfo,"renderEventInfo");
	HX_VISIT_MEMBER_NAME(sensorEventInfo,"sensorEventInfo");
	HX_VISIT_MEMBER_NAME(textEventInfo,"textEventInfo");
	HX_VISIT_MEMBER_NAME(touchEventInfo,"touchEventInfo");
	HX_VISIT_MEMBER_NAME(unusedTouchesPool,"unusedTouchesPool");
	HX_VISIT_MEMBER_NAME(windowEventInfo,"windowEventInfo");
	HX_VISIT_MEMBER_NAME(handle,"handle");
	HX_VISIT_MEMBER_NAME(frameRate,"frameRate");
	HX_VISIT_MEMBER_NAME(parent,"parent");
	HX_VISIT_MEMBER_NAME(toggleFullscreen,"toggleFullscreen");
}

Dynamic NativeApplication_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"exec") ) { return exec_dyn(); }
		if (HX_FIELD_EQ(inName,"exit") ) { return exit_dyn(); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"handle") ) { return handle; }
		if (HX_FIELD_EQ(inName,"parent") ) { return parent; }
		if (HX_FIELD_EQ(inName,"create") ) { return create_dyn(); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"frameRate") ) { return frameRate; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"updateTimer") ) { return updateTimer_dyn(); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"keyEventInfo") ) { return keyEventInfo; }
		if (HX_FIELD_EQ(inName,"getFrameRate") ) { return getFrameRate_dyn(); }
		if (HX_FIELD_EQ(inName,"setFrameRate") ) { return setFrameRate_dyn(); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"dropEventInfo") ) { return dropEventInfo; }
		if (HX_FIELD_EQ(inName,"textEventInfo") ) { return textEventInfo; }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"currentTouches") ) { return currentTouches; }
		if (HX_FIELD_EQ(inName,"mouseEventInfo") ) { return mouseEventInfo; }
		if (HX_FIELD_EQ(inName,"touchEventInfo") ) { return touchEventInfo; }
		if (HX_FIELD_EQ(inName,"handleKeyEvent") ) { return handleKeyEvent_dyn(); }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"renderEventInfo") ) { return renderEventInfo; }
		if (HX_FIELD_EQ(inName,"sensorEventInfo") ) { return sensorEventInfo; }
		if (HX_FIELD_EQ(inName,"windowEventInfo") ) { return windowEventInfo; }
		if (HX_FIELD_EQ(inName,"handleDropEvent") ) { return handleDropEvent_dyn(); }
		if (HX_FIELD_EQ(inName,"handleTextEvent") ) { return handleTextEvent_dyn(); }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"gamepadEventInfo") ) { return gamepadEventInfo; }
		if (HX_FIELD_EQ(inName,"toggleFullscreen") ) { return toggleFullscreen; }
		if (HX_FIELD_EQ(inName,"handleMouseEvent") ) { return handleMouseEvent_dyn(); }
		if (HX_FIELD_EQ(inName,"handleTouchEvent") ) { return handleTouchEvent_dyn(); }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"joystickEventInfo") ) { return joystickEventInfo; }
		if (HX_FIELD_EQ(inName,"unusedTouchesPool") ) { return unusedTouchesPool; }
		if (HX_FIELD_EQ(inName,"handleRenderEvent") ) { return handleRenderEvent_dyn(); }
		if (HX_FIELD_EQ(inName,"handleSensorEvent") ) { return handleSensorEvent_dyn(); }
		if (HX_FIELD_EQ(inName,"handleWindowEvent") ) { return handleWindowEvent_dyn(); }
		break;
	case 18:
		if (HX_FIELD_EQ(inName,"handleGamepadEvent") ) { return handleGamepadEvent_dyn(); }
		break;
	case 19:
		if (HX_FIELD_EQ(inName,"handleJoystickEvent") ) { return handleJoystickEvent_dyn(); }
		break;
	case 20:
		if (HX_FIELD_EQ(inName,"applicationEventInfo") ) { return applicationEventInfo; }
		break;
	case 22:
		if (HX_FIELD_EQ(inName,"handleApplicationEvent") ) { return handleApplicationEvent_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic NativeApplication_obj::__SetField(const ::String &inName,const Dynamic &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 6:
		if (HX_FIELD_EQ(inName,"handle") ) { handle=inValue.Cast< Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"parent") ) { parent=inValue.Cast< ::lime::app::Application >(); return inValue; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"frameRate") ) { frameRate=inValue.Cast< Float >(); return inValue; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"keyEventInfo") ) { keyEventInfo=inValue.Cast< ::lime::_backend::native::_NativeApplication::KeyEventInfo >(); return inValue; }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"dropEventInfo") ) { dropEventInfo=inValue.Cast< ::lime::_backend::native::_NativeApplication::DropEventInfo >(); return inValue; }
		if (HX_FIELD_EQ(inName,"textEventInfo") ) { textEventInfo=inValue.Cast< ::lime::_backend::native::_NativeApplication::TextEventInfo >(); return inValue; }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"currentTouches") ) { currentTouches=inValue.Cast< ::haxe::ds::IntMap >(); return inValue; }
		if (HX_FIELD_EQ(inName,"mouseEventInfo") ) { mouseEventInfo=inValue.Cast< ::lime::_backend::native::_NativeApplication::MouseEventInfo >(); return inValue; }
		if (HX_FIELD_EQ(inName,"touchEventInfo") ) { touchEventInfo=inValue.Cast< ::lime::_backend::native::_NativeApplication::TouchEventInfo >(); return inValue; }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"renderEventInfo") ) { renderEventInfo=inValue.Cast< ::lime::_backend::native::_NativeApplication::RenderEventInfo >(); return inValue; }
		if (HX_FIELD_EQ(inName,"sensorEventInfo") ) { sensorEventInfo=inValue.Cast< ::lime::_backend::native::_NativeApplication::SensorEventInfo >(); return inValue; }
		if (HX_FIELD_EQ(inName,"windowEventInfo") ) { windowEventInfo=inValue.Cast< ::lime::_backend::native::_NativeApplication::WindowEventInfo >(); return inValue; }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"gamepadEventInfo") ) { gamepadEventInfo=inValue.Cast< ::lime::_backend::native::_NativeApplication::GamepadEventInfo >(); return inValue; }
		if (HX_FIELD_EQ(inName,"toggleFullscreen") ) { toggleFullscreen=inValue.Cast< bool >(); return inValue; }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"joystickEventInfo") ) { joystickEventInfo=inValue.Cast< ::lime::_backend::native::_NativeApplication::JoystickEventInfo >(); return inValue; }
		if (HX_FIELD_EQ(inName,"unusedTouchesPool") ) { unusedTouchesPool=inValue.Cast< ::List >(); return inValue; }
		break;
	case 20:
		if (HX_FIELD_EQ(inName,"applicationEventInfo") ) { applicationEventInfo=inValue.Cast< ::lime::_backend::native::_NativeApplication::ApplicationEventInfo >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void NativeApplication_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("applicationEventInfo","\x38","\x8c","\xf4","\x09"));
	outFields->push(HX_HCSTRING("currentTouches","\xb4","\x92","\x8c","\xe6"));
	outFields->push(HX_HCSTRING("dropEventInfo","\x79","\xeb","\x0f","\x1e"));
	outFields->push(HX_HCSTRING("gamepadEventInfo","\xc7","\xa4","\x2e","\x4c"));
	outFields->push(HX_HCSTRING("joystickEventInfo","\x4c","\x49","\x1d","\xd4"));
	outFields->push(HX_HCSTRING("keyEventInfo","\x09","\xec","\x90","\xcc"));
	outFields->push(HX_HCSTRING("mouseEventInfo","\xc3","\x9e","\xa6","\x86"));
	outFields->push(HX_HCSTRING("renderEventInfo","\x72","\x9b","\x70","\xdd"));
	outFields->push(HX_HCSTRING("sensorEventInfo","\x0e","\xd8","\x53","\x55"));
	outFields->push(HX_HCSTRING("textEventInfo","\x3b","\xd7","\x5a","\xac"));
	outFields->push(HX_HCSTRING("touchEventInfo","\xe9","\x99","\x5c","\x0c"));
	outFields->push(HX_HCSTRING("unusedTouchesPool","\xf3","\xcf","\xdf","\x11"));
	outFields->push(HX_HCSTRING("windowEventInfo","\x98","\x8f","\x34","\x9b"));
	outFields->push(HX_HCSTRING("handle","\xa8","\x83","\xfd","\xb7"));
	outFields->push(HX_HCSTRING("frameRate","\xad","\x11","\x25","\x39"));
	outFields->push(HX_HCSTRING("parent","\x2a","\x05","\x7e","\xed"));
	outFields->push(HX_HCSTRING("toggleFullscreen","\xef","\xbe","\x03","\xc4"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsObject /*::lime::_backend::native::_NativeApplication::ApplicationEventInfo*/ ,(int)offsetof(NativeApplication_obj,applicationEventInfo),HX_HCSTRING("applicationEventInfo","\x38","\x8c","\xf4","\x09")},
	{hx::fsObject /*::haxe::ds::IntMap*/ ,(int)offsetof(NativeApplication_obj,currentTouches),HX_HCSTRING("currentTouches","\xb4","\x92","\x8c","\xe6")},
	{hx::fsObject /*::lime::_backend::native::_NativeApplication::DropEventInfo*/ ,(int)offsetof(NativeApplication_obj,dropEventInfo),HX_HCSTRING("dropEventInfo","\x79","\xeb","\x0f","\x1e")},
	{hx::fsObject /*::lime::_backend::native::_NativeApplication::GamepadEventInfo*/ ,(int)offsetof(NativeApplication_obj,gamepadEventInfo),HX_HCSTRING("gamepadEventInfo","\xc7","\xa4","\x2e","\x4c")},
	{hx::fsObject /*::lime::_backend::native::_NativeApplication::JoystickEventInfo*/ ,(int)offsetof(NativeApplication_obj,joystickEventInfo),HX_HCSTRING("joystickEventInfo","\x4c","\x49","\x1d","\xd4")},
	{hx::fsObject /*::lime::_backend::native::_NativeApplication::KeyEventInfo*/ ,(int)offsetof(NativeApplication_obj,keyEventInfo),HX_HCSTRING("keyEventInfo","\x09","\xec","\x90","\xcc")},
	{hx::fsObject /*::lime::_backend::native::_NativeApplication::MouseEventInfo*/ ,(int)offsetof(NativeApplication_obj,mouseEventInfo),HX_HCSTRING("mouseEventInfo","\xc3","\x9e","\xa6","\x86")},
	{hx::fsObject /*::lime::_backend::native::_NativeApplication::RenderEventInfo*/ ,(int)offsetof(NativeApplication_obj,renderEventInfo),HX_HCSTRING("renderEventInfo","\x72","\x9b","\x70","\xdd")},
	{hx::fsObject /*::lime::_backend::native::_NativeApplication::SensorEventInfo*/ ,(int)offsetof(NativeApplication_obj,sensorEventInfo),HX_HCSTRING("sensorEventInfo","\x0e","\xd8","\x53","\x55")},
	{hx::fsObject /*::lime::_backend::native::_NativeApplication::TextEventInfo*/ ,(int)offsetof(NativeApplication_obj,textEventInfo),HX_HCSTRING("textEventInfo","\x3b","\xd7","\x5a","\xac")},
	{hx::fsObject /*::lime::_backend::native::_NativeApplication::TouchEventInfo*/ ,(int)offsetof(NativeApplication_obj,touchEventInfo),HX_HCSTRING("touchEventInfo","\xe9","\x99","\x5c","\x0c")},
	{hx::fsObject /*::List*/ ,(int)offsetof(NativeApplication_obj,unusedTouchesPool),HX_HCSTRING("unusedTouchesPool","\xf3","\xcf","\xdf","\x11")},
	{hx::fsObject /*::lime::_backend::native::_NativeApplication::WindowEventInfo*/ ,(int)offsetof(NativeApplication_obj,windowEventInfo),HX_HCSTRING("windowEventInfo","\x98","\x8f","\x34","\x9b")},
	{hx::fsObject /*Dynamic*/ ,(int)offsetof(NativeApplication_obj,handle),HX_HCSTRING("handle","\xa8","\x83","\xfd","\xb7")},
	{hx::fsFloat,(int)offsetof(NativeApplication_obj,frameRate),HX_HCSTRING("frameRate","\xad","\x11","\x25","\x39")},
	{hx::fsObject /*::lime::app::Application*/ ,(int)offsetof(NativeApplication_obj,parent),HX_HCSTRING("parent","\x2a","\x05","\x7e","\xed")},
	{hx::fsBool,(int)offsetof(NativeApplication_obj,toggleFullscreen),HX_HCSTRING("toggleFullscreen","\xef","\xbe","\x03","\xc4")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo *sStaticStorageInfo = 0;
#endif

static ::String sMemberFields[] = {
	HX_HCSTRING("applicationEventInfo","\x38","\x8c","\xf4","\x09"),
	HX_HCSTRING("currentTouches","\xb4","\x92","\x8c","\xe6"),
	HX_HCSTRING("dropEventInfo","\x79","\xeb","\x0f","\x1e"),
	HX_HCSTRING("gamepadEventInfo","\xc7","\xa4","\x2e","\x4c"),
	HX_HCSTRING("joystickEventInfo","\x4c","\x49","\x1d","\xd4"),
	HX_HCSTRING("keyEventInfo","\x09","\xec","\x90","\xcc"),
	HX_HCSTRING("mouseEventInfo","\xc3","\x9e","\xa6","\x86"),
	HX_HCSTRING("renderEventInfo","\x72","\x9b","\x70","\xdd"),
	HX_HCSTRING("sensorEventInfo","\x0e","\xd8","\x53","\x55"),
	HX_HCSTRING("textEventInfo","\x3b","\xd7","\x5a","\xac"),
	HX_HCSTRING("touchEventInfo","\xe9","\x99","\x5c","\x0c"),
	HX_HCSTRING("unusedTouchesPool","\xf3","\xcf","\xdf","\x11"),
	HX_HCSTRING("windowEventInfo","\x98","\x8f","\x34","\x9b"),
	HX_HCSTRING("handle","\xa8","\x83","\xfd","\xb7"),
	HX_HCSTRING("frameRate","\xad","\x11","\x25","\x39"),
	HX_HCSTRING("parent","\x2a","\x05","\x7e","\xed"),
	HX_HCSTRING("toggleFullscreen","\xef","\xbe","\x03","\xc4"),
	HX_HCSTRING("create","\xfc","\x66","\x0f","\x7c"),
	HX_HCSTRING("exec","\x91","\xf3","\x1d","\x43"),
	HX_HCSTRING("exit","\x1e","\xf7","\x1d","\x43"),
	HX_HCSTRING("getFrameRate","\x37","\xae","\x7b","\x48"),
	HX_HCSTRING("handleApplicationEvent","\x72","\xba","\xa4","\x11"),
	HX_HCSTRING("handleDropEvent","\xa3","\x9c","\xe8","\x85"),
	HX_HCSTRING("handleGamepadEvent","\x81","\x1b","\xb0","\x7b"),
	HX_HCSTRING("handleJoystickEvent","\xf6","\xd0","\x87","\xa8"),
	HX_HCSTRING("handleKeyEvent","\xc3","\x95","\x05","\x08"),
	HX_HCSTRING("handleMouseEvent","\x7d","\x65","\x58","\x63"),
	HX_HCSTRING("handleRenderEvent","\x1c","\xda","\x83","\x3f"),
	HX_HCSTRING("handleSensorEvent","\xb8","\x98","\x2d","\xba"),
	HX_HCSTRING("handleTextEvent","\x65","\xff","\x1d","\xdd"),
	HX_HCSTRING("handleTouchEvent","\xa3","\x55","\x1c","\x3f"),
	HX_HCSTRING("handleWindowEvent","\x42","\x43","\xa5","\x64"),
	HX_HCSTRING("setFrameRate","\xab","\xd1","\x74","\x5d"),
	HX_HCSTRING("updateTimer","\xfc","\x28","\xce","\xf5"),
	::String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(NativeApplication_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(NativeApplication_obj::__mClass,"__mClass");
};

#endif

hx::Class NativeApplication_obj::__mClass;

void NativeApplication_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("lime._backend.native.NativeApplication","\xa2","\x84","\xe2","\x94");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = hx::Class_obj::dupFunctions(sMemberFields);
	__mClass->mCanCast = hx::TCanCast< NativeApplication_obj >;
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
