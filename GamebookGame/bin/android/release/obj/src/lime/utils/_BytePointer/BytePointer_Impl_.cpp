#include <hxcpp.h>

#ifndef INCLUDED_Std
#include <Std.h>
#endif
#ifndef INCLUDED_haxe_io_Bytes
#include <haxe/io/Bytes.h>
#endif
#ifndef INCLUDED_lime_utils_ArrayBufferView
#include <lime/utils/ArrayBufferView.h>
#endif
#ifndef INCLUDED_lime_utils_BytePointerData
#include <lime/utils/BytePointerData.h>
#endif
#ifndef INCLUDED_lime_utils_TAError
#include <lime/utils/TAError.h>
#endif
#ifndef INCLUDED_lime_utils__BytePointer_BytePointer_Impl_
#include <lime/utils/_BytePointer/BytePointer_Impl_.h>
#endif
#ifndef INCLUDED_lime_utils__Bytes_Bytes_Impl_
#include <lime/utils/_Bytes/Bytes_Impl_.h>
#endif
#ifndef INCLUDED_openfl__Vector_FloatVector
#include <openfl/_Vector/FloatVector.h>
#endif
#ifndef INCLUDED_openfl__Vector_IVector
#include <openfl/_Vector/IVector.h>
#endif
#ifndef INCLUDED_openfl__Vector_IntVector
#include <openfl/_Vector/IntVector.h>
#endif
namespace lime{
namespace utils{
namespace _BytePointer{

Void BytePointer_Impl__obj::__construct()
{
	return null();
}

//BytePointer_Impl__obj::~BytePointer_Impl__obj() { }

Dynamic BytePointer_Impl__obj::__CreateEmpty() { return  new BytePointer_Impl__obj; }
hx::ObjectPtr< BytePointer_Impl__obj > BytePointer_Impl__obj::__new()
{  hx::ObjectPtr< BytePointer_Impl__obj > _result_ = new BytePointer_Impl__obj();
	_result_->__construct();
	return _result_;}

Dynamic BytePointer_Impl__obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< BytePointer_Impl__obj > _result_ = new BytePointer_Impl__obj();
	_result_->__construct();
	return _result_;}

::lime::utils::BytePointerData BytePointer_Impl__obj::_new( ::haxe::io::Bytes bytes,hx::Null< int >  __o_offset){
int offset = __o_offset.Default(0);
	HX_STACK_FRAME("lime.utils._BytePointer.BytePointer_Impl_","_new",0xc3bc293c,"lime.utils._BytePointer.BytePointer_Impl_._new","lime/utils/BytePointer.hx",18,0x50fae541)
	HX_STACK_ARG(bytes,"bytes")
	HX_STACK_ARG(offset,"offset")
{
		HX_STACK_LINE(18)
		::lime::utils::BytePointerData tmp = ::lime::utils::BytePointerData_obj::__new(bytes,offset);		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(18)
		::lime::utils::BytePointerData tmp1 = tmp;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(18)
		return tmp1;
	}
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(BytePointer_Impl__obj,_new,return )

Void BytePointer_Impl__obj::set( ::lime::utils::BytePointerData this1,::haxe::io::Bytes bytes,::lime::utils::ArrayBufferView bufferView,::haxe::io::Bytes buffer,Dynamic offset){
{
		HX_STACK_FRAME("lime.utils._BytePointer.BytePointer_Impl_","set",0x582efc27,"lime.utils._BytePointer.BytePointer_Impl_.set","lime/utils/BytePointer.hx",23,0x50fae541)
		HX_STACK_ARG(this1,"this1")
		HX_STACK_ARG(bytes,"bytes")
		HX_STACK_ARG(bufferView,"bufferView")
		HX_STACK_ARG(buffer,"buffer")
		HX_STACK_ARG(offset,"offset")
		HX_STACK_LINE(25)
		bool tmp = (buffer != null());		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(25)
		if ((tmp)){
			HX_STACK_LINE(30)
			bytes = buffer;
		}
		HX_STACK_LINE(35)
		bool tmp1 = (bytes != null());		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(35)
		bool tmp2 = !(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(35)
		bool tmp3;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(35)
		if ((tmp2)){
			HX_STACK_LINE(35)
			tmp3 = (bufferView == null());
		}
		else{
			HX_STACK_LINE(35)
			tmp3 = true;
		}
		HX_STACK_LINE(35)
		if ((tmp3)){
			HX_STACK_LINE(37)
			this1->bytes = bytes;
			HX_STACK_LINE(38)
			bool tmp4 = (offset != null());		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(38)
			int tmp5;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(38)
			if ((tmp4)){
				HX_STACK_LINE(38)
				tmp5 = offset;
			}
			else{
				HX_STACK_LINE(38)
				tmp5 = (int)0;
			}
			HX_STACK_LINE(38)
			this1->offset = tmp5;
		}
		else{
			HX_STACK_LINE(45)
			this1->bytes = bufferView->buffer;
			HX_STACK_LINE(48)
			bool tmp4 = (offset != null());		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(48)
			int tmp5;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(48)
			if ((tmp4)){
				HX_STACK_LINE(48)
				tmp5 = (bufferView->byteOffset + offset);
			}
			else{
				HX_STACK_LINE(48)
				tmp5 = bufferView->byteOffset;
			}
			HX_STACK_LINE(48)
			this1->offset = tmp5;
		}
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC5(BytePointer_Impl__obj,set,(void))

int BytePointer_Impl__obj::__arrayGet( ::lime::utils::BytePointerData this1,int index){
	HX_STACK_FRAME("lime.utils._BytePointer.BytePointer_Impl_","__arrayGet",0x95acedb8,"lime.utils._BytePointer.BytePointer_Impl_.__arrayGet","lime/utils/BytePointer.hx",55,0x50fae541)
	HX_STACK_ARG(this1,"this1")
	HX_STACK_ARG(index,"index")
	HX_STACK_LINE(57)
	bool tmp = (this1->bytes != null());		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(57)
	int tmp1;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(57)
	if ((tmp)){
		HX_STACK_LINE(57)
		int tmp2 = (index + this1->offset);		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(57)
		tmp1 = this1->bytes->b->__get(tmp2);
	}
	else{
		HX_STACK_LINE(57)
		tmp1 = (int)0;
	}
	HX_STACK_LINE(57)
	return tmp1;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(BytePointer_Impl__obj,__arrayGet,return )

int BytePointer_Impl__obj::__arraySet( ::lime::utils::BytePointerData this1,int index,int value){
	HX_STACK_FRAME("lime.utils._BytePointer.BytePointer_Impl_","__arraySet",0x95b608c4,"lime.utils._BytePointer.BytePointer_Impl_.__arraySet","lime/utils/BytePointer.hx",62,0x50fae541)
	HX_STACK_ARG(this1,"this1")
	HX_STACK_ARG(index,"index")
	HX_STACK_ARG(value,"value")
	HX_STACK_LINE(64)
	bool tmp = (this1->bytes == null());		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(64)
	if ((tmp)){
		HX_STACK_LINE(64)
		int tmp1 = (index + this1->offset);		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(64)
		int tmp2 = value;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(64)
		this1->bytes->b[tmp1] = tmp2;
	}
	HX_STACK_LINE(65)
	int tmp1 = value;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(65)
	return tmp1;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC3(BytePointer_Impl__obj,__arraySet,return )

::lime::utils::BytePointerData BytePointer_Impl__obj::fromArrayBufferView( ::lime::utils::ArrayBufferView arrayBufferView){
	HX_STACK_FRAME("lime.utils._BytePointer.BytePointer_Impl_","fromArrayBufferView",0xf5b7eab9,"lime.utils._BytePointer.BytePointer_Impl_.fromArrayBufferView","lime/utils/BytePointer.hx",70,0x50fae541)
	HX_STACK_ARG(arrayBufferView,"arrayBufferView")
	HX_STACK_LINE(72)
	bool tmp = (arrayBufferView == null());		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(72)
	if ((tmp)){
		HX_STACK_LINE(72)
		return null();
	}
	HX_STACK_LINE(77)
	::lime::utils::BytePointerData tmp1 = ::lime::utils::BytePointerData_obj::__new(arrayBufferView->buffer,arrayBufferView->byteOffset);		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(77)
	return tmp1;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(BytePointer_Impl__obj,fromArrayBufferView,return )

::lime::utils::BytePointerData BytePointer_Impl__obj::fromArrayBuffer( ::haxe::io::Bytes buffer){
	HX_STACK_FRAME("lime.utils._BytePointer.BytePointer_Impl_","fromArrayBuffer",0x96e06234,"lime.utils._BytePointer.BytePointer_Impl_.fromArrayBuffer","lime/utils/BytePointer.hx",83,0x50fae541)
	HX_STACK_ARG(buffer,"buffer")
	HX_STACK_LINE(85)
	bool tmp = (buffer == null());		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(85)
	if ((tmp)){
		HX_STACK_LINE(85)
		return null();
	}
	HX_STACK_LINE(90)
	::lime::utils::BytePointerData tmp1 = ::lime::utils::BytePointerData_obj::__new(buffer,(int)0);		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(90)
	return tmp1;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(BytePointer_Impl__obj,fromArrayBuffer,return )

::lime::utils::BytePointerData BytePointer_Impl__obj::fromBytes( ::haxe::io::Bytes bytes){
	HX_STACK_FRAME("lime.utils._BytePointer.BytePointer_Impl_","fromBytes",0x6c6704e6,"lime.utils._BytePointer.BytePointer_Impl_.fromBytes","lime/utils/BytePointer.hx",96,0x50fae541)
	HX_STACK_ARG(bytes,"bytes")
	HX_STACK_LINE(98)
	::lime::utils::BytePointerData tmp = ::lime::utils::BytePointerData_obj::__new(bytes,(int)0);		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(98)
	return tmp;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(BytePointer_Impl__obj,fromBytes,return )

::lime::utils::BytePointerData BytePointer_Impl__obj::fromBytesData( Array< unsigned char > bytesData){
	HX_STACK_FRAME("lime.utils._BytePointer.BytePointer_Impl_","fromBytesData",0x619ef230,"lime.utils._BytePointer.BytePointer_Impl_.fromBytesData","lime/utils/BytePointer.hx",103,0x50fae541)
	HX_STACK_ARG(bytesData,"bytesData")
	HX_STACK_LINE(105)
	bool tmp = (bytesData == null());		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(105)
	if ((tmp)){
		HX_STACK_LINE(105)
		::lime::utils::BytePointerData tmp1 = ::lime::utils::BytePointerData_obj::__new(null(),(int)0);		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(105)
		return tmp1;
	}
	else{
		HX_STACK_LINE(106)
		::haxe::io::Bytes tmp1 = ::haxe::io::Bytes_obj::ofData(bytesData);		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(106)
		::lime::utils::BytePointerData tmp2 = ::lime::utils::BytePointerData_obj::__new(tmp1,(int)0);		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(106)
		return tmp2;
	}
	HX_STACK_LINE(105)
	return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(BytePointer_Impl__obj,fromBytesData,return )

::lime::utils::BytePointerData BytePointer_Impl__obj::fromFile( ::String path){
	HX_STACK_FRAME("lime.utils._BytePointer.BytePointer_Impl_","fromFile",0xee6b3a61,"lime.utils._BytePointer.BytePointer_Impl_.fromFile","lime/utils/BytePointer.hx",111,0x50fae541)
	HX_STACK_ARG(path,"path")
	HX_STACK_LINE(113)
	::String tmp = path;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(113)
	::haxe::io::Bytes tmp1 = ::lime::utils::_Bytes::Bytes_Impl__obj::fromFile(tmp);		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(113)
	::lime::utils::BytePointerData tmp2 = ::lime::utils::BytePointerData_obj::__new(tmp1,(int)0);		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(113)
	return tmp2;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(BytePointer_Impl__obj,fromFile,return )

::lime::utils::BytePointerData BytePointer_Impl__obj::fromLimeBytes( ::haxe::io::Bytes bytes){
	HX_STACK_FRAME("lime.utils._BytePointer.BytePointer_Impl_","fromLimeBytes",0xd543eb11,"lime.utils._BytePointer.BytePointer_Impl_.fromLimeBytes","lime/utils/BytePointer.hx",118,0x50fae541)
	HX_STACK_ARG(bytes,"bytes")
	HX_STACK_LINE(120)
	::lime::utils::BytePointerData tmp = ::lime::utils::BytePointerData_obj::__new(bytes,(int)0);		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(120)
	return tmp;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(BytePointer_Impl__obj,fromLimeBytes,return )

::lime::utils::ArrayBufferView BytePointer_Impl__obj::toUInt8Array( ::lime::utils::BytePointerData bytePointer){
	HX_STACK_FRAME("lime.utils._BytePointer.BytePointer_Impl_","toUInt8Array",0x7bcbbd71,"lime.utils._BytePointer.BytePointer_Impl_.toUInt8Array","lime/utils/BytePointer.hx",125,0x50fae541)
	HX_STACK_ARG(bytePointer,"bytePointer")
	HX_STACK_LINE(130)
	::lime::utils::ArrayBufferView tmp;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(130)
	{
		HX_STACK_LINE(130)
		::haxe::io::Bytes buffer = bytePointer->bytes;		HX_STACK_VAR(buffer,"buffer");
		HX_STACK_LINE(130)
		Float tmp1 = (Float(bytePointer->offset) / Float((int)8));		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(130)
		int tmp2 = ::Std_obj::_int(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(130)
		Dynamic byteoffset = tmp2;		HX_STACK_VAR(byteoffset,"byteoffset");
		HX_STACK_LINE(130)
		::lime::utils::ArrayBufferView this1;		HX_STACK_VAR(this1,"this1");
		HX_STACK_LINE(130)
		bool tmp3 = false;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(130)
		if ((tmp3)){
			HX_STACK_LINE(130)
			::lime::utils::ArrayBufferView tmp4 = ::lime::utils::ArrayBufferView_obj::__new(null(),(int)4);		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(130)
			this1 = tmp4;
		}
		else{
			HX_STACK_LINE(130)
			bool tmp4 = false;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(130)
			if ((tmp4)){
				HX_STACK_LINE(130)
				::lime::utils::ArrayBufferView tmp5;		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(130)
				{
					HX_STACK_LINE(130)
					::lime::utils::ArrayBufferView tmp6 = ::lime::utils::ArrayBufferView_obj::__new((int)0,(int)4);		HX_STACK_VAR(tmp6,"tmp6");
					HX_STACK_LINE(130)
					::lime::utils::ArrayBufferView _this = tmp6;		HX_STACK_VAR(_this,"_this");
					HX_STACK_LINE(130)
					_this->byteOffset = (int)0;
					HX_STACK_LINE(130)
					int tmp7 = hx::Throw(HX_CSTRING("Invalid field access on null object"));		HX_STACK_VAR(tmp7,"tmp7");
					HX_STACK_LINE(130)
					_this->length = tmp7;
					HX_STACK_LINE(130)
					int tmp8 = (_this->length * _this->bytesPerElement);		HX_STACK_VAR(tmp8,"tmp8");
					HX_STACK_LINE(130)
					_this->byteLength = tmp8;
					HX_STACK_LINE(130)
					::haxe::io::Bytes tmp9;		HX_STACK_VAR(tmp9,"tmp9");
					HX_STACK_LINE(130)
					{
						HX_STACK_LINE(130)
						::haxe::io::Bytes this2;		HX_STACK_VAR(this2,"this2");
						HX_STACK_LINE(130)
						int tmp10 = _this->byteLength;		HX_STACK_VAR(tmp10,"tmp10");
						HX_STACK_LINE(130)
						::haxe::io::Bytes tmp11 = ::haxe::io::Bytes_obj::alloc(tmp10);		HX_STACK_VAR(tmp11,"tmp11");
						HX_STACK_LINE(130)
						this2 = tmp11;
						HX_STACK_LINE(130)
						tmp9 = this2;
					}
					HX_STACK_LINE(130)
					_this->buffer = tmp9;
					HX_STACK_LINE(130)
					_this->copyFromArray(((Array< Float >)(null())),null());
					HX_STACK_LINE(130)
					tmp5 = _this;
				}
				HX_STACK_LINE(130)
				this1 = tmp5;
			}
			else{
				HX_STACK_LINE(130)
				bool tmp5 = false;		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(130)
				if ((tmp5)){
					HX_STACK_LINE(130)
					::lime::utils::ArrayBufferView tmp6;		HX_STACK_VAR(tmp6,"tmp6");
					HX_STACK_LINE(130)
					{
						HX_STACK_LINE(130)
						::lime::utils::ArrayBufferView tmp7 = ::lime::utils::ArrayBufferView_obj::__new((int)0,(int)4);		HX_STACK_VAR(tmp7,"tmp7");
						HX_STACK_LINE(130)
						::lime::utils::ArrayBufferView _this = tmp7;		HX_STACK_VAR(_this,"_this");
						HX_STACK_LINE(130)
						cpp::ArrayBase array = hx::Throw(HX_CSTRING("Invalid field access on null object"));		HX_STACK_VAR(array,"array");
						HX_STACK_LINE(130)
						_this->byteOffset = (int)0;
						HX_STACK_LINE(130)
						_this->length = array->__Field(HX_HCSTRING("length","\xe6","\x94","\x07","\x9f"), hx::paccDynamic );
						HX_STACK_LINE(130)
						int tmp8 = (_this->length * _this->bytesPerElement);		HX_STACK_VAR(tmp8,"tmp8");
						HX_STACK_LINE(130)
						_this->byteLength = tmp8;
						HX_STACK_LINE(130)
						::haxe::io::Bytes tmp9;		HX_STACK_VAR(tmp9,"tmp9");
						HX_STACK_LINE(130)
						{
							HX_STACK_LINE(130)
							::haxe::io::Bytes this2;		HX_STACK_VAR(this2,"this2");
							HX_STACK_LINE(130)
							int tmp10 = _this->byteLength;		HX_STACK_VAR(tmp10,"tmp10");
							HX_STACK_LINE(130)
							::haxe::io::Bytes tmp11 = ::haxe::io::Bytes_obj::alloc(tmp10);		HX_STACK_VAR(tmp11,"tmp11");
							HX_STACK_LINE(130)
							this2 = tmp11;
							HX_STACK_LINE(130)
							tmp9 = this2;
						}
						HX_STACK_LINE(130)
						_this->buffer = tmp9;
						HX_STACK_LINE(130)
						_this->copyFromArray(((Array< Float >)(array)),null());
						HX_STACK_LINE(130)
						tmp6 = _this;
					}
					HX_STACK_LINE(130)
					this1 = tmp6;
				}
				else{
					HX_STACK_LINE(130)
					bool tmp6 = false;		HX_STACK_VAR(tmp6,"tmp6");
					HX_STACK_LINE(130)
					if ((tmp6)){
						HX_STACK_LINE(130)
						::lime::utils::ArrayBufferView tmp7;		HX_STACK_VAR(tmp7,"tmp7");
						HX_STACK_LINE(130)
						{
							HX_STACK_LINE(130)
							::lime::utils::ArrayBufferView tmp8 = ::lime::utils::ArrayBufferView_obj::__new((int)0,(int)4);		HX_STACK_VAR(tmp8,"tmp8");
							HX_STACK_LINE(130)
							::lime::utils::ArrayBufferView _this = tmp8;		HX_STACK_VAR(_this,"_this");
							HX_STACK_LINE(130)
							::haxe::io::Bytes tmp9 = hx::Throw(HX_CSTRING("Invalid field access on null object"));		HX_STACK_VAR(tmp9,"tmp9");
							HX_STACK_LINE(130)
							::haxe::io::Bytes srcData = tmp9;		HX_STACK_VAR(srcData,"srcData");
							HX_STACK_LINE(130)
							int tmp10 = hx::Throw(HX_CSTRING("Invalid field access on null object"));		HX_STACK_VAR(tmp10,"tmp10");
							HX_STACK_LINE(130)
							int srcLength = tmp10;		HX_STACK_VAR(srcLength,"srcLength");
							HX_STACK_LINE(130)
							int tmp11 = hx::Throw(HX_CSTRING("Invalid field access on null object"));		HX_STACK_VAR(tmp11,"tmp11");
							HX_STACK_LINE(130)
							int srcByteOffset = tmp11;		HX_STACK_VAR(srcByteOffset,"srcByteOffset");
							HX_STACK_LINE(130)
							int tmp12 = hx::Throw(HX_CSTRING("Invalid field access on null object"));		HX_STACK_VAR(tmp12,"tmp12");
							HX_STACK_LINE(130)
							int srcElementSize = tmp12;		HX_STACK_VAR(srcElementSize,"srcElementSize");
							HX_STACK_LINE(130)
							int elementSize = _this->bytesPerElement;		HX_STACK_VAR(elementSize,"elementSize");
							HX_STACK_LINE(130)
							int tmp13 = hx::Throw(HX_CSTRING("Invalid field access on null object"));		HX_STACK_VAR(tmp13,"tmp13");
							HX_STACK_LINE(130)
							int tmp14 = _this->type;		HX_STACK_VAR(tmp14,"tmp14");
							HX_STACK_LINE(130)
							bool tmp15 = (tmp13 == tmp14);		HX_STACK_VAR(tmp15,"tmp15");
							HX_STACK_LINE(130)
							if ((tmp15)){
								HX_STACK_LINE(130)
								int srcLength1 = srcData->length;		HX_STACK_VAR(srcLength1,"srcLength1");
								HX_STACK_LINE(130)
								int tmp16 = (srcLength1 - srcByteOffset);		HX_STACK_VAR(tmp16,"tmp16");
								HX_STACK_LINE(130)
								int cloneLength = tmp16;		HX_STACK_VAR(cloneLength,"cloneLength");
								HX_STACK_LINE(130)
								::haxe::io::Bytes tmp17;		HX_STACK_VAR(tmp17,"tmp17");
								HX_STACK_LINE(130)
								{
									HX_STACK_LINE(130)
									::haxe::io::Bytes this2;		HX_STACK_VAR(this2,"this2");
									HX_STACK_LINE(130)
									int tmp18 = cloneLength;		HX_STACK_VAR(tmp18,"tmp18");
									HX_STACK_LINE(130)
									::haxe::io::Bytes tmp19 = ::haxe::io::Bytes_obj::alloc(tmp18);		HX_STACK_VAR(tmp19,"tmp19");
									HX_STACK_LINE(130)
									this2 = tmp19;
									HX_STACK_LINE(130)
									tmp17 = this2;
								}
								HX_STACK_LINE(130)
								_this->buffer = tmp17;
								HX_STACK_LINE(130)
								::haxe::io::Bytes tmp18 = srcData;		HX_STACK_VAR(tmp18,"tmp18");
								HX_STACK_LINE(130)
								int tmp19 = srcByteOffset;		HX_STACK_VAR(tmp19,"tmp19");
								HX_STACK_LINE(130)
								int tmp20 = cloneLength;		HX_STACK_VAR(tmp20,"tmp20");
								HX_STACK_LINE(130)
								_this->buffer->blit((int)0,tmp18,tmp19,tmp20);
							}
							else{
								HX_STACK_LINE(130)
								HX_STACK_DO_THROW(HX_HCSTRING("unimplemented","\x09","\x2f","\x74","\xb4"));
							}
							HX_STACK_LINE(130)
							int tmp16 = (_this->bytesPerElement * srcLength);		HX_STACK_VAR(tmp16,"tmp16");
							HX_STACK_LINE(130)
							_this->byteLength = tmp16;
							HX_STACK_LINE(130)
							_this->byteOffset = (int)0;
							HX_STACK_LINE(130)
							_this->length = srcLength;
							HX_STACK_LINE(130)
							tmp7 = _this;
						}
						HX_STACK_LINE(130)
						this1 = tmp7;
					}
					else{
						HX_STACK_LINE(130)
						bool tmp7 = (buffer != null());		HX_STACK_VAR(tmp7,"tmp7");
						HX_STACK_LINE(130)
						if ((tmp7)){
							HX_STACK_LINE(130)
							::lime::utils::ArrayBufferView tmp8;		HX_STACK_VAR(tmp8,"tmp8");
							HX_STACK_LINE(130)
							{
								HX_STACK_LINE(130)
								::lime::utils::ArrayBufferView tmp9 = ::lime::utils::ArrayBufferView_obj::__new((int)0,(int)4);		HX_STACK_VAR(tmp9,"tmp9");
								HX_STACK_LINE(130)
								::lime::utils::ArrayBufferView _this = tmp9;		HX_STACK_VAR(_this,"_this");
								HX_STACK_LINE(130)
								int in_byteOffset = byteoffset;		HX_STACK_VAR(in_byteOffset,"in_byteOffset");
								HX_STACK_LINE(130)
								bool tmp10 = (in_byteOffset < (int)0);		HX_STACK_VAR(tmp10,"tmp10");
								HX_STACK_LINE(130)
								if ((tmp10)){
									HX_STACK_LINE(130)
									HX_STACK_DO_THROW(::lime::utils::TAError_obj::RangeError);
								}
								HX_STACK_LINE(130)
								int tmp11 = hx::Mod(in_byteOffset,_this->bytesPerElement);		HX_STACK_VAR(tmp11,"tmp11");
								HX_STACK_LINE(130)
								bool tmp12 = (tmp11 != (int)0);		HX_STACK_VAR(tmp12,"tmp12");
								HX_STACK_LINE(130)
								if ((tmp12)){
									HX_STACK_LINE(130)
									HX_STACK_DO_THROW(::lime::utils::TAError_obj::RangeError);
								}
								HX_STACK_LINE(130)
								int bufferByteLength = buffer->length;		HX_STACK_VAR(bufferByteLength,"bufferByteLength");
								HX_STACK_LINE(130)
								int elementSize = _this->bytesPerElement;		HX_STACK_VAR(elementSize,"elementSize");
								HX_STACK_LINE(130)
								int newByteLength = bufferByteLength;		HX_STACK_VAR(newByteLength,"newByteLength");
								HX_STACK_LINE(130)
								bool tmp13 = true;		HX_STACK_VAR(tmp13,"tmp13");
								HX_STACK_LINE(130)
								if ((tmp13)){
									HX_STACK_LINE(130)
									int tmp14 = (bufferByteLength - in_byteOffset);		HX_STACK_VAR(tmp14,"tmp14");
									HX_STACK_LINE(130)
									newByteLength = tmp14;
									HX_STACK_LINE(130)
									int tmp15 = hx::Mod(bufferByteLength,_this->bytesPerElement);		HX_STACK_VAR(tmp15,"tmp15");
									HX_STACK_LINE(130)
									bool tmp16 = (tmp15 != (int)0);		HX_STACK_VAR(tmp16,"tmp16");
									HX_STACK_LINE(130)
									if ((tmp16)){
										HX_STACK_LINE(130)
										HX_STACK_DO_THROW(::lime::utils::TAError_obj::RangeError);
									}
									HX_STACK_LINE(130)
									bool tmp17 = (newByteLength < (int)0);		HX_STACK_VAR(tmp17,"tmp17");
									HX_STACK_LINE(130)
									if ((tmp17)){
										HX_STACK_LINE(130)
										HX_STACK_DO_THROW(::lime::utils::TAError_obj::RangeError);
									}
								}
								else{
									HX_STACK_LINE(130)
									int tmp14 = (null() * _this->bytesPerElement);		HX_STACK_VAR(tmp14,"tmp14");
									HX_STACK_LINE(130)
									newByteLength = tmp14;
									HX_STACK_LINE(130)
									int tmp15 = (in_byteOffset + newByteLength);		HX_STACK_VAR(tmp15,"tmp15");
									HX_STACK_LINE(130)
									int newRange = tmp15;		HX_STACK_VAR(newRange,"newRange");
									HX_STACK_LINE(130)
									bool tmp16 = (newRange > bufferByteLength);		HX_STACK_VAR(tmp16,"tmp16");
									HX_STACK_LINE(130)
									if ((tmp16)){
										HX_STACK_LINE(130)
										HX_STACK_DO_THROW(::lime::utils::TAError_obj::RangeError);
									}
								}
								HX_STACK_LINE(130)
								_this->buffer = buffer;
								HX_STACK_LINE(130)
								_this->byteOffset = in_byteOffset;
								HX_STACK_LINE(130)
								_this->byteLength = newByteLength;
								HX_STACK_LINE(130)
								Float tmp14 = (Float(newByteLength) / Float(_this->bytesPerElement));		HX_STACK_VAR(tmp14,"tmp14");
								HX_STACK_LINE(130)
								int tmp15 = ::Std_obj::_int(tmp14);		HX_STACK_VAR(tmp15,"tmp15");
								HX_STACK_LINE(130)
								_this->length = tmp15;
								HX_STACK_LINE(130)
								tmp8 = _this;
							}
							HX_STACK_LINE(130)
							this1 = tmp8;
						}
						else{
							HX_STACK_LINE(130)
							HX_STACK_DO_THROW(HX_HCSTRING("Invalid constructor arguments for UInt8Array","\x6b","\x44","\xd5","\x85"));
						}
					}
				}
			}
		}
		HX_STACK_LINE(130)
		tmp = this1;
	}
	HX_STACK_LINE(130)
	return tmp;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(BytePointer_Impl__obj,toUInt8Array,return )

::lime::utils::ArrayBufferView BytePointer_Impl__obj::toUInt8ClampedArray( ::lime::utils::BytePointerData bytePointer){
	HX_STACK_FRAME("lime.utils._BytePointer.BytePointer_Impl_","toUInt8ClampedArray",0x97605a47,"lime.utils._BytePointer.BytePointer_Impl_.toUInt8ClampedArray","lime/utils/BytePointer.hx",136,0x50fae541)
	HX_STACK_ARG(bytePointer,"bytePointer")
	HX_STACK_LINE(138)
	bool tmp = (bytePointer == null());		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(138)
	bool tmp1 = !(tmp);		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(138)
	bool tmp2;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(138)
	if ((tmp1)){
		HX_STACK_LINE(138)
		tmp2 = (bytePointer->bytes == null());
	}
	else{
		HX_STACK_LINE(138)
		tmp2 = true;
	}
	HX_STACK_LINE(138)
	if ((tmp2)){
		HX_STACK_LINE(138)
		return null();
	}
	HX_STACK_LINE(143)
	::lime::utils::ArrayBufferView tmp3;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(143)
	{
		HX_STACK_LINE(143)
		::haxe::io::Bytes buffer = bytePointer->bytes;		HX_STACK_VAR(buffer,"buffer");
		HX_STACK_LINE(143)
		Float tmp4 = (Float(bytePointer->offset) / Float((int)8));		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(143)
		int tmp5 = ::Std_obj::_int(tmp4);		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(143)
		Dynamic byteoffset = tmp5;		HX_STACK_VAR(byteoffset,"byteoffset");
		HX_STACK_LINE(143)
		::lime::utils::ArrayBufferView this1;		HX_STACK_VAR(this1,"this1");
		HX_STACK_LINE(143)
		bool tmp6 = false;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(143)
		if ((tmp6)){
			HX_STACK_LINE(143)
			::lime::utils::ArrayBufferView tmp7 = ::lime::utils::ArrayBufferView_obj::__new(null(),(int)5);		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(143)
			this1 = tmp7;
		}
		else{
			HX_STACK_LINE(143)
			bool tmp7 = false;		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(143)
			if ((tmp7)){
				HX_STACK_LINE(143)
				::lime::utils::ArrayBufferView tmp8;		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(143)
				{
					HX_STACK_LINE(143)
					::lime::utils::ArrayBufferView tmp9 = ::lime::utils::ArrayBufferView_obj::__new((int)0,(int)5);		HX_STACK_VAR(tmp9,"tmp9");
					HX_STACK_LINE(143)
					::lime::utils::ArrayBufferView _this = tmp9;		HX_STACK_VAR(_this,"_this");
					HX_STACK_LINE(143)
					_this->byteOffset = (int)0;
					HX_STACK_LINE(143)
					int tmp10 = hx::Throw(HX_CSTRING("Invalid field access on null object"));		HX_STACK_VAR(tmp10,"tmp10");
					HX_STACK_LINE(143)
					_this->length = tmp10;
					HX_STACK_LINE(143)
					int tmp11 = (_this->length * _this->bytesPerElement);		HX_STACK_VAR(tmp11,"tmp11");
					HX_STACK_LINE(143)
					_this->byteLength = tmp11;
					HX_STACK_LINE(143)
					::haxe::io::Bytes tmp12;		HX_STACK_VAR(tmp12,"tmp12");
					HX_STACK_LINE(143)
					{
						HX_STACK_LINE(143)
						::haxe::io::Bytes this2;		HX_STACK_VAR(this2,"this2");
						HX_STACK_LINE(143)
						int tmp13 = _this->byteLength;		HX_STACK_VAR(tmp13,"tmp13");
						HX_STACK_LINE(143)
						::haxe::io::Bytes tmp14 = ::haxe::io::Bytes_obj::alloc(tmp13);		HX_STACK_VAR(tmp14,"tmp14");
						HX_STACK_LINE(143)
						this2 = tmp14;
						HX_STACK_LINE(143)
						tmp12 = this2;
					}
					HX_STACK_LINE(143)
					_this->buffer = tmp12;
					HX_STACK_LINE(143)
					_this->copyFromArray(((Array< Float >)(null())),null());
					HX_STACK_LINE(143)
					tmp8 = _this;
				}
				HX_STACK_LINE(143)
				this1 = tmp8;
			}
			else{
				HX_STACK_LINE(143)
				bool tmp8 = false;		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(143)
				if ((tmp8)){
					HX_STACK_LINE(143)
					::lime::utils::ArrayBufferView tmp9;		HX_STACK_VAR(tmp9,"tmp9");
					HX_STACK_LINE(143)
					{
						HX_STACK_LINE(143)
						::lime::utils::ArrayBufferView tmp10 = ::lime::utils::ArrayBufferView_obj::__new((int)0,(int)5);		HX_STACK_VAR(tmp10,"tmp10");
						HX_STACK_LINE(143)
						::lime::utils::ArrayBufferView _this = tmp10;		HX_STACK_VAR(_this,"_this");
						HX_STACK_LINE(143)
						cpp::ArrayBase array = hx::Throw(HX_CSTRING("Invalid field access on null object"));		HX_STACK_VAR(array,"array");
						HX_STACK_LINE(143)
						_this->byteOffset = (int)0;
						HX_STACK_LINE(143)
						_this->length = array->__Field(HX_HCSTRING("length","\xe6","\x94","\x07","\x9f"), hx::paccDynamic );
						HX_STACK_LINE(143)
						int tmp11 = (_this->length * _this->bytesPerElement);		HX_STACK_VAR(tmp11,"tmp11");
						HX_STACK_LINE(143)
						_this->byteLength = tmp11;
						HX_STACK_LINE(143)
						::haxe::io::Bytes tmp12;		HX_STACK_VAR(tmp12,"tmp12");
						HX_STACK_LINE(143)
						{
							HX_STACK_LINE(143)
							::haxe::io::Bytes this2;		HX_STACK_VAR(this2,"this2");
							HX_STACK_LINE(143)
							int tmp13 = _this->byteLength;		HX_STACK_VAR(tmp13,"tmp13");
							HX_STACK_LINE(143)
							::haxe::io::Bytes tmp14 = ::haxe::io::Bytes_obj::alloc(tmp13);		HX_STACK_VAR(tmp14,"tmp14");
							HX_STACK_LINE(143)
							this2 = tmp14;
							HX_STACK_LINE(143)
							tmp12 = this2;
						}
						HX_STACK_LINE(143)
						_this->buffer = tmp12;
						HX_STACK_LINE(143)
						_this->copyFromArray(((Array< Float >)(array)),null());
						HX_STACK_LINE(143)
						tmp9 = _this;
					}
					HX_STACK_LINE(143)
					this1 = tmp9;
				}
				else{
					HX_STACK_LINE(143)
					bool tmp9 = false;		HX_STACK_VAR(tmp9,"tmp9");
					HX_STACK_LINE(143)
					if ((tmp9)){
						HX_STACK_LINE(143)
						::lime::utils::ArrayBufferView tmp10;		HX_STACK_VAR(tmp10,"tmp10");
						HX_STACK_LINE(143)
						{
							HX_STACK_LINE(143)
							::lime::utils::ArrayBufferView tmp11 = ::lime::utils::ArrayBufferView_obj::__new((int)0,(int)5);		HX_STACK_VAR(tmp11,"tmp11");
							HX_STACK_LINE(143)
							::lime::utils::ArrayBufferView _this = tmp11;		HX_STACK_VAR(_this,"_this");
							HX_STACK_LINE(143)
							::haxe::io::Bytes tmp12 = hx::Throw(HX_CSTRING("Invalid field access on null object"));		HX_STACK_VAR(tmp12,"tmp12");
							HX_STACK_LINE(143)
							::haxe::io::Bytes srcData = tmp12;		HX_STACK_VAR(srcData,"srcData");
							HX_STACK_LINE(143)
							int tmp13 = hx::Throw(HX_CSTRING("Invalid field access on null object"));		HX_STACK_VAR(tmp13,"tmp13");
							HX_STACK_LINE(143)
							int srcLength = tmp13;		HX_STACK_VAR(srcLength,"srcLength");
							HX_STACK_LINE(143)
							int tmp14 = hx::Throw(HX_CSTRING("Invalid field access on null object"));		HX_STACK_VAR(tmp14,"tmp14");
							HX_STACK_LINE(143)
							int srcByteOffset = tmp14;		HX_STACK_VAR(srcByteOffset,"srcByteOffset");
							HX_STACK_LINE(143)
							int tmp15 = hx::Throw(HX_CSTRING("Invalid field access on null object"));		HX_STACK_VAR(tmp15,"tmp15");
							HX_STACK_LINE(143)
							int srcElementSize = tmp15;		HX_STACK_VAR(srcElementSize,"srcElementSize");
							HX_STACK_LINE(143)
							int elementSize = _this->bytesPerElement;		HX_STACK_VAR(elementSize,"elementSize");
							HX_STACK_LINE(143)
							int tmp16 = hx::Throw(HX_CSTRING("Invalid field access on null object"));		HX_STACK_VAR(tmp16,"tmp16");
							HX_STACK_LINE(143)
							int tmp17 = _this->type;		HX_STACK_VAR(tmp17,"tmp17");
							HX_STACK_LINE(143)
							bool tmp18 = (tmp16 == tmp17);		HX_STACK_VAR(tmp18,"tmp18");
							HX_STACK_LINE(143)
							if ((tmp18)){
								HX_STACK_LINE(143)
								int srcLength1 = srcData->length;		HX_STACK_VAR(srcLength1,"srcLength1");
								HX_STACK_LINE(143)
								int tmp19 = (srcLength1 - srcByteOffset);		HX_STACK_VAR(tmp19,"tmp19");
								HX_STACK_LINE(143)
								int cloneLength = tmp19;		HX_STACK_VAR(cloneLength,"cloneLength");
								HX_STACK_LINE(143)
								::haxe::io::Bytes tmp20;		HX_STACK_VAR(tmp20,"tmp20");
								HX_STACK_LINE(143)
								{
									HX_STACK_LINE(143)
									::haxe::io::Bytes this2;		HX_STACK_VAR(this2,"this2");
									HX_STACK_LINE(143)
									int tmp21 = cloneLength;		HX_STACK_VAR(tmp21,"tmp21");
									HX_STACK_LINE(143)
									::haxe::io::Bytes tmp22 = ::haxe::io::Bytes_obj::alloc(tmp21);		HX_STACK_VAR(tmp22,"tmp22");
									HX_STACK_LINE(143)
									this2 = tmp22;
									HX_STACK_LINE(143)
									tmp20 = this2;
								}
								HX_STACK_LINE(143)
								_this->buffer = tmp20;
								HX_STACK_LINE(143)
								::haxe::io::Bytes tmp21 = srcData;		HX_STACK_VAR(tmp21,"tmp21");
								HX_STACK_LINE(143)
								int tmp22 = srcByteOffset;		HX_STACK_VAR(tmp22,"tmp22");
								HX_STACK_LINE(143)
								int tmp23 = cloneLength;		HX_STACK_VAR(tmp23,"tmp23");
								HX_STACK_LINE(143)
								_this->buffer->blit((int)0,tmp21,tmp22,tmp23);
							}
							else{
								HX_STACK_LINE(143)
								HX_STACK_DO_THROW(HX_HCSTRING("unimplemented","\x09","\x2f","\x74","\xb4"));
							}
							HX_STACK_LINE(143)
							int tmp19 = (_this->bytesPerElement * srcLength);		HX_STACK_VAR(tmp19,"tmp19");
							HX_STACK_LINE(143)
							_this->byteLength = tmp19;
							HX_STACK_LINE(143)
							_this->byteOffset = (int)0;
							HX_STACK_LINE(143)
							_this->length = srcLength;
							HX_STACK_LINE(143)
							tmp10 = _this;
						}
						HX_STACK_LINE(143)
						this1 = tmp10;
					}
					else{
						HX_STACK_LINE(143)
						bool tmp10 = (buffer != null());		HX_STACK_VAR(tmp10,"tmp10");
						HX_STACK_LINE(143)
						if ((tmp10)){
							HX_STACK_LINE(143)
							::lime::utils::ArrayBufferView tmp11;		HX_STACK_VAR(tmp11,"tmp11");
							HX_STACK_LINE(143)
							{
								HX_STACK_LINE(143)
								::lime::utils::ArrayBufferView tmp12 = ::lime::utils::ArrayBufferView_obj::__new((int)0,(int)5);		HX_STACK_VAR(tmp12,"tmp12");
								HX_STACK_LINE(143)
								::lime::utils::ArrayBufferView _this = tmp12;		HX_STACK_VAR(_this,"_this");
								HX_STACK_LINE(143)
								int in_byteOffset = byteoffset;		HX_STACK_VAR(in_byteOffset,"in_byteOffset");
								HX_STACK_LINE(143)
								bool tmp13 = (in_byteOffset < (int)0);		HX_STACK_VAR(tmp13,"tmp13");
								HX_STACK_LINE(143)
								if ((tmp13)){
									HX_STACK_LINE(143)
									HX_STACK_DO_THROW(::lime::utils::TAError_obj::RangeError);
								}
								HX_STACK_LINE(143)
								int tmp14 = hx::Mod(in_byteOffset,_this->bytesPerElement);		HX_STACK_VAR(tmp14,"tmp14");
								HX_STACK_LINE(143)
								bool tmp15 = (tmp14 != (int)0);		HX_STACK_VAR(tmp15,"tmp15");
								HX_STACK_LINE(143)
								if ((tmp15)){
									HX_STACK_LINE(143)
									HX_STACK_DO_THROW(::lime::utils::TAError_obj::RangeError);
								}
								HX_STACK_LINE(143)
								int bufferByteLength = buffer->length;		HX_STACK_VAR(bufferByteLength,"bufferByteLength");
								HX_STACK_LINE(143)
								int elementSize = _this->bytesPerElement;		HX_STACK_VAR(elementSize,"elementSize");
								HX_STACK_LINE(143)
								int newByteLength = bufferByteLength;		HX_STACK_VAR(newByteLength,"newByteLength");
								HX_STACK_LINE(143)
								bool tmp16 = true;		HX_STACK_VAR(tmp16,"tmp16");
								HX_STACK_LINE(143)
								if ((tmp16)){
									HX_STACK_LINE(143)
									int tmp17 = (bufferByteLength - in_byteOffset);		HX_STACK_VAR(tmp17,"tmp17");
									HX_STACK_LINE(143)
									newByteLength = tmp17;
									HX_STACK_LINE(143)
									int tmp18 = hx::Mod(bufferByteLength,_this->bytesPerElement);		HX_STACK_VAR(tmp18,"tmp18");
									HX_STACK_LINE(143)
									bool tmp19 = (tmp18 != (int)0);		HX_STACK_VAR(tmp19,"tmp19");
									HX_STACK_LINE(143)
									if ((tmp19)){
										HX_STACK_LINE(143)
										HX_STACK_DO_THROW(::lime::utils::TAError_obj::RangeError);
									}
									HX_STACK_LINE(143)
									bool tmp20 = (newByteLength < (int)0);		HX_STACK_VAR(tmp20,"tmp20");
									HX_STACK_LINE(143)
									if ((tmp20)){
										HX_STACK_LINE(143)
										HX_STACK_DO_THROW(::lime::utils::TAError_obj::RangeError);
									}
								}
								else{
									HX_STACK_LINE(143)
									int tmp17 = (null() * _this->bytesPerElement);		HX_STACK_VAR(tmp17,"tmp17");
									HX_STACK_LINE(143)
									newByteLength = tmp17;
									HX_STACK_LINE(143)
									int tmp18 = (in_byteOffset + newByteLength);		HX_STACK_VAR(tmp18,"tmp18");
									HX_STACK_LINE(143)
									int newRange = tmp18;		HX_STACK_VAR(newRange,"newRange");
									HX_STACK_LINE(143)
									bool tmp19 = (newRange > bufferByteLength);		HX_STACK_VAR(tmp19,"tmp19");
									HX_STACK_LINE(143)
									if ((tmp19)){
										HX_STACK_LINE(143)
										HX_STACK_DO_THROW(::lime::utils::TAError_obj::RangeError);
									}
								}
								HX_STACK_LINE(143)
								_this->buffer = buffer;
								HX_STACK_LINE(143)
								_this->byteOffset = in_byteOffset;
								HX_STACK_LINE(143)
								_this->byteLength = newByteLength;
								HX_STACK_LINE(143)
								Float tmp17 = (Float(newByteLength) / Float(_this->bytesPerElement));		HX_STACK_VAR(tmp17,"tmp17");
								HX_STACK_LINE(143)
								int tmp18 = ::Std_obj::_int(tmp17);		HX_STACK_VAR(tmp18,"tmp18");
								HX_STACK_LINE(143)
								_this->length = tmp18;
								HX_STACK_LINE(143)
								tmp11 = _this;
							}
							HX_STACK_LINE(143)
							this1 = tmp11;
						}
						else{
							HX_STACK_LINE(143)
							HX_STACK_DO_THROW(HX_HCSTRING("Invalid constructor arguments for UInt8ClampedArray","\x8d","\x06","\x77","\x13"));
						}
					}
				}
			}
		}
		HX_STACK_LINE(143)
		tmp3 = this1;
	}
	HX_STACK_LINE(143)
	return tmp3;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(BytePointer_Impl__obj,toUInt8ClampedArray,return )

::lime::utils::ArrayBufferView BytePointer_Impl__obj::toInt8Array( ::lime::utils::BytePointerData bytePointer){
	HX_STACK_FRAME("lime.utils._BytePointer.BytePointer_Impl_","toInt8Array",0x19ac5cfa,"lime.utils._BytePointer.BytePointer_Impl_.toInt8Array","lime/utils/BytePointer.hx",149,0x50fae541)
	HX_STACK_ARG(bytePointer,"bytePointer")
	HX_STACK_LINE(151)
	bool tmp = (bytePointer == null());		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(151)
	bool tmp1 = !(tmp);		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(151)
	bool tmp2;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(151)
	if ((tmp1)){
		HX_STACK_LINE(151)
		tmp2 = (bytePointer->bytes == null());
	}
	else{
		HX_STACK_LINE(151)
		tmp2 = true;
	}
	HX_STACK_LINE(151)
	if ((tmp2)){
		HX_STACK_LINE(151)
		return null();
	}
	HX_STACK_LINE(156)
	::lime::utils::ArrayBufferView tmp3;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(156)
	{
		HX_STACK_LINE(156)
		::haxe::io::Bytes buffer = bytePointer->bytes;		HX_STACK_VAR(buffer,"buffer");
		HX_STACK_LINE(156)
		Float tmp4 = (Float(bytePointer->offset) / Float((int)8));		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(156)
		int tmp5 = ::Std_obj::_int(tmp4);		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(156)
		Dynamic byteoffset = tmp5;		HX_STACK_VAR(byteoffset,"byteoffset");
		HX_STACK_LINE(156)
		::lime::utils::ArrayBufferView this1;		HX_STACK_VAR(this1,"this1");
		HX_STACK_LINE(156)
		bool tmp6 = false;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(156)
		if ((tmp6)){
			HX_STACK_LINE(156)
			::lime::utils::ArrayBufferView tmp7 = ::lime::utils::ArrayBufferView_obj::__new(null(),(int)1);		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(156)
			this1 = tmp7;
		}
		else{
			HX_STACK_LINE(156)
			bool tmp7 = false;		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(156)
			if ((tmp7)){
				HX_STACK_LINE(156)
				::lime::utils::ArrayBufferView tmp8;		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(156)
				{
					HX_STACK_LINE(156)
					::lime::utils::ArrayBufferView tmp9 = ::lime::utils::ArrayBufferView_obj::__new((int)0,(int)1);		HX_STACK_VAR(tmp9,"tmp9");
					HX_STACK_LINE(156)
					::lime::utils::ArrayBufferView _this = tmp9;		HX_STACK_VAR(_this,"_this");
					HX_STACK_LINE(156)
					_this->byteOffset = (int)0;
					HX_STACK_LINE(156)
					int tmp10 = hx::Throw(HX_CSTRING("Invalid field access on null object"));		HX_STACK_VAR(tmp10,"tmp10");
					HX_STACK_LINE(156)
					_this->length = tmp10;
					HX_STACK_LINE(156)
					int tmp11 = (_this->length * _this->bytesPerElement);		HX_STACK_VAR(tmp11,"tmp11");
					HX_STACK_LINE(156)
					_this->byteLength = tmp11;
					HX_STACK_LINE(156)
					::haxe::io::Bytes tmp12;		HX_STACK_VAR(tmp12,"tmp12");
					HX_STACK_LINE(156)
					{
						HX_STACK_LINE(156)
						::haxe::io::Bytes this2;		HX_STACK_VAR(this2,"this2");
						HX_STACK_LINE(156)
						int tmp13 = _this->byteLength;		HX_STACK_VAR(tmp13,"tmp13");
						HX_STACK_LINE(156)
						::haxe::io::Bytes tmp14 = ::haxe::io::Bytes_obj::alloc(tmp13);		HX_STACK_VAR(tmp14,"tmp14");
						HX_STACK_LINE(156)
						this2 = tmp14;
						HX_STACK_LINE(156)
						tmp12 = this2;
					}
					HX_STACK_LINE(156)
					_this->buffer = tmp12;
					HX_STACK_LINE(156)
					_this->copyFromArray(((Array< Float >)(null())),null());
					HX_STACK_LINE(156)
					tmp8 = _this;
				}
				HX_STACK_LINE(156)
				this1 = tmp8;
			}
			else{
				HX_STACK_LINE(156)
				bool tmp8 = false;		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(156)
				if ((tmp8)){
					HX_STACK_LINE(156)
					::lime::utils::ArrayBufferView tmp9;		HX_STACK_VAR(tmp9,"tmp9");
					HX_STACK_LINE(156)
					{
						HX_STACK_LINE(156)
						::lime::utils::ArrayBufferView tmp10 = ::lime::utils::ArrayBufferView_obj::__new((int)0,(int)1);		HX_STACK_VAR(tmp10,"tmp10");
						HX_STACK_LINE(156)
						::lime::utils::ArrayBufferView _this = tmp10;		HX_STACK_VAR(_this,"_this");
						HX_STACK_LINE(156)
						cpp::ArrayBase array = hx::Throw(HX_CSTRING("Invalid field access on null object"));		HX_STACK_VAR(array,"array");
						HX_STACK_LINE(156)
						_this->byteOffset = (int)0;
						HX_STACK_LINE(156)
						_this->length = array->__Field(HX_HCSTRING("length","\xe6","\x94","\x07","\x9f"), hx::paccDynamic );
						HX_STACK_LINE(156)
						int tmp11 = (_this->length * _this->bytesPerElement);		HX_STACK_VAR(tmp11,"tmp11");
						HX_STACK_LINE(156)
						_this->byteLength = tmp11;
						HX_STACK_LINE(156)
						::haxe::io::Bytes tmp12;		HX_STACK_VAR(tmp12,"tmp12");
						HX_STACK_LINE(156)
						{
							HX_STACK_LINE(156)
							::haxe::io::Bytes this2;		HX_STACK_VAR(this2,"this2");
							HX_STACK_LINE(156)
							int tmp13 = _this->byteLength;		HX_STACK_VAR(tmp13,"tmp13");
							HX_STACK_LINE(156)
							::haxe::io::Bytes tmp14 = ::haxe::io::Bytes_obj::alloc(tmp13);		HX_STACK_VAR(tmp14,"tmp14");
							HX_STACK_LINE(156)
							this2 = tmp14;
							HX_STACK_LINE(156)
							tmp12 = this2;
						}
						HX_STACK_LINE(156)
						_this->buffer = tmp12;
						HX_STACK_LINE(156)
						_this->copyFromArray(((Array< Float >)(array)),null());
						HX_STACK_LINE(156)
						tmp9 = _this;
					}
					HX_STACK_LINE(156)
					this1 = tmp9;
				}
				else{
					HX_STACK_LINE(156)
					bool tmp9 = false;		HX_STACK_VAR(tmp9,"tmp9");
					HX_STACK_LINE(156)
					if ((tmp9)){
						HX_STACK_LINE(156)
						::lime::utils::ArrayBufferView tmp10;		HX_STACK_VAR(tmp10,"tmp10");
						HX_STACK_LINE(156)
						{
							HX_STACK_LINE(156)
							::lime::utils::ArrayBufferView tmp11 = ::lime::utils::ArrayBufferView_obj::__new((int)0,(int)1);		HX_STACK_VAR(tmp11,"tmp11");
							HX_STACK_LINE(156)
							::lime::utils::ArrayBufferView _this = tmp11;		HX_STACK_VAR(_this,"_this");
							HX_STACK_LINE(156)
							::haxe::io::Bytes tmp12 = hx::Throw(HX_CSTRING("Invalid field access on null object"));		HX_STACK_VAR(tmp12,"tmp12");
							HX_STACK_LINE(156)
							::haxe::io::Bytes srcData = tmp12;		HX_STACK_VAR(srcData,"srcData");
							HX_STACK_LINE(156)
							int tmp13 = hx::Throw(HX_CSTRING("Invalid field access on null object"));		HX_STACK_VAR(tmp13,"tmp13");
							HX_STACK_LINE(156)
							int srcLength = tmp13;		HX_STACK_VAR(srcLength,"srcLength");
							HX_STACK_LINE(156)
							int tmp14 = hx::Throw(HX_CSTRING("Invalid field access on null object"));		HX_STACK_VAR(tmp14,"tmp14");
							HX_STACK_LINE(156)
							int srcByteOffset = tmp14;		HX_STACK_VAR(srcByteOffset,"srcByteOffset");
							HX_STACK_LINE(156)
							int tmp15 = hx::Throw(HX_CSTRING("Invalid field access on null object"));		HX_STACK_VAR(tmp15,"tmp15");
							HX_STACK_LINE(156)
							int srcElementSize = tmp15;		HX_STACK_VAR(srcElementSize,"srcElementSize");
							HX_STACK_LINE(156)
							int elementSize = _this->bytesPerElement;		HX_STACK_VAR(elementSize,"elementSize");
							HX_STACK_LINE(156)
							int tmp16 = hx::Throw(HX_CSTRING("Invalid field access on null object"));		HX_STACK_VAR(tmp16,"tmp16");
							HX_STACK_LINE(156)
							int tmp17 = _this->type;		HX_STACK_VAR(tmp17,"tmp17");
							HX_STACK_LINE(156)
							bool tmp18 = (tmp16 == tmp17);		HX_STACK_VAR(tmp18,"tmp18");
							HX_STACK_LINE(156)
							if ((tmp18)){
								HX_STACK_LINE(156)
								int srcLength1 = srcData->length;		HX_STACK_VAR(srcLength1,"srcLength1");
								HX_STACK_LINE(156)
								int tmp19 = (srcLength1 - srcByteOffset);		HX_STACK_VAR(tmp19,"tmp19");
								HX_STACK_LINE(156)
								int cloneLength = tmp19;		HX_STACK_VAR(cloneLength,"cloneLength");
								HX_STACK_LINE(156)
								::haxe::io::Bytes tmp20;		HX_STACK_VAR(tmp20,"tmp20");
								HX_STACK_LINE(156)
								{
									HX_STACK_LINE(156)
									::haxe::io::Bytes this2;		HX_STACK_VAR(this2,"this2");
									HX_STACK_LINE(156)
									int tmp21 = cloneLength;		HX_STACK_VAR(tmp21,"tmp21");
									HX_STACK_LINE(156)
									::haxe::io::Bytes tmp22 = ::haxe::io::Bytes_obj::alloc(tmp21);		HX_STACK_VAR(tmp22,"tmp22");
									HX_STACK_LINE(156)
									this2 = tmp22;
									HX_STACK_LINE(156)
									tmp20 = this2;
								}
								HX_STACK_LINE(156)
								_this->buffer = tmp20;
								HX_STACK_LINE(156)
								::haxe::io::Bytes tmp21 = srcData;		HX_STACK_VAR(tmp21,"tmp21");
								HX_STACK_LINE(156)
								int tmp22 = srcByteOffset;		HX_STACK_VAR(tmp22,"tmp22");
								HX_STACK_LINE(156)
								int tmp23 = cloneLength;		HX_STACK_VAR(tmp23,"tmp23");
								HX_STACK_LINE(156)
								_this->buffer->blit((int)0,tmp21,tmp22,tmp23);
							}
							else{
								HX_STACK_LINE(156)
								HX_STACK_DO_THROW(HX_HCSTRING("unimplemented","\x09","\x2f","\x74","\xb4"));
							}
							HX_STACK_LINE(156)
							int tmp19 = (_this->bytesPerElement * srcLength);		HX_STACK_VAR(tmp19,"tmp19");
							HX_STACK_LINE(156)
							_this->byteLength = tmp19;
							HX_STACK_LINE(156)
							_this->byteOffset = (int)0;
							HX_STACK_LINE(156)
							_this->length = srcLength;
							HX_STACK_LINE(156)
							tmp10 = _this;
						}
						HX_STACK_LINE(156)
						this1 = tmp10;
					}
					else{
						HX_STACK_LINE(156)
						bool tmp10 = (buffer != null());		HX_STACK_VAR(tmp10,"tmp10");
						HX_STACK_LINE(156)
						if ((tmp10)){
							HX_STACK_LINE(156)
							::lime::utils::ArrayBufferView tmp11;		HX_STACK_VAR(tmp11,"tmp11");
							HX_STACK_LINE(156)
							{
								HX_STACK_LINE(156)
								::lime::utils::ArrayBufferView tmp12 = ::lime::utils::ArrayBufferView_obj::__new((int)0,(int)1);		HX_STACK_VAR(tmp12,"tmp12");
								HX_STACK_LINE(156)
								::lime::utils::ArrayBufferView _this = tmp12;		HX_STACK_VAR(_this,"_this");
								HX_STACK_LINE(156)
								int in_byteOffset = byteoffset;		HX_STACK_VAR(in_byteOffset,"in_byteOffset");
								HX_STACK_LINE(156)
								bool tmp13 = (in_byteOffset < (int)0);		HX_STACK_VAR(tmp13,"tmp13");
								HX_STACK_LINE(156)
								if ((tmp13)){
									HX_STACK_LINE(156)
									HX_STACK_DO_THROW(::lime::utils::TAError_obj::RangeError);
								}
								HX_STACK_LINE(156)
								int tmp14 = hx::Mod(in_byteOffset,_this->bytesPerElement);		HX_STACK_VAR(tmp14,"tmp14");
								HX_STACK_LINE(156)
								bool tmp15 = (tmp14 != (int)0);		HX_STACK_VAR(tmp15,"tmp15");
								HX_STACK_LINE(156)
								if ((tmp15)){
									HX_STACK_LINE(156)
									HX_STACK_DO_THROW(::lime::utils::TAError_obj::RangeError);
								}
								HX_STACK_LINE(156)
								int bufferByteLength = buffer->length;		HX_STACK_VAR(bufferByteLength,"bufferByteLength");
								HX_STACK_LINE(156)
								int elementSize = _this->bytesPerElement;		HX_STACK_VAR(elementSize,"elementSize");
								HX_STACK_LINE(156)
								int newByteLength = bufferByteLength;		HX_STACK_VAR(newByteLength,"newByteLength");
								HX_STACK_LINE(156)
								bool tmp16 = true;		HX_STACK_VAR(tmp16,"tmp16");
								HX_STACK_LINE(156)
								if ((tmp16)){
									HX_STACK_LINE(156)
									int tmp17 = (bufferByteLength - in_byteOffset);		HX_STACK_VAR(tmp17,"tmp17");
									HX_STACK_LINE(156)
									newByteLength = tmp17;
									HX_STACK_LINE(156)
									int tmp18 = hx::Mod(bufferByteLength,_this->bytesPerElement);		HX_STACK_VAR(tmp18,"tmp18");
									HX_STACK_LINE(156)
									bool tmp19 = (tmp18 != (int)0);		HX_STACK_VAR(tmp19,"tmp19");
									HX_STACK_LINE(156)
									if ((tmp19)){
										HX_STACK_LINE(156)
										HX_STACK_DO_THROW(::lime::utils::TAError_obj::RangeError);
									}
									HX_STACK_LINE(156)
									bool tmp20 = (newByteLength < (int)0);		HX_STACK_VAR(tmp20,"tmp20");
									HX_STACK_LINE(156)
									if ((tmp20)){
										HX_STACK_LINE(156)
										HX_STACK_DO_THROW(::lime::utils::TAError_obj::RangeError);
									}
								}
								else{
									HX_STACK_LINE(156)
									int tmp17 = (null() * _this->bytesPerElement);		HX_STACK_VAR(tmp17,"tmp17");
									HX_STACK_LINE(156)
									newByteLength = tmp17;
									HX_STACK_LINE(156)
									int tmp18 = (in_byteOffset + newByteLength);		HX_STACK_VAR(tmp18,"tmp18");
									HX_STACK_LINE(156)
									int newRange = tmp18;		HX_STACK_VAR(newRange,"newRange");
									HX_STACK_LINE(156)
									bool tmp19 = (newRange > bufferByteLength);		HX_STACK_VAR(tmp19,"tmp19");
									HX_STACK_LINE(156)
									if ((tmp19)){
										HX_STACK_LINE(156)
										HX_STACK_DO_THROW(::lime::utils::TAError_obj::RangeError);
									}
								}
								HX_STACK_LINE(156)
								_this->buffer = buffer;
								HX_STACK_LINE(156)
								_this->byteOffset = in_byteOffset;
								HX_STACK_LINE(156)
								_this->byteLength = newByteLength;
								HX_STACK_LINE(156)
								Float tmp17 = (Float(newByteLength) / Float(_this->bytesPerElement));		HX_STACK_VAR(tmp17,"tmp17");
								HX_STACK_LINE(156)
								int tmp18 = ::Std_obj::_int(tmp17);		HX_STACK_VAR(tmp18,"tmp18");
								HX_STACK_LINE(156)
								_this->length = tmp18;
								HX_STACK_LINE(156)
								tmp11 = _this;
							}
							HX_STACK_LINE(156)
							this1 = tmp11;
						}
						else{
							HX_STACK_LINE(156)
							HX_STACK_DO_THROW(HX_HCSTRING("Invalid constructor arguments for Int8Array","\x40","\x53","\xda","\x77"));
						}
					}
				}
			}
		}
		HX_STACK_LINE(156)
		tmp3 = this1;
	}
	HX_STACK_LINE(156)
	return tmp3;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(BytePointer_Impl__obj,toInt8Array,return )

::lime::utils::ArrayBufferView BytePointer_Impl__obj::toUInt16Array( ::lime::utils::BytePointerData bytePointer){
	HX_STACK_FRAME("lime.utils._BytePointer.BytePointer_Impl_","toUInt16Array",0x16e13344,"lime.utils._BytePointer.BytePointer_Impl_.toUInt16Array","lime/utils/BytePointer.hx",162,0x50fae541)
	HX_STACK_ARG(bytePointer,"bytePointer")
	HX_STACK_LINE(164)
	bool tmp = (bytePointer == null());		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(164)
	bool tmp1 = !(tmp);		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(164)
	bool tmp2;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(164)
	if ((tmp1)){
		HX_STACK_LINE(164)
		tmp2 = (bytePointer->bytes == null());
	}
	else{
		HX_STACK_LINE(164)
		tmp2 = true;
	}
	HX_STACK_LINE(164)
	if ((tmp2)){
		HX_STACK_LINE(164)
		return null();
	}
	HX_STACK_LINE(169)
	::lime::utils::ArrayBufferView tmp3;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(169)
	{
		HX_STACK_LINE(169)
		::haxe::io::Bytes buffer = bytePointer->bytes;		HX_STACK_VAR(buffer,"buffer");
		HX_STACK_LINE(169)
		Float tmp4 = (Float(bytePointer->offset) / Float((int)16));		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(169)
		int tmp5 = ::Std_obj::_int(tmp4);		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(169)
		Dynamic byteoffset = tmp5;		HX_STACK_VAR(byteoffset,"byteoffset");
		HX_STACK_LINE(169)
		::lime::utils::ArrayBufferView this1;		HX_STACK_VAR(this1,"this1");
		HX_STACK_LINE(169)
		bool tmp6 = false;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(169)
		if ((tmp6)){
			HX_STACK_LINE(169)
			::lime::utils::ArrayBufferView tmp7 = ::lime::utils::ArrayBufferView_obj::__new(null(),(int)6);		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(169)
			this1 = tmp7;
		}
		else{
			HX_STACK_LINE(169)
			bool tmp7 = false;		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(169)
			if ((tmp7)){
				HX_STACK_LINE(169)
				::lime::utils::ArrayBufferView tmp8;		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(169)
				{
					HX_STACK_LINE(169)
					::lime::utils::ArrayBufferView tmp9 = ::lime::utils::ArrayBufferView_obj::__new((int)0,(int)6);		HX_STACK_VAR(tmp9,"tmp9");
					HX_STACK_LINE(169)
					::lime::utils::ArrayBufferView _this = tmp9;		HX_STACK_VAR(_this,"_this");
					HX_STACK_LINE(169)
					_this->byteOffset = (int)0;
					HX_STACK_LINE(169)
					int tmp10 = hx::Throw(HX_CSTRING("Invalid field access on null object"));		HX_STACK_VAR(tmp10,"tmp10");
					HX_STACK_LINE(169)
					_this->length = tmp10;
					HX_STACK_LINE(169)
					int tmp11 = (_this->length * _this->bytesPerElement);		HX_STACK_VAR(tmp11,"tmp11");
					HX_STACK_LINE(169)
					_this->byteLength = tmp11;
					HX_STACK_LINE(169)
					::haxe::io::Bytes tmp12;		HX_STACK_VAR(tmp12,"tmp12");
					HX_STACK_LINE(169)
					{
						HX_STACK_LINE(169)
						::haxe::io::Bytes this2;		HX_STACK_VAR(this2,"this2");
						HX_STACK_LINE(169)
						int tmp13 = _this->byteLength;		HX_STACK_VAR(tmp13,"tmp13");
						HX_STACK_LINE(169)
						::haxe::io::Bytes tmp14 = ::haxe::io::Bytes_obj::alloc(tmp13);		HX_STACK_VAR(tmp14,"tmp14");
						HX_STACK_LINE(169)
						this2 = tmp14;
						HX_STACK_LINE(169)
						tmp12 = this2;
					}
					HX_STACK_LINE(169)
					_this->buffer = tmp12;
					HX_STACK_LINE(169)
					_this->copyFromArray(((Array< Float >)(null())),null());
					HX_STACK_LINE(169)
					tmp8 = _this;
				}
				HX_STACK_LINE(169)
				this1 = tmp8;
			}
			else{
				HX_STACK_LINE(169)
				bool tmp8 = false;		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(169)
				if ((tmp8)){
					HX_STACK_LINE(169)
					::lime::utils::ArrayBufferView tmp9;		HX_STACK_VAR(tmp9,"tmp9");
					HX_STACK_LINE(169)
					{
						HX_STACK_LINE(169)
						::lime::utils::ArrayBufferView tmp10 = ::lime::utils::ArrayBufferView_obj::__new((int)0,(int)6);		HX_STACK_VAR(tmp10,"tmp10");
						HX_STACK_LINE(169)
						::lime::utils::ArrayBufferView _this = tmp10;		HX_STACK_VAR(_this,"_this");
						HX_STACK_LINE(169)
						cpp::ArrayBase array = hx::Throw(HX_CSTRING("Invalid field access on null object"));		HX_STACK_VAR(array,"array");
						HX_STACK_LINE(169)
						_this->byteOffset = (int)0;
						HX_STACK_LINE(169)
						_this->length = array->__Field(HX_HCSTRING("length","\xe6","\x94","\x07","\x9f"), hx::paccDynamic );
						HX_STACK_LINE(169)
						int tmp11 = (_this->length * _this->bytesPerElement);		HX_STACK_VAR(tmp11,"tmp11");
						HX_STACK_LINE(169)
						_this->byteLength = tmp11;
						HX_STACK_LINE(169)
						::haxe::io::Bytes tmp12;		HX_STACK_VAR(tmp12,"tmp12");
						HX_STACK_LINE(169)
						{
							HX_STACK_LINE(169)
							::haxe::io::Bytes this2;		HX_STACK_VAR(this2,"this2");
							HX_STACK_LINE(169)
							int tmp13 = _this->byteLength;		HX_STACK_VAR(tmp13,"tmp13");
							HX_STACK_LINE(169)
							::haxe::io::Bytes tmp14 = ::haxe::io::Bytes_obj::alloc(tmp13);		HX_STACK_VAR(tmp14,"tmp14");
							HX_STACK_LINE(169)
							this2 = tmp14;
							HX_STACK_LINE(169)
							tmp12 = this2;
						}
						HX_STACK_LINE(169)
						_this->buffer = tmp12;
						HX_STACK_LINE(169)
						_this->copyFromArray(((Array< Float >)(array)),null());
						HX_STACK_LINE(169)
						tmp9 = _this;
					}
					HX_STACK_LINE(169)
					this1 = tmp9;
				}
				else{
					HX_STACK_LINE(169)
					bool tmp9 = false;		HX_STACK_VAR(tmp9,"tmp9");
					HX_STACK_LINE(169)
					if ((tmp9)){
						HX_STACK_LINE(169)
						::lime::utils::ArrayBufferView tmp10;		HX_STACK_VAR(tmp10,"tmp10");
						HX_STACK_LINE(169)
						{
							HX_STACK_LINE(169)
							::lime::utils::ArrayBufferView tmp11 = ::lime::utils::ArrayBufferView_obj::__new((int)0,(int)6);		HX_STACK_VAR(tmp11,"tmp11");
							HX_STACK_LINE(169)
							::lime::utils::ArrayBufferView _this = tmp11;		HX_STACK_VAR(_this,"_this");
							HX_STACK_LINE(169)
							::haxe::io::Bytes tmp12 = hx::Throw(HX_CSTRING("Invalid field access on null object"));		HX_STACK_VAR(tmp12,"tmp12");
							HX_STACK_LINE(169)
							::haxe::io::Bytes srcData = tmp12;		HX_STACK_VAR(srcData,"srcData");
							HX_STACK_LINE(169)
							int tmp13 = hx::Throw(HX_CSTRING("Invalid field access on null object"));		HX_STACK_VAR(tmp13,"tmp13");
							HX_STACK_LINE(169)
							int srcLength = tmp13;		HX_STACK_VAR(srcLength,"srcLength");
							HX_STACK_LINE(169)
							int tmp14 = hx::Throw(HX_CSTRING("Invalid field access on null object"));		HX_STACK_VAR(tmp14,"tmp14");
							HX_STACK_LINE(169)
							int srcByteOffset = tmp14;		HX_STACK_VAR(srcByteOffset,"srcByteOffset");
							HX_STACK_LINE(169)
							int tmp15 = hx::Throw(HX_CSTRING("Invalid field access on null object"));		HX_STACK_VAR(tmp15,"tmp15");
							HX_STACK_LINE(169)
							int srcElementSize = tmp15;		HX_STACK_VAR(srcElementSize,"srcElementSize");
							HX_STACK_LINE(169)
							int elementSize = _this->bytesPerElement;		HX_STACK_VAR(elementSize,"elementSize");
							HX_STACK_LINE(169)
							int tmp16 = hx::Throw(HX_CSTRING("Invalid field access on null object"));		HX_STACK_VAR(tmp16,"tmp16");
							HX_STACK_LINE(169)
							int tmp17 = _this->type;		HX_STACK_VAR(tmp17,"tmp17");
							HX_STACK_LINE(169)
							bool tmp18 = (tmp16 == tmp17);		HX_STACK_VAR(tmp18,"tmp18");
							HX_STACK_LINE(169)
							if ((tmp18)){
								HX_STACK_LINE(169)
								int srcLength1 = srcData->length;		HX_STACK_VAR(srcLength1,"srcLength1");
								HX_STACK_LINE(169)
								int tmp19 = (srcLength1 - srcByteOffset);		HX_STACK_VAR(tmp19,"tmp19");
								HX_STACK_LINE(169)
								int cloneLength = tmp19;		HX_STACK_VAR(cloneLength,"cloneLength");
								HX_STACK_LINE(169)
								::haxe::io::Bytes tmp20;		HX_STACK_VAR(tmp20,"tmp20");
								HX_STACK_LINE(169)
								{
									HX_STACK_LINE(169)
									::haxe::io::Bytes this2;		HX_STACK_VAR(this2,"this2");
									HX_STACK_LINE(169)
									int tmp21 = cloneLength;		HX_STACK_VAR(tmp21,"tmp21");
									HX_STACK_LINE(169)
									::haxe::io::Bytes tmp22 = ::haxe::io::Bytes_obj::alloc(tmp21);		HX_STACK_VAR(tmp22,"tmp22");
									HX_STACK_LINE(169)
									this2 = tmp22;
									HX_STACK_LINE(169)
									tmp20 = this2;
								}
								HX_STACK_LINE(169)
								_this->buffer = tmp20;
								HX_STACK_LINE(169)
								::haxe::io::Bytes tmp21 = srcData;		HX_STACK_VAR(tmp21,"tmp21");
								HX_STACK_LINE(169)
								int tmp22 = srcByteOffset;		HX_STACK_VAR(tmp22,"tmp22");
								HX_STACK_LINE(169)
								int tmp23 = cloneLength;		HX_STACK_VAR(tmp23,"tmp23");
								HX_STACK_LINE(169)
								_this->buffer->blit((int)0,tmp21,tmp22,tmp23);
							}
							else{
								HX_STACK_LINE(169)
								HX_STACK_DO_THROW(HX_HCSTRING("unimplemented","\x09","\x2f","\x74","\xb4"));
							}
							HX_STACK_LINE(169)
							int tmp19 = (_this->bytesPerElement * srcLength);		HX_STACK_VAR(tmp19,"tmp19");
							HX_STACK_LINE(169)
							_this->byteLength = tmp19;
							HX_STACK_LINE(169)
							_this->byteOffset = (int)0;
							HX_STACK_LINE(169)
							_this->length = srcLength;
							HX_STACK_LINE(169)
							tmp10 = _this;
						}
						HX_STACK_LINE(169)
						this1 = tmp10;
					}
					else{
						HX_STACK_LINE(169)
						bool tmp10 = (buffer != null());		HX_STACK_VAR(tmp10,"tmp10");
						HX_STACK_LINE(169)
						if ((tmp10)){
							HX_STACK_LINE(169)
							::lime::utils::ArrayBufferView tmp11;		HX_STACK_VAR(tmp11,"tmp11");
							HX_STACK_LINE(169)
							{
								HX_STACK_LINE(169)
								::lime::utils::ArrayBufferView tmp12 = ::lime::utils::ArrayBufferView_obj::__new((int)0,(int)6);		HX_STACK_VAR(tmp12,"tmp12");
								HX_STACK_LINE(169)
								::lime::utils::ArrayBufferView _this = tmp12;		HX_STACK_VAR(_this,"_this");
								HX_STACK_LINE(169)
								int in_byteOffset = byteoffset;		HX_STACK_VAR(in_byteOffset,"in_byteOffset");
								HX_STACK_LINE(169)
								bool tmp13 = (in_byteOffset < (int)0);		HX_STACK_VAR(tmp13,"tmp13");
								HX_STACK_LINE(169)
								if ((tmp13)){
									HX_STACK_LINE(169)
									HX_STACK_DO_THROW(::lime::utils::TAError_obj::RangeError);
								}
								HX_STACK_LINE(169)
								int tmp14 = hx::Mod(in_byteOffset,_this->bytesPerElement);		HX_STACK_VAR(tmp14,"tmp14");
								HX_STACK_LINE(169)
								bool tmp15 = (tmp14 != (int)0);		HX_STACK_VAR(tmp15,"tmp15");
								HX_STACK_LINE(169)
								if ((tmp15)){
									HX_STACK_LINE(169)
									HX_STACK_DO_THROW(::lime::utils::TAError_obj::RangeError);
								}
								HX_STACK_LINE(169)
								int bufferByteLength = buffer->length;		HX_STACK_VAR(bufferByteLength,"bufferByteLength");
								HX_STACK_LINE(169)
								int elementSize = _this->bytesPerElement;		HX_STACK_VAR(elementSize,"elementSize");
								HX_STACK_LINE(169)
								int newByteLength = bufferByteLength;		HX_STACK_VAR(newByteLength,"newByteLength");
								HX_STACK_LINE(169)
								bool tmp16 = true;		HX_STACK_VAR(tmp16,"tmp16");
								HX_STACK_LINE(169)
								if ((tmp16)){
									HX_STACK_LINE(169)
									int tmp17 = (bufferByteLength - in_byteOffset);		HX_STACK_VAR(tmp17,"tmp17");
									HX_STACK_LINE(169)
									newByteLength = tmp17;
									HX_STACK_LINE(169)
									int tmp18 = hx::Mod(bufferByteLength,_this->bytesPerElement);		HX_STACK_VAR(tmp18,"tmp18");
									HX_STACK_LINE(169)
									bool tmp19 = (tmp18 != (int)0);		HX_STACK_VAR(tmp19,"tmp19");
									HX_STACK_LINE(169)
									if ((tmp19)){
										HX_STACK_LINE(169)
										HX_STACK_DO_THROW(::lime::utils::TAError_obj::RangeError);
									}
									HX_STACK_LINE(169)
									bool tmp20 = (newByteLength < (int)0);		HX_STACK_VAR(tmp20,"tmp20");
									HX_STACK_LINE(169)
									if ((tmp20)){
										HX_STACK_LINE(169)
										HX_STACK_DO_THROW(::lime::utils::TAError_obj::RangeError);
									}
								}
								else{
									HX_STACK_LINE(169)
									int tmp17 = (null() * _this->bytesPerElement);		HX_STACK_VAR(tmp17,"tmp17");
									HX_STACK_LINE(169)
									newByteLength = tmp17;
									HX_STACK_LINE(169)
									int tmp18 = (in_byteOffset + newByteLength);		HX_STACK_VAR(tmp18,"tmp18");
									HX_STACK_LINE(169)
									int newRange = tmp18;		HX_STACK_VAR(newRange,"newRange");
									HX_STACK_LINE(169)
									bool tmp19 = (newRange > bufferByteLength);		HX_STACK_VAR(tmp19,"tmp19");
									HX_STACK_LINE(169)
									if ((tmp19)){
										HX_STACK_LINE(169)
										HX_STACK_DO_THROW(::lime::utils::TAError_obj::RangeError);
									}
								}
								HX_STACK_LINE(169)
								_this->buffer = buffer;
								HX_STACK_LINE(169)
								_this->byteOffset = in_byteOffset;
								HX_STACK_LINE(169)
								_this->byteLength = newByteLength;
								HX_STACK_LINE(169)
								Float tmp17 = (Float(newByteLength) / Float(_this->bytesPerElement));		HX_STACK_VAR(tmp17,"tmp17");
								HX_STACK_LINE(169)
								int tmp18 = ::Std_obj::_int(tmp17);		HX_STACK_VAR(tmp18,"tmp18");
								HX_STACK_LINE(169)
								_this->length = tmp18;
								HX_STACK_LINE(169)
								tmp11 = _this;
							}
							HX_STACK_LINE(169)
							this1 = tmp11;
						}
						else{
							HX_STACK_LINE(169)
							HX_STACK_DO_THROW(HX_HCSTRING("Invalid constructor arguments for UInt16Array","\x0a","\xc7","\x2d","\xd5"));
						}
					}
				}
			}
		}
		HX_STACK_LINE(169)
		tmp3 = this1;
	}
	HX_STACK_LINE(169)
	return tmp3;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(BytePointer_Impl__obj,toUInt16Array,return )

::lime::utils::ArrayBufferView BytePointer_Impl__obj::toInt16Array( ::lime::utils::BytePointerData bytePointer){
	HX_STACK_FRAME("lime.utils._BytePointer.BytePointer_Impl_","toInt16Array",0x9d8c2b9b,"lime.utils._BytePointer.BytePointer_Impl_.toInt16Array","lime/utils/BytePointer.hx",175,0x50fae541)
	HX_STACK_ARG(bytePointer,"bytePointer")
	HX_STACK_LINE(177)
	bool tmp = (bytePointer == null());		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(177)
	bool tmp1 = !(tmp);		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(177)
	bool tmp2;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(177)
	if ((tmp1)){
		HX_STACK_LINE(177)
		tmp2 = (bytePointer->bytes == null());
	}
	else{
		HX_STACK_LINE(177)
		tmp2 = true;
	}
	HX_STACK_LINE(177)
	if ((tmp2)){
		HX_STACK_LINE(177)
		return null();
	}
	HX_STACK_LINE(182)
	::lime::utils::ArrayBufferView tmp3;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(182)
	{
		HX_STACK_LINE(182)
		::haxe::io::Bytes buffer = bytePointer->bytes;		HX_STACK_VAR(buffer,"buffer");
		HX_STACK_LINE(182)
		Float tmp4 = (Float(bytePointer->offset) / Float((int)16));		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(182)
		int tmp5 = ::Std_obj::_int(tmp4);		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(182)
		Dynamic byteoffset = tmp5;		HX_STACK_VAR(byteoffset,"byteoffset");
		HX_STACK_LINE(182)
		::lime::utils::ArrayBufferView this1;		HX_STACK_VAR(this1,"this1");
		HX_STACK_LINE(182)
		bool tmp6 = false;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(182)
		if ((tmp6)){
			HX_STACK_LINE(182)
			::lime::utils::ArrayBufferView tmp7 = ::lime::utils::ArrayBufferView_obj::__new(null(),(int)2);		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(182)
			this1 = tmp7;
		}
		else{
			HX_STACK_LINE(182)
			bool tmp7 = false;		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(182)
			if ((tmp7)){
				HX_STACK_LINE(182)
				::lime::utils::ArrayBufferView tmp8;		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(182)
				{
					HX_STACK_LINE(182)
					::lime::utils::ArrayBufferView tmp9 = ::lime::utils::ArrayBufferView_obj::__new((int)0,(int)2);		HX_STACK_VAR(tmp9,"tmp9");
					HX_STACK_LINE(182)
					::lime::utils::ArrayBufferView _this = tmp9;		HX_STACK_VAR(_this,"_this");
					HX_STACK_LINE(182)
					_this->byteOffset = (int)0;
					HX_STACK_LINE(182)
					int tmp10 = hx::Throw(HX_CSTRING("Invalid field access on null object"));		HX_STACK_VAR(tmp10,"tmp10");
					HX_STACK_LINE(182)
					_this->length = tmp10;
					HX_STACK_LINE(182)
					int tmp11 = (_this->length * _this->bytesPerElement);		HX_STACK_VAR(tmp11,"tmp11");
					HX_STACK_LINE(182)
					_this->byteLength = tmp11;
					HX_STACK_LINE(182)
					::haxe::io::Bytes tmp12;		HX_STACK_VAR(tmp12,"tmp12");
					HX_STACK_LINE(182)
					{
						HX_STACK_LINE(182)
						::haxe::io::Bytes this2;		HX_STACK_VAR(this2,"this2");
						HX_STACK_LINE(182)
						int tmp13 = _this->byteLength;		HX_STACK_VAR(tmp13,"tmp13");
						HX_STACK_LINE(182)
						::haxe::io::Bytes tmp14 = ::haxe::io::Bytes_obj::alloc(tmp13);		HX_STACK_VAR(tmp14,"tmp14");
						HX_STACK_LINE(182)
						this2 = tmp14;
						HX_STACK_LINE(182)
						tmp12 = this2;
					}
					HX_STACK_LINE(182)
					_this->buffer = tmp12;
					HX_STACK_LINE(182)
					_this->copyFromArray(((Array< Float >)(null())),null());
					HX_STACK_LINE(182)
					tmp8 = _this;
				}
				HX_STACK_LINE(182)
				this1 = tmp8;
			}
			else{
				HX_STACK_LINE(182)
				bool tmp8 = false;		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(182)
				if ((tmp8)){
					HX_STACK_LINE(182)
					::lime::utils::ArrayBufferView tmp9;		HX_STACK_VAR(tmp9,"tmp9");
					HX_STACK_LINE(182)
					{
						HX_STACK_LINE(182)
						::lime::utils::ArrayBufferView tmp10 = ::lime::utils::ArrayBufferView_obj::__new((int)0,(int)2);		HX_STACK_VAR(tmp10,"tmp10");
						HX_STACK_LINE(182)
						::lime::utils::ArrayBufferView _this = tmp10;		HX_STACK_VAR(_this,"_this");
						HX_STACK_LINE(182)
						cpp::ArrayBase array = hx::Throw(HX_CSTRING("Invalid field access on null object"));		HX_STACK_VAR(array,"array");
						HX_STACK_LINE(182)
						_this->byteOffset = (int)0;
						HX_STACK_LINE(182)
						_this->length = array->__Field(HX_HCSTRING("length","\xe6","\x94","\x07","\x9f"), hx::paccDynamic );
						HX_STACK_LINE(182)
						int tmp11 = (_this->length * _this->bytesPerElement);		HX_STACK_VAR(tmp11,"tmp11");
						HX_STACK_LINE(182)
						_this->byteLength = tmp11;
						HX_STACK_LINE(182)
						::haxe::io::Bytes tmp12;		HX_STACK_VAR(tmp12,"tmp12");
						HX_STACK_LINE(182)
						{
							HX_STACK_LINE(182)
							::haxe::io::Bytes this2;		HX_STACK_VAR(this2,"this2");
							HX_STACK_LINE(182)
							int tmp13 = _this->byteLength;		HX_STACK_VAR(tmp13,"tmp13");
							HX_STACK_LINE(182)
							::haxe::io::Bytes tmp14 = ::haxe::io::Bytes_obj::alloc(tmp13);		HX_STACK_VAR(tmp14,"tmp14");
							HX_STACK_LINE(182)
							this2 = tmp14;
							HX_STACK_LINE(182)
							tmp12 = this2;
						}
						HX_STACK_LINE(182)
						_this->buffer = tmp12;
						HX_STACK_LINE(182)
						_this->copyFromArray(((Array< Float >)(array)),null());
						HX_STACK_LINE(182)
						tmp9 = _this;
					}
					HX_STACK_LINE(182)
					this1 = tmp9;
				}
				else{
					HX_STACK_LINE(182)
					bool tmp9 = false;		HX_STACK_VAR(tmp9,"tmp9");
					HX_STACK_LINE(182)
					if ((tmp9)){
						HX_STACK_LINE(182)
						::lime::utils::ArrayBufferView tmp10;		HX_STACK_VAR(tmp10,"tmp10");
						HX_STACK_LINE(182)
						{
							HX_STACK_LINE(182)
							::lime::utils::ArrayBufferView tmp11 = ::lime::utils::ArrayBufferView_obj::__new((int)0,(int)2);		HX_STACK_VAR(tmp11,"tmp11");
							HX_STACK_LINE(182)
							::lime::utils::ArrayBufferView _this = tmp11;		HX_STACK_VAR(_this,"_this");
							HX_STACK_LINE(182)
							::haxe::io::Bytes tmp12 = hx::Throw(HX_CSTRING("Invalid field access on null object"));		HX_STACK_VAR(tmp12,"tmp12");
							HX_STACK_LINE(182)
							::haxe::io::Bytes srcData = tmp12;		HX_STACK_VAR(srcData,"srcData");
							HX_STACK_LINE(182)
							int tmp13 = hx::Throw(HX_CSTRING("Invalid field access on null object"));		HX_STACK_VAR(tmp13,"tmp13");
							HX_STACK_LINE(182)
							int srcLength = tmp13;		HX_STACK_VAR(srcLength,"srcLength");
							HX_STACK_LINE(182)
							int tmp14 = hx::Throw(HX_CSTRING("Invalid field access on null object"));		HX_STACK_VAR(tmp14,"tmp14");
							HX_STACK_LINE(182)
							int srcByteOffset = tmp14;		HX_STACK_VAR(srcByteOffset,"srcByteOffset");
							HX_STACK_LINE(182)
							int tmp15 = hx::Throw(HX_CSTRING("Invalid field access on null object"));		HX_STACK_VAR(tmp15,"tmp15");
							HX_STACK_LINE(182)
							int srcElementSize = tmp15;		HX_STACK_VAR(srcElementSize,"srcElementSize");
							HX_STACK_LINE(182)
							int elementSize = _this->bytesPerElement;		HX_STACK_VAR(elementSize,"elementSize");
							HX_STACK_LINE(182)
							int tmp16 = hx::Throw(HX_CSTRING("Invalid field access on null object"));		HX_STACK_VAR(tmp16,"tmp16");
							HX_STACK_LINE(182)
							int tmp17 = _this->type;		HX_STACK_VAR(tmp17,"tmp17");
							HX_STACK_LINE(182)
							bool tmp18 = (tmp16 == tmp17);		HX_STACK_VAR(tmp18,"tmp18");
							HX_STACK_LINE(182)
							if ((tmp18)){
								HX_STACK_LINE(182)
								int srcLength1 = srcData->length;		HX_STACK_VAR(srcLength1,"srcLength1");
								HX_STACK_LINE(182)
								int tmp19 = (srcLength1 - srcByteOffset);		HX_STACK_VAR(tmp19,"tmp19");
								HX_STACK_LINE(182)
								int cloneLength = tmp19;		HX_STACK_VAR(cloneLength,"cloneLength");
								HX_STACK_LINE(182)
								::haxe::io::Bytes tmp20;		HX_STACK_VAR(tmp20,"tmp20");
								HX_STACK_LINE(182)
								{
									HX_STACK_LINE(182)
									::haxe::io::Bytes this2;		HX_STACK_VAR(this2,"this2");
									HX_STACK_LINE(182)
									int tmp21 = cloneLength;		HX_STACK_VAR(tmp21,"tmp21");
									HX_STACK_LINE(182)
									::haxe::io::Bytes tmp22 = ::haxe::io::Bytes_obj::alloc(tmp21);		HX_STACK_VAR(tmp22,"tmp22");
									HX_STACK_LINE(182)
									this2 = tmp22;
									HX_STACK_LINE(182)
									tmp20 = this2;
								}
								HX_STACK_LINE(182)
								_this->buffer = tmp20;
								HX_STACK_LINE(182)
								::haxe::io::Bytes tmp21 = srcData;		HX_STACK_VAR(tmp21,"tmp21");
								HX_STACK_LINE(182)
								int tmp22 = srcByteOffset;		HX_STACK_VAR(tmp22,"tmp22");
								HX_STACK_LINE(182)
								int tmp23 = cloneLength;		HX_STACK_VAR(tmp23,"tmp23");
								HX_STACK_LINE(182)
								_this->buffer->blit((int)0,tmp21,tmp22,tmp23);
							}
							else{
								HX_STACK_LINE(182)
								HX_STACK_DO_THROW(HX_HCSTRING("unimplemented","\x09","\x2f","\x74","\xb4"));
							}
							HX_STACK_LINE(182)
							int tmp19 = (_this->bytesPerElement * srcLength);		HX_STACK_VAR(tmp19,"tmp19");
							HX_STACK_LINE(182)
							_this->byteLength = tmp19;
							HX_STACK_LINE(182)
							_this->byteOffset = (int)0;
							HX_STACK_LINE(182)
							_this->length = srcLength;
							HX_STACK_LINE(182)
							tmp10 = _this;
						}
						HX_STACK_LINE(182)
						this1 = tmp10;
					}
					else{
						HX_STACK_LINE(182)
						bool tmp10 = (buffer != null());		HX_STACK_VAR(tmp10,"tmp10");
						HX_STACK_LINE(182)
						if ((tmp10)){
							HX_STACK_LINE(182)
							::lime::utils::ArrayBufferView tmp11;		HX_STACK_VAR(tmp11,"tmp11");
							HX_STACK_LINE(182)
							{
								HX_STACK_LINE(182)
								::lime::utils::ArrayBufferView tmp12 = ::lime::utils::ArrayBufferView_obj::__new((int)0,(int)2);		HX_STACK_VAR(tmp12,"tmp12");
								HX_STACK_LINE(182)
								::lime::utils::ArrayBufferView _this = tmp12;		HX_STACK_VAR(_this,"_this");
								HX_STACK_LINE(182)
								int in_byteOffset = byteoffset;		HX_STACK_VAR(in_byteOffset,"in_byteOffset");
								HX_STACK_LINE(182)
								bool tmp13 = (in_byteOffset < (int)0);		HX_STACK_VAR(tmp13,"tmp13");
								HX_STACK_LINE(182)
								if ((tmp13)){
									HX_STACK_LINE(182)
									HX_STACK_DO_THROW(::lime::utils::TAError_obj::RangeError);
								}
								HX_STACK_LINE(182)
								int tmp14 = hx::Mod(in_byteOffset,_this->bytesPerElement);		HX_STACK_VAR(tmp14,"tmp14");
								HX_STACK_LINE(182)
								bool tmp15 = (tmp14 != (int)0);		HX_STACK_VAR(tmp15,"tmp15");
								HX_STACK_LINE(182)
								if ((tmp15)){
									HX_STACK_LINE(182)
									HX_STACK_DO_THROW(::lime::utils::TAError_obj::RangeError);
								}
								HX_STACK_LINE(182)
								int bufferByteLength = buffer->length;		HX_STACK_VAR(bufferByteLength,"bufferByteLength");
								HX_STACK_LINE(182)
								int elementSize = _this->bytesPerElement;		HX_STACK_VAR(elementSize,"elementSize");
								HX_STACK_LINE(182)
								int newByteLength = bufferByteLength;		HX_STACK_VAR(newByteLength,"newByteLength");
								HX_STACK_LINE(182)
								bool tmp16 = true;		HX_STACK_VAR(tmp16,"tmp16");
								HX_STACK_LINE(182)
								if ((tmp16)){
									HX_STACK_LINE(182)
									int tmp17 = (bufferByteLength - in_byteOffset);		HX_STACK_VAR(tmp17,"tmp17");
									HX_STACK_LINE(182)
									newByteLength = tmp17;
									HX_STACK_LINE(182)
									int tmp18 = hx::Mod(bufferByteLength,_this->bytesPerElement);		HX_STACK_VAR(tmp18,"tmp18");
									HX_STACK_LINE(182)
									bool tmp19 = (tmp18 != (int)0);		HX_STACK_VAR(tmp19,"tmp19");
									HX_STACK_LINE(182)
									if ((tmp19)){
										HX_STACK_LINE(182)
										HX_STACK_DO_THROW(::lime::utils::TAError_obj::RangeError);
									}
									HX_STACK_LINE(182)
									bool tmp20 = (newByteLength < (int)0);		HX_STACK_VAR(tmp20,"tmp20");
									HX_STACK_LINE(182)
									if ((tmp20)){
										HX_STACK_LINE(182)
										HX_STACK_DO_THROW(::lime::utils::TAError_obj::RangeError);
									}
								}
								else{
									HX_STACK_LINE(182)
									int tmp17 = (null() * _this->bytesPerElement);		HX_STACK_VAR(tmp17,"tmp17");
									HX_STACK_LINE(182)
									newByteLength = tmp17;
									HX_STACK_LINE(182)
									int tmp18 = (in_byteOffset + newByteLength);		HX_STACK_VAR(tmp18,"tmp18");
									HX_STACK_LINE(182)
									int newRange = tmp18;		HX_STACK_VAR(newRange,"newRange");
									HX_STACK_LINE(182)
									bool tmp19 = (newRange > bufferByteLength);		HX_STACK_VAR(tmp19,"tmp19");
									HX_STACK_LINE(182)
									if ((tmp19)){
										HX_STACK_LINE(182)
										HX_STACK_DO_THROW(::lime::utils::TAError_obj::RangeError);
									}
								}
								HX_STACK_LINE(182)
								_this->buffer = buffer;
								HX_STACK_LINE(182)
								_this->byteOffset = in_byteOffset;
								HX_STACK_LINE(182)
								_this->byteLength = newByteLength;
								HX_STACK_LINE(182)
								Float tmp17 = (Float(newByteLength) / Float(_this->bytesPerElement));		HX_STACK_VAR(tmp17,"tmp17");
								HX_STACK_LINE(182)
								int tmp18 = ::Std_obj::_int(tmp17);		HX_STACK_VAR(tmp18,"tmp18");
								HX_STACK_LINE(182)
								_this->length = tmp18;
								HX_STACK_LINE(182)
								tmp11 = _this;
							}
							HX_STACK_LINE(182)
							this1 = tmp11;
						}
						else{
							HX_STACK_LINE(182)
							HX_STACK_DO_THROW(HX_HCSTRING("Invalid constructor arguments for Int16Array","\x95","\xb2","\x95","\xa7"));
						}
					}
				}
			}
		}
		HX_STACK_LINE(182)
		tmp3 = this1;
	}
	HX_STACK_LINE(182)
	return tmp3;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(BytePointer_Impl__obj,toInt16Array,return )

::lime::utils::ArrayBufferView BytePointer_Impl__obj::toUInt32Array( ::lime::utils::BytePointerData bytePointer){
	HX_STACK_FRAME("lime.utils._BytePointer.BytePointer_Impl_","toUInt32Array",0xd09eaf4a,"lime.utils._BytePointer.BytePointer_Impl_.toUInt32Array","lime/utils/BytePointer.hx",188,0x50fae541)
	HX_STACK_ARG(bytePointer,"bytePointer")
	HX_STACK_LINE(190)
	bool tmp = (bytePointer == null());		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(190)
	bool tmp1 = !(tmp);		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(190)
	bool tmp2;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(190)
	if ((tmp1)){
		HX_STACK_LINE(190)
		tmp2 = (bytePointer->bytes == null());
	}
	else{
		HX_STACK_LINE(190)
		tmp2 = true;
	}
	HX_STACK_LINE(190)
	if ((tmp2)){
		HX_STACK_LINE(190)
		return null();
	}
	HX_STACK_LINE(195)
	::lime::utils::ArrayBufferView tmp3;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(195)
	{
		HX_STACK_LINE(195)
		::haxe::io::Bytes buffer = bytePointer->bytes;		HX_STACK_VAR(buffer,"buffer");
		HX_STACK_LINE(195)
		Float tmp4 = (Float(bytePointer->offset) / Float((int)32));		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(195)
		int tmp5 = ::Std_obj::_int(tmp4);		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(195)
		Dynamic byteoffset = tmp5;		HX_STACK_VAR(byteoffset,"byteoffset");
		HX_STACK_LINE(195)
		::lime::utils::ArrayBufferView this1;		HX_STACK_VAR(this1,"this1");
		HX_STACK_LINE(195)
		bool tmp6 = false;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(195)
		if ((tmp6)){
			HX_STACK_LINE(195)
			::lime::utils::ArrayBufferView tmp7 = ::lime::utils::ArrayBufferView_obj::__new(null(),(int)7);		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(195)
			this1 = tmp7;
		}
		else{
			HX_STACK_LINE(195)
			bool tmp7 = false;		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(195)
			if ((tmp7)){
				HX_STACK_LINE(195)
				::lime::utils::ArrayBufferView tmp8;		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(195)
				{
					HX_STACK_LINE(195)
					::lime::utils::ArrayBufferView tmp9 = ::lime::utils::ArrayBufferView_obj::__new((int)0,(int)7);		HX_STACK_VAR(tmp9,"tmp9");
					HX_STACK_LINE(195)
					::lime::utils::ArrayBufferView _this = tmp9;		HX_STACK_VAR(_this,"_this");
					HX_STACK_LINE(195)
					_this->byteOffset = (int)0;
					HX_STACK_LINE(195)
					int tmp10 = hx::Throw(HX_CSTRING("Invalid field access on null object"));		HX_STACK_VAR(tmp10,"tmp10");
					HX_STACK_LINE(195)
					_this->length = tmp10;
					HX_STACK_LINE(195)
					int tmp11 = (_this->length * _this->bytesPerElement);		HX_STACK_VAR(tmp11,"tmp11");
					HX_STACK_LINE(195)
					_this->byteLength = tmp11;
					HX_STACK_LINE(195)
					::haxe::io::Bytes tmp12;		HX_STACK_VAR(tmp12,"tmp12");
					HX_STACK_LINE(195)
					{
						HX_STACK_LINE(195)
						::haxe::io::Bytes this2;		HX_STACK_VAR(this2,"this2");
						HX_STACK_LINE(195)
						int tmp13 = _this->byteLength;		HX_STACK_VAR(tmp13,"tmp13");
						HX_STACK_LINE(195)
						::haxe::io::Bytes tmp14 = ::haxe::io::Bytes_obj::alloc(tmp13);		HX_STACK_VAR(tmp14,"tmp14");
						HX_STACK_LINE(195)
						this2 = tmp14;
						HX_STACK_LINE(195)
						tmp12 = this2;
					}
					HX_STACK_LINE(195)
					_this->buffer = tmp12;
					HX_STACK_LINE(195)
					_this->copyFromArray(((Array< Float >)(null())),null());
					HX_STACK_LINE(195)
					tmp8 = _this;
				}
				HX_STACK_LINE(195)
				this1 = tmp8;
			}
			else{
				HX_STACK_LINE(195)
				bool tmp8 = false;		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(195)
				if ((tmp8)){
					HX_STACK_LINE(195)
					::lime::utils::ArrayBufferView tmp9;		HX_STACK_VAR(tmp9,"tmp9");
					HX_STACK_LINE(195)
					{
						HX_STACK_LINE(195)
						::lime::utils::ArrayBufferView tmp10 = ::lime::utils::ArrayBufferView_obj::__new((int)0,(int)7);		HX_STACK_VAR(tmp10,"tmp10");
						HX_STACK_LINE(195)
						::lime::utils::ArrayBufferView _this = tmp10;		HX_STACK_VAR(_this,"_this");
						HX_STACK_LINE(195)
						cpp::ArrayBase array = hx::Throw(HX_CSTRING("Invalid field access on null object"));		HX_STACK_VAR(array,"array");
						HX_STACK_LINE(195)
						_this->byteOffset = (int)0;
						HX_STACK_LINE(195)
						_this->length = array->__Field(HX_HCSTRING("length","\xe6","\x94","\x07","\x9f"), hx::paccDynamic );
						HX_STACK_LINE(195)
						int tmp11 = (_this->length * _this->bytesPerElement);		HX_STACK_VAR(tmp11,"tmp11");
						HX_STACK_LINE(195)
						_this->byteLength = tmp11;
						HX_STACK_LINE(195)
						::haxe::io::Bytes tmp12;		HX_STACK_VAR(tmp12,"tmp12");
						HX_STACK_LINE(195)
						{
							HX_STACK_LINE(195)
							::haxe::io::Bytes this2;		HX_STACK_VAR(this2,"this2");
							HX_STACK_LINE(195)
							int tmp13 = _this->byteLength;		HX_STACK_VAR(tmp13,"tmp13");
							HX_STACK_LINE(195)
							::haxe::io::Bytes tmp14 = ::haxe::io::Bytes_obj::alloc(tmp13);		HX_STACK_VAR(tmp14,"tmp14");
							HX_STACK_LINE(195)
							this2 = tmp14;
							HX_STACK_LINE(195)
							tmp12 = this2;
						}
						HX_STACK_LINE(195)
						_this->buffer = tmp12;
						HX_STACK_LINE(195)
						_this->copyFromArray(((Array< Float >)(array)),null());
						HX_STACK_LINE(195)
						tmp9 = _this;
					}
					HX_STACK_LINE(195)
					this1 = tmp9;
				}
				else{
					HX_STACK_LINE(195)
					bool tmp9 = false;		HX_STACK_VAR(tmp9,"tmp9");
					HX_STACK_LINE(195)
					if ((tmp9)){
						HX_STACK_LINE(195)
						::lime::utils::ArrayBufferView tmp10;		HX_STACK_VAR(tmp10,"tmp10");
						HX_STACK_LINE(195)
						{
							HX_STACK_LINE(195)
							::lime::utils::ArrayBufferView tmp11 = ::lime::utils::ArrayBufferView_obj::__new((int)0,(int)7);		HX_STACK_VAR(tmp11,"tmp11");
							HX_STACK_LINE(195)
							::lime::utils::ArrayBufferView _this = tmp11;		HX_STACK_VAR(_this,"_this");
							HX_STACK_LINE(195)
							::haxe::io::Bytes tmp12 = hx::Throw(HX_CSTRING("Invalid field access on null object"));		HX_STACK_VAR(tmp12,"tmp12");
							HX_STACK_LINE(195)
							::haxe::io::Bytes srcData = tmp12;		HX_STACK_VAR(srcData,"srcData");
							HX_STACK_LINE(195)
							int tmp13 = hx::Throw(HX_CSTRING("Invalid field access on null object"));		HX_STACK_VAR(tmp13,"tmp13");
							HX_STACK_LINE(195)
							int srcLength = tmp13;		HX_STACK_VAR(srcLength,"srcLength");
							HX_STACK_LINE(195)
							int tmp14 = hx::Throw(HX_CSTRING("Invalid field access on null object"));		HX_STACK_VAR(tmp14,"tmp14");
							HX_STACK_LINE(195)
							int srcByteOffset = tmp14;		HX_STACK_VAR(srcByteOffset,"srcByteOffset");
							HX_STACK_LINE(195)
							int tmp15 = hx::Throw(HX_CSTRING("Invalid field access on null object"));		HX_STACK_VAR(tmp15,"tmp15");
							HX_STACK_LINE(195)
							int srcElementSize = tmp15;		HX_STACK_VAR(srcElementSize,"srcElementSize");
							HX_STACK_LINE(195)
							int elementSize = _this->bytesPerElement;		HX_STACK_VAR(elementSize,"elementSize");
							HX_STACK_LINE(195)
							int tmp16 = hx::Throw(HX_CSTRING("Invalid field access on null object"));		HX_STACK_VAR(tmp16,"tmp16");
							HX_STACK_LINE(195)
							int tmp17 = _this->type;		HX_STACK_VAR(tmp17,"tmp17");
							HX_STACK_LINE(195)
							bool tmp18 = (tmp16 == tmp17);		HX_STACK_VAR(tmp18,"tmp18");
							HX_STACK_LINE(195)
							if ((tmp18)){
								HX_STACK_LINE(195)
								int srcLength1 = srcData->length;		HX_STACK_VAR(srcLength1,"srcLength1");
								HX_STACK_LINE(195)
								int tmp19 = (srcLength1 - srcByteOffset);		HX_STACK_VAR(tmp19,"tmp19");
								HX_STACK_LINE(195)
								int cloneLength = tmp19;		HX_STACK_VAR(cloneLength,"cloneLength");
								HX_STACK_LINE(195)
								::haxe::io::Bytes tmp20;		HX_STACK_VAR(tmp20,"tmp20");
								HX_STACK_LINE(195)
								{
									HX_STACK_LINE(195)
									::haxe::io::Bytes this2;		HX_STACK_VAR(this2,"this2");
									HX_STACK_LINE(195)
									int tmp21 = cloneLength;		HX_STACK_VAR(tmp21,"tmp21");
									HX_STACK_LINE(195)
									::haxe::io::Bytes tmp22 = ::haxe::io::Bytes_obj::alloc(tmp21);		HX_STACK_VAR(tmp22,"tmp22");
									HX_STACK_LINE(195)
									this2 = tmp22;
									HX_STACK_LINE(195)
									tmp20 = this2;
								}
								HX_STACK_LINE(195)
								_this->buffer = tmp20;
								HX_STACK_LINE(195)
								::haxe::io::Bytes tmp21 = srcData;		HX_STACK_VAR(tmp21,"tmp21");
								HX_STACK_LINE(195)
								int tmp22 = srcByteOffset;		HX_STACK_VAR(tmp22,"tmp22");
								HX_STACK_LINE(195)
								int tmp23 = cloneLength;		HX_STACK_VAR(tmp23,"tmp23");
								HX_STACK_LINE(195)
								_this->buffer->blit((int)0,tmp21,tmp22,tmp23);
							}
							else{
								HX_STACK_LINE(195)
								HX_STACK_DO_THROW(HX_HCSTRING("unimplemented","\x09","\x2f","\x74","\xb4"));
							}
							HX_STACK_LINE(195)
							int tmp19 = (_this->bytesPerElement * srcLength);		HX_STACK_VAR(tmp19,"tmp19");
							HX_STACK_LINE(195)
							_this->byteLength = tmp19;
							HX_STACK_LINE(195)
							_this->byteOffset = (int)0;
							HX_STACK_LINE(195)
							_this->length = srcLength;
							HX_STACK_LINE(195)
							tmp10 = _this;
						}
						HX_STACK_LINE(195)
						this1 = tmp10;
					}
					else{
						HX_STACK_LINE(195)
						bool tmp10 = (buffer != null());		HX_STACK_VAR(tmp10,"tmp10");
						HX_STACK_LINE(195)
						if ((tmp10)){
							HX_STACK_LINE(195)
							::lime::utils::ArrayBufferView tmp11;		HX_STACK_VAR(tmp11,"tmp11");
							HX_STACK_LINE(195)
							{
								HX_STACK_LINE(195)
								::lime::utils::ArrayBufferView tmp12 = ::lime::utils::ArrayBufferView_obj::__new((int)0,(int)7);		HX_STACK_VAR(tmp12,"tmp12");
								HX_STACK_LINE(195)
								::lime::utils::ArrayBufferView _this = tmp12;		HX_STACK_VAR(_this,"_this");
								HX_STACK_LINE(195)
								int in_byteOffset = byteoffset;		HX_STACK_VAR(in_byteOffset,"in_byteOffset");
								HX_STACK_LINE(195)
								bool tmp13 = (in_byteOffset < (int)0);		HX_STACK_VAR(tmp13,"tmp13");
								HX_STACK_LINE(195)
								if ((tmp13)){
									HX_STACK_LINE(195)
									HX_STACK_DO_THROW(::lime::utils::TAError_obj::RangeError);
								}
								HX_STACK_LINE(195)
								int tmp14 = hx::Mod(in_byteOffset,_this->bytesPerElement);		HX_STACK_VAR(tmp14,"tmp14");
								HX_STACK_LINE(195)
								bool tmp15 = (tmp14 != (int)0);		HX_STACK_VAR(tmp15,"tmp15");
								HX_STACK_LINE(195)
								if ((tmp15)){
									HX_STACK_LINE(195)
									HX_STACK_DO_THROW(::lime::utils::TAError_obj::RangeError);
								}
								HX_STACK_LINE(195)
								int bufferByteLength = buffer->length;		HX_STACK_VAR(bufferByteLength,"bufferByteLength");
								HX_STACK_LINE(195)
								int elementSize = _this->bytesPerElement;		HX_STACK_VAR(elementSize,"elementSize");
								HX_STACK_LINE(195)
								int newByteLength = bufferByteLength;		HX_STACK_VAR(newByteLength,"newByteLength");
								HX_STACK_LINE(195)
								bool tmp16 = true;		HX_STACK_VAR(tmp16,"tmp16");
								HX_STACK_LINE(195)
								if ((tmp16)){
									HX_STACK_LINE(195)
									int tmp17 = (bufferByteLength - in_byteOffset);		HX_STACK_VAR(tmp17,"tmp17");
									HX_STACK_LINE(195)
									newByteLength = tmp17;
									HX_STACK_LINE(195)
									int tmp18 = hx::Mod(bufferByteLength,_this->bytesPerElement);		HX_STACK_VAR(tmp18,"tmp18");
									HX_STACK_LINE(195)
									bool tmp19 = (tmp18 != (int)0);		HX_STACK_VAR(tmp19,"tmp19");
									HX_STACK_LINE(195)
									if ((tmp19)){
										HX_STACK_LINE(195)
										HX_STACK_DO_THROW(::lime::utils::TAError_obj::RangeError);
									}
									HX_STACK_LINE(195)
									bool tmp20 = (newByteLength < (int)0);		HX_STACK_VAR(tmp20,"tmp20");
									HX_STACK_LINE(195)
									if ((tmp20)){
										HX_STACK_LINE(195)
										HX_STACK_DO_THROW(::lime::utils::TAError_obj::RangeError);
									}
								}
								else{
									HX_STACK_LINE(195)
									int tmp17 = (null() * _this->bytesPerElement);		HX_STACK_VAR(tmp17,"tmp17");
									HX_STACK_LINE(195)
									newByteLength = tmp17;
									HX_STACK_LINE(195)
									int tmp18 = (in_byteOffset + newByteLength);		HX_STACK_VAR(tmp18,"tmp18");
									HX_STACK_LINE(195)
									int newRange = tmp18;		HX_STACK_VAR(newRange,"newRange");
									HX_STACK_LINE(195)
									bool tmp19 = (newRange > bufferByteLength);		HX_STACK_VAR(tmp19,"tmp19");
									HX_STACK_LINE(195)
									if ((tmp19)){
										HX_STACK_LINE(195)
										HX_STACK_DO_THROW(::lime::utils::TAError_obj::RangeError);
									}
								}
								HX_STACK_LINE(195)
								_this->buffer = buffer;
								HX_STACK_LINE(195)
								_this->byteOffset = in_byteOffset;
								HX_STACK_LINE(195)
								_this->byteLength = newByteLength;
								HX_STACK_LINE(195)
								Float tmp17 = (Float(newByteLength) / Float(_this->bytesPerElement));		HX_STACK_VAR(tmp17,"tmp17");
								HX_STACK_LINE(195)
								int tmp18 = ::Std_obj::_int(tmp17);		HX_STACK_VAR(tmp18,"tmp18");
								HX_STACK_LINE(195)
								_this->length = tmp18;
								HX_STACK_LINE(195)
								tmp11 = _this;
							}
							HX_STACK_LINE(195)
							this1 = tmp11;
						}
						else{
							HX_STACK_LINE(195)
							HX_STACK_DO_THROW(HX_HCSTRING("Invalid constructor arguments for UInt32Array","\x10","\x43","\xeb","\x8e"));
						}
					}
				}
			}
		}
		HX_STACK_LINE(195)
		tmp3 = this1;
	}
	HX_STACK_LINE(195)
	return tmp3;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(BytePointer_Impl__obj,toUInt32Array,return )

::lime::utils::ArrayBufferView BytePointer_Impl__obj::toInt32Array( ::lime::utils::BytePointerData bytePointer){
	HX_STACK_FRAME("lime.utils._BytePointer.BytePointer_Impl_","toInt32Array",0x5749a7a1,"lime.utils._BytePointer.BytePointer_Impl_.toInt32Array","lime/utils/BytePointer.hx",201,0x50fae541)
	HX_STACK_ARG(bytePointer,"bytePointer")
	HX_STACK_LINE(203)
	bool tmp = (bytePointer == null());		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(203)
	bool tmp1 = !(tmp);		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(203)
	bool tmp2;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(203)
	if ((tmp1)){
		HX_STACK_LINE(203)
		tmp2 = (bytePointer->bytes == null());
	}
	else{
		HX_STACK_LINE(203)
		tmp2 = true;
	}
	HX_STACK_LINE(203)
	if ((tmp2)){
		HX_STACK_LINE(203)
		return null();
	}
	HX_STACK_LINE(208)
	::lime::utils::ArrayBufferView tmp3;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(208)
	{
		HX_STACK_LINE(208)
		::haxe::io::Bytes buffer = bytePointer->bytes;		HX_STACK_VAR(buffer,"buffer");
		HX_STACK_LINE(208)
		Float tmp4 = (Float(bytePointer->offset) / Float((int)32));		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(208)
		int tmp5 = ::Std_obj::_int(tmp4);		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(208)
		Dynamic byteoffset = tmp5;		HX_STACK_VAR(byteoffset,"byteoffset");
		HX_STACK_LINE(208)
		::lime::utils::ArrayBufferView this1;		HX_STACK_VAR(this1,"this1");
		HX_STACK_LINE(208)
		bool tmp6 = false;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(208)
		if ((tmp6)){
			HX_STACK_LINE(208)
			::lime::utils::ArrayBufferView tmp7 = ::lime::utils::ArrayBufferView_obj::__new(null(),(int)3);		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(208)
			this1 = tmp7;
		}
		else{
			HX_STACK_LINE(208)
			bool tmp7 = false;		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(208)
			if ((tmp7)){
				HX_STACK_LINE(208)
				::lime::utils::ArrayBufferView tmp8;		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(208)
				{
					HX_STACK_LINE(208)
					::lime::utils::ArrayBufferView tmp9 = ::lime::utils::ArrayBufferView_obj::__new((int)0,(int)3);		HX_STACK_VAR(tmp9,"tmp9");
					HX_STACK_LINE(208)
					::lime::utils::ArrayBufferView _this = tmp9;		HX_STACK_VAR(_this,"_this");
					HX_STACK_LINE(208)
					_this->byteOffset = (int)0;
					HX_STACK_LINE(208)
					int tmp10 = hx::Throw(HX_CSTRING("Invalid field access on null object"));		HX_STACK_VAR(tmp10,"tmp10");
					HX_STACK_LINE(208)
					_this->length = tmp10;
					HX_STACK_LINE(208)
					int tmp11 = (_this->length * _this->bytesPerElement);		HX_STACK_VAR(tmp11,"tmp11");
					HX_STACK_LINE(208)
					_this->byteLength = tmp11;
					HX_STACK_LINE(208)
					::haxe::io::Bytes tmp12;		HX_STACK_VAR(tmp12,"tmp12");
					HX_STACK_LINE(208)
					{
						HX_STACK_LINE(208)
						::haxe::io::Bytes this2;		HX_STACK_VAR(this2,"this2");
						HX_STACK_LINE(208)
						int tmp13 = _this->byteLength;		HX_STACK_VAR(tmp13,"tmp13");
						HX_STACK_LINE(208)
						::haxe::io::Bytes tmp14 = ::haxe::io::Bytes_obj::alloc(tmp13);		HX_STACK_VAR(tmp14,"tmp14");
						HX_STACK_LINE(208)
						this2 = tmp14;
						HX_STACK_LINE(208)
						tmp12 = this2;
					}
					HX_STACK_LINE(208)
					_this->buffer = tmp12;
					HX_STACK_LINE(208)
					_this->copyFromArray(((Array< Float >)(null())),null());
					HX_STACK_LINE(208)
					tmp8 = _this;
				}
				HX_STACK_LINE(208)
				this1 = tmp8;
			}
			else{
				HX_STACK_LINE(208)
				bool tmp8 = false;		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(208)
				if ((tmp8)){
					HX_STACK_LINE(208)
					::lime::utils::ArrayBufferView tmp9;		HX_STACK_VAR(tmp9,"tmp9");
					HX_STACK_LINE(208)
					{
						HX_STACK_LINE(208)
						::lime::utils::ArrayBufferView tmp10 = ::lime::utils::ArrayBufferView_obj::__new((int)0,(int)3);		HX_STACK_VAR(tmp10,"tmp10");
						HX_STACK_LINE(208)
						::lime::utils::ArrayBufferView _this = tmp10;		HX_STACK_VAR(_this,"_this");
						HX_STACK_LINE(208)
						cpp::ArrayBase array = hx::Throw(HX_CSTRING("Invalid field access on null object"));		HX_STACK_VAR(array,"array");
						HX_STACK_LINE(208)
						_this->byteOffset = (int)0;
						HX_STACK_LINE(208)
						_this->length = array->__Field(HX_HCSTRING("length","\xe6","\x94","\x07","\x9f"), hx::paccDynamic );
						HX_STACK_LINE(208)
						int tmp11 = (_this->length * _this->bytesPerElement);		HX_STACK_VAR(tmp11,"tmp11");
						HX_STACK_LINE(208)
						_this->byteLength = tmp11;
						HX_STACK_LINE(208)
						::haxe::io::Bytes tmp12;		HX_STACK_VAR(tmp12,"tmp12");
						HX_STACK_LINE(208)
						{
							HX_STACK_LINE(208)
							::haxe::io::Bytes this2;		HX_STACK_VAR(this2,"this2");
							HX_STACK_LINE(208)
							int tmp13 = _this->byteLength;		HX_STACK_VAR(tmp13,"tmp13");
							HX_STACK_LINE(208)
							::haxe::io::Bytes tmp14 = ::haxe::io::Bytes_obj::alloc(tmp13);		HX_STACK_VAR(tmp14,"tmp14");
							HX_STACK_LINE(208)
							this2 = tmp14;
							HX_STACK_LINE(208)
							tmp12 = this2;
						}
						HX_STACK_LINE(208)
						_this->buffer = tmp12;
						HX_STACK_LINE(208)
						_this->copyFromArray(((Array< Float >)(array)),null());
						HX_STACK_LINE(208)
						tmp9 = _this;
					}
					HX_STACK_LINE(208)
					this1 = tmp9;
				}
				else{
					HX_STACK_LINE(208)
					bool tmp9 = false;		HX_STACK_VAR(tmp9,"tmp9");
					HX_STACK_LINE(208)
					if ((tmp9)){
						HX_STACK_LINE(208)
						::lime::utils::ArrayBufferView tmp10;		HX_STACK_VAR(tmp10,"tmp10");
						HX_STACK_LINE(208)
						{
							HX_STACK_LINE(208)
							::lime::utils::ArrayBufferView tmp11 = ::lime::utils::ArrayBufferView_obj::__new((int)0,(int)3);		HX_STACK_VAR(tmp11,"tmp11");
							HX_STACK_LINE(208)
							::lime::utils::ArrayBufferView _this = tmp11;		HX_STACK_VAR(_this,"_this");
							HX_STACK_LINE(208)
							::haxe::io::Bytes tmp12 = hx::Throw(HX_CSTRING("Invalid field access on null object"));		HX_STACK_VAR(tmp12,"tmp12");
							HX_STACK_LINE(208)
							::haxe::io::Bytes srcData = tmp12;		HX_STACK_VAR(srcData,"srcData");
							HX_STACK_LINE(208)
							int tmp13 = hx::Throw(HX_CSTRING("Invalid field access on null object"));		HX_STACK_VAR(tmp13,"tmp13");
							HX_STACK_LINE(208)
							int srcLength = tmp13;		HX_STACK_VAR(srcLength,"srcLength");
							HX_STACK_LINE(208)
							int tmp14 = hx::Throw(HX_CSTRING("Invalid field access on null object"));		HX_STACK_VAR(tmp14,"tmp14");
							HX_STACK_LINE(208)
							int srcByteOffset = tmp14;		HX_STACK_VAR(srcByteOffset,"srcByteOffset");
							HX_STACK_LINE(208)
							int tmp15 = hx::Throw(HX_CSTRING("Invalid field access on null object"));		HX_STACK_VAR(tmp15,"tmp15");
							HX_STACK_LINE(208)
							int srcElementSize = tmp15;		HX_STACK_VAR(srcElementSize,"srcElementSize");
							HX_STACK_LINE(208)
							int elementSize = _this->bytesPerElement;		HX_STACK_VAR(elementSize,"elementSize");
							HX_STACK_LINE(208)
							int tmp16 = hx::Throw(HX_CSTRING("Invalid field access on null object"));		HX_STACK_VAR(tmp16,"tmp16");
							HX_STACK_LINE(208)
							int tmp17 = _this->type;		HX_STACK_VAR(tmp17,"tmp17");
							HX_STACK_LINE(208)
							bool tmp18 = (tmp16 == tmp17);		HX_STACK_VAR(tmp18,"tmp18");
							HX_STACK_LINE(208)
							if ((tmp18)){
								HX_STACK_LINE(208)
								int srcLength1 = srcData->length;		HX_STACK_VAR(srcLength1,"srcLength1");
								HX_STACK_LINE(208)
								int tmp19 = (srcLength1 - srcByteOffset);		HX_STACK_VAR(tmp19,"tmp19");
								HX_STACK_LINE(208)
								int cloneLength = tmp19;		HX_STACK_VAR(cloneLength,"cloneLength");
								HX_STACK_LINE(208)
								::haxe::io::Bytes tmp20;		HX_STACK_VAR(tmp20,"tmp20");
								HX_STACK_LINE(208)
								{
									HX_STACK_LINE(208)
									::haxe::io::Bytes this2;		HX_STACK_VAR(this2,"this2");
									HX_STACK_LINE(208)
									int tmp21 = cloneLength;		HX_STACK_VAR(tmp21,"tmp21");
									HX_STACK_LINE(208)
									::haxe::io::Bytes tmp22 = ::haxe::io::Bytes_obj::alloc(tmp21);		HX_STACK_VAR(tmp22,"tmp22");
									HX_STACK_LINE(208)
									this2 = tmp22;
									HX_STACK_LINE(208)
									tmp20 = this2;
								}
								HX_STACK_LINE(208)
								_this->buffer = tmp20;
								HX_STACK_LINE(208)
								::haxe::io::Bytes tmp21 = srcData;		HX_STACK_VAR(tmp21,"tmp21");
								HX_STACK_LINE(208)
								int tmp22 = srcByteOffset;		HX_STACK_VAR(tmp22,"tmp22");
								HX_STACK_LINE(208)
								int tmp23 = cloneLength;		HX_STACK_VAR(tmp23,"tmp23");
								HX_STACK_LINE(208)
								_this->buffer->blit((int)0,tmp21,tmp22,tmp23);
							}
							else{
								HX_STACK_LINE(208)
								HX_STACK_DO_THROW(HX_HCSTRING("unimplemented","\x09","\x2f","\x74","\xb4"));
							}
							HX_STACK_LINE(208)
							int tmp19 = (_this->bytesPerElement * srcLength);		HX_STACK_VAR(tmp19,"tmp19");
							HX_STACK_LINE(208)
							_this->byteLength = tmp19;
							HX_STACK_LINE(208)
							_this->byteOffset = (int)0;
							HX_STACK_LINE(208)
							_this->length = srcLength;
							HX_STACK_LINE(208)
							tmp10 = _this;
						}
						HX_STACK_LINE(208)
						this1 = tmp10;
					}
					else{
						HX_STACK_LINE(208)
						bool tmp10 = (buffer != null());		HX_STACK_VAR(tmp10,"tmp10");
						HX_STACK_LINE(208)
						if ((tmp10)){
							HX_STACK_LINE(208)
							::lime::utils::ArrayBufferView tmp11;		HX_STACK_VAR(tmp11,"tmp11");
							HX_STACK_LINE(208)
							{
								HX_STACK_LINE(208)
								::lime::utils::ArrayBufferView tmp12 = ::lime::utils::ArrayBufferView_obj::__new((int)0,(int)3);		HX_STACK_VAR(tmp12,"tmp12");
								HX_STACK_LINE(208)
								::lime::utils::ArrayBufferView _this = tmp12;		HX_STACK_VAR(_this,"_this");
								HX_STACK_LINE(208)
								int in_byteOffset = byteoffset;		HX_STACK_VAR(in_byteOffset,"in_byteOffset");
								HX_STACK_LINE(208)
								bool tmp13 = (in_byteOffset < (int)0);		HX_STACK_VAR(tmp13,"tmp13");
								HX_STACK_LINE(208)
								if ((tmp13)){
									HX_STACK_LINE(208)
									HX_STACK_DO_THROW(::lime::utils::TAError_obj::RangeError);
								}
								HX_STACK_LINE(208)
								int tmp14 = hx::Mod(in_byteOffset,_this->bytesPerElement);		HX_STACK_VAR(tmp14,"tmp14");
								HX_STACK_LINE(208)
								bool tmp15 = (tmp14 != (int)0);		HX_STACK_VAR(tmp15,"tmp15");
								HX_STACK_LINE(208)
								if ((tmp15)){
									HX_STACK_LINE(208)
									HX_STACK_DO_THROW(::lime::utils::TAError_obj::RangeError);
								}
								HX_STACK_LINE(208)
								int bufferByteLength = buffer->length;		HX_STACK_VAR(bufferByteLength,"bufferByteLength");
								HX_STACK_LINE(208)
								int elementSize = _this->bytesPerElement;		HX_STACK_VAR(elementSize,"elementSize");
								HX_STACK_LINE(208)
								int newByteLength = bufferByteLength;		HX_STACK_VAR(newByteLength,"newByteLength");
								HX_STACK_LINE(208)
								bool tmp16 = true;		HX_STACK_VAR(tmp16,"tmp16");
								HX_STACK_LINE(208)
								if ((tmp16)){
									HX_STACK_LINE(208)
									int tmp17 = (bufferByteLength - in_byteOffset);		HX_STACK_VAR(tmp17,"tmp17");
									HX_STACK_LINE(208)
									newByteLength = tmp17;
									HX_STACK_LINE(208)
									int tmp18 = hx::Mod(bufferByteLength,_this->bytesPerElement);		HX_STACK_VAR(tmp18,"tmp18");
									HX_STACK_LINE(208)
									bool tmp19 = (tmp18 != (int)0);		HX_STACK_VAR(tmp19,"tmp19");
									HX_STACK_LINE(208)
									if ((tmp19)){
										HX_STACK_LINE(208)
										HX_STACK_DO_THROW(::lime::utils::TAError_obj::RangeError);
									}
									HX_STACK_LINE(208)
									bool tmp20 = (newByteLength < (int)0);		HX_STACK_VAR(tmp20,"tmp20");
									HX_STACK_LINE(208)
									if ((tmp20)){
										HX_STACK_LINE(208)
										HX_STACK_DO_THROW(::lime::utils::TAError_obj::RangeError);
									}
								}
								else{
									HX_STACK_LINE(208)
									int tmp17 = (null() * _this->bytesPerElement);		HX_STACK_VAR(tmp17,"tmp17");
									HX_STACK_LINE(208)
									newByteLength = tmp17;
									HX_STACK_LINE(208)
									int tmp18 = (in_byteOffset + newByteLength);		HX_STACK_VAR(tmp18,"tmp18");
									HX_STACK_LINE(208)
									int newRange = tmp18;		HX_STACK_VAR(newRange,"newRange");
									HX_STACK_LINE(208)
									bool tmp19 = (newRange > bufferByteLength);		HX_STACK_VAR(tmp19,"tmp19");
									HX_STACK_LINE(208)
									if ((tmp19)){
										HX_STACK_LINE(208)
										HX_STACK_DO_THROW(::lime::utils::TAError_obj::RangeError);
									}
								}
								HX_STACK_LINE(208)
								_this->buffer = buffer;
								HX_STACK_LINE(208)
								_this->byteOffset = in_byteOffset;
								HX_STACK_LINE(208)
								_this->byteLength = newByteLength;
								HX_STACK_LINE(208)
								Float tmp17 = (Float(newByteLength) / Float(_this->bytesPerElement));		HX_STACK_VAR(tmp17,"tmp17");
								HX_STACK_LINE(208)
								int tmp18 = ::Std_obj::_int(tmp17);		HX_STACK_VAR(tmp18,"tmp18");
								HX_STACK_LINE(208)
								_this->length = tmp18;
								HX_STACK_LINE(208)
								tmp11 = _this;
							}
							HX_STACK_LINE(208)
							this1 = tmp11;
						}
						else{
							HX_STACK_LINE(208)
							HX_STACK_DO_THROW(HX_HCSTRING("Invalid constructor arguments for Int32Array","\x9b","\x2e","\x53","\x61"));
						}
					}
				}
			}
		}
		HX_STACK_LINE(208)
		tmp3 = this1;
	}
	HX_STACK_LINE(208)
	return tmp3;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(BytePointer_Impl__obj,toInt32Array,return )

::lime::utils::ArrayBufferView BytePointer_Impl__obj::toFloat32Array( ::lime::utils::BytePointerData bytePointer){
	HX_STACK_FRAME("lime.utils._BytePointer.BytePointer_Impl_","toFloat32Array",0x10400814,"lime.utils._BytePointer.BytePointer_Impl_.toFloat32Array","lime/utils/BytePointer.hx",214,0x50fae541)
	HX_STACK_ARG(bytePointer,"bytePointer")
	HX_STACK_LINE(216)
	bool tmp = (bytePointer == null());		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(216)
	bool tmp1 = !(tmp);		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(216)
	bool tmp2;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(216)
	if ((tmp1)){
		HX_STACK_LINE(216)
		tmp2 = (bytePointer->bytes == null());
	}
	else{
		HX_STACK_LINE(216)
		tmp2 = true;
	}
	HX_STACK_LINE(216)
	if ((tmp2)){
		HX_STACK_LINE(216)
		return null();
	}
	HX_STACK_LINE(221)
	::lime::utils::ArrayBufferView tmp3;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(221)
	{
		HX_STACK_LINE(221)
		::haxe::io::Bytes buffer = bytePointer->bytes;		HX_STACK_VAR(buffer,"buffer");
		HX_STACK_LINE(221)
		Float tmp4 = (Float(bytePointer->offset) / Float((int)32));		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(221)
		int tmp5 = ::Std_obj::_int(tmp4);		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(221)
		Dynamic byteoffset = tmp5;		HX_STACK_VAR(byteoffset,"byteoffset");
		HX_STACK_LINE(221)
		::lime::utils::ArrayBufferView this1;		HX_STACK_VAR(this1,"this1");
		HX_STACK_LINE(221)
		bool tmp6 = false;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(221)
		if ((tmp6)){
			HX_STACK_LINE(221)
			::lime::utils::ArrayBufferView tmp7 = ::lime::utils::ArrayBufferView_obj::__new(null(),(int)8);		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(221)
			this1 = tmp7;
		}
		else{
			HX_STACK_LINE(221)
			bool tmp7 = false;		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(221)
			if ((tmp7)){
				HX_STACK_LINE(221)
				::lime::utils::ArrayBufferView tmp8;		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(221)
				{
					HX_STACK_LINE(221)
					::lime::utils::ArrayBufferView tmp9 = ::lime::utils::ArrayBufferView_obj::__new((int)0,(int)8);		HX_STACK_VAR(tmp9,"tmp9");
					HX_STACK_LINE(221)
					::lime::utils::ArrayBufferView _this = tmp9;		HX_STACK_VAR(_this,"_this");
					HX_STACK_LINE(221)
					_this->byteOffset = (int)0;
					HX_STACK_LINE(221)
					int tmp10 = hx::Throw(HX_CSTRING("Invalid field access on null object"));		HX_STACK_VAR(tmp10,"tmp10");
					HX_STACK_LINE(221)
					_this->length = tmp10;
					HX_STACK_LINE(221)
					int tmp11 = (_this->length * _this->bytesPerElement);		HX_STACK_VAR(tmp11,"tmp11");
					HX_STACK_LINE(221)
					_this->byteLength = tmp11;
					HX_STACK_LINE(221)
					::haxe::io::Bytes tmp12;		HX_STACK_VAR(tmp12,"tmp12");
					HX_STACK_LINE(221)
					{
						HX_STACK_LINE(221)
						::haxe::io::Bytes this2;		HX_STACK_VAR(this2,"this2");
						HX_STACK_LINE(221)
						int tmp13 = _this->byteLength;		HX_STACK_VAR(tmp13,"tmp13");
						HX_STACK_LINE(221)
						::haxe::io::Bytes tmp14 = ::haxe::io::Bytes_obj::alloc(tmp13);		HX_STACK_VAR(tmp14,"tmp14");
						HX_STACK_LINE(221)
						this2 = tmp14;
						HX_STACK_LINE(221)
						tmp12 = this2;
					}
					HX_STACK_LINE(221)
					_this->buffer = tmp12;
					HX_STACK_LINE(221)
					_this->copyFromArray(((Array< Float >)(null())),null());
					HX_STACK_LINE(221)
					tmp8 = _this;
				}
				HX_STACK_LINE(221)
				this1 = tmp8;
			}
			else{
				HX_STACK_LINE(221)
				bool tmp8 = false;		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(221)
				if ((tmp8)){
					HX_STACK_LINE(221)
					::lime::utils::ArrayBufferView tmp9;		HX_STACK_VAR(tmp9,"tmp9");
					HX_STACK_LINE(221)
					{
						HX_STACK_LINE(221)
						::lime::utils::ArrayBufferView tmp10 = ::lime::utils::ArrayBufferView_obj::__new((int)0,(int)8);		HX_STACK_VAR(tmp10,"tmp10");
						HX_STACK_LINE(221)
						::lime::utils::ArrayBufferView _this = tmp10;		HX_STACK_VAR(_this,"_this");
						HX_STACK_LINE(221)
						cpp::ArrayBase array = hx::Throw(HX_CSTRING("Invalid field access on null object"));		HX_STACK_VAR(array,"array");
						HX_STACK_LINE(221)
						_this->byteOffset = (int)0;
						HX_STACK_LINE(221)
						_this->length = array->__Field(HX_HCSTRING("length","\xe6","\x94","\x07","\x9f"), hx::paccDynamic );
						HX_STACK_LINE(221)
						int tmp11 = (_this->length * _this->bytesPerElement);		HX_STACK_VAR(tmp11,"tmp11");
						HX_STACK_LINE(221)
						_this->byteLength = tmp11;
						HX_STACK_LINE(221)
						::haxe::io::Bytes tmp12;		HX_STACK_VAR(tmp12,"tmp12");
						HX_STACK_LINE(221)
						{
							HX_STACK_LINE(221)
							::haxe::io::Bytes this2;		HX_STACK_VAR(this2,"this2");
							HX_STACK_LINE(221)
							int tmp13 = _this->byteLength;		HX_STACK_VAR(tmp13,"tmp13");
							HX_STACK_LINE(221)
							::haxe::io::Bytes tmp14 = ::haxe::io::Bytes_obj::alloc(tmp13);		HX_STACK_VAR(tmp14,"tmp14");
							HX_STACK_LINE(221)
							this2 = tmp14;
							HX_STACK_LINE(221)
							tmp12 = this2;
						}
						HX_STACK_LINE(221)
						_this->buffer = tmp12;
						HX_STACK_LINE(221)
						_this->copyFromArray(((Array< Float >)(array)),null());
						HX_STACK_LINE(221)
						tmp9 = _this;
					}
					HX_STACK_LINE(221)
					this1 = tmp9;
				}
				else{
					HX_STACK_LINE(221)
					bool tmp9 = false;		HX_STACK_VAR(tmp9,"tmp9");
					HX_STACK_LINE(221)
					if ((tmp9)){
						HX_STACK_LINE(221)
						::lime::utils::ArrayBufferView tmp10;		HX_STACK_VAR(tmp10,"tmp10");
						HX_STACK_LINE(221)
						{
							HX_STACK_LINE(221)
							::lime::utils::ArrayBufferView tmp11 = ::lime::utils::ArrayBufferView_obj::__new((int)0,(int)8);		HX_STACK_VAR(tmp11,"tmp11");
							HX_STACK_LINE(221)
							::lime::utils::ArrayBufferView _this = tmp11;		HX_STACK_VAR(_this,"_this");
							HX_STACK_LINE(221)
							::haxe::io::Bytes tmp12 = hx::Throw(HX_CSTRING("Invalid field access on null object"));		HX_STACK_VAR(tmp12,"tmp12");
							HX_STACK_LINE(221)
							::haxe::io::Bytes srcData = tmp12;		HX_STACK_VAR(srcData,"srcData");
							HX_STACK_LINE(221)
							int tmp13 = hx::Throw(HX_CSTRING("Invalid field access on null object"));		HX_STACK_VAR(tmp13,"tmp13");
							HX_STACK_LINE(221)
							int srcLength = tmp13;		HX_STACK_VAR(srcLength,"srcLength");
							HX_STACK_LINE(221)
							int tmp14 = hx::Throw(HX_CSTRING("Invalid field access on null object"));		HX_STACK_VAR(tmp14,"tmp14");
							HX_STACK_LINE(221)
							int srcByteOffset = tmp14;		HX_STACK_VAR(srcByteOffset,"srcByteOffset");
							HX_STACK_LINE(221)
							int tmp15 = hx::Throw(HX_CSTRING("Invalid field access on null object"));		HX_STACK_VAR(tmp15,"tmp15");
							HX_STACK_LINE(221)
							int srcElementSize = tmp15;		HX_STACK_VAR(srcElementSize,"srcElementSize");
							HX_STACK_LINE(221)
							int elementSize = _this->bytesPerElement;		HX_STACK_VAR(elementSize,"elementSize");
							HX_STACK_LINE(221)
							int tmp16 = hx::Throw(HX_CSTRING("Invalid field access on null object"));		HX_STACK_VAR(tmp16,"tmp16");
							HX_STACK_LINE(221)
							int tmp17 = _this->type;		HX_STACK_VAR(tmp17,"tmp17");
							HX_STACK_LINE(221)
							bool tmp18 = (tmp16 == tmp17);		HX_STACK_VAR(tmp18,"tmp18");
							HX_STACK_LINE(221)
							if ((tmp18)){
								HX_STACK_LINE(221)
								int srcLength1 = srcData->length;		HX_STACK_VAR(srcLength1,"srcLength1");
								HX_STACK_LINE(221)
								int tmp19 = (srcLength1 - srcByteOffset);		HX_STACK_VAR(tmp19,"tmp19");
								HX_STACK_LINE(221)
								int cloneLength = tmp19;		HX_STACK_VAR(cloneLength,"cloneLength");
								HX_STACK_LINE(221)
								::haxe::io::Bytes tmp20;		HX_STACK_VAR(tmp20,"tmp20");
								HX_STACK_LINE(221)
								{
									HX_STACK_LINE(221)
									::haxe::io::Bytes this2;		HX_STACK_VAR(this2,"this2");
									HX_STACK_LINE(221)
									int tmp21 = cloneLength;		HX_STACK_VAR(tmp21,"tmp21");
									HX_STACK_LINE(221)
									::haxe::io::Bytes tmp22 = ::haxe::io::Bytes_obj::alloc(tmp21);		HX_STACK_VAR(tmp22,"tmp22");
									HX_STACK_LINE(221)
									this2 = tmp22;
									HX_STACK_LINE(221)
									tmp20 = this2;
								}
								HX_STACK_LINE(221)
								_this->buffer = tmp20;
								HX_STACK_LINE(221)
								::haxe::io::Bytes tmp21 = srcData;		HX_STACK_VAR(tmp21,"tmp21");
								HX_STACK_LINE(221)
								int tmp22 = srcByteOffset;		HX_STACK_VAR(tmp22,"tmp22");
								HX_STACK_LINE(221)
								int tmp23 = cloneLength;		HX_STACK_VAR(tmp23,"tmp23");
								HX_STACK_LINE(221)
								_this->buffer->blit((int)0,tmp21,tmp22,tmp23);
							}
							else{
								HX_STACK_LINE(221)
								HX_STACK_DO_THROW(HX_HCSTRING("unimplemented","\x09","\x2f","\x74","\xb4"));
							}
							HX_STACK_LINE(221)
							int tmp19 = (_this->bytesPerElement * srcLength);		HX_STACK_VAR(tmp19,"tmp19");
							HX_STACK_LINE(221)
							_this->byteLength = tmp19;
							HX_STACK_LINE(221)
							_this->byteOffset = (int)0;
							HX_STACK_LINE(221)
							_this->length = srcLength;
							HX_STACK_LINE(221)
							tmp10 = _this;
						}
						HX_STACK_LINE(221)
						this1 = tmp10;
					}
					else{
						HX_STACK_LINE(221)
						bool tmp10 = (buffer != null());		HX_STACK_VAR(tmp10,"tmp10");
						HX_STACK_LINE(221)
						if ((tmp10)){
							HX_STACK_LINE(221)
							::lime::utils::ArrayBufferView tmp11;		HX_STACK_VAR(tmp11,"tmp11");
							HX_STACK_LINE(221)
							{
								HX_STACK_LINE(221)
								::lime::utils::ArrayBufferView tmp12 = ::lime::utils::ArrayBufferView_obj::__new((int)0,(int)8);		HX_STACK_VAR(tmp12,"tmp12");
								HX_STACK_LINE(221)
								::lime::utils::ArrayBufferView _this = tmp12;		HX_STACK_VAR(_this,"_this");
								HX_STACK_LINE(221)
								int in_byteOffset = byteoffset;		HX_STACK_VAR(in_byteOffset,"in_byteOffset");
								HX_STACK_LINE(221)
								bool tmp13 = (in_byteOffset < (int)0);		HX_STACK_VAR(tmp13,"tmp13");
								HX_STACK_LINE(221)
								if ((tmp13)){
									HX_STACK_LINE(221)
									HX_STACK_DO_THROW(::lime::utils::TAError_obj::RangeError);
								}
								HX_STACK_LINE(221)
								int tmp14 = hx::Mod(in_byteOffset,_this->bytesPerElement);		HX_STACK_VAR(tmp14,"tmp14");
								HX_STACK_LINE(221)
								bool tmp15 = (tmp14 != (int)0);		HX_STACK_VAR(tmp15,"tmp15");
								HX_STACK_LINE(221)
								if ((tmp15)){
									HX_STACK_LINE(221)
									HX_STACK_DO_THROW(::lime::utils::TAError_obj::RangeError);
								}
								HX_STACK_LINE(221)
								int bufferByteLength = buffer->length;		HX_STACK_VAR(bufferByteLength,"bufferByteLength");
								HX_STACK_LINE(221)
								int elementSize = _this->bytesPerElement;		HX_STACK_VAR(elementSize,"elementSize");
								HX_STACK_LINE(221)
								int newByteLength = bufferByteLength;		HX_STACK_VAR(newByteLength,"newByteLength");
								HX_STACK_LINE(221)
								bool tmp16 = true;		HX_STACK_VAR(tmp16,"tmp16");
								HX_STACK_LINE(221)
								if ((tmp16)){
									HX_STACK_LINE(221)
									int tmp17 = (bufferByteLength - in_byteOffset);		HX_STACK_VAR(tmp17,"tmp17");
									HX_STACK_LINE(221)
									newByteLength = tmp17;
									HX_STACK_LINE(221)
									int tmp18 = hx::Mod(bufferByteLength,_this->bytesPerElement);		HX_STACK_VAR(tmp18,"tmp18");
									HX_STACK_LINE(221)
									bool tmp19 = (tmp18 != (int)0);		HX_STACK_VAR(tmp19,"tmp19");
									HX_STACK_LINE(221)
									if ((tmp19)){
										HX_STACK_LINE(221)
										HX_STACK_DO_THROW(::lime::utils::TAError_obj::RangeError);
									}
									HX_STACK_LINE(221)
									bool tmp20 = (newByteLength < (int)0);		HX_STACK_VAR(tmp20,"tmp20");
									HX_STACK_LINE(221)
									if ((tmp20)){
										HX_STACK_LINE(221)
										HX_STACK_DO_THROW(::lime::utils::TAError_obj::RangeError);
									}
								}
								else{
									HX_STACK_LINE(221)
									int tmp17 = (null() * _this->bytesPerElement);		HX_STACK_VAR(tmp17,"tmp17");
									HX_STACK_LINE(221)
									newByteLength = tmp17;
									HX_STACK_LINE(221)
									int tmp18 = (in_byteOffset + newByteLength);		HX_STACK_VAR(tmp18,"tmp18");
									HX_STACK_LINE(221)
									int newRange = tmp18;		HX_STACK_VAR(newRange,"newRange");
									HX_STACK_LINE(221)
									bool tmp19 = (newRange > bufferByteLength);		HX_STACK_VAR(tmp19,"tmp19");
									HX_STACK_LINE(221)
									if ((tmp19)){
										HX_STACK_LINE(221)
										HX_STACK_DO_THROW(::lime::utils::TAError_obj::RangeError);
									}
								}
								HX_STACK_LINE(221)
								_this->buffer = buffer;
								HX_STACK_LINE(221)
								_this->byteOffset = in_byteOffset;
								HX_STACK_LINE(221)
								_this->byteLength = newByteLength;
								HX_STACK_LINE(221)
								Float tmp17 = (Float(newByteLength) / Float(_this->bytesPerElement));		HX_STACK_VAR(tmp17,"tmp17");
								HX_STACK_LINE(221)
								int tmp18 = ::Std_obj::_int(tmp17);		HX_STACK_VAR(tmp18,"tmp18");
								HX_STACK_LINE(221)
								_this->length = tmp18;
								HX_STACK_LINE(221)
								tmp11 = _this;
							}
							HX_STACK_LINE(221)
							this1 = tmp11;
						}
						else{
							HX_STACK_LINE(221)
							HX_STACK_DO_THROW(HX_HCSTRING("Invalid constructor arguments for Float32Array","\x8e","\xc1","\xf4","\xd4"));
						}
					}
				}
			}
		}
		HX_STACK_LINE(221)
		tmp3 = this1;
	}
	HX_STACK_LINE(221)
	return tmp3;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(BytePointer_Impl__obj,toFloat32Array,return )

::lime::utils::ArrayBufferView BytePointer_Impl__obj::toFloat64Array( ::lime::utils::BytePointerData bytePointer){
	HX_STACK_FRAME("lime.utils._BytePointer.BytePointer_Impl_","toFloat64Array",0x59b72515,"lime.utils._BytePointer.BytePointer_Impl_.toFloat64Array","lime/utils/BytePointer.hx",227,0x50fae541)
	HX_STACK_ARG(bytePointer,"bytePointer")
	HX_STACK_LINE(229)
	bool tmp = (bytePointer == null());		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(229)
	bool tmp1 = !(tmp);		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(229)
	bool tmp2;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(229)
	if ((tmp1)){
		HX_STACK_LINE(229)
		tmp2 = (bytePointer->bytes == null());
	}
	else{
		HX_STACK_LINE(229)
		tmp2 = true;
	}
	HX_STACK_LINE(229)
	if ((tmp2)){
		HX_STACK_LINE(229)
		return null();
	}
	HX_STACK_LINE(234)
	::lime::utils::ArrayBufferView tmp3;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(234)
	{
		HX_STACK_LINE(234)
		::haxe::io::Bytes buffer = bytePointer->bytes;		HX_STACK_VAR(buffer,"buffer");
		HX_STACK_LINE(234)
		Float tmp4 = (Float(bytePointer->offset) / Float((int)64));		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(234)
		int tmp5 = ::Std_obj::_int(tmp4);		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(234)
		Dynamic byteoffset = tmp5;		HX_STACK_VAR(byteoffset,"byteoffset");
		HX_STACK_LINE(234)
		::lime::utils::ArrayBufferView this1;		HX_STACK_VAR(this1,"this1");
		HX_STACK_LINE(234)
		bool tmp6 = false;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(234)
		if ((tmp6)){
			HX_STACK_LINE(234)
			::lime::utils::ArrayBufferView tmp7 = ::lime::utils::ArrayBufferView_obj::__new(null(),(int)9);		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(234)
			this1 = tmp7;
		}
		else{
			HX_STACK_LINE(234)
			bool tmp7 = false;		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(234)
			if ((tmp7)){
				HX_STACK_LINE(234)
				::lime::utils::ArrayBufferView tmp8;		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(234)
				{
					HX_STACK_LINE(234)
					::lime::utils::ArrayBufferView tmp9 = ::lime::utils::ArrayBufferView_obj::__new((int)0,(int)9);		HX_STACK_VAR(tmp9,"tmp9");
					HX_STACK_LINE(234)
					::lime::utils::ArrayBufferView _this = tmp9;		HX_STACK_VAR(_this,"_this");
					HX_STACK_LINE(234)
					_this->byteOffset = (int)0;
					HX_STACK_LINE(234)
					int tmp10 = hx::Throw(HX_CSTRING("Invalid field access on null object"));		HX_STACK_VAR(tmp10,"tmp10");
					HX_STACK_LINE(234)
					_this->length = tmp10;
					HX_STACK_LINE(234)
					int tmp11 = (_this->length * _this->bytesPerElement);		HX_STACK_VAR(tmp11,"tmp11");
					HX_STACK_LINE(234)
					_this->byteLength = tmp11;
					HX_STACK_LINE(234)
					::haxe::io::Bytes tmp12;		HX_STACK_VAR(tmp12,"tmp12");
					HX_STACK_LINE(234)
					{
						HX_STACK_LINE(234)
						::haxe::io::Bytes this2;		HX_STACK_VAR(this2,"this2");
						HX_STACK_LINE(234)
						int tmp13 = _this->byteLength;		HX_STACK_VAR(tmp13,"tmp13");
						HX_STACK_LINE(234)
						::haxe::io::Bytes tmp14 = ::haxe::io::Bytes_obj::alloc(tmp13);		HX_STACK_VAR(tmp14,"tmp14");
						HX_STACK_LINE(234)
						this2 = tmp14;
						HX_STACK_LINE(234)
						tmp12 = this2;
					}
					HX_STACK_LINE(234)
					_this->buffer = tmp12;
					HX_STACK_LINE(234)
					_this->copyFromArray(((Array< Float >)(null())),null());
					HX_STACK_LINE(234)
					tmp8 = _this;
				}
				HX_STACK_LINE(234)
				this1 = tmp8;
			}
			else{
				HX_STACK_LINE(234)
				bool tmp8 = false;		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(234)
				if ((tmp8)){
					HX_STACK_LINE(234)
					::lime::utils::ArrayBufferView tmp9;		HX_STACK_VAR(tmp9,"tmp9");
					HX_STACK_LINE(234)
					{
						HX_STACK_LINE(234)
						::lime::utils::ArrayBufferView tmp10 = ::lime::utils::ArrayBufferView_obj::__new((int)0,(int)9);		HX_STACK_VAR(tmp10,"tmp10");
						HX_STACK_LINE(234)
						::lime::utils::ArrayBufferView _this = tmp10;		HX_STACK_VAR(_this,"_this");
						HX_STACK_LINE(234)
						cpp::ArrayBase array = hx::Throw(HX_CSTRING("Invalid field access on null object"));		HX_STACK_VAR(array,"array");
						HX_STACK_LINE(234)
						_this->byteOffset = (int)0;
						HX_STACK_LINE(234)
						_this->length = array->__Field(HX_HCSTRING("length","\xe6","\x94","\x07","\x9f"), hx::paccDynamic );
						HX_STACK_LINE(234)
						int tmp11 = (_this->length * _this->bytesPerElement);		HX_STACK_VAR(tmp11,"tmp11");
						HX_STACK_LINE(234)
						_this->byteLength = tmp11;
						HX_STACK_LINE(234)
						::haxe::io::Bytes tmp12;		HX_STACK_VAR(tmp12,"tmp12");
						HX_STACK_LINE(234)
						{
							HX_STACK_LINE(234)
							::haxe::io::Bytes this2;		HX_STACK_VAR(this2,"this2");
							HX_STACK_LINE(234)
							int tmp13 = _this->byteLength;		HX_STACK_VAR(tmp13,"tmp13");
							HX_STACK_LINE(234)
							::haxe::io::Bytes tmp14 = ::haxe::io::Bytes_obj::alloc(tmp13);		HX_STACK_VAR(tmp14,"tmp14");
							HX_STACK_LINE(234)
							this2 = tmp14;
							HX_STACK_LINE(234)
							tmp12 = this2;
						}
						HX_STACK_LINE(234)
						_this->buffer = tmp12;
						HX_STACK_LINE(234)
						_this->copyFromArray(((Array< Float >)(array)),null());
						HX_STACK_LINE(234)
						tmp9 = _this;
					}
					HX_STACK_LINE(234)
					this1 = tmp9;
				}
				else{
					HX_STACK_LINE(234)
					bool tmp9 = false;		HX_STACK_VAR(tmp9,"tmp9");
					HX_STACK_LINE(234)
					if ((tmp9)){
						HX_STACK_LINE(234)
						::lime::utils::ArrayBufferView tmp10;		HX_STACK_VAR(tmp10,"tmp10");
						HX_STACK_LINE(234)
						{
							HX_STACK_LINE(234)
							::lime::utils::ArrayBufferView tmp11 = ::lime::utils::ArrayBufferView_obj::__new((int)0,(int)9);		HX_STACK_VAR(tmp11,"tmp11");
							HX_STACK_LINE(234)
							::lime::utils::ArrayBufferView _this = tmp11;		HX_STACK_VAR(_this,"_this");
							HX_STACK_LINE(234)
							::haxe::io::Bytes tmp12 = hx::Throw(HX_CSTRING("Invalid field access on null object"));		HX_STACK_VAR(tmp12,"tmp12");
							HX_STACK_LINE(234)
							::haxe::io::Bytes srcData = tmp12;		HX_STACK_VAR(srcData,"srcData");
							HX_STACK_LINE(234)
							int tmp13 = hx::Throw(HX_CSTRING("Invalid field access on null object"));		HX_STACK_VAR(tmp13,"tmp13");
							HX_STACK_LINE(234)
							int srcLength = tmp13;		HX_STACK_VAR(srcLength,"srcLength");
							HX_STACK_LINE(234)
							int tmp14 = hx::Throw(HX_CSTRING("Invalid field access on null object"));		HX_STACK_VAR(tmp14,"tmp14");
							HX_STACK_LINE(234)
							int srcByteOffset = tmp14;		HX_STACK_VAR(srcByteOffset,"srcByteOffset");
							HX_STACK_LINE(234)
							int tmp15 = hx::Throw(HX_CSTRING("Invalid field access on null object"));		HX_STACK_VAR(tmp15,"tmp15");
							HX_STACK_LINE(234)
							int srcElementSize = tmp15;		HX_STACK_VAR(srcElementSize,"srcElementSize");
							HX_STACK_LINE(234)
							int elementSize = _this->bytesPerElement;		HX_STACK_VAR(elementSize,"elementSize");
							HX_STACK_LINE(234)
							int tmp16 = hx::Throw(HX_CSTRING("Invalid field access on null object"));		HX_STACK_VAR(tmp16,"tmp16");
							HX_STACK_LINE(234)
							int tmp17 = _this->type;		HX_STACK_VAR(tmp17,"tmp17");
							HX_STACK_LINE(234)
							bool tmp18 = (tmp16 == tmp17);		HX_STACK_VAR(tmp18,"tmp18");
							HX_STACK_LINE(234)
							if ((tmp18)){
								HX_STACK_LINE(234)
								int srcLength1 = srcData->length;		HX_STACK_VAR(srcLength1,"srcLength1");
								HX_STACK_LINE(234)
								int tmp19 = (srcLength1 - srcByteOffset);		HX_STACK_VAR(tmp19,"tmp19");
								HX_STACK_LINE(234)
								int cloneLength = tmp19;		HX_STACK_VAR(cloneLength,"cloneLength");
								HX_STACK_LINE(234)
								::haxe::io::Bytes tmp20;		HX_STACK_VAR(tmp20,"tmp20");
								HX_STACK_LINE(234)
								{
									HX_STACK_LINE(234)
									::haxe::io::Bytes this2;		HX_STACK_VAR(this2,"this2");
									HX_STACK_LINE(234)
									int tmp21 = cloneLength;		HX_STACK_VAR(tmp21,"tmp21");
									HX_STACK_LINE(234)
									::haxe::io::Bytes tmp22 = ::haxe::io::Bytes_obj::alloc(tmp21);		HX_STACK_VAR(tmp22,"tmp22");
									HX_STACK_LINE(234)
									this2 = tmp22;
									HX_STACK_LINE(234)
									tmp20 = this2;
								}
								HX_STACK_LINE(234)
								_this->buffer = tmp20;
								HX_STACK_LINE(234)
								::haxe::io::Bytes tmp21 = srcData;		HX_STACK_VAR(tmp21,"tmp21");
								HX_STACK_LINE(234)
								int tmp22 = srcByteOffset;		HX_STACK_VAR(tmp22,"tmp22");
								HX_STACK_LINE(234)
								int tmp23 = cloneLength;		HX_STACK_VAR(tmp23,"tmp23");
								HX_STACK_LINE(234)
								_this->buffer->blit((int)0,tmp21,tmp22,tmp23);
							}
							else{
								HX_STACK_LINE(234)
								HX_STACK_DO_THROW(HX_HCSTRING("unimplemented","\x09","\x2f","\x74","\xb4"));
							}
							HX_STACK_LINE(234)
							int tmp19 = (_this->bytesPerElement * srcLength);		HX_STACK_VAR(tmp19,"tmp19");
							HX_STACK_LINE(234)
							_this->byteLength = tmp19;
							HX_STACK_LINE(234)
							_this->byteOffset = (int)0;
							HX_STACK_LINE(234)
							_this->length = srcLength;
							HX_STACK_LINE(234)
							tmp10 = _this;
						}
						HX_STACK_LINE(234)
						this1 = tmp10;
					}
					else{
						HX_STACK_LINE(234)
						bool tmp10 = (buffer != null());		HX_STACK_VAR(tmp10,"tmp10");
						HX_STACK_LINE(234)
						if ((tmp10)){
							HX_STACK_LINE(234)
							::lime::utils::ArrayBufferView tmp11;		HX_STACK_VAR(tmp11,"tmp11");
							HX_STACK_LINE(234)
							{
								HX_STACK_LINE(234)
								::lime::utils::ArrayBufferView tmp12 = ::lime::utils::ArrayBufferView_obj::__new((int)0,(int)9);		HX_STACK_VAR(tmp12,"tmp12");
								HX_STACK_LINE(234)
								::lime::utils::ArrayBufferView _this = tmp12;		HX_STACK_VAR(_this,"_this");
								HX_STACK_LINE(234)
								int in_byteOffset = byteoffset;		HX_STACK_VAR(in_byteOffset,"in_byteOffset");
								HX_STACK_LINE(234)
								bool tmp13 = (in_byteOffset < (int)0);		HX_STACK_VAR(tmp13,"tmp13");
								HX_STACK_LINE(234)
								if ((tmp13)){
									HX_STACK_LINE(234)
									HX_STACK_DO_THROW(::lime::utils::TAError_obj::RangeError);
								}
								HX_STACK_LINE(234)
								int tmp14 = hx::Mod(in_byteOffset,_this->bytesPerElement);		HX_STACK_VAR(tmp14,"tmp14");
								HX_STACK_LINE(234)
								bool tmp15 = (tmp14 != (int)0);		HX_STACK_VAR(tmp15,"tmp15");
								HX_STACK_LINE(234)
								if ((tmp15)){
									HX_STACK_LINE(234)
									HX_STACK_DO_THROW(::lime::utils::TAError_obj::RangeError);
								}
								HX_STACK_LINE(234)
								int bufferByteLength = buffer->length;		HX_STACK_VAR(bufferByteLength,"bufferByteLength");
								HX_STACK_LINE(234)
								int elementSize = _this->bytesPerElement;		HX_STACK_VAR(elementSize,"elementSize");
								HX_STACK_LINE(234)
								int newByteLength = bufferByteLength;		HX_STACK_VAR(newByteLength,"newByteLength");
								HX_STACK_LINE(234)
								bool tmp16 = true;		HX_STACK_VAR(tmp16,"tmp16");
								HX_STACK_LINE(234)
								if ((tmp16)){
									HX_STACK_LINE(234)
									int tmp17 = (bufferByteLength - in_byteOffset);		HX_STACK_VAR(tmp17,"tmp17");
									HX_STACK_LINE(234)
									newByteLength = tmp17;
									HX_STACK_LINE(234)
									int tmp18 = hx::Mod(bufferByteLength,_this->bytesPerElement);		HX_STACK_VAR(tmp18,"tmp18");
									HX_STACK_LINE(234)
									bool tmp19 = (tmp18 != (int)0);		HX_STACK_VAR(tmp19,"tmp19");
									HX_STACK_LINE(234)
									if ((tmp19)){
										HX_STACK_LINE(234)
										HX_STACK_DO_THROW(::lime::utils::TAError_obj::RangeError);
									}
									HX_STACK_LINE(234)
									bool tmp20 = (newByteLength < (int)0);		HX_STACK_VAR(tmp20,"tmp20");
									HX_STACK_LINE(234)
									if ((tmp20)){
										HX_STACK_LINE(234)
										HX_STACK_DO_THROW(::lime::utils::TAError_obj::RangeError);
									}
								}
								else{
									HX_STACK_LINE(234)
									int tmp17 = (null() * _this->bytesPerElement);		HX_STACK_VAR(tmp17,"tmp17");
									HX_STACK_LINE(234)
									newByteLength = tmp17;
									HX_STACK_LINE(234)
									int tmp18 = (in_byteOffset + newByteLength);		HX_STACK_VAR(tmp18,"tmp18");
									HX_STACK_LINE(234)
									int newRange = tmp18;		HX_STACK_VAR(newRange,"newRange");
									HX_STACK_LINE(234)
									bool tmp19 = (newRange > bufferByteLength);		HX_STACK_VAR(tmp19,"tmp19");
									HX_STACK_LINE(234)
									if ((tmp19)){
										HX_STACK_LINE(234)
										HX_STACK_DO_THROW(::lime::utils::TAError_obj::RangeError);
									}
								}
								HX_STACK_LINE(234)
								_this->buffer = buffer;
								HX_STACK_LINE(234)
								_this->byteOffset = in_byteOffset;
								HX_STACK_LINE(234)
								_this->byteLength = newByteLength;
								HX_STACK_LINE(234)
								Float tmp17 = (Float(newByteLength) / Float(_this->bytesPerElement));		HX_STACK_VAR(tmp17,"tmp17");
								HX_STACK_LINE(234)
								int tmp18 = ::Std_obj::_int(tmp17);		HX_STACK_VAR(tmp18,"tmp18");
								HX_STACK_LINE(234)
								_this->length = tmp18;
								HX_STACK_LINE(234)
								tmp11 = _this;
							}
							HX_STACK_LINE(234)
							this1 = tmp11;
						}
						else{
							HX_STACK_LINE(234)
							HX_STACK_DO_THROW(HX_HCSTRING("Invalid constructor arguments for Float64Array","\x8f","\xde","\x6b","\x1e"));
						}
					}
				}
			}
		}
		HX_STACK_LINE(234)
		tmp3 = this1;
	}
	HX_STACK_LINE(234)
	return tmp3;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(BytePointer_Impl__obj,toFloat64Array,return )


BytePointer_Impl__obj::BytePointer_Impl__obj()
{
}

bool BytePointer_Impl__obj::__GetStatic(const ::String &inName, Dynamic &outValue, hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"set") ) { outValue = set_dyn(); return true;  }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"_new") ) { outValue = _new_dyn(); return true;  }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"fromFile") ) { outValue = fromFile_dyn(); return true;  }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"fromBytes") ) { outValue = fromBytes_dyn(); return true;  }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"__arrayGet") ) { outValue = __arrayGet_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"__arraySet") ) { outValue = __arraySet_dyn(); return true;  }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"toInt8Array") ) { outValue = toInt8Array_dyn(); return true;  }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"toUInt8Array") ) { outValue = toUInt8Array_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"toInt16Array") ) { outValue = toInt16Array_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"toInt32Array") ) { outValue = toInt32Array_dyn(); return true;  }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"fromBytesData") ) { outValue = fromBytesData_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"fromLimeBytes") ) { outValue = fromLimeBytes_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"toUInt16Array") ) { outValue = toUInt16Array_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"toUInt32Array") ) { outValue = toUInt32Array_dyn(); return true;  }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"toFloat32Array") ) { outValue = toFloat32Array_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"toFloat64Array") ) { outValue = toFloat64Array_dyn(); return true;  }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"fromArrayBuffer") ) { outValue = fromArrayBuffer_dyn(); return true;  }
		break;
	case 19:
		if (HX_FIELD_EQ(inName,"fromArrayBufferView") ) { outValue = fromArrayBufferView_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"toUInt8ClampedArray") ) { outValue = toUInt8ClampedArray_dyn(); return true;  }
	}
	return false;
}

#if HXCPP_SCRIPTABLE
static hx::StorageInfo *sMemberStorageInfo = 0;
static hx::StaticInfo *sStaticStorageInfo = 0;
#endif

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(BytePointer_Impl__obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(BytePointer_Impl__obj::__mClass,"__mClass");
};

#endif

hx::Class BytePointer_Impl__obj::__mClass;

static ::String sStaticFields[] = {
	HX_HCSTRING("_new","\x61","\x15","\x1f","\x3f"),
	HX_HCSTRING("set","\xa2","\x9b","\x57","\x00"),
	HX_HCSTRING("__arrayGet","\x9d","\x03","\xa3","\x92"),
	HX_HCSTRING("__arraySet","\xa9","\x1e","\xac","\x92"),
	HX_HCSTRING("fromArrayBufferView","\x34","\x70","\x74","\xc8"),
	HX_HCSTRING("fromArrayBuffer","\x2f","\xce","\x77","\xec"),
	HX_HCSTRING("fromBytes","\xa1","\xf2","\x20","\x72"),
	HX_HCSTRING("fromBytesData","\x6b","\xd9","\x41","\xdb"),
	HX_HCSTRING("fromFile","\x06","\x9d","\x87","\xa1"),
	HX_HCSTRING("fromLimeBytes","\x4c","\xd2","\xe6","\x4e"),
	HX_HCSTRING("toUInt8Array","\x96","\xd6","\xde","\x32"),
	HX_HCSTRING("toUInt8ClampedArray","\xc2","\xdf","\x1c","\x6a"),
	HX_HCSTRING("toInt8Array","\x75","\x6f","\x09","\x74"),
	HX_HCSTRING("toUInt16Array","\x7f","\x1a","\x84","\x90"),
	HX_HCSTRING("toInt16Array","\xc0","\x44","\x9f","\x54"),
	HX_HCSTRING("toUInt32Array","\x85","\x96","\x41","\x4a"),
	HX_HCSTRING("toInt32Array","\xc6","\xc0","\x5c","\x0e"),
	HX_HCSTRING("toFloat32Array","\x79","\x74","\x27","\x05"),
	HX_HCSTRING("toFloat64Array","\x7a","\x91","\x9e","\x4e"),
	::String(null()) };

void BytePointer_Impl__obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("lime.utils._BytePointer.BytePointer_Impl_","\x73","\xda","\x65","\x91");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &BytePointer_Impl__obj::__GetStatic;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(sStaticFields);
	__mClass->mMembers = hx::Class_obj::dupFunctions(0 /* sMemberFields */);
	__mClass->mCanCast = hx::TCanCast< BytePointer_Impl__obj >;
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
} // end namespace _BytePointer
