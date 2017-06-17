#include <hxcpp.h>

#ifndef INCLUDED_lime_graphics_opengl_ext_OES_depth_texture
#include <lime/graphics/opengl/ext/OES_depth_texture.h>
#endif
namespace lime{
namespace graphics{
namespace opengl{
namespace ext{

Void OES_depth_texture_obj::__construct()
{
HX_STACK_FRAME("lime.graphics.opengl.ext.OES_depth_texture","new",0xde3f7b6d,"lime.graphics.opengl.ext.OES_depth_texture.new","lime/graphics/opengl/ext/OES_depth_texture.hx",7,0xae4fd645)
HX_STACK_THIS(this)
{
}
;
	return null();
}

//OES_depth_texture_obj::~OES_depth_texture_obj() { }

Dynamic OES_depth_texture_obj::__CreateEmpty() { return  new OES_depth_texture_obj; }
hx::ObjectPtr< OES_depth_texture_obj > OES_depth_texture_obj::__new()
{  hx::ObjectPtr< OES_depth_texture_obj > _result_ = new OES_depth_texture_obj();
	_result_->__construct();
	return _result_;}

Dynamic OES_depth_texture_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< OES_depth_texture_obj > _result_ = new OES_depth_texture_obj();
	_result_->__construct();
	return _result_;}


OES_depth_texture_obj::OES_depth_texture_obj()
{
}

#if HXCPP_SCRIPTABLE
static hx::StorageInfo *sMemberStorageInfo = 0;
static hx::StaticInfo *sStaticStorageInfo = 0;
#endif

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(OES_depth_texture_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(OES_depth_texture_obj::__mClass,"__mClass");
};

#endif

hx::Class OES_depth_texture_obj::__mClass;

void OES_depth_texture_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("lime.graphics.opengl.ext.OES_depth_texture","\xfb","\x40","\xd0","\xec");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = hx::Class_obj::dupFunctions(0 /* sMemberFields */);
	__mClass->mCanCast = hx::TCanCast< OES_depth_texture_obj >;
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
