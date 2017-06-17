#include <hxcpp.h>

#ifndef INCLUDED_lime_graphics_opengl_ext_KHR_debug
#include <lime/graphics/opengl/ext/KHR_debug.h>
#endif
namespace lime{
namespace graphics{
namespace opengl{
namespace ext{

Void KHR_debug_obj::__construct()
{
HX_STACK_FRAME("lime.graphics.opengl.ext.KHR_debug","new",0xa09f74f9,"lime.graphics.opengl.ext.KHR_debug.new","lime/graphics/opengl/ext/KHR_debug.hx",6,0x748ce039)
HX_STACK_THIS(this)
{
	HX_STACK_LINE(46)
	this->STACK_UNDERFLOW = (int)1284;
	HX_STACK_LINE(45)
	this->STACK_OVERFLOW = (int)1283;
	HX_STACK_LINE(44)
	this->CONTEXT_FLAG_DEBUG_BIT = (int)2;
	HX_STACK_LINE(43)
	this->DEBUG_OUTPUT = (int)37600;
	HX_STACK_LINE(42)
	this->DEBUG_SEVERITY_LOW = (int)37192;
	HX_STACK_LINE(41)
	this->DEBUG_SEVERITY_MEDIUM = (int)37191;
	HX_STACK_LINE(40)
	this->DEBUG_SEVERITY_HIGH = (int)37190;
	HX_STACK_LINE(39)
	this->DEBUG_LOGGED_MESSAGES = (int)37189;
	HX_STACK_LINE(38)
	this->MAX_DEBUG_LOGGED_MESSAGES = (int)37188;
	HX_STACK_LINE(37)
	this->MAX_DEBUG_MESSAGE_LENGTH = (int)37187;
	HX_STACK_LINE(36)
	this->MAX_LABEL_LENGTH = (int)33512;
	HX_STACK_LINE(35)
	this->SAMPLER = (int)33510;
	HX_STACK_LINE(34)
	this->QUERY = (int)33507;
	HX_STACK_LINE(33)
	this->PROGRAM = (int)33506;
	HX_STACK_LINE(32)
	this->SHADER = (int)33505;
	HX_STACK_LINE(31)
	this->BUFFER = (int)33504;
	HX_STACK_LINE(30)
	this->DEBUG_GROUP_STACK_DEPTH = (int)33389;
	HX_STACK_LINE(29)
	this->MAX_DEBUG_GROUP_STACK_DEPTH = (int)33388;
	HX_STACK_LINE(28)
	this->DEBUG_SEVERITY_NOTIFICATION = (int)33387;
	HX_STACK_LINE(27)
	this->DEBUG_TYPE_POP_GROUP = (int)33386;
	HX_STACK_LINE(26)
	this->DEBUG_TYPE_PUSH_GROUP = (int)33385;
	HX_STACK_LINE(25)
	this->DEBUG_TYPE_MARKER = (int)33384;
	HX_STACK_LINE(24)
	this->DEBUG_TYPE_OTHER = (int)33361;
	HX_STACK_LINE(23)
	this->DEBUG_TYPE_PERFORMANCE = (int)33360;
	HX_STACK_LINE(22)
	this->DEBUG_TYPE_PORTABILITY = (int)33359;
	HX_STACK_LINE(21)
	this->DEBUG_TYPE_UNDEFINED_BEHAVIOR = (int)33358;
	HX_STACK_LINE(20)
	this->DEBUG_TYPE_DEPRECATED_BEHAVIOR = (int)33357;
	HX_STACK_LINE(19)
	this->DEBUG_TYPE_ERROR = (int)33356;
	HX_STACK_LINE(18)
	this->DEBUG_SOURCE_OTHER = (int)33355;
	HX_STACK_LINE(17)
	this->DEBUG_SOURCE_APPLICATION = (int)33354;
	HX_STACK_LINE(16)
	this->DEBUG_SOURCE_THIRD_PARTY = (int)33353;
	HX_STACK_LINE(15)
	this->DEBUG_SOURCE_SHADER_COMPILER = (int)33352;
	HX_STACK_LINE(14)
	this->DEBUG_SOURCE_WINDOW_SYSTEM = (int)33351;
	HX_STACK_LINE(13)
	this->DEBUG_SOURCE_API = (int)33350;
	HX_STACK_LINE(12)
	this->DEBUG_CALLBACK_USER_PARAM = (int)33349;
	HX_STACK_LINE(11)
	this->DEBUG_CALLBACK_FUNCTION = (int)33348;
	HX_STACK_LINE(10)
	this->DEBUG_NEXT_LOGGED_MESSAGE_LENGTH = (int)33347;
	HX_STACK_LINE(9)
	this->DEBUG_OUTPUT_SYNCHRONOUS = (int)33346;
}
;
	return null();
}

//KHR_debug_obj::~KHR_debug_obj() { }

Dynamic KHR_debug_obj::__CreateEmpty() { return  new KHR_debug_obj; }
hx::ObjectPtr< KHR_debug_obj > KHR_debug_obj::__new()
{  hx::ObjectPtr< KHR_debug_obj > _result_ = new KHR_debug_obj();
	_result_->__construct();
	return _result_;}

Dynamic KHR_debug_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< KHR_debug_obj > _result_ = new KHR_debug_obj();
	_result_->__construct();
	return _result_;}


KHR_debug_obj::KHR_debug_obj()
{
}

Dynamic KHR_debug_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"QUERY") ) { return QUERY; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"BUFFER") ) { return BUFFER; }
		if (HX_FIELD_EQ(inName,"SHADER") ) { return SHADER; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"PROGRAM") ) { return PROGRAM; }
		if (HX_FIELD_EQ(inName,"SAMPLER") ) { return SAMPLER; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"DEBUG_OUTPUT") ) { return DEBUG_OUTPUT; }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"STACK_OVERFLOW") ) { return STACK_OVERFLOW; }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"STACK_UNDERFLOW") ) { return STACK_UNDERFLOW; }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"DEBUG_SOURCE_API") ) { return DEBUG_SOURCE_API; }
		if (HX_FIELD_EQ(inName,"DEBUG_TYPE_ERROR") ) { return DEBUG_TYPE_ERROR; }
		if (HX_FIELD_EQ(inName,"DEBUG_TYPE_OTHER") ) { return DEBUG_TYPE_OTHER; }
		if (HX_FIELD_EQ(inName,"MAX_LABEL_LENGTH") ) { return MAX_LABEL_LENGTH; }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"DEBUG_TYPE_MARKER") ) { return DEBUG_TYPE_MARKER; }
		break;
	case 18:
		if (HX_FIELD_EQ(inName,"DEBUG_SOURCE_OTHER") ) { return DEBUG_SOURCE_OTHER; }
		if (HX_FIELD_EQ(inName,"DEBUG_SEVERITY_LOW") ) { return DEBUG_SEVERITY_LOW; }
		break;
	case 19:
		if (HX_FIELD_EQ(inName,"DEBUG_SEVERITY_HIGH") ) { return DEBUG_SEVERITY_HIGH; }
		break;
	case 20:
		if (HX_FIELD_EQ(inName,"DEBUG_TYPE_POP_GROUP") ) { return DEBUG_TYPE_POP_GROUP; }
		break;
	case 21:
		if (HX_FIELD_EQ(inName,"DEBUG_TYPE_PUSH_GROUP") ) { return DEBUG_TYPE_PUSH_GROUP; }
		if (HX_FIELD_EQ(inName,"DEBUG_LOGGED_MESSAGES") ) { return DEBUG_LOGGED_MESSAGES; }
		if (HX_FIELD_EQ(inName,"DEBUG_SEVERITY_MEDIUM") ) { return DEBUG_SEVERITY_MEDIUM; }
		break;
	case 22:
		if (HX_FIELD_EQ(inName,"DEBUG_TYPE_PORTABILITY") ) { return DEBUG_TYPE_PORTABILITY; }
		if (HX_FIELD_EQ(inName,"DEBUG_TYPE_PERFORMANCE") ) { return DEBUG_TYPE_PERFORMANCE; }
		if (HX_FIELD_EQ(inName,"CONTEXT_FLAG_DEBUG_BIT") ) { return CONTEXT_FLAG_DEBUG_BIT; }
		break;
	case 23:
		if (HX_FIELD_EQ(inName,"DEBUG_CALLBACK_FUNCTION") ) { return DEBUG_CALLBACK_FUNCTION; }
		if (HX_FIELD_EQ(inName,"DEBUG_GROUP_STACK_DEPTH") ) { return DEBUG_GROUP_STACK_DEPTH; }
		break;
	case 24:
		if (HX_FIELD_EQ(inName,"DEBUG_OUTPUT_SYNCHRONOUS") ) { return DEBUG_OUTPUT_SYNCHRONOUS; }
		if (HX_FIELD_EQ(inName,"DEBUG_SOURCE_THIRD_PARTY") ) { return DEBUG_SOURCE_THIRD_PARTY; }
		if (HX_FIELD_EQ(inName,"DEBUG_SOURCE_APPLICATION") ) { return DEBUG_SOURCE_APPLICATION; }
		if (HX_FIELD_EQ(inName,"MAX_DEBUG_MESSAGE_LENGTH") ) { return MAX_DEBUG_MESSAGE_LENGTH; }
		break;
	case 25:
		if (HX_FIELD_EQ(inName,"DEBUG_CALLBACK_USER_PARAM") ) { return DEBUG_CALLBACK_USER_PARAM; }
		if (HX_FIELD_EQ(inName,"MAX_DEBUG_LOGGED_MESSAGES") ) { return MAX_DEBUG_LOGGED_MESSAGES; }
		break;
	case 26:
		if (HX_FIELD_EQ(inName,"DEBUG_SOURCE_WINDOW_SYSTEM") ) { return DEBUG_SOURCE_WINDOW_SYSTEM; }
		break;
	case 27:
		if (HX_FIELD_EQ(inName,"DEBUG_SEVERITY_NOTIFICATION") ) { return DEBUG_SEVERITY_NOTIFICATION; }
		if (HX_FIELD_EQ(inName,"MAX_DEBUG_GROUP_STACK_DEPTH") ) { return MAX_DEBUG_GROUP_STACK_DEPTH; }
		break;
	case 28:
		if (HX_FIELD_EQ(inName,"DEBUG_SOURCE_SHADER_COMPILER") ) { return DEBUG_SOURCE_SHADER_COMPILER; }
		break;
	case 29:
		if (HX_FIELD_EQ(inName,"DEBUG_TYPE_UNDEFINED_BEHAVIOR") ) { return DEBUG_TYPE_UNDEFINED_BEHAVIOR; }
		break;
	case 30:
		if (HX_FIELD_EQ(inName,"DEBUG_TYPE_DEPRECATED_BEHAVIOR") ) { return DEBUG_TYPE_DEPRECATED_BEHAVIOR; }
		break;
	case 32:
		if (HX_FIELD_EQ(inName,"DEBUG_NEXT_LOGGED_MESSAGE_LENGTH") ) { return DEBUG_NEXT_LOGGED_MESSAGE_LENGTH; }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic KHR_debug_obj::__SetField(const ::String &inName,const Dynamic &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"QUERY") ) { QUERY=inValue.Cast< int >(); return inValue; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"BUFFER") ) { BUFFER=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"SHADER") ) { SHADER=inValue.Cast< int >(); return inValue; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"PROGRAM") ) { PROGRAM=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"SAMPLER") ) { SAMPLER=inValue.Cast< int >(); return inValue; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"DEBUG_OUTPUT") ) { DEBUG_OUTPUT=inValue.Cast< int >(); return inValue; }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"STACK_OVERFLOW") ) { STACK_OVERFLOW=inValue.Cast< int >(); return inValue; }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"STACK_UNDERFLOW") ) { STACK_UNDERFLOW=inValue.Cast< int >(); return inValue; }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"DEBUG_SOURCE_API") ) { DEBUG_SOURCE_API=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"DEBUG_TYPE_ERROR") ) { DEBUG_TYPE_ERROR=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"DEBUG_TYPE_OTHER") ) { DEBUG_TYPE_OTHER=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"MAX_LABEL_LENGTH") ) { MAX_LABEL_LENGTH=inValue.Cast< int >(); return inValue; }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"DEBUG_TYPE_MARKER") ) { DEBUG_TYPE_MARKER=inValue.Cast< int >(); return inValue; }
		break;
	case 18:
		if (HX_FIELD_EQ(inName,"DEBUG_SOURCE_OTHER") ) { DEBUG_SOURCE_OTHER=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"DEBUG_SEVERITY_LOW") ) { DEBUG_SEVERITY_LOW=inValue.Cast< int >(); return inValue; }
		break;
	case 19:
		if (HX_FIELD_EQ(inName,"DEBUG_SEVERITY_HIGH") ) { DEBUG_SEVERITY_HIGH=inValue.Cast< int >(); return inValue; }
		break;
	case 20:
		if (HX_FIELD_EQ(inName,"DEBUG_TYPE_POP_GROUP") ) { DEBUG_TYPE_POP_GROUP=inValue.Cast< int >(); return inValue; }
		break;
	case 21:
		if (HX_FIELD_EQ(inName,"DEBUG_TYPE_PUSH_GROUP") ) { DEBUG_TYPE_PUSH_GROUP=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"DEBUG_LOGGED_MESSAGES") ) { DEBUG_LOGGED_MESSAGES=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"DEBUG_SEVERITY_MEDIUM") ) { DEBUG_SEVERITY_MEDIUM=inValue.Cast< int >(); return inValue; }
		break;
	case 22:
		if (HX_FIELD_EQ(inName,"DEBUG_TYPE_PORTABILITY") ) { DEBUG_TYPE_PORTABILITY=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"DEBUG_TYPE_PERFORMANCE") ) { DEBUG_TYPE_PERFORMANCE=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"CONTEXT_FLAG_DEBUG_BIT") ) { CONTEXT_FLAG_DEBUG_BIT=inValue.Cast< int >(); return inValue; }
		break;
	case 23:
		if (HX_FIELD_EQ(inName,"DEBUG_CALLBACK_FUNCTION") ) { DEBUG_CALLBACK_FUNCTION=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"DEBUG_GROUP_STACK_DEPTH") ) { DEBUG_GROUP_STACK_DEPTH=inValue.Cast< int >(); return inValue; }
		break;
	case 24:
		if (HX_FIELD_EQ(inName,"DEBUG_OUTPUT_SYNCHRONOUS") ) { DEBUG_OUTPUT_SYNCHRONOUS=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"DEBUG_SOURCE_THIRD_PARTY") ) { DEBUG_SOURCE_THIRD_PARTY=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"DEBUG_SOURCE_APPLICATION") ) { DEBUG_SOURCE_APPLICATION=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"MAX_DEBUG_MESSAGE_LENGTH") ) { MAX_DEBUG_MESSAGE_LENGTH=inValue.Cast< int >(); return inValue; }
		break;
	case 25:
		if (HX_FIELD_EQ(inName,"DEBUG_CALLBACK_USER_PARAM") ) { DEBUG_CALLBACK_USER_PARAM=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"MAX_DEBUG_LOGGED_MESSAGES") ) { MAX_DEBUG_LOGGED_MESSAGES=inValue.Cast< int >(); return inValue; }
		break;
	case 26:
		if (HX_FIELD_EQ(inName,"DEBUG_SOURCE_WINDOW_SYSTEM") ) { DEBUG_SOURCE_WINDOW_SYSTEM=inValue.Cast< int >(); return inValue; }
		break;
	case 27:
		if (HX_FIELD_EQ(inName,"DEBUG_SEVERITY_NOTIFICATION") ) { DEBUG_SEVERITY_NOTIFICATION=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"MAX_DEBUG_GROUP_STACK_DEPTH") ) { MAX_DEBUG_GROUP_STACK_DEPTH=inValue.Cast< int >(); return inValue; }
		break;
	case 28:
		if (HX_FIELD_EQ(inName,"DEBUG_SOURCE_SHADER_COMPILER") ) { DEBUG_SOURCE_SHADER_COMPILER=inValue.Cast< int >(); return inValue; }
		break;
	case 29:
		if (HX_FIELD_EQ(inName,"DEBUG_TYPE_UNDEFINED_BEHAVIOR") ) { DEBUG_TYPE_UNDEFINED_BEHAVIOR=inValue.Cast< int >(); return inValue; }
		break;
	case 30:
		if (HX_FIELD_EQ(inName,"DEBUG_TYPE_DEPRECATED_BEHAVIOR") ) { DEBUG_TYPE_DEPRECATED_BEHAVIOR=inValue.Cast< int >(); return inValue; }
		break;
	case 32:
		if (HX_FIELD_EQ(inName,"DEBUG_NEXT_LOGGED_MESSAGE_LENGTH") ) { DEBUG_NEXT_LOGGED_MESSAGE_LENGTH=inValue.Cast< int >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void KHR_debug_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("DEBUG_OUTPUT_SYNCHRONOUS","\xb7","\x6c","\x34","\xb8"));
	outFields->push(HX_HCSTRING("DEBUG_NEXT_LOGGED_MESSAGE_LENGTH","\x5b","\xea","\xd6","\xb8"));
	outFields->push(HX_HCSTRING("DEBUG_CALLBACK_FUNCTION","\xc6","\xdf","\xcb","\xcf"));
	outFields->push(HX_HCSTRING("DEBUG_CALLBACK_USER_PARAM","\x67","\x50","\x4b","\xb2"));
	outFields->push(HX_HCSTRING("DEBUG_SOURCE_API","\xa2","\x9d","\xa7","\xfc"));
	outFields->push(HX_HCSTRING("DEBUG_SOURCE_WINDOW_SYSTEM","\xc6","\xf9","\xdc","\x4e"));
	outFields->push(HX_HCSTRING("DEBUG_SOURCE_SHADER_COMPILER","\x61","\xd0","\xc4","\x2b"));
	outFields->push(HX_HCSTRING("DEBUG_SOURCE_THIRD_PARTY","\xf6","\x6f","\x06","\x29"));
	outFields->push(HX_HCSTRING("DEBUG_SOURCE_APPLICATION","\x58","\x24","\xb6","\x0f"));
	outFields->push(HX_HCSTRING("DEBUG_SOURCE_OTHER","\xd8","\x3d","\x44","\x3e"));
	outFields->push(HX_HCSTRING("DEBUG_TYPE_ERROR","\xef","\x26","\x40","\xe9"));
	outFields->push(HX_HCSTRING("DEBUG_TYPE_DEPRECATED_BEHAVIOR","\xa5","\xcf","\x17","\x8c"));
	outFields->push(HX_HCSTRING("DEBUG_TYPE_UNDEFINED_BEHAVIOR","\xda","\x37","\x6a","\x74"));
	outFields->push(HX_HCSTRING("DEBUG_TYPE_PORTABILITY","\xb0","\x1e","\x6b","\x9d"));
	outFields->push(HX_HCSTRING("DEBUG_TYPE_PERFORMANCE","\x57","\x2c","\xfb","\xeb"));
	outFields->push(HX_HCSTRING("DEBUG_TYPE_OTHER","\xf7","\xc1","\x8c","\xac"));
	outFields->push(HX_HCSTRING("DEBUG_TYPE_MARKER","\x93","\xdc","\xe9","\x97"));
	outFields->push(HX_HCSTRING("DEBUG_TYPE_PUSH_GROUP","\x13","\x87","\x6b","\xca"));
	outFields->push(HX_HCSTRING("DEBUG_TYPE_POP_GROUP","\x58","\x29","\x6a","\xb8"));
	outFields->push(HX_HCSTRING("DEBUG_SEVERITY_NOTIFICATION","\xa1","\xb3","\xa6","\x11"));
	outFields->push(HX_HCSTRING("MAX_DEBUG_GROUP_STACK_DEPTH","\xa5","\x1e","\xfc","\xf4"));
	outFields->push(HX_HCSTRING("DEBUG_GROUP_STACK_DEPTH","\xa0","\xe0","\x2d","\x54"));
	outFields->push(HX_HCSTRING("BUFFER","\x00","\x69","\x17","\x83"));
	outFields->push(HX_HCSTRING("SHADER","\x25","\x6b","\xa3","\xcf"));
	outFields->push(HX_HCSTRING("PROGRAM","\x64","\x1e","\xcd","\x73"));
	outFields->push(HX_HCSTRING("QUERY","\xe8","\xc2","\xd8","\xdb"));
	outFields->push(HX_HCSTRING("SAMPLER","\xe8","\x98","\x9d","\x03"));
	outFields->push(HX_HCSTRING("MAX_LABEL_LENGTH","\x0c","\x59","\xf0","\xf1"));
	outFields->push(HX_HCSTRING("MAX_DEBUG_MESSAGE_LENGTH","\x65","\x08","\x17","\x87"));
	outFields->push(HX_HCSTRING("MAX_DEBUG_LOGGED_MESSAGES","\xe2","\x62","\x56","\xd5"));
	outFields->push(HX_HCSTRING("DEBUG_LOGGED_MESSAGES","\x1d","\x20","\x32","\xf8"));
	outFields->push(HX_HCSTRING("DEBUG_SEVERITY_HIGH","\x18","\xbe","\x8d","\x35"));
	outFields->push(HX_HCSTRING("DEBUG_SEVERITY_MEDIUM","\xab","\x58","\x3f","\xb3"));
	outFields->push(HX_HCSTRING("DEBUG_SEVERITY_LOW","\x7e","\xfa","\x43","\xa3"));
	outFields->push(HX_HCSTRING("DEBUG_OUTPUT","\xcd","\x3e","\x9f","\xda"));
	outFields->push(HX_HCSTRING("CONTEXT_FLAG_DEBUG_BIT","\x7e","\x17","\xc3","\xb0"));
	outFields->push(HX_HCSTRING("STACK_OVERFLOW","\x79","\xa6","\x54","\xa5"));
	outFields->push(HX_HCSTRING("STACK_UNDERFLOW","\xcf","\x21","\x6e","\xb5"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsInt,(int)offsetof(KHR_debug_obj,DEBUG_OUTPUT_SYNCHRONOUS),HX_HCSTRING("DEBUG_OUTPUT_SYNCHRONOUS","\xb7","\x6c","\x34","\xb8")},
	{hx::fsInt,(int)offsetof(KHR_debug_obj,DEBUG_NEXT_LOGGED_MESSAGE_LENGTH),HX_HCSTRING("DEBUG_NEXT_LOGGED_MESSAGE_LENGTH","\x5b","\xea","\xd6","\xb8")},
	{hx::fsInt,(int)offsetof(KHR_debug_obj,DEBUG_CALLBACK_FUNCTION),HX_HCSTRING("DEBUG_CALLBACK_FUNCTION","\xc6","\xdf","\xcb","\xcf")},
	{hx::fsInt,(int)offsetof(KHR_debug_obj,DEBUG_CALLBACK_USER_PARAM),HX_HCSTRING("DEBUG_CALLBACK_USER_PARAM","\x67","\x50","\x4b","\xb2")},
	{hx::fsInt,(int)offsetof(KHR_debug_obj,DEBUG_SOURCE_API),HX_HCSTRING("DEBUG_SOURCE_API","\xa2","\x9d","\xa7","\xfc")},
	{hx::fsInt,(int)offsetof(KHR_debug_obj,DEBUG_SOURCE_WINDOW_SYSTEM),HX_HCSTRING("DEBUG_SOURCE_WINDOW_SYSTEM","\xc6","\xf9","\xdc","\x4e")},
	{hx::fsInt,(int)offsetof(KHR_debug_obj,DEBUG_SOURCE_SHADER_COMPILER),HX_HCSTRING("DEBUG_SOURCE_SHADER_COMPILER","\x61","\xd0","\xc4","\x2b")},
	{hx::fsInt,(int)offsetof(KHR_debug_obj,DEBUG_SOURCE_THIRD_PARTY),HX_HCSTRING("DEBUG_SOURCE_THIRD_PARTY","\xf6","\x6f","\x06","\x29")},
	{hx::fsInt,(int)offsetof(KHR_debug_obj,DEBUG_SOURCE_APPLICATION),HX_HCSTRING("DEBUG_SOURCE_APPLICATION","\x58","\x24","\xb6","\x0f")},
	{hx::fsInt,(int)offsetof(KHR_debug_obj,DEBUG_SOURCE_OTHER),HX_HCSTRING("DEBUG_SOURCE_OTHER","\xd8","\x3d","\x44","\x3e")},
	{hx::fsInt,(int)offsetof(KHR_debug_obj,DEBUG_TYPE_ERROR),HX_HCSTRING("DEBUG_TYPE_ERROR","\xef","\x26","\x40","\xe9")},
	{hx::fsInt,(int)offsetof(KHR_debug_obj,DEBUG_TYPE_DEPRECATED_BEHAVIOR),HX_HCSTRING("DEBUG_TYPE_DEPRECATED_BEHAVIOR","\xa5","\xcf","\x17","\x8c")},
	{hx::fsInt,(int)offsetof(KHR_debug_obj,DEBUG_TYPE_UNDEFINED_BEHAVIOR),HX_HCSTRING("DEBUG_TYPE_UNDEFINED_BEHAVIOR","\xda","\x37","\x6a","\x74")},
	{hx::fsInt,(int)offsetof(KHR_debug_obj,DEBUG_TYPE_PORTABILITY),HX_HCSTRING("DEBUG_TYPE_PORTABILITY","\xb0","\x1e","\x6b","\x9d")},
	{hx::fsInt,(int)offsetof(KHR_debug_obj,DEBUG_TYPE_PERFORMANCE),HX_HCSTRING("DEBUG_TYPE_PERFORMANCE","\x57","\x2c","\xfb","\xeb")},
	{hx::fsInt,(int)offsetof(KHR_debug_obj,DEBUG_TYPE_OTHER),HX_HCSTRING("DEBUG_TYPE_OTHER","\xf7","\xc1","\x8c","\xac")},
	{hx::fsInt,(int)offsetof(KHR_debug_obj,DEBUG_TYPE_MARKER),HX_HCSTRING("DEBUG_TYPE_MARKER","\x93","\xdc","\xe9","\x97")},
	{hx::fsInt,(int)offsetof(KHR_debug_obj,DEBUG_TYPE_PUSH_GROUP),HX_HCSTRING("DEBUG_TYPE_PUSH_GROUP","\x13","\x87","\x6b","\xca")},
	{hx::fsInt,(int)offsetof(KHR_debug_obj,DEBUG_TYPE_POP_GROUP),HX_HCSTRING("DEBUG_TYPE_POP_GROUP","\x58","\x29","\x6a","\xb8")},
	{hx::fsInt,(int)offsetof(KHR_debug_obj,DEBUG_SEVERITY_NOTIFICATION),HX_HCSTRING("DEBUG_SEVERITY_NOTIFICATION","\xa1","\xb3","\xa6","\x11")},
	{hx::fsInt,(int)offsetof(KHR_debug_obj,MAX_DEBUG_GROUP_STACK_DEPTH),HX_HCSTRING("MAX_DEBUG_GROUP_STACK_DEPTH","\xa5","\x1e","\xfc","\xf4")},
	{hx::fsInt,(int)offsetof(KHR_debug_obj,DEBUG_GROUP_STACK_DEPTH),HX_HCSTRING("DEBUG_GROUP_STACK_DEPTH","\xa0","\xe0","\x2d","\x54")},
	{hx::fsInt,(int)offsetof(KHR_debug_obj,BUFFER),HX_HCSTRING("BUFFER","\x00","\x69","\x17","\x83")},
	{hx::fsInt,(int)offsetof(KHR_debug_obj,SHADER),HX_HCSTRING("SHADER","\x25","\x6b","\xa3","\xcf")},
	{hx::fsInt,(int)offsetof(KHR_debug_obj,PROGRAM),HX_HCSTRING("PROGRAM","\x64","\x1e","\xcd","\x73")},
	{hx::fsInt,(int)offsetof(KHR_debug_obj,QUERY),HX_HCSTRING("QUERY","\xe8","\xc2","\xd8","\xdb")},
	{hx::fsInt,(int)offsetof(KHR_debug_obj,SAMPLER),HX_HCSTRING("SAMPLER","\xe8","\x98","\x9d","\x03")},
	{hx::fsInt,(int)offsetof(KHR_debug_obj,MAX_LABEL_LENGTH),HX_HCSTRING("MAX_LABEL_LENGTH","\x0c","\x59","\xf0","\xf1")},
	{hx::fsInt,(int)offsetof(KHR_debug_obj,MAX_DEBUG_MESSAGE_LENGTH),HX_HCSTRING("MAX_DEBUG_MESSAGE_LENGTH","\x65","\x08","\x17","\x87")},
	{hx::fsInt,(int)offsetof(KHR_debug_obj,MAX_DEBUG_LOGGED_MESSAGES),HX_HCSTRING("MAX_DEBUG_LOGGED_MESSAGES","\xe2","\x62","\x56","\xd5")},
	{hx::fsInt,(int)offsetof(KHR_debug_obj,DEBUG_LOGGED_MESSAGES),HX_HCSTRING("DEBUG_LOGGED_MESSAGES","\x1d","\x20","\x32","\xf8")},
	{hx::fsInt,(int)offsetof(KHR_debug_obj,DEBUG_SEVERITY_HIGH),HX_HCSTRING("DEBUG_SEVERITY_HIGH","\x18","\xbe","\x8d","\x35")},
	{hx::fsInt,(int)offsetof(KHR_debug_obj,DEBUG_SEVERITY_MEDIUM),HX_HCSTRING("DEBUG_SEVERITY_MEDIUM","\xab","\x58","\x3f","\xb3")},
	{hx::fsInt,(int)offsetof(KHR_debug_obj,DEBUG_SEVERITY_LOW),HX_HCSTRING("DEBUG_SEVERITY_LOW","\x7e","\xfa","\x43","\xa3")},
	{hx::fsInt,(int)offsetof(KHR_debug_obj,DEBUG_OUTPUT),HX_HCSTRING("DEBUG_OUTPUT","\xcd","\x3e","\x9f","\xda")},
	{hx::fsInt,(int)offsetof(KHR_debug_obj,CONTEXT_FLAG_DEBUG_BIT),HX_HCSTRING("CONTEXT_FLAG_DEBUG_BIT","\x7e","\x17","\xc3","\xb0")},
	{hx::fsInt,(int)offsetof(KHR_debug_obj,STACK_OVERFLOW),HX_HCSTRING("STACK_OVERFLOW","\x79","\xa6","\x54","\xa5")},
	{hx::fsInt,(int)offsetof(KHR_debug_obj,STACK_UNDERFLOW),HX_HCSTRING("STACK_UNDERFLOW","\xcf","\x21","\x6e","\xb5")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo *sStaticStorageInfo = 0;
#endif

static ::String sMemberFields[] = {
	HX_HCSTRING("DEBUG_OUTPUT_SYNCHRONOUS","\xb7","\x6c","\x34","\xb8"),
	HX_HCSTRING("DEBUG_NEXT_LOGGED_MESSAGE_LENGTH","\x5b","\xea","\xd6","\xb8"),
	HX_HCSTRING("DEBUG_CALLBACK_FUNCTION","\xc6","\xdf","\xcb","\xcf"),
	HX_HCSTRING("DEBUG_CALLBACK_USER_PARAM","\x67","\x50","\x4b","\xb2"),
	HX_HCSTRING("DEBUG_SOURCE_API","\xa2","\x9d","\xa7","\xfc"),
	HX_HCSTRING("DEBUG_SOURCE_WINDOW_SYSTEM","\xc6","\xf9","\xdc","\x4e"),
	HX_HCSTRING("DEBUG_SOURCE_SHADER_COMPILER","\x61","\xd0","\xc4","\x2b"),
	HX_HCSTRING("DEBUG_SOURCE_THIRD_PARTY","\xf6","\x6f","\x06","\x29"),
	HX_HCSTRING("DEBUG_SOURCE_APPLICATION","\x58","\x24","\xb6","\x0f"),
	HX_HCSTRING("DEBUG_SOURCE_OTHER","\xd8","\x3d","\x44","\x3e"),
	HX_HCSTRING("DEBUG_TYPE_ERROR","\xef","\x26","\x40","\xe9"),
	HX_HCSTRING("DEBUG_TYPE_DEPRECATED_BEHAVIOR","\xa5","\xcf","\x17","\x8c"),
	HX_HCSTRING("DEBUG_TYPE_UNDEFINED_BEHAVIOR","\xda","\x37","\x6a","\x74"),
	HX_HCSTRING("DEBUG_TYPE_PORTABILITY","\xb0","\x1e","\x6b","\x9d"),
	HX_HCSTRING("DEBUG_TYPE_PERFORMANCE","\x57","\x2c","\xfb","\xeb"),
	HX_HCSTRING("DEBUG_TYPE_OTHER","\xf7","\xc1","\x8c","\xac"),
	HX_HCSTRING("DEBUG_TYPE_MARKER","\x93","\xdc","\xe9","\x97"),
	HX_HCSTRING("DEBUG_TYPE_PUSH_GROUP","\x13","\x87","\x6b","\xca"),
	HX_HCSTRING("DEBUG_TYPE_POP_GROUP","\x58","\x29","\x6a","\xb8"),
	HX_HCSTRING("DEBUG_SEVERITY_NOTIFICATION","\xa1","\xb3","\xa6","\x11"),
	HX_HCSTRING("MAX_DEBUG_GROUP_STACK_DEPTH","\xa5","\x1e","\xfc","\xf4"),
	HX_HCSTRING("DEBUG_GROUP_STACK_DEPTH","\xa0","\xe0","\x2d","\x54"),
	HX_HCSTRING("BUFFER","\x00","\x69","\x17","\x83"),
	HX_HCSTRING("SHADER","\x25","\x6b","\xa3","\xcf"),
	HX_HCSTRING("PROGRAM","\x64","\x1e","\xcd","\x73"),
	HX_HCSTRING("QUERY","\xe8","\xc2","\xd8","\xdb"),
	HX_HCSTRING("SAMPLER","\xe8","\x98","\x9d","\x03"),
	HX_HCSTRING("MAX_LABEL_LENGTH","\x0c","\x59","\xf0","\xf1"),
	HX_HCSTRING("MAX_DEBUG_MESSAGE_LENGTH","\x65","\x08","\x17","\x87"),
	HX_HCSTRING("MAX_DEBUG_LOGGED_MESSAGES","\xe2","\x62","\x56","\xd5"),
	HX_HCSTRING("DEBUG_LOGGED_MESSAGES","\x1d","\x20","\x32","\xf8"),
	HX_HCSTRING("DEBUG_SEVERITY_HIGH","\x18","\xbe","\x8d","\x35"),
	HX_HCSTRING("DEBUG_SEVERITY_MEDIUM","\xab","\x58","\x3f","\xb3"),
	HX_HCSTRING("DEBUG_SEVERITY_LOW","\x7e","\xfa","\x43","\xa3"),
	HX_HCSTRING("DEBUG_OUTPUT","\xcd","\x3e","\x9f","\xda"),
	HX_HCSTRING("CONTEXT_FLAG_DEBUG_BIT","\x7e","\x17","\xc3","\xb0"),
	HX_HCSTRING("STACK_OVERFLOW","\x79","\xa6","\x54","\xa5"),
	HX_HCSTRING("STACK_UNDERFLOW","\xcf","\x21","\x6e","\xb5"),
	::String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(KHR_debug_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(KHR_debug_obj::__mClass,"__mClass");
};

#endif

hx::Class KHR_debug_obj::__mClass;

void KHR_debug_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("lime.graphics.opengl.ext.KHR_debug","\x87","\x84","\xb9","\x11");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = hx::Class_obj::dupFunctions(sMemberFields);
	__mClass->mCanCast = hx::TCanCast< KHR_debug_obj >;
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
