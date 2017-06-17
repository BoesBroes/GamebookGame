#include <hxcpp.h>

#ifndef INCLUDED_lime_graphics_opengl_ext_OES_depth32
#include <lime/graphics/opengl/ext/OES_depth32.h>
#endif
namespace lime{
namespace graphics{
namespace opengl{
namespace ext{

Void OES_depth32_obj::__construct()
{
HX_STACK_FRAME("lime.graphics.opengl.ext.OES_depth32","new",0xb9bbf1f0,"lime.graphics.opengl.ext.OES_depth32.new","lime/graphics/opengl/ext/OES_depth32.hx",6,0xef831ba2)
HX_STACK_THIS(this)
{
	HX_STACK_LINE(9)
	this->DEPTH_COMPONENT32_OES = (int)33191;
}
;
	return null();
}

//OES_depth32_obj::~OES_depth32_obj() { }

Dynamic OES_depth32_obj::__CreateEmpty() { return  new OES_depth32_obj; }
hx::ObjectPtr< OES_depth32_obj > OES_depth32_obj::__new()
{  hx::ObjectPtr< OES_depth32_obj > _result_ = new OES_depth32_obj();
	_result_->__construct();
	return _result_;}

Dynamic OES_depth32_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< OES_depth32_obj > _result_ = new OES_depth32_obj();
	_result_->__construct();
	return _result_;}


OES_depth32_obj::OES_depth32_obj()
{
}

Dynamic OES_depth32_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 21:
		if (HX_FIELD_EQ(inName,"DEPTH_COMPONENT32_OES") ) { return DEPTH_COMPONENT32_OES; }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic OES_depth32_obj::__SetField(const ::String &inName,const Dynamic &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 21:
		if (HX_FIELD_EQ(inName,"DEPTH_COMPONENT32_OES") ) { DEPTH_COMPONENT32_OES=inValue.Cast< int >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void OES_depth32_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("DEPTH_COMPONENT32_OES","\x5e","\xb1","\x1c","\x75"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsInt,(int)offsetof(OES_depth32_obj,DEPTH_COMPONENT32_OES),HX_HCSTRING("DEPTH_COMPONENT32_OES","\x5e","\xb1","\x1c","\x75")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo *sStaticStorageInfo = 0;
#endif

static ::String sMemberFields[] = {
	HX_HCSTRING("DEPTH_COMPONENT32_OES","\x5e","\xb1","\x1c","\x75"),
	::String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(OES_depth32_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(OES_depth32_obj::__mClass,"__mClass");
};

#endif

hx::Class OES_depth32_obj::__mClass;

void OES_depth32_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("lime.graphics.opengl.ext.OES_depth32","\xfe","\x79","\x08","\xbb");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = hx::Class_obj::dupFunctions(sMemberFields);
	__mClass->mCanCast = hx::TCanCast< OES_depth32_obj >;
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
