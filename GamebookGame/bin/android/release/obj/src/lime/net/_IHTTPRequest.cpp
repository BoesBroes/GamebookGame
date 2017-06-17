#include <hxcpp.h>

#ifndef INCLUDED_haxe_IMap
#include <haxe/IMap.h>
#endif
#ifndef INCLUDED_haxe_ds_StringMap
#include <haxe/ds/StringMap.h>
#endif
#ifndef INCLUDED_haxe_io_Bytes
#include <haxe/io/Bytes.h>
#endif
#ifndef INCLUDED_lime_net_HTTPRequestHeader
#include <lime/net/HTTPRequestHeader.h>
#endif
#ifndef INCLUDED_lime_net__IHTTPRequest
#include <lime/net/_IHTTPRequest.h>
#endif
namespace lime{
namespace net{


static ::String sMemberFields[] = {
	HX_HCSTRING("contentType","\x93","\x3c","\x7b","\x2a"),
	HX_HCSTRING("data","\x2a","\x56","\x63","\x42"),
	HX_HCSTRING("enableResponseHeaders","\x82","\x32","\x47","\x05"),
	HX_HCSTRING("followRedirects","\x26","\x5a","\x40","\x75"),
	HX_HCSTRING("formData","\x8e","\xd5","\x80","\x56"),
	HX_HCSTRING("headers","\x46","\x52","\x08","\x63"),
	HX_HCSTRING("method","\xe1","\xf6","\x5a","\x09"),
	HX_HCSTRING("responseHeaders","\xc5","\x0d","\xca","\x43"),
	HX_HCSTRING("responseStatus","\x93","\x60","\xa4","\x78"),
	HX_HCSTRING("timeout","\xa1","\x1a","\xf7","\xd8"),
	HX_HCSTRING("uri","\x6c","\x2b","\x59","\x00"),
	HX_HCSTRING("userAgent","\x7a","\xf0","\x12","\xc8"),
	HX_HCSTRING("cancel","\x7a","\xed","\x33","\xb8"),
	::String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(_IHTTPRequest_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(_IHTTPRequest_obj::__mClass,"__mClass");
};

#endif

hx::Class _IHTTPRequest_obj::__mClass;

void _IHTTPRequest_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("lime.net._IHTTPRequest","\x73","\xba","\x0c","\x8f");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mMembers = hx::Class_obj::dupFunctions(sMemberFields);
	__mClass->mCanCast = hx::TCanCast< _IHTTPRequest_obj >;
#ifdef HXCPP_VISIT_ALLOCS
	__mClass->mVisitFunc = sVisitStatics;
#endif
	hx::RegisterClass(__mClass->mName, __mClass);
}

} // end namespace lime
} // end namespace net
