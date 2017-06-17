#include <hxcpp.h>

#ifndef INCLUDED_lime_graphics_opengl_ext_OES_rgb8_rgba8
#include <lime/graphics/opengl/ext/OES_rgb8_rgba8.h>
#endif
namespace lime{
namespace graphics{
namespace opengl{
namespace ext{

Void OES_rgb8_rgba8_obj::__construct()
{
HX_STACK_FRAME("lime.graphics.opengl.ext.OES_rgb8_rgba8","new",0x41961de6,"lime.graphics.opengl.ext.OES_rgb8_rgba8.new","lime/graphics/opengl/ext/OES_rgb8_rgba8.hx",7,0xbc116168)
HX_STACK_THIS(this)
{
	HX_STACK_LINE(11)
	this->RGBA8_OES = (int)32856;
	HX_STACK_LINE(10)
	this->RGB8_OES = (int)32849;
}
;
	return null();
}

//OES_rgb8_rgba8_obj::~OES_rgb8_rgba8_obj() { }

Dynamic OES_rgb8_rgba8_obj::__CreateEmpty() { return  new OES_rgb8_rgba8_obj; }
hx::ObjectPtr< OES_rgb8_rgba8_obj > OES_rgb8_rgba8_obj::__new()
{  hx::ObjectPtr< OES_rgb8_rgba8_obj > _result_ = new OES_rgb8_rgba8_obj();
	_result_->__construct();
	return _result_;}

Dynamic OES_rgb8_rgba8_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< OES_rgb8_rgba8_obj > _result_ = new OES_rgb8_rgba8_obj();
	_result_->__construct();
	return _result_;}


OES_rgb8_rgba8_obj::OES_rgb8_rgba8_obj()
{
}

Dynamic OES_rgb8_rgba8_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 8:
		if (HX_FIELD_EQ(inName,"RGB8_OES") ) { return RGB8_OES; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"RGBA8_OES") ) { return RGBA8_OES; }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic OES_rgb8_rgba8_obj::__SetField(const ::String &inName,const Dynamic &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 8:
		if (HX_FIELD_EQ(inName,"RGB8_OES") ) { RGB8_OES=inValue.Cast< int >(); return inValue; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"RGBA8_OES") ) { RGBA8_OES=inValue.Cast< int >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void OES_rgb8_rgba8_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("RGB8_OES","\xa9","\x3d","\xa2","\xbb"));
	outFields->push(HX_HCSTRING("RGBA8_OES","\x82","\x4a","\x84","\xa1"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsInt,(int)offsetof(OES_rgb8_rgba8_obj,RGB8_OES),HX_HCSTRING("RGB8_OES","\xa9","\x3d","\xa2","\xbb")},
	{hx::fsInt,(int)offsetof(OES_rgb8_rgba8_obj,RGBA8_OES),HX_HCSTRING("RGBA8_OES","\x82","\x4a","\x84","\xa1")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo *sStaticStorageInfo = 0;
#endif

static ::String sMemberFields[] = {
	HX_HCSTRING("RGB8_OES","\xa9","\x3d","\xa2","\xbb"),
	HX_HCSTRING("RGBA8_OES","\x82","\x4a","\x84","\xa1"),
	::String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(OES_rgb8_rgba8_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(OES_rgb8_rgba8_obj::__mClass,"__mClass");
};

#endif

hx::Class OES_rgb8_rgba8_obj::__mClass;

void OES_rgb8_rgba8_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("lime.graphics.opengl.ext.OES_rgb8_rgba8","\xf4","\xf2","\x33","\x97");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = hx::Class_obj::dupFunctions(sMemberFields);
	__mClass->mCanCast = hx::TCanCast< OES_rgb8_rgba8_obj >;
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
