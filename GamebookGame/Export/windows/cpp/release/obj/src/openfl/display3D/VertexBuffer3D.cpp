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
#ifndef INCLUDED_lime_utils_ArrayBufferView
#include <lime/utils/ArrayBufferView.h>
#endif
#ifndef INCLUDED_lime_utils_TAError
#include <lime/utils/TAError.h>
#endif
#ifndef INCLUDED_lime_utils__DataPointer_DataPointer_Impl_
#include <lime/utils/_DataPointer/DataPointer_Impl_.h>
#endif
#ifndef INCLUDED_openfl__Vector_FloatVector
#include <openfl/_Vector/FloatVector.h>
#endif
#ifndef INCLUDED_openfl__Vector_IVector
#include <openfl/_Vector/IVector.h>
#endif
#ifndef INCLUDED_openfl__internal_stage3D_GLUtils
#include <openfl/_internal/stage3D/GLUtils.h>
#endif
#ifndef INCLUDED_openfl_display3D_Context3D
#include <openfl/display3D/Context3D.h>
#endif
#ifndef INCLUDED_openfl_display3D_VertexBuffer3D
#include <openfl/display3D/VertexBuffer3D.h>
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

Void VertexBuffer3D_obj::__construct(::openfl::display3D::Context3D context3D,int numVertices,int dataPerVertex,::String bufferUsage)
{
{
	this->__context = context3D;
	this->__numVertices = numVertices;
	this->__vertexSize = dataPerVertex;
	::lime::_backend::native::NativeGLRenderContext tmp = ::lime::graphics::opengl::GL_obj::context;
	::lime::graphics::opengl::GLObject tmp1 = tmp->createBuffer();
	this->__id = tmp1;
	::openfl::_internal::stage3D::GLUtils_obj::CheckGLError();
	int tmp2 = this->__vertexSize;
	int tmp3 = (tmp2 * (int)4);
	this->__stride = tmp3;
	this->__memoryUsage = (int)0;
	::String tmp4 = bufferUsage;
	Dynamic tmp5 = ::openfl::display3D::_Context3DBufferUsage::Context3DBufferUsage_Impl__obj::fromString(tmp4);
	bool tmp6 = (tmp5 == ((Dynamic)((int)0)));
	int tmp7;
	if ((tmp6)){
		tmp7 = (int)35048;
	}
	else{
		tmp7 = (int)35044;
	}
	this->__usage = tmp7;
	::openfl::display3D::Context3D tmp8 = this->__context;
	tmp8->__statsIncrement((int)2);
}
;
	return null();
}

//VertexBuffer3D_obj::~VertexBuffer3D_obj() { }

Dynamic VertexBuffer3D_obj::__CreateEmpty() { return  new VertexBuffer3D_obj; }
hx::ObjectPtr< VertexBuffer3D_obj > VertexBuffer3D_obj::__new(::openfl::display3D::Context3D context3D,int numVertices,int dataPerVertex,::String bufferUsage)
{  hx::ObjectPtr< VertexBuffer3D_obj > _result_ = new VertexBuffer3D_obj();
	_result_->__construct(context3D,numVertices,dataPerVertex,bufferUsage);
	return _result_;}

Dynamic VertexBuffer3D_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< VertexBuffer3D_obj > _result_ = new VertexBuffer3D_obj();
	_result_->__construct(inArgs[0],inArgs[1],inArgs[2],inArgs[3]);
	return _result_;}

Void VertexBuffer3D_obj::dispose( ){
{
		{
			::lime::_backend::native::NativeGLRenderContext tmp = ::lime::graphics::opengl::GL_obj::context;
			::lime::graphics::opengl::GLObject tmp1 = this->__id;
			tmp->deleteBuffer(tmp1);
		}
		::openfl::display3D::Context3D tmp = this->__context;
		tmp->__statsDecrement((int)2);
		::openfl::display3D::Context3D tmp1 = this->__context;
		int tmp2 = this->__memoryUsage;
		tmp1->__statsSubtract((int)7,tmp2);
		this->__memoryUsage = (int)0;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(VertexBuffer3D_obj,dispose,(void))

Void VertexBuffer3D_obj::uploadFromByteArray( ::openfl::utils::ByteArrayData data,int byteArrayOffset,int startVertex,int numVertices){
{
		int tmp = byteArrayOffset;
		int tmp1 = startVertex;
		int tmp2 = this->__stride;
		int tmp3 = (tmp1 * tmp2);
		int tmp4 = (tmp + tmp3);
		int offset = tmp4;
		int tmp5 = numVertices;
		int tmp6 = this->__vertexSize;
		int tmp7 = (tmp5 * tmp6);
		int length = tmp7;
		::lime::utils::ArrayBufferView tmp8;
		{
			::openfl::utils::ByteArrayData tmp9 = data;
			::haxe::io::Bytes tmp10 = ::openfl::utils::_ByteArray::ByteArray_Impl__obj::toArrayBuffer(tmp9);
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
									int in_byteOffset = offset;
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
									bool tmp21 = (length == null());
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
										int tmp22 = (length * _this->bytesPerElement);
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
			tmp8 = this1;
		}
		this->uploadFromTypedArray(tmp8);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC4(VertexBuffer3D_obj,uploadFromByteArray,(void))

Void VertexBuffer3D_obj::uploadFromTypedArray( ::lime::utils::ArrayBufferView data){
{
		bool tmp = (data == null());
		if ((tmp)){
			return null();
		}
		{
			::lime::_backend::native::NativeGLRenderContext tmp1 = ::lime::graphics::opengl::GL_obj::context;
			::lime::graphics::opengl::GLObject tmp2 = this->__id;
			tmp1->bindBuffer((int)34962,tmp2);
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
			tmp3->bufferData((int)34962,tmp4,tmp5,tmp6);
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
			tmp4->__statsAdd((int)7,tmp7);
			this->__memoryUsage = data->byteLength;
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(VertexBuffer3D_obj,uploadFromTypedArray,(void))

Void VertexBuffer3D_obj::uploadFromVector( ::openfl::_Vector::FloatVector data,int startVertex,int numVertices){
{
		bool tmp = (data == null());
		if ((tmp)){
			return null();
		}
		int tmp1 = startVertex;
		int tmp2 = this->__vertexSize;
		int tmp3 = (tmp1 * tmp2);
		int start = tmp3;
		int tmp4 = numVertices;
		int tmp5 = this->__vertexSize;
		int tmp6 = (tmp4 * tmp5);
		int count = tmp6;
		int tmp7 = (start + count);
		int length = tmp7;
		int tmp8 = (length * (int)4);
		int byteLength = tmp8;
		::haxe::io::Bytes tmp9 = this->__tempBytes;
		bool tmp10 = (tmp9 == null());
		bool tmp11 = !(tmp10);
		bool tmp12;
		if ((tmp11)){
			::haxe::io::Bytes tmp13 = this->__tempBytes;
			::haxe::io::Bytes tmp14 = tmp13;
			int tmp15 = tmp14->length;
			int tmp16 = byteLength;
			tmp12 = (tmp15 < tmp16);
		}
		else{
			tmp12 = true;
		}
		if ((tmp12)){
			int tmp13 = byteLength;
			::haxe::io::Bytes tmp14 = ::haxe::io::Bytes_obj::alloc(tmp13);
			this->__tempBytes = tmp14;
		}
		{
			int _g = start;
			while((true)){
				bool tmp13 = (_g < length);
				bool tmp14 = !(tmp13);
				if ((tmp14)){
					break;
				}
				int tmp15 = (_g)++;
				int i = tmp15;
				::haxe::io::Bytes tmp16 = this->__tempBytes;
				int tmp17 = (i - start);
				int tmp18 = (tmp17 * (int)4);
				int tmp19 = i;
				Float tmp20 = data->get(tmp19);
				Float tmp21 = tmp20;
				tmp16->setFloat(tmp18,tmp21);
			}
		}
		{
			::lime::_backend::native::NativeGLRenderContext tmp13 = ::lime::graphics::opengl::GL_obj::context;
			::lime::graphics::opengl::GLObject tmp14 = this->__id;
			tmp13->bindBuffer((int)34962,tmp14);
		}
		::openfl::_internal::stage3D::GLUtils_obj::CheckGLError();
		{
			::haxe::io::Bytes tmp13 = this->__tempBytes;
			Float tmp14 = ::lime::utils::_DataPointer::DataPointer_Impl__obj::fromArrayBuffer(tmp13);
			Float srcData = tmp14;
			::lime::_backend::native::NativeGLRenderContext tmp15 = ::lime::graphics::opengl::GL_obj::context;
			int tmp16 = byteLength;
			Float tmp17 = srcData;
			int tmp18 = this->__usage;
			tmp15->bufferData((int)34962,tmp16,tmp17,tmp18);
		}
		::openfl::_internal::stage3D::GLUtils_obj::CheckGLError();
		int tmp13 = byteLength;
		int tmp14 = this->__memoryUsage;
		bool tmp15 = (tmp13 != tmp14);
		if ((tmp15)){
			::openfl::display3D::Context3D tmp16 = this->__context;
			int tmp17 = byteLength;
			int tmp18 = this->__memoryUsage;
			int tmp19 = (tmp17 - tmp18);
			tmp16->__statsAdd((int)7,tmp19);
			this->__memoryUsage = byteLength;
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC3(VertexBuffer3D_obj,uploadFromVector,(void))


VertexBuffer3D_obj::VertexBuffer3D_obj()
{
}

void VertexBuffer3D_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(VertexBuffer3D);
	HX_MARK_MEMBER_NAME(__context,"__context");
	HX_MARK_MEMBER_NAME(__data,"__data");
	HX_MARK_MEMBER_NAME(__id,"__id");
	HX_MARK_MEMBER_NAME(__memoryUsage,"__memoryUsage");
	HX_MARK_MEMBER_NAME(__numVertices,"__numVertices");
	HX_MARK_MEMBER_NAME(__stride,"__stride");
	HX_MARK_MEMBER_NAME(__tempBytes,"__tempBytes");
	HX_MARK_MEMBER_NAME(__usage,"__usage");
	HX_MARK_MEMBER_NAME(__vertexSize,"__vertexSize");
	HX_MARK_END_CLASS();
}

void VertexBuffer3D_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(__context,"__context");
	HX_VISIT_MEMBER_NAME(__data,"__data");
	HX_VISIT_MEMBER_NAME(__id,"__id");
	HX_VISIT_MEMBER_NAME(__memoryUsage,"__memoryUsage");
	HX_VISIT_MEMBER_NAME(__numVertices,"__numVertices");
	HX_VISIT_MEMBER_NAME(__stride,"__stride");
	HX_VISIT_MEMBER_NAME(__tempBytes,"__tempBytes");
	HX_VISIT_MEMBER_NAME(__usage,"__usage");
	HX_VISIT_MEMBER_NAME(__vertexSize,"__vertexSize");
}

Dynamic VertexBuffer3D_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"__id") ) { return __id; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"__data") ) { return __data; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"__usage") ) { return __usage; }
		if (HX_FIELD_EQ(inName,"dispose") ) { return dispose_dyn(); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"__stride") ) { return __stride; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"__context") ) { return __context; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"__tempBytes") ) { return __tempBytes; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"__vertexSize") ) { return __vertexSize; }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"__memoryUsage") ) { return __memoryUsage; }
		if (HX_FIELD_EQ(inName,"__numVertices") ) { return __numVertices; }
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

Dynamic VertexBuffer3D_obj::__SetField(const ::String &inName,const Dynamic &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"__id") ) { __id=inValue.Cast< ::lime::graphics::opengl::GLObject >(); return inValue; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"__data") ) { __data=inValue.Cast< ::openfl::_Vector::FloatVector >(); return inValue; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"__usage") ) { __usage=inValue.Cast< int >(); return inValue; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"__stride") ) { __stride=inValue.Cast< int >(); return inValue; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"__context") ) { __context=inValue.Cast< ::openfl::display3D::Context3D >(); return inValue; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"__tempBytes") ) { __tempBytes=inValue.Cast< ::haxe::io::Bytes >(); return inValue; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"__vertexSize") ) { __vertexSize=inValue.Cast< int >(); return inValue; }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"__memoryUsage") ) { __memoryUsage=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"__numVertices") ) { __numVertices=inValue.Cast< int >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void VertexBuffer3D_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("__context","\xcf","\xe6","\xc5","\x9a"));
	outFields->push(HX_HCSTRING("__data","\x4a","\xb9","\x5b","\xf1"));
	outFields->push(HX_HCSTRING("__id","\xfb","\xb6","\x13","\x3f"));
	outFields->push(HX_HCSTRING("__memoryUsage","\x40","\xbf","\x50","\xc5"));
	outFields->push(HX_HCSTRING("__numVertices","\x3f","\x51","\xa4","\x9e"));
	outFields->push(HX_HCSTRING("__stride","\x39","\x8b","\x5f","\xb9"));
	outFields->push(HX_HCSTRING("__tempBytes","\x97","\x55","\xd8","\x21"));
	outFields->push(HX_HCSTRING("__usage","\x01","\xb6","\x8d","\x14"));
	outFields->push(HX_HCSTRING("__vertexSize","\x65","\xa5","\xa3","\x15"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsObject /*::openfl::display3D::Context3D*/ ,(int)offsetof(VertexBuffer3D_obj,__context),HX_HCSTRING("__context","\xcf","\xe6","\xc5","\x9a")},
	{hx::fsObject /*::openfl::_Vector::FloatVector*/ ,(int)offsetof(VertexBuffer3D_obj,__data),HX_HCSTRING("__data","\x4a","\xb9","\x5b","\xf1")},
	{hx::fsObject /*::lime::graphics::opengl::GLObject*/ ,(int)offsetof(VertexBuffer3D_obj,__id),HX_HCSTRING("__id","\xfb","\xb6","\x13","\x3f")},
	{hx::fsInt,(int)offsetof(VertexBuffer3D_obj,__memoryUsage),HX_HCSTRING("__memoryUsage","\x40","\xbf","\x50","\xc5")},
	{hx::fsInt,(int)offsetof(VertexBuffer3D_obj,__numVertices),HX_HCSTRING("__numVertices","\x3f","\x51","\xa4","\x9e")},
	{hx::fsInt,(int)offsetof(VertexBuffer3D_obj,__stride),HX_HCSTRING("__stride","\x39","\x8b","\x5f","\xb9")},
	{hx::fsObject /*::haxe::io::Bytes*/ ,(int)offsetof(VertexBuffer3D_obj,__tempBytes),HX_HCSTRING("__tempBytes","\x97","\x55","\xd8","\x21")},
	{hx::fsInt,(int)offsetof(VertexBuffer3D_obj,__usage),HX_HCSTRING("__usage","\x01","\xb6","\x8d","\x14")},
	{hx::fsInt,(int)offsetof(VertexBuffer3D_obj,__vertexSize),HX_HCSTRING("__vertexSize","\x65","\xa5","\xa3","\x15")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo *sStaticStorageInfo = 0;
#endif

static ::String sMemberFields[] = {
	HX_HCSTRING("__context","\xcf","\xe6","\xc5","\x9a"),
	HX_HCSTRING("__data","\x4a","\xb9","\x5b","\xf1"),
	HX_HCSTRING("__id","\xfb","\xb6","\x13","\x3f"),
	HX_HCSTRING("__memoryUsage","\x40","\xbf","\x50","\xc5"),
	HX_HCSTRING("__numVertices","\x3f","\x51","\xa4","\x9e"),
	HX_HCSTRING("__stride","\x39","\x8b","\x5f","\xb9"),
	HX_HCSTRING("__tempBytes","\x97","\x55","\xd8","\x21"),
	HX_HCSTRING("__usage","\x01","\xb6","\x8d","\x14"),
	HX_HCSTRING("__vertexSize","\x65","\xa5","\xa3","\x15"),
	HX_HCSTRING("dispose","\x9f","\x80","\x4c","\xbb"),
	HX_HCSTRING("uploadFromByteArray","\xe6","\x17","\x1b","\xee"),
	HX_HCSTRING("uploadFromTypedArray","\xba","\x7c","\xf4","\xd1"),
	HX_HCSTRING("uploadFromVector","\x2e","\x6f","\x6b","\xa8"),
	::String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(VertexBuffer3D_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(VertexBuffer3D_obj::__mClass,"__mClass");
};

#endif

hx::Class VertexBuffer3D_obj::__mClass;

void VertexBuffer3D_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("openfl.display3D.VertexBuffer3D","\x8e","\x20","\x03","\xff");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = hx::Class_obj::dupFunctions(sMemberFields);
	__mClass->mCanCast = hx::TCanCast< VertexBuffer3D_obj >;
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
