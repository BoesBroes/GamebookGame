#include <hxcpp.h>

#ifndef INCLUDED_lime_graphics_opengl_ext_OES_required_internalformat
#include <lime/graphics/opengl/ext/OES_required_internalformat.h>
#endif
namespace lime{
namespace graphics{
namespace opengl{
namespace ext{

Void OES_required_internalformat_obj::__construct()
{
HX_STACK_FRAME("lime.graphics.opengl.ext.OES_required_internalformat","new",0x0eacc2e2,"lime.graphics.opengl.ext.OES_required_internalformat.new","lime/graphics/opengl/ext/OES_required_internalformat.hx",6,0x280512f0)
HX_STACK_THIS(this)
{
	HX_STACK_LINE(23)
	this->RGB10_A2_EXT = (int)32857;
	HX_STACK_LINE(22)
	this->RGB10_EXT = (int)32850;
	HX_STACK_LINE(21)
	this->RGBA8_OES = (int)32856;
	HX_STACK_LINE(20)
	this->RGB8_OES = (int)32849;
	HX_STACK_LINE(19)
	this->RGB565_OES = (int)36194;
	HX_STACK_LINE(18)
	this->RGB5_A1_OES = (int)32855;
	HX_STACK_LINE(17)
	this->RGBA4_OES = (int)32854;
	HX_STACK_LINE(16)
	this->LUMINANCE8_OES = (int)32832;
	HX_STACK_LINE(15)
	this->LUMINANCE8_ALPHA8_OES = (int)32837;
	HX_STACK_LINE(14)
	this->LUMINANCE4_ALPHA4_OES = (int)32835;
	HX_STACK_LINE(13)
	this->DEPTH_COMPONENT32_OES = (int)33191;
	HX_STACK_LINE(12)
	this->DEPTH24_STENCIL8_OES = (int)35056;
	HX_STACK_LINE(11)
	this->DEPTH_COMPONENT24_OES = (int)33190;
	HX_STACK_LINE(10)
	this->DEPTH_COMPONENT16_OES = (int)33189;
	HX_STACK_LINE(9)
	this->ALPHA8_OES = (int)32828;
}
;
	return null();
}

//OES_required_internalformat_obj::~OES_required_internalformat_obj() { }

Dynamic OES_required_internalformat_obj::__CreateEmpty() { return  new OES_required_internalformat_obj; }
hx::ObjectPtr< OES_required_internalformat_obj > OES_required_internalformat_obj::__new()
{  hx::ObjectPtr< OES_required_internalformat_obj > _result_ = new OES_required_internalformat_obj();
	_result_->__construct();
	return _result_;}

Dynamic OES_required_internalformat_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< OES_required_internalformat_obj > _result_ = new OES_required_internalformat_obj();
	_result_->__construct();
	return _result_;}


OES_required_internalformat_obj::OES_required_internalformat_obj()
{
}

Dynamic OES_required_internalformat_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 8:
		if (HX_FIELD_EQ(inName,"RGB8_OES") ) { return RGB8_OES; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"RGBA4_OES") ) { return RGBA4_OES; }
		if (HX_FIELD_EQ(inName,"RGBA8_OES") ) { return RGBA8_OES; }
		if (HX_FIELD_EQ(inName,"RGB10_EXT") ) { return RGB10_EXT; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"ALPHA8_OES") ) { return ALPHA8_OES; }
		if (HX_FIELD_EQ(inName,"RGB565_OES") ) { return RGB565_OES; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"RGB5_A1_OES") ) { return RGB5_A1_OES; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"RGB10_A2_EXT") ) { return RGB10_A2_EXT; }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"LUMINANCE8_OES") ) { return LUMINANCE8_OES; }
		break;
	case 20:
		if (HX_FIELD_EQ(inName,"DEPTH24_STENCIL8_OES") ) { return DEPTH24_STENCIL8_OES; }
		break;
	case 21:
		if (HX_FIELD_EQ(inName,"DEPTH_COMPONENT16_OES") ) { return DEPTH_COMPONENT16_OES; }
		if (HX_FIELD_EQ(inName,"DEPTH_COMPONENT24_OES") ) { return DEPTH_COMPONENT24_OES; }
		if (HX_FIELD_EQ(inName,"DEPTH_COMPONENT32_OES") ) { return DEPTH_COMPONENT32_OES; }
		if (HX_FIELD_EQ(inName,"LUMINANCE4_ALPHA4_OES") ) { return LUMINANCE4_ALPHA4_OES; }
		if (HX_FIELD_EQ(inName,"LUMINANCE8_ALPHA8_OES") ) { return LUMINANCE8_ALPHA8_OES; }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic OES_required_internalformat_obj::__SetField(const ::String &inName,const Dynamic &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 8:
		if (HX_FIELD_EQ(inName,"RGB8_OES") ) { RGB8_OES=inValue.Cast< int >(); return inValue; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"RGBA4_OES") ) { RGBA4_OES=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"RGBA8_OES") ) { RGBA8_OES=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"RGB10_EXT") ) { RGB10_EXT=inValue.Cast< int >(); return inValue; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"ALPHA8_OES") ) { ALPHA8_OES=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"RGB565_OES") ) { RGB565_OES=inValue.Cast< int >(); return inValue; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"RGB5_A1_OES") ) { RGB5_A1_OES=inValue.Cast< int >(); return inValue; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"RGB10_A2_EXT") ) { RGB10_A2_EXT=inValue.Cast< int >(); return inValue; }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"LUMINANCE8_OES") ) { LUMINANCE8_OES=inValue.Cast< int >(); return inValue; }
		break;
	case 20:
		if (HX_FIELD_EQ(inName,"DEPTH24_STENCIL8_OES") ) { DEPTH24_STENCIL8_OES=inValue.Cast< int >(); return inValue; }
		break;
	case 21:
		if (HX_FIELD_EQ(inName,"DEPTH_COMPONENT16_OES") ) { DEPTH_COMPONENT16_OES=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"DEPTH_COMPONENT24_OES") ) { DEPTH_COMPONENT24_OES=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"DEPTH_COMPONENT32_OES") ) { DEPTH_COMPONENT32_OES=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"LUMINANCE4_ALPHA4_OES") ) { LUMINANCE4_ALPHA4_OES=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"LUMINANCE8_ALPHA8_OES") ) { LUMINANCE8_ALPHA8_OES=inValue.Cast< int >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void OES_required_internalformat_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("ALPHA8_OES","\xb8","\x0f","\x0b","\x7f"));
	outFields->push(HX_HCSTRING("DEPTH_COMPONENT16_OES","\xa4","\x4a","\x00","\xf6"));
	outFields->push(HX_HCSTRING("DEPTH_COMPONENT24_OES","\x01","\x7e","\x8e","\x35"));
	outFields->push(HX_HCSTRING("DEPTH24_STENCIL8_OES","\xb4","\x24","\xe8","\x3a"));
	outFields->push(HX_HCSTRING("DEPTH_COMPONENT32_OES","\x5e","\xb1","\x1c","\x75"));
	outFields->push(HX_HCSTRING("LUMINANCE4_ALPHA4_OES","\xf7","\xda","\x05","\x7f"));
	outFields->push(HX_HCSTRING("LUMINANCE8_ALPHA8_OES","\x77","\xe3","\x9d","\xd3"));
	outFields->push(HX_HCSTRING("LUMINANCE8_OES","\xde","\xd8","\xef","\x03"));
	outFields->push(HX_HCSTRING("RGBA4_OES","\x7e","\xf8","\xe9","\x53"));
	outFields->push(HX_HCSTRING("RGB5_A1_OES","\x45","\xb2","\xe7","\xb6"));
	outFields->push(HX_HCSTRING("RGB565_OES","\xe5","\x34","\x4b","\xce"));
	outFields->push(HX_HCSTRING("RGB8_OES","\xa9","\x3d","\xa2","\xbb"));
	outFields->push(HX_HCSTRING("RGBA8_OES","\x82","\x4a","\x84","\xa1"));
	outFields->push(HX_HCSTRING("RGB10_EXT","\x8e","\x5a","\x92","\xa0"));
	outFields->push(HX_HCSTRING("RGB10_A2_EXT","\xe6","\xb6","\x90","\xee"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsInt,(int)offsetof(OES_required_internalformat_obj,ALPHA8_OES),HX_HCSTRING("ALPHA8_OES","\xb8","\x0f","\x0b","\x7f")},
	{hx::fsInt,(int)offsetof(OES_required_internalformat_obj,DEPTH_COMPONENT16_OES),HX_HCSTRING("DEPTH_COMPONENT16_OES","\xa4","\x4a","\x00","\xf6")},
	{hx::fsInt,(int)offsetof(OES_required_internalformat_obj,DEPTH_COMPONENT24_OES),HX_HCSTRING("DEPTH_COMPONENT24_OES","\x01","\x7e","\x8e","\x35")},
	{hx::fsInt,(int)offsetof(OES_required_internalformat_obj,DEPTH24_STENCIL8_OES),HX_HCSTRING("DEPTH24_STENCIL8_OES","\xb4","\x24","\xe8","\x3a")},
	{hx::fsInt,(int)offsetof(OES_required_internalformat_obj,DEPTH_COMPONENT32_OES),HX_HCSTRING("DEPTH_COMPONENT32_OES","\x5e","\xb1","\x1c","\x75")},
	{hx::fsInt,(int)offsetof(OES_required_internalformat_obj,LUMINANCE4_ALPHA4_OES),HX_HCSTRING("LUMINANCE4_ALPHA4_OES","\xf7","\xda","\x05","\x7f")},
	{hx::fsInt,(int)offsetof(OES_required_internalformat_obj,LUMINANCE8_ALPHA8_OES),HX_HCSTRING("LUMINANCE8_ALPHA8_OES","\x77","\xe3","\x9d","\xd3")},
	{hx::fsInt,(int)offsetof(OES_required_internalformat_obj,LUMINANCE8_OES),HX_HCSTRING("LUMINANCE8_OES","\xde","\xd8","\xef","\x03")},
	{hx::fsInt,(int)offsetof(OES_required_internalformat_obj,RGBA4_OES),HX_HCSTRING("RGBA4_OES","\x7e","\xf8","\xe9","\x53")},
	{hx::fsInt,(int)offsetof(OES_required_internalformat_obj,RGB5_A1_OES),HX_HCSTRING("RGB5_A1_OES","\x45","\xb2","\xe7","\xb6")},
	{hx::fsInt,(int)offsetof(OES_required_internalformat_obj,RGB565_OES),HX_HCSTRING("RGB565_OES","\xe5","\x34","\x4b","\xce")},
	{hx::fsInt,(int)offsetof(OES_required_internalformat_obj,RGB8_OES),HX_HCSTRING("RGB8_OES","\xa9","\x3d","\xa2","\xbb")},
	{hx::fsInt,(int)offsetof(OES_required_internalformat_obj,RGBA8_OES),HX_HCSTRING("RGBA8_OES","\x82","\x4a","\x84","\xa1")},
	{hx::fsInt,(int)offsetof(OES_required_internalformat_obj,RGB10_EXT),HX_HCSTRING("RGB10_EXT","\x8e","\x5a","\x92","\xa0")},
	{hx::fsInt,(int)offsetof(OES_required_internalformat_obj,RGB10_A2_EXT),HX_HCSTRING("RGB10_A2_EXT","\xe6","\xb6","\x90","\xee")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo *sStaticStorageInfo = 0;
#endif

static ::String sMemberFields[] = {
	HX_HCSTRING("ALPHA8_OES","\xb8","\x0f","\x0b","\x7f"),
	HX_HCSTRING("DEPTH_COMPONENT16_OES","\xa4","\x4a","\x00","\xf6"),
	HX_HCSTRING("DEPTH_COMPONENT24_OES","\x01","\x7e","\x8e","\x35"),
	HX_HCSTRING("DEPTH24_STENCIL8_OES","\xb4","\x24","\xe8","\x3a"),
	HX_HCSTRING("DEPTH_COMPONENT32_OES","\x5e","\xb1","\x1c","\x75"),
	HX_HCSTRING("LUMINANCE4_ALPHA4_OES","\xf7","\xda","\x05","\x7f"),
	HX_HCSTRING("LUMINANCE8_ALPHA8_OES","\x77","\xe3","\x9d","\xd3"),
	HX_HCSTRING("LUMINANCE8_OES","\xde","\xd8","\xef","\x03"),
	HX_HCSTRING("RGBA4_OES","\x7e","\xf8","\xe9","\x53"),
	HX_HCSTRING("RGB5_A1_OES","\x45","\xb2","\xe7","\xb6"),
	HX_HCSTRING("RGB565_OES","\xe5","\x34","\x4b","\xce"),
	HX_HCSTRING("RGB8_OES","\xa9","\x3d","\xa2","\xbb"),
	HX_HCSTRING("RGBA8_OES","\x82","\x4a","\x84","\xa1"),
	HX_HCSTRING("RGB10_EXT","\x8e","\x5a","\x92","\xa0"),
	HX_HCSTRING("RGB10_A2_EXT","\xe6","\xb6","\x90","\xee"),
	::String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(OES_required_internalformat_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(OES_required_internalformat_obj::__mClass,"__mClass");
};

#endif

hx::Class OES_required_internalformat_obj::__mClass;

void OES_required_internalformat_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("lime.graphics.opengl.ext.OES_required_internalformat","\xf0","\x69","\x5d","\xba");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = hx::Class_obj::dupFunctions(sMemberFields);
	__mClass->mCanCast = hx::TCanCast< OES_required_internalformat_obj >;
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
