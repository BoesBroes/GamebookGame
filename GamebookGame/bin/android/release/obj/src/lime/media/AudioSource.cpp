#include <hxcpp.h>

#ifndef INCLUDED_lime__backend_native_NativeAudioSource
#include <lime/_backend/native/NativeAudioSource.h>
#endif
#ifndef INCLUDED_lime_app__Event_Void_Void
#include <lime/app/_Event_Void_Void.h>
#endif
#ifndef INCLUDED_lime_math_Vector4
#include <lime/math/Vector4.h>
#endif
#ifndef INCLUDED_lime_media_AudioBuffer
#include <lime/media/AudioBuffer.h>
#endif
#ifndef INCLUDED_lime_media_AudioSource
#include <lime/media/AudioSource.h>
#endif
namespace lime{
namespace media{

Void AudioSource_obj::__construct(::lime::media::AudioBuffer buffer,hx::Null< int >  __o_offset,Dynamic length,hx::Null< int >  __o_loops)
{
int offset = __o_offset.Default(0);
int loops = __o_loops.Default(0);
{
	this->onComplete = ::lime::app::_Event_Void_Void_obj::__new();
	this->buffer = buffer;
	this->offset = offset;
	::lime::_backend::native::NativeAudioSource tmp = ::lime::_backend::native::NativeAudioSource_obj::__new(hx::ObjectPtr<OBJ_>(this));
	this->backend = tmp;
	bool tmp1 = (length != null());
	bool tmp2;
	if ((tmp1)){
		tmp2 = (length != (int)0);
	}
	else{
		tmp2 = false;
	}
	if ((tmp2)){
		Dynamic tmp3 = length;
		this->set_length(tmp3);
	}
	int tmp3 = loops;
	this->set_loops(tmp3);
	bool tmp4 = (buffer != null());
	if ((tmp4)){
		this->init();
	}
}
;
	return null();
}

//AudioSource_obj::~AudioSource_obj() { }

Dynamic AudioSource_obj::__CreateEmpty() { return  new AudioSource_obj; }
hx::ObjectPtr< AudioSource_obj > AudioSource_obj::__new(::lime::media::AudioBuffer buffer,hx::Null< int >  __o_offset,Dynamic length,hx::Null< int >  __o_loops)
{  hx::ObjectPtr< AudioSource_obj > _result_ = new AudioSource_obj();
	_result_->__construct(buffer,__o_offset,length,__o_loops);
	return _result_;}

Dynamic AudioSource_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< AudioSource_obj > _result_ = new AudioSource_obj();
	_result_->__construct(inArgs[0],inArgs[1],inArgs[2],inArgs[3]);
	return _result_;}

Void AudioSource_obj::dispose( ){
{
		::lime::_backend::native::NativeAudioSource tmp = this->backend;
		tmp->dispose();
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(AudioSource_obj,dispose,(void))

Void AudioSource_obj::init( ){
{
		::lime::_backend::native::NativeAudioSource tmp = this->backend;
		tmp->init();
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(AudioSource_obj,init,(void))

Void AudioSource_obj::play( ){
{
		::lime::_backend::native::NativeAudioSource tmp = this->backend;
		tmp->play();
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(AudioSource_obj,play,(void))

Void AudioSource_obj::pause( ){
{
		::lime::_backend::native::NativeAudioSource tmp = this->backend;
		tmp->pause();
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(AudioSource_obj,pause,(void))

Void AudioSource_obj::stop( ){
{
		::lime::_backend::native::NativeAudioSource tmp = this->backend;
		tmp->stop();
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(AudioSource_obj,stop,(void))

int AudioSource_obj::get_currentTime( ){
	::lime::_backend::native::NativeAudioSource tmp = this->backend;
	int tmp1 = tmp->getCurrentTime();
	return tmp1;
}


HX_DEFINE_DYNAMIC_FUNC0(AudioSource_obj,get_currentTime,return )

int AudioSource_obj::set_currentTime( int value){
	::lime::_backend::native::NativeAudioSource tmp = this->backend;
	int tmp1 = value;
	int tmp2 = tmp->setCurrentTime(tmp1);
	return tmp2;
}


HX_DEFINE_DYNAMIC_FUNC1(AudioSource_obj,set_currentTime,return )

Float AudioSource_obj::get_gain( ){
	::lime::_backend::native::NativeAudioSource tmp = this->backend;
	Float tmp1 = tmp->getGain();
	return tmp1;
}


HX_DEFINE_DYNAMIC_FUNC0(AudioSource_obj,get_gain,return )

Float AudioSource_obj::set_gain( Float value){
	::lime::_backend::native::NativeAudioSource tmp = this->backend;
	Float tmp1 = value;
	Float tmp2 = tmp->setGain(tmp1);
	return tmp2;
}


HX_DEFINE_DYNAMIC_FUNC1(AudioSource_obj,set_gain,return )

int AudioSource_obj::get_length( ){
	::lime::_backend::native::NativeAudioSource tmp = this->backend;
	int tmp1 = tmp->getLength();
	return tmp1;
}


HX_DEFINE_DYNAMIC_FUNC0(AudioSource_obj,get_length,return )

int AudioSource_obj::set_length( int value){
	::lime::_backend::native::NativeAudioSource tmp = this->backend;
	int tmp1 = value;
	int tmp2 = tmp->setLength(tmp1);
	return tmp2;
}


HX_DEFINE_DYNAMIC_FUNC1(AudioSource_obj,set_length,return )

int AudioSource_obj::get_loops( ){
	::lime::_backend::native::NativeAudioSource tmp = this->backend;
	int tmp1 = tmp->getLoops();
	return tmp1;
}


HX_DEFINE_DYNAMIC_FUNC0(AudioSource_obj,get_loops,return )

int AudioSource_obj::set_loops( int value){
	::lime::_backend::native::NativeAudioSource tmp = this->backend;
	int tmp1 = value;
	int tmp2 = tmp->setLoops(tmp1);
	return tmp2;
}


HX_DEFINE_DYNAMIC_FUNC1(AudioSource_obj,set_loops,return )

::lime::math::Vector4 AudioSource_obj::get_position( ){
	::lime::_backend::native::NativeAudioSource tmp = this->backend;
	::lime::math::Vector4 tmp1 = tmp->getPosition();
	return tmp1;
}


HX_DEFINE_DYNAMIC_FUNC0(AudioSource_obj,get_position,return )

::lime::math::Vector4 AudioSource_obj::set_position( ::lime::math::Vector4 value){
	::lime::_backend::native::NativeAudioSource tmp = this->backend;
	::lime::math::Vector4 tmp1 = value;
	::lime::math::Vector4 tmp2 = tmp->setPosition(tmp1);
	return tmp2;
}


HX_DEFINE_DYNAMIC_FUNC1(AudioSource_obj,set_position,return )


AudioSource_obj::AudioSource_obj()
{
}

void AudioSource_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(AudioSource);
	HX_MARK_MEMBER_NAME(onComplete,"onComplete");
	HX_MARK_MEMBER_NAME(buffer,"buffer");
	HX_MARK_MEMBER_NAME(offset,"offset");
	HX_MARK_MEMBER_NAME(backend,"backend");
	HX_MARK_END_CLASS();
}

void AudioSource_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(onComplete,"onComplete");
	HX_VISIT_MEMBER_NAME(buffer,"buffer");
	HX_VISIT_MEMBER_NAME(offset,"offset");
	HX_VISIT_MEMBER_NAME(backend,"backend");
}

Dynamic AudioSource_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"gain") ) { if (inCallProp == hx::paccAlways) return get_gain(); }
		if (HX_FIELD_EQ(inName,"init") ) { return init_dyn(); }
		if (HX_FIELD_EQ(inName,"play") ) { return play_dyn(); }
		if (HX_FIELD_EQ(inName,"stop") ) { return stop_dyn(); }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"loops") ) { if (inCallProp == hx::paccAlways) return get_loops(); }
		if (HX_FIELD_EQ(inName,"pause") ) { return pause_dyn(); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"buffer") ) { return buffer; }
		if (HX_FIELD_EQ(inName,"length") ) { if (inCallProp == hx::paccAlways) return get_length(); }
		if (HX_FIELD_EQ(inName,"offset") ) { return offset; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"backend") ) { return backend; }
		if (HX_FIELD_EQ(inName,"dispose") ) { return dispose_dyn(); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"position") ) { if (inCallProp == hx::paccAlways) return get_position(); }
		if (HX_FIELD_EQ(inName,"get_gain") ) { return get_gain_dyn(); }
		if (HX_FIELD_EQ(inName,"set_gain") ) { return set_gain_dyn(); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"get_loops") ) { return get_loops_dyn(); }
		if (HX_FIELD_EQ(inName,"set_loops") ) { return set_loops_dyn(); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"onComplete") ) { return onComplete; }
		if (HX_FIELD_EQ(inName,"get_length") ) { return get_length_dyn(); }
		if (HX_FIELD_EQ(inName,"set_length") ) { return set_length_dyn(); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"currentTime") ) { if (inCallProp == hx::paccAlways) return get_currentTime(); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"get_position") ) { return get_position_dyn(); }
		if (HX_FIELD_EQ(inName,"set_position") ) { return set_position_dyn(); }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"get_currentTime") ) { return get_currentTime_dyn(); }
		if (HX_FIELD_EQ(inName,"set_currentTime") ) { return set_currentTime_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic AudioSource_obj::__SetField(const ::String &inName,const Dynamic &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"gain") ) { if (inCallProp == hx::paccAlways) return set_gain(inValue); }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"loops") ) { if (inCallProp == hx::paccAlways) return set_loops(inValue); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"buffer") ) { buffer=inValue.Cast< ::lime::media::AudioBuffer >(); return inValue; }
		if (HX_FIELD_EQ(inName,"length") ) { if (inCallProp == hx::paccAlways) return set_length(inValue); }
		if (HX_FIELD_EQ(inName,"offset") ) { offset=inValue.Cast< int >(); return inValue; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"backend") ) { backend=inValue.Cast< ::lime::_backend::native::NativeAudioSource >(); return inValue; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"position") ) { if (inCallProp == hx::paccAlways) return set_position(inValue); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"onComplete") ) { onComplete=inValue.Cast< ::lime::app::_Event_Void_Void >(); return inValue; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"currentTime") ) { if (inCallProp == hx::paccAlways) return set_currentTime(inValue); }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void AudioSource_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("onComplete","\xf8","\xd4","\x7e","\x5d"));
	outFields->push(HX_HCSTRING("buffer","\x00","\xbd","\x94","\xd0"));
	outFields->push(HX_HCSTRING("currentTime","\xe6","\xa4","\x8e","\x85"));
	outFields->push(HX_HCSTRING("gain","\x7f","\xf0","\x5e","\x44"));
	outFields->push(HX_HCSTRING("length","\xe6","\x94","\x07","\x9f"));
	outFields->push(HX_HCSTRING("loops","\x8f","\xf1","\xf9","\x78"));
	outFields->push(HX_HCSTRING("offset","\x93","\x97","\x3f","\x60"));
	outFields->push(HX_HCSTRING("position","\xa9","\xa0","\xfa","\xca"));
	outFields->push(HX_HCSTRING("backend","\x14","\xbc","\x87","\xfb"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsObject /*::lime::app::_Event_Void_Void*/ ,(int)offsetof(AudioSource_obj,onComplete),HX_HCSTRING("onComplete","\xf8","\xd4","\x7e","\x5d")},
	{hx::fsObject /*::lime::media::AudioBuffer*/ ,(int)offsetof(AudioSource_obj,buffer),HX_HCSTRING("buffer","\x00","\xbd","\x94","\xd0")},
	{hx::fsInt,(int)offsetof(AudioSource_obj,offset),HX_HCSTRING("offset","\x93","\x97","\x3f","\x60")},
	{hx::fsObject /*::lime::_backend::native::NativeAudioSource*/ ,(int)offsetof(AudioSource_obj,backend),HX_HCSTRING("backend","\x14","\xbc","\x87","\xfb")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo *sStaticStorageInfo = 0;
#endif

static ::String sMemberFields[] = {
	HX_HCSTRING("onComplete","\xf8","\xd4","\x7e","\x5d"),
	HX_HCSTRING("buffer","\x00","\xbd","\x94","\xd0"),
	HX_HCSTRING("offset","\x93","\x97","\x3f","\x60"),
	HX_HCSTRING("backend","\x14","\xbc","\x87","\xfb"),
	HX_HCSTRING("dispose","\x9f","\x80","\x4c","\xbb"),
	HX_HCSTRING("init","\x10","\x3b","\xbb","\x45"),
	HX_HCSTRING("play","\xf4","\x2d","\x5a","\x4a"),
	HX_HCSTRING("pause","\xf6","\xd6","\x57","\xbd"),
	HX_HCSTRING("stop","\x02","\xf0","\x5b","\x4c"),
	HX_HCSTRING("get_currentTime","\x7d","\x5c","\x70","\x46"),
	HX_HCSTRING("set_currentTime","\x89","\xd9","\x3b","\x42"),
	HX_HCSTRING("get_gain","\x08","\xac","\x19","\xc4"),
	HX_HCSTRING("set_gain","\x7c","\x05","\x77","\x72"),
	HX_HCSTRING("get_length","\xaf","\x04","\x8f","\x8f"),
	HX_HCSTRING("set_length","\x23","\xa3","\x0c","\x93"),
	HX_HCSTRING("get_loops","\xe6","\x4d","\xa3","\xbc"),
	HX_HCSTRING("set_loops","\xf2","\x39","\xf4","\x9f"),
	HX_HCSTRING("get_position","\xb2","\x54","\x14","\x80"),
	HX_HCSTRING("set_position","\x26","\x78","\x0d","\x95"),
	::String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(AudioSource_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(AudioSource_obj::__mClass,"__mClass");
};

#endif

hx::Class AudioSource_obj::__mClass;

void AudioSource_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("lime.media.AudioSource","\x0e","\x64","\xe8","\x9b");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = hx::Class_obj::dupFunctions(sMemberFields);
	__mClass->mCanCast = hx::TCanCast< AudioSource_obj >;
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
