#include <hxcpp.h>

#ifndef INCLUDED_haxe_io_Bytes
#include <haxe/io/Bytes.h>
#endif
#ifndef INCLUDED_haxe_io_FPHelper
#include <haxe/io/FPHelper.h>
#endif
#ifndef INCLUDED_lime_utils_compress_Deflate
#include <lime/utils/compress/Deflate.h>
#endif
#ifndef INCLUDED_lime_utils_compress_LZMA
#include <lime/utils/compress/LZMA.h>
#endif
#ifndef INCLUDED_lime_utils_compress_Zlib
#include <lime/utils/compress/Zlib.h>
#endif
#ifndef INCLUDED_openfl_errors_EOFError
#include <openfl/errors/EOFError.h>
#endif
#ifndef INCLUDED_openfl_errors_Error
#include <openfl/errors/Error.h>
#endif
#ifndef INCLUDED_openfl_errors_IOError
#include <openfl/errors/IOError.h>
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
namespace utils{

Void ByteArrayData_obj::__construct(hx::Null< int >  __o_length)
{
HX_STACK_FRAME("openfl.utils.ByteArrayData","new",0x36383a32,"openfl.utils.ByteArrayData.new","openfl/utils/ByteArray.hx",263,0xaa5cee4a)
HX_STACK_THIS(this)
HX_STACK_ARG(__o_length,"length")
int length = __o_length.Default(0);
{
	HX_STACK_LINE(265)
	int tmp = length;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(265)
	::haxe::io::Bytes tmp1 = ::haxe::io::Bytes_obj::alloc(tmp);		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(265)
	::haxe::io::Bytes bytes = tmp1;		HX_STACK_VAR(bytes,"bytes");
	HX_STACK_LINE(268)
	bool tmp2 = (length > (int)0);		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(268)
	if ((tmp2)){
		HX_STACK_LINE(270)
		int tmp3 = length;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(270)
		bytes->fill((int)0,tmp3,(int)0);
	}
	HX_STACK_LINE(278)
	int tmp3 = length;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(278)
	super::__construct(tmp3,bytes->b);
	HX_STACK_LINE(281)
	this->__length = length;
	HX_STACK_LINE(282)
	this->__endian = ((Dynamic)((int)0));
	HX_STACK_LINE(283)
	this->position = (int)0;
}
;
	return null();
}

//ByteArrayData_obj::~ByteArrayData_obj() { }

Dynamic ByteArrayData_obj::__CreateEmpty() { return  new ByteArrayData_obj; }
hx::ObjectPtr< ByteArrayData_obj > ByteArrayData_obj::__new(hx::Null< int >  __o_length)
{  hx::ObjectPtr< ByteArrayData_obj > _result_ = new ByteArrayData_obj();
	_result_->__construct(__o_length);
	return _result_;}

Dynamic ByteArrayData_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< ByteArrayData_obj > _result_ = new ByteArrayData_obj();
	_result_->__construct(inArgs[0]);
	return _result_;}

hx::Object *ByteArrayData_obj::__ToInterface(const hx::type_info &inType) {
	if (inType==typeid( ::openfl::utils::IDataOutput_obj)) return operator ::openfl::utils::IDataOutput_obj *();
	if (inType==typeid( ::openfl::utils::IDataInput_obj)) return operator ::openfl::utils::IDataInput_obj *();
	return super::__ToInterface(inType);
}

ByteArrayData_obj::operator ::openfl::utils::IDataOutput_obj *()
	{ return new ::openfl::utils::IDataOutput_delegate_< ByteArrayData_obj >(this); }
ByteArrayData_obj::operator ::openfl::utils::IDataInput_obj *()
	{ return new ::openfl::utils::IDataInput_delegate_< ByteArrayData_obj >(this); }
Void ByteArrayData_obj::clear( ){
{
		HX_STACK_FRAME("openfl.utils.ByteArrayData","clear",0x0f8b73df,"openfl.utils.ByteArrayData.clear","openfl/utils/ByteArray.hx",288,0xaa5cee4a)
		HX_STACK_THIS(this)
		HX_STACK_LINE(290)
		this->length = (int)0;
		HX_STACK_LINE(291)
		this->position = (int)0;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(ByteArrayData_obj,clear,(void))

Void ByteArrayData_obj::compress( Dynamic __o_algorithm){
Dynamic algorithm = __o_algorithm.Default(2);
	HX_STACK_FRAME("openfl.utils.ByteArrayData","compress",0xe3300490,"openfl.utils.ByteArrayData.compress","openfl/utils/ByteArray.hx",296,0xaa5cee4a)
	HX_STACK_THIS(this)
	HX_STACK_ARG(algorithm,"algorithm")
{
		HX_STACK_LINE(311)
		Dynamic tmp = algorithm;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(311)
		::haxe::io::Bytes tmp1;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(311)
		switch( (int)(tmp)){
			case (int)0: {
				HX_STACK_LINE(313)
				tmp1 = ::lime::utils::compress::Deflate_obj::compress(hx::ObjectPtr<OBJ_>(this));
			}
			;break;
			case (int)1: {
				HX_STACK_LINE(314)
				tmp1 = ::lime::utils::compress::LZMA_obj::compress(hx::ObjectPtr<OBJ_>(this));
			}
			;break;
			default: {
				HX_STACK_LINE(315)
				tmp1 = ::lime::utils::compress::Zlib_obj::compress(hx::ObjectPtr<OBJ_>(this));
			}
		}
		HX_STACK_LINE(311)
		::haxe::io::Bytes bytes = tmp1;		HX_STACK_VAR(bytes,"bytes");
		HX_STACK_LINE(319)
		bool tmp2 = (bytes != null());		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(319)
		if ((tmp2)){
			HX_STACK_LINE(321)
			{
				HX_STACK_LINE(321)
				this->b = bytes->b;
				HX_STACK_LINE(321)
				this->__length = bytes->length;
			}
			HX_STACK_LINE(323)
			int tmp3 = this->__length;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(323)
			this->length = tmp3;
			HX_STACK_LINE(324)
			int tmp4 = this->length;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(324)
			this->position = tmp4;
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(ByteArrayData_obj,compress,(void))

Void ByteArrayData_obj::deflate( ){
{
		HX_STACK_FRAME("openfl.utils.ByteArrayData","deflate",0x97ecc63d,"openfl.utils.ByteArrayData.deflate","openfl/utils/ByteArray.hx",333,0xaa5cee4a)
		HX_STACK_THIS(this)
		HX_STACK_LINE(333)
		this->compress(((Dynamic)((int)0)));
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(ByteArrayData_obj,deflate,(void))

Void ByteArrayData_obj::inflate( ){
{
		HX_STACK_FRAME("openfl.utils.ByteArrayData","inflate",0x010e5759,"openfl.utils.ByteArrayData.inflate","openfl/utils/ByteArray.hx",349,0xaa5cee4a)
		HX_STACK_THIS(this)
		HX_STACK_LINE(349)
		this->uncompress(((Dynamic)((int)0)));
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(ByteArrayData_obj,inflate,(void))

bool ByteArrayData_obj::readBoolean( ){
	HX_STACK_FRAME("openfl.utils.ByteArrayData","readBoolean",0x98e809c4,"openfl.utils.ByteArrayData.readBoolean","openfl/utils/ByteArray.hx",354,0xaa5cee4a)
	HX_STACK_THIS(this)
	HX_STACK_LINE(356)
	int tmp = this->position;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(356)
	int tmp1 = this->length;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(356)
	bool tmp2 = (tmp < tmp1);		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(356)
	if ((tmp2)){
		HX_STACK_LINE(358)
		int tmp3;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(358)
		{
			HX_STACK_LINE(358)
			int tmp4 = (this->position)++;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(358)
			int pos = tmp4;		HX_STACK_VAR(pos,"pos");
			HX_STACK_LINE(358)
			tmp3 = this->b->__get(pos);
		}
		HX_STACK_LINE(358)
		bool tmp4 = (tmp3 != (int)0);		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(358)
		return tmp4;
	}
	else{
		HX_STACK_LINE(362)
		::openfl::errors::EOFError tmp3 = ::openfl::errors::EOFError_obj::__new();		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(362)
		HX_STACK_DO_THROW(tmp3);
		HX_STACK_LINE(363)
		return false;
	}
	HX_STACK_LINE(356)
	return false;
}


HX_DEFINE_DYNAMIC_FUNC0(ByteArrayData_obj,readBoolean,return )

int ByteArrayData_obj::readByte( ){
	HX_STACK_FRAME("openfl.utils.ByteArrayData","readByte",0xc88bb66c,"openfl.utils.ByteArrayData.readByte","openfl/utils/ByteArray.hx",370,0xaa5cee4a)
	HX_STACK_THIS(this)
	HX_STACK_LINE(372)
	int tmp = this->readUnsignedByte();		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(372)
	int value = tmp;		HX_STACK_VAR(value,"value");
	HX_STACK_LINE(374)
	int tmp1 = (int(value) & int((int)128));		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(374)
	bool tmp2 = (tmp1 != (int)0);		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(374)
	if ((tmp2)){
		HX_STACK_LINE(376)
		int tmp3 = (value - (int)256);		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(376)
		return tmp3;
	}
	else{
		HX_STACK_LINE(380)
		int tmp3 = value;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(380)
		return tmp3;
	}
	HX_STACK_LINE(374)
	return (int)0;
}


HX_DEFINE_DYNAMIC_FUNC0(ByteArrayData_obj,readByte,return )

Void ByteArrayData_obj::readBytes( ::openfl::utils::ByteArrayData bytes,hx::Null< int >  __o_offset,hx::Null< int >  __o_length){
int offset = __o_offset.Default(0);
int length = __o_length.Default(0);
	HX_STACK_FRAME("openfl.utils.ByteArrayData","readBytes",0xb1b3e887,"openfl.utils.ByteArrayData.readBytes","openfl/utils/ByteArray.hx",387,0xaa5cee4a)
	HX_STACK_THIS(this)
	HX_STACK_ARG(bytes,"bytes")
	HX_STACK_ARG(offset,"offset")
	HX_STACK_ARG(length,"length")
{
		HX_STACK_LINE(389)
		bool tmp = (length == (int)0);		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(389)
		if ((tmp)){
			HX_STACK_LINE(389)
			int tmp1 = this->length;		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(389)
			int tmp2 = this->position;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(389)
			int tmp3 = (tmp1 - tmp2);		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(389)
			length = tmp3;
		}
		HX_STACK_LINE(391)
		int tmp1 = this->position;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(391)
		int tmp2 = length;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(391)
		int tmp3 = (tmp1 + tmp2);		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(391)
		int tmp4 = this->length;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(391)
		bool tmp5 = (tmp3 > tmp4);		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(391)
		if ((tmp5)){
			HX_STACK_LINE(393)
			::openfl::errors::EOFError tmp6 = ::openfl::errors::EOFError_obj::__new();		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(393)
			HX_STACK_DO_THROW(tmp6);
		}
		HX_STACK_LINE(397)
		int tmp6 = bytes->length;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(397)
		int tmp7 = (offset + length);		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(397)
		bool tmp8 = (tmp6 < tmp7);		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(397)
		if ((tmp8)){
			HX_STACK_LINE(399)
			int tmp9 = (offset + length);		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(399)
			bytes->__resize(tmp9);
		}
		HX_STACK_LINE(403)
		int tmp9 = offset;		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(403)
		int tmp10 = this->position;		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(403)
		int tmp11 = length;		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(403)
		bytes->blit(tmp9,hx::ObjectPtr<OBJ_>(this),tmp10,tmp11);
		HX_STACK_LINE(404)
		hx::AddEq(this->position,length);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC3(ByteArrayData_obj,readBytes,(void))

Float ByteArrayData_obj::readDouble( ){
	HX_STACK_FRAME("openfl.utils.ByteArrayData","readDouble",0xd7136375,"openfl.utils.ByteArrayData.readDouble","openfl/utils/ByteArray.hx",409,0xaa5cee4a)
	HX_STACK_THIS(this)
	HX_STACK_LINE(411)
	int tmp = this->readInt();		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(411)
	int ch1 = tmp;		HX_STACK_VAR(ch1,"ch1");
	HX_STACK_LINE(412)
	int tmp1 = this->readInt();		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(412)
	int ch2 = tmp1;		HX_STACK_VAR(ch2,"ch2");
	HX_STACK_LINE(414)
	Dynamic tmp2 = this->__endian;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(414)
	bool tmp3 = (tmp2 == ((Dynamic)((int)1)));		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(414)
	if ((tmp3)){
		HX_STACK_LINE(416)
		int tmp4 = ch1;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(416)
		int tmp5 = ch2;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(416)
		Float tmp6 = ::haxe::io::FPHelper_obj::i64ToDouble(tmp4,tmp5);		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(416)
		return tmp6;
	}
	else{
		HX_STACK_LINE(420)
		int tmp4 = ch2;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(420)
		int tmp5 = ch1;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(420)
		Float tmp6 = ::haxe::io::FPHelper_obj::i64ToDouble(tmp4,tmp5);		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(420)
		return tmp6;
	}
	HX_STACK_LINE(414)
	return ((Float)0.);
}


HX_DEFINE_DYNAMIC_FUNC0(ByteArrayData_obj,readDouble,return )

Float ByteArrayData_obj::readFloat( ){
	HX_STACK_FRAME("openfl.utils.ByteArrayData","readFloat",0xf6b2a5b8,"openfl.utils.ByteArrayData.readFloat","openfl/utils/ByteArray.hx",427,0xaa5cee4a)
	HX_STACK_THIS(this)
	HX_STACK_LINE(429)
	int tmp = this->readInt();		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(429)
	Float tmp1 = ::haxe::io::FPHelper_obj::i32ToFloat(tmp);		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(429)
	return tmp1;
}


HX_DEFINE_DYNAMIC_FUNC0(ByteArrayData_obj,readFloat,return )

int ByteArrayData_obj::readInt( ){
	HX_STACK_FRAME("openfl.utils.ByteArrayData","readInt",0xf7bc6e0b,"openfl.utils.ByteArrayData.readInt","openfl/utils/ByteArray.hx",434,0xaa5cee4a)
	HX_STACK_THIS(this)
	HX_STACK_LINE(436)
	int tmp = this->readUnsignedByte();		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(436)
	int ch1 = tmp;		HX_STACK_VAR(ch1,"ch1");
	HX_STACK_LINE(437)
	int tmp1 = this->readUnsignedByte();		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(437)
	int ch2 = tmp1;		HX_STACK_VAR(ch2,"ch2");
	HX_STACK_LINE(438)
	int tmp2 = this->readUnsignedByte();		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(438)
	int ch3 = tmp2;		HX_STACK_VAR(ch3,"ch3");
	HX_STACK_LINE(439)
	int tmp3 = this->readUnsignedByte();		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(439)
	int ch4 = tmp3;		HX_STACK_VAR(ch4,"ch4");
	HX_STACK_LINE(441)
	Dynamic tmp4 = this->__endian;		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(441)
	bool tmp5 = (tmp4 == ((Dynamic)((int)1)));		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(441)
	if ((tmp5)){
		HX_STACK_LINE(443)
		int tmp6 = (int(ch4) << int((int)24));		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(443)
		int tmp7 = (int(ch3) << int((int)16));		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(443)
		int tmp8 = (int(tmp6) | int(tmp7));		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(443)
		int tmp9 = (int(ch2) << int((int)8));		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(443)
		int tmp10 = (int(tmp8) | int(tmp9));		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(443)
		int tmp11 = ch1;		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(443)
		int tmp12 = (int(tmp10) | int(tmp11));		HX_STACK_VAR(tmp12,"tmp12");
		HX_STACK_LINE(443)
		return tmp12;
	}
	else{
		HX_STACK_LINE(447)
		int tmp6 = (int(ch1) << int((int)24));		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(447)
		int tmp7 = (int(ch2) << int((int)16));		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(447)
		int tmp8 = (int(tmp6) | int(tmp7));		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(447)
		int tmp9 = (int(ch3) << int((int)8));		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(447)
		int tmp10 = (int(tmp8) | int(tmp9));		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(447)
		int tmp11 = ch4;		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(447)
		int tmp12 = (int(tmp10) | int(tmp11));		HX_STACK_VAR(tmp12,"tmp12");
		HX_STACK_LINE(447)
		return tmp12;
	}
	HX_STACK_LINE(441)
	return (int)0;
}


HX_DEFINE_DYNAMIC_FUNC0(ByteArrayData_obj,readInt,return )

::String ByteArrayData_obj::readMultiByte( int length,::String charSet){
	HX_STACK_FRAME("openfl.utils.ByteArrayData","readMultiByte",0x011f243d,"openfl.utils.ByteArrayData.readMultiByte","openfl/utils/ByteArray.hx",454,0xaa5cee4a)
	HX_STACK_THIS(this)
	HX_STACK_ARG(length,"length")
	HX_STACK_ARG(charSet,"charSet")
	HX_STACK_LINE(456)
	int tmp = length;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(456)
	::String tmp1 = this->readUTFBytes(tmp);		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(456)
	return tmp1;
}


HX_DEFINE_DYNAMIC_FUNC2(ByteArrayData_obj,readMultiByte,return )

int ByteArrayData_obj::readShort( ){
	HX_STACK_FRAME("openfl.utils.ByteArrayData","readShort",0x70436498,"openfl.utils.ByteArrayData.readShort","openfl/utils/ByteArray.hx",461,0xaa5cee4a)
	HX_STACK_THIS(this)
	HX_STACK_LINE(463)
	int tmp = this->readUnsignedByte();		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(463)
	int ch1 = tmp;		HX_STACK_VAR(ch1,"ch1");
	HX_STACK_LINE(464)
	int tmp1 = this->readUnsignedByte();		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(464)
	int ch2 = tmp1;		HX_STACK_VAR(ch2,"ch2");
	HX_STACK_LINE(466)
	int value;		HX_STACK_VAR(value,"value");
	HX_STACK_LINE(468)
	Dynamic tmp2 = this->__endian;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(468)
	bool tmp3 = (tmp2 == ((Dynamic)((int)1)));		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(468)
	if ((tmp3)){
		HX_STACK_LINE(470)
		int tmp4 = (int(ch2) << int((int)8));		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(470)
		int tmp5 = ch1;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(470)
		int tmp6 = (int(tmp4) | int(tmp5));		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(470)
		value = tmp6;
	}
	else{
		HX_STACK_LINE(474)
		int tmp4 = (int(ch1) << int((int)8));		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(474)
		int tmp5 = ch2;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(474)
		int tmp6 = (int(tmp4) | int(tmp5));		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(474)
		value = tmp6;
	}
	HX_STACK_LINE(478)
	int tmp4 = (int(value) & int((int)32768));		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(478)
	bool tmp5 = (tmp4 != (int)0);		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(478)
	if ((tmp5)){
		HX_STACK_LINE(480)
		int tmp6 = (value - (int)65536);		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(480)
		return tmp6;
	}
	else{
		HX_STACK_LINE(484)
		int tmp6 = value;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(484)
		return tmp6;
	}
	HX_STACK_LINE(478)
	return (int)0;
}


HX_DEFINE_DYNAMIC_FUNC0(ByteArrayData_obj,readShort,return )

int ByteArrayData_obj::readUnsignedByte( ){
	HX_STACK_FRAME("openfl.utils.ByteArrayData","readUnsignedByte",0x50ca6601,"openfl.utils.ByteArrayData.readUnsignedByte","openfl/utils/ByteArray.hx",491,0xaa5cee4a)
	HX_STACK_THIS(this)
	HX_STACK_LINE(493)
	int tmp = this->position;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(493)
	int tmp1 = this->length;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(493)
	bool tmp2 = (tmp < tmp1);		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(493)
	if ((tmp2)){
		HX_STACK_LINE(495)
		int tmp3;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(495)
		{
			HX_STACK_LINE(495)
			int tmp4 = (this->position)++;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(495)
			int pos = tmp4;		HX_STACK_VAR(pos,"pos");
			HX_STACK_LINE(495)
			tmp3 = this->b->__get(pos);
		}
		HX_STACK_LINE(495)
		return tmp3;
	}
	else{
		HX_STACK_LINE(499)
		::openfl::errors::EOFError tmp3 = ::openfl::errors::EOFError_obj::__new();		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(499)
		HX_STACK_DO_THROW(tmp3);
		HX_STACK_LINE(500)
		return (int)0;
	}
	HX_STACK_LINE(493)
	return (int)0;
}


HX_DEFINE_DYNAMIC_FUNC0(ByteArrayData_obj,readUnsignedByte,return )

int ByteArrayData_obj::readUnsignedInt( ){
	HX_STACK_FRAME("openfl.utils.ByteArrayData","readUnsignedInt",0xac948816,"openfl.utils.ByteArrayData.readUnsignedInt","openfl/utils/ByteArray.hx",507,0xaa5cee4a)
	HX_STACK_THIS(this)
	HX_STACK_LINE(509)
	int tmp = this->readUnsignedByte();		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(509)
	int ch1 = tmp;		HX_STACK_VAR(ch1,"ch1");
	HX_STACK_LINE(510)
	int tmp1 = this->readUnsignedByte();		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(510)
	int ch2 = tmp1;		HX_STACK_VAR(ch2,"ch2");
	HX_STACK_LINE(511)
	int tmp2 = this->readUnsignedByte();		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(511)
	int ch3 = tmp2;		HX_STACK_VAR(ch3,"ch3");
	HX_STACK_LINE(512)
	int tmp3 = this->readUnsignedByte();		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(512)
	int ch4 = tmp3;		HX_STACK_VAR(ch4,"ch4");
	HX_STACK_LINE(514)
	Dynamic tmp4 = this->__endian;		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(514)
	bool tmp5 = (tmp4 == ((Dynamic)((int)1)));		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(514)
	if ((tmp5)){
		HX_STACK_LINE(516)
		int tmp6 = (int(ch4) << int((int)24));		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(516)
		int tmp7 = (int(ch3) << int((int)16));		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(516)
		int tmp8 = (int(tmp6) | int(tmp7));		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(516)
		int tmp9 = (int(ch2) << int((int)8));		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(516)
		int tmp10 = (int(tmp8) | int(tmp9));		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(516)
		int tmp11 = ch1;		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(516)
		int tmp12 = (int(tmp10) | int(tmp11));		HX_STACK_VAR(tmp12,"tmp12");
		HX_STACK_LINE(516)
		return tmp12;
	}
	else{
		HX_STACK_LINE(520)
		int tmp6 = (int(ch1) << int((int)24));		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(520)
		int tmp7 = (int(ch2) << int((int)16));		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(520)
		int tmp8 = (int(tmp6) | int(tmp7));		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(520)
		int tmp9 = (int(ch3) << int((int)8));		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(520)
		int tmp10 = (int(tmp8) | int(tmp9));		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(520)
		int tmp11 = ch4;		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(520)
		int tmp12 = (int(tmp10) | int(tmp11));		HX_STACK_VAR(tmp12,"tmp12");
		HX_STACK_LINE(520)
		return tmp12;
	}
	HX_STACK_LINE(514)
	return (int)0;
}


HX_DEFINE_DYNAMIC_FUNC0(ByteArrayData_obj,readUnsignedInt,return )

int ByteArrayData_obj::readUnsignedShort( ){
	HX_STACK_FRAME("openfl.utils.ByteArrayData","readUnsignedShort",0x1ede5763,"openfl.utils.ByteArrayData.readUnsignedShort","openfl/utils/ByteArray.hx",527,0xaa5cee4a)
	HX_STACK_THIS(this)
	HX_STACK_LINE(529)
	int tmp = this->readUnsignedByte();		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(529)
	int ch1 = tmp;		HX_STACK_VAR(ch1,"ch1");
	HX_STACK_LINE(530)
	int tmp1 = this->readUnsignedByte();		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(530)
	int ch2 = tmp1;		HX_STACK_VAR(ch2,"ch2");
	HX_STACK_LINE(532)
	Dynamic tmp2 = this->__endian;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(532)
	bool tmp3 = (tmp2 == ((Dynamic)((int)1)));		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(532)
	if ((tmp3)){
		HX_STACK_LINE(534)
		int tmp4 = (int(ch2) << int((int)8));		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(534)
		int tmp5 = ch1;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(534)
		int tmp6 = (tmp4 + tmp5);		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(534)
		return tmp6;
	}
	else{
		HX_STACK_LINE(538)
		int tmp4 = (int(ch1) << int((int)8));		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(538)
		int tmp5 = ch2;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(538)
		int tmp6 = (int(tmp4) | int(tmp5));		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(538)
		return tmp6;
	}
	HX_STACK_LINE(532)
	return (int)0;
}


HX_DEFINE_DYNAMIC_FUNC0(ByteArrayData_obj,readUnsignedShort,return )

::String ByteArrayData_obj::readUTF( ){
	HX_STACK_FRAME("openfl.utils.ByteArrayData","readUTF",0xf7c57243,"openfl.utils.ByteArrayData.readUTF","openfl/utils/ByteArray.hx",545,0xaa5cee4a)
	HX_STACK_THIS(this)
	HX_STACK_LINE(547)
	int tmp = this->readUnsignedShort();		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(547)
	int bytesCount = tmp;		HX_STACK_VAR(bytesCount,"bytesCount");
	HX_STACK_LINE(548)
	int tmp1 = bytesCount;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(548)
	::String tmp2 = this->readUTFBytes(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(548)
	return tmp2;
}


HX_DEFINE_DYNAMIC_FUNC0(ByteArrayData_obj,readUTF,return )

::String ByteArrayData_obj::readUTFBytes( int length){
	HX_STACK_FRAME("openfl.utils.ByteArrayData","readUTFBytes",0x87ebf328,"openfl.utils.ByteArrayData.readUTFBytes","openfl/utils/ByteArray.hx",553,0xaa5cee4a)
	HX_STACK_THIS(this)
	HX_STACK_ARG(length,"length")
	HX_STACK_LINE(555)
	int tmp = this->position;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(555)
	int tmp1 = length;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(555)
	int tmp2 = (tmp + tmp1);		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(555)
	int tmp3 = this->length;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(555)
	bool tmp4 = (tmp2 > tmp3);		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(555)
	if ((tmp4)){
		HX_STACK_LINE(557)
		::openfl::errors::EOFError tmp5 = ::openfl::errors::EOFError_obj::__new();		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(557)
		HX_STACK_DO_THROW(tmp5);
	}
	HX_STACK_LINE(561)
	hx::AddEq(this->position,length);
	HX_STACK_LINE(564)
	int tmp5 = this->position;		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(564)
	int tmp6 = length;		HX_STACK_VAR(tmp6,"tmp6");
	HX_STACK_LINE(564)
	int tmp7 = (tmp5 - tmp6);		HX_STACK_VAR(tmp7,"tmp7");
	HX_STACK_LINE(564)
	int tmp8 = length;		HX_STACK_VAR(tmp8,"tmp8");
	HX_STACK_LINE(564)
	::String tmp9 = this->getString(tmp7,tmp8);		HX_STACK_VAR(tmp9,"tmp9");
	HX_STACK_LINE(564)
	return tmp9;
}


HX_DEFINE_DYNAMIC_FUNC1(ByteArrayData_obj,readUTFBytes,return )

Void ByteArrayData_obj::uncompress( Dynamic __o_algorithm){
Dynamic algorithm = __o_algorithm.Default(2);
	HX_STACK_FRAME("openfl.utils.ByteArrayData","uncompress",0xb44f8369,"openfl.utils.ByteArrayData.uncompress","openfl/utils/ByteArray.hx",569,0xaa5cee4a)
	HX_STACK_THIS(this)
	HX_STACK_ARG(algorithm,"algorithm")
{
		HX_STACK_LINE(584)
		Dynamic tmp = algorithm;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(584)
		::haxe::io::Bytes tmp1;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(584)
		switch( (int)(tmp)){
			case (int)0: {
				HX_STACK_LINE(586)
				tmp1 = ::lime::utils::compress::Deflate_obj::decompress(hx::ObjectPtr<OBJ_>(this));
			}
			;break;
			case (int)1: {
				HX_STACK_LINE(587)
				tmp1 = ::lime::utils::compress::LZMA_obj::decompress(hx::ObjectPtr<OBJ_>(this));
			}
			;break;
			default: {
				HX_STACK_LINE(588)
				tmp1 = ::lime::utils::compress::Zlib_obj::decompress(hx::ObjectPtr<OBJ_>(this));
			}
		}
		HX_STACK_LINE(584)
		::haxe::io::Bytes bytes = tmp1;		HX_STACK_VAR(bytes,"bytes");
		HX_STACK_LINE(592)
		bool tmp2 = (bytes != null());		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(592)
		if ((tmp2)){
			HX_STACK_LINE(594)
			{
				HX_STACK_LINE(594)
				this->b = bytes->b;
				HX_STACK_LINE(594)
				this->__length = bytes->length;
			}
			HX_STACK_LINE(596)
			int tmp3 = this->__length;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(596)
			this->length = tmp3;
			HX_STACK_LINE(597)
			this->position = (int)0;
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(ByteArrayData_obj,uncompress,(void))

Void ByteArrayData_obj::writeBoolean( bool value){
{
		HX_STACK_FRAME("openfl.utils.ByteArrayData","writeBoolean",0x790a5b77,"openfl.utils.ByteArrayData.writeBoolean","openfl/utils/ByteArray.hx",604,0xaa5cee4a)
		HX_STACK_THIS(this)
		HX_STACK_ARG(value,"value")
		HX_STACK_LINE(606)
		bool tmp = value;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(606)
		int tmp1;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(606)
		if ((tmp)){
			HX_STACK_LINE(606)
			tmp1 = (int)1;
		}
		else{
			HX_STACK_LINE(606)
			tmp1 = (int)0;
		}
		HX_STACK_LINE(606)
		this->writeByte(tmp1);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(ByteArrayData_obj,writeBoolean,(void))

Void ByteArrayData_obj::writeByte( int value){
{
		HX_STACK_FRAME("openfl.utils.ByteArrayData","writeByte",0x6d0ba6d9,"openfl.utils.ByteArrayData.writeByte","openfl/utils/ByteArray.hx",611,0xaa5cee4a)
		HX_STACK_THIS(this)
		HX_STACK_ARG(value,"value")
		HX_STACK_LINE(613)
		int tmp = this->position;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(613)
		int tmp1 = (tmp + (int)1);		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(613)
		this->__resize(tmp1);
		HX_STACK_LINE(614)
		{
			HX_STACK_LINE(614)
			int tmp2 = (this->position)++;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(614)
			int pos = tmp2;		HX_STACK_VAR(pos,"pos");
			HX_STACK_LINE(614)
			int tmp3 = (int(value) & int((int)255));		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(614)
			this->b[pos] = tmp3;
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(ByteArrayData_obj,writeByte,(void))

Void ByteArrayData_obj::writeBytes( ::openfl::utils::ByteArrayData bytes,hx::Null< int >  __o_offset,hx::Null< int >  __o_length){
int offset = __o_offset.Default(0);
int length = __o_length.Default(0);
	HX_STACK_FRAME("openfl.utils.ByteArrayData","writeBytes",0xfd26577a,"openfl.utils.ByteArrayData.writeBytes","openfl/utils/ByteArray.hx",619,0xaa5cee4a)
	HX_STACK_THIS(this)
	HX_STACK_ARG(bytes,"bytes")
	HX_STACK_ARG(offset,"offset")
	HX_STACK_ARG(length,"length")
{
		HX_STACK_LINE(621)
		::openfl::utils::ByteArrayData tmp = bytes;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(621)
		int tmp1 = ::openfl::utils::_ByteArray::ByteArray_Impl__obj::get_length(tmp);		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(621)
		bool tmp2 = (tmp1 == (int)0);		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(621)
		if ((tmp2)){
			HX_STACK_LINE(621)
			return null();
		}
		HX_STACK_LINE(622)
		bool tmp3 = (length == (int)0);		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(622)
		if ((tmp3)){
			HX_STACK_LINE(622)
			int tmp4;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(622)
			{
				HX_STACK_LINE(622)
				::openfl::utils::ByteArrayData tmp5 = bytes;		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(622)
				int tmp6 = ::openfl::utils::_ByteArray::ByteArray_Impl__obj::get_length(tmp5);		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(622)
				int a = tmp6;		HX_STACK_VAR(a,"a");
				HX_STACK_LINE(622)
				tmp4 = (a - offset);
			}
			HX_STACK_LINE(622)
			length = tmp4;
		}
		HX_STACK_LINE(624)
		int tmp4 = this->position;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(624)
		int tmp5 = tmp4;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(624)
		int tmp6 = length;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(624)
		int tmp7 = (tmp5 + tmp6);		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(624)
		int tmp8 = tmp7;		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(624)
		this->__resize(tmp8);
		HX_STACK_LINE(625)
		int tmp9 = this->position;		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(625)
		::openfl::utils::ByteArrayData tmp10 = bytes;		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(625)
		int tmp11 = offset;		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(625)
		int tmp12 = length;		HX_STACK_VAR(tmp12,"tmp12");
		HX_STACK_LINE(625)
		this->blit(tmp9,tmp10,tmp11,tmp12);
		HX_STACK_LINE(627)
		int tmp13 = this->position;		HX_STACK_VAR(tmp13,"tmp13");
		HX_STACK_LINE(627)
		int tmp14 = tmp13;		HX_STACK_VAR(tmp14,"tmp14");
		HX_STACK_LINE(627)
		int tmp15 = length;		HX_STACK_VAR(tmp15,"tmp15");
		HX_STACK_LINE(627)
		int tmp16 = (tmp14 + tmp15);		HX_STACK_VAR(tmp16,"tmp16");
		HX_STACK_LINE(627)
		this->position = tmp16;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC3(ByteArrayData_obj,writeBytes,(void))

Void ByteArrayData_obj::writeDouble( Float value){
{
		HX_STACK_FRAME("openfl.utils.ByteArrayData","writeDouble",0x8fc20922,"openfl.utils.ByteArrayData.writeDouble","openfl/utils/ByteArray.hx",632,0xaa5cee4a)
		HX_STACK_THIS(this)
		HX_STACK_ARG(value,"value")
		HX_STACK_LINE(634)
		Float tmp = value;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(634)
		cpp::Int64Struct tmp1 = ::haxe::io::FPHelper_obj::doubleToI64(tmp);		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(634)
		cpp::Int64Struct int64 = tmp1;		HX_STACK_VAR(int64,"int64");
		HX_STACK_LINE(636)
		Dynamic tmp2 = this->__endian;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(636)
		bool tmp3 = (tmp2 == ((Dynamic)((int)1)));		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(636)
		if ((tmp3)){
			HX_STACK_LINE(638)
			this->writeInt((int)((int64)&0xffffffff));
			HX_STACK_LINE(639)
			this->writeInt((int)(((cpp::Int64)(int64))>>32));
		}
		else{
			HX_STACK_LINE(643)
			this->writeInt((int)(((cpp::Int64)(int64))>>32));
			HX_STACK_LINE(644)
			this->writeInt((int)((int64)&0xffffffff));
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(ByteArrayData_obj,writeDouble,(void))

Void ByteArrayData_obj::writeFloat( Float value){
{
		HX_STACK_FRAME("openfl.utils.ByteArrayData","writeFloat",0x422514ab,"openfl.utils.ByteArrayData.writeFloat","openfl/utils/ByteArray.hx",651,0xaa5cee4a)
		HX_STACK_THIS(this)
		HX_STACK_ARG(value,"value")
		HX_STACK_LINE(653)
		Dynamic tmp = this->__endian;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(653)
		bool tmp1 = (tmp == ((Dynamic)((int)1)));		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(653)
		if ((tmp1)){
			HX_STACK_LINE(655)
			int tmp2 = this->position;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(655)
			int tmp3 = (tmp2 + (int)4);		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(655)
			this->__resize(tmp3);
			HX_STACK_LINE(656)
			int tmp4 = this->position;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(656)
			Float tmp5 = value;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(656)
			this->setFloat(tmp4,tmp5);
			HX_STACK_LINE(657)
			hx::AddEq(this->position,(int)4);
		}
		else{
			HX_STACK_LINE(661)
			Float tmp2 = value;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(661)
			int tmp3 = ::haxe::io::FPHelper_obj::floatToI32(tmp2);		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(661)
			int _int = tmp3;		HX_STACK_VAR(_int,"int");
			HX_STACK_LINE(662)
			int tmp4 = _int;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(662)
			this->writeInt(tmp4);
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(ByteArrayData_obj,writeFloat,(void))

Void ByteArrayData_obj::writeInt( int value){
{
		HX_STACK_FRAME("openfl.utils.ByteArrayData","writeInt",0x83612a3e,"openfl.utils.ByteArrayData.writeInt","openfl/utils/ByteArray.hx",669,0xaa5cee4a)
		HX_STACK_THIS(this)
		HX_STACK_ARG(value,"value")
		HX_STACK_LINE(671)
		int tmp = this->position;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(671)
		int tmp1 = (tmp + (int)4);		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(671)
		this->__resize(tmp1);
		HX_STACK_LINE(673)
		Dynamic tmp2 = this->__endian;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(673)
		bool tmp3 = (tmp2 == ((Dynamic)((int)1)));		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(673)
		if ((tmp3)){
			HX_STACK_LINE(675)
			{
				HX_STACK_LINE(675)
				int tmp4 = (this->position)++;		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(675)
				int pos = tmp4;		HX_STACK_VAR(pos,"pos");
				HX_STACK_LINE(675)
				int tmp5 = (int(value) & int((int)255));		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(675)
				this->b[pos] = tmp5;
			}
			HX_STACK_LINE(676)
			{
				HX_STACK_LINE(676)
				int tmp4 = (this->position)++;		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(676)
				int pos = tmp4;		HX_STACK_VAR(pos,"pos");
				HX_STACK_LINE(676)
				int tmp5 = (int(value) >> int((int)8));		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(676)
				int tmp6 = (int(tmp5) & int((int)255));		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(676)
				this->b[pos] = tmp6;
			}
			HX_STACK_LINE(677)
			{
				HX_STACK_LINE(677)
				int tmp4 = (this->position)++;		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(677)
				int pos = tmp4;		HX_STACK_VAR(pos,"pos");
				HX_STACK_LINE(677)
				int tmp5 = (int(value) >> int((int)16));		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(677)
				int tmp6 = (int(tmp5) & int((int)255));		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(677)
				this->b[pos] = tmp6;
			}
			HX_STACK_LINE(678)
			{
				HX_STACK_LINE(678)
				int tmp4 = (this->position)++;		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(678)
				int pos = tmp4;		HX_STACK_VAR(pos,"pos");
				HX_STACK_LINE(678)
				int tmp5 = (int(value) >> int((int)24));		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(678)
				int tmp6 = (int(tmp5) & int((int)255));		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(678)
				this->b[pos] = tmp6;
			}
		}
		else{
			HX_STACK_LINE(682)
			{
				HX_STACK_LINE(682)
				int tmp4 = (this->position)++;		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(682)
				int pos = tmp4;		HX_STACK_VAR(pos,"pos");
				HX_STACK_LINE(682)
				int tmp5 = (int(value) >> int((int)24));		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(682)
				int tmp6 = (int(tmp5) & int((int)255));		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(682)
				this->b[pos] = tmp6;
			}
			HX_STACK_LINE(683)
			{
				HX_STACK_LINE(683)
				int tmp4 = (this->position)++;		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(683)
				int pos = tmp4;		HX_STACK_VAR(pos,"pos");
				HX_STACK_LINE(683)
				int tmp5 = (int(value) >> int((int)16));		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(683)
				int tmp6 = (int(tmp5) & int((int)255));		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(683)
				this->b[pos] = tmp6;
			}
			HX_STACK_LINE(684)
			{
				HX_STACK_LINE(684)
				int tmp4 = (this->position)++;		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(684)
				int pos = tmp4;		HX_STACK_VAR(pos,"pos");
				HX_STACK_LINE(684)
				int tmp5 = (int(value) >> int((int)8));		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(684)
				int tmp6 = (int(tmp5) & int((int)255));		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(684)
				this->b[pos] = tmp6;
			}
			HX_STACK_LINE(685)
			{
				HX_STACK_LINE(685)
				int tmp4 = (this->position)++;		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(685)
				int pos = tmp4;		HX_STACK_VAR(pos,"pos");
				HX_STACK_LINE(685)
				int tmp5 = (int(value) & int((int)255));		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(685)
				this->b[pos] = tmp5;
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(ByteArrayData_obj,writeInt,(void))

Void ByteArrayData_obj::writeMultiByte( ::String value,::String charSet){
{
		HX_STACK_FRAME("openfl.utils.ByteArrayData","writeMultiByte",0xebbf88b0,"openfl.utils.ByteArrayData.writeMultiByte","openfl/utils/ByteArray.hx",692,0xaa5cee4a)
		HX_STACK_THIS(this)
		HX_STACK_ARG(value,"value")
		HX_STACK_ARG(charSet,"charSet")
		HX_STACK_LINE(694)
		::String tmp = value;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(694)
		this->writeUTFBytes(tmp);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(ByteArrayData_obj,writeMultiByte,(void))

Void ByteArrayData_obj::writeShort( int value){
{
		HX_STACK_FRAME("openfl.utils.ByteArrayData","writeShort",0xbbb5d38b,"openfl.utils.ByteArrayData.writeShort","openfl/utils/ByteArray.hx",699,0xaa5cee4a)
		HX_STACK_THIS(this)
		HX_STACK_ARG(value,"value")
		HX_STACK_LINE(701)
		int tmp = this->position;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(701)
		int tmp1 = (tmp + (int)2);		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(701)
		this->__resize(tmp1);
		HX_STACK_LINE(703)
		Dynamic tmp2 = this->__endian;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(703)
		bool tmp3 = (tmp2 == ((Dynamic)((int)1)));		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(703)
		if ((tmp3)){
			HX_STACK_LINE(705)
			{
				HX_STACK_LINE(705)
				int tmp4 = (this->position)++;		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(705)
				int pos = tmp4;		HX_STACK_VAR(pos,"pos");
				HX_STACK_LINE(705)
				int tmp5 = value;		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(705)
				this->b[pos] = tmp5;
			}
			HX_STACK_LINE(706)
			{
				HX_STACK_LINE(706)
				int tmp4 = (this->position)++;		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(706)
				int pos = tmp4;		HX_STACK_VAR(pos,"pos");
				HX_STACK_LINE(706)
				int tmp5 = (int(value) >> int((int)8));		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(706)
				this->b[pos] = tmp5;
			}
		}
		else{
			HX_STACK_LINE(710)
			{
				HX_STACK_LINE(710)
				int tmp4 = (this->position)++;		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(710)
				int pos = tmp4;		HX_STACK_VAR(pos,"pos");
				HX_STACK_LINE(710)
				int tmp5 = (int(value) >> int((int)8));		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(710)
				this->b[pos] = tmp5;
			}
			HX_STACK_LINE(711)
			{
				HX_STACK_LINE(711)
				int tmp4 = (this->position)++;		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(711)
				int pos = tmp4;		HX_STACK_VAR(pos,"pos");
				HX_STACK_LINE(711)
				int tmp5 = value;		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(711)
				this->b[pos] = tmp5;
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(ByteArrayData_obj,writeShort,(void))

Void ByteArrayData_obj::writeUnsignedInt( int value){
{
		HX_STACK_FRAME("openfl.utils.ByteArrayData","writeUnsignedInt",0xcb6d2f49,"openfl.utils.ByteArrayData.writeUnsignedInt","openfl/utils/ByteArray.hx",718,0xaa5cee4a)
		HX_STACK_THIS(this)
		HX_STACK_ARG(value,"value")
		HX_STACK_LINE(720)
		int tmp = value;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(720)
		this->writeInt(tmp);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(ByteArrayData_obj,writeUnsignedInt,(void))

Void ByteArrayData_obj::writeUTF( ::String value){
{
		HX_STACK_FRAME("openfl.utils.ByteArrayData","writeUTF",0x836a2e76,"openfl.utils.ByteArrayData.writeUTF","openfl/utils/ByteArray.hx",725,0xaa5cee4a)
		HX_STACK_THIS(this)
		HX_STACK_ARG(value,"value")
		HX_STACK_LINE(727)
		::String tmp = value;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(727)
		::haxe::io::Bytes tmp1 = ::haxe::io::Bytes_obj::ofString(tmp);		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(727)
		::haxe::io::Bytes bytes = tmp1;		HX_STACK_VAR(bytes,"bytes");
		HX_STACK_LINE(729)
		int tmp2 = bytes->length;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(729)
		this->writeShort(tmp2);
		HX_STACK_LINE(730)
		::haxe::io::Bytes tmp3 = bytes;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(730)
		::openfl::utils::ByteArrayData tmp4 = ::openfl::utils::_ByteArray::ByteArray_Impl__obj::fromArrayBuffer(tmp3);		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(730)
		this->writeBytes(tmp4,null(),null());
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(ByteArrayData_obj,writeUTF,(void))

Void ByteArrayData_obj::writeUTFBytes( ::String value){
{
		HX_STACK_FRAME("openfl.utils.ByteArrayData","writeUTFBytes",0xc5d11e15,"openfl.utils.ByteArrayData.writeUTFBytes","openfl/utils/ByteArray.hx",735,0xaa5cee4a)
		HX_STACK_THIS(this)
		HX_STACK_ARG(value,"value")
		HX_STACK_LINE(737)
		::String tmp = value;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(737)
		::haxe::io::Bytes tmp1 = ::haxe::io::Bytes_obj::ofString(tmp);		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(737)
		::haxe::io::Bytes bytes = tmp1;		HX_STACK_VAR(bytes,"bytes");
		HX_STACK_LINE(738)
		::String tmp2 = value;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(738)
		::haxe::io::Bytes tmp3 = ::haxe::io::Bytes_obj::ofString(tmp2);		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(738)
		::openfl::utils::ByteArrayData tmp4 = ::openfl::utils::_ByteArray::ByteArray_Impl__obj::fromArrayBuffer(tmp3);		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(738)
		this->writeBytes(tmp4,null(),null());
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(ByteArrayData_obj,writeUTFBytes,(void))

Void ByteArrayData_obj::__fromBytes( ::haxe::io::Bytes bytes){
{
		HX_STACK_FRAME("openfl.utils.ByteArrayData","__fromBytes",0x684ac753,"openfl.utils.ByteArrayData.__fromBytes","openfl/utils/ByteArray.hx",743,0xaa5cee4a)
		HX_STACK_THIS(this)
		HX_STACK_ARG(bytes,"bytes")
		HX_STACK_LINE(745)
		{
			HX_STACK_LINE(745)
			this->b = bytes->b;
			HX_STACK_LINE(745)
			this->__length = bytes->length;
		}
		HX_STACK_LINE(746)
		this->length = bytes->length;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(ByteArrayData_obj,__fromBytes,(void))

Void ByteArrayData_obj::__resize( int size){
{
		HX_STACK_FRAME("openfl.utils.ByteArrayData","__resize",0x101b8202,"openfl.utils.ByteArrayData.__resize","openfl/utils/ByteArray.hx",751,0xaa5cee4a)
		HX_STACK_THIS(this)
		HX_STACK_ARG(size,"size")
		HX_STACK_LINE(753)
		int tmp = size;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(753)
		int tmp1 = this->__length;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(753)
		bool tmp2 = (tmp > tmp1);		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(753)
		if ((tmp2)){
			HX_STACK_LINE(755)
			int tmp3 = (size + (int)1);		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(755)
			int tmp4 = (tmp3 * (int)3);		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(755)
			int tmp5 = (int(tmp4) >> int((int)1));		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(755)
			::haxe::io::Bytes tmp6 = ::haxe::io::Bytes_obj::alloc(tmp5);		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(755)
			::haxe::io::Bytes bytes = tmp6;		HX_STACK_VAR(bytes,"bytes");
			HX_STACK_LINE(757)
			int tmp7 = this->length;		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(757)
			int tmp8 = size;		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(757)
			bytes->fill(tmp7,tmp8,(int)0);
			HX_STACK_LINE(759)
			int tmp9 = this->length;		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(759)
			int cacheLength = tmp9;		HX_STACK_VAR(cacheLength,"cacheLength");
			HX_STACK_LINE(760)
			int tmp10 = this->__length;		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(760)
			this->length = tmp10;
			HX_STACK_LINE(761)
			int tmp11 = this->__length;		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(761)
			bytes->blit((int)0,hx::ObjectPtr<OBJ_>(this),(int)0,tmp11);
			HX_STACK_LINE(762)
			this->length = cacheLength;
			HX_STACK_LINE(763)
			{
				HX_STACK_LINE(763)
				this->b = bytes->b;
				HX_STACK_LINE(763)
				this->__length = bytes->length;
			}
		}
		HX_STACK_LINE(767)
		int tmp3 = this->length;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(767)
		int tmp4 = size;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(767)
		bool tmp5 = (tmp3 < tmp4);		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(767)
		if ((tmp5)){
			HX_STACK_LINE(769)
			this->length = size;
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(ByteArrayData_obj,__resize,(void))

Void ByteArrayData_obj::__setData( ::haxe::io::Bytes bytes){
{
		HX_STACK_FRAME("openfl.utils.ByteArrayData","__setData",0xac6a7b1e,"openfl.utils.ByteArrayData.__setData","openfl/utils/ByteArray.hx",776,0xaa5cee4a)
		HX_STACK_THIS(this)
		HX_STACK_ARG(bytes,"bytes")
		HX_STACK_LINE(778)
		this->b = bytes->b;
		HX_STACK_LINE(779)
		this->__length = bytes->length;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(ByteArrayData_obj,__setData,(void))

int ByteArrayData_obj::get_bytesAvailable( ){
	HX_STACK_FRAME("openfl.utils.ByteArrayData","get_bytesAvailable",0x68329f15,"openfl.utils.ByteArrayData.get_bytesAvailable","openfl/utils/ByteArray.hx",795,0xaa5cee4a)
	HX_STACK_THIS(this)
	HX_STACK_LINE(797)
	int tmp = this->length;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(797)
	int tmp1 = this->position;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(797)
	int tmp2 = (tmp - tmp1);		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(797)
	return tmp2;
}


HX_DEFINE_DYNAMIC_FUNC0(ByteArrayData_obj,get_bytesAvailable,return )

Dynamic ByteArrayData_obj::get_endian( ){
	HX_STACK_FRAME("openfl.utils.ByteArrayData","get_endian",0x95dc5cd2,"openfl.utils.ByteArrayData.get_endian","openfl/utils/ByteArray.hx",802,0xaa5cee4a)
	HX_STACK_THIS(this)
	HX_STACK_LINE(804)
	Dynamic tmp = this->__endian;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(804)
	return tmp;
}


HX_DEFINE_DYNAMIC_FUNC0(ByteArrayData_obj,get_endian,return )

Dynamic ByteArrayData_obj::set_endian( Dynamic value){
	HX_STACK_FRAME("openfl.utils.ByteArrayData","set_endian",0x9959fb46,"openfl.utils.ByteArrayData.set_endian","openfl/utils/ByteArray.hx",809,0xaa5cee4a)
	HX_STACK_THIS(this)
	HX_STACK_ARG(value,"value")
	HX_STACK_LINE(811)
	Dynamic tmp = this->__endian = value;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(811)
	return tmp;
}


HX_DEFINE_DYNAMIC_FUNC1(ByteArrayData_obj,set_endian,return )

::openfl::utils::ByteArrayData ByteArrayData_obj::fromBytes( ::haxe::io::Bytes bytes){
	HX_STACK_FRAME("openfl.utils.ByteArrayData","fromBytes",0x955585f3,"openfl.utils.ByteArrayData.fromBytes","openfl/utils/ByteArray.hx",338,0xaa5cee4a)
	HX_STACK_ARG(bytes,"bytes")
	HX_STACK_LINE(340)
	::openfl::utils::ByteArrayData tmp = ::openfl::utils::ByteArrayData_obj::__new(null());		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(340)
	::openfl::utils::ByteArrayData result = tmp;		HX_STACK_VAR(result,"result");
	HX_STACK_LINE(341)
	::haxe::io::Bytes tmp1 = bytes;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(341)
	result->__fromBytes(tmp1);
	HX_STACK_LINE(342)
	::openfl::utils::ByteArrayData tmp2 = result;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(342)
	return tmp2;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(ByteArrayData_obj,fromBytes,return )


ByteArrayData_obj::ByteArrayData_obj()
{
}

void ByteArrayData_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(ByteArrayData);
	HX_MARK_MEMBER_NAME(objectEncoding,"objectEncoding");
	HX_MARK_MEMBER_NAME(position,"position");
	HX_MARK_MEMBER_NAME(__endian,"__endian");
	HX_MARK_MEMBER_NAME(__length,"__length");
	::haxe::io::Bytes_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void ByteArrayData_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(objectEncoding,"objectEncoding");
	HX_VISIT_MEMBER_NAME(position,"position");
	HX_VISIT_MEMBER_NAME(__endian,"__endian");
	HX_VISIT_MEMBER_NAME(__length,"__length");
	::haxe::io::Bytes_obj::__Visit(HX_VISIT_ARG);
}

Dynamic ByteArrayData_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"clear") ) { return clear_dyn(); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"endian") ) { if (inCallProp == hx::paccAlways) return get_endian(); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"deflate") ) { return deflate_dyn(); }
		if (HX_FIELD_EQ(inName,"inflate") ) { return inflate_dyn(); }
		if (HX_FIELD_EQ(inName,"readInt") ) { return readInt_dyn(); }
		if (HX_FIELD_EQ(inName,"readUTF") ) { return readUTF_dyn(); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"position") ) { return position; }
		if (HX_FIELD_EQ(inName,"__endian") ) { return __endian; }
		if (HX_FIELD_EQ(inName,"__length") ) { return __length; }
		if (HX_FIELD_EQ(inName,"compress") ) { return compress_dyn(); }
		if (HX_FIELD_EQ(inName,"readByte") ) { return readByte_dyn(); }
		if (HX_FIELD_EQ(inName,"writeInt") ) { return writeInt_dyn(); }
		if (HX_FIELD_EQ(inName,"writeUTF") ) { return writeUTF_dyn(); }
		if (HX_FIELD_EQ(inName,"__resize") ) { return __resize_dyn(); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"readBytes") ) { return readBytes_dyn(); }
		if (HX_FIELD_EQ(inName,"readFloat") ) { return readFloat_dyn(); }
		if (HX_FIELD_EQ(inName,"readShort") ) { return readShort_dyn(); }
		if (HX_FIELD_EQ(inName,"writeByte") ) { return writeByte_dyn(); }
		if (HX_FIELD_EQ(inName,"__setData") ) { return __setData_dyn(); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"readDouble") ) { return readDouble_dyn(); }
		if (HX_FIELD_EQ(inName,"uncompress") ) { return uncompress_dyn(); }
		if (HX_FIELD_EQ(inName,"writeBytes") ) { return writeBytes_dyn(); }
		if (HX_FIELD_EQ(inName,"writeFloat") ) { return writeFloat_dyn(); }
		if (HX_FIELD_EQ(inName,"writeShort") ) { return writeShort_dyn(); }
		if (HX_FIELD_EQ(inName,"get_endian") ) { return get_endian_dyn(); }
		if (HX_FIELD_EQ(inName,"set_endian") ) { return set_endian_dyn(); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"readBoolean") ) { return readBoolean_dyn(); }
		if (HX_FIELD_EQ(inName,"writeDouble") ) { return writeDouble_dyn(); }
		if (HX_FIELD_EQ(inName,"__fromBytes") ) { return __fromBytes_dyn(); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"readUTFBytes") ) { return readUTFBytes_dyn(); }
		if (HX_FIELD_EQ(inName,"writeBoolean") ) { return writeBoolean_dyn(); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"readMultiByte") ) { return readMultiByte_dyn(); }
		if (HX_FIELD_EQ(inName,"writeUTFBytes") ) { return writeUTFBytes_dyn(); }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"bytesAvailable") ) { if (inCallProp == hx::paccAlways) return get_bytesAvailable(); }
		if (HX_FIELD_EQ(inName,"objectEncoding") ) { return objectEncoding; }
		if (HX_FIELD_EQ(inName,"writeMultiByte") ) { return writeMultiByte_dyn(); }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"readUnsignedInt") ) { return readUnsignedInt_dyn(); }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"readUnsignedByte") ) { return readUnsignedByte_dyn(); }
		if (HX_FIELD_EQ(inName,"writeUnsignedInt") ) { return writeUnsignedInt_dyn(); }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"readUnsignedShort") ) { return readUnsignedShort_dyn(); }
		break;
	case 18:
		if (HX_FIELD_EQ(inName,"get_bytesAvailable") ) { return get_bytesAvailable_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

bool ByteArrayData_obj::__GetStatic(const ::String &inName, Dynamic &outValue, hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 9:
		if (HX_FIELD_EQ(inName,"fromBytes") ) { outValue = fromBytes_dyn(); return true;  }
	}
	return false;
}

Dynamic ByteArrayData_obj::__SetField(const ::String &inName,const Dynamic &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 6:
		if (HX_FIELD_EQ(inName,"endian") ) { if (inCallProp == hx::paccAlways) return set_endian(inValue); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"position") ) { position=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"__endian") ) { __endian=inValue.Cast< Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"__length") ) { __length=inValue.Cast< int >(); return inValue; }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"objectEncoding") ) { objectEncoding=inValue.Cast< int >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void ByteArrayData_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("bytesAvailable","\xde","\x4b","\x9d","\x9b"));
	outFields->push(HX_HCSTRING("endian","\x9b","\x98","\x88","\xfa"));
	outFields->push(HX_HCSTRING("objectEncoding","\xb2","\x1e","\x15","\x2a"));
	outFields->push(HX_HCSTRING("position","\xa9","\xa0","\xfa","\xca"));
	outFields->push(HX_HCSTRING("__endian","\xbb","\x03","\xb8","\xa2"));
	outFields->push(HX_HCSTRING("__length","\x06","\x00","\x37","\x47"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsInt,(int)offsetof(ByteArrayData_obj,objectEncoding),HX_HCSTRING("objectEncoding","\xb2","\x1e","\x15","\x2a")},
	{hx::fsInt,(int)offsetof(ByteArrayData_obj,position),HX_HCSTRING("position","\xa9","\xa0","\xfa","\xca")},
	{hx::fsObject /*Dynamic*/ ,(int)offsetof(ByteArrayData_obj,__endian),HX_HCSTRING("__endian","\xbb","\x03","\xb8","\xa2")},
	{hx::fsInt,(int)offsetof(ByteArrayData_obj,__length),HX_HCSTRING("__length","\x06","\x00","\x37","\x47")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo *sStaticStorageInfo = 0;
#endif

static ::String sMemberFields[] = {
	HX_HCSTRING("objectEncoding","\xb2","\x1e","\x15","\x2a"),
	HX_HCSTRING("position","\xa9","\xa0","\xfa","\xca"),
	HX_HCSTRING("__endian","\xbb","\x03","\xb8","\xa2"),
	HX_HCSTRING("__length","\x06","\x00","\x37","\x47"),
	HX_HCSTRING("clear","\x8d","\x71","\x5b","\x48"),
	HX_HCSTRING("compress","\xa2","\x47","\xbf","\x83"),
	HX_HCSTRING("deflate","\x6b","\x0b","\xfa","\xa2"),
	HX_HCSTRING("inflate","\x87","\x9c","\x1b","\x0c"),
	HX_HCSTRING("readBoolean","\xf2","\x7d","\xea","\xd0"),
	HX_HCSTRING("readByte","\x7e","\xf9","\x1a","\x69"),
	HX_HCSTRING("readBytes","\x35","\x55","\x7f","\x8e"),
	HX_HCSTRING("readDouble","\x07","\x0f","\x47","\x2c"),
	HX_HCSTRING("readFloat","\x66","\x12","\x7e","\xd3"),
	HX_HCSTRING("readInt","\x39","\xb3","\xc9","\x02"),
	HX_HCSTRING("readMultiByte","\xeb","\x7f","\xc9","\x15"),
	HX_HCSTRING("readShort","\x46","\xd1","\x0e","\x4d"),
	HX_HCSTRING("readUnsignedByte","\x13","\x0b","\xce","\x9b"),
	HX_HCSTRING("readUnsignedInt","\x44","\xab","\x4f","\x05"),
	HX_HCSTRING("readUnsignedShort","\x11","\x22","\x0b","\x77"),
	HX_HCSTRING("readUTF","\x71","\xb7","\xd2","\x02"),
	HX_HCSTRING("readUTFBytes","\x3a","\x27","\x0f","\x52"),
	HX_HCSTRING("uncompress","\xfb","\x2e","\x83","\x09"),
	HX_HCSTRING("writeBoolean","\x89","\x8f","\x2d","\x43"),
	HX_HCSTRING("writeByte","\x87","\x13","\xd7","\x49"),
	HX_HCSTRING("writeBytes","\x0c","\x03","\x5a","\x52"),
	HX_HCSTRING("writeDouble","\x50","\x7d","\xc4","\xc7"),
	HX_HCSTRING("writeFloat","\x3d","\xc0","\x58","\x97"),
	HX_HCSTRING("writeInt","\x50","\x6d","\xf0","\x23"),
	HX_HCSTRING("writeMultiByte","\x42","\x65","\x25","\xec"),
	HX_HCSTRING("writeShort","\x1d","\x7f","\xe9","\x10"),
	HX_HCSTRING("writeUnsignedInt","\x5b","\xd4","\x70","\x16"),
	HX_HCSTRING("writeUTF","\x88","\x71","\xf9","\x23"),
	HX_HCSTRING("writeUTFBytes","\xc3","\x79","\x7b","\xda"),
	HX_HCSTRING("__fromBytes","\x81","\x3b","\x4d","\xa0"),
	HX_HCSTRING("__resize","\x14","\xc5","\xaa","\xb0"),
	HX_HCSTRING("__setData","\xcc","\xe7","\x35","\x89"),
	HX_HCSTRING("get_bytesAvailable","\xa7","\x2c","\x37","\x37"),
	HX_HCSTRING("get_endian","\x64","\x08","\x10","\xeb"),
	HX_HCSTRING("set_endian","\xd8","\xa6","\x8d","\xee"),
	::String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(ByteArrayData_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(ByteArrayData_obj::__mClass,"__mClass");
};

#endif

hx::Class ByteArrayData_obj::__mClass;

static ::String sStaticFields[] = {
	HX_HCSTRING("fromBytes","\xa1","\xf2","\x20","\x72"),
	::String(null()) };

void ByteArrayData_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("openfl.utils.ByteArrayData","\x40","\xf9","\x66","\x4c");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &ByteArrayData_obj::__GetStatic;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(sStaticFields);
	__mClass->mMembers = hx::Class_obj::dupFunctions(sMemberFields);
	__mClass->mCanCast = hx::TCanCast< ByteArrayData_obj >;
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
} // end namespace utils
