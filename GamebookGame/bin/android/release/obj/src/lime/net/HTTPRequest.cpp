#include <hxcpp.h>

#ifndef INCLUDED_lime_net_HTTPRequest
#include <lime/net/HTTPRequest.h>
#endif
#ifndef INCLUDED_lime_net__HTTPRequest_AbstractHTTPRequest
#include <lime/net/_HTTPRequest/AbstractHTTPRequest.h>
#endif
#ifndef INCLUDED_lime_net__IHTTPRequest
#include <lime/net/_IHTTPRequest.h>
#endif
namespace lime{
namespace net{

Void HTTPRequest_obj::__construct(::String uri)
{
{
	::String tmp = uri;
	super::__construct(tmp);
}
;
	return null();
}

//HTTPRequest_obj::~HTTPRequest_obj() { }

Dynamic HTTPRequest_obj::__CreateEmpty() { return  new HTTPRequest_obj; }
hx::ObjectPtr< HTTPRequest_obj > HTTPRequest_obj::__new(::String uri)
{  hx::ObjectPtr< HTTPRequest_obj > _result_ = new HTTPRequest_obj();
	_result_->__construct(uri);
	return _result_;}

Dynamic HTTPRequest_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< HTTPRequest_obj > _result_ = new HTTPRequest_obj();
	_result_->__construct(inArgs[0]);
	return _result_;}


HTTPRequest_obj::HTTPRequest_obj()
{
}

#if HXCPP_SCRIPTABLE
static hx::StorageInfo *sMemberStorageInfo = 0;
static hx::StaticInfo *sStaticStorageInfo = 0;
#endif

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(HTTPRequest_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(HTTPRequest_obj::__mClass,"__mClass");
};

#endif

hx::Class HTTPRequest_obj::__mClass;

void HTTPRequest_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("lime.net.HTTPRequest","\xbd","\x73","\x25","\x4c");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = hx::Class_obj::dupFunctions(0 /* sMemberFields */);
	__mClass->mCanCast = hx::TCanCast< HTTPRequest_obj >;
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
