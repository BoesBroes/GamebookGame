#include <hxcpp.h>

#ifndef INCLUDED_lime_graphics_opengl_ext_NV_read_buffer_front
#include <lime/graphics/opengl/ext/NV_read_buffer_front.h>
#endif
namespace lime{
namespace graphics{
namespace opengl{
namespace ext{

Void NV_read_buffer_front_obj::__construct()
{
HX_STACK_FRAME("lime.graphics.opengl.ext.NV_read_buffer_front","new",0xba277d50,"lime.graphics.opengl.ext.NV_read_buffer_front.new","lime/graphics/opengl/ext/NV_read_buffer_front.hx",7,0x1fa707be)
HX_STACK_THIS(this)
{
}
;
	return null();
}

//NV_read_buffer_front_obj::~NV_read_buffer_front_obj() { }

Dynamic NV_read_buffer_front_obj::__CreateEmpty() { return  new NV_read_buffer_front_obj; }
hx::ObjectPtr< NV_read_buffer_front_obj > NV_read_buffer_front_obj::__new()
{  hx::ObjectPtr< NV_read_buffer_front_obj > _result_ = new NV_read_buffer_front_obj();
	_result_->__construct();
	return _result_;}

Dynamic NV_read_buffer_front_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< NV_read_buffer_front_obj > _result_ = new NV_read_buffer_front_obj();
	_result_->__construct();
	return _result_;}


NV_read_buffer_front_obj::NV_read_buffer_front_obj()
{
}

#if HXCPP_SCRIPTABLE
static hx::StorageInfo *sMemberStorageInfo = 0;
static hx::StaticInfo *sStaticStorageInfo = 0;
#endif

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(NV_read_buffer_front_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(NV_read_buffer_front_obj::__mClass,"__mClass");
};

#endif

hx::Class NV_read_buffer_front_obj::__mClass;

void NV_read_buffer_front_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("lime.graphics.opengl.ext.NV_read_buffer_front","\x5e","\xd5","\x32","\xa1");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = hx::Class_obj::dupFunctions(0 /* sMemberFields */);
	__mClass->mCanCast = hx::TCanCast< NV_read_buffer_front_obj >;
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
