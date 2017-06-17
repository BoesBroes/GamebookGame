#include <hxcpp.h>

#ifndef INCLUDED_lime_graphics_opengl_ext_IMG_multisampled_render_to_texture
#include <lime/graphics/opengl/ext/IMG_multisampled_render_to_texture.h>
#endif
namespace lime{
namespace graphics{
namespace opengl{
namespace ext{

Void IMG_multisampled_render_to_texture_obj::__construct()
{
HX_STACK_FRAME("lime.graphics.opengl.ext.IMG_multisampled_render_to_texture","new",0xa9dd9932,"lime.graphics.opengl.ext.IMG_multisampled_render_to_texture.new","lime/graphics/opengl/ext/IMG_multisampled_render_to_texture.hx",6,0x560a569c)
HX_STACK_THIS(this)
{
	HX_STACK_LINE(12)
	this->TEXTURE_SAMPLES_IMG = (int)37174;
	HX_STACK_LINE(11)
	this->MAX_SAMPLES_IMG = (int)37173;
	HX_STACK_LINE(10)
	this->FRAMEBUFFER_INCOMPLETE_MULTISAMPLE_IMG = (int)37172;
	HX_STACK_LINE(9)
	this->RENDERBUFFER_SAMPLES_IMG = (int)37171;
}
;
	return null();
}

//IMG_multisampled_render_to_texture_obj::~IMG_multisampled_render_to_texture_obj() { }

Dynamic IMG_multisampled_render_to_texture_obj::__CreateEmpty() { return  new IMG_multisampled_render_to_texture_obj; }
hx::ObjectPtr< IMG_multisampled_render_to_texture_obj > IMG_multisampled_render_to_texture_obj::__new()
{  hx::ObjectPtr< IMG_multisampled_render_to_texture_obj > _result_ = new IMG_multisampled_render_to_texture_obj();
	_result_->__construct();
	return _result_;}

Dynamic IMG_multisampled_render_to_texture_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< IMG_multisampled_render_to_texture_obj > _result_ = new IMG_multisampled_render_to_texture_obj();
	_result_->__construct();
	return _result_;}


IMG_multisampled_render_to_texture_obj::IMG_multisampled_render_to_texture_obj()
{
}

Dynamic IMG_multisampled_render_to_texture_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 15:
		if (HX_FIELD_EQ(inName,"MAX_SAMPLES_IMG") ) { return MAX_SAMPLES_IMG; }
		break;
	case 19:
		if (HX_FIELD_EQ(inName,"TEXTURE_SAMPLES_IMG") ) { return TEXTURE_SAMPLES_IMG; }
		break;
	case 24:
		if (HX_FIELD_EQ(inName,"RENDERBUFFER_SAMPLES_IMG") ) { return RENDERBUFFER_SAMPLES_IMG; }
		break;
	case 38:
		if (HX_FIELD_EQ(inName,"FRAMEBUFFER_INCOMPLETE_MULTISAMPLE_IMG") ) { return FRAMEBUFFER_INCOMPLETE_MULTISAMPLE_IMG; }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic IMG_multisampled_render_to_texture_obj::__SetField(const ::String &inName,const Dynamic &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 15:
		if (HX_FIELD_EQ(inName,"MAX_SAMPLES_IMG") ) { MAX_SAMPLES_IMG=inValue.Cast< int >(); return inValue; }
		break;
	case 19:
		if (HX_FIELD_EQ(inName,"TEXTURE_SAMPLES_IMG") ) { TEXTURE_SAMPLES_IMG=inValue.Cast< int >(); return inValue; }
		break;
	case 24:
		if (HX_FIELD_EQ(inName,"RENDERBUFFER_SAMPLES_IMG") ) { RENDERBUFFER_SAMPLES_IMG=inValue.Cast< int >(); return inValue; }
		break;
	case 38:
		if (HX_FIELD_EQ(inName,"FRAMEBUFFER_INCOMPLETE_MULTISAMPLE_IMG") ) { FRAMEBUFFER_INCOMPLETE_MULTISAMPLE_IMG=inValue.Cast< int >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void IMG_multisampled_render_to_texture_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("RENDERBUFFER_SAMPLES_IMG","\x24","\xea","\xa6","\x7a"));
	outFields->push(HX_HCSTRING("FRAMEBUFFER_INCOMPLETE_MULTISAMPLE_IMG","\x38","\x77","\x46","\x27"));
	outFields->push(HX_HCSTRING("MAX_SAMPLES_IMG","\xd2","\xb8","\x8f","\x83"));
	outFields->push(HX_HCSTRING("TEXTURE_SAMPLES_IMG","\x89","\xa5","\x7d","\xe8"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsInt,(int)offsetof(IMG_multisampled_render_to_texture_obj,RENDERBUFFER_SAMPLES_IMG),HX_HCSTRING("RENDERBUFFER_SAMPLES_IMG","\x24","\xea","\xa6","\x7a")},
	{hx::fsInt,(int)offsetof(IMG_multisampled_render_to_texture_obj,FRAMEBUFFER_INCOMPLETE_MULTISAMPLE_IMG),HX_HCSTRING("FRAMEBUFFER_INCOMPLETE_MULTISAMPLE_IMG","\x38","\x77","\x46","\x27")},
	{hx::fsInt,(int)offsetof(IMG_multisampled_render_to_texture_obj,MAX_SAMPLES_IMG),HX_HCSTRING("MAX_SAMPLES_IMG","\xd2","\xb8","\x8f","\x83")},
	{hx::fsInt,(int)offsetof(IMG_multisampled_render_to_texture_obj,TEXTURE_SAMPLES_IMG),HX_HCSTRING("TEXTURE_SAMPLES_IMG","\x89","\xa5","\x7d","\xe8")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo *sStaticStorageInfo = 0;
#endif

static ::String sMemberFields[] = {
	HX_HCSTRING("RENDERBUFFER_SAMPLES_IMG","\x24","\xea","\xa6","\x7a"),
	HX_HCSTRING("FRAMEBUFFER_INCOMPLETE_MULTISAMPLE_IMG","\x38","\x77","\x46","\x27"),
	HX_HCSTRING("MAX_SAMPLES_IMG","\xd2","\xb8","\x8f","\x83"),
	HX_HCSTRING("TEXTURE_SAMPLES_IMG","\x89","\xa5","\x7d","\xe8"),
	::String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(IMG_multisampled_render_to_texture_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(IMG_multisampled_render_to_texture_obj::__mClass,"__mClass");
};

#endif

hx::Class IMG_multisampled_render_to_texture_obj::__mClass;

void IMG_multisampled_render_to_texture_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("lime.graphics.opengl.ext.IMG_multisampled_render_to_texture","\x40","\xd8","\x30","\x4c");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = hx::Class_obj::dupFunctions(sMemberFields);
	__mClass->mCanCast = hx::TCanCast< IMG_multisampled_render_to_texture_obj >;
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
