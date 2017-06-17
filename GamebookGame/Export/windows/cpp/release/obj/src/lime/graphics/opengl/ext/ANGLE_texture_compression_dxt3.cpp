#include <hxcpp.h>

#ifndef INCLUDED_lime_graphics_opengl_ext_ANGLE_texture_compression_dxt3
#include <lime/graphics/opengl/ext/ANGLE_texture_compression_dxt3.h>
#endif
namespace lime{
namespace graphics{
namespace opengl{
namespace ext{

Void ANGLE_texture_compression_dxt3_obj::__construct()
{
HX_STACK_FRAME("lime.graphics.opengl.ext.ANGLE_texture_compression_dxt3","new",0x7f2a7b10,"lime.graphics.opengl.ext.ANGLE_texture_compression_dxt3.new","lime/graphics/opengl/ext/ANGLE_texture_compression_dxt3.hx",6,0x96f8f37e)
HX_STACK_THIS(this)
{
	HX_STACK_LINE(9)
	this->COMPRESSED_RGBA_S3TC_DXT3_ANGLE = (int)33778;
}
;
	return null();
}

//ANGLE_texture_compression_dxt3_obj::~ANGLE_texture_compression_dxt3_obj() { }

Dynamic ANGLE_texture_compression_dxt3_obj::__CreateEmpty() { return  new ANGLE_texture_compression_dxt3_obj; }
hx::ObjectPtr< ANGLE_texture_compression_dxt3_obj > ANGLE_texture_compression_dxt3_obj::__new()
{  hx::ObjectPtr< ANGLE_texture_compression_dxt3_obj > _result_ = new ANGLE_texture_compression_dxt3_obj();
	_result_->__construct();
	return _result_;}

Dynamic ANGLE_texture_compression_dxt3_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< ANGLE_texture_compression_dxt3_obj > _result_ = new ANGLE_texture_compression_dxt3_obj();
	_result_->__construct();
	return _result_;}


ANGLE_texture_compression_dxt3_obj::ANGLE_texture_compression_dxt3_obj()
{
}

Dynamic ANGLE_texture_compression_dxt3_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 31:
		if (HX_FIELD_EQ(inName,"COMPRESSED_RGBA_S3TC_DXT3_ANGLE") ) { return COMPRESSED_RGBA_S3TC_DXT3_ANGLE; }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic ANGLE_texture_compression_dxt3_obj::__SetField(const ::String &inName,const Dynamic &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 31:
		if (HX_FIELD_EQ(inName,"COMPRESSED_RGBA_S3TC_DXT3_ANGLE") ) { COMPRESSED_RGBA_S3TC_DXT3_ANGLE=inValue.Cast< int >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void ANGLE_texture_compression_dxt3_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("COMPRESSED_RGBA_S3TC_DXT3_ANGLE","\xaa","\x27","\x34","\xe8"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsInt,(int)offsetof(ANGLE_texture_compression_dxt3_obj,COMPRESSED_RGBA_S3TC_DXT3_ANGLE),HX_HCSTRING("COMPRESSED_RGBA_S3TC_DXT3_ANGLE","\xaa","\x27","\x34","\xe8")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo *sStaticStorageInfo = 0;
#endif

static ::String sMemberFields[] = {
	HX_HCSTRING("COMPRESSED_RGBA_S3TC_DXT3_ANGLE","\xaa","\x27","\x34","\xe8"),
	::String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(ANGLE_texture_compression_dxt3_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(ANGLE_texture_compression_dxt3_obj::__mClass,"__mClass");
};

#endif

hx::Class ANGLE_texture_compression_dxt3_obj::__mClass;

void ANGLE_texture_compression_dxt3_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("lime.graphics.opengl.ext.ANGLE_texture_compression_dxt3","\x1e","\xf3","\xf3","\x45");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = hx::Class_obj::dupFunctions(sMemberFields);
	__mClass->mCanCast = hx::TCanCast< ANGLE_texture_compression_dxt3_obj >;
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
