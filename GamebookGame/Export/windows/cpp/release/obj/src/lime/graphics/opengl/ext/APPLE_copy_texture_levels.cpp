#include <hxcpp.h>

#ifndef INCLUDED_lime_graphics_opengl_ext_APPLE_copy_texture_levels
#include <lime/graphics/opengl/ext/APPLE_copy_texture_levels.h>
#endif
namespace lime{
namespace graphics{
namespace opengl{
namespace ext{

Void APPLE_copy_texture_levels_obj::__construct()
{
HX_STACK_FRAME("lime.graphics.opengl.ext.APPLE_copy_texture_levels","new",0xe1bf6b68,"lime.graphics.opengl.ext.APPLE_copy_texture_levels.new","lime/graphics/opengl/ext/APPLE_copy_texture_levels.hx",7,0xf0dcb0aa)
HX_STACK_THIS(this)
{
}
;
	return null();
}

//APPLE_copy_texture_levels_obj::~APPLE_copy_texture_levels_obj() { }

Dynamic APPLE_copy_texture_levels_obj::__CreateEmpty() { return  new APPLE_copy_texture_levels_obj; }
hx::ObjectPtr< APPLE_copy_texture_levels_obj > APPLE_copy_texture_levels_obj::__new()
{  hx::ObjectPtr< APPLE_copy_texture_levels_obj > _result_ = new APPLE_copy_texture_levels_obj();
	_result_->__construct();
	return _result_;}

Dynamic APPLE_copy_texture_levels_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< APPLE_copy_texture_levels_obj > _result_ = new APPLE_copy_texture_levels_obj();
	_result_->__construct();
	return _result_;}


APPLE_copy_texture_levels_obj::APPLE_copy_texture_levels_obj()
{
}

#if HXCPP_SCRIPTABLE
static hx::StorageInfo *sMemberStorageInfo = 0;
static hx::StaticInfo *sStaticStorageInfo = 0;
#endif

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(APPLE_copy_texture_levels_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(APPLE_copy_texture_levels_obj::__mClass,"__mClass");
};

#endif

hx::Class APPLE_copy_texture_levels_obj::__mClass;

void APPLE_copy_texture_levels_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("lime.graphics.opengl.ext.APPLE_copy_texture_levels","\x76","\xd7","\x83","\x2d");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = hx::Class_obj::dupFunctions(0 /* sMemberFields */);
	__mClass->mCanCast = hx::TCanCast< APPLE_copy_texture_levels_obj >;
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
