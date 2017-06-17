#include <hxcpp.h>

#ifndef INCLUDED_lime_graphics_opengl_ext_QCOM_extended_get2
#include <lime/graphics/opengl/ext/QCOM_extended_get2.h>
#endif
namespace lime{
namespace graphics{
namespace opengl{
namespace ext{

Void QCOM_extended_get2_obj::__construct()
{
HX_STACK_FRAME("lime.graphics.opengl.ext.QCOM_extended_get2","new",0xeba00aa7,"lime.graphics.opengl.ext.QCOM_extended_get2.new","lime/graphics/opengl/ext/QCOM_extended_get2.hx",7,0x23b2eec7)
HX_STACK_THIS(this)
{
}
;
	return null();
}

//QCOM_extended_get2_obj::~QCOM_extended_get2_obj() { }

Dynamic QCOM_extended_get2_obj::__CreateEmpty() { return  new QCOM_extended_get2_obj; }
hx::ObjectPtr< QCOM_extended_get2_obj > QCOM_extended_get2_obj::__new()
{  hx::ObjectPtr< QCOM_extended_get2_obj > _result_ = new QCOM_extended_get2_obj();
	_result_->__construct();
	return _result_;}

Dynamic QCOM_extended_get2_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< QCOM_extended_get2_obj > _result_ = new QCOM_extended_get2_obj();
	_result_->__construct();
	return _result_;}


QCOM_extended_get2_obj::QCOM_extended_get2_obj()
{
}

#if HXCPP_SCRIPTABLE
static hx::StorageInfo *sMemberStorageInfo = 0;
static hx::StaticInfo *sStaticStorageInfo = 0;
#endif

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(QCOM_extended_get2_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(QCOM_extended_get2_obj::__mClass,"__mClass");
};

#endif

hx::Class QCOM_extended_get2_obj::__mClass;

void QCOM_extended_get2_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("lime.graphics.opengl.ext.QCOM_extended_get2","\x35","\x2b","\xb6","\x7a");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = hx::Class_obj::dupFunctions(0 /* sMemberFields */);
	__mClass->mCanCast = hx::TCanCast< QCOM_extended_get2_obj >;
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
} // end namespace opengl
} // end namespace ext
