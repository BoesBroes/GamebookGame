#include <hxcpp.h>

#ifndef INCLUDED_lime_graphics_opengl_ext_QCOM_driver_control
#include <lime/graphics/opengl/ext/QCOM_driver_control.h>
#endif
namespace lime{
namespace graphics{
namespace opengl{
namespace ext{

Void QCOM_driver_control_obj::__construct()
{
HX_STACK_FRAME("lime.graphics.opengl.ext.QCOM_driver_control","new",0x1b676c45,"lime.graphics.opengl.ext.QCOM_driver_control.new","lime/graphics/opengl/ext/QCOM_driver_control.hx",7,0x7b71f4ed)
HX_STACK_THIS(this)
{
}
;
	return null();
}

//QCOM_driver_control_obj::~QCOM_driver_control_obj() { }

Dynamic QCOM_driver_control_obj::__CreateEmpty() { return  new QCOM_driver_control_obj; }
hx::ObjectPtr< QCOM_driver_control_obj > QCOM_driver_control_obj::__new()
{  hx::ObjectPtr< QCOM_driver_control_obj > _result_ = new QCOM_driver_control_obj();
	_result_->__construct();
	return _result_;}

Dynamic QCOM_driver_control_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< QCOM_driver_control_obj > _result_ = new QCOM_driver_control_obj();
	_result_->__construct();
	return _result_;}


QCOM_driver_control_obj::QCOM_driver_control_obj()
{
}

#if HXCPP_SCRIPTABLE
static hx::StorageInfo *sMemberStorageInfo = 0;
static hx::StaticInfo *sStaticStorageInfo = 0;
#endif

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(QCOM_driver_control_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(QCOM_driver_control_obj::__mClass,"__mClass");
};

#endif

hx::Class QCOM_driver_control_obj::__mClass;

void QCOM_driver_control_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("lime.graphics.opengl.ext.QCOM_driver_control","\xd3","\xe5","\x48","\xf8");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = hx::Class_obj::dupFunctions(0 /* sMemberFields */);
	__mClass->mCanCast = hx::TCanCast< QCOM_driver_control_obj >;
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
