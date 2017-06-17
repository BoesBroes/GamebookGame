#include <hxcpp.h>

#ifndef INCLUDED_lime_graphics_opengl_ext_ARM_mali_program_binary
#include <lime/graphics/opengl/ext/ARM_mali_program_binary.h>
#endif
namespace lime{
namespace graphics{
namespace opengl{
namespace ext{

Void ARM_mali_program_binary_obj::__construct()
{
HX_STACK_FRAME("lime.graphics.opengl.ext.ARM_mali_program_binary","new",0xfa1b68d7,"lime.graphics.opengl.ext.ARM_mali_program_binary.new","lime/graphics/opengl/ext/ARM_mali_program_binary.hx",6,0xf7b2e99b)
HX_STACK_THIS(this)
{
	HX_STACK_LINE(9)
	this->MALI_PROGRAM_BINARY_ARM = (int)36705;
}
;
	return null();
}

//ARM_mali_program_binary_obj::~ARM_mali_program_binary_obj() { }

Dynamic ARM_mali_program_binary_obj::__CreateEmpty() { return  new ARM_mali_program_binary_obj; }
hx::ObjectPtr< ARM_mali_program_binary_obj > ARM_mali_program_binary_obj::__new()
{  hx::ObjectPtr< ARM_mali_program_binary_obj > _result_ = new ARM_mali_program_binary_obj();
	_result_->__construct();
	return _result_;}

Dynamic ARM_mali_program_binary_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< ARM_mali_program_binary_obj > _result_ = new ARM_mali_program_binary_obj();
	_result_->__construct();
	return _result_;}


ARM_mali_program_binary_obj::ARM_mali_program_binary_obj()
{
}

Dynamic ARM_mali_program_binary_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 23:
		if (HX_FIELD_EQ(inName,"MALI_PROGRAM_BINARY_ARM") ) { return MALI_PROGRAM_BINARY_ARM; }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic ARM_mali_program_binary_obj::__SetField(const ::String &inName,const Dynamic &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 23:
		if (HX_FIELD_EQ(inName,"MALI_PROGRAM_BINARY_ARM") ) { MALI_PROGRAM_BINARY_ARM=inValue.Cast< int >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void ARM_mali_program_binary_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("MALI_PROGRAM_BINARY_ARM","\xe7","\x44","\x59","\xdb"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsInt,(int)offsetof(ARM_mali_program_binary_obj,MALI_PROGRAM_BINARY_ARM),HX_HCSTRING("MALI_PROGRAM_BINARY_ARM","\xe7","\x44","\x59","\xdb")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo *sStaticStorageInfo = 0;
#endif

static ::String sMemberFields[] = {
	HX_HCSTRING("MALI_PROGRAM_BINARY_ARM","\xe7","\x44","\x59","\xdb"),
	::String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(ARM_mali_program_binary_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(ARM_mali_program_binary_obj::__mClass,"__mClass");
};

#endif

hx::Class ARM_mali_program_binary_obj::__mClass;

void ARM_mali_program_binary_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("lime.graphics.opengl.ext.ARM_mali_program_binary","\x65","\xb1","\x3a","\x22");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = hx::Class_obj::dupFunctions(sMemberFields);
	__mClass->mCanCast = hx::TCanCast< ARM_mali_program_binary_obj >;
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
