#include <hxcpp.h>

#ifndef INCLUDED_lime_graphics_opengl_ext_OES_texture_npot
#include <lime/graphics/opengl/ext/OES_texture_npot.h>
#endif
namespace lime{
namespace graphics{
namespace opengl{
namespace ext{

Void OES_texture_npot_obj::__construct()
{
HX_STACK_FRAME("lime.graphics.opengl.ext.OES_texture_npot","new",0xdcb64861,"lime.graphics.opengl.ext.OES_texture_npot.new","lime/graphics/opengl/ext/OES_texture_npot.hx",7,0xaf3862cd)
HX_STACK_THIS(this)
{
}
;
	return null();
}

//OES_texture_npot_obj::~OES_texture_npot_obj() { }

Dynamic OES_texture_npot_obj::__CreateEmpty() { return  new OES_texture_npot_obj; }
hx::ObjectPtr< OES_texture_npot_obj > OES_texture_npot_obj::__new()
{  hx::ObjectPtr< OES_texture_npot_obj > _result_ = new OES_texture_npot_obj();
	_result_->__construct();
	return _result_;}

Dynamic OES_texture_npot_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< OES_texture_npot_obj > _result_ = new OES_texture_npot_obj();
	_result_->__construct();
	return _result_;}


OES_texture_npot_obj::OES_texture_npot_obj()
{
}

#if HXCPP_SCRIPTABLE
static hx::StorageInfo *sMemberStorageInfo = 0;
static hx::StaticInfo *sStaticStorageInfo = 0;
#endif

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(OES_texture_npot_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(OES_texture_npot_obj::__mClass,"__mClass");
};

#endif

hx::Class OES_texture_npot_obj::__mClass;

void OES_texture_npot_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("lime.graphics.opengl.ext.OES_texture_npot","\xef","\x83","\x38","\xa7");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = hx::Class_obj::dupFunctions(0 /* sMemberFields */);
	__mClass->mCanCast = hx::TCanCast< OES_texture_npot_obj >;
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
