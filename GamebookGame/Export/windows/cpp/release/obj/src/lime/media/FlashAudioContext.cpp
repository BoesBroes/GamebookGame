#include <hxcpp.h>

#ifndef INCLUDED_lime_media_AudioBuffer
#include <lime/media/AudioBuffer.h>
#endif
#ifndef INCLUDED_lime_media_FlashAudioContext
#include <lime/media/FlashAudioContext.h>
#endif
namespace lime{
namespace media{

Void FlashAudioContext_obj::__construct()
{
HX_STACK_FRAME("lime.media.FlashAudioContext","new",0x3c697ef8,"lime.media.FlashAudioContext.new","lime/media/FlashAudioContext.hx",12,0xce29ab3a)
HX_STACK_THIS(this)
{
}
;
	return null();
}

//FlashAudioContext_obj::~FlashAudioContext_obj() { }

Dynamic FlashAudioContext_obj::__CreateEmpty() { return  new FlashAudioContext_obj; }
hx::ObjectPtr< FlashAudioContext_obj > FlashAudioContext_obj::__new()
{  hx::ObjectPtr< FlashAudioContext_obj > _result_ = new FlashAudioContext_obj();
	_result_->__construct();
	return _result_;}

Dynamic FlashAudioContext_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< FlashAudioContext_obj > _result_ = new FlashAudioContext_obj();
	_result_->__construct();
	return _result_;}

::lime::media::AudioBuffer FlashAudioContext_obj::createBuffer( Dynamic stream,Dynamic context){
	HX_STACK_FRAME("lime.media.FlashAudioContext","createBuffer",0xd5e5bb84,"lime.media.FlashAudioContext.createBuffer","lime/media/FlashAudioContext.hx",26,0xce29ab3a)
	HX_STACK_THIS(this)
	HX_STACK_ARG(stream,"stream")
	HX_STACK_ARG(context,"context")
	HX_STACK_LINE(26)
	return null();
}


HX_DEFINE_DYNAMIC_FUNC2(FlashAudioContext_obj,createBuffer,return )

int FlashAudioContext_obj::getBytesLoaded( ::lime::media::AudioBuffer buffer){
	HX_STACK_FRAME("lime.media.FlashAudioContext","getBytesLoaded",0x899ee242,"lime.media.FlashAudioContext.getBytesLoaded","lime/media/FlashAudioContext.hx",42,0xce29ab3a)
	HX_STACK_THIS(this)
	HX_STACK_ARG(buffer,"buffer")
	HX_STACK_LINE(42)
	return (int)0;
}


HX_DEFINE_DYNAMIC_FUNC1(FlashAudioContext_obj,getBytesLoaded,return )

int FlashAudioContext_obj::getBytesTotal( ::lime::media::AudioBuffer buffer){
	HX_STACK_FRAME("lime.media.FlashAudioContext","getBytesTotal",0x5b979027,"lime.media.FlashAudioContext.getBytesTotal","lime/media/FlashAudioContext.hx",57,0xce29ab3a)
	HX_STACK_THIS(this)
	HX_STACK_ARG(buffer,"buffer")
	HX_STACK_LINE(57)
	return (int)0;
}


HX_DEFINE_DYNAMIC_FUNC1(FlashAudioContext_obj,getBytesTotal,return )

Dynamic FlashAudioContext_obj::getID3( ::lime::media::AudioBuffer buffer){
	HX_STACK_FRAME("lime.media.FlashAudioContext","getID3",0xc9c2a18a,"lime.media.FlashAudioContext.getID3","lime/media/FlashAudioContext.hx",72,0xce29ab3a)
	HX_STACK_THIS(this)
	HX_STACK_ARG(buffer,"buffer")
	HX_STACK_LINE(72)
	return null();
}


HX_DEFINE_DYNAMIC_FUNC1(FlashAudioContext_obj,getID3,return )

bool FlashAudioContext_obj::getIsBuffering( ::lime::media::AudioBuffer buffer){
	HX_STACK_FRAME("lime.media.FlashAudioContext","getIsBuffering",0x7fe4a20a,"lime.media.FlashAudioContext.getIsBuffering","lime/media/FlashAudioContext.hx",87,0xce29ab3a)
	HX_STACK_THIS(this)
	HX_STACK_ARG(buffer,"buffer")
	HX_STACK_LINE(87)
	return false;
}


HX_DEFINE_DYNAMIC_FUNC1(FlashAudioContext_obj,getIsBuffering,return )

bool FlashAudioContext_obj::getIsURLInaccessible( ::lime::media::AudioBuffer buffer){
	HX_STACK_FRAME("lime.media.FlashAudioContext","getIsURLInaccessible",0x2151ec92,"lime.media.FlashAudioContext.getIsURLInaccessible","lime/media/FlashAudioContext.hx",102,0xce29ab3a)
	HX_STACK_THIS(this)
	HX_STACK_ARG(buffer,"buffer")
	HX_STACK_LINE(102)
	return false;
}


HX_DEFINE_DYNAMIC_FUNC1(FlashAudioContext_obj,getIsURLInaccessible,return )

Float FlashAudioContext_obj::getLength( ::lime::media::AudioBuffer buffer){
	HX_STACK_FRAME("lime.media.FlashAudioContext","getLength",0x5ca8ceb4,"lime.media.FlashAudioContext.getLength","lime/media/FlashAudioContext.hx",117,0xce29ab3a)
	HX_STACK_THIS(this)
	HX_STACK_ARG(buffer,"buffer")
	HX_STACK_LINE(117)
	return (int)0;
}


HX_DEFINE_DYNAMIC_FUNC1(FlashAudioContext_obj,getLength,return )

::String FlashAudioContext_obj::getURL( ::lime::media::AudioBuffer buffer){
	HX_STACK_FRAME("lime.media.FlashAudioContext","getURL",0xc9cbc8e1,"lime.media.FlashAudioContext.getURL","lime/media/FlashAudioContext.hx",132,0xce29ab3a)
	HX_STACK_THIS(this)
	HX_STACK_ARG(buffer,"buffer")
	HX_STACK_LINE(132)
	return null();
}


HX_DEFINE_DYNAMIC_FUNC1(FlashAudioContext_obj,getURL,return )

Void FlashAudioContext_obj::close( ::lime::media::AudioBuffer buffer){
{
		HX_STACK_FRAME("lime.media.FlashAudioContext","close",0xf8339c50,"lime.media.FlashAudioContext.close","lime/media/FlashAudioContext.hx",137,0xce29ab3a)
		HX_STACK_THIS(this)
		HX_STACK_ARG(buffer,"buffer")
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(FlashAudioContext_obj,close,(void))

Float FlashAudioContext_obj::extract( ::lime::media::AudioBuffer buffer,Dynamic target,Float length,hx::Null< Float >  __o_startPosition){
Float startPosition = __o_startPosition.Default(-1);
	HX_STACK_FRAME("lime.media.FlashAudioContext","extract",0x21578fd9,"lime.media.FlashAudioContext.extract","lime/media/FlashAudioContext.hx",160,0xce29ab3a)
	HX_STACK_THIS(this)
	HX_STACK_ARG(buffer,"buffer")
	HX_STACK_ARG(target,"target")
	HX_STACK_ARG(length,"length")
	HX_STACK_ARG(startPosition,"startPosition")
{
		HX_STACK_LINE(160)
		return (int)0;
	}
}


HX_DEFINE_DYNAMIC_FUNC4(FlashAudioContext_obj,extract,return )

Void FlashAudioContext_obj::load( ::lime::media::AudioBuffer buffer,Dynamic stream,Dynamic context){
{
		HX_STACK_FRAME("lime.media.FlashAudioContext","load",0x9e9ab08e,"lime.media.FlashAudioContext.load","lime/media/FlashAudioContext.hx",165,0xce29ab3a)
		HX_STACK_THIS(this)
		HX_STACK_ARG(buffer,"buffer")
		HX_STACK_ARG(stream,"stream")
		HX_STACK_ARG(context,"context")
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC3(FlashAudioContext_obj,load,(void))

Void FlashAudioContext_obj::loadCompressedDataFromByteArray( ::lime::media::AudioBuffer buffer,Dynamic bytes,int bytesLength){
{
		HX_STACK_FRAME("lime.media.FlashAudioContext","loadCompressedDataFromByteArray",0xb153326e,"lime.media.FlashAudioContext.loadCompressedDataFromByteArray","lime/media/FlashAudioContext.hx",178,0xce29ab3a)
		HX_STACK_THIS(this)
		HX_STACK_ARG(buffer,"buffer")
		HX_STACK_ARG(bytes,"bytes")
		HX_STACK_ARG(bytesLength,"bytesLength")
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC3(FlashAudioContext_obj,loadCompressedDataFromByteArray,(void))

Void FlashAudioContext_obj::loadPCMFromByteArray( ::lime::media::AudioBuffer buffer,Dynamic bytes,int samples,::String format,hx::Null< bool >  __o_stereo,hx::Null< Float >  __o_sampleRate){
bool stereo = __o_stereo.Default(true);
Float sampleRate = __o_sampleRate.Default(44100);
	HX_STACK_FRAME("lime.media.FlashAudioContext","loadPCMFromByteArray",0x78e0b7db,"lime.media.FlashAudioContext.loadPCMFromByteArray","lime/media/FlashAudioContext.hx",191,0xce29ab3a)
	HX_STACK_THIS(this)
	HX_STACK_ARG(buffer,"buffer")
	HX_STACK_ARG(bytes,"bytes")
	HX_STACK_ARG(samples,"samples")
	HX_STACK_ARG(format,"format")
	HX_STACK_ARG(stereo,"stereo")
	HX_STACK_ARG(sampleRate,"sampleRate")
{
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC6(FlashAudioContext_obj,loadPCMFromByteArray,(void))

Dynamic FlashAudioContext_obj::play( ::lime::media::AudioBuffer buffer,hx::Null< Float >  __o_startTime,hx::Null< int >  __o_loops,Dynamic sndTransform){
Float startTime = __o_startTime.Default(0);
int loops = __o_loops.Default(0);
	HX_STACK_FRAME("lime.media.FlashAudioContext","play",0xa13d445c,"lime.media.FlashAudioContext.play","lime/media/FlashAudioContext.hx",214,0xce29ab3a)
	HX_STACK_THIS(this)
	HX_STACK_ARG(buffer,"buffer")
	HX_STACK_ARG(startTime,"startTime")
	HX_STACK_ARG(loops,"loops")
	HX_STACK_ARG(sndTransform,"sndTransform")
{
		HX_STACK_LINE(214)
		return null();
	}
}


HX_DEFINE_DYNAMIC_FUNC4(FlashAudioContext_obj,play,return )


FlashAudioContext_obj::FlashAudioContext_obj()
{
}

Dynamic FlashAudioContext_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"load") ) { return load_dyn(); }
		if (HX_FIELD_EQ(inName,"play") ) { return play_dyn(); }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"close") ) { return close_dyn(); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"getID3") ) { return getID3_dyn(); }
		if (HX_FIELD_EQ(inName,"getURL") ) { return getURL_dyn(); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"extract") ) { return extract_dyn(); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"getLength") ) { return getLength_dyn(); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"createBuffer") ) { return createBuffer_dyn(); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"getBytesTotal") ) { return getBytesTotal_dyn(); }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"getBytesLoaded") ) { return getBytesLoaded_dyn(); }
		if (HX_FIELD_EQ(inName,"getIsBuffering") ) { return getIsBuffering_dyn(); }
		break;
	case 20:
		if (HX_FIELD_EQ(inName,"getIsURLInaccessible") ) { return getIsURLInaccessible_dyn(); }
		if (HX_FIELD_EQ(inName,"loadPCMFromByteArray") ) { return loadPCMFromByteArray_dyn(); }
		break;
	case 31:
		if (HX_FIELD_EQ(inName,"loadCompressedDataFromByteArray") ) { return loadCompressedDataFromByteArray_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

#if HXCPP_SCRIPTABLE
static hx::StorageInfo *sMemberStorageInfo = 0;
static hx::StaticInfo *sStaticStorageInfo = 0;
#endif

static ::String sMemberFields[] = {
	HX_HCSTRING("createBuffer","\x1c","\xfd","\xe9","\xf2"),
	HX_HCSTRING("getBytesLoaded","\xda","\xb9","\x68","\x21"),
	HX_HCSTRING("getBytesTotal","\x8f","\xb3","\x4c","\xa2"),
	HX_HCSTRING("getID3","\x22","\x21","\x1f","\xa3"),
	HX_HCSTRING("getIsBuffering","\xa2","\x79","\xae","\x17"),
	HX_HCSTRING("getIsURLInaccessible","\x2a","\x86","\x55","\x6d"),
	HX_HCSTRING("getLength","\x1c","\x1e","\x5e","\x1b"),
	HX_HCSTRING("getURL","\x79","\x48","\x28","\xa3"),
	HX_HCSTRING("close","\xb8","\x17","\x63","\x48"),
	HX_HCSTRING("extract","\x41","\xb5","\xea","\x78"),
	HX_HCSTRING("load","\x26","\x9a","\xb7","\x47"),
	HX_HCSTRING("loadCompressedDataFromByteArray","\xd6","\x4f","\x5d","\xa0"),
	HX_HCSTRING("loadPCMFromByteArray","\x73","\x51","\xe4","\xc4"),
	HX_HCSTRING("play","\xf4","\x2d","\x5a","\x4a"),
	::String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(FlashAudioContext_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(FlashAudioContext_obj::__mClass,"__mClass");
};

#endif

hx::Class FlashAudioContext_obj::__mClass;

void FlashAudioContext_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("lime.media.FlashAudioContext","\x06","\xe3","\x98","\x07");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = hx::Class_obj::dupFunctions(sMemberFields);
	__mClass->mCanCast = hx::TCanCast< FlashAudioContext_obj >;
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
