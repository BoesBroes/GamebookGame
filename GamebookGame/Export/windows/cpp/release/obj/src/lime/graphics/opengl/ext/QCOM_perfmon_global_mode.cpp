#include <hxcpp.h>

#ifndef INCLUDED_lime_graphics_opengl_ext_QCOM_perfmon_global_mode
#include <lime/graphics/opengl/ext/QCOM_perfmon_global_mode.h>
#endif
namespace lime{
namespace graphics{
namespace opengl{
namespace ext{

Void QCOM_perfmon_global_mode_obj::__construct()
{
HX_STACK_FRAME("lime.graphics.opengl.ext.QCOM_perfmon_global_mode","new",0x76e54308,"lime.graphics.opengl.ext.QCOM_perfmon_global_mode.new","lime/graphics/opengl/ext/QCOM_perfmon_global_mode.hx",6,0x1f188806)
HX_STACK_THIS(this)
{
	HX_STACK_LINE(9)
	this->PERFMON_GLOBAL_MODE_QCOM = (int)36768;
}
;
	return null();
}

//QCOM_perfmon_global_mode_obj::~QCOM_perfmon_global_mode_obj() { }

Dynamic QCOM_perfmon_global_mode_obj::__CreateEmpty() { return  new QCOM_perfmon_global_mode_obj; }
hx::ObjectPtr< QCOM_perfmon_global_mode_obj > QCOM_perfmon_global_mode_obj::__new()
{  hx::ObjectPtr< QCOM_perfmon_global_mode_obj > _result_ = new QCOM_perfmon_global_mode_obj();
	_result_->__construct();
	return _result_;}

Dynamic QCOM_perfmon_global_mode_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< QCOM_perfmon_global_mode_obj > _result_ = new QCOM_perfmon_global_mode_obj();
	_result_->__construct();
	return _result_;}


QCOM_perfmon_global_mode_obj::QCOM_perfmon_global_mode_obj()
{
}

Dynamic QCOM_perfmon_global_mode_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 24:
		if (HX_FIELD_EQ(inName,"PERFMON_GLOBAL_MODE_QCOM") ) { return PERFMON_GLOBAL_MODE_QCOM; }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic QCOM_perfmon_global_mode_obj::__SetField(const ::String &inName,const Dynamic &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 24:
		if (HX_FIELD_EQ(inName,"PERFMON_GLOBAL_MODE_QCOM") ) { PERFMON_GLOBAL_MODE_QCOM=inValue.Cast< int >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void QCOM_perfmon_global_mode_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("PERFMON_GLOBAL_MODE_QCOM","\x8c","\x4a","\xa5","\xe0"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsInt,(int)offsetof(QCOM_perfmon_global_mode_obj,PERFMON_GLOBAL_MODE_QCOM),HX_HCSTRING("PERFMON_GLOBAL_MODE_QCOM","\x8c","\x4a","\xa5","\xe0")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo *sStaticStorageInfo = 0;
#endif

static ::String sMemberFields[] = {
	HX_HCSTRING("PERFMON_GLOBAL_MODE_QCOM","\x8c","\x4a","\xa5","\xe0"),
	::String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(QCOM_perfmon_global_mode_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(QCOM_perfmon_global_mode_obj::__mClass,"__mClass");
};

#endif

hx::Class QCOM_perfmon_global_mode_obj::__mClass;

void QCOM_perfmon_global_mode_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("lime.graphics.opengl.ext.QCOM_perfmon_global_mode","\x16","\x5f","\xbd","\x79");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = hx::Class_obj::dupFunctions(sMemberFields);
	__mClass->mCanCast = hx::TCanCast< QCOM_perfmon_global_mode_obj >;
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
