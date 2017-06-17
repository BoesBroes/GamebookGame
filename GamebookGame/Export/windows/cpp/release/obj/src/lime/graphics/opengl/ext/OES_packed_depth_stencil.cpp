#include <hxcpp.h>

#ifndef INCLUDED_lime_graphics_opengl_ext_OES_packed_depth_stencil
#include <lime/graphics/opengl/ext/OES_packed_depth_stencil.h>
#endif
namespace lime{
namespace graphics{
namespace opengl{
namespace ext{

Void OES_packed_depth_stencil_obj::__construct()
{
HX_STACK_FRAME("lime.graphics.opengl.ext.OES_packed_depth_stencil","new",0xc0eff98f,"lime.graphics.opengl.ext.OES_packed_depth_stencil.new","lime/graphics/opengl/ext/OES_packed_depth_stencil.hx",6,0x2c0e3f5f)
HX_STACK_THIS(this)
{
	HX_STACK_LINE(11)
	this->DEPTH24_STENCIL8_OES = (int)35056;
	HX_STACK_LINE(10)
	this->UNSIGNED_INT_24_8_OES = (int)34042;
	HX_STACK_LINE(9)
	this->DEPTH_STENCIL_OES = (int)34041;
}
;
	return null();
}

//OES_packed_depth_stencil_obj::~OES_packed_depth_stencil_obj() { }

Dynamic OES_packed_depth_stencil_obj::__CreateEmpty() { return  new OES_packed_depth_stencil_obj; }
hx::ObjectPtr< OES_packed_depth_stencil_obj > OES_packed_depth_stencil_obj::__new()
{  hx::ObjectPtr< OES_packed_depth_stencil_obj > _result_ = new OES_packed_depth_stencil_obj();
	_result_->__construct();
	return _result_;}

Dynamic OES_packed_depth_stencil_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< OES_packed_depth_stencil_obj > _result_ = new OES_packed_depth_stencil_obj();
	_result_->__construct();
	return _result_;}


OES_packed_depth_stencil_obj::OES_packed_depth_stencil_obj()
{
}

Dynamic OES_packed_depth_stencil_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 17:
		if (HX_FIELD_EQ(inName,"DEPTH_STENCIL_OES") ) { return DEPTH_STENCIL_OES; }
		break;
	case 20:
		if (HX_FIELD_EQ(inName,"DEPTH24_STENCIL8_OES") ) { return DEPTH24_STENCIL8_OES; }
		break;
	case 21:
		if (HX_FIELD_EQ(inName,"UNSIGNED_INT_24_8_OES") ) { return UNSIGNED_INT_24_8_OES; }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic OES_packed_depth_stencil_obj::__SetField(const ::String &inName,const Dynamic &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 17:
		if (HX_FIELD_EQ(inName,"DEPTH_STENCIL_OES") ) { DEPTH_STENCIL_OES=inValue.Cast< int >(); return inValue; }
		break;
	case 20:
		if (HX_FIELD_EQ(inName,"DEPTH24_STENCIL8_OES") ) { DEPTH24_STENCIL8_OES=inValue.Cast< int >(); return inValue; }
		break;
	case 21:
		if (HX_FIELD_EQ(inName,"UNSIGNED_INT_24_8_OES") ) { UNSIGNED_INT_24_8_OES=inValue.Cast< int >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void OES_packed_depth_stencil_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("DEPTH_STENCIL_OES","\xbe","\x42","\x10","\x29"));
	outFields->push(HX_HCSTRING("UNSIGNED_INT_24_8_OES","\xb3","\x49","\xdc","\xcf"));
	outFields->push(HX_HCSTRING("DEPTH24_STENCIL8_OES","\xb4","\x24","\xe8","\x3a"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsInt,(int)offsetof(OES_packed_depth_stencil_obj,DEPTH_STENCIL_OES),HX_HCSTRING("DEPTH_STENCIL_OES","\xbe","\x42","\x10","\x29")},
	{hx::fsInt,(int)offsetof(OES_packed_depth_stencil_obj,UNSIGNED_INT_24_8_OES),HX_HCSTRING("UNSIGNED_INT_24_8_OES","\xb3","\x49","\xdc","\xcf")},
	{hx::fsInt,(int)offsetof(OES_packed_depth_stencil_obj,DEPTH24_STENCIL8_OES),HX_HCSTRING("DEPTH24_STENCIL8_OES","\xb4","\x24","\xe8","\x3a")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo *sStaticStorageInfo = 0;
#endif

static ::String sMemberFields[] = {
	HX_HCSTRING("DEPTH_STENCIL_OES","\xbe","\x42","\x10","\x29"),
	HX_HCSTRING("UNSIGNED_INT_24_8_OES","\xb3","\x49","\xdc","\xcf"),
	HX_HCSTRING("DEPTH24_STENCIL8_OES","\xb4","\x24","\xe8","\x3a"),
	::String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(OES_packed_depth_stencil_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(OES_packed_depth_stencil_obj::__mClass,"__mClass");
};

#endif

hx::Class OES_packed_depth_stencil_obj::__mClass;

void OES_packed_depth_stencil_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("lime.graphics.opengl.ext.OES_packed_depth_stencil","\x1d","\x86","\xda","\xc8");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = hx::Class_obj::dupFunctions(sMemberFields);
	__mClass->mCanCast = hx::TCanCast< OES_packed_depth_stencil_obj >;
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
