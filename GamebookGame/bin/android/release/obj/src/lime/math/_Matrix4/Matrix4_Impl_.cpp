#include <hxcpp.h>

#include "hxMath.h"
#ifndef INCLUDED_Std
#include <Std.h>
#endif
#ifndef INCLUDED_haxe_io_Bytes
#include <haxe/io/Bytes.h>
#endif
#ifndef INCLUDED_lime_math_Vector4
#include <lime/math/Vector4.h>
#endif
#ifndef INCLUDED_lime_math__Matrix4_Matrix4_Impl_
#include <lime/math/_Matrix4/Matrix4_Impl_.h>
#endif
#ifndef INCLUDED_lime_utils_ArrayBufferView
#include <lime/utils/ArrayBufferView.h>
#endif
#ifndef INCLUDED_lime_utils_Log
#include <lime/utils/Log.h>
#endif
#ifndef INCLUDED_lime_utils_TAError
#include <lime/utils/TAError.h>
#endif
#ifndef INCLUDED_openfl__Vector_FloatVector
#include <openfl/_Vector/FloatVector.h>
#endif
#ifndef INCLUDED_openfl__Vector_IVector
#include <openfl/_Vector/IVector.h>
#endif
namespace lime{
namespace math{
namespace _Matrix4{

Void Matrix4_Impl__obj::__construct()
{
	return null();
}

//Matrix4_Impl__obj::~Matrix4_Impl__obj() { }

Dynamic Matrix4_Impl__obj::__CreateEmpty() { return  new Matrix4_Impl__obj; }
hx::ObjectPtr< Matrix4_Impl__obj > Matrix4_Impl__obj::__new()
{  hx::ObjectPtr< Matrix4_Impl__obj > _result_ = new Matrix4_Impl__obj();
	_result_->__construct();
	return _result_;}

Dynamic Matrix4_Impl__obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< Matrix4_Impl__obj > _result_ = new Matrix4_Impl__obj();
	_result_->__construct();
	return _result_;}

Array< Float > Matrix4_Impl__obj::__identity;

::lime::utils::ArrayBufferView Matrix4_Impl__obj::_new( ::lime::utils::ArrayBufferView data){
	HX_STACK_FRAME("lime.math._Matrix4.Matrix4_Impl_","_new",0x84b003e9,"lime.math._Matrix4.Matrix4_Impl_._new","lime/math/Matrix4.hx",17,0xeb65dbd8)
	HX_STACK_ARG(data,"data")
	HX_STACK_LINE(17)
	::lime::utils::ArrayBufferView this1;		HX_STACK_VAR(this1,"this1");
	HX_STACK_LINE(19)
	bool tmp = (data != null());		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(19)
	bool tmp1;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(19)
	if ((tmp)){
		HX_STACK_LINE(19)
		int tmp2 = data->length;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(19)
		int tmp3 = tmp2;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(19)
		tmp1 = (tmp3 == (int)16);
	}
	else{
		HX_STACK_LINE(19)
		tmp1 = false;
	}
	HX_STACK_LINE(19)
	if ((tmp1)){
		HX_STACK_LINE(21)
		this1 = data;
	}
	else{
		HX_STACK_LINE(25)
		::lime::utils::ArrayBufferView tmp2;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(25)
		{
			HX_STACK_LINE(25)
			cpp::ArrayBase array = ::lime::math::_Matrix4::Matrix4_Impl__obj::__identity;		HX_STACK_VAR(array,"array");
			HX_STACK_LINE(25)
			::lime::utils::ArrayBufferView this2;		HX_STACK_VAR(this2,"this2");
			HX_STACK_LINE(25)
			bool tmp3 = false;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(25)
			if ((tmp3)){
				HX_STACK_LINE(25)
				::lime::utils::ArrayBufferView tmp4 = ::lime::utils::ArrayBufferView_obj::__new(null(),(int)8);		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(25)
				this2 = tmp4;
			}
			else{
				HX_STACK_LINE(25)
				bool tmp4 = (array != null());		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(25)
				if ((tmp4)){
					HX_STACK_LINE(25)
					::lime::utils::ArrayBufferView tmp5;		HX_STACK_VAR(tmp5,"tmp5");
					HX_STACK_LINE(25)
					{
						HX_STACK_LINE(25)
						::lime::utils::ArrayBufferView tmp6 = ::lime::utils::ArrayBufferView_obj::__new((int)0,(int)8);		HX_STACK_VAR(tmp6,"tmp6");
						HX_STACK_LINE(25)
						::lime::utils::ArrayBufferView _this = tmp6;		HX_STACK_VAR(_this,"_this");
						HX_STACK_LINE(25)
						_this->byteOffset = (int)0;
						HX_STACK_LINE(25)
						_this->length = array->__Field(HX_HCSTRING("length","\xe6","\x94","\x07","\x9f"), hx::paccDynamic );
						HX_STACK_LINE(25)
						int tmp7 = (_this->length * _this->bytesPerElement);		HX_STACK_VAR(tmp7,"tmp7");
						HX_STACK_LINE(25)
						_this->byteLength = tmp7;
						HX_STACK_LINE(25)
						::haxe::io::Bytes tmp8;		HX_STACK_VAR(tmp8,"tmp8");
						HX_STACK_LINE(25)
						{
							HX_STACK_LINE(25)
							::haxe::io::Bytes this3;		HX_STACK_VAR(this3,"this3");
							HX_STACK_LINE(25)
							int tmp9 = _this->byteLength;		HX_STACK_VAR(tmp9,"tmp9");
							HX_STACK_LINE(25)
							::haxe::io::Bytes tmp10 = ::haxe::io::Bytes_obj::alloc(tmp9);		HX_STACK_VAR(tmp10,"tmp10");
							HX_STACK_LINE(25)
							this3 = tmp10;
							HX_STACK_LINE(25)
							tmp8 = this3;
						}
						HX_STACK_LINE(25)
						_this->buffer = tmp8;
						HX_STACK_LINE(25)
						_this->copyFromArray(((Array< Float >)(array)),null());
						HX_STACK_LINE(25)
						tmp5 = _this;
					}
					HX_STACK_LINE(25)
					this2 = tmp5;
				}
				else{
					HX_STACK_LINE(25)
					bool tmp5 = false;		HX_STACK_VAR(tmp5,"tmp5");
					HX_STACK_LINE(25)
					if ((tmp5)){
						HX_STACK_LINE(25)
						::lime::utils::ArrayBufferView tmp6;		HX_STACK_VAR(tmp6,"tmp6");
						HX_STACK_LINE(25)
						{
							HX_STACK_LINE(25)
							::lime::utils::ArrayBufferView tmp7 = ::lime::utils::ArrayBufferView_obj::__new((int)0,(int)8);		HX_STACK_VAR(tmp7,"tmp7");
							HX_STACK_LINE(25)
							::lime::utils::ArrayBufferView _this = tmp7;		HX_STACK_VAR(_this,"_this");
							HX_STACK_LINE(25)
							cpp::ArrayBase array1 = hx::Throw(HX_CSTRING("Invalid field access on null object"));		HX_STACK_VAR(array1,"array1");
							HX_STACK_LINE(25)
							_this->byteOffset = (int)0;
							HX_STACK_LINE(25)
							_this->length = array1->__Field(HX_HCSTRING("length","\xe6","\x94","\x07","\x9f"), hx::paccDynamic );
							HX_STACK_LINE(25)
							int tmp8 = (_this->length * _this->bytesPerElement);		HX_STACK_VAR(tmp8,"tmp8");
							HX_STACK_LINE(25)
							_this->byteLength = tmp8;
							HX_STACK_LINE(25)
							::haxe::io::Bytes tmp9;		HX_STACK_VAR(tmp9,"tmp9");
							HX_STACK_LINE(25)
							{
								HX_STACK_LINE(25)
								::haxe::io::Bytes this3;		HX_STACK_VAR(this3,"this3");
								HX_STACK_LINE(25)
								int tmp10 = _this->byteLength;		HX_STACK_VAR(tmp10,"tmp10");
								HX_STACK_LINE(25)
								::haxe::io::Bytes tmp11 = ::haxe::io::Bytes_obj::alloc(tmp10);		HX_STACK_VAR(tmp11,"tmp11");
								HX_STACK_LINE(25)
								this3 = tmp11;
								HX_STACK_LINE(25)
								tmp9 = this3;
							}
							HX_STACK_LINE(25)
							_this->buffer = tmp9;
							HX_STACK_LINE(25)
							_this->copyFromArray(((Array< Float >)(array1)),null());
							HX_STACK_LINE(25)
							tmp6 = _this;
						}
						HX_STACK_LINE(25)
						this2 = tmp6;
					}
					else{
						HX_STACK_LINE(25)
						bool tmp6 = false;		HX_STACK_VAR(tmp6,"tmp6");
						HX_STACK_LINE(25)
						if ((tmp6)){
							HX_STACK_LINE(25)
							::lime::utils::ArrayBufferView tmp7;		HX_STACK_VAR(tmp7,"tmp7");
							HX_STACK_LINE(25)
							{
								HX_STACK_LINE(25)
								::lime::utils::ArrayBufferView tmp8 = ::lime::utils::ArrayBufferView_obj::__new((int)0,(int)8);		HX_STACK_VAR(tmp8,"tmp8");
								HX_STACK_LINE(25)
								::lime::utils::ArrayBufferView _this = tmp8;		HX_STACK_VAR(_this,"_this");
								HX_STACK_LINE(25)
								::haxe::io::Bytes tmp9 = hx::Throw(HX_CSTRING("Invalid field access on null object"));		HX_STACK_VAR(tmp9,"tmp9");
								HX_STACK_LINE(25)
								::haxe::io::Bytes srcData = tmp9;		HX_STACK_VAR(srcData,"srcData");
								HX_STACK_LINE(25)
								int tmp10 = hx::Throw(HX_CSTRING("Invalid field access on null object"));		HX_STACK_VAR(tmp10,"tmp10");
								HX_STACK_LINE(25)
								int srcLength = tmp10;		HX_STACK_VAR(srcLength,"srcLength");
								HX_STACK_LINE(25)
								int tmp11 = hx::Throw(HX_CSTRING("Invalid field access on null object"));		HX_STACK_VAR(tmp11,"tmp11");
								HX_STACK_LINE(25)
								int srcByteOffset = tmp11;		HX_STACK_VAR(srcByteOffset,"srcByteOffset");
								HX_STACK_LINE(25)
								int tmp12 = hx::Throw(HX_CSTRING("Invalid field access on null object"));		HX_STACK_VAR(tmp12,"tmp12");
								HX_STACK_LINE(25)
								int srcElementSize = tmp12;		HX_STACK_VAR(srcElementSize,"srcElementSize");
								HX_STACK_LINE(25)
								int elementSize = _this->bytesPerElement;		HX_STACK_VAR(elementSize,"elementSize");
								HX_STACK_LINE(25)
								int tmp13 = hx::Throw(HX_CSTRING("Invalid field access on null object"));		HX_STACK_VAR(tmp13,"tmp13");
								HX_STACK_LINE(25)
								int tmp14 = _this->type;		HX_STACK_VAR(tmp14,"tmp14");
								HX_STACK_LINE(25)
								bool tmp15 = (tmp13 == tmp14);		HX_STACK_VAR(tmp15,"tmp15");
								HX_STACK_LINE(25)
								if ((tmp15)){
									HX_STACK_LINE(25)
									int srcLength1 = srcData->length;		HX_STACK_VAR(srcLength1,"srcLength1");
									HX_STACK_LINE(25)
									int tmp16 = (srcLength1 - srcByteOffset);		HX_STACK_VAR(tmp16,"tmp16");
									HX_STACK_LINE(25)
									int cloneLength = tmp16;		HX_STACK_VAR(cloneLength,"cloneLength");
									HX_STACK_LINE(25)
									::haxe::io::Bytes tmp17;		HX_STACK_VAR(tmp17,"tmp17");
									HX_STACK_LINE(25)
									{
										HX_STACK_LINE(25)
										::haxe::io::Bytes this3;		HX_STACK_VAR(this3,"this3");
										HX_STACK_LINE(25)
										int tmp18 = cloneLength;		HX_STACK_VAR(tmp18,"tmp18");
										HX_STACK_LINE(25)
										::haxe::io::Bytes tmp19 = ::haxe::io::Bytes_obj::alloc(tmp18);		HX_STACK_VAR(tmp19,"tmp19");
										HX_STACK_LINE(25)
										this3 = tmp19;
										HX_STACK_LINE(25)
										tmp17 = this3;
									}
									HX_STACK_LINE(25)
									_this->buffer = tmp17;
									HX_STACK_LINE(25)
									::haxe::io::Bytes tmp18 = srcData;		HX_STACK_VAR(tmp18,"tmp18");
									HX_STACK_LINE(25)
									int tmp19 = srcByteOffset;		HX_STACK_VAR(tmp19,"tmp19");
									HX_STACK_LINE(25)
									int tmp20 = cloneLength;		HX_STACK_VAR(tmp20,"tmp20");
									HX_STACK_LINE(25)
									_this->buffer->blit((int)0,tmp18,tmp19,tmp20);
								}
								else{
									HX_STACK_LINE(25)
									HX_STACK_DO_THROW(HX_HCSTRING("unimplemented","\x09","\x2f","\x74","\xb4"));
								}
								HX_STACK_LINE(25)
								int tmp16 = (_this->bytesPerElement * srcLength);		HX_STACK_VAR(tmp16,"tmp16");
								HX_STACK_LINE(25)
								_this->byteLength = tmp16;
								HX_STACK_LINE(25)
								_this->byteOffset = (int)0;
								HX_STACK_LINE(25)
								_this->length = srcLength;
								HX_STACK_LINE(25)
								tmp7 = _this;
							}
							HX_STACK_LINE(25)
							this2 = tmp7;
						}
						else{
							HX_STACK_LINE(25)
							bool tmp7 = false;		HX_STACK_VAR(tmp7,"tmp7");
							HX_STACK_LINE(25)
							if ((tmp7)){
								HX_STACK_LINE(25)
								::lime::utils::ArrayBufferView tmp8;		HX_STACK_VAR(tmp8,"tmp8");
								HX_STACK_LINE(25)
								{
									HX_STACK_LINE(25)
									::lime::utils::ArrayBufferView tmp9 = ::lime::utils::ArrayBufferView_obj::__new((int)0,(int)8);		HX_STACK_VAR(tmp9,"tmp9");
									HX_STACK_LINE(25)
									::lime::utils::ArrayBufferView _this = tmp9;		HX_STACK_VAR(_this,"_this");
									HX_STACK_LINE(25)
									int in_byteOffset = (int)0;		HX_STACK_VAR(in_byteOffset,"in_byteOffset");
									HX_STACK_LINE(25)
									bool tmp10 = (in_byteOffset < (int)0);		HX_STACK_VAR(tmp10,"tmp10");
									HX_STACK_LINE(25)
									if ((tmp10)){
										HX_STACK_LINE(25)
										HX_STACK_DO_THROW(::lime::utils::TAError_obj::RangeError);
									}
									HX_STACK_LINE(25)
									int tmp11 = hx::Mod(in_byteOffset,_this->bytesPerElement);		HX_STACK_VAR(tmp11,"tmp11");
									HX_STACK_LINE(25)
									bool tmp12 = (tmp11 != (int)0);		HX_STACK_VAR(tmp12,"tmp12");
									HX_STACK_LINE(25)
									if ((tmp12)){
										HX_STACK_LINE(25)
										HX_STACK_DO_THROW(::lime::utils::TAError_obj::RangeError);
									}
									HX_STACK_LINE(25)
									int tmp13 = hx::Throw(HX_CSTRING("Invalid field access on null object"));		HX_STACK_VAR(tmp13,"tmp13");
									HX_STACK_LINE(25)
									int bufferByteLength = tmp13;		HX_STACK_VAR(bufferByteLength,"bufferByteLength");
									HX_STACK_LINE(25)
									int elementSize = _this->bytesPerElement;		HX_STACK_VAR(elementSize,"elementSize");
									HX_STACK_LINE(25)
									int newByteLength = bufferByteLength;		HX_STACK_VAR(newByteLength,"newByteLength");
									HX_STACK_LINE(25)
									bool tmp14 = true;		HX_STACK_VAR(tmp14,"tmp14");
									HX_STACK_LINE(25)
									if ((tmp14)){
										HX_STACK_LINE(25)
										int tmp15 = (bufferByteLength - in_byteOffset);		HX_STACK_VAR(tmp15,"tmp15");
										HX_STACK_LINE(25)
										newByteLength = tmp15;
										HX_STACK_LINE(25)
										int tmp16 = hx::Mod(bufferByteLength,_this->bytesPerElement);		HX_STACK_VAR(tmp16,"tmp16");
										HX_STACK_LINE(25)
										bool tmp17 = (tmp16 != (int)0);		HX_STACK_VAR(tmp17,"tmp17");
										HX_STACK_LINE(25)
										if ((tmp17)){
											HX_STACK_LINE(25)
											HX_STACK_DO_THROW(::lime::utils::TAError_obj::RangeError);
										}
										HX_STACK_LINE(25)
										bool tmp18 = (newByteLength < (int)0);		HX_STACK_VAR(tmp18,"tmp18");
										HX_STACK_LINE(25)
										if ((tmp18)){
											HX_STACK_LINE(25)
											HX_STACK_DO_THROW(::lime::utils::TAError_obj::RangeError);
										}
									}
									else{
										HX_STACK_LINE(25)
										int tmp15 = (null() * _this->bytesPerElement);		HX_STACK_VAR(tmp15,"tmp15");
										HX_STACK_LINE(25)
										newByteLength = tmp15;
										HX_STACK_LINE(25)
										int tmp16 = (in_byteOffset + newByteLength);		HX_STACK_VAR(tmp16,"tmp16");
										HX_STACK_LINE(25)
										int newRange = tmp16;		HX_STACK_VAR(newRange,"newRange");
										HX_STACK_LINE(25)
										bool tmp17 = (newRange > bufferByteLength);		HX_STACK_VAR(tmp17,"tmp17");
										HX_STACK_LINE(25)
										if ((tmp17)){
											HX_STACK_LINE(25)
											HX_STACK_DO_THROW(::lime::utils::TAError_obj::RangeError);
										}
									}
									HX_STACK_LINE(25)
									_this->buffer = null();
									HX_STACK_LINE(25)
									_this->byteOffset = in_byteOffset;
									HX_STACK_LINE(25)
									_this->byteLength = newByteLength;
									HX_STACK_LINE(25)
									Float tmp15 = (Float(newByteLength) / Float(_this->bytesPerElement));		HX_STACK_VAR(tmp15,"tmp15");
									HX_STACK_LINE(25)
									int tmp16 = ::Std_obj::_int(tmp15);		HX_STACK_VAR(tmp16,"tmp16");
									HX_STACK_LINE(25)
									_this->length = tmp16;
									HX_STACK_LINE(25)
									tmp8 = _this;
								}
								HX_STACK_LINE(25)
								this2 = tmp8;
							}
							else{
								HX_STACK_LINE(25)
								HX_STACK_DO_THROW(HX_HCSTRING("Invalid constructor arguments for Float32Array","\x8e","\xc1","\xf4","\xd4"));
							}
						}
					}
				}
			}
			HX_STACK_LINE(25)
			tmp2 = this2;
		}
		HX_STACK_LINE(25)
		this1 = tmp2;
	}
	HX_STACK_LINE(17)
	::lime::utils::ArrayBufferView tmp2 = this1;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(17)
	return tmp2;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Matrix4_Impl__obj,_new,return )

Void Matrix4_Impl__obj::append( ::lime::utils::ArrayBufferView this1,::lime::utils::ArrayBufferView lhs){
{
		HX_STACK_FRAME("lime.math._Matrix4.Matrix4_Impl_","append",0x0e638262,"lime.math._Matrix4.Matrix4_Impl_.append","lime/math/Matrix4.hx",32,0xeb65dbd8)
		HX_STACK_ARG(this1,"this1")
		HX_STACK_ARG(lhs,"lhs")
		HX_STACK_LINE(34)
		Float tmp = ::__hxcpp_memory_get_float(this1->buffer->b,this1->byteOffset);		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(34)
		Float m111 = tmp;		HX_STACK_VAR(m111,"m111");
		HX_STACK_LINE(34)
		Float tmp1 = ::__hxcpp_memory_get_float(this1->buffer->b,(this1->byteOffset + (int)16));		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(34)
		Float m121 = tmp1;		HX_STACK_VAR(m121,"m121");
		HX_STACK_LINE(34)
		Float tmp2 = ::__hxcpp_memory_get_float(this1->buffer->b,(this1->byteOffset + (int)32));		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(34)
		Float m131 = tmp2;		HX_STACK_VAR(m131,"m131");
		HX_STACK_LINE(34)
		Float tmp3 = ::__hxcpp_memory_get_float(this1->buffer->b,(this1->byteOffset + (int)48));		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(34)
		Float m141 = tmp3;		HX_STACK_VAR(m141,"m141");
		HX_STACK_LINE(35)
		Float tmp4 = ::__hxcpp_memory_get_float(this1->buffer->b,(this1->byteOffset + (int)4));		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(35)
		Float m112 = tmp4;		HX_STACK_VAR(m112,"m112");
		HX_STACK_LINE(35)
		Float tmp5 = ::__hxcpp_memory_get_float(this1->buffer->b,(this1->byteOffset + (int)20));		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(35)
		Float m122 = tmp5;		HX_STACK_VAR(m122,"m122");
		HX_STACK_LINE(35)
		Float tmp6 = ::__hxcpp_memory_get_float(this1->buffer->b,(this1->byteOffset + (int)36));		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(35)
		Float m132 = tmp6;		HX_STACK_VAR(m132,"m132");
		HX_STACK_LINE(35)
		Float tmp7 = ::__hxcpp_memory_get_float(this1->buffer->b,(this1->byteOffset + (int)52));		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(35)
		Float m142 = tmp7;		HX_STACK_VAR(m142,"m142");
		HX_STACK_LINE(36)
		Float tmp8 = ::__hxcpp_memory_get_float(this1->buffer->b,(this1->byteOffset + (int)8));		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(36)
		Float m113 = tmp8;		HX_STACK_VAR(m113,"m113");
		HX_STACK_LINE(36)
		Float tmp9 = ::__hxcpp_memory_get_float(this1->buffer->b,(this1->byteOffset + (int)24));		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(36)
		Float m123 = tmp9;		HX_STACK_VAR(m123,"m123");
		HX_STACK_LINE(36)
		Float tmp10 = ::__hxcpp_memory_get_float(this1->buffer->b,(this1->byteOffset + (int)40));		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(36)
		Float m133 = tmp10;		HX_STACK_VAR(m133,"m133");
		HX_STACK_LINE(36)
		Float tmp11 = ::__hxcpp_memory_get_float(this1->buffer->b,(this1->byteOffset + (int)56));		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(36)
		Float m143 = tmp11;		HX_STACK_VAR(m143,"m143");
		HX_STACK_LINE(37)
		Float tmp12 = ::__hxcpp_memory_get_float(this1->buffer->b,(this1->byteOffset + (int)12));		HX_STACK_VAR(tmp12,"tmp12");
		HX_STACK_LINE(37)
		Float m114 = tmp12;		HX_STACK_VAR(m114,"m114");
		HX_STACK_LINE(37)
		Float tmp13 = ::__hxcpp_memory_get_float(this1->buffer->b,(this1->byteOffset + (int)28));		HX_STACK_VAR(tmp13,"tmp13");
		HX_STACK_LINE(37)
		Float m124 = tmp13;		HX_STACK_VAR(m124,"m124");
		HX_STACK_LINE(37)
		Float tmp14 = ::__hxcpp_memory_get_float(this1->buffer->b,(this1->byteOffset + (int)44));		HX_STACK_VAR(tmp14,"tmp14");
		HX_STACK_LINE(37)
		Float m134 = tmp14;		HX_STACK_VAR(m134,"m134");
		HX_STACK_LINE(37)
		Float tmp15 = ::__hxcpp_memory_get_float(this1->buffer->b,(this1->byteOffset + (int)60));		HX_STACK_VAR(tmp15,"tmp15");
		HX_STACK_LINE(37)
		Float m144 = tmp15;		HX_STACK_VAR(m144,"m144");
		HX_STACK_LINE(38)
		::lime::utils::ArrayBufferView tmp16 = lhs;		HX_STACK_VAR(tmp16,"tmp16");
		HX_STACK_LINE(38)
		Float tmp17 = ::lime::math::_Matrix4::Matrix4_Impl__obj::get(tmp16,(int)0);		HX_STACK_VAR(tmp17,"tmp17");
		HX_STACK_LINE(38)
		Float m211 = tmp17;		HX_STACK_VAR(m211,"m211");
		HX_STACK_LINE(38)
		::lime::utils::ArrayBufferView tmp18 = lhs;		HX_STACK_VAR(tmp18,"tmp18");
		HX_STACK_LINE(38)
		Float tmp19 = ::lime::math::_Matrix4::Matrix4_Impl__obj::get(tmp18,(int)4);		HX_STACK_VAR(tmp19,"tmp19");
		HX_STACK_LINE(38)
		Float m221 = tmp19;		HX_STACK_VAR(m221,"m221");
		HX_STACK_LINE(38)
		::lime::utils::ArrayBufferView tmp20 = lhs;		HX_STACK_VAR(tmp20,"tmp20");
		HX_STACK_LINE(38)
		Float tmp21 = ::lime::math::_Matrix4::Matrix4_Impl__obj::get(tmp20,(int)8);		HX_STACK_VAR(tmp21,"tmp21");
		HX_STACK_LINE(38)
		Float m231 = tmp21;		HX_STACK_VAR(m231,"m231");
		HX_STACK_LINE(38)
		::lime::utils::ArrayBufferView tmp22 = lhs;		HX_STACK_VAR(tmp22,"tmp22");
		HX_STACK_LINE(38)
		Float tmp23 = ::lime::math::_Matrix4::Matrix4_Impl__obj::get(tmp22,(int)12);		HX_STACK_VAR(tmp23,"tmp23");
		HX_STACK_LINE(38)
		Float m241 = tmp23;		HX_STACK_VAR(m241,"m241");
		HX_STACK_LINE(39)
		::lime::utils::ArrayBufferView tmp24 = lhs;		HX_STACK_VAR(tmp24,"tmp24");
		HX_STACK_LINE(39)
		Float tmp25 = ::lime::math::_Matrix4::Matrix4_Impl__obj::get(tmp24,(int)1);		HX_STACK_VAR(tmp25,"tmp25");
		HX_STACK_LINE(39)
		Float m212 = tmp25;		HX_STACK_VAR(m212,"m212");
		HX_STACK_LINE(39)
		::lime::utils::ArrayBufferView tmp26 = lhs;		HX_STACK_VAR(tmp26,"tmp26");
		HX_STACK_LINE(39)
		Float tmp27 = ::lime::math::_Matrix4::Matrix4_Impl__obj::get(tmp26,(int)5);		HX_STACK_VAR(tmp27,"tmp27");
		HX_STACK_LINE(39)
		Float m222 = tmp27;		HX_STACK_VAR(m222,"m222");
		HX_STACK_LINE(39)
		::lime::utils::ArrayBufferView tmp28 = lhs;		HX_STACK_VAR(tmp28,"tmp28");
		HX_STACK_LINE(39)
		Float tmp29 = ::lime::math::_Matrix4::Matrix4_Impl__obj::get(tmp28,(int)9);		HX_STACK_VAR(tmp29,"tmp29");
		HX_STACK_LINE(39)
		Float m232 = tmp29;		HX_STACK_VAR(m232,"m232");
		HX_STACK_LINE(39)
		::lime::utils::ArrayBufferView tmp30 = lhs;		HX_STACK_VAR(tmp30,"tmp30");
		HX_STACK_LINE(39)
		Float tmp31 = ::lime::math::_Matrix4::Matrix4_Impl__obj::get(tmp30,(int)13);		HX_STACK_VAR(tmp31,"tmp31");
		HX_STACK_LINE(39)
		Float m242 = tmp31;		HX_STACK_VAR(m242,"m242");
		HX_STACK_LINE(40)
		::lime::utils::ArrayBufferView tmp32 = lhs;		HX_STACK_VAR(tmp32,"tmp32");
		HX_STACK_LINE(40)
		Float tmp33 = ::lime::math::_Matrix4::Matrix4_Impl__obj::get(tmp32,(int)2);		HX_STACK_VAR(tmp33,"tmp33");
		HX_STACK_LINE(40)
		Float m213 = tmp33;		HX_STACK_VAR(m213,"m213");
		HX_STACK_LINE(40)
		::lime::utils::ArrayBufferView tmp34 = lhs;		HX_STACK_VAR(tmp34,"tmp34");
		HX_STACK_LINE(40)
		Float tmp35 = ::lime::math::_Matrix4::Matrix4_Impl__obj::get(tmp34,(int)6);		HX_STACK_VAR(tmp35,"tmp35");
		HX_STACK_LINE(40)
		Float m223 = tmp35;		HX_STACK_VAR(m223,"m223");
		HX_STACK_LINE(40)
		::lime::utils::ArrayBufferView tmp36 = lhs;		HX_STACK_VAR(tmp36,"tmp36");
		HX_STACK_LINE(40)
		Float tmp37 = ::lime::math::_Matrix4::Matrix4_Impl__obj::get(tmp36,(int)10);		HX_STACK_VAR(tmp37,"tmp37");
		HX_STACK_LINE(40)
		Float m233 = tmp37;		HX_STACK_VAR(m233,"m233");
		HX_STACK_LINE(40)
		::lime::utils::ArrayBufferView tmp38 = lhs;		HX_STACK_VAR(tmp38,"tmp38");
		HX_STACK_LINE(40)
		Float tmp39 = ::lime::math::_Matrix4::Matrix4_Impl__obj::get(tmp38,(int)14);		HX_STACK_VAR(tmp39,"tmp39");
		HX_STACK_LINE(40)
		Float m243 = tmp39;		HX_STACK_VAR(m243,"m243");
		HX_STACK_LINE(41)
		::lime::utils::ArrayBufferView tmp40 = lhs;		HX_STACK_VAR(tmp40,"tmp40");
		HX_STACK_LINE(41)
		Float tmp41 = ::lime::math::_Matrix4::Matrix4_Impl__obj::get(tmp40,(int)3);		HX_STACK_VAR(tmp41,"tmp41");
		HX_STACK_LINE(41)
		Float m214 = tmp41;		HX_STACK_VAR(m214,"m214");
		HX_STACK_LINE(41)
		::lime::utils::ArrayBufferView tmp42 = lhs;		HX_STACK_VAR(tmp42,"tmp42");
		HX_STACK_LINE(41)
		Float tmp43 = ::lime::math::_Matrix4::Matrix4_Impl__obj::get(tmp42,(int)7);		HX_STACK_VAR(tmp43,"tmp43");
		HX_STACK_LINE(41)
		Float m224 = tmp43;		HX_STACK_VAR(m224,"m224");
		HX_STACK_LINE(41)
		::lime::utils::ArrayBufferView tmp44 = lhs;		HX_STACK_VAR(tmp44,"tmp44");
		HX_STACK_LINE(41)
		Float tmp45 = ::lime::math::_Matrix4::Matrix4_Impl__obj::get(tmp44,(int)11);		HX_STACK_VAR(tmp45,"tmp45");
		HX_STACK_LINE(41)
		Float m234 = tmp45;		HX_STACK_VAR(m234,"m234");
		HX_STACK_LINE(41)
		::lime::utils::ArrayBufferView tmp46 = lhs;		HX_STACK_VAR(tmp46,"tmp46");
		HX_STACK_LINE(41)
		Float tmp47 = ::lime::math::_Matrix4::Matrix4_Impl__obj::get(tmp46,(int)15);		HX_STACK_VAR(tmp47,"tmp47");
		HX_STACK_LINE(41)
		Float m244 = tmp47;		HX_STACK_VAR(m244,"m244");
		HX_STACK_LINE(43)
		{
			HX_STACK_LINE(43)
			Float tmp48 = (m111 * m211);		HX_STACK_VAR(tmp48,"tmp48");
			HX_STACK_LINE(43)
			Float tmp49 = (m112 * m221);		HX_STACK_VAR(tmp49,"tmp49");
			HX_STACK_LINE(43)
			Float tmp50 = (tmp48 + tmp49);		HX_STACK_VAR(tmp50,"tmp50");
			HX_STACK_LINE(43)
			Float tmp51 = (m113 * m231);		HX_STACK_VAR(tmp51,"tmp51");
			HX_STACK_LINE(43)
			Float tmp52 = (tmp50 + tmp51);		HX_STACK_VAR(tmp52,"tmp52");
			HX_STACK_LINE(43)
			Float tmp53 = (m114 * m241);		HX_STACK_VAR(tmp53,"tmp53");
			HX_STACK_LINE(43)
			Float tmp54 = (tmp52 + tmp53);		HX_STACK_VAR(tmp54,"tmp54");
			HX_STACK_LINE(43)
			Float val = tmp54;		HX_STACK_VAR(val,"val");
			HX_STACK_LINE(43)
			::__hxcpp_memory_set_float(this1->buffer->b,this1->byteOffset,val);
			HX_STACK_LINE(43)
			val;
		}
		HX_STACK_LINE(44)
		{
			HX_STACK_LINE(44)
			Float tmp48 = (m111 * m212);		HX_STACK_VAR(tmp48,"tmp48");
			HX_STACK_LINE(44)
			Float tmp49 = (m112 * m222);		HX_STACK_VAR(tmp49,"tmp49");
			HX_STACK_LINE(44)
			Float tmp50 = (tmp48 + tmp49);		HX_STACK_VAR(tmp50,"tmp50");
			HX_STACK_LINE(44)
			Float tmp51 = (m113 * m232);		HX_STACK_VAR(tmp51,"tmp51");
			HX_STACK_LINE(44)
			Float tmp52 = (tmp50 + tmp51);		HX_STACK_VAR(tmp52,"tmp52");
			HX_STACK_LINE(44)
			Float tmp53 = (m114 * m242);		HX_STACK_VAR(tmp53,"tmp53");
			HX_STACK_LINE(44)
			Float tmp54 = (tmp52 + tmp53);		HX_STACK_VAR(tmp54,"tmp54");
			HX_STACK_LINE(44)
			Float val = tmp54;		HX_STACK_VAR(val,"val");
			HX_STACK_LINE(44)
			::__hxcpp_memory_set_float(this1->buffer->b,(this1->byteOffset + (int)4),val);
			HX_STACK_LINE(44)
			val;
		}
		HX_STACK_LINE(45)
		{
			HX_STACK_LINE(45)
			Float tmp48 = (m111 * m213);		HX_STACK_VAR(tmp48,"tmp48");
			HX_STACK_LINE(45)
			Float tmp49 = (m112 * m223);		HX_STACK_VAR(tmp49,"tmp49");
			HX_STACK_LINE(45)
			Float tmp50 = (tmp48 + tmp49);		HX_STACK_VAR(tmp50,"tmp50");
			HX_STACK_LINE(45)
			Float tmp51 = (m113 * m233);		HX_STACK_VAR(tmp51,"tmp51");
			HX_STACK_LINE(45)
			Float tmp52 = (tmp50 + tmp51);		HX_STACK_VAR(tmp52,"tmp52");
			HX_STACK_LINE(45)
			Float tmp53 = (m114 * m243);		HX_STACK_VAR(tmp53,"tmp53");
			HX_STACK_LINE(45)
			Float tmp54 = (tmp52 + tmp53);		HX_STACK_VAR(tmp54,"tmp54");
			HX_STACK_LINE(45)
			Float val = tmp54;		HX_STACK_VAR(val,"val");
			HX_STACK_LINE(45)
			::__hxcpp_memory_set_float(this1->buffer->b,(this1->byteOffset + (int)8),val);
			HX_STACK_LINE(45)
			val;
		}
		HX_STACK_LINE(46)
		{
			HX_STACK_LINE(46)
			Float tmp48 = (m111 * m214);		HX_STACK_VAR(tmp48,"tmp48");
			HX_STACK_LINE(46)
			Float tmp49 = (m112 * m224);		HX_STACK_VAR(tmp49,"tmp49");
			HX_STACK_LINE(46)
			Float tmp50 = (tmp48 + tmp49);		HX_STACK_VAR(tmp50,"tmp50");
			HX_STACK_LINE(46)
			Float tmp51 = (m113 * m234);		HX_STACK_VAR(tmp51,"tmp51");
			HX_STACK_LINE(46)
			Float tmp52 = (tmp50 + tmp51);		HX_STACK_VAR(tmp52,"tmp52");
			HX_STACK_LINE(46)
			Float tmp53 = (m114 * m244);		HX_STACK_VAR(tmp53,"tmp53");
			HX_STACK_LINE(46)
			Float tmp54 = (tmp52 + tmp53);		HX_STACK_VAR(tmp54,"tmp54");
			HX_STACK_LINE(46)
			Float val = tmp54;		HX_STACK_VAR(val,"val");
			HX_STACK_LINE(46)
			::__hxcpp_memory_set_float(this1->buffer->b,(this1->byteOffset + (int)12),val);
			HX_STACK_LINE(46)
			val;
		}
		HX_STACK_LINE(48)
		{
			HX_STACK_LINE(48)
			Float tmp48 = (m121 * m211);		HX_STACK_VAR(tmp48,"tmp48");
			HX_STACK_LINE(48)
			Float tmp49 = (m122 * m221);		HX_STACK_VAR(tmp49,"tmp49");
			HX_STACK_LINE(48)
			Float tmp50 = (tmp48 + tmp49);		HX_STACK_VAR(tmp50,"tmp50");
			HX_STACK_LINE(48)
			Float tmp51 = (m123 * m231);		HX_STACK_VAR(tmp51,"tmp51");
			HX_STACK_LINE(48)
			Float tmp52 = (tmp50 + tmp51);		HX_STACK_VAR(tmp52,"tmp52");
			HX_STACK_LINE(48)
			Float tmp53 = (m124 * m241);		HX_STACK_VAR(tmp53,"tmp53");
			HX_STACK_LINE(48)
			Float tmp54 = (tmp52 + tmp53);		HX_STACK_VAR(tmp54,"tmp54");
			HX_STACK_LINE(48)
			Float val = tmp54;		HX_STACK_VAR(val,"val");
			HX_STACK_LINE(48)
			::__hxcpp_memory_set_float(this1->buffer->b,(this1->byteOffset + (int)16),val);
			HX_STACK_LINE(48)
			val;
		}
		HX_STACK_LINE(49)
		{
			HX_STACK_LINE(49)
			Float tmp48 = (m121 * m212);		HX_STACK_VAR(tmp48,"tmp48");
			HX_STACK_LINE(49)
			Float tmp49 = (m122 * m222);		HX_STACK_VAR(tmp49,"tmp49");
			HX_STACK_LINE(49)
			Float tmp50 = (tmp48 + tmp49);		HX_STACK_VAR(tmp50,"tmp50");
			HX_STACK_LINE(49)
			Float tmp51 = (m123 * m232);		HX_STACK_VAR(tmp51,"tmp51");
			HX_STACK_LINE(49)
			Float tmp52 = (tmp50 + tmp51);		HX_STACK_VAR(tmp52,"tmp52");
			HX_STACK_LINE(49)
			Float tmp53 = (m124 * m242);		HX_STACK_VAR(tmp53,"tmp53");
			HX_STACK_LINE(49)
			Float tmp54 = (tmp52 + tmp53);		HX_STACK_VAR(tmp54,"tmp54");
			HX_STACK_LINE(49)
			Float val = tmp54;		HX_STACK_VAR(val,"val");
			HX_STACK_LINE(49)
			::__hxcpp_memory_set_float(this1->buffer->b,(this1->byteOffset + (int)20),val);
			HX_STACK_LINE(49)
			val;
		}
		HX_STACK_LINE(50)
		{
			HX_STACK_LINE(50)
			Float tmp48 = (m121 * m213);		HX_STACK_VAR(tmp48,"tmp48");
			HX_STACK_LINE(50)
			Float tmp49 = (m122 * m223);		HX_STACK_VAR(tmp49,"tmp49");
			HX_STACK_LINE(50)
			Float tmp50 = (tmp48 + tmp49);		HX_STACK_VAR(tmp50,"tmp50");
			HX_STACK_LINE(50)
			Float tmp51 = (m123 * m233);		HX_STACK_VAR(tmp51,"tmp51");
			HX_STACK_LINE(50)
			Float tmp52 = (tmp50 + tmp51);		HX_STACK_VAR(tmp52,"tmp52");
			HX_STACK_LINE(50)
			Float tmp53 = (m124 * m243);		HX_STACK_VAR(tmp53,"tmp53");
			HX_STACK_LINE(50)
			Float tmp54 = (tmp52 + tmp53);		HX_STACK_VAR(tmp54,"tmp54");
			HX_STACK_LINE(50)
			Float val = tmp54;		HX_STACK_VAR(val,"val");
			HX_STACK_LINE(50)
			::__hxcpp_memory_set_float(this1->buffer->b,(this1->byteOffset + (int)24),val);
			HX_STACK_LINE(50)
			val;
		}
		HX_STACK_LINE(51)
		{
			HX_STACK_LINE(51)
			Float tmp48 = (m121 * m214);		HX_STACK_VAR(tmp48,"tmp48");
			HX_STACK_LINE(51)
			Float tmp49 = (m122 * m224);		HX_STACK_VAR(tmp49,"tmp49");
			HX_STACK_LINE(51)
			Float tmp50 = (tmp48 + tmp49);		HX_STACK_VAR(tmp50,"tmp50");
			HX_STACK_LINE(51)
			Float tmp51 = (m123 * m234);		HX_STACK_VAR(tmp51,"tmp51");
			HX_STACK_LINE(51)
			Float tmp52 = (tmp50 + tmp51);		HX_STACK_VAR(tmp52,"tmp52");
			HX_STACK_LINE(51)
			Float tmp53 = (m124 * m244);		HX_STACK_VAR(tmp53,"tmp53");
			HX_STACK_LINE(51)
			Float tmp54 = (tmp52 + tmp53);		HX_STACK_VAR(tmp54,"tmp54");
			HX_STACK_LINE(51)
			Float val = tmp54;		HX_STACK_VAR(val,"val");
			HX_STACK_LINE(51)
			::__hxcpp_memory_set_float(this1->buffer->b,(this1->byteOffset + (int)28),val);
			HX_STACK_LINE(51)
			val;
		}
		HX_STACK_LINE(53)
		{
			HX_STACK_LINE(53)
			Float tmp48 = (m131 * m211);		HX_STACK_VAR(tmp48,"tmp48");
			HX_STACK_LINE(53)
			Float tmp49 = (m132 * m221);		HX_STACK_VAR(tmp49,"tmp49");
			HX_STACK_LINE(53)
			Float tmp50 = (tmp48 + tmp49);		HX_STACK_VAR(tmp50,"tmp50");
			HX_STACK_LINE(53)
			Float tmp51 = (m133 * m231);		HX_STACK_VAR(tmp51,"tmp51");
			HX_STACK_LINE(53)
			Float tmp52 = (tmp50 + tmp51);		HX_STACK_VAR(tmp52,"tmp52");
			HX_STACK_LINE(53)
			Float tmp53 = (m134 * m241);		HX_STACK_VAR(tmp53,"tmp53");
			HX_STACK_LINE(53)
			Float tmp54 = (tmp52 + tmp53);		HX_STACK_VAR(tmp54,"tmp54");
			HX_STACK_LINE(53)
			Float val = tmp54;		HX_STACK_VAR(val,"val");
			HX_STACK_LINE(53)
			::__hxcpp_memory_set_float(this1->buffer->b,(this1->byteOffset + (int)32),val);
			HX_STACK_LINE(53)
			val;
		}
		HX_STACK_LINE(54)
		{
			HX_STACK_LINE(54)
			Float tmp48 = (m131 * m212);		HX_STACK_VAR(tmp48,"tmp48");
			HX_STACK_LINE(54)
			Float tmp49 = (m132 * m222);		HX_STACK_VAR(tmp49,"tmp49");
			HX_STACK_LINE(54)
			Float tmp50 = (tmp48 + tmp49);		HX_STACK_VAR(tmp50,"tmp50");
			HX_STACK_LINE(54)
			Float tmp51 = (m133 * m232);		HX_STACK_VAR(tmp51,"tmp51");
			HX_STACK_LINE(54)
			Float tmp52 = (tmp50 + tmp51);		HX_STACK_VAR(tmp52,"tmp52");
			HX_STACK_LINE(54)
			Float tmp53 = (m134 * m242);		HX_STACK_VAR(tmp53,"tmp53");
			HX_STACK_LINE(54)
			Float tmp54 = (tmp52 + tmp53);		HX_STACK_VAR(tmp54,"tmp54");
			HX_STACK_LINE(54)
			Float val = tmp54;		HX_STACK_VAR(val,"val");
			HX_STACK_LINE(54)
			::__hxcpp_memory_set_float(this1->buffer->b,(this1->byteOffset + (int)36),val);
			HX_STACK_LINE(54)
			val;
		}
		HX_STACK_LINE(55)
		{
			HX_STACK_LINE(55)
			Float tmp48 = (m131 * m213);		HX_STACK_VAR(tmp48,"tmp48");
			HX_STACK_LINE(55)
			Float tmp49 = (m132 * m223);		HX_STACK_VAR(tmp49,"tmp49");
			HX_STACK_LINE(55)
			Float tmp50 = (tmp48 + tmp49);		HX_STACK_VAR(tmp50,"tmp50");
			HX_STACK_LINE(55)
			Float tmp51 = (m133 * m233);		HX_STACK_VAR(tmp51,"tmp51");
			HX_STACK_LINE(55)
			Float tmp52 = (tmp50 + tmp51);		HX_STACK_VAR(tmp52,"tmp52");
			HX_STACK_LINE(55)
			Float tmp53 = (m134 * m243);		HX_STACK_VAR(tmp53,"tmp53");
			HX_STACK_LINE(55)
			Float tmp54 = (tmp52 + tmp53);		HX_STACK_VAR(tmp54,"tmp54");
			HX_STACK_LINE(55)
			Float val = tmp54;		HX_STACK_VAR(val,"val");
			HX_STACK_LINE(55)
			::__hxcpp_memory_set_float(this1->buffer->b,(this1->byteOffset + (int)40),val);
			HX_STACK_LINE(55)
			val;
		}
		HX_STACK_LINE(56)
		{
			HX_STACK_LINE(56)
			Float tmp48 = (m131 * m214);		HX_STACK_VAR(tmp48,"tmp48");
			HX_STACK_LINE(56)
			Float tmp49 = (m132 * m224);		HX_STACK_VAR(tmp49,"tmp49");
			HX_STACK_LINE(56)
			Float tmp50 = (tmp48 + tmp49);		HX_STACK_VAR(tmp50,"tmp50");
			HX_STACK_LINE(56)
			Float tmp51 = (m133 * m234);		HX_STACK_VAR(tmp51,"tmp51");
			HX_STACK_LINE(56)
			Float tmp52 = (tmp50 + tmp51);		HX_STACK_VAR(tmp52,"tmp52");
			HX_STACK_LINE(56)
			Float tmp53 = (m134 * m244);		HX_STACK_VAR(tmp53,"tmp53");
			HX_STACK_LINE(56)
			Float tmp54 = (tmp52 + tmp53);		HX_STACK_VAR(tmp54,"tmp54");
			HX_STACK_LINE(56)
			Float val = tmp54;		HX_STACK_VAR(val,"val");
			HX_STACK_LINE(56)
			::__hxcpp_memory_set_float(this1->buffer->b,(this1->byteOffset + (int)44),val);
			HX_STACK_LINE(56)
			val;
		}
		HX_STACK_LINE(58)
		{
			HX_STACK_LINE(58)
			Float tmp48 = (m141 * m211);		HX_STACK_VAR(tmp48,"tmp48");
			HX_STACK_LINE(58)
			Float tmp49 = (m142 * m221);		HX_STACK_VAR(tmp49,"tmp49");
			HX_STACK_LINE(58)
			Float tmp50 = (tmp48 + tmp49);		HX_STACK_VAR(tmp50,"tmp50");
			HX_STACK_LINE(58)
			Float tmp51 = (m143 * m231);		HX_STACK_VAR(tmp51,"tmp51");
			HX_STACK_LINE(58)
			Float tmp52 = (tmp50 + tmp51);		HX_STACK_VAR(tmp52,"tmp52");
			HX_STACK_LINE(58)
			Float tmp53 = (m144 * m241);		HX_STACK_VAR(tmp53,"tmp53");
			HX_STACK_LINE(58)
			Float tmp54 = (tmp52 + tmp53);		HX_STACK_VAR(tmp54,"tmp54");
			HX_STACK_LINE(58)
			Float val = tmp54;		HX_STACK_VAR(val,"val");
			HX_STACK_LINE(58)
			::__hxcpp_memory_set_float(this1->buffer->b,(this1->byteOffset + (int)48),val);
			HX_STACK_LINE(58)
			val;
		}
		HX_STACK_LINE(59)
		{
			HX_STACK_LINE(59)
			Float tmp48 = (m141 * m212);		HX_STACK_VAR(tmp48,"tmp48");
			HX_STACK_LINE(59)
			Float tmp49 = (m142 * m222);		HX_STACK_VAR(tmp49,"tmp49");
			HX_STACK_LINE(59)
			Float tmp50 = (tmp48 + tmp49);		HX_STACK_VAR(tmp50,"tmp50");
			HX_STACK_LINE(59)
			Float tmp51 = (m143 * m232);		HX_STACK_VAR(tmp51,"tmp51");
			HX_STACK_LINE(59)
			Float tmp52 = (tmp50 + tmp51);		HX_STACK_VAR(tmp52,"tmp52");
			HX_STACK_LINE(59)
			Float tmp53 = (m144 * m242);		HX_STACK_VAR(tmp53,"tmp53");
			HX_STACK_LINE(59)
			Float tmp54 = (tmp52 + tmp53);		HX_STACK_VAR(tmp54,"tmp54");
			HX_STACK_LINE(59)
			Float val = tmp54;		HX_STACK_VAR(val,"val");
			HX_STACK_LINE(59)
			::__hxcpp_memory_set_float(this1->buffer->b,(this1->byteOffset + (int)52),val);
			HX_STACK_LINE(59)
			val;
		}
		HX_STACK_LINE(60)
		{
			HX_STACK_LINE(60)
			Float tmp48 = (m141 * m213);		HX_STACK_VAR(tmp48,"tmp48");
			HX_STACK_LINE(60)
			Float tmp49 = (m142 * m223);		HX_STACK_VAR(tmp49,"tmp49");
			HX_STACK_LINE(60)
			Float tmp50 = (tmp48 + tmp49);		HX_STACK_VAR(tmp50,"tmp50");
			HX_STACK_LINE(60)
			Float tmp51 = (m143 * m233);		HX_STACK_VAR(tmp51,"tmp51");
			HX_STACK_LINE(60)
			Float tmp52 = (tmp50 + tmp51);		HX_STACK_VAR(tmp52,"tmp52");
			HX_STACK_LINE(60)
			Float tmp53 = (m144 * m243);		HX_STACK_VAR(tmp53,"tmp53");
			HX_STACK_LINE(60)
			Float tmp54 = (tmp52 + tmp53);		HX_STACK_VAR(tmp54,"tmp54");
			HX_STACK_LINE(60)
			Float val = tmp54;		HX_STACK_VAR(val,"val");
			HX_STACK_LINE(60)
			::__hxcpp_memory_set_float(this1->buffer->b,(this1->byteOffset + (int)56),val);
			HX_STACK_LINE(60)
			val;
		}
		HX_STACK_LINE(61)
		{
			HX_STACK_LINE(61)
			Float tmp48 = (m141 * m214);		HX_STACK_VAR(tmp48,"tmp48");
			HX_STACK_LINE(61)
			Float tmp49 = (m142 * m224);		HX_STACK_VAR(tmp49,"tmp49");
			HX_STACK_LINE(61)
			Float tmp50 = (tmp48 + tmp49);		HX_STACK_VAR(tmp50,"tmp50");
			HX_STACK_LINE(61)
			Float tmp51 = (m143 * m234);		HX_STACK_VAR(tmp51,"tmp51");
			HX_STACK_LINE(61)
			Float tmp52 = (tmp50 + tmp51);		HX_STACK_VAR(tmp52,"tmp52");
			HX_STACK_LINE(61)
			Float tmp53 = (m144 * m244);		HX_STACK_VAR(tmp53,"tmp53");
			HX_STACK_LINE(61)
			Float tmp54 = (tmp52 + tmp53);		HX_STACK_VAR(tmp54,"tmp54");
			HX_STACK_LINE(61)
			Float val = tmp54;		HX_STACK_VAR(val,"val");
			HX_STACK_LINE(61)
			::__hxcpp_memory_set_float(this1->buffer->b,(this1->byteOffset + (int)60),val);
			HX_STACK_LINE(61)
			val;
		}
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(Matrix4_Impl__obj,append,(void))

Void Matrix4_Impl__obj::appendRotation( ::lime::utils::ArrayBufferView this1,Float degrees,::lime::math::Vector4 axis,::lime::math::Vector4 pivotPoint){
{
		HX_STACK_FRAME("lime.math._Matrix4.Matrix4_Impl_","appendRotation",0xe357adc0,"lime.math._Matrix4.Matrix4_Impl_.appendRotation","lime/math/Matrix4.hx",66,0xeb65dbd8)
		HX_STACK_ARG(this1,"this1")
		HX_STACK_ARG(degrees,"degrees")
		HX_STACK_ARG(axis,"axis")
		HX_STACK_ARG(pivotPoint,"pivotPoint")
		HX_STACK_LINE(68)
		::lime::utils::ArrayBufferView tmp = this1;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(68)
		Float tmp1 = axis->x;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(68)
		Float tmp2 = axis->y;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(68)
		Float tmp3 = axis->z;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(68)
		Float tmp4 = degrees;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(68)
		::lime::utils::ArrayBufferView tmp5 = ::lime::math::_Matrix4::Matrix4_Impl__obj::__getAxisRotation(tmp,tmp1,tmp2,tmp3,tmp4);		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(68)
		::lime::utils::ArrayBufferView m = tmp5;		HX_STACK_VAR(m,"m");
		HX_STACK_LINE(70)
		bool tmp6 = (pivotPoint != null());		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(70)
		if ((tmp6)){
			HX_STACK_LINE(72)
			::lime::math::Vector4 p = pivotPoint;		HX_STACK_VAR(p,"p");
			HX_STACK_LINE(73)
			::lime::utils::ArrayBufferView tmp7 = m;		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(73)
			Float tmp8 = p->x;		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(73)
			Float tmp9 = p->y;		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(73)
			Float tmp10 = p->z;		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(73)
			::lime::math::_Matrix4::Matrix4_Impl__obj::appendTranslation(tmp7,tmp8,tmp9,tmp10);
		}
		HX_STACK_LINE(77)
		::lime::utils::ArrayBufferView tmp7 = this1;		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(77)
		::lime::utils::ArrayBufferView tmp8 = m;		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(77)
		::lime::math::_Matrix4::Matrix4_Impl__obj::append(tmp7,tmp8);
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC4(Matrix4_Impl__obj,appendRotation,(void))

Void Matrix4_Impl__obj::appendScale( ::lime::utils::ArrayBufferView this1,Float xScale,Float yScale,Float zScale){
{
		HX_STACK_FRAME("lime.math._Matrix4.Matrix4_Impl_","appendScale",0x8a9ad8c8,"lime.math._Matrix4.Matrix4_Impl_.appendScale","lime/math/Matrix4.hx",82,0xeb65dbd8)
		HX_STACK_ARG(this1,"this1")
		HX_STACK_ARG(xScale,"xScale")
		HX_STACK_ARG(yScale,"yScale")
		HX_STACK_ARG(zScale,"zScale")
		HX_STACK_LINE(84)
		::lime::utils::ArrayBufferView tmp = this1;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(84)
		::lime::utils::ArrayBufferView tmp1;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(84)
		{
			HX_STACK_LINE(84)
			cpp::ArrayBase array = Array_obj< Float >::__new().Add(xScale).Add(((Float)0.0)).Add(((Float)0.0)).Add(((Float)0.0)).Add(((Float)0.0)).Add(yScale).Add(((Float)0.0)).Add(((Float)0.0)).Add(((Float)0.0)).Add(((Float)0.0)).Add(zScale).Add(((Float)0.0)).Add(((Float)0.0)).Add(((Float)0.0)).Add(((Float)0.0)).Add(((Float)1.0));		HX_STACK_VAR(array,"array");
			HX_STACK_LINE(84)
			::lime::utils::ArrayBufferView this2;		HX_STACK_VAR(this2,"this2");
			HX_STACK_LINE(84)
			bool tmp2 = false;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(84)
			if ((tmp2)){
				HX_STACK_LINE(84)
				::lime::utils::ArrayBufferView tmp3 = ::lime::utils::ArrayBufferView_obj::__new(null(),(int)8);		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(84)
				this2 = tmp3;
			}
			else{
				HX_STACK_LINE(84)
				bool tmp3 = (array != null());		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(84)
				if ((tmp3)){
					HX_STACK_LINE(84)
					::lime::utils::ArrayBufferView tmp4;		HX_STACK_VAR(tmp4,"tmp4");
					HX_STACK_LINE(84)
					{
						HX_STACK_LINE(84)
						::lime::utils::ArrayBufferView tmp5 = ::lime::utils::ArrayBufferView_obj::__new((int)0,(int)8);		HX_STACK_VAR(tmp5,"tmp5");
						HX_STACK_LINE(84)
						::lime::utils::ArrayBufferView _this = tmp5;		HX_STACK_VAR(_this,"_this");
						HX_STACK_LINE(84)
						_this->byteOffset = (int)0;
						HX_STACK_LINE(84)
						_this->length = array->__Field(HX_HCSTRING("length","\xe6","\x94","\x07","\x9f"), hx::paccDynamic );
						HX_STACK_LINE(84)
						int tmp6 = (_this->length * _this->bytesPerElement);		HX_STACK_VAR(tmp6,"tmp6");
						HX_STACK_LINE(84)
						_this->byteLength = tmp6;
						HX_STACK_LINE(84)
						::haxe::io::Bytes tmp7;		HX_STACK_VAR(tmp7,"tmp7");
						HX_STACK_LINE(84)
						{
							HX_STACK_LINE(84)
							::haxe::io::Bytes this3;		HX_STACK_VAR(this3,"this3");
							HX_STACK_LINE(84)
							int tmp8 = _this->byteLength;		HX_STACK_VAR(tmp8,"tmp8");
							HX_STACK_LINE(84)
							::haxe::io::Bytes tmp9 = ::haxe::io::Bytes_obj::alloc(tmp8);		HX_STACK_VAR(tmp9,"tmp9");
							HX_STACK_LINE(84)
							this3 = tmp9;
							HX_STACK_LINE(84)
							tmp7 = this3;
						}
						HX_STACK_LINE(84)
						_this->buffer = tmp7;
						HX_STACK_LINE(84)
						_this->copyFromArray(((Array< Float >)(array)),null());
						HX_STACK_LINE(84)
						tmp4 = _this;
					}
					HX_STACK_LINE(84)
					this2 = tmp4;
				}
				else{
					HX_STACK_LINE(84)
					bool tmp4 = false;		HX_STACK_VAR(tmp4,"tmp4");
					HX_STACK_LINE(84)
					if ((tmp4)){
						HX_STACK_LINE(84)
						::lime::utils::ArrayBufferView tmp5;		HX_STACK_VAR(tmp5,"tmp5");
						HX_STACK_LINE(84)
						{
							HX_STACK_LINE(84)
							::lime::utils::ArrayBufferView tmp6 = ::lime::utils::ArrayBufferView_obj::__new((int)0,(int)8);		HX_STACK_VAR(tmp6,"tmp6");
							HX_STACK_LINE(84)
							::lime::utils::ArrayBufferView _this = tmp6;		HX_STACK_VAR(_this,"_this");
							HX_STACK_LINE(84)
							cpp::ArrayBase array1 = hx::Throw(HX_CSTRING("Invalid field access on null object"));		HX_STACK_VAR(array1,"array1");
							HX_STACK_LINE(84)
							_this->byteOffset = (int)0;
							HX_STACK_LINE(84)
							_this->length = array1->__Field(HX_HCSTRING("length","\xe6","\x94","\x07","\x9f"), hx::paccDynamic );
							HX_STACK_LINE(84)
							int tmp7 = (_this->length * _this->bytesPerElement);		HX_STACK_VAR(tmp7,"tmp7");
							HX_STACK_LINE(84)
							_this->byteLength = tmp7;
							HX_STACK_LINE(84)
							::haxe::io::Bytes tmp8;		HX_STACK_VAR(tmp8,"tmp8");
							HX_STACK_LINE(84)
							{
								HX_STACK_LINE(84)
								::haxe::io::Bytes this3;		HX_STACK_VAR(this3,"this3");
								HX_STACK_LINE(84)
								int tmp9 = _this->byteLength;		HX_STACK_VAR(tmp9,"tmp9");
								HX_STACK_LINE(84)
								::haxe::io::Bytes tmp10 = ::haxe::io::Bytes_obj::alloc(tmp9);		HX_STACK_VAR(tmp10,"tmp10");
								HX_STACK_LINE(84)
								this3 = tmp10;
								HX_STACK_LINE(84)
								tmp8 = this3;
							}
							HX_STACK_LINE(84)
							_this->buffer = tmp8;
							HX_STACK_LINE(84)
							_this->copyFromArray(((Array< Float >)(array1)),null());
							HX_STACK_LINE(84)
							tmp5 = _this;
						}
						HX_STACK_LINE(84)
						this2 = tmp5;
					}
					else{
						HX_STACK_LINE(84)
						bool tmp5 = false;		HX_STACK_VAR(tmp5,"tmp5");
						HX_STACK_LINE(84)
						if ((tmp5)){
							HX_STACK_LINE(84)
							::lime::utils::ArrayBufferView tmp6;		HX_STACK_VAR(tmp6,"tmp6");
							HX_STACK_LINE(84)
							{
								HX_STACK_LINE(84)
								::lime::utils::ArrayBufferView tmp7 = ::lime::utils::ArrayBufferView_obj::__new((int)0,(int)8);		HX_STACK_VAR(tmp7,"tmp7");
								HX_STACK_LINE(84)
								::lime::utils::ArrayBufferView _this = tmp7;		HX_STACK_VAR(_this,"_this");
								HX_STACK_LINE(84)
								::haxe::io::Bytes tmp8 = hx::Throw(HX_CSTRING("Invalid field access on null object"));		HX_STACK_VAR(tmp8,"tmp8");
								HX_STACK_LINE(84)
								::haxe::io::Bytes srcData = tmp8;		HX_STACK_VAR(srcData,"srcData");
								HX_STACK_LINE(84)
								int tmp9 = hx::Throw(HX_CSTRING("Invalid field access on null object"));		HX_STACK_VAR(tmp9,"tmp9");
								HX_STACK_LINE(84)
								int srcLength = tmp9;		HX_STACK_VAR(srcLength,"srcLength");
								HX_STACK_LINE(84)
								int tmp10 = hx::Throw(HX_CSTRING("Invalid field access on null object"));		HX_STACK_VAR(tmp10,"tmp10");
								HX_STACK_LINE(84)
								int srcByteOffset = tmp10;		HX_STACK_VAR(srcByteOffset,"srcByteOffset");
								HX_STACK_LINE(84)
								int tmp11 = hx::Throw(HX_CSTRING("Invalid field access on null object"));		HX_STACK_VAR(tmp11,"tmp11");
								HX_STACK_LINE(84)
								int srcElementSize = tmp11;		HX_STACK_VAR(srcElementSize,"srcElementSize");
								HX_STACK_LINE(84)
								int elementSize = _this->bytesPerElement;		HX_STACK_VAR(elementSize,"elementSize");
								HX_STACK_LINE(84)
								int tmp12 = hx::Throw(HX_CSTRING("Invalid field access on null object"));		HX_STACK_VAR(tmp12,"tmp12");
								HX_STACK_LINE(84)
								int tmp13 = _this->type;		HX_STACK_VAR(tmp13,"tmp13");
								HX_STACK_LINE(84)
								bool tmp14 = (tmp12 == tmp13);		HX_STACK_VAR(tmp14,"tmp14");
								HX_STACK_LINE(84)
								if ((tmp14)){
									HX_STACK_LINE(84)
									int srcLength1 = srcData->length;		HX_STACK_VAR(srcLength1,"srcLength1");
									HX_STACK_LINE(84)
									int tmp15 = (srcLength1 - srcByteOffset);		HX_STACK_VAR(tmp15,"tmp15");
									HX_STACK_LINE(84)
									int cloneLength = tmp15;		HX_STACK_VAR(cloneLength,"cloneLength");
									HX_STACK_LINE(84)
									::haxe::io::Bytes tmp16;		HX_STACK_VAR(tmp16,"tmp16");
									HX_STACK_LINE(84)
									{
										HX_STACK_LINE(84)
										::haxe::io::Bytes this3;		HX_STACK_VAR(this3,"this3");
										HX_STACK_LINE(84)
										int tmp17 = cloneLength;		HX_STACK_VAR(tmp17,"tmp17");
										HX_STACK_LINE(84)
										::haxe::io::Bytes tmp18 = ::haxe::io::Bytes_obj::alloc(tmp17);		HX_STACK_VAR(tmp18,"tmp18");
										HX_STACK_LINE(84)
										this3 = tmp18;
										HX_STACK_LINE(84)
										tmp16 = this3;
									}
									HX_STACK_LINE(84)
									_this->buffer = tmp16;
									HX_STACK_LINE(84)
									::haxe::io::Bytes tmp17 = srcData;		HX_STACK_VAR(tmp17,"tmp17");
									HX_STACK_LINE(84)
									int tmp18 = srcByteOffset;		HX_STACK_VAR(tmp18,"tmp18");
									HX_STACK_LINE(84)
									int tmp19 = cloneLength;		HX_STACK_VAR(tmp19,"tmp19");
									HX_STACK_LINE(84)
									_this->buffer->blit((int)0,tmp17,tmp18,tmp19);
								}
								else{
									HX_STACK_LINE(84)
									HX_STACK_DO_THROW(HX_HCSTRING("unimplemented","\x09","\x2f","\x74","\xb4"));
								}
								HX_STACK_LINE(84)
								int tmp15 = (_this->bytesPerElement * srcLength);		HX_STACK_VAR(tmp15,"tmp15");
								HX_STACK_LINE(84)
								_this->byteLength = tmp15;
								HX_STACK_LINE(84)
								_this->byteOffset = (int)0;
								HX_STACK_LINE(84)
								_this->length = srcLength;
								HX_STACK_LINE(84)
								tmp6 = _this;
							}
							HX_STACK_LINE(84)
							this2 = tmp6;
						}
						else{
							HX_STACK_LINE(84)
							bool tmp6 = false;		HX_STACK_VAR(tmp6,"tmp6");
							HX_STACK_LINE(84)
							if ((tmp6)){
								HX_STACK_LINE(84)
								::lime::utils::ArrayBufferView tmp7;		HX_STACK_VAR(tmp7,"tmp7");
								HX_STACK_LINE(84)
								{
									HX_STACK_LINE(84)
									::lime::utils::ArrayBufferView tmp8 = ::lime::utils::ArrayBufferView_obj::__new((int)0,(int)8);		HX_STACK_VAR(tmp8,"tmp8");
									HX_STACK_LINE(84)
									::lime::utils::ArrayBufferView _this = tmp8;		HX_STACK_VAR(_this,"_this");
									HX_STACK_LINE(84)
									int in_byteOffset = (int)0;		HX_STACK_VAR(in_byteOffset,"in_byteOffset");
									HX_STACK_LINE(84)
									bool tmp9 = (in_byteOffset < (int)0);		HX_STACK_VAR(tmp9,"tmp9");
									HX_STACK_LINE(84)
									if ((tmp9)){
										HX_STACK_LINE(84)
										HX_STACK_DO_THROW(::lime::utils::TAError_obj::RangeError);
									}
									HX_STACK_LINE(84)
									int tmp10 = hx::Mod(in_byteOffset,_this->bytesPerElement);		HX_STACK_VAR(tmp10,"tmp10");
									HX_STACK_LINE(84)
									bool tmp11 = (tmp10 != (int)0);		HX_STACK_VAR(tmp11,"tmp11");
									HX_STACK_LINE(84)
									if ((tmp11)){
										HX_STACK_LINE(84)
										HX_STACK_DO_THROW(::lime::utils::TAError_obj::RangeError);
									}
									HX_STACK_LINE(84)
									int tmp12 = hx::Throw(HX_CSTRING("Invalid field access on null object"));		HX_STACK_VAR(tmp12,"tmp12");
									HX_STACK_LINE(84)
									int bufferByteLength = tmp12;		HX_STACK_VAR(bufferByteLength,"bufferByteLength");
									HX_STACK_LINE(84)
									int elementSize = _this->bytesPerElement;		HX_STACK_VAR(elementSize,"elementSize");
									HX_STACK_LINE(84)
									int newByteLength = bufferByteLength;		HX_STACK_VAR(newByteLength,"newByteLength");
									HX_STACK_LINE(84)
									bool tmp13 = true;		HX_STACK_VAR(tmp13,"tmp13");
									HX_STACK_LINE(84)
									if ((tmp13)){
										HX_STACK_LINE(84)
										int tmp14 = (bufferByteLength - in_byteOffset);		HX_STACK_VAR(tmp14,"tmp14");
										HX_STACK_LINE(84)
										newByteLength = tmp14;
										HX_STACK_LINE(84)
										int tmp15 = hx::Mod(bufferByteLength,_this->bytesPerElement);		HX_STACK_VAR(tmp15,"tmp15");
										HX_STACK_LINE(84)
										bool tmp16 = (tmp15 != (int)0);		HX_STACK_VAR(tmp16,"tmp16");
										HX_STACK_LINE(84)
										if ((tmp16)){
											HX_STACK_LINE(84)
											HX_STACK_DO_THROW(::lime::utils::TAError_obj::RangeError);
										}
										HX_STACK_LINE(84)
										bool tmp17 = (newByteLength < (int)0);		HX_STACK_VAR(tmp17,"tmp17");
										HX_STACK_LINE(84)
										if ((tmp17)){
											HX_STACK_LINE(84)
											HX_STACK_DO_THROW(::lime::utils::TAError_obj::RangeError);
										}
									}
									else{
										HX_STACK_LINE(84)
										int tmp14 = (null() * _this->bytesPerElement);		HX_STACK_VAR(tmp14,"tmp14");
										HX_STACK_LINE(84)
										newByteLength = tmp14;
										HX_STACK_LINE(84)
										int tmp15 = (in_byteOffset + newByteLength);		HX_STACK_VAR(tmp15,"tmp15");
										HX_STACK_LINE(84)
										int newRange = tmp15;		HX_STACK_VAR(newRange,"newRange");
										HX_STACK_LINE(84)
										bool tmp16 = (newRange > bufferByteLength);		HX_STACK_VAR(tmp16,"tmp16");
										HX_STACK_LINE(84)
										if ((tmp16)){
											HX_STACK_LINE(84)
											HX_STACK_DO_THROW(::lime::utils::TAError_obj::RangeError);
										}
									}
									HX_STACK_LINE(84)
									_this->buffer = null();
									HX_STACK_LINE(84)
									_this->byteOffset = in_byteOffset;
									HX_STACK_LINE(84)
									_this->byteLength = newByteLength;
									HX_STACK_LINE(84)
									Float tmp14 = (Float(newByteLength) / Float(_this->bytesPerElement));		HX_STACK_VAR(tmp14,"tmp14");
									HX_STACK_LINE(84)
									int tmp15 = ::Std_obj::_int(tmp14);		HX_STACK_VAR(tmp15,"tmp15");
									HX_STACK_LINE(84)
									_this->length = tmp15;
									HX_STACK_LINE(84)
									tmp7 = _this;
								}
								HX_STACK_LINE(84)
								this2 = tmp7;
							}
							else{
								HX_STACK_LINE(84)
								HX_STACK_DO_THROW(HX_HCSTRING("Invalid constructor arguments for Float32Array","\x8e","\xc1","\xf4","\xd4"));
							}
						}
					}
				}
			}
			HX_STACK_LINE(84)
			tmp1 = this2;
		}
		HX_STACK_LINE(84)
		::lime::utils::ArrayBufferView tmp2 = ::lime::math::_Matrix4::Matrix4_Impl__obj::_new(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(84)
		::lime::math::_Matrix4::Matrix4_Impl__obj::append(tmp,tmp2);
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC4(Matrix4_Impl__obj,appendScale,(void))

Void Matrix4_Impl__obj::appendTranslation( ::lime::utils::ArrayBufferView this1,Float x,Float y,Float z){
{
		HX_STACK_FRAME("lime.math._Matrix4.Matrix4_Impl_","appendTranslation",0xe6447daf,"lime.math._Matrix4.Matrix4_Impl_.appendTranslation","lime/math/Matrix4.hx",89,0xeb65dbd8)
		HX_STACK_ARG(this1,"this1")
		HX_STACK_ARG(x,"x")
		HX_STACK_ARG(y,"y")
		HX_STACK_ARG(z,"z")
		HX_STACK_LINE(91)
		{
			HX_STACK_LINE(91)
			Float tmp = ::__hxcpp_memory_get_float(this1->buffer->b,(this1->byteOffset + (int)48));		HX_STACK_VAR(tmp,"tmp");
			HX_STACK_LINE(91)
			Float tmp1 = x;		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(91)
			Float tmp2 = (tmp + tmp1);		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(91)
			Float val = tmp2;		HX_STACK_VAR(val,"val");
			HX_STACK_LINE(91)
			::__hxcpp_memory_set_float(this1->buffer->b,(this1->byteOffset + (int)48),val);
			HX_STACK_LINE(91)
			val;
		}
		HX_STACK_LINE(92)
		{
			HX_STACK_LINE(92)
			Float tmp = ::__hxcpp_memory_get_float(this1->buffer->b,(this1->byteOffset + (int)52));		HX_STACK_VAR(tmp,"tmp");
			HX_STACK_LINE(92)
			Float tmp1 = y;		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(92)
			Float tmp2 = (tmp + tmp1);		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(92)
			Float val = tmp2;		HX_STACK_VAR(val,"val");
			HX_STACK_LINE(92)
			::__hxcpp_memory_set_float(this1->buffer->b,(this1->byteOffset + (int)52),val);
			HX_STACK_LINE(92)
			val;
		}
		HX_STACK_LINE(93)
		{
			HX_STACK_LINE(93)
			Float tmp = ::__hxcpp_memory_get_float(this1->buffer->b,(this1->byteOffset + (int)56));		HX_STACK_VAR(tmp,"tmp");
			HX_STACK_LINE(93)
			Float tmp1 = z;		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(93)
			Float tmp2 = (tmp + tmp1);		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(93)
			Float val = tmp2;		HX_STACK_VAR(val,"val");
			HX_STACK_LINE(93)
			::__hxcpp_memory_set_float(this1->buffer->b,(this1->byteOffset + (int)56),val);
			HX_STACK_LINE(93)
			val;
		}
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC4(Matrix4_Impl__obj,appendTranslation,(void))

::lime::utils::ArrayBufferView Matrix4_Impl__obj::clone( ::lime::utils::ArrayBufferView this1){
	HX_STACK_FRAME("lime.math._Matrix4.Matrix4_Impl_","clone",0xe1a2dbd5,"lime.math._Matrix4.Matrix4_Impl_.clone","lime/math/Matrix4.hx",98,0xeb65dbd8)
	HX_STACK_ARG(this1,"this1")
	HX_STACK_LINE(100)
	::lime::utils::ArrayBufferView tmp;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(100)
	{
		HX_STACK_LINE(100)
		::lime::utils::ArrayBufferView this2;		HX_STACK_VAR(this2,"this2");
		HX_STACK_LINE(100)
		bool tmp1 = false;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(100)
		if ((tmp1)){
			HX_STACK_LINE(100)
			::lime::utils::ArrayBufferView tmp2 = ::lime::utils::ArrayBufferView_obj::__new(null(),(int)8);		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(100)
			this2 = tmp2;
		}
		else{
			HX_STACK_LINE(100)
			bool tmp2 = false;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(100)
			if ((tmp2)){
				HX_STACK_LINE(100)
				::lime::utils::ArrayBufferView tmp3;		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(100)
				{
					HX_STACK_LINE(100)
					::lime::utils::ArrayBufferView tmp4 = ::lime::utils::ArrayBufferView_obj::__new((int)0,(int)8);		HX_STACK_VAR(tmp4,"tmp4");
					HX_STACK_LINE(100)
					::lime::utils::ArrayBufferView _this = tmp4;		HX_STACK_VAR(_this,"_this");
					HX_STACK_LINE(100)
					_this->byteOffset = (int)0;
					HX_STACK_LINE(100)
					int tmp5 = hx::Throw(HX_CSTRING("Invalid field access on null object"));		HX_STACK_VAR(tmp5,"tmp5");
					HX_STACK_LINE(100)
					_this->length = tmp5;
					HX_STACK_LINE(100)
					int tmp6 = (_this->length * _this->bytesPerElement);		HX_STACK_VAR(tmp6,"tmp6");
					HX_STACK_LINE(100)
					_this->byteLength = tmp6;
					HX_STACK_LINE(100)
					::haxe::io::Bytes tmp7;		HX_STACK_VAR(tmp7,"tmp7");
					HX_STACK_LINE(100)
					{
						HX_STACK_LINE(100)
						::haxe::io::Bytes this3;		HX_STACK_VAR(this3,"this3");
						HX_STACK_LINE(100)
						int tmp8 = _this->byteLength;		HX_STACK_VAR(tmp8,"tmp8");
						HX_STACK_LINE(100)
						::haxe::io::Bytes tmp9 = ::haxe::io::Bytes_obj::alloc(tmp8);		HX_STACK_VAR(tmp9,"tmp9");
						HX_STACK_LINE(100)
						this3 = tmp9;
						HX_STACK_LINE(100)
						tmp7 = this3;
					}
					HX_STACK_LINE(100)
					_this->buffer = tmp7;
					HX_STACK_LINE(100)
					_this->copyFromArray(((Array< Float >)(null())),null());
					HX_STACK_LINE(100)
					tmp3 = _this;
				}
				HX_STACK_LINE(100)
				this2 = tmp3;
			}
			else{
				HX_STACK_LINE(100)
				bool tmp3 = false;		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(100)
				if ((tmp3)){
					HX_STACK_LINE(100)
					::lime::utils::ArrayBufferView tmp4;		HX_STACK_VAR(tmp4,"tmp4");
					HX_STACK_LINE(100)
					{
						HX_STACK_LINE(100)
						::lime::utils::ArrayBufferView tmp5 = ::lime::utils::ArrayBufferView_obj::__new((int)0,(int)8);		HX_STACK_VAR(tmp5,"tmp5");
						HX_STACK_LINE(100)
						::lime::utils::ArrayBufferView _this = tmp5;		HX_STACK_VAR(_this,"_this");
						HX_STACK_LINE(100)
						cpp::ArrayBase array = hx::Throw(HX_CSTRING("Invalid field access on null object"));		HX_STACK_VAR(array,"array");
						HX_STACK_LINE(100)
						_this->byteOffset = (int)0;
						HX_STACK_LINE(100)
						_this->length = array->__Field(HX_HCSTRING("length","\xe6","\x94","\x07","\x9f"), hx::paccDynamic );
						HX_STACK_LINE(100)
						int tmp6 = (_this->length * _this->bytesPerElement);		HX_STACK_VAR(tmp6,"tmp6");
						HX_STACK_LINE(100)
						_this->byteLength = tmp6;
						HX_STACK_LINE(100)
						::haxe::io::Bytes tmp7;		HX_STACK_VAR(tmp7,"tmp7");
						HX_STACK_LINE(100)
						{
							HX_STACK_LINE(100)
							::haxe::io::Bytes this3;		HX_STACK_VAR(this3,"this3");
							HX_STACK_LINE(100)
							int tmp8 = _this->byteLength;		HX_STACK_VAR(tmp8,"tmp8");
							HX_STACK_LINE(100)
							::haxe::io::Bytes tmp9 = ::haxe::io::Bytes_obj::alloc(tmp8);		HX_STACK_VAR(tmp9,"tmp9");
							HX_STACK_LINE(100)
							this3 = tmp9;
							HX_STACK_LINE(100)
							tmp7 = this3;
						}
						HX_STACK_LINE(100)
						_this->buffer = tmp7;
						HX_STACK_LINE(100)
						_this->copyFromArray(((Array< Float >)(array)),null());
						HX_STACK_LINE(100)
						tmp4 = _this;
					}
					HX_STACK_LINE(100)
					this2 = tmp4;
				}
				else{
					HX_STACK_LINE(100)
					bool tmp4 = (this1 != null());		HX_STACK_VAR(tmp4,"tmp4");
					HX_STACK_LINE(100)
					if ((tmp4)){
						HX_STACK_LINE(100)
						::lime::utils::ArrayBufferView tmp5;		HX_STACK_VAR(tmp5,"tmp5");
						HX_STACK_LINE(100)
						{
							HX_STACK_LINE(100)
							::lime::utils::ArrayBufferView tmp6 = ::lime::utils::ArrayBufferView_obj::__new((int)0,(int)8);		HX_STACK_VAR(tmp6,"tmp6");
							HX_STACK_LINE(100)
							::lime::utils::ArrayBufferView _this = tmp6;		HX_STACK_VAR(_this,"_this");
							HX_STACK_LINE(100)
							::haxe::io::Bytes srcData = this1->buffer;		HX_STACK_VAR(srcData,"srcData");
							HX_STACK_LINE(100)
							int srcLength = this1->length;		HX_STACK_VAR(srcLength,"srcLength");
							HX_STACK_LINE(100)
							int srcByteOffset = this1->byteOffset;		HX_STACK_VAR(srcByteOffset,"srcByteOffset");
							HX_STACK_LINE(100)
							int srcElementSize = this1->bytesPerElement;		HX_STACK_VAR(srcElementSize,"srcElementSize");
							HX_STACK_LINE(100)
							int elementSize = _this->bytesPerElement;		HX_STACK_VAR(elementSize,"elementSize");
							HX_STACK_LINE(100)
							bool tmp7 = (this1->type == _this->type);		HX_STACK_VAR(tmp7,"tmp7");
							HX_STACK_LINE(100)
							if ((tmp7)){
								HX_STACK_LINE(100)
								int srcLength1 = srcData->length;		HX_STACK_VAR(srcLength1,"srcLength1");
								HX_STACK_LINE(100)
								int tmp8 = (srcLength1 - srcByteOffset);		HX_STACK_VAR(tmp8,"tmp8");
								HX_STACK_LINE(100)
								int cloneLength = tmp8;		HX_STACK_VAR(cloneLength,"cloneLength");
								HX_STACK_LINE(100)
								::haxe::io::Bytes tmp9;		HX_STACK_VAR(tmp9,"tmp9");
								HX_STACK_LINE(100)
								{
									HX_STACK_LINE(100)
									::haxe::io::Bytes this3;		HX_STACK_VAR(this3,"this3");
									HX_STACK_LINE(100)
									int tmp10 = cloneLength;		HX_STACK_VAR(tmp10,"tmp10");
									HX_STACK_LINE(100)
									::haxe::io::Bytes tmp11 = ::haxe::io::Bytes_obj::alloc(tmp10);		HX_STACK_VAR(tmp11,"tmp11");
									HX_STACK_LINE(100)
									this3 = tmp11;
									HX_STACK_LINE(100)
									tmp9 = this3;
								}
								HX_STACK_LINE(100)
								_this->buffer = tmp9;
								HX_STACK_LINE(100)
								::haxe::io::Bytes tmp10 = srcData;		HX_STACK_VAR(tmp10,"tmp10");
								HX_STACK_LINE(100)
								int tmp11 = srcByteOffset;		HX_STACK_VAR(tmp11,"tmp11");
								HX_STACK_LINE(100)
								int tmp12 = cloneLength;		HX_STACK_VAR(tmp12,"tmp12");
								HX_STACK_LINE(100)
								_this->buffer->blit((int)0,tmp10,tmp11,tmp12);
							}
							else{
								HX_STACK_LINE(100)
								HX_STACK_DO_THROW(HX_HCSTRING("unimplemented","\x09","\x2f","\x74","\xb4"));
							}
							HX_STACK_LINE(100)
							int tmp8 = (_this->bytesPerElement * srcLength);		HX_STACK_VAR(tmp8,"tmp8");
							HX_STACK_LINE(100)
							_this->byteLength = tmp8;
							HX_STACK_LINE(100)
							_this->byteOffset = (int)0;
							HX_STACK_LINE(100)
							_this->length = srcLength;
							HX_STACK_LINE(100)
							tmp5 = _this;
						}
						HX_STACK_LINE(100)
						this2 = tmp5;
					}
					else{
						HX_STACK_LINE(100)
						bool tmp5 = false;		HX_STACK_VAR(tmp5,"tmp5");
						HX_STACK_LINE(100)
						if ((tmp5)){
							HX_STACK_LINE(100)
							::lime::utils::ArrayBufferView tmp6;		HX_STACK_VAR(tmp6,"tmp6");
							HX_STACK_LINE(100)
							{
								HX_STACK_LINE(100)
								::lime::utils::ArrayBufferView tmp7 = ::lime::utils::ArrayBufferView_obj::__new((int)0,(int)8);		HX_STACK_VAR(tmp7,"tmp7");
								HX_STACK_LINE(100)
								::lime::utils::ArrayBufferView _this = tmp7;		HX_STACK_VAR(_this,"_this");
								HX_STACK_LINE(100)
								int in_byteOffset = (int)0;		HX_STACK_VAR(in_byteOffset,"in_byteOffset");
								HX_STACK_LINE(100)
								bool tmp8 = (in_byteOffset < (int)0);		HX_STACK_VAR(tmp8,"tmp8");
								HX_STACK_LINE(100)
								if ((tmp8)){
									HX_STACK_LINE(100)
									HX_STACK_DO_THROW(::lime::utils::TAError_obj::RangeError);
								}
								HX_STACK_LINE(100)
								int tmp9 = hx::Mod(in_byteOffset,_this->bytesPerElement);		HX_STACK_VAR(tmp9,"tmp9");
								HX_STACK_LINE(100)
								bool tmp10 = (tmp9 != (int)0);		HX_STACK_VAR(tmp10,"tmp10");
								HX_STACK_LINE(100)
								if ((tmp10)){
									HX_STACK_LINE(100)
									HX_STACK_DO_THROW(::lime::utils::TAError_obj::RangeError);
								}
								HX_STACK_LINE(100)
								int tmp11 = hx::Throw(HX_CSTRING("Invalid field access on null object"));		HX_STACK_VAR(tmp11,"tmp11");
								HX_STACK_LINE(100)
								int bufferByteLength = tmp11;		HX_STACK_VAR(bufferByteLength,"bufferByteLength");
								HX_STACK_LINE(100)
								int elementSize = _this->bytesPerElement;		HX_STACK_VAR(elementSize,"elementSize");
								HX_STACK_LINE(100)
								int newByteLength = bufferByteLength;		HX_STACK_VAR(newByteLength,"newByteLength");
								HX_STACK_LINE(100)
								bool tmp12 = true;		HX_STACK_VAR(tmp12,"tmp12");
								HX_STACK_LINE(100)
								if ((tmp12)){
									HX_STACK_LINE(100)
									int tmp13 = (bufferByteLength - in_byteOffset);		HX_STACK_VAR(tmp13,"tmp13");
									HX_STACK_LINE(100)
									newByteLength = tmp13;
									HX_STACK_LINE(100)
									int tmp14 = hx::Mod(bufferByteLength,_this->bytesPerElement);		HX_STACK_VAR(tmp14,"tmp14");
									HX_STACK_LINE(100)
									bool tmp15 = (tmp14 != (int)0);		HX_STACK_VAR(tmp15,"tmp15");
									HX_STACK_LINE(100)
									if ((tmp15)){
										HX_STACK_LINE(100)
										HX_STACK_DO_THROW(::lime::utils::TAError_obj::RangeError);
									}
									HX_STACK_LINE(100)
									bool tmp16 = (newByteLength < (int)0);		HX_STACK_VAR(tmp16,"tmp16");
									HX_STACK_LINE(100)
									if ((tmp16)){
										HX_STACK_LINE(100)
										HX_STACK_DO_THROW(::lime::utils::TAError_obj::RangeError);
									}
								}
								else{
									HX_STACK_LINE(100)
									int tmp13 = (null() * _this->bytesPerElement);		HX_STACK_VAR(tmp13,"tmp13");
									HX_STACK_LINE(100)
									newByteLength = tmp13;
									HX_STACK_LINE(100)
									int tmp14 = (in_byteOffset + newByteLength);		HX_STACK_VAR(tmp14,"tmp14");
									HX_STACK_LINE(100)
									int newRange = tmp14;		HX_STACK_VAR(newRange,"newRange");
									HX_STACK_LINE(100)
									bool tmp15 = (newRange > bufferByteLength);		HX_STACK_VAR(tmp15,"tmp15");
									HX_STACK_LINE(100)
									if ((tmp15)){
										HX_STACK_LINE(100)
										HX_STACK_DO_THROW(::lime::utils::TAError_obj::RangeError);
									}
								}
								HX_STACK_LINE(100)
								_this->buffer = null();
								HX_STACK_LINE(100)
								_this->byteOffset = in_byteOffset;
								HX_STACK_LINE(100)
								_this->byteLength = newByteLength;
								HX_STACK_LINE(100)
								Float tmp13 = (Float(newByteLength) / Float(_this->bytesPerElement));		HX_STACK_VAR(tmp13,"tmp13");
								HX_STACK_LINE(100)
								int tmp14 = ::Std_obj::_int(tmp13);		HX_STACK_VAR(tmp14,"tmp14");
								HX_STACK_LINE(100)
								_this->length = tmp14;
								HX_STACK_LINE(100)
								tmp6 = _this;
							}
							HX_STACK_LINE(100)
							this2 = tmp6;
						}
						else{
							HX_STACK_LINE(100)
							HX_STACK_DO_THROW(HX_HCSTRING("Invalid constructor arguments for Float32Array","\x8e","\xc1","\xf4","\xd4"));
						}
					}
				}
			}
		}
		HX_STACK_LINE(100)
		tmp = this2;
	}
	HX_STACK_LINE(100)
	::lime::utils::ArrayBufferView tmp1 = ::lime::math::_Matrix4::Matrix4_Impl__obj::_new(tmp);		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(100)
	return tmp1;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Matrix4_Impl__obj,clone,return )

Void Matrix4_Impl__obj::copyColumnFrom( ::lime::utils::ArrayBufferView this1,int column,::lime::math::Vector4 vector){
{
		HX_STACK_FRAME("lime.math._Matrix4.Matrix4_Impl_","copyColumnFrom",0x5224fffd,"lime.math._Matrix4.Matrix4_Impl_.copyColumnFrom","lime/math/Matrix4.hx",105,0xeb65dbd8)
		HX_STACK_ARG(this1,"this1")
		HX_STACK_ARG(column,"column")
		HX_STACK_ARG(vector,"vector")
		HX_STACK_LINE(107)
		int tmp = column;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(107)
		switch( (int)(tmp)){
			case (int)0: {
				HX_STACK_LINE(111)
				{
					HX_STACK_LINE(111)
					Float val = vector->x;		HX_STACK_VAR(val,"val");
					HX_STACK_LINE(111)
					::__hxcpp_memory_set_float(this1->buffer->b,this1->byteOffset,val);
					HX_STACK_LINE(111)
					val;
				}
				HX_STACK_LINE(112)
				{
					HX_STACK_LINE(112)
					Float val = vector->y;		HX_STACK_VAR(val,"val");
					HX_STACK_LINE(112)
					::__hxcpp_memory_set_float(this1->buffer->b,(this1->byteOffset + (int)4),val);
					HX_STACK_LINE(112)
					val;
				}
				HX_STACK_LINE(113)
				{
					HX_STACK_LINE(113)
					Float val = vector->z;		HX_STACK_VAR(val,"val");
					HX_STACK_LINE(113)
					::__hxcpp_memory_set_float(this1->buffer->b,(this1->byteOffset + (int)8),val);
					HX_STACK_LINE(113)
					val;
				}
				HX_STACK_LINE(114)
				{
					HX_STACK_LINE(114)
					Float val = vector->w;		HX_STACK_VAR(val,"val");
					HX_STACK_LINE(114)
					::__hxcpp_memory_set_float(this1->buffer->b,(this1->byteOffset + (int)12),val);
					HX_STACK_LINE(114)
					val;
				}
			}
			;break;
			case (int)1: {
				HX_STACK_LINE(118)
				{
					HX_STACK_LINE(118)
					Float val = vector->x;		HX_STACK_VAR(val,"val");
					HX_STACK_LINE(118)
					::__hxcpp_memory_set_float(this1->buffer->b,(this1->byteOffset + (int)16),val);
					HX_STACK_LINE(118)
					val;
				}
				HX_STACK_LINE(119)
				{
					HX_STACK_LINE(119)
					Float val = vector->y;		HX_STACK_VAR(val,"val");
					HX_STACK_LINE(119)
					::__hxcpp_memory_set_float(this1->buffer->b,(this1->byteOffset + (int)20),val);
					HX_STACK_LINE(119)
					val;
				}
				HX_STACK_LINE(120)
				{
					HX_STACK_LINE(120)
					Float val = vector->z;		HX_STACK_VAR(val,"val");
					HX_STACK_LINE(120)
					::__hxcpp_memory_set_float(this1->buffer->b,(this1->byteOffset + (int)24),val);
					HX_STACK_LINE(120)
					val;
				}
				HX_STACK_LINE(121)
				{
					HX_STACK_LINE(121)
					Float val = vector->w;		HX_STACK_VAR(val,"val");
					HX_STACK_LINE(121)
					::__hxcpp_memory_set_float(this1->buffer->b,(this1->byteOffset + (int)28),val);
					HX_STACK_LINE(121)
					val;
				}
			}
			;break;
			case (int)2: {
				HX_STACK_LINE(125)
				{
					HX_STACK_LINE(125)
					Float val = vector->x;		HX_STACK_VAR(val,"val");
					HX_STACK_LINE(125)
					::__hxcpp_memory_set_float(this1->buffer->b,(this1->byteOffset + (int)32),val);
					HX_STACK_LINE(125)
					val;
				}
				HX_STACK_LINE(126)
				{
					HX_STACK_LINE(126)
					Float val = vector->y;		HX_STACK_VAR(val,"val");
					HX_STACK_LINE(126)
					::__hxcpp_memory_set_float(this1->buffer->b,(this1->byteOffset + (int)36),val);
					HX_STACK_LINE(126)
					val;
				}
				HX_STACK_LINE(127)
				{
					HX_STACK_LINE(127)
					Float val = vector->z;		HX_STACK_VAR(val,"val");
					HX_STACK_LINE(127)
					::__hxcpp_memory_set_float(this1->buffer->b,(this1->byteOffset + (int)40),val);
					HX_STACK_LINE(127)
					val;
				}
				HX_STACK_LINE(128)
				{
					HX_STACK_LINE(128)
					Float val = vector->w;		HX_STACK_VAR(val,"val");
					HX_STACK_LINE(128)
					::__hxcpp_memory_set_float(this1->buffer->b,(this1->byteOffset + (int)44),val);
					HX_STACK_LINE(128)
					val;
				}
			}
			;break;
			case (int)3: {
				HX_STACK_LINE(132)
				{
					HX_STACK_LINE(132)
					Float val = vector->x;		HX_STACK_VAR(val,"val");
					HX_STACK_LINE(132)
					::__hxcpp_memory_set_float(this1->buffer->b,(this1->byteOffset + (int)48),val);
					HX_STACK_LINE(132)
					val;
				}
				HX_STACK_LINE(133)
				{
					HX_STACK_LINE(133)
					Float val = vector->y;		HX_STACK_VAR(val,"val");
					HX_STACK_LINE(133)
					::__hxcpp_memory_set_float(this1->buffer->b,(this1->byteOffset + (int)52),val);
					HX_STACK_LINE(133)
					val;
				}
				HX_STACK_LINE(134)
				{
					HX_STACK_LINE(134)
					Float val = vector->z;		HX_STACK_VAR(val,"val");
					HX_STACK_LINE(134)
					::__hxcpp_memory_set_float(this1->buffer->b,(this1->byteOffset + (int)56),val);
					HX_STACK_LINE(134)
					val;
				}
				HX_STACK_LINE(135)
				{
					HX_STACK_LINE(135)
					Float val = vector->w;		HX_STACK_VAR(val,"val");
					HX_STACK_LINE(135)
					::__hxcpp_memory_set_float(this1->buffer->b,(this1->byteOffset + (int)60),val);
					HX_STACK_LINE(135)
					val;
				}
			}
			;break;
			default: {
				HX_STACK_LINE(139)
				::String tmp1 = (HX_HCSTRING("Column ","\x6a","\xd4","\xaa","\xc0") + column);		HX_STACK_VAR(tmp1,"tmp1");
				HX_STACK_LINE(139)
				::String tmp2 = (tmp1 + HX_HCSTRING(" out of bounds [0, ..., 3]","\x2f","\x8b","\x46","\x17"));		HX_STACK_VAR(tmp2,"tmp2");
				HX_STACK_LINE(139)
				Dynamic tmp3 = hx::SourceInfo(HX_HCSTRING("Matrix4.hx","\xeb","\x49","\x5a","\x69"),139,HX_HCSTRING("lime.math._Matrix4.Matrix4_Impl_","\xe6","\xfe","\xf9","\xcb"),HX_HCSTRING("copyColumnFrom","\x75","\x97","\xb5","\x3a"));		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(139)
				::lime::utils::Log_obj::error(tmp2,tmp3);
			}
		}
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC3(Matrix4_Impl__obj,copyColumnFrom,(void))

Void Matrix4_Impl__obj::copyColumnTo( ::lime::utils::ArrayBufferView this1,int column,::lime::math::Vector4 vector){
{
		HX_STACK_FRAME("lime.math._Matrix4.Matrix4_Impl_","copyColumnTo",0xcc64e54e,"lime.math._Matrix4.Matrix4_Impl_.copyColumnTo","lime/math/Matrix4.hx",146,0xeb65dbd8)
		HX_STACK_ARG(this1,"this1")
		HX_STACK_ARG(column,"column")
		HX_STACK_ARG(vector,"vector")
		HX_STACK_LINE(148)
		int tmp = column;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(148)
		switch( (int)(tmp)){
			case (int)0: {
				HX_STACK_LINE(152)
				Float tmp1 = ::__hxcpp_memory_get_float(this1->buffer->b,this1->byteOffset);		HX_STACK_VAR(tmp1,"tmp1");
				HX_STACK_LINE(152)
				vector->x = tmp1;
				HX_STACK_LINE(153)
				Float tmp2 = ::__hxcpp_memory_get_float(this1->buffer->b,(this1->byteOffset + (int)4));		HX_STACK_VAR(tmp2,"tmp2");
				HX_STACK_LINE(153)
				vector->y = tmp2;
				HX_STACK_LINE(154)
				Float tmp3 = ::__hxcpp_memory_get_float(this1->buffer->b,(this1->byteOffset + (int)8));		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(154)
				vector->z = tmp3;
				HX_STACK_LINE(155)
				Float tmp4 = ::__hxcpp_memory_get_float(this1->buffer->b,(this1->byteOffset + (int)12));		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(155)
				vector->w = tmp4;
			}
			;break;
			case (int)1: {
				HX_STACK_LINE(159)
				Float tmp1 = ::__hxcpp_memory_get_float(this1->buffer->b,(this1->byteOffset + (int)16));		HX_STACK_VAR(tmp1,"tmp1");
				HX_STACK_LINE(159)
				vector->x = tmp1;
				HX_STACK_LINE(160)
				Float tmp2 = ::__hxcpp_memory_get_float(this1->buffer->b,(this1->byteOffset + (int)20));		HX_STACK_VAR(tmp2,"tmp2");
				HX_STACK_LINE(160)
				vector->y = tmp2;
				HX_STACK_LINE(161)
				Float tmp3 = ::__hxcpp_memory_get_float(this1->buffer->b,(this1->byteOffset + (int)24));		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(161)
				vector->z = tmp3;
				HX_STACK_LINE(162)
				Float tmp4 = ::__hxcpp_memory_get_float(this1->buffer->b,(this1->byteOffset + (int)28));		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(162)
				vector->w = tmp4;
			}
			;break;
			case (int)2: {
				HX_STACK_LINE(166)
				Float tmp1 = ::__hxcpp_memory_get_float(this1->buffer->b,(this1->byteOffset + (int)32));		HX_STACK_VAR(tmp1,"tmp1");
				HX_STACK_LINE(166)
				vector->x = tmp1;
				HX_STACK_LINE(167)
				Float tmp2 = ::__hxcpp_memory_get_float(this1->buffer->b,(this1->byteOffset + (int)36));		HX_STACK_VAR(tmp2,"tmp2");
				HX_STACK_LINE(167)
				vector->y = tmp2;
				HX_STACK_LINE(168)
				Float tmp3 = ::__hxcpp_memory_get_float(this1->buffer->b,(this1->byteOffset + (int)40));		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(168)
				vector->z = tmp3;
				HX_STACK_LINE(169)
				Float tmp4 = ::__hxcpp_memory_get_float(this1->buffer->b,(this1->byteOffset + (int)44));		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(169)
				vector->w = tmp4;
			}
			;break;
			case (int)3: {
				HX_STACK_LINE(173)
				Float tmp1 = ::__hxcpp_memory_get_float(this1->buffer->b,(this1->byteOffset + (int)48));		HX_STACK_VAR(tmp1,"tmp1");
				HX_STACK_LINE(173)
				vector->x = tmp1;
				HX_STACK_LINE(174)
				Float tmp2 = ::__hxcpp_memory_get_float(this1->buffer->b,(this1->byteOffset + (int)52));		HX_STACK_VAR(tmp2,"tmp2");
				HX_STACK_LINE(174)
				vector->y = tmp2;
				HX_STACK_LINE(175)
				Float tmp3 = ::__hxcpp_memory_get_float(this1->buffer->b,(this1->byteOffset + (int)56));		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(175)
				vector->z = tmp3;
				HX_STACK_LINE(176)
				Float tmp4 = ::__hxcpp_memory_get_float(this1->buffer->b,(this1->byteOffset + (int)60));		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(176)
				vector->w = tmp4;
			}
			;break;
			default: {
				HX_STACK_LINE(180)
				::String tmp1 = (HX_HCSTRING("Column ","\x6a","\xd4","\xaa","\xc0") + column);		HX_STACK_VAR(tmp1,"tmp1");
				HX_STACK_LINE(180)
				::String tmp2 = (tmp1 + HX_HCSTRING(" out of bounds [0, ..., 3]","\x2f","\x8b","\x46","\x17"));		HX_STACK_VAR(tmp2,"tmp2");
				HX_STACK_LINE(180)
				Dynamic tmp3 = hx::SourceInfo(HX_HCSTRING("Matrix4.hx","\xeb","\x49","\x5a","\x69"),180,HX_HCSTRING("lime.math._Matrix4.Matrix4_Impl_","\xe6","\xfe","\xf9","\xcb"),HX_HCSTRING("copyColumnTo","\xc6","\x2e","\xf6","\xf6"));		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(180)
				::lime::utils::Log_obj::error(tmp2,tmp3);
			}
		}
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC3(Matrix4_Impl__obj,copyColumnTo,(void))

Void Matrix4_Impl__obj::copyFrom( ::lime::utils::ArrayBufferView this1,::lime::utils::ArrayBufferView other){
{
		HX_STACK_FRAME("lime.math._Matrix4.Matrix4_Impl_","copyFrom",0xc27fde47,"lime.math._Matrix4.Matrix4_Impl_.copyFrom","lime/math/Matrix4.hx",189,0xeb65dbd8)
		HX_STACK_ARG(this1,"this1")
		HX_STACK_ARG(other,"other")
		HX_STACK_LINE(189)
		int offset = (int)0;		HX_STACK_VAR(offset,"offset");
		HX_STACK_LINE(189)
		bool tmp = (other != null());		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(189)
		bool tmp1;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(189)
		if ((tmp)){
			HX_STACK_LINE(189)
			tmp1 = true;
		}
		else{
			HX_STACK_LINE(189)
			tmp1 = false;
		}
		HX_STACK_LINE(189)
		if ((tmp1)){
			HX_STACK_LINE(189)
			int tmp2 = (offset * this1->bytesPerElement);		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(189)
			::haxe::io::Bytes tmp3 = other->buffer;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(189)
			int tmp4 = other->byteOffset;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(189)
			int tmp5 = other->byteLength;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(189)
			this1->buffer->blit(tmp2,tmp3,tmp4,tmp5);
		}
		else{
			HX_STACK_LINE(189)
			bool tmp2 = false;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(189)
			bool tmp3;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(189)
			if ((tmp2)){
				HX_STACK_LINE(189)
				tmp3 = (other == null());
			}
			else{
				HX_STACK_LINE(189)
				tmp3 = false;
			}
			HX_STACK_LINE(189)
			if ((tmp3)){
				HX_STACK_LINE(189)
				int tmp4 = offset;		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(189)
				this1->copyFromArray(((Array< Float >)(null())),tmp4);
			}
			else{
				HX_STACK_LINE(189)
				HX_STACK_DO_THROW(HX_HCSTRING("Invalid .set call. either view, or array must be not-null.","\x64","\xba","\xb7","\x6c"));
			}
		}
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(Matrix4_Impl__obj,copyFrom,(void))

Void Matrix4_Impl__obj::copythisFrom( ::lime::utils::ArrayBufferView this1,::lime::utils::ArrayBufferView array,hx::Null< int >  __o_index,hx::Null< bool >  __o_transposeValues){
int index = __o_index.Default(0);
bool transposeValues = __o_transposeValues.Default(false);
	HX_STACK_FRAME("lime.math._Matrix4.Matrix4_Impl_","copythisFrom",0x28530e25,"lime.math._Matrix4.Matrix4_Impl_.copythisFrom","lime/math/Matrix4.hx",194,0xeb65dbd8)
	HX_STACK_ARG(this1,"this1")
	HX_STACK_ARG(array,"array")
	HX_STACK_ARG(index,"index")
	HX_STACK_ARG(transposeValues,"transposeValues")
{
		HX_STACK_LINE(196)
		bool tmp = transposeValues;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(196)
		if ((tmp)){
			HX_STACK_LINE(197)
			::lime::utils::ArrayBufferView tmp1 = this1;		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(197)
			::lime::math::_Matrix4::Matrix4_Impl__obj::transpose(tmp1);
		}
		HX_STACK_LINE(199)
		int tmp1 = array->length;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(199)
		int tmp2 = index;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(199)
		int tmp3 = (tmp1 - tmp2);		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(199)
		int l = tmp3;		HX_STACK_VAR(l,"l");
		HX_STACK_LINE(200)
		{
			HX_STACK_LINE(200)
			int _g = (int)0;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(200)
			while((true)){
				HX_STACK_LINE(200)
				bool tmp4 = (_g < l);		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(200)
				bool tmp5 = !(tmp4);		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(200)
				if ((tmp5)){
					HX_STACK_LINE(200)
					break;
				}
				HX_STACK_LINE(200)
				int tmp6 = (_g)++;		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(200)
				int c = tmp6;		HX_STACK_VAR(c,"c");
				HX_STACK_LINE(201)
				Float tmp7 = ::__hxcpp_memory_get_float(array->buffer->b,(array->byteOffset + (((c + index)) * (int)4)));		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(201)
				Float val = tmp7;		HX_STACK_VAR(val,"val");
				HX_STACK_LINE(201)
				::__hxcpp_memory_set_float(this1->buffer->b,(this1->byteOffset + (c * (int)4)),val);
				HX_STACK_LINE(201)
				val;
			}
		}
		HX_STACK_LINE(203)
		bool tmp4 = transposeValues;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(203)
		if ((tmp4)){
			HX_STACK_LINE(204)
			::lime::utils::ArrayBufferView tmp5 = this1;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(204)
			::lime::math::_Matrix4::Matrix4_Impl__obj::transpose(tmp5);
		}
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC4(Matrix4_Impl__obj,copythisFrom,(void))

Void Matrix4_Impl__obj::copythisTo( ::lime::utils::ArrayBufferView this1,::lime::utils::ArrayBufferView array,hx::Null< int >  __o_index,hx::Null< bool >  __o_transposeValues){
int index = __o_index.Default(0);
bool transposeValues = __o_transposeValues.Default(false);
	HX_STACK_FRAME("lime.math._Matrix4.Matrix4_Impl_","copythisTo",0xe75f9976,"lime.math._Matrix4.Matrix4_Impl_.copythisTo","lime/math/Matrix4.hx",209,0xeb65dbd8)
	HX_STACK_ARG(this1,"this1")
	HX_STACK_ARG(array,"array")
	HX_STACK_ARG(index,"index")
	HX_STACK_ARG(transposeValues,"transposeValues")
{
		HX_STACK_LINE(211)
		bool tmp = transposeValues;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(211)
		if ((tmp)){
			HX_STACK_LINE(212)
			::lime::utils::ArrayBufferView tmp1 = this1;		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(212)
			::lime::math::_Matrix4::Matrix4_Impl__obj::transpose(tmp1);
		}
		HX_STACK_LINE(214)
		int tmp1 = this1->length;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(214)
		int l = tmp1;		HX_STACK_VAR(l,"l");
		HX_STACK_LINE(215)
		{
			HX_STACK_LINE(215)
			int _g = (int)0;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(215)
			while((true)){
				HX_STACK_LINE(215)
				bool tmp2 = (_g < l);		HX_STACK_VAR(tmp2,"tmp2");
				HX_STACK_LINE(215)
				bool tmp3 = !(tmp2);		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(215)
				if ((tmp3)){
					HX_STACK_LINE(215)
					break;
				}
				HX_STACK_LINE(215)
				int tmp4 = (_g)++;		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(215)
				int c = tmp4;		HX_STACK_VAR(c,"c");
				HX_STACK_LINE(216)
				Float tmp5 = ::__hxcpp_memory_get_float(this1->buffer->b,(this1->byteOffset + (c * (int)4)));		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(216)
				Float val = tmp5;		HX_STACK_VAR(val,"val");
				HX_STACK_LINE(216)
				::__hxcpp_memory_set_float(array->buffer->b,(array->byteOffset + (((c + index)) * (int)4)),val);
				HX_STACK_LINE(216)
				val;
			}
		}
		HX_STACK_LINE(218)
		bool tmp2 = transposeValues;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(218)
		if ((tmp2)){
			HX_STACK_LINE(219)
			::lime::utils::ArrayBufferView tmp3 = this1;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(219)
			::lime::math::_Matrix4::Matrix4_Impl__obj::transpose(tmp3);
		}
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC4(Matrix4_Impl__obj,copythisTo,(void))

Void Matrix4_Impl__obj::copyRowFrom( ::lime::utils::ArrayBufferView this1,int row,::lime::math::Vector4 vector){
{
		HX_STACK_FRAME("lime.math._Matrix4.Matrix4_Impl_","copyRowFrom",0xc4e0b7e7,"lime.math._Matrix4.Matrix4_Impl_.copyRowFrom","lime/math/Matrix4.hx",224,0xeb65dbd8)
		HX_STACK_ARG(this1,"this1")
		HX_STACK_ARG(row,"row")
		HX_STACK_ARG(vector,"vector")
		HX_STACK_LINE(226)
		int tmp = row;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(226)
		switch( (int)(tmp)){
			case (int)0: {
				HX_STACK_LINE(230)
				{
					HX_STACK_LINE(230)
					Float val = vector->x;		HX_STACK_VAR(val,"val");
					HX_STACK_LINE(230)
					::__hxcpp_memory_set_float(this1->buffer->b,this1->byteOffset,val);
					HX_STACK_LINE(230)
					val;
				}
				HX_STACK_LINE(231)
				{
					HX_STACK_LINE(231)
					Float val = vector->y;		HX_STACK_VAR(val,"val");
					HX_STACK_LINE(231)
					::__hxcpp_memory_set_float(this1->buffer->b,(this1->byteOffset + (int)16),val);
					HX_STACK_LINE(231)
					val;
				}
				HX_STACK_LINE(232)
				{
					HX_STACK_LINE(232)
					Float val = vector->z;		HX_STACK_VAR(val,"val");
					HX_STACK_LINE(232)
					::__hxcpp_memory_set_float(this1->buffer->b,(this1->byteOffset + (int)32),val);
					HX_STACK_LINE(232)
					val;
				}
				HX_STACK_LINE(233)
				{
					HX_STACK_LINE(233)
					Float val = vector->w;		HX_STACK_VAR(val,"val");
					HX_STACK_LINE(233)
					::__hxcpp_memory_set_float(this1->buffer->b,(this1->byteOffset + (int)48),val);
					HX_STACK_LINE(233)
					val;
				}
			}
			;break;
			case (int)1: {
				HX_STACK_LINE(237)
				{
					HX_STACK_LINE(237)
					Float val = vector->x;		HX_STACK_VAR(val,"val");
					HX_STACK_LINE(237)
					::__hxcpp_memory_set_float(this1->buffer->b,(this1->byteOffset + (int)4),val);
					HX_STACK_LINE(237)
					val;
				}
				HX_STACK_LINE(238)
				{
					HX_STACK_LINE(238)
					Float val = vector->y;		HX_STACK_VAR(val,"val");
					HX_STACK_LINE(238)
					::__hxcpp_memory_set_float(this1->buffer->b,(this1->byteOffset + (int)20),val);
					HX_STACK_LINE(238)
					val;
				}
				HX_STACK_LINE(239)
				{
					HX_STACK_LINE(239)
					Float val = vector->z;		HX_STACK_VAR(val,"val");
					HX_STACK_LINE(239)
					::__hxcpp_memory_set_float(this1->buffer->b,(this1->byteOffset + (int)36),val);
					HX_STACK_LINE(239)
					val;
				}
				HX_STACK_LINE(240)
				{
					HX_STACK_LINE(240)
					Float val = vector->w;		HX_STACK_VAR(val,"val");
					HX_STACK_LINE(240)
					::__hxcpp_memory_set_float(this1->buffer->b,(this1->byteOffset + (int)52),val);
					HX_STACK_LINE(240)
					val;
				}
			}
			;break;
			case (int)2: {
				HX_STACK_LINE(244)
				{
					HX_STACK_LINE(244)
					Float val = vector->x;		HX_STACK_VAR(val,"val");
					HX_STACK_LINE(244)
					::__hxcpp_memory_set_float(this1->buffer->b,(this1->byteOffset + (int)8),val);
					HX_STACK_LINE(244)
					val;
				}
				HX_STACK_LINE(245)
				{
					HX_STACK_LINE(245)
					Float val = vector->y;		HX_STACK_VAR(val,"val");
					HX_STACK_LINE(245)
					::__hxcpp_memory_set_float(this1->buffer->b,(this1->byteOffset + (int)24),val);
					HX_STACK_LINE(245)
					val;
				}
				HX_STACK_LINE(246)
				{
					HX_STACK_LINE(246)
					Float val = vector->z;		HX_STACK_VAR(val,"val");
					HX_STACK_LINE(246)
					::__hxcpp_memory_set_float(this1->buffer->b,(this1->byteOffset + (int)40),val);
					HX_STACK_LINE(246)
					val;
				}
				HX_STACK_LINE(247)
				{
					HX_STACK_LINE(247)
					Float val = vector->w;		HX_STACK_VAR(val,"val");
					HX_STACK_LINE(247)
					::__hxcpp_memory_set_float(this1->buffer->b,(this1->byteOffset + (int)56),val);
					HX_STACK_LINE(247)
					val;
				}
			}
			;break;
			case (int)3: {
				HX_STACK_LINE(251)
				{
					HX_STACK_LINE(251)
					Float val = vector->x;		HX_STACK_VAR(val,"val");
					HX_STACK_LINE(251)
					::__hxcpp_memory_set_float(this1->buffer->b,(this1->byteOffset + (int)12),val);
					HX_STACK_LINE(251)
					val;
				}
				HX_STACK_LINE(252)
				{
					HX_STACK_LINE(252)
					Float val = vector->y;		HX_STACK_VAR(val,"val");
					HX_STACK_LINE(252)
					::__hxcpp_memory_set_float(this1->buffer->b,(this1->byteOffset + (int)28),val);
					HX_STACK_LINE(252)
					val;
				}
				HX_STACK_LINE(253)
				{
					HX_STACK_LINE(253)
					Float val = vector->z;		HX_STACK_VAR(val,"val");
					HX_STACK_LINE(253)
					::__hxcpp_memory_set_float(this1->buffer->b,(this1->byteOffset + (int)44),val);
					HX_STACK_LINE(253)
					val;
				}
				HX_STACK_LINE(254)
				{
					HX_STACK_LINE(254)
					Float val = vector->w;		HX_STACK_VAR(val,"val");
					HX_STACK_LINE(254)
					::__hxcpp_memory_set_float(this1->buffer->b,(this1->byteOffset + (int)60),val);
					HX_STACK_LINE(254)
					val;
				}
			}
			;break;
			default: {
				HX_STACK_LINE(258)
				::String tmp1 = (HX_HCSTRING("Row ","\xe6","\x20","\x88","\x36") + row);		HX_STACK_VAR(tmp1,"tmp1");
				HX_STACK_LINE(258)
				::String tmp2 = (tmp1 + HX_HCSTRING(" out of bounds [0, ..., 3]","\x2f","\x8b","\x46","\x17"));		HX_STACK_VAR(tmp2,"tmp2");
				HX_STACK_LINE(258)
				Dynamic tmp3 = hx::SourceInfo(HX_HCSTRING("Matrix4.hx","\xeb","\x49","\x5a","\x69"),258,HX_HCSTRING("lime.math._Matrix4.Matrix4_Impl_","\xe6","\xfe","\xf9","\xcb"),HX_HCSTRING("copyRowFrom","\x6f","\x45","\x8b","\xef"));		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(258)
				::lime::utils::Log_obj::error(tmp2,tmp3);
			}
		}
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC3(Matrix4_Impl__obj,copyRowFrom,(void))

::lime::utils::ArrayBufferView Matrix4_Impl__obj::create2D( Float x,Float y,hx::Null< Float >  __o_scale,hx::Null< Float >  __o_rotation){
Float scale = __o_scale.Default(1);
Float rotation = __o_rotation.Default(0);
	HX_STACK_FRAME("lime.math._Matrix4.Matrix4_Impl_","create2D",0x26131c56,"lime.math._Matrix4.Matrix4_Impl_.create2D","lime/math/Matrix4.hx",265,0xeb65dbd8)
	HX_STACK_ARG(x,"x")
	HX_STACK_ARG(y,"y")
	HX_STACK_ARG(scale,"scale")
	HX_STACK_ARG(rotation,"rotation")
{
		HX_STACK_LINE(267)
		Float tmp = rotation;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(267)
		Float tmp1 = ::Math_obj::PI;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(267)
		Float tmp2 = (tmp * tmp1);		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(267)
		Float tmp3 = (Float(tmp2) / Float(((Float)180.0)));		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(267)
		Float theta = tmp3;		HX_STACK_VAR(theta,"theta");
		HX_STACK_LINE(268)
		Float tmp4 = theta;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(268)
		Float tmp5 = ::Math_obj::cos(tmp4);		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(268)
		Float c = tmp5;		HX_STACK_VAR(c,"c");
		HX_STACK_LINE(269)
		Float tmp6 = theta;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(269)
		Float tmp7 = ::Math_obj::sin(tmp6);		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(269)
		Float s = tmp7;		HX_STACK_VAR(s,"s");
		HX_STACK_LINE(271)
		::lime::utils::ArrayBufferView tmp8;		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(271)
		{
			HX_STACK_LINE(272)
			Float tmp9 = (c * scale);		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(272)
			Float tmp10 = s;		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(272)
			Float tmp11 = -(tmp10);		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(272)
			Float tmp12 = scale;		HX_STACK_VAR(tmp12,"tmp12");
			HX_STACK_LINE(272)
			Float tmp13 = (tmp11 * tmp12);		HX_STACK_VAR(tmp13,"tmp13");
			HX_STACK_LINE(273)
			Float tmp14 = (s * scale);		HX_STACK_VAR(tmp14,"tmp14");
			HX_STACK_LINE(273)
			Float tmp15 = (c * scale);		HX_STACK_VAR(tmp15,"tmp15");
			HX_STACK_LINE(275)
			Float tmp16 = x;		HX_STACK_VAR(tmp16,"tmp16");
			HX_STACK_LINE(275)
			Float tmp17 = y;		HX_STACK_VAR(tmp17,"tmp17");
			HX_STACK_LINE(271)
			cpp::ArrayBase array = Array_obj< Float >::__new().Add(tmp9).Add(tmp13).Add((int)0).Add((int)0).Add(tmp14).Add(tmp15).Add((int)0).Add((int)0).Add((int)0).Add((int)0).Add((int)1).Add((int)0).Add(tmp16).Add(tmp17).Add((int)0).Add((int)1);		HX_STACK_VAR(array,"array");
			HX_STACK_LINE(271)
			::lime::utils::ArrayBufferView this1;		HX_STACK_VAR(this1,"this1");
			HX_STACK_LINE(271)
			bool tmp18 = false;		HX_STACK_VAR(tmp18,"tmp18");
			HX_STACK_LINE(271)
			if ((tmp18)){
				HX_STACK_LINE(271)
				::lime::utils::ArrayBufferView tmp19 = ::lime::utils::ArrayBufferView_obj::__new(null(),(int)8);		HX_STACK_VAR(tmp19,"tmp19");
				HX_STACK_LINE(271)
				this1 = tmp19;
			}
			else{
				HX_STACK_LINE(271)
				bool tmp19 = (array != null());		HX_STACK_VAR(tmp19,"tmp19");
				HX_STACK_LINE(271)
				if ((tmp19)){
					HX_STACK_LINE(271)
					::lime::utils::ArrayBufferView tmp20;		HX_STACK_VAR(tmp20,"tmp20");
					HX_STACK_LINE(271)
					{
						HX_STACK_LINE(271)
						::lime::utils::ArrayBufferView tmp21 = ::lime::utils::ArrayBufferView_obj::__new((int)0,(int)8);		HX_STACK_VAR(tmp21,"tmp21");
						HX_STACK_LINE(271)
						::lime::utils::ArrayBufferView _this = tmp21;		HX_STACK_VAR(_this,"_this");
						HX_STACK_LINE(271)
						_this->byteOffset = (int)0;
						HX_STACK_LINE(271)
						_this->length = array->__Field(HX_HCSTRING("length","\xe6","\x94","\x07","\x9f"), hx::paccDynamic );
						HX_STACK_LINE(271)
						int tmp22 = (_this->length * _this->bytesPerElement);		HX_STACK_VAR(tmp22,"tmp22");
						HX_STACK_LINE(271)
						_this->byteLength = tmp22;
						HX_STACK_LINE(271)
						::haxe::io::Bytes tmp23;		HX_STACK_VAR(tmp23,"tmp23");
						HX_STACK_LINE(271)
						{
							HX_STACK_LINE(271)
							::haxe::io::Bytes this2;		HX_STACK_VAR(this2,"this2");
							HX_STACK_LINE(271)
							int tmp24 = _this->byteLength;		HX_STACK_VAR(tmp24,"tmp24");
							HX_STACK_LINE(271)
							::haxe::io::Bytes tmp25 = ::haxe::io::Bytes_obj::alloc(tmp24);		HX_STACK_VAR(tmp25,"tmp25");
							HX_STACK_LINE(271)
							this2 = tmp25;
							HX_STACK_LINE(271)
							tmp23 = this2;
						}
						HX_STACK_LINE(271)
						_this->buffer = tmp23;
						HX_STACK_LINE(271)
						_this->copyFromArray(((Array< Float >)(array)),null());
						HX_STACK_LINE(271)
						tmp20 = _this;
					}
					HX_STACK_LINE(271)
					this1 = tmp20;
				}
				else{
					HX_STACK_LINE(271)
					bool tmp20 = false;		HX_STACK_VAR(tmp20,"tmp20");
					HX_STACK_LINE(271)
					if ((tmp20)){
						HX_STACK_LINE(271)
						::lime::utils::ArrayBufferView tmp21;		HX_STACK_VAR(tmp21,"tmp21");
						HX_STACK_LINE(271)
						{
							HX_STACK_LINE(271)
							::lime::utils::ArrayBufferView tmp22 = ::lime::utils::ArrayBufferView_obj::__new((int)0,(int)8);		HX_STACK_VAR(tmp22,"tmp22");
							HX_STACK_LINE(271)
							::lime::utils::ArrayBufferView _this = tmp22;		HX_STACK_VAR(_this,"_this");
							HX_STACK_LINE(271)
							cpp::ArrayBase array1 = hx::Throw(HX_CSTRING("Invalid field access on null object"));		HX_STACK_VAR(array1,"array1");
							HX_STACK_LINE(271)
							_this->byteOffset = (int)0;
							HX_STACK_LINE(271)
							_this->length = array1->__Field(HX_HCSTRING("length","\xe6","\x94","\x07","\x9f"), hx::paccDynamic );
							HX_STACK_LINE(271)
							int tmp23 = (_this->length * _this->bytesPerElement);		HX_STACK_VAR(tmp23,"tmp23");
							HX_STACK_LINE(271)
							_this->byteLength = tmp23;
							HX_STACK_LINE(271)
							::haxe::io::Bytes tmp24;		HX_STACK_VAR(tmp24,"tmp24");
							HX_STACK_LINE(271)
							{
								HX_STACK_LINE(271)
								::haxe::io::Bytes this2;		HX_STACK_VAR(this2,"this2");
								HX_STACK_LINE(271)
								int tmp25 = _this->byteLength;		HX_STACK_VAR(tmp25,"tmp25");
								HX_STACK_LINE(271)
								::haxe::io::Bytes tmp26 = ::haxe::io::Bytes_obj::alloc(tmp25);		HX_STACK_VAR(tmp26,"tmp26");
								HX_STACK_LINE(271)
								this2 = tmp26;
								HX_STACK_LINE(271)
								tmp24 = this2;
							}
							HX_STACK_LINE(271)
							_this->buffer = tmp24;
							HX_STACK_LINE(271)
							_this->copyFromArray(((Array< Float >)(array1)),null());
							HX_STACK_LINE(271)
							tmp21 = _this;
						}
						HX_STACK_LINE(271)
						this1 = tmp21;
					}
					else{
						HX_STACK_LINE(271)
						bool tmp21 = false;		HX_STACK_VAR(tmp21,"tmp21");
						HX_STACK_LINE(271)
						if ((tmp21)){
							HX_STACK_LINE(271)
							::lime::utils::ArrayBufferView tmp22;		HX_STACK_VAR(tmp22,"tmp22");
							HX_STACK_LINE(271)
							{
								HX_STACK_LINE(271)
								::lime::utils::ArrayBufferView tmp23 = ::lime::utils::ArrayBufferView_obj::__new((int)0,(int)8);		HX_STACK_VAR(tmp23,"tmp23");
								HX_STACK_LINE(271)
								::lime::utils::ArrayBufferView _this = tmp23;		HX_STACK_VAR(_this,"_this");
								HX_STACK_LINE(271)
								::haxe::io::Bytes tmp24 = hx::Throw(HX_CSTRING("Invalid field access on null object"));		HX_STACK_VAR(tmp24,"tmp24");
								HX_STACK_LINE(271)
								::haxe::io::Bytes srcData = tmp24;		HX_STACK_VAR(srcData,"srcData");
								HX_STACK_LINE(271)
								int tmp25 = hx::Throw(HX_CSTRING("Invalid field access on null object"));		HX_STACK_VAR(tmp25,"tmp25");
								HX_STACK_LINE(271)
								int srcLength = tmp25;		HX_STACK_VAR(srcLength,"srcLength");
								HX_STACK_LINE(271)
								int tmp26 = hx::Throw(HX_CSTRING("Invalid field access on null object"));		HX_STACK_VAR(tmp26,"tmp26");
								HX_STACK_LINE(271)
								int srcByteOffset = tmp26;		HX_STACK_VAR(srcByteOffset,"srcByteOffset");
								HX_STACK_LINE(271)
								int tmp27 = hx::Throw(HX_CSTRING("Invalid field access on null object"));		HX_STACK_VAR(tmp27,"tmp27");
								HX_STACK_LINE(271)
								int srcElementSize = tmp27;		HX_STACK_VAR(srcElementSize,"srcElementSize");
								HX_STACK_LINE(271)
								int elementSize = _this->bytesPerElement;		HX_STACK_VAR(elementSize,"elementSize");
								HX_STACK_LINE(271)
								int tmp28 = hx::Throw(HX_CSTRING("Invalid field access on null object"));		HX_STACK_VAR(tmp28,"tmp28");
								HX_STACK_LINE(271)
								int tmp29 = _this->type;		HX_STACK_VAR(tmp29,"tmp29");
								HX_STACK_LINE(271)
								bool tmp30 = (tmp28 == tmp29);		HX_STACK_VAR(tmp30,"tmp30");
								HX_STACK_LINE(271)
								if ((tmp30)){
									HX_STACK_LINE(271)
									int srcLength1 = srcData->length;		HX_STACK_VAR(srcLength1,"srcLength1");
									HX_STACK_LINE(271)
									int tmp31 = (srcLength1 - srcByteOffset);		HX_STACK_VAR(tmp31,"tmp31");
									HX_STACK_LINE(271)
									int cloneLength = tmp31;		HX_STACK_VAR(cloneLength,"cloneLength");
									HX_STACK_LINE(271)
									::haxe::io::Bytes tmp32;		HX_STACK_VAR(tmp32,"tmp32");
									HX_STACK_LINE(271)
									{
										HX_STACK_LINE(271)
										::haxe::io::Bytes this2;		HX_STACK_VAR(this2,"this2");
										HX_STACK_LINE(271)
										int tmp33 = cloneLength;		HX_STACK_VAR(tmp33,"tmp33");
										HX_STACK_LINE(271)
										::haxe::io::Bytes tmp34 = ::haxe::io::Bytes_obj::alloc(tmp33);		HX_STACK_VAR(tmp34,"tmp34");
										HX_STACK_LINE(271)
										this2 = tmp34;
										HX_STACK_LINE(271)
										tmp32 = this2;
									}
									HX_STACK_LINE(271)
									_this->buffer = tmp32;
									HX_STACK_LINE(271)
									::haxe::io::Bytes tmp33 = srcData;		HX_STACK_VAR(tmp33,"tmp33");
									HX_STACK_LINE(271)
									int tmp34 = srcByteOffset;		HX_STACK_VAR(tmp34,"tmp34");
									HX_STACK_LINE(271)
									int tmp35 = cloneLength;		HX_STACK_VAR(tmp35,"tmp35");
									HX_STACK_LINE(271)
									_this->buffer->blit((int)0,tmp33,tmp34,tmp35);
								}
								else{
									HX_STACK_LINE(271)
									HX_STACK_DO_THROW(HX_HCSTRING("unimplemented","\x09","\x2f","\x74","\xb4"));
								}
								HX_STACK_LINE(271)
								int tmp31 = (_this->bytesPerElement * srcLength);		HX_STACK_VAR(tmp31,"tmp31");
								HX_STACK_LINE(271)
								_this->byteLength = tmp31;
								HX_STACK_LINE(271)
								_this->byteOffset = (int)0;
								HX_STACK_LINE(271)
								_this->length = srcLength;
								HX_STACK_LINE(271)
								tmp22 = _this;
							}
							HX_STACK_LINE(271)
							this1 = tmp22;
						}
						else{
							HX_STACK_LINE(271)
							bool tmp22 = false;		HX_STACK_VAR(tmp22,"tmp22");
							HX_STACK_LINE(271)
							if ((tmp22)){
								HX_STACK_LINE(271)
								::lime::utils::ArrayBufferView tmp23;		HX_STACK_VAR(tmp23,"tmp23");
								HX_STACK_LINE(271)
								{
									HX_STACK_LINE(271)
									::lime::utils::ArrayBufferView tmp24 = ::lime::utils::ArrayBufferView_obj::__new((int)0,(int)8);		HX_STACK_VAR(tmp24,"tmp24");
									HX_STACK_LINE(271)
									::lime::utils::ArrayBufferView _this = tmp24;		HX_STACK_VAR(_this,"_this");
									HX_STACK_LINE(271)
									int in_byteOffset = (int)0;		HX_STACK_VAR(in_byteOffset,"in_byteOffset");
									HX_STACK_LINE(271)
									bool tmp25 = (in_byteOffset < (int)0);		HX_STACK_VAR(tmp25,"tmp25");
									HX_STACK_LINE(271)
									if ((tmp25)){
										HX_STACK_LINE(271)
										HX_STACK_DO_THROW(::lime::utils::TAError_obj::RangeError);
									}
									HX_STACK_LINE(271)
									int tmp26 = hx::Mod(in_byteOffset,_this->bytesPerElement);		HX_STACK_VAR(tmp26,"tmp26");
									HX_STACK_LINE(271)
									bool tmp27 = (tmp26 != (int)0);		HX_STACK_VAR(tmp27,"tmp27");
									HX_STACK_LINE(271)
									if ((tmp27)){
										HX_STACK_LINE(271)
										HX_STACK_DO_THROW(::lime::utils::TAError_obj::RangeError);
									}
									HX_STACK_LINE(271)
									int tmp28 = hx::Throw(HX_CSTRING("Invalid field access on null object"));		HX_STACK_VAR(tmp28,"tmp28");
									HX_STACK_LINE(271)
									int bufferByteLength = tmp28;		HX_STACK_VAR(bufferByteLength,"bufferByteLength");
									HX_STACK_LINE(271)
									int elementSize = _this->bytesPerElement;		HX_STACK_VAR(elementSize,"elementSize");
									HX_STACK_LINE(271)
									int newByteLength = bufferByteLength;		HX_STACK_VAR(newByteLength,"newByteLength");
									HX_STACK_LINE(271)
									bool tmp29 = true;		HX_STACK_VAR(tmp29,"tmp29");
									HX_STACK_LINE(271)
									if ((tmp29)){
										HX_STACK_LINE(271)
										int tmp30 = (bufferByteLength - in_byteOffset);		HX_STACK_VAR(tmp30,"tmp30");
										HX_STACK_LINE(271)
										newByteLength = tmp30;
										HX_STACK_LINE(271)
										int tmp31 = hx::Mod(bufferByteLength,_this->bytesPerElement);		HX_STACK_VAR(tmp31,"tmp31");
										HX_STACK_LINE(271)
										bool tmp32 = (tmp31 != (int)0);		HX_STACK_VAR(tmp32,"tmp32");
										HX_STACK_LINE(271)
										if ((tmp32)){
											HX_STACK_LINE(271)
											HX_STACK_DO_THROW(::lime::utils::TAError_obj::RangeError);
										}
										HX_STACK_LINE(271)
										bool tmp33 = (newByteLength < (int)0);		HX_STACK_VAR(tmp33,"tmp33");
										HX_STACK_LINE(271)
										if ((tmp33)){
											HX_STACK_LINE(271)
											HX_STACK_DO_THROW(::lime::utils::TAError_obj::RangeError);
										}
									}
									else{
										HX_STACK_LINE(271)
										int tmp30 = (null() * _this->bytesPerElement);		HX_STACK_VAR(tmp30,"tmp30");
										HX_STACK_LINE(271)
										newByteLength = tmp30;
										HX_STACK_LINE(271)
										int tmp31 = (in_byteOffset + newByteLength);		HX_STACK_VAR(tmp31,"tmp31");
										HX_STACK_LINE(271)
										int newRange = tmp31;		HX_STACK_VAR(newRange,"newRange");
										HX_STACK_LINE(271)
										bool tmp32 = (newRange > bufferByteLength);		HX_STACK_VAR(tmp32,"tmp32");
										HX_STACK_LINE(271)
										if ((tmp32)){
											HX_STACK_LINE(271)
											HX_STACK_DO_THROW(::lime::utils::TAError_obj::RangeError);
										}
									}
									HX_STACK_LINE(271)
									_this->buffer = null();
									HX_STACK_LINE(271)
									_this->byteOffset = in_byteOffset;
									HX_STACK_LINE(271)
									_this->byteLength = newByteLength;
									HX_STACK_LINE(271)
									Float tmp30 = (Float(newByteLength) / Float(_this->bytesPerElement));		HX_STACK_VAR(tmp30,"tmp30");
									HX_STACK_LINE(271)
									int tmp31 = ::Std_obj::_int(tmp30);		HX_STACK_VAR(tmp31,"tmp31");
									HX_STACK_LINE(271)
									_this->length = tmp31;
									HX_STACK_LINE(271)
									tmp23 = _this;
								}
								HX_STACK_LINE(271)
								this1 = tmp23;
							}
							else{
								HX_STACK_LINE(271)
								HX_STACK_DO_THROW(HX_HCSTRING("Invalid constructor arguments for Float32Array","\x8e","\xc1","\xf4","\xd4"));
							}
						}
					}
				}
			}
			HX_STACK_LINE(271)
			tmp8 = this1;
		}
		HX_STACK_LINE(271)
		::lime::utils::ArrayBufferView tmp9 = ::lime::math::_Matrix4::Matrix4_Impl__obj::_new(tmp8);		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(271)
		return tmp9;
	}
}


STATIC_HX_DEFINE_DYNAMIC_FUNC4(Matrix4_Impl__obj,create2D,return )

::lime::utils::ArrayBufferView Matrix4_Impl__obj::createABCD( Float a,Float b,Float c,Float d,Float tx,Float ty,::lime::utils::ArrayBufferView matrix){
	HX_STACK_FRAME("lime.math._Matrix4.Matrix4_Impl_","createABCD",0x303c4746,"lime.math._Matrix4.Matrix4_Impl_.createABCD","lime/math/Matrix4.hx",281,0xeb65dbd8)
	HX_STACK_ARG(a,"a")
	HX_STACK_ARG(b,"b")
	HX_STACK_ARG(c,"c")
	HX_STACK_ARG(d,"d")
	HX_STACK_ARG(tx,"tx")
	HX_STACK_ARG(ty,"ty")
	HX_STACK_ARG(matrix,"matrix")
	HX_STACK_LINE(283)
	bool tmp = (matrix == null());		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(283)
	if ((tmp)){
		HX_STACK_LINE(283)
		::lime::utils::ArrayBufferView tmp1 = ::lime::math::_Matrix4::Matrix4_Impl__obj::_new(null());		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(283)
		matrix = tmp1;
	}
	HX_STACK_LINE(285)
	::lime::utils::ArrayBufferView tmp1 = matrix;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(285)
	Float tmp2 = a;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(285)
	::lime::math::_Matrix4::Matrix4_Impl__obj::set(tmp1,(int)0,tmp2);
	HX_STACK_LINE(286)
	::lime::utils::ArrayBufferView tmp3 = matrix;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(286)
	Float tmp4 = b;		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(286)
	::lime::math::_Matrix4::Matrix4_Impl__obj::set(tmp3,(int)1,tmp4);
	HX_STACK_LINE(287)
	::lime::utils::ArrayBufferView tmp5 = matrix;		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(287)
	::lime::math::_Matrix4::Matrix4_Impl__obj::set(tmp5,(int)2,(int)0);
	HX_STACK_LINE(288)
	::lime::utils::ArrayBufferView tmp6 = matrix;		HX_STACK_VAR(tmp6,"tmp6");
	HX_STACK_LINE(288)
	::lime::math::_Matrix4::Matrix4_Impl__obj::set(tmp6,(int)3,(int)0);
	HX_STACK_LINE(290)
	::lime::utils::ArrayBufferView tmp7 = matrix;		HX_STACK_VAR(tmp7,"tmp7");
	HX_STACK_LINE(290)
	Float tmp8 = c;		HX_STACK_VAR(tmp8,"tmp8");
	HX_STACK_LINE(290)
	::lime::math::_Matrix4::Matrix4_Impl__obj::set(tmp7,(int)4,tmp8);
	HX_STACK_LINE(291)
	::lime::utils::ArrayBufferView tmp9 = matrix;		HX_STACK_VAR(tmp9,"tmp9");
	HX_STACK_LINE(291)
	Float tmp10 = d;		HX_STACK_VAR(tmp10,"tmp10");
	HX_STACK_LINE(291)
	::lime::math::_Matrix4::Matrix4_Impl__obj::set(tmp9,(int)5,tmp10);
	HX_STACK_LINE(292)
	::lime::utils::ArrayBufferView tmp11 = matrix;		HX_STACK_VAR(tmp11,"tmp11");
	HX_STACK_LINE(292)
	::lime::math::_Matrix4::Matrix4_Impl__obj::set(tmp11,(int)6,(int)0);
	HX_STACK_LINE(293)
	::lime::utils::ArrayBufferView tmp12 = matrix;		HX_STACK_VAR(tmp12,"tmp12");
	HX_STACK_LINE(293)
	::lime::math::_Matrix4::Matrix4_Impl__obj::set(tmp12,(int)7,(int)0);
	HX_STACK_LINE(295)
	::lime::utils::ArrayBufferView tmp13 = matrix;		HX_STACK_VAR(tmp13,"tmp13");
	HX_STACK_LINE(295)
	::lime::math::_Matrix4::Matrix4_Impl__obj::set(tmp13,(int)8,(int)0);
	HX_STACK_LINE(296)
	::lime::utils::ArrayBufferView tmp14 = matrix;		HX_STACK_VAR(tmp14,"tmp14");
	HX_STACK_LINE(296)
	::lime::math::_Matrix4::Matrix4_Impl__obj::set(tmp14,(int)9,(int)0);
	HX_STACK_LINE(297)
	::lime::utils::ArrayBufferView tmp15 = matrix;		HX_STACK_VAR(tmp15,"tmp15");
	HX_STACK_LINE(297)
	::lime::math::_Matrix4::Matrix4_Impl__obj::set(tmp15,(int)10,(int)1);
	HX_STACK_LINE(298)
	::lime::utils::ArrayBufferView tmp16 = matrix;		HX_STACK_VAR(tmp16,"tmp16");
	HX_STACK_LINE(298)
	::lime::math::_Matrix4::Matrix4_Impl__obj::set(tmp16,(int)11,(int)0);
	HX_STACK_LINE(300)
	::lime::utils::ArrayBufferView tmp17 = matrix;		HX_STACK_VAR(tmp17,"tmp17");
	HX_STACK_LINE(300)
	Float tmp18 = tx;		HX_STACK_VAR(tmp18,"tmp18");
	HX_STACK_LINE(300)
	::lime::math::_Matrix4::Matrix4_Impl__obj::set(tmp17,(int)12,tmp18);
	HX_STACK_LINE(301)
	::lime::utils::ArrayBufferView tmp19 = matrix;		HX_STACK_VAR(tmp19,"tmp19");
	HX_STACK_LINE(301)
	Float tmp20 = ty;		HX_STACK_VAR(tmp20,"tmp20");
	HX_STACK_LINE(301)
	::lime::math::_Matrix4::Matrix4_Impl__obj::set(tmp19,(int)13,tmp20);
	HX_STACK_LINE(302)
	::lime::utils::ArrayBufferView tmp21 = matrix;		HX_STACK_VAR(tmp21,"tmp21");
	HX_STACK_LINE(302)
	::lime::math::_Matrix4::Matrix4_Impl__obj::set(tmp21,(int)14,(int)0);
	HX_STACK_LINE(303)
	::lime::utils::ArrayBufferView tmp22 = matrix;		HX_STACK_VAR(tmp22,"tmp22");
	HX_STACK_LINE(303)
	::lime::math::_Matrix4::Matrix4_Impl__obj::set(tmp22,(int)15,(int)1);
	HX_STACK_LINE(305)
	::lime::utils::ArrayBufferView tmp23 = matrix;		HX_STACK_VAR(tmp23,"tmp23");
	HX_STACK_LINE(305)
	return tmp23;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC7(Matrix4_Impl__obj,createABCD,return )

::lime::utils::ArrayBufferView Matrix4_Impl__obj::createOrtho( Float x0,Float x1,Float y0,Float y1,Float zNear,Float zFar){
	HX_STACK_FRAME("lime.math._Matrix4.Matrix4_Impl_","createOrtho",0x33fdc114,"lime.math._Matrix4.Matrix4_Impl_.createOrtho","lime/math/Matrix4.hx",310,0xeb65dbd8)
	HX_STACK_ARG(x0,"x0")
	HX_STACK_ARG(x1,"x1")
	HX_STACK_ARG(y0,"y0")
	HX_STACK_ARG(y1,"y1")
	HX_STACK_ARG(zNear,"zNear")
	HX_STACK_ARG(zFar,"zFar")
	HX_STACK_LINE(312)
	Float tmp = (x1 - x0);		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(312)
	Float tmp1 = (Float(((Float)1.0)) / Float(tmp));		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(312)
	Float sx = tmp1;		HX_STACK_VAR(sx,"sx");
	HX_STACK_LINE(313)
	Float tmp2 = (y1 - y0);		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(313)
	Float tmp3 = (Float(((Float)1.0)) / Float(tmp2));		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(313)
	Float sy = tmp3;		HX_STACK_VAR(sy,"sy");
	HX_STACK_LINE(314)
	Float tmp4 = (zFar - zNear);		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(314)
	Float tmp5 = (Float(((Float)1.0)) / Float(tmp4));		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(314)
	Float sz = tmp5;		HX_STACK_VAR(sz,"sz");
	HX_STACK_LINE(316)
	::lime::utils::ArrayBufferView tmp6;		HX_STACK_VAR(tmp6,"tmp6");
	HX_STACK_LINE(316)
	{
		HX_STACK_LINE(317)
		Float tmp7 = (((Float)2.0) * sx);		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(318)
		Float tmp8 = (((Float)2.0) * sy);		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(319)
		Float tmp9 = (((Float)-2.) * sz);		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(320)
		Float tmp10 = (x0 + x1);		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(320)
		Float tmp11 = -(tmp10);		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(320)
		Float tmp12 = sx;		HX_STACK_VAR(tmp12,"tmp12");
		HX_STACK_LINE(320)
		Float tmp13 = (tmp11 * tmp12);		HX_STACK_VAR(tmp13,"tmp13");
		HX_STACK_LINE(320)
		Float tmp14 = (y0 + y1);		HX_STACK_VAR(tmp14,"tmp14");
		HX_STACK_LINE(320)
		Float tmp15 = -(tmp14);		HX_STACK_VAR(tmp15,"tmp15");
		HX_STACK_LINE(320)
		Float tmp16 = sy;		HX_STACK_VAR(tmp16,"tmp16");
		HX_STACK_LINE(320)
		Float tmp17 = (tmp15 * tmp16);		HX_STACK_VAR(tmp17,"tmp17");
		HX_STACK_LINE(320)
		Float tmp18 = (zNear + zFar);		HX_STACK_VAR(tmp18,"tmp18");
		HX_STACK_LINE(320)
		Float tmp19 = -(tmp18);		HX_STACK_VAR(tmp19,"tmp19");
		HX_STACK_LINE(320)
		Float tmp20 = sz;		HX_STACK_VAR(tmp20,"tmp20");
		HX_STACK_LINE(320)
		Float tmp21 = (tmp19 * tmp20);		HX_STACK_VAR(tmp21,"tmp21");
		HX_STACK_LINE(316)
		cpp::ArrayBase array = Array_obj< Float >::__new().Add(tmp7).Add((int)0).Add((int)0).Add((int)0).Add((int)0).Add(tmp8).Add((int)0).Add((int)0).Add((int)0).Add((int)0).Add(tmp9).Add((int)0).Add(tmp13).Add(tmp17).Add(tmp21).Add((int)1);		HX_STACK_VAR(array,"array");
		HX_STACK_LINE(316)
		::lime::utils::ArrayBufferView this1;		HX_STACK_VAR(this1,"this1");
		HX_STACK_LINE(316)
		bool tmp22 = false;		HX_STACK_VAR(tmp22,"tmp22");
		HX_STACK_LINE(316)
		if ((tmp22)){
			HX_STACK_LINE(316)
			::lime::utils::ArrayBufferView tmp23 = ::lime::utils::ArrayBufferView_obj::__new(null(),(int)8);		HX_STACK_VAR(tmp23,"tmp23");
			HX_STACK_LINE(316)
			this1 = tmp23;
		}
		else{
			HX_STACK_LINE(316)
			bool tmp23 = (array != null());		HX_STACK_VAR(tmp23,"tmp23");
			HX_STACK_LINE(316)
			if ((tmp23)){
				HX_STACK_LINE(316)
				::lime::utils::ArrayBufferView tmp24;		HX_STACK_VAR(tmp24,"tmp24");
				HX_STACK_LINE(316)
				{
					HX_STACK_LINE(316)
					::lime::utils::ArrayBufferView tmp25 = ::lime::utils::ArrayBufferView_obj::__new((int)0,(int)8);		HX_STACK_VAR(tmp25,"tmp25");
					HX_STACK_LINE(316)
					::lime::utils::ArrayBufferView _this = tmp25;		HX_STACK_VAR(_this,"_this");
					HX_STACK_LINE(316)
					_this->byteOffset = (int)0;
					HX_STACK_LINE(316)
					_this->length = array->__Field(HX_HCSTRING("length","\xe6","\x94","\x07","\x9f"), hx::paccDynamic );
					HX_STACK_LINE(316)
					int tmp26 = (_this->length * _this->bytesPerElement);		HX_STACK_VAR(tmp26,"tmp26");
					HX_STACK_LINE(316)
					_this->byteLength = tmp26;
					HX_STACK_LINE(316)
					::haxe::io::Bytes tmp27;		HX_STACK_VAR(tmp27,"tmp27");
					HX_STACK_LINE(316)
					{
						HX_STACK_LINE(316)
						::haxe::io::Bytes this2;		HX_STACK_VAR(this2,"this2");
						HX_STACK_LINE(316)
						int tmp28 = _this->byteLength;		HX_STACK_VAR(tmp28,"tmp28");
						HX_STACK_LINE(316)
						::haxe::io::Bytes tmp29 = ::haxe::io::Bytes_obj::alloc(tmp28);		HX_STACK_VAR(tmp29,"tmp29");
						HX_STACK_LINE(316)
						this2 = tmp29;
						HX_STACK_LINE(316)
						tmp27 = this2;
					}
					HX_STACK_LINE(316)
					_this->buffer = tmp27;
					HX_STACK_LINE(316)
					_this->copyFromArray(((Array< Float >)(array)),null());
					HX_STACK_LINE(316)
					tmp24 = _this;
				}
				HX_STACK_LINE(316)
				this1 = tmp24;
			}
			else{
				HX_STACK_LINE(316)
				bool tmp24 = false;		HX_STACK_VAR(tmp24,"tmp24");
				HX_STACK_LINE(316)
				if ((tmp24)){
					HX_STACK_LINE(316)
					::lime::utils::ArrayBufferView tmp25;		HX_STACK_VAR(tmp25,"tmp25");
					HX_STACK_LINE(316)
					{
						HX_STACK_LINE(316)
						::lime::utils::ArrayBufferView tmp26 = ::lime::utils::ArrayBufferView_obj::__new((int)0,(int)8);		HX_STACK_VAR(tmp26,"tmp26");
						HX_STACK_LINE(316)
						::lime::utils::ArrayBufferView _this = tmp26;		HX_STACK_VAR(_this,"_this");
						HX_STACK_LINE(316)
						cpp::ArrayBase array1 = hx::Throw(HX_CSTRING("Invalid field access on null object"));		HX_STACK_VAR(array1,"array1");
						HX_STACK_LINE(316)
						_this->byteOffset = (int)0;
						HX_STACK_LINE(316)
						_this->length = array1->__Field(HX_HCSTRING("length","\xe6","\x94","\x07","\x9f"), hx::paccDynamic );
						HX_STACK_LINE(316)
						int tmp27 = (_this->length * _this->bytesPerElement);		HX_STACK_VAR(tmp27,"tmp27");
						HX_STACK_LINE(316)
						_this->byteLength = tmp27;
						HX_STACK_LINE(316)
						::haxe::io::Bytes tmp28;		HX_STACK_VAR(tmp28,"tmp28");
						HX_STACK_LINE(316)
						{
							HX_STACK_LINE(316)
							::haxe::io::Bytes this2;		HX_STACK_VAR(this2,"this2");
							HX_STACK_LINE(316)
							int tmp29 = _this->byteLength;		HX_STACK_VAR(tmp29,"tmp29");
							HX_STACK_LINE(316)
							::haxe::io::Bytes tmp30 = ::haxe::io::Bytes_obj::alloc(tmp29);		HX_STACK_VAR(tmp30,"tmp30");
							HX_STACK_LINE(316)
							this2 = tmp30;
							HX_STACK_LINE(316)
							tmp28 = this2;
						}
						HX_STACK_LINE(316)
						_this->buffer = tmp28;
						HX_STACK_LINE(316)
						_this->copyFromArray(((Array< Float >)(array1)),null());
						HX_STACK_LINE(316)
						tmp25 = _this;
					}
					HX_STACK_LINE(316)
					this1 = tmp25;
				}
				else{
					HX_STACK_LINE(316)
					bool tmp25 = false;		HX_STACK_VAR(tmp25,"tmp25");
					HX_STACK_LINE(316)
					if ((tmp25)){
						HX_STACK_LINE(316)
						::lime::utils::ArrayBufferView tmp26;		HX_STACK_VAR(tmp26,"tmp26");
						HX_STACK_LINE(316)
						{
							HX_STACK_LINE(316)
							::lime::utils::ArrayBufferView tmp27 = ::lime::utils::ArrayBufferView_obj::__new((int)0,(int)8);		HX_STACK_VAR(tmp27,"tmp27");
							HX_STACK_LINE(316)
							::lime::utils::ArrayBufferView _this = tmp27;		HX_STACK_VAR(_this,"_this");
							HX_STACK_LINE(316)
							::haxe::io::Bytes tmp28 = hx::Throw(HX_CSTRING("Invalid field access on null object"));		HX_STACK_VAR(tmp28,"tmp28");
							HX_STACK_LINE(316)
							::haxe::io::Bytes srcData = tmp28;		HX_STACK_VAR(srcData,"srcData");
							HX_STACK_LINE(316)
							int tmp29 = hx::Throw(HX_CSTRING("Invalid field access on null object"));		HX_STACK_VAR(tmp29,"tmp29");
							HX_STACK_LINE(316)
							int srcLength = tmp29;		HX_STACK_VAR(srcLength,"srcLength");
							HX_STACK_LINE(316)
							int tmp30 = hx::Throw(HX_CSTRING("Invalid field access on null object"));		HX_STACK_VAR(tmp30,"tmp30");
							HX_STACK_LINE(316)
							int srcByteOffset = tmp30;		HX_STACK_VAR(srcByteOffset,"srcByteOffset");
							HX_STACK_LINE(316)
							int tmp31 = hx::Throw(HX_CSTRING("Invalid field access on null object"));		HX_STACK_VAR(tmp31,"tmp31");
							HX_STACK_LINE(316)
							int srcElementSize = tmp31;		HX_STACK_VAR(srcElementSize,"srcElementSize");
							HX_STACK_LINE(316)
							int elementSize = _this->bytesPerElement;		HX_STACK_VAR(elementSize,"elementSize");
							HX_STACK_LINE(316)
							int tmp32 = hx::Throw(HX_CSTRING("Invalid field access on null object"));		HX_STACK_VAR(tmp32,"tmp32");
							HX_STACK_LINE(316)
							int tmp33 = _this->type;		HX_STACK_VAR(tmp33,"tmp33");
							HX_STACK_LINE(316)
							bool tmp34 = (tmp32 == tmp33);		HX_STACK_VAR(tmp34,"tmp34");
							HX_STACK_LINE(316)
							if ((tmp34)){
								HX_STACK_LINE(316)
								int srcLength1 = srcData->length;		HX_STACK_VAR(srcLength1,"srcLength1");
								HX_STACK_LINE(316)
								int tmp35 = (srcLength1 - srcByteOffset);		HX_STACK_VAR(tmp35,"tmp35");
								HX_STACK_LINE(316)
								int cloneLength = tmp35;		HX_STACK_VAR(cloneLength,"cloneLength");
								HX_STACK_LINE(316)
								::haxe::io::Bytes tmp36;		HX_STACK_VAR(tmp36,"tmp36");
								HX_STACK_LINE(316)
								{
									HX_STACK_LINE(316)
									::haxe::io::Bytes this2;		HX_STACK_VAR(this2,"this2");
									HX_STACK_LINE(316)
									int tmp37 = cloneLength;		HX_STACK_VAR(tmp37,"tmp37");
									HX_STACK_LINE(316)
									::haxe::io::Bytes tmp38 = ::haxe::io::Bytes_obj::alloc(tmp37);		HX_STACK_VAR(tmp38,"tmp38");
									HX_STACK_LINE(316)
									this2 = tmp38;
									HX_STACK_LINE(316)
									tmp36 = this2;
								}
								HX_STACK_LINE(316)
								_this->buffer = tmp36;
								HX_STACK_LINE(316)
								::haxe::io::Bytes tmp37 = srcData;		HX_STACK_VAR(tmp37,"tmp37");
								HX_STACK_LINE(316)
								int tmp38 = srcByteOffset;		HX_STACK_VAR(tmp38,"tmp38");
								HX_STACK_LINE(316)
								int tmp39 = cloneLength;		HX_STACK_VAR(tmp39,"tmp39");
								HX_STACK_LINE(316)
								_this->buffer->blit((int)0,tmp37,tmp38,tmp39);
							}
							else{
								HX_STACK_LINE(316)
								HX_STACK_DO_THROW(HX_HCSTRING("unimplemented","\x09","\x2f","\x74","\xb4"));
							}
							HX_STACK_LINE(316)
							int tmp35 = (_this->bytesPerElement * srcLength);		HX_STACK_VAR(tmp35,"tmp35");
							HX_STACK_LINE(316)
							_this->byteLength = tmp35;
							HX_STACK_LINE(316)
							_this->byteOffset = (int)0;
							HX_STACK_LINE(316)
							_this->length = srcLength;
							HX_STACK_LINE(316)
							tmp26 = _this;
						}
						HX_STACK_LINE(316)
						this1 = tmp26;
					}
					else{
						HX_STACK_LINE(316)
						bool tmp26 = false;		HX_STACK_VAR(tmp26,"tmp26");
						HX_STACK_LINE(316)
						if ((tmp26)){
							HX_STACK_LINE(316)
							::lime::utils::ArrayBufferView tmp27;		HX_STACK_VAR(tmp27,"tmp27");
							HX_STACK_LINE(316)
							{
								HX_STACK_LINE(316)
								::lime::utils::ArrayBufferView tmp28 = ::lime::utils::ArrayBufferView_obj::__new((int)0,(int)8);		HX_STACK_VAR(tmp28,"tmp28");
								HX_STACK_LINE(316)
								::lime::utils::ArrayBufferView _this = tmp28;		HX_STACK_VAR(_this,"_this");
								HX_STACK_LINE(316)
								int in_byteOffset = (int)0;		HX_STACK_VAR(in_byteOffset,"in_byteOffset");
								HX_STACK_LINE(316)
								bool tmp29 = (in_byteOffset < (int)0);		HX_STACK_VAR(tmp29,"tmp29");
								HX_STACK_LINE(316)
								if ((tmp29)){
									HX_STACK_LINE(316)
									HX_STACK_DO_THROW(::lime::utils::TAError_obj::RangeError);
								}
								HX_STACK_LINE(316)
								int tmp30 = hx::Mod(in_byteOffset,_this->bytesPerElement);		HX_STACK_VAR(tmp30,"tmp30");
								HX_STACK_LINE(316)
								bool tmp31 = (tmp30 != (int)0);		HX_STACK_VAR(tmp31,"tmp31");
								HX_STACK_LINE(316)
								if ((tmp31)){
									HX_STACK_LINE(316)
									HX_STACK_DO_THROW(::lime::utils::TAError_obj::RangeError);
								}
								HX_STACK_LINE(316)
								int tmp32 = hx::Throw(HX_CSTRING("Invalid field access on null object"));		HX_STACK_VAR(tmp32,"tmp32");
								HX_STACK_LINE(316)
								int bufferByteLength = tmp32;		HX_STACK_VAR(bufferByteLength,"bufferByteLength");
								HX_STACK_LINE(316)
								int elementSize = _this->bytesPerElement;		HX_STACK_VAR(elementSize,"elementSize");
								HX_STACK_LINE(316)
								int newByteLength = bufferByteLength;		HX_STACK_VAR(newByteLength,"newByteLength");
								HX_STACK_LINE(316)
								bool tmp33 = true;		HX_STACK_VAR(tmp33,"tmp33");
								HX_STACK_LINE(316)
								if ((tmp33)){
									HX_STACK_LINE(316)
									int tmp34 = (bufferByteLength - in_byteOffset);		HX_STACK_VAR(tmp34,"tmp34");
									HX_STACK_LINE(316)
									newByteLength = tmp34;
									HX_STACK_LINE(316)
									int tmp35 = hx::Mod(bufferByteLength,_this->bytesPerElement);		HX_STACK_VAR(tmp35,"tmp35");
									HX_STACK_LINE(316)
									bool tmp36 = (tmp35 != (int)0);		HX_STACK_VAR(tmp36,"tmp36");
									HX_STACK_LINE(316)
									if ((tmp36)){
										HX_STACK_LINE(316)
										HX_STACK_DO_THROW(::lime::utils::TAError_obj::RangeError);
									}
									HX_STACK_LINE(316)
									bool tmp37 = (newByteLength < (int)0);		HX_STACK_VAR(tmp37,"tmp37");
									HX_STACK_LINE(316)
									if ((tmp37)){
										HX_STACK_LINE(316)
										HX_STACK_DO_THROW(::lime::utils::TAError_obj::RangeError);
									}
								}
								else{
									HX_STACK_LINE(316)
									int tmp34 = (null() * _this->bytesPerElement);		HX_STACK_VAR(tmp34,"tmp34");
									HX_STACK_LINE(316)
									newByteLength = tmp34;
									HX_STACK_LINE(316)
									int tmp35 = (in_byteOffset + newByteLength);		HX_STACK_VAR(tmp35,"tmp35");
									HX_STACK_LINE(316)
									int newRange = tmp35;		HX_STACK_VAR(newRange,"newRange");
									HX_STACK_LINE(316)
									bool tmp36 = (newRange > bufferByteLength);		HX_STACK_VAR(tmp36,"tmp36");
									HX_STACK_LINE(316)
									if ((tmp36)){
										HX_STACK_LINE(316)
										HX_STACK_DO_THROW(::lime::utils::TAError_obj::RangeError);
									}
								}
								HX_STACK_LINE(316)
								_this->buffer = null();
								HX_STACK_LINE(316)
								_this->byteOffset = in_byteOffset;
								HX_STACK_LINE(316)
								_this->byteLength = newByteLength;
								HX_STACK_LINE(316)
								Float tmp34 = (Float(newByteLength) / Float(_this->bytesPerElement));		HX_STACK_VAR(tmp34,"tmp34");
								HX_STACK_LINE(316)
								int tmp35 = ::Std_obj::_int(tmp34);		HX_STACK_VAR(tmp35,"tmp35");
								HX_STACK_LINE(316)
								_this->length = tmp35;
								HX_STACK_LINE(316)
								tmp27 = _this;
							}
							HX_STACK_LINE(316)
							this1 = tmp27;
						}
						else{
							HX_STACK_LINE(316)
							HX_STACK_DO_THROW(HX_HCSTRING("Invalid constructor arguments for Float32Array","\x8e","\xc1","\xf4","\xd4"));
						}
					}
				}
			}
		}
		HX_STACK_LINE(316)
		tmp6 = this1;
	}
	HX_STACK_LINE(316)
	::lime::utils::ArrayBufferView tmp7 = ::lime::math::_Matrix4::Matrix4_Impl__obj::_new(tmp6);		HX_STACK_VAR(tmp7,"tmp7");
	HX_STACK_LINE(316)
	return tmp7;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC6(Matrix4_Impl__obj,createOrtho,return )

Void Matrix4_Impl__obj::copyRowTo( ::lime::utils::ArrayBufferView this1,int row,::lime::math::Vector4 vector){
{
		HX_STACK_FRAME("lime.math._Matrix4.Matrix4_Impl_","copyRowTo",0x543beeb8,"lime.math._Matrix4.Matrix4_Impl_.copyRowTo","lime/math/Matrix4.hx",326,0xeb65dbd8)
		HX_STACK_ARG(this1,"this1")
		HX_STACK_ARG(row,"row")
		HX_STACK_ARG(vector,"vector")
		HX_STACK_LINE(328)
		int tmp = row;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(328)
		switch( (int)(tmp)){
			case (int)0: {
				HX_STACK_LINE(332)
				Float tmp1 = ::__hxcpp_memory_get_float(this1->buffer->b,this1->byteOffset);		HX_STACK_VAR(tmp1,"tmp1");
				HX_STACK_LINE(332)
				vector->x = tmp1;
				HX_STACK_LINE(333)
				Float tmp2 = ::__hxcpp_memory_get_float(this1->buffer->b,(this1->byteOffset + (int)16));		HX_STACK_VAR(tmp2,"tmp2");
				HX_STACK_LINE(333)
				vector->y = tmp2;
				HX_STACK_LINE(334)
				Float tmp3 = ::__hxcpp_memory_get_float(this1->buffer->b,(this1->byteOffset + (int)32));		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(334)
				vector->z = tmp3;
				HX_STACK_LINE(335)
				Float tmp4 = ::__hxcpp_memory_get_float(this1->buffer->b,(this1->byteOffset + (int)48));		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(335)
				vector->w = tmp4;
			}
			;break;
			case (int)1: {
				HX_STACK_LINE(339)
				Float tmp1 = ::__hxcpp_memory_get_float(this1->buffer->b,(this1->byteOffset + (int)4));		HX_STACK_VAR(tmp1,"tmp1");
				HX_STACK_LINE(339)
				vector->x = tmp1;
				HX_STACK_LINE(340)
				Float tmp2 = ::__hxcpp_memory_get_float(this1->buffer->b,(this1->byteOffset + (int)20));		HX_STACK_VAR(tmp2,"tmp2");
				HX_STACK_LINE(340)
				vector->y = tmp2;
				HX_STACK_LINE(341)
				Float tmp3 = ::__hxcpp_memory_get_float(this1->buffer->b,(this1->byteOffset + (int)36));		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(341)
				vector->z = tmp3;
				HX_STACK_LINE(342)
				Float tmp4 = ::__hxcpp_memory_get_float(this1->buffer->b,(this1->byteOffset + (int)52));		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(342)
				vector->w = tmp4;
			}
			;break;
			case (int)2: {
				HX_STACK_LINE(346)
				Float tmp1 = ::__hxcpp_memory_get_float(this1->buffer->b,(this1->byteOffset + (int)8));		HX_STACK_VAR(tmp1,"tmp1");
				HX_STACK_LINE(346)
				vector->x = tmp1;
				HX_STACK_LINE(347)
				Float tmp2 = ::__hxcpp_memory_get_float(this1->buffer->b,(this1->byteOffset + (int)24));		HX_STACK_VAR(tmp2,"tmp2");
				HX_STACK_LINE(347)
				vector->y = tmp2;
				HX_STACK_LINE(348)
				Float tmp3 = ::__hxcpp_memory_get_float(this1->buffer->b,(this1->byteOffset + (int)40));		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(348)
				vector->z = tmp3;
				HX_STACK_LINE(349)
				Float tmp4 = ::__hxcpp_memory_get_float(this1->buffer->b,(this1->byteOffset + (int)56));		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(349)
				vector->w = tmp4;
			}
			;break;
			case (int)3: {
				HX_STACK_LINE(353)
				Float tmp1 = ::__hxcpp_memory_get_float(this1->buffer->b,(this1->byteOffset + (int)12));		HX_STACK_VAR(tmp1,"tmp1");
				HX_STACK_LINE(353)
				vector->x = tmp1;
				HX_STACK_LINE(354)
				Float tmp2 = ::__hxcpp_memory_get_float(this1->buffer->b,(this1->byteOffset + (int)28));		HX_STACK_VAR(tmp2,"tmp2");
				HX_STACK_LINE(354)
				vector->y = tmp2;
				HX_STACK_LINE(355)
				Float tmp3 = ::__hxcpp_memory_get_float(this1->buffer->b,(this1->byteOffset + (int)44));		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(355)
				vector->z = tmp3;
				HX_STACK_LINE(356)
				Float tmp4 = ::__hxcpp_memory_get_float(this1->buffer->b,(this1->byteOffset + (int)60));		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(356)
				vector->w = tmp4;
			}
			;break;
			default: {
				HX_STACK_LINE(360)
				::String tmp1 = (HX_HCSTRING("Row ","\xe6","\x20","\x88","\x36") + row);		HX_STACK_VAR(tmp1,"tmp1");
				HX_STACK_LINE(360)
				::String tmp2 = (tmp1 + HX_HCSTRING(" out of bounds [0, ..., 3]","\x2f","\x8b","\x46","\x17"));		HX_STACK_VAR(tmp2,"tmp2");
				HX_STACK_LINE(360)
				Dynamic tmp3 = hx::SourceInfo(HX_HCSTRING("Matrix4.hx","\xeb","\x49","\x5a","\x69"),360,HX_HCSTRING("lime.math._Matrix4.Matrix4_Impl_","\xe6","\xfe","\xf9","\xcb"),HX_HCSTRING("copyRowTo","\x40","\x8a","\x62","\x73"));		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(360)
				::lime::utils::Log_obj::error(tmp2,tmp3);
			}
		}
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC3(Matrix4_Impl__obj,copyRowTo,(void))

Void Matrix4_Impl__obj::copyToMatrix4( ::lime::utils::ArrayBufferView this1,::lime::utils::ArrayBufferView other){
{
		HX_STACK_FRAME("lime.math._Matrix4.Matrix4_Impl_","copyToMatrix4",0x1032009b,"lime.math._Matrix4.Matrix4_Impl_.copyToMatrix4","lime/math/Matrix4.hx",369,0xeb65dbd8)
		HX_STACK_ARG(this1,"this1")
		HX_STACK_ARG(other,"other")
		HX_STACK_LINE(369)
		::lime::utils::ArrayBufferView tmp;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(369)
		tmp = hx::TCast< ::lime::utils::ArrayBufferView >::cast(other);
		HX_STACK_LINE(369)
		::lime::utils::ArrayBufferView _this = tmp;		HX_STACK_VAR(_this,"_this");
		HX_STACK_LINE(369)
		int offset = (int)0;		HX_STACK_VAR(offset,"offset");
		HX_STACK_LINE(369)
		bool tmp1 = (this1 != null());		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(369)
		bool tmp2;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(369)
		if ((tmp1)){
			HX_STACK_LINE(369)
			tmp2 = true;
		}
		else{
			HX_STACK_LINE(369)
			tmp2 = false;
		}
		HX_STACK_LINE(369)
		if ((tmp2)){
			HX_STACK_LINE(369)
			int tmp3 = (offset * _this->bytesPerElement);		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(369)
			::haxe::io::Bytes tmp4 = this1->buffer;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(369)
			int tmp5 = this1->byteOffset;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(369)
			int tmp6 = this1->byteLength;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(369)
			_this->buffer->blit(tmp3,tmp4,tmp5,tmp6);
		}
		else{
			HX_STACK_LINE(369)
			bool tmp3 = false;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(369)
			bool tmp4;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(369)
			if ((tmp3)){
				HX_STACK_LINE(369)
				tmp4 = (this1 == null());
			}
			else{
				HX_STACK_LINE(369)
				tmp4 = false;
			}
			HX_STACK_LINE(369)
			if ((tmp4)){
				HX_STACK_LINE(369)
				int tmp5 = offset;		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(369)
				_this->copyFromArray(((Array< Float >)(null())),tmp5);
			}
			else{
				HX_STACK_LINE(369)
				HX_STACK_DO_THROW(HX_HCSTRING("Invalid .set call. either view, or array must be not-null.","\x64","\xba","\xb7","\x6c"));
			}
		}
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(Matrix4_Impl__obj,copyToMatrix4,(void))

::lime::math::Vector4 Matrix4_Impl__obj::deltaTransformVector( ::lime::utils::ArrayBufferView this1,::lime::math::Vector4 v){
	HX_STACK_FRAME("lime.math._Matrix4.Matrix4_Impl_","deltaTransformVector",0x66f080bf,"lime.math._Matrix4.Matrix4_Impl_.deltaTransformVector","lime/math/Matrix4.hx",474,0xeb65dbd8)
	HX_STACK_ARG(this1,"this1")
	HX_STACK_ARG(v,"v")
	HX_STACK_LINE(476)
	Float x = v->x;		HX_STACK_VAR(x,"x");
	HX_STACK_LINE(476)
	Float y = v->y;		HX_STACK_VAR(y,"y");
	HX_STACK_LINE(476)
	Float z = v->z;		HX_STACK_VAR(z,"z");
	HX_STACK_LINE(479)
	Float tmp = x;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(479)
	Float tmp1 = ::__hxcpp_memory_get_float(this1->buffer->b,this1->byteOffset);		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(479)
	Float tmp2 = (tmp * tmp1);		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(479)
	Float tmp3 = y;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(479)
	Float tmp4 = ::__hxcpp_memory_get_float(this1->buffer->b,(this1->byteOffset + (int)16));		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(479)
	Float tmp5 = (tmp3 * tmp4);		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(479)
	Float tmp6 = (tmp2 + tmp5);		HX_STACK_VAR(tmp6,"tmp6");
	HX_STACK_LINE(479)
	Float tmp7 = z;		HX_STACK_VAR(tmp7,"tmp7");
	HX_STACK_LINE(479)
	Float tmp8 = ::__hxcpp_memory_get_float(this1->buffer->b,(this1->byteOffset + (int)32));		HX_STACK_VAR(tmp8,"tmp8");
	HX_STACK_LINE(479)
	Float tmp9 = (tmp7 * tmp8);		HX_STACK_VAR(tmp9,"tmp9");
	HX_STACK_LINE(479)
	Float tmp10 = (tmp6 + tmp9);		HX_STACK_VAR(tmp10,"tmp10");
	HX_STACK_LINE(479)
	Float tmp11 = ::__hxcpp_memory_get_float(this1->buffer->b,(this1->byteOffset + (int)12));		HX_STACK_VAR(tmp11,"tmp11");
	HX_STACK_LINE(479)
	Float tmp12 = (tmp10 + tmp11);		HX_STACK_VAR(tmp12,"tmp12");
	HX_STACK_LINE(480)
	Float tmp13 = x;		HX_STACK_VAR(tmp13,"tmp13");
	HX_STACK_LINE(480)
	Float tmp14 = ::__hxcpp_memory_get_float(this1->buffer->b,(this1->byteOffset + (int)4));		HX_STACK_VAR(tmp14,"tmp14");
	HX_STACK_LINE(480)
	Float tmp15 = (tmp13 * tmp14);		HX_STACK_VAR(tmp15,"tmp15");
	HX_STACK_LINE(480)
	Float tmp16 = y;		HX_STACK_VAR(tmp16,"tmp16");
	HX_STACK_LINE(480)
	Float tmp17 = ::__hxcpp_memory_get_float(this1->buffer->b,(this1->byteOffset + (int)20));		HX_STACK_VAR(tmp17,"tmp17");
	HX_STACK_LINE(480)
	Float tmp18 = (tmp16 * tmp17);		HX_STACK_VAR(tmp18,"tmp18");
	HX_STACK_LINE(480)
	Float tmp19 = (tmp15 + tmp18);		HX_STACK_VAR(tmp19,"tmp19");
	HX_STACK_LINE(480)
	Float tmp20 = z;		HX_STACK_VAR(tmp20,"tmp20");
	HX_STACK_LINE(480)
	Float tmp21 = ::__hxcpp_memory_get_float(this1->buffer->b,(this1->byteOffset + (int)36));		HX_STACK_VAR(tmp21,"tmp21");
	HX_STACK_LINE(480)
	Float tmp22 = (tmp20 * tmp21);		HX_STACK_VAR(tmp22,"tmp22");
	HX_STACK_LINE(480)
	Float tmp23 = (tmp19 + tmp22);		HX_STACK_VAR(tmp23,"tmp23");
	HX_STACK_LINE(480)
	Float tmp24 = ::__hxcpp_memory_get_float(this1->buffer->b,(this1->byteOffset + (int)28));		HX_STACK_VAR(tmp24,"tmp24");
	HX_STACK_LINE(480)
	Float tmp25 = (tmp23 + tmp24);		HX_STACK_VAR(tmp25,"tmp25");
	HX_STACK_LINE(481)
	Float tmp26 = x;		HX_STACK_VAR(tmp26,"tmp26");
	HX_STACK_LINE(481)
	Float tmp27 = ::__hxcpp_memory_get_float(this1->buffer->b,(this1->byteOffset + (int)8));		HX_STACK_VAR(tmp27,"tmp27");
	HX_STACK_LINE(481)
	Float tmp28 = (tmp26 * tmp27);		HX_STACK_VAR(tmp28,"tmp28");
	HX_STACK_LINE(481)
	Float tmp29 = y;		HX_STACK_VAR(tmp29,"tmp29");
	HX_STACK_LINE(481)
	Float tmp30 = ::__hxcpp_memory_get_float(this1->buffer->b,(this1->byteOffset + (int)24));		HX_STACK_VAR(tmp30,"tmp30");
	HX_STACK_LINE(481)
	Float tmp31 = (tmp29 * tmp30);		HX_STACK_VAR(tmp31,"tmp31");
	HX_STACK_LINE(481)
	Float tmp32 = (tmp28 + tmp31);		HX_STACK_VAR(tmp32,"tmp32");
	HX_STACK_LINE(481)
	Float tmp33 = z;		HX_STACK_VAR(tmp33,"tmp33");
	HX_STACK_LINE(481)
	Float tmp34 = ::__hxcpp_memory_get_float(this1->buffer->b,(this1->byteOffset + (int)40));		HX_STACK_VAR(tmp34,"tmp34");
	HX_STACK_LINE(481)
	Float tmp35 = (tmp33 * tmp34);		HX_STACK_VAR(tmp35,"tmp35");
	HX_STACK_LINE(481)
	Float tmp36 = (tmp32 + tmp35);		HX_STACK_VAR(tmp36,"tmp36");
	HX_STACK_LINE(481)
	Float tmp37 = ::__hxcpp_memory_get_float(this1->buffer->b,(this1->byteOffset + (int)44));		HX_STACK_VAR(tmp37,"tmp37");
	HX_STACK_LINE(481)
	Float tmp38 = (tmp36 + tmp37);		HX_STACK_VAR(tmp38,"tmp38");
	HX_STACK_LINE(478)
	::lime::math::Vector4 tmp39 = ::lime::math::Vector4_obj::__new(tmp12,tmp25,tmp38,(int)0);		HX_STACK_VAR(tmp39,"tmp39");
	HX_STACK_LINE(478)
	return tmp39;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(Matrix4_Impl__obj,deltaTransformVector,return )

Void Matrix4_Impl__obj::identity( ::lime::utils::ArrayBufferView this1){
{
		HX_STACK_FRAME("lime.math._Matrix4.Matrix4_Impl_","identity",0xb34e17c6,"lime.math._Matrix4.Matrix4_Impl_.identity","lime/math/Matrix4.hx",487,0xeb65dbd8)
		HX_STACK_ARG(this1,"this1")
		HX_STACK_LINE(489)
		{
			HX_STACK_LINE(489)
			::__hxcpp_memory_set_float(this1->buffer->b,this1->byteOffset,(int)1);
			HX_STACK_LINE(489)
			(int)1;
		}
		HX_STACK_LINE(490)
		{
			HX_STACK_LINE(490)
			::__hxcpp_memory_set_float(this1->buffer->b,(this1->byteOffset + (int)4),(int)0);
			HX_STACK_LINE(490)
			(int)0;
		}
		HX_STACK_LINE(491)
		{
			HX_STACK_LINE(491)
			::__hxcpp_memory_set_float(this1->buffer->b,(this1->byteOffset + (int)8),(int)0);
			HX_STACK_LINE(491)
			(int)0;
		}
		HX_STACK_LINE(492)
		{
			HX_STACK_LINE(492)
			::__hxcpp_memory_set_float(this1->buffer->b,(this1->byteOffset + (int)12),(int)0);
			HX_STACK_LINE(492)
			(int)0;
		}
		HX_STACK_LINE(493)
		{
			HX_STACK_LINE(493)
			::__hxcpp_memory_set_float(this1->buffer->b,(this1->byteOffset + (int)16),(int)0);
			HX_STACK_LINE(493)
			(int)0;
		}
		HX_STACK_LINE(494)
		{
			HX_STACK_LINE(494)
			::__hxcpp_memory_set_float(this1->buffer->b,(this1->byteOffset + (int)20),(int)1);
			HX_STACK_LINE(494)
			(int)1;
		}
		HX_STACK_LINE(495)
		{
			HX_STACK_LINE(495)
			::__hxcpp_memory_set_float(this1->buffer->b,(this1->byteOffset + (int)24),(int)0);
			HX_STACK_LINE(495)
			(int)0;
		}
		HX_STACK_LINE(496)
		{
			HX_STACK_LINE(496)
			::__hxcpp_memory_set_float(this1->buffer->b,(this1->byteOffset + (int)28),(int)0);
			HX_STACK_LINE(496)
			(int)0;
		}
		HX_STACK_LINE(497)
		{
			HX_STACK_LINE(497)
			::__hxcpp_memory_set_float(this1->buffer->b,(this1->byteOffset + (int)32),(int)0);
			HX_STACK_LINE(497)
			(int)0;
		}
		HX_STACK_LINE(498)
		{
			HX_STACK_LINE(498)
			::__hxcpp_memory_set_float(this1->buffer->b,(this1->byteOffset + (int)36),(int)0);
			HX_STACK_LINE(498)
			(int)0;
		}
		HX_STACK_LINE(499)
		{
			HX_STACK_LINE(499)
			::__hxcpp_memory_set_float(this1->buffer->b,(this1->byteOffset + (int)40),(int)1);
			HX_STACK_LINE(499)
			(int)1;
		}
		HX_STACK_LINE(500)
		{
			HX_STACK_LINE(500)
			::__hxcpp_memory_set_float(this1->buffer->b,(this1->byteOffset + (int)44),(int)0);
			HX_STACK_LINE(500)
			(int)0;
		}
		HX_STACK_LINE(501)
		{
			HX_STACK_LINE(501)
			::__hxcpp_memory_set_float(this1->buffer->b,(this1->byteOffset + (int)48),(int)0);
			HX_STACK_LINE(501)
			(int)0;
		}
		HX_STACK_LINE(502)
		{
			HX_STACK_LINE(502)
			::__hxcpp_memory_set_float(this1->buffer->b,(this1->byteOffset + (int)52),(int)0);
			HX_STACK_LINE(502)
			(int)0;
		}
		HX_STACK_LINE(503)
		{
			HX_STACK_LINE(503)
			::__hxcpp_memory_set_float(this1->buffer->b,(this1->byteOffset + (int)56),(int)0);
			HX_STACK_LINE(503)
			(int)0;
		}
		HX_STACK_LINE(504)
		{
			HX_STACK_LINE(504)
			::__hxcpp_memory_set_float(this1->buffer->b,(this1->byteOffset + (int)60),(int)1);
			HX_STACK_LINE(504)
			(int)1;
		}
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Matrix4_Impl__obj,identity,(void))

::lime::utils::ArrayBufferView Matrix4_Impl__obj::interpolate( ::lime::utils::ArrayBufferView thisMat,::lime::utils::ArrayBufferView toMat,Float percent){
	HX_STACK_FRAME("lime.math._Matrix4.Matrix4_Impl_","interpolate",0xf4884739,"lime.math._Matrix4.Matrix4_Impl_.interpolate","lime/math/Matrix4.hx",509,0xeb65dbd8)
	HX_STACK_ARG(thisMat,"thisMat")
	HX_STACK_ARG(toMat,"toMat")
	HX_STACK_ARG(percent,"percent")
	HX_STACK_LINE(511)
	::lime::utils::ArrayBufferView tmp = ::lime::math::_Matrix4::Matrix4_Impl__obj::_new(null());		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(511)
	::lime::utils::ArrayBufferView m = tmp;		HX_STACK_VAR(m,"m");
	HX_STACK_LINE(513)
	{
		HX_STACK_LINE(513)
		int _g = (int)0;		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(513)
		while((true)){
			HX_STACK_LINE(513)
			bool tmp1 = (_g < (int)16);		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(513)
			bool tmp2 = !(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(513)
			if ((tmp2)){
				HX_STACK_LINE(513)
				break;
			}
			HX_STACK_LINE(513)
			int tmp3 = (_g)++;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(513)
			int i = tmp3;		HX_STACK_VAR(i,"i");
			HX_STACK_LINE(515)
			::lime::utils::ArrayBufferView tmp4 = m;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(515)
			int tmp5 = i;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(515)
			::lime::utils::ArrayBufferView tmp6 = thisMat;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(515)
			int tmp7 = i;		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(515)
			Float tmp8 = ::lime::math::_Matrix4::Matrix4_Impl__obj::get(tmp6,tmp7);		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(515)
			::lime::utils::ArrayBufferView tmp9 = toMat;		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(515)
			int tmp10 = i;		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(515)
			Float tmp11 = ::lime::math::_Matrix4::Matrix4_Impl__obj::get(tmp9,tmp10);		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(515)
			::lime::utils::ArrayBufferView tmp12 = thisMat;		HX_STACK_VAR(tmp12,"tmp12");
			HX_STACK_LINE(515)
			int tmp13 = i;		HX_STACK_VAR(tmp13,"tmp13");
			HX_STACK_LINE(515)
			Float tmp14 = ::lime::math::_Matrix4::Matrix4_Impl__obj::get(tmp12,tmp13);		HX_STACK_VAR(tmp14,"tmp14");
			HX_STACK_LINE(515)
			Float tmp15 = (tmp11 - tmp14);		HX_STACK_VAR(tmp15,"tmp15");
			HX_STACK_LINE(515)
			Float tmp16 = percent;		HX_STACK_VAR(tmp16,"tmp16");
			HX_STACK_LINE(515)
			Float tmp17 = (tmp15 * tmp16);		HX_STACK_VAR(tmp17,"tmp17");
			HX_STACK_LINE(515)
			Float tmp18 = (tmp8 + tmp17);		HX_STACK_VAR(tmp18,"tmp18");
			HX_STACK_LINE(515)
			::lime::math::_Matrix4::Matrix4_Impl__obj::set(tmp4,tmp5,tmp18);
		}
	}
	HX_STACK_LINE(519)
	::lime::utils::ArrayBufferView tmp1 = m;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(519)
	return tmp1;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC3(Matrix4_Impl__obj,interpolate,return )

Void Matrix4_Impl__obj::interpolateTo( ::lime::utils::ArrayBufferView this1,::lime::utils::ArrayBufferView toMat,Float percent){
{
		HX_STACK_FRAME("lime.math._Matrix4.Matrix4_Impl_","interpolateTo",0x5c939114,"lime.math._Matrix4.Matrix4_Impl_.interpolateTo","lime/math/Matrix4.hx",526,0xeb65dbd8)
		HX_STACK_ARG(this1,"this1")
		HX_STACK_ARG(toMat,"toMat")
		HX_STACK_ARG(percent,"percent")
		HX_STACK_LINE(526)
		int _g = (int)0;		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(526)
		while((true)){
			HX_STACK_LINE(526)
			bool tmp = (_g < (int)16);		HX_STACK_VAR(tmp,"tmp");
			HX_STACK_LINE(526)
			bool tmp1 = !(tmp);		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(526)
			if ((tmp1)){
				HX_STACK_LINE(526)
				break;
			}
			HX_STACK_LINE(526)
			int tmp2 = (_g)++;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(526)
			int i = tmp2;		HX_STACK_VAR(i,"i");
			HX_STACK_LINE(528)
			{
				HX_STACK_LINE(528)
				Float tmp3 = ::__hxcpp_memory_get_float(this1->buffer->b,(this1->byteOffset + (i * (int)4)));		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(528)
				::lime::utils::ArrayBufferView tmp4 = toMat;		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(528)
				int tmp5 = i;		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(528)
				Float tmp6 = ::lime::math::_Matrix4::Matrix4_Impl__obj::get(tmp4,tmp5);		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(528)
				Float tmp7 = ::__hxcpp_memory_get_float(this1->buffer->b,(this1->byteOffset + (i * (int)4)));		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(528)
				Float tmp8 = (tmp6 - tmp7);		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(528)
				Float tmp9 = percent;		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(528)
				Float tmp10 = (tmp8 * tmp9);		HX_STACK_VAR(tmp10,"tmp10");
				HX_STACK_LINE(528)
				Float tmp11 = (tmp3 + tmp10);		HX_STACK_VAR(tmp11,"tmp11");
				HX_STACK_LINE(528)
				Float val = tmp11;		HX_STACK_VAR(val,"val");
				HX_STACK_LINE(528)
				::__hxcpp_memory_set_float(this1->buffer->b,(this1->byteOffset + (i * (int)4)),val);
				HX_STACK_LINE(528)
				val;
			}
		}
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC3(Matrix4_Impl__obj,interpolateTo,(void))

bool Matrix4_Impl__obj::invert( ::lime::utils::ArrayBufferView this1){
	HX_STACK_FRAME("lime.math._Matrix4.Matrix4_Impl_","invert",0x1e68879e,"lime.math._Matrix4.Matrix4_Impl_.invert","lime/math/Matrix4.hx",535,0xeb65dbd8)
	HX_STACK_ARG(this1,"this1")
	HX_STACK_LINE(537)
	::lime::utils::ArrayBufferView tmp = this1;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(537)
	Float tmp1 = ::lime::math::_Matrix4::Matrix4_Impl__obj::get_determinant(tmp);		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(537)
	Float d = tmp1;		HX_STACK_VAR(d,"d");
	HX_STACK_LINE(538)
	Float tmp2 = d;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(538)
	Float tmp3 = ::Math_obj::abs(tmp2);		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(538)
	bool tmp4 = (tmp3 > ((Float)0.00000000001));		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(538)
	bool invertable = tmp4;		HX_STACK_VAR(invertable,"invertable");
	HX_STACK_LINE(540)
	bool tmp5 = invertable;		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(540)
	if ((tmp5)){
		HX_STACK_LINE(542)
		Float tmp6 = (Float((int)1) / Float(d));		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(542)
		d = tmp6;
		HX_STACK_LINE(544)
		Float tmp7 = ::__hxcpp_memory_get_float(this1->buffer->b,this1->byteOffset);		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(544)
		Float m11 = tmp7;		HX_STACK_VAR(m11,"m11");
		HX_STACK_LINE(544)
		Float tmp8 = ::__hxcpp_memory_get_float(this1->buffer->b,(this1->byteOffset + (int)16));		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(544)
		Float m21 = tmp8;		HX_STACK_VAR(m21,"m21");
		HX_STACK_LINE(544)
		Float tmp9 = ::__hxcpp_memory_get_float(this1->buffer->b,(this1->byteOffset + (int)32));		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(544)
		Float m31 = tmp9;		HX_STACK_VAR(m31,"m31");
		HX_STACK_LINE(544)
		Float tmp10 = ::__hxcpp_memory_get_float(this1->buffer->b,(this1->byteOffset + (int)48));		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(544)
		Float m41 = tmp10;		HX_STACK_VAR(m41,"m41");
		HX_STACK_LINE(545)
		Float tmp11 = ::__hxcpp_memory_get_float(this1->buffer->b,(this1->byteOffset + (int)4));		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(545)
		Float m12 = tmp11;		HX_STACK_VAR(m12,"m12");
		HX_STACK_LINE(545)
		Float tmp12 = ::__hxcpp_memory_get_float(this1->buffer->b,(this1->byteOffset + (int)20));		HX_STACK_VAR(tmp12,"tmp12");
		HX_STACK_LINE(545)
		Float m22 = tmp12;		HX_STACK_VAR(m22,"m22");
		HX_STACK_LINE(545)
		Float tmp13 = ::__hxcpp_memory_get_float(this1->buffer->b,(this1->byteOffset + (int)36));		HX_STACK_VAR(tmp13,"tmp13");
		HX_STACK_LINE(545)
		Float m32 = tmp13;		HX_STACK_VAR(m32,"m32");
		HX_STACK_LINE(545)
		Float tmp14 = ::__hxcpp_memory_get_float(this1->buffer->b,(this1->byteOffset + (int)52));		HX_STACK_VAR(tmp14,"tmp14");
		HX_STACK_LINE(545)
		Float m42 = tmp14;		HX_STACK_VAR(m42,"m42");
		HX_STACK_LINE(546)
		Float tmp15 = ::__hxcpp_memory_get_float(this1->buffer->b,(this1->byteOffset + (int)8));		HX_STACK_VAR(tmp15,"tmp15");
		HX_STACK_LINE(546)
		Float m13 = tmp15;		HX_STACK_VAR(m13,"m13");
		HX_STACK_LINE(546)
		Float tmp16 = ::__hxcpp_memory_get_float(this1->buffer->b,(this1->byteOffset + (int)24));		HX_STACK_VAR(tmp16,"tmp16");
		HX_STACK_LINE(546)
		Float m23 = tmp16;		HX_STACK_VAR(m23,"m23");
		HX_STACK_LINE(546)
		Float tmp17 = ::__hxcpp_memory_get_float(this1->buffer->b,(this1->byteOffset + (int)40));		HX_STACK_VAR(tmp17,"tmp17");
		HX_STACK_LINE(546)
		Float m33 = tmp17;		HX_STACK_VAR(m33,"m33");
		HX_STACK_LINE(546)
		Float tmp18 = ::__hxcpp_memory_get_float(this1->buffer->b,(this1->byteOffset + (int)56));		HX_STACK_VAR(tmp18,"tmp18");
		HX_STACK_LINE(546)
		Float m43 = tmp18;		HX_STACK_VAR(m43,"m43");
		HX_STACK_LINE(547)
		Float tmp19 = ::__hxcpp_memory_get_float(this1->buffer->b,(this1->byteOffset + (int)12));		HX_STACK_VAR(tmp19,"tmp19");
		HX_STACK_LINE(547)
		Float m14 = tmp19;		HX_STACK_VAR(m14,"m14");
		HX_STACK_LINE(547)
		Float tmp20 = ::__hxcpp_memory_get_float(this1->buffer->b,(this1->byteOffset + (int)28));		HX_STACK_VAR(tmp20,"tmp20");
		HX_STACK_LINE(547)
		Float m24 = tmp20;		HX_STACK_VAR(m24,"m24");
		HX_STACK_LINE(547)
		Float tmp21 = ::__hxcpp_memory_get_float(this1->buffer->b,(this1->byteOffset + (int)44));		HX_STACK_VAR(tmp21,"tmp21");
		HX_STACK_LINE(547)
		Float m34 = tmp21;		HX_STACK_VAR(m34,"m34");
		HX_STACK_LINE(547)
		Float tmp22 = ::__hxcpp_memory_get_float(this1->buffer->b,(this1->byteOffset + (int)60));		HX_STACK_VAR(tmp22,"tmp22");
		HX_STACK_LINE(547)
		Float m44 = tmp22;		HX_STACK_VAR(m44,"m44");
		HX_STACK_LINE(549)
		{
			HX_STACK_LINE(549)
			Float tmp23 = d;		HX_STACK_VAR(tmp23,"tmp23");
			HX_STACK_LINE(549)
			Float tmp24 = m22;		HX_STACK_VAR(tmp24,"tmp24");
			HX_STACK_LINE(549)
			Float tmp25 = (m33 * m44);		HX_STACK_VAR(tmp25,"tmp25");
			HX_STACK_LINE(549)
			Float tmp26 = (m43 * m34);		HX_STACK_VAR(tmp26,"tmp26");
			HX_STACK_LINE(549)
			Float tmp27 = (tmp25 - tmp26);		HX_STACK_VAR(tmp27,"tmp27");
			HX_STACK_LINE(549)
			Float tmp28 = (tmp24 * tmp27);		HX_STACK_VAR(tmp28,"tmp28");
			HX_STACK_LINE(549)
			Float tmp29 = m32;		HX_STACK_VAR(tmp29,"tmp29");
			HX_STACK_LINE(549)
			Float tmp30 = (m23 * m44);		HX_STACK_VAR(tmp30,"tmp30");
			HX_STACK_LINE(549)
			Float tmp31 = (m43 * m24);		HX_STACK_VAR(tmp31,"tmp31");
			HX_STACK_LINE(549)
			Float tmp32 = (tmp30 - tmp31);		HX_STACK_VAR(tmp32,"tmp32");
			HX_STACK_LINE(549)
			Float tmp33 = (tmp29 * tmp32);		HX_STACK_VAR(tmp33,"tmp33");
			HX_STACK_LINE(549)
			Float tmp34 = (tmp28 - tmp33);		HX_STACK_VAR(tmp34,"tmp34");
			HX_STACK_LINE(549)
			Float tmp35 = m42;		HX_STACK_VAR(tmp35,"tmp35");
			HX_STACK_LINE(549)
			Float tmp36 = (m23 * m34);		HX_STACK_VAR(tmp36,"tmp36");
			HX_STACK_LINE(549)
			Float tmp37 = (m33 * m24);		HX_STACK_VAR(tmp37,"tmp37");
			HX_STACK_LINE(549)
			Float tmp38 = (tmp36 - tmp37);		HX_STACK_VAR(tmp38,"tmp38");
			HX_STACK_LINE(549)
			Float tmp39 = (tmp35 * tmp38);		HX_STACK_VAR(tmp39,"tmp39");
			HX_STACK_LINE(549)
			Float tmp40 = (tmp34 + tmp39);		HX_STACK_VAR(tmp40,"tmp40");
			HX_STACK_LINE(549)
			Float tmp41 = (tmp23 * tmp40);		HX_STACK_VAR(tmp41,"tmp41");
			HX_STACK_LINE(549)
			Float val = tmp41;		HX_STACK_VAR(val,"val");
			HX_STACK_LINE(549)
			::__hxcpp_memory_set_float(this1->buffer->b,this1->byteOffset,val);
			HX_STACK_LINE(549)
			val;
		}
		HX_STACK_LINE(550)
		{
			HX_STACK_LINE(550)
			Float tmp23 = d;		HX_STACK_VAR(tmp23,"tmp23");
			HX_STACK_LINE(550)
			Float tmp24 = -(tmp23);		HX_STACK_VAR(tmp24,"tmp24");
			HX_STACK_LINE(550)
			Float tmp25 = m12;		HX_STACK_VAR(tmp25,"tmp25");
			HX_STACK_LINE(550)
			Float tmp26 = (m33 * m44);		HX_STACK_VAR(tmp26,"tmp26");
			HX_STACK_LINE(550)
			Float tmp27 = (m43 * m34);		HX_STACK_VAR(tmp27,"tmp27");
			HX_STACK_LINE(550)
			Float tmp28 = (tmp26 - tmp27);		HX_STACK_VAR(tmp28,"tmp28");
			HX_STACK_LINE(550)
			Float tmp29 = (tmp25 * tmp28);		HX_STACK_VAR(tmp29,"tmp29");
			HX_STACK_LINE(550)
			Float tmp30 = m32;		HX_STACK_VAR(tmp30,"tmp30");
			HX_STACK_LINE(550)
			Float tmp31 = (m13 * m44);		HX_STACK_VAR(tmp31,"tmp31");
			HX_STACK_LINE(550)
			Float tmp32 = (m43 * m14);		HX_STACK_VAR(tmp32,"tmp32");
			HX_STACK_LINE(550)
			Float tmp33 = (tmp31 - tmp32);		HX_STACK_VAR(tmp33,"tmp33");
			HX_STACK_LINE(550)
			Float tmp34 = (tmp30 * tmp33);		HX_STACK_VAR(tmp34,"tmp34");
			HX_STACK_LINE(550)
			Float tmp35 = (tmp29 - tmp34);		HX_STACK_VAR(tmp35,"tmp35");
			HX_STACK_LINE(550)
			Float tmp36 = m42;		HX_STACK_VAR(tmp36,"tmp36");
			HX_STACK_LINE(550)
			Float tmp37 = (m13 * m34);		HX_STACK_VAR(tmp37,"tmp37");
			HX_STACK_LINE(550)
			Float tmp38 = (m33 * m14);		HX_STACK_VAR(tmp38,"tmp38");
			HX_STACK_LINE(550)
			Float tmp39 = (tmp37 - tmp38);		HX_STACK_VAR(tmp39,"tmp39");
			HX_STACK_LINE(550)
			Float tmp40 = (tmp36 * tmp39);		HX_STACK_VAR(tmp40,"tmp40");
			HX_STACK_LINE(550)
			Float tmp41 = (tmp35 + tmp40);		HX_STACK_VAR(tmp41,"tmp41");
			HX_STACK_LINE(550)
			Float tmp42 = (tmp24 * tmp41);		HX_STACK_VAR(tmp42,"tmp42");
			HX_STACK_LINE(550)
			Float val = tmp42;		HX_STACK_VAR(val,"val");
			HX_STACK_LINE(550)
			::__hxcpp_memory_set_float(this1->buffer->b,(this1->byteOffset + (int)4),val);
			HX_STACK_LINE(550)
			val;
		}
		HX_STACK_LINE(551)
		{
			HX_STACK_LINE(551)
			Float tmp23 = d;		HX_STACK_VAR(tmp23,"tmp23");
			HX_STACK_LINE(551)
			Float tmp24 = m12;		HX_STACK_VAR(tmp24,"tmp24");
			HX_STACK_LINE(551)
			Float tmp25 = (m23 * m44);		HX_STACK_VAR(tmp25,"tmp25");
			HX_STACK_LINE(551)
			Float tmp26 = (m43 * m24);		HX_STACK_VAR(tmp26,"tmp26");
			HX_STACK_LINE(551)
			Float tmp27 = (tmp25 - tmp26);		HX_STACK_VAR(tmp27,"tmp27");
			HX_STACK_LINE(551)
			Float tmp28 = (tmp24 * tmp27);		HX_STACK_VAR(tmp28,"tmp28");
			HX_STACK_LINE(551)
			Float tmp29 = m22;		HX_STACK_VAR(tmp29,"tmp29");
			HX_STACK_LINE(551)
			Float tmp30 = (m13 * m44);		HX_STACK_VAR(tmp30,"tmp30");
			HX_STACK_LINE(551)
			Float tmp31 = (m43 * m14);		HX_STACK_VAR(tmp31,"tmp31");
			HX_STACK_LINE(551)
			Float tmp32 = (tmp30 - tmp31);		HX_STACK_VAR(tmp32,"tmp32");
			HX_STACK_LINE(551)
			Float tmp33 = (tmp29 * tmp32);		HX_STACK_VAR(tmp33,"tmp33");
			HX_STACK_LINE(551)
			Float tmp34 = (tmp28 - tmp33);		HX_STACK_VAR(tmp34,"tmp34");
			HX_STACK_LINE(551)
			Float tmp35 = m42;		HX_STACK_VAR(tmp35,"tmp35");
			HX_STACK_LINE(551)
			Float tmp36 = (m13 * m24);		HX_STACK_VAR(tmp36,"tmp36");
			HX_STACK_LINE(551)
			Float tmp37 = (m23 * m14);		HX_STACK_VAR(tmp37,"tmp37");
			HX_STACK_LINE(551)
			Float tmp38 = (tmp36 - tmp37);		HX_STACK_VAR(tmp38,"tmp38");
			HX_STACK_LINE(551)
			Float tmp39 = (tmp35 * tmp38);		HX_STACK_VAR(tmp39,"tmp39");
			HX_STACK_LINE(551)
			Float tmp40 = (tmp34 + tmp39);		HX_STACK_VAR(tmp40,"tmp40");
			HX_STACK_LINE(551)
			Float tmp41 = (tmp23 * tmp40);		HX_STACK_VAR(tmp41,"tmp41");
			HX_STACK_LINE(551)
			Float val = tmp41;		HX_STACK_VAR(val,"val");
			HX_STACK_LINE(551)
			::__hxcpp_memory_set_float(this1->buffer->b,(this1->byteOffset + (int)8),val);
			HX_STACK_LINE(551)
			val;
		}
		HX_STACK_LINE(552)
		{
			HX_STACK_LINE(552)
			Float tmp23 = d;		HX_STACK_VAR(tmp23,"tmp23");
			HX_STACK_LINE(552)
			Float tmp24 = -(tmp23);		HX_STACK_VAR(tmp24,"tmp24");
			HX_STACK_LINE(552)
			Float tmp25 = m12;		HX_STACK_VAR(tmp25,"tmp25");
			HX_STACK_LINE(552)
			Float tmp26 = (m23 * m34);		HX_STACK_VAR(tmp26,"tmp26");
			HX_STACK_LINE(552)
			Float tmp27 = (m33 * m24);		HX_STACK_VAR(tmp27,"tmp27");
			HX_STACK_LINE(552)
			Float tmp28 = (tmp26 - tmp27);		HX_STACK_VAR(tmp28,"tmp28");
			HX_STACK_LINE(552)
			Float tmp29 = (tmp25 * tmp28);		HX_STACK_VAR(tmp29,"tmp29");
			HX_STACK_LINE(552)
			Float tmp30 = m22;		HX_STACK_VAR(tmp30,"tmp30");
			HX_STACK_LINE(552)
			Float tmp31 = (m13 * m34);		HX_STACK_VAR(tmp31,"tmp31");
			HX_STACK_LINE(552)
			Float tmp32 = (m33 * m14);		HX_STACK_VAR(tmp32,"tmp32");
			HX_STACK_LINE(552)
			Float tmp33 = (tmp31 - tmp32);		HX_STACK_VAR(tmp33,"tmp33");
			HX_STACK_LINE(552)
			Float tmp34 = (tmp30 * tmp33);		HX_STACK_VAR(tmp34,"tmp34");
			HX_STACK_LINE(552)
			Float tmp35 = (tmp29 - tmp34);		HX_STACK_VAR(tmp35,"tmp35");
			HX_STACK_LINE(552)
			Float tmp36 = m32;		HX_STACK_VAR(tmp36,"tmp36");
			HX_STACK_LINE(552)
			Float tmp37 = (m13 * m24);		HX_STACK_VAR(tmp37,"tmp37");
			HX_STACK_LINE(552)
			Float tmp38 = (m23 * m14);		HX_STACK_VAR(tmp38,"tmp38");
			HX_STACK_LINE(552)
			Float tmp39 = (tmp37 - tmp38);		HX_STACK_VAR(tmp39,"tmp39");
			HX_STACK_LINE(552)
			Float tmp40 = (tmp36 * tmp39);		HX_STACK_VAR(tmp40,"tmp40");
			HX_STACK_LINE(552)
			Float tmp41 = (tmp35 + tmp40);		HX_STACK_VAR(tmp41,"tmp41");
			HX_STACK_LINE(552)
			Float tmp42 = (tmp24 * tmp41);		HX_STACK_VAR(tmp42,"tmp42");
			HX_STACK_LINE(552)
			Float val = tmp42;		HX_STACK_VAR(val,"val");
			HX_STACK_LINE(552)
			::__hxcpp_memory_set_float(this1->buffer->b,(this1->byteOffset + (int)12),val);
			HX_STACK_LINE(552)
			val;
		}
		HX_STACK_LINE(553)
		{
			HX_STACK_LINE(553)
			Float tmp23 = d;		HX_STACK_VAR(tmp23,"tmp23");
			HX_STACK_LINE(553)
			Float tmp24 = -(tmp23);		HX_STACK_VAR(tmp24,"tmp24");
			HX_STACK_LINE(553)
			Float tmp25 = m21;		HX_STACK_VAR(tmp25,"tmp25");
			HX_STACK_LINE(553)
			Float tmp26 = (m33 * m44);		HX_STACK_VAR(tmp26,"tmp26");
			HX_STACK_LINE(553)
			Float tmp27 = (m43 * m34);		HX_STACK_VAR(tmp27,"tmp27");
			HX_STACK_LINE(553)
			Float tmp28 = (tmp26 - tmp27);		HX_STACK_VAR(tmp28,"tmp28");
			HX_STACK_LINE(553)
			Float tmp29 = (tmp25 * tmp28);		HX_STACK_VAR(tmp29,"tmp29");
			HX_STACK_LINE(553)
			Float tmp30 = m31;		HX_STACK_VAR(tmp30,"tmp30");
			HX_STACK_LINE(553)
			Float tmp31 = (m23 * m44);		HX_STACK_VAR(tmp31,"tmp31");
			HX_STACK_LINE(553)
			Float tmp32 = (m43 * m24);		HX_STACK_VAR(tmp32,"tmp32");
			HX_STACK_LINE(553)
			Float tmp33 = (tmp31 - tmp32);		HX_STACK_VAR(tmp33,"tmp33");
			HX_STACK_LINE(553)
			Float tmp34 = (tmp30 * tmp33);		HX_STACK_VAR(tmp34,"tmp34");
			HX_STACK_LINE(553)
			Float tmp35 = (tmp29 - tmp34);		HX_STACK_VAR(tmp35,"tmp35");
			HX_STACK_LINE(553)
			Float tmp36 = m41;		HX_STACK_VAR(tmp36,"tmp36");
			HX_STACK_LINE(553)
			Float tmp37 = (m23 * m34);		HX_STACK_VAR(tmp37,"tmp37");
			HX_STACK_LINE(553)
			Float tmp38 = (m33 * m24);		HX_STACK_VAR(tmp38,"tmp38");
			HX_STACK_LINE(553)
			Float tmp39 = (tmp37 - tmp38);		HX_STACK_VAR(tmp39,"tmp39");
			HX_STACK_LINE(553)
			Float tmp40 = (tmp36 * tmp39);		HX_STACK_VAR(tmp40,"tmp40");
			HX_STACK_LINE(553)
			Float tmp41 = (tmp35 + tmp40);		HX_STACK_VAR(tmp41,"tmp41");
			HX_STACK_LINE(553)
			Float tmp42 = (tmp24 * tmp41);		HX_STACK_VAR(tmp42,"tmp42");
			HX_STACK_LINE(553)
			Float val = tmp42;		HX_STACK_VAR(val,"val");
			HX_STACK_LINE(553)
			::__hxcpp_memory_set_float(this1->buffer->b,(this1->byteOffset + (int)16),val);
			HX_STACK_LINE(553)
			val;
		}
		HX_STACK_LINE(554)
		{
			HX_STACK_LINE(554)
			Float tmp23 = d;		HX_STACK_VAR(tmp23,"tmp23");
			HX_STACK_LINE(554)
			Float tmp24 = m11;		HX_STACK_VAR(tmp24,"tmp24");
			HX_STACK_LINE(554)
			Float tmp25 = (m33 * m44);		HX_STACK_VAR(tmp25,"tmp25");
			HX_STACK_LINE(554)
			Float tmp26 = (m43 * m34);		HX_STACK_VAR(tmp26,"tmp26");
			HX_STACK_LINE(554)
			Float tmp27 = (tmp25 - tmp26);		HX_STACK_VAR(tmp27,"tmp27");
			HX_STACK_LINE(554)
			Float tmp28 = (tmp24 * tmp27);		HX_STACK_VAR(tmp28,"tmp28");
			HX_STACK_LINE(554)
			Float tmp29 = m31;		HX_STACK_VAR(tmp29,"tmp29");
			HX_STACK_LINE(554)
			Float tmp30 = (m13 * m44);		HX_STACK_VAR(tmp30,"tmp30");
			HX_STACK_LINE(554)
			Float tmp31 = (m43 * m14);		HX_STACK_VAR(tmp31,"tmp31");
			HX_STACK_LINE(554)
			Float tmp32 = (tmp30 - tmp31);		HX_STACK_VAR(tmp32,"tmp32");
			HX_STACK_LINE(554)
			Float tmp33 = (tmp29 * tmp32);		HX_STACK_VAR(tmp33,"tmp33");
			HX_STACK_LINE(554)
			Float tmp34 = (tmp28 - tmp33);		HX_STACK_VAR(tmp34,"tmp34");
			HX_STACK_LINE(554)
			Float tmp35 = m41;		HX_STACK_VAR(tmp35,"tmp35");
			HX_STACK_LINE(554)
			Float tmp36 = (m13 * m34);		HX_STACK_VAR(tmp36,"tmp36");
			HX_STACK_LINE(554)
			Float tmp37 = (m33 * m14);		HX_STACK_VAR(tmp37,"tmp37");
			HX_STACK_LINE(554)
			Float tmp38 = (tmp36 - tmp37);		HX_STACK_VAR(tmp38,"tmp38");
			HX_STACK_LINE(554)
			Float tmp39 = (tmp35 * tmp38);		HX_STACK_VAR(tmp39,"tmp39");
			HX_STACK_LINE(554)
			Float tmp40 = (tmp34 + tmp39);		HX_STACK_VAR(tmp40,"tmp40");
			HX_STACK_LINE(554)
			Float tmp41 = (tmp23 * tmp40);		HX_STACK_VAR(tmp41,"tmp41");
			HX_STACK_LINE(554)
			Float val = tmp41;		HX_STACK_VAR(val,"val");
			HX_STACK_LINE(554)
			::__hxcpp_memory_set_float(this1->buffer->b,(this1->byteOffset + (int)20),val);
			HX_STACK_LINE(554)
			val;
		}
		HX_STACK_LINE(555)
		{
			HX_STACK_LINE(555)
			Float tmp23 = d;		HX_STACK_VAR(tmp23,"tmp23");
			HX_STACK_LINE(555)
			Float tmp24 = -(tmp23);		HX_STACK_VAR(tmp24,"tmp24");
			HX_STACK_LINE(555)
			Float tmp25 = m11;		HX_STACK_VAR(tmp25,"tmp25");
			HX_STACK_LINE(555)
			Float tmp26 = (m23 * m44);		HX_STACK_VAR(tmp26,"tmp26");
			HX_STACK_LINE(555)
			Float tmp27 = (m43 * m24);		HX_STACK_VAR(tmp27,"tmp27");
			HX_STACK_LINE(555)
			Float tmp28 = (tmp26 - tmp27);		HX_STACK_VAR(tmp28,"tmp28");
			HX_STACK_LINE(555)
			Float tmp29 = (tmp25 * tmp28);		HX_STACK_VAR(tmp29,"tmp29");
			HX_STACK_LINE(555)
			Float tmp30 = m21;		HX_STACK_VAR(tmp30,"tmp30");
			HX_STACK_LINE(555)
			Float tmp31 = (m13 * m44);		HX_STACK_VAR(tmp31,"tmp31");
			HX_STACK_LINE(555)
			Float tmp32 = (m43 * m14);		HX_STACK_VAR(tmp32,"tmp32");
			HX_STACK_LINE(555)
			Float tmp33 = (tmp31 - tmp32);		HX_STACK_VAR(tmp33,"tmp33");
			HX_STACK_LINE(555)
			Float tmp34 = (tmp30 * tmp33);		HX_STACK_VAR(tmp34,"tmp34");
			HX_STACK_LINE(555)
			Float tmp35 = (tmp29 - tmp34);		HX_STACK_VAR(tmp35,"tmp35");
			HX_STACK_LINE(555)
			Float tmp36 = m41;		HX_STACK_VAR(tmp36,"tmp36");
			HX_STACK_LINE(555)
			Float tmp37 = (m13 * m24);		HX_STACK_VAR(tmp37,"tmp37");
			HX_STACK_LINE(555)
			Float tmp38 = (m23 * m14);		HX_STACK_VAR(tmp38,"tmp38");
			HX_STACK_LINE(555)
			Float tmp39 = (tmp37 - tmp38);		HX_STACK_VAR(tmp39,"tmp39");
			HX_STACK_LINE(555)
			Float tmp40 = (tmp36 * tmp39);		HX_STACK_VAR(tmp40,"tmp40");
			HX_STACK_LINE(555)
			Float tmp41 = (tmp35 + tmp40);		HX_STACK_VAR(tmp41,"tmp41");
			HX_STACK_LINE(555)
			Float tmp42 = (tmp24 * tmp41);		HX_STACK_VAR(tmp42,"tmp42");
			HX_STACK_LINE(555)
			Float val = tmp42;		HX_STACK_VAR(val,"val");
			HX_STACK_LINE(555)
			::__hxcpp_memory_set_float(this1->buffer->b,(this1->byteOffset + (int)24),val);
			HX_STACK_LINE(555)
			val;
		}
		HX_STACK_LINE(556)
		{
			HX_STACK_LINE(556)
			Float tmp23 = d;		HX_STACK_VAR(tmp23,"tmp23");
			HX_STACK_LINE(556)
			Float tmp24 = m11;		HX_STACK_VAR(tmp24,"tmp24");
			HX_STACK_LINE(556)
			Float tmp25 = (m23 * m34);		HX_STACK_VAR(tmp25,"tmp25");
			HX_STACK_LINE(556)
			Float tmp26 = (m33 * m24);		HX_STACK_VAR(tmp26,"tmp26");
			HX_STACK_LINE(556)
			Float tmp27 = (tmp25 - tmp26);		HX_STACK_VAR(tmp27,"tmp27");
			HX_STACK_LINE(556)
			Float tmp28 = (tmp24 * tmp27);		HX_STACK_VAR(tmp28,"tmp28");
			HX_STACK_LINE(556)
			Float tmp29 = m21;		HX_STACK_VAR(tmp29,"tmp29");
			HX_STACK_LINE(556)
			Float tmp30 = (m13 * m34);		HX_STACK_VAR(tmp30,"tmp30");
			HX_STACK_LINE(556)
			Float tmp31 = (m33 * m14);		HX_STACK_VAR(tmp31,"tmp31");
			HX_STACK_LINE(556)
			Float tmp32 = (tmp30 - tmp31);		HX_STACK_VAR(tmp32,"tmp32");
			HX_STACK_LINE(556)
			Float tmp33 = (tmp29 * tmp32);		HX_STACK_VAR(tmp33,"tmp33");
			HX_STACK_LINE(556)
			Float tmp34 = (tmp28 - tmp33);		HX_STACK_VAR(tmp34,"tmp34");
			HX_STACK_LINE(556)
			Float tmp35 = m31;		HX_STACK_VAR(tmp35,"tmp35");
			HX_STACK_LINE(556)
			Float tmp36 = (m13 * m24);		HX_STACK_VAR(tmp36,"tmp36");
			HX_STACK_LINE(556)
			Float tmp37 = (m23 * m14);		HX_STACK_VAR(tmp37,"tmp37");
			HX_STACK_LINE(556)
			Float tmp38 = (tmp36 - tmp37);		HX_STACK_VAR(tmp38,"tmp38");
			HX_STACK_LINE(556)
			Float tmp39 = (tmp35 * tmp38);		HX_STACK_VAR(tmp39,"tmp39");
			HX_STACK_LINE(556)
			Float tmp40 = (tmp34 + tmp39);		HX_STACK_VAR(tmp40,"tmp40");
			HX_STACK_LINE(556)
			Float tmp41 = (tmp23 * tmp40);		HX_STACK_VAR(tmp41,"tmp41");
			HX_STACK_LINE(556)
			Float val = tmp41;		HX_STACK_VAR(val,"val");
			HX_STACK_LINE(556)
			::__hxcpp_memory_set_float(this1->buffer->b,(this1->byteOffset + (int)28),val);
			HX_STACK_LINE(556)
			val;
		}
		HX_STACK_LINE(557)
		{
			HX_STACK_LINE(557)
			Float tmp23 = d;		HX_STACK_VAR(tmp23,"tmp23");
			HX_STACK_LINE(557)
			Float tmp24 = m21;		HX_STACK_VAR(tmp24,"tmp24");
			HX_STACK_LINE(557)
			Float tmp25 = (m32 * m44);		HX_STACK_VAR(tmp25,"tmp25");
			HX_STACK_LINE(557)
			Float tmp26 = (m42 * m34);		HX_STACK_VAR(tmp26,"tmp26");
			HX_STACK_LINE(557)
			Float tmp27 = (tmp25 - tmp26);		HX_STACK_VAR(tmp27,"tmp27");
			HX_STACK_LINE(557)
			Float tmp28 = (tmp24 * tmp27);		HX_STACK_VAR(tmp28,"tmp28");
			HX_STACK_LINE(557)
			Float tmp29 = m31;		HX_STACK_VAR(tmp29,"tmp29");
			HX_STACK_LINE(557)
			Float tmp30 = (m22 * m44);		HX_STACK_VAR(tmp30,"tmp30");
			HX_STACK_LINE(557)
			Float tmp31 = (m42 * m24);		HX_STACK_VAR(tmp31,"tmp31");
			HX_STACK_LINE(557)
			Float tmp32 = (tmp30 - tmp31);		HX_STACK_VAR(tmp32,"tmp32");
			HX_STACK_LINE(557)
			Float tmp33 = (tmp29 * tmp32);		HX_STACK_VAR(tmp33,"tmp33");
			HX_STACK_LINE(557)
			Float tmp34 = (tmp28 - tmp33);		HX_STACK_VAR(tmp34,"tmp34");
			HX_STACK_LINE(557)
			Float tmp35 = m41;		HX_STACK_VAR(tmp35,"tmp35");
			HX_STACK_LINE(557)
			Float tmp36 = (m22 * m34);		HX_STACK_VAR(tmp36,"tmp36");
			HX_STACK_LINE(557)
			Float tmp37 = (m32 * m24);		HX_STACK_VAR(tmp37,"tmp37");
			HX_STACK_LINE(557)
			Float tmp38 = (tmp36 - tmp37);		HX_STACK_VAR(tmp38,"tmp38");
			HX_STACK_LINE(557)
			Float tmp39 = (tmp35 * tmp38);		HX_STACK_VAR(tmp39,"tmp39");
			HX_STACK_LINE(557)
			Float tmp40 = (tmp34 + tmp39);		HX_STACK_VAR(tmp40,"tmp40");
			HX_STACK_LINE(557)
			Float tmp41 = (tmp23 * tmp40);		HX_STACK_VAR(tmp41,"tmp41");
			HX_STACK_LINE(557)
			Float val = tmp41;		HX_STACK_VAR(val,"val");
			HX_STACK_LINE(557)
			::__hxcpp_memory_set_float(this1->buffer->b,(this1->byteOffset + (int)32),val);
			HX_STACK_LINE(557)
			val;
		}
		HX_STACK_LINE(558)
		{
			HX_STACK_LINE(558)
			Float tmp23 = d;		HX_STACK_VAR(tmp23,"tmp23");
			HX_STACK_LINE(558)
			Float tmp24 = -(tmp23);		HX_STACK_VAR(tmp24,"tmp24");
			HX_STACK_LINE(558)
			Float tmp25 = m11;		HX_STACK_VAR(tmp25,"tmp25");
			HX_STACK_LINE(558)
			Float tmp26 = (m32 * m44);		HX_STACK_VAR(tmp26,"tmp26");
			HX_STACK_LINE(558)
			Float tmp27 = (m42 * m34);		HX_STACK_VAR(tmp27,"tmp27");
			HX_STACK_LINE(558)
			Float tmp28 = (tmp26 - tmp27);		HX_STACK_VAR(tmp28,"tmp28");
			HX_STACK_LINE(558)
			Float tmp29 = (tmp25 * tmp28);		HX_STACK_VAR(tmp29,"tmp29");
			HX_STACK_LINE(558)
			Float tmp30 = m31;		HX_STACK_VAR(tmp30,"tmp30");
			HX_STACK_LINE(558)
			Float tmp31 = (m12 * m44);		HX_STACK_VAR(tmp31,"tmp31");
			HX_STACK_LINE(558)
			Float tmp32 = (m42 * m14);		HX_STACK_VAR(tmp32,"tmp32");
			HX_STACK_LINE(558)
			Float tmp33 = (tmp31 - tmp32);		HX_STACK_VAR(tmp33,"tmp33");
			HX_STACK_LINE(558)
			Float tmp34 = (tmp30 * tmp33);		HX_STACK_VAR(tmp34,"tmp34");
			HX_STACK_LINE(558)
			Float tmp35 = (tmp29 - tmp34);		HX_STACK_VAR(tmp35,"tmp35");
			HX_STACK_LINE(558)
			Float tmp36 = m41;		HX_STACK_VAR(tmp36,"tmp36");
			HX_STACK_LINE(558)
			Float tmp37 = (m12 * m34);		HX_STACK_VAR(tmp37,"tmp37");
			HX_STACK_LINE(558)
			Float tmp38 = (m32 * m14);		HX_STACK_VAR(tmp38,"tmp38");
			HX_STACK_LINE(558)
			Float tmp39 = (tmp37 - tmp38);		HX_STACK_VAR(tmp39,"tmp39");
			HX_STACK_LINE(558)
			Float tmp40 = (tmp36 * tmp39);		HX_STACK_VAR(tmp40,"tmp40");
			HX_STACK_LINE(558)
			Float tmp41 = (tmp35 + tmp40);		HX_STACK_VAR(tmp41,"tmp41");
			HX_STACK_LINE(558)
			Float tmp42 = (tmp24 * tmp41);		HX_STACK_VAR(tmp42,"tmp42");
			HX_STACK_LINE(558)
			Float val = tmp42;		HX_STACK_VAR(val,"val");
			HX_STACK_LINE(558)
			::__hxcpp_memory_set_float(this1->buffer->b,(this1->byteOffset + (int)36),val);
			HX_STACK_LINE(558)
			val;
		}
		HX_STACK_LINE(559)
		{
			HX_STACK_LINE(559)
			Float tmp23 = d;		HX_STACK_VAR(tmp23,"tmp23");
			HX_STACK_LINE(559)
			Float tmp24 = m11;		HX_STACK_VAR(tmp24,"tmp24");
			HX_STACK_LINE(559)
			Float tmp25 = (m22 * m44);		HX_STACK_VAR(tmp25,"tmp25");
			HX_STACK_LINE(559)
			Float tmp26 = (m42 * m24);		HX_STACK_VAR(tmp26,"tmp26");
			HX_STACK_LINE(559)
			Float tmp27 = (tmp25 - tmp26);		HX_STACK_VAR(tmp27,"tmp27");
			HX_STACK_LINE(559)
			Float tmp28 = (tmp24 * tmp27);		HX_STACK_VAR(tmp28,"tmp28");
			HX_STACK_LINE(559)
			Float tmp29 = m21;		HX_STACK_VAR(tmp29,"tmp29");
			HX_STACK_LINE(559)
			Float tmp30 = (m12 * m44);		HX_STACK_VAR(tmp30,"tmp30");
			HX_STACK_LINE(559)
			Float tmp31 = (m42 * m14);		HX_STACK_VAR(tmp31,"tmp31");
			HX_STACK_LINE(559)
			Float tmp32 = (tmp30 - tmp31);		HX_STACK_VAR(tmp32,"tmp32");
			HX_STACK_LINE(559)
			Float tmp33 = (tmp29 * tmp32);		HX_STACK_VAR(tmp33,"tmp33");
			HX_STACK_LINE(559)
			Float tmp34 = (tmp28 - tmp33);		HX_STACK_VAR(tmp34,"tmp34");
			HX_STACK_LINE(559)
			Float tmp35 = m41;		HX_STACK_VAR(tmp35,"tmp35");
			HX_STACK_LINE(559)
			Float tmp36 = (m12 * m24);		HX_STACK_VAR(tmp36,"tmp36");
			HX_STACK_LINE(559)
			Float tmp37 = (m22 * m14);		HX_STACK_VAR(tmp37,"tmp37");
			HX_STACK_LINE(559)
			Float tmp38 = (tmp36 - tmp37);		HX_STACK_VAR(tmp38,"tmp38");
			HX_STACK_LINE(559)
			Float tmp39 = (tmp35 * tmp38);		HX_STACK_VAR(tmp39,"tmp39");
			HX_STACK_LINE(559)
			Float tmp40 = (tmp34 + tmp39);		HX_STACK_VAR(tmp40,"tmp40");
			HX_STACK_LINE(559)
			Float tmp41 = (tmp23 * tmp40);		HX_STACK_VAR(tmp41,"tmp41");
			HX_STACK_LINE(559)
			Float val = tmp41;		HX_STACK_VAR(val,"val");
			HX_STACK_LINE(559)
			::__hxcpp_memory_set_float(this1->buffer->b,(this1->byteOffset + (int)40),val);
			HX_STACK_LINE(559)
			val;
		}
		HX_STACK_LINE(560)
		{
			HX_STACK_LINE(560)
			Float tmp23 = d;		HX_STACK_VAR(tmp23,"tmp23");
			HX_STACK_LINE(560)
			Float tmp24 = -(tmp23);		HX_STACK_VAR(tmp24,"tmp24");
			HX_STACK_LINE(560)
			Float tmp25 = m11;		HX_STACK_VAR(tmp25,"tmp25");
			HX_STACK_LINE(560)
			Float tmp26 = (m22 * m34);		HX_STACK_VAR(tmp26,"tmp26");
			HX_STACK_LINE(560)
			Float tmp27 = (m32 * m24);		HX_STACK_VAR(tmp27,"tmp27");
			HX_STACK_LINE(560)
			Float tmp28 = (tmp26 - tmp27);		HX_STACK_VAR(tmp28,"tmp28");
			HX_STACK_LINE(560)
			Float tmp29 = (tmp25 * tmp28);		HX_STACK_VAR(tmp29,"tmp29");
			HX_STACK_LINE(560)
			Float tmp30 = m21;		HX_STACK_VAR(tmp30,"tmp30");
			HX_STACK_LINE(560)
			Float tmp31 = (m12 * m34);		HX_STACK_VAR(tmp31,"tmp31");
			HX_STACK_LINE(560)
			Float tmp32 = (m32 * m14);		HX_STACK_VAR(tmp32,"tmp32");
			HX_STACK_LINE(560)
			Float tmp33 = (tmp31 - tmp32);		HX_STACK_VAR(tmp33,"tmp33");
			HX_STACK_LINE(560)
			Float tmp34 = (tmp30 * tmp33);		HX_STACK_VAR(tmp34,"tmp34");
			HX_STACK_LINE(560)
			Float tmp35 = (tmp29 - tmp34);		HX_STACK_VAR(tmp35,"tmp35");
			HX_STACK_LINE(560)
			Float tmp36 = m31;		HX_STACK_VAR(tmp36,"tmp36");
			HX_STACK_LINE(560)
			Float tmp37 = (m12 * m24);		HX_STACK_VAR(tmp37,"tmp37");
			HX_STACK_LINE(560)
			Float tmp38 = (m22 * m14);		HX_STACK_VAR(tmp38,"tmp38");
			HX_STACK_LINE(560)
			Float tmp39 = (tmp37 - tmp38);		HX_STACK_VAR(tmp39,"tmp39");
			HX_STACK_LINE(560)
			Float tmp40 = (tmp36 * tmp39);		HX_STACK_VAR(tmp40,"tmp40");
			HX_STACK_LINE(560)
			Float tmp41 = (tmp35 + tmp40);		HX_STACK_VAR(tmp41,"tmp41");
			HX_STACK_LINE(560)
			Float tmp42 = (tmp24 * tmp41);		HX_STACK_VAR(tmp42,"tmp42");
			HX_STACK_LINE(560)
			Float val = tmp42;		HX_STACK_VAR(val,"val");
			HX_STACK_LINE(560)
			::__hxcpp_memory_set_float(this1->buffer->b,(this1->byteOffset + (int)44),val);
			HX_STACK_LINE(560)
			val;
		}
		HX_STACK_LINE(561)
		{
			HX_STACK_LINE(561)
			Float tmp23 = d;		HX_STACK_VAR(tmp23,"tmp23");
			HX_STACK_LINE(561)
			Float tmp24 = -(tmp23);		HX_STACK_VAR(tmp24,"tmp24");
			HX_STACK_LINE(561)
			Float tmp25 = m21;		HX_STACK_VAR(tmp25,"tmp25");
			HX_STACK_LINE(561)
			Float tmp26 = (m32 * m43);		HX_STACK_VAR(tmp26,"tmp26");
			HX_STACK_LINE(561)
			Float tmp27 = (m42 * m33);		HX_STACK_VAR(tmp27,"tmp27");
			HX_STACK_LINE(561)
			Float tmp28 = (tmp26 - tmp27);		HX_STACK_VAR(tmp28,"tmp28");
			HX_STACK_LINE(561)
			Float tmp29 = (tmp25 * tmp28);		HX_STACK_VAR(tmp29,"tmp29");
			HX_STACK_LINE(561)
			Float tmp30 = m31;		HX_STACK_VAR(tmp30,"tmp30");
			HX_STACK_LINE(561)
			Float tmp31 = (m22 * m43);		HX_STACK_VAR(tmp31,"tmp31");
			HX_STACK_LINE(561)
			Float tmp32 = (m42 * m23);		HX_STACK_VAR(tmp32,"tmp32");
			HX_STACK_LINE(561)
			Float tmp33 = (tmp31 - tmp32);		HX_STACK_VAR(tmp33,"tmp33");
			HX_STACK_LINE(561)
			Float tmp34 = (tmp30 * tmp33);		HX_STACK_VAR(tmp34,"tmp34");
			HX_STACK_LINE(561)
			Float tmp35 = (tmp29 - tmp34);		HX_STACK_VAR(tmp35,"tmp35");
			HX_STACK_LINE(561)
			Float tmp36 = m41;		HX_STACK_VAR(tmp36,"tmp36");
			HX_STACK_LINE(561)
			Float tmp37 = (m22 * m33);		HX_STACK_VAR(tmp37,"tmp37");
			HX_STACK_LINE(561)
			Float tmp38 = (m32 * m23);		HX_STACK_VAR(tmp38,"tmp38");
			HX_STACK_LINE(561)
			Float tmp39 = (tmp37 - tmp38);		HX_STACK_VAR(tmp39,"tmp39");
			HX_STACK_LINE(561)
			Float tmp40 = (tmp36 * tmp39);		HX_STACK_VAR(tmp40,"tmp40");
			HX_STACK_LINE(561)
			Float tmp41 = (tmp35 + tmp40);		HX_STACK_VAR(tmp41,"tmp41");
			HX_STACK_LINE(561)
			Float tmp42 = (tmp24 * tmp41);		HX_STACK_VAR(tmp42,"tmp42");
			HX_STACK_LINE(561)
			Float val = tmp42;		HX_STACK_VAR(val,"val");
			HX_STACK_LINE(561)
			::__hxcpp_memory_set_float(this1->buffer->b,(this1->byteOffset + (int)48),val);
			HX_STACK_LINE(561)
			val;
		}
		HX_STACK_LINE(562)
		{
			HX_STACK_LINE(562)
			Float tmp23 = d;		HX_STACK_VAR(tmp23,"tmp23");
			HX_STACK_LINE(562)
			Float tmp24 = m11;		HX_STACK_VAR(tmp24,"tmp24");
			HX_STACK_LINE(562)
			Float tmp25 = (m32 * m43);		HX_STACK_VAR(tmp25,"tmp25");
			HX_STACK_LINE(562)
			Float tmp26 = (m42 * m33);		HX_STACK_VAR(tmp26,"tmp26");
			HX_STACK_LINE(562)
			Float tmp27 = (tmp25 - tmp26);		HX_STACK_VAR(tmp27,"tmp27");
			HX_STACK_LINE(562)
			Float tmp28 = (tmp24 * tmp27);		HX_STACK_VAR(tmp28,"tmp28");
			HX_STACK_LINE(562)
			Float tmp29 = m31;		HX_STACK_VAR(tmp29,"tmp29");
			HX_STACK_LINE(562)
			Float tmp30 = (m12 * m43);		HX_STACK_VAR(tmp30,"tmp30");
			HX_STACK_LINE(562)
			Float tmp31 = (m42 * m13);		HX_STACK_VAR(tmp31,"tmp31");
			HX_STACK_LINE(562)
			Float tmp32 = (tmp30 - tmp31);		HX_STACK_VAR(tmp32,"tmp32");
			HX_STACK_LINE(562)
			Float tmp33 = (tmp29 * tmp32);		HX_STACK_VAR(tmp33,"tmp33");
			HX_STACK_LINE(562)
			Float tmp34 = (tmp28 - tmp33);		HX_STACK_VAR(tmp34,"tmp34");
			HX_STACK_LINE(562)
			Float tmp35 = m41;		HX_STACK_VAR(tmp35,"tmp35");
			HX_STACK_LINE(562)
			Float tmp36 = (m12 * m33);		HX_STACK_VAR(tmp36,"tmp36");
			HX_STACK_LINE(562)
			Float tmp37 = (m32 * m13);		HX_STACK_VAR(tmp37,"tmp37");
			HX_STACK_LINE(562)
			Float tmp38 = (tmp36 - tmp37);		HX_STACK_VAR(tmp38,"tmp38");
			HX_STACK_LINE(562)
			Float tmp39 = (tmp35 * tmp38);		HX_STACK_VAR(tmp39,"tmp39");
			HX_STACK_LINE(562)
			Float tmp40 = (tmp34 + tmp39);		HX_STACK_VAR(tmp40,"tmp40");
			HX_STACK_LINE(562)
			Float tmp41 = (tmp23 * tmp40);		HX_STACK_VAR(tmp41,"tmp41");
			HX_STACK_LINE(562)
			Float val = tmp41;		HX_STACK_VAR(val,"val");
			HX_STACK_LINE(562)
			::__hxcpp_memory_set_float(this1->buffer->b,(this1->byteOffset + (int)52),val);
			HX_STACK_LINE(562)
			val;
		}
		HX_STACK_LINE(563)
		{
			HX_STACK_LINE(563)
			Float tmp23 = d;		HX_STACK_VAR(tmp23,"tmp23");
			HX_STACK_LINE(563)
			Float tmp24 = -(tmp23);		HX_STACK_VAR(tmp24,"tmp24");
			HX_STACK_LINE(563)
			Float tmp25 = m11;		HX_STACK_VAR(tmp25,"tmp25");
			HX_STACK_LINE(563)
			Float tmp26 = (m22 * m43);		HX_STACK_VAR(tmp26,"tmp26");
			HX_STACK_LINE(563)
			Float tmp27 = (m42 * m23);		HX_STACK_VAR(tmp27,"tmp27");
			HX_STACK_LINE(563)
			Float tmp28 = (tmp26 - tmp27);		HX_STACK_VAR(tmp28,"tmp28");
			HX_STACK_LINE(563)
			Float tmp29 = (tmp25 * tmp28);		HX_STACK_VAR(tmp29,"tmp29");
			HX_STACK_LINE(563)
			Float tmp30 = m21;		HX_STACK_VAR(tmp30,"tmp30");
			HX_STACK_LINE(563)
			Float tmp31 = (m12 * m43);		HX_STACK_VAR(tmp31,"tmp31");
			HX_STACK_LINE(563)
			Float tmp32 = (m42 * m13);		HX_STACK_VAR(tmp32,"tmp32");
			HX_STACK_LINE(563)
			Float tmp33 = (tmp31 - tmp32);		HX_STACK_VAR(tmp33,"tmp33");
			HX_STACK_LINE(563)
			Float tmp34 = (tmp30 * tmp33);		HX_STACK_VAR(tmp34,"tmp34");
			HX_STACK_LINE(563)
			Float tmp35 = (tmp29 - tmp34);		HX_STACK_VAR(tmp35,"tmp35");
			HX_STACK_LINE(563)
			Float tmp36 = m41;		HX_STACK_VAR(tmp36,"tmp36");
			HX_STACK_LINE(563)
			Float tmp37 = (m12 * m23);		HX_STACK_VAR(tmp37,"tmp37");
			HX_STACK_LINE(563)
			Float tmp38 = (m22 * m13);		HX_STACK_VAR(tmp38,"tmp38");
			HX_STACK_LINE(563)
			Float tmp39 = (tmp37 - tmp38);		HX_STACK_VAR(tmp39,"tmp39");
			HX_STACK_LINE(563)
			Float tmp40 = (tmp36 * tmp39);		HX_STACK_VAR(tmp40,"tmp40");
			HX_STACK_LINE(563)
			Float tmp41 = (tmp35 + tmp40);		HX_STACK_VAR(tmp41,"tmp41");
			HX_STACK_LINE(563)
			Float tmp42 = (tmp24 * tmp41);		HX_STACK_VAR(tmp42,"tmp42");
			HX_STACK_LINE(563)
			Float val = tmp42;		HX_STACK_VAR(val,"val");
			HX_STACK_LINE(563)
			::__hxcpp_memory_set_float(this1->buffer->b,(this1->byteOffset + (int)56),val);
			HX_STACK_LINE(563)
			val;
		}
		HX_STACK_LINE(564)
		{
			HX_STACK_LINE(564)
			Float tmp23 = d;		HX_STACK_VAR(tmp23,"tmp23");
			HX_STACK_LINE(564)
			Float tmp24 = m11;		HX_STACK_VAR(tmp24,"tmp24");
			HX_STACK_LINE(564)
			Float tmp25 = (m22 * m33);		HX_STACK_VAR(tmp25,"tmp25");
			HX_STACK_LINE(564)
			Float tmp26 = (m32 * m23);		HX_STACK_VAR(tmp26,"tmp26");
			HX_STACK_LINE(564)
			Float tmp27 = (tmp25 - tmp26);		HX_STACK_VAR(tmp27,"tmp27");
			HX_STACK_LINE(564)
			Float tmp28 = (tmp24 * tmp27);		HX_STACK_VAR(tmp28,"tmp28");
			HX_STACK_LINE(564)
			Float tmp29 = m21;		HX_STACK_VAR(tmp29,"tmp29");
			HX_STACK_LINE(564)
			Float tmp30 = (m12 * m33);		HX_STACK_VAR(tmp30,"tmp30");
			HX_STACK_LINE(564)
			Float tmp31 = (m32 * m13);		HX_STACK_VAR(tmp31,"tmp31");
			HX_STACK_LINE(564)
			Float tmp32 = (tmp30 - tmp31);		HX_STACK_VAR(tmp32,"tmp32");
			HX_STACK_LINE(564)
			Float tmp33 = (tmp29 * tmp32);		HX_STACK_VAR(tmp33,"tmp33");
			HX_STACK_LINE(564)
			Float tmp34 = (tmp28 - tmp33);		HX_STACK_VAR(tmp34,"tmp34");
			HX_STACK_LINE(564)
			Float tmp35 = m31;		HX_STACK_VAR(tmp35,"tmp35");
			HX_STACK_LINE(564)
			Float tmp36 = (m12 * m23);		HX_STACK_VAR(tmp36,"tmp36");
			HX_STACK_LINE(564)
			Float tmp37 = (m22 * m13);		HX_STACK_VAR(tmp37,"tmp37");
			HX_STACK_LINE(564)
			Float tmp38 = (tmp36 - tmp37);		HX_STACK_VAR(tmp38,"tmp38");
			HX_STACK_LINE(564)
			Float tmp39 = (tmp35 * tmp38);		HX_STACK_VAR(tmp39,"tmp39");
			HX_STACK_LINE(564)
			Float tmp40 = (tmp34 + tmp39);		HX_STACK_VAR(tmp40,"tmp40");
			HX_STACK_LINE(564)
			Float tmp41 = (tmp23 * tmp40);		HX_STACK_VAR(tmp41,"tmp41");
			HX_STACK_LINE(564)
			Float val = tmp41;		HX_STACK_VAR(val,"val");
			HX_STACK_LINE(564)
			::__hxcpp_memory_set_float(this1->buffer->b,(this1->byteOffset + (int)60),val);
			HX_STACK_LINE(564)
			val;
		}
	}
	HX_STACK_LINE(568)
	bool tmp6 = invertable;		HX_STACK_VAR(tmp6,"tmp6");
	HX_STACK_LINE(568)
	return tmp6;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Matrix4_Impl__obj,invert,return )

Void Matrix4_Impl__obj::pointAt( ::lime::utils::ArrayBufferView this1,::lime::math::Vector4 pos,::lime::math::Vector4 at,::lime::math::Vector4 up){
{
		HX_STACK_FRAME("lime.math._Matrix4.Matrix4_Impl_","pointAt",0x903e77db,"lime.math._Matrix4.Matrix4_Impl_.pointAt","lime/math/Matrix4.hx",573,0xeb65dbd8)
		HX_STACK_ARG(this1,"this1")
		HX_STACK_ARG(pos,"pos")
		HX_STACK_ARG(at,"at")
		HX_STACK_ARG(up,"up")
		HX_STACK_LINE(575)
		bool tmp = (at == null());		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(575)
		if ((tmp)){
			HX_STACK_LINE(577)
			::lime::math::Vector4 tmp1 = ::lime::math::Vector4_obj::__new((int)0,(int)0,(int)-1,null());		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(577)
			at = tmp1;
		}
		HX_STACK_LINE(581)
		bool tmp1 = (up == null());		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(581)
		if ((tmp1)){
			HX_STACK_LINE(583)
			::lime::math::Vector4 tmp2 = ::lime::math::Vector4_obj::__new((int)0,(int)-1,(int)0,null());		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(583)
			up = tmp2;
		}
		HX_STACK_LINE(587)
		Float tmp2 = (at->x - pos->x);		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(587)
		Float tmp3 = (at->y - pos->y);		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(587)
		Float tmp4 = (at->z - pos->z);		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(587)
		::lime::math::Vector4 tmp5 = ::lime::math::Vector4_obj::__new(tmp2,tmp3,tmp4,null());		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(587)
		::lime::math::Vector4 dir = tmp5;		HX_STACK_VAR(dir,"dir");
		HX_STACK_LINE(588)
		::lime::math::Vector4 tmp6 = ::lime::math::Vector4_obj::__new(up->x,up->y,up->z,up->w);		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(588)
		::lime::math::Vector4 vup = tmp6;		HX_STACK_VAR(vup,"vup");
		HX_STACK_LINE(589)
		::lime::math::Vector4 right;		HX_STACK_VAR(right,"right");
		HX_STACK_LINE(591)
		{
			HX_STACK_LINE(591)
			Float tmp7 = (dir->x * dir->x);		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(591)
			Float tmp8 = (dir->y * dir->y);		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(591)
			Float tmp9 = (tmp7 + tmp8);		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(591)
			Float tmp10 = (dir->z * dir->z);		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(591)
			Float tmp11 = (tmp9 + tmp10);		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(591)
			Float tmp12 = ::Math_obj::sqrt(tmp11);		HX_STACK_VAR(tmp12,"tmp12");
			HX_STACK_LINE(591)
			Float l = tmp12;		HX_STACK_VAR(l,"l");
			HX_STACK_LINE(591)
			bool tmp13 = (l != (int)0);		HX_STACK_VAR(tmp13,"tmp13");
			HX_STACK_LINE(591)
			if ((tmp13)){
				HX_STACK_LINE(591)
				hx::DivEq(dir->x,l);
				HX_STACK_LINE(591)
				hx::DivEq(dir->y,l);
				HX_STACK_LINE(591)
				hx::DivEq(dir->z,l);
			}
			HX_STACK_LINE(591)
			l;
		}
		HX_STACK_LINE(592)
		{
			HX_STACK_LINE(592)
			Float tmp7 = (vup->x * vup->x);		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(592)
			Float tmp8 = (vup->y * vup->y);		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(592)
			Float tmp9 = (tmp7 + tmp8);		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(592)
			Float tmp10 = (vup->z * vup->z);		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(592)
			Float tmp11 = (tmp9 + tmp10);		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(592)
			Float tmp12 = ::Math_obj::sqrt(tmp11);		HX_STACK_VAR(tmp12,"tmp12");
			HX_STACK_LINE(592)
			Float l = tmp12;		HX_STACK_VAR(l,"l");
			HX_STACK_LINE(592)
			bool tmp13 = (l != (int)0);		HX_STACK_VAR(tmp13,"tmp13");
			HX_STACK_LINE(592)
			if ((tmp13)){
				HX_STACK_LINE(592)
				hx::DivEq(vup->x,l);
				HX_STACK_LINE(592)
				hx::DivEq(vup->y,l);
				HX_STACK_LINE(592)
				hx::DivEq(vup->z,l);
			}
			HX_STACK_LINE(592)
			l;
		}
		HX_STACK_LINE(594)
		::lime::math::Vector4 tmp7 = ::lime::math::Vector4_obj::__new(dir->x,dir->y,dir->z,dir->w);		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(594)
		::lime::math::Vector4 dir2 = tmp7;		HX_STACK_VAR(dir2,"dir2");
		HX_STACK_LINE(595)
		{
			HX_STACK_LINE(595)
			Float tmp8 = (vup->x * dir->x);		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(595)
			Float tmp9 = (vup->y * dir->y);		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(595)
			Float tmp10 = (tmp8 + tmp9);		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(595)
			Float tmp11 = (vup->z * dir->z);		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(595)
			Float tmp12 = (tmp10 + tmp11);		HX_STACK_VAR(tmp12,"tmp12");
			HX_STACK_LINE(595)
			Float s = tmp12;		HX_STACK_VAR(s,"s");
			HX_STACK_LINE(595)
			hx::MultEq(dir2->x,s);
			HX_STACK_LINE(595)
			hx::MultEq(dir2->y,s);
			HX_STACK_LINE(595)
			hx::MultEq(dir2->z,s);
		}
		HX_STACK_LINE(597)
		Float tmp8 = (vup->x - dir2->x);		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(597)
		Float tmp9 = (vup->y - dir2->y);		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(597)
		Float tmp10 = (vup->z - dir2->z);		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(597)
		::lime::math::Vector4 tmp11 = ::lime::math::Vector4_obj::__new(tmp8,tmp9,tmp10,null());		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(597)
		vup = tmp11;
		HX_STACK_LINE(599)
		Float tmp12 = (vup->x * vup->x);		HX_STACK_VAR(tmp12,"tmp12");
		HX_STACK_LINE(599)
		Float tmp13 = (vup->y * vup->y);		HX_STACK_VAR(tmp13,"tmp13");
		HX_STACK_LINE(599)
		Float tmp14 = (tmp12 + tmp13);		HX_STACK_VAR(tmp14,"tmp14");
		HX_STACK_LINE(599)
		Float tmp15 = (vup->z * vup->z);		HX_STACK_VAR(tmp15,"tmp15");
		HX_STACK_LINE(599)
		Float tmp16 = (tmp14 + tmp15);		HX_STACK_VAR(tmp16,"tmp16");
		HX_STACK_LINE(599)
		Float tmp17 = ::Math_obj::sqrt(tmp16);		HX_STACK_VAR(tmp17,"tmp17");
		HX_STACK_LINE(599)
		bool tmp18 = (tmp17 > (int)0);		HX_STACK_VAR(tmp18,"tmp18");
		HX_STACK_LINE(599)
		if ((tmp18)){
			HX_STACK_LINE(601)
			Float tmp19 = (vup->x * vup->x);		HX_STACK_VAR(tmp19,"tmp19");
			HX_STACK_LINE(601)
			Float tmp20 = (vup->y * vup->y);		HX_STACK_VAR(tmp20,"tmp20");
			HX_STACK_LINE(601)
			Float tmp21 = (tmp19 + tmp20);		HX_STACK_VAR(tmp21,"tmp21");
			HX_STACK_LINE(601)
			Float tmp22 = (vup->z * vup->z);		HX_STACK_VAR(tmp22,"tmp22");
			HX_STACK_LINE(601)
			Float tmp23 = (tmp21 + tmp22);		HX_STACK_VAR(tmp23,"tmp23");
			HX_STACK_LINE(601)
			Float tmp24 = ::Math_obj::sqrt(tmp23);		HX_STACK_VAR(tmp24,"tmp24");
			HX_STACK_LINE(601)
			Float l = tmp24;		HX_STACK_VAR(l,"l");
			HX_STACK_LINE(601)
			bool tmp25 = (l != (int)0);		HX_STACK_VAR(tmp25,"tmp25");
			HX_STACK_LINE(601)
			if ((tmp25)){
				HX_STACK_LINE(601)
				hx::DivEq(vup->x,l);
				HX_STACK_LINE(601)
				hx::DivEq(vup->y,l);
				HX_STACK_LINE(601)
				hx::DivEq(vup->z,l);
			}
			HX_STACK_LINE(601)
			l;
		}
		else{
			HX_STACK_LINE(605)
			bool tmp19 = (dir->x != (int)0);		HX_STACK_VAR(tmp19,"tmp19");
			HX_STACK_LINE(605)
			if ((tmp19)){
				HX_STACK_LINE(607)
				Float tmp20 = dir->y;		HX_STACK_VAR(tmp20,"tmp20");
				HX_STACK_LINE(607)
				Float tmp21 = -(tmp20);		HX_STACK_VAR(tmp21,"tmp21");
				HX_STACK_LINE(607)
				Float tmp22 = dir->x;		HX_STACK_VAR(tmp22,"tmp22");
				HX_STACK_LINE(607)
				::lime::math::Vector4 tmp23 = ::lime::math::Vector4_obj::__new(tmp21,tmp22,(int)0,null());		HX_STACK_VAR(tmp23,"tmp23");
				HX_STACK_LINE(607)
				vup = tmp23;
			}
			else{
				HX_STACK_LINE(611)
				::lime::math::Vector4 tmp20 = ::lime::math::Vector4_obj::__new((int)1,(int)0,(int)0,null());		HX_STACK_VAR(tmp20,"tmp20");
				HX_STACK_LINE(611)
				vup = tmp20;
			}
		}
		HX_STACK_LINE(617)
		Float tmp19 = (vup->y * dir->z);		HX_STACK_VAR(tmp19,"tmp19");
		HX_STACK_LINE(617)
		Float tmp20 = (vup->z * dir->y);		HX_STACK_VAR(tmp20,"tmp20");
		HX_STACK_LINE(617)
		Float tmp21 = (tmp19 - tmp20);		HX_STACK_VAR(tmp21,"tmp21");
		HX_STACK_LINE(617)
		Float tmp22 = (vup->z * dir->x);		HX_STACK_VAR(tmp22,"tmp22");
		HX_STACK_LINE(617)
		Float tmp23 = (vup->x * dir->z);		HX_STACK_VAR(tmp23,"tmp23");
		HX_STACK_LINE(617)
		Float tmp24 = (tmp22 - tmp23);		HX_STACK_VAR(tmp24,"tmp24");
		HX_STACK_LINE(617)
		Float tmp25 = (vup->x * dir->y);		HX_STACK_VAR(tmp25,"tmp25");
		HX_STACK_LINE(617)
		Float tmp26 = (vup->y * dir->x);		HX_STACK_VAR(tmp26,"tmp26");
		HX_STACK_LINE(617)
		Float tmp27 = (tmp25 - tmp26);		HX_STACK_VAR(tmp27,"tmp27");
		HX_STACK_LINE(617)
		::lime::math::Vector4 tmp28 = ::lime::math::Vector4_obj::__new(tmp21,tmp24,tmp27,(int)1);		HX_STACK_VAR(tmp28,"tmp28");
		HX_STACK_LINE(617)
		right = tmp28;
		HX_STACK_LINE(618)
		{
			HX_STACK_LINE(618)
			Float tmp29 = (right->x * right->x);		HX_STACK_VAR(tmp29,"tmp29");
			HX_STACK_LINE(618)
			Float tmp30 = (right->y * right->y);		HX_STACK_VAR(tmp30,"tmp30");
			HX_STACK_LINE(618)
			Float tmp31 = (tmp29 + tmp30);		HX_STACK_VAR(tmp31,"tmp31");
			HX_STACK_LINE(618)
			Float tmp32 = (right->z * right->z);		HX_STACK_VAR(tmp32,"tmp32");
			HX_STACK_LINE(618)
			Float tmp33 = (tmp31 + tmp32);		HX_STACK_VAR(tmp33,"tmp33");
			HX_STACK_LINE(618)
			Float tmp34 = ::Math_obj::sqrt(tmp33);		HX_STACK_VAR(tmp34,"tmp34");
			HX_STACK_LINE(618)
			Float l = tmp34;		HX_STACK_VAR(l,"l");
			HX_STACK_LINE(618)
			bool tmp35 = (l != (int)0);		HX_STACK_VAR(tmp35,"tmp35");
			HX_STACK_LINE(618)
			if ((tmp35)){
				HX_STACK_LINE(618)
				hx::DivEq(right->x,l);
				HX_STACK_LINE(618)
				hx::DivEq(right->y,l);
				HX_STACK_LINE(618)
				hx::DivEq(right->z,l);
			}
			HX_STACK_LINE(618)
			l;
		}
		HX_STACK_LINE(620)
		{
			HX_STACK_LINE(620)
			Float val = right->x;		HX_STACK_VAR(val,"val");
			HX_STACK_LINE(620)
			::__hxcpp_memory_set_float(this1->buffer->b,this1->byteOffset,val);
			HX_STACK_LINE(620)
			val;
		}
		HX_STACK_LINE(621)
		{
			HX_STACK_LINE(621)
			Float val = right->y;		HX_STACK_VAR(val,"val");
			HX_STACK_LINE(621)
			::__hxcpp_memory_set_float(this1->buffer->b,(this1->byteOffset + (int)16),val);
			HX_STACK_LINE(621)
			val;
		}
		HX_STACK_LINE(622)
		{
			HX_STACK_LINE(622)
			Float val = right->z;		HX_STACK_VAR(val,"val");
			HX_STACK_LINE(622)
			::__hxcpp_memory_set_float(this1->buffer->b,(this1->byteOffset + (int)32),val);
			HX_STACK_LINE(622)
			val;
		}
		HX_STACK_LINE(623)
		{
			HX_STACK_LINE(623)
			::__hxcpp_memory_set_float(this1->buffer->b,(this1->byteOffset + (int)48),((Float)0.0));
			HX_STACK_LINE(623)
			((Float)0.0);
		}
		HX_STACK_LINE(624)
		{
			HX_STACK_LINE(624)
			Float val = vup->x;		HX_STACK_VAR(val,"val");
			HX_STACK_LINE(624)
			::__hxcpp_memory_set_float(this1->buffer->b,(this1->byteOffset + (int)4),val);
			HX_STACK_LINE(624)
			val;
		}
		HX_STACK_LINE(625)
		{
			HX_STACK_LINE(625)
			Float val = vup->y;		HX_STACK_VAR(val,"val");
			HX_STACK_LINE(625)
			::__hxcpp_memory_set_float(this1->buffer->b,(this1->byteOffset + (int)20),val);
			HX_STACK_LINE(625)
			val;
		}
		HX_STACK_LINE(626)
		{
			HX_STACK_LINE(626)
			Float val = vup->z;		HX_STACK_VAR(val,"val");
			HX_STACK_LINE(626)
			::__hxcpp_memory_set_float(this1->buffer->b,(this1->byteOffset + (int)36),val);
			HX_STACK_LINE(626)
			val;
		}
		HX_STACK_LINE(627)
		{
			HX_STACK_LINE(627)
			::__hxcpp_memory_set_float(this1->buffer->b,(this1->byteOffset + (int)52),((Float)0.0));
			HX_STACK_LINE(627)
			((Float)0.0);
		}
		HX_STACK_LINE(628)
		{
			HX_STACK_LINE(628)
			Float val = dir->x;		HX_STACK_VAR(val,"val");
			HX_STACK_LINE(628)
			::__hxcpp_memory_set_float(this1->buffer->b,(this1->byteOffset + (int)8),val);
			HX_STACK_LINE(628)
			val;
		}
		HX_STACK_LINE(629)
		{
			HX_STACK_LINE(629)
			Float val = dir->y;		HX_STACK_VAR(val,"val");
			HX_STACK_LINE(629)
			::__hxcpp_memory_set_float(this1->buffer->b,(this1->byteOffset + (int)24),val);
			HX_STACK_LINE(629)
			val;
		}
		HX_STACK_LINE(630)
		{
			HX_STACK_LINE(630)
			Float val = dir->z;		HX_STACK_VAR(val,"val");
			HX_STACK_LINE(630)
			::__hxcpp_memory_set_float(this1->buffer->b,(this1->byteOffset + (int)40),val);
			HX_STACK_LINE(630)
			val;
		}
		HX_STACK_LINE(631)
		{
			HX_STACK_LINE(631)
			::__hxcpp_memory_set_float(this1->buffer->b,(this1->byteOffset + (int)56),((Float)0.0));
			HX_STACK_LINE(631)
			((Float)0.0);
		}
		HX_STACK_LINE(632)
		{
			HX_STACK_LINE(632)
			Float val = pos->x;		HX_STACK_VAR(val,"val");
			HX_STACK_LINE(632)
			::__hxcpp_memory_set_float(this1->buffer->b,(this1->byteOffset + (int)12),val);
			HX_STACK_LINE(632)
			val;
		}
		HX_STACK_LINE(633)
		{
			HX_STACK_LINE(633)
			Float val = pos->y;		HX_STACK_VAR(val,"val");
			HX_STACK_LINE(633)
			::__hxcpp_memory_set_float(this1->buffer->b,(this1->byteOffset + (int)28),val);
			HX_STACK_LINE(633)
			val;
		}
		HX_STACK_LINE(634)
		{
			HX_STACK_LINE(634)
			Float val = pos->z;		HX_STACK_VAR(val,"val");
			HX_STACK_LINE(634)
			::__hxcpp_memory_set_float(this1->buffer->b,(this1->byteOffset + (int)44),val);
			HX_STACK_LINE(634)
			val;
		}
		HX_STACK_LINE(635)
		{
			HX_STACK_LINE(635)
			::__hxcpp_memory_set_float(this1->buffer->b,(this1->byteOffset + (int)60),((Float)1.0));
			HX_STACK_LINE(635)
			((Float)1.0);
		}
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC4(Matrix4_Impl__obj,pointAt,(void))

Void Matrix4_Impl__obj::prepend( ::lime::utils::ArrayBufferView this1,::lime::utils::ArrayBufferView rhs){
{
		HX_STACK_FRAME("lime.math._Matrix4.Matrix4_Impl_","prepend",0x76fd6d86,"lime.math._Matrix4.Matrix4_Impl_.prepend","lime/math/Matrix4.hx",640,0xeb65dbd8)
		HX_STACK_ARG(this1,"this1")
		HX_STACK_ARG(rhs,"rhs")
		HX_STACK_LINE(642)
		::lime::utils::ArrayBufferView tmp = rhs;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(642)
		Float tmp1 = ::lime::math::_Matrix4::Matrix4_Impl__obj::get(tmp,(int)0);		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(642)
		Float m111 = tmp1;		HX_STACK_VAR(m111,"m111");
		HX_STACK_LINE(642)
		::lime::utils::ArrayBufferView tmp2 = rhs;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(642)
		Float tmp3 = ::lime::math::_Matrix4::Matrix4_Impl__obj::get(tmp2,(int)4);		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(642)
		Float m121 = tmp3;		HX_STACK_VAR(m121,"m121");
		HX_STACK_LINE(642)
		::lime::utils::ArrayBufferView tmp4 = rhs;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(642)
		Float tmp5 = ::lime::math::_Matrix4::Matrix4_Impl__obj::get(tmp4,(int)8);		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(642)
		Float m131 = tmp5;		HX_STACK_VAR(m131,"m131");
		HX_STACK_LINE(642)
		::lime::utils::ArrayBufferView tmp6 = rhs;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(642)
		Float tmp7 = ::lime::math::_Matrix4::Matrix4_Impl__obj::get(tmp6,(int)12);		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(642)
		Float m141 = tmp7;		HX_STACK_VAR(m141,"m141");
		HX_STACK_LINE(643)
		::lime::utils::ArrayBufferView tmp8 = rhs;		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(643)
		Float tmp9 = ::lime::math::_Matrix4::Matrix4_Impl__obj::get(tmp8,(int)1);		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(643)
		Float m112 = tmp9;		HX_STACK_VAR(m112,"m112");
		HX_STACK_LINE(643)
		::lime::utils::ArrayBufferView tmp10 = rhs;		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(643)
		Float tmp11 = ::lime::math::_Matrix4::Matrix4_Impl__obj::get(tmp10,(int)5);		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(643)
		Float m122 = tmp11;		HX_STACK_VAR(m122,"m122");
		HX_STACK_LINE(643)
		::lime::utils::ArrayBufferView tmp12 = rhs;		HX_STACK_VAR(tmp12,"tmp12");
		HX_STACK_LINE(643)
		Float tmp13 = ::lime::math::_Matrix4::Matrix4_Impl__obj::get(tmp12,(int)9);		HX_STACK_VAR(tmp13,"tmp13");
		HX_STACK_LINE(643)
		Float m132 = tmp13;		HX_STACK_VAR(m132,"m132");
		HX_STACK_LINE(643)
		::lime::utils::ArrayBufferView tmp14 = rhs;		HX_STACK_VAR(tmp14,"tmp14");
		HX_STACK_LINE(643)
		Float tmp15 = ::lime::math::_Matrix4::Matrix4_Impl__obj::get(tmp14,(int)13);		HX_STACK_VAR(tmp15,"tmp15");
		HX_STACK_LINE(643)
		Float m142 = tmp15;		HX_STACK_VAR(m142,"m142");
		HX_STACK_LINE(644)
		::lime::utils::ArrayBufferView tmp16 = rhs;		HX_STACK_VAR(tmp16,"tmp16");
		HX_STACK_LINE(644)
		Float tmp17 = ::lime::math::_Matrix4::Matrix4_Impl__obj::get(tmp16,(int)2);		HX_STACK_VAR(tmp17,"tmp17");
		HX_STACK_LINE(644)
		Float m113 = tmp17;		HX_STACK_VAR(m113,"m113");
		HX_STACK_LINE(644)
		::lime::utils::ArrayBufferView tmp18 = rhs;		HX_STACK_VAR(tmp18,"tmp18");
		HX_STACK_LINE(644)
		Float tmp19 = ::lime::math::_Matrix4::Matrix4_Impl__obj::get(tmp18,(int)6);		HX_STACK_VAR(tmp19,"tmp19");
		HX_STACK_LINE(644)
		Float m123 = tmp19;		HX_STACK_VAR(m123,"m123");
		HX_STACK_LINE(644)
		::lime::utils::ArrayBufferView tmp20 = rhs;		HX_STACK_VAR(tmp20,"tmp20");
		HX_STACK_LINE(644)
		Float tmp21 = ::lime::math::_Matrix4::Matrix4_Impl__obj::get(tmp20,(int)10);		HX_STACK_VAR(tmp21,"tmp21");
		HX_STACK_LINE(644)
		Float m133 = tmp21;		HX_STACK_VAR(m133,"m133");
		HX_STACK_LINE(644)
		::lime::utils::ArrayBufferView tmp22 = rhs;		HX_STACK_VAR(tmp22,"tmp22");
		HX_STACK_LINE(644)
		Float tmp23 = ::lime::math::_Matrix4::Matrix4_Impl__obj::get(tmp22,(int)14);		HX_STACK_VAR(tmp23,"tmp23");
		HX_STACK_LINE(644)
		Float m143 = tmp23;		HX_STACK_VAR(m143,"m143");
		HX_STACK_LINE(645)
		::lime::utils::ArrayBufferView tmp24 = rhs;		HX_STACK_VAR(tmp24,"tmp24");
		HX_STACK_LINE(645)
		Float tmp25 = ::lime::math::_Matrix4::Matrix4_Impl__obj::get(tmp24,(int)3);		HX_STACK_VAR(tmp25,"tmp25");
		HX_STACK_LINE(645)
		Float m114 = tmp25;		HX_STACK_VAR(m114,"m114");
		HX_STACK_LINE(645)
		::lime::utils::ArrayBufferView tmp26 = rhs;		HX_STACK_VAR(tmp26,"tmp26");
		HX_STACK_LINE(645)
		Float tmp27 = ::lime::math::_Matrix4::Matrix4_Impl__obj::get(tmp26,(int)7);		HX_STACK_VAR(tmp27,"tmp27");
		HX_STACK_LINE(645)
		Float m124 = tmp27;		HX_STACK_VAR(m124,"m124");
		HX_STACK_LINE(645)
		::lime::utils::ArrayBufferView tmp28 = rhs;		HX_STACK_VAR(tmp28,"tmp28");
		HX_STACK_LINE(645)
		Float tmp29 = ::lime::math::_Matrix4::Matrix4_Impl__obj::get(tmp28,(int)11);		HX_STACK_VAR(tmp29,"tmp29");
		HX_STACK_LINE(645)
		Float m134 = tmp29;		HX_STACK_VAR(m134,"m134");
		HX_STACK_LINE(645)
		::lime::utils::ArrayBufferView tmp30 = rhs;		HX_STACK_VAR(tmp30,"tmp30");
		HX_STACK_LINE(645)
		Float tmp31 = ::lime::math::_Matrix4::Matrix4_Impl__obj::get(tmp30,(int)15);		HX_STACK_VAR(tmp31,"tmp31");
		HX_STACK_LINE(645)
		Float m144 = tmp31;		HX_STACK_VAR(m144,"m144");
		HX_STACK_LINE(646)
		Float tmp32 = ::__hxcpp_memory_get_float(this1->buffer->b,this1->byteOffset);		HX_STACK_VAR(tmp32,"tmp32");
		HX_STACK_LINE(646)
		Float m211 = tmp32;		HX_STACK_VAR(m211,"m211");
		HX_STACK_LINE(646)
		Float tmp33 = ::__hxcpp_memory_get_float(this1->buffer->b,(this1->byteOffset + (int)16));		HX_STACK_VAR(tmp33,"tmp33");
		HX_STACK_LINE(646)
		Float m221 = tmp33;		HX_STACK_VAR(m221,"m221");
		HX_STACK_LINE(646)
		Float tmp34 = ::__hxcpp_memory_get_float(this1->buffer->b,(this1->byteOffset + (int)32));		HX_STACK_VAR(tmp34,"tmp34");
		HX_STACK_LINE(646)
		Float m231 = tmp34;		HX_STACK_VAR(m231,"m231");
		HX_STACK_LINE(646)
		Float tmp35 = ::__hxcpp_memory_get_float(this1->buffer->b,(this1->byteOffset + (int)48));		HX_STACK_VAR(tmp35,"tmp35");
		HX_STACK_LINE(646)
		Float m241 = tmp35;		HX_STACK_VAR(m241,"m241");
		HX_STACK_LINE(647)
		Float tmp36 = ::__hxcpp_memory_get_float(this1->buffer->b,(this1->byteOffset + (int)4));		HX_STACK_VAR(tmp36,"tmp36");
		HX_STACK_LINE(647)
		Float m212 = tmp36;		HX_STACK_VAR(m212,"m212");
		HX_STACK_LINE(647)
		Float tmp37 = ::__hxcpp_memory_get_float(this1->buffer->b,(this1->byteOffset + (int)20));		HX_STACK_VAR(tmp37,"tmp37");
		HX_STACK_LINE(647)
		Float m222 = tmp37;		HX_STACK_VAR(m222,"m222");
		HX_STACK_LINE(647)
		Float tmp38 = ::__hxcpp_memory_get_float(this1->buffer->b,(this1->byteOffset + (int)36));		HX_STACK_VAR(tmp38,"tmp38");
		HX_STACK_LINE(647)
		Float m232 = tmp38;		HX_STACK_VAR(m232,"m232");
		HX_STACK_LINE(647)
		Float tmp39 = ::__hxcpp_memory_get_float(this1->buffer->b,(this1->byteOffset + (int)52));		HX_STACK_VAR(tmp39,"tmp39");
		HX_STACK_LINE(647)
		Float m242 = tmp39;		HX_STACK_VAR(m242,"m242");
		HX_STACK_LINE(648)
		Float tmp40 = ::__hxcpp_memory_get_float(this1->buffer->b,(this1->byteOffset + (int)8));		HX_STACK_VAR(tmp40,"tmp40");
		HX_STACK_LINE(648)
		Float m213 = tmp40;		HX_STACK_VAR(m213,"m213");
		HX_STACK_LINE(648)
		Float tmp41 = ::__hxcpp_memory_get_float(this1->buffer->b,(this1->byteOffset + (int)24));		HX_STACK_VAR(tmp41,"tmp41");
		HX_STACK_LINE(648)
		Float m223 = tmp41;		HX_STACK_VAR(m223,"m223");
		HX_STACK_LINE(648)
		Float tmp42 = ::__hxcpp_memory_get_float(this1->buffer->b,(this1->byteOffset + (int)40));		HX_STACK_VAR(tmp42,"tmp42");
		HX_STACK_LINE(648)
		Float m233 = tmp42;		HX_STACK_VAR(m233,"m233");
		HX_STACK_LINE(648)
		Float tmp43 = ::__hxcpp_memory_get_float(this1->buffer->b,(this1->byteOffset + (int)56));		HX_STACK_VAR(tmp43,"tmp43");
		HX_STACK_LINE(648)
		Float m243 = tmp43;		HX_STACK_VAR(m243,"m243");
		HX_STACK_LINE(649)
		Float tmp44 = ::__hxcpp_memory_get_float(this1->buffer->b,(this1->byteOffset + (int)12));		HX_STACK_VAR(tmp44,"tmp44");
		HX_STACK_LINE(649)
		Float m214 = tmp44;		HX_STACK_VAR(m214,"m214");
		HX_STACK_LINE(649)
		Float tmp45 = ::__hxcpp_memory_get_float(this1->buffer->b,(this1->byteOffset + (int)28));		HX_STACK_VAR(tmp45,"tmp45");
		HX_STACK_LINE(649)
		Float m224 = tmp45;		HX_STACK_VAR(m224,"m224");
		HX_STACK_LINE(649)
		Float tmp46 = ::__hxcpp_memory_get_float(this1->buffer->b,(this1->byteOffset + (int)44));		HX_STACK_VAR(tmp46,"tmp46");
		HX_STACK_LINE(649)
		Float m234 = tmp46;		HX_STACK_VAR(m234,"m234");
		HX_STACK_LINE(649)
		Float tmp47 = ::__hxcpp_memory_get_float(this1->buffer->b,(this1->byteOffset + (int)60));		HX_STACK_VAR(tmp47,"tmp47");
		HX_STACK_LINE(649)
		Float m244 = tmp47;		HX_STACK_VAR(m244,"m244");
		HX_STACK_LINE(651)
		{
			HX_STACK_LINE(651)
			Float tmp48 = (m111 * m211);		HX_STACK_VAR(tmp48,"tmp48");
			HX_STACK_LINE(651)
			Float tmp49 = (m112 * m221);		HX_STACK_VAR(tmp49,"tmp49");
			HX_STACK_LINE(651)
			Float tmp50 = (tmp48 + tmp49);		HX_STACK_VAR(tmp50,"tmp50");
			HX_STACK_LINE(651)
			Float tmp51 = (m113 * m231);		HX_STACK_VAR(tmp51,"tmp51");
			HX_STACK_LINE(651)
			Float tmp52 = (tmp50 + tmp51);		HX_STACK_VAR(tmp52,"tmp52");
			HX_STACK_LINE(651)
			Float tmp53 = (m114 * m241);		HX_STACK_VAR(tmp53,"tmp53");
			HX_STACK_LINE(651)
			Float tmp54 = (tmp52 + tmp53);		HX_STACK_VAR(tmp54,"tmp54");
			HX_STACK_LINE(651)
			Float val = tmp54;		HX_STACK_VAR(val,"val");
			HX_STACK_LINE(651)
			::__hxcpp_memory_set_float(this1->buffer->b,this1->byteOffset,val);
			HX_STACK_LINE(651)
			val;
		}
		HX_STACK_LINE(652)
		{
			HX_STACK_LINE(652)
			Float tmp48 = (m111 * m212);		HX_STACK_VAR(tmp48,"tmp48");
			HX_STACK_LINE(652)
			Float tmp49 = (m112 * m222);		HX_STACK_VAR(tmp49,"tmp49");
			HX_STACK_LINE(652)
			Float tmp50 = (tmp48 + tmp49);		HX_STACK_VAR(tmp50,"tmp50");
			HX_STACK_LINE(652)
			Float tmp51 = (m113 * m232);		HX_STACK_VAR(tmp51,"tmp51");
			HX_STACK_LINE(652)
			Float tmp52 = (tmp50 + tmp51);		HX_STACK_VAR(tmp52,"tmp52");
			HX_STACK_LINE(652)
			Float tmp53 = (m114 * m242);		HX_STACK_VAR(tmp53,"tmp53");
			HX_STACK_LINE(652)
			Float tmp54 = (tmp52 + tmp53);		HX_STACK_VAR(tmp54,"tmp54");
			HX_STACK_LINE(652)
			Float val = tmp54;		HX_STACK_VAR(val,"val");
			HX_STACK_LINE(652)
			::__hxcpp_memory_set_float(this1->buffer->b,(this1->byteOffset + (int)4),val);
			HX_STACK_LINE(652)
			val;
		}
		HX_STACK_LINE(653)
		{
			HX_STACK_LINE(653)
			Float tmp48 = (m111 * m213);		HX_STACK_VAR(tmp48,"tmp48");
			HX_STACK_LINE(653)
			Float tmp49 = (m112 * m223);		HX_STACK_VAR(tmp49,"tmp49");
			HX_STACK_LINE(653)
			Float tmp50 = (tmp48 + tmp49);		HX_STACK_VAR(tmp50,"tmp50");
			HX_STACK_LINE(653)
			Float tmp51 = (m113 * m233);		HX_STACK_VAR(tmp51,"tmp51");
			HX_STACK_LINE(653)
			Float tmp52 = (tmp50 + tmp51);		HX_STACK_VAR(tmp52,"tmp52");
			HX_STACK_LINE(653)
			Float tmp53 = (m114 * m243);		HX_STACK_VAR(tmp53,"tmp53");
			HX_STACK_LINE(653)
			Float tmp54 = (tmp52 + tmp53);		HX_STACK_VAR(tmp54,"tmp54");
			HX_STACK_LINE(653)
			Float val = tmp54;		HX_STACK_VAR(val,"val");
			HX_STACK_LINE(653)
			::__hxcpp_memory_set_float(this1->buffer->b,(this1->byteOffset + (int)8),val);
			HX_STACK_LINE(653)
			val;
		}
		HX_STACK_LINE(654)
		{
			HX_STACK_LINE(654)
			Float tmp48 = (m111 * m214);		HX_STACK_VAR(tmp48,"tmp48");
			HX_STACK_LINE(654)
			Float tmp49 = (m112 * m224);		HX_STACK_VAR(tmp49,"tmp49");
			HX_STACK_LINE(654)
			Float tmp50 = (tmp48 + tmp49);		HX_STACK_VAR(tmp50,"tmp50");
			HX_STACK_LINE(654)
			Float tmp51 = (m113 * m234);		HX_STACK_VAR(tmp51,"tmp51");
			HX_STACK_LINE(654)
			Float tmp52 = (tmp50 + tmp51);		HX_STACK_VAR(tmp52,"tmp52");
			HX_STACK_LINE(654)
			Float tmp53 = (m114 * m244);		HX_STACK_VAR(tmp53,"tmp53");
			HX_STACK_LINE(654)
			Float tmp54 = (tmp52 + tmp53);		HX_STACK_VAR(tmp54,"tmp54");
			HX_STACK_LINE(654)
			Float val = tmp54;		HX_STACK_VAR(val,"val");
			HX_STACK_LINE(654)
			::__hxcpp_memory_set_float(this1->buffer->b,(this1->byteOffset + (int)12),val);
			HX_STACK_LINE(654)
			val;
		}
		HX_STACK_LINE(656)
		{
			HX_STACK_LINE(656)
			Float tmp48 = (m121 * m211);		HX_STACK_VAR(tmp48,"tmp48");
			HX_STACK_LINE(656)
			Float tmp49 = (m122 * m221);		HX_STACK_VAR(tmp49,"tmp49");
			HX_STACK_LINE(656)
			Float tmp50 = (tmp48 + tmp49);		HX_STACK_VAR(tmp50,"tmp50");
			HX_STACK_LINE(656)
			Float tmp51 = (m123 * m231);		HX_STACK_VAR(tmp51,"tmp51");
			HX_STACK_LINE(656)
			Float tmp52 = (tmp50 + tmp51);		HX_STACK_VAR(tmp52,"tmp52");
			HX_STACK_LINE(656)
			Float tmp53 = (m124 * m241);		HX_STACK_VAR(tmp53,"tmp53");
			HX_STACK_LINE(656)
			Float tmp54 = (tmp52 + tmp53);		HX_STACK_VAR(tmp54,"tmp54");
			HX_STACK_LINE(656)
			Float val = tmp54;		HX_STACK_VAR(val,"val");
			HX_STACK_LINE(656)
			::__hxcpp_memory_set_float(this1->buffer->b,(this1->byteOffset + (int)16),val);
			HX_STACK_LINE(656)
			val;
		}
		HX_STACK_LINE(657)
		{
			HX_STACK_LINE(657)
			Float tmp48 = (m121 * m212);		HX_STACK_VAR(tmp48,"tmp48");
			HX_STACK_LINE(657)
			Float tmp49 = (m122 * m222);		HX_STACK_VAR(tmp49,"tmp49");
			HX_STACK_LINE(657)
			Float tmp50 = (tmp48 + tmp49);		HX_STACK_VAR(tmp50,"tmp50");
			HX_STACK_LINE(657)
			Float tmp51 = (m123 * m232);		HX_STACK_VAR(tmp51,"tmp51");
			HX_STACK_LINE(657)
			Float tmp52 = (tmp50 + tmp51);		HX_STACK_VAR(tmp52,"tmp52");
			HX_STACK_LINE(657)
			Float tmp53 = (m124 * m242);		HX_STACK_VAR(tmp53,"tmp53");
			HX_STACK_LINE(657)
			Float tmp54 = (tmp52 + tmp53);		HX_STACK_VAR(tmp54,"tmp54");
			HX_STACK_LINE(657)
			Float val = tmp54;		HX_STACK_VAR(val,"val");
			HX_STACK_LINE(657)
			::__hxcpp_memory_set_float(this1->buffer->b,(this1->byteOffset + (int)20),val);
			HX_STACK_LINE(657)
			val;
		}
		HX_STACK_LINE(658)
		{
			HX_STACK_LINE(658)
			Float tmp48 = (m121 * m213);		HX_STACK_VAR(tmp48,"tmp48");
			HX_STACK_LINE(658)
			Float tmp49 = (m122 * m223);		HX_STACK_VAR(tmp49,"tmp49");
			HX_STACK_LINE(658)
			Float tmp50 = (tmp48 + tmp49);		HX_STACK_VAR(tmp50,"tmp50");
			HX_STACK_LINE(658)
			Float tmp51 = (m123 * m233);		HX_STACK_VAR(tmp51,"tmp51");
			HX_STACK_LINE(658)
			Float tmp52 = (tmp50 + tmp51);		HX_STACK_VAR(tmp52,"tmp52");
			HX_STACK_LINE(658)
			Float tmp53 = (m124 * m243);		HX_STACK_VAR(tmp53,"tmp53");
			HX_STACK_LINE(658)
			Float tmp54 = (tmp52 + tmp53);		HX_STACK_VAR(tmp54,"tmp54");
			HX_STACK_LINE(658)
			Float val = tmp54;		HX_STACK_VAR(val,"val");
			HX_STACK_LINE(658)
			::__hxcpp_memory_set_float(this1->buffer->b,(this1->byteOffset + (int)24),val);
			HX_STACK_LINE(658)
			val;
		}
		HX_STACK_LINE(659)
		{
			HX_STACK_LINE(659)
			Float tmp48 = (m121 * m214);		HX_STACK_VAR(tmp48,"tmp48");
			HX_STACK_LINE(659)
			Float tmp49 = (m122 * m224);		HX_STACK_VAR(tmp49,"tmp49");
			HX_STACK_LINE(659)
			Float tmp50 = (tmp48 + tmp49);		HX_STACK_VAR(tmp50,"tmp50");
			HX_STACK_LINE(659)
			Float tmp51 = (m123 * m234);		HX_STACK_VAR(tmp51,"tmp51");
			HX_STACK_LINE(659)
			Float tmp52 = (tmp50 + tmp51);		HX_STACK_VAR(tmp52,"tmp52");
			HX_STACK_LINE(659)
			Float tmp53 = (m124 * m244);		HX_STACK_VAR(tmp53,"tmp53");
			HX_STACK_LINE(659)
			Float tmp54 = (tmp52 + tmp53);		HX_STACK_VAR(tmp54,"tmp54");
			HX_STACK_LINE(659)
			Float val = tmp54;		HX_STACK_VAR(val,"val");
			HX_STACK_LINE(659)
			::__hxcpp_memory_set_float(this1->buffer->b,(this1->byteOffset + (int)28),val);
			HX_STACK_LINE(659)
			val;
		}
		HX_STACK_LINE(661)
		{
			HX_STACK_LINE(661)
			Float tmp48 = (m131 * m211);		HX_STACK_VAR(tmp48,"tmp48");
			HX_STACK_LINE(661)
			Float tmp49 = (m132 * m221);		HX_STACK_VAR(tmp49,"tmp49");
			HX_STACK_LINE(661)
			Float tmp50 = (tmp48 + tmp49);		HX_STACK_VAR(tmp50,"tmp50");
			HX_STACK_LINE(661)
			Float tmp51 = (m133 * m231);		HX_STACK_VAR(tmp51,"tmp51");
			HX_STACK_LINE(661)
			Float tmp52 = (tmp50 + tmp51);		HX_STACK_VAR(tmp52,"tmp52");
			HX_STACK_LINE(661)
			Float tmp53 = (m134 * m241);		HX_STACK_VAR(tmp53,"tmp53");
			HX_STACK_LINE(661)
			Float tmp54 = (tmp52 + tmp53);		HX_STACK_VAR(tmp54,"tmp54");
			HX_STACK_LINE(661)
			Float val = tmp54;		HX_STACK_VAR(val,"val");
			HX_STACK_LINE(661)
			::__hxcpp_memory_set_float(this1->buffer->b,(this1->byteOffset + (int)32),val);
			HX_STACK_LINE(661)
			val;
		}
		HX_STACK_LINE(662)
		{
			HX_STACK_LINE(662)
			Float tmp48 = (m131 * m212);		HX_STACK_VAR(tmp48,"tmp48");
			HX_STACK_LINE(662)
			Float tmp49 = (m132 * m222);		HX_STACK_VAR(tmp49,"tmp49");
			HX_STACK_LINE(662)
			Float tmp50 = (tmp48 + tmp49);		HX_STACK_VAR(tmp50,"tmp50");
			HX_STACK_LINE(662)
			Float tmp51 = (m133 * m232);		HX_STACK_VAR(tmp51,"tmp51");
			HX_STACK_LINE(662)
			Float tmp52 = (tmp50 + tmp51);		HX_STACK_VAR(tmp52,"tmp52");
			HX_STACK_LINE(662)
			Float tmp53 = (m134 * m242);		HX_STACK_VAR(tmp53,"tmp53");
			HX_STACK_LINE(662)
			Float tmp54 = (tmp52 + tmp53);		HX_STACK_VAR(tmp54,"tmp54");
			HX_STACK_LINE(662)
			Float val = tmp54;		HX_STACK_VAR(val,"val");
			HX_STACK_LINE(662)
			::__hxcpp_memory_set_float(this1->buffer->b,(this1->byteOffset + (int)36),val);
			HX_STACK_LINE(662)
			val;
		}
		HX_STACK_LINE(663)
		{
			HX_STACK_LINE(663)
			Float tmp48 = (m131 * m213);		HX_STACK_VAR(tmp48,"tmp48");
			HX_STACK_LINE(663)
			Float tmp49 = (m132 * m223);		HX_STACK_VAR(tmp49,"tmp49");
			HX_STACK_LINE(663)
			Float tmp50 = (tmp48 + tmp49);		HX_STACK_VAR(tmp50,"tmp50");
			HX_STACK_LINE(663)
			Float tmp51 = (m133 * m233);		HX_STACK_VAR(tmp51,"tmp51");
			HX_STACK_LINE(663)
			Float tmp52 = (tmp50 + tmp51);		HX_STACK_VAR(tmp52,"tmp52");
			HX_STACK_LINE(663)
			Float tmp53 = (m134 * m243);		HX_STACK_VAR(tmp53,"tmp53");
			HX_STACK_LINE(663)
			Float tmp54 = (tmp52 + tmp53);		HX_STACK_VAR(tmp54,"tmp54");
			HX_STACK_LINE(663)
			Float val = tmp54;		HX_STACK_VAR(val,"val");
			HX_STACK_LINE(663)
			::__hxcpp_memory_set_float(this1->buffer->b,(this1->byteOffset + (int)40),val);
			HX_STACK_LINE(663)
			val;
		}
		HX_STACK_LINE(664)
		{
			HX_STACK_LINE(664)
			Float tmp48 = (m131 * m214);		HX_STACK_VAR(tmp48,"tmp48");
			HX_STACK_LINE(664)
			Float tmp49 = (m132 * m224);		HX_STACK_VAR(tmp49,"tmp49");
			HX_STACK_LINE(664)
			Float tmp50 = (tmp48 + tmp49);		HX_STACK_VAR(tmp50,"tmp50");
			HX_STACK_LINE(664)
			Float tmp51 = (m133 * m234);		HX_STACK_VAR(tmp51,"tmp51");
			HX_STACK_LINE(664)
			Float tmp52 = (tmp50 + tmp51);		HX_STACK_VAR(tmp52,"tmp52");
			HX_STACK_LINE(664)
			Float tmp53 = (m134 * m244);		HX_STACK_VAR(tmp53,"tmp53");
			HX_STACK_LINE(664)
			Float tmp54 = (tmp52 + tmp53);		HX_STACK_VAR(tmp54,"tmp54");
			HX_STACK_LINE(664)
			Float val = tmp54;		HX_STACK_VAR(val,"val");
			HX_STACK_LINE(664)
			::__hxcpp_memory_set_float(this1->buffer->b,(this1->byteOffset + (int)44),val);
			HX_STACK_LINE(664)
			val;
		}
		HX_STACK_LINE(666)
		{
			HX_STACK_LINE(666)
			Float tmp48 = (m141 * m211);		HX_STACK_VAR(tmp48,"tmp48");
			HX_STACK_LINE(666)
			Float tmp49 = (m142 * m221);		HX_STACK_VAR(tmp49,"tmp49");
			HX_STACK_LINE(666)
			Float tmp50 = (tmp48 + tmp49);		HX_STACK_VAR(tmp50,"tmp50");
			HX_STACK_LINE(666)
			Float tmp51 = (m143 * m231);		HX_STACK_VAR(tmp51,"tmp51");
			HX_STACK_LINE(666)
			Float tmp52 = (tmp50 + tmp51);		HX_STACK_VAR(tmp52,"tmp52");
			HX_STACK_LINE(666)
			Float tmp53 = (m144 * m241);		HX_STACK_VAR(tmp53,"tmp53");
			HX_STACK_LINE(666)
			Float tmp54 = (tmp52 + tmp53);		HX_STACK_VAR(tmp54,"tmp54");
			HX_STACK_LINE(666)
			Float val = tmp54;		HX_STACK_VAR(val,"val");
			HX_STACK_LINE(666)
			::__hxcpp_memory_set_float(this1->buffer->b,(this1->byteOffset + (int)48),val);
			HX_STACK_LINE(666)
			val;
		}
		HX_STACK_LINE(667)
		{
			HX_STACK_LINE(667)
			Float tmp48 = (m141 * m212);		HX_STACK_VAR(tmp48,"tmp48");
			HX_STACK_LINE(667)
			Float tmp49 = (m142 * m222);		HX_STACK_VAR(tmp49,"tmp49");
			HX_STACK_LINE(667)
			Float tmp50 = (tmp48 + tmp49);		HX_STACK_VAR(tmp50,"tmp50");
			HX_STACK_LINE(667)
			Float tmp51 = (m143 * m232);		HX_STACK_VAR(tmp51,"tmp51");
			HX_STACK_LINE(667)
			Float tmp52 = (tmp50 + tmp51);		HX_STACK_VAR(tmp52,"tmp52");
			HX_STACK_LINE(667)
			Float tmp53 = (m144 * m242);		HX_STACK_VAR(tmp53,"tmp53");
			HX_STACK_LINE(667)
			Float tmp54 = (tmp52 + tmp53);		HX_STACK_VAR(tmp54,"tmp54");
			HX_STACK_LINE(667)
			Float val = tmp54;		HX_STACK_VAR(val,"val");
			HX_STACK_LINE(667)
			::__hxcpp_memory_set_float(this1->buffer->b,(this1->byteOffset + (int)52),val);
			HX_STACK_LINE(667)
			val;
		}
		HX_STACK_LINE(668)
		{
			HX_STACK_LINE(668)
			Float tmp48 = (m141 * m213);		HX_STACK_VAR(tmp48,"tmp48");
			HX_STACK_LINE(668)
			Float tmp49 = (m142 * m223);		HX_STACK_VAR(tmp49,"tmp49");
			HX_STACK_LINE(668)
			Float tmp50 = (tmp48 + tmp49);		HX_STACK_VAR(tmp50,"tmp50");
			HX_STACK_LINE(668)
			Float tmp51 = (m143 * m233);		HX_STACK_VAR(tmp51,"tmp51");
			HX_STACK_LINE(668)
			Float tmp52 = (tmp50 + tmp51);		HX_STACK_VAR(tmp52,"tmp52");
			HX_STACK_LINE(668)
			Float tmp53 = (m144 * m243);		HX_STACK_VAR(tmp53,"tmp53");
			HX_STACK_LINE(668)
			Float tmp54 = (tmp52 + tmp53);		HX_STACK_VAR(tmp54,"tmp54");
			HX_STACK_LINE(668)
			Float val = tmp54;		HX_STACK_VAR(val,"val");
			HX_STACK_LINE(668)
			::__hxcpp_memory_set_float(this1->buffer->b,(this1->byteOffset + (int)56),val);
			HX_STACK_LINE(668)
			val;
		}
		HX_STACK_LINE(669)
		{
			HX_STACK_LINE(669)
			Float tmp48 = (m141 * m214);		HX_STACK_VAR(tmp48,"tmp48");
			HX_STACK_LINE(669)
			Float tmp49 = (m142 * m224);		HX_STACK_VAR(tmp49,"tmp49");
			HX_STACK_LINE(669)
			Float tmp50 = (tmp48 + tmp49);		HX_STACK_VAR(tmp50,"tmp50");
			HX_STACK_LINE(669)
			Float tmp51 = (m143 * m234);		HX_STACK_VAR(tmp51,"tmp51");
			HX_STACK_LINE(669)
			Float tmp52 = (tmp50 + tmp51);		HX_STACK_VAR(tmp52,"tmp52");
			HX_STACK_LINE(669)
			Float tmp53 = (m144 * m244);		HX_STACK_VAR(tmp53,"tmp53");
			HX_STACK_LINE(669)
			Float tmp54 = (tmp52 + tmp53);		HX_STACK_VAR(tmp54,"tmp54");
			HX_STACK_LINE(669)
			Float val = tmp54;		HX_STACK_VAR(val,"val");
			HX_STACK_LINE(669)
			::__hxcpp_memory_set_float(this1->buffer->b,(this1->byteOffset + (int)60),val);
			HX_STACK_LINE(669)
			val;
		}
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(Matrix4_Impl__obj,prepend,(void))

Void Matrix4_Impl__obj::prependRotation( ::lime::utils::ArrayBufferView this1,Float degrees,::lime::math::Vector4 axis,::lime::math::Vector4 pivotPoint){
{
		HX_STACK_FRAME("lime.math._Matrix4.Matrix4_Impl_","prependRotation",0x52475ce4,"lime.math._Matrix4.Matrix4_Impl_.prependRotation","lime/math/Matrix4.hx",674,0xeb65dbd8)
		HX_STACK_ARG(this1,"this1")
		HX_STACK_ARG(degrees,"degrees")
		HX_STACK_ARG(axis,"axis")
		HX_STACK_ARG(pivotPoint,"pivotPoint")
		HX_STACK_LINE(676)
		::lime::utils::ArrayBufferView tmp = this1;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(676)
		Float tmp1 = axis->x;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(676)
		Float tmp2 = axis->y;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(676)
		Float tmp3 = axis->z;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(676)
		Float tmp4 = degrees;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(676)
		::lime::utils::ArrayBufferView tmp5 = ::lime::math::_Matrix4::Matrix4_Impl__obj::__getAxisRotation(tmp,tmp1,tmp2,tmp3,tmp4);		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(676)
		::lime::utils::ArrayBufferView m = tmp5;		HX_STACK_VAR(m,"m");
		HX_STACK_LINE(678)
		bool tmp6 = (pivotPoint != null());		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(678)
		if ((tmp6)){
			HX_STACK_LINE(680)
			::lime::math::Vector4 p = pivotPoint;		HX_STACK_VAR(p,"p");
			HX_STACK_LINE(681)
			::lime::utils::ArrayBufferView tmp7 = m;		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(681)
			Float tmp8 = p->x;		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(681)
			Float tmp9 = p->y;		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(681)
			Float tmp10 = p->z;		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(681)
			::lime::math::_Matrix4::Matrix4_Impl__obj::appendTranslation(tmp7,tmp8,tmp9,tmp10);
		}
		HX_STACK_LINE(685)
		::lime::utils::ArrayBufferView tmp7 = this1;		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(685)
		::lime::utils::ArrayBufferView tmp8 = m;		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(685)
		::lime::math::_Matrix4::Matrix4_Impl__obj::prepend(tmp7,tmp8);
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC4(Matrix4_Impl__obj,prependRotation,(void))

Void Matrix4_Impl__obj::prependScale( ::lime::utils::ArrayBufferView this1,Float xScale,Float yScale,Float zScale){
{
		HX_STACK_FRAME("lime.math._Matrix4.Matrix4_Impl_","prependScale",0x9a060b24,"lime.math._Matrix4.Matrix4_Impl_.prependScale","lime/math/Matrix4.hx",690,0xeb65dbd8)
		HX_STACK_ARG(this1,"this1")
		HX_STACK_ARG(xScale,"xScale")
		HX_STACK_ARG(yScale,"yScale")
		HX_STACK_ARG(zScale,"zScale")
		HX_STACK_LINE(692)
		::lime::utils::ArrayBufferView tmp = this1;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(692)
		::lime::utils::ArrayBufferView tmp1;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(692)
		{
			HX_STACK_LINE(692)
			cpp::ArrayBase array = Array_obj< Float >::__new().Add(xScale).Add(((Float)0.0)).Add(((Float)0.0)).Add(((Float)0.0)).Add(((Float)0.0)).Add(yScale).Add(((Float)0.0)).Add(((Float)0.0)).Add(((Float)0.0)).Add(((Float)0.0)).Add(zScale).Add(((Float)0.0)).Add(((Float)0.0)).Add(((Float)0.0)).Add(((Float)0.0)).Add(((Float)1.0));		HX_STACK_VAR(array,"array");
			HX_STACK_LINE(692)
			::lime::utils::ArrayBufferView this2;		HX_STACK_VAR(this2,"this2");
			HX_STACK_LINE(692)
			bool tmp2 = false;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(692)
			if ((tmp2)){
				HX_STACK_LINE(692)
				::lime::utils::ArrayBufferView tmp3 = ::lime::utils::ArrayBufferView_obj::__new(null(),(int)8);		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(692)
				this2 = tmp3;
			}
			else{
				HX_STACK_LINE(692)
				bool tmp3 = (array != null());		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(692)
				if ((tmp3)){
					HX_STACK_LINE(692)
					::lime::utils::ArrayBufferView tmp4;		HX_STACK_VAR(tmp4,"tmp4");
					HX_STACK_LINE(692)
					{
						HX_STACK_LINE(692)
						::lime::utils::ArrayBufferView tmp5 = ::lime::utils::ArrayBufferView_obj::__new((int)0,(int)8);		HX_STACK_VAR(tmp5,"tmp5");
						HX_STACK_LINE(692)
						::lime::utils::ArrayBufferView _this = tmp5;		HX_STACK_VAR(_this,"_this");
						HX_STACK_LINE(692)
						_this->byteOffset = (int)0;
						HX_STACK_LINE(692)
						_this->length = array->__Field(HX_HCSTRING("length","\xe6","\x94","\x07","\x9f"), hx::paccDynamic );
						HX_STACK_LINE(692)
						int tmp6 = (_this->length * _this->bytesPerElement);		HX_STACK_VAR(tmp6,"tmp6");
						HX_STACK_LINE(692)
						_this->byteLength = tmp6;
						HX_STACK_LINE(692)
						::haxe::io::Bytes tmp7;		HX_STACK_VAR(tmp7,"tmp7");
						HX_STACK_LINE(692)
						{
							HX_STACK_LINE(692)
							::haxe::io::Bytes this3;		HX_STACK_VAR(this3,"this3");
							HX_STACK_LINE(692)
							int tmp8 = _this->byteLength;		HX_STACK_VAR(tmp8,"tmp8");
							HX_STACK_LINE(692)
							::haxe::io::Bytes tmp9 = ::haxe::io::Bytes_obj::alloc(tmp8);		HX_STACK_VAR(tmp9,"tmp9");
							HX_STACK_LINE(692)
							this3 = tmp9;
							HX_STACK_LINE(692)
							tmp7 = this3;
						}
						HX_STACK_LINE(692)
						_this->buffer = tmp7;
						HX_STACK_LINE(692)
						_this->copyFromArray(((Array< Float >)(array)),null());
						HX_STACK_LINE(692)
						tmp4 = _this;
					}
					HX_STACK_LINE(692)
					this2 = tmp4;
				}
				else{
					HX_STACK_LINE(692)
					bool tmp4 = false;		HX_STACK_VAR(tmp4,"tmp4");
					HX_STACK_LINE(692)
					if ((tmp4)){
						HX_STACK_LINE(692)
						::lime::utils::ArrayBufferView tmp5;		HX_STACK_VAR(tmp5,"tmp5");
						HX_STACK_LINE(692)
						{
							HX_STACK_LINE(692)
							::lime::utils::ArrayBufferView tmp6 = ::lime::utils::ArrayBufferView_obj::__new((int)0,(int)8);		HX_STACK_VAR(tmp6,"tmp6");
							HX_STACK_LINE(692)
							::lime::utils::ArrayBufferView _this = tmp6;		HX_STACK_VAR(_this,"_this");
							HX_STACK_LINE(692)
							cpp::ArrayBase array1 = hx::Throw(HX_CSTRING("Invalid field access on null object"));		HX_STACK_VAR(array1,"array1");
							HX_STACK_LINE(692)
							_this->byteOffset = (int)0;
							HX_STACK_LINE(692)
							_this->length = array1->__Field(HX_HCSTRING("length","\xe6","\x94","\x07","\x9f"), hx::paccDynamic );
							HX_STACK_LINE(692)
							int tmp7 = (_this->length * _this->bytesPerElement);		HX_STACK_VAR(tmp7,"tmp7");
							HX_STACK_LINE(692)
							_this->byteLength = tmp7;
							HX_STACK_LINE(692)
							::haxe::io::Bytes tmp8;		HX_STACK_VAR(tmp8,"tmp8");
							HX_STACK_LINE(692)
							{
								HX_STACK_LINE(692)
								::haxe::io::Bytes this3;		HX_STACK_VAR(this3,"this3");
								HX_STACK_LINE(692)
								int tmp9 = _this->byteLength;		HX_STACK_VAR(tmp9,"tmp9");
								HX_STACK_LINE(692)
								::haxe::io::Bytes tmp10 = ::haxe::io::Bytes_obj::alloc(tmp9);		HX_STACK_VAR(tmp10,"tmp10");
								HX_STACK_LINE(692)
								this3 = tmp10;
								HX_STACK_LINE(692)
								tmp8 = this3;
							}
							HX_STACK_LINE(692)
							_this->buffer = tmp8;
							HX_STACK_LINE(692)
							_this->copyFromArray(((Array< Float >)(array1)),null());
							HX_STACK_LINE(692)
							tmp5 = _this;
						}
						HX_STACK_LINE(692)
						this2 = tmp5;
					}
					else{
						HX_STACK_LINE(692)
						bool tmp5 = false;		HX_STACK_VAR(tmp5,"tmp5");
						HX_STACK_LINE(692)
						if ((tmp5)){
							HX_STACK_LINE(692)
							::lime::utils::ArrayBufferView tmp6;		HX_STACK_VAR(tmp6,"tmp6");
							HX_STACK_LINE(692)
							{
								HX_STACK_LINE(692)
								::lime::utils::ArrayBufferView tmp7 = ::lime::utils::ArrayBufferView_obj::__new((int)0,(int)8);		HX_STACK_VAR(tmp7,"tmp7");
								HX_STACK_LINE(692)
								::lime::utils::ArrayBufferView _this = tmp7;		HX_STACK_VAR(_this,"_this");
								HX_STACK_LINE(692)
								::haxe::io::Bytes tmp8 = hx::Throw(HX_CSTRING("Invalid field access on null object"));		HX_STACK_VAR(tmp8,"tmp8");
								HX_STACK_LINE(692)
								::haxe::io::Bytes srcData = tmp8;		HX_STACK_VAR(srcData,"srcData");
								HX_STACK_LINE(692)
								int tmp9 = hx::Throw(HX_CSTRING("Invalid field access on null object"));		HX_STACK_VAR(tmp9,"tmp9");
								HX_STACK_LINE(692)
								int srcLength = tmp9;		HX_STACK_VAR(srcLength,"srcLength");
								HX_STACK_LINE(692)
								int tmp10 = hx::Throw(HX_CSTRING("Invalid field access on null object"));		HX_STACK_VAR(tmp10,"tmp10");
								HX_STACK_LINE(692)
								int srcByteOffset = tmp10;		HX_STACK_VAR(srcByteOffset,"srcByteOffset");
								HX_STACK_LINE(692)
								int tmp11 = hx::Throw(HX_CSTRING("Invalid field access on null object"));		HX_STACK_VAR(tmp11,"tmp11");
								HX_STACK_LINE(692)
								int srcElementSize = tmp11;		HX_STACK_VAR(srcElementSize,"srcElementSize");
								HX_STACK_LINE(692)
								int elementSize = _this->bytesPerElement;		HX_STACK_VAR(elementSize,"elementSize");
								HX_STACK_LINE(692)
								int tmp12 = hx::Throw(HX_CSTRING("Invalid field access on null object"));		HX_STACK_VAR(tmp12,"tmp12");
								HX_STACK_LINE(692)
								int tmp13 = _this->type;		HX_STACK_VAR(tmp13,"tmp13");
								HX_STACK_LINE(692)
								bool tmp14 = (tmp12 == tmp13);		HX_STACK_VAR(tmp14,"tmp14");
								HX_STACK_LINE(692)
								if ((tmp14)){
									HX_STACK_LINE(692)
									int srcLength1 = srcData->length;		HX_STACK_VAR(srcLength1,"srcLength1");
									HX_STACK_LINE(692)
									int tmp15 = (srcLength1 - srcByteOffset);		HX_STACK_VAR(tmp15,"tmp15");
									HX_STACK_LINE(692)
									int cloneLength = tmp15;		HX_STACK_VAR(cloneLength,"cloneLength");
									HX_STACK_LINE(692)
									::haxe::io::Bytes tmp16;		HX_STACK_VAR(tmp16,"tmp16");
									HX_STACK_LINE(692)
									{
										HX_STACK_LINE(692)
										::haxe::io::Bytes this3;		HX_STACK_VAR(this3,"this3");
										HX_STACK_LINE(692)
										int tmp17 = cloneLength;		HX_STACK_VAR(tmp17,"tmp17");
										HX_STACK_LINE(692)
										::haxe::io::Bytes tmp18 = ::haxe::io::Bytes_obj::alloc(tmp17);		HX_STACK_VAR(tmp18,"tmp18");
										HX_STACK_LINE(692)
										this3 = tmp18;
										HX_STACK_LINE(692)
										tmp16 = this3;
									}
									HX_STACK_LINE(692)
									_this->buffer = tmp16;
									HX_STACK_LINE(692)
									::haxe::io::Bytes tmp17 = srcData;		HX_STACK_VAR(tmp17,"tmp17");
									HX_STACK_LINE(692)
									int tmp18 = srcByteOffset;		HX_STACK_VAR(tmp18,"tmp18");
									HX_STACK_LINE(692)
									int tmp19 = cloneLength;		HX_STACK_VAR(tmp19,"tmp19");
									HX_STACK_LINE(692)
									_this->buffer->blit((int)0,tmp17,tmp18,tmp19);
								}
								else{
									HX_STACK_LINE(692)
									HX_STACK_DO_THROW(HX_HCSTRING("unimplemented","\x09","\x2f","\x74","\xb4"));
								}
								HX_STACK_LINE(692)
								int tmp15 = (_this->bytesPerElement * srcLength);		HX_STACK_VAR(tmp15,"tmp15");
								HX_STACK_LINE(692)
								_this->byteLength = tmp15;
								HX_STACK_LINE(692)
								_this->byteOffset = (int)0;
								HX_STACK_LINE(692)
								_this->length = srcLength;
								HX_STACK_LINE(692)
								tmp6 = _this;
							}
							HX_STACK_LINE(692)
							this2 = tmp6;
						}
						else{
							HX_STACK_LINE(692)
							bool tmp6 = false;		HX_STACK_VAR(tmp6,"tmp6");
							HX_STACK_LINE(692)
							if ((tmp6)){
								HX_STACK_LINE(692)
								::lime::utils::ArrayBufferView tmp7;		HX_STACK_VAR(tmp7,"tmp7");
								HX_STACK_LINE(692)
								{
									HX_STACK_LINE(692)
									::lime::utils::ArrayBufferView tmp8 = ::lime::utils::ArrayBufferView_obj::__new((int)0,(int)8);		HX_STACK_VAR(tmp8,"tmp8");
									HX_STACK_LINE(692)
									::lime::utils::ArrayBufferView _this = tmp8;		HX_STACK_VAR(_this,"_this");
									HX_STACK_LINE(692)
									int in_byteOffset = (int)0;		HX_STACK_VAR(in_byteOffset,"in_byteOffset");
									HX_STACK_LINE(692)
									bool tmp9 = (in_byteOffset < (int)0);		HX_STACK_VAR(tmp9,"tmp9");
									HX_STACK_LINE(692)
									if ((tmp9)){
										HX_STACK_LINE(692)
										HX_STACK_DO_THROW(::lime::utils::TAError_obj::RangeError);
									}
									HX_STACK_LINE(692)
									int tmp10 = hx::Mod(in_byteOffset,_this->bytesPerElement);		HX_STACK_VAR(tmp10,"tmp10");
									HX_STACK_LINE(692)
									bool tmp11 = (tmp10 != (int)0);		HX_STACK_VAR(tmp11,"tmp11");
									HX_STACK_LINE(692)
									if ((tmp11)){
										HX_STACK_LINE(692)
										HX_STACK_DO_THROW(::lime::utils::TAError_obj::RangeError);
									}
									HX_STACK_LINE(692)
									int tmp12 = hx::Throw(HX_CSTRING("Invalid field access on null object"));		HX_STACK_VAR(tmp12,"tmp12");
									HX_STACK_LINE(692)
									int bufferByteLength = tmp12;		HX_STACK_VAR(bufferByteLength,"bufferByteLength");
									HX_STACK_LINE(692)
									int elementSize = _this->bytesPerElement;		HX_STACK_VAR(elementSize,"elementSize");
									HX_STACK_LINE(692)
									int newByteLength = bufferByteLength;		HX_STACK_VAR(newByteLength,"newByteLength");
									HX_STACK_LINE(692)
									bool tmp13 = true;		HX_STACK_VAR(tmp13,"tmp13");
									HX_STACK_LINE(692)
									if ((tmp13)){
										HX_STACK_LINE(692)
										int tmp14 = (bufferByteLength - in_byteOffset);		HX_STACK_VAR(tmp14,"tmp14");
										HX_STACK_LINE(692)
										newByteLength = tmp14;
										HX_STACK_LINE(692)
										int tmp15 = hx::Mod(bufferByteLength,_this->bytesPerElement);		HX_STACK_VAR(tmp15,"tmp15");
										HX_STACK_LINE(692)
										bool tmp16 = (tmp15 != (int)0);		HX_STACK_VAR(tmp16,"tmp16");
										HX_STACK_LINE(692)
										if ((tmp16)){
											HX_STACK_LINE(692)
											HX_STACK_DO_THROW(::lime::utils::TAError_obj::RangeError);
										}
										HX_STACK_LINE(692)
										bool tmp17 = (newByteLength < (int)0);		HX_STACK_VAR(tmp17,"tmp17");
										HX_STACK_LINE(692)
										if ((tmp17)){
											HX_STACK_LINE(692)
											HX_STACK_DO_THROW(::lime::utils::TAError_obj::RangeError);
										}
									}
									else{
										HX_STACK_LINE(692)
										int tmp14 = (null() * _this->bytesPerElement);		HX_STACK_VAR(tmp14,"tmp14");
										HX_STACK_LINE(692)
										newByteLength = tmp14;
										HX_STACK_LINE(692)
										int tmp15 = (in_byteOffset + newByteLength);		HX_STACK_VAR(tmp15,"tmp15");
										HX_STACK_LINE(692)
										int newRange = tmp15;		HX_STACK_VAR(newRange,"newRange");
										HX_STACK_LINE(692)
										bool tmp16 = (newRange > bufferByteLength);		HX_STACK_VAR(tmp16,"tmp16");
										HX_STACK_LINE(692)
										if ((tmp16)){
											HX_STACK_LINE(692)
											HX_STACK_DO_THROW(::lime::utils::TAError_obj::RangeError);
										}
									}
									HX_STACK_LINE(692)
									_this->buffer = null();
									HX_STACK_LINE(692)
									_this->byteOffset = in_byteOffset;
									HX_STACK_LINE(692)
									_this->byteLength = newByteLength;
									HX_STACK_LINE(692)
									Float tmp14 = (Float(newByteLength) / Float(_this->bytesPerElement));		HX_STACK_VAR(tmp14,"tmp14");
									HX_STACK_LINE(692)
									int tmp15 = ::Std_obj::_int(tmp14);		HX_STACK_VAR(tmp15,"tmp15");
									HX_STACK_LINE(692)
									_this->length = tmp15;
									HX_STACK_LINE(692)
									tmp7 = _this;
								}
								HX_STACK_LINE(692)
								this2 = tmp7;
							}
							else{
								HX_STACK_LINE(692)
								HX_STACK_DO_THROW(HX_HCSTRING("Invalid constructor arguments for Float32Array","\x8e","\xc1","\xf4","\xd4"));
							}
						}
					}
				}
			}
			HX_STACK_LINE(692)
			tmp1 = this2;
		}
		HX_STACK_LINE(692)
		::lime::utils::ArrayBufferView tmp2 = ::lime::math::_Matrix4::Matrix4_Impl__obj::_new(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(692)
		::lime::math::_Matrix4::Matrix4_Impl__obj::prepend(tmp,tmp2);
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC4(Matrix4_Impl__obj,prependScale,(void))

Void Matrix4_Impl__obj::prependTranslation( ::lime::utils::ArrayBufferView this1,Float x,Float y,Float z){
{
		HX_STACK_FRAME("lime.math._Matrix4.Matrix4_Impl_","prependTranslation",0xfad7dd0b,"lime.math._Matrix4.Matrix4_Impl_.prependTranslation","lime/math/Matrix4.hx",697,0xeb65dbd8)
		HX_STACK_ARG(this1,"this1")
		HX_STACK_ARG(x,"x")
		HX_STACK_ARG(y,"y")
		HX_STACK_ARG(z,"z")
		HX_STACK_LINE(699)
		::lime::utils::ArrayBufferView tmp = ::lime::math::_Matrix4::Matrix4_Impl__obj::_new(null());		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(699)
		::lime::utils::ArrayBufferView m = tmp;		HX_STACK_VAR(m,"m");
		HX_STACK_LINE(700)
		::lime::utils::ArrayBufferView tmp1 = m;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(700)
		::lime::math::Vector4 tmp2 = ::lime::math::Vector4_obj::__new(x,y,z,null());		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(700)
		::lime::math::_Matrix4::Matrix4_Impl__obj::set_position(tmp1,tmp2);
		HX_STACK_LINE(701)
		::lime::utils::ArrayBufferView tmp3 = this1;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(701)
		::lime::utils::ArrayBufferView tmp4 = m;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(701)
		::lime::math::_Matrix4::Matrix4_Impl__obj::prepend(tmp3,tmp4);
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC4(Matrix4_Impl__obj,prependTranslation,(void))

::lime::math::Vector4 Matrix4_Impl__obj::transformVector( ::lime::utils::ArrayBufferView this1,::lime::math::Vector4 v){
	HX_STACK_FRAME("lime.math._Matrix4.Matrix4_Impl_","transformVector",0x3cbf39c7,"lime.math._Matrix4.Matrix4_Impl_.transformVector","lime/math/Matrix4.hx",790,0xeb65dbd8)
	HX_STACK_ARG(this1,"this1")
	HX_STACK_ARG(v,"v")
	HX_STACK_LINE(792)
	Float x = v->x;		HX_STACK_VAR(x,"x");
	HX_STACK_LINE(792)
	Float y = v->y;		HX_STACK_VAR(y,"y");
	HX_STACK_LINE(792)
	Float z = v->z;		HX_STACK_VAR(z,"z");
	HX_STACK_LINE(795)
	Float tmp = x;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(795)
	Float tmp1 = ::__hxcpp_memory_get_float(this1->buffer->b,this1->byteOffset);		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(795)
	Float tmp2 = (tmp * tmp1);		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(795)
	Float tmp3 = y;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(795)
	Float tmp4 = ::__hxcpp_memory_get_float(this1->buffer->b,(this1->byteOffset + (int)16));		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(795)
	Float tmp5 = (tmp3 * tmp4);		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(795)
	Float tmp6 = (tmp2 + tmp5);		HX_STACK_VAR(tmp6,"tmp6");
	HX_STACK_LINE(795)
	Float tmp7 = z;		HX_STACK_VAR(tmp7,"tmp7");
	HX_STACK_LINE(795)
	Float tmp8 = ::__hxcpp_memory_get_float(this1->buffer->b,(this1->byteOffset + (int)32));		HX_STACK_VAR(tmp8,"tmp8");
	HX_STACK_LINE(795)
	Float tmp9 = (tmp7 * tmp8);		HX_STACK_VAR(tmp9,"tmp9");
	HX_STACK_LINE(795)
	Float tmp10 = (tmp6 + tmp9);		HX_STACK_VAR(tmp10,"tmp10");
	HX_STACK_LINE(795)
	Float tmp11 = ::__hxcpp_memory_get_float(this1->buffer->b,(this1->byteOffset + (int)48));		HX_STACK_VAR(tmp11,"tmp11");
	HX_STACK_LINE(795)
	Float tmp12 = (tmp10 + tmp11);		HX_STACK_VAR(tmp12,"tmp12");
	HX_STACK_LINE(796)
	Float tmp13 = x;		HX_STACK_VAR(tmp13,"tmp13");
	HX_STACK_LINE(796)
	Float tmp14 = ::__hxcpp_memory_get_float(this1->buffer->b,(this1->byteOffset + (int)4));		HX_STACK_VAR(tmp14,"tmp14");
	HX_STACK_LINE(796)
	Float tmp15 = (tmp13 * tmp14);		HX_STACK_VAR(tmp15,"tmp15");
	HX_STACK_LINE(796)
	Float tmp16 = y;		HX_STACK_VAR(tmp16,"tmp16");
	HX_STACK_LINE(796)
	Float tmp17 = ::__hxcpp_memory_get_float(this1->buffer->b,(this1->byteOffset + (int)20));		HX_STACK_VAR(tmp17,"tmp17");
	HX_STACK_LINE(796)
	Float tmp18 = (tmp16 * tmp17);		HX_STACK_VAR(tmp18,"tmp18");
	HX_STACK_LINE(796)
	Float tmp19 = (tmp15 + tmp18);		HX_STACK_VAR(tmp19,"tmp19");
	HX_STACK_LINE(796)
	Float tmp20 = z;		HX_STACK_VAR(tmp20,"tmp20");
	HX_STACK_LINE(796)
	Float tmp21 = ::__hxcpp_memory_get_float(this1->buffer->b,(this1->byteOffset + (int)36));		HX_STACK_VAR(tmp21,"tmp21");
	HX_STACK_LINE(796)
	Float tmp22 = (tmp20 * tmp21);		HX_STACK_VAR(tmp22,"tmp22");
	HX_STACK_LINE(796)
	Float tmp23 = (tmp19 + tmp22);		HX_STACK_VAR(tmp23,"tmp23");
	HX_STACK_LINE(796)
	Float tmp24 = ::__hxcpp_memory_get_float(this1->buffer->b,(this1->byteOffset + (int)52));		HX_STACK_VAR(tmp24,"tmp24");
	HX_STACK_LINE(796)
	Float tmp25 = (tmp23 + tmp24);		HX_STACK_VAR(tmp25,"tmp25");
	HX_STACK_LINE(797)
	Float tmp26 = x;		HX_STACK_VAR(tmp26,"tmp26");
	HX_STACK_LINE(797)
	Float tmp27 = ::__hxcpp_memory_get_float(this1->buffer->b,(this1->byteOffset + (int)8));		HX_STACK_VAR(tmp27,"tmp27");
	HX_STACK_LINE(797)
	Float tmp28 = (tmp26 * tmp27);		HX_STACK_VAR(tmp28,"tmp28");
	HX_STACK_LINE(797)
	Float tmp29 = y;		HX_STACK_VAR(tmp29,"tmp29");
	HX_STACK_LINE(797)
	Float tmp30 = ::__hxcpp_memory_get_float(this1->buffer->b,(this1->byteOffset + (int)24));		HX_STACK_VAR(tmp30,"tmp30");
	HX_STACK_LINE(797)
	Float tmp31 = (tmp29 * tmp30);		HX_STACK_VAR(tmp31,"tmp31");
	HX_STACK_LINE(797)
	Float tmp32 = (tmp28 + tmp31);		HX_STACK_VAR(tmp32,"tmp32");
	HX_STACK_LINE(797)
	Float tmp33 = z;		HX_STACK_VAR(tmp33,"tmp33");
	HX_STACK_LINE(797)
	Float tmp34 = ::__hxcpp_memory_get_float(this1->buffer->b,(this1->byteOffset + (int)40));		HX_STACK_VAR(tmp34,"tmp34");
	HX_STACK_LINE(797)
	Float tmp35 = (tmp33 * tmp34);		HX_STACK_VAR(tmp35,"tmp35");
	HX_STACK_LINE(797)
	Float tmp36 = (tmp32 + tmp35);		HX_STACK_VAR(tmp36,"tmp36");
	HX_STACK_LINE(797)
	Float tmp37 = ::__hxcpp_memory_get_float(this1->buffer->b,(this1->byteOffset + (int)56));		HX_STACK_VAR(tmp37,"tmp37");
	HX_STACK_LINE(797)
	Float tmp38 = (tmp36 + tmp37);		HX_STACK_VAR(tmp38,"tmp38");
	HX_STACK_LINE(798)
	Float tmp39 = x;		HX_STACK_VAR(tmp39,"tmp39");
	HX_STACK_LINE(798)
	Float tmp40 = ::__hxcpp_memory_get_float(this1->buffer->b,(this1->byteOffset + (int)12));		HX_STACK_VAR(tmp40,"tmp40");
	HX_STACK_LINE(798)
	Float tmp41 = (tmp39 * tmp40);		HX_STACK_VAR(tmp41,"tmp41");
	HX_STACK_LINE(798)
	Float tmp42 = y;		HX_STACK_VAR(tmp42,"tmp42");
	HX_STACK_LINE(798)
	Float tmp43 = ::__hxcpp_memory_get_float(this1->buffer->b,(this1->byteOffset + (int)28));		HX_STACK_VAR(tmp43,"tmp43");
	HX_STACK_LINE(798)
	Float tmp44 = (tmp42 * tmp43);		HX_STACK_VAR(tmp44,"tmp44");
	HX_STACK_LINE(798)
	Float tmp45 = (tmp41 + tmp44);		HX_STACK_VAR(tmp45,"tmp45");
	HX_STACK_LINE(798)
	Float tmp46 = z;		HX_STACK_VAR(tmp46,"tmp46");
	HX_STACK_LINE(798)
	Float tmp47 = ::__hxcpp_memory_get_float(this1->buffer->b,(this1->byteOffset + (int)44));		HX_STACK_VAR(tmp47,"tmp47");
	HX_STACK_LINE(798)
	Float tmp48 = (tmp46 * tmp47);		HX_STACK_VAR(tmp48,"tmp48");
	HX_STACK_LINE(798)
	Float tmp49 = (tmp45 + tmp48);		HX_STACK_VAR(tmp49,"tmp49");
	HX_STACK_LINE(798)
	Float tmp50 = ::__hxcpp_memory_get_float(this1->buffer->b,(this1->byteOffset + (int)60));		HX_STACK_VAR(tmp50,"tmp50");
	HX_STACK_LINE(798)
	Float tmp51 = (tmp49 + tmp50);		HX_STACK_VAR(tmp51,"tmp51");
	HX_STACK_LINE(794)
	::lime::math::Vector4 tmp52 = ::lime::math::Vector4_obj::__new(tmp12,tmp25,tmp38,tmp51);		HX_STACK_VAR(tmp52,"tmp52");
	HX_STACK_LINE(794)
	return tmp52;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(Matrix4_Impl__obj,transformVector,return )

Void Matrix4_Impl__obj::transformVectors( ::lime::utils::ArrayBufferView this1,::lime::utils::ArrayBufferView ain,::lime::utils::ArrayBufferView aout){
{
		HX_STACK_FRAME("lime.math._Matrix4.Matrix4_Impl_","transformVectors",0xea9354cc,"lime.math._Matrix4.Matrix4_Impl_.transformVectors","lime/math/Matrix4.hx",803,0xeb65dbd8)
		HX_STACK_ARG(this1,"this1")
		HX_STACK_ARG(ain,"ain")
		HX_STACK_ARG(aout,"aout")
		HX_STACK_LINE(805)
		int i = (int)0;		HX_STACK_VAR(i,"i");
		HX_STACK_LINE(806)
		Float x;		HX_STACK_VAR(x,"x");
		HX_STACK_LINE(806)
		Float y;		HX_STACK_VAR(y,"y");
		HX_STACK_LINE(806)
		Float z;		HX_STACK_VAR(z,"z");
		HX_STACK_LINE(808)
		while((true)){
			HX_STACK_LINE(808)
			int tmp = (i + (int)3);		HX_STACK_VAR(tmp,"tmp");
			HX_STACK_LINE(808)
			int tmp1 = ain->length;		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(808)
			bool tmp2 = (tmp <= tmp1);		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(808)
			bool tmp3 = !(tmp2);		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(808)
			if ((tmp3)){
				HX_STACK_LINE(808)
				break;
			}
			HX_STACK_LINE(810)
			Float tmp4 = ::__hxcpp_memory_get_float(ain->buffer->b,(ain->byteOffset + (i * (int)4)));		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(810)
			x = tmp4;
			HX_STACK_LINE(811)
			Float tmp5 = ::__hxcpp_memory_get_float(ain->buffer->b,(ain->byteOffset + (((i + (int)1)) * (int)4)));		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(811)
			y = tmp5;
			HX_STACK_LINE(812)
			Float tmp6 = ::__hxcpp_memory_get_float(ain->buffer->b,(ain->byteOffset + (((i + (int)2)) * (int)4)));		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(812)
			z = tmp6;
			HX_STACK_LINE(814)
			{
				HX_STACK_LINE(814)
				Float tmp7 = x;		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(814)
				Float tmp8 = ::__hxcpp_memory_get_float(this1->buffer->b,this1->byteOffset);		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(814)
				Float tmp9 = (tmp7 * tmp8);		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(814)
				Float tmp10 = y;		HX_STACK_VAR(tmp10,"tmp10");
				HX_STACK_LINE(814)
				Float tmp11 = ::__hxcpp_memory_get_float(this1->buffer->b,(this1->byteOffset + (int)16));		HX_STACK_VAR(tmp11,"tmp11");
				HX_STACK_LINE(814)
				Float tmp12 = (tmp10 * tmp11);		HX_STACK_VAR(tmp12,"tmp12");
				HX_STACK_LINE(814)
				Float tmp13 = (tmp9 + tmp12);		HX_STACK_VAR(tmp13,"tmp13");
				HX_STACK_LINE(814)
				Float tmp14 = z;		HX_STACK_VAR(tmp14,"tmp14");
				HX_STACK_LINE(814)
				Float tmp15 = ::__hxcpp_memory_get_float(this1->buffer->b,(this1->byteOffset + (int)32));		HX_STACK_VAR(tmp15,"tmp15");
				HX_STACK_LINE(814)
				Float tmp16 = (tmp14 * tmp15);		HX_STACK_VAR(tmp16,"tmp16");
				HX_STACK_LINE(814)
				Float tmp17 = (tmp13 + tmp16);		HX_STACK_VAR(tmp17,"tmp17");
				HX_STACK_LINE(814)
				Float tmp18 = ::__hxcpp_memory_get_float(this1->buffer->b,(this1->byteOffset + (int)48));		HX_STACK_VAR(tmp18,"tmp18");
				HX_STACK_LINE(814)
				Float tmp19 = (tmp17 + tmp18);		HX_STACK_VAR(tmp19,"tmp19");
				HX_STACK_LINE(814)
				Float val = tmp19;		HX_STACK_VAR(val,"val");
				HX_STACK_LINE(814)
				::__hxcpp_memory_set_float(aout->buffer->b,(aout->byteOffset + (i * (int)4)),val);
				HX_STACK_LINE(814)
				val;
			}
			HX_STACK_LINE(815)
			{
				HX_STACK_LINE(815)
				Float tmp7 = x;		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(815)
				Float tmp8 = ::__hxcpp_memory_get_float(this1->buffer->b,(this1->byteOffset + (int)4));		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(815)
				Float tmp9 = (tmp7 * tmp8);		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(815)
				Float tmp10 = y;		HX_STACK_VAR(tmp10,"tmp10");
				HX_STACK_LINE(815)
				Float tmp11 = ::__hxcpp_memory_get_float(this1->buffer->b,(this1->byteOffset + (int)20));		HX_STACK_VAR(tmp11,"tmp11");
				HX_STACK_LINE(815)
				Float tmp12 = (tmp10 * tmp11);		HX_STACK_VAR(tmp12,"tmp12");
				HX_STACK_LINE(815)
				Float tmp13 = (tmp9 + tmp12);		HX_STACK_VAR(tmp13,"tmp13");
				HX_STACK_LINE(815)
				Float tmp14 = z;		HX_STACK_VAR(tmp14,"tmp14");
				HX_STACK_LINE(815)
				Float tmp15 = ::__hxcpp_memory_get_float(this1->buffer->b,(this1->byteOffset + (int)36));		HX_STACK_VAR(tmp15,"tmp15");
				HX_STACK_LINE(815)
				Float tmp16 = (tmp14 * tmp15);		HX_STACK_VAR(tmp16,"tmp16");
				HX_STACK_LINE(815)
				Float tmp17 = (tmp13 + tmp16);		HX_STACK_VAR(tmp17,"tmp17");
				HX_STACK_LINE(815)
				Float tmp18 = ::__hxcpp_memory_get_float(this1->buffer->b,(this1->byteOffset + (int)52));		HX_STACK_VAR(tmp18,"tmp18");
				HX_STACK_LINE(815)
				Float tmp19 = (tmp17 + tmp18);		HX_STACK_VAR(tmp19,"tmp19");
				HX_STACK_LINE(815)
				Float val = tmp19;		HX_STACK_VAR(val,"val");
				HX_STACK_LINE(815)
				::__hxcpp_memory_set_float(aout->buffer->b,(aout->byteOffset + (((i + (int)1)) * (int)4)),val);
				HX_STACK_LINE(815)
				val;
			}
			HX_STACK_LINE(816)
			{
				HX_STACK_LINE(816)
				Float tmp7 = x;		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(816)
				Float tmp8 = ::__hxcpp_memory_get_float(this1->buffer->b,(this1->byteOffset + (int)8));		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(816)
				Float tmp9 = (tmp7 * tmp8);		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(816)
				Float tmp10 = y;		HX_STACK_VAR(tmp10,"tmp10");
				HX_STACK_LINE(816)
				Float tmp11 = ::__hxcpp_memory_get_float(this1->buffer->b,(this1->byteOffset + (int)24));		HX_STACK_VAR(tmp11,"tmp11");
				HX_STACK_LINE(816)
				Float tmp12 = (tmp10 * tmp11);		HX_STACK_VAR(tmp12,"tmp12");
				HX_STACK_LINE(816)
				Float tmp13 = (tmp9 + tmp12);		HX_STACK_VAR(tmp13,"tmp13");
				HX_STACK_LINE(816)
				Float tmp14 = z;		HX_STACK_VAR(tmp14,"tmp14");
				HX_STACK_LINE(816)
				Float tmp15 = ::__hxcpp_memory_get_float(this1->buffer->b,(this1->byteOffset + (int)40));		HX_STACK_VAR(tmp15,"tmp15");
				HX_STACK_LINE(816)
				Float tmp16 = (tmp14 * tmp15);		HX_STACK_VAR(tmp16,"tmp16");
				HX_STACK_LINE(816)
				Float tmp17 = (tmp13 + tmp16);		HX_STACK_VAR(tmp17,"tmp17");
				HX_STACK_LINE(816)
				Float tmp18 = ::__hxcpp_memory_get_float(this1->buffer->b,(this1->byteOffset + (int)56));		HX_STACK_VAR(tmp18,"tmp18");
				HX_STACK_LINE(816)
				Float tmp19 = (tmp17 + tmp18);		HX_STACK_VAR(tmp19,"tmp19");
				HX_STACK_LINE(816)
				Float val = tmp19;		HX_STACK_VAR(val,"val");
				HX_STACK_LINE(816)
				::__hxcpp_memory_set_float(aout->buffer->b,(aout->byteOffset + (((i + (int)2)) * (int)4)),val);
				HX_STACK_LINE(816)
				val;
			}
			HX_STACK_LINE(818)
			hx::AddEq(i,(int)3);
		}
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC3(Matrix4_Impl__obj,transformVectors,(void))

Void Matrix4_Impl__obj::transpose( ::lime::utils::ArrayBufferView this1){
{
		HX_STACK_FRAME("lime.math._Matrix4.Matrix4_Impl_","transpose",0x2d08b4f1,"lime.math._Matrix4.Matrix4_Impl_.transpose","lime/math/Matrix4.hx",825,0xeb65dbd8)
		HX_STACK_ARG(this1,"this1")
		HX_STACK_LINE(827)
		{
			HX_STACK_LINE(827)
			Float tmp = ::__hxcpp_memory_get_float(this1->buffer->b,(this1->byteOffset + (int)4));		HX_STACK_VAR(tmp,"tmp");
			HX_STACK_LINE(827)
			Float temp = tmp;		HX_STACK_VAR(temp,"temp");
			HX_STACK_LINE(827)
			{
				HX_STACK_LINE(827)
				Float tmp1 = ::__hxcpp_memory_get_float(this1->buffer->b,(this1->byteOffset + (int)16));		HX_STACK_VAR(tmp1,"tmp1");
				HX_STACK_LINE(827)
				Float val = tmp1;		HX_STACK_VAR(val,"val");
				HX_STACK_LINE(827)
				::__hxcpp_memory_set_float(this1->buffer->b,(this1->byteOffset + (int)4),val);
				HX_STACK_LINE(827)
				val;
			}
			HX_STACK_LINE(827)
			{
				HX_STACK_LINE(827)
				::__hxcpp_memory_set_float(this1->buffer->b,(this1->byteOffset + (int)16),temp);
				HX_STACK_LINE(827)
				temp;
			}
		}
		HX_STACK_LINE(828)
		{
			HX_STACK_LINE(828)
			Float tmp = ::__hxcpp_memory_get_float(this1->buffer->b,(this1->byteOffset + (int)8));		HX_STACK_VAR(tmp,"tmp");
			HX_STACK_LINE(828)
			Float temp = tmp;		HX_STACK_VAR(temp,"temp");
			HX_STACK_LINE(828)
			{
				HX_STACK_LINE(828)
				Float tmp1 = ::__hxcpp_memory_get_float(this1->buffer->b,(this1->byteOffset + (int)32));		HX_STACK_VAR(tmp1,"tmp1");
				HX_STACK_LINE(828)
				Float val = tmp1;		HX_STACK_VAR(val,"val");
				HX_STACK_LINE(828)
				::__hxcpp_memory_set_float(this1->buffer->b,(this1->byteOffset + (int)8),val);
				HX_STACK_LINE(828)
				val;
			}
			HX_STACK_LINE(828)
			{
				HX_STACK_LINE(828)
				::__hxcpp_memory_set_float(this1->buffer->b,(this1->byteOffset + (int)32),temp);
				HX_STACK_LINE(828)
				temp;
			}
		}
		HX_STACK_LINE(829)
		{
			HX_STACK_LINE(829)
			Float tmp = ::__hxcpp_memory_get_float(this1->buffer->b,(this1->byteOffset + (int)12));		HX_STACK_VAR(tmp,"tmp");
			HX_STACK_LINE(829)
			Float temp = tmp;		HX_STACK_VAR(temp,"temp");
			HX_STACK_LINE(829)
			{
				HX_STACK_LINE(829)
				Float tmp1 = ::__hxcpp_memory_get_float(this1->buffer->b,(this1->byteOffset + (int)48));		HX_STACK_VAR(tmp1,"tmp1");
				HX_STACK_LINE(829)
				Float val = tmp1;		HX_STACK_VAR(val,"val");
				HX_STACK_LINE(829)
				::__hxcpp_memory_set_float(this1->buffer->b,(this1->byteOffset + (int)12),val);
				HX_STACK_LINE(829)
				val;
			}
			HX_STACK_LINE(829)
			{
				HX_STACK_LINE(829)
				::__hxcpp_memory_set_float(this1->buffer->b,(this1->byteOffset + (int)48),temp);
				HX_STACK_LINE(829)
				temp;
			}
		}
		HX_STACK_LINE(830)
		{
			HX_STACK_LINE(830)
			Float tmp = ::__hxcpp_memory_get_float(this1->buffer->b,(this1->byteOffset + (int)24));		HX_STACK_VAR(tmp,"tmp");
			HX_STACK_LINE(830)
			Float temp = tmp;		HX_STACK_VAR(temp,"temp");
			HX_STACK_LINE(830)
			{
				HX_STACK_LINE(830)
				Float tmp1 = ::__hxcpp_memory_get_float(this1->buffer->b,(this1->byteOffset + (int)36));		HX_STACK_VAR(tmp1,"tmp1");
				HX_STACK_LINE(830)
				Float val = tmp1;		HX_STACK_VAR(val,"val");
				HX_STACK_LINE(830)
				::__hxcpp_memory_set_float(this1->buffer->b,(this1->byteOffset + (int)24),val);
				HX_STACK_LINE(830)
				val;
			}
			HX_STACK_LINE(830)
			{
				HX_STACK_LINE(830)
				::__hxcpp_memory_set_float(this1->buffer->b,(this1->byteOffset + (int)36),temp);
				HX_STACK_LINE(830)
				temp;
			}
		}
		HX_STACK_LINE(831)
		{
			HX_STACK_LINE(831)
			Float tmp = ::__hxcpp_memory_get_float(this1->buffer->b,(this1->byteOffset + (int)28));		HX_STACK_VAR(tmp,"tmp");
			HX_STACK_LINE(831)
			Float temp = tmp;		HX_STACK_VAR(temp,"temp");
			HX_STACK_LINE(831)
			{
				HX_STACK_LINE(831)
				Float tmp1 = ::__hxcpp_memory_get_float(this1->buffer->b,(this1->byteOffset + (int)52));		HX_STACK_VAR(tmp1,"tmp1");
				HX_STACK_LINE(831)
				Float val = tmp1;		HX_STACK_VAR(val,"val");
				HX_STACK_LINE(831)
				::__hxcpp_memory_set_float(this1->buffer->b,(this1->byteOffset + (int)28),val);
				HX_STACK_LINE(831)
				val;
			}
			HX_STACK_LINE(831)
			{
				HX_STACK_LINE(831)
				::__hxcpp_memory_set_float(this1->buffer->b,(this1->byteOffset + (int)52),temp);
				HX_STACK_LINE(831)
				temp;
			}
		}
		HX_STACK_LINE(832)
		{
			HX_STACK_LINE(832)
			Float tmp = ::__hxcpp_memory_get_float(this1->buffer->b,(this1->byteOffset + (int)44));		HX_STACK_VAR(tmp,"tmp");
			HX_STACK_LINE(832)
			Float temp = tmp;		HX_STACK_VAR(temp,"temp");
			HX_STACK_LINE(832)
			{
				HX_STACK_LINE(832)
				Float tmp1 = ::__hxcpp_memory_get_float(this1->buffer->b,(this1->byteOffset + (int)56));		HX_STACK_VAR(tmp1,"tmp1");
				HX_STACK_LINE(832)
				Float val = tmp1;		HX_STACK_VAR(val,"val");
				HX_STACK_LINE(832)
				::__hxcpp_memory_set_float(this1->buffer->b,(this1->byteOffset + (int)44),val);
				HX_STACK_LINE(832)
				val;
			}
			HX_STACK_LINE(832)
			{
				HX_STACK_LINE(832)
				::__hxcpp_memory_set_float(this1->buffer->b,(this1->byteOffset + (int)56),temp);
				HX_STACK_LINE(832)
				temp;
			}
		}
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Matrix4_Impl__obj,transpose,(void))

::lime::utils::ArrayBufferView Matrix4_Impl__obj::__getAxisRotation( ::lime::utils::ArrayBufferView this1,Float x,Float y,Float z,Float degrees){
	HX_STACK_FRAME("lime.math._Matrix4.Matrix4_Impl_","__getAxisRotation",0x8b4b420d,"lime.math._Matrix4.Matrix4_Impl_.__getAxisRotation","lime/math/Matrix4.hx",837,0xeb65dbd8)
	HX_STACK_ARG(this1,"this1")
	HX_STACK_ARG(x,"x")
	HX_STACK_ARG(y,"y")
	HX_STACK_ARG(z,"z")
	HX_STACK_ARG(degrees,"degrees")
	HX_STACK_LINE(839)
	::lime::utils::ArrayBufferView tmp = ::lime::math::_Matrix4::Matrix4_Impl__obj::_new(null());		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(839)
	::lime::utils::ArrayBufferView m = tmp;		HX_STACK_VAR(m,"m");
	HX_STACK_LINE(841)
	::lime::math::Vector4 tmp1 = ::lime::math::Vector4_obj::__new(x,y,z,null());		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(841)
	::lime::math::Vector4 a1 = tmp1;		HX_STACK_VAR(a1,"a1");
	HX_STACK_LINE(842)
	Float tmp2 = degrees;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(842)
	Float tmp3 = -(tmp2);		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(842)
	Float tmp4 = ::Math_obj::PI;		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(842)
	Float tmp5 = (Float(tmp4) / Float((int)180));		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(842)
	Float tmp6 = (tmp3 * tmp5);		HX_STACK_VAR(tmp6,"tmp6");
	HX_STACK_LINE(842)
	Float rad = tmp6;		HX_STACK_VAR(rad,"rad");
	HX_STACK_LINE(843)
	Float tmp7 = rad;		HX_STACK_VAR(tmp7,"tmp7");
	HX_STACK_LINE(843)
	Float tmp8 = ::Math_obj::cos(tmp7);		HX_STACK_VAR(tmp8,"tmp8");
	HX_STACK_LINE(843)
	Float c = tmp8;		HX_STACK_VAR(c,"c");
	HX_STACK_LINE(844)
	Float tmp9 = rad;		HX_STACK_VAR(tmp9,"tmp9");
	HX_STACK_LINE(844)
	Float tmp10 = ::Math_obj::sin(tmp9);		HX_STACK_VAR(tmp10,"tmp10");
	HX_STACK_LINE(844)
	Float s = tmp10;		HX_STACK_VAR(s,"s");
	HX_STACK_LINE(845)
	Float tmp11 = (((Float)1.0) - c);		HX_STACK_VAR(tmp11,"tmp11");
	HX_STACK_LINE(845)
	Float t = tmp11;		HX_STACK_VAR(t,"t");
	HX_STACK_LINE(847)
	::lime::utils::ArrayBufferView tmp12 = m;		HX_STACK_VAR(tmp12,"tmp12");
	HX_STACK_LINE(847)
	Float tmp13 = c;		HX_STACK_VAR(tmp13,"tmp13");
	HX_STACK_LINE(847)
	Float tmp14 = (a1->x * a1->x);		HX_STACK_VAR(tmp14,"tmp14");
	HX_STACK_LINE(847)
	Float tmp15 = t;		HX_STACK_VAR(tmp15,"tmp15");
	HX_STACK_LINE(847)
	Float tmp16 = (tmp14 * tmp15);		HX_STACK_VAR(tmp16,"tmp16");
	HX_STACK_LINE(847)
	Float tmp17 = (tmp13 + tmp16);		HX_STACK_VAR(tmp17,"tmp17");
	HX_STACK_LINE(847)
	::lime::math::_Matrix4::Matrix4_Impl__obj::set(tmp12,(int)0,tmp17);
	HX_STACK_LINE(848)
	::lime::utils::ArrayBufferView tmp18 = m;		HX_STACK_VAR(tmp18,"tmp18");
	HX_STACK_LINE(848)
	Float tmp19 = c;		HX_STACK_VAR(tmp19,"tmp19");
	HX_STACK_LINE(848)
	Float tmp20 = (a1->y * a1->y);		HX_STACK_VAR(tmp20,"tmp20");
	HX_STACK_LINE(848)
	Float tmp21 = t;		HX_STACK_VAR(tmp21,"tmp21");
	HX_STACK_LINE(848)
	Float tmp22 = (tmp20 * tmp21);		HX_STACK_VAR(tmp22,"tmp22");
	HX_STACK_LINE(848)
	Float tmp23 = (tmp19 + tmp22);		HX_STACK_VAR(tmp23,"tmp23");
	HX_STACK_LINE(848)
	::lime::math::_Matrix4::Matrix4_Impl__obj::set(tmp18,(int)5,tmp23);
	HX_STACK_LINE(849)
	::lime::utils::ArrayBufferView tmp24 = m;		HX_STACK_VAR(tmp24,"tmp24");
	HX_STACK_LINE(849)
	Float tmp25 = c;		HX_STACK_VAR(tmp25,"tmp25");
	HX_STACK_LINE(849)
	Float tmp26 = (a1->z * a1->z);		HX_STACK_VAR(tmp26,"tmp26");
	HX_STACK_LINE(849)
	Float tmp27 = t;		HX_STACK_VAR(tmp27,"tmp27");
	HX_STACK_LINE(849)
	Float tmp28 = (tmp26 * tmp27);		HX_STACK_VAR(tmp28,"tmp28");
	HX_STACK_LINE(849)
	Float tmp29 = (tmp25 + tmp28);		HX_STACK_VAR(tmp29,"tmp29");
	HX_STACK_LINE(849)
	::lime::math::_Matrix4::Matrix4_Impl__obj::set(tmp24,(int)10,tmp29);
	HX_STACK_LINE(851)
	Float tmp30 = (a1->x * a1->y);		HX_STACK_VAR(tmp30,"tmp30");
	HX_STACK_LINE(851)
	Float tmp31 = t;		HX_STACK_VAR(tmp31,"tmp31");
	HX_STACK_LINE(851)
	Float tmp32 = (tmp30 * tmp31);		HX_STACK_VAR(tmp32,"tmp32");
	HX_STACK_LINE(851)
	Float tmp110 = tmp32;		HX_STACK_VAR(tmp110,"tmp110");
	HX_STACK_LINE(852)
	Float tmp33 = (a1->z * s);		HX_STACK_VAR(tmp33,"tmp33");
	HX_STACK_LINE(852)
	Float tmp210 = tmp33;		HX_STACK_VAR(tmp210,"tmp210");
	HX_STACK_LINE(853)
	::lime::utils::ArrayBufferView tmp34 = m;		HX_STACK_VAR(tmp34,"tmp34");
	HX_STACK_LINE(853)
	Float tmp35 = (tmp110 + tmp210);		HX_STACK_VAR(tmp35,"tmp35");
	HX_STACK_LINE(853)
	::lime::math::_Matrix4::Matrix4_Impl__obj::set(tmp34,(int)4,tmp35);
	HX_STACK_LINE(854)
	::lime::utils::ArrayBufferView tmp36 = m;		HX_STACK_VAR(tmp36,"tmp36");
	HX_STACK_LINE(854)
	Float tmp37 = (tmp110 - tmp210);		HX_STACK_VAR(tmp37,"tmp37");
	HX_STACK_LINE(854)
	::lime::math::_Matrix4::Matrix4_Impl__obj::set(tmp36,(int)1,tmp37);
	HX_STACK_LINE(855)
	Float tmp38 = (a1->x * a1->z);		HX_STACK_VAR(tmp38,"tmp38");
	HX_STACK_LINE(855)
	Float tmp39 = t;		HX_STACK_VAR(tmp39,"tmp39");
	HX_STACK_LINE(855)
	Float tmp40 = (tmp38 * tmp39);		HX_STACK_VAR(tmp40,"tmp40");
	HX_STACK_LINE(855)
	tmp110 = tmp40;
	HX_STACK_LINE(856)
	Float tmp41 = (a1->y * s);		HX_STACK_VAR(tmp41,"tmp41");
	HX_STACK_LINE(856)
	tmp210 = tmp41;
	HX_STACK_LINE(857)
	::lime::utils::ArrayBufferView tmp42 = m;		HX_STACK_VAR(tmp42,"tmp42");
	HX_STACK_LINE(857)
	Float tmp43 = (tmp110 - tmp210);		HX_STACK_VAR(tmp43,"tmp43");
	HX_STACK_LINE(857)
	::lime::math::_Matrix4::Matrix4_Impl__obj::set(tmp42,(int)8,tmp43);
	HX_STACK_LINE(858)
	::lime::utils::ArrayBufferView tmp44 = m;		HX_STACK_VAR(tmp44,"tmp44");
	HX_STACK_LINE(858)
	Float tmp45 = (tmp110 + tmp210);		HX_STACK_VAR(tmp45,"tmp45");
	HX_STACK_LINE(858)
	::lime::math::_Matrix4::Matrix4_Impl__obj::set(tmp44,(int)2,tmp45);
	HX_STACK_LINE(859)
	Float tmp46 = (a1->y * a1->z);		HX_STACK_VAR(tmp46,"tmp46");
	HX_STACK_LINE(859)
	Float tmp47 = t;		HX_STACK_VAR(tmp47,"tmp47");
	HX_STACK_LINE(859)
	Float tmp48 = (tmp46 * tmp47);		HX_STACK_VAR(tmp48,"tmp48");
	HX_STACK_LINE(859)
	tmp110 = tmp48;
	HX_STACK_LINE(860)
	Float tmp49 = (a1->x * s);		HX_STACK_VAR(tmp49,"tmp49");
	HX_STACK_LINE(860)
	tmp210 = tmp49;
	HX_STACK_LINE(861)
	::lime::utils::ArrayBufferView tmp50 = m;		HX_STACK_VAR(tmp50,"tmp50");
	HX_STACK_LINE(861)
	Float tmp51 = (tmp110 + tmp210);		HX_STACK_VAR(tmp51,"tmp51");
	HX_STACK_LINE(861)
	::lime::math::_Matrix4::Matrix4_Impl__obj::set(tmp50,(int)9,tmp51);
	HX_STACK_LINE(862)
	::lime::utils::ArrayBufferView tmp52 = m;		HX_STACK_VAR(tmp52,"tmp52");
	HX_STACK_LINE(862)
	Float tmp53 = (tmp110 - tmp210);		HX_STACK_VAR(tmp53,"tmp53");
	HX_STACK_LINE(862)
	::lime::math::_Matrix4::Matrix4_Impl__obj::set(tmp52,(int)6,tmp53);
	HX_STACK_LINE(864)
	::lime::utils::ArrayBufferView tmp54 = m;		HX_STACK_VAR(tmp54,"tmp54");
	HX_STACK_LINE(864)
	return tmp54;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC5(Matrix4_Impl__obj,__getAxisRotation,return )

Void Matrix4_Impl__obj::__swap( ::lime::utils::ArrayBufferView this1,int a,int b){
{
		HX_STACK_FRAME("lime.math._Matrix4.Matrix4_Impl_","__swap",0x79e62e3b,"lime.math._Matrix4.Matrix4_Impl_.__swap","lime/math/Matrix4.hx",869,0xeb65dbd8)
		HX_STACK_ARG(this1,"this1")
		HX_STACK_ARG(a,"a")
		HX_STACK_ARG(b,"b")
		HX_STACK_LINE(871)
		Float tmp = ::__hxcpp_memory_get_float(this1->buffer->b,(this1->byteOffset + (a * (int)4)));		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(871)
		Float temp = tmp;		HX_STACK_VAR(temp,"temp");
		HX_STACK_LINE(872)
		{
			HX_STACK_LINE(872)
			Float tmp1 = ::__hxcpp_memory_get_float(this1->buffer->b,(this1->byteOffset + (b * (int)4)));		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(872)
			Float val = tmp1;		HX_STACK_VAR(val,"val");
			HX_STACK_LINE(872)
			::__hxcpp_memory_set_float(this1->buffer->b,(this1->byteOffset + (a * (int)4)),val);
			HX_STACK_LINE(872)
			val;
		}
		HX_STACK_LINE(873)
		{
			HX_STACK_LINE(873)
			::__hxcpp_memory_set_float(this1->buffer->b,(this1->byteOffset + (b * (int)4)),temp);
			HX_STACK_LINE(873)
			temp;
		}
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC3(Matrix4_Impl__obj,__swap,(void))

Float Matrix4_Impl__obj::get_determinant( ::lime::utils::ArrayBufferView this1){
	HX_STACK_FRAME("lime.math._Matrix4.Matrix4_Impl_","get_determinant",0x5d0323a4,"lime.math._Matrix4.Matrix4_Impl_.get_determinant","lime/math/Matrix4.hx",885,0xeb65dbd8)
	HX_STACK_ARG(this1,"this1")
	HX_STACK_LINE(887)
	Float tmp = ::__hxcpp_memory_get_float(this1->buffer->b,this1->byteOffset);		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(887)
	Float tmp1 = ::__hxcpp_memory_get_float(this1->buffer->b,(this1->byteOffset + (int)20));		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(887)
	Float tmp2 = (tmp * tmp1);		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(887)
	Float tmp3 = ::__hxcpp_memory_get_float(this1->buffer->b,(this1->byteOffset + (int)16));		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(887)
	Float tmp4 = ::__hxcpp_memory_get_float(this1->buffer->b,(this1->byteOffset + (int)4));		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(887)
	Float tmp5 = (tmp3 * tmp4);		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(887)
	Float tmp6 = (tmp2 - tmp5);		HX_STACK_VAR(tmp6,"tmp6");
	HX_STACK_LINE(887)
	Float tmp7 = ::__hxcpp_memory_get_float(this1->buffer->b,(this1->byteOffset + (int)40));		HX_STACK_VAR(tmp7,"tmp7");
	HX_STACK_LINE(887)
	Float tmp8 = ::__hxcpp_memory_get_float(this1->buffer->b,(this1->byteOffset + (int)60));		HX_STACK_VAR(tmp8,"tmp8");
	HX_STACK_LINE(887)
	Float tmp9 = (tmp7 * tmp8);		HX_STACK_VAR(tmp9,"tmp9");
	HX_STACK_LINE(887)
	Float tmp10 = ::__hxcpp_memory_get_float(this1->buffer->b,(this1->byteOffset + (int)56));		HX_STACK_VAR(tmp10,"tmp10");
	HX_STACK_LINE(887)
	Float tmp11 = ::__hxcpp_memory_get_float(this1->buffer->b,(this1->byteOffset + (int)44));		HX_STACK_VAR(tmp11,"tmp11");
	HX_STACK_LINE(887)
	Float tmp12 = (tmp10 * tmp11);		HX_STACK_VAR(tmp12,"tmp12");
	HX_STACK_LINE(887)
	Float tmp13 = (tmp9 - tmp12);		HX_STACK_VAR(tmp13,"tmp13");
	HX_STACK_LINE(887)
	Float tmp14 = (tmp6 * tmp13);		HX_STACK_VAR(tmp14,"tmp14");
	HX_STACK_LINE(888)
	Float tmp15 = ::__hxcpp_memory_get_float(this1->buffer->b,this1->byteOffset);		HX_STACK_VAR(tmp15,"tmp15");
	HX_STACK_LINE(888)
	Float tmp16 = ::__hxcpp_memory_get_float(this1->buffer->b,(this1->byteOffset + (int)36));		HX_STACK_VAR(tmp16,"tmp16");
	HX_STACK_LINE(888)
	Float tmp17 = (tmp15 * tmp16);		HX_STACK_VAR(tmp17,"tmp17");
	HX_STACK_LINE(888)
	Float tmp18 = ::__hxcpp_memory_get_float(this1->buffer->b,(this1->byteOffset + (int)32));		HX_STACK_VAR(tmp18,"tmp18");
	HX_STACK_LINE(888)
	Float tmp19 = ::__hxcpp_memory_get_float(this1->buffer->b,(this1->byteOffset + (int)4));		HX_STACK_VAR(tmp19,"tmp19");
	HX_STACK_LINE(888)
	Float tmp20 = (tmp18 * tmp19);		HX_STACK_VAR(tmp20,"tmp20");
	HX_STACK_LINE(888)
	Float tmp21 = (tmp17 - tmp20);		HX_STACK_VAR(tmp21,"tmp21");
	HX_STACK_LINE(888)
	Float tmp22 = ::__hxcpp_memory_get_float(this1->buffer->b,(this1->byteOffset + (int)24));		HX_STACK_VAR(tmp22,"tmp22");
	HX_STACK_LINE(888)
	Float tmp23 = ::__hxcpp_memory_get_float(this1->buffer->b,(this1->byteOffset + (int)60));		HX_STACK_VAR(tmp23,"tmp23");
	HX_STACK_LINE(888)
	Float tmp24 = (tmp22 * tmp23);		HX_STACK_VAR(tmp24,"tmp24");
	HX_STACK_LINE(888)
	Float tmp25 = ::__hxcpp_memory_get_float(this1->buffer->b,(this1->byteOffset + (int)56));		HX_STACK_VAR(tmp25,"tmp25");
	HX_STACK_LINE(888)
	Float tmp26 = ::__hxcpp_memory_get_float(this1->buffer->b,(this1->byteOffset + (int)28));		HX_STACK_VAR(tmp26,"tmp26");
	HX_STACK_LINE(888)
	Float tmp27 = (tmp25 * tmp26);		HX_STACK_VAR(tmp27,"tmp27");
	HX_STACK_LINE(888)
	Float tmp28 = (tmp24 - tmp27);		HX_STACK_VAR(tmp28,"tmp28");
	HX_STACK_LINE(888)
	Float tmp29 = (tmp21 * tmp28);		HX_STACK_VAR(tmp29,"tmp29");
	HX_STACK_LINE(887)
	Float tmp30 = (tmp14 - tmp29);		HX_STACK_VAR(tmp30,"tmp30");
	HX_STACK_LINE(889)
	Float tmp31 = ::__hxcpp_memory_get_float(this1->buffer->b,this1->byteOffset);		HX_STACK_VAR(tmp31,"tmp31");
	HX_STACK_LINE(889)
	Float tmp32 = ::__hxcpp_memory_get_float(this1->buffer->b,(this1->byteOffset + (int)52));		HX_STACK_VAR(tmp32,"tmp32");
	HX_STACK_LINE(889)
	Float tmp33 = (tmp31 * tmp32);		HX_STACK_VAR(tmp33,"tmp33");
	HX_STACK_LINE(889)
	Float tmp34 = ::__hxcpp_memory_get_float(this1->buffer->b,(this1->byteOffset + (int)48));		HX_STACK_VAR(tmp34,"tmp34");
	HX_STACK_LINE(889)
	Float tmp35 = ::__hxcpp_memory_get_float(this1->buffer->b,(this1->byteOffset + (int)4));		HX_STACK_VAR(tmp35,"tmp35");
	HX_STACK_LINE(889)
	Float tmp36 = (tmp34 * tmp35);		HX_STACK_VAR(tmp36,"tmp36");
	HX_STACK_LINE(889)
	Float tmp37 = (tmp33 - tmp36);		HX_STACK_VAR(tmp37,"tmp37");
	HX_STACK_LINE(889)
	Float tmp38 = ::__hxcpp_memory_get_float(this1->buffer->b,(this1->byteOffset + (int)24));		HX_STACK_VAR(tmp38,"tmp38");
	HX_STACK_LINE(889)
	Float tmp39 = ::__hxcpp_memory_get_float(this1->buffer->b,(this1->byteOffset + (int)44));		HX_STACK_VAR(tmp39,"tmp39");
	HX_STACK_LINE(889)
	Float tmp40 = (tmp38 * tmp39);		HX_STACK_VAR(tmp40,"tmp40");
	HX_STACK_LINE(889)
	Float tmp41 = ::__hxcpp_memory_get_float(this1->buffer->b,(this1->byteOffset + (int)40));		HX_STACK_VAR(tmp41,"tmp41");
	HX_STACK_LINE(889)
	Float tmp42 = ::__hxcpp_memory_get_float(this1->buffer->b,(this1->byteOffset + (int)28));		HX_STACK_VAR(tmp42,"tmp42");
	HX_STACK_LINE(889)
	Float tmp43 = (tmp41 * tmp42);		HX_STACK_VAR(tmp43,"tmp43");
	HX_STACK_LINE(889)
	Float tmp44 = (tmp40 - tmp43);		HX_STACK_VAR(tmp44,"tmp44");
	HX_STACK_LINE(889)
	Float tmp45 = (tmp37 * tmp44);		HX_STACK_VAR(tmp45,"tmp45");
	HX_STACK_LINE(887)
	Float tmp46 = (tmp30 + tmp45);		HX_STACK_VAR(tmp46,"tmp46");
	HX_STACK_LINE(890)
	Float tmp47 = ::__hxcpp_memory_get_float(this1->buffer->b,(this1->byteOffset + (int)16));		HX_STACK_VAR(tmp47,"tmp47");
	HX_STACK_LINE(890)
	Float tmp48 = ::__hxcpp_memory_get_float(this1->buffer->b,(this1->byteOffset + (int)36));		HX_STACK_VAR(tmp48,"tmp48");
	HX_STACK_LINE(890)
	Float tmp49 = (tmp47 * tmp48);		HX_STACK_VAR(tmp49,"tmp49");
	HX_STACK_LINE(890)
	Float tmp50 = ::__hxcpp_memory_get_float(this1->buffer->b,(this1->byteOffset + (int)32));		HX_STACK_VAR(tmp50,"tmp50");
	HX_STACK_LINE(890)
	Float tmp51 = ::__hxcpp_memory_get_float(this1->buffer->b,(this1->byteOffset + (int)20));		HX_STACK_VAR(tmp51,"tmp51");
	HX_STACK_LINE(890)
	Float tmp52 = (tmp50 * tmp51);		HX_STACK_VAR(tmp52,"tmp52");
	HX_STACK_LINE(890)
	Float tmp53 = (tmp49 - tmp52);		HX_STACK_VAR(tmp53,"tmp53");
	HX_STACK_LINE(890)
	Float tmp54 = ::__hxcpp_memory_get_float(this1->buffer->b,(this1->byteOffset + (int)8));		HX_STACK_VAR(tmp54,"tmp54");
	HX_STACK_LINE(890)
	Float tmp55 = ::__hxcpp_memory_get_float(this1->buffer->b,(this1->byteOffset + (int)60));		HX_STACK_VAR(tmp55,"tmp55");
	HX_STACK_LINE(890)
	Float tmp56 = (tmp54 * tmp55);		HX_STACK_VAR(tmp56,"tmp56");
	HX_STACK_LINE(890)
	Float tmp57 = ::__hxcpp_memory_get_float(this1->buffer->b,(this1->byteOffset + (int)56));		HX_STACK_VAR(tmp57,"tmp57");
	HX_STACK_LINE(890)
	Float tmp58 = ::__hxcpp_memory_get_float(this1->buffer->b,(this1->byteOffset + (int)12));		HX_STACK_VAR(tmp58,"tmp58");
	HX_STACK_LINE(890)
	Float tmp59 = (tmp57 * tmp58);		HX_STACK_VAR(tmp59,"tmp59");
	HX_STACK_LINE(890)
	Float tmp60 = (tmp56 - tmp59);		HX_STACK_VAR(tmp60,"tmp60");
	HX_STACK_LINE(890)
	Float tmp61 = (tmp53 * tmp60);		HX_STACK_VAR(tmp61,"tmp61");
	HX_STACK_LINE(887)
	Float tmp62 = (tmp46 + tmp61);		HX_STACK_VAR(tmp62,"tmp62");
	HX_STACK_LINE(891)
	Float tmp63 = ::__hxcpp_memory_get_float(this1->buffer->b,(this1->byteOffset + (int)16));		HX_STACK_VAR(tmp63,"tmp63");
	HX_STACK_LINE(891)
	Float tmp64 = ::__hxcpp_memory_get_float(this1->buffer->b,(this1->byteOffset + (int)52));		HX_STACK_VAR(tmp64,"tmp64");
	HX_STACK_LINE(891)
	Float tmp65 = (tmp63 * tmp64);		HX_STACK_VAR(tmp65,"tmp65");
	HX_STACK_LINE(891)
	Float tmp66 = ::__hxcpp_memory_get_float(this1->buffer->b,(this1->byteOffset + (int)48));		HX_STACK_VAR(tmp66,"tmp66");
	HX_STACK_LINE(891)
	Float tmp67 = ::__hxcpp_memory_get_float(this1->buffer->b,(this1->byteOffset + (int)20));		HX_STACK_VAR(tmp67,"tmp67");
	HX_STACK_LINE(891)
	Float tmp68 = (tmp66 * tmp67);		HX_STACK_VAR(tmp68,"tmp68");
	HX_STACK_LINE(891)
	Float tmp69 = (tmp65 - tmp68);		HX_STACK_VAR(tmp69,"tmp69");
	HX_STACK_LINE(891)
	Float tmp70 = ::__hxcpp_memory_get_float(this1->buffer->b,(this1->byteOffset + (int)8));		HX_STACK_VAR(tmp70,"tmp70");
	HX_STACK_LINE(891)
	Float tmp71 = ::__hxcpp_memory_get_float(this1->buffer->b,(this1->byteOffset + (int)44));		HX_STACK_VAR(tmp71,"tmp71");
	HX_STACK_LINE(891)
	Float tmp72 = (tmp70 * tmp71);		HX_STACK_VAR(tmp72,"tmp72");
	HX_STACK_LINE(891)
	Float tmp73 = ::__hxcpp_memory_get_float(this1->buffer->b,(this1->byteOffset + (int)40));		HX_STACK_VAR(tmp73,"tmp73");
	HX_STACK_LINE(891)
	Float tmp74 = ::__hxcpp_memory_get_float(this1->buffer->b,(this1->byteOffset + (int)12));		HX_STACK_VAR(tmp74,"tmp74");
	HX_STACK_LINE(891)
	Float tmp75 = (tmp73 * tmp74);		HX_STACK_VAR(tmp75,"tmp75");
	HX_STACK_LINE(891)
	Float tmp76 = (tmp72 - tmp75);		HX_STACK_VAR(tmp76,"tmp76");
	HX_STACK_LINE(891)
	Float tmp77 = (tmp69 * tmp76);		HX_STACK_VAR(tmp77,"tmp77");
	HX_STACK_LINE(887)
	Float tmp78 = (tmp62 - tmp77);		HX_STACK_VAR(tmp78,"tmp78");
	HX_STACK_LINE(892)
	Float tmp79 = ::__hxcpp_memory_get_float(this1->buffer->b,(this1->byteOffset + (int)32));		HX_STACK_VAR(tmp79,"tmp79");
	HX_STACK_LINE(892)
	Float tmp80 = ::__hxcpp_memory_get_float(this1->buffer->b,(this1->byteOffset + (int)52));		HX_STACK_VAR(tmp80,"tmp80");
	HX_STACK_LINE(892)
	Float tmp81 = (tmp79 * tmp80);		HX_STACK_VAR(tmp81,"tmp81");
	HX_STACK_LINE(892)
	Float tmp82 = ::__hxcpp_memory_get_float(this1->buffer->b,(this1->byteOffset + (int)48));		HX_STACK_VAR(tmp82,"tmp82");
	HX_STACK_LINE(892)
	Float tmp83 = ::__hxcpp_memory_get_float(this1->buffer->b,(this1->byteOffset + (int)36));		HX_STACK_VAR(tmp83,"tmp83");
	HX_STACK_LINE(892)
	Float tmp84 = (tmp82 * tmp83);		HX_STACK_VAR(tmp84,"tmp84");
	HX_STACK_LINE(892)
	Float tmp85 = (tmp81 - tmp84);		HX_STACK_VAR(tmp85,"tmp85");
	HX_STACK_LINE(892)
	Float tmp86 = ::__hxcpp_memory_get_float(this1->buffer->b,(this1->byteOffset + (int)8));		HX_STACK_VAR(tmp86,"tmp86");
	HX_STACK_LINE(892)
	Float tmp87 = ::__hxcpp_memory_get_float(this1->buffer->b,(this1->byteOffset + (int)28));		HX_STACK_VAR(tmp87,"tmp87");
	HX_STACK_LINE(892)
	Float tmp88 = (tmp86 * tmp87);		HX_STACK_VAR(tmp88,"tmp88");
	HX_STACK_LINE(892)
	Float tmp89 = ::__hxcpp_memory_get_float(this1->buffer->b,(this1->byteOffset + (int)24));		HX_STACK_VAR(tmp89,"tmp89");
	HX_STACK_LINE(892)
	Float tmp90 = ::__hxcpp_memory_get_float(this1->buffer->b,(this1->byteOffset + (int)12));		HX_STACK_VAR(tmp90,"tmp90");
	HX_STACK_LINE(892)
	Float tmp91 = (tmp89 * tmp90);		HX_STACK_VAR(tmp91,"tmp91");
	HX_STACK_LINE(892)
	Float tmp92 = (tmp88 - tmp91);		HX_STACK_VAR(tmp92,"tmp92");
	HX_STACK_LINE(892)
	Float tmp93 = (tmp85 * tmp92);		HX_STACK_VAR(tmp93,"tmp93");
	HX_STACK_LINE(887)
	Float tmp94 = (tmp78 + tmp93);		HX_STACK_VAR(tmp94,"tmp94");
	HX_STACK_LINE(887)
	Float tmp95 = tmp94;		HX_STACK_VAR(tmp95,"tmp95");
	HX_STACK_LINE(887)
	return tmp95;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Matrix4_Impl__obj,get_determinant,return )

::lime::math::Vector4 Matrix4_Impl__obj::get_position( ::lime::utils::ArrayBufferView this1){
	HX_STACK_FRAME("lime.math._Matrix4.Matrix4_Impl_","get_position",0x55830b3a,"lime.math._Matrix4.Matrix4_Impl_.get_position","lime/math/Matrix4.hx",897,0xeb65dbd8)
	HX_STACK_ARG(this1,"this1")
	HX_STACK_LINE(899)
	Float tmp = ::__hxcpp_memory_get_float(this1->buffer->b,(this1->byteOffset + (int)48));		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(899)
	Float tmp1 = ::__hxcpp_memory_get_float(this1->buffer->b,(this1->byteOffset + (int)52));		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(899)
	Float tmp2 = ::__hxcpp_memory_get_float(this1->buffer->b,(this1->byteOffset + (int)56));		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(899)
	::lime::math::Vector4 tmp3 = ::lime::math::Vector4_obj::__new(tmp,tmp1,tmp2,null());		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(899)
	return tmp3;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Matrix4_Impl__obj,get_position,return )

::lime::math::Vector4 Matrix4_Impl__obj::set_position( ::lime::utils::ArrayBufferView this1,::lime::math::Vector4 val){
	HX_STACK_FRAME("lime.math._Matrix4.Matrix4_Impl_","set_position",0x6a7c2eae,"lime.math._Matrix4.Matrix4_Impl_.set_position","lime/math/Matrix4.hx",904,0xeb65dbd8)
	HX_STACK_ARG(this1,"this1")
	HX_STACK_ARG(val,"val")
	HX_STACK_LINE(906)
	{
		HX_STACK_LINE(906)
		Float val1 = val->x;		HX_STACK_VAR(val1,"val1");
		HX_STACK_LINE(906)
		::__hxcpp_memory_set_float(this1->buffer->b,(this1->byteOffset + (int)48),val1);
		HX_STACK_LINE(906)
		val1;
	}
	HX_STACK_LINE(907)
	{
		HX_STACK_LINE(907)
		Float val1 = val->y;		HX_STACK_VAR(val1,"val1");
		HX_STACK_LINE(907)
		::__hxcpp_memory_set_float(this1->buffer->b,(this1->byteOffset + (int)52),val1);
		HX_STACK_LINE(907)
		val1;
	}
	HX_STACK_LINE(908)
	{
		HX_STACK_LINE(908)
		Float val1 = val->z;		HX_STACK_VAR(val1,"val1");
		HX_STACK_LINE(908)
		::__hxcpp_memory_set_float(this1->buffer->b,(this1->byteOffset + (int)56),val1);
		HX_STACK_LINE(908)
		val1;
	}
	HX_STACK_LINE(909)
	::lime::math::Vector4 tmp = val;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(909)
	return tmp;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(Matrix4_Impl__obj,set_position,return )

Float Matrix4_Impl__obj::get( ::lime::utils::ArrayBufferView this1,int index){
	HX_STACK_FRAME("lime.math._Matrix4.Matrix4_Impl_","get",0x10b0bb0e,"lime.math._Matrix4.Matrix4_Impl_.get","lime/math/Matrix4.hx",914,0xeb65dbd8)
	HX_STACK_ARG(this1,"this1")
	HX_STACK_ARG(index,"index")
	HX_STACK_LINE(916)
	Float tmp = ::__hxcpp_memory_get_float(this1->buffer->b,(this1->byteOffset + (index * (int)4)));		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(916)
	return tmp;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(Matrix4_Impl__obj,get,return )

Float Matrix4_Impl__obj::set( ::lime::utils::ArrayBufferView this1,int index,Float value){
	HX_STACK_FRAME("lime.math._Matrix4.Matrix4_Impl_","set",0x10b9d61a,"lime.math._Matrix4.Matrix4_Impl_.set","lime/math/Matrix4.hx",921,0xeb65dbd8)
	HX_STACK_ARG(this1,"this1")
	HX_STACK_ARG(index,"index")
	HX_STACK_ARG(value,"value")
	HX_STACK_LINE(923)
	{
		HX_STACK_LINE(923)
		::__hxcpp_memory_set_float(this1->buffer->b,(this1->byteOffset + (index * (int)4)),value);
		HX_STACK_LINE(923)
		value;
	}
	HX_STACK_LINE(924)
	Float tmp = value;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(924)
	return tmp;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC3(Matrix4_Impl__obj,set,return )


Matrix4_Impl__obj::Matrix4_Impl__obj()
{
}

bool Matrix4_Impl__obj::__GetStatic(const ::String &inName, Dynamic &outValue, hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"get") ) { outValue = get_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"set") ) { outValue = set_dyn(); return true;  }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"_new") ) { outValue = _new_dyn(); return true;  }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"clone") ) { outValue = clone_dyn(); return true;  }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"append") ) { outValue = append_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"invert") ) { outValue = invert_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"__swap") ) { outValue = __swap_dyn(); return true;  }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"pointAt") ) { outValue = pointAt_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"prepend") ) { outValue = prepend_dyn(); return true;  }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"copyFrom") ) { outValue = copyFrom_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"create2D") ) { outValue = create2D_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"identity") ) { outValue = identity_dyn(); return true;  }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"copyRowTo") ) { outValue = copyRowTo_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"transpose") ) { outValue = transpose_dyn(); return true;  }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"copythisTo") ) { outValue = copythisTo_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"createABCD") ) { outValue = createABCD_dyn(); return true;  }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"appendScale") ) { outValue = appendScale_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"copyRowFrom") ) { outValue = copyRowFrom_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"createOrtho") ) { outValue = createOrtho_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"interpolate") ) { outValue = interpolate_dyn(); return true;  }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"copyColumnTo") ) { outValue = copyColumnTo_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"copythisFrom") ) { outValue = copythisFrom_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"prependScale") ) { outValue = prependScale_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"get_position") ) { outValue = get_position_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"set_position") ) { outValue = set_position_dyn(); return true;  }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"copyToMatrix4") ) { outValue = copyToMatrix4_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"interpolateTo") ) { outValue = interpolateTo_dyn(); return true;  }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"appendRotation") ) { outValue = appendRotation_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"copyColumnFrom") ) { outValue = copyColumnFrom_dyn(); return true;  }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"prependRotation") ) { outValue = prependRotation_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"transformVector") ) { outValue = transformVector_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"get_determinant") ) { outValue = get_determinant_dyn(); return true;  }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"transformVectors") ) { outValue = transformVectors_dyn(); return true;  }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"appendTranslation") ) { outValue = appendTranslation_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"__getAxisRotation") ) { outValue = __getAxisRotation_dyn(); return true;  }
		break;
	case 18:
		if (HX_FIELD_EQ(inName,"prependTranslation") ) { outValue = prependTranslation_dyn(); return true;  }
		break;
	case 20:
		if (HX_FIELD_EQ(inName,"deltaTransformVector") ) { outValue = deltaTransformVector_dyn(); return true;  }
	}
	return false;
}

#if HXCPP_SCRIPTABLE
static hx::StorageInfo *sMemberStorageInfo = 0;
static hx::StaticInfo sStaticStorageInfo[] = {
	{hx::fsObject /*Array< Float >*/ ,(void *) &Matrix4_Impl__obj::__identity,HX_HCSTRING("__identity","\x5e","\xb8","\x67","\x5c")},
	{ hx::fsUnknown, 0, null()}
};
#endif

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(Matrix4_Impl__obj::__mClass,"__mClass");
	HX_MARK_MEMBER_NAME(Matrix4_Impl__obj::__identity,"__identity");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(Matrix4_Impl__obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(Matrix4_Impl__obj::__identity,"__identity");
};

#endif

hx::Class Matrix4_Impl__obj::__mClass;

static ::String sStaticFields[] = {
	HX_HCSTRING("__identity","\x5e","\xb8","\x67","\x5c"),
	HX_HCSTRING("_new","\x61","\x15","\x1f","\x3f"),
	HX_HCSTRING("append","\xda","\xe1","\xd3","\x8f"),
	HX_HCSTRING("appendRotation","\x38","\x45","\xe8","\xcb"),
	HX_HCSTRING("appendScale","\x50","\x66","\x45","\xb5"),
	HX_HCSTRING("appendTranslation","\x37","\xe1","\x3d","\xd6"),
	HX_HCSTRING("clone","\x5d","\x13","\x63","\x48"),
	HX_HCSTRING("copyColumnFrom","\x75","\x97","\xb5","\x3a"),
	HX_HCSTRING("copyColumnTo","\xc6","\x2e","\xf6","\xf6"),
	HX_HCSTRING("copyFrom","\xbf","\x0b","\x61","\xc8"),
	HX_HCSTRING("copythisFrom","\x9d","\x57","\xe4","\x52"),
	HX_HCSTRING("copythisTo","\xee","\x14","\x01","\x0a"),
	HX_HCSTRING("copyRowFrom","\x6f","\x45","\x8b","\xef"),
	HX_HCSTRING("create2D","\xce","\x49","\xf4","\x2b"),
	HX_HCSTRING("createABCD","\xbe","\xc2","\xdd","\x52"),
	HX_HCSTRING("createOrtho","\x9c","\x4e","\xa8","\x5e"),
	HX_HCSTRING("copyRowTo","\x40","\x8a","\x62","\x73"),
	HX_HCSTRING("copyToMatrix4","\x23","\x00","\xc1","\x24"),
	HX_HCSTRING("deltaTransformVector","\x37","\x02","\x9c","\xc2"),
	HX_HCSTRING("identity","\x3e","\x45","\x2f","\xb9"),
	HX_HCSTRING("interpolate","\xc1","\xd4","\x32","\x1f"),
	HX_HCSTRING("interpolateTo","\x9c","\x90","\x22","\x71"),
	HX_HCSTRING("invert","\x16","\xe7","\xd8","\x9f"),
	HX_HCSTRING("pointAt","\x63","\xa1","\x21","\x51"),
	HX_HCSTRING("prepend","\x0e","\x97","\xe0","\x37"),
	HX_HCSTRING("prependRotation","\x6c","\x4e","\x3b","\xe8"),
	HX_HCSTRING("prependScale","\x9c","\x54","\x97","\xc4"),
	HX_HCSTRING("prependTranslation","\x83","\x90","\x15","\x05"),
	HX_HCSTRING("transformVector","\x4f","\x2b","\xb3","\xd2"),
	HX_HCSTRING("transformVectors","\x44","\xba","\x12","\x8a"),
	HX_HCSTRING("transpose","\x79","\x50","\x2f","\x4c"),
	HX_HCSTRING("__getAxisRotation","\x95","\xa5","\x44","\x7b"),
	HX_HCSTRING("__swap","\xb3","\x8d","\x56","\xfb"),
	HX_HCSTRING("get_determinant","\x2c","\x15","\xf7","\xf2"),
	HX_HCSTRING("get_position","\xb2","\x54","\x14","\x80"),
	HX_HCSTRING("set_position","\x26","\x78","\x0d","\x95"),
	HX_HCSTRING("get","\x96","\x80","\x4e","\x00"),
	HX_HCSTRING("set","\xa2","\x9b","\x57","\x00"),
	::String(null()) };

void Matrix4_Impl__obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("lime.math._Matrix4.Matrix4_Impl_","\xe6","\xfe","\xf9","\xcb");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &Matrix4_Impl__obj::__GetStatic;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(sStaticFields);
	__mClass->mMembers = hx::Class_obj::dupFunctions(0 /* sMemberFields */);
	__mClass->mCanCast = hx::TCanCast< Matrix4_Impl__obj >;
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

void Matrix4_Impl__obj::__boot()
{
	__identity= Array_obj< Float >::__new().Add(((Float)1.0)).Add(((Float)0.0)).Add(((Float)0.0)).Add(((Float)0.0)).Add(((Float)0.0)).Add(((Float)1.0)).Add(((Float)0.0)).Add(((Float)0.0)).Add(((Float)0.0)).Add(((Float)0.0)).Add(((Float)1.0)).Add(((Float)0.0)).Add(((Float)0.0)).Add(((Float)0.0)).Add(((Float)0.0)).Add(((Float)1.0));
}

} // end namespace lime
} // end namespace math
} // end namespace _Matrix4
