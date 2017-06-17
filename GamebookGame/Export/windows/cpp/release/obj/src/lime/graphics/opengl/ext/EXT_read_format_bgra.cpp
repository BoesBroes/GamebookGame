#include <hxcpp.h>

#ifndef INCLUDED_lime_graphics_opengl_ext_EXT_read_format_bgra
#include <lime/graphics/opengl/ext/EXT_read_format_bgra.h>
#endif
namespace lime{
namespace graphics{
namespace opengl{
namespace ext{

Void EXT_read_format_bgra_obj::__construct()
{
HX_STACK_FRAME("lime.graphics.opengl.ext.EXT_read_format_bgra","new",0x02c02b25,"lime.graphics.opengl.ext.EXT_read_format_bgra.new","lime/graphics/opengl/ext/EXT_read_format_bgra.hx",6,0x26ddab89)
HX_STACK_THIS(this)
{
	HX_STACK_LINE(11)
	this->UNSIGNED_SHORT_1_5_5_5_REV_EXT = (int)33638;
	HX_STACK_LINE(10)
	this->UNSIGNED_SHORT_4_4_4_4_REV_EXT = (int)33637;
	HX_STACK_LINE(9)
	this->BGRA_EXT = (int)32993;
}
;
	return null();
}

//EXT_read_format_bgra_obj::~EXT_read_format_bgra_obj() { }

Dynamic EXT_read_format_bgra_obj::__CreateEmpty() { return  new EXT_read_format_bgra_obj; }
hx::ObjectPtr< EXT_read_format_bgra_obj > EXT_read_format_bgra_obj::__new()
{  hx::ObjectPtr< EXT_read_format_bgra_obj > _result_ = new EXT_read_format_bgra_obj();
	_result_->__construct();
	return _result_;}

Dynamic EXT_read_format_bgra_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< EXT_read_format_bgra_obj > _result_ = new EXT_read_format_bgra_obj();
	_result_->__construct();
	return _result_;}


EXT_read_format_bgra_obj::EXT_read_format_bgra_obj()
{
}

Dynamic EXT_read_format_bgra_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 8:
		if (HX_FIELD_EQ(inName,"BGRA_EXT") ) { return BGRA_EXT; }
		break;
	case 30:
		if (HX_FIELD_EQ(inName,"UNSIGNED_SHORT_4_4_4_4_REV_EXT") ) { return UNSIGNED_SHORT_4_4_4_4_REV_EXT; }
		if (HX_FIELD_EQ(inName,"UNSIGNED_SHORT_1_5_5_5_REV_EXT") ) { return UNSIGNED_SHORT_1_5_5_5_REV_EXT; }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic EXT_read_format_bgra_obj::__SetField(const ::String &inName,const Dynamic &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 8:
		if (HX_FIELD_EQ(inName,"BGRA_EXT") ) { BGRA_EXT=inValue.Cast< int >(); return inValue; }
		break;
	case 30:
		if (HX_FIELD_EQ(inName,"UNSIGNED_SHORT_4_4_4_4_REV_EXT") ) { UNSIGNED_SHORT_4_4_4_4_REV_EXT=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"UNSIGNED_SHORT_1_5_5_5_REV_EXT") ) { UNSIGNED_SHORT_1_5_5_5_REV_EXT=inValue.Cast< int >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void EXT_read_format_bgra_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("BGRA_EXT","\x36","\x94","\xc4","\xbc"));
	outFields->push(HX_HCSTRING("UNSIGNED_SHORT_4_4_4_4_REV_EXT","\x6c","\x63","\x94","\x9a"));
	outFields->push(HX_HCSTRING("UNSIGNED_SHORT_1_5_5_5_REV_EXT","\xec","\xd5","\x31","\x75"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsInt,(int)offsetof(EXT_read_format_bgra_obj,BGRA_EXT),HX_HCSTRING("BGRA_EXT","\x36","\x94","\xc4","\xbc")},
	{hx::fsInt,(int)offsetof(EXT_read_format_bgra_obj,UNSIGNED_SHORT_4_4_4_4_REV_EXT),HX_HCSTRING("UNSIGNED_SHORT_4_4_4_4_REV_EXT","\x6c","\x63","\x94","\x9a")},
	{hx::fsInt,(int)offsetof(EXT_read_format_bgra_obj,UNSIGNED_SHORT_1_5_5_5_REV_EXT),HX_HCSTRING("UNSIGNED_SHORT_1_5_5_5_REV_EXT","\xec","\xd5","\x31","\x75")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo *sStaticStorageInfo = 0;
#endif

static ::String sMemberFields[] = {
	HX_HCSTRING("BGRA_EXT","\x36","\x94","\xc4","\xbc"),
	HX_HCSTRING("UNSIGNED_SHORT_4_4_4_4_REV_EXT","\x6c","\x63","\x94","\x9a"),
	HX_HCSTRING("UNSIGNED_SHORT_1_5_5_5_REV_EXT","\xec","\xd5","\x31","\x75"),
	::String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(EXT_read_format_bgra_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(EXT_read_format_bgra_obj::__mClass,"__mClass");
};

#endif

hx::Class EXT_read_format_bgra_obj::__mClass;

void EXT_read_format_bgra_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("lime.graphics.opengl.ext.EXT_read_format_bgra","\xb3","\xb4","\xe0","\xc2");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = hx::Class_obj::dupFunctions(sMemberFields);
	__mClass->mCanCast = hx::TCanCast< EXT_read_format_bgra_obj >;
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
