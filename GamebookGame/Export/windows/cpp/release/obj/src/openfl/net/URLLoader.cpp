#include <hxcpp.h>

#ifndef INCLUDED_Reflect
#include <Reflect.h>
#endif
#ifndef INCLUDED_Std
#include <Std.h>
#endif
#ifndef INCLUDED_haxe_IMap
#include <haxe/IMap.h>
#endif
#ifndef INCLUDED_haxe_ds_StringMap
#include <haxe/ds/StringMap.h>
#endif
#ifndef INCLUDED_haxe_io_Bytes
#include <haxe/io/Bytes.h>
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
#ifndef INCLUDED_lime_net__HTTPRequest_Bytes
#include <lime/net/_HTTPRequest_Bytes.h>
#endif
#ifndef INCLUDED_lime_net__HTTPRequest_String
#include <lime/net/_HTTPRequest_String.h>
#endif
#ifndef INCLUDED_lime_net__HTTPRequest_openfl_utils_ByteArray
#include <lime/net/_HTTPRequest_openfl_utils_ByteArray.h>
#endif
#ifndef INCLUDED_lime_net__IHTTPRequest
#include <lime/net/_IHTTPRequest.h>
#endif
#ifndef INCLUDED_openfl_events_ErrorEvent
#include <openfl/events/ErrorEvent.h>
#endif
#ifndef INCLUDED_openfl_events_Event
#include <openfl/events/Event.h>
#endif
#ifndef INCLUDED_openfl_events_EventDispatcher
#include <openfl/events/EventDispatcher.h>
#endif
#ifndef INCLUDED_openfl_events_IEventDispatcher
#include <openfl/events/IEventDispatcher.h>
#endif
#ifndef INCLUDED_openfl_events_IOErrorEvent
#include <openfl/events/IOErrorEvent.h>
#endif
#ifndef INCLUDED_openfl_events_ProgressEvent
#include <openfl/events/ProgressEvent.h>
#endif
#ifndef INCLUDED_openfl_events_SecurityErrorEvent
#include <openfl/events/SecurityErrorEvent.h>
#endif
#ifndef INCLUDED_openfl_events_TextEvent
#include <openfl/events/TextEvent.h>
#endif
#ifndef INCLUDED_openfl_net_URLLoader
#include <openfl/net/URLLoader.h>
#endif
#ifndef INCLUDED_openfl_net_URLRequest
#include <openfl/net/URLRequest.h>
#endif
#ifndef INCLUDED_openfl_net_URLRequestHeader
#include <openfl/net/URLRequestHeader.h>
#endif
#ifndef INCLUDED_openfl_net_URLVariables
#include <openfl/net/URLVariables.h>
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
namespace openfl{
namespace net{

Void URLLoader_obj::__construct(::openfl::net::URLRequest request)
{
HX_STACK_FRAME("openfl.net.URLLoader","new",0xb8a6da85,"openfl.net.URLLoader.new","openfl/net/URLLoader.hx",30,0x11daec0d)
HX_STACK_THIS(this)
HX_STACK_ARG(request,"request")
{
	HX_STACK_LINE(32)
	super::__construct(null());
	HX_STACK_LINE(34)
	this->bytesLoaded = (int)0;
	HX_STACK_LINE(35)
	this->bytesTotal = (int)0;
	HX_STACK_LINE(36)
	this->dataFormat = ((Dynamic)((int)1));
	HX_STACK_LINE(38)
	bool tmp = (request != null());		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(38)
	if ((tmp)){
		HX_STACK_LINE(40)
		::openfl::net::URLRequest tmp1 = request;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(40)
		this->load(tmp1);
	}
}
;
	return null();
}

//URLLoader_obj::~URLLoader_obj() { }

Dynamic URLLoader_obj::__CreateEmpty() { return  new URLLoader_obj; }
hx::ObjectPtr< URLLoader_obj > URLLoader_obj::__new(::openfl::net::URLRequest request)
{  hx::ObjectPtr< URLLoader_obj > _result_ = new URLLoader_obj();
	_result_->__construct(request);
	return _result_;}

Dynamic URLLoader_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< URLLoader_obj > _result_ = new URLLoader_obj();
	_result_->__construct(inArgs[0]);
	return _result_;}

Void URLLoader_obj::close( ){
{
		HX_STACK_FRAME("openfl.net.URLLoader","close",0x0328b51d,"openfl.net.URLLoader.close","openfl/net/URLLoader.hx",47,0x11daec0d)
		HX_STACK_THIS(this)
		HX_STACK_LINE(49)
		::lime::net::_IHTTPRequest tmp = this->__httpRequest;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(49)
		bool tmp1 = (tmp != null());		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(49)
		if ((tmp1)){
			HX_STACK_LINE(51)
			::lime::net::_IHTTPRequest tmp2 = this->__httpRequest;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(51)
			tmp2->cancel();
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(URLLoader_obj,close,(void))

Void URLLoader_obj::load( ::openfl::net::URLRequest request){
{
		HX_STACK_FRAME("openfl.net.URLLoader","load",0xd80d7061,"openfl.net.URLLoader.load","openfl/net/URLLoader.hx",58,0x11daec0d)
		HX_STACK_THIS(this)
		HX_STACK_ARG(request,"request")
		HX_STACK_LINE(58)
		::openfl::net::URLLoader _g = hx::ObjectPtr<OBJ_>(this);		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(61)
		Dynamic tmp = this->dataFormat;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(61)
		bool tmp1 = (tmp == ((Dynamic)((int)0)));		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(61)
		if ((tmp1)){
			HX_STACK_LINE(63)
			::lime::net::_HTTPRequest_openfl_utils_ByteArray tmp2 = ::lime::net::_HTTPRequest_openfl_utils_ByteArray_obj::__new(null());		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(63)
			::lime::net::_HTTPRequest_openfl_utils_ByteArray httpRequest = tmp2;		HX_STACK_VAR(httpRequest,"httpRequest");
			HX_STACK_LINE(64)
			::lime::net::_HTTPRequest_openfl_utils_ByteArray tmp3 = httpRequest;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(64)
			::openfl::net::URLRequest tmp4 = request;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(64)
			this->__prepareRequest(tmp3,tmp4);
			HX_STACK_LINE(66)
			::lime::app::Future tmp5 = httpRequest->load(null());		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(67)
			Dynamic tmp6 = this->httpRequest_onProgress_dyn();		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(66)
			::lime::app::Future tmp7 = tmp5->onProgress(tmp6);		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(68)
			Dynamic tmp8 = this->httpRequest_onError_dyn();		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(66)
			::lime::app::Future tmp9 = tmp7->onError(tmp8);		HX_STACK_VAR(tmp9,"tmp9");

			HX_BEGIN_LOCAL_FUNC_S1(hx::LocalFunc,_Function_2_1,::openfl::net::URLLoader,_g)
			int __ArgCount() const { return 1; }
			Void run(::openfl::utils::ByteArrayData data){
				HX_STACK_FRAME("*","_Function_2_1",0x5201af78,"*._Function_2_1","openfl/net/URLLoader.hx",69,0x11daec0d)
				HX_STACK_ARG(data,"data")
				{
					HX_STACK_LINE(71)
					_g->data = data;
					HX_STACK_LINE(73)
					::openfl::events::Event tmp10 = ::openfl::events::Event_obj::__new(HX_HCSTRING("complete","\xb9","\x00","\xc8","\x7f"),null(),null());		HX_STACK_VAR(tmp10,"tmp10");
					HX_STACK_LINE(73)
					::openfl::events::Event event = tmp10;		HX_STACK_VAR(event,"event");
					HX_STACK_LINE(74)
					::openfl::events::Event tmp11 = event;		HX_STACK_VAR(tmp11,"tmp11");
					HX_STACK_LINE(74)
					_g->dispatchEvent(tmp11);
				}
				return null();
			}
			HX_END_LOCAL_FUNC1((void))

			HX_STACK_LINE(66)
			tmp9->onComplete( Dynamic(new _Function_2_1(_g)));
		}
		else{
			HX_STACK_LINE(80)
			::lime::net::_HTTPRequest_String tmp2 = ::lime::net::_HTTPRequest_String_obj::__new(null());		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(80)
			::lime::net::_HTTPRequest_String httpRequest = tmp2;		HX_STACK_VAR(httpRequest,"httpRequest");
			HX_STACK_LINE(81)
			::lime::net::_HTTPRequest_String tmp3 = httpRequest;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(81)
			::openfl::net::URLRequest tmp4 = request;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(81)
			this->__prepareRequest(tmp3,tmp4);
			HX_STACK_LINE(83)
			::lime::app::Future tmp5 = httpRequest->load(null());		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(84)
			Dynamic tmp6 = this->httpRequest_onProgress_dyn();		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(83)
			::lime::app::Future tmp7 = tmp5->onProgress(tmp6);		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(85)
			Dynamic tmp8 = this->httpRequest_onError_dyn();		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(83)
			::lime::app::Future tmp9 = tmp7->onError(tmp8);		HX_STACK_VAR(tmp9,"tmp9");

			HX_BEGIN_LOCAL_FUNC_S1(hx::LocalFunc,_Function_2_1,::openfl::net::URLLoader,_g)
			int __ArgCount() const { return 1; }
			Void run(::String data){
				HX_STACK_FRAME("*","_Function_2_1",0x5201af78,"*._Function_2_1","openfl/net/URLLoader.hx",86,0x11daec0d)
				HX_STACK_ARG(data,"data")
				{
					HX_STACK_LINE(88)
					_g->data = data;
					HX_STACK_LINE(90)
					::openfl::events::Event tmp10 = ::openfl::events::Event_obj::__new(HX_HCSTRING("complete","\xb9","\x00","\xc8","\x7f"),null(),null());		HX_STACK_VAR(tmp10,"tmp10");
					HX_STACK_LINE(90)
					::openfl::events::Event event = tmp10;		HX_STACK_VAR(event,"event");
					HX_STACK_LINE(91)
					::openfl::events::Event tmp11 = event;		HX_STACK_VAR(tmp11,"tmp11");
					HX_STACK_LINE(91)
					_g->dispatchEvent(tmp11);
				}
				return null();
			}
			HX_END_LOCAL_FUNC1((void))

			HX_STACK_LINE(83)
			tmp9->onComplete( Dynamic(new _Function_2_1(_g)));
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(URLLoader_obj,load,(void))

Void URLLoader_obj::__prepareRequest( ::lime::net::_IHTTPRequest httpRequest,::openfl::net::URLRequest request){
{
		HX_STACK_FRAME("openfl.net.URLLoader","__prepareRequest",0x68321263,"openfl.net.URLLoader.__prepareRequest","openfl/net/URLLoader.hx",101,0x11daec0d)
		HX_STACK_THIS(this)
		HX_STACK_ARG(httpRequest,"httpRequest")
		HX_STACK_ARG(request,"request")
		HX_STACK_LINE(103)
		this->__httpRequest = httpRequest;
		HX_STACK_LINE(104)
		::lime::net::_IHTTPRequest tmp = this->__httpRequest;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(104)
		tmp->__FieldRef(HX_HCSTRING("uri","\x6c","\x2b","\x59","\x00")) = request->url;
		HX_STACK_LINE(106)
		::String tmp1;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(106)
		{
			HX_STACK_LINE(106)
			::String _g = request->method;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(106)
			::String tmp2 = _g;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(106)
			::String _switch_1 = (tmp2);
			if (  ( _switch_1==HX_HCSTRING("DELETE","\x2b","\x6c","\x5b","\x1d"))){
				HX_STACK_LINE(108)
				tmp1 = HX_HCSTRING("DELETE","\x2b","\x6c","\x5b","\x1d");
			}
			else if (  ( _switch_1==HX_HCSTRING("HEAD","\x20","\xf1","\xcb","\x2f"))){
				HX_STACK_LINE(109)
				tmp1 = HX_HCSTRING("HEAD","\x20","\xf1","\xcb","\x2f");
			}
			else if (  ( _switch_1==HX_HCSTRING("OPTIONS","\x3e","\x07","\xd2","\x5f"))){
				HX_STACK_LINE(110)
				tmp1 = HX_HCSTRING("OPTIONS","\x3e","\x07","\xd2","\x5f");
			}
			else if (  ( _switch_1==HX_HCSTRING("POST","\x60","\x4c","\x1d","\x35"))){
				HX_STACK_LINE(111)
				tmp1 = HX_HCSTRING("POST","\x60","\x4c","\x1d","\x35");
			}
			else if (  ( _switch_1==HX_HCSTRING("PUT","\xaf","\xfe","\x3c","\x00"))){
				HX_STACK_LINE(112)
				tmp1 = HX_HCSTRING("PUT","\xaf","\xfe","\x3c","\x00");
			}
			else  {
				HX_STACK_LINE(113)
				tmp1 = HX_HCSTRING("GET","\x76","\x1c","\x36","\x00");
			}
;
;
		}
		HX_STACK_LINE(106)
		::lime::net::_IHTTPRequest tmp2 = this->__httpRequest;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(106)
		tmp2->__FieldRef(HX_HCSTRING("method","\xe1","\xf6","\x5a","\x09")) = tmp1;
		HX_STACK_LINE(117)
		bool tmp3 = (request->data != null());		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(117)
		if ((tmp3)){
			HX_STACK_LINE(119)
			Dynamic tmp4 = request->data;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(119)
			bool tmp5 = ::Std_obj::is(tmp4,hx::ClassOf< ::openfl::net::URLVariables >());		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(119)
			if ((tmp5)){
				HX_STACK_LINE(121)
				Dynamic tmp6 = request->data;		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(121)
				Array< ::String > fields = ::Reflect_obj::fields(tmp6);		HX_STACK_VAR(fields,"fields");
				HX_STACK_LINE(123)
				{
					HX_STACK_LINE(123)
					int _g = (int)0;		HX_STACK_VAR(_g,"_g");
					HX_STACK_LINE(123)
					while((true)){
						HX_STACK_LINE(123)
						bool tmp7 = (_g < fields->length);		HX_STACK_VAR(tmp7,"tmp7");
						HX_STACK_LINE(123)
						bool tmp8 = !(tmp7);		HX_STACK_VAR(tmp8,"tmp8");
						HX_STACK_LINE(123)
						if ((tmp8)){
							HX_STACK_LINE(123)
							break;
						}
						HX_STACK_LINE(123)
						::String tmp9 = fields->__get(_g);		HX_STACK_VAR(tmp9,"tmp9");
						HX_STACK_LINE(123)
						::String field = tmp9;		HX_STACK_VAR(field,"field");
						HX_STACK_LINE(123)
						++(_g);
						HX_STACK_LINE(125)
						{
							HX_STACK_LINE(125)
							Dynamic tmp10 = request->data;		HX_STACK_VAR(tmp10,"tmp10");
							HX_STACK_LINE(125)
							::String tmp11 = field;		HX_STACK_VAR(tmp11,"tmp11");
							HX_STACK_LINE(125)
							Dynamic tmp12 = ::Reflect_obj::field(tmp10,tmp11);		HX_STACK_VAR(tmp12,"tmp12");
							HX_STACK_LINE(125)
							Dynamic value = tmp12;		HX_STACK_VAR(value,"value");
							HX_STACK_LINE(125)
							::lime::net::_IHTTPRequest tmp13 = this->__httpRequest;		HX_STACK_VAR(tmp13,"tmp13");
							HX_STACK_LINE(125)
							::String tmp14 = field;		HX_STACK_VAR(tmp14,"tmp14");
							HX_STACK_LINE(125)
							Dynamic tmp15 = value;		HX_STACK_VAR(tmp15,"tmp15");
							HX_STACK_LINE(125)
							tmp13->__Field(HX_HCSTRING("formData","\x8e","\xd5","\x80","\x56"), hx::paccDynamic )->__Field(HX_HCSTRING("set","\xa2","\x9b","\x57","\x00"), hx::paccDynamic )(tmp14,tmp15);
						}
					}
				}
			}
			else{
				HX_STACK_LINE(129)
				Dynamic tmp6 = request->data;		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(129)
				bool tmp7 = ::Std_obj::is(tmp6,hx::ClassOf< ::haxe::io::Bytes >());		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(129)
				if ((tmp7)){
					HX_STACK_LINE(131)
					::lime::net::_IHTTPRequest tmp8 = this->__httpRequest;		HX_STACK_VAR(tmp8,"tmp8");
					HX_STACK_LINE(131)
					tmp8->__FieldRef(HX_HCSTRING("data","\x2a","\x56","\x63","\x42")) = request->data;
				}
				else{
					HX_STACK_LINE(135)
					Dynamic tmp8 = request->data;		HX_STACK_VAR(tmp8,"tmp8");
					HX_STACK_LINE(135)
					::String tmp9 = ::Std_obj::string(tmp8);		HX_STACK_VAR(tmp9,"tmp9");
					HX_STACK_LINE(135)
					::haxe::io::Bytes tmp10 = ::haxe::io::Bytes_obj::ofString(tmp9);		HX_STACK_VAR(tmp10,"tmp10");
					HX_STACK_LINE(135)
					::lime::net::_IHTTPRequest tmp11 = this->__httpRequest;		HX_STACK_VAR(tmp11,"tmp11");
					HX_STACK_LINE(135)
					tmp11->__FieldRef(HX_HCSTRING("data","\x2a","\x56","\x63","\x42")) = tmp10;
				}
			}
		}
		HX_STACK_LINE(141)
		::lime::net::_IHTTPRequest tmp4 = this->__httpRequest;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(141)
		tmp4->__FieldRef(HX_HCSTRING("contentType","\x93","\x3c","\x7b","\x2a")) = request->contentType;
		HX_STACK_LINE(143)
		bool tmp5 = (request->requestHeaders != null());		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(143)
		if ((tmp5)){
			HX_STACK_LINE(145)
			int _g = (int)0;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(145)
			Array< ::Dynamic > _g1 = request->requestHeaders;		HX_STACK_VAR(_g1,"_g1");
			HX_STACK_LINE(145)
			while((true)){
				HX_STACK_LINE(145)
				bool tmp6 = (_g < _g1->length);		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(145)
				bool tmp7 = !(tmp6);		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(145)
				if ((tmp7)){
					HX_STACK_LINE(145)
					break;
				}
				HX_STACK_LINE(145)
				::openfl::net::URLRequestHeader tmp8 = _g1->__get(_g).StaticCast< ::openfl::net::URLRequestHeader >();		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(145)
				::openfl::net::URLRequestHeader header = tmp8;		HX_STACK_VAR(header,"header");
				HX_STACK_LINE(145)
				++(_g);
				HX_STACK_LINE(147)
				::lime::net::_IHTTPRequest tmp9 = this->__httpRequest;		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(147)
				::lime::net::HTTPRequestHeader tmp10 = ::lime::net::HTTPRequestHeader_obj::__new(header->name,header->value);		HX_STACK_VAR(tmp10,"tmp10");
				HX_STACK_LINE(147)
				tmp9->__Field(HX_HCSTRING("headers","\x46","\x52","\x08","\x63"), hx::paccDynamic )->__Field(HX_HCSTRING("push","\xda","\x11","\x61","\x4a"), hx::paccDynamic )(tmp10);
			}
		}
		HX_STACK_LINE(153)
		::lime::net::_IHTTPRequest tmp6 = this->__httpRequest;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(153)
		tmp6->__FieldRef(HX_HCSTRING("userAgent","\x7a","\xf0","\x12","\xc8")) = request->userAgent;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(URLLoader_obj,__prepareRequest,(void))

Void URLLoader_obj::httpRequest_onError( Dynamic error){
{
		HX_STACK_FRAME("openfl.net.URLLoader","httpRequest_onError",0x8f111376,"openfl.net.URLLoader.httpRequest_onError","openfl/net/URLLoader.hx",165,0x11daec0d)
		HX_STACK_THIS(this)
		HX_STACK_ARG(error,"error")
		HX_STACK_LINE(167)
		bool tmp = (error == (int)403);		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(167)
		if ((tmp)){
			HX_STACK_LINE(169)
			::openfl::events::SecurityErrorEvent tmp1 = ::openfl::events::SecurityErrorEvent_obj::__new(HX_HCSTRING("securityError","\xe8","\x28","\x7c","\xa2"),null(),null(),null(),null());		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(169)
			::openfl::events::SecurityErrorEvent event = tmp1;		HX_STACK_VAR(event,"event");
			HX_STACK_LINE(170)
			Dynamic tmp2 = error;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(170)
			::String tmp3 = ::Std_obj::string(tmp2);		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(170)
			event->text = tmp3;
			HX_STACK_LINE(171)
			::openfl::events::SecurityErrorEvent tmp4 = event;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(171)
			this->dispatchEvent(tmp4);
		}
		else{
			HX_STACK_LINE(175)
			::openfl::events::IOErrorEvent tmp1 = ::openfl::events::IOErrorEvent_obj::__new(HX_HCSTRING("ioError","\x02","\xfe","\x41","\x76"),null(),null(),null(),null());		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(175)
			::openfl::events::IOErrorEvent event = tmp1;		HX_STACK_VAR(event,"event");
			HX_STACK_LINE(176)
			Dynamic tmp2 = error;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(176)
			::String tmp3 = ::Std_obj::string(tmp2);		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(176)
			event->text = tmp3;
			HX_STACK_LINE(177)
			::openfl::events::IOErrorEvent tmp4 = event;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(177)
			this->dispatchEvent(tmp4);
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(URLLoader_obj,httpRequest_onError,(void))

Void URLLoader_obj::httpRequest_onProgress( int bytesLoaded,int bytesTotal){
{
		HX_STACK_FRAME("openfl.net.URLLoader","httpRequest_onProgress",0xf5cd30bf,"openfl.net.URLLoader.httpRequest_onProgress","openfl/net/URLLoader.hx",184,0x11daec0d)
		HX_STACK_THIS(this)
		HX_STACK_ARG(bytesLoaded,"bytesLoaded")
		HX_STACK_ARG(bytesTotal,"bytesTotal")
		HX_STACK_LINE(186)
		::openfl::events::ProgressEvent tmp = ::openfl::events::ProgressEvent_obj::__new(HX_HCSTRING("progress","\xad","\xf7","\x2a","\x86"),null(),null(),null(),null());		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(186)
		::openfl::events::ProgressEvent event = tmp;		HX_STACK_VAR(event,"event");
		HX_STACK_LINE(187)
		event->bytesLoaded = bytesLoaded;
		HX_STACK_LINE(188)
		event->bytesTotal = bytesTotal;
		HX_STACK_LINE(189)
		::openfl::events::ProgressEvent tmp1 = event;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(189)
		this->dispatchEvent(tmp1);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(URLLoader_obj,httpRequest_onProgress,(void))


URLLoader_obj::URLLoader_obj()
{
}

void URLLoader_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(URLLoader);
	HX_MARK_MEMBER_NAME(bytesLoaded,"bytesLoaded");
	HX_MARK_MEMBER_NAME(bytesTotal,"bytesTotal");
	HX_MARK_MEMBER_NAME(data,"data");
	HX_MARK_MEMBER_NAME(dataFormat,"dataFormat");
	HX_MARK_MEMBER_NAME(__httpRequest,"__httpRequest");
	::openfl::events::EventDispatcher_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void URLLoader_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(bytesLoaded,"bytesLoaded");
	HX_VISIT_MEMBER_NAME(bytesTotal,"bytesTotal");
	HX_VISIT_MEMBER_NAME(data,"data");
	HX_VISIT_MEMBER_NAME(dataFormat,"dataFormat");
	HX_VISIT_MEMBER_NAME(__httpRequest,"__httpRequest");
	::openfl::events::EventDispatcher_obj::__Visit(HX_VISIT_ARG);
}

Dynamic URLLoader_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"data") ) { return data; }
		if (HX_FIELD_EQ(inName,"load") ) { return load_dyn(); }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"close") ) { return close_dyn(); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"bytesTotal") ) { return bytesTotal; }
		if (HX_FIELD_EQ(inName,"dataFormat") ) { return dataFormat; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"bytesLoaded") ) { return bytesLoaded; }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"__httpRequest") ) { return __httpRequest; }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"__prepareRequest") ) { return __prepareRequest_dyn(); }
		break;
	case 19:
		if (HX_FIELD_EQ(inName,"httpRequest_onError") ) { return httpRequest_onError_dyn(); }
		break;
	case 22:
		if (HX_FIELD_EQ(inName,"httpRequest_onProgress") ) { return httpRequest_onProgress_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic URLLoader_obj::__SetField(const ::String &inName,const Dynamic &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"data") ) { data=inValue.Cast< Dynamic >(); return inValue; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"bytesTotal") ) { bytesTotal=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"dataFormat") ) { dataFormat=inValue.Cast< Dynamic >(); return inValue; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"bytesLoaded") ) { bytesLoaded=inValue.Cast< int >(); return inValue; }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"__httpRequest") ) { __httpRequest=inValue.Cast< ::lime::net::_IHTTPRequest >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void URLLoader_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("bytesLoaded","\xd0","\x66","\xca","\x99"));
	outFields->push(HX_HCSTRING("bytesTotal","\x59","\x57","\xda","\x45"));
	outFields->push(HX_HCSTRING("data","\x2a","\x56","\x63","\x42"));
	outFields->push(HX_HCSTRING("dataFormat","\x01","\x55","\x30","\xe9"));
	outFields->push(HX_HCSTRING("__httpRequest","\x87","\xad","\xdd","\x71"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsInt,(int)offsetof(URLLoader_obj,bytesLoaded),HX_HCSTRING("bytesLoaded","\xd0","\x66","\xca","\x99")},
	{hx::fsInt,(int)offsetof(URLLoader_obj,bytesTotal),HX_HCSTRING("bytesTotal","\x59","\x57","\xda","\x45")},
	{hx::fsObject /*Dynamic*/ ,(int)offsetof(URLLoader_obj,data),HX_HCSTRING("data","\x2a","\x56","\x63","\x42")},
	{hx::fsObject /*Dynamic*/ ,(int)offsetof(URLLoader_obj,dataFormat),HX_HCSTRING("dataFormat","\x01","\x55","\x30","\xe9")},
	{hx::fsObject /*::lime::net::_IHTTPRequest*/ ,(int)offsetof(URLLoader_obj,__httpRequest),HX_HCSTRING("__httpRequest","\x87","\xad","\xdd","\x71")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo *sStaticStorageInfo = 0;
#endif

static ::String sMemberFields[] = {
	HX_HCSTRING("bytesLoaded","\xd0","\x66","\xca","\x99"),
	HX_HCSTRING("bytesTotal","\x59","\x57","\xda","\x45"),
	HX_HCSTRING("data","\x2a","\x56","\x63","\x42"),
	HX_HCSTRING("dataFormat","\x01","\x55","\x30","\xe9"),
	HX_HCSTRING("__httpRequest","\x87","\xad","\xdd","\x71"),
	HX_HCSTRING("close","\xb8","\x17","\x63","\x48"),
	HX_HCSTRING("load","\x26","\x9a","\xb7","\x47"),
	HX_HCSTRING("__prepareRequest","\xa8","\x4f","\x16","\x30"),
	HX_HCSTRING("httpRequest_onError","\x51","\xaf","\x4c","\x4d"),
	HX_HCSTRING("httpRequest_onProgress","\xc4","\x2f","\x46","\x93"),
	::String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(URLLoader_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(URLLoader_obj::__mClass,"__mClass");
};

#endif

hx::Class URLLoader_obj::__mClass;

void URLLoader_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("openfl.net.URLLoader","\x13","\x34","\x24","\x71");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = hx::Class_obj::dupFunctions(sMemberFields);
	__mClass->mCanCast = hx::TCanCast< URLLoader_obj >;
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

} // end namespace openfl
} // end namespace net
