#include <hxcpp.h>

#include "hxMath.h"
#ifndef INCLUDED_Std
#include <Std.h>
#endif
#ifndef INCLUDED_StringTools
#include <StringTools.h>
#endif
#ifndef INCLUDED_haxe_IMap
#include <haxe/IMap.h>
#endif
#ifndef INCLUDED_haxe_ds_IntMap
#include <haxe/ds/IntMap.h>
#endif
#ifndef INCLUDED_haxe_ds_StringMap
#include <haxe/ds/StringMap.h>
#endif
#ifndef INCLUDED_lime__backend_native_NativeApplication
#include <lime/_backend/native/NativeApplication.h>
#endif
#ifndef INCLUDED_lime__backend_native_NativeGLRenderContext
#include <lime/_backend/native/NativeGLRenderContext.h>
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
#ifndef INCLUDED_lime_app_Preloader
#include <lime/app/Preloader.h>
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
#ifndef INCLUDED_lime_app__Event_Int_Void
#include <lime/app/_Event_Int_Void.h>
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
#ifndef INCLUDED_lime_app__Event_lime_ui_Gamepad_Void
#include <lime/app/_Event_lime_ui_Gamepad_Void.h>
#endif
#ifndef INCLUDED_lime_app__Event_lime_ui_KeyCode_lime_ui_KeyModifier_Void
#include <lime/app/_Event_lime_ui_KeyCode_lime_ui_KeyModifier_Void.h>
#endif
#ifndef INCLUDED_lime_app__Event_lime_ui_Touch_Void
#include <lime/app/_Event_lime_ui_Touch_Void.h>
#endif
#ifndef INCLUDED_lime_graphics_CanvasRenderContext
#include <lime/graphics/CanvasRenderContext.h>
#endif
#ifndef INCLUDED_lime_graphics_ConsoleRenderContext
#include <lime/graphics/ConsoleRenderContext.h>
#endif
#ifndef INCLUDED_lime_graphics_DOMRenderContext
#include <lime/graphics/DOMRenderContext.h>
#endif
#ifndef INCLUDED_lime_graphics_RenderContext
#include <lime/graphics/RenderContext.h>
#endif
#ifndef INCLUDED_lime_graphics_Renderer
#include <lime/graphics/Renderer.h>
#endif
#ifndef INCLUDED_lime_graphics_RendererType
#include <lime/graphics/RendererType.h>
#endif
#ifndef INCLUDED_lime_graphics_cairo_Cairo
#include <lime/graphics/cairo/Cairo.h>
#endif
#ifndef INCLUDED_lime_system_Display
#include <lime/system/Display.h>
#endif
#ifndef INCLUDED_lime_system_DisplayMode
#include <lime/system/DisplayMode.h>
#endif
#ifndef INCLUDED_lime_ui_Gamepad
#include <lime/ui/Gamepad.h>
#endif
#ifndef INCLUDED_lime_ui_Joystick
#include <lime/ui/Joystick.h>
#endif
#ifndef INCLUDED_lime_ui_Mouse
#include <lime/ui/Mouse.h>
#endif
#ifndef INCLUDED_lime_ui_MouseCursor
#include <lime/ui/MouseCursor.h>
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
#ifndef INCLUDED_openfl_Lib
#include <openfl/Lib.h>
#endif
#ifndef INCLUDED_openfl__Vector_IVector
#include <openfl/_Vector/IVector.h>
#endif
#ifndef INCLUDED_openfl__Vector_ObjectVector
#include <openfl/_Vector/ObjectVector.h>
#endif
#ifndef INCLUDED_openfl__internal_renderer_AbstractRenderer
#include <openfl/_internal/renderer/AbstractRenderer.h>
#endif
#ifndef INCLUDED_openfl__internal_renderer_RenderSession
#include <openfl/_internal/renderer/RenderSession.h>
#endif
#ifndef INCLUDED_openfl__internal_renderer_cairo_CairoRenderer
#include <openfl/_internal/renderer/cairo/CairoRenderer.h>
#endif
#ifndef INCLUDED_openfl__internal_renderer_canvas_CanvasRenderer
#include <openfl/_internal/renderer/canvas/CanvasRenderer.h>
#endif
#ifndef INCLUDED_openfl__internal_renderer_opengl_GLRenderer
#include <openfl/_internal/renderer/opengl/GLRenderer.h>
#endif
#ifndef INCLUDED_openfl_display_DisplayObject
#include <openfl/display/DisplayObject.h>
#endif
#ifndef INCLUDED_openfl_display_DisplayObjectContainer
#include <openfl/display/DisplayObjectContainer.h>
#endif
#ifndef INCLUDED_openfl_display_Graphics
#include <openfl/display/Graphics.h>
#endif
#ifndef INCLUDED_openfl_display_IBitmapDrawable
#include <openfl/display/IBitmapDrawable.h>
#endif
#ifndef INCLUDED_openfl_display_InteractiveObject
#include <openfl/display/InteractiveObject.h>
#endif
#ifndef INCLUDED_openfl_display_LoaderInfo
#include <openfl/display/LoaderInfo.h>
#endif
#ifndef INCLUDED_openfl_display_MovieClip
#include <openfl/display/MovieClip.h>
#endif
#ifndef INCLUDED_openfl_display_Sprite
#include <openfl/display/Sprite.h>
#endif
#ifndef INCLUDED_openfl_display_Stage
#include <openfl/display/Stage.h>
#endif
#ifndef INCLUDED_openfl_display_Stage3D
#include <openfl/display/Stage3D.h>
#endif
#ifndef INCLUDED_openfl_events_ActivityEvent
#include <openfl/events/ActivityEvent.h>
#endif
#ifndef INCLUDED_openfl_events_ErrorEvent
#include <openfl/events/ErrorEvent.h>
#endif
#ifndef INCLUDED_openfl_events_Event
#include <openfl/events/Event.h>
#endif
#ifndef INCLUDED_openfl_events_EventDispatcher
#include <openfl/events/EventDispatcher.h>
#endif
#ifndef INCLUDED_openfl_events_FocusEvent
#include <openfl/events/FocusEvent.h>
#endif
#ifndef INCLUDED_openfl_events_FullScreenEvent
#include <openfl/events/FullScreenEvent.h>
#endif
#ifndef INCLUDED_openfl_events_IEventDispatcher
#include <openfl/events/IEventDispatcher.h>
#endif
#ifndef INCLUDED_openfl_events_KeyboardEvent
#include <openfl/events/KeyboardEvent.h>
#endif
#ifndef INCLUDED_openfl_events_MouseEvent
#include <openfl/events/MouseEvent.h>
#endif
#ifndef INCLUDED_openfl_events_TextEvent
#include <openfl/events/TextEvent.h>
#endif
#ifndef INCLUDED_openfl_events_TouchEvent
#include <openfl/events/TouchEvent.h>
#endif
#ifndef INCLUDED_openfl_events_UncaughtErrorEvent
#include <openfl/events/UncaughtErrorEvent.h>
#endif
#ifndef INCLUDED_openfl_events_UncaughtErrorEvents
#include <openfl/events/UncaughtErrorEvents.h>
#endif
#ifndef INCLUDED_openfl_geom_Matrix
#include <openfl/geom/Matrix.h>
#endif
#ifndef INCLUDED_openfl_geom_Point
#include <openfl/geom/Point.h>
#endif
#ifndef INCLUDED_openfl_geom_Rectangle
#include <openfl/geom/Rectangle.h>
#endif
#ifndef INCLUDED_openfl_geom_Transform
#include <openfl/geom/Transform.h>
#endif
#ifndef INCLUDED_openfl_ui_GameInput
#include <openfl/ui/GameInput.h>
#endif
#ifndef INCLUDED_openfl_ui_Keyboard
#include <openfl/ui/Keyboard.h>
#endif
#ifndef INCLUDED_openfl_ui_Mouse
#include <openfl/ui/Mouse.h>
#endif
namespace openfl{
namespace display{

Void Stage_obj::__construct(::lime::ui::Window window,Dynamic color)
{
{
	super::__construct();
	this->application = window->application;
	this->window = window;
	bool tmp = (color == null());
	if ((tmp)){
		this->__transparent = true;
		this->set_color((int)0);
	}
	else{
		Dynamic tmp1 = color;
		this->set_color(tmp1);
	}
	this->set_name(null());
	this->__deltaTime = (int)0;
	this->__displayState = ((Dynamic)((int)2));
	this->__mouseX = (int)0;
	this->__mouseY = (int)0;
	this->__lastClickTime = (int)0;
	this->__logicalWidth = (int)0;
	this->__logicalHeight = (int)0;
	::openfl::geom::Matrix tmp1 = ::openfl::geom::Matrix_obj::__new(null(),null(),null(),null(),null(),null());
	this->__displayMatrix = tmp1;
	this->__renderDirty = true;
	::openfl::_Vector::ObjectVector tmp2;
	{
		int length = null();
		bool fixed = null();
		::openfl::_Vector::ObjectVector tmp3 = ::openfl::_Vector::ObjectVector_obj::__new(length,fixed,null());
		::openfl::_Vector::ObjectVector tmp4 = tmp3;
		tmp2 = tmp4;
	}
	this->stage3Ds = tmp2;
	{
		::openfl::display::Stage3D tmp3 = ::openfl::display::Stage3D_obj::__new();
		::openfl::display::Stage3D x = tmp3;
		::openfl::_Vector::ObjectVector tmp4 = this->stage3Ds;
		::openfl::display::Stage3D tmp5 = x;
		tmp4->push(tmp5);
	}
	this->__resize();
	this->stage = hx::ObjectPtr<OBJ_>(this);
	this->align = ((Dynamic)((int)6));
	this->allowsFullScreen = true;
	this->allowsFullScreenInteractive = true;
	this->quality = ((Dynamic)((int)1));
	this->scaleMode = ((Dynamic)((int)2));
	this->showDefaultContextMenu = true;
	::openfl::geom::Rectangle tmp3 = ::openfl::geom::Rectangle_obj::__new(null(),null(),null(),null());
	this->softKeyboardRect = tmp3;
	this->stageFocusRect = true;
	this->__clearBeforeRender = true;
	this->__stack = Array_obj< ::Dynamic >::__new();
	this->__rollOutStack = Array_obj< ::Dynamic >::__new();
	::openfl::display::MovieClip tmp4 = ::openfl::Lib_obj::current;
	::openfl::display::Stage tmp5 = tmp4->stage;
	bool tmp6 = (tmp5 == null());
	if ((tmp6)){
		::openfl::display::Stage tmp7 = this->stage;
		::openfl::display::MovieClip tmp8 = ::openfl::Lib_obj::current;
		tmp7->addChild(tmp8);
	}
}
;
	return null();
}

//Stage_obj::~Stage_obj() { }

Dynamic Stage_obj::__CreateEmpty() { return  new Stage_obj; }
hx::ObjectPtr< Stage_obj > Stage_obj::__new(::lime::ui::Window window,Dynamic color)
{  hx::ObjectPtr< Stage_obj > _result_ = new Stage_obj();
	_result_->__construct(window,color);
	return _result_;}

Dynamic Stage_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< Stage_obj > _result_ = new Stage_obj();
	_result_->__construct(inArgs[0],inArgs[1]);
	return _result_;}

hx::Object *Stage_obj::__ToInterface(const hx::type_info &inType) {
	if (inType==typeid( ::lime::app::IModule_obj)) return operator ::lime::app::IModule_obj *();
	return super::__ToInterface(inType);
}

Stage_obj::operator ::lime::app::IModule_obj *()
	{ return new ::lime::app::IModule_delegate_< Stage_obj >(this); }
Void Stage_obj::addRenderer( ::lime::graphics::Renderer renderer){
{
		Dynamic tmp = this->render_dyn();
		::lime::graphics::Renderer tmp1 = renderer;
		Dynamic tmp2;
		{
			Dynamic f = tmp;
			::lime::graphics::Renderer a1 = tmp1;

			HX_BEGIN_LOCAL_FUNC_S2(hx::LocalFunc,_Function_2_1,::lime::graphics::Renderer,a1,Dynamic,f)
			int __ArgCount() const { return 0; }
			Void run(){
				{
					::lime::graphics::Renderer tmp3 = a1;
					f(tmp3).Cast< Void >();
				}
				return null();
			}
			HX_END_LOCAL_FUNC0((void))

			tmp2 =  Dynamic(new _Function_2_1(a1,f));
		}
		renderer->onRender->add(tmp2,null(),null());
		Dynamic tmp3 = this->onRenderContextLost_dyn();
		::lime::graphics::Renderer tmp4 = renderer;
		Dynamic tmp5;
		{
			Dynamic f = tmp3;
			::lime::graphics::Renderer a1 = tmp4;

			HX_BEGIN_LOCAL_FUNC_S2(hx::LocalFunc,_Function_2_1,::lime::graphics::Renderer,a1,Dynamic,f)
			int __ArgCount() const { return 0; }
			Void run(){
				{
					::lime::graphics::Renderer tmp6 = a1;
					f(tmp6).Cast< Void >();
				}
				return null();
			}
			HX_END_LOCAL_FUNC0((void))

			tmp5 =  Dynamic(new _Function_2_1(a1,f));
		}
		renderer->onContextLost->add(tmp5,null(),null());
		Dynamic tmp6 = this->onRenderContextRestored_dyn();
		::lime::graphics::Renderer tmp7 = renderer;
		Dynamic tmp8;
		{
			Dynamic f = tmp6;
			::lime::graphics::Renderer a1 = tmp7;

			HX_BEGIN_LOCAL_FUNC_S2(hx::LocalFunc,_Function_2_1,::lime::graphics::Renderer,a1,Dynamic,f)
			int __ArgCount() const { return 1; }
			Void run(::lime::graphics::RenderContext a2){
				{
					::lime::graphics::Renderer tmp9 = a1;
					::lime::graphics::RenderContext tmp10 = a2;
					f(tmp9,tmp10).Cast< Void >();
				}
				return null();
			}
			HX_END_LOCAL_FUNC1((void))

			tmp8 =  Dynamic(new _Function_2_1(a1,f));
		}
		renderer->onContextRestored->add(tmp8,null(),null());
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Stage_obj,addRenderer,(void))

Void Stage_obj::addWindow( ::lime::ui::Window window){
{
		::lime::ui::Window tmp = this->window;
		::lime::ui::Window tmp1 = window;
		bool tmp2 = (tmp != tmp1);
		if ((tmp2)){
			return null();
		}
		Dynamic tmp3 = this->onWindowActivate_dyn();
		::lime::ui::Window tmp4 = window;
		Dynamic tmp5;
		{
			Dynamic f = tmp3;
			::lime::ui::Window a1 = tmp4;

			HX_BEGIN_LOCAL_FUNC_S2(hx::LocalFunc,_Function_2_1,::lime::ui::Window,a1,Dynamic,f)
			int __ArgCount() const { return 0; }
			Void run(){
				{
					::lime::ui::Window tmp6 = a1;
					f(tmp6).Cast< Void >();
				}
				return null();
			}
			HX_END_LOCAL_FUNC0((void))

			tmp5 =  Dynamic(new _Function_2_1(a1,f));
		}
		window->onActivate->add(tmp5,null(),null());
		Dynamic tmp6 = this->onWindowClose_dyn();
		::lime::ui::Window tmp7 = window;
		Dynamic tmp8;
		{
			Dynamic f = tmp6;
			::lime::ui::Window a1 = tmp7;

			HX_BEGIN_LOCAL_FUNC_S2(hx::LocalFunc,_Function_2_1,::lime::ui::Window,a1,Dynamic,f)
			int __ArgCount() const { return 0; }
			Void run(){
				{
					::lime::ui::Window tmp9 = a1;
					f(tmp9).Cast< Void >();
				}
				return null();
			}
			HX_END_LOCAL_FUNC0((void))

			tmp8 =  Dynamic(new _Function_2_1(a1,f));
		}
		window->onClose->add(tmp8,false,(int)-9000);
		Dynamic tmp9 = this->onWindowCreate_dyn();
		::lime::ui::Window tmp10 = window;
		Dynamic tmp11;
		{
			Dynamic f = tmp9;
			::lime::ui::Window a1 = tmp10;

			HX_BEGIN_LOCAL_FUNC_S2(hx::LocalFunc,_Function_2_1,::lime::ui::Window,a1,Dynamic,f)
			int __ArgCount() const { return 0; }
			Void run(){
				{
					::lime::ui::Window tmp12 = a1;
					f(tmp12).Cast< Void >();
				}
				return null();
			}
			HX_END_LOCAL_FUNC0((void))

			tmp11 =  Dynamic(new _Function_2_1(a1,f));
		}
		window->onCreate->add(tmp11,null(),null());
		Dynamic tmp12 = this->onWindowDeactivate_dyn();
		::lime::ui::Window tmp13 = window;
		Dynamic tmp14;
		{
			Dynamic f = tmp12;
			::lime::ui::Window a1 = tmp13;

			HX_BEGIN_LOCAL_FUNC_S2(hx::LocalFunc,_Function_2_1,::lime::ui::Window,a1,Dynamic,f)
			int __ArgCount() const { return 0; }
			Void run(){
				{
					::lime::ui::Window tmp15 = a1;
					f(tmp15).Cast< Void >();
				}
				return null();
			}
			HX_END_LOCAL_FUNC0((void))

			tmp14 =  Dynamic(new _Function_2_1(a1,f));
		}
		window->onDeactivate->add(tmp14,null(),null());
		Dynamic tmp15 = this->onWindowDropFile_dyn();
		::lime::ui::Window tmp16 = window;
		Dynamic tmp17;
		{
			Dynamic f = tmp15;
			::lime::ui::Window a1 = tmp16;

			HX_BEGIN_LOCAL_FUNC_S2(hx::LocalFunc,_Function_2_1,::lime::ui::Window,a1,Dynamic,f)
			int __ArgCount() const { return 1; }
			Void run(::String a2){
				{
					::lime::ui::Window tmp18 = a1;
					::String tmp19 = a2;
					f(tmp18,tmp19).Cast< Void >();
				}
				return null();
			}
			HX_END_LOCAL_FUNC1((void))

			tmp17 =  Dynamic(new _Function_2_1(a1,f));
		}
		window->onDropFile->add(tmp17,null(),null());
		Dynamic tmp18 = this->onWindowEnter_dyn();
		::lime::ui::Window tmp19 = window;
		Dynamic tmp20;
		{
			Dynamic f = tmp18;
			::lime::ui::Window a1 = tmp19;

			HX_BEGIN_LOCAL_FUNC_S2(hx::LocalFunc,_Function_2_1,::lime::ui::Window,a1,Dynamic,f)
			int __ArgCount() const { return 0; }
			Void run(){
				{
					::lime::ui::Window tmp21 = a1;
					f(tmp21).Cast< Void >();
				}
				return null();
			}
			HX_END_LOCAL_FUNC0((void))

			tmp20 =  Dynamic(new _Function_2_1(a1,f));
		}
		window->onEnter->add(tmp20,null(),null());
		Dynamic tmp21 = this->onWindowFocusIn_dyn();
		::lime::ui::Window tmp22 = window;
		Dynamic tmp23;
		{
			Dynamic f = tmp21;
			::lime::ui::Window a1 = tmp22;

			HX_BEGIN_LOCAL_FUNC_S2(hx::LocalFunc,_Function_2_1,::lime::ui::Window,a1,Dynamic,f)
			int __ArgCount() const { return 0; }
			Void run(){
				{
					::lime::ui::Window tmp24 = a1;
					f(tmp24).Cast< Void >();
				}
				return null();
			}
			HX_END_LOCAL_FUNC0((void))

			tmp23 =  Dynamic(new _Function_2_1(a1,f));
		}
		window->onFocusIn->add(tmp23,null(),null());
		Dynamic tmp24 = this->onWindowFocusOut_dyn();
		::lime::ui::Window tmp25 = window;
		Dynamic tmp26;
		{
			Dynamic f = tmp24;
			::lime::ui::Window a1 = tmp25;

			HX_BEGIN_LOCAL_FUNC_S2(hx::LocalFunc,_Function_2_1,::lime::ui::Window,a1,Dynamic,f)
			int __ArgCount() const { return 0; }
			Void run(){
				{
					::lime::ui::Window tmp27 = a1;
					f(tmp27).Cast< Void >();
				}
				return null();
			}
			HX_END_LOCAL_FUNC0((void))

			tmp26 =  Dynamic(new _Function_2_1(a1,f));
		}
		window->onFocusOut->add(tmp26,null(),null());
		Dynamic tmp27 = this->onWindowFullscreen_dyn();
		::lime::ui::Window tmp28 = window;
		Dynamic tmp29;
		{
			Dynamic f = tmp27;
			::lime::ui::Window a1 = tmp28;

			HX_BEGIN_LOCAL_FUNC_S2(hx::LocalFunc,_Function_2_1,::lime::ui::Window,a1,Dynamic,f)
			int __ArgCount() const { return 0; }
			Void run(){
				{
					::lime::ui::Window tmp30 = a1;
					f(tmp30).Cast< Void >();
				}
				return null();
			}
			HX_END_LOCAL_FUNC0((void))

			tmp29 =  Dynamic(new _Function_2_1(a1,f));
		}
		window->onFullscreen->add(tmp29,null(),null());
		Dynamic tmp30 = this->onKeyDown_dyn();
		::lime::ui::Window tmp31 = window;
		Dynamic tmp32;
		{
			Dynamic f = tmp30;
			::lime::ui::Window a1 = tmp31;

			HX_BEGIN_LOCAL_FUNC_S2(hx::LocalFunc,_Function_2_1,::lime::ui::Window,a1,Dynamic,f)
			int __ArgCount() const { return 2; }
			Void run(int a2,int a3){
				{
					::lime::ui::Window tmp33 = a1;
					int tmp34 = a2;
					int tmp35 = a3;
					f(tmp33,tmp34,tmp35).Cast< Void >();
				}
				return null();
			}
			HX_END_LOCAL_FUNC2((void))

			tmp32 =  Dynamic(new _Function_2_1(a1,f));
		}
		window->onKeyDown->add(tmp32,null(),null());
		Dynamic tmp33 = this->onKeyUp_dyn();
		::lime::ui::Window tmp34 = window;
		Dynamic tmp35;
		{
			Dynamic f = tmp33;
			::lime::ui::Window a1 = tmp34;

			HX_BEGIN_LOCAL_FUNC_S2(hx::LocalFunc,_Function_2_1,::lime::ui::Window,a1,Dynamic,f)
			int __ArgCount() const { return 2; }
			Void run(int a2,int a3){
				{
					::lime::ui::Window tmp36 = a1;
					int tmp37 = a2;
					int tmp38 = a3;
					f(tmp36,tmp37,tmp38).Cast< Void >();
				}
				return null();
			}
			HX_END_LOCAL_FUNC2((void))

			tmp35 =  Dynamic(new _Function_2_1(a1,f));
		}
		window->onKeyUp->add(tmp35,null(),null());
		Dynamic tmp36 = this->onWindowLeave_dyn();
		::lime::ui::Window tmp37 = window;
		Dynamic tmp38;
		{
			Dynamic f = tmp36;
			::lime::ui::Window a1 = tmp37;

			HX_BEGIN_LOCAL_FUNC_S2(hx::LocalFunc,_Function_2_1,::lime::ui::Window,a1,Dynamic,f)
			int __ArgCount() const { return 0; }
			Void run(){
				{
					::lime::ui::Window tmp39 = a1;
					f(tmp39).Cast< Void >();
				}
				return null();
			}
			HX_END_LOCAL_FUNC0((void))

			tmp38 =  Dynamic(new _Function_2_1(a1,f));
		}
		window->onLeave->add(tmp38,null(),null());
		Dynamic tmp39 = this->onWindowMinimize_dyn();
		::lime::ui::Window tmp40 = window;
		Dynamic tmp41;
		{
			Dynamic f = tmp39;
			::lime::ui::Window a1 = tmp40;

			HX_BEGIN_LOCAL_FUNC_S2(hx::LocalFunc,_Function_2_1,::lime::ui::Window,a1,Dynamic,f)
			int __ArgCount() const { return 0; }
			Void run(){
				{
					::lime::ui::Window tmp42 = a1;
					f(tmp42).Cast< Void >();
				}
				return null();
			}
			HX_END_LOCAL_FUNC0((void))

			tmp41 =  Dynamic(new _Function_2_1(a1,f));
		}
		window->onMinimize->add(tmp41,null(),null());
		Dynamic tmp42 = this->onMouseDown_dyn();
		::lime::ui::Window tmp43 = window;
		Dynamic tmp44;
		{
			Dynamic f = tmp42;
			::lime::ui::Window a1 = tmp43;

			HX_BEGIN_LOCAL_FUNC_S2(hx::LocalFunc,_Function_2_1,::lime::ui::Window,a1,Dynamic,f)
			int __ArgCount() const { return 3; }
			Void run(Float x,Float y,int a2){
				{
					::lime::ui::Window tmp45 = a1;
					Float tmp46 = x;
					Float tmp47 = y;
					int tmp48 = a2;
					f(tmp45,tmp46,tmp47,tmp48).Cast< Void >();
				}
				return null();
			}
			HX_END_LOCAL_FUNC3((void))

			tmp44 =  Dynamic(new _Function_2_1(a1,f));
		}
		window->onMouseDown->add(tmp44,null(),null());
		Dynamic tmp45 = this->onMouseMove_dyn();
		::lime::ui::Window tmp46 = window;
		Dynamic tmp47;
		{
			Dynamic f = tmp45;
			::lime::ui::Window a1 = tmp46;

			HX_BEGIN_LOCAL_FUNC_S2(hx::LocalFunc,_Function_2_1,::lime::ui::Window,a1,Dynamic,f)
			int __ArgCount() const { return 2; }
			Void run(Float x,Float y){
				{
					::lime::ui::Window tmp48 = a1;
					Float tmp49 = x;
					Float tmp50 = y;
					f(tmp48,tmp49,tmp50).Cast< Void >();
				}
				return null();
			}
			HX_END_LOCAL_FUNC2((void))

			tmp47 =  Dynamic(new _Function_2_1(a1,f));
		}
		window->onMouseMove->add(tmp47,null(),null());
		Dynamic tmp48 = this->onMouseMoveRelative_dyn();
		::lime::ui::Window tmp49 = window;
		Dynamic tmp50;
		{
			Dynamic f = tmp48;
			::lime::ui::Window a1 = tmp49;

			HX_BEGIN_LOCAL_FUNC_S2(hx::LocalFunc,_Function_2_1,::lime::ui::Window,a1,Dynamic,f)
			int __ArgCount() const { return 2; }
			Void run(Float x,Float y){
				{
					::lime::ui::Window tmp51 = a1;
					Float tmp52 = x;
					Float tmp53 = y;
					f(tmp51,tmp52,tmp53).Cast< Void >();
				}
				return null();
			}
			HX_END_LOCAL_FUNC2((void))

			tmp50 =  Dynamic(new _Function_2_1(a1,f));
		}
		window->onMouseMoveRelative->add(tmp50,null(),null());
		Dynamic tmp51 = this->onMouseUp_dyn();
		::lime::ui::Window tmp52 = window;
		Dynamic tmp53;
		{
			Dynamic f = tmp51;
			::lime::ui::Window a1 = tmp52;

			HX_BEGIN_LOCAL_FUNC_S2(hx::LocalFunc,_Function_2_1,::lime::ui::Window,a1,Dynamic,f)
			int __ArgCount() const { return 3; }
			Void run(Float x,Float y,int a2){
				{
					::lime::ui::Window tmp54 = a1;
					Float tmp55 = x;
					Float tmp56 = y;
					int tmp57 = a2;
					f(tmp54,tmp55,tmp56,tmp57).Cast< Void >();
				}
				return null();
			}
			HX_END_LOCAL_FUNC3((void))

			tmp53 =  Dynamic(new _Function_2_1(a1,f));
		}
		window->onMouseUp->add(tmp53,null(),null());
		Dynamic tmp54 = this->onMouseWheel_dyn();
		::lime::ui::Window tmp55 = window;
		Dynamic tmp56;
		{
			Dynamic f = tmp54;
			::lime::ui::Window a1 = tmp55;

			HX_BEGIN_LOCAL_FUNC_S2(hx::LocalFunc,_Function_2_1,::lime::ui::Window,a1,Dynamic,f)
			int __ArgCount() const { return 2; }
			Void run(Float a2,Float a3){
				{
					::lime::ui::Window tmp57 = a1;
					Float tmp58 = a2;
					Float tmp59 = a3;
					f(tmp57,tmp58,tmp59).Cast< Void >();
				}
				return null();
			}
			HX_END_LOCAL_FUNC2((void))

			tmp56 =  Dynamic(new _Function_2_1(a1,f));
		}
		window->onMouseWheel->add(tmp56,null(),null());
		Dynamic tmp57 = this->onWindowMove_dyn();
		::lime::ui::Window tmp58 = window;
		Dynamic tmp59;
		{
			Dynamic f = tmp57;
			::lime::ui::Window a1 = tmp58;

			HX_BEGIN_LOCAL_FUNC_S2(hx::LocalFunc,_Function_2_1,::lime::ui::Window,a1,Dynamic,f)
			int __ArgCount() const { return 2; }
			Void run(Float x,Float y){
				{
					::lime::ui::Window tmp60 = a1;
					Float tmp61 = x;
					Float tmp62 = y;
					f(tmp60,tmp61,tmp62).Cast< Void >();
				}
				return null();
			}
			HX_END_LOCAL_FUNC2((void))

			tmp59 =  Dynamic(new _Function_2_1(a1,f));
		}
		window->onMove->add(tmp59,null(),null());
		Dynamic tmp60 = this->onWindowResize_dyn();
		::lime::ui::Window tmp61 = window;
		Dynamic tmp62;
		{
			Dynamic f = tmp60;
			::lime::ui::Window a1 = tmp61;

			HX_BEGIN_LOCAL_FUNC_S2(hx::LocalFunc,_Function_2_1,::lime::ui::Window,a1,Dynamic,f)
			int __ArgCount() const { return 2; }
			Void run(int a2,int a3){
				{
					::lime::ui::Window tmp63 = a1;
					int tmp64 = a2;
					int tmp65 = a3;
					f(tmp63,tmp64,tmp65).Cast< Void >();
				}
				return null();
			}
			HX_END_LOCAL_FUNC2((void))

			tmp62 =  Dynamic(new _Function_2_1(a1,f));
		}
		window->onResize->add(tmp62,null(),null());
		Dynamic tmp63 = this->onWindowRestore_dyn();
		::lime::ui::Window tmp64 = window;
		Dynamic tmp65;
		{
			Dynamic f = tmp63;
			::lime::ui::Window a1 = tmp64;

			HX_BEGIN_LOCAL_FUNC_S2(hx::LocalFunc,_Function_2_1,::lime::ui::Window,a1,Dynamic,f)
			int __ArgCount() const { return 0; }
			Void run(){
				{
					::lime::ui::Window tmp66 = a1;
					f(tmp66).Cast< Void >();
				}
				return null();
			}
			HX_END_LOCAL_FUNC0((void))

			tmp65 =  Dynamic(new _Function_2_1(a1,f));
		}
		window->onRestore->add(tmp65,null(),null());
		Dynamic tmp66 = this->onTextEdit_dyn();
		::lime::ui::Window tmp67 = window;
		Dynamic tmp68;
		{
			Dynamic f = tmp66;
			::lime::ui::Window a1 = tmp67;

			HX_BEGIN_LOCAL_FUNC_S2(hx::LocalFunc,_Function_2_1,::lime::ui::Window,a1,Dynamic,f)
			int __ArgCount() const { return 3; }
			Void run(::String a2,int a3,int a4){
				{
					::lime::ui::Window tmp69 = a1;
					::String tmp70 = a2;
					int tmp71 = a3;
					int tmp72 = a4;
					f(tmp69,tmp70,tmp71,tmp72).Cast< Void >();
				}
				return null();
			}
			HX_END_LOCAL_FUNC3((void))

			tmp68 =  Dynamic(new _Function_2_1(a1,f));
		}
		window->onTextEdit->add(tmp68,null(),null());
		Dynamic tmp69 = this->onTextInput_dyn();
		::lime::ui::Window tmp70 = window;
		Dynamic tmp71;
		{
			Dynamic f = tmp69;
			::lime::ui::Window a1 = tmp70;

			HX_BEGIN_LOCAL_FUNC_S2(hx::LocalFunc,_Function_2_1,::lime::ui::Window,a1,Dynamic,f)
			int __ArgCount() const { return 1; }
			Void run(::String a2){
				{
					::lime::ui::Window tmp72 = a1;
					::String tmp73 = a2;
					f(tmp72,tmp73).Cast< Void >();
				}
				return null();
			}
			HX_END_LOCAL_FUNC1((void))

			tmp71 =  Dynamic(new _Function_2_1(a1,f));
		}
		window->onTextInput->add(tmp71,null(),null());
		bool tmp72 = (window->id > (int)-1);
		if ((tmp72)){
			::lime::ui::Window tmp73 = window;
			this->onWindowCreate(tmp73);
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Stage_obj,addWindow,(void))

Void Stage_obj::registerModule( ::lime::app::Application application){
{
		Dynamic tmp = this->onModuleExit_dyn();
		application->onExit->add(tmp,false,(int)0);
		Dynamic tmp1 = this->update_dyn();
		application->onUpdate->add(tmp1,null(),null());
		::haxe::ds::IntMap tmp2 = ::lime::ui::Gamepad_obj::devices;
		Dynamic tmp3 = tmp2->iterator();
		for(::cpp::FastIterator_obj< ::lime::ui::Gamepad > *__it = ::cpp::CreateFastIterator< ::lime::ui::Gamepad >(tmp3);  __it->hasNext(); ){
			::lime::ui::Gamepad gamepad = __it->next();
			{
				::lime::ui::Gamepad tmp4 = gamepad;
				this->__onGamepadConnect(tmp4);
			}
;
		}
		::lime::app::_Event_lime_ui_Gamepad_Void tmp4 = ::lime::ui::Gamepad_obj::onConnect;
		Dynamic tmp5 = this->__onGamepadConnect_dyn();
		tmp4->add(tmp5,null(),null());
		::lime::app::_Event_lime_ui_Touch_Void tmp6 = ::lime::ui::Touch_obj::onStart;
		Dynamic tmp7 = this->onTouchStart_dyn();
		tmp6->add(tmp7,null(),null());
		::lime::app::_Event_lime_ui_Touch_Void tmp8 = ::lime::ui::Touch_obj::onMove;
		Dynamic tmp9 = this->onTouchMove_dyn();
		tmp8->add(tmp9,null(),null());
		::lime::app::_Event_lime_ui_Touch_Void tmp10 = ::lime::ui::Touch_obj::onEnd;
		Dynamic tmp11 = this->onTouchEnd_dyn();
		tmp10->add(tmp11,null(),null());
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Stage_obj,registerModule,(void))

Void Stage_obj::removeRenderer( ::lime::graphics::Renderer renderer){
{
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Stage_obj,removeRenderer,(void))

Void Stage_obj::removeWindow( ::lime::ui::Window window){
{
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Stage_obj,removeWindow,(void))

Void Stage_obj::setPreloader( ::lime::app::Preloader preloader){
{
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Stage_obj,setPreloader,(void))

Void Stage_obj::unregisterModule( ::lime::app::Application application){
{
		Dynamic tmp = this->onModuleExit_dyn();
		application->onExit->remove(tmp);
		Dynamic tmp1 = this->update_dyn();
		application->onUpdate->remove(tmp1);
		::lime::app::_Event_lime_ui_Gamepad_Void tmp2 = ::lime::ui::Gamepad_obj::onConnect;
		Dynamic tmp3 = this->__onGamepadConnect_dyn();
		tmp2->remove(tmp3);
		::lime::app::_Event_lime_ui_Touch_Void tmp4 = ::lime::ui::Touch_obj::onStart;
		Dynamic tmp5 = this->onTouchStart_dyn();
		tmp4->remove(tmp5);
		::lime::app::_Event_lime_ui_Touch_Void tmp6 = ::lime::ui::Touch_obj::onMove;
		Dynamic tmp7 = this->onTouchMove_dyn();
		tmp6->remove(tmp7);
		::lime::app::_Event_lime_ui_Touch_Void tmp8 = ::lime::ui::Touch_obj::onEnd;
		Dynamic tmp9 = this->onTouchEnd_dyn();
		tmp8->remove(tmp9);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Stage_obj,unregisterModule,(void))

::openfl::geom::Point Stage_obj::globalToLocal( ::openfl::geom::Point pos){
	::openfl::geom::Point tmp = pos->clone();
	return tmp;
}


Void Stage_obj::invalidate( ){
{
		this->__invalidated = true;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(Stage_obj,invalidate,(void))

::openfl::geom::Point Stage_obj::localToGlobal( ::openfl::geom::Point pos){
	::openfl::geom::Point tmp = pos->clone();
	return tmp;
}


Void Stage_obj::onGamepadAxisMove( ::lime::ui::Gamepad gamepad,int axis,Float value){
{
		try
		{
		HX_STACK_CATCHABLE(Dynamic, 0);
		{
			::lime::ui::Gamepad tmp = gamepad;
			int tmp1 = axis;
			Float tmp2 = value;
			::openfl::ui::GameInput_obj::__onGamepadAxisMove(tmp,tmp1,tmp2);
		}
		}
		catch(Dynamic __e){
			{
				HX_STACK_BEGIN_CATCH
				Dynamic e = __e;{
					Dynamic tmp = e;
					this->__handleError(tmp);
				}
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC3(Stage_obj,onGamepadAxisMove,(void))

Void Stage_obj::onGamepadButtonDown( ::lime::ui::Gamepad gamepad,int button){
{
		try
		{
		HX_STACK_CATCHABLE(Dynamic, 0);
		{
			::lime::ui::Gamepad tmp = gamepad;
			int tmp1 = button;
			::openfl::ui::GameInput_obj::__onGamepadButtonDown(tmp,tmp1);
		}
		}
		catch(Dynamic __e){
			{
				HX_STACK_BEGIN_CATCH
				Dynamic e = __e;{
					Dynamic tmp = e;
					this->__handleError(tmp);
				}
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(Stage_obj,onGamepadButtonDown,(void))

Void Stage_obj::onGamepadButtonUp( ::lime::ui::Gamepad gamepad,int button){
{
		try
		{
		HX_STACK_CATCHABLE(Dynamic, 0);
		{
			::lime::ui::Gamepad tmp = gamepad;
			int tmp1 = button;
			::openfl::ui::GameInput_obj::__onGamepadButtonUp(tmp,tmp1);
		}
		}
		catch(Dynamic __e){
			{
				HX_STACK_BEGIN_CATCH
				Dynamic e = __e;{
					Dynamic tmp = e;
					this->__handleError(tmp);
				}
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(Stage_obj,onGamepadButtonUp,(void))

Void Stage_obj::onGamepadConnect( ::lime::ui::Gamepad gamepad){
{
		try
		{
		HX_STACK_CATCHABLE(Dynamic, 0);
		{
			::lime::ui::Gamepad tmp = gamepad;
			::openfl::ui::GameInput_obj::__onGamepadConnect(tmp);
		}
		}
		catch(Dynamic __e){
			{
				HX_STACK_BEGIN_CATCH
				Dynamic e = __e;{
					Dynamic tmp = e;
					this->__handleError(tmp);
				}
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Stage_obj,onGamepadConnect,(void))

Void Stage_obj::onGamepadDisconnect( ::lime::ui::Gamepad gamepad){
{
		try
		{
		HX_STACK_CATCHABLE(Dynamic, 0);
		{
			::lime::ui::Gamepad tmp = gamepad;
			::openfl::ui::GameInput_obj::__onGamepadDisconnect(tmp);
		}
		}
		catch(Dynamic __e){
			{
				HX_STACK_BEGIN_CATCH
				Dynamic e = __e;{
					Dynamic tmp = e;
					this->__handleError(tmp);
				}
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Stage_obj,onGamepadDisconnect,(void))

Void Stage_obj::onJoystickAxisMove( ::lime::ui::Joystick joystick,int axis,Float value){
{
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC3(Stage_obj,onJoystickAxisMove,(void))

Void Stage_obj::onJoystickButtonDown( ::lime::ui::Joystick joystick,int button){
{
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(Stage_obj,onJoystickButtonDown,(void))

Void Stage_obj::onJoystickButtonUp( ::lime::ui::Joystick joystick,int button){
{
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(Stage_obj,onJoystickButtonUp,(void))

Void Stage_obj::onJoystickConnect( ::lime::ui::Joystick joystick){
{
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Stage_obj,onJoystickConnect,(void))

Void Stage_obj::onJoystickDisconnect( ::lime::ui::Joystick joystick){
{
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Stage_obj,onJoystickDisconnect,(void))

Void Stage_obj::onJoystickHatMove( ::lime::ui::Joystick joystick,int hat,int position){
{
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC3(Stage_obj,onJoystickHatMove,(void))

Void Stage_obj::onJoystickTrackballMove( ::lime::ui::Joystick joystick,int trackball,Float value){
{
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC3(Stage_obj,onJoystickTrackballMove,(void))

Void Stage_obj::onKeyDown( ::lime::ui::Window window,int keyCode,int modifier){
{
		::lime::ui::Window tmp = this->window;
		bool tmp1 = (tmp == null());
		bool tmp2 = !(tmp1);
		bool tmp3;
		if ((tmp2)){
			::lime::ui::Window tmp4 = this->window;
			::lime::ui::Window tmp5 = tmp4;
			::lime::ui::Window tmp6 = window;
			tmp3 = (tmp5 != tmp6);
		}
		else{
			tmp3 = true;
		}
		if ((tmp3)){
			return null();
		}
		try
		{
		HX_STACK_CATCHABLE(Dynamic, 0);
		{
			int tmp4 = keyCode;
			int tmp5 = modifier;
			this->__onKey(HX_HCSTRING("keyDown","\xa1","\x69","\x47","\x9c"),tmp4,tmp5);
		}
		}
		catch(Dynamic __e){
			{
				HX_STACK_BEGIN_CATCH
				Dynamic e = __e;{
					Dynamic tmp4 = e;
					this->__handleError(tmp4);
				}
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC3(Stage_obj,onKeyDown,(void))

Void Stage_obj::onKeyUp( ::lime::ui::Window window,int keyCode,int modifier){
{
		::lime::ui::Window tmp = this->window;
		bool tmp1 = (tmp == null());
		bool tmp2 = !(tmp1);
		bool tmp3;
		if ((tmp2)){
			::lime::ui::Window tmp4 = this->window;
			::lime::ui::Window tmp5 = tmp4;
			::lime::ui::Window tmp6 = window;
			tmp3 = (tmp5 != tmp6);
		}
		else{
			tmp3 = true;
		}
		if ((tmp3)){
			return null();
		}
		try
		{
		HX_STACK_CATCHABLE(Dynamic, 0);
		{
			int tmp4 = keyCode;
			int tmp5 = modifier;
			this->__onKey(HX_HCSTRING("keyUp","\xda","\xb9","\xfe","\xde"),tmp4,tmp5);
		}
		}
		catch(Dynamic __e){
			{
				HX_STACK_BEGIN_CATCH
				Dynamic e = __e;{
					Dynamic tmp4 = e;
					this->__handleError(tmp4);
				}
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC3(Stage_obj,onKeyUp,(void))

Void Stage_obj::onModuleExit( int code){
{
		::lime::ui::Window tmp = this->window;
		bool tmp1 = (tmp != null());
		if ((tmp1)){
			try
			{
			HX_STACK_CATCHABLE(Dynamic, 0);
			{
				::openfl::events::Event tmp2 = ::openfl::events::Event_obj::__new(HX_HCSTRING("deactivate","\x34","\x5c","\x01","\x3c"),null(),null());
				this->__broadcastEvent(tmp2);
			}
			}
			catch(Dynamic __e){
				{
					HX_STACK_BEGIN_CATCH
					Dynamic e = __e;{
						Dynamic tmp2 = e;
						this->__handleError(tmp2);
					}
				}
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Stage_obj,onModuleExit,(void))

Void Stage_obj::onMouseDown( ::lime::ui::Window window,Float x,Float y,int button){
{
		::lime::ui::Window tmp = this->window;
		bool tmp1 = (tmp == null());
		bool tmp2 = !(tmp1);
		bool tmp3;
		if ((tmp2)){
			::lime::ui::Window tmp4 = this->window;
			::lime::ui::Window tmp5 = tmp4;
			::lime::ui::Window tmp6 = window;
			tmp3 = (tmp5 != tmp6);
		}
		else{
			tmp3 = true;
		}
		if ((tmp3)){
			return null();
		}
		try
		{
		HX_STACK_CATCHABLE(Dynamic, 0);
		{
			int tmp4 = button;
			::String tmp5;
			switch( (int)(tmp4)){
				case (int)1: {
					tmp5 = HX_HCSTRING("middleMouseDown","\x12","\x2b","\xfe","\x01");
				}
				;break;
				case (int)2: {
					tmp5 = HX_HCSTRING("rightMouseDown","\xab","\x29","\xd7","\xcd");
				}
				;break;
				default: {
					tmp5 = HX_HCSTRING("mouseDown","\x27","\xb1","\xc2","\xee");
				}
			}
			::String type = tmp5;
			::String tmp6 = type;
			Float tmp7 = (x * window->__scale);
			int tmp8 = ::Std_obj::_int(tmp7);
			Float tmp9 = (y * window->__scale);
			int tmp10 = ::Std_obj::_int(tmp9);
			int tmp11 = button;
			this->__onMouse(tmp6,tmp8,tmp10,tmp11);
		}
		}
		catch(Dynamic __e){
			{
				HX_STACK_BEGIN_CATCH
				Dynamic e = __e;{
					Dynamic tmp4 = e;
					this->__handleError(tmp4);
				}
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC4(Stage_obj,onMouseDown,(void))

Void Stage_obj::onMouseMove( ::lime::ui::Window window,Float x,Float y){
{
		::lime::ui::Window tmp = this->window;
		bool tmp1 = (tmp == null());
		bool tmp2 = !(tmp1);
		bool tmp3;
		if ((tmp2)){
			::lime::ui::Window tmp4 = this->window;
			::lime::ui::Window tmp5 = tmp4;
			::lime::ui::Window tmp6 = window;
			tmp3 = (tmp5 != tmp6);
		}
		else{
			tmp3 = true;
		}
		if ((tmp3)){
			return null();
		}
		try
		{
		HX_STACK_CATCHABLE(Dynamic, 0);
		{
			Float tmp4 = (x * window->__scale);
			int tmp5 = ::Std_obj::_int(tmp4);
			Float tmp6 = (y * window->__scale);
			int tmp7 = ::Std_obj::_int(tmp6);
			this->__onMouse(HX_HCSTRING("mouseMove","\xd6","\x9b","\xb5","\xf4"),tmp5,tmp7,(int)0);
		}
		}
		catch(Dynamic __e){
			{
				HX_STACK_BEGIN_CATCH
				Dynamic e = __e;{
					Dynamic tmp4 = e;
					this->__handleError(tmp4);
				}
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC3(Stage_obj,onMouseMove,(void))

Void Stage_obj::onMouseMoveRelative( ::lime::ui::Window window,Float x,Float y){
{
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC3(Stage_obj,onMouseMoveRelative,(void))

Void Stage_obj::onMouseUp( ::lime::ui::Window window,Float x,Float y,int button){
{
		::lime::ui::Window tmp = this->window;
		bool tmp1 = (tmp == null());
		bool tmp2 = !(tmp1);
		bool tmp3;
		if ((tmp2)){
			::lime::ui::Window tmp4 = this->window;
			::lime::ui::Window tmp5 = tmp4;
			::lime::ui::Window tmp6 = window;
			tmp3 = (tmp5 != tmp6);
		}
		else{
			tmp3 = true;
		}
		if ((tmp3)){
			return null();
		}
		try
		{
		HX_STACK_CATCHABLE(Dynamic, 0);
		{
			int tmp4 = button;
			::String tmp5;
			switch( (int)(tmp4)){
				case (int)1: {
					tmp5 = HX_HCSTRING("middleMouseUp","\x0b","\x8d","\xf5","\x3a");
				}
				;break;
				case (int)2: {
					tmp5 = HX_HCSTRING("rightMouseUp","\x64","\x83","\x21","\xab");
				}
				;break;
				default: {
					tmp5 = HX_HCSTRING("mouseUp","\xe0","\xf3","\x72","\xc0");
				}
			}
			::String type = tmp5;
			::String tmp6 = type;
			Float tmp7 = (x * window->__scale);
			int tmp8 = ::Std_obj::_int(tmp7);
			Float tmp9 = (y * window->__scale);
			int tmp10 = ::Std_obj::_int(tmp9);
			int tmp11 = button;
			this->__onMouse(tmp6,tmp8,tmp10,tmp11);
			bool tmp12 = this->showDefaultContextMenu;
			bool tmp13 = tmp12;
			bool tmp14 = !(tmp13);
			bool tmp15;
			if ((tmp14)){
				tmp15 = (button == (int)2);
			}
			else{
				tmp15 = false;
			}
			if ((tmp15)){
				window->onMouseUp->cancel();
			}
		}
		}
		catch(Dynamic __e){
			{
				HX_STACK_BEGIN_CATCH
				Dynamic e = __e;{
					Dynamic tmp4 = e;
					this->__handleError(tmp4);
				}
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC4(Stage_obj,onMouseUp,(void))

Void Stage_obj::onMouseWheel( ::lime::ui::Window window,Float deltaX,Float deltaY){
{
		::lime::ui::Window tmp = this->window;
		bool tmp1 = (tmp == null());
		bool tmp2 = !(tmp1);
		bool tmp3;
		if ((tmp2)){
			::lime::ui::Window tmp4 = this->window;
			::lime::ui::Window tmp5 = tmp4;
			::lime::ui::Window tmp6 = window;
			tmp3 = (tmp5 != tmp6);
		}
		else{
			tmp3 = true;
		}
		if ((tmp3)){
			return null();
		}
		try
		{
		HX_STACK_CATCHABLE(Dynamic, 0);
		{
			Float tmp4 = (deltaX * window->__scale);
			int tmp5 = ::Std_obj::_int(tmp4);
			Float tmp6 = (deltaY * window->__scale);
			int tmp7 = ::Std_obj::_int(tmp6);
			this->__onMouseWheel(tmp5,tmp7);
		}
		}
		catch(Dynamic __e){
			{
				HX_STACK_BEGIN_CATCH
				Dynamic e = __e;{
					Dynamic tmp4 = e;
					this->__handleError(tmp4);
				}
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC3(Stage_obj,onMouseWheel,(void))

Void Stage_obj::onPreloadComplete( ){
{
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(Stage_obj,onPreloadComplete,(void))

Void Stage_obj::onPreloadProgress( int loaded,int total){
{
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(Stage_obj,onPreloadProgress,(void))

Void Stage_obj::onRenderContextLost( ::lime::graphics::Renderer renderer){
{
		this->__renderer = null();
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Stage_obj,onRenderContextLost,(void))

Void Stage_obj::onRenderContextRestored( ::lime::graphics::Renderer renderer,::lime::graphics::RenderContext context){
{
		this->__createRenderer();
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(Stage_obj,onRenderContextRestored,(void))

Void Stage_obj::onTextEdit( ::lime::ui::Window window,::String text,int start,int length){
{
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC4(Stage_obj,onTextEdit,(void))

Void Stage_obj::onTextInput( ::lime::ui::Window window,::String text){
{
		::lime::ui::Window tmp = this->window;
		bool tmp1 = (tmp == null());
		bool tmp2 = !(tmp1);
		bool tmp3;
		if ((tmp2)){
			::lime::ui::Window tmp4 = this->window;
			::lime::ui::Window tmp5 = tmp4;
			::lime::ui::Window tmp6 = window;
			tmp3 = (tmp5 != tmp6);
		}
		else{
			tmp3 = true;
		}
		if ((tmp3)){
			return null();
		}
		try
		{
		HX_STACK_CATCHABLE(Dynamic, 0);
		{
			Array< ::Dynamic > stack = Array_obj< ::Dynamic >::__new();
			::openfl::display::InteractiveObject tmp4 = this->__focus;
			bool tmp5 = (tmp4 == null());
			if ((tmp5)){
				this->__getInteractive(stack);
			}
			else{
				::openfl::display::InteractiveObject tmp6 = this->__focus;
				tmp6->__getInteractive(stack);
			}
			::openfl::events::TextEvent tmp6 = ::openfl::events::TextEvent_obj::__new(HX_HCSTRING("textInput","\x1d","\x54","\x0b","\x57"),true,false,text);
			::openfl::events::TextEvent event = tmp6;
			bool tmp7 = (stack->length > (int)0);
			if ((tmp7)){
				stack->reverse();
				::openfl::events::TextEvent tmp8 = event;
				this->__dispatchStack(tmp8,stack);
			}
			else{
				::openfl::events::TextEvent tmp8 = event;
				this->__dispatchEvent(tmp8);
			}
		}
		}
		catch(Dynamic __e){
			{
				HX_STACK_BEGIN_CATCH
				Dynamic e = __e;{
					Dynamic tmp4 = e;
					this->__handleError(tmp4);
				}
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(Stage_obj,onTextInput,(void))

Void Stage_obj::onTouchMove( ::lime::ui::Touch touch){
{
		try
		{
		HX_STACK_CATCHABLE(Dynamic, 0);
		{
			::lime::ui::Touch tmp = touch;
			this->__onTouch(HX_HCSTRING("touchMove","\x70","\x72","\xcd","\x0d"),tmp);
		}
		}
		catch(Dynamic __e){
			{
				HX_STACK_BEGIN_CATCH
				Dynamic e = __e;{
					Dynamic tmp = e;
					this->__handleError(tmp);
				}
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Stage_obj,onTouchMove,(void))

Void Stage_obj::onTouchEnd( ::lime::ui::Touch touch){
{
		try
		{
		HX_STACK_CATCHABLE(Dynamic, 0);
		{
			::lime::ui::Touch tmp = this->__primaryTouch;
			::lime::ui::Touch tmp1 = touch;
			bool tmp2 = (tmp == tmp1);
			if ((tmp2)){
				this->__primaryTouch = null();
			}
			::lime::ui::Touch tmp3 = touch;
			this->__onTouch(HX_HCSTRING("touchEnd","\x5c","\xc5","\x09","\x00"),tmp3);
		}
		}
		catch(Dynamic __e){
			{
				HX_STACK_BEGIN_CATCH
				Dynamic e = __e;{
					Dynamic tmp = e;
					this->__handleError(tmp);
				}
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Stage_obj,onTouchEnd,(void))

Void Stage_obj::onTouchStart( ::lime::ui::Touch touch){
{
		try
		{
		HX_STACK_CATCHABLE(Dynamic, 0);
		{
			::lime::ui::Touch tmp = this->__primaryTouch;
			bool tmp1 = (tmp == null());
			if ((tmp1)){
				this->__primaryTouch = touch;
			}
			::lime::ui::Touch tmp2 = touch;
			this->__onTouch(HX_HCSTRING("touchBegin","\xea","\xcd","\xe6","\xa9"),tmp2);
		}
		}
		catch(Dynamic __e){
			{
				HX_STACK_BEGIN_CATCH
				Dynamic e = __e;{
					Dynamic tmp = e;
					this->__handleError(tmp);
				}
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Stage_obj,onTouchStart,(void))

Void Stage_obj::onWindowActivate( ::lime::ui::Window window){
{
		::lime::ui::Window tmp = this->window;
		bool tmp1 = (tmp == null());
		bool tmp2 = !(tmp1);
		bool tmp3;
		if ((tmp2)){
			::lime::ui::Window tmp4 = this->window;
			::lime::ui::Window tmp5 = tmp4;
			::lime::ui::Window tmp6 = window;
			tmp3 = (tmp5 != tmp6);
		}
		else{
			tmp3 = true;
		}
		if ((tmp3)){
			return null();
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Stage_obj,onWindowActivate,(void))

Void Stage_obj::onWindowClose( ::lime::ui::Window window){
{
		::lime::ui::Window tmp = this->window;
		::lime::ui::Window tmp1 = window;
		bool tmp2 = (tmp == tmp1);
		if ((tmp2)){
			this->window = null();
		}
		try
		{
		HX_STACK_CATCHABLE(Dynamic, 0);
		{
			this->__primaryTouch = null();
			::openfl::events::Event tmp3 = ::openfl::events::Event_obj::__new(HX_HCSTRING("deactivate","\x34","\x5c","\x01","\x3c"),null(),null());
			this->__broadcastEvent(tmp3);
		}
		}
		catch(Dynamic __e){
			{
				HX_STACK_BEGIN_CATCH
				Dynamic e = __e;{
					Dynamic tmp3 = e;
					this->__handleError(tmp3);
				}
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Stage_obj,onWindowClose,(void))

Void Stage_obj::onWindowCreate( ::lime::ui::Window window){
{
		::lime::ui::Window tmp = this->window;
		bool tmp1 = (tmp == null());
		bool tmp2 = !(tmp1);
		bool tmp3;
		if ((tmp2)){
			::lime::ui::Window tmp4 = this->window;
			::lime::ui::Window tmp5 = tmp4;
			::lime::ui::Window tmp6 = window;
			tmp3 = (tmp5 != tmp6);
		}
		else{
			tmp3 = true;
		}
		if ((tmp3)){
			return null();
		}
		try
		{
		HX_STACK_CATCHABLE(Dynamic, 0);
		{
			bool tmp4 = (window->renderer != null());
			if ((tmp4)){
				this->__createRenderer();
			}
		}
		}
		catch(Dynamic __e){
			{
				HX_STACK_BEGIN_CATCH
				Dynamic e = __e;{
					Dynamic tmp4 = e;
					this->__handleError(tmp4);
				}
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Stage_obj,onWindowCreate,(void))

Void Stage_obj::onWindowDeactivate( ::lime::ui::Window window){
{
		::lime::ui::Window tmp = this->window;
		bool tmp1 = (tmp == null());
		bool tmp2 = !(tmp1);
		bool tmp3;
		if ((tmp2)){
			::lime::ui::Window tmp4 = this->window;
			::lime::ui::Window tmp5 = tmp4;
			::lime::ui::Window tmp6 = window;
			tmp3 = (tmp5 != tmp6);
		}
		else{
			tmp3 = true;
		}
		if ((tmp3)){
			return null();
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Stage_obj,onWindowDeactivate,(void))

Void Stage_obj::onWindowDropFile( ::lime::ui::Window window,::String file){
{
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(Stage_obj,onWindowDropFile,(void))

Void Stage_obj::onWindowEnter( ::lime::ui::Window window){
{
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Stage_obj,onWindowEnter,(void))

Void Stage_obj::onWindowFocusIn( ::lime::ui::Window window){
{
		::lime::ui::Window tmp = this->window;
		bool tmp1 = (tmp == null());
		bool tmp2 = !(tmp1);
		bool tmp3;
		if ((tmp2)){
			::lime::ui::Window tmp4 = this->window;
			::lime::ui::Window tmp5 = tmp4;
			::lime::ui::Window tmp6 = window;
			tmp3 = (tmp5 != tmp6);
		}
		else{
			tmp3 = true;
		}
		if ((tmp3)){
			return null();
		}
		try
		{
		HX_STACK_CATCHABLE(Dynamic, 0);
		{
			this->__renderDirty = true;
			::openfl::events::Event tmp4 = ::openfl::events::Event_obj::__new(HX_HCSTRING("activate","\xb3","\x1b","\xac","\xe5"),null(),null());
			this->__broadcastEvent(tmp4);
			::openfl::display::InteractiveObject tmp5 = this->__cacheFocus;
			this->set_focus(tmp5);
		}
		}
		catch(Dynamic __e){
			{
				HX_STACK_BEGIN_CATCH
				Dynamic e = __e;{
					Dynamic tmp4 = e;
					this->__handleError(tmp4);
				}
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Stage_obj,onWindowFocusIn,(void))

Void Stage_obj::onWindowFocusOut( ::lime::ui::Window window){
{
		::lime::ui::Window tmp = this->window;
		bool tmp1 = (tmp == null());
		bool tmp2 = !(tmp1);
		bool tmp3;
		if ((tmp2)){
			::lime::ui::Window tmp4 = this->window;
			::lime::ui::Window tmp5 = tmp4;
			::lime::ui::Window tmp6 = window;
			tmp3 = (tmp5 != tmp6);
		}
		else{
			tmp3 = true;
		}
		if ((tmp3)){
			return null();
		}
		try
		{
		HX_STACK_CATCHABLE(Dynamic, 0);
		{
			this->__primaryTouch = null();
			::openfl::events::Event tmp4 = ::openfl::events::Event_obj::__new(HX_HCSTRING("deactivate","\x34","\x5c","\x01","\x3c"),null(),null());
			this->__broadcastEvent(tmp4);
			::openfl::display::InteractiveObject tmp5 = this->get_focus();
			::openfl::display::InteractiveObject currentFocus = tmp5;
			this->set_focus(null());
			this->__cacheFocus = currentFocus;
		}
		}
		catch(Dynamic __e){
			{
				HX_STACK_BEGIN_CATCH
				Dynamic e = __e;{
					Dynamic tmp4 = e;
					this->__handleError(tmp4);
				}
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Stage_obj,onWindowFocusOut,(void))

Void Stage_obj::onWindowFullscreen( ::lime::ui::Window window){
{
		::lime::ui::Window tmp = this->window;
		bool tmp1 = (tmp == null());
		bool tmp2 = !(tmp1);
		bool tmp3;
		if ((tmp2)){
			::lime::ui::Window tmp4 = this->window;
			::lime::ui::Window tmp5 = tmp4;
			::lime::ui::Window tmp6 = window;
			tmp3 = (tmp5 != tmp6);
		}
		else{
			tmp3 = true;
		}
		if ((tmp3)){
			return null();
		}
		try
		{
		HX_STACK_CATCHABLE(Dynamic, 0);
		{
			this->__resize();
			Dynamic tmp4 = this->__displayState;
			bool tmp5 = (tmp4 == ((Dynamic)((int)2)));
			if ((tmp5)){
				this->__displayState = ((Dynamic)((int)1));
				::openfl::events::FullScreenEvent tmp6 = ::openfl::events::FullScreenEvent_obj::__new(HX_HCSTRING("fullScreen","\x5b","\xae","\x48","\x2e"),false,false,false,true);
				this->__dispatchEvent(tmp6);
			}
		}
		}
		catch(Dynamic __e){
			{
				HX_STACK_BEGIN_CATCH
				Dynamic e = __e;{
					Dynamic tmp4 = e;
					this->__handleError(tmp4);
				}
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Stage_obj,onWindowFullscreen,(void))

Void Stage_obj::onWindowLeave( ::lime::ui::Window window){
{
		::lime::ui::Window tmp = this->window;
		bool tmp1 = (tmp == null());
		bool tmp2 = !(tmp1);
		bool tmp3;
		if ((tmp2)){
			::lime::ui::Window tmp4 = this->window;
			::lime::ui::Window tmp5 = tmp4;
			::lime::ui::Window tmp6 = window;
			tmp3 = (tmp5 != tmp6);
		}
		else{
			tmp3 = true;
		}
		if ((tmp3)){
			return null();
		}
		try
		{
		HX_STACK_CATCHABLE(Dynamic, 0);
		{
			::openfl::events::Event tmp4 = ::openfl::events::Event_obj::__new(HX_HCSTRING("mouseLeave","\x92","\x28","\x20","\x90"),null(),null());
			this->__dispatchEvent(tmp4);
		}
		}
		catch(Dynamic __e){
			{
				HX_STACK_BEGIN_CATCH
				Dynamic e = __e;{
					Dynamic tmp4 = e;
					this->__handleError(tmp4);
				}
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Stage_obj,onWindowLeave,(void))

Void Stage_obj::onWindowMinimize( ::lime::ui::Window window){
{
		::lime::ui::Window tmp = this->window;
		bool tmp1 = (tmp == null());
		bool tmp2 = !(tmp1);
		bool tmp3;
		if ((tmp2)){
			::lime::ui::Window tmp4 = this->window;
			::lime::ui::Window tmp5 = tmp4;
			::lime::ui::Window tmp6 = window;
			tmp3 = (tmp5 != tmp6);
		}
		else{
			tmp3 = true;
		}
		if ((tmp3)){
			return null();
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Stage_obj,onWindowMinimize,(void))

Void Stage_obj::onWindowMove( ::lime::ui::Window window,Float x,Float y){
{
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC3(Stage_obj,onWindowMove,(void))

Void Stage_obj::onWindowResize( ::lime::ui::Window window,int width,int height){
{
		::lime::ui::Window tmp = this->window;
		bool tmp1 = (tmp == null());
		bool tmp2 = !(tmp1);
		bool tmp3;
		if ((tmp2)){
			::lime::ui::Window tmp4 = this->window;
			::lime::ui::Window tmp5 = tmp4;
			::lime::ui::Window tmp6 = window;
			tmp3 = (tmp5 != tmp6);
		}
		else{
			tmp3 = true;
		}
		if ((tmp3)){
			return null();
		}
		try
		{
		HX_STACK_CATCHABLE(Dynamic, 0);
		{
			this->__renderDirty = true;
			this->__resize();
			Dynamic tmp4 = this->__displayState;
			bool tmp5 = (tmp4 != ((Dynamic)((int)2)));
			bool tmp6;
			if ((tmp5)){
				bool tmp7 = window->__fullscreen;
				bool tmp8 = tmp7;
				tmp6 = !(tmp8);
			}
			else{
				tmp6 = false;
			}
			if ((tmp6)){
				this->__displayState = ((Dynamic)((int)2));
				::openfl::events::FullScreenEvent tmp7 = ::openfl::events::FullScreenEvent_obj::__new(HX_HCSTRING("fullScreen","\x5b","\xae","\x48","\x2e"),false,false,true,true);
				this->__dispatchEvent(tmp7);
			}
		}
		}
		catch(Dynamic __e){
			{
				HX_STACK_BEGIN_CATCH
				Dynamic e = __e;{
					Dynamic tmp4 = e;
					this->__handleError(tmp4);
				}
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC3(Stage_obj,onWindowResize,(void))

Void Stage_obj::onWindowRestore( ::lime::ui::Window window){
{
		::lime::ui::Window tmp = this->window;
		bool tmp1 = (tmp == null());
		bool tmp2 = !(tmp1);
		bool tmp3;
		if ((tmp2)){
			::lime::ui::Window tmp4 = this->window;
			::lime::ui::Window tmp5 = tmp4;
			::lime::ui::Window tmp6 = window;
			tmp3 = (tmp5 != tmp6);
		}
		else{
			tmp3 = true;
		}
		if ((tmp3)){
			return null();
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Stage_obj,onWindowRestore,(void))

Void Stage_obj::render( ::lime::graphics::Renderer renderer){
{
		bool tmp = (renderer->window == null());
		bool tmp1 = !(tmp);
		bool tmp2;
		if ((tmp1)){
			::lime::ui::Window tmp3 = renderer->window;
			::lime::ui::Window tmp4 = this->window;
			::lime::ui::Window tmp5 = tmp4;
			tmp2 = (tmp3 != tmp5);
		}
		else{
			tmp2 = true;
		}
		if ((tmp2)){
			return null();
		}
		try
		{
		HX_STACK_CATCHABLE(Dynamic, 0);
		{
			bool tmp3 = this->__rendering;
			if ((tmp3)){
				return null();
			}
			this->__rendering = true;
			::openfl::_internal::renderer::AbstractRenderer tmp4 = this->__renderer;
			bool tmp5 = (tmp4 != null());
			bool tmp6;
			if ((tmp5)){
				tmp6 = ::openfl::display::Stage3D_obj::__active;
			}
			else{
				tmp6 = false;
			}
			if ((tmp6)){
				::openfl::_internal::renderer::AbstractRenderer tmp7 = this->__renderer;
				tmp7->clear();
				::openfl::_internal::renderer::AbstractRenderer tmp8 = this->__renderer;
				tmp8->renderStage3D();
				this->__renderDirty = true;
			}
			::openfl::events::Event tmp7 = ::openfl::events::Event_obj::__new(HX_HCSTRING("enterFrame","\xf5","\x03","\x50","\x02"),null(),null());
			this->__broadcastEvent(tmp7);
			::openfl::events::Event tmp8 = ::openfl::events::Event_obj::__new(HX_HCSTRING("frameConstructed","\x09","\x89","\x5d","\x98"),null(),null());
			this->__broadcastEvent(tmp8);
			::openfl::events::Event tmp9 = ::openfl::events::Event_obj::__new(HX_HCSTRING("exitFrame","\x2f","\x64","\x48","\x12"),null(),null());
			this->__broadcastEvent(tmp9);
			bool tmp10 = this->__invalidated;
			if ((tmp10)){
				this->__invalidated = false;
				::openfl::events::Event tmp11 = ::openfl::events::Event_obj::__new(HX_HCSTRING("render","\x56","\x6b","\x29","\x05"),null(),null());
				this->__broadcastEvent(tmp11);
			}
			this->__renderable = true;
			int tmp11 = this->__deltaTime;
			this->__enterFrame(tmp11);
			this->__deltaTime = (int)0;
			this->__update(false,true,null());
			::openfl::_internal::renderer::AbstractRenderer tmp12 = this->__renderer;
			bool tmp13 = (tmp12 != null());
			if ((tmp13)){
				bool tmp14 = ::openfl::display::Stage3D_obj::__active;
				bool tmp15 = !(tmp14);
				if ((tmp15)){
					::openfl::_internal::renderer::AbstractRenderer tmp16 = this->__renderer;
					tmp16->clear();
				}
				bool tmp16 = (renderer->type == ::lime::graphics::RendererType_obj::CAIRO);
				if ((tmp16)){
					{
						::lime::graphics::RenderContext _g = renderer->context;
						switch( (int)(_g->__Index())){
							case (int)4: {
								::lime::graphics::cairo::Cairo tmp17 = (::lime::graphics::RenderContext(_g))->__Param(0);
								::lime::graphics::cairo::Cairo cairo = tmp17;
								{
									::openfl::_internal::renderer::AbstractRenderer tmp18 = this->__renderer;
									::openfl::_internal::renderer::cairo::CairoRenderer tmp19;
									tmp19 = hx::TCast< ::openfl::_internal::renderer::cairo::CairoRenderer >::cast(tmp18);
									tmp19->cairo = cairo;
									::openfl::_internal::renderer::AbstractRenderer tmp20 = this->__renderer;
									tmp20->renderSession->cairo = cairo;
								}
							}
							;break;
							default: {
							}
						}
					}
				}
				::openfl::_internal::renderer::AbstractRenderer tmp17 = this->__renderer;
				tmp17->render();
			}
			else{
				renderer->onRender->cancel();
			}
			this->__rendering = false;
		}
		}
		catch(Dynamic __e){
			{
				HX_STACK_BEGIN_CATCH
				Dynamic e = __e;{
					Dynamic tmp3 = e;
					this->__handleError(tmp3);
				}
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Stage_obj,render,(void))

Void Stage_obj::update( int deltaTime){
{
		this->__deltaTime = deltaTime;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Stage_obj,update,(void))

Void Stage_obj::__broadcastEvent( ::openfl::events::Event event){
{
		::haxe::ds::StringMap tmp = ::openfl::display::DisplayObject_obj::__broadcastEvents;
		::String tmp1 = event->type;
		bool tmp2 = tmp->exists(tmp1);
		if ((tmp2)){
			::haxe::ds::StringMap tmp3 = ::openfl::display::DisplayObject_obj::__broadcastEvents;
			::String tmp4 = event->type;
			Array< ::Dynamic > dispatchers = ((Array< ::Dynamic >)(tmp3->get(tmp4)));
			{
				int _g = (int)0;
				while((true)){
					bool tmp5 = (_g < dispatchers->length);
					bool tmp6 = !(tmp5);
					if ((tmp6)){
						break;
					}
					::openfl::display::DisplayObject tmp7 = dispatchers->__get(_g).StaticCast< ::openfl::display::DisplayObject >();
					::openfl::display::DisplayObject dispatcher = tmp7;
					++(_g);
					::openfl::events::Event tmp8 = event;
					dispatcher->__dispatch(tmp8);
				}
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Stage_obj,__broadcastEvent,(void))

Void Stage_obj::__createRenderer( ){
{
		{
			::lime::ui::Window tmp = this->window;
			::lime::graphics::RenderContext tmp1 = tmp->renderer->context;
			::lime::graphics::RenderContext _g = tmp1;
			switch( (int)(_g->__Index())){
				case (int)0: {
					::lime::_backend::native::NativeGLRenderContext tmp2 = (::lime::graphics::RenderContext(_g))->__Param(0);
					::lime::_backend::native::NativeGLRenderContext gl = tmp2;
					{
						::openfl::_internal::renderer::opengl::GLRenderer tmp3 = ::openfl::_internal::renderer::opengl::GLRenderer_obj::__new(hx::ObjectPtr<OBJ_>(this),gl,null());
						this->__renderer = tmp3;
					}
				}
				;break;
				case (int)1: {
					::lime::graphics::CanvasRenderContext tmp2 = (::lime::graphics::RenderContext(_g))->__Param(0);
					::lime::graphics::CanvasRenderContext context = tmp2;
					{
						::openfl::_internal::renderer::canvas::CanvasRenderer tmp3 = ::openfl::_internal::renderer::canvas::CanvasRenderer_obj::__new(hx::ObjectPtr<OBJ_>(this),context);
						this->__renderer = tmp3;
					}
				}
				;break;
				case (int)2: {
					::lime::graphics::DOMRenderContext tmp2 = (::lime::graphics::RenderContext(_g))->__Param(0);
					::lime::graphics::DOMRenderContext element = tmp2;
					{
					}
				}
				;break;
				case (int)4: {
					::lime::graphics::cairo::Cairo tmp2 = (::lime::graphics::RenderContext(_g))->__Param(0);
					::lime::graphics::cairo::Cairo cairo = tmp2;
					{
						::openfl::_internal::renderer::cairo::CairoRenderer tmp3 = ::openfl::_internal::renderer::cairo::CairoRenderer_obj::__new(hx::ObjectPtr<OBJ_>(this),cairo);
						this->__renderer = tmp3;
					}
				}
				;break;
				case (int)5: {
					::lime::graphics::ConsoleRenderContext tmp2 = (::lime::graphics::RenderContext(_g))->__Param(0);
					::lime::graphics::ConsoleRenderContext ctx = tmp2;
					{
					}
				}
				;break;
				default: {
				}
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(Stage_obj,__createRenderer,(void))

Void Stage_obj::__drag( ::openfl::geom::Point mouse){
{
		::openfl::display::Sprite tmp = this->__dragObject;
		::openfl::display::DisplayObjectContainer parent = tmp->parent;
		bool tmp1 = (parent != null());
		if ((tmp1)){
			::openfl::geom::Matrix tmp2 = parent->__getWorldTransform();
			::openfl::geom::Matrix _this = tmp2;
			Float tmp3 = (_this->a * _this->d);
			Float tmp4 = (_this->b * _this->c);
			Float tmp5 = (tmp3 - tmp4);
			Float norm = tmp5;
			bool tmp6 = (norm == (int)0);
			if ((tmp6)){
				Float tmp7 = _this->tx;
				Float tmp8 = -(tmp7);
				mouse->x = tmp8;
				Float tmp9 = _this->ty;
				Float tmp10 = -(tmp9);
				mouse->y = tmp10;
			}
			else{
				Float tmp7 = (Float(((Float)1.0)) / Float(norm));
				Float tmp8 = _this->c;
				Float tmp9 = (_this->ty - mouse->y);
				Float tmp10 = (tmp8 * tmp9);
				Float tmp11 = _this->d;
				Float tmp12 = (mouse->x - _this->tx);
				Float tmp13 = (tmp11 * tmp12);
				Float tmp14 = (tmp10 + tmp13);
				Float tmp15 = (tmp7 * tmp14);
				Float px = tmp15;
				Float tmp16 = (Float(((Float)1.0)) / Float(norm));
				Float tmp17 = _this->a;
				Float tmp18 = (mouse->y - _this->ty);
				Float tmp19 = (tmp17 * tmp18);
				Float tmp20 = _this->b;
				Float tmp21 = (_this->tx - mouse->x);
				Float tmp22 = (tmp20 * tmp21);
				Float tmp23 = (tmp19 + tmp22);
				Float tmp24 = (tmp16 * tmp23);
				mouse->y = tmp24;
				mouse->x = px;
			}
		}
		Float tmp2 = mouse->x;
		Float tmp3 = this->__dragOffsetX;
		Float tmp4 = (tmp2 + tmp3);
		Float x = tmp4;
		Float tmp5 = mouse->y;
		Float tmp6 = this->__dragOffsetY;
		Float tmp7 = (tmp5 + tmp6);
		Float y = tmp7;
		::openfl::geom::Rectangle tmp8 = this->__dragBounds;
		bool tmp9 = (tmp8 != null());
		if ((tmp9)){
			Float tmp10 = x;
			::openfl::geom::Rectangle tmp11 = this->__dragBounds;
			Float tmp12 = tmp11->x;
			bool tmp13 = (tmp10 < tmp12);
			if ((tmp13)){
				::openfl::geom::Rectangle tmp14 = this->__dragBounds;
				x = tmp14->x;
			}
			else{
				Float tmp14 = x;
				::openfl::geom::Rectangle tmp15 = this->__dragBounds;
				Float tmp16 = tmp15->get_right();
				bool tmp17 = (tmp14 > tmp16);
				if ((tmp17)){
					::openfl::geom::Rectangle tmp18 = this->__dragBounds;
					Float tmp19 = tmp18->get_right();
					x = tmp19;
				}
			}
			Float tmp14 = y;
			::openfl::geom::Rectangle tmp15 = this->__dragBounds;
			Float tmp16 = tmp15->y;
			bool tmp17 = (tmp14 < tmp16);
			if ((tmp17)){
				::openfl::geom::Rectangle tmp18 = this->__dragBounds;
				y = tmp18->y;
			}
			else{
				Float tmp18 = y;
				::openfl::geom::Rectangle tmp19 = this->__dragBounds;
				Float tmp20 = tmp19->get_bottom();
				bool tmp21 = (tmp18 > tmp20);
				if ((tmp21)){
					::openfl::geom::Rectangle tmp22 = this->__dragBounds;
					Float tmp23 = tmp22->get_bottom();
					y = tmp23;
				}
			}
		}
		::openfl::display::Sprite tmp10 = this->__dragObject;
		Float tmp11 = x;
		tmp10->set_x(tmp11);
		::openfl::display::Sprite tmp12 = this->__dragObject;
		Float tmp13 = y;
		tmp12->set_y(tmp13);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Stage_obj,__drag,(void))

bool Stage_obj::__getInteractive( Array< ::Dynamic > stack){
	bool tmp = (stack != null());
	if ((tmp)){
		stack->push(hx::ObjectPtr<OBJ_>(this));
	}
	return true;
}


Void Stage_obj::__handleError( Dynamic e){
{
		::openfl::events::UncaughtErrorEvent tmp = ::openfl::events::UncaughtErrorEvent_obj::__new(HX_HCSTRING("uncaughtError","\xf3","\x98","\x8b","\x8b"),true,true,e);
		::openfl::events::UncaughtErrorEvent event = tmp;
		::openfl::display::MovieClip tmp1 = ::openfl::Lib_obj::current;
		::openfl::events::UncaughtErrorEvents tmp2 = tmp1->__loaderInfo->uncaughtErrorEvents;
		::openfl::events::UncaughtErrorEvent tmp3 = event;
		tmp2->dispatchEvent(tmp3);
		bool tmp4 = event->__preventDefault;
		bool tmp5 = !(tmp4);
		if ((tmp5)){
			throw e;
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Stage_obj,__handleError,(void))

Void Stage_obj::__onKey( ::String type,int keyCode,int modifier){
{
		int tmp = modifier;
		bool tmp1 = ::lime::ui::_KeyModifier::KeyModifier_Impl__obj::get_altKey(tmp);
		::openfl::events::MouseEvent_obj::__altKey = tmp1;
		int tmp2 = modifier;
		bool tmp3 = ::lime::ui::_KeyModifier::KeyModifier_Impl__obj::get_metaKey(tmp2);
		::openfl::events::MouseEvent_obj::__commandKey = tmp3;
		int tmp4 = modifier;
		bool tmp5 = ::lime::ui::_KeyModifier::KeyModifier_Impl__obj::get_ctrlKey(tmp4);
		::openfl::events::MouseEvent_obj::__ctrlKey = tmp5;
		int tmp6 = modifier;
		bool tmp7 = ::lime::ui::_KeyModifier::KeyModifier_Impl__obj::get_shiftKey(tmp6);
		::openfl::events::MouseEvent_obj::__shiftKey = tmp7;
		Array< ::Dynamic > stack = Array_obj< ::Dynamic >::__new();
		::openfl::display::InteractiveObject tmp8 = this->__focus;
		bool tmp9 = (tmp8 == null());
		if ((tmp9)){
			this->__getInteractive(stack);
		}
		else{
			::openfl::display::InteractiveObject tmp10 = this->__focus;
			tmp10->__getInteractive(stack);
		}
		bool tmp10 = (stack->length > (int)0);
		if ((tmp10)){
			int tmp11 = keyCode;
			int tmp12;
			switch( (int)(tmp11)){
				case (int)1073742048: case (int)1073742049: case (int)1073742050: case (int)1073742051: {
					tmp12 = (int)1;
				}
				;break;
				case (int)1073742052: case (int)1073742053: case (int)1073742054: case (int)1073742055: {
					tmp12 = (int)2;
				}
				;break;
				case (int)1073741908: case (int)1073741909: case (int)1073741910: case (int)1073741911: case (int)1073741912: case (int)1073741913: case (int)1073741914: case (int)1073741915: case (int)1073741916: case (int)1073741917: case (int)1073741918: case (int)1073741919: case (int)1073741920: case (int)1073741921: case (int)1073741922: case (int)1073741923: case (int)1073742044: {
					tmp12 = (int)3;
				}
				;break;
				default: {
					tmp12 = (int)0;
				}
			}
			int keyLocation = tmp12;
			int tmp13 = keyCode;
			int tmp14;
			switch( (int)(tmp13)){
				case (int)8: {
					tmp14 = (int)8;
				}
				;break;
				case (int)9: {
					tmp14 = (int)9;
				}
				;break;
				case (int)13: {
					tmp14 = (int)13;
				}
				;break;
				case (int)27: {
					tmp14 = (int)27;
				}
				;break;
				case (int)32: {
					tmp14 = (int)32;
				}
				;break;
				case (int)33: {
					tmp14 = (int)49;
				}
				;break;
				case (int)34: {
					tmp14 = (int)222;
				}
				;break;
				case (int)35: {
					tmp14 = (int)51;
				}
				;break;
				case (int)36: {
					tmp14 = (int)52;
				}
				;break;
				case (int)37: {
					tmp14 = (int)53;
				}
				;break;
				case (int)38: {
					tmp14 = (int)55;
				}
				;break;
				case (int)39: {
					tmp14 = (int)222;
				}
				;break;
				case (int)40: {
					tmp14 = (int)57;
				}
				;break;
				case (int)41: {
					tmp14 = (int)48;
				}
				;break;
				case (int)42: {
					tmp14 = (int)56;
				}
				;break;
				case (int)44: {
					tmp14 = (int)188;
				}
				;break;
				case (int)45: {
					tmp14 = (int)189;
				}
				;break;
				case (int)46: {
					tmp14 = (int)190;
				}
				;break;
				case (int)47: {
					tmp14 = (int)191;
				}
				;break;
				case (int)48: {
					tmp14 = (int)48;
				}
				;break;
				case (int)49: {
					tmp14 = (int)49;
				}
				;break;
				case (int)50: {
					tmp14 = (int)50;
				}
				;break;
				case (int)51: {
					tmp14 = (int)51;
				}
				;break;
				case (int)52: {
					tmp14 = (int)52;
				}
				;break;
				case (int)53: {
					tmp14 = (int)53;
				}
				;break;
				case (int)54: {
					tmp14 = (int)54;
				}
				;break;
				case (int)55: {
					tmp14 = (int)55;
				}
				;break;
				case (int)56: {
					tmp14 = (int)56;
				}
				;break;
				case (int)57: {
					tmp14 = (int)57;
				}
				;break;
				case (int)58: {
					tmp14 = (int)186;
				}
				;break;
				case (int)59: {
					tmp14 = (int)186;
				}
				;break;
				case (int)60: {
					tmp14 = (int)60;
				}
				;break;
				case (int)61: {
					tmp14 = (int)187;
				}
				;break;
				case (int)62: {
					tmp14 = (int)190;
				}
				;break;
				case (int)63: {
					tmp14 = (int)191;
				}
				;break;
				case (int)64: {
					tmp14 = (int)50;
				}
				;break;
				case (int)91: {
					tmp14 = (int)219;
				}
				;break;
				case (int)92: {
					tmp14 = (int)220;
				}
				;break;
				case (int)93: {
					tmp14 = (int)221;
				}
				;break;
				case (int)94: {
					tmp14 = (int)54;
				}
				;break;
				case (int)95: {
					tmp14 = (int)189;
				}
				;break;
				case (int)96: {
					tmp14 = (int)192;
				}
				;break;
				case (int)97: {
					tmp14 = (int)65;
				}
				;break;
				case (int)98: {
					tmp14 = (int)66;
				}
				;break;
				case (int)99: {
					tmp14 = (int)67;
				}
				;break;
				case (int)100: {
					tmp14 = (int)68;
				}
				;break;
				case (int)101: {
					tmp14 = (int)69;
				}
				;break;
				case (int)102: {
					tmp14 = (int)70;
				}
				;break;
				case (int)103: {
					tmp14 = (int)71;
				}
				;break;
				case (int)104: {
					tmp14 = (int)72;
				}
				;break;
				case (int)105: {
					tmp14 = (int)73;
				}
				;break;
				case (int)106: {
					tmp14 = (int)74;
				}
				;break;
				case (int)107: {
					tmp14 = (int)75;
				}
				;break;
				case (int)108: {
					tmp14 = (int)76;
				}
				;break;
				case (int)109: {
					tmp14 = (int)77;
				}
				;break;
				case (int)110: {
					tmp14 = (int)78;
				}
				;break;
				case (int)111: {
					tmp14 = (int)79;
				}
				;break;
				case (int)112: {
					tmp14 = (int)80;
				}
				;break;
				case (int)113: {
					tmp14 = (int)81;
				}
				;break;
				case (int)114: {
					tmp14 = (int)82;
				}
				;break;
				case (int)115: {
					tmp14 = (int)83;
				}
				;break;
				case (int)116: {
					tmp14 = (int)84;
				}
				;break;
				case (int)117: {
					tmp14 = (int)85;
				}
				;break;
				case (int)118: {
					tmp14 = (int)86;
				}
				;break;
				case (int)119: {
					tmp14 = (int)87;
				}
				;break;
				case (int)120: {
					tmp14 = (int)88;
				}
				;break;
				case (int)121: {
					tmp14 = (int)89;
				}
				;break;
				case (int)122: {
					tmp14 = (int)90;
				}
				;break;
				case (int)127: {
					tmp14 = (int)46;
				}
				;break;
				case (int)1073741881: {
					tmp14 = (int)20;
				}
				;break;
				case (int)1073741882: {
					tmp14 = (int)112;
				}
				;break;
				case (int)1073741883: {
					tmp14 = (int)113;
				}
				;break;
				case (int)1073741884: {
					tmp14 = (int)114;
				}
				;break;
				case (int)1073741885: {
					tmp14 = (int)115;
				}
				;break;
				case (int)1073741886: {
					tmp14 = (int)116;
				}
				;break;
				case (int)1073741887: {
					tmp14 = (int)117;
				}
				;break;
				case (int)1073741888: {
					tmp14 = (int)118;
				}
				;break;
				case (int)1073741889: {
					tmp14 = (int)119;
				}
				;break;
				case (int)1073741890: {
					tmp14 = (int)120;
				}
				;break;
				case (int)1073741891: {
					tmp14 = (int)121;
				}
				;break;
				case (int)1073741892: {
					tmp14 = (int)122;
				}
				;break;
				case (int)1073741893: {
					tmp14 = (int)123;
				}
				;break;
				case (int)1073741894: {
					tmp14 = (int)301;
				}
				;break;
				case (int)1073741895: {
					tmp14 = (int)145;
				}
				;break;
				case (int)1073741896: {
					tmp14 = (int)19;
				}
				;break;
				case (int)1073741897: {
					tmp14 = (int)45;
				}
				;break;
				case (int)1073741898: {
					tmp14 = (int)36;
				}
				;break;
				case (int)1073741899: {
					tmp14 = (int)33;
				}
				;break;
				case (int)1073741901: {
					tmp14 = (int)35;
				}
				;break;
				case (int)1073741902: {
					tmp14 = (int)34;
				}
				;break;
				case (int)1073741903: {
					tmp14 = (int)39;
				}
				;break;
				case (int)1073741904: {
					tmp14 = (int)37;
				}
				;break;
				case (int)1073741905: {
					tmp14 = (int)40;
				}
				;break;
				case (int)1073741906: {
					tmp14 = (int)38;
				}
				;break;
				case (int)1073741907: {
					tmp14 = (int)144;
				}
				;break;
				case (int)1073741908: {
					tmp14 = (int)111;
				}
				;break;
				case (int)1073741909: {
					tmp14 = (int)106;
				}
				;break;
				case (int)1073741910: {
					tmp14 = (int)109;
				}
				;break;
				case (int)1073741911: {
					tmp14 = (int)107;
				}
				;break;
				case (int)1073741912: {
					tmp14 = (int)108;
				}
				;break;
				case (int)1073741913: {
					tmp14 = (int)97;
				}
				;break;
				case (int)1073741914: {
					tmp14 = (int)98;
				}
				;break;
				case (int)1073741915: {
					tmp14 = (int)99;
				}
				;break;
				case (int)1073741916: {
					tmp14 = (int)100;
				}
				;break;
				case (int)1073741917: {
					tmp14 = (int)101;
				}
				;break;
				case (int)1073741918: {
					tmp14 = (int)102;
				}
				;break;
				case (int)1073741919: {
					tmp14 = (int)103;
				}
				;break;
				case (int)1073741920: {
					tmp14 = (int)104;
				}
				;break;
				case (int)1073741921: {
					tmp14 = (int)105;
				}
				;break;
				case (int)1073741922: {
					tmp14 = (int)96;
				}
				;break;
				case (int)1073741923: {
					tmp14 = (int)110;
				}
				;break;
				case (int)1073741925: {
					tmp14 = (int)302;
				}
				;break;
				case (int)1073741928: {
					tmp14 = (int)124;
				}
				;break;
				case (int)1073741929: {
					tmp14 = (int)125;
				}
				;break;
				case (int)1073741930: {
					tmp14 = (int)126;
				}
				;break;
				case (int)1073741982: {
					tmp14 = (int)13;
				}
				;break;
				case (int)1073742044: {
					tmp14 = (int)110;
				}
				;break;
				case (int)1073742048: {
					tmp14 = (int)17;
				}
				;break;
				case (int)1073742049: {
					tmp14 = (int)16;
				}
				;break;
				case (int)1073742050: {
					tmp14 = (int)18;
				}
				;break;
				case (int)1073742051: {
					tmp14 = (int)15;
				}
				;break;
				case (int)1073742052: {
					tmp14 = (int)17;
				}
				;break;
				case (int)1073742053: {
					tmp14 = (int)16;
				}
				;break;
				case (int)1073742054: {
					tmp14 = (int)18;
				}
				;break;
				case (int)1073742055: {
					tmp14 = (int)15;
				}
				;break;
				default: {
					tmp14 = keyCode;
				}
			}
			int keyCode1 = tmp14;
			int tmp15 = keyCode1;
			int tmp16 = modifier;
			bool tmp17 = ::lime::ui::_KeyModifier::KeyModifier_Impl__obj::get_shiftKey(tmp16);
			int tmp18 = ::openfl::ui::Keyboard_obj::__getCharCode(tmp15,tmp17);
			int charCode = tmp18;
			::String tmp19 = type;
			int tmp20 = charCode;
			int tmp21 = keyCode1;
			int tmp22 = keyLocation;
			bool tmp23 = this->__macKeyboard;
			bool tmp24;
			if ((tmp23)){
				int tmp25 = modifier;
				int tmp26 = tmp25;
				bool tmp27 = ::lime::ui::_KeyModifier::KeyModifier_Impl__obj::get_ctrlKey(tmp26);
				bool tmp28 = !(tmp27);
				if ((tmp28)){
					int tmp29 = modifier;
					int tmp30 = tmp29;
					tmp24 = ::lime::ui::_KeyModifier::KeyModifier_Impl__obj::get_metaKey(tmp30);
				}
				else{
					tmp24 = true;
				}
			}
			else{
				int tmp25 = modifier;
				tmp24 = ::lime::ui::_KeyModifier::KeyModifier_Impl__obj::get_ctrlKey(tmp25);
			}
			int tmp25 = modifier;
			bool tmp26 = ::lime::ui::_KeyModifier::KeyModifier_Impl__obj::get_altKey(tmp25);
			int tmp27 = modifier;
			bool tmp28 = ::lime::ui::_KeyModifier::KeyModifier_Impl__obj::get_shiftKey(tmp27);
			int tmp29 = modifier;
			bool tmp30 = ::lime::ui::_KeyModifier::KeyModifier_Impl__obj::get_ctrlKey(tmp29);
			int tmp31 = modifier;
			bool tmp32 = ::lime::ui::_KeyModifier::KeyModifier_Impl__obj::get_metaKey(tmp31);
			::openfl::events::KeyboardEvent tmp33 = ::openfl::events::KeyboardEvent_obj::__new(tmp19,true,true,tmp20,tmp21,tmp22,tmp24,tmp26,tmp28,tmp30,tmp32);
			::openfl::events::KeyboardEvent event = tmp33;
			stack->reverse();
			::openfl::events::KeyboardEvent tmp34 = event;
			this->__dispatchStack(tmp34,stack);
			bool tmp35 = event->__preventDefault;
			if ((tmp35)){
				bool tmp36 = (type == HX_HCSTRING("keyDown","\xa1","\x69","\x47","\x9c"));
				if ((tmp36)){
					::lime::ui::Window tmp37 = this->window;
					tmp37->onKeyDown->cancel();
				}
				else{
					::lime::ui::Window tmp37 = this->window;
					tmp37->onKeyUp->cancel();
				}
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC3(Stage_obj,__onKey,(void))

Void Stage_obj::__onGamepadConnect( ::lime::ui::Gamepad gamepad){
{
		::lime::ui::Gamepad tmp = gamepad;
		this->onGamepadConnect(tmp);
		Dynamic tmp1 = this->onGamepadAxisMove_dyn();
		::lime::ui::Gamepad tmp2 = gamepad;
		Dynamic tmp3;
		{
			Dynamic f = tmp1;
			::lime::ui::Gamepad a1 = tmp2;

			HX_BEGIN_LOCAL_FUNC_S2(hx::LocalFunc,_Function_2_1,::lime::ui::Gamepad,a1,Dynamic,f)
			int __ArgCount() const { return 2; }
			Void run(int a2,Float a3){
				{
					::lime::ui::Gamepad tmp4 = a1;
					int tmp5 = a2;
					Float tmp6 = a3;
					f(tmp4,tmp5,tmp6).Cast< Void >();
				}
				return null();
			}
			HX_END_LOCAL_FUNC2((void))

			tmp3 =  Dynamic(new _Function_2_1(a1,f));
		}
		gamepad->onAxisMove->add(tmp3,null(),null());
		Dynamic tmp4 = this->onGamepadButtonDown_dyn();
		::lime::ui::Gamepad tmp5 = gamepad;
		Dynamic tmp6;
		{
			Dynamic f = tmp4;
			::lime::ui::Gamepad a1 = tmp5;

			HX_BEGIN_LOCAL_FUNC_S2(hx::LocalFunc,_Function_2_1,::lime::ui::Gamepad,a1,Dynamic,f)
			int __ArgCount() const { return 1; }
			Void run(int a2){
				{
					::lime::ui::Gamepad tmp7 = a1;
					int tmp8 = a2;
					f(tmp7,tmp8).Cast< Void >();
				}
				return null();
			}
			HX_END_LOCAL_FUNC1((void))

			tmp6 =  Dynamic(new _Function_2_1(a1,f));
		}
		gamepad->onButtonDown->add(tmp6,null(),null());
		Dynamic tmp7 = this->onGamepadButtonUp_dyn();
		::lime::ui::Gamepad tmp8 = gamepad;
		Dynamic tmp9;
		{
			Dynamic f = tmp7;
			::lime::ui::Gamepad a1 = tmp8;

			HX_BEGIN_LOCAL_FUNC_S2(hx::LocalFunc,_Function_2_1,::lime::ui::Gamepad,a1,Dynamic,f)
			int __ArgCount() const { return 1; }
			Void run(int a2){
				{
					::lime::ui::Gamepad tmp10 = a1;
					int tmp11 = a2;
					f(tmp10,tmp11).Cast< Void >();
				}
				return null();
			}
			HX_END_LOCAL_FUNC1((void))

			tmp9 =  Dynamic(new _Function_2_1(a1,f));
		}
		gamepad->onButtonUp->add(tmp9,null(),null());
		Dynamic tmp10 = this->onGamepadDisconnect_dyn();
		::lime::ui::Gamepad tmp11 = gamepad;
		Dynamic tmp12;
		{
			Dynamic f = tmp10;
			::lime::ui::Gamepad a1 = tmp11;

			HX_BEGIN_LOCAL_FUNC_S2(hx::LocalFunc,_Function_2_1,::lime::ui::Gamepad,a1,Dynamic,f)
			int __ArgCount() const { return 0; }
			Void run(){
				{
					::lime::ui::Gamepad tmp13 = a1;
					f(tmp13).Cast< Void >();
				}
				return null();
			}
			HX_END_LOCAL_FUNC0((void))

			tmp12 =  Dynamic(new _Function_2_1(a1,f));
		}
		gamepad->onDisconnect->add(tmp12,null(),null());
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Stage_obj,__onGamepadConnect,(void))

Void Stage_obj::__onMouse( ::String type,Float x,Float y,int button){
{
		bool tmp = (button > (int)2);
		if ((tmp)){
			return null();
		}
		::openfl::geom::Point tmp1 = ::openfl::geom::Point_obj::__new(x,y);
		::openfl::geom::Point targetPoint = tmp1;
		{
			::openfl::geom::Matrix tmp2 = this->__displayMatrix;
			::openfl::geom::Matrix _this = tmp2;
			Float tmp3 = (_this->a * _this->d);
			Float tmp4 = (_this->b * _this->c);
			Float tmp5 = (tmp3 - tmp4);
			Float norm = tmp5;
			bool tmp6 = (norm == (int)0);
			if ((tmp6)){
				Float tmp7 = _this->tx;
				Float tmp8 = -(tmp7);
				targetPoint->x = tmp8;
				Float tmp9 = _this->ty;
				Float tmp10 = -(tmp9);
				targetPoint->y = tmp10;
			}
			else{
				Float tmp7 = (Float(((Float)1.0)) / Float(norm));
				Float tmp8 = _this->c;
				Float tmp9 = (_this->ty - targetPoint->y);
				Float tmp10 = (tmp8 * tmp9);
				Float tmp11 = _this->d;
				Float tmp12 = (targetPoint->x - _this->tx);
				Float tmp13 = (tmp11 * tmp12);
				Float tmp14 = (tmp10 + tmp13);
				Float tmp15 = (tmp7 * tmp14);
				Float px = tmp15;
				Float tmp16 = (Float(((Float)1.0)) / Float(norm));
				Float tmp17 = _this->a;
				Float tmp18 = (targetPoint->y - _this->ty);
				Float tmp19 = (tmp17 * tmp18);
				Float tmp20 = _this->b;
				Float tmp21 = (_this->tx - targetPoint->x);
				Float tmp22 = (tmp20 * tmp21);
				Float tmp23 = (tmp19 + tmp22);
				Float tmp24 = (tmp16 * tmp23);
				targetPoint->y = tmp24;
				targetPoint->x = px;
			}
		}
		this->__mouseX = targetPoint->x;
		this->__mouseY = targetPoint->y;
		Array< ::Dynamic > stack = Array_obj< ::Dynamic >::__new();
		::openfl::display::InteractiveObject target = null();
		Float tmp2 = this->__mouseX;
		Float tmp3 = this->__mouseY;
		bool tmp4 = this->__hitTest(tmp2,tmp3,true,stack,true,hx::ObjectPtr<OBJ_>(this));
		if ((tmp4)){
			int tmp5 = (stack->length - (int)1);
			::openfl::display::DisplayObject tmp6 = stack->__get(tmp5).StaticCast< ::openfl::display::DisplayObject >();
			target = ((::openfl::display::InteractiveObject)(tmp6));
		}
		else{
			target = hx::ObjectPtr<OBJ_>(this);
			stack = Array_obj< ::Dynamic >::__new().Add(hx::ObjectPtr<OBJ_>(this));
		}
		bool tmp5 = (target == null());
		if ((tmp5)){
			target = hx::ObjectPtr<OBJ_>(this);
		}
		::String clickType = null();
		::String tmp6 = type;
		::String _switch_1 = (tmp6);
		if (  ( _switch_1==HX_HCSTRING("mouseDown","\x27","\xb1","\xc2","\xee"))){
			bool tmp7 = target->get_tabEnabled();
			if ((tmp7)){
				::openfl::display::InteractiveObject tmp8 = target;
				this->set_focus(tmp8);
			}
			else{
				this->set_focus(null());
			}
			this->__mouseDownLeft = target;
		}
		else if (  ( _switch_1==HX_HCSTRING("middleMouseDown","\x12","\x2b","\xfe","\x01"))){
			this->__mouseDownMiddle = target;
		}
		else if (  ( _switch_1==HX_HCSTRING("rightMouseDown","\xab","\x29","\xd7","\xcd"))){
			this->__mouseDownRight = target;
		}
		else if (  ( _switch_1==HX_HCSTRING("mouseUp","\xe0","\xf3","\x72","\xc0"))){
			::openfl::display::InteractiveObject tmp7 = this->__mouseDownLeft;
			::openfl::display::InteractiveObject tmp8 = target;
			bool tmp9 = (tmp7 == tmp8);
			if ((tmp9)){
				clickType = HX_HCSTRING("click","\x48","\x7c","\x5e","\x48");
			}
			this->__mouseDownLeft = null();
		}
		else if (  ( _switch_1==HX_HCSTRING("middleMouseUp","\x0b","\x8d","\xf5","\x3a"))){
			::openfl::display::InteractiveObject tmp7 = this->__mouseDownMiddle;
			::openfl::display::InteractiveObject tmp8 = target;
			bool tmp9 = (tmp7 == tmp8);
			if ((tmp9)){
				clickType = HX_HCSTRING("middleClick","\xb3","\xe4","\xe5","\x43");
			}
			this->__mouseDownMiddle = null();
		}
		else if (  ( _switch_1==HX_HCSTRING("rightMouseUp","\x64","\x83","\x21","\xab"))){
			::openfl::display::InteractiveObject tmp7 = this->__mouseDownRight;
			::openfl::display::InteractiveObject tmp8 = target;
			bool tmp9 = (tmp7 == tmp8);
			if ((tmp9)){
				clickType = HX_HCSTRING("rightClick","\xcc","\x62","\x23","\x4b");
			}
			this->__mouseDownRight = null();
		}
		else  {
		}
;
;
		::String tmp7 = type;
		int tmp8 = button;
		Float tmp9 = this->__mouseX;
		Float tmp10 = this->__mouseY;
		bool tmp11 = (target == hx::ObjectPtr<OBJ_>(this));
		::openfl::geom::Point tmp12;
		if ((tmp11)){
			tmp12 = targetPoint;
		}
		else{
			::openfl::geom::Point tmp13 = targetPoint;
			tmp12 = target->globalToLocal(tmp13);
		}
		::openfl::display::InteractiveObject tmp13 = target;
		::openfl::events::MouseEvent tmp14 = ::openfl::events::MouseEvent_obj::__create(tmp7,tmp8,tmp9,tmp10,tmp12,tmp13,null());
		this->__dispatchStack(tmp14,stack);
		bool tmp15 = (clickType != null());
		if ((tmp15)){
			::String tmp16 = clickType;
			int tmp17 = button;
			Float tmp18 = this->__mouseX;
			Float tmp19 = this->__mouseY;
			bool tmp20 = (target == hx::ObjectPtr<OBJ_>(this));
			::openfl::geom::Point tmp21;
			if ((tmp20)){
				tmp21 = targetPoint;
			}
			else{
				::openfl::geom::Point tmp22 = targetPoint;
				tmp21 = target->globalToLocal(tmp22);
			}
			::openfl::display::InteractiveObject tmp22 = target;
			::openfl::events::MouseEvent tmp23 = ::openfl::events::MouseEvent_obj::__create(tmp16,tmp17,tmp18,tmp19,tmp21,tmp22,null());
			this->__dispatchStack(tmp23,stack);
			bool tmp24 = (type == HX_HCSTRING("mouseUp","\xe0","\xf3","\x72","\xc0"));
			bool tmp25;
			if ((tmp24)){
				::openfl::display::InteractiveObject tmp26;
				tmp26 = hx::TCast< ::openfl::display::InteractiveObject >::cast(target);
				::openfl::display::InteractiveObject tmp27 = tmp26;
				tmp25 = tmp27->doubleClickEnabled;
			}
			else{
				tmp25 = false;
			}
			if ((tmp25)){
				int tmp26 = ::openfl::Lib_obj::getTimer();
				int currentTime = tmp26;
				int tmp27 = currentTime;
				int tmp28 = this->__lastClickTime;
				int tmp29 = (tmp27 - tmp28);
				bool tmp30 = (tmp29 < (int)500);
				if ((tmp30)){
					int tmp31 = button;
					Float tmp32 = this->__mouseX;
					Float tmp33 = this->__mouseY;
					bool tmp34 = (target == hx::ObjectPtr<OBJ_>(this));
					::openfl::geom::Point tmp35;
					if ((tmp34)){
						tmp35 = targetPoint;
					}
					else{
						::openfl::geom::Point tmp36 = targetPoint;
						tmp35 = target->globalToLocal(tmp36);
					}
					::openfl::display::InteractiveObject tmp36 = target;
					::openfl::events::MouseEvent tmp37 = ::openfl::events::MouseEvent_obj::__create(HX_HCSTRING("doubleClick","\x77","\x03","\x76","\xcd"),tmp31,tmp32,tmp33,tmp35,tmp36,null());
					this->__dispatchStack(tmp37,stack);
					this->__lastClickTime = (int)0;
				}
				else{
					this->__lastClickTime = currentTime;
				}
			}
		}
		::String tmp16 = ::openfl::ui::Mouse_obj::__cursor;
		bool tmp17 = (tmp16 == HX_HCSTRING("auto","\x6f","\xdf","\x76","\x40"));
		if ((tmp17)){
			::lime::ui::MouseCursor cursor = null();
			::openfl::display::InteractiveObject tmp18 = this->__mouseDownLeft;
			bool tmp19 = (tmp18 != null());
			if ((tmp19)){
				::openfl::display::InteractiveObject tmp20 = this->__mouseDownLeft;
				::lime::ui::MouseCursor tmp21 = tmp20->__getCursor();
				cursor = tmp21;
			}
			else{
				int _g = (int)0;
				while((true)){
					bool tmp20 = (_g < stack->length);
					bool tmp21 = !(tmp20);
					if ((tmp21)){
						break;
					}
					::openfl::display::DisplayObject tmp22 = stack->__get(_g).StaticCast< ::openfl::display::DisplayObject >();
					::openfl::display::DisplayObject target1 = tmp22;
					++(_g);
					::lime::ui::MouseCursor tmp23 = target1->__getCursor();
					cursor = tmp23;
					bool tmp24 = (cursor != null());
					if ((tmp24)){
						::lime::ui::MouseCursor tmp25 = cursor;
						::lime::ui::Mouse_obj::set_cursor(tmp25);
						break;
					}
				}
			}
			bool tmp20 = (cursor == null());
			if ((tmp20)){
				::lime::ui::Mouse_obj::set_cursor(::lime::ui::MouseCursor_obj::ARROW);
			}
		}
		::openfl::events::MouseEvent event;
		::openfl::geom::Point localPoint;
		::openfl::display::InteractiveObject tmp18 = target;
		::openfl::display::InteractiveObject tmp19 = this->__mouseOverTarget;
		bool tmp20 = (tmp18 != tmp19);
		if ((tmp20)){
			::openfl::display::InteractiveObject tmp21 = this->__mouseOverTarget;
			bool tmp22 = (tmp21 != null());
			if ((tmp22)){
				::openfl::display::InteractiveObject tmp23 = this->__mouseOverTarget;
				bool tmp24 = (tmp23 == hx::ObjectPtr<OBJ_>(this));
				::openfl::geom::Point tmp25;
				if ((tmp24)){
					tmp25 = targetPoint;
				}
				else{
					::openfl::display::InteractiveObject tmp26 = this->__mouseOverTarget;
					::openfl::geom::Point tmp27 = targetPoint;
					tmp25 = tmp26->globalToLocal(tmp27);
				}
				localPoint = tmp25;
				int tmp26 = button;
				Float tmp27 = this->__mouseX;
				Float tmp28 = this->__mouseY;
				::openfl::geom::Point tmp29 = localPoint;
				::openfl::display::InteractiveObject tmp30 = this->__mouseOverTarget;
				::openfl::display::InteractiveObject tmp31 = tmp30;
				::openfl::events::MouseEvent tmp32 = ::openfl::events::MouseEvent_obj::__create(HX_HCSTRING("mouseOut","\x69","\xe7","\x1d","\xa4"),tmp26,tmp27,tmp28,tmp29,tmp31,null());
				event = tmp32;
				::openfl::display::InteractiveObject tmp33 = this->__mouseOverTarget;
				::openfl::events::MouseEvent tmp34 = event;
				tmp33->__dispatchEvent(tmp34);
			}
		}
		{
			int _g = (int)0;
			Array< ::Dynamic > _g1 = this->__rollOutStack;
			while((true)){
				bool tmp21 = (_g < _g1->length);
				bool tmp22 = !(tmp21);
				if ((tmp22)){
					break;
				}
				::openfl::display::DisplayObject tmp23 = _g1->__get(_g).StaticCast< ::openfl::display::DisplayObject >();
				::openfl::display::DisplayObject target1 = tmp23;
				++(_g);
				::openfl::display::DisplayObject tmp24 = target1;
				int tmp25 = stack->indexOf(tmp24,null());
				bool tmp26 = (tmp25 == (int)-1);
				if ((tmp26)){
					::openfl::display::DisplayObject tmp27 = target1;
					this->__rollOutStack->remove(tmp27);
					::openfl::display::InteractiveObject tmp28 = this->__mouseOverTarget;
					::openfl::geom::Point tmp29 = targetPoint;
					::openfl::geom::Point tmp30 = tmp28->globalToLocal(tmp29);
					localPoint = tmp30;
					int tmp31 = button;
					Float tmp32 = this->__mouseX;
					Float tmp33 = this->__mouseY;
					::openfl::geom::Point tmp34 = localPoint;
					::openfl::display::InteractiveObject tmp35 = this->__mouseOverTarget;
					::openfl::display::InteractiveObject tmp36 = tmp35;
					::openfl::events::MouseEvent tmp37 = ::openfl::events::MouseEvent_obj::__create(HX_HCSTRING("rollOut","\x11","\xf9","\x11","\x5d"),tmp31,tmp32,tmp33,tmp34,tmp36,null());
					event = tmp37;
					event->bubbles = false;
					::openfl::events::MouseEvent tmp38 = event;
					target1->__dispatchEvent(tmp38);
				}
			}
		}
		{
			int _g = (int)0;
			while((true)){
				bool tmp21 = (_g < stack->length);
				bool tmp22 = !(tmp21);
				if ((tmp22)){
					break;
				}
				::openfl::display::DisplayObject tmp23 = stack->__get(_g).StaticCast< ::openfl::display::DisplayObject >();
				::openfl::display::DisplayObject target1 = tmp23;
				++(_g);
				::openfl::display::DisplayObject tmp24 = target1;
				int tmp25 = this->__rollOutStack->indexOf(tmp24,null());
				bool tmp26 = (tmp25 == (int)-1);
				if ((tmp26)){
					bool tmp27 = target1->hasEventListener(HX_HCSTRING("rollOver","\x71","\xab","\xa8","\x12"));
					if ((tmp27)){
						::openfl::geom::Point tmp28 = targetPoint;
						::openfl::geom::Point tmp29 = target1->globalToLocal(tmp28);
						localPoint = tmp29;
						int tmp30 = button;
						Float tmp31 = this->__mouseX;
						Float tmp32 = this->__mouseY;
						::openfl::geom::Point tmp33 = localPoint;
						::openfl::display::InteractiveObject tmp34 = ((::openfl::display::InteractiveObject)(target1));
						::openfl::events::MouseEvent tmp35 = ::openfl::events::MouseEvent_obj::__create(HX_HCSTRING("rollOver","\x71","\xab","\xa8","\x12"),tmp30,tmp31,tmp32,tmp33,tmp34,null());
						event = tmp35;
						event->bubbles = false;
						::openfl::events::MouseEvent tmp36 = event;
						target1->__dispatchEvent(tmp36);
					}
					bool tmp28 = target1->hasEventListener(HX_HCSTRING("rollOut","\x11","\xf9","\x11","\x5d"));
					if ((tmp28)){
						::openfl::display::DisplayObject tmp29 = target1;
						this->__rollOutStack->push(tmp29);
					}
				}
			}
		}
		::openfl::display::InteractiveObject tmp21 = target;
		::openfl::display::InteractiveObject tmp22 = this->__mouseOverTarget;
		bool tmp23 = (tmp21 != tmp22);
		if ((tmp23)){
			bool tmp24 = (target != null());
			if ((tmp24)){
				bool tmp25 = (target == hx::ObjectPtr<OBJ_>(this));
				::openfl::geom::Point tmp26;
				if ((tmp25)){
					tmp26 = targetPoint;
				}
				else{
					::openfl::geom::Point tmp27 = targetPoint;
					tmp26 = target->globalToLocal(tmp27);
				}
				localPoint = tmp26;
				int tmp27 = button;
				Float tmp28 = this->__mouseX;
				Float tmp29 = this->__mouseY;
				::openfl::geom::Point tmp30 = localPoint;
				::openfl::display::InteractiveObject tmp31 = target;
				::openfl::events::MouseEvent tmp32 = ::openfl::events::MouseEvent_obj::__create(HX_HCSTRING("mouseOver","\x19","\x4a","\x0d","\xf6"),tmp27,tmp28,tmp29,tmp30,tmp31,null());
				event = tmp32;
				event->bubbles = true;
				::openfl::events::MouseEvent tmp33 = event;
				target->__dispatchEvent(tmp33);
			}
			this->__mouseOverTarget = target;
		}
		::openfl::display::Sprite tmp24 = this->__dragObject;
		bool tmp25 = (tmp24 != null());
		if ((tmp25)){
			::openfl::geom::Point tmp26 = targetPoint;
			this->__drag(tmp26);
			::openfl::display::DisplayObject dropTarget = null();
			::openfl::display::InteractiveObject tmp27 = this->__mouseOverTarget;
			::openfl::display::Sprite tmp28 = this->__dragObject;
			bool tmp29 = (tmp27 == tmp28);
			if ((tmp29)){
				::openfl::display::Sprite tmp30 = this->__dragObject;
				bool cacheMouseEnabled = tmp30->mouseEnabled;
				::openfl::display::Sprite tmp31 = this->__dragObject;
				bool cacheMouseChildren = tmp31->mouseChildren;
				::openfl::display::Sprite tmp32 = this->__dragObject;
				tmp32->mouseEnabled = false;
				::openfl::display::Sprite tmp33 = this->__dragObject;
				tmp33->mouseChildren = false;
				Array< ::Dynamic > stack1 = Array_obj< ::Dynamic >::__new();
				Float tmp34 = this->__mouseX;
				Float tmp35 = this->__mouseY;
				bool tmp36 = this->__hitTest(tmp34,tmp35,true,stack1,true,hx::ObjectPtr<OBJ_>(this));
				if ((tmp36)){
					int tmp37 = (stack1->length - (int)1);
					::openfl::display::DisplayObject tmp38 = stack1->__get(tmp37).StaticCast< ::openfl::display::DisplayObject >();
					dropTarget = tmp38;
				}
				::openfl::display::Sprite tmp37 = this->__dragObject;
				tmp37->mouseEnabled = cacheMouseEnabled;
				::openfl::display::Sprite tmp38 = this->__dragObject;
				tmp38->mouseChildren = cacheMouseChildren;
			}
			else{
				::openfl::display::InteractiveObject tmp30 = this->__mouseOverTarget;
				bool tmp31 = (tmp30 != hx::ObjectPtr<OBJ_>(this));
				if ((tmp31)){
					::openfl::display::InteractiveObject tmp32 = this->__mouseOverTarget;
					dropTarget = tmp32;
				}
			}
			::openfl::display::Sprite tmp30 = this->__dragObject;
			tmp30->dropTarget = dropTarget;
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC4(Stage_obj,__onMouse,(void))

Void Stage_obj::__onMouseWheel( Float deltaX,Float deltaY){
{
		Float tmp = this->__mouseX;
		Float x = tmp;
		Float tmp1 = this->__mouseY;
		Float y = tmp1;
		Array< ::Dynamic > stack = Array_obj< ::Dynamic >::__new();
		::openfl::display::InteractiveObject target = null();
		Float tmp2 = this->__mouseX;
		Float tmp3 = this->__mouseY;
		bool tmp4 = this->__hitTest(tmp2,tmp3,true,stack,true,hx::ObjectPtr<OBJ_>(this));
		if ((tmp4)){
			int tmp5 = (stack->length - (int)1);
			::openfl::display::DisplayObject tmp6 = stack->__get(tmp5).StaticCast< ::openfl::display::DisplayObject >();
			target = ((::openfl::display::InteractiveObject)(tmp6));
		}
		else{
			target = hx::ObjectPtr<OBJ_>(this);
			stack = Array_obj< ::Dynamic >::__new().Add(hx::ObjectPtr<OBJ_>(this));
		}
		bool tmp5 = (target == null());
		if ((tmp5)){
			target = hx::ObjectPtr<OBJ_>(this);
		}
		::openfl::geom::Point tmp6 = ::openfl::geom::Point_obj::__new(x,y);
		::openfl::geom::Point targetPoint = tmp6;
		{
			::openfl::geom::Matrix tmp7 = this->__displayMatrix;
			::openfl::geom::Matrix _this = tmp7;
			Float tmp8 = (_this->a * _this->d);
			Float tmp9 = (_this->b * _this->c);
			Float tmp10 = (tmp8 - tmp9);
			Float norm = tmp10;
			bool tmp11 = (norm == (int)0);
			if ((tmp11)){
				Float tmp12 = _this->tx;
				Float tmp13 = -(tmp12);
				targetPoint->x = tmp13;
				Float tmp14 = _this->ty;
				Float tmp15 = -(tmp14);
				targetPoint->y = tmp15;
			}
			else{
				Float tmp12 = (Float(((Float)1.0)) / Float(norm));
				Float tmp13 = _this->c;
				Float tmp14 = (_this->ty - targetPoint->y);
				Float tmp15 = (tmp13 * tmp14);
				Float tmp16 = _this->d;
				Float tmp17 = (targetPoint->x - _this->tx);
				Float tmp18 = (tmp16 * tmp17);
				Float tmp19 = (tmp15 + tmp18);
				Float tmp20 = (tmp12 * tmp19);
				Float px = tmp20;
				Float tmp21 = (Float(((Float)1.0)) / Float(norm));
				Float tmp22 = _this->a;
				Float tmp23 = (targetPoint->y - _this->ty);
				Float tmp24 = (tmp22 * tmp23);
				Float tmp25 = _this->b;
				Float tmp26 = (_this->tx - targetPoint->x);
				Float tmp27 = (tmp25 * tmp26);
				Float tmp28 = (tmp24 + tmp27);
				Float tmp29 = (tmp21 * tmp28);
				targetPoint->y = tmp29;
				targetPoint->x = px;
			}
		}
		Float tmp7 = deltaY;
		int tmp8 = ::Std_obj::_int(tmp7);
		int delta = tmp8;
		Float tmp9 = this->__mouseX;
		Float tmp10 = this->__mouseY;
		bool tmp11 = (target == hx::ObjectPtr<OBJ_>(this));
		::openfl::geom::Point tmp12;
		if ((tmp11)){
			tmp12 = targetPoint;
		}
		else{
			::openfl::geom::Point tmp13 = targetPoint;
			tmp12 = target->globalToLocal(tmp13);
		}
		::openfl::display::InteractiveObject tmp13 = target;
		int tmp14 = delta;
		::openfl::events::MouseEvent tmp15 = ::openfl::events::MouseEvent_obj::__create(HX_HCSTRING("mouseWheel","\x36","\x28","\x87","\xe7"),(int)0,tmp9,tmp10,tmp12,tmp13,tmp14);
		this->__dispatchStack(tmp15,stack);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(Stage_obj,__onMouseWheel,(void))

Void Stage_obj::__onTouch( ::String type,::lime::ui::Touch touch){
{
		Float tmp = touch->x;
		::lime::ui::Window tmp1 = this->window;
		int tmp2 = tmp1->__width;
		Float tmp3 = (tmp * tmp2);
		::lime::ui::Window tmp4 = this->window;
		Float tmp5 = tmp4->__scale;
		Float tmp6 = (tmp3 * tmp5);
		int tmp7 = ::Math_obj::round(tmp6);
		Float tmp8 = touch->y;
		::lime::ui::Window tmp9 = this->window;
		int tmp10 = tmp9->__height;
		Float tmp11 = (tmp8 * tmp10);
		::lime::ui::Window tmp12 = this->window;
		Float tmp13 = tmp12->__scale;
		Float tmp14 = (tmp11 * tmp13);
		int tmp15 = ::Math_obj::round(tmp14);
		::openfl::geom::Point tmp16 = ::openfl::geom::Point_obj::__new(tmp7,tmp15);
		::openfl::geom::Point point = tmp16;
		{
			::openfl::geom::Matrix tmp17 = this->__displayMatrix;
			::openfl::geom::Matrix _this = tmp17;
			Float tmp18 = (_this->a * _this->d);
			Float tmp19 = (_this->b * _this->c);
			Float tmp20 = (tmp18 - tmp19);
			Float norm = tmp20;
			bool tmp21 = (norm == (int)0);
			if ((tmp21)){
				Float tmp22 = _this->tx;
				Float tmp23 = -(tmp22);
				point->x = tmp23;
				Float tmp24 = _this->ty;
				Float tmp25 = -(tmp24);
				point->y = tmp25;
			}
			else{
				Float tmp22 = (Float(((Float)1.0)) / Float(norm));
				Float tmp23 = _this->c;
				Float tmp24 = (_this->ty - point->y);
				Float tmp25 = (tmp23 * tmp24);
				Float tmp26 = _this->d;
				Float tmp27 = (point->x - _this->tx);
				Float tmp28 = (tmp26 * tmp27);
				Float tmp29 = (tmp25 + tmp28);
				Float tmp30 = (tmp22 * tmp29);
				Float px = tmp30;
				Float tmp31 = (Float(((Float)1.0)) / Float(norm));
				Float tmp32 = _this->a;
				Float tmp33 = (point->y - _this->ty);
				Float tmp34 = (tmp32 * tmp33);
				Float tmp35 = _this->b;
				Float tmp36 = (_this->tx - point->x);
				Float tmp37 = (tmp35 * tmp36);
				Float tmp38 = (tmp34 + tmp37);
				Float tmp39 = (tmp31 * tmp38);
				point->y = tmp39;
				point->x = px;
			}
		}
		Float touchX = point->x;
		Float touchY = point->y;
		Array< ::Dynamic > __stack = Array_obj< ::Dynamic >::__new();
		Float tmp17 = touchX;
		Float tmp18 = touchY;
		bool tmp19 = this->__hitTest(tmp17,tmp18,false,__stack,true,hx::ObjectPtr<OBJ_>(this));
		if ((tmp19)){
			int tmp20 = (__stack->length - (int)1);
			::openfl::display::DisplayObject tmp21 = __stack->__get(tmp20).StaticCast< ::openfl::display::DisplayObject >();
			::openfl::display::DisplayObject target = tmp21;
			bool tmp22 = (target == null());
			if ((tmp22)){
				target = hx::ObjectPtr<OBJ_>(this);
			}
			::openfl::geom::Point tmp23 = point;
			::openfl::geom::Point tmp24 = target->globalToLocal(tmp23);
			::openfl::geom::Point localPoint = tmp24;
			::String tmp25 = type;
			Float tmp26 = touchX;
			Float tmp27 = touchY;
			::openfl::geom::Point tmp28 = localPoint;
			::openfl::display::InteractiveObject tmp29 = ((::openfl::display::InteractiveObject)(target));
			::openfl::events::TouchEvent tmp30 = ::openfl::events::TouchEvent_obj::__create(tmp25,null(),tmp26,tmp27,tmp28,tmp29);
			::openfl::events::TouchEvent touchEvent = tmp30;
			touchEvent->touchPointID = touch->id;
			::lime::ui::Touch tmp31 = this->__primaryTouch;
			::lime::ui::Touch tmp32 = touch;
			bool tmp33 = (tmp31 == tmp32);
			touchEvent->isPrimaryTouchPoint = tmp33;
			::openfl::events::TouchEvent tmp34 = touchEvent;
			this->__dispatchStack(tmp34,__stack);
		}
		else{
			::String tmp20 = type;
			Float tmp21 = touchX;
			Float tmp22 = touchY;
			::openfl::geom::Point tmp23 = point;
			::openfl::events::TouchEvent tmp24 = ::openfl::events::TouchEvent_obj::__create(tmp20,null(),tmp21,tmp22,tmp23,hx::ObjectPtr<OBJ_>(this));
			::openfl::events::TouchEvent touchEvent = tmp24;
			touchEvent->touchPointID = touch->id;
			::lime::ui::Touch tmp25 = this->__primaryTouch;
			::lime::ui::Touch tmp26 = touch;
			bool tmp27 = (tmp25 == tmp26);
			touchEvent->isPrimaryTouchPoint = tmp27;
			::openfl::events::TouchEvent tmp28 = touchEvent;
			::openfl::display::Stage tmp29 = this->stage;
			this->__dispatchStack(tmp28,Array_obj< ::Dynamic >::__new().Add(tmp29));
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(Stage_obj,__onTouch,(void))

Void Stage_obj::__resize( ){
{
		int tmp = this->stageWidth;
		int cacheWidth = tmp;
		int tmp1 = this->stageHeight;
		int cacheHeight = tmp1;
		::lime::ui::Window tmp2 = this->window;
		int tmp3 = tmp2->__width;
		::lime::ui::Window tmp4 = this->window;
		Float tmp5 = tmp4->__scale;
		Float tmp6 = (tmp3 * tmp5);
		int tmp7 = ::Std_obj::_int(tmp6);
		int windowWidth = tmp7;
		::lime::ui::Window tmp8 = this->window;
		int tmp9 = tmp8->__height;
		::lime::ui::Window tmp10 = this->window;
		Float tmp11 = tmp10->__scale;
		Float tmp12 = (tmp9 * tmp11);
		int tmp13 = ::Std_obj::_int(tmp12);
		int windowHeight = tmp13;
		::openfl::geom::Matrix tmp14 = this->__displayMatrix;
		tmp14->identity();
		int tmp15 = this->__logicalWidth;
		bool tmp16 = (tmp15 == (int)0);
		bool tmp17;
		if ((tmp16)){
			int tmp18 = this->__logicalHeight;
			int tmp19 = tmp18;
			tmp17 = (tmp19 == (int)0);
		}
		else{
			tmp17 = false;
		}
		if ((tmp17)){
			this->stageWidth = windowWidth;
			this->stageHeight = windowHeight;
		}
		else{
			int tmp18 = this->__logicalWidth;
			this->stageWidth = tmp18;
			int tmp19 = this->__logicalHeight;
			this->stageHeight = tmp19;
			int tmp20 = windowWidth;
			int tmp21 = this->stageWidth;
			Float tmp22 = (Float(tmp20) / Float(tmp21));
			Float scaleX = tmp22;
			int tmp23 = windowHeight;
			int tmp24 = this->stageHeight;
			Float tmp25 = (Float(tmp23) / Float(tmp24));
			Float scaleY = tmp25;
			Float tmp26 = scaleX;
			Float tmp27 = scaleY;
			Float tmp28 = ::Math_obj::min(tmp26,tmp27);
			Float targetScale = tmp28;
			int tmp29 = windowWidth;
			int tmp30 = this->stageWidth;
			Float tmp31 = targetScale;
			Float tmp32 = (tmp30 * tmp31);
			Float tmp33 = (tmp29 - tmp32);
			Float tmp34 = (Float(tmp33) / Float((int)2));
			int tmp35 = ::Math_obj::round(tmp34);
			int offsetX = tmp35;
			int tmp36 = windowHeight;
			int tmp37 = this->stageHeight;
			Float tmp38 = targetScale;
			Float tmp39 = (tmp37 * tmp38);
			Float tmp40 = (tmp36 - tmp39);
			Float tmp41 = (Float(tmp40) / Float((int)2));
			int tmp42 = ::Math_obj::round(tmp41);
			int offsetY = tmp42;
			::openfl::geom::Matrix tmp43 = this->__displayMatrix;
			Float tmp44 = targetScale;
			Float tmp45 = targetScale;
			tmp43->scale(tmp44,tmp45);
			::openfl::geom::Matrix tmp46 = this->__displayMatrix;
			int tmp47 = offsetX;
			int tmp48 = offsetY;
			tmp46->translate(tmp47,tmp48);
		}
		{
			int _g = (int)0;
			::openfl::_Vector::ObjectVector tmp18 = this->stage3Ds;
			::openfl::_Vector::ObjectVector _g1 = tmp18;
			while((true)){
				int tmp19 = _g;
				int tmp20 = _g1->get_length();
				bool tmp21 = (tmp19 < tmp20);
				bool tmp22 = !(tmp21);
				if ((tmp22)){
					break;
				}
				int tmp23 = _g;
				::openfl::display::Stage3D tmp24 = _g1->get(tmp23);
				::openfl::display::Stage3D stage3D = tmp24;
				++(_g);
				int tmp25 = this->stageWidth;
				int tmp26 = this->stageHeight;
				stage3D->__resize(tmp25,tmp26);
			}
		}
		::openfl::_internal::renderer::AbstractRenderer tmp18 = this->__renderer;
		bool tmp19 = (tmp18 != null());
		if ((tmp19)){
			::openfl::_internal::renderer::AbstractRenderer tmp20 = this->__renderer;
			int tmp21 = windowWidth;
			int tmp22 = windowHeight;
			tmp20->resize(tmp21,tmp22);
		}
		int tmp20 = this->stageWidth;
		int tmp21 = cacheWidth;
		bool tmp22 = (tmp20 != tmp21);
		bool tmp23 = !(tmp22);
		bool tmp24;
		if ((tmp23)){
			int tmp25 = this->stageHeight;
			int tmp26 = tmp25;
			int tmp27 = cacheHeight;
			tmp24 = (tmp26 != tmp27);
		}
		else{
			tmp24 = true;
		}
		if ((tmp24)){
			::openfl::events::Event tmp25 = ::openfl::events::Event_obj::__new(HX_HCSTRING("resize","\xf4","\x59","\x7b","\x08"),null(),null());
			this->__dispatchEvent(tmp25);
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(Stage_obj,__resize,(void))

Void Stage_obj::__setLogicalSize( int width,int height){
{
		this->__logicalWidth = width;
		this->__logicalHeight = height;
		this->__resize();
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(Stage_obj,__setLogicalSize,(void))

Void Stage_obj::__startDrag( ::openfl::display::Sprite sprite,bool lockCenter,::openfl::geom::Rectangle bounds){
{
		bool tmp = (bounds == null());
		::openfl::geom::Rectangle tmp1;
		if ((tmp)){
			tmp1 = null();
		}
		else{
			tmp1 = bounds->clone();
		}
		this->__dragBounds = tmp1;
		this->__dragObject = sprite;
		::openfl::display::Sprite tmp2 = this->__dragObject;
		bool tmp3 = (tmp2 != null());
		if ((tmp3)){
			bool tmp4 = lockCenter;
			if ((tmp4)){
				this->__dragOffsetX = (int)0;
				this->__dragOffsetY = (int)0;
			}
			else{
				Float tmp5 = this->get_mouseX();
				Float tmp6 = this->get_mouseY();
				::openfl::geom::Point tmp7 = ::openfl::geom::Point_obj::__new(tmp5,tmp6);
				::openfl::geom::Point mouse = tmp7;
				::openfl::display::Sprite tmp8 = this->__dragObject;
				::openfl::display::DisplayObjectContainer parent = tmp8->parent;
				bool tmp9 = (parent != null());
				if ((tmp9)){
					::openfl::geom::Matrix tmp10 = parent->__getWorldTransform();
					::openfl::geom::Matrix _this = tmp10;
					Float tmp11 = (_this->a * _this->d);
					Float tmp12 = (_this->b * _this->c);
					Float tmp13 = (tmp11 - tmp12);
					Float norm = tmp13;
					bool tmp14 = (norm == (int)0);
					if ((tmp14)){
						Float tmp15 = _this->tx;
						Float tmp16 = -(tmp15);
						mouse->x = tmp16;
						Float tmp17 = _this->ty;
						Float tmp18 = -(tmp17);
						mouse->y = tmp18;
					}
					else{
						Float tmp15 = (Float(((Float)1.0)) / Float(norm));
						Float tmp16 = _this->c;
						Float tmp17 = (_this->ty - mouse->y);
						Float tmp18 = (tmp16 * tmp17);
						Float tmp19 = _this->d;
						Float tmp20 = (mouse->x - _this->tx);
						Float tmp21 = (tmp19 * tmp20);
						Float tmp22 = (tmp18 + tmp21);
						Float tmp23 = (tmp15 * tmp22);
						Float px = tmp23;
						Float tmp24 = (Float(((Float)1.0)) / Float(norm));
						Float tmp25 = _this->a;
						Float tmp26 = (mouse->y - _this->ty);
						Float tmp27 = (tmp25 * tmp26);
						Float tmp28 = _this->b;
						Float tmp29 = (_this->tx - mouse->x);
						Float tmp30 = (tmp28 * tmp29);
						Float tmp31 = (tmp27 + tmp30);
						Float tmp32 = (tmp24 * tmp31);
						mouse->y = tmp32;
						mouse->x = px;
					}
				}
				::openfl::display::Sprite tmp10 = this->__dragObject;
				Float tmp11 = tmp10->get_x();
				Float tmp12 = mouse->x;
				Float tmp13 = (tmp11 - tmp12);
				this->__dragOffsetX = tmp13;
				::openfl::display::Sprite tmp14 = this->__dragObject;
				Float tmp15 = tmp14->get_y();
				Float tmp16 = mouse->y;
				Float tmp17 = (tmp15 - tmp16);
				this->__dragOffsetY = tmp17;
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC3(Stage_obj,__startDrag,(void))

Void Stage_obj::__stopDrag( ::openfl::display::Sprite sprite){
{
		this->__dragBounds = null();
		this->__dragObject = null();
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Stage_obj,__stopDrag,(void))

Void Stage_obj::__update( bool transformOnly,bool updateChildren,::openfl::display::Graphics maskGraphics){
{
		bool tmp = transformOnly;
		if ((tmp)){
			bool tmp1 = this->__transformDirty;
			if ((tmp1)){
				bool tmp2 = updateChildren;
				::openfl::display::Graphics tmp3 = maskGraphics;
				this->super::__update(true,tmp2,tmp3);
				bool tmp4 = updateChildren;
				if ((tmp4)){
					this->__transformDirty = false;
				}
			}
		}
		else{
			bool tmp1 = this->__transformDirty;
			bool tmp2 = !(tmp1);
			bool tmp3;
			if ((tmp2)){
				tmp3 = this->__renderDirty;
			}
			else{
				tmp3 = true;
			}
			if ((tmp3)){
				bool tmp4 = updateChildren;
				::openfl::display::Graphics tmp5 = maskGraphics;
				this->super::__update(false,tmp4,tmp5);
				bool tmp6 = updateChildren;
				if ((tmp6)){
				}
			}
		}
	}
return null();
}


int Stage_obj::get_color( ){
	int tmp = this->__color;
	return tmp;
}


HX_DEFINE_DYNAMIC_FUNC0(Stage_obj,get_color,return )

int Stage_obj::set_color( int value){
	int tmp = (int(value) & int((int)16711680));
	int tmp1 = hx::UShr(tmp,(int)16);
	int r = tmp1;
	int tmp2 = (int(value) & int((int)65280));
	int tmp3 = hx::UShr(tmp2,(int)8);
	int g = tmp3;
	int tmp4 = (int(value) & int((int)255));
	int b = tmp4;
	Float tmp5 = (Float(r) / Float((int)255));
	Float tmp6 = (Float(g) / Float((int)255));
	Float tmp7 = (Float(b) / Float((int)255));
	this->__colorSplit = Array_obj< Float >::__new().Add(tmp5).Add(tmp6).Add(tmp7);
	int tmp8 = (int(value) & int((int)16777215));
	::String tmp9 = ::StringTools_obj::hex(tmp8,(int)6);
	::String tmp10 = (HX_HCSTRING("#","\x23","\x00","\x00","\x00") + tmp9);
	this->__colorString = tmp10;
	int tmp11 = this->__color = value;
	return tmp11;
}


HX_DEFINE_DYNAMIC_FUNC1(Stage_obj,set_color,return )

Dynamic Stage_obj::get_displayState( ){
	Dynamic tmp = this->__displayState;
	return tmp;
}


HX_DEFINE_DYNAMIC_FUNC0(Stage_obj,get_displayState,return )

Dynamic Stage_obj::set_displayState( Dynamic value){
	::lime::ui::Window tmp = this->window;
	bool tmp1 = (tmp != null());
	if ((tmp1)){
		Dynamic tmp2 = value;
		switch( (int)(tmp2)){
			case (int)2: {
				::lime::ui::Window tmp3 = this->window;
				bool tmp4 = tmp3->__fullscreen;
				if ((tmp4)){
					::lime::ui::Window tmp5 = this->window;
					tmp5->set_fullscreen(false);
				}
			}
			;break;
			default: {
				::lime::ui::Window tmp3 = this->window;
				bool tmp4 = tmp3->__fullscreen;
				bool tmp5 = !(tmp4);
				if ((tmp5)){
					::lime::ui::Window tmp6 = this->window;
					tmp6->set_fullscreen(true);
				}
			}
		}
	}
	Dynamic tmp2 = this->__displayState = value;
	return tmp2;
}


HX_DEFINE_DYNAMIC_FUNC1(Stage_obj,set_displayState,return )

::openfl::display::InteractiveObject Stage_obj::get_focus( ){
	::openfl::display::InteractiveObject tmp = this->__focus;
	return tmp;
}


HX_DEFINE_DYNAMIC_FUNC0(Stage_obj,get_focus,return )

::openfl::display::InteractiveObject Stage_obj::set_focus( ::openfl::display::InteractiveObject value){
	::openfl::display::InteractiveObject tmp = value;
	::openfl::display::InteractiveObject tmp1 = this->__focus;
	bool tmp2 = (tmp != tmp1);
	if ((tmp2)){
		::openfl::display::InteractiveObject tmp3 = this->__focus;
		::openfl::display::InteractiveObject oldFocus = tmp3;
		this->__focus = value;
		this->__cacheFocus = value;
		bool tmp4 = (oldFocus != null());
		if ((tmp4)){
			::openfl::display::InteractiveObject tmp5 = this->__focus;
			::openfl::events::FocusEvent tmp6 = ::openfl::events::FocusEvent_obj::__new(HX_HCSTRING("focusOut","\x96","\x6f","\x5e","\x11"),true,false,tmp5,false,(int)0);
			::openfl::events::FocusEvent event = tmp6;
			Array< ::Dynamic > stack = Array_obj< ::Dynamic >::__new();
			oldFocus->__getInteractive(stack);
			stack->reverse();
			::openfl::events::FocusEvent tmp7 = event;
			this->__dispatchStack(tmp7,stack);
		}
		::openfl::display::InteractiveObject tmp5 = this->__focus;
		bool tmp6 = (tmp5 != null());
		if ((tmp6)){
			::openfl::events::FocusEvent tmp7 = ::openfl::events::FocusEvent_obj::__new(HX_HCSTRING("focusIn","\xdd","\x45","\x83","\x41"),true,false,oldFocus,false,(int)0);
			::openfl::events::FocusEvent event = tmp7;
			Array< ::Dynamic > stack = Array_obj< ::Dynamic >::__new();
			value->__getInteractive(stack);
			stack->reverse();
			::openfl::events::FocusEvent tmp8 = event;
			this->__dispatchStack(tmp8,stack);
		}
	}
	::openfl::display::InteractiveObject tmp3 = this->__focus;
	return tmp3;
}


HX_DEFINE_DYNAMIC_FUNC1(Stage_obj,set_focus,return )

Float Stage_obj::get_frameRate( ){
	::lime::app::Application tmp = this->application;
	bool tmp1 = (tmp != null());
	if ((tmp1)){
		::lime::app::Application tmp2 = this->application;
		Float tmp3 = tmp2->backend->getFrameRate();
		return tmp3;
	}
	return (int)0;
}


HX_DEFINE_DYNAMIC_FUNC0(Stage_obj,get_frameRate,return )

Float Stage_obj::set_frameRate( Float value){
	::lime::app::Application tmp = this->application;
	bool tmp1 = (tmp != null());
	if ((tmp1)){
		::lime::app::Application tmp2 = this->application;
		Float tmp3 = value;
		Float tmp4 = tmp2->backend->setFrameRate(tmp3);
		return tmp4;
	}
	Float tmp2 = value;
	return tmp2;
}


HX_DEFINE_DYNAMIC_FUNC1(Stage_obj,set_frameRate,return )

int Stage_obj::get_fullScreenHeight( ){
	::lime::ui::Window tmp = this->window;
	::lime::_system::Display tmp1 = tmp->get_display();
	int tmp2 = tmp1->__Field(HX_HCSTRING("currentMode","\x3c","\xac","\xf2","\x80"), hx::paccDynamic )->__Field(HX_HCSTRING("height","\xe7","\x07","\x4c","\x02"), hx::paccDynamic );
	return tmp2;
}


HX_DEFINE_DYNAMIC_FUNC0(Stage_obj,get_fullScreenHeight,return )

int Stage_obj::get_fullScreenWidth( ){
	::lime::ui::Window tmp = this->window;
	::lime::_system::Display tmp1 = tmp->get_display();
	int tmp2 = tmp1->__Field(HX_HCSTRING("currentMode","\x3c","\xac","\xf2","\x80"), hx::paccDynamic )->__Field(HX_HCSTRING("width","\x06","\xb6","\x62","\xca"), hx::paccDynamic );
	return tmp2;
}


HX_DEFINE_DYNAMIC_FUNC0(Stage_obj,get_fullScreenWidth,return )

Float Stage_obj::set_height( Float value){
	Float tmp = this->get_height();
	return tmp;
}


Float Stage_obj::get_mouseX( ){
	Float tmp = this->__mouseX;
	return tmp;
}


Float Stage_obj::get_mouseY( ){
	Float tmp = this->__mouseY;
	return tmp;
}


Float Stage_obj::set_rotation( Float value){
	return (int)0;
}


Float Stage_obj::set_scaleX( Float value){
	return (int)0;
}


Float Stage_obj::set_scaleY( Float value){
	return (int)0;
}


::openfl::geom::Transform Stage_obj::set_transform( ::openfl::geom::Transform value){
	::openfl::geom::Transform tmp = this->get_transform();
	return tmp;
}


Float Stage_obj::set_width( Float value){
	Float tmp = this->get_width();
	return tmp;
}


Float Stage_obj::set_x( Float value){
	return (int)0;
}


Float Stage_obj::set_y( Float value){
	return (int)0;
}



Stage_obj::Stage_obj()
{
}

void Stage_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(Stage);
	HX_MARK_MEMBER_NAME(align,"align");
	HX_MARK_MEMBER_NAME(allowsFullScreen,"allowsFullScreen");
	HX_MARK_MEMBER_NAME(allowsFullScreenInteractive,"allowsFullScreenInteractive");
	HX_MARK_MEMBER_NAME(application,"application");
	HX_MARK_MEMBER_NAME(quality,"quality");
	HX_MARK_MEMBER_NAME(scaleMode,"scaleMode");
	HX_MARK_MEMBER_NAME(showDefaultContextMenu,"showDefaultContextMenu");
	HX_MARK_MEMBER_NAME(softKeyboardRect,"softKeyboardRect");
	HX_MARK_MEMBER_NAME(stage3Ds,"stage3Ds");
	HX_MARK_MEMBER_NAME(stageFocusRect,"stageFocusRect");
	HX_MARK_MEMBER_NAME(stageHeight,"stageHeight");
	HX_MARK_MEMBER_NAME(stageWidth,"stageWidth");
	HX_MARK_MEMBER_NAME(window,"window");
	HX_MARK_MEMBER_NAME(__cacheFocus,"__cacheFocus");
	HX_MARK_MEMBER_NAME(__clearBeforeRender,"__clearBeforeRender");
	HX_MARK_MEMBER_NAME(__color,"__color");
	HX_MARK_MEMBER_NAME(__colorSplit,"__colorSplit");
	HX_MARK_MEMBER_NAME(__colorString,"__colorString");
	HX_MARK_MEMBER_NAME(__deltaTime,"__deltaTime");
	HX_MARK_MEMBER_NAME(__dirty,"__dirty");
	HX_MARK_MEMBER_NAME(__displayMatrix,"__displayMatrix");
	HX_MARK_MEMBER_NAME(__displayState,"__displayState");
	HX_MARK_MEMBER_NAME(__dragBounds,"__dragBounds");
	HX_MARK_MEMBER_NAME(__dragObject,"__dragObject");
	HX_MARK_MEMBER_NAME(__dragOffsetX,"__dragOffsetX");
	HX_MARK_MEMBER_NAME(__dragOffsetY,"__dragOffsetY");
	HX_MARK_MEMBER_NAME(__focus,"__focus");
	HX_MARK_MEMBER_NAME(__fullscreen,"__fullscreen");
	HX_MARK_MEMBER_NAME(__invalidated,"__invalidated");
	HX_MARK_MEMBER_NAME(__lastClickTime,"__lastClickTime");
	HX_MARK_MEMBER_NAME(__logicalWidth,"__logicalWidth");
	HX_MARK_MEMBER_NAME(__logicalHeight,"__logicalHeight");
	HX_MARK_MEMBER_NAME(__macKeyboard,"__macKeyboard");
	HX_MARK_MEMBER_NAME(__mouseDownLeft,"__mouseDownLeft");
	HX_MARK_MEMBER_NAME(__mouseDownMiddle,"__mouseDownMiddle");
	HX_MARK_MEMBER_NAME(__mouseDownRight,"__mouseDownRight");
	HX_MARK_MEMBER_NAME(__mouseOverTarget,"__mouseOverTarget");
	HX_MARK_MEMBER_NAME(__mouseX,"__mouseX");
	HX_MARK_MEMBER_NAME(__mouseY,"__mouseY");
	HX_MARK_MEMBER_NAME(__primaryTouch,"__primaryTouch");
	HX_MARK_MEMBER_NAME(__renderer,"__renderer");
	HX_MARK_MEMBER_NAME(__rendering,"__rendering");
	HX_MARK_MEMBER_NAME(__rollOutStack,"__rollOutStack");
	HX_MARK_MEMBER_NAME(__stack,"__stack");
	HX_MARK_MEMBER_NAME(__transparent,"__transparent");
	HX_MARK_MEMBER_NAME(__wasDirty,"__wasDirty");
	::openfl::display::DisplayObjectContainer_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void Stage_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(align,"align");
	HX_VISIT_MEMBER_NAME(allowsFullScreen,"allowsFullScreen");
	HX_VISIT_MEMBER_NAME(allowsFullScreenInteractive,"allowsFullScreenInteractive");
	HX_VISIT_MEMBER_NAME(application,"application");
	HX_VISIT_MEMBER_NAME(quality,"quality");
	HX_VISIT_MEMBER_NAME(scaleMode,"scaleMode");
	HX_VISIT_MEMBER_NAME(showDefaultContextMenu,"showDefaultContextMenu");
	HX_VISIT_MEMBER_NAME(softKeyboardRect,"softKeyboardRect");
	HX_VISIT_MEMBER_NAME(stage3Ds,"stage3Ds");
	HX_VISIT_MEMBER_NAME(stageFocusRect,"stageFocusRect");
	HX_VISIT_MEMBER_NAME(stageHeight,"stageHeight");
	HX_VISIT_MEMBER_NAME(stageWidth,"stageWidth");
	HX_VISIT_MEMBER_NAME(window,"window");
	HX_VISIT_MEMBER_NAME(__cacheFocus,"__cacheFocus");
	HX_VISIT_MEMBER_NAME(__clearBeforeRender,"__clearBeforeRender");
	HX_VISIT_MEMBER_NAME(__color,"__color");
	HX_VISIT_MEMBER_NAME(__colorSplit,"__colorSplit");
	HX_VISIT_MEMBER_NAME(__colorString,"__colorString");
	HX_VISIT_MEMBER_NAME(__deltaTime,"__deltaTime");
	HX_VISIT_MEMBER_NAME(__dirty,"__dirty");
	HX_VISIT_MEMBER_NAME(__displayMatrix,"__displayMatrix");
	HX_VISIT_MEMBER_NAME(__displayState,"__displayState");
	HX_VISIT_MEMBER_NAME(__dragBounds,"__dragBounds");
	HX_VISIT_MEMBER_NAME(__dragObject,"__dragObject");
	HX_VISIT_MEMBER_NAME(__dragOffsetX,"__dragOffsetX");
	HX_VISIT_MEMBER_NAME(__dragOffsetY,"__dragOffsetY");
	HX_VISIT_MEMBER_NAME(__focus,"__focus");
	HX_VISIT_MEMBER_NAME(__fullscreen,"__fullscreen");
	HX_VISIT_MEMBER_NAME(__invalidated,"__invalidated");
	HX_VISIT_MEMBER_NAME(__lastClickTime,"__lastClickTime");
	HX_VISIT_MEMBER_NAME(__logicalWidth,"__logicalWidth");
	HX_VISIT_MEMBER_NAME(__logicalHeight,"__logicalHeight");
	HX_VISIT_MEMBER_NAME(__macKeyboard,"__macKeyboard");
	HX_VISIT_MEMBER_NAME(__mouseDownLeft,"__mouseDownLeft");
	HX_VISIT_MEMBER_NAME(__mouseDownMiddle,"__mouseDownMiddle");
	HX_VISIT_MEMBER_NAME(__mouseDownRight,"__mouseDownRight");
	HX_VISIT_MEMBER_NAME(__mouseOverTarget,"__mouseOverTarget");
	HX_VISIT_MEMBER_NAME(__mouseX,"__mouseX");
	HX_VISIT_MEMBER_NAME(__mouseY,"__mouseY");
	HX_VISIT_MEMBER_NAME(__primaryTouch,"__primaryTouch");
	HX_VISIT_MEMBER_NAME(__renderer,"__renderer");
	HX_VISIT_MEMBER_NAME(__rendering,"__rendering");
	HX_VISIT_MEMBER_NAME(__rollOutStack,"__rollOutStack");
	HX_VISIT_MEMBER_NAME(__stack,"__stack");
	HX_VISIT_MEMBER_NAME(__transparent,"__transparent");
	HX_VISIT_MEMBER_NAME(__wasDirty,"__wasDirty");
	::openfl::display::DisplayObjectContainer_obj::__Visit(HX_VISIT_ARG);
}

Dynamic Stage_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"align") ) { return align; }
		if (HX_FIELD_EQ(inName,"color") ) { if (inCallProp == hx::paccAlways) return get_color(); }
		if (HX_FIELD_EQ(inName,"focus") ) { if (inCallProp == hx::paccAlways) return get_focus(); }
		if (HX_FIELD_EQ(inName,"set_x") ) { return set_x_dyn(); }
		if (HX_FIELD_EQ(inName,"set_y") ) { return set_y_dyn(); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"window") ) { return window; }
		if (HX_FIELD_EQ(inName,"render") ) { return render_dyn(); }
		if (HX_FIELD_EQ(inName,"update") ) { return update_dyn(); }
		if (HX_FIELD_EQ(inName,"__drag") ) { return __drag_dyn(); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"quality") ) { return quality; }
		if (HX_FIELD_EQ(inName,"__color") ) { return __color; }
		if (HX_FIELD_EQ(inName,"__dirty") ) { return __dirty; }
		if (HX_FIELD_EQ(inName,"__focus") ) { return __focus; }
		if (HX_FIELD_EQ(inName,"__stack") ) { return __stack; }
		if (HX_FIELD_EQ(inName,"onKeyUp") ) { return onKeyUp_dyn(); }
		if (HX_FIELD_EQ(inName,"__onKey") ) { return __onKey_dyn(); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"stage3Ds") ) { return stage3Ds; }
		if (HX_FIELD_EQ(inName,"__mouseX") ) { return __mouseX; }
		if (HX_FIELD_EQ(inName,"__mouseY") ) { return __mouseY; }
		if (HX_FIELD_EQ(inName,"__resize") ) { return __resize_dyn(); }
		if (HX_FIELD_EQ(inName,"__update") ) { return __update_dyn(); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"frameRate") ) { if (inCallProp == hx::paccAlways) return get_frameRate(); }
		if (HX_FIELD_EQ(inName,"scaleMode") ) { return scaleMode; }
		if (HX_FIELD_EQ(inName,"addWindow") ) { return addWindow_dyn(); }
		if (HX_FIELD_EQ(inName,"onKeyDown") ) { return onKeyDown_dyn(); }
		if (HX_FIELD_EQ(inName,"onMouseUp") ) { return onMouseUp_dyn(); }
		if (HX_FIELD_EQ(inName,"__onMouse") ) { return __onMouse_dyn(); }
		if (HX_FIELD_EQ(inName,"__onTouch") ) { return __onTouch_dyn(); }
		if (HX_FIELD_EQ(inName,"get_color") ) { return get_color_dyn(); }
		if (HX_FIELD_EQ(inName,"set_color") ) { return set_color_dyn(); }
		if (HX_FIELD_EQ(inName,"get_focus") ) { return get_focus_dyn(); }
		if (HX_FIELD_EQ(inName,"set_focus") ) { return set_focus_dyn(); }
		if (HX_FIELD_EQ(inName,"set_width") ) { return set_width_dyn(); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"stageWidth") ) { return stageWidth; }
		if (HX_FIELD_EQ(inName,"__renderer") ) { return __renderer; }
		if (HX_FIELD_EQ(inName,"__wasDirty") ) { return __wasDirty; }
		if (HX_FIELD_EQ(inName,"invalidate") ) { return invalidate_dyn(); }
		if (HX_FIELD_EQ(inName,"onTextEdit") ) { return onTextEdit_dyn(); }
		if (HX_FIELD_EQ(inName,"onTouchEnd") ) { return onTouchEnd_dyn(); }
		if (HX_FIELD_EQ(inName,"__stopDrag") ) { return __stopDrag_dyn(); }
		if (HX_FIELD_EQ(inName,"set_height") ) { return set_height_dyn(); }
		if (HX_FIELD_EQ(inName,"get_mouseX") ) { return get_mouseX_dyn(); }
		if (HX_FIELD_EQ(inName,"get_mouseY") ) { return get_mouseY_dyn(); }
		if (HX_FIELD_EQ(inName,"set_scaleX") ) { return set_scaleX_dyn(); }
		if (HX_FIELD_EQ(inName,"set_scaleY") ) { return set_scaleY_dyn(); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"application") ) { return application; }
		if (HX_FIELD_EQ(inName,"stageHeight") ) { return stageHeight; }
		if (HX_FIELD_EQ(inName,"__deltaTime") ) { return __deltaTime; }
		if (HX_FIELD_EQ(inName,"__rendering") ) { return __rendering; }
		if (HX_FIELD_EQ(inName,"addRenderer") ) { return addRenderer_dyn(); }
		if (HX_FIELD_EQ(inName,"onMouseDown") ) { return onMouseDown_dyn(); }
		if (HX_FIELD_EQ(inName,"onMouseMove") ) { return onMouseMove_dyn(); }
		if (HX_FIELD_EQ(inName,"onTextInput") ) { return onTextInput_dyn(); }
		if (HX_FIELD_EQ(inName,"onTouchMove") ) { return onTouchMove_dyn(); }
		if (HX_FIELD_EQ(inName,"__startDrag") ) { return __startDrag_dyn(); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"displayState") ) { if (inCallProp == hx::paccAlways) return get_displayState(); }
		if (HX_FIELD_EQ(inName,"__cacheFocus") ) { return __cacheFocus; }
		if (HX_FIELD_EQ(inName,"__colorSplit") ) { return __colorSplit; }
		if (HX_FIELD_EQ(inName,"__dragBounds") ) { return __dragBounds; }
		if (HX_FIELD_EQ(inName,"__dragObject") ) { return __dragObject; }
		if (HX_FIELD_EQ(inName,"__fullscreen") ) { return __fullscreen; }
		if (HX_FIELD_EQ(inName,"removeWindow") ) { return removeWindow_dyn(); }
		if (HX_FIELD_EQ(inName,"setPreloader") ) { return setPreloader_dyn(); }
		if (HX_FIELD_EQ(inName,"onModuleExit") ) { return onModuleExit_dyn(); }
		if (HX_FIELD_EQ(inName,"onMouseWheel") ) { return onMouseWheel_dyn(); }
		if (HX_FIELD_EQ(inName,"onTouchStart") ) { return onTouchStart_dyn(); }
		if (HX_FIELD_EQ(inName,"onWindowMove") ) { return onWindowMove_dyn(); }
		if (HX_FIELD_EQ(inName,"set_rotation") ) { return set_rotation_dyn(); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"__colorString") ) { return __colorString; }
		if (HX_FIELD_EQ(inName,"__dragOffsetX") ) { return __dragOffsetX; }
		if (HX_FIELD_EQ(inName,"__dragOffsetY") ) { return __dragOffsetY; }
		if (HX_FIELD_EQ(inName,"__invalidated") ) { return __invalidated; }
		if (HX_FIELD_EQ(inName,"__macKeyboard") ) { return __macKeyboard; }
		if (HX_FIELD_EQ(inName,"__transparent") ) { return __transparent; }
		if (HX_FIELD_EQ(inName,"globalToLocal") ) { return globalToLocal_dyn(); }
		if (HX_FIELD_EQ(inName,"localToGlobal") ) { return localToGlobal_dyn(); }
		if (HX_FIELD_EQ(inName,"onWindowClose") ) { return onWindowClose_dyn(); }
		if (HX_FIELD_EQ(inName,"onWindowEnter") ) { return onWindowEnter_dyn(); }
		if (HX_FIELD_EQ(inName,"onWindowLeave") ) { return onWindowLeave_dyn(); }
		if (HX_FIELD_EQ(inName,"__handleError") ) { return __handleError_dyn(); }
		if (HX_FIELD_EQ(inName,"get_frameRate") ) { return get_frameRate_dyn(); }
		if (HX_FIELD_EQ(inName,"set_frameRate") ) { return set_frameRate_dyn(); }
		if (HX_FIELD_EQ(inName,"set_transform") ) { return set_transform_dyn(); }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"stageFocusRect") ) { return stageFocusRect; }
		if (HX_FIELD_EQ(inName,"__displayState") ) { return __displayState; }
		if (HX_FIELD_EQ(inName,"__logicalWidth") ) { return __logicalWidth; }
		if (HX_FIELD_EQ(inName,"__primaryTouch") ) { return __primaryTouch; }
		if (HX_FIELD_EQ(inName,"__rollOutStack") ) { return __rollOutStack; }
		if (HX_FIELD_EQ(inName,"registerModule") ) { return registerModule_dyn(); }
		if (HX_FIELD_EQ(inName,"removeRenderer") ) { return removeRenderer_dyn(); }
		if (HX_FIELD_EQ(inName,"onWindowCreate") ) { return onWindowCreate_dyn(); }
		if (HX_FIELD_EQ(inName,"onWindowResize") ) { return onWindowResize_dyn(); }
		if (HX_FIELD_EQ(inName,"__onMouseWheel") ) { return __onMouseWheel_dyn(); }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"fullScreenWidth") ) { if (inCallProp == hx::paccAlways) return get_fullScreenWidth(); }
		if (HX_FIELD_EQ(inName,"__displayMatrix") ) { return __displayMatrix; }
		if (HX_FIELD_EQ(inName,"__lastClickTime") ) { return __lastClickTime; }
		if (HX_FIELD_EQ(inName,"__logicalHeight") ) { return __logicalHeight; }
		if (HX_FIELD_EQ(inName,"__mouseDownLeft") ) { return __mouseDownLeft; }
		if (HX_FIELD_EQ(inName,"onWindowFocusIn") ) { return onWindowFocusIn_dyn(); }
		if (HX_FIELD_EQ(inName,"onWindowRestore") ) { return onWindowRestore_dyn(); }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"allowsFullScreen") ) { return allowsFullScreen; }
		if (HX_FIELD_EQ(inName,"fullScreenHeight") ) { if (inCallProp == hx::paccAlways) return get_fullScreenHeight(); }
		if (HX_FIELD_EQ(inName,"softKeyboardRect") ) { return softKeyboardRect; }
		if (HX_FIELD_EQ(inName,"__mouseDownRight") ) { return __mouseDownRight; }
		if (HX_FIELD_EQ(inName,"unregisterModule") ) { return unregisterModule_dyn(); }
		if (HX_FIELD_EQ(inName,"onGamepadConnect") ) { return onGamepadConnect_dyn(); }
		if (HX_FIELD_EQ(inName,"onWindowActivate") ) { return onWindowActivate_dyn(); }
		if (HX_FIELD_EQ(inName,"onWindowDropFile") ) { return onWindowDropFile_dyn(); }
		if (HX_FIELD_EQ(inName,"onWindowFocusOut") ) { return onWindowFocusOut_dyn(); }
		if (HX_FIELD_EQ(inName,"onWindowMinimize") ) { return onWindowMinimize_dyn(); }
		if (HX_FIELD_EQ(inName,"__broadcastEvent") ) { return __broadcastEvent_dyn(); }
		if (HX_FIELD_EQ(inName,"__createRenderer") ) { return __createRenderer_dyn(); }
		if (HX_FIELD_EQ(inName,"__getInteractive") ) { return __getInteractive_dyn(); }
		if (HX_FIELD_EQ(inName,"__setLogicalSize") ) { return __setLogicalSize_dyn(); }
		if (HX_FIELD_EQ(inName,"get_displayState") ) { return get_displayState_dyn(); }
		if (HX_FIELD_EQ(inName,"set_displayState") ) { return set_displayState_dyn(); }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"__mouseDownMiddle") ) { return __mouseDownMiddle; }
		if (HX_FIELD_EQ(inName,"__mouseOverTarget") ) { return __mouseOverTarget; }
		if (HX_FIELD_EQ(inName,"onGamepadAxisMove") ) { return onGamepadAxisMove_dyn(); }
		if (HX_FIELD_EQ(inName,"onGamepadButtonUp") ) { return onGamepadButtonUp_dyn(); }
		if (HX_FIELD_EQ(inName,"onJoystickConnect") ) { return onJoystickConnect_dyn(); }
		if (HX_FIELD_EQ(inName,"onJoystickHatMove") ) { return onJoystickHatMove_dyn(); }
		if (HX_FIELD_EQ(inName,"onPreloadComplete") ) { return onPreloadComplete_dyn(); }
		if (HX_FIELD_EQ(inName,"onPreloadProgress") ) { return onPreloadProgress_dyn(); }
		break;
	case 18:
		if (HX_FIELD_EQ(inName,"onJoystickAxisMove") ) { return onJoystickAxisMove_dyn(); }
		if (HX_FIELD_EQ(inName,"onJoystickButtonUp") ) { return onJoystickButtonUp_dyn(); }
		if (HX_FIELD_EQ(inName,"onWindowDeactivate") ) { return onWindowDeactivate_dyn(); }
		if (HX_FIELD_EQ(inName,"onWindowFullscreen") ) { return onWindowFullscreen_dyn(); }
		if (HX_FIELD_EQ(inName,"__onGamepadConnect") ) { return __onGamepadConnect_dyn(); }
		break;
	case 19:
		if (HX_FIELD_EQ(inName,"__clearBeforeRender") ) { return __clearBeforeRender; }
		if (HX_FIELD_EQ(inName,"onGamepadButtonDown") ) { return onGamepadButtonDown_dyn(); }
		if (HX_FIELD_EQ(inName,"onGamepadDisconnect") ) { return onGamepadDisconnect_dyn(); }
		if (HX_FIELD_EQ(inName,"onMouseMoveRelative") ) { return onMouseMoveRelative_dyn(); }
		if (HX_FIELD_EQ(inName,"onRenderContextLost") ) { return onRenderContextLost_dyn(); }
		if (HX_FIELD_EQ(inName,"get_fullScreenWidth") ) { return get_fullScreenWidth_dyn(); }
		break;
	case 20:
		if (HX_FIELD_EQ(inName,"onJoystickButtonDown") ) { return onJoystickButtonDown_dyn(); }
		if (HX_FIELD_EQ(inName,"onJoystickDisconnect") ) { return onJoystickDisconnect_dyn(); }
		if (HX_FIELD_EQ(inName,"get_fullScreenHeight") ) { return get_fullScreenHeight_dyn(); }
		break;
	case 22:
		if (HX_FIELD_EQ(inName,"showDefaultContextMenu") ) { return showDefaultContextMenu; }
		break;
	case 23:
		if (HX_FIELD_EQ(inName,"onJoystickTrackballMove") ) { return onJoystickTrackballMove_dyn(); }
		if (HX_FIELD_EQ(inName,"onRenderContextRestored") ) { return onRenderContextRestored_dyn(); }
		break;
	case 27:
		if (HX_FIELD_EQ(inName,"allowsFullScreenInteractive") ) { return allowsFullScreenInteractive; }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic Stage_obj::__SetField(const ::String &inName,const Dynamic &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"align") ) { align=inValue.Cast< Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"color") ) { if (inCallProp == hx::paccAlways) return set_color(inValue); }
		if (HX_FIELD_EQ(inName,"focus") ) { if (inCallProp == hx::paccAlways) return set_focus(inValue); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"window") ) { window=inValue.Cast< ::lime::ui::Window >(); return inValue; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"quality") ) { quality=inValue.Cast< Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"__color") ) { __color=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"__dirty") ) { __dirty=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"__focus") ) { __focus=inValue.Cast< ::openfl::display::InteractiveObject >(); return inValue; }
		if (HX_FIELD_EQ(inName,"__stack") ) { __stack=inValue.Cast< Array< ::Dynamic > >(); return inValue; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"stage3Ds") ) { stage3Ds=inValue.Cast< ::openfl::_Vector::ObjectVector >(); return inValue; }
		if (HX_FIELD_EQ(inName,"__mouseX") ) { __mouseX=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"__mouseY") ) { __mouseY=inValue.Cast< Float >(); return inValue; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"frameRate") ) { if (inCallProp == hx::paccAlways) return set_frameRate(inValue); }
		if (HX_FIELD_EQ(inName,"scaleMode") ) { scaleMode=inValue.Cast< Dynamic >(); return inValue; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"stageWidth") ) { stageWidth=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"__renderer") ) { __renderer=inValue.Cast< ::openfl::_internal::renderer::AbstractRenderer >(); return inValue; }
		if (HX_FIELD_EQ(inName,"__wasDirty") ) { __wasDirty=inValue.Cast< bool >(); return inValue; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"application") ) { application=inValue.Cast< ::lime::app::Application >(); return inValue; }
		if (HX_FIELD_EQ(inName,"stageHeight") ) { stageHeight=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"__deltaTime") ) { __deltaTime=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"__rendering") ) { __rendering=inValue.Cast< bool >(); return inValue; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"displayState") ) { if (inCallProp == hx::paccAlways) return set_displayState(inValue); }
		if (HX_FIELD_EQ(inName,"__cacheFocus") ) { __cacheFocus=inValue.Cast< ::openfl::display::InteractiveObject >(); return inValue; }
		if (HX_FIELD_EQ(inName,"__colorSplit") ) { __colorSplit=inValue.Cast< Array< Float > >(); return inValue; }
		if (HX_FIELD_EQ(inName,"__dragBounds") ) { __dragBounds=inValue.Cast< ::openfl::geom::Rectangle >(); return inValue; }
		if (HX_FIELD_EQ(inName,"__dragObject") ) { __dragObject=inValue.Cast< ::openfl::display::Sprite >(); return inValue; }
		if (HX_FIELD_EQ(inName,"__fullscreen") ) { __fullscreen=inValue.Cast< bool >(); return inValue; }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"__colorString") ) { __colorString=inValue.Cast< ::String >(); return inValue; }
		if (HX_FIELD_EQ(inName,"__dragOffsetX") ) { __dragOffsetX=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"__dragOffsetY") ) { __dragOffsetY=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"__invalidated") ) { __invalidated=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"__macKeyboard") ) { __macKeyboard=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"__transparent") ) { __transparent=inValue.Cast< bool >(); return inValue; }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"stageFocusRect") ) { stageFocusRect=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"__displayState") ) { __displayState=inValue.Cast< Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"__logicalWidth") ) { __logicalWidth=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"__primaryTouch") ) { __primaryTouch=inValue.Cast< ::lime::ui::Touch >(); return inValue; }
		if (HX_FIELD_EQ(inName,"__rollOutStack") ) { __rollOutStack=inValue.Cast< Array< ::Dynamic > >(); return inValue; }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"__displayMatrix") ) { __displayMatrix=inValue.Cast< ::openfl::geom::Matrix >(); return inValue; }
		if (HX_FIELD_EQ(inName,"__lastClickTime") ) { __lastClickTime=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"__logicalHeight") ) { __logicalHeight=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"__mouseDownLeft") ) { __mouseDownLeft=inValue.Cast< ::openfl::display::InteractiveObject >(); return inValue; }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"allowsFullScreen") ) { allowsFullScreen=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"softKeyboardRect") ) { softKeyboardRect=inValue.Cast< ::openfl::geom::Rectangle >(); return inValue; }
		if (HX_FIELD_EQ(inName,"__mouseDownRight") ) { __mouseDownRight=inValue.Cast< ::openfl::display::InteractiveObject >(); return inValue; }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"__mouseDownMiddle") ) { __mouseDownMiddle=inValue.Cast< ::openfl::display::InteractiveObject >(); return inValue; }
		if (HX_FIELD_EQ(inName,"__mouseOverTarget") ) { __mouseOverTarget=inValue.Cast< ::openfl::display::InteractiveObject >(); return inValue; }
		break;
	case 19:
		if (HX_FIELD_EQ(inName,"__clearBeforeRender") ) { __clearBeforeRender=inValue.Cast< bool >(); return inValue; }
		break;
	case 22:
		if (HX_FIELD_EQ(inName,"showDefaultContextMenu") ) { showDefaultContextMenu=inValue.Cast< bool >(); return inValue; }
		break;
	case 27:
		if (HX_FIELD_EQ(inName,"allowsFullScreenInteractive") ) { allowsFullScreenInteractive=inValue.Cast< bool >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void Stage_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("align","\xc5","\x56","\x91","\x21"));
	outFields->push(HX_HCSTRING("allowsFullScreen","\xc5","\x66","\xdc","\x4b"));
	outFields->push(HX_HCSTRING("allowsFullScreenInteractive","\x1d","\x8b","\x2c","\xc8"));
	outFields->push(HX_HCSTRING("application","\x50","\xab","\x3e","\x2a"));
	outFields->push(HX_HCSTRING("color","\x63","\x71","\x5c","\x4a"));
	outFields->push(HX_HCSTRING("displayState","\x6f","\x4c","\x64","\x90"));
	outFields->push(HX_HCSTRING("focus","\xd8","\x5f","\x89","\x04"));
	outFields->push(HX_HCSTRING("frameRate","\xad","\x11","\x25","\x39"));
	outFields->push(HX_HCSTRING("fullScreenHeight","\xa2","\xe0","\x00","\xaa"));
	outFields->push(HX_HCSTRING("fullScreenWidth","\xab","\x8d","\x8a","\xe5"));
	outFields->push(HX_HCSTRING("quality","\xbf","\x04","\x4c","\x44"));
	outFields->push(HX_HCSTRING("scaleMode","\x0d","\xdb","\xd3","\x2b"));
	outFields->push(HX_HCSTRING("showDefaultContextMenu","\x4a","\x8c","\x83","\x33"));
	outFields->push(HX_HCSTRING("softKeyboardRect","\x75","\x35","\x3a","\xec"));
	outFields->push(HX_HCSTRING("stage3Ds","\xa4","\x4e","\x30","\xe3"));
	outFields->push(HX_HCSTRING("stageFocusRect","\x7e","\xd2","\x81","\x74"));
	outFields->push(HX_HCSTRING("stageHeight","\x45","\x89","\x45","\x95"));
	outFields->push(HX_HCSTRING("stageWidth","\x68","\x0a","\xb3","\x1d"));
	outFields->push(HX_HCSTRING("window","\xf0","\x93","\x8c","\x52"));
	outFields->push(HX_HCSTRING("__cacheFocus","\x56","\x41","\xd5","\x7f"));
	outFields->push(HX_HCSTRING("__clearBeforeRender","\x42","\xa3","\xd5","\xf3"));
	outFields->push(HX_HCSTRING("__color","\x43","\xca","\xba","\xb4"));
	outFields->push(HX_HCSTRING("__colorSplit","\x97","\x7d","\x6e","\xde"));
	outFields->push(HX_HCSTRING("__colorString","\x74","\xfb","\xd0","\x13"));
	outFields->push(HX_HCSTRING("__deltaTime","\x05","\x85","\x88","\x23"));
	outFields->push(HX_HCSTRING("__dirty","\xf2","\xa8","\x2e","\x44"));
	outFields->push(HX_HCSTRING("__displayMatrix","\x03","\x2b","\xdd","\x04"));
	outFields->push(HX_HCSTRING("__displayState","\x8f","\xcf","\x24","\xb1"));
	outFields->push(HX_HCSTRING("__dragBounds","\xa9","\x10","\x1d","\x47"));
	outFields->push(HX_HCSTRING("__dragObject","\xf3","\x08","\x3f","\xf6"));
	outFields->push(HX_HCSTRING("__dragOffsetX","\xb1","\x6c","\xfe","\xd5"));
	outFields->push(HX_HCSTRING("__dragOffsetY","\xb2","\x6c","\xfe","\xd5"));
	outFields->push(HX_HCSTRING("__focus","\xb8","\xb8","\xe7","\x6e"));
	outFields->push(HX_HCSTRING("__fullscreen","\x5b","\xb5","\x47","\x32"));
	outFields->push(HX_HCSTRING("__invalidated","\x69","\x73","\x24","\x06"));
	outFields->push(HX_HCSTRING("__lastClickTime","\x1f","\x4c","\xe7","\xb1"));
	outFields->push(HX_HCSTRING("__logicalWidth","\x9d","\xce","\x2c","\x0d"));
	outFields->push(HX_HCSTRING("__logicalHeight","\x70","\x73","\x57","\x30"));
	outFields->push(HX_HCSTRING("__macKeyboard","\x36","\x6b","\x9a","\xd8"));
	outFields->push(HX_HCSTRING("__mouseDownLeft","\xae","\x3d","\x4b","\x93"));
	outFields->push(HX_HCSTRING("__mouseDownMiddle","\xbc","\x00","\x70","\x1d"));
	outFields->push(HX_HCSTRING("__mouseDownRight","\x55","\xc8","\x97","\xc5"));
	outFields->push(HX_HCSTRING("__mouseOverTarget","\x2a","\xfb","\x94","\x00"));
	outFields->push(HX_HCSTRING("__mouseX","\xb3","\xb5","\x3d","\x74"));
	outFields->push(HX_HCSTRING("__mouseY","\xb4","\xb5","\x3d","\x74"));
	outFields->push(HX_HCSTRING("__primaryTouch","\xbd","\x6b","\x1c","\x30"));
	outFields->push(HX_HCSTRING("__renderer","\x63","\x38","\x14","\x56"));
	outFields->push(HX_HCSTRING("__rendering","\x2c","\x24","\xa0","\xfb"));
	outFields->push(HX_HCSTRING("__rollOutStack","\x97","\xe3","\x31","\x86"));
	outFields->push(HX_HCSTRING("__stack","\x28","\xc0","\x69","\xee"));
	outFields->push(HX_HCSTRING("__transparent","\x32","\x6c","\x32","\x6b"));
	outFields->push(HX_HCSTRING("__wasDirty","\x49","\xbd","\x55","\x63"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsObject /*Dynamic*/ ,(int)offsetof(Stage_obj,align),HX_HCSTRING("align","\xc5","\x56","\x91","\x21")},
	{hx::fsBool,(int)offsetof(Stage_obj,allowsFullScreen),HX_HCSTRING("allowsFullScreen","\xc5","\x66","\xdc","\x4b")},
	{hx::fsBool,(int)offsetof(Stage_obj,allowsFullScreenInteractive),HX_HCSTRING("allowsFullScreenInteractive","\x1d","\x8b","\x2c","\xc8")},
	{hx::fsObject /*::lime::app::Application*/ ,(int)offsetof(Stage_obj,application),HX_HCSTRING("application","\x50","\xab","\x3e","\x2a")},
	{hx::fsObject /*Dynamic*/ ,(int)offsetof(Stage_obj,quality),HX_HCSTRING("quality","\xbf","\x04","\x4c","\x44")},
	{hx::fsObject /*Dynamic*/ ,(int)offsetof(Stage_obj,scaleMode),HX_HCSTRING("scaleMode","\x0d","\xdb","\xd3","\x2b")},
	{hx::fsBool,(int)offsetof(Stage_obj,showDefaultContextMenu),HX_HCSTRING("showDefaultContextMenu","\x4a","\x8c","\x83","\x33")},
	{hx::fsObject /*::openfl::geom::Rectangle*/ ,(int)offsetof(Stage_obj,softKeyboardRect),HX_HCSTRING("softKeyboardRect","\x75","\x35","\x3a","\xec")},
	{hx::fsObject /*::openfl::_Vector::ObjectVector*/ ,(int)offsetof(Stage_obj,stage3Ds),HX_HCSTRING("stage3Ds","\xa4","\x4e","\x30","\xe3")},
	{hx::fsBool,(int)offsetof(Stage_obj,stageFocusRect),HX_HCSTRING("stageFocusRect","\x7e","\xd2","\x81","\x74")},
	{hx::fsInt,(int)offsetof(Stage_obj,stageHeight),HX_HCSTRING("stageHeight","\x45","\x89","\x45","\x95")},
	{hx::fsInt,(int)offsetof(Stage_obj,stageWidth),HX_HCSTRING("stageWidth","\x68","\x0a","\xb3","\x1d")},
	{hx::fsObject /*::lime::ui::Window*/ ,(int)offsetof(Stage_obj,window),HX_HCSTRING("window","\xf0","\x93","\x8c","\x52")},
	{hx::fsObject /*::openfl::display::InteractiveObject*/ ,(int)offsetof(Stage_obj,__cacheFocus),HX_HCSTRING("__cacheFocus","\x56","\x41","\xd5","\x7f")},
	{hx::fsBool,(int)offsetof(Stage_obj,__clearBeforeRender),HX_HCSTRING("__clearBeforeRender","\x42","\xa3","\xd5","\xf3")},
	{hx::fsInt,(int)offsetof(Stage_obj,__color),HX_HCSTRING("__color","\x43","\xca","\xba","\xb4")},
	{hx::fsObject /*Array< Float >*/ ,(int)offsetof(Stage_obj,__colorSplit),HX_HCSTRING("__colorSplit","\x97","\x7d","\x6e","\xde")},
	{hx::fsString,(int)offsetof(Stage_obj,__colorString),HX_HCSTRING("__colorString","\x74","\xfb","\xd0","\x13")},
	{hx::fsInt,(int)offsetof(Stage_obj,__deltaTime),HX_HCSTRING("__deltaTime","\x05","\x85","\x88","\x23")},
	{hx::fsBool,(int)offsetof(Stage_obj,__dirty),HX_HCSTRING("__dirty","\xf2","\xa8","\x2e","\x44")},
	{hx::fsObject /*::openfl::geom::Matrix*/ ,(int)offsetof(Stage_obj,__displayMatrix),HX_HCSTRING("__displayMatrix","\x03","\x2b","\xdd","\x04")},
	{hx::fsObject /*Dynamic*/ ,(int)offsetof(Stage_obj,__displayState),HX_HCSTRING("__displayState","\x8f","\xcf","\x24","\xb1")},
	{hx::fsObject /*::openfl::geom::Rectangle*/ ,(int)offsetof(Stage_obj,__dragBounds),HX_HCSTRING("__dragBounds","\xa9","\x10","\x1d","\x47")},
	{hx::fsObject /*::openfl::display::Sprite*/ ,(int)offsetof(Stage_obj,__dragObject),HX_HCSTRING("__dragObject","\xf3","\x08","\x3f","\xf6")},
	{hx::fsFloat,(int)offsetof(Stage_obj,__dragOffsetX),HX_HCSTRING("__dragOffsetX","\xb1","\x6c","\xfe","\xd5")},
	{hx::fsFloat,(int)offsetof(Stage_obj,__dragOffsetY),HX_HCSTRING("__dragOffsetY","\xb2","\x6c","\xfe","\xd5")},
	{hx::fsObject /*::openfl::display::InteractiveObject*/ ,(int)offsetof(Stage_obj,__focus),HX_HCSTRING("__focus","\xb8","\xb8","\xe7","\x6e")},
	{hx::fsBool,(int)offsetof(Stage_obj,__fullscreen),HX_HCSTRING("__fullscreen","\x5b","\xb5","\x47","\x32")},
	{hx::fsBool,(int)offsetof(Stage_obj,__invalidated),HX_HCSTRING("__invalidated","\x69","\x73","\x24","\x06")},
	{hx::fsInt,(int)offsetof(Stage_obj,__lastClickTime),HX_HCSTRING("__lastClickTime","\x1f","\x4c","\xe7","\xb1")},
	{hx::fsInt,(int)offsetof(Stage_obj,__logicalWidth),HX_HCSTRING("__logicalWidth","\x9d","\xce","\x2c","\x0d")},
	{hx::fsInt,(int)offsetof(Stage_obj,__logicalHeight),HX_HCSTRING("__logicalHeight","\x70","\x73","\x57","\x30")},
	{hx::fsBool,(int)offsetof(Stage_obj,__macKeyboard),HX_HCSTRING("__macKeyboard","\x36","\x6b","\x9a","\xd8")},
	{hx::fsObject /*::openfl::display::InteractiveObject*/ ,(int)offsetof(Stage_obj,__mouseDownLeft),HX_HCSTRING("__mouseDownLeft","\xae","\x3d","\x4b","\x93")},
	{hx::fsObject /*::openfl::display::InteractiveObject*/ ,(int)offsetof(Stage_obj,__mouseDownMiddle),HX_HCSTRING("__mouseDownMiddle","\xbc","\x00","\x70","\x1d")},
	{hx::fsObject /*::openfl::display::InteractiveObject*/ ,(int)offsetof(Stage_obj,__mouseDownRight),HX_HCSTRING("__mouseDownRight","\x55","\xc8","\x97","\xc5")},
	{hx::fsObject /*::openfl::display::InteractiveObject*/ ,(int)offsetof(Stage_obj,__mouseOverTarget),HX_HCSTRING("__mouseOverTarget","\x2a","\xfb","\x94","\x00")},
	{hx::fsFloat,(int)offsetof(Stage_obj,__mouseX),HX_HCSTRING("__mouseX","\xb3","\xb5","\x3d","\x74")},
	{hx::fsFloat,(int)offsetof(Stage_obj,__mouseY),HX_HCSTRING("__mouseY","\xb4","\xb5","\x3d","\x74")},
	{hx::fsObject /*::lime::ui::Touch*/ ,(int)offsetof(Stage_obj,__primaryTouch),HX_HCSTRING("__primaryTouch","\xbd","\x6b","\x1c","\x30")},
	{hx::fsObject /*::openfl::_internal::renderer::AbstractRenderer*/ ,(int)offsetof(Stage_obj,__renderer),HX_HCSTRING("__renderer","\x63","\x38","\x14","\x56")},
	{hx::fsBool,(int)offsetof(Stage_obj,__rendering),HX_HCSTRING("__rendering","\x2c","\x24","\xa0","\xfb")},
	{hx::fsObject /*Array< ::Dynamic >*/ ,(int)offsetof(Stage_obj,__rollOutStack),HX_HCSTRING("__rollOutStack","\x97","\xe3","\x31","\x86")},
	{hx::fsObject /*Array< ::Dynamic >*/ ,(int)offsetof(Stage_obj,__stack),HX_HCSTRING("__stack","\x28","\xc0","\x69","\xee")},
	{hx::fsBool,(int)offsetof(Stage_obj,__transparent),HX_HCSTRING("__transparent","\x32","\x6c","\x32","\x6b")},
	{hx::fsBool,(int)offsetof(Stage_obj,__wasDirty),HX_HCSTRING("__wasDirty","\x49","\xbd","\x55","\x63")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo *sStaticStorageInfo = 0;
#endif

static ::String sMemberFields[] = {
	HX_HCSTRING("align","\xc5","\x56","\x91","\x21"),
	HX_HCSTRING("allowsFullScreen","\xc5","\x66","\xdc","\x4b"),
	HX_HCSTRING("allowsFullScreenInteractive","\x1d","\x8b","\x2c","\xc8"),
	HX_HCSTRING("application","\x50","\xab","\x3e","\x2a"),
	HX_HCSTRING("quality","\xbf","\x04","\x4c","\x44"),
	HX_HCSTRING("scaleMode","\x0d","\xdb","\xd3","\x2b"),
	HX_HCSTRING("showDefaultContextMenu","\x4a","\x8c","\x83","\x33"),
	HX_HCSTRING("softKeyboardRect","\x75","\x35","\x3a","\xec"),
	HX_HCSTRING("stage3Ds","\xa4","\x4e","\x30","\xe3"),
	HX_HCSTRING("stageFocusRect","\x7e","\xd2","\x81","\x74"),
	HX_HCSTRING("stageHeight","\x45","\x89","\x45","\x95"),
	HX_HCSTRING("stageWidth","\x68","\x0a","\xb3","\x1d"),
	HX_HCSTRING("window","\xf0","\x93","\x8c","\x52"),
	HX_HCSTRING("__cacheFocus","\x56","\x41","\xd5","\x7f"),
	HX_HCSTRING("__clearBeforeRender","\x42","\xa3","\xd5","\xf3"),
	HX_HCSTRING("__color","\x43","\xca","\xba","\xb4"),
	HX_HCSTRING("__colorSplit","\x97","\x7d","\x6e","\xde"),
	HX_HCSTRING("__colorString","\x74","\xfb","\xd0","\x13"),
	HX_HCSTRING("__deltaTime","\x05","\x85","\x88","\x23"),
	HX_HCSTRING("__dirty","\xf2","\xa8","\x2e","\x44"),
	HX_HCSTRING("__displayMatrix","\x03","\x2b","\xdd","\x04"),
	HX_HCSTRING("__displayState","\x8f","\xcf","\x24","\xb1"),
	HX_HCSTRING("__dragBounds","\xa9","\x10","\x1d","\x47"),
	HX_HCSTRING("__dragObject","\xf3","\x08","\x3f","\xf6"),
	HX_HCSTRING("__dragOffsetX","\xb1","\x6c","\xfe","\xd5"),
	HX_HCSTRING("__dragOffsetY","\xb2","\x6c","\xfe","\xd5"),
	HX_HCSTRING("__focus","\xb8","\xb8","\xe7","\x6e"),
	HX_HCSTRING("__fullscreen","\x5b","\xb5","\x47","\x32"),
	HX_HCSTRING("__invalidated","\x69","\x73","\x24","\x06"),
	HX_HCSTRING("__lastClickTime","\x1f","\x4c","\xe7","\xb1"),
	HX_HCSTRING("__logicalWidth","\x9d","\xce","\x2c","\x0d"),
	HX_HCSTRING("__logicalHeight","\x70","\x73","\x57","\x30"),
	HX_HCSTRING("__macKeyboard","\x36","\x6b","\x9a","\xd8"),
	HX_HCSTRING("__mouseDownLeft","\xae","\x3d","\x4b","\x93"),
	HX_HCSTRING("__mouseDownMiddle","\xbc","\x00","\x70","\x1d"),
	HX_HCSTRING("__mouseDownRight","\x55","\xc8","\x97","\xc5"),
	HX_HCSTRING("__mouseOverTarget","\x2a","\xfb","\x94","\x00"),
	HX_HCSTRING("__mouseX","\xb3","\xb5","\x3d","\x74"),
	HX_HCSTRING("__mouseY","\xb4","\xb5","\x3d","\x74"),
	HX_HCSTRING("__primaryTouch","\xbd","\x6b","\x1c","\x30"),
	HX_HCSTRING("__renderer","\x63","\x38","\x14","\x56"),
	HX_HCSTRING("__rendering","\x2c","\x24","\xa0","\xfb"),
	HX_HCSTRING("__rollOutStack","\x97","\xe3","\x31","\x86"),
	HX_HCSTRING("__stack","\x28","\xc0","\x69","\xee"),
	HX_HCSTRING("__transparent","\x32","\x6c","\x32","\x6b"),
	HX_HCSTRING("__wasDirty","\x49","\xbd","\x55","\x63"),
	HX_HCSTRING("addRenderer","\x84","\xfc","\x37","\xe4"),
	HX_HCSTRING("addWindow","\xf1","\xc8","\xb0","\x0a"),
	HX_HCSTRING("registerModule","\x6f","\xbb","\x14","\x87"),
	HX_HCSTRING("removeRenderer","\xa7","\x01","\x32","\x7d"),
	HX_HCSTRING("removeWindow","\x54","\x2f","\xba","\xc1"),
	HX_HCSTRING("setPreloader","\x74","\xa4","\xcb","\xa6"),
	HX_HCSTRING("unregisterModule","\x88","\x2b","\x36","\x94"),
	HX_HCSTRING("globalToLocal","\xcd","\x4e","\xae","\x6b"),
	HX_HCSTRING("invalidate","\x7b","\x19","\x2a","\x87"),
	HX_HCSTRING("localToGlobal","\xc9","\x41","\xeb","\x47"),
	HX_HCSTRING("onGamepadAxisMove","\xb4","\xf7","\xd4","\x24"),
	HX_HCSTRING("onGamepadButtonDown","\x56","\xeb","\xb6","\x87"),
	HX_HCSTRING("onGamepadButtonUp","\x4f","\xf4","\x12","\xf1"),
	HX_HCSTRING("onGamepadConnect","\xc8","\x56","\xd7","\xec"),
	HX_HCSTRING("onGamepadDisconnect","\x3e","\xe8","\x96","\x44"),
	HX_HCSTRING("onJoystickAxisMove","\x6d","\xf4","\xd4","\x5b"),
	HX_HCSTRING("onJoystickButtonDown","\x4f","\x48","\x3a","\x7c"),
	HX_HCSTRING("onJoystickButtonUp","\x08","\xf1","\x12","\x28"),
	HX_HCSTRING("onJoystickConnect","\x2f","\x14","\xdd","\xfa"),
	HX_HCSTRING("onJoystickDisconnect","\x37","\x45","\x1a","\x39"),
	HX_HCSTRING("onJoystickHatMove","\x51","\x70","\x68","\x90"),
	HX_HCSTRING("onJoystickTrackballMove","\x40","\xc8","\x46","\x1a"),
	HX_HCSTRING("onKeyDown","\x42","\x22","\xf2","\x73"),
	HX_HCSTRING("onKeyUp","\x3b","\x58","\x3c","\x75"),
	HX_HCSTRING("onModuleExit","\xe9","\xbf","\xa3","\x0b"),
	HX_HCSTRING("onMouseDown","\x08","\x94","\x05","\x11"),
	HX_HCSTRING("onMouseMove","\xb7","\x7e","\xf8","\x16"),
	HX_HCSTRING("onMouseMoveRelative","\xa3","\x06","\xbf","\x7a"),
	HX_HCSTRING("onMouseUp","\x81","\xac","\x1d","\x98"),
	HX_HCSTRING("onMouseWheel","\x35","\xca","\xca","\xbf"),
	HX_HCSTRING("onPreloadComplete","\x43","\x37","\x5d","\x5c"),
	HX_HCSTRING("onPreloadProgress","\x37","\x2e","\xc0","\x62"),
	HX_HCSTRING("onRenderContextLost","\x9e","\x9b","\xa7","\x84"),
	HX_HCSTRING("onRenderContextRestored","\x10","\x54","\x6e","\x7a"),
	HX_HCSTRING("onTextEdit","\x96","\xf1","\xc0","\x23"),
	HX_HCSTRING("onTextInput","\xfe","\x36","\x4e","\x79"),
	HX_HCSTRING("onTouchMove","\x51","\x55","\x10","\x30"),
	HX_HCSTRING("onTouchEnd","\x9b","\x99","\xc0","\xdd"),
	HX_HCSTRING("onTouchStart","\x22","\xfa","\xdf","\x55"),
	HX_HCSTRING("onWindowActivate","\x42","\xe9","\xdd","\xeb"),
	HX_HCSTRING("onWindowClose","\xc9","\xca","\x1f","\x9c"),
	HX_HCSTRING("onWindowCreate","\xcb","\x62","\x6f","\x6d"),
	HX_HCSTRING("onWindowDeactivate","\x83","\xeb","\x6c","\x8c"),
	HX_HCSTRING("onWindowDropFile","\xda","\x43","\x88","\xef"),
	HX_HCSTRING("onWindowEnter","\x29","\x20","\x43","\xc4"),
	HX_HCSTRING("onWindowFocusIn","\x2e","\x9f","\x1f","\x84"),
	HX_HCSTRING("onWindowFocusOut","\x25","\x3d","\x90","\x17"),
	HX_HCSTRING("onWindowFullscreen","\x8a","\xc9","\x1f","\x4a"),
	HX_HCSTRING("onWindowLeave","\x08","\xe8","\x0f","\xc6"),
	HX_HCSTRING("onWindowMinimize","\xad","\x0c","\xab","\x27"),
	HX_HCSTRING("onWindowMove","\x20","\xfd","\x7a","\xab"),
	HX_HCSTRING("onWindowResize","\xc3","\x55","\xdb","\xf9"),
	HX_HCSTRING("onWindowRestore","\x9f","\xc0","\x4c","\xad"),
	HX_HCSTRING("render","\x56","\x6b","\x29","\x05"),
	HX_HCSTRING("update","\x09","\x86","\x05","\x87"),
	HX_HCSTRING("__broadcastEvent","\x79","\x9c","\xa4","\x95"),
	HX_HCSTRING("__createRenderer","\x7f","\xcf","\x55","\x39"),
	HX_HCSTRING("__drag","\x14","\x8f","\x68","\xf1"),
	HX_HCSTRING("__getInteractive","\x0c","\x1c","\x37","\xf8"),
	HX_HCSTRING("__handleError","\xe0","\xb7","\xeb","\x6d"),
	HX_HCSTRING("__onKey","\xa0","\x76","\xc7","\x9c"),
	HX_HCSTRING("__onGamepadConnect","\xe8","\xe9","\x67","\x58"),
	HX_HCSTRING("__onMouse","\x66","\x05","\xf1","\x23"),
	HX_HCSTRING("__onMouseWheel","\x55","\x4d","\x8b","\xe0"),
	HX_HCSTRING("__onTouch","\x00","\x07","\xbf","\x2b"),
	HX_HCSTRING("__resize","\x14","\xc5","\xaa","\xb0"),
	HX_HCSTRING("__setLogicalSize","\xc8","\x6d","\xcd","\x32"),
	HX_HCSTRING("__startDrag","\x56","\xee","\x8f","\x29"),
	HX_HCSTRING("__stopDrag","\x36","\xe4","\x62","\x38"),
	HX_HCSTRING("__update","\x29","\xf1","\x34","\x2f"),
	HX_HCSTRING("get_color","\xba","\xcd","\x05","\x8e"),
	HX_HCSTRING("set_color","\xc6","\xb9","\x56","\x71"),
	HX_HCSTRING("get_displayState","\xf8","\x38","\x03","\x95"),
	HX_HCSTRING("set_displayState","\x6c","\x26","\x45","\xeb"),
	HX_HCSTRING("get_focus","\x2f","\xbc","\x32","\x48"),
	HX_HCSTRING("set_focus","\x3b","\xa8","\x83","\x2b"),
	HX_HCSTRING("get_frameRate","\x84","\xe5","\x88","\xfa"),
	HX_HCSTRING("set_frameRate","\x90","\xc7","\x8e","\x3f"),
	HX_HCSTRING("get_fullScreenHeight","\xab","\x45","\x6b","\xc8"),
	HX_HCSTRING("get_fullScreenWidth","\xc2","\x5c","\x95","\x70"),
	HX_HCSTRING("set_height","\x24","\x16","\x51","\xf6"),
	HX_HCSTRING("get_mouseX","\x5c","\xba","\x95","\xbc"),
	HX_HCSTRING("get_mouseY","\x5d","\xba","\x95","\xbc"),
	HX_HCSTRING("set_rotation","\xbb","\x14","\x99","\xd2"),
	HX_HCSTRING("set_scaleX","\xcb","\xf8","\x2a","\x30"),
	HX_HCSTRING("set_scaleY","\xcc","\xf8","\x2a","\x30"),
	HX_HCSTRING("set_transform","\x4f","\xe3","\xfc","\x4b"),
	HX_HCSTRING("set_width","\x69","\xfe","\x5c","\xf1"),
	HX_HCSTRING("set_x","\x5b","\x9b","\x2f","\x7a"),
	HX_HCSTRING("set_y","\x5c","\x9b","\x2f","\x7a"),
	::String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(Stage_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(Stage_obj::__mClass,"__mClass");
};

#endif

hx::Class Stage_obj::__mClass;

void Stage_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("openfl.display.Stage","\x14","\x36","\x7c","\x5c");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = hx::Class_obj::dupFunctions(sMemberFields);
	__mClass->mCanCast = hx::TCanCast< Stage_obj >;
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

} // end namespace openfl
} // end namespace display
