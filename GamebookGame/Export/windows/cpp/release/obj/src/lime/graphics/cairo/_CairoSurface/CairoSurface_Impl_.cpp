#include <hxcpp.h>

#ifndef INCLUDED_lime__backend_native_NativeCFFI
#include <lime/_backend/native/NativeCFFI.h>
#endif
#ifndef INCLUDED_lime_graphics_cairo__CairoSurface_CairoSurface_Impl_
#include <lime/graphics/cairo/_CairoSurface/CairoSurface_Impl_.h>
#endif
namespace lime{
namespace graphics{
namespace cairo{
namespace _CairoSurface{

Void CairoSurface_Impl__obj::__construct()
{
	return null();
}

//CairoSurface_Impl__obj::~CairoSurface_Impl__obj() { }

Dynamic CairoSurface_Impl__obj::__CreateEmpty() { return  new CairoSurface_Impl__obj; }
hx::ObjectPtr< CairoSurface_Impl__obj > CairoSurface_Impl__obj::__new()
{  hx::ObjectPtr< CairoSurface_Impl__obj > _result_ = new CairoSurface_Impl__obj();
	_result_->__construct();
	return _result_;}

Dynamic CairoSurface_Impl__obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< CairoSurface_Impl__obj > _result_ = new CairoSurface_Impl__obj();
	_result_->__construct();
	return _result_;}

Void CairoSurface_Impl__obj::flush( Dynamic this1){
{
		HX_STACK_FRAME("lime.graphics.cairo._CairoSurface.CairoSurface_Impl_","flush",0x2a892755,"lime.graphics.cairo._CairoSurface.CairoSurface_Impl_.flush","lime/graphics/cairo/CairoSurface.hx",16,0x58ce1be8)
		HX_STACK_ARG(this1,"this1")
		HX_STACK_LINE(16)
		::lime::_backend::native::NativeCFFI_obj::cffi_lime_cairo_surface_flush.call(hx::DynamicPtr(this1));
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(CairoSurface_Impl__obj,flush,(void))


CairoSurface_Impl__obj::CairoSurface_Impl__obj()
{
}

bool CairoSurface_Impl__obj::__GetStatic(const ::String &inName, Dynamic &outValue, hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"flush") ) { outValue = flush_dyn(); return true;  }
	}
	return false;
}

#if HXCPP_SCRIPTABLE
static hx::StorageInfo *sMemberStorageInfo = 0;
static hx::StaticInfo *sStaticStorageInfo = 0;
#endif

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(CairoSurface_Impl__obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(CairoSurface_Impl__obj::__mClass,"__mClass");
};

#endif

hx::Class CairoSurface_Impl__obj::__mClass;

static ::String sStaticFields[] = {
	HX_HCSTRING("flush","\xc4","\x62","\x9b","\x02"),
	::String(null()) };

void CairoSurface_Impl__obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("lime.graphics.cairo._CairoSurface.CairoSurface_Impl_","\x3f","\x72","\x19","\x60");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &CairoSurface_Impl__obj::__GetStatic;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(sStaticFields);
	__mClass->mMembers = hx::Class_obj::dupFunctions(0 /* sMemberFields */);
	__mClass->mCanCast = hx::TCanCast< CairoSurface_Impl__obj >;
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
} // end namespace graphics
} // end namespace cairo
} // end namespace _CairoSurface
