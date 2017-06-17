#include <hxcpp.h>

#ifndef INCLUDED_lime__backend_native_NativeCFFI
#include <lime/_backend/native/NativeCFFI.h>
#endif
#ifndef INCLUDED_lime_media_openal_AL
#include <lime/media/openal/AL.h>
#endif
#ifndef INCLUDED_lime_utils_ArrayBufferView
#include <lime/utils/ArrayBufferView.h>
#endif
namespace lime{
namespace media{
namespace openal{

Void AL_obj::__construct()
{
	return null();
}

//AL_obj::~AL_obj() { }

Dynamic AL_obj::__CreateEmpty() { return  new AL_obj; }
hx::ObjectPtr< AL_obj > AL_obj::__new()
{  hx::ObjectPtr< AL_obj > _result_ = new AL_obj();
	_result_->__construct();
	return _result_;}

Dynamic AL_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< AL_obj > _result_ = new AL_obj();
	_result_->__construct();
	return _result_;}

int AL_obj::NONE;

int AL_obj::FALSE;

int AL_obj::TRUE;

int AL_obj::SOURCE_RELATIVE;

int AL_obj::CONE_INNER_ANGLE;

int AL_obj::CONE_OUTER_ANGLE;

int AL_obj::PITCH;

int AL_obj::POSITION;

int AL_obj::DIRECTION;

int AL_obj::VELOCITY;

int AL_obj::LOOPING;

int AL_obj::BUFFER;

int AL_obj::GAIN;

int AL_obj::MIN_GAIN;

int AL_obj::MAX_GAIN;

int AL_obj::ORIENTATION;

int AL_obj::SOURCE_STATE;

int AL_obj::INITIAL;

int AL_obj::PLAYING;

int AL_obj::PAUSED;

int AL_obj::STOPPED;

int AL_obj::BUFFERS_QUEUED;

int AL_obj::BUFFERS_PROCESSED;

int AL_obj::REFERENCE_DISTANCE;

int AL_obj::ROLLOFF_FACTOR;

int AL_obj::CONE_OUTER_GAIN;

int AL_obj::MAX_DISTANCE;

int AL_obj::SEC_OFFSET;

int AL_obj::SAMPLE_OFFSET;

int AL_obj::BYTE_OFFSET;

int AL_obj::SOURCE_TYPE;

int AL_obj::STATIC;

int AL_obj::STREAMING;

int AL_obj::UNDETERMINED;

int AL_obj::FORMAT_MONO8;

int AL_obj::FORMAT_MONO16;

int AL_obj::FORMAT_STEREO8;

int AL_obj::FORMAT_STEREO16;

int AL_obj::FREQUENCY;

int AL_obj::BITS;

int AL_obj::CHANNELS;

int AL_obj::SIZE;

int AL_obj::NO_ERROR;

int AL_obj::INVALID_NAME;

int AL_obj::INVALID_ENUM;

int AL_obj::INVALID_VALUE;

int AL_obj::INVALID_OPERATION;

int AL_obj::OUT_OF_MEMORY;

int AL_obj::VENDOR;

int AL_obj::VERSION;

int AL_obj::RENDERER;

int AL_obj::EXTENSIONS;

int AL_obj::DOPPLER_FACTOR;

int AL_obj::SPEED_OF_SOUND;

int AL_obj::DOPPLER_VELOCITY;

int AL_obj::DISTANCE_MODEL;

int AL_obj::INVERSE_DISTANCE;

int AL_obj::INVERSE_DISTANCE_CLAMPED;

int AL_obj::LINEAR_DISTANCE;

int AL_obj::LINEAR_DISTANCE_CLAMPED;

int AL_obj::EXPONENT_DISTANCE;

int AL_obj::EXPONENT_DISTANCE_CLAMPED;

Void AL_obj::bufferData( Dynamic buffer,int format,::lime::utils::ArrayBufferView data,int size,int freq){
{
		::lime::_backend::native::NativeCFFI_obj::cffi_lime_al_buffer_data.call(hx::DynamicPtr(buffer),format,hx::DynamicPtr(data),size,freq);
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC5(AL_obj,bufferData,(void))

Void AL_obj::buffer3f( Dynamic buffer,int param,Float value1,Float value2,Float value3){
{
		::lime::_backend::native::NativeCFFI_obj::cffi_lime_al_buffer3f.call(hx::DynamicPtr(buffer),param,value1,value2,value3);
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC5(AL_obj,buffer3f,(void))

Void AL_obj::buffer3i( Dynamic buffer,int param,int value1,int value2,int value3){
{
		::lime::_backend::native::NativeCFFI_obj::cffi_lime_al_buffer3i.call(hx::DynamicPtr(buffer),param,value1,value2,value3);
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC5(AL_obj,buffer3i,(void))

Void AL_obj::bufferf( Dynamic buffer,int param,Float value){
{
		::lime::_backend::native::NativeCFFI_obj::cffi_lime_al_bufferf.call(hx::DynamicPtr(buffer),param,value);
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC3(AL_obj,bufferf,(void))

Void AL_obj::bufferfv( Dynamic buffer,int param,Array< Float > values){
{
		::lime::_backend::native::NativeCFFI_obj::cffi_lime_al_bufferfv.call(hx::DynamicPtr(buffer),param,hx::DynamicPtr(values));
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC3(AL_obj,bufferfv,(void))

Void AL_obj::bufferi( Dynamic buffer,int param,int value){
{
		::lime::_backend::native::NativeCFFI_obj::cffi_lime_al_bufferi.call(hx::DynamicPtr(buffer),param,value);
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC3(AL_obj,bufferi,(void))

Void AL_obj::bufferiv( Dynamic buffer,int param,Array< int > values){
{
		::lime::_backend::native::NativeCFFI_obj::cffi_lime_al_bufferiv.call(hx::DynamicPtr(buffer),param,hx::DynamicPtr(values));
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC3(AL_obj,bufferiv,(void))

Dynamic AL_obj::createBuffer( ){
	Dynamic tmp;
	{
		::hx::Object * inVal = ::lime::_backend::native::NativeCFFI_obj::cffi_lime_al_gen_buffer.call();
		::hx::Object * tmp1 = inVal;
		::hx::Object * tmp2 = hx::DynamicPtr(tmp1);
		tmp = Dynamic(tmp2);
	}
	return tmp;
	return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(AL_obj,createBuffer,return )

Dynamic AL_obj::createSource( ){
	Dynamic tmp;
	{
		::hx::Object * inVal = ::lime::_backend::native::NativeCFFI_obj::cffi_lime_al_gen_source.call();
		::hx::Object * tmp1 = inVal;
		::hx::Object * tmp2 = hx::DynamicPtr(tmp1);
		tmp = Dynamic(tmp2);
	}
	return tmp;
	return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(AL_obj,createSource,return )

Void AL_obj::deleteBuffer( Dynamic buffer){
{
		::lime::_backend::native::NativeCFFI_obj::cffi_lime_al_delete_buffer.call(hx::DynamicPtr(buffer));
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(AL_obj,deleteBuffer,(void))

Void AL_obj::deleteBuffers( cpp::ArrayBase buffers){
{
		::lime::_backend::native::NativeCFFI_obj::cffi_lime_al_delete_buffers.call(buffers->__Field(HX_HCSTRING("length","\xe6","\x94","\x07","\x9f"), hx::paccDynamic ),hx::DynamicPtr(buffers));
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(AL_obj,deleteBuffers,(void))

Void AL_obj::deleteSource( Dynamic source){
{
		::lime::_backend::native::NativeCFFI_obj::cffi_lime_al_delete_source.call(hx::DynamicPtr(source));
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(AL_obj,deleteSource,(void))

Void AL_obj::deleteSources( cpp::ArrayBase sources){
{
		::lime::_backend::native::NativeCFFI_obj::cffi_lime_al_delete_sources.call(sources->__Field(HX_HCSTRING("length","\xe6","\x94","\x07","\x9f"), hx::paccDynamic ),hx::DynamicPtr(sources));
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(AL_obj,deleteSources,(void))

Void AL_obj::disable( int capability){
{
		::lime::_backend::native::NativeCFFI_obj::cffi_lime_al_disable.call(capability);
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(AL_obj,disable,(void))

Void AL_obj::distanceModel( int distanceModel){
{
		::lime::_backend::native::NativeCFFI_obj::cffi_lime_al_distance_model.call(distanceModel);
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(AL_obj,distanceModel,(void))

Void AL_obj::dopplerFactor( Float value){
{
		::lime::_backend::native::NativeCFFI_obj::cffi_lime_al_doppler_factor.call(value);
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(AL_obj,dopplerFactor,(void))

Void AL_obj::dopplerVelocity( Float value){
{
		::lime::_backend::native::NativeCFFI_obj::cffi_lime_al_doppler_velocity.call(value);
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(AL_obj,dopplerVelocity,(void))

Void AL_obj::enable( int capability){
{
		::lime::_backend::native::NativeCFFI_obj::cffi_lime_al_enable.call(capability);
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(AL_obj,enable,(void))

Dynamic AL_obj::genSource( ){
	Dynamic tmp;
	{
		::hx::Object * inVal = ::lime::_backend::native::NativeCFFI_obj::cffi_lime_al_gen_source.call();
		::hx::Object * tmp1 = inVal;
		::hx::Object * tmp2 = hx::DynamicPtr(tmp1);
		tmp = Dynamic(tmp2);
	}
	return tmp;
	return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(AL_obj,genSource,return )

cpp::ArrayBase AL_obj::genSources( int n){
	{
		::hx::Object * inVal = ::lime::_backend::native::NativeCFFI_obj::cffi_lime_al_gen_sources.call(n);
		::hx::Object * tmp = inVal;
		::hx::Object * tmp1 = hx::DynamicPtr(tmp);
		return Dynamic(tmp1);
	}
	return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(AL_obj,genSources,return )

Dynamic AL_obj::genBuffer( ){
	Dynamic tmp;
	{
		::hx::Object * inVal = ::lime::_backend::native::NativeCFFI_obj::cffi_lime_al_gen_buffer.call();
		::hx::Object * tmp1 = inVal;
		::hx::Object * tmp2 = hx::DynamicPtr(tmp1);
		tmp = Dynamic(tmp2);
	}
	return tmp;
	return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(AL_obj,genBuffer,return )

cpp::ArrayBase AL_obj::genBuffers( int n){
	{
		::hx::Object * inVal = ::lime::_backend::native::NativeCFFI_obj::cffi_lime_al_gen_buffers.call(n);
		::hx::Object * tmp = inVal;
		::hx::Object * tmp1 = hx::DynamicPtr(tmp);
		return Dynamic(tmp1);
	}
	return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(AL_obj,genBuffers,return )

bool AL_obj::getBoolean( int param){
	return ::lime::_backend::native::NativeCFFI_obj::cffi_lime_al_get_boolean.call(param);
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(AL_obj,getBoolean,return )

Array< bool > AL_obj::getBooleanv( int param,hx::Null< int >  __o_count){
int count = __o_count.Default(1);
{
		{
			::hx::Object * inVal = ::lime::_backend::native::NativeCFFI_obj::cffi_lime_al_get_booleanv.call(param,(int)1);
			::hx::Object * tmp = inVal;
			::hx::Object * tmp1 = hx::DynamicPtr(tmp);
			return Dynamic(tmp1);
		}
		return null();
	}
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(AL_obj,getBooleanv,return )

Array< Float > AL_obj::getBuffer3f( Dynamic buffer,int param){
	{
		::hx::Object * inVal = ::lime::_backend::native::NativeCFFI_obj::cffi_lime_al_get_buffer3f.call(hx::DynamicPtr(buffer),param);
		::hx::Object * tmp = inVal;
		::hx::Object * tmp1 = hx::DynamicPtr(tmp);
		return Dynamic(tmp1);
	}
	return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(AL_obj,getBuffer3f,return )

Array< int > AL_obj::getBuffer3i( Dynamic buffer,int param){
	{
		::hx::Object * inVal = ::lime::_backend::native::NativeCFFI_obj::cffi_lime_al_get_buffer3i.call(hx::DynamicPtr(buffer),param);
		::hx::Object * tmp = inVal;
		::hx::Object * tmp1 = hx::DynamicPtr(tmp);
		return Dynamic(tmp1);
	}
	return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(AL_obj,getBuffer3i,return )

Float AL_obj::getBufferf( Dynamic buffer,int param){
	return ::lime::_backend::native::NativeCFFI_obj::cffi_lime_al_get_bufferf.call(hx::DynamicPtr(buffer),param);
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(AL_obj,getBufferf,return )

Array< Float > AL_obj::getBufferfv( Dynamic buffer,int param,hx::Null< int >  __o_count){
int count = __o_count.Default(1);
{
		{
			::hx::Object * inVal = ::lime::_backend::native::NativeCFFI_obj::cffi_lime_al_get_bufferfv.call(hx::DynamicPtr(buffer),param,count);
			::hx::Object * tmp = inVal;
			::hx::Object * tmp1 = hx::DynamicPtr(tmp);
			return Dynamic(tmp1);
		}
		return null();
	}
}


STATIC_HX_DEFINE_DYNAMIC_FUNC3(AL_obj,getBufferfv,return )

int AL_obj::getBufferi( Dynamic buffer,int param){
	return ::lime::_backend::native::NativeCFFI_obj::cffi_lime_al_get_bufferi.call(hx::DynamicPtr(buffer),param);
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(AL_obj,getBufferi,return )

Array< int > AL_obj::getBufferiv( Dynamic buffer,int param,hx::Null< int >  __o_count){
int count = __o_count.Default(1);
{
		{
			::hx::Object * inVal = ::lime::_backend::native::NativeCFFI_obj::cffi_lime_al_get_bufferiv.call(hx::DynamicPtr(buffer),param,count);
			::hx::Object * tmp = inVal;
			::hx::Object * tmp1 = hx::DynamicPtr(tmp);
			return Dynamic(tmp1);
		}
		return null();
	}
}


STATIC_HX_DEFINE_DYNAMIC_FUNC3(AL_obj,getBufferiv,return )

Float AL_obj::getDouble( int param){
	return ::lime::_backend::native::NativeCFFI_obj::cffi_lime_al_get_double.call(param);
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(AL_obj,getDouble,return )

Array< Float > AL_obj::getDoublev( int param,hx::Null< int >  __o_count){
int count = __o_count.Default(1);
{
		{
			::hx::Object * inVal = ::lime::_backend::native::NativeCFFI_obj::cffi_lime_al_get_doublev.call(param,count);
			::hx::Object * tmp = inVal;
			::hx::Object * tmp1 = hx::DynamicPtr(tmp);
			return Dynamic(tmp1);
		}
		return null();
	}
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(AL_obj,getDoublev,return )

int AL_obj::getEnumValue( ::String ename){
	return ::lime::_backend::native::NativeCFFI_obj::cffi_lime_al_get_enum_value.call(ename);
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(AL_obj,getEnumValue,return )

int AL_obj::getError( ){
	return ::lime::_backend::native::NativeCFFI_obj::cffi_lime_al_get_error.call();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(AL_obj,getError,return )

::String AL_obj::getErrorString( ){
	::String tmp;
	{
		int tmp1 = ::lime::media::openal::AL_obj::getError();
		int _g = tmp1;
		int tmp2 = _g;
		switch( (int)(tmp2)){
			case (int)40961: {
				tmp = HX_HCSTRING("INVALID_NAME: Invalid parameter name","\x64","\xc3","\x04","\xf4");
			}
			;break;
			case (int)40962: {
				tmp = HX_HCSTRING("INVALID_ENUM: Invalid enum value","\x0a","\xd7","\xdf","\x59");
			}
			;break;
			case (int)40963: {
				tmp = HX_HCSTRING("INVALID_VALUE: Invalid parameter value","\xc2","\xa4","\x37","\xf8");
			}
			;break;
			case (int)40964: {
				tmp = HX_HCSTRING("INVALID_OPERATION: Illegal operation or call","\x13","\x8a","\xe7","\x93");
			}
			;break;
			case (int)40965: {
				tmp = HX_HCSTRING("OUT_OF_MEMORY: OpenAL has run out of memory","\xb0","\xdd","\xfb","\x0a");
			}
			;break;
			default: {
				tmp = HX_HCSTRING("","\x00","\x00","\x00","\x00");
			}
		}
	}
	return tmp;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(AL_obj,getErrorString,return )

Float AL_obj::getFloat( int param){
	return ::lime::_backend::native::NativeCFFI_obj::cffi_lime_al_get_float.call(param);
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(AL_obj,getFloat,return )

Array< Float > AL_obj::getFloatv( int param,hx::Null< int >  __o_count){
int count = __o_count.Default(1);
{
		{
			::hx::Object * inVal = ::lime::_backend::native::NativeCFFI_obj::cffi_lime_al_get_floatv.call(param,count);
			::hx::Object * tmp = inVal;
			::hx::Object * tmp1 = hx::DynamicPtr(tmp);
			return Dynamic(tmp1);
		}
		return null();
	}
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(AL_obj,getFloatv,return )

int AL_obj::getInteger( int param){
	return ::lime::_backend::native::NativeCFFI_obj::cffi_lime_al_get_integer.call(param);
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(AL_obj,getInteger,return )

Array< int > AL_obj::getIntegerv( int param,hx::Null< int >  __o_count){
int count = __o_count.Default(1);
{
		{
			::hx::Object * inVal = ::lime::_backend::native::NativeCFFI_obj::cffi_lime_al_get_integerv.call(param,count);
			::hx::Object * tmp = inVal;
			::hx::Object * tmp1 = hx::DynamicPtr(tmp);
			return Dynamic(tmp1);
		}
		return null();
	}
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(AL_obj,getIntegerv,return )

Array< Float > AL_obj::getListener3f( int param){
	{
		::hx::Object * inVal = ::lime::_backend::native::NativeCFFI_obj::cffi_lime_al_get_listener3f.call(param);
		::hx::Object * tmp = inVal;
		::hx::Object * tmp1 = hx::DynamicPtr(tmp);
		return Dynamic(tmp1);
	}
	return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(AL_obj,getListener3f,return )

Array< int > AL_obj::getListener3i( int param){
	{
		::hx::Object * inVal = ::lime::_backend::native::NativeCFFI_obj::cffi_lime_al_get_listener3i.call(param);
		::hx::Object * tmp = inVal;
		::hx::Object * tmp1 = hx::DynamicPtr(tmp);
		return Dynamic(tmp1);
	}
	return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(AL_obj,getListener3i,return )

Float AL_obj::getListenerf( int param){
	return ::lime::_backend::native::NativeCFFI_obj::cffi_lime_al_get_listenerf.call(param);
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(AL_obj,getListenerf,return )

Array< Float > AL_obj::getListenerfv( int param,hx::Null< int >  __o_count){
int count = __o_count.Default(1);
{
		{
			::hx::Object * inVal = ::lime::_backend::native::NativeCFFI_obj::cffi_lime_al_get_listenerfv.call(param,count);
			::hx::Object * tmp = inVal;
			::hx::Object * tmp1 = hx::DynamicPtr(tmp);
			return Dynamic(tmp1);
		}
		return null();
	}
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(AL_obj,getListenerfv,return )

int AL_obj::getListeneri( int param){
	return ::lime::_backend::native::NativeCFFI_obj::cffi_lime_al_get_listeneri.call(param);
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(AL_obj,getListeneri,return )

Array< int > AL_obj::getListeneriv( int param,hx::Null< int >  __o_count){
int count = __o_count.Default(1);
{
		{
			::hx::Object * inVal = ::lime::_backend::native::NativeCFFI_obj::cffi_lime_al_get_listeneriv.call(param,count);
			::hx::Object * tmp = inVal;
			::hx::Object * tmp1 = hx::DynamicPtr(tmp);
			return Dynamic(tmp1);
		}
		return null();
	}
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(AL_obj,getListeneriv,return )

Dynamic AL_obj::getParameter( int param){
	return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(AL_obj,getParameter,return )

Dynamic AL_obj::getProcAddress( ::String fname){
	return ::lime::_backend::native::NativeCFFI_obj::cffi_lime_al_get_proc_address.call(fname);
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(AL_obj,getProcAddress,return )

Array< Float > AL_obj::getSource3f( Dynamic source,int param){
	{
		::hx::Object * inVal = ::lime::_backend::native::NativeCFFI_obj::cffi_lime_al_get_source3f.call(hx::DynamicPtr(source),param);
		::hx::Object * tmp = inVal;
		::hx::Object * tmp1 = hx::DynamicPtr(tmp);
		return Dynamic(tmp1);
	}
	return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(AL_obj,getSource3f,return )

Float AL_obj::getSourcef( Dynamic source,int param){
	return ::lime::_backend::native::NativeCFFI_obj::cffi_lime_al_get_sourcef.call(hx::DynamicPtr(source),param);
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(AL_obj,getSourcef,return )

Array< int > AL_obj::getSource3i( Dynamic source,int param){
	{
		::hx::Object * inVal = ::lime::_backend::native::NativeCFFI_obj::cffi_lime_al_get_source3i.call(hx::DynamicPtr(source),param);
		::hx::Object * tmp = inVal;
		::hx::Object * tmp1 = hx::DynamicPtr(tmp);
		return Dynamic(tmp1);
	}
	return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(AL_obj,getSource3i,return )

Array< Float > AL_obj::getSourcefv( Dynamic source,int param,hx::Null< int >  __o_count){
int count = __o_count.Default(1);
{
		{
			::hx::Object * inVal = ::lime::_backend::native::NativeCFFI_obj::cffi_lime_al_get_sourcefv.call(hx::DynamicPtr(source),param,count);
			::hx::Object * tmp = inVal;
			::hx::Object * tmp1 = hx::DynamicPtr(tmp);
			return Dynamic(tmp1);
		}
		return null();
	}
}


STATIC_HX_DEFINE_DYNAMIC_FUNC3(AL_obj,getSourcefv,return )

Dynamic AL_obj::getSourcei( Dynamic source,int param){
	return ((Dynamic)(::lime::_backend::native::NativeCFFI_obj::cffi_lime_al_get_sourcei.call(hx::DynamicPtr(source),param)));
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(AL_obj,getSourcei,return )

Array< int > AL_obj::getSourceiv( Dynamic source,int param,hx::Null< int >  __o_count){
int count = __o_count.Default(1);
{
		{
			::hx::Object * inVal = ::lime::_backend::native::NativeCFFI_obj::cffi_lime_al_get_sourceiv.call(hx::DynamicPtr(source),param,count);
			::hx::Object * tmp = inVal;
			::hx::Object * tmp1 = hx::DynamicPtr(tmp);
			return Dynamic(tmp1);
		}
		return null();
	}
}


STATIC_HX_DEFINE_DYNAMIC_FUNC3(AL_obj,getSourceiv,return )

::String AL_obj::getString( int param){
	return ((Dynamic)(::lime::_backend::native::NativeCFFI_obj::cffi_lime_al_get_string.call(param)));
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(AL_obj,getString,return )

bool AL_obj::isBuffer( Dynamic buffer){
	return ::lime::_backend::native::NativeCFFI_obj::cffi_lime_al_is_buffer.call(hx::DynamicPtr(buffer));
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(AL_obj,isBuffer,return )

bool AL_obj::isEnabled( int capability){
	return ::lime::_backend::native::NativeCFFI_obj::cffi_lime_al_is_enabled.call(capability);
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(AL_obj,isEnabled,return )

bool AL_obj::isExtensionPresent( ::String extname){
	return ::lime::_backend::native::NativeCFFI_obj::cffi_lime_al_is_extension_present.call(extname);
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(AL_obj,isExtensionPresent,return )

bool AL_obj::isSource( Dynamic source){
	return ::lime::_backend::native::NativeCFFI_obj::cffi_lime_al_is_source.call(hx::DynamicPtr(source));
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(AL_obj,isSource,return )

Void AL_obj::listener3f( int param,Float value1,Float value2,Float value3){
{
		::lime::_backend::native::NativeCFFI_obj::cffi_lime_al_listener3f.call(param,value1,value2,value3);
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC4(AL_obj,listener3f,(void))

Void AL_obj::listener3i( int param,int value1,int value2,int value3){
{
		::lime::_backend::native::NativeCFFI_obj::cffi_lime_al_listener3i.call(param,value1,value2,value3);
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC4(AL_obj,listener3i,(void))

Void AL_obj::listenerf( int param,Float value){
{
		::lime::_backend::native::NativeCFFI_obj::cffi_lime_al_listenerf.call(param,value);
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(AL_obj,listenerf,(void))

Void AL_obj::listenerfv( int param,Array< Float > values){
{
		::lime::_backend::native::NativeCFFI_obj::cffi_lime_al_listenerfv.call(param,hx::DynamicPtr(values));
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(AL_obj,listenerfv,(void))

Void AL_obj::listeneri( int param,int value){
{
		::lime::_backend::native::NativeCFFI_obj::cffi_lime_al_listeneri.call(param,value);
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(AL_obj,listeneri,(void))

Void AL_obj::listeneriv( int param,Array< int > values){
{
		::lime::_backend::native::NativeCFFI_obj::cffi_lime_al_listeneriv.call(param,hx::DynamicPtr(values));
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(AL_obj,listeneriv,(void))

Void AL_obj::source3f( Dynamic source,int param,Float value1,Float value2,Float value3){
{
		::lime::_backend::native::NativeCFFI_obj::cffi_lime_al_source3f.call(hx::DynamicPtr(source),param,value1,value2,value3);
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC5(AL_obj,source3f,(void))

Void AL_obj::source3i( Dynamic source,int param,int value1,int value2,int value3){
{
		::lime::_backend::native::NativeCFFI_obj::cffi_lime_al_source3i.call(hx::DynamicPtr(source),param,value1,value2,value3);
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC5(AL_obj,source3i,(void))

Void AL_obj::sourcef( Dynamic source,int param,Float value){
{
		::lime::_backend::native::NativeCFFI_obj::cffi_lime_al_sourcef.call(hx::DynamicPtr(source),param,value);
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC3(AL_obj,sourcef,(void))

Void AL_obj::sourcefv( Dynamic source,int param,Array< Float > values){
{
		::lime::_backend::native::NativeCFFI_obj::cffi_lime_al_sourcefv.call(hx::DynamicPtr(source),param,hx::DynamicPtr(values));
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC3(AL_obj,sourcefv,(void))

Void AL_obj::sourcei( Dynamic source,int param,Dynamic value){
{
		::lime::_backend::native::NativeCFFI_obj::cffi_lime_al_sourcei.call(hx::DynamicPtr(source),param,hx::DynamicPtr(value));
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC3(AL_obj,sourcei,(void))

Void AL_obj::sourceiv( Dynamic source,int param,Array< int > values){
{
		::lime::_backend::native::NativeCFFI_obj::cffi_lime_al_sourceiv.call(hx::DynamicPtr(source),param,hx::DynamicPtr(values));
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC3(AL_obj,sourceiv,(void))

Void AL_obj::sourcePlay( Dynamic source){
{
		::lime::_backend::native::NativeCFFI_obj::cffi_lime_al_source_play.call(hx::DynamicPtr(source));
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(AL_obj,sourcePlay,(void))

Void AL_obj::sourcePlayv( cpp::ArrayBase sources){
{
		::lime::_backend::native::NativeCFFI_obj::cffi_lime_al_source_playv.call(sources->__Field(HX_HCSTRING("length","\xe6","\x94","\x07","\x9f"), hx::paccDynamic ),hx::DynamicPtr(sources));
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(AL_obj,sourcePlayv,(void))

Void AL_obj::sourceStop( Dynamic source){
{
		::lime::_backend::native::NativeCFFI_obj::cffi_lime_al_source_stop.call(hx::DynamicPtr(source));
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(AL_obj,sourceStop,(void))

Void AL_obj::sourceStopv( cpp::ArrayBase sources){
{
		::lime::_backend::native::NativeCFFI_obj::cffi_lime_al_source_stopv.call(sources->__Field(HX_HCSTRING("length","\xe6","\x94","\x07","\x9f"), hx::paccDynamic ),hx::DynamicPtr(sources));
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(AL_obj,sourceStopv,(void))

Void AL_obj::sourceRewind( Dynamic source){
{
		::lime::_backend::native::NativeCFFI_obj::cffi_lime_al_source_rewind.call(hx::DynamicPtr(source));
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(AL_obj,sourceRewind,(void))

Void AL_obj::sourceRewindv( cpp::ArrayBase sources){
{
		::lime::_backend::native::NativeCFFI_obj::cffi_lime_al_source_rewindv.call(sources->__Field(HX_HCSTRING("length","\xe6","\x94","\x07","\x9f"), hx::paccDynamic ),hx::DynamicPtr(sources));
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(AL_obj,sourceRewindv,(void))

Void AL_obj::sourcePause( Dynamic source){
{
		::lime::_backend::native::NativeCFFI_obj::cffi_lime_al_source_pause.call(hx::DynamicPtr(source));
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(AL_obj,sourcePause,(void))

Void AL_obj::sourcePausev( cpp::ArrayBase sources){
{
		::lime::_backend::native::NativeCFFI_obj::cffi_lime_al_source_pausev.call(sources->__Field(HX_HCSTRING("length","\xe6","\x94","\x07","\x9f"), hx::paccDynamic ),hx::DynamicPtr(sources));
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(AL_obj,sourcePausev,(void))

Void AL_obj::sourceQueueBuffer( Dynamic source,Dynamic buffer){
{
		cpp::ArrayBase buffers = cpp::ArrayBase_obj::__new().Add(buffer);
		::lime::_backend::native::NativeCFFI_obj::cffi_lime_al_source_queue_buffers.call(hx::DynamicPtr(source),(int)1,hx::DynamicPtr(buffers));
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(AL_obj,sourceQueueBuffer,(void))

Void AL_obj::sourceQueueBuffers( Dynamic source,int nb,cpp::ArrayBase buffers){
{
		::lime::_backend::native::NativeCFFI_obj::cffi_lime_al_source_queue_buffers.call(hx::DynamicPtr(source),nb,hx::DynamicPtr(buffers));
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC3(AL_obj,sourceQueueBuffers,(void))

Dynamic AL_obj::sourceUnqueueBuffer( Dynamic source){
	cpp::ArrayBase res = ((Dynamic)(::lime::_backend::native::NativeCFFI_obj::cffi_lime_al_source_unqueue_buffers.call(hx::DynamicPtr(source),(int)1)));
	Dynamic tmp = res->__GetItem((int)0);
	return tmp;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(AL_obj,sourceUnqueueBuffer,return )

cpp::ArrayBase AL_obj::sourceUnqueueBuffers( Dynamic source,int nb){
	return ((Dynamic)(::lime::_backend::native::NativeCFFI_obj::cffi_lime_al_source_unqueue_buffers.call(hx::DynamicPtr(source),nb)));
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(AL_obj,sourceUnqueueBuffers,return )

Void AL_obj::speedOfSound( Float value){
{
		::lime::_backend::native::NativeCFFI_obj::cffi_lime_al_speed_of_sound.call(value);
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(AL_obj,speedOfSound,(void))


AL_obj::AL_obj()
{
}

bool AL_obj::__GetStatic(const ::String &inName, Dynamic &outValue, hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 6:
		if (HX_FIELD_EQ(inName,"enable") ) { outValue = enable_dyn(); return true;  }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"bufferf") ) { outValue = bufferf_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"bufferi") ) { outValue = bufferi_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"disable") ) { outValue = disable_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"sourcef") ) { outValue = sourcef_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"sourcei") ) { outValue = sourcei_dyn(); return true;  }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"buffer3f") ) { outValue = buffer3f_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"buffer3i") ) { outValue = buffer3i_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"bufferfv") ) { outValue = bufferfv_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"bufferiv") ) { outValue = bufferiv_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"getError") ) { outValue = getError_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"getFloat") ) { outValue = getFloat_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"isBuffer") ) { outValue = isBuffer_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"isSource") ) { outValue = isSource_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"source3f") ) { outValue = source3f_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"source3i") ) { outValue = source3i_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"sourcefv") ) { outValue = sourcefv_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"sourceiv") ) { outValue = sourceiv_dyn(); return true;  }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"genSource") ) { outValue = genSource_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"genBuffer") ) { outValue = genBuffer_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"getDouble") ) { outValue = getDouble_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"getFloatv") ) { outValue = getFloatv_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"getString") ) { outValue = getString_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"isEnabled") ) { outValue = isEnabled_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"listenerf") ) { outValue = listenerf_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"listeneri") ) { outValue = listeneri_dyn(); return true;  }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"bufferData") ) { outValue = bufferData_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"genSources") ) { outValue = genSources_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"genBuffers") ) { outValue = genBuffers_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"getBoolean") ) { outValue = getBoolean_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"getBufferf") ) { outValue = getBufferf_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"getBufferi") ) { outValue = getBufferi_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"getDoublev") ) { outValue = getDoublev_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"getInteger") ) { outValue = getInteger_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"getSourcef") ) { outValue = getSourcef_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"getSourcei") ) { outValue = getSourcei_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"listener3f") ) { outValue = listener3f_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"listener3i") ) { outValue = listener3i_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"listenerfv") ) { outValue = listenerfv_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"listeneriv") ) { outValue = listeneriv_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"sourcePlay") ) { outValue = sourcePlay_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"sourceStop") ) { outValue = sourceStop_dyn(); return true;  }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"getBooleanv") ) { outValue = getBooleanv_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"getBuffer3f") ) { outValue = getBuffer3f_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"getBuffer3i") ) { outValue = getBuffer3i_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"getBufferfv") ) { outValue = getBufferfv_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"getBufferiv") ) { outValue = getBufferiv_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"getIntegerv") ) { outValue = getIntegerv_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"getSource3f") ) { outValue = getSource3f_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"getSource3i") ) { outValue = getSource3i_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"getSourcefv") ) { outValue = getSourcefv_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"getSourceiv") ) { outValue = getSourceiv_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"sourcePlayv") ) { outValue = sourcePlayv_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"sourceStopv") ) { outValue = sourceStopv_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"sourcePause") ) { outValue = sourcePause_dyn(); return true;  }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"createBuffer") ) { outValue = createBuffer_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"createSource") ) { outValue = createSource_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"deleteBuffer") ) { outValue = deleteBuffer_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"deleteSource") ) { outValue = deleteSource_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"getEnumValue") ) { outValue = getEnumValue_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"getListenerf") ) { outValue = getListenerf_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"getListeneri") ) { outValue = getListeneri_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"getParameter") ) { outValue = getParameter_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"sourceRewind") ) { outValue = sourceRewind_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"sourcePausev") ) { outValue = sourcePausev_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"speedOfSound") ) { outValue = speedOfSound_dyn(); return true;  }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"deleteBuffers") ) { outValue = deleteBuffers_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"deleteSources") ) { outValue = deleteSources_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"distanceModel") ) { outValue = distanceModel_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"dopplerFactor") ) { outValue = dopplerFactor_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"getListener3f") ) { outValue = getListener3f_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"getListener3i") ) { outValue = getListener3i_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"getListenerfv") ) { outValue = getListenerfv_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"getListeneriv") ) { outValue = getListeneriv_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"sourceRewindv") ) { outValue = sourceRewindv_dyn(); return true;  }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"getErrorString") ) { outValue = getErrorString_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"getProcAddress") ) { outValue = getProcAddress_dyn(); return true;  }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"dopplerVelocity") ) { outValue = dopplerVelocity_dyn(); return true;  }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"sourceQueueBuffer") ) { outValue = sourceQueueBuffer_dyn(); return true;  }
		break;
	case 18:
		if (HX_FIELD_EQ(inName,"isExtensionPresent") ) { outValue = isExtensionPresent_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"sourceQueueBuffers") ) { outValue = sourceQueueBuffers_dyn(); return true;  }
		break;
	case 19:
		if (HX_FIELD_EQ(inName,"sourceUnqueueBuffer") ) { outValue = sourceUnqueueBuffer_dyn(); return true;  }
		break;
	case 20:
		if (HX_FIELD_EQ(inName,"sourceUnqueueBuffers") ) { outValue = sourceUnqueueBuffers_dyn(); return true;  }
	}
	return false;
}

#if HXCPP_SCRIPTABLE
static hx::StorageInfo *sMemberStorageInfo = 0;
static hx::StaticInfo sStaticStorageInfo[] = {
	{hx::fsInt,(void *) &AL_obj::NONE,HX_HCSTRING("NONE","\xb8","\xda","\xca","\x33")},
	{hx::fsInt,(void *) &AL_obj::FALSE,HX_HCSTRING("FALSE","\x83","\x6d","\x3d","\x79")},
	{hx::fsInt,(void *) &AL_obj::TRUE,HX_HCSTRING("TRUE","\x4e","\x6f","\xc4","\x37")},
	{hx::fsInt,(void *) &AL_obj::SOURCE_RELATIVE,HX_HCSTRING("SOURCE_RELATIVE","\xf0","\xf3","\x84","\xfe")},
	{hx::fsInt,(void *) &AL_obj::CONE_INNER_ANGLE,HX_HCSTRING("CONE_INNER_ANGLE","\x4e","\xa1","\xd7","\x93")},
	{hx::fsInt,(void *) &AL_obj::CONE_OUTER_ANGLE,HX_HCSTRING("CONE_OUTER_ANGLE","\xf3","\xe1","\xbf","\xcc")},
	{hx::fsInt,(void *) &AL_obj::PITCH,HX_HCSTRING("PITCH","\xa0","\xf3","\x8e","\x40")},
	{hx::fsInt,(void *) &AL_obj::POSITION,HX_HCSTRING("POSITION","\xa9","\x30","\x80","\x24")},
	{hx::fsInt,(void *) &AL_obj::DIRECTION,HX_HCSTRING("DIRECTION","\x1f","\xd2","\x98","\x0b")},
	{hx::fsInt,(void *) &AL_obj::VELOCITY,HX_HCSTRING("VELOCITY","\x1d","\x92","\x83","\x78")},
	{hx::fsInt,(void *) &AL_obj::LOOPING,HX_HCSTRING("LOOPING","\xde","\x50","\x51","\xa0")},
	{hx::fsInt,(void *) &AL_obj::BUFFER,HX_HCSTRING("BUFFER","\x00","\x69","\x17","\x83")},
	{hx::fsInt,(void *) &AL_obj::GAIN,HX_HCSTRING("GAIN","\x7f","\xb8","\x1f","\x2f")},
	{hx::fsInt,(void *) &AL_obj::MIN_GAIN,HX_HCSTRING("MIN_GAIN","\xac","\x29","\xd2","\x21")},
	{hx::fsInt,(void *) &AL_obj::MAX_GAIN,HX_HCSTRING("MAX_GAIN","\x5a","\x0f","\xb8","\xd4")},
	{hx::fsInt,(void *) &AL_obj::ORIENTATION,HX_HCSTRING("ORIENTATION","\xb0","\xfa","\x3a","\xd4")},
	{hx::fsInt,(void *) &AL_obj::SOURCE_STATE,HX_HCSTRING("SOURCE_STATE","\x4d","\xe8","\x1e","\xab")},
	{hx::fsInt,(void *) &AL_obj::INITIAL,HX_HCSTRING("INITIAL","\x64","\xe4","\x72","\x4b")},
	{hx::fsInt,(void *) &AL_obj::PLAYING,HX_HCSTRING("PLAYING","\x4e","\xe3","\xeb","\x09")},
	{hx::fsInt,(void *) &AL_obj::PAUSED,HX_HCSTRING("PAUSED","\xae","\xec","\x06","\xa2")},
	{hx::fsInt,(void *) &AL_obj::STOPPED,HX_HCSTRING("STOPPED","\xed","\xa5","\x35","\xc3")},
	{hx::fsInt,(void *) &AL_obj::BUFFERS_QUEUED,HX_HCSTRING("BUFFERS_QUEUED","\x5f","\x78","\xce","\x71")},
	{hx::fsInt,(void *) &AL_obj::BUFFERS_PROCESSED,HX_HCSTRING("BUFFERS_PROCESSED","\x42","\x9d","\x62","\xac")},
	{hx::fsInt,(void *) &AL_obj::REFERENCE_DISTANCE,HX_HCSTRING("REFERENCE_DISTANCE","\x89","\xd5","\xce","\x9a")},
	{hx::fsInt,(void *) &AL_obj::ROLLOFF_FACTOR,HX_HCSTRING("ROLLOFF_FACTOR","\xbc","\x10","\x98","\x56")},
	{hx::fsInt,(void *) &AL_obj::CONE_OUTER_GAIN,HX_HCSTRING("CONE_OUTER_GAIN","\x3f","\xda","\x8d","\xe3")},
	{hx::fsInt,(void *) &AL_obj::MAX_DISTANCE,HX_HCSTRING("MAX_DISTANCE","\x90","\x83","\xbb","\xa5")},
	{hx::fsInt,(void *) &AL_obj::SEC_OFFSET,HX_HCSTRING("SEC_OFFSET","\xe1","\x5d","\xa3","\xac")},
	{hx::fsInt,(void *) &AL_obj::SAMPLE_OFFSET,HX_HCSTRING("SAMPLE_OFFSET","\x48","\x82","\xac","\xb4")},
	{hx::fsInt,(void *) &AL_obj::BYTE_OFFSET,HX_HCSTRING("BYTE_OFFSET","\x2a","\xdf","\x43","\x36")},
	{hx::fsInt,(void *) &AL_obj::SOURCE_TYPE,HX_HCSTRING("SOURCE_TYPE","\xde","\xff","\x00","\xdf")},
	{hx::fsInt,(void *) &AL_obj::STATIC,HX_HCSTRING("STATIC","\xae","\x88","\x7e","\xb8")},
	{hx::fsInt,(void *) &AL_obj::STREAMING,HX_HCSTRING("STREAMING","\x42","\x38","\x7b","\xb1")},
	{hx::fsInt,(void *) &AL_obj::UNDETERMINED,HX_HCSTRING("UNDETERMINED","\x0a","\xed","\x9d","\x50")},
	{hx::fsInt,(void *) &AL_obj::FORMAT_MONO8,HX_HCSTRING("FORMAT_MONO8","\x6d","\x40","\x81","\x7a")},
	{hx::fsInt,(void *) &AL_obj::FORMAT_MONO16,HX_HCSTRING("FORMAT_MONO16","\x10","\x19","\x97","\xb6")},
	{hx::fsInt,(void *) &AL_obj::FORMAT_STEREO8,HX_HCSTRING("FORMAT_STEREO8","\xb8","\x19","\x58","\xda")},
	{hx::fsInt,(void *) &AL_obj::FORMAT_STEREO16,HX_HCSTRING("FORMAT_STEREO16","\x65","\x61","\xbe","\x32")},
	{hx::fsInt,(void *) &AL_obj::FREQUENCY,HX_HCSTRING("FREQUENCY","\x7c","\xf2","\x42","\xb7")},
	{hx::fsInt,(void *) &AL_obj::BITS,HX_HCSTRING("BITS","\x06","\xc3","\xd7","\x2b")},
	{hx::fsInt,(void *) &AL_obj::CHANNELS,HX_HCSTRING("CHANNELS","\x50","\x3a","\x74","\xc4")},
	{hx::fsInt,(void *) &AL_obj::SIZE,HX_HCSTRING("SIZE","\xc1","\x68","\x14","\x37")},
	{hx::fsInt,(void *) &AL_obj::NO_ERROR,HX_HCSTRING("NO_ERROR","\xea","\xb5","\x7d","\x2f")},
	{hx::fsInt,(void *) &AL_obj::INVALID_NAME,HX_HCSTRING("INVALID_NAME","\xf3","\x7b","\x59","\x19")},
	{hx::fsInt,(void *) &AL_obj::INVALID_ENUM,HX_HCSTRING("INVALID_ENUM","\xa9","\x74","\x70","\x13")},
	{hx::fsInt,(void *) &AL_obj::INVALID_VALUE,HX_HCSTRING("INVALID_VALUE","\xa9","\xe8","\x26","\xb0")},
	{hx::fsInt,(void *) &AL_obj::INVALID_OPERATION,HX_HCSTRING("INVALID_OPERATION","\x5f","\xb1","\xc8","\x29")},
	{hx::fsInt,(void *) &AL_obj::OUT_OF_MEMORY,HX_HCSTRING("OUT_OF_MEMORY","\x18","\xf2","\x97","\xe1")},
	{hx::fsInt,(void *) &AL_obj::VENDOR,HX_HCSTRING("VENDOR","\x88","\x91","\x19","\x51")},
	{hx::fsInt,(void *) &AL_obj::VERSION,HX_HCSTRING("VERSION","\xf8","\xba","\xc5","\xfc")},
	{hx::fsInt,(void *) &AL_obj::RENDERER,HX_HCSTRING("RENDERER","\x43","\x55","\x61","\x0c")},
	{hx::fsInt,(void *) &AL_obj::EXTENSIONS,HX_HCSTRING("EXTENSIONS","\x14","\xf0","\x79","\x7b")},
	{hx::fsInt,(void *) &AL_obj::DOPPLER_FACTOR,HX_HCSTRING("DOPPLER_FACTOR","\xe0","\x6d","\x21","\x56")},
	{hx::fsInt,(void *) &AL_obj::SPEED_OF_SOUND,HX_HCSTRING("SPEED_OF_SOUND","\x5f","\x3f","\x54","\xba")},
	{hx::fsInt,(void *) &AL_obj::DOPPLER_VELOCITY,HX_HCSTRING("DOPPLER_VELOCITY","\x6e","\xe1","\x7d","\x1d")},
	{hx::fsInt,(void *) &AL_obj::DISTANCE_MODEL,HX_HCSTRING("DISTANCE_MODEL","\xbf","\x9b","\x1a","\x00")},
	{hx::fsInt,(void *) &AL_obj::INVERSE_DISTANCE,HX_HCSTRING("INVERSE_DISTANCE","\x04","\x89","\x17","\x1d")},
	{hx::fsInt,(void *) &AL_obj::INVERSE_DISTANCE_CLAMPED,HX_HCSTRING("INVERSE_DISTANCE_CLAMPED","\x7f","\x1a","\x32","\x28")},
	{hx::fsInt,(void *) &AL_obj::LINEAR_DISTANCE,HX_HCSTRING("LINEAR_DISTANCE","\x0f","\xb8","\xc7","\x14")},
	{hx::fsInt,(void *) &AL_obj::LINEAR_DISTANCE_CLAMPED,HX_HCSTRING("LINEAR_DISTANCE_CLAMPED","\x8a","\xcc","\x88","\xb2")},
	{hx::fsInt,(void *) &AL_obj::EXPONENT_DISTANCE,HX_HCSTRING("EXPONENT_DISTANCE","\x45","\x4a","\xec","\xc8")},
	{hx::fsInt,(void *) &AL_obj::EXPONENT_DISTANCE_CLAMPED,HX_HCSTRING("EXPONENT_DISTANCE_CLAMPED","\xc0","\x84","\x7b","\x57")},
	{ hx::fsUnknown, 0, null()}
};
#endif

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(AL_obj::__mClass,"__mClass");
	HX_MARK_MEMBER_NAME(AL_obj::NONE,"NONE");
	HX_MARK_MEMBER_NAME(AL_obj::FALSE,"FALSE");
	HX_MARK_MEMBER_NAME(AL_obj::TRUE,"TRUE");
	HX_MARK_MEMBER_NAME(AL_obj::SOURCE_RELATIVE,"SOURCE_RELATIVE");
	HX_MARK_MEMBER_NAME(AL_obj::CONE_INNER_ANGLE,"CONE_INNER_ANGLE");
	HX_MARK_MEMBER_NAME(AL_obj::CONE_OUTER_ANGLE,"CONE_OUTER_ANGLE");
	HX_MARK_MEMBER_NAME(AL_obj::PITCH,"PITCH");
	HX_MARK_MEMBER_NAME(AL_obj::POSITION,"POSITION");
	HX_MARK_MEMBER_NAME(AL_obj::DIRECTION,"DIRECTION");
	HX_MARK_MEMBER_NAME(AL_obj::VELOCITY,"VELOCITY");
	HX_MARK_MEMBER_NAME(AL_obj::LOOPING,"LOOPING");
	HX_MARK_MEMBER_NAME(AL_obj::BUFFER,"BUFFER");
	HX_MARK_MEMBER_NAME(AL_obj::GAIN,"GAIN");
	HX_MARK_MEMBER_NAME(AL_obj::MIN_GAIN,"MIN_GAIN");
	HX_MARK_MEMBER_NAME(AL_obj::MAX_GAIN,"MAX_GAIN");
	HX_MARK_MEMBER_NAME(AL_obj::ORIENTATION,"ORIENTATION");
	HX_MARK_MEMBER_NAME(AL_obj::SOURCE_STATE,"SOURCE_STATE");
	HX_MARK_MEMBER_NAME(AL_obj::INITIAL,"INITIAL");
	HX_MARK_MEMBER_NAME(AL_obj::PLAYING,"PLAYING");
	HX_MARK_MEMBER_NAME(AL_obj::PAUSED,"PAUSED");
	HX_MARK_MEMBER_NAME(AL_obj::STOPPED,"STOPPED");
	HX_MARK_MEMBER_NAME(AL_obj::BUFFERS_QUEUED,"BUFFERS_QUEUED");
	HX_MARK_MEMBER_NAME(AL_obj::BUFFERS_PROCESSED,"BUFFERS_PROCESSED");
	HX_MARK_MEMBER_NAME(AL_obj::REFERENCE_DISTANCE,"REFERENCE_DISTANCE");
	HX_MARK_MEMBER_NAME(AL_obj::ROLLOFF_FACTOR,"ROLLOFF_FACTOR");
	HX_MARK_MEMBER_NAME(AL_obj::CONE_OUTER_GAIN,"CONE_OUTER_GAIN");
	HX_MARK_MEMBER_NAME(AL_obj::MAX_DISTANCE,"MAX_DISTANCE");
	HX_MARK_MEMBER_NAME(AL_obj::SEC_OFFSET,"SEC_OFFSET");
	HX_MARK_MEMBER_NAME(AL_obj::SAMPLE_OFFSET,"SAMPLE_OFFSET");
	HX_MARK_MEMBER_NAME(AL_obj::BYTE_OFFSET,"BYTE_OFFSET");
	HX_MARK_MEMBER_NAME(AL_obj::SOURCE_TYPE,"SOURCE_TYPE");
	HX_MARK_MEMBER_NAME(AL_obj::STATIC,"STATIC");
	HX_MARK_MEMBER_NAME(AL_obj::STREAMING,"STREAMING");
	HX_MARK_MEMBER_NAME(AL_obj::UNDETERMINED,"UNDETERMINED");
	HX_MARK_MEMBER_NAME(AL_obj::FORMAT_MONO8,"FORMAT_MONO8");
	HX_MARK_MEMBER_NAME(AL_obj::FORMAT_MONO16,"FORMAT_MONO16");
	HX_MARK_MEMBER_NAME(AL_obj::FORMAT_STEREO8,"FORMAT_STEREO8");
	HX_MARK_MEMBER_NAME(AL_obj::FORMAT_STEREO16,"FORMAT_STEREO16");
	HX_MARK_MEMBER_NAME(AL_obj::FREQUENCY,"FREQUENCY");
	HX_MARK_MEMBER_NAME(AL_obj::BITS,"BITS");
	HX_MARK_MEMBER_NAME(AL_obj::CHANNELS,"CHANNELS");
	HX_MARK_MEMBER_NAME(AL_obj::SIZE,"SIZE");
	HX_MARK_MEMBER_NAME(AL_obj::NO_ERROR,"NO_ERROR");
	HX_MARK_MEMBER_NAME(AL_obj::INVALID_NAME,"INVALID_NAME");
	HX_MARK_MEMBER_NAME(AL_obj::INVALID_ENUM,"INVALID_ENUM");
	HX_MARK_MEMBER_NAME(AL_obj::INVALID_VALUE,"INVALID_VALUE");
	HX_MARK_MEMBER_NAME(AL_obj::INVALID_OPERATION,"INVALID_OPERATION");
	HX_MARK_MEMBER_NAME(AL_obj::OUT_OF_MEMORY,"OUT_OF_MEMORY");
	HX_MARK_MEMBER_NAME(AL_obj::VENDOR,"VENDOR");
	HX_MARK_MEMBER_NAME(AL_obj::VERSION,"VERSION");
	HX_MARK_MEMBER_NAME(AL_obj::RENDERER,"RENDERER");
	HX_MARK_MEMBER_NAME(AL_obj::EXTENSIONS,"EXTENSIONS");
	HX_MARK_MEMBER_NAME(AL_obj::DOPPLER_FACTOR,"DOPPLER_FACTOR");
	HX_MARK_MEMBER_NAME(AL_obj::SPEED_OF_SOUND,"SPEED_OF_SOUND");
	HX_MARK_MEMBER_NAME(AL_obj::DOPPLER_VELOCITY,"DOPPLER_VELOCITY");
	HX_MARK_MEMBER_NAME(AL_obj::DISTANCE_MODEL,"DISTANCE_MODEL");
	HX_MARK_MEMBER_NAME(AL_obj::INVERSE_DISTANCE,"INVERSE_DISTANCE");
	HX_MARK_MEMBER_NAME(AL_obj::INVERSE_DISTANCE_CLAMPED,"INVERSE_DISTANCE_CLAMPED");
	HX_MARK_MEMBER_NAME(AL_obj::LINEAR_DISTANCE,"LINEAR_DISTANCE");
	HX_MARK_MEMBER_NAME(AL_obj::LINEAR_DISTANCE_CLAMPED,"LINEAR_DISTANCE_CLAMPED");
	HX_MARK_MEMBER_NAME(AL_obj::EXPONENT_DISTANCE,"EXPONENT_DISTANCE");
	HX_MARK_MEMBER_NAME(AL_obj::EXPONENT_DISTANCE_CLAMPED,"EXPONENT_DISTANCE_CLAMPED");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(AL_obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(AL_obj::NONE,"NONE");
	HX_VISIT_MEMBER_NAME(AL_obj::FALSE,"FALSE");
	HX_VISIT_MEMBER_NAME(AL_obj::TRUE,"TRUE");
	HX_VISIT_MEMBER_NAME(AL_obj::SOURCE_RELATIVE,"SOURCE_RELATIVE");
	HX_VISIT_MEMBER_NAME(AL_obj::CONE_INNER_ANGLE,"CONE_INNER_ANGLE");
	HX_VISIT_MEMBER_NAME(AL_obj::CONE_OUTER_ANGLE,"CONE_OUTER_ANGLE");
	HX_VISIT_MEMBER_NAME(AL_obj::PITCH,"PITCH");
	HX_VISIT_MEMBER_NAME(AL_obj::POSITION,"POSITION");
	HX_VISIT_MEMBER_NAME(AL_obj::DIRECTION,"DIRECTION");
	HX_VISIT_MEMBER_NAME(AL_obj::VELOCITY,"VELOCITY");
	HX_VISIT_MEMBER_NAME(AL_obj::LOOPING,"LOOPING");
	HX_VISIT_MEMBER_NAME(AL_obj::BUFFER,"BUFFER");
	HX_VISIT_MEMBER_NAME(AL_obj::GAIN,"GAIN");
	HX_VISIT_MEMBER_NAME(AL_obj::MIN_GAIN,"MIN_GAIN");
	HX_VISIT_MEMBER_NAME(AL_obj::MAX_GAIN,"MAX_GAIN");
	HX_VISIT_MEMBER_NAME(AL_obj::ORIENTATION,"ORIENTATION");
	HX_VISIT_MEMBER_NAME(AL_obj::SOURCE_STATE,"SOURCE_STATE");
	HX_VISIT_MEMBER_NAME(AL_obj::INITIAL,"INITIAL");
	HX_VISIT_MEMBER_NAME(AL_obj::PLAYING,"PLAYING");
	HX_VISIT_MEMBER_NAME(AL_obj::PAUSED,"PAUSED");
	HX_VISIT_MEMBER_NAME(AL_obj::STOPPED,"STOPPED");
	HX_VISIT_MEMBER_NAME(AL_obj::BUFFERS_QUEUED,"BUFFERS_QUEUED");
	HX_VISIT_MEMBER_NAME(AL_obj::BUFFERS_PROCESSED,"BUFFERS_PROCESSED");
	HX_VISIT_MEMBER_NAME(AL_obj::REFERENCE_DISTANCE,"REFERENCE_DISTANCE");
	HX_VISIT_MEMBER_NAME(AL_obj::ROLLOFF_FACTOR,"ROLLOFF_FACTOR");
	HX_VISIT_MEMBER_NAME(AL_obj::CONE_OUTER_GAIN,"CONE_OUTER_GAIN");
	HX_VISIT_MEMBER_NAME(AL_obj::MAX_DISTANCE,"MAX_DISTANCE");
	HX_VISIT_MEMBER_NAME(AL_obj::SEC_OFFSET,"SEC_OFFSET");
	HX_VISIT_MEMBER_NAME(AL_obj::SAMPLE_OFFSET,"SAMPLE_OFFSET");
	HX_VISIT_MEMBER_NAME(AL_obj::BYTE_OFFSET,"BYTE_OFFSET");
	HX_VISIT_MEMBER_NAME(AL_obj::SOURCE_TYPE,"SOURCE_TYPE");
	HX_VISIT_MEMBER_NAME(AL_obj::STATIC,"STATIC");
	HX_VISIT_MEMBER_NAME(AL_obj::STREAMING,"STREAMING");
	HX_VISIT_MEMBER_NAME(AL_obj::UNDETERMINED,"UNDETERMINED");
	HX_VISIT_MEMBER_NAME(AL_obj::FORMAT_MONO8,"FORMAT_MONO8");
	HX_VISIT_MEMBER_NAME(AL_obj::FORMAT_MONO16,"FORMAT_MONO16");
	HX_VISIT_MEMBER_NAME(AL_obj::FORMAT_STEREO8,"FORMAT_STEREO8");
	HX_VISIT_MEMBER_NAME(AL_obj::FORMAT_STEREO16,"FORMAT_STEREO16");
	HX_VISIT_MEMBER_NAME(AL_obj::FREQUENCY,"FREQUENCY");
	HX_VISIT_MEMBER_NAME(AL_obj::BITS,"BITS");
	HX_VISIT_MEMBER_NAME(AL_obj::CHANNELS,"CHANNELS");
	HX_VISIT_MEMBER_NAME(AL_obj::SIZE,"SIZE");
	HX_VISIT_MEMBER_NAME(AL_obj::NO_ERROR,"NO_ERROR");
	HX_VISIT_MEMBER_NAME(AL_obj::INVALID_NAME,"INVALID_NAME");
	HX_VISIT_MEMBER_NAME(AL_obj::INVALID_ENUM,"INVALID_ENUM");
	HX_VISIT_MEMBER_NAME(AL_obj::INVALID_VALUE,"INVALID_VALUE");
	HX_VISIT_MEMBER_NAME(AL_obj::INVALID_OPERATION,"INVALID_OPERATION");
	HX_VISIT_MEMBER_NAME(AL_obj::OUT_OF_MEMORY,"OUT_OF_MEMORY");
	HX_VISIT_MEMBER_NAME(AL_obj::VENDOR,"VENDOR");
	HX_VISIT_MEMBER_NAME(AL_obj::VERSION,"VERSION");
	HX_VISIT_MEMBER_NAME(AL_obj::RENDERER,"RENDERER");
	HX_VISIT_MEMBER_NAME(AL_obj::EXTENSIONS,"EXTENSIONS");
	HX_VISIT_MEMBER_NAME(AL_obj::DOPPLER_FACTOR,"DOPPLER_FACTOR");
	HX_VISIT_MEMBER_NAME(AL_obj::SPEED_OF_SOUND,"SPEED_OF_SOUND");
	HX_VISIT_MEMBER_NAME(AL_obj::DOPPLER_VELOCITY,"DOPPLER_VELOCITY");
	HX_VISIT_MEMBER_NAME(AL_obj::DISTANCE_MODEL,"DISTANCE_MODEL");
	HX_VISIT_MEMBER_NAME(AL_obj::INVERSE_DISTANCE,"INVERSE_DISTANCE");
	HX_VISIT_MEMBER_NAME(AL_obj::INVERSE_DISTANCE_CLAMPED,"INVERSE_DISTANCE_CLAMPED");
	HX_VISIT_MEMBER_NAME(AL_obj::LINEAR_DISTANCE,"LINEAR_DISTANCE");
	HX_VISIT_MEMBER_NAME(AL_obj::LINEAR_DISTANCE_CLAMPED,"LINEAR_DISTANCE_CLAMPED");
	HX_VISIT_MEMBER_NAME(AL_obj::EXPONENT_DISTANCE,"EXPONENT_DISTANCE");
	HX_VISIT_MEMBER_NAME(AL_obj::EXPONENT_DISTANCE_CLAMPED,"EXPONENT_DISTANCE_CLAMPED");
};

#endif

hx::Class AL_obj::__mClass;

static ::String sStaticFields[] = {
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
	HX_HCSTRING("createBuffer","\x1c","\xfd","\xe9","\xf2"),
	HX_HCSTRING("createSource","\xf7","\xf0","\x86","\x54"),
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
	HX_HCSTRING("getParameter","\x33","\xd2","\x06","\x58"),
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

void AL_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("lime.media.openal.AL","\x21","\x39","\x77","\x65");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &AL_obj::__GetStatic;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(sStaticFields);
	__mClass->mMembers = hx::Class_obj::dupFunctions(0 /* sMemberFields */);
	__mClass->mCanCast = hx::TCanCast< AL_obj >;
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

void AL_obj::__boot()
{
	NONE= (int)0;
	FALSE= (int)0;
	TRUE= (int)1;
	SOURCE_RELATIVE= (int)514;
	CONE_INNER_ANGLE= (int)4097;
	CONE_OUTER_ANGLE= (int)4098;
	PITCH= (int)4099;
	POSITION= (int)4100;
	DIRECTION= (int)4101;
	VELOCITY= (int)4102;
	LOOPING= (int)4103;
	BUFFER= (int)4105;
	GAIN= (int)4106;
	MIN_GAIN= (int)4109;
	MAX_GAIN= (int)4110;
	ORIENTATION= (int)4111;
	SOURCE_STATE= (int)4112;
	INITIAL= (int)4113;
	PLAYING= (int)4114;
	PAUSED= (int)4115;
	STOPPED= (int)4116;
	BUFFERS_QUEUED= (int)4117;
	BUFFERS_PROCESSED= (int)4118;
	REFERENCE_DISTANCE= (int)4128;
	ROLLOFF_FACTOR= (int)4129;
	CONE_OUTER_GAIN= (int)4130;
	MAX_DISTANCE= (int)4131;
	SEC_OFFSET= (int)4132;
	SAMPLE_OFFSET= (int)4133;
	BYTE_OFFSET= (int)4134;
	SOURCE_TYPE= (int)4135;
	STATIC= (int)4136;
	STREAMING= (int)4137;
	UNDETERMINED= (int)4144;
	FORMAT_MONO8= (int)4352;
	FORMAT_MONO16= (int)4353;
	FORMAT_STEREO8= (int)4354;
	FORMAT_STEREO16= (int)4355;
	FREQUENCY= (int)8193;
	BITS= (int)8194;
	CHANNELS= (int)8195;
	SIZE= (int)8196;
	NO_ERROR= (int)0;
	INVALID_NAME= (int)40961;
	INVALID_ENUM= (int)40962;
	INVALID_VALUE= (int)40963;
	INVALID_OPERATION= (int)40964;
	OUT_OF_MEMORY= (int)40965;
	VENDOR= (int)45057;
	VERSION= (int)45058;
	RENDERER= (int)45059;
	EXTENSIONS= (int)45060;
	DOPPLER_FACTOR= (int)49152;
	SPEED_OF_SOUND= (int)49155;
	DOPPLER_VELOCITY= (int)49153;
	DISTANCE_MODEL= (int)53248;
	INVERSE_DISTANCE= (int)53249;
	INVERSE_DISTANCE_CLAMPED= (int)53250;
	LINEAR_DISTANCE= (int)53251;
	LINEAR_DISTANCE_CLAMPED= (int)53252;
	EXPONENT_DISTANCE= (int)53253;
	EXPONENT_DISTANCE_CLAMPED= (int)53254;
}

} // end namespace lime
} // end namespace media
} // end namespace openal
