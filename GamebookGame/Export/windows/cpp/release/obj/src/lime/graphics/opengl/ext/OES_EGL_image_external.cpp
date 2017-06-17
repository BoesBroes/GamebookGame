#include <hxcpp.h>

#ifndef INCLUDED_lime_graphics_opengl_ext_OES_EGL_image_external
#include <lime/graphics/opengl/ext/OES_EGL_image_external.h>
#endif
namespace lime{
namespace graphics{
namespace opengl{
namespace ext{

Void OES_EGL_image_external_obj::__construct()
{
HX_STACK_FRAME("lime.graphics.opengl.ext.OES_EGL_image_external","new",0x7e01d1fa,"lime.graphics.opengl.ext.OES_EGL_image_external.new","lime/graphics/opengl/ext/OES_EGL_image_external.hx",6,0xf55619d4)
HX_STACK_THIS(this)
{
	HX_STACK_LINE(12)
	this->REQUIRED_TEXTURE_IMAGE_UNITS_OES = (int)36200;
	HX_STACK_LINE(11)
	this->TEXTURE_BINDING_EXTERNAL_OES = (int)36199;
	HX_STACK_LINE(10)
	this->SAMPLER_EXTERNAL_OES = (int)36198;
	HX_STACK_LINE(9)
	this->TEXTURE_EXTERNAL_OES = (int)36197;
}
;
	return null();
}

//OES_EGL_image_external_obj::~OES_EGL_image_external_obj() { }

Dynamic OES_EGL_image_external_obj::__CreateEmpty() { return  new OES_EGL_image_external_obj; }
hx::ObjectPtr< OES_EGL_image_external_obj > OES_EGL_image_external_obj::__new()
{  hx::ObjectPtr< OES_EGL_image_external_obj > _result_ = new OES_EGL_image_external_obj();
	_result_->__construct();
	return _result_;}

Dynamic OES_EGL_image_external_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< OES_EGL_image_external_obj > _result_ = new OES_EGL_image_external_obj();
	_result_->__construct();
	return _result_;}


OES_EGL_image_external_obj::OES_EGL_image_external_obj()
{
}

Dynamic OES_EGL_image_external_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 20:
		if (HX_FIELD_EQ(inName,"TEXTURE_EXTERNAL_OES") ) { return TEXTURE_EXTERNAL_OES; }
		if (HX_FIELD_EQ(inName,"SAMPLER_EXTERNAL_OES") ) { return SAMPLER_EXTERNAL_OES; }
		break;
	case 28:
		if (HX_FIELD_EQ(inName,"TEXTURE_BINDING_EXTERNAL_OES") ) { return TEXTURE_BINDING_EXTERNAL_OES; }
		break;
	case 32:
		if (HX_FIELD_EQ(inName,"REQUIRED_TEXTURE_IMAGE_UNITS_OES") ) { return REQUIRED_TEXTURE_IMAGE_UNITS_OES; }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic OES_EGL_image_external_obj::__SetField(const ::String &inName,const Dynamic &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 20:
		if (HX_FIELD_EQ(inName,"TEXTURE_EXTERNAL_OES") ) { TEXTURE_EXTERNAL_OES=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"SAMPLER_EXTERNAL_OES") ) { SAMPLER_EXTERNAL_OES=inValue.Cast< int >(); return inValue; }
		break;
	case 28:
		if (HX_FIELD_EQ(inName,"TEXTURE_BINDING_EXTERNAL_OES") ) { TEXTURE_BINDING_EXTERNAL_OES=inValue.Cast< int >(); return inValue; }
		break;
	case 32:
		if (HX_FIELD_EQ(inName,"REQUIRED_TEXTURE_IMAGE_UNITS_OES") ) { REQUIRED_TEXTURE_IMAGE_UNITS_OES=inValue.Cast< int >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void OES_EGL_image_external_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("TEXTURE_EXTERNAL_OES","\x8d","\x24","\x93","\x6b"));
	outFields->push(HX_HCSTRING("SAMPLER_EXTERNAL_OES","\x40","\x50","\x34","\x6c"));
	outFields->push(HX_HCSTRING("TEXTURE_BINDING_EXTERNAL_OES","\x27","\xe9","\xa2","\xb6"));
	outFields->push(HX_HCSTRING("REQUIRED_TEXTURE_IMAGE_UNITS_OES","\x25","\x2a","\x48","\xaa"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsInt,(int)offsetof(OES_EGL_image_external_obj,TEXTURE_EXTERNAL_OES),HX_HCSTRING("TEXTURE_EXTERNAL_OES","\x8d","\x24","\x93","\x6b")},
	{hx::fsInt,(int)offsetof(OES_EGL_image_external_obj,SAMPLER_EXTERNAL_OES),HX_HCSTRING("SAMPLER_EXTERNAL_OES","\x40","\x50","\x34","\x6c")},
	{hx::fsInt,(int)offsetof(OES_EGL_image_external_obj,TEXTURE_BINDING_EXTERNAL_OES),HX_HCSTRING("TEXTURE_BINDING_EXTERNAL_OES","\x27","\xe9","\xa2","\xb6")},
	{hx::fsInt,(int)offsetof(OES_EGL_image_external_obj,REQUIRED_TEXTURE_IMAGE_UNITS_OES),HX_HCSTRING("REQUIRED_TEXTURE_IMAGE_UNITS_OES","\x25","\x2a","\x48","\xaa")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo *sStaticStorageInfo = 0;
#endif

static ::String sMemberFields[] = {
	HX_HCSTRING("TEXTURE_EXTERNAL_OES","\x8d","\x24","\x93","\x6b"),
	HX_HCSTRING("SAMPLER_EXTERNAL_OES","\x40","\x50","\x34","\x6c"),
	HX_HCSTRING("TEXTURE_BINDING_EXTERNAL_OES","\x27","\xe9","\xa2","\xb6"),
	HX_HCSTRING("REQUIRED_TEXTURE_IMAGE_UNITS_OES","\x25","\x2a","\x48","\xaa"),
	::String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(OES_EGL_image_external_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(OES_EGL_image_external_obj::__mClass,"__mClass");
};

#endif

hx::Class OES_EGL_image_external_obj::__mClass;

void OES_EGL_image_external_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("lime.graphics.opengl.ext.OES_EGL_image_external","\x08","\x0d","\x07","\xff");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = hx::Class_obj::dupFunctions(sMemberFields);
	__mClass->mCanCast = hx::TCanCast< OES_EGL_image_external_obj >;
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
