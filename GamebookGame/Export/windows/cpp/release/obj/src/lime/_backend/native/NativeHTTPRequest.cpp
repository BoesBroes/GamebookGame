#include <hxcpp.h>

#ifndef INCLUDED_Std
#include <Std.h>
#endif
#ifndef INCLUDED_StringTools
#include <StringTools.h>
#endif
#ifndef INCLUDED_haxe_IMap
#include <haxe/IMap.h>
#endif
#ifndef INCLUDED_haxe_Timer
#include <haxe/Timer.h>
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
#ifndef INCLUDED_lime_app_Promise_String
#include <lime/app/Promise_String.h>
#endif
#ifndef INCLUDED_lime_app_Promise_haxe_io_Bytes
#include <lime/app/Promise_haxe_io_Bytes.h>
#endif
#ifndef INCLUDED_lime_app__Event_Dynamic_Void
#include <lime/app/_Event_Dynamic_Void.h>
#endif
#ifndef INCLUDED_lime_net_HTTPRequestHeader
#include <lime/net/HTTPRequestHeader.h>
#endif
#ifndef INCLUDED_lime_net__IHTTPRequest
#include <lime/net/_IHTTPRequest.h>
#endif
#ifndef INCLUDED_lime_net_curl_CURLEasy
#include <lime/net/curl/CURLEasy.h>
#endif
#ifndef INCLUDED_lime_net_curl__CURL_CURL_Impl_
#include <lime/net/curl/_CURL/CURL_Impl_.h>
#endif
#ifndef INCLUDED_lime_system_ThreadPool
#include <lime/system/ThreadPool.h>
#endif
#ifndef INCLUDED_lime_utils__Bytes_Bytes_Impl_
#include <lime/utils/_Bytes/Bytes_Impl_.h>
#endif
#ifndef INCLUDED_sys_FileSystem
#include <sys/FileSystem.h>
#endif
namespace lime{
namespace _backend{
namespace native{

Void NativeHTTPRequest_obj::__construct()
{
{
	this->curl = (int)0;
	::lime::app::Promise_haxe_io_Bytes tmp = ::lime::app::Promise_haxe_io_Bytes_obj::__new();
	this->promise = tmp;
}
;
	return null();
}

//NativeHTTPRequest_obj::~NativeHTTPRequest_obj() { }

Dynamic NativeHTTPRequest_obj::__CreateEmpty() { return  new NativeHTTPRequest_obj; }
hx::ObjectPtr< NativeHTTPRequest_obj > NativeHTTPRequest_obj::__new()
{  hx::ObjectPtr< NativeHTTPRequest_obj > _result_ = new NativeHTTPRequest_obj();
	_result_->__construct();
	return _result_;}

Dynamic NativeHTTPRequest_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< NativeHTTPRequest_obj > _result_ = new NativeHTTPRequest_obj();
	_result_->__construct();
	return _result_;}

Void NativeHTTPRequest_obj::cancel( ){
{
		Float tmp = this->curl;
		bool tmp1 = (tmp != (int)0);
		if ((tmp1)){
			Float tmp2 = this->curl;
			::lime::net::curl::CURLEasy_obj::reset(tmp2);
			Float tmp3 = this->curl;
			::lime::net::curl::CURLEasy_obj::perform(tmp3);
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(NativeHTTPRequest_obj,cancel,(void))

Void NativeHTTPRequest_obj::init( ::lime::net::_IHTTPRequest parent){
{
		this->parent = parent;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(NativeHTTPRequest_obj,init,(void))

::lime::app::Future NativeHTTPRequest_obj::loadData( ::String uri,hx::Null< bool >  __o_binary){
bool binary = __o_binary.Default(true);
{
		::lime::_backend::native::NativeHTTPRequest _g = hx::ObjectPtr<OBJ_>(this);
		::lime::_system::ThreadPool tmp = ::lime::_backend::native::NativeHTTPRequest_obj::threadPool;
		bool tmp1 = (tmp == null());
		if ((tmp1)){
			::lime::net::curl::_CURL::CURL_Impl__obj::globalInit((int)3);
			::lime::_system::ThreadPool tmp2 = ::lime::_system::ThreadPool_obj::__new((int)1,(int)5);
			::lime::_backend::native::NativeHTTPRequest_obj::threadPool = tmp2;
			::lime::_system::ThreadPool tmp3 = ::lime::_backend::native::NativeHTTPRequest_obj::threadPool;
			Dynamic tmp4 = ::lime::_backend::native::NativeHTTPRequest_obj::threadPool_doWork_dyn();
			tmp3->__Field(HX_HCSTRING("doWork","\xfc","\xa6","\x00","\x1f"), hx::paccDynamic )->__Field(HX_HCSTRING("add","\x21","\xf2","\x49","\x00"), hx::paccDynamic )(tmp4,null(),null());
			::lime::_system::ThreadPool tmp5 = ::lime::_backend::native::NativeHTTPRequest_obj::threadPool;
			Dynamic tmp6 = ::lime::_backend::native::NativeHTTPRequest_obj::threadPool_onComplete_dyn();
			tmp5->__Field(HX_HCSTRING("onComplete","\xf8","\xd4","\x7e","\x5d"), hx::paccDynamic )->__Field(HX_HCSTRING("add","\x21","\xf2","\x49","\x00"), hx::paccDynamic )(tmp6,null(),null());
			::lime::_system::ThreadPool tmp7 = ::lime::_backend::native::NativeHTTPRequest_obj::threadPool;
			Dynamic tmp8 = ::lime::_backend::native::NativeHTTPRequest_obj::threadPool_onError_dyn();
			tmp7->__Field(HX_HCSTRING("onError","\x29","\x6a","\x67","\x09"), hx::paccDynamic )->__Field(HX_HCSTRING("add","\x21","\xf2","\x49","\x00"), hx::paccDynamic )(tmp8,null(),null());
		}
		::lime::net::_IHTTPRequest tmp2 = this->parent;
		int tmp3 = tmp2->__Field(HX_HCSTRING("timeout","\xa1","\x1a","\xf7","\xd8"), hx::paccDynamic );
		bool tmp4 = (tmp3 > (int)0);
		if ((tmp4)){
			::lime::net::_IHTTPRequest tmp5 = this->parent;
			int tmp6 = tmp5->__Field(HX_HCSTRING("timeout","\xa1","\x1a","\xf7","\xd8"), hx::paccDynamic );

			HX_BEGIN_LOCAL_FUNC_S1(hx::LocalFunc,_Function_2_1,::lime::_backend::native::NativeHTTPRequest,_g)
			int __ArgCount() const { return 0; }
			Void run(){
				{
					bool tmp7 = (_g->bytesLoaded == (int)0);
					bool tmp8 = tmp7;
					bool tmp9;
					if ((tmp8)){
						tmp9 = (_g->bytesTotal == (int)0);
					}
					else{
						tmp9 = false;
					}
					bool tmp10 = tmp9;
					bool tmp11;
					if ((tmp10)){
						bool tmp12 = _g->promise->get_isComplete();
						bool tmp13 = tmp12;
						bool tmp14 = tmp13;
						bool tmp15 = tmp14;
						bool tmp16 = tmp15;
						tmp11 = !(tmp16);
					}
					else{
						tmp11 = false;
					}
					bool tmp12;
					if ((tmp11)){
						bool tmp13 = _g->promise->get_isError();
						bool tmp14 = tmp13;
						bool tmp15 = tmp14;
						tmp12 = !(tmp15);
					}
					else{
						tmp12 = false;
					}
					if ((tmp12)){
						_g->promise->error((int)28);
					}
				}
				return null();
			}
			HX_END_LOCAL_FUNC0((void))

			::haxe::Timer_obj::delay( Dynamic(new _Function_2_1(_g)),tmp6);
		}
		::lime::_system::ThreadPool tmp5 = ::lime::_backend::native::NativeHTTPRequest_obj::threadPool;
		struct _Function_1_1{
			inline static Dynamic Block( hx::ObjectPtr< ::lime::_backend::native::NativeHTTPRequest_obj > __this,bool &binary,::String &uri){
				{
					hx::Anon __result = hx::Anon_obj::Create();
					__result->Add(HX_HCSTRING("instance","\x95","\x1f","\xe1","\x59") , __this,false);
					__result->Add(HX_HCSTRING("uri","\x6c","\x2b","\x59","\x00") , uri,false);
					__result->Add(HX_HCSTRING("binary","\x01","\xbc","\x0b","\xed") , binary,false);
					return __result;
				}
				return null();
			}
		};
		Dynamic tmp6 = _Function_1_1::Block(this,binary,uri);
		tmp5->__Field(HX_HCSTRING("queue","\x91","\x8d","\xea","\x5d"), hx::paccDynamic )(tmp6);
		::lime::app::Promise_haxe_io_Bytes tmp7 = this->promise;
		::lime::app::Future tmp8 = tmp7->future;
		return tmp8;
	}
}


HX_DEFINE_DYNAMIC_FUNC2(NativeHTTPRequest_obj,loadData,return )

Void NativeHTTPRequest_obj::loadFile( ::String path){
{
		int tmp = path.indexOf(HX_HCSTRING("?","\x3f","\x00","\x00","\x00"),null());
		int index = tmp;
		bool tmp1 = (index > (int)-1);
		if ((tmp1)){
			int tmp2 = index;
			::String tmp3 = path.substring((int)0,tmp2);
			path = tmp3;
		}
		bool tmp2 = (path == null());
		bool tmp3 = !(tmp2);
		bool tmp4;
		if ((tmp3)){
			::String tmp5 = path;
			::String tmp6 = tmp5;
			bool tmp7 = ::sys::FileSystem_obj::exists(tmp6);
			bool tmp8 = tmp7;
			bool tmp9 = tmp8;
			tmp4 = !(tmp9);
		}
		else{
			tmp4 = true;
		}
		if ((tmp4)){
			::lime::_system::ThreadPool tmp5 = ::lime::_backend::native::NativeHTTPRequest_obj::threadPool;
			::lime::app::Promise_haxe_io_Bytes tmp6 = this->promise;
			::String tmp7 = (HX_HCSTRING("Cannot load file: ","\x5f","\x26","\xcd","\x00") + path);
			struct _Function_2_1{
				inline static Dynamic Block( ::lime::app::Promise_haxe_io_Bytes &tmp6,::String &tmp7){
					{
						hx::Anon __result = hx::Anon_obj::Create();
						__result->Add(HX_HCSTRING("promise","\x9b","\xcd","\xe9","\xf7") , tmp6,false);
						__result->Add(HX_HCSTRING("error","\xc8","\xcb","\x29","\x73") , tmp7,false);
						return __result;
					}
					return null();
				}
			};
			Dynamic tmp8 = _Function_2_1::Block(tmp6,tmp7);
			tmp5->__Field(HX_HCSTRING("sendError","\x60","\x89","\x99","\x33"), hx::paccDynamic )(tmp8);
		}
		else{
			::String tmp5 = path;
			::haxe::io::Bytes tmp6 = ::lime::utils::_Bytes::Bytes_Impl__obj::fromFile(tmp5);
			this->bytes = tmp6;
			::haxe::io::Bytes tmp7 = this->bytes;
			bool tmp8 = (tmp7 != null());
			if ((tmp8)){
				::lime::_system::ThreadPool tmp9 = ::lime::_backend::native::NativeHTTPRequest_obj::threadPool;
				::lime::app::Promise_haxe_io_Bytes tmp10 = this->promise;
				::haxe::io::Bytes tmp11 = this->bytes;
				struct _Function_3_1{
					inline static Dynamic Block( ::haxe::io::Bytes &tmp11,::lime::app::Promise_haxe_io_Bytes &tmp10){
						{
							hx::Anon __result = hx::Anon_obj::Create();
							__result->Add(HX_HCSTRING("promise","\x9b","\xcd","\xe9","\xf7") , tmp10,false);
							__result->Add(HX_HCSTRING("result","\xdd","\x68","\x84","\x08") , tmp11,false);
							return __result;
						}
						return null();
					}
				};
				Dynamic tmp12 = _Function_3_1::Block(tmp11,tmp10);
				tmp9->__Field(HX_HCSTRING("sendComplete","\x21","\xd2","\x84","\xc0"), hx::paccDynamic )(tmp12);
			}
			else{
				::lime::_system::ThreadPool tmp9 = ::lime::_backend::native::NativeHTTPRequest_obj::threadPool;
				::lime::app::Promise_haxe_io_Bytes tmp10 = this->promise;
				::String tmp11 = (HX_HCSTRING("Cannot load file: ","\x5f","\x26","\xcd","\x00") + path);
				struct _Function_3_1{
					inline static Dynamic Block( ::String &tmp11,::lime::app::Promise_haxe_io_Bytes &tmp10){
						{
							hx::Anon __result = hx::Anon_obj::Create();
							__result->Add(HX_HCSTRING("promise","\x9b","\xcd","\xe9","\xf7") , tmp10,false);
							__result->Add(HX_HCSTRING("error","\xc8","\xcb","\x29","\x73") , tmp11,false);
							return __result;
						}
						return null();
					}
				};
				Dynamic tmp12 = _Function_3_1::Block(tmp11,tmp10);
				tmp9->__Field(HX_HCSTRING("sendError","\x60","\x89","\x99","\x33"), hx::paccDynamic )(tmp12);
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(NativeHTTPRequest_obj,loadFile,(void))

::lime::app::Future NativeHTTPRequest_obj::loadText( ::String uri){
	::lime::app::Promise_String tmp = ::lime::app::Promise_String_obj::__new();
	::lime::app::Promise_String promise = tmp;
	::String tmp1 = uri;
	::lime::app::Future tmp2 = this->loadData(tmp1,false);
	::lime::app::Future future = tmp2;
	Dynamic tmp3 = promise->progress_dyn();
	future->onProgress(tmp3);
	Dynamic tmp4 = promise->error_dyn();
	future->onError(tmp4);

	HX_BEGIN_LOCAL_FUNC_S1(hx::LocalFunc,_Function_1_1,::lime::app::Promise_String,promise)
	int __ArgCount() const { return 1; }
	Void run(::haxe::io::Bytes bytes){
		{
			bool tmp5 = (bytes == null());
			if ((tmp5)){
				promise->complete(null());
			}
			else{
				int tmp6 = bytes->length;
				::String tmp7 = bytes->getString((int)0,tmp6);
				promise->complete(tmp7);
			}
		}
		return null();
	}
	HX_END_LOCAL_FUNC1((void))

	future->onComplete( Dynamic(new _Function_1_1(promise)));
	::lime::app::Future tmp5 = promise->future;
	return tmp5;
}


HX_DEFINE_DYNAMIC_FUNC1(NativeHTTPRequest_obj,loadText,return )

Void NativeHTTPRequest_obj::loadURL( ::String uri,bool binary){
{
		::haxe::io::Bytes tmp = ::haxe::io::Bytes_obj::alloc((int)0);
		this->bytes = tmp;
		this->bytesLoaded = (int)0;
		this->bytesTotal = (int)0;
		Float tmp1 = this->curl;
		bool tmp2 = (tmp1 == (int)0);
		if ((tmp2)){
			Float tmp3 = ::lime::net::curl::CURLEasy_obj::init();
			this->curl = tmp3;
		}
		else{
			Float tmp3 = this->curl;
			::lime::net::curl::CURLEasy_obj::reset(tmp3);
		}
		::lime::net::_IHTTPRequest tmp3 = this->parent;
		::haxe::io::Bytes data = tmp3->__Field(HX_HCSTRING("data","\x2a","\x56","\x63","\x42"), hx::paccDynamic );
		::String query = HX_HCSTRING("","\x00","\x00","\x00","\x00");
		bool tmp4 = (data == null());
		if ((tmp4)){
			::lime::net::_IHTTPRequest tmp5 = this->parent;
			Dynamic tmp6 = tmp5->__Field(HX_HCSTRING("formData","\x8e","\xd5","\x80","\x56"), hx::paccDynamic )->__Field(HX_HCSTRING("keys","\xf4","\xe1","\x06","\x47"), hx::paccDynamic )();
			for(::cpp::FastIterator_obj< ::String > *__it = ::cpp::CreateFastIterator< ::String >(tmp6);  __it->hasNext(); ){
				::String key = __it->next();
				{
					bool tmp7 = (query.length > (int)0);
					if ((tmp7)){
						hx::AddEq(query,HX_HCSTRING("&","\x26","\x00","\x00","\x00"));
					}
					::String tmp8 = key;
					::String tmp9 = ::StringTools_obj::urlEncode(tmp8);
					::String tmp10 = (tmp9 + HX_HCSTRING("=","\x3d","\x00","\x00","\x00"));
					::lime::net::_IHTTPRequest tmp11 = this->parent;
					::String tmp12 = key;
					Dynamic tmp13 = tmp11->__Field(HX_HCSTRING("formData","\x8e","\xd5","\x80","\x56"), hx::paccDynamic )->__Field(HX_HCSTRING("get","\x96","\x80","\x4e","\x00"), hx::paccDynamic )(tmp12);
					Dynamic tmp14 = tmp13;
					::String tmp15 = ::Std_obj::string(tmp14);
					::String tmp16 = ::StringTools_obj::urlEncode(tmp15);
					::String tmp17 = (tmp10 + tmp16);
					hx::AddEq(query,tmp17);
				}
;
			}
			bool tmp7 = (query != HX_HCSTRING("","\x00","\x00","\x00","\x00"));
			if ((tmp7)){
				::lime::net::_IHTTPRequest tmp8 = this->parent;
				::String tmp9 = tmp8->__Field(HX_HCSTRING("method","\xe1","\xf6","\x5a","\x09"), hx::paccDynamic );
				bool tmp10 = (tmp9 == HX_HCSTRING("GET","\x76","\x1c","\x36","\x00"));
				if ((tmp10)){
					int tmp11 = uri.indexOf(HX_HCSTRING("?","\x3f","\x00","\x00","\x00"),null());
					bool tmp12 = (tmp11 > (int)-1);
					if ((tmp12)){
						::String tmp13 = (HX_HCSTRING("&","\x26","\x00","\x00","\x00") + query);
						hx::AddEq(uri,tmp13);
					}
					else{
						::String tmp13 = (HX_HCSTRING("?","\x3f","\x00","\x00","\x00") + query);
						hx::AddEq(uri,tmp13);
					}
					query = HX_HCSTRING("","\x00","\x00","\x00","\x00");
				}
				else{
					::String tmp11 = query;
					::haxe::io::Bytes tmp12 = ::haxe::io::Bytes_obj::ofString(tmp11);
					data = tmp12;
				}
			}
		}
		Float tmp5 = this->curl;
		::String tmp6 = uri;
		::lime::net::curl::CURLEasy_obj::setopt(tmp5,(int)10002,tmp6);
		{
			::lime::net::_IHTTPRequest tmp7 = this->parent;
			::String _g = tmp7->__Field(HX_HCSTRING("method","\xe1","\xf6","\x5a","\x09"), hx::paccDynamic );
			::String tmp8 = _g;
			::String _switch_1 = (tmp8);
			if (  ( _switch_1==HX_HCSTRING("HEAD","\x20","\xf1","\xcb","\x2f"))){
				Float tmp9 = this->curl;
				::lime::net::curl::CURLEasy_obj::setopt(tmp9,(int)44,true);
			}
			else if (  ( _switch_1==HX_HCSTRING("GET","\x76","\x1c","\x36","\x00"))){
				Float tmp9 = this->curl;
				::lime::net::curl::CURLEasy_obj::setopt(tmp9,(int)80,true);
			}
			else if (  ( _switch_1==HX_HCSTRING("POST","\x60","\x4c","\x1d","\x35"))){
				Float tmp9 = this->curl;
				::lime::net::curl::CURLEasy_obj::setopt(tmp9,(int)47,true);
				Float tmp10 = this->curl;
				Dynamic tmp11 = this->curl_onRead_dyn();
				::haxe::io::Bytes tmp12 = data;
				Dynamic tmp13;
				{
					Dynamic f = tmp11;
					::haxe::io::Bytes a2 = tmp12;

					HX_BEGIN_LOCAL_FUNC_S2(hx::LocalFunc,_Function_4_1,Dynamic,f,::haxe::io::Bytes,a2)
					int __ArgCount() const { return 1; }
					::haxe::io::Bytes run(int a1){
						{
							int tmp14 = a1;
							::haxe::io::Bytes tmp15 = a2;
							::haxe::io::Bytes tmp16 = f(tmp14,tmp15).Cast< ::haxe::io::Bytes >();
							return tmp16;
						}
						return null();
					}
					HX_END_LOCAL_FUNC1(return)

					tmp13 =  Dynamic(new _Function_4_1(f,a2));
				}
				::lime::net::curl::CURLEasy_obj::setopt(tmp10,(int)20012,tmp13);
				Float tmp14 = this->curl;
				int tmp15 = data->length;
				::lime::net::curl::CURLEasy_obj::setopt(tmp14,(int)60,tmp15);
				Float tmp16 = this->curl;
				int tmp17 = data->length;
				::lime::net::curl::CURLEasy_obj::setopt(tmp16,(int)14,tmp17);
			}
			else if (  ( _switch_1==HX_HCSTRING("PUT","\xaf","\xfe","\x3c","\x00"))){
				Float tmp9 = this->curl;
				::lime::net::curl::CURLEasy_obj::setopt(tmp9,(int)46,true);
				Float tmp10 = this->curl;
				Dynamic tmp11 = this->curl_onRead_dyn();
				::haxe::io::Bytes tmp12 = data;
				Dynamic tmp13;
				{
					Dynamic f = tmp11;
					::haxe::io::Bytes a2 = tmp12;

					HX_BEGIN_LOCAL_FUNC_S2(hx::LocalFunc,_Function_4_1,Dynamic,f,::haxe::io::Bytes,a2)
					int __ArgCount() const { return 1; }
					::haxe::io::Bytes run(int a1){
						{
							int tmp14 = a1;
							::haxe::io::Bytes tmp15 = a2;
							::haxe::io::Bytes tmp16 = f(tmp14,tmp15).Cast< ::haxe::io::Bytes >();
							return tmp16;
						}
						return null();
					}
					HX_END_LOCAL_FUNC1(return)

					tmp13 =  Dynamic(new _Function_4_1(f,a2));
				}
				::lime::net::curl::CURLEasy_obj::setopt(tmp10,(int)20012,tmp13);
				Float tmp14 = this->curl;
				int tmp15 = data->length;
				::lime::net::curl::CURLEasy_obj::setopt(tmp14,(int)14,tmp15);
			}
			else  {
				Float tmp9 = this->curl;
				::lime::net::_IHTTPRequest tmp10 = this->parent;
				::String tmp11 = tmp10->__Field(HX_HCSTRING("method","\xe1","\xf6","\x5a","\x09"), hx::paccDynamic );
				::String tmp12 = ::Std_obj::string(tmp11);
				::lime::net::curl::CURLEasy_obj::setopt(tmp9,(int)10036,tmp12);
				Float tmp13 = this->curl;
				Dynamic tmp14 = this->curl_onRead_dyn();
				::haxe::io::Bytes tmp15 = data;
				Dynamic tmp16;
				{
					Dynamic f = tmp14;
					::haxe::io::Bytes a2 = tmp15;

					HX_BEGIN_LOCAL_FUNC_S2(hx::LocalFunc,_Function_4_1,Dynamic,f,::haxe::io::Bytes,a2)
					int __ArgCount() const { return 1; }
					::haxe::io::Bytes run(int a1){
						{
							int tmp17 = a1;
							::haxe::io::Bytes tmp18 = a2;
							::haxe::io::Bytes tmp19 = f(tmp17,tmp18).Cast< ::haxe::io::Bytes >();
							return tmp19;
						}
						return null();
					}
					HX_END_LOCAL_FUNC1(return)

					tmp16 =  Dynamic(new _Function_4_1(f,a2));
				}
				::lime::net::curl::CURLEasy_obj::setopt(tmp13,(int)20012,tmp16);
				Float tmp17 = this->curl;
				int tmp18 = data->length;
				::lime::net::curl::CURLEasy_obj::setopt(tmp17,(int)14,tmp18);
			}
;
;
		}
		Float tmp7 = this->curl;
		::lime::net::_IHTTPRequest tmp8 = this->parent;
		bool tmp9 = tmp8->__Field(HX_HCSTRING("followRedirects","\x26","\x5a","\x40","\x75"), hx::paccDynamic );
		::lime::net::curl::CURLEasy_obj::setopt(tmp7,(int)52,tmp9);
		Float tmp10 = this->curl;
		::lime::net::curl::CURLEasy_obj::setopt(tmp10,(int)58,true);
		Array< ::String > headers = Array_obj< ::String >::__new();
		headers->push(HX_HCSTRING("Expect: ","\xdf","\xc4","\xe1","\x19"));
		bool hasContentType = false;
		{
			int _g = (int)0;
			::lime::net::_IHTTPRequest tmp11 = this->parent;
			cpp::ArrayBase _g1;
			_g1 = hx::TCastToArray(tmp11->__Field(HX_HCSTRING("headers","\x46","\x52","\x08","\x63"), hx::paccDynamic ));
			while((true)){
				bool tmp12 = (_g < _g1->__Field(HX_HCSTRING("length","\xe6","\x94","\x07","\x9f"), hx::paccDynamic ));
				bool tmp13 = !(tmp12);
				if ((tmp13)){
					break;
				}
				Dynamic tmp14 = _g1->__GetItem(_g);
				Dynamic header = tmp14;
				++(_g);
				bool tmp15 = (header->__Field(HX_HCSTRING("name","\x4b","\x72","\xff","\x48"), hx::paccDynamic ) == HX_HCSTRING("Content-Type","\xce","\x69","\x5d","\x3c"));
				if ((tmp15)){
					hasContentType = true;
				}
				::String tmp16 = ::Std_obj::string(header->__Field(HX_HCSTRING("name","\x4b","\x72","\xff","\x48"), hx::paccDynamic ));
				::String tmp17 = (HX_HCSTRING("","\x00","\x00","\x00","\x00") + tmp16);
				::String tmp18 = (tmp17 + HX_HCSTRING(": ","\xa6","\x32","\x00","\x00"));
				::String tmp19 = ::Std_obj::string(header->__Field(HX_HCSTRING("value","\x71","\x7f","\xb8","\x31"), hx::paccDynamic ));
				::String tmp20 = (tmp18 + tmp19);
				headers->push(tmp20);
			}
		}
		bool tmp11 = hasContentType;
		bool tmp12 = !(tmp11);
		if ((tmp12)){
			::lime::net::_IHTTPRequest tmp13 = this->parent;
			::String tmp14 = tmp13->__Field(HX_HCSTRING("contentType","\x93","\x3c","\x7b","\x2a"), hx::paccDynamic );
			::String tmp15 = (HX_HCSTRING("Content-Type: ","\xf4","\x2b","\xe6","\x1d") + tmp14);
			headers->push(tmp15);
		}
		Float tmp13 = this->curl;
		::lime::net::curl::CURLEasy_obj::setopt(tmp13,(int)10023,headers);
		Float tmp14 = this->curl;
		Dynamic tmp15 = this->curl_onProgress_dyn();
		::lime::net::curl::CURLEasy_obj::setopt(tmp14,(int)20056,tmp15);
		Float tmp16 = this->curl;
		Dynamic tmp17 = this->curl_onWrite_dyn();
		::lime::net::curl::CURLEasy_obj::setopt(tmp16,(int)20011,tmp17);
		::lime::net::_IHTTPRequest tmp18 = this->parent;
		bool tmp19 = tmp18->__Field(HX_HCSTRING("enableResponseHeaders","\x82","\x32","\x47","\x05"), hx::paccDynamic );
		if ((tmp19)){
			Float tmp20 = this->curl;
			Dynamic tmp21 = this->curl_onHeader_dyn();
			::lime::net::curl::CURLEasy_obj::setopt(tmp20,(int)20079,tmp21);
		}
		Float tmp20 = this->curl;
		::lime::net::curl::CURLEasy_obj::setopt(tmp20,(int)64,false);
		Float tmp21 = this->curl;
		::lime::net::curl::CURLEasy_obj::setopt(tmp21,(int)81,(int)0);
		Float tmp22 = this->curl;
		::lime::net::_IHTTPRequest tmp23 = this->parent;
		::String tmp24 = tmp23->__Field(HX_HCSTRING("userAgent","\x7a","\xf0","\x12","\xc8"), hx::paccDynamic );
		bool tmp25 = (tmp24 == null());
		Dynamic tmp26;
		if ((tmp25)){
			tmp26 = HX_HCSTRING("libcurl-agent/1.0","\x4d","\x41","\xcc","\xd3");
		}
		else{
			::lime::net::_IHTTPRequest tmp27 = this->parent;
			tmp26 = tmp27->__Field(HX_HCSTRING("userAgent","\x7a","\xf0","\x12","\xc8"), hx::paccDynamic );
		}
		::lime::net::curl::CURLEasy_obj::setopt(tmp22,(int)10018,tmp26);
		Float tmp27 = this->curl;
		::lime::net::curl::CURLEasy_obj::setopt(tmp27,(int)99,true);
		Float tmp28 = this->curl;
		bool tmp29 = binary;
		bool tmp30 = !(tmp29);
		::lime::net::curl::CURLEasy_obj::setopt(tmp28,(int)53,tmp30);
		Float tmp31 = this->curl;
		int tmp32 = ::lime::net::curl::CURLEasy_obj::perform(tmp31);
		int result = tmp32;
		Float tmp33 = this->curl;
		Dynamic tmp34 = ::lime::net::curl::CURLEasy_obj::getinfo(tmp33,(int)2097154);
		::lime::net::_IHTTPRequest tmp35 = this->parent;
		tmp35->__FieldRef(HX_HCSTRING("responseStatus","\x93","\x60","\xa4","\x78")) = tmp34;
		bool tmp36 = (result == (int)0);
		if ((tmp36)){
			::lime::_system::ThreadPool tmp37 = ::lime::_backend::native::NativeHTTPRequest_obj::threadPool;
			::lime::app::Promise_haxe_io_Bytes tmp38 = this->promise;
			::haxe::io::Bytes tmp39 = this->bytes;
			struct _Function_2_1{
				inline static Dynamic Block( ::lime::app::Promise_haxe_io_Bytes &tmp38,::haxe::io::Bytes &tmp39){
					{
						hx::Anon __result = hx::Anon_obj::Create();
						__result->Add(HX_HCSTRING("promise","\x9b","\xcd","\xe9","\xf7") , tmp38,false);
						__result->Add(HX_HCSTRING("result","\xdd","\x68","\x84","\x08") , tmp39,false);
						return __result;
					}
					return null();
				}
			};
			Dynamic tmp40 = _Function_2_1::Block(tmp38,tmp39);
			tmp37->__Field(HX_HCSTRING("sendComplete","\x21","\xd2","\x84","\xc0"), hx::paccDynamic )(tmp40);
		}
		else{
			::lime::_system::ThreadPool tmp37 = ::lime::_backend::native::NativeHTTPRequest_obj::threadPool;
			::lime::app::Promise_haxe_io_Bytes tmp38 = this->promise;
			int tmp39 = result;
			struct _Function_2_1{
				inline static Dynamic Block( ::lime::app::Promise_haxe_io_Bytes &tmp38,int &tmp39){
					{
						hx::Anon __result = hx::Anon_obj::Create();
						__result->Add(HX_HCSTRING("promise","\x9b","\xcd","\xe9","\xf7") , tmp38,false);
						__result->Add(HX_HCSTRING("error","\xc8","\xcb","\x29","\x73") , tmp39,false);
						return __result;
					}
					return null();
				}
			};
			Dynamic tmp40 = _Function_2_1::Block(tmp38,tmp39);
			tmp37->__Field(HX_HCSTRING("sendError","\x60","\x89","\x99","\x33"), hx::paccDynamic )(tmp40);
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(NativeHTTPRequest_obj,loadURL,(void))

int NativeHTTPRequest_obj::curl_onHeader( ::haxe::io::Bytes output,int size,int nmemb){
	::lime::net::_IHTTPRequest tmp = this->parent;
	tmp->__FieldRef(HX_HCSTRING("responseHeaders","\xc5","\x0d","\xca","\x43")) = Array_obj< ::Dynamic >::__new();
	int tmp1 = (size * nmemb);
	return tmp1;
}


HX_DEFINE_DYNAMIC_FUNC3(NativeHTTPRequest_obj,curl_onHeader,return )

int NativeHTTPRequest_obj::curl_onProgress( Float dltotal,Float dlnow,Float uptotal,Float upnow){
	Float tmp = upnow;
	int tmp1 = this->bytesLoaded;
	bool tmp2 = (tmp > tmp1);
	bool tmp3 = !(tmp2);
	bool tmp4 = tmp3;
	bool tmp5;
	if ((tmp4)){
		Float tmp6 = dlnow;
		int tmp7 = this->bytesLoaded;
		int tmp8 = tmp7;
		int tmp9 = tmp8;
		tmp5 = (tmp6 > tmp9);
	}
	else{
		tmp5 = true;
	}
	bool tmp6 = !(tmp5);
	bool tmp7 = tmp6;
	bool tmp8;
	if ((tmp7)){
		Float tmp9 = uptotal;
		int tmp10 = this->bytesTotal;
		int tmp11 = tmp10;
		int tmp12 = tmp11;
		tmp8 = (tmp9 > tmp12);
	}
	else{
		tmp8 = true;
	}
	bool tmp9 = !(tmp8);
	bool tmp10;
	if ((tmp9)){
		Float tmp11 = dltotal;
		int tmp12 = this->bytesTotal;
		int tmp13 = tmp12;
		tmp10 = (tmp11 > tmp13);
	}
	else{
		tmp10 = true;
	}
	if ((tmp10)){
		Float tmp11 = upnow;
		int tmp12 = this->bytesLoaded;
		bool tmp13 = (tmp11 > tmp12);
		if ((tmp13)){
			Float tmp14 = upnow;
			int tmp15 = ::Std_obj::_int(tmp14);
			this->bytesLoaded = tmp15;
		}
		Float tmp14 = dlnow;
		int tmp15 = this->bytesLoaded;
		bool tmp16 = (tmp14 > tmp15);
		if ((tmp16)){
			Float tmp17 = dlnow;
			int tmp18 = ::Std_obj::_int(tmp17);
			this->bytesLoaded = tmp18;
		}
		Float tmp17 = uptotal;
		int tmp18 = this->bytesTotal;
		bool tmp19 = (tmp17 > tmp18);
		if ((tmp19)){
			Float tmp20 = uptotal;
			int tmp21 = ::Std_obj::_int(tmp20);
			this->bytesTotal = tmp21;
		}
		Float tmp20 = dltotal;
		int tmp21 = this->bytesTotal;
		bool tmp22 = (tmp20 > tmp21);
		if ((tmp22)){
			Float tmp23 = dltotal;
			int tmp24 = ::Std_obj::_int(tmp23);
			this->bytesTotal = tmp24;
		}
		::lime::app::Promise_haxe_io_Bytes tmp23 = this->promise;
		int tmp24 = this->bytesLoaded;
		int tmp25 = this->bytesTotal;
		tmp23->progress(tmp24,tmp25);
	}
	return (int)0;
}


HX_DEFINE_DYNAMIC_FUNC4(NativeHTTPRequest_obj,curl_onProgress,return )

::haxe::io::Bytes NativeHTTPRequest_obj::curl_onRead( int max,::haxe::io::Bytes input){
	::haxe::io::Bytes tmp = input;
	return tmp;
}


HX_DEFINE_DYNAMIC_FUNC2(NativeHTTPRequest_obj,curl_onRead,return )

int NativeHTTPRequest_obj::curl_onWrite( ::haxe::io::Bytes output,int size,int nmemb){
	::haxe::io::Bytes tmp = this->bytes;
	::haxe::io::Bytes cacheBytes = tmp;
	::haxe::io::Bytes tmp1 = this->bytes;
	int tmp2 = tmp1->length;
	int tmp3 = output->length;
	int tmp4 = (tmp2 + tmp3);
	::haxe::io::Bytes tmp5 = ::haxe::io::Bytes_obj::alloc(tmp4);
	this->bytes = tmp5;
	::haxe::io::Bytes tmp6 = this->bytes;
	::haxe::io::Bytes tmp7 = cacheBytes;
	int tmp8 = cacheBytes->length;
	tmp6->blit((int)0,tmp7,(int)0,tmp8);
	::haxe::io::Bytes tmp9 = this->bytes;
	int tmp10 = cacheBytes->length;
	::haxe::io::Bytes tmp11 = output;
	int tmp12 = output->length;
	tmp9->blit(tmp10,tmp11,(int)0,tmp12);
	int tmp13 = (size * nmemb);
	return tmp13;
}


HX_DEFINE_DYNAMIC_FUNC3(NativeHTTPRequest_obj,curl_onWrite,return )

::lime::_system::ThreadPool NativeHTTPRequest_obj::threadPool;

Void NativeHTTPRequest_obj::threadPool_doWork( Dynamic state){
{
		::lime::_backend::native::NativeHTTPRequest instance = state->__Field(HX_HCSTRING("instance","\x95","\x1f","\xe1","\x59"), hx::paccDynamic );
		::String uri = state->__Field(HX_HCSTRING("uri","\x6c","\x2b","\x59","\x00"), hx::paccDynamic );
		bool binary = state->__Field(HX_HCSTRING("binary","\x01","\xbc","\x0b","\xed"), hx::paccDynamic );
		int tmp = uri.indexOf(HX_HCSTRING("http://","\x52","\x75","\xcd","\x5a"),null());
		int tmp1 = (int)-1;
		bool tmp2 = (tmp == tmp1);
		bool tmp3;
		if ((tmp2)){
			int tmp4 = uri.indexOf(HX_HCSTRING("https://","\xcf","\xb4","\xae","\x3e"),null());
			int tmp5 = tmp4;
			tmp3 = (tmp5 == (int)-1);
		}
		else{
			tmp3 = false;
		}
		if ((tmp3)){
			::String tmp4 = uri;
			instance->loadFile(tmp4);
		}
		else{
			::String tmp4 = uri;
			bool tmp5 = binary;
			instance->loadURL(tmp4,tmp5);
		}
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(NativeHTTPRequest_obj,threadPool_doWork,(void))

Void NativeHTTPRequest_obj::threadPool_onComplete( Dynamic state){
{
		::lime::app::Promise_haxe_io_Bytes promise = state->__Field(HX_HCSTRING("promise","\x9b","\xcd","\xe9","\xf7"), hx::paccDynamic );
		promise->complete(state->__Field(HX_HCSTRING("result","\xdd","\x68","\x84","\x08"), hx::paccDynamic ));
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(NativeHTTPRequest_obj,threadPool_onComplete,(void))

Void NativeHTTPRequest_obj::threadPool_onError( Dynamic state){
{
		::lime::app::Promise_haxe_io_Bytes promise = state->__Field(HX_HCSTRING("promise","\x9b","\xcd","\xe9","\xf7"), hx::paccDynamic );
		promise->error(state->__Field(HX_HCSTRING("error","\xc8","\xcb","\x29","\x73"), hx::paccDynamic ));
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(NativeHTTPRequest_obj,threadPool_onError,(void))


NativeHTTPRequest_obj::NativeHTTPRequest_obj()
{
}

void NativeHTTPRequest_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(NativeHTTPRequest);
	HX_MARK_MEMBER_NAME(bytes,"bytes");
	HX_MARK_MEMBER_NAME(bytesLoaded,"bytesLoaded");
	HX_MARK_MEMBER_NAME(bytesTotal,"bytesTotal");
	HX_MARK_MEMBER_NAME(curl,"curl");
	HX_MARK_MEMBER_NAME(parent,"parent");
	HX_MARK_MEMBER_NAME(promise,"promise");
	HX_MARK_END_CLASS();
}

void NativeHTTPRequest_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(bytes,"bytes");
	HX_VISIT_MEMBER_NAME(bytesLoaded,"bytesLoaded");
	HX_VISIT_MEMBER_NAME(bytesTotal,"bytesTotal");
	HX_VISIT_MEMBER_NAME(curl,"curl");
	HX_VISIT_MEMBER_NAME(parent,"parent");
	HX_VISIT_MEMBER_NAME(promise,"promise");
}

Dynamic NativeHTTPRequest_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"curl") ) { return curl; }
		if (HX_FIELD_EQ(inName,"init") ) { return init_dyn(); }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"bytes") ) { return bytes; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"parent") ) { return parent; }
		if (HX_FIELD_EQ(inName,"cancel") ) { return cancel_dyn(); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"promise") ) { return promise; }
		if (HX_FIELD_EQ(inName,"loadURL") ) { return loadURL_dyn(); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"loadData") ) { return loadData_dyn(); }
		if (HX_FIELD_EQ(inName,"loadFile") ) { return loadFile_dyn(); }
		if (HX_FIELD_EQ(inName,"loadText") ) { return loadText_dyn(); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"bytesTotal") ) { return bytesTotal; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"bytesLoaded") ) { return bytesLoaded; }
		if (HX_FIELD_EQ(inName,"curl_onRead") ) { return curl_onRead_dyn(); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"curl_onWrite") ) { return curl_onWrite_dyn(); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"curl_onHeader") ) { return curl_onHeader_dyn(); }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"curl_onProgress") ) { return curl_onProgress_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

bool NativeHTTPRequest_obj::__GetStatic(const ::String &inName, Dynamic &outValue, hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 10:
		if (HX_FIELD_EQ(inName,"threadPool") ) { outValue = threadPool; return true;  }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"threadPool_doWork") ) { outValue = threadPool_doWork_dyn(); return true;  }
		break;
	case 18:
		if (HX_FIELD_EQ(inName,"threadPool_onError") ) { outValue = threadPool_onError_dyn(); return true;  }
		break;
	case 21:
		if (HX_FIELD_EQ(inName,"threadPool_onComplete") ) { outValue = threadPool_onComplete_dyn(); return true;  }
	}
	return false;
}

Dynamic NativeHTTPRequest_obj::__SetField(const ::String &inName,const Dynamic &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"curl") ) { curl=inValue.Cast< Float >(); return inValue; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"bytes") ) { bytes=inValue.Cast< ::haxe::io::Bytes >(); return inValue; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"parent") ) { parent=inValue.Cast< ::lime::net::_IHTTPRequest >(); return inValue; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"promise") ) { promise=inValue.Cast< ::lime::app::Promise_haxe_io_Bytes >(); return inValue; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"bytesTotal") ) { bytesTotal=inValue.Cast< int >(); return inValue; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"bytesLoaded") ) { bytesLoaded=inValue.Cast< int >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

bool NativeHTTPRequest_obj::__SetStatic(const ::String &inName,Dynamic &ioValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 10:
		if (HX_FIELD_EQ(inName,"threadPool") ) { threadPool=ioValue.Cast< ::lime::_system::ThreadPool >(); return true; }
	}
	return false;
}

void NativeHTTPRequest_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("bytes","\x6b","\x08","\x98","\xbd"));
	outFields->push(HX_HCSTRING("bytesLoaded","\xd0","\x66","\xca","\x99"));
	outFields->push(HX_HCSTRING("bytesTotal","\x59","\x57","\xda","\x45"));
	outFields->push(HX_HCSTRING("curl","\xec","\x4a","\xc9","\x41"));
	outFields->push(HX_HCSTRING("parent","\x2a","\x05","\x7e","\xed"));
	outFields->push(HX_HCSTRING("promise","\x9b","\xcd","\xe9","\xf7"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsObject /*::haxe::io::Bytes*/ ,(int)offsetof(NativeHTTPRequest_obj,bytes),HX_HCSTRING("bytes","\x6b","\x08","\x98","\xbd")},
	{hx::fsInt,(int)offsetof(NativeHTTPRequest_obj,bytesLoaded),HX_HCSTRING("bytesLoaded","\xd0","\x66","\xca","\x99")},
	{hx::fsInt,(int)offsetof(NativeHTTPRequest_obj,bytesTotal),HX_HCSTRING("bytesTotal","\x59","\x57","\xda","\x45")},
	{hx::fsFloat,(int)offsetof(NativeHTTPRequest_obj,curl),HX_HCSTRING("curl","\xec","\x4a","\xc9","\x41")},
	{hx::fsObject /*::lime::net::_IHTTPRequest*/ ,(int)offsetof(NativeHTTPRequest_obj,parent),HX_HCSTRING("parent","\x2a","\x05","\x7e","\xed")},
	{hx::fsObject /*::lime::app::Promise_haxe_io_Bytes*/ ,(int)offsetof(NativeHTTPRequest_obj,promise),HX_HCSTRING("promise","\x9b","\xcd","\xe9","\xf7")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo sStaticStorageInfo[] = {
	{hx::fsObject /*::lime::_system::ThreadPool*/ ,(void *) &NativeHTTPRequest_obj::threadPool,HX_HCSTRING("threadPool","\xc6","\x54","\x25","\x46")},
	{ hx::fsUnknown, 0, null()}
};
#endif

static ::String sMemberFields[] = {
	HX_HCSTRING("bytes","\x6b","\x08","\x98","\xbd"),
	HX_HCSTRING("bytesLoaded","\xd0","\x66","\xca","\x99"),
	HX_HCSTRING("bytesTotal","\x59","\x57","\xda","\x45"),
	HX_HCSTRING("curl","\xec","\x4a","\xc9","\x41"),
	HX_HCSTRING("parent","\x2a","\x05","\x7e","\xed"),
	HX_HCSTRING("promise","\x9b","\xcd","\xe9","\xf7"),
	HX_HCSTRING("cancel","\x7a","\xed","\x33","\xb8"),
	HX_HCSTRING("init","\x10","\x3b","\xbb","\x45"),
	HX_HCSTRING("loadData","\x70","\x27","\x03","\xb3"),
	HX_HCSTRING("loadFile","\xc2","\x9f","\x5b","\xb4"),
	HX_HCSTRING("loadText","\xf3","\x9d","\x99","\xbd"),
	HX_HCSTRING("loadURL","\xe9","\x88","\xe3","\x08"),
	HX_HCSTRING("curl_onHeader","\xff","\xee","\xa6","\xac"),
	HX_HCSTRING("curl_onProgress","\x9f","\x9d","\x6b","\x99"),
	HX_HCSTRING("curl_onRead","\x48","\x90","\x7d","\x25"),
	HX_HCSTRING("curl_onWrite","\xad","\x7b","\xff","\x91"),
	::String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(NativeHTTPRequest_obj::__mClass,"__mClass");
	HX_MARK_MEMBER_NAME(NativeHTTPRequest_obj::threadPool,"threadPool");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(NativeHTTPRequest_obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(NativeHTTPRequest_obj::threadPool,"threadPool");
};

#endif

hx::Class NativeHTTPRequest_obj::__mClass;

static ::String sStaticFields[] = {
	HX_HCSTRING("threadPool","\xc6","\x54","\x25","\x46"),
	HX_HCSTRING("threadPool_doWork","\x95","\x28","\x69","\x50"),
	HX_HCSTRING("threadPool_onComplete","\x11","\x97","\x0a","\x2c"),
	HX_HCSTRING("threadPool_onError","\x70","\x4e","\x70","\x13"),
	::String(null()) };

void NativeHTTPRequest_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("lime._backend.native.NativeHTTPRequest","\x19","\xe6","\x3e","\x06");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &NativeHTTPRequest_obj::__GetStatic;
	__mClass->mSetStaticField = &NativeHTTPRequest_obj::__SetStatic;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(sStaticFields);
	__mClass->mMembers = hx::Class_obj::dupFunctions(sMemberFields);
	__mClass->mCanCast = hx::TCanCast< NativeHTTPRequest_obj >;
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
} // end namespace _backend
} // end namespace native
