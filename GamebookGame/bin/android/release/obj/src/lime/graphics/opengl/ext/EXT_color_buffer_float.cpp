#include <hxcpp.h>

#ifndef INCLUDED_lime_graphics_opengl_ext_EXT_color_buffer_float
#include <lime/graphics/opengl/ext/EXT_color_buffer_float.h>
#endif
namespace lime{
namespace graphics{
namespace opengl{
namespace ext{

Void EXT_color_buffer_float_obj::__construct()
{
HX_STACK_FRAME("lime.graphics.opengl.ext.EXT_color_buffer_float","new",0x9b72bb4b,"lime.graphics.opengl.ext.EXT_color_buffer_float.new","lime/graphics/opengl/ext/EXT_color_buffer_float.hx",10,0x5ba385a3)
HX_STACK_THIS(this)
{
}
;
	return null();
}

//EXT_color_buffer_float_obj::~EXT_color_buffer_float_obj() { }

Dynamic EXT_color_buffer_float_obj::__CreateEmpty() { return  new EXT_color_buffer_float_obj; }
hx::ObjectPtr< EXT_color_buffer_float_obj > EXT_color_buffer_float_obj::__new()
{  hx::ObjectPtr< EXT_color_buffer_float_obj > _result_ = new EXT_color_buffer_float_obj();
	_result_->__construct();
	return _result_;}

Dynamic EXT_color_buffer_float_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< EXT_color_buffer_float_obj > _result_ = new EXT_color_buffer_float_obj();
	_result_->__construct();
	return _result_;}


EXT_color_buffer_float_obj::EXT_color_buffer_float_obj()
{
}

#if HXCPP_SCRIPTABLE
static hx::StorageInfo *sMemberStorageInfo = 0;
static hx::StaticInfo *sStaticStorageInfo = 0;
#endif

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(EXT_color_buffer_float_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(EXT_color_buffer_float_obj::__mClass,"__mClass");
};

#endif

hx::Class EXT_color_buffer_float_obj::__mClass;

void EXT_color_buffer_float_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("lime.graphics.opengl.ext.EXT_color_buffer_float","\xd9","\xb9","\x72","\x48");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = hx::Class_obj::dupFunctions(0 /* sMemberFields */);
	__mClass->mCanCast = hx::TCanCast< EXT_color_buffer_float_obj >;
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
