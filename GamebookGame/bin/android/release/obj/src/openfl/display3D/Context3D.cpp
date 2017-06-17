#include <hxcpp.h>

#ifndef INCLUDED_Std
#include <Std.h>
#endif
#ifndef INCLUDED_haxe_Log
#include <haxe/Log.h>
#endif
#ifndef INCLUDED_haxe_io_Bytes
#include <haxe/io/Bytes.h>
#endif
#ifndef INCLUDED_lime__backend_native_NativeGLRenderContext
#include <lime/_backend/native/NativeGLRenderContext.h>
#endif
#ifndef INCLUDED_lime_app_IModule
#include <lime/app/IModule.h>
#endif
#ifndef INCLUDED_lime_graphics_Image
#include <lime/graphics/Image.h>
#endif
#ifndef INCLUDED_lime_graphics_Renderer
#include <lime/graphics/Renderer.h>
#endif
#ifndef INCLUDED_lime_graphics_opengl_GL
#include <lime/graphics/opengl/GL.h>
#endif
#ifndef INCLUDED_lime_graphics_opengl_GLObject
#include <lime/graphics/opengl/GLObject.h>
#endif
#ifndef INCLUDED_lime_math_Rectangle
#include <lime/math/Rectangle.h>
#endif
#ifndef INCLUDED_lime_math_Vector2
#include <lime/math/Vector2.h>
#endif
#ifndef INCLUDED_lime_ui_Window
#include <lime/ui/Window.h>
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
#ifndef INCLUDED_openfl__Vector_IntVector
#include <openfl/_Vector/IntVector.h>
#endif
#ifndef INCLUDED_openfl__Vector_ObjectVector
#include <openfl/_Vector/ObjectVector.h>
#endif
#ifndef INCLUDED_openfl__internal_renderer_AbstractRenderer
#include <openfl/_internal/renderer/AbstractRenderer.h>
#endif
#ifndef INCLUDED_openfl__internal_renderer_RenderSession
#include <openfl/_internal/renderer/RenderSession.h>
#endif
#ifndef INCLUDED_openfl__internal_stage3D_Context3DStateCache
#include <openfl/_internal/stage3D/Context3DStateCache.h>
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
#ifndef INCLUDED_openfl_display_DisplayObject
#include <openfl/display/DisplayObject.h>
#endif
#ifndef INCLUDED_openfl_display_DisplayObjectContainer
#include <openfl/display/DisplayObjectContainer.h>
#endif
#ifndef INCLUDED_openfl_display_IBitmapDrawable
#include <openfl/display/IBitmapDrawable.h>
#endif
#ifndef INCLUDED_openfl_display_InteractiveObject
#include <openfl/display/InteractiveObject.h>
#endif
#ifndef INCLUDED_openfl_display_Stage
#include <openfl/display/Stage.h>
#endif
#ifndef INCLUDED_openfl_display_Stage3D
#include <openfl/display/Stage3D.h>
#endif
#ifndef INCLUDED_openfl_display3D_Context3D
#include <openfl/display3D/Context3D.h>
#endif
#ifndef INCLUDED_openfl_display3D_IndexBuffer3D
#include <openfl/display3D/IndexBuffer3D.h>
#endif
#ifndef INCLUDED_openfl_display3D_Program3D
#include <openfl/display3D/Program3D.h>
#endif
#ifndef INCLUDED_openfl_display3D_VertexBuffer3D
#include <openfl/display3D/VertexBuffer3D.h>
#endif
#ifndef INCLUDED_openfl_display3D__Context3DBufferUsage_Context3DBufferUsage_Impl_
#include <openfl/display3D/_Context3DBufferUsage/Context3DBufferUsage_Impl_.h>
#endif
#ifndef INCLUDED_openfl_display3D__Context3DTextureFormat_Context3DTextureFormat_Impl_
#include <openfl/display3D/_Context3DTextureFormat/Context3DTextureFormat_Impl_.h>
#endif
#ifndef INCLUDED_openfl_display3D_textures_CubeTexture
#include <openfl/display3D/textures/CubeTexture.h>
#endif
#ifndef INCLUDED_openfl_display3D_textures_RectangleTexture
#include <openfl/display3D/textures/RectangleTexture.h>
#endif
#ifndef INCLUDED_openfl_display3D_textures_Texture
#include <openfl/display3D/textures/Texture.h>
#endif
#ifndef INCLUDED_openfl_display3D_textures_TextureBase
#include <openfl/display3D/textures/TextureBase.h>
#endif
#ifndef INCLUDED_openfl_display3D_textures_VideoTexture
#include <openfl/display3D/textures/VideoTexture.h>
#endif
#ifndef INCLUDED_openfl_errors_Error
#include <openfl/errors/Error.h>
#endif
#ifndef INCLUDED_openfl_errors_IllegalOperationError
#include <openfl/errors/IllegalOperationError.h>
#endif
#ifndef INCLUDED_openfl_events_EventDispatcher
#include <openfl/events/EventDispatcher.h>
#endif
#ifndef INCLUDED_openfl_events_IEventDispatcher
#include <openfl/events/IEventDispatcher.h>
#endif
#ifndef INCLUDED_openfl_geom_Matrix3D
#include <openfl/geom/Matrix3D.h>
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

Void Context3D_obj::__construct(::openfl::display::Stage3D stage3D,::openfl::_internal::renderer::RenderSession renderSession)
{
{
	this->totalGPUMemory = (int)0;
	this->profile = ((Dynamic)((int)0));
	this->enableErrorChecking = false;
	this->driverInfo = HX_HCSTRING("OpenGL (Direct blitting)","\xe6","\x33","\xc8","\xa6");
	this->backBufferWidth = (int)0;
	this->backBufferHeight = (int)0;
	super::__construct(null());
	this->__stage3D = stage3D;
	this->__renderSession = renderSession;
	::lime::utils::ArrayBufferView tmp;
	{
		::lime::utils::ArrayBufferView this1;
		bool tmp1 = true;
		if ((tmp1)){
			::lime::utils::ArrayBufferView tmp2 = ::lime::utils::ArrayBufferView_obj::__new((int)512,(int)8);
			this1 = tmp2;
		}
		else{
			bool tmp2 = false;
			if ((tmp2)){
				::lime::utils::ArrayBufferView tmp3;
				{
					::lime::utils::ArrayBufferView tmp4 = ::lime::utils::ArrayBufferView_obj::__new((int)0,(int)8);
					::lime::utils::ArrayBufferView _this = tmp4;
					_this->byteOffset = (int)0;
					int tmp5 = hx::Throw(HX_CSTRING("Invalid field access on null object"));
					_this->length = tmp5;
					int tmp6 = (_this->length * _this->bytesPerElement);
					_this->byteLength = tmp6;
					::haxe::io::Bytes tmp7;
					{
						::haxe::io::Bytes this2;
						int tmp8 = _this->byteLength;
						::haxe::io::Bytes tmp9 = ::haxe::io::Bytes_obj::alloc(tmp8);
						this2 = tmp9;
						tmp7 = this2;
					}
					_this->buffer = tmp7;
					_this->copyFromArray(((Array< Float >)(null())),null());
					tmp3 = _this;
				}
				this1 = tmp3;
			}
			else{
				bool tmp3 = false;
				if ((tmp3)){
					::lime::utils::ArrayBufferView tmp4;
					{
						::lime::utils::ArrayBufferView tmp5 = ::lime::utils::ArrayBufferView_obj::__new((int)0,(int)8);
						::lime::utils::ArrayBufferView _this = tmp5;
						cpp::ArrayBase array = hx::Throw(HX_CSTRING("Invalid field access on null object"));
						_this->byteOffset = (int)0;
						_this->length = array->__Field(HX_HCSTRING("length","\xe6","\x94","\x07","\x9f"), hx::paccDynamic );
						int tmp6 = (_this->length * _this->bytesPerElement);
						_this->byteLength = tmp6;
						::haxe::io::Bytes tmp7;
						{
							::haxe::io::Bytes this2;
							int tmp8 = _this->byteLength;
							::haxe::io::Bytes tmp9 = ::haxe::io::Bytes_obj::alloc(tmp8);
							this2 = tmp9;
							tmp7 = this2;
						}
						_this->buffer = tmp7;
						_this->copyFromArray(((Array< Float >)(array)),null());
						tmp4 = _this;
					}
					this1 = tmp4;
				}
				else{
					bool tmp4 = false;
					if ((tmp4)){
						::lime::utils::ArrayBufferView tmp5;
						{
							::lime::utils::ArrayBufferView tmp6 = ::lime::utils::ArrayBufferView_obj::__new((int)0,(int)8);
							::lime::utils::ArrayBufferView _this = tmp6;
							::haxe::io::Bytes tmp7 = hx::Throw(HX_CSTRING("Invalid field access on null object"));
							::haxe::io::Bytes srcData = tmp7;
							int tmp8 = hx::Throw(HX_CSTRING("Invalid field access on null object"));
							int srcLength = tmp8;
							int tmp9 = hx::Throw(HX_CSTRING("Invalid field access on null object"));
							int srcByteOffset = tmp9;
							int tmp10 = hx::Throw(HX_CSTRING("Invalid field access on null object"));
							int srcElementSize = tmp10;
							int elementSize = _this->bytesPerElement;
							int tmp11 = hx::Throw(HX_CSTRING("Invalid field access on null object"));
							int tmp12 = _this->type;
							bool tmp13 = (tmp11 == tmp12);
							if ((tmp13)){
								int srcLength1 = srcData->length;
								int tmp14 = (srcLength1 - srcByteOffset);
								int cloneLength = tmp14;
								::haxe::io::Bytes tmp15;
								{
									::haxe::io::Bytes this2;
									int tmp16 = cloneLength;
									::haxe::io::Bytes tmp17 = ::haxe::io::Bytes_obj::alloc(tmp16);
									this2 = tmp17;
									tmp15 = this2;
								}
								_this->buffer = tmp15;
								::haxe::io::Bytes tmp16 = srcData;
								int tmp17 = srcByteOffset;
								int tmp18 = cloneLength;
								_this->buffer->blit((int)0,tmp16,tmp17,tmp18);
							}
							else{
								HX_STACK_DO_THROW(HX_HCSTRING("unimplemented","\x09","\x2f","\x74","\xb4"));
							}
							int tmp14 = (_this->bytesPerElement * srcLength);
							_this->byteLength = tmp14;
							_this->byteOffset = (int)0;
							_this->length = srcLength;
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
								int in_byteOffset = (int)0;
								bool tmp8 = (in_byteOffset < (int)0);
								if ((tmp8)){
									HX_STACK_DO_THROW(::lime::utils::TAError_obj::RangeError);
								}
								int tmp9 = hx::Mod(in_byteOffset,_this->bytesPerElement);
								bool tmp10 = (tmp9 != (int)0);
								if ((tmp10)){
									HX_STACK_DO_THROW(::lime::utils::TAError_obj::RangeError);
								}
								int tmp11 = hx::Throw(HX_CSTRING("Invalid field access on null object"));
								int bufferByteLength = tmp11;
								int elementSize = _this->bytesPerElement;
								int newByteLength = bufferByteLength;
								bool tmp12 = true;
								if ((tmp12)){
									int tmp13 = (bufferByteLength - in_byteOffset);
									newByteLength = tmp13;
									int tmp14 = hx::Mod(bufferByteLength,_this->bytesPerElement);
									bool tmp15 = (tmp14 != (int)0);
									if ((tmp15)){
										HX_STACK_DO_THROW(::lime::utils::TAError_obj::RangeError);
									}
									bool tmp16 = (newByteLength < (int)0);
									if ((tmp16)){
										HX_STACK_DO_THROW(::lime::utils::TAError_obj::RangeError);
									}
								}
								else{
									int tmp13 = (null() * _this->bytesPerElement);
									newByteLength = tmp13;
									int tmp14 = (in_byteOffset + newByteLength);
									int newRange = tmp14;
									bool tmp15 = (newRange > bufferByteLength);
									if ((tmp15)){
										HX_STACK_DO_THROW(::lime::utils::TAError_obj::RangeError);
									}
								}
								_this->buffer = null();
								_this->byteOffset = in_byteOffset;
								_this->byteLength = newByteLength;
								Float tmp13 = (Float(newByteLength) / Float(_this->bytesPerElement));
								int tmp14 = ::Std_obj::_int(tmp13);
								_this->length = tmp14;
								tmp6 = _this;
							}
							this1 = tmp6;
						}
						else{
							HX_STACK_DO_THROW(HX_HCSTRING("Invalid constructor arguments for Float32Array","\x8e","\xc1","\xf4","\xd4"));
						}
					}
				}
			}
		}
		tmp = this1;
	}
	this->__vertexConstants = tmp;
	::lime::utils::ArrayBufferView tmp1;
	{
		::lime::utils::ArrayBufferView this1;
		bool tmp2 = true;
		if ((tmp2)){
			::lime::utils::ArrayBufferView tmp3 = ::lime::utils::ArrayBufferView_obj::__new((int)512,(int)8);
			this1 = tmp3;
		}
		else{
			bool tmp3 = false;
			if ((tmp3)){
				::lime::utils::ArrayBufferView tmp4;
				{
					::lime::utils::ArrayBufferView tmp5 = ::lime::utils::ArrayBufferView_obj::__new((int)0,(int)8);
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
						::lime::utils::ArrayBufferView tmp6 = ::lime::utils::ArrayBufferView_obj::__new((int)0,(int)8);
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
							::lime::utils::ArrayBufferView tmp7 = ::lime::utils::ArrayBufferView_obj::__new((int)0,(int)8);
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
								::lime::utils::ArrayBufferView tmp8 = ::lime::utils::ArrayBufferView_obj::__new((int)0,(int)8);
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
							HX_STACK_DO_THROW(HX_HCSTRING("Invalid constructor arguments for Float32Array","\x8e","\xc1","\xf4","\xd4"));
						}
					}
				}
			}
		}
		tmp1 = this1;
	}
	this->__fragmentConstants = tmp1;
	::lime::utils::ArrayBufferView tmp2;
	{
		cpp::ArrayBase array = Array_obj< Float >::__new().Add(((Float)1.0)).Add(((Float)1.0)).Add(((Float)1.0)).Add(((Float)1.0));
		::lime::utils::ArrayBufferView this1;
		bool tmp3 = false;
		if ((tmp3)){
			::lime::utils::ArrayBufferView tmp4 = ::lime::utils::ArrayBufferView_obj::__new(null(),(int)8);
			this1 = tmp4;
		}
		else{
			bool tmp4 = (array != null());
			if ((tmp4)){
				::lime::utils::ArrayBufferView tmp5;
				{
					::lime::utils::ArrayBufferView tmp6 = ::lime::utils::ArrayBufferView_obj::__new((int)0,(int)8);
					::lime::utils::ArrayBufferView _this = tmp6;
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
						::lime::utils::ArrayBufferView tmp7 = ::lime::utils::ArrayBufferView_obj::__new((int)0,(int)8);
						::lime::utils::ArrayBufferView _this = tmp7;
						cpp::ArrayBase array1 = hx::Throw(HX_CSTRING("Invalid field access on null object"));
						_this->byteOffset = (int)0;
						_this->length = array1->__Field(HX_HCSTRING("length","\xe6","\x94","\x07","\x9f"), hx::paccDynamic );
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
						_this->copyFromArray(((Array< Float >)(array1)),null());
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
	this->__positionScale = tmp2;
	this->__samplerDirty = (int)0;
	::openfl::_Vector::ObjectVector tmp3;
	{
		bool fixed = null();
		::openfl::_Vector::ObjectVector tmp4 = ::openfl::_Vector::ObjectVector_obj::__new((int)8,fixed,null());
		::openfl::_Vector::ObjectVector tmp5 = tmp4;
		tmp3 = tmp5;
	}
	this->__samplerTextures = tmp3;
	this->__samplerStates = Array_obj< ::Dynamic >::__new();
	{
		int _g = (int)0;
		while((true)){
			bool tmp4 = (_g < (int)8);
			bool tmp5 = !(tmp4);
			if ((tmp5)){
				break;
			}
			int tmp6 = (_g)++;
			int i = tmp6;
			::openfl::_internal::stage3D::SamplerState tmp7 = ::openfl::_internal::stage3D::SamplerState_obj::__new((int)9729,(int)9729,(int)33071,(int)33071,null(),null(),null(),null(),null());
			this->__samplerStates[i] = tmp7;
		}
	}
	int tmp4 = this->maxBackBufferWidth = (int)16384;
	this->maxBackBufferHeight = tmp4;
	this->__backBufferAntiAlias = (int)0;
	this->__backBufferEnableDepthAndStencil = true;
	this->__backBufferWantsBestResolution = false;
	this->__frameCount = (int)0;
	this->__rttDepthAndStencil = false;
	this->__samplerDirty = (int)0;
	this->__stencilCompareMode = ((Dynamic)((int)0));
	this->__stencilRef = (int)0;
	this->__stencilReadMask = (int)255;
	::lime::_backend::native::NativeGLRenderContext tmp5 = ::lime::graphics::opengl::GL_obj::context;
	Dynamic tmp6 = tmp5->getExtension(HX_HCSTRING("EXT_texture_filter_anisotropic","\x4c","\x4c","\x32","\x3d"));
	Dynamic anisoExtension = tmp6;
	::lime::_backend::native::NativeGLRenderContext tmp7 = ::lime::graphics::opengl::GL_obj::context;
	Dynamic tmp8 = tmp7->getExtension(HX_HCSTRING("OES_packed_depth_stencil","\x7b","\x19","\x31","\xfc"));
	Dynamic stencilExtension = tmp8;
	bool tmp9 = (stencilExtension != null());
	if ((tmp9)){
		this->__supportsPackedDepthStencil = true;
		::openfl::display3D::Context3D_obj::DEPTH_STENCIL = stencilExtension->__Field(HX_HCSTRING("DEPTH24_STENCIL8_OES","\xb4","\x24","\xe8","\x3a"), hx::paccDynamic );
	}
	else{
		::lime::_backend::native::NativeGLRenderContext tmp10 = ::lime::graphics::opengl::GL_obj::context;
		Dynamic tmp11 = tmp10->getExtension(HX_HCSTRING("EXT_packed_depth_stencil","\xf7","\x88","\xe3","\x09"));
		stencilExtension = tmp11;
		bool tmp12 = (stencilExtension != null());
		if ((tmp12)){
			this->__supportsPackedDepthStencil = true;
			::openfl::display3D::Context3D_obj::DEPTH_STENCIL = stencilExtension->__Field(HX_HCSTRING("DEPTH24_STENCIL8_EXT","\xb8","\x9e","\xe0","\x3a"), hx::paccDynamic );
		}
	}
	bool tmp10 = (anisoExtension != null());
	this->__supportsAnisotropicFiltering = tmp10;
	bool tmp11 = this->__supportsAnisotropicFiltering;
	if ((tmp11)){
		::openfl::display3D::Context3D_obj::TEXTURE_MAX_ANISOTROPY_EXT = anisoExtension->__Field(HX_HCSTRING("TEXTURE_MAX_ANISOTROPY_EXT","\x63","\xc1","\x6c","\x51"), hx::paccDynamic );
		Dynamic tmp12;
		{
			int pname = anisoExtension->__Field(HX_HCSTRING("MAX_TEXTURE_MAX_ANISOTROPY_EXT","\x7e","\x54","\xe7","\xa3"), hx::paccDynamic );
			::lime::_backend::native::NativeGLRenderContext tmp13 = ::lime::graphics::opengl::GL_obj::context;
			int tmp14 = pname;
			tmp12 = tmp13->getParameter(tmp14);
		}
		int maxAnisotropy = tmp12;
		this->__maxAnisotropyTexture2D = maxAnisotropy;
		this->__maxAnisotropyTexture2D = maxAnisotropy;
	}
	::openfl::_Vector::IntVector tmp12;
	{
		bool fixed = null();
		::openfl::_Vector::IntVector tmp13 = ::openfl::_Vector::IntVector_obj::__new((int)11,fixed,null());
		::openfl::_Vector::IntVector tmp14 = tmp13;
		tmp12 = tmp14;
	}
	this->__stats = tmp12;
	::openfl::_Vector::IntVector tmp13;
	{
		bool fixed = null();
		::openfl::_Vector::IntVector tmp14 = ::openfl::_Vector::IntVector_obj::__new((int)11,fixed,null());
		::openfl::_Vector::IntVector tmp15 = tmp14;
		tmp13 = tmp15;
	}
	this->__statsCache = tmp13;
	::openfl::_internal::stage3D::GLUtils_obj::CheckGLError();
	::lime::_backend::native::NativeGLRenderContext tmp14 = ::lime::graphics::opengl::GL_obj::context;
	Dynamic tmp15 = tmp14->getParameter((int)7936);
	::String vendor = tmp15;
	::openfl::_internal::stage3D::GLUtils_obj::CheckGLError();
	::lime::_backend::native::NativeGLRenderContext tmp16 = ::lime::graphics::opengl::GL_obj::context;
	Dynamic tmp17 = tmp16->getParameter((int)7938);
	::String version = tmp17;
	::openfl::_internal::stage3D::GLUtils_obj::CheckGLError();
	::lime::_backend::native::NativeGLRenderContext tmp18 = ::lime::graphics::opengl::GL_obj::context;
	Dynamic tmp19 = tmp18->getParameter((int)7937);
	::String renderer = tmp19;
	::openfl::_internal::stage3D::GLUtils_obj::CheckGLError();
	::String glslVersion = HX_HCSTRING("<unknown>","\xb0","\x91","\xd8","\xda");
	::openfl::_internal::stage3D::GLUtils_obj::CheckGLError();
	::String tmp20 = HX_HCSTRING("OpenGL Vendor=","\x04","\xc1","\x2f","\xf5");
	::String tmp21 = vendor;
	::String tmp22 = (tmp20 + tmp21);
	::String tmp23 = (tmp22 + HX_HCSTRING(" Version=","\x65","\x2a","\x97","\x0e"));
	::String tmp24 = version;
	::String tmp25 = (tmp23 + tmp24);
	::String tmp26 = (tmp25 + HX_HCSTRING(" Renderer=","\x5a","\xb1","\x92","\x78"));
	::String tmp27 = renderer;
	::String tmp28 = (tmp26 + tmp27);
	::String tmp29 = (tmp28 + HX_HCSTRING(" GLSL=","\x5f","\x30","\x5a","\xdf"));
	::String tmp30 = glslVersion;
	::String tmp31 = (tmp29 + tmp30);
	this->driverInfo = tmp31;
	{
		int _g1 = (int)0;
		::openfl::_Vector::IntVector tmp32 = this->__stats;
		int tmp33 = tmp32->get_length();
		int _g = tmp33;
		while((true)){
			bool tmp34 = (_g1 < _g);
			bool tmp35 = !(tmp34);
			if ((tmp35)){
				break;
			}
			int tmp36 = (_g1)++;
			int i = tmp36;
			::openfl::_Vector::IntVector tmp37 = this->__stats;
			int tmp38 = i;
			int tmp39 = tmp37->set(tmp38,(int)0);
			tmp39;
		}
	}
	::openfl::_internal::stage3D::Context3DStateCache tmp32 = ::openfl::display3D::Context3D_obj::__stateCache;
	tmp32->clearSettings();
}
;
	return null();
}

//Context3D_obj::~Context3D_obj() { }

Dynamic Context3D_obj::__CreateEmpty() { return  new Context3D_obj; }
hx::ObjectPtr< Context3D_obj > Context3D_obj::__new(::openfl::display::Stage3D stage3D,::openfl::_internal::renderer::RenderSession renderSession)
{  hx::ObjectPtr< Context3D_obj > _result_ = new Context3D_obj();
	_result_->__construct(stage3D,renderSession);
	return _result_;}

Dynamic Context3D_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< Context3D_obj > _result_ = new Context3D_obj();
	_result_->__construct(inArgs[0],inArgs[1]);
	return _result_;}

Void Context3D_obj::clear( hx::Null< Float >  __o_red,hx::Null< Float >  __o_green,hx::Null< Float >  __o_blue,hx::Null< Float >  __o_alpha,hx::Null< Float >  __o_depth,hx::Null< int >  __o_stencil,hx::Null< int >  __o_mask){
Float red = __o_red.Default(0);
Float green = __o_green.Default(0);
Float blue = __o_blue.Default(0);
Float alpha = __o_alpha.Default(1);
Float depth = __o_depth.Default(1);
int stencil = __o_stencil.Default(0);
int mask = __o_mask.Default(7);
{
		int clearMask = (int)0;
		int tmp = (int(mask) & int((int)1));
		int tmp1 = tmp;
		bool tmp2 = (tmp1 != (int)0);
		if ((tmp2)){
			hx::OrEq(clearMask,(int)16384);
			{
				::lime::_backend::native::NativeGLRenderContext tmp3 = ::lime::graphics::opengl::GL_obj::context;
				Float tmp4 = red;
				Float tmp5 = green;
				Float tmp6 = blue;
				Float tmp7 = alpha;
				tmp3->clearColor(tmp4,tmp5,tmp6,tmp7);
			}
			::openfl::_internal::stage3D::GLUtils_obj::CheckGLError();
		}
		int tmp3 = (int(mask) & int((int)2));
		int tmp4 = tmp3;
		bool tmp5 = (tmp4 != (int)0);
		if ((tmp5)){
			hx::OrEq(clearMask,(int)256);
			{
				::lime::_backend::native::NativeGLRenderContext tmp6 = ::lime::graphics::opengl::GL_obj::context;
				tmp6->depthMask(true);
			}
			{
				::lime::_backend::native::NativeGLRenderContext tmp6 = ::lime::graphics::opengl::GL_obj::context;
				Float tmp7 = depth;
				tmp6->clearDepthf(tmp7);
			}
			::openfl::_internal::stage3D::GLUtils_obj::CheckGLError();
		}
		int tmp6 = (int(mask) & int((int)4));
		int tmp7 = tmp6;
		bool tmp8 = (tmp7 != (int)0);
		if ((tmp8)){
			hx::OrEq(clearMask,(int)1024);
			{
				::lime::_backend::native::NativeGLRenderContext tmp9 = ::lime::graphics::opengl::GL_obj::context;
				int tmp10 = stencil;
				tmp9->clearStencil(tmp10);
			}
			::openfl::_internal::stage3D::GLUtils_obj::CheckGLError();
		}
		{
			::lime::_backend::native::NativeGLRenderContext tmp9 = ::lime::graphics::opengl::GL_obj::context;
			int tmp10 = clearMask;
			tmp9->clear(tmp10);
		}
		::openfl::_internal::stage3D::GLUtils_obj::CheckGLError();
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC7(Context3D_obj,clear,(void))

Void Context3D_obj::configureBackBuffer( int width,int height,int antiAlias,hx::Null< bool >  __o_enableDepthAndStencil,hx::Null< bool >  __o_wantsBestResolution,hx::Null< bool >  __o_wantsBestResolutionOnBrowserZoom){
bool enableDepthAndStencil = __o_enableDepthAndStencil.Default(true);
bool wantsBestResolution = __o_wantsBestResolution.Default(false);
bool wantsBestResolutionOnBrowserZoom = __o_wantsBestResolutionOnBrowserZoom.Default(false);
{
		this->__updateBackbufferViewport();
		this->backBufferWidth = width;
		this->backBufferHeight = height;
		this->__backBufferAntiAlias = antiAlias;
		this->__backBufferEnableDepthAndStencil = enableDepthAndStencil;
		this->__backBufferWantsBestResolution = wantsBestResolution;
		::openfl::_internal::stage3D::Context3DStateCache tmp = ::openfl::display3D::Context3D_obj::__stateCache;
		tmp->clearSettings();
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC6(Context3D_obj,configureBackBuffer,(void))

::openfl::display3D::textures::CubeTexture Context3D_obj::createCubeTexture( int size,Dynamic format,bool optimizeForRenderToTexture,hx::Null< int >  __o_streamingLevels){
int streamingLevels = __o_streamingLevels.Default(0);
{
		::openfl::display3D::textures::CubeTexture tmp = ::openfl::display3D::textures::CubeTexture_obj::__new(hx::ObjectPtr<OBJ_>(this),size,format,optimizeForRenderToTexture,streamingLevels);
		return tmp;
	}
}


HX_DEFINE_DYNAMIC_FUNC4(Context3D_obj,createCubeTexture,return )

::openfl::display3D::IndexBuffer3D Context3D_obj::createIndexBuffer( int numIndices,Dynamic __o_bufferUsage){
Dynamic bufferUsage = __o_bufferUsage.Default(1);
{
		int tmp = numIndices;
		Dynamic tmp1 = bufferUsage;
		::String tmp2 = ::openfl::display3D::_Context3DBufferUsage::Context3DBufferUsage_Impl__obj::toString(tmp1);
		::openfl::display3D::IndexBuffer3D tmp3 = ::openfl::display3D::IndexBuffer3D_obj::__new(hx::ObjectPtr<OBJ_>(this),tmp,tmp2);
		return tmp3;
	}
}


HX_DEFINE_DYNAMIC_FUNC2(Context3D_obj,createIndexBuffer,return )

::openfl::display3D::Program3D Context3D_obj::createProgram( ){
	::openfl::display3D::Program3D tmp = ::openfl::display3D::Program3D_obj::__new(hx::ObjectPtr<OBJ_>(this));
	return tmp;
}


HX_DEFINE_DYNAMIC_FUNC0(Context3D_obj,createProgram,return )

::openfl::display3D::textures::RectangleTexture Context3D_obj::createRectangleTexture( int width,int height,Dynamic format,bool optimizeForRenderToTexture){
	int tmp = width;
	int tmp1 = height;
	Dynamic tmp2 = format;
	::String tmp3 = ::openfl::display3D::_Context3DTextureFormat::Context3DTextureFormat_Impl__obj::toString(tmp2);
	bool tmp4 = optimizeForRenderToTexture;
	::openfl::display3D::textures::RectangleTexture tmp5 = ::openfl::display3D::textures::RectangleTexture_obj::__new(hx::ObjectPtr<OBJ_>(this),tmp,tmp1,tmp3,tmp4);
	return tmp5;
}


HX_DEFINE_DYNAMIC_FUNC4(Context3D_obj,createRectangleTexture,return )

::openfl::display3D::textures::Texture Context3D_obj::createTexture( int width,int height,Dynamic format,bool optimizeForRenderToTexture,hx::Null< int >  __o_streamingLevels){
int streamingLevels = __o_streamingLevels.Default(0);
{
		::openfl::display3D::textures::Texture tmp = ::openfl::display3D::textures::Texture_obj::__new(hx::ObjectPtr<OBJ_>(this),width,height,format,optimizeForRenderToTexture,streamingLevels);
		return tmp;
	}
}


HX_DEFINE_DYNAMIC_FUNC5(Context3D_obj,createTexture,return )

::openfl::display3D::VertexBuffer3D Context3D_obj::createVertexBuffer( int numVertices,int data32PerVertex,Dynamic __o_bufferUsage){
Dynamic bufferUsage = __o_bufferUsage.Default(1);
{
		int tmp = numVertices;
		int tmp1 = data32PerVertex;
		Dynamic tmp2 = bufferUsage;
		::String tmp3 = ::openfl::display3D::_Context3DBufferUsage::Context3DBufferUsage_Impl__obj::toString(tmp2);
		::openfl::display3D::VertexBuffer3D tmp4 = ::openfl::display3D::VertexBuffer3D_obj::__new(hx::ObjectPtr<OBJ_>(this),tmp,tmp1,tmp3);
		return tmp4;
	}
}


HX_DEFINE_DYNAMIC_FUNC3(Context3D_obj,createVertexBuffer,return )

::openfl::display3D::textures::VideoTexture Context3D_obj::createVideoTexture( ){
	::openfl::errors::Error tmp = ::openfl::errors::Error_obj::__new(HX_HCSTRING("Video textures are not supported on this platform","\x02","\xcd","\x86","\xca"),null());
	HX_STACK_DO_THROW(tmp);
	return null();
}


HX_DEFINE_DYNAMIC_FUNC0(Context3D_obj,createVideoTexture,return )

Void Context3D_obj::dispose( ){
{
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(Context3D_obj,dispose,(void))

Void Context3D_obj::drawToBitmapData( ::openfl::display::BitmapData destination){
{
		bool tmp = (destination == null());
		if ((tmp)){
			return null();
		}
		::openfl::display::Stage3D tmp1 = this->__stage3D;
		::lime::ui::Window tmp2 = tmp1->__stage->window;
		::lime::ui::Window window = tmp2;
		bool tmp3 = (window != null());
		if ((tmp3)){
			::lime::graphics::Image tmp4 = window->renderer->readPixels(null());
			::lime::graphics::Image image = tmp4;
			::lime::graphics::Image tmp5 = image;
			::lime::math::Rectangle tmp6 = image->get_rect();
			::lime::math::Vector2 tmp7 = ::lime::math::Vector2_obj::__new(null(),null());
			destination->image->copyPixels(tmp5,tmp6,tmp7,null(),null(),null());
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Context3D_obj,drawToBitmapData,(void))

Void Context3D_obj::drawTriangles( ::openfl::display3D::IndexBuffer3D indexBuffer,hx::Null< int >  __o_firstIndex,hx::Null< int >  __o_numTriangles){
int firstIndex = __o_firstIndex.Default(0);
int numTriangles = __o_numTriangles.Default(-1);
{
		::openfl::display3D::Program3D tmp = this->__program;
		bool tmp1 = (tmp == null());
		if ((tmp1)){
			return null();
		}
		this->__flushSamplerState();
		::openfl::display3D::Program3D tmp2 = this->__program;
		tmp2->__flush();
		bool tmp3 = (numTriangles == (int)-1);
		int tmp4;
		if ((tmp3)){
			tmp4 = indexBuffer->__numIndices;
		}
		else{
			tmp4 = (numTriangles * (int)3);
		}
		int count = tmp4;
		{
			::lime::_backend::native::NativeGLRenderContext tmp5 = ::lime::graphics::opengl::GL_obj::context;
			::lime::graphics::opengl::GLObject tmp6 = indexBuffer->__id;
			tmp5->bindBuffer((int)34963,tmp6);
		}
		::openfl::_internal::stage3D::GLUtils_obj::CheckGLError();
		{
			::lime::_backend::native::NativeGLRenderContext tmp5 = ::lime::graphics::opengl::GL_obj::context;
			int tmp6 = count;
			int tmp7 = indexBuffer->__elementType;
			int tmp8 = firstIndex;
			Float tmp9 = ::lime::utils::_DataPointer::DataPointer_Impl__obj::fromInt(tmp8);
			tmp5->drawElements((int)4,tmp6,tmp7,tmp9);
		}
		::openfl::_internal::stage3D::GLUtils_obj::CheckGLError();
		this->__statsIncrement((int)0);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC3(Context3D_obj,drawTriangles,(void))

Void Context3D_obj::present( ){
{
		this->__statsSendToTelemetry();
		this->__statsClear((int)0);
		(this->__frameCount)++;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(Context3D_obj,present,(void))

Void Context3D_obj::setBlendFactors( Dynamic sourceFactor,Dynamic destinationFactor){
{
		::openfl::_internal::stage3D::Context3DStateCache tmp = ::openfl::display3D::Context3D_obj::__stateCache;
		Dynamic tmp1 = sourceFactor;
		bool tmp2 = tmp->updateBlendSrcFactor(tmp1);
		bool updateSrc = tmp2;
		::openfl::_internal::stage3D::Context3DStateCache tmp3 = ::openfl::display3D::Context3D_obj::__stateCache;
		Dynamic tmp4 = destinationFactor;
		bool tmp5 = tmp3->updateBlendDestFactor(tmp4);
		bool updateDest = tmp5;
		bool tmp6 = updateSrc;
		bool tmp7 = !(tmp6);
		bool tmp8;
		if ((tmp7)){
			tmp8 = updateDest;
		}
		else{
			tmp8 = true;
		}
		if ((tmp8)){
			this->__updateBlendFactors();
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(Context3D_obj,setBlendFactors,(void))

Void Context3D_obj::setColorMask( bool red,bool green,bool blue,bool alpha){
{
		::lime::_backend::native::NativeGLRenderContext tmp = ::lime::graphics::opengl::GL_obj::context;
		bool tmp1 = red;
		bool tmp2 = green;
		bool tmp3 = blue;
		bool tmp4 = alpha;
		tmp->colorMask(tmp1,tmp2,tmp3,tmp4);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC4(Context3D_obj,setColorMask,(void))

Void Context3D_obj::setCulling( Dynamic triangleFaceToCull){
{
		::openfl::_internal::stage3D::Context3DStateCache tmp = ::openfl::display3D::Context3D_obj::__stateCache;
		Dynamic tmp1 = triangleFaceToCull;
		bool tmp2 = tmp->updateCullingMode(tmp1);
		if ((tmp2)){
			Dynamic tmp3 = triangleFaceToCull;
			switch( (int)(tmp3)){
				case (int)3: {
					::lime::_backend::native::NativeGLRenderContext tmp4 = ::lime::graphics::opengl::GL_obj::context;
					tmp4->disable((int)2884);
				}
				;break;
				case (int)0: {
					{
						::lime::_backend::native::NativeGLRenderContext tmp4 = ::lime::graphics::opengl::GL_obj::context;
						tmp4->enable((int)2884);
					}
					{
						::lime::_backend::native::NativeGLRenderContext tmp4 = ::lime::graphics::opengl::GL_obj::context;
						tmp4->cullFace((int)1028);
					}
				}
				;break;
				case (int)1: {
					{
						::lime::_backend::native::NativeGLRenderContext tmp4 = ::lime::graphics::opengl::GL_obj::context;
						tmp4->enable((int)2884);
					}
					{
						::lime::_backend::native::NativeGLRenderContext tmp4 = ::lime::graphics::opengl::GL_obj::context;
						tmp4->cullFace((int)1029);
					}
				}
				;break;
				case (int)2: {
					{
						::lime::_backend::native::NativeGLRenderContext tmp4 = ::lime::graphics::opengl::GL_obj::context;
						tmp4->enable((int)2884);
					}
					{
						::lime::_backend::native::NativeGLRenderContext tmp4 = ::lime::graphics::opengl::GL_obj::context;
						tmp4->cullFace((int)1032);
					}
				}
				;break;
				default: {
					::openfl::errors::IllegalOperationError tmp4 = ::openfl::errors::IllegalOperationError_obj::__new(null());
					HX_STACK_DO_THROW(tmp4);
				}
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Context3D_obj,setCulling,(void))

Void Context3D_obj::setDepthTest( bool depthMask,Dynamic passCompareMode){
{
		bool tmp = this->__backBufferEnableDepthAndStencil;
		bool depthTestEnabled = tmp;
		::openfl::_internal::stage3D::Context3DStateCache tmp1 = ::openfl::display3D::Context3D_obj::__stateCache;
		bool tmp2 = depthTestEnabled;
		bool tmp3 = tmp1->updateDepthTestEnabled(tmp2);
		if ((tmp3)){
			bool tmp4 = depthTestEnabled;
			if ((tmp4)){
				::lime::_backend::native::NativeGLRenderContext tmp5 = ::lime::graphics::opengl::GL_obj::context;
				tmp5->enable((int)2929);
			}
			else{
				::lime::_backend::native::NativeGLRenderContext tmp5 = ::lime::graphics::opengl::GL_obj::context;
				tmp5->disable((int)2929);
			}
		}
		::openfl::_internal::stage3D::Context3DStateCache tmp4 = ::openfl::display3D::Context3D_obj::__stateCache;
		bool tmp5 = depthMask;
		bool tmp6 = tmp4->updateDepthTestMask(tmp5);
		if ((tmp6)){
			::lime::_backend::native::NativeGLRenderContext tmp7 = ::lime::graphics::opengl::GL_obj::context;
			bool tmp8 = depthMask;
			tmp7->depthMask(tmp8);
		}
		::openfl::_internal::stage3D::Context3DStateCache tmp7 = ::openfl::display3D::Context3D_obj::__stateCache;
		Dynamic tmp8 = passCompareMode;
		bool tmp9 = tmp7->updateDepthCompareMode(tmp8);
		if ((tmp9)){
			Dynamic tmp10 = passCompareMode;
			switch( (int)(tmp10)){
				case (int)0: {
					::lime::_backend::native::NativeGLRenderContext tmp11 = ::lime::graphics::opengl::GL_obj::context;
					tmp11->depthFunc((int)519);
				}
				;break;
				case (int)1: {
					::lime::_backend::native::NativeGLRenderContext tmp11 = ::lime::graphics::opengl::GL_obj::context;
					tmp11->depthFunc((int)514);
				}
				;break;
				case (int)2: {
					::lime::_backend::native::NativeGLRenderContext tmp11 = ::lime::graphics::opengl::GL_obj::context;
					tmp11->depthFunc((int)516);
				}
				;break;
				case (int)3: {
					::lime::_backend::native::NativeGLRenderContext tmp11 = ::lime::graphics::opengl::GL_obj::context;
					tmp11->depthFunc((int)518);
				}
				;break;
				case (int)4: {
					::lime::_backend::native::NativeGLRenderContext tmp11 = ::lime::graphics::opengl::GL_obj::context;
					tmp11->depthFunc((int)513);
				}
				;break;
				case (int)5: {
					::lime::_backend::native::NativeGLRenderContext tmp11 = ::lime::graphics::opengl::GL_obj::context;
					tmp11->depthFunc((int)515);
				}
				;break;
				case (int)6: {
					::lime::_backend::native::NativeGLRenderContext tmp11 = ::lime::graphics::opengl::GL_obj::context;
					tmp11->depthFunc((int)512);
				}
				;break;
				case (int)7: {
					::lime::_backend::native::NativeGLRenderContext tmp11 = ::lime::graphics::opengl::GL_obj::context;
					tmp11->depthFunc((int)517);
				}
				;break;
				default: {
					::openfl::errors::IllegalOperationError tmp11 = ::openfl::errors::IllegalOperationError_obj::__new(null());
					HX_STACK_DO_THROW(tmp11);
				}
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(Context3D_obj,setDepthTest,(void))

Void Context3D_obj::setProgram( ::openfl::display3D::Program3D program){
{
		bool tmp = (program == null());
		if ((tmp)){
			::openfl::errors::IllegalOperationError tmp1 = ::openfl::errors::IllegalOperationError_obj::__new(null());
			HX_STACK_DO_THROW(tmp1);
		}
		::openfl::_internal::stage3D::Context3DStateCache tmp1 = ::openfl::display3D::Context3D_obj::__stateCache;
		::openfl::display3D::Program3D tmp2 = program;
		bool tmp3 = tmp1->updateProgram3D(tmp2);
		if ((tmp3)){
			program->__use();
			::lime::utils::ArrayBufferView tmp4 = this->__positionScale;
			program->__setPositionScale(tmp4);
			this->__program = program;
			::openfl::display3D::Program3D tmp5 = this->__program;
			hx::OrEq(this->__samplerDirty,tmp5->__samplerUsageMask);
			{
				int _g = (int)0;
				while((true)){
					bool tmp6 = (_g < (int)8);
					bool tmp7 = !(tmp6);
					if ((tmp7)){
						break;
					}
					int tmp8 = (_g)++;
					int i = tmp8;
					::openfl::_internal::stage3D::SamplerState tmp9 = this->__samplerStates->__get(i).StaticCast< ::openfl::_internal::stage3D::SamplerState >();
					::openfl::display3D::Program3D tmp10 = this->__program;
					int tmp11 = i;
					::openfl::_internal::stage3D::SamplerState tmp12 = tmp10->__getSamplerState(tmp11);
					tmp9->copyFrom(tmp12);
				}
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Context3D_obj,setProgram,(void))

Void Context3D_obj::setProgramConstantsFromByteArray( Dynamic programType,int firstRegister,int numRegisters,::openfl::utils::ByteArrayData data,int byteArrayOffset){
{
		bool tmp = (numRegisters == (int)0);
		if ((tmp)){
			return null();
		}
		bool tmp1 = (numRegisters == (int)-1);
		if ((tmp1)){
			int tmp2;
			{
				::openfl::utils::ByteArrayData tmp3 = data;
				int tmp4 = ::openfl::utils::_ByteArray::ByteArray_Impl__obj::get_length(tmp3);
				int tmp5 = (int(tmp4) >> int((int)2));
				int a = tmp5;
				tmp2 = (a - byteArrayOffset);
			}
			numRegisters = tmp2;
		}
		bool tmp2 = (programType == ((Dynamic)((int)1)));
		bool isVertex = tmp2;
		bool tmp3 = isVertex;
		::lime::utils::ArrayBufferView tmp4;
		if ((tmp3)){
			tmp4 = this->__vertexConstants;
		}
		else{
			tmp4 = this->__fragmentConstants;
		}
		::lime::utils::ArrayBufferView dest = tmp4;
		::lime::utils::ArrayBufferView tmp5;
		{
			::openfl::utils::ByteArrayData tmp6 = data;
			::haxe::io::Bytes tmp7 = ::openfl::utils::_ByteArray::ByteArray_Impl__obj::toArrayBuffer(tmp6);
			::haxe::io::Bytes bytes = tmp7;
			::openfl::utils::ByteArrayData tmp8 = data;
			int tmp9 = ::openfl::utils::_ByteArray::ByteArray_Impl__obj::get_length(tmp8);
			Dynamic len = tmp9;
			{
				::lime::utils::ArrayBufferView this1;
				bool tmp10 = false;
				if ((tmp10)){
					::lime::utils::ArrayBufferView tmp11 = ::lime::utils::ArrayBufferView_obj::__new(null(),(int)8);
					this1 = tmp11;
				}
				else{
					bool tmp11 = false;
					if ((tmp11)){
						::lime::utils::ArrayBufferView tmp12;
						{
							::lime::utils::ArrayBufferView tmp13 = ::lime::utils::ArrayBufferView_obj::__new((int)0,(int)8);
							::lime::utils::ArrayBufferView _this = tmp13;
							_this->byteOffset = (int)0;
							int tmp14 = hx::Throw(HX_CSTRING("Invalid field access on null object"));
							_this->length = tmp14;
							int tmp15 = (_this->length * _this->bytesPerElement);
							_this->byteLength = tmp15;
							::haxe::io::Bytes tmp16;
							{
								::haxe::io::Bytes this2;
								int tmp17 = _this->byteLength;
								::haxe::io::Bytes tmp18 = ::haxe::io::Bytes_obj::alloc(tmp17);
								this2 = tmp18;
								tmp16 = this2;
							}
							_this->buffer = tmp16;
							_this->copyFromArray(((Array< Float >)(null())),null());
							tmp12 = _this;
						}
						this1 = tmp12;
					}
					else{
						bool tmp12 = false;
						if ((tmp12)){
							::lime::utils::ArrayBufferView tmp13;
							{
								::lime::utils::ArrayBufferView tmp14 = ::lime::utils::ArrayBufferView_obj::__new((int)0,(int)8);
								::lime::utils::ArrayBufferView _this = tmp14;
								cpp::ArrayBase array = hx::Throw(HX_CSTRING("Invalid field access on null object"));
								_this->byteOffset = (int)0;
								_this->length = array->__Field(HX_HCSTRING("length","\xe6","\x94","\x07","\x9f"), hx::paccDynamic );
								int tmp15 = (_this->length * _this->bytesPerElement);
								_this->byteLength = tmp15;
								::haxe::io::Bytes tmp16;
								{
									::haxe::io::Bytes this2;
									int tmp17 = _this->byteLength;
									::haxe::io::Bytes tmp18 = ::haxe::io::Bytes_obj::alloc(tmp17);
									this2 = tmp18;
									tmp16 = this2;
								}
								_this->buffer = tmp16;
								_this->copyFromArray(((Array< Float >)(array)),null());
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
									::haxe::io::Bytes tmp16 = hx::Throw(HX_CSTRING("Invalid field access on null object"));
									::haxe::io::Bytes srcData = tmp16;
									int tmp17 = hx::Throw(HX_CSTRING("Invalid field access on null object"));
									int srcLength = tmp17;
									int tmp18 = hx::Throw(HX_CSTRING("Invalid field access on null object"));
									int srcByteOffset = tmp18;
									int tmp19 = hx::Throw(HX_CSTRING("Invalid field access on null object"));
									int srcElementSize = tmp19;
									int elementSize = _this->bytesPerElement;
									int tmp20 = hx::Throw(HX_CSTRING("Invalid field access on null object"));
									int tmp21 = _this->type;
									bool tmp22 = (tmp20 == tmp21);
									if ((tmp22)){
										int srcLength1 = srcData->length;
										int tmp23 = (srcLength1 - srcByteOffset);
										int cloneLength = tmp23;
										::haxe::io::Bytes tmp24;
										{
											::haxe::io::Bytes this2;
											int tmp25 = cloneLength;
											::haxe::io::Bytes tmp26 = ::haxe::io::Bytes_obj::alloc(tmp25);
											this2 = tmp26;
											tmp24 = this2;
										}
										_this->buffer = tmp24;
										::haxe::io::Bytes tmp25 = srcData;
										int tmp26 = srcByteOffset;
										int tmp27 = cloneLength;
										_this->buffer->blit((int)0,tmp25,tmp26,tmp27);
									}
									else{
										HX_STACK_DO_THROW(HX_HCSTRING("unimplemented","\x09","\x2f","\x74","\xb4"));
									}
									int tmp23 = (_this->bytesPerElement * srcLength);
									_this->byteLength = tmp23;
									_this->byteOffset = (int)0;
									_this->length = srcLength;
									tmp14 = _this;
								}
								this1 = tmp14;
							}
							else{
								bool tmp14 = (bytes != null());
								if ((tmp14)){
									::lime::utils::ArrayBufferView tmp15;
									{
										::lime::utils::ArrayBufferView tmp16 = ::lime::utils::ArrayBufferView_obj::__new((int)0,(int)8);
										::lime::utils::ArrayBufferView _this = tmp16;
										int in_byteOffset = (int)0;
										bool tmp17 = (in_byteOffset < (int)0);
										if ((tmp17)){
											HX_STACK_DO_THROW(::lime::utils::TAError_obj::RangeError);
										}
										int tmp18 = hx::Mod(in_byteOffset,_this->bytesPerElement);
										bool tmp19 = (tmp18 != (int)0);
										if ((tmp19)){
											HX_STACK_DO_THROW(::lime::utils::TAError_obj::RangeError);
										}
										int bufferByteLength = bytes->length;
										int elementSize = _this->bytesPerElement;
										int newByteLength = bufferByteLength;
										bool tmp20 = (len == null());
										if ((tmp20)){
											int tmp21 = (bufferByteLength - in_byteOffset);
											newByteLength = tmp21;
											int tmp22 = hx::Mod(bufferByteLength,_this->bytesPerElement);
											bool tmp23 = (tmp22 != (int)0);
											if ((tmp23)){
												HX_STACK_DO_THROW(::lime::utils::TAError_obj::RangeError);
											}
											bool tmp24 = (newByteLength < (int)0);
											if ((tmp24)){
												HX_STACK_DO_THROW(::lime::utils::TAError_obj::RangeError);
											}
										}
										else{
											int tmp21 = (len * _this->bytesPerElement);
											newByteLength = tmp21;
											int tmp22 = (in_byteOffset + newByteLength);
											int newRange = tmp22;
											bool tmp23 = (newRange > bufferByteLength);
											if ((tmp23)){
												HX_STACK_DO_THROW(::lime::utils::TAError_obj::RangeError);
											}
										}
										_this->buffer = bytes;
										_this->byteOffset = in_byteOffset;
										_this->byteLength = newByteLength;
										Float tmp21 = (Float(newByteLength) / Float(_this->bytesPerElement));
										int tmp22 = ::Std_obj::_int(tmp21);
										_this->length = tmp22;
										tmp15 = _this;
									}
									this1 = tmp15;
								}
								else{
									HX_STACK_DO_THROW(HX_HCSTRING("Invalid constructor arguments for Float32Array","\x8e","\xc1","\xf4","\xd4"));
								}
							}
						}
					}
				}
				tmp5 = this1;
			}
		}
		::lime::utils::ArrayBufferView floatData = tmp5;
		int tmp6 = (firstRegister * (int)4);
		int outOffset = tmp6;
		Float tmp7;
		{
			int _int = byteArrayOffset;
			bool tmp8 = (_int < (int)0);
			if ((tmp8)){
				tmp7 = (((Float)4294967296.0) + _int);
			}
			else{
				tmp7 = (_int + ((Float)0.0));
			}
		}
		Float tmp8;
		{
			int _int = (int)4;
			bool tmp9 = (_int < (int)0);
			if ((tmp9)){
				tmp8 = (((Float)4294967296.0) + _int);
			}
			else{
				tmp8 = (_int + ((Float)0.0));
			}
		}
		Float tmp9 = (Float(tmp7) / Float(tmp8));
		int tmp10 = ::Std_obj::_int(tmp9);
		int inOffset = tmp10;
		{
			int _g1 = (int)0;
			int tmp11 = (numRegisters * (int)4);
			int _g = tmp11;
			while((true)){
				bool tmp12 = (_g1 < _g);
				bool tmp13 = !(tmp12);
				if ((tmp13)){
					break;
				}
				int tmp14 = (_g1)++;
				int i = tmp14;
				{
					Float tmp15 = ::__hxcpp_memory_get_float(floatData->buffer->b,(floatData->byteOffset + (((inOffset + i)) * (int)4)));
					Float val = tmp15;
					::__hxcpp_memory_set_float(dest->buffer->b,(dest->byteOffset + (((outOffset + i)) * (int)4)),val);
					val;
				}
			}
		}
		::openfl::display3D::Program3D tmp11 = this->__program;
		bool tmp12 = (tmp11 != null());
		if ((tmp12)){
			::openfl::display3D::Program3D tmp13 = this->__program;
			bool tmp14 = isVertex;
			int tmp15 = firstRegister;
			int tmp16 = numRegisters;
			tmp13->__markDirty(tmp14,tmp15,tmp16);
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC5(Context3D_obj,setProgramConstantsFromByteArray,(void))

Void Context3D_obj::setProgramConstantsFromMatrix( Dynamic programType,int firstRegister,::openfl::geom::Matrix3D matrix,hx::Null< bool >  __o_transposedMatrix){
bool transposedMatrix = __o_transposedMatrix.Default(false);
{
		bool tmp = (programType == ((Dynamic)((int)1)));
		bool isVertex = tmp;
		bool tmp1 = isVertex;
		::lime::utils::ArrayBufferView tmp2;
		if ((tmp1)){
			tmp2 = this->__vertexConstants;
		}
		else{
			tmp2 = this->__fragmentConstants;
		}
		::lime::utils::ArrayBufferView dest = tmp2;
		::openfl::_Vector::FloatVector source = matrix->rawData;
		int tmp3 = (firstRegister * (int)4);
		int i = tmp3;
		bool tmp4 = transposedMatrix;
		if ((tmp4)){
			{
				int tmp5 = (i)++;
				int idx = tmp5;
				Float tmp6 = source->get((int)0);
				Float val = tmp6;
				::__hxcpp_memory_set_float(dest->buffer->b,(dest->byteOffset + (idx * (int)4)),val);
				val;
			}
			{
				int tmp5 = (i)++;
				int idx = tmp5;
				Float tmp6 = source->get((int)4);
				Float val = tmp6;
				::__hxcpp_memory_set_float(dest->buffer->b,(dest->byteOffset + (idx * (int)4)),val);
				val;
			}
			{
				int tmp5 = (i)++;
				int idx = tmp5;
				Float tmp6 = source->get((int)8);
				Float val = tmp6;
				::__hxcpp_memory_set_float(dest->buffer->b,(dest->byteOffset + (idx * (int)4)),val);
				val;
			}
			{
				int tmp5 = (i)++;
				int idx = tmp5;
				Float tmp6 = source->get((int)12);
				Float val = tmp6;
				::__hxcpp_memory_set_float(dest->buffer->b,(dest->byteOffset + (idx * (int)4)),val);
				val;
			}
			{
				int tmp5 = (i)++;
				int idx = tmp5;
				Float tmp6 = source->get((int)1);
				Float val = tmp6;
				::__hxcpp_memory_set_float(dest->buffer->b,(dest->byteOffset + (idx * (int)4)),val);
				val;
			}
			{
				int tmp5 = (i)++;
				int idx = tmp5;
				Float tmp6 = source->get((int)5);
				Float val = tmp6;
				::__hxcpp_memory_set_float(dest->buffer->b,(dest->byteOffset + (idx * (int)4)),val);
				val;
			}
			{
				int tmp5 = (i)++;
				int idx = tmp5;
				Float tmp6 = source->get((int)9);
				Float val = tmp6;
				::__hxcpp_memory_set_float(dest->buffer->b,(dest->byteOffset + (idx * (int)4)),val);
				val;
			}
			{
				int tmp5 = (i)++;
				int idx = tmp5;
				Float tmp6 = source->get((int)13);
				Float val = tmp6;
				::__hxcpp_memory_set_float(dest->buffer->b,(dest->byteOffset + (idx * (int)4)),val);
				val;
			}
			{
				int tmp5 = (i)++;
				int idx = tmp5;
				Float tmp6 = source->get((int)2);
				Float val = tmp6;
				::__hxcpp_memory_set_float(dest->buffer->b,(dest->byteOffset + (idx * (int)4)),val);
				val;
			}
			{
				int tmp5 = (i)++;
				int idx = tmp5;
				Float tmp6 = source->get((int)6);
				Float val = tmp6;
				::__hxcpp_memory_set_float(dest->buffer->b,(dest->byteOffset + (idx * (int)4)),val);
				val;
			}
			{
				int tmp5 = (i)++;
				int idx = tmp5;
				Float tmp6 = source->get((int)10);
				Float val = tmp6;
				::__hxcpp_memory_set_float(dest->buffer->b,(dest->byteOffset + (idx * (int)4)),val);
				val;
			}
			{
				int tmp5 = (i)++;
				int idx = tmp5;
				Float tmp6 = source->get((int)14);
				Float val = tmp6;
				::__hxcpp_memory_set_float(dest->buffer->b,(dest->byteOffset + (idx * (int)4)),val);
				val;
			}
			{
				int tmp5 = (i)++;
				int idx = tmp5;
				Float tmp6 = source->get((int)3);
				Float val = tmp6;
				::__hxcpp_memory_set_float(dest->buffer->b,(dest->byteOffset + (idx * (int)4)),val);
				val;
			}
			{
				int tmp5 = (i)++;
				int idx = tmp5;
				Float tmp6 = source->get((int)7);
				Float val = tmp6;
				::__hxcpp_memory_set_float(dest->buffer->b,(dest->byteOffset + (idx * (int)4)),val);
				val;
			}
			{
				int tmp5 = (i)++;
				int idx = tmp5;
				Float tmp6 = source->get((int)11);
				Float val = tmp6;
				::__hxcpp_memory_set_float(dest->buffer->b,(dest->byteOffset + (idx * (int)4)),val);
				val;
			}
			{
				int tmp5 = (i)++;
				int idx = tmp5;
				Float tmp6 = source->get((int)15);
				Float val = tmp6;
				::__hxcpp_memory_set_float(dest->buffer->b,(dest->byteOffset + (idx * (int)4)),val);
				val;
			}
		}
		else{
			{
				int tmp5 = (i)++;
				int idx = tmp5;
				Float tmp6 = source->get((int)0);
				Float val = tmp6;
				::__hxcpp_memory_set_float(dest->buffer->b,(dest->byteOffset + (idx * (int)4)),val);
				val;
			}
			{
				int tmp5 = (i)++;
				int idx = tmp5;
				Float tmp6 = source->get((int)1);
				Float val = tmp6;
				::__hxcpp_memory_set_float(dest->buffer->b,(dest->byteOffset + (idx * (int)4)),val);
				val;
			}
			{
				int tmp5 = (i)++;
				int idx = tmp5;
				Float tmp6 = source->get((int)2);
				Float val = tmp6;
				::__hxcpp_memory_set_float(dest->buffer->b,(dest->byteOffset + (idx * (int)4)),val);
				val;
			}
			{
				int tmp5 = (i)++;
				int idx = tmp5;
				Float tmp6 = source->get((int)3);
				Float val = tmp6;
				::__hxcpp_memory_set_float(dest->buffer->b,(dest->byteOffset + (idx * (int)4)),val);
				val;
			}
			{
				int tmp5 = (i)++;
				int idx = tmp5;
				Float tmp6 = source->get((int)4);
				Float val = tmp6;
				::__hxcpp_memory_set_float(dest->buffer->b,(dest->byteOffset + (idx * (int)4)),val);
				val;
			}
			{
				int tmp5 = (i)++;
				int idx = tmp5;
				Float tmp6 = source->get((int)5);
				Float val = tmp6;
				::__hxcpp_memory_set_float(dest->buffer->b,(dest->byteOffset + (idx * (int)4)),val);
				val;
			}
			{
				int tmp5 = (i)++;
				int idx = tmp5;
				Float tmp6 = source->get((int)6);
				Float val = tmp6;
				::__hxcpp_memory_set_float(dest->buffer->b,(dest->byteOffset + (idx * (int)4)),val);
				val;
			}
			{
				int tmp5 = (i)++;
				int idx = tmp5;
				Float tmp6 = source->get((int)7);
				Float val = tmp6;
				::__hxcpp_memory_set_float(dest->buffer->b,(dest->byteOffset + (idx * (int)4)),val);
				val;
			}
			{
				int tmp5 = (i)++;
				int idx = tmp5;
				Float tmp6 = source->get((int)8);
				Float val = tmp6;
				::__hxcpp_memory_set_float(dest->buffer->b,(dest->byteOffset + (idx * (int)4)),val);
				val;
			}
			{
				int tmp5 = (i)++;
				int idx = tmp5;
				Float tmp6 = source->get((int)9);
				Float val = tmp6;
				::__hxcpp_memory_set_float(dest->buffer->b,(dest->byteOffset + (idx * (int)4)),val);
				val;
			}
			{
				int tmp5 = (i)++;
				int idx = tmp5;
				Float tmp6 = source->get((int)10);
				Float val = tmp6;
				::__hxcpp_memory_set_float(dest->buffer->b,(dest->byteOffset + (idx * (int)4)),val);
				val;
			}
			{
				int tmp5 = (i)++;
				int idx = tmp5;
				Float tmp6 = source->get((int)11);
				Float val = tmp6;
				::__hxcpp_memory_set_float(dest->buffer->b,(dest->byteOffset + (idx * (int)4)),val);
				val;
			}
			{
				int tmp5 = (i)++;
				int idx = tmp5;
				Float tmp6 = source->get((int)12);
				Float val = tmp6;
				::__hxcpp_memory_set_float(dest->buffer->b,(dest->byteOffset + (idx * (int)4)),val);
				val;
			}
			{
				int tmp5 = (i)++;
				int idx = tmp5;
				Float tmp6 = source->get((int)13);
				Float val = tmp6;
				::__hxcpp_memory_set_float(dest->buffer->b,(dest->byteOffset + (idx * (int)4)),val);
				val;
			}
			{
				int tmp5 = (i)++;
				int idx = tmp5;
				Float tmp6 = source->get((int)14);
				Float val = tmp6;
				::__hxcpp_memory_set_float(dest->buffer->b,(dest->byteOffset + (idx * (int)4)),val);
				val;
			}
			{
				int tmp5 = (i)++;
				int idx = tmp5;
				Float tmp6 = source->get((int)15);
				Float val = tmp6;
				::__hxcpp_memory_set_float(dest->buffer->b,(dest->byteOffset + (idx * (int)4)),val);
				val;
			}
		}
		::openfl::display3D::Program3D tmp5 = this->__program;
		bool tmp6 = (tmp5 != null());
		if ((tmp6)){
			::openfl::display3D::Program3D tmp7 = this->__program;
			bool tmp8 = isVertex;
			int tmp9 = firstRegister;
			tmp7->__markDirty(tmp8,tmp9,(int)4);
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC4(Context3D_obj,setProgramConstantsFromMatrix,(void))

Void Context3D_obj::setProgramConstantsFromVector( Dynamic programType,int firstRegister,::openfl::_Vector::FloatVector data,hx::Null< int >  __o_numRegisters){
int numRegisters = __o_numRegisters.Default(-1);
{
		bool tmp = (numRegisters == (int)0);
		if ((tmp)){
			return null();
		}
		bool tmp1 = (numRegisters == (int)-1);
		if ((tmp1)){
			int tmp2 = data->get_length();
			int tmp3 = (int(tmp2) >> int((int)2));
			numRegisters = tmp3;
		}
		bool tmp2 = (programType == ((Dynamic)((int)1)));
		bool isVertex = tmp2;
		bool tmp3 = isVertex;
		::lime::utils::ArrayBufferView tmp4;
		if ((tmp3)){
			tmp4 = this->__vertexConstants;
		}
		else{
			tmp4 = this->__fragmentConstants;
		}
		::lime::utils::ArrayBufferView dest = tmp4;
		::openfl::_Vector::FloatVector source = data;
		int sourceIndex = (int)0;
		int tmp5 = (firstRegister * (int)4);
		int destIndex = tmp5;
		{
			int _g = (int)0;
			while((true)){
				bool tmp6 = (_g < numRegisters);
				bool tmp7 = !(tmp6);
				if ((tmp7)){
					break;
				}
				int tmp8 = (_g)++;
				int i = tmp8;
				{
					int tmp9 = (destIndex)++;
					int idx = tmp9;
					Float tmp10;
					{
						int tmp11 = (sourceIndex)++;
						int index = tmp11;
						int tmp12 = index;
						tmp10 = source->get(tmp12);
					}
					Float val = tmp10;
					::__hxcpp_memory_set_float(dest->buffer->b,(dest->byteOffset + (idx * (int)4)),val);
					val;
				}
				{
					int tmp9 = (destIndex)++;
					int idx = tmp9;
					Float tmp10;
					{
						int tmp11 = (sourceIndex)++;
						int index = tmp11;
						int tmp12 = index;
						tmp10 = source->get(tmp12);
					}
					Float val = tmp10;
					::__hxcpp_memory_set_float(dest->buffer->b,(dest->byteOffset + (idx * (int)4)),val);
					val;
				}
				{
					int tmp9 = (destIndex)++;
					int idx = tmp9;
					Float tmp10;
					{
						int tmp11 = (sourceIndex)++;
						int index = tmp11;
						int tmp12 = index;
						tmp10 = source->get(tmp12);
					}
					Float val = tmp10;
					::__hxcpp_memory_set_float(dest->buffer->b,(dest->byteOffset + (idx * (int)4)),val);
					val;
				}
				{
					int tmp9 = (destIndex)++;
					int idx = tmp9;
					Float tmp10;
					{
						int tmp11 = (sourceIndex)++;
						int index = tmp11;
						int tmp12 = index;
						tmp10 = source->get(tmp12);
					}
					Float val = tmp10;
					::__hxcpp_memory_set_float(dest->buffer->b,(dest->byteOffset + (idx * (int)4)),val);
					val;
				}
			}
		}
		::openfl::display3D::Program3D tmp6 = this->__program;
		bool tmp7 = (tmp6 != null());
		if ((tmp7)){
			::openfl::display3D::Program3D tmp8 = this->__program;
			bool tmp9 = isVertex;
			int tmp10 = firstRegister;
			int tmp11 = numRegisters;
			tmp8->__markDirty(tmp9,tmp10,tmp11);
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC4(Context3D_obj,setProgramConstantsFromVector,(void))

Void Context3D_obj::setRenderToBackBuffer( ){
{
		{
			::lime::_backend::native::NativeGLRenderContext tmp = ::lime::graphics::opengl::GL_obj::context;
			tmp->bindFramebuffer((int)36160,null());
		}
		::openfl::_internal::stage3D::GLUtils_obj::CheckGLError();
		{
			::lime::_backend::native::NativeGLRenderContext tmp = ::lime::graphics::opengl::GL_obj::context;
			tmp->frontFace((int)2305);
		}
		::openfl::_internal::stage3D::GLUtils_obj::CheckGLError();
		this->__renderToTexture = null();
		this->__scissorRectangle = null();
		this->__updateBackbufferViewport();
		this->__updateScissorRectangle();
		this->__updateDepthAndStencilState();
		{
			::lime::utils::ArrayBufferView tmp = this->__positionScale;
			::lime::utils::ArrayBufferView this1 = tmp;
			::__hxcpp_memory_set_float(this1->buffer->b,(this1->byteOffset + (int)4),((Float)1.0));
			((Float)1.0);
		}
		::openfl::display3D::Program3D tmp = this->__program;
		bool tmp1 = (tmp != null());
		if ((tmp1)){
			::openfl::display3D::Program3D tmp2 = this->__program;
			::lime::utils::ArrayBufferView tmp3 = this->__positionScale;
			tmp2->__setPositionScale(tmp3);
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(Context3D_obj,setRenderToBackBuffer,(void))

Void Context3D_obj::setRenderToTexture( ::openfl::display3D::textures::TextureBase texture,hx::Null< bool >  __o_enableDepthAndStencil,hx::Null< int >  __o_antiAlias,hx::Null< int >  __o_surfaceSelector){
bool enableDepthAndStencil = __o_enableDepthAndStencil.Default(false);
int antiAlias = __o_antiAlias.Default(0);
int surfaceSelector = __o_surfaceSelector.Default(0);
{
		int width = (int)0;
		int height = (int)0;
		::lime::graphics::opengl::GLObject tmp = this->__framebuffer;
		bool tmp1 = (tmp == null());
		if ((tmp1)){
			::lime::_backend::native::NativeGLRenderContext tmp2 = ::lime::graphics::opengl::GL_obj::context;
			::lime::graphics::opengl::GLObject tmp3 = tmp2->createFramebuffer();
			this->__framebuffer = tmp3;
			::openfl::_internal::stage3D::GLUtils_obj::CheckGLError();
		}
		{
			::lime::_backend::native::NativeGLRenderContext tmp2 = ::lime::graphics::opengl::GL_obj::context;
			::lime::graphics::opengl::GLObject tmp3 = this->__framebuffer;
			tmp2->bindFramebuffer((int)36160,tmp3);
		}
		::openfl::_internal::stage3D::GLUtils_obj::CheckGLError();
		::openfl::display3D::textures::TextureBase tmp2 = texture;
		bool tmp3 = ::Std_obj::is(tmp2,hx::ClassOf< ::openfl::display3D::textures::Texture >());
		if ((tmp3)){
			::openfl::display3D::textures::Texture texture2D = ((::openfl::display3D::textures::Texture)(texture));
			width = texture2D->__width;
			height = texture2D->__height;
			{
				::lime::_backend::native::NativeGLRenderContext tmp4 = ::lime::graphics::opengl::GL_obj::context;
				::lime::graphics::opengl::GLObject tmp5 = texture->__textureID;
				tmp4->framebufferTexture2D((int)36160,(int)36064,(int)3553,tmp5,(int)0);
			}
			::openfl::_internal::stage3D::GLUtils_obj::CheckGLError();
		}
		else{
			::openfl::display3D::textures::TextureBase tmp4 = texture;
			bool tmp5 = ::Std_obj::is(tmp4,hx::ClassOf< ::openfl::display3D::textures::RectangleTexture >());
			if ((tmp5)){
				::openfl::display3D::textures::RectangleTexture rectTexture = ((::openfl::display3D::textures::RectangleTexture)(texture));
				width = rectTexture->__width;
				height = rectTexture->__height;
				{
					::lime::_backend::native::NativeGLRenderContext tmp6 = ::lime::graphics::opengl::GL_obj::context;
					::lime::graphics::opengl::GLObject tmp7 = texture->__textureID;
					tmp6->framebufferTexture2D((int)36160,(int)36064,(int)3553,tmp7,(int)0);
				}
				::openfl::_internal::stage3D::GLUtils_obj::CheckGLError();
			}
			else{
				::openfl::display3D::textures::TextureBase tmp6 = texture;
				bool tmp7 = ::Std_obj::is(tmp6,hx::ClassOf< ::openfl::display3D::textures::CubeTexture >());
				if ((tmp7)){
					::openfl::display3D::textures::CubeTexture cubeTexture = ((::openfl::display3D::textures::CubeTexture)(texture));
					width = cubeTexture->__size;
					height = cubeTexture->__size;
					{
						int _g = (int)0;
						while((true)){
							bool tmp8 = (_g < (int)6);
							bool tmp9 = !(tmp8);
							if ((tmp9)){
								break;
							}
							int tmp10 = (_g)++;
							int i = tmp10;
							{
								::lime::_backend::native::NativeGLRenderContext tmp11 = ::lime::graphics::opengl::GL_obj::context;
								int tmp12 = ((int)34069 + i);
								::lime::graphics::opengl::GLObject tmp13 = texture->__textureID;
								tmp11->framebufferTexture2D((int)36160,(int)36064,tmp12,tmp13,(int)0);
							}
							::openfl::_internal::stage3D::GLUtils_obj::CheckGLError();
						}
					}
				}
				else{
					::openfl::errors::Error tmp8 = ::openfl::errors::Error_obj::__new(HX_HCSTRING("Invalid texture","\x92","\x3e","\x59","\x9a"),null());
					HX_STACK_DO_THROW(tmp8);
				}
			}
		}
		bool tmp4 = enableDepthAndStencil;
		if ((tmp4)){
			bool tmp5 = this->__supportsPackedDepthStencil;
			if ((tmp5)){
				::lime::graphics::opengl::GLObject tmp6 = this->__depthStencilRenderBuffer;
				bool tmp7 = (tmp6 == null());
				if ((tmp7)){
					::lime::_backend::native::NativeGLRenderContext tmp8 = ::lime::graphics::opengl::GL_obj::context;
					::lime::graphics::opengl::GLObject tmp9 = tmp8->createRenderbuffer();
					this->__depthStencilRenderBuffer = tmp9;
					::openfl::_internal::stage3D::GLUtils_obj::CheckGLError();
				}
				{
					::lime::_backend::native::NativeGLRenderContext tmp8 = ::lime::graphics::opengl::GL_obj::context;
					::lime::graphics::opengl::GLObject tmp9 = this->__depthStencilRenderBuffer;
					tmp8->bindRenderbuffer((int)36161,tmp9);
				}
				::openfl::_internal::stage3D::GLUtils_obj::CheckGLError();
				{
					::lime::_backend::native::NativeGLRenderContext tmp8 = ::lime::graphics::opengl::GL_obj::context;
					int tmp9 = ::openfl::display3D::Context3D_obj::DEPTH_STENCIL;
					int tmp10 = width;
					int tmp11 = height;
					tmp8->renderbufferStorage((int)36161,tmp9,tmp10,tmp11);
				}
				::openfl::_internal::stage3D::GLUtils_obj::CheckGLError();
				{
					::lime::_backend::native::NativeGLRenderContext tmp8 = ::lime::graphics::opengl::GL_obj::context;
					::lime::graphics::opengl::GLObject tmp9 = this->__depthStencilRenderBuffer;
					tmp8->framebufferRenderbuffer((int)36160,(int)33306,(int)36161,tmp9);
				}
				::openfl::_internal::stage3D::GLUtils_obj::CheckGLError();
			}
			else{
				::lime::graphics::opengl::GLObject tmp6 = this->__depthRenderBuffer;
				bool tmp7 = (tmp6 == null());
				if ((tmp7)){
					::lime::_backend::native::NativeGLRenderContext tmp8 = ::lime::graphics::opengl::GL_obj::context;
					::lime::graphics::opengl::GLObject tmp9 = tmp8->createRenderbuffer();
					this->__depthRenderBuffer = tmp9;
					::openfl::_internal::stage3D::GLUtils_obj::CheckGLError();
				}
				::lime::graphics::opengl::GLObject tmp8 = this->__stencilRenderBuffer;
				bool tmp9 = (tmp8 == null());
				if ((tmp9)){
					::lime::_backend::native::NativeGLRenderContext tmp10 = ::lime::graphics::opengl::GL_obj::context;
					::lime::graphics::opengl::GLObject tmp11 = tmp10->createRenderbuffer();
					this->__stencilRenderBuffer = tmp11;
					::openfl::_internal::stage3D::GLUtils_obj::CheckGLError();
				}
				{
					::lime::_backend::native::NativeGLRenderContext tmp10 = ::lime::graphics::opengl::GL_obj::context;
					::lime::graphics::opengl::GLObject tmp11 = this->__depthRenderBuffer;
					tmp10->bindRenderbuffer((int)36161,tmp11);
				}
				::openfl::_internal::stage3D::GLUtils_obj::CheckGLError();
				{
					::lime::_backend::native::NativeGLRenderContext tmp10 = ::lime::graphics::opengl::GL_obj::context;
					int tmp11 = width;
					int tmp12 = height;
					tmp10->renderbufferStorage((int)36161,(int)33189,tmp11,tmp12);
				}
				::openfl::_internal::stage3D::GLUtils_obj::CheckGLError();
				{
					::lime::_backend::native::NativeGLRenderContext tmp10 = ::lime::graphics::opengl::GL_obj::context;
					::lime::graphics::opengl::GLObject tmp11 = this->__stencilRenderBuffer;
					tmp10->bindRenderbuffer((int)36161,tmp11);
				}
				::openfl::_internal::stage3D::GLUtils_obj::CheckGLError();
				{
					::lime::_backend::native::NativeGLRenderContext tmp10 = ::lime::graphics::opengl::GL_obj::context;
					int tmp11 = width;
					int tmp12 = height;
					tmp10->renderbufferStorage((int)36161,(int)36168,tmp11,tmp12);
				}
				::openfl::_internal::stage3D::GLUtils_obj::CheckGLError();
				{
					::lime::_backend::native::NativeGLRenderContext tmp10 = ::lime::graphics::opengl::GL_obj::context;
					::lime::graphics::opengl::GLObject tmp11 = this->__depthRenderBuffer;
					tmp10->framebufferRenderbuffer((int)36160,(int)36096,(int)36161,tmp11);
				}
				::openfl::_internal::stage3D::GLUtils_obj::CheckGLError();
				{
					::lime::_backend::native::NativeGLRenderContext tmp10 = ::lime::graphics::opengl::GL_obj::context;
					::lime::graphics::opengl::GLObject tmp11 = this->__stencilRenderBuffer;
					tmp10->framebufferRenderbuffer((int)36160,(int)36128,(int)36161,tmp11);
				}
				::openfl::_internal::stage3D::GLUtils_obj::CheckGLError();
			}
			{
				::lime::_backend::native::NativeGLRenderContext tmp6 = ::lime::graphics::opengl::GL_obj::context;
				tmp6->bindRenderbuffer((int)36161,null());
			}
			::openfl::_internal::stage3D::GLUtils_obj::CheckGLError();
		}
		int tmp5 = width;
		int tmp6 = height;
		this->__setViewport((int)0,(int)0,tmp5,tmp6);
		bool tmp7 = this->enableErrorChecking;
		if ((tmp7)){
			::lime::_backend::native::NativeGLRenderContext tmp8 = ::lime::graphics::opengl::GL_obj::context;
			int tmp9 = tmp8->checkFramebufferStatus((int)36160);
			int code = tmp9;
			bool tmp10 = (code != (int)36053);
			if ((tmp10)){
				Dynamic tmp11 = hx::SourceInfo(HX_HCSTRING("Context3D.hx","\x7e","\x2e","\xcf","\x45"),813,HX_HCSTRING("openfl.display3D.Context3D","\xa7","\xbf","\xa0","\x2f"),HX_HCSTRING("setRenderToTexture","\xe8","\x2c","\x92","\x46"));
				::haxe::Log_obj::trace(HX_HCSTRING("Error: Context3D.setRenderToTexture status:${code} width:${texture2D.__width} height:${texture2D.__height}","\x55","\xdb","\x0b","\xac"),tmp11);
			}
		}
		{
			::lime::utils::ArrayBufferView tmp8 = this->__positionScale;
			::lime::utils::ArrayBufferView this1 = tmp8;
			::__hxcpp_memory_set_float(this1->buffer->b,(this1->byteOffset + (int)4),((Float)-1.0));
			((Float)-1.0);
		}
		::openfl::display3D::Program3D tmp8 = this->__program;
		bool tmp9 = (tmp8 != null());
		if ((tmp9)){
			::openfl::display3D::Program3D tmp10 = this->__program;
			::lime::utils::ArrayBufferView tmp11 = this->__positionScale;
			tmp10->__setPositionScale(tmp11);
		}
		{
			::lime::_backend::native::NativeGLRenderContext tmp10 = ::lime::graphics::opengl::GL_obj::context;
			tmp10->frontFace((int)2304);
		}
		::openfl::_internal::stage3D::GLUtils_obj::CheckGLError();
		this->__renderToTexture = texture;
		this->__scissorRectangle = null();
		this->__rttDepthAndStencil = enableDepthAndStencil;
		this->__updateScissorRectangle();
		this->__updateDepthAndStencilState();
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC4(Context3D_obj,setRenderToTexture,(void))

Void Context3D_obj::setSamplerStateAt( int sampler,Dynamic wrap,Dynamic filter,Dynamic mipfilter){
{
		bool tmp = (sampler < (int)0);
		bool tmp1 = !(tmp);
		bool tmp2;
		if ((tmp1)){
			tmp2 = (sampler > (int)8);
		}
		else{
			tmp2 = true;
		}
		if ((tmp2)){
			::openfl::errors::Error tmp3 = ::openfl::errors::Error_obj::__new(HX_HCSTRING("sampler out of range","\xde","\x61","\xc4","\x36"),null());
			HX_STACK_DO_THROW(tmp3);
		}
		::openfl::_internal::stage3D::SamplerState tmp3 = this->__samplerStates->__get(sampler).StaticCast< ::openfl::_internal::stage3D::SamplerState >();
		::openfl::_internal::stage3D::SamplerState state = tmp3;
		Dynamic tmp4 = wrap;
		switch( (int)(tmp4)){
			case (int)0: {
				state->set_wrapModeS((int)33071);
				state->set_wrapModeT((int)33071);
			}
			;break;
			case (int)1: {
				state->set_wrapModeS((int)33071);
				state->set_wrapModeT((int)10497);
			}
			;break;
			case (int)2: {
				state->set_wrapModeS((int)10497);
				state->set_wrapModeT((int)10497);
			}
			;break;
			case (int)3: {
				state->set_wrapModeS((int)10497);
				state->set_wrapModeT((int)33071);
			}
			;break;
			default: {
				::openfl::errors::Error tmp5 = ::openfl::errors::Error_obj::__new(HX_HCSTRING("wrap bad enum","\x52","\x1c","\x4c","\x59"),null());
				HX_STACK_DO_THROW(tmp5);
			}
		}
		Dynamic tmp5 = filter;
		switch( (int)(tmp5)){
			case (int)4: {
				state->set_magFilter((int)9729);
				bool tmp6 = this->__supportsAnisotropicFiltering;
				if ((tmp6)){
					state->set_maxAniso((int)1);
				}
			}
			;break;
			case (int)5: {
				state->set_magFilter((int)9728);
				bool tmp6 = this->__supportsAnisotropicFiltering;
				if ((tmp6)){
					state->set_maxAniso((int)1);
				}
			}
			;break;
			case (int)1: {
				bool tmp6 = this->__supportsAnisotropicFiltering;
				if ((tmp6)){
					int tmp7 = this->__maxAnisotropyTexture2D;
					bool tmp8 = (tmp7 < (int)2);
					Float tmp9;
					if ((tmp8)){
						tmp9 = this->__maxAnisotropyTexture2D;
					}
					else{
						tmp9 = (int)2;
					}
					state->set_maxAniso(tmp9);
				}
			}
			;break;
			case (int)2: {
				bool tmp6 = this->__supportsAnisotropicFiltering;
				if ((tmp6)){
					int tmp7 = this->__maxAnisotropyTexture2D;
					bool tmp8 = (tmp7 < (int)4);
					Float tmp9;
					if ((tmp8)){
						tmp9 = this->__maxAnisotropyTexture2D;
					}
					else{
						tmp9 = (int)4;
					}
					state->set_maxAniso(tmp9);
				}
			}
			;break;
			case (int)3: {
				bool tmp6 = this->__supportsAnisotropicFiltering;
				if ((tmp6)){
					int tmp7 = this->__maxAnisotropyTexture2D;
					bool tmp8 = (tmp7 < (int)8);
					Float tmp9;
					if ((tmp8)){
						tmp9 = this->__maxAnisotropyTexture2D;
					}
					else{
						tmp9 = (int)8;
					}
					state->set_maxAniso(tmp9);
				}
			}
			;break;
			case (int)0: {
				bool tmp6 = this->__supportsAnisotropicFiltering;
				if ((tmp6)){
					int tmp7 = this->__maxAnisotropyTexture2D;
					bool tmp8 = (tmp7 < (int)16);
					Float tmp9;
					if ((tmp8)){
						tmp9 = this->__maxAnisotropyTexture2D;
					}
					else{
						tmp9 = (int)16;
					}
					state->set_maxAniso(tmp9);
				}
			}
			;break;
			default: {
				::openfl::errors::Error tmp6 = ::openfl::errors::Error_obj::__new(HX_HCSTRING("filter bad enum","\xa4","\x08","\xed","\x96"),null());
				HX_STACK_DO_THROW(tmp6);
			}
		}
		Dynamic tmp6 = mipfilter;
		switch( (int)(tmp6)){
			case (int)0: {
				bool tmp7 = (filter == ((Dynamic)((int)5)));
				int tmp8;
				if ((tmp7)){
					tmp8 = (int)9986;
				}
				else{
					tmp8 = (int)9987;
				}
				state->set_minFilter(tmp8);
			}
			;break;
			case (int)1: {
				bool tmp7 = (filter == ((Dynamic)((int)5)));
				int tmp8;
				if ((tmp7)){
					tmp8 = (int)9984;
				}
				else{
					tmp8 = (int)9985;
				}
				state->set_minFilter(tmp8);
			}
			;break;
			case (int)2: {
				bool tmp7 = (filter == ((Dynamic)((int)5)));
				int tmp8;
				if ((tmp7)){
					tmp8 = (int)9728;
				}
				else{
					tmp8 = (int)9729;
				}
				state->set_minFilter(tmp8);
			}
			;break;
			default: {
				::openfl::errors::Error tmp7 = ::openfl::errors::Error_obj::__new(HX_HCSTRING("mipfiter bad enum","\xb2","\x1b","\x09","\xc4"),null());
				HX_STACK_DO_THROW(tmp7);
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC4(Context3D_obj,setSamplerStateAt,(void))

Void Context3D_obj::setScissorRectangle( ::openfl::geom::Rectangle rectangle){
{
		bool tmp = (rectangle != null());
		::openfl::geom::Rectangle tmp1;
		if ((tmp)){
			tmp1 = rectangle->clone();
		}
		else{
			tmp1 = null();
		}
		this->__scissorRectangle = tmp1;
		this->__updateScissorRectangle();
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Context3D_obj,setScissorRectangle,(void))

Void Context3D_obj::setStencilActions( Dynamic __o_triangleFace,Dynamic __o_compareMode,Dynamic __o_actionOnBothPass,Dynamic __o_actionOnDepthFail,Dynamic __o_actionOnDepthPassStencilFail){
Dynamic triangleFace = __o_triangleFace.Default(2);
Dynamic compareMode = __o_compareMode.Default(0);
Dynamic actionOnBothPass = __o_actionOnBothPass.Default(5);
Dynamic actionOnDepthFail = __o_actionOnDepthFail.Default(5);
Dynamic actionOnDepthPassStencilFail = __o_actionOnDepthPassStencilFail.Default(5);
{
		this->__stencilCompareMode = compareMode;
		{
			Dynamic tmp = actionOnDepthFail;
			int tmp1 = this->__getGLStencilAction(tmp);
			int fail = tmp1;
			Dynamic tmp2 = actionOnDepthPassStencilFail;
			int tmp3 = this->__getGLStencilAction(tmp2);
			int zfail = tmp3;
			Dynamic tmp4 = actionOnBothPass;
			int tmp5 = this->__getGLStencilAction(tmp4);
			int zpass = tmp5;
			::lime::_backend::native::NativeGLRenderContext tmp6 = ::lime::graphics::opengl::GL_obj::context;
			int tmp7 = fail;
			int tmp8 = zfail;
			int tmp9 = zpass;
			tmp6->stencilOp(tmp7,tmp8,tmp9);
		}
		{
			Dynamic tmp = this->__stencilCompareMode;
			int tmp1 = this->__getGLCompareMode(tmp);
			int func = tmp1;
			::lime::_backend::native::NativeGLRenderContext tmp2 = ::lime::graphics::opengl::GL_obj::context;
			int tmp3 = func;
			int tmp4 = this->__stencilRef;
			int tmp5 = this->__stencilReadMask;
			tmp2->stencilFunc(tmp3,tmp4,tmp5);
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC5(Context3D_obj,setStencilActions,(void))

Void Context3D_obj::setStencilReferenceValue( int referenceValue,hx::Null< int >  __o_readMask,hx::Null< int >  __o_writeMask){
int readMask = __o_readMask.Default(255);
int writeMask = __o_writeMask.Default(255);
{
		this->__stencilReadMask = readMask;
		this->__stencilRef = referenceValue;
		{
			Dynamic tmp = this->__stencilCompareMode;
			int tmp1 = this->__getGLCompareMode(tmp);
			int func = tmp1;
			::lime::_backend::native::NativeGLRenderContext tmp2 = ::lime::graphics::opengl::GL_obj::context;
			int tmp3 = func;
			int tmp4 = this->__stencilRef;
			int tmp5 = this->__stencilReadMask;
			tmp2->stencilFunc(tmp3,tmp4,tmp5);
		}
		{
			::lime::_backend::native::NativeGLRenderContext tmp = ::lime::graphics::opengl::GL_obj::context;
			int tmp1 = writeMask;
			tmp->stencilMask(tmp1);
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC3(Context3D_obj,setStencilReferenceValue,(void))

Void Context3D_obj::setTextureAt( int sampler,::openfl::display3D::textures::TextureBase texture){
{
		::openfl::_Vector::ObjectVector tmp = this->__samplerTextures;
		int tmp1 = sampler;
		::openfl::display3D::textures::TextureBase tmp2 = tmp->get(tmp1);
		::openfl::display3D::textures::TextureBase tmp3 = tmp2;
		::openfl::display3D::textures::TextureBase tmp4 = texture;
		bool tmp5 = (tmp3 != tmp4);
		if ((tmp5)){
			::openfl::_Vector::ObjectVector tmp6 = this->__samplerTextures;
			int tmp7 = sampler;
			::openfl::display3D::textures::TextureBase tmp8 = texture;
			::openfl::display3D::textures::TextureBase tmp9 = tmp6->set(tmp7,tmp8);
			tmp9;
			int tmp10 = (int((int)1) << int(sampler));
			hx::OrEq(this->__samplerDirty,tmp10);
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(Context3D_obj,setTextureAt,(void))

Void Context3D_obj::setVertexBufferAt( int index,::openfl::display3D::VertexBuffer3D buffer,hx::Null< int >  __o_bufferOffset,Dynamic __o_format){
int bufferOffset = __o_bufferOffset.Default(0);
Dynamic format = __o_format.Default(4);
{
		bool tmp = (buffer == null());
		if ((tmp)){
			{
				::lime::_backend::native::NativeGLRenderContext tmp1 = ::lime::graphics::opengl::GL_obj::context;
				int tmp2 = index;
				tmp1->disableVertexAttribArray(tmp2);
			}
			::openfl::_internal::stage3D::GLUtils_obj::CheckGLError();
			{
				::lime::_backend::native::NativeGLRenderContext tmp1 = ::lime::graphics::opengl::GL_obj::context;
				tmp1->bindBuffer((int)34962,null());
			}
			::openfl::_internal::stage3D::GLUtils_obj::CheckGLError();
			return null();
		}
		{
			::lime::_backend::native::NativeGLRenderContext tmp1 = ::lime::graphics::opengl::GL_obj::context;
			int tmp2 = index;
			tmp1->enableVertexAttribArray(tmp2);
		}
		::openfl::_internal::stage3D::GLUtils_obj::CheckGLError();
		{
			::lime::_backend::native::NativeGLRenderContext tmp1 = ::lime::graphics::opengl::GL_obj::context;
			::lime::graphics::opengl::GLObject tmp2 = buffer->__id;
			tmp1->bindBuffer((int)34962,tmp2);
		}
		::openfl::_internal::stage3D::GLUtils_obj::CheckGLError();
		int tmp1 = (bufferOffset * (int)4);
		int byteOffset = tmp1;
		Dynamic tmp2 = format;
		switch( (int)(tmp2)){
			case (int)0: {
				{
					int tmp3 = byteOffset;
					Float tmp4 = ::lime::utils::_DataPointer::DataPointer_Impl__obj::fromInt(tmp3);
					Float offset = tmp4;
					::lime::_backend::native::NativeGLRenderContext tmp5 = ::lime::graphics::opengl::GL_obj::context;
					int tmp6 = index;
					int tmp7 = buffer->__stride;
					Float tmp8 = offset;
					tmp5->vertexAttribPointer(tmp6,(int)4,(int)5121,true,tmp7,tmp8);
				}
				::openfl::_internal::stage3D::GLUtils_obj::CheckGLError();
			}
			;break;
			case (int)4: {
				{
					int tmp3 = byteOffset;
					Float tmp4 = ::lime::utils::_DataPointer::DataPointer_Impl__obj::fromInt(tmp3);
					Float offset = tmp4;
					::lime::_backend::native::NativeGLRenderContext tmp5 = ::lime::graphics::opengl::GL_obj::context;
					int tmp6 = index;
					int tmp7 = buffer->__stride;
					Float tmp8 = offset;
					tmp5->vertexAttribPointer(tmp6,(int)4,(int)5126,false,tmp7,tmp8);
				}
				::openfl::_internal::stage3D::GLUtils_obj::CheckGLError();
			}
			;break;
			case (int)3: {
				{
					int tmp3 = byteOffset;
					Float tmp4 = ::lime::utils::_DataPointer::DataPointer_Impl__obj::fromInt(tmp3);
					Float offset = tmp4;
					::lime::_backend::native::NativeGLRenderContext tmp5 = ::lime::graphics::opengl::GL_obj::context;
					int tmp6 = index;
					int tmp7 = buffer->__stride;
					Float tmp8 = offset;
					tmp5->vertexAttribPointer(tmp6,(int)3,(int)5126,false,tmp7,tmp8);
				}
				::openfl::_internal::stage3D::GLUtils_obj::CheckGLError();
			}
			;break;
			case (int)2: {
				{
					int tmp3 = byteOffset;
					Float tmp4 = ::lime::utils::_DataPointer::DataPointer_Impl__obj::fromInt(tmp3);
					Float offset = tmp4;
					::lime::_backend::native::NativeGLRenderContext tmp5 = ::lime::graphics::opengl::GL_obj::context;
					int tmp6 = index;
					int tmp7 = buffer->__stride;
					Float tmp8 = offset;
					tmp5->vertexAttribPointer(tmp6,(int)2,(int)5126,false,tmp7,tmp8);
				}
				::openfl::_internal::stage3D::GLUtils_obj::CheckGLError();
			}
			;break;
			case (int)1: {
				{
					int tmp3 = byteOffset;
					Float tmp4 = ::lime::utils::_DataPointer::DataPointer_Impl__obj::fromInt(tmp3);
					Float offset = tmp4;
					::lime::_backend::native::NativeGLRenderContext tmp5 = ::lime::graphics::opengl::GL_obj::context;
					int tmp6 = index;
					int tmp7 = buffer->__stride;
					Float tmp8 = offset;
					tmp5->vertexAttribPointer(tmp6,(int)1,(int)5126,false,tmp7,tmp8);
				}
				::openfl::_internal::stage3D::GLUtils_obj::CheckGLError();
			}
			;break;
			default: {
				::openfl::errors::IllegalOperationError tmp3 = ::openfl::errors::IllegalOperationError_obj::__new(null());
				HX_STACK_DO_THROW(tmp3);
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC4(Context3D_obj,setVertexBufferAt,(void))

Void Context3D_obj::__flushSamplerState( ){
{
		int sampler = (int)0;
		while((true)){
			int tmp = this->__samplerDirty;
			bool tmp1 = (tmp != (int)0);
			bool tmp2 = !(tmp1);
			if ((tmp2)){
				break;
			}
			int tmp3 = this->__samplerDirty;
			int tmp4 = (int((int)1) << int(sampler));
			int tmp5 = (int(tmp3) & int(tmp4));
			bool tmp6 = (tmp5 != (int)0);
			if ((tmp6)){
				::openfl::_internal::stage3D::Context3DStateCache tmp7 = ::openfl::display3D::Context3D_obj::__stateCache;
				int tmp8 = sampler;
				bool tmp9 = tmp7->updateActiveTextureSample(tmp8);
				if ((tmp9)){
					{
						::lime::_backend::native::NativeGLRenderContext tmp10 = ::lime::graphics::opengl::GL_obj::context;
						int tmp11 = ((int)33984 + sampler);
						tmp10->activeTexture(tmp11);
					}
					::openfl::_internal::stage3D::GLUtils_obj::CheckGLError();
				}
				::openfl::_Vector::ObjectVector tmp10 = this->__samplerTextures;
				int tmp11 = sampler;
				::openfl::display3D::textures::TextureBase tmp12 = tmp10->get(tmp11);
				::openfl::display3D::textures::TextureBase texture = tmp12;
				bool tmp13 = (texture != null());
				if ((tmp13)){
					int target = texture->__textureTarget;
					{
						::lime::graphics::opengl::GLObject tmp14 = texture->__getTexture();
						::lime::graphics::opengl::GLObject texture1 = tmp14;
						::lime::_backend::native::NativeGLRenderContext tmp15 = ::lime::graphics::opengl::GL_obj::context;
						int tmp16 = target;
						::lime::graphics::opengl::GLObject tmp17 = texture1;
						tmp15->bindTexture(tmp16,tmp17);
					}
					::openfl::_internal::stage3D::GLUtils_obj::CheckGLError();
					::openfl::_internal::stage3D::SamplerState tmp14 = this->__samplerStates->__get(sampler).StaticCast< ::openfl::_internal::stage3D::SamplerState >();
					texture->__setSamplerState(tmp14);
				}
				else{
					{
						::lime::_backend::native::NativeGLRenderContext tmp14 = ::lime::graphics::opengl::GL_obj::context;
						tmp14->bindTexture((int)3553,null());
					}
					::openfl::_internal::stage3D::GLUtils_obj::CheckGLError();
				}
				int tmp14 = (int((int)1) << int(sampler));
				int tmp15 = ~(int)(tmp14);
				hx::AndEq(this->__samplerDirty,tmp15);
			}
			(sampler)++;
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(Context3D_obj,__flushSamplerState,(void))

int Context3D_obj::__getGLCompareMode( Dynamic compareMode){
	Dynamic tmp = compareMode;
	int tmp1;
	switch( (int)(tmp)){
		case (int)0: {
			tmp1 = (int)519;
		}
		;break;
		case (int)1: {
			tmp1 = (int)514;
		}
		;break;
		case (int)2: {
			tmp1 = (int)516;
		}
		;break;
		case (int)3: {
			tmp1 = (int)518;
		}
		;break;
		case (int)4: {
			tmp1 = (int)513;
		}
		;break;
		case (int)5: {
			tmp1 = (int)515;
		}
		;break;
		case (int)6: {
			tmp1 = (int)512;
		}
		;break;
		case (int)7: {
			tmp1 = (int)517;
		}
		;break;
		default: {
			tmp1 = (int)514;
		}
	}
	return tmp1;
}


HX_DEFINE_DYNAMIC_FUNC1(Context3D_obj,__getGLCompareMode,return )

int Context3D_obj::__getGLStencilAction( Dynamic stencilAction){
	Dynamic tmp = stencilAction;
	int tmp1;
	switch( (int)(tmp)){
		case (int)0: {
			tmp1 = (int)7683;
		}
		;break;
		case (int)1: {
			tmp1 = (int)34056;
		}
		;break;
		case (int)2: {
			tmp1 = (int)7682;
		}
		;break;
		case (int)3: {
			tmp1 = (int)34055;
		}
		;break;
		case (int)4: {
			tmp1 = (int)5386;
		}
		;break;
		case (int)5: {
			tmp1 = (int)7680;
		}
		;break;
		case (int)6: {
			tmp1 = (int)7681;
		}
		;break;
		case (int)7: {
			tmp1 = (int)0;
		}
		;break;
		default: {
			tmp1 = (int)7680;
		}
	}
	return tmp1;
}


HX_DEFINE_DYNAMIC_FUNC1(Context3D_obj,__getGLStencilAction,return )

bool Context3D_obj::__hasGLExtension( ::String name){
	::lime::_backend::native::NativeGLRenderContext tmp = ::lime::graphics::opengl::GL_obj::context;
	::String tmp1 = name;
	int tmp2 = tmp->getSupportedExtensions()->indexOf(tmp1,null());
	bool tmp3 = (tmp2 != (int)-1);
	return tmp3;
}


HX_DEFINE_DYNAMIC_FUNC1(Context3D_obj,__hasGLExtension,return )

Void Context3D_obj::__setViewport( int originX,int originY,int width,int height){
{
		::openfl::display3D::textures::TextureBase tmp = this->__renderToTexture;
		bool tmp1 = (tmp != null());
		if ((tmp1)){
			hx::MultEq(originY,(int)-1);
		}
		::openfl::_internal::stage3D::Context3DStateCache tmp2 = ::openfl::display3D::Context3D_obj::__stateCache;
		int tmp3 = originX;
		int tmp4 = originY;
		int tmp5 = width;
		int tmp6 = height;
		bool tmp7 = tmp2->updateViewport(tmp3,tmp4,tmp5,tmp6);
		if ((tmp7)){
			{
				::lime::_backend::native::NativeGLRenderContext tmp8 = ::lime::graphics::opengl::GL_obj::context;
				int tmp9 = originX;
				int tmp10 = originY;
				int tmp11 = width;
				int tmp12 = height;
				tmp8->viewport(tmp9,tmp10,tmp11,tmp12);
			}
			::openfl::_internal::stage3D::GLUtils_obj::CheckGLError();
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC4(Context3D_obj,__setViewport,(void))

int Context3D_obj::__statsAdd( int stat,int value){
	{
		int _g = stat;
		{
			::openfl::_Vector::IntVector tmp = this->__stats;
			int tmp1 = _g;
			int tmp2 = tmp->get(tmp1);
			int tmp3 = tmp2;
			int tmp4 = value;
			int tmp5 = (tmp3 + tmp4);
			int value1 = tmp5;
			::openfl::_Vector::IntVector tmp6 = this->__stats;
			int tmp7 = _g;
			int tmp8 = value1;
			tmp6->set(tmp7,tmp8);
		}
	}
	::openfl::_Vector::IntVector tmp = this->__stats;
	int tmp1 = stat;
	int tmp2 = tmp->get(tmp1);
	int tmp3 = tmp2;
	return tmp3;
}


HX_DEFINE_DYNAMIC_FUNC2(Context3D_obj,__statsAdd,return )

Void Context3D_obj::__statsClear( int stat){
{
		::openfl::_Vector::IntVector tmp = this->__stats;
		int tmp1 = stat;
		int tmp2 = tmp->set(tmp1,(int)0);
		tmp2;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Context3D_obj,__statsClear,(void))

Void Context3D_obj::__statsDecrement( int stat){
{
		int _g = stat;
		{
			::openfl::_Vector::IntVector tmp = this->__stats;
			int tmp1 = _g;
			int tmp2 = tmp->get(tmp1);
			int tmp3 = tmp2;
			int tmp4 = (tmp3 - (int)1);
			int value = tmp4;
			::openfl::_Vector::IntVector tmp5 = this->__stats;
			int tmp6 = _g;
			int tmp7 = value;
			tmp5->set(tmp6,tmp7);
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Context3D_obj,__statsDecrement,(void))

Void Context3D_obj::__statsIncrement( int stat){
{
		int _g = stat;
		{
			::openfl::_Vector::IntVector tmp = this->__stats;
			int tmp1 = _g;
			int tmp2 = tmp->get(tmp1);
			int tmp3 = tmp2;
			int tmp4 = (tmp3 + (int)1);
			int value = tmp4;
			::openfl::_Vector::IntVector tmp5 = this->__stats;
			int tmp6 = _g;
			int tmp7 = value;
			tmp5->set(tmp6,tmp7);
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Context3D_obj,__statsIncrement,(void))

Void Context3D_obj::__statsSendToTelemetry( ){
{
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(Context3D_obj,__statsSendToTelemetry,(void))

int Context3D_obj::__statsSubtract( int stat,int value){
	{
		int _g = stat;
		{
			::openfl::_Vector::IntVector tmp = this->__stats;
			int tmp1 = _g;
			int tmp2 = tmp->get(tmp1);
			int tmp3 = tmp2;
			int tmp4 = value;
			int tmp5 = (tmp3 - tmp4);
			int value1 = tmp5;
			::openfl::_Vector::IntVector tmp6 = this->__stats;
			int tmp7 = _g;
			int tmp8 = value1;
			tmp6->set(tmp7,tmp8);
		}
	}
	::openfl::_Vector::IntVector tmp = this->__stats;
	int tmp1 = stat;
	int tmp2 = tmp->get(tmp1);
	int tmp3 = tmp2;
	return tmp3;
}


HX_DEFINE_DYNAMIC_FUNC2(Context3D_obj,__statsSubtract,return )

Void Context3D_obj::__updateDepthAndStencilState( ){
{
		::openfl::display3D::textures::TextureBase tmp = this->__renderToTexture;
		bool tmp1 = (tmp != null());
		bool tmp2;
		if ((tmp1)){
			tmp2 = this->__rttDepthAndStencil;
		}
		else{
			tmp2 = this->__backBufferEnableDepthAndStencil;
		}
		bool depthAndStencil = tmp2;
		bool tmp3 = depthAndStencil;
		if ((tmp3)){
			{
				::lime::_backend::native::NativeGLRenderContext tmp4 = ::lime::graphics::opengl::GL_obj::context;
				tmp4->enable((int)2929);
			}
			::openfl::_internal::stage3D::GLUtils_obj::CheckGLError();
			{
				::lime::_backend::native::NativeGLRenderContext tmp4 = ::lime::graphics::opengl::GL_obj::context;
				tmp4->enable((int)2960);
			}
			::openfl::_internal::stage3D::GLUtils_obj::CheckGLError();
		}
		else{
			{
				::lime::_backend::native::NativeGLRenderContext tmp4 = ::lime::graphics::opengl::GL_obj::context;
				tmp4->disable((int)2929);
			}
			::openfl::_internal::stage3D::GLUtils_obj::CheckGLError();
			{
				::lime::_backend::native::NativeGLRenderContext tmp4 = ::lime::graphics::opengl::GL_obj::context;
				tmp4->disable((int)2960);
			}
			::openfl::_internal::stage3D::GLUtils_obj::CheckGLError();
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(Context3D_obj,__updateDepthAndStencilState,(void))

Void Context3D_obj::__updateBlendFactors( ){
{
		::openfl::_internal::stage3D::Context3DStateCache tmp = ::openfl::display3D::Context3D_obj::__stateCache;
		Dynamic tmp1 = tmp->_srcBlendFactor;
		bool tmp2 = (tmp1 == null());
		bool tmp3 = !(tmp2);
		bool tmp4;
		if ((tmp3)){
			::openfl::_internal::stage3D::Context3DStateCache tmp5 = ::openfl::display3D::Context3D_obj::__stateCache;
			::openfl::_internal::stage3D::Context3DStateCache tmp6 = tmp5;
			Dynamic tmp7 = tmp6->_destBlendFactor;
			tmp4 = (tmp7 == null());
		}
		else{
			tmp4 = true;
		}
		if ((tmp4)){
			return null();
		}
		int src = (int)1;
		int dest = (int)0;
		{
			::openfl::_internal::stage3D::Context3DStateCache tmp5 = ::openfl::display3D::Context3D_obj::__stateCache;
			Dynamic _g = tmp5->_srcBlendFactor;
			Dynamic tmp6 = _g;
			switch( (int)(tmp6)){
				case (int)2: {
					src = (int)1;
				}
				;break;
				case (int)9: {
					src = (int)0;
				}
				;break;
				case (int)7: {
					src = (int)770;
				}
				;break;
				case (int)0: {
					src = (int)772;
				}
				;break;
				case (int)1: {
					src = (int)774;
				}
				;break;
				case (int)5: {
					src = (int)771;
				}
				;break;
				case (int)3: {
					src = (int)773;
				}
				;break;
				case (int)4: {
					src = (int)775;
				}
				;break;
				default: {
					::openfl::errors::IllegalOperationError tmp7 = ::openfl::errors::IllegalOperationError_obj::__new(null());
					HX_STACK_DO_THROW(tmp7);
				}
			}
		}
		{
			::openfl::_internal::stage3D::Context3DStateCache tmp5 = ::openfl::display3D::Context3D_obj::__stateCache;
			Dynamic _g = tmp5->_destBlendFactor;
			Dynamic tmp6 = _g;
			switch( (int)(tmp6)){
				case (int)2: {
					dest = (int)1;
				}
				;break;
				case (int)9: {
					dest = (int)0;
				}
				;break;
				case (int)7: {
					dest = (int)770;
				}
				;break;
				case (int)8: {
					dest = (int)768;
				}
				;break;
				case (int)0: {
					dest = (int)772;
				}
				;break;
				case (int)5: {
					dest = (int)771;
				}
				;break;
				case (int)6: {
					dest = (int)769;
				}
				;break;
				case (int)3: {
					dest = (int)773;
				}
				;break;
				default: {
					::openfl::errors::IllegalOperationError tmp7 = ::openfl::errors::IllegalOperationError_obj::__new(null());
					HX_STACK_DO_THROW(tmp7);
				}
			}
		}
		{
			::lime::_backend::native::NativeGLRenderContext tmp5 = ::lime::graphics::opengl::GL_obj::context;
			tmp5->enable((int)3042);
		}
		::openfl::_internal::stage3D::GLUtils_obj::CheckGLError();
		{
			::lime::_backend::native::NativeGLRenderContext tmp5 = ::lime::graphics::opengl::GL_obj::context;
			int tmp6 = src;
			int tmp7 = dest;
			tmp5->blendFunc(tmp6,tmp7);
		}
		::openfl::_internal::stage3D::GLUtils_obj::CheckGLError();
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(Context3D_obj,__updateBlendFactors,(void))

Void Context3D_obj::__updateScissorRectangle( ){
{
		::openfl::geom::Rectangle tmp = this->__scissorRectangle;
		bool tmp1 = (tmp == null());
		if ((tmp1)){
			{
				::lime::_backend::native::NativeGLRenderContext tmp2 = ::lime::graphics::opengl::GL_obj::context;
				tmp2->disable((int)3089);
			}
			::openfl::_internal::stage3D::GLUtils_obj::CheckGLError();
			return null();
		}
		{
			::lime::_backend::native::NativeGLRenderContext tmp2 = ::lime::graphics::opengl::GL_obj::context;
			tmp2->enable((int)3089);
		}
		::openfl::_internal::stage3D::GLUtils_obj::CheckGLError();
		int height = (int)0;
		::openfl::display3D::textures::TextureBase tmp2 = this->__renderToTexture;
		bool tmp3 = (tmp2 != null());
		if ((tmp3)){
			::openfl::display3D::textures::TextureBase tmp4 = this->__renderToTexture;
			bool tmp5 = ::Std_obj::is(tmp4,hx::ClassOf< ::openfl::display3D::textures::Texture >());
			if ((tmp5)){
				::openfl::display3D::textures::TextureBase tmp6 = this->__renderToTexture;
				::openfl::display3D::textures::Texture texture2D = ((::openfl::display3D::textures::Texture)(tmp6));
				height = texture2D->__height;
			}
			else{
				::openfl::display3D::textures::TextureBase tmp6 = this->__renderToTexture;
				bool tmp7 = ::Std_obj::is(tmp6,hx::ClassOf< ::openfl::display3D::textures::RectangleTexture >());
				if ((tmp7)){
					::openfl::display3D::textures::TextureBase tmp8 = this->__renderToTexture;
					::openfl::display3D::textures::RectangleTexture rectTexture = ((::openfl::display3D::textures::RectangleTexture)(tmp8));
					height = rectTexture->__height;
				}
			}
		}
		else{
			int tmp4 = this->backBufferHeight;
			height = tmp4;
		}
		{
			::openfl::geom::Rectangle tmp4 = this->__scissorRectangle;
			Float tmp5 = tmp4->x;
			int tmp6 = ::Std_obj::_int(tmp5);
			int x = tmp6;
			int tmp7 = height;
			::openfl::geom::Rectangle tmp8 = this->__scissorRectangle;
			Float tmp9 = tmp8->y;
			int tmp10 = ::Std_obj::_int(tmp9);
			int tmp11 = (tmp7 - tmp10);
			::openfl::geom::Rectangle tmp12 = this->__scissorRectangle;
			Float tmp13 = tmp12->height;
			int tmp14 = ::Std_obj::_int(tmp13);
			int tmp15 = (tmp11 - tmp14);
			int tmp16 = ::Std_obj::_int(tmp15);
			int y = tmp16;
			::openfl::geom::Rectangle tmp17 = this->__scissorRectangle;
			Float tmp18 = tmp17->width;
			int tmp19 = ::Std_obj::_int(tmp18);
			int width = tmp19;
			::openfl::geom::Rectangle tmp20 = this->__scissorRectangle;
			Float tmp21 = tmp20->height;
			int tmp22 = ::Std_obj::_int(tmp21);
			int height1 = tmp22;
			::lime::_backend::native::NativeGLRenderContext tmp23 = ::lime::graphics::opengl::GL_obj::context;
			int tmp24 = x;
			int tmp25 = y;
			int tmp26 = width;
			int tmp27 = height1;
			tmp23->scissor(tmp24,tmp25,tmp26,tmp27);
		}
		::openfl::_internal::stage3D::GLUtils_obj::CheckGLError();
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(Context3D_obj,__updateScissorRectangle,(void))

Void Context3D_obj::__updateBackbufferViewport( ){
{
		bool tmp = ::openfl::display::Stage3D_obj::__active;
		bool tmp1 = !(tmp);
		if ((tmp1)){
			::openfl::display::Stage3D_obj::__active = true;
			::openfl::_internal::renderer::RenderSession tmp2 = this->__renderSession;
			tmp2->renderer->clear();
		}
		::openfl::display3D::textures::TextureBase tmp2 = this->__renderToTexture;
		bool tmp3 = (tmp2 == null());
		bool tmp4 = tmp3;
		bool tmp5;
		if ((tmp4)){
			int tmp6 = this->backBufferWidth;
			int tmp7 = tmp6;
			int tmp8 = tmp7;
			tmp5 = (tmp8 > (int)0);
		}
		else{
			tmp5 = false;
		}
		bool tmp6;
		if ((tmp5)){
			int tmp7 = this->backBufferHeight;
			int tmp8 = tmp7;
			tmp6 = (tmp8 > (int)0);
		}
		else{
			tmp6 = false;
		}
		if ((tmp6)){
			::openfl::display::Stage3D tmp7 = this->__stage3D;
			Float tmp8 = tmp7->x;
			int tmp9 = ::Std_obj::_int(tmp8);
			::openfl::display::Stage3D tmp10 = this->__stage3D;
			Float tmp11 = tmp10->y;
			int tmp12 = ::Std_obj::_int(tmp11);
			int tmp13 = this->backBufferWidth;
			int tmp14 = this->backBufferHeight;
			this->__setViewport(tmp9,tmp12,tmp13,tmp14);
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(Context3D_obj,__updateBackbufferViewport,(void))

bool Context3D_obj::set_enableErrorChecking( bool value){
	bool tmp = ::openfl::_internal::stage3D::GLUtils_obj::debug = value;
	bool tmp1 = this->enableErrorChecking = tmp;
	return tmp1;
}


HX_DEFINE_DYNAMIC_FUNC1(Context3D_obj,set_enableErrorChecking,return )

bool Context3D_obj::supportsVideoTexture;

int Context3D_obj::MAX_SAMPLERS;

int Context3D_obj::MAX_ATTRIBUTES;

int Context3D_obj::MAX_PROGRAM_REGISTERS;

int Context3D_obj::TEXTURE_MAX_ANISOTROPY_EXT;

int Context3D_obj::DEPTH_STENCIL;

::openfl::_internal::stage3D::Context3DStateCache Context3D_obj::__stateCache;


Context3D_obj::Context3D_obj()
{
}

void Context3D_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(Context3D);
	HX_MARK_MEMBER_NAME(backBufferHeight,"backBufferHeight");
	HX_MARK_MEMBER_NAME(backBufferWidth,"backBufferWidth");
	HX_MARK_MEMBER_NAME(driverInfo,"driverInfo");
	HX_MARK_MEMBER_NAME(enableErrorChecking,"enableErrorChecking");
	HX_MARK_MEMBER_NAME(maxBackBufferHeight,"maxBackBufferHeight");
	HX_MARK_MEMBER_NAME(maxBackBufferWidth,"maxBackBufferWidth");
	HX_MARK_MEMBER_NAME(profile,"profile");
	HX_MARK_MEMBER_NAME(totalGPUMemory,"totalGPUMemory");
	HX_MARK_MEMBER_NAME(__backBufferAntiAlias,"__backBufferAntiAlias");
	HX_MARK_MEMBER_NAME(__backBufferEnableDepthAndStencil,"__backBufferEnableDepthAndStencil");
	HX_MARK_MEMBER_NAME(__backBufferWantsBestResolution,"__backBufferWantsBestResolution");
	HX_MARK_MEMBER_NAME(__depthRenderBuffer,"__depthRenderBuffer");
	HX_MARK_MEMBER_NAME(__depthStencilRenderBuffer,"__depthStencilRenderBuffer");
	HX_MARK_MEMBER_NAME(__fragmentConstants,"__fragmentConstants");
	HX_MARK_MEMBER_NAME(__framebuffer,"__framebuffer");
	HX_MARK_MEMBER_NAME(__frameCount,"__frameCount");
	HX_MARK_MEMBER_NAME(__maxAnisotropyCubeTexture,"__maxAnisotropyCubeTexture");
	HX_MARK_MEMBER_NAME(__maxAnisotropyTexture2D,"__maxAnisotropyTexture2D");
	HX_MARK_MEMBER_NAME(__positionScale,"__positionScale");
	HX_MARK_MEMBER_NAME(__program,"__program");
	HX_MARK_MEMBER_NAME(__renderSession,"__renderSession");
	HX_MARK_MEMBER_NAME(__renderToTexture,"__renderToTexture");
	HX_MARK_MEMBER_NAME(__rttDepthAndStencil,"__rttDepthAndStencil");
	HX_MARK_MEMBER_NAME(__samplerDirty,"__samplerDirty");
	HX_MARK_MEMBER_NAME(__samplerTextures,"__samplerTextures");
	HX_MARK_MEMBER_NAME(__samplerStates,"__samplerStates");
	HX_MARK_MEMBER_NAME(__scissorRectangle,"__scissorRectangle");
	HX_MARK_MEMBER_NAME(__stage3D,"__stage3D");
	HX_MARK_MEMBER_NAME(__stats,"__stats");
	HX_MARK_MEMBER_NAME(__statsCache,"__statsCache");
	HX_MARK_MEMBER_NAME(__stencilCompareMode,"__stencilCompareMode");
	HX_MARK_MEMBER_NAME(__stencilRef,"__stencilRef");
	HX_MARK_MEMBER_NAME(__stencilReadMask,"__stencilReadMask");
	HX_MARK_MEMBER_NAME(__stencilRenderBuffer,"__stencilRenderBuffer");
	HX_MARK_MEMBER_NAME(__supportsAnisotropicFiltering,"__supportsAnisotropicFiltering");
	HX_MARK_MEMBER_NAME(__supportsPackedDepthStencil,"__supportsPackedDepthStencil");
	HX_MARK_MEMBER_NAME(__vertexConstants,"__vertexConstants");
	::openfl::events::EventDispatcher_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void Context3D_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(backBufferHeight,"backBufferHeight");
	HX_VISIT_MEMBER_NAME(backBufferWidth,"backBufferWidth");
	HX_VISIT_MEMBER_NAME(driverInfo,"driverInfo");
	HX_VISIT_MEMBER_NAME(enableErrorChecking,"enableErrorChecking");
	HX_VISIT_MEMBER_NAME(maxBackBufferHeight,"maxBackBufferHeight");
	HX_VISIT_MEMBER_NAME(maxBackBufferWidth,"maxBackBufferWidth");
	HX_VISIT_MEMBER_NAME(profile,"profile");
	HX_VISIT_MEMBER_NAME(totalGPUMemory,"totalGPUMemory");
	HX_VISIT_MEMBER_NAME(__backBufferAntiAlias,"__backBufferAntiAlias");
	HX_VISIT_MEMBER_NAME(__backBufferEnableDepthAndStencil,"__backBufferEnableDepthAndStencil");
	HX_VISIT_MEMBER_NAME(__backBufferWantsBestResolution,"__backBufferWantsBestResolution");
	HX_VISIT_MEMBER_NAME(__depthRenderBuffer,"__depthRenderBuffer");
	HX_VISIT_MEMBER_NAME(__depthStencilRenderBuffer,"__depthStencilRenderBuffer");
	HX_VISIT_MEMBER_NAME(__fragmentConstants,"__fragmentConstants");
	HX_VISIT_MEMBER_NAME(__framebuffer,"__framebuffer");
	HX_VISIT_MEMBER_NAME(__frameCount,"__frameCount");
	HX_VISIT_MEMBER_NAME(__maxAnisotropyCubeTexture,"__maxAnisotropyCubeTexture");
	HX_VISIT_MEMBER_NAME(__maxAnisotropyTexture2D,"__maxAnisotropyTexture2D");
	HX_VISIT_MEMBER_NAME(__positionScale,"__positionScale");
	HX_VISIT_MEMBER_NAME(__program,"__program");
	HX_VISIT_MEMBER_NAME(__renderSession,"__renderSession");
	HX_VISIT_MEMBER_NAME(__renderToTexture,"__renderToTexture");
	HX_VISIT_MEMBER_NAME(__rttDepthAndStencil,"__rttDepthAndStencil");
	HX_VISIT_MEMBER_NAME(__samplerDirty,"__samplerDirty");
	HX_VISIT_MEMBER_NAME(__samplerTextures,"__samplerTextures");
	HX_VISIT_MEMBER_NAME(__samplerStates,"__samplerStates");
	HX_VISIT_MEMBER_NAME(__scissorRectangle,"__scissorRectangle");
	HX_VISIT_MEMBER_NAME(__stage3D,"__stage3D");
	HX_VISIT_MEMBER_NAME(__stats,"__stats");
	HX_VISIT_MEMBER_NAME(__statsCache,"__statsCache");
	HX_VISIT_MEMBER_NAME(__stencilCompareMode,"__stencilCompareMode");
	HX_VISIT_MEMBER_NAME(__stencilRef,"__stencilRef");
	HX_VISIT_MEMBER_NAME(__stencilReadMask,"__stencilReadMask");
	HX_VISIT_MEMBER_NAME(__stencilRenderBuffer,"__stencilRenderBuffer");
	HX_VISIT_MEMBER_NAME(__supportsAnisotropicFiltering,"__supportsAnisotropicFiltering");
	HX_VISIT_MEMBER_NAME(__supportsPackedDepthStencil,"__supportsPackedDepthStencil");
	HX_VISIT_MEMBER_NAME(__vertexConstants,"__vertexConstants");
	::openfl::events::EventDispatcher_obj::__Visit(HX_VISIT_ARG);
}

Dynamic Context3D_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"clear") ) { return clear_dyn(); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"profile") ) { return profile; }
		if (HX_FIELD_EQ(inName,"__stats") ) { return __stats; }
		if (HX_FIELD_EQ(inName,"dispose") ) { return dispose_dyn(); }
		if (HX_FIELD_EQ(inName,"present") ) { return present_dyn(); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"__program") ) { return __program; }
		if (HX_FIELD_EQ(inName,"__stage3D") ) { return __stage3D; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"driverInfo") ) { return driverInfo; }
		if (HX_FIELD_EQ(inName,"setCulling") ) { return setCulling_dyn(); }
		if (HX_FIELD_EQ(inName,"setProgram") ) { return setProgram_dyn(); }
		if (HX_FIELD_EQ(inName,"__statsAdd") ) { return __statsAdd_dyn(); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"__frameCount") ) { return __frameCount; }
		if (HX_FIELD_EQ(inName,"__statsCache") ) { return __statsCache; }
		if (HX_FIELD_EQ(inName,"__stencilRef") ) { return __stencilRef; }
		if (HX_FIELD_EQ(inName,"setColorMask") ) { return setColorMask_dyn(); }
		if (HX_FIELD_EQ(inName,"setDepthTest") ) { return setDepthTest_dyn(); }
		if (HX_FIELD_EQ(inName,"setTextureAt") ) { return setTextureAt_dyn(); }
		if (HX_FIELD_EQ(inName,"__statsClear") ) { return __statsClear_dyn(); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"__framebuffer") ) { return __framebuffer; }
		if (HX_FIELD_EQ(inName,"createProgram") ) { return createProgram_dyn(); }
		if (HX_FIELD_EQ(inName,"createTexture") ) { return createTexture_dyn(); }
		if (HX_FIELD_EQ(inName,"drawTriangles") ) { return drawTriangles_dyn(); }
		if (HX_FIELD_EQ(inName,"__setViewport") ) { return __setViewport_dyn(); }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"totalGPUMemory") ) { return totalGPUMemory; }
		if (HX_FIELD_EQ(inName,"__samplerDirty") ) { return __samplerDirty; }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"backBufferWidth") ) { return backBufferWidth; }
		if (HX_FIELD_EQ(inName,"__positionScale") ) { return __positionScale; }
		if (HX_FIELD_EQ(inName,"__renderSession") ) { return __renderSession; }
		if (HX_FIELD_EQ(inName,"__samplerStates") ) { return __samplerStates; }
		if (HX_FIELD_EQ(inName,"setBlendFactors") ) { return setBlendFactors_dyn(); }
		if (HX_FIELD_EQ(inName,"__statsSubtract") ) { return __statsSubtract_dyn(); }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"backBufferHeight") ) { return backBufferHeight; }
		if (HX_FIELD_EQ(inName,"drawToBitmapData") ) { return drawToBitmapData_dyn(); }
		if (HX_FIELD_EQ(inName,"__hasGLExtension") ) { return __hasGLExtension_dyn(); }
		if (HX_FIELD_EQ(inName,"__statsDecrement") ) { return __statsDecrement_dyn(); }
		if (HX_FIELD_EQ(inName,"__statsIncrement") ) { return __statsIncrement_dyn(); }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"__renderToTexture") ) { return __renderToTexture; }
		if (HX_FIELD_EQ(inName,"__samplerTextures") ) { return __samplerTextures; }
		if (HX_FIELD_EQ(inName,"__stencilReadMask") ) { return __stencilReadMask; }
		if (HX_FIELD_EQ(inName,"__vertexConstants") ) { return __vertexConstants; }
		if (HX_FIELD_EQ(inName,"createCubeTexture") ) { return createCubeTexture_dyn(); }
		if (HX_FIELD_EQ(inName,"createIndexBuffer") ) { return createIndexBuffer_dyn(); }
		if (HX_FIELD_EQ(inName,"setSamplerStateAt") ) { return setSamplerStateAt_dyn(); }
		if (HX_FIELD_EQ(inName,"setStencilActions") ) { return setStencilActions_dyn(); }
		if (HX_FIELD_EQ(inName,"setVertexBufferAt") ) { return setVertexBufferAt_dyn(); }
		break;
	case 18:
		if (HX_FIELD_EQ(inName,"maxBackBufferWidth") ) { return maxBackBufferWidth; }
		if (HX_FIELD_EQ(inName,"__scissorRectangle") ) { return __scissorRectangle; }
		if (HX_FIELD_EQ(inName,"createVertexBuffer") ) { return createVertexBuffer_dyn(); }
		if (HX_FIELD_EQ(inName,"createVideoTexture") ) { return createVideoTexture_dyn(); }
		if (HX_FIELD_EQ(inName,"setRenderToTexture") ) { return setRenderToTexture_dyn(); }
		if (HX_FIELD_EQ(inName,"__getGLCompareMode") ) { return __getGLCompareMode_dyn(); }
		break;
	case 19:
		if (HX_FIELD_EQ(inName,"enableErrorChecking") ) { return enableErrorChecking; }
		if (HX_FIELD_EQ(inName,"maxBackBufferHeight") ) { return maxBackBufferHeight; }
		if (HX_FIELD_EQ(inName,"__depthRenderBuffer") ) { return __depthRenderBuffer; }
		if (HX_FIELD_EQ(inName,"__fragmentConstants") ) { return __fragmentConstants; }
		if (HX_FIELD_EQ(inName,"configureBackBuffer") ) { return configureBackBuffer_dyn(); }
		if (HX_FIELD_EQ(inName,"setScissorRectangle") ) { return setScissorRectangle_dyn(); }
		if (HX_FIELD_EQ(inName,"__flushSamplerState") ) { return __flushSamplerState_dyn(); }
		break;
	case 20:
		if (HX_FIELD_EQ(inName,"__rttDepthAndStencil") ) { return __rttDepthAndStencil; }
		if (HX_FIELD_EQ(inName,"__stencilCompareMode") ) { return __stencilCompareMode; }
		if (HX_FIELD_EQ(inName,"__getGLStencilAction") ) { return __getGLStencilAction_dyn(); }
		if (HX_FIELD_EQ(inName,"__updateBlendFactors") ) { return __updateBlendFactors_dyn(); }
		break;
	case 21:
		if (HX_FIELD_EQ(inName,"__backBufferAntiAlias") ) { return __backBufferAntiAlias; }
		if (HX_FIELD_EQ(inName,"__stencilRenderBuffer") ) { return __stencilRenderBuffer; }
		if (HX_FIELD_EQ(inName,"setRenderToBackBuffer") ) { return setRenderToBackBuffer_dyn(); }
		break;
	case 22:
		if (HX_FIELD_EQ(inName,"createRectangleTexture") ) { return createRectangleTexture_dyn(); }
		if (HX_FIELD_EQ(inName,"__statsSendToTelemetry") ) { return __statsSendToTelemetry_dyn(); }
		break;
	case 23:
		if (HX_FIELD_EQ(inName,"set_enableErrorChecking") ) { return set_enableErrorChecking_dyn(); }
		break;
	case 24:
		if (HX_FIELD_EQ(inName,"__maxAnisotropyTexture2D") ) { return __maxAnisotropyTexture2D; }
		if (HX_FIELD_EQ(inName,"setStencilReferenceValue") ) { return setStencilReferenceValue_dyn(); }
		if (HX_FIELD_EQ(inName,"__updateScissorRectangle") ) { return __updateScissorRectangle_dyn(); }
		break;
	case 26:
		if (HX_FIELD_EQ(inName,"__depthStencilRenderBuffer") ) { return __depthStencilRenderBuffer; }
		if (HX_FIELD_EQ(inName,"__maxAnisotropyCubeTexture") ) { return __maxAnisotropyCubeTexture; }
		if (HX_FIELD_EQ(inName,"__updateBackbufferViewport") ) { return __updateBackbufferViewport_dyn(); }
		break;
	case 28:
		if (HX_FIELD_EQ(inName,"__supportsPackedDepthStencil") ) { return __supportsPackedDepthStencil; }
		if (HX_FIELD_EQ(inName,"__updateDepthAndStencilState") ) { return __updateDepthAndStencilState_dyn(); }
		break;
	case 29:
		if (HX_FIELD_EQ(inName,"setProgramConstantsFromMatrix") ) { return setProgramConstantsFromMatrix_dyn(); }
		if (HX_FIELD_EQ(inName,"setProgramConstantsFromVector") ) { return setProgramConstantsFromVector_dyn(); }
		break;
	case 30:
		if (HX_FIELD_EQ(inName,"__supportsAnisotropicFiltering") ) { return __supportsAnisotropicFiltering; }
		break;
	case 31:
		if (HX_FIELD_EQ(inName,"__backBufferWantsBestResolution") ) { return __backBufferWantsBestResolution; }
		break;
	case 32:
		if (HX_FIELD_EQ(inName,"setProgramConstantsFromByteArray") ) { return setProgramConstantsFromByteArray_dyn(); }
		break;
	case 33:
		if (HX_FIELD_EQ(inName,"__backBufferEnableDepthAndStencil") ) { return __backBufferEnableDepthAndStencil; }
	}
	return super::__Field(inName,inCallProp);
}

bool Context3D_obj::__GetStatic(const ::String &inName, Dynamic &outValue, hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 12:
		if (HX_FIELD_EQ(inName,"__stateCache") ) { outValue = __stateCache; return true;  }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"DEPTH_STENCIL") ) { outValue = DEPTH_STENCIL; return true;  }
		break;
	case 20:
		if (HX_FIELD_EQ(inName,"supportsVideoTexture") ) { outValue = supportsVideoTexture; return true;  }
		break;
	case 26:
		if (HX_FIELD_EQ(inName,"TEXTURE_MAX_ANISOTROPY_EXT") ) { outValue = TEXTURE_MAX_ANISOTROPY_EXT; return true;  }
	}
	return false;
}

Dynamic Context3D_obj::__SetField(const ::String &inName,const Dynamic &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 7:
		if (HX_FIELD_EQ(inName,"profile") ) { profile=inValue.Cast< Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"__stats") ) { __stats=inValue.Cast< ::openfl::_Vector::IntVector >(); return inValue; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"__program") ) { __program=inValue.Cast< ::openfl::display3D::Program3D >(); return inValue; }
		if (HX_FIELD_EQ(inName,"__stage3D") ) { __stage3D=inValue.Cast< ::openfl::display::Stage3D >(); return inValue; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"driverInfo") ) { driverInfo=inValue.Cast< ::String >(); return inValue; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"__frameCount") ) { __frameCount=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"__statsCache") ) { __statsCache=inValue.Cast< ::openfl::_Vector::IntVector >(); return inValue; }
		if (HX_FIELD_EQ(inName,"__stencilRef") ) { __stencilRef=inValue.Cast< int >(); return inValue; }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"__framebuffer") ) { __framebuffer=inValue.Cast< ::lime::graphics::opengl::GLObject >(); return inValue; }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"totalGPUMemory") ) { totalGPUMemory=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"__samplerDirty") ) { __samplerDirty=inValue.Cast< int >(); return inValue; }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"backBufferWidth") ) { backBufferWidth=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"__positionScale") ) { __positionScale=inValue.Cast< ::lime::utils::ArrayBufferView >(); return inValue; }
		if (HX_FIELD_EQ(inName,"__renderSession") ) { __renderSession=inValue.Cast< ::openfl::_internal::renderer::RenderSession >(); return inValue; }
		if (HX_FIELD_EQ(inName,"__samplerStates") ) { __samplerStates=inValue.Cast< Array< ::Dynamic > >(); return inValue; }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"backBufferHeight") ) { backBufferHeight=inValue.Cast< int >(); return inValue; }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"__renderToTexture") ) { __renderToTexture=inValue.Cast< ::openfl::display3D::textures::TextureBase >(); return inValue; }
		if (HX_FIELD_EQ(inName,"__samplerTextures") ) { __samplerTextures=inValue.Cast< ::openfl::_Vector::ObjectVector >(); return inValue; }
		if (HX_FIELD_EQ(inName,"__stencilReadMask") ) { __stencilReadMask=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"__vertexConstants") ) { __vertexConstants=inValue.Cast< ::lime::utils::ArrayBufferView >(); return inValue; }
		break;
	case 18:
		if (HX_FIELD_EQ(inName,"maxBackBufferWidth") ) { maxBackBufferWidth=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"__scissorRectangle") ) { __scissorRectangle=inValue.Cast< ::openfl::geom::Rectangle >(); return inValue; }
		break;
	case 19:
		if (HX_FIELD_EQ(inName,"enableErrorChecking") ) { if (inCallProp == hx::paccAlways) return set_enableErrorChecking(inValue);enableErrorChecking=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"maxBackBufferHeight") ) { maxBackBufferHeight=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"__depthRenderBuffer") ) { __depthRenderBuffer=inValue.Cast< ::lime::graphics::opengl::GLObject >(); return inValue; }
		if (HX_FIELD_EQ(inName,"__fragmentConstants") ) { __fragmentConstants=inValue.Cast< ::lime::utils::ArrayBufferView >(); return inValue; }
		break;
	case 20:
		if (HX_FIELD_EQ(inName,"__rttDepthAndStencil") ) { __rttDepthAndStencil=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"__stencilCompareMode") ) { __stencilCompareMode=inValue.Cast< Dynamic >(); return inValue; }
		break;
	case 21:
		if (HX_FIELD_EQ(inName,"__backBufferAntiAlias") ) { __backBufferAntiAlias=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"__stencilRenderBuffer") ) { __stencilRenderBuffer=inValue.Cast< ::lime::graphics::opengl::GLObject >(); return inValue; }
		break;
	case 24:
		if (HX_FIELD_EQ(inName,"__maxAnisotropyTexture2D") ) { __maxAnisotropyTexture2D=inValue.Cast< int >(); return inValue; }
		break;
	case 26:
		if (HX_FIELD_EQ(inName,"__depthStencilRenderBuffer") ) { __depthStencilRenderBuffer=inValue.Cast< ::lime::graphics::opengl::GLObject >(); return inValue; }
		if (HX_FIELD_EQ(inName,"__maxAnisotropyCubeTexture") ) { __maxAnisotropyCubeTexture=inValue.Cast< int >(); return inValue; }
		break;
	case 28:
		if (HX_FIELD_EQ(inName,"__supportsPackedDepthStencil") ) { __supportsPackedDepthStencil=inValue.Cast< bool >(); return inValue; }
		break;
	case 30:
		if (HX_FIELD_EQ(inName,"__supportsAnisotropicFiltering") ) { __supportsAnisotropicFiltering=inValue.Cast< bool >(); return inValue; }
		break;
	case 31:
		if (HX_FIELD_EQ(inName,"__backBufferWantsBestResolution") ) { __backBufferWantsBestResolution=inValue.Cast< bool >(); return inValue; }
		break;
	case 33:
		if (HX_FIELD_EQ(inName,"__backBufferEnableDepthAndStencil") ) { __backBufferEnableDepthAndStencil=inValue.Cast< bool >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

bool Context3D_obj::__SetStatic(const ::String &inName,Dynamic &ioValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 12:
		if (HX_FIELD_EQ(inName,"__stateCache") ) { __stateCache=ioValue.Cast< ::openfl::_internal::stage3D::Context3DStateCache >(); return true; }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"DEPTH_STENCIL") ) { DEPTH_STENCIL=ioValue.Cast< int >(); return true; }
		break;
	case 20:
		if (HX_FIELD_EQ(inName,"supportsVideoTexture") ) { supportsVideoTexture=ioValue.Cast< bool >(); return true; }
		break;
	case 26:
		if (HX_FIELD_EQ(inName,"TEXTURE_MAX_ANISOTROPY_EXT") ) { TEXTURE_MAX_ANISOTROPY_EXT=ioValue.Cast< int >(); return true; }
	}
	return false;
}

void Context3D_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("backBufferHeight","\xce","\x3d","\x76","\xf3"));
	outFields->push(HX_HCSTRING("backBufferWidth","\xff","\xf9","\x53","\x8c"));
	outFields->push(HX_HCSTRING("driverInfo","\xb6","\x18","\x7b","\xe3"));
	outFields->push(HX_HCSTRING("enableErrorChecking","\x7f","\x3c","\x19","\xba"));
	outFields->push(HX_HCSTRING("maxBackBufferHeight","\x92","\xac","\x2a","\x8e"));
	outFields->push(HX_HCSTRING("maxBackBufferWidth","\xbb","\x8f","\x62","\xbe"));
	outFields->push(HX_HCSTRING("profile","\x29","\x49","\x49","\xf3"));
	outFields->push(HX_HCSTRING("totalGPUMemory","\xe9","\x89","\x1b","\x9c"));
	outFields->push(HX_HCSTRING("__backBufferAntiAlias","\xe7","\x9b","\x20","\xbd"));
	outFields->push(HX_HCSTRING("__backBufferEnableDepthAndStencil","\x5e","\x16","\x47","\xce"));
	outFields->push(HX_HCSTRING("__backBufferWantsBestResolution","\x0c","\x81","\x2c","\xec"));
	outFields->push(HX_HCSTRING("__depthRenderBuffer","\x79","\x1f","\xfe","\x32"));
	outFields->push(HX_HCSTRING("__depthStencilRenderBuffer","\xef","\x9c","\xa8","\x76"));
	outFields->push(HX_HCSTRING("__fragmentConstants","\x7f","\xa5","\xa6","\x65"));
	outFields->push(HX_HCSTRING("__framebuffer","\xcd","\x55","\xc0","\xc2"));
	outFields->push(HX_HCSTRING("__frameCount","\x82","\xf4","\x1c","\x66"));
	outFields->push(HX_HCSTRING("__maxAnisotropyCubeTexture","\x60","\x25","\x1d","\x14"));
	outFields->push(HX_HCSTRING("__maxAnisotropyTexture2D","\xe7","\xc7","\xc4","\xba"));
	outFields->push(HX_HCSTRING("__positionScale","\x01","\xd2","\x7f","\x6a"));
	outFields->push(HX_HCSTRING("__program","\x64","\x9b","\x47","\x75"));
	outFields->push(HX_HCSTRING("__renderSession","\x80","\xc3","\x37","\x17"));
	outFields->push(HX_HCSTRING("__renderToTexture","\x4a","\x8b","\x77","\x3a"));
	outFields->push(HX_HCSTRING("__rttDepthAndStencil","\x96","\x47","\x37","\xce"));
	outFields->push(HX_HCSTRING("__samplerDirty","\x0a","\x41","\x45","\x32"));
	outFields->push(HX_HCSTRING("__samplerTextures","\x40","\xf1","\xfc","\x14"));
	outFields->push(HX_HCSTRING("__samplerStates","\x4a","\xc1","\xd9","\x13"));
	outFields->push(HX_HCSTRING("__scissorRectangle","\x93","\x3b","\xf9","\x77"));
	outFields->push(HX_HCSTRING("__stage3D","\xcf","\x93","\x18","\xaf"));
	outFields->push(HX_HCSTRING("__stats","\xff","\xce","\x69","\xee"));
	outFields->push(HX_HCSTRING("__statsCache","\xc3","\x7e","\x8e","\x82"));
	outFields->push(HX_HCSTRING("__stencilCompareMode","\x2c","\x4d","\xce","\x56"));
	outFields->push(HX_HCSTRING("__stencilRef","\xd7","\x33","\x94","\xf0"));
	outFields->push(HX_HCSTRING("__stencilReadMask","\x5e","\x22","\x86","\x68"));
	outFields->push(HX_HCSTRING("__stencilRenderBuffer","\xf2","\xf5","\x97","\x34"));
	outFields->push(HX_HCSTRING("__supportsAnisotropicFiltering","\x7d","\xf0","\x0c","\x66"));
	outFields->push(HX_HCSTRING("__supportsPackedDepthStencil","\x95","\x74","\x8e","\xfa"));
	outFields->push(HX_HCSTRING("__vertexConstants","\x6b","\x1f","\x14","\xb9"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsInt,(int)offsetof(Context3D_obj,backBufferHeight),HX_HCSTRING("backBufferHeight","\xce","\x3d","\x76","\xf3")},
	{hx::fsInt,(int)offsetof(Context3D_obj,backBufferWidth),HX_HCSTRING("backBufferWidth","\xff","\xf9","\x53","\x8c")},
	{hx::fsString,(int)offsetof(Context3D_obj,driverInfo),HX_HCSTRING("driverInfo","\xb6","\x18","\x7b","\xe3")},
	{hx::fsBool,(int)offsetof(Context3D_obj,enableErrorChecking),HX_HCSTRING("enableErrorChecking","\x7f","\x3c","\x19","\xba")},
	{hx::fsInt,(int)offsetof(Context3D_obj,maxBackBufferHeight),HX_HCSTRING("maxBackBufferHeight","\x92","\xac","\x2a","\x8e")},
	{hx::fsInt,(int)offsetof(Context3D_obj,maxBackBufferWidth),HX_HCSTRING("maxBackBufferWidth","\xbb","\x8f","\x62","\xbe")},
	{hx::fsObject /*Dynamic*/ ,(int)offsetof(Context3D_obj,profile),HX_HCSTRING("profile","\x29","\x49","\x49","\xf3")},
	{hx::fsInt,(int)offsetof(Context3D_obj,totalGPUMemory),HX_HCSTRING("totalGPUMemory","\xe9","\x89","\x1b","\x9c")},
	{hx::fsInt,(int)offsetof(Context3D_obj,__backBufferAntiAlias),HX_HCSTRING("__backBufferAntiAlias","\xe7","\x9b","\x20","\xbd")},
	{hx::fsBool,(int)offsetof(Context3D_obj,__backBufferEnableDepthAndStencil),HX_HCSTRING("__backBufferEnableDepthAndStencil","\x5e","\x16","\x47","\xce")},
	{hx::fsBool,(int)offsetof(Context3D_obj,__backBufferWantsBestResolution),HX_HCSTRING("__backBufferWantsBestResolution","\x0c","\x81","\x2c","\xec")},
	{hx::fsObject /*::lime::graphics::opengl::GLObject*/ ,(int)offsetof(Context3D_obj,__depthRenderBuffer),HX_HCSTRING("__depthRenderBuffer","\x79","\x1f","\xfe","\x32")},
	{hx::fsObject /*::lime::graphics::opengl::GLObject*/ ,(int)offsetof(Context3D_obj,__depthStencilRenderBuffer),HX_HCSTRING("__depthStencilRenderBuffer","\xef","\x9c","\xa8","\x76")},
	{hx::fsObject /*::lime::utils::ArrayBufferView*/ ,(int)offsetof(Context3D_obj,__fragmentConstants),HX_HCSTRING("__fragmentConstants","\x7f","\xa5","\xa6","\x65")},
	{hx::fsObject /*::lime::graphics::opengl::GLObject*/ ,(int)offsetof(Context3D_obj,__framebuffer),HX_HCSTRING("__framebuffer","\xcd","\x55","\xc0","\xc2")},
	{hx::fsInt,(int)offsetof(Context3D_obj,__frameCount),HX_HCSTRING("__frameCount","\x82","\xf4","\x1c","\x66")},
	{hx::fsInt,(int)offsetof(Context3D_obj,__maxAnisotropyCubeTexture),HX_HCSTRING("__maxAnisotropyCubeTexture","\x60","\x25","\x1d","\x14")},
	{hx::fsInt,(int)offsetof(Context3D_obj,__maxAnisotropyTexture2D),HX_HCSTRING("__maxAnisotropyTexture2D","\xe7","\xc7","\xc4","\xba")},
	{hx::fsObject /*::lime::utils::ArrayBufferView*/ ,(int)offsetof(Context3D_obj,__positionScale),HX_HCSTRING("__positionScale","\x01","\xd2","\x7f","\x6a")},
	{hx::fsObject /*::openfl::display3D::Program3D*/ ,(int)offsetof(Context3D_obj,__program),HX_HCSTRING("__program","\x64","\x9b","\x47","\x75")},
	{hx::fsObject /*::openfl::_internal::renderer::RenderSession*/ ,(int)offsetof(Context3D_obj,__renderSession),HX_HCSTRING("__renderSession","\x80","\xc3","\x37","\x17")},
	{hx::fsObject /*::openfl::display3D::textures::TextureBase*/ ,(int)offsetof(Context3D_obj,__renderToTexture),HX_HCSTRING("__renderToTexture","\x4a","\x8b","\x77","\x3a")},
	{hx::fsBool,(int)offsetof(Context3D_obj,__rttDepthAndStencil),HX_HCSTRING("__rttDepthAndStencil","\x96","\x47","\x37","\xce")},
	{hx::fsInt,(int)offsetof(Context3D_obj,__samplerDirty),HX_HCSTRING("__samplerDirty","\x0a","\x41","\x45","\x32")},
	{hx::fsObject /*::openfl::_Vector::ObjectVector*/ ,(int)offsetof(Context3D_obj,__samplerTextures),HX_HCSTRING("__samplerTextures","\x40","\xf1","\xfc","\x14")},
	{hx::fsObject /*Array< ::Dynamic >*/ ,(int)offsetof(Context3D_obj,__samplerStates),HX_HCSTRING("__samplerStates","\x4a","\xc1","\xd9","\x13")},
	{hx::fsObject /*::openfl::geom::Rectangle*/ ,(int)offsetof(Context3D_obj,__scissorRectangle),HX_HCSTRING("__scissorRectangle","\x93","\x3b","\xf9","\x77")},
	{hx::fsObject /*::openfl::display::Stage3D*/ ,(int)offsetof(Context3D_obj,__stage3D),HX_HCSTRING("__stage3D","\xcf","\x93","\x18","\xaf")},
	{hx::fsObject /*::openfl::_Vector::IntVector*/ ,(int)offsetof(Context3D_obj,__stats),HX_HCSTRING("__stats","\xff","\xce","\x69","\xee")},
	{hx::fsObject /*::openfl::_Vector::IntVector*/ ,(int)offsetof(Context3D_obj,__statsCache),HX_HCSTRING("__statsCache","\xc3","\x7e","\x8e","\x82")},
	{hx::fsObject /*Dynamic*/ ,(int)offsetof(Context3D_obj,__stencilCompareMode),HX_HCSTRING("__stencilCompareMode","\x2c","\x4d","\xce","\x56")},
	{hx::fsInt,(int)offsetof(Context3D_obj,__stencilRef),HX_HCSTRING("__stencilRef","\xd7","\x33","\x94","\xf0")},
	{hx::fsInt,(int)offsetof(Context3D_obj,__stencilReadMask),HX_HCSTRING("__stencilReadMask","\x5e","\x22","\x86","\x68")},
	{hx::fsObject /*::lime::graphics::opengl::GLObject*/ ,(int)offsetof(Context3D_obj,__stencilRenderBuffer),HX_HCSTRING("__stencilRenderBuffer","\xf2","\xf5","\x97","\x34")},
	{hx::fsBool,(int)offsetof(Context3D_obj,__supportsAnisotropicFiltering),HX_HCSTRING("__supportsAnisotropicFiltering","\x7d","\xf0","\x0c","\x66")},
	{hx::fsBool,(int)offsetof(Context3D_obj,__supportsPackedDepthStencil),HX_HCSTRING("__supportsPackedDepthStencil","\x95","\x74","\x8e","\xfa")},
	{hx::fsObject /*::lime::utils::ArrayBufferView*/ ,(int)offsetof(Context3D_obj,__vertexConstants),HX_HCSTRING("__vertexConstants","\x6b","\x1f","\x14","\xb9")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo sStaticStorageInfo[] = {
	{hx::fsBool,(void *) &Context3D_obj::supportsVideoTexture,HX_HCSTRING("supportsVideoTexture","\x44","\x35","\x75","\x67")},
	{hx::fsInt,(void *) &Context3D_obj::MAX_SAMPLERS,HX_HCSTRING("MAX_SAMPLERS","\xc6","\x92","\x84","\x06")},
	{hx::fsInt,(void *) &Context3D_obj::MAX_ATTRIBUTES,HX_HCSTRING("MAX_ATTRIBUTES","\xf2","\x89","\xd4","\x39")},
	{hx::fsInt,(void *) &Context3D_obj::MAX_PROGRAM_REGISTERS,HX_HCSTRING("MAX_PROGRAM_REGISTERS","\xfa","\x9b","\x3d","\x0f")},
	{hx::fsInt,(void *) &Context3D_obj::TEXTURE_MAX_ANISOTROPY_EXT,HX_HCSTRING("TEXTURE_MAX_ANISOTROPY_EXT","\x63","\xc1","\x6c","\x51")},
	{hx::fsInt,(void *) &Context3D_obj::DEPTH_STENCIL,HX_HCSTRING("DEPTH_STENCIL","\x40","\x2f","\x20","\x2b")},
	{hx::fsObject /*::openfl::_internal::stage3D::Context3DStateCache*/ ,(void *) &Context3D_obj::__stateCache,HX_HCSTRING("__stateCache","\x91","\x71","\x8f","\xe9")},
	{ hx::fsUnknown, 0, null()}
};
#endif

static ::String sMemberFields[] = {
	HX_HCSTRING("backBufferHeight","\xce","\x3d","\x76","\xf3"),
	HX_HCSTRING("backBufferWidth","\xff","\xf9","\x53","\x8c"),
	HX_HCSTRING("driverInfo","\xb6","\x18","\x7b","\xe3"),
	HX_HCSTRING("enableErrorChecking","\x7f","\x3c","\x19","\xba"),
	HX_HCSTRING("maxBackBufferHeight","\x92","\xac","\x2a","\x8e"),
	HX_HCSTRING("maxBackBufferWidth","\xbb","\x8f","\x62","\xbe"),
	HX_HCSTRING("profile","\x29","\x49","\x49","\xf3"),
	HX_HCSTRING("totalGPUMemory","\xe9","\x89","\x1b","\x9c"),
	HX_HCSTRING("__backBufferAntiAlias","\xe7","\x9b","\x20","\xbd"),
	HX_HCSTRING("__backBufferEnableDepthAndStencil","\x5e","\x16","\x47","\xce"),
	HX_HCSTRING("__backBufferWantsBestResolution","\x0c","\x81","\x2c","\xec"),
	HX_HCSTRING("__depthRenderBuffer","\x79","\x1f","\xfe","\x32"),
	HX_HCSTRING("__depthStencilRenderBuffer","\xef","\x9c","\xa8","\x76"),
	HX_HCSTRING("__fragmentConstants","\x7f","\xa5","\xa6","\x65"),
	HX_HCSTRING("__framebuffer","\xcd","\x55","\xc0","\xc2"),
	HX_HCSTRING("__frameCount","\x82","\xf4","\x1c","\x66"),
	HX_HCSTRING("__maxAnisotropyCubeTexture","\x60","\x25","\x1d","\x14"),
	HX_HCSTRING("__maxAnisotropyTexture2D","\xe7","\xc7","\xc4","\xba"),
	HX_HCSTRING("__positionScale","\x01","\xd2","\x7f","\x6a"),
	HX_HCSTRING("__program","\x64","\x9b","\x47","\x75"),
	HX_HCSTRING("__renderSession","\x80","\xc3","\x37","\x17"),
	HX_HCSTRING("__renderToTexture","\x4a","\x8b","\x77","\x3a"),
	HX_HCSTRING("__rttDepthAndStencil","\x96","\x47","\x37","\xce"),
	HX_HCSTRING("__samplerDirty","\x0a","\x41","\x45","\x32"),
	HX_HCSTRING("__samplerTextures","\x40","\xf1","\xfc","\x14"),
	HX_HCSTRING("__samplerStates","\x4a","\xc1","\xd9","\x13"),
	HX_HCSTRING("__scissorRectangle","\x93","\x3b","\xf9","\x77"),
	HX_HCSTRING("__stage3D","\xcf","\x93","\x18","\xaf"),
	HX_HCSTRING("__stats","\xff","\xce","\x69","\xee"),
	HX_HCSTRING("__statsCache","\xc3","\x7e","\x8e","\x82"),
	HX_HCSTRING("__stencilCompareMode","\x2c","\x4d","\xce","\x56"),
	HX_HCSTRING("__stencilRef","\xd7","\x33","\x94","\xf0"),
	HX_HCSTRING("__stencilReadMask","\x5e","\x22","\x86","\x68"),
	HX_HCSTRING("__stencilRenderBuffer","\xf2","\xf5","\x97","\x34"),
	HX_HCSTRING("__supportsAnisotropicFiltering","\x7d","\xf0","\x0c","\x66"),
	HX_HCSTRING("__supportsPackedDepthStencil","\x95","\x74","\x8e","\xfa"),
	HX_HCSTRING("__vertexConstants","\x6b","\x1f","\x14","\xb9"),
	HX_HCSTRING("clear","\x8d","\x71","\x5b","\x48"),
	HX_HCSTRING("configureBackBuffer","\x0d","\x3c","\x11","\x04"),
	HX_HCSTRING("createCubeTexture","\xca","\x46","\x30","\xc8"),
	HX_HCSTRING("createIndexBuffer","\x16","\x40","\x47","\x48"),
	HX_HCSTRING("createProgram","\xe8","\x22","\x3c","\xdc"),
	HX_HCSTRING("createRectangleTexture","\x88","\x8b","\xb3","\xf2"),
	HX_HCSTRING("createTexture","\x3f","\xa1","\x23","\x87"),
	HX_HCSTRING("createVertexBuffer","\xa0","\xec","\xc7","\x6a"),
	HX_HCSTRING("createVideoTexture","\xbc","\x6e","\xfb","\xb2"),
	HX_HCSTRING("dispose","\x9f","\x80","\x4c","\xbb"),
	HX_HCSTRING("drawToBitmapData","\x38","\x55","\xb6","\xf4"),
	HX_HCSTRING("drawTriangles","\x07","\x44","\x68","\xde"),
	HX_HCSTRING("present","\xfb","\x3a","\xdc","\x39"),
	HX_HCSTRING("setBlendFactors","\x35","\x4b","\xcd","\xf5"),
	HX_HCSTRING("setColorMask","\xed","\x8b","\x13","\x48"),
	HX_HCSTRING("setCulling","\xee","\x06","\x67","\xa6"),
	HX_HCSTRING("setDepthTest","\xf3","\xe2","\xcc","\xc7"),
	HX_HCSTRING("setProgram","\x02","\x6f","\xd8","\x46"),
	HX_HCSTRING("setProgramConstantsFromByteArray","\x3a","\x1f","\x12","\xd4"),
	HX_HCSTRING("setProgramConstantsFromMatrix","\xd8","\xd0","\x45","\xbe"),
	HX_HCSTRING("setProgramConstantsFromVector","\x5a","\x4b","\xdb","\x99"),
	HX_HCSTRING("setRenderToBackBuffer","\x9a","\x84","\xfb","\xad"),
	HX_HCSTRING("setRenderToTexture","\xe8","\x2c","\x92","\x46"),
	HX_HCSTRING("setSamplerStateAt","\x7e","\x30","\x51","\xac"),
	HX_HCSTRING("setScissorRectangle","\x35","\x04","\x2c","\x03"),
	HX_HCSTRING("setStencilActions","\xa3","\xec","\xa6","\x2c"),
	HX_HCSTRING("setStencilReferenceValue","\xc0","\xdf","\xa3","\x11"),
	HX_HCSTRING("setTextureAt","\xac","\xee","\x98","\xd3"),
	HX_HCSTRING("setVertexBufferAt","\xd9","\x58","\xf9","\xc7"),
	HX_HCSTRING("__flushSamplerState","\xad","\xd1","\x48","\x4d"),
	HX_HCSTRING("__getGLCompareMode","\x4d","\xad","\x57","\x0d"),
	HX_HCSTRING("__getGLStencilAction","\xb7","\xa4","\x86","\x0d"),
	HX_HCSTRING("__hasGLExtension","\xa0","\xfe","\x45","\x9c"),
	HX_HCSTRING("__setViewport","\x08","\x57","\x7e","\x15"),
	HX_HCSTRING("__statsAdd","\x62","\x04","\xea","\x0b"),
	HX_HCSTRING("__statsClear","\x0e","\x56","\xd5","\x89"),
	HX_HCSTRING("__statsDecrement","\x14","\xaf","\x6e","\xa5"),
	HX_HCSTRING("__statsIncrement","\x30","\xbf","\xeb","\xc6"),
	HX_HCSTRING("__statsSendToTelemetry","\xd7","\xb8","\x7e","\x01"),
	HX_HCSTRING("__statsSubtract","\x33","\x97","\x22","\x32"),
	HX_HCSTRING("__updateDepthAndStencilState","\xf2","\x9d","\xe7","\xb2"),
	HX_HCSTRING("__updateBlendFactors","\x3c","\x4f","\x58","\x2e"),
	HX_HCSTRING("__updateScissorRectangle","\xbc","\x17","\x57","\x7f"),
	HX_HCSTRING("__updateBackbufferViewport","\x76","\x09","\xc0","\x09"),
	HX_HCSTRING("set_enableErrorChecking","\x22","\x4c","\xd0","\xc4"),
	::String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(Context3D_obj::__mClass,"__mClass");
	HX_MARK_MEMBER_NAME(Context3D_obj::supportsVideoTexture,"supportsVideoTexture");
	HX_MARK_MEMBER_NAME(Context3D_obj::MAX_SAMPLERS,"MAX_SAMPLERS");
	HX_MARK_MEMBER_NAME(Context3D_obj::MAX_ATTRIBUTES,"MAX_ATTRIBUTES");
	HX_MARK_MEMBER_NAME(Context3D_obj::MAX_PROGRAM_REGISTERS,"MAX_PROGRAM_REGISTERS");
	HX_MARK_MEMBER_NAME(Context3D_obj::TEXTURE_MAX_ANISOTROPY_EXT,"TEXTURE_MAX_ANISOTROPY_EXT");
	HX_MARK_MEMBER_NAME(Context3D_obj::DEPTH_STENCIL,"DEPTH_STENCIL");
	HX_MARK_MEMBER_NAME(Context3D_obj::__stateCache,"__stateCache");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(Context3D_obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(Context3D_obj::supportsVideoTexture,"supportsVideoTexture");
	HX_VISIT_MEMBER_NAME(Context3D_obj::MAX_SAMPLERS,"MAX_SAMPLERS");
	HX_VISIT_MEMBER_NAME(Context3D_obj::MAX_ATTRIBUTES,"MAX_ATTRIBUTES");
	HX_VISIT_MEMBER_NAME(Context3D_obj::MAX_PROGRAM_REGISTERS,"MAX_PROGRAM_REGISTERS");
	HX_VISIT_MEMBER_NAME(Context3D_obj::TEXTURE_MAX_ANISOTROPY_EXT,"TEXTURE_MAX_ANISOTROPY_EXT");
	HX_VISIT_MEMBER_NAME(Context3D_obj::DEPTH_STENCIL,"DEPTH_STENCIL");
	HX_VISIT_MEMBER_NAME(Context3D_obj::__stateCache,"__stateCache");
};

#endif

hx::Class Context3D_obj::__mClass;

static ::String sStaticFields[] = {
	HX_HCSTRING("supportsVideoTexture","\x44","\x35","\x75","\x67"),
	HX_HCSTRING("MAX_SAMPLERS","\xc6","\x92","\x84","\x06"),
	HX_HCSTRING("MAX_ATTRIBUTES","\xf2","\x89","\xd4","\x39"),
	HX_HCSTRING("MAX_PROGRAM_REGISTERS","\xfa","\x9b","\x3d","\x0f"),
	HX_HCSTRING("TEXTURE_MAX_ANISOTROPY_EXT","\x63","\xc1","\x6c","\x51"),
	HX_HCSTRING("DEPTH_STENCIL","\x40","\x2f","\x20","\x2b"),
	HX_HCSTRING("__stateCache","\x91","\x71","\x8f","\xe9"),
	::String(null()) };

void Context3D_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("openfl.display3D.Context3D","\xa7","\xbf","\xa0","\x2f");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &Context3D_obj::__GetStatic;
	__mClass->mSetStaticField = &Context3D_obj::__SetStatic;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(sStaticFields);
	__mClass->mMembers = hx::Class_obj::dupFunctions(sMemberFields);
	__mClass->mCanCast = hx::TCanCast< Context3D_obj >;
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

void Context3D_obj::__boot()
{
	supportsVideoTexture= false;
	MAX_SAMPLERS= (int)8;
	MAX_ATTRIBUTES= (int)16;
	MAX_PROGRAM_REGISTERS= (int)128;
	TEXTURE_MAX_ANISOTROPY_EXT= (int)0;
	DEPTH_STENCIL= (int)0;
	__stateCache= ::openfl::_internal::stage3D::Context3DStateCache_obj::__new();
}

} // end namespace openfl
} // end namespace display3D
