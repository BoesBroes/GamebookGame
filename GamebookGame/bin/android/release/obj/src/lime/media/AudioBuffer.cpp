#include <hxcpp.h>

#ifndef INCLUDED_Std
#include <Std.h>
#endif
#ifndef INCLUDED_haxe_io_Bytes
#include <haxe/io/Bytes.h>
#endif
#ifndef INCLUDED_lime__backend_native_NativeCFFI
#include <lime/_backend/native/NativeCFFI.h>
#endif
#ifndef INCLUDED_lime_app_Future
#include <lime/app/Future.h>
#endif
#ifndef INCLUDED_lime_app_Promise_lime_media_AudioBuffer
#include <lime/app/Promise_lime_media_AudioBuffer.h>
#endif
#ifndef INCLUDED_lime_media_AudioBuffer
#include <lime/media/AudioBuffer.h>
#endif
#ifndef INCLUDED_lime_media_codecs_vorbis_VorbisFile
#include <lime/media/codecs/vorbis/VorbisFile.h>
#endif
#ifndef INCLUDED_lime_media_codecs_vorbis_VorbisInfo
#include <lime/media/codecs/vorbis/VorbisInfo.h>
#endif
#ifndef INCLUDED_lime_net__HTTPRequest_AbstractHTTPRequest
#include <lime/net/_HTTPRequest/AbstractHTTPRequest.h>
#endif
#ifndef INCLUDED_lime_net__HTTPRequest_Bytes
#include <lime/net/_HTTPRequest_Bytes.h>
#endif
#ifndef INCLUDED_lime_net__HTTPRequest_lime_media_AudioBuffer
#include <lime/net/_HTTPRequest_lime_media_AudioBuffer.h>
#endif
#ifndef INCLUDED_lime_net__IHTTPRequest
#include <lime/net/_IHTTPRequest.h>
#endif
#ifndef INCLUDED_lime_utils_ArrayBufferView
#include <lime/utils/ArrayBufferView.h>
#endif
#ifndef INCLUDED_lime_utils_TAError
#include <lime/utils/TAError.h>
#endif
#ifndef INCLUDED_openfl__Vector_IVector
#include <openfl/_Vector/IVector.h>
#endif
#ifndef INCLUDED_openfl__Vector_IntVector
#include <openfl/_Vector/IntVector.h>
#endif
namespace lime{
namespace media{

Void AudioBuffer_obj::__construct()
{
{
}
;
	return null();
}

//AudioBuffer_obj::~AudioBuffer_obj() { }

Dynamic AudioBuffer_obj::__CreateEmpty() { return  new AudioBuffer_obj; }
hx::ObjectPtr< AudioBuffer_obj > AudioBuffer_obj::__new()
{  hx::ObjectPtr< AudioBuffer_obj > _result_ = new AudioBuffer_obj();
	_result_->__construct();
	return _result_;}

Dynamic AudioBuffer_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< AudioBuffer_obj > _result_ = new AudioBuffer_obj();
	_result_->__construct();
	return _result_;}

Void AudioBuffer_obj::dispose( ){
{
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(AudioBuffer_obj,dispose,(void))

Dynamic AudioBuffer_obj::get_src( ){
	::lime::media::codecs::vorbis::VorbisFile tmp = this->__srcVorbisFile;
	return tmp;
}


HX_DEFINE_DYNAMIC_FUNC0(AudioBuffer_obj,get_src,return )

Dynamic AudioBuffer_obj::set_src( Dynamic value){
	::lime::media::codecs::vorbis::VorbisFile tmp = this->__srcVorbisFile = value;
	return tmp;
}


HX_DEFINE_DYNAMIC_FUNC1(AudioBuffer_obj,set_src,return )

::lime::media::AudioBuffer AudioBuffer_obj::fromBytes( ::haxe::io::Bytes bytes){
	bool tmp = (bytes == null());
	if ((tmp)){
		return null();
	}
	::lime::media::AudioBuffer tmp1 = ::lime::media::AudioBuffer_obj::__new();
	::lime::media::AudioBuffer audioBuffer = tmp1;
	::lime::utils::ArrayBufferView tmp2;
	{
		::haxe::io::Bytes tmp3 = ::haxe::io::Bytes_obj::alloc((int)0);
		::haxe::io::Bytes buffer = tmp3;
		::lime::utils::ArrayBufferView this1;
		bool tmp4 = false;
		if ((tmp4)){
			::lime::utils::ArrayBufferView tmp5 = ::lime::utils::ArrayBufferView_obj::__new(null(),(int)4);
			this1 = tmp5;
		}
		else{
			bool tmp5 = false;
			if ((tmp5)){
				::lime::utils::ArrayBufferView tmp6;
				{
					::lime::utils::ArrayBufferView tmp7 = ::lime::utils::ArrayBufferView_obj::__new((int)0,(int)4);
					::lime::utils::ArrayBufferView _this = tmp7;
					_this->byteOffset = (int)0;
					int tmp8 = hx::Throw(HX_CSTRING("Invalid field access on null object"));
					_this->length = tmp8;
					int tmp9 = (_this->length * _this->bytesPerElement);
					_this->byteLength = tmp9;
					::haxe::io::Bytes tmp10;
					{
						::haxe::io::Bytes this2;
						int tmp11 = _this->byteLength;
						::haxe::io::Bytes tmp12 = ::haxe::io::Bytes_obj::alloc(tmp11);
						this2 = tmp12;
						tmp10 = this2;
					}
					_this->buffer = tmp10;
					_this->copyFromArray(((Array< Float >)(null())),null());
					tmp6 = _this;
				}
				this1 = tmp6;
			}
			else{
				bool tmp6 = false;
				if ((tmp6)){
					::lime::utils::ArrayBufferView tmp7;
					{
						::lime::utils::ArrayBufferView tmp8 = ::lime::utils::ArrayBufferView_obj::__new((int)0,(int)4);
						::lime::utils::ArrayBufferView _this = tmp8;
						cpp::ArrayBase array = hx::Throw(HX_CSTRING("Invalid field access on null object"));
						_this->byteOffset = (int)0;
						_this->length = array->__Field(HX_HCSTRING("length","\xe6","\x94","\x07","\x9f"), hx::paccDynamic );
						int tmp9 = (_this->length * _this->bytesPerElement);
						_this->byteLength = tmp9;
						::haxe::io::Bytes tmp10;
						{
							::haxe::io::Bytes this2;
							int tmp11 = _this->byteLength;
							::haxe::io::Bytes tmp12 = ::haxe::io::Bytes_obj::alloc(tmp11);
							this2 = tmp12;
							tmp10 = this2;
						}
						_this->buffer = tmp10;
						_this->copyFromArray(((Array< Float >)(array)),null());
						tmp7 = _this;
					}
					this1 = tmp7;
				}
				else{
					bool tmp7 = false;
					if ((tmp7)){
						::lime::utils::ArrayBufferView tmp8;
						{
							::lime::utils::ArrayBufferView tmp9 = ::lime::utils::ArrayBufferView_obj::__new((int)0,(int)4);
							::lime::utils::ArrayBufferView _this = tmp9;
							::haxe::io::Bytes tmp10 = hx::Throw(HX_CSTRING("Invalid field access on null object"));
							::haxe::io::Bytes srcData = tmp10;
							int tmp11 = hx::Throw(HX_CSTRING("Invalid field access on null object"));
							int srcLength = tmp11;
							int tmp12 = hx::Throw(HX_CSTRING("Invalid field access on null object"));
							int srcByteOffset = tmp12;
							int tmp13 = hx::Throw(HX_CSTRING("Invalid field access on null object"));
							int srcElementSize = tmp13;
							int elementSize = _this->bytesPerElement;
							int tmp14 = hx::Throw(HX_CSTRING("Invalid field access on null object"));
							int tmp15 = _this->type;
							bool tmp16 = (tmp14 == tmp15);
							if ((tmp16)){
								int srcLength1 = srcData->length;
								int tmp17 = (srcLength1 - srcByteOffset);
								int cloneLength = tmp17;
								::haxe::io::Bytes tmp18;
								{
									::haxe::io::Bytes this2;
									int tmp19 = cloneLength;
									::haxe::io::Bytes tmp20 = ::haxe::io::Bytes_obj::alloc(tmp19);
									this2 = tmp20;
									tmp18 = this2;
								}
								_this->buffer = tmp18;
								::haxe::io::Bytes tmp19 = srcData;
								int tmp20 = srcByteOffset;
								int tmp21 = cloneLength;
								_this->buffer->blit((int)0,tmp19,tmp20,tmp21);
							}
							else{
								HX_STACK_DO_THROW(HX_HCSTRING("unimplemented","\x09","\x2f","\x74","\xb4"));
							}
							int tmp17 = (_this->bytesPerElement * srcLength);
							_this->byteLength = tmp17;
							_this->byteOffset = (int)0;
							_this->length = srcLength;
							tmp8 = _this;
						}
						this1 = tmp8;
					}
					else{
						bool tmp8 = (buffer != null());
						if ((tmp8)){
							::lime::utils::ArrayBufferView tmp9;
							{
								::lime::utils::ArrayBufferView tmp10 = ::lime::utils::ArrayBufferView_obj::__new((int)0,(int)4);
								::lime::utils::ArrayBufferView _this = tmp10;
								int in_byteOffset = (int)0;
								bool tmp11 = (in_byteOffset < (int)0);
								if ((tmp11)){
									HX_STACK_DO_THROW(::lime::utils::TAError_obj::RangeError);
								}
								int tmp12 = hx::Mod(in_byteOffset,_this->bytesPerElement);
								bool tmp13 = (tmp12 != (int)0);
								if ((tmp13)){
									HX_STACK_DO_THROW(::lime::utils::TAError_obj::RangeError);
								}
								int bufferByteLength = buffer->length;
								int elementSize = _this->bytesPerElement;
								int newByteLength = bufferByteLength;
								bool tmp14 = true;
								if ((tmp14)){
									int tmp15 = (bufferByteLength - in_byteOffset);
									newByteLength = tmp15;
									int tmp16 = hx::Mod(bufferByteLength,_this->bytesPerElement);
									bool tmp17 = (tmp16 != (int)0);
									if ((tmp17)){
										HX_STACK_DO_THROW(::lime::utils::TAError_obj::RangeError);
									}
									bool tmp18 = (newByteLength < (int)0);
									if ((tmp18)){
										HX_STACK_DO_THROW(::lime::utils::TAError_obj::RangeError);
									}
								}
								else{
									int tmp15 = (null() * _this->bytesPerElement);
									newByteLength = tmp15;
									int tmp16 = (in_byteOffset + newByteLength);
									int newRange = tmp16;
									bool tmp17 = (newRange > bufferByteLength);
									if ((tmp17)){
										HX_STACK_DO_THROW(::lime::utils::TAError_obj::RangeError);
									}
								}
								_this->buffer = buffer;
								_this->byteOffset = in_byteOffset;
								_this->byteLength = newByteLength;
								Float tmp15 = (Float(newByteLength) / Float(_this->bytesPerElement));
								int tmp16 = ::Std_obj::_int(tmp15);
								_this->length = tmp16;
								tmp9 = _this;
							}
							this1 = tmp9;
						}
						else{
							HX_STACK_DO_THROW(HX_HCSTRING("Invalid constructor arguments for UInt8Array","\x6b","\x44","\xd5","\x85"));
						}
					}
				}
			}
		}
		tmp2 = this1;
	}
	audioBuffer->data = tmp2;
	return ((Dynamic)(::lime::_backend::native::NativeCFFI_obj::cffi_lime_audio_load.call(hx::DynamicPtr(bytes),hx::DynamicPtr(audioBuffer))));
	return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(AudioBuffer_obj,fromBytes,return )

::lime::media::AudioBuffer AudioBuffer_obj::fromFile( ::String path){
	bool tmp = (path == null());
	if ((tmp)){
		return null();
	}
	::lime::media::AudioBuffer tmp1 = ::lime::media::AudioBuffer_obj::__new();
	::lime::media::AudioBuffer audioBuffer = tmp1;
	::lime::utils::ArrayBufferView tmp2;
	{
		::haxe::io::Bytes tmp3 = ::haxe::io::Bytes_obj::alloc((int)0);
		::haxe::io::Bytes buffer = tmp3;
		::lime::utils::ArrayBufferView this1;
		bool tmp4 = false;
		if ((tmp4)){
			::lime::utils::ArrayBufferView tmp5 = ::lime::utils::ArrayBufferView_obj::__new(null(),(int)4);
			this1 = tmp5;
		}
		else{
			bool tmp5 = false;
			if ((tmp5)){
				::lime::utils::ArrayBufferView tmp6;
				{
					::lime::utils::ArrayBufferView tmp7 = ::lime::utils::ArrayBufferView_obj::__new((int)0,(int)4);
					::lime::utils::ArrayBufferView _this = tmp7;
					_this->byteOffset = (int)0;
					int tmp8 = hx::Throw(HX_CSTRING("Invalid field access on null object"));
					_this->length = tmp8;
					int tmp9 = (_this->length * _this->bytesPerElement);
					_this->byteLength = tmp9;
					::haxe::io::Bytes tmp10;
					{
						::haxe::io::Bytes this2;
						int tmp11 = _this->byteLength;
						::haxe::io::Bytes tmp12 = ::haxe::io::Bytes_obj::alloc(tmp11);
						this2 = tmp12;
						tmp10 = this2;
					}
					_this->buffer = tmp10;
					_this->copyFromArray(((Array< Float >)(null())),null());
					tmp6 = _this;
				}
				this1 = tmp6;
			}
			else{
				bool tmp6 = false;
				if ((tmp6)){
					::lime::utils::ArrayBufferView tmp7;
					{
						::lime::utils::ArrayBufferView tmp8 = ::lime::utils::ArrayBufferView_obj::__new((int)0,(int)4);
						::lime::utils::ArrayBufferView _this = tmp8;
						cpp::ArrayBase array = hx::Throw(HX_CSTRING("Invalid field access on null object"));
						_this->byteOffset = (int)0;
						_this->length = array->__Field(HX_HCSTRING("length","\xe6","\x94","\x07","\x9f"), hx::paccDynamic );
						int tmp9 = (_this->length * _this->bytesPerElement);
						_this->byteLength = tmp9;
						::haxe::io::Bytes tmp10;
						{
							::haxe::io::Bytes this2;
							int tmp11 = _this->byteLength;
							::haxe::io::Bytes tmp12 = ::haxe::io::Bytes_obj::alloc(tmp11);
							this2 = tmp12;
							tmp10 = this2;
						}
						_this->buffer = tmp10;
						_this->copyFromArray(((Array< Float >)(array)),null());
						tmp7 = _this;
					}
					this1 = tmp7;
				}
				else{
					bool tmp7 = false;
					if ((tmp7)){
						::lime::utils::ArrayBufferView tmp8;
						{
							::lime::utils::ArrayBufferView tmp9 = ::lime::utils::ArrayBufferView_obj::__new((int)0,(int)4);
							::lime::utils::ArrayBufferView _this = tmp9;
							::haxe::io::Bytes tmp10 = hx::Throw(HX_CSTRING("Invalid field access on null object"));
							::haxe::io::Bytes srcData = tmp10;
							int tmp11 = hx::Throw(HX_CSTRING("Invalid field access on null object"));
							int srcLength = tmp11;
							int tmp12 = hx::Throw(HX_CSTRING("Invalid field access on null object"));
							int srcByteOffset = tmp12;
							int tmp13 = hx::Throw(HX_CSTRING("Invalid field access on null object"));
							int srcElementSize = tmp13;
							int elementSize = _this->bytesPerElement;
							int tmp14 = hx::Throw(HX_CSTRING("Invalid field access on null object"));
							int tmp15 = _this->type;
							bool tmp16 = (tmp14 == tmp15);
							if ((tmp16)){
								int srcLength1 = srcData->length;
								int tmp17 = (srcLength1 - srcByteOffset);
								int cloneLength = tmp17;
								::haxe::io::Bytes tmp18;
								{
									::haxe::io::Bytes this2;
									int tmp19 = cloneLength;
									::haxe::io::Bytes tmp20 = ::haxe::io::Bytes_obj::alloc(tmp19);
									this2 = tmp20;
									tmp18 = this2;
								}
								_this->buffer = tmp18;
								::haxe::io::Bytes tmp19 = srcData;
								int tmp20 = srcByteOffset;
								int tmp21 = cloneLength;
								_this->buffer->blit((int)0,tmp19,tmp20,tmp21);
							}
							else{
								HX_STACK_DO_THROW(HX_HCSTRING("unimplemented","\x09","\x2f","\x74","\xb4"));
							}
							int tmp17 = (_this->bytesPerElement * srcLength);
							_this->byteLength = tmp17;
							_this->byteOffset = (int)0;
							_this->length = srcLength;
							tmp8 = _this;
						}
						this1 = tmp8;
					}
					else{
						bool tmp8 = (buffer != null());
						if ((tmp8)){
							::lime::utils::ArrayBufferView tmp9;
							{
								::lime::utils::ArrayBufferView tmp10 = ::lime::utils::ArrayBufferView_obj::__new((int)0,(int)4);
								::lime::utils::ArrayBufferView _this = tmp10;
								int in_byteOffset = (int)0;
								bool tmp11 = (in_byteOffset < (int)0);
								if ((tmp11)){
									HX_STACK_DO_THROW(::lime::utils::TAError_obj::RangeError);
								}
								int tmp12 = hx::Mod(in_byteOffset,_this->bytesPerElement);
								bool tmp13 = (tmp12 != (int)0);
								if ((tmp13)){
									HX_STACK_DO_THROW(::lime::utils::TAError_obj::RangeError);
								}
								int bufferByteLength = buffer->length;
								int elementSize = _this->bytesPerElement;
								int newByteLength = bufferByteLength;
								bool tmp14 = true;
								if ((tmp14)){
									int tmp15 = (bufferByteLength - in_byteOffset);
									newByteLength = tmp15;
									int tmp16 = hx::Mod(bufferByteLength,_this->bytesPerElement);
									bool tmp17 = (tmp16 != (int)0);
									if ((tmp17)){
										HX_STACK_DO_THROW(::lime::utils::TAError_obj::RangeError);
									}
									bool tmp18 = (newByteLength < (int)0);
									if ((tmp18)){
										HX_STACK_DO_THROW(::lime::utils::TAError_obj::RangeError);
									}
								}
								else{
									int tmp15 = (null() * _this->bytesPerElement);
									newByteLength = tmp15;
									int tmp16 = (in_byteOffset + newByteLength);
									int newRange = tmp16;
									bool tmp17 = (newRange > bufferByteLength);
									if ((tmp17)){
										HX_STACK_DO_THROW(::lime::utils::TAError_obj::RangeError);
									}
								}
								_this->buffer = buffer;
								_this->byteOffset = in_byteOffset;
								_this->byteLength = newByteLength;
								Float tmp15 = (Float(newByteLength) / Float(_this->bytesPerElement));
								int tmp16 = ::Std_obj::_int(tmp15);
								_this->length = tmp16;
								tmp9 = _this;
							}
							this1 = tmp9;
						}
						else{
							HX_STACK_DO_THROW(HX_HCSTRING("Invalid constructor arguments for UInt8Array","\x6b","\x44","\xd5","\x85"));
						}
					}
				}
			}
		}
		tmp2 = this1;
	}
	audioBuffer->data = tmp2;
	return ((Dynamic)(::lime::_backend::native::NativeCFFI_obj::cffi_lime_audio_load.call(hx::DynamicPtr(path),hx::DynamicPtr(audioBuffer))));
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(AudioBuffer_obj,fromFile,return )

::lime::media::AudioBuffer AudioBuffer_obj::fromFiles( Array< ::String > paths){
	::lime::media::AudioBuffer buffer = null();
	{
		int _g = (int)0;
		while((true)){
			bool tmp = (_g < paths->length);
			bool tmp1 = !(tmp);
			if ((tmp1)){
				break;
			}
			::String tmp2 = paths->__get(_g);
			::String path = tmp2;
			++(_g);
			::String tmp3 = path;
			::lime::media::AudioBuffer tmp4 = ::lime::media::AudioBuffer_obj::fromFile(tmp3);
			buffer = tmp4;
			bool tmp5 = (buffer != null());
			if ((tmp5)){
				break;
			}
		}
	}
	::lime::media::AudioBuffer tmp = buffer;
	return tmp;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(AudioBuffer_obj,fromFiles,return )

::lime::media::AudioBuffer AudioBuffer_obj::fromVorbisFile( ::lime::media::codecs::vorbis::VorbisFile vorbisFile){
	bool tmp = (vorbisFile == null());
	if ((tmp)){
		return null();
	}
	::lime::media::codecs::vorbis::VorbisInfo tmp1 = vorbisFile->info(null());
	::lime::media::codecs::vorbis::VorbisInfo info = tmp1;
	::lime::media::AudioBuffer tmp2 = ::lime::media::AudioBuffer_obj::__new();
	::lime::media::AudioBuffer audioBuffer = tmp2;
	audioBuffer->channels = info->channels;
	audioBuffer->sampleRate = info->rate;
	audioBuffer->bitsPerSample = (int)16;
	audioBuffer->__srcVorbisFile = vorbisFile;
	::lime::media::AudioBuffer tmp3 = audioBuffer;
	return tmp3;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(AudioBuffer_obj,fromVorbisFile,return )

::lime::app::Future AudioBuffer_obj::loadFromFile( ::String path){
	::lime::net::_HTTPRequest_lime_media_AudioBuffer tmp = ::lime::net::_HTTPRequest_lime_media_AudioBuffer_obj::__new(null());
	::lime::net::_HTTPRequest_lime_media_AudioBuffer request = tmp;
	::String tmp1 = path;
	::lime::app::Future tmp2 = request->load(tmp1);

	HX_BEGIN_LOCAL_FUNC_S0(hx::LocalFunc,_Function_1_1)
	int __ArgCount() const { return 1; }
	::lime::app::Future run(::lime::media::AudioBuffer buffer){
		{
			bool tmp3 = (buffer != null());
			if ((tmp3)){
				::lime::media::AudioBuffer tmp4 = buffer;
				::lime::app::Future tmp5 = ::lime::app::Future_obj::withValue(tmp4);
				return tmp5;
			}
			else{
				::lime::app::Future tmp4 = ::lime::app::Future_obj::withError(HX_HCSTRING("","\x00","\x00","\x00","\x00"));
				::lime::app::Future tmp5 = tmp4;
				return tmp5;
			}
			return null();
		}
		return null();
	}
	HX_END_LOCAL_FUNC1(return)

	::lime::app::Future tmp3 = tmp2->then( Dynamic(new _Function_1_1()));
	return tmp3;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(AudioBuffer_obj,loadFromFile,return )

::lime::app::Future AudioBuffer_obj::loadFromFiles( Array< ::String > paths){
	::lime::app::Promise_lime_media_AudioBuffer tmp = ::lime::app::Promise_lime_media_AudioBuffer_obj::__new();
	::lime::app::Promise_lime_media_AudioBuffer promise = tmp;

	HX_BEGIN_LOCAL_FUNC_S1(hx::LocalFunc,_Function_1_1,Array< ::String >,paths)
	int __ArgCount() const { return 0; }
	::lime::media::AudioBuffer run(){
		{
			::lime::media::AudioBuffer tmp1 = ::lime::media::AudioBuffer_obj::fromFiles(paths);
			return tmp1;
		}
		return null();
	}
	HX_END_LOCAL_FUNC0(return)

	::lime::app::Future tmp1 = ::lime::app::Future_obj::__new( Dynamic(new _Function_1_1(paths)),true);
	promise->completeWith(tmp1);
	::lime::app::Future tmp2 = promise->future;
	return tmp2;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(AudioBuffer_obj,loadFromFiles,return )


AudioBuffer_obj::AudioBuffer_obj()
{
}

void AudioBuffer_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(AudioBuffer);
	HX_MARK_MEMBER_NAME(bitsPerSample,"bitsPerSample");
	HX_MARK_MEMBER_NAME(channels,"channels");
	HX_MARK_MEMBER_NAME(data,"data");
	HX_MARK_MEMBER_NAME(sampleRate,"sampleRate");
	HX_MARK_MEMBER_NAME(__srcAudio,"__srcAudio");
	HX_MARK_MEMBER_NAME(__srcBuffer,"__srcBuffer");
	HX_MARK_MEMBER_NAME(__srcCustom,"__srcCustom");
	HX_MARK_MEMBER_NAME(__srcFMODSound,"__srcFMODSound");
	HX_MARK_MEMBER_NAME(__srcHowl,"__srcHowl");
	HX_MARK_MEMBER_NAME(__srcSound,"__srcSound");
	HX_MARK_MEMBER_NAME(__srcVorbisFile,"__srcVorbisFile");
	HX_MARK_END_CLASS();
}

void AudioBuffer_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(bitsPerSample,"bitsPerSample");
	HX_VISIT_MEMBER_NAME(channels,"channels");
	HX_VISIT_MEMBER_NAME(data,"data");
	HX_VISIT_MEMBER_NAME(sampleRate,"sampleRate");
	HX_VISIT_MEMBER_NAME(__srcAudio,"__srcAudio");
	HX_VISIT_MEMBER_NAME(__srcBuffer,"__srcBuffer");
	HX_VISIT_MEMBER_NAME(__srcCustom,"__srcCustom");
	HX_VISIT_MEMBER_NAME(__srcFMODSound,"__srcFMODSound");
	HX_VISIT_MEMBER_NAME(__srcHowl,"__srcHowl");
	HX_VISIT_MEMBER_NAME(__srcSound,"__srcSound");
	HX_VISIT_MEMBER_NAME(__srcVorbisFile,"__srcVorbisFile");
}

Dynamic AudioBuffer_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"src") ) { if (inCallProp == hx::paccAlways) return get_src(); }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"data") ) { return data; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"dispose") ) { return dispose_dyn(); }
		if (HX_FIELD_EQ(inName,"get_src") ) { return get_src_dyn(); }
		if (HX_FIELD_EQ(inName,"set_src") ) { return set_src_dyn(); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"channels") ) { return channels; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"__srcHowl") ) { return __srcHowl; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"sampleRate") ) { return sampleRate; }
		if (HX_FIELD_EQ(inName,"__srcAudio") ) { return __srcAudio; }
		if (HX_FIELD_EQ(inName,"__srcSound") ) { return __srcSound; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"__srcBuffer") ) { return __srcBuffer; }
		if (HX_FIELD_EQ(inName,"__srcCustom") ) { return __srcCustom; }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"bitsPerSample") ) { return bitsPerSample; }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"__srcFMODSound") ) { return __srcFMODSound; }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"__srcVorbisFile") ) { return __srcVorbisFile; }
	}
	return super::__Field(inName,inCallProp);
}

bool AudioBuffer_obj::__GetStatic(const ::String &inName, Dynamic &outValue, hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 8:
		if (HX_FIELD_EQ(inName,"fromFile") ) { outValue = fromFile_dyn(); return true;  }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"fromBytes") ) { outValue = fromBytes_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"fromFiles") ) { outValue = fromFiles_dyn(); return true;  }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"loadFromFile") ) { outValue = loadFromFile_dyn(); return true;  }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"loadFromFiles") ) { outValue = loadFromFiles_dyn(); return true;  }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"fromVorbisFile") ) { outValue = fromVorbisFile_dyn(); return true;  }
	}
	return false;
}

Dynamic AudioBuffer_obj::__SetField(const ::String &inName,const Dynamic &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"src") ) { if (inCallProp == hx::paccAlways) return set_src(inValue); }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"data") ) { data=inValue.Cast< ::lime::utils::ArrayBufferView >(); return inValue; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"channels") ) { channels=inValue.Cast< int >(); return inValue; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"__srcHowl") ) { __srcHowl=inValue.Cast< Dynamic >(); return inValue; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"sampleRate") ) { sampleRate=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"__srcAudio") ) { __srcAudio=inValue.Cast< Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"__srcSound") ) { __srcSound=inValue.Cast< Dynamic >(); return inValue; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"__srcBuffer") ) { __srcBuffer=inValue.Cast< Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"__srcCustom") ) { __srcCustom=inValue.Cast< Dynamic >(); return inValue; }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"bitsPerSample") ) { bitsPerSample=inValue.Cast< int >(); return inValue; }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"__srcFMODSound") ) { __srcFMODSound=inValue.Cast< Dynamic >(); return inValue; }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"__srcVorbisFile") ) { __srcVorbisFile=inValue.Cast< ::lime::media::codecs::vorbis::VorbisFile >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void AudioBuffer_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("bitsPerSample","\x01","\x01","\x36","\xc4"));
	outFields->push(HX_HCSTRING("channels","\x50","\xaa","\xee","\x6a"));
	outFields->push(HX_HCSTRING("data","\x2a","\x56","\x63","\x42"));
	outFields->push(HX_HCSTRING("sampleRate","\x2a","\x3c","\x4c","\x67"));
	outFields->push(HX_HCSTRING("src","\xe4","\xa6","\x57","\x00"));
	outFields->push(HX_HCSTRING("__srcAudio","\x72","\x3a","\x73","\x29"));
	outFields->push(HX_HCSTRING("__srcBuffer","\xe4","\x63","\x0b","\x83"));
	outFields->push(HX_HCSTRING("__srcCustom","\x95","\x2e","\x09","\xf2"));
	outFields->push(HX_HCSTRING("__srcFMODSound","\xcf","\x14","\x24","\x65"));
	outFields->push(HX_HCSTRING("__srcHowl","\xc0","\x38","\xb9","\xf4"));
	outFields->push(HX_HCSTRING("__srcSound","\x6b","\x4e","\xbf","\x82"));
	outFields->push(HX_HCSTRING("__srcVorbisFile","\x53","\x8c","\xee","\xce"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsInt,(int)offsetof(AudioBuffer_obj,bitsPerSample),HX_HCSTRING("bitsPerSample","\x01","\x01","\x36","\xc4")},
	{hx::fsInt,(int)offsetof(AudioBuffer_obj,channels),HX_HCSTRING("channels","\x50","\xaa","\xee","\x6a")},
	{hx::fsObject /*::lime::utils::ArrayBufferView*/ ,(int)offsetof(AudioBuffer_obj,data),HX_HCSTRING("data","\x2a","\x56","\x63","\x42")},
	{hx::fsInt,(int)offsetof(AudioBuffer_obj,sampleRate),HX_HCSTRING("sampleRate","\x2a","\x3c","\x4c","\x67")},
	{hx::fsObject /*Dynamic*/ ,(int)offsetof(AudioBuffer_obj,__srcAudio),HX_HCSTRING("__srcAudio","\x72","\x3a","\x73","\x29")},
	{hx::fsObject /*Dynamic*/ ,(int)offsetof(AudioBuffer_obj,__srcBuffer),HX_HCSTRING("__srcBuffer","\xe4","\x63","\x0b","\x83")},
	{hx::fsObject /*Dynamic*/ ,(int)offsetof(AudioBuffer_obj,__srcCustom),HX_HCSTRING("__srcCustom","\x95","\x2e","\x09","\xf2")},
	{hx::fsObject /*Dynamic*/ ,(int)offsetof(AudioBuffer_obj,__srcFMODSound),HX_HCSTRING("__srcFMODSound","\xcf","\x14","\x24","\x65")},
	{hx::fsObject /*Dynamic*/ ,(int)offsetof(AudioBuffer_obj,__srcHowl),HX_HCSTRING("__srcHowl","\xc0","\x38","\xb9","\xf4")},
	{hx::fsObject /*Dynamic*/ ,(int)offsetof(AudioBuffer_obj,__srcSound),HX_HCSTRING("__srcSound","\x6b","\x4e","\xbf","\x82")},
	{hx::fsObject /*::lime::media::codecs::vorbis::VorbisFile*/ ,(int)offsetof(AudioBuffer_obj,__srcVorbisFile),HX_HCSTRING("__srcVorbisFile","\x53","\x8c","\xee","\xce")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo *sStaticStorageInfo = 0;
#endif

static ::String sMemberFields[] = {
	HX_HCSTRING("bitsPerSample","\x01","\x01","\x36","\xc4"),
	HX_HCSTRING("channels","\x50","\xaa","\xee","\x6a"),
	HX_HCSTRING("data","\x2a","\x56","\x63","\x42"),
	HX_HCSTRING("sampleRate","\x2a","\x3c","\x4c","\x67"),
	HX_HCSTRING("__srcAudio","\x72","\x3a","\x73","\x29"),
	HX_HCSTRING("__srcBuffer","\xe4","\x63","\x0b","\x83"),
	HX_HCSTRING("__srcCustom","\x95","\x2e","\x09","\xf2"),
	HX_HCSTRING("__srcFMODSound","\xcf","\x14","\x24","\x65"),
	HX_HCSTRING("__srcHowl","\xc0","\x38","\xb9","\xf4"),
	HX_HCSTRING("__srcSound","\x6b","\x4e","\xbf","\x82"),
	HX_HCSTRING("__srcVorbisFile","\x53","\x8c","\xee","\xce"),
	HX_HCSTRING("dispose","\x9f","\x80","\x4c","\xbb"),
	HX_HCSTRING("get_src","\x7b","\x6f","\xcc","\x26"),
	HX_HCSTRING("set_src","\x87","\x00","\xce","\x19"),
	::String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(AudioBuffer_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(AudioBuffer_obj::__mClass,"__mClass");
};

#endif

hx::Class AudioBuffer_obj::__mClass;

static ::String sStaticFields[] = {
	HX_HCSTRING("fromBytes","\xa1","\xf2","\x20","\x72"),
	HX_HCSTRING("fromFile","\x06","\x9d","\x87","\xa1"),
	HX_HCSTRING("fromFiles","\xad","\xc8","\x21","\xb5"),
	HX_HCSTRING("fromVorbisFile","\x79","\xf5","\xfc","\xd5"),
	HX_HCSTRING("loadFromFile","\x4c","\x89","\xf0","\x5a"),
	HX_HCSTRING("loadFromFiles","\xa7","\x99","\x87","\x37"),
	::String(null()) };

void AudioBuffer_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("lime.media.AudioBuffer","\x33","\x70","\x4b","\x3a");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &AudioBuffer_obj::__GetStatic;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(sStaticFields);
	__mClass->mMembers = hx::Class_obj::dupFunctions(sMemberFields);
	__mClass->mCanCast = hx::TCanCast< AudioBuffer_obj >;
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
