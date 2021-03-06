#include <hxcpp.h>

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
#ifndef INCLUDED_lime_graphics_Renderer
#include <lime/graphics/Renderer.h>
#endif
#ifndef INCLUDED_lime_ui_Window
#include <lime/ui/Window.h>
#endif
namespace lime{
namespace app{


static ::String sMemberFields[] = {
	HX_HCSTRING("addRenderer","\x84","\xfc","\x37","\xe4"),
	HX_HCSTRING("addWindow","\xf1","\xc8","\xb0","\x0a"),
	HX_HCSTRING("registerModule","\x6f","\xbb","\x14","\x87"),
	HX_HCSTRING("removeRenderer","\xa7","\x01","\x32","\x7d"),
	HX_HCSTRING("removeWindow","\x54","\x2f","\xba","\xc1"),
	HX_HCSTRING("setPreloader","\x74","\xa4","\xcb","\xa6"),
	HX_HCSTRING("unregisterModule","\x88","\x2b","\x36","\x94"),
	::String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(IModule_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(IModule_obj::__mClass,"__mClass");
};

#endif

hx::Class IModule_obj::__mClass;

void IModule_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("lime.app.IModule","\x2f","\xa2","\x39","\xb3");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mMembers = hx::Class_obj::dupFunctions(sMemberFields);
	__mClass->mCanCast = hx::TCanCast< IModule_obj >;
#ifdef HXCPP_VISIT_ALLOCS
	__mClass->mVisitFunc = sVisitStatics;
#endif
	hx::RegisterClass(__mClass->mName, __mClass);
}

} // end namespace lime
} // end namespace app
