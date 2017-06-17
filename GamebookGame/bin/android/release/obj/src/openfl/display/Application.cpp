#include <hxcpp.h>

#ifndef INCLUDED_Reflect
#include <Reflect.h>
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
#ifndef INCLUDED_lime_ui_Window
#include <lime/ui/Window.h>
#endif
#ifndef INCLUDED_openfl_Lib
#include <openfl/Lib.h>
#endif
#ifndef INCLUDED_openfl_display_Application
#include <openfl/display/Application.h>
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
#ifndef INCLUDED_openfl_display_Loader
#include <openfl/display/Loader.h>
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
#ifndef INCLUDED_openfl_display_Window
#include <openfl/display/Window.h>
#endif
#ifndef INCLUDED_openfl_events_EventDispatcher
#include <openfl/events/EventDispatcher.h>
#endif
#ifndef INCLUDED_openfl_events_IEventDispatcher
#include <openfl/events/IEventDispatcher.h>
#endif
namespace openfl{
namespace display{

Void Application_obj::__construct()
{
{
	super::__construct();
	::openfl::display::Application tmp = ::openfl::Lib_obj::application;
	bool tmp1 = (tmp == null());
	if ((tmp1)){
		::openfl::Lib_obj::application = hx::ObjectPtr<OBJ_>(this);
	}
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

Void Application_obj::create( Dynamic config){
{
		this->config = config;
		::lime::_backend::native::NativeApplication tmp = this->backend;
		Dynamic tmp1 = config;
		tmp->create(tmp1);
		::openfl::display::LoaderInfo tmp2 = ::openfl::display::LoaderInfo_obj::create(null());
		::openfl::display::MovieClip tmp3 = ::openfl::Lib_obj::current;
		tmp3->__loaderInfo = tmp2;
		::openfl::display::MovieClip tmp4 = ::openfl::Lib_obj::current;
		::openfl::display::MovieClip tmp5 = ::openfl::Lib_obj::current;
		tmp5->__loaderInfo->content = tmp4;
		bool tmp6 = (config != null());
		if ((tmp6)){
			Dynamic tmp7 = config;
			bool tmp8 = ::Reflect_obj::hasField(tmp7,HX_HCSTRING("fps","\xe9","\xc7","\x4d","\x00"));
			if ((tmp8)){
				Float value = config->__Field(HX_HCSTRING("fps","\xe9","\xc7","\x4d","\x00"), hx::paccDynamic );
				::lime::_backend::native::NativeApplication tmp9 = this->backend;
				Float tmp10 = value;
				tmp9->setFrameRate(tmp10);
			}
			Dynamic tmp9 = config;
			bool tmp10 = ::Reflect_obj::hasField(tmp9,HX_HCSTRING("windows","\x83","\xde","\x74","\xe8"));
			if ((tmp10)){
				int _g = (int)0;
				cpp::ArrayBase _g1 = config->__Field(HX_HCSTRING("windows","\x83","\xde","\x74","\xe8"), hx::paccDynamic );
				while((true)){
					bool tmp11 = (_g < _g1->__Field(HX_HCSTRING("length","\xe6","\x94","\x07","\x9f"), hx::paccDynamic ));
					bool tmp12 = !(tmp11);
					if ((tmp12)){
						break;
					}
					Dynamic tmp13 = _g1->__GetItem(_g);
					Dynamic windowConfig = tmp13;
					++(_g);
					::openfl::display::Window tmp14 = ::openfl::display::Window_obj::__new(windowConfig);
					::openfl::display::Window window = tmp14;
					::openfl::display::Window tmp15 = window;
					this->createWindow(tmp15);
				}
			}
			::lime::app::Preloader tmp11 = this->__preloader;
			bool tmp12 = (tmp11 == null());
			bool tmp13 = !(tmp12);
			bool tmp14;
			if ((tmp13)){
				::lime::app::Preloader tmp15 = this->__preloader;
				::lime::app::Preloader tmp16 = tmp15;
				tmp14 = tmp16->complete;
			}
			else{
				tmp14 = true;
			}
			if ((tmp14)){
				this->onPreloadComplete();
			}
		}
	}
return null();
}



Application_obj::Application_obj()
{
}

Dynamic Application_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 6:
		if (HX_FIELD_EQ(inName,"create") ) { return create_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

#if HXCPP_SCRIPTABLE
static hx::StorageInfo *sMemberStorageInfo = 0;
static hx::StaticInfo *sStaticStorageInfo = 0;
#endif

static ::String sMemberFields[] = {
	HX_HCSTRING("create","\xfc","\x66","\x0f","\x7c"),
	::String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(Application_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(Application_obj::__mClass,"__mClass");
};

#endif

hx::Class Application_obj::__mClass;

void Application_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("openfl.display.Application","\x26","\x9b","\x0f","\x74");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(0 /* sStaticFields */);
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

} // end namespace openfl
} // end namespace display
