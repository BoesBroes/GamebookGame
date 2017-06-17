#include <hxcpp.h>

#ifndef INCLUDED_lime_graphics_opengl_ext_DMP_shader_binary
#include <lime/graphics/opengl/ext/DMP_shader_binary.h>
#endif
namespace lime{
namespace graphics{
namespace opengl{
namespace ext{

Void DMP_shader_binary_obj::__construct()
{
HX_STACK_FRAME("lime.graphics.opengl.ext.DMP_shader_binary","new",0xc9fe28d3,"lime.graphics.opengl.ext.DMP_shader_binary.new","lime/graphics/opengl/ext/DMP_shader_binary.hx",6,0x26c2579f)
HX_STACK_THIS(this)
{
	HX_STACK_LINE(9)
	this->SHADER_BINARY_DMP = (int)37456;
}
;
	return null();
}

//DMP_shader_binary_obj::~DMP_shader_binary_obj() { }

Dynamic DMP_shader_binary_obj::__CreateEmpty() { return  new DMP_shader_binary_obj; }
hx::ObjectPtr< DMP_shader_binary_obj > DMP_shader_binary_obj::__new()
{  hx::ObjectPtr< DMP_shader_binary_obj > _result_ = new DMP_shader_binary_obj();
	_result_->__construct();
	return _result_;}

Dynamic DMP_shader_binary_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< DMP_shader_binary_obj > _result_ = new DMP_shader_binary_obj();
	_result_->__construct();
	return _result_;}


DMP_shader_binary_obj::DMP_shader_binary_obj()
{
}

Dynamic DMP_shader_binary_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 17:
		if (HX_FIELD_EQ(inName,"SHADER_BINARY_DMP") ) { return SHADER_BINARY_DMP; }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic DMP_shader_binary_obj::__SetField(const ::String &inName,const Dynamic &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 17:
		if (HX_FIELD_EQ(inName,"SHADER_BINARY_DMP") ) { SHADER_BINARY_DMP=inValue.Cast< int >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void DMP_shader_binary_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("SHADER_BINARY_DMP","\x43","\x38","\x8b","\xb0"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsInt,(int)offsetof(DMP_shader_binary_obj,SHADER_BINARY_DMP),HX_HCSTRING("SHADER_BINARY_DMP","\x43","\x38","\x8b","\xb0")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo *sStaticStorageInfo = 0;
#endif

static ::String sMemberFields[] = {
	HX_HCSTRING("SHADER_BINARY_DMP","\x43","\x38","\x8b","\xb0"),
	::String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(DMP_shader_binary_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(DMP_shader_binary_obj::__mClass,"__mClass");
};

#endif

hx::Class DMP_shader_binary_obj::__mClass;

void DMP_shader_binary_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("lime.graphics.opengl.ext.DMP_shader_binary","\x61","\xc3","\x46","\x93");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = hx::Class_obj::dupFunctions(sMemberFields);
	__mClass->mCanCast = hx::TCanCast< DMP_shader_binary_obj >;
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
