#include <hxcpp.h>

#ifndef INCLUDED_lime_graphics_opengl_ext_EXT_sRGB
#include <lime/graphics/opengl/ext/EXT_sRGB.h>
#endif
namespace lime{
namespace graphics{
namespace opengl{
namespace ext{

Void EXT_sRGB_obj::__construct()
{
HX_STACK_FRAME("lime.graphics.opengl.ext.EXT_sRGB","new",0x9abd0eac,"lime.graphics.opengl.ext.EXT_sRGB.new","lime/graphics/opengl/ext/EXT_sRGB.hx",10,0x7d9f60e2)
HX_STACK_THIS(this)
{
	HX_STACK_LINE(16)
	this->FRAMEBUFFER_ATTACHMENT_COLOR_ENCODING_EXT = (int)33296;
	HX_STACK_LINE(15)
	this->SRGB8_ALPHA8_EXT = (int)35907;
	HX_STACK_LINE(14)
	this->SRGB_ALPHA_EXT = (int)35906;
	HX_STACK_LINE(13)
	this->SRGB_EXT = (int)35904;
}
;
	return null();
}

//EXT_sRGB_obj::~EXT_sRGB_obj() { }

Dynamic EXT_sRGB_obj::__CreateEmpty() { return  new EXT_sRGB_obj; }
hx::ObjectPtr< EXT_sRGB_obj > EXT_sRGB_obj::__new()
{  hx::ObjectPtr< EXT_sRGB_obj > _result_ = new EXT_sRGB_obj();
	_result_->__construct();
	return _result_;}

Dynamic EXT_sRGB_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< EXT_sRGB_obj > _result_ = new EXT_sRGB_obj();
	_result_->__construct();
	return _result_;}


EXT_sRGB_obj::EXT_sRGB_obj()
{
}

Dynamic EXT_sRGB_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 8:
		if (HX_FIELD_EQ(inName,"SRGB_EXT") ) { return SRGB_EXT; }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"SRGB_ALPHA_EXT") ) { return SRGB_ALPHA_EXT; }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"SRGB8_ALPHA8_EXT") ) { return SRGB8_ALPHA8_EXT; }
		break;
	case 41:
		if (HX_FIELD_EQ(inName,"FRAMEBUFFER_ATTACHMENT_COLOR_ENCODING_EXT") ) { return FRAMEBUFFER_ATTACHMENT_COLOR_ENCODING_EXT; }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic EXT_sRGB_obj::__SetField(const ::String &inName,const Dynamic &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 8:
		if (HX_FIELD_EQ(inName,"SRGB_EXT") ) { SRGB_EXT=inValue.Cast< int >(); return inValue; }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"SRGB_ALPHA_EXT") ) { SRGB_ALPHA_EXT=inValue.Cast< int >(); return inValue; }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"SRGB8_ALPHA8_EXT") ) { SRGB8_ALPHA8_EXT=inValue.Cast< int >(); return inValue; }
		break;
	case 41:
		if (HX_FIELD_EQ(inName,"FRAMEBUFFER_ATTACHMENT_COLOR_ENCODING_EXT") ) { FRAMEBUFFER_ATTACHMENT_COLOR_ENCODING_EXT=inValue.Cast< int >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void EXT_sRGB_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("SRGB_EXT","\xfc","\xde","\x03","\x80"));
	outFields->push(HX_HCSTRING("SRGB_ALPHA_EXT","\x7b","\x08","\xa4","\x45"));
	outFields->push(HX_HCSTRING("SRGB8_ALPHA8_EXT","\x1d","\x4d","\x56","\xfa"));
	outFields->push(HX_HCSTRING("FRAMEBUFFER_ATTACHMENT_COLOR_ENCODING_EXT","\x7b","\x67","\x32","\x0b"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsInt,(int)offsetof(EXT_sRGB_obj,SRGB_EXT),HX_HCSTRING("SRGB_EXT","\xfc","\xde","\x03","\x80")},
	{hx::fsInt,(int)offsetof(EXT_sRGB_obj,SRGB_ALPHA_EXT),HX_HCSTRING("SRGB_ALPHA_EXT","\x7b","\x08","\xa4","\x45")},
	{hx::fsInt,(int)offsetof(EXT_sRGB_obj,SRGB8_ALPHA8_EXT),HX_HCSTRING("SRGB8_ALPHA8_EXT","\x1d","\x4d","\x56","\xfa")},
	{hx::fsInt,(int)offsetof(EXT_sRGB_obj,FRAMEBUFFER_ATTACHMENT_COLOR_ENCODING_EXT),HX_HCSTRING("FRAMEBUFFER_ATTACHMENT_COLOR_ENCODING_EXT","\x7b","\x67","\x32","\x0b")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo *sStaticStorageInfo = 0;
#endif

static ::String sMemberFields[] = {
	HX_HCSTRING("SRGB_EXT","\xfc","\xde","\x03","\x80"),
	HX_HCSTRING("SRGB_ALPHA_EXT","\x7b","\x08","\xa4","\x45"),
	HX_HCSTRING("SRGB8_ALPHA8_EXT","\x1d","\x4d","\x56","\xfa"),
	HX_HCSTRING("FRAMEBUFFER_ATTACHMENT_COLOR_ENCODING_EXT","\x7b","\x67","\x32","\x0b"),
	::String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(EXT_sRGB_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(EXT_sRGB_obj::__mClass,"__mClass");
};

#endif

hx::Class EXT_sRGB_obj::__mClass;

void EXT_sRGB_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("lime.graphics.opengl.ext.EXT_sRGB","\xba","\x88","\x15","\xb6");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = hx::Class_obj::dupFunctions(sMemberFields);
	__mClass->mCanCast = hx::TCanCast< EXT_sRGB_obj >;
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
