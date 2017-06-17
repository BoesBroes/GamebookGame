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
#ifndef INCLUDED_lime_system__CFFIPointer_CFFIPointer_Impl_
#include <lime/system/_CFFIPointer/CFFIPointer_Impl_.h>
#endif
#ifndef INCLUDED_lime_utils_ArrayBufferView
#include <lime/utils/ArrayBufferView.h>
#endif
#ifndef INCLUDED_lime_utils_BytePointerData
#include <lime/utils/BytePointerData.h>
#endif
#ifndef INCLUDED_lime_utils__Bytes_Bytes_Impl_
#include <lime/utils/_Bytes/Bytes_Impl_.h>
#endif
#ifndef INCLUDED_lime_utils__DataPointer_DataPointer_Impl_
#include <lime/utils/_DataPointer/DataPointer_Impl_.h>
#endif
namespace lime{
namespace utils{
namespace _DataPointer{

Void DataPointer_Impl__obj::__construct()
{
	return null();
}

//DataPointer_Impl__obj::~DataPointer_Impl__obj() { }

Dynamic DataPointer_Impl__obj::__CreateEmpty() { return  new DataPointer_Impl__obj; }
hx::ObjectPtr< DataPointer_Impl__obj > DataPointer_Impl__obj::__new()
{  hx::ObjectPtr< DataPointer_Impl__obj > _result_ = new DataPointer_Impl__obj();
	_result_->__construct();
	return _result_;}

Dynamic DataPointer_Impl__obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< DataPointer_Impl__obj > _result_ = new DataPointer_Impl__obj();
	_result_->__construct();
	return _result_;}

Float DataPointer_Impl__obj::_new( Float data){
	HX_STACK_FRAME("lime.utils._DataPointer.DataPointer_Impl_","_new",0x3b176380,"lime.utils._DataPointer.DataPointer_Impl_._new","lime/utils/DataPointer.hx",20,0x48d01ae3)
	HX_STACK_ARG(data,"data")
	HX_STACK_LINE(20)
	Float tmp = data;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(20)
	return tmp;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(DataPointer_Impl__obj,_new,return )

Float DataPointer_Impl__obj::fromInt( int value){
	HX_STACK_FRAME("lime.utils._DataPointer.DataPointer_Impl_","fromInt",0xca24ece6,"lime.utils._DataPointer.DataPointer_Impl_.fromInt","lime/utils/DataPointer.hx",25,0x48d01ae3)
	HX_STACK_ARG(value,"value")
	HX_STACK_LINE(28)
	Float _float = value;		HX_STACK_VAR(_float,"float");
	HX_STACK_LINE(29)
	Float tmp = _float;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(29)
	Float tmp1 = ::lime::utils::_DataPointer::DataPointer_Impl__obj::_new(tmp);		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(29)
	return tmp1;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(DataPointer_Impl__obj,fromInt,return )

Float DataPointer_Impl__obj::fromFloat( Float value){
	HX_STACK_FRAME("lime.utils._DataPointer.DataPointer_Impl_","fromFloat",0x935cd153,"lime.utils._DataPointer.DataPointer_Impl_.fromFloat","lime/utils/DataPointer.hx",39,0x48d01ae3)
	HX_STACK_ARG(value,"value")
	HX_STACK_LINE(42)
	Float tmp = value;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(42)
	Float tmp1 = ::lime::utils::_DataPointer::DataPointer_Impl__obj::_new(tmp);		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(42)
	return tmp1;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(DataPointer_Impl__obj,fromFloat,return )

Float DataPointer_Impl__obj::fromBytesPointer( ::lime::utils::BytePointerData pointer){
	HX_STACK_FRAME("lime.utils._DataPointer.DataPointer_Impl_","fromBytesPointer",0x01727cbb,"lime.utils._DataPointer.DataPointer_Impl_.fromBytesPointer","lime/utils/DataPointer.hx",52,0x48d01ae3)
	HX_STACK_ARG(pointer,"pointer")
	HX_STACK_LINE(55)
	bool tmp = (pointer == null());		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(55)
	bool tmp1 = !(tmp);		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(55)
	bool tmp2;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(55)
	if ((tmp1)){
		HX_STACK_LINE(55)
		tmp2 = (pointer->bytes == null());
	}
	else{
		HX_STACK_LINE(55)
		tmp2 = true;
	}
	HX_STACK_LINE(55)
	if ((tmp2)){
		HX_STACK_LINE(55)
		return ((Float)((int)0));
	}
	HX_STACK_LINE(56)
	Float data = ::lime::_backend::native::NativeCFFI_obj::cffi_lime_bytes_get_data_pointer_offset.call(hx::DynamicPtr(pointer->bytes),pointer->offset);		HX_STACK_VAR(data,"data");
	HX_STACK_LINE(57)
	Float tmp3 = data;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(57)
	Float tmp4 = ::lime::utils::_DataPointer::DataPointer_Impl__obj::_new(tmp3);		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(57)
	return tmp4;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(DataPointer_Impl__obj,fromBytesPointer,return )

Float DataPointer_Impl__obj::fromArrayBufferView( ::lime::utils::ArrayBufferView arrayBufferView){
	HX_STACK_FRAME("lime.utils._DataPointer.DataPointer_Impl_","fromArrayBufferView",0xced8dcf5,"lime.utils._DataPointer.DataPointer_Impl_.fromArrayBufferView","lime/utils/DataPointer.hx",67,0x48d01ae3)
	HX_STACK_ARG(arrayBufferView,"arrayBufferView")
	HX_STACK_LINE(70)
	bool tmp = (arrayBufferView == null());		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(70)
	if ((tmp)){
		HX_STACK_LINE(70)
		return ((Float)((int)0));
	}
	HX_STACK_LINE(71)
	Float data = ::lime::_backend::native::NativeCFFI_obj::cffi_lime_bytes_get_data_pointer_offset.call(hx::DynamicPtr(arrayBufferView->buffer),arrayBufferView->byteOffset);		HX_STACK_VAR(data,"data");
	HX_STACK_LINE(72)
	Float tmp1 = data;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(72)
	Float tmp2 = ::lime::utils::_DataPointer::DataPointer_Impl__obj::_new(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(72)
	return tmp2;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(DataPointer_Impl__obj,fromArrayBufferView,return )

Float DataPointer_Impl__obj::fromArrayBuffer( ::haxe::io::Bytes buffer){
	HX_STACK_FRAME("lime.utils._DataPointer.DataPointer_Impl_","fromArrayBuffer",0x4d148670,"lime.utils._DataPointer.DataPointer_Impl_.fromArrayBuffer","lime/utils/DataPointer.hx",82,0x48d01ae3)
	HX_STACK_ARG(buffer,"buffer")
	HX_STACK_LINE(85)
	bool tmp = (buffer == null());		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(85)
	if ((tmp)){
		HX_STACK_LINE(85)
		return ((Float)((int)0));
	}
	HX_STACK_LINE(86)
	::haxe::io::Bytes tmp1 = buffer;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(86)
	Float tmp2 = ::lime::utils::_DataPointer::DataPointer_Impl__obj::fromBytes(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(86)
	return tmp2;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(DataPointer_Impl__obj,fromArrayBuffer,return )

Float DataPointer_Impl__obj::fromBytes( ::haxe::io::Bytes bytes){
	HX_STACK_FRAME("lime.utils._DataPointer.DataPointer_Impl_","fromBytes",0x4e5e1422,"lime.utils._DataPointer.DataPointer_Impl_.fromBytes","lime/utils/DataPointer.hx",96,0x48d01ae3)
	HX_STACK_ARG(bytes,"bytes")
	HX_STACK_LINE(99)
	bool tmp = (bytes == null());		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(99)
	if ((tmp)){
		HX_STACK_LINE(99)
		return ((Float)((int)0));
	}
	HX_STACK_LINE(100)
	Float data = ::lime::_backend::native::NativeCFFI_obj::cffi_lime_bytes_get_data_pointer.call(hx::DynamicPtr(bytes));		HX_STACK_VAR(data,"data");
	HX_STACK_LINE(101)
	Float tmp1 = data;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(101)
	Float tmp2 = ::lime::utils::_DataPointer::DataPointer_Impl__obj::_new(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(101)
	return tmp2;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(DataPointer_Impl__obj,fromBytes,return )

Float DataPointer_Impl__obj::fromBytesData( Array< unsigned char > bytesData){
	HX_STACK_FRAME("lime.utils._DataPointer.DataPointer_Impl_","fromBytesData",0x99d44f6c,"lime.utils._DataPointer.DataPointer_Impl_.fromBytesData","lime/utils/DataPointer.hx",111,0x48d01ae3)
	HX_STACK_ARG(bytesData,"bytesData")
	HX_STACK_LINE(114)
	bool tmp = (bytesData == null());		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(114)
	if ((tmp)){
		HX_STACK_LINE(114)
		return ((Float)((int)0));
	}
	HX_STACK_LINE(115)
	::haxe::io::Bytes tmp1 = ::haxe::io::Bytes_obj::ofData(bytesData);		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(115)
	Float tmp2 = ::lime::utils::_DataPointer::DataPointer_Impl__obj::fromBytes(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(115)
	return tmp2;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(DataPointer_Impl__obj,fromBytesData,return )

Float DataPointer_Impl__obj::fromLimeBytes( ::haxe::io::Bytes bytes){
	HX_STACK_FRAME("lime.utils._DataPointer.DataPointer_Impl_","fromLimeBytes",0x0d79484d,"lime.utils._DataPointer.DataPointer_Impl_.fromLimeBytes","lime/utils/DataPointer.hx",125,0x48d01ae3)
	HX_STACK_ARG(bytes,"bytes")
	HX_STACK_LINE(127)
	::haxe::io::Bytes tmp = bytes;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(127)
	Float tmp1 = ::lime::utils::_DataPointer::DataPointer_Impl__obj::fromBytes(tmp);		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(127)
	return tmp1;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(DataPointer_Impl__obj,fromLimeBytes,return )

Float DataPointer_Impl__obj::fromCFFIPointer( Dynamic pointer){
	HX_STACK_FRAME("lime.utils._DataPointer.DataPointer_Impl_","fromCFFIPointer",0x157099ce,"lime.utils._DataPointer.DataPointer_Impl_.fromCFFIPointer","lime/utils/DataPointer.hx",132,0x48d01ae3)
	HX_STACK_ARG(pointer,"pointer")
	HX_STACK_LINE(135)
	bool tmp = (pointer == null());		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(135)
	if ((tmp)){
		HX_STACK_LINE(135)
		return ((Float)((int)0));
	}
	HX_STACK_LINE(136)
	Dynamic tmp1 = pointer;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(136)
	Float tmp2 = ::lime::_system::_CFFIPointer::CFFIPointer_Impl__obj::get(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(136)
	Float tmp3 = ::lime::utils::_DataPointer::DataPointer_Impl__obj::_new(tmp2);		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(136)
	return tmp3;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(DataPointer_Impl__obj,fromCFFIPointer,return )

Float DataPointer_Impl__obj::fromFile( ::String path){
	HX_STACK_FRAME("lime.utils._DataPointer.DataPointer_Impl_","fromFile",0x142ae6a5,"lime.utils._DataPointer.DataPointer_Impl_.fromFile","lime/utils/DataPointer.hx",144,0x48d01ae3)
	HX_STACK_ARG(path,"path")
	HX_STACK_LINE(147)
	::String tmp = path;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(147)
	::haxe::io::Bytes tmp1 = ::lime::utils::_Bytes::Bytes_Impl__obj::fromFile(tmp);		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(147)
	Float tmp2 = ::lime::utils::_DataPointer::DataPointer_Impl__obj::fromBytes(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(147)
	return tmp2;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(DataPointer_Impl__obj,fromFile,return )

Float DataPointer_Impl__obj::__withOffset( Float data,int offset){
	HX_STACK_FRAME("lime.utils._DataPointer.DataPointer_Impl_","__withOffset",0x51cf4a78,"lime.utils._DataPointer.DataPointer_Impl_.__withOffset","lime/utils/DataPointer.hx",393,0x48d01ae3)
	HX_STACK_ARG(data,"data")
	HX_STACK_ARG(offset,"offset")
	HX_STACK_LINE(396)
	bool tmp = (data == (int)0);		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(396)
	if ((tmp)){
		HX_STACK_LINE(396)
		return ((Float)((int)0));
	}
	HX_STACK_LINE(397)
	Float data1 = ::lime::_backend::native::NativeCFFI_obj::cffi_lime_data_pointer_offset.call(data,offset);		HX_STACK_VAR(data1,"data1");
	HX_STACK_LINE(398)
	Float tmp1 = data1;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(398)
	Float tmp2 = ::lime::utils::_DataPointer::DataPointer_Impl__obj::_new(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(398)
	return tmp2;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(DataPointer_Impl__obj,__withOffset,return )

bool DataPointer_Impl__obj::equals( Float a,int b){
	HX_STACK_FRAME("lime.utils._DataPointer.DataPointer_Impl_","equals",0xe532421e,"lime.utils._DataPointer.DataPointer_Impl_.equals","lime/utils/DataPointer.hx",406,0x48d01ae3)
	HX_STACK_ARG(a,"a")
	HX_STACK_ARG(b,"b")
	HX_STACK_LINE(406)
	bool tmp = (a == b);		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(406)
	return tmp;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(DataPointer_Impl__obj,equals,return )

bool DataPointer_Impl__obj::equalsPointer( Float a,Float b){
	HX_STACK_FRAME("lime.utils._DataPointer.DataPointer_Impl_","equalsPointer",0xd8d6463f,"lime.utils._DataPointer.DataPointer_Impl_.equalsPointer","lime/utils/DataPointer.hx",407,0x48d01ae3)
	HX_STACK_ARG(a,"a")
	HX_STACK_ARG(b,"b")
	HX_STACK_LINE(407)
	bool tmp = (a == b);		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(407)
	return tmp;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(DataPointer_Impl__obj,equalsPointer,return )

bool DataPointer_Impl__obj::greaterThan( Float a,int b){
	HX_STACK_FRAME("lime.utils._DataPointer.DataPointer_Impl_","greaterThan",0xb434053c,"lime.utils._DataPointer.DataPointer_Impl_.greaterThan","lime/utils/DataPointer.hx",408,0x48d01ae3)
	HX_STACK_ARG(a,"a")
	HX_STACK_ARG(b,"b")
	HX_STACK_LINE(408)
	bool tmp = (a > b);		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(408)
	return tmp;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(DataPointer_Impl__obj,greaterThan,return )

bool DataPointer_Impl__obj::greaterThanPointer( Float a,Dynamic b){
	HX_STACK_FRAME("lime.utils._DataPointer.DataPointer_Impl_","greaterThanPointer",0x7ccc42e1,"lime.utils._DataPointer.DataPointer_Impl_.greaterThanPointer","lime/utils/DataPointer.hx",409,0x48d01ae3)
	HX_STACK_ARG(a,"a")
	HX_STACK_ARG(b,"b")
	HX_STACK_LINE(409)
	Float tmp = a;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(409)
	Float tmp1 = ::lime::_system::_CFFIPointer::CFFIPointer_Impl__obj::get(tmp);		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(409)
	Dynamic tmp2 = b;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(409)
	Float tmp3 = ::lime::_system::_CFFIPointer::CFFIPointer_Impl__obj::get(tmp2);		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(409)
	bool tmp4 = (tmp1 > tmp3);		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(409)
	return tmp4;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(DataPointer_Impl__obj,greaterThanPointer,return )

bool DataPointer_Impl__obj::greaterThanOrEqual( Float a,int b){
	HX_STACK_FRAME("lime.utils._DataPointer.DataPointer_Impl_","greaterThanOrEqual",0xcdd861b5,"lime.utils._DataPointer.DataPointer_Impl_.greaterThanOrEqual","lime/utils/DataPointer.hx",410,0x48d01ae3)
	HX_STACK_ARG(a,"a")
	HX_STACK_ARG(b,"b")
	HX_STACK_LINE(410)
	bool tmp = (a >= b);		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(410)
	return tmp;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(DataPointer_Impl__obj,greaterThanOrEqual,return )

bool DataPointer_Impl__obj::greaterThanOrEqualPointer( Float a,Dynamic b){
	HX_STACK_FRAME("lime.utils._DataPointer.DataPointer_Impl_","greaterThanOrEqualPointer",0xc9835788,"lime.utils._DataPointer.DataPointer_Impl_.greaterThanOrEqualPointer","lime/utils/DataPointer.hx",411,0x48d01ae3)
	HX_STACK_ARG(a,"a")
	HX_STACK_ARG(b,"b")
	HX_STACK_LINE(411)
	Float tmp = a;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(411)
	Float tmp1 = ::lime::_system::_CFFIPointer::CFFIPointer_Impl__obj::get(tmp);		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(411)
	Dynamic tmp2 = b;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(411)
	Float tmp3 = ::lime::_system::_CFFIPointer::CFFIPointer_Impl__obj::get(tmp2);		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(411)
	bool tmp4 = (tmp1 >= tmp3);		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(411)
	return tmp4;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(DataPointer_Impl__obj,greaterThanOrEqualPointer,return )

bool DataPointer_Impl__obj::lessThan( Float a,int b){
	HX_STACK_FRAME("lime.utils._DataPointer.DataPointer_Impl_","lessThan",0x65d7a8f9,"lime.utils._DataPointer.DataPointer_Impl_.lessThan","lime/utils/DataPointer.hx",412,0x48d01ae3)
	HX_STACK_ARG(a,"a")
	HX_STACK_ARG(b,"b")
	HX_STACK_LINE(412)
	bool tmp = (a < b);		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(412)
	return tmp;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(DataPointer_Impl__obj,lessThan,return )

bool DataPointer_Impl__obj::lessThanPointer( Float a,Dynamic b){
	HX_STACK_FRAME("lime.utils._DataPointer.DataPointer_Impl_","lessThanPointer",0xee7140c4,"lime.utils._DataPointer.DataPointer_Impl_.lessThanPointer","lime/utils/DataPointer.hx",413,0x48d01ae3)
	HX_STACK_ARG(a,"a")
	HX_STACK_ARG(b,"b")
	HX_STACK_LINE(413)
	Float tmp = a;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(413)
	Float tmp1 = ::lime::_system::_CFFIPointer::CFFIPointer_Impl__obj::get(tmp);		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(413)
	Dynamic tmp2 = b;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(413)
	Float tmp3 = ::lime::_system::_CFFIPointer::CFFIPointer_Impl__obj::get(tmp2);		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(413)
	bool tmp4 = (tmp1 < tmp3);		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(413)
	return tmp4;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(DataPointer_Impl__obj,lessThanPointer,return )

bool DataPointer_Impl__obj::lessThanOrEqual( Float a,int b){
	HX_STACK_FRAME("lime.utils._DataPointer.DataPointer_Impl_","lessThanOrEqual",0x3f7d5f98,"lime.utils._DataPointer.DataPointer_Impl_.lessThanOrEqual","lime/utils/DataPointer.hx",414,0x48d01ae3)
	HX_STACK_ARG(a,"a")
	HX_STACK_ARG(b,"b")
	HX_STACK_LINE(414)
	bool tmp = (a <= b);		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(414)
	return tmp;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(DataPointer_Impl__obj,lessThanOrEqual,return )

bool DataPointer_Impl__obj::lessThanOrEqualPointer( Float a,Dynamic b){
	HX_STACK_FRAME("lime.utils._DataPointer.DataPointer_Impl_","lessThanOrEqualPointer",0x26e32c05,"lime.utils._DataPointer.DataPointer_Impl_.lessThanOrEqualPointer","lime/utils/DataPointer.hx",415,0x48d01ae3)
	HX_STACK_ARG(a,"a")
	HX_STACK_ARG(b,"b")
	HX_STACK_LINE(415)
	Float tmp = a;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(415)
	Float tmp1 = ::lime::_system::_CFFIPointer::CFFIPointer_Impl__obj::get(tmp);		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(415)
	Dynamic tmp2 = b;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(415)
	Float tmp3 = ::lime::_system::_CFFIPointer::CFFIPointer_Impl__obj::get(tmp2);		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(415)
	bool tmp4 = (tmp1 <= tmp3);		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(415)
	return tmp4;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(DataPointer_Impl__obj,lessThanOrEqualPointer,return )

bool DataPointer_Impl__obj::notEquals( Float a,int b){
	HX_STACK_FRAME("lime.utils._DataPointer.DataPointer_Impl_","notEquals",0x1918ed33,"lime.utils._DataPointer.DataPointer_Impl_.notEquals","lime/utils/DataPointer.hx",416,0x48d01ae3)
	HX_STACK_ARG(a,"a")
	HX_STACK_ARG(b,"b")
	HX_STACK_LINE(416)
	bool tmp = (a != b);		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(416)
	return tmp;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(DataPointer_Impl__obj,notEquals,return )

bool DataPointer_Impl__obj::notEqualsPointer( Float a,Float b){
	HX_STACK_FRAME("lime.utils._DataPointer.DataPointer_Impl_","notEqualsPointer",0xf10e57ca,"lime.utils._DataPointer.DataPointer_Impl_.notEqualsPointer","lime/utils/DataPointer.hx",417,0x48d01ae3)
	HX_STACK_ARG(a,"a")
	HX_STACK_ARG(b,"b")
	HX_STACK_LINE(417)
	bool tmp = (a != b);		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(417)
	return tmp;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(DataPointer_Impl__obj,notEqualsPointer,return )

Float DataPointer_Impl__obj::plus( Float a,int b){
	HX_STACK_FRAME("lime.utils._DataPointer.DataPointer_Impl_","plus",0x46528d79,"lime.utils._DataPointer.DataPointer_Impl_.plus","lime/utils/DataPointer.hx",418,0x48d01ae3)
	HX_STACK_ARG(a,"a")
	HX_STACK_ARG(b,"b")
	HX_STACK_LINE(418)
	Float tmp = a;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(418)
	int tmp1 = b;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(418)
	Float tmp2 = ::lime::utils::_DataPointer::DataPointer_Impl__obj::__withOffset(tmp,tmp1);		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(418)
	return tmp2;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(DataPointer_Impl__obj,plus,return )

Float DataPointer_Impl__obj::plusPointer( Float a,Float b){
	HX_STACK_FRAME("lime.utils._DataPointer.DataPointer_Impl_","plusPointer",0xf813ec44,"lime.utils._DataPointer.DataPointer_Impl_.plusPointer","lime/utils/DataPointer.hx",419,0x48d01ae3)
	HX_STACK_ARG(a,"a")
	HX_STACK_ARG(b,"b")
	HX_STACK_LINE(419)
	Float tmp = a;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(419)
	Float tmp1 = b;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(419)
	int tmp2 = ::Std_obj::_int(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(419)
	Float tmp3 = ::lime::utils::_DataPointer::DataPointer_Impl__obj::__withOffset(tmp,tmp2);		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(419)
	return tmp3;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(DataPointer_Impl__obj,plusPointer,return )

Float DataPointer_Impl__obj::minus( Float a,int b){
	HX_STACK_FRAME("lime.utils._DataPointer.DataPointer_Impl_","minus",0x85b48d71,"lime.utils._DataPointer.DataPointer_Impl_.minus","lime/utils/DataPointer.hx",420,0x48d01ae3)
	HX_STACK_ARG(a,"a")
	HX_STACK_ARG(b,"b")
	HX_STACK_LINE(420)
	Float tmp = a;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(420)
	int tmp1 = b;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(420)
	int tmp2 = -(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(420)
	Float tmp3 = ::lime::utils::_DataPointer::DataPointer_Impl__obj::__withOffset(tmp,tmp2);		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(420)
	return tmp3;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(DataPointer_Impl__obj,minus,return )

Float DataPointer_Impl__obj::minusPointer( Float a,Float b){
	HX_STACK_FRAME("lime.utils._DataPointer.DataPointer_Impl_","minusPointer",0x7f5e5b4c,"lime.utils._DataPointer.DataPointer_Impl_.minusPointer","lime/utils/DataPointer.hx",421,0x48d01ae3)
	HX_STACK_ARG(a,"a")
	HX_STACK_ARG(b,"b")
	HX_STACK_LINE(421)
	Float tmp = a;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(421)
	Float tmp1 = b;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(421)
	int tmp2 = ::Std_obj::_int(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(421)
	int tmp3 = -(tmp2);		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(421)
	Float tmp4 = ::lime::utils::_DataPointer::DataPointer_Impl__obj::__withOffset(tmp,tmp3);		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(421)
	return tmp4;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(DataPointer_Impl__obj,minusPointer,return )


DataPointer_Impl__obj::DataPointer_Impl__obj()
{
}

bool DataPointer_Impl__obj::__GetStatic(const ::String &inName, Dynamic &outValue, hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"_new") ) { outValue = _new_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"plus") ) { outValue = plus_dyn(); return true;  }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"minus") ) { outValue = minus_dyn(); return true;  }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"equals") ) { outValue = equals_dyn(); return true;  }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"fromInt") ) { outValue = fromInt_dyn(); return true;  }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"fromFile") ) { outValue = fromFile_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"lessThan") ) { outValue = lessThan_dyn(); return true;  }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"fromFloat") ) { outValue = fromFloat_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"fromBytes") ) { outValue = fromBytes_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"notEquals") ) { outValue = notEquals_dyn(); return true;  }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"greaterThan") ) { outValue = greaterThan_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"plusPointer") ) { outValue = plusPointer_dyn(); return true;  }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"__withOffset") ) { outValue = __withOffset_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"minusPointer") ) { outValue = minusPointer_dyn(); return true;  }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"fromBytesData") ) { outValue = fromBytesData_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"fromLimeBytes") ) { outValue = fromLimeBytes_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"equalsPointer") ) { outValue = equalsPointer_dyn(); return true;  }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"fromArrayBuffer") ) { outValue = fromArrayBuffer_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"fromCFFIPointer") ) { outValue = fromCFFIPointer_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"lessThanPointer") ) { outValue = lessThanPointer_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"lessThanOrEqual") ) { outValue = lessThanOrEqual_dyn(); return true;  }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"fromBytesPointer") ) { outValue = fromBytesPointer_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"notEqualsPointer") ) { outValue = notEqualsPointer_dyn(); return true;  }
		break;
	case 18:
		if (HX_FIELD_EQ(inName,"greaterThanPointer") ) { outValue = greaterThanPointer_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"greaterThanOrEqual") ) { outValue = greaterThanOrEqual_dyn(); return true;  }
		break;
	case 19:
		if (HX_FIELD_EQ(inName,"fromArrayBufferView") ) { outValue = fromArrayBufferView_dyn(); return true;  }
		break;
	case 22:
		if (HX_FIELD_EQ(inName,"lessThanOrEqualPointer") ) { outValue = lessThanOrEqualPointer_dyn(); return true;  }
		break;
	case 25:
		if (HX_FIELD_EQ(inName,"greaterThanOrEqualPointer") ) { outValue = greaterThanOrEqualPointer_dyn(); return true;  }
	}
	return false;
}

#if HXCPP_SCRIPTABLE
static hx::StorageInfo *sMemberStorageInfo = 0;
static hx::StaticInfo *sStaticStorageInfo = 0;
#endif

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(DataPointer_Impl__obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(DataPointer_Impl__obj::__mClass,"__mClass");
};

#endif

hx::Class DataPointer_Impl__obj::__mClass;

static ::String sStaticFields[] = {
	HX_HCSTRING("_new","\x61","\x15","\x1f","\x3f"),
	HX_HCSTRING("fromInt","\xa5","\xdd","\xfa","\x57"),
	HX_HCSTRING("fromFloat","\xd2","\xaf","\x1f","\xb7"),
	HX_HCSTRING("fromBytesPointer","\x1c","\xfc","\xed","\xd8"),
	HX_HCSTRING("fromArrayBufferView","\x34","\x70","\x74","\xc8"),
	HX_HCSTRING("fromArrayBuffer","\x2f","\xce","\x77","\xec"),
	HX_HCSTRING("fromBytes","\xa1","\xf2","\x20","\x72"),
	HX_HCSTRING("fromBytesData","\x6b","\xd9","\x41","\xdb"),
	HX_HCSTRING("fromLimeBytes","\x4c","\xd2","\xe6","\x4e"),
	HX_HCSTRING("fromCFFIPointer","\x8d","\xe1","\xd3","\xb4"),
	HX_HCSTRING("fromFile","\x06","\x9d","\x87","\xa1"),
	HX_HCSTRING("__withOffset","\x59","\x45","\x9d","\x84"),
	HX_HCSTRING("equals","\x3f","\xee","\xf2","\xbf"),
	HX_HCSTRING("equalsPointer","\x3e","\xd0","\x43","\x1a"),
	HX_HCSTRING("greaterThan","\x7b","\xc1","\x4a","\x75"),
	HX_HCSTRING("greaterThanPointer","\x82","\x1c","\xaf","\xc9"),
	HX_HCSTRING("greaterThanOrEqual","\x56","\x3b","\xbb","\x1a"),
	HX_HCSTRING("greaterThanOrEqualPointer","\x07","\x64","\x57","\x78"),
	HX_HCSTRING("lessThan","\x5a","\x5f","\x34","\xf3"),
	HX_HCSTRING("lessThanPointer","\x83","\x88","\xd4","\x8d"),
	HX_HCSTRING("lessThanOrEqual","\x57","\xa7","\xe0","\xde"),
	HX_HCSTRING("lessThanOrEqualPointer","\x26","\xea","\x29","\x34"),
	HX_HCSTRING("notEquals","\xb2","\xcb","\xdb","\x3c"),
	HX_HCSTRING("notEqualsPointer","\x2b","\xd7","\x89","\xc8"),
	HX_HCSTRING("plus","\x5a","\x3f","\x5a","\x4a"),
	HX_HCSTRING("plusPointer","\x83","\xa8","\x2a","\xb9"),
	HX_HCSTRING("minus","\x70","\x80","\x68","\x08"),
	HX_HCSTRING("minusPointer","\x2d","\x56","\x2c","\xb2"),
	::String(null()) };

void DataPointer_Impl__obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("lime.utils._DataPointer.DataPointer_Impl_","\xaf","\xc6","\xdc","\x04");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &DataPointer_Impl__obj::__GetStatic;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(sStaticFields);
	__mClass->mMembers = hx::Class_obj::dupFunctions(0 /* sMemberFields */);
	__mClass->mCanCast = hx::TCanCast< DataPointer_Impl__obj >;
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
} // end namespace utils
} // end namespace _DataPointer
