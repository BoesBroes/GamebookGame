#include <hxcpp.h>

#ifndef INCLUDED_lime_graphics_opengl_ext_OES_texture_float
#include <lime/graphics/opengl/ext/OES_texture_float.h>
#endif
namespace lime{
namespace graphics{
namespace opengl{
namespace ext{

Void OES_texture_float_obj::__construct()
{
HX_STACK_FRAME("lime.graphics.opengl.ext.OES_texture_float","new",0x5171d986,"lime.graphics.opengl.ext.OES_texture_float.new","lime/graphics/opengl/ext/OES_texture_float.hx",10,0x6fb07e4c)
HX_STACK_THIS(this)
{
}
;
	return null();
}

//OES_texture_float_obj::~OES_texture_float_obj() { }

Dynamic OES_texture_float_obj::__CreateEmpty() { return  new OES_texture_float_obj; }
hx::ObjectPtr< OES_texture_float_obj > OES_texture_float_obj::__new()
{  hx::ObjectPtr< OES_texture_float_obj > _result_ = new OES_texture_float_obj();
	_result_->__construct();
	return _result_;}

Dynamic OES_texture_float_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< OES_texture_float_obj > _result_ = new OES_texture_float_obj();
	_result_->__construct();
	return _result_;}


OES_texture_float_obj::OES_texture_float_obj()
{
}

#if HXCPP_SCRIPTABLE
static hx::StorageInfo *sMemberStorageInfo = 0;
static hx::StaticInfo *sStaticStorageInfo = 0;
#endif

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(OES_texture_float_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(OES_texture_float_obj::__mClass,"__mClass");
};

#endif

hx::Class OES_texture_float_obj::__mClass;

void OES_texture_float_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("lime.graphics.opengl.ext.OES_texture_float","\x94","\x5e","\x61","\x0c");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = hx::Class_obj::dupFunctions(0 /* sMemberFields */);
	__mClass->mCanCast = hx::TCanCast< OES_texture_float_obj >;
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
