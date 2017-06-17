#include <hxcpp.h>

#ifndef INCLUDED_lime_graphics_opengl_ext_EXT_robustness
#include <lime/graphics/opengl/ext/EXT_robustness.h>
#endif
namespace lime{
namespace graphics{
namespace opengl{
namespace ext{

Void EXT_robustness_obj::__construct()
{
HX_STACK_FRAME("lime.graphics.opengl.ext.EXT_robustness","new",0xcfe16dda,"lime.graphics.opengl.ext.EXT_robustness.new","lime/graphics/opengl/ext/EXT_robustness.hx",6,0xa3734bf4)
HX_STACK_THIS(this)
{
	HX_STACK_LINE(15)
	this->NO_RESET_NOTIFICATION_EXT = (int)33377;
	HX_STACK_LINE(14)
	this->LOSE_CONTEXT_ON_RESET_EXT = (int)33362;
	HX_STACK_LINE(13)
	this->RESET_NOTIFICATION_STRATEGY_EXT = (int)33366;
	HX_STACK_LINE(12)
	this->CONTEXT_ROBUST_ACCESS_EXT = (int)37107;
	HX_STACK_LINE(11)
	this->UNKNOWN_CONTEXT_RESET_EXT = (int)33365;
	HX_STACK_LINE(10)
	this->INNOCENT_CONTEXT_RESET_EXT = (int)33364;
	HX_STACK_LINE(9)
	this->GUILTY_CONTEXT_RESET_EXT = (int)33363;
}
;
	return null();
}

//EXT_robustness_obj::~EXT_robustness_obj() { }

Dynamic EXT_robustness_obj::__CreateEmpty() { return  new EXT_robustness_obj; }
hx::ObjectPtr< EXT_robustness_obj > EXT_robustness_obj::__new()
{  hx::ObjectPtr< EXT_robustness_obj > _result_ = new EXT_robustness_obj();
	_result_->__construct();
	return _result_;}

Dynamic EXT_robustness_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< EXT_robustness_obj > _result_ = new EXT_robustness_obj();
	_result_->__construct();
	return _result_;}


EXT_robustness_obj::EXT_robustness_obj()
{
}

Dynamic EXT_robustness_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 24:
		if (HX_FIELD_EQ(inName,"GUILTY_CONTEXT_RESET_EXT") ) { return GUILTY_CONTEXT_RESET_EXT; }
		break;
	case 25:
		if (HX_FIELD_EQ(inName,"UNKNOWN_CONTEXT_RESET_EXT") ) { return UNKNOWN_CONTEXT_RESET_EXT; }
		if (HX_FIELD_EQ(inName,"CONTEXT_ROBUST_ACCESS_EXT") ) { return CONTEXT_ROBUST_ACCESS_EXT; }
		if (HX_FIELD_EQ(inName,"LOSE_CONTEXT_ON_RESET_EXT") ) { return LOSE_CONTEXT_ON_RESET_EXT; }
		if (HX_FIELD_EQ(inName,"NO_RESET_NOTIFICATION_EXT") ) { return NO_RESET_NOTIFICATION_EXT; }
		break;
	case 26:
		if (HX_FIELD_EQ(inName,"INNOCENT_CONTEXT_RESET_EXT") ) { return INNOCENT_CONTEXT_RESET_EXT; }
		break;
	case 31:
		if (HX_FIELD_EQ(inName,"RESET_NOTIFICATION_STRATEGY_EXT") ) { return RESET_NOTIFICATION_STRATEGY_EXT; }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic EXT_robustness_obj::__SetField(const ::String &inName,const Dynamic &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 24:
		if (HX_FIELD_EQ(inName,"GUILTY_CONTEXT_RESET_EXT") ) { GUILTY_CONTEXT_RESET_EXT=inValue.Cast< int >(); return inValue; }
		break;
	case 25:
		if (HX_FIELD_EQ(inName,"UNKNOWN_CONTEXT_RESET_EXT") ) { UNKNOWN_CONTEXT_RESET_EXT=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"CONTEXT_ROBUST_ACCESS_EXT") ) { CONTEXT_ROBUST_ACCESS_EXT=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"LOSE_CONTEXT_ON_RESET_EXT") ) { LOSE_CONTEXT_ON_RESET_EXT=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"NO_RESET_NOTIFICATION_EXT") ) { NO_RESET_NOTIFICATION_EXT=inValue.Cast< int >(); return inValue; }
		break;
	case 26:
		if (HX_FIELD_EQ(inName,"INNOCENT_CONTEXT_RESET_EXT") ) { INNOCENT_CONTEXT_RESET_EXT=inValue.Cast< int >(); return inValue; }
		break;
	case 31:
		if (HX_FIELD_EQ(inName,"RESET_NOTIFICATION_STRATEGY_EXT") ) { RESET_NOTIFICATION_STRATEGY_EXT=inValue.Cast< int >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void EXT_robustness_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("GUILTY_CONTEXT_RESET_EXT","\x98","\x78","\xca","\x75"));
	outFields->push(HX_HCSTRING("INNOCENT_CONTEXT_RESET_EXT","\x10","\x1f","\x1e","\x90"));
	outFields->push(HX_HCSTRING("UNKNOWN_CONTEXT_RESET_EXT","\xac","\x0f","\x07","\x0f"));
	outFields->push(HX_HCSTRING("CONTEXT_ROBUST_ACCESS_EXT","\xc4","\xc8","\x9b","\xf5"));
	outFields->push(HX_HCSTRING("RESET_NOTIFICATION_STRATEGY_EXT","\xb9","\x66","\x23","\xcb"));
	outFields->push(HX_HCSTRING("LOSE_CONTEXT_ON_RESET_EXT","\xeb","\x3d","\xdb","\x68"));
	outFields->push(HX_HCSTRING("NO_RESET_NOTIFICATION_EXT","\x3b","\xc9","\xcb","\x58"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsInt,(int)offsetof(EXT_robustness_obj,GUILTY_CONTEXT_RESET_EXT),HX_HCSTRING("GUILTY_CONTEXT_RESET_EXT","\x98","\x78","\xca","\x75")},
	{hx::fsInt,(int)offsetof(EXT_robustness_obj,INNOCENT_CONTEXT_RESET_EXT),HX_HCSTRING("INNOCENT_CONTEXT_RESET_EXT","\x10","\x1f","\x1e","\x90")},
	{hx::fsInt,(int)offsetof(EXT_robustness_obj,UNKNOWN_CONTEXT_RESET_EXT),HX_HCSTRING("UNKNOWN_CONTEXT_RESET_EXT","\xac","\x0f","\x07","\x0f")},
	{hx::fsInt,(int)offsetof(EXT_robustness_obj,CONTEXT_ROBUST_ACCESS_EXT),HX_HCSTRING("CONTEXT_ROBUST_ACCESS_EXT","\xc4","\xc8","\x9b","\xf5")},
	{hx::fsInt,(int)offsetof(EXT_robustness_obj,RESET_NOTIFICATION_STRATEGY_EXT),HX_HCSTRING("RESET_NOTIFICATION_STRATEGY_EXT","\xb9","\x66","\x23","\xcb")},
	{hx::fsInt,(int)offsetof(EXT_robustness_obj,LOSE_CONTEXT_ON_RESET_EXT),HX_HCSTRING("LOSE_CONTEXT_ON_RESET_EXT","\xeb","\x3d","\xdb","\x68")},
	{hx::fsInt,(int)offsetof(EXT_robustness_obj,NO_RESET_NOTIFICATION_EXT),HX_HCSTRING("NO_RESET_NOTIFICATION_EXT","\x3b","\xc9","\xcb","\x58")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo *sStaticStorageInfo = 0;
#endif

static ::String sMemberFields[] = {
	HX_HCSTRING("GUILTY_CONTEXT_RESET_EXT","\x98","\x78","\xca","\x75"),
	HX_HCSTRING("INNOCENT_CONTEXT_RESET_EXT","\x10","\x1f","\x1e","\x90"),
	HX_HCSTRING("UNKNOWN_CONTEXT_RESET_EXT","\xac","\x0f","\x07","\x0f"),
	HX_HCSTRING("CONTEXT_ROBUST_ACCESS_EXT","\xc4","\xc8","\x9b","\xf5"),
	HX_HCSTRING("RESET_NOTIFICATION_STRATEGY_EXT","\xb9","\x66","\x23","\xcb"),
	HX_HCSTRING("LOSE_CONTEXT_ON_RESET_EXT","\xeb","\x3d","\xdb","\x68"),
	HX_HCSTRING("NO_RESET_NOTIFICATION_EXT","\x3b","\xc9","\xcb","\x58"),
	::String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(EXT_robustness_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(EXT_robustness_obj::__mClass,"__mClass");
};

#endif

hx::Class EXT_robustness_obj::__mClass;

void EXT_robustness_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("lime.graphics.opengl.ext.EXT_robustness","\xe8","\x38","\x33","\x16");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = hx::Class_obj::dupFunctions(sMemberFields);
	__mClass->mCanCast = hx::TCanCast< EXT_robustness_obj >;
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
