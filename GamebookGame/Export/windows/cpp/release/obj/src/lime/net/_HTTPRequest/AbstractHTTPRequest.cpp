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
#ifndef INCLUDED_lime__backend_native_NativeHTTPRequest
#include <lime/_backend/native/NativeHTTPRequest.h>
#endif
#ifndef INCLUDED_lime_app_Future
#include <lime/app/Future.h>
#endif
#ifndef INCLUDED_lime_net_HTTPRequestHeader
#include <lime/net/HTTPRequestHeader.h>
#endif
#ifndef INCLUDED_lime_net__HTTPRequest_AbstractHTTPRequest
#include <lime/net/_HTTPRequest/AbstractHTTPRequest.h>
#endif
#ifndef INCLUDED_lime_net__IHTTPRequest
#include <lime/net/_IHTTPRequest.h>
#endif
namespace lime{
namespace net{
namespace _HTTPRequest{

Void AbstractHTTPRequest_obj::__construct(::String uri)
{
HX_STACK_FRAME("lime.net._HTTPRequest.AbstractHTTPRequest","new",0x2f7ffcbb,"lime.net._HTTPRequest.AbstractHTTPRequest.new","lime/net/HTTPRequest.hx",49,0x339db723)
HX_STACK_THIS(this)
HX_STACK_ARG(uri,"uri")
{
	HX_STACK_LINE(51)
	this->uri = uri;
	HX_STACK_LINE(53)
	this->contentType = HX_HCSTRING("application/x-www-form-urlencoded","\x9e","\x61","\x91","\xfa");
	HX_STACK_LINE(54)
	this->followRedirects = true;
	HX_STACK_LINE(55)
	::haxe::ds::StringMap tmp;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(55)
	{
		HX_STACK_LINE(55)
		::haxe::ds::StringMap tmp1 = ::haxe::ds::StringMap_obj::__new();		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(55)
		::haxe::ds::StringMap tmp2 = tmp1;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(55)
		tmp = tmp2;
	}
	HX_STACK_LINE(55)
	this->formData = tmp;
	HX_STACK_LINE(56)
	this->headers = Array_obj< ::Dynamic >::__new();
	HX_STACK_LINE(57)
	this->method = HX_HCSTRING("GET","\x76","\x1c","\x36","\x00");
	HX_STACK_LINE(58)
	this->timeout = (int)30000;
	HX_STACK_LINE(61)
	::lime::_backend::native::NativeHTTPRequest tmp1 = ::lime::_backend::native::NativeHTTPRequest_obj::__new();		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(61)
	this->backend = tmp1;
	HX_STACK_LINE(62)
	::lime::_backend::native::NativeHTTPRequest tmp2 = this->backend;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(62)
	tmp2->init(hx::ObjectPtr<OBJ_>(this));
}
;
	return null();
}

//AbstractHTTPRequest_obj::~AbstractHTTPRequest_obj() { }

Dynamic AbstractHTTPRequest_obj::__CreateEmpty() { return  new AbstractHTTPRequest_obj; }
hx::ObjectPtr< AbstractHTTPRequest_obj > AbstractHTTPRequest_obj::__new(::String uri)
{  hx::ObjectPtr< AbstractHTTPRequest_obj > _result_ = new AbstractHTTPRequest_obj();
	_result_->__construct(uri);
	return _result_;}

Dynamic AbstractHTTPRequest_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< AbstractHTTPRequest_obj > _result_ = new AbstractHTTPRequest_obj();
	_result_->__construct(inArgs[0]);
	return _result_;}

hx::Object *AbstractHTTPRequest_obj::__ToInterface(const hx::type_info &inType) {
	if (inType==typeid( ::lime::net::_IHTTPRequest_obj)) return operator ::lime::net::_IHTTPRequest_obj *();
	return super::__ToInterface(inType);
}

AbstractHTTPRequest_obj::operator ::lime::net::_IHTTPRequest_obj *()
	{ return new ::lime::net::_IHTTPRequest_delegate_< AbstractHTTPRequest_obj >(this); }
Void AbstractHTTPRequest_obj::cancel( ){
{
		HX_STACK_FRAME("lime.net._HTTPRequest.AbstractHTTPRequest","cancel",0x9e11abff,"lime.net._HTTPRequest.AbstractHTTPRequest.cancel","lime/net/HTTPRequest.hx",68,0x339db723)
		HX_STACK_THIS(this)
		HX_STACK_LINE(71)
		::lime::_backend::native::NativeHTTPRequest tmp = this->backend;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(71)
		tmp->cancel();
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(AbstractHTTPRequest_obj,cancel,(void))

::lime::app::Future AbstractHTTPRequest_obj::load( ::String uri){
	HX_STACK_FRAME("lime.net._HTTPRequest.AbstractHTTPRequest","load",0x5f323d6b,"lime.net._HTTPRequest.AbstractHTTPRequest.load","lime/net/HTTPRequest.hx",79,0x339db723)
	HX_STACK_THIS(this)
	HX_STACK_ARG(uri,"uri")
	HX_STACK_LINE(79)
	return null();
}


HX_DEFINE_DYNAMIC_FUNC1(AbstractHTTPRequest_obj,load,return )


AbstractHTTPRequest_obj::AbstractHTTPRequest_obj()
{
}

void AbstractHTTPRequest_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(AbstractHTTPRequest);
	HX_MARK_MEMBER_NAME(contentType,"contentType");
	HX_MARK_MEMBER_NAME(data,"data");
	HX_MARK_MEMBER_NAME(enableResponseHeaders,"enableResponseHeaders");
	HX_MARK_MEMBER_NAME(followRedirects,"followRedirects");
	HX_MARK_MEMBER_NAME(formData,"formData");
	HX_MARK_MEMBER_NAME(headers,"headers");
	HX_MARK_MEMBER_NAME(method,"method");
	HX_MARK_MEMBER_NAME(responseData,"responseData");
	HX_MARK_MEMBER_NAME(responseHeaders,"responseHeaders");
	HX_MARK_MEMBER_NAME(responseStatus,"responseStatus");
	HX_MARK_MEMBER_NAME(timeout,"timeout");
	HX_MARK_MEMBER_NAME(uri,"uri");
	HX_MARK_MEMBER_NAME(userAgent,"userAgent");
	HX_MARK_MEMBER_NAME(backend,"backend");
	HX_MARK_END_CLASS();
}

void AbstractHTTPRequest_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(contentType,"contentType");
	HX_VISIT_MEMBER_NAME(data,"data");
	HX_VISIT_MEMBER_NAME(enableResponseHeaders,"enableResponseHeaders");
	HX_VISIT_MEMBER_NAME(followRedirects,"followRedirects");
	HX_VISIT_MEMBER_NAME(formData,"formData");
	HX_VISIT_MEMBER_NAME(headers,"headers");
	HX_VISIT_MEMBER_NAME(method,"method");
	HX_VISIT_MEMBER_NAME(responseData,"responseData");
	HX_VISIT_MEMBER_NAME(responseHeaders,"responseHeaders");
	HX_VISIT_MEMBER_NAME(responseStatus,"responseStatus");
	HX_VISIT_MEMBER_NAME(timeout,"timeout");
	HX_VISIT_MEMBER_NAME(uri,"uri");
	HX_VISIT_MEMBER_NAME(userAgent,"userAgent");
	HX_VISIT_MEMBER_NAME(backend,"backend");
}

Dynamic AbstractHTTPRequest_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"uri") ) { return uri; }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"data") ) { return data; }
		if (HX_FIELD_EQ(inName,"load") ) { return load_dyn(); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"method") ) { return method; }
		if (HX_FIELD_EQ(inName,"cancel") ) { return cancel_dyn(); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"headers") ) { return headers; }
		if (HX_FIELD_EQ(inName,"timeout") ) { return timeout; }
		if (HX_FIELD_EQ(inName,"backend") ) { return backend; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"formData") ) { return formData; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"userAgent") ) { return userAgent; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"contentType") ) { return contentType; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"responseData") ) { return responseData; }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"responseStatus") ) { return responseStatus; }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"followRedirects") ) { return followRedirects; }
		if (HX_FIELD_EQ(inName,"responseHeaders") ) { return responseHeaders; }
		break;
	case 21:
		if (HX_FIELD_EQ(inName,"enableResponseHeaders") ) { return enableResponseHeaders; }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic AbstractHTTPRequest_obj::__SetField(const ::String &inName,const Dynamic &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"uri") ) { uri=inValue.Cast< ::String >(); return inValue; }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"data") ) { data=inValue.Cast< ::haxe::io::Bytes >(); return inValue; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"method") ) { method=inValue.Cast< ::String >(); return inValue; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"headers") ) { headers=inValue.Cast< Array< ::Dynamic > >(); return inValue; }
		if (HX_FIELD_EQ(inName,"timeout") ) { timeout=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"backend") ) { backend=inValue.Cast< ::lime::_backend::native::NativeHTTPRequest >(); return inValue; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"formData") ) { formData=inValue.Cast< ::haxe::ds::StringMap >(); return inValue; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"userAgent") ) { userAgent=inValue.Cast< ::String >(); return inValue; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"contentType") ) { contentType=inValue.Cast< ::String >(); return inValue; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"responseData") ) { responseData=inValue.Cast< Dynamic >(); return inValue; }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"responseStatus") ) { responseStatus=inValue.Cast< int >(); return inValue; }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"followRedirects") ) { followRedirects=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"responseHeaders") ) { responseHeaders=inValue.Cast< Array< ::Dynamic > >(); return inValue; }
		break;
	case 21:
		if (HX_FIELD_EQ(inName,"enableResponseHeaders") ) { enableResponseHeaders=inValue.Cast< bool >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void AbstractHTTPRequest_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("contentType","\x93","\x3c","\x7b","\x2a"));
	outFields->push(HX_HCSTRING("data","\x2a","\x56","\x63","\x42"));
	outFields->push(HX_HCSTRING("enableResponseHeaders","\x82","\x32","\x47","\x05"));
	outFields->push(HX_HCSTRING("followRedirects","\x26","\x5a","\x40","\x75"));
	outFields->push(HX_HCSTRING("formData","\x8e","\xd5","\x80","\x56"));
	outFields->push(HX_HCSTRING("headers","\x46","\x52","\x08","\x63"));
	outFields->push(HX_HCSTRING("method","\xe1","\xf6","\x5a","\x09"));
	outFields->push(HX_HCSTRING("responseData","\x4b","\x05","\xe9","\xc4"));
	outFields->push(HX_HCSTRING("responseHeaders","\xc5","\x0d","\xca","\x43"));
	outFields->push(HX_HCSTRING("responseStatus","\x93","\x60","\xa4","\x78"));
	outFields->push(HX_HCSTRING("timeout","\xa1","\x1a","\xf7","\xd8"));
	outFields->push(HX_HCSTRING("uri","\x6c","\x2b","\x59","\x00"));
	outFields->push(HX_HCSTRING("userAgent","\x7a","\xf0","\x12","\xc8"));
	outFields->push(HX_HCSTRING("backend","\x14","\xbc","\x87","\xfb"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsString,(int)offsetof(AbstractHTTPRequest_obj,contentType),HX_HCSTRING("contentType","\x93","\x3c","\x7b","\x2a")},
	{hx::fsObject /*::haxe::io::Bytes*/ ,(int)offsetof(AbstractHTTPRequest_obj,data),HX_HCSTRING("data","\x2a","\x56","\x63","\x42")},
	{hx::fsBool,(int)offsetof(AbstractHTTPRequest_obj,enableResponseHeaders),HX_HCSTRING("enableResponseHeaders","\x82","\x32","\x47","\x05")},
	{hx::fsBool,(int)offsetof(AbstractHTTPRequest_obj,followRedirects),HX_HCSTRING("followRedirects","\x26","\x5a","\x40","\x75")},
	{hx::fsObject /*::haxe::ds::StringMap*/ ,(int)offsetof(AbstractHTTPRequest_obj,formData),HX_HCSTRING("formData","\x8e","\xd5","\x80","\x56")},
	{hx::fsObject /*Array< ::Dynamic >*/ ,(int)offsetof(AbstractHTTPRequest_obj,headers),HX_HCSTRING("headers","\x46","\x52","\x08","\x63")},
	{hx::fsString,(int)offsetof(AbstractHTTPRequest_obj,method),HX_HCSTRING("method","\xe1","\xf6","\x5a","\x09")},
	{hx::fsObject /*Dynamic*/ ,(int)offsetof(AbstractHTTPRequest_obj,responseData),HX_HCSTRING("responseData","\x4b","\x05","\xe9","\xc4")},
	{hx::fsObject /*Array< ::Dynamic >*/ ,(int)offsetof(AbstractHTTPRequest_obj,responseHeaders),HX_HCSTRING("responseHeaders","\xc5","\x0d","\xca","\x43")},
	{hx::fsInt,(int)offsetof(AbstractHTTPRequest_obj,responseStatus),HX_HCSTRING("responseStatus","\x93","\x60","\xa4","\x78")},
	{hx::fsInt,(int)offsetof(AbstractHTTPRequest_obj,timeout),HX_HCSTRING("timeout","\xa1","\x1a","\xf7","\xd8")},
	{hx::fsString,(int)offsetof(AbstractHTTPRequest_obj,uri),HX_HCSTRING("uri","\x6c","\x2b","\x59","\x00")},
	{hx::fsString,(int)offsetof(AbstractHTTPRequest_obj,userAgent),HX_HCSTRING("userAgent","\x7a","\xf0","\x12","\xc8")},
	{hx::fsObject /*::lime::_backend::native::NativeHTTPRequest*/ ,(int)offsetof(AbstractHTTPRequest_obj,backend),HX_HCSTRING("backend","\x14","\xbc","\x87","\xfb")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo *sStaticStorageInfo = 0;
#endif

static ::String sMemberFields[] = {
	HX_HCSTRING("contentType","\x93","\x3c","\x7b","\x2a"),
	HX_HCSTRING("data","\x2a","\x56","\x63","\x42"),
	HX_HCSTRING("enableResponseHeaders","\x82","\x32","\x47","\x05"),
	HX_HCSTRING("followRedirects","\x26","\x5a","\x40","\x75"),
	HX_HCSTRING("formData","\x8e","\xd5","\x80","\x56"),
	HX_HCSTRING("headers","\x46","\x52","\x08","\x63"),
	HX_HCSTRING("method","\xe1","\xf6","\x5a","\x09"),
	HX_HCSTRING("responseData","\x4b","\x05","\xe9","\xc4"),
	HX_HCSTRING("responseHeaders","\xc5","\x0d","\xca","\x43"),
	HX_HCSTRING("responseStatus","\x93","\x60","\xa4","\x78"),
	HX_HCSTRING("timeout","\xa1","\x1a","\xf7","\xd8"),
	HX_HCSTRING("uri","\x6c","\x2b","\x59","\x00"),
	HX_HCSTRING("userAgent","\x7a","\xf0","\x12","\xc8"),
	HX_HCSTRING("backend","\x14","\xbc","\x87","\xfb"),
	HX_HCSTRING("cancel","\x7a","\xed","\x33","\xb8"),
	HX_HCSTRING("load","\x26","\x9a","\xb7","\x47"),
	::String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(AbstractHTTPRequest_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(AbstractHTTPRequest_obj::__mClass,"__mClass");
};

#endif

hx::Class AbstractHTTPRequest_obj::__mClass;

void AbstractHTTPRequest_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("lime.net._HTTPRequest.AbstractHTTPRequest","\x49","\x83","\x86","\x4f");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = hx::Class_obj::dupFunctions(sMemberFields);
	__mClass->mCanCast = hx::TCanCast< AbstractHTTPRequest_obj >;
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
} // end namespace _HTTPRequest
