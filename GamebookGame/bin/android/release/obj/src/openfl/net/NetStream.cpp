#include <hxcpp.h>

#ifndef INCLUDED_haxe_Timer
#include <haxe/Timer.h>
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
#ifndef INCLUDED_openfl_events_NetStatusEvent
#include <openfl/events/NetStatusEvent.h>
#endif
#ifndef INCLUDED_openfl_media_SoundTransform
#include <openfl/media/SoundTransform.h>
#endif
#ifndef INCLUDED_openfl_net_NetConnection
#include <openfl/net/NetConnection.h>
#endif
#ifndef INCLUDED_openfl_net_NetStream
#include <openfl/net/NetStream.h>
#endif
namespace openfl{
namespace net{

Void NetStream_obj::__construct(::openfl::net::NetConnection connection,::String peerID)
{
HX_STACK_FRAME("openfl.net.NetStream","new",0xb09a57e0,"openfl.net.NetStream.new","openfl/net/NetStream.hx",43,0x9cb99312)
HX_STACK_THIS(this)
HX_STACK_ARG(connection,"connection")
HX_STACK_ARG(peerID,"peerID")
{
	HX_STACK_LINE(45)
	super::__construct(null());
	HX_STACK_LINE(47)
	this->__connection = connection;
}
;
	return null();
}

//NetStream_obj::~NetStream_obj() { }

Dynamic NetStream_obj::__CreateEmpty() { return  new NetStream_obj; }
hx::ObjectPtr< NetStream_obj > NetStream_obj::__new(::openfl::net::NetConnection connection,::String peerID)
{  hx::ObjectPtr< NetStream_obj > _result_ = new NetStream_obj();
	_result_->__construct(connection,peerID);
	return _result_;}

Dynamic NetStream_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< NetStream_obj > _result_ = new NetStream_obj();
	_result_->__construct(inArgs[0],inArgs[1]);
	return _result_;}

Void NetStream_obj::close( ){
{
		HX_STACK_FRAME("openfl.net.NetStream","close",0x7cfa7f38,"openfl.net.NetStream.close","openfl/net/NetStream.hx",70,0x9cb99312)
		HX_STACK_THIS(this)
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(NetStream_obj,close,(void))

Void NetStream_obj::pause( ){
{
		HX_STACK_FRAME("openfl.net.NetStream","pause",0xf1ef3e76,"openfl.net.NetStream.pause","openfl/net/NetStream.hx",81,0x9cb99312)
		HX_STACK_THIS(this)
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(NetStream_obj,pause,(void))

Void NetStream_obj::play( ::String url,Dynamic _,Dynamic _1,Dynamic _2,Dynamic _3,Dynamic _4){
{
		HX_STACK_FRAME("openfl.net.NetStream","play",0xd7ca3674,"openfl.net.NetStream.play","openfl/net/NetStream.hx",90,0x9cb99312)
		HX_STACK_THIS(this)
		HX_STACK_ARG(url,"url")
		HX_STACK_ARG(_,"_")
		HX_STACK_ARG(_1,"_1")
		HX_STACK_ARG(_2,"_2")
		HX_STACK_ARG(_3,"_3")
		HX_STACK_ARG(_4,"_4")
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC6(NetStream_obj,play,(void))

Void NetStream_obj::requestVideoStatus( ){
{
		HX_STACK_FRAME("openfl.net.NetStream","requestVideoStatus",0xbba0537e,"openfl.net.NetStream.requestVideoStatus","openfl/net/NetStream.hx",100,0x9cb99312)
		HX_STACK_THIS(this)
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(NetStream_obj,requestVideoStatus,(void))

Void NetStream_obj::resume( ){
{
		HX_STACK_FRAME("openfl.net.NetStream","resume",0xd867922d,"openfl.net.NetStream.resume","openfl/net/NetStream.hx",129,0x9cb99312)
		HX_STACK_THIS(this)
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(NetStream_obj,resume,(void))

Void NetStream_obj::seek( Float time){
{
		HX_STACK_FRAME("openfl.net.NetStream","seek",0xd9c08df8,"openfl.net.NetStream.seek","openfl/net/NetStream.hx",138,0x9cb99312)
		HX_STACK_THIS(this)
		HX_STACK_ARG(time,"time")
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(NetStream_obj,seek,(void))

Void NetStream_obj::togglePause( ){
{
		HX_STACK_FRAME("openfl.net.NetStream","togglePause",0x12789642,"openfl.net.NetStream.togglePause","openfl/net/NetStream.hx",158,0x9cb99312)
		HX_STACK_THIS(this)
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(NetStream_obj,togglePause,(void))

Void NetStream_obj::__playStatus( ::String code){
{
		HX_STACK_FRAME("openfl.net.NetStream","__playStatus",0x66bf7be6,"openfl.net.NetStream.__playStatus","openfl/net/NetStream.hx",175,0x9cb99312)
		HX_STACK_THIS(this)
		HX_STACK_ARG(code,"code")
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(NetStream_obj,__playStatus,(void))

Void NetStream_obj::video_onCanPlay( Dynamic event){
{
		HX_STACK_FRAME("openfl.net.NetStream","video_onCanPlay",0x94edae41,"openfl.net.NetStream.video_onCanPlay","openfl/net/NetStream.hx",210,0x9cb99312)
		HX_STACK_THIS(this)
		HX_STACK_ARG(event,"event")
		HX_STACK_LINE(210)
		this->__playStatus(HX_HCSTRING("NetStream.Play.canplay","\x1b","\xcc","\xcb","\xcb"));
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(NetStream_obj,video_onCanPlay,(void))

Void NetStream_obj::video_onCanPlayThrough( Dynamic event){
{
		HX_STACK_FRAME("openfl.net.NetStream","video_onCanPlayThrough",0x89a17c04,"openfl.net.NetStream.video_onCanPlayThrough","openfl/net/NetStream.hx",217,0x9cb99312)
		HX_STACK_THIS(this)
		HX_STACK_ARG(event,"event")
		HX_STACK_LINE(217)
		this->__playStatus(HX_HCSTRING("NetStream.Play.canplaythrough","\x8a","\x05","\x15","\xa9"));
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(NetStream_obj,video_onCanPlayThrough,(void))

Void NetStream_obj::video_onDurationChanged( Dynamic event){
{
		HX_STACK_FRAME("openfl.net.NetStream","video_onDurationChanged",0xa779991d,"openfl.net.NetStream.video_onDurationChanged","openfl/net/NetStream.hx",224,0x9cb99312)
		HX_STACK_THIS(this)
		HX_STACK_ARG(event,"event")
		HX_STACK_LINE(224)
		this->__playStatus(HX_HCSTRING("NetStream.Play.durationchanged","\x37","\x45","\x91","\xe1"));
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(NetStream_obj,video_onDurationChanged,(void))

Void NetStream_obj::video_onEnd( Dynamic event){
{
		HX_STACK_FRAME("openfl.net.NetStream","video_onEnd",0x9fb90978,"openfl.net.NetStream.video_onEnd","openfl/net/NetStream.hx",229,0x9cb99312)
		HX_STACK_THIS(this)
		HX_STACK_ARG(event,"event")
		HX_STACK_LINE(231)
		::openfl::net::NetConnection tmp = this->__connection;		HX_STACK_VAR(tmp,"tmp");
		struct _Function_1_1{
			inline static Dynamic Block( ){
				HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","openfl/net/NetStream.hx",231,0x9cb99312)
				{
					hx::Anon __result = hx::Anon_obj::Create();
					__result->Add(HX_HCSTRING("code","\x2d","\xb1","\xc4","\x41") , HX_HCSTRING("NetStream.Play.Stop","\xab","\x15","\x72","\xa7"),false);
					return __result;
				}
				return null();
			}
		};
		HX_STACK_LINE(231)
		Dynamic tmp1 = _Function_1_1::Block();		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(231)
		::openfl::events::NetStatusEvent tmp2 = ::openfl::events::NetStatusEvent_obj::__new(HX_HCSTRING("netStatus","\x6f","\x4f","\xec","\x46"),false,false,tmp1);		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(231)
		tmp->dispatchEvent(tmp2);
		HX_STACK_LINE(232)
		this->__playStatus(HX_HCSTRING("NetStream.Play.Complete","\xe2","\xae","\x0c","\x40"));
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(NetStream_obj,video_onEnd,(void))

Void NetStream_obj::video_onError( Dynamic event){
{
		HX_STACK_FRAME("openfl.net.NetStream","video_onError",0xc9d832a5,"openfl.net.NetStream.video_onError","openfl/net/NetStream.hx",237,0x9cb99312)
		HX_STACK_THIS(this)
		HX_STACK_ARG(event,"event")
		HX_STACK_LINE(239)
		::openfl::net::NetConnection tmp = this->__connection;		HX_STACK_VAR(tmp,"tmp");
		struct _Function_1_1{
			inline static Dynamic Block( ){
				HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","openfl/net/NetStream.hx",239,0x9cb99312)
				{
					hx::Anon __result = hx::Anon_obj::Create();
					__result->Add(HX_HCSTRING("code","\x2d","\xb1","\xc4","\x41") , HX_HCSTRING("NetStream.Play.Stop","\xab","\x15","\x72","\xa7"),false);
					return __result;
				}
				return null();
			}
		};
		HX_STACK_LINE(239)
		Dynamic tmp1 = _Function_1_1::Block();		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(239)
		::openfl::events::NetStatusEvent tmp2 = ::openfl::events::NetStatusEvent_obj::__new(HX_HCSTRING("netStatus","\x6f","\x4f","\xec","\x46"),false,false,tmp1);		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(239)
		tmp->dispatchEvent(tmp2);
		HX_STACK_LINE(240)
		this->__playStatus(HX_HCSTRING("NetStream.Play.error","\x1f","\x2a","\x47","\x38"));
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(NetStream_obj,video_onError,(void))

Void NetStream_obj::video_onLoadMetaData( Dynamic event){
{
		HX_STACK_FRAME("openfl.net.NetStream","video_onLoadMetaData",0x5972de98,"openfl.net.NetStream.video_onLoadMetaData","openfl/net/NetStream.hx",245,0x9cb99312)
		HX_STACK_THIS(this)
		HX_STACK_ARG(event,"event")
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(NetStream_obj,video_onLoadMetaData,(void))

Void NetStream_obj::video_onLoadStart( Dynamic event){
{
		HX_STACK_FRAME("openfl.net.NetStream","video_onLoadStart",0x03aa59b9,"openfl.net.NetStream.video_onLoadStart","openfl/net/NetStream.hx",271,0x9cb99312)
		HX_STACK_THIS(this)
		HX_STACK_ARG(event,"event")
		HX_STACK_LINE(271)
		this->__playStatus(HX_HCSTRING("NetStream.Play.loadstart","\x53","\x26","\x16","\xe6"));
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(NetStream_obj,video_onLoadStart,(void))

Void NetStream_obj::video_onPause( Dynamic event){
{
		HX_STACK_FRAME("openfl.net.NetStream","video_onPause",0x14063dd3,"openfl.net.NetStream.video_onPause","openfl/net/NetStream.hx",278,0x9cb99312)
		HX_STACK_THIS(this)
		HX_STACK_ARG(event,"event")
		HX_STACK_LINE(278)
		this->__playStatus(HX_HCSTRING("NetStream.Play.pause","\x4d","\x35","\x75","\x82"));
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(NetStream_obj,video_onPause,(void))

Void NetStream_obj::video_onPlaying( Dynamic event){
{
		HX_STACK_FRAME("openfl.net.NetStream","video_onPlaying",0xb653a78b,"openfl.net.NetStream.video_onPlaying","openfl/net/NetStream.hx",283,0x9cb99312)
		HX_STACK_THIS(this)
		HX_STACK_ARG(event,"event")
		HX_STACK_LINE(285)
		::openfl::net::NetConnection tmp = this->__connection;		HX_STACK_VAR(tmp,"tmp");
		struct _Function_1_1{
			inline static Dynamic Block( ){
				HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","openfl/net/NetStream.hx",285,0x9cb99312)
				{
					hx::Anon __result = hx::Anon_obj::Create();
					__result->Add(HX_HCSTRING("code","\x2d","\xb1","\xc4","\x41") , HX_HCSTRING("NetStream.Play.Start","\x99","\x42","\x56","\xdc"),false);
					return __result;
				}
				return null();
			}
		};
		HX_STACK_LINE(285)
		Dynamic tmp1 = _Function_1_1::Block();		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(285)
		::openfl::events::NetStatusEvent tmp2 = ::openfl::events::NetStatusEvent_obj::__new(HX_HCSTRING("netStatus","\x6f","\x4f","\xec","\x46"),false,false,tmp1);		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(285)
		tmp->dispatchEvent(tmp2);
		HX_STACK_LINE(286)
		this->__playStatus(HX_HCSTRING("NetStream.Play.playing","\x85","\xf1","\x0a","\xd8"));
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(NetStream_obj,video_onPlaying,(void))

Void NetStream_obj::video_onSeeking( Dynamic event){
{
		HX_STACK_FRAME("openfl.net.NetStream","video_onSeeking",0xaaedda87,"openfl.net.NetStream.video_onSeeking","openfl/net/NetStream.hx",293,0x9cb99312)
		HX_STACK_THIS(this)
		HX_STACK_ARG(event,"event")
		HX_STACK_LINE(293)
		this->__playStatus(HX_HCSTRING("NetStream.Play.seeking","\x81","\x24","\xa5","\xcc"));
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(NetStream_obj,video_onSeeking,(void))

Void NetStream_obj::video_onStalled( Dynamic event){
{
		HX_STACK_FRAME("openfl.net.NetStream","video_onStalled",0x5d59679c,"openfl.net.NetStream.video_onStalled","openfl/net/NetStream.hx",300,0x9cb99312)
		HX_STACK_THIS(this)
		HX_STACK_ARG(event,"event")
		HX_STACK_LINE(300)
		this->__playStatus(HX_HCSTRING("NetStream.Play.stalled","\x96","\xb1","\x10","\x7f"));
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(NetStream_obj,video_onStalled,(void))

Void NetStream_obj::video_onTimeUpdate( Dynamic event){
{
		HX_STACK_FRAME("openfl.net.NetStream","video_onTimeUpdate",0x9b0d65f9,"openfl.net.NetStream.video_onTimeUpdate","openfl/net/NetStream.hx",311,0x9cb99312)
		HX_STACK_THIS(this)
		HX_STACK_ARG(event,"event")
		HX_STACK_LINE(311)
		this->__playStatus(HX_HCSTRING("NetStream.Play.timeupdate","\x1f","\xa0","\xf4","\xd6"));
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(NetStream_obj,video_onTimeUpdate,(void))

Void NetStream_obj::video_onWaiting( Dynamic event){
{
		HX_STACK_FRAME("openfl.net.NetStream","video_onWaiting",0x0b6381aa,"openfl.net.NetStream.video_onWaiting","openfl/net/NetStream.hx",318,0x9cb99312)
		HX_STACK_THIS(this)
		HX_STACK_ARG(event,"event")
		HX_STACK_LINE(318)
		this->__playStatus(HX_HCSTRING("NetStream.Play.waiting","\xa4","\xcb","\x1a","\x2d"));
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(NetStream_obj,video_onWaiting,(void))

Float NetStream_obj::get_speed( ){
	HX_STACK_FRAME("openfl.net.NetStream","get_speed",0x8a341b5e,"openfl.net.NetStream.get_speed","openfl/net/NetStream.hx",335,0x9cb99312)
	HX_STACK_THIS(this)
	HX_STACK_LINE(335)
	return (int)1;
}


HX_DEFINE_DYNAMIC_FUNC0(NetStream_obj,get_speed,return )

Float NetStream_obj::set_speed( Float value){
	HX_STACK_FRAME("openfl.net.NetStream","set_speed",0x6d85076a,"openfl.net.NetStream.set_speed","openfl/net/NetStream.hx",341,0x9cb99312)
	HX_STACK_THIS(this)
	HX_STACK_ARG(value,"value")
	HX_STACK_LINE(346)
	Float tmp = value;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(346)
	return tmp;
}


HX_DEFINE_DYNAMIC_FUNC1(NetStream_obj,set_speed,return )


NetStream_obj::NetStream_obj()
{
}

void NetStream_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(NetStream);
	HX_MARK_MEMBER_NAME(audioCodec,"audioCodec");
	HX_MARK_MEMBER_NAME(bufferLength,"bufferLength");
	HX_MARK_MEMBER_NAME(bufferTime,"bufferTime");
	HX_MARK_MEMBER_NAME(bytesLoaded,"bytesLoaded");
	HX_MARK_MEMBER_NAME(bytesTotal,"bytesTotal");
	HX_MARK_MEMBER_NAME(checkPolicyFile,"checkPolicyFile");
	HX_MARK_MEMBER_NAME(client,"client");
	HX_MARK_MEMBER_NAME(currentFPS,"currentFPS");
	HX_MARK_MEMBER_NAME(decodedFrames,"decodedFrames");
	HX_MARK_MEMBER_NAME(liveDelay,"liveDelay");
	HX_MARK_MEMBER_NAME(objectEncoding,"objectEncoding");
	HX_MARK_MEMBER_NAME(soundTransform,"soundTransform");
	HX_MARK_MEMBER_NAME(time,"time");
	HX_MARK_MEMBER_NAME(videoCode,"videoCode");
	HX_MARK_MEMBER_NAME(__connection,"__connection");
	HX_MARK_MEMBER_NAME(__timer,"__timer");
	::openfl::events::EventDispatcher_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void NetStream_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(audioCodec,"audioCodec");
	HX_VISIT_MEMBER_NAME(bufferLength,"bufferLength");
	HX_VISIT_MEMBER_NAME(bufferTime,"bufferTime");
	HX_VISIT_MEMBER_NAME(bytesLoaded,"bytesLoaded");
	HX_VISIT_MEMBER_NAME(bytesTotal,"bytesTotal");
	HX_VISIT_MEMBER_NAME(checkPolicyFile,"checkPolicyFile");
	HX_VISIT_MEMBER_NAME(client,"client");
	HX_VISIT_MEMBER_NAME(currentFPS,"currentFPS");
	HX_VISIT_MEMBER_NAME(decodedFrames,"decodedFrames");
	HX_VISIT_MEMBER_NAME(liveDelay,"liveDelay");
	HX_VISIT_MEMBER_NAME(objectEncoding,"objectEncoding");
	HX_VISIT_MEMBER_NAME(soundTransform,"soundTransform");
	HX_VISIT_MEMBER_NAME(time,"time");
	HX_VISIT_MEMBER_NAME(videoCode,"videoCode");
	HX_VISIT_MEMBER_NAME(__connection,"__connection");
	HX_VISIT_MEMBER_NAME(__timer,"__timer");
	::openfl::events::EventDispatcher_obj::__Visit(HX_VISIT_ARG);
}

Dynamic NetStream_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"time") ) { return time; }
		if (HX_FIELD_EQ(inName,"play") ) { return play_dyn(); }
		if (HX_FIELD_EQ(inName,"seek") ) { return seek_dyn(); }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"speed") ) { if (inCallProp == hx::paccAlways) return get_speed(); }
		if (HX_FIELD_EQ(inName,"close") ) { return close_dyn(); }
		if (HX_FIELD_EQ(inName,"pause") ) { return pause_dyn(); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"client") ) { return client; }
		if (HX_FIELD_EQ(inName,"resume") ) { return resume_dyn(); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"__timer") ) { return __timer; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"liveDelay") ) { return liveDelay; }
		if (HX_FIELD_EQ(inName,"videoCode") ) { return videoCode; }
		if (HX_FIELD_EQ(inName,"get_speed") ) { return get_speed_dyn(); }
		if (HX_FIELD_EQ(inName,"set_speed") ) { return set_speed_dyn(); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"audioCodec") ) { return audioCodec; }
		if (HX_FIELD_EQ(inName,"bufferTime") ) { return bufferTime; }
		if (HX_FIELD_EQ(inName,"bytesTotal") ) { return bytesTotal; }
		if (HX_FIELD_EQ(inName,"currentFPS") ) { return currentFPS; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"bytesLoaded") ) { return bytesLoaded; }
		if (HX_FIELD_EQ(inName,"togglePause") ) { return togglePause_dyn(); }
		if (HX_FIELD_EQ(inName,"video_onEnd") ) { return video_onEnd_dyn(); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"bufferLength") ) { return bufferLength; }
		if (HX_FIELD_EQ(inName,"__connection") ) { return __connection; }
		if (HX_FIELD_EQ(inName,"__playStatus") ) { return __playStatus_dyn(); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"decodedFrames") ) { return decodedFrames; }
		if (HX_FIELD_EQ(inName,"video_onError") ) { return video_onError_dyn(); }
		if (HX_FIELD_EQ(inName,"video_onPause") ) { return video_onPause_dyn(); }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"objectEncoding") ) { return objectEncoding; }
		if (HX_FIELD_EQ(inName,"soundTransform") ) { return soundTransform; }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"checkPolicyFile") ) { return checkPolicyFile; }
		if (HX_FIELD_EQ(inName,"video_onCanPlay") ) { return video_onCanPlay_dyn(); }
		if (HX_FIELD_EQ(inName,"video_onPlaying") ) { return video_onPlaying_dyn(); }
		if (HX_FIELD_EQ(inName,"video_onSeeking") ) { return video_onSeeking_dyn(); }
		if (HX_FIELD_EQ(inName,"video_onStalled") ) { return video_onStalled_dyn(); }
		if (HX_FIELD_EQ(inName,"video_onWaiting") ) { return video_onWaiting_dyn(); }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"video_onLoadStart") ) { return video_onLoadStart_dyn(); }
		break;
	case 18:
		if (HX_FIELD_EQ(inName,"requestVideoStatus") ) { return requestVideoStatus_dyn(); }
		if (HX_FIELD_EQ(inName,"video_onTimeUpdate") ) { return video_onTimeUpdate_dyn(); }
		break;
	case 20:
		if (HX_FIELD_EQ(inName,"video_onLoadMetaData") ) { return video_onLoadMetaData_dyn(); }
		break;
	case 22:
		if (HX_FIELD_EQ(inName,"video_onCanPlayThrough") ) { return video_onCanPlayThrough_dyn(); }
		break;
	case 23:
		if (HX_FIELD_EQ(inName,"video_onDurationChanged") ) { return video_onDurationChanged_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic NetStream_obj::__SetField(const ::String &inName,const Dynamic &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"time") ) { time=inValue.Cast< Float >(); return inValue; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"speed") ) { if (inCallProp == hx::paccAlways) return set_speed(inValue); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"client") ) { client=inValue.Cast< Dynamic >(); return inValue; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"__timer") ) { __timer=inValue.Cast< ::haxe::Timer >(); return inValue; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"liveDelay") ) { liveDelay=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"videoCode") ) { videoCode=inValue.Cast< int >(); return inValue; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"audioCodec") ) { audioCodec=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"bufferTime") ) { bufferTime=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"bytesTotal") ) { bytesTotal=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"currentFPS") ) { currentFPS=inValue.Cast< Float >(); return inValue; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"bytesLoaded") ) { bytesLoaded=inValue.Cast< int >(); return inValue; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"bufferLength") ) { bufferLength=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"__connection") ) { __connection=inValue.Cast< ::openfl::net::NetConnection >(); return inValue; }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"decodedFrames") ) { decodedFrames=inValue.Cast< int >(); return inValue; }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"objectEncoding") ) { objectEncoding=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"soundTransform") ) { soundTransform=inValue.Cast< ::openfl::media::SoundTransform >(); return inValue; }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"checkPolicyFile") ) { checkPolicyFile=inValue.Cast< bool >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void NetStream_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("audioCodec","\xe0","\x85","\xaf","\xe9"));
	outFields->push(HX_HCSTRING("bufferLength","\x06","\x86","\xdc","\xa3"));
	outFields->push(HX_HCSTRING("bufferTime","\x2d","\x35","\x0d","\x9e"));
	outFields->push(HX_HCSTRING("bytesLoaded","\xd0","\x66","\xca","\x99"));
	outFields->push(HX_HCSTRING("bytesTotal","\x59","\x57","\xda","\x45"));
	outFields->push(HX_HCSTRING("checkPolicyFile","\x76","\x1e","\x96","\xaf"));
	outFields->push(HX_HCSTRING("client","\x4b","\xca","\x4f","\x0a"));
	outFields->push(HX_HCSTRING("currentFPS","\x30","\x71","\x28","\xc7"));
	outFields->push(HX_HCSTRING("decodedFrames","\xbc","\x4b","\xb5","\x7c"));
	outFields->push(HX_HCSTRING("liveDelay","\xf7","\x90","\xcd","\x6a"));
	outFields->push(HX_HCSTRING("objectEncoding","\xb2","\x1e","\x15","\x2a"));
	outFields->push(HX_HCSTRING("soundTransform","\x9d","\xee","\xde","\x22"));
	outFields->push(HX_HCSTRING("speed","\x87","\x97","\x69","\x81"));
	outFields->push(HX_HCSTRING("time","\x0d","\xcc","\xfc","\x4c"));
	outFields->push(HX_HCSTRING("videoCode","\x48","\x4b","\x7d","\x67"));
	outFields->push(HX_HCSTRING("__connection","\x3e","\x1b","\xa6","\x2d"));
	outFields->push(HX_HCSTRING("__timer","\xa5","\x18","\x94","\x7a"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsInt,(int)offsetof(NetStream_obj,audioCodec),HX_HCSTRING("audioCodec","\xe0","\x85","\xaf","\xe9")},
	{hx::fsFloat,(int)offsetof(NetStream_obj,bufferLength),HX_HCSTRING("bufferLength","\x06","\x86","\xdc","\xa3")},
	{hx::fsFloat,(int)offsetof(NetStream_obj,bufferTime),HX_HCSTRING("bufferTime","\x2d","\x35","\x0d","\x9e")},
	{hx::fsInt,(int)offsetof(NetStream_obj,bytesLoaded),HX_HCSTRING("bytesLoaded","\xd0","\x66","\xca","\x99")},
	{hx::fsInt,(int)offsetof(NetStream_obj,bytesTotal),HX_HCSTRING("bytesTotal","\x59","\x57","\xda","\x45")},
	{hx::fsBool,(int)offsetof(NetStream_obj,checkPolicyFile),HX_HCSTRING("checkPolicyFile","\x76","\x1e","\x96","\xaf")},
	{hx::fsObject /*Dynamic*/ ,(int)offsetof(NetStream_obj,client),HX_HCSTRING("client","\x4b","\xca","\x4f","\x0a")},
	{hx::fsFloat,(int)offsetof(NetStream_obj,currentFPS),HX_HCSTRING("currentFPS","\x30","\x71","\x28","\xc7")},
	{hx::fsInt,(int)offsetof(NetStream_obj,decodedFrames),HX_HCSTRING("decodedFrames","\xbc","\x4b","\xb5","\x7c")},
	{hx::fsFloat,(int)offsetof(NetStream_obj,liveDelay),HX_HCSTRING("liveDelay","\xf7","\x90","\xcd","\x6a")},
	{hx::fsInt,(int)offsetof(NetStream_obj,objectEncoding),HX_HCSTRING("objectEncoding","\xb2","\x1e","\x15","\x2a")},
	{hx::fsObject /*::openfl::media::SoundTransform*/ ,(int)offsetof(NetStream_obj,soundTransform),HX_HCSTRING("soundTransform","\x9d","\xee","\xde","\x22")},
	{hx::fsFloat,(int)offsetof(NetStream_obj,time),HX_HCSTRING("time","\x0d","\xcc","\xfc","\x4c")},
	{hx::fsInt,(int)offsetof(NetStream_obj,videoCode),HX_HCSTRING("videoCode","\x48","\x4b","\x7d","\x67")},
	{hx::fsObject /*::openfl::net::NetConnection*/ ,(int)offsetof(NetStream_obj,__connection),HX_HCSTRING("__connection","\x3e","\x1b","\xa6","\x2d")},
	{hx::fsObject /*::haxe::Timer*/ ,(int)offsetof(NetStream_obj,__timer),HX_HCSTRING("__timer","\xa5","\x18","\x94","\x7a")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo *sStaticStorageInfo = 0;
#endif

static ::String sMemberFields[] = {
	HX_HCSTRING("audioCodec","\xe0","\x85","\xaf","\xe9"),
	HX_HCSTRING("bufferLength","\x06","\x86","\xdc","\xa3"),
	HX_HCSTRING("bufferTime","\x2d","\x35","\x0d","\x9e"),
	HX_HCSTRING("bytesLoaded","\xd0","\x66","\xca","\x99"),
	HX_HCSTRING("bytesTotal","\x59","\x57","\xda","\x45"),
	HX_HCSTRING("checkPolicyFile","\x76","\x1e","\x96","\xaf"),
	HX_HCSTRING("client","\x4b","\xca","\x4f","\x0a"),
	HX_HCSTRING("currentFPS","\x30","\x71","\x28","\xc7"),
	HX_HCSTRING("decodedFrames","\xbc","\x4b","\xb5","\x7c"),
	HX_HCSTRING("liveDelay","\xf7","\x90","\xcd","\x6a"),
	HX_HCSTRING("objectEncoding","\xb2","\x1e","\x15","\x2a"),
	HX_HCSTRING("soundTransform","\x9d","\xee","\xde","\x22"),
	HX_HCSTRING("time","\x0d","\xcc","\xfc","\x4c"),
	HX_HCSTRING("videoCode","\x48","\x4b","\x7d","\x67"),
	HX_HCSTRING("__connection","\x3e","\x1b","\xa6","\x2d"),
	HX_HCSTRING("__timer","\xa5","\x18","\x94","\x7a"),
	HX_HCSTRING("close","\xb8","\x17","\x63","\x48"),
	HX_HCSTRING("pause","\xf6","\xd6","\x57","\xbd"),
	HX_HCSTRING("play","\xf4","\x2d","\x5a","\x4a"),
	HX_HCSTRING("requestVideoStatus","\xfe","\x6a","\x62","\x2f"),
	HX_HCSTRING("resume","\xad","\x69","\x84","\x08"),
	HX_HCSTRING("seek","\x78","\x85","\x50","\x4c"),
	HX_HCSTRING("togglePause","\xc2","\x8e","\x1e","\xe5"),
	HX_HCSTRING("__playStatus","\x66","\xf3","\x52","\xe5"),
	HX_HCSTRING("video_onCanPlay","\xc1","\xe6","\x39","\x31"),
	HX_HCSTRING("video_onCanPlayThrough","\x84","\x53","\x05","\xf1"),
	HX_HCSTRING("video_onDurationChanged","\x9d","\x51","\x72","\xb7"),
	HX_HCSTRING("video_onEnd","\xf8","\x01","\x5f","\x72"),
	HX_HCSTRING("video_onError","\x25","\x4b","\x4d","\x0c"),
	HX_HCSTRING("video_onLoadMetaData","\x18","\xd6","\x89","\xd3"),
	HX_HCSTRING("video_onLoadStart","\x39","\xb2","\xd5","\x75"),
	HX_HCSTRING("video_onPause","\x53","\x56","\x7b","\x56"),
	HX_HCSTRING("video_onPlaying","\x0b","\xe0","\x9f","\x52"),
	HX_HCSTRING("video_onSeeking","\x07","\x13","\x3a","\x47"),
	HX_HCSTRING("video_onStalled","\x1c","\xa0","\xa5","\xf9"),
	HX_HCSTRING("video_onTimeUpdate","\x79","\x7d","\xcf","\x0e"),
	HX_HCSTRING("video_onWaiting","\x2a","\xba","\xaf","\xa7"),
	HX_HCSTRING("get_speed","\xde","\xf3","\x12","\xc5"),
	HX_HCSTRING("set_speed","\xea","\xdf","\x63","\xa8"),
	::String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(NetStream_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(NetStream_obj::__mClass,"__mClass");
};

#endif

hx::Class NetStream_obj::__mClass;

void NetStream_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("openfl.net.NetStream","\xee","\x27","\x61","\x23");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = hx::Class_obj::dupFunctions(sMemberFields);
	__mClass->mCanCast = hx::TCanCast< NetStream_obj >;
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
