#include <hxcpp.h>

#ifndef INCLUDED_lime__backend_native_NativeHTTPRequest
#include <lime/_backend/native/NativeHTTPRequest.h>
#endif
#ifndef INCLUDED_lime_app_Future
#include <lime/app/Future.h>
#endif
#ifndef INCLUDED_lime_app_Promise
#include <lime/app/Promise.h>
#endif
#ifndef INCLUDED_lime_net__HTTPRequest_AbstractHTTPRequest
#include <lime/net/_HTTPRequest/AbstractHTTPRequest.h>
#endif
#ifndef INCLUDED_lime_net__HTTPRequest_String
#include <lime/net/_HTTPRequest_String.h>
#endif
#ifndef INCLUDED_lime_net__IHTTPRequest
#include <lime/net/_IHTTPRequest.h>
#endif
namespace lime{
namespace net{

Void _HTTPRequest_String_obj::__construct(::String uri)
{
HX_STACK_FRAME("lime.net._HTTPRequest_String","new",0x883ccdf0,"lime.net._HTTPRequest_String.new","lime/net/HTTPRequest.hx",139,0x339db723)
HX_STACK_THIS(this)
HX_STACK_ARG(uri,"uri")
{
	HX_STACK_LINE(141)
	::String tmp = uri;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(141)
	super::__construct(tmp);
}
;
	return null();
}

//_HTTPRequest_String_obj::~_HTTPRequest_String_obj() { }

Dynamic _HTTPRequest_String_obj::__CreateEmpty() { return  new _HTTPRequest_String_obj; }
hx::ObjectPtr< _HTTPRequest_String_obj > _HTTPRequest_String_obj::__new(::String uri)
{  hx::ObjectPtr< _HTTPRequest_String_obj > _result_ = new _HTTPRequest_String_obj();
	_result_->__construct(uri);
	return _result_;}

Dynamic _HTTPRequest_String_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< _HTTPRequest_String_obj > _result_ = new _HTTPRequest_String_obj();
	_result_->__construct(inArgs[0]);
	return _result_;}

::lime::app::Future _HTTPRequest_String_obj::load( ::String uri){
	HX_STACK_FRAME("lime.net._HTTPRequest_String","load",0xabac7a96,"lime.net._HTTPRequest_String.load","lime/net/HTTPRequest.hx",146,0x339db723)
	HX_STACK_THIS(this)
	HX_STACK_ARG(uri,"uri")
	HX_STACK_LINE(146)
	::lime::net::_HTTPRequest_String _g = hx::ObjectPtr<OBJ_>(this);		HX_STACK_VAR(_g,"_g");
	HX_STACK_LINE(148)
	bool tmp = (uri != null());		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(148)
	if ((tmp)){
		HX_STACK_LINE(150)
		this->uri = uri;
	}
	HX_STACK_LINE(154)
	::lime::app::Promise tmp1 = ::lime::app::Promise_obj::__new();		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(154)
	::lime::app::Promise promise = tmp1;		HX_STACK_VAR(promise,"promise");
	HX_STACK_LINE(155)
	::lime::_backend::native::NativeHTTPRequest tmp2 = this->backend;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(155)
	::String tmp3 = this->uri;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(155)
	::lime::app::Future tmp4 = tmp2->loadText(tmp3);		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(155)
	::lime::app::Future future = tmp4;		HX_STACK_VAR(future,"future");
	HX_STACK_LINE(157)
	Dynamic tmp5 = promise->progress_dyn();		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(157)
	future->onProgress(tmp5);
	HX_STACK_LINE(158)
	Dynamic tmp6 = promise->error_dyn();		HX_STACK_VAR(tmp6,"tmp6");
	HX_STACK_LINE(158)
	future->onError(tmp6);

	HX_BEGIN_LOCAL_FUNC_S2(hx::LocalFunc,_Function_1_1,::lime::net::_HTTPRequest_String,_g,::lime::app::Promise,promise)
	int __ArgCount() const { return 1; }
	Void run(::String text){
		HX_STACK_FRAME("*","_Function_1_1",0x5200ed37,"*._Function_1_1","lime/net/HTTPRequest.hx",160,0x339db723)
		HX_STACK_ARG(text,"text")
		{
			HX_STACK_LINE(162)
			_g->responseData = ((Dynamic)(text));
			HX_STACK_LINE(163)
			Dynamic tmp7 = _g->responseData;		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(163)
			promise->complete(tmp7);
		}
		return null();
	}
	HX_END_LOCAL_FUNC1((void))

	HX_STACK_LINE(160)
	future->onComplete( Dynamic(new _Function_1_1(_g,promise)));
	HX_STACK_LINE(167)
	::lime::app::Future tmp7 = promise->future;		HX_STACK_VAR(tmp7,"tmp7");
	HX_STACK_LINE(167)
	return tmp7;
}



_HTTPRequest_String_obj::_HTTPRequest_String_obj()
{
}

Dynamic _HTTPRequest_String_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"load") ) { return load_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

#if HXCPP_SCRIPTABLE
static hx::StorageInfo *sMemberStorageInfo = 0;
static hx::StaticInfo *sStaticStorageInfo = 0;
#endif

static ::String sMemberFields[] = {
	HX_HCSTRING("load","\x26","\x9a","\xb7","\x47"),
	::String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(_HTTPRequest_String_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(_HTTPRequest_String_obj::__mClass,"__mClass");
};

#endif

hx::Class _HTTPRequest_String_obj::__mClass;

void _HTTPRequest_String_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("lime.net._HTTPRequest_String","\xfe","\x55","\xeb","\xc8");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = hx::Class_obj::dupFunctions(sMemberFields);
	__mClass->mCanCast = hx::TCanCast< _HTTPRequest_String_obj >;
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
