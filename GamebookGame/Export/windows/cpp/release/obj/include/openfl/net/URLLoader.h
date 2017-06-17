#ifndef INCLUDED_openfl_net_URLLoader
#define INCLUDED_openfl_net_URLLoader

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#ifndef INCLUDED_openfl_events_EventDispatcher
#include <openfl/events/EventDispatcher.h>
#endif
HX_DECLARE_CLASS2(lime,net,_IHTTPRequest)
HX_DECLARE_CLASS2(openfl,events,EventDispatcher)
HX_DECLARE_CLASS2(openfl,events,IEventDispatcher)
HX_DECLARE_CLASS2(openfl,net,URLLoader)
HX_DECLARE_CLASS2(openfl,net,URLRequest)
namespace openfl{
namespace net{


class HXCPP_CLASS_ATTRIBUTES  URLLoader_obj : public ::openfl::events::EventDispatcher_obj{
	public:
		typedef ::openfl::events::EventDispatcher_obj super;
		typedef URLLoader_obj OBJ_;
		URLLoader_obj();
		Void __construct(::openfl::net::URLRequest request);

	public:
		inline void *operator new( size_t inSize, bool inContainer=true,const char *inName="openfl.net.URLLoader")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		static hx::ObjectPtr< URLLoader_obj > __new(::openfl::net::URLRequest request);
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~URLLoader_obj();

		HX_DO_RTTI_ALL;
		Dynamic __Field(const ::String &inString, hx::PropertyAccess inCallProp);
		Dynamic __SetField(const ::String &inString,const Dynamic &inValue, hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		::String __ToString() const { return HX_HCSTRING("URLLoader","\xc2","\x68","\xb3","\x41"); }

		int bytesLoaded;
		int bytesTotal;
		Dynamic data;
		Dynamic dataFormat;
		::lime::net::_IHTTPRequest __httpRequest;
		virtual Void close( );
		Dynamic close_dyn();

		virtual Void load( ::openfl::net::URLRequest request);
		Dynamic load_dyn();

		virtual Void __prepareRequest( ::lime::net::_IHTTPRequest httpRequest,::openfl::net::URLRequest request);
		Dynamic __prepareRequest_dyn();

		virtual Void httpRequest_onError( Dynamic error);
		Dynamic httpRequest_onError_dyn();

		virtual Void httpRequest_onProgress( int bytesLoaded,int bytesTotal);
		Dynamic httpRequest_onProgress_dyn();

};

} // end namespace openfl
} // end namespace net

#endif /* INCLUDED_openfl_net_URLLoader */ 
