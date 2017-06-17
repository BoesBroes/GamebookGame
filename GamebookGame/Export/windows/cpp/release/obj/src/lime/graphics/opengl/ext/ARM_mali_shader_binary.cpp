#include <hxcpp.h>

#ifndef INCLUDED_lime_graphics_opengl_ext_ARM_mali_shader_binary
#include <lime/graphics/opengl/ext/ARM_mali_shader_binary.h>
#endif
namespace lime{
namespace graphics{
namespace opengl{
namespace ext{

Void ARM_mali_shader_binary_obj::__construct()
{
HX_STACK_FRAME("lime.graphics.opengl.ext.ARM_mali_shader_binary","new",0x83002564,"lime.graphics.opengl.ext.ARM_mali_shader_binary.new","lime/graphics/opengl/ext/ARM_mali_shader_binary.hx",6,0xd9cea1aa)
HX_STACK_THIS(this)
{
	HX_STACK_LINE(9)
	this->MALI_SHADER_BINARY_ARM = (int)36704;
}
;
	return null();
}

//ARM_mali_shader_binary_obj::~ARM_mali_shader_binary_obj() { }

Dynamic ARM_mali_shader_binary_obj::__CreateEmpty() { return  new ARM_mali_shader_binary_obj; }
hx::ObjectPtr< ARM_mali_shader_binary_obj > ARM_mali_shader_binary_obj::__new()
{  hx::ObjectPtr< ARM_mali_shader_binary_obj > _result_ = new ARM_mali_shader_binary_obj();
	_result_->__construct();
	return _result_;}

Dynamic ARM_mali_shader_binary_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< ARM_mali_shader_binary_obj > _result_ = new ARM_mali_shader_binary_obj();
	_result_->__construct();
	return _result_;}


ARM_mali_shader_binary_obj::ARM_mali_shader_binary_obj()
{
}

Dynamic ARM_mali_shader_binary_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 22:
		if (HX_FIELD_EQ(inName,"MALI_SHADER_BINARY_ARM") ) { return MALI_SHADER_BINARY_ARM; }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic ARM_mali_shader_binary_obj::__SetField(const ::String &inName,const Dynamic &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 22:
		if (HX_FIELD_EQ(inName,"MALI_SHADER_BINARY_ARM") ) { MALI_SHADER_BINARY_ARM=inValue.Cast< int >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void ARM_mali_shader_binary_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("MALI_SHADER_BINARY_ARM","\xaa","\xa5","\x4b","\x82"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsInt,(int)offsetof(ARM_mali_shader_binary_obj,MALI_SHADER_BINARY_ARM),HX_HCSTRING("MALI_SHADER_BINARY_ARM","\xaa","\xa5","\x4b","\x82")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo *sStaticStorageInfo = 0;
#endif

static ::String sMemberFields[] = {
	HX_HCSTRING("MALI_SHADER_BINARY_ARM","\xaa","\xa5","\x4b","\x82"),
	::String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(ARM_mali_shader_binary_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(ARM_mali_shader_binary_obj::__mClass,"__mClass");
};

#endif

hx::Class ARM_mali_shader_binary_obj::__mClass;

void ARM_mali_shader_binary_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("lime.graphics.opengl.ext.ARM_mali_shader_binary","\x72","\xe3","\xe8","\x36");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = hx::Class_obj::dupFunctions(sMemberFields);
	__mClass->mCanCast = hx::TCanCast< ARM_mali_shader_binary_obj >;
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
