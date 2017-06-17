#include <hxcpp.h>

#ifndef INCLUDED_lime_graphics_opengl_ext_EXT_discard_framebuffer
#include <lime/graphics/opengl/ext/EXT_discard_framebuffer.h>
#endif
namespace lime{
namespace graphics{
namespace opengl{
namespace ext{

Void EXT_discard_framebuffer_obj::__construct()
{
HX_STACK_FRAME("lime.graphics.opengl.ext.EXT_discard_framebuffer","new",0xc7445c9e,"lime.graphics.opengl.ext.EXT_discard_framebuffer.new","lime/graphics/opengl/ext/EXT_discard_framebuffer.hx",6,0xc3cfcbb4)
HX_STACK_THIS(this)
{
	HX_STACK_LINE(11)
	this->STENCIL_EXT = (int)6146;
	HX_STACK_LINE(10)
	this->DEPTH_EXT = (int)6145;
	HX_STACK_LINE(9)
	this->COLOR_EXT = (int)6144;
}
;
	return null();
}

//EXT_discard_framebuffer_obj::~EXT_discard_framebuffer_obj() { }

Dynamic EXT_discard_framebuffer_obj::__CreateEmpty() { return  new EXT_discard_framebuffer_obj; }
hx::ObjectPtr< EXT_discard_framebuffer_obj > EXT_discard_framebuffer_obj::__new()
{  hx::ObjectPtr< EXT_discard_framebuffer_obj > _result_ = new EXT_discard_framebuffer_obj();
	_result_->__construct();
	return _result_;}

Dynamic EXT_discard_framebuffer_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< EXT_discard_framebuffer_obj > _result_ = new EXT_discard_framebuffer_obj();
	_result_->__construct();
	return _result_;}


EXT_discard_framebuffer_obj::EXT_discard_framebuffer_obj()
{
}

Dynamic EXT_discard_framebuffer_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 9:
		if (HX_FIELD_EQ(inName,"COLOR_EXT") ) { return COLOR_EXT; }
		if (HX_FIELD_EQ(inName,"DEPTH_EXT") ) { return DEPTH_EXT; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"STENCIL_EXT") ) { return STENCIL_EXT; }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic EXT_discard_framebuffer_obj::__SetField(const ::String &inName,const Dynamic &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 9:
		if (HX_FIELD_EQ(inName,"COLOR_EXT") ) { COLOR_EXT=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"DEPTH_EXT") ) { DEPTH_EXT=inValue.Cast< int >(); return inValue; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"STENCIL_EXT") ) { STENCIL_EXT=inValue.Cast< int >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void EXT_discard_framebuffer_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("COLOR_EXT","\x45","\xf4","\x2b","\x40"));
	outFields->push(HX_HCSTRING("DEPTH_EXT","\xe5","\xc3","\x41","\xbb"));
	outFields->push(HX_HCSTRING("STENCIL_EXT","\x5e","\x9d","\x9b","\x3c"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsInt,(int)offsetof(EXT_discard_framebuffer_obj,COLOR_EXT),HX_HCSTRING("COLOR_EXT","\x45","\xf4","\x2b","\x40")},
	{hx::fsInt,(int)offsetof(EXT_discard_framebuffer_obj,DEPTH_EXT),HX_HCSTRING("DEPTH_EXT","\xe5","\xc3","\x41","\xbb")},
	{hx::fsInt,(int)offsetof(EXT_discard_framebuffer_obj,STENCIL_EXT),HX_HCSTRING("STENCIL_EXT","\x5e","\x9d","\x9b","\x3c")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo *sStaticStorageInfo = 0;
#endif

static ::String sMemberFields[] = {
	HX_HCSTRING("COLOR_EXT","\x45","\xf4","\x2b","\x40"),
	HX_HCSTRING("DEPTH_EXT","\xe5","\xc3","\x41","\xbb"),
	HX_HCSTRING("STENCIL_EXT","\x5e","\x9d","\x9b","\x3c"),
	::String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(EXT_discard_framebuffer_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(EXT_discard_framebuffer_obj::__mClass,"__mClass");
};

#endif

hx::Class EXT_discard_framebuffer_obj::__mClass;

void EXT_discard_framebuffer_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("lime.graphics.opengl.ext.EXT_discard_framebuffer","\xac","\x75","\xbe","\x86");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = hx::Class_obj::dupFunctions(sMemberFields);
	__mClass->mCanCast = hx::TCanCast< EXT_discard_framebuffer_obj >;
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
