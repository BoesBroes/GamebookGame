#include <hxcpp.h>

#ifndef INCLUDED_haxe_IMap
#include <haxe/IMap.h>
#endif
#ifndef INCLUDED_haxe_ds_IntMap
#include <haxe/ds/IntMap.h>
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
#ifndef INCLUDED_lime_app__Event_lime_ui_Gamepad_Void
#include <lime/app/_Event_lime_ui_Gamepad_Void.h>
#endif
#ifndef INCLUDED_lime_app__Event_lime_ui_Joystick_Void
#include <lime/app/_Event_lime_ui_Joystick_Void.h>
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
namespace lime{
namespace app{

Void Module_obj::__construct()
{
{
	this->onExit = ::lime::app::_Event_Int_Void_obj::__new();
	this->__renderers = Array_obj< ::Dynamic >::__new();
	this->__windows = Array_obj< ::Dynamic >::__new();
}
;
	return null();
}

//Module_obj::~Module_obj() { }

Dynamic Module_obj::__CreateEmpty() { return  new Module_obj; }
hx::ObjectPtr< Module_obj > Module_obj::__new()
{  hx::ObjectPtr< Module_obj > _result_ = new Module_obj();
	_result_->__construct();
	return _result_;}

Dynamic Module_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< Module_obj > _result_ = new Module_obj();
	_result_->__construct();
	return _result_;}

hx::Object *Module_obj::__ToInterface(const hx::type_info &inType) {
	if (inType==typeid( ::lime::app::IModule_obj)) return operator ::lime::app::IModule_obj *();
	return super::__ToInterface(inType);
}

Module_obj::operator ::lime::app::IModule_obj *()
	{ return new ::lime::app::IModule_delegate_< Module_obj >(this); }
Void Module_obj::addRenderer( ::lime::graphics::Renderer renderer){
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
		::lime::graphics::Renderer tmp9 = renderer;
		this->__renderers->push(tmp9);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Module_obj,addRenderer,(void))

Void Module_obj::addWindow( ::lime::ui::Window window){
{
		Dynamic tmp = this->onWindowActivate_dyn();
		::lime::ui::Window tmp1 = window;
		Dynamic tmp2;
		{
			Dynamic f = tmp;
			::lime::ui::Window a1 = tmp1;

			HX_BEGIN_LOCAL_FUNC_S2(hx::LocalFunc,_Function_2_1,::lime::ui::Window,a1,Dynamic,f)
			int __ArgCount() const { return 0; }
			Void run(){
				{
					::lime::ui::Window tmp3 = a1;
					f(tmp3).Cast< Void >();
				}
				return null();
			}
			HX_END_LOCAL_FUNC0((void))

			tmp2 =  Dynamic(new _Function_2_1(a1,f));
		}
		window->onActivate->add(tmp2,null(),null());
		Dynamic tmp3 = this->__onWindowClose_dyn();
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
		window->onClose->add(tmp5,false,(int)-10000);
		Dynamic tmp6 = this->onWindowCreate_dyn();
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
		window->onCreate->add(tmp8,null(),null());
		Dynamic tmp9 = this->onWindowDeactivate_dyn();
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
		window->onDeactivate->add(tmp11,null(),null());
		Dynamic tmp12 = this->onWindowDropFile_dyn();
		::lime::ui::Window tmp13 = window;
		Dynamic tmp14;
		{
			Dynamic f = tmp12;
			::lime::ui::Window a1 = tmp13;

			HX_BEGIN_LOCAL_FUNC_S2(hx::LocalFunc,_Function_2_1,::lime::ui::Window,a1,Dynamic,f)
			int __ArgCount() const { return 1; }
			Void run(::String a2){
				{
					::lime::ui::Window tmp15 = a1;
					::String tmp16 = a2;
					f(tmp15,tmp16).Cast< Void >();
				}
				return null();
			}
			HX_END_LOCAL_FUNC1((void))

			tmp14 =  Dynamic(new _Function_2_1(a1,f));
		}
		window->onDropFile->add(tmp14,null(),null());
		Dynamic tmp15 = this->onWindowEnter_dyn();
		::lime::ui::Window tmp16 = window;
		Dynamic tmp17;
		{
			Dynamic f = tmp15;
			::lime::ui::Window a1 = tmp16;

			HX_BEGIN_LOCAL_FUNC_S2(hx::LocalFunc,_Function_2_1,::lime::ui::Window,a1,Dynamic,f)
			int __ArgCount() const { return 0; }
			Void run(){
				{
					::lime::ui::Window tmp18 = a1;
					f(tmp18).Cast< Void >();
				}
				return null();
			}
			HX_END_LOCAL_FUNC0((void))

			tmp17 =  Dynamic(new _Function_2_1(a1,f));
		}
		window->onEnter->add(tmp17,null(),null());
		Dynamic tmp18 = this->onWindowFocusIn_dyn();
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
		window->onFocusIn->add(tmp20,null(),null());
		Dynamic tmp21 = this->onWindowFocusOut_dyn();
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
		window->onFocusOut->add(tmp23,null(),null());
		Dynamic tmp24 = this->onWindowFullscreen_dyn();
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
		window->onFullscreen->add(tmp26,null(),null());
		Dynamic tmp27 = this->onKeyDown_dyn();
		::lime::ui::Window tmp28 = window;
		Dynamic tmp29;
		{
			Dynamic f = tmp27;
			::lime::ui::Window a1 = tmp28;

			HX_BEGIN_LOCAL_FUNC_S2(hx::LocalFunc,_Function_2_1,::lime::ui::Window,a1,Dynamic,f)
			int __ArgCount() const { return 2; }
			Void run(int a2,int a3){
				{
					::lime::ui::Window tmp30 = a1;
					int tmp31 = a2;
					int tmp32 = a3;
					f(tmp30,tmp31,tmp32).Cast< Void >();
				}
				return null();
			}
			HX_END_LOCAL_FUNC2((void))

			tmp29 =  Dynamic(new _Function_2_1(a1,f));
		}
		window->onKeyDown->add(tmp29,null(),null());
		Dynamic tmp30 = this->onKeyUp_dyn();
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
		window->onKeyUp->add(tmp32,null(),null());
		Dynamic tmp33 = this->onWindowLeave_dyn();
		::lime::ui::Window tmp34 = window;
		Dynamic tmp35;
		{
			Dynamic f = tmp33;
			::lime::ui::Window a1 = tmp34;

			HX_BEGIN_LOCAL_FUNC_S2(hx::LocalFunc,_Function_2_1,::lime::ui::Window,a1,Dynamic,f)
			int __ArgCount() const { return 0; }
			Void run(){
				{
					::lime::ui::Window tmp36 = a1;
					f(tmp36).Cast< Void >();
				}
				return null();
			}
			HX_END_LOCAL_FUNC0((void))

			tmp35 =  Dynamic(new _Function_2_1(a1,f));
		}
		window->onLeave->add(tmp35,null(),null());
		Dynamic tmp36 = this->onWindowMinimize_dyn();
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
		window->onMinimize->add(tmp38,null(),null());
		Dynamic tmp39 = this->onMouseDown_dyn();
		::lime::ui::Window tmp40 = window;
		Dynamic tmp41;
		{
			Dynamic f = tmp39;
			::lime::ui::Window a1 = tmp40;

			HX_BEGIN_LOCAL_FUNC_S2(hx::LocalFunc,_Function_2_1,::lime::ui::Window,a1,Dynamic,f)
			int __ArgCount() const { return 3; }
			Void run(Float x,Float y,int a2){
				{
					::lime::ui::Window tmp42 = a1;
					Float tmp43 = x;
					Float tmp44 = y;
					int tmp45 = a2;
					f(tmp42,tmp43,tmp44,tmp45).Cast< Void >();
				}
				return null();
			}
			HX_END_LOCAL_FUNC3((void))

			tmp41 =  Dynamic(new _Function_2_1(a1,f));
		}
		window->onMouseDown->add(tmp41,null(),null());
		Dynamic tmp42 = this->onMouseMove_dyn();
		::lime::ui::Window tmp43 = window;
		Dynamic tmp44;
		{
			Dynamic f = tmp42;
			::lime::ui::Window a1 = tmp43;

			HX_BEGIN_LOCAL_FUNC_S2(hx::LocalFunc,_Function_2_1,::lime::ui::Window,a1,Dynamic,f)
			int __ArgCount() const { return 2; }
			Void run(Float x,Float y){
				{
					::lime::ui::Window tmp45 = a1;
					Float tmp46 = x;
					Float tmp47 = y;
					f(tmp45,tmp46,tmp47).Cast< Void >();
				}
				return null();
			}
			HX_END_LOCAL_FUNC2((void))

			tmp44 =  Dynamic(new _Function_2_1(a1,f));
		}
		window->onMouseMove->add(tmp44,null(),null());
		Dynamic tmp45 = this->onMouseMoveRelative_dyn();
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
		window->onMouseMoveRelative->add(tmp47,null(),null());
		Dynamic tmp48 = this->onMouseUp_dyn();
		::lime::ui::Window tmp49 = window;
		Dynamic tmp50;
		{
			Dynamic f = tmp48;
			::lime::ui::Window a1 = tmp49;

			HX_BEGIN_LOCAL_FUNC_S2(hx::LocalFunc,_Function_2_1,::lime::ui::Window,a1,Dynamic,f)
			int __ArgCount() const { return 3; }
			Void run(Float x,Float y,int a2){
				{
					::lime::ui::Window tmp51 = a1;
					Float tmp52 = x;
					Float tmp53 = y;
					int tmp54 = a2;
					f(tmp51,tmp52,tmp53,tmp54).Cast< Void >();
				}
				return null();
			}
			HX_END_LOCAL_FUNC3((void))

			tmp50 =  Dynamic(new _Function_2_1(a1,f));
		}
		window->onMouseUp->add(tmp50,null(),null());
		Dynamic tmp51 = this->onMouseWheel_dyn();
		::lime::ui::Window tmp52 = window;
		Dynamic tmp53;
		{
			Dynamic f = tmp51;
			::lime::ui::Window a1 = tmp52;

			HX_BEGIN_LOCAL_FUNC_S2(hx::LocalFunc,_Function_2_1,::lime::ui::Window,a1,Dynamic,f)
			int __ArgCount() const { return 2; }
			Void run(Float a2,Float a3){
				{
					::lime::ui::Window tmp54 = a1;
					Float tmp55 = a2;
					Float tmp56 = a3;
					f(tmp54,tmp55,tmp56).Cast< Void >();
				}
				return null();
			}
			HX_END_LOCAL_FUNC2((void))

			tmp53 =  Dynamic(new _Function_2_1(a1,f));
		}
		window->onMouseWheel->add(tmp53,null(),null());
		Dynamic tmp54 = this->onWindowMove_dyn();
		::lime::ui::Window tmp55 = window;
		Dynamic tmp56;
		{
			Dynamic f = tmp54;
			::lime::ui::Window a1 = tmp55;

			HX_BEGIN_LOCAL_FUNC_S2(hx::LocalFunc,_Function_2_1,::lime::ui::Window,a1,Dynamic,f)
			int __ArgCount() const { return 2; }
			Void run(Float x,Float y){
				{
					::lime::ui::Window tmp57 = a1;
					Float tmp58 = x;
					Float tmp59 = y;
					f(tmp57,tmp58,tmp59).Cast< Void >();
				}
				return null();
			}
			HX_END_LOCAL_FUNC2((void))

			tmp56 =  Dynamic(new _Function_2_1(a1,f));
		}
		window->onMove->add(tmp56,null(),null());
		Dynamic tmp57 = this->onWindowResize_dyn();
		::lime::ui::Window tmp58 = window;
		Dynamic tmp59;
		{
			Dynamic f = tmp57;
			::lime::ui::Window a1 = tmp58;

			HX_BEGIN_LOCAL_FUNC_S2(hx::LocalFunc,_Function_2_1,::lime::ui::Window,a1,Dynamic,f)
			int __ArgCount() const { return 2; }
			Void run(int a2,int a3){
				{
					::lime::ui::Window tmp60 = a1;
					int tmp61 = a2;
					int tmp62 = a3;
					f(tmp60,tmp61,tmp62).Cast< Void >();
				}
				return null();
			}
			HX_END_LOCAL_FUNC2((void))

			tmp59 =  Dynamic(new _Function_2_1(a1,f));
		}
		window->onResize->add(tmp59,null(),null());
		Dynamic tmp60 = this->onWindowRestore_dyn();
		::lime::ui::Window tmp61 = window;
		Dynamic tmp62;
		{
			Dynamic f = tmp60;
			::lime::ui::Window a1 = tmp61;

			HX_BEGIN_LOCAL_FUNC_S2(hx::LocalFunc,_Function_2_1,::lime::ui::Window,a1,Dynamic,f)
			int __ArgCount() const { return 0; }
			Void run(){
				{
					::lime::ui::Window tmp63 = a1;
					f(tmp63).Cast< Void >();
				}
				return null();
			}
			HX_END_LOCAL_FUNC0((void))

			tmp62 =  Dynamic(new _Function_2_1(a1,f));
		}
		window->onRestore->add(tmp62,null(),null());
		Dynamic tmp63 = this->onTextEdit_dyn();
		::lime::ui::Window tmp64 = window;
		Dynamic tmp65;
		{
			Dynamic f = tmp63;
			::lime::ui::Window a1 = tmp64;

			HX_BEGIN_LOCAL_FUNC_S2(hx::LocalFunc,_Function_2_1,::lime::ui::Window,a1,Dynamic,f)
			int __ArgCount() const { return 3; }
			Void run(::String a2,int a3,int a4){
				{
					::lime::ui::Window tmp66 = a1;
					::String tmp67 = a2;
					int tmp68 = a3;
					int tmp69 = a4;
					f(tmp66,tmp67,tmp68,tmp69).Cast< Void >();
				}
				return null();
			}
			HX_END_LOCAL_FUNC3((void))

			tmp65 =  Dynamic(new _Function_2_1(a1,f));
		}
		window->onTextEdit->add(tmp65,null(),null());
		Dynamic tmp66 = this->onTextInput_dyn();
		::lime::ui::Window tmp67 = window;
		Dynamic tmp68;
		{
			Dynamic f = tmp66;
			::lime::ui::Window a1 = tmp67;

			HX_BEGIN_LOCAL_FUNC_S2(hx::LocalFunc,_Function_2_1,::lime::ui::Window,a1,Dynamic,f)
			int __ArgCount() const { return 1; }
			Void run(::String a2){
				{
					::lime::ui::Window tmp69 = a1;
					::String tmp70 = a2;
					f(tmp69,tmp70).Cast< Void >();
				}
				return null();
			}
			HX_END_LOCAL_FUNC1((void))

			tmp68 =  Dynamic(new _Function_2_1(a1,f));
		}
		window->onTextInput->add(tmp68,null(),null());
		bool tmp69 = (window->id > (int)-1);
		if ((tmp69)){
			::lime::ui::Window tmp70 = window;
			this->onWindowCreate(tmp70);
		}
		::lime::ui::Window tmp70 = window;
		this->__windows->push(tmp70);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Module_obj,addWindow,(void))

Void Module_obj::registerModule( ::lime::app::Application application){
{
		this->__application = application;
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
		::haxe::ds::IntMap tmp6 = ::lime::ui::Joystick_obj::devices;
		Dynamic tmp7 = tmp6->iterator();
		for(::cpp::FastIterator_obj< ::lime::ui::Joystick > *__it = ::cpp::CreateFastIterator< ::lime::ui::Joystick >(tmp7);  __it->hasNext(); ){
			::lime::ui::Joystick joystick = __it->next();
			{
				::lime::ui::Joystick tmp8 = joystick;
				this->__onJoystickConnect(tmp8);
			}
;
		}
		::lime::app::_Event_lime_ui_Joystick_Void tmp8 = ::lime::ui::Joystick_obj::onConnect;
		Dynamic tmp9 = this->__onJoystickConnect_dyn();
		tmp8->add(tmp9,null(),null());
		::lime::app::_Event_lime_ui_Touch_Void tmp10 = ::lime::ui::Touch_obj::onStart;
		Dynamic tmp11 = this->onTouchStart_dyn();
		tmp10->add(tmp11,null(),null());
		::lime::app::_Event_lime_ui_Touch_Void tmp12 = ::lime::ui::Touch_obj::onMove;
		Dynamic tmp13 = this->onTouchMove_dyn();
		tmp12->add(tmp13,null(),null());
		::lime::app::_Event_lime_ui_Touch_Void tmp14 = ::lime::ui::Touch_obj::onEnd;
		Dynamic tmp15 = this->onTouchEnd_dyn();
		tmp14->add(tmp15,null(),null());
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Module_obj,registerModule,(void))

Void Module_obj::removeRenderer( ::lime::graphics::Renderer renderer){
{
		bool tmp = (renderer != null());
		bool tmp1;
		if ((tmp)){
			::lime::graphics::Renderer tmp2 = renderer;
			::lime::graphics::Renderer tmp3 = tmp2;
			int tmp4 = this->__renderers->indexOf(tmp3,null());
			int tmp5 = tmp4;
			tmp1 = (tmp5 > (int)-1);
		}
		else{
			tmp1 = false;
		}
		if ((tmp1)){
			::lime::graphics::Renderer tmp2 = renderer;
			this->__renderers->remove(tmp2);
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Module_obj,removeRenderer,(void))

Void Module_obj::removeWindow( ::lime::ui::Window window){
{
		bool tmp = (window != null());
		bool tmp1;
		if ((tmp)){
			::lime::ui::Window tmp2 = window;
			::lime::ui::Window tmp3 = tmp2;
			int tmp4 = this->__windows->indexOf(tmp3,null());
			int tmp5 = tmp4;
			tmp1 = (tmp5 > (int)-1);
		}
		else{
			tmp1 = false;
		}
		if ((tmp1)){
			::lime::ui::Window tmp2 = window;
			this->__windows->remove(tmp2);
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Module_obj,removeWindow,(void))

Void Module_obj::setPreloader( ::lime::app::Preloader preloader){
{
		::lime::app::Preloader tmp = this->__preloader;
		bool tmp1 = (tmp != null());
		if ((tmp1)){
			::lime::app::Preloader tmp2 = this->__preloader;
			Dynamic tmp3 = this->onPreloadProgress_dyn();
			tmp2->onProgress->remove(tmp3);
			::lime::app::Preloader tmp4 = this->__preloader;
			Dynamic tmp5 = this->onPreloadComplete_dyn();
			tmp4->onComplete->remove(tmp5);
		}
		this->__preloader = preloader;
		bool tmp2 = (preloader == null());
		bool tmp3 = !(tmp2);
		bool tmp4;
		if ((tmp3)){
			tmp4 = preloader->complete;
		}
		else{
			tmp4 = true;
		}
		if ((tmp4)){
			this->onPreloadComplete();
		}
		else{
			Dynamic tmp5 = this->onPreloadProgress_dyn();
			preloader->onProgress->add(tmp5,null(),null());
			Dynamic tmp6 = this->onPreloadComplete_dyn();
			preloader->onComplete->add(tmp6,null(),null());
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Module_obj,setPreloader,(void))

Void Module_obj::unregisterModule( ::lime::app::Application application){
{
		::lime::app::Application tmp = this->__application;
		Dynamic tmp1 = this->onModuleExit_dyn();
		tmp->onExit->remove(tmp1);
		::lime::app::Application tmp2 = this->__application;
		Dynamic tmp3 = this->update_dyn();
		tmp2->onUpdate->remove(tmp3);
		::lime::app::_Event_lime_ui_Gamepad_Void tmp4 = ::lime::ui::Gamepad_obj::onConnect;
		Dynamic tmp5 = this->__onGamepadConnect_dyn();
		tmp4->remove(tmp5);
		::lime::app::_Event_lime_ui_Joystick_Void tmp6 = ::lime::ui::Joystick_obj::onConnect;
		Dynamic tmp7 = this->__onJoystickConnect_dyn();
		tmp6->remove(tmp7);
		::lime::app::_Event_lime_ui_Touch_Void tmp8 = ::lime::ui::Touch_obj::onStart;
		Dynamic tmp9 = this->onTouchStart_dyn();
		tmp8->remove(tmp9);
		::lime::app::_Event_lime_ui_Touch_Void tmp10 = ::lime::ui::Touch_obj::onMove;
		Dynamic tmp11 = this->onTouchMove_dyn();
		tmp10->remove(tmp11);
		::lime::app::_Event_lime_ui_Touch_Void tmp12 = ::lime::ui::Touch_obj::onEnd;
		Dynamic tmp13 = this->onTouchEnd_dyn();
		tmp12->remove(tmp13);
		this->onModuleExit((int)0);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Module_obj,unregisterModule,(void))

Void Module_obj::onGamepadAxisMove( ::lime::ui::Gamepad gamepad,int axis,Float value){
{
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC3(Module_obj,onGamepadAxisMove,(void))

Void Module_obj::onGamepadButtonDown( ::lime::ui::Gamepad gamepad,int button){
{
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(Module_obj,onGamepadButtonDown,(void))

Void Module_obj::onGamepadButtonUp( ::lime::ui::Gamepad gamepad,int button){
{
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(Module_obj,onGamepadButtonUp,(void))

Void Module_obj::onGamepadConnect( ::lime::ui::Gamepad gamepad){
{
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Module_obj,onGamepadConnect,(void))

Void Module_obj::onGamepadDisconnect( ::lime::ui::Gamepad gamepad){
{
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Module_obj,onGamepadDisconnect,(void))

Void Module_obj::onJoystickAxisMove( ::lime::ui::Joystick joystick,int axis,Float value){
{
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC3(Module_obj,onJoystickAxisMove,(void))

Void Module_obj::onJoystickButtonDown( ::lime::ui::Joystick joystick,int button){
{
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(Module_obj,onJoystickButtonDown,(void))

Void Module_obj::onJoystickButtonUp( ::lime::ui::Joystick joystick,int button){
{
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(Module_obj,onJoystickButtonUp,(void))

Void Module_obj::onJoystickConnect( ::lime::ui::Joystick joystick){
{
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Module_obj,onJoystickConnect,(void))

Void Module_obj::onJoystickDisconnect( ::lime::ui::Joystick joystick){
{
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Module_obj,onJoystickDisconnect,(void))

Void Module_obj::onJoystickHatMove( ::lime::ui::Joystick joystick,int hat,int position){
{
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC3(Module_obj,onJoystickHatMove,(void))

Void Module_obj::onJoystickTrackballMove( ::lime::ui::Joystick joystick,int trackball,Float x,Float y){
{
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC4(Module_obj,onJoystickTrackballMove,(void))

Void Module_obj::onKeyDown( ::lime::ui::Window window,int keyCode,int modifier){
{
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC3(Module_obj,onKeyDown,(void))

Void Module_obj::onKeyUp( ::lime::ui::Window window,int keyCode,int modifier){
{
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC3(Module_obj,onKeyUp,(void))

Void Module_obj::onModuleExit( int code){
{
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Module_obj,onModuleExit,(void))

Void Module_obj::onMouseDown( ::lime::ui::Window window,Float x,Float y,int button){
{
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC4(Module_obj,onMouseDown,(void))

Void Module_obj::onMouseMove( ::lime::ui::Window window,Float x,Float y){
{
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC3(Module_obj,onMouseMove,(void))

Void Module_obj::onMouseMoveRelative( ::lime::ui::Window window,Float x,Float y){
{
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC3(Module_obj,onMouseMoveRelative,(void))

Void Module_obj::onMouseUp( ::lime::ui::Window window,Float x,Float y,int button){
{
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC4(Module_obj,onMouseUp,(void))

Void Module_obj::onMouseWheel( ::lime::ui::Window window,Float deltaX,Float deltaY){
{
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC3(Module_obj,onMouseWheel,(void))

Void Module_obj::onPreloadComplete( ){
{
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(Module_obj,onPreloadComplete,(void))

Void Module_obj::onPreloadProgress( int loaded,int total){
{
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(Module_obj,onPreloadProgress,(void))

Void Module_obj::onRenderContextLost( ::lime::graphics::Renderer renderer){
{
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Module_obj,onRenderContextLost,(void))

Void Module_obj::onRenderContextRestored( ::lime::graphics::Renderer renderer,::lime::graphics::RenderContext context){
{
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(Module_obj,onRenderContextRestored,(void))

Void Module_obj::onTextEdit( ::lime::ui::Window window,::String text,int start,int length){
{
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC4(Module_obj,onTextEdit,(void))

Void Module_obj::onTextInput( ::lime::ui::Window window,::String text){
{
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(Module_obj,onTextInput,(void))

Void Module_obj::onTouchEnd( ::lime::ui::Touch touch){
{
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Module_obj,onTouchEnd,(void))

Void Module_obj::onTouchMove( ::lime::ui::Touch touch){
{
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Module_obj,onTouchMove,(void))

Void Module_obj::onTouchStart( ::lime::ui::Touch touch){
{
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Module_obj,onTouchStart,(void))

Void Module_obj::onWindowActivate( ::lime::ui::Window window){
{
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Module_obj,onWindowActivate,(void))

Void Module_obj::onWindowClose( ::lime::ui::Window window){
{
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Module_obj,onWindowClose,(void))

Void Module_obj::onWindowCreate( ::lime::ui::Window window){
{
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Module_obj,onWindowCreate,(void))

Void Module_obj::onWindowDeactivate( ::lime::ui::Window window){
{
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Module_obj,onWindowDeactivate,(void))

Void Module_obj::onWindowDropFile( ::lime::ui::Window window,::String file){
{
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(Module_obj,onWindowDropFile,(void))

Void Module_obj::onWindowEnter( ::lime::ui::Window window){
{
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Module_obj,onWindowEnter,(void))

Void Module_obj::onWindowFocusIn( ::lime::ui::Window window){
{
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Module_obj,onWindowFocusIn,(void))

Void Module_obj::onWindowFocusOut( ::lime::ui::Window window){
{
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Module_obj,onWindowFocusOut,(void))

Void Module_obj::onWindowFullscreen( ::lime::ui::Window window){
{
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Module_obj,onWindowFullscreen,(void))

Void Module_obj::onWindowLeave( ::lime::ui::Window window){
{
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Module_obj,onWindowLeave,(void))

Void Module_obj::onWindowMove( ::lime::ui::Window window,Float x,Float y){
{
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC3(Module_obj,onWindowMove,(void))

Void Module_obj::onWindowMinimize( ::lime::ui::Window window){
{
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Module_obj,onWindowMinimize,(void))

Void Module_obj::onWindowResize( ::lime::ui::Window window,int width,int height){
{
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC3(Module_obj,onWindowResize,(void))

Void Module_obj::onWindowRestore( ::lime::ui::Window window){
{
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Module_obj,onWindowRestore,(void))

Void Module_obj::render( ::lime::graphics::Renderer renderer){
{
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Module_obj,render,(void))

Void Module_obj::update( int deltaTime){
{
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Module_obj,update,(void))

Void Module_obj::__onGamepadConnect( ::lime::ui::Gamepad gamepad){
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


HX_DEFINE_DYNAMIC_FUNC1(Module_obj,__onGamepadConnect,(void))

Void Module_obj::__onJoystickConnect( ::lime::ui::Joystick joystick){
{
		::lime::ui::Joystick tmp = joystick;
		this->onJoystickConnect(tmp);
		Dynamic tmp1 = this->onJoystickAxisMove_dyn();
		::lime::ui::Joystick tmp2 = joystick;
		Dynamic tmp3;
		{
			Dynamic f = tmp1;
			::lime::ui::Joystick a1 = tmp2;

			HX_BEGIN_LOCAL_FUNC_S2(hx::LocalFunc,_Function_2_1,::lime::ui::Joystick,a1,Dynamic,f)
			int __ArgCount() const { return 2; }
			Void run(int a2,Float a3){
				{
					::lime::ui::Joystick tmp4 = a1;
					int tmp5 = a2;
					Float tmp6 = a3;
					f(tmp4,tmp5,tmp6).Cast< Void >();
				}
				return null();
			}
			HX_END_LOCAL_FUNC2((void))

			tmp3 =  Dynamic(new _Function_2_1(a1,f));
		}
		joystick->onAxisMove->add(tmp3,null(),null());
		Dynamic tmp4 = this->onJoystickButtonDown_dyn();
		::lime::ui::Joystick tmp5 = joystick;
		Dynamic tmp6;
		{
			Dynamic f = tmp4;
			::lime::ui::Joystick a1 = tmp5;

			HX_BEGIN_LOCAL_FUNC_S2(hx::LocalFunc,_Function_2_1,::lime::ui::Joystick,a1,Dynamic,f)
			int __ArgCount() const { return 1; }
			Void run(int a2){
				{
					::lime::ui::Joystick tmp7 = a1;
					int tmp8 = a2;
					f(tmp7,tmp8).Cast< Void >();
				}
				return null();
			}
			HX_END_LOCAL_FUNC1((void))

			tmp6 =  Dynamic(new _Function_2_1(a1,f));
		}
		joystick->onButtonDown->add(tmp6,null(),null());
		Dynamic tmp7 = this->onJoystickButtonUp_dyn();
		::lime::ui::Joystick tmp8 = joystick;
		Dynamic tmp9;
		{
			Dynamic f = tmp7;
			::lime::ui::Joystick a1 = tmp8;

			HX_BEGIN_LOCAL_FUNC_S2(hx::LocalFunc,_Function_2_1,::lime::ui::Joystick,a1,Dynamic,f)
			int __ArgCount() const { return 1; }
			Void run(int a2){
				{
					::lime::ui::Joystick tmp10 = a1;
					int tmp11 = a2;
					f(tmp10,tmp11).Cast< Void >();
				}
				return null();
			}
			HX_END_LOCAL_FUNC1((void))

			tmp9 =  Dynamic(new _Function_2_1(a1,f));
		}
		joystick->onButtonUp->add(tmp9,null(),null());
		Dynamic tmp10 = this->onJoystickDisconnect_dyn();
		::lime::ui::Joystick tmp11 = joystick;
		Dynamic tmp12;
		{
			Dynamic f = tmp10;
			::lime::ui::Joystick a1 = tmp11;

			HX_BEGIN_LOCAL_FUNC_S2(hx::LocalFunc,_Function_2_1,::lime::ui::Joystick,a1,Dynamic,f)
			int __ArgCount() const { return 0; }
			Void run(){
				{
					::lime::ui::Joystick tmp13 = a1;
					f(tmp13).Cast< Void >();
				}
				return null();
			}
			HX_END_LOCAL_FUNC0((void))

			tmp12 =  Dynamic(new _Function_2_1(a1,f));
		}
		joystick->onDisconnect->add(tmp12,null(),null());
		Dynamic tmp13 = this->onJoystickHatMove_dyn();
		::lime::ui::Joystick tmp14 = joystick;
		Dynamic tmp15;
		{
			Dynamic f = tmp13;
			::lime::ui::Joystick a1 = tmp14;

			HX_BEGIN_LOCAL_FUNC_S2(hx::LocalFunc,_Function_2_1,::lime::ui::Joystick,a1,Dynamic,f)
			int __ArgCount() const { return 2; }
			Void run(int a2,int a3){
				{
					::lime::ui::Joystick tmp16 = a1;
					int tmp17 = a2;
					int tmp18 = a3;
					f(tmp16,tmp17,tmp18).Cast< Void >();
				}
				return null();
			}
			HX_END_LOCAL_FUNC2((void))

			tmp15 =  Dynamic(new _Function_2_1(a1,f));
		}
		joystick->onHatMove->add(tmp15,null(),null());
		Dynamic tmp16 = this->onJoystickTrackballMove_dyn();
		::lime::ui::Joystick tmp17 = joystick;
		Dynamic tmp18;
		{
			Dynamic f = tmp16;
			::lime::ui::Joystick a1 = tmp17;

			HX_BEGIN_LOCAL_FUNC_S2(hx::LocalFunc,_Function_2_1,::lime::ui::Joystick,a1,Dynamic,f)
			int __ArgCount() const { return 3; }
			Void run(int a2,Float x,Float y){
				{
					::lime::ui::Joystick tmp19 = a1;
					int tmp20 = a2;
					Float tmp21 = x;
					Float tmp22 = y;
					f(tmp19,tmp20,tmp21,tmp22).Cast< Void >();
				}
				return null();
			}
			HX_END_LOCAL_FUNC3((void))

			tmp18 =  Dynamic(new _Function_2_1(a1,f));
		}
		joystick->onTrackballMove->add(tmp18,null(),null());
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Module_obj,__onJoystickConnect,(void))

Void Module_obj::__onWindowClose( ::lime::ui::Window window){
{
		::lime::ui::Window tmp = window;
		this->onWindowClose(tmp);
		::lime::ui::Window tmp1 = window;
		this->__windows->remove(tmp1);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Module_obj,__onWindowClose,(void))


Module_obj::Module_obj()
{
}

void Module_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(Module);
	HX_MARK_MEMBER_NAME(onExit,"onExit");
	HX_MARK_MEMBER_NAME(__application,"__application");
	HX_MARK_MEMBER_NAME(__preloader,"__preloader");
	HX_MARK_MEMBER_NAME(__renderers,"__renderers");
	HX_MARK_MEMBER_NAME(__windows,"__windows");
	HX_MARK_END_CLASS();
}

void Module_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(onExit,"onExit");
	HX_VISIT_MEMBER_NAME(__application,"__application");
	HX_VISIT_MEMBER_NAME(__preloader,"__preloader");
	HX_VISIT_MEMBER_NAME(__renderers,"__renderers");
	HX_VISIT_MEMBER_NAME(__windows,"__windows");
}

Dynamic Module_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 6:
		if (HX_FIELD_EQ(inName,"onExit") ) { return onExit; }
		if (HX_FIELD_EQ(inName,"render") ) { return render_dyn(); }
		if (HX_FIELD_EQ(inName,"update") ) { return update_dyn(); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"onKeyUp") ) { return onKeyUp_dyn(); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"__windows") ) { return __windows; }
		if (HX_FIELD_EQ(inName,"addWindow") ) { return addWindow_dyn(); }
		if (HX_FIELD_EQ(inName,"onKeyDown") ) { return onKeyDown_dyn(); }
		if (HX_FIELD_EQ(inName,"onMouseUp") ) { return onMouseUp_dyn(); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"onTextEdit") ) { return onTextEdit_dyn(); }
		if (HX_FIELD_EQ(inName,"onTouchEnd") ) { return onTouchEnd_dyn(); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"__preloader") ) { return __preloader; }
		if (HX_FIELD_EQ(inName,"__renderers") ) { return __renderers; }
		if (HX_FIELD_EQ(inName,"addRenderer") ) { return addRenderer_dyn(); }
		if (HX_FIELD_EQ(inName,"onMouseDown") ) { return onMouseDown_dyn(); }
		if (HX_FIELD_EQ(inName,"onMouseMove") ) { return onMouseMove_dyn(); }
		if (HX_FIELD_EQ(inName,"onTextInput") ) { return onTextInput_dyn(); }
		if (HX_FIELD_EQ(inName,"onTouchMove") ) { return onTouchMove_dyn(); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"removeWindow") ) { return removeWindow_dyn(); }
		if (HX_FIELD_EQ(inName,"setPreloader") ) { return setPreloader_dyn(); }
		if (HX_FIELD_EQ(inName,"onModuleExit") ) { return onModuleExit_dyn(); }
		if (HX_FIELD_EQ(inName,"onMouseWheel") ) { return onMouseWheel_dyn(); }
		if (HX_FIELD_EQ(inName,"onTouchStart") ) { return onTouchStart_dyn(); }
		if (HX_FIELD_EQ(inName,"onWindowMove") ) { return onWindowMove_dyn(); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"__application") ) { return __application; }
		if (HX_FIELD_EQ(inName,"onWindowClose") ) { return onWindowClose_dyn(); }
		if (HX_FIELD_EQ(inName,"onWindowEnter") ) { return onWindowEnter_dyn(); }
		if (HX_FIELD_EQ(inName,"onWindowLeave") ) { return onWindowLeave_dyn(); }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"registerModule") ) { return registerModule_dyn(); }
		if (HX_FIELD_EQ(inName,"removeRenderer") ) { return removeRenderer_dyn(); }
		if (HX_FIELD_EQ(inName,"onWindowCreate") ) { return onWindowCreate_dyn(); }
		if (HX_FIELD_EQ(inName,"onWindowResize") ) { return onWindowResize_dyn(); }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"onWindowFocusIn") ) { return onWindowFocusIn_dyn(); }
		if (HX_FIELD_EQ(inName,"onWindowRestore") ) { return onWindowRestore_dyn(); }
		if (HX_FIELD_EQ(inName,"__onWindowClose") ) { return __onWindowClose_dyn(); }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"unregisterModule") ) { return unregisterModule_dyn(); }
		if (HX_FIELD_EQ(inName,"onGamepadConnect") ) { return onGamepadConnect_dyn(); }
		if (HX_FIELD_EQ(inName,"onWindowActivate") ) { return onWindowActivate_dyn(); }
		if (HX_FIELD_EQ(inName,"onWindowDropFile") ) { return onWindowDropFile_dyn(); }
		if (HX_FIELD_EQ(inName,"onWindowFocusOut") ) { return onWindowFocusOut_dyn(); }
		if (HX_FIELD_EQ(inName,"onWindowMinimize") ) { return onWindowMinimize_dyn(); }
		break;
	case 17:
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
		if (HX_FIELD_EQ(inName,"onGamepadButtonDown") ) { return onGamepadButtonDown_dyn(); }
		if (HX_FIELD_EQ(inName,"onGamepadDisconnect") ) { return onGamepadDisconnect_dyn(); }
		if (HX_FIELD_EQ(inName,"onMouseMoveRelative") ) { return onMouseMoveRelative_dyn(); }
		if (HX_FIELD_EQ(inName,"onRenderContextLost") ) { return onRenderContextLost_dyn(); }
		if (HX_FIELD_EQ(inName,"__onJoystickConnect") ) { return __onJoystickConnect_dyn(); }
		break;
	case 20:
		if (HX_FIELD_EQ(inName,"onJoystickButtonDown") ) { return onJoystickButtonDown_dyn(); }
		if (HX_FIELD_EQ(inName,"onJoystickDisconnect") ) { return onJoystickDisconnect_dyn(); }
		break;
	case 23:
		if (HX_FIELD_EQ(inName,"onJoystickTrackballMove") ) { return onJoystickTrackballMove_dyn(); }
		if (HX_FIELD_EQ(inName,"onRenderContextRestored") ) { return onRenderContextRestored_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic Module_obj::__SetField(const ::String &inName,const Dynamic &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 6:
		if (HX_FIELD_EQ(inName,"onExit") ) { onExit=inValue.Cast< ::lime::app::_Event_Int_Void >(); return inValue; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"__windows") ) { __windows=inValue.Cast< Array< ::Dynamic > >(); return inValue; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"__preloader") ) { __preloader=inValue.Cast< ::lime::app::Preloader >(); return inValue; }
		if (HX_FIELD_EQ(inName,"__renderers") ) { __renderers=inValue.Cast< Array< ::Dynamic > >(); return inValue; }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"__application") ) { __application=inValue.Cast< ::lime::app::Application >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void Module_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("onExit","\xdd","\xff","\xa7","\xe5"));
	outFields->push(HX_HCSTRING("__application","\x30","\xec","\xb6","\x72"));
	outFields->push(HX_HCSTRING("__preloader","\x56","\x2d","\xa8","\xb0"));
	outFields->push(HX_HCSTRING("__renderers","\xb0","\x1e","\x9d","\xfb"));
	outFields->push(HX_HCSTRING("__windows","\x63","\x2f","\xc3","\x69"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsObject /*::lime::app::_Event_Int_Void*/ ,(int)offsetof(Module_obj,onExit),HX_HCSTRING("onExit","\xdd","\xff","\xa7","\xe5")},
	{hx::fsObject /*::lime::app::Application*/ ,(int)offsetof(Module_obj,__application),HX_HCSTRING("__application","\x30","\xec","\xb6","\x72")},
	{hx::fsObject /*::lime::app::Preloader*/ ,(int)offsetof(Module_obj,__preloader),HX_HCSTRING("__preloader","\x56","\x2d","\xa8","\xb0")},
	{hx::fsObject /*Array< ::Dynamic >*/ ,(int)offsetof(Module_obj,__renderers),HX_HCSTRING("__renderers","\xb0","\x1e","\x9d","\xfb")},
	{hx::fsObject /*Array< ::Dynamic >*/ ,(int)offsetof(Module_obj,__windows),HX_HCSTRING("__windows","\x63","\x2f","\xc3","\x69")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo *sStaticStorageInfo = 0;
#endif

static ::String sMemberFields[] = {
	HX_HCSTRING("onExit","\xdd","\xff","\xa7","\xe5"),
	HX_HCSTRING("__application","\x30","\xec","\xb6","\x72"),
	HX_HCSTRING("__preloader","\x56","\x2d","\xa8","\xb0"),
	HX_HCSTRING("__renderers","\xb0","\x1e","\x9d","\xfb"),
	HX_HCSTRING("__windows","\x63","\x2f","\xc3","\x69"),
	HX_HCSTRING("addRenderer","\x84","\xfc","\x37","\xe4"),
	HX_HCSTRING("addWindow","\xf1","\xc8","\xb0","\x0a"),
	HX_HCSTRING("registerModule","\x6f","\xbb","\x14","\x87"),
	HX_HCSTRING("removeRenderer","\xa7","\x01","\x32","\x7d"),
	HX_HCSTRING("removeWindow","\x54","\x2f","\xba","\xc1"),
	HX_HCSTRING("setPreloader","\x74","\xa4","\xcb","\xa6"),
	HX_HCSTRING("unregisterModule","\x88","\x2b","\x36","\x94"),
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
	HX_HCSTRING("onTouchEnd","\x9b","\x99","\xc0","\xdd"),
	HX_HCSTRING("onTouchMove","\x51","\x55","\x10","\x30"),
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
	HX_HCSTRING("onWindowMove","\x20","\xfd","\x7a","\xab"),
	HX_HCSTRING("onWindowMinimize","\xad","\x0c","\xab","\x27"),
	HX_HCSTRING("onWindowResize","\xc3","\x55","\xdb","\xf9"),
	HX_HCSTRING("onWindowRestore","\x9f","\xc0","\x4c","\xad"),
	HX_HCSTRING("render","\x56","\x6b","\x29","\x05"),
	HX_HCSTRING("update","\x09","\x86","\x05","\x87"),
	HX_HCSTRING("__onGamepadConnect","\xe8","\xe9","\x67","\x58"),
	HX_HCSTRING("__onJoystickConnect","\x0f","\x3d","\xcd","\xad"),
	HX_HCSTRING("__onWindowClose","\xa9","\x03","\xd2","\x23"),
	::String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(Module_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(Module_obj::__mClass,"__mClass");
};

#endif

hx::Class Module_obj::__mClass;

void Module_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("lime.app.Module","\xb2","\xd5","\xdb","\x18");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = hx::Class_obj::dupFunctions(sMemberFields);
	__mClass->mCanCast = hx::TCanCast< Module_obj >;
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
} // end namespace app
