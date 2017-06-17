#include <hxcpp.h>

#ifndef INCLUDED_haxe_io_Bytes
#include <haxe/io/Bytes.h>
#endif
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
#ifndef INCLUDED_lime_net__HTTPRequest_Bytes
#include <lime/net/_HTTPRequest_Bytes.h>
#endif
#ifndef INCLUDED_lime_net__IHTTPRequest
#include <lime/net/_IHTTPRequest.h>
#endif
namespace lime{
namespace net{

Void _HTTPRequest_Bytes_obj::__construct(::String uri)
{
HX_STACK_FRAME("lime.net._HTTPRequest_Bytes","new",0xc45547d0,"lime.net._HTTPRequest_Bytes.new","lime/net/HTTPRequest.hx",93,0x339db723)
HX_STACK_THIS(this)
HX_STACK_ARG(uri,"uri")
{
	HX_STACK_LINE(95)
	::String tmp = uri;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(95)
	super::__construct(tmp);
}
;
	return null();
}

//_HTTPRequest_Bytes_obj::~_HTTPRequest_Bytes_obj() { }

Dynamic _HTTPRequest_Bytes_obj::__CreateEmpty() { return  new _HTTPRequest_Bytes_obj; }
hx::ObjectPtr< _HTTPRequest_Bytes_obj > _HTTPRequest_Bytes_obj::__new(::String uri)
{  hx::ObjectPtr< _HTTPRequest_Bytes_obj > _result_ = new _HTTPRequest_Bytes_obj();
	_result_->__construct(uri);
	return _result_;}

Dynamic _HTTPRequest_Bytes_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< _HTTPRequest_Bytes_obj > _result_ = new _HTTPRequest_Bytes_obj();
	_result_->__construct(inArgs[0]);
	return _result_;}

Dynamic _HTTPRequest_Bytes_obj::fromBytes( ::haxe::io::Bytes bytes){
	HX_STACK_FRAME("lime.net._HTTPRequest_Bytes","fromBytes",0x58799e11,"lime.net._HTTPRequest_Bytes.fromBytes","lime/net/HTTPRequest.hx",100,0x339db723)
	HX_STACK_THIS(this)
	HX_STACK_ARG(bytes,"bytes")
	HX_STACK_LINE(102)
	Dynamic tmp = ((Dynamic)(bytes));		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(102)
	return tmp;
}


HX_DEFINE_DYNAMIC_FUNC1(_HTTPRequest_Bytes_obj,fromBytes,return )

::lime::app::Future _HTTPRequest_Bytes_obj::load( ::String uri){
	HX_STACK_FRAME("lime.net._HTTPRequest_Bytes","load",0x04fea4b6,"lime.net._HTTPRequest_Bytes.load","lime/net/HTTPRequest.hx",107,0x339db723)
	HX_STACK_THIS(this)
	HX_STACK_ARG(uri,"uri")
	HX_STACK_LINE(107)
	::lime::net::_HTTPRequest_Bytes _g = hx::ObjectPtr<OBJ_>(this);		HX_STACK_VAR(_g,"_g");
	HX_STACK_LINE(109)
	bool tmp = (uri != null());		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(109)
	if ((tmp)){
		HX_STACK_LINE(111)
		this->uri = uri;
	}
	HX_STACK_LINE(115)
	::lime::app::Promise tmp1 = ::lime::app::Promise_obj::__new();		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(115)
	::lime::app::Promise promise = tmp1;		HX_STACK_VAR(promise,"promise");
	HX_STACK_LINE(116)
	::lime::_backend::native::NativeHTTPRequest tmp2 = this->backend;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(116)
	::String tmp3 = this->uri;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(116)
	::lime::app::Future tmp4 = tmp2->loadData(tmp3,null());		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(116)
	::lime::app::Future future = tmp4;		HX_STACK_VAR(future,"future");
	HX_STACK_LINE(118)
	Dynamic tmp5 = promise->progress_dyn();		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(118)
	future->onProgress(tmp5);
	HX_STACK_LINE(119)
	Dynamic tmp6 = promise->error_dyn();		HX_STACK_VAR(tmp6,"tmp6");
	HX_STACK_LINE(119)
	future->onError(tmp6);

	HX_BEGIN_LOCAL_FUNC_S2(hx::LocalFunc,_Function_1_1,::lime::net::_HTTPRequest_Bytes,_g,::lime::app::Promise,promise)
	int __ArgCount() const { return 1; }
	Void run(::haxe::io::Bytes bytes){
		HX_STACK_FRAME("*","_Function_1_1",0x5200ed37,"*._Function_1_1","lime/net/HTTPRequest.hx",121,0x339db723)
		HX_STACK_ARG(bytes,"bytes")
		{
			HX_STACK_LINE(123)
			::haxe::io::Bytes tmp7 = bytes;		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(123)
			Dynamic tmp8 = _g->fromBytes(tmp7);		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(123)
			_g->responseData = tmp8;
			HX_STACK_LINE(124)
			Dynamic tmp9 = _g->responseData;		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(124)
			promise->complete(tmp9);
		}
		return null();
	}
	HX_END_LOCAL_FUNC1((void))

	HX_STACK_LINE(121)
	future->onComplete( Dynamic(new _Function_1_1(_g,promise)));
	HX_STACK_LINE(128)
	::lime::app::Future tmp7 = promise->future;		HX_STACK_VAR(tmp7,"tmp7");
	HX_STACK_LINE(128)
	return tmp7;
}



_HTTPRequest_Bytes_obj::_HTTPRequest_Bytes_obj()
{
}

Dynamic _HTTPRequest_Bytes_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"load") ) { return load_dyn(); }
		break;
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
	HX_HCSTRING("load","\x26","\x9a","\xb7","\x47"),
	::String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(_HTTPRequest_Bytes_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(_HTTPRequest_Bytes_obj::__mClass,"__mClass");
};

#endif

hx::Class _HTTPRequest_Bytes_obj::__mClass;

void _HTTPRequest_Bytes_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("lime.net._HTTPRequest_Bytes","\xde","\x5f","\x09","\x09");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = hx::Class_obj::dupFunctions(sMemberFields);
	__mClass->mCanCast = hx::TCanCast< _HTTPRequest_Bytes_obj >;
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
