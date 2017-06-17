#include <hxcpp.h>

#ifndef INCLUDED_lime_graphics_opengl_ext_FJ_shader_binary_GCCSO
#include <lime/graphics/opengl/ext/FJ_shader_binary_GCCSO.h>
#endif
namespace lime{
namespace graphics{
namespace opengl{
namespace ext{

Void FJ_shader_binary_GCCSO_obj::__construct()
{
HX_STACK_FRAME("lime.graphics.opengl.ext.FJ_shader_binary_GCCSO","new",0x76465ff8,"lime.graphics.opengl.ext.FJ_shader_binary_GCCSO.new","lime/graphics/opengl/ext/FJ_shader_binary_GCCSO.hx",6,0x8cd5d596)
HX_STACK_THIS(this)
{
	HX_STACK_LINE(9)
	this->GCCSO_SHADER_BINARY_FJ = (int)37472;
}
;
	return null();
}

//FJ_shader_binary_GCCSO_obj::~FJ_shader_binary_GCCSO_obj() { }

Dynamic FJ_shader_binary_GCCSO_obj::__CreateEmpty() { return  new FJ_shader_binary_GCCSO_obj; }
hx::ObjectPtr< FJ_shader_binary_GCCSO_obj > FJ_shader_binary_GCCSO_obj::__new()
{  hx::ObjectPtr< FJ_shader_binary_GCCSO_obj > _result_ = new FJ_shader_binary_GCCSO_obj();
	_result_->__construct();
	return _result_;}

Dynamic FJ_shader_binary_GCCSO_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< FJ_shader_binary_GCCSO_obj > _result_ = new FJ_shader_binary_GCCSO_obj();
	_result_->__construct();
	return _result_;}


FJ_shader_binary_GCCSO_obj::FJ_shader_binary_GCCSO_obj()
{
}

Dynamic FJ_shader_binary_GCCSO_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 22:
		if (HX_FIELD_EQ(inName,"GCCSO_SHADER_BINARY_FJ") ) { return GCCSO_SHADER_BINARY_FJ; }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic FJ_shader_binary_GCCSO_obj::__SetField(const ::String &inName,const Dynamic &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 22:
		if (HX_FIELD_EQ(inName,"GCCSO_SHADER_BINARY_FJ") ) { GCCSO_SHADER_BINARY_FJ=inValue.Cast< int >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void FJ_shader_binary_GCCSO_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("GCCSO_SHADER_BINARY_FJ","\x24","\x09","\xcc","\x3e"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsInt,(int)offsetof(FJ_shader_binary_GCCSO_obj,GCCSO_SHADER_BINARY_FJ),HX_HCSTRING("GCCSO_SHADER_BINARY_FJ","\x24","\x09","\xcc","\x3e")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo *sStaticStorageInfo = 0;
#endif

static ::String sMemberFields[] = {
	HX_HCSTRING("GCCSO_SHADER_BINARY_FJ","\x24","\x09","\xcc","\x3e"),
	::String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(FJ_shader_binary_GCCSO_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(FJ_shader_binary_GCCSO_obj::__mClass,"__mClass");
};

#endif

hx::Class FJ_shader_binary_GCCSO_obj::__mClass;

void FJ_shader_binary_GCCSO_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("lime.graphics.opengl.ext.FJ_shader_binary_GCCSO","\x06","\x44","\x31","\xb7");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = hx::Class_obj::dupFunctions(sMemberFields);
	__mClass->mCanCast = hx::TCanCast< FJ_shader_binary_GCCSO_obj >;
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
