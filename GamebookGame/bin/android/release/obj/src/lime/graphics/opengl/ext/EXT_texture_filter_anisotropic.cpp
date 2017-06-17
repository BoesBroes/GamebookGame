#include <hxcpp.h>

#ifndef INCLUDED_lime_graphics_opengl_ext_EXT_texture_filter_anisotropic
#include <lime/graphics/opengl/ext/EXT_texture_filter_anisotropic.h>
#endif
namespace lime{
namespace graphics{
namespace opengl{
namespace ext{

Void EXT_texture_filter_anisotropic_obj::__construct()
{
HX_STACK_FRAME("lime.graphics.opengl.ext.EXT_texture_filter_anisotropic","new",0x0f604e60,"lime.graphics.opengl.ext.EXT_texture_filter_anisotropic.new","lime/graphics/opengl/ext/EXT_texture_filter_anisotropic.hx",10,0x1cc8fa2e)
HX_STACK_THIS(this)
{
	HX_STACK_LINE(14)
	this->MAX_TEXTURE_MAX_ANISOTROPY_EXT = (int)34047;
	HX_STACK_LINE(13)
	this->TEXTURE_MAX_ANISOTROPY_EXT = (int)34046;
}
;
	return null();
}

//EXT_texture_filter_anisotropic_obj::~EXT_texture_filter_anisotropic_obj() { }

Dynamic EXT_texture_filter_anisotropic_obj::__CreateEmpty() { return  new EXT_texture_filter_anisotropic_obj; }
hx::ObjectPtr< EXT_texture_filter_anisotropic_obj > EXT_texture_filter_anisotropic_obj::__new()
{  hx::ObjectPtr< EXT_texture_filter_anisotropic_obj > _result_ = new EXT_texture_filter_anisotropic_obj();
	_result_->__construct();
	return _result_;}

Dynamic EXT_texture_filter_anisotropic_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< EXT_texture_filter_anisotropic_obj > _result_ = new EXT_texture_filter_anisotropic_obj();
	_result_->__construct();
	return _result_;}


EXT_texture_filter_anisotropic_obj::EXT_texture_filter_anisotropic_obj()
{
}

Dynamic EXT_texture_filter_anisotropic_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 26:
		if (HX_FIELD_EQ(inName,"TEXTURE_MAX_ANISOTROPY_EXT") ) { return TEXTURE_MAX_ANISOTROPY_EXT; }
		break;
	case 30:
		if (HX_FIELD_EQ(inName,"MAX_TEXTURE_MAX_ANISOTROPY_EXT") ) { return MAX_TEXTURE_MAX_ANISOTROPY_EXT; }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic EXT_texture_filter_anisotropic_obj::__SetField(const ::String &inName,const Dynamic &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 26:
		if (HX_FIELD_EQ(inName,"TEXTURE_MAX_ANISOTROPY_EXT") ) { TEXTURE_MAX_ANISOTROPY_EXT=inValue.Cast< int >(); return inValue; }
		break;
	case 30:
		if (HX_FIELD_EQ(inName,"MAX_TEXTURE_MAX_ANISOTROPY_EXT") ) { MAX_TEXTURE_MAX_ANISOTROPY_EXT=inValue.Cast< int >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void EXT_texture_filter_anisotropic_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("TEXTURE_MAX_ANISOTROPY_EXT","\x63","\xc1","\x6c","\x51"));
	outFields->push(HX_HCSTRING("MAX_TEXTURE_MAX_ANISOTROPY_EXT","\x7e","\x54","\xe7","\xa3"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsInt,(int)offsetof(EXT_texture_filter_anisotropic_obj,TEXTURE_MAX_ANISOTROPY_EXT),HX_HCSTRING("TEXTURE_MAX_ANISOTROPY_EXT","\x63","\xc1","\x6c","\x51")},
	{hx::fsInt,(int)offsetof(EXT_texture_filter_anisotropic_obj,MAX_TEXTURE_MAX_ANISOTROPY_EXT),HX_HCSTRING("MAX_TEXTURE_MAX_ANISOTROPY_EXT","\x7e","\x54","\xe7","\xa3")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo *sStaticStorageInfo = 0;
#endif

static ::String sMemberFields[] = {
	HX_HCSTRING("TEXTURE_MAX_ANISOTROPY_EXT","\x63","\xc1","\x6c","\x51"),
	HX_HCSTRING("MAX_TEXTURE_MAX_ANISOTROPY_EXT","\x7e","\x54","\xe7","\xa3"),
	::String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(EXT_texture_filter_anisotropic_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(EXT_texture_filter_anisotropic_obj::__mClass,"__mClass");
};

#endif

hx::Class EXT_texture_filter_anisotropic_obj::__mClass;

void EXT_texture_filter_anisotropic_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("lime.graphics.opengl.ext.EXT_texture_filter_anisotropic","\x6e","\xde","\x49","\xcd");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = hx::Class_obj::dupFunctions(sMemberFields);
	__mClass->mCanCast = hx::TCanCast< EXT_texture_filter_anisotropic_obj >;
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
