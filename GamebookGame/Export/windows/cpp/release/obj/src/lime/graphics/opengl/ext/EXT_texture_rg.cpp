#include <hxcpp.h>

#ifndef INCLUDED_lime_graphics_opengl_ext_EXT_texture_rg
#include <lime/graphics/opengl/ext/EXT_texture_rg.h>
#endif
namespace lime{
namespace graphics{
namespace opengl{
namespace ext{

Void EXT_texture_rg_obj::__construct()
{
HX_STACK_FRAME("lime.graphics.opengl.ext.EXT_texture_rg","new",0x508d2dab,"lime.graphics.opengl.ext.EXT_texture_rg.new","lime/graphics/opengl/ext/EXT_texture_rg.hx",6,0xac103143)
HX_STACK_THIS(this)
{
	HX_STACK_LINE(12)
	this->RG8_EXT = (int)33323;
	HX_STACK_LINE(11)
	this->R8_EXT = (int)33321;
	HX_STACK_LINE(10)
	this->RG_EXT = (int)33319;
	HX_STACK_LINE(9)
	this->RED_EXT = (int)6403;
}
;
	return null();
}

//EXT_texture_rg_obj::~EXT_texture_rg_obj() { }

Dynamic EXT_texture_rg_obj::__CreateEmpty() { return  new EXT_texture_rg_obj; }
hx::ObjectPtr< EXT_texture_rg_obj > EXT_texture_rg_obj::__new()
{  hx::ObjectPtr< EXT_texture_rg_obj > _result_ = new EXT_texture_rg_obj();
	_result_->__construct();
	return _result_;}

Dynamic EXT_texture_rg_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< EXT_texture_rg_obj > _result_ = new EXT_texture_rg_obj();
	_result_->__construct();
	return _result_;}


EXT_texture_rg_obj::EXT_texture_rg_obj()
{
}

Dynamic EXT_texture_rg_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 6:
		if (HX_FIELD_EQ(inName,"RG_EXT") ) { return RG_EXT; }
		if (HX_FIELD_EQ(inName,"R8_EXT") ) { return R8_EXT; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"RED_EXT") ) { return RED_EXT; }
		if (HX_FIELD_EQ(inName,"RG8_EXT") ) { return RG8_EXT; }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic EXT_texture_rg_obj::__SetField(const ::String &inName,const Dynamic &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 6:
		if (HX_FIELD_EQ(inName,"RG_EXT") ) { RG_EXT=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"R8_EXT") ) { R8_EXT=inValue.Cast< int >(); return inValue; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"RED_EXT") ) { RED_EXT=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"RG8_EXT") ) { RG8_EXT=inValue.Cast< int >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void EXT_texture_rg_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("RED_EXT","\x33","\x4f","\xbf","\x4e"));
	outFields->push(HX_HCSTRING("RG_EXT","\xb7","\xb3","\xb6","\xe9"));
	outFields->push(HX_HCSTRING("R8_EXT","\x28","\x00","\xb4","\x46"));
	outFields->push(HX_HCSTRING("RG8_EXT","\xe5","\x11","\xa7","\x32"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsInt,(int)offsetof(EXT_texture_rg_obj,RED_EXT),HX_HCSTRING("RED_EXT","\x33","\x4f","\xbf","\x4e")},
	{hx::fsInt,(int)offsetof(EXT_texture_rg_obj,RG_EXT),HX_HCSTRING("RG_EXT","\xb7","\xb3","\xb6","\xe9")},
	{hx::fsInt,(int)offsetof(EXT_texture_rg_obj,R8_EXT),HX_HCSTRING("R8_EXT","\x28","\x00","\xb4","\x46")},
	{hx::fsInt,(int)offsetof(EXT_texture_rg_obj,RG8_EXT),HX_HCSTRING("RG8_EXT","\xe5","\x11","\xa7","\x32")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo *sStaticStorageInfo = 0;
#endif

static ::String sMemberFields[] = {
	HX_HCSTRING("RED_EXT","\x33","\x4f","\xbf","\x4e"),
	HX_HCSTRING("RG_EXT","\xb7","\xb3","\xb6","\xe9"),
	HX_HCSTRING("R8_EXT","\x28","\x00","\xb4","\x46"),
	HX_HCSTRING("RG8_EXT","\xe5","\x11","\xa7","\x32"),
	::String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(EXT_texture_rg_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(EXT_texture_rg_obj::__mClass,"__mClass");
};

#endif

hx::Class EXT_texture_rg_obj::__mClass;

void EXT_texture_rg_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("lime.graphics.opengl.ext.EXT_texture_rg","\x39","\x7c","\x0c","\xba");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = hx::Class_obj::dupFunctions(sMemberFields);
	__mClass->mCanCast = hx::TCanCast< EXT_texture_rg_obj >;
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
