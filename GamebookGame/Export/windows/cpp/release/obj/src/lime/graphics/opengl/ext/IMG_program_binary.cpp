#include <hxcpp.h>

#ifndef INCLUDED_lime_graphics_opengl_ext_IMG_program_binary
#include <lime/graphics/opengl/ext/IMG_program_binary.h>
#endif
namespace lime{
namespace graphics{
namespace opengl{
namespace ext{

Void IMG_program_binary_obj::__construct()
{
HX_STACK_FRAME("lime.graphics.opengl.ext.IMG_program_binary","new",0x8d5e10cc,"lime.graphics.opengl.ext.IMG_program_binary.new","lime/graphics/opengl/ext/IMG_program_binary.hx",6,0xcae1b442)
HX_STACK_THIS(this)
{
	HX_STACK_LINE(9)
	this->SGX_PROGRAM_BINARY_IMG = (int)37168;
}
;
	return null();
}

//IMG_program_binary_obj::~IMG_program_binary_obj() { }

Dynamic IMG_program_binary_obj::__CreateEmpty() { return  new IMG_program_binary_obj; }
hx::ObjectPtr< IMG_program_binary_obj > IMG_program_binary_obj::__new()
{  hx::ObjectPtr< IMG_program_binary_obj > _result_ = new IMG_program_binary_obj();
	_result_->__construct();
	return _result_;}

Dynamic IMG_program_binary_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< IMG_program_binary_obj > _result_ = new IMG_program_binary_obj();
	_result_->__construct();
	return _result_;}


IMG_program_binary_obj::IMG_program_binary_obj()
{
}

Dynamic IMG_program_binary_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 22:
		if (HX_FIELD_EQ(inName,"SGX_PROGRAM_BINARY_IMG") ) { return SGX_PROGRAM_BINARY_IMG; }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic IMG_program_binary_obj::__SetField(const ::String &inName,const Dynamic &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 22:
		if (HX_FIELD_EQ(inName,"SGX_PROGRAM_BINARY_IMG") ) { SGX_PROGRAM_BINARY_IMG=inValue.Cast< int >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void IMG_program_binary_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("SGX_PROGRAM_BINARY_IMG","\xfb","\xcf","\x26","\x21"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsInt,(int)offsetof(IMG_program_binary_obj,SGX_PROGRAM_BINARY_IMG),HX_HCSTRING("SGX_PROGRAM_BINARY_IMG","\xfb","\xcf","\x26","\x21")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo *sStaticStorageInfo = 0;
#endif

static ::String sMemberFields[] = {
	HX_HCSTRING("SGX_PROGRAM_BINARY_IMG","\xfb","\xcf","\x26","\x21"),
	::String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(IMG_program_binary_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(IMG_program_binary_obj::__mClass,"__mClass");
};

#endif

hx::Class IMG_program_binary_obj::__mClass;

void IMG_program_binary_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("lime.graphics.opengl.ext.IMG_program_binary","\xda","\xfa","\x42","\xf3");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = hx::Class_obj::dupFunctions(sMemberFields);
	__mClass->mCanCast = hx::TCanCast< IMG_program_binary_obj >;
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
