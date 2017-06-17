#include <hxcpp.h>

#ifndef INCLUDED_lime_graphics_opengl_ext_ANGLE_texture_usage
#include <lime/graphics/opengl/ext/ANGLE_texture_usage.h>
#endif
namespace lime{
namespace graphics{
namespace opengl{
namespace ext{

Void ANGLE_texture_usage_obj::__construct()
{
HX_STACK_FRAME("lime.graphics.opengl.ext.ANGLE_texture_usage","new",0xed342dc1,"lime.graphics.opengl.ext.ANGLE_texture_usage.new","lime/graphics/opengl/ext/ANGLE_texture_usage.hx",6,0x2c06f6f1)
HX_STACK_THIS(this)
{
	HX_STACK_LINE(10)
	this->FRAMEBUFFER_ATTACHMENT_ANGLE = (int)37795;
	HX_STACK_LINE(9)
	this->TEXTURE_USAGE_ANGLE = (int)37794;
}
;
	return null();
}

//ANGLE_texture_usage_obj::~ANGLE_texture_usage_obj() { }

Dynamic ANGLE_texture_usage_obj::__CreateEmpty() { return  new ANGLE_texture_usage_obj; }
hx::ObjectPtr< ANGLE_texture_usage_obj > ANGLE_texture_usage_obj::__new()
{  hx::ObjectPtr< ANGLE_texture_usage_obj > _result_ = new ANGLE_texture_usage_obj();
	_result_->__construct();
	return _result_;}

Dynamic ANGLE_texture_usage_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< ANGLE_texture_usage_obj > _result_ = new ANGLE_texture_usage_obj();
	_result_->__construct();
	return _result_;}


ANGLE_texture_usage_obj::ANGLE_texture_usage_obj()
{
}

Dynamic ANGLE_texture_usage_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 19:
		if (HX_FIELD_EQ(inName,"TEXTURE_USAGE_ANGLE") ) { return TEXTURE_USAGE_ANGLE; }
		break;
	case 28:
		if (HX_FIELD_EQ(inName,"FRAMEBUFFER_ATTACHMENT_ANGLE") ) { return FRAMEBUFFER_ATTACHMENT_ANGLE; }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic ANGLE_texture_usage_obj::__SetField(const ::String &inName,const Dynamic &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 19:
		if (HX_FIELD_EQ(inName,"TEXTURE_USAGE_ANGLE") ) { TEXTURE_USAGE_ANGLE=inValue.Cast< int >(); return inValue; }
		break;
	case 28:
		if (HX_FIELD_EQ(inName,"FRAMEBUFFER_ATTACHMENT_ANGLE") ) { FRAMEBUFFER_ATTACHMENT_ANGLE=inValue.Cast< int >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void ANGLE_texture_usage_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("TEXTURE_USAGE_ANGLE","\xf1","\x85","\x1c","\x63"));
	outFields->push(HX_HCSTRING("FRAMEBUFFER_ATTACHMENT_ANGLE","\x09","\xe2","\x23","\x8c"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsInt,(int)offsetof(ANGLE_texture_usage_obj,TEXTURE_USAGE_ANGLE),HX_HCSTRING("TEXTURE_USAGE_ANGLE","\xf1","\x85","\x1c","\x63")},
	{hx::fsInt,(int)offsetof(ANGLE_texture_usage_obj,FRAMEBUFFER_ATTACHMENT_ANGLE),HX_HCSTRING("FRAMEBUFFER_ATTACHMENT_ANGLE","\x09","\xe2","\x23","\x8c")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo *sStaticStorageInfo = 0;
#endif

static ::String sMemberFields[] = {
	HX_HCSTRING("TEXTURE_USAGE_ANGLE","\xf1","\x85","\x1c","\x63"),
	HX_HCSTRING("FRAMEBUFFER_ATTACHMENT_ANGLE","\x09","\xe2","\x23","\x8c"),
	::String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(ANGLE_texture_usage_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(ANGLE_texture_usage_obj::__mClass,"__mClass");
};

#endif

hx::Class ANGLE_texture_usage_obj::__mClass;

void ANGLE_texture_usage_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("lime.graphics.opengl.ext.ANGLE_texture_usage","\x4f","\x39","\xc0","\x1a");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = hx::Class_obj::dupFunctions(sMemberFields);
	__mClass->mCanCast = hx::TCanCast< ANGLE_texture_usage_obj >;
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
