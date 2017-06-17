#include <hxcpp.h>

#include "hxMath.h"
#ifndef INCLUDED_Std
#include <Std.h>
#endif
#ifndef INCLUDED_haxe_io_Bytes
#include <haxe/io/Bytes.h>
#endif
#ifndef INCLUDED_lime__backend_native_NativeGLRenderContext
#include <lime/_backend/native/NativeGLRenderContext.h>
#endif
#ifndef INCLUDED_lime_app_Future
#include <lime/app/Future.h>
#endif
#ifndef INCLUDED_lime_app_IModule
#include <lime/app/IModule.h>
#endif
#ifndef INCLUDED_lime_graphics_Image
#include <lime/graphics/Image.h>
#endif
#ifndef INCLUDED_lime_graphics_ImageBuffer
#include <lime/graphics/ImageBuffer.h>
#endif
#ifndef INCLUDED_lime_graphics_ImageChannel
#include <lime/graphics/ImageChannel.h>
#endif
#ifndef INCLUDED_lime_graphics_ImageType
#include <lime/graphics/ImageType.h>
#endif
#ifndef INCLUDED_lime_graphics_cairo_Cairo
#include <lime/graphics/cairo/Cairo.h>
#endif
#ifndef INCLUDED_lime_graphics_cairo__CairoImageSurface_CairoImageSurface_Impl_
#include <lime/graphics/cairo/_CairoImageSurface/CairoImageSurface_Impl_.h>
#endif
#ifndef INCLUDED_lime_graphics_cairo__CairoPattern_CairoPattern_Impl_
#include <lime/graphics/cairo/_CairoPattern/CairoPattern_Impl_.h>
#endif
#ifndef INCLUDED_lime_graphics_cairo__CairoSurface_CairoSurface_Impl_
#include <lime/graphics/cairo/_CairoSurface/CairoSurface_Impl_.h>
#endif
#ifndef INCLUDED_lime_graphics_opengl_GL
#include <lime/graphics/opengl/GL.h>
#endif
#ifndef INCLUDED_lime_graphics_opengl_GLContextType
#include <lime/graphics/opengl/GLContextType.h>
#endif
#ifndef INCLUDED_lime_graphics_opengl_GLObject
#include <lime/graphics/opengl/GLObject.h>
#endif
#ifndef INCLUDED_lime_math_Matrix3
#include <lime/math/Matrix3.h>
#endif
#ifndef INCLUDED_lime_math_Rectangle
#include <lime/math/Rectangle.h>
#endif
#ifndef INCLUDED_lime_math_Vector2
#include <lime/math/Vector2.h>
#endif
#ifndef INCLUDED_lime_utils_ArrayBufferView
#include <lime/utils/ArrayBufferView.h>
#endif
#ifndef INCLUDED_lime_utils_ObjectPool_openfl_geom_Matrix
#include <lime/utils/ObjectPool_openfl_geom_Matrix.h>
#endif
#ifndef INCLUDED_lime_utils_ObjectPool_openfl_geom_Rectangle
#include <lime/utils/ObjectPool_openfl_geom_Rectangle.h>
#endif
#ifndef INCLUDED_lime_utils_TAError
#include <lime/utils/TAError.h>
#endif
#ifndef INCLUDED_lime_utils__DataPointer_DataPointer_Impl_
#include <lime/utils/_DataPointer/DataPointer_Impl_.h>
#endif
#ifndef INCLUDED_openfl_Lib
#include <openfl/Lib.h>
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
#ifndef INCLUDED_openfl__internal_renderer_AbstractBlendModeManager
#include <openfl/_internal/renderer/AbstractBlendModeManager.h>
#endif
#ifndef INCLUDED_openfl__internal_renderer_AbstractMaskManager
#include <openfl/_internal/renderer/AbstractMaskManager.h>
#endif
#ifndef INCLUDED_openfl__internal_renderer_AbstractRenderer
#include <openfl/_internal/renderer/AbstractRenderer.h>
#endif
#ifndef INCLUDED_openfl__internal_renderer_AbstractShaderManager
#include <openfl/_internal/renderer/AbstractShaderManager.h>
#endif
#ifndef INCLUDED_openfl__internal_renderer_RenderSession
#include <openfl/_internal/renderer/RenderSession.h>
#endif
#ifndef INCLUDED_openfl__internal_renderer_cairo_CairoBlendModeManager
#include <openfl/_internal/renderer/cairo/CairoBlendModeManager.h>
#endif
#ifndef INCLUDED_openfl__internal_renderer_cairo_CairoMaskManager
#include <openfl/_internal/renderer/cairo/CairoMaskManager.h>
#endif
#ifndef INCLUDED_openfl__internal_renderer_opengl_GLRenderer
#include <openfl/_internal/renderer/opengl/GLRenderer.h>
#endif
#ifndef INCLUDED_openfl__internal_utils_PerlinNoise
#include <openfl/_internal/utils/PerlinNoise.h>
#endif
#ifndef INCLUDED_openfl_display_Bitmap
#include <openfl/display/Bitmap.h>
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
#ifndef INCLUDED_openfl_display_Graphics
#include <openfl/display/Graphics.h>
#endif
#ifndef INCLUDED_openfl_display_IBitmapDrawable
#include <openfl/display/IBitmapDrawable.h>
#endif
#ifndef INCLUDED_openfl_display_InteractiveObject
#include <openfl/display/InteractiveObject.h>
#endif
#ifndef INCLUDED_openfl_display_JPEGEncoderOptions
#include <openfl/display/JPEGEncoderOptions.h>
#endif
#ifndef INCLUDED_openfl_display_MovieClip
#include <openfl/display/MovieClip.h>
#endif
#ifndef INCLUDED_openfl_display_PNGEncoderOptions
#include <openfl/display/PNGEncoderOptions.h>
#endif
#ifndef INCLUDED_openfl_display_Shader
#include <openfl/display/Shader.h>
#endif
#ifndef INCLUDED_openfl_display_ShaderData
#include <openfl/display/ShaderData.h>
#endif
#ifndef INCLUDED_openfl_display_ShaderInput_openfl_display_BitmapData
#include <openfl/display/ShaderInput_openfl_display_BitmapData.h>
#endif
#ifndef INCLUDED_openfl_display_ShaderParameter_Float
#include <openfl/display/ShaderParameter_Float.h>
#endif
#ifndef INCLUDED_openfl_display_Sprite
#include <openfl/display/Sprite.h>
#endif
#ifndef INCLUDED_openfl_display_Stage
#include <openfl/display/Stage.h>
#endif
#ifndef INCLUDED_openfl_display3D_textures_TextureBase
#include <openfl/display3D/textures/TextureBase.h>
#endif
#ifndef INCLUDED_openfl_events_EventDispatcher
#include <openfl/events/EventDispatcher.h>
#endif
#ifndef INCLUDED_openfl_events_IEventDispatcher
#include <openfl/events/IEventDispatcher.h>
#endif
#ifndef INCLUDED_openfl_filters_BitmapFilter
#include <openfl/filters/BitmapFilter.h>
#endif
#ifndef INCLUDED_openfl_geom_ColorTransform
#include <openfl/geom/ColorTransform.h>
#endif
#ifndef INCLUDED_openfl_geom_Matrix
#include <openfl/geom/Matrix.h>
#endif
#ifndef INCLUDED_openfl_geom_Point
#include <openfl/geom/Point.h>
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
namespace display{

Void BitmapData_obj::__construct(int width,int height,hx::Null< bool >  __o_transparent,hx::Null< int >  __o_fillColor)
{
bool transparent = __o_transparent.Default(true);
int fillColor = __o_fillColor.Default(-1);
{
	this->transparent = transparent;
	bool tmp = (width < (int)0);
	int tmp1;
	if ((tmp)){
		tmp1 = (int)0;
	}
	else{
		tmp1 = width;
	}
	width = tmp1;
	bool tmp2 = (height < (int)0);
	int tmp3;
	if ((tmp2)){
		tmp3 = (int)0;
	}
	else{
		tmp3 = height;
	}
	height = tmp3;
	this->width = width;
	this->height = height;
	::openfl::geom::Rectangle tmp4 = ::openfl::geom::Rectangle_obj::__new((int)0,(int)0,width,height);
	this->rect = tmp4;
	bool tmp5 = (width > (int)0);
	bool tmp6;
	if ((tmp5)){
		tmp6 = (height > (int)0);
	}
	else{
		tmp6 = false;
	}
	if ((tmp6)){
		bool tmp7 = transparent;
		if ((tmp7)){
			int tmp8 = (int(fillColor) & int((int)-16777216));
			int tmp9 = tmp8;
			bool tmp10 = (tmp9 == (int)0);
			if ((tmp10)){
				fillColor = (int)0;
			}
		}
		else{
			int tmp8 = (int(fillColor) & int((int)16777215));
			int tmp9 = tmp8;
			int tmp10 = (int((int)-16777216) | int(tmp9));
			fillColor = tmp10;
		}
		int tmp8 = (int(fillColor) << int((int)8));
		int tmp9 = tmp8;
		int tmp10 = (int(fillColor) >> int((int)24));
		int tmp11 = tmp10;
		int tmp12 = (int(tmp11) & int((int)255));
		int tmp13 = tmp12;
		int tmp14 = (int(tmp9) | int(tmp13));
		fillColor = tmp14;
		::lime::utils::ArrayBufferView tmp15;
		{
			int tmp16 = (width * height);
			int tmp17 = (tmp16 * (int)4);
			Dynamic elements = tmp17;
			::lime::utils::ArrayBufferView this1;
			bool tmp18 = (elements != null());
			if ((tmp18)){
				::lime::utils::ArrayBufferView tmp19 = ::lime::utils::ArrayBufferView_obj::__new(elements,(int)4);
				this1 = tmp19;
			}
			else{
				bool tmp19 = false;
				if ((tmp19)){
					::lime::utils::ArrayBufferView tmp20;
					{
						::lime::utils::ArrayBufferView tmp21 = ::lime::utils::ArrayBufferView_obj::__new((int)0,(int)4);
						::lime::utils::ArrayBufferView _this = tmp21;
						_this->byteOffset = (int)0;
						int tmp22 = hx::Throw(HX_CSTRING("Invalid field access on null object"));
						_this->length = tmp22;
						int tmp23 = (_this->length * _this->bytesPerElement);
						_this->byteLength = tmp23;
						::haxe::io::Bytes tmp24;
						{
							::haxe::io::Bytes this2;
							int tmp25 = _this->byteLength;
							::haxe::io::Bytes tmp26 = ::haxe::io::Bytes_obj::alloc(tmp25);
							this2 = tmp26;
							tmp24 = this2;
						}
						_this->buffer = tmp24;
						_this->copyFromArray(((Array< Float >)(null())),null());
						tmp20 = _this;
					}
					this1 = tmp20;
				}
				else{
					bool tmp20 = false;
					if ((tmp20)){
						::lime::utils::ArrayBufferView tmp21;
						{
							::lime::utils::ArrayBufferView tmp22 = ::lime::utils::ArrayBufferView_obj::__new((int)0,(int)4);
							::lime::utils::ArrayBufferView _this = tmp22;
							cpp::ArrayBase array = hx::Throw(HX_CSTRING("Invalid field access on null object"));
							_this->byteOffset = (int)0;
							_this->length = array->__Field(HX_HCSTRING("length","\xe6","\x94","\x07","\x9f"), hx::paccDynamic );
							int tmp23 = (_this->length * _this->bytesPerElement);
							_this->byteLength = tmp23;
							::haxe::io::Bytes tmp24;
							{
								::haxe::io::Bytes this2;
								int tmp25 = _this->byteLength;
								::haxe::io::Bytes tmp26 = ::haxe::io::Bytes_obj::alloc(tmp25);
								this2 = tmp26;
								tmp24 = this2;
							}
							_this->buffer = tmp24;
							_this->copyFromArray(((Array< Float >)(array)),null());
							tmp21 = _this;
						}
						this1 = tmp21;
					}
					else{
						bool tmp21 = false;
						if ((tmp21)){
							::lime::utils::ArrayBufferView tmp22;
							{
								::lime::utils::ArrayBufferView tmp23 = ::lime::utils::ArrayBufferView_obj::__new((int)0,(int)4);
								::lime::utils::ArrayBufferView _this = tmp23;
								::haxe::io::Bytes tmp24 = hx::Throw(HX_CSTRING("Invalid field access on null object"));
								::haxe::io::Bytes srcData = tmp24;
								int tmp25 = hx::Throw(HX_CSTRING("Invalid field access on null object"));
								int srcLength = tmp25;
								int tmp26 = hx::Throw(HX_CSTRING("Invalid field access on null object"));
								int srcByteOffset = tmp26;
								int tmp27 = hx::Throw(HX_CSTRING("Invalid field access on null object"));
								int srcElementSize = tmp27;
								int elementSize = _this->bytesPerElement;
								int tmp28 = hx::Throw(HX_CSTRING("Invalid field access on null object"));
								int tmp29 = _this->type;
								bool tmp30 = (tmp28 == tmp29);
								if ((tmp30)){
									int srcLength1 = srcData->length;
									int tmp31 = (srcLength1 - srcByteOffset);
									int cloneLength = tmp31;
									::haxe::io::Bytes tmp32;
									{
										::haxe::io::Bytes this2;
										int tmp33 = cloneLength;
										::haxe::io::Bytes tmp34 = ::haxe::io::Bytes_obj::alloc(tmp33);
										this2 = tmp34;
										tmp32 = this2;
									}
									_this->buffer = tmp32;
									::haxe::io::Bytes tmp33 = srcData;
									int tmp34 = srcByteOffset;
									int tmp35 = cloneLength;
									_this->buffer->blit((int)0,tmp33,tmp34,tmp35);
								}
								else{
									HX_STACK_DO_THROW(HX_HCSTRING("unimplemented","\x09","\x2f","\x74","\xb4"));
								}
								int tmp31 = (_this->bytesPerElement * srcLength);
								_this->byteLength = tmp31;
								_this->byteOffset = (int)0;
								_this->length = srcLength;
								tmp22 = _this;
							}
							this1 = tmp22;
						}
						else{
							bool tmp22 = false;
							if ((tmp22)){
								::lime::utils::ArrayBufferView tmp23;
								{
									::lime::utils::ArrayBufferView tmp24 = ::lime::utils::ArrayBufferView_obj::__new((int)0,(int)4);
									::lime::utils::ArrayBufferView _this = tmp24;
									int in_byteOffset = (int)0;
									bool tmp25 = (in_byteOffset < (int)0);
									if ((tmp25)){
										HX_STACK_DO_THROW(::lime::utils::TAError_obj::RangeError);
									}
									int tmp26 = hx::Mod(in_byteOffset,_this->bytesPerElement);
									bool tmp27 = (tmp26 != (int)0);
									if ((tmp27)){
										HX_STACK_DO_THROW(::lime::utils::TAError_obj::RangeError);
									}
									int tmp28 = hx::Throw(HX_CSTRING("Invalid field access on null object"));
									int bufferByteLength = tmp28;
									int elementSize = _this->bytesPerElement;
									int newByteLength = bufferByteLength;
									bool tmp29 = true;
									if ((tmp29)){
										int tmp30 = (bufferByteLength - in_byteOffset);
										newByteLength = tmp30;
										int tmp31 = hx::Mod(bufferByteLength,_this->bytesPerElement);
										bool tmp32 = (tmp31 != (int)0);
										if ((tmp32)){
											HX_STACK_DO_THROW(::lime::utils::TAError_obj::RangeError);
										}
										bool tmp33 = (newByteLength < (int)0);
										if ((tmp33)){
											HX_STACK_DO_THROW(::lime::utils::TAError_obj::RangeError);
										}
									}
									else{
										int tmp30 = (null() * _this->bytesPerElement);
										newByteLength = tmp30;
										int tmp31 = (in_byteOffset + newByteLength);
										int newRange = tmp31;
										bool tmp32 = (newRange > bufferByteLength);
										if ((tmp32)){
											HX_STACK_DO_THROW(::lime::utils::TAError_obj::RangeError);
										}
									}
									_this->buffer = null();
									_this->byteOffset = in_byteOffset;
									_this->byteLength = newByteLength;
									Float tmp30 = (Float(newByteLength) / Float(_this->bytesPerElement));
									int tmp31 = ::Std_obj::_int(tmp30);
									_this->length = tmp31;
									tmp23 = _this;
								}
								this1 = tmp23;
							}
							else{
								HX_STACK_DO_THROW(HX_HCSTRING("Invalid constructor arguments for UInt8Array","\x6b","\x44","\xd5","\x85"));
							}
						}
					}
				}
			}
			tmp15 = this1;
		}
		int tmp16 = width;
		int tmp17 = height;
		::lime::graphics::ImageBuffer tmp18 = ::lime::graphics::ImageBuffer_obj::__new(tmp15,tmp16,tmp17,null(),null());
		::lime::graphics::ImageBuffer buffer = tmp18;
		buffer->format = (int)2;
		buffer->premultiplied = true;
		::lime::graphics::Image tmp19 = ::lime::graphics::Image_obj::__new(buffer,(int)0,(int)0,width,height,null(),null());
		this->image = tmp19;
		bool tmp20 = (fillColor != (int)0);
		if ((tmp20)){
			::lime::graphics::Image tmp21 = this->image;
			::lime::graphics::Image tmp22 = this->image;
			::lime::math::Rectangle tmp23 = tmp22->get_rect();
			int tmp24 = fillColor;
			tmp21->fillRect(tmp23,tmp24,null());
		}
		::lime::graphics::Image tmp21 = this->image;
		bool tmp22 = transparent;
		tmp21->set_transparent(tmp22);
		this->__isValid = true;
		this->readable = true;
	}
	::openfl::geom::Matrix tmp7 = ::openfl::geom::Matrix_obj::__new(null(),null(),null(),null(),null(),null());
	this->__worldTransform = tmp7;
	::openfl::geom::ColorTransform tmp8 = ::openfl::geom::ColorTransform_obj::__new(null(),null(),null(),null(),null(),null(),null(),null());
	this->__worldColorTransform = tmp8;
}
;
	return null();
}

//BitmapData_obj::~BitmapData_obj() { }

Dynamic BitmapData_obj::__CreateEmpty() { return  new BitmapData_obj; }
hx::ObjectPtr< BitmapData_obj > BitmapData_obj::__new(int width,int height,hx::Null< bool >  __o_transparent,hx::Null< int >  __o_fillColor)
{  hx::ObjectPtr< BitmapData_obj > _result_ = new BitmapData_obj();
	_result_->__construct(width,height,__o_transparent,__o_fillColor);
	return _result_;}

Dynamic BitmapData_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< BitmapData_obj > _result_ = new BitmapData_obj();
	_result_->__construct(inArgs[0],inArgs[1],inArgs[2],inArgs[3]);
	return _result_;}

hx::Object *BitmapData_obj::__ToInterface(const hx::type_info &inType) {
	if (inType==typeid( ::openfl::display::IBitmapDrawable_obj)) return operator ::openfl::display::IBitmapDrawable_obj *();
	return super::__ToInterface(inType);
}

BitmapData_obj::operator ::openfl::display::IBitmapDrawable_obj *()
	{ return new ::openfl::display::IBitmapDrawable_delegate_< BitmapData_obj >(this); }
Void BitmapData_obj::applyFilter( ::openfl::display::BitmapData sourceBitmapData,::openfl::geom::Rectangle sourceRect,::openfl::geom::Point destPoint,::openfl::filters::BitmapFilter filter){
{
		bool tmp = this->readable;
		bool tmp1 = tmp;
		bool tmp2 = !(tmp1);
		bool tmp3 = !(tmp2);
		bool tmp4 = tmp3;
		bool tmp5;
		if ((tmp4)){
			tmp5 = (sourceBitmapData == null());
		}
		else{
			tmp5 = true;
		}
		bool tmp6 = !(tmp5);
		bool tmp7;
		if ((tmp6)){
			bool tmp8 = sourceBitmapData->readable;
			bool tmp9 = tmp8;
			tmp7 = !(tmp9);
		}
		else{
			tmp7 = true;
		}
		if ((tmp7)){
			return null();
		}
		::openfl::display::BitmapData tmp8 = sourceBitmapData;
		::openfl::geom::Rectangle tmp9 = sourceRect;
		::openfl::geom::Point tmp10 = destPoint;
		filter->__applyFilter(tmp8,hx::ObjectPtr<OBJ_>(this),tmp9,tmp10);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC4(BitmapData_obj,applyFilter,(void))

::openfl::display::BitmapData BitmapData_obj::clone( ){
	bool tmp = this->__isValid;
	bool tmp1 = !(tmp);
	if ((tmp1)){
		int tmp2 = this->width;
		int tmp3 = this->height;
		bool tmp4 = this->transparent;
		::openfl::display::BitmapData tmp5 = ::openfl::display::BitmapData_obj::__new(tmp2,tmp3,tmp4,(int)0);
		return tmp5;
	}
	else{
		bool tmp2 = this->readable;
		bool tmp3 = tmp2;
		bool tmp4 = !(tmp3);
		bool tmp5;
		if ((tmp4)){
			::lime::graphics::Image tmp6 = this->image;
			::lime::graphics::Image tmp7 = tmp6;
			tmp5 = (tmp7 == null());
		}
		else{
			tmp5 = false;
		}
		if ((tmp5)){
			bool tmp6 = this->transparent;
			::openfl::display::BitmapData tmp7 = ::openfl::display::BitmapData_obj::__new((int)0,(int)0,tmp6,(int)0);
			::openfl::display::BitmapData bitmapData = tmp7;
			int tmp8 = this->width;
			bitmapData->width = tmp8;
			int tmp9 = this->height;
			bitmapData->height = tmp9;
			::openfl::geom::Rectangle tmp10 = this->rect;
			bitmapData->rect->copyFrom(tmp10);
			::lime::graphics::opengl::GLObject tmp11 = this->__framebuffer;
			bitmapData->__framebuffer = tmp11;
			::lime::_backend::native::NativeGLRenderContext tmp12 = this->__framebufferContext;
			bitmapData->__framebufferContext = tmp12;
			::lime::graphics::opengl::GLObject tmp13 = this->__texture;
			bitmapData->__texture = tmp13;
			::lime::_backend::native::NativeGLRenderContext tmp14 = this->__textureContext;
			bitmapData->__textureContext = tmp14;
			bitmapData->__isValid = true;
			::openfl::display::BitmapData tmp15 = bitmapData;
			return tmp15;
		}
		else{
			::lime::graphics::Image tmp6 = this->image;
			::lime::graphics::Image tmp7 = tmp6->clone();
			bool tmp8 = this->transparent;
			::openfl::display::BitmapData tmp9 = ::openfl::display::BitmapData_obj::fromImage(tmp7,tmp8);
			return tmp9;
		}
	}
	return null();
}


HX_DEFINE_DYNAMIC_FUNC0(BitmapData_obj,clone,return )

Void BitmapData_obj::colorTransform( ::openfl::geom::Rectangle rect,::openfl::geom::ColorTransform colorTransform){
{
		bool tmp = this->readable;
		bool tmp1 = !(tmp);
		if ((tmp1)){
			return null();
		}
		::lime::graphics::Image tmp2 = this->image;
		::lime::math::Rectangle tmp3 = rect->__toLimeRectangle();
		::lime::utils::ArrayBufferView tmp4 = colorTransform->__toLimeColorMatrix();
		tmp2->colorTransform(tmp3,tmp4);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(BitmapData_obj,colorTransform,(void))

Dynamic BitmapData_obj::compare( ::openfl::display::BitmapData otherBitmapData){
	bool tmp = (otherBitmapData == hx::ObjectPtr<OBJ_>(this));
	if ((tmp)){
		return (int)0;
	}
	else{
		bool tmp1 = (otherBitmapData == null());
		if ((tmp1)){
			return (int)-1;
		}
		else{
			bool tmp2 = this->readable;
			bool tmp3 = (tmp2 == false);
			bool tmp4 = !(tmp3);
			bool tmp5;
			if ((tmp4)){
				tmp5 = (otherBitmapData->readable == false);
			}
			else{
				tmp5 = true;
			}
			if ((tmp5)){
				return (int)-2;
			}
			else{
				int tmp6 = this->width;
				int tmp7 = otherBitmapData->width;
				bool tmp8 = (tmp6 != tmp7);
				if ((tmp8)){
					return (int)-3;
				}
				else{
					int tmp9 = this->height;
					int tmp10 = otherBitmapData->height;
					bool tmp11 = (tmp9 != tmp10);
					if ((tmp11)){
						return (int)-4;
					}
				}
			}
		}
	}
	::lime::graphics::Image tmp1 = this->image;
	bool tmp2 = (tmp1 != null());
	bool tmp3 = tmp2;
	bool tmp4;
	if ((tmp3)){
		tmp4 = (otherBitmapData->image != null());
	}
	else{
		tmp4 = false;
	}
	bool tmp5;
	if ((tmp4)){
		::lime::graphics::Image tmp6 = this->image;
		::lime::graphics::Image tmp7 = tmp6;
		int tmp8 = tmp7->get_format();
		int tmp9 = tmp8;
		int tmp10 = otherBitmapData->image->get_format();
		int tmp11 = tmp10;
		tmp5 = (tmp9 == tmp11);
	}
	else{
		tmp5 = false;
	}
	if ((tmp5)){
		::lime::graphics::Image tmp6 = this->image;
		::lime::utils::ArrayBufferView tmp7 = tmp6->get_data();
		::lime::utils::ArrayBufferView bytes = tmp7;
		::lime::utils::ArrayBufferView tmp8 = otherBitmapData->image->get_data();
		::lime::utils::ArrayBufferView otherBytes = tmp8;
		bool equal = true;
		{
			int _g1 = (int)0;
			int tmp9 = bytes->length;
			int _g = tmp9;
			while((true)){
				bool tmp10 = (_g1 < _g);
				bool tmp11 = !(tmp10);
				if ((tmp11)){
					break;
				}
				int tmp12 = (_g1)++;
				int i = tmp12;
				bool tmp13;
				{
					int tmp14 = ::__hxcpp_memory_get_byte(bytes->buffer->b,(bytes->byteOffset + i));
					Dynamic tmp15 = (int(tmp14) & int((int)255));
					int a = tmp15;
					int tmp16 = ::__hxcpp_memory_get_byte(otherBytes->buffer->b,(otherBytes->byteOffset + i));
					Dynamic tmp17 = (int(tmp16) & int((int)255));
					Dynamic b = tmp17;
					tmp13 = (a != b);
				}
				if ((tmp13)){
					equal = false;
					break;
				}
			}
		}
		bool tmp9 = equal;
		if ((tmp9)){
			return (int)0;
		}
	}
	::openfl::display::BitmapData bitmapData = null();
	bool foundDifference;
	int pixel;
	int otherPixel;
	int comparePixel;
	int r;
	int g;
	int b;
	int a;
	{
		int _g1 = (int)0;
		int tmp6 = this->height;
		int _g = tmp6;
		while((true)){
			bool tmp7 = (_g1 < _g);
			bool tmp8 = !(tmp7);
			if ((tmp8)){
				break;
			}
			int tmp9 = (_g1)++;
			int y = tmp9;
			{
				int _g3 = (int)0;
				int tmp10 = this->width;
				int _g2 = tmp10;
				while((true)){
					bool tmp11 = (_g3 < _g2);
					bool tmp12 = !(tmp11);
					if ((tmp12)){
						break;
					}
					int tmp13 = (_g3)++;
					int x = tmp13;
					foundDifference = false;
					int tmp14 = x;
					int tmp15 = y;
					int tmp16 = this->getPixel32(tmp14,tmp15);
					pixel = tmp16;
					int tmp17 = x;
					int tmp18 = y;
					int tmp19 = otherBitmapData->getPixel32(tmp17,tmp18);
					otherPixel = tmp19;
					comparePixel = (int)0;
					bool tmp20 = (pixel != otherPixel);
					if ((tmp20)){
						int tmp21 = (int(pixel) >> int((int)16));
						int tmp22 = tmp21;
						int tmp23 = (int(tmp22) & int((int)255));
						int tmp24 = tmp23;
						int tmp25 = (int(otherPixel) >> int((int)16));
						int tmp26 = tmp25;
						int tmp27 = (int(tmp26) & int((int)255));
						int tmp28 = tmp27;
						int tmp29 = (tmp24 - tmp28);
						r = tmp29;
						int tmp30 = (int(pixel) >> int((int)8));
						int tmp31 = tmp30;
						int tmp32 = (int(tmp31) & int((int)255));
						int tmp33 = tmp32;
						int tmp34 = (int(otherPixel) >> int((int)8));
						int tmp35 = tmp34;
						int tmp36 = (int(tmp35) & int((int)255));
						int tmp37 = tmp36;
						int tmp38 = (tmp33 - tmp37);
						g = tmp38;
						int tmp39 = (int(pixel) & int((int)255));
						int tmp40 = tmp39;
						int tmp41 = (int(otherPixel) & int((int)255));
						int tmp42 = tmp41;
						int tmp43 = (tmp40 - tmp42);
						b = tmp43;
						bool tmp44 = (r < (int)0);
						if ((tmp44)){
							hx::MultEq(r,(int)-1);
						}
						bool tmp45 = (g < (int)0);
						if ((tmp45)){
							hx::MultEq(g,(int)-1);
						}
						bool tmp46 = (b < (int)0);
						if ((tmp46)){
							hx::MultEq(b,(int)-1);
						}
						bool tmp47 = (r == (int)0);
						bool tmp48 = tmp47;
						bool tmp49;
						if ((tmp48)){
							tmp49 = (g == (int)0);
						}
						else{
							tmp49 = false;
						}
						bool tmp50;
						if ((tmp49)){
							tmp50 = (b == (int)0);
						}
						else{
							tmp50 = false;
						}
						if ((tmp50)){
							int tmp51 = (int(pixel) >> int((int)24));
							int tmp52 = tmp51;
							int tmp53 = (int(tmp52) & int((int)255));
							int tmp54 = tmp53;
							int tmp55 = (int(otherPixel) >> int((int)24));
							int tmp56 = tmp55;
							int tmp57 = (int(tmp56) & int((int)255));
							int tmp58 = tmp57;
							int tmp59 = (tmp54 - tmp58);
							a = tmp59;
							bool tmp60 = (a != (int)0);
							if ((tmp60)){
								{
									{
										int tmp61 = (int(comparePixel) >> int((int)24));
										int tmp62 = tmp61;
										int tmp63 = (int(tmp62) & int((int)255));
										int tmp64 = tmp63;
										int tmp65 = (int(tmp64) & int((int)255));
										int tmp66 = (int(tmp65) << int((int)24));
										int tmp67 = (int)255;
										int tmp68 = (int(tmp67) << int((int)16));
										int tmp69 = (int(tmp66) | int(tmp68));
										int tmp70 = (int(comparePixel) >> int((int)8));
										int tmp71 = tmp70;
										int tmp72 = (int(tmp71) & int((int)255));
										int tmp73 = tmp72;
										int tmp74 = (int(tmp73) & int((int)255));
										int tmp75 = (int(tmp74) << int((int)8));
										int tmp76 = (int(tmp69) | int(tmp75));
										int tmp77 = (int(comparePixel) & int((int)255));
										int tmp78 = tmp77;
										int tmp79 = (int(tmp78) & int((int)255));
										int tmp80 = (int(tmp76) | int(tmp79));
										comparePixel = tmp80;
									}
									(int)255;
								}
								{
									{
										int tmp61 = (int(comparePixel) >> int((int)24));
										int tmp62 = tmp61;
										int tmp63 = (int(tmp62) & int((int)255));
										int tmp64 = tmp63;
										int tmp65 = (int(tmp64) & int((int)255));
										int tmp66 = (int(tmp65) << int((int)24));
										int tmp67 = (int(comparePixel) >> int((int)16));
										int tmp68 = tmp67;
										int tmp69 = (int(tmp68) & int((int)255));
										int tmp70 = tmp69;
										int tmp71 = (int(tmp70) & int((int)255));
										int tmp72 = (int(tmp71) << int((int)16));
										int tmp73 = (int(tmp66) | int(tmp72));
										int tmp74 = (int)255;
										int tmp75 = (int(tmp74) << int((int)8));
										int tmp76 = (int(tmp73) | int(tmp75));
										int tmp77 = (int(comparePixel) & int((int)255));
										int tmp78 = tmp77;
										int tmp79 = (int(tmp78) & int((int)255));
										int tmp80 = (int(tmp76) | int(tmp79));
										comparePixel = tmp80;
									}
									(int)255;
								}
								{
									{
										int tmp61 = (int(comparePixel) >> int((int)24));
										int tmp62 = tmp61;
										int tmp63 = (int(tmp62) & int((int)255));
										int tmp64 = tmp63;
										int tmp65 = (int(tmp64) & int((int)255));
										int tmp66 = (int(tmp65) << int((int)24));
										int tmp67 = (int(comparePixel) >> int((int)16));
										int tmp68 = tmp67;
										int tmp69 = (int(tmp68) & int((int)255));
										int tmp70 = tmp69;
										int tmp71 = (int(tmp70) & int((int)255));
										int tmp72 = (int(tmp71) << int((int)16));
										int tmp73 = (int(tmp66) | int(tmp72));
										int tmp74 = (int(comparePixel) >> int((int)8));
										int tmp75 = tmp74;
										int tmp76 = (int(tmp75) & int((int)255));
										int tmp77 = tmp76;
										int tmp78 = (int(tmp77) & int((int)255));
										int tmp79 = (int(tmp78) << int((int)8));
										int tmp80 = (int(tmp73) | int(tmp79));
										int tmp81 = (int)255;
										int tmp82 = (int(tmp80) | int(tmp81));
										comparePixel = tmp82;
									}
									(int)255;
								}
								{
									{
										int tmp61 = (int(a) & int((int)255));
										int tmp62 = (int(tmp61) << int((int)24));
										int tmp63 = (int(comparePixel) >> int((int)16));
										int tmp64 = tmp63;
										int tmp65 = (int(tmp64) & int((int)255));
										int tmp66 = tmp65;
										int tmp67 = (int(tmp66) & int((int)255));
										int tmp68 = (int(tmp67) << int((int)16));
										int tmp69 = (int(tmp62) | int(tmp68));
										int tmp70 = (int(comparePixel) >> int((int)8));
										int tmp71 = tmp70;
										int tmp72 = (int(tmp71) & int((int)255));
										int tmp73 = tmp72;
										int tmp74 = (int(tmp73) & int((int)255));
										int tmp75 = (int(tmp74) << int((int)8));
										int tmp76 = (int(tmp69) | int(tmp75));
										int tmp77 = (int(comparePixel) & int((int)255));
										int tmp78 = tmp77;
										int tmp79 = (int(tmp78) & int((int)255));
										int tmp80 = (int(tmp76) | int(tmp79));
										comparePixel = tmp80;
									}
									a;
								}
								foundDifference = true;
							}
						}
						else{
							{
								{
									int tmp51 = (int(comparePixel) >> int((int)24));
									int tmp52 = tmp51;
									int tmp53 = (int(tmp52) & int((int)255));
									int tmp54 = tmp53;
									int tmp55 = (int(tmp54) & int((int)255));
									int tmp56 = (int(tmp55) << int((int)24));
									int tmp57 = (int(r) & int((int)255));
									int tmp58 = (int(tmp57) << int((int)16));
									int tmp59 = (int(tmp56) | int(tmp58));
									int tmp60 = (int(comparePixel) >> int((int)8));
									int tmp61 = tmp60;
									int tmp62 = (int(tmp61) & int((int)255));
									int tmp63 = tmp62;
									int tmp64 = (int(tmp63) & int((int)255));
									int tmp65 = (int(tmp64) << int((int)8));
									int tmp66 = (int(tmp59) | int(tmp65));
									int tmp67 = (int(comparePixel) & int((int)255));
									int tmp68 = tmp67;
									int tmp69 = (int(tmp68) & int((int)255));
									int tmp70 = (int(tmp66) | int(tmp69));
									comparePixel = tmp70;
								}
								r;
							}
							{
								{
									int tmp51 = (int(comparePixel) >> int((int)24));
									int tmp52 = tmp51;
									int tmp53 = (int(tmp52) & int((int)255));
									int tmp54 = tmp53;
									int tmp55 = (int(tmp54) & int((int)255));
									int tmp56 = (int(tmp55) << int((int)24));
									int tmp57 = (int(comparePixel) >> int((int)16));
									int tmp58 = tmp57;
									int tmp59 = (int(tmp58) & int((int)255));
									int tmp60 = tmp59;
									int tmp61 = (int(tmp60) & int((int)255));
									int tmp62 = (int(tmp61) << int((int)16));
									int tmp63 = (int(tmp56) | int(tmp62));
									int tmp64 = (int(g) & int((int)255));
									int tmp65 = (int(tmp64) << int((int)8));
									int tmp66 = (int(tmp63) | int(tmp65));
									int tmp67 = (int(comparePixel) & int((int)255));
									int tmp68 = tmp67;
									int tmp69 = (int(tmp68) & int((int)255));
									int tmp70 = (int(tmp66) | int(tmp69));
									comparePixel = tmp70;
								}
								g;
							}
							{
								{
									int tmp51 = (int(comparePixel) >> int((int)24));
									int tmp52 = tmp51;
									int tmp53 = (int(tmp52) & int((int)255));
									int tmp54 = tmp53;
									int tmp55 = (int(tmp54) & int((int)255));
									int tmp56 = (int(tmp55) << int((int)24));
									int tmp57 = (int(comparePixel) >> int((int)16));
									int tmp58 = tmp57;
									int tmp59 = (int(tmp58) & int((int)255));
									int tmp60 = tmp59;
									int tmp61 = (int(tmp60) & int((int)255));
									int tmp62 = (int(tmp61) << int((int)16));
									int tmp63 = (int(tmp56) | int(tmp62));
									int tmp64 = (int(comparePixel) >> int((int)8));
									int tmp65 = tmp64;
									int tmp66 = (int(tmp65) & int((int)255));
									int tmp67 = tmp66;
									int tmp68 = (int(tmp67) & int((int)255));
									int tmp69 = (int(tmp68) << int((int)8));
									int tmp70 = (int(tmp63) | int(tmp69));
									int tmp71 = (int(b) & int((int)255));
									int tmp72 = (int(tmp70) | int(tmp71));
									comparePixel = tmp72;
								}
								b;
							}
							{
								{
									int tmp51 = (int)255;
									int tmp52 = (int(tmp51) << int((int)24));
									int tmp53 = (int(comparePixel) >> int((int)16));
									int tmp54 = tmp53;
									int tmp55 = (int(tmp54) & int((int)255));
									int tmp56 = tmp55;
									int tmp57 = (int(tmp56) & int((int)255));
									int tmp58 = (int(tmp57) << int((int)16));
									int tmp59 = (int(tmp52) | int(tmp58));
									int tmp60 = (int(comparePixel) >> int((int)8));
									int tmp61 = tmp60;
									int tmp62 = (int(tmp61) & int((int)255));
									int tmp63 = tmp62;
									int tmp64 = (int(tmp63) & int((int)255));
									int tmp65 = (int(tmp64) << int((int)8));
									int tmp66 = (int(tmp59) | int(tmp65));
									int tmp67 = (int(comparePixel) & int((int)255));
									int tmp68 = tmp67;
									int tmp69 = (int(tmp68) & int((int)255));
									int tmp70 = (int(tmp66) | int(tmp69));
									comparePixel = tmp70;
								}
								(int)255;
							}
							foundDifference = true;
						}
					}
					bool tmp21 = foundDifference;
					if ((tmp21)){
						bool tmp22 = (bitmapData == null());
						if ((tmp22)){
							int tmp23 = this->width;
							int tmp24 = this->height;
							bool tmp25 = this->transparent;
							bool tmp26 = !(tmp25);
							bool tmp27;
							if ((tmp26)){
								tmp27 = otherBitmapData->transparent;
							}
							else{
								tmp27 = true;
							}
							::openfl::display::BitmapData tmp28 = ::openfl::display::BitmapData_obj::__new(tmp23,tmp24,tmp27,(int)0);
							bitmapData = tmp28;
						}
						int tmp23 = x;
						int tmp24 = y;
						int tmp25 = comparePixel;
						bitmapData->setPixel32(tmp23,tmp24,tmp25);
					}
				}
			}
		}
	}
	bool tmp6 = (bitmapData == null());
	if ((tmp6)){
		return (int)0;
	}
	::openfl::display::BitmapData tmp7 = bitmapData;
	return tmp7;
}


HX_DEFINE_DYNAMIC_FUNC1(BitmapData_obj,compare,return )

Void BitmapData_obj::copyChannel( ::openfl::display::BitmapData sourceBitmapData,::openfl::geom::Rectangle sourceRect,::openfl::geom::Point destPoint,int sourceChannel,int destChannel){
{
		bool tmp = this->readable;
		bool tmp1 = !(tmp);
		if ((tmp1)){
			return null();
		}
		int tmp2 = sourceChannel;
		::lime::graphics::ImageChannel tmp3;
		switch( (int)(tmp2)){
			case (int)1: {
				tmp3 = ::lime::graphics::ImageChannel_obj::RED;
			}
			;break;
			case (int)2: {
				tmp3 = ::lime::graphics::ImageChannel_obj::GREEN;
			}
			;break;
			case (int)4: {
				tmp3 = ::lime::graphics::ImageChannel_obj::BLUE;
			}
			;break;
			case (int)8: {
				tmp3 = ::lime::graphics::ImageChannel_obj::ALPHA;
			}
			;break;
			default: {
				return null();
			}
		}
		::lime::graphics::ImageChannel sourceChannel1 = tmp3;
		int tmp4 = destChannel;
		::lime::graphics::ImageChannel tmp5;
		switch( (int)(tmp4)){
			case (int)1: {
				tmp5 = ::lime::graphics::ImageChannel_obj::RED;
			}
			;break;
			case (int)2: {
				tmp5 = ::lime::graphics::ImageChannel_obj::GREEN;
			}
			;break;
			case (int)4: {
				tmp5 = ::lime::graphics::ImageChannel_obj::BLUE;
			}
			;break;
			case (int)8: {
				tmp5 = ::lime::graphics::ImageChannel_obj::ALPHA;
			}
			;break;
			default: {
				return null();
			}
		}
		::lime::graphics::ImageChannel destChannel1 = tmp5;
		::lime::graphics::Image tmp6 = this->image;
		::lime::graphics::Image tmp7 = sourceBitmapData->image;
		::lime::math::Rectangle tmp8 = sourceRect->__toLimeRectangle();
		::lime::math::Vector2 tmp9 = destPoint->__toLimeVector2();
		::lime::graphics::ImageChannel tmp10 = sourceChannel1;
		::lime::graphics::ImageChannel tmp11 = destChannel1;
		tmp6->copyChannel(tmp7,tmp8,tmp9,tmp10,tmp11);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC5(BitmapData_obj,copyChannel,(void))

Void BitmapData_obj::copyPixels( ::openfl::display::BitmapData sourceBitmapData,::openfl::geom::Rectangle sourceRect,::openfl::geom::Point destPoint,::openfl::display::BitmapData alphaBitmapData,::openfl::geom::Point alphaPoint,hx::Null< bool >  __o_mergeAlpha){
bool mergeAlpha = __o_mergeAlpha.Default(false);
{
		bool tmp = this->readable;
		bool tmp1 = tmp;
		bool tmp2 = !(tmp1);
		bool tmp3 = !(tmp2);
		bool tmp4;
		if ((tmp3)){
			tmp4 = (sourceBitmapData == null());
		}
		else{
			tmp4 = true;
		}
		if ((tmp4)){
			return null();
		}
		::lime::graphics::Image tmp5 = this->image;
		::lime::graphics::Image tmp6 = sourceBitmapData->image;
		::lime::math::Rectangle tmp7 = sourceRect->__toLimeRectangle();
		::lime::math::Vector2 tmp8 = destPoint->__toLimeVector2();
		bool tmp9 = (alphaBitmapData != null());
		::lime::graphics::Image tmp10;
		if ((tmp9)){
			tmp10 = alphaBitmapData->image;
		}
		else{
			tmp10 = null();
		}
		bool tmp11 = (alphaPoint != null());
		::lime::math::Vector2 tmp12;
		if ((tmp11)){
			tmp12 = alphaPoint->__toLimeVector2();
		}
		else{
			tmp12 = null();
		}
		bool tmp13 = mergeAlpha;
		tmp5->copyPixels(tmp6,tmp7,tmp8,tmp10,tmp12,tmp13);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC6(BitmapData_obj,copyPixels,(void))

Void BitmapData_obj::dispose( ){
{
		this->image = null();
		this->width = (int)0;
		this->height = (int)0;
		this->rect = null();
		this->__isValid = false;
		this->readable = false;
		this->__surface = null();
		this->__buffer = null();
		this->__framebuffer = null();
		this->__framebufferContext = null();
		this->__texture = null();
		this->__textureContext = null();
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(BitmapData_obj,dispose,(void))

Void BitmapData_obj::disposeImage( ){
{
		this->readable = false;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(BitmapData_obj,disposeImage,(void))

Void BitmapData_obj::draw( ::openfl::display::IBitmapDrawable source,::openfl::geom::Matrix matrix,::openfl::geom::ColorTransform colorTransform,Dynamic blendMode,::openfl::geom::Rectangle clipRect,hx::Null< bool >  __o_smoothing){
bool smoothing = __o_smoothing.Default(false);
{
		bool tmp = (matrix == null());
		if ((tmp)){
			::openfl::geom::Matrix tmp1 = ::openfl::geom::Matrix_obj::__new(null(),null(),null(),null(),null(),null());
			matrix = tmp1;
			bool tmp2 = (source->__Field(HX_HCSTRING("__transform","\x4c","\x76","\xbf","\x73"), hx::paccDynamic ) != null());
			if ((tmp2)){
				::openfl::geom::Matrix tmp3 = source->__Field(HX_HCSTRING("__transform","\x4c","\x76","\xbf","\x73"), hx::paccDynamic );
				matrix->copyFrom(tmp3);
				matrix->tx = (int)0;
				matrix->ty = (int)0;
			}
		}
		bool tmp1 = this->readable;
		bool tmp2 = !(tmp1);
		if ((tmp2)){
			::lime::_backend::native::NativeGLRenderContext tmp3 = ::lime::graphics::opengl::GL_obj::context;
			bool tmp4 = (tmp3 != null());
			if ((tmp4)){
				::lime::_backend::native::NativeGLRenderContext tmp5 = ::lime::graphics::opengl::GL_obj::context;
				::lime::_backend::native::NativeGLRenderContext gl = tmp5;
				int tmp6 = gl->FRAMEBUFFER;
				::lime::_backend::native::NativeGLRenderContext tmp7 = gl;
				::lime::graphics::opengl::GLObject tmp8 = this->__getFramebuffer(tmp7);
				gl->bindFramebuffer(tmp6,tmp8);
				int tmp9 = this->width;
				int tmp10 = this->height;
				gl->viewport((int)0,(int)0,tmp9,tmp10);
				::openfl::display::MovieClip tmp11 = ::openfl::Lib_obj::current;
				::openfl::display::Stage tmp12 = tmp11->stage;
				::lime::_backend::native::NativeGLRenderContext tmp13 = gl;
				::openfl::_internal::renderer::opengl::GLRenderer tmp14 = ::openfl::_internal::renderer::opengl::GLRenderer_obj::__new(tmp12,tmp13,false);
				::openfl::_internal::renderer::opengl::GLRenderer renderer = tmp14;
				int tmp15 = this->width;
				int tmp16 = this->height;
				renderer->resize(tmp15,tmp16);
				::openfl::_internal::renderer::RenderSession renderSession = renderer->renderSession;
				renderSession->clearDirtyFlags = false;
				::openfl::display::MovieClip tmp17 = ::openfl::Lib_obj::current;
				::openfl::_internal::renderer::AbstractRenderer tmp18 = tmp17->stage->__renderer;
				::openfl::_internal::renderer::opengl::GLRenderer tmp19;
				tmp19 = hx::TCast< ::openfl::_internal::renderer::opengl::GLRenderer >::cast(tmp18);
				::openfl::_internal::renderer::AbstractShaderManager tmp20 = tmp19->renderSession->shaderManager;
				renderSession->shaderManager = tmp20;
				::openfl::geom::Matrix matrixCache = source->__Field(HX_HCSTRING("__worldTransform","\xda","\xa7","\xd8","\x9a"), hx::paccDynamic );
				::openfl::geom::Matrix tmp21 = matrix;
				source->__updateTransforms(tmp21);
				source->__updateChildren(false);
				::openfl::_internal::renderer::RenderSession tmp22 = renderer->renderSession;
				source->__renderGL(tmp22);
				::openfl::geom::Matrix tmp23 = matrixCache;
				source->__updateTransforms(tmp23);
				source->__updateChildren(true);
				int tmp24 = gl->FRAMEBUFFER;
				gl->bindFramebuffer(tmp24,null());
			}
		}
		else{
			bool tmp3 = (source == hx::ObjectPtr<OBJ_>(this));
			if ((tmp3)){
				::openfl::display::BitmapData tmp4 = this->clone();
				source = tmp4;
			}
			bool tmp4 = (colorTransform != null());
			if ((tmp4)){
				::lime::utils::ObjectPool_openfl_geom_Rectangle tmp5 = ::openfl::geom::Rectangle_obj::__pool;
				::openfl::geom::Rectangle tmp6 = tmp5->get();
				::openfl::geom::Rectangle bounds = tmp6;
				::lime::utils::ObjectPool_openfl_geom_Matrix tmp7 = ::openfl::geom::Matrix_obj::__pool;
				::openfl::geom::Matrix tmp8 = tmp7->get();
				::openfl::geom::Matrix boundsMatrix = tmp8;
				::openfl::geom::Rectangle tmp9 = bounds;
				::openfl::geom::Matrix tmp10 = boundsMatrix;
				source->__getBounds(tmp9,tmp10);
				Float tmp11 = bounds->width;
				int tmp12 = ::Math_obj::ceil(tmp11);
				int width = tmp12;
				Float tmp13 = bounds->height;
				int tmp14 = ::Math_obj::ceil(tmp13);
				int height = tmp14;
				::openfl::display::BitmapData tmp15 = ::openfl::display::BitmapData_obj::__new(width,height,true,(int)0);
				::openfl::display::BitmapData copy = tmp15;
				::openfl::display::IBitmapDrawable tmp16 = source;
				copy->draw(tmp16,null(),null(),null(),null(),null());
				::openfl::geom::Rectangle tmp17 = copy->rect;
				::openfl::geom::ColorTransform tmp18 = colorTransform;
				copy->colorTransform(tmp17,tmp18);
				source = copy;
				::lime::utils::ObjectPool_openfl_geom_Rectangle tmp19 = ::openfl::geom::Rectangle_obj::__pool;
				::openfl::geom::Rectangle tmp20 = bounds;
				tmp19->release(tmp20);
				::lime::utils::ObjectPool_openfl_geom_Matrix tmp21 = ::openfl::geom::Matrix_obj::__pool;
				::openfl::geom::Matrix tmp22 = boundsMatrix;
				tmp21->release(tmp22);
			}
			Dynamic tmp5 = this->getSurface();
			Dynamic surface = tmp5;
			::lime::graphics::cairo::Cairo tmp6 = ::lime::graphics::cairo::Cairo_obj::__new(surface);
			::lime::graphics::cairo::Cairo cairo = tmp6;
			bool tmp7 = smoothing;
			bool tmp8 = !(tmp7);
			if ((tmp8)){
				cairo->set_antialias((int)1);
			}
			::openfl::_internal::renderer::RenderSession tmp9 = ::openfl::_internal::renderer::RenderSession_obj::__new();
			::openfl::_internal::renderer::RenderSession renderSession = tmp9;
			renderSession->clearDirtyFlags = false;
			renderSession->cairo = cairo;
			renderSession->allowSmoothing = smoothing;
			::openfl::_internal::renderer::cairo::CairoMaskManager tmp10 = ::openfl::_internal::renderer::cairo::CairoMaskManager_obj::__new(renderSession);
			renderSession->maskManager = tmp10;
			::openfl::_internal::renderer::cairo::CairoBlendModeManager tmp11 = ::openfl::_internal::renderer::cairo::CairoBlendModeManager_obj::__new(renderSession);
			renderSession->blendModeManager = tmp11;
			bool tmp12 = (clipRect != null());
			if ((tmp12)){
				::openfl::geom::Rectangle tmp13 = clipRect;
				::openfl::geom::Matrix tmp14 = ::openfl::geom::Matrix_obj::__new(null(),null(),null(),null(),null(),null());
				renderSession->maskManager->pushRect(tmp13,tmp14);
			}
			::openfl::geom::Matrix matrixCache = source->__Field(HX_HCSTRING("__worldTransform","\xda","\xa7","\xd8","\x9a"), hx::paccDynamic );
			::openfl::geom::Matrix tmp13 = matrix;
			source->__updateTransforms(tmp13);
			source->__updateChildren(false);
			::openfl::_internal::renderer::RenderSession tmp14 = renderSession;
			source->__renderCairo(tmp14);
			::openfl::geom::Matrix tmp15 = matrixCache;
			source->__updateTransforms(tmp15);
			source->__updateChildren(true);
			bool tmp16 = (clipRect != null());
			if ((tmp16)){
				renderSession->maskManager->popRect();
			}
			Dynamic tmp17 = surface;
			::lime::graphics::cairo::_CairoSurface::CairoSurface_Impl__obj::flush(tmp17);
			::lime::graphics::Image tmp18 = this->image;
			tmp18->dirty = true;
			::lime::graphics::Image tmp19 = this->image;
			(tmp19->version)++;
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC6(BitmapData_obj,draw,(void))

Void BitmapData_obj::drawWithQuality( ::openfl::display::IBitmapDrawable source,::openfl::geom::Matrix matrix,::openfl::geom::ColorTransform colorTransform,Dynamic blendMode,::openfl::geom::Rectangle clipRect,hx::Null< bool >  __o_smoothing,Dynamic quality){
bool smoothing = __o_smoothing.Default(false);
{
		::openfl::display::IBitmapDrawable tmp = source;
		::openfl::geom::Matrix tmp1 = matrix;
		::openfl::geom::ColorTransform tmp2 = colorTransform;
		Dynamic tmp3 = blendMode;
		::openfl::geom::Rectangle tmp4 = clipRect;
		bool tmp5 = (quality != ((Dynamic)((int)2)));
		bool tmp6;
		if ((tmp5)){
			tmp6 = smoothing;
		}
		else{
			tmp6 = false;
		}
		this->draw(tmp,tmp1,tmp2,tmp3,tmp4,tmp6);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC7(BitmapData_obj,drawWithQuality,(void))

::openfl::utils::ByteArrayData BitmapData_obj::encode( ::openfl::geom::Rectangle rect,Dynamic compressor,::openfl::utils::ByteArrayData byteArray){
	bool tmp = this->readable;
	bool tmp1 = tmp;
	bool tmp2 = !(tmp1);
	bool tmp3 = !(tmp2);
	bool tmp4;
	if ((tmp3)){
		tmp4 = (rect == null());
	}
	else{
		tmp4 = true;
	}
	if ((tmp4)){
		::openfl::utils::ByteArrayData tmp5 = byteArray = null();
		return tmp5;
	}
	bool tmp5 = (byteArray == null());
	if ((tmp5)){
		::openfl::utils::ByteArrayData tmp6;
		{
			int length = (int)0;
			::openfl::utils::ByteArrayData tmp7 = ::openfl::utils::ByteArrayData_obj::__new(length);
			tmp6 = tmp7;
		}
		byteArray = tmp6;
	}
	::lime::graphics::Image tmp6 = this->image;
	::lime::graphics::Image image = tmp6;
	::openfl::geom::Rectangle tmp7 = this->rect;
	bool tmp8 = rect->equals(tmp7);
	bool tmp9 = !(tmp8);
	if ((tmp9)){
		::lime::utils::ObjectPool_openfl_geom_Matrix tmp10 = ::openfl::geom::Matrix_obj::__pool;
		::openfl::geom::Matrix tmp11 = tmp10->get();
		::openfl::geom::Matrix matrix = tmp11;
		Float tmp12 = rect->x;
		Float tmp13 = -(tmp12);
		int tmp14 = ::Math_obj::round(tmp13);
		matrix->tx = tmp14;
		Float tmp15 = rect->y;
		Float tmp16 = -(tmp15);
		int tmp17 = ::Math_obj::round(tmp16);
		matrix->ty = tmp17;
		Float tmp18 = rect->width;
		int tmp19 = ::Math_obj::ceil(tmp18);
		Float tmp20 = rect->height;
		int tmp21 = ::Math_obj::ceil(tmp20);
		::openfl::display::BitmapData tmp22 = ::openfl::display::BitmapData_obj::__new(tmp19,tmp21,true,(int)0);
		::openfl::display::BitmapData bitmapData = tmp22;
		::openfl::geom::Matrix tmp23 = matrix;
		bitmapData->draw(hx::ObjectPtr<OBJ_>(this),tmp23,null(),null(),null(),null());
		image = bitmapData->image;
		::lime::utils::ObjectPool_openfl_geom_Matrix tmp24 = ::openfl::geom::Matrix_obj::__pool;
		::openfl::geom::Matrix tmp25 = matrix;
		tmp24->release(tmp25);
	}
	Dynamic tmp10 = compressor;
	bool tmp11 = ::Std_obj::is(tmp10,hx::ClassOf< ::openfl::display::PNGEncoderOptions >());
	if ((tmp11)){
		::haxe::io::Bytes tmp12 = image->encode(HX_HCSTRING("png","\xa9","\x5c","\x55","\x00"),null());
		::openfl::utils::ByteArrayData tmp13 = ::openfl::utils::_ByteArray::ByteArray_Impl__obj::fromBytes(tmp12);
		byteArray->writeBytes(tmp13,null(),null());
		::openfl::utils::ByteArrayData tmp14 = byteArray;
		return tmp14;
	}
	else{
		Dynamic tmp12 = compressor;
		bool tmp13 = ::Std_obj::is(tmp12,hx::ClassOf< ::openfl::display::JPEGEncoderOptions >());
		if ((tmp13)){
			::openfl::display::JPEGEncoderOptions tmp14;
			tmp14 = hx::TCast< ::openfl::display::JPEGEncoderOptions >::cast(compressor);
			int tmp15 = tmp14->quality;
			::haxe::io::Bytes tmp16 = image->encode(HX_HCSTRING("jpg","\xe1","\xd0","\x50","\x00"),tmp15);
			::openfl::utils::ByteArrayData tmp17 = ::openfl::utils::_ByteArray::ByteArray_Impl__obj::fromBytes(tmp16);
			byteArray->writeBytes(tmp17,null(),null());
			::openfl::utils::ByteArrayData tmp18 = byteArray;
			return tmp18;
		}
	}
	::openfl::utils::ByteArrayData tmp12 = byteArray = null();
	return tmp12;
}


HX_DEFINE_DYNAMIC_FUNC3(BitmapData_obj,encode,return )

Void BitmapData_obj::fillRect( ::openfl::geom::Rectangle rect,int color){
{
		bool tmp = (rect == null());
		if ((tmp)){
			return null();
		}
		bool tmp1 = this->transparent;
		bool tmp2;
		if ((tmp1)){
			int tmp3 = (int(color) & int((int)-16777216));
			int tmp4 = tmp3;
			tmp2 = (tmp4 == (int)0);
		}
		else{
			tmp2 = false;
		}
		if ((tmp2)){
			color = (int)0;
		}
		bool tmp3 = this->readable;
		if ((tmp3)){
			::lime::graphics::Image tmp4 = this->image;
			::lime::math::Rectangle tmp5 = rect->__toLimeRectangle();
			int tmp6 = color;
			tmp4->fillRect(tmp5,tmp6,(int)1);
		}
		else{
			::lime::graphics::opengl::GLObject tmp4 = this->__framebuffer;
			bool tmp5 = (tmp4 != null());
			if ((tmp5)){
				::lime::_backend::native::NativeGLRenderContext tmp6 = ::lime::graphics::opengl::GL_obj::context;
				::lime::_backend::native::NativeGLRenderContext gl = tmp6;
				int color1 = color;
				::openfl::geom::Rectangle tmp7 = this->rect;
				::openfl::geom::Rectangle tmp8 = rect;
				bool tmp9 = tmp7->equals(tmp8);
				bool tmp10 = !(tmp9);
				bool useScissor = tmp10;
				int tmp11 = gl->FRAMEBUFFER;
				::lime::graphics::opengl::GLObject tmp12 = this->__framebuffer;
				gl->bindFramebuffer(tmp11,tmp12);
				bool tmp13 = useScissor;
				if ((tmp13)){
					int tmp14 = gl->SCISSOR_TEST;
					gl->enable(tmp14);
					Float tmp15 = rect->x;
					int tmp16 = ::Math_obj::round(tmp15);
					Float tmp17 = rect->y;
					int tmp18 = ::Math_obj::round(tmp17);
					Float tmp19 = rect->width;
					int tmp20 = ::Math_obj::round(tmp19);
					Float tmp21 = rect->height;
					int tmp22 = ::Math_obj::round(tmp21);
					gl->scissor(tmp16,tmp18,tmp20,tmp22);
				}
				int tmp14 = (int(color1) >> int((int)16));
				int tmp15 = tmp14;
				int tmp16 = (int(tmp15) & int((int)255));
				int tmp17 = tmp16;
				Float tmp18 = (Float(tmp17) / Float((int)255));
				int tmp19 = (int(color1) >> int((int)8));
				int tmp20 = tmp19;
				int tmp21 = (int(tmp20) & int((int)255));
				int tmp22 = tmp21;
				Float tmp23 = (Float(tmp22) / Float((int)255));
				int tmp24 = (int(color1) & int((int)255));
				int tmp25 = tmp24;
				Float tmp26 = (Float(tmp25) / Float((int)255));
				int tmp27 = (int(color1) >> int((int)24));
				int tmp28 = tmp27;
				int tmp29 = (int(tmp28) & int((int)255));
				int tmp30 = tmp29;
				Float tmp31 = (Float(tmp30) / Float((int)255));
				gl->clearColor(tmp18,tmp23,tmp26,tmp31);
				int tmp32 = gl->COLOR_BUFFER_BIT;
				gl->clear(tmp32);
				bool tmp33 = useScissor;
				if ((tmp33)){
					int tmp34 = gl->SCISSOR_TEST;
					gl->disable(tmp34);
				}
				int tmp34 = gl->FRAMEBUFFER;
				gl->bindFramebuffer(tmp34,null());
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(BitmapData_obj,fillRect,(void))

Void BitmapData_obj::floodFill( int x,int y,int color){
{
		bool tmp = this->readable;
		bool tmp1 = !(tmp);
		if ((tmp1)){
			return null();
		}
		::lime::graphics::Image tmp2 = this->image;
		int tmp3 = x;
		int tmp4 = y;
		int tmp5 = color;
		tmp2->floodFill(tmp3,tmp4,tmp5,(int)1);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC3(BitmapData_obj,floodFill,(void))

::openfl::geom::Rectangle BitmapData_obj::generateFilterRect( ::openfl::geom::Rectangle sourceRect,::openfl::filters::BitmapFilter filter){
	::openfl::geom::Rectangle tmp = sourceRect->clone();
	return tmp;
}


HX_DEFINE_DYNAMIC_FUNC2(BitmapData_obj,generateFilterRect,return )

::lime::graphics::opengl::GLObject BitmapData_obj::getBuffer( ::lime::_backend::native::NativeGLRenderContext gl,Float alpha){
	::lime::graphics::opengl::GLObject tmp = this->__buffer;
	bool tmp1 = (tmp == null());
	bool tmp2 = !(tmp1);
	bool tmp3;
	if ((tmp2)){
		::lime::_backend::native::NativeGLRenderContext tmp4 = this->__bufferContext;
		::lime::_backend::native::NativeGLRenderContext tmp5 = tmp4;
		::lime::_backend::native::NativeGLRenderContext tmp6 = gl;
		tmp3 = (tmp5 != tmp6);
	}
	else{
		tmp3 = true;
	}
	if ((tmp3)){
		int uvWidth = (int)1;
		int uvHeight = (int)1;
		::lime::utils::ArrayBufferView tmp4;
		{
			int tmp5 = this->width;
			int tmp6 = this->height;
			int tmp7 = uvWidth;
			int tmp8 = uvHeight;
			Float tmp9 = alpha;
			int tmp10 = this->height;
			int tmp11 = uvHeight;
			Float tmp12 = alpha;
			int tmp13 = this->width;
			int tmp14 = uvWidth;
			Float tmp15 = alpha;
			Float tmp16 = alpha;
			cpp::ArrayBase array = Array_obj< Float >::__new().Add(tmp5).Add(tmp6).Add((int)0).Add(tmp7).Add(tmp8).Add(tmp9).Add((int)0).Add(tmp10).Add((int)0).Add((int)0).Add(tmp11).Add(tmp12).Add(tmp13).Add((int)0).Add((int)0).Add(tmp14).Add((int)0).Add(tmp15).Add((int)0).Add((int)0).Add((int)0).Add((int)0).Add((int)0).Add(tmp16);
			::lime::utils::ArrayBufferView this1;
			bool tmp17 = false;
			if ((tmp17)){
				::lime::utils::ArrayBufferView tmp18 = ::lime::utils::ArrayBufferView_obj::__new(null(),(int)8);
				this1 = tmp18;
			}
			else{
				bool tmp18 = (array != null());
				if ((tmp18)){
					::lime::utils::ArrayBufferView tmp19;
					{
						::lime::utils::ArrayBufferView tmp20 = ::lime::utils::ArrayBufferView_obj::__new((int)0,(int)8);
						::lime::utils::ArrayBufferView _this = tmp20;
						_this->byteOffset = (int)0;
						_this->length = array->__Field(HX_HCSTRING("length","\xe6","\x94","\x07","\x9f"), hx::paccDynamic );
						int tmp21 = (_this->length * _this->bytesPerElement);
						_this->byteLength = tmp21;
						::haxe::io::Bytes tmp22;
						{
							::haxe::io::Bytes this2;
							int tmp23 = _this->byteLength;
							::haxe::io::Bytes tmp24 = ::haxe::io::Bytes_obj::alloc(tmp23);
							this2 = tmp24;
							tmp22 = this2;
						}
						_this->buffer = tmp22;
						_this->copyFromArray(((Array< Float >)(array)),null());
						tmp19 = _this;
					}
					this1 = tmp19;
				}
				else{
					bool tmp19 = false;
					if ((tmp19)){
						::lime::utils::ArrayBufferView tmp20;
						{
							::lime::utils::ArrayBufferView tmp21 = ::lime::utils::ArrayBufferView_obj::__new((int)0,(int)8);
							::lime::utils::ArrayBufferView _this = tmp21;
							cpp::ArrayBase array1 = hx::Throw(HX_CSTRING("Invalid field access on null object"));
							_this->byteOffset = (int)0;
							_this->length = array1->__Field(HX_HCSTRING("length","\xe6","\x94","\x07","\x9f"), hx::paccDynamic );
							int tmp22 = (_this->length * _this->bytesPerElement);
							_this->byteLength = tmp22;
							::haxe::io::Bytes tmp23;
							{
								::haxe::io::Bytes this2;
								int tmp24 = _this->byteLength;
								::haxe::io::Bytes tmp25 = ::haxe::io::Bytes_obj::alloc(tmp24);
								this2 = tmp25;
								tmp23 = this2;
							}
							_this->buffer = tmp23;
							_this->copyFromArray(((Array< Float >)(array1)),null());
							tmp20 = _this;
						}
						this1 = tmp20;
					}
					else{
						bool tmp20 = false;
						if ((tmp20)){
							::lime::utils::ArrayBufferView tmp21;
							{
								::lime::utils::ArrayBufferView tmp22 = ::lime::utils::ArrayBufferView_obj::__new((int)0,(int)8);
								::lime::utils::ArrayBufferView _this = tmp22;
								::haxe::io::Bytes tmp23 = hx::Throw(HX_CSTRING("Invalid field access on null object"));
								::haxe::io::Bytes srcData = tmp23;
								int tmp24 = hx::Throw(HX_CSTRING("Invalid field access on null object"));
								int srcLength = tmp24;
								int tmp25 = hx::Throw(HX_CSTRING("Invalid field access on null object"));
								int srcByteOffset = tmp25;
								int tmp26 = hx::Throw(HX_CSTRING("Invalid field access on null object"));
								int srcElementSize = tmp26;
								int elementSize = _this->bytesPerElement;
								int tmp27 = hx::Throw(HX_CSTRING("Invalid field access on null object"));
								int tmp28 = _this->type;
								bool tmp29 = (tmp27 == tmp28);
								if ((tmp29)){
									int srcLength1 = srcData->length;
									int tmp30 = (srcLength1 - srcByteOffset);
									int cloneLength = tmp30;
									::haxe::io::Bytes tmp31;
									{
										::haxe::io::Bytes this2;
										int tmp32 = cloneLength;
										::haxe::io::Bytes tmp33 = ::haxe::io::Bytes_obj::alloc(tmp32);
										this2 = tmp33;
										tmp31 = this2;
									}
									_this->buffer = tmp31;
									::haxe::io::Bytes tmp32 = srcData;
									int tmp33 = srcByteOffset;
									int tmp34 = cloneLength;
									_this->buffer->blit((int)0,tmp32,tmp33,tmp34);
								}
								else{
									HX_STACK_DO_THROW(HX_HCSTRING("unimplemented","\x09","\x2f","\x74","\xb4"));
								}
								int tmp30 = (_this->bytesPerElement * srcLength);
								_this->byteLength = tmp30;
								_this->byteOffset = (int)0;
								_this->length = srcLength;
								tmp21 = _this;
							}
							this1 = tmp21;
						}
						else{
							bool tmp21 = false;
							if ((tmp21)){
								::lime::utils::ArrayBufferView tmp22;
								{
									::lime::utils::ArrayBufferView tmp23 = ::lime::utils::ArrayBufferView_obj::__new((int)0,(int)8);
									::lime::utils::ArrayBufferView _this = tmp23;
									int in_byteOffset = (int)0;
									bool tmp24 = (in_byteOffset < (int)0);
									if ((tmp24)){
										HX_STACK_DO_THROW(::lime::utils::TAError_obj::RangeError);
									}
									int tmp25 = hx::Mod(in_byteOffset,_this->bytesPerElement);
									bool tmp26 = (tmp25 != (int)0);
									if ((tmp26)){
										HX_STACK_DO_THROW(::lime::utils::TAError_obj::RangeError);
									}
									int tmp27 = hx::Throw(HX_CSTRING("Invalid field access on null object"));
									int bufferByteLength = tmp27;
									int elementSize = _this->bytesPerElement;
									int newByteLength = bufferByteLength;
									bool tmp28 = true;
									if ((tmp28)){
										int tmp29 = (bufferByteLength - in_byteOffset);
										newByteLength = tmp29;
										int tmp30 = hx::Mod(bufferByteLength,_this->bytesPerElement);
										bool tmp31 = (tmp30 != (int)0);
										if ((tmp31)){
											HX_STACK_DO_THROW(::lime::utils::TAError_obj::RangeError);
										}
										bool tmp32 = (newByteLength < (int)0);
										if ((tmp32)){
											HX_STACK_DO_THROW(::lime::utils::TAError_obj::RangeError);
										}
									}
									else{
										int tmp29 = (null() * _this->bytesPerElement);
										newByteLength = tmp29;
										int tmp30 = (in_byteOffset + newByteLength);
										int newRange = tmp30;
										bool tmp31 = (newRange > bufferByteLength);
										if ((tmp31)){
											HX_STACK_DO_THROW(::lime::utils::TAError_obj::RangeError);
										}
									}
									_this->buffer = null();
									_this->byteOffset = in_byteOffset;
									_this->byteLength = newByteLength;
									Float tmp29 = (Float(newByteLength) / Float(_this->bytesPerElement));
									int tmp30 = ::Std_obj::_int(tmp29);
									_this->length = tmp30;
									tmp22 = _this;
								}
								this1 = tmp22;
							}
							else{
								HX_STACK_DO_THROW(HX_HCSTRING("Invalid constructor arguments for Float32Array","\x8e","\xc1","\xf4","\xd4"));
							}
						}
					}
				}
			}
			tmp4 = this1;
		}
		this->__bufferData = tmp4;
		this->__bufferAlpha = alpha;
		this->__bufferContext = gl;
		::lime::graphics::opengl::GLObject tmp5 = gl->createBuffer();
		this->__buffer = tmp5;
		int tmp6 = gl->ARRAY_BUFFER;
		::lime::graphics::opengl::GLObject tmp7 = this->__buffer;
		gl->bindBuffer(tmp6,tmp7);
		int tmp8 = gl->ARRAY_BUFFER;
		::lime::utils::ArrayBufferView tmp9 = this->__bufferData;
		int tmp10 = tmp9->byteLength;
		::lime::utils::ArrayBufferView tmp11 = this->__bufferData;
		Float tmp12 = ::lime::utils::_DataPointer::DataPointer_Impl__obj::fromArrayBufferView(tmp11);
		int tmp13 = gl->STATIC_DRAW;
		gl->bufferData(tmp8,tmp10,tmp12,tmp13);
	}
	else{
		Float tmp4 = this->__bufferAlpha;
		Float tmp5 = alpha;
		bool tmp6 = (tmp4 != tmp5);
		if ((tmp6)){
			{
				::lime::utils::ArrayBufferView tmp7 = this->__bufferData;
				::lime::utils::ArrayBufferView this1 = tmp7;
				::__hxcpp_memory_set_float(this1->buffer->b,(this1->byteOffset + (int)20),alpha);
				alpha;
			}
			{
				::lime::utils::ArrayBufferView tmp7 = this->__bufferData;
				::lime::utils::ArrayBufferView this1 = tmp7;
				::__hxcpp_memory_set_float(this1->buffer->b,(this1->byteOffset + (int)44),alpha);
				alpha;
			}
			{
				::lime::utils::ArrayBufferView tmp7 = this->__bufferData;
				::lime::utils::ArrayBufferView this1 = tmp7;
				::__hxcpp_memory_set_float(this1->buffer->b,(this1->byteOffset + (int)68),alpha);
				alpha;
			}
			{
				::lime::utils::ArrayBufferView tmp7 = this->__bufferData;
				::lime::utils::ArrayBufferView this1 = tmp7;
				::__hxcpp_memory_set_float(this1->buffer->b,(this1->byteOffset + (int)92),alpha);
				alpha;
			}
			this->__bufferAlpha = alpha;
			int tmp7 = gl->ARRAY_BUFFER;
			::lime::graphics::opengl::GLObject tmp8 = this->__buffer;
			gl->bindBuffer(tmp7,tmp8);
			int tmp9 = gl->ARRAY_BUFFER;
			::lime::utils::ArrayBufferView tmp10 = this->__bufferData;
			int tmp11 = tmp10->byteLength;
			::lime::utils::ArrayBufferView tmp12 = this->__bufferData;
			Float tmp13 = ::lime::utils::_DataPointer::DataPointer_Impl__obj::fromArrayBufferView(tmp12);
			int tmp14 = gl->STATIC_DRAW;
			gl->bufferData(tmp9,tmp11,tmp13,tmp14);
		}
	}
	::lime::graphics::opengl::GLObject tmp4 = this->__buffer;
	return tmp4;
}


HX_DEFINE_DYNAMIC_FUNC2(BitmapData_obj,getBuffer,return )

::openfl::geom::Rectangle BitmapData_obj::getColorBoundsRect( int mask,int color,hx::Null< bool >  __o_findColor){
bool findColor = __o_findColor.Default(true);
{
		bool tmp = this->readable;
		bool tmp1 = !(tmp);
		if ((tmp1)){
			int tmp2 = this->width;
			int tmp3 = this->height;
			::openfl::geom::Rectangle tmp4 = ::openfl::geom::Rectangle_obj::__new((int)0,(int)0,tmp2,tmp3);
			return tmp4;
		}
		bool tmp2 = this->transparent;
		bool tmp3 = tmp2;
		bool tmp4 = !(tmp3);
		bool tmp5 = !(tmp4);
		bool tmp6;
		if ((tmp5)){
			int tmp7 = (int(mask) >> int((int)24));
			int tmp8 = tmp7;
			int tmp9 = (int(tmp8) & int((int)255));
			int tmp10 = tmp9;
			tmp6 = (tmp10 > (int)0);
		}
		else{
			tmp6 = true;
		}
		if ((tmp6)){
			int color1 = color;
			int tmp7 = (int(color1) >> int((int)24));
			int tmp8 = tmp7;
			int tmp9 = (int(tmp8) & int((int)255));
			int tmp10 = tmp9;
			bool tmp11 = (tmp10 == (int)0);
			if ((tmp11)){
				color1 = (int)0;
			}
		}
		::lime::graphics::Image tmp7 = this->image;
		int tmp8 = mask;
		int tmp9 = color;
		bool tmp10 = findColor;
		::lime::math::Rectangle tmp11 = tmp7->getColorBoundsRect(tmp8,tmp9,tmp10,(int)1);
		::lime::math::Rectangle rect = tmp11;
		::openfl::geom::Rectangle tmp12 = ::openfl::geom::Rectangle_obj::__new(rect->x,rect->y,rect->width,rect->height);
		return tmp12;
	}
}


HX_DEFINE_DYNAMIC_FUNC3(BitmapData_obj,getColorBoundsRect,return )

int BitmapData_obj::getPixel( int x,int y){
	bool tmp = this->readable;
	bool tmp1 = !(tmp);
	if ((tmp1)){
		return (int)0;
	}
	::lime::graphics::Image tmp2 = this->image;
	int tmp3 = x;
	int tmp4 = y;
	int tmp5 = tmp2->getPixel(tmp3,tmp4,(int)1);
	return tmp5;
}


HX_DEFINE_DYNAMIC_FUNC2(BitmapData_obj,getPixel,return )

int BitmapData_obj::getPixel32( int x,int y){
	bool tmp = this->readable;
	bool tmp1 = !(tmp);
	if ((tmp1)){
		return (int)0;
	}
	::lime::graphics::Image tmp2 = this->image;
	int tmp3 = x;
	int tmp4 = y;
	int tmp5 = tmp2->getPixel32(tmp3,tmp4,(int)1);
	return tmp5;
}


HX_DEFINE_DYNAMIC_FUNC2(BitmapData_obj,getPixel32,return )

::openfl::utils::ByteArrayData BitmapData_obj::getPixels( ::openfl::geom::Rectangle rect){
	bool tmp = this->readable;
	bool tmp1 = !(tmp);
	if ((tmp1)){
		return null();
	}
	bool tmp2 = (rect == null());
	if ((tmp2)){
		::openfl::geom::Rectangle tmp3 = this->rect;
		rect = tmp3;
	}
	::lime::graphics::Image tmp3 = this->image;
	::lime::math::Rectangle tmp4 = rect->__toLimeRectangle();
	::haxe::io::Bytes tmp5 = tmp3->getPixels(tmp4,(int)1);
	::openfl::utils::ByteArrayData tmp6 = ::openfl::utils::_ByteArray::ByteArray_Impl__obj::fromBytes(tmp5);
	return tmp6;
}


HX_DEFINE_DYNAMIC_FUNC1(BitmapData_obj,getPixels,return )

Dynamic BitmapData_obj::getSurface( ){
	bool tmp = this->readable;
	bool tmp1 = !(tmp);
	if ((tmp1)){
		return null();
	}
	Dynamic tmp2 = this->__surface;
	bool tmp3 = (tmp2 == null());
	if ((tmp3)){
		::lime::graphics::Image tmp4 = this->image;
		Dynamic tmp5 = ::lime::graphics::cairo::_CairoImageSurface::CairoImageSurface_Impl__obj::fromImage(tmp4);
		this->__surface = tmp5;
	}
	Dynamic tmp4 = this->__surface;
	return tmp4;
}


HX_DEFINE_DYNAMIC_FUNC0(BitmapData_obj,getSurface,return )

::lime::graphics::opengl::GLObject BitmapData_obj::getTexture( ::lime::_backend::native::NativeGLRenderContext gl){
	bool tmp = this->__isValid;
	bool tmp1 = !(tmp);
	if ((tmp1)){
		return null();
	}
	::lime::graphics::opengl::GLObject tmp2 = this->__texture;
	bool tmp3 = (tmp2 == null());
	bool tmp4 = !(tmp3);
	bool tmp5;
	if ((tmp4)){
		::lime::_backend::native::NativeGLRenderContext tmp6 = this->__textureContext;
		::lime::_backend::native::NativeGLRenderContext tmp7 = tmp6;
		::lime::_backend::native::NativeGLRenderContext tmp8 = gl;
		tmp5 = (tmp7 != tmp8);
	}
	else{
		tmp5 = true;
	}
	if ((tmp5)){
		this->__textureContext = gl;
		::lime::graphics::opengl::GLObject tmp6 = gl->createTexture();
		this->__texture = tmp6;
		int tmp7 = gl->TEXTURE_2D;
		::lime::graphics::opengl::GLObject tmp8 = this->__texture;
		gl->bindTexture(tmp7,tmp8);
		int tmp9 = gl->TEXTURE_2D;
		int tmp10 = gl->TEXTURE_WRAP_S;
		int tmp11 = gl->CLAMP_TO_EDGE;
		gl->texParameteri(tmp9,tmp10,tmp11);
		int tmp12 = gl->TEXTURE_2D;
		int tmp13 = gl->TEXTURE_WRAP_T;
		int tmp14 = gl->CLAMP_TO_EDGE;
		gl->texParameteri(tmp12,tmp13,tmp14);
		int tmp15 = gl->TEXTURE_2D;
		int tmp16 = gl->TEXTURE_MAG_FILTER;
		int tmp17 = gl->NEAREST;
		gl->texParameteri(tmp15,tmp16,tmp17);
		int tmp18 = gl->TEXTURE_2D;
		int tmp19 = gl->TEXTURE_MIN_FILTER;
		int tmp20 = gl->NEAREST;
		gl->texParameteri(tmp18,tmp19,tmp20);
		this->__textureVersion = (int)-1;
	}
	::lime::graphics::Image tmp6 = this->image;
	bool tmp7 = (tmp6 != null());
	bool tmp8;
	if ((tmp7)){
		::lime::graphics::Image tmp9 = this->image;
		::lime::graphics::Image tmp10 = tmp9;
		int tmp11 = tmp10->version;
		int tmp12 = this->__textureVersion;
		int tmp13 = tmp12;
		tmp8 = (tmp11 != tmp13);
	}
	else{
		tmp8 = false;
	}
	if ((tmp8)){
		int internalFormat;
		int format;
		Dynamic tmp9 = this->__surface;
		bool tmp10 = (tmp9 != null());
		if ((tmp10)){
			Dynamic tmp11 = this->__surface;
			::lime::graphics::cairo::_CairoSurface::CairoSurface_Impl__obj::flush(tmp11);
		}
		::lime::graphics::Image tmp11 = this->image;
		int tmp12 = tmp11->buffer->bitsPerPixel;
		bool tmp13 = (tmp12 == (int)1);
		if ((tmp13)){
			internalFormat = gl->ALPHA;
			format = gl->ALPHA;
		}
		else{
			Dynamic tmp14 = ::openfl::display::BitmapData_obj::__supportsBGRA;
			bool tmp15 = (tmp14 == null());
			if ((tmp15)){
				::openfl::display::BitmapData_obj::__textureInternalFormat = gl->RGBA;
				Dynamic bgraExtension = null();
				Dynamic tmp16 = gl->getExtension(HX_HCSTRING("EXT_bgra","\x72","\x74","\x1a","\x40"));
				bgraExtension = tmp16;
				bool tmp17 = (bgraExtension == null());
				if ((tmp17)){
					Dynamic tmp18 = gl->getExtension(HX_HCSTRING("EXT_texture_format_BGRA8888","\x5a","\xd2","\xbd","\xb2"));
					bgraExtension = tmp18;
				}
				bool tmp18 = (bgraExtension == null());
				if ((tmp18)){
					Dynamic tmp19 = gl->getExtension(HX_HCSTRING("APPLE_texture_format_BGRA8888","\x13","\x8a","\x88","\xe2"));
					bgraExtension = tmp19;
				}
				bool tmp19 = (bgraExtension != null());
				if ((tmp19)){
					::openfl::display::BitmapData_obj::__supportsBGRA = true;
					::openfl::display::BitmapData_obj::__textureFormat = bgraExtension->__Field(HX_HCSTRING("BGRA_EXT","\x36","\x94","\xc4","\xbc"), hx::paccDynamic );
					bool tmp20 = (gl->type == ::lime::graphics::opengl::GLContextType_obj::GLES);
					if ((tmp20)){
						::openfl::display::BitmapData_obj::__textureInternalFormat = bgraExtension->__Field(HX_HCSTRING("BGRA_EXT","\x36","\x94","\xc4","\xbc"), hx::paccDynamic );
					}
				}
				else{
					::openfl::display::BitmapData_obj::__supportsBGRA = false;
					::openfl::display::BitmapData_obj::__textureFormat = gl->RGBA;
				}
			}
			int tmp16 = ::openfl::display::BitmapData_obj::__textureInternalFormat;
			internalFormat = tmp16;
			int tmp17 = ::openfl::display::BitmapData_obj::__textureFormat;
			format = tmp17;
		}
		int tmp14 = gl->TEXTURE_2D;
		::lime::graphics::opengl::GLObject tmp15 = this->__texture;
		gl->bindTexture(tmp14,tmp15);
		::lime::graphics::Image tmp16 = this->image;
		::lime::graphics::Image textureImage = tmp16;
		bool tmp17 = textureImage->get_premultiplied();
		bool tmp18 = tmp17;
		bool tmp19 = !(tmp18);
		bool tmp20;
		if ((tmp19)){
			tmp20 = textureImage->get_transparent();
		}
		else{
			tmp20 = false;
		}
		if ((tmp20)){
			::lime::graphics::Image tmp21 = textureImage->clone();
			textureImage = tmp21;
			textureImage->set_premultiplied(true);
		}
		int tmp21 = gl->TEXTURE_2D;
		int tmp22 = internalFormat;
		int tmp23 = textureImage->buffer->width;
		int tmp24 = textureImage->buffer->height;
		int tmp25 = format;
		int tmp26 = gl->UNSIGNED_BYTE;
		::lime::utils::ArrayBufferView tmp27 = textureImage->get_data();
		Float tmp28 = ::lime::utils::_DataPointer::DataPointer_Impl__obj::fromArrayBufferView(tmp27);
		gl->texImage2D(tmp21,(int)0,tmp22,tmp23,tmp24,(int)0,tmp25,tmp26,tmp28);
		int tmp29 = gl->TEXTURE_2D;
		gl->bindTexture(tmp29,null());
		::lime::graphics::Image tmp30 = this->image;
		this->__textureVersion = tmp30->version;
	}
	bool tmp9 = this->readable;
	bool tmp10 = tmp9;
	bool tmp11 = !(tmp10);
	bool tmp12;
	if ((tmp11)){
		::lime::graphics::Image tmp13 = this->image;
		::lime::graphics::Image tmp14 = tmp13;
		tmp12 = (tmp14 != null());
	}
	else{
		tmp12 = false;
	}
	if ((tmp12)){
		this->__surface = null();
		this->image = null();
	}
	::lime::graphics::opengl::GLObject tmp13 = this->__texture;
	return tmp13;
}


HX_DEFINE_DYNAMIC_FUNC1(BitmapData_obj,getTexture,return )

::openfl::_Vector::IntVector BitmapData_obj::getVector( ::openfl::geom::Rectangle rect){
	::openfl::geom::Rectangle tmp = rect;
	::openfl::utils::ByteArrayData tmp1 = this->getPixels(tmp);
	::openfl::utils::ByteArrayData pixels = tmp1;
	::openfl::utils::ByteArrayData tmp2 = pixels;
	int tmp3 = ::openfl::utils::_ByteArray::ByteArray_Impl__obj::get_length(tmp2);
	Float tmp4 = (Float(tmp3) / Float((int)4));
	int tmp5 = ::Std_obj::_int(tmp4);
	int length = tmp5;
	::openfl::_Vector::IntVector tmp6;
	{
		::openfl::_Vector::IntVector tmp7 = ::openfl::_Vector::IntVector_obj::__new(length,true,null());
		::openfl::_Vector::IntVector tmp8 = tmp7;
		tmp6 = tmp8;
	}
	::openfl::_Vector::IntVector result = tmp6;
	{
		int _g = (int)0;
		while((true)){
			bool tmp7 = (_g < length);
			bool tmp8 = !(tmp7);
			if ((tmp8)){
				break;
			}
			int tmp9 = (_g)++;
			int i = tmp9;
			{
				int tmp10 = pixels->readUnsignedInt();
				int value = tmp10;
				int tmp11 = i;
				int tmp12 = value;
				int tmp13 = result->set(tmp11,tmp12);
				tmp13;
			}
		}
	}
	::openfl::_Vector::IntVector tmp7 = result;
	return tmp7;
}


HX_DEFINE_DYNAMIC_FUNC1(BitmapData_obj,getVector,return )

Array< ::Dynamic > BitmapData_obj::histogram( ::openfl::geom::Rectangle hRect){
	bool tmp = (hRect != null());
	::openfl::geom::Rectangle tmp1;
	if ((tmp)){
		tmp1 = hRect;
	}
	else{
		int tmp2 = this->width;
		int tmp3 = this->height;
		tmp1 = ::openfl::geom::Rectangle_obj::__new((int)0,(int)0,tmp2,tmp3);
	}
	::openfl::geom::Rectangle rect = tmp1;
	::openfl::geom::Rectangle tmp2 = rect;
	::openfl::utils::ByteArrayData tmp3 = this->getPixels(tmp2);
	::openfl::utils::ByteArrayData pixels = tmp3;
	Array< ::Dynamic > result;
	{
		Array< ::Dynamic > _g = Array_obj< ::Dynamic >::__new();
		{
			int _g1 = (int)0;
			while((true)){
				bool tmp4 = (_g1 < (int)4);
				bool tmp5 = !(tmp4);
				if ((tmp5)){
					break;
				}
				int tmp6 = (_g1)++;
				int i = tmp6;
				struct _Function_4_1{
					inline static Array< int > Block( ){
						{
							Array< int > _g2 = Array_obj< int >::__new();
							{
								int _g3 = (int)0;
								while((true)){
									bool tmp7 = (_g3 < (int)256);
									bool tmp8 = !(tmp7);
									if ((tmp8)){
										break;
									}
									int tmp9 = (_g3)++;
									int j = tmp9;
									_g2->push((int)0);
								}
							}
							return _g2;
						}
						return null();
					}
				};
				_g->push(_Function_4_1::Block());
			}
		}
		result = _g;
	}
	{
		int _g2 = (int)0;
		::openfl::utils::ByteArrayData tmp4 = pixels;
		int tmp5 = ::openfl::utils::_ByteArray::ByteArray_Impl__obj::get_length(tmp4);
		int _g1 = tmp5;
		while((true)){
			bool tmp6 = (_g2 < _g1);
			bool tmp7 = !(tmp6);
			if ((tmp7)){
				break;
			}
			int tmp8 = (_g2)++;
			int i = tmp8;
			int tmp9 = hx::Mod(i,(int)4);
			int tmp10 = pixels->readUnsignedByte();
			++(result->__get(tmp9).StaticCast< Array< int > >()[tmp10]);
		}
	}
	return result;
}


HX_DEFINE_DYNAMIC_FUNC1(BitmapData_obj,histogram,return )

bool BitmapData_obj::hitTest( ::openfl::geom::Point firstPoint,int firstAlphaThreshold,Dynamic secondObject,::openfl::geom::Point secondBitmapDataPoint,hx::Null< int >  __o_secondAlphaThreshold){
int secondAlphaThreshold = __o_secondAlphaThreshold.Default(1);
{
		bool tmp = this->readable;
		bool tmp1 = !(tmp);
		if ((tmp1)){
			return false;
		}
		Dynamic tmp2 = secondObject;
		bool tmp3 = ::Std_obj::is(tmp2,hx::ClassOf< ::openfl::display::Bitmap >());
		if ((tmp3)){
			::openfl::display::Bitmap tmp4;
			tmp4 = hx::TCast< ::openfl::display::Bitmap >::cast(secondObject);
			secondObject = tmp4->bitmapData;
		}
		Dynamic tmp4 = secondObject;
		bool tmp5 = ::Std_obj::is(tmp4,hx::ClassOf< ::openfl::geom::Point >());
		if ((tmp5)){
			::openfl::geom::Point secondPoint = ((::openfl::geom::Point)(secondObject));
			Float tmp6 = (secondPoint->x - firstPoint->x);
			int tmp7 = ::Std_obj::_int(tmp6);
			int x = tmp7;
			Float tmp8 = (secondPoint->y - firstPoint->y);
			int tmp9 = ::Std_obj::_int(tmp8);
			int y = tmp9;
			::openfl::geom::Rectangle tmp10 = this->rect;
			int tmp11 = x;
			int tmp12 = y;
			bool tmp13 = tmp10->contains(tmp11,tmp12);
			if ((tmp13)){
				int tmp14 = x;
				int tmp15 = y;
				int tmp16 = this->getPixel32(tmp14,tmp15);
				int pixel = tmp16;
				int tmp17 = (int(pixel) >> int((int)24));
				int tmp18 = (int(tmp17) & int((int)255));
				int tmp19 = firstAlphaThreshold;
				bool tmp20 = (tmp18 > tmp19);
				if ((tmp20)){
					return true;
				}
			}
		}
		else{
			Dynamic tmp6 = secondObject;
			bool tmp7 = ::Std_obj::is(tmp6,hx::ClassOf< ::openfl::display::BitmapData >());
			if ((tmp7)){
				::openfl::display::BitmapData secondBitmapData = ((::openfl::display::BitmapData)(secondObject));
				int x;
				int y;
				bool tmp8 = (secondBitmapDataPoint == null());
				if ((tmp8)){
					x = (int)0;
					y = (int)0;
				}
				else{
					Float tmp9 = (secondBitmapDataPoint->x - firstPoint->x);
					int tmp10 = ::Std_obj::_int(tmp9);
					x = tmp10;
					Float tmp11 = (secondBitmapDataPoint->y - firstPoint->y);
					int tmp12 = ::Std_obj::_int(tmp11);
					y = tmp12;
				}
				::openfl::geom::Rectangle tmp9 = this->rect;
				int tmp10 = x;
				int tmp11 = y;
				bool tmp12 = tmp9->contains(tmp10,tmp11);
				if ((tmp12)){
					::lime::utils::ObjectPool_openfl_geom_Rectangle tmp13 = ::openfl::geom::Rectangle_obj::__pool;
					::openfl::geom::Rectangle tmp14 = tmp13->get();
					::openfl::geom::Rectangle hitRect = tmp14;
					int tmp15 = x;
					int tmp16 = y;
					int tmp17 = secondBitmapData->width;
					int tmp18 = this->width;
					int tmp19 = x;
					int tmp20 = (tmp18 - tmp19);
					Float tmp21 = ::Math_obj::min(tmp17,tmp20);
					int tmp22 = secondBitmapData->height;
					int tmp23 = this->height;
					int tmp24 = y;
					int tmp25 = (tmp23 - tmp24);
					Float tmp26 = ::Math_obj::min(tmp22,tmp25);
					hitRect->setTo(tmp15,tmp16,tmp21,tmp26);
					::openfl::geom::Rectangle tmp27 = hitRect;
					::openfl::utils::ByteArrayData tmp28 = this->getPixels(tmp27);
					::openfl::utils::ByteArrayData pixels = tmp28;
					int tmp29 = x;
					int tmp30 = -(tmp29);
					int tmp31 = y;
					int tmp32 = -(tmp31);
					hitRect->offset(tmp30,tmp32);
					::openfl::geom::Rectangle tmp33 = hitRect;
					::openfl::utils::ByteArrayData tmp34 = secondBitmapData->getPixels(tmp33);
					::openfl::utils::ByteArrayData testPixels = tmp34;
					Float tmp35 = (hitRect->width * hitRect->height);
					int tmp36 = ::Std_obj::_int(tmp35);
					int length = tmp36;
					int pixel;
					int testPixel;
					::lime::utils::ObjectPool_openfl_geom_Rectangle tmp37 = ::openfl::geom::Rectangle_obj::__pool;
					::openfl::geom::Rectangle tmp38 = hitRect;
					tmp37->release(tmp38);
					{
						int _g = (int)0;
						while((true)){
							bool tmp39 = (_g < length);
							bool tmp40 = !(tmp39);
							if ((tmp40)){
								break;
							}
							int tmp41 = (_g)++;
							int i = tmp41;
							int tmp42 = pixels->readUnsignedInt();
							pixel = tmp42;
							int tmp43 = testPixels->readUnsignedInt();
							testPixel = tmp43;
							int tmp44 = (int(pixel) >> int((int)24));
							int tmp45 = (int(tmp44) & int((int)255));
							int tmp46 = firstAlphaThreshold;
							bool tmp47 = (tmp45 > tmp46);
							bool tmp48;
							if ((tmp47)){
								int tmp49 = (int(testPixel) >> int((int)24));
								int tmp50 = tmp49;
								int tmp51 = (int(tmp50) & int((int)255));
								int tmp52 = tmp51;
								int tmp53 = secondAlphaThreshold;
								tmp48 = (tmp52 > tmp53);
							}
							else{
								tmp48 = false;
							}
							if ((tmp48)){
								return true;
							}
						}
					}
					return false;
				}
			}
			else{
				Dynamic tmp8 = secondObject;
				bool tmp9 = ::Std_obj::is(tmp8,hx::ClassOf< ::openfl::geom::Rectangle >());
				if ((tmp9)){
					::lime::utils::ObjectPool_openfl_geom_Rectangle tmp10 = ::openfl::geom::Rectangle_obj::__pool;
					::openfl::geom::Rectangle tmp11 = tmp10->get();
					::openfl::geom::Rectangle secondRectangle = tmp11;
					::openfl::geom::Rectangle tmp12 = ((::openfl::geom::Rectangle)(secondObject));
					secondRectangle->copyFrom(tmp12);
					Float tmp13 = firstPoint->x;
					Float tmp14 = -(tmp13);
					Float tmp15 = firstPoint->y;
					Float tmp16 = -(tmp15);
					secondRectangle->offset(tmp14,tmp16);
					int tmp17 = this->width;
					int tmp18 = this->height;
					secondRectangle->__contract((int)0,(int)0,tmp17,tmp18);
					bool tmp19 = (secondRectangle->width > (int)0);
					bool tmp20;
					if ((tmp19)){
						tmp20 = (secondRectangle->height > (int)0);
					}
					else{
						tmp20 = false;
					}
					if ((tmp20)){
						::openfl::geom::Rectangle tmp21 = secondRectangle;
						::openfl::utils::ByteArrayData tmp22 = this->getPixels(tmp21);
						::openfl::utils::ByteArrayData pixels = tmp22;
						::openfl::utils::ByteArrayData tmp23 = pixels;
						int tmp24 = ::openfl::utils::_ByteArray::ByteArray_Impl__obj::get_length(tmp23);
						Float tmp25 = (Float(tmp24) / Float((int)4));
						int tmp26 = ::Std_obj::_int(tmp25);
						int length = tmp26;
						int pixel;
						{
							int _g = (int)0;
							while((true)){
								bool tmp27 = (_g < length);
								bool tmp28 = !(tmp27);
								if ((tmp28)){
									break;
								}
								int tmp29 = (_g)++;
								int i = tmp29;
								int tmp30 = pixels->readUnsignedInt();
								pixel = tmp30;
								int tmp31 = (int(pixel) >> int((int)24));
								int tmp32 = (int(tmp31) & int((int)255));
								int tmp33 = firstAlphaThreshold;
								bool tmp34 = (tmp32 > tmp33);
								if ((tmp34)){
									::lime::utils::ObjectPool_openfl_geom_Rectangle tmp35 = ::openfl::geom::Rectangle_obj::__pool;
									::openfl::geom::Rectangle tmp36 = secondRectangle;
									tmp35->release(tmp36);
									return true;
								}
							}
						}
					}
					::lime::utils::ObjectPool_openfl_geom_Rectangle tmp21 = ::openfl::geom::Rectangle_obj::__pool;
					::openfl::geom::Rectangle tmp22 = secondRectangle;
					tmp21->release(tmp22);
				}
			}
		}
		return false;
	}
}


HX_DEFINE_DYNAMIC_FUNC5(BitmapData_obj,hitTest,return )

Void BitmapData_obj::lock( ){
{
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(BitmapData_obj,lock,(void))

Void BitmapData_obj::merge( ::openfl::display::BitmapData sourceBitmapData,::openfl::geom::Rectangle sourceRect,::openfl::geom::Point destPoint,int redMultiplier,int greenMultiplier,int blueMultiplier,int alphaMultiplier){
{
		bool tmp = this->readable;
		bool tmp1 = tmp;
		bool tmp2 = !(tmp1);
		bool tmp3 = !(tmp2);
		bool tmp4 = tmp3;
		bool tmp5;
		if ((tmp4)){
			tmp5 = (sourceBitmapData == null());
		}
		else{
			tmp5 = true;
		}
		bool tmp6 = !(tmp5);
		bool tmp7 = tmp6;
		bool tmp8;
		if ((tmp7)){
			bool tmp9 = sourceBitmapData->readable;
			bool tmp10 = tmp9;
			bool tmp11 = tmp10;
			tmp8 = !(tmp11);
		}
		else{
			tmp8 = true;
		}
		bool tmp9 = !(tmp8);
		bool tmp10 = tmp9;
		bool tmp11;
		if ((tmp10)){
			tmp11 = (sourceRect == null());
		}
		else{
			tmp11 = true;
		}
		bool tmp12 = !(tmp11);
		bool tmp13;
		if ((tmp12)){
			tmp13 = (destPoint == null());
		}
		else{
			tmp13 = true;
		}
		if ((tmp13)){
			return null();
		}
		::lime::graphics::Image tmp14 = this->image;
		::lime::graphics::Image tmp15 = sourceBitmapData->image;
		::lime::math::Rectangle tmp16 = sourceRect->__toLimeRectangle();
		::lime::math::Vector2 tmp17 = destPoint->__toLimeVector2();
		int tmp18 = redMultiplier;
		int tmp19 = greenMultiplier;
		int tmp20 = blueMultiplier;
		int tmp21 = alphaMultiplier;
		tmp14->merge(tmp15,tmp16,tmp17,tmp18,tmp19,tmp20,tmp21);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC7(BitmapData_obj,merge,(void))

Void BitmapData_obj::noise( int randomSeed,hx::Null< int >  __o_low,hx::Null< int >  __o_high,hx::Null< int >  __o_channelOptions,hx::Null< bool >  __o_grayScale){
int low = __o_low.Default(0);
int high = __o_high.Default(255);
int channelOptions = __o_channelOptions.Default(7);
bool grayScale = __o_grayScale.Default(false);
{
		Array< int > randomSeed1 = Array_obj< int >::__new().Add(randomSeed);
		bool tmp = this->readable;
		bool tmp1 = !(tmp);
		if ((tmp1)){
			return null();
		}
		Dynamic tmp2;
		{

			HX_BEGIN_LOCAL_FUNC_S1(hx::LocalFunc,_Function_2_1,Array< int >,randomSeed1)
			int __ArgCount() const { return 0; }
			int run(){
				{
					int tmp3 = (randomSeed1->__get((int)0) * (int)1103515245);
					int tmp4 = (tmp3 + (int)12345);
					randomSeed1[(int)0] = tmp4;
					Float tmp5 = (Float(randomSeed1->__get((int)0)) / Float((int)65536));
					Float tmp6 = ::Math_obj::abs(tmp5);
					int tmp7 = ::Std_obj::_int(tmp6);
					int tmp8 = hx::Mod(tmp7,(int)32768);
					return tmp8;
				}
				return null();
			}
			HX_END_LOCAL_FUNC0(return)

			Dynamic func =  Dynamic(new _Function_2_1(randomSeed1));
			tmp2 = func;
		}
		Dynamic rand = tmp2;
		rand().Cast< int >();
		int tmp3 = (high - low);
		int range = tmp3;
		::openfl::utils::ByteArrayData tmp4;
		{
			int length = (int)0;
			::openfl::utils::ByteArrayData tmp5 = ::openfl::utils::ByteArrayData_obj::__new(length);
			tmp4 = tmp5;
		}
		::openfl::utils::ByteArrayData data = tmp4;
		int tmp5 = channelOptions;
		int tmp6 = (int)1;
		int tmp7 = (int(tmp5) & int(tmp6));
		int tmp8 = tmp7;
		bool tmp9 = (tmp8 == (int)1);
		bool redChannel = tmp9;
		int tmp10 = channelOptions;
		int tmp11 = (int)2;
		int tmp12 = (int(tmp10) & int(tmp11));
		int tmp13 = (int(tmp12) >> int((int)1));
		bool tmp14 = (tmp13 == (int)1);
		bool greenChannel = tmp14;
		int tmp15 = channelOptions;
		int tmp16 = (int)4;
		int tmp17 = (int(tmp15) & int(tmp16));
		int tmp18 = (int(tmp17) >> int((int)2));
		bool tmp19 = (tmp18 == (int)1);
		bool blueChannel = tmp19;
		int tmp20 = channelOptions;
		int tmp21 = (int)8;
		int tmp22 = (int(tmp20) & int(tmp21));
		int tmp23 = (int(tmp22) >> int((int)3));
		bool tmp24 = (tmp23 == (int)1);
		bool alphaChannel = tmp24;
		{
			int _g1 = (int)0;
			int tmp25 = this->height;
			int _g = tmp25;
			while((true)){
				bool tmp26 = (_g1 < _g);
				bool tmp27 = !(tmp26);
				if ((tmp27)){
					break;
				}
				int tmp28 = (_g1)++;
				int y = tmp28;
				{
					int _g3 = (int)0;
					int tmp29 = this->width;
					int _g2 = tmp29;
					while((true)){
						bool tmp30 = (_g3 < _g2);
						bool tmp31 = !(tmp30);
						if ((tmp31)){
							break;
						}
						int tmp32 = (_g3)++;
						int x = tmp32;
						int red = (int)0;
						int blue = (int)0;
						int green = (int)0;
						int alpha = (int)255;
						bool tmp33 = grayScale;
						if ((tmp33)){
							int tmp34 = low;
							int tmp35 = rand().Cast< int >();
							int tmp36 = range;
							int tmp37 = hx::Mod(tmp35,tmp36);
							int tmp38 = (tmp34 + tmp37);
							int tmp39 = blue = tmp38;
							int tmp40 = green = tmp39;
							red = tmp40;
							alpha = (int)255;
						}
						else{
							bool tmp34 = redChannel;
							if ((tmp34)){
								int tmp35 = low;
								int tmp36 = rand().Cast< int >();
								int tmp37 = range;
								int tmp38 = hx::Mod(tmp36,tmp37);
								int tmp39 = (tmp35 + tmp38);
								red = tmp39;
							}
							bool tmp35 = greenChannel;
							if ((tmp35)){
								int tmp36 = low;
								int tmp37 = rand().Cast< int >();
								int tmp38 = range;
								int tmp39 = hx::Mod(tmp37,tmp38);
								int tmp40 = (tmp36 + tmp39);
								green = tmp40;
							}
							bool tmp36 = blueChannel;
							if ((tmp36)){
								int tmp37 = low;
								int tmp38 = rand().Cast< int >();
								int tmp39 = range;
								int tmp40 = hx::Mod(tmp38,tmp39);
								int tmp41 = (tmp37 + tmp40);
								blue = tmp41;
							}
							bool tmp37 = alphaChannel;
							if ((tmp37)){
								int tmp38 = low;
								int tmp39 = rand().Cast< int >();
								int tmp40 = range;
								int tmp41 = hx::Mod(tmp39,tmp40);
								int tmp42 = (tmp38 + tmp41);
								alpha = tmp42;
							}
						}
						int rgb = alpha;
						int tmp34 = (int(rgb) << int((int)8));
						int tmp35 = red;
						int tmp36 = (tmp34 + tmp35);
						rgb = tmp36;
						int tmp37 = (int(rgb) << int((int)8));
						int tmp38 = green;
						int tmp39 = (tmp37 + tmp38);
						rgb = tmp39;
						int tmp40 = (int(rgb) << int((int)8));
						int tmp41 = blue;
						int tmp42 = (tmp40 + tmp41);
						rgb = tmp42;
						int tmp43 = x;
						int tmp44 = y;
						int tmp45 = rgb;
						this->setPixel32(tmp43,tmp44,tmp45);
					}
				}
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC5(BitmapData_obj,noise,(void))

Void BitmapData_obj::paletteMap( ::openfl::display::BitmapData sourceBitmapData,::openfl::geom::Rectangle sourceRect,::openfl::geom::Point destPoint,Array< int > redArray,Array< int > greenArray,Array< int > blueArray,Array< int > alphaArray){
{
		Float tmp = sourceRect->width;
		int tmp1 = ::Std_obj::_int(tmp);
		int sw = tmp1;
		Float tmp2 = sourceRect->height;
		int tmp3 = ::Std_obj::_int(tmp2);
		int sh = tmp3;
		::openfl::geom::Rectangle tmp4 = sourceRect;
		::openfl::utils::ByteArrayData tmp5 = sourceBitmapData->getPixels(tmp4);
		::openfl::utils::ByteArrayData pixels = tmp5;
		int pixelValue;
		int r;
		int g;
		int b;
		int a;
		int color;
		{
			int _g1 = (int)0;
			int tmp6 = (sh * sw);
			int _g = tmp6;
			while((true)){
				bool tmp7 = (_g1 < _g);
				bool tmp8 = !(tmp7);
				if ((tmp8)){
					break;
				}
				int tmp9 = (_g1)++;
				int i = tmp9;
				int tmp10 = pixels->readUnsignedInt();
				pixelValue = tmp10;
				bool tmp11 = (alphaArray == null());
				int tmp12;
				if ((tmp11)){
					tmp12 = (int(pixelValue) & int((int)-16777216));
				}
				else{
					int tmp13 = (int(pixelValue) >> int((int)24));
					int tmp14 = (int(tmp13) & int((int)255));
					tmp12 = alphaArray->__get(tmp14);
				}
				a = tmp12;
				bool tmp13 = (redArray == null());
				int tmp14;
				if ((tmp13)){
					tmp14 = (int(pixelValue) & int((int)16711680));
				}
				else{
					int tmp15 = (int(pixelValue) >> int((int)16));
					int tmp16 = (int(tmp15) & int((int)255));
					tmp14 = redArray->__get(tmp16);
				}
				r = tmp14;
				bool tmp15 = (greenArray == null());
				int tmp16;
				if ((tmp15)){
					tmp16 = (int(pixelValue) & int((int)65280));
				}
				else{
					int tmp17 = (int(pixelValue) >> int((int)8));
					int tmp18 = (int(tmp17) & int((int)255));
					tmp16 = greenArray->__get(tmp18);
				}
				g = tmp16;
				bool tmp17 = (blueArray == null());
				int tmp18;
				if ((tmp17)){
					tmp18 = (int(pixelValue) & int((int)255));
				}
				else{
					int tmp19 = (int(pixelValue) & int((int)255));
					tmp18 = blueArray->__get(tmp19);
				}
				b = tmp18;
				int tmp19 = (a + r);
				int tmp20 = g;
				int tmp21 = (tmp19 + tmp20);
				int tmp22 = b;
				int tmp23 = (tmp21 + tmp22);
				color = tmp23;
				int tmp24 = (i * (int)4);
				pixels->position = tmp24;
				int tmp25 = color;
				pixels->writeUnsignedInt(tmp25);
			}
		}
		pixels->position = (int)0;
		::openfl::geom::Rectangle tmp6 = ::openfl::geom::Rectangle_obj::__new(destPoint->x,destPoint->y,sw,sh);
		::openfl::geom::Rectangle destRect = tmp6;
		::openfl::geom::Rectangle tmp7 = destRect;
		::openfl::utils::ByteArrayData tmp8 = pixels;
		this->setPixels(tmp7,tmp8);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC7(BitmapData_obj,paletteMap,(void))

Void BitmapData_obj::perlinNoise( Float baseX,Float baseY,int numOctaves,int randomSeed,bool stitch,bool fractalNoise,hx::Null< int >  __o_channelOptions,hx::Null< bool >  __o_grayScale,Array< ::Dynamic > offsets){
int channelOptions = __o_channelOptions.Default(7);
bool grayScale = __o_grayScale.Default(false);
{
		bool tmp = this->readable;
		bool tmp1 = !(tmp);
		if ((tmp1)){
			return null();
		}
		::openfl::_internal::utils::PerlinNoise tmp2 = ::openfl::_internal::utils::PerlinNoise_obj::__new(randomSeed,numOctaves,((Float)0.01));
		::openfl::_internal::utils::PerlinNoise noise = tmp2;
		Float tmp3 = baseX;
		Float tmp4 = baseY;
		noise->fill(hx::ObjectPtr<OBJ_>(this),tmp3,tmp4,(int)0,null());
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC9(BitmapData_obj,perlinNoise,(void))

Void BitmapData_obj::scroll( int x,int y){
{
		bool tmp = this->readable;
		bool tmp1 = !(tmp);
		if ((tmp1)){
			return null();
		}
		::lime::graphics::Image tmp2 = this->image;
		int tmp3 = x;
		int tmp4 = y;
		tmp2->scroll(tmp3,tmp4);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(BitmapData_obj,scroll,(void))

Void BitmapData_obj::setPixel( int x,int y,int color){
{
		bool tmp = this->readable;
		bool tmp1 = !(tmp);
		if ((tmp1)){
			return null();
		}
		::lime::graphics::Image tmp2 = this->image;
		int tmp3 = x;
		int tmp4 = y;
		int tmp5 = color;
		tmp2->setPixel(tmp3,tmp4,tmp5,(int)1);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC3(BitmapData_obj,setPixel,(void))

Void BitmapData_obj::setPixel32( int x,int y,int color){
{
		bool tmp = this->readable;
		bool tmp1 = !(tmp);
		if ((tmp1)){
			return null();
		}
		::lime::graphics::Image tmp2 = this->image;
		int tmp3 = x;
		int tmp4 = y;
		int tmp5 = color;
		tmp2->setPixel32(tmp3,tmp4,tmp5,(int)1);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC3(BitmapData_obj,setPixel32,(void))

Void BitmapData_obj::setPixels( ::openfl::geom::Rectangle rect,::openfl::utils::ByteArrayData byteArray){
{
		bool tmp = this->readable;
		bool tmp1 = tmp;
		bool tmp2 = !(tmp1);
		bool tmp3 = !(tmp2);
		bool tmp4;
		if ((tmp3)){
			tmp4 = (rect == null());
		}
		else{
			tmp4 = true;
		}
		if ((tmp4)){
			return null();
		}
		::lime::graphics::Image tmp5 = this->image;
		::lime::math::Rectangle tmp6 = rect->__toLimeRectangle();
		::openfl::utils::ByteArrayData tmp7 = byteArray;
		::haxe::io::Bytes tmp8 = ::openfl::utils::_ByteArray::ByteArray_Impl__obj::toArrayBuffer(tmp7);
		tmp5->setPixels(tmp6,tmp8,(int)1);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(BitmapData_obj,setPixels,(void))

Void BitmapData_obj::setVector( ::openfl::geom::Rectangle rect,::openfl::_Vector::IntVector inputVector){
{
		::openfl::utils::ByteArrayData tmp;
		{
			int length = (int)0;
			::openfl::utils::ByteArrayData tmp1 = ::openfl::utils::ByteArrayData_obj::__new(length);
			tmp = tmp1;
		}
		::openfl::utils::ByteArrayData byteArray = tmp;
		::openfl::utils::ByteArrayData tmp1 = byteArray;
		int tmp2 = inputVector->get_length();
		int tmp3 = (tmp2 * (int)4);
		::openfl::utils::_ByteArray::ByteArray_Impl__obj::set_length(tmp1,tmp3);
		{
			int _g = (int)0;
			while((true)){
				int tmp4 = _g;
				int tmp5 = inputVector->get_length();
				bool tmp6 = (tmp4 < tmp5);
				bool tmp7 = !(tmp6);
				if ((tmp7)){
					break;
				}
				int tmp8 = _g;
				int tmp9 = inputVector->get(tmp8);
				int color = tmp9;
				++(_g);
				int tmp10 = color;
				byteArray->writeUnsignedInt(tmp10);
			}
		}
		byteArray->position = (int)0;
		::openfl::geom::Rectangle tmp4 = rect;
		::openfl::utils::ByteArrayData tmp5 = byteArray;
		this->setPixels(tmp4,tmp5);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(BitmapData_obj,setVector,(void))

int BitmapData_obj::threshold( ::openfl::display::BitmapData sourceBitmapData,::openfl::geom::Rectangle sourceRect,::openfl::geom::Point destPoint,::String operation,int threshold,hx::Null< int >  __o_color,hx::Null< int >  __o_mask,hx::Null< bool >  __o_copySource){
int color = __o_color.Default(0);
int mask = __o_mask.Default(-1);
bool copySource = __o_copySource.Default(false);
{
		bool tmp = (sourceBitmapData == null());
		bool tmp1 = !(tmp);
		bool tmp2 = tmp1;
		bool tmp3;
		if ((tmp2)){
			tmp3 = (sourceRect == null());
		}
		else{
			tmp3 = true;
		}
		bool tmp4 = !(tmp3);
		bool tmp5 = tmp4;
		bool tmp6;
		if ((tmp5)){
			tmp6 = (destPoint == null());
		}
		else{
			tmp6 = true;
		}
		bool tmp7 = !(tmp6);
		bool tmp8 = tmp7;
		bool tmp9;
		if ((tmp8)){
			tmp9 = (sourceRect->x > sourceBitmapData->width);
		}
		else{
			tmp9 = true;
		}
		bool tmp10 = !(tmp9);
		bool tmp11 = tmp10;
		bool tmp12;
		if ((tmp11)){
			tmp12 = (sourceRect->y > sourceBitmapData->height);
		}
		else{
			tmp12 = true;
		}
		bool tmp13 = !(tmp12);
		bool tmp14 = tmp13;
		bool tmp15;
		if ((tmp14)){
			Float tmp16 = destPoint->x;
			int tmp17 = this->width;
			int tmp18 = tmp17;
			int tmp19 = tmp18;
			tmp15 = (tmp16 > tmp19);
		}
		else{
			tmp15 = true;
		}
		bool tmp16 = !(tmp15);
		bool tmp17;
		if ((tmp16)){
			Float tmp18 = destPoint->y;
			int tmp19 = this->height;
			int tmp20 = tmp19;
			tmp17 = (tmp18 > tmp20);
		}
		else{
			tmp17 = true;
		}
		if ((tmp17)){
			return (int)0;
		}
		::lime::graphics::Image tmp18 = this->image;
		::lime::graphics::Image tmp19 = sourceBitmapData->image;
		::lime::math::Rectangle tmp20 = sourceRect->__toLimeRectangle();
		::lime::math::Vector2 tmp21 = destPoint->__toLimeVector2();
		::String tmp22 = operation;
		int tmp23 = threshold;
		int tmp24 = color;
		int tmp25 = mask;
		bool tmp26 = copySource;
		int tmp27 = tmp18->threshold(tmp19,tmp20,tmp21,tmp22,tmp23,tmp24,tmp25,tmp26,(int)1);
		return tmp27;
	}
}


HX_DEFINE_DYNAMIC_FUNC8(BitmapData_obj,threshold,return )

Void BitmapData_obj::unlock( ::openfl::geom::Rectangle changeRect){
{
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(BitmapData_obj,unlock,(void))

Void BitmapData_obj::__applyAlpha( ::openfl::utils::ByteArrayData alpha){
{
		::lime::graphics::Image tmp = this->image;
		::lime::utils::ArrayBufferView tmp1 = tmp->buffer->data;
		::lime::utils::ArrayBufferView data = tmp1;
		{
			int _g1 = (int)0;
			::openfl::utils::ByteArrayData tmp2 = alpha;
			int tmp3 = ::openfl::utils::_ByteArray::ByteArray_Impl__obj::get_length(tmp2);
			int _g = tmp3;
			while((true)){
				bool tmp4 = (_g1 < _g);
				bool tmp5 = !(tmp4);
				if ((tmp5)){
					break;
				}
				int tmp6 = (_g1)++;
				int i = tmp6;
				{
					int tmp7 = alpha->readUnsignedByte();
					int val = tmp7;
					::__hxcpp_memory_set_byte(data->buffer->b,(data->byteOffset + (((i * (int)4) + (int)3))),val);
					val;
				}
			}
		}
		::lime::graphics::Image tmp2 = this->image;
		(tmp2->version)++;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(BitmapData_obj,__applyAlpha,(void))

Void BitmapData_obj::__draw( ::openfl::display::IBitmapDrawable source,::openfl::geom::Matrix matrix,::openfl::geom::ColorTransform colorTransform,Dynamic blendMode,::openfl::geom::Rectangle clipRect,hx::Null< bool >  __o_smoothing){
bool smoothing = __o_smoothing.Default(false);
{
		bool tmp = (matrix == null());
		if ((tmp)){
			::openfl::geom::Matrix tmp1 = ::openfl::geom::Matrix_obj::__new(null(),null(),null(),null(),null(),null());
			matrix = tmp1;
			bool tmp2 = (source->__Field(HX_HCSTRING("__transform","\x4c","\x76","\xbf","\x73"), hx::paccDynamic ) != null());
			if ((tmp2)){
				::openfl::geom::Matrix tmp3 = source->__Field(HX_HCSTRING("__transform","\x4c","\x76","\xbf","\x73"), hx::paccDynamic );
				matrix->copyFrom(tmp3);
				matrix->tx = (int)0;
				matrix->ty = (int)0;
			}
		}
		bool tmp1 = this->readable;
		bool tmp2 = !(tmp1);
		if ((tmp2)){
			::lime::_backend::native::NativeGLRenderContext tmp3 = ::lime::graphics::opengl::GL_obj::context;
			bool tmp4 = (tmp3 != null());
			if ((tmp4)){
				::lime::_backend::native::NativeGLRenderContext tmp5 = ::lime::graphics::opengl::GL_obj::context;
				::lime::_backend::native::NativeGLRenderContext gl = tmp5;
				int tmp6 = gl->FRAMEBUFFER;
				::lime::_backend::native::NativeGLRenderContext tmp7 = gl;
				::lime::graphics::opengl::GLObject tmp8 = this->__getFramebuffer(tmp7);
				gl->bindFramebuffer(tmp6,tmp8);
				int tmp9 = this->width;
				int tmp10 = this->height;
				gl->viewport((int)0,(int)0,tmp9,tmp10);
				::openfl::display::MovieClip tmp11 = ::openfl::Lib_obj::current;
				::openfl::display::Stage tmp12 = tmp11->stage;
				::lime::_backend::native::NativeGLRenderContext tmp13 = gl;
				::openfl::_internal::renderer::opengl::GLRenderer tmp14 = ::openfl::_internal::renderer::opengl::GLRenderer_obj::__new(tmp12,tmp13,false);
				::openfl::_internal::renderer::opengl::GLRenderer renderer = tmp14;
				int tmp15 = this->width;
				int tmp16 = this->height;
				renderer->resize(tmp15,tmp16);
				::openfl::_internal::renderer::RenderSession renderSession = renderer->renderSession;
				renderSession->clearDirtyFlags = true;
				::openfl::display::MovieClip tmp17 = ::openfl::Lib_obj::current;
				::openfl::_internal::renderer::AbstractRenderer tmp18 = tmp17->stage->__renderer;
				::openfl::_internal::renderer::opengl::GLRenderer tmp19;
				tmp19 = hx::TCast< ::openfl::_internal::renderer::opengl::GLRenderer >::cast(tmp18);
				::openfl::_internal::renderer::AbstractShaderManager tmp20 = tmp19->renderSession->shaderManager;
				renderSession->shaderManager = tmp20;
				::openfl::geom::Matrix matrixCache = source->__Field(HX_HCSTRING("__worldTransform","\xda","\xa7","\xd8","\x9a"), hx::paccDynamic );
				::openfl::geom::Matrix tmp21 = matrix;
				source->__updateTransforms(tmp21);
				source->__updateChildren(false);
				::openfl::_internal::renderer::RenderSession tmp22 = renderer->renderSession;
				source->__renderGL(tmp22);
				::openfl::geom::Matrix tmp23 = matrixCache;
				source->__updateTransforms(tmp23);
				source->__updateChildren(true);
				int tmp24 = gl->FRAMEBUFFER;
				gl->bindFramebuffer(tmp24,null());
			}
		}
		else{
			bool tmp3 = (source == hx::ObjectPtr<OBJ_>(this));
			if ((tmp3)){
				::openfl::display::BitmapData tmp4 = this->clone();
				source = tmp4;
			}
			bool tmp4 = (colorTransform != null());
			if ((tmp4)){
				::lime::utils::ObjectPool_openfl_geom_Rectangle tmp5 = ::openfl::geom::Rectangle_obj::__pool;
				::openfl::geom::Rectangle tmp6 = tmp5->get();
				::openfl::geom::Rectangle bounds = tmp6;
				::lime::utils::ObjectPool_openfl_geom_Matrix tmp7 = ::openfl::geom::Matrix_obj::__pool;
				::openfl::geom::Matrix tmp8 = tmp7->get();
				::openfl::geom::Matrix boundsMatrix = tmp8;
				::openfl::geom::Rectangle tmp9 = bounds;
				::openfl::geom::Matrix tmp10 = boundsMatrix;
				source->__getBounds(tmp9,tmp10);
				Float tmp11 = bounds->width;
				int tmp12 = ::Math_obj::ceil(tmp11);
				int width = tmp12;
				Float tmp13 = bounds->height;
				int tmp14 = ::Math_obj::ceil(tmp13);
				int height = tmp14;
				::openfl::display::BitmapData tmp15 = ::openfl::display::BitmapData_obj::__new(width,height,true,(int)0);
				::openfl::display::BitmapData copy = tmp15;
				::openfl::display::IBitmapDrawable tmp16 = source;
				copy->draw(tmp16,null(),null(),null(),null(),null());
				::openfl::geom::Rectangle tmp17 = copy->rect;
				::openfl::geom::ColorTransform tmp18 = colorTransform;
				copy->colorTransform(tmp17,tmp18);
				source = copy;
				::lime::utils::ObjectPool_openfl_geom_Rectangle tmp19 = ::openfl::geom::Rectangle_obj::__pool;
				::openfl::geom::Rectangle tmp20 = bounds;
				tmp19->release(tmp20);
				::lime::utils::ObjectPool_openfl_geom_Matrix tmp21 = ::openfl::geom::Matrix_obj::__pool;
				::openfl::geom::Matrix tmp22 = boundsMatrix;
				tmp21->release(tmp22);
			}
			Dynamic tmp5 = this->getSurface();
			Dynamic surface = tmp5;
			::lime::graphics::cairo::Cairo tmp6 = ::lime::graphics::cairo::Cairo_obj::__new(surface);
			::lime::graphics::cairo::Cairo cairo = tmp6;
			bool tmp7 = smoothing;
			bool tmp8 = !(tmp7);
			if ((tmp8)){
				cairo->set_antialias((int)1);
			}
			::openfl::_internal::renderer::RenderSession tmp9 = ::openfl::_internal::renderer::RenderSession_obj::__new();
			::openfl::_internal::renderer::RenderSession renderSession = tmp9;
			renderSession->clearDirtyFlags = true;
			renderSession->cairo = cairo;
			renderSession->allowSmoothing = smoothing;
			::openfl::_internal::renderer::cairo::CairoMaskManager tmp10 = ::openfl::_internal::renderer::cairo::CairoMaskManager_obj::__new(renderSession);
			renderSession->maskManager = tmp10;
			::openfl::_internal::renderer::cairo::CairoBlendModeManager tmp11 = ::openfl::_internal::renderer::cairo::CairoBlendModeManager_obj::__new(renderSession);
			renderSession->blendModeManager = tmp11;
			bool tmp12 = (clipRect != null());
			if ((tmp12)){
				::openfl::geom::Rectangle tmp13 = clipRect;
				::openfl::geom::Matrix tmp14 = ::openfl::geom::Matrix_obj::__new(null(),null(),null(),null(),null(),null());
				renderSession->maskManager->pushRect(tmp13,tmp14);
			}
			::openfl::geom::Matrix matrixCache = source->__Field(HX_HCSTRING("__worldTransform","\xda","\xa7","\xd8","\x9a"), hx::paccDynamic );
			::openfl::geom::Matrix tmp13 = matrix;
			source->__updateTransforms(tmp13);
			source->__updateChildren(false);
			::openfl::_internal::renderer::RenderSession tmp14 = renderSession;
			source->__renderCairo(tmp14);
			::openfl::geom::Matrix tmp15 = matrixCache;
			source->__updateTransforms(tmp15);
			source->__updateChildren(true);
			bool tmp16 = (clipRect != null());
			if ((tmp16)){
				renderSession->maskManager->popRect();
			}
			Dynamic tmp17 = surface;
			::lime::graphics::cairo::_CairoSurface::CairoSurface_Impl__obj::flush(tmp17);
			::lime::graphics::Image tmp18 = this->image;
			tmp18->dirty = true;
			::lime::graphics::Image tmp19 = this->image;
			(tmp19->version)++;
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC6(BitmapData_obj,__draw,(void))

Void BitmapData_obj::__fromBase64( ::String base64,::String type){
{
		::String tmp = base64;
		::String tmp1 = type;
		::lime::graphics::Image tmp2 = ::lime::graphics::Image_obj::fromBase64(tmp,tmp1);
		::lime::graphics::Image image = tmp2;
		::lime::graphics::Image tmp3 = image;
		this->__fromImage(tmp3);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(BitmapData_obj,__fromBase64,(void))

Void BitmapData_obj::__fromBytes( ::openfl::utils::ByteArrayData bytes,::openfl::utils::ByteArrayData rawAlpha){
{
		::openfl::utils::ByteArrayData tmp = bytes;
		::haxe::io::Bytes tmp1 = ::openfl::utils::_ByteArray::ByteArray_Impl__obj::toArrayBuffer(tmp);
		::lime::graphics::Image tmp2 = ::lime::graphics::Image_obj::fromBytes(tmp1);
		::lime::graphics::Image image = tmp2;
		::lime::graphics::Image tmp3 = image;
		this->__fromImage(tmp3);
		bool tmp4 = (rawAlpha != null());
		if ((tmp4)){
			::openfl::utils::ByteArrayData tmp5 = rawAlpha;
			this->__applyAlpha(tmp5);
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(BitmapData_obj,__fromBytes,(void))

Void BitmapData_obj::__fromFile( ::String path){
{
		::String tmp = path;
		::lime::graphics::Image tmp1 = ::lime::graphics::Image_obj::fromFile(tmp);
		::lime::graphics::Image image = tmp1;
		::lime::graphics::Image tmp2 = image;
		this->__fromImage(tmp2);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(BitmapData_obj,__fromFile,(void))

Void BitmapData_obj::__fromImage( ::lime::graphics::Image image){
{
		bool tmp = (image != null());
		bool tmp1;
		if ((tmp)){
			tmp1 = (image->buffer != null());
		}
		else{
			tmp1 = false;
		}
		if ((tmp1)){
			this->image = image;
			this->width = image->width;
			this->height = image->height;
			::openfl::geom::Rectangle tmp2 = ::openfl::geom::Rectangle_obj::__new((int)0,(int)0,image->width,image->height);
			this->rect = tmp2;
			image->set_format((int)2);
			image->set_premultiplied(true);
			this->readable = true;
			this->__isValid = true;
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(BitmapData_obj,__fromImage,(void))

Void BitmapData_obj::__getBounds( ::openfl::geom::Rectangle rect,::openfl::geom::Matrix matrix){
{
		::lime::utils::ObjectPool_openfl_geom_Rectangle tmp = ::openfl::geom::Rectangle_obj::__pool;
		::openfl::geom::Rectangle tmp1 = tmp->get();
		::openfl::geom::Rectangle bounds = tmp1;
		::openfl::geom::Rectangle tmp2 = this->rect;
		::openfl::geom::Rectangle tmp3 = bounds;
		::openfl::geom::Matrix tmp4 = matrix;
		tmp2->__transform(tmp3,tmp4);
		Float tmp5 = bounds->x;
		Float tmp6 = bounds->y;
		Float tmp7 = bounds->width;
		Float tmp8 = bounds->height;
		rect->__expand(tmp5,tmp6,tmp7,tmp8);
		::lime::utils::ObjectPool_openfl_geom_Rectangle tmp9 = ::openfl::geom::Rectangle_obj::__pool;
		::openfl::geom::Rectangle tmp10 = bounds;
		tmp9->release(tmp10);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(BitmapData_obj,__getBounds,(void))

::lime::graphics::opengl::GLObject BitmapData_obj::__getFramebuffer( ::lime::_backend::native::NativeGLRenderContext gl){
	::lime::graphics::opengl::GLObject tmp = this->__framebuffer;
	bool tmp1 = (tmp == null());
	bool tmp2 = !(tmp1);
	bool tmp3;
	if ((tmp2)){
		::lime::_backend::native::NativeGLRenderContext tmp4 = this->__framebufferContext;
		::lime::_backend::native::NativeGLRenderContext tmp5 = tmp4;
		::lime::_backend::native::NativeGLRenderContext tmp6 = gl;
		tmp3 = (tmp5 != tmp6);
	}
	else{
		tmp3 = true;
	}
	if ((tmp3)){
		::lime::_backend::native::NativeGLRenderContext tmp4 = gl;
		this->getTexture(tmp4);
		this->__framebufferContext = gl;
		::lime::graphics::opengl::GLObject tmp5 = gl->createFramebuffer();
		this->__framebuffer = tmp5;
		int tmp6 = gl->FRAMEBUFFER;
		::lime::graphics::opengl::GLObject tmp7 = this->__framebuffer;
		gl->bindFramebuffer(tmp6,tmp7);
		int tmp8 = gl->FRAMEBUFFER;
		int tmp9 = gl->COLOR_ATTACHMENT0;
		int tmp10 = gl->TEXTURE_2D;
		::lime::graphics::opengl::GLObject tmp11 = this->__texture;
		gl->framebufferTexture2D(tmp8,tmp9,tmp10,tmp11,(int)0);
	}
	::lime::graphics::opengl::GLObject tmp4 = this->__framebuffer;
	return tmp4;
}


HX_DEFINE_DYNAMIC_FUNC1(BitmapData_obj,__getFramebuffer,return )

::lime::app::Future BitmapData_obj::__loadFromBase64( ::String base64,::String type){
	::openfl::display::BitmapData _g = hx::ObjectPtr<OBJ_>(this);
	::String tmp = base64;
	::String tmp1 = type;
	::lime::app::Future tmp2 = ::lime::graphics::Image_obj::loadFromBase64(tmp,tmp1);

	HX_BEGIN_LOCAL_FUNC_S1(hx::LocalFunc,_Function_1_1,::openfl::display::BitmapData,_g)
	int __ArgCount() const { return 1; }
	::lime::app::Future run(::lime::graphics::Image image){
		{
			::lime::graphics::Image tmp3 = image;
			_g->__fromImage(tmp3);
			::openfl::display::BitmapData tmp4 = _g;
			::lime::app::Future tmp5 = ::lime::app::Future_obj::withValue(tmp4);
			return tmp5;
		}
		return null();
	}
	HX_END_LOCAL_FUNC1(return)

	::lime::app::Future tmp3 = tmp2->then( Dynamic(new _Function_1_1(_g)));
	return tmp3;
}


HX_DEFINE_DYNAMIC_FUNC2(BitmapData_obj,__loadFromBase64,return )

::lime::app::Future BitmapData_obj::__loadFromBytes( ::openfl::utils::ByteArrayData bytes,::openfl::utils::ByteArrayData rawAlpha){
	::openfl::display::BitmapData _g = hx::ObjectPtr<OBJ_>(this);
	::openfl::utils::ByteArrayData tmp = bytes;
	::haxe::io::Bytes tmp1 = ::openfl::utils::_ByteArray::ByteArray_Impl__obj::toArrayBuffer(tmp);
	::lime::app::Future tmp2 = ::lime::graphics::Image_obj::loadFromBytes(tmp1);

	HX_BEGIN_LOCAL_FUNC_S2(hx::LocalFunc,_Function_1_1,::openfl::display::BitmapData,_g,::openfl::utils::ByteArrayData,rawAlpha)
	int __ArgCount() const { return 1; }
	::lime::app::Future run(::lime::graphics::Image image){
		{
			::lime::graphics::Image tmp3 = image;
			_g->__fromImage(tmp3);
			bool tmp4 = (rawAlpha != null());
			if ((tmp4)){
				::openfl::utils::ByteArrayData tmp5 = rawAlpha;
				_g->__applyAlpha(tmp5);
			}
			::openfl::display::BitmapData tmp5 = _g;
			::lime::app::Future tmp6 = ::lime::app::Future_obj::withValue(tmp5);
			return tmp6;
		}
		return null();
	}
	HX_END_LOCAL_FUNC1(return)

	::lime::app::Future tmp3 = tmp2->then( Dynamic(new _Function_1_1(_g,rawAlpha)));
	return tmp3;
}


HX_DEFINE_DYNAMIC_FUNC2(BitmapData_obj,__loadFromBytes,return )

::lime::app::Future BitmapData_obj::__loadFromFile( ::String path){
	::openfl::display::BitmapData _g = hx::ObjectPtr<OBJ_>(this);
	::String tmp = path;
	::lime::app::Future tmp1 = ::lime::graphics::Image_obj::loadFromFile(tmp);

	HX_BEGIN_LOCAL_FUNC_S1(hx::LocalFunc,_Function_1_1,::openfl::display::BitmapData,_g)
	int __ArgCount() const { return 1; }
	::lime::app::Future run(::lime::graphics::Image image){
		{
			::lime::graphics::Image tmp2 = image;
			_g->__fromImage(tmp2);
			::openfl::display::BitmapData tmp3 = _g;
			::lime::app::Future tmp4 = ::lime::app::Future_obj::withValue(tmp3);
			return tmp4;
		}
		return null();
	}
	HX_END_LOCAL_FUNC1(return)

	::lime::app::Future tmp2 = tmp1->then( Dynamic(new _Function_1_1(_g)));
	return tmp2;
}


HX_DEFINE_DYNAMIC_FUNC1(BitmapData_obj,__loadFromFile,return )

Void BitmapData_obj::__renderCairo( ::openfl::_internal::renderer::RenderSession renderSession){
{
		bool tmp = this->readable;
		bool tmp1 = !(tmp);
		if ((tmp1)){
			return null();
		}
		::lime::graphics::cairo::Cairo cairo = renderSession->cairo;
		::openfl::geom::Matrix tmp2 = this->__worldTransform;
		bool tmp3 = (tmp2 == null());
		if ((tmp3)){
			::openfl::geom::Matrix tmp4 = ::openfl::geom::Matrix_obj::__new(null(),null(),null(),null(),null(),null());
			this->__worldTransform = tmp4;
		}
		::openfl::geom::Matrix tmp4 = this->__worldTransform;
		::openfl::geom::Matrix transform = tmp4;
		bool tmp5 = renderSession->roundPixels;
		if ((tmp5)){
			::lime::math::Matrix3 tmp6 = transform->__toMatrix3();
			::lime::math::Matrix3 matrix = tmp6;
			Float tmp7 = matrix->tx;
			int tmp8 = ::Math_obj::round(tmp7);
			matrix->tx = tmp8;
			Float tmp9 = matrix->ty;
			int tmp10 = ::Math_obj::round(tmp9);
			matrix->ty = tmp10;
			::lime::math::Matrix3 tmp11 = matrix;
			cairo->set_matrix(tmp11);
		}
		else{
			::lime::math::Matrix3 tmp6 = transform->__toMatrix3();
			cairo->set_matrix(tmp6);
		}
		Dynamic tmp6 = this->getSurface();
		Dynamic surface = tmp6;
		bool tmp7 = (surface != null());
		if ((tmp7)){
			Dynamic tmp8 = surface;
			Dynamic tmp9 = ::lime::graphics::cairo::_CairoPattern::CairoPattern_Impl__obj::createForSurface(tmp8);
			Dynamic pattern = tmp9;
			bool tmp10 = renderSession->allowSmoothing;
			bool tmp11 = tmp10;
			bool tmp12 = !(tmp11);
			bool tmp13 = !(tmp12);
			bool tmp14;
			if ((tmp13)){
				int tmp15 = cairo->get_antialias();
				int tmp16 = tmp15;
				tmp14 = (tmp16 == (int)1);
			}
			else{
				tmp14 = true;
			}
			if ((tmp14)){
				Dynamic tmp15 = pattern;
				::lime::graphics::cairo::_CairoPattern::CairoPattern_Impl__obj::set_filter(tmp15,(int)3);
			}
			else{
				Dynamic tmp15 = pattern;
				::lime::graphics::cairo::_CairoPattern::CairoPattern_Impl__obj::set_filter(tmp15,(int)1);
			}
			Dynamic tmp15 = pattern;
			cairo->set_source(tmp15);
			cairo->paint();
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(BitmapData_obj,__renderCairo,(void))

Void BitmapData_obj::__renderCairoMask( ::openfl::_internal::renderer::RenderSession renderSession){
{
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(BitmapData_obj,__renderCairoMask,(void))

Void BitmapData_obj::__renderCanvas( ::openfl::_internal::renderer::RenderSession renderSession){
{
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(BitmapData_obj,__renderCanvas,(void))

Void BitmapData_obj::__renderCanvasMask( ::openfl::_internal::renderer::RenderSession renderSession){
{
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(BitmapData_obj,__renderCanvasMask,(void))

Void BitmapData_obj::__renderGL( ::openfl::_internal::renderer::RenderSession renderSession){
{
		::openfl::_internal::renderer::opengl::GLRenderer renderer = ((::openfl::_internal::renderer::opengl::GLRenderer)(renderSession->renderer));
		::lime::_backend::native::NativeGLRenderContext gl = renderSession->gl;
		renderSession->blendModeManager->setBlendMode(((Dynamic)((int)10)));
		::openfl::display::Shader tmp = renderSession->shaderManager->defaultShader;
		::openfl::display::Shader shader = tmp;
		::openfl::display::ShaderData tmp1 = shader->get_data();
		tmp1->uImage0->input = hx::ObjectPtr<OBJ_>(this);
		bool tmp2 = renderSession->allowSmoothing;
		bool tmp3;
		if ((tmp2)){
			tmp3 = renderSession->upscaled;
		}
		else{
			tmp3 = false;
		}
		::openfl::display::ShaderData tmp4 = shader->get_data();
		tmp4->uImage0->smoothing = tmp3;
		::openfl::geom::Matrix tmp5 = this->__worldTransform;
		::openfl::display::ShaderData tmp6 = shader->get_data();
		tmp6->uMatrix->value = renderer->getMatrix(tmp5);
		::openfl::display::Shader tmp7 = shader;
		renderSession->shaderManager->setShader(tmp7);
		int tmp8 = gl->ARRAY_BUFFER;
		::lime::_backend::native::NativeGLRenderContext tmp9 = gl;
		::lime::graphics::opengl::GLObject tmp10 = this->getBuffer(tmp9,(int)1);
		gl->bindBuffer(tmp8,tmp10);
		::openfl::display::ShaderData tmp11 = shader->get_data();
		int tmp12 = tmp11->aPosition->index;
		int tmp13 = gl->FLOAT;
		int tmp14 = (int)24;
		Float tmp15 = ::lime::utils::_DataPointer::DataPointer_Impl__obj::fromInt((int)0);
		gl->vertexAttribPointer(tmp12,(int)3,tmp13,false,tmp14,tmp15);
		::openfl::display::ShaderData tmp16 = shader->get_data();
		int tmp17 = tmp16->aTexCoord->index;
		int tmp18 = gl->FLOAT;
		int tmp19 = (int)24;
		int tmp20 = (int)12;
		Float tmp21 = ::lime::utils::_DataPointer::DataPointer_Impl__obj::fromInt(tmp20);
		gl->vertexAttribPointer(tmp17,(int)2,tmp18,false,tmp19,tmp21);
		::openfl::display::ShaderData tmp22 = shader->get_data();
		int tmp23 = tmp22->aAlpha->index;
		int tmp24 = gl->FLOAT;
		int tmp25 = (int)24;
		int tmp26 = (int)20;
		Float tmp27 = ::lime::utils::_DataPointer::DataPointer_Impl__obj::fromInt(tmp26);
		gl->vertexAttribPointer(tmp23,(int)1,tmp24,false,tmp25,tmp27);
		int tmp28 = gl->TRIANGLE_STRIP;
		gl->drawArrays(tmp28,(int)0,(int)4);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(BitmapData_obj,__renderGL,(void))

Void BitmapData_obj::__resize( int width,int height){
{
		this->width = width;
		this->height = height;
		::openfl::geom::Rectangle tmp = this->rect;
		tmp->width = width;
		::openfl::geom::Rectangle tmp1 = this->rect;
		tmp1->height = height;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(BitmapData_obj,__resize,(void))

Void BitmapData_obj::__sync( ){
{
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(BitmapData_obj,__sync,(void))

Void BitmapData_obj::__updateChildren( bool transformOnly){
{
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(BitmapData_obj,__updateChildren,(void))

Void BitmapData_obj::__updateMask( ::openfl::display::Graphics maskGraphics){
{
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(BitmapData_obj,__updateMask,(void))

Void BitmapData_obj::__updateTransforms( ::openfl::geom::Matrix overrideTransform){
{
		bool tmp = (overrideTransform == null());
		if ((tmp)){
			::openfl::geom::Matrix tmp1 = this->__worldTransform;
			tmp1->identity();
		}
		else{
			this->__worldTransform = overrideTransform;
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(BitmapData_obj,__updateTransforms,(void))

Dynamic BitmapData_obj::__supportsBGRA;

int BitmapData_obj::__textureFormat;

int BitmapData_obj::__textureInternalFormat;

::openfl::display::BitmapData BitmapData_obj::fromBase64( ::String base64,::String type){
	::openfl::display::BitmapData tmp = ::openfl::display::BitmapData_obj::__new((int)0,(int)0,true,(int)0);
	::openfl::display::BitmapData bitmapData = tmp;
	{
		::String tmp1 = base64;
		::String tmp2 = type;
		::lime::graphics::Image tmp3 = ::lime::graphics::Image_obj::fromBase64(tmp1,tmp2);
		::lime::graphics::Image image = tmp3;
		::lime::graphics::Image tmp4 = image;
		bitmapData->__fromImage(tmp4);
	}
	::openfl::display::BitmapData tmp1 = bitmapData;
	return tmp1;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(BitmapData_obj,fromBase64,return )

::openfl::display::BitmapData BitmapData_obj::fromBytes( ::openfl::utils::ByteArrayData bytes,::openfl::utils::ByteArrayData rawAlpha){
	::openfl::display::BitmapData tmp = ::openfl::display::BitmapData_obj::__new((int)0,(int)0,true,(int)0);
	::openfl::display::BitmapData bitmapData = tmp;
	{
		::openfl::utils::ByteArrayData tmp1 = bytes;
		::haxe::io::Bytes tmp2 = ::openfl::utils::_ByteArray::ByteArray_Impl__obj::toArrayBuffer(tmp1);
		::lime::graphics::Image tmp3 = ::lime::graphics::Image_obj::fromBytes(tmp2);
		::lime::graphics::Image image = tmp3;
		::lime::graphics::Image tmp4 = image;
		bitmapData->__fromImage(tmp4);
		bool tmp5 = (rawAlpha != null());
		if ((tmp5)){
			::openfl::utils::ByteArrayData tmp6 = rawAlpha;
			bitmapData->__applyAlpha(tmp6);
		}
	}
	::openfl::display::BitmapData tmp1 = bitmapData;
	return tmp1;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(BitmapData_obj,fromBytes,return )

::openfl::display::BitmapData BitmapData_obj::fromFile( ::String path){
	::openfl::display::BitmapData tmp = ::openfl::display::BitmapData_obj::__new((int)0,(int)0,true,(int)0);
	::openfl::display::BitmapData bitmapData = tmp;
	::String tmp1 = path;
	bitmapData->__fromFile(tmp1);
	::openfl::display::BitmapData tmp2 = bitmapData;
	return tmp2;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(BitmapData_obj,fromFile,return )

::openfl::display::BitmapData BitmapData_obj::fromImage( ::lime::graphics::Image image,hx::Null< bool >  __o_transparent){
bool transparent = __o_transparent.Default(true);
{
		bool tmp = (image == null());
		bool tmp1 = !(tmp);
		bool tmp2;
		if ((tmp1)){
			tmp2 = (image->buffer == null());
		}
		else{
			tmp2 = true;
		}
		if ((tmp2)){
			return null();
		}
		::openfl::display::BitmapData tmp3 = ::openfl::display::BitmapData_obj::__new((int)0,(int)0,transparent,(int)0);
		::openfl::display::BitmapData bitmapData = tmp3;
		::lime::graphics::Image tmp4 = image;
		bitmapData->__fromImage(tmp4);
		bool tmp5 = transparent;
		bitmapData->image->set_transparent(tmp5);
		::openfl::display::BitmapData tmp6 = bitmapData;
		return tmp6;
	}
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(BitmapData_obj,fromImage,return )

::openfl::display::BitmapData BitmapData_obj::fromTexture( ::openfl::display3D::textures::TextureBase texture){
	bool tmp = (texture == null());
	if ((tmp)){
		return null();
	}
	::openfl::display::BitmapData tmp1 = ::openfl::display::BitmapData_obj::__new(texture->__width,texture->__height,true,(int)0);
	::openfl::display::BitmapData bitmapData = tmp1;
	bitmapData->readable = false;
	bitmapData->__texture = texture->__textureID;
	bitmapData->__textureContext = texture->__textureContext;
	bitmapData->image = null();
	::openfl::display::BitmapData tmp2 = bitmapData;
	return tmp2;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(BitmapData_obj,fromTexture,return )

::lime::app::Future BitmapData_obj::loadFromBase64( ::String base64,::String type){
	::String tmp = base64;
	::String tmp1 = type;
	::lime::app::Future tmp2 = ::lime::graphics::Image_obj::loadFromBase64(tmp,tmp1);

	HX_BEGIN_LOCAL_FUNC_S0(hx::LocalFunc,_Function_1_1)
	int __ArgCount() const { return 1; }
	::lime::app::Future run(::lime::graphics::Image image){
		{
			::lime::graphics::Image tmp3 = image;
			::openfl::display::BitmapData tmp4 = ::openfl::display::BitmapData_obj::fromImage(tmp3,null());
			::lime::app::Future tmp5 = ::lime::app::Future_obj::withValue(tmp4);
			return tmp5;
		}
		return null();
	}
	HX_END_LOCAL_FUNC1(return)

	::lime::app::Future tmp3 = tmp2->then( Dynamic(new _Function_1_1()));
	return tmp3;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(BitmapData_obj,loadFromBase64,return )

::lime::app::Future BitmapData_obj::loadFromBytes( ::openfl::utils::ByteArrayData bytes,::openfl::utils::ByteArrayData rawAlpha){
	::openfl::utils::ByteArrayData tmp = bytes;
	::haxe::io::Bytes tmp1 = ::openfl::utils::_ByteArray::ByteArray_Impl__obj::toArrayBuffer(tmp);
	::lime::app::Future tmp2 = ::lime::graphics::Image_obj::loadFromBytes(tmp1);

	HX_BEGIN_LOCAL_FUNC_S1(hx::LocalFunc,_Function_1_1,::openfl::utils::ByteArrayData,rawAlpha)
	int __ArgCount() const { return 1; }
	::lime::app::Future run(::lime::graphics::Image image){
		{
			::lime::graphics::Image tmp3 = image;
			::openfl::display::BitmapData tmp4 = ::openfl::display::BitmapData_obj::fromImage(tmp3,null());
			::openfl::display::BitmapData bitmapData = tmp4;
			bool tmp5 = (rawAlpha != null());
			if ((tmp5)){
				::openfl::utils::ByteArrayData tmp6 = rawAlpha;
				bitmapData->__applyAlpha(tmp6);
			}
			::openfl::display::BitmapData tmp6 = bitmapData;
			::lime::app::Future tmp7 = ::lime::app::Future_obj::withValue(tmp6);
			return tmp7;
		}
		return null();
	}
	HX_END_LOCAL_FUNC1(return)

	::lime::app::Future tmp3 = tmp2->then( Dynamic(new _Function_1_1(rawAlpha)));
	return tmp3;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(BitmapData_obj,loadFromBytes,return )

::lime::app::Future BitmapData_obj::loadFromFile( ::String path){
	::String tmp = path;
	::lime::app::Future tmp1 = ::lime::graphics::Image_obj::loadFromFile(tmp);

	HX_BEGIN_LOCAL_FUNC_S0(hx::LocalFunc,_Function_1_1)
	int __ArgCount() const { return 1; }
	::lime::app::Future run(::lime::graphics::Image image){
		{
			::lime::graphics::Image tmp2 = image;
			::openfl::display::BitmapData tmp3 = ::openfl::display::BitmapData_obj::fromImage(tmp2,null());
			::lime::app::Future tmp4 = ::lime::app::Future_obj::withValue(tmp3);
			return tmp4;
		}
		return null();
	}
	HX_END_LOCAL_FUNC1(return)

	::lime::app::Future tmp2 = tmp1->then( Dynamic(new _Function_1_1()));
	return tmp2;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(BitmapData_obj,loadFromFile,return )


BitmapData_obj::BitmapData_obj()
{
}

void BitmapData_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(BitmapData);
	HX_MARK_MEMBER_NAME(height,"height");
	HX_MARK_MEMBER_NAME(image,"image");
	HX_MARK_MEMBER_NAME(readable,"readable");
	HX_MARK_MEMBER_NAME(rect,"rect");
	HX_MARK_MEMBER_NAME(transparent,"transparent");
	HX_MARK_MEMBER_NAME(width,"width");
	HX_MARK_MEMBER_NAME(__blendMode,"__blendMode");
	HX_MARK_MEMBER_NAME(__buffer,"__buffer");
	HX_MARK_MEMBER_NAME(__bufferContext,"__bufferContext");
	HX_MARK_MEMBER_NAME(__bufferAlpha,"__bufferAlpha");
	HX_MARK_MEMBER_NAME(__bufferData,"__bufferData");
	HX_MARK_MEMBER_NAME(__framebuffer,"__framebuffer");
	HX_MARK_MEMBER_NAME(__framebufferContext,"__framebufferContext");
	HX_MARK_MEMBER_NAME(__isValid,"__isValid");
	HX_MARK_MEMBER_NAME(__surface,"__surface");
	HX_MARK_MEMBER_NAME(__texture,"__texture");
	HX_MARK_MEMBER_NAME(__textureContext,"__textureContext");
	HX_MARK_MEMBER_NAME(__textureVersion,"__textureVersion");
	HX_MARK_MEMBER_NAME(__transform,"__transform");
	HX_MARK_MEMBER_NAME(__worldColorTransform,"__worldColorTransform");
	HX_MARK_MEMBER_NAME(__worldTransform,"__worldTransform");
	HX_MARK_END_CLASS();
}

void BitmapData_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(height,"height");
	HX_VISIT_MEMBER_NAME(image,"image");
	HX_VISIT_MEMBER_NAME(readable,"readable");
	HX_VISIT_MEMBER_NAME(rect,"rect");
	HX_VISIT_MEMBER_NAME(transparent,"transparent");
	HX_VISIT_MEMBER_NAME(width,"width");
	HX_VISIT_MEMBER_NAME(__blendMode,"__blendMode");
	HX_VISIT_MEMBER_NAME(__buffer,"__buffer");
	HX_VISIT_MEMBER_NAME(__bufferContext,"__bufferContext");
	HX_VISIT_MEMBER_NAME(__bufferAlpha,"__bufferAlpha");
	HX_VISIT_MEMBER_NAME(__bufferData,"__bufferData");
	HX_VISIT_MEMBER_NAME(__framebuffer,"__framebuffer");
	HX_VISIT_MEMBER_NAME(__framebufferContext,"__framebufferContext");
	HX_VISIT_MEMBER_NAME(__isValid,"__isValid");
	HX_VISIT_MEMBER_NAME(__surface,"__surface");
	HX_VISIT_MEMBER_NAME(__texture,"__texture");
	HX_VISIT_MEMBER_NAME(__textureContext,"__textureContext");
	HX_VISIT_MEMBER_NAME(__textureVersion,"__textureVersion");
	HX_VISIT_MEMBER_NAME(__transform,"__transform");
	HX_VISIT_MEMBER_NAME(__worldColorTransform,"__worldColorTransform");
	HX_VISIT_MEMBER_NAME(__worldTransform,"__worldTransform");
}

Dynamic BitmapData_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"rect") ) { return rect; }
		if (HX_FIELD_EQ(inName,"draw") ) { return draw_dyn(); }
		if (HX_FIELD_EQ(inName,"lock") ) { return lock_dyn(); }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"image") ) { return image; }
		if (HX_FIELD_EQ(inName,"width") ) { return width; }
		if (HX_FIELD_EQ(inName,"clone") ) { return clone_dyn(); }
		if (HX_FIELD_EQ(inName,"merge") ) { return merge_dyn(); }
		if (HX_FIELD_EQ(inName,"noise") ) { return noise_dyn(); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"height") ) { return height; }
		if (HX_FIELD_EQ(inName,"encode") ) { return encode_dyn(); }
		if (HX_FIELD_EQ(inName,"scroll") ) { return scroll_dyn(); }
		if (HX_FIELD_EQ(inName,"unlock") ) { return unlock_dyn(); }
		if (HX_FIELD_EQ(inName,"__draw") ) { return __draw_dyn(); }
		if (HX_FIELD_EQ(inName,"__sync") ) { return __sync_dyn(); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"compare") ) { return compare_dyn(); }
		if (HX_FIELD_EQ(inName,"dispose") ) { return dispose_dyn(); }
		if (HX_FIELD_EQ(inName,"hitTest") ) { return hitTest_dyn(); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"readable") ) { return readable; }
		if (HX_FIELD_EQ(inName,"__buffer") ) { return __buffer; }
		if (HX_FIELD_EQ(inName,"fillRect") ) { return fillRect_dyn(); }
		if (HX_FIELD_EQ(inName,"getPixel") ) { return getPixel_dyn(); }
		if (HX_FIELD_EQ(inName,"setPixel") ) { return setPixel_dyn(); }
		if (HX_FIELD_EQ(inName,"__resize") ) { return __resize_dyn(); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"__isValid") ) { return __isValid; }
		if (HX_FIELD_EQ(inName,"__surface") ) { return __surface; }
		if (HX_FIELD_EQ(inName,"__texture") ) { return __texture; }
		if (HX_FIELD_EQ(inName,"floodFill") ) { return floodFill_dyn(); }
		if (HX_FIELD_EQ(inName,"getBuffer") ) { return getBuffer_dyn(); }
		if (HX_FIELD_EQ(inName,"getPixels") ) { return getPixels_dyn(); }
		if (HX_FIELD_EQ(inName,"getVector") ) { return getVector_dyn(); }
		if (HX_FIELD_EQ(inName,"histogram") ) { return histogram_dyn(); }
		if (HX_FIELD_EQ(inName,"setPixels") ) { return setPixels_dyn(); }
		if (HX_FIELD_EQ(inName,"setVector") ) { return setVector_dyn(); }
		if (HX_FIELD_EQ(inName,"threshold") ) { return threshold_dyn(); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"copyPixels") ) { return copyPixels_dyn(); }
		if (HX_FIELD_EQ(inName,"getPixel32") ) { return getPixel32_dyn(); }
		if (HX_FIELD_EQ(inName,"getSurface") ) { return getSurface_dyn(); }
		if (HX_FIELD_EQ(inName,"getTexture") ) { return getTexture_dyn(); }
		if (HX_FIELD_EQ(inName,"paletteMap") ) { return paletteMap_dyn(); }
		if (HX_FIELD_EQ(inName,"setPixel32") ) { return setPixel32_dyn(); }
		if (HX_FIELD_EQ(inName,"__fromFile") ) { return __fromFile_dyn(); }
		if (HX_FIELD_EQ(inName,"__renderGL") ) { return __renderGL_dyn(); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"transparent") ) { return transparent; }
		if (HX_FIELD_EQ(inName,"__blendMode") ) { return __blendMode; }
		if (HX_FIELD_EQ(inName,"__transform") ) { return __transform; }
		if (HX_FIELD_EQ(inName,"applyFilter") ) { return applyFilter_dyn(); }
		if (HX_FIELD_EQ(inName,"copyChannel") ) { return copyChannel_dyn(); }
		if (HX_FIELD_EQ(inName,"perlinNoise") ) { return perlinNoise_dyn(); }
		if (HX_FIELD_EQ(inName,"__fromBytes") ) { return __fromBytes_dyn(); }
		if (HX_FIELD_EQ(inName,"__fromImage") ) { return __fromImage_dyn(); }
		if (HX_FIELD_EQ(inName,"__getBounds") ) { return __getBounds_dyn(); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"__bufferData") ) { return __bufferData; }
		if (HX_FIELD_EQ(inName,"disposeImage") ) { return disposeImage_dyn(); }
		if (HX_FIELD_EQ(inName,"__applyAlpha") ) { return __applyAlpha_dyn(); }
		if (HX_FIELD_EQ(inName,"__fromBase64") ) { return __fromBase64_dyn(); }
		if (HX_FIELD_EQ(inName,"__updateMask") ) { return __updateMask_dyn(); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"__bufferAlpha") ) { return __bufferAlpha; }
		if (HX_FIELD_EQ(inName,"__framebuffer") ) { return __framebuffer; }
		if (HX_FIELD_EQ(inName,"__renderCairo") ) { return __renderCairo_dyn(); }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"colorTransform") ) { return colorTransform_dyn(); }
		if (HX_FIELD_EQ(inName,"__loadFromFile") ) { return __loadFromFile_dyn(); }
		if (HX_FIELD_EQ(inName,"__renderCanvas") ) { return __renderCanvas_dyn(); }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"__bufferContext") ) { return __bufferContext; }
		if (HX_FIELD_EQ(inName,"drawWithQuality") ) { return drawWithQuality_dyn(); }
		if (HX_FIELD_EQ(inName,"__loadFromBytes") ) { return __loadFromBytes_dyn(); }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"__textureContext") ) { return __textureContext; }
		if (HX_FIELD_EQ(inName,"__textureVersion") ) { return __textureVersion; }
		if (HX_FIELD_EQ(inName,"__worldTransform") ) { return __worldTransform; }
		if (HX_FIELD_EQ(inName,"__getFramebuffer") ) { return __getFramebuffer_dyn(); }
		if (HX_FIELD_EQ(inName,"__loadFromBase64") ) { return __loadFromBase64_dyn(); }
		if (HX_FIELD_EQ(inName,"__updateChildren") ) { return __updateChildren_dyn(); }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"__renderCairoMask") ) { return __renderCairoMask_dyn(); }
		break;
	case 18:
		if (HX_FIELD_EQ(inName,"generateFilterRect") ) { return generateFilterRect_dyn(); }
		if (HX_FIELD_EQ(inName,"getColorBoundsRect") ) { return getColorBoundsRect_dyn(); }
		if (HX_FIELD_EQ(inName,"__renderCanvasMask") ) { return __renderCanvasMask_dyn(); }
		if (HX_FIELD_EQ(inName,"__updateTransforms") ) { return __updateTransforms_dyn(); }
		break;
	case 20:
		if (HX_FIELD_EQ(inName,"__framebufferContext") ) { return __framebufferContext; }
		break;
	case 21:
		if (HX_FIELD_EQ(inName,"__worldColorTransform") ) { return __worldColorTransform; }
	}
	return super::__Field(inName,inCallProp);
}

bool BitmapData_obj::__GetStatic(const ::String &inName, Dynamic &outValue, hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 8:
		if (HX_FIELD_EQ(inName,"fromFile") ) { outValue = fromFile_dyn(); return true;  }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"fromBytes") ) { outValue = fromBytes_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"fromImage") ) { outValue = fromImage_dyn(); return true;  }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"fromBase64") ) { outValue = fromBase64_dyn(); return true;  }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"fromTexture") ) { outValue = fromTexture_dyn(); return true;  }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"loadFromFile") ) { outValue = loadFromFile_dyn(); return true;  }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"loadFromBytes") ) { outValue = loadFromBytes_dyn(); return true;  }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"__supportsBGRA") ) { outValue = __supportsBGRA; return true;  }
		if (HX_FIELD_EQ(inName,"loadFromBase64") ) { outValue = loadFromBase64_dyn(); return true;  }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"__textureFormat") ) { outValue = __textureFormat; return true;  }
		break;
	case 23:
		if (HX_FIELD_EQ(inName,"__textureInternalFormat") ) { outValue = __textureInternalFormat; return true;  }
	}
	return false;
}

Dynamic BitmapData_obj::__SetField(const ::String &inName,const Dynamic &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"rect") ) { rect=inValue.Cast< ::openfl::geom::Rectangle >(); return inValue; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"image") ) { image=inValue.Cast< ::lime::graphics::Image >(); return inValue; }
		if (HX_FIELD_EQ(inName,"width") ) { width=inValue.Cast< int >(); return inValue; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"height") ) { height=inValue.Cast< int >(); return inValue; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"readable") ) { readable=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"__buffer") ) { __buffer=inValue.Cast< ::lime::graphics::opengl::GLObject >(); return inValue; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"__isValid") ) { __isValid=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"__surface") ) { __surface=inValue.Cast< Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"__texture") ) { __texture=inValue.Cast< ::lime::graphics::opengl::GLObject >(); return inValue; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"transparent") ) { transparent=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"__blendMode") ) { __blendMode=inValue.Cast< Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"__transform") ) { __transform=inValue.Cast< ::openfl::geom::Matrix >(); return inValue; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"__bufferData") ) { __bufferData=inValue.Cast< ::lime::utils::ArrayBufferView >(); return inValue; }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"__bufferAlpha") ) { __bufferAlpha=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"__framebuffer") ) { __framebuffer=inValue.Cast< ::lime::graphics::opengl::GLObject >(); return inValue; }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"__bufferContext") ) { __bufferContext=inValue.Cast< ::lime::_backend::native::NativeGLRenderContext >(); return inValue; }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"__textureContext") ) { __textureContext=inValue.Cast< ::lime::_backend::native::NativeGLRenderContext >(); return inValue; }
		if (HX_FIELD_EQ(inName,"__textureVersion") ) { __textureVersion=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"__worldTransform") ) { __worldTransform=inValue.Cast< ::openfl::geom::Matrix >(); return inValue; }
		break;
	case 20:
		if (HX_FIELD_EQ(inName,"__framebufferContext") ) { __framebufferContext=inValue.Cast< ::lime::_backend::native::NativeGLRenderContext >(); return inValue; }
		break;
	case 21:
		if (HX_FIELD_EQ(inName,"__worldColorTransform") ) { __worldColorTransform=inValue.Cast< ::openfl::geom::ColorTransform >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

bool BitmapData_obj::__SetStatic(const ::String &inName,Dynamic &ioValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 14:
		if (HX_FIELD_EQ(inName,"__supportsBGRA") ) { __supportsBGRA=ioValue.Cast< Dynamic >(); return true; }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"__textureFormat") ) { __textureFormat=ioValue.Cast< int >(); return true; }
		break;
	case 23:
		if (HX_FIELD_EQ(inName,"__textureInternalFormat") ) { __textureInternalFormat=ioValue.Cast< int >(); return true; }
	}
	return false;
}

void BitmapData_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("height","\xe7","\x07","\x4c","\x02"));
	outFields->push(HX_HCSTRING("image","\x5b","\x1f","\x69","\xbd"));
	outFields->push(HX_HCSTRING("readable","\xf0","\x1b","\x87","\x7d"));
	outFields->push(HX_HCSTRING("rect","\x24","\x4d","\xa7","\x4b"));
	outFields->push(HX_HCSTRING("transparent","\x52","\x2b","\xba","\x22"));
	outFields->push(HX_HCSTRING("width","\x06","\xb6","\x62","\xca"));
	outFields->push(HX_HCSTRING("__blendMode","\x34","\x2d","\x64","\x3a"));
	outFields->push(HX_HCSTRING("__buffer","\x20","\x28","\xc4","\x78"));
	outFields->push(HX_HCSTRING("__bufferContext","\xaf","\xd9","\xa7","\xd6"));
	outFields->push(HX_HCSTRING("__bufferAlpha","\x1e","\x7b","\x5a","\x07"));
	outFields->push(HX_HCSTRING("__bufferData","\x6a","\x3a","\x07","\xcc"));
	outFields->push(HX_HCSTRING("__framebuffer","\xcd","\x55","\xc0","\xc2"));
	outFields->push(HX_HCSTRING("__framebufferContext","\xa2","\x6b","\x52","\x89"));
	outFields->push(HX_HCSTRING("__isValid","\x92","\x69","\x8c","\x4f"));
	outFields->push(HX_HCSTRING("__surface","\x0d","\xb7","\x97","\xde"));
	outFields->push(HX_HCSTRING("__texture","\xbb","\x19","\x2f","\x20"));
	outFields->push(HX_HCSTRING("__textureContext","\x74","\x21","\x78","\x6f"));
	outFields->push(HX_HCSTRING("__textureVersion","\x9d","\x72","\xf2","\xd2"));
	outFields->push(HX_HCSTRING("__transform","\x4c","\x76","\xbf","\x73"));
	outFields->push(HX_HCSTRING("__worldColorTransform","\x5b","\xce","\x21","\xa3"));
	outFields->push(HX_HCSTRING("__worldTransform","\xda","\xa7","\xd8","\x9a"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsInt,(int)offsetof(BitmapData_obj,height),HX_HCSTRING("height","\xe7","\x07","\x4c","\x02")},
	{hx::fsObject /*::lime::graphics::Image*/ ,(int)offsetof(BitmapData_obj,image),HX_HCSTRING("image","\x5b","\x1f","\x69","\xbd")},
	{hx::fsBool,(int)offsetof(BitmapData_obj,readable),HX_HCSTRING("readable","\xf0","\x1b","\x87","\x7d")},
	{hx::fsObject /*::openfl::geom::Rectangle*/ ,(int)offsetof(BitmapData_obj,rect),HX_HCSTRING("rect","\x24","\x4d","\xa7","\x4b")},
	{hx::fsBool,(int)offsetof(BitmapData_obj,transparent),HX_HCSTRING("transparent","\x52","\x2b","\xba","\x22")},
	{hx::fsInt,(int)offsetof(BitmapData_obj,width),HX_HCSTRING("width","\x06","\xb6","\x62","\xca")},
	{hx::fsObject /*Dynamic*/ ,(int)offsetof(BitmapData_obj,__blendMode),HX_HCSTRING("__blendMode","\x34","\x2d","\x64","\x3a")},
	{hx::fsObject /*::lime::graphics::opengl::GLObject*/ ,(int)offsetof(BitmapData_obj,__buffer),HX_HCSTRING("__buffer","\x20","\x28","\xc4","\x78")},
	{hx::fsObject /*::lime::_backend::native::NativeGLRenderContext*/ ,(int)offsetof(BitmapData_obj,__bufferContext),HX_HCSTRING("__bufferContext","\xaf","\xd9","\xa7","\xd6")},
	{hx::fsFloat,(int)offsetof(BitmapData_obj,__bufferAlpha),HX_HCSTRING("__bufferAlpha","\x1e","\x7b","\x5a","\x07")},
	{hx::fsObject /*::lime::utils::ArrayBufferView*/ ,(int)offsetof(BitmapData_obj,__bufferData),HX_HCSTRING("__bufferData","\x6a","\x3a","\x07","\xcc")},
	{hx::fsObject /*::lime::graphics::opengl::GLObject*/ ,(int)offsetof(BitmapData_obj,__framebuffer),HX_HCSTRING("__framebuffer","\xcd","\x55","\xc0","\xc2")},
	{hx::fsObject /*::lime::_backend::native::NativeGLRenderContext*/ ,(int)offsetof(BitmapData_obj,__framebufferContext),HX_HCSTRING("__framebufferContext","\xa2","\x6b","\x52","\x89")},
	{hx::fsBool,(int)offsetof(BitmapData_obj,__isValid),HX_HCSTRING("__isValid","\x92","\x69","\x8c","\x4f")},
	{hx::fsObject /*Dynamic*/ ,(int)offsetof(BitmapData_obj,__surface),HX_HCSTRING("__surface","\x0d","\xb7","\x97","\xde")},
	{hx::fsObject /*::lime::graphics::opengl::GLObject*/ ,(int)offsetof(BitmapData_obj,__texture),HX_HCSTRING("__texture","\xbb","\x19","\x2f","\x20")},
	{hx::fsObject /*::lime::_backend::native::NativeGLRenderContext*/ ,(int)offsetof(BitmapData_obj,__textureContext),HX_HCSTRING("__textureContext","\x74","\x21","\x78","\x6f")},
	{hx::fsInt,(int)offsetof(BitmapData_obj,__textureVersion),HX_HCSTRING("__textureVersion","\x9d","\x72","\xf2","\xd2")},
	{hx::fsObject /*::openfl::geom::Matrix*/ ,(int)offsetof(BitmapData_obj,__transform),HX_HCSTRING("__transform","\x4c","\x76","\xbf","\x73")},
	{hx::fsObject /*::openfl::geom::ColorTransform*/ ,(int)offsetof(BitmapData_obj,__worldColorTransform),HX_HCSTRING("__worldColorTransform","\x5b","\xce","\x21","\xa3")},
	{hx::fsObject /*::openfl::geom::Matrix*/ ,(int)offsetof(BitmapData_obj,__worldTransform),HX_HCSTRING("__worldTransform","\xda","\xa7","\xd8","\x9a")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo sStaticStorageInfo[] = {
	{hx::fsObject /*Dynamic*/ ,(void *) &BitmapData_obj::__supportsBGRA,HX_HCSTRING("__supportsBGRA","\x58","\x53","\x57","\x0f")},
	{hx::fsInt,(void *) &BitmapData_obj::__textureFormat,HX_HCSTRING("__textureFormat","\x52","\x9b","\x58","\x18")},
	{hx::fsInt,(void *) &BitmapData_obj::__textureInternalFormat,HX_HCSTRING("__textureInternalFormat","\x6f","\x15","\xaa","\xa7")},
	{ hx::fsUnknown, 0, null()}
};
#endif

static ::String sMemberFields[] = {
	HX_HCSTRING("height","\xe7","\x07","\x4c","\x02"),
	HX_HCSTRING("image","\x5b","\x1f","\x69","\xbd"),
	HX_HCSTRING("readable","\xf0","\x1b","\x87","\x7d"),
	HX_HCSTRING("rect","\x24","\x4d","\xa7","\x4b"),
	HX_HCSTRING("transparent","\x52","\x2b","\xba","\x22"),
	HX_HCSTRING("width","\x06","\xb6","\x62","\xca"),
	HX_HCSTRING("__blendMode","\x34","\x2d","\x64","\x3a"),
	HX_HCSTRING("__buffer","\x20","\x28","\xc4","\x78"),
	HX_HCSTRING("__bufferContext","\xaf","\xd9","\xa7","\xd6"),
	HX_HCSTRING("__bufferAlpha","\x1e","\x7b","\x5a","\x07"),
	HX_HCSTRING("__bufferData","\x6a","\x3a","\x07","\xcc"),
	HX_HCSTRING("__framebuffer","\xcd","\x55","\xc0","\xc2"),
	HX_HCSTRING("__framebufferContext","\xa2","\x6b","\x52","\x89"),
	HX_HCSTRING("__isValid","\x92","\x69","\x8c","\x4f"),
	HX_HCSTRING("__surface","\x0d","\xb7","\x97","\xde"),
	HX_HCSTRING("__texture","\xbb","\x19","\x2f","\x20"),
	HX_HCSTRING("__textureContext","\x74","\x21","\x78","\x6f"),
	HX_HCSTRING("__textureVersion","\x9d","\x72","\xf2","\xd2"),
	HX_HCSTRING("__transform","\x4c","\x76","\xbf","\x73"),
	HX_HCSTRING("__worldColorTransform","\x5b","\xce","\x21","\xa3"),
	HX_HCSTRING("__worldTransform","\xda","\xa7","\xd8","\x9a"),
	HX_HCSTRING("applyFilter","\xc6","\xdf","\x2f","\xc1"),
	HX_HCSTRING("clone","\x5d","\x13","\x63","\x48"),
	HX_HCSTRING("colorTransform","\x89","\xd7","\x3f","\xad"),
	HX_HCSTRING("compare","\xa5","\x18","\x69","\x83"),
	HX_HCSTRING("copyChannel","\x8e","\x7d","\xe6","\x22"),
	HX_HCSTRING("copyPixels","\xc2","\x54","\x6e","\x42"),
	HX_HCSTRING("dispose","\x9f","\x80","\x4c","\xbb"),
	HX_HCSTRING("disposeImage","\x3c","\x6e","\xb8","\x62"),
	HX_HCSTRING("draw","\x04","\x2c","\x70","\x42"),
	HX_HCSTRING("drawWithQuality","\xb5","\xc5","\x05","\x6f"),
	HX_HCSTRING("encode","\x16","\xf2","\xe3","\xf9"),
	HX_HCSTRING("fillRect","\x47","\x45","\xb9","\x6c"),
	HX_HCSTRING("floodFill","\x61","\x83","\x8a","\x59"),
	HX_HCSTRING("generateFilterRect","\x91","\x2c","\x98","\x7e"),
	HX_HCSTRING("getBuffer","\x36","\x46","\xeb","\x4c"),
	HX_HCSTRING("getColorBoundsRect","\x86","\xad","\xe8","\x80"),
	HX_HCSTRING("getPixel","\x10","\xd6","\x7a","\x22"),
	HX_HCSTRING("getPixel32","\xaf","\xa6","\x68","\xd7"),
	HX_HCSTRING("getPixels","\x63","\x78","\x00","\x09"),
	HX_HCSTRING("getSurface","\x37","\xec","\xaa","\xac"),
	HX_HCSTRING("getTexture","\xe5","\x4e","\x42","\xee"),
	HX_HCSTRING("getVector","\xf9","\x39","\xb4","\x13"),
	HX_HCSTRING("histogram","\xa4","\xde","\x33","\x65"),
	HX_HCSTRING("hitTest","\x45","\x60","\x7f","\xe2"),
	HX_HCSTRING("lock","\xeb","\x9b","\xb7","\x47"),
	HX_HCSTRING("merge","\xb8","\xa2","\xc6","\x05"),
	HX_HCSTRING("noise","\x9a","\x8f","\xc2","\x9f"),
	HX_HCSTRING("paletteMap","\xe1","\xae","\x2b","\x06"),
	HX_HCSTRING("perlinNoise","\x66","\x84","\xf8","\x8b"),
	HX_HCSTRING("scroll","\x0d","\xd8","\x64","\x47"),
	HX_HCSTRING("setPixel","\x84","\x2f","\xd8","\xd0"),
	HX_HCSTRING("setPixel32","\x23","\x45","\xe6","\xda"),
	HX_HCSTRING("setPixels","\x6f","\x64","\x51","\xec"),
	HX_HCSTRING("setVector","\x05","\x26","\x05","\xf7"),
	HX_HCSTRING("threshold","\xab","\xc3","\xa3","\x34"),
	HX_HCSTRING("unlock","\xc4","\xa2","\x8c","\x65"),
	HX_HCSTRING("__applyAlpha","\x30","\x9e","\x7b","\x05"),
	HX_HCSTRING("__draw","\x24","\x8f","\x68","\xf1"),
	HX_HCSTRING("__fromBase64","\xb9","\x7d","\xff","\xd0"),
	HX_HCSTRING("__fromBytes","\x81","\x3b","\x4d","\xa0"),
	HX_HCSTRING("__fromFile","\x26","\x10","\xc0","\x44"),
	HX_HCSTRING("__fromImage","\x71","\x52","\x1e","\xa0"),
	HX_HCSTRING("__getBounds","\x8b","\x58","\xa0","\x10"),
	HX_HCSTRING("__getFramebuffer","\x17","\xf3","\x25","\x36"),
	HX_HCSTRING("__loadFromBase64","\x7f","\x97","\x5c","\x63"),
	HX_HCSTRING("__loadFromBytes","\x7b","\xfc","\x38","\x7c"),
	HX_HCSTRING("__loadFromFile","\x6c","\x0c","\xb1","\x7b"),
	HX_HCSTRING("__renderCairo","\x32","\x9e","\x42","\x55"),
	HX_HCSTRING("__renderCairoMask","\x3e","\x0c","\x22","\x6b"),
	HX_HCSTRING("__renderCanvas","\xee","\xdb","\x58","\x48"),
	HX_HCSTRING("__renderCanvasMask","\xfa","\xd7","\xef","\x51"),
	HX_HCSTRING("__renderGL","\x1b","\x1e","\x14","\x56"),
	HX_HCSTRING("__resize","\x14","\xc5","\xaa","\xb0"),
	HX_HCSTRING("__sync","\x7b","\x1d","\x58","\xfb"),
	HX_HCSTRING("__updateChildren","\x88","\x97","\xd3","\xd9"),
	HX_HCSTRING("__updateMask","\xb5","\xa6","\x9e","\x39"),
	HX_HCSTRING("__updateTransforms","\x10","\xf4","\xb0","\x50"),
	::String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(BitmapData_obj::__mClass,"__mClass");
	HX_MARK_MEMBER_NAME(BitmapData_obj::__supportsBGRA,"__supportsBGRA");
	HX_MARK_MEMBER_NAME(BitmapData_obj::__textureFormat,"__textureFormat");
	HX_MARK_MEMBER_NAME(BitmapData_obj::__textureInternalFormat,"__textureInternalFormat");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(BitmapData_obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(BitmapData_obj::__supportsBGRA,"__supportsBGRA");
	HX_VISIT_MEMBER_NAME(BitmapData_obj::__textureFormat,"__textureFormat");
	HX_VISIT_MEMBER_NAME(BitmapData_obj::__textureInternalFormat,"__textureInternalFormat");
};

#endif

hx::Class BitmapData_obj::__mClass;

static ::String sStaticFields[] = {
	HX_HCSTRING("__supportsBGRA","\x58","\x53","\x57","\x0f"),
	HX_HCSTRING("__textureFormat","\x52","\x9b","\x58","\x18"),
	HX_HCSTRING("__textureInternalFormat","\x6f","\x15","\xaa","\xa7"),
	HX_HCSTRING("fromBase64","\x99","\x02","\x6c","\x98"),
	HX_HCSTRING("fromBytes","\xa1","\xf2","\x20","\x72"),
	HX_HCSTRING("fromFile","\x06","\x9d","\x87","\xa1"),
	HX_HCSTRING("fromImage","\x91","\x09","\xf2","\x71"),
	HX_HCSTRING("fromTexture","\x91","\x2c","\x21","\x37"),
	HX_HCSTRING("loadFromBase64","\x5f","\x0c","\x1d","\x2f"),
	HX_HCSTRING("loadFromBytes","\x9b","\xc3","\x86","\xf4"),
	HX_HCSTRING("loadFromFile","\x4c","\x89","\xf0","\x5a"),
	::String(null()) };

void BitmapData_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("openfl.display.BitmapData","\xa3","\x12","\x41","\x9a");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &BitmapData_obj::__GetStatic;
	__mClass->mSetStaticField = &BitmapData_obj::__SetStatic;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(sStaticFields);
	__mClass->mMembers = hx::Class_obj::dupFunctions(sMemberFields);
	__mClass->mCanCast = hx::TCanCast< BitmapData_obj >;
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

void BitmapData_obj::__boot()
{
	__supportsBGRA= null();
}

} // end namespace openfl
} // end namespace display
