#include <hxcpp.h>

#ifndef INCLUDED_lime_graphics_opengl_ext_ARM_rgba8
#include <lime/graphics/opengl/ext/ARM_rgba8.h>
#endif
namespace lime{
namespace graphics{
namespace opengl{
namespace ext{

Void ARM_rgba8_obj::__construct()
{
HX_STACK_FRAME("lime.graphics.opengl.ext.ARM_rgba8","new",0xe0dce511,"lime.graphics.opengl.ext.ARM_rgba8.new","lime/graphics/opengl/ext/ARM_rgba8.hx",7,0xfb26fb21)
HX_STACK_THIS(this)
{
}
;
	return null();
}

//ARM_rgba8_obj::~ARM_rgba8_obj() { }

Dynamic ARM_rgba8_obj::__CreateEmpty() { return  new ARM_rgba8_obj; }
hx::ObjectPtr< ARM_rgba8_obj > ARM_rgba8_obj::__new()
{  hx::ObjectPtr< ARM_rgba8_obj > _result_ = new ARM_rgba8_obj();
	_result_->__construct();
	return _result_;}

Dynamic ARM_rgba8_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< ARM_rgba8_obj > _result_ = new ARM_rgba8_obj();
	_result_->__construct();
	return _result_;}


ARM_rgba8_obj::ARM_rgba8_obj()
{
}

#if HXCPP_SCRIPTABLE
static hx::StorageInfo *sMemberStorageInfo = 0;
static hx::StaticInfo *sStaticStorageInfo = 0;
#endif

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(ARM_rgba8_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(ARM_rgba8_obj::__mClass,"__mClass");
};

#endif

hx::Class ARM_rgba8_obj::__mClass;

void ARM_rgba8_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("lime.graphics.opengl.ext.ARM_rgba8","\x9f","\x08","\x47","\x51");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = hx::Class_obj::dupFunctions(0 /* sMemberFields */);
	__mClass->mCanCast = hx::TCanCast< ARM_rgba8_obj >;
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