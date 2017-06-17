#include <hxcpp.h>

#ifndef INCLUDED_lime_graphics_opengl_ext_APPLE_sync
#include <lime/graphics/opengl/ext/APPLE_sync.h>
#endif
namespace lime{
namespace graphics{
namespace opengl{
namespace ext{

Void APPLE_sync_obj::__construct()
{
HX_STACK_FRAME("lime.graphics.opengl.ext.APPLE_sync","new",0xc89c95d4,"lime.graphics.opengl.ext.APPLE_sync.new","lime/graphics/opengl/ext/APPLE_sync.hx",6,0x38845a3a)
HX_STACK_THIS(this)
{
	HX_STACK_LINE(24)
	this->TIMEOUT_IGNORED_APPLE = (int)-1;
	HX_STACK_LINE(23)
	this->SYNC_FLUSH_COMMANDS_BIT_APPLE = (int)1;
	HX_STACK_LINE(22)
	this->WAIT_FAILED_APPLE = (int)37149;
	HX_STACK_LINE(21)
	this->CONDITION_SATISFIED_APPLE = (int)37148;
	HX_STACK_LINE(20)
	this->TIMEOUT_EXPIRED_APPLE = (int)37147;
	HX_STACK_LINE(19)
	this->ALREADY_SIGNALED_APPLE = (int)37146;
	HX_STACK_LINE(18)
	this->SIGNALED_APPLE = (int)37145;
	HX_STACK_LINE(17)
	this->UNSIGNALED_APPLE = (int)37144;
	HX_STACK_LINE(16)
	this->SYNC_GPU_COMMANDS_COMPLETE_APPLE = (int)37143;
	HX_STACK_LINE(15)
	this->SYNC_FENCE_APPLE = (int)37142;
	HX_STACK_LINE(14)
	this->SYNC_FLAGS_APPLE = (int)37141;
	HX_STACK_LINE(13)
	this->SYNC_STATUS_APPLE = (int)37140;
	HX_STACK_LINE(12)
	this->SYNC_CONDITION_APPLE = (int)37139;
	HX_STACK_LINE(11)
	this->OBJECT_TYPE_APPLE = (int)37138;
	HX_STACK_LINE(10)
	this->MAX_SERVER_WAIT_TIMEOUT_APPLE = (int)37137;
	HX_STACK_LINE(9)
	this->SYNC_OBJECT_APPLE = (int)35411;
}
;
	return null();
}

//APPLE_sync_obj::~APPLE_sync_obj() { }

Dynamic APPLE_sync_obj::__CreateEmpty() { return  new APPLE_sync_obj; }
hx::ObjectPtr< APPLE_sync_obj > APPLE_sync_obj::__new()
{  hx::ObjectPtr< APPLE_sync_obj > _result_ = new APPLE_sync_obj();
	_result_->__construct();
	return _result_;}

Dynamic APPLE_sync_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< APPLE_sync_obj > _result_ = new APPLE_sync_obj();
	_result_->__construct();
	return _result_;}


APPLE_sync_obj::APPLE_sync_obj()
{
}

Dynamic APPLE_sync_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 14:
		if (HX_FIELD_EQ(inName,"SIGNALED_APPLE") ) { return SIGNALED_APPLE; }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"SYNC_FLAGS_APPLE") ) { return SYNC_FLAGS_APPLE; }
		if (HX_FIELD_EQ(inName,"SYNC_FENCE_APPLE") ) { return SYNC_FENCE_APPLE; }
		if (HX_FIELD_EQ(inName,"UNSIGNALED_APPLE") ) { return UNSIGNALED_APPLE; }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"SYNC_OBJECT_APPLE") ) { return SYNC_OBJECT_APPLE; }
		if (HX_FIELD_EQ(inName,"OBJECT_TYPE_APPLE") ) { return OBJECT_TYPE_APPLE; }
		if (HX_FIELD_EQ(inName,"SYNC_STATUS_APPLE") ) { return SYNC_STATUS_APPLE; }
		if (HX_FIELD_EQ(inName,"WAIT_FAILED_APPLE") ) { return WAIT_FAILED_APPLE; }
		break;
	case 20:
		if (HX_FIELD_EQ(inName,"SYNC_CONDITION_APPLE") ) { return SYNC_CONDITION_APPLE; }
		break;
	case 21:
		if (HX_FIELD_EQ(inName,"TIMEOUT_EXPIRED_APPLE") ) { return TIMEOUT_EXPIRED_APPLE; }
		if (HX_FIELD_EQ(inName,"TIMEOUT_IGNORED_APPLE") ) { return TIMEOUT_IGNORED_APPLE; }
		break;
	case 22:
		if (HX_FIELD_EQ(inName,"ALREADY_SIGNALED_APPLE") ) { return ALREADY_SIGNALED_APPLE; }
		break;
	case 25:
		if (HX_FIELD_EQ(inName,"CONDITION_SATISFIED_APPLE") ) { return CONDITION_SATISFIED_APPLE; }
		break;
	case 29:
		if (HX_FIELD_EQ(inName,"MAX_SERVER_WAIT_TIMEOUT_APPLE") ) { return MAX_SERVER_WAIT_TIMEOUT_APPLE; }
		if (HX_FIELD_EQ(inName,"SYNC_FLUSH_COMMANDS_BIT_APPLE") ) { return SYNC_FLUSH_COMMANDS_BIT_APPLE; }
		break;
	case 32:
		if (HX_FIELD_EQ(inName,"SYNC_GPU_COMMANDS_COMPLETE_APPLE") ) { return SYNC_GPU_COMMANDS_COMPLETE_APPLE; }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic APPLE_sync_obj::__SetField(const ::String &inName,const Dynamic &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 14:
		if (HX_FIELD_EQ(inName,"SIGNALED_APPLE") ) { SIGNALED_APPLE=inValue.Cast< int >(); return inValue; }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"SYNC_FLAGS_APPLE") ) { SYNC_FLAGS_APPLE=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"SYNC_FENCE_APPLE") ) { SYNC_FENCE_APPLE=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"UNSIGNALED_APPLE") ) { UNSIGNALED_APPLE=inValue.Cast< int >(); return inValue; }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"SYNC_OBJECT_APPLE") ) { SYNC_OBJECT_APPLE=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"OBJECT_TYPE_APPLE") ) { OBJECT_TYPE_APPLE=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"SYNC_STATUS_APPLE") ) { SYNC_STATUS_APPLE=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"WAIT_FAILED_APPLE") ) { WAIT_FAILED_APPLE=inValue.Cast< int >(); return inValue; }
		break;
	case 20:
		if (HX_FIELD_EQ(inName,"SYNC_CONDITION_APPLE") ) { SYNC_CONDITION_APPLE=inValue.Cast< int >(); return inValue; }
		break;
	case 21:
		if (HX_FIELD_EQ(inName,"TIMEOUT_EXPIRED_APPLE") ) { TIMEOUT_EXPIRED_APPLE=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"TIMEOUT_IGNORED_APPLE") ) { TIMEOUT_IGNORED_APPLE=inValue.Cast< int >(); return inValue; }
		break;
	case 22:
		if (HX_FIELD_EQ(inName,"ALREADY_SIGNALED_APPLE") ) { ALREADY_SIGNALED_APPLE=inValue.Cast< int >(); return inValue; }
		break;
	case 25:
		if (HX_FIELD_EQ(inName,"CONDITION_SATISFIED_APPLE") ) { CONDITION_SATISFIED_APPLE=inValue.Cast< int >(); return inValue; }
		break;
	case 29:
		if (HX_FIELD_EQ(inName,"MAX_SERVER_WAIT_TIMEOUT_APPLE") ) { MAX_SERVER_WAIT_TIMEOUT_APPLE=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"SYNC_FLUSH_COMMANDS_BIT_APPLE") ) { SYNC_FLUSH_COMMANDS_BIT_APPLE=inValue.Cast< int >(); return inValue; }
		break;
	case 32:
		if (HX_FIELD_EQ(inName,"SYNC_GPU_COMMANDS_COMPLETE_APPLE") ) { SYNC_GPU_COMMANDS_COMPLETE_APPLE=inValue.Cast< int >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void APPLE_sync_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("SYNC_OBJECT_APPLE","\x1e","\xbc","\x93","\x1e"));
	outFields->push(HX_HCSTRING("MAX_SERVER_WAIT_TIMEOUT_APPLE","\xb3","\x1b","\x89","\x8b"));
	outFields->push(HX_HCSTRING("OBJECT_TYPE_APPLE","\x75","\x33","\x51","\x15"));
	outFields->push(HX_HCSTRING("SYNC_CONDITION_APPLE","\x12","\x97","\x05","\x77"));
	outFields->push(HX_HCSTRING("SYNC_STATUS_APPLE","\xd1","\x7c","\xb2","\xaa"));
	outFields->push(HX_HCSTRING("SYNC_FLAGS_APPLE","\xbe","\x8b","\x0e","\x31"));
	outFields->push(HX_HCSTRING("SYNC_FENCE_APPLE","\xa8","\x52","\x51","\x7a"));
	outFields->push(HX_HCSTRING("SYNC_GPU_COMMANDS_COMPLETE_APPLE","\x34","\xe9","\xd2","\x71"));
	outFields->push(HX_HCSTRING("UNSIGNALED_APPLE","\x9b","\x28","\x8b","\x90"));
	outFields->push(HX_HCSTRING("SIGNALED_APPLE","\x82","\xd4","\xe2","\x08"));
	outFields->push(HX_HCSTRING("ALREADY_SIGNALED_APPLE","\xa9","\x58","\xab","\x45"));
	outFields->push(HX_HCSTRING("TIMEOUT_EXPIRED_APPLE","\x42","\x08","\x0b","\xcd"));
	outFields->push(HX_HCSTRING("CONDITION_SATISFIED_APPLE","\xc9","\xb9","\x97","\x5f"));
	outFields->push(HX_HCSTRING("WAIT_FAILED_APPLE","\x42","\x2d","\x3b","\x8f"));
	outFields->push(HX_HCSTRING("SYNC_FLUSH_COMMANDS_BIT_APPLE","\x10","\x19","\x72","\x41"));
	outFields->push(HX_HCSTRING("TIMEOUT_IGNORED_APPLE","\x6f","\xaf","\x58","\x06"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsInt,(int)offsetof(APPLE_sync_obj,SYNC_OBJECT_APPLE),HX_HCSTRING("SYNC_OBJECT_APPLE","\x1e","\xbc","\x93","\x1e")},
	{hx::fsInt,(int)offsetof(APPLE_sync_obj,MAX_SERVER_WAIT_TIMEOUT_APPLE),HX_HCSTRING("MAX_SERVER_WAIT_TIMEOUT_APPLE","\xb3","\x1b","\x89","\x8b")},
	{hx::fsInt,(int)offsetof(APPLE_sync_obj,OBJECT_TYPE_APPLE),HX_HCSTRING("OBJECT_TYPE_APPLE","\x75","\x33","\x51","\x15")},
	{hx::fsInt,(int)offsetof(APPLE_sync_obj,SYNC_CONDITION_APPLE),HX_HCSTRING("SYNC_CONDITION_APPLE","\x12","\x97","\x05","\x77")},
	{hx::fsInt,(int)offsetof(APPLE_sync_obj,SYNC_STATUS_APPLE),HX_HCSTRING("SYNC_STATUS_APPLE","\xd1","\x7c","\xb2","\xaa")},
	{hx::fsInt,(int)offsetof(APPLE_sync_obj,SYNC_FLAGS_APPLE),HX_HCSTRING("SYNC_FLAGS_APPLE","\xbe","\x8b","\x0e","\x31")},
	{hx::fsInt,(int)offsetof(APPLE_sync_obj,SYNC_FENCE_APPLE),HX_HCSTRING("SYNC_FENCE_APPLE","\xa8","\x52","\x51","\x7a")},
	{hx::fsInt,(int)offsetof(APPLE_sync_obj,SYNC_GPU_COMMANDS_COMPLETE_APPLE),HX_HCSTRING("SYNC_GPU_COMMANDS_COMPLETE_APPLE","\x34","\xe9","\xd2","\x71")},
	{hx::fsInt,(int)offsetof(APPLE_sync_obj,UNSIGNALED_APPLE),HX_HCSTRING("UNSIGNALED_APPLE","\x9b","\x28","\x8b","\x90")},
	{hx::fsInt,(int)offsetof(APPLE_sync_obj,SIGNALED_APPLE),HX_HCSTRING("SIGNALED_APPLE","\x82","\xd4","\xe2","\x08")},
	{hx::fsInt,(int)offsetof(APPLE_sync_obj,ALREADY_SIGNALED_APPLE),HX_HCSTRING("ALREADY_SIGNALED_APPLE","\xa9","\x58","\xab","\x45")},
	{hx::fsInt,(int)offsetof(APPLE_sync_obj,TIMEOUT_EXPIRED_APPLE),HX_HCSTRING("TIMEOUT_EXPIRED_APPLE","\x42","\x08","\x0b","\xcd")},
	{hx::fsInt,(int)offsetof(APPLE_sync_obj,CONDITION_SATISFIED_APPLE),HX_HCSTRING("CONDITION_SATISFIED_APPLE","\xc9","\xb9","\x97","\x5f")},
	{hx::fsInt,(int)offsetof(APPLE_sync_obj,WAIT_FAILED_APPLE),HX_HCSTRING("WAIT_FAILED_APPLE","\x42","\x2d","\x3b","\x8f")},
	{hx::fsInt,(int)offsetof(APPLE_sync_obj,SYNC_FLUSH_COMMANDS_BIT_APPLE),HX_HCSTRING("SYNC_FLUSH_COMMANDS_BIT_APPLE","\x10","\x19","\x72","\x41")},
	{hx::fsInt,(int)offsetof(APPLE_sync_obj,TIMEOUT_IGNORED_APPLE),HX_HCSTRING("TIMEOUT_IGNORED_APPLE","\x6f","\xaf","\x58","\x06")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo *sStaticStorageInfo = 0;
#endif

static ::String sMemberFields[] = {
	HX_HCSTRING("SYNC_OBJECT_APPLE","\x1e","\xbc","\x93","\x1e"),
	HX_HCSTRING("MAX_SERVER_WAIT_TIMEOUT_APPLE","\xb3","\x1b","\x89","\x8b"),
	HX_HCSTRING("OBJECT_TYPE_APPLE","\x75","\x33","\x51","\x15"),
	HX_HCSTRING("SYNC_CONDITION_APPLE","\x12","\x97","\x05","\x77"),
	HX_HCSTRING("SYNC_STATUS_APPLE","\xd1","\x7c","\xb2","\xaa"),
	HX_HCSTRING("SYNC_FLAGS_APPLE","\xbe","\x8b","\x0e","\x31"),
	HX_HCSTRING("SYNC_FENCE_APPLE","\xa8","\x52","\x51","\x7a"),
	HX_HCSTRING("SYNC_GPU_COMMANDS_COMPLETE_APPLE","\x34","\xe9","\xd2","\x71"),
	HX_HCSTRING("UNSIGNALED_APPLE","\x9b","\x28","\x8b","\x90"),
	HX_HCSTRING("SIGNALED_APPLE","\x82","\xd4","\xe2","\x08"),
	HX_HCSTRING("ALREADY_SIGNALED_APPLE","\xa9","\x58","\xab","\x45"),
	HX_HCSTRING("TIMEOUT_EXPIRED_APPLE","\x42","\x08","\x0b","\xcd"),
	HX_HCSTRING("CONDITION_SATISFIED_APPLE","\xc9","\xb9","\x97","\x5f"),
	HX_HCSTRING("WAIT_FAILED_APPLE","\x42","\x2d","\x3b","\x8f"),
	HX_HCSTRING("SYNC_FLUSH_COMMANDS_BIT_APPLE","\x10","\x19","\x72","\x41"),
	HX_HCSTRING("TIMEOUT_IGNORED_APPLE","\x6f","\xaf","\x58","\x06"),
	::String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(APPLE_sync_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(APPLE_sync_obj::__mClass,"__mClass");
};

#endif

hx::Class APPLE_sync_obj::__mClass;

void APPLE_sync_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("lime.graphics.opengl.ext.APPLE_sync","\xe2","\x5b","\x88","\x2e");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = hx::Class_obj::dupFunctions(sMemberFields);
	__mClass->mCanCast = hx::TCanCast< APPLE_sync_obj >;
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
