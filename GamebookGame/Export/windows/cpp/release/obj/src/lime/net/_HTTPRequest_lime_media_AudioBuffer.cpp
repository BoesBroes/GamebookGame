#include <hxcpp.h>

#ifndef INCLUDED_haxe_io_Bytes
#include <haxe/io/Bytes.h>
#endif
#ifndef INCLUDED_lime_media_AudioBuffer
#include <lime/media/AudioBuffer.h>
#endif
#ifndef INCLUDED_lime_net__HTTPRequest_AbstractHTTPRequest
#include <lime/net/_HTTPRequest/AbstractHTTPRequest.h>
#endif
#ifndef INCLUDED_lime_net__HTTPRequest_Bytes
#include <lime/net/_HTTPRequest_Bytes.h>
#endif
#ifndef INCLUDED_lime_net__HTTPRequest_lime_media_AudioBuffer
#include <lime/net/_HTTPRequest_lime_media_AudioBuffer.h>
#endif
#ifndef INCLUDED_lime_net__IHTTPRequest
#include <lime/net/_IHTTPRequest.h>
#endif
namespace lime{
namespace net{

Void _HTTPRequest_lime_media_AudioBuffer_obj::__construct(::String uri)
{
HX_STACK_FRAME("lime.net._HTTPRequest_lime_media_AudioBuffer","new",0xe9102f50,"lime.net._HTTPRequest_lime_media_AudioBuffer.new","lime/_macros/HTTPRequestMacro.hx",131,0xa1943d76)
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

//_HTTPRequest_lime_media_AudioBuffer_obj::~_HTTPRequest_lime_media_AudioBuffer_obj() { }

Dynamic _HTTPRequest_lime_media_AudioBuffer_obj::__CreateEmpty() { return  new _HTTPRequest_lime_media_AudioBuffer_obj; }
hx::ObjectPtr< _HTTPRequest_lime_media_AudioBuffer_obj > _HTTPRequest_lime_media_AudioBuffer_obj::__new(::String uri)
{  hx::ObjectPtr< _HTTPRequest_lime_media_AudioBuffer_obj > _result_ = new _HTTPRequest_lime_media_AudioBuffer_obj();
	_result_->__construct(uri);
	return _result_;}

Dynamic _HTTPRequest_lime_media_AudioBuffer_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< _HTTPRequest_lime_media_AudioBuffer_obj > _result_ = new _HTTPRequest_lime_media_AudioBuffer_obj();
	_result_->__construct(inArgs[0]);
	return _result_;}

Dynamic _HTTPRequest_lime_media_AudioBuffer_obj::fromBytes( ::haxe::io::Bytes bytes){
	HX_STACK_FRAME("lime.net._HTTPRequest_lime_media_AudioBuffer","fromBytes",0x6d972591,"lime.net._HTTPRequest_lime_media_AudioBuffer.fromBytes","lime/media/AudioBuffer.hx",331,0xf6fabaad)
	HX_STACK_THIS(this)
	HX_STACK_ARG(bytes,"bytes")
	HX_STACK_LINE(331)
	::haxe::io::Bytes tmp = bytes;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(331)
	::lime::media::AudioBuffer tmp1 = ::lime::media::AudioBuffer_obj::fromBytes(tmp);		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(331)
	return tmp1;
}



_HTTPRequest_lime_media_AudioBuffer_obj::_HTTPRequest_lime_media_AudioBuffer_obj()
{
}

Dynamic _HTTPRequest_lime_media_AudioBuffer_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
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
	HX_MARK_MEMBER_NAME(_HTTPRequest_lime_media_AudioBuffer_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(_HTTPRequest_lime_media_AudioBuffer_obj::__mClass,"__mClass");
};

#endif

hx::Class _HTTPRequest_lime_media_AudioBuffer_obj::__mClass;

void _HTTPRequest_lime_media_AudioBuffer_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("lime.net._HTTPRequest_lime_media_AudioBuffer","\x5e","\x87","\x5a","\xdd");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = hx::Class_obj::dupFunctions(sMemberFields);
	__mClass->mCanCast = hx::TCanCast< _HTTPRequest_lime_media_AudioBuffer_obj >;
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
