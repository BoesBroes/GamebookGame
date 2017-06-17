#include <hxcpp.h>

#ifndef INCLUDED_haxe__Int64_Int64_Impl_
#include <haxe/_Int64/Int64_Impl_.h>
#endif
#ifndef INCLUDED_haxe_io_Bytes
#include <haxe/io/Bytes.h>
#endif
#ifndef INCLUDED_lime__backend_native_NativeCFFI
#include <lime/_backend/native/NativeCFFI.h>
#endif
#ifndef INCLUDED_lime_media_codecs_vorbis_VorbisComment
#include <lime/media/codecs/vorbis/VorbisComment.h>
#endif
#ifndef INCLUDED_lime_media_codecs_vorbis_VorbisFile
#include <lime/media/codecs/vorbis/VorbisFile.h>
#endif
#ifndef INCLUDED_lime_media_codecs_vorbis_VorbisInfo
#include <lime/media/codecs/vorbis/VorbisInfo.h>
#endif
namespace lime{
namespace media{
namespace codecs{
namespace vorbis{

Void VorbisFile_obj::__construct(Dynamic handle)
{
HX_STACK_FRAME("lime.media.codecs.vorbis.VorbisFile","new",0x5039982e,"lime.media.codecs.vorbis.VorbisFile.new","lime/media/codecs/vorbis/VorbisFile.hx",21,0x1ca67960)
HX_STACK_THIS(this)
HX_STACK_ARG(handle,"handle")
{
	HX_STACK_LINE(21)
	this->handle = handle;
}
;
	return null();
}

//VorbisFile_obj::~VorbisFile_obj() { }

Dynamic VorbisFile_obj::__CreateEmpty() { return  new VorbisFile_obj; }
hx::ObjectPtr< VorbisFile_obj > VorbisFile_obj::__new(Dynamic handle)
{  hx::ObjectPtr< VorbisFile_obj > _result_ = new VorbisFile_obj();
	_result_->__construct(handle);
	return _result_;}

Dynamic VorbisFile_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< VorbisFile_obj > _result_ = new VorbisFile_obj();
	_result_->__construct(inArgs[0]);
	return _result_;}

int VorbisFile_obj::bitrate( hx::Null< int >  __o_bitstream){
int bitstream = __o_bitstream.Default(-1);
	HX_STACK_FRAME("lime.media.codecs.vorbis.VorbisFile","bitrate",0xfd30bcfb,"lime.media.codecs.vorbis.VorbisFile.bitrate","lime/media/codecs/vorbis/VorbisFile.hx",29,0x1ca67960)
	HX_STACK_THIS(this)
	HX_STACK_ARG(bitstream,"bitstream")
{
		HX_STACK_LINE(29)
		return ::lime::_backend::native::NativeCFFI_obj::cffi_lime_vorbis_file_bitrate.call(hx::DynamicPtr(this->handle),bitstream);
	}
}


HX_DEFINE_DYNAMIC_FUNC1(VorbisFile_obj,bitrate,return )

int VorbisFile_obj::bitrateInstant( ){
	HX_STACK_FRAME("lime.media.codecs.vorbis.VorbisFile","bitrateInstant",0x8400a726,"lime.media.codecs.vorbis.VorbisFile.bitrateInstant","lime/media/codecs/vorbis/VorbisFile.hx",40,0x1ca67960)
	HX_STACK_THIS(this)
	HX_STACK_LINE(40)
	return ::lime::_backend::native::NativeCFFI_obj::cffi_lime_vorbis_file_bitrate_instant.call(hx::DynamicPtr(this->handle));
}


HX_DEFINE_DYNAMIC_FUNC0(VorbisFile_obj,bitrateInstant,return )

Void VorbisFile_obj::clear( ){
{
		HX_STACK_FRAME("lime.media.codecs.vorbis.VorbisFile","clear",0xb31d48db,"lime.media.codecs.vorbis.VorbisFile.clear","lime/media/codecs/vorbis/VorbisFile.hx",51,0x1ca67960)
		HX_STACK_THIS(this)
		HX_STACK_LINE(51)
		::lime::_backend::native::NativeCFFI_obj::cffi_lime_vorbis_file_clear.call(hx::DynamicPtr(this->handle));
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(VorbisFile_obj,clear,(void))

::lime::media::codecs::vorbis::VorbisComment VorbisFile_obj::comment( hx::Null< int >  __o_bitstream){
int bitstream = __o_bitstream.Default(-1);
	HX_STACK_FRAME("lime.media.codecs.vorbis.VorbisFile","comment",0x81d1412d,"lime.media.codecs.vorbis.VorbisFile.comment","lime/media/codecs/vorbis/VorbisFile.hx",57,0x1ca67960)
	HX_STACK_THIS(this)
	HX_STACK_ARG(bitstream,"bitstream")
{
		HX_STACK_LINE(60)
		Dynamic data = ((Dynamic)(::lime::_backend::native::NativeCFFI_obj::cffi_lime_vorbis_file_comment.call(hx::DynamicPtr(this->handle),bitstream)));		HX_STACK_VAR(data,"data");
		HX_STACK_LINE(62)
		bool tmp = (data != null());		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(62)
		if ((tmp)){
			HX_STACK_LINE(64)
			::lime::media::codecs::vorbis::VorbisComment tmp1 = ::lime::media::codecs::vorbis::VorbisComment_obj::__new();		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(64)
			::lime::media::codecs::vorbis::VorbisComment comment = tmp1;		HX_STACK_VAR(comment,"comment");
			HX_STACK_LINE(65)
			comment->userComments = data->__Field(HX_HCSTRING("userComments","\x9f","\xaa","\xf5","\x57"), hx::paccDynamic );
			HX_STACK_LINE(66)
			comment->vendor = data->__Field(HX_HCSTRING("vendor","\x88","\xe5","\x96","\x9e"), hx::paccDynamic );
			HX_STACK_LINE(67)
			::lime::media::codecs::vorbis::VorbisComment tmp2 = comment;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(67)
			return tmp2;
		}
		HX_STACK_LINE(72)
		return null();
	}
}


HX_DEFINE_DYNAMIC_FUNC1(VorbisFile_obj,comment,return )

int VorbisFile_obj::crosslap( ::lime::media::codecs::vorbis::VorbisFile other){
	HX_STACK_FRAME("lime.media.codecs.vorbis.VorbisFile","crosslap",0xdc65c64d,"lime.media.codecs.vorbis.VorbisFile.crosslap","lime/media/codecs/vorbis/VorbisFile.hx",80,0x1ca67960)
	HX_STACK_THIS(this)
	HX_STACK_ARG(other,"other")
	HX_STACK_LINE(80)
	return ((Dynamic)(::lime::_backend::native::NativeCFFI_obj::cffi_lime_vorbis_file_crosslap.call(hx::DynamicPtr(this->handle),hx::DynamicPtr(other->handle))));
}


HX_DEFINE_DYNAMIC_FUNC1(VorbisFile_obj,crosslap,return )

::lime::media::codecs::vorbis::VorbisInfo VorbisFile_obj::info( hx::Null< int >  __o_bitstream){
int bitstream = __o_bitstream.Default(-1);
	HX_STACK_FRAME("lime.media.codecs.vorbis.VorbisFile","info",0xdee444e0,"lime.media.codecs.vorbis.VorbisFile.info","lime/media/codecs/vorbis/VorbisFile.hx",122,0x1ca67960)
	HX_STACK_THIS(this)
	HX_STACK_ARG(bitstream,"bitstream")
{
		HX_STACK_LINE(125)
		Dynamic data = ((Dynamic)(::lime::_backend::native::NativeCFFI_obj::cffi_lime_vorbis_file_info.call(hx::DynamicPtr(this->handle),bitstream)));		HX_STACK_VAR(data,"data");
		HX_STACK_LINE(127)
		bool tmp = (data != null());		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(127)
		if ((tmp)){
			HX_STACK_LINE(129)
			::lime::media::codecs::vorbis::VorbisInfo tmp1 = ::lime::media::codecs::vorbis::VorbisInfo_obj::__new();		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(129)
			::lime::media::codecs::vorbis::VorbisInfo info = tmp1;		HX_STACK_VAR(info,"info");
			HX_STACK_LINE(130)
			info->bitrateLower = data->__Field(HX_HCSTRING("bitrateLower","\x94","\xf0","\xd0","\x09"), hx::paccDynamic );
			HX_STACK_LINE(131)
			info->bitrateNominal = data->__Field(HX_HCSTRING("bitrateNominal","\x6f","\x84","\x28","\x68"), hx::paccDynamic );
			HX_STACK_LINE(132)
			info->bitrateUpper = data->__Field(HX_HCSTRING("bitrateUpper","\xf5","\x0f","\x10","\x39"), hx::paccDynamic );
			HX_STACK_LINE(133)
			info->channels = data->__Field(HX_HCSTRING("channels","\x50","\xaa","\xee","\x6a"), hx::paccDynamic );
			HX_STACK_LINE(134)
			info->rate = data->__Field(HX_HCSTRING("rate","\xe0","\x52","\xa4","\x4b"), hx::paccDynamic );
			HX_STACK_LINE(135)
			info->version = data->__Field(HX_HCSTRING("version","\x18","\xe7","\xf1","\x7c"), hx::paccDynamic );
			HX_STACK_LINE(136)
			::lime::media::codecs::vorbis::VorbisInfo tmp2 = info;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(136)
			return tmp2;
		}
		HX_STACK_LINE(141)
		return null();
	}
}


HX_DEFINE_DYNAMIC_FUNC1(VorbisFile_obj,info,return )

int VorbisFile_obj::pcmSeek( cpp::Int64Struct pos){
	HX_STACK_FRAME("lime.media.codecs.vorbis.VorbisFile","pcmSeek",0xc0f06080,"lime.media.codecs.vorbis.VorbisFile.pcmSeek","lime/media/codecs/vorbis/VorbisFile.hx",146,0x1ca67960)
	HX_STACK_THIS(this)
	HX_STACK_ARG(pos,"pos")
	HX_STACK_LINE(149)
	int tmp;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(149)
	{
		HX_STACK_LINE(149)
		Dynamic posLow = (int)((pos)&0xffffffff);		HX_STACK_VAR(posLow,"posLow");
		HX_STACK_LINE(149)
		Dynamic posHigh = (int)(((cpp::Int64)(pos))>>32);		HX_STACK_VAR(posHigh,"posHigh");
		HX_STACK_LINE(149)
		tmp = ::lime::_backend::native::NativeCFFI_obj::cffi_lime_vorbis_file_pcm_seek.call(hx::DynamicPtr(this->handle),hx::DynamicPtr(posLow),hx::DynamicPtr(posHigh));
	}
	HX_STACK_LINE(149)
	return tmp;
}


HX_DEFINE_DYNAMIC_FUNC1(VorbisFile_obj,pcmSeek,return )

int VorbisFile_obj::pcmSeekLap( cpp::Int64Struct pos){
	HX_STACK_FRAME("lime.media.codecs.vorbis.VorbisFile","pcmSeekLap",0x3e60efbb,"lime.media.codecs.vorbis.VorbisFile.pcmSeekLap","lime/media/codecs/vorbis/VorbisFile.hx",157,0x1ca67960)
	HX_STACK_THIS(this)
	HX_STACK_ARG(pos,"pos")
	HX_STACK_LINE(160)
	int tmp;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(160)
	{
		HX_STACK_LINE(160)
		Dynamic posLow = (int)((pos)&0xffffffff);		HX_STACK_VAR(posLow,"posLow");
		HX_STACK_LINE(160)
		Dynamic posHigh = (int)(((cpp::Int64)(pos))>>32);		HX_STACK_VAR(posHigh,"posHigh");
		HX_STACK_LINE(160)
		tmp = ::lime::_backend::native::NativeCFFI_obj::cffi_lime_vorbis_file_pcm_seek_lap.call(hx::DynamicPtr(this->handle),hx::DynamicPtr(posLow),hx::DynamicPtr(posHigh));
	}
	HX_STACK_LINE(160)
	return tmp;
}


HX_DEFINE_DYNAMIC_FUNC1(VorbisFile_obj,pcmSeekLap,return )

int VorbisFile_obj::pcmSeekPage( cpp::Int64Struct pos){
	HX_STACK_FRAME("lime.media.codecs.vorbis.VorbisFile","pcmSeekPage",0x5915a6ef,"lime.media.codecs.vorbis.VorbisFile.pcmSeekPage","lime/media/codecs/vorbis/VorbisFile.hx",168,0x1ca67960)
	HX_STACK_THIS(this)
	HX_STACK_ARG(pos,"pos")
	HX_STACK_LINE(171)
	int tmp;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(171)
	{
		HX_STACK_LINE(171)
		Dynamic posLow = (int)((pos)&0xffffffff);		HX_STACK_VAR(posLow,"posLow");
		HX_STACK_LINE(171)
		Dynamic posHigh = (int)(((cpp::Int64)(pos))>>32);		HX_STACK_VAR(posHigh,"posHigh");
		HX_STACK_LINE(171)
		tmp = ::lime::_backend::native::NativeCFFI_obj::cffi_lime_vorbis_file_pcm_seek_page.call(hx::DynamicPtr(this->handle),hx::DynamicPtr(posLow),hx::DynamicPtr(posHigh));
	}
	HX_STACK_LINE(171)
	return tmp;
}


HX_DEFINE_DYNAMIC_FUNC1(VorbisFile_obj,pcmSeekPage,return )

int VorbisFile_obj::pcmSeekPageLap( cpp::Int64Struct pos){
	HX_STACK_FRAME("lime.media.codecs.vorbis.VorbisFile","pcmSeekPageLap",0x19aa18ac,"lime.media.codecs.vorbis.VorbisFile.pcmSeekPageLap","lime/media/codecs/vorbis/VorbisFile.hx",179,0x1ca67960)
	HX_STACK_THIS(this)
	HX_STACK_ARG(pos,"pos")
	HX_STACK_LINE(182)
	int tmp;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(182)
	{
		HX_STACK_LINE(182)
		Dynamic posLow = (int)((pos)&0xffffffff);		HX_STACK_VAR(posLow,"posLow");
		HX_STACK_LINE(182)
		Dynamic posHigh = (int)(((cpp::Int64)(pos))>>32);		HX_STACK_VAR(posHigh,"posHigh");
		HX_STACK_LINE(182)
		tmp = ::lime::_backend::native::NativeCFFI_obj::cffi_lime_vorbis_file_pcm_seek_page_lap.call(hx::DynamicPtr(this->handle),hx::DynamicPtr(posLow),hx::DynamicPtr(posHigh));
	}
	HX_STACK_LINE(182)
	return tmp;
}


HX_DEFINE_DYNAMIC_FUNC1(VorbisFile_obj,pcmSeekPageLap,return )

cpp::Int64Struct VorbisFile_obj::pcmTell( ){
	HX_STACK_FRAME("lime.media.codecs.vorbis.VorbisFile","pcmTell",0xc1999d39,"lime.media.codecs.vorbis.VorbisFile.pcmTell","lime/media/codecs/vorbis/VorbisFile.hx",190,0x1ca67960)
	HX_STACK_THIS(this)
	HX_STACK_LINE(193)
	Dynamic data = ((Dynamic)(::lime::_backend::native::NativeCFFI_obj::cffi_lime_vorbis_file_pcm_tell.call(hx::DynamicPtr(this->handle))));		HX_STACK_VAR(data,"data");
	HX_STACK_LINE(195)
	bool tmp = (data != null());		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(195)
	if ((tmp)){
		HX_STACK_LINE(197)
		return cpp::Int64Struct(( ( (cpp::Int64)((unsigned int)data->__Field(HX_HCSTRING("high","\x62","\x37","\x0e","\x45"), hx::paccDynamic )) ) << 32 ) | ((unsigned int)data->__Field(HX_HCSTRING("low","\x94","\x54","\x52","\x00"), hx::paccDynamic )));
	}
	HX_STACK_LINE(202)
	cpp::Int64Struct tmp1 = ::haxe::_Int64::Int64_Impl__obj::ofInt((int)0);		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(202)
	return tmp1;
}


HX_DEFINE_DYNAMIC_FUNC0(VorbisFile_obj,pcmTell,return )

cpp::Int64Struct VorbisFile_obj::pcmTotal( hx::Null< int >  __o_bitstream){
int bitstream = __o_bitstream.Default(-1);
	HX_STACK_FRAME("lime.media.codecs.vorbis.VorbisFile","pcmTotal",0xab721fbc,"lime.media.codecs.vorbis.VorbisFile.pcmTotal","lime/media/codecs/vorbis/VorbisFile.hx",208,0x1ca67960)
	HX_STACK_THIS(this)
	HX_STACK_ARG(bitstream,"bitstream")
{
		HX_STACK_LINE(211)
		Dynamic data = ((Dynamic)(::lime::_backend::native::NativeCFFI_obj::cffi_lime_vorbis_file_pcm_total.call(hx::DynamicPtr(this->handle),bitstream)));		HX_STACK_VAR(data,"data");
		HX_STACK_LINE(213)
		bool tmp = (data != null());		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(213)
		if ((tmp)){
			HX_STACK_LINE(215)
			return cpp::Int64Struct(( ( (cpp::Int64)((unsigned int)data->__Field(HX_HCSTRING("high","\x62","\x37","\x0e","\x45"), hx::paccDynamic )) ) << 32 ) | ((unsigned int)data->__Field(HX_HCSTRING("low","\x94","\x54","\x52","\x00"), hx::paccDynamic )));
		}
		HX_STACK_LINE(220)
		cpp::Int64Struct tmp1 = ::haxe::_Int64::Int64_Impl__obj::ofInt((int)0);		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(220)
		return tmp1;
	}
}


HX_DEFINE_DYNAMIC_FUNC1(VorbisFile_obj,pcmTotal,return )

int VorbisFile_obj::rawSeek( cpp::Int64Struct pos){
	HX_STACK_FRAME("lime.media.codecs.vorbis.VorbisFile","rawSeek",0x0966624e,"lime.media.codecs.vorbis.VorbisFile.rawSeek","lime/media/codecs/vorbis/VorbisFile.hx",225,0x1ca67960)
	HX_STACK_THIS(this)
	HX_STACK_ARG(pos,"pos")
	HX_STACK_LINE(228)
	int tmp;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(228)
	{
		HX_STACK_LINE(228)
		Dynamic posLow = (int)((pos)&0xffffffff);		HX_STACK_VAR(posLow,"posLow");
		HX_STACK_LINE(228)
		Dynamic posHigh = (int)(((cpp::Int64)(pos))>>32);		HX_STACK_VAR(posHigh,"posHigh");
		HX_STACK_LINE(228)
		tmp = ::lime::_backend::native::NativeCFFI_obj::cffi_lime_vorbis_file_raw_seek.call(hx::DynamicPtr(this->handle),hx::DynamicPtr(posLow),hx::DynamicPtr(posHigh));
	}
	HX_STACK_LINE(228)
	return tmp;
}


HX_DEFINE_DYNAMIC_FUNC1(VorbisFile_obj,rawSeek,return )

int VorbisFile_obj::rawSeekLap( cpp::Int64Struct pos){
	HX_STACK_FRAME("lime.media.codecs.vorbis.VorbisFile","rawSeekLap",0x550b82ad,"lime.media.codecs.vorbis.VorbisFile.rawSeekLap","lime/media/codecs/vorbis/VorbisFile.hx",236,0x1ca67960)
	HX_STACK_THIS(this)
	HX_STACK_ARG(pos,"pos")
	HX_STACK_LINE(239)
	int tmp;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(239)
	{
		HX_STACK_LINE(239)
		Dynamic posLow = (int)((pos)&0xffffffff);		HX_STACK_VAR(posLow,"posLow");
		HX_STACK_LINE(239)
		Dynamic posHigh = (int)(((cpp::Int64)(pos))>>32);		HX_STACK_VAR(posHigh,"posHigh");
		HX_STACK_LINE(239)
		tmp = ::lime::_backend::native::NativeCFFI_obj::cffi_lime_vorbis_file_raw_seek_lap.call(hx::DynamicPtr(this->handle),hx::DynamicPtr(posLow),hx::DynamicPtr(posHigh));
	}
	HX_STACK_LINE(239)
	return tmp;
}


HX_DEFINE_DYNAMIC_FUNC1(VorbisFile_obj,rawSeekLap,return )

cpp::Int64Struct VorbisFile_obj::rawTell( ){
	HX_STACK_FRAME("lime.media.codecs.vorbis.VorbisFile","rawTell",0x0a0f9f07,"lime.media.codecs.vorbis.VorbisFile.rawTell","lime/media/codecs/vorbis/VorbisFile.hx",247,0x1ca67960)
	HX_STACK_THIS(this)
	HX_STACK_LINE(251)
	Dynamic data = ((Dynamic)(::lime::_backend::native::NativeCFFI_obj::cffi_lime_vorbis_file_raw_tell.call(hx::DynamicPtr(this->handle))));		HX_STACK_VAR(data,"data");
	HX_STACK_LINE(253)
	bool tmp = (data != null());		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(253)
	if ((tmp)){
		HX_STACK_LINE(255)
		return cpp::Int64Struct(( ( (cpp::Int64)((unsigned int)data->__Field(HX_HCSTRING("high","\x62","\x37","\x0e","\x45"), hx::paccDynamic )) ) << 32 ) | ((unsigned int)data->__Field(HX_HCSTRING("low","\x94","\x54","\x52","\x00"), hx::paccDynamic )));
	}
	HX_STACK_LINE(260)
	cpp::Int64Struct tmp1 = ::haxe::_Int64::Int64_Impl__obj::ofInt((int)0);		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(260)
	return tmp1;
}


HX_DEFINE_DYNAMIC_FUNC0(VorbisFile_obj,rawTell,return )

cpp::Int64Struct VorbisFile_obj::rawTotal( hx::Null< int >  __o_bitstream){
int bitstream = __o_bitstream.Default(-1);
	HX_STACK_FRAME("lime.media.codecs.vorbis.VorbisFile","rawTotal",0xca3db22e,"lime.media.codecs.vorbis.VorbisFile.rawTotal","lime/media/codecs/vorbis/VorbisFile.hx",265,0x1ca67960)
	HX_STACK_THIS(this)
	HX_STACK_ARG(bitstream,"bitstream")
{
		HX_STACK_LINE(268)
		Dynamic data = ((Dynamic)(::lime::_backend::native::NativeCFFI_obj::cffi_lime_vorbis_file_raw_total.call(hx::DynamicPtr(this->handle),bitstream)));		HX_STACK_VAR(data,"data");
		HX_STACK_LINE(270)
		bool tmp = (data != null());		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(270)
		if ((tmp)){
			HX_STACK_LINE(272)
			return cpp::Int64Struct(( ( (cpp::Int64)((unsigned int)data->__Field(HX_HCSTRING("high","\x62","\x37","\x0e","\x45"), hx::paccDynamic )) ) << 32 ) | ((unsigned int)data->__Field(HX_HCSTRING("low","\x94","\x54","\x52","\x00"), hx::paccDynamic )));
		}
		HX_STACK_LINE(277)
		cpp::Int64Struct tmp1 = ::haxe::_Int64::Int64_Impl__obj::ofInt((int)0);		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(277)
		return tmp1;
	}
}


HX_DEFINE_DYNAMIC_FUNC1(VorbisFile_obj,rawTotal,return )

int VorbisFile_obj::read( ::haxe::io::Bytes buffer,int position,hx::Null< int >  __o_length,hx::Null< bool >  __o_bigEndianPacking,hx::Null< int >  __o_wordSize,hx::Null< bool >  __o__signed){
int length = __o_length.Default(4096);
bool bigEndianPacking = __o_bigEndianPacking.Default(false);
int wordSize = __o_wordSize.Default(2);
bool _signed = __o__signed.Default(true);
	HX_STACK_FRAME("lime.media.codecs.vorbis.VorbisFile","read",0xe4d057c8,"lime.media.codecs.vorbis.VorbisFile.read","lime/media/codecs/vorbis/VorbisFile.hx",282,0x1ca67960)
	HX_STACK_THIS(this)
	HX_STACK_ARG(buffer,"buffer")
	HX_STACK_ARG(position,"position")
	HX_STACK_ARG(length,"length")
	HX_STACK_ARG(bigEndianPacking,"bigEndianPacking")
	HX_STACK_ARG(wordSize,"wordSize")
	HX_STACK_ARG(_signed,"signed")
{
		HX_STACK_LINE(285)
		Dynamic data = ((Dynamic)(::lime::_backend::native::NativeCFFI_obj::cffi_lime_vorbis_file_read.call(hx::DynamicPtr(this->handle),hx::DynamicPtr(buffer),position,length,bigEndianPacking,wordSize,_signed)));		HX_STACK_VAR(data,"data");
		HX_STACK_LINE(286)
		bool tmp = (data == null());		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(286)
		if ((tmp)){
			HX_STACK_LINE(286)
			return (int)0;
		}
		HX_STACK_LINE(287)
		this->bitstream = data->__Field(HX_HCSTRING("bitstream","\x0d","\xe5","\x01","\x1f"), hx::paccDynamic );
		HX_STACK_LINE(288)
		int tmp1 = data->__Field(HX_HCSTRING("returnValue","\xa1","\x4c","\x95","\x3e"), hx::paccDynamic );		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(288)
		return tmp1;
	}
}


HX_DEFINE_DYNAMIC_FUNC6(VorbisFile_obj,read,return )

int VorbisFile_obj::readFloat( ::haxe::io::Bytes pcmChannels,int samples){
	HX_STACK_FRAME("lime.media.codecs.vorbis.VorbisFile","readFloat",0x42b8a8b4,"lime.media.codecs.vorbis.VorbisFile.readFloat","lime/media/codecs/vorbis/VorbisFile.hx",299,0x1ca67960)
	HX_STACK_THIS(this)
	HX_STACK_ARG(pcmChannels,"pcmChannels")
	HX_STACK_ARG(samples,"samples")
	HX_STACK_LINE(302)
	Dynamic data = ((Dynamic)(::lime::_backend::native::NativeCFFI_obj::cffi_lime_vorbis_file_read_float.call(hx::DynamicPtr(this->handle),hx::DynamicPtr(pcmChannels),samples)));		HX_STACK_VAR(data,"data");
	HX_STACK_LINE(303)
	bool tmp = (data == null());		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(303)
	if ((tmp)){
		HX_STACK_LINE(303)
		return (int)0;
	}
	HX_STACK_LINE(304)
	this->bitstream = data->__Field(HX_HCSTRING("bitstream","\x0d","\xe5","\x01","\x1f"), hx::paccDynamic );
	HX_STACK_LINE(305)
	int tmp1 = data->__Field(HX_HCSTRING("returnValue","\xa1","\x4c","\x95","\x3e"), hx::paccDynamic );		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(305)
	return tmp1;
}


HX_DEFINE_DYNAMIC_FUNC2(VorbisFile_obj,readFloat,return )

bool VorbisFile_obj::seekable( ){
	HX_STACK_FRAME("lime.media.codecs.vorbis.VorbisFile","seekable",0xac423c84,"lime.media.codecs.vorbis.VorbisFile.seekable","lime/media/codecs/vorbis/VorbisFile.hx",316,0x1ca67960)
	HX_STACK_THIS(this)
	HX_STACK_LINE(316)
	return ::lime::_backend::native::NativeCFFI_obj::cffi_lime_vorbis_file_seekable.call(hx::DynamicPtr(this->handle));
}


HX_DEFINE_DYNAMIC_FUNC0(VorbisFile_obj,seekable,return )

int VorbisFile_obj::serialNumber( hx::Null< int >  __o_bitstream){
int bitstream = __o_bitstream.Default(-1);
	HX_STACK_FRAME("lime.media.codecs.vorbis.VorbisFile","serialNumber",0x3ebc224f,"lime.media.codecs.vorbis.VorbisFile.serialNumber","lime/media/codecs/vorbis/VorbisFile.hx",327,0x1ca67960)
	HX_STACK_THIS(this)
	HX_STACK_ARG(bitstream,"bitstream")
{
		HX_STACK_LINE(327)
		return ::lime::_backend::native::NativeCFFI_obj::cffi_lime_vorbis_file_serial_number.call(hx::DynamicPtr(this->handle),bitstream);
	}
}


HX_DEFINE_DYNAMIC_FUNC1(VorbisFile_obj,serialNumber,return )

int VorbisFile_obj::streams( ){
	HX_STACK_FRAME("lime.media.codecs.vorbis.VorbisFile","streams",0xf6a5a2c1,"lime.media.codecs.vorbis.VorbisFile.streams","lime/media/codecs/vorbis/VorbisFile.hx",338,0x1ca67960)
	HX_STACK_THIS(this)
	HX_STACK_LINE(338)
	return ::lime::_backend::native::NativeCFFI_obj::cffi_lime_vorbis_file_streams.call(hx::DynamicPtr(this->handle));
}


HX_DEFINE_DYNAMIC_FUNC0(VorbisFile_obj,streams,return )

int VorbisFile_obj::timeSeek( Float s){
	HX_STACK_FRAME("lime.media.codecs.vorbis.VorbisFile","timeSeek",0x40ff3597,"lime.media.codecs.vorbis.VorbisFile.timeSeek","lime/media/codecs/vorbis/VorbisFile.hx",349,0x1ca67960)
	HX_STACK_THIS(this)
	HX_STACK_ARG(s,"s")
	HX_STACK_LINE(349)
	return ::lime::_backend::native::NativeCFFI_obj::cffi_lime_vorbis_file_time_seek.call(hx::DynamicPtr(this->handle),s);
}


HX_DEFINE_DYNAMIC_FUNC1(VorbisFile_obj,timeSeek,return )

int VorbisFile_obj::timeSeekLap( Float s){
	HX_STACK_FRAME("lime.media.codecs.vorbis.VorbisFile","timeSeekLap",0x94b92304,"lime.media.codecs.vorbis.VorbisFile.timeSeekLap","lime/media/codecs/vorbis/VorbisFile.hx",360,0x1ca67960)
	HX_STACK_THIS(this)
	HX_STACK_ARG(s,"s")
	HX_STACK_LINE(360)
	return ::lime::_backend::native::NativeCFFI_obj::cffi_lime_vorbis_file_time_seek_lap.call(hx::DynamicPtr(this->handle),s);
}


HX_DEFINE_DYNAMIC_FUNC1(VorbisFile_obj,timeSeekLap,return )

int VorbisFile_obj::timeSeekPage( Float s){
	HX_STACK_FRAME("lime.media.codecs.vorbis.VorbisFile","timeSeekPage",0x8fea5386,"lime.media.codecs.vorbis.VorbisFile.timeSeekPage","lime/media/codecs/vorbis/VorbisFile.hx",371,0x1ca67960)
	HX_STACK_THIS(this)
	HX_STACK_ARG(s,"s")
	HX_STACK_LINE(371)
	return ::lime::_backend::native::NativeCFFI_obj::cffi_lime_vorbis_file_time_seek_page.call(hx::DynamicPtr(this->handle),s);
}


HX_DEFINE_DYNAMIC_FUNC1(VorbisFile_obj,timeSeekPage,return )

int VorbisFile_obj::timeSeekPageLap( Float s){
	HX_STACK_FRAME("lime.media.codecs.vorbis.VorbisFile","timeSeekPageLap",0xf3d82475,"lime.media.codecs.vorbis.VorbisFile.timeSeekPageLap","lime/media/codecs/vorbis/VorbisFile.hx",382,0x1ca67960)
	HX_STACK_THIS(this)
	HX_STACK_ARG(s,"s")
	HX_STACK_LINE(382)
	return ::lime::_backend::native::NativeCFFI_obj::cffi_lime_vorbis_file_time_seek_page_lap.call(hx::DynamicPtr(this->handle),s);
}


HX_DEFINE_DYNAMIC_FUNC1(VorbisFile_obj,timeSeekPageLap,return )

Float VorbisFile_obj::timeTell( ){
	HX_STACK_FRAME("lime.media.codecs.vorbis.VorbisFile","timeTell",0x41a87250,"lime.media.codecs.vorbis.VorbisFile.timeTell","lime/media/codecs/vorbis/VorbisFile.hx",393,0x1ca67960)
	HX_STACK_THIS(this)
	HX_STACK_LINE(393)
	return ::lime::_backend::native::NativeCFFI_obj::cffi_lime_vorbis_file_time_tell.call(hx::DynamicPtr(this->handle));
}


HX_DEFINE_DYNAMIC_FUNC0(VorbisFile_obj,timeTell,return )

Float VorbisFile_obj::timeTotal( hx::Null< int >  __o_bitstream){
int bitstream = __o_bitstream.Default(-1);
	HX_STACK_FRAME("lime.media.codecs.vorbis.VorbisFile","timeTotal",0x385dbec5,"lime.media.codecs.vorbis.VorbisFile.timeTotal","lime/media/codecs/vorbis/VorbisFile.hx",404,0x1ca67960)
	HX_STACK_THIS(this)
	HX_STACK_ARG(bitstream,"bitstream")
{
		HX_STACK_LINE(404)
		return ::lime::_backend::native::NativeCFFI_obj::cffi_lime_vorbis_file_time_total.call(hx::DynamicPtr(this->handle),bitstream);
	}
}


HX_DEFINE_DYNAMIC_FUNC1(VorbisFile_obj,timeTotal,return )

::lime::media::codecs::vorbis::VorbisFile VorbisFile_obj::fromBytes( ::haxe::io::Bytes bytes){
	HX_STACK_FRAME("lime.media.codecs.vorbis.VorbisFile","fromBytes",0xe15b88ef,"lime.media.codecs.vorbis.VorbisFile.fromBytes","lime/media/codecs/vorbis/VorbisFile.hx",88,0x1ca67960)
	HX_STACK_ARG(bytes,"bytes")
	HX_STACK_LINE(91)
	Dynamic handle = ((Dynamic)(::lime::_backend::native::NativeCFFI_obj::cffi_lime_vorbis_file_from_bytes.call(hx::DynamicPtr(bytes))));		HX_STACK_VAR(handle,"handle");
	HX_STACK_LINE(93)
	bool tmp = (handle != null());		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(93)
	if ((tmp)){
		HX_STACK_LINE(95)
		::lime::media::codecs::vorbis::VorbisFile tmp1 = ::lime::media::codecs::vorbis::VorbisFile_obj::__new(handle);		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(95)
		return tmp1;
	}
	HX_STACK_LINE(100)
	return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(VorbisFile_obj,fromBytes,return )

::lime::media::codecs::vorbis::VorbisFile VorbisFile_obj::fromFile( ::String path){
	HX_STACK_FRAME("lime.media.codecs.vorbis.VorbisFile","fromFile",0xf5d4ca78,"lime.media.codecs.vorbis.VorbisFile.fromFile","lime/media/codecs/vorbis/VorbisFile.hx",105,0x1ca67960)
	HX_STACK_ARG(path,"path")
	HX_STACK_LINE(108)
	Dynamic handle = ((Dynamic)(::lime::_backend::native::NativeCFFI_obj::cffi_lime_vorbis_file_from_file.call(path)));		HX_STACK_VAR(handle,"handle");
	HX_STACK_LINE(110)
	bool tmp = (handle != null());		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(110)
	if ((tmp)){
		HX_STACK_LINE(112)
		::lime::media::codecs::vorbis::VorbisFile tmp1 = ::lime::media::codecs::vorbis::VorbisFile_obj::__new(handle);		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(112)
		return tmp1;
	}
	HX_STACK_LINE(117)
	return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(VorbisFile_obj,fromFile,return )


VorbisFile_obj::VorbisFile_obj()
{
}

void VorbisFile_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(VorbisFile);
	HX_MARK_MEMBER_NAME(bitstream,"bitstream");
	HX_MARK_MEMBER_NAME(handle,"handle");
	HX_MARK_END_CLASS();
}

void VorbisFile_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(bitstream,"bitstream");
	HX_VISIT_MEMBER_NAME(handle,"handle");
}

Dynamic VorbisFile_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"info") ) { return info_dyn(); }
		if (HX_FIELD_EQ(inName,"read") ) { return read_dyn(); }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"clear") ) { return clear_dyn(); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"handle") ) { return handle; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"bitrate") ) { return bitrate_dyn(); }
		if (HX_FIELD_EQ(inName,"comment") ) { return comment_dyn(); }
		if (HX_FIELD_EQ(inName,"pcmSeek") ) { return pcmSeek_dyn(); }
		if (HX_FIELD_EQ(inName,"pcmTell") ) { return pcmTell_dyn(); }
		if (HX_FIELD_EQ(inName,"rawSeek") ) { return rawSeek_dyn(); }
		if (HX_FIELD_EQ(inName,"rawTell") ) { return rawTell_dyn(); }
		if (HX_FIELD_EQ(inName,"streams") ) { return streams_dyn(); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"crosslap") ) { return crosslap_dyn(); }
		if (HX_FIELD_EQ(inName,"pcmTotal") ) { return pcmTotal_dyn(); }
		if (HX_FIELD_EQ(inName,"rawTotal") ) { return rawTotal_dyn(); }
		if (HX_FIELD_EQ(inName,"seekable") ) { return seekable_dyn(); }
		if (HX_FIELD_EQ(inName,"timeSeek") ) { return timeSeek_dyn(); }
		if (HX_FIELD_EQ(inName,"timeTell") ) { return timeTell_dyn(); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"bitstream") ) { return bitstream; }
		if (HX_FIELD_EQ(inName,"readFloat") ) { return readFloat_dyn(); }
		if (HX_FIELD_EQ(inName,"timeTotal") ) { return timeTotal_dyn(); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"pcmSeekLap") ) { return pcmSeekLap_dyn(); }
		if (HX_FIELD_EQ(inName,"rawSeekLap") ) { return rawSeekLap_dyn(); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"pcmSeekPage") ) { return pcmSeekPage_dyn(); }
		if (HX_FIELD_EQ(inName,"timeSeekLap") ) { return timeSeekLap_dyn(); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"serialNumber") ) { return serialNumber_dyn(); }
		if (HX_FIELD_EQ(inName,"timeSeekPage") ) { return timeSeekPage_dyn(); }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"bitrateInstant") ) { return bitrateInstant_dyn(); }
		if (HX_FIELD_EQ(inName,"pcmSeekPageLap") ) { return pcmSeekPageLap_dyn(); }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"timeSeekPageLap") ) { return timeSeekPageLap_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

bool VorbisFile_obj::__GetStatic(const ::String &inName, Dynamic &outValue, hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 8:
		if (HX_FIELD_EQ(inName,"fromFile") ) { outValue = fromFile_dyn(); return true;  }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"fromBytes") ) { outValue = fromBytes_dyn(); return true;  }
	}
	return false;
}

Dynamic VorbisFile_obj::__SetField(const ::String &inName,const Dynamic &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 6:
		if (HX_FIELD_EQ(inName,"handle") ) { handle=inValue.Cast< Dynamic >(); return inValue; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"bitstream") ) { bitstream=inValue.Cast< int >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void VorbisFile_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("bitstream","\x0d","\xe5","\x01","\x1f"));
	outFields->push(HX_HCSTRING("handle","\xa8","\x83","\xfd","\xb7"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsInt,(int)offsetof(VorbisFile_obj,bitstream),HX_HCSTRING("bitstream","\x0d","\xe5","\x01","\x1f")},
	{hx::fsObject /*Dynamic*/ ,(int)offsetof(VorbisFile_obj,handle),HX_HCSTRING("handle","\xa8","\x83","\xfd","\xb7")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo *sStaticStorageInfo = 0;
#endif

static ::String sMemberFields[] = {
	HX_HCSTRING("bitstream","\x0d","\xe5","\x01","\x1f"),
	HX_HCSTRING("handle","\xa8","\x83","\xfd","\xb7"),
	HX_HCSTRING("bitrate","\x2d","\xf6","\xcf","\xfc"),
	HX_HCSTRING("bitrateInstant","\x34","\xd8","\x84","\xad"),
	HX_HCSTRING("clear","\x8d","\x71","\x5b","\x48"),
	HX_HCSTRING("comment","\x5f","\x7a","\x70","\x81"),
	HX_HCSTRING("crosslap","\xdb","\x98","\x18","\x88"),
	HX_HCSTRING("info","\x6e","\x38","\xbb","\x45"),
	HX_HCSTRING("pcmSeek","\xb2","\x99","\x8f","\xc0"),
	HX_HCSTRING("pcmSeekLap","\xc9","\x01","\x58","\x5a"),
	HX_HCSTRING("pcmSeekPage","\x21","\x61","\x4e","\xb5"),
	HX_HCSTRING("pcmSeekPageLap","\xba","\x49","\x2e","\x43"),
	HX_HCSTRING("pcmTell","\x6b","\xd6","\x38","\xc1"),
	HX_HCSTRING("pcmTotal","\x4a","\xf2","\x24","\x57"),
	HX_HCSTRING("rawSeek","\x80","\x9b","\x05","\x09"),
	HX_HCSTRING("rawSeekLap","\xbb","\x94","\x02","\x71"),
	HX_HCSTRING("rawTell","\x39","\xd8","\xae","\x09"),
	HX_HCSTRING("rawTotal","\xbc","\x84","\xf0","\x75"),
	HX_HCSTRING("read","\x56","\x4b","\xa7","\x4b"),
	HX_HCSTRING("readFloat","\x66","\x12","\x7e","\xd3"),
	HX_HCSTRING("seekable","\x12","\x0f","\xf5","\x57"),
	HX_HCSTRING("serialNumber","\xdd","\x53","\x26","\x94"),
	HX_HCSTRING("streams","\xf3","\xdb","\x44","\xf6"),
	HX_HCSTRING("timeSeek","\x25","\x08","\xb2","\xec"),
	HX_HCSTRING("timeSeekLap","\x36","\xdd","\xf1","\xf0"),
	HX_HCSTRING("timeSeekPage","\x14","\x85","\x54","\xe5"),
	HX_HCSTRING("timeSeekPageLap","\xa7","\xdf","\xfe","\x1d"),
	HX_HCSTRING("timeTell","\xde","\x44","\x5b","\xed"),
	HX_HCSTRING("timeTotal","\x77","\x28","\x23","\xc9"),
	::String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(VorbisFile_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(VorbisFile_obj::__mClass,"__mClass");
};

#endif

hx::Class VorbisFile_obj::__mClass;

static ::String sStaticFields[] = {
	HX_HCSTRING("fromBytes","\xa1","\xf2","\x20","\x72"),
	HX_HCSTRING("fromFile","\x06","\x9d","\x87","\xa1"),
	::String(null()) };

void VorbisFile_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("lime.media.codecs.vorbis.VorbisFile","\x3c","\xa9","\x6a","\x70");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &VorbisFile_obj::__GetStatic;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(sStaticFields);
	__mClass->mMembers = hx::Class_obj::dupFunctions(sMemberFields);
	__mClass->mCanCast = hx::TCanCast< VorbisFile_obj >;
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
} // end namespace codecs
} // end namespace vorbis
