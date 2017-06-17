#include <hxcpp.h>

#ifndef INCLUDED_lime_media_ALAudioContext
#include <lime/media/ALAudioContext.h>
#endif
#ifndef INCLUDED_lime_media_openal_AL
#include <lime/media/openal/AL.h>
#endif
#ifndef INCLUDED_lime_utils_ArrayBufferView
#include <lime/utils/ArrayBufferView.h>
#endif
namespace lime{
namespace media{

Void ALAudioContext_obj::__construct()
{
{
	this->EXPONENT_DISTANCE_CLAMPED = (int)53254;
	this->EXPONENT_DISTANCE = (int)53253;
	this->LINEAR_DISTANCE_CLAMPED = (int)53252;
	this->LINEAR_DISTANCE = (int)53251;
	this->INVERSE_DISTANCE_CLAMPED = (int)53250;
	this->INVERSE_DISTANCE = (int)53249;
	this->DISTANCE_MODEL = (int)53248;
	this->DOPPLER_VELOCITY = (int)49153;
	this->SPEED_OF_SOUND = (int)49155;
	this->DOPPLER_FACTOR = (int)49152;
	this->EXTENSIONS = (int)45060;
	this->RENDERER = (int)45059;
	this->VERSION = (int)45058;
	this->VENDOR = (int)45057;
	this->OUT_OF_MEMORY = (int)40965;
	this->INVALID_OPERATION = (int)40964;
	this->INVALID_VALUE = (int)40963;
	this->INVALID_ENUM = (int)40962;
	this->INVALID_NAME = (int)40961;
	this->NO_ERROR = (int)0;
	this->SIZE = (int)8196;
	this->CHANNELS = (int)8195;
	this->BITS = (int)8194;
	this->FREQUENCY = (int)8193;
	this->FORMAT_STEREO16 = (int)4355;
	this->FORMAT_STEREO8 = (int)4354;
	this->FORMAT_MONO16 = (int)4353;
	this->FORMAT_MONO8 = (int)4352;
	this->UNDETERMINED = (int)4144;
	this->STREAMING = (int)4137;
	this->STATIC = (int)4136;
	this->SOURCE_TYPE = (int)4135;
	this->BYTE_OFFSET = (int)4134;
	this->SAMPLE_OFFSET = (int)4133;
	this->SEC_OFFSET = (int)4132;
	this->MAX_DISTANCE = (int)4131;
	this->CONE_OUTER_GAIN = (int)4130;
	this->ROLLOFF_FACTOR = (int)4129;
	this->REFERENCE_DISTANCE = (int)4128;
	this->BUFFERS_PROCESSED = (int)4118;
	this->BUFFERS_QUEUED = (int)4117;
	this->STOPPED = (int)4116;
	this->PAUSED = (int)4115;
	this->PLAYING = (int)4114;
	this->INITIAL = (int)4113;
	this->SOURCE_STATE = (int)4112;
	this->ORIENTATION = (int)4111;
	this->MAX_GAIN = (int)4110;
	this->MIN_GAIN = (int)4109;
	this->GAIN = (int)4106;
	this->BUFFER = (int)4105;
	this->LOOPING = (int)4103;
	this->VELOCITY = (int)4102;
	this->DIRECTION = (int)4101;
	this->POSITION = (int)4100;
	this->PITCH = (int)4099;
	this->CONE_OUTER_ANGLE = (int)4098;
	this->CONE_INNER_ANGLE = (int)4097;
	this->SOURCE_RELATIVE = (int)514;
	this->TRUE = (int)1;
	this->FALSE = (int)0;
	this->NONE = (int)0;
}
;
	return null();
}

//ALAudioContext_obj::~ALAudioContext_obj() { }

Dynamic ALAudioContext_obj::__CreateEmpty() { return  new ALAudioContext_obj; }
hx::ObjectPtr< ALAudioContext_obj > ALAudioContext_obj::__new()
{  hx::ObjectPtr< ALAudioContext_obj > _result_ = new ALAudioContext_obj();
	_result_->__construct();
	return _result_;}

Dynamic ALAudioContext_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< ALAudioContext_obj > _result_ = new ALAudioContext_obj();
	_result_->__construct();
	return _result_;}

Void ALAudioContext_obj::bufferData( Dynamic buffer,int format,::lime::utils::ArrayBufferView data,int size,int freq){
{
		Dynamic tmp = buffer;
		int tmp1 = format;
		::lime::utils::ArrayBufferView tmp2 = data;
		int tmp3 = size;
		int tmp4 = freq;
		::lime::media::openal::AL_obj::bufferData(tmp,tmp1,tmp2,tmp3,tmp4);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC5(ALAudioContext_obj,bufferData,(void))

Void ALAudioContext_obj::buffer3f( Dynamic buffer,int param,Float value1,Float value2,Float value3){
{
		Dynamic tmp = buffer;
		int tmp1 = param;
		Float tmp2 = value1;
		Float tmp3 = value2;
		Float tmp4 = value3;
		::lime::media::openal::AL_obj::buffer3f(tmp,tmp1,tmp2,tmp3,tmp4);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC5(ALAudioContext_obj,buffer3f,(void))

Void ALAudioContext_obj::buffer3i( Dynamic buffer,int param,int value1,int value2,int value3){
{
		Dynamic tmp = buffer;
		int tmp1 = param;
		int tmp2 = value1;
		int tmp3 = value2;
		int tmp4 = value3;
		::lime::media::openal::AL_obj::buffer3i(tmp,tmp1,tmp2,tmp3,tmp4);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC5(ALAudioContext_obj,buffer3i,(void))

Void ALAudioContext_obj::bufferf( Dynamic buffer,int param,Float value){
{
		Dynamic tmp = buffer;
		int tmp1 = param;
		Float tmp2 = value;
		::lime::media::openal::AL_obj::bufferf(tmp,tmp1,tmp2);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC3(ALAudioContext_obj,bufferf,(void))

Void ALAudioContext_obj::bufferfv( Dynamic buffer,int param,Array< Float > values){
{
		Dynamic tmp = buffer;
		int tmp1 = param;
		::lime::media::openal::AL_obj::bufferfv(tmp,tmp1,values);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC3(ALAudioContext_obj,bufferfv,(void))

Void ALAudioContext_obj::bufferi( Dynamic buffer,int param,int value){
{
		Dynamic tmp = buffer;
		int tmp1 = param;
		int tmp2 = value;
		::lime::media::openal::AL_obj::bufferi(tmp,tmp1,tmp2);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC3(ALAudioContext_obj,bufferi,(void))

Void ALAudioContext_obj::bufferiv( Dynamic buffer,int param,Array< int > values){
{
		Dynamic tmp = buffer;
		int tmp1 = param;
		::lime::media::openal::AL_obj::bufferiv(tmp,tmp1,values);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC3(ALAudioContext_obj,bufferiv,(void))

Dynamic ALAudioContext_obj::createSource( ){
	Dynamic tmp = ::lime::media::openal::AL_obj::createSource();
	return tmp;
}


HX_DEFINE_DYNAMIC_FUNC0(ALAudioContext_obj,createSource,return )

Dynamic ALAudioContext_obj::createBuffer( ){
	Dynamic tmp = ::lime::media::openal::AL_obj::createBuffer();
	return tmp;
}


HX_DEFINE_DYNAMIC_FUNC0(ALAudioContext_obj,createBuffer,return )

Void ALAudioContext_obj::deleteBuffer( Dynamic buffer){
{
		Dynamic tmp = buffer;
		::lime::media::openal::AL_obj::deleteBuffer(tmp);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(ALAudioContext_obj,deleteBuffer,(void))

Void ALAudioContext_obj::deleteBuffers( cpp::ArrayBase buffers){
{
		::lime::media::openal::AL_obj::deleteBuffers(buffers);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(ALAudioContext_obj,deleteBuffers,(void))

Void ALAudioContext_obj::deleteSource( Dynamic source){
{
		Dynamic tmp = source;
		::lime::media::openal::AL_obj::deleteSource(tmp);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(ALAudioContext_obj,deleteSource,(void))

Void ALAudioContext_obj::deleteSources( cpp::ArrayBase sources){
{
		::lime::media::openal::AL_obj::deleteSources(sources);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(ALAudioContext_obj,deleteSources,(void))

Void ALAudioContext_obj::disable( int capability){
{
		int tmp = capability;
		::lime::media::openal::AL_obj::disable(tmp);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(ALAudioContext_obj,disable,(void))

Void ALAudioContext_obj::distanceModel( int distanceModel){
{
		int tmp = distanceModel;
		::lime::media::openal::AL_obj::distanceModel(tmp);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(ALAudioContext_obj,distanceModel,(void))

Void ALAudioContext_obj::dopplerFactor( Float value){
{
		Float tmp = value;
		::lime::media::openal::AL_obj::dopplerFactor(tmp);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(ALAudioContext_obj,dopplerFactor,(void))

Void ALAudioContext_obj::dopplerVelocity( Float value){
{
		Float tmp = value;
		::lime::media::openal::AL_obj::dopplerVelocity(tmp);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(ALAudioContext_obj,dopplerVelocity,(void))

Void ALAudioContext_obj::enable( int capability){
{
		int tmp = capability;
		::lime::media::openal::AL_obj::enable(tmp);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(ALAudioContext_obj,enable,(void))

Dynamic ALAudioContext_obj::genSource( ){
	Dynamic tmp = this->createSource();
	return tmp;
}


HX_DEFINE_DYNAMIC_FUNC0(ALAudioContext_obj,genSource,return )

cpp::ArrayBase ALAudioContext_obj::genSources( int n){
	int tmp = n;
	return ::lime::media::openal::AL_obj::genSources(tmp);
}


HX_DEFINE_DYNAMIC_FUNC1(ALAudioContext_obj,genSources,return )

Dynamic ALAudioContext_obj::genBuffer( ){
	Dynamic tmp = this->createBuffer();
	return tmp;
}


HX_DEFINE_DYNAMIC_FUNC0(ALAudioContext_obj,genBuffer,return )

cpp::ArrayBase ALAudioContext_obj::genBuffers( int n){
	int tmp = n;
	return ::lime::media::openal::AL_obj::genBuffers(tmp);
}


HX_DEFINE_DYNAMIC_FUNC1(ALAudioContext_obj,genBuffers,return )

bool ALAudioContext_obj::getBoolean( int param){
	int tmp = param;
	bool tmp1 = ::lime::media::openal::AL_obj::getBoolean(tmp);
	return tmp1;
}


HX_DEFINE_DYNAMIC_FUNC1(ALAudioContext_obj,getBoolean,return )

Array< bool > ALAudioContext_obj::getBooleanv( int param,hx::Null< int >  __o_count){
int count = __o_count.Default(1);
{
		int tmp = param;
		int tmp1 = count;
		return ::lime::media::openal::AL_obj::getBooleanv(tmp,tmp1);
	}
}


HX_DEFINE_DYNAMIC_FUNC2(ALAudioContext_obj,getBooleanv,return )

Array< Float > ALAudioContext_obj::getBuffer3f( Dynamic buffer,int param){
	Dynamic tmp = buffer;
	int tmp1 = param;
	return ::lime::media::openal::AL_obj::getBuffer3f(tmp,tmp1);
}


HX_DEFINE_DYNAMIC_FUNC2(ALAudioContext_obj,getBuffer3f,return )

Array< int > ALAudioContext_obj::getBuffer3i( Dynamic buffer,int param){
	Dynamic tmp = buffer;
	int tmp1 = param;
	return ::lime::media::openal::AL_obj::getBuffer3i(tmp,tmp1);
}


HX_DEFINE_DYNAMIC_FUNC2(ALAudioContext_obj,getBuffer3i,return )

Float ALAudioContext_obj::getBufferf( Dynamic buffer,int param){
	Dynamic tmp = buffer;
	int tmp1 = param;
	Float tmp2 = ::lime::media::openal::AL_obj::getBufferf(tmp,tmp1);
	return tmp2;
}


HX_DEFINE_DYNAMIC_FUNC2(ALAudioContext_obj,getBufferf,return )

Array< Float > ALAudioContext_obj::getBufferfv( Dynamic buffer,int param,hx::Null< int >  __o_count){
int count = __o_count.Default(1);
{
		Dynamic tmp = buffer;
		int tmp1 = param;
		int tmp2 = count;
		return ::lime::media::openal::AL_obj::getBufferfv(tmp,tmp1,tmp2);
	}
}


HX_DEFINE_DYNAMIC_FUNC3(ALAudioContext_obj,getBufferfv,return )

int ALAudioContext_obj::getBufferi( Dynamic buffer,int param){
	Dynamic tmp = buffer;
	int tmp1 = param;
	int tmp2 = ::lime::media::openal::AL_obj::getBufferi(tmp,tmp1);
	return tmp2;
}


HX_DEFINE_DYNAMIC_FUNC2(ALAudioContext_obj,getBufferi,return )

Array< int > ALAudioContext_obj::getBufferiv( Dynamic buffer,int param,hx::Null< int >  __o_count){
int count = __o_count.Default(1);
{
		Dynamic tmp = buffer;
		int tmp1 = param;
		int tmp2 = count;
		return ::lime::media::openal::AL_obj::getBufferiv(tmp,tmp1,tmp2);
	}
}


HX_DEFINE_DYNAMIC_FUNC3(ALAudioContext_obj,getBufferiv,return )

Float ALAudioContext_obj::getDouble( int param){
	int tmp = param;
	Float tmp1 = ::lime::media::openal::AL_obj::getDouble(tmp);
	return tmp1;
}


HX_DEFINE_DYNAMIC_FUNC1(ALAudioContext_obj,getDouble,return )

Array< Float > ALAudioContext_obj::getDoublev( int param,hx::Null< int >  __o_count){
int count = __o_count.Default(1);
{
		int tmp = param;
		int tmp1 = count;
		return ::lime::media::openal::AL_obj::getDoublev(tmp,tmp1);
	}
}


HX_DEFINE_DYNAMIC_FUNC2(ALAudioContext_obj,getDoublev,return )

int ALAudioContext_obj::getEnumValue( ::String ename){
	::String tmp = ename;
	int tmp1 = ::lime::media::openal::AL_obj::getEnumValue(tmp);
	return tmp1;
}


HX_DEFINE_DYNAMIC_FUNC1(ALAudioContext_obj,getEnumValue,return )

int ALAudioContext_obj::getError( ){
	int tmp = ::lime::media::openal::AL_obj::getError();
	return tmp;
}


HX_DEFINE_DYNAMIC_FUNC0(ALAudioContext_obj,getError,return )

::String ALAudioContext_obj::getErrorString( ){
	::String tmp = ::lime::media::openal::AL_obj::getErrorString();
	return tmp;
}


HX_DEFINE_DYNAMIC_FUNC0(ALAudioContext_obj,getErrorString,return )

Float ALAudioContext_obj::getFloat( int param){
	int tmp = param;
	Float tmp1 = ::lime::media::openal::AL_obj::getFloat(tmp);
	return tmp1;
}


HX_DEFINE_DYNAMIC_FUNC1(ALAudioContext_obj,getFloat,return )

Array< Float > ALAudioContext_obj::getFloatv( int param,hx::Null< int >  __o_count){
int count = __o_count.Default(1);
{
		int tmp = param;
		int tmp1 = count;
		return ::lime::media::openal::AL_obj::getFloatv(tmp,tmp1);
	}
}


HX_DEFINE_DYNAMIC_FUNC2(ALAudioContext_obj,getFloatv,return )

int ALAudioContext_obj::getInteger( int param){
	int tmp = param;
	int tmp1 = ::lime::media::openal::AL_obj::getInteger(tmp);
	return tmp1;
}


HX_DEFINE_DYNAMIC_FUNC1(ALAudioContext_obj,getInteger,return )

Array< int > ALAudioContext_obj::getIntegerv( int param,hx::Null< int >  __o_count){
int count = __o_count.Default(1);
{
		int tmp = param;
		int tmp1 = count;
		return ::lime::media::openal::AL_obj::getIntegerv(tmp,tmp1);
	}
}


HX_DEFINE_DYNAMIC_FUNC2(ALAudioContext_obj,getIntegerv,return )

Array< Float > ALAudioContext_obj::getListener3f( int param){
	int tmp = param;
	return ::lime::media::openal::AL_obj::getListener3f(tmp);
}


HX_DEFINE_DYNAMIC_FUNC1(ALAudioContext_obj,getListener3f,return )

Array< int > ALAudioContext_obj::getListener3i( int param){
	int tmp = param;
	return ::lime::media::openal::AL_obj::getListener3i(tmp);
}


HX_DEFINE_DYNAMIC_FUNC1(ALAudioContext_obj,getListener3i,return )

Float ALAudioContext_obj::getListenerf( int param){
	int tmp = param;
	Float tmp1 = ::lime::media::openal::AL_obj::getListenerf(tmp);
	return tmp1;
}


HX_DEFINE_DYNAMIC_FUNC1(ALAudioContext_obj,getListenerf,return )

Array< Float > ALAudioContext_obj::getListenerfv( int param,hx::Null< int >  __o_count){
int count = __o_count.Default(1);
{
		int tmp = param;
		int tmp1 = count;
		return ::lime::media::openal::AL_obj::getListenerfv(tmp,tmp1);
	}
}


HX_DEFINE_DYNAMIC_FUNC2(ALAudioContext_obj,getListenerfv,return )

int ALAudioContext_obj::getListeneri( int param){
	int tmp = param;
	int tmp1 = ::lime::media::openal::AL_obj::getListeneri(tmp);
	return tmp1;
}


HX_DEFINE_DYNAMIC_FUNC1(ALAudioContext_obj,getListeneri,return )

Array< int > ALAudioContext_obj::getListeneriv( int param,hx::Null< int >  __o_count){
int count = __o_count.Default(1);
{
		int tmp = param;
		int tmp1 = count;
		return ::lime::media::openal::AL_obj::getListeneriv(tmp,tmp1);
	}
}


HX_DEFINE_DYNAMIC_FUNC2(ALAudioContext_obj,getListeneriv,return )

Dynamic ALAudioContext_obj::getProcAddress( ::String fname){
	::String tmp = fname;
	Dynamic tmp1 = ::lime::media::openal::AL_obj::getProcAddress(tmp);
	return tmp1;
}


HX_DEFINE_DYNAMIC_FUNC1(ALAudioContext_obj,getProcAddress,return )

Array< Float > ALAudioContext_obj::getSource3f( Dynamic source,int param){
	Dynamic tmp = source;
	int tmp1 = param;
	return ::lime::media::openal::AL_obj::getSource3f(tmp,tmp1);
}


HX_DEFINE_DYNAMIC_FUNC2(ALAudioContext_obj,getSource3f,return )

Float ALAudioContext_obj::getSourcef( Dynamic source,int param){
	Dynamic tmp = source;
	int tmp1 = param;
	Float tmp2 = ::lime::media::openal::AL_obj::getSourcef(tmp,tmp1);
	return tmp2;
}


HX_DEFINE_DYNAMIC_FUNC2(ALAudioContext_obj,getSourcef,return )

Array< int > ALAudioContext_obj::getSource3i( Dynamic source,int param){
	Dynamic tmp = source;
	int tmp1 = param;
	return ::lime::media::openal::AL_obj::getSource3i(tmp,tmp1);
}


HX_DEFINE_DYNAMIC_FUNC2(ALAudioContext_obj,getSource3i,return )

Array< Float > ALAudioContext_obj::getSourcefv( Dynamic source,int param,hx::Null< int >  __o_count){
int count = __o_count.Default(1);
{
		Dynamic tmp = source;
		int tmp1 = param;
		return ::lime::media::openal::AL_obj::getSourcefv(tmp,tmp1,null());
	}
}


HX_DEFINE_DYNAMIC_FUNC3(ALAudioContext_obj,getSourcefv,return )

Dynamic ALAudioContext_obj::getSourcei( Dynamic source,int param){
	Dynamic tmp = source;
	int tmp1 = param;
	Dynamic tmp2 = ::lime::media::openal::AL_obj::getSourcei(tmp,tmp1);
	return tmp2;
}


HX_DEFINE_DYNAMIC_FUNC2(ALAudioContext_obj,getSourcei,return )

Array< int > ALAudioContext_obj::getSourceiv( Dynamic source,int param,hx::Null< int >  __o_count){
int count = __o_count.Default(1);
{
		Dynamic tmp = source;
		int tmp1 = param;
		int tmp2 = count;
		return ::lime::media::openal::AL_obj::getSourceiv(tmp,tmp1,tmp2);
	}
}


HX_DEFINE_DYNAMIC_FUNC3(ALAudioContext_obj,getSourceiv,return )

::String ALAudioContext_obj::getString( int param){
	int tmp = param;
	::String tmp1 = ::lime::media::openal::AL_obj::getString(tmp);
	return tmp1;
}


HX_DEFINE_DYNAMIC_FUNC1(ALAudioContext_obj,getString,return )

bool ALAudioContext_obj::isBuffer( Dynamic buffer){
	Dynamic tmp = buffer;
	bool tmp1 = ::lime::media::openal::AL_obj::isBuffer(tmp);
	return tmp1;
}


HX_DEFINE_DYNAMIC_FUNC1(ALAudioContext_obj,isBuffer,return )

bool ALAudioContext_obj::isEnabled( int capability){
	int tmp = capability;
	bool tmp1 = ::lime::media::openal::AL_obj::isEnabled(tmp);
	return tmp1;
}


HX_DEFINE_DYNAMIC_FUNC1(ALAudioContext_obj,isEnabled,return )

bool ALAudioContext_obj::isExtensionPresent( ::String extname){
	::String tmp = extname;
	bool tmp1 = ::lime::media::openal::AL_obj::isExtensionPresent(tmp);
	return tmp1;
}


HX_DEFINE_DYNAMIC_FUNC1(ALAudioContext_obj,isExtensionPresent,return )

bool ALAudioContext_obj::isSource( Dynamic source){
	Dynamic tmp = source;
	bool tmp1 = ::lime::media::openal::AL_obj::isSource(tmp);
	return tmp1;
}


HX_DEFINE_DYNAMIC_FUNC1(ALAudioContext_obj,isSource,return )

Void ALAudioContext_obj::listener3f( int param,Float value1,Float value2,Float value3){
{
		int tmp = param;
		Float tmp1 = value1;
		Float tmp2 = value2;
		Float tmp3 = value3;
		::lime::media::openal::AL_obj::listener3f(tmp,tmp1,tmp2,tmp3);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC4(ALAudioContext_obj,listener3f,(void))

Void ALAudioContext_obj::listener3i( int param,int value1,int value2,int value3){
{
		int tmp = param;
		int tmp1 = value1;
		int tmp2 = value2;
		int tmp3 = value3;
		::lime::media::openal::AL_obj::listener3i(tmp,tmp1,tmp2,tmp3);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC4(ALAudioContext_obj,listener3i,(void))

Void ALAudioContext_obj::listenerf( int param,Float value){
{
		int tmp = param;
		Float tmp1 = value;
		::lime::media::openal::AL_obj::listenerf(tmp,tmp1);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(ALAudioContext_obj,listenerf,(void))

Void ALAudioContext_obj::listenerfv( int param,Array< Float > values){
{
		int tmp = param;
		::lime::media::openal::AL_obj::listenerfv(tmp,values);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(ALAudioContext_obj,listenerfv,(void))

Void ALAudioContext_obj::listeneri( int param,int value){
{
		int tmp = param;
		int tmp1 = value;
		::lime::media::openal::AL_obj::listeneri(tmp,tmp1);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(ALAudioContext_obj,listeneri,(void))

Void ALAudioContext_obj::listeneriv( int param,Array< int > values){
{
		int tmp = param;
		::lime::media::openal::AL_obj::listeneriv(tmp,values);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(ALAudioContext_obj,listeneriv,(void))

Void ALAudioContext_obj::source3f( Dynamic source,int param,Float value1,Float value2,Float value3){
{
		Dynamic tmp = source;
		int tmp1 = param;
		Float tmp2 = value1;
		Float tmp3 = value2;
		Float tmp4 = value3;
		::lime::media::openal::AL_obj::source3f(tmp,tmp1,tmp2,tmp3,tmp4);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC5(ALAudioContext_obj,source3f,(void))

Void ALAudioContext_obj::source3i( Dynamic source,int param,int value1,int value2,int value3){
{
		Dynamic tmp = source;
		int tmp1 = param;
		int tmp2 = value1;
		int tmp3 = value2;
		int tmp4 = value3;
		::lime::media::openal::AL_obj::source3i(tmp,tmp1,tmp2,tmp3,tmp4);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC5(ALAudioContext_obj,source3i,(void))

Void ALAudioContext_obj::sourcef( Dynamic source,int param,Float value){
{
		Dynamic tmp = source;
		int tmp1 = param;
		Float tmp2 = value;
		::lime::media::openal::AL_obj::sourcef(tmp,tmp1,tmp2);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC3(ALAudioContext_obj,sourcef,(void))

Void ALAudioContext_obj::sourcefv( Dynamic source,int param,Array< Float > values){
{
		Dynamic tmp = source;
		int tmp1 = param;
		::lime::media::openal::AL_obj::sourcefv(tmp,tmp1,values);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC3(ALAudioContext_obj,sourcefv,(void))

Void ALAudioContext_obj::sourcei( Dynamic source,int param,Dynamic value){
{
		Dynamic tmp = source;
		int tmp1 = param;
		Dynamic tmp2 = value;
		::lime::media::openal::AL_obj::sourcei(tmp,tmp1,tmp2);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC3(ALAudioContext_obj,sourcei,(void))

Void ALAudioContext_obj::sourceiv( Dynamic source,int param,Array< int > values){
{
		Dynamic tmp = source;
		int tmp1 = param;
		::lime::media::openal::AL_obj::sourceiv(tmp,tmp1,values);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC3(ALAudioContext_obj,sourceiv,(void))

Void ALAudioContext_obj::sourcePlay( Dynamic source){
{
		Dynamic tmp = source;
		::lime::media::openal::AL_obj::sourcePlay(tmp);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(ALAudioContext_obj,sourcePlay,(void))

Void ALAudioContext_obj::sourcePlayv( cpp::ArrayBase sources){
{
		::lime::media::openal::AL_obj::sourcePlayv(sources);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(ALAudioContext_obj,sourcePlayv,(void))

Void ALAudioContext_obj::sourceStop( Dynamic source){
{
		Dynamic tmp = source;
		::lime::media::openal::AL_obj::sourceStop(tmp);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(ALAudioContext_obj,sourceStop,(void))

Void ALAudioContext_obj::sourceStopv( cpp::ArrayBase sources){
{
		::lime::media::openal::AL_obj::sourceStopv(sources);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(ALAudioContext_obj,sourceStopv,(void))

Void ALAudioContext_obj::sourceRewind( Dynamic source){
{
		Dynamic tmp = source;
		::lime::media::openal::AL_obj::sourceRewind(tmp);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(ALAudioContext_obj,sourceRewind,(void))

Void ALAudioContext_obj::sourceRewindv( cpp::ArrayBase sources){
{
		::lime::media::openal::AL_obj::sourceRewindv(sources);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(ALAudioContext_obj,sourceRewindv,(void))

Void ALAudioContext_obj::sourcePause( Dynamic source){
{
		Dynamic tmp = source;
		::lime::media::openal::AL_obj::sourcePause(tmp);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(ALAudioContext_obj,sourcePause,(void))

Void ALAudioContext_obj::sourcePausev( cpp::ArrayBase sources){
{
		::lime::media::openal::AL_obj::sourcePausev(sources);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(ALAudioContext_obj,sourcePausev,(void))

Void ALAudioContext_obj::sourceQueueBuffer( Dynamic source,Dynamic buffer){
{
		Dynamic tmp = source;
		Dynamic tmp1 = buffer;
		::lime::media::openal::AL_obj::sourceQueueBuffer(tmp,tmp1);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(ALAudioContext_obj,sourceQueueBuffer,(void))

Void ALAudioContext_obj::sourceQueueBuffers( Dynamic source,int nb,cpp::ArrayBase buffers){
{
		Dynamic tmp = source;
		int tmp1 = nb;
		::lime::media::openal::AL_obj::sourceQueueBuffers(tmp,tmp1,buffers);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC3(ALAudioContext_obj,sourceQueueBuffers,(void))

int ALAudioContext_obj::sourceUnqueueBuffer( Dynamic source){
	Dynamic tmp = source;
	Dynamic tmp1 = ::lime::media::openal::AL_obj::sourceUnqueueBuffer(tmp);
	return tmp1;
}


HX_DEFINE_DYNAMIC_FUNC1(ALAudioContext_obj,sourceUnqueueBuffer,return )

cpp::ArrayBase ALAudioContext_obj::sourceUnqueueBuffers( Dynamic source,int nb){
	Dynamic tmp = source;
	int tmp1 = nb;
	return ::lime::media::openal::AL_obj::sourceUnqueueBuffers(tmp,tmp1);
}


HX_DEFINE_DYNAMIC_FUNC2(ALAudioContext_obj,sourceUnqueueBuffers,return )

Void ALAudioContext_obj::speedOfSound( Float value){
{
		Float tmp = value;
		::lime::media::openal::AL_obj::speedOfSound(tmp);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(ALAudioContext_obj,speedOfSound,(void))


ALAudioContext_obj::ALAudioContext_obj()
{
}

Dynamic ALAudioContext_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"NONE") ) { return NONE; }
		if (HX_FIELD_EQ(inName,"TRUE") ) { return TRUE; }
		if (HX_FIELD_EQ(inName,"GAIN") ) { return GAIN; }
		if (HX_FIELD_EQ(inName,"BITS") ) { return BITS; }
		if (HX_FIELD_EQ(inName,"SIZE") ) { return SIZE; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"FALSE") ) { return FALSE; }
		if (HX_FIELD_EQ(inName,"PITCH") ) { return PITCH; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"BUFFER") ) { return BUFFER; }
		if (HX_FIELD_EQ(inName,"PAUSED") ) { return PAUSED; }
		if (HX_FIELD_EQ(inName,"STATIC") ) { return STATIC; }
		if (HX_FIELD_EQ(inName,"VENDOR") ) { return VENDOR; }
		if (HX_FIELD_EQ(inName,"enable") ) { return enable_dyn(); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"LOOPING") ) { return LOOPING; }
		if (HX_FIELD_EQ(inName,"INITIAL") ) { return INITIAL; }
		if (HX_FIELD_EQ(inName,"PLAYING") ) { return PLAYING; }
		if (HX_FIELD_EQ(inName,"STOPPED") ) { return STOPPED; }
		if (HX_FIELD_EQ(inName,"VERSION") ) { return VERSION; }
		if (HX_FIELD_EQ(inName,"bufferf") ) { return bufferf_dyn(); }
		if (HX_FIELD_EQ(inName,"bufferi") ) { return bufferi_dyn(); }
		if (HX_FIELD_EQ(inName,"disable") ) { return disable_dyn(); }
		if (HX_FIELD_EQ(inName,"sourcef") ) { return sourcef_dyn(); }
		if (HX_FIELD_EQ(inName,"sourcei") ) { return sourcei_dyn(); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"POSITION") ) { return POSITION; }
		if (HX_FIELD_EQ(inName,"VELOCITY") ) { return VELOCITY; }
		if (HX_FIELD_EQ(inName,"MIN_GAIN") ) { return MIN_GAIN; }
		if (HX_FIELD_EQ(inName,"MAX_GAIN") ) { return MAX_GAIN; }
		if (HX_FIELD_EQ(inName,"CHANNELS") ) { return CHANNELS; }
		if (HX_FIELD_EQ(inName,"NO_ERROR") ) { return NO_ERROR; }
		if (HX_FIELD_EQ(inName,"RENDERER") ) { return RENDERER; }
		if (HX_FIELD_EQ(inName,"buffer3f") ) { return buffer3f_dyn(); }
		if (HX_FIELD_EQ(inName,"buffer3i") ) { return buffer3i_dyn(); }
		if (HX_FIELD_EQ(inName,"bufferfv") ) { return bufferfv_dyn(); }
		if (HX_FIELD_EQ(inName,"bufferiv") ) { return bufferiv_dyn(); }
		if (HX_FIELD_EQ(inName,"getError") ) { return getError_dyn(); }
		if (HX_FIELD_EQ(inName,"getFloat") ) { return getFloat_dyn(); }
		if (HX_FIELD_EQ(inName,"isBuffer") ) { return isBuffer_dyn(); }
		if (HX_FIELD_EQ(inName,"isSource") ) { return isSource_dyn(); }
		if (HX_FIELD_EQ(inName,"source3f") ) { return source3f_dyn(); }
		if (HX_FIELD_EQ(inName,"source3i") ) { return source3i_dyn(); }
		if (HX_FIELD_EQ(inName,"sourcefv") ) { return sourcefv_dyn(); }
		if (HX_FIELD_EQ(inName,"sourceiv") ) { return sourceiv_dyn(); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"DIRECTION") ) { return DIRECTION; }
		if (HX_FIELD_EQ(inName,"STREAMING") ) { return STREAMING; }
		if (HX_FIELD_EQ(inName,"FREQUENCY") ) { return FREQUENCY; }
		if (HX_FIELD_EQ(inName,"genSource") ) { return genSource_dyn(); }
		if (HX_FIELD_EQ(inName,"genBuffer") ) { return genBuffer_dyn(); }
		if (HX_FIELD_EQ(inName,"getDouble") ) { return getDouble_dyn(); }
		if (HX_FIELD_EQ(inName,"getFloatv") ) { return getFloatv_dyn(); }
		if (HX_FIELD_EQ(inName,"getString") ) { return getString_dyn(); }
		if (HX_FIELD_EQ(inName,"isEnabled") ) { return isEnabled_dyn(); }
		if (HX_FIELD_EQ(inName,"listenerf") ) { return listenerf_dyn(); }
		if (HX_FIELD_EQ(inName,"listeneri") ) { return listeneri_dyn(); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"SEC_OFFSET") ) { return SEC_OFFSET; }
		if (HX_FIELD_EQ(inName,"EXTENSIONS") ) { return EXTENSIONS; }
		if (HX_FIELD_EQ(inName,"bufferData") ) { return bufferData_dyn(); }
		if (HX_FIELD_EQ(inName,"genSources") ) { return genSources_dyn(); }
		if (HX_FIELD_EQ(inName,"genBuffers") ) { return genBuffers_dyn(); }
		if (HX_FIELD_EQ(inName,"getBoolean") ) { return getBoolean_dyn(); }
		if (HX_FIELD_EQ(inName,"getBufferf") ) { return getBufferf_dyn(); }
		if (HX_FIELD_EQ(inName,"getBufferi") ) { return getBufferi_dyn(); }
		if (HX_FIELD_EQ(inName,"getDoublev") ) { return getDoublev_dyn(); }
		if (HX_FIELD_EQ(inName,"getInteger") ) { return getInteger_dyn(); }
		if (HX_FIELD_EQ(inName,"getSourcef") ) { return getSourcef_dyn(); }
		if (HX_FIELD_EQ(inName,"getSourcei") ) { return getSourcei_dyn(); }
		if (HX_FIELD_EQ(inName,"listener3f") ) { return listener3f_dyn(); }
		if (HX_FIELD_EQ(inName,"listener3i") ) { return listener3i_dyn(); }
		if (HX_FIELD_EQ(inName,"listenerfv") ) { return listenerfv_dyn(); }
		if (HX_FIELD_EQ(inName,"listeneriv") ) { return listeneriv_dyn(); }
		if (HX_FIELD_EQ(inName,"sourcePlay") ) { return sourcePlay_dyn(); }
		if (HX_FIELD_EQ(inName,"sourceStop") ) { return sourceStop_dyn(); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"ORIENTATION") ) { return ORIENTATION; }
		if (HX_FIELD_EQ(inName,"BYTE_OFFSET") ) { return BYTE_OFFSET; }
		if (HX_FIELD_EQ(inName,"SOURCE_TYPE") ) { return SOURCE_TYPE; }
		if (HX_FIELD_EQ(inName,"getBooleanv") ) { return getBooleanv_dyn(); }
		if (HX_FIELD_EQ(inName,"getBuffer3f") ) { return getBuffer3f_dyn(); }
		if (HX_FIELD_EQ(inName,"getBuffer3i") ) { return getBuffer3i_dyn(); }
		if (HX_FIELD_EQ(inName,"getBufferfv") ) { return getBufferfv_dyn(); }
		if (HX_FIELD_EQ(inName,"getBufferiv") ) { return getBufferiv_dyn(); }
		if (HX_FIELD_EQ(inName,"getIntegerv") ) { return getIntegerv_dyn(); }
		if (HX_FIELD_EQ(inName,"getSource3f") ) { return getSource3f_dyn(); }
		if (HX_FIELD_EQ(inName,"getSource3i") ) { return getSource3i_dyn(); }
		if (HX_FIELD_EQ(inName,"getSourcefv") ) { return getSourcefv_dyn(); }
		if (HX_FIELD_EQ(inName,"getSourceiv") ) { return getSourceiv_dyn(); }
		if (HX_FIELD_EQ(inName,"sourcePlayv") ) { return sourcePlayv_dyn(); }
		if (HX_FIELD_EQ(inName,"sourceStopv") ) { return sourceStopv_dyn(); }
		if (HX_FIELD_EQ(inName,"sourcePause") ) { return sourcePause_dyn(); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"SOURCE_STATE") ) { return SOURCE_STATE; }
		if (HX_FIELD_EQ(inName,"MAX_DISTANCE") ) { return MAX_DISTANCE; }
		if (HX_FIELD_EQ(inName,"UNDETERMINED") ) { return UNDETERMINED; }
		if (HX_FIELD_EQ(inName,"FORMAT_MONO8") ) { return FORMAT_MONO8; }
		if (HX_FIELD_EQ(inName,"INVALID_NAME") ) { return INVALID_NAME; }
		if (HX_FIELD_EQ(inName,"INVALID_ENUM") ) { return INVALID_ENUM; }
		if (HX_FIELD_EQ(inName,"createSource") ) { return createSource_dyn(); }
		if (HX_FIELD_EQ(inName,"createBuffer") ) { return createBuffer_dyn(); }
		if (HX_FIELD_EQ(inName,"deleteBuffer") ) { return deleteBuffer_dyn(); }
		if (HX_FIELD_EQ(inName,"deleteSource") ) { return deleteSource_dyn(); }
		if (HX_FIELD_EQ(inName,"getEnumValue") ) { return getEnumValue_dyn(); }
		if (HX_FIELD_EQ(inName,"getListenerf") ) { return getListenerf_dyn(); }
		if (HX_FIELD_EQ(inName,"getListeneri") ) { return getListeneri_dyn(); }
		if (HX_FIELD_EQ(inName,"sourceRewind") ) { return sourceRewind_dyn(); }
		if (HX_FIELD_EQ(inName,"sourcePausev") ) { return sourcePausev_dyn(); }
		if (HX_FIELD_EQ(inName,"speedOfSound") ) { return speedOfSound_dyn(); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"SAMPLE_OFFSET") ) { return SAMPLE_OFFSET; }
		if (HX_FIELD_EQ(inName,"FORMAT_MONO16") ) { return FORMAT_MONO16; }
		if (HX_FIELD_EQ(inName,"INVALID_VALUE") ) { return INVALID_VALUE; }
		if (HX_FIELD_EQ(inName,"OUT_OF_MEMORY") ) { return OUT_OF_MEMORY; }
		if (HX_FIELD_EQ(inName,"deleteBuffers") ) { return deleteBuffers_dyn(); }
		if (HX_FIELD_EQ(inName,"deleteSources") ) { return deleteSources_dyn(); }
		if (HX_FIELD_EQ(inName,"distanceModel") ) { return distanceModel_dyn(); }
		if (HX_FIELD_EQ(inName,"dopplerFactor") ) { return dopplerFactor_dyn(); }
		if (HX_FIELD_EQ(inName,"getListener3f") ) { return getListener3f_dyn(); }
		if (HX_FIELD_EQ(inName,"getListener3i") ) { return getListener3i_dyn(); }
		if (HX_FIELD_EQ(inName,"getListenerfv") ) { return getListenerfv_dyn(); }
		if (HX_FIELD_EQ(inName,"getListeneriv") ) { return getListeneriv_dyn(); }
		if (HX_FIELD_EQ(inName,"sourceRewindv") ) { return sourceRewindv_dyn(); }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"BUFFERS_QUEUED") ) { return BUFFERS_QUEUED; }
		if (HX_FIELD_EQ(inName,"ROLLOFF_FACTOR") ) { return ROLLOFF_FACTOR; }
		if (HX_FIELD_EQ(inName,"FORMAT_STEREO8") ) { return FORMAT_STEREO8; }
		if (HX_FIELD_EQ(inName,"DOPPLER_FACTOR") ) { return DOPPLER_FACTOR; }
		if (HX_FIELD_EQ(inName,"SPEED_OF_SOUND") ) { return SPEED_OF_SOUND; }
		if (HX_FIELD_EQ(inName,"DISTANCE_MODEL") ) { return DISTANCE_MODEL; }
		if (HX_FIELD_EQ(inName,"getErrorString") ) { return getErrorString_dyn(); }
		if (HX_FIELD_EQ(inName,"getProcAddress") ) { return getProcAddress_dyn(); }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"SOURCE_RELATIVE") ) { return SOURCE_RELATIVE; }
		if (HX_FIELD_EQ(inName,"CONE_OUTER_GAIN") ) { return CONE_OUTER_GAIN; }
		if (HX_FIELD_EQ(inName,"FORMAT_STEREO16") ) { return FORMAT_STEREO16; }
		if (HX_FIELD_EQ(inName,"LINEAR_DISTANCE") ) { return LINEAR_DISTANCE; }
		if (HX_FIELD_EQ(inName,"dopplerVelocity") ) { return dopplerVelocity_dyn(); }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"CONE_INNER_ANGLE") ) { return CONE_INNER_ANGLE; }
		if (HX_FIELD_EQ(inName,"CONE_OUTER_ANGLE") ) { return CONE_OUTER_ANGLE; }
		if (HX_FIELD_EQ(inName,"DOPPLER_VELOCITY") ) { return DOPPLER_VELOCITY; }
		if (HX_FIELD_EQ(inName,"INVERSE_DISTANCE") ) { return INVERSE_DISTANCE; }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"BUFFERS_PROCESSED") ) { return BUFFERS_PROCESSED; }
		if (HX_FIELD_EQ(inName,"INVALID_OPERATION") ) { return INVALID_OPERATION; }
		if (HX_FIELD_EQ(inName,"EXPONENT_DISTANCE") ) { return EXPONENT_DISTANCE; }
		if (HX_FIELD_EQ(inName,"sourceQueueBuffer") ) { return sourceQueueBuffer_dyn(); }
		break;
	case 18:
		if (HX_FIELD_EQ(inName,"REFERENCE_DISTANCE") ) { return REFERENCE_DISTANCE; }
		if (HX_FIELD_EQ(inName,"isExtensionPresent") ) { return isExtensionPresent_dyn(); }
		if (HX_FIELD_EQ(inName,"sourceQueueBuffers") ) { return sourceQueueBuffers_dyn(); }
		break;
	case 19:
		if (HX_FIELD_EQ(inName,"sourceUnqueueBuffer") ) { return sourceUnqueueBuffer_dyn(); }
		break;
	case 20:
		if (HX_FIELD_EQ(inName,"sourceUnqueueBuffers") ) { return sourceUnqueueBuffers_dyn(); }
		break;
	case 23:
		if (HX_FIELD_EQ(inName,"LINEAR_DISTANCE_CLAMPED") ) { return LINEAR_DISTANCE_CLAMPED; }
		break;
	case 24:
		if (HX_FIELD_EQ(inName,"INVERSE_DISTANCE_CLAMPED") ) { return INVERSE_DISTANCE_CLAMPED; }
		break;
	case 25:
		if (HX_FIELD_EQ(inName,"EXPONENT_DISTANCE_CLAMPED") ) { return EXPONENT_DISTANCE_CLAMPED; }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic ALAudioContext_obj::__SetField(const ::String &inName,const Dynamic &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"NONE") ) { NONE=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"TRUE") ) { TRUE=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"GAIN") ) { GAIN=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"BITS") ) { BITS=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"SIZE") ) { SIZE=inValue.Cast< int >(); return inValue; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"FALSE") ) { FALSE=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"PITCH") ) { PITCH=inValue.Cast< int >(); return inValue; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"BUFFER") ) { BUFFER=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"PAUSED") ) { PAUSED=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"STATIC") ) { STATIC=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"VENDOR") ) { VENDOR=inValue.Cast< int >(); return inValue; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"LOOPING") ) { LOOPING=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"INITIAL") ) { INITIAL=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"PLAYING") ) { PLAYING=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"STOPPED") ) { STOPPED=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"VERSION") ) { VERSION=inValue.Cast< int >(); return inValue; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"POSITION") ) { POSITION=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"VELOCITY") ) { VELOCITY=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"MIN_GAIN") ) { MIN_GAIN=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"MAX_GAIN") ) { MAX_GAIN=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"CHANNELS") ) { CHANNELS=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"NO_ERROR") ) { NO_ERROR=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"RENDERER") ) { RENDERER=inValue.Cast< int >(); return inValue; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"DIRECTION") ) { DIRECTION=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"STREAMING") ) { STREAMING=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"FREQUENCY") ) { FREQUENCY=inValue.Cast< int >(); return inValue; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"SEC_OFFSET") ) { SEC_OFFSET=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"EXTENSIONS") ) { EXTENSIONS=inValue.Cast< int >(); return inValue; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"ORIENTATION") ) { ORIENTATION=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"BYTE_OFFSET") ) { BYTE_OFFSET=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"SOURCE_TYPE") ) { SOURCE_TYPE=inValue.Cast< int >(); return inValue; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"SOURCE_STATE") ) { SOURCE_STATE=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"MAX_DISTANCE") ) { MAX_DISTANCE=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"UNDETERMINED") ) { UNDETERMINED=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"FORMAT_MONO8") ) { FORMAT_MONO8=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"INVALID_NAME") ) { INVALID_NAME=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"INVALID_ENUM") ) { INVALID_ENUM=inValue.Cast< int >(); return inValue; }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"SAMPLE_OFFSET") ) { SAMPLE_OFFSET=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"FORMAT_MONO16") ) { FORMAT_MONO16=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"INVALID_VALUE") ) { INVALID_VALUE=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"OUT_OF_MEMORY") ) { OUT_OF_MEMORY=inValue.Cast< int >(); return inValue; }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"BUFFERS_QUEUED") ) { BUFFERS_QUEUED=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"ROLLOFF_FACTOR") ) { ROLLOFF_FACTOR=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"FORMAT_STEREO8") ) { FORMAT_STEREO8=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"DOPPLER_FACTOR") ) { DOPPLER_FACTOR=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"SPEED_OF_SOUND") ) { SPEED_OF_SOUND=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"DISTANCE_MODEL") ) { DISTANCE_MODEL=inValue.Cast< int >(); return inValue; }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"SOURCE_RELATIVE") ) { SOURCE_RELATIVE=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"CONE_OUTER_GAIN") ) { CONE_OUTER_GAIN=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"FORMAT_STEREO16") ) { FORMAT_STEREO16=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"LINEAR_DISTANCE") ) { LINEAR_DISTANCE=inValue.Cast< int >(); return inValue; }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"CONE_INNER_ANGLE") ) { CONE_INNER_ANGLE=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"CONE_OUTER_ANGLE") ) { CONE_OUTER_ANGLE=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"DOPPLER_VELOCITY") ) { DOPPLER_VELOCITY=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"INVERSE_DISTANCE") ) { INVERSE_DISTANCE=inValue.Cast< int >(); return inValue; }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"BUFFERS_PROCESSED") ) { BUFFERS_PROCESSED=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"INVALID_OPERATION") ) { INVALID_OPERATION=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"EXPONENT_DISTANCE") ) { EXPONENT_DISTANCE=inValue.Cast< int >(); return inValue; }
		break;
	case 18:
		if (HX_FIELD_EQ(inName,"REFERENCE_DISTANCE") ) { REFERENCE_DISTANCE=inValue.Cast< int >(); return inValue; }
		break;
	case 23:
		if (HX_FIELD_EQ(inName,"LINEAR_DISTANCE_CLAMPED") ) { LINEAR_DISTANCE_CLAMPED=inValue.Cast< int >(); return inValue; }
		break;
	case 24:
		if (HX_FIELD_EQ(inName,"INVERSE_DISTANCE_CLAMPED") ) { INVERSE_DISTANCE_CLAMPED=inValue.Cast< int >(); return inValue; }
		break;
	case 25:
		if (HX_FIELD_EQ(inName,"EXPONENT_DISTANCE_CLAMPED") ) { EXPONENT_DISTANCE_CLAMPED=inValue.Cast< int >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void ALAudioContext_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("NONE","\xb8","\xda","\xca","\x33"));
	outFields->push(HX_HCSTRING("FALSE","\x83","\x6d","\x3d","\x79"));
	outFields->push(HX_HCSTRING("TRUE","\x4e","\x6f","\xc4","\x37"));
	outFields->push(HX_HCSTRING("SOURCE_RELATIVE","\xf0","\xf3","\x84","\xfe"));
	outFields->push(HX_HCSTRING("CONE_INNER_ANGLE","\x4e","\xa1","\xd7","\x93"));
	outFields->push(HX_HCSTRING("CONE_OUTER_ANGLE","\xf3","\xe1","\xbf","\xcc"));
	outFields->push(HX_HCSTRING("PITCH","\xa0","\xf3","\x8e","\x40"));
	outFields->push(HX_HCSTRING("POSITION","\xa9","\x30","\x80","\x24"));
	outFields->push(HX_HCSTRING("DIRECTION","\x1f","\xd2","\x98","\x0b"));
	outFields->push(HX_HCSTRING("VELOCITY","\x1d","\x92","\x83","\x78"));
	outFields->push(HX_HCSTRING("LOOPING","\xde","\x50","\x51","\xa0"));
	outFields->push(HX_HCSTRING("BUFFER","\x00","\x69","\x17","\x83"));
	outFields->push(HX_HCSTRING("GAIN","\x7f","\xb8","\x1f","\x2f"));
	outFields->push(HX_HCSTRING("MIN_GAIN","\xac","\x29","\xd2","\x21"));
	outFields->push(HX_HCSTRING("MAX_GAIN","\x5a","\x0f","\xb8","\xd4"));
	outFields->push(HX_HCSTRING("ORIENTATION","\xb0","\xfa","\x3a","\xd4"));
	outFields->push(HX_HCSTRING("SOURCE_STATE","\x4d","\xe8","\x1e","\xab"));
	outFields->push(HX_HCSTRING("INITIAL","\x64","\xe4","\x72","\x4b"));
	outFields->push(HX_HCSTRING("PLAYING","\x4e","\xe3","\xeb","\x09"));
	outFields->push(HX_HCSTRING("PAUSED","\xae","\xec","\x06","\xa2"));
	outFields->push(HX_HCSTRING("STOPPED","\xed","\xa5","\x35","\xc3"));
	outFields->push(HX_HCSTRING("BUFFERS_QUEUED","\x5f","\x78","\xce","\x71"));
	outFields->push(HX_HCSTRING("BUFFERS_PROCESSED","\x42","\x9d","\x62","\xac"));
	outFields->push(HX_HCSTRING("REFERENCE_DISTANCE","\x89","\xd5","\xce","\x9a"));
	outFields->push(HX_HCSTRING("ROLLOFF_FACTOR","\xbc","\x10","\x98","\x56"));
	outFields->push(HX_HCSTRING("CONE_OUTER_GAIN","\x3f","\xda","\x8d","\xe3"));
	outFields->push(HX_HCSTRING("MAX_DISTANCE","\x90","\x83","\xbb","\xa5"));
	outFields->push(HX_HCSTRING("SEC_OFFSET","\xe1","\x5d","\xa3","\xac"));
	outFields->push(HX_HCSTRING("SAMPLE_OFFSET","\x48","\x82","\xac","\xb4"));
	outFields->push(HX_HCSTRING("BYTE_OFFSET","\x2a","\xdf","\x43","\x36"));
	outFields->push(HX_HCSTRING("SOURCE_TYPE","\xde","\xff","\x00","\xdf"));
	outFields->push(HX_HCSTRING("STATIC","\xae","\x88","\x7e","\xb8"));
	outFields->push(HX_HCSTRING("STREAMING","\x42","\x38","\x7b","\xb1"));
	outFields->push(HX_HCSTRING("UNDETERMINED","\x0a","\xed","\x9d","\x50"));
	outFields->push(HX_HCSTRING("FORMAT_MONO8","\x6d","\x40","\x81","\x7a"));
	outFields->push(HX_HCSTRING("FORMAT_MONO16","\x10","\x19","\x97","\xb6"));
	outFields->push(HX_HCSTRING("FORMAT_STEREO8","\xb8","\x19","\x58","\xda"));
	outFields->push(HX_HCSTRING("FORMAT_STEREO16","\x65","\x61","\xbe","\x32"));
	outFields->push(HX_HCSTRING("FREQUENCY","\x7c","\xf2","\x42","\xb7"));
	outFields->push(HX_HCSTRING("BITS","\x06","\xc3","\xd7","\x2b"));
	outFields->push(HX_HCSTRING("CHANNELS","\x50","\x3a","\x74","\xc4"));
	outFields->push(HX_HCSTRING("SIZE","\xc1","\x68","\x14","\x37"));
	outFields->push(HX_HCSTRING("NO_ERROR","\xea","\xb5","\x7d","\x2f"));
	outFields->push(HX_HCSTRING("INVALID_NAME","\xf3","\x7b","\x59","\x19"));
	outFields->push(HX_HCSTRING("INVALID_ENUM","\xa9","\x74","\x70","\x13"));
	outFields->push(HX_HCSTRING("INVALID_VALUE","\xa9","\xe8","\x26","\xb0"));
	outFields->push(HX_HCSTRING("INVALID_OPERATION","\x5f","\xb1","\xc8","\x29"));
	outFields->push(HX_HCSTRING("OUT_OF_MEMORY","\x18","\xf2","\x97","\xe1"));
	outFields->push(HX_HCSTRING("VENDOR","\x88","\x91","\x19","\x51"));
	outFields->push(HX_HCSTRING("VERSION","\xf8","\xba","\xc5","\xfc"));
	outFields->push(HX_HCSTRING("RENDERER","\x43","\x55","\x61","\x0c"));
	outFields->push(HX_HCSTRING("EXTENSIONS","\x14","\xf0","\x79","\x7b"));
	outFields->push(HX_HCSTRING("DOPPLER_FACTOR","\xe0","\x6d","\x21","\x56"));
	outFields->push(HX_HCSTRING("SPEED_OF_SOUND","\x5f","\x3f","\x54","\xba"));
	outFields->push(HX_HCSTRING("DOPPLER_VELOCITY","\x6e","\xe1","\x7d","\x1d"));
	outFields->push(HX_HCSTRING("DISTANCE_MODEL","\xbf","\x9b","\x1a","\x00"));
	outFields->push(HX_HCSTRING("INVERSE_DISTANCE","\x04","\x89","\x17","\x1d"));
	outFields->push(HX_HCSTRING("INVERSE_DISTANCE_CLAMPED","\x7f","\x1a","\x32","\x28"));
	outFields->push(HX_HCSTRING("LINEAR_DISTANCE","\x0f","\xb8","\xc7","\x14"));
	outFields->push(HX_HCSTRING("LINEAR_DISTANCE_CLAMPED","\x8a","\xcc","\x88","\xb2"));
	outFields->push(HX_HCSTRING("EXPONENT_DISTANCE","\x45","\x4a","\xec","\xc8"));
	outFields->push(HX_HCSTRING("EXPONENT_DISTANCE_CLAMPED","\xc0","\x84","\x7b","\x57"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsInt,(int)offsetof(ALAudioContext_obj,NONE),HX_HCSTRING("NONE","\xb8","\xda","\xca","\x33")},
	{hx::fsInt,(int)offsetof(ALAudioContext_obj,FALSE),HX_HCSTRING("FALSE","\x83","\x6d","\x3d","\x79")},
	{hx::fsInt,(int)offsetof(ALAudioContext_obj,TRUE),HX_HCSTRING("TRUE","\x4e","\x6f","\xc4","\x37")},
	{hx::fsInt,(int)offsetof(ALAudioContext_obj,SOURCE_RELATIVE),HX_HCSTRING("SOURCE_RELATIVE","\xf0","\xf3","\x84","\xfe")},
	{hx::fsInt,(int)offsetof(ALAudioContext_obj,CONE_INNER_ANGLE),HX_HCSTRING("CONE_INNER_ANGLE","\x4e","\xa1","\xd7","\x93")},
	{hx::fsInt,(int)offsetof(ALAudioContext_obj,CONE_OUTER_ANGLE),HX_HCSTRING("CONE_OUTER_ANGLE","\xf3","\xe1","\xbf","\xcc")},
	{hx::fsInt,(int)offsetof(ALAudioContext_obj,PITCH),HX_HCSTRING("PITCH","\xa0","\xf3","\x8e","\x40")},
	{hx::fsInt,(int)offsetof(ALAudioContext_obj,POSITION),HX_HCSTRING("POSITION","\xa9","\x30","\x80","\x24")},
	{hx::fsInt,(int)offsetof(ALAudioContext_obj,DIRECTION),HX_HCSTRING("DIRECTION","\x1f","\xd2","\x98","\x0b")},
	{hx::fsInt,(int)offsetof(ALAudioContext_obj,VELOCITY),HX_HCSTRING("VELOCITY","\x1d","\x92","\x83","\x78")},
	{hx::fsInt,(int)offsetof(ALAudioContext_obj,LOOPING),HX_HCSTRING("LOOPING","\xde","\x50","\x51","\xa0")},
	{hx::fsInt,(int)offsetof(ALAudioContext_obj,BUFFER),HX_HCSTRING("BUFFER","\x00","\x69","\x17","\x83")},
	{hx::fsInt,(int)offsetof(ALAudioContext_obj,GAIN),HX_HCSTRING("GAIN","\x7f","\xb8","\x1f","\x2f")},
	{hx::fsInt,(int)offsetof(ALAudioContext_obj,MIN_GAIN),HX_HCSTRING("MIN_GAIN","\xac","\x29","\xd2","\x21")},
	{hx::fsInt,(int)offsetof(ALAudioContext_obj,MAX_GAIN),HX_HCSTRING("MAX_GAIN","\x5a","\x0f","\xb8","\xd4")},
	{hx::fsInt,(int)offsetof(ALAudioContext_obj,ORIENTATION),HX_HCSTRING("ORIENTATION","\xb0","\xfa","\x3a","\xd4")},
	{hx::fsInt,(int)offsetof(ALAudioContext_obj,SOURCE_STATE),HX_HCSTRING("SOURCE_STATE","\x4d","\xe8","\x1e","\xab")},
	{hx::fsInt,(int)offsetof(ALAudioContext_obj,INITIAL),HX_HCSTRING("INITIAL","\x64","\xe4","\x72","\x4b")},
	{hx::fsInt,(int)offsetof(ALAudioContext_obj,PLAYING),HX_HCSTRING("PLAYING","\x4e","\xe3","\xeb","\x09")},
	{hx::fsInt,(int)offsetof(ALAudioContext_obj,PAUSED),HX_HCSTRING("PAUSED","\xae","\xec","\x06","\xa2")},
	{hx::fsInt,(int)offsetof(ALAudioContext_obj,STOPPED),HX_HCSTRING("STOPPED","\xed","\xa5","\x35","\xc3")},
	{hx::fsInt,(int)offsetof(ALAudioContext_obj,BUFFERS_QUEUED),HX_HCSTRING("BUFFERS_QUEUED","\x5f","\x78","\xce","\x71")},
	{hx::fsInt,(int)offsetof(ALAudioContext_obj,BUFFERS_PROCESSED),HX_HCSTRING("BUFFERS_PROCESSED","\x42","\x9d","\x62","\xac")},
	{hx::fsInt,(int)offsetof(ALAudioContext_obj,REFERENCE_DISTANCE),HX_HCSTRING("REFERENCE_DISTANCE","\x89","\xd5","\xce","\x9a")},
	{hx::fsInt,(int)offsetof(ALAudioContext_obj,ROLLOFF_FACTOR),HX_HCSTRING("ROLLOFF_FACTOR","\xbc","\x10","\x98","\x56")},
	{hx::fsInt,(int)offsetof(ALAudioContext_obj,CONE_OUTER_GAIN),HX_HCSTRING("CONE_OUTER_GAIN","\x3f","\xda","\x8d","\xe3")},
	{hx::fsInt,(int)offsetof(ALAudioContext_obj,MAX_DISTANCE),HX_HCSTRING("MAX_DISTANCE","\x90","\x83","\xbb","\xa5")},
	{hx::fsInt,(int)offsetof(ALAudioContext_obj,SEC_OFFSET),HX_HCSTRING("SEC_OFFSET","\xe1","\x5d","\xa3","\xac")},
	{hx::fsInt,(int)offsetof(ALAudioContext_obj,SAMPLE_OFFSET),HX_HCSTRING("SAMPLE_OFFSET","\x48","\x82","\xac","\xb4")},
	{hx::fsInt,(int)offsetof(ALAudioContext_obj,BYTE_OFFSET),HX_HCSTRING("BYTE_OFFSET","\x2a","\xdf","\x43","\x36")},
	{hx::fsInt,(int)offsetof(ALAudioContext_obj,SOURCE_TYPE),HX_HCSTRING("SOURCE_TYPE","\xde","\xff","\x00","\xdf")},
	{hx::fsInt,(int)offsetof(ALAudioContext_obj,STATIC),HX_HCSTRING("STATIC","\xae","\x88","\x7e","\xb8")},
	{hx::fsInt,(int)offsetof(ALAudioContext_obj,STREAMING),HX_HCSTRING("STREAMING","\x42","\x38","\x7b","\xb1")},
	{hx::fsInt,(int)offsetof(ALAudioContext_obj,UNDETERMINED),HX_HCSTRING("UNDETERMINED","\x0a","\xed","\x9d","\x50")},
	{hx::fsInt,(int)offsetof(ALAudioContext_obj,FORMAT_MONO8),HX_HCSTRING("FORMAT_MONO8","\x6d","\x40","\x81","\x7a")},
	{hx::fsInt,(int)offsetof(ALAudioContext_obj,FORMAT_MONO16),HX_HCSTRING("FORMAT_MONO16","\x10","\x19","\x97","\xb6")},
	{hx::fsInt,(int)offsetof(ALAudioContext_obj,FORMAT_STEREO8),HX_HCSTRING("FORMAT_STEREO8","\xb8","\x19","\x58","\xda")},
	{hx::fsInt,(int)offsetof(ALAudioContext_obj,FORMAT_STEREO16),HX_HCSTRING("FORMAT_STEREO16","\x65","\x61","\xbe","\x32")},
	{hx::fsInt,(int)offsetof(ALAudioContext_obj,FREQUENCY),HX_HCSTRING("FREQUENCY","\x7c","\xf2","\x42","\xb7")},
	{hx::fsInt,(int)offsetof(ALAudioContext_obj,BITS),HX_HCSTRING("BITS","\x06","\xc3","\xd7","\x2b")},
	{hx::fsInt,(int)offsetof(ALAudioContext_obj,CHANNELS),HX_HCSTRING("CHANNELS","\x50","\x3a","\x74","\xc4")},
	{hx::fsInt,(int)offsetof(ALAudioContext_obj,SIZE),HX_HCSTRING("SIZE","\xc1","\x68","\x14","\x37")},
	{hx::fsInt,(int)offsetof(ALAudioContext_obj,NO_ERROR),HX_HCSTRING("NO_ERROR","\xea","\xb5","\x7d","\x2f")},
	{hx::fsInt,(int)offsetof(ALAudioContext_obj,INVALID_NAME),HX_HCSTRING("INVALID_NAME","\xf3","\x7b","\x59","\x19")},
	{hx::fsInt,(int)offsetof(ALAudioContext_obj,INVALID_ENUM),HX_HCSTRING("INVALID_ENUM","\xa9","\x74","\x70","\x13")},
	{hx::fsInt,(int)offsetof(ALAudioContext_obj,INVALID_VALUE),HX_HCSTRING("INVALID_VALUE","\xa9","\xe8","\x26","\xb0")},
	{hx::fsInt,(int)offsetof(ALAudioContext_obj,INVALID_OPERATION),HX_HCSTRING("INVALID_OPERATION","\x5f","\xb1","\xc8","\x29")},
	{hx::fsInt,(int)offsetof(ALAudioContext_obj,OUT_OF_MEMORY),HX_HCSTRING("OUT_OF_MEMORY","\x18","\xf2","\x97","\xe1")},
	{hx::fsInt,(int)offsetof(ALAudioContext_obj,VENDOR),HX_HCSTRING("VENDOR","\x88","\x91","\x19","\x51")},
	{hx::fsInt,(int)offsetof(ALAudioContext_obj,VERSION),HX_HCSTRING("VERSION","\xf8","\xba","\xc5","\xfc")},
	{hx::fsInt,(int)offsetof(ALAudioContext_obj,RENDERER),HX_HCSTRING("RENDERER","\x43","\x55","\x61","\x0c")},
	{hx::fsInt,(int)offsetof(ALAudioContext_obj,EXTENSIONS),HX_HCSTRING("EXTENSIONS","\x14","\xf0","\x79","\x7b")},
	{hx::fsInt,(int)offsetof(ALAudioContext_obj,DOPPLER_FACTOR),HX_HCSTRING("DOPPLER_FACTOR","\xe0","\x6d","\x21","\x56")},
	{hx::fsInt,(int)offsetof(ALAudioContext_obj,SPEED_OF_SOUND),HX_HCSTRING("SPEED_OF_SOUND","\x5f","\x3f","\x54","\xba")},
	{hx::fsInt,(int)offsetof(ALAudioContext_obj,DOPPLER_VELOCITY),HX_HCSTRING("DOPPLER_VELOCITY","\x6e","\xe1","\x7d","\x1d")},
	{hx::fsInt,(int)offsetof(ALAudioContext_obj,DISTANCE_MODEL),HX_HCSTRING("DISTANCE_MODEL","\xbf","\x9b","\x1a","\x00")},
	{hx::fsInt,(int)offsetof(ALAudioContext_obj,INVERSE_DISTANCE),HX_HCSTRING("INVERSE_DISTANCE","\x04","\x89","\x17","\x1d")},
	{hx::fsInt,(int)offsetof(ALAudioContext_obj,INVERSE_DISTANCE_CLAMPED),HX_HCSTRING("INVERSE_DISTANCE_CLAMPED","\x7f","\x1a","\x32","\x28")},
	{hx::fsInt,(int)offsetof(ALAudioContext_obj,LINEAR_DISTANCE),HX_HCSTRING("LINEAR_DISTANCE","\x0f","\xb8","\xc7","\x14")},
	{hx::fsInt,(int)offsetof(ALAudioContext_obj,LINEAR_DISTANCE_CLAMPED),HX_HCSTRING("LINEAR_DISTANCE_CLAMPED","\x8a","\xcc","\x88","\xb2")},
	{hx::fsInt,(int)offsetof(ALAudioContext_obj,EXPONENT_DISTANCE),HX_HCSTRING("EXPONENT_DISTANCE","\x45","\x4a","\xec","\xc8")},
	{hx::fsInt,(int)offsetof(ALAudioContext_obj,EXPONENT_DISTANCE_CLAMPED),HX_HCSTRING("EXPONENT_DISTANCE_CLAMPED","\xc0","\x84","\x7b","\x57")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo *sStaticStorageInfo = 0;
#endif

static ::String sMemberFields[] = {
	HX_HCSTRING("NONE","\xb8","\xda","\xca","\x33"),
	HX_HCSTRING("FALSE","\x83","\x6d","\x3d","\x79"),
	HX_HCSTRING("TRUE","\x4e","\x6f","\xc4","\x37"),
	HX_HCSTRING("SOURCE_RELATIVE","\xf0","\xf3","\x84","\xfe"),
	HX_HCSTRING("CONE_INNER_ANGLE","\x4e","\xa1","\xd7","\x93"),
	HX_HCSTRING("CONE_OUTER_ANGLE","\xf3","\xe1","\xbf","\xcc"),
	HX_HCSTRING("PITCH","\xa0","\xf3","\x8e","\x40"),
	HX_HCSTRING("POSITION","\xa9","\x30","\x80","\x24"),
	HX_HCSTRING("DIRECTION","\x1f","\xd2","\x98","\x0b"),
	HX_HCSTRING("VELOCITY","\x1d","\x92","\x83","\x78"),
	HX_HCSTRING("LOOPING","\xde","\x50","\x51","\xa0"),
	HX_HCSTRING("BUFFER","\x00","\x69","\x17","\x83"),
	HX_HCSTRING("GAIN","\x7f","\xb8","\x1f","\x2f"),
	HX_HCSTRING("MIN_GAIN","\xac","\x29","\xd2","\x21"),
	HX_HCSTRING("MAX_GAIN","\x5a","\x0f","\xb8","\xd4"),
	HX_HCSTRING("ORIENTATION","\xb0","\xfa","\x3a","\xd4"),
	HX_HCSTRING("SOURCE_STATE","\x4d","\xe8","\x1e","\xab"),
	HX_HCSTRING("INITIAL","\x64","\xe4","\x72","\x4b"),
	HX_HCSTRING("PLAYING","\x4e","\xe3","\xeb","\x09"),
	HX_HCSTRING("PAUSED","\xae","\xec","\x06","\xa2"),
	HX_HCSTRING("STOPPED","\xed","\xa5","\x35","\xc3"),
	HX_HCSTRING("BUFFERS_QUEUED","\x5f","\x78","\xce","\x71"),
	HX_HCSTRING("BUFFERS_PROCESSED","\x42","\x9d","\x62","\xac"),
	HX_HCSTRING("REFERENCE_DISTANCE","\x89","\xd5","\xce","\x9a"),
	HX_HCSTRING("ROLLOFF_FACTOR","\xbc","\x10","\x98","\x56"),
	HX_HCSTRING("CONE_OUTER_GAIN","\x3f","\xda","\x8d","\xe3"),
	HX_HCSTRING("MAX_DISTANCE","\x90","\x83","\xbb","\xa5"),
	HX_HCSTRING("SEC_OFFSET","\xe1","\x5d","\xa3","\xac"),
	HX_HCSTRING("SAMPLE_OFFSET","\x48","\x82","\xac","\xb4"),
	HX_HCSTRING("BYTE_OFFSET","\x2a","\xdf","\x43","\x36"),
	HX_HCSTRING("SOURCE_TYPE","\xde","\xff","\x00","\xdf"),
	HX_HCSTRING("STATIC","\xae","\x88","\x7e","\xb8"),
	HX_HCSTRING("STREAMING","\x42","\x38","\x7b","\xb1"),
	HX_HCSTRING("UNDETERMINED","\x0a","\xed","\x9d","\x50"),
	HX_HCSTRING("FORMAT_MONO8","\x6d","\x40","\x81","\x7a"),
	HX_HCSTRING("FORMAT_MONO16","\x10","\x19","\x97","\xb6"),
	HX_HCSTRING("FORMAT_STEREO8","\xb8","\x19","\x58","\xda"),
	HX_HCSTRING("FORMAT_STEREO16","\x65","\x61","\xbe","\x32"),
	HX_HCSTRING("FREQUENCY","\x7c","\xf2","\x42","\xb7"),
	HX_HCSTRING("BITS","\x06","\xc3","\xd7","\x2b"),
	HX_HCSTRING("CHANNELS","\x50","\x3a","\x74","\xc4"),
	HX_HCSTRING("SIZE","\xc1","\x68","\x14","\x37"),
	HX_HCSTRING("NO_ERROR","\xea","\xb5","\x7d","\x2f"),
	HX_HCSTRING("INVALID_NAME","\xf3","\x7b","\x59","\x19"),
	HX_HCSTRING("INVALID_ENUM","\xa9","\x74","\x70","\x13"),
	HX_HCSTRING("INVALID_VALUE","\xa9","\xe8","\x26","\xb0"),
	HX_HCSTRING("INVALID_OPERATION","\x5f","\xb1","\xc8","\x29"),
	HX_HCSTRING("OUT_OF_MEMORY","\x18","\xf2","\x97","\xe1"),
	HX_HCSTRING("VENDOR","\x88","\x91","\x19","\x51"),
	HX_HCSTRING("VERSION","\xf8","\xba","\xc5","\xfc"),
	HX_HCSTRING("RENDERER","\x43","\x55","\x61","\x0c"),
	HX_HCSTRING("EXTENSIONS","\x14","\xf0","\x79","\x7b"),
	HX_HCSTRING("DOPPLER_FACTOR","\xe0","\x6d","\x21","\x56"),
	HX_HCSTRING("SPEED_OF_SOUND","\x5f","\x3f","\x54","\xba"),
	HX_HCSTRING("DOPPLER_VELOCITY","\x6e","\xe1","\x7d","\x1d"),
	HX_HCSTRING("DISTANCE_MODEL","\xbf","\x9b","\x1a","\x00"),
	HX_HCSTRING("INVERSE_DISTANCE","\x04","\x89","\x17","\x1d"),
	HX_HCSTRING("INVERSE_DISTANCE_CLAMPED","\x7f","\x1a","\x32","\x28"),
	HX_HCSTRING("LINEAR_DISTANCE","\x0f","\xb8","\xc7","\x14"),
	HX_HCSTRING("LINEAR_DISTANCE_CLAMPED","\x8a","\xcc","\x88","\xb2"),
	HX_HCSTRING("EXPONENT_DISTANCE","\x45","\x4a","\xec","\xc8"),
	HX_HCSTRING("EXPONENT_DISTANCE_CLAMPED","\xc0","\x84","\x7b","\x57"),
	HX_HCSTRING("bufferData","\x4a","\xbf","\x73","\x93"),
	HX_HCSTRING("buffer3f","\xd3","\x29","\xfe","\xac"),
	HX_HCSTRING("buffer3i","\xd6","\x29","\xfe","\xac"),
	HX_HCSTRING("bufferf","\x66","\xa3","\x90","\xb1"),
	HX_HCSTRING("bufferfv","\x50","\x56","\xfe","\xac"),
	HX_HCSTRING("bufferi","\x69","\xa3","\x90","\xb1"),
	HX_HCSTRING("bufferiv","\xed","\x58","\xfe","\xac"),
	HX_HCSTRING("createSource","\xf7","\xf0","\x86","\x54"),
	HX_HCSTRING("createBuffer","\x1c","\xfd","\xe9","\xf2"),
	HX_HCSTRING("deleteBuffer","\x8b","\xe3","\x2c","\x37"),
	HX_HCSTRING("deleteBuffers","\x88","\x36","\x1a","\x10"),
	HX_HCSTRING("deleteSource","\x66","\xd7","\xc9","\x98"),
	HX_HCSTRING("deleteSources","\x4d","\xa2","\xd2","\x17"),
	HX_HCSTRING("disable","\xe8","\x69","\x58","\xb1"),
	HX_HCSTRING("distanceModel","\x34","\x40","\xe1","\xd3"),
	HX_HCSTRING("dopplerFactor","\xdd","\x2d","\x05","\x6f"),
	HX_HCSTRING("dopplerVelocity","\xab","\x76","\xcf","\x06"),
	HX_HCSTRING("enable","\x83","\xae","\x87","\xf8"),
	HX_HCSTRING("genSource","\x8b","\x71","\x07","\xb5"),
	HX_HCSTRING("genSources","\x88","\xe8","\x7b","\xb1"),
	HX_HCSTRING("genBuffer","\xb0","\x7d","\x6a","\x53"),
	HX_HCSTRING("genBuffers","\xc3","\x7c","\xc3","\xa9"),
	HX_HCSTRING("getBoolean","\xb2","\x70","\x60","\xcd"),
	HX_HCSTRING("getBooleanv","\x84","\x2b","\x02","\xe7"),
	HX_HCSTRING("getBuffer3f","\x89","\xec","\xf1","\xd2"),
	HX_HCSTRING("getBuffer3i","\x8c","\xec","\xf1","\xd2"),
	HX_HCSTRING("getBufferf","\x70","\x29","\xf2","\x00"),
	HX_HCSTRING("getBufferfv","\x06","\x19","\xf2","\xd2"),
	HX_HCSTRING("getBufferi","\x73","\x29","\xf2","\x00"),
	HX_HCSTRING("getBufferiv","\xa3","\x1b","\xf2","\xd2"),
	HX_HCSTRING("getDouble","\x47","\xb4","\x21","\xaf"),
	HX_HCSTRING("getDoublev","\x4f","\x0a","\x5c","\x8e"),
	HX_HCSTRING("getEnumValue","\x3a","\x9d","\x5d","\x37"),
	HX_HCSTRING("getError","\x52","\xdb","\x00","\xd3"),
	HX_HCSTRING("getErrorString","\xc3","\xc1","\x3b","\x87"),
	HX_HCSTRING("getFloat","\x26","\xd5","\x6d","\x62"),
	HX_HCSTRING("getFloatv","\x90","\xac","\xac","\xbd"),
	HX_HCSTRING("getInteger","\xc8","\x43","\x7d","\x66"),
	HX_HCSTRING("getIntegerv","\xae","\x0b","\x1e","\x47"),
	HX_HCSTRING("getListener3f","\x7d","\x8e","\x7c","\x85"),
	HX_HCSTRING("getListener3i","\x80","\x8e","\x7c","\x85"),
	HX_HCSTRING("getListenerf","\xfc","\x01","\xe5","\x02"),
	HX_HCSTRING("getListenerfv","\xfa","\xba","\x7c","\x85"),
	HX_HCSTRING("getListeneri","\xff","\x01","\xe5","\x02"),
	HX_HCSTRING("getListeneriv","\x97","\xbd","\x7c","\x85"),
	HX_HCSTRING("getProcAddress","\xc8","\xe3","\xa1","\x89"),
	HX_HCSTRING("getSource3f","\x24","\xcd","\x97","\x8c"),
	HX_HCSTRING("getSourcef","\x35","\x95","\xaa","\x08"),
	HX_HCSTRING("getSource3i","\x27","\xcd","\x97","\x8c"),
	HX_HCSTRING("getSourcefv","\xa1","\xf9","\x97","\x8c"),
	HX_HCSTRING("getSourcei","\x38","\x95","\xaa","\x08"),
	HX_HCSTRING("getSourceiv","\x3e","\xfc","\x97","\x8c"),
	HX_HCSTRING("getString","\x07","\xb2","\x86","\x8d"),
	HX_HCSTRING("isBuffer","\x8a","\x58","\xfe","\x28"),
	HX_HCSTRING("isEnabled","\xb7","\x81","\x2f","\x82"),
	HX_HCSTRING("isExtensionPresent","\x46","\xf9","\x2a","\xb4"),
	HX_HCSTRING("isSource","\x65","\x4c","\x9b","\x8a"),
	HX_HCSTRING("listener3f","\x47","\x32","\x0a","\x29"),
	HX_HCSTRING("listener3i","\x4a","\x32","\x0a","\x29"),
	HX_HCSTRING("listenerf","\x72","\x65","\x8e","\xf3"),
	HX_HCSTRING("listenerfv","\xc4","\x5e","\x0a","\x29"),
	HX_HCSTRING("listeneri","\x75","\x65","\x8e","\xf3"),
	HX_HCSTRING("listeneriv","\x61","\x61","\x0a","\x29"),
	HX_HCSTRING("source3f","\x6e","\x0a","\xa4","\x66"),
	HX_HCSTRING("source3i","\x71","\x0a","\xa4","\x66"),
	HX_HCSTRING("sourcef","\x2b","\x0f","\x49","\xb9"),
	HX_HCSTRING("sourcefv","\xeb","\x36","\xa4","\x66"),
	HX_HCSTRING("sourcei","\x2e","\x0f","\x49","\xb9"),
	HX_HCSTRING("sourceiv","\x88","\x39","\xa4","\x66"),
	HX_HCSTRING("sourcePlay","\x6f","\x14","\xbe","\x72"),
	HX_HCSTRING("sourcePlayv","\x27","\xcd","\x93","\xf3"),
	HX_HCSTRING("sourceStop","\x7d","\xd6","\xbf","\x74"),
	HX_HCSTRING("sourceStopv","\x59","\xd7","\x1b","\xb3"),
	HX_HCSTRING("sourceRewind","\x36","\xe5","\x26","\x01"),
	HX_HCSTRING("sourceRewindv","\x80","\xaa","\xe1","\x00"),
	HX_HCSTRING("sourcePause","\x1b","\x9c","\x5d","\xec"),
	HX_HCSTRING("sourcePausev","\xfb","\xfb","\x8a","\xe5"),
	HX_HCSTRING("sourceQueueBuffer","\x56","\x70","\x65","\x56"),
	HX_HCSTRING("sourceQueueBuffers","\x5d","\xdb","\x5c","\x42"),
	HX_HCSTRING("sourceUnqueueBuffer","\xdd","\x29","\x95","\x2e"),
	HX_HCSTRING("sourceUnqueueBuffers","\xf6","\x77","\xef","\x93"),
	HX_HCSTRING("speedOfSound","\x71","\xe7","\x21","\x0a"),
	::String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(ALAudioContext_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(ALAudioContext_obj::__mClass,"__mClass");
};

#endif

hx::Class ALAudioContext_obj::__mClass;

void ALAudioContext_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("lime.media.ALAudioContext","\x87","\x43","\x04","\xb4");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = hx::Class_obj::dupFunctions(sMemberFields);
	__mClass->mCanCast = hx::TCanCast< ALAudioContext_obj >;
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
