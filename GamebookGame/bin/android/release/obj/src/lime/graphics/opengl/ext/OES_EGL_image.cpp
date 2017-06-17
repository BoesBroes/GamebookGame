#include <hxcpp.h>

#ifndef INCLUDED_lime_graphics_opengl_ext_OES_EGL_image
#include <lime/graphics/opengl/ext/OES_EGL_image.h>
#endif
namespace lime{
namespace graphics{
namespace opengl{
namespace ext{

Void OES_EGL_image_obj::__construct()
{
HX_STACK_FRAME("lime.graphics.opengl.ext.OES_EGL_image","new",0x6c1a8a54,"lime.graphics.opengl.ext.OES_EGL_image.new","lime/graphics/opengl/ext/OES_EGL_image.hx",7,0x022e683e)
HX_STACK_THIS(this)
{
}
;
	return null();
}

//OES_EGL_image_obj::~OES_EGL_image_obj() { }

Dynamic OES_EGL_image_obj::__CreateEmpty() { return  new OES_EGL_image_obj; }
hx::ObjectPtr< OES_EGL_image_obj > OES_EGL_image_obj::__new()
{  hx::ObjectPtr< OES_EGL_image_obj > _result_ = new OES_EGL_image_obj();
	_result_->__construct();
	return _result_;}

Dynamic OES_EGL_image_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< OES_EGL_image_obj > _result_ = new OES_EGL_image_obj();
	_result_->__construct();
	return _result_;}


OES_EGL_image_obj::OES_EGL_image_obj()
{
}

#if HXCPP_SCRIPTABLE
static hx::StorageInfo *sMemberStorageInfo = 0;
static hx::StaticInfo *sStaticStorageInfo = 0;
#endif

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(OES_EGL_image_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(OES_EGL_image_obj::__mClass,"__mClass");
};

#endif

hx::Class OES_EGL_image_obj::__mClass;

void OES_EGL_image_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("lime.graphics.opengl.ext.OES_EGL_image","\x62","\x10","\xd2","\x25");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = hx::Class_obj::dupFunctions(0 /* sMemberFields */);
	__mClass->mCanCast = hx::TCanCast< OES_EGL_image_obj >;
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
