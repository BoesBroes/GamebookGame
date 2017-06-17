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
#ifndef INCLUDED_lime_utils_TAError
#include <lime/utils/TAError.h>
#endif
#ifndef INCLUDED_openfl__Vector_FloatVector
#include <openfl/_Vector/FloatVector.h>
#endif
#ifndef INCLUDED_openfl__Vector_IVector
#include <openfl/_Vector/IVector.h>
#endif
#ifndef INCLUDED_openfl_geom_ColorTransform
#include <openfl/geom/ColorTransform.h>
#endif
namespace openfl{
namespace geom{

Void ColorTransform_obj::__construct(hx::Null< Float >  __o_redMultiplier,hx::Null< Float >  __o_greenMultiplier,hx::Null< Float >  __o_blueMultiplier,hx::Null< Float >  __o_alphaMultiplier,hx::Null< Float >  __o_redOffset,hx::Null< Float >  __o_greenOffset,hx::Null< Float >  __o_blueOffset,hx::Null< Float >  __o_alphaOffset)
{
Float redMultiplier = __o_redMultiplier.Default(1);
Float greenMultiplier = __o_greenMultiplier.Default(1);
Float blueMultiplier = __o_blueMultiplier.Default(1);
Float alphaMultiplier = __o_alphaMultiplier.Default(1);
Float redOffset = __o_redOffset.Default(0);
Float greenOffset = __o_greenOffset.Default(0);
Float blueOffset = __o_blueOffset.Default(0);
Float alphaOffset = __o_alphaOffset.Default(0);
{
	this->redMultiplier = redMultiplier;
	this->greenMultiplier = greenMultiplier;
	this->blueMultiplier = blueMultiplier;
	this->alphaMultiplier = alphaMultiplier;
	this->redOffset = redOffset;
	this->greenOffset = greenOffset;
	this->blueOffset = blueOffset;
	this->alphaOffset = alphaOffset;
}
;
	return null();
}

//ColorTransform_obj::~ColorTransform_obj() { }

Dynamic ColorTransform_obj::__CreateEmpty() { return  new ColorTransform_obj; }
hx::ObjectPtr< ColorTransform_obj > ColorTransform_obj::__new(hx::Null< Float >  __o_redMultiplier,hx::Null< Float >  __o_greenMultiplier,hx::Null< Float >  __o_blueMultiplier,hx::Null< Float >  __o_alphaMultiplier,hx::Null< Float >  __o_redOffset,hx::Null< Float >  __o_greenOffset,hx::Null< Float >  __o_blueOffset,hx::Null< Float >  __o_alphaOffset)
{  hx::ObjectPtr< ColorTransform_obj > _result_ = new ColorTransform_obj();
	_result_->__construct(__o_redMultiplier,__o_greenMultiplier,__o_blueMultiplier,__o_alphaMultiplier,__o_redOffset,__o_greenOffset,__o_blueOffset,__o_alphaOffset);
	return _result_;}

Dynamic ColorTransform_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< ColorTransform_obj > _result_ = new ColorTransform_obj();
	_result_->__construct(inArgs[0],inArgs[1],inArgs[2],inArgs[3],inArgs[4],inArgs[5],inArgs[6],inArgs[7]);
	return _result_;}

Void ColorTransform_obj::concat( ::openfl::geom::ColorTransform second){
{
		hx::MultEq(this->redMultiplier,second->redMultiplier);
		hx::MultEq(this->greenMultiplier,second->greenMultiplier);
		hx::MultEq(this->blueMultiplier,second->blueMultiplier);
		hx::MultEq(this->alphaMultiplier,second->alphaMultiplier);
		Float tmp = second->redMultiplier;
		Float tmp1 = this->redOffset;
		Float tmp2 = (tmp * tmp1);
		Float tmp3 = second->redOffset;
		Float tmp4 = (tmp2 + tmp3);
		this->redOffset = tmp4;
		Float tmp5 = second->greenMultiplier;
		Float tmp6 = this->greenOffset;
		Float tmp7 = (tmp5 * tmp6);
		Float tmp8 = second->greenOffset;
		Float tmp9 = (tmp7 + tmp8);
		this->greenOffset = tmp9;
		Float tmp10 = second->blueMultiplier;
		Float tmp11 = this->blueOffset;
		Float tmp12 = (tmp10 * tmp11);
		Float tmp13 = second->blueOffset;
		Float tmp14 = (tmp12 + tmp13);
		this->blueOffset = tmp14;
		Float tmp15 = second->alphaMultiplier;
		Float tmp16 = this->alphaOffset;
		Float tmp17 = (tmp15 * tmp16);
		Float tmp18 = second->alphaOffset;
		Float tmp19 = (tmp17 + tmp18);
		this->alphaOffset = tmp19;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(ColorTransform_obj,concat,(void))

::String ColorTransform_obj::toString( ){
	Float tmp = this->redMultiplier;
	::String tmp1 = (HX_HCSTRING("(redMultiplier=","\xf3","\xad","\x1c","\x05") + tmp);
	::String tmp2 = (tmp1 + HX_HCSTRING(", greenMultiplier=","\x0d","\xc2","\x8d","\x70"));
	Float tmp3 = this->greenMultiplier;
	::String tmp4 = (tmp2 + tmp3);
	::String tmp5 = (tmp4 + HX_HCSTRING(", blueMultiplier=","\x2e","\x6d","\xc3","\x3b"));
	Float tmp6 = this->blueMultiplier;
	::String tmp7 = (tmp5 + tmp6);
	::String tmp8 = (tmp7 + HX_HCSTRING(", alphaMultiplier=","\x52","\x89","\x82","\x1f"));
	Float tmp9 = this->alphaMultiplier;
	::String tmp10 = (tmp8 + tmp9);
	::String tmp11 = (tmp10 + HX_HCSTRING(", redOffset=","\x6d","\xd3","\x86","\x3f"));
	Float tmp12 = this->redOffset;
	::String tmp13 = (tmp11 + tmp12);
	::String tmp14 = (tmp13 + HX_HCSTRING(", greenOffset=","\x3b","\xd5","\xed","\x53"));
	Float tmp15 = this->greenOffset;
	::String tmp16 = (tmp14 + tmp15);
	::String tmp17 = (tmp16 + HX_HCSTRING(", blueOffset=","\xdc","\x1b","\x85","\x47"));
	Float tmp18 = this->blueOffset;
	::String tmp19 = (tmp17 + tmp18);
	::String tmp20 = (tmp19 + HX_HCSTRING(", alphaOffset=","\x00","\x56","\xb2","\x98"));
	Float tmp21 = this->alphaOffset;
	::String tmp22 = (tmp20 + tmp21);
	::String tmp23 = (tmp22 + HX_HCSTRING(")","\x29","\x00","\x00","\x00"));
	return tmp23;
}


HX_DEFINE_DYNAMIC_FUNC0(ColorTransform_obj,toString,return )

::openfl::geom::ColorTransform ColorTransform_obj::__clone( ){
	Float tmp = this->redMultiplier;
	Float tmp1 = this->greenMultiplier;
	Float tmp2 = this->blueMultiplier;
	Float tmp3 = this->alphaMultiplier;
	Float tmp4 = this->redOffset;
	Float tmp5 = this->greenOffset;
	Float tmp6 = this->blueOffset;
	Float tmp7 = this->alphaOffset;
	::openfl::geom::ColorTransform tmp8 = ::openfl::geom::ColorTransform_obj::__new(tmp,tmp1,tmp2,tmp3,tmp4,tmp5,tmp6,tmp7);
	return tmp8;
}


HX_DEFINE_DYNAMIC_FUNC0(ColorTransform_obj,__clone,return )

Void ColorTransform_obj::__copyFrom( ::openfl::geom::ColorTransform ct){
{
		this->redMultiplier = ct->redMultiplier;
		this->greenMultiplier = ct->greenMultiplier;
		this->blueMultiplier = ct->blueMultiplier;
		this->alphaMultiplier = ct->alphaMultiplier;
		this->redOffset = ct->redOffset;
		this->greenOffset = ct->greenOffset;
		this->blueOffset = ct->blueOffset;
		this->alphaOffset = ct->alphaOffset;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(ColorTransform_obj,__copyFrom,(void))

Void ColorTransform_obj::__combine( ::openfl::geom::ColorTransform ct){
{
		hx::MultEq(this->redMultiplier,ct->redMultiplier);
		hx::MultEq(this->greenMultiplier,ct->greenMultiplier);
		hx::MultEq(this->blueMultiplier,ct->blueMultiplier);
		hx::MultEq(this->alphaMultiplier,ct->alphaMultiplier);
		hx::AddEq(this->redOffset,ct->redOffset);
		hx::AddEq(this->greenOffset,ct->greenOffset);
		hx::AddEq(this->blueOffset,ct->blueOffset);
		hx::AddEq(this->alphaOffset,ct->alphaOffset);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(ColorTransform_obj,__combine,(void))

bool ColorTransform_obj::__equals( ::openfl::geom::ColorTransform ct,Dynamic __o_skipAlphaMultiplier){
Dynamic skipAlphaMultiplier = __o_skipAlphaMultiplier.Default(false);
{
		bool tmp = (ct != null());
		bool tmp1 = tmp;
		bool tmp2;
		if ((tmp1)){
			Float tmp3 = this->redMultiplier;
			Float tmp4 = tmp3;
			Float tmp5 = tmp4;
			Float tmp6 = ct->redMultiplier;
			tmp2 = (tmp5 == tmp6);
		}
		else{
			tmp2 = false;
		}
		bool tmp3 = tmp2;
		bool tmp4;
		if ((tmp3)){
			Float tmp5 = this->greenMultiplier;
			Float tmp6 = tmp5;
			Float tmp7 = tmp6;
			Float tmp8 = ct->greenMultiplier;
			tmp4 = (tmp7 == tmp8);
		}
		else{
			tmp4 = false;
		}
		bool tmp5 = tmp4;
		bool tmp6;
		if ((tmp5)){
			Float tmp7 = this->blueMultiplier;
			Float tmp8 = tmp7;
			Float tmp9 = tmp8;
			Float tmp10 = ct->blueMultiplier;
			tmp6 = (tmp9 == tmp10);
		}
		else{
			tmp6 = false;
		}
		bool tmp7 = tmp6;
		bool tmp8;
		if ((tmp7)){
			Dynamic tmp9 = skipAlphaMultiplier;
			Dynamic tmp10 = tmp9;
			Dynamic tmp11 = tmp10;
			bool tmp12 = !(tmp11);
			bool tmp13 = tmp12;
			bool tmp14 = tmp13;
			bool tmp15 = tmp14;
			bool tmp16 = tmp15;
			if ((tmp16)){
				Float tmp17 = this->alphaMultiplier;
				Float tmp18 = tmp17;
				Float tmp19 = tmp18;
				Float tmp20 = tmp19;
				Float tmp21 = ct->alphaMultiplier;
				tmp8 = (tmp20 == tmp21);
			}
			else{
				tmp8 = true;
			}
		}
		else{
			tmp8 = false;
		}
		bool tmp9 = tmp8;
		bool tmp10;
		if ((tmp9)){
			Float tmp11 = this->redOffset;
			Float tmp12 = tmp11;
			Float tmp13 = tmp12;
			Float tmp14 = ct->redOffset;
			tmp10 = (tmp13 == tmp14);
		}
		else{
			tmp10 = false;
		}
		bool tmp11 = tmp10;
		bool tmp12;
		if ((tmp11)){
			Float tmp13 = this->greenOffset;
			Float tmp14 = tmp13;
			Float tmp15 = tmp14;
			Float tmp16 = ct->greenOffset;
			tmp12 = (tmp15 == tmp16);
		}
		else{
			tmp12 = false;
		}
		bool tmp13 = tmp12;
		bool tmp14;
		if ((tmp13)){
			Float tmp15 = this->blueOffset;
			Float tmp16 = tmp15;
			Float tmp17 = tmp16;
			Float tmp18 = ct->blueOffset;
			tmp14 = (tmp17 == tmp18);
		}
		else{
			tmp14 = false;
		}
		bool tmp15;
		if ((tmp14)){
			Float tmp16 = this->alphaOffset;
			Float tmp17 = tmp16;
			Float tmp18 = ct->alphaOffset;
			tmp15 = (tmp17 == tmp18);
		}
		else{
			tmp15 = false;
		}
		return tmp15;
	}
}


HX_DEFINE_DYNAMIC_FUNC2(ColorTransform_obj,__equals,return )

bool ColorTransform_obj::__isDefault( ){
	Float tmp = this->redMultiplier;
	bool tmp1 = (tmp == (int)1);
	bool tmp2 = tmp1;
	bool tmp3;
	if ((tmp2)){
		Float tmp4 = this->greenMultiplier;
		Float tmp5 = tmp4;
		Float tmp6 = tmp5;
		tmp3 = (tmp6 == (int)1);
	}
	else{
		tmp3 = false;
	}
	bool tmp4 = tmp3;
	bool tmp5;
	if ((tmp4)){
		Float tmp6 = this->blueMultiplier;
		Float tmp7 = tmp6;
		Float tmp8 = tmp7;
		tmp5 = (tmp8 == (int)1);
	}
	else{
		tmp5 = false;
	}
	bool tmp6 = tmp5;
	bool tmp7;
	if ((tmp6)){
		Float tmp8 = this->alphaMultiplier;
		Float tmp9 = tmp8;
		Float tmp10 = tmp9;
		tmp7 = (tmp10 == (int)1);
	}
	else{
		tmp7 = false;
	}
	bool tmp8 = tmp7;
	bool tmp9;
	if ((tmp8)){
		Float tmp10 = this->redOffset;
		Float tmp11 = tmp10;
		Float tmp12 = tmp11;
		tmp9 = (tmp12 == (int)0);
	}
	else{
		tmp9 = false;
	}
	bool tmp10 = tmp9;
	bool tmp11;
	if ((tmp10)){
		Float tmp12 = this->greenOffset;
		Float tmp13 = tmp12;
		Float tmp14 = tmp13;
		tmp11 = (tmp14 == (int)0);
	}
	else{
		tmp11 = false;
	}
	bool tmp12 = tmp11;
	bool tmp13;
	if ((tmp12)){
		Float tmp14 = this->blueOffset;
		Float tmp15 = tmp14;
		Float tmp16 = tmp15;
		tmp13 = (tmp16 == (int)0);
	}
	else{
		tmp13 = false;
	}
	bool tmp14;
	if ((tmp13)){
		Float tmp15 = this->alphaOffset;
		Float tmp16 = tmp15;
		tmp14 = (tmp16 == (int)0);
	}
	else{
		tmp14 = false;
	}
	return tmp14;
}


HX_DEFINE_DYNAMIC_FUNC0(ColorTransform_obj,__isDefault,return )

int ColorTransform_obj::get_color( ){
	Float tmp = this->redOffset;
	int tmp1 = ::Std_obj::_int(tmp);
	int tmp2 = (int(tmp1) << int((int)16));
	Float tmp3 = this->greenOffset;
	int tmp4 = ::Std_obj::_int(tmp3);
	int tmp5 = (int(tmp4) << int((int)8));
	int tmp6 = (int(tmp2) | int(tmp5));
	Float tmp7 = this->blueOffset;
	int tmp8 = ::Std_obj::_int(tmp7);
	int tmp9 = (int(tmp6) | int(tmp8));
	return tmp9;
}


HX_DEFINE_DYNAMIC_FUNC0(ColorTransform_obj,get_color,return )

int ColorTransform_obj::set_color( int value){
	int tmp = (int(value) >> int((int)16));
	int tmp1 = (int(tmp) & int((int)255));
	this->redOffset = tmp1;
	int tmp2 = (int(value) >> int((int)8));
	int tmp3 = (int(tmp2) & int((int)255));
	this->greenOffset = tmp3;
	int tmp4 = (int(value) & int((int)255));
	this->blueOffset = tmp4;
	this->redMultiplier = (int)0;
	this->greenMultiplier = (int)0;
	this->blueMultiplier = (int)0;
	int tmp5 = this->get_color();
	return tmp5;
}


HX_DEFINE_DYNAMIC_FUNC1(ColorTransform_obj,set_color,return )

::lime::utils::ArrayBufferView ColorTransform_obj::__toLimeColorMatrix( ){
	::lime::utils::ArrayBufferView tmp = ::openfl::geom::ColorTransform_obj::__limeColorMatrix;
	bool tmp1 = (tmp == null());
	if ((tmp1)){
		::lime::utils::ArrayBufferView tmp2;
		{
			::lime::utils::ArrayBufferView this1;
			bool tmp3 = true;
			if ((tmp3)){
				::lime::utils::ArrayBufferView tmp4 = ::lime::utils::ArrayBufferView_obj::__new((int)20,(int)8);
				this1 = tmp4;
			}
			else{
				bool tmp4 = false;
				if ((tmp4)){
					::lime::utils::ArrayBufferView tmp5;
					{
						::lime::utils::ArrayBufferView tmp6 = ::lime::utils::ArrayBufferView_obj::__new((int)0,(int)8);
						::lime::utils::ArrayBufferView _this = tmp6;
						_this->byteOffset = (int)0;
						int tmp7 = hx::Throw(HX_CSTRING("Invalid field access on null object"));
						_this->length = tmp7;
						int tmp8 = (_this->length * _this->bytesPerElement);
						_this->byteLength = tmp8;
						::haxe::io::Bytes tmp9;
						{
							::haxe::io::Bytes this2;
							int tmp10 = _this->byteLength;
							::haxe::io::Bytes tmp11 = ::haxe::io::Bytes_obj::alloc(tmp10);
							this2 = tmp11;
							tmp9 = this2;
						}
						_this->buffer = tmp9;
						_this->copyFromArray(((Array< Float >)(null())),null());
						tmp5 = _this;
					}
					this1 = tmp5;
				}
				else{
					bool tmp5 = false;
					if ((tmp5)){
						::lime::utils::ArrayBufferView tmp6;
						{
							::lime::utils::ArrayBufferView tmp7 = ::lime::utils::ArrayBufferView_obj::__new((int)0,(int)8);
							::lime::utils::ArrayBufferView _this = tmp7;
							cpp::ArrayBase array = hx::Throw(HX_CSTRING("Invalid field access on null object"));
							_this->byteOffset = (int)0;
							_this->length = array->__Field(HX_HCSTRING("length","\xe6","\x94","\x07","\x9f"), hx::paccDynamic );
							int tmp8 = (_this->length * _this->bytesPerElement);
							_this->byteLength = tmp8;
							::haxe::io::Bytes tmp9;
							{
								::haxe::io::Bytes this2;
								int tmp10 = _this->byteLength;
								::haxe::io::Bytes tmp11 = ::haxe::io::Bytes_obj::alloc(tmp10);
								this2 = tmp11;
								tmp9 = this2;
							}
							_this->buffer = tmp9;
							_this->copyFromArray(((Array< Float >)(array)),null());
							tmp6 = _this;
						}
						this1 = tmp6;
					}
					else{
						bool tmp6 = false;
						if ((tmp6)){
							::lime::utils::ArrayBufferView tmp7;
							{
								::lime::utils::ArrayBufferView tmp8 = ::lime::utils::ArrayBufferView_obj::__new((int)0,(int)8);
								::lime::utils::ArrayBufferView _this = tmp8;
								::haxe::io::Bytes tmp9 = hx::Throw(HX_CSTRING("Invalid field access on null object"));
								::haxe::io::Bytes srcData = tmp9;
								int tmp10 = hx::Throw(HX_CSTRING("Invalid field access on null object"));
								int srcLength = tmp10;
								int tmp11 = hx::Throw(HX_CSTRING("Invalid field access on null object"));
								int srcByteOffset = tmp11;
								int tmp12 = hx::Throw(HX_CSTRING("Invalid field access on null object"));
								int srcElementSize = tmp12;
								int elementSize = _this->bytesPerElement;
								int tmp13 = hx::Throw(HX_CSTRING("Invalid field access on null object"));
								int tmp14 = _this->type;
								bool tmp15 = (tmp13 == tmp14);
								if ((tmp15)){
									int srcLength1 = srcData->length;
									int tmp16 = (srcLength1 - srcByteOffset);
									int cloneLength = tmp16;
									::haxe::io::Bytes tmp17;
									{
										::haxe::io::Bytes this2;
										int tmp18 = cloneLength;
										::haxe::io::Bytes tmp19 = ::haxe::io::Bytes_obj::alloc(tmp18);
										this2 = tmp19;
										tmp17 = this2;
									}
									_this->buffer = tmp17;
									::haxe::io::Bytes tmp18 = srcData;
									int tmp19 = srcByteOffset;
									int tmp20 = cloneLength;
									_this->buffer->blit((int)0,tmp18,tmp19,tmp20);
								}
								else{
									HX_STACK_DO_THROW(HX_HCSTRING("unimplemented","\x09","\x2f","\x74","\xb4"));
								}
								int tmp16 = (_this->bytesPerElement * srcLength);
								_this->byteLength = tmp16;
								_this->byteOffset = (int)0;
								_this->length = srcLength;
								tmp7 = _this;
							}
							this1 = tmp7;
						}
						else{
							bool tmp7 = false;
							if ((tmp7)){
								::lime::utils::ArrayBufferView tmp8;
								{
									::lime::utils::ArrayBufferView tmp9 = ::lime::utils::ArrayBufferView_obj::__new((int)0,(int)8);
									::lime::utils::ArrayBufferView _this = tmp9;
									int in_byteOffset = (int)0;
									bool tmp10 = (in_byteOffset < (int)0);
									if ((tmp10)){
										HX_STACK_DO_THROW(::lime::utils::TAError_obj::RangeError);
									}
									int tmp11 = hx::Mod(in_byteOffset,_this->bytesPerElement);
									bool tmp12 = (tmp11 != (int)0);
									if ((tmp12)){
										HX_STACK_DO_THROW(::lime::utils::TAError_obj::RangeError);
									}
									int tmp13 = hx::Throw(HX_CSTRING("Invalid field access on null object"));
									int bufferByteLength = tmp13;
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
									_this->buffer = null();
									_this->byteOffset = in_byteOffset;
									_this->byteLength = newByteLength;
									Float tmp15 = (Float(newByteLength) / Float(_this->bytesPerElement));
									int tmp16 = ::Std_obj::_int(tmp15);
									_this->length = tmp16;
									tmp8 = _this;
								}
								this1 = tmp8;
							}
							else{
								HX_STACK_DO_THROW(HX_HCSTRING("Invalid constructor arguments for Float32Array","\x8e","\xc1","\xf4","\xd4"));
							}
						}
					}
				}
			}
			tmp2 = this1;
		}
		::openfl::geom::ColorTransform_obj::__limeColorMatrix = tmp2;
	}
	{
		::lime::utils::ArrayBufferView tmp2 = ::openfl::geom::ColorTransform_obj::__limeColorMatrix;
		::lime::utils::ArrayBufferView this1 = tmp2;
		Float tmp3 = this->redMultiplier;
		Float val = tmp3;
		::__hxcpp_memory_set_float(this1->buffer->b,this1->byteOffset,val);
		val;
	}
	{
		::lime::utils::ArrayBufferView tmp2 = ::openfl::geom::ColorTransform_obj::__limeColorMatrix;
		::lime::utils::ArrayBufferView this1 = tmp2;
		Float tmp3 = this->redOffset;
		Float tmp4 = (Float(tmp3) / Float((int)255));
		Float val = tmp4;
		::__hxcpp_memory_set_float(this1->buffer->b,(this1->byteOffset + (int)16),val);
		val;
	}
	{
		::lime::utils::ArrayBufferView tmp2 = ::openfl::geom::ColorTransform_obj::__limeColorMatrix;
		::lime::utils::ArrayBufferView this1 = tmp2;
		Float tmp3 = this->greenMultiplier;
		Float val = tmp3;
		::__hxcpp_memory_set_float(this1->buffer->b,(this1->byteOffset + (int)24),val);
		val;
	}
	{
		::lime::utils::ArrayBufferView tmp2 = ::openfl::geom::ColorTransform_obj::__limeColorMatrix;
		::lime::utils::ArrayBufferView this1 = tmp2;
		Float tmp3 = this->greenOffset;
		Float tmp4 = (Float(tmp3) / Float((int)255));
		Float val = tmp4;
		::__hxcpp_memory_set_float(this1->buffer->b,(this1->byteOffset + (int)36),val);
		val;
	}
	{
		::lime::utils::ArrayBufferView tmp2 = ::openfl::geom::ColorTransform_obj::__limeColorMatrix;
		::lime::utils::ArrayBufferView this1 = tmp2;
		Float tmp3 = this->blueMultiplier;
		Float val = tmp3;
		::__hxcpp_memory_set_float(this1->buffer->b,(this1->byteOffset + (int)48),val);
		val;
	}
	{
		::lime::utils::ArrayBufferView tmp2 = ::openfl::geom::ColorTransform_obj::__limeColorMatrix;
		::lime::utils::ArrayBufferView this1 = tmp2;
		Float tmp3 = this->blueOffset;
		Float tmp4 = (Float(tmp3) / Float((int)255));
		Float val = tmp4;
		::__hxcpp_memory_set_float(this1->buffer->b,(this1->byteOffset + (int)56),val);
		val;
	}
	{
		::lime::utils::ArrayBufferView tmp2 = ::openfl::geom::ColorTransform_obj::__limeColorMatrix;
		::lime::utils::ArrayBufferView this1 = tmp2;
		Float tmp3 = this->alphaMultiplier;
		Float val = tmp3;
		::__hxcpp_memory_set_float(this1->buffer->b,(this1->byteOffset + (int)72),val);
		val;
	}
	{
		::lime::utils::ArrayBufferView tmp2 = ::openfl::geom::ColorTransform_obj::__limeColorMatrix;
		::lime::utils::ArrayBufferView this1 = tmp2;
		Float tmp3 = this->alphaOffset;
		Float tmp4 = (Float(tmp3) / Float((int)255));
		Float val = tmp4;
		::__hxcpp_memory_set_float(this1->buffer->b,(this1->byteOffset + (int)76),val);
		val;
	}
	::lime::utils::ArrayBufferView tmp2 = ::openfl::geom::ColorTransform_obj::__limeColorMatrix;
	return tmp2;
}


HX_DEFINE_DYNAMIC_FUNC0(ColorTransform_obj,__toLimeColorMatrix,return )

::lime::utils::ArrayBufferView ColorTransform_obj::__limeColorMatrix;


ColorTransform_obj::ColorTransform_obj()
{
}

Dynamic ColorTransform_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"color") ) { if (inCallProp == hx::paccAlways) return get_color(); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"concat") ) { return concat_dyn(); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"__clone") ) { return __clone_dyn(); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"toString") ) { return toString_dyn(); }
		if (HX_FIELD_EQ(inName,"__equals") ) { return __equals_dyn(); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"redOffset") ) { return redOffset; }
		if (HX_FIELD_EQ(inName,"__combine") ) { return __combine_dyn(); }
		if (HX_FIELD_EQ(inName,"get_color") ) { return get_color_dyn(); }
		if (HX_FIELD_EQ(inName,"set_color") ) { return set_color_dyn(); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"blueOffset") ) { return blueOffset; }
		if (HX_FIELD_EQ(inName,"__copyFrom") ) { return __copyFrom_dyn(); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"alphaOffset") ) { return alphaOffset; }
		if (HX_FIELD_EQ(inName,"greenOffset") ) { return greenOffset; }
		if (HX_FIELD_EQ(inName,"__isDefault") ) { return __isDefault_dyn(); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"redMultiplier") ) { return redMultiplier; }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"blueMultiplier") ) { return blueMultiplier; }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"alphaMultiplier") ) { return alphaMultiplier; }
		if (HX_FIELD_EQ(inName,"greenMultiplier") ) { return greenMultiplier; }
		break;
	case 19:
		if (HX_FIELD_EQ(inName,"__toLimeColorMatrix") ) { return __toLimeColorMatrix_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

bool ColorTransform_obj::__GetStatic(const ::String &inName, Dynamic &outValue, hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 17:
		if (HX_FIELD_EQ(inName,"__limeColorMatrix") ) { outValue = __limeColorMatrix; return true;  }
	}
	return false;
}

Dynamic ColorTransform_obj::__SetField(const ::String &inName,const Dynamic &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"color") ) { if (inCallProp == hx::paccAlways) return set_color(inValue); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"redOffset") ) { redOffset=inValue.Cast< Float >(); return inValue; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"blueOffset") ) { blueOffset=inValue.Cast< Float >(); return inValue; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"alphaOffset") ) { alphaOffset=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"greenOffset") ) { greenOffset=inValue.Cast< Float >(); return inValue; }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"redMultiplier") ) { redMultiplier=inValue.Cast< Float >(); return inValue; }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"blueMultiplier") ) { blueMultiplier=inValue.Cast< Float >(); return inValue; }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"alphaMultiplier") ) { alphaMultiplier=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"greenMultiplier") ) { greenMultiplier=inValue.Cast< Float >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

bool ColorTransform_obj::__SetStatic(const ::String &inName,Dynamic &ioValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 17:
		if (HX_FIELD_EQ(inName,"__limeColorMatrix") ) { __limeColorMatrix=ioValue.Cast< ::lime::utils::ArrayBufferView >(); return true; }
	}
	return false;
}

void ColorTransform_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("alphaMultiplier","\x7f","\xb4","\x82","\x9a"));
	outFields->push(HX_HCSTRING("alphaOffset","\x91","\x8d","\x43","\xd0"));
	outFields->push(HX_HCSTRING("blueMultiplier","\xbb","\x32","\x96","\xcf"));
	outFields->push(HX_HCSTRING("blueOffset","\xcd","\x3d","\x34","\xbb"));
	outFields->push(HX_HCSTRING("color","\x63","\x71","\x5c","\x4a"));
	outFields->push(HX_HCSTRING("greenMultiplier","\x24","\x2c","\x40","\x6f"));
	outFields->push(HX_HCSTRING("greenOffset","\xb6","\x0e","\xd9","\xb7"));
	outFields->push(HX_HCSTRING("redMultiplier","\x32","\xf4","\xe9","\x4e"));
	outFields->push(HX_HCSTRING("redOffset","\xc4","\x37","\x9e","\x53"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsFloat,(int)offsetof(ColorTransform_obj,alphaMultiplier),HX_HCSTRING("alphaMultiplier","\x7f","\xb4","\x82","\x9a")},
	{hx::fsFloat,(int)offsetof(ColorTransform_obj,alphaOffset),HX_HCSTRING("alphaOffset","\x91","\x8d","\x43","\xd0")},
	{hx::fsFloat,(int)offsetof(ColorTransform_obj,blueMultiplier),HX_HCSTRING("blueMultiplier","\xbb","\x32","\x96","\xcf")},
	{hx::fsFloat,(int)offsetof(ColorTransform_obj,blueOffset),HX_HCSTRING("blueOffset","\xcd","\x3d","\x34","\xbb")},
	{hx::fsFloat,(int)offsetof(ColorTransform_obj,greenMultiplier),HX_HCSTRING("greenMultiplier","\x24","\x2c","\x40","\x6f")},
	{hx::fsFloat,(int)offsetof(ColorTransform_obj,greenOffset),HX_HCSTRING("greenOffset","\xb6","\x0e","\xd9","\xb7")},
	{hx::fsFloat,(int)offsetof(ColorTransform_obj,redMultiplier),HX_HCSTRING("redMultiplier","\x32","\xf4","\xe9","\x4e")},
	{hx::fsFloat,(int)offsetof(ColorTransform_obj,redOffset),HX_HCSTRING("redOffset","\xc4","\x37","\x9e","\x53")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo sStaticStorageInfo[] = {
	{hx::fsObject /*::lime::utils::ArrayBufferView*/ ,(void *) &ColorTransform_obj::__limeColorMatrix,HX_HCSTRING("__limeColorMatrix","\xcf","\xd7","\x37","\x34")},
	{ hx::fsUnknown, 0, null()}
};
#endif

static ::String sMemberFields[] = {
	HX_HCSTRING("alphaMultiplier","\x7f","\xb4","\x82","\x9a"),
	HX_HCSTRING("alphaOffset","\x91","\x8d","\x43","\xd0"),
	HX_HCSTRING("blueMultiplier","\xbb","\x32","\x96","\xcf"),
	HX_HCSTRING("blueOffset","\xcd","\x3d","\x34","\xbb"),
	HX_HCSTRING("greenMultiplier","\x24","\x2c","\x40","\x6f"),
	HX_HCSTRING("greenOffset","\xb6","\x0e","\xd9","\xb7"),
	HX_HCSTRING("redMultiplier","\x32","\xf4","\xe9","\x4e"),
	HX_HCSTRING("redOffset","\xc4","\x37","\x9e","\x53"),
	HX_HCSTRING("concat","\x14","\x09","\xd0","\xc7"),
	HX_HCSTRING("toString","\xac","\xd0","\x6e","\x38"),
	HX_HCSTRING("__clone","\x3d","\x6c","\xc1","\xb2"),
	HX_HCSTRING("__copyFrom","\xdf","\x7e","\x99","\x6b"),
	HX_HCSTRING("__combine","\x5f","\x7b","\x7c","\xfb"),
	HX_HCSTRING("__equals","\x5f","\x59","\x22","\x68"),
	HX_HCSTRING("__isDefault","\xd7","\x9e","\xee","\xcd"),
	HX_HCSTRING("get_color","\xba","\xcd","\x05","\x8e"),
	HX_HCSTRING("set_color","\xc6","\xb9","\x56","\x71"),
	HX_HCSTRING("__toLimeColorMatrix","\x94","\xd4","\xb6","\x78"),
	::String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(ColorTransform_obj::__mClass,"__mClass");
	HX_MARK_MEMBER_NAME(ColorTransform_obj::__limeColorMatrix,"__limeColorMatrix");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(ColorTransform_obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(ColorTransform_obj::__limeColorMatrix,"__limeColorMatrix");
};

#endif

hx::Class ColorTransform_obj::__mClass;

static ::String sStaticFields[] = {
	HX_HCSTRING("__limeColorMatrix","\xcf","\xd7","\x37","\x34"),
	::String(null()) };

void ColorTransform_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("openfl.geom.ColorTransform","\x3d","\x35","\x6d","\x80");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &ColorTransform_obj::__GetStatic;
	__mClass->mSetStaticField = &ColorTransform_obj::__SetStatic;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(sStaticFields);
	__mClass->mMembers = hx::Class_obj::dupFunctions(sMemberFields);
	__mClass->mCanCast = hx::TCanCast< ColorTransform_obj >;
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
} // end namespace geom
