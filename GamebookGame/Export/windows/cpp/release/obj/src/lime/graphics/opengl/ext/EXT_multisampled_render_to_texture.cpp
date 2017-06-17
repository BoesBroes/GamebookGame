#include <hxcpp.h>

#ifndef INCLUDED_lime_graphics_opengl_ext_EXT_multisampled_render_to_texture
#include <lime/graphics/opengl/ext/EXT_multisampled_render_to_texture.h>
#endif
namespace lime{
namespace graphics{
namespace opengl{
namespace ext{

Void EXT_multisampled_render_to_texture_obj::__construct()
{
HX_STACK_FRAME("lime.graphics.opengl.ext.EXT_multisampled_render_to_texture","new",0x7ed41754,"lime.graphics.opengl.ext.EXT_multisampled_render_to_texture.new","lime/graphics/opengl/ext/EXT_multisampled_render_to_texture.hx",6,0x46ec72ba)
HX_STACK_THIS(this)
{
	HX_STACK_LINE(12)
	this->MAX_SAMPLES_EXT = (int)36183;
	HX_STACK_LINE(11)
	this->FRAMEBUFFER_INCOMPLETE_MULTISAMPLE_EXT = (int)36182;
	HX_STACK_LINE(10)
	this->RENDERBUFFER_SAMPLES_EXT = (int)36011;
	HX_STACK_LINE(9)
	this->FRAMEBUFFER_ATTACHMENT_TEXTURE_SAMPLES_EXT = (int)36204;
}
;
	return null();
}

//EXT_multisampled_render_to_texture_obj::~EXT_multisampled_render_to_texture_obj() { }

Dynamic EXT_multisampled_render_to_texture_obj::__CreateEmpty() { return  new EXT_multisampled_render_to_texture_obj; }
hx::ObjectPtr< EXT_multisampled_render_to_texture_obj > EXT_multisampled_render_to_texture_obj::__new()
{  hx::ObjectPtr< EXT_multisampled_render_to_texture_obj > _result_ = new EXT_multisampled_render_to_texture_obj();
	_result_->__construct();
	return _result_;}

Dynamic EXT_multisampled_render_to_texture_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< EXT_multisampled_render_to_texture_obj > _result_ = new EXT_multisampled_render_to_texture_obj();
	_result_->__construct();
	return _result_;}


EXT_multisampled_render_to_texture_obj::EXT_multisampled_render_to_texture_obj()
{
}

Dynamic EXT_multisampled_render_to_texture_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 15:
		if (HX_FIELD_EQ(inName,"MAX_SAMPLES_EXT") ) { return MAX_SAMPLES_EXT; }
		break;
	case 24:
		if (HX_FIELD_EQ(inName,"RENDERBUFFER_SAMPLES_EXT") ) { return RENDERBUFFER_SAMPLES_EXT; }
		break;
	case 38:
		if (HX_FIELD_EQ(inName,"FRAMEBUFFER_INCOMPLETE_MULTISAMPLE_EXT") ) { return FRAMEBUFFER_INCOMPLETE_MULTISAMPLE_EXT; }
		break;
	case 42:
		if (HX_FIELD_EQ(inName,"FRAMEBUFFER_ATTACHMENT_TEXTURE_SAMPLES_EXT") ) { return FRAMEBUFFER_ATTACHMENT_TEXTURE_SAMPLES_EXT; }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic EXT_multisampled_render_to_texture_obj::__SetField(const ::String &inName,const Dynamic &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 15:
		if (HX_FIELD_EQ(inName,"MAX_SAMPLES_EXT") ) { MAX_SAMPLES_EXT=inValue.Cast< int >(); return inValue; }
		break;
	case 24:
		if (HX_FIELD_EQ(inName,"RENDERBUFFER_SAMPLES_EXT") ) { RENDERBUFFER_SAMPLES_EXT=inValue.Cast< int >(); return inValue; }
		break;
	case 38:
		if (HX_FIELD_EQ(inName,"FRAMEBUFFER_INCOMPLETE_MULTISAMPLE_EXT") ) { FRAMEBUFFER_INCOMPLETE_MULTISAMPLE_EXT=inValue.Cast< int >(); return inValue; }
		break;
	case 42:
		if (HX_FIELD_EQ(inName,"FRAMEBUFFER_ATTACHMENT_TEXTURE_SAMPLES_EXT") ) { FRAMEBUFFER_ATTACHMENT_TEXTURE_SAMPLES_EXT=inValue.Cast< int >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void EXT_multisampled_render_to_texture_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("FRAMEBUFFER_ATTACHMENT_TEXTURE_SAMPLES_EXT","\xfd","\x36","\x3c","\x2d"));
	outFields->push(HX_HCSTRING("RENDERBUFFER_SAMPLES_EXT","\xc2","\xea","\xa3","\x7a"));
	outFields->push(HX_HCSTRING("FRAMEBUFFER_INCOMPLETE_MULTISAMPLE_EXT","\xd6","\x77","\x43","\x27"));
	outFields->push(HX_HCSTRING("MAX_SAMPLES_EXT","\x70","\xb9","\x8c","\x83"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsInt,(int)offsetof(EXT_multisampled_render_to_texture_obj,FRAMEBUFFER_ATTACHMENT_TEXTURE_SAMPLES_EXT),HX_HCSTRING("FRAMEBUFFER_ATTACHMENT_TEXTURE_SAMPLES_EXT","\xfd","\x36","\x3c","\x2d")},
	{hx::fsInt,(int)offsetof(EXT_multisampled_render_to_texture_obj,RENDERBUFFER_SAMPLES_EXT),HX_HCSTRING("RENDERBUFFER_SAMPLES_EXT","\xc2","\xea","\xa3","\x7a")},
	{hx::fsInt,(int)offsetof(EXT_multisampled_render_to_texture_obj,FRAMEBUFFER_INCOMPLETE_MULTISAMPLE_EXT),HX_HCSTRING("FRAMEBUFFER_INCOMPLETE_MULTISAMPLE_EXT","\xd6","\x77","\x43","\x27")},
	{hx::fsInt,(int)offsetof(EXT_multisampled_render_to_texture_obj,MAX_SAMPLES_EXT),HX_HCSTRING("MAX_SAMPLES_EXT","\x70","\xb9","\x8c","\x83")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo *sStaticStorageInfo = 0;
#endif

static ::String sMemberFields[] = {
	HX_HCSTRING("FRAMEBUFFER_ATTACHMENT_TEXTURE_SAMPLES_EXT","\xfd","\x36","\x3c","\x2d"),
	HX_HCSTRING("RENDERBUFFER_SAMPLES_EXT","\xc2","\xea","\xa3","\x7a"),
	HX_HCSTRING("FRAMEBUFFER_INCOMPLETE_MULTISAMPLE_EXT","\xd6","\x77","\x43","\x27"),
	HX_HCSTRING("MAX_SAMPLES_EXT","\x70","\xb9","\x8c","\x83"),
	::String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(EXT_multisampled_render_to_texture_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(EXT_multisampled_render_to_texture_obj::__mClass,"__mClass");
};

#endif

hx::Class EXT_multisampled_render_to_texture_obj::__mClass;

void EXT_multisampled_render_to_texture_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("lime.graphics.opengl.ext.EXT_multisampled_render_to_texture","\x62","\x1d","\x81","\xff");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = hx::Class_obj::dupFunctions(sMemberFields);
	__mClass->mCanCast = hx::TCanCast< EXT_multisampled_render_to_texture_obj >;
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
