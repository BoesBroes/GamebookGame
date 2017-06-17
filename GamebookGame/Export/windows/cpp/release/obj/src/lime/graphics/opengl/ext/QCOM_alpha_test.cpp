#include <hxcpp.h>

#ifndef INCLUDED_lime_graphics_opengl_ext_QCOM_alpha_test
#include <lime/graphics/opengl/ext/QCOM_alpha_test.h>
#endif
namespace lime{
namespace graphics{
namespace opengl{
namespace ext{

Void QCOM_alpha_test_obj::__construct()
{
HX_STACK_FRAME("lime.graphics.opengl.ext.QCOM_alpha_test","new",0x0896a752,"lime.graphics.opengl.ext.QCOM_alpha_test.new","lime/graphics/opengl/ext/QCOM_alpha_test.hx",6,0xac036180)
HX_STACK_THIS(this)
{
	HX_STACK_LINE(11)
	this->ALPHA_TEST_REF_QCOM = (int)3010;
	HX_STACK_LINE(10)
	this->ALPHA_TEST_FUNC_QCOM = (int)3009;
	HX_STACK_LINE(9)
	this->ALPHA_TEST_QCOM = (int)3008;
}
;
	return null();
}

//QCOM_alpha_test_obj::~QCOM_alpha_test_obj() { }

Dynamic QCOM_alpha_test_obj::__CreateEmpty() { return  new QCOM_alpha_test_obj; }
hx::ObjectPtr< QCOM_alpha_test_obj > QCOM_alpha_test_obj::__new()
{  hx::ObjectPtr< QCOM_alpha_test_obj > _result_ = new QCOM_alpha_test_obj();
	_result_->__construct();
	return _result_;}

Dynamic QCOM_alpha_test_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< QCOM_alpha_test_obj > _result_ = new QCOM_alpha_test_obj();
	_result_->__construct();
	return _result_;}


QCOM_alpha_test_obj::QCOM_alpha_test_obj()
{
}

Dynamic QCOM_alpha_test_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 15:
		if (HX_FIELD_EQ(inName,"ALPHA_TEST_QCOM") ) { return ALPHA_TEST_QCOM; }
		break;
	case 19:
		if (HX_FIELD_EQ(inName,"ALPHA_TEST_REF_QCOM") ) { return ALPHA_TEST_REF_QCOM; }
		break;
	case 20:
		if (HX_FIELD_EQ(inName,"ALPHA_TEST_FUNC_QCOM") ) { return ALPHA_TEST_FUNC_QCOM; }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic QCOM_alpha_test_obj::__SetField(const ::String &inName,const Dynamic &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 15:
		if (HX_FIELD_EQ(inName,"ALPHA_TEST_QCOM") ) { ALPHA_TEST_QCOM=inValue.Cast< int >(); return inValue; }
		break;
	case 19:
		if (HX_FIELD_EQ(inName,"ALPHA_TEST_REF_QCOM") ) { ALPHA_TEST_REF_QCOM=inValue.Cast< int >(); return inValue; }
		break;
	case 20:
		if (HX_FIELD_EQ(inName,"ALPHA_TEST_FUNC_QCOM") ) { ALPHA_TEST_FUNC_QCOM=inValue.Cast< int >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void QCOM_alpha_test_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("ALPHA_TEST_QCOM","\x3c","\x9b","\x7f","\x99"));
	outFields->push(HX_HCSTRING("ALPHA_TEST_FUNC_QCOM","\x3f","\x1c","\x4c","\x9d"));
	outFields->push(HX_HCSTRING("ALPHA_TEST_REF_QCOM","\x08","\xdf","\x0e","\xf3"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsInt,(int)offsetof(QCOM_alpha_test_obj,ALPHA_TEST_QCOM),HX_HCSTRING("ALPHA_TEST_QCOM","\x3c","\x9b","\x7f","\x99")},
	{hx::fsInt,(int)offsetof(QCOM_alpha_test_obj,ALPHA_TEST_FUNC_QCOM),HX_HCSTRING("ALPHA_TEST_FUNC_QCOM","\x3f","\x1c","\x4c","\x9d")},
	{hx::fsInt,(int)offsetof(QCOM_alpha_test_obj,ALPHA_TEST_REF_QCOM),HX_HCSTRING("ALPHA_TEST_REF_QCOM","\x08","\xdf","\x0e","\xf3")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo *sStaticStorageInfo = 0;
#endif

static ::String sMemberFields[] = {
	HX_HCSTRING("ALPHA_TEST_QCOM","\x3c","\x9b","\x7f","\x99"),
	HX_HCSTRING("ALPHA_TEST_FUNC_QCOM","\x3f","\x1c","\x4c","\x9d"),
	HX_HCSTRING("ALPHA_TEST_REF_QCOM","\x08","\xdf","\x0e","\xf3"),
	::String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(QCOM_alpha_test_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(QCOM_alpha_test_obj::__mClass,"__mClass");
};

#endif

hx::Class QCOM_alpha_test_obj::__mClass;

void QCOM_alpha_test_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("lime.graphics.opengl.ext.QCOM_alpha_test","\x60","\x56","\x80","\x6d");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = hx::Class_obj::dupFunctions(sMemberFields);
	__mClass->mCanCast = hx::TCanCast< QCOM_alpha_test_obj >;
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
