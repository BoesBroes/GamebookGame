#include <hxcpp.h>

#ifndef INCLUDED_lime_graphics_opengl_ext_EXT_texture_type_2_10_10_10_REV
#include <lime/graphics/opengl/ext/EXT_texture_type_2_10_10_10_REV.h>
#endif
namespace lime{
namespace graphics{
namespace opengl{
namespace ext{

Void EXT_texture_type_2_10_10_10_REV_obj::__construct()
{
HX_STACK_FRAME("lime.graphics.opengl.ext.EXT_texture_type_2_10_10_10_REV","new",0x9147d7a3,"lime.graphics.opengl.ext.EXT_texture_type_2_10_10_10_REV.new","lime/graphics/opengl/ext/EXT_texture_type_2_10_10_10_REV.hx",6,0x0a1a4a4f)
HX_STACK_THIS(this)
{
	HX_STACK_LINE(9)
	this->UNSIGNED_INT_2_10_10_10_REV_EXT = (int)33640;
}
;
	return null();
}

//EXT_texture_type_2_10_10_10_REV_obj::~EXT_texture_type_2_10_10_10_REV_obj() { }

Dynamic EXT_texture_type_2_10_10_10_REV_obj::__CreateEmpty() { return  new EXT_texture_type_2_10_10_10_REV_obj; }
hx::ObjectPtr< EXT_texture_type_2_10_10_10_REV_obj > EXT_texture_type_2_10_10_10_REV_obj::__new()
{  hx::ObjectPtr< EXT_texture_type_2_10_10_10_REV_obj > _result_ = new EXT_texture_type_2_10_10_10_REV_obj();
	_result_->__construct();
	return _result_;}

Dynamic EXT_texture_type_2_10_10_10_REV_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< EXT_texture_type_2_10_10_10_REV_obj > _result_ = new EXT_texture_type_2_10_10_10_REV_obj();
	_result_->__construct();
	return _result_;}


EXT_texture_type_2_10_10_10_REV_obj::EXT_texture_type_2_10_10_10_REV_obj()
{
}

Dynamic EXT_texture_type_2_10_10_10_REV_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 31:
		if (HX_FIELD_EQ(inName,"UNSIGNED_INT_2_10_10_10_REV_EXT") ) { return UNSIGNED_INT_2_10_10_10_REV_EXT; }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic EXT_texture_type_2_10_10_10_REV_obj::__SetField(const ::String &inName,const Dynamic &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 31:
		if (HX_FIELD_EQ(inName,"UNSIGNED_INT_2_10_10_10_REV_EXT") ) { UNSIGNED_INT_2_10_10_10_REV_EXT=inValue.Cast< int >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void EXT_texture_type_2_10_10_10_REV_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("UNSIGNED_INT_2_10_10_10_REV_EXT","\x8c","\x7b","\xc3","\x89"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsInt,(int)offsetof(EXT_texture_type_2_10_10_10_REV_obj,UNSIGNED_INT_2_10_10_10_REV_EXT),HX_HCSTRING("UNSIGNED_INT_2_10_10_10_REV_EXT","\x8c","\x7b","\xc3","\x89")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo *sStaticStorageInfo = 0;
#endif

static ::String sMemberFields[] = {
	HX_HCSTRING("UNSIGNED_INT_2_10_10_10_REV_EXT","\x8c","\x7b","\xc3","\x89"),
	::String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(EXT_texture_type_2_10_10_10_REV_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(EXT_texture_type_2_10_10_10_REV_obj::__mClass,"__mClass");
};

#endif

hx::Class EXT_texture_type_2_10_10_10_REV_obj::__mClass;

void EXT_texture_type_2_10_10_10_REV_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("lime.graphics.opengl.ext.EXT_texture_type_2_10_10_10_REV","\x31","\xca","\xbc","\x3c");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = hx::Class_obj::dupFunctions(sMemberFields);
	__mClass->mCanCast = hx::TCanCast< EXT_texture_type_2_10_10_10_REV_obj >;
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
