#include <hxcpp.h>

#ifndef INCLUDED_lime__backend_native_NativeCFFI
#include <lime/_backend/native/NativeCFFI.h>
#endif
#ifndef INCLUDED_lime__backend_native_NativeMouse
#include <lime/_backend/native/NativeMouse.h>
#endif
#ifndef INCLUDED_lime__backend_native_NativeWindow
#include <lime/_backend/native/NativeWindow.h>
#endif
#ifndef INCLUDED_lime_ui_MouseCursor
#include <lime/ui/MouseCursor.h>
#endif
#ifndef INCLUDED_lime_ui_Window
#include <lime/ui/Window.h>
#endif
namespace lime{
namespace _backend{
namespace native{

Void NativeMouse_obj::__construct()
{
	return null();
}

//NativeMouse_obj::~NativeMouse_obj() { }

Dynamic NativeMouse_obj::__CreateEmpty() { return  new NativeMouse_obj; }
hx::ObjectPtr< NativeMouse_obj > NativeMouse_obj::__new()
{  hx::ObjectPtr< NativeMouse_obj > _result_ = new NativeMouse_obj();
	_result_->__construct();
	return _result_;}

Dynamic NativeMouse_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< NativeMouse_obj > _result_ = new NativeMouse_obj();
	_result_->__construct();
	return _result_;}

::lime::ui::MouseCursor NativeMouse_obj::__cursor;

bool NativeMouse_obj::__hidden;

bool NativeMouse_obj::__lock;

Void NativeMouse_obj::hide( ){
{
		bool tmp = ::lime::_backend::native::NativeMouse_obj::__hidden;
		bool tmp1 = !(tmp);
		if ((tmp1)){
			::lime::_backend::native::NativeMouse_obj::__hidden = true;
			::lime::_backend::native::NativeCFFI_obj::cffi_lime_mouse_hide.call();
		}
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(NativeMouse_obj,hide,(void))

Void NativeMouse_obj::show( ){
{
		bool tmp = ::lime::_backend::native::NativeMouse_obj::__hidden;
		if ((tmp)){
			::lime::_backend::native::NativeMouse_obj::__hidden = false;
			::lime::_backend::native::NativeCFFI_obj::cffi_lime_mouse_show.call();
		}
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(NativeMouse_obj,show,(void))

Void NativeMouse_obj::warp( int x,int y,::lime::ui::Window window){
{
		::lime::_backend::native::NativeCFFI_obj::cffi_lime_mouse_warp.call(x,y,hx::DynamicPtr((  (((window == null()))) ? Dynamic((int)0) : Dynamic(window->backend->handle) )));
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC3(NativeMouse_obj,warp,(void))

::lime::ui::MouseCursor NativeMouse_obj::get_cursor( ){
	::lime::ui::MouseCursor tmp = ::lime::_backend::native::NativeMouse_obj::__cursor;
	bool tmp1 = (tmp == null());
	if ((tmp1)){
		return ::lime::ui::MouseCursor_obj::DEFAULT;
	}
	::lime::ui::MouseCursor tmp2 = ::lime::_backend::native::NativeMouse_obj::__cursor;
	return tmp2;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(NativeMouse_obj,get_cursor,return )

::lime::ui::MouseCursor NativeMouse_obj::set_cursor( ::lime::ui::MouseCursor value){
	::lime::ui::MouseCursor tmp = ::lime::_backend::native::NativeMouse_obj::__cursor;
	::lime::ui::MouseCursor tmp1 = value;
	bool tmp2 = (tmp != tmp1);
	if ((tmp2)){
		bool tmp3 = ::lime::_backend::native::NativeMouse_obj::__hidden;
		bool tmp4 = !(tmp3);
		if ((tmp4)){
			int tmp5;
			switch( (int)(value->__Index())){
				case (int)0: {
					tmp5 = (int)0;
				}
				;break;
				case (int)1: {
					tmp5 = (int)1;
				}
				;break;
				case (int)3: {
					tmp5 = (int)3;
				}
				;break;
				case (int)4: {
					tmp5 = (int)4;
				}
				;break;
				case (int)5: {
					tmp5 = (int)5;
				}
				;break;
				case (int)6: {
					tmp5 = (int)6;
				}
				;break;
				case (int)7: {
					tmp5 = (int)7;
				}
				;break;
				case (int)8: {
					tmp5 = (int)8;
				}
				;break;
				case (int)9: {
					tmp5 = (int)9;
				}
				;break;
				case (int)10: {
					tmp5 = (int)10;
				}
				;break;
				case (int)11: {
					tmp5 = (int)11;
				}
				;break;
				default: {
					tmp5 = (int)2;
				}
			}
			int type = tmp5;
			::lime::_backend::native::NativeCFFI_obj::cffi_lime_mouse_set_cursor.call(type);
		}
		::lime::_backend::native::NativeMouse_obj::__cursor = value;
	}
	::lime::ui::MouseCursor tmp3 = ::lime::_backend::native::NativeMouse_obj::__cursor;
	return tmp3;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(NativeMouse_obj,set_cursor,return )

bool NativeMouse_obj::get_lock( ){
	bool tmp = ::lime::_backend::native::NativeMouse_obj::__lock;
	return tmp;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(NativeMouse_obj,get_lock,return )

bool NativeMouse_obj::set_lock( bool value){
	bool tmp = ::lime::_backend::native::NativeMouse_obj::__lock;
	bool tmp1 = value;
	bool tmp2 = (tmp != tmp1);
	if ((tmp2)){
		::lime::_backend::native::NativeCFFI_obj::cffi_lime_mouse_set_lock.call(value);
		::lime::_backend::native::NativeMouse_obj::__hidden = value;
		::lime::_backend::native::NativeMouse_obj::__lock = value;
	}
	bool tmp3 = ::lime::_backend::native::NativeMouse_obj::__lock;
	return tmp3;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(NativeMouse_obj,set_lock,return )


NativeMouse_obj::NativeMouse_obj()
{
}

bool NativeMouse_obj::__GetStatic(const ::String &inName, Dynamic &outValue, hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"hide") ) { outValue = hide_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"show") ) { outValue = show_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"warp") ) { outValue = warp_dyn(); return true;  }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"__lock") ) { outValue = __lock; return true;  }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"__cursor") ) { outValue = __cursor; return true;  }
		if (HX_FIELD_EQ(inName,"__hidden") ) { outValue = __hidden; return true;  }
		if (HX_FIELD_EQ(inName,"get_lock") ) { outValue = get_lock_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"set_lock") ) { outValue = set_lock_dyn(); return true;  }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"get_cursor") ) { outValue = get_cursor_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"set_cursor") ) { outValue = set_cursor_dyn(); return true;  }
	}
	return false;
}

bool NativeMouse_obj::__SetStatic(const ::String &inName,Dynamic &ioValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 6:
		if (HX_FIELD_EQ(inName,"__lock") ) { __lock=ioValue.Cast< bool >(); return true; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"__cursor") ) { __cursor=ioValue.Cast< ::lime::ui::MouseCursor >(); return true; }
		if (HX_FIELD_EQ(inName,"__hidden") ) { __hidden=ioValue.Cast< bool >(); return true; }
	}
	return false;
}

#if HXCPP_SCRIPTABLE
static hx::StorageInfo *sMemberStorageInfo = 0;
static hx::StaticInfo sStaticStorageInfo[] = {
	{hx::fsObject /*::lime::ui::MouseCursor*/ ,(void *) &NativeMouse_obj::__cursor,HX_HCSTRING("__cursor","\xf6","\xf9","\x17","\xe7")},
	{hx::fsBool,(void *) &NativeMouse_obj::__hidden,HX_HCSTRING("__hidden","\x8a","\x6a","\xc5","\xf4")},
	{hx::fsBool,(void *) &NativeMouse_obj::__lock,HX_HCSTRING("__lock","\x0b","\xff","\xaf","\xf6")},
	{ hx::fsUnknown, 0, null()}
};
#endif

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(NativeMouse_obj::__mClass,"__mClass");
	HX_MARK_MEMBER_NAME(NativeMouse_obj::__cursor,"__cursor");
	HX_MARK_MEMBER_NAME(NativeMouse_obj::__hidden,"__hidden");
	HX_MARK_MEMBER_NAME(NativeMouse_obj::__lock,"__lock");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(NativeMouse_obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(NativeMouse_obj::__cursor,"__cursor");
	HX_VISIT_MEMBER_NAME(NativeMouse_obj::__hidden,"__hidden");
	HX_VISIT_MEMBER_NAME(NativeMouse_obj::__lock,"__lock");
};

#endif

hx::Class NativeMouse_obj::__mClass;

static ::String sStaticFields[] = {
	HX_HCSTRING("__cursor","\xf6","\xf9","\x17","\xe7"),
	HX_HCSTRING("__hidden","\x8a","\x6a","\xc5","\xf4"),
	HX_HCSTRING("__lock","\x0b","\xff","\xaf","\xf6"),
	HX_HCSTRING("hide","\xc2","\x34","\x0e","\x45"),
	HX_HCSTRING("show","\xfd","\xd4","\x52","\x4c"),
	HX_HCSTRING("warp","\x48","\x62","\xf2","\x4e"),
	HX_HCSTRING("get_cursor","\x9f","\xfe","\x6f","\x2f"),
	HX_HCSTRING("set_cursor","\x13","\x9d","\xed","\x32"),
	HX_HCSTRING("get_lock","\x74","\x57","\x72","\xc7"),
	HX_HCSTRING("set_lock","\xe8","\xb0","\xcf","\x75"),
	::String(null()) };

void NativeMouse_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("lime._backend.native.NativeMouse","\xf7","\x45","\x60","\xfb");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &NativeMouse_obj::__GetStatic;
	__mClass->mSetStaticField = &NativeMouse_obj::__SetStatic;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(sStaticFields);
	__mClass->mMembers = hx::Class_obj::dupFunctions(0 /* sMemberFields */);
	__mClass->mCanCast = hx::TCanCast< NativeMouse_obj >;
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
