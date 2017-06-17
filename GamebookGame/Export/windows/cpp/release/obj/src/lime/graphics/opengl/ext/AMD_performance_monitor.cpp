#include <hxcpp.h>

#ifndef INCLUDED_lime_graphics_opengl_ext_AMD_performance_monitor
#include <lime/graphics/opengl/ext/AMD_performance_monitor.h>
#endif
namespace lime{
namespace graphics{
namespace opengl{
namespace ext{

Void AMD_performance_monitor_obj::__construct()
{
HX_STACK_FRAME("lime.graphics.opengl.ext.AMD_performance_monitor","new",0xb6600274,"lime.graphics.opengl.ext.AMD_performance_monitor.new","lime/graphics/opengl/ext/AMD_performance_monitor.hx",6,0x634e329e)
HX_STACK_THIS(this)
{
	HX_STACK_LINE(15)
	this->PERFMON_RESULT_AMD = (int)35782;
	HX_STACK_LINE(14)
	this->PERFMON_RESULT_SIZE_AMD = (int)35781;
	HX_STACK_LINE(13)
	this->PERFMON_RESULT_AVAILABLE_AMD = (int)35780;
	HX_STACK_LINE(12)
	this->PERCENTAGE_AMD = (int)35779;
	HX_STACK_LINE(11)
	this->UNSIGNED_INT64_AMD = (int)35778;
	HX_STACK_LINE(10)
	this->COUNTER_RANGE_AMD = (int)35777;
	HX_STACK_LINE(9)
	this->COUNTER_TYPE_AMD = (int)35776;
}
;
	return null();
}

//AMD_performance_monitor_obj::~AMD_performance_monitor_obj() { }

Dynamic AMD_performance_monitor_obj::__CreateEmpty() { return  new AMD_performance_monitor_obj; }
hx::ObjectPtr< AMD_performance_monitor_obj > AMD_performance_monitor_obj::__new()
{  hx::ObjectPtr< AMD_performance_monitor_obj > _result_ = new AMD_performance_monitor_obj();
	_result_->__construct();
	return _result_;}

Dynamic AMD_performance_monitor_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< AMD_performance_monitor_obj > _result_ = new AMD_performance_monitor_obj();
	_result_->__construct();
	return _result_;}


AMD_performance_monitor_obj::AMD_performance_monitor_obj()
{
}

Dynamic AMD_performance_monitor_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 14:
		if (HX_FIELD_EQ(inName,"PERCENTAGE_AMD") ) { return PERCENTAGE_AMD; }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"COUNTER_TYPE_AMD") ) { return COUNTER_TYPE_AMD; }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"COUNTER_RANGE_AMD") ) { return COUNTER_RANGE_AMD; }
		break;
	case 18:
		if (HX_FIELD_EQ(inName,"UNSIGNED_INT64_AMD") ) { return UNSIGNED_INT64_AMD; }
		if (HX_FIELD_EQ(inName,"PERFMON_RESULT_AMD") ) { return PERFMON_RESULT_AMD; }
		break;
	case 23:
		if (HX_FIELD_EQ(inName,"PERFMON_RESULT_SIZE_AMD") ) { return PERFMON_RESULT_SIZE_AMD; }
		break;
	case 28:
		if (HX_FIELD_EQ(inName,"PERFMON_RESULT_AVAILABLE_AMD") ) { return PERFMON_RESULT_AVAILABLE_AMD; }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic AMD_performance_monitor_obj::__SetField(const ::String &inName,const Dynamic &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 14:
		if (HX_FIELD_EQ(inName,"PERCENTAGE_AMD") ) { PERCENTAGE_AMD=inValue.Cast< int >(); return inValue; }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"COUNTER_TYPE_AMD") ) { COUNTER_TYPE_AMD=inValue.Cast< int >(); return inValue; }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"COUNTER_RANGE_AMD") ) { COUNTER_RANGE_AMD=inValue.Cast< int >(); return inValue; }
		break;
	case 18:
		if (HX_FIELD_EQ(inName,"UNSIGNED_INT64_AMD") ) { UNSIGNED_INT64_AMD=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"PERFMON_RESULT_AMD") ) { PERFMON_RESULT_AMD=inValue.Cast< int >(); return inValue; }
		break;
	case 23:
		if (HX_FIELD_EQ(inName,"PERFMON_RESULT_SIZE_AMD") ) { PERFMON_RESULT_SIZE_AMD=inValue.Cast< int >(); return inValue; }
		break;
	case 28:
		if (HX_FIELD_EQ(inName,"PERFMON_RESULT_AVAILABLE_AMD") ) { PERFMON_RESULT_AVAILABLE_AMD=inValue.Cast< int >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void AMD_performance_monitor_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("COUNTER_TYPE_AMD","\x96","\xb3","\x5a","\x5d"));
	outFields->push(HX_HCSTRING("COUNTER_RANGE_AMD","\x93","\xf4","\x50","\xe4"));
	outFields->push(HX_HCSTRING("UNSIGNED_INT64_AMD","\x1c","\x40","\x37","\xa0"));
	outFields->push(HX_HCSTRING("PERCENTAGE_AMD","\xf3","\x76","\xad","\x36"));
	outFields->push(HX_HCSTRING("PERFMON_RESULT_AVAILABLE_AMD","\x7c","\x92","\x8d","\x67"));
	outFields->push(HX_HCSTRING("PERFMON_RESULT_SIZE_AMD","\xe0","\xc4","\x64","\x06"));
	outFields->push(HX_HCSTRING("PERFMON_RESULT_AMD","\xd2","\x3e","\x3f","\x51"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsInt,(int)offsetof(AMD_performance_monitor_obj,COUNTER_TYPE_AMD),HX_HCSTRING("COUNTER_TYPE_AMD","\x96","\xb3","\x5a","\x5d")},
	{hx::fsInt,(int)offsetof(AMD_performance_monitor_obj,COUNTER_RANGE_AMD),HX_HCSTRING("COUNTER_RANGE_AMD","\x93","\xf4","\x50","\xe4")},
	{hx::fsInt,(int)offsetof(AMD_performance_monitor_obj,UNSIGNED_INT64_AMD),HX_HCSTRING("UNSIGNED_INT64_AMD","\x1c","\x40","\x37","\xa0")},
	{hx::fsInt,(int)offsetof(AMD_performance_monitor_obj,PERCENTAGE_AMD),HX_HCSTRING("PERCENTAGE_AMD","\xf3","\x76","\xad","\x36")},
	{hx::fsInt,(int)offsetof(AMD_performance_monitor_obj,PERFMON_RESULT_AVAILABLE_AMD),HX_HCSTRING("PERFMON_RESULT_AVAILABLE_AMD","\x7c","\x92","\x8d","\x67")},
	{hx::fsInt,(int)offsetof(AMD_performance_monitor_obj,PERFMON_RESULT_SIZE_AMD),HX_HCSTRING("PERFMON_RESULT_SIZE_AMD","\xe0","\xc4","\x64","\x06")},
	{hx::fsInt,(int)offsetof(AMD_performance_monitor_obj,PERFMON_RESULT_AMD),HX_HCSTRING("PERFMON_RESULT_AMD","\xd2","\x3e","\x3f","\x51")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo *sStaticStorageInfo = 0;
#endif

static ::String sMemberFields[] = {
	HX_HCSTRING("COUNTER_TYPE_AMD","\x96","\xb3","\x5a","\x5d"),
	HX_HCSTRING("COUNTER_RANGE_AMD","\x93","\xf4","\x50","\xe4"),
	HX_HCSTRING("UNSIGNED_INT64_AMD","\x1c","\x40","\x37","\xa0"),
	HX_HCSTRING("PERCENTAGE_AMD","\xf3","\x76","\xad","\x36"),
	HX_HCSTRING("PERFMON_RESULT_AVAILABLE_AMD","\x7c","\x92","\x8d","\x67"),
	HX_HCSTRING("PERFMON_RESULT_SIZE_AMD","\xe0","\xc4","\x64","\x06"),
	HX_HCSTRING("PERFMON_RESULT_AMD","\xd2","\x3e","\x3f","\x51"),
	::String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(AMD_performance_monitor_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(AMD_performance_monitor_obj::__mClass,"__mClass");
};

#endif

hx::Class AMD_performance_monitor_obj::__mClass;

void AMD_performance_monitor_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("lime.graphics.opengl.ext.AMD_performance_monitor","\x82","\xf8","\xb0","\xc5");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = hx::Class_obj::dupFunctions(sMemberFields);
	__mClass->mCanCast = hx::TCanCast< AMD_performance_monitor_obj >;
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
