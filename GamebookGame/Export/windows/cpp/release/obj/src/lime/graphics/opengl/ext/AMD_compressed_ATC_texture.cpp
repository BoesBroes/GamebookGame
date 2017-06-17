#include <hxcpp.h>

#ifndef INCLUDED_lime_graphics_opengl_ext_AMD_compressed_ATC_texture
#include <lime/graphics/opengl/ext/AMD_compressed_ATC_texture.h>
#endif
namespace lime{
namespace graphics{
namespace opengl{
namespace ext{

Void AMD_compressed_ATC_texture_obj::__construct()
{
HX_STACK_FRAME("lime.graphics.opengl.ext.AMD_compressed_ATC_texture","new",0xe60aeca9,"lime.graphics.opengl.ext.AMD_compressed_ATC_texture.new","lime/graphics/opengl/ext/AMD_compressed_ATC_texture.hx",6,0x5b741105)
HX_STACK_THIS(this)
{
	HX_STACK_LINE(11)
	this->ATC_RGBA_INTERPOLATED_ALPHA_AMD = (int)34798;
	HX_STACK_LINE(10)
	this->ATC_RGBA_EXPLICIT_ALPHA_AMD = (int)35987;
	HX_STACK_LINE(9)
	this->ATC_RGB_AMD = (int)35986;
}
;
	return null();
}

//AMD_compressed_ATC_texture_obj::~AMD_compressed_ATC_texture_obj() { }

Dynamic AMD_compressed_ATC_texture_obj::__CreateEmpty() { return  new AMD_compressed_ATC_texture_obj; }
hx::ObjectPtr< AMD_compressed_ATC_texture_obj > AMD_compressed_ATC_texture_obj::__new()
{  hx::ObjectPtr< AMD_compressed_ATC_texture_obj > _result_ = new AMD_compressed_ATC_texture_obj();
	_result_->__construct();
	return _result_;}

Dynamic AMD_compressed_ATC_texture_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< AMD_compressed_ATC_texture_obj > _result_ = new AMD_compressed_ATC_texture_obj();
	_result_->__construct();
	return _result_;}


AMD_compressed_ATC_texture_obj::AMD_compressed_ATC_texture_obj()
{
}

Dynamic AMD_compressed_ATC_texture_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 11:
		if (HX_FIELD_EQ(inName,"ATC_RGB_AMD") ) { return ATC_RGB_AMD; }
		break;
	case 27:
		if (HX_FIELD_EQ(inName,"ATC_RGBA_EXPLICIT_ALPHA_AMD") ) { return ATC_RGBA_EXPLICIT_ALPHA_AMD; }
		break;
	case 31:
		if (HX_FIELD_EQ(inName,"ATC_RGBA_INTERPOLATED_ALPHA_AMD") ) { return ATC_RGBA_INTERPOLATED_ALPHA_AMD; }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic AMD_compressed_ATC_texture_obj::__SetField(const ::String &inName,const Dynamic &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 11:
		if (HX_FIELD_EQ(inName,"ATC_RGB_AMD") ) { ATC_RGB_AMD=inValue.Cast< int >(); return inValue; }
		break;
	case 27:
		if (HX_FIELD_EQ(inName,"ATC_RGBA_EXPLICIT_ALPHA_AMD") ) { ATC_RGBA_EXPLICIT_ALPHA_AMD=inValue.Cast< int >(); return inValue; }
		break;
	case 31:
		if (HX_FIELD_EQ(inName,"ATC_RGBA_INTERPOLATED_ALPHA_AMD") ) { ATC_RGBA_INTERPOLATED_ALPHA_AMD=inValue.Cast< int >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void AMD_compressed_ATC_texture_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("ATC_RGB_AMD","\xb7","\x31","\x75","\x34"));
	outFields->push(HX_HCSTRING("ATC_RGBA_EXPLICIT_ALPHA_AMD","\x28","\x5c","\x13","\x57"));
	outFields->push(HX_HCSTRING("ATC_RGBA_INTERPOLATED_ALPHA_AMD","\x77","\xdc","\xe4","\x2a"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsInt,(int)offsetof(AMD_compressed_ATC_texture_obj,ATC_RGB_AMD),HX_HCSTRING("ATC_RGB_AMD","\xb7","\x31","\x75","\x34")},
	{hx::fsInt,(int)offsetof(AMD_compressed_ATC_texture_obj,ATC_RGBA_EXPLICIT_ALPHA_AMD),HX_HCSTRING("ATC_RGBA_EXPLICIT_ALPHA_AMD","\x28","\x5c","\x13","\x57")},
	{hx::fsInt,(int)offsetof(AMD_compressed_ATC_texture_obj,ATC_RGBA_INTERPOLATED_ALPHA_AMD),HX_HCSTRING("ATC_RGBA_INTERPOLATED_ALPHA_AMD","\x77","\xdc","\xe4","\x2a")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo *sStaticStorageInfo = 0;
#endif

static ::String sMemberFields[] = {
	HX_HCSTRING("ATC_RGB_AMD","\xb7","\x31","\x75","\x34"),
	HX_HCSTRING("ATC_RGBA_EXPLICIT_ALPHA_AMD","\x28","\x5c","\x13","\x57"),
	HX_HCSTRING("ATC_RGBA_INTERPOLATED_ALPHA_AMD","\x77","\xdc","\xe4","\x2a"),
	::String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(AMD_compressed_ATC_texture_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(AMD_compressed_ATC_texture_obj::__mClass,"__mClass");
};

#endif

hx::Class AMD_compressed_ATC_texture_obj::__mClass;

void AMD_compressed_ATC_texture_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("lime.graphics.opengl.ext.AMD_compressed_ATC_texture","\x37","\x64","\xc3","\xec");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = hx::Class_obj::dupFunctions(sMemberFields);
	__mClass->mCanCast = hx::TCanCast< AMD_compressed_ATC_texture_obj >;
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
