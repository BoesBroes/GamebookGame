#include <hxcpp.h>

#ifndef INCLUDED_Reflect
#include <Reflect.h>
#endif
#ifndef INCLUDED_haxe_IMap
#include <haxe/IMap.h>
#endif
#ifndef INCLUDED_haxe_ds_IntMap
#include <haxe/ds/IntMap.h>
#endif
#ifndef INCLUDED_lime__backend_native_NativeApplication
#include <lime/_backend/native/NativeApplication.h>
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
#ifndef INCLUDED_lime_app__Event_Int_Void
#include <lime/app/_Event_Int_Void.h>
#endif
#ifndef INCLUDED_lime_app__Event_Void_Void
#include <lime/app/_Event_Void_Void.h>
#endif
#ifndef INCLUDED_lime_graphics_Renderer
#include <lime/graphics/Renderer.h>
#endif
#ifndef INCLUDED_lime_system_System
#include <lime/system/System.h>
#endif
#ifndef INCLUDED_lime_ui_Window
#include <lime/ui/Window.h>
#endif
namespace lime{
namespace app{

Void Application_obj::__construct()
{
{
	this->onUpdate = ::lime::app::_Event_Int_Void_obj::__new();
	super::__construct();
	::lime::app::Application tmp = ::lime::app::Application_obj::current;
	bool tmp1 = (tmp == null());
	if ((tmp1)){
		::lime::app::Application_obj::current = hx::ObjectPtr<OBJ_>(this);
	}
	this->modules = Array_obj< ::lime::app::IModule >::__new();
	::haxe::ds::IntMap tmp2 = ::haxe::ds::IntMap_obj::__new();
	this->windowByID = tmp2;
	::lime::_backend::native::NativeApplication tmp3 = ::lime::_backend::native::NativeApplication_obj::__new(hx::ObjectPtr<OBJ_>(this));
	this->backend = tmp3;
	this->registerModule(hx::ObjectPtr<OBJ_>(this));
}
;
	return null();
}

//Application_obj::~Application_obj() { }

Dynamic Application_obj::__CreateEmpty() { return  new Application_obj; }
hx::ObjectPtr< Application_obj > Application_obj::__new()
{  hx::ObjectPtr< Application_obj > _result_ = new Application_obj();
	_result_->__construct();
	return _result_;}

Dynamic Application_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< Application_obj > _result_ = new Application_obj();
	_result_->__construct();
	return _result_;}

void Application_obj::__init__() {
{
	Dynamic init = hx::ClassOf< ::lime::_backend::native::NativeApplication >();
}
}

Void Application_obj::addModule( ::lime::app::IModule module){
{
		module->registerModule(hx::ObjectPtr<OBJ_>(this));
		::lime::app::IModule tmp = module;
		this->modules->push(tmp);
		int tmp1 = this->__renderers->length;
		bool tmp2 = (tmp1 > (int)0);
		if ((tmp2)){
			int _g = (int)0;
			Array< ::Dynamic > _g1 = this->__renderers;
			while((true)){
				bool tmp3 = (_g < _g1->length);
				bool tmp4 = !(tmp3);
				if ((tmp4)){
					break;
				}
				::lime::graphics::Renderer tmp5 = _g1->__get(_g).StaticCast< ::lime::graphics::Renderer >();
				::lime::graphics::Renderer renderer = tmp5;
				++(_g);
				::lime::graphics::Renderer tmp6 = renderer;
				module->addRenderer(tmp6);
			}
		}
		int tmp3 = this->__windows->length;
		bool tmp4 = (tmp3 > (int)0);
		if ((tmp4)){
			int _g = (int)0;
			Array< ::Dynamic > _g1 = this->__windows;
			while((true)){
				bool tmp5 = (_g < _g1->length);
				bool tmp6 = !(tmp5);
				if ((tmp6)){
					break;
				}
				::lime::ui::Window tmp7 = _g1->__get(_g).StaticCast< ::lime::ui::Window >();
				::lime::ui::Window window = tmp7;
				++(_g);
				::lime::ui::Window tmp8 = window;
				module->addWindow(tmp8);
			}
		}
		::lime::app::Preloader tmp5 = this->__preloader;
		module->setPreloader(tmp5);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Application_obj,addModule,(void))

Void Application_obj::addRenderer( ::lime::graphics::Renderer renderer){
{
		::lime::graphics::Renderer tmp = renderer;
		this->super::addRenderer(tmp);
		{
			int _g = (int)0;
			Array< ::lime::app::IModule > _g1 = this->modules;
			while((true)){
				bool tmp1 = (_g < _g1->length);
				bool tmp2 = !(tmp1);
				if ((tmp2)){
					break;
				}
				::lime::app::IModule tmp3 = _g1->__get(_g);
				::lime::app::IModule module = tmp3;
				++(_g);
				::lime::graphics::Renderer tmp4 = renderer;
				module->addRenderer(tmp4);
			}
		}
	}
return null();
}


Void Application_obj::create( Dynamic config){
{
		this->config = config;
		::lime::_backend::native::NativeApplication tmp = this->backend;
		Dynamic tmp1 = config;
		tmp->create(tmp1);
		bool tmp2 = (config != null());
		if ((tmp2)){
			Dynamic tmp3 = config;
			bool tmp4 = ::Reflect_obj::hasField(tmp3,HX_HCSTRING("fps","\xe9","\xc7","\x4d","\x00"));
			if ((tmp4)){
				Float value = config->__Field(HX_HCSTRING("fps","\xe9","\xc7","\x4d","\x00"), hx::paccDynamic );
				::lime::_backend::native::NativeApplication tmp5 = this->backend;
				Float tmp6 = value;
				tmp5->setFrameRate(tmp6);
			}
			Dynamic tmp5 = config;
			bool tmp6 = ::Reflect_obj::hasField(tmp5,HX_HCSTRING("windows","\x83","\xde","\x74","\xe8"));
			if ((tmp6)){
				int _g = (int)0;
				cpp::ArrayBase _g1 = config->__Field(HX_HCSTRING("windows","\x83","\xde","\x74","\xe8"), hx::paccDynamic );
				while((true)){
					bool tmp7 = (_g < _g1->__Field(HX_HCSTRING("length","\xe6","\x94","\x07","\x9f"), hx::paccDynamic ));
					bool tmp8 = !(tmp7);
					if ((tmp8)){
						break;
					}
					Dynamic tmp9 = _g1->__GetItem(_g);
					Dynamic windowConfig = tmp9;
					++(_g);
					::lime::ui::Window tmp10 = ::lime::ui::Window_obj::__new(windowConfig);
					::lime::ui::Window window = tmp10;
					::lime::ui::Window tmp11 = window;
					this->createWindow(tmp11);
				}
			}
			::lime::app::Preloader tmp7 = this->__preloader;
			bool tmp8 = (tmp7 == null());
			bool tmp9 = !(tmp8);
			bool tmp10;
			if ((tmp9)){
				::lime::app::Preloader tmp11 = this->__preloader;
				::lime::app::Preloader tmp12 = tmp11;
				tmp10 = tmp12->complete;
			}
			else{
				tmp10 = true;
			}
			if ((tmp10)){
				::lime::app::Preloader tmp11 = this->__preloader;
				this->setPreloader(tmp11);
				{
					int _g = (int)0;
					Array< ::lime::app::IModule > _g1 = this->modules;
					while((true)){
						bool tmp12 = (_g < _g1->length);
						bool tmp13 = !(tmp12);
						if ((tmp13)){
							break;
						}
						::lime::app::IModule tmp14 = _g1->__get(_g);
						::lime::app::IModule module = tmp14;
						++(_g);
						::lime::app::Preloader tmp15 = this->__preloader;
						this->setPreloader(tmp15);
					}
				}
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Application_obj,create,(void))

Void Application_obj::createWindow( ::lime::ui::Window window){
{
		::lime::ui::Window tmp = window;
		this->super::addWindow(tmp);
		{
			int _g = (int)0;
			Array< ::lime::app::IModule > _g1 = this->modules;
			while((true)){
				bool tmp1 = (_g < _g1->length);
				bool tmp2 = !(tmp1);
				if ((tmp2)){
					break;
				}
				::lime::app::IModule tmp3 = _g1->__get(_g);
				::lime::app::IModule module = tmp3;
				++(_g);
				::lime::ui::Window tmp4 = window;
				module->addWindow(tmp4);
			}
		}
		bool tmp1 = (window->renderer == null());
		if ((tmp1)){
			::lime::graphics::Renderer tmp2 = ::lime::graphics::Renderer_obj::__new(window);
			::lime::graphics::Renderer renderer = tmp2;
			::lime::graphics::Renderer tmp3 = renderer;
			this->addRenderer(tmp3);
		}
		window->create(hx::ObjectPtr<OBJ_>(this));
		::haxe::ds::IntMap tmp2 = this->windowByID;
		int tmp3 = window->id;
		::lime::ui::Window tmp4 = window;
		tmp2->set(tmp3,tmp4);
		window->onCreate->dispatch();
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Application_obj,createWindow,(void))

int Application_obj::exec( ){
	::lime::app::Application_obj::current = hx::ObjectPtr<OBJ_>(this);
	::lime::_backend::native::NativeApplication tmp = this->backend;
	int tmp1 = tmp->exec();
	return tmp1;
}


HX_DEFINE_DYNAMIC_FUNC0(Application_obj,exec,return )

Void Application_obj::onModuleExit( int code){
{
		::lime::_backend::native::NativeApplication tmp = this->backend;
		tmp->exit();
	}
return null();
}


Void Application_obj::onWindowClose( ::lime::ui::Window window){
{
		::lime::ui::Window tmp = window;
		this->removeWindow(tmp);
	}
return null();
}


Void Application_obj::removeModule( ::lime::app::IModule module){
{
		bool tmp = (module != null());
		if ((tmp)){
			module->unregisterModule(hx::ObjectPtr<OBJ_>(this));
			::lime::app::IModule tmp1 = module;
			this->modules->remove(tmp1);
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Application_obj,removeModule,(void))

Void Application_obj::removeWindow( ::lime::ui::Window window){
{
		bool tmp = (window != null());
		bool tmp1;
		if ((tmp)){
			::haxe::ds::IntMap tmp2 = this->windowByID;
			::haxe::ds::IntMap tmp3 = tmp2;
			int tmp4 = window->id;
			int tmp5 = tmp4;
			tmp1 = tmp3->exists(tmp5);
		}
		else{
			tmp1 = false;
		}
		if ((tmp1)){
			::lime::ui::Window tmp2 = window;
			this->__windows->remove(tmp2);
			::haxe::ds::IntMap tmp3 = this->windowByID;
			int tmp4 = window->id;
			tmp3->remove(tmp4);
			window->close();
			bool tmp5 = (window->renderer != null());
			if ((tmp5)){
				::lime::graphics::Renderer tmp6 = window->renderer;
				this->removeRenderer(tmp6);
			}
			::lime::ui::Window tmp6 = this->__windows->__get((int)0).StaticCast< ::lime::ui::Window >();
			::lime::ui::Window tmp7 = window;
			bool tmp8 = (tmp6 == tmp7);
			if ((tmp8)){
				this->window = null();
			}
			int tmp9 = this->__windows->length;
			bool tmp10 = (tmp9 == (int)0);
			if ((tmp10)){
				::lime::_system::System_obj::exit((int)0);
			}
		}
	}
return null();
}


Void Application_obj::setPreloader( ::lime::app::Preloader preloader){
{
		::lime::app::Preloader tmp = preloader;
		this->super::setPreloader(tmp);
		{
			int _g = (int)0;
			Array< ::lime::app::IModule > _g1 = this->modules;
			while((true)){
				bool tmp1 = (_g < _g1->length);
				bool tmp2 = !(tmp1);
				if ((tmp2)){
					break;
				}
				::lime::app::IModule tmp3 = _g1->__get(_g);
				::lime::app::IModule module = tmp3;
				++(_g);
				::lime::app::Preloader tmp4 = preloader;
				module->setPreloader(tmp4);
			}
		}
	}
return null();
}


Float Application_obj::get_frameRate( ){
	::lime::_backend::native::NativeApplication tmp = this->backend;
	Float tmp1 = tmp->getFrameRate();
	return tmp1;
}


HX_DEFINE_DYNAMIC_FUNC0(Application_obj,get_frameRate,return )

Float Application_obj::set_frameRate( Float value){
	::lime::_backend::native::NativeApplication tmp = this->backend;
	Float tmp1 = value;
	Float tmp2 = tmp->setFrameRate(tmp1);
	return tmp2;
}


HX_DEFINE_DYNAMIC_FUNC1(Application_obj,set_frameRate,return )

::lime::app::Preloader Application_obj::get_preloader( ){
	::lime::app::Preloader tmp = this->__preloader;
	return tmp;
}


HX_DEFINE_DYNAMIC_FUNC0(Application_obj,get_preloader,return )

::lime::graphics::Renderer Application_obj::get_renderer( ){
	::lime::graphics::Renderer tmp = this->__renderers->__get((int)0).StaticCast< ::lime::graphics::Renderer >();
	return tmp;
}


HX_DEFINE_DYNAMIC_FUNC0(Application_obj,get_renderer,return )

Array< ::Dynamic > Application_obj::get_renderers( ){
	return this->__renderers;
}


HX_DEFINE_DYNAMIC_FUNC0(Application_obj,get_renderers,return )

::lime::ui::Window Application_obj::get_window( ){
	::lime::ui::Window tmp = this->__windows->__get((int)0).StaticCast< ::lime::ui::Window >();
	return tmp;
}


HX_DEFINE_DYNAMIC_FUNC0(Application_obj,get_window,return )

Array< ::Dynamic > Application_obj::get_windows( ){
	return this->__windows;
}


HX_DEFINE_DYNAMIC_FUNC0(Application_obj,get_windows,return )

::lime::app::Application Application_obj::current;


Application_obj::Application_obj()
{
}

void Application_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(Application);
	HX_MARK_MEMBER_NAME(config,"config");
	HX_MARK_MEMBER_NAME(modules,"modules");
	HX_MARK_MEMBER_NAME(preloader,"preloader");
	HX_MARK_MEMBER_NAME(onUpdate,"onUpdate");
	HX_MARK_MEMBER_NAME(renderer,"renderer");
	HX_MARK_MEMBER_NAME(renderers,"renderers");
	HX_MARK_MEMBER_NAME(window,"window");
	HX_MARK_MEMBER_NAME(windows,"windows");
	HX_MARK_MEMBER_NAME(backend,"backend");
	HX_MARK_MEMBER_NAME(windowByID,"windowByID");
	::lime::app::Module_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void Application_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(config,"config");
	HX_VISIT_MEMBER_NAME(modules,"modules");
	HX_VISIT_MEMBER_NAME(preloader,"preloader");
	HX_VISIT_MEMBER_NAME(onUpdate,"onUpdate");
	HX_VISIT_MEMBER_NAME(renderer,"renderer");
	HX_VISIT_MEMBER_NAME(renderers,"renderers");
	HX_VISIT_MEMBER_NAME(window,"window");
	HX_VISIT_MEMBER_NAME(windows,"windows");
	HX_VISIT_MEMBER_NAME(backend,"backend");
	HX_VISIT_MEMBER_NAME(windowByID,"windowByID");
	::lime::app::Module_obj::__Visit(HX_VISIT_ARG);
}

Dynamic Application_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"exec") ) { return exec_dyn(); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"config") ) { return config; }
		if (HX_FIELD_EQ(inName,"window") ) { return inCallProp == hx::paccAlways ? get_window() : window; }
		if (HX_FIELD_EQ(inName,"create") ) { return create_dyn(); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"modules") ) { return modules; }
		if (HX_FIELD_EQ(inName,"windows") ) { return inCallProp == hx::paccAlways ? get_windows() : windows; }
		if (HX_FIELD_EQ(inName,"backend") ) { return backend; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"onUpdate") ) { return onUpdate; }
		if (HX_FIELD_EQ(inName,"renderer") ) { return inCallProp == hx::paccAlways ? get_renderer() : renderer; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"frameRate") ) { if (inCallProp == hx::paccAlways) return get_frameRate(); }
		if (HX_FIELD_EQ(inName,"preloader") ) { return inCallProp == hx::paccAlways ? get_preloader() : preloader; }
		if (HX_FIELD_EQ(inName,"renderers") ) { return inCallProp == hx::paccAlways ? get_renderers() : renderers; }
		if (HX_FIELD_EQ(inName,"addModule") ) { return addModule_dyn(); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"windowByID") ) { return windowByID; }
		if (HX_FIELD_EQ(inName,"get_window") ) { return get_window_dyn(); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"addRenderer") ) { return addRenderer_dyn(); }
		if (HX_FIELD_EQ(inName,"get_windows") ) { return get_windows_dyn(); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"createWindow") ) { return createWindow_dyn(); }
		if (HX_FIELD_EQ(inName,"onModuleExit") ) { return onModuleExit_dyn(); }
		if (HX_FIELD_EQ(inName,"removeModule") ) { return removeModule_dyn(); }
		if (HX_FIELD_EQ(inName,"removeWindow") ) { return removeWindow_dyn(); }
		if (HX_FIELD_EQ(inName,"setPreloader") ) { return setPreloader_dyn(); }
		if (HX_FIELD_EQ(inName,"get_renderer") ) { return get_renderer_dyn(); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"onWindowClose") ) { return onWindowClose_dyn(); }
		if (HX_FIELD_EQ(inName,"get_frameRate") ) { return get_frameRate_dyn(); }
		if (HX_FIELD_EQ(inName,"set_frameRate") ) { return set_frameRate_dyn(); }
		if (HX_FIELD_EQ(inName,"get_preloader") ) { return get_preloader_dyn(); }
		if (HX_FIELD_EQ(inName,"get_renderers") ) { return get_renderers_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

bool Application_obj::__GetStatic(const ::String &inName, Dynamic &outValue, hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 7:
		if (HX_FIELD_EQ(inName,"current") ) { outValue = current; return true;  }
	}
	return false;
}

Dynamic Application_obj::__SetField(const ::String &inName,const Dynamic &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 6:
		if (HX_FIELD_EQ(inName,"config") ) { config=inValue.Cast< Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"window") ) { window=inValue.Cast< ::lime::ui::Window >(); return inValue; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"modules") ) { modules=inValue.Cast< Array< ::lime::app::IModule > >(); return inValue; }
		if (HX_FIELD_EQ(inName,"windows") ) { windows=inValue.Cast< Array< ::Dynamic > >(); return inValue; }
		if (HX_FIELD_EQ(inName,"backend") ) { backend=inValue.Cast< ::lime::_backend::native::NativeApplication >(); return inValue; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"onUpdate") ) { onUpdate=inValue.Cast< ::lime::app::_Event_Int_Void >(); return inValue; }
		if (HX_FIELD_EQ(inName,"renderer") ) { renderer=inValue.Cast< ::lime::graphics::Renderer >(); return inValue; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"frameRate") ) { if (inCallProp == hx::paccAlways) return set_frameRate(inValue); }
		if (HX_FIELD_EQ(inName,"preloader") ) { preloader=inValue.Cast< ::lime::app::Preloader >(); return inValue; }
		if (HX_FIELD_EQ(inName,"renderers") ) { renderers=inValue.Cast< Array< ::Dynamic > >(); return inValue; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"windowByID") ) { windowByID=inValue.Cast< ::haxe::ds::IntMap >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

bool Application_obj::__SetStatic(const ::String &inName,Dynamic &ioValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 7:
		if (HX_FIELD_EQ(inName,"current") ) { current=ioValue.Cast< ::lime::app::Application >(); return true; }
	}
	return false;
}

void Application_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("config","\xc2","\x56","\xd2","\xc7"));
	outFields->push(HX_HCSTRING("frameRate","\xad","\x11","\x25","\x39"));
	outFields->push(HX_HCSTRING("modules","\x47","\xe2","\xfa","\xf7"));
	outFields->push(HX_HCSTRING("preloader","\x76","\xe4","\x7b","\x82"));
	outFields->push(HX_HCSTRING("onUpdate","\x88","\x7c","\xb2","\x66"));
	outFields->push(HX_HCSTRING("renderer","\x43","\xc5","\xdb","\xb2"));
	outFields->push(HX_HCSTRING("renderers","\xd0","\xd5","\x70","\xcd"));
	outFields->push(HX_HCSTRING("window","\xf0","\x93","\x8c","\x52"));
	outFields->push(HX_HCSTRING("windows","\x83","\xde","\x74","\xe8"));
	outFields->push(HX_HCSTRING("backend","\x14","\xbc","\x87","\xfb"));
	outFields->push(HX_HCSTRING("windowByID","\x82","\x71","\xf9","\xcb"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsObject /*Dynamic*/ ,(int)offsetof(Application_obj,config),HX_HCSTRING("config","\xc2","\x56","\xd2","\xc7")},
	{hx::fsObject /*Array< ::lime::app::IModule >*/ ,(int)offsetof(Application_obj,modules),HX_HCSTRING("modules","\x47","\xe2","\xfa","\xf7")},
	{hx::fsObject /*::lime::app::Preloader*/ ,(int)offsetof(Application_obj,preloader),HX_HCSTRING("preloader","\x76","\xe4","\x7b","\x82")},
	{hx::fsObject /*::lime::app::_Event_Int_Void*/ ,(int)offsetof(Application_obj,onUpdate),HX_HCSTRING("onUpdate","\x88","\x7c","\xb2","\x66")},
	{hx::fsObject /*::lime::graphics::Renderer*/ ,(int)offsetof(Application_obj,renderer),HX_HCSTRING("renderer","\x43","\xc5","\xdb","\xb2")},
	{hx::fsObject /*Array< ::Dynamic >*/ ,(int)offsetof(Application_obj,renderers),HX_HCSTRING("renderers","\xd0","\xd5","\x70","\xcd")},
	{hx::fsObject /*::lime::ui::Window*/ ,(int)offsetof(Application_obj,window),HX_HCSTRING("window","\xf0","\x93","\x8c","\x52")},
	{hx::fsObject /*Array< ::Dynamic >*/ ,(int)offsetof(Application_obj,windows),HX_HCSTRING("windows","\x83","\xde","\x74","\xe8")},
	{hx::fsObject /*::lime::_backend::native::NativeApplication*/ ,(int)offsetof(Application_obj,backend),HX_HCSTRING("backend","\x14","\xbc","\x87","\xfb")},
	{hx::fsObject /*::haxe::ds::IntMap*/ ,(int)offsetof(Application_obj,windowByID),HX_HCSTRING("windowByID","\x82","\x71","\xf9","\xcb")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo sStaticStorageInfo[] = {
	{hx::fsObject /*::lime::app::Application*/ ,(void *) &Application_obj::current,HX_HCSTRING("current","\x39","\x9c","\xe3","\xcb")},
	{ hx::fsUnknown, 0, null()}
};
#endif

static ::String sMemberFields[] = {
	HX_HCSTRING("config","\xc2","\x56","\xd2","\xc7"),
	HX_HCSTRING("modules","\x47","\xe2","\xfa","\xf7"),
	HX_HCSTRING("preloader","\x76","\xe4","\x7b","\x82"),
	HX_HCSTRING("onUpdate","\x88","\x7c","\xb2","\x66"),
	HX_HCSTRING("renderer","\x43","\xc5","\xdb","\xb2"),
	HX_HCSTRING("renderers","\xd0","\xd5","\x70","\xcd"),
	HX_HCSTRING("window","\xf0","\x93","\x8c","\x52"),
	HX_HCSTRING("windows","\x83","\xde","\x74","\xe8"),
	HX_HCSTRING("backend","\x14","\xbc","\x87","\xfb"),
	HX_HCSTRING("windowByID","\x82","\x71","\xf9","\xcb"),
	HX_HCSTRING("addModule","\xad","\x69","\xf7","\x78"),
	HX_HCSTRING("addRenderer","\x84","\xfc","\x37","\xe4"),
	HX_HCSTRING("create","\xfc","\x66","\x0f","\x7c"),
	HX_HCSTRING("createWindow","\x0c","\xd4","\xe1","\x74"),
	HX_HCSTRING("exec","\x91","\xf3","\x1d","\x43"),
	HX_HCSTRING("onModuleExit","\xe9","\xbf","\xa3","\x0b"),
	HX_HCSTRING("onWindowClose","\xc9","\xca","\x1f","\x9c"),
	HX_HCSTRING("removeModule","\x10","\xd0","\x00","\x30"),
	HX_HCSTRING("removeWindow","\x54","\x2f","\xba","\xc1"),
	HX_HCSTRING("setPreloader","\x74","\xa4","\xcb","\xa6"),
	HX_HCSTRING("get_frameRate","\x84","\xe5","\x88","\xfa"),
	HX_HCSTRING("set_frameRate","\x90","\xc7","\x8e","\x3f"),
	HX_HCSTRING("get_preloader","\x4d","\xb8","\xdf","\x43"),
	HX_HCSTRING("get_renderer","\x4c","\x79","\xf5","\x67"),
	HX_HCSTRING("get_renderers","\xa7","\xa9","\xd4","\x8e"),
	HX_HCSTRING("get_window","\xb9","\x03","\x14","\x43"),
	HX_HCSTRING("get_windows","\x9a","\x3e","\x6f","\x6e"),
	::String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(Application_obj::__mClass,"__mClass");
	HX_MARK_MEMBER_NAME(Application_obj::current,"current");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(Application_obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(Application_obj::current,"current");
};

#endif

hx::Class Application_obj::__mClass;

static ::String sStaticFields[] = {
	HX_HCSTRING("current","\x39","\x9c","\xe3","\xcb"),
	::String(null()) };

void Application_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("lime.app.Application","\x8a","\x94","\x72","\x90");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &Application_obj::__GetStatic;
	__mClass->mSetStaticField = &Application_obj::__SetStatic;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(sStaticFields);
	__mClass->mMembers = hx::Class_obj::dupFunctions(sMemberFields);
	__mClass->mCanCast = hx::TCanCast< Application_obj >;
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
