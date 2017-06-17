#include <hxcpp.h>

#include "hxMath.h"
#ifndef INCLUDED_Std
#include <Std.h>
#endif
#ifndef INCLUDED_haxe_io_Bytes
#include <haxe/io/Bytes.h>
#endif
#ifndef INCLUDED_lime_app_Future
#include <lime/app/Future.h>
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
#ifndef INCLUDED_openfl_events_ErrorEvent
#include <openfl/events/ErrorEvent.h>
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
#ifndef INCLUDED_openfl_events_IOErrorEvent
#include <openfl/events/IOErrorEvent.h>
#endif
#ifndef INCLUDED_openfl_events_TextEvent
#include <openfl/events/TextEvent.h>
#endif
#ifndef INCLUDED_openfl_media_ID3Info
#include <openfl/media/ID3Info.h>
#endif
#ifndef INCLUDED_openfl_media_Sound
#include <openfl/media/Sound.h>
#endif
#ifndef INCLUDED_openfl_media_SoundChannel
#include <openfl/media/SoundChannel.h>
#endif
#ifndef INCLUDED_openfl_media_SoundLoaderContext
#include <openfl/media/SoundLoaderContext.h>
#endif
#ifndef INCLUDED_openfl_media_SoundMixer
#include <openfl/media/SoundMixer.h>
#endif
#ifndef INCLUDED_openfl_media_SoundTransform
#include <openfl/media/SoundTransform.h>
#endif
#ifndef INCLUDED_openfl_net_URLRequest
#include <openfl/net/URLRequest.h>
#endif
#ifndef INCLUDED_openfl_utils_ByteArrayData
#include <openfl/utils/ByteArrayData.h>
#endif
#ifndef INCLUDED_openfl_utils_IDataInput
#include <openfl/utils/IDataInput.h>
#endif
#ifndef INCLUDED_openfl_utils_IDataOutput
#include <openfl/utils/IDataOutput.h>
#endif
#ifndef INCLUDED_openfl_utils__ByteArray_ByteArray_Impl_
#include <openfl/utils/_ByteArray/ByteArray_Impl_.h>
#endif
namespace openfl{
namespace media{

Void Sound_obj::__construct(::openfl::net::URLRequest stream,::openfl::media::SoundLoaderContext context)
{
HX_STACK_FRAME("openfl.media.Sound","new",0xfdfd1c39,"openfl.media.Sound.new","openfl/media/Sound.hx",34,0x46a01619)
HX_STACK_THIS(this)
HX_STACK_ARG(stream,"stream")
HX_STACK_ARG(context,"context")
{
	HX_STACK_LINE(36)
	super::__construct(hx::ObjectPtr<OBJ_>(this));
	HX_STACK_LINE(38)
	this->bytesLoaded = (int)0;
	HX_STACK_LINE(39)
	this->bytesTotal = (int)0;
	HX_STACK_LINE(40)
	this->isBuffering = false;
	HX_STACK_LINE(41)
	this->url = null();
	HX_STACK_LINE(43)
	bool tmp = (stream != null());		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(43)
	if ((tmp)){
		HX_STACK_LINE(45)
		::openfl::net::URLRequest tmp1 = stream;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(45)
		::openfl::media::SoundLoaderContext tmp2 = context;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(45)
		this->load(tmp1,tmp2);
	}
}
;
	return null();
}

//Sound_obj::~Sound_obj() { }

Dynamic Sound_obj::__CreateEmpty() { return  new Sound_obj; }
hx::ObjectPtr< Sound_obj > Sound_obj::__new(::openfl::net::URLRequest stream,::openfl::media::SoundLoaderContext context)
{  hx::ObjectPtr< Sound_obj > _result_ = new Sound_obj();
	_result_->__construct(stream,context);
	return _result_;}

Dynamic Sound_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< Sound_obj > _result_ = new Sound_obj();
	_result_->__construct(inArgs[0],inArgs[1]);
	return _result_;}

Void Sound_obj::close( ){
{
		HX_STACK_FRAME("openfl.media.Sound","close",0xfbd9cbd1,"openfl.media.Sound.close","openfl/media/Sound.hx",52,0x46a01619)
		HX_STACK_THIS(this)
		HX_STACK_LINE(54)
		::lime::media::AudioBuffer tmp = this->__buffer;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(54)
		bool tmp1 = (tmp != null());		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(54)
		if ((tmp1)){
			HX_STACK_LINE(56)
			::lime::media::AudioBuffer tmp2 = this->__buffer;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(56)
			tmp2->dispose();
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(Sound_obj,close,(void))

Void Sound_obj::load( ::openfl::net::URLRequest stream,::openfl::media::SoundLoaderContext context){
{
		HX_STACK_FRAME("openfl.media.Sound","load",0x3e30ac2d,"openfl.media.Sound.load","openfl/media/Sound.hx",79,0x46a01619)
		HX_STACK_THIS(this)
		HX_STACK_ARG(stream,"stream")
		HX_STACK_ARG(context,"context")
		HX_STACK_LINE(79)
		::openfl::media::Sound _g = hx::ObjectPtr<OBJ_>(this);		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(81)
		this->url = stream->url;
		HX_STACK_LINE(99)
		::String tmp = this->url;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(99)
		::lime::app::Future tmp1 = ::lime::media::AudioBuffer_obj::loadFromFile(tmp);		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(99)
		Dynamic tmp2 = this->AudioBuffer_onURLLoad_dyn();		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(99)
		::lime::app::Future tmp3 = tmp1->onComplete(tmp2);		HX_STACK_VAR(tmp3,"tmp3");

		HX_BEGIN_LOCAL_FUNC_S1(hx::LocalFunc,_Function_1_1,::openfl::media::Sound,_g)
		int __ArgCount() const { return 1; }
		Void run(Dynamic _){
			HX_STACK_FRAME("*","_Function_1_1",0x5200ed37,"*._Function_1_1","openfl/media/Sound.hx",99,0x46a01619)
			HX_STACK_ARG(_,"_")
			{
				HX_STACK_LINE(99)
				_g->AudioBuffer_onURLLoad(null());
			}
			return null();
		}
		HX_END_LOCAL_FUNC1((void))

		HX_STACK_LINE(99)
		tmp3->onError( Dynamic(new _Function_1_1(_g)));
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(Sound_obj,load,(void))

Void Sound_obj::loadCompressedDataFromByteArray( ::openfl::utils::ByteArrayData bytes,int bytesLength){
{
		HX_STACK_FRAME("openfl.media.Sound","loadCompressedDataFromByteArray",0x8f237f2f,"openfl.media.Sound.loadCompressedDataFromByteArray","openfl/media/Sound.hx",106,0x46a01619)
		HX_STACK_THIS(this)
		HX_STACK_ARG(bytes,"bytes")
		HX_STACK_ARG(bytesLength,"bytesLength")
		HX_STACK_LINE(108)
		bool tmp = (bytes == null());		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(108)
		bool tmp1 = !(tmp);		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(108)
		bool tmp2;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(108)
		if ((tmp1)){
			HX_STACK_LINE(108)
			tmp2 = (bytesLength <= (int)0);
		}
		else{
			HX_STACK_LINE(108)
			tmp2 = true;
		}
		HX_STACK_LINE(108)
		if ((tmp2)){
			HX_STACK_LINE(110)
			::openfl::events::IOErrorEvent tmp3 = ::openfl::events::IOErrorEvent_obj::__new(HX_HCSTRING("ioError","\x02","\xfe","\x41","\x76"),null(),null(),null(),null());		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(110)
			this->dispatchEvent(tmp3);
			HX_STACK_LINE(111)
			return null();
		}
		HX_STACK_LINE(115)
		::openfl::utils::ByteArrayData tmp3 = bytes;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(115)
		int tmp4 = ::openfl::utils::_ByteArray::ByteArray_Impl__obj::get_length(tmp3);		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(115)
		int tmp5 = bytesLength;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(115)
		bool tmp6 = (tmp4 > tmp5);		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(115)
		if ((tmp6)){
			HX_STACK_LINE(117)
			::openfl::utils::ByteArrayData tmp7 = ::openfl::utils::ByteArrayData_obj::__new(bytesLength);		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(117)
			::openfl::utils::ByteArrayData copy = tmp7;		HX_STACK_VAR(copy,"copy");
			HX_STACK_LINE(118)
			::openfl::utils::ByteArrayData tmp8 = bytes;		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(118)
			int tmp9 = bytesLength;		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(118)
			copy->writeBytes(tmp8,(int)0,tmp9);
			HX_STACK_LINE(119)
			bytes = copy;
		}
		HX_STACK_LINE(123)
		::openfl::utils::ByteArrayData tmp7 = bytes;		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(123)
		::haxe::io::Bytes tmp8 = ::openfl::utils::_ByteArray::ByteArray_Impl__obj::toArrayBuffer(tmp7);		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(123)
		::lime::media::AudioBuffer tmp9 = ::lime::media::AudioBuffer_obj::fromBytes(tmp8);		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(123)
		this->__buffer = tmp9;
		HX_STACK_LINE(125)
		::lime::media::AudioBuffer tmp10 = this->__buffer;		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(125)
		bool tmp11 = (tmp10 == null());		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(125)
		if ((tmp11)){
			HX_STACK_LINE(127)
			::openfl::events::IOErrorEvent tmp12 = ::openfl::events::IOErrorEvent_obj::__new(HX_HCSTRING("ioError","\x02","\xfe","\x41","\x76"),null(),null(),null(),null());		HX_STACK_VAR(tmp12,"tmp12");
			HX_STACK_LINE(127)
			this->dispatchEvent(tmp12);
		}
		else{
			HX_STACK_LINE(131)
			::openfl::events::Event tmp12 = ::openfl::events::Event_obj::__new(HX_HCSTRING("complete","\xb9","\x00","\xc8","\x7f"),null(),null());		HX_STACK_VAR(tmp12,"tmp12");
			HX_STACK_LINE(131)
			this->dispatchEvent(tmp12);
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(Sound_obj,loadCompressedDataFromByteArray,(void))

Void Sound_obj::loadPCMFromByteArray( ::openfl::utils::ByteArrayData bytes,int samples,::String __o_format,hx::Null< bool >  __o_stereo,hx::Null< Float >  __o_sampleRate){
::String format = __o_format.Default(HX_HCSTRING("float","\x9c","\xc5","\x96","\x02"));
bool stereo = __o_stereo.Default(true);
Float sampleRate = __o_sampleRate.Default(44100);
	HX_STACK_FRAME("openfl.media.Sound","loadPCMFromByteArray",0xb6cc217a,"openfl.media.Sound.loadPCMFromByteArray","openfl/media/Sound.hx",138,0x46a01619)
	HX_STACK_THIS(this)
	HX_STACK_ARG(bytes,"bytes")
	HX_STACK_ARG(samples,"samples")
	HX_STACK_ARG(format,"format")
	HX_STACK_ARG(stereo,"stereo")
	HX_STACK_ARG(sampleRate,"sampleRate")
{
		HX_STACK_LINE(140)
		bool tmp = (bytes == null());		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(140)
		if ((tmp)){
			HX_STACK_LINE(142)
			::openfl::events::IOErrorEvent tmp1 = ::openfl::events::IOErrorEvent_obj::__new(HX_HCSTRING("ioError","\x02","\xfe","\x41","\x76"),null(),null(),null(),null());		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(142)
			this->dispatchEvent(tmp1);
			HX_STACK_LINE(143)
			return null();
		}
		HX_STACK_LINE(147)
		::lime::media::AudioBuffer tmp1 = ::lime::media::AudioBuffer_obj::__new();		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(147)
		::lime::media::AudioBuffer audioBuffer = tmp1;		HX_STACK_VAR(audioBuffer,"audioBuffer");
		HX_STACK_LINE(148)
		bool tmp2 = (format == HX_HCSTRING("float","\x9c","\xc5","\x96","\x02"));		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(148)
		int tmp3;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(148)
		if ((tmp2)){
			HX_STACK_LINE(148)
			tmp3 = (int)32;
		}
		else{
			HX_STACK_LINE(148)
			tmp3 = (int)16;
		}
		HX_STACK_LINE(148)
		audioBuffer->bitsPerSample = tmp3;
		HX_STACK_LINE(149)
		bool tmp4 = stereo;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(149)
		int tmp5;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(149)
		if ((tmp4)){
			HX_STACK_LINE(149)
			tmp5 = (int)2;
		}
		else{
			HX_STACK_LINE(149)
			tmp5 = (int)1;
		}
		HX_STACK_LINE(149)
		audioBuffer->channels = tmp5;
		HX_STACK_LINE(150)
		::lime::utils::ArrayBufferView tmp6;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(150)
		{
			HX_STACK_LINE(150)
			::openfl::utils::ByteArrayData tmp7 = bytes;		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(150)
			::haxe::io::Bytes tmp8 = ::openfl::utils::_ByteArray::ByteArray_Impl__obj::toArrayBuffer(tmp7);		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(150)
			::haxe::io::Bytes buffer = tmp8;		HX_STACK_VAR(buffer,"buffer");
			HX_STACK_LINE(150)
			::lime::utils::ArrayBufferView this1;		HX_STACK_VAR(this1,"this1");
			HX_STACK_LINE(150)
			bool tmp9 = false;		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(150)
			if ((tmp9)){
				HX_STACK_LINE(150)
				::lime::utils::ArrayBufferView tmp10 = ::lime::utils::ArrayBufferView_obj::__new(null(),(int)4);		HX_STACK_VAR(tmp10,"tmp10");
				HX_STACK_LINE(150)
				this1 = tmp10;
			}
			else{
				HX_STACK_LINE(150)
				bool tmp10 = false;		HX_STACK_VAR(tmp10,"tmp10");
				HX_STACK_LINE(150)
				if ((tmp10)){
					HX_STACK_LINE(150)
					::lime::utils::ArrayBufferView tmp11;		HX_STACK_VAR(tmp11,"tmp11");
					HX_STACK_LINE(150)
					{
						HX_STACK_LINE(150)
						::lime::utils::ArrayBufferView tmp12 = ::lime::utils::ArrayBufferView_obj::__new((int)0,(int)4);		HX_STACK_VAR(tmp12,"tmp12");
						HX_STACK_LINE(150)
						::lime::utils::ArrayBufferView _this = tmp12;		HX_STACK_VAR(_this,"_this");
						HX_STACK_LINE(150)
						_this->byteOffset = (int)0;
						HX_STACK_LINE(150)
						int tmp13 = hx::Throw(HX_CSTRING("Invalid field access on null object"));		HX_STACK_VAR(tmp13,"tmp13");
						HX_STACK_LINE(150)
						_this->length = tmp13;
						HX_STACK_LINE(150)
						int tmp14 = (_this->length * _this->bytesPerElement);		HX_STACK_VAR(tmp14,"tmp14");
						HX_STACK_LINE(150)
						_this->byteLength = tmp14;
						HX_STACK_LINE(150)
						::haxe::io::Bytes tmp15;		HX_STACK_VAR(tmp15,"tmp15");
						HX_STACK_LINE(150)
						{
							HX_STACK_LINE(150)
							::haxe::io::Bytes this2;		HX_STACK_VAR(this2,"this2");
							HX_STACK_LINE(150)
							int tmp16 = _this->byteLength;		HX_STACK_VAR(tmp16,"tmp16");
							HX_STACK_LINE(150)
							::haxe::io::Bytes tmp17 = ::haxe::io::Bytes_obj::alloc(tmp16);		HX_STACK_VAR(tmp17,"tmp17");
							HX_STACK_LINE(150)
							this2 = tmp17;
							HX_STACK_LINE(150)
							tmp15 = this2;
						}
						HX_STACK_LINE(150)
						_this->buffer = tmp15;
						HX_STACK_LINE(150)
						_this->copyFromArray(((Array< Float >)(null())),null());
						HX_STACK_LINE(150)
						tmp11 = _this;
					}
					HX_STACK_LINE(150)
					this1 = tmp11;
				}
				else{
					HX_STACK_LINE(150)
					bool tmp11 = false;		HX_STACK_VAR(tmp11,"tmp11");
					HX_STACK_LINE(150)
					if ((tmp11)){
						HX_STACK_LINE(150)
						::lime::utils::ArrayBufferView tmp12;		HX_STACK_VAR(tmp12,"tmp12");
						HX_STACK_LINE(150)
						{
							HX_STACK_LINE(150)
							::lime::utils::ArrayBufferView tmp13 = ::lime::utils::ArrayBufferView_obj::__new((int)0,(int)4);		HX_STACK_VAR(tmp13,"tmp13");
							HX_STACK_LINE(150)
							::lime::utils::ArrayBufferView _this = tmp13;		HX_STACK_VAR(_this,"_this");
							HX_STACK_LINE(150)
							cpp::ArrayBase array = hx::Throw(HX_CSTRING("Invalid field access on null object"));		HX_STACK_VAR(array,"array");
							HX_STACK_LINE(150)
							_this->byteOffset = (int)0;
							HX_STACK_LINE(150)
							_this->length = array->__Field(HX_HCSTRING("length","\xe6","\x94","\x07","\x9f"), hx::paccDynamic );
							HX_STACK_LINE(150)
							int tmp14 = (_this->length * _this->bytesPerElement);		HX_STACK_VAR(tmp14,"tmp14");
							HX_STACK_LINE(150)
							_this->byteLength = tmp14;
							HX_STACK_LINE(150)
							::haxe::io::Bytes tmp15;		HX_STACK_VAR(tmp15,"tmp15");
							HX_STACK_LINE(150)
							{
								HX_STACK_LINE(150)
								::haxe::io::Bytes this2;		HX_STACK_VAR(this2,"this2");
								HX_STACK_LINE(150)
								int tmp16 = _this->byteLength;		HX_STACK_VAR(tmp16,"tmp16");
								HX_STACK_LINE(150)
								::haxe::io::Bytes tmp17 = ::haxe::io::Bytes_obj::alloc(tmp16);		HX_STACK_VAR(tmp17,"tmp17");
								HX_STACK_LINE(150)
								this2 = tmp17;
								HX_STACK_LINE(150)
								tmp15 = this2;
							}
							HX_STACK_LINE(150)
							_this->buffer = tmp15;
							HX_STACK_LINE(150)
							_this->copyFromArray(((Array< Float >)(array)),null());
							HX_STACK_LINE(150)
							tmp12 = _this;
						}
						HX_STACK_LINE(150)
						this1 = tmp12;
					}
					else{
						HX_STACK_LINE(150)
						bool tmp12 = false;		HX_STACK_VAR(tmp12,"tmp12");
						HX_STACK_LINE(150)
						if ((tmp12)){
							HX_STACK_LINE(150)
							::lime::utils::ArrayBufferView tmp13;		HX_STACK_VAR(tmp13,"tmp13");
							HX_STACK_LINE(150)
							{
								HX_STACK_LINE(150)
								::lime::utils::ArrayBufferView tmp14 = ::lime::utils::ArrayBufferView_obj::__new((int)0,(int)4);		HX_STACK_VAR(tmp14,"tmp14");
								HX_STACK_LINE(150)
								::lime::utils::ArrayBufferView _this = tmp14;		HX_STACK_VAR(_this,"_this");
								HX_STACK_LINE(150)
								::haxe::io::Bytes tmp15 = hx::Throw(HX_CSTRING("Invalid field access on null object"));		HX_STACK_VAR(tmp15,"tmp15");
								HX_STACK_LINE(150)
								::haxe::io::Bytes srcData = tmp15;		HX_STACK_VAR(srcData,"srcData");
								HX_STACK_LINE(150)
								int tmp16 = hx::Throw(HX_CSTRING("Invalid field access on null object"));		HX_STACK_VAR(tmp16,"tmp16");
								HX_STACK_LINE(150)
								int srcLength = tmp16;		HX_STACK_VAR(srcLength,"srcLength");
								HX_STACK_LINE(150)
								int tmp17 = hx::Throw(HX_CSTRING("Invalid field access on null object"));		HX_STACK_VAR(tmp17,"tmp17");
								HX_STACK_LINE(150)
								int srcByteOffset = tmp17;		HX_STACK_VAR(srcByteOffset,"srcByteOffset");
								HX_STACK_LINE(150)
								int tmp18 = hx::Throw(HX_CSTRING("Invalid field access on null object"));		HX_STACK_VAR(tmp18,"tmp18");
								HX_STACK_LINE(150)
								int srcElementSize = tmp18;		HX_STACK_VAR(srcElementSize,"srcElementSize");
								HX_STACK_LINE(150)
								int elementSize = _this->bytesPerElement;		HX_STACK_VAR(elementSize,"elementSize");
								HX_STACK_LINE(150)
								int tmp19 = hx::Throw(HX_CSTRING("Invalid field access on null object"));		HX_STACK_VAR(tmp19,"tmp19");
								HX_STACK_LINE(150)
								int tmp20 = _this->type;		HX_STACK_VAR(tmp20,"tmp20");
								HX_STACK_LINE(150)
								bool tmp21 = (tmp19 == tmp20);		HX_STACK_VAR(tmp21,"tmp21");
								HX_STACK_LINE(150)
								if ((tmp21)){
									HX_STACK_LINE(150)
									int srcLength1 = srcData->length;		HX_STACK_VAR(srcLength1,"srcLength1");
									HX_STACK_LINE(150)
									int tmp22 = (srcLength1 - srcByteOffset);		HX_STACK_VAR(tmp22,"tmp22");
									HX_STACK_LINE(150)
									int cloneLength = tmp22;		HX_STACK_VAR(cloneLength,"cloneLength");
									HX_STACK_LINE(150)
									::haxe::io::Bytes tmp23;		HX_STACK_VAR(tmp23,"tmp23");
									HX_STACK_LINE(150)
									{
										HX_STACK_LINE(150)
										::haxe::io::Bytes this2;		HX_STACK_VAR(this2,"this2");
										HX_STACK_LINE(150)
										int tmp24 = cloneLength;		HX_STACK_VAR(tmp24,"tmp24");
										HX_STACK_LINE(150)
										::haxe::io::Bytes tmp25 = ::haxe::io::Bytes_obj::alloc(tmp24);		HX_STACK_VAR(tmp25,"tmp25");
										HX_STACK_LINE(150)
										this2 = tmp25;
										HX_STACK_LINE(150)
										tmp23 = this2;
									}
									HX_STACK_LINE(150)
									_this->buffer = tmp23;
									HX_STACK_LINE(150)
									::haxe::io::Bytes tmp24 = srcData;		HX_STACK_VAR(tmp24,"tmp24");
									HX_STACK_LINE(150)
									int tmp25 = srcByteOffset;		HX_STACK_VAR(tmp25,"tmp25");
									HX_STACK_LINE(150)
									int tmp26 = cloneLength;		HX_STACK_VAR(tmp26,"tmp26");
									HX_STACK_LINE(150)
									_this->buffer->blit((int)0,tmp24,tmp25,tmp26);
								}
								else{
									HX_STACK_LINE(150)
									HX_STACK_DO_THROW(HX_HCSTRING("unimplemented","\x09","\x2f","\x74","\xb4"));
								}
								HX_STACK_LINE(150)
								int tmp22 = (_this->bytesPerElement * srcLength);		HX_STACK_VAR(tmp22,"tmp22");
								HX_STACK_LINE(150)
								_this->byteLength = tmp22;
								HX_STACK_LINE(150)
								_this->byteOffset = (int)0;
								HX_STACK_LINE(150)
								_this->length = srcLength;
								HX_STACK_LINE(150)
								tmp13 = _this;
							}
							HX_STACK_LINE(150)
							this1 = tmp13;
						}
						else{
							HX_STACK_LINE(150)
							bool tmp13 = (buffer != null());		HX_STACK_VAR(tmp13,"tmp13");
							HX_STACK_LINE(150)
							if ((tmp13)){
								HX_STACK_LINE(150)
								::lime::utils::ArrayBufferView tmp14;		HX_STACK_VAR(tmp14,"tmp14");
								HX_STACK_LINE(150)
								{
									HX_STACK_LINE(150)
									::lime::utils::ArrayBufferView tmp15 = ::lime::utils::ArrayBufferView_obj::__new((int)0,(int)4);		HX_STACK_VAR(tmp15,"tmp15");
									HX_STACK_LINE(150)
									::lime::utils::ArrayBufferView _this = tmp15;		HX_STACK_VAR(_this,"_this");
									HX_STACK_LINE(150)
									int in_byteOffset = (int)0;		HX_STACK_VAR(in_byteOffset,"in_byteOffset");
									HX_STACK_LINE(150)
									bool tmp16 = (in_byteOffset < (int)0);		HX_STACK_VAR(tmp16,"tmp16");
									HX_STACK_LINE(150)
									if ((tmp16)){
										HX_STACK_LINE(150)
										HX_STACK_DO_THROW(::lime::utils::TAError_obj::RangeError);
									}
									HX_STACK_LINE(150)
									int tmp17 = hx::Mod(in_byteOffset,_this->bytesPerElement);		HX_STACK_VAR(tmp17,"tmp17");
									HX_STACK_LINE(150)
									bool tmp18 = (tmp17 != (int)0);		HX_STACK_VAR(tmp18,"tmp18");
									HX_STACK_LINE(150)
									if ((tmp18)){
										HX_STACK_LINE(150)
										HX_STACK_DO_THROW(::lime::utils::TAError_obj::RangeError);
									}
									HX_STACK_LINE(150)
									int bufferByteLength = buffer->length;		HX_STACK_VAR(bufferByteLength,"bufferByteLength");
									HX_STACK_LINE(150)
									int elementSize = _this->bytesPerElement;		HX_STACK_VAR(elementSize,"elementSize");
									HX_STACK_LINE(150)
									int newByteLength = bufferByteLength;		HX_STACK_VAR(newByteLength,"newByteLength");
									HX_STACK_LINE(150)
									bool tmp19 = true;		HX_STACK_VAR(tmp19,"tmp19");
									HX_STACK_LINE(150)
									if ((tmp19)){
										HX_STACK_LINE(150)
										int tmp20 = (bufferByteLength - in_byteOffset);		HX_STACK_VAR(tmp20,"tmp20");
										HX_STACK_LINE(150)
										newByteLength = tmp20;
										HX_STACK_LINE(150)
										int tmp21 = hx::Mod(bufferByteLength,_this->bytesPerElement);		HX_STACK_VAR(tmp21,"tmp21");
										HX_STACK_LINE(150)
										bool tmp22 = (tmp21 != (int)0);		HX_STACK_VAR(tmp22,"tmp22");
										HX_STACK_LINE(150)
										if ((tmp22)){
											HX_STACK_LINE(150)
											HX_STACK_DO_THROW(::lime::utils::TAError_obj::RangeError);
										}
										HX_STACK_LINE(150)
										bool tmp23 = (newByteLength < (int)0);		HX_STACK_VAR(tmp23,"tmp23");
										HX_STACK_LINE(150)
										if ((tmp23)){
											HX_STACK_LINE(150)
											HX_STACK_DO_THROW(::lime::utils::TAError_obj::RangeError);
										}
									}
									else{
										HX_STACK_LINE(150)
										int tmp20 = (null() * _this->bytesPerElement);		HX_STACK_VAR(tmp20,"tmp20");
										HX_STACK_LINE(150)
										newByteLength = tmp20;
										HX_STACK_LINE(150)
										int tmp21 = (in_byteOffset + newByteLength);		HX_STACK_VAR(tmp21,"tmp21");
										HX_STACK_LINE(150)
										int newRange = tmp21;		HX_STACK_VAR(newRange,"newRange");
										HX_STACK_LINE(150)
										bool tmp22 = (newRange > bufferByteLength);		HX_STACK_VAR(tmp22,"tmp22");
										HX_STACK_LINE(150)
										if ((tmp22)){
											HX_STACK_LINE(150)
											HX_STACK_DO_THROW(::lime::utils::TAError_obj::RangeError);
										}
									}
									HX_STACK_LINE(150)
									_this->buffer = buffer;
									HX_STACK_LINE(150)
									_this->byteOffset = in_byteOffset;
									HX_STACK_LINE(150)
									_this->byteLength = newByteLength;
									HX_STACK_LINE(150)
									Float tmp20 = (Float(newByteLength) / Float(_this->bytesPerElement));		HX_STACK_VAR(tmp20,"tmp20");
									HX_STACK_LINE(150)
									int tmp21 = ::Std_obj::_int(tmp20);		HX_STACK_VAR(tmp21,"tmp21");
									HX_STACK_LINE(150)
									_this->length = tmp21;
									HX_STACK_LINE(150)
									tmp14 = _this;
								}
								HX_STACK_LINE(150)
								this1 = tmp14;
							}
							else{
								HX_STACK_LINE(150)
								HX_STACK_DO_THROW(HX_HCSTRING("Invalid constructor arguments for UInt8Array","\x6b","\x44","\xd5","\x85"));
							}
						}
					}
				}
			}
			HX_STACK_LINE(150)
			tmp6 = this1;
		}
		HX_STACK_LINE(150)
		audioBuffer->data = tmp6;
		HX_STACK_LINE(151)
		Float tmp7 = sampleRate;		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(151)
		int tmp8 = ::Std_obj::_int(tmp7);		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(151)
		audioBuffer->sampleRate = tmp8;
		HX_STACK_LINE(153)
		this->__buffer = audioBuffer;
		HX_STACK_LINE(155)
		::openfl::events::Event tmp9 = ::openfl::events::Event_obj::__new(HX_HCSTRING("complete","\xb9","\x00","\xc8","\x7f"),null(),null());		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(155)
		this->dispatchEvent(tmp9);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC5(Sound_obj,loadPCMFromByteArray,(void))

::openfl::media::SoundChannel Sound_obj::play( hx::Null< Float >  __o_startTime,hx::Null< int >  __o_loops,::openfl::media::SoundTransform sndTransform){
Float startTime = __o_startTime.Default(((Float)0.0));
int loops = __o_loops.Default(0);
	HX_STACK_FRAME("openfl.media.Sound","play",0x40d33ffb,"openfl.media.Sound.play","openfl/media/Sound.hx",160,0x46a01619)
	HX_STACK_THIS(this)
	HX_STACK_ARG(startTime,"startTime")
	HX_STACK_ARG(loops,"loops")
	HX_STACK_ARG(sndTransform,"sndTransform")
{
		HX_STACK_LINE(162)
		int tmp = ::openfl::media::SoundMixer_obj::__soundChannels->length;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(162)
		bool tmp1 = (tmp >= (int)32);		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(162)
		if ((tmp1)){
			HX_STACK_LINE(164)
			return null();
		}
		HX_STACK_LINE(168)
		bool tmp2 = (sndTransform == null());		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(168)
		if ((tmp2)){
			HX_STACK_LINE(170)
			::openfl::media::SoundTransform tmp3 = ::openfl::media::SoundTransform_obj::__new(null(),null());		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(170)
			sndTransform = tmp3;
		}
		else{
			HX_STACK_LINE(174)
			::openfl::media::SoundTransform tmp3 = sndTransform->clone();		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(174)
			sndTransform = tmp3;
		}
		HX_STACK_LINE(178)
		::openfl::media::SoundTransform tmp3 = ::openfl::media::SoundMixer_obj::__soundTransform;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(178)
		Float tmp4 = tmp3->pan;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(178)
		Float tmp5 = sndTransform->pan;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(178)
		Float tmp6 = (tmp4 + tmp5);		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(178)
		Float pan = tmp6;		HX_STACK_VAR(pan,"pan");
		HX_STACK_LINE(180)
		bool tmp7 = (pan > (int)1);		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(180)
		if ((tmp7)){
			HX_STACK_LINE(180)
			pan = (int)1;
		}
		HX_STACK_LINE(181)
		bool tmp8 = (pan < (int)-1);		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(181)
		if ((tmp8)){
			HX_STACK_LINE(181)
			pan = (int)-1;
		}
		HX_STACK_LINE(183)
		::openfl::media::SoundTransform tmp9 = ::openfl::media::SoundMixer_obj::__soundTransform;		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(183)
		Float tmp10 = tmp9->volume;		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(183)
		Float tmp11 = sndTransform->volume;		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(183)
		Float tmp12 = (tmp10 * tmp11);		HX_STACK_VAR(tmp12,"tmp12");
		HX_STACK_LINE(183)
		Float volume = tmp12;		HX_STACK_VAR(volume,"volume");
		HX_STACK_LINE(185)
		::lime::media::AudioBuffer tmp13 = this->__buffer;		HX_STACK_VAR(tmp13,"tmp13");
		HX_STACK_LINE(185)
		::lime::media::AudioSource tmp14 = ::lime::media::AudioSource_obj::__new(tmp13,null(),null(),null());		HX_STACK_VAR(tmp14,"tmp14");
		HX_STACK_LINE(185)
		::lime::media::AudioSource source = tmp14;		HX_STACK_VAR(source,"source");
		HX_STACK_LINE(186)
		Float tmp15 = startTime;		HX_STACK_VAR(tmp15,"tmp15");
		HX_STACK_LINE(186)
		int tmp16 = ::Std_obj::_int(tmp15);		HX_STACK_VAR(tmp16,"tmp16");
		HX_STACK_LINE(186)
		source->offset = tmp16;
		HX_STACK_LINE(187)
		bool tmp17 = (loops > (int)1);		HX_STACK_VAR(tmp17,"tmp17");
		HX_STACK_LINE(187)
		if ((tmp17)){
			HX_STACK_LINE(187)
			int tmp18 = (loops - (int)1);		HX_STACK_VAR(tmp18,"tmp18");
			HX_STACK_LINE(187)
			source->set_loops(tmp18);
		}
		HX_STACK_LINE(189)
		Float tmp18 = volume;		HX_STACK_VAR(tmp18,"tmp18");
		HX_STACK_LINE(189)
		source->set_gain(tmp18);
		HX_STACK_LINE(191)
		::lime::math::Vector4 tmp19 = source->get_position();		HX_STACK_VAR(tmp19,"tmp19");
		HX_STACK_LINE(191)
		::lime::math::Vector4 position = tmp19;		HX_STACK_VAR(position,"position");
		HX_STACK_LINE(192)
		position->x = pan;
		HX_STACK_LINE(193)
		int tmp20 = (int)-1;		HX_STACK_VAR(tmp20,"tmp20");
		HX_STACK_LINE(193)
		Float tmp21 = pan;		HX_STACK_VAR(tmp21,"tmp21");
		HX_STACK_LINE(193)
		Float tmp22 = ::Math_obj::pow(tmp21,(int)2);		HX_STACK_VAR(tmp22,"tmp22");
		HX_STACK_LINE(193)
		Float tmp23 = ((int)1 - tmp22);		HX_STACK_VAR(tmp23,"tmp23");
		HX_STACK_LINE(193)
		Float tmp24 = ::Math_obj::sqrt(tmp23);		HX_STACK_VAR(tmp24,"tmp24");
		HX_STACK_LINE(193)
		Float tmp25 = (tmp20 * tmp24);		HX_STACK_VAR(tmp25,"tmp25");
		HX_STACK_LINE(193)
		position->z = tmp25;
		HX_STACK_LINE(194)
		::lime::math::Vector4 tmp26 = position;		HX_STACK_VAR(tmp26,"tmp26");
		HX_STACK_LINE(194)
		source->set_position(tmp26);
		HX_STACK_LINE(196)
		::openfl::media::SoundChannel tmp27 = ::openfl::media::SoundChannel_obj::__new(source,sndTransform);		HX_STACK_VAR(tmp27,"tmp27");
		HX_STACK_LINE(196)
		return tmp27;
	}
}


HX_DEFINE_DYNAMIC_FUNC3(Sound_obj,play,return )

::openfl::media::ID3Info Sound_obj::get_id3( ){
	HX_STACK_FRAME("openfl.media.Sound","get_id3",0xac6378e8,"openfl.media.Sound.get_id3","openfl/media/Sound.hx",208,0x46a01619)
	HX_STACK_THIS(this)
	HX_STACK_LINE(210)
	::openfl::media::ID3Info tmp = ::openfl::media::ID3Info_obj::__new();		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(210)
	return tmp;
}


HX_DEFINE_DYNAMIC_FUNC0(Sound_obj,get_id3,return )

int Sound_obj::get_length( ){
	HX_STACK_FRAME("openfl.media.Sound","get_length",0xcc37d5f6,"openfl.media.Sound.get_length","openfl/media/Sound.hx",215,0x46a01619)
	HX_STACK_THIS(this)
	HX_STACK_LINE(217)
	::lime::media::AudioBuffer tmp = this->__buffer;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(217)
	bool tmp1 = (tmp != null());		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(217)
	if ((tmp1)){
		HX_STACK_LINE(225)
		::lime::media::AudioBuffer tmp2 = this->__buffer;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(225)
		int tmp3 = tmp2->data->length;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(225)
		int tmp4 = (tmp3 * (int)8);		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(225)
		::lime::media::AudioBuffer tmp5 = this->__buffer;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(225)
		int tmp6 = tmp5->channels;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(225)
		::lime::media::AudioBuffer tmp7 = this->__buffer;		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(225)
		int tmp8 = tmp7->bitsPerSample;		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(225)
		int tmp9 = (tmp6 * tmp8);		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(225)
		Float tmp10 = (Float(tmp4) / Float(tmp9));		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(225)
		Float samples = tmp10;		HX_STACK_VAR(samples,"samples");
		HX_STACK_LINE(226)
		Float tmp11 = samples;		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(226)
		::lime::media::AudioBuffer tmp12 = this->__buffer;		HX_STACK_VAR(tmp12,"tmp12");
		HX_STACK_LINE(226)
		int tmp13 = tmp12->sampleRate;		HX_STACK_VAR(tmp13,"tmp13");
		HX_STACK_LINE(226)
		Float tmp14 = (Float(tmp11) / Float(tmp13));		HX_STACK_VAR(tmp14,"tmp14");
		HX_STACK_LINE(226)
		Float tmp15 = (tmp14 * (int)1000);		HX_STACK_VAR(tmp15,"tmp15");
		HX_STACK_LINE(226)
		int tmp16 = ::Std_obj::_int(tmp15);		HX_STACK_VAR(tmp16,"tmp16");
		HX_STACK_LINE(226)
		return tmp16;
	}
	HX_STACK_LINE(232)
	return (int)0;
}


HX_DEFINE_DYNAMIC_FUNC0(Sound_obj,get_length,return )

Void Sound_obj::AudioBuffer_onURLLoad( ::lime::media::AudioBuffer buffer){
{
		HX_STACK_FRAME("openfl.media.Sound","AudioBuffer_onURLLoad",0x80e63186,"openfl.media.Sound.AudioBuffer_onURLLoad","openfl/media/Sound.hx",244,0x46a01619)
		HX_STACK_THIS(this)
		HX_STACK_ARG(buffer,"buffer")
		HX_STACK_LINE(246)
		bool tmp = (buffer == null());		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(246)
		if ((tmp)){
			HX_STACK_LINE(248)
			::openfl::events::IOErrorEvent tmp1 = ::openfl::events::IOErrorEvent_obj::__new(HX_HCSTRING("ioError","\x02","\xfe","\x41","\x76"),null(),null(),null(),null());		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(248)
			this->dispatchEvent(tmp1);
		}
		else{
			HX_STACK_LINE(252)
			this->__buffer = buffer;
			HX_STACK_LINE(253)
			::openfl::events::Event tmp1 = ::openfl::events::Event_obj::__new(HX_HCSTRING("complete","\xb9","\x00","\xc8","\x7f"),null(),null());		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(253)
			this->dispatchEvent(tmp1);
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Sound_obj,AudioBuffer_onURLLoad,(void))

::openfl::media::Sound Sound_obj::fromAudioBuffer( ::lime::media::AudioBuffer buffer){
	HX_STACK_FRAME("openfl.media.Sound","fromAudioBuffer",0xa9f89285,"openfl.media.Sound.fromAudioBuffer","openfl/media/Sound.hx",63,0x46a01619)
	HX_STACK_ARG(buffer,"buffer")
	HX_STACK_LINE(65)
	::openfl::media::Sound tmp = ::openfl::media::Sound_obj::__new(null(),null());		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(65)
	::openfl::media::Sound sound = tmp;		HX_STACK_VAR(sound,"sound");
	HX_STACK_LINE(66)
	sound->__buffer = buffer;
	HX_STACK_LINE(67)
	::openfl::media::Sound tmp1 = sound;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(67)
	return tmp1;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Sound_obj,fromAudioBuffer,return )

::openfl::media::Sound Sound_obj::fromFile( ::String path){
	HX_STACK_FRAME("openfl.media.Sound","fromFile",0x06bfbe8d,"openfl.media.Sound.fromFile","openfl/media/Sound.hx",72,0x46a01619)
	HX_STACK_ARG(path,"path")
	HX_STACK_LINE(74)
	::String tmp = path;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(74)
	::lime::media::AudioBuffer tmp1 = ::lime::media::AudioBuffer_obj::fromFile(tmp);		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(74)
	::openfl::media::Sound tmp2 = ::openfl::media::Sound_obj::fromAudioBuffer(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(74)
	return tmp2;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Sound_obj,fromFile,return )


Sound_obj::Sound_obj()
{
}

void Sound_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(Sound);
	HX_MARK_MEMBER_NAME(bytesLoaded,"bytesLoaded");
	HX_MARK_MEMBER_NAME(bytesTotal,"bytesTotal");
	HX_MARK_MEMBER_NAME(isBuffering,"isBuffering");
	HX_MARK_MEMBER_NAME(url,"url");
	HX_MARK_MEMBER_NAME(__buffer,"__buffer");
	::openfl::events::EventDispatcher_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void Sound_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(bytesLoaded,"bytesLoaded");
	HX_VISIT_MEMBER_NAME(bytesTotal,"bytesTotal");
	HX_VISIT_MEMBER_NAME(isBuffering,"isBuffering");
	HX_VISIT_MEMBER_NAME(url,"url");
	HX_VISIT_MEMBER_NAME(__buffer,"__buffer");
	::openfl::events::EventDispatcher_obj::__Visit(HX_VISIT_ARG);
}

Dynamic Sound_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"id3") ) { if (inCallProp == hx::paccAlways) return get_id3(); }
		if (HX_FIELD_EQ(inName,"url") ) { return url; }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"load") ) { return load_dyn(); }
		if (HX_FIELD_EQ(inName,"play") ) { return play_dyn(); }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"close") ) { return close_dyn(); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"length") ) { if (inCallProp == hx::paccAlways) return get_length(); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"get_id3") ) { return get_id3_dyn(); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"__buffer") ) { return __buffer; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"bytesTotal") ) { return bytesTotal; }
		if (HX_FIELD_EQ(inName,"get_length") ) { return get_length_dyn(); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"bytesLoaded") ) { return bytesLoaded; }
		if (HX_FIELD_EQ(inName,"isBuffering") ) { return isBuffering; }
		break;
	case 20:
		if (HX_FIELD_EQ(inName,"loadPCMFromByteArray") ) { return loadPCMFromByteArray_dyn(); }
		break;
	case 21:
		if (HX_FIELD_EQ(inName,"AudioBuffer_onURLLoad") ) { return AudioBuffer_onURLLoad_dyn(); }
		break;
	case 31:
		if (HX_FIELD_EQ(inName,"loadCompressedDataFromByteArray") ) { return loadCompressedDataFromByteArray_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

bool Sound_obj::__GetStatic(const ::String &inName, Dynamic &outValue, hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 8:
		if (HX_FIELD_EQ(inName,"fromFile") ) { outValue = fromFile_dyn(); return true;  }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"fromAudioBuffer") ) { outValue = fromAudioBuffer_dyn(); return true;  }
	}
	return false;
}

Dynamic Sound_obj::__SetField(const ::String &inName,const Dynamic &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"url") ) { url=inValue.Cast< ::String >(); return inValue; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"__buffer") ) { __buffer=inValue.Cast< ::lime::media::AudioBuffer >(); return inValue; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"bytesTotal") ) { bytesTotal=inValue.Cast< int >(); return inValue; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"bytesLoaded") ) { bytesLoaded=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"isBuffering") ) { isBuffering=inValue.Cast< bool >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void Sound_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("bytesLoaded","\xd0","\x66","\xca","\x99"));
	outFields->push(HX_HCSTRING("bytesTotal","\x59","\x57","\xda","\x45"));
	outFields->push(HX_HCSTRING("id3","\xf8","\x03","\x50","\x00"));
	outFields->push(HX_HCSTRING("isBuffering","\x98","\x26","\x10","\x90"));
	outFields->push(HX_HCSTRING("length","\xe6","\x94","\x07","\x9f"));
	outFields->push(HX_HCSTRING("url","\x6f","\x2b","\x59","\x00"));
	outFields->push(HX_HCSTRING("__buffer","\x20","\x28","\xc4","\x78"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsInt,(int)offsetof(Sound_obj,bytesLoaded),HX_HCSTRING("bytesLoaded","\xd0","\x66","\xca","\x99")},
	{hx::fsInt,(int)offsetof(Sound_obj,bytesTotal),HX_HCSTRING("bytesTotal","\x59","\x57","\xda","\x45")},
	{hx::fsBool,(int)offsetof(Sound_obj,isBuffering),HX_HCSTRING("isBuffering","\x98","\x26","\x10","\x90")},
	{hx::fsString,(int)offsetof(Sound_obj,url),HX_HCSTRING("url","\x6f","\x2b","\x59","\x00")},
	{hx::fsObject /*::lime::media::AudioBuffer*/ ,(int)offsetof(Sound_obj,__buffer),HX_HCSTRING("__buffer","\x20","\x28","\xc4","\x78")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo *sStaticStorageInfo = 0;
#endif

static ::String sMemberFields[] = {
	HX_HCSTRING("bytesLoaded","\xd0","\x66","\xca","\x99"),
	HX_HCSTRING("bytesTotal","\x59","\x57","\xda","\x45"),
	HX_HCSTRING("isBuffering","\x98","\x26","\x10","\x90"),
	HX_HCSTRING("url","\x6f","\x2b","\x59","\x00"),
	HX_HCSTRING("__buffer","\x20","\x28","\xc4","\x78"),
	HX_HCSTRING("close","\xb8","\x17","\x63","\x48"),
	HX_HCSTRING("load","\x26","\x9a","\xb7","\x47"),
	HX_HCSTRING("loadCompressedDataFromByteArray","\xd6","\x4f","\x5d","\xa0"),
	HX_HCSTRING("loadPCMFromByteArray","\x73","\x51","\xe4","\xc4"),
	HX_HCSTRING("play","\xf4","\x2d","\x5a","\x4a"),
	HX_HCSTRING("get_id3","\x8f","\xcc","\xc4","\x26"),
	HX_HCSTRING("get_length","\xaf","\x04","\x8f","\x8f"),
	HX_HCSTRING("AudioBuffer_onURLLoad","\x6d","\xfb","\xf7","\xc7"),
	::String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(Sound_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(Sound_obj::__mClass,"__mClass");
};

#endif

hx::Class Sound_obj::__mClass;

static ::String sStaticFields[] = {
	HX_HCSTRING("fromAudioBuffer","\x2c","\x65","\xe0","\xcd"),
	HX_HCSTRING("fromFile","\x06","\x9d","\x87","\xa1"),
	::String(null()) };

void Sound_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("openfl.media.Sound","\xc7","\x8b","\xe2","\x7e");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &Sound_obj::__GetStatic;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(sStaticFields);
	__mClass->mMembers = hx::Class_obj::dupFunctions(sMemberFields);
	__mClass->mCanCast = hx::TCanCast< Sound_obj >;
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
} // end namespace media
