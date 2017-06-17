#ifndef INCLUDED_lime_net__HTTPRequest_lime_text_Font
#define INCLUDED_lime_net__HTTPRequest_lime_text_Font

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#ifndef INCLUDED_lime_net__HTTPRequest_Bytes
#include <lime/net/_HTTPRequest_Bytes.h>
#endif
HX_DECLARE_CLASS2(haxe,io,Bytes)
HX_DECLARE_CLASS3(lime,net,_HTTPRequest,AbstractHTTPRequest)
HX_DECLARE_CLASS2(lime,net,_HTTPRequest_Bytes)
HX_DECLARE_CLASS2(lime,net,_HTTPRequest_lime_text_Font)
HX_DECLARE_CLASS2(lime,net,_IHTTPRequest)
namespace lime{
namespace net{


class HXCPP_CLASS_ATTRIBUTES  _HTTPRequest_lime_text_Font_obj : public ::lime::net::_HTTPRequest_Bytes_obj{
	public:
		typedef ::lime::net::_HTTPRequest_Bytes_obj super;
		typedef _HTTPRequest_lime_text_Font_obj OBJ_;
		_HTTPRequest_lime_text_Font_obj();
		Void __construct(::String uri);

	public:
		inline void *operator new( size_t inSize, bool inContainer=true,const char *inName="lime.net._HTTPRequest_lime_text_Font")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		static hx::ObjectPtr< _HTTPRequest_lime_text_Font_obj > __new(::String uri);
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~_HTTPRequest_lime_text_Font_obj();

		HX_DO_RTTI_ALL;
		Dynamic __Field(const ::String &inString, hx::PropertyAccess inCallProp);
		static void __register();
		::String __ToString() const { return HX_HCSTRING("_HTTPRequest_lime_text_Font","\x0e","\x18","\x92","\x88"); }

		virtual Dynamic fromBytes( ::haxe::io::Bytes bytes);

};

} // end namespace lime
} // end namespace net

#endif /* INCLUDED_lime_net__HTTPRequest_lime_text_Font */ 
