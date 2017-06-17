#include <hxcpp.h>

#ifndef INCLUDED_lime_graphics_opengl_ext_IMG_read_format
#include <lime/graphics/opengl/ext/IMG_read_format.h>
#endif
namespace lime{
namespace graphics{
namespace opengl{
namespace ext{

Void IMG_read_format_obj::__construct()
{
HX_STACK_FRAME("lime.graphics.opengl.ext.IMG_read_format","new",0x9790c434,"lime.graphics.opengl.ext.IMG_read_format.new","lime/graphics/opengl/ext/IMG_read_format.hx",6,0x948bf6de)
HX_STACK_THIS(this)
{
	HX_STACK_LINE(10)
	this->UNSIGNED_SHORT_4_4_4_4_REV_IMG = (int)33637;
	HX_STACK_LINE(9)
	this->BGRA_IMG = (int)32993;
}
;
	return null();
}

//IMG_read_format_obj::~IMG_read_format_obj() { }

Dynamic IMG_read_format_obj::__CreateEmpty() { return  new IMG_read_format_obj; }
hx::ObjectPtr< IMG_read_format_obj > IMG_read_format_obj::__new()
{  hx::ObjectPtr< IMG_read_format_obj > _result_ = new IMG_read_format_obj();
	_result_->__construct();
	return _result_;}

Dynamic IMG_read_format_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< IMG_read_format_obj > _result_ = new IMG_read_format_obj();
	_result_->__construct();
	return _result_;}


IMG_read_format_obj::IMG_read_format_obj()
{
}

Dynamic IMG_read_format_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 8:
		if (HX_FIELD_EQ(inName,"BGRA_IMG") ) { return BGRA_IMG; }
		break;
	case 30:
		if (HX_FIELD_EQ(inName,"UNSIGNED_SHORT_4_4_4_4_REV_IMG") ) { return UNSIGNED_SHORT_4_4_4_4_REV_IMG; }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic IMG_read_format_obj::__SetField(const ::String &inName,const Dynamic &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 8:
		if (HX_FIELD_EQ(inName,"BGRA_IMG") ) { BGRA_IMG=inValue.Cast< int >(); return inValue; }
		break;
	case 30:
		if (HX_FIELD_EQ(inName,"UNSIGNED_SHORT_4_4_4_4_REV_IMG") ) { UNSIGNED_SHORT_4_4_4_4_REV_IMG=inValue.Cast< int >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void IMG_read_format_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("BGRA_IMG","\x98","\x93","\xc7","\xbc"));
	outFields->push(HX_HCSTRING("UNSIGNED_SHORT_4_4_4_4_REV_IMG","\xce","\x62","\x97","\x9a"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsInt,(int)offsetof(IMG_read_format_obj,BGRA_IMG),HX_HCSTRING("BGRA_IMG","\x98","\x93","\xc7","\xbc")},
	{hx::fsInt,(int)offsetof(IMG_read_format_obj,UNSIGNED_SHORT_4_4_4_4_REV_IMG),HX_HCSTRING("UNSIGNED_SHORT_4_4_4_4_REV_IMG","\xce","\x62","\x97","\x9a")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo *sStaticStorageInfo = 0;
#endif

static ::String sMemberFields[] = {
	HX_HCSTRING("BGRA_IMG","\x98","\x93","\xc7","\xbc"),
	HX_HCSTRING("UNSIGNED_SHORT_4_4_4_4_REV_IMG","\xce","\x62","\x97","\x9a"),
	::String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(IMG_read_format_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(IMG_read_format_obj::__mClass,"__mClass");
};

#endif

hx::Class IMG_read_format_obj::__mClass;

void IMG_read_format_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("lime.graphics.opengl.ext.IMG_read_format","\x42","\xda","\x6d","\x63");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = hx::Class_obj::dupFunctions(sMemberFields);
	__mClass->mCanCast = hx::TCanCast< IMG_read_format_obj >;
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
