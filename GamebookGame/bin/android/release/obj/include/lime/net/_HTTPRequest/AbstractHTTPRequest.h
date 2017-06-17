#ifndef INCLUDED_lime_net__HTTPRequest_AbstractHTTPRequest
#define INCLUDED_lime_net__HTTPRequest_AbstractHTTPRequest

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#ifndef INCLUDED_lime_net__IHTTPRequest
#include <lime/net/_IHTTPRequest.h>
#endif
HX_DECLARE_CLASS1(haxe,IMap)
HX_DECLARE_CLASS2(haxe,ds,StringMap)
HX_DECLARE_CLASS2(haxe,io,Bytes)
HX_DECLARE_CLASS3(lime,_backend,native,NativeHTTPRequest)
HX_DECLARE_CLASS2(lime,app,Future)
HX_DECLARE_CLASS2(lime,net,HTTPRequestHeader)
HX_DECLARE_CLASS3(lime,net,_HTTPRequest,AbstractHTTPRequest)
HX_DECLARE_CLASS2(lime,net,_IHTTPRequest)
namespace lime{
namespace net{
namespace _HTTPRequest{


class HXCPP_CLASS_ATTRIBUTES  AbstractHTTPRequest_obj : public hx::Object{
	public:
		typedef hx::Object super;
		typedef AbstractHTTPRequest_obj OBJ_;
		AbstractHTTPRequest_obj();
		Void __construct(::String uri);

	public:
		inline void *operator new( size_t inSize, bool inContainer=true,const char *inName="lime.net._HTTPRequest.AbstractHTTPRequest")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		static hx::ObjectPtr< AbstractHTTPRequest_obj > __new(::String uri);
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~AbstractHTTPRequest_obj();

		HX_DO_RTTI_ALL;
		Dynamic __Field(const ::String &inString, hx::PropertyAccess inCallProp);
		Dynamic __SetField(const ::String &inString,const Dynamic &inValue, hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		hx::Object *__ToInterface(const hx::type_info &inType);
		operator ::lime::net::_IHTTPRequest_obj *();
		::String __ToString() const { return HX_HCSTRING("AbstractHTTPRequest","\xe5","\x22","\xa3","\xc7"); }

		::String contentType;
		::haxe::io::Bytes data;
		bool enableResponseHeaders;
		bool followRedirects;
		::haxe::ds::StringMap formData;
		Array< ::Dynamic > headers;
		::String method;
		Dynamic responseData;
		Array< ::Dynamic > responseHeaders;
		int responseStatus;
		int timeout;
		::String uri;
		::String userAgent;
		::lime::_backend::native::NativeHTTPRequest backend;
		virtual Void cancel( );
		Dynamic cancel_dyn();

		virtual ::lime::app::Future load( ::String uri);
		Dynamic load_dyn();

};

} // end namespace lime
} // end namespace net
} // end namespace _HTTPRequest

#endif /* INCLUDED_lime_net__HTTPRequest_AbstractHTTPRequest */ 
