#ifndef INCLUDED_lime_net_HTTPRequest
#define INCLUDED_lime_net_HTTPRequest

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#ifndef INCLUDED_lime_net__HTTPRequest_AbstractHTTPRequest
#include <lime/net/_HTTPRequest/AbstractHTTPRequest.h>
#endif
HX_DECLARE_CLASS2(lime,net,HTTPRequest)
HX_DECLARE_CLASS3(lime,net,_HTTPRequest,AbstractHTTPRequest)
HX_DECLARE_CLASS2(lime,net,_IHTTPRequest)
namespace lime{
namespace net{


class HXCPP_CLASS_ATTRIBUTES  HTTPRequest_obj : public ::lime::net::_HTTPRequest::AbstractHTTPRequest_obj{
	public:
		typedef ::lime::net::_HTTPRequest::AbstractHTTPRequest_obj super;
		typedef HTTPRequest_obj OBJ_;
		HTTPRequest_obj();
		Void __construct(::String uri);

	public:
		inline void *operator new( size_t inSize, bool inContainer=true,const char *inName="lime.net.HTTPRequest")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		static hx::ObjectPtr< HTTPRequest_obj > __new(::String uri);
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~HTTPRequest_obj();

		HX_DO_RTTI_ALL;
		static void __register();
		::String __ToString() const { return HX_HCSTRING("HTTPRequest","\xa7","\xa4","\xcd","\x7f"); }

};

} // end namespace lime
} // end namespace net

#endif /* INCLUDED_lime_net_HTTPRequest */ 
