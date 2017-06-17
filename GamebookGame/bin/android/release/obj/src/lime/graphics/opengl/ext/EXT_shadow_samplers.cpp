#include <hxcpp.h>

#ifndef INCLUDED_lime_graphics_opengl_ext_EXT_shadow_samplers
#include <lime/graphics/opengl/ext/EXT_shadow_samplers.h>
#endif
namespace lime{
namespace graphics{
namespace opengl{
namespace ext{

Void EXT_shadow_samplers_obj::__construct()
{
HX_STACK_FRAME("lime.graphics.opengl.ext.EXT_shadow_samplers","new",0x0292977c,"lime.graphics.opengl.ext.EXT_shadow_samplers.new","lime/graphics/opengl/ext/EXT_shadow_samplers.hx",6,0x5ea25d96)
HX_STACK_THIS(this)
{
	HX_STACK_LINE(12)
	this->SAMPLER_2D_SHADOW_EXT = (int)35682;
	HX_STACK_LINE(11)
	this->COMPARE_REF_TO_TEXTURE_EXT = (int)34894;
	HX_STACK_LINE(10)
	this->TEXTURE_COMPARE_FUNC_EXT = (int)34893;
	HX_STACK_LINE(9)
	this->TEXTURE_COMPARE_MODE_EXT = (int)34892;
}
;
	return null();
}

//EXT_shadow_samplers_obj::~EXT_shadow_samplers_obj() { }

Dynamic EXT_shadow_samplers_obj::__CreateEmpty() { return  new EXT_shadow_samplers_obj; }
hx::ObjectPtr< EXT_shadow_samplers_obj > EXT_shadow_samplers_obj::__new()
{  hx::ObjectPtr< EXT_shadow_samplers_obj > _result_ = new EXT_shadow_samplers_obj();
	_result_->__construct();
	return _result_;}

Dynamic EXT_shadow_samplers_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< EXT_shadow_samplers_obj > _result_ = new EXT_shadow_samplers_obj();
	_result_->__construct();
	return _result_;}


EXT_shadow_samplers_obj::EXT_shadow_samplers_obj()
{
}

Dynamic EXT_shadow_samplers_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 21:
		if (HX_FIELD_EQ(inName,"SAMPLER_2D_SHADOW_EXT") ) { return SAMPLER_2D_SHADOW_EXT; }
		break;
	case 24:
		if (HX_FIELD_EQ(inName,"TEXTURE_COMPARE_MODE_EXT") ) { return TEXTURE_COMPARE_MODE_EXT; }
		if (HX_FIELD_EQ(inName,"TEXTURE_COMPARE_FUNC_EXT") ) { return TEXTURE_COMPARE_FUNC_EXT; }
		break;
	case 26:
		if (HX_FIELD_EQ(inName,"COMPARE_REF_TO_TEXTURE_EXT") ) { return COMPARE_REF_TO_TEXTURE_EXT; }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic EXT_shadow_samplers_obj::__SetField(const ::String &inName,const Dynamic &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 21:
		if (HX_FIELD_EQ(inName,"SAMPLER_2D_SHADOW_EXT") ) { SAMPLER_2D_SHADOW_EXT=inValue.Cast< int >(); return inValue; }
		break;
	case 24:
		if (HX_FIELD_EQ(inName,"TEXTURE_COMPARE_MODE_EXT") ) { TEXTURE_COMPARE_MODE_EXT=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"TEXTURE_COMPARE_FUNC_EXT") ) { TEXTURE_COMPARE_FUNC_EXT=inValue.Cast< int >(); return inValue; }
		break;
	case 26:
		if (HX_FIELD_EQ(inName,"COMPARE_REF_TO_TEXTURE_EXT") ) { COMPARE_REF_TO_TEXTURE_EXT=inValue.Cast< int >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void EXT_shadow_samplers_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("TEXTURE_COMPARE_MODE_EXT","\xe3","\x97","\x18","\xc1"));
	outFields->push(HX_HCSTRING("TEXTURE_COMPARE_FUNC_EXT","\x44","\xb4","\xfc","\x02"));
	outFields->push(HX_HCSTRING("COMPARE_REF_TO_TEXTURE_EXT","\x3f","\x0b","\xe1","\xff"));
	outFields->push(HX_HCSTRING("SAMPLER_2D_SHADOW_EXT","\x18","\x8f","\x28","\xf9"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsInt,(int)offsetof(EXT_shadow_samplers_obj,TEXTURE_COMPARE_MODE_EXT),HX_HCSTRING("TEXTURE_COMPARE_MODE_EXT","\xe3","\x97","\x18","\xc1")},
	{hx::fsInt,(int)offsetof(EXT_shadow_samplers_obj,TEXTURE_COMPARE_FUNC_EXT),HX_HCSTRING("TEXTURE_COMPARE_FUNC_EXT","\x44","\xb4","\xfc","\x02")},
	{hx::fsInt,(int)offsetof(EXT_shadow_samplers_obj,COMPARE_REF_TO_TEXTURE_EXT),HX_HCSTRING("COMPARE_REF_TO_TEXTURE_EXT","\x3f","\x0b","\xe1","\xff")},
	{hx::fsInt,(int)offsetof(EXT_shadow_samplers_obj,SAMPLER_2D_SHADOW_EXT),HX_HCSTRING("SAMPLER_2D_SHADOW_EXT","\x18","\x8f","\x28","\xf9")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo *sStaticStorageInfo = 0;
#endif

static ::String sMemberFields[] = {
	HX_HCSTRING("TEXTURE_COMPARE_MODE_EXT","\xe3","\x97","\x18","\xc1"),
	HX_HCSTRING("TEXTURE_COMPARE_FUNC_EXT","\x44","\xb4","\xfc","\x02"),
	HX_HCSTRING("COMPARE_REF_TO_TEXTURE_EXT","\x3f","\x0b","\xe1","\xff"),
	HX_HCSTRING("SAMPLER_2D_SHADOW_EXT","\x18","\x8f","\x28","\xf9"),
	::String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(EXT_shadow_samplers_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(EXT_shadow_samplers_obj::__mClass,"__mClass");
};

#endif

hx::Class EXT_shadow_samplers_obj::__mClass;

void EXT_shadow_samplers_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("lime.graphics.opengl.ext.EXT_shadow_samplers","\x8a","\x69","\xa2","\x62");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = hx::Class_obj::dupFunctions(sMemberFields);
	__mClass->mCanCast = hx::TCanCast< EXT_shadow_samplers_obj >;
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
