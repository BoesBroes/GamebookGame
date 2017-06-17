#include <hxcpp.h>

#ifndef INCLUDED_lime_graphics_opengl_ext_QCOM_binning_control
#include <lime/graphics/opengl/ext/QCOM_binning_control.h>
#endif
namespace lime{
namespace graphics{
namespace opengl{
namespace ext{

Void QCOM_binning_control_obj::__construct()
{
HX_STACK_FRAME("lime.graphics.opengl.ext.QCOM_binning_control","new",0x63f866de,"lime.graphics.opengl.ext.QCOM_binning_control.new","lime/graphics/opengl/ext/QCOM_binning_control.hx",6,0xe4b809f0)
HX_STACK_THIS(this)
{
	HX_STACK_LINE(12)
	this->RENDER_DIRECT_TO_FRAMEBUFFER_QCOM = (int)36787;
	HX_STACK_LINE(11)
	this->GPU_OPTIMIZED_QCOM = (int)36786;
	HX_STACK_LINE(10)
	this->CPU_OPTIMIZED_QCOM = (int)36785;
	HX_STACK_LINE(9)
	this->BINNING_CONTROL_HINT_QCOM = (int)36784;
}
;
	return null();
}

//QCOM_binning_control_obj::~QCOM_binning_control_obj() { }

Dynamic QCOM_binning_control_obj::__CreateEmpty() { return  new QCOM_binning_control_obj; }
hx::ObjectPtr< QCOM_binning_control_obj > QCOM_binning_control_obj::__new()
{  hx::ObjectPtr< QCOM_binning_control_obj > _result_ = new QCOM_binning_control_obj();
	_result_->__construct();
	return _result_;}

Dynamic QCOM_binning_control_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< QCOM_binning_control_obj > _result_ = new QCOM_binning_control_obj();
	_result_->__construct();
	return _result_;}


QCOM_binning_control_obj::QCOM_binning_control_obj()
{
}

Dynamic QCOM_binning_control_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 18:
		if (HX_FIELD_EQ(inName,"CPU_OPTIMIZED_QCOM") ) { return CPU_OPTIMIZED_QCOM; }
		if (HX_FIELD_EQ(inName,"GPU_OPTIMIZED_QCOM") ) { return GPU_OPTIMIZED_QCOM; }
		break;
	case 25:
		if (HX_FIELD_EQ(inName,"BINNING_CONTROL_HINT_QCOM") ) { return BINNING_CONTROL_HINT_QCOM; }
		break;
	case 33:
		if (HX_FIELD_EQ(inName,"RENDER_DIRECT_TO_FRAMEBUFFER_QCOM") ) { return RENDER_DIRECT_TO_FRAMEBUFFER_QCOM; }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic QCOM_binning_control_obj::__SetField(const ::String &inName,const Dynamic &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 18:
		if (HX_FIELD_EQ(inName,"CPU_OPTIMIZED_QCOM") ) { CPU_OPTIMIZED_QCOM=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"GPU_OPTIMIZED_QCOM") ) { GPU_OPTIMIZED_QCOM=inValue.Cast< int >(); return inValue; }
		break;
	case 25:
		if (HX_FIELD_EQ(inName,"BINNING_CONTROL_HINT_QCOM") ) { BINNING_CONTROL_HINT_QCOM=inValue.Cast< int >(); return inValue; }
		break;
	case 33:
		if (HX_FIELD_EQ(inName,"RENDER_DIRECT_TO_FRAMEBUFFER_QCOM") ) { RENDER_DIRECT_TO_FRAMEBUFFER_QCOM=inValue.Cast< int >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void QCOM_binning_control_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("BINNING_CONTROL_HINT_QCOM","\x82","\xb3","\x04","\xf7"));
	outFields->push(HX_HCSTRING("CPU_OPTIMIZED_QCOM","\xbf","\xbe","\xec","\xc1"));
	outFields->push(HX_HCSTRING("GPU_OPTIMIZED_QCOM","\x3b","\x7a","\x7c","\x0b"));
	outFields->push(HX_HCSTRING("RENDER_DIRECT_TO_FRAMEBUFFER_QCOM","\x19","\xe7","\xdd","\x4e"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsInt,(int)offsetof(QCOM_binning_control_obj,BINNING_CONTROL_HINT_QCOM),HX_HCSTRING("BINNING_CONTROL_HINT_QCOM","\x82","\xb3","\x04","\xf7")},
	{hx::fsInt,(int)offsetof(QCOM_binning_control_obj,CPU_OPTIMIZED_QCOM),HX_HCSTRING("CPU_OPTIMIZED_QCOM","\xbf","\xbe","\xec","\xc1")},
	{hx::fsInt,(int)offsetof(QCOM_binning_control_obj,GPU_OPTIMIZED_QCOM),HX_HCSTRING("GPU_OPTIMIZED_QCOM","\x3b","\x7a","\x7c","\x0b")},
	{hx::fsInt,(int)offsetof(QCOM_binning_control_obj,RENDER_DIRECT_TO_FRAMEBUFFER_QCOM),HX_HCSTRING("RENDER_DIRECT_TO_FRAMEBUFFER_QCOM","\x19","\xe7","\xdd","\x4e")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo *sStaticStorageInfo = 0;
#endif

static ::String sMemberFields[] = {
	HX_HCSTRING("BINNING_CONTROL_HINT_QCOM","\x82","\xb3","\x04","\xf7"),
	HX_HCSTRING("CPU_OPTIMIZED_QCOM","\xbf","\xbe","\xec","\xc1"),
	HX_HCSTRING("GPU_OPTIMIZED_QCOM","\x3b","\x7a","\x7c","\x0b"),
	HX_HCSTRING("RENDER_DIRECT_TO_FRAMEBUFFER_QCOM","\x19","\xe7","\xdd","\x4e"),
	::String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(QCOM_binning_control_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(QCOM_binning_control_obj::__mClass,"__mClass");
};

#endif

hx::Class QCOM_binning_control_obj::__mClass;

void QCOM_binning_control_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("lime.graphics.opengl.ext.QCOM_binning_control","\xec","\x5f","\x90","\x49");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = hx::Class_obj::dupFunctions(sMemberFields);
	__mClass->mCanCast = hx::TCanCast< QCOM_binning_control_obj >;
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
