#include <hxcpp.h>

#ifndef INCLUDED_lime__backend_native_NativeMouse
#include <lime/_backend/native/NativeMouse.h>
#endif
#ifndef INCLUDED_lime_ui_Mouse
#include <lime/ui/Mouse.h>
#endif
#ifndef INCLUDED_lime_ui_MouseCursor
#include <lime/ui/MouseCursor.h>
#endif
#ifndef INCLUDED_lime_ui_Window
#include <lime/ui/Window.h>
#endif
namespace lime{
namespace ui{

Void Mouse_obj::__construct()
{
	return null();
}

//Mouse_obj::~Mouse_obj() { }

Dynamic Mouse_obj::__CreateEmpty() { return  new Mouse_obj; }
hx::ObjectPtr< Mouse_obj > Mouse_obj::__new()
{  hx::ObjectPtr< Mouse_obj > _result_ = new Mouse_obj();
	_result_->__construct();
	return _result_;}

Dynamic Mouse_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< Mouse_obj > _result_ = new Mouse_obj();
	_result_->__construct();
	return _result_;}

Void Mouse_obj::hide( ){
{
		::lime::_backend::native::NativeMouse_obj::hide();
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(Mouse_obj,hide,(void))

Void Mouse_obj::show( ){
{
		::lime::_backend::native::NativeMouse_obj::show();
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(Mouse_obj,show,(void))

Void Mouse_obj::warp( int x,int y,::lime::ui::Window window){
{
		int tmp = x;
		int tmp1 = y;
		::lime::ui::Window tmp2 = window;
		::lime::_backend::native::NativeMouse_obj::warp(tmp,tmp1,tmp2);
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC3(Mouse_obj,warp,(void))

::lime::ui::MouseCursor Mouse_obj::get_cursor( ){
	::lime::ui::MouseCursor tmp = ::lime::_backend::native::NativeMouse_obj::get_cursor();
	return tmp;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(Mouse_obj,get_cursor,return )

::lime::ui::MouseCursor Mouse_obj::set_cursor( ::lime::ui::MouseCursor value){
	::lime::ui::MouseCursor tmp = value;
	::lime::ui::MouseCursor tmp1 = ::lime::_backend::native::NativeMouse_obj::set_cursor(tmp);
	return tmp1;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Mouse_obj,set_cursor,return )

bool Mouse_obj::get_lock( ){
	bool tmp = ::lime::_backend::native::NativeMouse_obj::get_lock();
	return tmp;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(Mouse_obj,get_lock,return )

bool Mouse_obj::set_lock( bool value){
	bool tmp = value;
	bool tmp1 = ::lime::_backend::native::NativeMouse_obj::set_lock(tmp);
	return tmp1;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Mouse_obj,set_lock,return )


Mouse_obj::Mouse_obj()
{
}

bool Mouse_obj::__GetStatic(const ::String &inName, Dynamic &outValue, hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"lock") ) { if (inCallProp == hx::paccAlways) { outValue = get_lock(); return true; } }
		if (HX_FIELD_EQ(inName,"hide") ) { outValue = hide_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"show") ) { outValue = show_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"warp") ) { outValue = warp_dyn(); return true;  }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"cursor") ) { if (inCallProp == hx::paccAlways) { outValue = get_cursor(); return true; } }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"get_lock") ) { outValue = get_lock_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"set_lock") ) { outValue = set_lock_dyn(); return true;  }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"get_cursor") ) { outValue = get_cursor_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"set_cursor") ) { outValue = set_cursor_dyn(); return true;  }
	}
	return false;
}

bool Mouse_obj::__SetStatic(const ::String &inName,Dynamic &ioValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"lock") ) { if (inCallProp == hx::paccAlways)  ioValue = set_lock(ioValue); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"cursor") ) { if (inCallProp == hx::paccAlways)  ioValue = set_cursor(ioValue); }
	}
	return false;
}

#if HXCPP_SCRIPTABLE
static hx::StorageInfo *sMemberStorageInfo = 0;
static hx::StaticInfo *sStaticStorageInfo = 0;
#endif

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(Mouse_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(Mouse_obj::__mClass,"__mClass");
};

#endif

hx::Class Mouse_obj::__mClass;

static ::String sStaticFields[] = {
	HX_HCSTRING("hide","\xc2","\x34","\x0e","\x45"),
	HX_HCSTRING("show","\xfd","\xd4","\x52","\x4c"),
	HX_HCSTRING("warp","\x48","\x62","\xf2","\x4e"),
	HX_HCSTRING("get_cursor","\x9f","\xfe","\x6f","\x2f"),
	HX_HCSTRING("set_cursor","\x13","\x9d","\xed","\x32"),
	HX_HCSTRING("get_lock","\x74","\x57","\x72","\xc7"),
	HX_HCSTRING("set_lock","\xe8","\xb0","\xcf","\x75"),
	::String(null()) };

void Mouse_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("lime.ui.Mouse","\xe4","\xb8","\x87","\x3e");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &Mouse_obj::__GetStatic;
	__mClass->mSetStaticField = &Mouse_obj::__SetStatic;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(sStaticFields);
	__mClass->mMembers = hx::Class_obj::dupFunctions(0 /* sMemberFields */);
	__mClass->mCanCast = hx::TCanCast< Mouse_obj >;
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
