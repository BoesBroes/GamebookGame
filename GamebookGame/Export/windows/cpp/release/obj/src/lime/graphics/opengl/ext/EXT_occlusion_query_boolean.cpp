#include <hxcpp.h>

#ifndef INCLUDED_lime_graphics_opengl_ext_EXT_occlusion_query_boolean
#include <lime/graphics/opengl/ext/EXT_occlusion_query_boolean.h>
#endif
namespace lime{
namespace graphics{
namespace opengl{
namespace ext{

Void EXT_occlusion_query_boolean_obj::__construct()
{
HX_STACK_FRAME("lime.graphics.opengl.ext.EXT_occlusion_query_boolean","new",0x6c68e891,"lime.graphics.opengl.ext.EXT_occlusion_query_boolean.new","lime/graphics/opengl/ext/EXT_occlusion_query_boolean.hx",6,0x83217821)
HX_STACK_THIS(this)
{
	HX_STACK_LINE(13)
	this->QUERY_RESULT_AVAILABLE_EXT = (int)34919;
	HX_STACK_LINE(12)
	this->QUERY_RESULT_EXT = (int)34918;
	HX_STACK_LINE(11)
	this->CURRENT_QUERY_EXT = (int)34917;
	HX_STACK_LINE(10)
	this->ANY_SAMPLES_PASSED_CONSERVATIVE_EXT = (int)36202;
	HX_STACK_LINE(9)
	this->ANY_SAMPLES_PASSED_EXT = (int)35887;
}
;
	return null();
}

//EXT_occlusion_query_boolean_obj::~EXT_occlusion_query_boolean_obj() { }

Dynamic EXT_occlusion_query_boolean_obj::__CreateEmpty() { return  new EXT_occlusion_query_boolean_obj; }
hx::ObjectPtr< EXT_occlusion_query_boolean_obj > EXT_occlusion_query_boolean_obj::__new()
{  hx::ObjectPtr< EXT_occlusion_query_boolean_obj > _result_ = new EXT_occlusion_query_boolean_obj();
	_result_->__construct();
	return _result_;}

Dynamic EXT_occlusion_query_boolean_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< EXT_occlusion_query_boolean_obj > _result_ = new EXT_occlusion_query_boolean_obj();
	_result_->__construct();
	return _result_;}


EXT_occlusion_query_boolean_obj::EXT_occlusion_query_boolean_obj()
{
}

Dynamic EXT_occlusion_query_boolean_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 16:
		if (HX_FIELD_EQ(inName,"QUERY_RESULT_EXT") ) { return QUERY_RESULT_EXT; }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"CURRENT_QUERY_EXT") ) { return CURRENT_QUERY_EXT; }
		break;
	case 22:
		if (HX_FIELD_EQ(inName,"ANY_SAMPLES_PASSED_EXT") ) { return ANY_SAMPLES_PASSED_EXT; }
		break;
	case 26:
		if (HX_FIELD_EQ(inName,"QUERY_RESULT_AVAILABLE_EXT") ) { return QUERY_RESULT_AVAILABLE_EXT; }
		break;
	case 35:
		if (HX_FIELD_EQ(inName,"ANY_SAMPLES_PASSED_CONSERVATIVE_EXT") ) { return ANY_SAMPLES_PASSED_CONSERVATIVE_EXT; }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic EXT_occlusion_query_boolean_obj::__SetField(const ::String &inName,const Dynamic &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 16:
		if (HX_FIELD_EQ(inName,"QUERY_RESULT_EXT") ) { QUERY_RESULT_EXT=inValue.Cast< int >(); return inValue; }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"CURRENT_QUERY_EXT") ) { CURRENT_QUERY_EXT=inValue.Cast< int >(); return inValue; }
		break;
	case 22:
		if (HX_FIELD_EQ(inName,"ANY_SAMPLES_PASSED_EXT") ) { ANY_SAMPLES_PASSED_EXT=inValue.Cast< int >(); return inValue; }
		break;
	case 26:
		if (HX_FIELD_EQ(inName,"QUERY_RESULT_AVAILABLE_EXT") ) { QUERY_RESULT_AVAILABLE_EXT=inValue.Cast< int >(); return inValue; }
		break;
	case 35:
		if (HX_FIELD_EQ(inName,"ANY_SAMPLES_PASSED_CONSERVATIVE_EXT") ) { ANY_SAMPLES_PASSED_CONSERVATIVE_EXT=inValue.Cast< int >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void EXT_occlusion_query_boolean_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("ANY_SAMPLES_PASSED_EXT","\x9b","\xbc","\x90","\x07"));
	outFields->push(HX_HCSTRING("ANY_SAMPLES_PASSED_CONSERVATIVE_EXT","\x55","\x2b","\x65","\x0d"));
	outFields->push(HX_HCSTRING("CURRENT_QUERY_EXT","\x84","\xa9","\x16","\x2f"));
	outFields->push(HX_HCSTRING("QUERY_RESULT_EXT","\x16","\xd8","\xee","\xc8"));
	outFields->push(HX_HCSTRING("QUERY_RESULT_AVAILABLE_EXT","\x80","\x9b","\x0b","\x21"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsInt,(int)offsetof(EXT_occlusion_query_boolean_obj,ANY_SAMPLES_PASSED_EXT),HX_HCSTRING("ANY_SAMPLES_PASSED_EXT","\x9b","\xbc","\x90","\x07")},
	{hx::fsInt,(int)offsetof(EXT_occlusion_query_boolean_obj,ANY_SAMPLES_PASSED_CONSERVATIVE_EXT),HX_HCSTRING("ANY_SAMPLES_PASSED_CONSERVATIVE_EXT","\x55","\x2b","\x65","\x0d")},
	{hx::fsInt,(int)offsetof(EXT_occlusion_query_boolean_obj,CURRENT_QUERY_EXT),HX_HCSTRING("CURRENT_QUERY_EXT","\x84","\xa9","\x16","\x2f")},
	{hx::fsInt,(int)offsetof(EXT_occlusion_query_boolean_obj,QUERY_RESULT_EXT),HX_HCSTRING("QUERY_RESULT_EXT","\x16","\xd8","\xee","\xc8")},
	{hx::fsInt,(int)offsetof(EXT_occlusion_query_boolean_obj,QUERY_RESULT_AVAILABLE_EXT),HX_HCSTRING("QUERY_RESULT_AVAILABLE_EXT","\x80","\x9b","\x0b","\x21")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo *sStaticStorageInfo = 0;
#endif

static ::String sMemberFields[] = {
	HX_HCSTRING("ANY_SAMPLES_PASSED_EXT","\x9b","\xbc","\x90","\x07"),
	HX_HCSTRING("ANY_SAMPLES_PASSED_CONSERVATIVE_EXT","\x55","\x2b","\x65","\x0d"),
	HX_HCSTRING("CURRENT_QUERY_EXT","\x84","\xa9","\x16","\x2f"),
	HX_HCSTRING("QUERY_RESULT_EXT","\x16","\xd8","\xee","\xc8"),
	HX_HCSTRING("QUERY_RESULT_AVAILABLE_EXT","\x80","\x9b","\x0b","\x21"),
	::String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(EXT_occlusion_query_boolean_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(EXT_occlusion_query_boolean_obj::__mClass,"__mClass");
};

#endif

hx::Class EXT_occlusion_query_boolean_obj::__mClass;

void EXT_occlusion_query_boolean_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("lime.graphics.opengl.ext.EXT_occlusion_query_boolean","\x1f","\x4c","\xab","\xce");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = hx::Class_obj::dupFunctions(sMemberFields);
	__mClass->mCanCast = hx::TCanCast< EXT_occlusion_query_boolean_obj >;
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
