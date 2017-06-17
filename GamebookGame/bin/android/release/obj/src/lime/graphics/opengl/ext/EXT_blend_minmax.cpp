#include <hxcpp.h>

#ifndef INCLUDED_lime_graphics_opengl_ext_EXT_blend_minmax
#include <lime/graphics/opengl/ext/EXT_blend_minmax.h>
#endif
namespace lime{
namespace graphics{
namespace opengl{
namespace ext{

Void EXT_blend_minmax_obj::__construct()
{
HX_STACK_FRAME("lime.graphics.opengl.ext.EXT_blend_minmax","new",0xd4a71f12,"lime.graphics.opengl.ext.EXT_blend_minmax.new","lime/graphics/opengl/ext/EXT_blend_minmax.hx",10,0x3d88ad3c)
HX_STACK_THIS(this)
{
	HX_STACK_LINE(14)
	this->MAX_EXT = (int)32776;
	HX_STACK_LINE(13)
	this->MIN_EXT = (int)32775;
}
;
	return null();
}

//EXT_blend_minmax_obj::~EXT_blend_minmax_obj() { }

Dynamic EXT_blend_minmax_obj::__CreateEmpty() { return  new EXT_blend_minmax_obj; }
hx::ObjectPtr< EXT_blend_minmax_obj > EXT_blend_minmax_obj::__new()
{  hx::ObjectPtr< EXT_blend_minmax_obj > _result_ = new EXT_blend_minmax_obj();
	_result_->__construct();
	return _result_;}

Dynamic EXT_blend_minmax_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< EXT_blend_minmax_obj > _result_ = new EXT_blend_minmax_obj();
	_result_->__construct();
	return _result_;}


EXT_blend_minmax_obj::EXT_blend_minmax_obj()
{
}

Dynamic EXT_blend_minmax_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 7:
		if (HX_FIELD_EQ(inName,"MIN_EXT") ) { return MIN_EXT; }
		if (HX_FIELD_EQ(inName,"MAX_EXT") ) { return MAX_EXT; }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic EXT_blend_minmax_obj::__SetField(const ::String &inName,const Dynamic &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 7:
		if (HX_FIELD_EQ(inName,"MIN_EXT") ) { MIN_EXT=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"MAX_EXT") ) { MAX_EXT=inValue.Cast< int >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void EXT_blend_minmax_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("MIN_EXT","\xf4","\x3b","\x43","\xda"));
	outFields->push(HX_HCSTRING("MAX_EXT","\x06","\x26","\x6a","\x69"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsInt,(int)offsetof(EXT_blend_minmax_obj,MIN_EXT),HX_HCSTRING("MIN_EXT","\xf4","\x3b","\x43","\xda")},
	{hx::fsInt,(int)offsetof(EXT_blend_minmax_obj,MAX_EXT),HX_HCSTRING("MAX_EXT","\x06","\x26","\x6a","\x69")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo *sStaticStorageInfo = 0;
#endif

static ::String sMemberFields[] = {
	HX_HCSTRING("MIN_EXT","\xf4","\x3b","\x43","\xda"),
	HX_HCSTRING("MAX_EXT","\x06","\x26","\x6a","\x69"),
	::String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(EXT_blend_minmax_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(EXT_blend_minmax_obj::__mClass,"__mClass");
};

#endif

hx::Class EXT_blend_minmax_obj::__mClass;

void EXT_blend_minmax_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("lime.graphics.opengl.ext.EXT_blend_minmax","\x20","\xee","\x89","\x72");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = hx::Class_obj::dupFunctions(sMemberFields);
	__mClass->mCanCast = hx::TCanCast< EXT_blend_minmax_obj >;
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
