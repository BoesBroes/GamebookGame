#include <hxcpp.h>

#ifndef INCLUDED_haxe_io_Bytes
#include <haxe/io/Bytes.h>
#endif
#ifndef INCLUDED_lime_net__HTTPRequest_AbstractHTTPRequest
#include <lime/net/_HTTPRequest/AbstractHTTPRequest.h>
#endif
#ifndef INCLUDED_lime_net__HTTPRequest_Bytes
#include <lime/net/_HTTPRequest_Bytes.h>
#endif
#ifndef INCLUDED_lime_net__HTTPRequest_openfl_utils_ByteArray
#include <lime/net/_HTTPRequest_openfl_utils_ByteArray.h>
#endif
#ifndef INCLUDED_lime_net__IHTTPRequest
#include <lime/net/_IHTTPRequest.h>
#endif
#ifndef INCLUDED_openfl_utils_ByteArrayData
#include <openfl/utils/ByteArrayData.h>
#endif
#ifndef INCLUDED_openfl_utils_IDataInput
#include <openfl/utils/IDataInput.h>
#endif
#ifndef INCLUDED_openfl_utils_IDataOutput
#include <openfl/utils/IDataOutput.h>
#endif
#ifndef INCLUDED_openfl_utils__ByteArray_ByteArray_Impl_
#include <openfl/utils/_ByteArray/ByteArray_Impl_.h>
#endif
namespace lime{
namespace net{

Void _HTTPRequest_openfl_utils_ByteArray_obj::__construct(::String uri)
{
HX_STACK_FRAME("lime.net._HTTPRequest_openfl_utils_ByteArray","new",0xb743fd13,"lime.net._HTTPRequest_openfl_utils_ByteArray.new","lime/_macros/HTTPRequestMacro.hx",131,0xa1943d76)
HX_STACK_THIS(this)
HX_STACK_ARG(uri,"uri")
{
	HX_STACK_LINE(131)
	::String tmp = uri;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(131)
	super::__construct(tmp);
}
;
	return null();
}

//_HTTPRequest_openfl_utils_ByteArray_obj::~_HTTPRequest_openfl_utils_ByteArray_obj() { }

Dynamic _HTTPRequest_openfl_utils_ByteArray_obj::__CreateEmpty() { return  new _HTTPRequest_openfl_utils_ByteArray_obj; }
hx::ObjectPtr< _HTTPRequest_openfl_utils_ByteArray_obj > _HTTPRequest_openfl_utils_ByteArray_obj::__new(::String uri)
{  hx::ObjectPtr< _HTTPRequest_openfl_utils_ByteArray_obj > _result_ = new _HTTPRequest_openfl_utils_ByteArray_obj();
	_result_->__construct(uri);
	return _result_;}

Dynamic _HTTPRequest_openfl_utils_ByteArray_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< _HTTPRequest_openfl_utils_ByteArray_obj > _result_ = new _HTTPRequest_openfl_utils_ByteArray_obj();
	_result_->__construct(inArgs[0]);
	return _result_;}

Dynamic _HTTPRequest_openfl_utils_ByteArray_obj::fromBytes( ::haxe::io::Bytes bytes){
	HX_STACK_FRAME("lime.net._HTTPRequest_openfl_utils_ByteArray","fromBytes",0xc0fc2794,"lime.net._HTTPRequest_openfl_utils_ByteArray.fromBytes","openfl/net/URLLoader.hx",63,0x11daec0d)
	HX_STACK_THIS(this)
	HX_STACK_ARG(bytes,"bytes")
	HX_STACK_LINE(63)
	::haxe::io::Bytes tmp = bytes;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(63)
	::openfl::utils::ByteArrayData tmp1 = ::openfl::utils::_ByteArray::ByteArray_Impl__obj::fromBytes(tmp);		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(63)
	return tmp1;
}



_HTTPRequest_openfl_utils_ByteArray_obj::_HTTPRequest_openfl_utils_ByteArray_obj()
{
}

Dynamic _HTTPRequest_openfl_utils_ByteArray_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 9:
		if (HX_FIELD_EQ(inName,"fromBytes") ) { return fromBytes_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

#if HXCPP_SCRIPTABLE
static hx::StorageInfo *sMemberStorageInfo = 0;
static hx::StaticInfo *sStaticStorageInfo = 0;
#endif

static ::String sMemberFields[] = {
	HX_HCSTRING("fromBytes","\xa1","\xf2","\x20","\x72"),
	::String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(_HTTPRequest_openfl_utils_ByteArray_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(_HTTPRequest_openfl_utils_ByteArray_obj::__mClass,"__mClass");
};

#endif

hx::Class _HTTPRequest_openfl_utils_ByteArray_obj::__mClass;

void _HTTPRequest_openfl_utils_ByteArray_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("lime.net._HTTPRequest_openfl_utils_ByteArray","\xa1","\x77","\x7d","\x33");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = hx::Class_obj::dupFunctions(sMemberFields);
	__mClass->mCanCast = hx::TCanCast< _HTTPRequest_openfl_utils_ByteArray_obj >;
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
} // end namespace net
