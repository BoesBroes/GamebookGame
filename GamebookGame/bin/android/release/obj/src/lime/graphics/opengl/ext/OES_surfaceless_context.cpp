#include <hxcpp.h>

#ifndef INCLUDED_lime_graphics_opengl_ext_OES_surfaceless_context
#include <lime/graphics/opengl/ext/OES_surfaceless_context.h>
#endif
namespace lime{
namespace graphics{
namespace opengl{
namespace ext{

Void OES_surfaceless_context_obj::__construct()
{
HX_STACK_FRAME("lime.graphics.opengl.ext.OES_surfaceless_context","new",0x7eb95b04,"lime.graphics.opengl.ext.OES_surfaceless_context.new","lime/graphics/opengl/ext/OES_surfaceless_context.hx",6,0x47811c0e)
HX_STACK_THIS(this)
{
	HX_STACK_LINE(9)
	this->FRAMEBUFFER_UNDEFINED_OES = (int)33305;
}
;
	return null();
}

//OES_surfaceless_context_obj::~OES_surfaceless_context_obj() { }

Dynamic OES_surfaceless_context_obj::__CreateEmpty() { return  new OES_surfaceless_context_obj; }
hx::ObjectPtr< OES_surfaceless_context_obj > OES_surfaceless_context_obj::__new()
{  hx::ObjectPtr< OES_surfaceless_context_obj > _result_ = new OES_surfaceless_context_obj();
	_result_->__construct();
	return _result_;}

Dynamic OES_surfaceless_context_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< OES_surfaceless_context_obj > _result_ = new OES_surfaceless_context_obj();
	_result_->__construct();
	return _result_;}


OES_surfaceless_context_obj::OES_surfaceless_context_obj()
{
}

Dynamic OES_surfaceless_context_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 25:
		if (HX_FIELD_EQ(inName,"FRAMEBUFFER_UNDEFINED_OES") ) { return FRAMEBUFFER_UNDEFINED_OES; }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic OES_surfaceless_context_obj::__SetField(const ::String &inName,const Dynamic &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 25:
		if (HX_FIELD_EQ(inName,"FRAMEBUFFER_UNDEFINED_OES") ) { FRAMEBUFFER_UNDEFINED_OES=inValue.Cast< int >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void OES_surfaceless_context_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("FRAMEBUFFER_UNDEFINED_OES","\xbc","\x17","\x87","\x95"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsInt,(int)offsetof(OES_surfaceless_context_obj,FRAMEBUFFER_UNDEFINED_OES),HX_HCSTRING("FRAMEBUFFER_UNDEFINED_OES","\xbc","\x17","\x87","\x95")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo *sStaticStorageInfo = 0;
#endif

static ::String sMemberFields[] = {
	HX_HCSTRING("FRAMEBUFFER_UNDEFINED_OES","\xbc","\x17","\x87","\x95"),
	::String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(OES_surfaceless_context_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(OES_surfaceless_context_obj::__mClass,"__mClass");
};

#endif

hx::Class OES_surfaceless_context_obj::__mClass;

void OES_surfaceless_context_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("lime.graphics.opengl.ext.OES_surfaceless_context","\x12","\xc9","\x2e","\x49");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = hx::Class_obj::dupFunctions(sMemberFields);
	__mClass->mCanCast = hx::TCanCast< OES_surfaceless_context_obj >;
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
