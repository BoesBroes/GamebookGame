#include <hxcpp.h>

#ifndef INCLUDED_Std
#include <Std.h>
#endif
#ifndef INCLUDED_haxe_IMap
#include <haxe/IMap.h>
#endif
#ifndef INCLUDED_haxe_Log
#include <haxe/Log.h>
#endif
#ifndef INCLUDED_haxe_ds_StringMap
#include <haxe/ds/StringMap.h>
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
#ifndef INCLUDED_lime_system_System
#include <lime/system/System.h>
#endif
#ifndef INCLUDED_lime_utils_Log
#include <lime/utils/Log.h>
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
#ifndef INCLUDED_openfl_display_MovieClip
#include <openfl/display/MovieClip.h>
#endif
#ifndef INCLUDED_openfl_display_Sprite
#include <openfl/display/Sprite.h>
#endif
#ifndef INCLUDED_openfl_events_EventDispatcher
#include <openfl/events/EventDispatcher.h>
#endif
#ifndef INCLUDED_openfl_events_IEventDispatcher
#include <openfl/events/IEventDispatcher.h>
#endif
#ifndef INCLUDED_openfl_net_URLRequest
#include <openfl/net/URLRequest.h>
#endif
namespace openfl{

Void Lib_obj::__construct()
{
	return null();
}

//Lib_obj::~Lib_obj() { }

Dynamic Lib_obj::__CreateEmpty() { return  new Lib_obj; }
hx::ObjectPtr< Lib_obj > Lib_obj::__new()
{  hx::ObjectPtr< Lib_obj > _result_ = new Lib_obj();
	_result_->__construct();
	return _result_;}

Dynamic Lib_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< Lib_obj > _result_ = new Lib_obj();
	_result_->__construct();
	return _result_;}

::openfl::display::Application Lib_obj::application;

::openfl::display::MovieClip Lib_obj::current;

::haxe::ds::StringMap Lib_obj::__sentWarnings;

Dynamic Lib_obj::as( Dynamic v,::hx::Class c){
	Dynamic tmp = v;
	::hx::Class tmp1 = c;
	bool tmp2 = ::Std_obj::is(tmp,tmp1);
	Dynamic tmp3;
	if ((tmp2)){
		tmp3 = v;
	}
	else{
		tmp3 = null();
	}
	return tmp3;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(Lib_obj,as,return )

::openfl::display::MovieClip Lib_obj::attach( ::String name){
	::openfl::display::MovieClip tmp = ::openfl::display::MovieClip_obj::__new();
	return tmp;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Lib_obj,attach,return )

int Lib_obj::getTimer( ){
	int tmp = ::lime::_system::System_obj::getTimer();
	return tmp;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(Lib_obj,getTimer,return )

Void Lib_obj::getURL( ::openfl::net::URLRequest request,::String target){
{
		bool tmp = (target == null());
		if ((tmp)){
			target = HX_HCSTRING("_blank","\x95","\x26","\xd9","\xb0");
		}
		::String tmp1 = request->url;
		::String tmp2 = target;
		::lime::_system::System_obj::openURL(tmp1,tmp2);
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(Lib_obj,getURL,(void))

Void Lib_obj::notImplemented( Dynamic posInfo){
{
		::String tmp = (posInfo->__Field(HX_HCSTRING("className","\xa3","\x92","\x3d","\xdc"), hx::paccDynamic ) + HX_HCSTRING(".","\x2e","\x00","\x00","\x00"));
		::String tmp1 = posInfo->__Field(HX_HCSTRING("methodName","\xcc","\x19","\x0f","\x12"), hx::paccDynamic );
		::String tmp2 = (tmp + tmp1);
		::String api = tmp2;
		::haxe::ds::StringMap tmp3 = ::openfl::Lib_obj::__sentWarnings;
		::String tmp4 = api;
		bool tmp5 = tmp3->exists(tmp4);
		bool tmp6 = !(tmp5);
		if ((tmp6)){
			::haxe::ds::StringMap tmp7 = ::openfl::Lib_obj::__sentWarnings;
			::String tmp8 = api;
			tmp7->set(tmp8,true);
			::String tmp9 = (posInfo->__Field(HX_HCSTRING("methodName","\xcc","\x19","\x0f","\x12"), hx::paccDynamic ) + HX_HCSTRING(" is not implemented","\x1f","\x12","\xd2","\xb9"));
			Dynamic tmp10 = posInfo;
			::lime::utils::Log_obj::warn(tmp9,tmp10);
		}
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Lib_obj,notImplemented,(void))

Void Lib_obj::preventDefaultTouchMove( ){
{
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(Lib_obj,preventDefaultTouchMove,(void))

Void Lib_obj::trace( Dynamic arg){
{
		Dynamic tmp = arg;
		Dynamic tmp1 = hx::SourceInfo(HX_HCSTRING("Lib.hx","\xb9","\x80","\x1c","\x19"),151,HX_HCSTRING("openfl.Lib","\x47","\x43","\x57","\x2f"),HX_HCSTRING("trace","\x85","\x8e","\x1f","\x16"));
		::haxe::Log_obj::trace(tmp,tmp1);
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Lib_obj,trace,(void))


Lib_obj::Lib_obj()
{
}

bool Lib_obj::__GetStatic(const ::String &inName, Dynamic &outValue, hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 2:
		if (HX_FIELD_EQ(inName,"as") ) { outValue = as_dyn(); return true;  }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"trace") ) { outValue = trace_dyn(); return true;  }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"attach") ) { outValue = attach_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"getURL") ) { outValue = getURL_dyn(); return true;  }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"current") ) { outValue = current; return true;  }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"getTimer") ) { outValue = getTimer_dyn(); return true;  }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"application") ) { outValue = application; return true;  }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"__sentWarnings") ) { outValue = __sentWarnings; return true;  }
		if (HX_FIELD_EQ(inName,"notImplemented") ) { outValue = notImplemented_dyn(); return true;  }
		break;
	case 23:
		if (HX_FIELD_EQ(inName,"preventDefaultTouchMove") ) { outValue = preventDefaultTouchMove_dyn(); return true;  }
	}
	return false;
}

bool Lib_obj::__SetStatic(const ::String &inName,Dynamic &ioValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 7:
		if (HX_FIELD_EQ(inName,"current") ) { current=ioValue.Cast< ::openfl::display::MovieClip >(); return true; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"application") ) { application=ioValue.Cast< ::openfl::display::Application >(); return true; }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"__sentWarnings") ) { __sentWarnings=ioValue.Cast< ::haxe::ds::StringMap >(); return true; }
	}
	return false;
}

#if HXCPP_SCRIPTABLE
static hx::StorageInfo *sMemberStorageInfo = 0;
static hx::StaticInfo sStaticStorageInfo[] = {
	{hx::fsObject /*::openfl::display::Application*/ ,(void *) &Lib_obj::application,HX_HCSTRING("application","\x50","\xab","\x3e","\x2a")},
	{hx::fsObject /*::openfl::display::MovieClip*/ ,(void *) &Lib_obj::current,HX_HCSTRING("current","\x39","\x9c","\xe3","\xcb")},
	{hx::fsObject /*::haxe::ds::StringMap*/ ,(void *) &Lib_obj::__sentWarnings,HX_HCSTRING("__sentWarnings","\x2f","\x1b","\x27","\x19")},
	{ hx::fsUnknown, 0, null()}
};
#endif

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(Lib_obj::__mClass,"__mClass");
	HX_MARK_MEMBER_NAME(Lib_obj::application,"application");
	HX_MARK_MEMBER_NAME(Lib_obj::current,"current");
	HX_MARK_MEMBER_NAME(Lib_obj::__sentWarnings,"__sentWarnings");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(Lib_obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(Lib_obj::application,"application");
	HX_VISIT_MEMBER_NAME(Lib_obj::current,"current");
	HX_VISIT_MEMBER_NAME(Lib_obj::__sentWarnings,"__sentWarnings");
};

#endif

hx::Class Lib_obj::__mClass;

static ::String sStaticFields[] = {
	HX_HCSTRING("application","\x50","\xab","\x3e","\x2a"),
	HX_HCSTRING("current","\x39","\x9c","\xe3","\xcb"),
	HX_HCSTRING("__sentWarnings","\x2f","\x1b","\x27","\x19"),
	HX_HCSTRING("as","\xf2","\x54","\x00","\x00"),
	HX_HCSTRING("attach","\xc5","\xfb","\x0f","\xe0"),
	HX_HCSTRING("getTimer","\x4f","\xcf","\x0c","\x70"),
	HX_HCSTRING("getURL","\x79","\x48","\x28","\xa3"),
	HX_HCSTRING("notImplemented","\x6f","\x3a","\x1a","\x27"),
	HX_HCSTRING("preventDefaultTouchMove","\x67","\xc4","\x6d","\x72"),
	HX_HCSTRING("trace","\x85","\x8e","\x1f","\x16"),
	::String(null()) };

void Lib_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("openfl.Lib","\x47","\x43","\x57","\x2f");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &Lib_obj::__GetStatic;
	__mClass->mSetStaticField = &Lib_obj::__SetStatic;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(sStaticFields);
	__mClass->mMembers = hx::Class_obj::dupFunctions(0 /* sMemberFields */);
	__mClass->mCanCast = hx::TCanCast< Lib_obj >;
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

void Lib_obj::__boot()
{
	current= ::openfl::display::MovieClip_obj::__new();
struct _Function_0_1{
	inline static ::haxe::ds::StringMap Block( ){
		{
			::haxe::ds::StringMap tmp = ::haxe::ds::StringMap_obj::__new();
			::haxe::ds::StringMap tmp1 = tmp;
			return tmp1;
		}
		return null();
	}
};
	__sentWarnings= _Function_0_1::Block();
}

} // end namespace openfl
