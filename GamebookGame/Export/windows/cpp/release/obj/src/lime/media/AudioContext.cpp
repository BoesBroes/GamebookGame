#include <hxcpp.h>

#ifndef INCLUDED_lime_media_ALAudioContext
#include <lime/media/ALAudioContext.h>
#endif
#ifndef INCLUDED_lime_media_ALCAudioContext
#include <lime/media/ALCAudioContext.h>
#endif
#ifndef INCLUDED_lime_media_AudioContext
#include <lime/media/AudioContext.h>
#endif
#ifndef INCLUDED_lime_media_FlashAudioContext
#include <lime/media/FlashAudioContext.h>
#endif
#ifndef INCLUDED_lime_media_HTML5AudioContext
#include <lime/media/HTML5AudioContext.h>
#endif
#ifndef INCLUDED_lime_media_WebAudioContext
#include <lime/media/WebAudioContext.h>
#endif
namespace lime{
namespace media{

::lime::media::AudioContext  AudioContext_obj::CUSTOM(Dynamic data)
	{ return hx::CreateEnum< AudioContext_obj >(HX_HCSTRING("CUSTOM","\xb1","\x33","\x15","\xf2"),4,hx::DynamicArray(0,1).Add(data)); }

::lime::media::AudioContext  AudioContext_obj::FLASH(::lime::media::FlashAudioContext context)
	{ return hx::CreateEnum< AudioContext_obj >(HX_HCSTRING("FLASH","\x90","\x6d","\x7a","\x80"),3,hx::DynamicArray(0,1).Add(context)); }

::lime::media::AudioContext  AudioContext_obj::HTML5(::lime::media::HTML5AudioContext context)
	{ return hx::CreateEnum< AudioContext_obj >(HX_HCSTRING("HTML5","\x6a","\x60","\x9a","\xac"),1,hx::DynamicArray(0,1).Add(context)); }

::lime::media::AudioContext  AudioContext_obj::OPENAL(::lime::media::ALCAudioContext alc,::lime::media::ALAudioContext al)
	{ return hx::CreateEnum< AudioContext_obj >(HX_HCSTRING("OPENAL","\x35","\x0b","\x17","\xd4"),0,hx::DynamicArray(0,2).Add(alc).Add(al)); }

::lime::media::AudioContext  AudioContext_obj::WEB(::lime::media::WebAudioContext context)
	{ return hx::CreateEnum< AudioContext_obj >(HX_HCSTRING("WEB","\x74","\x40","\x42","\x00"),2,hx::DynamicArray(0,1).Add(context)); }

HX_DEFINE_CREATE_ENUM(AudioContext_obj)

int AudioContext_obj::__FindIndex(::String inName)
{
	if (inName==HX_HCSTRING("CUSTOM","\xb1","\x33","\x15","\xf2")) return 4;
	if (inName==HX_HCSTRING("FLASH","\x90","\x6d","\x7a","\x80")) return 3;
	if (inName==HX_HCSTRING("HTML5","\x6a","\x60","\x9a","\xac")) return 1;
	if (inName==HX_HCSTRING("OPENAL","\x35","\x0b","\x17","\xd4")) return 0;
	if (inName==HX_HCSTRING("WEB","\x74","\x40","\x42","\x00")) return 2;
	return super::__FindIndex(inName);
}

STATIC_HX_DEFINE_DYNAMIC_FUNC1(AudioContext_obj,CUSTOM,return)

STATIC_HX_DEFINE_DYNAMIC_FUNC1(AudioContext_obj,FLASH,return)

STATIC_HX_DEFINE_DYNAMIC_FUNC1(AudioContext_obj,HTML5,return)

STATIC_HX_DEFINE_DYNAMIC_FUNC2(AudioContext_obj,OPENAL,return)

STATIC_HX_DEFINE_DYNAMIC_FUNC1(AudioContext_obj,WEB,return)

int AudioContext_obj::__FindArgCount(::String inName)
{
	if (inName==HX_HCSTRING("CUSTOM","\xb1","\x33","\x15","\xf2")) return 1;
	if (inName==HX_HCSTRING("FLASH","\x90","\x6d","\x7a","\x80")) return 1;
	if (inName==HX_HCSTRING("HTML5","\x6a","\x60","\x9a","\xac")) return 1;
	if (inName==HX_HCSTRING("OPENAL","\x35","\x0b","\x17","\xd4")) return 2;
	if (inName==HX_HCSTRING("WEB","\x74","\x40","\x42","\x00")) return 1;
	return super::__FindArgCount(inName);
}

Dynamic AudioContext_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	if (inName==HX_HCSTRING("CUSTOM","\xb1","\x33","\x15","\xf2")) return CUSTOM_dyn();
	if (inName==HX_HCSTRING("FLASH","\x90","\x6d","\x7a","\x80")) return FLASH_dyn();
	if (inName==HX_HCSTRING("HTML5","\x6a","\x60","\x9a","\xac")) return HTML5_dyn();
	if (inName==HX_HCSTRING("OPENAL","\x35","\x0b","\x17","\xd4")) return OPENAL_dyn();
	if (inName==HX_HCSTRING("WEB","\x74","\x40","\x42","\x00")) return WEB_dyn();
	return super::__Field(inName,inCallProp);
}

static ::String sStaticFields[] = {
	HX_HCSTRING("OPENAL","\x35","\x0b","\x17","\xd4"),
	HX_HCSTRING("HTML5","\x6a","\x60","\x9a","\xac"),
	HX_HCSTRING("WEB","\x74","\x40","\x42","\x00"),
	HX_HCSTRING("FLASH","\x90","\x6d","\x7a","\x80"),
	HX_HCSTRING("CUSTOM","\xb1","\x33","\x15","\xf2"),
	::String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatic(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(AudioContext_obj::__mClass,"__mClass");
};
#endif

static ::String sMemberFields[] = { ::String(null()) };
hx::Class AudioContext_obj::__mClass;

Dynamic __Create_AudioContext_obj() { return new AudioContext_obj; }

void AudioContext_obj::__register()
{

hx::Static(__mClass) = hx::RegisterClass(HX_HCSTRING("lime.media.AudioContext","\x5c","\xaf","\x9d","\x2f"), hx::TCanCast< AudioContext_obj >,sStaticFields,sMemberFields,
	&__Create_AudioContext_obj, &__Create,
	&super::__SGetClass(), &CreateAudioContext_obj, sMarkStatics
#ifdef HXCPP_VISIT_ALLOCS
    , sVisitStatic
#endif
#ifdef HXCPP_SCRIPTABLE
    , 0
#endif
);
}

void AudioContext_obj::__boot()
{
}


} // end namespace lime
} // end namespace media
