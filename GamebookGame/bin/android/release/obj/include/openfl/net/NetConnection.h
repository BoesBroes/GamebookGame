#ifndef INCLUDED_openfl_net_NetConnection
#define INCLUDED_openfl_net_NetConnection

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#ifndef INCLUDED_openfl_events_EventDispatcher
#include <openfl/events/EventDispatcher.h>
#endif
HX_DECLARE_CLASS2(openfl,events,EventDispatcher)
HX_DECLARE_CLASS2(openfl,events,IEventDispatcher)
HX_DECLARE_CLASS2(openfl,net,NetConnection)
namespace openfl{
namespace net{


class HXCPP_CLASS_ATTRIBUTES  NetConnection_obj : public ::openfl::events::EventDispatcher_obj{
	public:
		typedef ::openfl::events::EventDispatcher_obj super;
		typedef NetConnection_obj OBJ_;
		NetConnection_obj();
		Void __construct();

	public:
		inline void *operator new( size_t inSize, bool inContainer=true,const char *inName="openfl.net.NetConnection")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		static hx::ObjectPtr< NetConnection_obj > __new();
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~NetConnection_obj();

		HX_DO_RTTI_ALL;
		Dynamic __Field(const ::String &inString, hx::PropertyAccess inCallProp);
		static void __register();
		::String __ToString() const { return HX_HCSTRING("NetConnection","\xbb","\xba","\xb8","\x81"); }

		static void __boot();
		static ::String CONNECT_SUCCESS;
		virtual Void connect( ::String command,Dynamic _,Dynamic _1,Dynamic _2,Dynamic _3,Dynamic _4);
		Dynamic connect_dyn();

};

} // end namespace openfl
} // end namespace net

#endif /* INCLUDED_openfl_net_NetConnection */ 
