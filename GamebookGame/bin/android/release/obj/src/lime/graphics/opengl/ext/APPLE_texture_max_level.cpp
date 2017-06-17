#include <hxcpp.h>

#ifndef INCLUDED_lime_graphics_opengl_ext_APPLE_texture_max_level
#include <lime/graphics/opengl/ext/APPLE_texture_max_level.h>
#endif
namespace lime{
namespace graphics{
namespace opengl{
namespace ext{

Void APPLE_texture_max_level_obj::__construct()
{
HX_STACK_FRAME("lime.graphics.opengl.ext.APPLE_texture_max_level","new",0xb41c1cd0,"lime.graphics.opengl.ext.APPLE_texture_max_level.new","lime/graphics/opengl/ext/APPLE_texture_max_level.hx",6,0x1e6a97c2)
HX_STACK_THIS(this)
{
	HX_STACK_LINE(9)
	this->TEXTURE_MAX_LEVEL_APPLE = (int)33085;
}
;
	return null();
}

//APPLE_texture_max_level_obj::~APPLE_texture_max_level_obj() { }

Dynamic APPLE_texture_max_level_obj::__CreateEmpty() { return  new APPLE_texture_max_level_obj; }
hx::ObjectPtr< APPLE_texture_max_level_obj > APPLE_texture_max_level_obj::__new()
{  hx::ObjectPtr< APPLE_texture_max_level_obj > _result_ = new APPLE_texture_max_level_obj();
	_result_->__construct();
	return _result_;}

Dynamic APPLE_texture_max_level_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< APPLE_texture_max_level_obj > _result_ = new APPLE_texture_max_level_obj();
	_result_->__construct();
	return _result_;}


APPLE_texture_max_level_obj::APPLE_texture_max_level_obj()
{
}

Dynamic APPLE_texture_max_level_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 23:
		if (HX_FIELD_EQ(inName,"TEXTURE_MAX_LEVEL_APPLE") ) { return TEXTURE_MAX_LEVEL_APPLE; }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic APPLE_texture_max_level_obj::__SetField(const ::String &inName,const Dynamic &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 23:
		if (HX_FIELD_EQ(inName,"TEXTURE_MAX_LEVEL_APPLE") ) { TEXTURE_MAX_LEVEL_APPLE=inValue.Cast< int >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void APPLE_texture_max_level_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("TEXTURE_MAX_LEVEL_APPLE","\xa0","\xc4","\xc8","\xdf"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsInt,(int)offsetof(APPLE_texture_max_level_obj,TEXTURE_MAX_LEVEL_APPLE),HX_HCSTRING("TEXTURE_MAX_LEVEL_APPLE","\xa0","\xc4","\xc8","\xdf")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo *sStaticStorageInfo = 0;
#endif

static ::String sMemberFields[] = {
	HX_HCSTRING("TEXTURE_MAX_LEVEL_APPLE","\xa0","\xc4","\xc8","\xdf"),
	::String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(APPLE_texture_max_level_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(APPLE_texture_max_level_obj::__mClass,"__mClass");
};

#endif

hx::Class APPLE_texture_max_level_obj::__mClass;

void APPLE_texture_max_level_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("lime.graphics.opengl.ext.APPLE_texture_max_level","\xde","\xb4","\x81","\x4d");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = hx::Class_obj::dupFunctions(sMemberFields);
	__mClass->mCanCast = hx::TCanCast< APPLE_texture_max_level_obj >;
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
