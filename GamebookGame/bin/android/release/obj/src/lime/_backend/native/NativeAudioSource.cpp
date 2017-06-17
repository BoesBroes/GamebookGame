#include <hxcpp.h>

#ifndef INCLUDED_Std
#include <Std.h>
#endif
#ifndef INCLUDED_haxe_Timer
#include <haxe/Timer.h>
#endif
#ifndef INCLUDED_haxe_io_Bytes
#include <haxe/io/Bytes.h>
#endif
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
#ifndef INCLUDED_lime_media_codecs_vorbis_VorbisFile
#include <lime/media/codecs/vorbis/VorbisFile.h>
#endif
#ifndef INCLUDED_lime_media_openal_AL
#include <lime/media/openal/AL.h>
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
namespace _backend{
namespace native{

Void NativeAudioSource_obj::__construct(::lime::media::AudioSource parent)
{
{
	this->parent = parent;
	::lime::math::Vector4 tmp = ::lime::math::Vector4_obj::__new(null(),null(),null(),null());
	this->position = tmp;
}
;
	return null();
}

//NativeAudioSource_obj::~NativeAudioSource_obj() { }

Dynamic NativeAudioSource_obj::__CreateEmpty() { return  new NativeAudioSource_obj; }
hx::ObjectPtr< NativeAudioSource_obj > NativeAudioSource_obj::__new(::lime::media::AudioSource parent)
{  hx::ObjectPtr< NativeAudioSource_obj > _result_ = new NativeAudioSource_obj();
	_result_->__construct(parent);
	return _result_;}

Dynamic NativeAudioSource_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< NativeAudioSource_obj > _result_ = new NativeAudioSource_obj();
	_result_->__construct(inArgs[0]);
	return _result_;}

Void NativeAudioSource_obj::dispose( ){
{
		Dynamic tmp = this->handle;
		bool tmp1 = (tmp != null());
		if ((tmp1)){
			Dynamic tmp2 = this->handle;
			::lime::media::openal::AL_obj::deleteSource(tmp2);
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(NativeAudioSource_obj,dispose,(void))

Void NativeAudioSource_obj::init( ){
{
		this->dataLength = (int)0;
		this->format = (int)0;
		::lime::media::AudioSource tmp = this->parent;
		int tmp1 = tmp->buffer->channels;
		bool tmp2 = (tmp1 == (int)1);
		if ((tmp2)){
			::lime::media::AudioSource tmp3 = this->parent;
			int tmp4 = tmp3->buffer->bitsPerSample;
			bool tmp5 = (tmp4 == (int)8);
			if ((tmp5)){
				this->format = (int)4352;
			}
			else{
				::lime::media::AudioSource tmp6 = this->parent;
				int tmp7 = tmp6->buffer->bitsPerSample;
				bool tmp8 = (tmp7 == (int)16);
				if ((tmp8)){
					this->format = (int)4353;
				}
			}
		}
		else{
			::lime::media::AudioSource tmp3 = this->parent;
			int tmp4 = tmp3->buffer->channels;
			bool tmp5 = (tmp4 == (int)2);
			if ((tmp5)){
				::lime::media::AudioSource tmp6 = this->parent;
				int tmp7 = tmp6->buffer->bitsPerSample;
				bool tmp8 = (tmp7 == (int)8);
				if ((tmp8)){
					this->format = (int)4354;
				}
				else{
					::lime::media::AudioSource tmp9 = this->parent;
					int tmp10 = tmp9->buffer->bitsPerSample;
					bool tmp11 = (tmp10 == (int)16);
					if ((tmp11)){
						this->format = (int)4355;
					}
				}
			}
		}
		::lime::media::AudioSource tmp3 = this->parent;
		::lime::media::codecs::vorbis::VorbisFile tmp4 = tmp3->buffer->__srcVorbisFile;
		bool tmp5 = (tmp4 != null());
		if ((tmp5)){
			this->stream = true;
			::lime::media::AudioSource tmp6 = this->parent;
			::lime::media::codecs::vorbis::VorbisFile tmp7 = tmp6->buffer->__srcVorbisFile;
			::lime::media::codecs::vorbis::VorbisFile vorbisFile = tmp7;
			int tmp8;
			{
				cpp::Int64Struct tmp9 = vorbisFile->pcmTotal(null());
				cpp::Int64Struct x = tmp9;
				int tmp10 = (int((int)((x)&0xffffffff)) >> int((int)31));
				int tmp11 = tmp10;
				bool tmp12 = ((int)(((cpp::Int64)(x))>>32) != tmp11);
				bool tmp13 = tmp12;
				if ((tmp13)){
					HX_STACK_DO_THROW(HX_HCSTRING("Overflow","\x62","\x9f","\xed","\x1a"));
				}
				tmp8 = (int)((x)&0xffffffff);
			}
			::lime::media::AudioSource tmp9 = this->parent;
			int tmp10 = tmp9->buffer->channels;
			int tmp11 = (tmp8 * tmp10);
			::lime::media::AudioSource tmp12 = this->parent;
			int tmp13 = tmp12->buffer->bitsPerSample;
			Float tmp14 = (Float(tmp13) / Float((int)8));
			Float tmp15 = (tmp11 * tmp14);
			int tmp16 = ::Std_obj::_int(tmp15);
			this->dataLength = tmp16;
			this->buffers = Dynamic( Array_obj<Dynamic>::__new() );
			{
				int _g1 = (int)0;
				int tmp17 = ::lime::_backend::native::NativeAudioSource_obj::STREAM_NUM_BUFFERS;
				int _g = tmp17;
				while((true)){
					bool tmp18 = (_g1 < _g);
					bool tmp19 = !(tmp18);
					if ((tmp19)){
						break;
					}
					int tmp20 = (_g1)++;
					int i = tmp20;
					Dynamic tmp21 = ::lime::media::openal::AL_obj::createBuffer();
					this->buffers->__Field(HX_HCSTRING("push","\xda","\x11","\x61","\x4a"), hx::paccDynamic )(tmp21);
				}
			}
			Dynamic tmp17 = ::lime::media::openal::AL_obj::createSource();
			this->handle = tmp17;
		}
		else{
			::lime::media::AudioSource tmp6 = this->parent;
			Dynamic tmp7 = tmp6->buffer->__srcBuffer;
			bool tmp8 = (tmp7 == null());
			if ((tmp8)){
				Dynamic tmp9 = ::lime::media::openal::AL_obj::createBuffer();
				::lime::media::AudioSource tmp10 = this->parent;
				tmp10->buffer->__srcBuffer = tmp9;
				::lime::media::AudioSource tmp11 = this->parent;
				Dynamic tmp12 = tmp11->buffer->__srcBuffer;
				int tmp13 = this->format;
				::lime::media::AudioSource tmp14 = this->parent;
				::lime::utils::ArrayBufferView tmp15 = tmp14->buffer->data;
				::lime::media::AudioSource tmp16 = this->parent;
				::lime::utils::ArrayBufferView tmp17 = tmp16->buffer->data;
				int tmp18 = tmp17->length;
				::lime::media::AudioSource tmp19 = this->parent;
				int tmp20 = tmp19->buffer->sampleRate;
				::lime::media::openal::AL_obj::bufferData(tmp12,tmp13,tmp15,tmp18,tmp20);
			}
			::lime::media::AudioSource tmp9 = this->parent;
			::lime::utils::ArrayBufferView tmp10 = tmp9->buffer->data;
			int tmp11 = tmp10->length;
			this->dataLength = tmp11;
			Dynamic tmp12 = ::lime::media::openal::AL_obj::createSource();
			this->handle = tmp12;
			Dynamic tmp13 = this->handle;
			::lime::media::AudioSource tmp14 = this->parent;
			Dynamic tmp15 = tmp14->buffer->__srcBuffer;
			::lime::media::openal::AL_obj::sourcei(tmp13,(int)4105,tmp15);
		}
		int tmp6 = this->dataLength;
		int tmp7 = (tmp6 * (int)8);
		::lime::media::AudioSource tmp8 = this->parent;
		int tmp9 = tmp8->buffer->channels;
		::lime::media::AudioSource tmp10 = this->parent;
		int tmp11 = tmp10->buffer->bitsPerSample;
		int tmp12 = (tmp9 * tmp11);
		Float tmp13 = (Float(tmp7) / Float(tmp12));
		int tmp14 = ::Std_obj::_int(tmp13);
		this->samples = tmp14;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(NativeAudioSource_obj,init,(void))

Void NativeAudioSource_obj::play( ){
{
		bool tmp = this->playing;
		bool tmp1 = !(tmp);
		bool tmp2;
		if ((tmp1)){
			Dynamic tmp3 = this->handle;
			Dynamic tmp4 = tmp3;
			tmp2 = (tmp4 == null());
		}
		else{
			tmp2 = true;
		}
		if ((tmp2)){
			return null();
		}
		this->playing = true;
		bool tmp3 = this->stream;
		if ((tmp3)){
			int tmp4 = this->getCurrentTime();
			this->setCurrentTime(tmp4);
			int tmp5 = ::lime::_backend::native::NativeAudioSource_obj::STREAM_TIMER_FREQUENCY;
			::haxe::Timer tmp6 = ::haxe::Timer_obj::__new(tmp5);
			this->streamTimer = tmp6;
			Dynamic tmp7 = this->streamTimer_onRun_dyn();
			::haxe::Timer tmp8 = this->streamTimer;
			tmp8->run = tmp7;
		}
		else{
			int tmp4 = this->getCurrentTime();
			int time = tmp4;
			Dynamic tmp5 = this->handle;
			::lime::media::openal::AL_obj::sourcePlay(tmp5);
			int tmp6 = time;
			this->setCurrentTime(tmp6);
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(NativeAudioSource_obj,play,(void))

Void NativeAudioSource_obj::pause( ){
{
		this->playing = false;
		Dynamic tmp = this->handle;
		::lime::media::openal::AL_obj::sourcePause(tmp);
		::haxe::Timer tmp1 = this->streamTimer;
		bool tmp2 = (tmp1 != null());
		if ((tmp2)){
			::haxe::Timer tmp3 = this->streamTimer;
			tmp3->stop();
		}
		::haxe::Timer tmp3 = this->timer;
		bool tmp4 = (tmp3 != null());
		if ((tmp4)){
			::haxe::Timer tmp5 = this->timer;
			tmp5->stop();
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(NativeAudioSource_obj,pause,(void))

::lime::utils::ArrayBufferView NativeAudioSource_obj::readVorbisFileBuffer( ::lime::media::codecs::vorbis::VorbisFile vorbisFile,int length){
	::lime::utils::ArrayBufferView tmp;
	{
		::lime::utils::ArrayBufferView this1;
		bool tmp1 = (length != null());
		if ((tmp1)){
			::lime::utils::ArrayBufferView tmp2 = ::lime::utils::ArrayBufferView_obj::__new(length,(int)4);
			this1 = tmp2;
		}
		else{
			bool tmp2 = false;
			if ((tmp2)){
				::lime::utils::ArrayBufferView tmp3;
				{
					::lime::utils::ArrayBufferView tmp4 = ::lime::utils::ArrayBufferView_obj::__new((int)0,(int)4);
					::lime::utils::ArrayBufferView _this = tmp4;
					_this->byteOffset = (int)0;
					int tmp5 = hx::Throw(HX_CSTRING("Invalid field access on null object"));
					_this->length = tmp5;
					int tmp6 = (_this->length * _this->bytesPerElement);
					_this->byteLength = tmp6;
					::haxe::io::Bytes tmp7;
					{
						::haxe::io::Bytes this2;
						int tmp8 = _this->byteLength;
						::haxe::io::Bytes tmp9 = ::haxe::io::Bytes_obj::alloc(tmp8);
						this2 = tmp9;
						tmp7 = this2;
					}
					_this->buffer = tmp7;
					_this->copyFromArray(((Array< Float >)(null())),null());
					tmp3 = _this;
				}
				this1 = tmp3;
			}
			else{
				bool tmp3 = false;
				if ((tmp3)){
					::lime::utils::ArrayBufferView tmp4;
					{
						::lime::utils::ArrayBufferView tmp5 = ::lime::utils::ArrayBufferView_obj::__new((int)0,(int)4);
						::lime::utils::ArrayBufferView _this = tmp5;
						cpp::ArrayBase array = hx::Throw(HX_CSTRING("Invalid field access on null object"));
						_this->byteOffset = (int)0;
						_this->length = array->__Field(HX_HCSTRING("length","\xe6","\x94","\x07","\x9f"), hx::paccDynamic );
						int tmp6 = (_this->length * _this->bytesPerElement);
						_this->byteLength = tmp6;
						::haxe::io::Bytes tmp7;
						{
							::haxe::io::Bytes this2;
							int tmp8 = _this->byteLength;
							::haxe::io::Bytes tmp9 = ::haxe::io::Bytes_obj::alloc(tmp8);
							this2 = tmp9;
							tmp7 = this2;
						}
						_this->buffer = tmp7;
						_this->copyFromArray(((Array< Float >)(array)),null());
						tmp4 = _this;
					}
					this1 = tmp4;
				}
				else{
					bool tmp4 = false;
					if ((tmp4)){
						::lime::utils::ArrayBufferView tmp5;
						{
							::lime::utils::ArrayBufferView tmp6 = ::lime::utils::ArrayBufferView_obj::__new((int)0,(int)4);
							::lime::utils::ArrayBufferView _this = tmp6;
							::haxe::io::Bytes tmp7 = hx::Throw(HX_CSTRING("Invalid field access on null object"));
							::haxe::io::Bytes srcData = tmp7;
							int tmp8 = hx::Throw(HX_CSTRING("Invalid field access on null object"));
							int srcLength = tmp8;
							int tmp9 = hx::Throw(HX_CSTRING("Invalid field access on null object"));
							int srcByteOffset = tmp9;
							int tmp10 = hx::Throw(HX_CSTRING("Invalid field access on null object"));
							int srcElementSize = tmp10;
							int elementSize = _this->bytesPerElement;
							int tmp11 = hx::Throw(HX_CSTRING("Invalid field access on null object"));
							int tmp12 = _this->type;
							bool tmp13 = (tmp11 == tmp12);
							if ((tmp13)){
								int srcLength1 = srcData->length;
								int tmp14 = (srcLength1 - srcByteOffset);
								int cloneLength = tmp14;
								::haxe::io::Bytes tmp15;
								{
									::haxe::io::Bytes this2;
									int tmp16 = cloneLength;
									::haxe::io::Bytes tmp17 = ::haxe::io::Bytes_obj::alloc(tmp16);
									this2 = tmp17;
									tmp15 = this2;
								}
								_this->buffer = tmp15;
								::haxe::io::Bytes tmp16 = srcData;
								int tmp17 = srcByteOffset;
								int tmp18 = cloneLength;
								_this->buffer->blit((int)0,tmp16,tmp17,tmp18);
							}
							else{
								HX_STACK_DO_THROW(HX_HCSTRING("unimplemented","\x09","\x2f","\x74","\xb4"));
							}
							int tmp14 = (_this->bytesPerElement * srcLength);
							_this->byteLength = tmp14;
							_this->byteOffset = (int)0;
							_this->length = srcLength;
							tmp5 = _this;
						}
						this1 = tmp5;
					}
					else{
						bool tmp5 = false;
						if ((tmp5)){
							::lime::utils::ArrayBufferView tmp6;
							{
								::lime::utils::ArrayBufferView tmp7 = ::lime::utils::ArrayBufferView_obj::__new((int)0,(int)4);
								::lime::utils::ArrayBufferView _this = tmp7;
								int in_byteOffset = (int)0;
								bool tmp8 = (in_byteOffset < (int)0);
								if ((tmp8)){
									HX_STACK_DO_THROW(::lime::utils::TAError_obj::RangeError);
								}
								int tmp9 = hx::Mod(in_byteOffset,_this->bytesPerElement);
								bool tmp10 = (tmp9 != (int)0);
								if ((tmp10)){
									HX_STACK_DO_THROW(::lime::utils::TAError_obj::RangeError);
								}
								int tmp11 = hx::Throw(HX_CSTRING("Invalid field access on null object"));
								int bufferByteLength = tmp11;
								int elementSize = _this->bytesPerElement;
								int newByteLength = bufferByteLength;
								bool tmp12 = true;
								if ((tmp12)){
									int tmp13 = (bufferByteLength - in_byteOffset);
									newByteLength = tmp13;
									int tmp14 = hx::Mod(bufferByteLength,_this->bytesPerElement);
									bool tmp15 = (tmp14 != (int)0);
									if ((tmp15)){
										HX_STACK_DO_THROW(::lime::utils::TAError_obj::RangeError);
									}
									bool tmp16 = (newByteLength < (int)0);
									if ((tmp16)){
										HX_STACK_DO_THROW(::lime::utils::TAError_obj::RangeError);
									}
								}
								else{
									int tmp13 = (null() * _this->bytesPerElement);
									newByteLength = tmp13;
									int tmp14 = (in_byteOffset + newByteLength);
									int newRange = tmp14;
									bool tmp15 = (newRange > bufferByteLength);
									if ((tmp15)){
										HX_STACK_DO_THROW(::lime::utils::TAError_obj::RangeError);
									}
								}
								_this->buffer = null();
								_this->byteOffset = in_byteOffset;
								_this->byteLength = newByteLength;
								Float tmp13 = (Float(newByteLength) / Float(_this->bytesPerElement));
								int tmp14 = ::Std_obj::_int(tmp13);
								_this->length = tmp14;
								tmp6 = _this;
							}
							this1 = tmp6;
						}
						else{
							HX_STACK_DO_THROW(HX_HCSTRING("Invalid constructor arguments for UInt8Array","\x6b","\x44","\xd5","\x85"));
						}
					}
				}
			}
		}
		tmp = this1;
	}
	::lime::utils::ArrayBufferView buffer = tmp;
	int read = (int)0;
	int total = (int)0;
	int readMax;
	while((true)){
		bool tmp1 = (total < length);
		bool tmp2 = !(tmp1);
		if ((tmp2)){
			break;
		}
		readMax = (int)4096;
		int tmp3 = readMax;
		int tmp4 = (length - total);
		bool tmp5 = (tmp3 > tmp4);
		if ((tmp5)){
			int tmp6 = (length - total);
			readMax = tmp6;
		}
		::haxe::io::Bytes tmp6 = buffer->buffer;
		int tmp7 = total;
		int tmp8 = readMax;
		int tmp9 = vorbisFile->read(tmp6,tmp7,tmp8,null(),null(),null());
		read = tmp9;
		bool tmp10 = (read > (int)0);
		if ((tmp10)){
			hx::AddEq(total,read);
		}
		else{
			break;
		}
	}
	::lime::utils::ArrayBufferView tmp1 = buffer;
	return tmp1;
}


HX_DEFINE_DYNAMIC_FUNC2(NativeAudioSource_obj,readVorbisFileBuffer,return )

Void NativeAudioSource_obj::refillBuffers( cpp::ArrayBase buffers){
{
		::lime::media::codecs::vorbis::VorbisFile vorbisFile = null();
		int position = (int)0;
		bool tmp = (buffers == null());
		if ((tmp)){
			Dynamic tmp1 = this->handle;
			Dynamic tmp2 = ::lime::media::openal::AL_obj::getSourcei(tmp1,(int)4118);
			int buffersProcessed = tmp2;
			bool tmp3 = (buffersProcessed > (int)0);
			if ((tmp3)){
				::lime::media::AudioSource tmp4 = this->parent;
				::lime::media::codecs::vorbis::VorbisFile tmp5 = tmp4->buffer->__srcVorbisFile;
				vorbisFile = tmp5;
				int tmp6;
				{
					cpp::Int64Struct tmp7 = vorbisFile->pcmTell();
					cpp::Int64Struct x = tmp7;
					int tmp8 = (int((int)((x)&0xffffffff)) >> int((int)31));
					int tmp9 = tmp8;
					bool tmp10 = ((int)(((cpp::Int64)(x))>>32) != tmp9);
					bool tmp11 = tmp10;
					if ((tmp11)){
						HX_STACK_DO_THROW(HX_HCSTRING("Overflow","\x62","\x9f","\xed","\x1a"));
					}
					tmp6 = (int)((x)&0xffffffff);
				}
				position = tmp6;
				int tmp7 = position;
				int tmp8 = this->dataLength;
				bool tmp9 = (tmp7 < tmp8);
				if ((tmp9)){
					Dynamic tmp10 = this->handle;
					int tmp11 = buffersProcessed;
					buffers = ::lime::media::openal::AL_obj::sourceUnqueueBuffers(tmp10,tmp11);
				}
			}
		}
		bool tmp1 = (buffers != null());
		if ((tmp1)){
			bool tmp2 = (vorbisFile == null());
			if ((tmp2)){
				::lime::media::AudioSource tmp3 = this->parent;
				::lime::media::codecs::vorbis::VorbisFile tmp4 = tmp3->buffer->__srcVorbisFile;
				vorbisFile = tmp4;
				int tmp5;
				{
					cpp::Int64Struct tmp6 = vorbisFile->pcmTell();
					cpp::Int64Struct x = tmp6;
					int tmp7 = (int((int)((x)&0xffffffff)) >> int((int)31));
					int tmp8 = tmp7;
					bool tmp9 = ((int)(((cpp::Int64)(x))>>32) != tmp8);
					bool tmp10 = tmp9;
					if ((tmp10)){
						HX_STACK_DO_THROW(HX_HCSTRING("Overflow","\x62","\x9f","\xed","\x1a"));
					}
					tmp5 = (int)((x)&0xffffffff);
				}
				position = tmp5;
			}
			int numBuffers = (int)0;
			::lime::utils::ArrayBufferView data;
			{
				int _g = (int)0;
				while((true)){
					bool tmp3 = (_g < buffers->__Field(HX_HCSTRING("length","\xe6","\x94","\x07","\x9f"), hx::paccDynamic ));
					bool tmp4 = !(tmp3);
					if ((tmp4)){
						break;
					}
					Dynamic tmp5 = buffers->__GetItem(_g);
					Dynamic buffer = tmp5;
					++(_g);
					int tmp6 = this->dataLength;
					int tmp7 = position;
					int tmp8 = (tmp6 - tmp7);
					int tmp9 = ::lime::_backend::native::NativeAudioSource_obj::STREAM_BUFFER_SIZE;
					bool tmp10 = (tmp8 >= tmp9);
					if ((tmp10)){
						::lime::media::codecs::vorbis::VorbisFile tmp11 = vorbisFile;
						int tmp12 = ::lime::_backend::native::NativeAudioSource_obj::STREAM_BUFFER_SIZE;
						::lime::utils::ArrayBufferView tmp13 = this->readVorbisFileBuffer(tmp11,tmp12);
						data = tmp13;
						Dynamic tmp14 = buffer;
						int tmp15 = this->format;
						::lime::utils::ArrayBufferView tmp16 = data;
						int tmp17 = data->length;
						::lime::media::AudioSource tmp18 = this->parent;
						int tmp19 = tmp18->buffer->sampleRate;
						::lime::media::openal::AL_obj::bufferData(tmp14,tmp15,tmp16,tmp17,tmp19);
						int tmp20 = ::lime::_backend::native::NativeAudioSource_obj::STREAM_BUFFER_SIZE;
						hx::AddEq(position,tmp20);
						(numBuffers)++;
					}
					else{
						int tmp11 = position;
						int tmp12 = this->dataLength;
						bool tmp13 = (tmp11 < tmp12);
						if ((tmp13)){
							::lime::media::codecs::vorbis::VorbisFile tmp14 = vorbisFile;
							int tmp15 = this->dataLength;
							int tmp16 = position;
							int tmp17 = (tmp15 - tmp16);
							::lime::utils::ArrayBufferView tmp18 = this->readVorbisFileBuffer(tmp14,tmp17);
							data = tmp18;
							Dynamic tmp19 = buffer;
							int tmp20 = this->format;
							::lime::utils::ArrayBufferView tmp21 = data;
							int tmp22 = data->length;
							::lime::media::AudioSource tmp23 = this->parent;
							int tmp24 = tmp23->buffer->sampleRate;
							::lime::media::openal::AL_obj::bufferData(tmp19,tmp20,tmp21,tmp22,tmp24);
							(numBuffers)++;
							break;
						}
					}
				}
			}
			Dynamic tmp3 = this->handle;
			int tmp4 = numBuffers;
			::lime::media::openal::AL_obj::sourceQueueBuffers(tmp3,tmp4,buffers);
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(NativeAudioSource_obj,refillBuffers,(void))

Void NativeAudioSource_obj::stop( ){
{
		this->playing = false;
		Dynamic tmp = this->handle;
		::lime::media::openal::AL_obj::sourceStop(tmp);
		::haxe::Timer tmp1 = this->streamTimer;
		bool tmp2 = (tmp1 != null());
		if ((tmp2)){
			::haxe::Timer tmp3 = this->streamTimer;
			tmp3->stop();
		}
		::haxe::Timer tmp3 = this->timer;
		bool tmp4 = (tmp3 != null());
		if ((tmp4)){
			::haxe::Timer tmp5 = this->timer;
			tmp5->stop();
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(NativeAudioSource_obj,stop,(void))

Void NativeAudioSource_obj::streamTimer_onRun( ){
{
		this->refillBuffers(null());
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(NativeAudioSource_obj,streamTimer_onRun,(void))

Void NativeAudioSource_obj::timer_onRun( ){
{
		this->playing = false;
		int tmp = this->loops;
		bool tmp1 = (tmp > (int)0);
		if ((tmp1)){
			(this->loops)--;
			this->setCurrentTime((int)0);
			this->play();
			return null();
		}
		else{
			Dynamic tmp2 = this->handle;
			::lime::media::openal::AL_obj::sourceStop(tmp2);
			::haxe::Timer tmp3 = this->timer;
			tmp3->stop();
		}
		this->completed = true;
		::lime::media::AudioSource tmp2 = this->parent;
		tmp2->onComplete->dispatch();
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(NativeAudioSource_obj,timer_onRun,(void))

int NativeAudioSource_obj::getCurrentTime( ){
	bool tmp = this->completed;
	if ((tmp)){
		int tmp1 = this->getLength();
		return tmp1;
	}
	else{
		bool tmp1 = this->stream;
		if ((tmp1)){
			::lime::media::AudioSource tmp2 = this->parent;
			::lime::media::codecs::vorbis::VorbisFile tmp3 = tmp2->buffer->__srcVorbisFile;
			Float tmp4 = tmp3->timeTell();
			Float tmp5 = (tmp4 * (int)1000);
			int tmp6 = ::Std_obj::_int(tmp5);
			Dynamic tmp7 = this->handle;
			Float tmp8 = ::lime::media::openal::AL_obj::getSourcef(tmp7,(int)4132);
			Float tmp9 = (tmp8 * (int)1000);
			int tmp10 = ::Std_obj::_int(tmp9);
			int tmp11 = (tmp6 + tmp10);
			::lime::media::AudioSource tmp12 = this->parent;
			int tmp13 = tmp12->offset;
			int tmp14 = (tmp11 - tmp13);
			int time = tmp14;
			bool tmp15 = (time < (int)0);
			if ((tmp15)){
				return (int)0;
			}
			int tmp16 = time;
			return tmp16;
		}
		else{
			Dynamic tmp2 = this->handle;
			Dynamic tmp3 = ::lime::media::openal::AL_obj::getSourcei(tmp2,(int)4134);
			int offset = tmp3;
			int tmp4 = offset;
			int tmp5 = this->dataLength;
			Float tmp6 = (Float(tmp4) / Float(tmp5));
			Float ratio = tmp6;
			int tmp7 = this->samples;
			::lime::media::AudioSource tmp8 = this->parent;
			int tmp9 = tmp8->buffer->sampleRate;
			Float tmp10 = (Float(tmp7) / Float(tmp9));
			Float totalSeconds = tmp10;
			Float tmp11 = (totalSeconds * ratio);
			Float tmp12 = (tmp11 * (int)1000);
			int tmp13 = ::Std_obj::_int(tmp12);
			::lime::media::AudioSource tmp14 = this->parent;
			int tmp15 = tmp14->offset;
			int tmp16 = (tmp13 - tmp15);
			int time = tmp16;
			bool tmp17 = (time < (int)0);
			if ((tmp17)){
				return (int)0;
			}
			int tmp18 = time;
			return tmp18;
		}
	}
	return (int)0;
}


HX_DEFINE_DYNAMIC_FUNC0(NativeAudioSource_obj,getCurrentTime,return )

int NativeAudioSource_obj::setCurrentTime( int value){
	bool tmp = this->stream;
	if ((tmp)){
		Dynamic tmp1 = this->handle;
		::lime::media::openal::AL_obj::sourceStop(tmp1);
		::lime::media::AudioSource tmp2 = this->parent;
		::lime::media::codecs::vorbis::VorbisFile tmp3 = tmp2->buffer->__srcVorbisFile;
		int tmp4 = value;
		::lime::media::AudioSource tmp5 = this->parent;
		int tmp6 = tmp5->offset;
		int tmp7 = (tmp4 + tmp6);
		Float tmp8 = (Float(tmp7) / Float((int)1000));
		tmp3->timeSeekPage(tmp8);
		Dynamic tmp9 = this->handle;
		int tmp10 = ::lime::_backend::native::NativeAudioSource_obj::STREAM_NUM_BUFFERS;
		::lime::media::openal::AL_obj::sourceUnqueueBuffers(tmp9,tmp10);
		this->refillBuffers(this->buffers);
		bool tmp11 = this->playing;
		if ((tmp11)){
			Dynamic tmp12 = this->handle;
			::lime::media::openal::AL_obj::sourcePlay(tmp12);
		}
	}
	else{
		::lime::media::AudioSource tmp1 = this->parent;
		::lime::media::AudioBuffer tmp2 = tmp1->buffer;
		bool tmp3 = (tmp2 != null());
		if ((tmp3)){
			Dynamic tmp4 = this->handle;
			::lime::media::openal::AL_obj::sourceRewind(tmp4);
			bool tmp5 = this->playing;
			if ((tmp5)){
				Dynamic tmp6 = this->handle;
				::lime::media::openal::AL_obj::sourcePlay(tmp6);
			}
			int tmp6 = value;
			::lime::media::AudioSource tmp7 = this->parent;
			int tmp8 = tmp7->offset;
			int tmp9 = (tmp6 + tmp8);
			Float tmp10 = (Float(tmp9) / Float((int)1000));
			Float secondOffset = tmp10;
			int tmp11 = this->samples;
			::lime::media::AudioSource tmp12 = this->parent;
			int tmp13 = tmp12->buffer->sampleRate;
			Float tmp14 = (Float(tmp11) / Float(tmp13));
			Float totalSeconds = tmp14;
			bool tmp15 = (secondOffset < (int)0);
			if ((tmp15)){
				secondOffset = (int)0;
			}
			bool tmp16 = (secondOffset > totalSeconds);
			if ((tmp16)){
				secondOffset = totalSeconds;
			}
			Float tmp17 = (Float(secondOffset) / Float(totalSeconds));
			Float ratio = tmp17;
			int tmp18 = this->dataLength;
			Float tmp19 = ratio;
			Float tmp20 = (tmp18 * tmp19);
			int tmp21 = ::Std_obj::_int(tmp20);
			int totalOffset = tmp21;
			Dynamic tmp22 = this->handle;
			int tmp23 = totalOffset;
			::lime::media::openal::AL_obj::sourcei(tmp22,(int)4134,tmp23);
		}
	}
	bool tmp1 = this->playing;
	if ((tmp1)){
		::haxe::Timer tmp2 = this->timer;
		bool tmp3 = (tmp2 != null());
		if ((tmp3)){
			::haxe::Timer tmp4 = this->timer;
			tmp4->stop();
		}
		int tmp4 = this->getLength();
		int tmp5 = value;
		int tmp6 = (tmp4 - tmp5);
		int timeRemaining = tmp6;
		bool tmp7 = (timeRemaining > (int)0);
		if ((tmp7)){
			this->completed = false;
			::haxe::Timer tmp8 = ::haxe::Timer_obj::__new(timeRemaining);
			this->timer = tmp8;
			Dynamic tmp9 = this->timer_onRun_dyn();
			::haxe::Timer tmp10 = this->timer;
			tmp10->run = tmp9;
		}
		else{
			this->completed = true;
		}
	}
	int tmp2 = value;
	return tmp2;
}


HX_DEFINE_DYNAMIC_FUNC1(NativeAudioSource_obj,setCurrentTime,return )

Float NativeAudioSource_obj::getGain( ){
	Dynamic tmp = this->handle;
	Float tmp1 = ::lime::media::openal::AL_obj::getSourcef(tmp,(int)4106);
	return tmp1;
}


HX_DEFINE_DYNAMIC_FUNC0(NativeAudioSource_obj,getGain,return )

Float NativeAudioSource_obj::setGain( Float value){
	Dynamic tmp = this->handle;
	Float tmp1 = value;
	::lime::media::openal::AL_obj::sourcef(tmp,(int)4106,tmp1);
	Float tmp2 = value;
	return tmp2;
}


HX_DEFINE_DYNAMIC_FUNC1(NativeAudioSource_obj,setGain,return )

int NativeAudioSource_obj::getLength( ){
	Dynamic tmp = this->length;
	bool tmp1 = (tmp != null());
	if ((tmp1)){
		Dynamic tmp2 = this->length;
		return tmp2;
	}
	int tmp2 = this->samples;
	::lime::media::AudioSource tmp3 = this->parent;
	int tmp4 = tmp3->buffer->sampleRate;
	Float tmp5 = (Float(tmp2) / Float(tmp4));
	Float tmp6 = (tmp5 * (int)1000);
	int tmp7 = ::Std_obj::_int(tmp6);
	::lime::media::AudioSource tmp8 = this->parent;
	int tmp9 = tmp8->offset;
	int tmp10 = (tmp7 - tmp9);
	return tmp10;
}


HX_DEFINE_DYNAMIC_FUNC0(NativeAudioSource_obj,getLength,return )

int NativeAudioSource_obj::setLength( int value){
	bool tmp = this->playing;
	bool tmp1;
	if ((tmp)){
		Dynamic tmp2 = this->length;
		Dynamic tmp3 = tmp2;
		int tmp4 = value;
		tmp1 = (tmp3 != tmp4);
	}
	else{
		tmp1 = false;
	}
	if ((tmp1)){
		::haxe::Timer tmp2 = this->timer;
		bool tmp3 = (tmp2 != null());
		if ((tmp3)){
			::haxe::Timer tmp4 = this->timer;
			tmp4->stop();
		}
		int tmp4 = value;
		int tmp5 = this->getCurrentTime();
		int tmp6 = (tmp4 - tmp5);
		int timeRemaining = tmp6;
		bool tmp7 = (timeRemaining > (int)0);
		if ((tmp7)){
			::haxe::Timer tmp8 = ::haxe::Timer_obj::__new(timeRemaining);
			this->timer = tmp8;
			Dynamic tmp9 = this->timer_onRun_dyn();
			::haxe::Timer tmp10 = this->timer;
			tmp10->run = tmp9;
		}
	}
	Dynamic tmp2 = this->length = value;
	return tmp2;
}


HX_DEFINE_DYNAMIC_FUNC1(NativeAudioSource_obj,setLength,return )

int NativeAudioSource_obj::getLoops( ){
	int tmp = this->loops;
	return tmp;
}


HX_DEFINE_DYNAMIC_FUNC0(NativeAudioSource_obj,getLoops,return )

int NativeAudioSource_obj::setLoops( int value){
	int tmp = this->loops = value;
	return tmp;
}


HX_DEFINE_DYNAMIC_FUNC1(NativeAudioSource_obj,setLoops,return )

::lime::math::Vector4 NativeAudioSource_obj::getPosition( ){
	Dynamic tmp = this->handle;
	Array< Float > value = ::lime::media::openal::AL_obj::getSource3f(tmp,(int)4100);
	Float tmp1 = value->__get((int)0);
	::lime::math::Vector4 tmp2 = this->position;
	tmp2->x = tmp1;
	Float tmp3 = value->__get((int)1);
	::lime::math::Vector4 tmp4 = this->position;
	tmp4->y = tmp3;
	Float tmp5 = value->__get((int)2);
	::lime::math::Vector4 tmp6 = this->position;
	tmp6->z = tmp5;
	::lime::math::Vector4 tmp7 = this->position;
	return tmp7;
}


HX_DEFINE_DYNAMIC_FUNC0(NativeAudioSource_obj,getPosition,return )

::lime::math::Vector4 NativeAudioSource_obj::setPosition( ::lime::math::Vector4 value){
	::lime::math::Vector4 tmp = this->position;
	tmp->x = value->x;
	::lime::math::Vector4 tmp1 = this->position;
	tmp1->y = value->y;
	::lime::math::Vector4 tmp2 = this->position;
	tmp2->z = value->z;
	::lime::math::Vector4 tmp3 = this->position;
	tmp3->w = value->w;
	::lime::media::openal::AL_obj::distanceModel((int)0);
	Dynamic tmp4 = this->handle;
	::lime::math::Vector4 tmp5 = this->position;
	Float tmp6 = tmp5->x;
	::lime::math::Vector4 tmp7 = this->position;
	Float tmp8 = tmp7->y;
	::lime::math::Vector4 tmp9 = this->position;
	Float tmp10 = tmp9->z;
	::lime::media::openal::AL_obj::source3f(tmp4,(int)4100,tmp6,tmp8,tmp10);
	::lime::math::Vector4 tmp11 = this->position;
	return tmp11;
}


HX_DEFINE_DYNAMIC_FUNC1(NativeAudioSource_obj,setPosition,return )

int NativeAudioSource_obj::STREAM_BUFFER_SIZE;

int NativeAudioSource_obj::STREAM_NUM_BUFFERS;

int NativeAudioSource_obj::STREAM_TIMER_FREQUENCY;


NativeAudioSource_obj::NativeAudioSource_obj()
{
}

void NativeAudioSource_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(NativeAudioSource);
	HX_MARK_MEMBER_NAME(buffers,"buffers");
	HX_MARK_MEMBER_NAME(completed,"completed");
	HX_MARK_MEMBER_NAME(dataLength,"dataLength");
	HX_MARK_MEMBER_NAME(format,"format");
	HX_MARK_MEMBER_NAME(handle,"handle");
	HX_MARK_MEMBER_NAME(length,"length");
	HX_MARK_MEMBER_NAME(loops,"loops");
	HX_MARK_MEMBER_NAME(parent,"parent");
	HX_MARK_MEMBER_NAME(playing,"playing");
	HX_MARK_MEMBER_NAME(position,"position");
	HX_MARK_MEMBER_NAME(samples,"samples");
	HX_MARK_MEMBER_NAME(stream,"stream");
	HX_MARK_MEMBER_NAME(streamTimer,"streamTimer");
	HX_MARK_MEMBER_NAME(timer,"timer");
	HX_MARK_END_CLASS();
}

void NativeAudioSource_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(buffers,"buffers");
	HX_VISIT_MEMBER_NAME(completed,"completed");
	HX_VISIT_MEMBER_NAME(dataLength,"dataLength");
	HX_VISIT_MEMBER_NAME(format,"format");
	HX_VISIT_MEMBER_NAME(handle,"handle");
	HX_VISIT_MEMBER_NAME(length,"length");
	HX_VISIT_MEMBER_NAME(loops,"loops");
	HX_VISIT_MEMBER_NAME(parent,"parent");
	HX_VISIT_MEMBER_NAME(playing,"playing");
	HX_VISIT_MEMBER_NAME(position,"position");
	HX_VISIT_MEMBER_NAME(samples,"samples");
	HX_VISIT_MEMBER_NAME(stream,"stream");
	HX_VISIT_MEMBER_NAME(streamTimer,"streamTimer");
	HX_VISIT_MEMBER_NAME(timer,"timer");
}

Dynamic NativeAudioSource_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"init") ) { return init_dyn(); }
		if (HX_FIELD_EQ(inName,"play") ) { return play_dyn(); }
		if (HX_FIELD_EQ(inName,"stop") ) { return stop_dyn(); }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"loops") ) { return loops; }
		if (HX_FIELD_EQ(inName,"timer") ) { return timer; }
		if (HX_FIELD_EQ(inName,"pause") ) { return pause_dyn(); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"format") ) { return format; }
		if (HX_FIELD_EQ(inName,"handle") ) { return handle; }
		if (HX_FIELD_EQ(inName,"length") ) { return length; }
		if (HX_FIELD_EQ(inName,"parent") ) { return parent; }
		if (HX_FIELD_EQ(inName,"stream") ) { return stream; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"buffers") ) { return buffers; }
		if (HX_FIELD_EQ(inName,"playing") ) { return playing; }
		if (HX_FIELD_EQ(inName,"samples") ) { return samples; }
		if (HX_FIELD_EQ(inName,"dispose") ) { return dispose_dyn(); }
		if (HX_FIELD_EQ(inName,"getGain") ) { return getGain_dyn(); }
		if (HX_FIELD_EQ(inName,"setGain") ) { return setGain_dyn(); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"position") ) { return position; }
		if (HX_FIELD_EQ(inName,"getLoops") ) { return getLoops_dyn(); }
		if (HX_FIELD_EQ(inName,"setLoops") ) { return setLoops_dyn(); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"completed") ) { return completed; }
		if (HX_FIELD_EQ(inName,"getLength") ) { return getLength_dyn(); }
		if (HX_FIELD_EQ(inName,"setLength") ) { return setLength_dyn(); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"dataLength") ) { return dataLength; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"streamTimer") ) { return streamTimer; }
		if (HX_FIELD_EQ(inName,"timer_onRun") ) { return timer_onRun_dyn(); }
		if (HX_FIELD_EQ(inName,"getPosition") ) { return getPosition_dyn(); }
		if (HX_FIELD_EQ(inName,"setPosition") ) { return setPosition_dyn(); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"refillBuffers") ) { return refillBuffers_dyn(); }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"getCurrentTime") ) { return getCurrentTime_dyn(); }
		if (HX_FIELD_EQ(inName,"setCurrentTime") ) { return setCurrentTime_dyn(); }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"streamTimer_onRun") ) { return streamTimer_onRun_dyn(); }
		break;
	case 20:
		if (HX_FIELD_EQ(inName,"readVorbisFileBuffer") ) { return readVorbisFileBuffer_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

bool NativeAudioSource_obj::__GetStatic(const ::String &inName, Dynamic &outValue, hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 18:
		if (HX_FIELD_EQ(inName,"STREAM_BUFFER_SIZE") ) { outValue = STREAM_BUFFER_SIZE; return true;  }
		if (HX_FIELD_EQ(inName,"STREAM_NUM_BUFFERS") ) { outValue = STREAM_NUM_BUFFERS; return true;  }
		break;
	case 22:
		if (HX_FIELD_EQ(inName,"STREAM_TIMER_FREQUENCY") ) { outValue = STREAM_TIMER_FREQUENCY; return true;  }
	}
	return false;
}

Dynamic NativeAudioSource_obj::__SetField(const ::String &inName,const Dynamic &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"loops") ) { loops=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"timer") ) { timer=inValue.Cast< ::haxe::Timer >(); return inValue; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"format") ) { format=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"handle") ) { handle=inValue.Cast< Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"length") ) { length=inValue.Cast< Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"parent") ) { parent=inValue.Cast< ::lime::media::AudioSource >(); return inValue; }
		if (HX_FIELD_EQ(inName,"stream") ) { stream=inValue.Cast< bool >(); return inValue; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"buffers") ) { buffers=inValue.Cast< cpp::ArrayBase >(); return inValue; }
		if (HX_FIELD_EQ(inName,"playing") ) { playing=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"samples") ) { samples=inValue.Cast< int >(); return inValue; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"position") ) { position=inValue.Cast< ::lime::math::Vector4 >(); return inValue; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"completed") ) { completed=inValue.Cast< bool >(); return inValue; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"dataLength") ) { dataLength=inValue.Cast< int >(); return inValue; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"streamTimer") ) { streamTimer=inValue.Cast< ::haxe::Timer >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

bool NativeAudioSource_obj::__SetStatic(const ::String &inName,Dynamic &ioValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 18:
		if (HX_FIELD_EQ(inName,"STREAM_BUFFER_SIZE") ) { STREAM_BUFFER_SIZE=ioValue.Cast< int >(); return true; }
		if (HX_FIELD_EQ(inName,"STREAM_NUM_BUFFERS") ) { STREAM_NUM_BUFFERS=ioValue.Cast< int >(); return true; }
		break;
	case 22:
		if (HX_FIELD_EQ(inName,"STREAM_TIMER_FREQUENCY") ) { STREAM_TIMER_FREQUENCY=ioValue.Cast< int >(); return true; }
	}
	return false;
}

void NativeAudioSource_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("buffers","\x73","\xa3","\x90","\xb1"));
	outFields->push(HX_HCSTRING("completed","\x8b","\xa1","\x38","\x4f"));
	outFields->push(HX_HCSTRING("dataLength","\xb0","\x5a","\xa9","\x8a"));
	outFields->push(HX_HCSTRING("format","\x37","\x8f","\x8e","\xfd"));
	outFields->push(HX_HCSTRING("handle","\xa8","\x83","\xfd","\xb7"));
	outFields->push(HX_HCSTRING("length","\xe6","\x94","\x07","\x9f"));
	outFields->push(HX_HCSTRING("loops","\x8f","\xf1","\xf9","\x78"));
	outFields->push(HX_HCSTRING("parent","\x2a","\x05","\x7e","\xed"));
	outFields->push(HX_HCSTRING("playing","\x6e","\x0f","\x18","\x8a"));
	outFields->push(HX_HCSTRING("position","\xa9","\xa0","\xfa","\xca"));
	outFields->push(HX_HCSTRING("samples","\x09","\xc5","\xc9","\x83"));
	outFields->push(HX_HCSTRING("stream","\x80","\x14","\x2d","\x11"));
	outFields->push(HX_HCSTRING("streamTimer","\x25","\xcb","\xfb","\x7f"));
	outFields->push(HX_HCSTRING("timer","\xc5","\xbf","\x35","\x10"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsObject /*cpp::ArrayBase*/ ,(int)offsetof(NativeAudioSource_obj,buffers),HX_HCSTRING("buffers","\x73","\xa3","\x90","\xb1")},
	{hx::fsBool,(int)offsetof(NativeAudioSource_obj,completed),HX_HCSTRING("completed","\x8b","\xa1","\x38","\x4f")},
	{hx::fsInt,(int)offsetof(NativeAudioSource_obj,dataLength),HX_HCSTRING("dataLength","\xb0","\x5a","\xa9","\x8a")},
	{hx::fsInt,(int)offsetof(NativeAudioSource_obj,format),HX_HCSTRING("format","\x37","\x8f","\x8e","\xfd")},
	{hx::fsObject /*Dynamic*/ ,(int)offsetof(NativeAudioSource_obj,handle),HX_HCSTRING("handle","\xa8","\x83","\xfd","\xb7")},
	{hx::fsObject /*Dynamic*/ ,(int)offsetof(NativeAudioSource_obj,length),HX_HCSTRING("length","\xe6","\x94","\x07","\x9f")},
	{hx::fsInt,(int)offsetof(NativeAudioSource_obj,loops),HX_HCSTRING("loops","\x8f","\xf1","\xf9","\x78")},
	{hx::fsObject /*::lime::media::AudioSource*/ ,(int)offsetof(NativeAudioSource_obj,parent),HX_HCSTRING("parent","\x2a","\x05","\x7e","\xed")},
	{hx::fsBool,(int)offsetof(NativeAudioSource_obj,playing),HX_HCSTRING("playing","\x6e","\x0f","\x18","\x8a")},
	{hx::fsObject /*::lime::math::Vector4*/ ,(int)offsetof(NativeAudioSource_obj,position),HX_HCSTRING("position","\xa9","\xa0","\xfa","\xca")},
	{hx::fsInt,(int)offsetof(NativeAudioSource_obj,samples),HX_HCSTRING("samples","\x09","\xc5","\xc9","\x83")},
	{hx::fsBool,(int)offsetof(NativeAudioSource_obj,stream),HX_HCSTRING("stream","\x80","\x14","\x2d","\x11")},
	{hx::fsObject /*::haxe::Timer*/ ,(int)offsetof(NativeAudioSource_obj,streamTimer),HX_HCSTRING("streamTimer","\x25","\xcb","\xfb","\x7f")},
	{hx::fsObject /*::haxe::Timer*/ ,(int)offsetof(NativeAudioSource_obj,timer),HX_HCSTRING("timer","\xc5","\xbf","\x35","\x10")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo sStaticStorageInfo[] = {
	{hx::fsInt,(void *) &NativeAudioSource_obj::STREAM_BUFFER_SIZE,HX_HCSTRING("STREAM_BUFFER_SIZE","\x21","\xaa","\x29","\xff")},
	{hx::fsInt,(void *) &NativeAudioSource_obj::STREAM_NUM_BUFFERS,HX_HCSTRING("STREAM_NUM_BUFFERS","\x7b","\x0f","\xd0","\xac")},
	{hx::fsInt,(void *) &NativeAudioSource_obj::STREAM_TIMER_FREQUENCY,HX_HCSTRING("STREAM_TIMER_FREQUENCY","\x23","\x49","\x97","\x07")},
	{ hx::fsUnknown, 0, null()}
};
#endif

static ::String sMemberFields[] = {
	HX_HCSTRING("buffers","\x73","\xa3","\x90","\xb1"),
	HX_HCSTRING("completed","\x8b","\xa1","\x38","\x4f"),
	HX_HCSTRING("dataLength","\xb0","\x5a","\xa9","\x8a"),
	HX_HCSTRING("format","\x37","\x8f","\x8e","\xfd"),
	HX_HCSTRING("handle","\xa8","\x83","\xfd","\xb7"),
	HX_HCSTRING("length","\xe6","\x94","\x07","\x9f"),
	HX_HCSTRING("loops","\x8f","\xf1","\xf9","\x78"),
	HX_HCSTRING("parent","\x2a","\x05","\x7e","\xed"),
	HX_HCSTRING("playing","\x6e","\x0f","\x18","\x8a"),
	HX_HCSTRING("position","\xa9","\xa0","\xfa","\xca"),
	HX_HCSTRING("samples","\x09","\xc5","\xc9","\x83"),
	HX_HCSTRING("stream","\x80","\x14","\x2d","\x11"),
	HX_HCSTRING("streamTimer","\x25","\xcb","\xfb","\x7f"),
	HX_HCSTRING("timer","\xc5","\xbf","\x35","\x10"),
	HX_HCSTRING("dispose","\x9f","\x80","\x4c","\xbb"),
	HX_HCSTRING("init","\x10","\x3b","\xbb","\x45"),
	HX_HCSTRING("play","\xf4","\x2d","\x5a","\x4a"),
	HX_HCSTRING("pause","\xf6","\xd6","\x57","\xbd"),
	HX_HCSTRING("readVorbisFileBuffer","\x45","\x45","\x75","\x21"),
	HX_HCSTRING("refillBuffers","\x5d","\x46","\x6a","\xd5"),
	HX_HCSTRING("stop","\x02","\xf0","\x5b","\x4c"),
	HX_HCSTRING("streamTimer_onRun","\x92","\xf7","\x55","\xe4"),
	HX_HCSTRING("timer_onRun","\x32","\x24","\xe9","\x57"),
	HX_HCSTRING("getCurrentTime","\xf0","\xf7","\x2c","\x0d"),
	HX_HCSTRING("setCurrentTime","\x64","\xe0","\x4c","\x2d"),
	HX_HCSTRING("getGain","\x35","\xa0","\xe1","\x16"),
	HX_HCSTRING("setGain","\x41","\x31","\xe3","\x09"),
	HX_HCSTRING("getLength","\x1c","\x1e","\x5e","\x1b"),
	HX_HCSTRING("setLength","\x28","\x0a","\xaf","\xfe"),
	HX_HCSTRING("getLoops","\x19","\x01","\xd1","\xd8"),
	HX_HCSTRING("setLoops","\x8d","\x5a","\x2e","\x87"),
	HX_HCSTRING("getPosition","\x5f","\x63","\xee","\xf0"),
	HX_HCSTRING("setPosition","\x6b","\x6a","\x5b","\xfb"),
	::String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(NativeAudioSource_obj::__mClass,"__mClass");
	HX_MARK_MEMBER_NAME(NativeAudioSource_obj::STREAM_BUFFER_SIZE,"STREAM_BUFFER_SIZE");
	HX_MARK_MEMBER_NAME(NativeAudioSource_obj::STREAM_NUM_BUFFERS,"STREAM_NUM_BUFFERS");
	HX_MARK_MEMBER_NAME(NativeAudioSource_obj::STREAM_TIMER_FREQUENCY,"STREAM_TIMER_FREQUENCY");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(NativeAudioSource_obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(NativeAudioSource_obj::STREAM_BUFFER_SIZE,"STREAM_BUFFER_SIZE");
	HX_VISIT_MEMBER_NAME(NativeAudioSource_obj::STREAM_NUM_BUFFERS,"STREAM_NUM_BUFFERS");
	HX_VISIT_MEMBER_NAME(NativeAudioSource_obj::STREAM_TIMER_FREQUENCY,"STREAM_TIMER_FREQUENCY");
};

#endif

hx::Class NativeAudioSource_obj::__mClass;

static ::String sStaticFields[] = {
	HX_HCSTRING("STREAM_BUFFER_SIZE","\x21","\xaa","\x29","\xff"),
	HX_HCSTRING("STREAM_NUM_BUFFERS","\x7b","\x0f","\xd0","\xac"),
	HX_HCSTRING("STREAM_TIMER_FREQUENCY","\x23","\x49","\x97","\x07"),
	::String(null()) };

void NativeAudioSource_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("lime._backend.native.NativeAudioSource","\xa3","\xbb","\x85","\x6b");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &NativeAudioSource_obj::__GetStatic;
	__mClass->mSetStaticField = &NativeAudioSource_obj::__SetStatic;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(sStaticFields);
	__mClass->mMembers = hx::Class_obj::dupFunctions(sMemberFields);
	__mClass->mCanCast = hx::TCanCast< NativeAudioSource_obj >;
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

void NativeAudioSource_obj::__boot()
{
	STREAM_BUFFER_SIZE= (int)48000;
	STREAM_NUM_BUFFERS= (int)3;
	STREAM_TIMER_FREQUENCY= (int)100;
}

} // end namespace lime
} // end namespace _backend
} // end namespace native
