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
#ifndef INCLUDED_lime_media_AudioManager
#include <lime/media/AudioManager.h>
#endif
#ifndef INCLUDED_lime_media_openal_ALC
#include <lime/media/openal/ALC.h>
#endif
namespace lime{
namespace media{

Void AudioManager_obj::__construct()
{
	return null();
}

//AudioManager_obj::~AudioManager_obj() { }

Dynamic AudioManager_obj::__CreateEmpty() { return  new AudioManager_obj; }
hx::ObjectPtr< AudioManager_obj > AudioManager_obj::__new()
{  hx::ObjectPtr< AudioManager_obj > _result_ = new AudioManager_obj();
	_result_->__construct();
	return _result_;}

Dynamic AudioManager_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< AudioManager_obj > _result_ = new AudioManager_obj();
	_result_->__construct();
	return _result_;}

::lime::media::AudioContext AudioManager_obj::context;

Void AudioManager_obj::init( ::lime::media::AudioContext context){
{
		::lime::media::AudioContext tmp = ::lime::media::AudioManager_obj::context;
		bool tmp1 = (tmp == null());
		if ((tmp1)){
			bool tmp2 = (context == null());
			if ((tmp2)){
				::lime::media::ALCAudioContext tmp3 = ::lime::media::ALCAudioContext_obj::__new();
				::lime::media::ALAudioContext tmp4 = ::lime::media::ALAudioContext_obj::__new();
				::lime::media::AudioContext tmp5 = ::lime::media::AudioContext_obj::OPENAL(tmp3,tmp4);
				::lime::media::AudioManager_obj::context = tmp5;
				Dynamic tmp6 = ::lime::media::openal::ALC_obj::openDevice(null());
				Dynamic device = tmp6;
				Dynamic tmp7 = device;
				Dynamic tmp8 = ::lime::media::openal::ALC_obj::createContext(tmp7,null());
				Dynamic ctx = tmp8;
				Dynamic tmp9 = ctx;
				::lime::media::openal::ALC_obj::makeContextCurrent(tmp9);
				Dynamic tmp10 = ctx;
				::lime::media::openal::ALC_obj::processContext(tmp10);
			}
			else{
				::lime::media::AudioManager_obj::context = context;
			}
		}
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(AudioManager_obj,init,(void))

Void AudioManager_obj::resume( ){
{
		::lime::media::AudioContext tmp = ::lime::media::AudioManager_obj::context;
		bool tmp1 = (tmp != null());
		if ((tmp1)){
			{
				::lime::media::AudioContext tmp2 = ::lime::media::AudioManager_obj::context;
				::lime::media::AudioContext _g = tmp2;
				switch( (int)(_g->__Index())){
					case (int)0: {
						::lime::media::ALAudioContext tmp3 = (::lime::media::AudioContext(_g))->__Param(1);
						::lime::media::ALAudioContext al = tmp3;
						::lime::media::ALCAudioContext tmp4 = (::lime::media::AudioContext(_g))->__Param(0);
						::lime::media::ALCAudioContext alc = tmp4;
						{
							Dynamic tmp5 = alc->getCurrentContext();
							Dynamic currentContext = tmp5;
							bool tmp6 = (currentContext != null());
							if ((tmp6)){
								Dynamic tmp7 = currentContext;
								Dynamic tmp8 = alc->getContextsDevice(tmp7);
								Dynamic device = tmp8;
								Dynamic tmp9 = device;
								alc->resumeDevice(tmp9);
								Dynamic tmp10 = currentContext;
								alc->processContext(tmp10);
							}
						}
					}
					;break;
					default: {
					}
				}
			}
		}
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(AudioManager_obj,resume,(void))

Void AudioManager_obj::shutdown( ){
{
		::lime::media::AudioContext tmp = ::lime::media::AudioManager_obj::context;
		bool tmp1 = (tmp != null());
		if ((tmp1)){
			{
				::lime::media::AudioContext tmp2 = ::lime::media::AudioManager_obj::context;
				::lime::media::AudioContext _g = tmp2;
				switch( (int)(_g->__Index())){
					case (int)0: {
						::lime::media::ALAudioContext tmp3 = (::lime::media::AudioContext(_g))->__Param(1);
						::lime::media::ALAudioContext al = tmp3;
						::lime::media::ALCAudioContext tmp4 = (::lime::media::AudioContext(_g))->__Param(0);
						::lime::media::ALCAudioContext alc = tmp4;
						{
							Dynamic tmp5 = alc->getCurrentContext();
							Dynamic currentContext = tmp5;
							bool tmp6 = (currentContext != null());
							if ((tmp6)){
								Dynamic tmp7 = currentContext;
								Dynamic tmp8 = alc->getContextsDevice(tmp7);
								Dynamic device = tmp8;
								alc->makeContextCurrent(null());
								Dynamic tmp9 = currentContext;
								alc->destroyContext(tmp9);
								Dynamic tmp10 = device;
								alc->closeDevice(tmp10);
							}
						}
					}
					;break;
					default: {
					}
				}
			}
		}
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(AudioManager_obj,shutdown,(void))

Void AudioManager_obj::suspend( ){
{
		::lime::media::AudioContext tmp = ::lime::media::AudioManager_obj::context;
		bool tmp1 = (tmp != null());
		if ((tmp1)){
			{
				::lime::media::AudioContext tmp2 = ::lime::media::AudioManager_obj::context;
				::lime::media::AudioContext _g = tmp2;
				switch( (int)(_g->__Index())){
					case (int)0: {
						::lime::media::ALAudioContext tmp3 = (::lime::media::AudioContext(_g))->__Param(1);
						::lime::media::ALAudioContext al = tmp3;
						::lime::media::ALCAudioContext tmp4 = (::lime::media::AudioContext(_g))->__Param(0);
						::lime::media::ALCAudioContext alc = tmp4;
						{
							Dynamic tmp5 = alc->getCurrentContext();
							Dynamic currentContext = tmp5;
							bool tmp6 = (currentContext != null());
							if ((tmp6)){
								Dynamic tmp7 = currentContext;
								alc->suspendContext(tmp7);
								Dynamic tmp8 = currentContext;
								Dynamic tmp9 = alc->getContextsDevice(tmp8);
								Dynamic device = tmp9;
								Dynamic tmp10 = device;
								alc->pauseDevice(tmp10);
							}
						}
					}
					;break;
					default: {
					}
				}
			}
		}
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(AudioManager_obj,suspend,(void))


AudioManager_obj::AudioManager_obj()
{
}

bool AudioManager_obj::__GetStatic(const ::String &inName, Dynamic &outValue, hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"init") ) { outValue = init_dyn(); return true;  }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"resume") ) { outValue = resume_dyn(); return true;  }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"context") ) { outValue = context; return true;  }
		if (HX_FIELD_EQ(inName,"suspend") ) { outValue = suspend_dyn(); return true;  }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"shutdown") ) { outValue = shutdown_dyn(); return true;  }
	}
	return false;
}

bool AudioManager_obj::__SetStatic(const ::String &inName,Dynamic &ioValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 7:
		if (HX_FIELD_EQ(inName,"context") ) { context=ioValue.Cast< ::lime::media::AudioContext >(); return true; }
	}
	return false;
}

#if HXCPP_SCRIPTABLE
static hx::StorageInfo *sMemberStorageInfo = 0;
static hx::StaticInfo sStaticStorageInfo[] = {
	{hx::fsObject /*::lime::media::AudioContext*/ ,(void *) &AudioManager_obj::context,HX_HCSTRING("context","\xef","\x95","\x77","\x19")},
	{ hx::fsUnknown, 0, null()}
};
#endif

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(AudioManager_obj::__mClass,"__mClass");
	HX_MARK_MEMBER_NAME(AudioManager_obj::context,"context");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(AudioManager_obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(AudioManager_obj::context,"context");
};

#endif

hx::Class AudioManager_obj::__mClass;

static ::String sStaticFields[] = {
	HX_HCSTRING("context","\xef","\x95","\x77","\x19"),
	HX_HCSTRING("init","\x10","\x3b","\xbb","\x45"),
	HX_HCSTRING("resume","\xad","\x69","\x84","\x08"),
	HX_HCSTRING("shutdown","\x96","\xfc","\x0b","\x6b"),
	HX_HCSTRING("suspend","\x7c","\x2f","\x4f","\xf7"),
	::String(null()) };

void AudioManager_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("lime.media.AudioManager","\xda","\xab","\xe7","\x29");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &AudioManager_obj::__GetStatic;
	__mClass->mSetStaticField = &AudioManager_obj::__SetStatic;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(sStaticFields);
	__mClass->mMembers = hx::Class_obj::dupFunctions(0 /* sMemberFields */);
	__mClass->mCanCast = hx::TCanCast< AudioManager_obj >;
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
