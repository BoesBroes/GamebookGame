#include <hxcpp.h>

#ifndef INCLUDED_lime_graphics_opengl_ext_EXT_shader_framebuffer_fetch
#include <lime/graphics/opengl/ext/EXT_shader_framebuffer_fetch.h>
#endif
namespace lime{
namespace graphics{
namespace opengl{
namespace ext{

Void EXT_shader_framebuffer_fetch_obj::__construct()
{
HX_STACK_FRAME("lime.graphics.opengl.ext.EXT_shader_framebuffer_fetch","new",0x36f079a0,"lime.graphics.opengl.ext.EXT_shader_framebuffer_fetch.new","lime/graphics/opengl/ext/EXT_shader_framebuffer_fetch.hx",6,0xe61dd36e)
HX_STACK_THIS(this)
{
	HX_STACK_LINE(9)
	this->FRAGMENT_SHADER_DISCARDS_SAMPLES_EXT = (int)35410;
}
;
	return null();
}

//EXT_shader_framebuffer_fetch_obj::~EXT_shader_framebuffer_fetch_obj() { }

Dynamic EXT_shader_framebuffer_fetch_obj::__CreateEmpty() { return  new EXT_shader_framebuffer_fetch_obj; }
hx::ObjectPtr< EXT_shader_framebuffer_fetch_obj > EXT_shader_framebuffer_fetch_obj::__new()
{  hx::ObjectPtr< EXT_shader_framebuffer_fetch_obj > _result_ = new EXT_shader_framebuffer_fetch_obj();
	_result_->__construct();
	return _result_;}

Dynamic EXT_shader_framebuffer_fetch_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< EXT_shader_framebuffer_fetch_obj > _result_ = new EXT_shader_framebuffer_fetch_obj();
	_result_->__construct();
	return _result_;}


EXT_shader_framebuffer_fetch_obj::EXT_shader_framebuffer_fetch_obj()
{
}

Dynamic EXT_shader_framebuffer_fetch_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 36:
		if (HX_FIELD_EQ(inName,"FRAGMENT_SHADER_DISCARDS_SAMPLES_EXT") ) { return FRAGMENT_SHADER_DISCARDS_SAMPLES_EXT; }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic EXT_shader_framebuffer_fetch_obj::__SetField(const ::String &inName,const Dynamic &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 36:
		if (HX_FIELD_EQ(inName,"FRAGMENT_SHADER_DISCARDS_SAMPLES_EXT") ) { FRAGMENT_SHADER_DISCARDS_SAMPLES_EXT=inValue.Cast< int >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void EXT_shader_framebuffer_fetch_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("FRAGMENT_SHADER_DISCARDS_SAMPLES_EXT","\x6c","\xbf","\x6f","\x46"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsInt,(int)offsetof(EXT_shader_framebuffer_fetch_obj,FRAGMENT_SHADER_DISCARDS_SAMPLES_EXT),HX_HCSTRING("FRAGMENT_SHADER_DISCARDS_SAMPLES_EXT","\x6c","\xbf","\x6f","\x46")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo *sStaticStorageInfo = 0;
#endif

static ::String sMemberFields[] = {
	HX_HCSTRING("FRAGMENT_SHADER_DISCARDS_SAMPLES_EXT","\x6c","\xbf","\x6f","\x46"),
	::String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(EXT_shader_framebuffer_fetch_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(EXT_shader_framebuffer_fetch_obj::__mClass,"__mClass");
};

#endif

hx::Class EXT_shader_framebuffer_fetch_obj::__mClass;

void EXT_shader_framebuffer_fetch_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("lime.graphics.opengl.ext.EXT_shader_framebuffer_fetch","\xae","\x69","\x13","\xd0");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = hx::Class_obj::dupFunctions(sMemberFields);
	__mClass->mCanCast = hx::TCanCast< EXT_shader_framebuffer_fetch_obj >;
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
