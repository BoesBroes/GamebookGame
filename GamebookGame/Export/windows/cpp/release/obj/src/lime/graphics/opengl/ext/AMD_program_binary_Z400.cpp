#include <hxcpp.h>

#ifndef INCLUDED_lime_graphics_opengl_ext_AMD_program_binary_Z400
#include <lime/graphics/opengl/ext/AMD_program_binary_Z400.h>
#endif
namespace lime{
namespace graphics{
namespace opengl{
namespace ext{

Void AMD_program_binary_Z400_obj::__construct()
{
HX_STACK_FRAME("lime.graphics.opengl.ext.AMD_program_binary_Z400","new",0x8e433f46,"lime.graphics.opengl.ext.AMD_program_binary_Z400.new","lime/graphics/opengl/ext/AMD_program_binary_Z400.hx",6,0x1635f60c)
HX_STACK_THIS(this)
{
	HX_STACK_LINE(9)
	this->Z400_BINARY_AMD = (int)34624;
}
;
	return null();
}

//AMD_program_binary_Z400_obj::~AMD_program_binary_Z400_obj() { }

Dynamic AMD_program_binary_Z400_obj::__CreateEmpty() { return  new AMD_program_binary_Z400_obj; }
hx::ObjectPtr< AMD_program_binary_Z400_obj > AMD_program_binary_Z400_obj::__new()
{  hx::ObjectPtr< AMD_program_binary_Z400_obj > _result_ = new AMD_program_binary_Z400_obj();
	_result_->__construct();
	return _result_;}

Dynamic AMD_program_binary_Z400_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< AMD_program_binary_Z400_obj > _result_ = new AMD_program_binary_Z400_obj();
	_result_->__construct();
	return _result_;}


AMD_program_binary_Z400_obj::AMD_program_binary_Z400_obj()
{
}

Dynamic AMD_program_binary_Z400_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 15:
		if (HX_FIELD_EQ(inName,"Z400_BINARY_AMD") ) { return Z400_BINARY_AMD; }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic AMD_program_binary_Z400_obj::__SetField(const ::String &inName,const Dynamic &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 15:
		if (HX_FIELD_EQ(inName,"Z400_BINARY_AMD") ) { Z400_BINARY_AMD=inValue.Cast< int >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void AMD_program_binary_Z400_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("Z400_BINARY_AMD","\x9f","\xd3","\x76","\x23"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsInt,(int)offsetof(AMD_program_binary_Z400_obj,Z400_BINARY_AMD),HX_HCSTRING("Z400_BINARY_AMD","\x9f","\xd3","\x76","\x23")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo *sStaticStorageInfo = 0;
#endif

static ::String sMemberFields[] = {
	HX_HCSTRING("Z400_BINARY_AMD","\x9f","\xd3","\x76","\x23"),
	::String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(AMD_program_binary_Z400_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(AMD_program_binary_Z400_obj::__mClass,"__mClass");
};

#endif

hx::Class AMD_program_binary_Z400_obj::__mClass;

void AMD_program_binary_Z400_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("lime.graphics.opengl.ext.AMD_program_binary_Z400","\x54","\xe4","\x9c","\xb7");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = hx::Class_obj::dupFunctions(sMemberFields);
	__mClass->mCanCast = hx::TCanCast< AMD_program_binary_Z400_obj >;
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
