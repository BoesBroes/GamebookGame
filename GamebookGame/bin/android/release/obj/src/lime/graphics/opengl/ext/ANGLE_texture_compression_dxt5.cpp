#include <hxcpp.h>

#ifndef INCLUDED_lime_graphics_opengl_ext_ANGLE_texture_compression_dxt5
#include <lime/graphics/opengl/ext/ANGLE_texture_compression_dxt5.h>
#endif
namespace lime{
namespace graphics{
namespace opengl{
namespace ext{

Void ANGLE_texture_compression_dxt5_obj::__construct()
{
HX_STACK_FRAME("lime.graphics.opengl.ext.ANGLE_texture_compression_dxt5","new",0xa5f7a412,"lime.graphics.opengl.ext.ANGLE_texture_compression_dxt5.new","lime/graphics/opengl/ext/ANGLE_texture_compression_dxt5.hx",6,0x984b60bc)
HX_STACK_THIS(this)
{
	HX_STACK_LINE(9)
	this->COMPRESSED_RGBA_S3TC_DXT5_ANGLE = (int)33779;
}
;
	return null();
}

//ANGLE_texture_compression_dxt5_obj::~ANGLE_texture_compression_dxt5_obj() { }

Dynamic ANGLE_texture_compression_dxt5_obj::__CreateEmpty() { return  new ANGLE_texture_compression_dxt5_obj; }
hx::ObjectPtr< ANGLE_texture_compression_dxt5_obj > ANGLE_texture_compression_dxt5_obj::__new()
{  hx::ObjectPtr< ANGLE_texture_compression_dxt5_obj > _result_ = new ANGLE_texture_compression_dxt5_obj();
	_result_->__construct();
	return _result_;}

Dynamic ANGLE_texture_compression_dxt5_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< ANGLE_texture_compression_dxt5_obj > _result_ = new ANGLE_texture_compression_dxt5_obj();
	_result_->__construct();
	return _result_;}


ANGLE_texture_compression_dxt5_obj::ANGLE_texture_compression_dxt5_obj()
{
}

Dynamic ANGLE_texture_compression_dxt5_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 31:
		if (HX_FIELD_EQ(inName,"COMPRESSED_RGBA_S3TC_DXT5_ANGLE") ) { return COMPRESSED_RGBA_S3TC_DXT5_ANGLE; }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic ANGLE_texture_compression_dxt5_obj::__SetField(const ::String &inName,const Dynamic &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 31:
		if (HX_FIELD_EQ(inName,"COMPRESSED_RGBA_S3TC_DXT5_ANGLE") ) { COMPRESSED_RGBA_S3TC_DXT5_ANGLE=inValue.Cast< int >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void ANGLE_texture_compression_dxt5_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("COMPRESSED_RGBA_S3TC_DXT5_ANGLE","\x2c","\x15","\x5f","\x3b"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsInt,(int)offsetof(ANGLE_texture_compression_dxt5_obj,COMPRESSED_RGBA_S3TC_DXT5_ANGLE),HX_HCSTRING("COMPRESSED_RGBA_S3TC_DXT5_ANGLE","\x2c","\x15","\x5f","\x3b")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo *sStaticStorageInfo = 0;
#endif

static ::String sMemberFields[] = {
	HX_HCSTRING("COMPRESSED_RGBA_S3TC_DXT5_ANGLE","\x2c","\x15","\x5f","\x3b"),
	::String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(ANGLE_texture_compression_dxt5_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(ANGLE_texture_compression_dxt5_obj::__mClass,"__mClass");
};

#endif

hx::Class ANGLE_texture_compression_dxt5_obj::__mClass;

void ANGLE_texture_compression_dxt5_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("lime.graphics.opengl.ext.ANGLE_texture_compression_dxt5","\x20","\xf3","\xf3","\x45");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = hx::Class_obj::dupFunctions(sMemberFields);
	__mClass->mCanCast = hx::TCanCast< ANGLE_texture_compression_dxt5_obj >;
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
