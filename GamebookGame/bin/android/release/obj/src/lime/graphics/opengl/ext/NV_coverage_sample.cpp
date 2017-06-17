#include <hxcpp.h>

#ifndef INCLUDED_lime_graphics_opengl_ext_NV_coverage_sample
#include <lime/graphics/opengl/ext/NV_coverage_sample.h>
#endif
namespace lime{
namespace graphics{
namespace opengl{
namespace ext{

Void NV_coverage_sample_obj::__construct()
{
HX_STACK_FRAME("lime.graphics.opengl.ext.NV_coverage_sample","new",0x08bce1be,"lime.graphics.opengl.ext.NV_coverage_sample.new","lime/graphics/opengl/ext/NV_coverage_sample.hx",6,0xb353c790)
HX_STACK_THIS(this)
{
	HX_STACK_LINE(17)
	this->COVERAGE_BUFFER_BIT_NV = (int)32768;
	HX_STACK_LINE(16)
	this->COVERAGE_AUTOMATIC_NV = (int)36567;
	HX_STACK_LINE(15)
	this->COVERAGE_EDGE_FRAGMENTS_NV = (int)36566;
	HX_STACK_LINE(14)
	this->COVERAGE_ALL_FRAGMENTS_NV = (int)36565;
	HX_STACK_LINE(13)
	this->COVERAGE_SAMPLES_NV = (int)36564;
	HX_STACK_LINE(12)
	this->COVERAGE_BUFFERS_NV = (int)36563;
	HX_STACK_LINE(11)
	this->COVERAGE_ATTACHMENT_NV = (int)36562;
	HX_STACK_LINE(10)
	this->COVERAGE_COMPONENT4_NV = (int)36561;
	HX_STACK_LINE(9)
	this->COVERAGE_COMPONENT_NV = (int)36560;
}
;
	return null();
}

//NV_coverage_sample_obj::~NV_coverage_sample_obj() { }

Dynamic NV_coverage_sample_obj::__CreateEmpty() { return  new NV_coverage_sample_obj; }
hx::ObjectPtr< NV_coverage_sample_obj > NV_coverage_sample_obj::__new()
{  hx::ObjectPtr< NV_coverage_sample_obj > _result_ = new NV_coverage_sample_obj();
	_result_->__construct();
	return _result_;}

Dynamic NV_coverage_sample_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< NV_coverage_sample_obj > _result_ = new NV_coverage_sample_obj();
	_result_->__construct();
	return _result_;}


NV_coverage_sample_obj::NV_coverage_sample_obj()
{
}

Dynamic NV_coverage_sample_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 19:
		if (HX_FIELD_EQ(inName,"COVERAGE_BUFFERS_NV") ) { return COVERAGE_BUFFERS_NV; }
		if (HX_FIELD_EQ(inName,"COVERAGE_SAMPLES_NV") ) { return COVERAGE_SAMPLES_NV; }
		break;
	case 21:
		if (HX_FIELD_EQ(inName,"COVERAGE_COMPONENT_NV") ) { return COVERAGE_COMPONENT_NV; }
		if (HX_FIELD_EQ(inName,"COVERAGE_AUTOMATIC_NV") ) { return COVERAGE_AUTOMATIC_NV; }
		break;
	case 22:
		if (HX_FIELD_EQ(inName,"COVERAGE_COMPONENT4_NV") ) { return COVERAGE_COMPONENT4_NV; }
		if (HX_FIELD_EQ(inName,"COVERAGE_ATTACHMENT_NV") ) { return COVERAGE_ATTACHMENT_NV; }
		if (HX_FIELD_EQ(inName,"COVERAGE_BUFFER_BIT_NV") ) { return COVERAGE_BUFFER_BIT_NV; }
		break;
	case 25:
		if (HX_FIELD_EQ(inName,"COVERAGE_ALL_FRAGMENTS_NV") ) { return COVERAGE_ALL_FRAGMENTS_NV; }
		break;
	case 26:
		if (HX_FIELD_EQ(inName,"COVERAGE_EDGE_FRAGMENTS_NV") ) { return COVERAGE_EDGE_FRAGMENTS_NV; }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic NV_coverage_sample_obj::__SetField(const ::String &inName,const Dynamic &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 19:
		if (HX_FIELD_EQ(inName,"COVERAGE_BUFFERS_NV") ) { COVERAGE_BUFFERS_NV=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"COVERAGE_SAMPLES_NV") ) { COVERAGE_SAMPLES_NV=inValue.Cast< int >(); return inValue; }
		break;
	case 21:
		if (HX_FIELD_EQ(inName,"COVERAGE_COMPONENT_NV") ) { COVERAGE_COMPONENT_NV=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"COVERAGE_AUTOMATIC_NV") ) { COVERAGE_AUTOMATIC_NV=inValue.Cast< int >(); return inValue; }
		break;
	case 22:
		if (HX_FIELD_EQ(inName,"COVERAGE_COMPONENT4_NV") ) { COVERAGE_COMPONENT4_NV=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"COVERAGE_ATTACHMENT_NV") ) { COVERAGE_ATTACHMENT_NV=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"COVERAGE_BUFFER_BIT_NV") ) { COVERAGE_BUFFER_BIT_NV=inValue.Cast< int >(); return inValue; }
		break;
	case 25:
		if (HX_FIELD_EQ(inName,"COVERAGE_ALL_FRAGMENTS_NV") ) { COVERAGE_ALL_FRAGMENTS_NV=inValue.Cast< int >(); return inValue; }
		break;
	case 26:
		if (HX_FIELD_EQ(inName,"COVERAGE_EDGE_FRAGMENTS_NV") ) { COVERAGE_EDGE_FRAGMENTS_NV=inValue.Cast< int >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void NV_coverage_sample_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("COVERAGE_COMPONENT_NV","\xe1","\x59","\xe0","\x37"));
	outFields->push(HX_HCSTRING("COVERAGE_COMPONENT4_NV","\xf9","\xfd","\x0e","\x90"));
	outFields->push(HX_HCSTRING("COVERAGE_ATTACHMENT_NV","\x8d","\x46","\xb8","\xa8"));
	outFields->push(HX_HCSTRING("COVERAGE_BUFFERS_NV","\x2b","\x1d","\xec","\x5b"));
	outFields->push(HX_HCSTRING("COVERAGE_SAMPLES_NV","\x55","\x9d","\x83","\x26"));
	outFields->push(HX_HCSTRING("COVERAGE_ALL_FRAGMENTS_NV","\x79","\x00","\xb4","\x19"));
	outFields->push(HX_HCSTRING("COVERAGE_EDGE_FRAGMENTS_NV","\xef","\xe8","\x79","\xd6"));
	outFields->push(HX_HCSTRING("COVERAGE_AUTOMATIC_NV","\xb3","\xd6","\xd0","\xac"));
	outFields->push(HX_HCSTRING("COVERAGE_BUFFER_BIT_NV","\xa2","\x50","\xcd","\x9f"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsInt,(int)offsetof(NV_coverage_sample_obj,COVERAGE_COMPONENT_NV),HX_HCSTRING("COVERAGE_COMPONENT_NV","\xe1","\x59","\xe0","\x37")},
	{hx::fsInt,(int)offsetof(NV_coverage_sample_obj,COVERAGE_COMPONENT4_NV),HX_HCSTRING("COVERAGE_COMPONENT4_NV","\xf9","\xfd","\x0e","\x90")},
	{hx::fsInt,(int)offsetof(NV_coverage_sample_obj,COVERAGE_ATTACHMENT_NV),HX_HCSTRING("COVERAGE_ATTACHMENT_NV","\x8d","\x46","\xb8","\xa8")},
	{hx::fsInt,(int)offsetof(NV_coverage_sample_obj,COVERAGE_BUFFERS_NV),HX_HCSTRING("COVERAGE_BUFFERS_NV","\x2b","\x1d","\xec","\x5b")},
	{hx::fsInt,(int)offsetof(NV_coverage_sample_obj,COVERAGE_SAMPLES_NV),HX_HCSTRING("COVERAGE_SAMPLES_NV","\x55","\x9d","\x83","\x26")},
	{hx::fsInt,(int)offsetof(NV_coverage_sample_obj,COVERAGE_ALL_FRAGMENTS_NV),HX_HCSTRING("COVERAGE_ALL_FRAGMENTS_NV","\x79","\x00","\xb4","\x19")},
	{hx::fsInt,(int)offsetof(NV_coverage_sample_obj,COVERAGE_EDGE_FRAGMENTS_NV),HX_HCSTRING("COVERAGE_EDGE_FRAGMENTS_NV","\xef","\xe8","\x79","\xd6")},
	{hx::fsInt,(int)offsetof(NV_coverage_sample_obj,COVERAGE_AUTOMATIC_NV),HX_HCSTRING("COVERAGE_AUTOMATIC_NV","\xb3","\xd6","\xd0","\xac")},
	{hx::fsInt,(int)offsetof(NV_coverage_sample_obj,COVERAGE_BUFFER_BIT_NV),HX_HCSTRING("COVERAGE_BUFFER_BIT_NV","\xa2","\x50","\xcd","\x9f")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo *sStaticStorageInfo = 0;
#endif

static ::String sMemberFields[] = {
	HX_HCSTRING("COVERAGE_COMPONENT_NV","\xe1","\x59","\xe0","\x37"),
	HX_HCSTRING("COVERAGE_COMPONENT4_NV","\xf9","\xfd","\x0e","\x90"),
	HX_HCSTRING("COVERAGE_ATTACHMENT_NV","\x8d","\x46","\xb8","\xa8"),
	HX_HCSTRING("COVERAGE_BUFFERS_NV","\x2b","\x1d","\xec","\x5b"),
	HX_HCSTRING("COVERAGE_SAMPLES_NV","\x55","\x9d","\x83","\x26"),
	HX_HCSTRING("COVERAGE_ALL_FRAGMENTS_NV","\x79","\x00","\xb4","\x19"),
	HX_HCSTRING("COVERAGE_EDGE_FRAGMENTS_NV","\xef","\xe8","\x79","\xd6"),
	HX_HCSTRING("COVERAGE_AUTOMATIC_NV","\xb3","\xd6","\xd0","\xac"),
	HX_HCSTRING("COVERAGE_BUFFER_BIT_NV","\xa2","\x50","\xcd","\x9f"),
	::String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(NV_coverage_sample_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(NV_coverage_sample_obj::__mClass,"__mClass");
};

#endif

hx::Class NV_coverage_sample_obj::__mClass;

void NV_coverage_sample_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("lime.graphics.opengl.ext.NV_coverage_sample","\xcc","\xea","\x05","\xca");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = hx::Class_obj::dupFunctions(sMemberFields);
	__mClass->mCanCast = hx::TCanCast< NV_coverage_sample_obj >;
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
