#include <hxcpp.h>

#ifndef INCLUDED_Std
#include <Std.h>
#endif
#ifndef INCLUDED_haxe_io_Bytes
#include <haxe/io/Bytes.h>
#endif
#ifndef INCLUDED_lime__backend_native_NativeGLRenderContext
#include <lime/_backend/native/NativeGLRenderContext.h>
#endif
#ifndef INCLUDED_lime_graphics_opengl_GL
#include <lime/graphics/opengl/GL.h>
#endif
#ifndef INCLUDED_lime_graphics_opengl_GLObject
#include <lime/graphics/opengl/GLObject.h>
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
#ifndef INCLUDED_lime_utils__DataPointer_DataPointer_Impl_
#include <lime/utils/_DataPointer/DataPointer_Impl_.h>
#endif
#ifndef INCLUDED_openfl__Vector_IVector
#include <openfl/_Vector/IVector.h>
#endif
#ifndef INCLUDED_openfl__Vector_IntVector
#include <openfl/_Vector/IntVector.h>
#endif
#ifndef INCLUDED_openfl__internal_stage3D_GLUtils
#include <openfl/_internal/stage3D/GLUtils.h>
#endif
#ifndef INCLUDED_openfl_display3D_Context3D
#include <openfl/display3D/Context3D.h>
#endif
#ifndef INCLUDED_openfl_display3D_IndexBuffer3D
#include <openfl/display3D/IndexBuffer3D.h>
#endif
#ifndef INCLUDED_openfl_display3D__Context3DBufferUsage_Context3DBufferUsage_Impl_
#include <openfl/display3D/_Context3DBufferUsage/Context3DBufferUsage_Impl_.h>
#endif
#ifndef INCLUDED_openfl_events_EventDispatcher
#include <openfl/events/EventDispatcher.h>
#endif
#ifndef INCLUDED_openfl_events_IEventDispatcher
#include <openfl/events/IEventDispatcher.h>
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
namespace display3D{

Void IndexBuffer3D_obj::__construct(::openfl::display3D::Context3D context3D,int numIndices,::String bufferUsage)
{
{
	this->__context = context3D;
	this->__numIndices = numIndices;
	this->__elementType = (int)5123;
	::lime::_backend::native::NativeGLRenderContext tmp = ::lime::graphics::opengl::GL_obj::context;
	::lime::graphics::opengl::GLObject tmp1 = tmp->createBuffer();
	this->__id = tmp1;
	::openfl::_internal::stage3D::GLUtils_obj::CheckGLError();
	::String tmp2 = bufferUsage;
	Dynamic tmp3 = ::openfl::display3D::_Context3DBufferUsage::Context3DBufferUsage_Impl__obj::fromString(tmp2);
	bool tmp4 = (tmp3 == ((Dynamic)((int)0)));
	int tmp5;
	if ((tmp4)){
		tmp5 = (int)35048;
	}
	else{
		tmp5 = (int)35044;
	}
	this->__usage = tmp5;
	::openfl::display3D::Context3D tmp6 = this->__context;
	tmp6->__statsIncrement((int)1);
	this->__memoryUsage = (int)0;
}
;
	return null();
}

//IndexBuffer3D_obj::~IndexBuffer3D_obj() { }

Dynamic IndexBuffer3D_obj::__CreateEmpty() { return  new IndexBuffer3D_obj; }
hx::ObjectPtr< IndexBuffer3D_obj > IndexBuffer3D_obj::__new(::openfl::display3D::Context3D context3D,int numIndices,::String bufferUsage)
{  hx::ObjectPtr< IndexBuffer3D_obj > _result_ = new IndexBuffer3D_obj();
	_result_->__construct(context3D,numIndices,bufferUsage);
	return _result_;}

Dynamic IndexBuffer3D_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< IndexBuffer3D_obj > _result_ = new IndexBuffer3D_obj();
	_result_->__construct(inArgs[0],inArgs[1],inArgs[2]);
	return _result_;}

Void IndexBuffer3D_obj::dispose( ){
{
		{
			::lime::_backend::native::NativeGLRenderContext tmp = ::lime::graphics::opengl::GL_obj::context;
			::lime::graphics::opengl::GLObject tmp1 = this->__id;
			tmp->deleteBuffer(tmp1);
		}
		::openfl::display3D::Context3D tmp = this->__context;
		tmp->__statsDecrement((int)1);
		::openfl::display3D::Context3D tmp1 = this->__context;
		int tmp2 = this->__memoryUsage;
		tmp1->__statsSubtract((int)6,tmp2);
		this->__memoryUsage = (int)0;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(IndexBuffer3D_obj,dispose,(void))

Void IndexBuffer3D_obj::uploadFromByteArray( ::openfl::utils::ByteArrayData data,int byteArrayOffset,int startOffset,int count){
{
		int tmp = byteArrayOffset;
		int tmp1 = (startOffset * (int)2);
		int tmp2 = (tmp + tmp1);
		int offset = tmp2;
		::lime::utils::ArrayBufferView tmp3;
		{
			::openfl::utils::ByteArrayData tmp4 = data;
			::haxe::io::Bytes tmp5 = ::openfl::utils::_ByteArray::ByteArray_Impl__obj::toArrayBuffer(tmp4);
			::haxe::io::Bytes buffer = tmp5;
			::lime::utils::ArrayBufferView this1;
			bool tmp6 = false;
			if ((tmp6)){
				::lime::utils::ArrayBufferView tmp7 = ::lime::utils::ArrayBufferView_obj::__new(null(),(int)2);
				this1 = tmp7;
			}
			else{
				bool tmp7 = false;
				if ((tmp7)){
					::lime::utils::ArrayBufferView tmp8;
					{
						::lime::utils::ArrayBufferView tmp9 = ::lime::utils::ArrayBufferView_obj::__new((int)0,(int)2);
						::lime::utils::ArrayBufferView _this = tmp9;
						_this->byteOffset = (int)0;
						int tmp10 = hx::Throw(HX_CSTRING("Invalid field access on null object"));
						_this->length = tmp10;
						int tmp11 = (_this->length * _this->bytesPerElement);
						_this->byteLength = tmp11;
						::haxe::io::Bytes tmp12;
						{
							::haxe::io::Bytes this2;
							int tmp13 = _this->byteLength;
							::haxe::io::Bytes tmp14 = ::haxe::io::Bytes_obj::alloc(tmp13);
							this2 = tmp14;
							tmp12 = this2;
						}
						_this->buffer = tmp12;
						_this->copyFromArray(((Array< Float >)(null())),null());
						tmp8 = _this;
					}
					this1 = tmp8;
				}
				else{
					bool tmp8 = false;
					if ((tmp8)){
						::lime::utils::ArrayBufferView tmp9;
						{
							::lime::utils::ArrayBufferView tmp10 = ::lime::utils::ArrayBufferView_obj::__new((int)0,(int)2);
							::lime::utils::ArrayBufferView _this = tmp10;
							cpp::ArrayBase array = hx::Throw(HX_CSTRING("Invalid field access on null object"));
							_this->byteOffset = (int)0;
							_this->length = array->__Field(HX_HCSTRING("length","\xe6","\x94","\x07","\x9f"), hx::paccDynamic );
							int tmp11 = (_this->length * _this->bytesPerElement);
							_this->byteLength = tmp11;
							::haxe::io::Bytes tmp12;
							{
								::haxe::io::Bytes this2;
								int tmp13 = _this->byteLength;
								::haxe::io::Bytes tmp14 = ::haxe::io::Bytes_obj::alloc(tmp13);
								this2 = tmp14;
								tmp12 = this2;
							}
							_this->buffer = tmp12;
							_this->copyFromArray(((Array< Float >)(array)),null());
							tmp9 = _this;
						}
						this1 = tmp9;
					}
					else{
						bool tmp9 = false;
						if ((tmp9)){
							::lime::utils::ArrayBufferView tmp10;
							{
								::lime::utils::ArrayBufferView tmp11 = ::lime::utils::ArrayBufferView_obj::__new((int)0,(int)2);
								::lime::utils::ArrayBufferView _this = tmp11;
								::haxe::io::Bytes tmp12 = hx::Throw(HX_CSTRING("Invalid field access on null object"));
								::haxe::io::Bytes srcData = tmp12;
								int tmp13 = hx::Throw(HX_CSTRING("Invalid field access on null object"));
								int srcLength = tmp13;
								int tmp14 = hx::Throw(HX_CSTRING("Invalid field access on null object"));
								int srcByteOffset = tmp14;
								int tmp15 = hx::Throw(HX_CSTRING("Invalid field access on null object"));
								int srcElementSize = tmp15;
								int elementSize = _this->bytesPerElement;
								int tmp16 = hx::Throw(HX_CSTRING("Invalid field access on null object"));
								int tmp17 = _this->type;
								bool tmp18 = (tmp16 == tmp17);
								if ((tmp18)){
									int srcLength1 = srcData->length;
									int tmp19 = (srcLength1 - srcByteOffset);
									int cloneLength = tmp19;
									::haxe::io::Bytes tmp20;
									{
										::haxe::io::Bytes this2;
										int tmp21 = cloneLength;
										::haxe::io::Bytes tmp22 = ::haxe::io::Bytes_obj::alloc(tmp21);
										this2 = tmp22;
										tmp20 = this2;
									}
									_this->buffer = tmp20;
									::haxe::io::Bytes tmp21 = srcData;
									int tmp22 = srcByteOffset;
									int tmp23 = cloneLength;
									_this->buffer->blit((int)0,tmp21,tmp22,tmp23);
								}
								else{
									HX_STACK_DO_THROW(HX_HCSTRING("unimplemented","\x09","\x2f","\x74","\xb4"));
								}
								int tmp19 = (_this->bytesPerElement * srcLength);
								_this->byteLength = tmp19;
								_this->byteOffset = (int)0;
								_this->length = srcLength;
								tmp10 = _this;
							}
							this1 = tmp10;
						}
						else{
							bool tmp10 = (buffer != null());
							if ((tmp10)){
								::lime::utils::ArrayBufferView tmp11;
								{
									::lime::utils::ArrayBufferView tmp12 = ::lime::utils::ArrayBufferView_obj::__new((int)0,(int)2);
									::lime::utils::ArrayBufferView _this = tmp12;
									int in_byteOffset = offset;
									bool tmp13 = (in_byteOffset < (int)0);
									if ((tmp13)){
										HX_STACK_DO_THROW(::lime::utils::TAError_obj::RangeError);
									}
									int tmp14 = hx::Mod(in_byteOffset,_this->bytesPerElement);
									bool tmp15 = (tmp14 != (int)0);
									if ((tmp15)){
										HX_STACK_DO_THROW(::lime::utils::TAError_obj::RangeError);
									}
									int bufferByteLength = buffer->length;
									int elementSize = _this->bytesPerElement;
									int newByteLength = bufferByteLength;
									bool tmp16 = (count == null());
									if ((tmp16)){
										int tmp17 = (bufferByteLength - in_byteOffset);
										newByteLength = tmp17;
										int tmp18 = hx::Mod(bufferByteLength,_this->bytesPerElement);
										bool tmp19 = (tmp18 != (int)0);
										if ((tmp19)){
											HX_STACK_DO_THROW(::lime::utils::TAError_obj::RangeError);
										}
										bool tmp20 = (newByteLength < (int)0);
										if ((tmp20)){
											HX_STACK_DO_THROW(::lime::utils::TAError_obj::RangeError);
										}
									}
									else{
										int tmp17 = (count * _this->bytesPerElement);
										newByteLength = tmp17;
										int tmp18 = (in_byteOffset + newByteLength);
										int newRange = tmp18;
										bool tmp19 = (newRange > bufferByteLength);
										if ((tmp19)){
											HX_STACK_DO_THROW(::lime::utils::TAError_obj::RangeError);
										}
									}
									_this->buffer = buffer;
									_this->byteOffset = in_byteOffset;
									_this->byteLength = newByteLength;
									Float tmp17 = (Float(newByteLength) / Float(_this->bytesPerElement));
									int tmp18 = ::Std_obj::_int(tmp17);
									_this->length = tmp18;
									tmp11 = _this;
								}
								this1 = tmp11;
							}
							else{
								HX_STACK_DO_THROW(HX_HCSTRING("Invalid constructor arguments for Int16Array","\x95","\xb2","\x95","\xa7"));
							}
						}
					}
				}
			}
			tmp3 = this1;
		}
		this->uploadFromTypedArray(tmp3);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC4(IndexBuffer3D_obj,uploadFromByteArray,(void))

Void IndexBuffer3D_obj::uploadFromTypedArray( ::lime::utils::ArrayBufferView data){
{
		bool tmp = (data == null());
		if ((tmp)){
			return null();
		}
		{
			::lime::_backend::native::NativeGLRenderContext tmp1 = ::lime::graphics::opengl::GL_obj::context;
			::lime::graphics::opengl::GLObject tmp2 = this->__id;
			tmp1->bindBuffer((int)34963,tmp2);
		}
		::openfl::_internal::stage3D::GLUtils_obj::CheckGLError();
		{
			::lime::utils::ArrayBufferView tmp1 = data;
			Float tmp2 = ::lime::utils::_DataPointer::DataPointer_Impl__obj::fromArrayBufferView(tmp1);
			Float srcData = tmp2;
			::lime::_backend::native::NativeGLRenderContext tmp3 = ::lime::graphics::opengl::GL_obj::context;
			int tmp4 = data->byteLength;
			Float tmp5 = srcData;
			int tmp6 = this->__usage;
			tmp3->bufferData((int)34963,tmp4,tmp5,tmp6);
		}
		::openfl::_internal::stage3D::GLUtils_obj::CheckGLError();
		int tmp1 = data->byteLength;
		int tmp2 = this->__memoryUsage;
		bool tmp3 = (tmp1 != tmp2);
		if ((tmp3)){
			::openfl::display3D::Context3D tmp4 = this->__context;
			int tmp5 = data->byteLength;
			int tmp6 = this->__memoryUsage;
			int tmp7 = (tmp5 - tmp6);
			tmp4->__statsAdd((int)6,tmp7);
			this->__memoryUsage = data->byteLength;
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(IndexBuffer3D_obj,uploadFromTypedArray,(void))

Void IndexBuffer3D_obj::uploadFromVector( ::openfl::_Vector::IntVector data,int startOffset,int count){
{
		int tmp = (startOffset + count);
		int length = tmp;
		::lime::utils::ArrayBufferView tmp1;
		{
			::lime::utils::ArrayBufferView this1;
			bool tmp2 = (count != null());
			if ((tmp2)){
				::lime::utils::ArrayBufferView tmp3 = ::lime::utils::ArrayBufferView_obj::__new(count,(int)2);
				this1 = tmp3;
			}
			else{
				bool tmp3 = false;
				if ((tmp3)){
					::lime::utils::ArrayBufferView tmp4;
					{
						::lime::utils::ArrayBufferView tmp5 = ::lime::utils::ArrayBufferView_obj::__new((int)0,(int)2);
						::lime::utils::ArrayBufferView _this = tmp5;
						_this->byteOffset = (int)0;
						int tmp6 = hx::Throw(HX_CSTRING("Invalid field access on null object"));
						_this->length = tmp6;
						int tmp7 = (_this->length * _this->bytesPerElement);
						_this->byteLength = tmp7;
						::haxe::io::Bytes tmp8;
						{
							::haxe::io::Bytes this2;
							int tmp9 = _this->byteLength;
							::haxe::io::Bytes tmp10 = ::haxe::io::Bytes_obj::alloc(tmp9);
							this2 = tmp10;
							tmp8 = this2;
						}
						_this->buffer = tmp8;
						_this->copyFromArray(((Array< Float >)(null())),null());
						tmp4 = _this;
					}
					this1 = tmp4;
				}
				else{
					bool tmp4 = false;
					if ((tmp4)){
						::lime::utils::ArrayBufferView tmp5;
						{
							::lime::utils::ArrayBufferView tmp6 = ::lime::utils::ArrayBufferView_obj::__new((int)0,(int)2);
							::lime::utils::ArrayBufferView _this = tmp6;
							cpp::ArrayBase array = hx::Throw(HX_CSTRING("Invalid field access on null object"));
							_this->byteOffset = (int)0;
							_this->length = array->__Field(HX_HCSTRING("length","\xe6","\x94","\x07","\x9f"), hx::paccDynamic );
							int tmp7 = (_this->length * _this->bytesPerElement);
							_this->byteLength = tmp7;
							::haxe::io::Bytes tmp8;
							{
								::haxe::io::Bytes this2;
								int tmp9 = _this->byteLength;
								::haxe::io::Bytes tmp10 = ::haxe::io::Bytes_obj::alloc(tmp9);
								this2 = tmp10;
								tmp8 = this2;
							}
							_this->buffer = tmp8;
							_this->copyFromArray(((Array< Float >)(array)),null());
							tmp5 = _this;
						}
						this1 = tmp5;
					}
					else{
						bool tmp5 = false;
						if ((tmp5)){
							::lime::utils::ArrayBufferView tmp6;
							{
								::lime::utils::ArrayBufferView tmp7 = ::lime::utils::ArrayBufferView_obj::__new((int)0,(int)2);
								::lime::utils::ArrayBufferView _this = tmp7;
								::haxe::io::Bytes tmp8 = hx::Throw(HX_CSTRING("Invalid field access on null object"));
								::haxe::io::Bytes srcData = tmp8;
								int tmp9 = hx::Throw(HX_CSTRING("Invalid field access on null object"));
								int srcLength = tmp9;
								int tmp10 = hx::Throw(HX_CSTRING("Invalid field access on null object"));
								int srcByteOffset = tmp10;
								int tmp11 = hx::Throw(HX_CSTRING("Invalid field access on null object"));
								int srcElementSize = tmp11;
								int elementSize = _this->bytesPerElement;
								int tmp12 = hx::Throw(HX_CSTRING("Invalid field access on null object"));
								int tmp13 = _this->type;
								bool tmp14 = (tmp12 == tmp13);
								if ((tmp14)){
									int srcLength1 = srcData->length;
									int tmp15 = (srcLength1 - srcByteOffset);
									int cloneLength = tmp15;
									::haxe::io::Bytes tmp16;
									{
										::haxe::io::Bytes this2;
										int tmp17 = cloneLength;
										::haxe::io::Bytes tmp18 = ::haxe::io::Bytes_obj::alloc(tmp17);
										this2 = tmp18;
										tmp16 = this2;
									}
									_this->buffer = tmp16;
									::haxe::io::Bytes tmp17 = srcData;
									int tmp18 = srcByteOffset;
									int tmp19 = cloneLength;
									_this->buffer->blit((int)0,tmp17,tmp18,tmp19);
								}
								else{
									HX_STACK_DO_THROW(HX_HCSTRING("unimplemented","\x09","\x2f","\x74","\xb4"));
								}
								int tmp15 = (_this->bytesPerElement * srcLength);
								_this->byteLength = tmp15;
								_this->byteOffset = (int)0;
								_this->length = srcLength;
								tmp6 = _this;
							}
							this1 = tmp6;
						}
						else{
							bool tmp6 = false;
							if ((tmp6)){
								::lime::utils::ArrayBufferView tmp7;
								{
									::lime::utils::ArrayBufferView tmp8 = ::lime::utils::ArrayBufferView_obj::__new((int)0,(int)2);
									::lime::utils::ArrayBufferView _this = tmp8;
									int in_byteOffset = (int)0;
									bool tmp9 = (in_byteOffset < (int)0);
									if ((tmp9)){
										HX_STACK_DO_THROW(::lime::utils::TAError_obj::RangeError);
									}
									int tmp10 = hx::Mod(in_byteOffset,_this->bytesPerElement);
									bool tmp11 = (tmp10 != (int)0);
									if ((tmp11)){
										HX_STACK_DO_THROW(::lime::utils::TAError_obj::RangeError);
									}
									int tmp12 = hx::Throw(HX_CSTRING("Invalid field access on null object"));
									int bufferByteLength = tmp12;
									int elementSize = _this->bytesPerElement;
									int newByteLength = bufferByteLength;
									bool tmp13 = true;
									if ((tmp13)){
										int tmp14 = (bufferByteLength - in_byteOffset);
										newByteLength = tmp14;
										int tmp15 = hx::Mod(bufferByteLength,_this->bytesPerElement);
										bool tmp16 = (tmp15 != (int)0);
										if ((tmp16)){
											HX_STACK_DO_THROW(::lime::utils::TAError_obj::RangeError);
										}
										bool tmp17 = (newByteLength < (int)0);
										if ((tmp17)){
											HX_STACK_DO_THROW(::lime::utils::TAError_obj::RangeError);
										}
									}
									else{
										int tmp14 = (null() * _this->bytesPerElement);
										newByteLength = tmp14;
										int tmp15 = (in_byteOffset + newByteLength);
										int newRange = tmp15;
										bool tmp16 = (newRange > bufferByteLength);
										if ((tmp16)){
											HX_STACK_DO_THROW(::lime::utils::TAError_obj::RangeError);
										}
									}
									_this->buffer = null();
									_this->byteOffset = in_byteOffset;
									_this->byteLength = newByteLength;
									Float tmp14 = (Float(newByteLength) / Float(_this->bytesPerElement));
									int tmp15 = ::Std_obj::_int(tmp14);
									_this->length = tmp15;
									tmp7 = _this;
								}
								this1 = tmp7;
							}
							else{
								HX_STACK_DO_THROW(HX_HCSTRING("Invalid constructor arguments for Int16Array","\x95","\xb2","\x95","\xa7"));
							}
						}
					}
				}
			}
			tmp1 = this1;
		}
		::lime::utils::ArrayBufferView buffer = tmp1;
		{
			int _g = startOffset;
			while((true)){
				bool tmp2 = (_g < length);
				bool tmp3 = !(tmp2);
				if ((tmp3)){
					break;
				}
				int tmp4 = (_g)++;
				int i = tmp4;
				{
					int tmp5 = i;
					int tmp6 = data->get(tmp5);
					int val = tmp6;
					::haxe::io::Bytes tmp7 = buffer->buffer;
					int tmp8 = buffer->byteOffset;
					int tmp9 = (i - startOffset);
					int tmp10 = (tmp9 * (int)2);
					int tmp11 = (tmp8 + tmp10);
					int tmp12 = val;
					::lime::utils::ArrayBufferIO_obj::setInt16(tmp7,tmp11,tmp12);
					val;
				}
			}
		}
		::lime::utils::ArrayBufferView tmp2 = buffer;
		this->uploadFromTypedArray(tmp2);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC3(IndexBuffer3D_obj,uploadFromVector,(void))


IndexBuffer3D_obj::IndexBuffer3D_obj()
{
}

void IndexBuffer3D_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(IndexBuffer3D);
	HX_MARK_MEMBER_NAME(__context,"__context");
	HX_MARK_MEMBER_NAME(__elementType,"__elementType");
	HX_MARK_MEMBER_NAME(__id,"__id");
	HX_MARK_MEMBER_NAME(__memoryUsage,"__memoryUsage");
	HX_MARK_MEMBER_NAME(__numIndices,"__numIndices");
	HX_MARK_MEMBER_NAME(__usage,"__usage");
	HX_MARK_END_CLASS();
}

void IndexBuffer3D_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(__context,"__context");
	HX_VISIT_MEMBER_NAME(__elementType,"__elementType");
	HX_VISIT_MEMBER_NAME(__id,"__id");
	HX_VISIT_MEMBER_NAME(__memoryUsage,"__memoryUsage");
	HX_VISIT_MEMBER_NAME(__numIndices,"__numIndices");
	HX_VISIT_MEMBER_NAME(__usage,"__usage");
}

Dynamic IndexBuffer3D_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"__id") ) { return __id; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"__usage") ) { return __usage; }
		if (HX_FIELD_EQ(inName,"dispose") ) { return dispose_dyn(); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"__context") ) { return __context; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"__numIndices") ) { return __numIndices; }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"__elementType") ) { return __elementType; }
		if (HX_FIELD_EQ(inName,"__memoryUsage") ) { return __memoryUsage; }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"uploadFromVector") ) { return uploadFromVector_dyn(); }
		break;
	case 19:
		if (HX_FIELD_EQ(inName,"uploadFromByteArray") ) { return uploadFromByteArray_dyn(); }
		break;
	case 20:
		if (HX_FIELD_EQ(inName,"uploadFromTypedArray") ) { return uploadFromTypedArray_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic IndexBuffer3D_obj::__SetField(const ::String &inName,const Dynamic &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"__id") ) { __id=inValue.Cast< ::lime::graphics::opengl::GLObject >(); return inValue; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"__usage") ) { __usage=inValue.Cast< int >(); return inValue; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"__context") ) { __context=inValue.Cast< ::openfl::display3D::Context3D >(); return inValue; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"__numIndices") ) { __numIndices=inValue.Cast< int >(); return inValue; }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"__elementType") ) { __elementType=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"__memoryUsage") ) { __memoryUsage=inValue.Cast< int >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void IndexBuffer3D_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("__context","\xcf","\xe6","\xc5","\x9a"));
	outFields->push(HX_HCSTRING("__elementType","\x76","\x1c","\xf3","\x38"));
	outFields->push(HX_HCSTRING("__id","\xfb","\xb6","\x13","\x3f"));
	outFields->push(HX_HCSTRING("__memoryUsage","\x40","\xbf","\x50","\xc5"));
	outFields->push(HX_HCSTRING("__numIndices","\xa1","\x00","\x08","\x4c"));
	outFields->push(HX_HCSTRING("__usage","\x01","\xb6","\x8d","\x14"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsObject /*::openfl::display3D::Context3D*/ ,(int)offsetof(IndexBuffer3D_obj,__context),HX_HCSTRING("__context","\xcf","\xe6","\xc5","\x9a")},
	{hx::fsInt,(int)offsetof(IndexBuffer3D_obj,__elementType),HX_HCSTRING("__elementType","\x76","\x1c","\xf3","\x38")},
	{hx::fsObject /*::lime::graphics::opengl::GLObject*/ ,(int)offsetof(IndexBuffer3D_obj,__id),HX_HCSTRING("__id","\xfb","\xb6","\x13","\x3f")},
	{hx::fsInt,(int)offsetof(IndexBuffer3D_obj,__memoryUsage),HX_HCSTRING("__memoryUsage","\x40","\xbf","\x50","\xc5")},
	{hx::fsInt,(int)offsetof(IndexBuffer3D_obj,__numIndices),HX_HCSTRING("__numIndices","\xa1","\x00","\x08","\x4c")},
	{hx::fsInt,(int)offsetof(IndexBuffer3D_obj,__usage),HX_HCSTRING("__usage","\x01","\xb6","\x8d","\x14")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo *sStaticStorageInfo = 0;
#endif

static ::String sMemberFields[] = {
	HX_HCSTRING("__context","\xcf","\xe6","\xc5","\x9a"),
	HX_HCSTRING("__elementType","\x76","\x1c","\xf3","\x38"),
	HX_HCSTRING("__id","\xfb","\xb6","\x13","\x3f"),
	HX_HCSTRING("__memoryUsage","\x40","\xbf","\x50","\xc5"),
	HX_HCSTRING("__numIndices","\xa1","\x00","\x08","\x4c"),
	HX_HCSTRING("__usage","\x01","\xb6","\x8d","\x14"),
	HX_HCSTRING("dispose","\x9f","\x80","\x4c","\xbb"),
	HX_HCSTRING("uploadFromByteArray","\xe6","\x17","\x1b","\xee"),
	HX_HCSTRING("uploadFromTypedArray","\xba","\x7c","\xf4","\xd1"),
	HX_HCSTRING("uploadFromVector","\x2e","\x6f","\x6b","\xa8"),
	::String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(IndexBuffer3D_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(IndexBuffer3D_obj::__mClass,"__mClass");
};

#endif

hx::Class IndexBuffer3D_obj::__mClass;

void IndexBuffer3D_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("openfl.display3D.IndexBuffer3D","\xaa","\xf5","\xd5","\x3f");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = hx::Class_obj::dupFunctions(sMemberFields);
	__mClass->mCanCast = hx::TCanCast< IndexBuffer3D_obj >;
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
} // end namespace display3D
