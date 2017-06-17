#ifndef INCLUDED_openfl_net_NetStream
#define INCLUDED_openfl_net_NetStream

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#ifndef INCLUDED_openfl_events_EventDispatcher
#include <openfl/events/EventDispatcher.h>
#endif
HX_DECLARE_CLASS1(haxe,Timer)
HX_DECLARE_CLASS2(openfl,events,EventDispatcher)
HX_DECLARE_CLASS2(openfl,events,IEventDispatcher)
HX_DECLARE_CLASS2(openfl,media,SoundTransform)
HX_DECLARE_CLASS2(openfl,net,NetConnection)
HX_DECLARE_CLASS2(openfl,net,NetStream)
namespace openfl{
namespace net{


class HXCPP_CLASS_ATTRIBUTES  NetStream_obj : public ::openfl::events::EventDispatcher_obj{
	public:
		typedef ::openfl::events::EventDispatcher_obj super;
		typedef NetStream_obj OBJ_;
		NetStream_obj();
		Void __construct(::openfl::net::NetConnection connection,::String peerID);

	public:
		inline void *operator new( size_t inSize, bool inContainer=true,const char *inName="openfl.net.NetStream")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		static hx::ObjectPtr< NetStream_obj > __new(::openfl::net::NetConnection connection,::String peerID);
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~NetStream_obj();

		HX_DO_RTTI_ALL;
		Dynamic __Field(const ::String &inString, hx::PropertyAccess inCallProp);
		Dynamic __SetField(const ::String &inString,const Dynamic &inValue, hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		::String __ToString() const { return HX_HCSTRING("NetStream","\x9d","\x5c","\xf0","\xf3"); }

		int audioCodec;
		Float bufferLength;
		Float bufferTime;
		int bytesLoaded;
		int bytesTotal;
		bool checkPolicyFile;
		Dynamic client;
		Float currentFPS;
		int decodedFrames;
		Float liveDelay;
		int objectEncoding;
		::openfl::media::SoundTransform soundTransform;
		Float time;
		int videoCode;
		::openfl::net::NetConnection __connection;
		::haxe::Timer __timer;
		virtual Void close( );
		Dynamic close_dyn();

		virtual Void pause( );
		Dynamic pause_dyn();

		virtual Void play( ::String url,Dynamic _,Dynamic _1,Dynamic _2,Dynamic _3,Dynamic _4);
		Dynamic play_dyn();

		virtual Void requestVideoStatus( );
		Dynamic requestVideoStatus_dyn();

		virtual Void resume( );
		Dynamic resume_dyn();

		virtual Void seek( Float time);
		Dynamic seek_dyn();

		virtual Void togglePause( );
		Dynamic togglePause_dyn();

		virtual Void __playStatus( ::String code);
		Dynamic __playStatus_dyn();

		virtual Void video_onCanPlay( Dynamic event);
		Dynamic video_onCanPlay_dyn();

		virtual Void video_onCanPlayThrough( Dynamic event);
		Dynamic video_onCanPlayThrough_dyn();

		virtual Void video_onDurationChanged( Dynamic event);
		Dynamic video_onDurationChanged_dyn();

		virtual Void video_onEnd( Dynamic event);
		Dynamic video_onEnd_dyn();

		virtual Void video_onError( Dynamic event);
		Dynamic video_onError_dyn();

		virtual Void video_onLoadMetaData( Dynamic event);
		Dynamic video_onLoadMetaData_dyn();

		virtual Void video_onLoadStart( Dynamic event);
		Dynamic video_onLoadStart_dyn();

		virtual Void video_onPause( Dynamic event);
		Dynamic video_onPause_dyn();

		virtual Void video_onPlaying( Dynamic event);
		Dynamic video_onPlaying_dyn();

		virtual Void video_onSeeking( Dynamic event);
		Dynamic video_onSeeking_dyn();

		virtual Void video_onStalled( Dynamic event);
		Dynamic video_onStalled_dyn();

		virtual Void video_onTimeUpdate( Dynamic event);
		Dynamic video_onTimeUpdate_dyn();

		virtual Void video_onWaiting( Dynamic event);
		Dynamic video_onWaiting_dyn();

		virtual Float get_speed( );
		Dynamic get_speed_dyn();

		virtual Float set_speed( Float value);
		Dynamic set_speed_dyn();

};

} // end namespace openfl
} // end namespace net

#endif /* INCLUDED_openfl_net_NetStream */ 
