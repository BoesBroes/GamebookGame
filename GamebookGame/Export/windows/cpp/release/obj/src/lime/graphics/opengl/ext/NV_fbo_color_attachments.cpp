#include <hxcpp.h>

#ifndef INCLUDED_lime_graphics_opengl_ext_NV_fbo_color_attachments
#include <lime/graphics/opengl/ext/NV_fbo_color_attachments.h>
#endif
namespace lime{
namespace graphics{
namespace opengl{
namespace ext{

Void NV_fbo_color_attachments_obj::__construct()
{
HX_STACK_FRAME("lime.graphics.opengl.ext.NV_fbo_color_attachments","new",0xf66e66e5,"lime.graphics.opengl.ext.NV_fbo_color_attachments.new","lime/graphics/opengl/ext/NV_fbo_color_attachments.hx",6,0x2fbd4ec9)
HX_STACK_THIS(this)
{
	HX_STACK_LINE(25)
	this->COLOR_ATTACHMENT15_NV = (int)36079;
	HX_STACK_LINE(24)
	this->COLOR_ATTACHMENT14_NV = (int)36078;
	HX_STACK_LINE(23)
	this->COLOR_ATTACHMENT13_NV = (int)36077;
	HX_STACK_LINE(22)
	this->COLOR_ATTACHMENT12_NV = (int)36076;
	HX_STACK_LINE(21)
	this->COLOR_ATTACHMENT11_NV = (int)36075;
	HX_STACK_LINE(20)
	this->COLOR_ATTACHMENT10_NV = (int)36074;
	HX_STACK_LINE(19)
	this->COLOR_ATTACHMENT9_NV = (int)36073;
	HX_STACK_LINE(18)
	this->COLOR_ATTACHMENT8_NV = (int)36072;
	HX_STACK_LINE(17)
	this->COLOR_ATTACHMENT7_NV = (int)36071;
	HX_STACK_LINE(16)
	this->COLOR_ATTACHMENT6_NV = (int)36070;
	HX_STACK_LINE(15)
	this->COLOR_ATTACHMENT5_NV = (int)36069;
	HX_STACK_LINE(14)
	this->COLOR_ATTACHMENT4_NV = (int)36068;
	HX_STACK_LINE(13)
	this->COLOR_ATTACHMENT3_NV = (int)36067;
	HX_STACK_LINE(12)
	this->COLOR_ATTACHMENT2_NV = (int)36066;
	HX_STACK_LINE(11)
	this->COLOR_ATTACHMENT1_NV = (int)36065;
	HX_STACK_LINE(10)
	this->COLOR_ATTACHMENT0_NV = (int)36064;
	HX_STACK_LINE(9)
	this->MAX_COLOR_ATTACHMENTS_NV = (int)36063;
}
;
	return null();
}

//NV_fbo_color_attachments_obj::~NV_fbo_color_attachments_obj() { }

Dynamic NV_fbo_color_attachments_obj::__CreateEmpty() { return  new NV_fbo_color_attachments_obj; }
hx::ObjectPtr< NV_fbo_color_attachments_obj > NV_fbo_color_attachments_obj::__new()
{  hx::ObjectPtr< NV_fbo_color_attachments_obj > _result_ = new NV_fbo_color_attachments_obj();
	_result_->__construct();
	return _result_;}

Dynamic NV_fbo_color_attachments_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< NV_fbo_color_attachments_obj > _result_ = new NV_fbo_color_attachments_obj();
	_result_->__construct();
	return _result_;}


NV_fbo_color_attachments_obj::NV_fbo_color_attachments_obj()
{
}

Dynamic NV_fbo_color_attachments_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 20:
		if (HX_FIELD_EQ(inName,"COLOR_ATTACHMENT0_NV") ) { return COLOR_ATTACHMENT0_NV; }
		if (HX_FIELD_EQ(inName,"COLOR_ATTACHMENT1_NV") ) { return COLOR_ATTACHMENT1_NV; }
		if (HX_FIELD_EQ(inName,"COLOR_ATTACHMENT2_NV") ) { return COLOR_ATTACHMENT2_NV; }
		if (HX_FIELD_EQ(inName,"COLOR_ATTACHMENT3_NV") ) { return COLOR_ATTACHMENT3_NV; }
		if (HX_FIELD_EQ(inName,"COLOR_ATTACHMENT4_NV") ) { return COLOR_ATTACHMENT4_NV; }
		if (HX_FIELD_EQ(inName,"COLOR_ATTACHMENT5_NV") ) { return COLOR_ATTACHMENT5_NV; }
		if (HX_FIELD_EQ(inName,"COLOR_ATTACHMENT6_NV") ) { return COLOR_ATTACHMENT6_NV; }
		if (HX_FIELD_EQ(inName,"COLOR_ATTACHMENT7_NV") ) { return COLOR_ATTACHMENT7_NV; }
		if (HX_FIELD_EQ(inName,"COLOR_ATTACHMENT8_NV") ) { return COLOR_ATTACHMENT8_NV; }
		if (HX_FIELD_EQ(inName,"COLOR_ATTACHMENT9_NV") ) { return COLOR_ATTACHMENT9_NV; }
		break;
	case 21:
		if (HX_FIELD_EQ(inName,"COLOR_ATTACHMENT10_NV") ) { return COLOR_ATTACHMENT10_NV; }
		if (HX_FIELD_EQ(inName,"COLOR_ATTACHMENT11_NV") ) { return COLOR_ATTACHMENT11_NV; }
		if (HX_FIELD_EQ(inName,"COLOR_ATTACHMENT12_NV") ) { return COLOR_ATTACHMENT12_NV; }
		if (HX_FIELD_EQ(inName,"COLOR_ATTACHMENT13_NV") ) { return COLOR_ATTACHMENT13_NV; }
		if (HX_FIELD_EQ(inName,"COLOR_ATTACHMENT14_NV") ) { return COLOR_ATTACHMENT14_NV; }
		if (HX_FIELD_EQ(inName,"COLOR_ATTACHMENT15_NV") ) { return COLOR_ATTACHMENT15_NV; }
		break;
	case 24:
		if (HX_FIELD_EQ(inName,"MAX_COLOR_ATTACHMENTS_NV") ) { return MAX_COLOR_ATTACHMENTS_NV; }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic NV_fbo_color_attachments_obj::__SetField(const ::String &inName,const Dynamic &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 20:
		if (HX_FIELD_EQ(inName,"COLOR_ATTACHMENT0_NV") ) { COLOR_ATTACHMENT0_NV=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"COLOR_ATTACHMENT1_NV") ) { COLOR_ATTACHMENT1_NV=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"COLOR_ATTACHMENT2_NV") ) { COLOR_ATTACHMENT2_NV=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"COLOR_ATTACHMENT3_NV") ) { COLOR_ATTACHMENT3_NV=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"COLOR_ATTACHMENT4_NV") ) { COLOR_ATTACHMENT4_NV=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"COLOR_ATTACHMENT5_NV") ) { COLOR_ATTACHMENT5_NV=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"COLOR_ATTACHMENT6_NV") ) { COLOR_ATTACHMENT6_NV=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"COLOR_ATTACHMENT7_NV") ) { COLOR_ATTACHMENT7_NV=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"COLOR_ATTACHMENT8_NV") ) { COLOR_ATTACHMENT8_NV=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"COLOR_ATTACHMENT9_NV") ) { COLOR_ATTACHMENT9_NV=inValue.Cast< int >(); return inValue; }
		break;
	case 21:
		if (HX_FIELD_EQ(inName,"COLOR_ATTACHMENT10_NV") ) { COLOR_ATTACHMENT10_NV=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"COLOR_ATTACHMENT11_NV") ) { COLOR_ATTACHMENT11_NV=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"COLOR_ATTACHMENT12_NV") ) { COLOR_ATTACHMENT12_NV=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"COLOR_ATTACHMENT13_NV") ) { COLOR_ATTACHMENT13_NV=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"COLOR_ATTACHMENT14_NV") ) { COLOR_ATTACHMENT14_NV=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"COLOR_ATTACHMENT15_NV") ) { COLOR_ATTACHMENT15_NV=inValue.Cast< int >(); return inValue; }
		break;
	case 24:
		if (HX_FIELD_EQ(inName,"MAX_COLOR_ATTACHMENTS_NV") ) { MAX_COLOR_ATTACHMENTS_NV=inValue.Cast< int >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void NV_fbo_color_attachments_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("MAX_COLOR_ATTACHMENTS_NV","\xee","\x38","\xc0","\x07"));
	outFields->push(HX_HCSTRING("COLOR_ATTACHMENT0_NV","\x56","\xc4","\xe4","\xab"));
	outFields->push(HX_HCSTRING("COLOR_ATTACHMENT1_NV","\xf5","\xfa","\x8d","\xac"));
	outFields->push(HX_HCSTRING("COLOR_ATTACHMENT2_NV","\x94","\x31","\x37","\xad"));
	outFields->push(HX_HCSTRING("COLOR_ATTACHMENT3_NV","\x33","\x68","\xe0","\xad"));
	outFields->push(HX_HCSTRING("COLOR_ATTACHMENT4_NV","\xd2","\x9e","\x89","\xae"));
	outFields->push(HX_HCSTRING("COLOR_ATTACHMENT5_NV","\x71","\xd5","\x32","\xaf"));
	outFields->push(HX_HCSTRING("COLOR_ATTACHMENT6_NV","\x10","\x0c","\xdc","\xaf"));
	outFields->push(HX_HCSTRING("COLOR_ATTACHMENT7_NV","\xaf","\x42","\x85","\xb0"));
	outFields->push(HX_HCSTRING("COLOR_ATTACHMENT8_NV","\x4e","\x79","\x2e","\xb1"));
	outFields->push(HX_HCSTRING("COLOR_ATTACHMENT9_NV","\xed","\xaf","\xd7","\xb1"));
	outFields->push(HX_HCSTRING("COLOR_ATTACHMENT10_NV","\xe9","\x73","\xa9","\x30"));
	outFields->push(HX_HCSTRING("COLOR_ATTACHMENT11_NV","\x88","\xaa","\x52","\x31"));
	outFields->push(HX_HCSTRING("COLOR_ATTACHMENT12_NV","\x27","\xe1","\xfb","\x31"));
	outFields->push(HX_HCSTRING("COLOR_ATTACHMENT13_NV","\xc6","\x17","\xa5","\x32"));
	outFields->push(HX_HCSTRING("COLOR_ATTACHMENT14_NV","\x65","\x4e","\x4e","\x33"));
	outFields->push(HX_HCSTRING("COLOR_ATTACHMENT15_NV","\x04","\x85","\xf7","\x33"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsInt,(int)offsetof(NV_fbo_color_attachments_obj,MAX_COLOR_ATTACHMENTS_NV),HX_HCSTRING("MAX_COLOR_ATTACHMENTS_NV","\xee","\x38","\xc0","\x07")},
	{hx::fsInt,(int)offsetof(NV_fbo_color_attachments_obj,COLOR_ATTACHMENT0_NV),HX_HCSTRING("COLOR_ATTACHMENT0_NV","\x56","\xc4","\xe4","\xab")},
	{hx::fsInt,(int)offsetof(NV_fbo_color_attachments_obj,COLOR_ATTACHMENT1_NV),HX_HCSTRING("COLOR_ATTACHMENT1_NV","\xf5","\xfa","\x8d","\xac")},
	{hx::fsInt,(int)offsetof(NV_fbo_color_attachments_obj,COLOR_ATTACHMENT2_NV),HX_HCSTRING("COLOR_ATTACHMENT2_NV","\x94","\x31","\x37","\xad")},
	{hx::fsInt,(int)offsetof(NV_fbo_color_attachments_obj,COLOR_ATTACHMENT3_NV),HX_HCSTRING("COLOR_ATTACHMENT3_NV","\x33","\x68","\xe0","\xad")},
	{hx::fsInt,(int)offsetof(NV_fbo_color_attachments_obj,COLOR_ATTACHMENT4_NV),HX_HCSTRING("COLOR_ATTACHMENT4_NV","\xd2","\x9e","\x89","\xae")},
	{hx::fsInt,(int)offsetof(NV_fbo_color_attachments_obj,COLOR_ATTACHMENT5_NV),HX_HCSTRING("COLOR_ATTACHMENT5_NV","\x71","\xd5","\x32","\xaf")},
	{hx::fsInt,(int)offsetof(NV_fbo_color_attachments_obj,COLOR_ATTACHMENT6_NV),HX_HCSTRING("COLOR_ATTACHMENT6_NV","\x10","\x0c","\xdc","\xaf")},
	{hx::fsInt,(int)offsetof(NV_fbo_color_attachments_obj,COLOR_ATTACHMENT7_NV),HX_HCSTRING("COLOR_ATTACHMENT7_NV","\xaf","\x42","\x85","\xb0")},
	{hx::fsInt,(int)offsetof(NV_fbo_color_attachments_obj,COLOR_ATTACHMENT8_NV),HX_HCSTRING("COLOR_ATTACHMENT8_NV","\x4e","\x79","\x2e","\xb1")},
	{hx::fsInt,(int)offsetof(NV_fbo_color_attachments_obj,COLOR_ATTACHMENT9_NV),HX_HCSTRING("COLOR_ATTACHMENT9_NV","\xed","\xaf","\xd7","\xb1")},
	{hx::fsInt,(int)offsetof(NV_fbo_color_attachments_obj,COLOR_ATTACHMENT10_NV),HX_HCSTRING("COLOR_ATTACHMENT10_NV","\xe9","\x73","\xa9","\x30")},
	{hx::fsInt,(int)offsetof(NV_fbo_color_attachments_obj,COLOR_ATTACHMENT11_NV),HX_HCSTRING("COLOR_ATTACHMENT11_NV","\x88","\xaa","\x52","\x31")},
	{hx::fsInt,(int)offsetof(NV_fbo_color_attachments_obj,COLOR_ATTACHMENT12_NV),HX_HCSTRING("COLOR_ATTACHMENT12_NV","\x27","\xe1","\xfb","\x31")},
	{hx::fsInt,(int)offsetof(NV_fbo_color_attachments_obj,COLOR_ATTACHMENT13_NV),HX_HCSTRING("COLOR_ATTACHMENT13_NV","\xc6","\x17","\xa5","\x32")},
	{hx::fsInt,(int)offsetof(NV_fbo_color_attachments_obj,COLOR_ATTACHMENT14_NV),HX_HCSTRING("COLOR_ATTACHMENT14_NV","\x65","\x4e","\x4e","\x33")},
	{hx::fsInt,(int)offsetof(NV_fbo_color_attachments_obj,COLOR_ATTACHMENT15_NV),HX_HCSTRING("COLOR_ATTACHMENT15_NV","\x04","\x85","\xf7","\x33")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo *sStaticStorageInfo = 0;
#endif

static ::String sMemberFields[] = {
	HX_HCSTRING("MAX_COLOR_ATTACHMENTS_NV","\xee","\x38","\xc0","\x07"),
	HX_HCSTRING("COLOR_ATTACHMENT0_NV","\x56","\xc4","\xe4","\xab"),
	HX_HCSTRING("COLOR_ATTACHMENT1_NV","\xf5","\xfa","\x8d","\xac"),
	HX_HCSTRING("COLOR_ATTACHMENT2_NV","\x94","\x31","\x37","\xad"),
	HX_HCSTRING("COLOR_ATTACHMENT3_NV","\x33","\x68","\xe0","\xad"),
	HX_HCSTRING("COLOR_ATTACHMENT4_NV","\xd2","\x9e","\x89","\xae"),
	HX_HCSTRING("COLOR_ATTACHMENT5_NV","\x71","\xd5","\x32","\xaf"),
	HX_HCSTRING("COLOR_ATTACHMENT6_NV","\x10","\x0c","\xdc","\xaf"),
	HX_HCSTRING("COLOR_ATTACHMENT7_NV","\xaf","\x42","\x85","\xb0"),
	HX_HCSTRING("COLOR_ATTACHMENT8_NV","\x4e","\x79","\x2e","\xb1"),
	HX_HCSTRING("COLOR_ATTACHMENT9_NV","\xed","\xaf","\xd7","\xb1"),
	HX_HCSTRING("COLOR_ATTACHMENT10_NV","\xe9","\x73","\xa9","\x30"),
	HX_HCSTRING("COLOR_ATTACHMENT11_NV","\x88","\xaa","\x52","\x31"),
	HX_HCSTRING("COLOR_ATTACHMENT12_NV","\x27","\xe1","\xfb","\x31"),
	HX_HCSTRING("COLOR_ATTACHMENT13_NV","\xc6","\x17","\xa5","\x32"),
	HX_HCSTRING("COLOR_ATTACHMENT14_NV","\x65","\x4e","\x4e","\x33"),
	HX_HCSTRING("COLOR_ATTACHMENT15_NV","\x04","\x85","\xf7","\x33"),
	::String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(NV_fbo_color_attachments_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(NV_fbo_color_attachments_obj::__mClass,"__mClass");
};

#endif

hx::Class NV_fbo_color_attachments_obj::__mClass;

void NV_fbo_color_attachments_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("lime.graphics.opengl.ext.NV_fbo_color_attachments","\x73","\x10","\x56","\x54");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = hx::Class_obj::dupFunctions(sMemberFields);
	__mClass->mCanCast = hx::TCanCast< NV_fbo_color_attachments_obj >;
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
