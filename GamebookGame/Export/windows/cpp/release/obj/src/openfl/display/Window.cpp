#include <hxcpp.h>

#ifndef INCLUDED_Reflect
#include <Reflect.h>
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
#ifndef INCLUDED_openfl_display_LoaderInfo
#include <openfl/display/LoaderInfo.h>
#endif
#ifndef INCLUDED_openfl_display_Stage
#include <openfl/display/Stage.h>
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

Void Window_obj::__construct(Dynamic config)
{
{
	Dynamic tmp = config;
	super::__construct(tmp);
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

Void Window_obj::create( ::lime::app::Application application){
{
		::lime::app::Application tmp = application;
		this->super::create(tmp);
		Dynamic tmp1 = this->config;
		bool tmp2 = ::Reflect_obj::hasField(tmp1,HX_HCSTRING("background","\xee","\x93","\x1d","\x26"));
		Dynamic tmp3;
		if ((tmp2)){
			Dynamic tmp4 = this->config;
			tmp3 = tmp4->__Field(HX_HCSTRING("background","\xee","\x93","\x1d","\x26"), hx::paccDynamic );
		}
		else{
			tmp3 = (int)16777215;
		}
		::openfl::display::Stage tmp4 = ::openfl::display::Stage_obj::__new(hx::ObjectPtr<OBJ_>(this),tmp3);
		this->stage = tmp4;
		Dynamic tmp5 = this->config;
		bool tmp6 = ::Reflect_obj::hasField(tmp5,HX_HCSTRING("parameters","\xaa","\xbe","\x7e","\x51"));
		if ((tmp6)){
			try
			{
			HX_STACK_CATCHABLE(Dynamic, 0);
			{
				Dynamic tmp7 = this->config;
				::openfl::display::Stage tmp8 = this->stage;
				::openfl::display::LoaderInfo tmp9 = tmp8->get_loaderInfo();
				tmp9->parameters = tmp7->__Field(HX_HCSTRING("parameters","\xaa","\xbe","\x7e","\x51"), hx::paccDynamic );
			}
			}
			catch(Dynamic __e){
				{
					HX_STACK_BEGIN_CATCH
					Dynamic e = __e;{
					}
				}
			}
		}
		Dynamic tmp7 = this->config;
		Dynamic tmp8 = tmp7;
		bool tmp9 = ::Reflect_obj::hasField(tmp8,HX_HCSTRING("resizable","\x6b","\x37","\x50","\xa9"));
		bool tmp10;
		if ((tmp9)){
			Dynamic tmp11 = this->config;
			Dynamic tmp12 = tmp11;
			Dynamic tmp13 = tmp12->__Field(HX_HCSTRING("resizable","\x6b","\x37","\x50","\xa9"), hx::paccDynamic );
			Dynamic tmp14 = tmp13;
			tmp10 = !(tmp14);
		}
		else{
			tmp10 = false;
		}
		if ((tmp10)){
			::openfl::display::Stage tmp11 = this->stage;
			Dynamic tmp12 = this->config;
			Dynamic tmp13 = tmp12->__Field(HX_HCSTRING("width","\x06","\xb6","\x62","\xca"), hx::paccDynamic );
			Dynamic tmp14 = this->config;
			Dynamic tmp15 = tmp14->__Field(HX_HCSTRING("height","\xe7","\x07","\x4c","\x02"), hx::paccDynamic );
			tmp11->__setLogicalSize(tmp13,tmp15);
		}
		::openfl::display::Stage tmp11 = this->stage;
		application->addModule(tmp11);
	}
return null();
}



Window_obj::Window_obj()
{
}

Dynamic Window_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
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
	__mClass->mName = HX_HCSTRING("openfl.display.Window","\xda","\xb3","\xcd","\xdc");
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

} // end namespace openfl
} // end namespace display
