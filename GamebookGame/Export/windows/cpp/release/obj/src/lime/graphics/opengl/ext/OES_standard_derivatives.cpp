#include <hxcpp.h>

#ifndef INCLUDED_lime_graphics_opengl_ext_OES_standard_derivatives
#include <lime/graphics/opengl/ext/OES_standard_derivatives.h>
#endif
namespace lime{
namespace graphics{
namespace opengl{
namespace ext{

Void OES_standard_derivatives_obj::__construct()
{
HX_STACK_FRAME("lime.graphics.opengl.ext.OES_standard_derivatives","new",0x79508820,"lime.graphics.opengl.ext.OES_standard_derivatives.new","lime/graphics/opengl/ext/OES_standard_derivatives.hx",10,0x62d66dee)
HX_STACK_THIS(this)
{
	HX_STACK_LINE(13)
	this->FRAGMENT_SHADER_DERIVATIVE_HINT_OES = (int)35723;
}
;
	return null();
}

//OES_standard_derivatives_obj::~OES_standard_derivatives_obj() { }

Dynamic OES_standard_derivatives_obj::__CreateEmpty() { return  new OES_standard_derivatives_obj; }
hx::ObjectPtr< OES_standard_derivatives_obj > OES_standard_derivatives_obj::__new()
{  hx::ObjectPtr< OES_standard_derivatives_obj > _result_ = new OES_standard_derivatives_obj();
	_result_->__construct();
	return _result_;}

Dynamic OES_standard_derivatives_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< OES_standard_derivatives_obj > _result_ = new OES_standard_derivatives_obj();
	_result_->__construct();
	return _result_;}


OES_standard_derivatives_obj::OES_standard_derivatives_obj()
{
}

Dynamic OES_standard_derivatives_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 35:
		if (HX_FIELD_EQ(inName,"FRAGMENT_SHADER_DERIVATIVE_HINT_OES") ) { return FRAGMENT_SHADER_DERIVATIVE_HINT_OES; }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic OES_standard_derivatives_obj::__SetField(const ::String &inName,const Dynamic &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 35:
		if (HX_FIELD_EQ(inName,"FRAGMENT_SHADER_DERIVATIVE_HINT_OES") ) { FRAGMENT_SHADER_DERIVATIVE_HINT_OES=inValue.Cast< int >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void OES_standard_derivatives_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("FRAGMENT_SHADER_DERIVATIVE_HINT_OES","\xf2","\x8e","\xa2","\x8a"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsInt,(int)offsetof(OES_standard_derivatives_obj,FRAGMENT_SHADER_DERIVATIVE_HINT_OES),HX_HCSTRING("FRAGMENT_SHADER_DERIVATIVE_HINT_OES","\xf2","\x8e","\xa2","\x8a")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo *sStaticStorageInfo = 0;
#endif

static ::String sMemberFields[] = {
	HX_HCSTRING("FRAGMENT_SHADER_DERIVATIVE_HINT_OES","\xf2","\x8e","\xa2","\x8a"),
	::String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(OES_standard_derivatives_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(OES_standard_derivatives_obj::__mClass,"__mClass");
};

#endif

hx::Class OES_standard_derivatives_obj::__mClass;

void OES_standard_derivatives_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("lime.graphics.opengl.ext.OES_standard_derivatives","\x2e","\x38","\xaa","\xd0");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = hx::Class_obj::dupFunctions(sMemberFields);
	__mClass->mCanCast = hx::TCanCast< OES_standard_derivatives_obj >;
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
