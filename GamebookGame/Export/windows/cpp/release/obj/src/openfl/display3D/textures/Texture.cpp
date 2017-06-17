#include <hxcpp.h>

#ifndef INCLUDED_Std
#include <Std.h>
#endif
#ifndef INCLUDED_haxe_Timer
#include <haxe/Timer.h>
#endif
#ifndef INCLUDED_haxe_io_Bytes
#include <haxe/io/Bytes.h>
#endif
#ifndef INCLUDED_lime__backend_native_NativeGLRenderContext
#include <lime/_backend/native/NativeGLRenderContext.h>
#endif
#ifndef INCLUDED_lime_graphics_Image
#include <lime/graphics/Image.h>
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
#ifndef INCLUDED_openfl__Vector_IVector
#include <openfl/_Vector/IVector.h>
#endif
#ifndef INCLUDED_openfl__Vector_IntVector
#include <openfl/_Vector/IntVector.h>
#endif
#ifndef INCLUDED_openfl__internal_stage3D_GLUtils
#include <openfl/_internal/stage3D/GLUtils.h>
#endif
#ifndef INCLUDED_openfl__internal_stage3D_SamplerState
#include <openfl/_internal/stage3D/SamplerState.h>
#endif
#ifndef INCLUDED_openfl_display_BitmapData
#include <openfl/display/BitmapData.h>
#endif
#ifndef INCLUDED_openfl_display_IBitmapDrawable
#include <openfl/display/IBitmapDrawable.h>
#endif
#ifndef INCLUDED_openfl_display3D_Context3D
#include <openfl/display3D/Context3D.h>
#endif
#ifndef INCLUDED_openfl_display3D_textures_Texture
#include <openfl/display3D/textures/Texture.h>
#endif
#ifndef INCLUDED_openfl_display3D_textures_TextureBase
#include <openfl/display3D/textures/TextureBase.h>
#endif
#ifndef INCLUDED_openfl_errors_Error
#include <openfl/errors/Error.h>
#endif
#ifndef INCLUDED_openfl_errors_IllegalOperationError
#include <openfl/errors/IllegalOperationError.h>
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
#ifndef INCLUDED_openfl_geom_ColorTransform
#include <openfl/geom/ColorTransform.h>
#endif
#ifndef INCLUDED_openfl_geom_Matrix
#include <openfl/geom/Matrix.h>
#endif
#ifndef INCLUDED_openfl_geom_Rectangle
#include <openfl/geom/Rectangle.h>
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
namespace textures{

Void Texture_obj::__construct(::openfl::display3D::Context3D context,int width,int height,Dynamic format,bool optimizeForRenderToTexture,int streamingLevels)
{
{
	::openfl::display3D::Context3D tmp = context;
	super::__construct(tmp,(int)3553);
	this->__width = width;
	this->__height = height;
	this->__optimizeForRenderToTexture = optimizeForRenderToTexture;
	this->__streamingLevels = streamingLevels;
	{
		::lime::_backend::native::NativeGLRenderContext tmp1 = ::lime::graphics::opengl::GL_obj::context;
		int tmp2 = this->__textureTarget;
		::lime::graphics::opengl::GLObject tmp3 = this->__textureID;
		tmp1->bindTexture(tmp2,tmp3);
	}
	::openfl::_internal::stage3D::GLUtils_obj::CheckGLError();
	{
		Float tmp1 = ::lime::utils::_DataPointer::DataPointer_Impl__obj::fromInt((int)0);
		Float data = tmp1;
		::lime::_backend::native::NativeGLRenderContext tmp2 = ::lime::graphics::opengl::GL_obj::context;
		int tmp3 = this->__textureTarget;
		int tmp4 = this->__internalFormat;
		int tmp5 = width;
		int tmp6 = height;
		int tmp7 = this->__format;
		Float tmp8 = data;
		tmp2->texImage2D(tmp3,(int)0,tmp4,tmp5,tmp6,(int)0,tmp7,(int)5121,tmp8);
	}
	::openfl::_internal::stage3D::GLUtils_obj::CheckGLError();
	{
		::lime::_backend::native::NativeGLRenderContext tmp1 = ::lime::graphics::opengl::GL_obj::context;
		int tmp2 = this->__textureTarget;
		tmp1->bindTexture(tmp2,null());
	}
	this->uploadFromTypedArray(null(),null());
}
;
	return null();
}

//Texture_obj::~Texture_obj() { }

Dynamic Texture_obj::__CreateEmpty() { return  new Texture_obj; }
hx::ObjectPtr< Texture_obj > Texture_obj::__new(::openfl::display3D::Context3D context,int width,int height,Dynamic format,bool optimizeForRenderToTexture,int streamingLevels)
{  hx::ObjectPtr< Texture_obj > _result_ = new Texture_obj();
	_result_->__construct(context,width,height,format,optimizeForRenderToTexture,streamingLevels);
	return _result_;}

Dynamic Texture_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< Texture_obj > _result_ = new Texture_obj();
	_result_->__construct(inArgs[0],inArgs[1],inArgs[2],inArgs[3],inArgs[4],inArgs[5]);
	return _result_;}

Void Texture_obj::uploadCompressedTextureFromByteArray( ::openfl::utils::ByteArrayData data,int byteArrayOffset,hx::Null< bool >  __o_async){
bool async = __o_async.Default(false);
{
		::openfl::display3D::textures::Texture _g = hx::ObjectPtr<OBJ_>(this);
		data->position = byteArrayOffset;
		::String tmp = data->readUTFBytes((int)3);
		::String signature = tmp;
		data->position = byteArrayOffset;
		bool tmp1 = (signature == HX_HCSTRING("ATF","\xf3","\x9b","\x31","\x00"));
		if ((tmp1)){
			{
				::lime::_backend::native::NativeGLRenderContext tmp2 = ::lime::graphics::opengl::GL_obj::context;
				int tmp3 = this->__textureTarget;
				::lime::graphics::opengl::GLObject tmp4 = this->__textureID;
				tmp2->bindTexture(tmp3,tmp4);
			}
			::openfl::_internal::stage3D::GLUtils_obj::CheckGLError();
			::openfl::utils::ByteArrayData tmp2 = data;
			int tmp3 = byteArrayOffset;
			this->__uploadATFTextureFromByteArray(tmp2,tmp3);
			{
				::lime::_backend::native::NativeGLRenderContext tmp4 = ::lime::graphics::opengl::GL_obj::context;
				int tmp5 = this->__textureTarget;
				tmp4->bindTexture(tmp5,null());
			}
			::openfl::_internal::stage3D::GLUtils_obj::CheckGLError();
		}
		else{
			{
				::lime::_backend::native::NativeGLRenderContext tmp2 = ::lime::graphics::opengl::GL_obj::context;
				int tmp3 = this->__textureTarget;
				tmp2->bindTexture(tmp3,null());
			}
			::openfl::_internal::stage3D::GLUtils_obj::CheckGLError();
		}
		bool tmp2 = async;
		if ((tmp2)){

			HX_BEGIN_LOCAL_FUNC_S1(hx::LocalFunc,_Function_2_1,::openfl::display3D::textures::Texture,_g)
			int __ArgCount() const { return 0; }
			Void run(){
				{
					::openfl::events::Event tmp3 = ::openfl::events::Event_obj::__new(HX_HCSTRING("textureReady","\x88","\x4d","\x5a","\xdf"),null(),null());
					_g->dispatchEvent(tmp3);
				}
				return null();
			}
			HX_END_LOCAL_FUNC0((void))

			::haxe::Timer_obj::delay( Dynamic(new _Function_2_1(_g)),(int)1);
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC3(Texture_obj,uploadCompressedTextureFromByteArray,(void))

Void Texture_obj::uploadFromBitmapData( ::openfl::display::BitmapData source,hx::Null< int >  __o_miplevel,hx::Null< bool >  __o_generateMipmap){
int miplevel = __o_miplevel.Default(0);
bool generateMipmap = __o_generateMipmap.Default(false);
{
		bool tmp = (source == null());
		if ((tmp)){
			return null();
		}
		int tmp1 = this->__width;
		int tmp2 = miplevel;
		int tmp3 = (int(tmp1) >> int(tmp2));
		int width = tmp3;
		int tmp4 = this->__height;
		int tmp5 = miplevel;
		int tmp6 = (int(tmp4) >> int(tmp5));
		int height = tmp6;
		bool tmp7 = (width == (int)0);
		bool tmp8;
		if ((tmp7)){
			tmp8 = (height == (int)0);
		}
		else{
			tmp8 = false;
		}
		if ((tmp8)){
			return null();
		}
		bool tmp9 = (width == (int)0);
		if ((tmp9)){
			width = (int)1;
		}
		bool tmp10 = (height == (int)0);
		if ((tmp10)){
			height = (int)1;
		}
		bool tmp11 = (source->width != width);
		bool tmp12 = !(tmp11);
		bool tmp13;
		if ((tmp12)){
			tmp13 = (source->height != height);
		}
		else{
			tmp13 = true;
		}
		if ((tmp13)){
			::openfl::display::BitmapData tmp14 = ::openfl::display::BitmapData_obj::__new(width,height,true,(int)0);
			::openfl::display::BitmapData copy = tmp14;
			::openfl::display::BitmapData tmp15 = source;
			copy->draw(tmp15,null(),null(),null(),null(),null());
			source = copy;
		}
		::openfl::display::BitmapData tmp14 = source;
		::lime::graphics::Image tmp15 = this->__getImage(tmp14);
		::lime::graphics::Image image = tmp15;
		::lime::utils::ArrayBufferView tmp16 = image->get_data();
		int tmp17 = miplevel;
		this->uploadFromTypedArray(tmp16,tmp17);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC3(Texture_obj,uploadFromBitmapData,(void))

Void Texture_obj::uploadFromByteArray( ::openfl::utils::ByteArrayData data,int byteArrayOffset,hx::Null< int >  __o_miplevel){
int miplevel = __o_miplevel.Default(0);
{
		::lime::utils::ArrayBufferView tmp;
		{
			::openfl::utils::ByteArrayData tmp1 = data;
			::haxe::io::Bytes tmp2 = ::openfl::utils::_ByteArray::ByteArray_Impl__obj::toArrayBuffer(tmp1);
			::haxe::io::Bytes buffer = tmp2;
			::lime::utils::ArrayBufferView this1;
			bool tmp3 = false;
			if ((tmp3)){
				::lime::utils::ArrayBufferView tmp4 = ::lime::utils::ArrayBufferView_obj::__new(null(),(int)4);
				this1 = tmp4;
			}
			else{
				bool tmp4 = false;
				if ((tmp4)){
					::lime::utils::ArrayBufferView tmp5;
					{
						::lime::utils::ArrayBufferView tmp6 = ::lime::utils::ArrayBufferView_obj::__new((int)0,(int)4);
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
							::lime::utils::ArrayBufferView tmp7 = ::lime::utils::ArrayBufferView_obj::__new((int)0,(int)4);
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
								::lime::utils::ArrayBufferView tmp8 = ::lime::utils::ArrayBufferView_obj::__new((int)0,(int)4);
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
							bool tmp7 = (buffer != null());
							if ((tmp7)){
								::lime::utils::ArrayBufferView tmp8;
								{
									::lime::utils::ArrayBufferView tmp9 = ::lime::utils::ArrayBufferView_obj::__new((int)0,(int)4);
									::lime::utils::ArrayBufferView _this = tmp9;
									int in_byteOffset = byteArrayOffset;
									bool tmp10 = (in_byteOffset < (int)0);
									if ((tmp10)){
										HX_STACK_DO_THROW(::lime::utils::TAError_obj::RangeError);
									}
									int tmp11 = hx::Mod(in_byteOffset,_this->bytesPerElement);
									bool tmp12 = (tmp11 != (int)0);
									if ((tmp12)){
										HX_STACK_DO_THROW(::lime::utils::TAError_obj::RangeError);
									}
									int bufferByteLength = buffer->length;
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
									_this->buffer = buffer;
									_this->byteOffset = in_byteOffset;
									_this->byteLength = newByteLength;
									Float tmp14 = (Float(newByteLength) / Float(_this->bytesPerElement));
									int tmp15 = ::Std_obj::_int(tmp14);
									_this->length = tmp15;
									tmp8 = _this;
								}
								this1 = tmp8;
							}
							else{
								HX_STACK_DO_THROW(HX_HCSTRING("Invalid constructor arguments for UInt8Array","\x6b","\x44","\xd5","\x85"));
							}
						}
					}
				}
			}
			tmp = this1;
		}
		int tmp1 = miplevel;
		this->uploadFromTypedArray(tmp,tmp1);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC3(Texture_obj,uploadFromByteArray,(void))

Void Texture_obj::uploadFromTypedArray( ::lime::utils::ArrayBufferView data,hx::Null< int >  __o_miplevel){
int miplevel = __o_miplevel.Default(0);
{
		bool tmp = (data == null());
		if ((tmp)){
			return null();
		}
		int tmp1 = this->__width;
		int tmp2 = miplevel;
		int tmp3 = (int(tmp1) >> int(tmp2));
		int width = tmp3;
		int tmp4 = this->__height;
		int tmp5 = miplevel;
		int tmp6 = (int(tmp4) >> int(tmp5));
		int height = tmp6;
		bool tmp7 = (width == (int)0);
		bool tmp8;
		if ((tmp7)){
			tmp8 = (height == (int)0);
		}
		else{
			tmp8 = false;
		}
		if ((tmp8)){
			return null();
		}
		bool tmp9 = (width == (int)0);
		if ((tmp9)){
			width = (int)1;
		}
		bool tmp10 = (height == (int)0);
		if ((tmp10)){
			height = (int)1;
		}
		{
			::lime::_backend::native::NativeGLRenderContext tmp11 = ::lime::graphics::opengl::GL_obj::context;
			int tmp12 = this->__textureTarget;
			::lime::graphics::opengl::GLObject tmp13 = this->__textureID;
			tmp11->bindTexture(tmp12,tmp13);
		}
		::openfl::_internal::stage3D::GLUtils_obj::CheckGLError();
		{
			::lime::utils::ArrayBufferView tmp11 = data;
			Float tmp12 = ::lime::utils::_DataPointer::DataPointer_Impl__obj::fromArrayBufferView(tmp11);
			Float data1 = tmp12;
			::lime::_backend::native::NativeGLRenderContext tmp13 = ::lime::graphics::opengl::GL_obj::context;
			int tmp14 = this->__textureTarget;
			int tmp15 = miplevel;
			int tmp16 = this->__internalFormat;
			int tmp17 = width;
			int tmp18 = height;
			int tmp19 = this->__format;
			Float tmp20 = data1;
			tmp13->texImage2D(tmp14,tmp15,tmp16,tmp17,tmp18,(int)0,tmp19,(int)5121,tmp20);
		}
		::openfl::_internal::stage3D::GLUtils_obj::CheckGLError();
		{
			::lime::_backend::native::NativeGLRenderContext tmp11 = ::lime::graphics::opengl::GL_obj::context;
			int tmp12 = this->__textureTarget;
			tmp11->bindTexture(tmp12,null());
		}
		::openfl::_internal::stage3D::GLUtils_obj::CheckGLError();
		int tmp11 = (width * height);
		int tmp12 = (tmp11 * (int)4);
		int memUsage = tmp12;
		int tmp13 = memUsage;
		this->__trackMemoryUsage(tmp13);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(Texture_obj,uploadFromTypedArray,(void))

Void Texture_obj::__setSamplerState( ::openfl::_internal::stage3D::SamplerState state){
{
		::openfl::_internal::stage3D::SamplerState tmp = this->__samplerState;
		bool tmp1 = state->equals(tmp);
		bool tmp2 = !(tmp1);
		if ((tmp2)){
			bool tmp3 = (state->minFilter != (int)9728);
			bool tmp4 = tmp3;
			bool tmp5;
			if ((tmp4)){
				tmp5 = (state->minFilter != (int)9729);
			}
			else{
				tmp5 = false;
			}
			bool tmp6;
			if ((tmp5)){
				bool tmp7 = state->mipmapGenerated;
				bool tmp8 = tmp7;
				tmp6 = !(tmp8);
			}
			else{
				tmp6 = false;
			}
			if ((tmp6)){
				{
					::lime::_backend::native::NativeGLRenderContext tmp7 = ::lime::graphics::opengl::GL_obj::context;
					tmp7->generateMipmap((int)3553);
				}
				::openfl::_internal::stage3D::GLUtils_obj::CheckGLError();
				state->mipmapGenerated = true;
			}
			bool tmp7 = (state->maxAniso != ((Float)0.0));
			if ((tmp7)){
				{
					::lime::_backend::native::NativeGLRenderContext tmp8 = ::lime::graphics::opengl::GL_obj::context;
					int tmp9 = ::openfl::display3D::Context3D_obj::TEXTURE_MAX_ANISOTROPY_EXT;
					Float tmp10 = state->maxAniso;
					tmp8->texParameterf((int)3553,tmp9,tmp10);
				}
				::openfl::_internal::stage3D::GLUtils_obj::CheckGLError();
			}
		}
		::openfl::_internal::stage3D::SamplerState tmp3 = state;
		this->super::__setSamplerState(tmp3);
	}
return null();
}


Void Texture_obj::__uploadATFTextureFromByteArray( ::openfl::utils::ByteArrayData data,int byteArrayOffset){
{
		data->position = byteArrayOffset;
		int version = (int)0;
		int length = (int)0;
		int tmp = (byteArrayOffset + (int)6);
		int tmp1 = tmp;
		int tmp2 = data->b->__get(tmp1);
		bool tmp3 = (tmp2 == (int)255);
		if ((tmp3)){
			version = (int)1;
			int tmp4 = (byteArrayOffset + (int)8);
			data->position = tmp4;
			::openfl::utils::ByteArrayData tmp5 = data;
			int tmp6 = this->__readUInt32(tmp5);
			length = tmp6;
		}
		else{
			version = (int)0;
			int tmp4 = (byteArrayOffset + (int)3);
			data->position = tmp4;
			::openfl::utils::ByteArrayData tmp5 = data;
			int tmp6 = this->__readUInt24(tmp5);
			length = tmp6;
		}
		int tmp4 = (byteArrayOffset + length);
		int tmp5;
		tmp5 = hx::TCast< ::Int >::cast(tmp4);
		::openfl::utils::ByteArrayData tmp6 = data;
		int tmp7 = ::openfl::utils::_ByteArray::ByteArray_Impl__obj::get_length(tmp6);
		bool tmp8 = (tmp5 > tmp7);
		if ((tmp8)){
			::openfl::errors::IllegalOperationError tmp9 = ::openfl::errors::IllegalOperationError_obj::__new(HX_HCSTRING("ATF length exceeds byte array length","\xd7","\x29","\x45","\x0f"));
			HX_STACK_DO_THROW(tmp9);
		}
		int tmp9 = data->readUnsignedByte();
		int tdata = tmp9;
		int tmp10 = (int(tdata) >> int((int)7));
		int type = tmp10;
		bool tmp11 = (type != (int)0);
		if ((tmp11)){
			::openfl::errors::IllegalOperationError tmp12 = ::openfl::errors::IllegalOperationError_obj::__new(HX_HCSTRING("ATF Cube maps are not supported","\x0a","\xda","\x6c","\x45"));
			HX_STACK_DO_THROW(tmp12);
		}
		int tmp12 = (int(tdata) & int((int)127));
		int format = tmp12;
		int tmp13 = format;
		switch( (int)(tmp13)){
			case (int)3: {
				int tmp14 = ::openfl::display3D::textures::TextureBase_obj::__textureFormatCompressed;
				this->__format = tmp14;
			}
			;break;
			case (int)5: {
				int tmp14 = ::openfl::display3D::textures::TextureBase_obj::__textureFormatCompressedAlpha;
				this->__format = tmp14;
			}
			;break;
			default: {
				::openfl::errors::IllegalOperationError tmp14 = ::openfl::errors::IllegalOperationError_obj::__new(HX_HCSTRING("Only ATF block compressed textures without JPEG-XR+LZMA are supported","\x25","\x8c","\x50","\x6a"));
				HX_STACK_DO_THROW(tmp14);
			}
		}
		int tmp14 = data->readUnsignedByte();
		int tmp15 = tmp14;
		int tmp16 = (int((int)1) << int(tmp15));
		int width = tmp16;
		int tmp17 = data->readUnsignedByte();
		int tmp18 = tmp17;
		int tmp19 = (int((int)1) << int(tmp18));
		int height = tmp19;
		int tmp20 = width;
		int tmp21 = this->__width;
		bool tmp22 = (tmp20 != tmp21);
		bool tmp23 = !(tmp22);
		bool tmp24;
		if ((tmp23)){
			int tmp25 = height;
			int tmp26 = this->__height;
			int tmp27 = tmp26;
			tmp24 = (tmp25 != tmp27);
		}
		else{
			tmp24 = true;
		}
		if ((tmp24)){
			::openfl::errors::IllegalOperationError tmp25 = ::openfl::errors::IllegalOperationError_obj::__new(HX_HCSTRING("ATF width and height dont match","\x3f","\x49","\x15","\x70"));
			HX_STACK_DO_THROW(tmp25);
		}
		int tmp25 = data->readUnsignedByte();
		int mipCount = tmp25;
		{
			int _g = (int)0;
			while((true)){
				bool tmp26 = (_g < mipCount);
				bool tmp27 = !(tmp26);
				if ((tmp27)){
					break;
				}
				int tmp28 = (_g)++;
				int level = tmp28;
				{
					int _g1 = (int)0;
					while((true)){
						bool tmp29 = (_g1 < (int)4);
						bool tmp30 = !(tmp29);
						if ((tmp30)){
							break;
						}
						int tmp31 = (_g1)++;
						int gpuFormat = tmp31;
						bool tmp32 = (version == (int)0);
						int tmp33;
						if ((tmp32)){
							::openfl::utils::ByteArrayData tmp34 = data;
							tmp33 = this->__readUInt24(tmp34);
						}
						else{
							::openfl::utils::ByteArrayData tmp34 = data;
							tmp33 = this->__readUInt32(tmp34);
						}
						int blockLength = tmp33;
						bool tmp34;
						{
							int tmp35 = (data->position + blockLength);
							int a = tmp35;
							::openfl::utils::ByteArrayData tmp36 = data;
							int tmp37 = ::openfl::utils::_ByteArray::ByteArray_Impl__obj::get_length(tmp36);
							int b = tmp37;
							bool tmp38 = (a < (int)0);
							bool aNeg = tmp38;
							bool tmp39 = (b < (int)0);
							bool bNeg = tmp39;
							bool tmp40 = (aNeg != bNeg);
							if ((tmp40)){
								tmp34 = aNeg;
							}
							else{
								tmp34 = (a > b);
							}
						}
						if ((tmp34)){
							::openfl::errors::IllegalOperationError tmp35 = ::openfl::errors::IllegalOperationError_obj::__new(HX_HCSTRING("Block length exceeds ATF file length","\x15","\x23","\xc0","\x24"));
							HX_STACK_DO_THROW(tmp35);
						}
						bool tmp35;
						{
							bool tmp36 = (blockLength < (int)0);
							bool aNeg = tmp36;
							bool tmp37 = ((int)0 < (int)0);
							bool bNeg = tmp37;
							bool tmp38 = (aNeg != bNeg);
							if ((tmp38)){
								tmp35 = aNeg;
							}
							else{
								tmp35 = (blockLength > (int)0);
							}
						}
						if ((tmp35)){
							bool tmp36 = (gpuFormat == (int)0);
							if ((tmp36)){
								int tmp37 = blockLength;
								::haxe::io::Bytes tmp38 = ::haxe::io::Bytes_obj::alloc(tmp37);
								::haxe::io::Bytes bytes = tmp38;
								::haxe::io::Bytes tmp39 = bytes;
								::openfl::utils::ByteArrayData tmp40 = ::openfl::utils::_ByteArray::ByteArray_Impl__obj::fromArrayBuffer(tmp39);
								int tmp41 = blockLength;
								data->readBytes(tmp40,(int)0,tmp41);
								{
									::haxe::io::Bytes tmp42 = bytes;
									Float tmp43 = ::lime::utils::_DataPointer::DataPointer_Impl__obj::fromArrayBuffer(tmp42);
									Float data1 = tmp43;
									::lime::_backend::native::NativeGLRenderContext tmp44 = ::lime::graphics::opengl::GL_obj::context;
									int tmp45 = this->__textureTarget;
									int tmp46 = level;
									int tmp47 = this->__format;
									int tmp48 = (int(width) >> int(level));
									int tmp49 = (int(height) >> int(level));
									int tmp50 = blockLength;
									Float tmp51 = data1;
									tmp44->compressedTexImage2D(tmp45,tmp46,tmp47,tmp48,tmp49,(int)0,tmp50,tmp51);
								}
								::openfl::_internal::stage3D::GLUtils_obj::CheckGLError();
							}
							else{
								int tmp37 = (data->position + blockLength);
								data->position = tmp37;
							}
						}
					}
				}
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(Texture_obj,__uploadATFTextureFromByteArray,(void))

bool Texture_obj::__lowMemoryMode;


Texture_obj::Texture_obj()
{
}

Dynamic Texture_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 17:
		if (HX_FIELD_EQ(inName,"__setSamplerState") ) { return __setSamplerState_dyn(); }
		break;
	case 19:
		if (HX_FIELD_EQ(inName,"uploadFromByteArray") ) { return uploadFromByteArray_dyn(); }
		break;
	case 20:
		if (HX_FIELD_EQ(inName,"uploadFromBitmapData") ) { return uploadFromBitmapData_dyn(); }
		if (HX_FIELD_EQ(inName,"uploadFromTypedArray") ) { return uploadFromTypedArray_dyn(); }
		break;
	case 31:
		if (HX_FIELD_EQ(inName,"__uploadATFTextureFromByteArray") ) { return __uploadATFTextureFromByteArray_dyn(); }
		break;
	case 36:
		if (HX_FIELD_EQ(inName,"uploadCompressedTextureFromByteArray") ) { return uploadCompressedTextureFromByteArray_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

bool Texture_obj::__GetStatic(const ::String &inName, Dynamic &outValue, hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 15:
		if (HX_FIELD_EQ(inName,"__lowMemoryMode") ) { outValue = __lowMemoryMode; return true;  }
	}
	return false;
}

bool Texture_obj::__SetStatic(const ::String &inName,Dynamic &ioValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 15:
		if (HX_FIELD_EQ(inName,"__lowMemoryMode") ) { __lowMemoryMode=ioValue.Cast< bool >(); return true; }
	}
	return false;
}

#if HXCPP_SCRIPTABLE
static hx::StorageInfo *sMemberStorageInfo = 0;
static hx::StaticInfo sStaticStorageInfo[] = {
	{hx::fsBool,(void *) &Texture_obj::__lowMemoryMode,HX_HCSTRING("__lowMemoryMode","\x98","\x71","\x9e","\x43")},
	{ hx::fsUnknown, 0, null()}
};
#endif

static ::String sMemberFields[] = {
	HX_HCSTRING("uploadCompressedTextureFromByteArray","\xce","\xc7","\x86","\xc5"),
	HX_HCSTRING("uploadFromBitmapData","\xa4","\x85","\x65","\x0d"),
	HX_HCSTRING("uploadFromByteArray","\xe6","\x17","\x1b","\xee"),
	HX_HCSTRING("uploadFromTypedArray","\xba","\x7c","\xf4","\xd1"),
	HX_HCSTRING("__setSamplerState","\x8b","\xe7","\xcf","\x5d"),
	HX_HCSTRING("__uploadATFTextureFromByteArray","\x5e","\x7b","\xdb","\xc9"),
	::String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(Texture_obj::__mClass,"__mClass");
	HX_MARK_MEMBER_NAME(Texture_obj::__lowMemoryMode,"__lowMemoryMode");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(Texture_obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(Texture_obj::__lowMemoryMode,"__lowMemoryMode");
};

#endif

hx::Class Texture_obj::__mClass;

static ::String sStaticFields[] = {
	HX_HCSTRING("__lowMemoryMode","\x98","\x71","\x9e","\x43"),
	::String(null()) };

void Texture_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("openfl.display3D.textures.Texture","\xfe","\x28","\x30","\xf1");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &Texture_obj::__GetStatic;
	__mClass->mSetStaticField = &Texture_obj::__SetStatic;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(sStaticFields);
	__mClass->mMembers = hx::Class_obj::dupFunctions(sMemberFields);
	__mClass->mCanCast = hx::TCanCast< Texture_obj >;
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

void Texture_obj::__boot()
{
	__lowMemoryMode= false;
}

} // end namespace openfl
} // end namespace display3D
} // end namespace textures
