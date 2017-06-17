#include <hxcpp.h>

#ifndef INCLUDED_lime_graphics_opengl_ext_NV_depth_nonlinear
#include <lime/graphics/opengl/ext/NV_depth_nonlinear.h>
#endif
namespace lime{
namespace graphics{
namespace opengl{
namespace ext{

Void NV_depth_nonlinear_obj::__construct()
{
HX_STACK_FRAME("lime.graphics.opengl.ext.NV_depth_nonlinear","new",0x7b262493,"lime.graphics.opengl.ext.NV_depth_nonlinear.new","lime/graphics/opengl/ext/NV_depth_nonlinear.hx",6,0x26a3765b)
HX_STACK_THIS(this)
{
	HX_STACK_LINE(9)
	this->DEPTH_COMPONENT16_NONLINEAR_NV = (int)36396;
}
;
	return null();
}

//NV_depth_nonlinear_obj::~NV_depth_nonlinear_obj() { }

Dynamic NV_depth_nonlinear_obj::__CreateEmpty() { return  new NV_depth_nonlinear_obj; }
hx::ObjectPtr< NV_depth_nonlinear_obj > NV_depth_nonlinear_obj::__new()
{  hx::ObjectPtr< NV_depth_nonlinear_obj > _result_ = new NV_depth_nonlinear_obj();
	_result_->__construct();
	return _result_;}

Dynamic NV_depth_nonlinear_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< NV_depth_nonlinear_obj > _result_ = new NV_depth_nonlinear_obj();
	_result_->__construct();
	return _result_;}


NV_depth_nonlinear_obj::NV_depth_nonlinear_obj()
{
}

Dynamic NV_depth_nonlinear_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 30:
		if (HX_FIELD_EQ(inName,"DEPTH_COMPONENT16_NONLINEAR_NV") ) { return DEPTH_COMPONENT16_NONLINEAR_NV; }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic NV_depth_nonlinear_obj::__SetField(const ::String &inName,const Dynamic &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 30:
		if (HX_FIELD_EQ(inName,"DEPTH_COMPONENT16_NONLINEAR_NV") ) { DEPTH_COMPONENT16_NONLINEAR_NV=inValue.Cast< int >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void NV_depth_nonlinear_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("DEPTH_COMPONENT16_NONLINEAR_NV","\x0e","\x06","\x97","\xda"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsInt,(int)offsetof(NV_depth_nonlinear_obj,DEPTH_COMPONENT16_NONLINEAR_NV),HX_HCSTRING("DEPTH_COMPONENT16_NONLINEAR_NV","\x0e","\x06","\x97","\xda")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo *sStaticStorageInfo = 0;
#endif

static ::String sMemberFields[] = {
	HX_HCSTRING("DEPTH_COMPONENT16_NONLINEAR_NV","\x0e","\x06","\x97","\xda"),
	::String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(NV_depth_nonlinear_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(NV_depth_nonlinear_obj::__mClass,"__mClass");
};

#endif

hx::Class NV_depth_nonlinear_obj::__mClass;

void NV_depth_nonlinear_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("lime.graphics.opengl.ext.NV_depth_nonlinear","\x21","\xdf","\x55","\xb2");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = hx::Class_obj::dupFunctions(sMemberFields);
	__mClass->mCanCast = hx::TCanCast< NV_depth_nonlinear_obj >;
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
