#include <hxcpp.h>

#ifndef INCLUDED_lime_graphics_opengl_ext_EXT_texture_compression_s3tc
#include <lime/graphics/opengl/ext/EXT_texture_compression_s3tc.h>
#endif
namespace lime{
namespace graphics{
namespace opengl{
namespace ext{

Void EXT_texture_compression_s3tc_obj::__construct()
{
HX_STACK_FRAME("lime.graphics.opengl.ext.EXT_texture_compression_s3tc","new",0x695482fe,"lime.graphics.opengl.ext.EXT_texture_compression_s3tc.new","lime/graphics/opengl/ext/EXT_texture_compression_s3tc.hx",6,0xf0ac9fd0)
HX_STACK_THIS(this)
{
	HX_STACK_LINE(12)
	this->COMPRESSED_RGBA_S3TC_DXT5_EXT = (int)33779;
	HX_STACK_LINE(11)
	this->COMPRESSED_RGBA_S3TC_DXT3_EXT = (int)33778;
	HX_STACK_LINE(10)
	this->COMPRESSED_RGBA_S3TC_DXT1_EXT = (int)33777;
	HX_STACK_LINE(9)
	this->COMPRESSED_RGB_S3TC_DXT1_EXT = (int)33776;
}
;
	return null();
}

//EXT_texture_compression_s3tc_obj::~EXT_texture_compression_s3tc_obj() { }

Dynamic EXT_texture_compression_s3tc_obj::__CreateEmpty() { return  new EXT_texture_compression_s3tc_obj; }
hx::ObjectPtr< EXT_texture_compression_s3tc_obj > EXT_texture_compression_s3tc_obj::__new()
{  hx::ObjectPtr< EXT_texture_compression_s3tc_obj > _result_ = new EXT_texture_compression_s3tc_obj();
	_result_->__construct();
	return _result_;}

Dynamic EXT_texture_compression_s3tc_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< EXT_texture_compression_s3tc_obj > _result_ = new EXT_texture_compression_s3tc_obj();
	_result_->__construct();
	return _result_;}


EXT_texture_compression_s3tc_obj::EXT_texture_compression_s3tc_obj()
{
}

Dynamic EXT_texture_compression_s3tc_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 28:
		if (HX_FIELD_EQ(inName,"COMPRESSED_RGB_S3TC_DXT1_EXT") ) { return COMPRESSED_RGB_S3TC_DXT1_EXT; }
		break;
	case 29:
		if (HX_FIELD_EQ(inName,"COMPRESSED_RGBA_S3TC_DXT1_EXT") ) { return COMPRESSED_RGBA_S3TC_DXT1_EXT; }
		if (HX_FIELD_EQ(inName,"COMPRESSED_RGBA_S3TC_DXT3_EXT") ) { return COMPRESSED_RGBA_S3TC_DXT3_EXT; }
		if (HX_FIELD_EQ(inName,"COMPRESSED_RGBA_S3TC_DXT5_EXT") ) { return COMPRESSED_RGBA_S3TC_DXT5_EXT; }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic EXT_texture_compression_s3tc_obj::__SetField(const ::String &inName,const Dynamic &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 28:
		if (HX_FIELD_EQ(inName,"COMPRESSED_RGB_S3TC_DXT1_EXT") ) { COMPRESSED_RGB_S3TC_DXT1_EXT=inValue.Cast< int >(); return inValue; }
		break;
	case 29:
		if (HX_FIELD_EQ(inName,"COMPRESSED_RGBA_S3TC_DXT1_EXT") ) { COMPRESSED_RGBA_S3TC_DXT1_EXT=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"COMPRESSED_RGBA_S3TC_DXT3_EXT") ) { COMPRESSED_RGBA_S3TC_DXT3_EXT=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"COMPRESSED_RGBA_S3TC_DXT5_EXT") ) { COMPRESSED_RGBA_S3TC_DXT5_EXT=inValue.Cast< int >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void EXT_texture_compression_s3tc_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("COMPRESSED_RGB_S3TC_DXT1_EXT","\xf3","\x40","\x24","\xb7"));
	outFields->push(HX_HCSTRING("COMPRESSED_RGBA_S3TC_DXT1_EXT","\xb6","\x6f","\x45","\xf9"));
	outFields->push(HX_HCSTRING("COMPRESSED_RGBA_S3TC_DXT3_EXT","\xb8","\x98","\x12","\x20"));
	outFields->push(HX_HCSTRING("COMPRESSED_RGBA_S3TC_DXT5_EXT","\xba","\xc1","\xdf","\x46"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsInt,(int)offsetof(EXT_texture_compression_s3tc_obj,COMPRESSED_RGB_S3TC_DXT1_EXT),HX_HCSTRING("COMPRESSED_RGB_S3TC_DXT1_EXT","\xf3","\x40","\x24","\xb7")},
	{hx::fsInt,(int)offsetof(EXT_texture_compression_s3tc_obj,COMPRESSED_RGBA_S3TC_DXT1_EXT),HX_HCSTRING("COMPRESSED_RGBA_S3TC_DXT1_EXT","\xb6","\x6f","\x45","\xf9")},
	{hx::fsInt,(int)offsetof(EXT_texture_compression_s3tc_obj,COMPRESSED_RGBA_S3TC_DXT3_EXT),HX_HCSTRING("COMPRESSED_RGBA_S3TC_DXT3_EXT","\xb8","\x98","\x12","\x20")},
	{hx::fsInt,(int)offsetof(EXT_texture_compression_s3tc_obj,COMPRESSED_RGBA_S3TC_DXT5_EXT),HX_HCSTRING("COMPRESSED_RGBA_S3TC_DXT5_EXT","\xba","\xc1","\xdf","\x46")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo *sStaticStorageInfo = 0;
#endif

static ::String sMemberFields[] = {
	HX_HCSTRING("COMPRESSED_RGB_S3TC_DXT1_EXT","\xf3","\x40","\x24","\xb7"),
	HX_HCSTRING("COMPRESSED_RGBA_S3TC_DXT1_EXT","\xb6","\x6f","\x45","\xf9"),
	HX_HCSTRING("COMPRESSED_RGBA_S3TC_DXT3_EXT","\xb8","\x98","\x12","\x20"),
	HX_HCSTRING("COMPRESSED_RGBA_S3TC_DXT5_EXT","\xba","\xc1","\xdf","\x46"),
	::String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(EXT_texture_compression_s3tc_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(EXT_texture_compression_s3tc_obj::__mClass,"__mClass");
};

#endif

hx::Class EXT_texture_compression_s3tc_obj::__mClass;

void EXT_texture_compression_s3tc_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("lime.graphics.opengl.ext.EXT_texture_compression_s3tc","\x0c","\xec","\x63","\xe3");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = hx::Class_obj::dupFunctions(sMemberFields);
	__mClass->mCanCast = hx::TCanCast< EXT_texture_compression_s3tc_obj >;
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
