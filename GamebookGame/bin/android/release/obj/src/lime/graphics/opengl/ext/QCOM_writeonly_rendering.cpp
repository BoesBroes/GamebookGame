#include <hxcpp.h>

#ifndef INCLUDED_lime_graphics_opengl_ext_QCOM_writeonly_rendering
#include <lime/graphics/opengl/ext/QCOM_writeonly_rendering.h>
#endif
namespace lime{
namespace graphics{
namespace opengl{
namespace ext{

Void QCOM_writeonly_rendering_obj::__construct()
{
HX_STACK_FRAME("lime.graphics.opengl.ext.QCOM_writeonly_rendering","new",0x32a4831d,"lime.graphics.opengl.ext.QCOM_writeonly_rendering.new","lime/graphics/opengl/ext/QCOM_writeonly_rendering.hx",6,0x4b8fa191)
HX_STACK_THIS(this)
{
	HX_STACK_LINE(9)
	this->WRITEONLY_RENDERING_QCOM = (int)34851;
}
;
	return null();
}

//QCOM_writeonly_rendering_obj::~QCOM_writeonly_rendering_obj() { }

Dynamic QCOM_writeonly_rendering_obj::__CreateEmpty() { return  new QCOM_writeonly_rendering_obj; }
hx::ObjectPtr< QCOM_writeonly_rendering_obj > QCOM_writeonly_rendering_obj::__new()
{  hx::ObjectPtr< QCOM_writeonly_rendering_obj > _result_ = new QCOM_writeonly_rendering_obj();
	_result_->__construct();
	return _result_;}

Dynamic QCOM_writeonly_rendering_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< QCOM_writeonly_rendering_obj > _result_ = new QCOM_writeonly_rendering_obj();
	_result_->__construct();
	return _result_;}


QCOM_writeonly_rendering_obj::QCOM_writeonly_rendering_obj()
{
}

Dynamic QCOM_writeonly_rendering_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 24:
		if (HX_FIELD_EQ(inName,"WRITEONLY_RENDERING_QCOM") ) { return WRITEONLY_RENDERING_QCOM; }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic QCOM_writeonly_rendering_obj::__SetField(const ::String &inName,const Dynamic &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 24:
		if (HX_FIELD_EQ(inName,"WRITEONLY_RENDERING_QCOM") ) { WRITEONLY_RENDERING_QCOM=inValue.Cast< int >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void QCOM_writeonly_rendering_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("WRITEONLY_RENDERING_QCOM","\xf7","\xd8","\xe8","\xa3"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsInt,(int)offsetof(QCOM_writeonly_rendering_obj,WRITEONLY_RENDERING_QCOM),HX_HCSTRING("WRITEONLY_RENDERING_QCOM","\xf7","\xd8","\xe8","\xa3")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo *sStaticStorageInfo = 0;
#endif

static ::String sMemberFields[] = {
	HX_HCSTRING("WRITEONLY_RENDERING_QCOM","\xf7","\xd8","\xe8","\xa3"),
	::String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(QCOM_writeonly_rendering_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(QCOM_writeonly_rendering_obj::__mClass,"__mClass");
};

#endif

hx::Class QCOM_writeonly_rendering_obj::__mClass;

void QCOM_writeonly_rendering_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("lime.graphics.opengl.ext.QCOM_writeonly_rendering","\xab","\xb0","\xcb","\x56");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = hx::Class_obj::dupFunctions(sMemberFields);
	__mClass->mCanCast = hx::TCanCast< QCOM_writeonly_rendering_obj >;
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
