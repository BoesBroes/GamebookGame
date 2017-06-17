#include <hxcpp.h>

#ifndef INCLUDED_lime_graphics_opengl_ext_EXT_color_buffer_half_float
#include <lime/graphics/opengl/ext/EXT_color_buffer_half_float.h>
#endif
namespace lime{
namespace graphics{
namespace opengl{
namespace ext{

Void EXT_color_buffer_half_float_obj::__construct()
{
HX_STACK_FRAME("lime.graphics.opengl.ext.EXT_color_buffer_half_float","new",0x4f3c63e5,"lime.graphics.opengl.ext.EXT_color_buffer_half_float.new","lime/graphics/opengl/ext/EXT_color_buffer_half_float.hx",10,0x98cfc34d)
HX_STACK_THIS(this)
{
	HX_STACK_LINE(22)
	this->UNSIGNED_NORMALIZED_EXT = (int)35863;
	HX_STACK_LINE(21)
	this->FRAMEBUFFER_ATTACHMENT_COMPONENT_TYPE_EXT = (int)33297;
	HX_STACK_LINE(18)
	this->R16F_EXT = (int)33325;
	HX_STACK_LINE(17)
	this->RG16F_EXT = (int)33327;
	HX_STACK_LINE(14)
	this->RGB16F_EXT = (int)34843;
	HX_STACK_LINE(13)
	this->RGBA16F_EXT = (int)34842;
}
;
	return null();
}

//EXT_color_buffer_half_float_obj::~EXT_color_buffer_half_float_obj() { }

Dynamic EXT_color_buffer_half_float_obj::__CreateEmpty() { return  new EXT_color_buffer_half_float_obj; }
hx::ObjectPtr< EXT_color_buffer_half_float_obj > EXT_color_buffer_half_float_obj::__new()
{  hx::ObjectPtr< EXT_color_buffer_half_float_obj > _result_ = new EXT_color_buffer_half_float_obj();
	_result_->__construct();
	return _result_;}

Dynamic EXT_color_buffer_half_float_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< EXT_color_buffer_half_float_obj > _result_ = new EXT_color_buffer_half_float_obj();
	_result_->__construct();
	return _result_;}


EXT_color_buffer_half_float_obj::EXT_color_buffer_half_float_obj()
{
}

Dynamic EXT_color_buffer_half_float_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 8:
		if (HX_FIELD_EQ(inName,"R16F_EXT") ) { return R16F_EXT; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"RG16F_EXT") ) { return RG16F_EXT; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"RGB16F_EXT") ) { return RGB16F_EXT; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"RGBA16F_EXT") ) { return RGBA16F_EXT; }
		break;
	case 23:
		if (HX_FIELD_EQ(inName,"UNSIGNED_NORMALIZED_EXT") ) { return UNSIGNED_NORMALIZED_EXT; }
		break;
	case 41:
		if (HX_FIELD_EQ(inName,"FRAMEBUFFER_ATTACHMENT_COMPONENT_TYPE_EXT") ) { return FRAMEBUFFER_ATTACHMENT_COMPONENT_TYPE_EXT; }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic EXT_color_buffer_half_float_obj::__SetField(const ::String &inName,const Dynamic &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 8:
		if (HX_FIELD_EQ(inName,"R16F_EXT") ) { R16F_EXT=inValue.Cast< int >(); return inValue; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"RG16F_EXT") ) { RG16F_EXT=inValue.Cast< int >(); return inValue; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"RGB16F_EXT") ) { RGB16F_EXT=inValue.Cast< int >(); return inValue; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"RGBA16F_EXT") ) { RGBA16F_EXT=inValue.Cast< int >(); return inValue; }
		break;
	case 23:
		if (HX_FIELD_EQ(inName,"UNSIGNED_NORMALIZED_EXT") ) { UNSIGNED_NORMALIZED_EXT=inValue.Cast< int >(); return inValue; }
		break;
	case 41:
		if (HX_FIELD_EQ(inName,"FRAMEBUFFER_ATTACHMENT_COMPONENT_TYPE_EXT") ) { FRAMEBUFFER_ATTACHMENT_COMPONENT_TYPE_EXT=inValue.Cast< int >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void EXT_color_buffer_half_float_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("RGBA16F_EXT","\x8f","\x65","\xdf","\x9d"));
	outFields->push(HX_HCSTRING("RGB16F_EXT","\x76","\xb0","\xbd","\xf1"));
	outFields->push(HX_HCSTRING("RG16F_EXT","\xae","\x08","\x3f","\x88"));
	outFields->push(HX_HCSTRING("R16F_EXT","\xb1","\x4d","\x16","\x6c"));
	outFields->push(HX_HCSTRING("FRAMEBUFFER_ATTACHMENT_COMPONENT_TYPE_EXT","\x48","\x84","\xfe","\x43"));
	outFields->push(HX_HCSTRING("UNSIGNED_NORMALIZED_EXT","\x83","\x60","\xc1","\x33"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsInt,(int)offsetof(EXT_color_buffer_half_float_obj,RGBA16F_EXT),HX_HCSTRING("RGBA16F_EXT","\x8f","\x65","\xdf","\x9d")},
	{hx::fsInt,(int)offsetof(EXT_color_buffer_half_float_obj,RGB16F_EXT),HX_HCSTRING("RGB16F_EXT","\x76","\xb0","\xbd","\xf1")},
	{hx::fsInt,(int)offsetof(EXT_color_buffer_half_float_obj,RG16F_EXT),HX_HCSTRING("RG16F_EXT","\xae","\x08","\x3f","\x88")},
	{hx::fsInt,(int)offsetof(EXT_color_buffer_half_float_obj,R16F_EXT),HX_HCSTRING("R16F_EXT","\xb1","\x4d","\x16","\x6c")},
	{hx::fsInt,(int)offsetof(EXT_color_buffer_half_float_obj,FRAMEBUFFER_ATTACHMENT_COMPONENT_TYPE_EXT),HX_HCSTRING("FRAMEBUFFER_ATTACHMENT_COMPONENT_TYPE_EXT","\x48","\x84","\xfe","\x43")},
	{hx::fsInt,(int)offsetof(EXT_color_buffer_half_float_obj,UNSIGNED_NORMALIZED_EXT),HX_HCSTRING("UNSIGNED_NORMALIZED_EXT","\x83","\x60","\xc1","\x33")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo *sStaticStorageInfo = 0;
#endif

static ::String sMemberFields[] = {
	HX_HCSTRING("RGBA16F_EXT","\x8f","\x65","\xdf","\x9d"),
	HX_HCSTRING("RGB16F_EXT","\x76","\xb0","\xbd","\xf1"),
	HX_HCSTRING("RG16F_EXT","\xae","\x08","\x3f","\x88"),
	HX_HCSTRING("R16F_EXT","\xb1","\x4d","\x16","\x6c"),
	HX_HCSTRING("FRAMEBUFFER_ATTACHMENT_COMPONENT_TYPE_EXT","\x48","\x84","\xfe","\x43"),
	HX_HCSTRING("UNSIGNED_NORMALIZED_EXT","\x83","\x60","\xc1","\x33"),
	::String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(EXT_color_buffer_half_float_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(EXT_color_buffer_half_float_obj::__mClass,"__mClass");
};

#endif

hx::Class EXT_color_buffer_half_float_obj::__mClass;

void EXT_color_buffer_half_float_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("lime.graphics.opengl.ext.EXT_color_buffer_half_float","\x73","\x8d","\x21","\xd5");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = hx::Class_obj::dupFunctions(sMemberFields);
	__mClass->mCanCast = hx::TCanCast< EXT_color_buffer_half_float_obj >;
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
