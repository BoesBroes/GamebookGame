#include <hxcpp.h>

#ifndef INCLUDED_lime_graphics_opengl_ext_EXT_packed_depth_stencil
#include <lime/graphics/opengl/ext/EXT_packed_depth_stencil.h>
#endif
namespace lime{
namespace graphics{
namespace opengl{
namespace ext{

Void EXT_packed_depth_stencil_obj::__construct()
{
HX_STACK_FRAME("lime.graphics.opengl.ext.EXT_packed_depth_stencil","new",0x6fb5d70b,"lime.graphics.opengl.ext.EXT_packed_depth_stencil.new","lime/graphics/opengl/ext/EXT_packed_depth_stencil.hx",6,0xea41a563)
HX_STACK_THIS(this)
{
	HX_STACK_LINE(12)
	this->TEXTURE_STENCIL_SIZE_EXT = (int)35057;
	HX_STACK_LINE(11)
	this->DEPTH24_STENCIL8_EXT = (int)35056;
	HX_STACK_LINE(10)
	this->UNSIGNED_INT_24_8_EXT = (int)34042;
	HX_STACK_LINE(9)
	this->DEPTH_STENCIL_EXT = (int)34041;
}
;
	return null();
}

//EXT_packed_depth_stencil_obj::~EXT_packed_depth_stencil_obj() { }

Dynamic EXT_packed_depth_stencil_obj::__CreateEmpty() { return  new EXT_packed_depth_stencil_obj; }
hx::ObjectPtr< EXT_packed_depth_stencil_obj > EXT_packed_depth_stencil_obj::__new()
{  hx::ObjectPtr< EXT_packed_depth_stencil_obj > _result_ = new EXT_packed_depth_stencil_obj();
	_result_->__construct();
	return _result_;}

Dynamic EXT_packed_depth_stencil_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< EXT_packed_depth_stencil_obj > _result_ = new EXT_packed_depth_stencil_obj();
	_result_->__construct();
	return _result_;}


EXT_packed_depth_stencil_obj::EXT_packed_depth_stencil_obj()
{
}

Dynamic EXT_packed_depth_stencil_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 17:
		if (HX_FIELD_EQ(inName,"DEPTH_STENCIL_EXT") ) { return DEPTH_STENCIL_EXT; }
		break;
	case 20:
		if (HX_FIELD_EQ(inName,"DEPTH24_STENCIL8_EXT") ) { return DEPTH24_STENCIL8_EXT; }
		break;
	case 21:
		if (HX_FIELD_EQ(inName,"UNSIGNED_INT_24_8_EXT") ) { return UNSIGNED_INT_24_8_EXT; }
		break;
	case 24:
		if (HX_FIELD_EQ(inName,"TEXTURE_STENCIL_SIZE_EXT") ) { return TEXTURE_STENCIL_SIZE_EXT; }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic EXT_packed_depth_stencil_obj::__SetField(const ::String &inName,const Dynamic &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 17:
		if (HX_FIELD_EQ(inName,"DEPTH_STENCIL_EXT") ) { DEPTH_STENCIL_EXT=inValue.Cast< int >(); return inValue; }
		break;
	case 20:
		if (HX_FIELD_EQ(inName,"DEPTH24_STENCIL8_EXT") ) { DEPTH24_STENCIL8_EXT=inValue.Cast< int >(); return inValue; }
		break;
	case 21:
		if (HX_FIELD_EQ(inName,"UNSIGNED_INT_24_8_EXT") ) { UNSIGNED_INT_24_8_EXT=inValue.Cast< int >(); return inValue; }
		break;
	case 24:
		if (HX_FIELD_EQ(inName,"TEXTURE_STENCIL_SIZE_EXT") ) { TEXTURE_STENCIL_SIZE_EXT=inValue.Cast< int >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void EXT_packed_depth_stencil_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("DEPTH_STENCIL_EXT","\xc2","\xbc","\x08","\x29"));
	outFields->push(HX_HCSTRING("UNSIGNED_INT_24_8_EXT","\xb7","\xc3","\xd4","\xcf"));
	outFields->push(HX_HCSTRING("DEPTH24_STENCIL8_EXT","\xb8","\x9e","\xe0","\x3a"));
	outFields->push(HX_HCSTRING("TEXTURE_STENCIL_SIZE_EXT","\x0a","\xe4","\x57","\xe3"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsInt,(int)offsetof(EXT_packed_depth_stencil_obj,DEPTH_STENCIL_EXT),HX_HCSTRING("DEPTH_STENCIL_EXT","\xc2","\xbc","\x08","\x29")},
	{hx::fsInt,(int)offsetof(EXT_packed_depth_stencil_obj,UNSIGNED_INT_24_8_EXT),HX_HCSTRING("UNSIGNED_INT_24_8_EXT","\xb7","\xc3","\xd4","\xcf")},
	{hx::fsInt,(int)offsetof(EXT_packed_depth_stencil_obj,DEPTH24_STENCIL8_EXT),HX_HCSTRING("DEPTH24_STENCIL8_EXT","\xb8","\x9e","\xe0","\x3a")},
	{hx::fsInt,(int)offsetof(EXT_packed_depth_stencil_obj,TEXTURE_STENCIL_SIZE_EXT),HX_HCSTRING("TEXTURE_STENCIL_SIZE_EXT","\x0a","\xe4","\x57","\xe3")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo *sStaticStorageInfo = 0;
#endif

static ::String sMemberFields[] = {
	HX_HCSTRING("DEPTH_STENCIL_EXT","\xc2","\xbc","\x08","\x29"),
	HX_HCSTRING("UNSIGNED_INT_24_8_EXT","\xb7","\xc3","\xd4","\xcf"),
	HX_HCSTRING("DEPTH24_STENCIL8_EXT","\xb8","\x9e","\xe0","\x3a"),
	HX_HCSTRING("TEXTURE_STENCIL_SIZE_EXT","\x0a","\xe4","\x57","\xe3"),
	::String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(EXT_packed_depth_stencil_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(EXT_packed_depth_stencil_obj::__mClass,"__mClass");
};

#endif

hx::Class EXT_packed_depth_stencil_obj::__mClass;

void EXT_packed_depth_stencil_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("lime.graphics.opengl.ext.EXT_packed_depth_stencil","\x99","\xf5","\x8c","\xd6");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = hx::Class_obj::dupFunctions(sMemberFields);
	__mClass->mCanCast = hx::TCanCast< EXT_packed_depth_stencil_obj >;
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
