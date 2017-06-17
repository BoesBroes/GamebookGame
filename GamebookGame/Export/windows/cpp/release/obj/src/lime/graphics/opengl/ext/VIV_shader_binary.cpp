#include <hxcpp.h>

#ifndef INCLUDED_lime_graphics_opengl_ext_VIV_shader_binary
#include <lime/graphics/opengl/ext/VIV_shader_binary.h>
#endif
namespace lime{
namespace graphics{
namespace opengl{
namespace ext{

Void VIV_shader_binary_obj::__construct()
{
HX_STACK_FRAME("lime.graphics.opengl.ext.VIV_shader_binary","new",0xccc744ef,"lime.graphics.opengl.ext.VIV_shader_binary.new","lime/graphics/opengl/ext/VIV_shader_binary.hx",6,0xb3f93303)
HX_STACK_THIS(this)
{
	HX_STACK_LINE(9)
	this->SHADER_BINARY_VIV = (int)36804;
}
;
	return null();
}

//VIV_shader_binary_obj::~VIV_shader_binary_obj() { }

Dynamic VIV_shader_binary_obj::__CreateEmpty() { return  new VIV_shader_binary_obj; }
hx::ObjectPtr< VIV_shader_binary_obj > VIV_shader_binary_obj::__new()
{  hx::ObjectPtr< VIV_shader_binary_obj > _result_ = new VIV_shader_binary_obj();
	_result_->__construct();
	return _result_;}

Dynamic VIV_shader_binary_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< VIV_shader_binary_obj > _result_ = new VIV_shader_binary_obj();
	_result_->__construct();
	return _result_;}


VIV_shader_binary_obj::VIV_shader_binary_obj()
{
}

Dynamic VIV_shader_binary_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 17:
		if (HX_FIELD_EQ(inName,"SHADER_BINARY_VIV") ) { return SHADER_BINARY_VIV; }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic VIV_shader_binary_obj::__SetField(const ::String &inName,const Dynamic &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 17:
		if (HX_FIELD_EQ(inName,"SHADER_BINARY_VIV") ) { SHADER_BINARY_VIV=inValue.Cast< int >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void VIV_shader_binary_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("SHADER_BINARY_VIV","\x5f","\xdd","\x98","\xb0"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsInt,(int)offsetof(VIV_shader_binary_obj,SHADER_BINARY_VIV),HX_HCSTRING("SHADER_BINARY_VIV","\x5f","\xdd","\x98","\xb0")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo *sStaticStorageInfo = 0;
#endif

static ::String sMemberFields[] = {
	HX_HCSTRING("SHADER_BINARY_VIV","\x5f","\xdd","\x98","\xb0"),
	::String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(VIV_shader_binary_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(VIV_shader_binary_obj::__mClass,"__mClass");
};

#endif

hx::Class VIV_shader_binary_obj::__mClass;

void VIV_shader_binary_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("lime.graphics.opengl.ext.VIV_shader_binary","\x7d","\xa1","\x90","\x29");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = hx::Class_obj::dupFunctions(sMemberFields);
	__mClass->mCanCast = hx::TCanCast< VIV_shader_binary_obj >;
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
