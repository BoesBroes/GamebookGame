#include <hxcpp.h>

#ifndef INCLUDED_lime_graphics_opengl_ext_IMG_texture_compression_pvrtc
#include <lime/graphics/opengl/ext/IMG_texture_compression_pvrtc.h>
#endif
namespace lime{
namespace graphics{
namespace opengl{
namespace ext{

Void IMG_texture_compression_pvrtc_obj::__construct()
{
HX_STACK_FRAME("lime.graphics.opengl.ext.IMG_texture_compression_pvrtc","new",0x8bbb9a12,"lime.graphics.opengl.ext.IMG_texture_compression_pvrtc.new","lime/graphics/opengl/ext/IMG_texture_compression_pvrtc.hx",6,0xfe8bfe40)
HX_STACK_THIS(this)
{
	HX_STACK_LINE(12)
	this->COMPRESSED_RGBA_PVRTC_2BPPV1_IMG = (int)35843;
	HX_STACK_LINE(11)
	this->COMPRESSED_RGBA_PVRTC_4BPPV1_IMG = (int)35842;
	HX_STACK_LINE(10)
	this->COMPRESSED_RGB_PVRTC_2BPPV1_IMG = (int)35841;
	HX_STACK_LINE(9)
	this->COMPRESSED_RGB_PVRTC_4BPPV1_IMG = (int)35840;
}
;
	return null();
}

//IMG_texture_compression_pvrtc_obj::~IMG_texture_compression_pvrtc_obj() { }

Dynamic IMG_texture_compression_pvrtc_obj::__CreateEmpty() { return  new IMG_texture_compression_pvrtc_obj; }
hx::ObjectPtr< IMG_texture_compression_pvrtc_obj > IMG_texture_compression_pvrtc_obj::__new()
{  hx::ObjectPtr< IMG_texture_compression_pvrtc_obj > _result_ = new IMG_texture_compression_pvrtc_obj();
	_result_->__construct();
	return _result_;}

Dynamic IMG_texture_compression_pvrtc_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< IMG_texture_compression_pvrtc_obj > _result_ = new IMG_texture_compression_pvrtc_obj();
	_result_->__construct();
	return _result_;}


IMG_texture_compression_pvrtc_obj::IMG_texture_compression_pvrtc_obj()
{
}

Dynamic IMG_texture_compression_pvrtc_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 31:
		if (HX_FIELD_EQ(inName,"COMPRESSED_RGB_PVRTC_4BPPV1_IMG") ) { return COMPRESSED_RGB_PVRTC_4BPPV1_IMG; }
		if (HX_FIELD_EQ(inName,"COMPRESSED_RGB_PVRTC_2BPPV1_IMG") ) { return COMPRESSED_RGB_PVRTC_2BPPV1_IMG; }
		break;
	case 32:
		if (HX_FIELD_EQ(inName,"COMPRESSED_RGBA_PVRTC_4BPPV1_IMG") ) { return COMPRESSED_RGBA_PVRTC_4BPPV1_IMG; }
		if (HX_FIELD_EQ(inName,"COMPRESSED_RGBA_PVRTC_2BPPV1_IMG") ) { return COMPRESSED_RGBA_PVRTC_2BPPV1_IMG; }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic IMG_texture_compression_pvrtc_obj::__SetField(const ::String &inName,const Dynamic &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 31:
		if (HX_FIELD_EQ(inName,"COMPRESSED_RGB_PVRTC_4BPPV1_IMG") ) { COMPRESSED_RGB_PVRTC_4BPPV1_IMG=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"COMPRESSED_RGB_PVRTC_2BPPV1_IMG") ) { COMPRESSED_RGB_PVRTC_2BPPV1_IMG=inValue.Cast< int >(); return inValue; }
		break;
	case 32:
		if (HX_FIELD_EQ(inName,"COMPRESSED_RGBA_PVRTC_4BPPV1_IMG") ) { COMPRESSED_RGBA_PVRTC_4BPPV1_IMG=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"COMPRESSED_RGBA_PVRTC_2BPPV1_IMG") ) { COMPRESSED_RGBA_PVRTC_2BPPV1_IMG=inValue.Cast< int >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void IMG_texture_compression_pvrtc_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("COMPRESSED_RGB_PVRTC_4BPPV1_IMG","\xa1","\x18","\x41","\xce"));
	outFields->push(HX_HCSTRING("COMPRESSED_RGB_PVRTC_2BPPV1_IMG","\xe3","\x28","\xac","\x4d"));
	outFields->push(HX_HCSTRING("COMPRESSED_RGBA_PVRTC_4BPPV1_IMG","\xbe","\x45","\x75","\xbf"));
	outFields->push(HX_HCSTRING("COMPRESSED_RGBA_PVRTC_2BPPV1_IMG","\x00","\x56","\xe0","\x3e"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsInt,(int)offsetof(IMG_texture_compression_pvrtc_obj,COMPRESSED_RGB_PVRTC_4BPPV1_IMG),HX_HCSTRING("COMPRESSED_RGB_PVRTC_4BPPV1_IMG","\xa1","\x18","\x41","\xce")},
	{hx::fsInt,(int)offsetof(IMG_texture_compression_pvrtc_obj,COMPRESSED_RGB_PVRTC_2BPPV1_IMG),HX_HCSTRING("COMPRESSED_RGB_PVRTC_2BPPV1_IMG","\xe3","\x28","\xac","\x4d")},
	{hx::fsInt,(int)offsetof(IMG_texture_compression_pvrtc_obj,COMPRESSED_RGBA_PVRTC_4BPPV1_IMG),HX_HCSTRING("COMPRESSED_RGBA_PVRTC_4BPPV1_IMG","\xbe","\x45","\x75","\xbf")},
	{hx::fsInt,(int)offsetof(IMG_texture_compression_pvrtc_obj,COMPRESSED_RGBA_PVRTC_2BPPV1_IMG),HX_HCSTRING("COMPRESSED_RGBA_PVRTC_2BPPV1_IMG","\x00","\x56","\xe0","\x3e")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo *sStaticStorageInfo = 0;
#endif

static ::String sMemberFields[] = {
	HX_HCSTRING("COMPRESSED_RGB_PVRTC_4BPPV1_IMG","\xa1","\x18","\x41","\xce"),
	HX_HCSTRING("COMPRESSED_RGB_PVRTC_2BPPV1_IMG","\xe3","\x28","\xac","\x4d"),
	HX_HCSTRING("COMPRESSED_RGBA_PVRTC_4BPPV1_IMG","\xbe","\x45","\x75","\xbf"),
	HX_HCSTRING("COMPRESSED_RGBA_PVRTC_2BPPV1_IMG","\x00","\x56","\xe0","\x3e"),
	::String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(IMG_texture_compression_pvrtc_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(IMG_texture_compression_pvrtc_obj::__mClass,"__mClass");
};

#endif

hx::Class IMG_texture_compression_pvrtc_obj::__mClass;

void IMG_texture_compression_pvrtc_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("lime.graphics.opengl.ext.IMG_texture_compression_pvrtc","\x20","\xe9","\x04","\xd1");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = hx::Class_obj::dupFunctions(sMemberFields);
	__mClass->mCanCast = hx::TCanCast< IMG_texture_compression_pvrtc_obj >;
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
