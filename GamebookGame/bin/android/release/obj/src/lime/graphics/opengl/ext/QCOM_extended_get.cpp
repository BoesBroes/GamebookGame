#include <hxcpp.h>

#ifndef INCLUDED_lime_graphics_opengl_ext_QCOM_extended_get
#include <lime/graphics/opengl/ext/QCOM_extended_get.h>
#endif
namespace lime{
namespace graphics{
namespace opengl{
namespace ext{

Void QCOM_extended_get_obj::__construct()
{
HX_STACK_FRAME("lime.graphics.opengl.ext.QCOM_extended_get","new",0x27edf9cf,"lime.graphics.opengl.ext.QCOM_extended_get.new","lime/graphics/opengl/ext/QCOM_extended_get.hx",6,0xfa68ba23)
HX_STACK_THIS(this)
{
	HX_STACK_LINE(19)
	this->STATE_RESTORE = (int)35804;
	HX_STACK_LINE(18)
	this->TEXTURE_OBJECT_VALID_QCOM = (int)35803;
	HX_STACK_LINE(17)
	this->TEXTURE_TARGET_QCOM = (int)35802;
	HX_STACK_LINE(16)
	this->TEXTURE_NUM_LEVELS_QCOM = (int)35801;
	HX_STACK_LINE(15)
	this->TEXTURE_IMAGE_VALID_QCOM = (int)35800;
	HX_STACK_LINE(14)
	this->TEXTURE_TYPE_QCOM = (int)35799;
	HX_STACK_LINE(13)
	this->TEXTURE_FORMAT_QCOM = (int)35798;
	HX_STACK_LINE(12)
	this->TEXTURE_INTERNAL_FORMAT_QCOM = (int)35797;
	HX_STACK_LINE(11)
	this->TEXTURE_DEPTH_QCOM = (int)35796;
	HX_STACK_LINE(10)
	this->TEXTURE_HEIGHT_QCOM = (int)35795;
	HX_STACK_LINE(9)
	this->TEXTURE_WIDTH_QCOM = (int)35794;
}
;
	return null();
}

//QCOM_extended_get_obj::~QCOM_extended_get_obj() { }

Dynamic QCOM_extended_get_obj::__CreateEmpty() { return  new QCOM_extended_get_obj; }
hx::ObjectPtr< QCOM_extended_get_obj > QCOM_extended_get_obj::__new()
{  hx::ObjectPtr< QCOM_extended_get_obj > _result_ = new QCOM_extended_get_obj();
	_result_->__construct();
	return _result_;}

Dynamic QCOM_extended_get_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< QCOM_extended_get_obj > _result_ = new QCOM_extended_get_obj();
	_result_->__construct();
	return _result_;}


QCOM_extended_get_obj::QCOM_extended_get_obj()
{
}

Dynamic QCOM_extended_get_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 13:
		if (HX_FIELD_EQ(inName,"STATE_RESTORE") ) { return STATE_RESTORE; }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"TEXTURE_TYPE_QCOM") ) { return TEXTURE_TYPE_QCOM; }
		break;
	case 18:
		if (HX_FIELD_EQ(inName,"TEXTURE_WIDTH_QCOM") ) { return TEXTURE_WIDTH_QCOM; }
		if (HX_FIELD_EQ(inName,"TEXTURE_DEPTH_QCOM") ) { return TEXTURE_DEPTH_QCOM; }
		break;
	case 19:
		if (HX_FIELD_EQ(inName,"TEXTURE_HEIGHT_QCOM") ) { return TEXTURE_HEIGHT_QCOM; }
		if (HX_FIELD_EQ(inName,"TEXTURE_FORMAT_QCOM") ) { return TEXTURE_FORMAT_QCOM; }
		if (HX_FIELD_EQ(inName,"TEXTURE_TARGET_QCOM") ) { return TEXTURE_TARGET_QCOM; }
		break;
	case 23:
		if (HX_FIELD_EQ(inName,"TEXTURE_NUM_LEVELS_QCOM") ) { return TEXTURE_NUM_LEVELS_QCOM; }
		break;
	case 24:
		if (HX_FIELD_EQ(inName,"TEXTURE_IMAGE_VALID_QCOM") ) { return TEXTURE_IMAGE_VALID_QCOM; }
		break;
	case 25:
		if (HX_FIELD_EQ(inName,"TEXTURE_OBJECT_VALID_QCOM") ) { return TEXTURE_OBJECT_VALID_QCOM; }
		break;
	case 28:
		if (HX_FIELD_EQ(inName,"TEXTURE_INTERNAL_FORMAT_QCOM") ) { return TEXTURE_INTERNAL_FORMAT_QCOM; }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic QCOM_extended_get_obj::__SetField(const ::String &inName,const Dynamic &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 13:
		if (HX_FIELD_EQ(inName,"STATE_RESTORE") ) { STATE_RESTORE=inValue.Cast< int >(); return inValue; }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"TEXTURE_TYPE_QCOM") ) { TEXTURE_TYPE_QCOM=inValue.Cast< int >(); return inValue; }
		break;
	case 18:
		if (HX_FIELD_EQ(inName,"TEXTURE_WIDTH_QCOM") ) { TEXTURE_WIDTH_QCOM=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"TEXTURE_DEPTH_QCOM") ) { TEXTURE_DEPTH_QCOM=inValue.Cast< int >(); return inValue; }
		break;
	case 19:
		if (HX_FIELD_EQ(inName,"TEXTURE_HEIGHT_QCOM") ) { TEXTURE_HEIGHT_QCOM=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"TEXTURE_FORMAT_QCOM") ) { TEXTURE_FORMAT_QCOM=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"TEXTURE_TARGET_QCOM") ) { TEXTURE_TARGET_QCOM=inValue.Cast< int >(); return inValue; }
		break;
	case 23:
		if (HX_FIELD_EQ(inName,"TEXTURE_NUM_LEVELS_QCOM") ) { TEXTURE_NUM_LEVELS_QCOM=inValue.Cast< int >(); return inValue; }
		break;
	case 24:
		if (HX_FIELD_EQ(inName,"TEXTURE_IMAGE_VALID_QCOM") ) { TEXTURE_IMAGE_VALID_QCOM=inValue.Cast< int >(); return inValue; }
		break;
	case 25:
		if (HX_FIELD_EQ(inName,"TEXTURE_OBJECT_VALID_QCOM") ) { TEXTURE_OBJECT_VALID_QCOM=inValue.Cast< int >(); return inValue; }
		break;
	case 28:
		if (HX_FIELD_EQ(inName,"TEXTURE_INTERNAL_FORMAT_QCOM") ) { TEXTURE_INTERNAL_FORMAT_QCOM=inValue.Cast< int >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void QCOM_extended_get_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("TEXTURE_WIDTH_QCOM","\xed","\x34","\x0f","\x3f"));
	outFields->push(HX_HCSTRING("TEXTURE_HEIGHT_QCOM","\x44","\x3e","\x1b","\x4a"));
	outFields->push(HX_HCSTRING("TEXTURE_DEPTH_QCOM","\xd0","\x04","\x20","\x5c"));
	outFields->push(HX_HCSTRING("TEXTURE_INTERNAL_FORMAT_QCOM","\xba","\x8b","\x6b","\xa9"));
	outFields->push(HX_HCSTRING("TEXTURE_FORMAT_QCOM","\xf4","\x34","\xdc","\x69"));
	outFields->push(HX_HCSTRING("TEXTURE_TYPE_QCOM","\x91","\x13","\x0e","\xa7"));
	outFields->push(HX_HCSTRING("TEXTURE_IMAGE_VALID_QCOM","\xfb","\x1e","\xc4","\x09"));
	outFields->push(HX_HCSTRING("TEXTURE_NUM_LEVELS_QCOM","\xe3","\xf1","\x65","\x25"));
	outFields->push(HX_HCSTRING("TEXTURE_TARGET_QCOM","\x9a","\xb2","\x1a","\x41"));
	outFields->push(HX_HCSTRING("TEXTURE_OBJECT_VALID_QCOM","\xef","\x6e","\x81","\x63"));
	outFields->push(HX_HCSTRING("STATE_RESTORE","\xa0","\x1b","\x6f","\x00"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsInt,(int)offsetof(QCOM_extended_get_obj,TEXTURE_WIDTH_QCOM),HX_HCSTRING("TEXTURE_WIDTH_QCOM","\xed","\x34","\x0f","\x3f")},
	{hx::fsInt,(int)offsetof(QCOM_extended_get_obj,TEXTURE_HEIGHT_QCOM),HX_HCSTRING("TEXTURE_HEIGHT_QCOM","\x44","\x3e","\x1b","\x4a")},
	{hx::fsInt,(int)offsetof(QCOM_extended_get_obj,TEXTURE_DEPTH_QCOM),HX_HCSTRING("TEXTURE_DEPTH_QCOM","\xd0","\x04","\x20","\x5c")},
	{hx::fsInt,(int)offsetof(QCOM_extended_get_obj,TEXTURE_INTERNAL_FORMAT_QCOM),HX_HCSTRING("TEXTURE_INTERNAL_FORMAT_QCOM","\xba","\x8b","\x6b","\xa9")},
	{hx::fsInt,(int)offsetof(QCOM_extended_get_obj,TEXTURE_FORMAT_QCOM),HX_HCSTRING("TEXTURE_FORMAT_QCOM","\xf4","\x34","\xdc","\x69")},
	{hx::fsInt,(int)offsetof(QCOM_extended_get_obj,TEXTURE_TYPE_QCOM),HX_HCSTRING("TEXTURE_TYPE_QCOM","\x91","\x13","\x0e","\xa7")},
	{hx::fsInt,(int)offsetof(QCOM_extended_get_obj,TEXTURE_IMAGE_VALID_QCOM),HX_HCSTRING("TEXTURE_IMAGE_VALID_QCOM","\xfb","\x1e","\xc4","\x09")},
	{hx::fsInt,(int)offsetof(QCOM_extended_get_obj,TEXTURE_NUM_LEVELS_QCOM),HX_HCSTRING("TEXTURE_NUM_LEVELS_QCOM","\xe3","\xf1","\x65","\x25")},
	{hx::fsInt,(int)offsetof(QCOM_extended_get_obj,TEXTURE_TARGET_QCOM),HX_HCSTRING("TEXTURE_TARGET_QCOM","\x9a","\xb2","\x1a","\x41")},
	{hx::fsInt,(int)offsetof(QCOM_extended_get_obj,TEXTURE_OBJECT_VALID_QCOM),HX_HCSTRING("TEXTURE_OBJECT_VALID_QCOM","\xef","\x6e","\x81","\x63")},
	{hx::fsInt,(int)offsetof(QCOM_extended_get_obj,STATE_RESTORE),HX_HCSTRING("STATE_RESTORE","\xa0","\x1b","\x6f","\x00")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo *sStaticStorageInfo = 0;
#endif

static ::String sMemberFields[] = {
	HX_HCSTRING("TEXTURE_WIDTH_QCOM","\xed","\x34","\x0f","\x3f"),
	HX_HCSTRING("TEXTURE_HEIGHT_QCOM","\x44","\x3e","\x1b","\x4a"),
	HX_HCSTRING("TEXTURE_DEPTH_QCOM","\xd0","\x04","\x20","\x5c"),
	HX_HCSTRING("TEXTURE_INTERNAL_FORMAT_QCOM","\xba","\x8b","\x6b","\xa9"),
	HX_HCSTRING("TEXTURE_FORMAT_QCOM","\xf4","\x34","\xdc","\x69"),
	HX_HCSTRING("TEXTURE_TYPE_QCOM","\x91","\x13","\x0e","\xa7"),
	HX_HCSTRING("TEXTURE_IMAGE_VALID_QCOM","\xfb","\x1e","\xc4","\x09"),
	HX_HCSTRING("TEXTURE_NUM_LEVELS_QCOM","\xe3","\xf1","\x65","\x25"),
	HX_HCSTRING("TEXTURE_TARGET_QCOM","\x9a","\xb2","\x1a","\x41"),
	HX_HCSTRING("TEXTURE_OBJECT_VALID_QCOM","\xef","\x6e","\x81","\x63"),
	HX_HCSTRING("STATE_RESTORE","\xa0","\x1b","\x6f","\x00"),
	::String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(QCOM_extended_get_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(QCOM_extended_get_obj::__mClass,"__mClass");
};

#endif

hx::Class QCOM_extended_get_obj::__mClass;

void QCOM_extended_get_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("lime.graphics.opengl.ext.QCOM_extended_get","\x5d","\x66","\x43","\xc0");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = hx::Class_obj::dupFunctions(sMemberFields);
	__mClass->mCanCast = hx::TCanCast< QCOM_extended_get_obj >;
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
