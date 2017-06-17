#include <hxcpp.h>

#ifndef INCLUDED_lime__backend_native_NativeCFFI
#include <lime/_backend/native/NativeCFFI.h>
#endif
#ifndef INCLUDED_lime_system_Clipboard
#include <lime/system/Clipboard.h>
#endif
namespace lime{
namespace _system{

Void Clipboard_obj::__construct()
{
	return null();
}

//Clipboard_obj::~Clipboard_obj() { }

Dynamic Clipboard_obj::__CreateEmpty() { return  new Clipboard_obj; }
hx::ObjectPtr< Clipboard_obj > Clipboard_obj::__new()
{  hx::ObjectPtr< Clipboard_obj > _result_ = new Clipboard_obj();
	_result_->__construct();
	return _result_;}

Dynamic Clipboard_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< Clipboard_obj > _result_ = new Clipboard_obj();
	_result_->__construct();
	return _result_;}

::String Clipboard_obj::get_text( ){
	return ((Dynamic)(::lime::_backend::native::NativeCFFI_obj::cffi_lime_clipboard_get_text.call()));
}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(Clipboard_obj,get_text,return )

::String Clipboard_obj::set_text( ::String value){
	::lime::_backend::native::NativeCFFI_obj::cffi_lime_clipboard_set_text.call(value);
	::String tmp = value;
	return tmp;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Clipboard_obj,set_text,return )


Clipboard_obj::Clipboard_obj()
{
}

bool Clipboard_obj::__GetStatic(const ::String &inName, Dynamic &outValue, hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"text") ) { if (inCallProp == hx::paccAlways) { outValue = get_text(); return true; } }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"get_text") ) { outValue = get_text_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"set_text") ) { outValue = set_text_dyn(); return true;  }
	}
	return false;
}

bool Clipboard_obj::__SetStatic(const ::String &inName,Dynamic &ioValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"text") ) { if (inCallProp == hx::paccAlways)  ioValue = set_text(ioValue); }
	}
	return false;
}

#if HXCPP_SCRIPTABLE
static hx::StorageInfo *sMemberStorageInfo = 0;
static hx::StaticInfo *sStaticStorageInfo = 0;
#endif

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(Clipboard_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(Clipboard_obj::__mClass,"__mClass");
};

#endif

hx::Class Clipboard_obj::__mClass;

static ::String sStaticFields[] = {
	HX_HCSTRING("get_text","\x36","\x88","\xb4","\xcc"),
	HX_HCSTRING("set_text","\xaa","\xe1","\x11","\x7b"),
	::String(null()) };

void Clipboard_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("lime.system.Clipboard","\xf0","\x64","\x51","\x18");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &Clipboard_obj::__GetStatic;
	__mClass->mSetStaticField = &Clipboard_obj::__SetStatic;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(sStaticFields);
	__mClass->mMembers = hx::Class_obj::dupFunctions(0 /* sMemberFields */);
	__mClass->mCanCast = hx::TCanCast< Clipboard_obj >;
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
} // end namespace system
