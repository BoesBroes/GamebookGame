#include <hxcpp.h>

#ifndef INCLUDED_lime_graphics_opengl_ext_EXT_texture_compression_dxt1
#include <lime/graphics/opengl/ext/EXT_texture_compression_dxt1.h>
#endif
namespace lime{
namespace graphics{
namespace opengl{
namespace ext{

Void EXT_texture_compression_dxt1_obj::__construct()
{
HX_STACK_FRAME("lime.graphics.opengl.ext.EXT_texture_compression_dxt1","new",0x7a9fd400,"lime.graphics.opengl.ext.EXT_texture_compression_dxt1.new","lime/graphics/opengl/ext/EXT_texture_compression_dxt1.hx",6,0xf67de50e)
HX_STACK_THIS(this)
{
	HX_STACK_LINE(10)
	this->COMPRESSED_RGBA_S3TC_DXT1_EXT = (int)33777;
	HX_STACK_LINE(9)
	this->COMPRESSED_RGB_S3TC_DXT1_EXT = (int)33776;
}
;
	return null();
}

//EXT_texture_compression_dxt1_obj::~EXT_texture_compression_dxt1_obj() { }

Dynamic EXT_texture_compression_dxt1_obj::__CreateEmpty() { return  new EXT_texture_compression_dxt1_obj; }
hx::ObjectPtr< EXT_texture_compression_dxt1_obj > EXT_texture_compression_dxt1_obj::__new()
{  hx::ObjectPtr< EXT_texture_compression_dxt1_obj > _result_ = new EXT_texture_compression_dxt1_obj();
	_result_->__construct();
	return _result_;}

Dynamic EXT_texture_compression_dxt1_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< EXT_texture_compression_dxt1_obj > _result_ = new EXT_texture_compression_dxt1_obj();
	_result_->__construct();
	return _result_;}


EXT_texture_compression_dxt1_obj::EXT_texture_compression_dxt1_obj()
{
}

Dynamic EXT_texture_compression_dxt1_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 28:
		if (HX_FIELD_EQ(inName,"COMPRESSED_RGB_S3TC_DXT1_EXT") ) { return COMPRESSED_RGB_S3TC_DXT1_EXT; }
		break;
	case 29:
		if (HX_FIELD_EQ(inName,"COMPRESSED_RGBA_S3TC_DXT1_EXT") ) { return COMPRESSED_RGBA_S3TC_DXT1_EXT; }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic EXT_texture_compression_dxt1_obj::__SetField(const ::String &inName,const Dynamic &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 28:
		if (HX_FIELD_EQ(inName,"COMPRESSED_RGB_S3TC_DXT1_EXT") ) { COMPRESSED_RGB_S3TC_DXT1_EXT=inValue.Cast< int >(); return inValue; }
		break;
	case 29:
		if (HX_FIELD_EQ(inName,"COMPRESSED_RGBA_S3TC_DXT1_EXT") ) { COMPRESSED_RGBA_S3TC_DXT1_EXT=inValue.Cast< int >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void EXT_texture_compression_dxt1_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("COMPRESSED_RGB_S3TC_DXT1_EXT","\xf3","\x40","\x24","\xb7"));
	outFields->push(HX_HCSTRING("COMPRESSED_RGBA_S3TC_DXT1_EXT","\xb6","\x6f","\x45","\xf9"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsInt,(int)offsetof(EXT_texture_compression_dxt1_obj,COMPRESSED_RGB_S3TC_DXT1_EXT),HX_HCSTRING("COMPRESSED_RGB_S3TC_DXT1_EXT","\xf3","\x40","\x24","\xb7")},
	{hx::fsInt,(int)offsetof(EXT_texture_compression_dxt1_obj,COMPRESSED_RGBA_S3TC_DXT1_EXT),HX_HCSTRING("COMPRESSED_RGBA_S3TC_DXT1_EXT","\xb6","\x6f","\x45","\xf9")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo *sStaticStorageInfo = 0;
#endif

static ::String sMemberFields[] = {
	HX_HCSTRING("COMPRESSED_RGB_S3TC_DXT1_EXT","\xf3","\x40","\x24","\xb7"),
	HX_HCSTRING("COMPRESSED_RGBA_S3TC_DXT1_EXT","\xb6","\x6f","\x45","\xf9"),
	::String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(EXT_texture_compression_dxt1_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(EXT_texture_compression_dxt1_obj::__mClass,"__mClass");
};

#endif

hx::Class EXT_texture_compression_dxt1_obj::__mClass;

void EXT_texture_compression_dxt1_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("lime.graphics.opengl.ext.EXT_texture_compression_dxt1","\x0e","\x14","\xae","\xd9");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = hx::Class_obj::dupFunctions(sMemberFields);
	__mClass->mCanCast = hx::TCanCast< EXT_texture_compression_dxt1_obj >;
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
