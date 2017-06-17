#include <hxcpp.h>

#ifndef INCLUDED_Std
#include <Std.h>
#endif
#ifndef INCLUDED_haxe_io_Bytes
#include <haxe/io/Bytes.h>
#endif
#ifndef INCLUDED_lime_utils_ArrayBufferIO
#include <lime/utils/ArrayBufferIO.h>
#endif
#ifndef INCLUDED_lime_utils_ArrayBufferView
#include <lime/utils/ArrayBufferView.h>
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
#ifndef INCLUDED_openfl__Vector_IntVector
#include <openfl/_Vector/IntVector.h>
#endif
namespace lime{
namespace utils{

Void ArrayBufferView_obj::__construct(Dynamic elements,int in_type)
{
{
	this->bytesPerElement = (int)0;
	this->type = (int)0;
	this->type = in_type;
	int tmp = this->type;
	int tmp1;
	switch( (int)(tmp)){
		case (int)1: {
			tmp1 = (int)1;
		}
		;break;
		case (int)4: {
			tmp1 = (int)1;
		}
		;break;
		case (int)5: {
			tmp1 = (int)1;
		}
		;break;
		case (int)2: {
			tmp1 = (int)2;
		}
		;break;
		case (int)6: {
			tmp1 = (int)2;
		}
		;break;
		case (int)3: {
			tmp1 = (int)4;
		}
		;break;
		case (int)7: {
			tmp1 = (int)4;
		}
		;break;
		case (int)8: {
			tmp1 = (int)4;
		}
		;break;
		case (int)9: {
			tmp1 = (int)8;
		}
		;break;
		default: {
			tmp1 = (int)1;
		}
	}
	this->bytesPerElement = tmp1;
	bool tmp2 = (elements != null());
	bool tmp3;
	if ((tmp2)){
		tmp3 = (elements != (int)0);
	}
	else{
		tmp3 = false;
	}
	if ((tmp3)){
		bool tmp4 = (elements < (int)0);
		if ((tmp4)){
			elements = (int)0;
		}
		this->byteOffset = (int)0;
		int tmp5;
		{
			int elemCount = elements;
			int tmp6 = elemCount;
			int tmp7 = this->bytesPerElement;
			tmp5 = (tmp6 * tmp7);
		}
		this->byteLength = tmp5;
		::haxe::io::Bytes tmp6;
		{
			::haxe::io::Bytes this1;
			int tmp7 = this->byteLength;
			::haxe::io::Bytes tmp8 = ::haxe::io::Bytes_obj::alloc(tmp7);
			this1 = tmp8;
			tmp6 = this1;
		}
		this->buffer = tmp6;
		this->length = elements;
	}
}
;
	return null();
}

//ArrayBufferView_obj::~ArrayBufferView_obj() { }

Dynamic ArrayBufferView_obj::__CreateEmpty() { return  new ArrayBufferView_obj; }
hx::ObjectPtr< ArrayBufferView_obj > ArrayBufferView_obj::__new(Dynamic elements,int in_type)
{  hx::ObjectPtr< ArrayBufferView_obj > _result_ = new ArrayBufferView_obj();
	_result_->__construct(elements,in_type);
	return _result_;}

Dynamic ArrayBufferView_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< ArrayBufferView_obj > _result_ = new ArrayBufferView_obj();
	_result_->__construct(inArgs[0],inArgs[1]);
	return _result_;}

::lime::utils::ArrayBufferView ArrayBufferView_obj::subarray_lime_utils_Float64Array( int begin,Dynamic end){
	bool tmp = (end == null());
	if ((tmp)){
		int tmp1 = this->length;
		end = tmp1;
	}
	int tmp1 = (end - begin);
	int len = tmp1;
	int tmp2 = begin;
	int tmp3 = this->bytesPerElement;
	int tmp4 = (tmp2 * tmp3);
	int tmp5 = this->byteOffset;
	int tmp6 = (tmp4 + tmp5);
	int byte_offset = tmp6;
	::lime::utils::ArrayBufferView tmp7;
	{
		int tmp8 = this->type;
		int _g = tmp8;
		int tmp9 = _g;
		switch( (int)(tmp9)){
			case (int)1: {
				::haxe::io::Bytes tmp10 = this->buffer;
				::haxe::io::Bytes buffer = tmp10;
				::lime::utils::ArrayBufferView this1;
				bool tmp11 = false;
				if ((tmp11)){
					::lime::utils::ArrayBufferView tmp12 = ::lime::utils::ArrayBufferView_obj::__new(null(),(int)1);
					this1 = tmp12;
				}
				else{
					bool tmp12 = false;
					if ((tmp12)){
						::lime::utils::ArrayBufferView tmp13;
						{
							::lime::utils::ArrayBufferView tmp14 = ::lime::utils::ArrayBufferView_obj::__new((int)0,(int)1);
							::lime::utils::ArrayBufferView _this = tmp14;
							_this->byteOffset = (int)0;
							int tmp15 = hx::Throw(HX_CSTRING("Invalid field access on null object"));
							_this->length = tmp15;
							int tmp16 = (_this->length * _this->bytesPerElement);
							_this->byteLength = tmp16;
							::haxe::io::Bytes tmp17;
							{
								::haxe::io::Bytes this2;
								int tmp18 = _this->byteLength;
								::haxe::io::Bytes tmp19 = ::haxe::io::Bytes_obj::alloc(tmp18);
								this2 = tmp19;
								tmp17 = this2;
							}
							_this->buffer = tmp17;
							_this->copyFromArray(((Array< Float >)(null())),null());
							tmp13 = _this;
						}
						this1 = tmp13;
					}
					else{
						bool tmp13 = false;
						if ((tmp13)){
							::lime::utils::ArrayBufferView tmp14;
							{
								::lime::utils::ArrayBufferView tmp15 = ::lime::utils::ArrayBufferView_obj::__new((int)0,(int)1);
								::lime::utils::ArrayBufferView _this = tmp15;
								cpp::ArrayBase array = hx::Throw(HX_CSTRING("Invalid field access on null object"));
								_this->byteOffset = (int)0;
								_this->length = array->__Field(HX_HCSTRING("length","\xe6","\x94","\x07","\x9f"), hx::paccDynamic );
								int tmp16 = (_this->length * _this->bytesPerElement);
								_this->byteLength = tmp16;
								::haxe::io::Bytes tmp17;
								{
									::haxe::io::Bytes this2;
									int tmp18 = _this->byteLength;
									::haxe::io::Bytes tmp19 = ::haxe::io::Bytes_obj::alloc(tmp18);
									this2 = tmp19;
									tmp17 = this2;
								}
								_this->buffer = tmp17;
								_this->copyFromArray(((Array< Float >)(array)),null());
								tmp14 = _this;
							}
							this1 = tmp14;
						}
						else{
							bool tmp14 = false;
							if ((tmp14)){
								::lime::utils::ArrayBufferView tmp15;
								{
									::lime::utils::ArrayBufferView tmp16 = ::lime::utils::ArrayBufferView_obj::__new((int)0,(int)1);
									::lime::utils::ArrayBufferView _this = tmp16;
									::haxe::io::Bytes tmp17 = hx::Throw(HX_CSTRING("Invalid field access on null object"));
									::haxe::io::Bytes srcData = tmp17;
									int tmp18 = hx::Throw(HX_CSTRING("Invalid field access on null object"));
									int srcLength = tmp18;
									int tmp19 = hx::Throw(HX_CSTRING("Invalid field access on null object"));
									int srcByteOffset = tmp19;
									int tmp20 = hx::Throw(HX_CSTRING("Invalid field access on null object"));
									int srcElementSize = tmp20;
									int elementSize = _this->bytesPerElement;
									int tmp21 = hx::Throw(HX_CSTRING("Invalid field access on null object"));
									int tmp22 = _this->type;
									bool tmp23 = (tmp21 == tmp22);
									if ((tmp23)){
										int srcLength1 = srcData->length;
										int tmp24 = (srcLength1 - srcByteOffset);
										int cloneLength = tmp24;
										::haxe::io::Bytes tmp25;
										{
											::haxe::io::Bytes this2;
											int tmp26 = cloneLength;
											::haxe::io::Bytes tmp27 = ::haxe::io::Bytes_obj::alloc(tmp26);
											this2 = tmp27;
											tmp25 = this2;
										}
										_this->buffer = tmp25;
										::haxe::io::Bytes tmp26 = srcData;
										int tmp27 = srcByteOffset;
										int tmp28 = cloneLength;
										_this->buffer->blit((int)0,tmp26,tmp27,tmp28);
									}
									else{
										HX_STACK_DO_THROW(HX_HCSTRING("unimplemented","\x09","\x2f","\x74","\xb4"));
									}
									int tmp24 = (_this->bytesPerElement * srcLength);
									_this->byteLength = tmp24;
									_this->byteOffset = (int)0;
									_this->length = srcLength;
									tmp15 = _this;
								}
								this1 = tmp15;
							}
							else{
								bool tmp15 = (buffer != null());
								if ((tmp15)){
									::lime::utils::ArrayBufferView tmp16;
									{
										::lime::utils::ArrayBufferView tmp17 = ::lime::utils::ArrayBufferView_obj::__new((int)0,(int)1);
										::lime::utils::ArrayBufferView _this = tmp17;
										int in_byteOffset = byte_offset;
										bool tmp18 = (in_byteOffset < (int)0);
										if ((tmp18)){
											HX_STACK_DO_THROW(::lime::utils::TAError_obj::RangeError);
										}
										int tmp19 = hx::Mod(in_byteOffset,_this->bytesPerElement);
										bool tmp20 = (tmp19 != (int)0);
										if ((tmp20)){
											HX_STACK_DO_THROW(::lime::utils::TAError_obj::RangeError);
										}
										int bufferByteLength = buffer->length;
										int elementSize = _this->bytesPerElement;
										int newByteLength = bufferByteLength;
										bool tmp21 = (len == null());
										if ((tmp21)){
											int tmp22 = (bufferByteLength - in_byteOffset);
											newByteLength = tmp22;
											int tmp23 = hx::Mod(bufferByteLength,_this->bytesPerElement);
											bool tmp24 = (tmp23 != (int)0);
											if ((tmp24)){
												HX_STACK_DO_THROW(::lime::utils::TAError_obj::RangeError);
											}
											bool tmp25 = (newByteLength < (int)0);
											if ((tmp25)){
												HX_STACK_DO_THROW(::lime::utils::TAError_obj::RangeError);
											}
										}
										else{
											int tmp22 = (len * _this->bytesPerElement);
											newByteLength = tmp22;
											int tmp23 = (in_byteOffset + newByteLength);
											int newRange = tmp23;
											bool tmp24 = (newRange > bufferByteLength);
											if ((tmp24)){
												HX_STACK_DO_THROW(::lime::utils::TAError_obj::RangeError);
											}
										}
										_this->buffer = buffer;
										_this->byteOffset = in_byteOffset;
										_this->byteLength = newByteLength;
										Float tmp22 = (Float(newByteLength) / Float(_this->bytesPerElement));
										int tmp23 = ::Std_obj::_int(tmp22);
										_this->length = tmp23;
										tmp16 = _this;
									}
									this1 = tmp16;
								}
								else{
									HX_STACK_DO_THROW(HX_HCSTRING("Invalid constructor arguments for Int8Array","\x40","\x53","\xda","\x77"));
								}
							}
						}
					}
				}
				tmp7 = this1;
			}
			;break;
			case (int)2: {
				::haxe::io::Bytes tmp10 = this->buffer;
				::haxe::io::Bytes buffer = tmp10;
				::lime::utils::ArrayBufferView this1;
				bool tmp11 = false;
				if ((tmp11)){
					::lime::utils::ArrayBufferView tmp12 = ::lime::utils::ArrayBufferView_obj::__new(null(),(int)2);
					this1 = tmp12;
				}
				else{
					bool tmp12 = false;
					if ((tmp12)){
						::lime::utils::ArrayBufferView tmp13;
						{
							::lime::utils::ArrayBufferView tmp14 = ::lime::utils::ArrayBufferView_obj::__new((int)0,(int)2);
							::lime::utils::ArrayBufferView _this = tmp14;
							_this->byteOffset = (int)0;
							int tmp15 = hx::Throw(HX_CSTRING("Invalid field access on null object"));
							_this->length = tmp15;
							int tmp16 = (_this->length * _this->bytesPerElement);
							_this->byteLength = tmp16;
							::haxe::io::Bytes tmp17;
							{
								::haxe::io::Bytes this2;
								int tmp18 = _this->byteLength;
								::haxe::io::Bytes tmp19 = ::haxe::io::Bytes_obj::alloc(tmp18);
								this2 = tmp19;
								tmp17 = this2;
							}
							_this->buffer = tmp17;
							_this->copyFromArray(((Array< Float >)(null())),null());
							tmp13 = _this;
						}
						this1 = tmp13;
					}
					else{
						bool tmp13 = false;
						if ((tmp13)){
							::lime::utils::ArrayBufferView tmp14;
							{
								::lime::utils::ArrayBufferView tmp15 = ::lime::utils::ArrayBufferView_obj::__new((int)0,(int)2);
								::lime::utils::ArrayBufferView _this = tmp15;
								cpp::ArrayBase array = hx::Throw(HX_CSTRING("Invalid field access on null object"));
								_this->byteOffset = (int)0;
								_this->length = array->__Field(HX_HCSTRING("length","\xe6","\x94","\x07","\x9f"), hx::paccDynamic );
								int tmp16 = (_this->length * _this->bytesPerElement);
								_this->byteLength = tmp16;
								::haxe::io::Bytes tmp17;
								{
									::haxe::io::Bytes this2;
									int tmp18 = _this->byteLength;
									::haxe::io::Bytes tmp19 = ::haxe::io::Bytes_obj::alloc(tmp18);
									this2 = tmp19;
									tmp17 = this2;
								}
								_this->buffer = tmp17;
								_this->copyFromArray(((Array< Float >)(array)),null());
								tmp14 = _this;
							}
							this1 = tmp14;
						}
						else{
							bool tmp14 = false;
							if ((tmp14)){
								::lime::utils::ArrayBufferView tmp15;
								{
									::lime::utils::ArrayBufferView tmp16 = ::lime::utils::ArrayBufferView_obj::__new((int)0,(int)2);
									::lime::utils::ArrayBufferView _this = tmp16;
									::haxe::io::Bytes tmp17 = hx::Throw(HX_CSTRING("Invalid field access on null object"));
									::haxe::io::Bytes srcData = tmp17;
									int tmp18 = hx::Throw(HX_CSTRING("Invalid field access on null object"));
									int srcLength = tmp18;
									int tmp19 = hx::Throw(HX_CSTRING("Invalid field access on null object"));
									int srcByteOffset = tmp19;
									int tmp20 = hx::Throw(HX_CSTRING("Invalid field access on null object"));
									int srcElementSize = tmp20;
									int elementSize = _this->bytesPerElement;
									int tmp21 = hx::Throw(HX_CSTRING("Invalid field access on null object"));
									int tmp22 = _this->type;
									bool tmp23 = (tmp21 == tmp22);
									if ((tmp23)){
										int srcLength1 = srcData->length;
										int tmp24 = (srcLength1 - srcByteOffset);
										int cloneLength = tmp24;
										::haxe::io::Bytes tmp25;
										{
											::haxe::io::Bytes this2;
											int tmp26 = cloneLength;
											::haxe::io::Bytes tmp27 = ::haxe::io::Bytes_obj::alloc(tmp26);
											this2 = tmp27;
											tmp25 = this2;
										}
										_this->buffer = tmp25;
										::haxe::io::Bytes tmp26 = srcData;
										int tmp27 = srcByteOffset;
										int tmp28 = cloneLength;
										_this->buffer->blit((int)0,tmp26,tmp27,tmp28);
									}
									else{
										HX_STACK_DO_THROW(HX_HCSTRING("unimplemented","\x09","\x2f","\x74","\xb4"));
									}
									int tmp24 = (_this->bytesPerElement * srcLength);
									_this->byteLength = tmp24;
									_this->byteOffset = (int)0;
									_this->length = srcLength;
									tmp15 = _this;
								}
								this1 = tmp15;
							}
							else{
								bool tmp15 = (buffer != null());
								if ((tmp15)){
									::lime::utils::ArrayBufferView tmp16;
									{
										::lime::utils::ArrayBufferView tmp17 = ::lime::utils::ArrayBufferView_obj::__new((int)0,(int)2);
										::lime::utils::ArrayBufferView _this = tmp17;
										int in_byteOffset = byte_offset;
										bool tmp18 = (in_byteOffset < (int)0);
										if ((tmp18)){
											HX_STACK_DO_THROW(::lime::utils::TAError_obj::RangeError);
										}
										int tmp19 = hx::Mod(in_byteOffset,_this->bytesPerElement);
										bool tmp20 = (tmp19 != (int)0);
										if ((tmp20)){
											HX_STACK_DO_THROW(::lime::utils::TAError_obj::RangeError);
										}
										int bufferByteLength = buffer->length;
										int elementSize = _this->bytesPerElement;
										int newByteLength = bufferByteLength;
										bool tmp21 = (len == null());
										if ((tmp21)){
											int tmp22 = (bufferByteLength - in_byteOffset);
											newByteLength = tmp22;
											int tmp23 = hx::Mod(bufferByteLength,_this->bytesPerElement);
											bool tmp24 = (tmp23 != (int)0);
											if ((tmp24)){
												HX_STACK_DO_THROW(::lime::utils::TAError_obj::RangeError);
											}
											bool tmp25 = (newByteLength < (int)0);
											if ((tmp25)){
												HX_STACK_DO_THROW(::lime::utils::TAError_obj::RangeError);
											}
										}
										else{
											int tmp22 = (len * _this->bytesPerElement);
											newByteLength = tmp22;
											int tmp23 = (in_byteOffset + newByteLength);
											int newRange = tmp23;
											bool tmp24 = (newRange > bufferByteLength);
											if ((tmp24)){
												HX_STACK_DO_THROW(::lime::utils::TAError_obj::RangeError);
											}
										}
										_this->buffer = buffer;
										_this->byteOffset = in_byteOffset;
										_this->byteLength = newByteLength;
										Float tmp22 = (Float(newByteLength) / Float(_this->bytesPerElement));
										int tmp23 = ::Std_obj::_int(tmp22);
										_this->length = tmp23;
										tmp16 = _this;
									}
									this1 = tmp16;
								}
								else{
									HX_STACK_DO_THROW(HX_HCSTRING("Invalid constructor arguments for Int16Array","\x95","\xb2","\x95","\xa7"));
								}
							}
						}
					}
				}
				tmp7 = this1;
			}
			;break;
			case (int)3: {
				::haxe::io::Bytes tmp10 = this->buffer;
				::haxe::io::Bytes buffer = tmp10;
				::lime::utils::ArrayBufferView this1;
				bool tmp11 = false;
				if ((tmp11)){
					::lime::utils::ArrayBufferView tmp12 = ::lime::utils::ArrayBufferView_obj::__new(null(),(int)3);
					this1 = tmp12;
				}
				else{
					bool tmp12 = false;
					if ((tmp12)){
						::lime::utils::ArrayBufferView tmp13;
						{
							::lime::utils::ArrayBufferView tmp14 = ::lime::utils::ArrayBufferView_obj::__new((int)0,(int)3);
							::lime::utils::ArrayBufferView _this = tmp14;
							_this->byteOffset = (int)0;
							int tmp15 = hx::Throw(HX_CSTRING("Invalid field access on null object"));
							_this->length = tmp15;
							int tmp16 = (_this->length * _this->bytesPerElement);
							_this->byteLength = tmp16;
							::haxe::io::Bytes tmp17;
							{
								::haxe::io::Bytes this2;
								int tmp18 = _this->byteLength;
								::haxe::io::Bytes tmp19 = ::haxe::io::Bytes_obj::alloc(tmp18);
								this2 = tmp19;
								tmp17 = this2;
							}
							_this->buffer = tmp17;
							_this->copyFromArray(((Array< Float >)(null())),null());
							tmp13 = _this;
						}
						this1 = tmp13;
					}
					else{
						bool tmp13 = false;
						if ((tmp13)){
							::lime::utils::ArrayBufferView tmp14;
							{
								::lime::utils::ArrayBufferView tmp15 = ::lime::utils::ArrayBufferView_obj::__new((int)0,(int)3);
								::lime::utils::ArrayBufferView _this = tmp15;
								cpp::ArrayBase array = hx::Throw(HX_CSTRING("Invalid field access on null object"));
								_this->byteOffset = (int)0;
								_this->length = array->__Field(HX_HCSTRING("length","\xe6","\x94","\x07","\x9f"), hx::paccDynamic );
								int tmp16 = (_this->length * _this->bytesPerElement);
								_this->byteLength = tmp16;
								::haxe::io::Bytes tmp17;
								{
									::haxe::io::Bytes this2;
									int tmp18 = _this->byteLength;
									::haxe::io::Bytes tmp19 = ::haxe::io::Bytes_obj::alloc(tmp18);
									this2 = tmp19;
									tmp17 = this2;
								}
								_this->buffer = tmp17;
								_this->copyFromArray(((Array< Float >)(array)),null());
								tmp14 = _this;
							}
							this1 = tmp14;
						}
						else{
							bool tmp14 = false;
							if ((tmp14)){
								::lime::utils::ArrayBufferView tmp15;
								{
									::lime::utils::ArrayBufferView tmp16 = ::lime::utils::ArrayBufferView_obj::__new((int)0,(int)3);
									::lime::utils::ArrayBufferView _this = tmp16;
									::haxe::io::Bytes tmp17 = hx::Throw(HX_CSTRING("Invalid field access on null object"));
									::haxe::io::Bytes srcData = tmp17;
									int tmp18 = hx::Throw(HX_CSTRING("Invalid field access on null object"));
									int srcLength = tmp18;
									int tmp19 = hx::Throw(HX_CSTRING("Invalid field access on null object"));
									int srcByteOffset = tmp19;
									int tmp20 = hx::Throw(HX_CSTRING("Invalid field access on null object"));
									int srcElementSize = tmp20;
									int elementSize = _this->bytesPerElement;
									int tmp21 = hx::Throw(HX_CSTRING("Invalid field access on null object"));
									int tmp22 = _this->type;
									bool tmp23 = (tmp21 == tmp22);
									if ((tmp23)){
										int srcLength1 = srcData->length;
										int tmp24 = (srcLength1 - srcByteOffset);
										int cloneLength = tmp24;
										::haxe::io::Bytes tmp25;
										{
											::haxe::io::Bytes this2;
											int tmp26 = cloneLength;
											::haxe::io::Bytes tmp27 = ::haxe::io::Bytes_obj::alloc(tmp26);
											this2 = tmp27;
											tmp25 = this2;
										}
										_this->buffer = tmp25;
										::haxe::io::Bytes tmp26 = srcData;
										int tmp27 = srcByteOffset;
										int tmp28 = cloneLength;
										_this->buffer->blit((int)0,tmp26,tmp27,tmp28);
									}
									else{
										HX_STACK_DO_THROW(HX_HCSTRING("unimplemented","\x09","\x2f","\x74","\xb4"));
									}
									int tmp24 = (_this->bytesPerElement * srcLength);
									_this->byteLength = tmp24;
									_this->byteOffset = (int)0;
									_this->length = srcLength;
									tmp15 = _this;
								}
								this1 = tmp15;
							}
							else{
								bool tmp15 = (buffer != null());
								if ((tmp15)){
									::lime::utils::ArrayBufferView tmp16;
									{
										::lime::utils::ArrayBufferView tmp17 = ::lime::utils::ArrayBufferView_obj::__new((int)0,(int)3);
										::lime::utils::ArrayBufferView _this = tmp17;
										int in_byteOffset = byte_offset;
										bool tmp18 = (in_byteOffset < (int)0);
										if ((tmp18)){
											HX_STACK_DO_THROW(::lime::utils::TAError_obj::RangeError);
										}
										int tmp19 = hx::Mod(in_byteOffset,_this->bytesPerElement);
										bool tmp20 = (tmp19 != (int)0);
										if ((tmp20)){
											HX_STACK_DO_THROW(::lime::utils::TAError_obj::RangeError);
										}
										int bufferByteLength = buffer->length;
										int elementSize = _this->bytesPerElement;
										int newByteLength = bufferByteLength;
										bool tmp21 = (len == null());
										if ((tmp21)){
											int tmp22 = (bufferByteLength - in_byteOffset);
											newByteLength = tmp22;
											int tmp23 = hx::Mod(bufferByteLength,_this->bytesPerElement);
											bool tmp24 = (tmp23 != (int)0);
											if ((tmp24)){
												HX_STACK_DO_THROW(::lime::utils::TAError_obj::RangeError);
											}
											bool tmp25 = (newByteLength < (int)0);
											if ((tmp25)){
												HX_STACK_DO_THROW(::lime::utils::TAError_obj::RangeError);
											}
										}
										else{
											int tmp22 = (len * _this->bytesPerElement);
											newByteLength = tmp22;
											int tmp23 = (in_byteOffset + newByteLength);
											int newRange = tmp23;
											bool tmp24 = (newRange > bufferByteLength);
											if ((tmp24)){
												HX_STACK_DO_THROW(::lime::utils::TAError_obj::RangeError);
											}
										}
										_this->buffer = buffer;
										_this->byteOffset = in_byteOffset;
										_this->byteLength = newByteLength;
										Float tmp22 = (Float(newByteLength) / Float(_this->bytesPerElement));
										int tmp23 = ::Std_obj::_int(tmp22);
										_this->length = tmp23;
										tmp16 = _this;
									}
									this1 = tmp16;
								}
								else{
									HX_STACK_DO_THROW(HX_HCSTRING("Invalid constructor arguments for Int32Array","\x9b","\x2e","\x53","\x61"));
								}
							}
						}
					}
				}
				tmp7 = this1;
			}
			;break;
			case (int)4: {
				::haxe::io::Bytes tmp10 = this->buffer;
				::haxe::io::Bytes buffer = tmp10;
				::lime::utils::ArrayBufferView this1;
				bool tmp11 = false;
				if ((tmp11)){
					::lime::utils::ArrayBufferView tmp12 = ::lime::utils::ArrayBufferView_obj::__new(null(),(int)4);
					this1 = tmp12;
				}
				else{
					bool tmp12 = false;
					if ((tmp12)){
						::lime::utils::ArrayBufferView tmp13;
						{
							::lime::utils::ArrayBufferView tmp14 = ::lime::utils::ArrayBufferView_obj::__new((int)0,(int)4);
							::lime::utils::ArrayBufferView _this = tmp14;
							_this->byteOffset = (int)0;
							int tmp15 = hx::Throw(HX_CSTRING("Invalid field access on null object"));
							_this->length = tmp15;
							int tmp16 = (_this->length * _this->bytesPerElement);
							_this->byteLength = tmp16;
							::haxe::io::Bytes tmp17;
							{
								::haxe::io::Bytes this2;
								int tmp18 = _this->byteLength;
								::haxe::io::Bytes tmp19 = ::haxe::io::Bytes_obj::alloc(tmp18);
								this2 = tmp19;
								tmp17 = this2;
							}
							_this->buffer = tmp17;
							_this->copyFromArray(((Array< Float >)(null())),null());
							tmp13 = _this;
						}
						this1 = tmp13;
					}
					else{
						bool tmp13 = false;
						if ((tmp13)){
							::lime::utils::ArrayBufferView tmp14;
							{
								::lime::utils::ArrayBufferView tmp15 = ::lime::utils::ArrayBufferView_obj::__new((int)0,(int)4);
								::lime::utils::ArrayBufferView _this = tmp15;
								cpp::ArrayBase array = hx::Throw(HX_CSTRING("Invalid field access on null object"));
								_this->byteOffset = (int)0;
								_this->length = array->__Field(HX_HCSTRING("length","\xe6","\x94","\x07","\x9f"), hx::paccDynamic );
								int tmp16 = (_this->length * _this->bytesPerElement);
								_this->byteLength = tmp16;
								::haxe::io::Bytes tmp17;
								{
									::haxe::io::Bytes this2;
									int tmp18 = _this->byteLength;
									::haxe::io::Bytes tmp19 = ::haxe::io::Bytes_obj::alloc(tmp18);
									this2 = tmp19;
									tmp17 = this2;
								}
								_this->buffer = tmp17;
								_this->copyFromArray(((Array< Float >)(array)),null());
								tmp14 = _this;
							}
							this1 = tmp14;
						}
						else{
							bool tmp14 = false;
							if ((tmp14)){
								::lime::utils::ArrayBufferView tmp15;
								{
									::lime::utils::ArrayBufferView tmp16 = ::lime::utils::ArrayBufferView_obj::__new((int)0,(int)4);
									::lime::utils::ArrayBufferView _this = tmp16;
									::haxe::io::Bytes tmp17 = hx::Throw(HX_CSTRING("Invalid field access on null object"));
									::haxe::io::Bytes srcData = tmp17;
									int tmp18 = hx::Throw(HX_CSTRING("Invalid field access on null object"));
									int srcLength = tmp18;
									int tmp19 = hx::Throw(HX_CSTRING("Invalid field access on null object"));
									int srcByteOffset = tmp19;
									int tmp20 = hx::Throw(HX_CSTRING("Invalid field access on null object"));
									int srcElementSize = tmp20;
									int elementSize = _this->bytesPerElement;
									int tmp21 = hx::Throw(HX_CSTRING("Invalid field access on null object"));
									int tmp22 = _this->type;
									bool tmp23 = (tmp21 == tmp22);
									if ((tmp23)){
										int srcLength1 = srcData->length;
										int tmp24 = (srcLength1 - srcByteOffset);
										int cloneLength = tmp24;
										::haxe::io::Bytes tmp25;
										{
											::haxe::io::Bytes this2;
											int tmp26 = cloneLength;
											::haxe::io::Bytes tmp27 = ::haxe::io::Bytes_obj::alloc(tmp26);
											this2 = tmp27;
											tmp25 = this2;
										}
										_this->buffer = tmp25;
										::haxe::io::Bytes tmp26 = srcData;
										int tmp27 = srcByteOffset;
										int tmp28 = cloneLength;
										_this->buffer->blit((int)0,tmp26,tmp27,tmp28);
									}
									else{
										HX_STACK_DO_THROW(HX_HCSTRING("unimplemented","\x09","\x2f","\x74","\xb4"));
									}
									int tmp24 = (_this->bytesPerElement * srcLength);
									_this->byteLength = tmp24;
									_this->byteOffset = (int)0;
									_this->length = srcLength;
									tmp15 = _this;
								}
								this1 = tmp15;
							}
							else{
								bool tmp15 = (buffer != null());
								if ((tmp15)){
									::lime::utils::ArrayBufferView tmp16;
									{
										::lime::utils::ArrayBufferView tmp17 = ::lime::utils::ArrayBufferView_obj::__new((int)0,(int)4);
										::lime::utils::ArrayBufferView _this = tmp17;
										int in_byteOffset = byte_offset;
										bool tmp18 = (in_byteOffset < (int)0);
										if ((tmp18)){
											HX_STACK_DO_THROW(::lime::utils::TAError_obj::RangeError);
										}
										int tmp19 = hx::Mod(in_byteOffset,_this->bytesPerElement);
										bool tmp20 = (tmp19 != (int)0);
										if ((tmp20)){
											HX_STACK_DO_THROW(::lime::utils::TAError_obj::RangeError);
										}
										int bufferByteLength = buffer->length;
										int elementSize = _this->bytesPerElement;
										int newByteLength = bufferByteLength;
										bool tmp21 = (len == null());
										if ((tmp21)){
											int tmp22 = (bufferByteLength - in_byteOffset);
											newByteLength = tmp22;
											int tmp23 = hx::Mod(bufferByteLength,_this->bytesPerElement);
											bool tmp24 = (tmp23 != (int)0);
											if ((tmp24)){
												HX_STACK_DO_THROW(::lime::utils::TAError_obj::RangeError);
											}
											bool tmp25 = (newByteLength < (int)0);
											if ((tmp25)){
												HX_STACK_DO_THROW(::lime::utils::TAError_obj::RangeError);
											}
										}
										else{
											int tmp22 = (len * _this->bytesPerElement);
											newByteLength = tmp22;
											int tmp23 = (in_byteOffset + newByteLength);
											int newRange = tmp23;
											bool tmp24 = (newRange > bufferByteLength);
											if ((tmp24)){
												HX_STACK_DO_THROW(::lime::utils::TAError_obj::RangeError);
											}
										}
										_this->buffer = buffer;
										_this->byteOffset = in_byteOffset;
										_this->byteLength = newByteLength;
										Float tmp22 = (Float(newByteLength) / Float(_this->bytesPerElement));
										int tmp23 = ::Std_obj::_int(tmp22);
										_this->length = tmp23;
										tmp16 = _this;
									}
									this1 = tmp16;
								}
								else{
									HX_STACK_DO_THROW(HX_HCSTRING("Invalid constructor arguments for UInt8Array","\x6b","\x44","\xd5","\x85"));
								}
							}
						}
					}
				}
				tmp7 = this1;
			}
			;break;
			case (int)5: {
				::haxe::io::Bytes tmp10 = this->buffer;
				::haxe::io::Bytes buffer = tmp10;
				::lime::utils::ArrayBufferView this1;
				bool tmp11 = false;
				if ((tmp11)){
					::lime::utils::ArrayBufferView tmp12 = ::lime::utils::ArrayBufferView_obj::__new(null(),(int)5);
					this1 = tmp12;
				}
				else{
					bool tmp12 = false;
					if ((tmp12)){
						::lime::utils::ArrayBufferView tmp13;
						{
							::lime::utils::ArrayBufferView tmp14 = ::lime::utils::ArrayBufferView_obj::__new((int)0,(int)5);
							::lime::utils::ArrayBufferView _this = tmp14;
							_this->byteOffset = (int)0;
							int tmp15 = hx::Throw(HX_CSTRING("Invalid field access on null object"));
							_this->length = tmp15;
							int tmp16 = (_this->length * _this->bytesPerElement);
							_this->byteLength = tmp16;
							::haxe::io::Bytes tmp17;
							{
								::haxe::io::Bytes this2;
								int tmp18 = _this->byteLength;
								::haxe::io::Bytes tmp19 = ::haxe::io::Bytes_obj::alloc(tmp18);
								this2 = tmp19;
								tmp17 = this2;
							}
							_this->buffer = tmp17;
							_this->copyFromArray(((Array< Float >)(null())),null());
							tmp13 = _this;
						}
						this1 = tmp13;
					}
					else{
						bool tmp13 = false;
						if ((tmp13)){
							::lime::utils::ArrayBufferView tmp14;
							{
								::lime::utils::ArrayBufferView tmp15 = ::lime::utils::ArrayBufferView_obj::__new((int)0,(int)5);
								::lime::utils::ArrayBufferView _this = tmp15;
								cpp::ArrayBase array = hx::Throw(HX_CSTRING("Invalid field access on null object"));
								_this->byteOffset = (int)0;
								_this->length = array->__Field(HX_HCSTRING("length","\xe6","\x94","\x07","\x9f"), hx::paccDynamic );
								int tmp16 = (_this->length * _this->bytesPerElement);
								_this->byteLength = tmp16;
								::haxe::io::Bytes tmp17;
								{
									::haxe::io::Bytes this2;
									int tmp18 = _this->byteLength;
									::haxe::io::Bytes tmp19 = ::haxe::io::Bytes_obj::alloc(tmp18);
									this2 = tmp19;
									tmp17 = this2;
								}
								_this->buffer = tmp17;
								_this->copyFromArray(((Array< Float >)(array)),null());
								tmp14 = _this;
							}
							this1 = tmp14;
						}
						else{
							bool tmp14 = false;
							if ((tmp14)){
								::lime::utils::ArrayBufferView tmp15;
								{
									::lime::utils::ArrayBufferView tmp16 = ::lime::utils::ArrayBufferView_obj::__new((int)0,(int)5);
									::lime::utils::ArrayBufferView _this = tmp16;
									::haxe::io::Bytes tmp17 = hx::Throw(HX_CSTRING("Invalid field access on null object"));
									::haxe::io::Bytes srcData = tmp17;
									int tmp18 = hx::Throw(HX_CSTRING("Invalid field access on null object"));
									int srcLength = tmp18;
									int tmp19 = hx::Throw(HX_CSTRING("Invalid field access on null object"));
									int srcByteOffset = tmp19;
									int tmp20 = hx::Throw(HX_CSTRING("Invalid field access on null object"));
									int srcElementSize = tmp20;
									int elementSize = _this->bytesPerElement;
									int tmp21 = hx::Throw(HX_CSTRING("Invalid field access on null object"));
									int tmp22 = _this->type;
									bool tmp23 = (tmp21 == tmp22);
									if ((tmp23)){
										int srcLength1 = srcData->length;
										int tmp24 = (srcLength1 - srcByteOffset);
										int cloneLength = tmp24;
										::haxe::io::Bytes tmp25;
										{
											::haxe::io::Bytes this2;
											int tmp26 = cloneLength;
											::haxe::io::Bytes tmp27 = ::haxe::io::Bytes_obj::alloc(tmp26);
											this2 = tmp27;
											tmp25 = this2;
										}
										_this->buffer = tmp25;
										::haxe::io::Bytes tmp26 = srcData;
										int tmp27 = srcByteOffset;
										int tmp28 = cloneLength;
										_this->buffer->blit((int)0,tmp26,tmp27,tmp28);
									}
									else{
										HX_STACK_DO_THROW(HX_HCSTRING("unimplemented","\x09","\x2f","\x74","\xb4"));
									}
									int tmp24 = (_this->bytesPerElement * srcLength);
									_this->byteLength = tmp24;
									_this->byteOffset = (int)0;
									_this->length = srcLength;
									tmp15 = _this;
								}
								this1 = tmp15;
							}
							else{
								bool tmp15 = (buffer != null());
								if ((tmp15)){
									::lime::utils::ArrayBufferView tmp16;
									{
										::lime::utils::ArrayBufferView tmp17 = ::lime::utils::ArrayBufferView_obj::__new((int)0,(int)5);
										::lime::utils::ArrayBufferView _this = tmp17;
										int in_byteOffset = byte_offset;
										bool tmp18 = (in_byteOffset < (int)0);
										if ((tmp18)){
											HX_STACK_DO_THROW(::lime::utils::TAError_obj::RangeError);
										}
										int tmp19 = hx::Mod(in_byteOffset,_this->bytesPerElement);
										bool tmp20 = (tmp19 != (int)0);
										if ((tmp20)){
											HX_STACK_DO_THROW(::lime::utils::TAError_obj::RangeError);
										}
										int bufferByteLength = buffer->length;
										int elementSize = _this->bytesPerElement;
										int newByteLength = bufferByteLength;
										bool tmp21 = (len == null());
										if ((tmp21)){
											int tmp22 = (bufferByteLength - in_byteOffset);
											newByteLength = tmp22;
											int tmp23 = hx::Mod(bufferByteLength,_this->bytesPerElement);
											bool tmp24 = (tmp23 != (int)0);
											if ((tmp24)){
												HX_STACK_DO_THROW(::lime::utils::TAError_obj::RangeError);
											}
											bool tmp25 = (newByteLength < (int)0);
											if ((tmp25)){
												HX_STACK_DO_THROW(::lime::utils::TAError_obj::RangeError);
											}
										}
										else{
											int tmp22 = (len * _this->bytesPerElement);
											newByteLength = tmp22;
											int tmp23 = (in_byteOffset + newByteLength);
											int newRange = tmp23;
											bool tmp24 = (newRange > bufferByteLength);
											if ((tmp24)){
												HX_STACK_DO_THROW(::lime::utils::TAError_obj::RangeError);
											}
										}
										_this->buffer = buffer;
										_this->byteOffset = in_byteOffset;
										_this->byteLength = newByteLength;
										Float tmp22 = (Float(newByteLength) / Float(_this->bytesPerElement));
										int tmp23 = ::Std_obj::_int(tmp22);
										_this->length = tmp23;
										tmp16 = _this;
									}
									this1 = tmp16;
								}
								else{
									HX_STACK_DO_THROW(HX_HCSTRING("Invalid constructor arguments for UInt8ClampedArray","\x8d","\x06","\x77","\x13"));
								}
							}
						}
					}
				}
				tmp7 = this1;
			}
			;break;
			case (int)6: {
				::haxe::io::Bytes tmp10 = this->buffer;
				::haxe::io::Bytes buffer = tmp10;
				::lime::utils::ArrayBufferView this1;
				bool tmp11 = false;
				if ((tmp11)){
					::lime::utils::ArrayBufferView tmp12 = ::lime::utils::ArrayBufferView_obj::__new(null(),(int)6);
					this1 = tmp12;
				}
				else{
					bool tmp12 = false;
					if ((tmp12)){
						::lime::utils::ArrayBufferView tmp13;
						{
							::lime::utils::ArrayBufferView tmp14 = ::lime::utils::ArrayBufferView_obj::__new((int)0,(int)6);
							::lime::utils::ArrayBufferView _this = tmp14;
							_this->byteOffset = (int)0;
							int tmp15 = hx::Throw(HX_CSTRING("Invalid field access on null object"));
							_this->length = tmp15;
							int tmp16 = (_this->length * _this->bytesPerElement);
							_this->byteLength = tmp16;
							::haxe::io::Bytes tmp17;
							{
								::haxe::io::Bytes this2;
								int tmp18 = _this->byteLength;
								::haxe::io::Bytes tmp19 = ::haxe::io::Bytes_obj::alloc(tmp18);
								this2 = tmp19;
								tmp17 = this2;
							}
							_this->buffer = tmp17;
							_this->copyFromArray(((Array< Float >)(null())),null());
							tmp13 = _this;
						}
						this1 = tmp13;
					}
					else{
						bool tmp13 = false;
						if ((tmp13)){
							::lime::utils::ArrayBufferView tmp14;
							{
								::lime::utils::ArrayBufferView tmp15 = ::lime::utils::ArrayBufferView_obj::__new((int)0,(int)6);
								::lime::utils::ArrayBufferView _this = tmp15;
								cpp::ArrayBase array = hx::Throw(HX_CSTRING("Invalid field access on null object"));
								_this->byteOffset = (int)0;
								_this->length = array->__Field(HX_HCSTRING("length","\xe6","\x94","\x07","\x9f"), hx::paccDynamic );
								int tmp16 = (_this->length * _this->bytesPerElement);
								_this->byteLength = tmp16;
								::haxe::io::Bytes tmp17;
								{
									::haxe::io::Bytes this2;
									int tmp18 = _this->byteLength;
									::haxe::io::Bytes tmp19 = ::haxe::io::Bytes_obj::alloc(tmp18);
									this2 = tmp19;
									tmp17 = this2;
								}
								_this->buffer = tmp17;
								_this->copyFromArray(((Array< Float >)(array)),null());
								tmp14 = _this;
							}
							this1 = tmp14;
						}
						else{
							bool tmp14 = false;
							if ((tmp14)){
								::lime::utils::ArrayBufferView tmp15;
								{
									::lime::utils::ArrayBufferView tmp16 = ::lime::utils::ArrayBufferView_obj::__new((int)0,(int)6);
									::lime::utils::ArrayBufferView _this = tmp16;
									::haxe::io::Bytes tmp17 = hx::Throw(HX_CSTRING("Invalid field access on null object"));
									::haxe::io::Bytes srcData = tmp17;
									int tmp18 = hx::Throw(HX_CSTRING("Invalid field access on null object"));
									int srcLength = tmp18;
									int tmp19 = hx::Throw(HX_CSTRING("Invalid field access on null object"));
									int srcByteOffset = tmp19;
									int tmp20 = hx::Throw(HX_CSTRING("Invalid field access on null object"));
									int srcElementSize = tmp20;
									int elementSize = _this->bytesPerElement;
									int tmp21 = hx::Throw(HX_CSTRING("Invalid field access on null object"));
									int tmp22 = _this->type;
									bool tmp23 = (tmp21 == tmp22);
									if ((tmp23)){
										int srcLength1 = srcData->length;
										int tmp24 = (srcLength1 - srcByteOffset);
										int cloneLength = tmp24;
										::haxe::io::Bytes tmp25;
										{
											::haxe::io::Bytes this2;
											int tmp26 = cloneLength;
											::haxe::io::Bytes tmp27 = ::haxe::io::Bytes_obj::alloc(tmp26);
											this2 = tmp27;
											tmp25 = this2;
										}
										_this->buffer = tmp25;
										::haxe::io::Bytes tmp26 = srcData;
										int tmp27 = srcByteOffset;
										int tmp28 = cloneLength;
										_this->buffer->blit((int)0,tmp26,tmp27,tmp28);
									}
									else{
										HX_STACK_DO_THROW(HX_HCSTRING("unimplemented","\x09","\x2f","\x74","\xb4"));
									}
									int tmp24 = (_this->bytesPerElement * srcLength);
									_this->byteLength = tmp24;
									_this->byteOffset = (int)0;
									_this->length = srcLength;
									tmp15 = _this;
								}
								this1 = tmp15;
							}
							else{
								bool tmp15 = (buffer != null());
								if ((tmp15)){
									::lime::utils::ArrayBufferView tmp16;
									{
										::lime::utils::ArrayBufferView tmp17 = ::lime::utils::ArrayBufferView_obj::__new((int)0,(int)6);
										::lime::utils::ArrayBufferView _this = tmp17;
										int in_byteOffset = byte_offset;
										bool tmp18 = (in_byteOffset < (int)0);
										if ((tmp18)){
											HX_STACK_DO_THROW(::lime::utils::TAError_obj::RangeError);
										}
										int tmp19 = hx::Mod(in_byteOffset,_this->bytesPerElement);
										bool tmp20 = (tmp19 != (int)0);
										if ((tmp20)){
											HX_STACK_DO_THROW(::lime::utils::TAError_obj::RangeError);
										}
										int bufferByteLength = buffer->length;
										int elementSize = _this->bytesPerElement;
										int newByteLength = bufferByteLength;
										bool tmp21 = (len == null());
										if ((tmp21)){
											int tmp22 = (bufferByteLength - in_byteOffset);
											newByteLength = tmp22;
											int tmp23 = hx::Mod(bufferByteLength,_this->bytesPerElement);
											bool tmp24 = (tmp23 != (int)0);
											if ((tmp24)){
												HX_STACK_DO_THROW(::lime::utils::TAError_obj::RangeError);
											}
											bool tmp25 = (newByteLength < (int)0);
											if ((tmp25)){
												HX_STACK_DO_THROW(::lime::utils::TAError_obj::RangeError);
											}
										}
										else{
											int tmp22 = (len * _this->bytesPerElement);
											newByteLength = tmp22;
											int tmp23 = (in_byteOffset + newByteLength);
											int newRange = tmp23;
											bool tmp24 = (newRange > bufferByteLength);
											if ((tmp24)){
												HX_STACK_DO_THROW(::lime::utils::TAError_obj::RangeError);
											}
										}
										_this->buffer = buffer;
										_this->byteOffset = in_byteOffset;
										_this->byteLength = newByteLength;
										Float tmp22 = (Float(newByteLength) / Float(_this->bytesPerElement));
										int tmp23 = ::Std_obj::_int(tmp22);
										_this->length = tmp23;
										tmp16 = _this;
									}
									this1 = tmp16;
								}
								else{
									HX_STACK_DO_THROW(HX_HCSTRING("Invalid constructor arguments for UInt16Array","\x0a","\xc7","\x2d","\xd5"));
								}
							}
						}
					}
				}
				tmp7 = this1;
			}
			;break;
			case (int)7: {
				::haxe::io::Bytes tmp10 = this->buffer;
				::haxe::io::Bytes buffer = tmp10;
				::lime::utils::ArrayBufferView this1;
				bool tmp11 = false;
				if ((tmp11)){
					::lime::utils::ArrayBufferView tmp12 = ::lime::utils::ArrayBufferView_obj::__new(null(),(int)7);
					this1 = tmp12;
				}
				else{
					bool tmp12 = false;
					if ((tmp12)){
						::lime::utils::ArrayBufferView tmp13;
						{
							::lime::utils::ArrayBufferView tmp14 = ::lime::utils::ArrayBufferView_obj::__new((int)0,(int)7);
							::lime::utils::ArrayBufferView _this = tmp14;
							_this->byteOffset = (int)0;
							int tmp15 = hx::Throw(HX_CSTRING("Invalid field access on null object"));
							_this->length = tmp15;
							int tmp16 = (_this->length * _this->bytesPerElement);
							_this->byteLength = tmp16;
							::haxe::io::Bytes tmp17;
							{
								::haxe::io::Bytes this2;
								int tmp18 = _this->byteLength;
								::haxe::io::Bytes tmp19 = ::haxe::io::Bytes_obj::alloc(tmp18);
								this2 = tmp19;
								tmp17 = this2;
							}
							_this->buffer = tmp17;
							_this->copyFromArray(((Array< Float >)(null())),null());
							tmp13 = _this;
						}
						this1 = tmp13;
					}
					else{
						bool tmp13 = false;
						if ((tmp13)){
							::lime::utils::ArrayBufferView tmp14;
							{
								::lime::utils::ArrayBufferView tmp15 = ::lime::utils::ArrayBufferView_obj::__new((int)0,(int)7);
								::lime::utils::ArrayBufferView _this = tmp15;
								cpp::ArrayBase array = hx::Throw(HX_CSTRING("Invalid field access on null object"));
								_this->byteOffset = (int)0;
								_this->length = array->__Field(HX_HCSTRING("length","\xe6","\x94","\x07","\x9f"), hx::paccDynamic );
								int tmp16 = (_this->length * _this->bytesPerElement);
								_this->byteLength = tmp16;
								::haxe::io::Bytes tmp17;
								{
									::haxe::io::Bytes this2;
									int tmp18 = _this->byteLength;
									::haxe::io::Bytes tmp19 = ::haxe::io::Bytes_obj::alloc(tmp18);
									this2 = tmp19;
									tmp17 = this2;
								}
								_this->buffer = tmp17;
								_this->copyFromArray(((Array< Float >)(array)),null());
								tmp14 = _this;
							}
							this1 = tmp14;
						}
						else{
							bool tmp14 = false;
							if ((tmp14)){
								::lime::utils::ArrayBufferView tmp15;
								{
									::lime::utils::ArrayBufferView tmp16 = ::lime::utils::ArrayBufferView_obj::__new((int)0,(int)7);
									::lime::utils::ArrayBufferView _this = tmp16;
									::haxe::io::Bytes tmp17 = hx::Throw(HX_CSTRING("Invalid field access on null object"));
									::haxe::io::Bytes srcData = tmp17;
									int tmp18 = hx::Throw(HX_CSTRING("Invalid field access on null object"));
									int srcLength = tmp18;
									int tmp19 = hx::Throw(HX_CSTRING("Invalid field access on null object"));
									int srcByteOffset = tmp19;
									int tmp20 = hx::Throw(HX_CSTRING("Invalid field access on null object"));
									int srcElementSize = tmp20;
									int elementSize = _this->bytesPerElement;
									int tmp21 = hx::Throw(HX_CSTRING("Invalid field access on null object"));
									int tmp22 = _this->type;
									bool tmp23 = (tmp21 == tmp22);
									if ((tmp23)){
										int srcLength1 = srcData->length;
										int tmp24 = (srcLength1 - srcByteOffset);
										int cloneLength = tmp24;
										::haxe::io::Bytes tmp25;
										{
											::haxe::io::Bytes this2;
											int tmp26 = cloneLength;
											::haxe::io::Bytes tmp27 = ::haxe::io::Bytes_obj::alloc(tmp26);
											this2 = tmp27;
											tmp25 = this2;
										}
										_this->buffer = tmp25;
										::haxe::io::Bytes tmp26 = srcData;
										int tmp27 = srcByteOffset;
										int tmp28 = cloneLength;
										_this->buffer->blit((int)0,tmp26,tmp27,tmp28);
									}
									else{
										HX_STACK_DO_THROW(HX_HCSTRING("unimplemented","\x09","\x2f","\x74","\xb4"));
									}
									int tmp24 = (_this->bytesPerElement * srcLength);
									_this->byteLength = tmp24;
									_this->byteOffset = (int)0;
									_this->length = srcLength;
									tmp15 = _this;
								}
								this1 = tmp15;
							}
							else{
								bool tmp15 = (buffer != null());
								if ((tmp15)){
									::lime::utils::ArrayBufferView tmp16;
									{
										::lime::utils::ArrayBufferView tmp17 = ::lime::utils::ArrayBufferView_obj::__new((int)0,(int)7);
										::lime::utils::ArrayBufferView _this = tmp17;
										int in_byteOffset = byte_offset;
										bool tmp18 = (in_byteOffset < (int)0);
										if ((tmp18)){
											HX_STACK_DO_THROW(::lime::utils::TAError_obj::RangeError);
										}
										int tmp19 = hx::Mod(in_byteOffset,_this->bytesPerElement);
										bool tmp20 = (tmp19 != (int)0);
										if ((tmp20)){
											HX_STACK_DO_THROW(::lime::utils::TAError_obj::RangeError);
										}
										int bufferByteLength = buffer->length;
										int elementSize = _this->bytesPerElement;
										int newByteLength = bufferByteLength;
										bool tmp21 = (len == null());
										if ((tmp21)){
											int tmp22 = (bufferByteLength - in_byteOffset);
											newByteLength = tmp22;
											int tmp23 = hx::Mod(bufferByteLength,_this->bytesPerElement);
											bool tmp24 = (tmp23 != (int)0);
											if ((tmp24)){
												HX_STACK_DO_THROW(::lime::utils::TAError_obj::RangeError);
											}
											bool tmp25 = (newByteLength < (int)0);
											if ((tmp25)){
												HX_STACK_DO_THROW(::lime::utils::TAError_obj::RangeError);
											}
										}
										else{
											int tmp22 = (len * _this->bytesPerElement);
											newByteLength = tmp22;
											int tmp23 = (in_byteOffset + newByteLength);
											int newRange = tmp23;
											bool tmp24 = (newRange > bufferByteLength);
											if ((tmp24)){
												HX_STACK_DO_THROW(::lime::utils::TAError_obj::RangeError);
											}
										}
										_this->buffer = buffer;
										_this->byteOffset = in_byteOffset;
										_this->byteLength = newByteLength;
										Float tmp22 = (Float(newByteLength) / Float(_this->bytesPerElement));
										int tmp23 = ::Std_obj::_int(tmp22);
										_this->length = tmp23;
										tmp16 = _this;
									}
									this1 = tmp16;
								}
								else{
									HX_STACK_DO_THROW(HX_HCSTRING("Invalid constructor arguments for UInt32Array","\x10","\x43","\xeb","\x8e"));
								}
							}
						}
					}
				}
				tmp7 = this1;
			}
			;break;
			case (int)8: {
				::haxe::io::Bytes tmp10 = this->buffer;
				::haxe::io::Bytes buffer = tmp10;
				::lime::utils::ArrayBufferView this1;
				bool tmp11 = false;
				if ((tmp11)){
					::lime::utils::ArrayBufferView tmp12 = ::lime::utils::ArrayBufferView_obj::__new(null(),(int)8);
					this1 = tmp12;
				}
				else{
					bool tmp12 = false;
					if ((tmp12)){
						::lime::utils::ArrayBufferView tmp13;
						{
							::lime::utils::ArrayBufferView tmp14 = ::lime::utils::ArrayBufferView_obj::__new((int)0,(int)8);
							::lime::utils::ArrayBufferView _this = tmp14;
							_this->byteOffset = (int)0;
							int tmp15 = hx::Throw(HX_CSTRING("Invalid field access on null object"));
							_this->length = tmp15;
							int tmp16 = (_this->length * _this->bytesPerElement);
							_this->byteLength = tmp16;
							::haxe::io::Bytes tmp17;
							{
								::haxe::io::Bytes this2;
								int tmp18 = _this->byteLength;
								::haxe::io::Bytes tmp19 = ::haxe::io::Bytes_obj::alloc(tmp18);
								this2 = tmp19;
								tmp17 = this2;
							}
							_this->buffer = tmp17;
							_this->copyFromArray(((Array< Float >)(null())),null());
							tmp13 = _this;
						}
						this1 = tmp13;
					}
					else{
						bool tmp13 = false;
						if ((tmp13)){
							::lime::utils::ArrayBufferView tmp14;
							{
								::lime::utils::ArrayBufferView tmp15 = ::lime::utils::ArrayBufferView_obj::__new((int)0,(int)8);
								::lime::utils::ArrayBufferView _this = tmp15;
								cpp::ArrayBase array = hx::Throw(HX_CSTRING("Invalid field access on null object"));
								_this->byteOffset = (int)0;
								_this->length = array->__Field(HX_HCSTRING("length","\xe6","\x94","\x07","\x9f"), hx::paccDynamic );
								int tmp16 = (_this->length * _this->bytesPerElement);
								_this->byteLength = tmp16;
								::haxe::io::Bytes tmp17;
								{
									::haxe::io::Bytes this2;
									int tmp18 = _this->byteLength;
									::haxe::io::Bytes tmp19 = ::haxe::io::Bytes_obj::alloc(tmp18);
									this2 = tmp19;
									tmp17 = this2;
								}
								_this->buffer = tmp17;
								_this->copyFromArray(((Array< Float >)(array)),null());
								tmp14 = _this;
							}
							this1 = tmp14;
						}
						else{
							bool tmp14 = false;
							if ((tmp14)){
								::lime::utils::ArrayBufferView tmp15;
								{
									::lime::utils::ArrayBufferView tmp16 = ::lime::utils::ArrayBufferView_obj::__new((int)0,(int)8);
									::lime::utils::ArrayBufferView _this = tmp16;
									::haxe::io::Bytes tmp17 = hx::Throw(HX_CSTRING("Invalid field access on null object"));
									::haxe::io::Bytes srcData = tmp17;
									int tmp18 = hx::Throw(HX_CSTRING("Invalid field access on null object"));
									int srcLength = tmp18;
									int tmp19 = hx::Throw(HX_CSTRING("Invalid field access on null object"));
									int srcByteOffset = tmp19;
									int tmp20 = hx::Throw(HX_CSTRING("Invalid field access on null object"));
									int srcElementSize = tmp20;
									int elementSize = _this->bytesPerElement;
									int tmp21 = hx::Throw(HX_CSTRING("Invalid field access on null object"));
									int tmp22 = _this->type;
									bool tmp23 = (tmp21 == tmp22);
									if ((tmp23)){
										int srcLength1 = srcData->length;
										int tmp24 = (srcLength1 - srcByteOffset);
										int cloneLength = tmp24;
										::haxe::io::Bytes tmp25;
										{
											::haxe::io::Bytes this2;
											int tmp26 = cloneLength;
											::haxe::io::Bytes tmp27 = ::haxe::io::Bytes_obj::alloc(tmp26);
											this2 = tmp27;
											tmp25 = this2;
										}
										_this->buffer = tmp25;
										::haxe::io::Bytes tmp26 = srcData;
										int tmp27 = srcByteOffset;
										int tmp28 = cloneLength;
										_this->buffer->blit((int)0,tmp26,tmp27,tmp28);
									}
									else{
										HX_STACK_DO_THROW(HX_HCSTRING("unimplemented","\x09","\x2f","\x74","\xb4"));
									}
									int tmp24 = (_this->bytesPerElement * srcLength);
									_this->byteLength = tmp24;
									_this->byteOffset = (int)0;
									_this->length = srcLength;
									tmp15 = _this;
								}
								this1 = tmp15;
							}
							else{
								bool tmp15 = (buffer != null());
								if ((tmp15)){
									::lime::utils::ArrayBufferView tmp16;
									{
										::lime::utils::ArrayBufferView tmp17 = ::lime::utils::ArrayBufferView_obj::__new((int)0,(int)8);
										::lime::utils::ArrayBufferView _this = tmp17;
										int in_byteOffset = byte_offset;
										bool tmp18 = (in_byteOffset < (int)0);
										if ((tmp18)){
											HX_STACK_DO_THROW(::lime::utils::TAError_obj::RangeError);
										}
										int tmp19 = hx::Mod(in_byteOffset,_this->bytesPerElement);
										bool tmp20 = (tmp19 != (int)0);
										if ((tmp20)){
											HX_STACK_DO_THROW(::lime::utils::TAError_obj::RangeError);
										}
										int bufferByteLength = buffer->length;
										int elementSize = _this->bytesPerElement;
										int newByteLength = bufferByteLength;
										bool tmp21 = (len == null());
										if ((tmp21)){
											int tmp22 = (bufferByteLength - in_byteOffset);
											newByteLength = tmp22;
											int tmp23 = hx::Mod(bufferByteLength,_this->bytesPerElement);
											bool tmp24 = (tmp23 != (int)0);
											if ((tmp24)){
												HX_STACK_DO_THROW(::lime::utils::TAError_obj::RangeError);
											}
											bool tmp25 = (newByteLength < (int)0);
											if ((tmp25)){
												HX_STACK_DO_THROW(::lime::utils::TAError_obj::RangeError);
											}
										}
										else{
											int tmp22 = (len * _this->bytesPerElement);
											newByteLength = tmp22;
											int tmp23 = (in_byteOffset + newByteLength);
											int newRange = tmp23;
											bool tmp24 = (newRange > bufferByteLength);
											if ((tmp24)){
												HX_STACK_DO_THROW(::lime::utils::TAError_obj::RangeError);
											}
										}
										_this->buffer = buffer;
										_this->byteOffset = in_byteOffset;
										_this->byteLength = newByteLength;
										Float tmp22 = (Float(newByteLength) / Float(_this->bytesPerElement));
										int tmp23 = ::Std_obj::_int(tmp22);
										_this->length = tmp23;
										tmp16 = _this;
									}
									this1 = tmp16;
								}
								else{
									HX_STACK_DO_THROW(HX_HCSTRING("Invalid constructor arguments for Float32Array","\x8e","\xc1","\xf4","\xd4"));
								}
							}
						}
					}
				}
				tmp7 = this1;
			}
			;break;
			case (int)9: {
				::haxe::io::Bytes tmp10 = this->buffer;
				::haxe::io::Bytes buffer = tmp10;
				::lime::utils::ArrayBufferView this1;
				bool tmp11 = false;
				if ((tmp11)){
					::lime::utils::ArrayBufferView tmp12 = ::lime::utils::ArrayBufferView_obj::__new(null(),(int)9);
					this1 = tmp12;
				}
				else{
					bool tmp12 = false;
					if ((tmp12)){
						::lime::utils::ArrayBufferView tmp13;
						{
							::lime::utils::ArrayBufferView tmp14 = ::lime::utils::ArrayBufferView_obj::__new((int)0,(int)9);
							::lime::utils::ArrayBufferView _this = tmp14;
							_this->byteOffset = (int)0;
							int tmp15 = hx::Throw(HX_CSTRING("Invalid field access on null object"));
							_this->length = tmp15;
							int tmp16 = (_this->length * _this->bytesPerElement);
							_this->byteLength = tmp16;
							::haxe::io::Bytes tmp17;
							{
								::haxe::io::Bytes this2;
								int tmp18 = _this->byteLength;
								::haxe::io::Bytes tmp19 = ::haxe::io::Bytes_obj::alloc(tmp18);
								this2 = tmp19;
								tmp17 = this2;
							}
							_this->buffer = tmp17;
							_this->copyFromArray(((Array< Float >)(null())),null());
							tmp13 = _this;
						}
						this1 = tmp13;
					}
					else{
						bool tmp13 = false;
						if ((tmp13)){
							::lime::utils::ArrayBufferView tmp14;
							{
								::lime::utils::ArrayBufferView tmp15 = ::lime::utils::ArrayBufferView_obj::__new((int)0,(int)9);
								::lime::utils::ArrayBufferView _this = tmp15;
								cpp::ArrayBase array = hx::Throw(HX_CSTRING("Invalid field access on null object"));
								_this->byteOffset = (int)0;
								_this->length = array->__Field(HX_HCSTRING("length","\xe6","\x94","\x07","\x9f"), hx::paccDynamic );
								int tmp16 = (_this->length * _this->bytesPerElement);
								_this->byteLength = tmp16;
								::haxe::io::Bytes tmp17;
								{
									::haxe::io::Bytes this2;
									int tmp18 = _this->byteLength;
									::haxe::io::Bytes tmp19 = ::haxe::io::Bytes_obj::alloc(tmp18);
									this2 = tmp19;
									tmp17 = this2;
								}
								_this->buffer = tmp17;
								_this->copyFromArray(((Array< Float >)(array)),null());
								tmp14 = _this;
							}
							this1 = tmp14;
						}
						else{
							bool tmp14 = false;
							if ((tmp14)){
								::lime::utils::ArrayBufferView tmp15;
								{
									::lime::utils::ArrayBufferView tmp16 = ::lime::utils::ArrayBufferView_obj::__new((int)0,(int)9);
									::lime::utils::ArrayBufferView _this = tmp16;
									::haxe::io::Bytes tmp17 = hx::Throw(HX_CSTRING("Invalid field access on null object"));
									::haxe::io::Bytes srcData = tmp17;
									int tmp18 = hx::Throw(HX_CSTRING("Invalid field access on null object"));
									int srcLength = tmp18;
									int tmp19 = hx::Throw(HX_CSTRING("Invalid field access on null object"));
									int srcByteOffset = tmp19;
									int tmp20 = hx::Throw(HX_CSTRING("Invalid field access on null object"));
									int srcElementSize = tmp20;
									int elementSize = _this->bytesPerElement;
									int tmp21 = hx::Throw(HX_CSTRING("Invalid field access on null object"));
									int tmp22 = _this->type;
									bool tmp23 = (tmp21 == tmp22);
									if ((tmp23)){
										int srcLength1 = srcData->length;
										int tmp24 = (srcLength1 - srcByteOffset);
										int cloneLength = tmp24;
										::haxe::io::Bytes tmp25;
										{
											::haxe::io::Bytes this2;
											int tmp26 = cloneLength;
											::haxe::io::Bytes tmp27 = ::haxe::io::Bytes_obj::alloc(tmp26);
											this2 = tmp27;
											tmp25 = this2;
										}
										_this->buffer = tmp25;
										::haxe::io::Bytes tmp26 = srcData;
										int tmp27 = srcByteOffset;
										int tmp28 = cloneLength;
										_this->buffer->blit((int)0,tmp26,tmp27,tmp28);
									}
									else{
										HX_STACK_DO_THROW(HX_HCSTRING("unimplemented","\x09","\x2f","\x74","\xb4"));
									}
									int tmp24 = (_this->bytesPerElement * srcLength);
									_this->byteLength = tmp24;
									_this->byteOffset = (int)0;
									_this->length = srcLength;
									tmp15 = _this;
								}
								this1 = tmp15;
							}
							else{
								bool tmp15 = (buffer != null());
								if ((tmp15)){
									::lime::utils::ArrayBufferView tmp16;
									{
										::lime::utils::ArrayBufferView tmp17 = ::lime::utils::ArrayBufferView_obj::__new((int)0,(int)9);
										::lime::utils::ArrayBufferView _this = tmp17;
										int in_byteOffset = byte_offset;
										bool tmp18 = (in_byteOffset < (int)0);
										if ((tmp18)){
											HX_STACK_DO_THROW(::lime::utils::TAError_obj::RangeError);
										}
										int tmp19 = hx::Mod(in_byteOffset,_this->bytesPerElement);
										bool tmp20 = (tmp19 != (int)0);
										if ((tmp20)){
											HX_STACK_DO_THROW(::lime::utils::TAError_obj::RangeError);
										}
										int bufferByteLength = buffer->length;
										int elementSize = _this->bytesPerElement;
										int newByteLength = bufferByteLength;
										bool tmp21 = (len == null());
										if ((tmp21)){
											int tmp22 = (bufferByteLength - in_byteOffset);
											newByteLength = tmp22;
											int tmp23 = hx::Mod(bufferByteLength,_this->bytesPerElement);
											bool tmp24 = (tmp23 != (int)0);
											if ((tmp24)){
												HX_STACK_DO_THROW(::lime::utils::TAError_obj::RangeError);
											}
											bool tmp25 = (newByteLength < (int)0);
											if ((tmp25)){
												HX_STACK_DO_THROW(::lime::utils::TAError_obj::RangeError);
											}
										}
										else{
											int tmp22 = (len * _this->bytesPerElement);
											newByteLength = tmp22;
											int tmp23 = (in_byteOffset + newByteLength);
											int newRange = tmp23;
											bool tmp24 = (newRange > bufferByteLength);
											if ((tmp24)){
												HX_STACK_DO_THROW(::lime::utils::TAError_obj::RangeError);
											}
										}
										_this->buffer = buffer;
										_this->byteOffset = in_byteOffset;
										_this->byteLength = newByteLength;
										Float tmp22 = (Float(newByteLength) / Float(_this->bytesPerElement));
										int tmp23 = ::Std_obj::_int(tmp22);
										_this->length = tmp23;
										tmp16 = _this;
									}
									this1 = tmp16;
								}
								else{
									HX_STACK_DO_THROW(HX_HCSTRING("Invalid constructor arguments for Float64Array","\x8f","\xde","\x6b","\x1e"));
								}
							}
						}
					}
				}
				tmp7 = this1;
			}
			;break;
			case (int)0: {
				HX_STACK_DO_THROW(HX_HCSTRING("subarray on a blank ArrayBufferView","\x39","\x87","\xfd","\x19"));
			}
			;break;
		}
	}
	::lime::utils::ArrayBufferView view = tmp7;
	::lime::utils::ArrayBufferView tmp8 = view;
	return tmp8;
}


HX_DEFINE_DYNAMIC_FUNC2(ArrayBufferView_obj,subarray_lime_utils_Float64Array,return )

::lime::utils::ArrayBufferView ArrayBufferView_obj::subarray_lime_utils_Int16Array( int begin,Dynamic end){
	bool tmp = (end == null());
	if ((tmp)){
		int tmp1 = this->length;
		end = tmp1;
	}
	int tmp1 = (end - begin);
	int len = tmp1;
	int tmp2 = begin;
	int tmp3 = this->bytesPerElement;
	int tmp4 = (tmp2 * tmp3);
	int tmp5 = this->byteOffset;
	int tmp6 = (tmp4 + tmp5);
	int byte_offset = tmp6;
	::lime::utils::ArrayBufferView tmp7;
	{
		int tmp8 = this->type;
		int _g = tmp8;
		int tmp9 = _g;
		switch( (int)(tmp9)){
			case (int)1: {
				::haxe::io::Bytes tmp10 = this->buffer;
				::haxe::io::Bytes buffer = tmp10;
				::lime::utils::ArrayBufferView this1;
				bool tmp11 = false;
				if ((tmp11)){
					::lime::utils::ArrayBufferView tmp12 = ::lime::utils::ArrayBufferView_obj::__new(null(),(int)1);
					this1 = tmp12;
				}
				else{
					bool tmp12 = false;
					if ((tmp12)){
						::lime::utils::ArrayBufferView tmp13;
						{
							::lime::utils::ArrayBufferView tmp14 = ::lime::utils::ArrayBufferView_obj::__new((int)0,(int)1);
							::lime::utils::ArrayBufferView _this = tmp14;
							_this->byteOffset = (int)0;
							int tmp15 = hx::Throw(HX_CSTRING("Invalid field access on null object"));
							_this->length = tmp15;
							int tmp16 = (_this->length * _this->bytesPerElement);
							_this->byteLength = tmp16;
							::haxe::io::Bytes tmp17;
							{
								::haxe::io::Bytes this2;
								int tmp18 = _this->byteLength;
								::haxe::io::Bytes tmp19 = ::haxe::io::Bytes_obj::alloc(tmp18);
								this2 = tmp19;
								tmp17 = this2;
							}
							_this->buffer = tmp17;
							_this->copyFromArray(((Array< Float >)(null())),null());
							tmp13 = _this;
						}
						this1 = tmp13;
					}
					else{
						bool tmp13 = false;
						if ((tmp13)){
							::lime::utils::ArrayBufferView tmp14;
							{
								::lime::utils::ArrayBufferView tmp15 = ::lime::utils::ArrayBufferView_obj::__new((int)0,(int)1);
								::lime::utils::ArrayBufferView _this = tmp15;
								cpp::ArrayBase array = hx::Throw(HX_CSTRING("Invalid field access on null object"));
								_this->byteOffset = (int)0;
								_this->length = array->__Field(HX_HCSTRING("length","\xe6","\x94","\x07","\x9f"), hx::paccDynamic );
								int tmp16 = (_this->length * _this->bytesPerElement);
								_this->byteLength = tmp16;
								::haxe::io::Bytes tmp17;
								{
									::haxe::io::Bytes this2;
									int tmp18 = _this->byteLength;
									::haxe::io::Bytes tmp19 = ::haxe::io::Bytes_obj::alloc(tmp18);
									this2 = tmp19;
									tmp17 = this2;
								}
								_this->buffer = tmp17;
								_this->copyFromArray(((Array< Float >)(array)),null());
								tmp14 = _this;
							}
							this1 = tmp14;
						}
						else{
							bool tmp14 = false;
							if ((tmp14)){
								::lime::utils::ArrayBufferView tmp15;
								{
									::lime::utils::ArrayBufferView tmp16 = ::lime::utils::ArrayBufferView_obj::__new((int)0,(int)1);
									::lime::utils::ArrayBufferView _this = tmp16;
									::haxe::io::Bytes tmp17 = hx::Throw(HX_CSTRING("Invalid field access on null object"));
									::haxe::io::Bytes srcData = tmp17;
									int tmp18 = hx::Throw(HX_CSTRING("Invalid field access on null object"));
									int srcLength = tmp18;
									int tmp19 = hx::Throw(HX_CSTRING("Invalid field access on null object"));
									int srcByteOffset = tmp19;
									int tmp20 = hx::Throw(HX_CSTRING("Invalid field access on null object"));
									int srcElementSize = tmp20;
									int elementSize = _this->bytesPerElement;
									int tmp21 = hx::Throw(HX_CSTRING("Invalid field access on null object"));
									int tmp22 = _this->type;
									bool tmp23 = (tmp21 == tmp22);
									if ((tmp23)){
										int srcLength1 = srcData->length;
										int tmp24 = (srcLength1 - srcByteOffset);
										int cloneLength = tmp24;
										::haxe::io::Bytes tmp25;
										{
											::haxe::io::Bytes this2;
											int tmp26 = cloneLength;
											::haxe::io::Bytes tmp27 = ::haxe::io::Bytes_obj::alloc(tmp26);
											this2 = tmp27;
											tmp25 = this2;
										}
										_this->buffer = tmp25;
										::haxe::io::Bytes tmp26 = srcData;
										int tmp27 = srcByteOffset;
										int tmp28 = cloneLength;
										_this->buffer->blit((int)0,tmp26,tmp27,tmp28);
									}
									else{
										HX_STACK_DO_THROW(HX_HCSTRING("unimplemented","\x09","\x2f","\x74","\xb4"));
									}
									int tmp24 = (_this->bytesPerElement * srcLength);
									_this->byteLength = tmp24;
									_this->byteOffset = (int)0;
									_this->length = srcLength;
									tmp15 = _this;
								}
								this1 = tmp15;
							}
							else{
								bool tmp15 = (buffer != null());
								if ((tmp15)){
									::lime::utils::ArrayBufferView tmp16;
									{
										::lime::utils::ArrayBufferView tmp17 = ::lime::utils::ArrayBufferView_obj::__new((int)0,(int)1);
										::lime::utils::ArrayBufferView _this = tmp17;
										int in_byteOffset = byte_offset;
										bool tmp18 = (in_byteOffset < (int)0);
										if ((tmp18)){
											HX_STACK_DO_THROW(::lime::utils::TAError_obj::RangeError);
										}
										int tmp19 = hx::Mod(in_byteOffset,_this->bytesPerElement);
										bool tmp20 = (tmp19 != (int)0);
										if ((tmp20)){
											HX_STACK_DO_THROW(::lime::utils::TAError_obj::RangeError);
										}
										int bufferByteLength = buffer->length;
										int elementSize = _this->bytesPerElement;
										int newByteLength = bufferByteLength;
										bool tmp21 = (len == null());
										if ((tmp21)){
											int tmp22 = (bufferByteLength - in_byteOffset);
											newByteLength = tmp22;
											int tmp23 = hx::Mod(bufferByteLength,_this->bytesPerElement);
											bool tmp24 = (tmp23 != (int)0);
											if ((tmp24)){
												HX_STACK_DO_THROW(::lime::utils::TAError_obj::RangeError);
											}
											bool tmp25 = (newByteLength < (int)0);
											if ((tmp25)){
												HX_STACK_DO_THROW(::lime::utils::TAError_obj::RangeError);
											}
										}
										else{
											int tmp22 = (len * _this->bytesPerElement);
											newByteLength = tmp22;
											int tmp23 = (in_byteOffset + newByteLength);
											int newRange = tmp23;
											bool tmp24 = (newRange > bufferByteLength);
											if ((tmp24)){
												HX_STACK_DO_THROW(::lime::utils::TAError_obj::RangeError);
											}
										}
										_this->buffer = buffer;
										_this->byteOffset = in_byteOffset;
										_this->byteLength = newByteLength;
										Float tmp22 = (Float(newByteLength) / Float(_this->bytesPerElement));
										int tmp23 = ::Std_obj::_int(tmp22);
										_this->length = tmp23;
										tmp16 = _this;
									}
									this1 = tmp16;
								}
								else{
									HX_STACK_DO_THROW(HX_HCSTRING("Invalid constructor arguments for Int8Array","\x40","\x53","\xda","\x77"));
								}
							}
						}
					}
				}
				tmp7 = this1;
			}
			;break;
			case (int)2: {
				::haxe::io::Bytes tmp10 = this->buffer;
				::haxe::io::Bytes buffer = tmp10;
				::lime::utils::ArrayBufferView this1;
				bool tmp11 = false;
				if ((tmp11)){
					::lime::utils::ArrayBufferView tmp12 = ::lime::utils::ArrayBufferView_obj::__new(null(),(int)2);
					this1 = tmp12;
				}
				else{
					bool tmp12 = false;
					if ((tmp12)){
						::lime::utils::ArrayBufferView tmp13;
						{
							::lime::utils::ArrayBufferView tmp14 = ::lime::utils::ArrayBufferView_obj::__new((int)0,(int)2);
							::lime::utils::ArrayBufferView _this = tmp14;
							_this->byteOffset = (int)0;
							int tmp15 = hx::Throw(HX_CSTRING("Invalid field access on null object"));
							_this->length = tmp15;
							int tmp16 = (_this->length * _this->bytesPerElement);
							_this->byteLength = tmp16;
							::haxe::io::Bytes tmp17;
							{
								::haxe::io::Bytes this2;
								int tmp18 = _this->byteLength;
								::haxe::io::Bytes tmp19 = ::haxe::io::Bytes_obj::alloc(tmp18);
								this2 = tmp19;
								tmp17 = this2;
							}
							_this->buffer = tmp17;
							_this->copyFromArray(((Array< Float >)(null())),null());
							tmp13 = _this;
						}
						this1 = tmp13;
					}
					else{
						bool tmp13 = false;
						if ((tmp13)){
							::lime::utils::ArrayBufferView tmp14;
							{
								::lime::utils::ArrayBufferView tmp15 = ::lime::utils::ArrayBufferView_obj::__new((int)0,(int)2);
								::lime::utils::ArrayBufferView _this = tmp15;
								cpp::ArrayBase array = hx::Throw(HX_CSTRING("Invalid field access on null object"));
								_this->byteOffset = (int)0;
								_this->length = array->__Field(HX_HCSTRING("length","\xe6","\x94","\x07","\x9f"), hx::paccDynamic );
								int tmp16 = (_this->length * _this->bytesPerElement);
								_this->byteLength = tmp16;
								::haxe::io::Bytes tmp17;
								{
									::haxe::io::Bytes this2;
									int tmp18 = _this->byteLength;
									::haxe::io::Bytes tmp19 = ::haxe::io::Bytes_obj::alloc(tmp18);
									this2 = tmp19;
									tmp17 = this2;
								}
								_this->buffer = tmp17;
								_this->copyFromArray(((Array< Float >)(array)),null());
								tmp14 = _this;
							}
							this1 = tmp14;
						}
						else{
							bool tmp14 = false;
							if ((tmp14)){
								::lime::utils::ArrayBufferView tmp15;
								{
									::lime::utils::ArrayBufferView tmp16 = ::lime::utils::ArrayBufferView_obj::__new((int)0,(int)2);
									::lime::utils::ArrayBufferView _this = tmp16;
									::haxe::io::Bytes tmp17 = hx::Throw(HX_CSTRING("Invalid field access on null object"));
									::haxe::io::Bytes srcData = tmp17;
									int tmp18 = hx::Throw(HX_CSTRING("Invalid field access on null object"));
									int srcLength = tmp18;
									int tmp19 = hx::Throw(HX_CSTRING("Invalid field access on null object"));
									int srcByteOffset = tmp19;
									int tmp20 = hx::Throw(HX_CSTRING("Invalid field access on null object"));
									int srcElementSize = tmp20;
									int elementSize = _this->bytesPerElement;
									int tmp21 = hx::Throw(HX_CSTRING("Invalid field access on null object"));
									int tmp22 = _this->type;
									bool tmp23 = (tmp21 == tmp22);
									if ((tmp23)){
										int srcLength1 = srcData->length;
										int tmp24 = (srcLength1 - srcByteOffset);
										int cloneLength = tmp24;
										::haxe::io::Bytes tmp25;
										{
											::haxe::io::Bytes this2;
											int tmp26 = cloneLength;
											::haxe::io::Bytes tmp27 = ::haxe::io::Bytes_obj::alloc(tmp26);
											this2 = tmp27;
											tmp25 = this2;
										}
										_this->buffer = tmp25;
										::haxe::io::Bytes tmp26 = srcData;
										int tmp27 = srcByteOffset;
										int tmp28 = cloneLength;
										_this->buffer->blit((int)0,tmp26,tmp27,tmp28);
									}
									else{
										HX_STACK_DO_THROW(HX_HCSTRING("unimplemented","\x09","\x2f","\x74","\xb4"));
									}
									int tmp24 = (_this->bytesPerElement * srcLength);
									_this->byteLength = tmp24;
									_this->byteOffset = (int)0;
									_this->length = srcLength;
									tmp15 = _this;
								}
								this1 = tmp15;
							}
							else{
								bool tmp15 = (buffer != null());
								if ((tmp15)){
									::lime::utils::ArrayBufferView tmp16;
									{
										::lime::utils::ArrayBufferView tmp17 = ::lime::utils::ArrayBufferView_obj::__new((int)0,(int)2);
										::lime::utils::ArrayBufferView _this = tmp17;
										int in_byteOffset = byte_offset;
										bool tmp18 = (in_byteOffset < (int)0);
										if ((tmp18)){
											HX_STACK_DO_THROW(::lime::utils::TAError_obj::RangeError);
										}
										int tmp19 = hx::Mod(in_byteOffset,_this->bytesPerElement);
										bool tmp20 = (tmp19 != (int)0);
										if ((tmp20)){
											HX_STACK_DO_THROW(::lime::utils::TAError_obj::RangeError);
										}
										int bufferByteLength = buffer->length;
										int elementSize = _this->bytesPerElement;
										int newByteLength = bufferByteLength;
										bool tmp21 = (len == null());
										if ((tmp21)){
											int tmp22 = (bufferByteLength - in_byteOffset);
											newByteLength = tmp22;
											int tmp23 = hx::Mod(bufferByteLength,_this->bytesPerElement);
											bool tmp24 = (tmp23 != (int)0);
											if ((tmp24)){
												HX_STACK_DO_THROW(::lime::utils::TAError_obj::RangeError);
											}
											bool tmp25 = (newByteLength < (int)0);
											if ((tmp25)){
												HX_STACK_DO_THROW(::lime::utils::TAError_obj::RangeError);
											}
										}
										else{
											int tmp22 = (len * _this->bytesPerElement);
											newByteLength = tmp22;
											int tmp23 = (in_byteOffset + newByteLength);
											int newRange = tmp23;
											bool tmp24 = (newRange > bufferByteLength);
											if ((tmp24)){
												HX_STACK_DO_THROW(::lime::utils::TAError_obj::RangeError);
											}
										}
										_this->buffer = buffer;
										_this->byteOffset = in_byteOffset;
										_this->byteLength = newByteLength;
										Float tmp22 = (Float(newByteLength) / Float(_this->bytesPerElement));
										int tmp23 = ::Std_obj::_int(tmp22);
										_this->length = tmp23;
										tmp16 = _this;
									}
									this1 = tmp16;
								}
								else{
									HX_STACK_DO_THROW(HX_HCSTRING("Invalid constructor arguments for Int16Array","\x95","\xb2","\x95","\xa7"));
								}
							}
						}
					}
				}
				tmp7 = this1;
			}
			;break;
			case (int)3: {
				::haxe::io::Bytes tmp10 = this->buffer;
				::haxe::io::Bytes buffer = tmp10;
				::lime::utils::ArrayBufferView this1;
				bool tmp11 = false;
				if ((tmp11)){
					::lime::utils::ArrayBufferView tmp12 = ::lime::utils::ArrayBufferView_obj::__new(null(),(int)3);
					this1 = tmp12;
				}
				else{
					bool tmp12 = false;
					if ((tmp12)){
						::lime::utils::ArrayBufferView tmp13;
						{
							::lime::utils::ArrayBufferView tmp14 = ::lime::utils::ArrayBufferView_obj::__new((int)0,(int)3);
							::lime::utils::ArrayBufferView _this = tmp14;
							_this->byteOffset = (int)0;
							int tmp15 = hx::Throw(HX_CSTRING("Invalid field access on null object"));
							_this->length = tmp15;
							int tmp16 = (_this->length * _this->bytesPerElement);
							_this->byteLength = tmp16;
							::haxe::io::Bytes tmp17;
							{
								::haxe::io::Bytes this2;
								int tmp18 = _this->byteLength;
								::haxe::io::Bytes tmp19 = ::haxe::io::Bytes_obj::alloc(tmp18);
								this2 = tmp19;
								tmp17 = this2;
							}
							_this->buffer = tmp17;
							_this->copyFromArray(((Array< Float >)(null())),null());
							tmp13 = _this;
						}
						this1 = tmp13;
					}
					else{
						bool tmp13 = false;
						if ((tmp13)){
							::lime::utils::ArrayBufferView tmp14;
							{
								::lime::utils::ArrayBufferView tmp15 = ::lime::utils::ArrayBufferView_obj::__new((int)0,(int)3);
								::lime::utils::ArrayBufferView _this = tmp15;
								cpp::ArrayBase array = hx::Throw(HX_CSTRING("Invalid field access on null object"));
								_this->byteOffset = (int)0;
								_this->length = array->__Field(HX_HCSTRING("length","\xe6","\x94","\x07","\x9f"), hx::paccDynamic );
								int tmp16 = (_this->length * _this->bytesPerElement);
								_this->byteLength = tmp16;
								::haxe::io::Bytes tmp17;
								{
									::haxe::io::Bytes this2;
									int tmp18 = _this->byteLength;
									::haxe::io::Bytes tmp19 = ::haxe::io::Bytes_obj::alloc(tmp18);
									this2 = tmp19;
									tmp17 = this2;
								}
								_this->buffer = tmp17;
								_this->copyFromArray(((Array< Float >)(array)),null());
								tmp14 = _this;
							}
							this1 = tmp14;
						}
						else{
							bool tmp14 = false;
							if ((tmp14)){
								::lime::utils::ArrayBufferView tmp15;
								{
									::lime::utils::ArrayBufferView tmp16 = ::lime::utils::ArrayBufferView_obj::__new((int)0,(int)3);
									::lime::utils::ArrayBufferView _this = tmp16;
									::haxe::io::Bytes tmp17 = hx::Throw(HX_CSTRING("Invalid field access on null object"));
									::haxe::io::Bytes srcData = tmp17;
									int tmp18 = hx::Throw(HX_CSTRING("Invalid field access on null object"));
									int srcLength = tmp18;
									int tmp19 = hx::Throw(HX_CSTRING("Invalid field access on null object"));
									int srcByteOffset = tmp19;
									int tmp20 = hx::Throw(HX_CSTRING("Invalid field access on null object"));
									int srcElementSize = tmp20;
									int elementSize = _this->bytesPerElement;
									int tmp21 = hx::Throw(HX_CSTRING("Invalid field access on null object"));
									int tmp22 = _this->type;
									bool tmp23 = (tmp21 == tmp22);
									if ((tmp23)){
										int srcLength1 = srcData->length;
										int tmp24 = (srcLength1 - srcByteOffset);
										int cloneLength = tmp24;
										::haxe::io::Bytes tmp25;
										{
											::haxe::io::Bytes this2;
											int tmp26 = cloneLength;
											::haxe::io::Bytes tmp27 = ::haxe::io::Bytes_obj::alloc(tmp26);
											this2 = tmp27;
											tmp25 = this2;
										}
										_this->buffer = tmp25;
										::haxe::io::Bytes tmp26 = srcData;
										int tmp27 = srcByteOffset;
										int tmp28 = cloneLength;
										_this->buffer->blit((int)0,tmp26,tmp27,tmp28);
									}
									else{
										HX_STACK_DO_THROW(HX_HCSTRING("unimplemented","\x09","\x2f","\x74","\xb4"));
									}
									int tmp24 = (_this->bytesPerElement * srcLength);
									_this->byteLength = tmp24;
									_this->byteOffset = (int)0;
									_this->length = srcLength;
									tmp15 = _this;
								}
								this1 = tmp15;
							}
							else{
								bool tmp15 = (buffer != null());
								if ((tmp15)){
									::lime::utils::ArrayBufferView tmp16;
									{
										::lime::utils::ArrayBufferView tmp17 = ::lime::utils::ArrayBufferView_obj::__new((int)0,(int)3);
										::lime::utils::ArrayBufferView _this = tmp17;
										int in_byteOffset = byte_offset;
										bool tmp18 = (in_byteOffset < (int)0);
										if ((tmp18)){
											HX_STACK_DO_THROW(::lime::utils::TAError_obj::RangeError);
										}
										int tmp19 = hx::Mod(in_byteOffset,_this->bytesPerElement);
										bool tmp20 = (tmp19 != (int)0);
										if ((tmp20)){
											HX_STACK_DO_THROW(::lime::utils::TAError_obj::RangeError);
										}
										int bufferByteLength = buffer->length;
										int elementSize = _this->bytesPerElement;
										int newByteLength = bufferByteLength;
										bool tmp21 = (len == null());
										if ((tmp21)){
											int tmp22 = (bufferByteLength - in_byteOffset);
											newByteLength = tmp22;
											int tmp23 = hx::Mod(bufferByteLength,_this->bytesPerElement);
											bool tmp24 = (tmp23 != (int)0);
											if ((tmp24)){
												HX_STACK_DO_THROW(::lime::utils::TAError_obj::RangeError);
											}
											bool tmp25 = (newByteLength < (int)0);
											if ((tmp25)){
												HX_STACK_DO_THROW(::lime::utils::TAError_obj::RangeError);
											}
										}
										else{
											int tmp22 = (len * _this->bytesPerElement);
											newByteLength = tmp22;
											int tmp23 = (in_byteOffset + newByteLength);
											int newRange = tmp23;
											bool tmp24 = (newRange > bufferByteLength);
											if ((tmp24)){
												HX_STACK_DO_THROW(::lime::utils::TAError_obj::RangeError);
											}
										}
										_this->buffer = buffer;
										_this->byteOffset = in_byteOffset;
										_this->byteLength = newByteLength;
										Float tmp22 = (Float(newByteLength) / Float(_this->bytesPerElement));
										int tmp23 = ::Std_obj::_int(tmp22);
										_this->length = tmp23;
										tmp16 = _this;
									}
									this1 = tmp16;
								}
								else{
									HX_STACK_DO_THROW(HX_HCSTRING("Invalid constructor arguments for Int32Array","\x9b","\x2e","\x53","\x61"));
								}
							}
						}
					}
				}
				tmp7 = this1;
			}
			;break;
			case (int)4: {
				::haxe::io::Bytes tmp10 = this->buffer;
				::haxe::io::Bytes buffer = tmp10;
				::lime::utils::ArrayBufferView this1;
				bool tmp11 = false;
				if ((tmp11)){
					::lime::utils::ArrayBufferView tmp12 = ::lime::utils::ArrayBufferView_obj::__new(null(),(int)4);
					this1 = tmp12;
				}
				else{
					bool tmp12 = false;
					if ((tmp12)){
						::lime::utils::ArrayBufferView tmp13;
						{
							::lime::utils::ArrayBufferView tmp14 = ::lime::utils::ArrayBufferView_obj::__new((int)0,(int)4);
							::lime::utils::ArrayBufferView _this = tmp14;
							_this->byteOffset = (int)0;
							int tmp15 = hx::Throw(HX_CSTRING("Invalid field access on null object"));
							_this->length = tmp15;
							int tmp16 = (_this->length * _this->bytesPerElement);
							_this->byteLength = tmp16;
							::haxe::io::Bytes tmp17;
							{
								::haxe::io::Bytes this2;
								int tmp18 = _this->byteLength;
								::haxe::io::Bytes tmp19 = ::haxe::io::Bytes_obj::alloc(tmp18);
								this2 = tmp19;
								tmp17 = this2;
							}
							_this->buffer = tmp17;
							_this->copyFromArray(((Array< Float >)(null())),null());
							tmp13 = _this;
						}
						this1 = tmp13;
					}
					else{
						bool tmp13 = false;
						if ((tmp13)){
							::lime::utils::ArrayBufferView tmp14;
							{
								::lime::utils::ArrayBufferView tmp15 = ::lime::utils::ArrayBufferView_obj::__new((int)0,(int)4);
								::lime::utils::ArrayBufferView _this = tmp15;
								cpp::ArrayBase array = hx::Throw(HX_CSTRING("Invalid field access on null object"));
								_this->byteOffset = (int)0;
								_this->length = array->__Field(HX_HCSTRING("length","\xe6","\x94","\x07","\x9f"), hx::paccDynamic );
								int tmp16 = (_this->length * _this->bytesPerElement);
								_this->byteLength = tmp16;
								::haxe::io::Bytes tmp17;
								{
									::haxe::io::Bytes this2;
									int tmp18 = _this->byteLength;
									::haxe::io::Bytes tmp19 = ::haxe::io::Bytes_obj::alloc(tmp18);
									this2 = tmp19;
									tmp17 = this2;
								}
								_this->buffer = tmp17;
								_this->copyFromArray(((Array< Float >)(array)),null());
								tmp14 = _this;
							}
							this1 = tmp14;
						}
						else{
							bool tmp14 = false;
							if ((tmp14)){
								::lime::utils::ArrayBufferView tmp15;
								{
									::lime::utils::ArrayBufferView tmp16 = ::lime::utils::ArrayBufferView_obj::__new((int)0,(int)4);
									::lime::utils::ArrayBufferView _this = tmp16;
									::haxe::io::Bytes tmp17 = hx::Throw(HX_CSTRING("Invalid field access on null object"));
									::haxe::io::Bytes srcData = tmp17;
									int tmp18 = hx::Throw(HX_CSTRING("Invalid field access on null object"));
									int srcLength = tmp18;
									int tmp19 = hx::Throw(HX_CSTRING("Invalid field access on null object"));
									int srcByteOffset = tmp19;
									int tmp20 = hx::Throw(HX_CSTRING("Invalid field access on null object"));
									int srcElementSize = tmp20;
									int elementSize = _this->bytesPerElement;
									int tmp21 = hx::Throw(HX_CSTRING("Invalid field access on null object"));
									int tmp22 = _this->type;
									bool tmp23 = (tmp21 == tmp22);
									if ((tmp23)){
										int srcLength1 = srcData->length;
										int tmp24 = (srcLength1 - srcByteOffset);
										int cloneLength = tmp24;
										::haxe::io::Bytes tmp25;
										{
											::haxe::io::Bytes this2;
											int tmp26 = cloneLength;
											::haxe::io::Bytes tmp27 = ::haxe::io::Bytes_obj::alloc(tmp26);
											this2 = tmp27;
											tmp25 = this2;
										}
										_this->buffer = tmp25;
										::haxe::io::Bytes tmp26 = srcData;
										int tmp27 = srcByteOffset;
										int tmp28 = cloneLength;
										_this->buffer->blit((int)0,tmp26,tmp27,tmp28);
									}
									else{
										HX_STACK_DO_THROW(HX_HCSTRING("unimplemented","\x09","\x2f","\x74","\xb4"));
									}
									int tmp24 = (_this->bytesPerElement * srcLength);
									_this->byteLength = tmp24;
									_this->byteOffset = (int)0;
									_this->length = srcLength;
									tmp15 = _this;
								}
								this1 = tmp15;
							}
							else{
								bool tmp15 = (buffer != null());
								if ((tmp15)){
									::lime::utils::ArrayBufferView tmp16;
									{
										::lime::utils::ArrayBufferView tmp17 = ::lime::utils::ArrayBufferView_obj::__new((int)0,(int)4);
										::lime::utils::ArrayBufferView _this = tmp17;
										int in_byteOffset = byte_offset;
										bool tmp18 = (in_byteOffset < (int)0);
										if ((tmp18)){
											HX_STACK_DO_THROW(::lime::utils::TAError_obj::RangeError);
										}
										int tmp19 = hx::Mod(in_byteOffset,_this->bytesPerElement);
										bool tmp20 = (tmp19 != (int)0);
										if ((tmp20)){
											HX_STACK_DO_THROW(::lime::utils::TAError_obj::RangeError);
										}
										int bufferByteLength = buffer->length;
										int elementSize = _this->bytesPerElement;
										int newByteLength = bufferByteLength;
										bool tmp21 = (len == null());
										if ((tmp21)){
											int tmp22 = (bufferByteLength - in_byteOffset);
											newByteLength = tmp22;
											int tmp23 = hx::Mod(bufferByteLength,_this->bytesPerElement);
											bool tmp24 = (tmp23 != (int)0);
											if ((tmp24)){
												HX_STACK_DO_THROW(::lime::utils::TAError_obj::RangeError);
											}
											bool tmp25 = (newByteLength < (int)0);
											if ((tmp25)){
												HX_STACK_DO_THROW(::lime::utils::TAError_obj::RangeError);
											}
										}
										else{
											int tmp22 = (len * _this->bytesPerElement);
											newByteLength = tmp22;
											int tmp23 = (in_byteOffset + newByteLength);
											int newRange = tmp23;
											bool tmp24 = (newRange > bufferByteLength);
											if ((tmp24)){
												HX_STACK_DO_THROW(::lime::utils::TAError_obj::RangeError);
											}
										}
										_this->buffer = buffer;
										_this->byteOffset = in_byteOffset;
										_this->byteLength = newByteLength;
										Float tmp22 = (Float(newByteLength) / Float(_this->bytesPerElement));
										int tmp23 = ::Std_obj::_int(tmp22);
										_this->length = tmp23;
										tmp16 = _this;
									}
									this1 = tmp16;
								}
								else{
									HX_STACK_DO_THROW(HX_HCSTRING("Invalid constructor arguments for UInt8Array","\x6b","\x44","\xd5","\x85"));
								}
							}
						}
					}
				}
				tmp7 = this1;
			}
			;break;
			case (int)5: {
				::haxe::io::Bytes tmp10 = this->buffer;
				::haxe::io::Bytes buffer = tmp10;
				::lime::utils::ArrayBufferView this1;
				bool tmp11 = false;
				if ((tmp11)){
					::lime::utils::ArrayBufferView tmp12 = ::lime::utils::ArrayBufferView_obj::__new(null(),(int)5);
					this1 = tmp12;
				}
				else{
					bool tmp12 = false;
					if ((tmp12)){
						::lime::utils::ArrayBufferView tmp13;
						{
							::lime::utils::ArrayBufferView tmp14 = ::lime::utils::ArrayBufferView_obj::__new((int)0,(int)5);
							::lime::utils::ArrayBufferView _this = tmp14;
							_this->byteOffset = (int)0;
							int tmp15 = hx::Throw(HX_CSTRING("Invalid field access on null object"));
							_this->length = tmp15;
							int tmp16 = (_this->length * _this->bytesPerElement);
							_this->byteLength = tmp16;
							::haxe::io::Bytes tmp17;
							{
								::haxe::io::Bytes this2;
								int tmp18 = _this->byteLength;
								::haxe::io::Bytes tmp19 = ::haxe::io::Bytes_obj::alloc(tmp18);
								this2 = tmp19;
								tmp17 = this2;
							}
							_this->buffer = tmp17;
							_this->copyFromArray(((Array< Float >)(null())),null());
							tmp13 = _this;
						}
						this1 = tmp13;
					}
					else{
						bool tmp13 = false;
						if ((tmp13)){
							::lime::utils::ArrayBufferView tmp14;
							{
								::lime::utils::ArrayBufferView tmp15 = ::lime::utils::ArrayBufferView_obj::__new((int)0,(int)5);
								::lime::utils::ArrayBufferView _this = tmp15;
								cpp::ArrayBase array = hx::Throw(HX_CSTRING("Invalid field access on null object"));
								_this->byteOffset = (int)0;
								_this->length = array->__Field(HX_HCSTRING("length","\xe6","\x94","\x07","\x9f"), hx::paccDynamic );
								int tmp16 = (_this->length * _this->bytesPerElement);
								_this->byteLength = tmp16;
								::haxe::io::Bytes tmp17;
								{
									::haxe::io::Bytes this2;
									int tmp18 = _this->byteLength;
									::haxe::io::Bytes tmp19 = ::haxe::io::Bytes_obj::alloc(tmp18);
									this2 = tmp19;
									tmp17 = this2;
								}
								_this->buffer = tmp17;
								_this->copyFromArray(((Array< Float >)(array)),null());
								tmp14 = _this;
							}
							this1 = tmp14;
						}
						else{
							bool tmp14 = false;
							if ((tmp14)){
								::lime::utils::ArrayBufferView tmp15;
								{
									::lime::utils::ArrayBufferView tmp16 = ::lime::utils::ArrayBufferView_obj::__new((int)0,(int)5);
									::lime::utils::ArrayBufferView _this = tmp16;
									::haxe::io::Bytes tmp17 = hx::Throw(HX_CSTRING("Invalid field access on null object"));
									::haxe::io::Bytes srcData = tmp17;
									int tmp18 = hx::Throw(HX_CSTRING("Invalid field access on null object"));
									int srcLength = tmp18;
									int tmp19 = hx::Throw(HX_CSTRING("Invalid field access on null object"));
									int srcByteOffset = tmp19;
									int tmp20 = hx::Throw(HX_CSTRING("Invalid field access on null object"));
									int srcElementSize = tmp20;
									int elementSize = _this->bytesPerElement;
									int tmp21 = hx::Throw(HX_CSTRING("Invalid field access on null object"));
									int tmp22 = _this->type;
									bool tmp23 = (tmp21 == tmp22);
									if ((tmp23)){
										int srcLength1 = srcData->length;
										int tmp24 = (srcLength1 - srcByteOffset);
										int cloneLength = tmp24;
										::haxe::io::Bytes tmp25;
										{
											::haxe::io::Bytes this2;
											int tmp26 = cloneLength;
											::haxe::io::Bytes tmp27 = ::haxe::io::Bytes_obj::alloc(tmp26);
											this2 = tmp27;
											tmp25 = this2;
										}
										_this->buffer = tmp25;
										::haxe::io::Bytes tmp26 = srcData;
										int tmp27 = srcByteOffset;
										int tmp28 = cloneLength;
										_this->buffer->blit((int)0,tmp26,tmp27,tmp28);
									}
									else{
										HX_STACK_DO_THROW(HX_HCSTRING("unimplemented","\x09","\x2f","\x74","\xb4"));
									}
									int tmp24 = (_this->bytesPerElement * srcLength);
									_this->byteLength = tmp24;
									_this->byteOffset = (int)0;
									_this->length = srcLength;
									tmp15 = _this;
								}
								this1 = tmp15;
							}
							else{
								bool tmp15 = (buffer != null());
								if ((tmp15)){
									::lime::utils::ArrayBufferView tmp16;
									{
										::lime::utils::ArrayBufferView tmp17 = ::lime::utils::ArrayBufferView_obj::__new((int)0,(int)5);
										::lime::utils::ArrayBufferView _this = tmp17;
										int in_byteOffset = byte_offset;
										bool tmp18 = (in_byteOffset < (int)0);
										if ((tmp18)){
											HX_STACK_DO_THROW(::lime::utils::TAError_obj::RangeError);
										}
										int tmp19 = hx::Mod(in_byteOffset,_this->bytesPerElement);
										bool tmp20 = (tmp19 != (int)0);
										if ((tmp20)){
											HX_STACK_DO_THROW(::lime::utils::TAError_obj::RangeError);
										}
										int bufferByteLength = buffer->length;
										int elementSize = _this->bytesPerElement;
										int newByteLength = bufferByteLength;
										bool tmp21 = (len == null());
										if ((tmp21)){
											int tmp22 = (bufferByteLength - in_byteOffset);
											newByteLength = tmp22;
											int tmp23 = hx::Mod(bufferByteLength,_this->bytesPerElement);
											bool tmp24 = (tmp23 != (int)0);
											if ((tmp24)){
												HX_STACK_DO_THROW(::lime::utils::TAError_obj::RangeError);
											}
											bool tmp25 = (newByteLength < (int)0);
											if ((tmp25)){
												HX_STACK_DO_THROW(::lime::utils::TAError_obj::RangeError);
											}
										}
										else{
											int tmp22 = (len * _this->bytesPerElement);
											newByteLength = tmp22;
											int tmp23 = (in_byteOffset + newByteLength);
											int newRange = tmp23;
											bool tmp24 = (newRange > bufferByteLength);
											if ((tmp24)){
												HX_STACK_DO_THROW(::lime::utils::TAError_obj::RangeError);
											}
										}
										_this->buffer = buffer;
										_this->byteOffset = in_byteOffset;
										_this->byteLength = newByteLength;
										Float tmp22 = (Float(newByteLength) / Float(_this->bytesPerElement));
										int tmp23 = ::Std_obj::_int(tmp22);
										_this->length = tmp23;
										tmp16 = _this;
									}
									this1 = tmp16;
								}
								else{
									HX_STACK_DO_THROW(HX_HCSTRING("Invalid constructor arguments for UInt8ClampedArray","\x8d","\x06","\x77","\x13"));
								}
							}
						}
					}
				}
				tmp7 = this1;
			}
			;break;
			case (int)6: {
				::haxe::io::Bytes tmp10 = this->buffer;
				::haxe::io::Bytes buffer = tmp10;
				::lime::utils::ArrayBufferView this1;
				bool tmp11 = false;
				if ((tmp11)){
					::lime::utils::ArrayBufferView tmp12 = ::lime::utils::ArrayBufferView_obj::__new(null(),(int)6);
					this1 = tmp12;
				}
				else{
					bool tmp12 = false;
					if ((tmp12)){
						::lime::utils::ArrayBufferView tmp13;
						{
							::lime::utils::ArrayBufferView tmp14 = ::lime::utils::ArrayBufferView_obj::__new((int)0,(int)6);
							::lime::utils::ArrayBufferView _this = tmp14;
							_this->byteOffset = (int)0;
							int tmp15 = hx::Throw(HX_CSTRING("Invalid field access on null object"));
							_this->length = tmp15;
							int tmp16 = (_this->length * _this->bytesPerElement);
							_this->byteLength = tmp16;
							::haxe::io::Bytes tmp17;
							{
								::haxe::io::Bytes this2;
								int tmp18 = _this->byteLength;
								::haxe::io::Bytes tmp19 = ::haxe::io::Bytes_obj::alloc(tmp18);
								this2 = tmp19;
								tmp17 = this2;
							}
							_this->buffer = tmp17;
							_this->copyFromArray(((Array< Float >)(null())),null());
							tmp13 = _this;
						}
						this1 = tmp13;
					}
					else{
						bool tmp13 = false;
						if ((tmp13)){
							::lime::utils::ArrayBufferView tmp14;
							{
								::lime::utils::ArrayBufferView tmp15 = ::lime::utils::ArrayBufferView_obj::__new((int)0,(int)6);
								::lime::utils::ArrayBufferView _this = tmp15;
								cpp::ArrayBase array = hx::Throw(HX_CSTRING("Invalid field access on null object"));
								_this->byteOffset = (int)0;
								_this->length = array->__Field(HX_HCSTRING("length","\xe6","\x94","\x07","\x9f"), hx::paccDynamic );
								int tmp16 = (_this->length * _this->bytesPerElement);
								_this->byteLength = tmp16;
								::haxe::io::Bytes tmp17;
								{
									::haxe::io::Bytes this2;
									int tmp18 = _this->byteLength;
									::haxe::io::Bytes tmp19 = ::haxe::io::Bytes_obj::alloc(tmp18);
									this2 = tmp19;
									tmp17 = this2;
								}
								_this->buffer = tmp17;
								_this->copyFromArray(((Array< Float >)(array)),null());
								tmp14 = _this;
							}
							this1 = tmp14;
						}
						else{
							bool tmp14 = false;
							if ((tmp14)){
								::lime::utils::ArrayBufferView tmp15;
								{
									::lime::utils::ArrayBufferView tmp16 = ::lime::utils::ArrayBufferView_obj::__new((int)0,(int)6);
									::lime::utils::ArrayBufferView _this = tmp16;
									::haxe::io::Bytes tmp17 = hx::Throw(HX_CSTRING("Invalid field access on null object"));
									::haxe::io::Bytes srcData = tmp17;
									int tmp18 = hx::Throw(HX_CSTRING("Invalid field access on null object"));
									int srcLength = tmp18;
									int tmp19 = hx::Throw(HX_CSTRING("Invalid field access on null object"));
									int srcByteOffset = tmp19;
									int tmp20 = hx::Throw(HX_CSTRING("Invalid field access on null object"));
									int srcElementSize = tmp20;
									int elementSize = _this->bytesPerElement;
									int tmp21 = hx::Throw(HX_CSTRING("Invalid field access on null object"));
									int tmp22 = _this->type;
									bool tmp23 = (tmp21 == tmp22);
									if ((tmp23)){
										int srcLength1 = srcData->length;
										int tmp24 = (srcLength1 - srcByteOffset);
										int cloneLength = tmp24;
										::haxe::io::Bytes tmp25;
										{
											::haxe::io::Bytes this2;
											int tmp26 = cloneLength;
											::haxe::io::Bytes tmp27 = ::haxe::io::Bytes_obj::alloc(tmp26);
											this2 = tmp27;
											tmp25 = this2;
										}
										_this->buffer = tmp25;
										::haxe::io::Bytes tmp26 = srcData;
										int tmp27 = srcByteOffset;
										int tmp28 = cloneLength;
										_this->buffer->blit((int)0,tmp26,tmp27,tmp28);
									}
									else{
										HX_STACK_DO_THROW(HX_HCSTRING("unimplemented","\x09","\x2f","\x74","\xb4"));
									}
									int tmp24 = (_this->bytesPerElement * srcLength);
									_this->byteLength = tmp24;
									_this->byteOffset = (int)0;
									_this->length = srcLength;
									tmp15 = _this;
								}
								this1 = tmp15;
							}
							else{
								bool tmp15 = (buffer != null());
								if ((tmp15)){
									::lime::utils::ArrayBufferView tmp16;
									{
										::lime::utils::ArrayBufferView tmp17 = ::lime::utils::ArrayBufferView_obj::__new((int)0,(int)6);
										::lime::utils::ArrayBufferView _this = tmp17;
										int in_byteOffset = byte_offset;
										bool tmp18 = (in_byteOffset < (int)0);
										if ((tmp18)){
											HX_STACK_DO_THROW(::lime::utils::TAError_obj::RangeError);
										}
										int tmp19 = hx::Mod(in_byteOffset,_this->bytesPerElement);
										bool tmp20 = (tmp19 != (int)0);
										if ((tmp20)){
											HX_STACK_DO_THROW(::lime::utils::TAError_obj::RangeError);
										}
										int bufferByteLength = buffer->length;
										int elementSize = _this->bytesPerElement;
										int newByteLength = bufferByteLength;
										bool tmp21 = (len == null());
										if ((tmp21)){
											int tmp22 = (bufferByteLength - in_byteOffset);
											newByteLength = tmp22;
											int tmp23 = hx::Mod(bufferByteLength,_this->bytesPerElement);
											bool tmp24 = (tmp23 != (int)0);
											if ((tmp24)){
												HX_STACK_DO_THROW(::lime::utils::TAError_obj::RangeError);
											}
											bool tmp25 = (newByteLength < (int)0);
											if ((tmp25)){
												HX_STACK_DO_THROW(::lime::utils::TAError_obj::RangeError);
											}
										}
										else{
											int tmp22 = (len * _this->bytesPerElement);
											newByteLength = tmp22;
											int tmp23 = (in_byteOffset + newByteLength);
											int newRange = tmp23;
											bool tmp24 = (newRange > bufferByteLength);
											if ((tmp24)){
												HX_STACK_DO_THROW(::lime::utils::TAError_obj::RangeError);
											}
										}
										_this->buffer = buffer;
										_this->byteOffset = in_byteOffset;
										_this->byteLength = newByteLength;
										Float tmp22 = (Float(newByteLength) / Float(_this->bytesPerElement));
										int tmp23 = ::Std_obj::_int(tmp22);
										_this->length = tmp23;
										tmp16 = _this;
									}
									this1 = tmp16;
								}
								else{
									HX_STACK_DO_THROW(HX_HCSTRING("Invalid constructor arguments for UInt16Array","\x0a","\xc7","\x2d","\xd5"));
								}
							}
						}
					}
				}
				tmp7 = this1;
			}
			;break;
			case (int)7: {
				::haxe::io::Bytes tmp10 = this->buffer;
				::haxe::io::Bytes buffer = tmp10;
				::lime::utils::ArrayBufferView this1;
				bool tmp11 = false;
				if ((tmp11)){
					::lime::utils::ArrayBufferView tmp12 = ::lime::utils::ArrayBufferView_obj::__new(null(),(int)7);
					this1 = tmp12;
				}
				else{
					bool tmp12 = false;
					if ((tmp12)){
						::lime::utils::ArrayBufferView tmp13;
						{
							::lime::utils::ArrayBufferView tmp14 = ::lime::utils::ArrayBufferView_obj::__new((int)0,(int)7);
							::lime::utils::ArrayBufferView _this = tmp14;
							_this->byteOffset = (int)0;
							int tmp15 = hx::Throw(HX_CSTRING("Invalid field access on null object"));
							_this->length = tmp15;
							int tmp16 = (_this->length * _this->bytesPerElement);
							_this->byteLength = tmp16;
							::haxe::io::Bytes tmp17;
							{
								::haxe::io::Bytes this2;
								int tmp18 = _this->byteLength;
								::haxe::io::Bytes tmp19 = ::haxe::io::Bytes_obj::alloc(tmp18);
								this2 = tmp19;
								tmp17 = this2;
							}
							_this->buffer = tmp17;
							_this->copyFromArray(((Array< Float >)(null())),null());
							tmp13 = _this;
						}
						this1 = tmp13;
					}
					else{
						bool tmp13 = false;
						if ((tmp13)){
							::lime::utils::ArrayBufferView tmp14;
							{
								::lime::utils::ArrayBufferView tmp15 = ::lime::utils::ArrayBufferView_obj::__new((int)0,(int)7);
								::lime::utils::ArrayBufferView _this = tmp15;
								cpp::ArrayBase array = hx::Throw(HX_CSTRING("Invalid field access on null object"));
								_this->byteOffset = (int)0;
								_this->length = array->__Field(HX_HCSTRING("length","\xe6","\x94","\x07","\x9f"), hx::paccDynamic );
								int tmp16 = (_this->length * _this->bytesPerElement);
								_this->byteLength = tmp16;
								::haxe::io::Bytes tmp17;
								{
									::haxe::io::Bytes this2;
									int tmp18 = _this->byteLength;
									::haxe::io::Bytes tmp19 = ::haxe::io::Bytes_obj::alloc(tmp18);
									this2 = tmp19;
									tmp17 = this2;
								}
								_this->buffer = tmp17;
								_this->copyFromArray(((Array< Float >)(array)),null());
								tmp14 = _this;
							}
							this1 = tmp14;
						}
						else{
							bool tmp14 = false;
							if ((tmp14)){
								::lime::utils::ArrayBufferView tmp15;
								{
									::lime::utils::ArrayBufferView tmp16 = ::lime::utils::ArrayBufferView_obj::__new((int)0,(int)7);
									::lime::utils::ArrayBufferView _this = tmp16;
									::haxe::io::Bytes tmp17 = hx::Throw(HX_CSTRING("Invalid field access on null object"));
									::haxe::io::Bytes srcData = tmp17;
									int tmp18 = hx::Throw(HX_CSTRING("Invalid field access on null object"));
									int srcLength = tmp18;
									int tmp19 = hx::Throw(HX_CSTRING("Invalid field access on null object"));
									int srcByteOffset = tmp19;
									int tmp20 = hx::Throw(HX_CSTRING("Invalid field access on null object"));
									int srcElementSize = tmp20;
									int elementSize = _this->bytesPerElement;
									int tmp21 = hx::Throw(HX_CSTRING("Invalid field access on null object"));
									int tmp22 = _this->type;
									bool tmp23 = (tmp21 == tmp22);
									if ((tmp23)){
										int srcLength1 = srcData->length;
										int tmp24 = (srcLength1 - srcByteOffset);
										int cloneLength = tmp24;
										::haxe::io::Bytes tmp25;
										{
											::haxe::io::Bytes this2;
											int tmp26 = cloneLength;
											::haxe::io::Bytes tmp27 = ::haxe::io::Bytes_obj::alloc(tmp26);
											this2 = tmp27;
											tmp25 = this2;
										}
										_this->buffer = tmp25;
										::haxe::io::Bytes tmp26 = srcData;
										int tmp27 = srcByteOffset;
										int tmp28 = cloneLength;
										_this->buffer->blit((int)0,tmp26,tmp27,tmp28);
									}
									else{
										HX_STACK_DO_THROW(HX_HCSTRING("unimplemented","\x09","\x2f","\x74","\xb4"));
									}
									int tmp24 = (_this->bytesPerElement * srcLength);
									_this->byteLength = tmp24;
									_this->byteOffset = (int)0;
									_this->length = srcLength;
									tmp15 = _this;
								}
								this1 = tmp15;
							}
							else{
								bool tmp15 = (buffer != null());
								if ((tmp15)){
									::lime::utils::ArrayBufferView tmp16;
									{
										::lime::utils::ArrayBufferView tmp17 = ::lime::utils::ArrayBufferView_obj::__new((int)0,(int)7);
										::lime::utils::ArrayBufferView _this = tmp17;
										int in_byteOffset = byte_offset;
										bool tmp18 = (in_byteOffset < (int)0);
										if ((tmp18)){
											HX_STACK_DO_THROW(::lime::utils::TAError_obj::RangeError);
										}
										int tmp19 = hx::Mod(in_byteOffset,_this->bytesPerElement);
										bool tmp20 = (tmp19 != (int)0);
										if ((tmp20)){
											HX_STACK_DO_THROW(::lime::utils::TAError_obj::RangeError);
										}
										int bufferByteLength = buffer->length;
										int elementSize = _this->bytesPerElement;
										int newByteLength = bufferByteLength;
										bool tmp21 = (len == null());
										if ((tmp21)){
											int tmp22 = (bufferByteLength - in_byteOffset);
											newByteLength = tmp22;
											int tmp23 = hx::Mod(bufferByteLength,_this->bytesPerElement);
											bool tmp24 = (tmp23 != (int)0);
											if ((tmp24)){
												HX_STACK_DO_THROW(::lime::utils::TAError_obj::RangeError);
											}
											bool tmp25 = (newByteLength < (int)0);
											if ((tmp25)){
												HX_STACK_DO_THROW(::lime::utils::TAError_obj::RangeError);
											}
										}
										else{
											int tmp22 = (len * _this->bytesPerElement);
											newByteLength = tmp22;
											int tmp23 = (in_byteOffset + newByteLength);
											int newRange = tmp23;
											bool tmp24 = (newRange > bufferByteLength);
											if ((tmp24)){
												HX_STACK_DO_THROW(::lime::utils::TAError_obj::RangeError);
											}
										}
										_this->buffer = buffer;
										_this->byteOffset = in_byteOffset;
										_this->byteLength = newByteLength;
										Float tmp22 = (Float(newByteLength) / Float(_this->bytesPerElement));
										int tmp23 = ::Std_obj::_int(tmp22);
										_this->length = tmp23;
										tmp16 = _this;
									}
									this1 = tmp16;
								}
								else{
									HX_STACK_DO_THROW(HX_HCSTRING("Invalid constructor arguments for UInt32Array","\x10","\x43","\xeb","\x8e"));
								}
							}
						}
					}
				}
				tmp7 = this1;
			}
			;break;
			case (int)8: {
				::haxe::io::Bytes tmp10 = this->buffer;
				::haxe::io::Bytes buffer = tmp10;
				::lime::utils::ArrayBufferView this1;
				bool tmp11 = false;
				if ((tmp11)){
					::lime::utils::ArrayBufferView tmp12 = ::lime::utils::ArrayBufferView_obj::__new(null(),(int)8);
					this1 = tmp12;
				}
				else{
					bool tmp12 = false;
					if ((tmp12)){
						::lime::utils::ArrayBufferView tmp13;
						{
							::lime::utils::ArrayBufferView tmp14 = ::lime::utils::ArrayBufferView_obj::__new((int)0,(int)8);
							::lime::utils::ArrayBufferView _this = tmp14;
							_this->byteOffset = (int)0;
							int tmp15 = hx::Throw(HX_CSTRING("Invalid field access on null object"));
							_this->length = tmp15;
							int tmp16 = (_this->length * _this->bytesPerElement);
							_this->byteLength = tmp16;
							::haxe::io::Bytes tmp17;
							{
								::haxe::io::Bytes this2;
								int tmp18 = _this->byteLength;
								::haxe::io::Bytes tmp19 = ::haxe::io::Bytes_obj::alloc(tmp18);
								this2 = tmp19;
								tmp17 = this2;
							}
							_this->buffer = tmp17;
							_this->copyFromArray(((Array< Float >)(null())),null());
							tmp13 = _this;
						}
						this1 = tmp13;
					}
					else{
						bool tmp13 = false;
						if ((tmp13)){
							::lime::utils::ArrayBufferView tmp14;
							{
								::lime::utils::ArrayBufferView tmp15 = ::lime::utils::ArrayBufferView_obj::__new((int)0,(int)8);
								::lime::utils::ArrayBufferView _this = tmp15;
								cpp::ArrayBase array = hx::Throw(HX_CSTRING("Invalid field access on null object"));
								_this->byteOffset = (int)0;
								_this->length = array->__Field(HX_HCSTRING("length","\xe6","\x94","\x07","\x9f"), hx::paccDynamic );
								int tmp16 = (_this->length * _this->bytesPerElement);
								_this->byteLength = tmp16;
								::haxe::io::Bytes tmp17;
								{
									::haxe::io::Bytes this2;
									int tmp18 = _this->byteLength;
									::haxe::io::Bytes tmp19 = ::haxe::io::Bytes_obj::alloc(tmp18);
									this2 = tmp19;
									tmp17 = this2;
								}
								_this->buffer = tmp17;
								_this->copyFromArray(((Array< Float >)(array)),null());
								tmp14 = _this;
							}
							this1 = tmp14;
						}
						else{
							bool tmp14 = false;
							if ((tmp14)){
								::lime::utils::ArrayBufferView tmp15;
								{
									::lime::utils::ArrayBufferView tmp16 = ::lime::utils::ArrayBufferView_obj::__new((int)0,(int)8);
									::lime::utils::ArrayBufferView _this = tmp16;
									::haxe::io::Bytes tmp17 = hx::Throw(HX_CSTRING("Invalid field access on null object"));
									::haxe::io::Bytes srcData = tmp17;
									int tmp18 = hx::Throw(HX_CSTRING("Invalid field access on null object"));
									int srcLength = tmp18;
									int tmp19 = hx::Throw(HX_CSTRING("Invalid field access on null object"));
									int srcByteOffset = tmp19;
									int tmp20 = hx::Throw(HX_CSTRING("Invalid field access on null object"));
									int srcElementSize = tmp20;
									int elementSize = _this->bytesPerElement;
									int tmp21 = hx::Throw(HX_CSTRING("Invalid field access on null object"));
									int tmp22 = _this->type;
									bool tmp23 = (tmp21 == tmp22);
									if ((tmp23)){
										int srcLength1 = srcData->length;
										int tmp24 = (srcLength1 - srcByteOffset);
										int cloneLength = tmp24;
										::haxe::io::Bytes tmp25;
										{
											::haxe::io::Bytes this2;
											int tmp26 = cloneLength;
											::haxe::io::Bytes tmp27 = ::haxe::io::Bytes_obj::alloc(tmp26);
											this2 = tmp27;
											tmp25 = this2;
										}
										_this->buffer = tmp25;
										::haxe::io::Bytes tmp26 = srcData;
										int tmp27 = srcByteOffset;
										int tmp28 = cloneLength;
										_this->buffer->blit((int)0,tmp26,tmp27,tmp28);
									}
									else{
										HX_STACK_DO_THROW(HX_HCSTRING("unimplemented","\x09","\x2f","\x74","\xb4"));
									}
									int tmp24 = (_this->bytesPerElement * srcLength);
									_this->byteLength = tmp24;
									_this->byteOffset = (int)0;
									_this->length = srcLength;
									tmp15 = _this;
								}
								this1 = tmp15;
							}
							else{
								bool tmp15 = (buffer != null());
								if ((tmp15)){
									::lime::utils::ArrayBufferView tmp16;
									{
										::lime::utils::ArrayBufferView tmp17 = ::lime::utils::ArrayBufferView_obj::__new((int)0,(int)8);
										::lime::utils::ArrayBufferView _this = tmp17;
										int in_byteOffset = byte_offset;
										bool tmp18 = (in_byteOffset < (int)0);
										if ((tmp18)){
											HX_STACK_DO_THROW(::lime::utils::TAError_obj::RangeError);
										}
										int tmp19 = hx::Mod(in_byteOffset,_this->bytesPerElement);
										bool tmp20 = (tmp19 != (int)0);
										if ((tmp20)){
											HX_STACK_DO_THROW(::lime::utils::TAError_obj::RangeError);
										}
										int bufferByteLength = buffer->length;
										int elementSize = _this->bytesPerElement;
										int newByteLength = bufferByteLength;
										bool tmp21 = (len == null());
										if ((tmp21)){
											int tmp22 = (bufferByteLength - in_byteOffset);
											newByteLength = tmp22;
											int tmp23 = hx::Mod(bufferByteLength,_this->bytesPerElement);
											bool tmp24 = (tmp23 != (int)0);
											if ((tmp24)){
												HX_STACK_DO_THROW(::lime::utils::TAError_obj::RangeError);
											}
											bool tmp25 = (newByteLength < (int)0);
											if ((tmp25)){
												HX_STACK_DO_THROW(::lime::utils::TAError_obj::RangeError);
											}
										}
										else{
											int tmp22 = (len * _this->bytesPerElement);
											newByteLength = tmp22;
											int tmp23 = (in_byteOffset + newByteLength);
											int newRange = tmp23;
											bool tmp24 = (newRange > bufferByteLength);
											if ((tmp24)){
												HX_STACK_DO_THROW(::lime::utils::TAError_obj::RangeError);
											}
										}
										_this->buffer = buffer;
										_this->byteOffset = in_byteOffset;
										_this->byteLength = newByteLength;
										Float tmp22 = (Float(newByteLength) / Float(_this->bytesPerElement));
										int tmp23 = ::Std_obj::_int(tmp22);
										_this->length = tmp23;
										tmp16 = _this;
									}
									this1 = tmp16;
								}
								else{
									HX_STACK_DO_THROW(HX_HCSTRING("Invalid constructor arguments for Float32Array","\x8e","\xc1","\xf4","\xd4"));
								}
							}
						}
					}
				}
				tmp7 = this1;
			}
			;break;
			case (int)9: {
				::haxe::io::Bytes tmp10 = this->buffer;
				::haxe::io::Bytes buffer = tmp10;
				::lime::utils::ArrayBufferView this1;
				bool tmp11 = false;
				if ((tmp11)){
					::lime::utils::ArrayBufferView tmp12 = ::lime::utils::ArrayBufferView_obj::__new(null(),(int)9);
					this1 = tmp12;
				}
				else{
					bool tmp12 = false;
					if ((tmp12)){
						::lime::utils::ArrayBufferView tmp13;
						{
							::lime::utils::ArrayBufferView tmp14 = ::lime::utils::ArrayBufferView_obj::__new((int)0,(int)9);
							::lime::utils::ArrayBufferView _this = tmp14;
							_this->byteOffset = (int)0;
							int tmp15 = hx::Throw(HX_CSTRING("Invalid field access on null object"));
							_this->length = tmp15;
							int tmp16 = (_this->length * _this->bytesPerElement);
							_this->byteLength = tmp16;
							::haxe::io::Bytes tmp17;
							{
								::haxe::io::Bytes this2;
								int tmp18 = _this->byteLength;
								::haxe::io::Bytes tmp19 = ::haxe::io::Bytes_obj::alloc(tmp18);
								this2 = tmp19;
								tmp17 = this2;
							}
							_this->buffer = tmp17;
							_this->copyFromArray(((Array< Float >)(null())),null());
							tmp13 = _this;
						}
						this1 = tmp13;
					}
					else{
						bool tmp13 = false;
						if ((tmp13)){
							::lime::utils::ArrayBufferView tmp14;
							{
								::lime::utils::ArrayBufferView tmp15 = ::lime::utils::ArrayBufferView_obj::__new((int)0,(int)9);
								::lime::utils::ArrayBufferView _this = tmp15;
								cpp::ArrayBase array = hx::Throw(HX_CSTRING("Invalid field access on null object"));
								_this->byteOffset = (int)0;
								_this->length = array->__Field(HX_HCSTRING("length","\xe6","\x94","\x07","\x9f"), hx::paccDynamic );
								int tmp16 = (_this->length * _this->bytesPerElement);
								_this->byteLength = tmp16;
								::haxe::io::Bytes tmp17;
								{
									::haxe::io::Bytes this2;
									int tmp18 = _this->byteLength;
									::haxe::io::Bytes tmp19 = ::haxe::io::Bytes_obj::alloc(tmp18);
									this2 = tmp19;
									tmp17 = this2;
								}
								_this->buffer = tmp17;
								_this->copyFromArray(((Array< Float >)(array)),null());
								tmp14 = _this;
							}
							this1 = tmp14;
						}
						else{
							bool tmp14 = false;
							if ((tmp14)){
								::lime::utils::ArrayBufferView tmp15;
								{
									::lime::utils::ArrayBufferView tmp16 = ::lime::utils::ArrayBufferView_obj::__new((int)0,(int)9);
									::lime::utils::ArrayBufferView _this = tmp16;
									::haxe::io::Bytes tmp17 = hx::Throw(HX_CSTRING("Invalid field access on null object"));
									::haxe::io::Bytes srcData = tmp17;
									int tmp18 = hx::Throw(HX_CSTRING("Invalid field access on null object"));
									int srcLength = tmp18;
									int tmp19 = hx::Throw(HX_CSTRING("Invalid field access on null object"));
									int srcByteOffset = tmp19;
									int tmp20 = hx::Throw(HX_CSTRING("Invalid field access on null object"));
									int srcElementSize = tmp20;
									int elementSize = _this->bytesPerElement;
									int tmp21 = hx::Throw(HX_CSTRING("Invalid field access on null object"));
									int tmp22 = _this->type;
									bool tmp23 = (tmp21 == tmp22);
									if ((tmp23)){
										int srcLength1 = srcData->length;
										int tmp24 = (srcLength1 - srcByteOffset);
										int cloneLength = tmp24;
										::haxe::io::Bytes tmp25;
										{
											::haxe::io::Bytes this2;
											int tmp26 = cloneLength;
											::haxe::io::Bytes tmp27 = ::haxe::io::Bytes_obj::alloc(tmp26);
											this2 = tmp27;
											tmp25 = this2;
										}
										_this->buffer = tmp25;
										::haxe::io::Bytes tmp26 = srcData;
										int tmp27 = srcByteOffset;
										int tmp28 = cloneLength;
										_this->buffer->blit((int)0,tmp26,tmp27,tmp28);
									}
									else{
										HX_STACK_DO_THROW(HX_HCSTRING("unimplemented","\x09","\x2f","\x74","\xb4"));
									}
									int tmp24 = (_this->bytesPerElement * srcLength);
									_this->byteLength = tmp24;
									_this->byteOffset = (int)0;
									_this->length = srcLength;
									tmp15 = _this;
								}
								this1 = tmp15;
							}
							else{
								bool tmp15 = (buffer != null());
								if ((tmp15)){
									::lime::utils::ArrayBufferView tmp16;
									{
										::lime::utils::ArrayBufferView tmp17 = ::lime::utils::ArrayBufferView_obj::__new((int)0,(int)9);
										::lime::utils::ArrayBufferView _this = tmp17;
										int in_byteOffset = byte_offset;
										bool tmp18 = (in_byteOffset < (int)0);
										if ((tmp18)){
											HX_STACK_DO_THROW(::lime::utils::TAError_obj::RangeError);
										}
										int tmp19 = hx::Mod(in_byteOffset,_this->bytesPerElement);
										bool tmp20 = (tmp19 != (int)0);
										if ((tmp20)){
											HX_STACK_DO_THROW(::lime::utils::TAError_obj::RangeError);
										}
										int bufferByteLength = buffer->length;
										int elementSize = _this->bytesPerElement;
										int newByteLength = bufferByteLength;
										bool tmp21 = (len == null());
										if ((tmp21)){
											int tmp22 = (bufferByteLength - in_byteOffset);
											newByteLength = tmp22;
											int tmp23 = hx::Mod(bufferByteLength,_this->bytesPerElement);
											bool tmp24 = (tmp23 != (int)0);
											if ((tmp24)){
												HX_STACK_DO_THROW(::lime::utils::TAError_obj::RangeError);
											}
											bool tmp25 = (newByteLength < (int)0);
											if ((tmp25)){
												HX_STACK_DO_THROW(::lime::utils::TAError_obj::RangeError);
											}
										}
										else{
											int tmp22 = (len * _this->bytesPerElement);
											newByteLength = tmp22;
											int tmp23 = (in_byteOffset + newByteLength);
											int newRange = tmp23;
											bool tmp24 = (newRange > bufferByteLength);
											if ((tmp24)){
												HX_STACK_DO_THROW(::lime::utils::TAError_obj::RangeError);
											}
										}
										_this->buffer = buffer;
										_this->byteOffset = in_byteOffset;
										_this->byteLength = newByteLength;
										Float tmp22 = (Float(newByteLength) / Float(_this->bytesPerElement));
										int tmp23 = ::Std_obj::_int(tmp22);
										_this->length = tmp23;
										tmp16 = _this;
									}
									this1 = tmp16;
								}
								else{
									HX_STACK_DO_THROW(HX_HCSTRING("Invalid constructor arguments for Float64Array","\x8f","\xde","\x6b","\x1e"));
								}
							}
						}
					}
				}
				tmp7 = this1;
			}
			;break;
			case (int)0: {
				HX_STACK_DO_THROW(HX_HCSTRING("subarray on a blank ArrayBufferView","\x39","\x87","\xfd","\x19"));
			}
			;break;
		}
	}
	::lime::utils::ArrayBufferView view = tmp7;
	::lime::utils::ArrayBufferView tmp8 = view;
	return tmp8;
}


HX_DEFINE_DYNAMIC_FUNC2(ArrayBufferView_obj,subarray_lime_utils_Int16Array,return )

::lime::utils::ArrayBufferView ArrayBufferView_obj::subarray_lime_utils_UInt16Array( int begin,Dynamic end){
	bool tmp = (end == null());
	if ((tmp)){
		int tmp1 = this->length;
		end = tmp1;
	}
	int tmp1 = (end - begin);
	int len = tmp1;
	int tmp2 = begin;
	int tmp3 = this->bytesPerElement;
	int tmp4 = (tmp2 * tmp3);
	int tmp5 = this->byteOffset;
	int tmp6 = (tmp4 + tmp5);
	int byte_offset = tmp6;
	::lime::utils::ArrayBufferView tmp7;
	{
		int tmp8 = this->type;
		int _g = tmp8;
		int tmp9 = _g;
		switch( (int)(tmp9)){
			case (int)1: {
				::haxe::io::Bytes tmp10 = this->buffer;
				::haxe::io::Bytes buffer = tmp10;
				::lime::utils::ArrayBufferView this1;
				bool tmp11 = false;
				if ((tmp11)){
					::lime::utils::ArrayBufferView tmp12 = ::lime::utils::ArrayBufferView_obj::__new(null(),(int)1);
					this1 = tmp12;
				}
				else{
					bool tmp12 = false;
					if ((tmp12)){
						::lime::utils::ArrayBufferView tmp13;
						{
							::lime::utils::ArrayBufferView tmp14 = ::lime::utils::ArrayBufferView_obj::__new((int)0,(int)1);
							::lime::utils::ArrayBufferView _this = tmp14;
							_this->byteOffset = (int)0;
							int tmp15 = hx::Throw(HX_CSTRING("Invalid field access on null object"));
							_this->length = tmp15;
							int tmp16 = (_this->length * _this->bytesPerElement);
							_this->byteLength = tmp16;
							::haxe::io::Bytes tmp17;
							{
								::haxe::io::Bytes this2;
								int tmp18 = _this->byteLength;
								::haxe::io::Bytes tmp19 = ::haxe::io::Bytes_obj::alloc(tmp18);
								this2 = tmp19;
								tmp17 = this2;
							}
							_this->buffer = tmp17;
							_this->copyFromArray(((Array< Float >)(null())),null());
							tmp13 = _this;
						}
						this1 = tmp13;
					}
					else{
						bool tmp13 = false;
						if ((tmp13)){
							::lime::utils::ArrayBufferView tmp14;
							{
								::lime::utils::ArrayBufferView tmp15 = ::lime::utils::ArrayBufferView_obj::__new((int)0,(int)1);
								::lime::utils::ArrayBufferView _this = tmp15;
								cpp::ArrayBase array = hx::Throw(HX_CSTRING("Invalid field access on null object"));
								_this->byteOffset = (int)0;
								_this->length = array->__Field(HX_HCSTRING("length","\xe6","\x94","\x07","\x9f"), hx::paccDynamic );
								int tmp16 = (_this->length * _this->bytesPerElement);
								_this->byteLength = tmp16;
								::haxe::io::Bytes tmp17;
								{
									::haxe::io::Bytes this2;
									int tmp18 = _this->byteLength;
									::haxe::io::Bytes tmp19 = ::haxe::io::Bytes_obj::alloc(tmp18);
									this2 = tmp19;
									tmp17 = this2;
								}
								_this->buffer = tmp17;
								_this->copyFromArray(((Array< Float >)(array)),null());
								tmp14 = _this;
							}
							this1 = tmp14;
						}
						else{
							bool tmp14 = false;
							if ((tmp14)){
								::lime::utils::ArrayBufferView tmp15;
								{
									::lime::utils::ArrayBufferView tmp16 = ::lime::utils::ArrayBufferView_obj::__new((int)0,(int)1);
									::lime::utils::ArrayBufferView _this = tmp16;
									::haxe::io::Bytes tmp17 = hx::Throw(HX_CSTRING("Invalid field access on null object"));
									::haxe::io::Bytes srcData = tmp17;
									int tmp18 = hx::Throw(HX_CSTRING("Invalid field access on null object"));
									int srcLength = tmp18;
									int tmp19 = hx::Throw(HX_CSTRING("Invalid field access on null object"));
									int srcByteOffset = tmp19;
									int tmp20 = hx::Throw(HX_CSTRING("Invalid field access on null object"));
									int srcElementSize = tmp20;
									int elementSize = _this->bytesPerElement;
									int tmp21 = hx::Throw(HX_CSTRING("Invalid field access on null object"));
									int tmp22 = _this->type;
									bool tmp23 = (tmp21 == tmp22);
									if ((tmp23)){
										int srcLength1 = srcData->length;
										int tmp24 = (srcLength1 - srcByteOffset);
										int cloneLength = tmp24;
										::haxe::io::Bytes tmp25;
										{
											::haxe::io::Bytes this2;
											int tmp26 = cloneLength;
											::haxe::io::Bytes tmp27 = ::haxe::io::Bytes_obj::alloc(tmp26);
											this2 = tmp27;
											tmp25 = this2;
										}
										_this->buffer = tmp25;
										::haxe::io::Bytes tmp26 = srcData;
										int tmp27 = srcByteOffset;
										int tmp28 = cloneLength;
										_this->buffer->blit((int)0,tmp26,tmp27,tmp28);
									}
									else{
										HX_STACK_DO_THROW(HX_HCSTRING("unimplemented","\x09","\x2f","\x74","\xb4"));
									}
									int tmp24 = (_this->bytesPerElement * srcLength);
									_this->byteLength = tmp24;
									_this->byteOffset = (int)0;
									_this->length = srcLength;
									tmp15 = _this;
								}
								this1 = tmp15;
							}
							else{
								bool tmp15 = (buffer != null());
								if ((tmp15)){
									::lime::utils::ArrayBufferView tmp16;
									{
										::lime::utils::ArrayBufferView tmp17 = ::lime::utils::ArrayBufferView_obj::__new((int)0,(int)1);
										::lime::utils::ArrayBufferView _this = tmp17;
										int in_byteOffset = byte_offset;
										bool tmp18 = (in_byteOffset < (int)0);
										if ((tmp18)){
											HX_STACK_DO_THROW(::lime::utils::TAError_obj::RangeError);
										}
										int tmp19 = hx::Mod(in_byteOffset,_this->bytesPerElement);
										bool tmp20 = (tmp19 != (int)0);
										if ((tmp20)){
											HX_STACK_DO_THROW(::lime::utils::TAError_obj::RangeError);
										}
										int bufferByteLength = buffer->length;
										int elementSize = _this->bytesPerElement;
										int newByteLength = bufferByteLength;
										bool tmp21 = (len == null());
										if ((tmp21)){
											int tmp22 = (bufferByteLength - in_byteOffset);
											newByteLength = tmp22;
											int tmp23 = hx::Mod(bufferByteLength,_this->bytesPerElement);
											bool tmp24 = (tmp23 != (int)0);
											if ((tmp24)){
												HX_STACK_DO_THROW(::lime::utils::TAError_obj::RangeError);
											}
											bool tmp25 = (newByteLength < (int)0);
											if ((tmp25)){
												HX_STACK_DO_THROW(::lime::utils::TAError_obj::RangeError);
											}
										}
										else{
											int tmp22 = (len * _this->bytesPerElement);
											newByteLength = tmp22;
											int tmp23 = (in_byteOffset + newByteLength);
											int newRange = tmp23;
											bool tmp24 = (newRange > bufferByteLength);
											if ((tmp24)){
												HX_STACK_DO_THROW(::lime::utils::TAError_obj::RangeError);
											}
										}
										_this->buffer = buffer;
										_this->byteOffset = in_byteOffset;
										_this->byteLength = newByteLength;
										Float tmp22 = (Float(newByteLength) / Float(_this->bytesPerElement));
										int tmp23 = ::Std_obj::_int(tmp22);
										_this->length = tmp23;
										tmp16 = _this;
									}
									this1 = tmp16;
								}
								else{
									HX_STACK_DO_THROW(HX_HCSTRING("Invalid constructor arguments for Int8Array","\x40","\x53","\xda","\x77"));
								}
							}
						}
					}
				}
				tmp7 = this1;
			}
			;break;
			case (int)2: {
				::haxe::io::Bytes tmp10 = this->buffer;
				::haxe::io::Bytes buffer = tmp10;
				::lime::utils::ArrayBufferView this1;
				bool tmp11 = false;
				if ((tmp11)){
					::lime::utils::ArrayBufferView tmp12 = ::lime::utils::ArrayBufferView_obj::__new(null(),(int)2);
					this1 = tmp12;
				}
				else{
					bool tmp12 = false;
					if ((tmp12)){
						::lime::utils::ArrayBufferView tmp13;
						{
							::lime::utils::ArrayBufferView tmp14 = ::lime::utils::ArrayBufferView_obj::__new((int)0,(int)2);
							::lime::utils::ArrayBufferView _this = tmp14;
							_this->byteOffset = (int)0;
							int tmp15 = hx::Throw(HX_CSTRING("Invalid field access on null object"));
							_this->length = tmp15;
							int tmp16 = (_this->length * _this->bytesPerElement);
							_this->byteLength = tmp16;
							::haxe::io::Bytes tmp17;
							{
								::haxe::io::Bytes this2;
								int tmp18 = _this->byteLength;
								::haxe::io::Bytes tmp19 = ::haxe::io::Bytes_obj::alloc(tmp18);
								this2 = tmp19;
								tmp17 = this2;
							}
							_this->buffer = tmp17;
							_this->copyFromArray(((Array< Float >)(null())),null());
							tmp13 = _this;
						}
						this1 = tmp13;
					}
					else{
						bool tmp13 = false;
						if ((tmp13)){
							::lime::utils::ArrayBufferView tmp14;
							{
								::lime::utils::ArrayBufferView tmp15 = ::lime::utils::ArrayBufferView_obj::__new((int)0,(int)2);
								::lime::utils::ArrayBufferView _this = tmp15;
								cpp::ArrayBase array = hx::Throw(HX_CSTRING("Invalid field access on null object"));
								_this->byteOffset = (int)0;
								_this->length = array->__Field(HX_HCSTRING("length","\xe6","\x94","\x07","\x9f"), hx::paccDynamic );
								int tmp16 = (_this->length * _this->bytesPerElement);
								_this->byteLength = tmp16;
								::haxe::io::Bytes tmp17;
								{
									::haxe::io::Bytes this2;
									int tmp18 = _this->byteLength;
									::haxe::io::Bytes tmp19 = ::haxe::io::Bytes_obj::alloc(tmp18);
									this2 = tmp19;
									tmp17 = this2;
								}
								_this->buffer = tmp17;
								_this->copyFromArray(((Array< Float >)(array)),null());
								tmp14 = _this;
							}
							this1 = tmp14;
						}
						else{
							bool tmp14 = false;
							if ((tmp14)){
								::lime::utils::ArrayBufferView tmp15;
								{
									::lime::utils::ArrayBufferView tmp16 = ::lime::utils::ArrayBufferView_obj::__new((int)0,(int)2);
									::lime::utils::ArrayBufferView _this = tmp16;
									::haxe::io::Bytes tmp17 = hx::Throw(HX_CSTRING("Invalid field access on null object"));
									::haxe::io::Bytes srcData = tmp17;
									int tmp18 = hx::Throw(HX_CSTRING("Invalid field access on null object"));
									int srcLength = tmp18;
									int tmp19 = hx::Throw(HX_CSTRING("Invalid field access on null object"));
									int srcByteOffset = tmp19;
									int tmp20 = hx::Throw(HX_CSTRING("Invalid field access on null object"));
									int srcElementSize = tmp20;
									int elementSize = _this->bytesPerElement;
									int tmp21 = hx::Throw(HX_CSTRING("Invalid field access on null object"));
									int tmp22 = _this->type;
									bool tmp23 = (tmp21 == tmp22);
									if ((tmp23)){
										int srcLength1 = srcData->length;
										int tmp24 = (srcLength1 - srcByteOffset);
										int cloneLength = tmp24;
										::haxe::io::Bytes tmp25;
										{
											::haxe::io::Bytes this2;
											int tmp26 = cloneLength;
											::haxe::io::Bytes tmp27 = ::haxe::io::Bytes_obj::alloc(tmp26);
											this2 = tmp27;
											tmp25 = this2;
										}
										_this->buffer = tmp25;
										::haxe::io::Bytes tmp26 = srcData;
										int tmp27 = srcByteOffset;
										int tmp28 = cloneLength;
										_this->buffer->blit((int)0,tmp26,tmp27,tmp28);
									}
									else{
										HX_STACK_DO_THROW(HX_HCSTRING("unimplemented","\x09","\x2f","\x74","\xb4"));
									}
									int tmp24 = (_this->bytesPerElement * srcLength);
									_this->byteLength = tmp24;
									_this->byteOffset = (int)0;
									_this->length = srcLength;
									tmp15 = _this;
								}
								this1 = tmp15;
							}
							else{
								bool tmp15 = (buffer != null());
								if ((tmp15)){
									::lime::utils::ArrayBufferView tmp16;
									{
										::lime::utils::ArrayBufferView tmp17 = ::lime::utils::ArrayBufferView_obj::__new((int)0,(int)2);
										::lime::utils::ArrayBufferView _this = tmp17;
										int in_byteOffset = byte_offset;
										bool tmp18 = (in_byteOffset < (int)0);
										if ((tmp18)){
											HX_STACK_DO_THROW(::lime::utils::TAError_obj::RangeError);
										}
										int tmp19 = hx::Mod(in_byteOffset,_this->bytesPerElement);
										bool tmp20 = (tmp19 != (int)0);
										if ((tmp20)){
											HX_STACK_DO_THROW(::lime::utils::TAError_obj::RangeError);
										}
										int bufferByteLength = buffer->length;
										int elementSize = _this->bytesPerElement;
										int newByteLength = bufferByteLength;
										bool tmp21 = (len == null());
										if ((tmp21)){
											int tmp22 = (bufferByteLength - in_byteOffset);
											newByteLength = tmp22;
											int tmp23 = hx::Mod(bufferByteLength,_this->bytesPerElement);
											bool tmp24 = (tmp23 != (int)0);
											if ((tmp24)){
												HX_STACK_DO_THROW(::lime::utils::TAError_obj::RangeError);
											}
											bool tmp25 = (newByteLength < (int)0);
											if ((tmp25)){
												HX_STACK_DO_THROW(::lime::utils::TAError_obj::RangeError);
											}
										}
										else{
											int tmp22 = (len * _this->bytesPerElement);
											newByteLength = tmp22;
											int tmp23 = (in_byteOffset + newByteLength);
											int newRange = tmp23;
											bool tmp24 = (newRange > bufferByteLength);
											if ((tmp24)){
												HX_STACK_DO_THROW(::lime::utils::TAError_obj::RangeError);
											}
										}
										_this->buffer = buffer;
										_this->byteOffset = in_byteOffset;
										_this->byteLength = newByteLength;
										Float tmp22 = (Float(newByteLength) / Float(_this->bytesPerElement));
										int tmp23 = ::Std_obj::_int(tmp22);
										_this->length = tmp23;
										tmp16 = _this;
									}
									this1 = tmp16;
								}
								else{
									HX_STACK_DO_THROW(HX_HCSTRING("Invalid constructor arguments for Int16Array","\x95","\xb2","\x95","\xa7"));
								}
							}
						}
					}
				}
				tmp7 = this1;
			}
			;break;
			case (int)3: {
				::haxe::io::Bytes tmp10 = this->buffer;
				::haxe::io::Bytes buffer = tmp10;
				::lime::utils::ArrayBufferView this1;
				bool tmp11 = false;
				if ((tmp11)){
					::lime::utils::ArrayBufferView tmp12 = ::lime::utils::ArrayBufferView_obj::__new(null(),(int)3);
					this1 = tmp12;
				}
				else{
					bool tmp12 = false;
					if ((tmp12)){
						::lime::utils::ArrayBufferView tmp13;
						{
							::lime::utils::ArrayBufferView tmp14 = ::lime::utils::ArrayBufferView_obj::__new((int)0,(int)3);
							::lime::utils::ArrayBufferView _this = tmp14;
							_this->byteOffset = (int)0;
							int tmp15 = hx::Throw(HX_CSTRING("Invalid field access on null object"));
							_this->length = tmp15;
							int tmp16 = (_this->length * _this->bytesPerElement);
							_this->byteLength = tmp16;
							::haxe::io::Bytes tmp17;
							{
								::haxe::io::Bytes this2;
								int tmp18 = _this->byteLength;
								::haxe::io::Bytes tmp19 = ::haxe::io::Bytes_obj::alloc(tmp18);
								this2 = tmp19;
								tmp17 = this2;
							}
							_this->buffer = tmp17;
							_this->copyFromArray(((Array< Float >)(null())),null());
							tmp13 = _this;
						}
						this1 = tmp13;
					}
					else{
						bool tmp13 = false;
						if ((tmp13)){
							::lime::utils::ArrayBufferView tmp14;
							{
								::lime::utils::ArrayBufferView tmp15 = ::lime::utils::ArrayBufferView_obj::__new((int)0,(int)3);
								::lime::utils::ArrayBufferView _this = tmp15;
								cpp::ArrayBase array = hx::Throw(HX_CSTRING("Invalid field access on null object"));
								_this->byteOffset = (int)0;
								_this->length = array->__Field(HX_HCSTRING("length","\xe6","\x94","\x07","\x9f"), hx::paccDynamic );
								int tmp16 = (_this->length * _this->bytesPerElement);
								_this->byteLength = tmp16;
								::haxe::io::Bytes tmp17;
								{
									::haxe::io::Bytes this2;
									int tmp18 = _this->byteLength;
									::haxe::io::Bytes tmp19 = ::haxe::io::Bytes_obj::alloc(tmp18);
									this2 = tmp19;
									tmp17 = this2;
								}
								_this->buffer = tmp17;
								_this->copyFromArray(((Array< Float >)(array)),null());
								tmp14 = _this;
							}
							this1 = tmp14;
						}
						else{
							bool tmp14 = false;
							if ((tmp14)){
								::lime::utils::ArrayBufferView tmp15;
								{
									::lime::utils::ArrayBufferView tmp16 = ::lime::utils::ArrayBufferView_obj::__new((int)0,(int)3);
									::lime::utils::ArrayBufferView _this = tmp16;
									::haxe::io::Bytes tmp17 = hx::Throw(HX_CSTRING("Invalid field access on null object"));
									::haxe::io::Bytes srcData = tmp17;
									int tmp18 = hx::Throw(HX_CSTRING("Invalid field access on null object"));
									int srcLength = tmp18;
									int tmp19 = hx::Throw(HX_CSTRING("Invalid field access on null object"));
									int srcByteOffset = tmp19;
									int tmp20 = hx::Throw(HX_CSTRING("Invalid field access on null object"));
									int srcElementSize = tmp20;
									int elementSize = _this->bytesPerElement;
									int tmp21 = hx::Throw(HX_CSTRING("Invalid field access on null object"));
									int tmp22 = _this->type;
									bool tmp23 = (tmp21 == tmp22);
									if ((tmp23)){
										int srcLength1 = srcData->length;
										int tmp24 = (srcLength1 - srcByteOffset);
										int cloneLength = tmp24;
										::haxe::io::Bytes tmp25;
										{
											::haxe::io::Bytes this2;
											int tmp26 = cloneLength;
											::haxe::io::Bytes tmp27 = ::haxe::io::Bytes_obj::alloc(tmp26);
											this2 = tmp27;
											tmp25 = this2;
										}
										_this->buffer = tmp25;
										::haxe::io::Bytes tmp26 = srcData;
										int tmp27 = srcByteOffset;
										int tmp28 = cloneLength;
										_this->buffer->blit((int)0,tmp26,tmp27,tmp28);
									}
									else{
										HX_STACK_DO_THROW(HX_HCSTRING("unimplemented","\x09","\x2f","\x74","\xb4"));
									}
									int tmp24 = (_this->bytesPerElement * srcLength);
									_this->byteLength = tmp24;
									_this->byteOffset = (int)0;
									_this->length = srcLength;
									tmp15 = _this;
								}
								this1 = tmp15;
							}
							else{
								bool tmp15 = (buffer != null());
								if ((tmp15)){
									::lime::utils::ArrayBufferView tmp16;
									{
										::lime::utils::ArrayBufferView tmp17 = ::lime::utils::ArrayBufferView_obj::__new((int)0,(int)3);
										::lime::utils::ArrayBufferView _this = tmp17;
										int in_byteOffset = byte_offset;
										bool tmp18 = (in_byteOffset < (int)0);
										if ((tmp18)){
											HX_STACK_DO_THROW(::lime::utils::TAError_obj::RangeError);
										}
										int tmp19 = hx::Mod(in_byteOffset,_this->bytesPerElement);
										bool tmp20 = (tmp19 != (int)0);
										if ((tmp20)){
											HX_STACK_DO_THROW(::lime::utils::TAError_obj::RangeError);
										}
										int bufferByteLength = buffer->length;
										int elementSize = _this->bytesPerElement;
										int newByteLength = bufferByteLength;
										bool tmp21 = (len == null());
										if ((tmp21)){
											int tmp22 = (bufferByteLength - in_byteOffset);
											newByteLength = tmp22;
											int tmp23 = hx::Mod(bufferByteLength,_this->bytesPerElement);
											bool tmp24 = (tmp23 != (int)0);
											if ((tmp24)){
												HX_STACK_DO_THROW(::lime::utils::TAError_obj::RangeError);
											}
											bool tmp25 = (newByteLength < (int)0);
											if ((tmp25)){
												HX_STACK_DO_THROW(::lime::utils::TAError_obj::RangeError);
											}
										}
										else{
											int tmp22 = (len * _this->bytesPerElement);
											newByteLength = tmp22;
											int tmp23 = (in_byteOffset + newByteLength);
											int newRange = tmp23;
											bool tmp24 = (newRange > bufferByteLength);
											if ((tmp24)){
												HX_STACK_DO_THROW(::lime::utils::TAError_obj::RangeError);
											}
										}
										_this->buffer = buffer;
										_this->byteOffset = in_byteOffset;
										_this->byteLength = newByteLength;
										Float tmp22 = (Float(newByteLength) / Float(_this->bytesPerElement));
										int tmp23 = ::Std_obj::_int(tmp22);
										_this->length = tmp23;
										tmp16 = _this;
									}
									this1 = tmp16;
								}
								else{
									HX_STACK_DO_THROW(HX_HCSTRING("Invalid constructor arguments for Int32Array","\x9b","\x2e","\x53","\x61"));
								}
							}
						}
					}
				}
				tmp7 = this1;
			}
			;break;
			case (int)4: {
				::haxe::io::Bytes tmp10 = this->buffer;
				::haxe::io::Bytes buffer = tmp10;
				::lime::utils::ArrayBufferView this1;
				bool tmp11 = false;
				if ((tmp11)){
					::lime::utils::ArrayBufferView tmp12 = ::lime::utils::ArrayBufferView_obj::__new(null(),(int)4);
					this1 = tmp12;
				}
				else{
					bool tmp12 = false;
					if ((tmp12)){
						::lime::utils::ArrayBufferView tmp13;
						{
							::lime::utils::ArrayBufferView tmp14 = ::lime::utils::ArrayBufferView_obj::__new((int)0,(int)4);
							::lime::utils::ArrayBufferView _this = tmp14;
							_this->byteOffset = (int)0;
							int tmp15 = hx::Throw(HX_CSTRING("Invalid field access on null object"));
							_this->length = tmp15;
							int tmp16 = (_this->length * _this->bytesPerElement);
							_this->byteLength = tmp16;
							::haxe::io::Bytes tmp17;
							{
								::haxe::io::Bytes this2;
								int tmp18 = _this->byteLength;
								::haxe::io::Bytes tmp19 = ::haxe::io::Bytes_obj::alloc(tmp18);
								this2 = tmp19;
								tmp17 = this2;
							}
							_this->buffer = tmp17;
							_this->copyFromArray(((Array< Float >)(null())),null());
							tmp13 = _this;
						}
						this1 = tmp13;
					}
					else{
						bool tmp13 = false;
						if ((tmp13)){
							::lime::utils::ArrayBufferView tmp14;
							{
								::lime::utils::ArrayBufferView tmp15 = ::lime::utils::ArrayBufferView_obj::__new((int)0,(int)4);
								::lime::utils::ArrayBufferView _this = tmp15;
								cpp::ArrayBase array = hx::Throw(HX_CSTRING("Invalid field access on null object"));
								_this->byteOffset = (int)0;
								_this->length = array->__Field(HX_HCSTRING("length","\xe6","\x94","\x07","\x9f"), hx::paccDynamic );
								int tmp16 = (_this->length * _this->bytesPerElement);
								_this->byteLength = tmp16;
								::haxe::io::Bytes tmp17;
								{
									::haxe::io::Bytes this2;
									int tmp18 = _this->byteLength;
									::haxe::io::Bytes tmp19 = ::haxe::io::Bytes_obj::alloc(tmp18);
									this2 = tmp19;
									tmp17 = this2;
								}
								_this->buffer = tmp17;
								_this->copyFromArray(((Array< Float >)(array)),null());
								tmp14 = _this;
							}
							this1 = tmp14;
						}
						else{
							bool tmp14 = false;
							if ((tmp14)){
								::lime::utils::ArrayBufferView tmp15;
								{
									::lime::utils::ArrayBufferView tmp16 = ::lime::utils::ArrayBufferView_obj::__new((int)0,(int)4);
									::lime::utils::ArrayBufferView _this = tmp16;
									::haxe::io::Bytes tmp17 = hx::Throw(HX_CSTRING("Invalid field access on null object"));
									::haxe::io::Bytes srcData = tmp17;
									int tmp18 = hx::Throw(HX_CSTRING("Invalid field access on null object"));
									int srcLength = tmp18;
									int tmp19 = hx::Throw(HX_CSTRING("Invalid field access on null object"));
									int srcByteOffset = tmp19;
									int tmp20 = hx::Throw(HX_CSTRING("Invalid field access on null object"));
									int srcElementSize = tmp20;
									int elementSize = _this->bytesPerElement;
									int tmp21 = hx::Throw(HX_CSTRING("Invalid field access on null object"));
									int tmp22 = _this->type;
									bool tmp23 = (tmp21 == tmp22);
									if ((tmp23)){
										int srcLength1 = srcData->length;
										int tmp24 = (srcLength1 - srcByteOffset);
										int cloneLength = tmp24;
										::haxe::io::Bytes tmp25;
										{
											::haxe::io::Bytes this2;
											int tmp26 = cloneLength;
											::haxe::io::Bytes tmp27 = ::haxe::io::Bytes_obj::alloc(tmp26);
											this2 = tmp27;
											tmp25 = this2;
										}
										_this->buffer = tmp25;
										::haxe::io::Bytes tmp26 = srcData;
										int tmp27 = srcByteOffset;
										int tmp28 = cloneLength;
										_this->buffer->blit((int)0,tmp26,tmp27,tmp28);
									}
									else{
										HX_STACK_DO_THROW(HX_HCSTRING("unimplemented","\x09","\x2f","\x74","\xb4"));
									}
									int tmp24 = (_this->bytesPerElement * srcLength);
									_this->byteLength = tmp24;
									_this->byteOffset = (int)0;
									_this->length = srcLength;
									tmp15 = _this;
								}
								this1 = tmp15;
							}
							else{
								bool tmp15 = (buffer != null());
								if ((tmp15)){
									::lime::utils::ArrayBufferView tmp16;
									{
										::lime::utils::ArrayBufferView tmp17 = ::lime::utils::ArrayBufferView_obj::__new((int)0,(int)4);
										::lime::utils::ArrayBufferView _this = tmp17;
										int in_byteOffset = byte_offset;
										bool tmp18 = (in_byteOffset < (int)0);
										if ((tmp18)){
											HX_STACK_DO_THROW(::lime::utils::TAError_obj::RangeError);
										}
										int tmp19 = hx::Mod(in_byteOffset,_this->bytesPerElement);
										bool tmp20 = (tmp19 != (int)0);
										if ((tmp20)){
											HX_STACK_DO_THROW(::lime::utils::TAError_obj::RangeError);
										}
										int bufferByteLength = buffer->length;
										int elementSize = _this->bytesPerElement;
										int newByteLength = bufferByteLength;
										bool tmp21 = (len == null());
										if ((tmp21)){
											int tmp22 = (bufferByteLength - in_byteOffset);
											newByteLength = tmp22;
											int tmp23 = hx::Mod(bufferByteLength,_this->bytesPerElement);
											bool tmp24 = (tmp23 != (int)0);
											if ((tmp24)){
												HX_STACK_DO_THROW(::lime::utils::TAError_obj::RangeError);
											}
											bool tmp25 = (newByteLength < (int)0);
											if ((tmp25)){
												HX_STACK_DO_THROW(::lime::utils::TAError_obj::RangeError);
											}
										}
										else{
											int tmp22 = (len * _this->bytesPerElement);
											newByteLength = tmp22;
											int tmp23 = (in_byteOffset + newByteLength);
											int newRange = tmp23;
											bool tmp24 = (newRange > bufferByteLength);
											if ((tmp24)){
												HX_STACK_DO_THROW(::lime::utils::TAError_obj::RangeError);
											}
										}
										_this->buffer = buffer;
										_this->byteOffset = in_byteOffset;
										_this->byteLength = newByteLength;
										Float tmp22 = (Float(newByteLength) / Float(_this->bytesPerElement));
										int tmp23 = ::Std_obj::_int(tmp22);
										_this->length = tmp23;
										tmp16 = _this;
									}
									this1 = tmp16;
								}
								else{
									HX_STACK_DO_THROW(HX_HCSTRING("Invalid constructor arguments for UInt8Array","\x6b","\x44","\xd5","\x85"));
								}
							}
						}
					}
				}
				tmp7 = this1;
			}
			;break;
			case (int)5: {
				::haxe::io::Bytes tmp10 = this->buffer;
				::haxe::io::Bytes buffer = tmp10;
				::lime::utils::ArrayBufferView this1;
				bool tmp11 = false;
				if ((tmp11)){
					::lime::utils::ArrayBufferView tmp12 = ::lime::utils::ArrayBufferView_obj::__new(null(),(int)5);
					this1 = tmp12;
				}
				else{
					bool tmp12 = false;
					if ((tmp12)){
						::lime::utils::ArrayBufferView tmp13;
						{
							::lime::utils::ArrayBufferView tmp14 = ::lime::utils::ArrayBufferView_obj::__new((int)0,(int)5);
							::lime::utils::ArrayBufferView _this = tmp14;
							_this->byteOffset = (int)0;
							int tmp15 = hx::Throw(HX_CSTRING("Invalid field access on null object"));
							_this->length = tmp15;
							int tmp16 = (_this->length * _this->bytesPerElement);
							_this->byteLength = tmp16;
							::haxe::io::Bytes tmp17;
							{
								::haxe::io::Bytes this2;
								int tmp18 = _this->byteLength;
								::haxe::io::Bytes tmp19 = ::haxe::io::Bytes_obj::alloc(tmp18);
								this2 = tmp19;
								tmp17 = this2;
							}
							_this->buffer = tmp17;
							_this->copyFromArray(((Array< Float >)(null())),null());
							tmp13 = _this;
						}
						this1 = tmp13;
					}
					else{
						bool tmp13 = false;
						if ((tmp13)){
							::lime::utils::ArrayBufferView tmp14;
							{
								::lime::utils::ArrayBufferView tmp15 = ::lime::utils::ArrayBufferView_obj::__new((int)0,(int)5);
								::lime::utils::ArrayBufferView _this = tmp15;
								cpp::ArrayBase array = hx::Throw(HX_CSTRING("Invalid field access on null object"));
								_this->byteOffset = (int)0;
								_this->length = array->__Field(HX_HCSTRING("length","\xe6","\x94","\x07","\x9f"), hx::paccDynamic );
								int tmp16 = (_this->length * _this->bytesPerElement);
								_this->byteLength = tmp16;
								::haxe::io::Bytes tmp17;
								{
									::haxe::io::Bytes this2;
									int tmp18 = _this->byteLength;
									::haxe::io::Bytes tmp19 = ::haxe::io::Bytes_obj::alloc(tmp18);
									this2 = tmp19;
									tmp17 = this2;
								}
								_this->buffer = tmp17;
								_this->copyFromArray(((Array< Float >)(array)),null());
								tmp14 = _this;
							}
							this1 = tmp14;
						}
						else{
							bool tmp14 = false;
							if ((tmp14)){
								::lime::utils::ArrayBufferView tmp15;
								{
									::lime::utils::ArrayBufferView tmp16 = ::lime::utils::ArrayBufferView_obj::__new((int)0,(int)5);
									::lime::utils::ArrayBufferView _this = tmp16;
									::haxe::io::Bytes tmp17 = hx::Throw(HX_CSTRING("Invalid field access on null object"));
									::haxe::io::Bytes srcData = tmp17;
									int tmp18 = hx::Throw(HX_CSTRING("Invalid field access on null object"));
									int srcLength = tmp18;
									int tmp19 = hx::Throw(HX_CSTRING("Invalid field access on null object"));
									int srcByteOffset = tmp19;
									int tmp20 = hx::Throw(HX_CSTRING("Invalid field access on null object"));
									int srcElementSize = tmp20;
									int elementSize = _this->bytesPerElement;
									int tmp21 = hx::Throw(HX_CSTRING("Invalid field access on null object"));
									int tmp22 = _this->type;
									bool tmp23 = (tmp21 == tmp22);
									if ((tmp23)){
										int srcLength1 = srcData->length;
										int tmp24 = (srcLength1 - srcByteOffset);
										int cloneLength = tmp24;
										::haxe::io::Bytes tmp25;
										{
											::haxe::io::Bytes this2;
											int tmp26 = cloneLength;
											::haxe::io::Bytes tmp27 = ::haxe::io::Bytes_obj::alloc(tmp26);
											this2 = tmp27;
											tmp25 = this2;
										}
										_this->buffer = tmp25;
										::haxe::io::Bytes tmp26 = srcData;
										int tmp27 = srcByteOffset;
										int tmp28 = cloneLength;
										_this->buffer->blit((int)0,tmp26,tmp27,tmp28);
									}
									else{
										HX_STACK_DO_THROW(HX_HCSTRING("unimplemented","\x09","\x2f","\x74","\xb4"));
									}
									int tmp24 = (_this->bytesPerElement * srcLength);
									_this->byteLength = tmp24;
									_this->byteOffset = (int)0;
									_this->length = srcLength;
									tmp15 = _this;
								}
								this1 = tmp15;
							}
							else{
								bool tmp15 = (buffer != null());
								if ((tmp15)){
									::lime::utils::ArrayBufferView tmp16;
									{
										::lime::utils::ArrayBufferView tmp17 = ::lime::utils::ArrayBufferView_obj::__new((int)0,(int)5);
										::lime::utils::ArrayBufferView _this = tmp17;
										int in_byteOffset = byte_offset;
										bool tmp18 = (in_byteOffset < (int)0);
										if ((tmp18)){
											HX_STACK_DO_THROW(::lime::utils::TAError_obj::RangeError);
										}
										int tmp19 = hx::Mod(in_byteOffset,_this->bytesPerElement);
										bool tmp20 = (tmp19 != (int)0);
										if ((tmp20)){
											HX_STACK_DO_THROW(::lime::utils::TAError_obj::RangeError);
										}
										int bufferByteLength = buffer->length;
										int elementSize = _this->bytesPerElement;
										int newByteLength = bufferByteLength;
										bool tmp21 = (len == null());
										if ((tmp21)){
											int tmp22 = (bufferByteLength - in_byteOffset);
											newByteLength = tmp22;
											int tmp23 = hx::Mod(bufferByteLength,_this->bytesPerElement);
											bool tmp24 = (tmp23 != (int)0);
											if ((tmp24)){
												HX_STACK_DO_THROW(::lime::utils::TAError_obj::RangeError);
											}
											bool tmp25 = (newByteLength < (int)0);
											if ((tmp25)){
												HX_STACK_DO_THROW(::lime::utils::TAError_obj::RangeError);
											}
										}
										else{
											int tmp22 = (len * _this->bytesPerElement);
											newByteLength = tmp22;
											int tmp23 = (in_byteOffset + newByteLength);
											int newRange = tmp23;
											bool tmp24 = (newRange > bufferByteLength);
											if ((tmp24)){
												HX_STACK_DO_THROW(::lime::utils::TAError_obj::RangeError);
											}
										}
										_this->buffer = buffer;
										_this->byteOffset = in_byteOffset;
										_this->byteLength = newByteLength;
										Float tmp22 = (Float(newByteLength) / Float(_this->bytesPerElement));
										int tmp23 = ::Std_obj::_int(tmp22);
										_this->length = tmp23;
										tmp16 = _this;
									}
									this1 = tmp16;
								}
								else{
									HX_STACK_DO_THROW(HX_HCSTRING("Invalid constructor arguments for UInt8ClampedArray","\x8d","\x06","\x77","\x13"));
								}
							}
						}
					}
				}
				tmp7 = this1;
			}
			;break;
			case (int)6: {
				::haxe::io::Bytes tmp10 = this->buffer;
				::haxe::io::Bytes buffer = tmp10;
				::lime::utils::ArrayBufferView this1;
				bool tmp11 = false;
				if ((tmp11)){
					::lime::utils::ArrayBufferView tmp12 = ::lime::utils::ArrayBufferView_obj::__new(null(),(int)6);
					this1 = tmp12;
				}
				else{
					bool tmp12 = false;
					if ((tmp12)){
						::lime::utils::ArrayBufferView tmp13;
						{
							::lime::utils::ArrayBufferView tmp14 = ::lime::utils::ArrayBufferView_obj::__new((int)0,(int)6);
							::lime::utils::ArrayBufferView _this = tmp14;
							_this->byteOffset = (int)0;
							int tmp15 = hx::Throw(HX_CSTRING("Invalid field access on null object"));
							_this->length = tmp15;
							int tmp16 = (_this->length * _this->bytesPerElement);
							_this->byteLength = tmp16;
							::haxe::io::Bytes tmp17;
							{
								::haxe::io::Bytes this2;
								int tmp18 = _this->byteLength;
								::haxe::io::Bytes tmp19 = ::haxe::io::Bytes_obj::alloc(tmp18);
								this2 = tmp19;
								tmp17 = this2;
							}
							_this->buffer = tmp17;
							_this->copyFromArray(((Array< Float >)(null())),null());
							tmp13 = _this;
						}
						this1 = tmp13;
					}
					else{
						bool tmp13 = false;
						if ((tmp13)){
							::lime::utils::ArrayBufferView tmp14;
							{
								::lime::utils::ArrayBufferView tmp15 = ::lime::utils::ArrayBufferView_obj::__new((int)0,(int)6);
								::lime::utils::ArrayBufferView _this = tmp15;
								cpp::ArrayBase array = hx::Throw(HX_CSTRING("Invalid field access on null object"));
								_this->byteOffset = (int)0;
								_this->length = array->__Field(HX_HCSTRING("length","\xe6","\x94","\x07","\x9f"), hx::paccDynamic );
								int tmp16 = (_this->length * _this->bytesPerElement);
								_this->byteLength = tmp16;
								::haxe::io::Bytes tmp17;
								{
									::haxe::io::Bytes this2;
									int tmp18 = _this->byteLength;
									::haxe::io::Bytes tmp19 = ::haxe::io::Bytes_obj::alloc(tmp18);
									this2 = tmp19;
									tmp17 = this2;
								}
								_this->buffer = tmp17;
								_this->copyFromArray(((Array< Float >)(array)),null());
								tmp14 = _this;
							}
							this1 = tmp14;
						}
						else{
							bool tmp14 = false;
							if ((tmp14)){
								::lime::utils::ArrayBufferView tmp15;
								{
									::lime::utils::ArrayBufferView tmp16 = ::lime::utils::ArrayBufferView_obj::__new((int)0,(int)6);
									::lime::utils::ArrayBufferView _this = tmp16;
									::haxe::io::Bytes tmp17 = hx::Throw(HX_CSTRING("Invalid field access on null object"));
									::haxe::io::Bytes srcData = tmp17;
									int tmp18 = hx::Throw(HX_CSTRING("Invalid field access on null object"));
									int srcLength = tmp18;
									int tmp19 = hx::Throw(HX_CSTRING("Invalid field access on null object"));
									int srcByteOffset = tmp19;
									int tmp20 = hx::Throw(HX_CSTRING("Invalid field access on null object"));
									int srcElementSize = tmp20;
									int elementSize = _this->bytesPerElement;
									int tmp21 = hx::Throw(HX_CSTRING("Invalid field access on null object"));
									int tmp22 = _this->type;
									bool tmp23 = (tmp21 == tmp22);
									if ((tmp23)){
										int srcLength1 = srcData->length;
										int tmp24 = (srcLength1 - srcByteOffset);
										int cloneLength = tmp24;
										::haxe::io::Bytes tmp25;
										{
											::haxe::io::Bytes this2;
											int tmp26 = cloneLength;
											::haxe::io::Bytes tmp27 = ::haxe::io::Bytes_obj::alloc(tmp26);
											this2 = tmp27;
											tmp25 = this2;
										}
										_this->buffer = tmp25;
										::haxe::io::Bytes tmp26 = srcData;
										int tmp27 = srcByteOffset;
										int tmp28 = cloneLength;
										_this->buffer->blit((int)0,tmp26,tmp27,tmp28);
									}
									else{
										HX_STACK_DO_THROW(HX_HCSTRING("unimplemented","\x09","\x2f","\x74","\xb4"));
									}
									int tmp24 = (_this->bytesPerElement * srcLength);
									_this->byteLength = tmp24;
									_this->byteOffset = (int)0;
									_this->length = srcLength;
									tmp15 = _this;
								}
								this1 = tmp15;
							}
							else{
								bool tmp15 = (buffer != null());
								if ((tmp15)){
									::lime::utils::ArrayBufferView tmp16;
									{
										::lime::utils::ArrayBufferView tmp17 = ::lime::utils::ArrayBufferView_obj::__new((int)0,(int)6);
										::lime::utils::ArrayBufferView _this = tmp17;
										int in_byteOffset = byte_offset;
										bool tmp18 = (in_byteOffset < (int)0);
										if ((tmp18)){
											HX_STACK_DO_THROW(::lime::utils::TAError_obj::RangeError);
										}
										int tmp19 = hx::Mod(in_byteOffset,_this->bytesPerElement);
										bool tmp20 = (tmp19 != (int)0);
										if ((tmp20)){
											HX_STACK_DO_THROW(::lime::utils::TAError_obj::RangeError);
										}
										int bufferByteLength = buffer->length;
										int elementSize = _this->bytesPerElement;
										int newByteLength = bufferByteLength;
										bool tmp21 = (len == null());
										if ((tmp21)){
											int tmp22 = (bufferByteLength - in_byteOffset);
											newByteLength = tmp22;
											int tmp23 = hx::Mod(bufferByteLength,_this->bytesPerElement);
											bool tmp24 = (tmp23 != (int)0);
											if ((tmp24)){
												HX_STACK_DO_THROW(::lime::utils::TAError_obj::RangeError);
											}
											bool tmp25 = (newByteLength < (int)0);
											if ((tmp25)){
												HX_STACK_DO_THROW(::lime::utils::TAError_obj::RangeError);
											}
										}
										else{
											int tmp22 = (len * _this->bytesPerElement);
											newByteLength = tmp22;
											int tmp23 = (in_byteOffset + newByteLength);
											int newRange = tmp23;
											bool tmp24 = (newRange > bufferByteLength);
											if ((tmp24)){
												HX_STACK_DO_THROW(::lime::utils::TAError_obj::RangeError);
											}
										}
										_this->buffer = buffer;
										_this->byteOffset = in_byteOffset;
										_this->byteLength = newByteLength;
										Float tmp22 = (Float(newByteLength) / Float(_this->bytesPerElement));
										int tmp23 = ::Std_obj::_int(tmp22);
										_this->length = tmp23;
										tmp16 = _this;
									}
									this1 = tmp16;
								}
								else{
									HX_STACK_DO_THROW(HX_HCSTRING("Invalid constructor arguments for UInt16Array","\x0a","\xc7","\x2d","\xd5"));
								}
							}
						}
					}
				}
				tmp7 = this1;
			}
			;break;
			case (int)7: {
				::haxe::io::Bytes tmp10 = this->buffer;
				::haxe::io::Bytes buffer = tmp10;
				::lime::utils::ArrayBufferView this1;
				bool tmp11 = false;
				if ((tmp11)){
					::lime::utils::ArrayBufferView tmp12 = ::lime::utils::ArrayBufferView_obj::__new(null(),(int)7);
					this1 = tmp12;
				}
				else{
					bool tmp12 = false;
					if ((tmp12)){
						::lime::utils::ArrayBufferView tmp13;
						{
							::lime::utils::ArrayBufferView tmp14 = ::lime::utils::ArrayBufferView_obj::__new((int)0,(int)7);
							::lime::utils::ArrayBufferView _this = tmp14;
							_this->byteOffset = (int)0;
							int tmp15 = hx::Throw(HX_CSTRING("Invalid field access on null object"));
							_this->length = tmp15;
							int tmp16 = (_this->length * _this->bytesPerElement);
							_this->byteLength = tmp16;
							::haxe::io::Bytes tmp17;
							{
								::haxe::io::Bytes this2;
								int tmp18 = _this->byteLength;
								::haxe::io::Bytes tmp19 = ::haxe::io::Bytes_obj::alloc(tmp18);
								this2 = tmp19;
								tmp17 = this2;
							}
							_this->buffer = tmp17;
							_this->copyFromArray(((Array< Float >)(null())),null());
							tmp13 = _this;
						}
						this1 = tmp13;
					}
					else{
						bool tmp13 = false;
						if ((tmp13)){
							::lime::utils::ArrayBufferView tmp14;
							{
								::lime::utils::ArrayBufferView tmp15 = ::lime::utils::ArrayBufferView_obj::__new((int)0,(int)7);
								::lime::utils::ArrayBufferView _this = tmp15;
								cpp::ArrayBase array = hx::Throw(HX_CSTRING("Invalid field access on null object"));
								_this->byteOffset = (int)0;
								_this->length = array->__Field(HX_HCSTRING("length","\xe6","\x94","\x07","\x9f"), hx::paccDynamic );
								int tmp16 = (_this->length * _this->bytesPerElement);
								_this->byteLength = tmp16;
								::haxe::io::Bytes tmp17;
								{
									::haxe::io::Bytes this2;
									int tmp18 = _this->byteLength;
									::haxe::io::Bytes tmp19 = ::haxe::io::Bytes_obj::alloc(tmp18);
									this2 = tmp19;
									tmp17 = this2;
								}
								_this->buffer = tmp17;
								_this->copyFromArray(((Array< Float >)(array)),null());
								tmp14 = _this;
							}
							this1 = tmp14;
						}
						else{
							bool tmp14 = false;
							if ((tmp14)){
								::lime::utils::ArrayBufferView tmp15;
								{
									::lime::utils::ArrayBufferView tmp16 = ::lime::utils::ArrayBufferView_obj::__new((int)0,(int)7);
									::lime::utils::ArrayBufferView _this = tmp16;
									::haxe::io::Bytes tmp17 = hx::Throw(HX_CSTRING("Invalid field access on null object"));
									::haxe::io::Bytes srcData = tmp17;
									int tmp18 = hx::Throw(HX_CSTRING("Invalid field access on null object"));
									int srcLength = tmp18;
									int tmp19 = hx::Throw(HX_CSTRING("Invalid field access on null object"));
									int srcByteOffset = tmp19;
									int tmp20 = hx::Throw(HX_CSTRING("Invalid field access on null object"));
									int srcElementSize = tmp20;
									int elementSize = _this->bytesPerElement;
									int tmp21 = hx::Throw(HX_CSTRING("Invalid field access on null object"));
									int tmp22 = _this->type;
									bool tmp23 = (tmp21 == tmp22);
									if ((tmp23)){
										int srcLength1 = srcData->length;
										int tmp24 = (srcLength1 - srcByteOffset);
										int cloneLength = tmp24;
										::haxe::io::Bytes tmp25;
										{
											::haxe::io::Bytes this2;
											int tmp26 = cloneLength;
											::haxe::io::Bytes tmp27 = ::haxe::io::Bytes_obj::alloc(tmp26);
											this2 = tmp27;
											tmp25 = this2;
										}
										_this->buffer = tmp25;
										::haxe::io::Bytes tmp26 = srcData;
										int tmp27 = srcByteOffset;
										int tmp28 = cloneLength;
										_this->buffer->blit((int)0,tmp26,tmp27,tmp28);
									}
									else{
										HX_STACK_DO_THROW(HX_HCSTRING("unimplemented","\x09","\x2f","\x74","\xb4"));
									}
									int tmp24 = (_this->bytesPerElement * srcLength);
									_this->byteLength = tmp24;
									_this->byteOffset = (int)0;
									_this->length = srcLength;
									tmp15 = _this;
								}
								this1 = tmp15;
							}
							else{
								bool tmp15 = (buffer != null());
								if ((tmp15)){
									::lime::utils::ArrayBufferView tmp16;
									{
										::lime::utils::ArrayBufferView tmp17 = ::lime::utils::ArrayBufferView_obj::__new((int)0,(int)7);
										::lime::utils::ArrayBufferView _this = tmp17;
										int in_byteOffset = byte_offset;
										bool tmp18 = (in_byteOffset < (int)0);
										if ((tmp18)){
											HX_STACK_DO_THROW(::lime::utils::TAError_obj::RangeError);
										}
										int tmp19 = hx::Mod(in_byteOffset,_this->bytesPerElement);
										bool tmp20 = (tmp19 != (int)0);
										if ((tmp20)){
											HX_STACK_DO_THROW(::lime::utils::TAError_obj::RangeError);
										}
										int bufferByteLength = buffer->length;
										int elementSize = _this->bytesPerElement;
										int newByteLength = bufferByteLength;
										bool tmp21 = (len == null());
										if ((tmp21)){
											int tmp22 = (bufferByteLength - in_byteOffset);
											newByteLength = tmp22;
											int tmp23 = hx::Mod(bufferByteLength,_this->bytesPerElement);
											bool tmp24 = (tmp23 != (int)0);
											if ((tmp24)){
												HX_STACK_DO_THROW(::lime::utils::TAError_obj::RangeError);
											}
											bool tmp25 = (newByteLength < (int)0);
											if ((tmp25)){
												HX_STACK_DO_THROW(::lime::utils::TAError_obj::RangeError);
											}
										}
										else{
											int tmp22 = (len * _this->bytesPerElement);
											newByteLength = tmp22;
											int tmp23 = (in_byteOffset + newByteLength);
											int newRange = tmp23;
											bool tmp24 = (newRange > bufferByteLength);
											if ((tmp24)){
												HX_STACK_DO_THROW(::lime::utils::TAError_obj::RangeError);
											}
										}
										_this->buffer = buffer;
										_this->byteOffset = in_byteOffset;
										_this->byteLength = newByteLength;
										Float tmp22 = (Float(newByteLength) / Float(_this->bytesPerElement));
										int tmp23 = ::Std_obj::_int(tmp22);
										_this->length = tmp23;
										tmp16 = _this;
									}
									this1 = tmp16;
								}
								else{
									HX_STACK_DO_THROW(HX_HCSTRING("Invalid constructor arguments for UInt32Array","\x10","\x43","\xeb","\x8e"));
								}
							}
						}
					}
				}
				tmp7 = this1;
			}
			;break;
			case (int)8: {
				::haxe::io::Bytes tmp10 = this->buffer;
				::haxe::io::Bytes buffer = tmp10;
				::lime::utils::ArrayBufferView this1;
				bool tmp11 = false;
				if ((tmp11)){
					::lime::utils::ArrayBufferView tmp12 = ::lime::utils::ArrayBufferView_obj::__new(null(),(int)8);
					this1 = tmp12;
				}
				else{
					bool tmp12 = false;
					if ((tmp12)){
						::lime::utils::ArrayBufferView tmp13;
						{
							::lime::utils::ArrayBufferView tmp14 = ::lime::utils::ArrayBufferView_obj::__new((int)0,(int)8);
							::lime::utils::ArrayBufferView _this = tmp14;
							_this->byteOffset = (int)0;
							int tmp15 = hx::Throw(HX_CSTRING("Invalid field access on null object"));
							_this->length = tmp15;
							int tmp16 = (_this->length * _this->bytesPerElement);
							_this->byteLength = tmp16;
							::haxe::io::Bytes tmp17;
							{
								::haxe::io::Bytes this2;
								int tmp18 = _this->byteLength;
								::haxe::io::Bytes tmp19 = ::haxe::io::Bytes_obj::alloc(tmp18);
								this2 = tmp19;
								tmp17 = this2;
							}
							_this->buffer = tmp17;
							_this->copyFromArray(((Array< Float >)(null())),null());
							tmp13 = _this;
						}
						this1 = tmp13;
					}
					else{
						bool tmp13 = false;
						if ((tmp13)){
							::lime::utils::ArrayBufferView tmp14;
							{
								::lime::utils::ArrayBufferView tmp15 = ::lime::utils::ArrayBufferView_obj::__new((int)0,(int)8);
								::lime::utils::ArrayBufferView _this = tmp15;
								cpp::ArrayBase array = hx::Throw(HX_CSTRING("Invalid field access on null object"));
								_this->byteOffset = (int)0;
								_this->length = array->__Field(HX_HCSTRING("length","\xe6","\x94","\x07","\x9f"), hx::paccDynamic );
								int tmp16 = (_this->length * _this->bytesPerElement);
								_this->byteLength = tmp16;
								::haxe::io::Bytes tmp17;
								{
									::haxe::io::Bytes this2;
									int tmp18 = _this->byteLength;
									::haxe::io::Bytes tmp19 = ::haxe::io::Bytes_obj::alloc(tmp18);
									this2 = tmp19;
									tmp17 = this2;
								}
								_this->buffer = tmp17;
								_this->copyFromArray(((Array< Float >)(array)),null());
								tmp14 = _this;
							}
							this1 = tmp14;
						}
						else{
							bool tmp14 = false;
							if ((tmp14)){
								::lime::utils::ArrayBufferView tmp15;
								{
									::lime::utils::ArrayBufferView tmp16 = ::lime::utils::ArrayBufferView_obj::__new((int)0,(int)8);
									::lime::utils::ArrayBufferView _this = tmp16;
									::haxe::io::Bytes tmp17 = hx::Throw(HX_CSTRING("Invalid field access on null object"));
									::haxe::io::Bytes srcData = tmp17;
									int tmp18 = hx::Throw(HX_CSTRING("Invalid field access on null object"));
									int srcLength = tmp18;
									int tmp19 = hx::Throw(HX_CSTRING("Invalid field access on null object"));
									int srcByteOffset = tmp19;
									int tmp20 = hx::Throw(HX_CSTRING("Invalid field access on null object"));
									int srcElementSize = tmp20;
									int elementSize = _this->bytesPerElement;
									int tmp21 = hx::Throw(HX_CSTRING("Invalid field access on null object"));
									int tmp22 = _this->type;
									bool tmp23 = (tmp21 == tmp22);
									if ((tmp23)){
										int srcLength1 = srcData->length;
										int tmp24 = (srcLength1 - srcByteOffset);
										int cloneLength = tmp24;
										::haxe::io::Bytes tmp25;
										{
											::haxe::io::Bytes this2;
											int tmp26 = cloneLength;
											::haxe::io::Bytes tmp27 = ::haxe::io::Bytes_obj::alloc(tmp26);
											this2 = tmp27;
											tmp25 = this2;
										}
										_this->buffer = tmp25;
										::haxe::io::Bytes tmp26 = srcData;
										int tmp27 = srcByteOffset;
										int tmp28 = cloneLength;
										_this->buffer->blit((int)0,tmp26,tmp27,tmp28);
									}
									else{
										HX_STACK_DO_THROW(HX_HCSTRING("unimplemented","\x09","\x2f","\x74","\xb4"));
									}
									int tmp24 = (_this->bytesPerElement * srcLength);
									_this->byteLength = tmp24;
									_this->byteOffset = (int)0;
									_this->length = srcLength;
									tmp15 = _this;
								}
								this1 = tmp15;
							}
							else{
								bool tmp15 = (buffer != null());
								if ((tmp15)){
									::lime::utils::ArrayBufferView tmp16;
									{
										::lime::utils::ArrayBufferView tmp17 = ::lime::utils::ArrayBufferView_obj::__new((int)0,(int)8);
										::lime::utils::ArrayBufferView _this = tmp17;
										int in_byteOffset = byte_offset;
										bool tmp18 = (in_byteOffset < (int)0);
										if ((tmp18)){
											HX_STACK_DO_THROW(::lime::utils::TAError_obj::RangeError);
										}
										int tmp19 = hx::Mod(in_byteOffset,_this->bytesPerElement);
										bool tmp20 = (tmp19 != (int)0);
										if ((tmp20)){
											HX_STACK_DO_THROW(::lime::utils::TAError_obj::RangeError);
										}
										int bufferByteLength = buffer->length;
										int elementSize = _this->bytesPerElement;
										int newByteLength = bufferByteLength;
										bool tmp21 = (len == null());
										if ((tmp21)){
											int tmp22 = (bufferByteLength - in_byteOffset);
											newByteLength = tmp22;
											int tmp23 = hx::Mod(bufferByteLength,_this->bytesPerElement);
											bool tmp24 = (tmp23 != (int)0);
											if ((tmp24)){
												HX_STACK_DO_THROW(::lime::utils::TAError_obj::RangeError);
											}
											bool tmp25 = (newByteLength < (int)0);
											if ((tmp25)){
												HX_STACK_DO_THROW(::lime::utils::TAError_obj::RangeError);
											}
										}
										else{
											int tmp22 = (len * _this->bytesPerElement);
											newByteLength = tmp22;
											int tmp23 = (in_byteOffset + newByteLength);
											int newRange = tmp23;
											bool tmp24 = (newRange > bufferByteLength);
											if ((tmp24)){
												HX_STACK_DO_THROW(::lime::utils::TAError_obj::RangeError);
											}
										}
										_this->buffer = buffer;
										_this->byteOffset = in_byteOffset;
										_this->byteLength = newByteLength;
										Float tmp22 = (Float(newByteLength) / Float(_this->bytesPerElement));
										int tmp23 = ::Std_obj::_int(tmp22);
										_this->length = tmp23;
										tmp16 = _this;
									}
									this1 = tmp16;
								}
								else{
									HX_STACK_DO_THROW(HX_HCSTRING("Invalid constructor arguments for Float32Array","\x8e","\xc1","\xf4","\xd4"));
								}
							}
						}
					}
				}
				tmp7 = this1;
			}
			;break;
			case (int)9: {
				::haxe::io::Bytes tmp10 = this->buffer;
				::haxe::io::Bytes buffer = tmp10;
				::lime::utils::ArrayBufferView this1;
				bool tmp11 = false;
				if ((tmp11)){
					::lime::utils::ArrayBufferView tmp12 = ::lime::utils::ArrayBufferView_obj::__new(null(),(int)9);
					this1 = tmp12;
				}
				else{
					bool tmp12 = false;
					if ((tmp12)){
						::lime::utils::ArrayBufferView tmp13;
						{
							::lime::utils::ArrayBufferView tmp14 = ::lime::utils::ArrayBufferView_obj::__new((int)0,(int)9);
							::lime::utils::ArrayBufferView _this = tmp14;
							_this->byteOffset = (int)0;
							int tmp15 = hx::Throw(HX_CSTRING("Invalid field access on null object"));
							_this->length = tmp15;
							int tmp16 = (_this->length * _this->bytesPerElement);
							_this->byteLength = tmp16;
							::haxe::io::Bytes tmp17;
							{
								::haxe::io::Bytes this2;
								int tmp18 = _this->byteLength;
								::haxe::io::Bytes tmp19 = ::haxe::io::Bytes_obj::alloc(tmp18);
								this2 = tmp19;
								tmp17 = this2;
							}
							_this->buffer = tmp17;
							_this->copyFromArray(((Array< Float >)(null())),null());
							tmp13 = _this;
						}
						this1 = tmp13;
					}
					else{
						bool tmp13 = false;
						if ((tmp13)){
							::lime::utils::ArrayBufferView tmp14;
							{
								::lime::utils::ArrayBufferView tmp15 = ::lime::utils::ArrayBufferView_obj::__new((int)0,(int)9);
								::lime::utils::ArrayBufferView _this = tmp15;
								cpp::ArrayBase array = hx::Throw(HX_CSTRING("Invalid field access on null object"));
								_this->byteOffset = (int)0;
								_this->length = array->__Field(HX_HCSTRING("length","\xe6","\x94","\x07","\x9f"), hx::paccDynamic );
								int tmp16 = (_this->length * _this->bytesPerElement);
								_this->byteLength = tmp16;
								::haxe::io::Bytes tmp17;
								{
									::haxe::io::Bytes this2;
									int tmp18 = _this->byteLength;
									::haxe::io::Bytes tmp19 = ::haxe::io::Bytes_obj::alloc(tmp18);
									this2 = tmp19;
									tmp17 = this2;
								}
								_this->buffer = tmp17;
								_this->copyFromArray(((Array< Float >)(array)),null());
								tmp14 = _this;
							}
							this1 = tmp14;
						}
						else{
							bool tmp14 = false;
							if ((tmp14)){
								::lime::utils::ArrayBufferView tmp15;
								{
									::lime::utils::ArrayBufferView tmp16 = ::lime::utils::ArrayBufferView_obj::__new((int)0,(int)9);
									::lime::utils::ArrayBufferView _this = tmp16;
									::haxe::io::Bytes tmp17 = hx::Throw(HX_CSTRING("Invalid field access on null object"));
									::haxe::io::Bytes srcData = tmp17;
									int tmp18 = hx::Throw(HX_CSTRING("Invalid field access on null object"));
									int srcLength = tmp18;
									int tmp19 = hx::Throw(HX_CSTRING("Invalid field access on null object"));
									int srcByteOffset = tmp19;
									int tmp20 = hx::Throw(HX_CSTRING("Invalid field access on null object"));
									int srcElementSize = tmp20;
									int elementSize = _this->bytesPerElement;
									int tmp21 = hx::Throw(HX_CSTRING("Invalid field access on null object"));
									int tmp22 = _this->type;
									bool tmp23 = (tmp21 == tmp22);
									if ((tmp23)){
										int srcLength1 = srcData->length;
										int tmp24 = (srcLength1 - srcByteOffset);
										int cloneLength = tmp24;
										::haxe::io::Bytes tmp25;
										{
											::haxe::io::Bytes this2;
											int tmp26 = cloneLength;
											::haxe::io::Bytes tmp27 = ::haxe::io::Bytes_obj::alloc(tmp26);
											this2 = tmp27;
											tmp25 = this2;
										}
										_this->buffer = tmp25;
										::haxe::io::Bytes tmp26 = srcData;
										int tmp27 = srcByteOffset;
										int tmp28 = cloneLength;
										_this->buffer->blit((int)0,tmp26,tmp27,tmp28);
									}
									else{
										HX_STACK_DO_THROW(HX_HCSTRING("unimplemented","\x09","\x2f","\x74","\xb4"));
									}
									int tmp24 = (_this->bytesPerElement * srcLength);
									_this->byteLength = tmp24;
									_this->byteOffset = (int)0;
									_this->length = srcLength;
									tmp15 = _this;
								}
								this1 = tmp15;
							}
							else{
								bool tmp15 = (buffer != null());
								if ((tmp15)){
									::lime::utils::ArrayBufferView tmp16;
									{
										::lime::utils::ArrayBufferView tmp17 = ::lime::utils::ArrayBufferView_obj::__new((int)0,(int)9);
										::lime::utils::ArrayBufferView _this = tmp17;
										int in_byteOffset = byte_offset;
										bool tmp18 = (in_byteOffset < (int)0);
										if ((tmp18)){
											HX_STACK_DO_THROW(::lime::utils::TAError_obj::RangeError);
										}
										int tmp19 = hx::Mod(in_byteOffset,_this->bytesPerElement);
										bool tmp20 = (tmp19 != (int)0);
										if ((tmp20)){
											HX_STACK_DO_THROW(::lime::utils::TAError_obj::RangeError);
										}
										int bufferByteLength = buffer->length;
										int elementSize = _this->bytesPerElement;
										int newByteLength = bufferByteLength;
										bool tmp21 = (len == null());
										if ((tmp21)){
											int tmp22 = (bufferByteLength - in_byteOffset);
											newByteLength = tmp22;
											int tmp23 = hx::Mod(bufferByteLength,_this->bytesPerElement);
											bool tmp24 = (tmp23 != (int)0);
											if ((tmp24)){
												HX_STACK_DO_THROW(::lime::utils::TAError_obj::RangeError);
											}
											bool tmp25 = (newByteLength < (int)0);
											if ((tmp25)){
												HX_STACK_DO_THROW(::lime::utils::TAError_obj::RangeError);
											}
										}
										else{
											int tmp22 = (len * _this->bytesPerElement);
											newByteLength = tmp22;
											int tmp23 = (in_byteOffset + newByteLength);
											int newRange = tmp23;
											bool tmp24 = (newRange > bufferByteLength);
											if ((tmp24)){
												HX_STACK_DO_THROW(::lime::utils::TAError_obj::RangeError);
											}
										}
										_this->buffer = buffer;
										_this->byteOffset = in_byteOffset;
										_this->byteLength = newByteLength;
										Float tmp22 = (Float(newByteLength) / Float(_this->bytesPerElement));
										int tmp23 = ::Std_obj::_int(tmp22);
										_this->length = tmp23;
										tmp16 = _this;
									}
									this1 = tmp16;
								}
								else{
									HX_STACK_DO_THROW(HX_HCSTRING("Invalid constructor arguments for Float64Array","\x8f","\xde","\x6b","\x1e"));
								}
							}
						}
					}
				}
				tmp7 = this1;
			}
			;break;
			case (int)0: {
				HX_STACK_DO_THROW(HX_HCSTRING("subarray on a blank ArrayBufferView","\x39","\x87","\xfd","\x19"));
			}
			;break;
		}
	}
	::lime::utils::ArrayBufferView view = tmp7;
	::lime::utils::ArrayBufferView tmp8 = view;
	return tmp8;
}


HX_DEFINE_DYNAMIC_FUNC2(ArrayBufferView_obj,subarray_lime_utils_UInt16Array,return )

::lime::utils::ArrayBufferView ArrayBufferView_obj::subarray_lime_utils_Int8Array( int begin,Dynamic end){
	bool tmp = (end == null());
	if ((tmp)){
		int tmp1 = this->length;
		end = tmp1;
	}
	int tmp1 = (end - begin);
	int len = tmp1;
	int tmp2 = begin;
	int tmp3 = this->bytesPerElement;
	int tmp4 = (tmp2 * tmp3);
	int tmp5 = this->byteOffset;
	int tmp6 = (tmp4 + tmp5);
	int byte_offset = tmp6;
	::lime::utils::ArrayBufferView tmp7;
	{
		int tmp8 = this->type;
		int _g = tmp8;
		int tmp9 = _g;
		switch( (int)(tmp9)){
			case (int)1: {
				::haxe::io::Bytes tmp10 = this->buffer;
				::haxe::io::Bytes buffer = tmp10;
				::lime::utils::ArrayBufferView this1;
				bool tmp11 = false;
				if ((tmp11)){
					::lime::utils::ArrayBufferView tmp12 = ::lime::utils::ArrayBufferView_obj::__new(null(),(int)1);
					this1 = tmp12;
				}
				else{
					bool tmp12 = false;
					if ((tmp12)){
						::lime::utils::ArrayBufferView tmp13;
						{
							::lime::utils::ArrayBufferView tmp14 = ::lime::utils::ArrayBufferView_obj::__new((int)0,(int)1);
							::lime::utils::ArrayBufferView _this = tmp14;
							_this->byteOffset = (int)0;
							int tmp15 = hx::Throw(HX_CSTRING("Invalid field access on null object"));
							_this->length = tmp15;
							int tmp16 = (_this->length * _this->bytesPerElement);
							_this->byteLength = tmp16;
							::haxe::io::Bytes tmp17;
							{
								::haxe::io::Bytes this2;
								int tmp18 = _this->byteLength;
								::haxe::io::Bytes tmp19 = ::haxe::io::Bytes_obj::alloc(tmp18);
								this2 = tmp19;
								tmp17 = this2;
							}
							_this->buffer = tmp17;
							_this->copyFromArray(((Array< Float >)(null())),null());
							tmp13 = _this;
						}
						this1 = tmp13;
					}
					else{
						bool tmp13 = false;
						if ((tmp13)){
							::lime::utils::ArrayBufferView tmp14;
							{
								::lime::utils::ArrayBufferView tmp15 = ::lime::utils::ArrayBufferView_obj::__new((int)0,(int)1);
								::lime::utils::ArrayBufferView _this = tmp15;
								cpp::ArrayBase array = hx::Throw(HX_CSTRING("Invalid field access on null object"));
								_this->byteOffset = (int)0;
								_this->length = array->__Field(HX_HCSTRING("length","\xe6","\x94","\x07","\x9f"), hx::paccDynamic );
								int tmp16 = (_this->length * _this->bytesPerElement);
								_this->byteLength = tmp16;
								::haxe::io::Bytes tmp17;
								{
									::haxe::io::Bytes this2;
									int tmp18 = _this->byteLength;
									::haxe::io::Bytes tmp19 = ::haxe::io::Bytes_obj::alloc(tmp18);
									this2 = tmp19;
									tmp17 = this2;
								}
								_this->buffer = tmp17;
								_this->copyFromArray(((Array< Float >)(array)),null());
								tmp14 = _this;
							}
							this1 = tmp14;
						}
						else{
							bool tmp14 = false;
							if ((tmp14)){
								::lime::utils::ArrayBufferView tmp15;
								{
									::lime::utils::ArrayBufferView tmp16 = ::lime::utils::ArrayBufferView_obj::__new((int)0,(int)1);
									::lime::utils::ArrayBufferView _this = tmp16;
									::haxe::io::Bytes tmp17 = hx::Throw(HX_CSTRING("Invalid field access on null object"));
									::haxe::io::Bytes srcData = tmp17;
									int tmp18 = hx::Throw(HX_CSTRING("Invalid field access on null object"));
									int srcLength = tmp18;
									int tmp19 = hx::Throw(HX_CSTRING("Invalid field access on null object"));
									int srcByteOffset = tmp19;
									int tmp20 = hx::Throw(HX_CSTRING("Invalid field access on null object"));
									int srcElementSize = tmp20;
									int elementSize = _this->bytesPerElement;
									int tmp21 = hx::Throw(HX_CSTRING("Invalid field access on null object"));
									int tmp22 = _this->type;
									bool tmp23 = (tmp21 == tmp22);
									if ((tmp23)){
										int srcLength1 = srcData->length;
										int tmp24 = (srcLength1 - srcByteOffset);
										int cloneLength = tmp24;
										::haxe::io::Bytes tmp25;
										{
											::haxe::io::Bytes this2;
											int tmp26 = cloneLength;
											::haxe::io::Bytes tmp27 = ::haxe::io::Bytes_obj::alloc(tmp26);
											this2 = tmp27;
											tmp25 = this2;
										}
										_this->buffer = tmp25;
										::haxe::io::Bytes tmp26 = srcData;
										int tmp27 = srcByteOffset;
										int tmp28 = cloneLength;
										_this->buffer->blit((int)0,tmp26,tmp27,tmp28);
									}
									else{
										HX_STACK_DO_THROW(HX_HCSTRING("unimplemented","\x09","\x2f","\x74","\xb4"));
									}
									int tmp24 = (_this->bytesPerElement * srcLength);
									_this->byteLength = tmp24;
									_this->byteOffset = (int)0;
									_this->length = srcLength;
									tmp15 = _this;
								}
								this1 = tmp15;
							}
							else{
								bool tmp15 = (buffer != null());
								if ((tmp15)){
									::lime::utils::ArrayBufferView tmp16;
									{
										::lime::utils::ArrayBufferView tmp17 = ::lime::utils::ArrayBufferView_obj::__new((int)0,(int)1);
										::lime::utils::ArrayBufferView _this = tmp17;
										int in_byteOffset = byte_offset;
										bool tmp18 = (in_byteOffset < (int)0);
										if ((tmp18)){
											HX_STACK_DO_THROW(::lime::utils::TAError_obj::RangeError);
										}
										int tmp19 = hx::Mod(in_byteOffset,_this->bytesPerElement);
										bool tmp20 = (tmp19 != (int)0);
										if ((tmp20)){
											HX_STACK_DO_THROW(::lime::utils::TAError_obj::RangeError);
										}
										int bufferByteLength = buffer->length;
										int elementSize = _this->bytesPerElement;
										int newByteLength = bufferByteLength;
										bool tmp21 = (len == null());
										if ((tmp21)){
											int tmp22 = (bufferByteLength - in_byteOffset);
											newByteLength = tmp22;
											int tmp23 = hx::Mod(bufferByteLength,_this->bytesPerElement);
											bool tmp24 = (tmp23 != (int)0);
											if ((tmp24)){
												HX_STACK_DO_THROW(::lime::utils::TAError_obj::RangeError);
											}
											bool tmp25 = (newByteLength < (int)0);
											if ((tmp25)){
												HX_STACK_DO_THROW(::lime::utils::TAError_obj::RangeError);
											}
										}
										else{
											int tmp22 = (len * _this->bytesPerElement);
											newByteLength = tmp22;
											int tmp23 = (in_byteOffset + newByteLength);
											int newRange = tmp23;
											bool tmp24 = (newRange > bufferByteLength);
											if ((tmp24)){
												HX_STACK_DO_THROW(::lime::utils::TAError_obj::RangeError);
											}
										}
										_this->buffer = buffer;
										_this->byteOffset = in_byteOffset;
										_this->byteLength = newByteLength;
										Float tmp22 = (Float(newByteLength) / Float(_this->bytesPerElement));
										int tmp23 = ::Std_obj::_int(tmp22);
										_this->length = tmp23;
										tmp16 = _this;
									}
									this1 = tmp16;
								}
								else{
									HX_STACK_DO_THROW(HX_HCSTRING("Invalid constructor arguments for Int8Array","\x40","\x53","\xda","\x77"));
								}
							}
						}
					}
				}
				tmp7 = this1;
			}
			;break;
			case (int)2: {
				::haxe::io::Bytes tmp10 = this->buffer;
				::haxe::io::Bytes buffer = tmp10;
				::lime::utils::ArrayBufferView this1;
				bool tmp11 = false;
				if ((tmp11)){
					::lime::utils::ArrayBufferView tmp12 = ::lime::utils::ArrayBufferView_obj::__new(null(),(int)2);
					this1 = tmp12;
				}
				else{
					bool tmp12 = false;
					if ((tmp12)){
						::lime::utils::ArrayBufferView tmp13;
						{
							::lime::utils::ArrayBufferView tmp14 = ::lime::utils::ArrayBufferView_obj::__new((int)0,(int)2);
							::lime::utils::ArrayBufferView _this = tmp14;
							_this->byteOffset = (int)0;
							int tmp15 = hx::Throw(HX_CSTRING("Invalid field access on null object"));
							_this->length = tmp15;
							int tmp16 = (_this->length * _this->bytesPerElement);
							_this->byteLength = tmp16;
							::haxe::io::Bytes tmp17;
							{
								::haxe::io::Bytes this2;
								int tmp18 = _this->byteLength;
								::haxe::io::Bytes tmp19 = ::haxe::io::Bytes_obj::alloc(tmp18);
								this2 = tmp19;
								tmp17 = this2;
							}
							_this->buffer = tmp17;
							_this->copyFromArray(((Array< Float >)(null())),null());
							tmp13 = _this;
						}
						this1 = tmp13;
					}
					else{
						bool tmp13 = false;
						if ((tmp13)){
							::lime::utils::ArrayBufferView tmp14;
							{
								::lime::utils::ArrayBufferView tmp15 = ::lime::utils::ArrayBufferView_obj::__new((int)0,(int)2);
								::lime::utils::ArrayBufferView _this = tmp15;
								cpp::ArrayBase array = hx::Throw(HX_CSTRING("Invalid field access on null object"));
								_this->byteOffset = (int)0;
								_this->length = array->__Field(HX_HCSTRING("length","\xe6","\x94","\x07","\x9f"), hx::paccDynamic );
								int tmp16 = (_this->length * _this->bytesPerElement);
								_this->byteLength = tmp16;
								::haxe::io::Bytes tmp17;
								{
									::haxe::io::Bytes this2;
									int tmp18 = _this->byteLength;
									::haxe::io::Bytes tmp19 = ::haxe::io::Bytes_obj::alloc(tmp18);
									this2 = tmp19;
									tmp17 = this2;
								}
								_this->buffer = tmp17;
								_this->copyFromArray(((Array< Float >)(array)),null());
								tmp14 = _this;
							}
							this1 = tmp14;
						}
						else{
							bool tmp14 = false;
							if ((tmp14)){
								::lime::utils::ArrayBufferView tmp15;
								{
									::lime::utils::ArrayBufferView tmp16 = ::lime::utils::ArrayBufferView_obj::__new((int)0,(int)2);
									::lime::utils::ArrayBufferView _this = tmp16;
									::haxe::io::Bytes tmp17 = hx::Throw(HX_CSTRING("Invalid field access on null object"));
									::haxe::io::Bytes srcData = tmp17;
									int tmp18 = hx::Throw(HX_CSTRING("Invalid field access on null object"));
									int srcLength = tmp18;
									int tmp19 = hx::Throw(HX_CSTRING("Invalid field access on null object"));
									int srcByteOffset = tmp19;
									int tmp20 = hx::Throw(HX_CSTRING("Invalid field access on null object"));
									int srcElementSize = tmp20;
									int elementSize = _this->bytesPerElement;
									int tmp21 = hx::Throw(HX_CSTRING("Invalid field access on null object"));
									int tmp22 = _this->type;
									bool tmp23 = (tmp21 == tmp22);
									if ((tmp23)){
										int srcLength1 = srcData->length;
										int tmp24 = (srcLength1 - srcByteOffset);
										int cloneLength = tmp24;
										::haxe::io::Bytes tmp25;
										{
											::haxe::io::Bytes this2;
											int tmp26 = cloneLength;
											::haxe::io::Bytes tmp27 = ::haxe::io::Bytes_obj::alloc(tmp26);
											this2 = tmp27;
											tmp25 = this2;
										}
										_this->buffer = tmp25;
										::haxe::io::Bytes tmp26 = srcData;
										int tmp27 = srcByteOffset;
										int tmp28 = cloneLength;
										_this->buffer->blit((int)0,tmp26,tmp27,tmp28);
									}
									else{
										HX_STACK_DO_THROW(HX_HCSTRING("unimplemented","\x09","\x2f","\x74","\xb4"));
									}
									int tmp24 = (_this->bytesPerElement * srcLength);
									_this->byteLength = tmp24;
									_this->byteOffset = (int)0;
									_this->length = srcLength;
									tmp15 = _this;
								}
								this1 = tmp15;
							}
							else{
								bool tmp15 = (buffer != null());
								if ((tmp15)){
									::lime::utils::ArrayBufferView tmp16;
									{
										::lime::utils::ArrayBufferView tmp17 = ::lime::utils::ArrayBufferView_obj::__new((int)0,(int)2);
										::lime::utils::ArrayBufferView _this = tmp17;
										int in_byteOffset = byte_offset;
										bool tmp18 = (in_byteOffset < (int)0);
										if ((tmp18)){
											HX_STACK_DO_THROW(::lime::utils::TAError_obj::RangeError);
										}
										int tmp19 = hx::Mod(in_byteOffset,_this->bytesPerElement);
										bool tmp20 = (tmp19 != (int)0);
										if ((tmp20)){
											HX_STACK_DO_THROW(::lime::utils::TAError_obj::RangeError);
										}
										int bufferByteLength = buffer->length;
										int elementSize = _this->bytesPerElement;
										int newByteLength = bufferByteLength;
										bool tmp21 = (len == null());
										if ((tmp21)){
											int tmp22 = (bufferByteLength - in_byteOffset);
											newByteLength = tmp22;
											int tmp23 = hx::Mod(bufferByteLength,_this->bytesPerElement);
											bool tmp24 = (tmp23 != (int)0);
											if ((tmp24)){
												HX_STACK_DO_THROW(::lime::utils::TAError_obj::RangeError);
											}
											bool tmp25 = (newByteLength < (int)0);
											if ((tmp25)){
												HX_STACK_DO_THROW(::lime::utils::TAError_obj::RangeError);
											}
										}
										else{
											int tmp22 = (len * _this->bytesPerElement);
											newByteLength = tmp22;
											int tmp23 = (in_byteOffset + newByteLength);
											int newRange = tmp23;
											bool tmp24 = (newRange > bufferByteLength);
											if ((tmp24)){
												HX_STACK_DO_THROW(::lime::utils::TAError_obj::RangeError);
											}
										}
										_this->buffer = buffer;
										_this->byteOffset = in_byteOffset;
										_this->byteLength = newByteLength;
										Float tmp22 = (Float(newByteLength) / Float(_this->bytesPerElement));
										int tmp23 = ::Std_obj::_int(tmp22);
										_this->length = tmp23;
										tmp16 = _this;
									}
									this1 = tmp16;
								}
								else{
									HX_STACK_DO_THROW(HX_HCSTRING("Invalid constructor arguments for Int16Array","\x95","\xb2","\x95","\xa7"));
								}
							}
						}
					}
				}
				tmp7 = this1;
			}
			;break;
			case (int)3: {
				::haxe::io::Bytes tmp10 = this->buffer;
				::haxe::io::Bytes buffer = tmp10;
				::lime::utils::ArrayBufferView this1;
				bool tmp11 = false;
				if ((tmp11)){
					::lime::utils::ArrayBufferView tmp12 = ::lime::utils::ArrayBufferView_obj::__new(null(),(int)3);
					this1 = tmp12;
				}
				else{
					bool tmp12 = false;
					if ((tmp12)){
						::lime::utils::ArrayBufferView tmp13;
						{
							::lime::utils::ArrayBufferView tmp14 = ::lime::utils::ArrayBufferView_obj::__new((int)0,(int)3);
							::lime::utils::ArrayBufferView _this = tmp14;
							_this->byteOffset = (int)0;
							int tmp15 = hx::Throw(HX_CSTRING("Invalid field access on null object"));
							_this->length = tmp15;
							int tmp16 = (_this->length * _this->bytesPerElement);
							_this->byteLength = tmp16;
							::haxe::io::Bytes tmp17;
							{
								::haxe::io::Bytes this2;
								int tmp18 = _this->byteLength;
								::haxe::io::Bytes tmp19 = ::haxe::io::Bytes_obj::alloc(tmp18);
								this2 = tmp19;
								tmp17 = this2;
							}
							_this->buffer = tmp17;
							_this->copyFromArray(((Array< Float >)(null())),null());
							tmp13 = _this;
						}
						this1 = tmp13;
					}
					else{
						bool tmp13 = false;
						if ((tmp13)){
							::lime::utils::ArrayBufferView tmp14;
							{
								::lime::utils::ArrayBufferView tmp15 = ::lime::utils::ArrayBufferView_obj::__new((int)0,(int)3);
								::lime::utils::ArrayBufferView _this = tmp15;
								cpp::ArrayBase array = hx::Throw(HX_CSTRING("Invalid field access on null object"));
								_this->byteOffset = (int)0;
								_this->length = array->__Field(HX_HCSTRING("length","\xe6","\x94","\x07","\x9f"), hx::paccDynamic );
								int tmp16 = (_this->length * _this->bytesPerElement);
								_this->byteLength = tmp16;
								::haxe::io::Bytes tmp17;
								{
									::haxe::io::Bytes this2;
									int tmp18 = _this->byteLength;
									::haxe::io::Bytes tmp19 = ::haxe::io::Bytes_obj::alloc(tmp18);
									this2 = tmp19;
									tmp17 = this2;
								}
								_this->buffer = tmp17;
								_this->copyFromArray(((Array< Float >)(array)),null());
								tmp14 = _this;
							}
							this1 = tmp14;
						}
						else{
							bool tmp14 = false;
							if ((tmp14)){
								::lime::utils::ArrayBufferView tmp15;
								{
									::lime::utils::ArrayBufferView tmp16 = ::lime::utils::ArrayBufferView_obj::__new((int)0,(int)3);
									::lime::utils::ArrayBufferView _this = tmp16;
									::haxe::io::Bytes tmp17 = hx::Throw(HX_CSTRING("Invalid field access on null object"));
									::haxe::io::Bytes srcData = tmp17;
									int tmp18 = hx::Throw(HX_CSTRING("Invalid field access on null object"));
									int srcLength = tmp18;
									int tmp19 = hx::Throw(HX_CSTRING("Invalid field access on null object"));
									int srcByteOffset = tmp19;
									int tmp20 = hx::Throw(HX_CSTRING("Invalid field access on null object"));
									int srcElementSize = tmp20;
									int elementSize = _this->bytesPerElement;
									int tmp21 = hx::Throw(HX_CSTRING("Invalid field access on null object"));
									int tmp22 = _this->type;
									bool tmp23 = (tmp21 == tmp22);
									if ((tmp23)){
										int srcLength1 = srcData->length;
										int tmp24 = (srcLength1 - srcByteOffset);
										int cloneLength = tmp24;
										::haxe::io::Bytes tmp25;
										{
											::haxe::io::Bytes this2;
											int tmp26 = cloneLength;
											::haxe::io::Bytes tmp27 = ::haxe::io::Bytes_obj::alloc(tmp26);
											this2 = tmp27;
											tmp25 = this2;
										}
										_this->buffer = tmp25;
										::haxe::io::Bytes tmp26 = srcData;
										int tmp27 = srcByteOffset;
										int tmp28 = cloneLength;
										_this->buffer->blit((int)0,tmp26,tmp27,tmp28);
									}
									else{
										HX_STACK_DO_THROW(HX_HCSTRING("unimplemented","\x09","\x2f","\x74","\xb4"));
									}
									int tmp24 = (_this->bytesPerElement * srcLength);
									_this->byteLength = tmp24;
									_this->byteOffset = (int)0;
									_this->length = srcLength;
									tmp15 = _this;
								}
								this1 = tmp15;
							}
							else{
								bool tmp15 = (buffer != null());
								if ((tmp15)){
									::lime::utils::ArrayBufferView tmp16;
									{
										::lime::utils::ArrayBufferView tmp17 = ::lime::utils::ArrayBufferView_obj::__new((int)0,(int)3);
										::lime::utils::ArrayBufferView _this = tmp17;
										int in_byteOffset = byte_offset;
										bool tmp18 = (in_byteOffset < (int)0);
										if ((tmp18)){
											HX_STACK_DO_THROW(::lime::utils::TAError_obj::RangeError);
										}
										int tmp19 = hx::Mod(in_byteOffset,_this->bytesPerElement);
										bool tmp20 = (tmp19 != (int)0);
										if ((tmp20)){
											HX_STACK_DO_THROW(::lime::utils::TAError_obj::RangeError);
										}
										int bufferByteLength = buffer->length;
										int elementSize = _this->bytesPerElement;
										int newByteLength = bufferByteLength;
										bool tmp21 = (len == null());
										if ((tmp21)){
											int tmp22 = (bufferByteLength - in_byteOffset);
											newByteLength = tmp22;
											int tmp23 = hx::Mod(bufferByteLength,_this->bytesPerElement);
											bool tmp24 = (tmp23 != (int)0);
											if ((tmp24)){
												HX_STACK_DO_THROW(::lime::utils::TAError_obj::RangeError);
											}
											bool tmp25 = (newByteLength < (int)0);
											if ((tmp25)){
												HX_STACK_DO_THROW(::lime::utils::TAError_obj::RangeError);
											}
										}
										else{
											int tmp22 = (len * _this->bytesPerElement);
											newByteLength = tmp22;
											int tmp23 = (in_byteOffset + newByteLength);
											int newRange = tmp23;
											bool tmp24 = (newRange > bufferByteLength);
											if ((tmp24)){
												HX_STACK_DO_THROW(::lime::utils::TAError_obj::RangeError);
											}
										}
										_this->buffer = buffer;
										_this->byteOffset = in_byteOffset;
										_this->byteLength = newByteLength;
										Float tmp22 = (Float(newByteLength) / Float(_this->bytesPerElement));
										int tmp23 = ::Std_obj::_int(tmp22);
										_this->length = tmp23;
										tmp16 = _this;
									}
									this1 = tmp16;
								}
								else{
									HX_STACK_DO_THROW(HX_HCSTRING("Invalid constructor arguments for Int32Array","\x9b","\x2e","\x53","\x61"));
								}
							}
						}
					}
				}
				tmp7 = this1;
			}
			;break;
			case (int)4: {
				::haxe::io::Bytes tmp10 = this->buffer;
				::haxe::io::Bytes buffer = tmp10;
				::lime::utils::ArrayBufferView this1;
				bool tmp11 = false;
				if ((tmp11)){
					::lime::utils::ArrayBufferView tmp12 = ::lime::utils::ArrayBufferView_obj::__new(null(),(int)4);
					this1 = tmp12;
				}
				else{
					bool tmp12 = false;
					if ((tmp12)){
						::lime::utils::ArrayBufferView tmp13;
						{
							::lime::utils::ArrayBufferView tmp14 = ::lime::utils::ArrayBufferView_obj::__new((int)0,(int)4);
							::lime::utils::ArrayBufferView _this = tmp14;
							_this->byteOffset = (int)0;
							int tmp15 = hx::Throw(HX_CSTRING("Invalid field access on null object"));
							_this->length = tmp15;
							int tmp16 = (_this->length * _this->bytesPerElement);
							_this->byteLength = tmp16;
							::haxe::io::Bytes tmp17;
							{
								::haxe::io::Bytes this2;
								int tmp18 = _this->byteLength;
								::haxe::io::Bytes tmp19 = ::haxe::io::Bytes_obj::alloc(tmp18);
								this2 = tmp19;
								tmp17 = this2;
							}
							_this->buffer = tmp17;
							_this->copyFromArray(((Array< Float >)(null())),null());
							tmp13 = _this;
						}
						this1 = tmp13;
					}
					else{
						bool tmp13 = false;
						if ((tmp13)){
							::lime::utils::ArrayBufferView tmp14;
							{
								::lime::utils::ArrayBufferView tmp15 = ::lime::utils::ArrayBufferView_obj::__new((int)0,(int)4);
								::lime::utils::ArrayBufferView _this = tmp15;
								cpp::ArrayBase array = hx::Throw(HX_CSTRING("Invalid field access on null object"));
								_this->byteOffset = (int)0;
								_this->length = array->__Field(HX_HCSTRING("length","\xe6","\x94","\x07","\x9f"), hx::paccDynamic );
								int tmp16 = (_this->length * _this->bytesPerElement);
								_this->byteLength = tmp16;
								::haxe::io::Bytes tmp17;
								{
									::haxe::io::Bytes this2;
									int tmp18 = _this->byteLength;
									::haxe::io::Bytes tmp19 = ::haxe::io::Bytes_obj::alloc(tmp18);
									this2 = tmp19;
									tmp17 = this2;
								}
								_this->buffer = tmp17;
								_this->copyFromArray(((Array< Float >)(array)),null());
								tmp14 = _this;
							}
							this1 = tmp14;
						}
						else{
							bool tmp14 = false;
							if ((tmp14)){
								::lime::utils::ArrayBufferView tmp15;
								{
									::lime::utils::ArrayBufferView tmp16 = ::lime::utils::ArrayBufferView_obj::__new((int)0,(int)4);
									::lime::utils::ArrayBufferView _this = tmp16;
									::haxe::io::Bytes tmp17 = hx::Throw(HX_CSTRING("Invalid field access on null object"));
									::haxe::io::Bytes srcData = tmp17;
									int tmp18 = hx::Throw(HX_CSTRING("Invalid field access on null object"));
									int srcLength = tmp18;
									int tmp19 = hx::Throw(HX_CSTRING("Invalid field access on null object"));
									int srcByteOffset = tmp19;
									int tmp20 = hx::Throw(HX_CSTRING("Invalid field access on null object"));
									int srcElementSize = tmp20;
									int elementSize = _this->bytesPerElement;
									int tmp21 = hx::Throw(HX_CSTRING("Invalid field access on null object"));
									int tmp22 = _this->type;
									bool tmp23 = (tmp21 == tmp22);
									if ((tmp23)){
										int srcLength1 = srcData->length;
										int tmp24 = (srcLength1 - srcByteOffset);
										int cloneLength = tmp24;
										::haxe::io::Bytes tmp25;
										{
											::haxe::io::Bytes this2;
											int tmp26 = cloneLength;
											::haxe::io::Bytes tmp27 = ::haxe::io::Bytes_obj::alloc(tmp26);
											this2 = tmp27;
											tmp25 = this2;
										}
										_this->buffer = tmp25;
										::haxe::io::Bytes tmp26 = srcData;
										int tmp27 = srcByteOffset;
										int tmp28 = cloneLength;
										_this->buffer->blit((int)0,tmp26,tmp27,tmp28);
									}
									else{
										HX_STACK_DO_THROW(HX_HCSTRING("unimplemented","\x09","\x2f","\x74","\xb4"));
									}
									int tmp24 = (_this->bytesPerElement * srcLength);
									_this->byteLength = tmp24;
									_this->byteOffset = (int)0;
									_this->length = srcLength;
									tmp15 = _this;
								}
								this1 = tmp15;
							}
							else{
								bool tmp15 = (buffer != null());
								if ((tmp15)){
									::lime::utils::ArrayBufferView tmp16;
									{
										::lime::utils::ArrayBufferView tmp17 = ::lime::utils::ArrayBufferView_obj::__new((int)0,(int)4);
										::lime::utils::ArrayBufferView _this = tmp17;
										int in_byteOffset = byte_offset;
										bool tmp18 = (in_byteOffset < (int)0);
										if ((tmp18)){
											HX_STACK_DO_THROW(::lime::utils::TAError_obj::RangeError);
										}
										int tmp19 = hx::Mod(in_byteOffset,_this->bytesPerElement);
										bool tmp20 = (tmp19 != (int)0);
										if ((tmp20)){
											HX_STACK_DO_THROW(::lime::utils::TAError_obj::RangeError);
										}
										int bufferByteLength = buffer->length;
										int elementSize = _this->bytesPerElement;
										int newByteLength = bufferByteLength;
										bool tmp21 = (len == null());
										if ((tmp21)){
											int tmp22 = (bufferByteLength - in_byteOffset);
											newByteLength = tmp22;
											int tmp23 = hx::Mod(bufferByteLength,_this->bytesPerElement);
											bool tmp24 = (tmp23 != (int)0);
											if ((tmp24)){
												HX_STACK_DO_THROW(::lime::utils::TAError_obj::RangeError);
											}
											bool tmp25 = (newByteLength < (int)0);
											if ((tmp25)){
												HX_STACK_DO_THROW(::lime::utils::TAError_obj::RangeError);
											}
										}
										else{
											int tmp22 = (len * _this->bytesPerElement);
											newByteLength = tmp22;
											int tmp23 = (in_byteOffset + newByteLength);
											int newRange = tmp23;
											bool tmp24 = (newRange > bufferByteLength);
											if ((tmp24)){
												HX_STACK_DO_THROW(::lime::utils::TAError_obj::RangeError);
											}
										}
										_this->buffer = buffer;
										_this->byteOffset = in_byteOffset;
										_this->byteLength = newByteLength;
										Float tmp22 = (Float(newByteLength) / Float(_this->bytesPerElement));
										int tmp23 = ::Std_obj::_int(tmp22);
										_this->length = tmp23;
										tmp16 = _this;
									}
									this1 = tmp16;
								}
								else{
									HX_STACK_DO_THROW(HX_HCSTRING("Invalid constructor arguments for UInt8Array","\x6b","\x44","\xd5","\x85"));
								}
							}
						}
					}
				}
				tmp7 = this1;
			}
			;break;
			case (int)5: {
				::haxe::io::Bytes tmp10 = this->buffer;
				::haxe::io::Bytes buffer = tmp10;
				::lime::utils::ArrayBufferView this1;
				bool tmp11 = false;
				if ((tmp11)){
					::lime::utils::ArrayBufferView tmp12 = ::lime::utils::ArrayBufferView_obj::__new(null(),(int)5);
					this1 = tmp12;
				}
				else{
					bool tmp12 = false;
					if ((tmp12)){
						::lime::utils::ArrayBufferView tmp13;
						{
							::lime::utils::ArrayBufferView tmp14 = ::lime::utils::ArrayBufferView_obj::__new((int)0,(int)5);
							::lime::utils::ArrayBufferView _this = tmp14;
							_this->byteOffset = (int)0;
							int tmp15 = hx::Throw(HX_CSTRING("Invalid field access on null object"));
							_this->length = tmp15;
							int tmp16 = (_this->length * _this->bytesPerElement);
							_this->byteLength = tmp16;
							::haxe::io::Bytes tmp17;
							{
								::haxe::io::Bytes this2;
								int tmp18 = _this->byteLength;
								::haxe::io::Bytes tmp19 = ::haxe::io::Bytes_obj::alloc(tmp18);
								this2 = tmp19;
								tmp17 = this2;
							}
							_this->buffer = tmp17;
							_this->copyFromArray(((Array< Float >)(null())),null());
							tmp13 = _this;
						}
						this1 = tmp13;
					}
					else{
						bool tmp13 = false;
						if ((tmp13)){
							::lime::utils::ArrayBufferView tmp14;
							{
								::lime::utils::ArrayBufferView tmp15 = ::lime::utils::ArrayBufferView_obj::__new((int)0,(int)5);
								::lime::utils::ArrayBufferView _this = tmp15;
								cpp::ArrayBase array = hx::Throw(HX_CSTRING("Invalid field access on null object"));
								_this->byteOffset = (int)0;
								_this->length = array->__Field(HX_HCSTRING("length","\xe6","\x94","\x07","\x9f"), hx::paccDynamic );
								int tmp16 = (_this->length * _this->bytesPerElement);
								_this->byteLength = tmp16;
								::haxe::io::Bytes tmp17;
								{
									::haxe::io::Bytes this2;
									int tmp18 = _this->byteLength;
									::haxe::io::Bytes tmp19 = ::haxe::io::Bytes_obj::alloc(tmp18);
									this2 = tmp19;
									tmp17 = this2;
								}
								_this->buffer = tmp17;
								_this->copyFromArray(((Array< Float >)(array)),null());
								tmp14 = _this;
							}
							this1 = tmp14;
						}
						else{
							bool tmp14 = false;
							if ((tmp14)){
								::lime::utils::ArrayBufferView tmp15;
								{
									::lime::utils::ArrayBufferView tmp16 = ::lime::utils::ArrayBufferView_obj::__new((int)0,(int)5);
									::lime::utils::ArrayBufferView _this = tmp16;
									::haxe::io::Bytes tmp17 = hx::Throw(HX_CSTRING("Invalid field access on null object"));
									::haxe::io::Bytes srcData = tmp17;
									int tmp18 = hx::Throw(HX_CSTRING("Invalid field access on null object"));
									int srcLength = tmp18;
									int tmp19 = hx::Throw(HX_CSTRING("Invalid field access on null object"));
									int srcByteOffset = tmp19;
									int tmp20 = hx::Throw(HX_CSTRING("Invalid field access on null object"));
									int srcElementSize = tmp20;
									int elementSize = _this->bytesPerElement;
									int tmp21 = hx::Throw(HX_CSTRING("Invalid field access on null object"));
									int tmp22 = _this->type;
									bool tmp23 = (tmp21 == tmp22);
									if ((tmp23)){
										int srcLength1 = srcData->length;
										int tmp24 = (srcLength1 - srcByteOffset);
										int cloneLength = tmp24;
										::haxe::io::Bytes tmp25;
										{
											::haxe::io::Bytes this2;
											int tmp26 = cloneLength;
											::haxe::io::Bytes tmp27 = ::haxe::io::Bytes_obj::alloc(tmp26);
											this2 = tmp27;
											tmp25 = this2;
										}
										_this->buffer = tmp25;
										::haxe::io::Bytes tmp26 = srcData;
										int tmp27 = srcByteOffset;
										int tmp28 = cloneLength;
										_this->buffer->blit((int)0,tmp26,tmp27,tmp28);
									}
									else{
										HX_STACK_DO_THROW(HX_HCSTRING("unimplemented","\x09","\x2f","\x74","\xb4"));
									}
									int tmp24 = (_this->bytesPerElement * srcLength);
									_this->byteLength = tmp24;
									_this->byteOffset = (int)0;
									_this->length = srcLength;
									tmp15 = _this;
								}
								this1 = tmp15;
							}
							else{
								bool tmp15 = (buffer != null());
								if ((tmp15)){
									::lime::utils::ArrayBufferView tmp16;
									{
										::lime::utils::ArrayBufferView tmp17 = ::lime::utils::ArrayBufferView_obj::__new((int)0,(int)5);
										::lime::utils::ArrayBufferView _this = tmp17;
										int in_byteOffset = byte_offset;
										bool tmp18 = (in_byteOffset < (int)0);
										if ((tmp18)){
											HX_STACK_DO_THROW(::lime::utils::TAError_obj::RangeError);
										}
										int tmp19 = hx::Mod(in_byteOffset,_this->bytesPerElement);
										bool tmp20 = (tmp19 != (int)0);
										if ((tmp20)){
											HX_STACK_DO_THROW(::lime::utils::TAError_obj::RangeError);
										}
										int bufferByteLength = buffer->length;
										int elementSize = _this->bytesPerElement;
										int newByteLength = bufferByteLength;
										bool tmp21 = (len == null());
										if ((tmp21)){
											int tmp22 = (bufferByteLength - in_byteOffset);
											newByteLength = tmp22;
											int tmp23 = hx::Mod(bufferByteLength,_this->bytesPerElement);
											bool tmp24 = (tmp23 != (int)0);
											if ((tmp24)){
												HX_STACK_DO_THROW(::lime::utils::TAError_obj::RangeError);
											}
											bool tmp25 = (newByteLength < (int)0);
											if ((tmp25)){
												HX_STACK_DO_THROW(::lime::utils::TAError_obj::RangeError);
											}
										}
										else{
											int tmp22 = (len * _this->bytesPerElement);
											newByteLength = tmp22;
											int tmp23 = (in_byteOffset + newByteLength);
											int newRange = tmp23;
											bool tmp24 = (newRange > bufferByteLength);
											if ((tmp24)){
												HX_STACK_DO_THROW(::lime::utils::TAError_obj::RangeError);
											}
										}
										_this->buffer = buffer;
										_this->byteOffset = in_byteOffset;
										_this->byteLength = newByteLength;
										Float tmp22 = (Float(newByteLength) / Float(_this->bytesPerElement));
										int tmp23 = ::Std_obj::_int(tmp22);
										_this->length = tmp23;
										tmp16 = _this;
									}
									this1 = tmp16;
								}
								else{
									HX_STACK_DO_THROW(HX_HCSTRING("Invalid constructor arguments for UInt8ClampedArray","\x8d","\x06","\x77","\x13"));
								}
							}
						}
					}
				}
				tmp7 = this1;
			}
			;break;
			case (int)6: {
				::haxe::io::Bytes tmp10 = this->buffer;
				::haxe::io::Bytes buffer = tmp10;
				::lime::utils::ArrayBufferView this1;
				bool tmp11 = false;
				if ((tmp11)){
					::lime::utils::ArrayBufferView tmp12 = ::lime::utils::ArrayBufferView_obj::__new(null(),(int)6);
					this1 = tmp12;
				}
				else{
					bool tmp12 = false;
					if ((tmp12)){
						::lime::utils::ArrayBufferView tmp13;
						{
							::lime::utils::ArrayBufferView tmp14 = ::lime::utils::ArrayBufferView_obj::__new((int)0,(int)6);
							::lime::utils::ArrayBufferView _this = tmp14;
							_this->byteOffset = (int)0;
							int tmp15 = hx::Throw(HX_CSTRING("Invalid field access on null object"));
							_this->length = tmp15;
							int tmp16 = (_this->length * _this->bytesPerElement);
							_this->byteLength = tmp16;
							::haxe::io::Bytes tmp17;
							{
								::haxe::io::Bytes this2;
								int tmp18 = _this->byteLength;
								::haxe::io::Bytes tmp19 = ::haxe::io::Bytes_obj::alloc(tmp18);
								this2 = tmp19;
								tmp17 = this2;
							}
							_this->buffer = tmp17;
							_this->copyFromArray(((Array< Float >)(null())),null());
							tmp13 = _this;
						}
						this1 = tmp13;
					}
					else{
						bool tmp13 = false;
						if ((tmp13)){
							::lime::utils::ArrayBufferView tmp14;
							{
								::lime::utils::ArrayBufferView tmp15 = ::lime::utils::ArrayBufferView_obj::__new((int)0,(int)6);
								::lime::utils::ArrayBufferView _this = tmp15;
								cpp::ArrayBase array = hx::Throw(HX_CSTRING("Invalid field access on null object"));
								_this->byteOffset = (int)0;
								_this->length = array->__Field(HX_HCSTRING("length","\xe6","\x94","\x07","\x9f"), hx::paccDynamic );
								int tmp16 = (_this->length * _this->bytesPerElement);
								_this->byteLength = tmp16;
								::haxe::io::Bytes tmp17;
								{
									::haxe::io::Bytes this2;
									int tmp18 = _this->byteLength;
									::haxe::io::Bytes tmp19 = ::haxe::io::Bytes_obj::alloc(tmp18);
									this2 = tmp19;
									tmp17 = this2;
								}
								_this->buffer = tmp17;
								_this->copyFromArray(((Array< Float >)(array)),null());
								tmp14 = _this;
							}
							this1 = tmp14;
						}
						else{
							bool tmp14 = false;
							if ((tmp14)){
								::lime::utils::ArrayBufferView tmp15;
								{
									::lime::utils::ArrayBufferView tmp16 = ::lime::utils::ArrayBufferView_obj::__new((int)0,(int)6);
									::lime::utils::ArrayBufferView _this = tmp16;
									::haxe::io::Bytes tmp17 = hx::Throw(HX_CSTRING("Invalid field access on null object"));
									::haxe::io::Bytes srcData = tmp17;
									int tmp18 = hx::Throw(HX_CSTRING("Invalid field access on null object"));
									int srcLength = tmp18;
									int tmp19 = hx::Throw(HX_CSTRING("Invalid field access on null object"));
									int srcByteOffset = tmp19;
									int tmp20 = hx::Throw(HX_CSTRING("Invalid field access on null object"));
									int srcElementSize = tmp20;
									int elementSize = _this->bytesPerElement;
									int tmp21 = hx::Throw(HX_CSTRING("Invalid field access on null object"));
									int tmp22 = _this->type;
									bool tmp23 = (tmp21 == tmp22);
									if ((tmp23)){
										int srcLength1 = srcData->length;
										int tmp24 = (srcLength1 - srcByteOffset);
										int cloneLength = tmp24;
										::haxe::io::Bytes tmp25;
										{
											::haxe::io::Bytes this2;
											int tmp26 = cloneLength;
											::haxe::io::Bytes tmp27 = ::haxe::io::Bytes_obj::alloc(tmp26);
											this2 = tmp27;
											tmp25 = this2;
										}
										_this->buffer = tmp25;
										::haxe::io::Bytes tmp26 = srcData;
										int tmp27 = srcByteOffset;
										int tmp28 = cloneLength;
										_this->buffer->blit((int)0,tmp26,tmp27,tmp28);
									}
									else{
										HX_STACK_DO_THROW(HX_HCSTRING("unimplemented","\x09","\x2f","\x74","\xb4"));
									}
									int tmp24 = (_this->bytesPerElement * srcLength);
									_this->byteLength = tmp24;
									_this->byteOffset = (int)0;
									_this->length = srcLength;
									tmp15 = _this;
								}
								this1 = tmp15;
							}
							else{
								bool tmp15 = (buffer != null());
								if ((tmp15)){
									::lime::utils::ArrayBufferView tmp16;
									{
										::lime::utils::ArrayBufferView tmp17 = ::lime::utils::ArrayBufferView_obj::__new((int)0,(int)6);
										::lime::utils::ArrayBufferView _this = tmp17;
										int in_byteOffset = byte_offset;
										bool tmp18 = (in_byteOffset < (int)0);
										if ((tmp18)){
											HX_STACK_DO_THROW(::lime::utils::TAError_obj::RangeError);
										}
										int tmp19 = hx::Mod(in_byteOffset,_this->bytesPerElement);
										bool tmp20 = (tmp19 != (int)0);
										if ((tmp20)){
											HX_STACK_DO_THROW(::lime::utils::TAError_obj::RangeError);
										}
										int bufferByteLength = buffer->length;
										int elementSize = _this->bytesPerElement;
										int newByteLength = bufferByteLength;
										bool tmp21 = (len == null());
										if ((tmp21)){
											int tmp22 = (bufferByteLength - in_byteOffset);
											newByteLength = tmp22;
											int tmp23 = hx::Mod(bufferByteLength,_this->bytesPerElement);
											bool tmp24 = (tmp23 != (int)0);
											if ((tmp24)){
												HX_STACK_DO_THROW(::lime::utils::TAError_obj::RangeError);
											}
											bool tmp25 = (newByteLength < (int)0);
											if ((tmp25)){
												HX_STACK_DO_THROW(::lime::utils::TAError_obj::RangeError);
											}
										}
										else{
											int tmp22 = (len * _this->bytesPerElement);
											newByteLength = tmp22;
											int tmp23 = (in_byteOffset + newByteLength);
											int newRange = tmp23;
											bool tmp24 = (newRange > bufferByteLength);
											if ((tmp24)){
												HX_STACK_DO_THROW(::lime::utils::TAError_obj::RangeError);
											}
										}
										_this->buffer = buffer;
										_this->byteOffset = in_byteOffset;
										_this->byteLength = newByteLength;
										Float tmp22 = (Float(newByteLength) / Float(_this->bytesPerElement));
										int tmp23 = ::Std_obj::_int(tmp22);
										_this->length = tmp23;
										tmp16 = _this;
									}
									this1 = tmp16;
								}
								else{
									HX_STACK_DO_THROW(HX_HCSTRING("Invalid constructor arguments for UInt16Array","\x0a","\xc7","\x2d","\xd5"));
								}
							}
						}
					}
				}
				tmp7 = this1;
			}
			;break;
			case (int)7: {
				::haxe::io::Bytes tmp10 = this->buffer;
				::haxe::io::Bytes buffer = tmp10;
				::lime::utils::ArrayBufferView this1;
				bool tmp11 = false;
				if ((tmp11)){
					::lime::utils::ArrayBufferView tmp12 = ::lime::utils::ArrayBufferView_obj::__new(null(),(int)7);
					this1 = tmp12;
				}
				else{
					bool tmp12 = false;
					if ((tmp12)){
						::lime::utils::ArrayBufferView tmp13;
						{
							::lime::utils::ArrayBufferView tmp14 = ::lime::utils::ArrayBufferView_obj::__new((int)0,(int)7);
							::lime::utils::ArrayBufferView _this = tmp14;
							_this->byteOffset = (int)0;
							int tmp15 = hx::Throw(HX_CSTRING("Invalid field access on null object"));
							_this->length = tmp15;
							int tmp16 = (_this->length * _this->bytesPerElement);
							_this->byteLength = tmp16;
							::haxe::io::Bytes tmp17;
							{
								::haxe::io::Bytes this2;
								int tmp18 = _this->byteLength;
								::haxe::io::Bytes tmp19 = ::haxe::io::Bytes_obj::alloc(tmp18);
								this2 = tmp19;
								tmp17 = this2;
							}
							_this->buffer = tmp17;
							_this->copyFromArray(((Array< Float >)(null())),null());
							tmp13 = _this;
						}
						this1 = tmp13;
					}
					else{
						bool tmp13 = false;
						if ((tmp13)){
							::lime::utils::ArrayBufferView tmp14;
							{
								::lime::utils::ArrayBufferView tmp15 = ::lime::utils::ArrayBufferView_obj::__new((int)0,(int)7);
								::lime::utils::ArrayBufferView _this = tmp15;
								cpp::ArrayBase array = hx::Throw(HX_CSTRING("Invalid field access on null object"));
								_this->byteOffset = (int)0;
								_this->length = array->__Field(HX_HCSTRING("length","\xe6","\x94","\x07","\x9f"), hx::paccDynamic );
								int tmp16 = (_this->length * _this->bytesPerElement);
								_this->byteLength = tmp16;
								::haxe::io::Bytes tmp17;
								{
									::haxe::io::Bytes this2;
									int tmp18 = _this->byteLength;
									::haxe::io::Bytes tmp19 = ::haxe::io::Bytes_obj::alloc(tmp18);
									this2 = tmp19;
									tmp17 = this2;
								}
								_this->buffer = tmp17;
								_this->copyFromArray(((Array< Float >)(array)),null());
								tmp14 = _this;
							}
							this1 = tmp14;
						}
						else{
							bool tmp14 = false;
							if ((tmp14)){
								::lime::utils::ArrayBufferView tmp15;
								{
									::lime::utils::ArrayBufferView tmp16 = ::lime::utils::ArrayBufferView_obj::__new((int)0,(int)7);
									::lime::utils::ArrayBufferView _this = tmp16;
									::haxe::io::Bytes tmp17 = hx::Throw(HX_CSTRING("Invalid field access on null object"));
									::haxe::io::Bytes srcData = tmp17;
									int tmp18 = hx::Throw(HX_CSTRING("Invalid field access on null object"));
									int srcLength = tmp18;
									int tmp19 = hx::Throw(HX_CSTRING("Invalid field access on null object"));
									int srcByteOffset = tmp19;
									int tmp20 = hx::Throw(HX_CSTRING("Invalid field access on null object"));
									int srcElementSize = tmp20;
									int elementSize = _this->bytesPerElement;
									int tmp21 = hx::Throw(HX_CSTRING("Invalid field access on null object"));
									int tmp22 = _this->type;
									bool tmp23 = (tmp21 == tmp22);
									if ((tmp23)){
										int srcLength1 = srcData->length;
										int tmp24 = (srcLength1 - srcByteOffset);
										int cloneLength = tmp24;
										::haxe::io::Bytes tmp25;
										{
											::haxe::io::Bytes this2;
											int tmp26 = cloneLength;
											::haxe::io::Bytes tmp27 = ::haxe::io::Bytes_obj::alloc(tmp26);
											this2 = tmp27;
											tmp25 = this2;
										}
										_this->buffer = tmp25;
										::haxe::io::Bytes tmp26 = srcData;
										int tmp27 = srcByteOffset;
										int tmp28 = cloneLength;
										_this->buffer->blit((int)0,tmp26,tmp27,tmp28);
									}
									else{
										HX_STACK_DO_THROW(HX_HCSTRING("unimplemented","\x09","\x2f","\x74","\xb4"));
									}
									int tmp24 = (_this->bytesPerElement * srcLength);
									_this->byteLength = tmp24;
									_this->byteOffset = (int)0;
									_this->length = srcLength;
									tmp15 = _this;
								}
								this1 = tmp15;
							}
							else{
								bool tmp15 = (buffer != null());
								if ((tmp15)){
									::lime::utils::ArrayBufferView tmp16;
									{
										::lime::utils::ArrayBufferView tmp17 = ::lime::utils::ArrayBufferView_obj::__new((int)0,(int)7);
										::lime::utils::ArrayBufferView _this = tmp17;
										int in_byteOffset = byte_offset;
										bool tmp18 = (in_byteOffset < (int)0);
										if ((tmp18)){
											HX_STACK_DO_THROW(::lime::utils::TAError_obj::RangeError);
										}
										int tmp19 = hx::Mod(in_byteOffset,_this->bytesPerElement);
										bool tmp20 = (tmp19 != (int)0);
										if ((tmp20)){
											HX_STACK_DO_THROW(::lime::utils::TAError_obj::RangeError);
										}
										int bufferByteLength = buffer->length;
										int elementSize = _this->bytesPerElement;
										int newByteLength = bufferByteLength;
										bool tmp21 = (len == null());
										if ((tmp21)){
											int tmp22 = (bufferByteLength - in_byteOffset);
											newByteLength = tmp22;
											int tmp23 = hx::Mod(bufferByteLength,_this->bytesPerElement);
											bool tmp24 = (tmp23 != (int)0);
											if ((tmp24)){
												HX_STACK_DO_THROW(::lime::utils::TAError_obj::RangeError);
											}
											bool tmp25 = (newByteLength < (int)0);
											if ((tmp25)){
												HX_STACK_DO_THROW(::lime::utils::TAError_obj::RangeError);
											}
										}
										else{
											int tmp22 = (len * _this->bytesPerElement);
											newByteLength = tmp22;
											int tmp23 = (in_byteOffset + newByteLength);
											int newRange = tmp23;
											bool tmp24 = (newRange > bufferByteLength);
											if ((tmp24)){
												HX_STACK_DO_THROW(::lime::utils::TAError_obj::RangeError);
											}
										}
										_this->buffer = buffer;
										_this->byteOffset = in_byteOffset;
										_this->byteLength = newByteLength;
										Float tmp22 = (Float(newByteLength) / Float(_this->bytesPerElement));
										int tmp23 = ::Std_obj::_int(tmp22);
										_this->length = tmp23;
										tmp16 = _this;
									}
									this1 = tmp16;
								}
								else{
									HX_STACK_DO_THROW(HX_HCSTRING("Invalid constructor arguments for UInt32Array","\x10","\x43","\xeb","\x8e"));
								}
							}
						}
					}
				}
				tmp7 = this1;
			}
			;break;
			case (int)8: {
				::haxe::io::Bytes tmp10 = this->buffer;
				::haxe::io::Bytes buffer = tmp10;
				::lime::utils::ArrayBufferView this1;
				bool tmp11 = false;
				if ((tmp11)){
					::lime::utils::ArrayBufferView tmp12 = ::lime::utils::ArrayBufferView_obj::__new(null(),(int)8);
					this1 = tmp12;
				}
				else{
					bool tmp12 = false;
					if ((tmp12)){
						::lime::utils::ArrayBufferView tmp13;
						{
							::lime::utils::ArrayBufferView tmp14 = ::lime::utils::ArrayBufferView_obj::__new((int)0,(int)8);
							::lime::utils::ArrayBufferView _this = tmp14;
							_this->byteOffset = (int)0;
							int tmp15 = hx::Throw(HX_CSTRING("Invalid field access on null object"));
							_this->length = tmp15;
							int tmp16 = (_this->length * _this->bytesPerElement);
							_this->byteLength = tmp16;
							::haxe::io::Bytes tmp17;
							{
								::haxe::io::Bytes this2;
								int tmp18 = _this->byteLength;
								::haxe::io::Bytes tmp19 = ::haxe::io::Bytes_obj::alloc(tmp18);
								this2 = tmp19;
								tmp17 = this2;
							}
							_this->buffer = tmp17;
							_this->copyFromArray(((Array< Float >)(null())),null());
							tmp13 = _this;
						}
						this1 = tmp13;
					}
					else{
						bool tmp13 = false;
						if ((tmp13)){
							::lime::utils::ArrayBufferView tmp14;
							{
								::lime::utils::ArrayBufferView tmp15 = ::lime::utils::ArrayBufferView_obj::__new((int)0,(int)8);
								::lime::utils::ArrayBufferView _this = tmp15;
								cpp::ArrayBase array = hx::Throw(HX_CSTRING("Invalid field access on null object"));
								_this->byteOffset = (int)0;
								_this->length = array->__Field(HX_HCSTRING("length","\xe6","\x94","\x07","\x9f"), hx::paccDynamic );
								int tmp16 = (_this->length * _this->bytesPerElement);
								_this->byteLength = tmp16;
								::haxe::io::Bytes tmp17;
								{
									::haxe::io::Bytes this2;
									int tmp18 = _this->byteLength;
									::haxe::io::Bytes tmp19 = ::haxe::io::Bytes_obj::alloc(tmp18);
									this2 = tmp19;
									tmp17 = this2;
								}
								_this->buffer = tmp17;
								_this->copyFromArray(((Array< Float >)(array)),null());
								tmp14 = _this;
							}
							this1 = tmp14;
						}
						else{
							bool tmp14 = false;
							if ((tmp14)){
								::lime::utils::ArrayBufferView tmp15;
								{
									::lime::utils::ArrayBufferView tmp16 = ::lime::utils::ArrayBufferView_obj::__new((int)0,(int)8);
									::lime::utils::ArrayBufferView _this = tmp16;
									::haxe::io::Bytes tmp17 = hx::Throw(HX_CSTRING("Invalid field access on null object"));
									::haxe::io::Bytes srcData = tmp17;
									int tmp18 = hx::Throw(HX_CSTRING("Invalid field access on null object"));
									int srcLength = tmp18;
									int tmp19 = hx::Throw(HX_CSTRING("Invalid field access on null object"));
									int srcByteOffset = tmp19;
									int tmp20 = hx::Throw(HX_CSTRING("Invalid field access on null object"));
									int srcElementSize = tmp20;
									int elementSize = _this->bytesPerElement;
									int tmp21 = hx::Throw(HX_CSTRING("Invalid field access on null object"));
									int tmp22 = _this->type;
									bool tmp23 = (tmp21 == tmp22);
									if ((tmp23)){
										int srcLength1 = srcData->length;
										int tmp24 = (srcLength1 - srcByteOffset);
										int cloneLength = tmp24;
										::haxe::io::Bytes tmp25;
										{
											::haxe::io::Bytes this2;
											int tmp26 = cloneLength;
											::haxe::io::Bytes tmp27 = ::haxe::io::Bytes_obj::alloc(tmp26);
											this2 = tmp27;
											tmp25 = this2;
										}
										_this->buffer = tmp25;
										::haxe::io::Bytes tmp26 = srcData;
										int tmp27 = srcByteOffset;
										int tmp28 = cloneLength;
										_this->buffer->blit((int)0,tmp26,tmp27,tmp28);
									}
									else{
										HX_STACK_DO_THROW(HX_HCSTRING("unimplemented","\x09","\x2f","\x74","\xb4"));
									}
									int tmp24 = (_this->bytesPerElement * srcLength);
									_this->byteLength = tmp24;
									_this->byteOffset = (int)0;
									_this->length = srcLength;
									tmp15 = _this;
								}
								this1 = tmp15;
							}
							else{
								bool tmp15 = (buffer != null());
								if ((tmp15)){
									::lime::utils::ArrayBufferView tmp16;
									{
										::lime::utils::ArrayBufferView tmp17 = ::lime::utils::ArrayBufferView_obj::__new((int)0,(int)8);
										::lime::utils::ArrayBufferView _this = tmp17;
										int in_byteOffset = byte_offset;
										bool tmp18 = (in_byteOffset < (int)0);
										if ((tmp18)){
											HX_STACK_DO_THROW(::lime::utils::TAError_obj::RangeError);
										}
										int tmp19 = hx::Mod(in_byteOffset,_this->bytesPerElement);
										bool tmp20 = (tmp19 != (int)0);
										if ((tmp20)){
											HX_STACK_DO_THROW(::lime::utils::TAError_obj::RangeError);
										}
										int bufferByteLength = buffer->length;
										int elementSize = _this->bytesPerElement;
										int newByteLength = bufferByteLength;
										bool tmp21 = (len == null());
										if ((tmp21)){
											int tmp22 = (bufferByteLength - in_byteOffset);
											newByteLength = tmp22;
											int tmp23 = hx::Mod(bufferByteLength,_this->bytesPerElement);
											bool tmp24 = (tmp23 != (int)0);
											if ((tmp24)){
												HX_STACK_DO_THROW(::lime::utils::TAError_obj::RangeError);
											}
											bool tmp25 = (newByteLength < (int)0);
											if ((tmp25)){
												HX_STACK_DO_THROW(::lime::utils::TAError_obj::RangeError);
											}
										}
										else{
											int tmp22 = (len * _this->bytesPerElement);
											newByteLength = tmp22;
											int tmp23 = (in_byteOffset + newByteLength);
											int newRange = tmp23;
											bool tmp24 = (newRange > bufferByteLength);
											if ((tmp24)){
												HX_STACK_DO_THROW(::lime::utils::TAError_obj::RangeError);
											}
										}
										_this->buffer = buffer;
										_this->byteOffset = in_byteOffset;
										_this->byteLength = newByteLength;
										Float tmp22 = (Float(newByteLength) / Float(_this->bytesPerElement));
										int tmp23 = ::Std_obj::_int(tmp22);
										_this->length = tmp23;
										tmp16 = _this;
									}
									this1 = tmp16;
								}
								else{
									HX_STACK_DO_THROW(HX_HCSTRING("Invalid constructor arguments for Float32Array","\x8e","\xc1","\xf4","\xd4"));
								}
							}
						}
					}
				}
				tmp7 = this1;
			}
			;break;
			case (int)9: {
				::haxe::io::Bytes tmp10 = this->buffer;
				::haxe::io::Bytes buffer = tmp10;
				::lime::utils::ArrayBufferView this1;
				bool tmp11 = false;
				if ((tmp11)){
					::lime::utils::ArrayBufferView tmp12 = ::lime::utils::ArrayBufferView_obj::__new(null(),(int)9);
					this1 = tmp12;
				}
				else{
					bool tmp12 = false;
					if ((tmp12)){
						::lime::utils::ArrayBufferView tmp13;
						{
							::lime::utils::ArrayBufferView tmp14 = ::lime::utils::ArrayBufferView_obj::__new((int)0,(int)9);
							::lime::utils::ArrayBufferView _this = tmp14;
							_this->byteOffset = (int)0;
							int tmp15 = hx::Throw(HX_CSTRING("Invalid field access on null object"));
							_this->length = tmp15;
							int tmp16 = (_this->length * _this->bytesPerElement);
							_this->byteLength = tmp16;
							::haxe::io::Bytes tmp17;
							{
								::haxe::io::Bytes this2;
								int tmp18 = _this->byteLength;
								::haxe::io::Bytes tmp19 = ::haxe::io::Bytes_obj::alloc(tmp18);
								this2 = tmp19;
								tmp17 = this2;
							}
							_this->buffer = tmp17;
							_this->copyFromArray(((Array< Float >)(null())),null());
							tmp13 = _this;
						}
						this1 = tmp13;
					}
					else{
						bool tmp13 = false;
						if ((tmp13)){
							::lime::utils::ArrayBufferView tmp14;
							{
								::lime::utils::ArrayBufferView tmp15 = ::lime::utils::ArrayBufferView_obj::__new((int)0,(int)9);
								::lime::utils::ArrayBufferView _this = tmp15;
								cpp::ArrayBase array = hx::Throw(HX_CSTRING("Invalid field access on null object"));
								_this->byteOffset = (int)0;
								_this->length = array->__Field(HX_HCSTRING("length","\xe6","\x94","\x07","\x9f"), hx::paccDynamic );
								int tmp16 = (_this->length * _this->bytesPerElement);
								_this->byteLength = tmp16;
								::haxe::io::Bytes tmp17;
								{
									::haxe::io::Bytes this2;
									int tmp18 = _this->byteLength;
									::haxe::io::Bytes tmp19 = ::haxe::io::Bytes_obj::alloc(tmp18);
									this2 = tmp19;
									tmp17 = this2;
								}
								_this->buffer = tmp17;
								_this->copyFromArray(((Array< Float >)(array)),null());
								tmp14 = _this;
							}
							this1 = tmp14;
						}
						else{
							bool tmp14 = false;
							if ((tmp14)){
								::lime::utils::ArrayBufferView tmp15;
								{
									::lime::utils::ArrayBufferView tmp16 = ::lime::utils::ArrayBufferView_obj::__new((int)0,(int)9);
									::lime::utils::ArrayBufferView _this = tmp16;
									::haxe::io::Bytes tmp17 = hx::Throw(HX_CSTRING("Invalid field access on null object"));
									::haxe::io::Bytes srcData = tmp17;
									int tmp18 = hx::Throw(HX_CSTRING("Invalid field access on null object"));
									int srcLength = tmp18;
									int tmp19 = hx::Throw(HX_CSTRING("Invalid field access on null object"));
									int srcByteOffset = tmp19;
									int tmp20 = hx::Throw(HX_CSTRING("Invalid field access on null object"));
									int srcElementSize = tmp20;
									int elementSize = _this->bytesPerElement;
									int tmp21 = hx::Throw(HX_CSTRING("Invalid field access on null object"));
									int tmp22 = _this->type;
									bool tmp23 = (tmp21 == tmp22);
									if ((tmp23)){
										int srcLength1 = srcData->length;
										int tmp24 = (srcLength1 - srcByteOffset);
										int cloneLength = tmp24;
										::haxe::io::Bytes tmp25;
										{
											::haxe::io::Bytes this2;
											int tmp26 = cloneLength;
											::haxe::io::Bytes tmp27 = ::haxe::io::Bytes_obj::alloc(tmp26);
											this2 = tmp27;
											tmp25 = this2;
										}
										_this->buffer = tmp25;
										::haxe::io::Bytes tmp26 = srcData;
										int tmp27 = srcByteOffset;
										int tmp28 = cloneLength;
										_this->buffer->blit((int)0,tmp26,tmp27,tmp28);
									}
									else{
										HX_STACK_DO_THROW(HX_HCSTRING("unimplemented","\x09","\x2f","\x74","\xb4"));
									}
									int tmp24 = (_this->bytesPerElement * srcLength);
									_this->byteLength = tmp24;
									_this->byteOffset = (int)0;
									_this->length = srcLength;
									tmp15 = _this;
								}
								this1 = tmp15;
							}
							else{
								bool tmp15 = (buffer != null());
								if ((tmp15)){
									::lime::utils::ArrayBufferView tmp16;
									{
										::lime::utils::ArrayBufferView tmp17 = ::lime::utils::ArrayBufferView_obj::__new((int)0,(int)9);
										::lime::utils::ArrayBufferView _this = tmp17;
										int in_byteOffset = byte_offset;
										bool tmp18 = (in_byteOffset < (int)0);
										if ((tmp18)){
											HX_STACK_DO_THROW(::lime::utils::TAError_obj::RangeError);
										}
										int tmp19 = hx::Mod(in_byteOffset,_this->bytesPerElement);
										bool tmp20 = (tmp19 != (int)0);
										if ((tmp20)){
											HX_STACK_DO_THROW(::lime::utils::TAError_obj::RangeError);
										}
										int bufferByteLength = buffer->length;
										int elementSize = _this->bytesPerElement;
										int newByteLength = bufferByteLength;
										bool tmp21 = (len == null());
										if ((tmp21)){
											int tmp22 = (bufferByteLength - in_byteOffset);
											newByteLength = tmp22;
											int tmp23 = hx::Mod(bufferByteLength,_this->bytesPerElement);
											bool tmp24 = (tmp23 != (int)0);
											if ((tmp24)){
												HX_STACK_DO_THROW(::lime::utils::TAError_obj::RangeError);
											}
											bool tmp25 = (newByteLength < (int)0);
											if ((tmp25)){
												HX_STACK_DO_THROW(::lime::utils::TAError_obj::RangeError);
											}
										}
										else{
											int tmp22 = (len * _this->bytesPerElement);
											newByteLength = tmp22;
											int tmp23 = (in_byteOffset + newByteLength);
											int newRange = tmp23;
											bool tmp24 = (newRange > bufferByteLength);
											if ((tmp24)){
												HX_STACK_DO_THROW(::lime::utils::TAError_obj::RangeError);
											}
										}
										_this->buffer = buffer;
										_this->byteOffset = in_byteOffset;
										_this->byteLength = newByteLength;
										Float tmp22 = (Float(newByteLength) / Float(_this->bytesPerElement));
										int tmp23 = ::Std_obj::_int(tmp22);
										_this->length = tmp23;
										tmp16 = _this;
									}
									this1 = tmp16;
								}
								else{
									HX_STACK_DO_THROW(HX_HCSTRING("Invalid constructor arguments for Float64Array","\x8f","\xde","\x6b","\x1e"));
								}
							}
						}
					}
				}
				tmp7 = this1;
			}
			;break;
			case (int)0: {
				HX_STACK_DO_THROW(HX_HCSTRING("subarray on a blank ArrayBufferView","\x39","\x87","\xfd","\x19"));
			}
			;break;
		}
	}
	::lime::utils::ArrayBufferView view = tmp7;
	::lime::utils::ArrayBufferView tmp8 = view;
	return tmp8;
}


HX_DEFINE_DYNAMIC_FUNC2(ArrayBufferView_obj,subarray_lime_utils_Int8Array,return )

::lime::utils::ArrayBufferView ArrayBufferView_obj::subarray_lime_utils_UInt8ClampedArray( int begin,Dynamic end){
	bool tmp = (end == null());
	if ((tmp)){
		int tmp1 = this->length;
		end = tmp1;
	}
	int tmp1 = (end - begin);
	int len = tmp1;
	int tmp2 = begin;
	int tmp3 = this->bytesPerElement;
	int tmp4 = (tmp2 * tmp3);
	int tmp5 = this->byteOffset;
	int tmp6 = (tmp4 + tmp5);
	int byte_offset = tmp6;
	::lime::utils::ArrayBufferView tmp7;
	{
		int tmp8 = this->type;
		int _g = tmp8;
		int tmp9 = _g;
		switch( (int)(tmp9)){
			case (int)1: {
				::haxe::io::Bytes tmp10 = this->buffer;
				::haxe::io::Bytes buffer = tmp10;
				::lime::utils::ArrayBufferView this1;
				bool tmp11 = false;
				if ((tmp11)){
					::lime::utils::ArrayBufferView tmp12 = ::lime::utils::ArrayBufferView_obj::__new(null(),(int)1);
					this1 = tmp12;
				}
				else{
					bool tmp12 = false;
					if ((tmp12)){
						::lime::utils::ArrayBufferView tmp13;
						{
							::lime::utils::ArrayBufferView tmp14 = ::lime::utils::ArrayBufferView_obj::__new((int)0,(int)1);
							::lime::utils::ArrayBufferView _this = tmp14;
							_this->byteOffset = (int)0;
							int tmp15 = hx::Throw(HX_CSTRING("Invalid field access on null object"));
							_this->length = tmp15;
							int tmp16 = (_this->length * _this->bytesPerElement);
							_this->byteLength = tmp16;
							::haxe::io::Bytes tmp17;
							{
								::haxe::io::Bytes this2;
								int tmp18 = _this->byteLength;
								::haxe::io::Bytes tmp19 = ::haxe::io::Bytes_obj::alloc(tmp18);
								this2 = tmp19;
								tmp17 = this2;
							}
							_this->buffer = tmp17;
							_this->copyFromArray(((Array< Float >)(null())),null());
							tmp13 = _this;
						}
						this1 = tmp13;
					}
					else{
						bool tmp13 = false;
						if ((tmp13)){
							::lime::utils::ArrayBufferView tmp14;
							{
								::lime::utils::ArrayBufferView tmp15 = ::lime::utils::ArrayBufferView_obj::__new((int)0,(int)1);
								::lime::utils::ArrayBufferView _this = tmp15;
								cpp::ArrayBase array = hx::Throw(HX_CSTRING("Invalid field access on null object"));
								_this->byteOffset = (int)0;
								_this->length = array->__Field(HX_HCSTRING("length","\xe6","\x94","\x07","\x9f"), hx::paccDynamic );
								int tmp16 = (_this->length * _this->bytesPerElement);
								_this->byteLength = tmp16;
								::haxe::io::Bytes tmp17;
								{
									::haxe::io::Bytes this2;
									int tmp18 = _this->byteLength;
									::haxe::io::Bytes tmp19 = ::haxe::io::Bytes_obj::alloc(tmp18);
									this2 = tmp19;
									tmp17 = this2;
								}
								_this->buffer = tmp17;
								_this->copyFromArray(((Array< Float >)(array)),null());
								tmp14 = _this;
							}
							this1 = tmp14;
						}
						else{
							bool tmp14 = false;
							if ((tmp14)){
								::lime::utils::ArrayBufferView tmp15;
								{
									::lime::utils::ArrayBufferView tmp16 = ::lime::utils::ArrayBufferView_obj::__new((int)0,(int)1);
									::lime::utils::ArrayBufferView _this = tmp16;
									::haxe::io::Bytes tmp17 = hx::Throw(HX_CSTRING("Invalid field access on null object"));
									::haxe::io::Bytes srcData = tmp17;
									int tmp18 = hx::Throw(HX_CSTRING("Invalid field access on null object"));
									int srcLength = tmp18;
									int tmp19 = hx::Throw(HX_CSTRING("Invalid field access on null object"));
									int srcByteOffset = tmp19;
									int tmp20 = hx::Throw(HX_CSTRING("Invalid field access on null object"));
									int srcElementSize = tmp20;
									int elementSize = _this->bytesPerElement;
									int tmp21 = hx::Throw(HX_CSTRING("Invalid field access on null object"));
									int tmp22 = _this->type;
									bool tmp23 = (tmp21 == tmp22);
									if ((tmp23)){
										int srcLength1 = srcData->length;
										int tmp24 = (srcLength1 - srcByteOffset);
										int cloneLength = tmp24;
										::haxe::io::Bytes tmp25;
										{
											::haxe::io::Bytes this2;
											int tmp26 = cloneLength;
											::haxe::io::Bytes tmp27 = ::haxe::io::Bytes_obj::alloc(tmp26);
											this2 = tmp27;
											tmp25 = this2;
										}
										_this->buffer = tmp25;
										::haxe::io::Bytes tmp26 = srcData;
										int tmp27 = srcByteOffset;
										int tmp28 = cloneLength;
										_this->buffer->blit((int)0,tmp26,tmp27,tmp28);
									}
									else{
										HX_STACK_DO_THROW(HX_HCSTRING("unimplemented","\x09","\x2f","\x74","\xb4"));
									}
									int tmp24 = (_this->bytesPerElement * srcLength);
									_this->byteLength = tmp24;
									_this->byteOffset = (int)0;
									_this->length = srcLength;
									tmp15 = _this;
								}
								this1 = tmp15;
							}
							else{
								bool tmp15 = (buffer != null());
								if ((tmp15)){
									::lime::utils::ArrayBufferView tmp16;
									{
										::lime::utils::ArrayBufferView tmp17 = ::lime::utils::ArrayBufferView_obj::__new((int)0,(int)1);
										::lime::utils::ArrayBufferView _this = tmp17;
										int in_byteOffset = byte_offset;
										bool tmp18 = (in_byteOffset < (int)0);
										if ((tmp18)){
											HX_STACK_DO_THROW(::lime::utils::TAError_obj::RangeError);
										}
										int tmp19 = hx::Mod(in_byteOffset,_this->bytesPerElement);
										bool tmp20 = (tmp19 != (int)0);
										if ((tmp20)){
											HX_STACK_DO_THROW(::lime::utils::TAError_obj::RangeError);
										}
										int bufferByteLength = buffer->length;
										int elementSize = _this->bytesPerElement;
										int newByteLength = bufferByteLength;
										bool tmp21 = (len == null());
										if ((tmp21)){
											int tmp22 = (bufferByteLength - in_byteOffset);
											newByteLength = tmp22;
											int tmp23 = hx::Mod(bufferByteLength,_this->bytesPerElement);
											bool tmp24 = (tmp23 != (int)0);
											if ((tmp24)){
												HX_STACK_DO_THROW(::lime::utils::TAError_obj::RangeError);
											}
											bool tmp25 = (newByteLength < (int)0);
											if ((tmp25)){
												HX_STACK_DO_THROW(::lime::utils::TAError_obj::RangeError);
											}
										}
										else{
											int tmp22 = (len * _this->bytesPerElement);
											newByteLength = tmp22;
											int tmp23 = (in_byteOffset + newByteLength);
											int newRange = tmp23;
											bool tmp24 = (newRange > bufferByteLength);
											if ((tmp24)){
												HX_STACK_DO_THROW(::lime::utils::TAError_obj::RangeError);
											}
										}
										_this->buffer = buffer;
										_this->byteOffset = in_byteOffset;
										_this->byteLength = newByteLength;
										Float tmp22 = (Float(newByteLength) / Float(_this->bytesPerElement));
										int tmp23 = ::Std_obj::_int(tmp22);
										_this->length = tmp23;
										tmp16 = _this;
									}
									this1 = tmp16;
								}
								else{
									HX_STACK_DO_THROW(HX_HCSTRING("Invalid constructor arguments for Int8Array","\x40","\x53","\xda","\x77"));
								}
							}
						}
					}
				}
				tmp7 = this1;
			}
			;break;
			case (int)2: {
				::haxe::io::Bytes tmp10 = this->buffer;
				::haxe::io::Bytes buffer = tmp10;
				::lime::utils::ArrayBufferView this1;
				bool tmp11 = false;
				if ((tmp11)){
					::lime::utils::ArrayBufferView tmp12 = ::lime::utils::ArrayBufferView_obj::__new(null(),(int)2);
					this1 = tmp12;
				}
				else{
					bool tmp12 = false;
					if ((tmp12)){
						::lime::utils::ArrayBufferView tmp13;
						{
							::lime::utils::ArrayBufferView tmp14 = ::lime::utils::ArrayBufferView_obj::__new((int)0,(int)2);
							::lime::utils::ArrayBufferView _this = tmp14;
							_this->byteOffset = (int)0;
							int tmp15 = hx::Throw(HX_CSTRING("Invalid field access on null object"));
							_this->length = tmp15;
							int tmp16 = (_this->length * _this->bytesPerElement);
							_this->byteLength = tmp16;
							::haxe::io::Bytes tmp17;
							{
								::haxe::io::Bytes this2;
								int tmp18 = _this->byteLength;
								::haxe::io::Bytes tmp19 = ::haxe::io::Bytes_obj::alloc(tmp18);
								this2 = tmp19;
								tmp17 = this2;
							}
							_this->buffer = tmp17;
							_this->copyFromArray(((Array< Float >)(null())),null());
							tmp13 = _this;
						}
						this1 = tmp13;
					}
					else{
						bool tmp13 = false;
						if ((tmp13)){
							::lime::utils::ArrayBufferView tmp14;
							{
								::lime::utils::ArrayBufferView tmp15 = ::lime::utils::ArrayBufferView_obj::__new((int)0,(int)2);
								::lime::utils::ArrayBufferView _this = tmp15;
								cpp::ArrayBase array = hx::Throw(HX_CSTRING("Invalid field access on null object"));
								_this->byteOffset = (int)0;
								_this->length = array->__Field(HX_HCSTRING("length","\xe6","\x94","\x07","\x9f"), hx::paccDynamic );
								int tmp16 = (_this->length * _this->bytesPerElement);
								_this->byteLength = tmp16;
								::haxe::io::Bytes tmp17;
								{
									::haxe::io::Bytes this2;
									int tmp18 = _this->byteLength;
									::haxe::io::Bytes tmp19 = ::haxe::io::Bytes_obj::alloc(tmp18);
									this2 = tmp19;
									tmp17 = this2;
								}
								_this->buffer = tmp17;
								_this->copyFromArray(((Array< Float >)(array)),null());
								tmp14 = _this;
							}
							this1 = tmp14;
						}
						else{
							bool tmp14 = false;
							if ((tmp14)){
								::lime::utils::ArrayBufferView tmp15;
								{
									::lime::utils::ArrayBufferView tmp16 = ::lime::utils::ArrayBufferView_obj::__new((int)0,(int)2);
									::lime::utils::ArrayBufferView _this = tmp16;
									::haxe::io::Bytes tmp17 = hx::Throw(HX_CSTRING("Invalid field access on null object"));
									::haxe::io::Bytes srcData = tmp17;
									int tmp18 = hx::Throw(HX_CSTRING("Invalid field access on null object"));
									int srcLength = tmp18;
									int tmp19 = hx::Throw(HX_CSTRING("Invalid field access on null object"));
									int srcByteOffset = tmp19;
									int tmp20 = hx::Throw(HX_CSTRING("Invalid field access on null object"));
									int srcElementSize = tmp20;
									int elementSize = _this->bytesPerElement;
									int tmp21 = hx::Throw(HX_CSTRING("Invalid field access on null object"));
									int tmp22 = _this->type;
									bool tmp23 = (tmp21 == tmp22);
									if ((tmp23)){
										int srcLength1 = srcData->length;
										int tmp24 = (srcLength1 - srcByteOffset);
										int cloneLength = tmp24;
										::haxe::io::Bytes tmp25;
										{
											::haxe::io::Bytes this2;
											int tmp26 = cloneLength;
											::haxe::io::Bytes tmp27 = ::haxe::io::Bytes_obj::alloc(tmp26);
											this2 = tmp27;
											tmp25 = this2;
										}
										_this->buffer = tmp25;
										::haxe::io::Bytes tmp26 = srcData;
										int tmp27 = srcByteOffset;
										int tmp28 = cloneLength;
										_this->buffer->blit((int)0,tmp26,tmp27,tmp28);
									}
									else{
										HX_STACK_DO_THROW(HX_HCSTRING("unimplemented","\x09","\x2f","\x74","\xb4"));
									}
									int tmp24 = (_this->bytesPerElement * srcLength);
									_this->byteLength = tmp24;
									_this->byteOffset = (int)0;
									_this->length = srcLength;
									tmp15 = _this;
								}
								this1 = tmp15;
							}
							else{
								bool tmp15 = (buffer != null());
								if ((tmp15)){
									::lime::utils::ArrayBufferView tmp16;
									{
										::lime::utils::ArrayBufferView tmp17 = ::lime::utils::ArrayBufferView_obj::__new((int)0,(int)2);
										::lime::utils::ArrayBufferView _this = tmp17;
										int in_byteOffset = byte_offset;
										bool tmp18 = (in_byteOffset < (int)0);
										if ((tmp18)){
											HX_STACK_DO_THROW(::lime::utils::TAError_obj::RangeError);
										}
										int tmp19 = hx::Mod(in_byteOffset,_this->bytesPerElement);
										bool tmp20 = (tmp19 != (int)0);
										if ((tmp20)){
											HX_STACK_DO_THROW(::lime::utils::TAError_obj::RangeError);
										}
										int bufferByteLength = buffer->length;
										int elementSize = _this->bytesPerElement;
										int newByteLength = bufferByteLength;
										bool tmp21 = (len == null());
										if ((tmp21)){
											int tmp22 = (bufferByteLength - in_byteOffset);
											newByteLength = tmp22;
											int tmp23 = hx::Mod(bufferByteLength,_this->bytesPerElement);
											bool tmp24 = (tmp23 != (int)0);
											if ((tmp24)){
												HX_STACK_DO_THROW(::lime::utils::TAError_obj::RangeError);
											}
											bool tmp25 = (newByteLength < (int)0);
											if ((tmp25)){
												HX_STACK_DO_THROW(::lime::utils::TAError_obj::RangeError);
											}
										}
										else{
											int tmp22 = (len * _this->bytesPerElement);
											newByteLength = tmp22;
											int tmp23 = (in_byteOffset + newByteLength);
											int newRange = tmp23;
											bool tmp24 = (newRange > bufferByteLength);
											if ((tmp24)){
												HX_STACK_DO_THROW(::lime::utils::TAError_obj::RangeError);
											}
										}
										_this->buffer = buffer;
										_this->byteOffset = in_byteOffset;
										_this->byteLength = newByteLength;
										Float tmp22 = (Float(newByteLength) / Float(_this->bytesPerElement));
										int tmp23 = ::Std_obj::_int(tmp22);
										_this->length = tmp23;
										tmp16 = _this;
									}
									this1 = tmp16;
								}
								else{
									HX_STACK_DO_THROW(HX_HCSTRING("Invalid constructor arguments for Int16Array","\x95","\xb2","\x95","\xa7"));
								}
							}
						}
					}
				}
				tmp7 = this1;
			}
			;break;
			case (int)3: {
				::haxe::io::Bytes tmp10 = this->buffer;
				::haxe::io::Bytes buffer = tmp10;
				::lime::utils::ArrayBufferView this1;
				bool tmp11 = false;
				if ((tmp11)){
					::lime::utils::ArrayBufferView tmp12 = ::lime::utils::ArrayBufferView_obj::__new(null(),(int)3);
					this1 = tmp12;
				}
				else{
					bool tmp12 = false;
					if ((tmp12)){
						::lime::utils::ArrayBufferView tmp13;
						{
							::lime::utils::ArrayBufferView tmp14 = ::lime::utils::ArrayBufferView_obj::__new((int)0,(int)3);
							::lime::utils::ArrayBufferView _this = tmp14;
							_this->byteOffset = (int)0;
							int tmp15 = hx::Throw(HX_CSTRING("Invalid field access on null object"));
							_this->length = tmp15;
							int tmp16 = (_this->length * _this->bytesPerElement);
							_this->byteLength = tmp16;
							::haxe::io::Bytes tmp17;
							{
								::haxe::io::Bytes this2;
								int tmp18 = _this->byteLength;
								::haxe::io::Bytes tmp19 = ::haxe::io::Bytes_obj::alloc(tmp18);
								this2 = tmp19;
								tmp17 = this2;
							}
							_this->buffer = tmp17;
							_this->copyFromArray(((Array< Float >)(null())),null());
							tmp13 = _this;
						}
						this1 = tmp13;
					}
					else{
						bool tmp13 = false;
						if ((tmp13)){
							::lime::utils::ArrayBufferView tmp14;
							{
								::lime::utils::ArrayBufferView tmp15 = ::lime::utils::ArrayBufferView_obj::__new((int)0,(int)3);
								::lime::utils::ArrayBufferView _this = tmp15;
								cpp::ArrayBase array = hx::Throw(HX_CSTRING("Invalid field access on null object"));
								_this->byteOffset = (int)0;
								_this->length = array->__Field(HX_HCSTRING("length","\xe6","\x94","\x07","\x9f"), hx::paccDynamic );
								int tmp16 = (_this->length * _this->bytesPerElement);
								_this->byteLength = tmp16;
								::haxe::io::Bytes tmp17;
								{
									::haxe::io::Bytes this2;
									int tmp18 = _this->byteLength;
									::haxe::io::Bytes tmp19 = ::haxe::io::Bytes_obj::alloc(tmp18);
									this2 = tmp19;
									tmp17 = this2;
								}
								_this->buffer = tmp17;
								_this->copyFromArray(((Array< Float >)(array)),null());
								tmp14 = _this;
							}
							this1 = tmp14;
						}
						else{
							bool tmp14 = false;
							if ((tmp14)){
								::lime::utils::ArrayBufferView tmp15;
								{
									::lime::utils::ArrayBufferView tmp16 = ::lime::utils::ArrayBufferView_obj::__new((int)0,(int)3);
									::lime::utils::ArrayBufferView _this = tmp16;
									::haxe::io::Bytes tmp17 = hx::Throw(HX_CSTRING("Invalid field access on null object"));
									::haxe::io::Bytes srcData = tmp17;
									int tmp18 = hx::Throw(HX_CSTRING("Invalid field access on null object"));
									int srcLength = tmp18;
									int tmp19 = hx::Throw(HX_CSTRING("Invalid field access on null object"));
									int srcByteOffset = tmp19;
									int tmp20 = hx::Throw(HX_CSTRING("Invalid field access on null object"));
									int srcElementSize = tmp20;
									int elementSize = _this->bytesPerElement;
									int tmp21 = hx::Throw(HX_CSTRING("Invalid field access on null object"));
									int tmp22 = _this->type;
									bool tmp23 = (tmp21 == tmp22);
									if ((tmp23)){
										int srcLength1 = srcData->length;
										int tmp24 = (srcLength1 - srcByteOffset);
										int cloneLength = tmp24;
										::haxe::io::Bytes tmp25;
										{
											::haxe::io::Bytes this2;
											int tmp26 = cloneLength;
											::haxe::io::Bytes tmp27 = ::haxe::io::Bytes_obj::alloc(tmp26);
											this2 = tmp27;
											tmp25 = this2;
										}
										_this->buffer = tmp25;
										::haxe::io::Bytes tmp26 = srcData;
										int tmp27 = srcByteOffset;
										int tmp28 = cloneLength;
										_this->buffer->blit((int)0,tmp26,tmp27,tmp28);
									}
									else{
										HX_STACK_DO_THROW(HX_HCSTRING("unimplemented","\x09","\x2f","\x74","\xb4"));
									}
									int tmp24 = (_this->bytesPerElement * srcLength);
									_this->byteLength = tmp24;
									_this->byteOffset = (int)0;
									_this->length = srcLength;
									tmp15 = _this;
								}
								this1 = tmp15;
							}
							else{
								bool tmp15 = (buffer != null());
								if ((tmp15)){
									::lime::utils::ArrayBufferView tmp16;
									{
										::lime::utils::ArrayBufferView tmp17 = ::lime::utils::ArrayBufferView_obj::__new((int)0,(int)3);
										::lime::utils::ArrayBufferView _this = tmp17;
										int in_byteOffset = byte_offset;
										bool tmp18 = (in_byteOffset < (int)0);
										if ((tmp18)){
											HX_STACK_DO_THROW(::lime::utils::TAError_obj::RangeError);
										}
										int tmp19 = hx::Mod(in_byteOffset,_this->bytesPerElement);
										bool tmp20 = (tmp19 != (int)0);
										if ((tmp20)){
											HX_STACK_DO_THROW(::lime::utils::TAError_obj::RangeError);
										}
										int bufferByteLength = buffer->length;
										int elementSize = _this->bytesPerElement;
										int newByteLength = bufferByteLength;
										bool tmp21 = (len == null());
										if ((tmp21)){
											int tmp22 = (bufferByteLength - in_byteOffset);
											newByteLength = tmp22;
											int tmp23 = hx::Mod(bufferByteLength,_this->bytesPerElement);
											bool tmp24 = (tmp23 != (int)0);
											if ((tmp24)){
												HX_STACK_DO_THROW(::lime::utils::TAError_obj::RangeError);
											}
											bool tmp25 = (newByteLength < (int)0);
											if ((tmp25)){
												HX_STACK_DO_THROW(::lime::utils::TAError_obj::RangeError);
											}
										}
										else{
											int tmp22 = (len * _this->bytesPerElement);
											newByteLength = tmp22;
											int tmp23 = (in_byteOffset + newByteLength);
											int newRange = tmp23;
											bool tmp24 = (newRange > bufferByteLength);
											if ((tmp24)){
												HX_STACK_DO_THROW(::lime::utils::TAError_obj::RangeError);
											}
										}
										_this->buffer = buffer;
										_this->byteOffset = in_byteOffset;
										_this->byteLength = newByteLength;
										Float tmp22 = (Float(newByteLength) / Float(_this->bytesPerElement));
										int tmp23 = ::Std_obj::_int(tmp22);
										_this->length = tmp23;
										tmp16 = _this;
									}
									this1 = tmp16;
								}
								else{
									HX_STACK_DO_THROW(HX_HCSTRING("Invalid constructor arguments for Int32Array","\x9b","\x2e","\x53","\x61"));
								}
							}
						}
					}
				}
				tmp7 = this1;
			}
			;break;
			case (int)4: {
				::haxe::io::Bytes tmp10 = this->buffer;
				::haxe::io::Bytes buffer = tmp10;
				::lime::utils::ArrayBufferView this1;
				bool tmp11 = false;
				if ((tmp11)){
					::lime::utils::ArrayBufferView tmp12 = ::lime::utils::ArrayBufferView_obj::__new(null(),(int)4);
					this1 = tmp12;
				}
				else{
					bool tmp12 = false;
					if ((tmp12)){
						::lime::utils::ArrayBufferView tmp13;
						{
							::lime::utils::ArrayBufferView tmp14 = ::lime::utils::ArrayBufferView_obj::__new((int)0,(int)4);
							::lime::utils::ArrayBufferView _this = tmp14;
							_this->byteOffset = (int)0;
							int tmp15 = hx::Throw(HX_CSTRING("Invalid field access on null object"));
							_this->length = tmp15;
							int tmp16 = (_this->length * _this->bytesPerElement);
							_this->byteLength = tmp16;
							::haxe::io::Bytes tmp17;
							{
								::haxe::io::Bytes this2;
								int tmp18 = _this->byteLength;
								::haxe::io::Bytes tmp19 = ::haxe::io::Bytes_obj::alloc(tmp18);
								this2 = tmp19;
								tmp17 = this2;
							}
							_this->buffer = tmp17;
							_this->copyFromArray(((Array< Float >)(null())),null());
							tmp13 = _this;
						}
						this1 = tmp13;
					}
					else{
						bool tmp13 = false;
						if ((tmp13)){
							::lime::utils::ArrayBufferView tmp14;
							{
								::lime::utils::ArrayBufferView tmp15 = ::lime::utils::ArrayBufferView_obj::__new((int)0,(int)4);
								::lime::utils::ArrayBufferView _this = tmp15;
								cpp::ArrayBase array = hx::Throw(HX_CSTRING("Invalid field access on null object"));
								_this->byteOffset = (int)0;
								_this->length = array->__Field(HX_HCSTRING("length","\xe6","\x94","\x07","\x9f"), hx::paccDynamic );
								int tmp16 = (_this->length * _this->bytesPerElement);
								_this->byteLength = tmp16;
								::haxe::io::Bytes tmp17;
								{
									::haxe::io::Bytes this2;
									int tmp18 = _this->byteLength;
									::haxe::io::Bytes tmp19 = ::haxe::io::Bytes_obj::alloc(tmp18);
									this2 = tmp19;
									tmp17 = this2;
								}
								_this->buffer = tmp17;
								_this->copyFromArray(((Array< Float >)(array)),null());
								tmp14 = _this;
							}
							this1 = tmp14;
						}
						else{
							bool tmp14 = false;
							if ((tmp14)){
								::lime::utils::ArrayBufferView tmp15;
								{
									::lime::utils::ArrayBufferView tmp16 = ::lime::utils::ArrayBufferView_obj::__new((int)0,(int)4);
									::lime::utils::ArrayBufferView _this = tmp16;
									::haxe::io::Bytes tmp17 = hx::Throw(HX_CSTRING("Invalid field access on null object"));
									::haxe::io::Bytes srcData = tmp17;
									int tmp18 = hx::Throw(HX_CSTRING("Invalid field access on null object"));
									int srcLength = tmp18;
									int tmp19 = hx::Throw(HX_CSTRING("Invalid field access on null object"));
									int srcByteOffset = tmp19;
									int tmp20 = hx::Throw(HX_CSTRING("Invalid field access on null object"));
									int srcElementSize = tmp20;
									int elementSize = _this->bytesPerElement;
									int tmp21 = hx::Throw(HX_CSTRING("Invalid field access on null object"));
									int tmp22 = _this->type;
									bool tmp23 = (tmp21 == tmp22);
									if ((tmp23)){
										int srcLength1 = srcData->length;
										int tmp24 = (srcLength1 - srcByteOffset);
										int cloneLength = tmp24;
										::haxe::io::Bytes tmp25;
										{
											::haxe::io::Bytes this2;
											int tmp26 = cloneLength;
											::haxe::io::Bytes tmp27 = ::haxe::io::Bytes_obj::alloc(tmp26);
											this2 = tmp27;
											tmp25 = this2;
										}
										_this->buffer = tmp25;
										::haxe::io::Bytes tmp26 = srcData;
										int tmp27 = srcByteOffset;
										int tmp28 = cloneLength;
										_this->buffer->blit((int)0,tmp26,tmp27,tmp28);
									}
									else{
										HX_STACK_DO_THROW(HX_HCSTRING("unimplemented","\x09","\x2f","\x74","\xb4"));
									}
									int tmp24 = (_this->bytesPerElement * srcLength);
									_this->byteLength = tmp24;
									_this->byteOffset = (int)0;
									_this->length = srcLength;
									tmp15 = _this;
								}
								this1 = tmp15;
							}
							else{
								bool tmp15 = (buffer != null());
								if ((tmp15)){
									::lime::utils::ArrayBufferView tmp16;
									{
										::lime::utils::ArrayBufferView tmp17 = ::lime::utils::ArrayBufferView_obj::__new((int)0,(int)4);
										::lime::utils::ArrayBufferView _this = tmp17;
										int in_byteOffset = byte_offset;
										bool tmp18 = (in_byteOffset < (int)0);
										if ((tmp18)){
											HX_STACK_DO_THROW(::lime::utils::TAError_obj::RangeError);
										}
										int tmp19 = hx::Mod(in_byteOffset,_this->bytesPerElement);
										bool tmp20 = (tmp19 != (int)0);
										if ((tmp20)){
											HX_STACK_DO_THROW(::lime::utils::TAError_obj::RangeError);
										}
										int bufferByteLength = buffer->length;
										int elementSize = _this->bytesPerElement;
										int newByteLength = bufferByteLength;
										bool tmp21 = (len == null());
										if ((tmp21)){
											int tmp22 = (bufferByteLength - in_byteOffset);
											newByteLength = tmp22;
											int tmp23 = hx::Mod(bufferByteLength,_this->bytesPerElement);
											bool tmp24 = (tmp23 != (int)0);
											if ((tmp24)){
												HX_STACK_DO_THROW(::lime::utils::TAError_obj::RangeError);
											}
											bool tmp25 = (newByteLength < (int)0);
											if ((tmp25)){
												HX_STACK_DO_THROW(::lime::utils::TAError_obj::RangeError);
											}
										}
										else{
											int tmp22 = (len * _this->bytesPerElement);
											newByteLength = tmp22;
											int tmp23 = (in_byteOffset + newByteLength);
											int newRange = tmp23;
											bool tmp24 = (newRange > bufferByteLength);
											if ((tmp24)){
												HX_STACK_DO_THROW(::lime::utils::TAError_obj::RangeError);
											}
										}
										_this->buffer = buffer;
										_this->byteOffset = in_byteOffset;
										_this->byteLength = newByteLength;
										Float tmp22 = (Float(newByteLength) / Float(_this->bytesPerElement));
										int tmp23 = ::Std_obj::_int(tmp22);
										_this->length = tmp23;
										tmp16 = _this;
									}
									this1 = tmp16;
								}
								else{
									HX_STACK_DO_THROW(HX_HCSTRING("Invalid constructor arguments for UInt8Array","\x6b","\x44","\xd5","\x85"));
								}
							}
						}
					}
				}
				tmp7 = this1;
			}
			;break;
			case (int)5: {
				::haxe::io::Bytes tmp10 = this->buffer;
				::haxe::io::Bytes buffer = tmp10;
				::lime::utils::ArrayBufferView this1;
				bool tmp11 = false;
				if ((tmp11)){
					::lime::utils::ArrayBufferView tmp12 = ::lime::utils::ArrayBufferView_obj::__new(null(),(int)5);
					this1 = tmp12;
				}
				else{
					bool tmp12 = false;
					if ((tmp12)){
						::lime::utils::ArrayBufferView tmp13;
						{
							::lime::utils::ArrayBufferView tmp14 = ::lime::utils::ArrayBufferView_obj::__new((int)0,(int)5);
							::lime::utils::ArrayBufferView _this = tmp14;
							_this->byteOffset = (int)0;
							int tmp15 = hx::Throw(HX_CSTRING("Invalid field access on null object"));
							_this->length = tmp15;
							int tmp16 = (_this->length * _this->bytesPerElement);
							_this->byteLength = tmp16;
							::haxe::io::Bytes tmp17;
							{
								::haxe::io::Bytes this2;
								int tmp18 = _this->byteLength;
								::haxe::io::Bytes tmp19 = ::haxe::io::Bytes_obj::alloc(tmp18);
								this2 = tmp19;
								tmp17 = this2;
							}
							_this->buffer = tmp17;
							_this->copyFromArray(((Array< Float >)(null())),null());
							tmp13 = _this;
						}
						this1 = tmp13;
					}
					else{
						bool tmp13 = false;
						if ((tmp13)){
							::lime::utils::ArrayBufferView tmp14;
							{
								::lime::utils::ArrayBufferView tmp15 = ::lime::utils::ArrayBufferView_obj::__new((int)0,(int)5);
								::lime::utils::ArrayBufferView _this = tmp15;
								cpp::ArrayBase array = hx::Throw(HX_CSTRING("Invalid field access on null object"));
								_this->byteOffset = (int)0;
								_this->length = array->__Field(HX_HCSTRING("length","\xe6","\x94","\x07","\x9f"), hx::paccDynamic );
								int tmp16 = (_this->length * _this->bytesPerElement);
								_this->byteLength = tmp16;
								::haxe::io::Bytes tmp17;
								{
									::haxe::io::Bytes this2;
									int tmp18 = _this->byteLength;
									::haxe::io::Bytes tmp19 = ::haxe::io::Bytes_obj::alloc(tmp18);
									this2 = tmp19;
									tmp17 = this2;
								}
								_this->buffer = tmp17;
								_this->copyFromArray(((Array< Float >)(array)),null());
								tmp14 = _this;
							}
							this1 = tmp14;
						}
						else{
							bool tmp14 = false;
							if ((tmp14)){
								::lime::utils::ArrayBufferView tmp15;
								{
									::lime::utils::ArrayBufferView tmp16 = ::lime::utils::ArrayBufferView_obj::__new((int)0,(int)5);
									::lime::utils::ArrayBufferView _this = tmp16;
									::haxe::io::Bytes tmp17 = hx::Throw(HX_CSTRING("Invalid field access on null object"));
									::haxe::io::Bytes srcData = tmp17;
									int tmp18 = hx::Throw(HX_CSTRING("Invalid field access on null object"));
									int srcLength = tmp18;
									int tmp19 = hx::Throw(HX_CSTRING("Invalid field access on null object"));
									int srcByteOffset = tmp19;
									int tmp20 = hx::Throw(HX_CSTRING("Invalid field access on null object"));
									int srcElementSize = tmp20;
									int elementSize = _this->bytesPerElement;
									int tmp21 = hx::Throw(HX_CSTRING("Invalid field access on null object"));
									int tmp22 = _this->type;
									bool tmp23 = (tmp21 == tmp22);
									if ((tmp23)){
										int srcLength1 = srcData->length;
										int tmp24 = (srcLength1 - srcByteOffset);
										int cloneLength = tmp24;
										::haxe::io::Bytes tmp25;
										{
											::haxe::io::Bytes this2;
											int tmp26 = cloneLength;
											::haxe::io::Bytes tmp27 = ::haxe::io::Bytes_obj::alloc(tmp26);
											this2 = tmp27;
											tmp25 = this2;
										}
										_this->buffer = tmp25;
										::haxe::io::Bytes tmp26 = srcData;
										int tmp27 = srcByteOffset;
										int tmp28 = cloneLength;
										_this->buffer->blit((int)0,tmp26,tmp27,tmp28);
									}
									else{
										HX_STACK_DO_THROW(HX_HCSTRING("unimplemented","\x09","\x2f","\x74","\xb4"));
									}
									int tmp24 = (_this->bytesPerElement * srcLength);
									_this->byteLength = tmp24;
									_this->byteOffset = (int)0;
									_this->length = srcLength;
									tmp15 = _this;
								}
								this1 = tmp15;
							}
							else{
								bool tmp15 = (buffer != null());
								if ((tmp15)){
									::lime::utils::ArrayBufferView tmp16;
									{
										::lime::utils::ArrayBufferView tmp17 = ::lime::utils::ArrayBufferView_obj::__new((int)0,(int)5);
										::lime::utils::ArrayBufferView _this = tmp17;
										int in_byteOffset = byte_offset;
										bool tmp18 = (in_byteOffset < (int)0);
										if ((tmp18)){
											HX_STACK_DO_THROW(::lime::utils::TAError_obj::RangeError);
										}
										int tmp19 = hx::Mod(in_byteOffset,_this->bytesPerElement);
										bool tmp20 = (tmp19 != (int)0);
										if ((tmp20)){
											HX_STACK_DO_THROW(::lime::utils::TAError_obj::RangeError);
										}
										int bufferByteLength = buffer->length;
										int elementSize = _this->bytesPerElement;
										int newByteLength = bufferByteLength;
										bool tmp21 = (len == null());
										if ((tmp21)){
											int tmp22 = (bufferByteLength - in_byteOffset);
											newByteLength = tmp22;
											int tmp23 = hx::Mod(bufferByteLength,_this->bytesPerElement);
											bool tmp24 = (tmp23 != (int)0);
											if ((tmp24)){
												HX_STACK_DO_THROW(::lime::utils::TAError_obj::RangeError);
											}
											bool tmp25 = (newByteLength < (int)0);
											if ((tmp25)){
												HX_STACK_DO_THROW(::lime::utils::TAError_obj::RangeError);
											}
										}
										else{
											int tmp22 = (len * _this->bytesPerElement);
											newByteLength = tmp22;
											int tmp23 = (in_byteOffset + newByteLength);
											int newRange = tmp23;
											bool tmp24 = (newRange > bufferByteLength);
											if ((tmp24)){
												HX_STACK_DO_THROW(::lime::utils::TAError_obj::RangeError);
											}
										}
										_this->buffer = buffer;
										_this->byteOffset = in_byteOffset;
										_this->byteLength = newByteLength;
										Float tmp22 = (Float(newByteLength) / Float(_this->bytesPerElement));
										int tmp23 = ::Std_obj::_int(tmp22);
										_this->length = tmp23;
										tmp16 = _this;
									}
									this1 = tmp16;
								}
								else{
									HX_STACK_DO_THROW(HX_HCSTRING("Invalid constructor arguments for UInt8ClampedArray","\x8d","\x06","\x77","\x13"));
								}
							}
						}
					}
				}
				tmp7 = this1;
			}
			;break;
			case (int)6: {
				::haxe::io::Bytes tmp10 = this->buffer;
				::haxe::io::Bytes buffer = tmp10;
				::lime::utils::ArrayBufferView this1;
				bool tmp11 = false;
				if ((tmp11)){
					::lime::utils::ArrayBufferView tmp12 = ::lime::utils::ArrayBufferView_obj::__new(null(),(int)6);
					this1 = tmp12;
				}
				else{
					bool tmp12 = false;
					if ((tmp12)){
						::lime::utils::ArrayBufferView tmp13;
						{
							::lime::utils::ArrayBufferView tmp14 = ::lime::utils::ArrayBufferView_obj::__new((int)0,(int)6);
							::lime::utils::ArrayBufferView _this = tmp14;
							_this->byteOffset = (int)0;
							int tmp15 = hx::Throw(HX_CSTRING("Invalid field access on null object"));
							_this->length = tmp15;
							int tmp16 = (_this->length * _this->bytesPerElement);
							_this->byteLength = tmp16;
							::haxe::io::Bytes tmp17;
							{
								::haxe::io::Bytes this2;
								int tmp18 = _this->byteLength;
								::haxe::io::Bytes tmp19 = ::haxe::io::Bytes_obj::alloc(tmp18);
								this2 = tmp19;
								tmp17 = this2;
							}
							_this->buffer = tmp17;
							_this->copyFromArray(((Array< Float >)(null())),null());
							tmp13 = _this;
						}
						this1 = tmp13;
					}
					else{
						bool tmp13 = false;
						if ((tmp13)){
							::lime::utils::ArrayBufferView tmp14;
							{
								::lime::utils::ArrayBufferView tmp15 = ::lime::utils::ArrayBufferView_obj::__new((int)0,(int)6);
								::lime::utils::ArrayBufferView _this = tmp15;
								cpp::ArrayBase array = hx::Throw(HX_CSTRING("Invalid field access on null object"));
								_this->byteOffset = (int)0;
								_this->length = array->__Field(HX_HCSTRING("length","\xe6","\x94","\x07","\x9f"), hx::paccDynamic );
								int tmp16 = (_this->length * _this->bytesPerElement);
								_this->byteLength = tmp16;
								::haxe::io::Bytes tmp17;
								{
									::haxe::io::Bytes this2;
									int tmp18 = _this->byteLength;
									::haxe::io::Bytes tmp19 = ::haxe::io::Bytes_obj::alloc(tmp18);
									this2 = tmp19;
									tmp17 = this2;
								}
								_this->buffer = tmp17;
								_this->copyFromArray(((Array< Float >)(array)),null());
								tmp14 = _this;
							}
							this1 = tmp14;
						}
						else{
							bool tmp14 = false;
							if ((tmp14)){
								::lime::utils::ArrayBufferView tmp15;
								{
									::lime::utils::ArrayBufferView tmp16 = ::lime::utils::ArrayBufferView_obj::__new((int)0,(int)6);
									::lime::utils::ArrayBufferView _this = tmp16;
									::haxe::io::Bytes tmp17 = hx::Throw(HX_CSTRING("Invalid field access on null object"));
									::haxe::io::Bytes srcData = tmp17;
									int tmp18 = hx::Throw(HX_CSTRING("Invalid field access on null object"));
									int srcLength = tmp18;
									int tmp19 = hx::Throw(HX_CSTRING("Invalid field access on null object"));
									int srcByteOffset = tmp19;
									int tmp20 = hx::Throw(HX_CSTRING("Invalid field access on null object"));
									int srcElementSize = tmp20;
									int elementSize = _this->bytesPerElement;
									int tmp21 = hx::Throw(HX_CSTRING("Invalid field access on null object"));
									int tmp22 = _this->type;
									bool tmp23 = (tmp21 == tmp22);
									if ((tmp23)){
										int srcLength1 = srcData->length;
										int tmp24 = (srcLength1 - srcByteOffset);
										int cloneLength = tmp24;
										::haxe::io::Bytes tmp25;
										{
											::haxe::io::Bytes this2;
											int tmp26 = cloneLength;
											::haxe::io::Bytes tmp27 = ::haxe::io::Bytes_obj::alloc(tmp26);
											this2 = tmp27;
											tmp25 = this2;
										}
										_this->buffer = tmp25;
										::haxe::io::Bytes tmp26 = srcData;
										int tmp27 = srcByteOffset;
										int tmp28 = cloneLength;
										_this->buffer->blit((int)0,tmp26,tmp27,tmp28);
									}
									else{
										HX_STACK_DO_THROW(HX_HCSTRING("unimplemented","\x09","\x2f","\x74","\xb4"));
									}
									int tmp24 = (_this->bytesPerElement * srcLength);
									_this->byteLength = tmp24;
									_this->byteOffset = (int)0;
									_this->length = srcLength;
									tmp15 = _this;
								}
								this1 = tmp15;
							}
							else{
								bool tmp15 = (buffer != null());
								if ((tmp15)){
									::lime::utils::ArrayBufferView tmp16;
									{
										::lime::utils::ArrayBufferView tmp17 = ::lime::utils::ArrayBufferView_obj::__new((int)0,(int)6);
										::lime::utils::ArrayBufferView _this = tmp17;
										int in_byteOffset = byte_offset;
										bool tmp18 = (in_byteOffset < (int)0);
										if ((tmp18)){
											HX_STACK_DO_THROW(::lime::utils::TAError_obj::RangeError);
										}
										int tmp19 = hx::Mod(in_byteOffset,_this->bytesPerElement);
										bool tmp20 = (tmp19 != (int)0);
										if ((tmp20)){
											HX_STACK_DO_THROW(::lime::utils::TAError_obj::RangeError);
										}
										int bufferByteLength = buffer->length;
										int elementSize = _this->bytesPerElement;
										int newByteLength = bufferByteLength;
										bool tmp21 = (len == null());
										if ((tmp21)){
											int tmp22 = (bufferByteLength - in_byteOffset);
											newByteLength = tmp22;
											int tmp23 = hx::Mod(bufferByteLength,_this->bytesPerElement);
											bool tmp24 = (tmp23 != (int)0);
											if ((tmp24)){
												HX_STACK_DO_THROW(::lime::utils::TAError_obj::RangeError);
											}
											bool tmp25 = (newByteLength < (int)0);
											if ((tmp25)){
												HX_STACK_DO_THROW(::lime::utils::TAError_obj::RangeError);
											}
										}
										else{
											int tmp22 = (len * _this->bytesPerElement);
											newByteLength = tmp22;
											int tmp23 = (in_byteOffset + newByteLength);
											int newRange = tmp23;
											bool tmp24 = (newRange > bufferByteLength);
											if ((tmp24)){
												HX_STACK_DO_THROW(::lime::utils::TAError_obj::RangeError);
											}
										}
										_this->buffer = buffer;
										_this->byteOffset = in_byteOffset;
										_this->byteLength = newByteLength;
										Float tmp22 = (Float(newByteLength) / Float(_this->bytesPerElement));
										int tmp23 = ::Std_obj::_int(tmp22);
										_this->length = tmp23;
										tmp16 = _this;
									}
									this1 = tmp16;
								}
								else{
									HX_STACK_DO_THROW(HX_HCSTRING("Invalid constructor arguments for UInt16Array","\x0a","\xc7","\x2d","\xd5"));
								}
							}
						}
					}
				}
				tmp7 = this1;
			}
			;break;
			case (int)7: {
				::haxe::io::Bytes tmp10 = this->buffer;
				::haxe::io::Bytes buffer = tmp10;
				::lime::utils::ArrayBufferView this1;
				bool tmp11 = false;
				if ((tmp11)){
					::lime::utils::ArrayBufferView tmp12 = ::lime::utils::ArrayBufferView_obj::__new(null(),(int)7);
					this1 = tmp12;
				}
				else{
					bool tmp12 = false;
					if ((tmp12)){
						::lime::utils::ArrayBufferView tmp13;
						{
							::lime::utils::ArrayBufferView tmp14 = ::lime::utils::ArrayBufferView_obj::__new((int)0,(int)7);
							::lime::utils::ArrayBufferView _this = tmp14;
							_this->byteOffset = (int)0;
							int tmp15 = hx::Throw(HX_CSTRING("Invalid field access on null object"));
							_this->length = tmp15;
							int tmp16 = (_this->length * _this->bytesPerElement);
							_this->byteLength = tmp16;
							::haxe::io::Bytes tmp17;
							{
								::haxe::io::Bytes this2;
								int tmp18 = _this->byteLength;
								::haxe::io::Bytes tmp19 = ::haxe::io::Bytes_obj::alloc(tmp18);
								this2 = tmp19;
								tmp17 = this2;
							}
							_this->buffer = tmp17;
							_this->copyFromArray(((Array< Float >)(null())),null());
							tmp13 = _this;
						}
						this1 = tmp13;
					}
					else{
						bool tmp13 = false;
						if ((tmp13)){
							::lime::utils::ArrayBufferView tmp14;
							{
								::lime::utils::ArrayBufferView tmp15 = ::lime::utils::ArrayBufferView_obj::__new((int)0,(int)7);
								::lime::utils::ArrayBufferView _this = tmp15;
								cpp::ArrayBase array = hx::Throw(HX_CSTRING("Invalid field access on null object"));
								_this->byteOffset = (int)0;
								_this->length = array->__Field(HX_HCSTRING("length","\xe6","\x94","\x07","\x9f"), hx::paccDynamic );
								int tmp16 = (_this->length * _this->bytesPerElement);
								_this->byteLength = tmp16;
								::haxe::io::Bytes tmp17;
								{
									::haxe::io::Bytes this2;
									int tmp18 = _this->byteLength;
									::haxe::io::Bytes tmp19 = ::haxe::io::Bytes_obj::alloc(tmp18);
									this2 = tmp19;
									tmp17 = this2;
								}
								_this->buffer = tmp17;
								_this->copyFromArray(((Array< Float >)(array)),null());
								tmp14 = _this;
							}
							this1 = tmp14;
						}
						else{
							bool tmp14 = false;
							if ((tmp14)){
								::lime::utils::ArrayBufferView tmp15;
								{
									::lime::utils::ArrayBufferView tmp16 = ::lime::utils::ArrayBufferView_obj::__new((int)0,(int)7);
									::lime::utils::ArrayBufferView _this = tmp16;
									::haxe::io::Bytes tmp17 = hx::Throw(HX_CSTRING("Invalid field access on null object"));
									::haxe::io::Bytes srcData = tmp17;
									int tmp18 = hx::Throw(HX_CSTRING("Invalid field access on null object"));
									int srcLength = tmp18;
									int tmp19 = hx::Throw(HX_CSTRING("Invalid field access on null object"));
									int srcByteOffset = tmp19;
									int tmp20 = hx::Throw(HX_CSTRING("Invalid field access on null object"));
									int srcElementSize = tmp20;
									int elementSize = _this->bytesPerElement;
									int tmp21 = hx::Throw(HX_CSTRING("Invalid field access on null object"));
									int tmp22 = _this->type;
									bool tmp23 = (tmp21 == tmp22);
									if ((tmp23)){
										int srcLength1 = srcData->length;
										int tmp24 = (srcLength1 - srcByteOffset);
										int cloneLength = tmp24;
										::haxe::io::Bytes tmp25;
										{
											::haxe::io::Bytes this2;
											int tmp26 = cloneLength;
											::haxe::io::Bytes tmp27 = ::haxe::io::Bytes_obj::alloc(tmp26);
											this2 = tmp27;
											tmp25 = this2;
										}
										_this->buffer = tmp25;
										::haxe::io::Bytes tmp26 = srcData;
										int tmp27 = srcByteOffset;
										int tmp28 = cloneLength;
										_this->buffer->blit((int)0,tmp26,tmp27,tmp28);
									}
									else{
										HX_STACK_DO_THROW(HX_HCSTRING("unimplemented","\x09","\x2f","\x74","\xb4"));
									}
									int tmp24 = (_this->bytesPerElement * srcLength);
									_this->byteLength = tmp24;
									_this->byteOffset = (int)0;
									_this->length = srcLength;
									tmp15 = _this;
								}
								this1 = tmp15;
							}
							else{
								bool tmp15 = (buffer != null());
								if ((tmp15)){
									::lime::utils::ArrayBufferView tmp16;
									{
										::lime::utils::ArrayBufferView tmp17 = ::lime::utils::ArrayBufferView_obj::__new((int)0,(int)7);
										::lime::utils::ArrayBufferView _this = tmp17;
										int in_byteOffset = byte_offset;
										bool tmp18 = (in_byteOffset < (int)0);
										if ((tmp18)){
											HX_STACK_DO_THROW(::lime::utils::TAError_obj::RangeError);
										}
										int tmp19 = hx::Mod(in_byteOffset,_this->bytesPerElement);
										bool tmp20 = (tmp19 != (int)0);
										if ((tmp20)){
											HX_STACK_DO_THROW(::lime::utils::TAError_obj::RangeError);
										}
										int bufferByteLength = buffer->length;
										int elementSize = _this->bytesPerElement;
										int newByteLength = bufferByteLength;
										bool tmp21 = (len == null());
										if ((tmp21)){
											int tmp22 = (bufferByteLength - in_byteOffset);
											newByteLength = tmp22;
											int tmp23 = hx::Mod(bufferByteLength,_this->bytesPerElement);
											bool tmp24 = (tmp23 != (int)0);
											if ((tmp24)){
												HX_STACK_DO_THROW(::lime::utils::TAError_obj::RangeError);
											}
											bool tmp25 = (newByteLength < (int)0);
											if ((tmp25)){
												HX_STACK_DO_THROW(::lime::utils::TAError_obj::RangeError);
											}
										}
										else{
											int tmp22 = (len * _this->bytesPerElement);
											newByteLength = tmp22;
											int tmp23 = (in_byteOffset + newByteLength);
											int newRange = tmp23;
											bool tmp24 = (newRange > bufferByteLength);
											if ((tmp24)){
												HX_STACK_DO_THROW(::lime::utils::TAError_obj::RangeError);
											}
										}
										_this->buffer = buffer;
										_this->byteOffset = in_byteOffset;
										_this->byteLength = newByteLength;
										Float tmp22 = (Float(newByteLength) / Float(_this->bytesPerElement));
										int tmp23 = ::Std_obj::_int(tmp22);
										_this->length = tmp23;
										tmp16 = _this;
									}
									this1 = tmp16;
								}
								else{
									HX_STACK_DO_THROW(HX_HCSTRING("Invalid constructor arguments for UInt32Array","\x10","\x43","\xeb","\x8e"));
								}
							}
						}
					}
				}
				tmp7 = this1;
			}
			;break;
			case (int)8: {
				::haxe::io::Bytes tmp10 = this->buffer;
				::haxe::io::Bytes buffer = tmp10;
				::lime::utils::ArrayBufferView this1;
				bool tmp11 = false;
				if ((tmp11)){
					::lime::utils::ArrayBufferView tmp12 = ::lime::utils::ArrayBufferView_obj::__new(null(),(int)8);
					this1 = tmp12;
				}
				else{
					bool tmp12 = false;
					if ((tmp12)){
						::lime::utils::ArrayBufferView tmp13;
						{
							::lime::utils::ArrayBufferView tmp14 = ::lime::utils::ArrayBufferView_obj::__new((int)0,(int)8);
							::lime::utils::ArrayBufferView _this = tmp14;
							_this->byteOffset = (int)0;
							int tmp15 = hx::Throw(HX_CSTRING("Invalid field access on null object"));
							_this->length = tmp15;
							int tmp16 = (_this->length * _this->bytesPerElement);
							_this->byteLength = tmp16;
							::haxe::io::Bytes tmp17;
							{
								::haxe::io::Bytes this2;
								int tmp18 = _this->byteLength;
								::haxe::io::Bytes tmp19 = ::haxe::io::Bytes_obj::alloc(tmp18);
								this2 = tmp19;
								tmp17 = this2;
							}
							_this->buffer = tmp17;
							_this->copyFromArray(((Array< Float >)(null())),null());
							tmp13 = _this;
						}
						this1 = tmp13;
					}
					else{
						bool tmp13 = false;
						if ((tmp13)){
							::lime::utils::ArrayBufferView tmp14;
							{
								::lime::utils::ArrayBufferView tmp15 = ::lime::utils::ArrayBufferView_obj::__new((int)0,(int)8);
								::lime::utils::ArrayBufferView _this = tmp15;
								cpp::ArrayBase array = hx::Throw(HX_CSTRING("Invalid field access on null object"));
								_this->byteOffset = (int)0;
								_this->length = array->__Field(HX_HCSTRING("length","\xe6","\x94","\x07","\x9f"), hx::paccDynamic );
								int tmp16 = (_this->length * _this->bytesPerElement);
								_this->byteLength = tmp16;
								::haxe::io::Bytes tmp17;
								{
									::haxe::io::Bytes this2;
									int tmp18 = _this->byteLength;
									::haxe::io::Bytes tmp19 = ::haxe::io::Bytes_obj::alloc(tmp18);
									this2 = tmp19;
									tmp17 = this2;
								}
								_this->buffer = tmp17;
								_this->copyFromArray(((Array< Float >)(array)),null());
								tmp14 = _this;
							}
							this1 = tmp14;
						}
						else{
							bool tmp14 = false;
							if ((tmp14)){
								::lime::utils::ArrayBufferView tmp15;
								{
									::lime::utils::ArrayBufferView tmp16 = ::lime::utils::ArrayBufferView_obj::__new((int)0,(int)8);
									::lime::utils::ArrayBufferView _this = tmp16;
									::haxe::io::Bytes tmp17 = hx::Throw(HX_CSTRING("Invalid field access on null object"));
									::haxe::io::Bytes srcData = tmp17;
									int tmp18 = hx::Throw(HX_CSTRING("Invalid field access on null object"));
									int srcLength = tmp18;
									int tmp19 = hx::Throw(HX_CSTRING("Invalid field access on null object"));
									int srcByteOffset = tmp19;
									int tmp20 = hx::Throw(HX_CSTRING("Invalid field access on null object"));
									int srcElementSize = tmp20;
									int elementSize = _this->bytesPerElement;
									int tmp21 = hx::Throw(HX_CSTRING("Invalid field access on null object"));
									int tmp22 = _this->type;
									bool tmp23 = (tmp21 == tmp22);
									if ((tmp23)){
										int srcLength1 = srcData->length;
										int tmp24 = (srcLength1 - srcByteOffset);
										int cloneLength = tmp24;
										::haxe::io::Bytes tmp25;
										{
											::haxe::io::Bytes this2;
											int tmp26 = cloneLength;
											::haxe::io::Bytes tmp27 = ::haxe::io::Bytes_obj::alloc(tmp26);
											this2 = tmp27;
											tmp25 = this2;
										}
										_this->buffer = tmp25;
										::haxe::io::Bytes tmp26 = srcData;
										int tmp27 = srcByteOffset;
										int tmp28 = cloneLength;
										_this->buffer->blit((int)0,tmp26,tmp27,tmp28);
									}
									else{
										HX_STACK_DO_THROW(HX_HCSTRING("unimplemented","\x09","\x2f","\x74","\xb4"));
									}
									int tmp24 = (_this->bytesPerElement * srcLength);
									_this->byteLength = tmp24;
									_this->byteOffset = (int)0;
									_this->length = srcLength;
									tmp15 = _this;
								}
								this1 = tmp15;
							}
							else{
								bool tmp15 = (buffer != null());
								if ((tmp15)){
									::lime::utils::ArrayBufferView tmp16;
									{
										::lime::utils::ArrayBufferView tmp17 = ::lime::utils::ArrayBufferView_obj::__new((int)0,(int)8);
										::lime::utils::ArrayBufferView _this = tmp17;
										int in_byteOffset = byte_offset;
										bool tmp18 = (in_byteOffset < (int)0);
										if ((tmp18)){
											HX_STACK_DO_THROW(::lime::utils::TAError_obj::RangeError);
										}
										int tmp19 = hx::Mod(in_byteOffset,_this->bytesPerElement);
										bool tmp20 = (tmp19 != (int)0);
										if ((tmp20)){
											HX_STACK_DO_THROW(::lime::utils::TAError_obj::RangeError);
										}
										int bufferByteLength = buffer->length;
										int elementSize = _this->bytesPerElement;
										int newByteLength = bufferByteLength;
										bool tmp21 = (len == null());
										if ((tmp21)){
											int tmp22 = (bufferByteLength - in_byteOffset);
											newByteLength = tmp22;
											int tmp23 = hx::Mod(bufferByteLength,_this->bytesPerElement);
											bool tmp24 = (tmp23 != (int)0);
											if ((tmp24)){
												HX_STACK_DO_THROW(::lime::utils::TAError_obj::RangeError);
											}
											bool tmp25 = (newByteLength < (int)0);
											if ((tmp25)){
												HX_STACK_DO_THROW(::lime::utils::TAError_obj::RangeError);
											}
										}
										else{
											int tmp22 = (len * _this->bytesPerElement);
											newByteLength = tmp22;
											int tmp23 = (in_byteOffset + newByteLength);
											int newRange = tmp23;
											bool tmp24 = (newRange > bufferByteLength);
											if ((tmp24)){
												HX_STACK_DO_THROW(::lime::utils::TAError_obj::RangeError);
											}
										}
										_this->buffer = buffer;
										_this->byteOffset = in_byteOffset;
										_this->byteLength = newByteLength;
										Float tmp22 = (Float(newByteLength) / Float(_this->bytesPerElement));
										int tmp23 = ::Std_obj::_int(tmp22);
										_this->length = tmp23;
										tmp16 = _this;
									}
									this1 = tmp16;
								}
								else{
									HX_STACK_DO_THROW(HX_HCSTRING("Invalid constructor arguments for Float32Array","\x8e","\xc1","\xf4","\xd4"));
								}
							}
						}
					}
				}
				tmp7 = this1;
			}
			;break;
			case (int)9: {
				::haxe::io::Bytes tmp10 = this->buffer;
				::haxe::io::Bytes buffer = tmp10;
				::lime::utils::ArrayBufferView this1;
				bool tmp11 = false;
				if ((tmp11)){
					::lime::utils::ArrayBufferView tmp12 = ::lime::utils::ArrayBufferView_obj::__new(null(),(int)9);
					this1 = tmp12;
				}
				else{
					bool tmp12 = false;
					if ((tmp12)){
						::lime::utils::ArrayBufferView tmp13;
						{
							::lime::utils::ArrayBufferView tmp14 = ::lime::utils::ArrayBufferView_obj::__new((int)0,(int)9);
							::lime::utils::ArrayBufferView _this = tmp14;
							_this->byteOffset = (int)0;
							int tmp15 = hx::Throw(HX_CSTRING("Invalid field access on null object"));
							_this->length = tmp15;
							int tmp16 = (_this->length * _this->bytesPerElement);
							_this->byteLength = tmp16;
							::haxe::io::Bytes tmp17;
							{
								::haxe::io::Bytes this2;
								int tmp18 = _this->byteLength;
								::haxe::io::Bytes tmp19 = ::haxe::io::Bytes_obj::alloc(tmp18);
								this2 = tmp19;
								tmp17 = this2;
							}
							_this->buffer = tmp17;
							_this->copyFromArray(((Array< Float >)(null())),null());
							tmp13 = _this;
						}
						this1 = tmp13;
					}
					else{
						bool tmp13 = false;
						if ((tmp13)){
							::lime::utils::ArrayBufferView tmp14;
							{
								::lime::utils::ArrayBufferView tmp15 = ::lime::utils::ArrayBufferView_obj::__new((int)0,(int)9);
								::lime::utils::ArrayBufferView _this = tmp15;
								cpp::ArrayBase array = hx::Throw(HX_CSTRING("Invalid field access on null object"));
								_this->byteOffset = (int)0;
								_this->length = array->__Field(HX_HCSTRING("length","\xe6","\x94","\x07","\x9f"), hx::paccDynamic );
								int tmp16 = (_this->length * _this->bytesPerElement);
								_this->byteLength = tmp16;
								::haxe::io::Bytes tmp17;
								{
									::haxe::io::Bytes this2;
									int tmp18 = _this->byteLength;
									::haxe::io::Bytes tmp19 = ::haxe::io::Bytes_obj::alloc(tmp18);
									this2 = tmp19;
									tmp17 = this2;
								}
								_this->buffer = tmp17;
								_this->copyFromArray(((Array< Float >)(array)),null());
								tmp14 = _this;
							}
							this1 = tmp14;
						}
						else{
							bool tmp14 = false;
							if ((tmp14)){
								::lime::utils::ArrayBufferView tmp15;
								{
									::lime::utils::ArrayBufferView tmp16 = ::lime::utils::ArrayBufferView_obj::__new((int)0,(int)9);
									::lime::utils::ArrayBufferView _this = tmp16;
									::haxe::io::Bytes tmp17 = hx::Throw(HX_CSTRING("Invalid field access on null object"));
									::haxe::io::Bytes srcData = tmp17;
									int tmp18 = hx::Throw(HX_CSTRING("Invalid field access on null object"));
									int srcLength = tmp18;
									int tmp19 = hx::Throw(HX_CSTRING("Invalid field access on null object"));
									int srcByteOffset = tmp19;
									int tmp20 = hx::Throw(HX_CSTRING("Invalid field access on null object"));
									int srcElementSize = tmp20;
									int elementSize = _this->bytesPerElement;
									int tmp21 = hx::Throw(HX_CSTRING("Invalid field access on null object"));
									int tmp22 = _this->type;
									bool tmp23 = (tmp21 == tmp22);
									if ((tmp23)){
										int srcLength1 = srcData->length;
										int tmp24 = (srcLength1 - srcByteOffset);
										int cloneLength = tmp24;
										::haxe::io::Bytes tmp25;
										{
											::haxe::io::Bytes this2;
											int tmp26 = cloneLength;
											::haxe::io::Bytes tmp27 = ::haxe::io::Bytes_obj::alloc(tmp26);
											this2 = tmp27;
											tmp25 = this2;
										}
										_this->buffer = tmp25;
										::haxe::io::Bytes tmp26 = srcData;
										int tmp27 = srcByteOffset;
										int tmp28 = cloneLength;
										_this->buffer->blit((int)0,tmp26,tmp27,tmp28);
									}
									else{
										HX_STACK_DO_THROW(HX_HCSTRING("unimplemented","\x09","\x2f","\x74","\xb4"));
									}
									int tmp24 = (_this->bytesPerElement * srcLength);
									_this->byteLength = tmp24;
									_this->byteOffset = (int)0;
									_this->length = srcLength;
									tmp15 = _this;
								}
								this1 = tmp15;
							}
							else{
								bool tmp15 = (buffer != null());
								if ((tmp15)){
									::lime::utils::ArrayBufferView tmp16;
									{
										::lime::utils::ArrayBufferView tmp17 = ::lime::utils::ArrayBufferView_obj::__new((int)0,(int)9);
										::lime::utils::ArrayBufferView _this = tmp17;
										int in_byteOffset = byte_offset;
										bool tmp18 = (in_byteOffset < (int)0);
										if ((tmp18)){
											HX_STACK_DO_THROW(::lime::utils::TAError_obj::RangeError);
										}
										int tmp19 = hx::Mod(in_byteOffset,_this->bytesPerElement);
										bool tmp20 = (tmp19 != (int)0);
										if ((tmp20)){
											HX_STACK_DO_THROW(::lime::utils::TAError_obj::RangeError);
										}
										int bufferByteLength = buffer->length;
										int elementSize = _this->bytesPerElement;
										int newByteLength = bufferByteLength;
										bool tmp21 = (len == null());
										if ((tmp21)){
											int tmp22 = (bufferByteLength - in_byteOffset);
											newByteLength = tmp22;
											int tmp23 = hx::Mod(bufferByteLength,_this->bytesPerElement);
											bool tmp24 = (tmp23 != (int)0);
											if ((tmp24)){
												HX_STACK_DO_THROW(::lime::utils::TAError_obj::RangeError);
											}
											bool tmp25 = (newByteLength < (int)0);
											if ((tmp25)){
												HX_STACK_DO_THROW(::lime::utils::TAError_obj::RangeError);
											}
										}
										else{
											int tmp22 = (len * _this->bytesPerElement);
											newByteLength = tmp22;
											int tmp23 = (in_byteOffset + newByteLength);
											int newRange = tmp23;
											bool tmp24 = (newRange > bufferByteLength);
											if ((tmp24)){
												HX_STACK_DO_THROW(::lime::utils::TAError_obj::RangeError);
											}
										}
										_this->buffer = buffer;
										_this->byteOffset = in_byteOffset;
										_this->byteLength = newByteLength;
										Float tmp22 = (Float(newByteLength) / Float(_this->bytesPerElement));
										int tmp23 = ::Std_obj::_int(tmp22);
										_this->length = tmp23;
										tmp16 = _this;
									}
									this1 = tmp16;
								}
								else{
									HX_STACK_DO_THROW(HX_HCSTRING("Invalid constructor arguments for Float64Array","\x8f","\xde","\x6b","\x1e"));
								}
							}
						}
					}
				}
				tmp7 = this1;
			}
			;break;
			case (int)0: {
				HX_STACK_DO_THROW(HX_HCSTRING("subarray on a blank ArrayBufferView","\x39","\x87","\xfd","\x19"));
			}
			;break;
		}
	}
	::lime::utils::ArrayBufferView view = tmp7;
	::lime::utils::ArrayBufferView tmp8 = view;
	return tmp8;
}


HX_DEFINE_DYNAMIC_FUNC2(ArrayBufferView_obj,subarray_lime_utils_UInt8ClampedArray,return )

::lime::utils::ArrayBufferView ArrayBufferView_obj::subarray_lime_utils_UInt32Array( int begin,Dynamic end){
	bool tmp = (end == null());
	if ((tmp)){
		int tmp1 = this->length;
		end = tmp1;
	}
	int tmp1 = (end - begin);
	int len = tmp1;
	int tmp2 = begin;
	int tmp3 = this->bytesPerElement;
	int tmp4 = (tmp2 * tmp3);
	int tmp5 = this->byteOffset;
	int tmp6 = (tmp4 + tmp5);
	int byte_offset = tmp6;
	::lime::utils::ArrayBufferView tmp7;
	{
		int tmp8 = this->type;
		int _g = tmp8;
		int tmp9 = _g;
		switch( (int)(tmp9)){
			case (int)1: {
				::haxe::io::Bytes tmp10 = this->buffer;
				::haxe::io::Bytes buffer = tmp10;
				::lime::utils::ArrayBufferView this1;
				bool tmp11 = false;
				if ((tmp11)){
					::lime::utils::ArrayBufferView tmp12 = ::lime::utils::ArrayBufferView_obj::__new(null(),(int)1);
					this1 = tmp12;
				}
				else{
					bool tmp12 = false;
					if ((tmp12)){
						::lime::utils::ArrayBufferView tmp13;
						{
							::lime::utils::ArrayBufferView tmp14 = ::lime::utils::ArrayBufferView_obj::__new((int)0,(int)1);
							::lime::utils::ArrayBufferView _this = tmp14;
							_this->byteOffset = (int)0;
							int tmp15 = hx::Throw(HX_CSTRING("Invalid field access on null object"));
							_this->length = tmp15;
							int tmp16 = (_this->length * _this->bytesPerElement);
							_this->byteLength = tmp16;
							::haxe::io::Bytes tmp17;
							{
								::haxe::io::Bytes this2;
								int tmp18 = _this->byteLength;
								::haxe::io::Bytes tmp19 = ::haxe::io::Bytes_obj::alloc(tmp18);
								this2 = tmp19;
								tmp17 = this2;
							}
							_this->buffer = tmp17;
							_this->copyFromArray(((Array< Float >)(null())),null());
							tmp13 = _this;
						}
						this1 = tmp13;
					}
					else{
						bool tmp13 = false;
						if ((tmp13)){
							::lime::utils::ArrayBufferView tmp14;
							{
								::lime::utils::ArrayBufferView tmp15 = ::lime::utils::ArrayBufferView_obj::__new((int)0,(int)1);
								::lime::utils::ArrayBufferView _this = tmp15;
								cpp::ArrayBase array = hx::Throw(HX_CSTRING("Invalid field access on null object"));
								_this->byteOffset = (int)0;
								_this->length = array->__Field(HX_HCSTRING("length","\xe6","\x94","\x07","\x9f"), hx::paccDynamic );
								int tmp16 = (_this->length * _this->bytesPerElement);
								_this->byteLength = tmp16;
								::haxe::io::Bytes tmp17;
								{
									::haxe::io::Bytes this2;
									int tmp18 = _this->byteLength;
									::haxe::io::Bytes tmp19 = ::haxe::io::Bytes_obj::alloc(tmp18);
									this2 = tmp19;
									tmp17 = this2;
								}
								_this->buffer = tmp17;
								_this->copyFromArray(((Array< Float >)(array)),null());
								tmp14 = _this;
							}
							this1 = tmp14;
						}
						else{
							bool tmp14 = false;
							if ((tmp14)){
								::lime::utils::ArrayBufferView tmp15;
								{
									::lime::utils::ArrayBufferView tmp16 = ::lime::utils::ArrayBufferView_obj::__new((int)0,(int)1);
									::lime::utils::ArrayBufferView _this = tmp16;
									::haxe::io::Bytes tmp17 = hx::Throw(HX_CSTRING("Invalid field access on null object"));
									::haxe::io::Bytes srcData = tmp17;
									int tmp18 = hx::Throw(HX_CSTRING("Invalid field access on null object"));
									int srcLength = tmp18;
									int tmp19 = hx::Throw(HX_CSTRING("Invalid field access on null object"));
									int srcByteOffset = tmp19;
									int tmp20 = hx::Throw(HX_CSTRING("Invalid field access on null object"));
									int srcElementSize = tmp20;
									int elementSize = _this->bytesPerElement;
									int tmp21 = hx::Throw(HX_CSTRING("Invalid field access on null object"));
									int tmp22 = _this->type;
									bool tmp23 = (tmp21 == tmp22);
									if ((tmp23)){
										int srcLength1 = srcData->length;
										int tmp24 = (srcLength1 - srcByteOffset);
										int cloneLength = tmp24;
										::haxe::io::Bytes tmp25;
										{
											::haxe::io::Bytes this2;
											int tmp26 = cloneLength;
											::haxe::io::Bytes tmp27 = ::haxe::io::Bytes_obj::alloc(tmp26);
											this2 = tmp27;
											tmp25 = this2;
										}
										_this->buffer = tmp25;
										::haxe::io::Bytes tmp26 = srcData;
										int tmp27 = srcByteOffset;
										int tmp28 = cloneLength;
										_this->buffer->blit((int)0,tmp26,tmp27,tmp28);
									}
									else{
										HX_STACK_DO_THROW(HX_HCSTRING("unimplemented","\x09","\x2f","\x74","\xb4"));
									}
									int tmp24 = (_this->bytesPerElement * srcLength);
									_this->byteLength = tmp24;
									_this->byteOffset = (int)0;
									_this->length = srcLength;
									tmp15 = _this;
								}
								this1 = tmp15;
							}
							else{
								bool tmp15 = (buffer != null());
								if ((tmp15)){
									::lime::utils::ArrayBufferView tmp16;
									{
										::lime::utils::ArrayBufferView tmp17 = ::lime::utils::ArrayBufferView_obj::__new((int)0,(int)1);
										::lime::utils::ArrayBufferView _this = tmp17;
										int in_byteOffset = byte_offset;
										bool tmp18 = (in_byteOffset < (int)0);
										if ((tmp18)){
											HX_STACK_DO_THROW(::lime::utils::TAError_obj::RangeError);
										}
										int tmp19 = hx::Mod(in_byteOffset,_this->bytesPerElement);
										bool tmp20 = (tmp19 != (int)0);
										if ((tmp20)){
											HX_STACK_DO_THROW(::lime::utils::TAError_obj::RangeError);
										}
										int bufferByteLength = buffer->length;
										int elementSize = _this->bytesPerElement;
										int newByteLength = bufferByteLength;
										bool tmp21 = (len == null());
										if ((tmp21)){
											int tmp22 = (bufferByteLength - in_byteOffset);
											newByteLength = tmp22;
											int tmp23 = hx::Mod(bufferByteLength,_this->bytesPerElement);
											bool tmp24 = (tmp23 != (int)0);
											if ((tmp24)){
												HX_STACK_DO_THROW(::lime::utils::TAError_obj::RangeError);
											}
											bool tmp25 = (newByteLength < (int)0);
											if ((tmp25)){
												HX_STACK_DO_THROW(::lime::utils::TAError_obj::RangeError);
											}
										}
										else{
											int tmp22 = (len * _this->bytesPerElement);
											newByteLength = tmp22;
											int tmp23 = (in_byteOffset + newByteLength);
											int newRange = tmp23;
											bool tmp24 = (newRange > bufferByteLength);
											if ((tmp24)){
												HX_STACK_DO_THROW(::lime::utils::TAError_obj::RangeError);
											}
										}
										_this->buffer = buffer;
										_this->byteOffset = in_byteOffset;
										_this->byteLength = newByteLength;
										Float tmp22 = (Float(newByteLength) / Float(_this->bytesPerElement));
										int tmp23 = ::Std_obj::_int(tmp22);
										_this->length = tmp23;
										tmp16 = _this;
									}
									this1 = tmp16;
								}
								else{
									HX_STACK_DO_THROW(HX_HCSTRING("Invalid constructor arguments for Int8Array","\x40","\x53","\xda","\x77"));
								}
							}
						}
					}
				}
				tmp7 = this1;
			}
			;break;
			case (int)2: {
				::haxe::io::Bytes tmp10 = this->buffer;
				::haxe::io::Bytes buffer = tmp10;
				::lime::utils::ArrayBufferView this1;
				bool tmp11 = false;
				if ((tmp11)){
					::lime::utils::ArrayBufferView tmp12 = ::lime::utils::ArrayBufferView_obj::__new(null(),(int)2);
					this1 = tmp12;
				}
				else{
					bool tmp12 = false;
					if ((tmp12)){
						::lime::utils::ArrayBufferView tmp13;
						{
							::lime::utils::ArrayBufferView tmp14 = ::lime::utils::ArrayBufferView_obj::__new((int)0,(int)2);
							::lime::utils::ArrayBufferView _this = tmp14;
							_this->byteOffset = (int)0;
							int tmp15 = hx::Throw(HX_CSTRING("Invalid field access on null object"));
							_this->length = tmp15;
							int tmp16 = (_this->length * _this->bytesPerElement);
							_this->byteLength = tmp16;
							::haxe::io::Bytes tmp17;
							{
								::haxe::io::Bytes this2;
								int tmp18 = _this->byteLength;
								::haxe::io::Bytes tmp19 = ::haxe::io::Bytes_obj::alloc(tmp18);
								this2 = tmp19;
								tmp17 = this2;
							}
							_this->buffer = tmp17;
							_this->copyFromArray(((Array< Float >)(null())),null());
							tmp13 = _this;
						}
						this1 = tmp13;
					}
					else{
						bool tmp13 = false;
						if ((tmp13)){
							::lime::utils::ArrayBufferView tmp14;
							{
								::lime::utils::ArrayBufferView tmp15 = ::lime::utils::ArrayBufferView_obj::__new((int)0,(int)2);
								::lime::utils::ArrayBufferView _this = tmp15;
								cpp::ArrayBase array = hx::Throw(HX_CSTRING("Invalid field access on null object"));
								_this->byteOffset = (int)0;
								_this->length = array->__Field(HX_HCSTRING("length","\xe6","\x94","\x07","\x9f"), hx::paccDynamic );
								int tmp16 = (_this->length * _this->bytesPerElement);
								_this->byteLength = tmp16;
								::haxe::io::Bytes tmp17;
								{
									::haxe::io::Bytes this2;
									int tmp18 = _this->byteLength;
									::haxe::io::Bytes tmp19 = ::haxe::io::Bytes_obj::alloc(tmp18);
									this2 = tmp19;
									tmp17 = this2;
								}
								_this->buffer = tmp17;
								_this->copyFromArray(((Array< Float >)(array)),null());
								tmp14 = _this;
							}
							this1 = tmp14;
						}
						else{
							bool tmp14 = false;
							if ((tmp14)){
								::lime::utils::ArrayBufferView tmp15;
								{
									::lime::utils::ArrayBufferView tmp16 = ::lime::utils::ArrayBufferView_obj::__new((int)0,(int)2);
									::lime::utils::ArrayBufferView _this = tmp16;
									::haxe::io::Bytes tmp17 = hx::Throw(HX_CSTRING("Invalid field access on null object"));
									::haxe::io::Bytes srcData = tmp17;
									int tmp18 = hx::Throw(HX_CSTRING("Invalid field access on null object"));
									int srcLength = tmp18;
									int tmp19 = hx::Throw(HX_CSTRING("Invalid field access on null object"));
									int srcByteOffset = tmp19;
									int tmp20 = hx::Throw(HX_CSTRING("Invalid field access on null object"));
									int srcElementSize = tmp20;
									int elementSize = _this->bytesPerElement;
									int tmp21 = hx::Throw(HX_CSTRING("Invalid field access on null object"));
									int tmp22 = _this->type;
									bool tmp23 = (tmp21 == tmp22);
									if ((tmp23)){
										int srcLength1 = srcData->length;
										int tmp24 = (srcLength1 - srcByteOffset);
										int cloneLength = tmp24;
										::haxe::io::Bytes tmp25;
										{
											::haxe::io::Bytes this2;
											int tmp26 = cloneLength;
											::haxe::io::Bytes tmp27 = ::haxe::io::Bytes_obj::alloc(tmp26);
											this2 = tmp27;
											tmp25 = this2;
										}
										_this->buffer = tmp25;
										::haxe::io::Bytes tmp26 = srcData;
										int tmp27 = srcByteOffset;
										int tmp28 = cloneLength;
										_this->buffer->blit((int)0,tmp26,tmp27,tmp28);
									}
									else{
										HX_STACK_DO_THROW(HX_HCSTRING("unimplemented","\x09","\x2f","\x74","\xb4"));
									}
									int tmp24 = (_this->bytesPerElement * srcLength);
									_this->byteLength = tmp24;
									_this->byteOffset = (int)0;
									_this->length = srcLength;
									tmp15 = _this;
								}
								this1 = tmp15;
							}
							else{
								bool tmp15 = (buffer != null());
								if ((tmp15)){
									::lime::utils::ArrayBufferView tmp16;
									{
										::lime::utils::ArrayBufferView tmp17 = ::lime::utils::ArrayBufferView_obj::__new((int)0,(int)2);
										::lime::utils::ArrayBufferView _this = tmp17;
										int in_byteOffset = byte_offset;
										bool tmp18 = (in_byteOffset < (int)0);
										if ((tmp18)){
											HX_STACK_DO_THROW(::lime::utils::TAError_obj::RangeError);
										}
										int tmp19 = hx::Mod(in_byteOffset,_this->bytesPerElement);
										bool tmp20 = (tmp19 != (int)0);
										if ((tmp20)){
											HX_STACK_DO_THROW(::lime::utils::TAError_obj::RangeError);
										}
										int bufferByteLength = buffer->length;
										int elementSize = _this->bytesPerElement;
										int newByteLength = bufferByteLength;
										bool tmp21 = (len == null());
										if ((tmp21)){
											int tmp22 = (bufferByteLength - in_byteOffset);
											newByteLength = tmp22;
											int tmp23 = hx::Mod(bufferByteLength,_this->bytesPerElement);
											bool tmp24 = (tmp23 != (int)0);
											if ((tmp24)){
												HX_STACK_DO_THROW(::lime::utils::TAError_obj::RangeError);
											}
											bool tmp25 = (newByteLength < (int)0);
											if ((tmp25)){
												HX_STACK_DO_THROW(::lime::utils::TAError_obj::RangeError);
											}
										}
										else{
											int tmp22 = (len * _this->bytesPerElement);
											newByteLength = tmp22;
											int tmp23 = (in_byteOffset + newByteLength);
											int newRange = tmp23;
											bool tmp24 = (newRange > bufferByteLength);
											if ((tmp24)){
												HX_STACK_DO_THROW(::lime::utils::TAError_obj::RangeError);
											}
										}
										_this->buffer = buffer;
										_this->byteOffset = in_byteOffset;
										_this->byteLength = newByteLength;
										Float tmp22 = (Float(newByteLength) / Float(_this->bytesPerElement));
										int tmp23 = ::Std_obj::_int(tmp22);
										_this->length = tmp23;
										tmp16 = _this;
									}
									this1 = tmp16;
								}
								else{
									HX_STACK_DO_THROW(HX_HCSTRING("Invalid constructor arguments for Int16Array","\x95","\xb2","\x95","\xa7"));
								}
							}
						}
					}
				}
				tmp7 = this1;
			}
			;break;
			case (int)3: {
				::haxe::io::Bytes tmp10 = this->buffer;
				::haxe::io::Bytes buffer = tmp10;
				::lime::utils::ArrayBufferView this1;
				bool tmp11 = false;
				if ((tmp11)){
					::lime::utils::ArrayBufferView tmp12 = ::lime::utils::ArrayBufferView_obj::__new(null(),(int)3);
					this1 = tmp12;
				}
				else{
					bool tmp12 = false;
					if ((tmp12)){
						::lime::utils::ArrayBufferView tmp13;
						{
							::lime::utils::ArrayBufferView tmp14 = ::lime::utils::ArrayBufferView_obj::__new((int)0,(int)3);
							::lime::utils::ArrayBufferView _this = tmp14;
							_this->byteOffset = (int)0;
							int tmp15 = hx::Throw(HX_CSTRING("Invalid field access on null object"));
							_this->length = tmp15;
							int tmp16 = (_this->length * _this->bytesPerElement);
							_this->byteLength = tmp16;
							::haxe::io::Bytes tmp17;
							{
								::haxe::io::Bytes this2;
								int tmp18 = _this->byteLength;
								::haxe::io::Bytes tmp19 = ::haxe::io::Bytes_obj::alloc(tmp18);
								this2 = tmp19;
								tmp17 = this2;
							}
							_this->buffer = tmp17;
							_this->copyFromArray(((Array< Float >)(null())),null());
							tmp13 = _this;
						}
						this1 = tmp13;
					}
					else{
						bool tmp13 = false;
						if ((tmp13)){
							::lime::utils::ArrayBufferView tmp14;
							{
								::lime::utils::ArrayBufferView tmp15 = ::lime::utils::ArrayBufferView_obj::__new((int)0,(int)3);
								::lime::utils::ArrayBufferView _this = tmp15;
								cpp::ArrayBase array = hx::Throw(HX_CSTRING("Invalid field access on null object"));
								_this->byteOffset = (int)0;
								_this->length = array->__Field(HX_HCSTRING("length","\xe6","\x94","\x07","\x9f"), hx::paccDynamic );
								int tmp16 = (_this->length * _this->bytesPerElement);
								_this->byteLength = tmp16;
								::haxe::io::Bytes tmp17;
								{
									::haxe::io::Bytes this2;
									int tmp18 = _this->byteLength;
									::haxe::io::Bytes tmp19 = ::haxe::io::Bytes_obj::alloc(tmp18);
									this2 = tmp19;
									tmp17 = this2;
								}
								_this->buffer = tmp17;
								_this->copyFromArray(((Array< Float >)(array)),null());
								tmp14 = _this;
							}
							this1 = tmp14;
						}
						else{
							bool tmp14 = false;
							if ((tmp14)){
								::lime::utils::ArrayBufferView tmp15;
								{
									::lime::utils::ArrayBufferView tmp16 = ::lime::utils::ArrayBufferView_obj::__new((int)0,(int)3);
									::lime::utils::ArrayBufferView _this = tmp16;
									::haxe::io::Bytes tmp17 = hx::Throw(HX_CSTRING("Invalid field access on null object"));
									::haxe::io::Bytes srcData = tmp17;
									int tmp18 = hx::Throw(HX_CSTRING("Invalid field access on null object"));
									int srcLength = tmp18;
									int tmp19 = hx::Throw(HX_CSTRING("Invalid field access on null object"));
									int srcByteOffset = tmp19;
									int tmp20 = hx::Throw(HX_CSTRING("Invalid field access on null object"));
									int srcElementSize = tmp20;
									int elementSize = _this->bytesPerElement;
									int tmp21 = hx::Throw(HX_CSTRING("Invalid field access on null object"));
									int tmp22 = _this->type;
									bool tmp23 = (tmp21 == tmp22);
									if ((tmp23)){
										int srcLength1 = srcData->length;
										int tmp24 = (srcLength1 - srcByteOffset);
										int cloneLength = tmp24;
										::haxe::io::Bytes tmp25;
										{
											::haxe::io::Bytes this2;
											int tmp26 = cloneLength;
											::haxe::io::Bytes tmp27 = ::haxe::io::Bytes_obj::alloc(tmp26);
											this2 = tmp27;
											tmp25 = this2;
										}
										_this->buffer = tmp25;
										::haxe::io::Bytes tmp26 = srcData;
										int tmp27 = srcByteOffset;
										int tmp28 = cloneLength;
										_this->buffer->blit((int)0,tmp26,tmp27,tmp28);
									}
									else{
										HX_STACK_DO_THROW(HX_HCSTRING("unimplemented","\x09","\x2f","\x74","\xb4"));
									}
									int tmp24 = (_this->bytesPerElement * srcLength);
									_this->byteLength = tmp24;
									_this->byteOffset = (int)0;
									_this->length = srcLength;
									tmp15 = _this;
								}
								this1 = tmp15;
							}
							else{
								bool tmp15 = (buffer != null());
								if ((tmp15)){
									::lime::utils::ArrayBufferView tmp16;
									{
										::lime::utils::ArrayBufferView tmp17 = ::lime::utils::ArrayBufferView_obj::__new((int)0,(int)3);
										::lime::utils::ArrayBufferView _this = tmp17;
										int in_byteOffset = byte_offset;
										bool tmp18 = (in_byteOffset < (int)0);
										if ((tmp18)){
											HX_STACK_DO_THROW(::lime::utils::TAError_obj::RangeError);
										}
										int tmp19 = hx::Mod(in_byteOffset,_this->bytesPerElement);
										bool tmp20 = (tmp19 != (int)0);
										if ((tmp20)){
											HX_STACK_DO_THROW(::lime::utils::TAError_obj::RangeError);
										}
										int bufferByteLength = buffer->length;
										int elementSize = _this->bytesPerElement;
										int newByteLength = bufferByteLength;
										bool tmp21 = (len == null());
										if ((tmp21)){
											int tmp22 = (bufferByteLength - in_byteOffset);
											newByteLength = tmp22;
											int tmp23 = hx::Mod(bufferByteLength,_this->bytesPerElement);
											bool tmp24 = (tmp23 != (int)0);
											if ((tmp24)){
												HX_STACK_DO_THROW(::lime::utils::TAError_obj::RangeError);
											}
											bool tmp25 = (newByteLength < (int)0);
											if ((tmp25)){
												HX_STACK_DO_THROW(::lime::utils::TAError_obj::RangeError);
											}
										}
										else{
											int tmp22 = (len * _this->bytesPerElement);
											newByteLength = tmp22;
											int tmp23 = (in_byteOffset + newByteLength);
											int newRange = tmp23;
											bool tmp24 = (newRange > bufferByteLength);
											if ((tmp24)){
												HX_STACK_DO_THROW(::lime::utils::TAError_obj::RangeError);
											}
										}
										_this->buffer = buffer;
										_this->byteOffset = in_byteOffset;
										_this->byteLength = newByteLength;
										Float tmp22 = (Float(newByteLength) / Float(_this->bytesPerElement));
										int tmp23 = ::Std_obj::_int(tmp22);
										_this->length = tmp23;
										tmp16 = _this;
									}
									this1 = tmp16;
								}
								else{
									HX_STACK_DO_THROW(HX_HCSTRING("Invalid constructor arguments for Int32Array","\x9b","\x2e","\x53","\x61"));
								}
							}
						}
					}
				}
				tmp7 = this1;
			}
			;break;
			case (int)4: {
				::haxe::io::Bytes tmp10 = this->buffer;
				::haxe::io::Bytes buffer = tmp10;
				::lime::utils::ArrayBufferView this1;
				bool tmp11 = false;
				if ((tmp11)){
					::lime::utils::ArrayBufferView tmp12 = ::lime::utils::ArrayBufferView_obj::__new(null(),(int)4);
					this1 = tmp12;
				}
				else{
					bool tmp12 = false;
					if ((tmp12)){
						::lime::utils::ArrayBufferView tmp13;
						{
							::lime::utils::ArrayBufferView tmp14 = ::lime::utils::ArrayBufferView_obj::__new((int)0,(int)4);
							::lime::utils::ArrayBufferView _this = tmp14;
							_this->byteOffset = (int)0;
							int tmp15 = hx::Throw(HX_CSTRING("Invalid field access on null object"));
							_this->length = tmp15;
							int tmp16 = (_this->length * _this->bytesPerElement);
							_this->byteLength = tmp16;
							::haxe::io::Bytes tmp17;
							{
								::haxe::io::Bytes this2;
								int tmp18 = _this->byteLength;
								::haxe::io::Bytes tmp19 = ::haxe::io::Bytes_obj::alloc(tmp18);
								this2 = tmp19;
								tmp17 = this2;
							}
							_this->buffer = tmp17;
							_this->copyFromArray(((Array< Float >)(null())),null());
							tmp13 = _this;
						}
						this1 = tmp13;
					}
					else{
						bool tmp13 = false;
						if ((tmp13)){
							::lime::utils::ArrayBufferView tmp14;
							{
								::lime::utils::ArrayBufferView tmp15 = ::lime::utils::ArrayBufferView_obj::__new((int)0,(int)4);
								::lime::utils::ArrayBufferView _this = tmp15;
								cpp::ArrayBase array = hx::Throw(HX_CSTRING("Invalid field access on null object"));
								_this->byteOffset = (int)0;
								_this->length = array->__Field(HX_HCSTRING("length","\xe6","\x94","\x07","\x9f"), hx::paccDynamic );
								int tmp16 = (_this->length * _this->bytesPerElement);
								_this->byteLength = tmp16;
								::haxe::io::Bytes tmp17;
								{
									::haxe::io::Bytes this2;
									int tmp18 = _this->byteLength;
									::haxe::io::Bytes tmp19 = ::haxe::io::Bytes_obj::alloc(tmp18);
									this2 = tmp19;
									tmp17 = this2;
								}
								_this->buffer = tmp17;
								_this->copyFromArray(((Array< Float >)(array)),null());
								tmp14 = _this;
							}
							this1 = tmp14;
						}
						else{
							bool tmp14 = false;
							if ((tmp14)){
								::lime::utils::ArrayBufferView tmp15;
								{
									::lime::utils::ArrayBufferView tmp16 = ::lime::utils::ArrayBufferView_obj::__new((int)0,(int)4);
									::lime::utils::ArrayBufferView _this = tmp16;
									::haxe::io::Bytes tmp17 = hx::Throw(HX_CSTRING("Invalid field access on null object"));
									::haxe::io::Bytes srcData = tmp17;
									int tmp18 = hx::Throw(HX_CSTRING("Invalid field access on null object"));
									int srcLength = tmp18;
									int tmp19 = hx::Throw(HX_CSTRING("Invalid field access on null object"));
									int srcByteOffset = tmp19;
									int tmp20 = hx::Throw(HX_CSTRING("Invalid field access on null object"));
									int srcElementSize = tmp20;
									int elementSize = _this->bytesPerElement;
									int tmp21 = hx::Throw(HX_CSTRING("Invalid field access on null object"));
									int tmp22 = _this->type;
									bool tmp23 = (tmp21 == tmp22);
									if ((tmp23)){
										int srcLength1 = srcData->length;
										int tmp24 = (srcLength1 - srcByteOffset);
										int cloneLength = tmp24;
										::haxe::io::Bytes tmp25;
										{
											::haxe::io::Bytes this2;
											int tmp26 = cloneLength;
											::haxe::io::Bytes tmp27 = ::haxe::io::Bytes_obj::alloc(tmp26);
											this2 = tmp27;
											tmp25 = this2;
										}
										_this->buffer = tmp25;
										::haxe::io::Bytes tmp26 = srcData;
										int tmp27 = srcByteOffset;
										int tmp28 = cloneLength;
										_this->buffer->blit((int)0,tmp26,tmp27,tmp28);
									}
									else{
										HX_STACK_DO_THROW(HX_HCSTRING("unimplemented","\x09","\x2f","\x74","\xb4"));
									}
									int tmp24 = (_this->bytesPerElement * srcLength);
									_this->byteLength = tmp24;
									_this->byteOffset = (int)0;
									_this->length = srcLength;
									tmp15 = _this;
								}
								this1 = tmp15;
							}
							else{
								bool tmp15 = (buffer != null());
								if ((tmp15)){
									::lime::utils::ArrayBufferView tmp16;
									{
										::lime::utils::ArrayBufferView tmp17 = ::lime::utils::ArrayBufferView_obj::__new((int)0,(int)4);
										::lime::utils::ArrayBufferView _this = tmp17;
										int in_byteOffset = byte_offset;
										bool tmp18 = (in_byteOffset < (int)0);
										if ((tmp18)){
											HX_STACK_DO_THROW(::lime::utils::TAError_obj::RangeError);
										}
										int tmp19 = hx::Mod(in_byteOffset,_this->bytesPerElement);
										bool tmp20 = (tmp19 != (int)0);
										if ((tmp20)){
											HX_STACK_DO_THROW(::lime::utils::TAError_obj::RangeError);
										}
										int bufferByteLength = buffer->length;
										int elementSize = _this->bytesPerElement;
										int newByteLength = bufferByteLength;
										bool tmp21 = (len == null());
										if ((tmp21)){
											int tmp22 = (bufferByteLength - in_byteOffset);
											newByteLength = tmp22;
											int tmp23 = hx::Mod(bufferByteLength,_this->bytesPerElement);
											bool tmp24 = (tmp23 != (int)0);
											if ((tmp24)){
												HX_STACK_DO_THROW(::lime::utils::TAError_obj::RangeError);
											}
											bool tmp25 = (newByteLength < (int)0);
											if ((tmp25)){
												HX_STACK_DO_THROW(::lime::utils::TAError_obj::RangeError);
											}
										}
										else{
											int tmp22 = (len * _this->bytesPerElement);
											newByteLength = tmp22;
											int tmp23 = (in_byteOffset + newByteLength);
											int newRange = tmp23;
											bool tmp24 = (newRange > bufferByteLength);
											if ((tmp24)){
												HX_STACK_DO_THROW(::lime::utils::TAError_obj::RangeError);
											}
										}
										_this->buffer = buffer;
										_this->byteOffset = in_byteOffset;
										_this->byteLength = newByteLength;
										Float tmp22 = (Float(newByteLength) / Float(_this->bytesPerElement));
										int tmp23 = ::Std_obj::_int(tmp22);
										_this->length = tmp23;
										tmp16 = _this;
									}
									this1 = tmp16;
								}
								else{
									HX_STACK_DO_THROW(HX_HCSTRING("Invalid constructor arguments for UInt8Array","\x6b","\x44","\xd5","\x85"));
								}
							}
						}
					}
				}
				tmp7 = this1;
			}
			;break;
			case (int)5: {
				::haxe::io::Bytes tmp10 = this->buffer;
				::haxe::io::Bytes buffer = tmp10;
				::lime::utils::ArrayBufferView this1;
				bool tmp11 = false;
				if ((tmp11)){
					::lime::utils::ArrayBufferView tmp12 = ::lime::utils::ArrayBufferView_obj::__new(null(),(int)5);
					this1 = tmp12;
				}
				else{
					bool tmp12 = false;
					if ((tmp12)){
						::lime::utils::ArrayBufferView tmp13;
						{
							::lime::utils::ArrayBufferView tmp14 = ::lime::utils::ArrayBufferView_obj::__new((int)0,(int)5);
							::lime::utils::ArrayBufferView _this = tmp14;
							_this->byteOffset = (int)0;
							int tmp15 = hx::Throw(HX_CSTRING("Invalid field access on null object"));
							_this->length = tmp15;
							int tmp16 = (_this->length * _this->bytesPerElement);
							_this->byteLength = tmp16;
							::haxe::io::Bytes tmp17;
							{
								::haxe::io::Bytes this2;
								int tmp18 = _this->byteLength;
								::haxe::io::Bytes tmp19 = ::haxe::io::Bytes_obj::alloc(tmp18);
								this2 = tmp19;
								tmp17 = this2;
							}
							_this->buffer = tmp17;
							_this->copyFromArray(((Array< Float >)(null())),null());
							tmp13 = _this;
						}
						this1 = tmp13;
					}
					else{
						bool tmp13 = false;
						if ((tmp13)){
							::lime::utils::ArrayBufferView tmp14;
							{
								::lime::utils::ArrayBufferView tmp15 = ::lime::utils::ArrayBufferView_obj::__new((int)0,(int)5);
								::lime::utils::ArrayBufferView _this = tmp15;
								cpp::ArrayBase array = hx::Throw(HX_CSTRING("Invalid field access on null object"));
								_this->byteOffset = (int)0;
								_this->length = array->__Field(HX_HCSTRING("length","\xe6","\x94","\x07","\x9f"), hx::paccDynamic );
								int tmp16 = (_this->length * _this->bytesPerElement);
								_this->byteLength = tmp16;
								::haxe::io::Bytes tmp17;
								{
									::haxe::io::Bytes this2;
									int tmp18 = _this->byteLength;
									::haxe::io::Bytes tmp19 = ::haxe::io::Bytes_obj::alloc(tmp18);
									this2 = tmp19;
									tmp17 = this2;
								}
								_this->buffer = tmp17;
								_this->copyFromArray(((Array< Float >)(array)),null());
								tmp14 = _this;
							}
							this1 = tmp14;
						}
						else{
							bool tmp14 = false;
							if ((tmp14)){
								::lime::utils::ArrayBufferView tmp15;
								{
									::lime::utils::ArrayBufferView tmp16 = ::lime::utils::ArrayBufferView_obj::__new((int)0,(int)5);
									::lime::utils::ArrayBufferView _this = tmp16;
									::haxe::io::Bytes tmp17 = hx::Throw(HX_CSTRING("Invalid field access on null object"));
									::haxe::io::Bytes srcData = tmp17;
									int tmp18 = hx::Throw(HX_CSTRING("Invalid field access on null object"));
									int srcLength = tmp18;
									int tmp19 = hx::Throw(HX_CSTRING("Invalid field access on null object"));
									int srcByteOffset = tmp19;
									int tmp20 = hx::Throw(HX_CSTRING("Invalid field access on null object"));
									int srcElementSize = tmp20;
									int elementSize = _this->bytesPerElement;
									int tmp21 = hx::Throw(HX_CSTRING("Invalid field access on null object"));
									int tmp22 = _this->type;
									bool tmp23 = (tmp21 == tmp22);
									if ((tmp23)){
										int srcLength1 = srcData->length;
										int tmp24 = (srcLength1 - srcByteOffset);
										int cloneLength = tmp24;
										::haxe::io::Bytes tmp25;
										{
											::haxe::io::Bytes this2;
											int tmp26 = cloneLength;
											::haxe::io::Bytes tmp27 = ::haxe::io::Bytes_obj::alloc(tmp26);
											this2 = tmp27;
											tmp25 = this2;
										}
										_this->buffer = tmp25;
										::haxe::io::Bytes tmp26 = srcData;
										int tmp27 = srcByteOffset;
										int tmp28 = cloneLength;
										_this->buffer->blit((int)0,tmp26,tmp27,tmp28);
									}
									else{
										HX_STACK_DO_THROW(HX_HCSTRING("unimplemented","\x09","\x2f","\x74","\xb4"));
									}
									int tmp24 = (_this->bytesPerElement * srcLength);
									_this->byteLength = tmp24;
									_this->byteOffset = (int)0;
									_this->length = srcLength;
									tmp15 = _this;
								}
								this1 = tmp15;
							}
							else{
								bool tmp15 = (buffer != null());
								if ((tmp15)){
									::lime::utils::ArrayBufferView tmp16;
									{
										::lime::utils::ArrayBufferView tmp17 = ::lime::utils::ArrayBufferView_obj::__new((int)0,(int)5);
										::lime::utils::ArrayBufferView _this = tmp17;
										int in_byteOffset = byte_offset;
										bool tmp18 = (in_byteOffset < (int)0);
										if ((tmp18)){
											HX_STACK_DO_THROW(::lime::utils::TAError_obj::RangeError);
										}
										int tmp19 = hx::Mod(in_byteOffset,_this->bytesPerElement);
										bool tmp20 = (tmp19 != (int)0);
										if ((tmp20)){
											HX_STACK_DO_THROW(::lime::utils::TAError_obj::RangeError);
										}
										int bufferByteLength = buffer->length;
										int elementSize = _this->bytesPerElement;
										int newByteLength = bufferByteLength;
										bool tmp21 = (len == null());
										if ((tmp21)){
											int tmp22 = (bufferByteLength - in_byteOffset);
											newByteLength = tmp22;
											int tmp23 = hx::Mod(bufferByteLength,_this->bytesPerElement);
											bool tmp24 = (tmp23 != (int)0);
											if ((tmp24)){
												HX_STACK_DO_THROW(::lime::utils::TAError_obj::RangeError);
											}
											bool tmp25 = (newByteLength < (int)0);
											if ((tmp25)){
												HX_STACK_DO_THROW(::lime::utils::TAError_obj::RangeError);
											}
										}
										else{
											int tmp22 = (len * _this->bytesPerElement);
											newByteLength = tmp22;
											int tmp23 = (in_byteOffset + newByteLength);
											int newRange = tmp23;
											bool tmp24 = (newRange > bufferByteLength);
											if ((tmp24)){
												HX_STACK_DO_THROW(::lime::utils::TAError_obj::RangeError);
											}
										}
										_this->buffer = buffer;
										_this->byteOffset = in_byteOffset;
										_this->byteLength = newByteLength;
										Float tmp22 = (Float(newByteLength) / Float(_this->bytesPerElement));
										int tmp23 = ::Std_obj::_int(tmp22);
										_this->length = tmp23;
										tmp16 = _this;
									}
									this1 = tmp16;
								}
								else{
									HX_STACK_DO_THROW(HX_HCSTRING("Invalid constructor arguments for UInt8ClampedArray","\x8d","\x06","\x77","\x13"));
								}
							}
						}
					}
				}
				tmp7 = this1;
			}
			;break;
			case (int)6: {
				::haxe::io::Bytes tmp10 = this->buffer;
				::haxe::io::Bytes buffer = tmp10;
				::lime::utils::ArrayBufferView this1;
				bool tmp11 = false;
				if ((tmp11)){
					::lime::utils::ArrayBufferView tmp12 = ::lime::utils::ArrayBufferView_obj::__new(null(),(int)6);
					this1 = tmp12;
				}
				else{
					bool tmp12 = false;
					if ((tmp12)){
						::lime::utils::ArrayBufferView tmp13;
						{
							::lime::utils::ArrayBufferView tmp14 = ::lime::utils::ArrayBufferView_obj::__new((int)0,(int)6);
							::lime::utils::ArrayBufferView _this = tmp14;
							_this->byteOffset = (int)0;
							int tmp15 = hx::Throw(HX_CSTRING("Invalid field access on null object"));
							_this->length = tmp15;
							int tmp16 = (_this->length * _this->bytesPerElement);
							_this->byteLength = tmp16;
							::haxe::io::Bytes tmp17;
							{
								::haxe::io::Bytes this2;
								int tmp18 = _this->byteLength;
								::haxe::io::Bytes tmp19 = ::haxe::io::Bytes_obj::alloc(tmp18);
								this2 = tmp19;
								tmp17 = this2;
							}
							_this->buffer = tmp17;
							_this->copyFromArray(((Array< Float >)(null())),null());
							tmp13 = _this;
						}
						this1 = tmp13;
					}
					else{
						bool tmp13 = false;
						if ((tmp13)){
							::lime::utils::ArrayBufferView tmp14;
							{
								::lime::utils::ArrayBufferView tmp15 = ::lime::utils::ArrayBufferView_obj::__new((int)0,(int)6);
								::lime::utils::ArrayBufferView _this = tmp15;
								cpp::ArrayBase array = hx::Throw(HX_CSTRING("Invalid field access on null object"));
								_this->byteOffset = (int)0;
								_this->length = array->__Field(HX_HCSTRING("length","\xe6","\x94","\x07","\x9f"), hx::paccDynamic );
								int tmp16 = (_this->length * _this->bytesPerElement);
								_this->byteLength = tmp16;
								::haxe::io::Bytes tmp17;
								{
									::haxe::io::Bytes this2;
									int tmp18 = _this->byteLength;
									::haxe::io::Bytes tmp19 = ::haxe::io::Bytes_obj::alloc(tmp18);
									this2 = tmp19;
									tmp17 = this2;
								}
								_this->buffer = tmp17;
								_this->copyFromArray(((Array< Float >)(array)),null());
								tmp14 = _this;
							}
							this1 = tmp14;
						}
						else{
							bool tmp14 = false;
							if ((tmp14)){
								::lime::utils::ArrayBufferView tmp15;
								{
									::lime::utils::ArrayBufferView tmp16 = ::lime::utils::ArrayBufferView_obj::__new((int)0,(int)6);
									::lime::utils::ArrayBufferView _this = tmp16;
									::haxe::io::Bytes tmp17 = hx::Throw(HX_CSTRING("Invalid field access on null object"));
									::haxe::io::Bytes srcData = tmp17;
									int tmp18 = hx::Throw(HX_CSTRING("Invalid field access on null object"));
									int srcLength = tmp18;
									int tmp19 = hx::Throw(HX_CSTRING("Invalid field access on null object"));
									int srcByteOffset = tmp19;
									int tmp20 = hx::Throw(HX_CSTRING("Invalid field access on null object"));
									int srcElementSize = tmp20;
									int elementSize = _this->bytesPerElement;
									int tmp21 = hx::Throw(HX_CSTRING("Invalid field access on null object"));
									int tmp22 = _this->type;
									bool tmp23 = (tmp21 == tmp22);
									if ((tmp23)){
										int srcLength1 = srcData->length;
										int tmp24 = (srcLength1 - srcByteOffset);
										int cloneLength = tmp24;
										::haxe::io::Bytes tmp25;
										{
											::haxe::io::Bytes this2;
											int tmp26 = cloneLength;
											::haxe::io::Bytes tmp27 = ::haxe::io::Bytes_obj::alloc(tmp26);
											this2 = tmp27;
											tmp25 = this2;
										}
										_this->buffer = tmp25;
										::haxe::io::Bytes tmp26 = srcData;
										int tmp27 = srcByteOffset;
										int tmp28 = cloneLength;
										_this->buffer->blit((int)0,tmp26,tmp27,tmp28);
									}
									else{
										HX_STACK_DO_THROW(HX_HCSTRING("unimplemented","\x09","\x2f","\x74","\xb4"));
									}
									int tmp24 = (_this->bytesPerElement * srcLength);
									_this->byteLength = tmp24;
									_this->byteOffset = (int)0;
									_this->length = srcLength;
									tmp15 = _this;
								}
								this1 = tmp15;
							}
							else{
								bool tmp15 = (buffer != null());
								if ((tmp15)){
									::lime::utils::ArrayBufferView tmp16;
									{
										::lime::utils::ArrayBufferView tmp17 = ::lime::utils::ArrayBufferView_obj::__new((int)0,(int)6);
										::lime::utils::ArrayBufferView _this = tmp17;
										int in_byteOffset = byte_offset;
										bool tmp18 = (in_byteOffset < (int)0);
										if ((tmp18)){
											HX_STACK_DO_THROW(::lime::utils::TAError_obj::RangeError);
										}
										int tmp19 = hx::Mod(in_byteOffset,_this->bytesPerElement);
										bool tmp20 = (tmp19 != (int)0);
										if ((tmp20)){
											HX_STACK_DO_THROW(::lime::utils::TAError_obj::RangeError);
										}
										int bufferByteLength = buffer->length;
										int elementSize = _this->bytesPerElement;
										int newByteLength = bufferByteLength;
										bool tmp21 = (len == null());
										if ((tmp21)){
											int tmp22 = (bufferByteLength - in_byteOffset);
											newByteLength = tmp22;
											int tmp23 = hx::Mod(bufferByteLength,_this->bytesPerElement);
											bool tmp24 = (tmp23 != (int)0);
											if ((tmp24)){
												HX_STACK_DO_THROW(::lime::utils::TAError_obj::RangeError);
											}
											bool tmp25 = (newByteLength < (int)0);
											if ((tmp25)){
												HX_STACK_DO_THROW(::lime::utils::TAError_obj::RangeError);
											}
										}
										else{
											int tmp22 = (len * _this->bytesPerElement);
											newByteLength = tmp22;
											int tmp23 = (in_byteOffset + newByteLength);
											int newRange = tmp23;
											bool tmp24 = (newRange > bufferByteLength);
											if ((tmp24)){
												HX_STACK_DO_THROW(::lime::utils::TAError_obj::RangeError);
											}
										}
										_this->buffer = buffer;
										_this->byteOffset = in_byteOffset;
										_this->byteLength = newByteLength;
										Float tmp22 = (Float(newByteLength) / Float(_this->bytesPerElement));
										int tmp23 = ::Std_obj::_int(tmp22);
										_this->length = tmp23;
										tmp16 = _this;
									}
									this1 = tmp16;
								}
								else{
									HX_STACK_DO_THROW(HX_HCSTRING("Invalid constructor arguments for UInt16Array","\x0a","\xc7","\x2d","\xd5"));
								}
							}
						}
					}
				}
				tmp7 = this1;
			}
			;break;
			case (int)7: {
				::haxe::io::Bytes tmp10 = this->buffer;
				::haxe::io::Bytes buffer = tmp10;
				::lime::utils::ArrayBufferView this1;
				bool tmp11 = false;
				if ((tmp11)){
					::lime::utils::ArrayBufferView tmp12 = ::lime::utils::ArrayBufferView_obj::__new(null(),(int)7);
					this1 = tmp12;
				}
				else{
					bool tmp12 = false;
					if ((tmp12)){
						::lime::utils::ArrayBufferView tmp13;
						{
							::lime::utils::ArrayBufferView tmp14 = ::lime::utils::ArrayBufferView_obj::__new((int)0,(int)7);
							::lime::utils::ArrayBufferView _this = tmp14;
							_this->byteOffset = (int)0;
							int tmp15 = hx::Throw(HX_CSTRING("Invalid field access on null object"));
							_this->length = tmp15;
							int tmp16 = (_this->length * _this->bytesPerElement);
							_this->byteLength = tmp16;
							::haxe::io::Bytes tmp17;
							{
								::haxe::io::Bytes this2;
								int tmp18 = _this->byteLength;
								::haxe::io::Bytes tmp19 = ::haxe::io::Bytes_obj::alloc(tmp18);
								this2 = tmp19;
								tmp17 = this2;
							}
							_this->buffer = tmp17;
							_this->copyFromArray(((Array< Float >)(null())),null());
							tmp13 = _this;
						}
						this1 = tmp13;
					}
					else{
						bool tmp13 = false;
						if ((tmp13)){
							::lime::utils::ArrayBufferView tmp14;
							{
								::lime::utils::ArrayBufferView tmp15 = ::lime::utils::ArrayBufferView_obj::__new((int)0,(int)7);
								::lime::utils::ArrayBufferView _this = tmp15;
								cpp::ArrayBase array = hx::Throw(HX_CSTRING("Invalid field access on null object"));
								_this->byteOffset = (int)0;
								_this->length = array->__Field(HX_HCSTRING("length","\xe6","\x94","\x07","\x9f"), hx::paccDynamic );
								int tmp16 = (_this->length * _this->bytesPerElement);
								_this->byteLength = tmp16;
								::haxe::io::Bytes tmp17;
								{
									::haxe::io::Bytes this2;
									int tmp18 = _this->byteLength;
									::haxe::io::Bytes tmp19 = ::haxe::io::Bytes_obj::alloc(tmp18);
									this2 = tmp19;
									tmp17 = this2;
								}
								_this->buffer = tmp17;
								_this->copyFromArray(((Array< Float >)(array)),null());
								tmp14 = _this;
							}
							this1 = tmp14;
						}
						else{
							bool tmp14 = false;
							if ((tmp14)){
								::lime::utils::ArrayBufferView tmp15;
								{
									::lime::utils::ArrayBufferView tmp16 = ::lime::utils::ArrayBufferView_obj::__new((int)0,(int)7);
									::lime::utils::ArrayBufferView _this = tmp16;
									::haxe::io::Bytes tmp17 = hx::Throw(HX_CSTRING("Invalid field access on null object"));
									::haxe::io::Bytes srcData = tmp17;
									int tmp18 = hx::Throw(HX_CSTRING("Invalid field access on null object"));
									int srcLength = tmp18;
									int tmp19 = hx::Throw(HX_CSTRING("Invalid field access on null object"));
									int srcByteOffset = tmp19;
									int tmp20 = hx::Throw(HX_CSTRING("Invalid field access on null object"));
									int srcElementSize = tmp20;
									int elementSize = _this->bytesPerElement;
									int tmp21 = hx::Throw(HX_CSTRING("Invalid field access on null object"));
									int tmp22 = _this->type;
									bool tmp23 = (tmp21 == tmp22);
									if ((tmp23)){
										int srcLength1 = srcData->length;
										int tmp24 = (srcLength1 - srcByteOffset);
										int cloneLength = tmp24;
										::haxe::io::Bytes tmp25;
										{
											::haxe::io::Bytes this2;
											int tmp26 = cloneLength;
											::haxe::io::Bytes tmp27 = ::haxe::io::Bytes_obj::alloc(tmp26);
											this2 = tmp27;
											tmp25 = this2;
										}
										_this->buffer = tmp25;
										::haxe::io::Bytes tmp26 = srcData;
										int tmp27 = srcByteOffset;
										int tmp28 = cloneLength;
										_this->buffer->blit((int)0,tmp26,tmp27,tmp28);
									}
									else{
										HX_STACK_DO_THROW(HX_HCSTRING("unimplemented","\x09","\x2f","\x74","\xb4"));
									}
									int tmp24 = (_this->bytesPerElement * srcLength);
									_this->byteLength = tmp24;
									_this->byteOffset = (int)0;
									_this->length = srcLength;
									tmp15 = _this;
								}
								this1 = tmp15;
							}
							else{
								bool tmp15 = (buffer != null());
								if ((tmp15)){
									::lime::utils::ArrayBufferView tmp16;
									{
										::lime::utils::ArrayBufferView tmp17 = ::lime::utils::ArrayBufferView_obj::__new((int)0,(int)7);
										::lime::utils::ArrayBufferView _this = tmp17;
										int in_byteOffset = byte_offset;
										bool tmp18 = (in_byteOffset < (int)0);
										if ((tmp18)){
											HX_STACK_DO_THROW(::lime::utils::TAError_obj::RangeError);
										}
										int tmp19 = hx::Mod(in_byteOffset,_this->bytesPerElement);
										bool tmp20 = (tmp19 != (int)0);
										if ((tmp20)){
											HX_STACK_DO_THROW(::lime::utils::TAError_obj::RangeError);
										}
										int bufferByteLength = buffer->length;
										int elementSize = _this->bytesPerElement;
										int newByteLength = bufferByteLength;
										bool tmp21 = (len == null());
										if ((tmp21)){
											int tmp22 = (bufferByteLength - in_byteOffset);
											newByteLength = tmp22;
											int tmp23 = hx::Mod(bufferByteLength,_this->bytesPerElement);
											bool tmp24 = (tmp23 != (int)0);
											if ((tmp24)){
												HX_STACK_DO_THROW(::lime::utils::TAError_obj::RangeError);
											}
											bool tmp25 = (newByteLength < (int)0);
											if ((tmp25)){
												HX_STACK_DO_THROW(::lime::utils::TAError_obj::RangeError);
											}
										}
										else{
											int tmp22 = (len * _this->bytesPerElement);
											newByteLength = tmp22;
											int tmp23 = (in_byteOffset + newByteLength);
											int newRange = tmp23;
											bool tmp24 = (newRange > bufferByteLength);
											if ((tmp24)){
												HX_STACK_DO_THROW(::lime::utils::TAError_obj::RangeError);
											}
										}
										_this->buffer = buffer;
										_this->byteOffset = in_byteOffset;
										_this->byteLength = newByteLength;
										Float tmp22 = (Float(newByteLength) / Float(_this->bytesPerElement));
										int tmp23 = ::Std_obj::_int(tmp22);
										_this->length = tmp23;
										tmp16 = _this;
									}
									this1 = tmp16;
								}
								else{
									HX_STACK_DO_THROW(HX_HCSTRING("Invalid constructor arguments for UInt32Array","\x10","\x43","\xeb","\x8e"));
								}
							}
						}
					}
				}
				tmp7 = this1;
			}
			;break;
			case (int)8: {
				::haxe::io::Bytes tmp10 = this->buffer;
				::haxe::io::Bytes buffer = tmp10;
				::lime::utils::ArrayBufferView this1;
				bool tmp11 = false;
				if ((tmp11)){
					::lime::utils::ArrayBufferView tmp12 = ::lime::utils::ArrayBufferView_obj::__new(null(),(int)8);
					this1 = tmp12;
				}
				else{
					bool tmp12 = false;
					if ((tmp12)){
						::lime::utils::ArrayBufferView tmp13;
						{
							::lime::utils::ArrayBufferView tmp14 = ::lime::utils::ArrayBufferView_obj::__new((int)0,(int)8);
							::lime::utils::ArrayBufferView _this = tmp14;
							_this->byteOffset = (int)0;
							int tmp15 = hx::Throw(HX_CSTRING("Invalid field access on null object"));
							_this->length = tmp15;
							int tmp16 = (_this->length * _this->bytesPerElement);
							_this->byteLength = tmp16;
							::haxe::io::Bytes tmp17;
							{
								::haxe::io::Bytes this2;
								int tmp18 = _this->byteLength;
								::haxe::io::Bytes tmp19 = ::haxe::io::Bytes_obj::alloc(tmp18);
								this2 = tmp19;
								tmp17 = this2;
							}
							_this->buffer = tmp17;
							_this->copyFromArray(((Array< Float >)(null())),null());
							tmp13 = _this;
						}
						this1 = tmp13;
					}
					else{
						bool tmp13 = false;
						if ((tmp13)){
							::lime::utils::ArrayBufferView tmp14;
							{
								::lime::utils::ArrayBufferView tmp15 = ::lime::utils::ArrayBufferView_obj::__new((int)0,(int)8);
								::lime::utils::ArrayBufferView _this = tmp15;
								cpp::ArrayBase array = hx::Throw(HX_CSTRING("Invalid field access on null object"));
								_this->byteOffset = (int)0;
								_this->length = array->__Field(HX_HCSTRING("length","\xe6","\x94","\x07","\x9f"), hx::paccDynamic );
								int tmp16 = (_this->length * _this->bytesPerElement);
								_this->byteLength = tmp16;
								::haxe::io::Bytes tmp17;
								{
									::haxe::io::Bytes this2;
									int tmp18 = _this->byteLength;
									::haxe::io::Bytes tmp19 = ::haxe::io::Bytes_obj::alloc(tmp18);
									this2 = tmp19;
									tmp17 = this2;
								}
								_this->buffer = tmp17;
								_this->copyFromArray(((Array< Float >)(array)),null());
								tmp14 = _this;
							}
							this1 = tmp14;
						}
						else{
							bool tmp14 = false;
							if ((tmp14)){
								::lime::utils::ArrayBufferView tmp15;
								{
									::lime::utils::ArrayBufferView tmp16 = ::lime::utils::ArrayBufferView_obj::__new((int)0,(int)8);
									::lime::utils::ArrayBufferView _this = tmp16;
									::haxe::io::Bytes tmp17 = hx::Throw(HX_CSTRING("Invalid field access on null object"));
									::haxe::io::Bytes srcData = tmp17;
									int tmp18 = hx::Throw(HX_CSTRING("Invalid field access on null object"));
									int srcLength = tmp18;
									int tmp19 = hx::Throw(HX_CSTRING("Invalid field access on null object"));
									int srcByteOffset = tmp19;
									int tmp20 = hx::Throw(HX_CSTRING("Invalid field access on null object"));
									int srcElementSize = tmp20;
									int elementSize = _this->bytesPerElement;
									int tmp21 = hx::Throw(HX_CSTRING("Invalid field access on null object"));
									int tmp22 = _this->type;
									bool tmp23 = (tmp21 == tmp22);
									if ((tmp23)){
										int srcLength1 = srcData->length;
										int tmp24 = (srcLength1 - srcByteOffset);
										int cloneLength = tmp24;
										::haxe::io::Bytes tmp25;
										{
											::haxe::io::Bytes this2;
											int tmp26 = cloneLength;
											::haxe::io::Bytes tmp27 = ::haxe::io::Bytes_obj::alloc(tmp26);
											this2 = tmp27;
											tmp25 = this2;
										}
										_this->buffer = tmp25;
										::haxe::io::Bytes tmp26 = srcData;
										int tmp27 = srcByteOffset;
										int tmp28 = cloneLength;
										_this->buffer->blit((int)0,tmp26,tmp27,tmp28);
									}
									else{
										HX_STACK_DO_THROW(HX_HCSTRING("unimplemented","\x09","\x2f","\x74","\xb4"));
									}
									int tmp24 = (_this->bytesPerElement * srcLength);
									_this->byteLength = tmp24;
									_this->byteOffset = (int)0;
									_this->length = srcLength;
									tmp15 = _this;
								}
								this1 = tmp15;
							}
							else{
								bool tmp15 = (buffer != null());
								if ((tmp15)){
									::lime::utils::ArrayBufferView tmp16;
									{
										::lime::utils::ArrayBufferView tmp17 = ::lime::utils::ArrayBufferView_obj::__new((int)0,(int)8);
										::lime::utils::ArrayBufferView _this = tmp17;
										int in_byteOffset = byte_offset;
										bool tmp18 = (in_byteOffset < (int)0);
										if ((tmp18)){
											HX_STACK_DO_THROW(::lime::utils::TAError_obj::RangeError);
										}
										int tmp19 = hx::Mod(in_byteOffset,_this->bytesPerElement);
										bool tmp20 = (tmp19 != (int)0);
										if ((tmp20)){
											HX_STACK_DO_THROW(::lime::utils::TAError_obj::RangeError);
										}
										int bufferByteLength = buffer->length;
										int elementSize = _this->bytesPerElement;
										int newByteLength = bufferByteLength;
										bool tmp21 = (len == null());
										if ((tmp21)){
											int tmp22 = (bufferByteLength - in_byteOffset);
											newByteLength = tmp22;
											int tmp23 = hx::Mod(bufferByteLength,_this->bytesPerElement);
											bool tmp24 = (tmp23 != (int)0);
											if ((tmp24)){
												HX_STACK_DO_THROW(::lime::utils::TAError_obj::RangeError);
											}
											bool tmp25 = (newByteLength < (int)0);
											if ((tmp25)){
												HX_STACK_DO_THROW(::lime::utils::TAError_obj::RangeError);
											}
										}
										else{
											int tmp22 = (len * _this->bytesPerElement);
											newByteLength = tmp22;
											int tmp23 = (in_byteOffset + newByteLength);
											int newRange = tmp23;
											bool tmp24 = (newRange > bufferByteLength);
											if ((tmp24)){
												HX_STACK_DO_THROW(::lime::utils::TAError_obj::RangeError);
											}
										}
										_this->buffer = buffer;
										_this->byteOffset = in_byteOffset;
										_this->byteLength = newByteLength;
										Float tmp22 = (Float(newByteLength) / Float(_this->bytesPerElement));
										int tmp23 = ::Std_obj::_int(tmp22);
										_this->length = tmp23;
										tmp16 = _this;
									}
									this1 = tmp16;
								}
								else{
									HX_STACK_DO_THROW(HX_HCSTRING("Invalid constructor arguments for Float32Array","\x8e","\xc1","\xf4","\xd4"));
								}
							}
						}
					}
				}
				tmp7 = this1;
			}
			;break;
			case (int)9: {
				::haxe::io::Bytes tmp10 = this->buffer;
				::haxe::io::Bytes buffer = tmp10;
				::lime::utils::ArrayBufferView this1;
				bool tmp11 = false;
				if ((tmp11)){
					::lime::utils::ArrayBufferView tmp12 = ::lime::utils::ArrayBufferView_obj::__new(null(),(int)9);
					this1 = tmp12;
				}
				else{
					bool tmp12 = false;
					if ((tmp12)){
						::lime::utils::ArrayBufferView tmp13;
						{
							::lime::utils::ArrayBufferView tmp14 = ::lime::utils::ArrayBufferView_obj::__new((int)0,(int)9);
							::lime::utils::ArrayBufferView _this = tmp14;
							_this->byteOffset = (int)0;
							int tmp15 = hx::Throw(HX_CSTRING("Invalid field access on null object"));
							_this->length = tmp15;
							int tmp16 = (_this->length * _this->bytesPerElement);
							_this->byteLength = tmp16;
							::haxe::io::Bytes tmp17;
							{
								::haxe::io::Bytes this2;
								int tmp18 = _this->byteLength;
								::haxe::io::Bytes tmp19 = ::haxe::io::Bytes_obj::alloc(tmp18);
								this2 = tmp19;
								tmp17 = this2;
							}
							_this->buffer = tmp17;
							_this->copyFromArray(((Array< Float >)(null())),null());
							tmp13 = _this;
						}
						this1 = tmp13;
					}
					else{
						bool tmp13 = false;
						if ((tmp13)){
							::lime::utils::ArrayBufferView tmp14;
							{
								::lime::utils::ArrayBufferView tmp15 = ::lime::utils::ArrayBufferView_obj::__new((int)0,(int)9);
								::lime::utils::ArrayBufferView _this = tmp15;
								cpp::ArrayBase array = hx::Throw(HX_CSTRING("Invalid field access on null object"));
								_this->byteOffset = (int)0;
								_this->length = array->__Field(HX_HCSTRING("length","\xe6","\x94","\x07","\x9f"), hx::paccDynamic );
								int tmp16 = (_this->length * _this->bytesPerElement);
								_this->byteLength = tmp16;
								::haxe::io::Bytes tmp17;
								{
									::haxe::io::Bytes this2;
									int tmp18 = _this->byteLength;
									::haxe::io::Bytes tmp19 = ::haxe::io::Bytes_obj::alloc(tmp18);
									this2 = tmp19;
									tmp17 = this2;
								}
								_this->buffer = tmp17;
								_this->copyFromArray(((Array< Float >)(array)),null());
								tmp14 = _this;
							}
							this1 = tmp14;
						}
						else{
							bool tmp14 = false;
							if ((tmp14)){
								::lime::utils::ArrayBufferView tmp15;
								{
									::lime::utils::ArrayBufferView tmp16 = ::lime::utils::ArrayBufferView_obj::__new((int)0,(int)9);
									::lime::utils::ArrayBufferView _this = tmp16;
									::haxe::io::Bytes tmp17 = hx::Throw(HX_CSTRING("Invalid field access on null object"));
									::haxe::io::Bytes srcData = tmp17;
									int tmp18 = hx::Throw(HX_CSTRING("Invalid field access on null object"));
									int srcLength = tmp18;
									int tmp19 = hx::Throw(HX_CSTRING("Invalid field access on null object"));
									int srcByteOffset = tmp19;
									int tmp20 = hx::Throw(HX_CSTRING("Invalid field access on null object"));
									int srcElementSize = tmp20;
									int elementSize = _this->bytesPerElement;
									int tmp21 = hx::Throw(HX_CSTRING("Invalid field access on null object"));
									int tmp22 = _this->type;
									bool tmp23 = (tmp21 == tmp22);
									if ((tmp23)){
										int srcLength1 = srcData->length;
										int tmp24 = (srcLength1 - srcByteOffset);
										int cloneLength = tmp24;
										::haxe::io::Bytes tmp25;
										{
											::haxe::io::Bytes this2;
											int tmp26 = cloneLength;
											::haxe::io::Bytes tmp27 = ::haxe::io::Bytes_obj::alloc(tmp26);
											this2 = tmp27;
											tmp25 = this2;
										}
										_this->buffer = tmp25;
										::haxe::io::Bytes tmp26 = srcData;
										int tmp27 = srcByteOffset;
										int tmp28 = cloneLength;
										_this->buffer->blit((int)0,tmp26,tmp27,tmp28);
									}
									else{
										HX_STACK_DO_THROW(HX_HCSTRING("unimplemented","\x09","\x2f","\x74","\xb4"));
									}
									int tmp24 = (_this->bytesPerElement * srcLength);
									_this->byteLength = tmp24;
									_this->byteOffset = (int)0;
									_this->length = srcLength;
									tmp15 = _this;
								}
								this1 = tmp15;
							}
							else{
								bool tmp15 = (buffer != null());
								if ((tmp15)){
									::lime::utils::ArrayBufferView tmp16;
									{
										::lime::utils::ArrayBufferView tmp17 = ::lime::utils::ArrayBufferView_obj::__new((int)0,(int)9);
										::lime::utils::ArrayBufferView _this = tmp17;
										int in_byteOffset = byte_offset;
										bool tmp18 = (in_byteOffset < (int)0);
										if ((tmp18)){
											HX_STACK_DO_THROW(::lime::utils::TAError_obj::RangeError);
										}
										int tmp19 = hx::Mod(in_byteOffset,_this->bytesPerElement);
										bool tmp20 = (tmp19 != (int)0);
										if ((tmp20)){
											HX_STACK_DO_THROW(::lime::utils::TAError_obj::RangeError);
										}
										int bufferByteLength = buffer->length;
										int elementSize = _this->bytesPerElement;
										int newByteLength = bufferByteLength;
										bool tmp21 = (len == null());
										if ((tmp21)){
											int tmp22 = (bufferByteLength - in_byteOffset);
											newByteLength = tmp22;
											int tmp23 = hx::Mod(bufferByteLength,_this->bytesPerElement);
											bool tmp24 = (tmp23 != (int)0);
											if ((tmp24)){
												HX_STACK_DO_THROW(::lime::utils::TAError_obj::RangeError);
											}
											bool tmp25 = (newByteLength < (int)0);
											if ((tmp25)){
												HX_STACK_DO_THROW(::lime::utils::TAError_obj::RangeError);
											}
										}
										else{
											int tmp22 = (len * _this->bytesPerElement);
											newByteLength = tmp22;
											int tmp23 = (in_byteOffset + newByteLength);
											int newRange = tmp23;
											bool tmp24 = (newRange > bufferByteLength);
											if ((tmp24)){
												HX_STACK_DO_THROW(::lime::utils::TAError_obj::RangeError);
											}
										}
										_this->buffer = buffer;
										_this->byteOffset = in_byteOffset;
										_this->byteLength = newByteLength;
										Float tmp22 = (Float(newByteLength) / Float(_this->bytesPerElement));
										int tmp23 = ::Std_obj::_int(tmp22);
										_this->length = tmp23;
										tmp16 = _this;
									}
									this1 = tmp16;
								}
								else{
									HX_STACK_DO_THROW(HX_HCSTRING("Invalid constructor arguments for Float64Array","\x8f","\xde","\x6b","\x1e"));
								}
							}
						}
					}
				}
				tmp7 = this1;
			}
			;break;
			case (int)0: {
				HX_STACK_DO_THROW(HX_HCSTRING("subarray on a blank ArrayBufferView","\x39","\x87","\xfd","\x19"));
			}
			;break;
		}
	}
	::lime::utils::ArrayBufferView view = tmp7;
	::lime::utils::ArrayBufferView tmp8 = view;
	return tmp8;
}


HX_DEFINE_DYNAMIC_FUNC2(ArrayBufferView_obj,subarray_lime_utils_UInt32Array,return )

::lime::utils::ArrayBufferView ArrayBufferView_obj::subarray_lime_utils_Int32Array( int begin,Dynamic end){
	bool tmp = (end == null());
	if ((tmp)){
		int tmp1 = this->length;
		end = tmp1;
	}
	int tmp1 = (end - begin);
	int len = tmp1;
	int tmp2 = begin;
	int tmp3 = this->bytesPerElement;
	int tmp4 = (tmp2 * tmp3);
	int tmp5 = this->byteOffset;
	int tmp6 = (tmp4 + tmp5);
	int byte_offset = tmp6;
	::lime::utils::ArrayBufferView tmp7;
	{
		int tmp8 = this->type;
		int _g = tmp8;
		int tmp9 = _g;
		switch( (int)(tmp9)){
			case (int)1: {
				::haxe::io::Bytes tmp10 = this->buffer;
				::haxe::io::Bytes buffer = tmp10;
				::lime::utils::ArrayBufferView this1;
				bool tmp11 = false;
				if ((tmp11)){
					::lime::utils::ArrayBufferView tmp12 = ::lime::utils::ArrayBufferView_obj::__new(null(),(int)1);
					this1 = tmp12;
				}
				else{
					bool tmp12 = false;
					if ((tmp12)){
						::lime::utils::ArrayBufferView tmp13;
						{
							::lime::utils::ArrayBufferView tmp14 = ::lime::utils::ArrayBufferView_obj::__new((int)0,(int)1);
							::lime::utils::ArrayBufferView _this = tmp14;
							_this->byteOffset = (int)0;
							int tmp15 = hx::Throw(HX_CSTRING("Invalid field access on null object"));
							_this->length = tmp15;
							int tmp16 = (_this->length * _this->bytesPerElement);
							_this->byteLength = tmp16;
							::haxe::io::Bytes tmp17;
							{
								::haxe::io::Bytes this2;
								int tmp18 = _this->byteLength;
								::haxe::io::Bytes tmp19 = ::haxe::io::Bytes_obj::alloc(tmp18);
								this2 = tmp19;
								tmp17 = this2;
							}
							_this->buffer = tmp17;
							_this->copyFromArray(((Array< Float >)(null())),null());
							tmp13 = _this;
						}
						this1 = tmp13;
					}
					else{
						bool tmp13 = false;
						if ((tmp13)){
							::lime::utils::ArrayBufferView tmp14;
							{
								::lime::utils::ArrayBufferView tmp15 = ::lime::utils::ArrayBufferView_obj::__new((int)0,(int)1);
								::lime::utils::ArrayBufferView _this = tmp15;
								cpp::ArrayBase array = hx::Throw(HX_CSTRING("Invalid field access on null object"));
								_this->byteOffset = (int)0;
								_this->length = array->__Field(HX_HCSTRING("length","\xe6","\x94","\x07","\x9f"), hx::paccDynamic );
								int tmp16 = (_this->length * _this->bytesPerElement);
								_this->byteLength = tmp16;
								::haxe::io::Bytes tmp17;
								{
									::haxe::io::Bytes this2;
									int tmp18 = _this->byteLength;
									::haxe::io::Bytes tmp19 = ::haxe::io::Bytes_obj::alloc(tmp18);
									this2 = tmp19;
									tmp17 = this2;
								}
								_this->buffer = tmp17;
								_this->copyFromArray(((Array< Float >)(array)),null());
								tmp14 = _this;
							}
							this1 = tmp14;
						}
						else{
							bool tmp14 = false;
							if ((tmp14)){
								::lime::utils::ArrayBufferView tmp15;
								{
									::lime::utils::ArrayBufferView tmp16 = ::lime::utils::ArrayBufferView_obj::__new((int)0,(int)1);
									::lime::utils::ArrayBufferView _this = tmp16;
									::haxe::io::Bytes tmp17 = hx::Throw(HX_CSTRING("Invalid field access on null object"));
									::haxe::io::Bytes srcData = tmp17;
									int tmp18 = hx::Throw(HX_CSTRING("Invalid field access on null object"));
									int srcLength = tmp18;
									int tmp19 = hx::Throw(HX_CSTRING("Invalid field access on null object"));
									int srcByteOffset = tmp19;
									int tmp20 = hx::Throw(HX_CSTRING("Invalid field access on null object"));
									int srcElementSize = tmp20;
									int elementSize = _this->bytesPerElement;
									int tmp21 = hx::Throw(HX_CSTRING("Invalid field access on null object"));
									int tmp22 = _this->type;
									bool tmp23 = (tmp21 == tmp22);
									if ((tmp23)){
										int srcLength1 = srcData->length;
										int tmp24 = (srcLength1 - srcByteOffset);
										int cloneLength = tmp24;
										::haxe::io::Bytes tmp25;
										{
											::haxe::io::Bytes this2;
											int tmp26 = cloneLength;
											::haxe::io::Bytes tmp27 = ::haxe::io::Bytes_obj::alloc(tmp26);
											this2 = tmp27;
											tmp25 = this2;
										}
										_this->buffer = tmp25;
										::haxe::io::Bytes tmp26 = srcData;
										int tmp27 = srcByteOffset;
										int tmp28 = cloneLength;
										_this->buffer->blit((int)0,tmp26,tmp27,tmp28);
									}
									else{
										HX_STACK_DO_THROW(HX_HCSTRING("unimplemented","\x09","\x2f","\x74","\xb4"));
									}
									int tmp24 = (_this->bytesPerElement * srcLength);
									_this->byteLength = tmp24;
									_this->byteOffset = (int)0;
									_this->length = srcLength;
									tmp15 = _this;
								}
								this1 = tmp15;
							}
							else{
								bool tmp15 = (buffer != null());
								if ((tmp15)){
									::lime::utils::ArrayBufferView tmp16;
									{
										::lime::utils::ArrayBufferView tmp17 = ::lime::utils::ArrayBufferView_obj::__new((int)0,(int)1);
										::lime::utils::ArrayBufferView _this = tmp17;
										int in_byteOffset = byte_offset;
										bool tmp18 = (in_byteOffset < (int)0);
										if ((tmp18)){
											HX_STACK_DO_THROW(::lime::utils::TAError_obj::RangeError);
										}
										int tmp19 = hx::Mod(in_byteOffset,_this->bytesPerElement);
										bool tmp20 = (tmp19 != (int)0);
										if ((tmp20)){
											HX_STACK_DO_THROW(::lime::utils::TAError_obj::RangeError);
										}
										int bufferByteLength = buffer->length;
										int elementSize = _this->bytesPerElement;
										int newByteLength = bufferByteLength;
										bool tmp21 = (len == null());
										if ((tmp21)){
											int tmp22 = (bufferByteLength - in_byteOffset);
											newByteLength = tmp22;
											int tmp23 = hx::Mod(bufferByteLength,_this->bytesPerElement);
											bool tmp24 = (tmp23 != (int)0);
											if ((tmp24)){
												HX_STACK_DO_THROW(::lime::utils::TAError_obj::RangeError);
											}
											bool tmp25 = (newByteLength < (int)0);
											if ((tmp25)){
												HX_STACK_DO_THROW(::lime::utils::TAError_obj::RangeError);
											}
										}
										else{
											int tmp22 = (len * _this->bytesPerElement);
											newByteLength = tmp22;
											int tmp23 = (in_byteOffset + newByteLength);
											int newRange = tmp23;
											bool tmp24 = (newRange > bufferByteLength);
											if ((tmp24)){
												HX_STACK_DO_THROW(::lime::utils::TAError_obj::RangeError);
											}
										}
										_this->buffer = buffer;
										_this->byteOffset = in_byteOffset;
										_this->byteLength = newByteLength;
										Float tmp22 = (Float(newByteLength) / Float(_this->bytesPerElement));
										int tmp23 = ::Std_obj::_int(tmp22);
										_this->length = tmp23;
										tmp16 = _this;
									}
									this1 = tmp16;
								}
								else{
									HX_STACK_DO_THROW(HX_HCSTRING("Invalid constructor arguments for Int8Array","\x40","\x53","\xda","\x77"));
								}
							}
						}
					}
				}
				tmp7 = this1;
			}
			;break;
			case (int)2: {
				::haxe::io::Bytes tmp10 = this->buffer;
				::haxe::io::Bytes buffer = tmp10;
				::lime::utils::ArrayBufferView this1;
				bool tmp11 = false;
				if ((tmp11)){
					::lime::utils::ArrayBufferView tmp12 = ::lime::utils::ArrayBufferView_obj::__new(null(),(int)2);
					this1 = tmp12;
				}
				else{
					bool tmp12 = false;
					if ((tmp12)){
						::lime::utils::ArrayBufferView tmp13;
						{
							::lime::utils::ArrayBufferView tmp14 = ::lime::utils::ArrayBufferView_obj::__new((int)0,(int)2);
							::lime::utils::ArrayBufferView _this = tmp14;
							_this->byteOffset = (int)0;
							int tmp15 = hx::Throw(HX_CSTRING("Invalid field access on null object"));
							_this->length = tmp15;
							int tmp16 = (_this->length * _this->bytesPerElement);
							_this->byteLength = tmp16;
							::haxe::io::Bytes tmp17;
							{
								::haxe::io::Bytes this2;
								int tmp18 = _this->byteLength;
								::haxe::io::Bytes tmp19 = ::haxe::io::Bytes_obj::alloc(tmp18);
								this2 = tmp19;
								tmp17 = this2;
							}
							_this->buffer = tmp17;
							_this->copyFromArray(((Array< Float >)(null())),null());
							tmp13 = _this;
						}
						this1 = tmp13;
					}
					else{
						bool tmp13 = false;
						if ((tmp13)){
							::lime::utils::ArrayBufferView tmp14;
							{
								::lime::utils::ArrayBufferView tmp15 = ::lime::utils::ArrayBufferView_obj::__new((int)0,(int)2);
								::lime::utils::ArrayBufferView _this = tmp15;
								cpp::ArrayBase array = hx::Throw(HX_CSTRING("Invalid field access on null object"));
								_this->byteOffset = (int)0;
								_this->length = array->__Field(HX_HCSTRING("length","\xe6","\x94","\x07","\x9f"), hx::paccDynamic );
								int tmp16 = (_this->length * _this->bytesPerElement);
								_this->byteLength = tmp16;
								::haxe::io::Bytes tmp17;
								{
									::haxe::io::Bytes this2;
									int tmp18 = _this->byteLength;
									::haxe::io::Bytes tmp19 = ::haxe::io::Bytes_obj::alloc(tmp18);
									this2 = tmp19;
									tmp17 = this2;
								}
								_this->buffer = tmp17;
								_this->copyFromArray(((Array< Float >)(array)),null());
								tmp14 = _this;
							}
							this1 = tmp14;
						}
						else{
							bool tmp14 = false;
							if ((tmp14)){
								::lime::utils::ArrayBufferView tmp15;
								{
									::lime::utils::ArrayBufferView tmp16 = ::lime::utils::ArrayBufferView_obj::__new((int)0,(int)2);
									::lime::utils::ArrayBufferView _this = tmp16;
									::haxe::io::Bytes tmp17 = hx::Throw(HX_CSTRING("Invalid field access on null object"));
									::haxe::io::Bytes srcData = tmp17;
									int tmp18 = hx::Throw(HX_CSTRING("Invalid field access on null object"));
									int srcLength = tmp18;
									int tmp19 = hx::Throw(HX_CSTRING("Invalid field access on null object"));
									int srcByteOffset = tmp19;
									int tmp20 = hx::Throw(HX_CSTRING("Invalid field access on null object"));
									int srcElementSize = tmp20;
									int elementSize = _this->bytesPerElement;
									int tmp21 = hx::Throw(HX_CSTRING("Invalid field access on null object"));
									int tmp22 = _this->type;
									bool tmp23 = (tmp21 == tmp22);
									if ((tmp23)){
										int srcLength1 = srcData->length;
										int tmp24 = (srcLength1 - srcByteOffset);
										int cloneLength = tmp24;
										::haxe::io::Bytes tmp25;
										{
											::haxe::io::Bytes this2;
											int tmp26 = cloneLength;
											::haxe::io::Bytes tmp27 = ::haxe::io::Bytes_obj::alloc(tmp26);
											this2 = tmp27;
											tmp25 = this2;
										}
										_this->buffer = tmp25;
										::haxe::io::Bytes tmp26 = srcData;
										int tmp27 = srcByteOffset;
										int tmp28 = cloneLength;
										_this->buffer->blit((int)0,tmp26,tmp27,tmp28);
									}
									else{
										HX_STACK_DO_THROW(HX_HCSTRING("unimplemented","\x09","\x2f","\x74","\xb4"));
									}
									int tmp24 = (_this->bytesPerElement * srcLength);
									_this->byteLength = tmp24;
									_this->byteOffset = (int)0;
									_this->length = srcLength;
									tmp15 = _this;
								}
								this1 = tmp15;
							}
							else{
								bool tmp15 = (buffer != null());
								if ((tmp15)){
									::lime::utils::ArrayBufferView tmp16;
									{
										::lime::utils::ArrayBufferView tmp17 = ::lime::utils::ArrayBufferView_obj::__new((int)0,(int)2);
										::lime::utils::ArrayBufferView _this = tmp17;
										int in_byteOffset = byte_offset;
										bool tmp18 = (in_byteOffset < (int)0);
										if ((tmp18)){
											HX_STACK_DO_THROW(::lime::utils::TAError_obj::RangeError);
										}
										int tmp19 = hx::Mod(in_byteOffset,_this->bytesPerElement);
										bool tmp20 = (tmp19 != (int)0);
										if ((tmp20)){
											HX_STACK_DO_THROW(::lime::utils::TAError_obj::RangeError);
										}
										int bufferByteLength = buffer->length;
										int elementSize = _this->bytesPerElement;
										int newByteLength = bufferByteLength;
										bool tmp21 = (len == null());
										if ((tmp21)){
											int tmp22 = (bufferByteLength - in_byteOffset);
											newByteLength = tmp22;
											int tmp23 = hx::Mod(bufferByteLength,_this->bytesPerElement);
											bool tmp24 = (tmp23 != (int)0);
											if ((tmp24)){
												HX_STACK_DO_THROW(::lime::utils::TAError_obj::RangeError);
											}
											bool tmp25 = (newByteLength < (int)0);
											if ((tmp25)){
												HX_STACK_DO_THROW(::lime::utils::TAError_obj::RangeError);
											}
										}
										else{
											int tmp22 = (len * _this->bytesPerElement);
											newByteLength = tmp22;
											int tmp23 = (in_byteOffset + newByteLength);
											int newRange = tmp23;
											bool tmp24 = (newRange > bufferByteLength);
											if ((tmp24)){
												HX_STACK_DO_THROW(::lime::utils::TAError_obj::RangeError);
											}
										}
										_this->buffer = buffer;
										_this->byteOffset = in_byteOffset;
										_this->byteLength = newByteLength;
										Float tmp22 = (Float(newByteLength) / Float(_this->bytesPerElement));
										int tmp23 = ::Std_obj::_int(tmp22);
										_this->length = tmp23;
										tmp16 = _this;
									}
									this1 = tmp16;
								}
								else{
									HX_STACK_DO_THROW(HX_HCSTRING("Invalid constructor arguments for Int16Array","\x95","\xb2","\x95","\xa7"));
								}
							}
						}
					}
				}
				tmp7 = this1;
			}
			;break;
			case (int)3: {
				::haxe::io::Bytes tmp10 = this->buffer;
				::haxe::io::Bytes buffer = tmp10;
				::lime::utils::ArrayBufferView this1;
				bool tmp11 = false;
				if ((tmp11)){
					::lime::utils::ArrayBufferView tmp12 = ::lime::utils::ArrayBufferView_obj::__new(null(),(int)3);
					this1 = tmp12;
				}
				else{
					bool tmp12 = false;
					if ((tmp12)){
						::lime::utils::ArrayBufferView tmp13;
						{
							::lime::utils::ArrayBufferView tmp14 = ::lime::utils::ArrayBufferView_obj::__new((int)0,(int)3);
							::lime::utils::ArrayBufferView _this = tmp14;
							_this->byteOffset = (int)0;
							int tmp15 = hx::Throw(HX_CSTRING("Invalid field access on null object"));
							_this->length = tmp15;
							int tmp16 = (_this->length * _this->bytesPerElement);
							_this->byteLength = tmp16;
							::haxe::io::Bytes tmp17;
							{
								::haxe::io::Bytes this2;
								int tmp18 = _this->byteLength;
								::haxe::io::Bytes tmp19 = ::haxe::io::Bytes_obj::alloc(tmp18);
								this2 = tmp19;
								tmp17 = this2;
							}
							_this->buffer = tmp17;
							_this->copyFromArray(((Array< Float >)(null())),null());
							tmp13 = _this;
						}
						this1 = tmp13;
					}
					else{
						bool tmp13 = false;
						if ((tmp13)){
							::lime::utils::ArrayBufferView tmp14;
							{
								::lime::utils::ArrayBufferView tmp15 = ::lime::utils::ArrayBufferView_obj::__new((int)0,(int)3);
								::lime::utils::ArrayBufferView _this = tmp15;
								cpp::ArrayBase array = hx::Throw(HX_CSTRING("Invalid field access on null object"));
								_this->byteOffset = (int)0;
								_this->length = array->__Field(HX_HCSTRING("length","\xe6","\x94","\x07","\x9f"), hx::paccDynamic );
								int tmp16 = (_this->length * _this->bytesPerElement);
								_this->byteLength = tmp16;
								::haxe::io::Bytes tmp17;
								{
									::haxe::io::Bytes this2;
									int tmp18 = _this->byteLength;
									::haxe::io::Bytes tmp19 = ::haxe::io::Bytes_obj::alloc(tmp18);
									this2 = tmp19;
									tmp17 = this2;
								}
								_this->buffer = tmp17;
								_this->copyFromArray(((Array< Float >)(array)),null());
								tmp14 = _this;
							}
							this1 = tmp14;
						}
						else{
							bool tmp14 = false;
							if ((tmp14)){
								::lime::utils::ArrayBufferView tmp15;
								{
									::lime::utils::ArrayBufferView tmp16 = ::lime::utils::ArrayBufferView_obj::__new((int)0,(int)3);
									::lime::utils::ArrayBufferView _this = tmp16;
									::haxe::io::Bytes tmp17 = hx::Throw(HX_CSTRING("Invalid field access on null object"));
									::haxe::io::Bytes srcData = tmp17;
									int tmp18 = hx::Throw(HX_CSTRING("Invalid field access on null object"));
									int srcLength = tmp18;
									int tmp19 = hx::Throw(HX_CSTRING("Invalid field access on null object"));
									int srcByteOffset = tmp19;
									int tmp20 = hx::Throw(HX_CSTRING("Invalid field access on null object"));
									int srcElementSize = tmp20;
									int elementSize = _this->bytesPerElement;
									int tmp21 = hx::Throw(HX_CSTRING("Invalid field access on null object"));
									int tmp22 = _this->type;
									bool tmp23 = (tmp21 == tmp22);
									if ((tmp23)){
										int srcLength1 = srcData->length;
										int tmp24 = (srcLength1 - srcByteOffset);
										int cloneLength = tmp24;
										::haxe::io::Bytes tmp25;
										{
											::haxe::io::Bytes this2;
											int tmp26 = cloneLength;
											::haxe::io::Bytes tmp27 = ::haxe::io::Bytes_obj::alloc(tmp26);
											this2 = tmp27;
											tmp25 = this2;
										}
										_this->buffer = tmp25;
										::haxe::io::Bytes tmp26 = srcData;
										int tmp27 = srcByteOffset;
										int tmp28 = cloneLength;
										_this->buffer->blit((int)0,tmp26,tmp27,tmp28);
									}
									else{
										HX_STACK_DO_THROW(HX_HCSTRING("unimplemented","\x09","\x2f","\x74","\xb4"));
									}
									int tmp24 = (_this->bytesPerElement * srcLength);
									_this->byteLength = tmp24;
									_this->byteOffset = (int)0;
									_this->length = srcLength;
									tmp15 = _this;
								}
								this1 = tmp15;
							}
							else{
								bool tmp15 = (buffer != null());
								if ((tmp15)){
									::lime::utils::ArrayBufferView tmp16;
									{
										::lime::utils::ArrayBufferView tmp17 = ::lime::utils::ArrayBufferView_obj::__new((int)0,(int)3);
										::lime::utils::ArrayBufferView _this = tmp17;
										int in_byteOffset = byte_offset;
										bool tmp18 = (in_byteOffset < (int)0);
										if ((tmp18)){
											HX_STACK_DO_THROW(::lime::utils::TAError_obj::RangeError);
										}
										int tmp19 = hx::Mod(in_byteOffset,_this->bytesPerElement);
										bool tmp20 = (tmp19 != (int)0);
										if ((tmp20)){
											HX_STACK_DO_THROW(::lime::utils::TAError_obj::RangeError);
										}
										int bufferByteLength = buffer->length;
										int elementSize = _this->bytesPerElement;
										int newByteLength = bufferByteLength;
										bool tmp21 = (len == null());
										if ((tmp21)){
											int tmp22 = (bufferByteLength - in_byteOffset);
											newByteLength = tmp22;
											int tmp23 = hx::Mod(bufferByteLength,_this->bytesPerElement);
											bool tmp24 = (tmp23 != (int)0);
											if ((tmp24)){
												HX_STACK_DO_THROW(::lime::utils::TAError_obj::RangeError);
											}
											bool tmp25 = (newByteLength < (int)0);
											if ((tmp25)){
												HX_STACK_DO_THROW(::lime::utils::TAError_obj::RangeError);
											}
										}
										else{
											int tmp22 = (len * _this->bytesPerElement);
											newByteLength = tmp22;
											int tmp23 = (in_byteOffset + newByteLength);
											int newRange = tmp23;
											bool tmp24 = (newRange > bufferByteLength);
											if ((tmp24)){
												HX_STACK_DO_THROW(::lime::utils::TAError_obj::RangeError);
											}
										}
										_this->buffer = buffer;
										_this->byteOffset = in_byteOffset;
										_this->byteLength = newByteLength;
										Float tmp22 = (Float(newByteLength) / Float(_this->bytesPerElement));
										int tmp23 = ::Std_obj::_int(tmp22);
										_this->length = tmp23;
										tmp16 = _this;
									}
									this1 = tmp16;
								}
								else{
									HX_STACK_DO_THROW(HX_HCSTRING("Invalid constructor arguments for Int32Array","\x9b","\x2e","\x53","\x61"));
								}
							}
						}
					}
				}
				tmp7 = this1;
			}
			;break;
			case (int)4: {
				::haxe::io::Bytes tmp10 = this->buffer;
				::haxe::io::Bytes buffer = tmp10;
				::lime::utils::ArrayBufferView this1;
				bool tmp11 = false;
				if ((tmp11)){
					::lime::utils::ArrayBufferView tmp12 = ::lime::utils::ArrayBufferView_obj::__new(null(),(int)4);
					this1 = tmp12;
				}
				else{
					bool tmp12 = false;
					if ((tmp12)){
						::lime::utils::ArrayBufferView tmp13;
						{
							::lime::utils::ArrayBufferView tmp14 = ::lime::utils::ArrayBufferView_obj::__new((int)0,(int)4);
							::lime::utils::ArrayBufferView _this = tmp14;
							_this->byteOffset = (int)0;
							int tmp15 = hx::Throw(HX_CSTRING("Invalid field access on null object"));
							_this->length = tmp15;
							int tmp16 = (_this->length * _this->bytesPerElement);
							_this->byteLength = tmp16;
							::haxe::io::Bytes tmp17;
							{
								::haxe::io::Bytes this2;
								int tmp18 = _this->byteLength;
								::haxe::io::Bytes tmp19 = ::haxe::io::Bytes_obj::alloc(tmp18);
								this2 = tmp19;
								tmp17 = this2;
							}
							_this->buffer = tmp17;
							_this->copyFromArray(((Array< Float >)(null())),null());
							tmp13 = _this;
						}
						this1 = tmp13;
					}
					else{
						bool tmp13 = false;
						if ((tmp13)){
							::lime::utils::ArrayBufferView tmp14;
							{
								::lime::utils::ArrayBufferView tmp15 = ::lime::utils::ArrayBufferView_obj::__new((int)0,(int)4);
								::lime::utils::ArrayBufferView _this = tmp15;
								cpp::ArrayBase array = hx::Throw(HX_CSTRING("Invalid field access on null object"));
								_this->byteOffset = (int)0;
								_this->length = array->__Field(HX_HCSTRING("length","\xe6","\x94","\x07","\x9f"), hx::paccDynamic );
								int tmp16 = (_this->length * _this->bytesPerElement);
								_this->byteLength = tmp16;
								::haxe::io::Bytes tmp17;
								{
									::haxe::io::Bytes this2;
									int tmp18 = _this->byteLength;
									::haxe::io::Bytes tmp19 = ::haxe::io::Bytes_obj::alloc(tmp18);
									this2 = tmp19;
									tmp17 = this2;
								}
								_this->buffer = tmp17;
								_this->copyFromArray(((Array< Float >)(array)),null());
								tmp14 = _this;
							}
							this1 = tmp14;
						}
						else{
							bool tmp14 = false;
							if ((tmp14)){
								::lime::utils::ArrayBufferView tmp15;
								{
									::lime::utils::ArrayBufferView tmp16 = ::lime::utils::ArrayBufferView_obj::__new((int)0,(int)4);
									::lime::utils::ArrayBufferView _this = tmp16;
									::haxe::io::Bytes tmp17 = hx::Throw(HX_CSTRING("Invalid field access on null object"));
									::haxe::io::Bytes srcData = tmp17;
									int tmp18 = hx::Throw(HX_CSTRING("Invalid field access on null object"));
									int srcLength = tmp18;
									int tmp19 = hx::Throw(HX_CSTRING("Invalid field access on null object"));
									int srcByteOffset = tmp19;
									int tmp20 = hx::Throw(HX_CSTRING("Invalid field access on null object"));
									int srcElementSize = tmp20;
									int elementSize = _this->bytesPerElement;
									int tmp21 = hx::Throw(HX_CSTRING("Invalid field access on null object"));
									int tmp22 = _this->type;
									bool tmp23 = (tmp21 == tmp22);
									if ((tmp23)){
										int srcLength1 = srcData->length;
										int tmp24 = (srcLength1 - srcByteOffset);
										int cloneLength = tmp24;
										::haxe::io::Bytes tmp25;
										{
											::haxe::io::Bytes this2;
											int tmp26 = cloneLength;
											::haxe::io::Bytes tmp27 = ::haxe::io::Bytes_obj::alloc(tmp26);
											this2 = tmp27;
											tmp25 = this2;
										}
										_this->buffer = tmp25;
										::haxe::io::Bytes tmp26 = srcData;
										int tmp27 = srcByteOffset;
										int tmp28 = cloneLength;
										_this->buffer->blit((int)0,tmp26,tmp27,tmp28);
									}
									else{
										HX_STACK_DO_THROW(HX_HCSTRING("unimplemented","\x09","\x2f","\x74","\xb4"));
									}
									int tmp24 = (_this->bytesPerElement * srcLength);
									_this->byteLength = tmp24;
									_this->byteOffset = (int)0;
									_this->length = srcLength;
									tmp15 = _this;
								}
								this1 = tmp15;
							}
							else{
								bool tmp15 = (buffer != null());
								if ((tmp15)){
									::lime::utils::ArrayBufferView tmp16;
									{
										::lime::utils::ArrayBufferView tmp17 = ::lime::utils::ArrayBufferView_obj::__new((int)0,(int)4);
										::lime::utils::ArrayBufferView _this = tmp17;
										int in_byteOffset = byte_offset;
										bool tmp18 = (in_byteOffset < (int)0);
										if ((tmp18)){
											HX_STACK_DO_THROW(::lime::utils::TAError_obj::RangeError);
										}
										int tmp19 = hx::Mod(in_byteOffset,_this->bytesPerElement);
										bool tmp20 = (tmp19 != (int)0);
										if ((tmp20)){
											HX_STACK_DO_THROW(::lime::utils::TAError_obj::RangeError);
										}
										int bufferByteLength = buffer->length;
										int elementSize = _this->bytesPerElement;
										int newByteLength = bufferByteLength;
										bool tmp21 = (len == null());
										if ((tmp21)){
											int tmp22 = (bufferByteLength - in_byteOffset);
											newByteLength = tmp22;
											int tmp23 = hx::Mod(bufferByteLength,_this->bytesPerElement);
											bool tmp24 = (tmp23 != (int)0);
											if ((tmp24)){
												HX_STACK_DO_THROW(::lime::utils::TAError_obj::RangeError);
											}
											bool tmp25 = (newByteLength < (int)0);
											if ((tmp25)){
												HX_STACK_DO_THROW(::lime::utils::TAError_obj::RangeError);
											}
										}
										else{
											int tmp22 = (len * _this->bytesPerElement);
											newByteLength = tmp22;
											int tmp23 = (in_byteOffset + newByteLength);
											int newRange = tmp23;
											bool tmp24 = (newRange > bufferByteLength);
											if ((tmp24)){
												HX_STACK_DO_THROW(::lime::utils::TAError_obj::RangeError);
											}
										}
										_this->buffer = buffer;
										_this->byteOffset = in_byteOffset;
										_this->byteLength = newByteLength;
										Float tmp22 = (Float(newByteLength) / Float(_this->bytesPerElement));
										int tmp23 = ::Std_obj::_int(tmp22);
										_this->length = tmp23;
										tmp16 = _this;
									}
									this1 = tmp16;
								}
								else{
									HX_STACK_DO_THROW(HX_HCSTRING("Invalid constructor arguments for UInt8Array","\x6b","\x44","\xd5","\x85"));
								}
							}
						}
					}
				}
				tmp7 = this1;
			}
			;break;
			case (int)5: {
				::haxe::io::Bytes tmp10 = this->buffer;
				::haxe::io::Bytes buffer = tmp10;
				::lime::utils::ArrayBufferView this1;
				bool tmp11 = false;
				if ((tmp11)){
					::lime::utils::ArrayBufferView tmp12 = ::lime::utils::ArrayBufferView_obj::__new(null(),(int)5);
					this1 = tmp12;
				}
				else{
					bool tmp12 = false;
					if ((tmp12)){
						::lime::utils::ArrayBufferView tmp13;
						{
							::lime::utils::ArrayBufferView tmp14 = ::lime::utils::ArrayBufferView_obj::__new((int)0,(int)5);
							::lime::utils::ArrayBufferView _this = tmp14;
							_this->byteOffset = (int)0;
							int tmp15 = hx::Throw(HX_CSTRING("Invalid field access on null object"));
							_this->length = tmp15;
							int tmp16 = (_this->length * _this->bytesPerElement);
							_this->byteLength = tmp16;
							::haxe::io::Bytes tmp17;
							{
								::haxe::io::Bytes this2;
								int tmp18 = _this->byteLength;
								::haxe::io::Bytes tmp19 = ::haxe::io::Bytes_obj::alloc(tmp18);
								this2 = tmp19;
								tmp17 = this2;
							}
							_this->buffer = tmp17;
							_this->copyFromArray(((Array< Float >)(null())),null());
							tmp13 = _this;
						}
						this1 = tmp13;
					}
					else{
						bool tmp13 = false;
						if ((tmp13)){
							::lime::utils::ArrayBufferView tmp14;
							{
								::lime::utils::ArrayBufferView tmp15 = ::lime::utils::ArrayBufferView_obj::__new((int)0,(int)5);
								::lime::utils::ArrayBufferView _this = tmp15;
								cpp::ArrayBase array = hx::Throw(HX_CSTRING("Invalid field access on null object"));
								_this->byteOffset = (int)0;
								_this->length = array->__Field(HX_HCSTRING("length","\xe6","\x94","\x07","\x9f"), hx::paccDynamic );
								int tmp16 = (_this->length * _this->bytesPerElement);
								_this->byteLength = tmp16;
								::haxe::io::Bytes tmp17;
								{
									::haxe::io::Bytes this2;
									int tmp18 = _this->byteLength;
									::haxe::io::Bytes tmp19 = ::haxe::io::Bytes_obj::alloc(tmp18);
									this2 = tmp19;
									tmp17 = this2;
								}
								_this->buffer = tmp17;
								_this->copyFromArray(((Array< Float >)(array)),null());
								tmp14 = _this;
							}
							this1 = tmp14;
						}
						else{
							bool tmp14 = false;
							if ((tmp14)){
								::lime::utils::ArrayBufferView tmp15;
								{
									::lime::utils::ArrayBufferView tmp16 = ::lime::utils::ArrayBufferView_obj::__new((int)0,(int)5);
									::lime::utils::ArrayBufferView _this = tmp16;
									::haxe::io::Bytes tmp17 = hx::Throw(HX_CSTRING("Invalid field access on null object"));
									::haxe::io::Bytes srcData = tmp17;
									int tmp18 = hx::Throw(HX_CSTRING("Invalid field access on null object"));
									int srcLength = tmp18;
									int tmp19 = hx::Throw(HX_CSTRING("Invalid field access on null object"));
									int srcByteOffset = tmp19;
									int tmp20 = hx::Throw(HX_CSTRING("Invalid field access on null object"));
									int srcElementSize = tmp20;
									int elementSize = _this->bytesPerElement;
									int tmp21 = hx::Throw(HX_CSTRING("Invalid field access on null object"));
									int tmp22 = _this->type;
									bool tmp23 = (tmp21 == tmp22);
									if ((tmp23)){
										int srcLength1 = srcData->length;
										int tmp24 = (srcLength1 - srcByteOffset);
										int cloneLength = tmp24;
										::haxe::io::Bytes tmp25;
										{
											::haxe::io::Bytes this2;
											int tmp26 = cloneLength;
											::haxe::io::Bytes tmp27 = ::haxe::io::Bytes_obj::alloc(tmp26);
											this2 = tmp27;
											tmp25 = this2;
										}
										_this->buffer = tmp25;
										::haxe::io::Bytes tmp26 = srcData;
										int tmp27 = srcByteOffset;
										int tmp28 = cloneLength;
										_this->buffer->blit((int)0,tmp26,tmp27,tmp28);
									}
									else{
										HX_STACK_DO_THROW(HX_HCSTRING("unimplemented","\x09","\x2f","\x74","\xb4"));
									}
									int tmp24 = (_this->bytesPerElement * srcLength);
									_this->byteLength = tmp24;
									_this->byteOffset = (int)0;
									_this->length = srcLength;
									tmp15 = _this;
								}
								this1 = tmp15;
							}
							else{
								bool tmp15 = (buffer != null());
								if ((tmp15)){
									::lime::utils::ArrayBufferView tmp16;
									{
										::lime::utils::ArrayBufferView tmp17 = ::lime::utils::ArrayBufferView_obj::__new((int)0,(int)5);
										::lime::utils::ArrayBufferView _this = tmp17;
										int in_byteOffset = byte_offset;
										bool tmp18 = (in_byteOffset < (int)0);
										if ((tmp18)){
											HX_STACK_DO_THROW(::lime::utils::TAError_obj::RangeError);
										}
										int tmp19 = hx::Mod(in_byteOffset,_this->bytesPerElement);
										bool tmp20 = (tmp19 != (int)0);
										if ((tmp20)){
											HX_STACK_DO_THROW(::lime::utils::TAError_obj::RangeError);
										}
										int bufferByteLength = buffer->length;
										int elementSize = _this->bytesPerElement;
										int newByteLength = bufferByteLength;
										bool tmp21 = (len == null());
										if ((tmp21)){
											int tmp22 = (bufferByteLength - in_byteOffset);
											newByteLength = tmp22;
											int tmp23 = hx::Mod(bufferByteLength,_this->bytesPerElement);
											bool tmp24 = (tmp23 != (int)0);
											if ((tmp24)){
												HX_STACK_DO_THROW(::lime::utils::TAError_obj::RangeError);
											}
											bool tmp25 = (newByteLength < (int)0);
											if ((tmp25)){
												HX_STACK_DO_THROW(::lime::utils::TAError_obj::RangeError);
											}
										}
										else{
											int tmp22 = (len * _this->bytesPerElement);
											newByteLength = tmp22;
											int tmp23 = (in_byteOffset + newByteLength);
											int newRange = tmp23;
											bool tmp24 = (newRange > bufferByteLength);
											if ((tmp24)){
												HX_STACK_DO_THROW(::lime::utils::TAError_obj::RangeError);
											}
										}
										_this->buffer = buffer;
										_this->byteOffset = in_byteOffset;
										_this->byteLength = newByteLength;
										Float tmp22 = (Float(newByteLength) / Float(_this->bytesPerElement));
										int tmp23 = ::Std_obj::_int(tmp22);
										_this->length = tmp23;
										tmp16 = _this;
									}
									this1 = tmp16;
								}
								else{
									HX_STACK_DO_THROW(HX_HCSTRING("Invalid constructor arguments for UInt8ClampedArray","\x8d","\x06","\x77","\x13"));
								}
							}
						}
					}
				}
				tmp7 = this1;
			}
			;break;
			case (int)6: {
				::haxe::io::Bytes tmp10 = this->buffer;
				::haxe::io::Bytes buffer = tmp10;
				::lime::utils::ArrayBufferView this1;
				bool tmp11 = false;
				if ((tmp11)){
					::lime::utils::ArrayBufferView tmp12 = ::lime::utils::ArrayBufferView_obj::__new(null(),(int)6);
					this1 = tmp12;
				}
				else{
					bool tmp12 = false;
					if ((tmp12)){
						::lime::utils::ArrayBufferView tmp13;
						{
							::lime::utils::ArrayBufferView tmp14 = ::lime::utils::ArrayBufferView_obj::__new((int)0,(int)6);
							::lime::utils::ArrayBufferView _this = tmp14;
							_this->byteOffset = (int)0;
							int tmp15 = hx::Throw(HX_CSTRING("Invalid field access on null object"));
							_this->length = tmp15;
							int tmp16 = (_this->length * _this->bytesPerElement);
							_this->byteLength = tmp16;
							::haxe::io::Bytes tmp17;
							{
								::haxe::io::Bytes this2;
								int tmp18 = _this->byteLength;
								::haxe::io::Bytes tmp19 = ::haxe::io::Bytes_obj::alloc(tmp18);
								this2 = tmp19;
								tmp17 = this2;
							}
							_this->buffer = tmp17;
							_this->copyFromArray(((Array< Float >)(null())),null());
							tmp13 = _this;
						}
						this1 = tmp13;
					}
					else{
						bool tmp13 = false;
						if ((tmp13)){
							::lime::utils::ArrayBufferView tmp14;
							{
								::lime::utils::ArrayBufferView tmp15 = ::lime::utils::ArrayBufferView_obj::__new((int)0,(int)6);
								::lime::utils::ArrayBufferView _this = tmp15;
								cpp::ArrayBase array = hx::Throw(HX_CSTRING("Invalid field access on null object"));
								_this->byteOffset = (int)0;
								_this->length = array->__Field(HX_HCSTRING("length","\xe6","\x94","\x07","\x9f"), hx::paccDynamic );
								int tmp16 = (_this->length * _this->bytesPerElement);
								_this->byteLength = tmp16;
								::haxe::io::Bytes tmp17;
								{
									::haxe::io::Bytes this2;
									int tmp18 = _this->byteLength;
									::haxe::io::Bytes tmp19 = ::haxe::io::Bytes_obj::alloc(tmp18);
									this2 = tmp19;
									tmp17 = this2;
								}
								_this->buffer = tmp17;
								_this->copyFromArray(((Array< Float >)(array)),null());
								tmp14 = _this;
							}
							this1 = tmp14;
						}
						else{
							bool tmp14 = false;
							if ((tmp14)){
								::lime::utils::ArrayBufferView tmp15;
								{
									::lime::utils::ArrayBufferView tmp16 = ::lime::utils::ArrayBufferView_obj::__new((int)0,(int)6);
									::lime::utils::ArrayBufferView _this = tmp16;
									::haxe::io::Bytes tmp17 = hx::Throw(HX_CSTRING("Invalid field access on null object"));
									::haxe::io::Bytes srcData = tmp17;
									int tmp18 = hx::Throw(HX_CSTRING("Invalid field access on null object"));
									int srcLength = tmp18;
									int tmp19 = hx::Throw(HX_CSTRING("Invalid field access on null object"));
									int srcByteOffset = tmp19;
									int tmp20 = hx::Throw(HX_CSTRING("Invalid field access on null object"));
									int srcElementSize = tmp20;
									int elementSize = _this->bytesPerElement;
									int tmp21 = hx::Throw(HX_CSTRING("Invalid field access on null object"));
									int tmp22 = _this->type;
									bool tmp23 = (tmp21 == tmp22);
									if ((tmp23)){
										int srcLength1 = srcData->length;
										int tmp24 = (srcLength1 - srcByteOffset);
										int cloneLength = tmp24;
										::haxe::io::Bytes tmp25;
										{
											::haxe::io::Bytes this2;
											int tmp26 = cloneLength;
											::haxe::io::Bytes tmp27 = ::haxe::io::Bytes_obj::alloc(tmp26);
											this2 = tmp27;
											tmp25 = this2;
										}
										_this->buffer = tmp25;
										::haxe::io::Bytes tmp26 = srcData;
										int tmp27 = srcByteOffset;
										int tmp28 = cloneLength;
										_this->buffer->blit((int)0,tmp26,tmp27,tmp28);
									}
									else{
										HX_STACK_DO_THROW(HX_HCSTRING("unimplemented","\x09","\x2f","\x74","\xb4"));
									}
									int tmp24 = (_this->bytesPerElement * srcLength);
									_this->byteLength = tmp24;
									_this->byteOffset = (int)0;
									_this->length = srcLength;
									tmp15 = _this;
								}
								this1 = tmp15;
							}
							else{
								bool tmp15 = (buffer != null());
								if ((tmp15)){
									::lime::utils::ArrayBufferView tmp16;
									{
										::lime::utils::ArrayBufferView tmp17 = ::lime::utils::ArrayBufferView_obj::__new((int)0,(int)6);
										::lime::utils::ArrayBufferView _this = tmp17;
										int in_byteOffset = byte_offset;
										bool tmp18 = (in_byteOffset < (int)0);
										if ((tmp18)){
											HX_STACK_DO_THROW(::lime::utils::TAError_obj::RangeError);
										}
										int tmp19 = hx::Mod(in_byteOffset,_this->bytesPerElement);
										bool tmp20 = (tmp19 != (int)0);
										if ((tmp20)){
											HX_STACK_DO_THROW(::lime::utils::TAError_obj::RangeError);
										}
										int bufferByteLength = buffer->length;
										int elementSize = _this->bytesPerElement;
										int newByteLength = bufferByteLength;
										bool tmp21 = (len == null());
										if ((tmp21)){
											int tmp22 = (bufferByteLength - in_byteOffset);
											newByteLength = tmp22;
											int tmp23 = hx::Mod(bufferByteLength,_this->bytesPerElement);
											bool tmp24 = (tmp23 != (int)0);
											if ((tmp24)){
												HX_STACK_DO_THROW(::lime::utils::TAError_obj::RangeError);
											}
											bool tmp25 = (newByteLength < (int)0);
											if ((tmp25)){
												HX_STACK_DO_THROW(::lime::utils::TAError_obj::RangeError);
											}
										}
										else{
											int tmp22 = (len * _this->bytesPerElement);
											newByteLength = tmp22;
											int tmp23 = (in_byteOffset + newByteLength);
											int newRange = tmp23;
											bool tmp24 = (newRange > bufferByteLength);
											if ((tmp24)){
												HX_STACK_DO_THROW(::lime::utils::TAError_obj::RangeError);
											}
										}
										_this->buffer = buffer;
										_this->byteOffset = in_byteOffset;
										_this->byteLength = newByteLength;
										Float tmp22 = (Float(newByteLength) / Float(_this->bytesPerElement));
										int tmp23 = ::Std_obj::_int(tmp22);
										_this->length = tmp23;
										tmp16 = _this;
									}
									this1 = tmp16;
								}
								else{
									HX_STACK_DO_THROW(HX_HCSTRING("Invalid constructor arguments for UInt16Array","\x0a","\xc7","\x2d","\xd5"));
								}
							}
						}
					}
				}
				tmp7 = this1;
			}
			;break;
			case (int)7: {
				::haxe::io::Bytes tmp10 = this->buffer;
				::haxe::io::Bytes buffer = tmp10;
				::lime::utils::ArrayBufferView this1;
				bool tmp11 = false;
				if ((tmp11)){
					::lime::utils::ArrayBufferView tmp12 = ::lime::utils::ArrayBufferView_obj::__new(null(),(int)7);
					this1 = tmp12;
				}
				else{
					bool tmp12 = false;
					if ((tmp12)){
						::lime::utils::ArrayBufferView tmp13;
						{
							::lime::utils::ArrayBufferView tmp14 = ::lime::utils::ArrayBufferView_obj::__new((int)0,(int)7);
							::lime::utils::ArrayBufferView _this = tmp14;
							_this->byteOffset = (int)0;
							int tmp15 = hx::Throw(HX_CSTRING("Invalid field access on null object"));
							_this->length = tmp15;
							int tmp16 = (_this->length * _this->bytesPerElement);
							_this->byteLength = tmp16;
							::haxe::io::Bytes tmp17;
							{
								::haxe::io::Bytes this2;
								int tmp18 = _this->byteLength;
								::haxe::io::Bytes tmp19 = ::haxe::io::Bytes_obj::alloc(tmp18);
								this2 = tmp19;
								tmp17 = this2;
							}
							_this->buffer = tmp17;
							_this->copyFromArray(((Array< Float >)(null())),null());
							tmp13 = _this;
						}
						this1 = tmp13;
					}
					else{
						bool tmp13 = false;
						if ((tmp13)){
							::lime::utils::ArrayBufferView tmp14;
							{
								::lime::utils::ArrayBufferView tmp15 = ::lime::utils::ArrayBufferView_obj::__new((int)0,(int)7);
								::lime::utils::ArrayBufferView _this = tmp15;
								cpp::ArrayBase array = hx::Throw(HX_CSTRING("Invalid field access on null object"));
								_this->byteOffset = (int)0;
								_this->length = array->__Field(HX_HCSTRING("length","\xe6","\x94","\x07","\x9f"), hx::paccDynamic );
								int tmp16 = (_this->length * _this->bytesPerElement);
								_this->byteLength = tmp16;
								::haxe::io::Bytes tmp17;
								{
									::haxe::io::Bytes this2;
									int tmp18 = _this->byteLength;
									::haxe::io::Bytes tmp19 = ::haxe::io::Bytes_obj::alloc(tmp18);
									this2 = tmp19;
									tmp17 = this2;
								}
								_this->buffer = tmp17;
								_this->copyFromArray(((Array< Float >)(array)),null());
								tmp14 = _this;
							}
							this1 = tmp14;
						}
						else{
							bool tmp14 = false;
							if ((tmp14)){
								::lime::utils::ArrayBufferView tmp15;
								{
									::lime::utils::ArrayBufferView tmp16 = ::lime::utils::ArrayBufferView_obj::__new((int)0,(int)7);
									::lime::utils::ArrayBufferView _this = tmp16;
									::haxe::io::Bytes tmp17 = hx::Throw(HX_CSTRING("Invalid field access on null object"));
									::haxe::io::Bytes srcData = tmp17;
									int tmp18 = hx::Throw(HX_CSTRING("Invalid field access on null object"));
									int srcLength = tmp18;
									int tmp19 = hx::Throw(HX_CSTRING("Invalid field access on null object"));
									int srcByteOffset = tmp19;
									int tmp20 = hx::Throw(HX_CSTRING("Invalid field access on null object"));
									int srcElementSize = tmp20;
									int elementSize = _this->bytesPerElement;
									int tmp21 = hx::Throw(HX_CSTRING("Invalid field access on null object"));
									int tmp22 = _this->type;
									bool tmp23 = (tmp21 == tmp22);
									if ((tmp23)){
										int srcLength1 = srcData->length;
										int tmp24 = (srcLength1 - srcByteOffset);
										int cloneLength = tmp24;
										::haxe::io::Bytes tmp25;
										{
											::haxe::io::Bytes this2;
											int tmp26 = cloneLength;
											::haxe::io::Bytes tmp27 = ::haxe::io::Bytes_obj::alloc(tmp26);
											this2 = tmp27;
											tmp25 = this2;
										}
										_this->buffer = tmp25;
										::haxe::io::Bytes tmp26 = srcData;
										int tmp27 = srcByteOffset;
										int tmp28 = cloneLength;
										_this->buffer->blit((int)0,tmp26,tmp27,tmp28);
									}
									else{
										HX_STACK_DO_THROW(HX_HCSTRING("unimplemented","\x09","\x2f","\x74","\xb4"));
									}
									int tmp24 = (_this->bytesPerElement * srcLength);
									_this->byteLength = tmp24;
									_this->byteOffset = (int)0;
									_this->length = srcLength;
									tmp15 = _this;
								}
								this1 = tmp15;
							}
							else{
								bool tmp15 = (buffer != null());
								if ((tmp15)){
									::lime::utils::ArrayBufferView tmp16;
									{
										::lime::utils::ArrayBufferView tmp17 = ::lime::utils::ArrayBufferView_obj::__new((int)0,(int)7);
										::lime::utils::ArrayBufferView _this = tmp17;
										int in_byteOffset = byte_offset;
										bool tmp18 = (in_byteOffset < (int)0);
										if ((tmp18)){
											HX_STACK_DO_THROW(::lime::utils::TAError_obj::RangeError);
										}
										int tmp19 = hx::Mod(in_byteOffset,_this->bytesPerElement);
										bool tmp20 = (tmp19 != (int)0);
										if ((tmp20)){
											HX_STACK_DO_THROW(::lime::utils::TAError_obj::RangeError);
										}
										int bufferByteLength = buffer->length;
										int elementSize = _this->bytesPerElement;
										int newByteLength = bufferByteLength;
										bool tmp21 = (len == null());
										if ((tmp21)){
											int tmp22 = (bufferByteLength - in_byteOffset);
											newByteLength = tmp22;
											int tmp23 = hx::Mod(bufferByteLength,_this->bytesPerElement);
											bool tmp24 = (tmp23 != (int)0);
											if ((tmp24)){
												HX_STACK_DO_THROW(::lime::utils::TAError_obj::RangeError);
											}
											bool tmp25 = (newByteLength < (int)0);
											if ((tmp25)){
												HX_STACK_DO_THROW(::lime::utils::TAError_obj::RangeError);
											}
										}
										else{
											int tmp22 = (len * _this->bytesPerElement);
											newByteLength = tmp22;
											int tmp23 = (in_byteOffset + newByteLength);
											int newRange = tmp23;
											bool tmp24 = (newRange > bufferByteLength);
											if ((tmp24)){
												HX_STACK_DO_THROW(::lime::utils::TAError_obj::RangeError);
											}
										}
										_this->buffer = buffer;
										_this->byteOffset = in_byteOffset;
										_this->byteLength = newByteLength;
										Float tmp22 = (Float(newByteLength) / Float(_this->bytesPerElement));
										int tmp23 = ::Std_obj::_int(tmp22);
										_this->length = tmp23;
										tmp16 = _this;
									}
									this1 = tmp16;
								}
								else{
									HX_STACK_DO_THROW(HX_HCSTRING("Invalid constructor arguments for UInt32Array","\x10","\x43","\xeb","\x8e"));
								}
							}
						}
					}
				}
				tmp7 = this1;
			}
			;break;
			case (int)8: {
				::haxe::io::Bytes tmp10 = this->buffer;
				::haxe::io::Bytes buffer = tmp10;
				::lime::utils::ArrayBufferView this1;
				bool tmp11 = false;
				if ((tmp11)){
					::lime::utils::ArrayBufferView tmp12 = ::lime::utils::ArrayBufferView_obj::__new(null(),(int)8);
					this1 = tmp12;
				}
				else{
					bool tmp12 = false;
					if ((tmp12)){
						::lime::utils::ArrayBufferView tmp13;
						{
							::lime::utils::ArrayBufferView tmp14 = ::lime::utils::ArrayBufferView_obj::__new((int)0,(int)8);
							::lime::utils::ArrayBufferView _this = tmp14;
							_this->byteOffset = (int)0;
							int tmp15 = hx::Throw(HX_CSTRING("Invalid field access on null object"));
							_this->length = tmp15;
							int tmp16 = (_this->length * _this->bytesPerElement);
							_this->byteLength = tmp16;
							::haxe::io::Bytes tmp17;
							{
								::haxe::io::Bytes this2;
								int tmp18 = _this->byteLength;
								::haxe::io::Bytes tmp19 = ::haxe::io::Bytes_obj::alloc(tmp18);
								this2 = tmp19;
								tmp17 = this2;
							}
							_this->buffer = tmp17;
							_this->copyFromArray(((Array< Float >)(null())),null());
							tmp13 = _this;
						}
						this1 = tmp13;
					}
					else{
						bool tmp13 = false;
						if ((tmp13)){
							::lime::utils::ArrayBufferView tmp14;
							{
								::lime::utils::ArrayBufferView tmp15 = ::lime::utils::ArrayBufferView_obj::__new((int)0,(int)8);
								::lime::utils::ArrayBufferView _this = tmp15;
								cpp::ArrayBase array = hx::Throw(HX_CSTRING("Invalid field access on null object"));
								_this->byteOffset = (int)0;
								_this->length = array->__Field(HX_HCSTRING("length","\xe6","\x94","\x07","\x9f"), hx::paccDynamic );
								int tmp16 = (_this->length * _this->bytesPerElement);
								_this->byteLength = tmp16;
								::haxe::io::Bytes tmp17;
								{
									::haxe::io::Bytes this2;
									int tmp18 = _this->byteLength;
									::haxe::io::Bytes tmp19 = ::haxe::io::Bytes_obj::alloc(tmp18);
									this2 = tmp19;
									tmp17 = this2;
								}
								_this->buffer = tmp17;
								_this->copyFromArray(((Array< Float >)(array)),null());
								tmp14 = _this;
							}
							this1 = tmp14;
						}
						else{
							bool tmp14 = false;
							if ((tmp14)){
								::lime::utils::ArrayBufferView tmp15;
								{
									::lime::utils::ArrayBufferView tmp16 = ::lime::utils::ArrayBufferView_obj::__new((int)0,(int)8);
									::lime::utils::ArrayBufferView _this = tmp16;
									::haxe::io::Bytes tmp17 = hx::Throw(HX_CSTRING("Invalid field access on null object"));
									::haxe::io::Bytes srcData = tmp17;
									int tmp18 = hx::Throw(HX_CSTRING("Invalid field access on null object"));
									int srcLength = tmp18;
									int tmp19 = hx::Throw(HX_CSTRING("Invalid field access on null object"));
									int srcByteOffset = tmp19;
									int tmp20 = hx::Throw(HX_CSTRING("Invalid field access on null object"));
									int srcElementSize = tmp20;
									int elementSize = _this->bytesPerElement;
									int tmp21 = hx::Throw(HX_CSTRING("Invalid field access on null object"));
									int tmp22 = _this->type;
									bool tmp23 = (tmp21 == tmp22);
									if ((tmp23)){
										int srcLength1 = srcData->length;
										int tmp24 = (srcLength1 - srcByteOffset);
										int cloneLength = tmp24;
										::haxe::io::Bytes tmp25;
										{
											::haxe::io::Bytes this2;
											int tmp26 = cloneLength;
											::haxe::io::Bytes tmp27 = ::haxe::io::Bytes_obj::alloc(tmp26);
											this2 = tmp27;
											tmp25 = this2;
										}
										_this->buffer = tmp25;
										::haxe::io::Bytes tmp26 = srcData;
										int tmp27 = srcByteOffset;
										int tmp28 = cloneLength;
										_this->buffer->blit((int)0,tmp26,tmp27,tmp28);
									}
									else{
										HX_STACK_DO_THROW(HX_HCSTRING("unimplemented","\x09","\x2f","\x74","\xb4"));
									}
									int tmp24 = (_this->bytesPerElement * srcLength);
									_this->byteLength = tmp24;
									_this->byteOffset = (int)0;
									_this->length = srcLength;
									tmp15 = _this;
								}
								this1 = tmp15;
							}
							else{
								bool tmp15 = (buffer != null());
								if ((tmp15)){
									::lime::utils::ArrayBufferView tmp16;
									{
										::lime::utils::ArrayBufferView tmp17 = ::lime::utils::ArrayBufferView_obj::__new((int)0,(int)8);
										::lime::utils::ArrayBufferView _this = tmp17;
										int in_byteOffset = byte_offset;
										bool tmp18 = (in_byteOffset < (int)0);
										if ((tmp18)){
											HX_STACK_DO_THROW(::lime::utils::TAError_obj::RangeError);
										}
										int tmp19 = hx::Mod(in_byteOffset,_this->bytesPerElement);
										bool tmp20 = (tmp19 != (int)0);
										if ((tmp20)){
											HX_STACK_DO_THROW(::lime::utils::TAError_obj::RangeError);
										}
										int bufferByteLength = buffer->length;
										int elementSize = _this->bytesPerElement;
										int newByteLength = bufferByteLength;
										bool tmp21 = (len == null());
										if ((tmp21)){
											int tmp22 = (bufferByteLength - in_byteOffset);
											newByteLength = tmp22;
											int tmp23 = hx::Mod(bufferByteLength,_this->bytesPerElement);
											bool tmp24 = (tmp23 != (int)0);
											if ((tmp24)){
												HX_STACK_DO_THROW(::lime::utils::TAError_obj::RangeError);
											}
											bool tmp25 = (newByteLength < (int)0);
											if ((tmp25)){
												HX_STACK_DO_THROW(::lime::utils::TAError_obj::RangeError);
											}
										}
										else{
											int tmp22 = (len * _this->bytesPerElement);
											newByteLength = tmp22;
											int tmp23 = (in_byteOffset + newByteLength);
											int newRange = tmp23;
											bool tmp24 = (newRange > bufferByteLength);
											if ((tmp24)){
												HX_STACK_DO_THROW(::lime::utils::TAError_obj::RangeError);
											}
										}
										_this->buffer = buffer;
										_this->byteOffset = in_byteOffset;
										_this->byteLength = newByteLength;
										Float tmp22 = (Float(newByteLength) / Float(_this->bytesPerElement));
										int tmp23 = ::Std_obj::_int(tmp22);
										_this->length = tmp23;
										tmp16 = _this;
									}
									this1 = tmp16;
								}
								else{
									HX_STACK_DO_THROW(HX_HCSTRING("Invalid constructor arguments for Float32Array","\x8e","\xc1","\xf4","\xd4"));
								}
							}
						}
					}
				}
				tmp7 = this1;
			}
			;break;
			case (int)9: {
				::haxe::io::Bytes tmp10 = this->buffer;
				::haxe::io::Bytes buffer = tmp10;
				::lime::utils::ArrayBufferView this1;
				bool tmp11 = false;
				if ((tmp11)){
					::lime::utils::ArrayBufferView tmp12 = ::lime::utils::ArrayBufferView_obj::__new(null(),(int)9);
					this1 = tmp12;
				}
				else{
					bool tmp12 = false;
					if ((tmp12)){
						::lime::utils::ArrayBufferView tmp13;
						{
							::lime::utils::ArrayBufferView tmp14 = ::lime::utils::ArrayBufferView_obj::__new((int)0,(int)9);
							::lime::utils::ArrayBufferView _this = tmp14;
							_this->byteOffset = (int)0;
							int tmp15 = hx::Throw(HX_CSTRING("Invalid field access on null object"));
							_this->length = tmp15;
							int tmp16 = (_this->length * _this->bytesPerElement);
							_this->byteLength = tmp16;
							::haxe::io::Bytes tmp17;
							{
								::haxe::io::Bytes this2;
								int tmp18 = _this->byteLength;
								::haxe::io::Bytes tmp19 = ::haxe::io::Bytes_obj::alloc(tmp18);
								this2 = tmp19;
								tmp17 = this2;
							}
							_this->buffer = tmp17;
							_this->copyFromArray(((Array< Float >)(null())),null());
							tmp13 = _this;
						}
						this1 = tmp13;
					}
					else{
						bool tmp13 = false;
						if ((tmp13)){
							::lime::utils::ArrayBufferView tmp14;
							{
								::lime::utils::ArrayBufferView tmp15 = ::lime::utils::ArrayBufferView_obj::__new((int)0,(int)9);
								::lime::utils::ArrayBufferView _this = tmp15;
								cpp::ArrayBase array = hx::Throw(HX_CSTRING("Invalid field access on null object"));
								_this->byteOffset = (int)0;
								_this->length = array->__Field(HX_HCSTRING("length","\xe6","\x94","\x07","\x9f"), hx::paccDynamic );
								int tmp16 = (_this->length * _this->bytesPerElement);
								_this->byteLength = tmp16;
								::haxe::io::Bytes tmp17;
								{
									::haxe::io::Bytes this2;
									int tmp18 = _this->byteLength;
									::haxe::io::Bytes tmp19 = ::haxe::io::Bytes_obj::alloc(tmp18);
									this2 = tmp19;
									tmp17 = this2;
								}
								_this->buffer = tmp17;
								_this->copyFromArray(((Array< Float >)(array)),null());
								tmp14 = _this;
							}
							this1 = tmp14;
						}
						else{
							bool tmp14 = false;
							if ((tmp14)){
								::lime::utils::ArrayBufferView tmp15;
								{
									::lime::utils::ArrayBufferView tmp16 = ::lime::utils::ArrayBufferView_obj::__new((int)0,(int)9);
									::lime::utils::ArrayBufferView _this = tmp16;
									::haxe::io::Bytes tmp17 = hx::Throw(HX_CSTRING("Invalid field access on null object"));
									::haxe::io::Bytes srcData = tmp17;
									int tmp18 = hx::Throw(HX_CSTRING("Invalid field access on null object"));
									int srcLength = tmp18;
									int tmp19 = hx::Throw(HX_CSTRING("Invalid field access on null object"));
									int srcByteOffset = tmp19;
									int tmp20 = hx::Throw(HX_CSTRING("Invalid field access on null object"));
									int srcElementSize = tmp20;
									int elementSize = _this->bytesPerElement;
									int tmp21 = hx::Throw(HX_CSTRING("Invalid field access on null object"));
									int tmp22 = _this->type;
									bool tmp23 = (tmp21 == tmp22);
									if ((tmp23)){
										int srcLength1 = srcData->length;
										int tmp24 = (srcLength1 - srcByteOffset);
										int cloneLength = tmp24;
										::haxe::io::Bytes tmp25;
										{
											::haxe::io::Bytes this2;
											int tmp26 = cloneLength;
											::haxe::io::Bytes tmp27 = ::haxe::io::Bytes_obj::alloc(tmp26);
											this2 = tmp27;
											tmp25 = this2;
										}
										_this->buffer = tmp25;
										::haxe::io::Bytes tmp26 = srcData;
										int tmp27 = srcByteOffset;
										int tmp28 = cloneLength;
										_this->buffer->blit((int)0,tmp26,tmp27,tmp28);
									}
									else{
										HX_STACK_DO_THROW(HX_HCSTRING("unimplemented","\x09","\x2f","\x74","\xb4"));
									}
									int tmp24 = (_this->bytesPerElement * srcLength);
									_this->byteLength = tmp24;
									_this->byteOffset = (int)0;
									_this->length = srcLength;
									tmp15 = _this;
								}
								this1 = tmp15;
							}
							else{
								bool tmp15 = (buffer != null());
								if ((tmp15)){
									::lime::utils::ArrayBufferView tmp16;
									{
										::lime::utils::ArrayBufferView tmp17 = ::lime::utils::ArrayBufferView_obj::__new((int)0,(int)9);
										::lime::utils::ArrayBufferView _this = tmp17;
										int in_byteOffset = byte_offset;
										bool tmp18 = (in_byteOffset < (int)0);
										if ((tmp18)){
											HX_STACK_DO_THROW(::lime::utils::TAError_obj::RangeError);
										}
										int tmp19 = hx::Mod(in_byteOffset,_this->bytesPerElement);
										bool tmp20 = (tmp19 != (int)0);
										if ((tmp20)){
											HX_STACK_DO_THROW(::lime::utils::TAError_obj::RangeError);
										}
										int bufferByteLength = buffer->length;
										int elementSize = _this->bytesPerElement;
										int newByteLength = bufferByteLength;
										bool tmp21 = (len == null());
										if ((tmp21)){
											int tmp22 = (bufferByteLength - in_byteOffset);
											newByteLength = tmp22;
											int tmp23 = hx::Mod(bufferByteLength,_this->bytesPerElement);
											bool tmp24 = (tmp23 != (int)0);
											if ((tmp24)){
												HX_STACK_DO_THROW(::lime::utils::TAError_obj::RangeError);
											}
											bool tmp25 = (newByteLength < (int)0);
											if ((tmp25)){
												HX_STACK_DO_THROW(::lime::utils::TAError_obj::RangeError);
											}
										}
										else{
											int tmp22 = (len * _this->bytesPerElement);
											newByteLength = tmp22;
											int tmp23 = (in_byteOffset + newByteLength);
											int newRange = tmp23;
											bool tmp24 = (newRange > bufferByteLength);
											if ((tmp24)){
												HX_STACK_DO_THROW(::lime::utils::TAError_obj::RangeError);
											}
										}
										_this->buffer = buffer;
										_this->byteOffset = in_byteOffset;
										_this->byteLength = newByteLength;
										Float tmp22 = (Float(newByteLength) / Float(_this->bytesPerElement));
										int tmp23 = ::Std_obj::_int(tmp22);
										_this->length = tmp23;
										tmp16 = _this;
									}
									this1 = tmp16;
								}
								else{
									HX_STACK_DO_THROW(HX_HCSTRING("Invalid constructor arguments for Float64Array","\x8f","\xde","\x6b","\x1e"));
								}
							}
						}
					}
				}
				tmp7 = this1;
			}
			;break;
			case (int)0: {
				HX_STACK_DO_THROW(HX_HCSTRING("subarray on a blank ArrayBufferView","\x39","\x87","\xfd","\x19"));
			}
			;break;
		}
	}
	::lime::utils::ArrayBufferView view = tmp7;
	::lime::utils::ArrayBufferView tmp8 = view;
	return tmp8;
}


HX_DEFINE_DYNAMIC_FUNC2(ArrayBufferView_obj,subarray_lime_utils_Int32Array,return )

::lime::utils::ArrayBufferView ArrayBufferView_obj::subarray_lime_utils_Float32Array( int begin,Dynamic end){
	bool tmp = (end == null());
	if ((tmp)){
		int tmp1 = this->length;
		end = tmp1;
	}
	int tmp1 = (end - begin);
	int len = tmp1;
	int tmp2 = begin;
	int tmp3 = this->bytesPerElement;
	int tmp4 = (tmp2 * tmp3);
	int tmp5 = this->byteOffset;
	int tmp6 = (tmp4 + tmp5);
	int byte_offset = tmp6;
	::lime::utils::ArrayBufferView tmp7;
	{
		int tmp8 = this->type;
		int _g = tmp8;
		int tmp9 = _g;
		switch( (int)(tmp9)){
			case (int)1: {
				::haxe::io::Bytes tmp10 = this->buffer;
				::haxe::io::Bytes buffer = tmp10;
				::lime::utils::ArrayBufferView this1;
				bool tmp11 = false;
				if ((tmp11)){
					::lime::utils::ArrayBufferView tmp12 = ::lime::utils::ArrayBufferView_obj::__new(null(),(int)1);
					this1 = tmp12;
				}
				else{
					bool tmp12 = false;
					if ((tmp12)){
						::lime::utils::ArrayBufferView tmp13;
						{
							::lime::utils::ArrayBufferView tmp14 = ::lime::utils::ArrayBufferView_obj::__new((int)0,(int)1);
							::lime::utils::ArrayBufferView _this = tmp14;
							_this->byteOffset = (int)0;
							int tmp15 = hx::Throw(HX_CSTRING("Invalid field access on null object"));
							_this->length = tmp15;
							int tmp16 = (_this->length * _this->bytesPerElement);
							_this->byteLength = tmp16;
							::haxe::io::Bytes tmp17;
							{
								::haxe::io::Bytes this2;
								int tmp18 = _this->byteLength;
								::haxe::io::Bytes tmp19 = ::haxe::io::Bytes_obj::alloc(tmp18);
								this2 = tmp19;
								tmp17 = this2;
							}
							_this->buffer = tmp17;
							_this->copyFromArray(((Array< Float >)(null())),null());
							tmp13 = _this;
						}
						this1 = tmp13;
					}
					else{
						bool tmp13 = false;
						if ((tmp13)){
							::lime::utils::ArrayBufferView tmp14;
							{
								::lime::utils::ArrayBufferView tmp15 = ::lime::utils::ArrayBufferView_obj::__new((int)0,(int)1);
								::lime::utils::ArrayBufferView _this = tmp15;
								cpp::ArrayBase array = hx::Throw(HX_CSTRING("Invalid field access on null object"));
								_this->byteOffset = (int)0;
								_this->length = array->__Field(HX_HCSTRING("length","\xe6","\x94","\x07","\x9f"), hx::paccDynamic );
								int tmp16 = (_this->length * _this->bytesPerElement);
								_this->byteLength = tmp16;
								::haxe::io::Bytes tmp17;
								{
									::haxe::io::Bytes this2;
									int tmp18 = _this->byteLength;
									::haxe::io::Bytes tmp19 = ::haxe::io::Bytes_obj::alloc(tmp18);
									this2 = tmp19;
									tmp17 = this2;
								}
								_this->buffer = tmp17;
								_this->copyFromArray(((Array< Float >)(array)),null());
								tmp14 = _this;
							}
							this1 = tmp14;
						}
						else{
							bool tmp14 = false;
							if ((tmp14)){
								::lime::utils::ArrayBufferView tmp15;
								{
									::lime::utils::ArrayBufferView tmp16 = ::lime::utils::ArrayBufferView_obj::__new((int)0,(int)1);
									::lime::utils::ArrayBufferView _this = tmp16;
									::haxe::io::Bytes tmp17 = hx::Throw(HX_CSTRING("Invalid field access on null object"));
									::haxe::io::Bytes srcData = tmp17;
									int tmp18 = hx::Throw(HX_CSTRING("Invalid field access on null object"));
									int srcLength = tmp18;
									int tmp19 = hx::Throw(HX_CSTRING("Invalid field access on null object"));
									int srcByteOffset = tmp19;
									int tmp20 = hx::Throw(HX_CSTRING("Invalid field access on null object"));
									int srcElementSize = tmp20;
									int elementSize = _this->bytesPerElement;
									int tmp21 = hx::Throw(HX_CSTRING("Invalid field access on null object"));
									int tmp22 = _this->type;
									bool tmp23 = (tmp21 == tmp22);
									if ((tmp23)){
										int srcLength1 = srcData->length;
										int tmp24 = (srcLength1 - srcByteOffset);
										int cloneLength = tmp24;
										::haxe::io::Bytes tmp25;
										{
											::haxe::io::Bytes this2;
											int tmp26 = cloneLength;
											::haxe::io::Bytes tmp27 = ::haxe::io::Bytes_obj::alloc(tmp26);
											this2 = tmp27;
											tmp25 = this2;
										}
										_this->buffer = tmp25;
										::haxe::io::Bytes tmp26 = srcData;
										int tmp27 = srcByteOffset;
										int tmp28 = cloneLength;
										_this->buffer->blit((int)0,tmp26,tmp27,tmp28);
									}
									else{
										HX_STACK_DO_THROW(HX_HCSTRING("unimplemented","\x09","\x2f","\x74","\xb4"));
									}
									int tmp24 = (_this->bytesPerElement * srcLength);
									_this->byteLength = tmp24;
									_this->byteOffset = (int)0;
									_this->length = srcLength;
									tmp15 = _this;
								}
								this1 = tmp15;
							}
							else{
								bool tmp15 = (buffer != null());
								if ((tmp15)){
									::lime::utils::ArrayBufferView tmp16;
									{
										::lime::utils::ArrayBufferView tmp17 = ::lime::utils::ArrayBufferView_obj::__new((int)0,(int)1);
										::lime::utils::ArrayBufferView _this = tmp17;
										int in_byteOffset = byte_offset;
										bool tmp18 = (in_byteOffset < (int)0);
										if ((tmp18)){
											HX_STACK_DO_THROW(::lime::utils::TAError_obj::RangeError);
										}
										int tmp19 = hx::Mod(in_byteOffset,_this->bytesPerElement);
										bool tmp20 = (tmp19 != (int)0);
										if ((tmp20)){
											HX_STACK_DO_THROW(::lime::utils::TAError_obj::RangeError);
										}
										int bufferByteLength = buffer->length;
										int elementSize = _this->bytesPerElement;
										int newByteLength = bufferByteLength;
										bool tmp21 = (len == null());
										if ((tmp21)){
											int tmp22 = (bufferByteLength - in_byteOffset);
											newByteLength = tmp22;
											int tmp23 = hx::Mod(bufferByteLength,_this->bytesPerElement);
											bool tmp24 = (tmp23 != (int)0);
											if ((tmp24)){
												HX_STACK_DO_THROW(::lime::utils::TAError_obj::RangeError);
											}
											bool tmp25 = (newByteLength < (int)0);
											if ((tmp25)){
												HX_STACK_DO_THROW(::lime::utils::TAError_obj::RangeError);
											}
										}
										else{
											int tmp22 = (len * _this->bytesPerElement);
											newByteLength = tmp22;
											int tmp23 = (in_byteOffset + newByteLength);
											int newRange = tmp23;
											bool tmp24 = (newRange > bufferByteLength);
											if ((tmp24)){
												HX_STACK_DO_THROW(::lime::utils::TAError_obj::RangeError);
											}
										}
										_this->buffer = buffer;
										_this->byteOffset = in_byteOffset;
										_this->byteLength = newByteLength;
										Float tmp22 = (Float(newByteLength) / Float(_this->bytesPerElement));
										int tmp23 = ::Std_obj::_int(tmp22);
										_this->length = tmp23;
										tmp16 = _this;
									}
									this1 = tmp16;
								}
								else{
									HX_STACK_DO_THROW(HX_HCSTRING("Invalid constructor arguments for Int8Array","\x40","\x53","\xda","\x77"));
								}
							}
						}
					}
				}
				tmp7 = this1;
			}
			;break;
			case (int)2: {
				::haxe::io::Bytes tmp10 = this->buffer;
				::haxe::io::Bytes buffer = tmp10;
				::lime::utils::ArrayBufferView this1;
				bool tmp11 = false;
				if ((tmp11)){
					::lime::utils::ArrayBufferView tmp12 = ::lime::utils::ArrayBufferView_obj::__new(null(),(int)2);
					this1 = tmp12;
				}
				else{
					bool tmp12 = false;
					if ((tmp12)){
						::lime::utils::ArrayBufferView tmp13;
						{
							::lime::utils::ArrayBufferView tmp14 = ::lime::utils::ArrayBufferView_obj::__new((int)0,(int)2);
							::lime::utils::ArrayBufferView _this = tmp14;
							_this->byteOffset = (int)0;
							int tmp15 = hx::Throw(HX_CSTRING("Invalid field access on null object"));
							_this->length = tmp15;
							int tmp16 = (_this->length * _this->bytesPerElement);
							_this->byteLength = tmp16;
							::haxe::io::Bytes tmp17;
							{
								::haxe::io::Bytes this2;
								int tmp18 = _this->byteLength;
								::haxe::io::Bytes tmp19 = ::haxe::io::Bytes_obj::alloc(tmp18);
								this2 = tmp19;
								tmp17 = this2;
							}
							_this->buffer = tmp17;
							_this->copyFromArray(((Array< Float >)(null())),null());
							tmp13 = _this;
						}
						this1 = tmp13;
					}
					else{
						bool tmp13 = false;
						if ((tmp13)){
							::lime::utils::ArrayBufferView tmp14;
							{
								::lime::utils::ArrayBufferView tmp15 = ::lime::utils::ArrayBufferView_obj::__new((int)0,(int)2);
								::lime::utils::ArrayBufferView _this = tmp15;
								cpp::ArrayBase array = hx::Throw(HX_CSTRING("Invalid field access on null object"));
								_this->byteOffset = (int)0;
								_this->length = array->__Field(HX_HCSTRING("length","\xe6","\x94","\x07","\x9f"), hx::paccDynamic );
								int tmp16 = (_this->length * _this->bytesPerElement);
								_this->byteLength = tmp16;
								::haxe::io::Bytes tmp17;
								{
									::haxe::io::Bytes this2;
									int tmp18 = _this->byteLength;
									::haxe::io::Bytes tmp19 = ::haxe::io::Bytes_obj::alloc(tmp18);
									this2 = tmp19;
									tmp17 = this2;
								}
								_this->buffer = tmp17;
								_this->copyFromArray(((Array< Float >)(array)),null());
								tmp14 = _this;
							}
							this1 = tmp14;
						}
						else{
							bool tmp14 = false;
							if ((tmp14)){
								::lime::utils::ArrayBufferView tmp15;
								{
									::lime::utils::ArrayBufferView tmp16 = ::lime::utils::ArrayBufferView_obj::__new((int)0,(int)2);
									::lime::utils::ArrayBufferView _this = tmp16;
									::haxe::io::Bytes tmp17 = hx::Throw(HX_CSTRING("Invalid field access on null object"));
									::haxe::io::Bytes srcData = tmp17;
									int tmp18 = hx::Throw(HX_CSTRING("Invalid field access on null object"));
									int srcLength = tmp18;
									int tmp19 = hx::Throw(HX_CSTRING("Invalid field access on null object"));
									int srcByteOffset = tmp19;
									int tmp20 = hx::Throw(HX_CSTRING("Invalid field access on null object"));
									int srcElementSize = tmp20;
									int elementSize = _this->bytesPerElement;
									int tmp21 = hx::Throw(HX_CSTRING("Invalid field access on null object"));
									int tmp22 = _this->type;
									bool tmp23 = (tmp21 == tmp22);
									if ((tmp23)){
										int srcLength1 = srcData->length;
										int tmp24 = (srcLength1 - srcByteOffset);
										int cloneLength = tmp24;
										::haxe::io::Bytes tmp25;
										{
											::haxe::io::Bytes this2;
											int tmp26 = cloneLength;
											::haxe::io::Bytes tmp27 = ::haxe::io::Bytes_obj::alloc(tmp26);
											this2 = tmp27;
											tmp25 = this2;
										}
										_this->buffer = tmp25;
										::haxe::io::Bytes tmp26 = srcData;
										int tmp27 = srcByteOffset;
										int tmp28 = cloneLength;
										_this->buffer->blit((int)0,tmp26,tmp27,tmp28);
									}
									else{
										HX_STACK_DO_THROW(HX_HCSTRING("unimplemented","\x09","\x2f","\x74","\xb4"));
									}
									int tmp24 = (_this->bytesPerElement * srcLength);
									_this->byteLength = tmp24;
									_this->byteOffset = (int)0;
									_this->length = srcLength;
									tmp15 = _this;
								}
								this1 = tmp15;
							}
							else{
								bool tmp15 = (buffer != null());
								if ((tmp15)){
									::lime::utils::ArrayBufferView tmp16;
									{
										::lime::utils::ArrayBufferView tmp17 = ::lime::utils::ArrayBufferView_obj::__new((int)0,(int)2);
										::lime::utils::ArrayBufferView _this = tmp17;
										int in_byteOffset = byte_offset;
										bool tmp18 = (in_byteOffset < (int)0);
										if ((tmp18)){
											HX_STACK_DO_THROW(::lime::utils::TAError_obj::RangeError);
										}
										int tmp19 = hx::Mod(in_byteOffset,_this->bytesPerElement);
										bool tmp20 = (tmp19 != (int)0);
										if ((tmp20)){
											HX_STACK_DO_THROW(::lime::utils::TAError_obj::RangeError);
										}
										int bufferByteLength = buffer->length;
										int elementSize = _this->bytesPerElement;
										int newByteLength = bufferByteLength;
										bool tmp21 = (len == null());
										if ((tmp21)){
											int tmp22 = (bufferByteLength - in_byteOffset);
											newByteLength = tmp22;
											int tmp23 = hx::Mod(bufferByteLength,_this->bytesPerElement);
											bool tmp24 = (tmp23 != (int)0);
											if ((tmp24)){
												HX_STACK_DO_THROW(::lime::utils::TAError_obj::RangeError);
											}
											bool tmp25 = (newByteLength < (int)0);
											if ((tmp25)){
												HX_STACK_DO_THROW(::lime::utils::TAError_obj::RangeError);
											}
										}
										else{
											int tmp22 = (len * _this->bytesPerElement);
											newByteLength = tmp22;
											int tmp23 = (in_byteOffset + newByteLength);
											int newRange = tmp23;
											bool tmp24 = (newRange > bufferByteLength);
											if ((tmp24)){
												HX_STACK_DO_THROW(::lime::utils::TAError_obj::RangeError);
											}
										}
										_this->buffer = buffer;
										_this->byteOffset = in_byteOffset;
										_this->byteLength = newByteLength;
										Float tmp22 = (Float(newByteLength) / Float(_this->bytesPerElement));
										int tmp23 = ::Std_obj::_int(tmp22);
										_this->length = tmp23;
										tmp16 = _this;
									}
									this1 = tmp16;
								}
								else{
									HX_STACK_DO_THROW(HX_HCSTRING("Invalid constructor arguments for Int16Array","\x95","\xb2","\x95","\xa7"));
								}
							}
						}
					}
				}
				tmp7 = this1;
			}
			;break;
			case (int)3: {
				::haxe::io::Bytes tmp10 = this->buffer;
				::haxe::io::Bytes buffer = tmp10;
				::lime::utils::ArrayBufferView this1;
				bool tmp11 = false;
				if ((tmp11)){
					::lime::utils::ArrayBufferView tmp12 = ::lime::utils::ArrayBufferView_obj::__new(null(),(int)3);
					this1 = tmp12;
				}
				else{
					bool tmp12 = false;
					if ((tmp12)){
						::lime::utils::ArrayBufferView tmp13;
						{
							::lime::utils::ArrayBufferView tmp14 = ::lime::utils::ArrayBufferView_obj::__new((int)0,(int)3);
							::lime::utils::ArrayBufferView _this = tmp14;
							_this->byteOffset = (int)0;
							int tmp15 = hx::Throw(HX_CSTRING("Invalid field access on null object"));
							_this->length = tmp15;
							int tmp16 = (_this->length * _this->bytesPerElement);
							_this->byteLength = tmp16;
							::haxe::io::Bytes tmp17;
							{
								::haxe::io::Bytes this2;
								int tmp18 = _this->byteLength;
								::haxe::io::Bytes tmp19 = ::haxe::io::Bytes_obj::alloc(tmp18);
								this2 = tmp19;
								tmp17 = this2;
							}
							_this->buffer = tmp17;
							_this->copyFromArray(((Array< Float >)(null())),null());
							tmp13 = _this;
						}
						this1 = tmp13;
					}
					else{
						bool tmp13 = false;
						if ((tmp13)){
							::lime::utils::ArrayBufferView tmp14;
							{
								::lime::utils::ArrayBufferView tmp15 = ::lime::utils::ArrayBufferView_obj::__new((int)0,(int)3);
								::lime::utils::ArrayBufferView _this = tmp15;
								cpp::ArrayBase array = hx::Throw(HX_CSTRING("Invalid field access on null object"));
								_this->byteOffset = (int)0;
								_this->length = array->__Field(HX_HCSTRING("length","\xe6","\x94","\x07","\x9f"), hx::paccDynamic );
								int tmp16 = (_this->length * _this->bytesPerElement);
								_this->byteLength = tmp16;
								::haxe::io::Bytes tmp17;
								{
									::haxe::io::Bytes this2;
									int tmp18 = _this->byteLength;
									::haxe::io::Bytes tmp19 = ::haxe::io::Bytes_obj::alloc(tmp18);
									this2 = tmp19;
									tmp17 = this2;
								}
								_this->buffer = tmp17;
								_this->copyFromArray(((Array< Float >)(array)),null());
								tmp14 = _this;
							}
							this1 = tmp14;
						}
						else{
							bool tmp14 = false;
							if ((tmp14)){
								::lime::utils::ArrayBufferView tmp15;
								{
									::lime::utils::ArrayBufferView tmp16 = ::lime::utils::ArrayBufferView_obj::__new((int)0,(int)3);
									::lime::utils::ArrayBufferView _this = tmp16;
									::haxe::io::Bytes tmp17 = hx::Throw(HX_CSTRING("Invalid field access on null object"));
									::haxe::io::Bytes srcData = tmp17;
									int tmp18 = hx::Throw(HX_CSTRING("Invalid field access on null object"));
									int srcLength = tmp18;
									int tmp19 = hx::Throw(HX_CSTRING("Invalid field access on null object"));
									int srcByteOffset = tmp19;
									int tmp20 = hx::Throw(HX_CSTRING("Invalid field access on null object"));
									int srcElementSize = tmp20;
									int elementSize = _this->bytesPerElement;
									int tmp21 = hx::Throw(HX_CSTRING("Invalid field access on null object"));
									int tmp22 = _this->type;
									bool tmp23 = (tmp21 == tmp22);
									if ((tmp23)){
										int srcLength1 = srcData->length;
										int tmp24 = (srcLength1 - srcByteOffset);
										int cloneLength = tmp24;
										::haxe::io::Bytes tmp25;
										{
											::haxe::io::Bytes this2;
											int tmp26 = cloneLength;
											::haxe::io::Bytes tmp27 = ::haxe::io::Bytes_obj::alloc(tmp26);
											this2 = tmp27;
											tmp25 = this2;
										}
										_this->buffer = tmp25;
										::haxe::io::Bytes tmp26 = srcData;
										int tmp27 = srcByteOffset;
										int tmp28 = cloneLength;
										_this->buffer->blit((int)0,tmp26,tmp27,tmp28);
									}
									else{
										HX_STACK_DO_THROW(HX_HCSTRING("unimplemented","\x09","\x2f","\x74","\xb4"));
									}
									int tmp24 = (_this->bytesPerElement * srcLength);
									_this->byteLength = tmp24;
									_this->byteOffset = (int)0;
									_this->length = srcLength;
									tmp15 = _this;
								}
								this1 = tmp15;
							}
							else{
								bool tmp15 = (buffer != null());
								if ((tmp15)){
									::lime::utils::ArrayBufferView tmp16;
									{
										::lime::utils::ArrayBufferView tmp17 = ::lime::utils::ArrayBufferView_obj::__new((int)0,(int)3);
										::lime::utils::ArrayBufferView _this = tmp17;
										int in_byteOffset = byte_offset;
										bool tmp18 = (in_byteOffset < (int)0);
										if ((tmp18)){
											HX_STACK_DO_THROW(::lime::utils::TAError_obj::RangeError);
										}
										int tmp19 = hx::Mod(in_byteOffset,_this->bytesPerElement);
										bool tmp20 = (tmp19 != (int)0);
										if ((tmp20)){
											HX_STACK_DO_THROW(::lime::utils::TAError_obj::RangeError);
										}
										int bufferByteLength = buffer->length;
										int elementSize = _this->bytesPerElement;
										int newByteLength = bufferByteLength;
										bool tmp21 = (len == null());
										if ((tmp21)){
											int tmp22 = (bufferByteLength - in_byteOffset);
											newByteLength = tmp22;
											int tmp23 = hx::Mod(bufferByteLength,_this->bytesPerElement);
											bool tmp24 = (tmp23 != (int)0);
											if ((tmp24)){
												HX_STACK_DO_THROW(::lime::utils::TAError_obj::RangeError);
											}
											bool tmp25 = (newByteLength < (int)0);
											if ((tmp25)){
												HX_STACK_DO_THROW(::lime::utils::TAError_obj::RangeError);
											}
										}
										else{
											int tmp22 = (len * _this->bytesPerElement);
											newByteLength = tmp22;
											int tmp23 = (in_byteOffset + newByteLength);
											int newRange = tmp23;
											bool tmp24 = (newRange > bufferByteLength);
											if ((tmp24)){
												HX_STACK_DO_THROW(::lime::utils::TAError_obj::RangeError);
											}
										}
										_this->buffer = buffer;
										_this->byteOffset = in_byteOffset;
										_this->byteLength = newByteLength;
										Float tmp22 = (Float(newByteLength) / Float(_this->bytesPerElement));
										int tmp23 = ::Std_obj::_int(tmp22);
										_this->length = tmp23;
										tmp16 = _this;
									}
									this1 = tmp16;
								}
								else{
									HX_STACK_DO_THROW(HX_HCSTRING("Invalid constructor arguments for Int32Array","\x9b","\x2e","\x53","\x61"));
								}
							}
						}
					}
				}
				tmp7 = this1;
			}
			;break;
			case (int)4: {
				::haxe::io::Bytes tmp10 = this->buffer;
				::haxe::io::Bytes buffer = tmp10;
				::lime::utils::ArrayBufferView this1;
				bool tmp11 = false;
				if ((tmp11)){
					::lime::utils::ArrayBufferView tmp12 = ::lime::utils::ArrayBufferView_obj::__new(null(),(int)4);
					this1 = tmp12;
				}
				else{
					bool tmp12 = false;
					if ((tmp12)){
						::lime::utils::ArrayBufferView tmp13;
						{
							::lime::utils::ArrayBufferView tmp14 = ::lime::utils::ArrayBufferView_obj::__new((int)0,(int)4);
							::lime::utils::ArrayBufferView _this = tmp14;
							_this->byteOffset = (int)0;
							int tmp15 = hx::Throw(HX_CSTRING("Invalid field access on null object"));
							_this->length = tmp15;
							int tmp16 = (_this->length * _this->bytesPerElement);
							_this->byteLength = tmp16;
							::haxe::io::Bytes tmp17;
							{
								::haxe::io::Bytes this2;
								int tmp18 = _this->byteLength;
								::haxe::io::Bytes tmp19 = ::haxe::io::Bytes_obj::alloc(tmp18);
								this2 = tmp19;
								tmp17 = this2;
							}
							_this->buffer = tmp17;
							_this->copyFromArray(((Array< Float >)(null())),null());
							tmp13 = _this;
						}
						this1 = tmp13;
					}
					else{
						bool tmp13 = false;
						if ((tmp13)){
							::lime::utils::ArrayBufferView tmp14;
							{
								::lime::utils::ArrayBufferView tmp15 = ::lime::utils::ArrayBufferView_obj::__new((int)0,(int)4);
								::lime::utils::ArrayBufferView _this = tmp15;
								cpp::ArrayBase array = hx::Throw(HX_CSTRING("Invalid field access on null object"));
								_this->byteOffset = (int)0;
								_this->length = array->__Field(HX_HCSTRING("length","\xe6","\x94","\x07","\x9f"), hx::paccDynamic );
								int tmp16 = (_this->length * _this->bytesPerElement);
								_this->byteLength = tmp16;
								::haxe::io::Bytes tmp17;
								{
									::haxe::io::Bytes this2;
									int tmp18 = _this->byteLength;
									::haxe::io::Bytes tmp19 = ::haxe::io::Bytes_obj::alloc(tmp18);
									this2 = tmp19;
									tmp17 = this2;
								}
								_this->buffer = tmp17;
								_this->copyFromArray(((Array< Float >)(array)),null());
								tmp14 = _this;
							}
							this1 = tmp14;
						}
						else{
							bool tmp14 = false;
							if ((tmp14)){
								::lime::utils::ArrayBufferView tmp15;
								{
									::lime::utils::ArrayBufferView tmp16 = ::lime::utils::ArrayBufferView_obj::__new((int)0,(int)4);
									::lime::utils::ArrayBufferView _this = tmp16;
									::haxe::io::Bytes tmp17 = hx::Throw(HX_CSTRING("Invalid field access on null object"));
									::haxe::io::Bytes srcData = tmp17;
									int tmp18 = hx::Throw(HX_CSTRING("Invalid field access on null object"));
									int srcLength = tmp18;
									int tmp19 = hx::Throw(HX_CSTRING("Invalid field access on null object"));
									int srcByteOffset = tmp19;
									int tmp20 = hx::Throw(HX_CSTRING("Invalid field access on null object"));
									int srcElementSize = tmp20;
									int elementSize = _this->bytesPerElement;
									int tmp21 = hx::Throw(HX_CSTRING("Invalid field access on null object"));
									int tmp22 = _this->type;
									bool tmp23 = (tmp21 == tmp22);
									if ((tmp23)){
										int srcLength1 = srcData->length;
										int tmp24 = (srcLength1 - srcByteOffset);
										int cloneLength = tmp24;
										::haxe::io::Bytes tmp25;
										{
											::haxe::io::Bytes this2;
											int tmp26 = cloneLength;
											::haxe::io::Bytes tmp27 = ::haxe::io::Bytes_obj::alloc(tmp26);
											this2 = tmp27;
											tmp25 = this2;
										}
										_this->buffer = tmp25;
										::haxe::io::Bytes tmp26 = srcData;
										int tmp27 = srcByteOffset;
										int tmp28 = cloneLength;
										_this->buffer->blit((int)0,tmp26,tmp27,tmp28);
									}
									else{
										HX_STACK_DO_THROW(HX_HCSTRING("unimplemented","\x09","\x2f","\x74","\xb4"));
									}
									int tmp24 = (_this->bytesPerElement * srcLength);
									_this->byteLength = tmp24;
									_this->byteOffset = (int)0;
									_this->length = srcLength;
									tmp15 = _this;
								}
								this1 = tmp15;
							}
							else{
								bool tmp15 = (buffer != null());
								if ((tmp15)){
									::lime::utils::ArrayBufferView tmp16;
									{
										::lime::utils::ArrayBufferView tmp17 = ::lime::utils::ArrayBufferView_obj::__new((int)0,(int)4);
										::lime::utils::ArrayBufferView _this = tmp17;
										int in_byteOffset = byte_offset;
										bool tmp18 = (in_byteOffset < (int)0);
										if ((tmp18)){
											HX_STACK_DO_THROW(::lime::utils::TAError_obj::RangeError);
										}
										int tmp19 = hx::Mod(in_byteOffset,_this->bytesPerElement);
										bool tmp20 = (tmp19 != (int)0);
										if ((tmp20)){
											HX_STACK_DO_THROW(::lime::utils::TAError_obj::RangeError);
										}
										int bufferByteLength = buffer->length;
										int elementSize = _this->bytesPerElement;
										int newByteLength = bufferByteLength;
										bool tmp21 = (len == null());
										if ((tmp21)){
											int tmp22 = (bufferByteLength - in_byteOffset);
											newByteLength = tmp22;
											int tmp23 = hx::Mod(bufferByteLength,_this->bytesPerElement);
											bool tmp24 = (tmp23 != (int)0);
											if ((tmp24)){
												HX_STACK_DO_THROW(::lime::utils::TAError_obj::RangeError);
											}
											bool tmp25 = (newByteLength < (int)0);
											if ((tmp25)){
												HX_STACK_DO_THROW(::lime::utils::TAError_obj::RangeError);
											}
										}
										else{
											int tmp22 = (len * _this->bytesPerElement);
											newByteLength = tmp22;
											int tmp23 = (in_byteOffset + newByteLength);
											int newRange = tmp23;
											bool tmp24 = (newRange > bufferByteLength);
											if ((tmp24)){
												HX_STACK_DO_THROW(::lime::utils::TAError_obj::RangeError);
											}
										}
										_this->buffer = buffer;
										_this->byteOffset = in_byteOffset;
										_this->byteLength = newByteLength;
										Float tmp22 = (Float(newByteLength) / Float(_this->bytesPerElement));
										int tmp23 = ::Std_obj::_int(tmp22);
										_this->length = tmp23;
										tmp16 = _this;
									}
									this1 = tmp16;
								}
								else{
									HX_STACK_DO_THROW(HX_HCSTRING("Invalid constructor arguments for UInt8Array","\x6b","\x44","\xd5","\x85"));
								}
							}
						}
					}
				}
				tmp7 = this1;
			}
			;break;
			case (int)5: {
				::haxe::io::Bytes tmp10 = this->buffer;
				::haxe::io::Bytes buffer = tmp10;
				::lime::utils::ArrayBufferView this1;
				bool tmp11 = false;
				if ((tmp11)){
					::lime::utils::ArrayBufferView tmp12 = ::lime::utils::ArrayBufferView_obj::__new(null(),(int)5);
					this1 = tmp12;
				}
				else{
					bool tmp12 = false;
					if ((tmp12)){
						::lime::utils::ArrayBufferView tmp13;
						{
							::lime::utils::ArrayBufferView tmp14 = ::lime::utils::ArrayBufferView_obj::__new((int)0,(int)5);
							::lime::utils::ArrayBufferView _this = tmp14;
							_this->byteOffset = (int)0;
							int tmp15 = hx::Throw(HX_CSTRING("Invalid field access on null object"));
							_this->length = tmp15;
							int tmp16 = (_this->length * _this->bytesPerElement);
							_this->byteLength = tmp16;
							::haxe::io::Bytes tmp17;
							{
								::haxe::io::Bytes this2;
								int tmp18 = _this->byteLength;
								::haxe::io::Bytes tmp19 = ::haxe::io::Bytes_obj::alloc(tmp18);
								this2 = tmp19;
								tmp17 = this2;
							}
							_this->buffer = tmp17;
							_this->copyFromArray(((Array< Float >)(null())),null());
							tmp13 = _this;
						}
						this1 = tmp13;
					}
					else{
						bool tmp13 = false;
						if ((tmp13)){
							::lime::utils::ArrayBufferView tmp14;
							{
								::lime::utils::ArrayBufferView tmp15 = ::lime::utils::ArrayBufferView_obj::__new((int)0,(int)5);
								::lime::utils::ArrayBufferView _this = tmp15;
								cpp::ArrayBase array = hx::Throw(HX_CSTRING("Invalid field access on null object"));
								_this->byteOffset = (int)0;
								_this->length = array->__Field(HX_HCSTRING("length","\xe6","\x94","\x07","\x9f"), hx::paccDynamic );
								int tmp16 = (_this->length * _this->bytesPerElement);
								_this->byteLength = tmp16;
								::haxe::io::Bytes tmp17;
								{
									::haxe::io::Bytes this2;
									int tmp18 = _this->byteLength;
									::haxe::io::Bytes tmp19 = ::haxe::io::Bytes_obj::alloc(tmp18);
									this2 = tmp19;
									tmp17 = this2;
								}
								_this->buffer = tmp17;
								_this->copyFromArray(((Array< Float >)(array)),null());
								tmp14 = _this;
							}
							this1 = tmp14;
						}
						else{
							bool tmp14 = false;
							if ((tmp14)){
								::lime::utils::ArrayBufferView tmp15;
								{
									::lime::utils::ArrayBufferView tmp16 = ::lime::utils::ArrayBufferView_obj::__new((int)0,(int)5);
									::lime::utils::ArrayBufferView _this = tmp16;
									::haxe::io::Bytes tmp17 = hx::Throw(HX_CSTRING("Invalid field access on null object"));
									::haxe::io::Bytes srcData = tmp17;
									int tmp18 = hx::Throw(HX_CSTRING("Invalid field access on null object"));
									int srcLength = tmp18;
									int tmp19 = hx::Throw(HX_CSTRING("Invalid field access on null object"));
									int srcByteOffset = tmp19;
									int tmp20 = hx::Throw(HX_CSTRING("Invalid field access on null object"));
									int srcElementSize = tmp20;
									int elementSize = _this->bytesPerElement;
									int tmp21 = hx::Throw(HX_CSTRING("Invalid field access on null object"));
									int tmp22 = _this->type;
									bool tmp23 = (tmp21 == tmp22);
									if ((tmp23)){
										int srcLength1 = srcData->length;
										int tmp24 = (srcLength1 - srcByteOffset);
										int cloneLength = tmp24;
										::haxe::io::Bytes tmp25;
										{
											::haxe::io::Bytes this2;
											int tmp26 = cloneLength;
											::haxe::io::Bytes tmp27 = ::haxe::io::Bytes_obj::alloc(tmp26);
											this2 = tmp27;
											tmp25 = this2;
										}
										_this->buffer = tmp25;
										::haxe::io::Bytes tmp26 = srcData;
										int tmp27 = srcByteOffset;
										int tmp28 = cloneLength;
										_this->buffer->blit((int)0,tmp26,tmp27,tmp28);
									}
									else{
										HX_STACK_DO_THROW(HX_HCSTRING("unimplemented","\x09","\x2f","\x74","\xb4"));
									}
									int tmp24 = (_this->bytesPerElement * srcLength);
									_this->byteLength = tmp24;
									_this->byteOffset = (int)0;
									_this->length = srcLength;
									tmp15 = _this;
								}
								this1 = tmp15;
							}
							else{
								bool tmp15 = (buffer != null());
								if ((tmp15)){
									::lime::utils::ArrayBufferView tmp16;
									{
										::lime::utils::ArrayBufferView tmp17 = ::lime::utils::ArrayBufferView_obj::__new((int)0,(int)5);
										::lime::utils::ArrayBufferView _this = tmp17;
										int in_byteOffset = byte_offset;
										bool tmp18 = (in_byteOffset < (int)0);
										if ((tmp18)){
											HX_STACK_DO_THROW(::lime::utils::TAError_obj::RangeError);
										}
										int tmp19 = hx::Mod(in_byteOffset,_this->bytesPerElement);
										bool tmp20 = (tmp19 != (int)0);
										if ((tmp20)){
											HX_STACK_DO_THROW(::lime::utils::TAError_obj::RangeError);
										}
										int bufferByteLength = buffer->length;
										int elementSize = _this->bytesPerElement;
										int newByteLength = bufferByteLength;
										bool tmp21 = (len == null());
										if ((tmp21)){
											int tmp22 = (bufferByteLength - in_byteOffset);
											newByteLength = tmp22;
											int tmp23 = hx::Mod(bufferByteLength,_this->bytesPerElement);
											bool tmp24 = (tmp23 != (int)0);
											if ((tmp24)){
												HX_STACK_DO_THROW(::lime::utils::TAError_obj::RangeError);
											}
											bool tmp25 = (newByteLength < (int)0);
											if ((tmp25)){
												HX_STACK_DO_THROW(::lime::utils::TAError_obj::RangeError);
											}
										}
										else{
											int tmp22 = (len * _this->bytesPerElement);
											newByteLength = tmp22;
											int tmp23 = (in_byteOffset + newByteLength);
											int newRange = tmp23;
											bool tmp24 = (newRange > bufferByteLength);
											if ((tmp24)){
												HX_STACK_DO_THROW(::lime::utils::TAError_obj::RangeError);
											}
										}
										_this->buffer = buffer;
										_this->byteOffset = in_byteOffset;
										_this->byteLength = newByteLength;
										Float tmp22 = (Float(newByteLength) / Float(_this->bytesPerElement));
										int tmp23 = ::Std_obj::_int(tmp22);
										_this->length = tmp23;
										tmp16 = _this;
									}
									this1 = tmp16;
								}
								else{
									HX_STACK_DO_THROW(HX_HCSTRING("Invalid constructor arguments for UInt8ClampedArray","\x8d","\x06","\x77","\x13"));
								}
							}
						}
					}
				}
				tmp7 = this1;
			}
			;break;
			case (int)6: {
				::haxe::io::Bytes tmp10 = this->buffer;
				::haxe::io::Bytes buffer = tmp10;
				::lime::utils::ArrayBufferView this1;
				bool tmp11 = false;
				if ((tmp11)){
					::lime::utils::ArrayBufferView tmp12 = ::lime::utils::ArrayBufferView_obj::__new(null(),(int)6);
					this1 = tmp12;
				}
				else{
					bool tmp12 = false;
					if ((tmp12)){
						::lime::utils::ArrayBufferView tmp13;
						{
							::lime::utils::ArrayBufferView tmp14 = ::lime::utils::ArrayBufferView_obj::__new((int)0,(int)6);
							::lime::utils::ArrayBufferView _this = tmp14;
							_this->byteOffset = (int)0;
							int tmp15 = hx::Throw(HX_CSTRING("Invalid field access on null object"));
							_this->length = tmp15;
							int tmp16 = (_this->length * _this->bytesPerElement);
							_this->byteLength = tmp16;
							::haxe::io::Bytes tmp17;
							{
								::haxe::io::Bytes this2;
								int tmp18 = _this->byteLength;
								::haxe::io::Bytes tmp19 = ::haxe::io::Bytes_obj::alloc(tmp18);
								this2 = tmp19;
								tmp17 = this2;
							}
							_this->buffer = tmp17;
							_this->copyFromArray(((Array< Float >)(null())),null());
							tmp13 = _this;
						}
						this1 = tmp13;
					}
					else{
						bool tmp13 = false;
						if ((tmp13)){
							::lime::utils::ArrayBufferView tmp14;
							{
								::lime::utils::ArrayBufferView tmp15 = ::lime::utils::ArrayBufferView_obj::__new((int)0,(int)6);
								::lime::utils::ArrayBufferView _this = tmp15;
								cpp::ArrayBase array = hx::Throw(HX_CSTRING("Invalid field access on null object"));
								_this->byteOffset = (int)0;
								_this->length = array->__Field(HX_HCSTRING("length","\xe6","\x94","\x07","\x9f"), hx::paccDynamic );
								int tmp16 = (_this->length * _this->bytesPerElement);
								_this->byteLength = tmp16;
								::haxe::io::Bytes tmp17;
								{
									::haxe::io::Bytes this2;
									int tmp18 = _this->byteLength;
									::haxe::io::Bytes tmp19 = ::haxe::io::Bytes_obj::alloc(tmp18);
									this2 = tmp19;
									tmp17 = this2;
								}
								_this->buffer = tmp17;
								_this->copyFromArray(((Array< Float >)(array)),null());
								tmp14 = _this;
							}
							this1 = tmp14;
						}
						else{
							bool tmp14 = false;
							if ((tmp14)){
								::lime::utils::ArrayBufferView tmp15;
								{
									::lime::utils::ArrayBufferView tmp16 = ::lime::utils::ArrayBufferView_obj::__new((int)0,(int)6);
									::lime::utils::ArrayBufferView _this = tmp16;
									::haxe::io::Bytes tmp17 = hx::Throw(HX_CSTRING("Invalid field access on null object"));
									::haxe::io::Bytes srcData = tmp17;
									int tmp18 = hx::Throw(HX_CSTRING("Invalid field access on null object"));
									int srcLength = tmp18;
									int tmp19 = hx::Throw(HX_CSTRING("Invalid field access on null object"));
									int srcByteOffset = tmp19;
									int tmp20 = hx::Throw(HX_CSTRING("Invalid field access on null object"));
									int srcElementSize = tmp20;
									int elementSize = _this->bytesPerElement;
									int tmp21 = hx::Throw(HX_CSTRING("Invalid field access on null object"));
									int tmp22 = _this->type;
									bool tmp23 = (tmp21 == tmp22);
									if ((tmp23)){
										int srcLength1 = srcData->length;
										int tmp24 = (srcLength1 - srcByteOffset);
										int cloneLength = tmp24;
										::haxe::io::Bytes tmp25;
										{
											::haxe::io::Bytes this2;
											int tmp26 = cloneLength;
											::haxe::io::Bytes tmp27 = ::haxe::io::Bytes_obj::alloc(tmp26);
											this2 = tmp27;
											tmp25 = this2;
										}
										_this->buffer = tmp25;
										::haxe::io::Bytes tmp26 = srcData;
										int tmp27 = srcByteOffset;
										int tmp28 = cloneLength;
										_this->buffer->blit((int)0,tmp26,tmp27,tmp28);
									}
									else{
										HX_STACK_DO_THROW(HX_HCSTRING("unimplemented","\x09","\x2f","\x74","\xb4"));
									}
									int tmp24 = (_this->bytesPerElement * srcLength);
									_this->byteLength = tmp24;
									_this->byteOffset = (int)0;
									_this->length = srcLength;
									tmp15 = _this;
								}
								this1 = tmp15;
							}
							else{
								bool tmp15 = (buffer != null());
								if ((tmp15)){
									::lime::utils::ArrayBufferView tmp16;
									{
										::lime::utils::ArrayBufferView tmp17 = ::lime::utils::ArrayBufferView_obj::__new((int)0,(int)6);
										::lime::utils::ArrayBufferView _this = tmp17;
										int in_byteOffset = byte_offset;
										bool tmp18 = (in_byteOffset < (int)0);
										if ((tmp18)){
											HX_STACK_DO_THROW(::lime::utils::TAError_obj::RangeError);
										}
										int tmp19 = hx::Mod(in_byteOffset,_this->bytesPerElement);
										bool tmp20 = (tmp19 != (int)0);
										if ((tmp20)){
											HX_STACK_DO_THROW(::lime::utils::TAError_obj::RangeError);
										}
										int bufferByteLength = buffer->length;
										int elementSize = _this->bytesPerElement;
										int newByteLength = bufferByteLength;
										bool tmp21 = (len == null());
										if ((tmp21)){
											int tmp22 = (bufferByteLength - in_byteOffset);
											newByteLength = tmp22;
											int tmp23 = hx::Mod(bufferByteLength,_this->bytesPerElement);
											bool tmp24 = (tmp23 != (int)0);
											if ((tmp24)){
												HX_STACK_DO_THROW(::lime::utils::TAError_obj::RangeError);
											}
											bool tmp25 = (newByteLength < (int)0);
											if ((tmp25)){
												HX_STACK_DO_THROW(::lime::utils::TAError_obj::RangeError);
											}
										}
										else{
											int tmp22 = (len * _this->bytesPerElement);
											newByteLength = tmp22;
											int tmp23 = (in_byteOffset + newByteLength);
											int newRange = tmp23;
											bool tmp24 = (newRange > bufferByteLength);
											if ((tmp24)){
												HX_STACK_DO_THROW(::lime::utils::TAError_obj::RangeError);
											}
										}
										_this->buffer = buffer;
										_this->byteOffset = in_byteOffset;
										_this->byteLength = newByteLength;
										Float tmp22 = (Float(newByteLength) / Float(_this->bytesPerElement));
										int tmp23 = ::Std_obj::_int(tmp22);
										_this->length = tmp23;
										tmp16 = _this;
									}
									this1 = tmp16;
								}
								else{
									HX_STACK_DO_THROW(HX_HCSTRING("Invalid constructor arguments for UInt16Array","\x0a","\xc7","\x2d","\xd5"));
								}
							}
						}
					}
				}
				tmp7 = this1;
			}
			;break;
			case (int)7: {
				::haxe::io::Bytes tmp10 = this->buffer;
				::haxe::io::Bytes buffer = tmp10;
				::lime::utils::ArrayBufferView this1;
				bool tmp11 = false;
				if ((tmp11)){
					::lime::utils::ArrayBufferView tmp12 = ::lime::utils::ArrayBufferView_obj::__new(null(),(int)7);
					this1 = tmp12;
				}
				else{
					bool tmp12 = false;
					if ((tmp12)){
						::lime::utils::ArrayBufferView tmp13;
						{
							::lime::utils::ArrayBufferView tmp14 = ::lime::utils::ArrayBufferView_obj::__new((int)0,(int)7);
							::lime::utils::ArrayBufferView _this = tmp14;
							_this->byteOffset = (int)0;
							int tmp15 = hx::Throw(HX_CSTRING("Invalid field access on null object"));
							_this->length = tmp15;
							int tmp16 = (_this->length * _this->bytesPerElement);
							_this->byteLength = tmp16;
							::haxe::io::Bytes tmp17;
							{
								::haxe::io::Bytes this2;
								int tmp18 = _this->byteLength;
								::haxe::io::Bytes tmp19 = ::haxe::io::Bytes_obj::alloc(tmp18);
								this2 = tmp19;
								tmp17 = this2;
							}
							_this->buffer = tmp17;
							_this->copyFromArray(((Array< Float >)(null())),null());
							tmp13 = _this;
						}
						this1 = tmp13;
					}
					else{
						bool tmp13 = false;
						if ((tmp13)){
							::lime::utils::ArrayBufferView tmp14;
							{
								::lime::utils::ArrayBufferView tmp15 = ::lime::utils::ArrayBufferView_obj::__new((int)0,(int)7);
								::lime::utils::ArrayBufferView _this = tmp15;
								cpp::ArrayBase array = hx::Throw(HX_CSTRING("Invalid field access on null object"));
								_this->byteOffset = (int)0;
								_this->length = array->__Field(HX_HCSTRING("length","\xe6","\x94","\x07","\x9f"), hx::paccDynamic );
								int tmp16 = (_this->length * _this->bytesPerElement);
								_this->byteLength = tmp16;
								::haxe::io::Bytes tmp17;
								{
									::haxe::io::Bytes this2;
									int tmp18 = _this->byteLength;
									::haxe::io::Bytes tmp19 = ::haxe::io::Bytes_obj::alloc(tmp18);
									this2 = tmp19;
									tmp17 = this2;
								}
								_this->buffer = tmp17;
								_this->copyFromArray(((Array< Float >)(array)),null());
								tmp14 = _this;
							}
							this1 = tmp14;
						}
						else{
							bool tmp14 = false;
							if ((tmp14)){
								::lime::utils::ArrayBufferView tmp15;
								{
									::lime::utils::ArrayBufferView tmp16 = ::lime::utils::ArrayBufferView_obj::__new((int)0,(int)7);
									::lime::utils::ArrayBufferView _this = tmp16;
									::haxe::io::Bytes tmp17 = hx::Throw(HX_CSTRING("Invalid field access on null object"));
									::haxe::io::Bytes srcData = tmp17;
									int tmp18 = hx::Throw(HX_CSTRING("Invalid field access on null object"));
									int srcLength = tmp18;
									int tmp19 = hx::Throw(HX_CSTRING("Invalid field access on null object"));
									int srcByteOffset = tmp19;
									int tmp20 = hx::Throw(HX_CSTRING("Invalid field access on null object"));
									int srcElementSize = tmp20;
									int elementSize = _this->bytesPerElement;
									int tmp21 = hx::Throw(HX_CSTRING("Invalid field access on null object"));
									int tmp22 = _this->type;
									bool tmp23 = (tmp21 == tmp22);
									if ((tmp23)){
										int srcLength1 = srcData->length;
										int tmp24 = (srcLength1 - srcByteOffset);
										int cloneLength = tmp24;
										::haxe::io::Bytes tmp25;
										{
											::haxe::io::Bytes this2;
											int tmp26 = cloneLength;
											::haxe::io::Bytes tmp27 = ::haxe::io::Bytes_obj::alloc(tmp26);
											this2 = tmp27;
											tmp25 = this2;
										}
										_this->buffer = tmp25;
										::haxe::io::Bytes tmp26 = srcData;
										int tmp27 = srcByteOffset;
										int tmp28 = cloneLength;
										_this->buffer->blit((int)0,tmp26,tmp27,tmp28);
									}
									else{
										HX_STACK_DO_THROW(HX_HCSTRING("unimplemented","\x09","\x2f","\x74","\xb4"));
									}
									int tmp24 = (_this->bytesPerElement * srcLength);
									_this->byteLength = tmp24;
									_this->byteOffset = (int)0;
									_this->length = srcLength;
									tmp15 = _this;
								}
								this1 = tmp15;
							}
							else{
								bool tmp15 = (buffer != null());
								if ((tmp15)){
									::lime::utils::ArrayBufferView tmp16;
									{
										::lime::utils::ArrayBufferView tmp17 = ::lime::utils::ArrayBufferView_obj::__new((int)0,(int)7);
										::lime::utils::ArrayBufferView _this = tmp17;
										int in_byteOffset = byte_offset;
										bool tmp18 = (in_byteOffset < (int)0);
										if ((tmp18)){
											HX_STACK_DO_THROW(::lime::utils::TAError_obj::RangeError);
										}
										int tmp19 = hx::Mod(in_byteOffset,_this->bytesPerElement);
										bool tmp20 = (tmp19 != (int)0);
										if ((tmp20)){
											HX_STACK_DO_THROW(::lime::utils::TAError_obj::RangeError);
										}
										int bufferByteLength = buffer->length;
										int elementSize = _this->bytesPerElement;
										int newByteLength = bufferByteLength;
										bool tmp21 = (len == null());
										if ((tmp21)){
											int tmp22 = (bufferByteLength - in_byteOffset);
											newByteLength = tmp22;
											int tmp23 = hx::Mod(bufferByteLength,_this->bytesPerElement);
											bool tmp24 = (tmp23 != (int)0);
											if ((tmp24)){
												HX_STACK_DO_THROW(::lime::utils::TAError_obj::RangeError);
											}
											bool tmp25 = (newByteLength < (int)0);
											if ((tmp25)){
												HX_STACK_DO_THROW(::lime::utils::TAError_obj::RangeError);
											}
										}
										else{
											int tmp22 = (len * _this->bytesPerElement);
											newByteLength = tmp22;
											int tmp23 = (in_byteOffset + newByteLength);
											int newRange = tmp23;
											bool tmp24 = (newRange > bufferByteLength);
											if ((tmp24)){
												HX_STACK_DO_THROW(::lime::utils::TAError_obj::RangeError);
											}
										}
										_this->buffer = buffer;
										_this->byteOffset = in_byteOffset;
										_this->byteLength = newByteLength;
										Float tmp22 = (Float(newByteLength) / Float(_this->bytesPerElement));
										int tmp23 = ::Std_obj::_int(tmp22);
										_this->length = tmp23;
										tmp16 = _this;
									}
									this1 = tmp16;
								}
								else{
									HX_STACK_DO_THROW(HX_HCSTRING("Invalid constructor arguments for UInt32Array","\x10","\x43","\xeb","\x8e"));
								}
							}
						}
					}
				}
				tmp7 = this1;
			}
			;break;
			case (int)8: {
				::haxe::io::Bytes tmp10 = this->buffer;
				::haxe::io::Bytes buffer = tmp10;
				::lime::utils::ArrayBufferView this1;
				bool tmp11 = false;
				if ((tmp11)){
					::lime::utils::ArrayBufferView tmp12 = ::lime::utils::ArrayBufferView_obj::__new(null(),(int)8);
					this1 = tmp12;
				}
				else{
					bool tmp12 = false;
					if ((tmp12)){
						::lime::utils::ArrayBufferView tmp13;
						{
							::lime::utils::ArrayBufferView tmp14 = ::lime::utils::ArrayBufferView_obj::__new((int)0,(int)8);
							::lime::utils::ArrayBufferView _this = tmp14;
							_this->byteOffset = (int)0;
							int tmp15 = hx::Throw(HX_CSTRING("Invalid field access on null object"));
							_this->length = tmp15;
							int tmp16 = (_this->length * _this->bytesPerElement);
							_this->byteLength = tmp16;
							::haxe::io::Bytes tmp17;
							{
								::haxe::io::Bytes this2;
								int tmp18 = _this->byteLength;
								::haxe::io::Bytes tmp19 = ::haxe::io::Bytes_obj::alloc(tmp18);
								this2 = tmp19;
								tmp17 = this2;
							}
							_this->buffer = tmp17;
							_this->copyFromArray(((Array< Float >)(null())),null());
							tmp13 = _this;
						}
						this1 = tmp13;
					}
					else{
						bool tmp13 = false;
						if ((tmp13)){
							::lime::utils::ArrayBufferView tmp14;
							{
								::lime::utils::ArrayBufferView tmp15 = ::lime::utils::ArrayBufferView_obj::__new((int)0,(int)8);
								::lime::utils::ArrayBufferView _this = tmp15;
								cpp::ArrayBase array = hx::Throw(HX_CSTRING("Invalid field access on null object"));
								_this->byteOffset = (int)0;
								_this->length = array->__Field(HX_HCSTRING("length","\xe6","\x94","\x07","\x9f"), hx::paccDynamic );
								int tmp16 = (_this->length * _this->bytesPerElement);
								_this->byteLength = tmp16;
								::haxe::io::Bytes tmp17;
								{
									::haxe::io::Bytes this2;
									int tmp18 = _this->byteLength;
									::haxe::io::Bytes tmp19 = ::haxe::io::Bytes_obj::alloc(tmp18);
									this2 = tmp19;
									tmp17 = this2;
								}
								_this->buffer = tmp17;
								_this->copyFromArray(((Array< Float >)(array)),null());
								tmp14 = _this;
							}
							this1 = tmp14;
						}
						else{
							bool tmp14 = false;
							if ((tmp14)){
								::lime::utils::ArrayBufferView tmp15;
								{
									::lime::utils::ArrayBufferView tmp16 = ::lime::utils::ArrayBufferView_obj::__new((int)0,(int)8);
									::lime::utils::ArrayBufferView _this = tmp16;
									::haxe::io::Bytes tmp17 = hx::Throw(HX_CSTRING("Invalid field access on null object"));
									::haxe::io::Bytes srcData = tmp17;
									int tmp18 = hx::Throw(HX_CSTRING("Invalid field access on null object"));
									int srcLength = tmp18;
									int tmp19 = hx::Throw(HX_CSTRING("Invalid field access on null object"));
									int srcByteOffset = tmp19;
									int tmp20 = hx::Throw(HX_CSTRING("Invalid field access on null object"));
									int srcElementSize = tmp20;
									int elementSize = _this->bytesPerElement;
									int tmp21 = hx::Throw(HX_CSTRING("Invalid field access on null object"));
									int tmp22 = _this->type;
									bool tmp23 = (tmp21 == tmp22);
									if ((tmp23)){
										int srcLength1 = srcData->length;
										int tmp24 = (srcLength1 - srcByteOffset);
										int cloneLength = tmp24;
										::haxe::io::Bytes tmp25;
										{
											::haxe::io::Bytes this2;
											int tmp26 = cloneLength;
											::haxe::io::Bytes tmp27 = ::haxe::io::Bytes_obj::alloc(tmp26);
											this2 = tmp27;
											tmp25 = this2;
										}
										_this->buffer = tmp25;
										::haxe::io::Bytes tmp26 = srcData;
										int tmp27 = srcByteOffset;
										int tmp28 = cloneLength;
										_this->buffer->blit((int)0,tmp26,tmp27,tmp28);
									}
									else{
										HX_STACK_DO_THROW(HX_HCSTRING("unimplemented","\x09","\x2f","\x74","\xb4"));
									}
									int tmp24 = (_this->bytesPerElement * srcLength);
									_this->byteLength = tmp24;
									_this->byteOffset = (int)0;
									_this->length = srcLength;
									tmp15 = _this;
								}
								this1 = tmp15;
							}
							else{
								bool tmp15 = (buffer != null());
								if ((tmp15)){
									::lime::utils::ArrayBufferView tmp16;
									{
										::lime::utils::ArrayBufferView tmp17 = ::lime::utils::ArrayBufferView_obj::__new((int)0,(int)8);
										::lime::utils::ArrayBufferView _this = tmp17;
										int in_byteOffset = byte_offset;
										bool tmp18 = (in_byteOffset < (int)0);
										if ((tmp18)){
											HX_STACK_DO_THROW(::lime::utils::TAError_obj::RangeError);
										}
										int tmp19 = hx::Mod(in_byteOffset,_this->bytesPerElement);
										bool tmp20 = (tmp19 != (int)0);
										if ((tmp20)){
											HX_STACK_DO_THROW(::lime::utils::TAError_obj::RangeError);
										}
										int bufferByteLength = buffer->length;
										int elementSize = _this->bytesPerElement;
										int newByteLength = bufferByteLength;
										bool tmp21 = (len == null());
										if ((tmp21)){
											int tmp22 = (bufferByteLength - in_byteOffset);
											newByteLength = tmp22;
											int tmp23 = hx::Mod(bufferByteLength,_this->bytesPerElement);
											bool tmp24 = (tmp23 != (int)0);
											if ((tmp24)){
												HX_STACK_DO_THROW(::lime::utils::TAError_obj::RangeError);
											}
											bool tmp25 = (newByteLength < (int)0);
											if ((tmp25)){
												HX_STACK_DO_THROW(::lime::utils::TAError_obj::RangeError);
											}
										}
										else{
											int tmp22 = (len * _this->bytesPerElement);
											newByteLength = tmp22;
											int tmp23 = (in_byteOffset + newByteLength);
											int newRange = tmp23;
											bool tmp24 = (newRange > bufferByteLength);
											if ((tmp24)){
												HX_STACK_DO_THROW(::lime::utils::TAError_obj::RangeError);
											}
										}
										_this->buffer = buffer;
										_this->byteOffset = in_byteOffset;
										_this->byteLength = newByteLength;
										Float tmp22 = (Float(newByteLength) / Float(_this->bytesPerElement));
										int tmp23 = ::Std_obj::_int(tmp22);
										_this->length = tmp23;
										tmp16 = _this;
									}
									this1 = tmp16;
								}
								else{
									HX_STACK_DO_THROW(HX_HCSTRING("Invalid constructor arguments for Float32Array","\x8e","\xc1","\xf4","\xd4"));
								}
							}
						}
					}
				}
				tmp7 = this1;
			}
			;break;
			case (int)9: {
				::haxe::io::Bytes tmp10 = this->buffer;
				::haxe::io::Bytes buffer = tmp10;
				::lime::utils::ArrayBufferView this1;
				bool tmp11 = false;
				if ((tmp11)){
					::lime::utils::ArrayBufferView tmp12 = ::lime::utils::ArrayBufferView_obj::__new(null(),(int)9);
					this1 = tmp12;
				}
				else{
					bool tmp12 = false;
					if ((tmp12)){
						::lime::utils::ArrayBufferView tmp13;
						{
							::lime::utils::ArrayBufferView tmp14 = ::lime::utils::ArrayBufferView_obj::__new((int)0,(int)9);
							::lime::utils::ArrayBufferView _this = tmp14;
							_this->byteOffset = (int)0;
							int tmp15 = hx::Throw(HX_CSTRING("Invalid field access on null object"));
							_this->length = tmp15;
							int tmp16 = (_this->length * _this->bytesPerElement);
							_this->byteLength = tmp16;
							::haxe::io::Bytes tmp17;
							{
								::haxe::io::Bytes this2;
								int tmp18 = _this->byteLength;
								::haxe::io::Bytes tmp19 = ::haxe::io::Bytes_obj::alloc(tmp18);
								this2 = tmp19;
								tmp17 = this2;
							}
							_this->buffer = tmp17;
							_this->copyFromArray(((Array< Float >)(null())),null());
							tmp13 = _this;
						}
						this1 = tmp13;
					}
					else{
						bool tmp13 = false;
						if ((tmp13)){
							::lime::utils::ArrayBufferView tmp14;
							{
								::lime::utils::ArrayBufferView tmp15 = ::lime::utils::ArrayBufferView_obj::__new((int)0,(int)9);
								::lime::utils::ArrayBufferView _this = tmp15;
								cpp::ArrayBase array = hx::Throw(HX_CSTRING("Invalid field access on null object"));
								_this->byteOffset = (int)0;
								_this->length = array->__Field(HX_HCSTRING("length","\xe6","\x94","\x07","\x9f"), hx::paccDynamic );
								int tmp16 = (_this->length * _this->bytesPerElement);
								_this->byteLength = tmp16;
								::haxe::io::Bytes tmp17;
								{
									::haxe::io::Bytes this2;
									int tmp18 = _this->byteLength;
									::haxe::io::Bytes tmp19 = ::haxe::io::Bytes_obj::alloc(tmp18);
									this2 = tmp19;
									tmp17 = this2;
								}
								_this->buffer = tmp17;
								_this->copyFromArray(((Array< Float >)(array)),null());
								tmp14 = _this;
							}
							this1 = tmp14;
						}
						else{
							bool tmp14 = false;
							if ((tmp14)){
								::lime::utils::ArrayBufferView tmp15;
								{
									::lime::utils::ArrayBufferView tmp16 = ::lime::utils::ArrayBufferView_obj::__new((int)0,(int)9);
									::lime::utils::ArrayBufferView _this = tmp16;
									::haxe::io::Bytes tmp17 = hx::Throw(HX_CSTRING("Invalid field access on null object"));
									::haxe::io::Bytes srcData = tmp17;
									int tmp18 = hx::Throw(HX_CSTRING("Invalid field access on null object"));
									int srcLength = tmp18;
									int tmp19 = hx::Throw(HX_CSTRING("Invalid field access on null object"));
									int srcByteOffset = tmp19;
									int tmp20 = hx::Throw(HX_CSTRING("Invalid field access on null object"));
									int srcElementSize = tmp20;
									int elementSize = _this->bytesPerElement;
									int tmp21 = hx::Throw(HX_CSTRING("Invalid field access on null object"));
									int tmp22 = _this->type;
									bool tmp23 = (tmp21 == tmp22);
									if ((tmp23)){
										int srcLength1 = srcData->length;
										int tmp24 = (srcLength1 - srcByteOffset);
										int cloneLength = tmp24;
										::haxe::io::Bytes tmp25;
										{
											::haxe::io::Bytes this2;
											int tmp26 = cloneLength;
											::haxe::io::Bytes tmp27 = ::haxe::io::Bytes_obj::alloc(tmp26);
											this2 = tmp27;
											tmp25 = this2;
										}
										_this->buffer = tmp25;
										::haxe::io::Bytes tmp26 = srcData;
										int tmp27 = srcByteOffset;
										int tmp28 = cloneLength;
										_this->buffer->blit((int)0,tmp26,tmp27,tmp28);
									}
									else{
										HX_STACK_DO_THROW(HX_HCSTRING("unimplemented","\x09","\x2f","\x74","\xb4"));
									}
									int tmp24 = (_this->bytesPerElement * srcLength);
									_this->byteLength = tmp24;
									_this->byteOffset = (int)0;
									_this->length = srcLength;
									tmp15 = _this;
								}
								this1 = tmp15;
							}
							else{
								bool tmp15 = (buffer != null());
								if ((tmp15)){
									::lime::utils::ArrayBufferView tmp16;
									{
										::lime::utils::ArrayBufferView tmp17 = ::lime::utils::ArrayBufferView_obj::__new((int)0,(int)9);
										::lime::utils::ArrayBufferView _this = tmp17;
										int in_byteOffset = byte_offset;
										bool tmp18 = (in_byteOffset < (int)0);
										if ((tmp18)){
											HX_STACK_DO_THROW(::lime::utils::TAError_obj::RangeError);
										}
										int tmp19 = hx::Mod(in_byteOffset,_this->bytesPerElement);
										bool tmp20 = (tmp19 != (int)0);
										if ((tmp20)){
											HX_STACK_DO_THROW(::lime::utils::TAError_obj::RangeError);
										}
										int bufferByteLength = buffer->length;
										int elementSize = _this->bytesPerElement;
										int newByteLength = bufferByteLength;
										bool tmp21 = (len == null());
										if ((tmp21)){
											int tmp22 = (bufferByteLength - in_byteOffset);
											newByteLength = tmp22;
											int tmp23 = hx::Mod(bufferByteLength,_this->bytesPerElement);
											bool tmp24 = (tmp23 != (int)0);
											if ((tmp24)){
												HX_STACK_DO_THROW(::lime::utils::TAError_obj::RangeError);
											}
											bool tmp25 = (newByteLength < (int)0);
											if ((tmp25)){
												HX_STACK_DO_THROW(::lime::utils::TAError_obj::RangeError);
											}
										}
										else{
											int tmp22 = (len * _this->bytesPerElement);
											newByteLength = tmp22;
											int tmp23 = (in_byteOffset + newByteLength);
											int newRange = tmp23;
											bool tmp24 = (newRange > bufferByteLength);
											if ((tmp24)){
												HX_STACK_DO_THROW(::lime::utils::TAError_obj::RangeError);
											}
										}
										_this->buffer = buffer;
										_this->byteOffset = in_byteOffset;
										_this->byteLength = newByteLength;
										Float tmp22 = (Float(newByteLength) / Float(_this->bytesPerElement));
										int tmp23 = ::Std_obj::_int(tmp22);
										_this->length = tmp23;
										tmp16 = _this;
									}
									this1 = tmp16;
								}
								else{
									HX_STACK_DO_THROW(HX_HCSTRING("Invalid constructor arguments for Float64Array","\x8f","\xde","\x6b","\x1e"));
								}
							}
						}
					}
				}
				tmp7 = this1;
			}
			;break;
			case (int)0: {
				HX_STACK_DO_THROW(HX_HCSTRING("subarray on a blank ArrayBufferView","\x39","\x87","\xfd","\x19"));
			}
			;break;
		}
	}
	::lime::utils::ArrayBufferView view = tmp7;
	::lime::utils::ArrayBufferView tmp8 = view;
	return tmp8;
}


HX_DEFINE_DYNAMIC_FUNC2(ArrayBufferView_obj,subarray_lime_utils_Float32Array,return )

::lime::utils::ArrayBufferView ArrayBufferView_obj::subarray_lime_utils_UInt8Array( int begin,Dynamic end){
	bool tmp = (end == null());
	if ((tmp)){
		int tmp1 = this->length;
		end = tmp1;
	}
	int tmp1 = (end - begin);
	int len = tmp1;
	int tmp2 = begin;
	int tmp3 = this->bytesPerElement;
	int tmp4 = (tmp2 * tmp3);
	int tmp5 = this->byteOffset;
	int tmp6 = (tmp4 + tmp5);
	int byte_offset = tmp6;
	::lime::utils::ArrayBufferView tmp7;
	{
		int tmp8 = this->type;
		int _g = tmp8;
		int tmp9 = _g;
		switch( (int)(tmp9)){
			case (int)1: {
				::haxe::io::Bytes tmp10 = this->buffer;
				::haxe::io::Bytes buffer = tmp10;
				::lime::utils::ArrayBufferView this1;
				bool tmp11 = false;
				if ((tmp11)){
					::lime::utils::ArrayBufferView tmp12 = ::lime::utils::ArrayBufferView_obj::__new(null(),(int)1);
					this1 = tmp12;
				}
				else{
					bool tmp12 = false;
					if ((tmp12)){
						::lime::utils::ArrayBufferView tmp13;
						{
							::lime::utils::ArrayBufferView tmp14 = ::lime::utils::ArrayBufferView_obj::__new((int)0,(int)1);
							::lime::utils::ArrayBufferView _this = tmp14;
							_this->byteOffset = (int)0;
							int tmp15 = hx::Throw(HX_CSTRING("Invalid field access on null object"));
							_this->length = tmp15;
							int tmp16 = (_this->length * _this->bytesPerElement);
							_this->byteLength = tmp16;
							::haxe::io::Bytes tmp17;
							{
								::haxe::io::Bytes this2;
								int tmp18 = _this->byteLength;
								::haxe::io::Bytes tmp19 = ::haxe::io::Bytes_obj::alloc(tmp18);
								this2 = tmp19;
								tmp17 = this2;
							}
							_this->buffer = tmp17;
							_this->copyFromArray(((Array< Float >)(null())),null());
							tmp13 = _this;
						}
						this1 = tmp13;
					}
					else{
						bool tmp13 = false;
						if ((tmp13)){
							::lime::utils::ArrayBufferView tmp14;
							{
								::lime::utils::ArrayBufferView tmp15 = ::lime::utils::ArrayBufferView_obj::__new((int)0,(int)1);
								::lime::utils::ArrayBufferView _this = tmp15;
								cpp::ArrayBase array = hx::Throw(HX_CSTRING("Invalid field access on null object"));
								_this->byteOffset = (int)0;
								_this->length = array->__Field(HX_HCSTRING("length","\xe6","\x94","\x07","\x9f"), hx::paccDynamic );
								int tmp16 = (_this->length * _this->bytesPerElement);
								_this->byteLength = tmp16;
								::haxe::io::Bytes tmp17;
								{
									::haxe::io::Bytes this2;
									int tmp18 = _this->byteLength;
									::haxe::io::Bytes tmp19 = ::haxe::io::Bytes_obj::alloc(tmp18);
									this2 = tmp19;
									tmp17 = this2;
								}
								_this->buffer = tmp17;
								_this->copyFromArray(((Array< Float >)(array)),null());
								tmp14 = _this;
							}
							this1 = tmp14;
						}
						else{
							bool tmp14 = false;
							if ((tmp14)){
								::lime::utils::ArrayBufferView tmp15;
								{
									::lime::utils::ArrayBufferView tmp16 = ::lime::utils::ArrayBufferView_obj::__new((int)0,(int)1);
									::lime::utils::ArrayBufferView _this = tmp16;
									::haxe::io::Bytes tmp17 = hx::Throw(HX_CSTRING("Invalid field access on null object"));
									::haxe::io::Bytes srcData = tmp17;
									int tmp18 = hx::Throw(HX_CSTRING("Invalid field access on null object"));
									int srcLength = tmp18;
									int tmp19 = hx::Throw(HX_CSTRING("Invalid field access on null object"));
									int srcByteOffset = tmp19;
									int tmp20 = hx::Throw(HX_CSTRING("Invalid field access on null object"));
									int srcElementSize = tmp20;
									int elementSize = _this->bytesPerElement;
									int tmp21 = hx::Throw(HX_CSTRING("Invalid field access on null object"));
									int tmp22 = _this->type;
									bool tmp23 = (tmp21 == tmp22);
									if ((tmp23)){
										int srcLength1 = srcData->length;
										int tmp24 = (srcLength1 - srcByteOffset);
										int cloneLength = tmp24;
										::haxe::io::Bytes tmp25;
										{
											::haxe::io::Bytes this2;
											int tmp26 = cloneLength;
											::haxe::io::Bytes tmp27 = ::haxe::io::Bytes_obj::alloc(tmp26);
											this2 = tmp27;
											tmp25 = this2;
										}
										_this->buffer = tmp25;
										::haxe::io::Bytes tmp26 = srcData;
										int tmp27 = srcByteOffset;
										int tmp28 = cloneLength;
										_this->buffer->blit((int)0,tmp26,tmp27,tmp28);
									}
									else{
										HX_STACK_DO_THROW(HX_HCSTRING("unimplemented","\x09","\x2f","\x74","\xb4"));
									}
									int tmp24 = (_this->bytesPerElement * srcLength);
									_this->byteLength = tmp24;
									_this->byteOffset = (int)0;
									_this->length = srcLength;
									tmp15 = _this;
								}
								this1 = tmp15;
							}
							else{
								bool tmp15 = (buffer != null());
								if ((tmp15)){
									::lime::utils::ArrayBufferView tmp16;
									{
										::lime::utils::ArrayBufferView tmp17 = ::lime::utils::ArrayBufferView_obj::__new((int)0,(int)1);
										::lime::utils::ArrayBufferView _this = tmp17;
										int in_byteOffset = byte_offset;
										bool tmp18 = (in_byteOffset < (int)0);
										if ((tmp18)){
											HX_STACK_DO_THROW(::lime::utils::TAError_obj::RangeError);
										}
										int tmp19 = hx::Mod(in_byteOffset,_this->bytesPerElement);
										bool tmp20 = (tmp19 != (int)0);
										if ((tmp20)){
											HX_STACK_DO_THROW(::lime::utils::TAError_obj::RangeError);
										}
										int bufferByteLength = buffer->length;
										int elementSize = _this->bytesPerElement;
										int newByteLength = bufferByteLength;
										bool tmp21 = (len == null());
										if ((tmp21)){
											int tmp22 = (bufferByteLength - in_byteOffset);
											newByteLength = tmp22;
											int tmp23 = hx::Mod(bufferByteLength,_this->bytesPerElement);
											bool tmp24 = (tmp23 != (int)0);
											if ((tmp24)){
												HX_STACK_DO_THROW(::lime::utils::TAError_obj::RangeError);
											}
											bool tmp25 = (newByteLength < (int)0);
											if ((tmp25)){
												HX_STACK_DO_THROW(::lime::utils::TAError_obj::RangeError);
											}
										}
										else{
											int tmp22 = (len * _this->bytesPerElement);
											newByteLength = tmp22;
											int tmp23 = (in_byteOffset + newByteLength);
											int newRange = tmp23;
											bool tmp24 = (newRange > bufferByteLength);
											if ((tmp24)){
												HX_STACK_DO_THROW(::lime::utils::TAError_obj::RangeError);
											}
										}
										_this->buffer = buffer;
										_this->byteOffset = in_byteOffset;
										_this->byteLength = newByteLength;
										Float tmp22 = (Float(newByteLength) / Float(_this->bytesPerElement));
										int tmp23 = ::Std_obj::_int(tmp22);
										_this->length = tmp23;
										tmp16 = _this;
									}
									this1 = tmp16;
								}
								else{
									HX_STACK_DO_THROW(HX_HCSTRING("Invalid constructor arguments for Int8Array","\x40","\x53","\xda","\x77"));
								}
							}
						}
					}
				}
				tmp7 = this1;
			}
			;break;
			case (int)2: {
				::haxe::io::Bytes tmp10 = this->buffer;
				::haxe::io::Bytes buffer = tmp10;
				::lime::utils::ArrayBufferView this1;
				bool tmp11 = false;
				if ((tmp11)){
					::lime::utils::ArrayBufferView tmp12 = ::lime::utils::ArrayBufferView_obj::__new(null(),(int)2);
					this1 = tmp12;
				}
				else{
					bool tmp12 = false;
					if ((tmp12)){
						::lime::utils::ArrayBufferView tmp13;
						{
							::lime::utils::ArrayBufferView tmp14 = ::lime::utils::ArrayBufferView_obj::__new((int)0,(int)2);
							::lime::utils::ArrayBufferView _this = tmp14;
							_this->byteOffset = (int)0;
							int tmp15 = hx::Throw(HX_CSTRING("Invalid field access on null object"));
							_this->length = tmp15;
							int tmp16 = (_this->length * _this->bytesPerElement);
							_this->byteLength = tmp16;
							::haxe::io::Bytes tmp17;
							{
								::haxe::io::Bytes this2;
								int tmp18 = _this->byteLength;
								::haxe::io::Bytes tmp19 = ::haxe::io::Bytes_obj::alloc(tmp18);
								this2 = tmp19;
								tmp17 = this2;
							}
							_this->buffer = tmp17;
							_this->copyFromArray(((Array< Float >)(null())),null());
							tmp13 = _this;
						}
						this1 = tmp13;
					}
					else{
						bool tmp13 = false;
						if ((tmp13)){
							::lime::utils::ArrayBufferView tmp14;
							{
								::lime::utils::ArrayBufferView tmp15 = ::lime::utils::ArrayBufferView_obj::__new((int)0,(int)2);
								::lime::utils::ArrayBufferView _this = tmp15;
								cpp::ArrayBase array = hx::Throw(HX_CSTRING("Invalid field access on null object"));
								_this->byteOffset = (int)0;
								_this->length = array->__Field(HX_HCSTRING("length","\xe6","\x94","\x07","\x9f"), hx::paccDynamic );
								int tmp16 = (_this->length * _this->bytesPerElement);
								_this->byteLength = tmp16;
								::haxe::io::Bytes tmp17;
								{
									::haxe::io::Bytes this2;
									int tmp18 = _this->byteLength;
									::haxe::io::Bytes tmp19 = ::haxe::io::Bytes_obj::alloc(tmp18);
									this2 = tmp19;
									tmp17 = this2;
								}
								_this->buffer = tmp17;
								_this->copyFromArray(((Array< Float >)(array)),null());
								tmp14 = _this;
							}
							this1 = tmp14;
						}
						else{
							bool tmp14 = false;
							if ((tmp14)){
								::lime::utils::ArrayBufferView tmp15;
								{
									::lime::utils::ArrayBufferView tmp16 = ::lime::utils::ArrayBufferView_obj::__new((int)0,(int)2);
									::lime::utils::ArrayBufferView _this = tmp16;
									::haxe::io::Bytes tmp17 = hx::Throw(HX_CSTRING("Invalid field access on null object"));
									::haxe::io::Bytes srcData = tmp17;
									int tmp18 = hx::Throw(HX_CSTRING("Invalid field access on null object"));
									int srcLength = tmp18;
									int tmp19 = hx::Throw(HX_CSTRING("Invalid field access on null object"));
									int srcByteOffset = tmp19;
									int tmp20 = hx::Throw(HX_CSTRING("Invalid field access on null object"));
									int srcElementSize = tmp20;
									int elementSize = _this->bytesPerElement;
									int tmp21 = hx::Throw(HX_CSTRING("Invalid field access on null object"));
									int tmp22 = _this->type;
									bool tmp23 = (tmp21 == tmp22);
									if ((tmp23)){
										int srcLength1 = srcData->length;
										int tmp24 = (srcLength1 - srcByteOffset);
										int cloneLength = tmp24;
										::haxe::io::Bytes tmp25;
										{
											::haxe::io::Bytes this2;
											int tmp26 = cloneLength;
											::haxe::io::Bytes tmp27 = ::haxe::io::Bytes_obj::alloc(tmp26);
											this2 = tmp27;
											tmp25 = this2;
										}
										_this->buffer = tmp25;
										::haxe::io::Bytes tmp26 = srcData;
										int tmp27 = srcByteOffset;
										int tmp28 = cloneLength;
										_this->buffer->blit((int)0,tmp26,tmp27,tmp28);
									}
									else{
										HX_STACK_DO_THROW(HX_HCSTRING("unimplemented","\x09","\x2f","\x74","\xb4"));
									}
									int tmp24 = (_this->bytesPerElement * srcLength);
									_this->byteLength = tmp24;
									_this->byteOffset = (int)0;
									_this->length = srcLength;
									tmp15 = _this;
								}
								this1 = tmp15;
							}
							else{
								bool tmp15 = (buffer != null());
								if ((tmp15)){
									::lime::utils::ArrayBufferView tmp16;
									{
										::lime::utils::ArrayBufferView tmp17 = ::lime::utils::ArrayBufferView_obj::__new((int)0,(int)2);
										::lime::utils::ArrayBufferView _this = tmp17;
										int in_byteOffset = byte_offset;
										bool tmp18 = (in_byteOffset < (int)0);
										if ((tmp18)){
											HX_STACK_DO_THROW(::lime::utils::TAError_obj::RangeError);
										}
										int tmp19 = hx::Mod(in_byteOffset,_this->bytesPerElement);
										bool tmp20 = (tmp19 != (int)0);
										if ((tmp20)){
											HX_STACK_DO_THROW(::lime::utils::TAError_obj::RangeError);
										}
										int bufferByteLength = buffer->length;
										int elementSize = _this->bytesPerElement;
										int newByteLength = bufferByteLength;
										bool tmp21 = (len == null());
										if ((tmp21)){
											int tmp22 = (bufferByteLength - in_byteOffset);
											newByteLength = tmp22;
											int tmp23 = hx::Mod(bufferByteLength,_this->bytesPerElement);
											bool tmp24 = (tmp23 != (int)0);
											if ((tmp24)){
												HX_STACK_DO_THROW(::lime::utils::TAError_obj::RangeError);
											}
											bool tmp25 = (newByteLength < (int)0);
											if ((tmp25)){
												HX_STACK_DO_THROW(::lime::utils::TAError_obj::RangeError);
											}
										}
										else{
											int tmp22 = (len * _this->bytesPerElement);
											newByteLength = tmp22;
											int tmp23 = (in_byteOffset + newByteLength);
											int newRange = tmp23;
											bool tmp24 = (newRange > bufferByteLength);
											if ((tmp24)){
												HX_STACK_DO_THROW(::lime::utils::TAError_obj::RangeError);
											}
										}
										_this->buffer = buffer;
										_this->byteOffset = in_byteOffset;
										_this->byteLength = newByteLength;
										Float tmp22 = (Float(newByteLength) / Float(_this->bytesPerElement));
										int tmp23 = ::Std_obj::_int(tmp22);
										_this->length = tmp23;
										tmp16 = _this;
									}
									this1 = tmp16;
								}
								else{
									HX_STACK_DO_THROW(HX_HCSTRING("Invalid constructor arguments for Int16Array","\x95","\xb2","\x95","\xa7"));
								}
							}
						}
					}
				}
				tmp7 = this1;
			}
			;break;
			case (int)3: {
				::haxe::io::Bytes tmp10 = this->buffer;
				::haxe::io::Bytes buffer = tmp10;
				::lime::utils::ArrayBufferView this1;
				bool tmp11 = false;
				if ((tmp11)){
					::lime::utils::ArrayBufferView tmp12 = ::lime::utils::ArrayBufferView_obj::__new(null(),(int)3);
					this1 = tmp12;
				}
				else{
					bool tmp12 = false;
					if ((tmp12)){
						::lime::utils::ArrayBufferView tmp13;
						{
							::lime::utils::ArrayBufferView tmp14 = ::lime::utils::ArrayBufferView_obj::__new((int)0,(int)3);
							::lime::utils::ArrayBufferView _this = tmp14;
							_this->byteOffset = (int)0;
							int tmp15 = hx::Throw(HX_CSTRING("Invalid field access on null object"));
							_this->length = tmp15;
							int tmp16 = (_this->length * _this->bytesPerElement);
							_this->byteLength = tmp16;
							::haxe::io::Bytes tmp17;
							{
								::haxe::io::Bytes this2;
								int tmp18 = _this->byteLength;
								::haxe::io::Bytes tmp19 = ::haxe::io::Bytes_obj::alloc(tmp18);
								this2 = tmp19;
								tmp17 = this2;
							}
							_this->buffer = tmp17;
							_this->copyFromArray(((Array< Float >)(null())),null());
							tmp13 = _this;
						}
						this1 = tmp13;
					}
					else{
						bool tmp13 = false;
						if ((tmp13)){
							::lime::utils::ArrayBufferView tmp14;
							{
								::lime::utils::ArrayBufferView tmp15 = ::lime::utils::ArrayBufferView_obj::__new((int)0,(int)3);
								::lime::utils::ArrayBufferView _this = tmp15;
								cpp::ArrayBase array = hx::Throw(HX_CSTRING("Invalid field access on null object"));
								_this->byteOffset = (int)0;
								_this->length = array->__Field(HX_HCSTRING("length","\xe6","\x94","\x07","\x9f"), hx::paccDynamic );
								int tmp16 = (_this->length * _this->bytesPerElement);
								_this->byteLength = tmp16;
								::haxe::io::Bytes tmp17;
								{
									::haxe::io::Bytes this2;
									int tmp18 = _this->byteLength;
									::haxe::io::Bytes tmp19 = ::haxe::io::Bytes_obj::alloc(tmp18);
									this2 = tmp19;
									tmp17 = this2;
								}
								_this->buffer = tmp17;
								_this->copyFromArray(((Array< Float >)(array)),null());
								tmp14 = _this;
							}
							this1 = tmp14;
						}
						else{
							bool tmp14 = false;
							if ((tmp14)){
								::lime::utils::ArrayBufferView tmp15;
								{
									::lime::utils::ArrayBufferView tmp16 = ::lime::utils::ArrayBufferView_obj::__new((int)0,(int)3);
									::lime::utils::ArrayBufferView _this = tmp16;
									::haxe::io::Bytes tmp17 = hx::Throw(HX_CSTRING("Invalid field access on null object"));
									::haxe::io::Bytes srcData = tmp17;
									int tmp18 = hx::Throw(HX_CSTRING("Invalid field access on null object"));
									int srcLength = tmp18;
									int tmp19 = hx::Throw(HX_CSTRING("Invalid field access on null object"));
									int srcByteOffset = tmp19;
									int tmp20 = hx::Throw(HX_CSTRING("Invalid field access on null object"));
									int srcElementSize = tmp20;
									int elementSize = _this->bytesPerElement;
									int tmp21 = hx::Throw(HX_CSTRING("Invalid field access on null object"));
									int tmp22 = _this->type;
									bool tmp23 = (tmp21 == tmp22);
									if ((tmp23)){
										int srcLength1 = srcData->length;
										int tmp24 = (srcLength1 - srcByteOffset);
										int cloneLength = tmp24;
										::haxe::io::Bytes tmp25;
										{
											::haxe::io::Bytes this2;
											int tmp26 = cloneLength;
											::haxe::io::Bytes tmp27 = ::haxe::io::Bytes_obj::alloc(tmp26);
											this2 = tmp27;
											tmp25 = this2;
										}
										_this->buffer = tmp25;
										::haxe::io::Bytes tmp26 = srcData;
										int tmp27 = srcByteOffset;
										int tmp28 = cloneLength;
										_this->buffer->blit((int)0,tmp26,tmp27,tmp28);
									}
									else{
										HX_STACK_DO_THROW(HX_HCSTRING("unimplemented","\x09","\x2f","\x74","\xb4"));
									}
									int tmp24 = (_this->bytesPerElement * srcLength);
									_this->byteLength = tmp24;
									_this->byteOffset = (int)0;
									_this->length = srcLength;
									tmp15 = _this;
								}
								this1 = tmp15;
							}
							else{
								bool tmp15 = (buffer != null());
								if ((tmp15)){
									::lime::utils::ArrayBufferView tmp16;
									{
										::lime::utils::ArrayBufferView tmp17 = ::lime::utils::ArrayBufferView_obj::__new((int)0,(int)3);
										::lime::utils::ArrayBufferView _this = tmp17;
										int in_byteOffset = byte_offset;
										bool tmp18 = (in_byteOffset < (int)0);
										if ((tmp18)){
											HX_STACK_DO_THROW(::lime::utils::TAError_obj::RangeError);
										}
										int tmp19 = hx::Mod(in_byteOffset,_this->bytesPerElement);
										bool tmp20 = (tmp19 != (int)0);
										if ((tmp20)){
											HX_STACK_DO_THROW(::lime::utils::TAError_obj::RangeError);
										}
										int bufferByteLength = buffer->length;
										int elementSize = _this->bytesPerElement;
										int newByteLength = bufferByteLength;
										bool tmp21 = (len == null());
										if ((tmp21)){
											int tmp22 = (bufferByteLength - in_byteOffset);
											newByteLength = tmp22;
											int tmp23 = hx::Mod(bufferByteLength,_this->bytesPerElement);
											bool tmp24 = (tmp23 != (int)0);
											if ((tmp24)){
												HX_STACK_DO_THROW(::lime::utils::TAError_obj::RangeError);
											}
											bool tmp25 = (newByteLength < (int)0);
											if ((tmp25)){
												HX_STACK_DO_THROW(::lime::utils::TAError_obj::RangeError);
											}
										}
										else{
											int tmp22 = (len * _this->bytesPerElement);
											newByteLength = tmp22;
											int tmp23 = (in_byteOffset + newByteLength);
											int newRange = tmp23;
											bool tmp24 = (newRange > bufferByteLength);
											if ((tmp24)){
												HX_STACK_DO_THROW(::lime::utils::TAError_obj::RangeError);
											}
										}
										_this->buffer = buffer;
										_this->byteOffset = in_byteOffset;
										_this->byteLength = newByteLength;
										Float tmp22 = (Float(newByteLength) / Float(_this->bytesPerElement));
										int tmp23 = ::Std_obj::_int(tmp22);
										_this->length = tmp23;
										tmp16 = _this;
									}
									this1 = tmp16;
								}
								else{
									HX_STACK_DO_THROW(HX_HCSTRING("Invalid constructor arguments for Int32Array","\x9b","\x2e","\x53","\x61"));
								}
							}
						}
					}
				}
				tmp7 = this1;
			}
			;break;
			case (int)4: {
				::haxe::io::Bytes tmp10 = this->buffer;
				::haxe::io::Bytes buffer = tmp10;
				::lime::utils::ArrayBufferView this1;
				bool tmp11 = false;
				if ((tmp11)){
					::lime::utils::ArrayBufferView tmp12 = ::lime::utils::ArrayBufferView_obj::__new(null(),(int)4);
					this1 = tmp12;
				}
				else{
					bool tmp12 = false;
					if ((tmp12)){
						::lime::utils::ArrayBufferView tmp13;
						{
							::lime::utils::ArrayBufferView tmp14 = ::lime::utils::ArrayBufferView_obj::__new((int)0,(int)4);
							::lime::utils::ArrayBufferView _this = tmp14;
							_this->byteOffset = (int)0;
							int tmp15 = hx::Throw(HX_CSTRING("Invalid field access on null object"));
							_this->length = tmp15;
							int tmp16 = (_this->length * _this->bytesPerElement);
							_this->byteLength = tmp16;
							::haxe::io::Bytes tmp17;
							{
								::haxe::io::Bytes this2;
								int tmp18 = _this->byteLength;
								::haxe::io::Bytes tmp19 = ::haxe::io::Bytes_obj::alloc(tmp18);
								this2 = tmp19;
								tmp17 = this2;
							}
							_this->buffer = tmp17;
							_this->copyFromArray(((Array< Float >)(null())),null());
							tmp13 = _this;
						}
						this1 = tmp13;
					}
					else{
						bool tmp13 = false;
						if ((tmp13)){
							::lime::utils::ArrayBufferView tmp14;
							{
								::lime::utils::ArrayBufferView tmp15 = ::lime::utils::ArrayBufferView_obj::__new((int)0,(int)4);
								::lime::utils::ArrayBufferView _this = tmp15;
								cpp::ArrayBase array = hx::Throw(HX_CSTRING("Invalid field access on null object"));
								_this->byteOffset = (int)0;
								_this->length = array->__Field(HX_HCSTRING("length","\xe6","\x94","\x07","\x9f"), hx::paccDynamic );
								int tmp16 = (_this->length * _this->bytesPerElement);
								_this->byteLength = tmp16;
								::haxe::io::Bytes tmp17;
								{
									::haxe::io::Bytes this2;
									int tmp18 = _this->byteLength;
									::haxe::io::Bytes tmp19 = ::haxe::io::Bytes_obj::alloc(tmp18);
									this2 = tmp19;
									tmp17 = this2;
								}
								_this->buffer = tmp17;
								_this->copyFromArray(((Array< Float >)(array)),null());
								tmp14 = _this;
							}
							this1 = tmp14;
						}
						else{
							bool tmp14 = false;
							if ((tmp14)){
								::lime::utils::ArrayBufferView tmp15;
								{
									::lime::utils::ArrayBufferView tmp16 = ::lime::utils::ArrayBufferView_obj::__new((int)0,(int)4);
									::lime::utils::ArrayBufferView _this = tmp16;
									::haxe::io::Bytes tmp17 = hx::Throw(HX_CSTRING("Invalid field access on null object"));
									::haxe::io::Bytes srcData = tmp17;
									int tmp18 = hx::Throw(HX_CSTRING("Invalid field access on null object"));
									int srcLength = tmp18;
									int tmp19 = hx::Throw(HX_CSTRING("Invalid field access on null object"));
									int srcByteOffset = tmp19;
									int tmp20 = hx::Throw(HX_CSTRING("Invalid field access on null object"));
									int srcElementSize = tmp20;
									int elementSize = _this->bytesPerElement;
									int tmp21 = hx::Throw(HX_CSTRING("Invalid field access on null object"));
									int tmp22 = _this->type;
									bool tmp23 = (tmp21 == tmp22);
									if ((tmp23)){
										int srcLength1 = srcData->length;
										int tmp24 = (srcLength1 - srcByteOffset);
										int cloneLength = tmp24;
										::haxe::io::Bytes tmp25;
										{
											::haxe::io::Bytes this2;
											int tmp26 = cloneLength;
											::haxe::io::Bytes tmp27 = ::haxe::io::Bytes_obj::alloc(tmp26);
											this2 = tmp27;
											tmp25 = this2;
										}
										_this->buffer = tmp25;
										::haxe::io::Bytes tmp26 = srcData;
										int tmp27 = srcByteOffset;
										int tmp28 = cloneLength;
										_this->buffer->blit((int)0,tmp26,tmp27,tmp28);
									}
									else{
										HX_STACK_DO_THROW(HX_HCSTRING("unimplemented","\x09","\x2f","\x74","\xb4"));
									}
									int tmp24 = (_this->bytesPerElement * srcLength);
									_this->byteLength = tmp24;
									_this->byteOffset = (int)0;
									_this->length = srcLength;
									tmp15 = _this;
								}
								this1 = tmp15;
							}
							else{
								bool tmp15 = (buffer != null());
								if ((tmp15)){
									::lime::utils::ArrayBufferView tmp16;
									{
										::lime::utils::ArrayBufferView tmp17 = ::lime::utils::ArrayBufferView_obj::__new((int)0,(int)4);
										::lime::utils::ArrayBufferView _this = tmp17;
										int in_byteOffset = byte_offset;
										bool tmp18 = (in_byteOffset < (int)0);
										if ((tmp18)){
											HX_STACK_DO_THROW(::lime::utils::TAError_obj::RangeError);
										}
										int tmp19 = hx::Mod(in_byteOffset,_this->bytesPerElement);
										bool tmp20 = (tmp19 != (int)0);
										if ((tmp20)){
											HX_STACK_DO_THROW(::lime::utils::TAError_obj::RangeError);
										}
										int bufferByteLength = buffer->length;
										int elementSize = _this->bytesPerElement;
										int newByteLength = bufferByteLength;
										bool tmp21 = (len == null());
										if ((tmp21)){
											int tmp22 = (bufferByteLength - in_byteOffset);
											newByteLength = tmp22;
											int tmp23 = hx::Mod(bufferByteLength,_this->bytesPerElement);
											bool tmp24 = (tmp23 != (int)0);
											if ((tmp24)){
												HX_STACK_DO_THROW(::lime::utils::TAError_obj::RangeError);
											}
											bool tmp25 = (newByteLength < (int)0);
											if ((tmp25)){
												HX_STACK_DO_THROW(::lime::utils::TAError_obj::RangeError);
											}
										}
										else{
											int tmp22 = (len * _this->bytesPerElement);
											newByteLength = tmp22;
											int tmp23 = (in_byteOffset + newByteLength);
											int newRange = tmp23;
											bool tmp24 = (newRange > bufferByteLength);
											if ((tmp24)){
												HX_STACK_DO_THROW(::lime::utils::TAError_obj::RangeError);
											}
										}
										_this->buffer = buffer;
										_this->byteOffset = in_byteOffset;
										_this->byteLength = newByteLength;
										Float tmp22 = (Float(newByteLength) / Float(_this->bytesPerElement));
										int tmp23 = ::Std_obj::_int(tmp22);
										_this->length = tmp23;
										tmp16 = _this;
									}
									this1 = tmp16;
								}
								else{
									HX_STACK_DO_THROW(HX_HCSTRING("Invalid constructor arguments for UInt8Array","\x6b","\x44","\xd5","\x85"));
								}
							}
						}
					}
				}
				tmp7 = this1;
			}
			;break;
			case (int)5: {
				::haxe::io::Bytes tmp10 = this->buffer;
				::haxe::io::Bytes buffer = tmp10;
				::lime::utils::ArrayBufferView this1;
				bool tmp11 = false;
				if ((tmp11)){
					::lime::utils::ArrayBufferView tmp12 = ::lime::utils::ArrayBufferView_obj::__new(null(),(int)5);
					this1 = tmp12;
				}
				else{
					bool tmp12 = false;
					if ((tmp12)){
						::lime::utils::ArrayBufferView tmp13;
						{
							::lime::utils::ArrayBufferView tmp14 = ::lime::utils::ArrayBufferView_obj::__new((int)0,(int)5);
							::lime::utils::ArrayBufferView _this = tmp14;
							_this->byteOffset = (int)0;
							int tmp15 = hx::Throw(HX_CSTRING("Invalid field access on null object"));
							_this->length = tmp15;
							int tmp16 = (_this->length * _this->bytesPerElement);
							_this->byteLength = tmp16;
							::haxe::io::Bytes tmp17;
							{
								::haxe::io::Bytes this2;
								int tmp18 = _this->byteLength;
								::haxe::io::Bytes tmp19 = ::haxe::io::Bytes_obj::alloc(tmp18);
								this2 = tmp19;
								tmp17 = this2;
							}
							_this->buffer = tmp17;
							_this->copyFromArray(((Array< Float >)(null())),null());
							tmp13 = _this;
						}
						this1 = tmp13;
					}
					else{
						bool tmp13 = false;
						if ((tmp13)){
							::lime::utils::ArrayBufferView tmp14;
							{
								::lime::utils::ArrayBufferView tmp15 = ::lime::utils::ArrayBufferView_obj::__new((int)0,(int)5);
								::lime::utils::ArrayBufferView _this = tmp15;
								cpp::ArrayBase array = hx::Throw(HX_CSTRING("Invalid field access on null object"));
								_this->byteOffset = (int)0;
								_this->length = array->__Field(HX_HCSTRING("length","\xe6","\x94","\x07","\x9f"), hx::paccDynamic );
								int tmp16 = (_this->length * _this->bytesPerElement);
								_this->byteLength = tmp16;
								::haxe::io::Bytes tmp17;
								{
									::haxe::io::Bytes this2;
									int tmp18 = _this->byteLength;
									::haxe::io::Bytes tmp19 = ::haxe::io::Bytes_obj::alloc(tmp18);
									this2 = tmp19;
									tmp17 = this2;
								}
								_this->buffer = tmp17;
								_this->copyFromArray(((Array< Float >)(array)),null());
								tmp14 = _this;
							}
							this1 = tmp14;
						}
						else{
							bool tmp14 = false;
							if ((tmp14)){
								::lime::utils::ArrayBufferView tmp15;
								{
									::lime::utils::ArrayBufferView tmp16 = ::lime::utils::ArrayBufferView_obj::__new((int)0,(int)5);
									::lime::utils::ArrayBufferView _this = tmp16;
									::haxe::io::Bytes tmp17 = hx::Throw(HX_CSTRING("Invalid field access on null object"));
									::haxe::io::Bytes srcData = tmp17;
									int tmp18 = hx::Throw(HX_CSTRING("Invalid field access on null object"));
									int srcLength = tmp18;
									int tmp19 = hx::Throw(HX_CSTRING("Invalid field access on null object"));
									int srcByteOffset = tmp19;
									int tmp20 = hx::Throw(HX_CSTRING("Invalid field access on null object"));
									int srcElementSize = tmp20;
									int elementSize = _this->bytesPerElement;
									int tmp21 = hx::Throw(HX_CSTRING("Invalid field access on null object"));
									int tmp22 = _this->type;
									bool tmp23 = (tmp21 == tmp22);
									if ((tmp23)){
										int srcLength1 = srcData->length;
										int tmp24 = (srcLength1 - srcByteOffset);
										int cloneLength = tmp24;
										::haxe::io::Bytes tmp25;
										{
											::haxe::io::Bytes this2;
											int tmp26 = cloneLength;
											::haxe::io::Bytes tmp27 = ::haxe::io::Bytes_obj::alloc(tmp26);
											this2 = tmp27;
											tmp25 = this2;
										}
										_this->buffer = tmp25;
										::haxe::io::Bytes tmp26 = srcData;
										int tmp27 = srcByteOffset;
										int tmp28 = cloneLength;
										_this->buffer->blit((int)0,tmp26,tmp27,tmp28);
									}
									else{
										HX_STACK_DO_THROW(HX_HCSTRING("unimplemented","\x09","\x2f","\x74","\xb4"));
									}
									int tmp24 = (_this->bytesPerElement * srcLength);
									_this->byteLength = tmp24;
									_this->byteOffset = (int)0;
									_this->length = srcLength;
									tmp15 = _this;
								}
								this1 = tmp15;
							}
							else{
								bool tmp15 = (buffer != null());
								if ((tmp15)){
									::lime::utils::ArrayBufferView tmp16;
									{
										::lime::utils::ArrayBufferView tmp17 = ::lime::utils::ArrayBufferView_obj::__new((int)0,(int)5);
										::lime::utils::ArrayBufferView _this = tmp17;
										int in_byteOffset = byte_offset;
										bool tmp18 = (in_byteOffset < (int)0);
										if ((tmp18)){
											HX_STACK_DO_THROW(::lime::utils::TAError_obj::RangeError);
										}
										int tmp19 = hx::Mod(in_byteOffset,_this->bytesPerElement);
										bool tmp20 = (tmp19 != (int)0);
										if ((tmp20)){
											HX_STACK_DO_THROW(::lime::utils::TAError_obj::RangeError);
										}
										int bufferByteLength = buffer->length;
										int elementSize = _this->bytesPerElement;
										int newByteLength = bufferByteLength;
										bool tmp21 = (len == null());
										if ((tmp21)){
											int tmp22 = (bufferByteLength - in_byteOffset);
											newByteLength = tmp22;
											int tmp23 = hx::Mod(bufferByteLength,_this->bytesPerElement);
											bool tmp24 = (tmp23 != (int)0);
											if ((tmp24)){
												HX_STACK_DO_THROW(::lime::utils::TAError_obj::RangeError);
											}
											bool tmp25 = (newByteLength < (int)0);
											if ((tmp25)){
												HX_STACK_DO_THROW(::lime::utils::TAError_obj::RangeError);
											}
										}
										else{
											int tmp22 = (len * _this->bytesPerElement);
											newByteLength = tmp22;
											int tmp23 = (in_byteOffset + newByteLength);
											int newRange = tmp23;
											bool tmp24 = (newRange > bufferByteLength);
											if ((tmp24)){
												HX_STACK_DO_THROW(::lime::utils::TAError_obj::RangeError);
											}
										}
										_this->buffer = buffer;
										_this->byteOffset = in_byteOffset;
										_this->byteLength = newByteLength;
										Float tmp22 = (Float(newByteLength) / Float(_this->bytesPerElement));
										int tmp23 = ::Std_obj::_int(tmp22);
										_this->length = tmp23;
										tmp16 = _this;
									}
									this1 = tmp16;
								}
								else{
									HX_STACK_DO_THROW(HX_HCSTRING("Invalid constructor arguments for UInt8ClampedArray","\x8d","\x06","\x77","\x13"));
								}
							}
						}
					}
				}
				tmp7 = this1;
			}
			;break;
			case (int)6: {
				::haxe::io::Bytes tmp10 = this->buffer;
				::haxe::io::Bytes buffer = tmp10;
				::lime::utils::ArrayBufferView this1;
				bool tmp11 = false;
				if ((tmp11)){
					::lime::utils::ArrayBufferView tmp12 = ::lime::utils::ArrayBufferView_obj::__new(null(),(int)6);
					this1 = tmp12;
				}
				else{
					bool tmp12 = false;
					if ((tmp12)){
						::lime::utils::ArrayBufferView tmp13;
						{
							::lime::utils::ArrayBufferView tmp14 = ::lime::utils::ArrayBufferView_obj::__new((int)0,(int)6);
							::lime::utils::ArrayBufferView _this = tmp14;
							_this->byteOffset = (int)0;
							int tmp15 = hx::Throw(HX_CSTRING("Invalid field access on null object"));
							_this->length = tmp15;
							int tmp16 = (_this->length * _this->bytesPerElement);
							_this->byteLength = tmp16;
							::haxe::io::Bytes tmp17;
							{
								::haxe::io::Bytes this2;
								int tmp18 = _this->byteLength;
								::haxe::io::Bytes tmp19 = ::haxe::io::Bytes_obj::alloc(tmp18);
								this2 = tmp19;
								tmp17 = this2;
							}
							_this->buffer = tmp17;
							_this->copyFromArray(((Array< Float >)(null())),null());
							tmp13 = _this;
						}
						this1 = tmp13;
					}
					else{
						bool tmp13 = false;
						if ((tmp13)){
							::lime::utils::ArrayBufferView tmp14;
							{
								::lime::utils::ArrayBufferView tmp15 = ::lime::utils::ArrayBufferView_obj::__new((int)0,(int)6);
								::lime::utils::ArrayBufferView _this = tmp15;
								cpp::ArrayBase array = hx::Throw(HX_CSTRING("Invalid field access on null object"));
								_this->byteOffset = (int)0;
								_this->length = array->__Field(HX_HCSTRING("length","\xe6","\x94","\x07","\x9f"), hx::paccDynamic );
								int tmp16 = (_this->length * _this->bytesPerElement);
								_this->byteLength = tmp16;
								::haxe::io::Bytes tmp17;
								{
									::haxe::io::Bytes this2;
									int tmp18 = _this->byteLength;
									::haxe::io::Bytes tmp19 = ::haxe::io::Bytes_obj::alloc(tmp18);
									this2 = tmp19;
									tmp17 = this2;
								}
								_this->buffer = tmp17;
								_this->copyFromArray(((Array< Float >)(array)),null());
								tmp14 = _this;
							}
							this1 = tmp14;
						}
						else{
							bool tmp14 = false;
							if ((tmp14)){
								::lime::utils::ArrayBufferView tmp15;
								{
									::lime::utils::ArrayBufferView tmp16 = ::lime::utils::ArrayBufferView_obj::__new((int)0,(int)6);
									::lime::utils::ArrayBufferView _this = tmp16;
									::haxe::io::Bytes tmp17 = hx::Throw(HX_CSTRING("Invalid field access on null object"));
									::haxe::io::Bytes srcData = tmp17;
									int tmp18 = hx::Throw(HX_CSTRING("Invalid field access on null object"));
									int srcLength = tmp18;
									int tmp19 = hx::Throw(HX_CSTRING("Invalid field access on null object"));
									int srcByteOffset = tmp19;
									int tmp20 = hx::Throw(HX_CSTRING("Invalid field access on null object"));
									int srcElementSize = tmp20;
									int elementSize = _this->bytesPerElement;
									int tmp21 = hx::Throw(HX_CSTRING("Invalid field access on null object"));
									int tmp22 = _this->type;
									bool tmp23 = (tmp21 == tmp22);
									if ((tmp23)){
										int srcLength1 = srcData->length;
										int tmp24 = (srcLength1 - srcByteOffset);
										int cloneLength = tmp24;
										::haxe::io::Bytes tmp25;
										{
											::haxe::io::Bytes this2;
											int tmp26 = cloneLength;
											::haxe::io::Bytes tmp27 = ::haxe::io::Bytes_obj::alloc(tmp26);
											this2 = tmp27;
											tmp25 = this2;
										}
										_this->buffer = tmp25;
										::haxe::io::Bytes tmp26 = srcData;
										int tmp27 = srcByteOffset;
										int tmp28 = cloneLength;
										_this->buffer->blit((int)0,tmp26,tmp27,tmp28);
									}
									else{
										HX_STACK_DO_THROW(HX_HCSTRING("unimplemented","\x09","\x2f","\x74","\xb4"));
									}
									int tmp24 = (_this->bytesPerElement * srcLength);
									_this->byteLength = tmp24;
									_this->byteOffset = (int)0;
									_this->length = srcLength;
									tmp15 = _this;
								}
								this1 = tmp15;
							}
							else{
								bool tmp15 = (buffer != null());
								if ((tmp15)){
									::lime::utils::ArrayBufferView tmp16;
									{
										::lime::utils::ArrayBufferView tmp17 = ::lime::utils::ArrayBufferView_obj::__new((int)0,(int)6);
										::lime::utils::ArrayBufferView _this = tmp17;
										int in_byteOffset = byte_offset;
										bool tmp18 = (in_byteOffset < (int)0);
										if ((tmp18)){
											HX_STACK_DO_THROW(::lime::utils::TAError_obj::RangeError);
										}
										int tmp19 = hx::Mod(in_byteOffset,_this->bytesPerElement);
										bool tmp20 = (tmp19 != (int)0);
										if ((tmp20)){
											HX_STACK_DO_THROW(::lime::utils::TAError_obj::RangeError);
										}
										int bufferByteLength = buffer->length;
										int elementSize = _this->bytesPerElement;
										int newByteLength = bufferByteLength;
										bool tmp21 = (len == null());
										if ((tmp21)){
											int tmp22 = (bufferByteLength - in_byteOffset);
											newByteLength = tmp22;
											int tmp23 = hx::Mod(bufferByteLength,_this->bytesPerElement);
											bool tmp24 = (tmp23 != (int)0);
											if ((tmp24)){
												HX_STACK_DO_THROW(::lime::utils::TAError_obj::RangeError);
											}
											bool tmp25 = (newByteLength < (int)0);
											if ((tmp25)){
												HX_STACK_DO_THROW(::lime::utils::TAError_obj::RangeError);
											}
										}
										else{
											int tmp22 = (len * _this->bytesPerElement);
											newByteLength = tmp22;
											int tmp23 = (in_byteOffset + newByteLength);
											int newRange = tmp23;
											bool tmp24 = (newRange > bufferByteLength);
											if ((tmp24)){
												HX_STACK_DO_THROW(::lime::utils::TAError_obj::RangeError);
											}
										}
										_this->buffer = buffer;
										_this->byteOffset = in_byteOffset;
										_this->byteLength = newByteLength;
										Float tmp22 = (Float(newByteLength) / Float(_this->bytesPerElement));
										int tmp23 = ::Std_obj::_int(tmp22);
										_this->length = tmp23;
										tmp16 = _this;
									}
									this1 = tmp16;
								}
								else{
									HX_STACK_DO_THROW(HX_HCSTRING("Invalid constructor arguments for UInt16Array","\x0a","\xc7","\x2d","\xd5"));
								}
							}
						}
					}
				}
				tmp7 = this1;
			}
			;break;
			case (int)7: {
				::haxe::io::Bytes tmp10 = this->buffer;
				::haxe::io::Bytes buffer = tmp10;
				::lime::utils::ArrayBufferView this1;
				bool tmp11 = false;
				if ((tmp11)){
					::lime::utils::ArrayBufferView tmp12 = ::lime::utils::ArrayBufferView_obj::__new(null(),(int)7);
					this1 = tmp12;
				}
				else{
					bool tmp12 = false;
					if ((tmp12)){
						::lime::utils::ArrayBufferView tmp13;
						{
							::lime::utils::ArrayBufferView tmp14 = ::lime::utils::ArrayBufferView_obj::__new((int)0,(int)7);
							::lime::utils::ArrayBufferView _this = tmp14;
							_this->byteOffset = (int)0;
							int tmp15 = hx::Throw(HX_CSTRING("Invalid field access on null object"));
							_this->length = tmp15;
							int tmp16 = (_this->length * _this->bytesPerElement);
							_this->byteLength = tmp16;
							::haxe::io::Bytes tmp17;
							{
								::haxe::io::Bytes this2;
								int tmp18 = _this->byteLength;
								::haxe::io::Bytes tmp19 = ::haxe::io::Bytes_obj::alloc(tmp18);
								this2 = tmp19;
								tmp17 = this2;
							}
							_this->buffer = tmp17;
							_this->copyFromArray(((Array< Float >)(null())),null());
							tmp13 = _this;
						}
						this1 = tmp13;
					}
					else{
						bool tmp13 = false;
						if ((tmp13)){
							::lime::utils::ArrayBufferView tmp14;
							{
								::lime::utils::ArrayBufferView tmp15 = ::lime::utils::ArrayBufferView_obj::__new((int)0,(int)7);
								::lime::utils::ArrayBufferView _this = tmp15;
								cpp::ArrayBase array = hx::Throw(HX_CSTRING("Invalid field access on null object"));
								_this->byteOffset = (int)0;
								_this->length = array->__Field(HX_HCSTRING("length","\xe6","\x94","\x07","\x9f"), hx::paccDynamic );
								int tmp16 = (_this->length * _this->bytesPerElement);
								_this->byteLength = tmp16;
								::haxe::io::Bytes tmp17;
								{
									::haxe::io::Bytes this2;
									int tmp18 = _this->byteLength;
									::haxe::io::Bytes tmp19 = ::haxe::io::Bytes_obj::alloc(tmp18);
									this2 = tmp19;
									tmp17 = this2;
								}
								_this->buffer = tmp17;
								_this->copyFromArray(((Array< Float >)(array)),null());
								tmp14 = _this;
							}
							this1 = tmp14;
						}
						else{
							bool tmp14 = false;
							if ((tmp14)){
								::lime::utils::ArrayBufferView tmp15;
								{
									::lime::utils::ArrayBufferView tmp16 = ::lime::utils::ArrayBufferView_obj::__new((int)0,(int)7);
									::lime::utils::ArrayBufferView _this = tmp16;
									::haxe::io::Bytes tmp17 = hx::Throw(HX_CSTRING("Invalid field access on null object"));
									::haxe::io::Bytes srcData = tmp17;
									int tmp18 = hx::Throw(HX_CSTRING("Invalid field access on null object"));
									int srcLength = tmp18;
									int tmp19 = hx::Throw(HX_CSTRING("Invalid field access on null object"));
									int srcByteOffset = tmp19;
									int tmp20 = hx::Throw(HX_CSTRING("Invalid field access on null object"));
									int srcElementSize = tmp20;
									int elementSize = _this->bytesPerElement;
									int tmp21 = hx::Throw(HX_CSTRING("Invalid field access on null object"));
									int tmp22 = _this->type;
									bool tmp23 = (tmp21 == tmp22);
									if ((tmp23)){
										int srcLength1 = srcData->length;
										int tmp24 = (srcLength1 - srcByteOffset);
										int cloneLength = tmp24;
										::haxe::io::Bytes tmp25;
										{
											::haxe::io::Bytes this2;
											int tmp26 = cloneLength;
											::haxe::io::Bytes tmp27 = ::haxe::io::Bytes_obj::alloc(tmp26);
											this2 = tmp27;
											tmp25 = this2;
										}
										_this->buffer = tmp25;
										::haxe::io::Bytes tmp26 = srcData;
										int tmp27 = srcByteOffset;
										int tmp28 = cloneLength;
										_this->buffer->blit((int)0,tmp26,tmp27,tmp28);
									}
									else{
										HX_STACK_DO_THROW(HX_HCSTRING("unimplemented","\x09","\x2f","\x74","\xb4"));
									}
									int tmp24 = (_this->bytesPerElement * srcLength);
									_this->byteLength = tmp24;
									_this->byteOffset = (int)0;
									_this->length = srcLength;
									tmp15 = _this;
								}
								this1 = tmp15;
							}
							else{
								bool tmp15 = (buffer != null());
								if ((tmp15)){
									::lime::utils::ArrayBufferView tmp16;
									{
										::lime::utils::ArrayBufferView tmp17 = ::lime::utils::ArrayBufferView_obj::__new((int)0,(int)7);
										::lime::utils::ArrayBufferView _this = tmp17;
										int in_byteOffset = byte_offset;
										bool tmp18 = (in_byteOffset < (int)0);
										if ((tmp18)){
											HX_STACK_DO_THROW(::lime::utils::TAError_obj::RangeError);
										}
										int tmp19 = hx::Mod(in_byteOffset,_this->bytesPerElement);
										bool tmp20 = (tmp19 != (int)0);
										if ((tmp20)){
											HX_STACK_DO_THROW(::lime::utils::TAError_obj::RangeError);
										}
										int bufferByteLength = buffer->length;
										int elementSize = _this->bytesPerElement;
										int newByteLength = bufferByteLength;
										bool tmp21 = (len == null());
										if ((tmp21)){
											int tmp22 = (bufferByteLength - in_byteOffset);
											newByteLength = tmp22;
											int tmp23 = hx::Mod(bufferByteLength,_this->bytesPerElement);
											bool tmp24 = (tmp23 != (int)0);
											if ((tmp24)){
												HX_STACK_DO_THROW(::lime::utils::TAError_obj::RangeError);
											}
											bool tmp25 = (newByteLength < (int)0);
											if ((tmp25)){
												HX_STACK_DO_THROW(::lime::utils::TAError_obj::RangeError);
											}
										}
										else{
											int tmp22 = (len * _this->bytesPerElement);
											newByteLength = tmp22;
											int tmp23 = (in_byteOffset + newByteLength);
											int newRange = tmp23;
											bool tmp24 = (newRange > bufferByteLength);
											if ((tmp24)){
												HX_STACK_DO_THROW(::lime::utils::TAError_obj::RangeError);
											}
										}
										_this->buffer = buffer;
										_this->byteOffset = in_byteOffset;
										_this->byteLength = newByteLength;
										Float tmp22 = (Float(newByteLength) / Float(_this->bytesPerElement));
										int tmp23 = ::Std_obj::_int(tmp22);
										_this->length = tmp23;
										tmp16 = _this;
									}
									this1 = tmp16;
								}
								else{
									HX_STACK_DO_THROW(HX_HCSTRING("Invalid constructor arguments for UInt32Array","\x10","\x43","\xeb","\x8e"));
								}
							}
						}
					}
				}
				tmp7 = this1;
			}
			;break;
			case (int)8: {
				::haxe::io::Bytes tmp10 = this->buffer;
				::haxe::io::Bytes buffer = tmp10;
				::lime::utils::ArrayBufferView this1;
				bool tmp11 = false;
				if ((tmp11)){
					::lime::utils::ArrayBufferView tmp12 = ::lime::utils::ArrayBufferView_obj::__new(null(),(int)8);
					this1 = tmp12;
				}
				else{
					bool tmp12 = false;
					if ((tmp12)){
						::lime::utils::ArrayBufferView tmp13;
						{
							::lime::utils::ArrayBufferView tmp14 = ::lime::utils::ArrayBufferView_obj::__new((int)0,(int)8);
							::lime::utils::ArrayBufferView _this = tmp14;
							_this->byteOffset = (int)0;
							int tmp15 = hx::Throw(HX_CSTRING("Invalid field access on null object"));
							_this->length = tmp15;
							int tmp16 = (_this->length * _this->bytesPerElement);
							_this->byteLength = tmp16;
							::haxe::io::Bytes tmp17;
							{
								::haxe::io::Bytes this2;
								int tmp18 = _this->byteLength;
								::haxe::io::Bytes tmp19 = ::haxe::io::Bytes_obj::alloc(tmp18);
								this2 = tmp19;
								tmp17 = this2;
							}
							_this->buffer = tmp17;
							_this->copyFromArray(((Array< Float >)(null())),null());
							tmp13 = _this;
						}
						this1 = tmp13;
					}
					else{
						bool tmp13 = false;
						if ((tmp13)){
							::lime::utils::ArrayBufferView tmp14;
							{
								::lime::utils::ArrayBufferView tmp15 = ::lime::utils::ArrayBufferView_obj::__new((int)0,(int)8);
								::lime::utils::ArrayBufferView _this = tmp15;
								cpp::ArrayBase array = hx::Throw(HX_CSTRING("Invalid field access on null object"));
								_this->byteOffset = (int)0;
								_this->length = array->__Field(HX_HCSTRING("length","\xe6","\x94","\x07","\x9f"), hx::paccDynamic );
								int tmp16 = (_this->length * _this->bytesPerElement);
								_this->byteLength = tmp16;
								::haxe::io::Bytes tmp17;
								{
									::haxe::io::Bytes this2;
									int tmp18 = _this->byteLength;
									::haxe::io::Bytes tmp19 = ::haxe::io::Bytes_obj::alloc(tmp18);
									this2 = tmp19;
									tmp17 = this2;
								}
								_this->buffer = tmp17;
								_this->copyFromArray(((Array< Float >)(array)),null());
								tmp14 = _this;
							}
							this1 = tmp14;
						}
						else{
							bool tmp14 = false;
							if ((tmp14)){
								::lime::utils::ArrayBufferView tmp15;
								{
									::lime::utils::ArrayBufferView tmp16 = ::lime::utils::ArrayBufferView_obj::__new((int)0,(int)8);
									::lime::utils::ArrayBufferView _this = tmp16;
									::haxe::io::Bytes tmp17 = hx::Throw(HX_CSTRING("Invalid field access on null object"));
									::haxe::io::Bytes srcData = tmp17;
									int tmp18 = hx::Throw(HX_CSTRING("Invalid field access on null object"));
									int srcLength = tmp18;
									int tmp19 = hx::Throw(HX_CSTRING("Invalid field access on null object"));
									int srcByteOffset = tmp19;
									int tmp20 = hx::Throw(HX_CSTRING("Invalid field access on null object"));
									int srcElementSize = tmp20;
									int elementSize = _this->bytesPerElement;
									int tmp21 = hx::Throw(HX_CSTRING("Invalid field access on null object"));
									int tmp22 = _this->type;
									bool tmp23 = (tmp21 == tmp22);
									if ((tmp23)){
										int srcLength1 = srcData->length;
										int tmp24 = (srcLength1 - srcByteOffset);
										int cloneLength = tmp24;
										::haxe::io::Bytes tmp25;
										{
											::haxe::io::Bytes this2;
											int tmp26 = cloneLength;
											::haxe::io::Bytes tmp27 = ::haxe::io::Bytes_obj::alloc(tmp26);
											this2 = tmp27;
											tmp25 = this2;
										}
										_this->buffer = tmp25;
										::haxe::io::Bytes tmp26 = srcData;
										int tmp27 = srcByteOffset;
										int tmp28 = cloneLength;
										_this->buffer->blit((int)0,tmp26,tmp27,tmp28);
									}
									else{
										HX_STACK_DO_THROW(HX_HCSTRING("unimplemented","\x09","\x2f","\x74","\xb4"));
									}
									int tmp24 = (_this->bytesPerElement * srcLength);
									_this->byteLength = tmp24;
									_this->byteOffset = (int)0;
									_this->length = srcLength;
									tmp15 = _this;
								}
								this1 = tmp15;
							}
							else{
								bool tmp15 = (buffer != null());
								if ((tmp15)){
									::lime::utils::ArrayBufferView tmp16;
									{
										::lime::utils::ArrayBufferView tmp17 = ::lime::utils::ArrayBufferView_obj::__new((int)0,(int)8);
										::lime::utils::ArrayBufferView _this = tmp17;
										int in_byteOffset = byte_offset;
										bool tmp18 = (in_byteOffset < (int)0);
										if ((tmp18)){
											HX_STACK_DO_THROW(::lime::utils::TAError_obj::RangeError);
										}
										int tmp19 = hx::Mod(in_byteOffset,_this->bytesPerElement);
										bool tmp20 = (tmp19 != (int)0);
										if ((tmp20)){
											HX_STACK_DO_THROW(::lime::utils::TAError_obj::RangeError);
										}
										int bufferByteLength = buffer->length;
										int elementSize = _this->bytesPerElement;
										int newByteLength = bufferByteLength;
										bool tmp21 = (len == null());
										if ((tmp21)){
											int tmp22 = (bufferByteLength - in_byteOffset);
											newByteLength = tmp22;
											int tmp23 = hx::Mod(bufferByteLength,_this->bytesPerElement);
											bool tmp24 = (tmp23 != (int)0);
											if ((tmp24)){
												HX_STACK_DO_THROW(::lime::utils::TAError_obj::RangeError);
											}
											bool tmp25 = (newByteLength < (int)0);
											if ((tmp25)){
												HX_STACK_DO_THROW(::lime::utils::TAError_obj::RangeError);
											}
										}
										else{
											int tmp22 = (len * _this->bytesPerElement);
											newByteLength = tmp22;
											int tmp23 = (in_byteOffset + newByteLength);
											int newRange = tmp23;
											bool tmp24 = (newRange > bufferByteLength);
											if ((tmp24)){
												HX_STACK_DO_THROW(::lime::utils::TAError_obj::RangeError);
											}
										}
										_this->buffer = buffer;
										_this->byteOffset = in_byteOffset;
										_this->byteLength = newByteLength;
										Float tmp22 = (Float(newByteLength) / Float(_this->bytesPerElement));
										int tmp23 = ::Std_obj::_int(tmp22);
										_this->length = tmp23;
										tmp16 = _this;
									}
									this1 = tmp16;
								}
								else{
									HX_STACK_DO_THROW(HX_HCSTRING("Invalid constructor arguments for Float32Array","\x8e","\xc1","\xf4","\xd4"));
								}
							}
						}
					}
				}
				tmp7 = this1;
			}
			;break;
			case (int)9: {
				::haxe::io::Bytes tmp10 = this->buffer;
				::haxe::io::Bytes buffer = tmp10;
				::lime::utils::ArrayBufferView this1;
				bool tmp11 = false;
				if ((tmp11)){
					::lime::utils::ArrayBufferView tmp12 = ::lime::utils::ArrayBufferView_obj::__new(null(),(int)9);
					this1 = tmp12;
				}
				else{
					bool tmp12 = false;
					if ((tmp12)){
						::lime::utils::ArrayBufferView tmp13;
						{
							::lime::utils::ArrayBufferView tmp14 = ::lime::utils::ArrayBufferView_obj::__new((int)0,(int)9);
							::lime::utils::ArrayBufferView _this = tmp14;
							_this->byteOffset = (int)0;
							int tmp15 = hx::Throw(HX_CSTRING("Invalid field access on null object"));
							_this->length = tmp15;
							int tmp16 = (_this->length * _this->bytesPerElement);
							_this->byteLength = tmp16;
							::haxe::io::Bytes tmp17;
							{
								::haxe::io::Bytes this2;
								int tmp18 = _this->byteLength;
								::haxe::io::Bytes tmp19 = ::haxe::io::Bytes_obj::alloc(tmp18);
								this2 = tmp19;
								tmp17 = this2;
							}
							_this->buffer = tmp17;
							_this->copyFromArray(((Array< Float >)(null())),null());
							tmp13 = _this;
						}
						this1 = tmp13;
					}
					else{
						bool tmp13 = false;
						if ((tmp13)){
							::lime::utils::ArrayBufferView tmp14;
							{
								::lime::utils::ArrayBufferView tmp15 = ::lime::utils::ArrayBufferView_obj::__new((int)0,(int)9);
								::lime::utils::ArrayBufferView _this = tmp15;
								cpp::ArrayBase array = hx::Throw(HX_CSTRING("Invalid field access on null object"));
								_this->byteOffset = (int)0;
								_this->length = array->__Field(HX_HCSTRING("length","\xe6","\x94","\x07","\x9f"), hx::paccDynamic );
								int tmp16 = (_this->length * _this->bytesPerElement);
								_this->byteLength = tmp16;
								::haxe::io::Bytes tmp17;
								{
									::haxe::io::Bytes this2;
									int tmp18 = _this->byteLength;
									::haxe::io::Bytes tmp19 = ::haxe::io::Bytes_obj::alloc(tmp18);
									this2 = tmp19;
									tmp17 = this2;
								}
								_this->buffer = tmp17;
								_this->copyFromArray(((Array< Float >)(array)),null());
								tmp14 = _this;
							}
							this1 = tmp14;
						}
						else{
							bool tmp14 = false;
							if ((tmp14)){
								::lime::utils::ArrayBufferView tmp15;
								{
									::lime::utils::ArrayBufferView tmp16 = ::lime::utils::ArrayBufferView_obj::__new((int)0,(int)9);
									::lime::utils::ArrayBufferView _this = tmp16;
									::haxe::io::Bytes tmp17 = hx::Throw(HX_CSTRING("Invalid field access on null object"));
									::haxe::io::Bytes srcData = tmp17;
									int tmp18 = hx::Throw(HX_CSTRING("Invalid field access on null object"));
									int srcLength = tmp18;
									int tmp19 = hx::Throw(HX_CSTRING("Invalid field access on null object"));
									int srcByteOffset = tmp19;
									int tmp20 = hx::Throw(HX_CSTRING("Invalid field access on null object"));
									int srcElementSize = tmp20;
									int elementSize = _this->bytesPerElement;
									int tmp21 = hx::Throw(HX_CSTRING("Invalid field access on null object"));
									int tmp22 = _this->type;
									bool tmp23 = (tmp21 == tmp22);
									if ((tmp23)){
										int srcLength1 = srcData->length;
										int tmp24 = (srcLength1 - srcByteOffset);
										int cloneLength = tmp24;
										::haxe::io::Bytes tmp25;
										{
											::haxe::io::Bytes this2;
											int tmp26 = cloneLength;
											::haxe::io::Bytes tmp27 = ::haxe::io::Bytes_obj::alloc(tmp26);
											this2 = tmp27;
											tmp25 = this2;
										}
										_this->buffer = tmp25;
										::haxe::io::Bytes tmp26 = srcData;
										int tmp27 = srcByteOffset;
										int tmp28 = cloneLength;
										_this->buffer->blit((int)0,tmp26,tmp27,tmp28);
									}
									else{
										HX_STACK_DO_THROW(HX_HCSTRING("unimplemented","\x09","\x2f","\x74","\xb4"));
									}
									int tmp24 = (_this->bytesPerElement * srcLength);
									_this->byteLength = tmp24;
									_this->byteOffset = (int)0;
									_this->length = srcLength;
									tmp15 = _this;
								}
								this1 = tmp15;
							}
							else{
								bool tmp15 = (buffer != null());
								if ((tmp15)){
									::lime::utils::ArrayBufferView tmp16;
									{
										::lime::utils::ArrayBufferView tmp17 = ::lime::utils::ArrayBufferView_obj::__new((int)0,(int)9);
										::lime::utils::ArrayBufferView _this = tmp17;
										int in_byteOffset = byte_offset;
										bool tmp18 = (in_byteOffset < (int)0);
										if ((tmp18)){
											HX_STACK_DO_THROW(::lime::utils::TAError_obj::RangeError);
										}
										int tmp19 = hx::Mod(in_byteOffset,_this->bytesPerElement);
										bool tmp20 = (tmp19 != (int)0);
										if ((tmp20)){
											HX_STACK_DO_THROW(::lime::utils::TAError_obj::RangeError);
										}
										int bufferByteLength = buffer->length;
										int elementSize = _this->bytesPerElement;
										int newByteLength = bufferByteLength;
										bool tmp21 = (len == null());
										if ((tmp21)){
											int tmp22 = (bufferByteLength - in_byteOffset);
											newByteLength = tmp22;
											int tmp23 = hx::Mod(bufferByteLength,_this->bytesPerElement);
											bool tmp24 = (tmp23 != (int)0);
											if ((tmp24)){
												HX_STACK_DO_THROW(::lime::utils::TAError_obj::RangeError);
											}
											bool tmp25 = (newByteLength < (int)0);
											if ((tmp25)){
												HX_STACK_DO_THROW(::lime::utils::TAError_obj::RangeError);
											}
										}
										else{
											int tmp22 = (len * _this->bytesPerElement);
											newByteLength = tmp22;
											int tmp23 = (in_byteOffset + newByteLength);
											int newRange = tmp23;
											bool tmp24 = (newRange > bufferByteLength);
											if ((tmp24)){
												HX_STACK_DO_THROW(::lime::utils::TAError_obj::RangeError);
											}
										}
										_this->buffer = buffer;
										_this->byteOffset = in_byteOffset;
										_this->byteLength = newByteLength;
										Float tmp22 = (Float(newByteLength) / Float(_this->bytesPerElement));
										int tmp23 = ::Std_obj::_int(tmp22);
										_this->length = tmp23;
										tmp16 = _this;
									}
									this1 = tmp16;
								}
								else{
									HX_STACK_DO_THROW(HX_HCSTRING("Invalid constructor arguments for Float64Array","\x8f","\xde","\x6b","\x1e"));
								}
							}
						}
					}
				}
				tmp7 = this1;
			}
			;break;
			case (int)0: {
				HX_STACK_DO_THROW(HX_HCSTRING("subarray on a blank ArrayBufferView","\x39","\x87","\xfd","\x19"));
			}
			;break;
		}
	}
	::lime::utils::ArrayBufferView view = tmp7;
	::lime::utils::ArrayBufferView tmp8 = view;
	return tmp8;
}


HX_DEFINE_DYNAMIC_FUNC2(ArrayBufferView_obj,subarray_lime_utils_UInt8Array,return )

::lime::utils::ArrayBufferView ArrayBufferView_obj::initTypedArray( ::lime::utils::ArrayBufferView view){
	::haxe::io::Bytes srcData = view->buffer;
	int srcLength = view->length;
	int srcByteOffset = view->byteOffset;
	int srcElementSize = view->bytesPerElement;
	int tmp = this->bytesPerElement;
	int elementSize = tmp;
	int tmp1 = view->type;
	int tmp2 = this->type;
	bool tmp3 = (tmp1 == tmp2);
	if ((tmp3)){
		int srcLength1 = srcData->length;
		int tmp4 = (srcLength1 - srcByteOffset);
		int cloneLength = tmp4;
		::haxe::io::Bytes tmp5;
		{
			::haxe::io::Bytes this1;
			int tmp6 = cloneLength;
			::haxe::io::Bytes tmp7 = ::haxe::io::Bytes_obj::alloc(tmp6);
			this1 = tmp7;
			tmp5 = this1;
		}
		this->buffer = tmp5;
		::haxe::io::Bytes tmp6 = this->buffer;
		::haxe::io::Bytes tmp7 = srcData;
		int tmp8 = srcByteOffset;
		int tmp9 = cloneLength;
		tmp6->blit((int)0,tmp7,tmp8,tmp9);
	}
	else{
		HX_STACK_DO_THROW(HX_HCSTRING("unimplemented","\x09","\x2f","\x74","\xb4"));
	}
	int tmp4 = this->bytesPerElement;
	int tmp5 = srcLength;
	int tmp6 = (tmp4 * tmp5);
	this->byteLength = tmp6;
	this->byteOffset = (int)0;
	this->length = srcLength;
	return hx::ObjectPtr<OBJ_>(this);
}


HX_DEFINE_DYNAMIC_FUNC1(ArrayBufferView_obj,initTypedArray,return )

::lime::utils::ArrayBufferView ArrayBufferView_obj::initBuffer( ::haxe::io::Bytes in_buffer,hx::Null< int >  __o_in_byteOffset,Dynamic len){
int in_byteOffset = __o_in_byteOffset.Default(0);
{
		bool tmp = (in_byteOffset < (int)0);
		if ((tmp)){
			HX_STACK_DO_THROW(::lime::utils::TAError_obj::RangeError);
		}
		int tmp1 = in_byteOffset;
		int tmp2 = this->bytesPerElement;
		int tmp3 = hx::Mod(tmp1,tmp2);
		bool tmp4 = (tmp3 != (int)0);
		if ((tmp4)){
			HX_STACK_DO_THROW(::lime::utils::TAError_obj::RangeError);
		}
		int bufferByteLength = in_buffer->length;
		int tmp5 = this->bytesPerElement;
		int elementSize = tmp5;
		int newByteLength = bufferByteLength;
		bool tmp6 = (len == null());
		if ((tmp6)){
			int tmp7 = (bufferByteLength - in_byteOffset);
			newByteLength = tmp7;
			int tmp8 = bufferByteLength;
			int tmp9 = this->bytesPerElement;
			int tmp10 = hx::Mod(tmp8,tmp9);
			bool tmp11 = (tmp10 != (int)0);
			if ((tmp11)){
				HX_STACK_DO_THROW(::lime::utils::TAError_obj::RangeError);
			}
			bool tmp12 = (newByteLength < (int)0);
			if ((tmp12)){
				HX_STACK_DO_THROW(::lime::utils::TAError_obj::RangeError);
			}
		}
		else{
			Dynamic tmp7 = len;
			int tmp8 = this->bytesPerElement;
			int tmp9 = (tmp7 * tmp8);
			newByteLength = tmp9;
			int tmp10 = (in_byteOffset + newByteLength);
			int newRange = tmp10;
			bool tmp11 = (newRange > bufferByteLength);
			if ((tmp11)){
				HX_STACK_DO_THROW(::lime::utils::TAError_obj::RangeError);
			}
		}
		this->buffer = in_buffer;
		this->byteOffset = in_byteOffset;
		this->byteLength = newByteLength;
		int tmp7 = newByteLength;
		int tmp8 = this->bytesPerElement;
		Float tmp9 = (Float(tmp7) / Float(tmp8));
		int tmp10 = ::Std_obj::_int(tmp9);
		this->length = tmp10;
		return hx::ObjectPtr<OBJ_>(this);
	}
}


HX_DEFINE_DYNAMIC_FUNC3(ArrayBufferView_obj,initBuffer,return )

::lime::utils::ArrayBufferView ArrayBufferView_obj::initArray( cpp::ArrayBase array){
	this->byteOffset = (int)0;
	this->length = array->__Field(HX_HCSTRING("length","\xe6","\x94","\x07","\x9f"), hx::paccDynamic );
	int tmp = this->length;
	int tmp1 = this->bytesPerElement;
	int tmp2 = (tmp * tmp1);
	this->byteLength = tmp2;
	::haxe::io::Bytes tmp3;
	{
		::haxe::io::Bytes this1;
		int tmp4 = this->byteLength;
		::haxe::io::Bytes tmp5 = ::haxe::io::Bytes_obj::alloc(tmp4);
		this1 = tmp5;
		tmp3 = this1;
	}
	this->buffer = tmp3;
	this->copyFromArray(((Array< Float >)(array)),null());
	return hx::ObjectPtr<OBJ_>(this);
}


HX_DEFINE_DYNAMIC_FUNC1(ArrayBufferView_obj,initArray,return )

Void ArrayBufferView_obj::set( ::lime::utils::ArrayBufferView view,cpp::ArrayBase array,hx::Null< int >  __o_offset){
int offset = __o_offset.Default(0);
{
		bool tmp = (view != null());
		bool tmp1;
		if ((tmp)){
			tmp1 = (array == null());
		}
		else{
			tmp1 = false;
		}
		if ((tmp1)){
			::haxe::io::Bytes tmp2 = this->buffer;
			int tmp3 = offset;
			int tmp4 = this->bytesPerElement;
			int tmp5 = (tmp3 * tmp4);
			::haxe::io::Bytes tmp6 = view->buffer;
			int tmp7 = view->byteOffset;
			int tmp8 = view->byteLength;
			tmp2->blit(tmp5,tmp6,tmp7,tmp8);
		}
		else{
			bool tmp2 = (array != null());
			bool tmp3;
			if ((tmp2)){
				tmp3 = (view == null());
			}
			else{
				tmp3 = false;
			}
			if ((tmp3)){
				int tmp4 = offset;
				this->copyFromArray(((Array< Float >)(array)),tmp4);
			}
			else{
				HX_STACK_DO_THROW(HX_HCSTRING("Invalid .set call. either view, or array must be not-null.","\x64","\xba","\xb7","\x6c"));
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC3(ArrayBufferView_obj,set,(void))

Void ArrayBufferView_obj::cloneBuffer( ::haxe::io::Bytes src,hx::Null< int >  __o_srcByteOffset){
int srcByteOffset = __o_srcByteOffset.Default(0);
{
		int srcLength = src->length;
		int tmp = (srcLength - srcByteOffset);
		int cloneLength = tmp;
		::haxe::io::Bytes tmp1;
		{
			::haxe::io::Bytes this1;
			int tmp2 = cloneLength;
			::haxe::io::Bytes tmp3 = ::haxe::io::Bytes_obj::alloc(tmp2);
			this1 = tmp3;
			tmp1 = this1;
		}
		this->buffer = tmp1;
		::haxe::io::Bytes tmp2 = this->buffer;
		::haxe::io::Bytes tmp3 = src;
		int tmp4 = srcByteOffset;
		int tmp5 = cloneLength;
		tmp2->blit((int)0,tmp3,tmp4,tmp5);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(ArrayBufferView_obj,cloneBuffer,(void))

int ArrayBufferView_obj::bytesForType( int type){
	int tmp = type;
	int tmp1;
	switch( (int)(tmp)){
		case (int)1: {
			tmp1 = (int)1;
		}
		;break;
		case (int)4: {
			tmp1 = (int)1;
		}
		;break;
		case (int)5: {
			tmp1 = (int)1;
		}
		;break;
		case (int)2: {
			tmp1 = (int)2;
		}
		;break;
		case (int)6: {
			tmp1 = (int)2;
		}
		;break;
		case (int)3: {
			tmp1 = (int)4;
		}
		;break;
		case (int)7: {
			tmp1 = (int)4;
		}
		;break;
		case (int)8: {
			tmp1 = (int)4;
		}
		;break;
		case (int)9: {
			tmp1 = (int)8;
		}
		;break;
		default: {
			tmp1 = (int)1;
		}
	}
	return tmp1;
}


HX_DEFINE_DYNAMIC_FUNC1(ArrayBufferView_obj,bytesForType,return )

::String ArrayBufferView_obj::toString( ){
	::String tmp;
	{
		int tmp1 = this->type;
		int _g = tmp1;
		int tmp2 = _g;
		switch( (int)(tmp2)){
			case (int)1: {
				tmp = HX_HCSTRING("Int8Array","\x50","\xdc","\xf6","\xae");
			}
			;break;
			case (int)4: {
				tmp = HX_HCSTRING("UInt8Array","\x5b","\xa9","\xb0","\x87");
			}
			;break;
			case (int)5: {
				tmp = HX_HCSTRING("UInt8ClampedArray","\x9d","\x1f","\xdb","\x26");
			}
			;break;
			case (int)2: {
				tmp = HX_HCSTRING("Int16Array","\x85","\x17","\x71","\xa9");
			}
			;break;
			case (int)6: {
				tmp = HX_HCSTRING("UInt16Array","\x1a","\xb4","\x4a","\x73");
			}
			;break;
			case (int)3: {
				tmp = HX_HCSTRING("Int32Array","\x8b","\x93","\x2e","\x63");
			}
			;break;
			case (int)7: {
				tmp = HX_HCSTRING("UInt32Array","\x20","\x30","\x08","\x2d");
			}
			;break;
			case (int)8: {
				tmp = HX_HCSTRING("Float32Array","\x7e","\x42","\x27","\x90");
			}
			;break;
			case (int)9: {
				tmp = HX_HCSTRING("Float64Array","\x7f","\x5f","\x9e","\xd9");
			}
			;break;
			default: {
				tmp = HX_HCSTRING("ArrayBufferView","\x5e","\x6e","\x84","\xfd");
			}
		}
	}
	::String name = tmp;
	::String tmp1 = name;
	int tmp2 = this->byteLength;
	::String tmp3 = (HX_HCSTRING(" [byteLength:","\x11","\xd6","\xa9","\xca") + tmp2);
	::String tmp4 = (tmp3 + HX_HCSTRING(", length:","\xa0","\x04","\x67","\xef"));
	int tmp5 = this->length;
	::String tmp6 = (tmp4 + tmp5);
	::String tmp7 = (tmp6 + HX_HCSTRING("]","\x5d","\x00","\x00","\x00"));
	::String tmp8 = (tmp1 + tmp7);
	return tmp8;
}


HX_DEFINE_DYNAMIC_FUNC0(ArrayBufferView_obj,toString,return )

int ArrayBufferView_obj::toByteLength( int elemCount){
	int tmp = elemCount;
	int tmp1 = this->bytesPerElement;
	int tmp2 = (tmp * tmp1);
	return tmp2;
}


HX_DEFINE_DYNAMIC_FUNC1(ArrayBufferView_obj,toByteLength,return )

Void ArrayBufferView_obj::copyFromArray( Array< Float > array,hx::Null< int >  __o_offset){
int offset = __o_offset.Default(0);
{
		int i = (int)0;
		int len = array->length;
		{
			int tmp = this->type;
			int _g = tmp;
			int tmp1 = _g;
			switch( (int)(tmp1)){
				case (int)1: {
					while((true)){
						bool tmp2 = (i < len);
						bool tmp3 = !(tmp2);
						if ((tmp3)){
							break;
						}
						int tmp4 = (offset + i);
						int tmp5 = this->bytesPerElement;
						int tmp6 = (tmp4 * tmp5);
						int pos = tmp6;
						{
							Float tmp7 = array->__get(i);
							int tmp8 = ::Std_obj::_int(tmp7);
							int value = tmp8;
							::__hxcpp_memory_set_byte(this->buffer->b,pos,value);
						}
						++(i);
					}
				}
				;break;
				case (int)2: {
					while((true)){
						bool tmp2 = (i < len);
						bool tmp3 = !(tmp2);
						if ((tmp3)){
							break;
						}
						int tmp4 = (offset + i);
						int tmp5 = this->bytesPerElement;
						int tmp6 = (tmp4 * tmp5);
						int pos = tmp6;
						::haxe::io::Bytes tmp7 = this->buffer;
						int tmp8 = pos;
						Float tmp9 = array->__get(i);
						int tmp10 = ::Std_obj::_int(tmp9);
						::lime::utils::ArrayBufferIO_obj::setInt16(tmp7,tmp8,tmp10);
						++(i);
					}
				}
				;break;
				case (int)3: {
					while((true)){
						bool tmp2 = (i < len);
						bool tmp3 = !(tmp2);
						if ((tmp3)){
							break;
						}
						int tmp4 = (offset + i);
						int tmp5 = this->bytesPerElement;
						int tmp6 = (tmp4 * tmp5);
						int pos = tmp6;
						{
							Float tmp7 = array->__get(i);
							int tmp8 = ::Std_obj::_int(tmp7);
							int value = tmp8;
							::__hxcpp_memory_set_i32(this->buffer->b,pos,value);
						}
						++(i);
					}
				}
				;break;
				case (int)4: {
					while((true)){
						bool tmp2 = (i < len);
						bool tmp3 = !(tmp2);
						if ((tmp3)){
							break;
						}
						int tmp4 = (offset + i);
						int tmp5 = this->bytesPerElement;
						int tmp6 = (tmp4 * tmp5);
						int pos = tmp6;
						{
							Float tmp7 = array->__get(i);
							int tmp8 = ::Std_obj::_int(tmp7);
							int value = tmp8;
							::__hxcpp_memory_set_byte(this->buffer->b,pos,value);
						}
						++(i);
					}
				}
				;break;
				case (int)6: {
					while((true)){
						bool tmp2 = (i < len);
						bool tmp3 = !(tmp2);
						if ((tmp3)){
							break;
						}
						int tmp4 = (offset + i);
						int tmp5 = this->bytesPerElement;
						int tmp6 = (tmp4 * tmp5);
						int pos = tmp6;
						{
							Float tmp7 = array->__get(i);
							int tmp8 = ::Std_obj::_int(tmp7);
							int value = tmp8;
							::__hxcpp_memory_set_ui16(this->buffer->b,pos,value);
						}
						++(i);
					}
				}
				;break;
				case (int)7: {
					while((true)){
						bool tmp2 = (i < len);
						bool tmp3 = !(tmp2);
						if ((tmp3)){
							break;
						}
						int tmp4 = (offset + i);
						int tmp5 = this->bytesPerElement;
						int tmp6 = (tmp4 * tmp5);
						int pos = tmp6;
						{
							Float tmp7 = array->__get(i);
							int tmp8 = ::Std_obj::_int(tmp7);
							int value = tmp8;
							::__hxcpp_memory_set_ui32(this->buffer->b,pos,value);
						}
						++(i);
					}
				}
				;break;
				case (int)5: {
					while((true)){
						bool tmp2 = (i < len);
						bool tmp3 = !(tmp2);
						if ((tmp3)){
							break;
						}
						int tmp4 = (offset + i);
						int tmp5 = this->bytesPerElement;
						int tmp6 = (tmp4 * tmp5);
						int pos = tmp6;
						{
							Float tmp7 = array->__get(i);
							int tmp8 = ::Std_obj::_int(tmp7);
							int value = tmp8;
							{
								int tmp9;
								{
									Float tmp10;
									{
										int _int = value;
										bool tmp11 = (_int < (int)0);
										if ((tmp11)){
											tmp10 = (((Float)4294967296.0) + _int);
										}
										else{
											tmp10 = (_int + ((Float)0.0));
										}
									}
									int tmp11 = ::Std_obj::_int(tmp10);
									int _out = tmp11;
									bool tmp12 = (_out > (int)255);
									int tmp13;
									if ((tmp12)){
										tmp13 = (int)255;
									}
									else{
										tmp13 = _out;
									}
									_out = tmp13;
									bool tmp14 = (_out < (int)0);
									if ((tmp14)){
										tmp9 = (int)0;
									}
									else{
										tmp9 = _out;
									}
								}
								int value1 = tmp9;
								::__hxcpp_memory_set_byte(this->buffer->b,pos,value1);
							}
						}
						++(i);
					}
				}
				;break;
				case (int)8: {
					while((true)){
						bool tmp2 = (i < len);
						bool tmp3 = !(tmp2);
						if ((tmp3)){
							break;
						}
						int tmp4 = (offset + i);
						int tmp5 = this->bytesPerElement;
						int tmp6 = (tmp4 * tmp5);
						int pos = tmp6;
						::__hxcpp_memory_set_float(this->buffer->b,pos,array->__get(i));
						++(i);
					}
				}
				;break;
				case (int)9: {
					while((true)){
						bool tmp2 = (i < len);
						bool tmp3 = !(tmp2);
						if ((tmp3)){
							break;
						}
						int tmp4 = (offset + i);
						int tmp5 = this->bytesPerElement;
						int tmp6 = (tmp4 * tmp5);
						int pos = tmp6;
						::__hxcpp_memory_set_double(this->buffer->b,pos,array->__get(i));
						++(i);
					}
				}
				;break;
				case (int)0: {
					HX_STACK_DO_THROW(HX_HCSTRING("copyFromArray on a base type ArrayBuffer","\xe8","\x01","\x1a","\xe2"));
				}
				;break;
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(ArrayBufferView_obj,copyFromArray,(void))


ArrayBufferView_obj::ArrayBufferView_obj()
{
}

void ArrayBufferView_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(ArrayBufferView);
	HX_MARK_MEMBER_NAME(type,"type");
	HX_MARK_MEMBER_NAME(buffer,"buffer");
	HX_MARK_MEMBER_NAME(byteOffset,"byteOffset");
	HX_MARK_MEMBER_NAME(byteLength,"byteLength");
	HX_MARK_MEMBER_NAME(length,"length");
	HX_MARK_MEMBER_NAME(bytesPerElement,"bytesPerElement");
	HX_MARK_END_CLASS();
}

void ArrayBufferView_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(type,"type");
	HX_VISIT_MEMBER_NAME(buffer,"buffer");
	HX_VISIT_MEMBER_NAME(byteOffset,"byteOffset");
	HX_VISIT_MEMBER_NAME(byteLength,"byteLength");
	HX_VISIT_MEMBER_NAME(length,"length");
	HX_VISIT_MEMBER_NAME(bytesPerElement,"bytesPerElement");
}

Dynamic ArrayBufferView_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"set") ) { return set_dyn(); }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"type") ) { return type; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"buffer") ) { return buffer; }
		if (HX_FIELD_EQ(inName,"length") ) { return length; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"toString") ) { return toString_dyn(); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"initArray") ) { return initArray_dyn(); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"byteOffset") ) { return byteOffset; }
		if (HX_FIELD_EQ(inName,"byteLength") ) { return byteLength; }
		if (HX_FIELD_EQ(inName,"initBuffer") ) { return initBuffer_dyn(); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"cloneBuffer") ) { return cloneBuffer_dyn(); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"bytesForType") ) { return bytesForType_dyn(); }
		if (HX_FIELD_EQ(inName,"toByteLength") ) { return toByteLength_dyn(); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"copyFromArray") ) { return copyFromArray_dyn(); }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"initTypedArray") ) { return initTypedArray_dyn(); }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"bytesPerElement") ) { return bytesPerElement; }
		break;
	case 29:
		if (HX_FIELD_EQ(inName,"subarray_lime_utils_Int8Array") ) { return subarray_lime_utils_Int8Array_dyn(); }
		break;
	case 30:
		if (HX_FIELD_EQ(inName,"subarray_lime_utils_Int16Array") ) { return subarray_lime_utils_Int16Array_dyn(); }
		if (HX_FIELD_EQ(inName,"subarray_lime_utils_Int32Array") ) { return subarray_lime_utils_Int32Array_dyn(); }
		if (HX_FIELD_EQ(inName,"subarray_lime_utils_UInt8Array") ) { return subarray_lime_utils_UInt8Array_dyn(); }
		break;
	case 31:
		if (HX_FIELD_EQ(inName,"subarray_lime_utils_UInt16Array") ) { return subarray_lime_utils_UInt16Array_dyn(); }
		if (HX_FIELD_EQ(inName,"subarray_lime_utils_UInt32Array") ) { return subarray_lime_utils_UInt32Array_dyn(); }
		break;
	case 32:
		if (HX_FIELD_EQ(inName,"subarray_lime_utils_Float64Array") ) { return subarray_lime_utils_Float64Array_dyn(); }
		if (HX_FIELD_EQ(inName,"subarray_lime_utils_Float32Array") ) { return subarray_lime_utils_Float32Array_dyn(); }
		break;
	case 37:
		if (HX_FIELD_EQ(inName,"subarray_lime_utils_UInt8ClampedArray") ) { return subarray_lime_utils_UInt8ClampedArray_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic ArrayBufferView_obj::__SetField(const ::String &inName,const Dynamic &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"type") ) { type=inValue.Cast< int >(); return inValue; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"buffer") ) { buffer=inValue.Cast< ::haxe::io::Bytes >(); return inValue; }
		if (HX_FIELD_EQ(inName,"length") ) { length=inValue.Cast< int >(); return inValue; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"byteOffset") ) { byteOffset=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"byteLength") ) { byteLength=inValue.Cast< int >(); return inValue; }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"bytesPerElement") ) { bytesPerElement=inValue.Cast< int >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void ArrayBufferView_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("type","\xba","\xf2","\x08","\x4d"));
	outFields->push(HX_HCSTRING("buffer","\x00","\xbd","\x94","\xd0"));
	outFields->push(HX_HCSTRING("byteOffset","\xbb","\x20","\x44","\x38"));
	outFields->push(HX_HCSTRING("byteLength","\x0e","\x1e","\x0c","\x77"));
	outFields->push(HX_HCSTRING("length","\xe6","\x94","\x07","\x9f"));
	outFields->push(HX_HCSTRING("bytesPerElement","\xaa","\x67","\x89","\x18"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsInt,(int)offsetof(ArrayBufferView_obj,type),HX_HCSTRING("type","\xba","\xf2","\x08","\x4d")},
	{hx::fsObject /*::haxe::io::Bytes*/ ,(int)offsetof(ArrayBufferView_obj,buffer),HX_HCSTRING("buffer","\x00","\xbd","\x94","\xd0")},
	{hx::fsInt,(int)offsetof(ArrayBufferView_obj,byteOffset),HX_HCSTRING("byteOffset","\xbb","\x20","\x44","\x38")},
	{hx::fsInt,(int)offsetof(ArrayBufferView_obj,byteLength),HX_HCSTRING("byteLength","\x0e","\x1e","\x0c","\x77")},
	{hx::fsInt,(int)offsetof(ArrayBufferView_obj,length),HX_HCSTRING("length","\xe6","\x94","\x07","\x9f")},
	{hx::fsInt,(int)offsetof(ArrayBufferView_obj,bytesPerElement),HX_HCSTRING("bytesPerElement","\xaa","\x67","\x89","\x18")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo *sStaticStorageInfo = 0;
#endif

static ::String sMemberFields[] = {
	HX_HCSTRING("subarray_lime_utils_Float64Array","\x51","\x8e","\x35","\xee"),
	HX_HCSTRING("subarray_lime_utils_Int16Array","\xd7","\x8d","\x80","\xc2"),
	HX_HCSTRING("subarray_lime_utils_UInt16Array","\x88","\xc5","\xc2","\x47"),
	HX_HCSTRING("subarray_lime_utils_Int8Array","\x3e","\x16","\xba","\x20"),
	HX_HCSTRING("subarray_lime_utils_UInt8ClampedArray","\x8b","\xf7","\x6e","\x70"),
	HX_HCSTRING("subarray_lime_utils_UInt32Array","\x8e","\x41","\x80","\x01"),
	HX_HCSTRING("subarray_lime_utils_Int32Array","\xdd","\x09","\x3e","\x7c"),
	HX_HCSTRING("subarray_lime_utils_Float32Array","\x50","\x71","\xbe","\xa4"),
	HX_HCSTRING("subarray_lime_utils_UInt8Array","\xad","\x1f","\xc0","\xa0"),
	HX_HCSTRING("type","\xba","\xf2","\x08","\x4d"),
	HX_HCSTRING("buffer","\x00","\xbd","\x94","\xd0"),
	HX_HCSTRING("byteOffset","\xbb","\x20","\x44","\x38"),
	HX_HCSTRING("byteLength","\x0e","\x1e","\x0c","\x77"),
	HX_HCSTRING("length","\xe6","\x94","\x07","\x9f"),
	HX_HCSTRING("bytesPerElement","\xaa","\x67","\x89","\x18"),
	HX_HCSTRING("initTypedArray","\xff","\x5f","\x1a","\x1d"),
	HX_HCSTRING("initBuffer","\x30","\x18","\xda","\xd4"),
	HX_HCSTRING("initArray","\x69","\x88","\x21","\x41"),
	HX_HCSTRING("set","\xa2","\x9b","\x57","\x00"),
	HX_HCSTRING("cloneBuffer","\x3d","\xa8","\xe8","\x6c"),
	HX_HCSTRING("bytesForType","\x38","\x71","\x1a","\xbd"),
	HX_HCSTRING("toString","\xac","\xd0","\x6e","\x38"),
	HX_HCSTRING("toByteLength","\x69","\x4f","\xeb","\x18"),
	HX_HCSTRING("copyFromArray","\x5a","\xdd","\xdd","\x3b"),
	::String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(ArrayBufferView_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(ArrayBufferView_obj::__mClass,"__mClass");
};

#endif

hx::Class ArrayBufferView_obj::__mClass;

void ArrayBufferView_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("lime.utils.ArrayBufferView","\x08","\xda","\x61","\xc9");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = hx::Class_obj::dupFunctions(sMemberFields);
	__mClass->mCanCast = hx::TCanCast< ArrayBufferView_obj >;
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
