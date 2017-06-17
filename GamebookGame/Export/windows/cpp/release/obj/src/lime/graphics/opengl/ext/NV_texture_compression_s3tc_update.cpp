#include <hxcpp.h>

#ifndef INCLUDED_lime_graphics_opengl_ext_NV_texture_compression_s3tc_update
#include <lime/graphics/opengl/ext/NV_texture_compression_s3tc_update.h>
#endif
namespace lime{
namespace graphics{
namespace opengl{
namespace ext{

Void NV_texture_compression_s3tc_update_obj::__construct()
{
HX_STACK_FRAME("lime.graphics.opengl.ext.NV_texture_compression_s3tc_update","new",0xf27e55d9,"lime.graphics.opengl.ext.NV_texture_compression_s3tc_update.new","lime/graphics/opengl/ext/NV_texture_compression_s3tc_update.hx",7,0xc8042bd5)
HX_STACK_THIS(this)
{
}
;
	return null();
}

//NV_texture_compression_s3tc_update_obj::~NV_texture_compression_s3tc_update_obj() { }

Dynamic NV_texture_compression_s3tc_update_obj::__CreateEmpty() { return  new NV_texture_compression_s3tc_update_obj; }
hx::ObjectPtr< NV_texture_compression_s3tc_update_obj > NV_texture_compression_s3tc_update_obj::__new()
{  hx::ObjectPtr< NV_texture_compression_s3tc_update_obj > _result_ = new NV_texture_compression_s3tc_update_obj();
	_result_->__construct();
	return _result_;}

Dynamic NV_texture_compression_s3tc_update_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< NV_texture_compression_s3tc_update_obj > _result_ = new NV_texture_compression_s3tc_update_obj();
	_result_->__construct();
	return _result_;}


NV_texture_compression_s3tc_update_obj::NV_texture_compression_s3tc_update_obj()
{
}

#if HXCPP_SCRIPTABLE
static hx::StorageInfo *sMemberStorageInfo = 0;
static hx::StaticInfo *sStaticStorageInfo = 0;
#endif

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(NV_texture_compression_s3tc_update_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(NV_texture_compression_s3tc_update_obj::__mClass,"__mClass");
};

#endif

hx::Class NV_texture_compression_s3tc_update_obj::__mClass;

void NV_texture_compression_s3tc_update_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("lime.graphics.opengl.ext.NV_texture_compression_s3tc_update","\x67","\x75","\x9e","\xfc");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = hx::Class_obj::dupFunctions(0 /* sMemberFields */);
	__mClass->mCanCast = hx::TCanCast< NV_texture_compression_s3tc_update_obj >;
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
