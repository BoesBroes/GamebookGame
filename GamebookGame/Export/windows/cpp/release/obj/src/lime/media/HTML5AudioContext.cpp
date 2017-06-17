#include <hxcpp.h>

#ifndef INCLUDED_lime_media_AudioBuffer
#include <lime/media/AudioBuffer.h>
#endif
#ifndef INCLUDED_lime_media_HTML5AudioContext
#include <lime/media/HTML5AudioContext.h>
#endif
namespace lime{
namespace media{

Void HTML5AudioContext_obj::__construct()
{
HX_STACK_FRAME("lime.media.HTML5AudioContext","new",0xbd7f0dd2,"lime.media.HTML5AudioContext.new","lime/media/HTML5AudioContext.hx",11,0x102d35a0)
HX_STACK_THIS(this)
{
	HX_STACK_LINE(22)
	this->NETWORK_NO_SOURCE = (int)3;
	HX_STACK_LINE(21)
	this->NETWORK_LOADING = (int)2;
	HX_STACK_LINE(20)
	this->NETWORK_IDLE = (int)1;
	HX_STACK_LINE(19)
	this->NETWORK_EMPTY = (int)0;
	HX_STACK_LINE(18)
	this->HAVE_NOTHING = (int)0;
	HX_STACK_LINE(17)
	this->HAVE_METADATA = (int)1;
	HX_STACK_LINE(16)
	this->HAVE_FUTURE_DATA = (int)3;
	HX_STACK_LINE(15)
	this->HAVE_ENOUGH_DATA = (int)4;
	HX_STACK_LINE(14)
	this->HAVE_CURRENT_DATA = (int)2;
}
;
	return null();
}

//HTML5AudioContext_obj::~HTML5AudioContext_obj() { }

Dynamic HTML5AudioContext_obj::__CreateEmpty() { return  new HTML5AudioContext_obj; }
hx::ObjectPtr< HTML5AudioContext_obj > HTML5AudioContext_obj::__new()
{  hx::ObjectPtr< HTML5AudioContext_obj > _result_ = new HTML5AudioContext_obj();
	_result_->__construct();
	return _result_;}

Dynamic HTML5AudioContext_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< HTML5AudioContext_obj > _result_ = new HTML5AudioContext_obj();
	_result_->__construct();
	return _result_;}

::String HTML5AudioContext_obj::canPlayType( ::lime::media::AudioBuffer buffer,::String type){
	HX_STACK_FRAME("lime.media.HTML5AudioContext","canPlayType",0x42751670,"lime.media.HTML5AudioContext.canPlayType","lime/media/HTML5AudioContext.hx",42,0x102d35a0)
	HX_STACK_THIS(this)
	HX_STACK_ARG(buffer,"buffer")
	HX_STACK_ARG(type,"type")
	HX_STACK_LINE(42)
	return null();
}


HX_DEFINE_DYNAMIC_FUNC2(HTML5AudioContext_obj,canPlayType,return )

::lime::media::AudioBuffer HTML5AudioContext_obj::createBuffer( ::String urlString){
	HX_STACK_FRAME("lime.media.HTML5AudioContext","createBuffer",0x1818816a,"lime.media.HTML5AudioContext.createBuffer","lime/media/HTML5AudioContext.hx",55,0x102d35a0)
	HX_STACK_THIS(this)
	HX_STACK_ARG(urlString,"urlString")
	HX_STACK_LINE(55)
	return null();
}


HX_DEFINE_DYNAMIC_FUNC1(HTML5AudioContext_obj,createBuffer,return )

bool HTML5AudioContext_obj::getAutoplay( ::lime::media::AudioBuffer buffer){
	HX_STACK_FRAME("lime.media.HTML5AudioContext","getAutoplay",0x3e4bb30b,"lime.media.HTML5AudioContext.getAutoplay","lime/media/HTML5AudioContext.hx",71,0x102d35a0)
	HX_STACK_THIS(this)
	HX_STACK_ARG(buffer,"buffer")
	HX_STACK_LINE(71)
	return false;
}


HX_DEFINE_DYNAMIC_FUNC1(HTML5AudioContext_obj,getAutoplay,return )

Dynamic HTML5AudioContext_obj::getBuffered( ::lime::media::AudioBuffer buffer){
	HX_STACK_FRAME("lime.media.HTML5AudioContext","getBuffered",0xa8a31787,"lime.media.HTML5AudioContext.getBuffered","lime/media/HTML5AudioContext.hx",86,0x102d35a0)
	HX_STACK_THIS(this)
	HX_STACK_ARG(buffer,"buffer")
	HX_STACK_LINE(86)
	return null();
}


HX_DEFINE_DYNAMIC_FUNC1(HTML5AudioContext_obj,getBuffered,return )

::String HTML5AudioContext_obj::getCurrentSrc( ::lime::media::AudioBuffer buffer){
	HX_STACK_FRAME("lime.media.HTML5AudioContext","getCurrentSrc",0x872a0853,"lime.media.HTML5AudioContext.getCurrentSrc","lime/media/HTML5AudioContext.hx",101,0x102d35a0)
	HX_STACK_THIS(this)
	HX_STACK_ARG(buffer,"buffer")
	HX_STACK_LINE(101)
	return null();
}


HX_DEFINE_DYNAMIC_FUNC1(HTML5AudioContext_obj,getCurrentSrc,return )

Float HTML5AudioContext_obj::getCurrentTime( ::lime::media::AudioBuffer buffer){
	HX_STACK_FRAME("lime.media.HTML5AudioContext","getCurrentTime",0xbe3fabbe,"lime.media.HTML5AudioContext.getCurrentTime","lime/media/HTML5AudioContext.hx",116,0x102d35a0)
	HX_STACK_THIS(this)
	HX_STACK_ARG(buffer,"buffer")
	HX_STACK_LINE(116)
	return (int)0;
}


HX_DEFINE_DYNAMIC_FUNC1(HTML5AudioContext_obj,getCurrentTime,return )

Float HTML5AudioContext_obj::getDefaultPlaybackRate( ::lime::media::AudioBuffer buffer){
	HX_STACK_FRAME("lime.media.HTML5AudioContext","getDefaultPlaybackRate",0xb2bb9bd4,"lime.media.HTML5AudioContext.getDefaultPlaybackRate","lime/media/HTML5AudioContext.hx",131,0x102d35a0)
	HX_STACK_THIS(this)
	HX_STACK_ARG(buffer,"buffer")
	HX_STACK_LINE(131)
	return (int)1;
}


HX_DEFINE_DYNAMIC_FUNC1(HTML5AudioContext_obj,getDefaultPlaybackRate,return )

Float HTML5AudioContext_obj::getDuration( ::lime::media::AudioBuffer buffer){
	HX_STACK_FRAME("lime.media.HTML5AudioContext","getDuration",0x1032d17c,"lime.media.HTML5AudioContext.getDuration","lime/media/HTML5AudioContext.hx",146,0x102d35a0)
	HX_STACK_THIS(this)
	HX_STACK_ARG(buffer,"buffer")
	HX_STACK_LINE(146)
	return (int)0;
}


HX_DEFINE_DYNAMIC_FUNC1(HTML5AudioContext_obj,getDuration,return )

bool HTML5AudioContext_obj::getEnded( ::lime::media::AudioBuffer buffer){
	HX_STACK_FRAME("lime.media.HTML5AudioContext","getEnded",0xd0f81dd2,"lime.media.HTML5AudioContext.getEnded","lime/media/HTML5AudioContext.hx",161,0x102d35a0)
	HX_STACK_THIS(this)
	HX_STACK_ARG(buffer,"buffer")
	HX_STACK_LINE(161)
	return false;
}


HX_DEFINE_DYNAMIC_FUNC1(HTML5AudioContext_obj,getEnded,return )

Dynamic HTML5AudioContext_obj::getError( ::lime::media::AudioBuffer buffer){
	HX_STACK_FRAME("lime.media.HTML5AudioContext","getError",0xd3a7a0a0,"lime.media.HTML5AudioContext.getError","lime/media/HTML5AudioContext.hx",176,0x102d35a0)
	HX_STACK_THIS(this)
	HX_STACK_ARG(buffer,"buffer")
	HX_STACK_LINE(176)
	return null();
}


HX_DEFINE_DYNAMIC_FUNC1(HTML5AudioContext_obj,getError,return )

bool HTML5AudioContext_obj::getLoop( ::lime::media::AudioBuffer buffer){
	HX_STACK_FRAME("lime.media.HTML5AudioContext","getLoop",0x5df6348c,"lime.media.HTML5AudioContext.getLoop","lime/media/HTML5AudioContext.hx",191,0x102d35a0)
	HX_STACK_THIS(this)
	HX_STACK_ARG(buffer,"buffer")
	HX_STACK_LINE(191)
	return false;
}


HX_DEFINE_DYNAMIC_FUNC1(HTML5AudioContext_obj,getLoop,return )

bool HTML5AudioContext_obj::getMuted( ::lime::media::AudioBuffer buffer){
	HX_STACK_FRAME("lime.media.HTML5AudioContext","getMuted",0x70d96443,"lime.media.HTML5AudioContext.getMuted","lime/media/HTML5AudioContext.hx",206,0x102d35a0)
	HX_STACK_THIS(this)
	HX_STACK_ARG(buffer,"buffer")
	HX_STACK_LINE(206)
	return false;
}


HX_DEFINE_DYNAMIC_FUNC1(HTML5AudioContext_obj,getMuted,return )

int HTML5AudioContext_obj::getNetworkState( ::lime::media::AudioBuffer buffer){
	HX_STACK_FRAME("lime.media.HTML5AudioContext","getNetworkState",0xdb0360ab,"lime.media.HTML5AudioContext.getNetworkState","lime/media/HTML5AudioContext.hx",221,0x102d35a0)
	HX_STACK_THIS(this)
	HX_STACK_ARG(buffer,"buffer")
	HX_STACK_LINE(221)
	return (int)0;
}


HX_DEFINE_DYNAMIC_FUNC1(HTML5AudioContext_obj,getNetworkState,return )

bool HTML5AudioContext_obj::getPaused( ::lime::media::AudioBuffer buffer){
	HX_STACK_FRAME("lime.media.HTML5AudioContext","getPaused",0xfd20a8d6,"lime.media.HTML5AudioContext.getPaused","lime/media/HTML5AudioContext.hx",236,0x102d35a0)
	HX_STACK_THIS(this)
	HX_STACK_ARG(buffer,"buffer")
	HX_STACK_LINE(236)
	return false;
}


HX_DEFINE_DYNAMIC_FUNC1(HTML5AudioContext_obj,getPaused,return )

Float HTML5AudioContext_obj::getPlaybackRate( ::lime::media::AudioBuffer buffer){
	HX_STACK_FRAME("lime.media.HTML5AudioContext","getPlaybackRate",0x22c030c3,"lime.media.HTML5AudioContext.getPlaybackRate","lime/media/HTML5AudioContext.hx",251,0x102d35a0)
	HX_STACK_THIS(this)
	HX_STACK_ARG(buffer,"buffer")
	HX_STACK_LINE(251)
	return (int)1;
}


HX_DEFINE_DYNAMIC_FUNC1(HTML5AudioContext_obj,getPlaybackRate,return )

Dynamic HTML5AudioContext_obj::getPlayed( ::lime::media::AudioBuffer buffer){
	HX_STACK_FRAME("lime.media.HTML5AudioContext","getPlayed",0x4555537b,"lime.media.HTML5AudioContext.getPlayed","lime/media/HTML5AudioContext.hx",266,0x102d35a0)
	HX_STACK_THIS(this)
	HX_STACK_ARG(buffer,"buffer")
	HX_STACK_LINE(266)
	return null();
}


HX_DEFINE_DYNAMIC_FUNC1(HTML5AudioContext_obj,getPlayed,return )

::String HTML5AudioContext_obj::getPreload( ::lime::media::AudioBuffer buffer){
	HX_STACK_FRAME("lime.media.HTML5AudioContext","getPreload",0x108202a1,"lime.media.HTML5AudioContext.getPreload","lime/media/HTML5AudioContext.hx",281,0x102d35a0)
	HX_STACK_THIS(this)
	HX_STACK_ARG(buffer,"buffer")
	HX_STACK_LINE(281)
	return null();
}


HX_DEFINE_DYNAMIC_FUNC1(HTML5AudioContext_obj,getPreload,return )

int HTML5AudioContext_obj::getReadyState( ::lime::media::AudioBuffer buffer){
	HX_STACK_FRAME("lime.media.HTML5AudioContext","getReadyState",0xfd469ad6,"lime.media.HTML5AudioContext.getReadyState","lime/media/HTML5AudioContext.hx",296,0x102d35a0)
	HX_STACK_THIS(this)
	HX_STACK_ARG(buffer,"buffer")
	HX_STACK_LINE(296)
	return (int)0;
}


HX_DEFINE_DYNAMIC_FUNC1(HTML5AudioContext_obj,getReadyState,return )

Dynamic HTML5AudioContext_obj::getSeekable( ::lime::media::AudioBuffer buffer){
	HX_STACK_FRAME("lime.media.HTML5AudioContext","getSeekable",0x5399d13a,"lime.media.HTML5AudioContext.getSeekable","lime/media/HTML5AudioContext.hx",311,0x102d35a0)
	HX_STACK_THIS(this)
	HX_STACK_ARG(buffer,"buffer")
	HX_STACK_LINE(311)
	return null();
}


HX_DEFINE_DYNAMIC_FUNC1(HTML5AudioContext_obj,getSeekable,return )

bool HTML5AudioContext_obj::getSeeking( ::lime::media::AudioBuffer buffer){
	HX_STACK_FRAME("lime.media.HTML5AudioContext","getSeeking",0x59f0fd42,"lime.media.HTML5AudioContext.getSeeking","lime/media/HTML5AudioContext.hx",326,0x102d35a0)
	HX_STACK_THIS(this)
	HX_STACK_ARG(buffer,"buffer")
	HX_STACK_LINE(326)
	return false;
}


HX_DEFINE_DYNAMIC_FUNC1(HTML5AudioContext_obj,getSeeking,return )

::String HTML5AudioContext_obj::getSrc( ::lime::media::AudioBuffer buffer){
	HX_STACK_FRAME("lime.media.HTML5AudioContext","getSrc",0xd03a15bc,"lime.media.HTML5AudioContext.getSrc","lime/media/HTML5AudioContext.hx",341,0x102d35a0)
	HX_STACK_THIS(this)
	HX_STACK_ARG(buffer,"buffer")
	HX_STACK_LINE(341)
	return null();
}


HX_DEFINE_DYNAMIC_FUNC1(HTML5AudioContext_obj,getSrc,return )

Float HTML5AudioContext_obj::getStartTime( ::lime::media::AudioBuffer buffer){
	HX_STACK_FRAME("lime.media.HTML5AudioContext","getStartTime",0x3a756667,"lime.media.HTML5AudioContext.getStartTime","lime/media/HTML5AudioContext.hx",356,0x102d35a0)
	HX_STACK_THIS(this)
	HX_STACK_ARG(buffer,"buffer")
	HX_STACK_LINE(356)
	return (int)0;
}


HX_DEFINE_DYNAMIC_FUNC1(HTML5AudioContext_obj,getStartTime,return )

Float HTML5AudioContext_obj::getVolume( ::lime::media::AudioBuffer buffer){
	HX_STACK_FRAME("lime.media.HTML5AudioContext","getVolume",0x6cef9202,"lime.media.HTML5AudioContext.getVolume","lime/media/HTML5AudioContext.hx",371,0x102d35a0)
	HX_STACK_THIS(this)
	HX_STACK_ARG(buffer,"buffer")
	HX_STACK_LINE(371)
	return (int)1;
}


HX_DEFINE_DYNAMIC_FUNC1(HTML5AudioContext_obj,getVolume,return )

Void HTML5AudioContext_obj::load( ::lime::media::AudioBuffer buffer){
{
		HX_STACK_FRAME("lime.media.HTML5AudioContext","load",0x10622074,"lime.media.HTML5AudioContext.load","lime/media/HTML5AudioContext.hx",376,0x102d35a0)
		HX_STACK_THIS(this)
		HX_STACK_ARG(buffer,"buffer")
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(HTML5AudioContext_obj,load,(void))

Void HTML5AudioContext_obj::pause( ::lime::media::AudioBuffer buffer){
{
		HX_STACK_FRAME("lime.media.HTML5AudioContext","pause",0x89e2d4e8,"lime.media.HTML5AudioContext.pause","lime/media/HTML5AudioContext.hx",389,0x102d35a0)
		HX_STACK_THIS(this)
		HX_STACK_ARG(buffer,"buffer")
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(HTML5AudioContext_obj,pause,(void))

Void HTML5AudioContext_obj::play( ::lime::media::AudioBuffer buffer){
{
		HX_STACK_FRAME("lime.media.HTML5AudioContext","play",0x1304b442,"lime.media.HTML5AudioContext.play","lime/media/HTML5AudioContext.hx",402,0x102d35a0)
		HX_STACK_THIS(this)
		HX_STACK_ARG(buffer,"buffer")
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(HTML5AudioContext_obj,play,(void))

Void HTML5AudioContext_obj::setAutoplay( ::lime::media::AudioBuffer buffer,bool value){
{
		HX_STACK_FRAME("lime.media.HTML5AudioContext","setAutoplay",0x48b8ba17,"lime.media.HTML5AudioContext.setAutoplay","lime/media/HTML5AudioContext.hx",415,0x102d35a0)
		HX_STACK_THIS(this)
		HX_STACK_ARG(buffer,"buffer")
		HX_STACK_ARG(value,"value")
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(HTML5AudioContext_obj,setAutoplay,(void))

Void HTML5AudioContext_obj::setCurrentTime( ::lime::media::AudioBuffer buffer,Float value){
{
		HX_STACK_FRAME("lime.media.HTML5AudioContext","setCurrentTime",0xde5f9432,"lime.media.HTML5AudioContext.setCurrentTime","lime/media/HTML5AudioContext.hx",428,0x102d35a0)
		HX_STACK_THIS(this)
		HX_STACK_ARG(buffer,"buffer")
		HX_STACK_ARG(value,"value")
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(HTML5AudioContext_obj,setCurrentTime,(void))

Void HTML5AudioContext_obj::setDefaultPlaybackRate( ::lime::media::AudioBuffer buffer,Float value){
{
		HX_STACK_FRAME("lime.media.HTML5AudioContext","setDefaultPlaybackRate",0xe6671848,"lime.media.HTML5AudioContext.setDefaultPlaybackRate","lime/media/HTML5AudioContext.hx",441,0x102d35a0)
		HX_STACK_THIS(this)
		HX_STACK_ARG(buffer,"buffer")
		HX_STACK_ARG(value,"value")
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(HTML5AudioContext_obj,setDefaultPlaybackRate,(void))

Void HTML5AudioContext_obj::setLoop( ::lime::media::AudioBuffer buffer,bool value){
{
		HX_STACK_FRAME("lime.media.HTML5AudioContext","setLoop",0x50f7c598,"lime.media.HTML5AudioContext.setLoop","lime/media/HTML5AudioContext.hx",454,0x102d35a0)
		HX_STACK_THIS(this)
		HX_STACK_ARG(buffer,"buffer")
		HX_STACK_ARG(value,"value")
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(HTML5AudioContext_obj,setLoop,(void))

Void HTML5AudioContext_obj::setMuted( ::lime::media::AudioBuffer buffer,bool value){
{
		HX_STACK_FRAME("lime.media.HTML5AudioContext","setMuted",0x1f36bdb7,"lime.media.HTML5AudioContext.setMuted","lime/media/HTML5AudioContext.hx",467,0x102d35a0)
		HX_STACK_THIS(this)
		HX_STACK_ARG(buffer,"buffer")
		HX_STACK_ARG(value,"value")
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(HTML5AudioContext_obj,setMuted,(void))

Void HTML5AudioContext_obj::setPlaybackRate( ::lime::media::AudioBuffer buffer,Float value){
{
		HX_STACK_FRAME("lime.media.HTML5AudioContext","setPlaybackRate",0x1e8badcf,"lime.media.HTML5AudioContext.setPlaybackRate","lime/media/HTML5AudioContext.hx",480,0x102d35a0)
		HX_STACK_THIS(this)
		HX_STACK_ARG(buffer,"buffer")
		HX_STACK_ARG(value,"value")
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(HTML5AudioContext_obj,setPlaybackRate,(void))

Void HTML5AudioContext_obj::setPreload( ::lime::media::AudioBuffer buffer,::String value){
{
		HX_STACK_FRAME("lime.media.HTML5AudioContext","setPreload",0x13ffa115,"lime.media.HTML5AudioContext.setPreload","lime/media/HTML5AudioContext.hx",493,0x102d35a0)
		HX_STACK_THIS(this)
		HX_STACK_ARG(buffer,"buffer")
		HX_STACK_ARG(value,"value")
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(HTML5AudioContext_obj,setPreload,(void))

Void HTML5AudioContext_obj::setSrc( ::lime::media::AudioBuffer buffer,::String value){
{
		HX_STACK_FRAME("lime.media.HTML5AudioContext","setSrc",0x9c826a30,"lime.media.HTML5AudioContext.setSrc","lime/media/HTML5AudioContext.hx",506,0x102d35a0)
		HX_STACK_THIS(this)
		HX_STACK_ARG(buffer,"buffer")
		HX_STACK_ARG(value,"value")
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(HTML5AudioContext_obj,setSrc,(void))

Void HTML5AudioContext_obj::setVolume( ::lime::media::AudioBuffer buffer,Float value){
{
		HX_STACK_FRAME("lime.media.HTML5AudioContext","setVolume",0x50407e0e,"lime.media.HTML5AudioContext.setVolume","lime/media/HTML5AudioContext.hx",519,0x102d35a0)
		HX_STACK_THIS(this)
		HX_STACK_ARG(buffer,"buffer")
		HX_STACK_ARG(value,"value")
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(HTML5AudioContext_obj,setVolume,(void))


HTML5AudioContext_obj::HTML5AudioContext_obj()
{
}

Dynamic HTML5AudioContext_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"load") ) { return load_dyn(); }
		if (HX_FIELD_EQ(inName,"play") ) { return play_dyn(); }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"pause") ) { return pause_dyn(); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"getSrc") ) { return getSrc_dyn(); }
		if (HX_FIELD_EQ(inName,"setSrc") ) { return setSrc_dyn(); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"getLoop") ) { return getLoop_dyn(); }
		if (HX_FIELD_EQ(inName,"setLoop") ) { return setLoop_dyn(); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"getEnded") ) { return getEnded_dyn(); }
		if (HX_FIELD_EQ(inName,"getError") ) { return getError_dyn(); }
		if (HX_FIELD_EQ(inName,"getMuted") ) { return getMuted_dyn(); }
		if (HX_FIELD_EQ(inName,"setMuted") ) { return setMuted_dyn(); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"getPaused") ) { return getPaused_dyn(); }
		if (HX_FIELD_EQ(inName,"getPlayed") ) { return getPlayed_dyn(); }
		if (HX_FIELD_EQ(inName,"getVolume") ) { return getVolume_dyn(); }
		if (HX_FIELD_EQ(inName,"setVolume") ) { return setVolume_dyn(); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"getPreload") ) { return getPreload_dyn(); }
		if (HX_FIELD_EQ(inName,"getSeeking") ) { return getSeeking_dyn(); }
		if (HX_FIELD_EQ(inName,"setPreload") ) { return setPreload_dyn(); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"canPlayType") ) { return canPlayType_dyn(); }
		if (HX_FIELD_EQ(inName,"getAutoplay") ) { return getAutoplay_dyn(); }
		if (HX_FIELD_EQ(inName,"getBuffered") ) { return getBuffered_dyn(); }
		if (HX_FIELD_EQ(inName,"getDuration") ) { return getDuration_dyn(); }
		if (HX_FIELD_EQ(inName,"getSeekable") ) { return getSeekable_dyn(); }
		if (HX_FIELD_EQ(inName,"setAutoplay") ) { return setAutoplay_dyn(); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"HAVE_NOTHING") ) { return HAVE_NOTHING; }
		if (HX_FIELD_EQ(inName,"NETWORK_IDLE") ) { return NETWORK_IDLE; }
		if (HX_FIELD_EQ(inName,"createBuffer") ) { return createBuffer_dyn(); }
		if (HX_FIELD_EQ(inName,"getStartTime") ) { return getStartTime_dyn(); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"HAVE_METADATA") ) { return HAVE_METADATA; }
		if (HX_FIELD_EQ(inName,"NETWORK_EMPTY") ) { return NETWORK_EMPTY; }
		if (HX_FIELD_EQ(inName,"getCurrentSrc") ) { return getCurrentSrc_dyn(); }
		if (HX_FIELD_EQ(inName,"getReadyState") ) { return getReadyState_dyn(); }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"getCurrentTime") ) { return getCurrentTime_dyn(); }
		if (HX_FIELD_EQ(inName,"setCurrentTime") ) { return setCurrentTime_dyn(); }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"NETWORK_LOADING") ) { return NETWORK_LOADING; }
		if (HX_FIELD_EQ(inName,"getNetworkState") ) { return getNetworkState_dyn(); }
		if (HX_FIELD_EQ(inName,"getPlaybackRate") ) { return getPlaybackRate_dyn(); }
		if (HX_FIELD_EQ(inName,"setPlaybackRate") ) { return setPlaybackRate_dyn(); }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"HAVE_ENOUGH_DATA") ) { return HAVE_ENOUGH_DATA; }
		if (HX_FIELD_EQ(inName,"HAVE_FUTURE_DATA") ) { return HAVE_FUTURE_DATA; }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"HAVE_CURRENT_DATA") ) { return HAVE_CURRENT_DATA; }
		if (HX_FIELD_EQ(inName,"NETWORK_NO_SOURCE") ) { return NETWORK_NO_SOURCE; }
		break;
	case 22:
		if (HX_FIELD_EQ(inName,"getDefaultPlaybackRate") ) { return getDefaultPlaybackRate_dyn(); }
		if (HX_FIELD_EQ(inName,"setDefaultPlaybackRate") ) { return setDefaultPlaybackRate_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic HTML5AudioContext_obj::__SetField(const ::String &inName,const Dynamic &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 12:
		if (HX_FIELD_EQ(inName,"HAVE_NOTHING") ) { HAVE_NOTHING=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"NETWORK_IDLE") ) { NETWORK_IDLE=inValue.Cast< int >(); return inValue; }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"HAVE_METADATA") ) { HAVE_METADATA=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"NETWORK_EMPTY") ) { NETWORK_EMPTY=inValue.Cast< int >(); return inValue; }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"NETWORK_LOADING") ) { NETWORK_LOADING=inValue.Cast< int >(); return inValue; }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"HAVE_ENOUGH_DATA") ) { HAVE_ENOUGH_DATA=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"HAVE_FUTURE_DATA") ) { HAVE_FUTURE_DATA=inValue.Cast< int >(); return inValue; }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"HAVE_CURRENT_DATA") ) { HAVE_CURRENT_DATA=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"NETWORK_NO_SOURCE") ) { NETWORK_NO_SOURCE=inValue.Cast< int >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void HTML5AudioContext_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("HAVE_CURRENT_DATA","\xc7","\x06","\xef","\x83"));
	outFields->push(HX_HCSTRING("HAVE_ENOUGH_DATA","\xc2","\x82","\xd2","\x0d"));
	outFields->push(HX_HCSTRING("HAVE_FUTURE_DATA","\x4f","\x47","\xcb","\x85"));
	outFields->push(HX_HCSTRING("HAVE_METADATA","\x66","\xe7","\xbd","\x4f"));
	outFields->push(HX_HCSTRING("HAVE_NOTHING","\xd6","\x6b","\x51","\xb3"));
	outFields->push(HX_HCSTRING("NETWORK_EMPTY","\xbc","\x30","\xaa","\x1e"));
	outFields->push(HX_HCSTRING("NETWORK_IDLE","\xa5","\x2f","\x7b","\x65"));
	outFields->push(HX_HCSTRING("NETWORK_LOADING","\x6b","\xd2","\x4f","\x04"));
	outFields->push(HX_HCSTRING("NETWORK_NO_SOURCE","\x28","\x36","\x8b","\x93"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsInt,(int)offsetof(HTML5AudioContext_obj,HAVE_CURRENT_DATA),HX_HCSTRING("HAVE_CURRENT_DATA","\xc7","\x06","\xef","\x83")},
	{hx::fsInt,(int)offsetof(HTML5AudioContext_obj,HAVE_ENOUGH_DATA),HX_HCSTRING("HAVE_ENOUGH_DATA","\xc2","\x82","\xd2","\x0d")},
	{hx::fsInt,(int)offsetof(HTML5AudioContext_obj,HAVE_FUTURE_DATA),HX_HCSTRING("HAVE_FUTURE_DATA","\x4f","\x47","\xcb","\x85")},
	{hx::fsInt,(int)offsetof(HTML5AudioContext_obj,HAVE_METADATA),HX_HCSTRING("HAVE_METADATA","\x66","\xe7","\xbd","\x4f")},
	{hx::fsInt,(int)offsetof(HTML5AudioContext_obj,HAVE_NOTHING),HX_HCSTRING("HAVE_NOTHING","\xd6","\x6b","\x51","\xb3")},
	{hx::fsInt,(int)offsetof(HTML5AudioContext_obj,NETWORK_EMPTY),HX_HCSTRING("NETWORK_EMPTY","\xbc","\x30","\xaa","\x1e")},
	{hx::fsInt,(int)offsetof(HTML5AudioContext_obj,NETWORK_IDLE),HX_HCSTRING("NETWORK_IDLE","\xa5","\x2f","\x7b","\x65")},
	{hx::fsInt,(int)offsetof(HTML5AudioContext_obj,NETWORK_LOADING),HX_HCSTRING("NETWORK_LOADING","\x6b","\xd2","\x4f","\x04")},
	{hx::fsInt,(int)offsetof(HTML5AudioContext_obj,NETWORK_NO_SOURCE),HX_HCSTRING("NETWORK_NO_SOURCE","\x28","\x36","\x8b","\x93")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo *sStaticStorageInfo = 0;
#endif

static ::String sMemberFields[] = {
	HX_HCSTRING("HAVE_CURRENT_DATA","\xc7","\x06","\xef","\x83"),
	HX_HCSTRING("HAVE_ENOUGH_DATA","\xc2","\x82","\xd2","\x0d"),
	HX_HCSTRING("HAVE_FUTURE_DATA","\x4f","\x47","\xcb","\x85"),
	HX_HCSTRING("HAVE_METADATA","\x66","\xe7","\xbd","\x4f"),
	HX_HCSTRING("HAVE_NOTHING","\xd6","\x6b","\x51","\xb3"),
	HX_HCSTRING("NETWORK_EMPTY","\xbc","\x30","\xaa","\x1e"),
	HX_HCSTRING("NETWORK_IDLE","\xa5","\x2f","\x7b","\x65"),
	HX_HCSTRING("NETWORK_LOADING","\x6b","\xd2","\x4f","\x04"),
	HX_HCSTRING("NETWORK_NO_SOURCE","\x28","\x36","\x8b","\x93"),
	HX_HCSTRING("canPlayType","\xfe","\x16","\xc4","\x6c"),
	HX_HCSTRING("createBuffer","\x1c","\xfd","\xe9","\xf2"),
	HX_HCSTRING("getAutoplay","\x99","\xb3","\x9a","\x68"),
	HX_HCSTRING("getBuffered","\x15","\x18","\xf2","\xd2"),
	HX_HCSTRING("getCurrentSrc","\x61","\xc8","\xa4","\x23"),
	HX_HCSTRING("getCurrentTime","\xf0","\xf7","\x2c","\x0d"),
	HX_HCSTRING("getDefaultPlaybackRate","\x06","\x6a","\xfb","\x14"),
	HX_HCSTRING("getDuration","\x0a","\xd2","\x81","\x3a"),
	HX_HCSTRING("getEnded","\x84","\x58","\x51","\xd0"),
	HX_HCSTRING("getError","\x52","\xdb","\x00","\xd3"),
	HX_HCSTRING("getLoop","\x1a","\x56","\x3a","\x1a"),
	HX_HCSTRING("getMuted","\xf5","\x9e","\x32","\x70"),
	HX_HCSTRING("getNetworkState","\x39","\xc0","\xb8","\x9b"),
	HX_HCSTRING("getPaused","\xe4","\xc9","\xda","\x6b"),
	HX_HCSTRING("getPlaybackRate","\x51","\x90","\x75","\xe3"),
	HX_HCSTRING("getPlayed","\x89","\x74","\x0f","\xb4"),
	HX_HCSTRING("getPreload","\xd3","\xcd","\xa4","\x84"),
	HX_HCSTRING("getReadyState","\xe4","\x5a","\xc1","\x99"),
	HX_HCSTRING("getSeekable","\xc8","\xd1","\xe8","\x7d"),
	HX_HCSTRING("getSeeking","\x74","\xc8","\x13","\xce"),
	HX_HCSTRING("getSrc","\xee","\xdf","\x26","\xa3"),
	HX_HCSTRING("getStartTime","\x19","\xe2","\x46","\x15"),
	HX_HCSTRING("getVolume","\x10","\xb3","\xa9","\xdb"),
	HX_HCSTRING("load","\x26","\x9a","\xb7","\x47"),
	HX_HCSTRING("pause","\xf6","\xd6","\x57","\xbd"),
	HX_HCSTRING("play","\xf4","\x2d","\x5a","\x4a"),
	HX_HCSTRING("setAutoplay","\xa5","\xba","\x07","\x73"),
	HX_HCSTRING("setCurrentTime","\x64","\xe0","\x4c","\x2d"),
	HX_HCSTRING("setDefaultPlaybackRate","\x7a","\xe6","\xa6","\x48"),
	HX_HCSTRING("setLoop","\x26","\xe7","\x3b","\x0d"),
	HX_HCSTRING("setMuted","\x69","\xf8","\x8f","\x1e"),
	HX_HCSTRING("setPlaybackRate","\x5d","\x0d","\x41","\xdf"),
	HX_HCSTRING("setPreload","\x47","\x6c","\x22","\x88"),
	HX_HCSTRING("setSrc","\x62","\x34","\x6f","\x6f"),
	HX_HCSTRING("setVolume","\x1c","\x9f","\xfa","\xbe"),
	::String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(HTML5AudioContext_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(HTML5AudioContext_obj::__mClass,"__mClass");
};

#endif

hx::Class HTML5AudioContext_obj::__mClass;

void HTML5AudioContext_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("lime.media.HTML5AudioContext","\xe0","\x7c","\x93","\x2f");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = hx::Class_obj::dupFunctions(sMemberFields);
	__mClass->mCanCast = hx::TCanCast< HTML5AudioContext_obj >;
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
} // end namespace media
