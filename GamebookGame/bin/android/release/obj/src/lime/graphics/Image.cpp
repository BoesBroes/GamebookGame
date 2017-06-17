#include <hxcpp.h>

#ifndef INCLUDED_Std
#include <Std.h>
#endif
#ifndef INCLUDED_haxe_crypto_BaseCode
#include <haxe/crypto/BaseCode.h>
#endif
#ifndef INCLUDED_haxe_io_Bytes
#include <haxe/io/Bytes.h>
#endif
#ifndef INCLUDED_lime__backend_native_NativeCFFI
#include <lime/_backend/native/NativeCFFI.h>
#endif
#ifndef INCLUDED_lime_app_Application
#include <lime/app/Application.h>
#endif
#ifndef INCLUDED_lime_app_Future
#include <lime/app/Future.h>
#endif
#ifndef INCLUDED_lime_app_IModule
#include <lime/app/IModule.h>
#endif
#ifndef INCLUDED_lime_app_Module
#include <lime/app/Module.h>
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
#ifndef INCLUDED_lime_graphics_RenderContext
#include <lime/graphics/RenderContext.h>
#endif
#ifndef INCLUDED_lime_graphics_Renderer
#include <lime/graphics/Renderer.h>
#endif
#ifndef INCLUDED_lime_graphics_format_BMP
#include <lime/graphics/format/BMP.h>
#endif
#ifndef INCLUDED_lime_graphics_format_BMPType
#include <lime/graphics/format/BMPType.h>
#endif
#ifndef INCLUDED_lime_graphics_format_JPEG
#include <lime/graphics/format/JPEG.h>
#endif
#ifndef INCLUDED_lime_graphics_format_PNG
#include <lime/graphics/format/PNG.h>
#endif
#ifndef INCLUDED_lime_graphics_utils_ImageCanvasUtil
#include <lime/graphics/utils/ImageCanvasUtil.h>
#endif
#ifndef INCLUDED_lime_graphics_utils_ImageDataUtil
#include <lime/graphics/utils/ImageDataUtil.h>
#endif
#ifndef INCLUDED_lime_math_Rectangle
#include <lime/math/Rectangle.h>
#endif
#ifndef INCLUDED_lime_math_Vector2
#include <lime/math/Vector2.h>
#endif
#ifndef INCLUDED_lime_math__ColorMatrix_ColorMatrix_Impl_
#include <lime/math/_ColorMatrix/ColorMatrix_Impl_.h>
#endif
#ifndef INCLUDED_lime_net__HTTPRequest_AbstractHTTPRequest
#include <lime/net/_HTTPRequest/AbstractHTTPRequest.h>
#endif
#ifndef INCLUDED_lime_net__HTTPRequest_Bytes
#include <lime/net/_HTTPRequest_Bytes.h>
#endif
#ifndef INCLUDED_lime_net__HTTPRequest_lime_graphics_Image
#include <lime/net/_HTTPRequest_lime_graphics_Image.h>
#endif
#ifndef INCLUDED_lime_net__IHTTPRequest
#include <lime/net/_IHTTPRequest.h>
#endif
#ifndef INCLUDED_lime_system_CFFI
#include <lime/system/CFFI.h>
#endif
#ifndef INCLUDED_lime_utils_ArrayBufferView
#include <lime/utils/ArrayBufferView.h>
#endif
#ifndef INCLUDED_lime_utils_TAError
#include <lime/utils/TAError.h>
#endif
#ifndef INCLUDED_openfl__Vector_IVector
#include <openfl/_Vector/IVector.h>
#endif
#ifndef INCLUDED_openfl__Vector_IntVector
#include <openfl/_Vector/IntVector.h>
#endif
namespace lime{
namespace graphics{

Void Image_obj::__construct(::lime::graphics::ImageBuffer buffer,hx::Null< int >  __o_offsetX,hx::Null< int >  __o_offsetY,hx::Null< int >  __o_width,hx::Null< int >  __o_height,Dynamic color,::lime::graphics::ImageType type)
{
int offsetX = __o_offsetX.Default(0);
int offsetY = __o_offsetY.Default(0);
int width = __o_width.Default(-1);
int height = __o_height.Default(-1);
{
	this->offsetX = offsetX;
	this->offsetY = offsetY;
	this->width = width;
	this->height = height;
	this->version = (int)0;
	bool tmp = (type == null());
	if ((tmp)){
		::lime::app::Application tmp1 = ::lime::app::Application_obj::current;
		bool tmp2 = (tmp1 != null());
		bool tmp3;
		if ((tmp2)){
			::lime::app::Application tmp4 = ::lime::app::Application_obj::current;
			::lime::app::Application tmp5 = tmp4;
			::lime::graphics::Renderer tmp6 = tmp5->__renderers->__get((int)0).StaticCast< ::lime::graphics::Renderer >();
			::lime::graphics::Renderer tmp7 = tmp6;
			tmp3 = (tmp7 != null());
		}
		else{
			tmp3 = false;
		}
		if ((tmp3)){
			::lime::graphics::ImageType tmp4;
			{
				::lime::app::Application tmp5 = ::lime::app::Application_obj::current;
				::lime::graphics::Renderer tmp6 = tmp5->__renderers->__get((int)0).StaticCast< ::lime::graphics::Renderer >();
				::lime::graphics::RenderContext _g = tmp6->context;
				switch( (int)(_g->__Index())){
					case (int)2: case (int)1: {
						tmp4 = ::lime::graphics::ImageType_obj::CANVAS;
					}
					;break;
					case (int)3: {
						tmp4 = ::lime::graphics::ImageType_obj::FLASH;
					}
					;break;
					default: {
						tmp4 = ::lime::graphics::ImageType_obj::DATA;
					}
				}
			}
			this->type = tmp4;
		}
		else{
			this->type = ::lime::graphics::ImageType_obj::DATA;
		}
	}
	else{
		this->type = type;
	}
	bool tmp1 = (buffer == null());
	if ((tmp1)){
		bool tmp2 = (width > (int)0);
		bool tmp3;
		if ((tmp2)){
			tmp3 = (height > (int)0);
		}
		else{
			tmp3 = false;
		}
		if ((tmp3)){
			::lime::graphics::ImageType tmp4 = this->type;
			::lime::graphics::ImageType _g = tmp4;
			switch( (int)(_g->__Index())){
				case (int)0: {
					::lime::graphics::ImageBuffer tmp5 = ::lime::graphics::ImageBuffer_obj::__new(null(),width,height,null(),null());
					this->buffer = tmp5;
					int tmp6 = width;
					int tmp7 = height;
					::lime::graphics::utils::ImageCanvasUtil_obj::createCanvas(hx::ObjectPtr<OBJ_>(this),tmp6,tmp7);
					bool tmp8 = (color != null());
					if ((tmp8)){
						::lime::math::Rectangle tmp9 = ::lime::math::Rectangle_obj::__new((int)0,(int)0,width,height);
						Dynamic tmp10 = color;
						this->fillRect(tmp9,tmp10,null());
					}
				}
				;break;
				case (int)1: {
					::lime::utils::ArrayBufferView tmp5;
					{
						int tmp6 = (width * height);
						int tmp7 = (tmp6 * (int)4);
						Dynamic elements = tmp7;
						::lime::utils::ArrayBufferView this1;
						bool tmp8 = (elements != null());
						if ((tmp8)){
							::lime::utils::ArrayBufferView tmp9 = ::lime::utils::ArrayBufferView_obj::__new(elements,(int)4);
							this1 = tmp9;
						}
						else{
							bool tmp9 = false;
							if ((tmp9)){
								::lime::utils::ArrayBufferView tmp10;
								{
									::lime::utils::ArrayBufferView tmp11 = ::lime::utils::ArrayBufferView_obj::__new((int)0,(int)4);
									::lime::utils::ArrayBufferView _this = tmp11;
									_this->byteOffset = (int)0;
									int tmp12 = hx::Throw(HX_CSTRING("Invalid field access on null object"));
									_this->length = tmp12;
									int tmp13 = (_this->length * _this->bytesPerElement);
									_this->byteLength = tmp13;
									::haxe::io::Bytes tmp14;
									{
										::haxe::io::Bytes this2;
										int tmp15 = _this->byteLength;
										::haxe::io::Bytes tmp16 = ::haxe::io::Bytes_obj::alloc(tmp15);
										this2 = tmp16;
										tmp14 = this2;
									}
									_this->buffer = tmp14;
									_this->copyFromArray(((Array< Float >)(null())),null());
									tmp10 = _this;
								}
								this1 = tmp10;
							}
							else{
								bool tmp10 = false;
								if ((tmp10)){
									::lime::utils::ArrayBufferView tmp11;
									{
										::lime::utils::ArrayBufferView tmp12 = ::lime::utils::ArrayBufferView_obj::__new((int)0,(int)4);
										::lime::utils::ArrayBufferView _this = tmp12;
										cpp::ArrayBase array = hx::Throw(HX_CSTRING("Invalid field access on null object"));
										_this->byteOffset = (int)0;
										_this->length = array->__Field(HX_HCSTRING("length","\xe6","\x94","\x07","\x9f"), hx::paccDynamic );
										int tmp13 = (_this->length * _this->bytesPerElement);
										_this->byteLength = tmp13;
										::haxe::io::Bytes tmp14;
										{
											::haxe::io::Bytes this2;
											int tmp15 = _this->byteLength;
											::haxe::io::Bytes tmp16 = ::haxe::io::Bytes_obj::alloc(tmp15);
											this2 = tmp16;
											tmp14 = this2;
										}
										_this->buffer = tmp14;
										_this->copyFromArray(((Array< Float >)(array)),null());
										tmp11 = _this;
									}
									this1 = tmp11;
								}
								else{
									bool tmp11 = false;
									if ((tmp11)){
										::lime::utils::ArrayBufferView tmp12;
										{
											::lime::utils::ArrayBufferView tmp13 = ::lime::utils::ArrayBufferView_obj::__new((int)0,(int)4);
											::lime::utils::ArrayBufferView _this = tmp13;
											::haxe::io::Bytes tmp14 = hx::Throw(HX_CSTRING("Invalid field access on null object"));
											::haxe::io::Bytes srcData = tmp14;
											int tmp15 = hx::Throw(HX_CSTRING("Invalid field access on null object"));
											int srcLength = tmp15;
											int tmp16 = hx::Throw(HX_CSTRING("Invalid field access on null object"));
											int srcByteOffset = tmp16;
											int tmp17 = hx::Throw(HX_CSTRING("Invalid field access on null object"));
											int srcElementSize = tmp17;
											int elementSize = _this->bytesPerElement;
											int tmp18 = hx::Throw(HX_CSTRING("Invalid field access on null object"));
											int tmp19 = _this->type;
											bool tmp20 = (tmp18 == tmp19);
											if ((tmp20)){
												int srcLength1 = srcData->length;
												int tmp21 = (srcLength1 - srcByteOffset);
												int cloneLength = tmp21;
												::haxe::io::Bytes tmp22;
												{
													::haxe::io::Bytes this2;
													int tmp23 = cloneLength;
													::haxe::io::Bytes tmp24 = ::haxe::io::Bytes_obj::alloc(tmp23);
													this2 = tmp24;
													tmp22 = this2;
												}
												_this->buffer = tmp22;
												::haxe::io::Bytes tmp23 = srcData;
												int tmp24 = srcByteOffset;
												int tmp25 = cloneLength;
												_this->buffer->blit((int)0,tmp23,tmp24,tmp25);
											}
											else{
												HX_STACK_DO_THROW(HX_HCSTRING("unimplemented","\x09","\x2f","\x74","\xb4"));
											}
											int tmp21 = (_this->bytesPerElement * srcLength);
											_this->byteLength = tmp21;
											_this->byteOffset = (int)0;
											_this->length = srcLength;
											tmp12 = _this;
										}
										this1 = tmp12;
									}
									else{
										bool tmp12 = false;
										if ((tmp12)){
											::lime::utils::ArrayBufferView tmp13;
											{
												::lime::utils::ArrayBufferView tmp14 = ::lime::utils::ArrayBufferView_obj::__new((int)0,(int)4);
												::lime::utils::ArrayBufferView _this = tmp14;
												int in_byteOffset = (int)0;
												bool tmp15 = (in_byteOffset < (int)0);
												if ((tmp15)){
													HX_STACK_DO_THROW(::lime::utils::TAError_obj::RangeError);
												}
												int tmp16 = hx::Mod(in_byteOffset,_this->bytesPerElement);
												bool tmp17 = (tmp16 != (int)0);
												if ((tmp17)){
													HX_STACK_DO_THROW(::lime::utils::TAError_obj::RangeError);
												}
												int tmp18 = hx::Throw(HX_CSTRING("Invalid field access on null object"));
												int bufferByteLength = tmp18;
												int elementSize = _this->bytesPerElement;
												int newByteLength = bufferByteLength;
												bool tmp19 = true;
												if ((tmp19)){
													int tmp20 = (bufferByteLength - in_byteOffset);
													newByteLength = tmp20;
													int tmp21 = hx::Mod(bufferByteLength,_this->bytesPerElement);
													bool tmp22 = (tmp21 != (int)0);
													if ((tmp22)){
														HX_STACK_DO_THROW(::lime::utils::TAError_obj::RangeError);
													}
													bool tmp23 = (newByteLength < (int)0);
													if ((tmp23)){
														HX_STACK_DO_THROW(::lime::utils::TAError_obj::RangeError);
													}
												}
												else{
													int tmp20 = (null() * _this->bytesPerElement);
													newByteLength = tmp20;
													int tmp21 = (in_byteOffset + newByteLength);
													int newRange = tmp21;
													bool tmp22 = (newRange > bufferByteLength);
													if ((tmp22)){
														HX_STACK_DO_THROW(::lime::utils::TAError_obj::RangeError);
													}
												}
												_this->buffer = null();
												_this->byteOffset = in_byteOffset;
												_this->byteLength = newByteLength;
												Float tmp20 = (Float(newByteLength) / Float(_this->bytesPerElement));
												int tmp21 = ::Std_obj::_int(tmp20);
												_this->length = tmp21;
												tmp13 = _this;
											}
											this1 = tmp13;
										}
										else{
											HX_STACK_DO_THROW(HX_HCSTRING("Invalid constructor arguments for UInt8Array","\x6b","\x44","\xd5","\x85"));
										}
									}
								}
							}
						}
						tmp5 = this1;
					}
					int tmp6 = width;
					int tmp7 = height;
					::lime::graphics::ImageBuffer tmp8 = ::lime::graphics::ImageBuffer_obj::__new(tmp5,tmp6,tmp7,null(),null());
					this->buffer = tmp8;
					bool tmp9 = (color != null());
					if ((tmp9)){
						::lime::math::Rectangle tmp10 = ::lime::math::Rectangle_obj::__new((int)0,(int)0,width,height);
						Dynamic tmp11 = color;
						this->fillRect(tmp10,tmp11,null());
					}
				}
				;break;
				case (int)2: {
				}
				;break;
				default: {
				}
			}
		}
	}
	else{
		::lime::graphics::ImageBuffer tmp2 = buffer;
		this->__fromImageBuffer(tmp2);
	}
}
;
	return null();
}

//Image_obj::~Image_obj() { }

Dynamic Image_obj::__CreateEmpty() { return  new Image_obj; }
hx::ObjectPtr< Image_obj > Image_obj::__new(::lime::graphics::ImageBuffer buffer,hx::Null< int >  __o_offsetX,hx::Null< int >  __o_offsetY,hx::Null< int >  __o_width,hx::Null< int >  __o_height,Dynamic color,::lime::graphics::ImageType type)
{  hx::ObjectPtr< Image_obj > _result_ = new Image_obj();
	_result_->__construct(buffer,__o_offsetX,__o_offsetY,__o_width,__o_height,color,type);
	return _result_;}

Dynamic Image_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< Image_obj > _result_ = new Image_obj();
	_result_->__construct(inArgs[0],inArgs[1],inArgs[2],inArgs[3],inArgs[4],inArgs[5],inArgs[6]);
	return _result_;}

::lime::graphics::Image Image_obj::clone( ){
	::lime::graphics::ImageBuffer tmp = this->buffer;
	bool tmp1 = (tmp != null());
	if ((tmp1)){
		::lime::graphics::ImageBuffer tmp2 = this->buffer;
		::lime::graphics::ImageBuffer tmp3 = tmp2->clone();
		int tmp4 = this->offsetX;
		int tmp5 = this->offsetY;
		int tmp6 = this->width;
		int tmp7 = this->height;
		::lime::graphics::ImageType tmp8 = this->type;
		::lime::graphics::Image tmp9 = ::lime::graphics::Image_obj::__new(tmp3,tmp4,tmp5,tmp6,tmp7,null(),tmp8);
		::lime::graphics::Image image = tmp9;
		int tmp10 = this->version;
		image->version = tmp10;
		::lime::graphics::Image tmp11 = image;
		return tmp11;
	}
	else{
		int tmp2 = this->offsetX;
		int tmp3 = this->offsetY;
		int tmp4 = this->width;
		int tmp5 = this->height;
		::lime::graphics::ImageType tmp6 = this->type;
		::lime::graphics::Image tmp7 = ::lime::graphics::Image_obj::__new(null(),tmp2,tmp3,tmp4,tmp5,null(),tmp6);
		return tmp7;
	}
	return null();
}


HX_DEFINE_DYNAMIC_FUNC0(Image_obj,clone,return )

Void Image_obj::colorTransform( ::lime::math::Rectangle rect,::lime::utils::ArrayBufferView colorMatrix){
{
		::lime::math::Rectangle tmp = rect;
		::lime::math::Rectangle tmp1 = this->__clipRect(tmp);
		rect = tmp1;
		::lime::graphics::ImageBuffer tmp2 = this->buffer;
		bool tmp3 = (tmp2 == null());
		bool tmp4 = !(tmp3);
		bool tmp5;
		if ((tmp4)){
			tmp5 = (rect == null());
		}
		else{
			tmp5 = true;
		}
		if ((tmp5)){
			return null();
		}
		{
			::lime::graphics::ImageType tmp6 = this->type;
			::lime::graphics::ImageType _g = tmp6;
			switch( (int)(_g->__Index())){
				case (int)0: {
					::lime::math::Rectangle tmp7 = rect;
					::lime::utils::ArrayBufferView tmp8 = colorMatrix;
					::lime::graphics::utils::ImageCanvasUtil_obj::colorTransform(hx::ObjectPtr<OBJ_>(this),tmp7,tmp8);
				}
				;break;
				case (int)1: {
					::lime::math::Rectangle tmp7 = rect;
					::lime::utils::ArrayBufferView tmp8 = colorMatrix;
					::lime::graphics::utils::ImageDataUtil_obj::colorTransform(hx::ObjectPtr<OBJ_>(this),tmp7,tmp8);
				}
				;break;
				case (int)2: {
					int tmp7 = this->offsetX;
					int tmp8 = this->offsetY;
					rect->offset(tmp7,tmp8);
					::lime::graphics::ImageBuffer tmp9 = this->buffer;
					::lime::utils::ArrayBufferView tmp10 = colorMatrix;
					tmp9->__srcBitmapData->__Field(HX_HCSTRING("colorTransform","\x89","\xd7","\x3f","\xad"), hx::paccDynamic )(rect->__toFlashRectangle(),::lime::math::_ColorMatrix::ColorMatrix_Impl__obj::__toFlashColorTransform(tmp10));
				}
				;break;
				default: {
				}
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(Image_obj,colorTransform,(void))

Void Image_obj::copyChannel( ::lime::graphics::Image sourceImage,::lime::math::Rectangle sourceRect,::lime::math::Vector2 destPoint,::lime::graphics::ImageChannel sourceChannel,::lime::graphics::ImageChannel destChannel){
{
		::lime::math::Rectangle tmp = sourceRect;
		::lime::math::Rectangle tmp1 = this->__clipRect(tmp);
		sourceRect = tmp1;
		::lime::graphics::ImageBuffer tmp2 = this->buffer;
		bool tmp3 = (tmp2 == null());
		bool tmp4 = !(tmp3);
		bool tmp5;
		if ((tmp4)){
			tmp5 = (sourceRect == null());
		}
		else{
			tmp5 = true;
		}
		if ((tmp5)){
			return null();
		}
		bool tmp6 = (destChannel == ::lime::graphics::ImageChannel_obj::ALPHA);
		bool tmp7;
		if ((tmp6)){
			bool tmp8 = this->get_transparent();
			bool tmp9 = tmp8;
			bool tmp10 = tmp9;
			tmp7 = !(tmp10);
		}
		else{
			tmp7 = false;
		}
		if ((tmp7)){
			return null();
		}
		bool tmp8 = (sourceRect->width <= (int)0);
		bool tmp9 = !(tmp8);
		bool tmp10;
		if ((tmp9)){
			tmp10 = (sourceRect->height <= (int)0);
		}
		else{
			tmp10 = true;
		}
		if ((tmp10)){
			return null();
		}
		Float tmp11 = (sourceRect->x + sourceRect->width);
		int tmp12 = sourceImage->width;
		bool tmp13 = (tmp11 > tmp12);
		if ((tmp13)){
			Float tmp14 = (sourceImage->width - sourceRect->x);
			sourceRect->width = tmp14;
		}
		Float tmp14 = (sourceRect->y + sourceRect->height);
		int tmp15 = sourceImage->height;
		bool tmp16 = (tmp14 > tmp15);
		if ((tmp16)){
			Float tmp17 = (sourceImage->height - sourceRect->y);
			sourceRect->height = tmp17;
		}
		{
			::lime::graphics::ImageType tmp17 = this->type;
			::lime::graphics::ImageType _g = tmp17;
			switch( (int)(_g->__Index())){
				case (int)0: {
					::lime::graphics::Image tmp18 = sourceImage;
					::lime::math::Rectangle tmp19 = sourceRect;
					::lime::math::Vector2 tmp20 = destPoint;
					::lime::graphics::ImageChannel tmp21 = sourceChannel;
					::lime::graphics::ImageChannel tmp22 = destChannel;
					::lime::graphics::utils::ImageCanvasUtil_obj::copyChannel(hx::ObjectPtr<OBJ_>(this),tmp18,tmp19,tmp20,tmp21,tmp22);
				}
				;break;
				case (int)1: {
					::lime::graphics::Image tmp18 = sourceImage;
					::lime::math::Rectangle tmp19 = sourceRect;
					::lime::math::Vector2 tmp20 = destPoint;
					::lime::graphics::ImageChannel tmp21 = sourceChannel;
					::lime::graphics::ImageChannel tmp22 = destChannel;
					::lime::graphics::utils::ImageDataUtil_obj::copyChannel(hx::ObjectPtr<OBJ_>(this),tmp18,tmp19,tmp20,tmp21,tmp22);
				}
				;break;
				case (int)2: {
					int tmp18;
					switch( (int)(sourceChannel->__Index())){
						case (int)0: {
							tmp18 = (int)1;
						}
						;break;
						case (int)1: {
							tmp18 = (int)2;
						}
						;break;
						case (int)2: {
							tmp18 = (int)4;
						}
						;break;
						case (int)3: {
							tmp18 = (int)8;
						}
						;break;
					}
					int srcChannel = tmp18;
					int tmp19;
					switch( (int)(destChannel->__Index())){
						case (int)0: {
							tmp19 = (int)1;
						}
						;break;
						case (int)1: {
							tmp19 = (int)2;
						}
						;break;
						case (int)2: {
							tmp19 = (int)4;
						}
						;break;
						case (int)3: {
							tmp19 = (int)8;
						}
						;break;
					}
					int dstChannel = tmp19;
					int tmp20 = sourceImage->offsetX;
					int tmp21 = sourceImage->offsetY;
					sourceRect->offset(tmp20,tmp21);
					int tmp22 = this->offsetX;
					int tmp23 = this->offsetY;
					destPoint->offset(tmp22,tmp23);
					::lime::graphics::ImageBuffer tmp24 = this->buffer;
					tmp24->__srcBitmapData->__Field(HX_HCSTRING("copyChannel","\x8e","\x7d","\xe6","\x22"), hx::paccDynamic )(sourceImage->buffer->get_src(),sourceRect->__toFlashRectangle(),destPoint->__toFlashPoint(),srcChannel,dstChannel);
				}
				;break;
				default: {
				}
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC5(Image_obj,copyChannel,(void))

Void Image_obj::copyPixels( ::lime::graphics::Image sourceImage,::lime::math::Rectangle sourceRect,::lime::math::Vector2 destPoint,::lime::graphics::Image alphaImage,::lime::math::Vector2 alphaPoint,hx::Null< bool >  __o_mergeAlpha){
bool mergeAlpha = __o_mergeAlpha.Default(false);
{
		::lime::graphics::ImageBuffer tmp = this->buffer;
		bool tmp1 = (tmp == null());
		bool tmp2 = !(tmp1);
		bool tmp3;
		if ((tmp2)){
			tmp3 = (sourceImage == null());
		}
		else{
			tmp3 = true;
		}
		if ((tmp3)){
			return null();
		}
		bool tmp4 = (sourceRect->width <= (int)0);
		bool tmp5 = !(tmp4);
		bool tmp6;
		if ((tmp5)){
			tmp6 = (sourceRect->height <= (int)0);
		}
		else{
			tmp6 = true;
		}
		if ((tmp6)){
			return null();
		}
		int tmp7 = this->width;
		bool tmp8 = (tmp7 <= (int)0);
		bool tmp9 = !(tmp8);
		bool tmp10;
		if ((tmp9)){
			int tmp11 = this->height;
			int tmp12 = tmp11;
			tmp10 = (tmp12 <= (int)0);
		}
		else{
			tmp10 = true;
		}
		if ((tmp10)){
			return null();
		}
		Float tmp11 = (sourceRect->x + sourceRect->width);
		int tmp12 = sourceImage->width;
		bool tmp13 = (tmp11 > tmp12);
		if ((tmp13)){
			Float tmp14 = (sourceImage->width - sourceRect->x);
			sourceRect->width = tmp14;
		}
		Float tmp14 = (sourceRect->y + sourceRect->height);
		int tmp15 = sourceImage->height;
		bool tmp16 = (tmp14 > tmp15);
		if ((tmp16)){
			Float tmp17 = (sourceImage->height - sourceRect->y);
			sourceRect->height = tmp17;
		}
		bool tmp17 = (sourceRect->x < (int)0);
		if ((tmp17)){
			hx::AddEq(sourceRect->width,sourceRect->x);
			sourceRect->x = (int)0;
		}
		bool tmp18 = (sourceRect->y < (int)0);
		if ((tmp18)){
			hx::AddEq(sourceRect->height,sourceRect->y);
			sourceRect->y = (int)0;
		}
		Float tmp19 = (destPoint->x + sourceRect->width);
		int tmp20 = this->width;
		bool tmp21 = (tmp19 > tmp20);
		if ((tmp21)){
			int tmp22 = this->width;
			Float tmp23 = destPoint->x;
			Float tmp24 = (tmp22 - tmp23);
			sourceRect->width = tmp24;
		}
		Float tmp22 = (destPoint->y + sourceRect->height);
		int tmp23 = this->height;
		bool tmp24 = (tmp22 > tmp23);
		if ((tmp24)){
			int tmp25 = this->height;
			Float tmp26 = destPoint->y;
			Float tmp27 = (tmp25 - tmp26);
			sourceRect->height = tmp27;
		}
		bool tmp25 = (destPoint->x < (int)0);
		if ((tmp25)){
			hx::AddEq(sourceRect->width,destPoint->x);
			hx::SubEq(sourceRect->x,destPoint->x);
			destPoint->x = (int)0;
		}
		bool tmp26 = (destPoint->y < (int)0);
		if ((tmp26)){
			hx::AddEq(sourceRect->height,destPoint->y);
			hx::SubEq(sourceRect->y,destPoint->y);
			destPoint->y = (int)0;
		}
		bool tmp27 = (sourceImage == hx::ObjectPtr<OBJ_>(this));
		if ((tmp27)){
			::lime::graphics::Image tmp28 = this->clone();
			sourceImage = tmp28;
		}
		{
			::lime::graphics::ImageType tmp28 = this->type;
			::lime::graphics::ImageType _g = tmp28;
			switch( (int)(_g->__Index())){
				case (int)0: {
					::lime::graphics::utils::ImageCanvasUtil_obj::convertToCanvas(hx::ObjectPtr<OBJ_>(this),null());
					::lime::graphics::Image tmp29 = sourceImage;
					::lime::math::Rectangle tmp30 = sourceRect;
					::lime::math::Vector2 tmp31 = destPoint;
					::lime::graphics::Image tmp32 = alphaImage;
					::lime::math::Vector2 tmp33 = alphaPoint;
					bool tmp34 = mergeAlpha;
					::lime::graphics::utils::ImageCanvasUtil_obj::copyPixels(hx::ObjectPtr<OBJ_>(this),tmp29,tmp30,tmp31,tmp32,tmp33,tmp34);
				}
				;break;
				case (int)1: {
					::lime::graphics::Image tmp29 = sourceImage;
					::lime::math::Rectangle tmp30 = sourceRect;
					::lime::math::Vector2 tmp31 = destPoint;
					::lime::graphics::Image tmp32 = alphaImage;
					::lime::math::Vector2 tmp33 = alphaPoint;
					bool tmp34 = mergeAlpha;
					::lime::graphics::utils::ImageDataUtil_obj::copyPixels(hx::ObjectPtr<OBJ_>(this),tmp29,tmp30,tmp31,tmp32,tmp33,tmp34);
				}
				;break;
				case (int)2: {
					int tmp29 = sourceImage->offsetX;
					int tmp30 = sourceImage->offsetY;
					sourceRect->offset(tmp29,tmp30);
					int tmp31 = this->offsetX;
					int tmp32 = this->offsetY;
					destPoint->offset(tmp31,tmp32);
					bool tmp33 = (alphaImage != null());
					bool tmp34;
					if ((tmp33)){
						tmp34 = (alphaPoint != null());
					}
					else{
						tmp34 = false;
					}
					if ((tmp34)){
						int tmp35 = alphaImage->offsetX;
						int tmp36 = alphaImage->offsetY;
						alphaPoint->offset(tmp35,tmp36);
					}
					::lime::graphics::ImageBuffer tmp35 = this->buffer;
					bool tmp36 = (alphaImage != null());
					bool tmp37 = (alphaPoint != null());
					tmp35->__srcBitmapData->__Field(HX_HCSTRING("copyPixels","\xc2","\x54","\x6e","\x42"), hx::paccDynamic )(sourceImage->buffer->__srcBitmapData,sourceRect->__toFlashRectangle(),destPoint->__toFlashPoint(),(  ((tmp36)) ? Dynamic(alphaImage->buffer->get_src()) : Dynamic(null()) ),(  ((tmp37)) ? Dynamic(alphaPoint->__toFlashPoint()) : Dynamic(null()) ),mergeAlpha);
				}
				;break;
				default: {
				}
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC6(Image_obj,copyPixels,(void))

::haxe::io::Bytes Image_obj::encode( ::String __o_format,hx::Null< int >  __o_quality){
::String format = __o_format.Default(HX_HCSTRING("png","\xa9","\x5c","\x55","\x00"));
int quality = __o_quality.Default(90);
{
		::String tmp = format;
		::String _switch_1 = (tmp);
		if (  ( _switch_1==HX_HCSTRING("png","\xa9","\x5c","\x55","\x00"))){
			::haxe::io::Bytes tmp1 = ::lime::graphics::format::PNG_obj::encode(hx::ObjectPtr<OBJ_>(this));
			return tmp1;
		}
		else if (  ( _switch_1==HX_HCSTRING("jpg","\xe1","\xd0","\x50","\x00")) ||  ( _switch_1==HX_HCSTRING("jpeg","\xa8","\xf2","\x65","\x46"))){
			int tmp1 = quality;
			::haxe::io::Bytes tmp2 = ::lime::graphics::format::JPEG_obj::encode(hx::ObjectPtr<OBJ_>(this),tmp1);
			return tmp2;
		}
		else if (  ( _switch_1==HX_HCSTRING("bmp","\x45","\xbc","\x4a","\x00"))){
			::haxe::io::Bytes tmp1 = ::lime::graphics::format::BMP_obj::encode(hx::ObjectPtr<OBJ_>(this),null());
			return tmp1;
		}
		else  {
		}
;
;
		return null();
	}
}


HX_DEFINE_DYNAMIC_FUNC2(Image_obj,encode,return )

Void Image_obj::fillRect( ::lime::math::Rectangle rect,int color,Dynamic format){
{
		::lime::math::Rectangle tmp = rect;
		::lime::math::Rectangle tmp1 = this->__clipRect(tmp);
		rect = tmp1;
		::lime::graphics::ImageBuffer tmp2 = this->buffer;
		bool tmp3 = (tmp2 == null());
		bool tmp4 = !(tmp3);
		bool tmp5;
		if ((tmp4)){
			tmp5 = (rect == null());
		}
		else{
			tmp5 = true;
		}
		if ((tmp5)){
			return null();
		}
		{
			::lime::graphics::ImageType tmp6 = this->type;
			::lime::graphics::ImageType _g = tmp6;
			switch( (int)(_g->__Index())){
				case (int)0: {
					::lime::math::Rectangle tmp7 = rect;
					int tmp8 = color;
					Dynamic tmp9 = format;
					::lime::graphics::utils::ImageCanvasUtil_obj::fillRect(hx::ObjectPtr<OBJ_>(this),tmp7,tmp8,tmp9);
				}
				;break;
				case (int)1: {
					::lime::graphics::ImageBuffer tmp7 = this->buffer;
					int tmp8 = tmp7->data->length;
					bool tmp9 = (tmp8 == (int)0);
					if ((tmp9)){
						return null();
					}
					::lime::math::Rectangle tmp10 = rect;
					int tmp11 = color;
					Dynamic tmp12 = format;
					::lime::graphics::utils::ImageDataUtil_obj::fillRect(hx::ObjectPtr<OBJ_>(this),tmp10,tmp11,tmp12);
				}
				;break;
				case (int)2: {
					int tmp7 = this->offsetX;
					int tmp8 = this->offsetY;
					rect->offset(tmp7,tmp8);
					bool tmp9 = (format != null());
					int tmp10;
					if ((tmp9)){
						Dynamic tmp11 = format;
						switch( (int)(tmp11)){
							case (int)1: {
								tmp10 = color;
							}
							;break;
							case (int)2: {
								int bgra = color;
								{
									int tmp12;
									{
										int argb = (int)0;
										tmp12 = argb;
									}
									int argb = tmp12;
									{
										int tmp13 = (int(bgra) & int((int)255));
										int tmp14 = tmp13;
										int tmp15 = (int(tmp14) & int((int)255));
										int tmp16 = (int(tmp15) << int((int)24));
										int tmp17 = (int(bgra) >> int((int)8));
										int tmp18 = tmp17;
										int tmp19 = (int(tmp18) & int((int)255));
										int tmp20 = tmp19;
										int tmp21 = (int(tmp20) & int((int)255));
										int tmp22 = (int(tmp21) << int((int)16));
										int tmp23 = (int(tmp16) | int(tmp22));
										int tmp24 = (int(bgra) >> int((int)16));
										int tmp25 = tmp24;
										int tmp26 = (int(tmp25) & int((int)255));
										int tmp27 = tmp26;
										int tmp28 = (int(tmp27) & int((int)255));
										int tmp29 = (int(tmp28) << int((int)8));
										int tmp30 = (int(tmp23) | int(tmp29));
										int tmp31 = (int(bgra) >> int((int)24));
										int tmp32 = tmp31;
										int tmp33 = (int(tmp32) & int((int)255));
										int tmp34 = tmp33;
										int tmp35 = (int(tmp34) & int((int)255));
										int tmp36 = (int(tmp30) | int(tmp35));
										argb = tmp36;
									}
									tmp10 = argb;
								}
							}
							;break;
							default: {
								int rgba = color;
								{
									int tmp12;
									{
										int argb = (int)0;
										tmp12 = argb;
									}
									int argb = tmp12;
									{
										int tmp13 = (int(rgba) & int((int)255));
										int tmp14 = tmp13;
										int tmp15 = (int(tmp14) & int((int)255));
										int tmp16 = (int(tmp15) << int((int)24));
										int tmp17 = (int(rgba) >> int((int)24));
										int tmp18 = tmp17;
										int tmp19 = (int(tmp18) & int((int)255));
										int tmp20 = tmp19;
										int tmp21 = (int(tmp20) & int((int)255));
										int tmp22 = (int(tmp21) << int((int)16));
										int tmp23 = (int(tmp16) | int(tmp22));
										int tmp24 = (int(rgba) >> int((int)16));
										int tmp25 = tmp24;
										int tmp26 = (int(tmp25) & int((int)255));
										int tmp27 = tmp26;
										int tmp28 = (int(tmp27) & int((int)255));
										int tmp29 = (int(tmp28) << int((int)8));
										int tmp30 = (int(tmp23) | int(tmp29));
										int tmp31 = (int(rgba) >> int((int)8));
										int tmp32 = tmp31;
										int tmp33 = (int(tmp32) & int((int)255));
										int tmp34 = tmp33;
										int tmp35 = (int(tmp34) & int((int)255));
										int tmp36 = (int(tmp30) | int(tmp35));
										argb = tmp36;
									}
									tmp10 = argb;
								}
							}
						}
					}
					else{
						int rgba = color;
						{
							int tmp11;
							{
								int argb = (int)0;
								tmp11 = argb;
							}
							int argb = tmp11;
							{
								int tmp12 = (int(rgba) & int((int)255));
								int tmp13 = tmp12;
								int tmp14 = (int(tmp13) & int((int)255));
								int tmp15 = (int(tmp14) << int((int)24));
								int tmp16 = (int(rgba) >> int((int)24));
								int tmp17 = tmp16;
								int tmp18 = (int(tmp17) & int((int)255));
								int tmp19 = tmp18;
								int tmp20 = (int(tmp19) & int((int)255));
								int tmp21 = (int(tmp20) << int((int)16));
								int tmp22 = (int(tmp15) | int(tmp21));
								int tmp23 = (int(rgba) >> int((int)16));
								int tmp24 = tmp23;
								int tmp25 = (int(tmp24) & int((int)255));
								int tmp26 = tmp25;
								int tmp27 = (int(tmp26) & int((int)255));
								int tmp28 = (int(tmp27) << int((int)8));
								int tmp29 = (int(tmp22) | int(tmp28));
								int tmp30 = (int(rgba) >> int((int)8));
								int tmp31 = tmp30;
								int tmp32 = (int(tmp31) & int((int)255));
								int tmp33 = tmp32;
								int tmp34 = (int(tmp33) & int((int)255));
								int tmp35 = (int(tmp29) | int(tmp34));
								argb = tmp35;
							}
							tmp10 = argb;
						}
					}
					int argb = tmp10;
					::lime::graphics::ImageBuffer tmp11 = this->buffer;
					tmp11->__srcBitmapData->__Field(HX_HCSTRING("fillRect","\x47","\x45","\xb9","\x6c"), hx::paccDynamic )(rect->__toFlashRectangle(),argb);
				}
				;break;
				default: {
				}
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC3(Image_obj,fillRect,(void))

Void Image_obj::floodFill( int x,int y,int color,Dynamic format){
{
		::lime::graphics::ImageBuffer tmp = this->buffer;
		bool tmp1 = (tmp == null());
		if ((tmp1)){
			return null();
		}
		{
			::lime::graphics::ImageType tmp2 = this->type;
			::lime::graphics::ImageType _g = tmp2;
			switch( (int)(_g->__Index())){
				case (int)0: {
					int tmp3 = x;
					int tmp4 = y;
					int tmp5 = color;
					Dynamic tmp6 = format;
					::lime::graphics::utils::ImageCanvasUtil_obj::floodFill(hx::ObjectPtr<OBJ_>(this),tmp3,tmp4,tmp5,tmp6);
				}
				;break;
				case (int)1: {
					int tmp3 = x;
					int tmp4 = y;
					int tmp5 = color;
					Dynamic tmp6 = format;
					::lime::graphics::utils::ImageDataUtil_obj::floodFill(hx::ObjectPtr<OBJ_>(this),tmp3,tmp4,tmp5,tmp6);
				}
				;break;
				case (int)2: {
					bool tmp3 = (format != null());
					int tmp4;
					if ((tmp3)){
						Dynamic tmp5 = format;
						switch( (int)(tmp5)){
							case (int)1: {
								tmp4 = color;
							}
							;break;
							case (int)2: {
								int bgra = color;
								{
									int tmp6;
									{
										int argb = (int)0;
										tmp6 = argb;
									}
									int argb = tmp6;
									{
										int tmp7 = (int(bgra) & int((int)255));
										int tmp8 = tmp7;
										int tmp9 = (int(tmp8) & int((int)255));
										int tmp10 = (int(tmp9) << int((int)24));
										int tmp11 = (int(bgra) >> int((int)8));
										int tmp12 = tmp11;
										int tmp13 = (int(tmp12) & int((int)255));
										int tmp14 = tmp13;
										int tmp15 = (int(tmp14) & int((int)255));
										int tmp16 = (int(tmp15) << int((int)16));
										int tmp17 = (int(tmp10) | int(tmp16));
										int tmp18 = (int(bgra) >> int((int)16));
										int tmp19 = tmp18;
										int tmp20 = (int(tmp19) & int((int)255));
										int tmp21 = tmp20;
										int tmp22 = (int(tmp21) & int((int)255));
										int tmp23 = (int(tmp22) << int((int)8));
										int tmp24 = (int(tmp17) | int(tmp23));
										int tmp25 = (int(bgra) >> int((int)24));
										int tmp26 = tmp25;
										int tmp27 = (int(tmp26) & int((int)255));
										int tmp28 = tmp27;
										int tmp29 = (int(tmp28) & int((int)255));
										int tmp30 = (int(tmp24) | int(tmp29));
										argb = tmp30;
									}
									tmp4 = argb;
								}
							}
							;break;
							default: {
								int rgba = color;
								{
									int tmp6;
									{
										int argb = (int)0;
										tmp6 = argb;
									}
									int argb = tmp6;
									{
										int tmp7 = (int(rgba) & int((int)255));
										int tmp8 = tmp7;
										int tmp9 = (int(tmp8) & int((int)255));
										int tmp10 = (int(tmp9) << int((int)24));
										int tmp11 = (int(rgba) >> int((int)24));
										int tmp12 = tmp11;
										int tmp13 = (int(tmp12) & int((int)255));
										int tmp14 = tmp13;
										int tmp15 = (int(tmp14) & int((int)255));
										int tmp16 = (int(tmp15) << int((int)16));
										int tmp17 = (int(tmp10) | int(tmp16));
										int tmp18 = (int(rgba) >> int((int)16));
										int tmp19 = tmp18;
										int tmp20 = (int(tmp19) & int((int)255));
										int tmp21 = tmp20;
										int tmp22 = (int(tmp21) & int((int)255));
										int tmp23 = (int(tmp22) << int((int)8));
										int tmp24 = (int(tmp17) | int(tmp23));
										int tmp25 = (int(rgba) >> int((int)8));
										int tmp26 = tmp25;
										int tmp27 = (int(tmp26) & int((int)255));
										int tmp28 = tmp27;
										int tmp29 = (int(tmp28) & int((int)255));
										int tmp30 = (int(tmp24) | int(tmp29));
										argb = tmp30;
									}
									tmp4 = argb;
								}
							}
						}
					}
					else{
						int rgba = color;
						{
							int tmp5;
							{
								int argb = (int)0;
								tmp5 = argb;
							}
							int argb = tmp5;
							{
								int tmp6 = (int(rgba) & int((int)255));
								int tmp7 = tmp6;
								int tmp8 = (int(tmp7) & int((int)255));
								int tmp9 = (int(tmp8) << int((int)24));
								int tmp10 = (int(rgba) >> int((int)24));
								int tmp11 = tmp10;
								int tmp12 = (int(tmp11) & int((int)255));
								int tmp13 = tmp12;
								int tmp14 = (int(tmp13) & int((int)255));
								int tmp15 = (int(tmp14) << int((int)16));
								int tmp16 = (int(tmp9) | int(tmp15));
								int tmp17 = (int(rgba) >> int((int)16));
								int tmp18 = tmp17;
								int tmp19 = (int(tmp18) & int((int)255));
								int tmp20 = tmp19;
								int tmp21 = (int(tmp20) & int((int)255));
								int tmp22 = (int(tmp21) << int((int)8));
								int tmp23 = (int(tmp16) | int(tmp22));
								int tmp24 = (int(rgba) >> int((int)8));
								int tmp25 = tmp24;
								int tmp26 = (int(tmp25) & int((int)255));
								int tmp27 = tmp26;
								int tmp28 = (int(tmp27) & int((int)255));
								int tmp29 = (int(tmp23) | int(tmp28));
								argb = tmp29;
							}
							tmp4 = argb;
						}
					}
					int argb = tmp4;
					::lime::graphics::ImageBuffer tmp5 = this->buffer;
					int tmp6 = x;
					int tmp7 = this->offsetX;
					int tmp8 = y;
					int tmp9 = this->offsetY;
					tmp5->__srcBitmapData->__Field(HX_HCSTRING("floodFill","\x61","\x83","\x8a","\x59"), hx::paccDynamic )((tmp6 + tmp7),(tmp8 + tmp9),argb);
				}
				;break;
				default: {
				}
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC4(Image_obj,floodFill,(void))

::lime::math::Rectangle Image_obj::getColorBoundsRect( int mask,int color,hx::Null< bool >  __o_findColor,Dynamic format){
bool findColor = __o_findColor.Default(true);
{
		::lime::graphics::ImageBuffer tmp = this->buffer;
		bool tmp1 = (tmp == null());
		if ((tmp1)){
			return null();
		}
		::lime::graphics::ImageType tmp2 = this->type;
		::lime::graphics::ImageType _g = tmp2;
		switch( (int)(_g->__Index())){
			case (int)0: {
				int tmp3 = mask;
				int tmp4 = color;
				bool tmp5 = findColor;
				Dynamic tmp6 = format;
				::lime::math::Rectangle tmp7 = ::lime::graphics::utils::ImageDataUtil_obj::getColorBoundsRect(hx::ObjectPtr<OBJ_>(this),tmp3,tmp4,tmp5,tmp6);
				return tmp7;
			}
			;break;
			case (int)1: {
				int tmp3 = mask;
				int tmp4 = color;
				bool tmp5 = findColor;
				Dynamic tmp6 = format;
				::lime::math::Rectangle tmp7 = ::lime::graphics::utils::ImageDataUtil_obj::getColorBoundsRect(hx::ObjectPtr<OBJ_>(this),tmp3,tmp4,tmp5,tmp6);
				return tmp7;
			}
			;break;
			case (int)2: {
				::lime::graphics::ImageBuffer tmp3 = this->buffer;
				Dynamic tmp4 = tmp3->__srcBitmapData->__Field(HX_HCSTRING("getColorBoundsRect","\x86","\xad","\xe8","\x80"), hx::paccDynamic )(mask,color,findColor);
				Dynamic rect = tmp4;
				::lime::math::Rectangle tmp5 = ::lime::math::Rectangle_obj::__new(rect->__Field(HX_HCSTRING("x","\x78","\x00","\x00","\x00"), hx::paccDynamic ),rect->__Field(HX_HCSTRING("y","\x79","\x00","\x00","\x00"), hx::paccDynamic ),rect->__Field(HX_HCSTRING("width","\x06","\xb6","\x62","\xca"), hx::paccDynamic ),rect->__Field(HX_HCSTRING("height","\xe7","\x07","\x4c","\x02"), hx::paccDynamic ));
				return tmp5;
			}
			;break;
			default: {
				return null();
			}
		}
		return null();
	}
}


HX_DEFINE_DYNAMIC_FUNC4(Image_obj,getColorBoundsRect,return )

int Image_obj::getPixel( int x,int y,Dynamic format){
	::lime::graphics::ImageBuffer tmp = this->buffer;
	bool tmp1 = (tmp == null());
	bool tmp2 = !(tmp1);
	bool tmp3 = tmp2;
	bool tmp4;
	if ((tmp3)){
		tmp4 = (x < (int)0);
	}
	else{
		tmp4 = true;
	}
	bool tmp5 = !(tmp4);
	bool tmp6 = tmp5;
	bool tmp7;
	if ((tmp6)){
		tmp7 = (y < (int)0);
	}
	else{
		tmp7 = true;
	}
	bool tmp8 = !(tmp7);
	bool tmp9 = tmp8;
	bool tmp10;
	if ((tmp9)){
		int tmp11 = x;
		int tmp12 = this->width;
		int tmp13 = tmp12;
		int tmp14 = tmp13;
		tmp10 = (tmp11 >= tmp14);
	}
	else{
		tmp10 = true;
	}
	bool tmp11 = !(tmp10);
	bool tmp12;
	if ((tmp11)){
		int tmp13 = y;
		int tmp14 = this->height;
		int tmp15 = tmp14;
		tmp12 = (tmp13 >= tmp15);
	}
	else{
		tmp12 = true;
	}
	if ((tmp12)){
		return (int)0;
	}
	::lime::graphics::ImageType tmp13 = this->type;
	::lime::graphics::ImageType _g = tmp13;
	switch( (int)(_g->__Index())){
		case (int)0: {
			int tmp14 = x;
			int tmp15 = y;
			Dynamic tmp16 = format;
			int tmp17 = ::lime::graphics::utils::ImageCanvasUtil_obj::getPixel(hx::ObjectPtr<OBJ_>(this),tmp14,tmp15,tmp16);
			return tmp17;
		}
		;break;
		case (int)1: {
			int tmp14 = x;
			int tmp15 = y;
			Dynamic tmp16 = format;
			int tmp17 = ::lime::graphics::utils::ImageDataUtil_obj::getPixel(hx::ObjectPtr<OBJ_>(this),tmp14,tmp15,tmp16);
			return tmp17;
		}
		;break;
		case (int)2: {
			::lime::graphics::ImageBuffer tmp14 = this->buffer;
			int tmp15 = x;
			int tmp16 = this->offsetX;
			int tmp17 = y;
			int tmp18 = this->offsetY;
			Dynamic tmp19 = tmp14->__srcBitmapData->__Field(HX_HCSTRING("getPixel","\x10","\xd6","\x7a","\x22"), hx::paccDynamic )((tmp15 + tmp16),(tmp17 + tmp18));
			int color = tmp19;
			bool tmp20 = (format != null());
			if ((tmp20)){
				Dynamic tmp21 = format;
				switch( (int)(tmp21)){
					case (int)1: {
						int tmp22 = color;
						return tmp22;
					}
					;break;
					case (int)2: {
						int tmp22;
						{
							int tmp23;
							{
								int bgra = (int)0;
								tmp23 = bgra;
							}
							int bgra = tmp23;
							{
								int tmp24 = (int(color) & int((int)255));
								int tmp25 = tmp24;
								int tmp26 = (int(tmp25) & int((int)255));
								int tmp27 = (int(tmp26) << int((int)24));
								int tmp28 = (int(color) >> int((int)8));
								int tmp29 = tmp28;
								int tmp30 = (int(tmp29) & int((int)255));
								int tmp31 = tmp30;
								int tmp32 = (int(tmp31) & int((int)255));
								int tmp33 = (int(tmp32) << int((int)16));
								int tmp34 = (int(tmp27) | int(tmp33));
								int tmp35 = (int(color) >> int((int)16));
								int tmp36 = tmp35;
								int tmp37 = (int(tmp36) & int((int)255));
								int tmp38 = tmp37;
								int tmp39 = (int(tmp38) & int((int)255));
								int tmp40 = (int(tmp39) << int((int)8));
								int tmp41 = (int(tmp34) | int(tmp40));
								int tmp42 = (int(color) >> int((int)24));
								int tmp43 = tmp42;
								int tmp44 = (int(tmp43) & int((int)255));
								int tmp45 = tmp44;
								int tmp46 = (int(tmp45) & int((int)255));
								int tmp47 = (int(tmp41) | int(tmp46));
								bgra = tmp47;
							}
							tmp22 = bgra;
						}
						int bgra = tmp22;
						int tmp23 = bgra;
						return tmp23;
					}
					;break;
					default: {
						int tmp22;
						{
							int tmp23;
							{
								int rgba = (int)0;
								tmp23 = rgba;
							}
							int rgba = tmp23;
							{
								int tmp24 = (int(color) >> int((int)16));
								int tmp25 = tmp24;
								int tmp26 = (int(tmp25) & int((int)255));
								int tmp27 = tmp26;
								int tmp28 = (int(tmp27) & int((int)255));
								int tmp29 = (int(tmp28) << int((int)24));
								int tmp30 = (int(color) >> int((int)8));
								int tmp31 = tmp30;
								int tmp32 = (int(tmp31) & int((int)255));
								int tmp33 = tmp32;
								int tmp34 = (int(tmp33) & int((int)255));
								int tmp35 = (int(tmp34) << int((int)16));
								int tmp36 = (int(tmp29) | int(tmp35));
								int tmp37 = (int(color) & int((int)255));
								int tmp38 = tmp37;
								int tmp39 = (int(tmp38) & int((int)255));
								int tmp40 = (int(tmp39) << int((int)8));
								int tmp41 = (int(tmp36) | int(tmp40));
								int tmp42 = (int(color) >> int((int)24));
								int tmp43 = tmp42;
								int tmp44 = (int(tmp43) & int((int)255));
								int tmp45 = tmp44;
								int tmp46 = (int(tmp45) & int((int)255));
								int tmp47 = (int(tmp41) | int(tmp46));
								rgba = tmp47;
							}
							tmp22 = rgba;
						}
						int rgba = tmp22;
						int tmp23 = rgba;
						return tmp23;
					}
				}
			}
			else{
				int tmp21;
				{
					int tmp22;
					{
						int rgba = (int)0;
						tmp22 = rgba;
					}
					int rgba = tmp22;
					{
						int tmp23 = (int(color) >> int((int)16));
						int tmp24 = tmp23;
						int tmp25 = (int(tmp24) & int((int)255));
						int tmp26 = tmp25;
						int tmp27 = (int(tmp26) & int((int)255));
						int tmp28 = (int(tmp27) << int((int)24));
						int tmp29 = (int(color) >> int((int)8));
						int tmp30 = tmp29;
						int tmp31 = (int(tmp30) & int((int)255));
						int tmp32 = tmp31;
						int tmp33 = (int(tmp32) & int((int)255));
						int tmp34 = (int(tmp33) << int((int)16));
						int tmp35 = (int(tmp28) | int(tmp34));
						int tmp36 = (int(color) & int((int)255));
						int tmp37 = tmp36;
						int tmp38 = (int(tmp37) & int((int)255));
						int tmp39 = (int(tmp38) << int((int)8));
						int tmp40 = (int(tmp35) | int(tmp39));
						int tmp41 = (int(color) >> int((int)24));
						int tmp42 = tmp41;
						int tmp43 = (int(tmp42) & int((int)255));
						int tmp44 = tmp43;
						int tmp45 = (int(tmp44) & int((int)255));
						int tmp46 = (int(tmp40) | int(tmp45));
						rgba = tmp46;
					}
					tmp21 = rgba;
				}
				int rgba = tmp21;
				int tmp22 = rgba;
				return tmp22;
			}
		}
		;break;
		default: {
			return (int)0;
		}
	}
	return (int)0;
}


HX_DEFINE_DYNAMIC_FUNC3(Image_obj,getPixel,return )

int Image_obj::getPixel32( int x,int y,Dynamic format){
	::lime::graphics::ImageBuffer tmp = this->buffer;
	bool tmp1 = (tmp == null());
	bool tmp2 = !(tmp1);
	bool tmp3 = tmp2;
	bool tmp4;
	if ((tmp3)){
		tmp4 = (x < (int)0);
	}
	else{
		tmp4 = true;
	}
	bool tmp5 = !(tmp4);
	bool tmp6 = tmp5;
	bool tmp7;
	if ((tmp6)){
		tmp7 = (y < (int)0);
	}
	else{
		tmp7 = true;
	}
	bool tmp8 = !(tmp7);
	bool tmp9 = tmp8;
	bool tmp10;
	if ((tmp9)){
		int tmp11 = x;
		int tmp12 = this->width;
		int tmp13 = tmp12;
		int tmp14 = tmp13;
		tmp10 = (tmp11 >= tmp14);
	}
	else{
		tmp10 = true;
	}
	bool tmp11 = !(tmp10);
	bool tmp12;
	if ((tmp11)){
		int tmp13 = y;
		int tmp14 = this->height;
		int tmp15 = tmp14;
		tmp12 = (tmp13 >= tmp15);
	}
	else{
		tmp12 = true;
	}
	if ((tmp12)){
		return (int)0;
	}
	::lime::graphics::ImageType tmp13 = this->type;
	::lime::graphics::ImageType _g = tmp13;
	switch( (int)(_g->__Index())){
		case (int)0: {
			int tmp14 = x;
			int tmp15 = y;
			Dynamic tmp16 = format;
			int tmp17 = ::lime::graphics::utils::ImageCanvasUtil_obj::getPixel32(hx::ObjectPtr<OBJ_>(this),tmp14,tmp15,tmp16);
			return tmp17;
		}
		;break;
		case (int)1: {
			int tmp14 = x;
			int tmp15 = y;
			Dynamic tmp16 = format;
			int tmp17 = ::lime::graphics::utils::ImageDataUtil_obj::getPixel32(hx::ObjectPtr<OBJ_>(this),tmp14,tmp15,tmp16);
			return tmp17;
		}
		;break;
		case (int)2: {
			::lime::graphics::ImageBuffer tmp14 = this->buffer;
			int tmp15 = x;
			int tmp16 = this->offsetX;
			int tmp17 = y;
			int tmp18 = this->offsetY;
			Dynamic tmp19 = tmp14->__srcBitmapData->__Field(HX_HCSTRING("getPixel32","\xaf","\xa6","\x68","\xd7"), hx::paccDynamic )((tmp15 + tmp16),(tmp17 + tmp18));
			int color = tmp19;
			bool tmp20 = (format != null());
			if ((tmp20)){
				Dynamic tmp21 = format;
				switch( (int)(tmp21)){
					case (int)1: {
						int tmp22 = color;
						return tmp22;
					}
					;break;
					case (int)2: {
						int tmp22;
						{
							int tmp23;
							{
								int bgra = (int)0;
								tmp23 = bgra;
							}
							int bgra = tmp23;
							{
								int tmp24 = (int(color) & int((int)255));
								int tmp25 = tmp24;
								int tmp26 = (int(tmp25) & int((int)255));
								int tmp27 = (int(tmp26) << int((int)24));
								int tmp28 = (int(color) >> int((int)8));
								int tmp29 = tmp28;
								int tmp30 = (int(tmp29) & int((int)255));
								int tmp31 = tmp30;
								int tmp32 = (int(tmp31) & int((int)255));
								int tmp33 = (int(tmp32) << int((int)16));
								int tmp34 = (int(tmp27) | int(tmp33));
								int tmp35 = (int(color) >> int((int)16));
								int tmp36 = tmp35;
								int tmp37 = (int(tmp36) & int((int)255));
								int tmp38 = tmp37;
								int tmp39 = (int(tmp38) & int((int)255));
								int tmp40 = (int(tmp39) << int((int)8));
								int tmp41 = (int(tmp34) | int(tmp40));
								int tmp42 = (int(color) >> int((int)24));
								int tmp43 = tmp42;
								int tmp44 = (int(tmp43) & int((int)255));
								int tmp45 = tmp44;
								int tmp46 = (int(tmp45) & int((int)255));
								int tmp47 = (int(tmp41) | int(tmp46));
								bgra = tmp47;
							}
							tmp22 = bgra;
						}
						int bgra = tmp22;
						int tmp23 = bgra;
						return tmp23;
					}
					;break;
					default: {
						int tmp22;
						{
							int tmp23;
							{
								int rgba = (int)0;
								tmp23 = rgba;
							}
							int rgba = tmp23;
							{
								int tmp24 = (int(color) >> int((int)16));
								int tmp25 = tmp24;
								int tmp26 = (int(tmp25) & int((int)255));
								int tmp27 = tmp26;
								int tmp28 = (int(tmp27) & int((int)255));
								int tmp29 = (int(tmp28) << int((int)24));
								int tmp30 = (int(color) >> int((int)8));
								int tmp31 = tmp30;
								int tmp32 = (int(tmp31) & int((int)255));
								int tmp33 = tmp32;
								int tmp34 = (int(tmp33) & int((int)255));
								int tmp35 = (int(tmp34) << int((int)16));
								int tmp36 = (int(tmp29) | int(tmp35));
								int tmp37 = (int(color) & int((int)255));
								int tmp38 = tmp37;
								int tmp39 = (int(tmp38) & int((int)255));
								int tmp40 = (int(tmp39) << int((int)8));
								int tmp41 = (int(tmp36) | int(tmp40));
								int tmp42 = (int(color) >> int((int)24));
								int tmp43 = tmp42;
								int tmp44 = (int(tmp43) & int((int)255));
								int tmp45 = tmp44;
								int tmp46 = (int(tmp45) & int((int)255));
								int tmp47 = (int(tmp41) | int(tmp46));
								rgba = tmp47;
							}
							tmp22 = rgba;
						}
						int rgba = tmp22;
						int tmp23 = rgba;
						return tmp23;
					}
				}
			}
			else{
				int tmp21;
				{
					int tmp22;
					{
						int rgba = (int)0;
						tmp22 = rgba;
					}
					int rgba = tmp22;
					{
						int tmp23 = (int(color) >> int((int)16));
						int tmp24 = tmp23;
						int tmp25 = (int(tmp24) & int((int)255));
						int tmp26 = tmp25;
						int tmp27 = (int(tmp26) & int((int)255));
						int tmp28 = (int(tmp27) << int((int)24));
						int tmp29 = (int(color) >> int((int)8));
						int tmp30 = tmp29;
						int tmp31 = (int(tmp30) & int((int)255));
						int tmp32 = tmp31;
						int tmp33 = (int(tmp32) & int((int)255));
						int tmp34 = (int(tmp33) << int((int)16));
						int tmp35 = (int(tmp28) | int(tmp34));
						int tmp36 = (int(color) & int((int)255));
						int tmp37 = tmp36;
						int tmp38 = (int(tmp37) & int((int)255));
						int tmp39 = (int(tmp38) << int((int)8));
						int tmp40 = (int(tmp35) | int(tmp39));
						int tmp41 = (int(color) >> int((int)24));
						int tmp42 = tmp41;
						int tmp43 = (int(tmp42) & int((int)255));
						int tmp44 = tmp43;
						int tmp45 = (int(tmp44) & int((int)255));
						int tmp46 = (int(tmp40) | int(tmp45));
						rgba = tmp46;
					}
					tmp21 = rgba;
				}
				int rgba = tmp21;
				int tmp22 = rgba;
				return tmp22;
			}
		}
		;break;
		default: {
			return (int)0;
		}
	}
	return (int)0;
}


HX_DEFINE_DYNAMIC_FUNC3(Image_obj,getPixel32,return )

::haxe::io::Bytes Image_obj::getPixels( ::lime::math::Rectangle rect,Dynamic format){
	::lime::graphics::ImageBuffer tmp = this->buffer;
	bool tmp1 = (tmp == null());
	if ((tmp1)){
		return null();
	}
	::lime::graphics::ImageType tmp2 = this->type;
	::lime::graphics::ImageType _g = tmp2;
	switch( (int)(_g->__Index())){
		case (int)0: {
			::lime::math::Rectangle tmp3 = rect;
			Dynamic tmp4 = format;
			::haxe::io::Bytes tmp5 = ::lime::graphics::utils::ImageCanvasUtil_obj::getPixels(hx::ObjectPtr<OBJ_>(this),tmp3,tmp4);
			return tmp5;
		}
		;break;
		case (int)1: {
			::lime::math::Rectangle tmp3 = rect;
			Dynamic tmp4 = format;
			::haxe::io::Bytes tmp5 = ::lime::graphics::utils::ImageDataUtil_obj::getPixels(hx::ObjectPtr<OBJ_>(this),tmp3,tmp4);
			return tmp5;
		}
		;break;
		case (int)2: {
			return null();
		}
		;break;
		default: {
			return null();
		}
	}
	return null();
}


HX_DEFINE_DYNAMIC_FUNC2(Image_obj,getPixels,return )

Void Image_obj::merge( ::lime::graphics::Image sourceImage,::lime::math::Rectangle sourceRect,::lime::math::Vector2 destPoint,int redMultiplier,int greenMultiplier,int blueMultiplier,int alphaMultiplier){
{
		::lime::graphics::ImageBuffer tmp = this->buffer;
		bool tmp1 = (tmp == null());
		bool tmp2 = !(tmp1);
		bool tmp3;
		if ((tmp2)){
			tmp3 = (sourceImage == null());
		}
		else{
			tmp3 = true;
		}
		if ((tmp3)){
			return null();
		}
		{
			::lime::graphics::ImageType tmp4 = this->type;
			::lime::graphics::ImageType _g = tmp4;
			switch( (int)(_g->__Index())){
				case (int)0: {
					::lime::graphics::utils::ImageCanvasUtil_obj::convertToCanvas(hx::ObjectPtr<OBJ_>(this),null());
					::lime::graphics::Image tmp5 = sourceImage;
					::lime::math::Rectangle tmp6 = sourceRect;
					::lime::math::Vector2 tmp7 = destPoint;
					int tmp8 = redMultiplier;
					int tmp9 = greenMultiplier;
					int tmp10 = blueMultiplier;
					int tmp11 = alphaMultiplier;
					::lime::graphics::utils::ImageCanvasUtil_obj::merge(hx::ObjectPtr<OBJ_>(this),tmp5,tmp6,tmp7,tmp8,tmp9,tmp10,tmp11);
				}
				;break;
				case (int)1: {
					::lime::graphics::Image tmp5 = sourceImage;
					::lime::math::Rectangle tmp6 = sourceRect;
					::lime::math::Vector2 tmp7 = destPoint;
					int tmp8 = redMultiplier;
					int tmp9 = greenMultiplier;
					int tmp10 = blueMultiplier;
					int tmp11 = alphaMultiplier;
					::lime::graphics::utils::ImageDataUtil_obj::merge(hx::ObjectPtr<OBJ_>(this),tmp5,tmp6,tmp7,tmp8,tmp9,tmp10,tmp11);
				}
				;break;
				case (int)2: {
					int tmp5 = this->offsetX;
					int tmp6 = this->offsetY;
					sourceRect->offset(tmp5,tmp6);
					::lime::graphics::ImageBuffer tmp7 = this->buffer;
					tmp7->__srcBitmapData->__Field(HX_HCSTRING("merge","\xb8","\xa2","\xc6","\x05"), hx::paccDynamic )(sourceImage->buffer->__srcBitmapData,sourceRect->__toFlashRectangle(),destPoint->__toFlashPoint(),redMultiplier,greenMultiplier,blueMultiplier,alphaMultiplier);
				}
				;break;
				default: {
					return null();
				}
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC7(Image_obj,merge,(void))

Void Image_obj::resize( int newWidth,int newHeight){
{
		{
			::lime::graphics::ImageType tmp = this->type;
			::lime::graphics::ImageType _g = tmp;
			switch( (int)(_g->__Index())){
				case (int)0: {
					int tmp1 = newWidth;
					int tmp2 = newHeight;
					::lime::graphics::utils::ImageCanvasUtil_obj::resize(hx::ObjectPtr<OBJ_>(this),tmp1,tmp2);
				}
				;break;
				case (int)1: {
					int tmp1 = newWidth;
					int tmp2 = newHeight;
					::lime::graphics::utils::ImageDataUtil_obj::resize(hx::ObjectPtr<OBJ_>(this),tmp1,tmp2);
				}
				;break;
				case (int)2: {
				}
				;break;
				default: {
				}
			}
		}
		::lime::graphics::ImageBuffer tmp = this->buffer;
		tmp->width = newWidth;
		::lime::graphics::ImageBuffer tmp1 = this->buffer;
		tmp1->height = newHeight;
		this->offsetX = (int)0;
		this->offsetY = (int)0;
		this->width = newWidth;
		this->height = newHeight;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(Image_obj,resize,(void))

Void Image_obj::scroll( int x,int y){
{
		::lime::graphics::ImageBuffer tmp = this->buffer;
		bool tmp1 = (tmp == null());
		if ((tmp1)){
			return null();
		}
		{
			::lime::graphics::ImageType tmp2 = this->type;
			::lime::graphics::ImageType _g = tmp2;
			switch( (int)(_g->__Index())){
				case (int)0: {
					int tmp3 = x;
					int tmp4 = y;
					::lime::graphics::utils::ImageCanvasUtil_obj::scroll(hx::ObjectPtr<OBJ_>(this),tmp3,tmp4);
				}
				;break;
				case (int)1: {
					::lime::math::Rectangle tmp3 = this->get_rect();
					::lime::math::Vector2 tmp4 = ::lime::math::Vector2_obj::__new(x,y);
					this->copyPixels(hx::ObjectPtr<OBJ_>(this),tmp3,tmp4,null(),null(),null());
				}
				;break;
				case (int)2: {
					::lime::graphics::ImageBuffer tmp3 = this->buffer;
					int tmp4 = x;
					int tmp5 = this->offsetX;
					int tmp6 = y;
					int tmp7 = this->offsetX;
					tmp3->__srcBitmapData->__Field(HX_HCSTRING("scroll","\x0d","\xd8","\x64","\x47"), hx::paccDynamic )((tmp4 + tmp5),(tmp6 + tmp7));
				}
				;break;
				default: {
				}
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(Image_obj,scroll,(void))

Void Image_obj::setPixel( int x,int y,int color,Dynamic format){
{
		::lime::graphics::ImageBuffer tmp = this->buffer;
		bool tmp1 = (tmp == null());
		bool tmp2 = !(tmp1);
		bool tmp3 = tmp2;
		bool tmp4;
		if ((tmp3)){
			tmp4 = (x < (int)0);
		}
		else{
			tmp4 = true;
		}
		bool tmp5 = !(tmp4);
		bool tmp6 = tmp5;
		bool tmp7;
		if ((tmp6)){
			tmp7 = (y < (int)0);
		}
		else{
			tmp7 = true;
		}
		bool tmp8 = !(tmp7);
		bool tmp9 = tmp8;
		bool tmp10;
		if ((tmp9)){
			int tmp11 = x;
			int tmp12 = this->width;
			int tmp13 = tmp12;
			int tmp14 = tmp13;
			tmp10 = (tmp11 >= tmp14);
		}
		else{
			tmp10 = true;
		}
		bool tmp11 = !(tmp10);
		bool tmp12;
		if ((tmp11)){
			int tmp13 = y;
			int tmp14 = this->height;
			int tmp15 = tmp14;
			tmp12 = (tmp13 >= tmp15);
		}
		else{
			tmp12 = true;
		}
		if ((tmp12)){
			return null();
		}
		{
			::lime::graphics::ImageType tmp13 = this->type;
			::lime::graphics::ImageType _g = tmp13;
			switch( (int)(_g->__Index())){
				case (int)0: {
					int tmp14 = x;
					int tmp15 = y;
					int tmp16 = color;
					Dynamic tmp17 = format;
					::lime::graphics::utils::ImageCanvasUtil_obj::setPixel(hx::ObjectPtr<OBJ_>(this),tmp14,tmp15,tmp16,tmp17);
				}
				;break;
				case (int)1: {
					int tmp14 = x;
					int tmp15 = y;
					int tmp16 = color;
					Dynamic tmp17 = format;
					::lime::graphics::utils::ImageDataUtil_obj::setPixel(hx::ObjectPtr<OBJ_>(this),tmp14,tmp15,tmp16,tmp17);
				}
				;break;
				case (int)2: {
					bool tmp14 = (format != null());
					int tmp15;
					if ((tmp14)){
						Dynamic tmp16 = format;
						switch( (int)(tmp16)){
							case (int)1: {
								tmp15 = color;
							}
							;break;
							case (int)2: {
								int bgra = color;
								{
									int tmp17;
									{
										int argb = (int)0;
										tmp17 = argb;
									}
									int argb = tmp17;
									{
										int tmp18 = (int(bgra) & int((int)255));
										int tmp19 = tmp18;
										int tmp20 = (int(tmp19) & int((int)255));
										int tmp21 = (int(tmp20) << int((int)24));
										int tmp22 = (int(bgra) >> int((int)8));
										int tmp23 = tmp22;
										int tmp24 = (int(tmp23) & int((int)255));
										int tmp25 = tmp24;
										int tmp26 = (int(tmp25) & int((int)255));
										int tmp27 = (int(tmp26) << int((int)16));
										int tmp28 = (int(tmp21) | int(tmp27));
										int tmp29 = (int(bgra) >> int((int)16));
										int tmp30 = tmp29;
										int tmp31 = (int(tmp30) & int((int)255));
										int tmp32 = tmp31;
										int tmp33 = (int(tmp32) & int((int)255));
										int tmp34 = (int(tmp33) << int((int)8));
										int tmp35 = (int(tmp28) | int(tmp34));
										int tmp36 = (int(bgra) >> int((int)24));
										int tmp37 = tmp36;
										int tmp38 = (int(tmp37) & int((int)255));
										int tmp39 = tmp38;
										int tmp40 = (int(tmp39) & int((int)255));
										int tmp41 = (int(tmp35) | int(tmp40));
										argb = tmp41;
									}
									tmp15 = argb;
								}
							}
							;break;
							default: {
								int rgba = color;
								{
									int tmp17;
									{
										int argb = (int)0;
										tmp17 = argb;
									}
									int argb = tmp17;
									{
										int tmp18 = (int(rgba) & int((int)255));
										int tmp19 = tmp18;
										int tmp20 = (int(tmp19) & int((int)255));
										int tmp21 = (int(tmp20) << int((int)24));
										int tmp22 = (int(rgba) >> int((int)24));
										int tmp23 = tmp22;
										int tmp24 = (int(tmp23) & int((int)255));
										int tmp25 = tmp24;
										int tmp26 = (int(tmp25) & int((int)255));
										int tmp27 = (int(tmp26) << int((int)16));
										int tmp28 = (int(tmp21) | int(tmp27));
										int tmp29 = (int(rgba) >> int((int)16));
										int tmp30 = tmp29;
										int tmp31 = (int(tmp30) & int((int)255));
										int tmp32 = tmp31;
										int tmp33 = (int(tmp32) & int((int)255));
										int tmp34 = (int(tmp33) << int((int)8));
										int tmp35 = (int(tmp28) | int(tmp34));
										int tmp36 = (int(rgba) >> int((int)8));
										int tmp37 = tmp36;
										int tmp38 = (int(tmp37) & int((int)255));
										int tmp39 = tmp38;
										int tmp40 = (int(tmp39) & int((int)255));
										int tmp41 = (int(tmp35) | int(tmp40));
										argb = tmp41;
									}
									tmp15 = argb;
								}
							}
						}
					}
					else{
						int rgba = color;
						{
							int tmp16;
							{
								int argb = (int)0;
								tmp16 = argb;
							}
							int argb = tmp16;
							{
								int tmp17 = (int(rgba) & int((int)255));
								int tmp18 = tmp17;
								int tmp19 = (int(tmp18) & int((int)255));
								int tmp20 = (int(tmp19) << int((int)24));
								int tmp21 = (int(rgba) >> int((int)24));
								int tmp22 = tmp21;
								int tmp23 = (int(tmp22) & int((int)255));
								int tmp24 = tmp23;
								int tmp25 = (int(tmp24) & int((int)255));
								int tmp26 = (int(tmp25) << int((int)16));
								int tmp27 = (int(tmp20) | int(tmp26));
								int tmp28 = (int(rgba) >> int((int)16));
								int tmp29 = tmp28;
								int tmp30 = (int(tmp29) & int((int)255));
								int tmp31 = tmp30;
								int tmp32 = (int(tmp31) & int((int)255));
								int tmp33 = (int(tmp32) << int((int)8));
								int tmp34 = (int(tmp27) | int(tmp33));
								int tmp35 = (int(rgba) >> int((int)8));
								int tmp36 = tmp35;
								int tmp37 = (int(tmp36) & int((int)255));
								int tmp38 = tmp37;
								int tmp39 = (int(tmp38) & int((int)255));
								int tmp40 = (int(tmp34) | int(tmp39));
								argb = tmp40;
							}
							tmp15 = argb;
						}
					}
					int argb = tmp15;
					::lime::graphics::ImageBuffer tmp16 = this->buffer;
					int tmp17 = x;
					int tmp18 = this->offsetX;
					int tmp19 = y;
					int tmp20 = this->offsetX;
					tmp16->__srcBitmapData->__Field(HX_HCSTRING("setPixel","\x84","\x2f","\xd8","\xd0"), hx::paccDynamic )((tmp17 + tmp18),(tmp19 + tmp20),argb);
				}
				;break;
				default: {
				}
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC4(Image_obj,setPixel,(void))

Void Image_obj::setPixel32( int x,int y,int color,Dynamic format){
{
		::lime::graphics::ImageBuffer tmp = this->buffer;
		bool tmp1 = (tmp == null());
		bool tmp2 = !(tmp1);
		bool tmp3 = tmp2;
		bool tmp4;
		if ((tmp3)){
			tmp4 = (x < (int)0);
		}
		else{
			tmp4 = true;
		}
		bool tmp5 = !(tmp4);
		bool tmp6 = tmp5;
		bool tmp7;
		if ((tmp6)){
			tmp7 = (y < (int)0);
		}
		else{
			tmp7 = true;
		}
		bool tmp8 = !(tmp7);
		bool tmp9 = tmp8;
		bool tmp10;
		if ((tmp9)){
			int tmp11 = x;
			int tmp12 = this->width;
			int tmp13 = tmp12;
			int tmp14 = tmp13;
			tmp10 = (tmp11 >= tmp14);
		}
		else{
			tmp10 = true;
		}
		bool tmp11 = !(tmp10);
		bool tmp12;
		if ((tmp11)){
			int tmp13 = y;
			int tmp14 = this->height;
			int tmp15 = tmp14;
			tmp12 = (tmp13 >= tmp15);
		}
		else{
			tmp12 = true;
		}
		if ((tmp12)){
			return null();
		}
		{
			::lime::graphics::ImageType tmp13 = this->type;
			::lime::graphics::ImageType _g = tmp13;
			switch( (int)(_g->__Index())){
				case (int)0: {
					int tmp14 = x;
					int tmp15 = y;
					int tmp16 = color;
					Dynamic tmp17 = format;
					::lime::graphics::utils::ImageCanvasUtil_obj::setPixel32(hx::ObjectPtr<OBJ_>(this),tmp14,tmp15,tmp16,tmp17);
				}
				;break;
				case (int)1: {
					int tmp14 = x;
					int tmp15 = y;
					int tmp16 = color;
					Dynamic tmp17 = format;
					::lime::graphics::utils::ImageDataUtil_obj::setPixel32(hx::ObjectPtr<OBJ_>(this),tmp14,tmp15,tmp16,tmp17);
				}
				;break;
				case (int)2: {
					bool tmp14 = (format != null());
					int tmp15;
					if ((tmp14)){
						Dynamic tmp16 = format;
						switch( (int)(tmp16)){
							case (int)1: {
								tmp15 = color;
							}
							;break;
							case (int)2: {
								int bgra = color;
								{
									int tmp17;
									{
										int argb = (int)0;
										tmp17 = argb;
									}
									int argb = tmp17;
									{
										int tmp18 = (int(bgra) & int((int)255));
										int tmp19 = tmp18;
										int tmp20 = (int(tmp19) & int((int)255));
										int tmp21 = (int(tmp20) << int((int)24));
										int tmp22 = (int(bgra) >> int((int)8));
										int tmp23 = tmp22;
										int tmp24 = (int(tmp23) & int((int)255));
										int tmp25 = tmp24;
										int tmp26 = (int(tmp25) & int((int)255));
										int tmp27 = (int(tmp26) << int((int)16));
										int tmp28 = (int(tmp21) | int(tmp27));
										int tmp29 = (int(bgra) >> int((int)16));
										int tmp30 = tmp29;
										int tmp31 = (int(tmp30) & int((int)255));
										int tmp32 = tmp31;
										int tmp33 = (int(tmp32) & int((int)255));
										int tmp34 = (int(tmp33) << int((int)8));
										int tmp35 = (int(tmp28) | int(tmp34));
										int tmp36 = (int(bgra) >> int((int)24));
										int tmp37 = tmp36;
										int tmp38 = (int(tmp37) & int((int)255));
										int tmp39 = tmp38;
										int tmp40 = (int(tmp39) & int((int)255));
										int tmp41 = (int(tmp35) | int(tmp40));
										argb = tmp41;
									}
									tmp15 = argb;
								}
							}
							;break;
							default: {
								int rgba = color;
								{
									int tmp17;
									{
										int argb = (int)0;
										tmp17 = argb;
									}
									int argb = tmp17;
									{
										int tmp18 = (int(rgba) & int((int)255));
										int tmp19 = tmp18;
										int tmp20 = (int(tmp19) & int((int)255));
										int tmp21 = (int(tmp20) << int((int)24));
										int tmp22 = (int(rgba) >> int((int)24));
										int tmp23 = tmp22;
										int tmp24 = (int(tmp23) & int((int)255));
										int tmp25 = tmp24;
										int tmp26 = (int(tmp25) & int((int)255));
										int tmp27 = (int(tmp26) << int((int)16));
										int tmp28 = (int(tmp21) | int(tmp27));
										int tmp29 = (int(rgba) >> int((int)16));
										int tmp30 = tmp29;
										int tmp31 = (int(tmp30) & int((int)255));
										int tmp32 = tmp31;
										int tmp33 = (int(tmp32) & int((int)255));
										int tmp34 = (int(tmp33) << int((int)8));
										int tmp35 = (int(tmp28) | int(tmp34));
										int tmp36 = (int(rgba) >> int((int)8));
										int tmp37 = tmp36;
										int tmp38 = (int(tmp37) & int((int)255));
										int tmp39 = tmp38;
										int tmp40 = (int(tmp39) & int((int)255));
										int tmp41 = (int(tmp35) | int(tmp40));
										argb = tmp41;
									}
									tmp15 = argb;
								}
							}
						}
					}
					else{
						int rgba = color;
						{
							int tmp16;
							{
								int argb = (int)0;
								tmp16 = argb;
							}
							int argb = tmp16;
							{
								int tmp17 = (int(rgba) & int((int)255));
								int tmp18 = tmp17;
								int tmp19 = (int(tmp18) & int((int)255));
								int tmp20 = (int(tmp19) << int((int)24));
								int tmp21 = (int(rgba) >> int((int)24));
								int tmp22 = tmp21;
								int tmp23 = (int(tmp22) & int((int)255));
								int tmp24 = tmp23;
								int tmp25 = (int(tmp24) & int((int)255));
								int tmp26 = (int(tmp25) << int((int)16));
								int tmp27 = (int(tmp20) | int(tmp26));
								int tmp28 = (int(rgba) >> int((int)16));
								int tmp29 = tmp28;
								int tmp30 = (int(tmp29) & int((int)255));
								int tmp31 = tmp30;
								int tmp32 = (int(tmp31) & int((int)255));
								int tmp33 = (int(tmp32) << int((int)8));
								int tmp34 = (int(tmp27) | int(tmp33));
								int tmp35 = (int(rgba) >> int((int)8));
								int tmp36 = tmp35;
								int tmp37 = (int(tmp36) & int((int)255));
								int tmp38 = tmp37;
								int tmp39 = (int(tmp38) & int((int)255));
								int tmp40 = (int(tmp34) | int(tmp39));
								argb = tmp40;
							}
							tmp15 = argb;
						}
					}
					int argb = tmp15;
					::lime::graphics::ImageBuffer tmp16 = this->buffer;
					int tmp17 = x;
					int tmp18 = this->offsetX;
					int tmp19 = y;
					int tmp20 = this->offsetY;
					tmp16->__srcBitmapData->__Field(HX_HCSTRING("setPixel32","\x23","\x45","\xe6","\xda"), hx::paccDynamic )((tmp17 + tmp18),(tmp19 + tmp20),argb);
				}
				;break;
				default: {
				}
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC4(Image_obj,setPixel32,(void))

Void Image_obj::setPixels( ::lime::math::Rectangle rect,::haxe::io::Bytes bytes,Dynamic format){
{
		::lime::math::Rectangle tmp = rect;
		::lime::math::Rectangle tmp1 = this->__clipRect(tmp);
		rect = tmp1;
		::lime::graphics::ImageBuffer tmp2 = this->buffer;
		bool tmp3 = (tmp2 == null());
		bool tmp4 = !(tmp3);
		bool tmp5;
		if ((tmp4)){
			tmp5 = (rect == null());
		}
		else{
			tmp5 = true;
		}
		if ((tmp5)){
			return null();
		}
		{
			::lime::graphics::ImageType tmp6 = this->type;
			::lime::graphics::ImageType _g = tmp6;
			switch( (int)(_g->__Index())){
				case (int)0: {
					::lime::math::Rectangle tmp7 = rect;
					::haxe::io::Bytes tmp8 = bytes;
					Dynamic tmp9 = format;
					::lime::graphics::utils::ImageCanvasUtil_obj::setPixels(hx::ObjectPtr<OBJ_>(this),tmp7,tmp8,tmp9);
				}
				;break;
				case (int)1: {
					::lime::math::Rectangle tmp7 = rect;
					::haxe::io::Bytes tmp8 = bytes;
					Dynamic tmp9 = format;
					::lime::graphics::utils::ImageDataUtil_obj::setPixels(hx::ObjectPtr<OBJ_>(this),tmp7,tmp8,tmp9);
				}
				;break;
				case (int)2: {
				}
				;break;
				default: {
				}
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC3(Image_obj,setPixels,(void))

int Image_obj::threshold( ::lime::graphics::Image sourceImage,::lime::math::Rectangle sourceRect,::lime::math::Vector2 destPoint,::String operation,int threshold,hx::Null< int >  __o_color,hx::Null< int >  __o_mask,hx::Null< bool >  __o_copySource,Dynamic format){
int color = __o_color.Default(0);
int mask = __o_mask.Default(-1);
bool copySource = __o_copySource.Default(false);
{
		::lime::graphics::ImageBuffer tmp = this->buffer;
		bool tmp1 = (tmp == null());
		bool tmp2 = !(tmp1);
		bool tmp3 = tmp2;
		bool tmp4;
		if ((tmp3)){
			tmp4 = (sourceImage == null());
		}
		else{
			tmp4 = true;
		}
		bool tmp5 = !(tmp4);
		bool tmp6;
		if ((tmp5)){
			tmp6 = (sourceRect == null());
		}
		else{
			tmp6 = true;
		}
		if ((tmp6)){
			return (int)0;
		}
		{
			::lime::graphics::ImageType tmp7 = this->type;
			::lime::graphics::ImageType _g = tmp7;
			switch( (int)(_g->__Index())){
				case (int)0: case (int)1: {
					::lime::graphics::Image tmp8 = sourceImage;
					::lime::math::Rectangle tmp9 = sourceRect;
					::lime::math::Vector2 tmp10 = destPoint;
					::String tmp11 = operation;
					int tmp12 = threshold;
					int tmp13 = color;
					int tmp14 = mask;
					bool tmp15 = copySource;
					Dynamic tmp16 = format;
					int tmp17 = ::lime::graphics::utils::ImageDataUtil_obj::threshold(hx::ObjectPtr<OBJ_>(this),tmp8,tmp9,tmp10,tmp11,tmp12,tmp13,tmp14,tmp15,tmp16);
					return tmp17;
				}
				;break;
				case (int)2: {
					bool tmp8 = (format != null());
					int tmp9;
					if ((tmp8)){
						Dynamic tmp10 = format;
						switch( (int)(tmp10)){
							case (int)1: {
								tmp9 = color;
							}
							;break;
							case (int)2: {
								int bgra = color;
								{
									int tmp11;
									{
										int argb = (int)0;
										tmp11 = argb;
									}
									int argb = tmp11;
									{
										int tmp12 = (int(bgra) & int((int)255));
										int tmp13 = tmp12;
										int tmp14 = (int(tmp13) & int((int)255));
										int tmp15 = (int(tmp14) << int((int)24));
										int tmp16 = (int(bgra) >> int((int)8));
										int tmp17 = tmp16;
										int tmp18 = (int(tmp17) & int((int)255));
										int tmp19 = tmp18;
										int tmp20 = (int(tmp19) & int((int)255));
										int tmp21 = (int(tmp20) << int((int)16));
										int tmp22 = (int(tmp15) | int(tmp21));
										int tmp23 = (int(bgra) >> int((int)16));
										int tmp24 = tmp23;
										int tmp25 = (int(tmp24) & int((int)255));
										int tmp26 = tmp25;
										int tmp27 = (int(tmp26) & int((int)255));
										int tmp28 = (int(tmp27) << int((int)8));
										int tmp29 = (int(tmp22) | int(tmp28));
										int tmp30 = (int(bgra) >> int((int)24));
										int tmp31 = tmp30;
										int tmp32 = (int(tmp31) & int((int)255));
										int tmp33 = tmp32;
										int tmp34 = (int(tmp33) & int((int)255));
										int tmp35 = (int(tmp29) | int(tmp34));
										argb = tmp35;
									}
									tmp9 = argb;
								}
							}
							;break;
							default: {
								int rgba = color;
								{
									int tmp11;
									{
										int argb = (int)0;
										tmp11 = argb;
									}
									int argb = tmp11;
									{
										int tmp12 = (int(rgba) & int((int)255));
										int tmp13 = tmp12;
										int tmp14 = (int(tmp13) & int((int)255));
										int tmp15 = (int(tmp14) << int((int)24));
										int tmp16 = (int(rgba) >> int((int)24));
										int tmp17 = tmp16;
										int tmp18 = (int(tmp17) & int((int)255));
										int tmp19 = tmp18;
										int tmp20 = (int(tmp19) & int((int)255));
										int tmp21 = (int(tmp20) << int((int)16));
										int tmp22 = (int(tmp15) | int(tmp21));
										int tmp23 = (int(rgba) >> int((int)16));
										int tmp24 = tmp23;
										int tmp25 = (int(tmp24) & int((int)255));
										int tmp26 = tmp25;
										int tmp27 = (int(tmp26) & int((int)255));
										int tmp28 = (int(tmp27) << int((int)8));
										int tmp29 = (int(tmp22) | int(tmp28));
										int tmp30 = (int(rgba) >> int((int)8));
										int tmp31 = tmp30;
										int tmp32 = (int(tmp31) & int((int)255));
										int tmp33 = tmp32;
										int tmp34 = (int(tmp33) & int((int)255));
										int tmp35 = (int(tmp29) | int(tmp34));
										argb = tmp35;
									}
									tmp9 = argb;
								}
							}
						}
					}
					else{
						int rgba = color;
						{
							int tmp10;
							{
								int argb = (int)0;
								tmp10 = argb;
							}
							int argb = tmp10;
							{
								int tmp11 = (int(rgba) & int((int)255));
								int tmp12 = tmp11;
								int tmp13 = (int(tmp12) & int((int)255));
								int tmp14 = (int(tmp13) << int((int)24));
								int tmp15 = (int(rgba) >> int((int)24));
								int tmp16 = tmp15;
								int tmp17 = (int(tmp16) & int((int)255));
								int tmp18 = tmp17;
								int tmp19 = (int(tmp18) & int((int)255));
								int tmp20 = (int(tmp19) << int((int)16));
								int tmp21 = (int(tmp14) | int(tmp20));
								int tmp22 = (int(rgba) >> int((int)16));
								int tmp23 = tmp22;
								int tmp24 = (int(tmp23) & int((int)255));
								int tmp25 = tmp24;
								int tmp26 = (int(tmp25) & int((int)255));
								int tmp27 = (int(tmp26) << int((int)8));
								int tmp28 = (int(tmp21) | int(tmp27));
								int tmp29 = (int(rgba) >> int((int)8));
								int tmp30 = tmp29;
								int tmp31 = (int(tmp30) & int((int)255));
								int tmp32 = tmp31;
								int tmp33 = (int(tmp32) & int((int)255));
								int tmp34 = (int(tmp28) | int(tmp33));
								argb = tmp34;
							}
							tmp9 = argb;
						}
					}
					int _color = tmp9;
					bool tmp10 = (format != null());
					int tmp11;
					if ((tmp10)){
						Dynamic tmp12 = format;
						switch( (int)(tmp12)){
							case (int)1: {
								tmp11 = mask;
							}
							;break;
							case (int)2: {
								int bgra = mask;
								{
									int tmp13;
									{
										int argb = (int)0;
										tmp13 = argb;
									}
									int argb = tmp13;
									{
										int tmp14 = (int(bgra) & int((int)255));
										int tmp15 = tmp14;
										int tmp16 = (int(tmp15) & int((int)255));
										int tmp17 = (int(tmp16) << int((int)24));
										int tmp18 = (int(bgra) >> int((int)8));
										int tmp19 = tmp18;
										int tmp20 = (int(tmp19) & int((int)255));
										int tmp21 = tmp20;
										int tmp22 = (int(tmp21) & int((int)255));
										int tmp23 = (int(tmp22) << int((int)16));
										int tmp24 = (int(tmp17) | int(tmp23));
										int tmp25 = (int(bgra) >> int((int)16));
										int tmp26 = tmp25;
										int tmp27 = (int(tmp26) & int((int)255));
										int tmp28 = tmp27;
										int tmp29 = (int(tmp28) & int((int)255));
										int tmp30 = (int(tmp29) << int((int)8));
										int tmp31 = (int(tmp24) | int(tmp30));
										int tmp32 = (int(bgra) >> int((int)24));
										int tmp33 = tmp32;
										int tmp34 = (int(tmp33) & int((int)255));
										int tmp35 = tmp34;
										int tmp36 = (int(tmp35) & int((int)255));
										int tmp37 = (int(tmp31) | int(tmp36));
										argb = tmp37;
									}
									tmp11 = argb;
								}
							}
							;break;
							default: {
								int rgba = mask;
								{
									int tmp13;
									{
										int argb = (int)0;
										tmp13 = argb;
									}
									int argb = tmp13;
									{
										int tmp14 = (int(rgba) & int((int)255));
										int tmp15 = tmp14;
										int tmp16 = (int(tmp15) & int((int)255));
										int tmp17 = (int(tmp16) << int((int)24));
										int tmp18 = (int(rgba) >> int((int)24));
										int tmp19 = tmp18;
										int tmp20 = (int(tmp19) & int((int)255));
										int tmp21 = tmp20;
										int tmp22 = (int(tmp21) & int((int)255));
										int tmp23 = (int(tmp22) << int((int)16));
										int tmp24 = (int(tmp17) | int(tmp23));
										int tmp25 = (int(rgba) >> int((int)16));
										int tmp26 = tmp25;
										int tmp27 = (int(tmp26) & int((int)255));
										int tmp28 = tmp27;
										int tmp29 = (int(tmp28) & int((int)255));
										int tmp30 = (int(tmp29) << int((int)8));
										int tmp31 = (int(tmp24) | int(tmp30));
										int tmp32 = (int(rgba) >> int((int)8));
										int tmp33 = tmp32;
										int tmp34 = (int(tmp33) & int((int)255));
										int tmp35 = tmp34;
										int tmp36 = (int(tmp35) & int((int)255));
										int tmp37 = (int(tmp31) | int(tmp36));
										argb = tmp37;
									}
									tmp11 = argb;
								}
							}
						}
					}
					else{
						int rgba = mask;
						{
							int tmp12;
							{
								int argb = (int)0;
								tmp12 = argb;
							}
							int argb = tmp12;
							{
								int tmp13 = (int(rgba) & int((int)255));
								int tmp14 = tmp13;
								int tmp15 = (int(tmp14) & int((int)255));
								int tmp16 = (int(tmp15) << int((int)24));
								int tmp17 = (int(rgba) >> int((int)24));
								int tmp18 = tmp17;
								int tmp19 = (int(tmp18) & int((int)255));
								int tmp20 = tmp19;
								int tmp21 = (int(tmp20) & int((int)255));
								int tmp22 = (int(tmp21) << int((int)16));
								int tmp23 = (int(tmp16) | int(tmp22));
								int tmp24 = (int(rgba) >> int((int)16));
								int tmp25 = tmp24;
								int tmp26 = (int(tmp25) & int((int)255));
								int tmp27 = tmp26;
								int tmp28 = (int(tmp27) & int((int)255));
								int tmp29 = (int(tmp28) << int((int)8));
								int tmp30 = (int(tmp23) | int(tmp29));
								int tmp31 = (int(rgba) >> int((int)8));
								int tmp32 = tmp31;
								int tmp33 = (int(tmp32) & int((int)255));
								int tmp34 = tmp33;
								int tmp35 = (int(tmp34) & int((int)255));
								int tmp36 = (int(tmp30) | int(tmp35));
								argb = tmp36;
							}
							tmp11 = argb;
						}
					}
					int _mask = tmp11;
					int tmp12 = sourceImage->offsetX;
					int tmp13 = sourceImage->offsetY;
					sourceRect->offset(tmp12,tmp13);
					int tmp14 = this->offsetX;
					int tmp15 = this->offsetY;
					destPoint->offset(tmp14,tmp15);
					::lime::graphics::ImageBuffer tmp16 = this->buffer;
					Dynamic tmp17 = tmp16->__srcBitmapData->__Field(HX_HCSTRING("threshold","\xab","\xc3","\xa3","\x34"), hx::paccDynamic )(sourceImage->buffer->get_src(),sourceRect->__toFlashRectangle(),destPoint->__toFlashPoint(),operation,threshold,_color,_mask,copySource);
					return tmp17;
				}
				;break;
				default: {
				}
			}
		}
		return (int)0;
	}
}


HX_DEFINE_DYNAMIC_FUNC9(Image_obj,threshold,return )

::lime::math::Rectangle Image_obj::__clipRect( ::lime::math::Rectangle r){
	bool tmp = (r == null());
	if ((tmp)){
		return null();
	}
	bool tmp1 = (r->x < (int)0);
	if ((tmp1)){
		Float tmp2 = r->x;
		Float tmp3 = -(tmp2);
		hx::SubEq(r->width,tmp3);
		r->x = (int)0;
		Float tmp4 = (r->x + r->width);
		bool tmp5 = (tmp4 <= (int)0);
		if ((tmp5)){
			return null();
		}
	}
	bool tmp2 = (r->y < (int)0);
	if ((tmp2)){
		Float tmp3 = r->y;
		Float tmp4 = -(tmp3);
		hx::SubEq(r->height,tmp4);
		r->y = (int)0;
		Float tmp5 = (r->y + r->height);
		bool tmp6 = (tmp5 <= (int)0);
		if ((tmp6)){
			return null();
		}
	}
	Float tmp3 = (r->x + r->width);
	int tmp4 = this->width;
	bool tmp5 = (tmp3 >= tmp4);
	if ((tmp5)){
		Float tmp6 = (r->x + r->width);
		int tmp7 = this->width;
		Float tmp8 = (tmp6 - tmp7);
		hx::SubEq(r->width,tmp8);
		bool tmp9 = (r->width <= (int)0);
		if ((tmp9)){
			return null();
		}
	}
	Float tmp6 = (r->y + r->height);
	int tmp7 = this->height;
	bool tmp8 = (tmp6 >= tmp7);
	if ((tmp8)){
		Float tmp9 = (r->y + r->height);
		int tmp10 = this->height;
		Float tmp11 = (tmp9 - tmp10);
		hx::SubEq(r->height,tmp11);
		bool tmp12 = (r->height <= (int)0);
		if ((tmp12)){
			return null();
		}
	}
	::lime::math::Rectangle tmp9 = r;
	return tmp9;
}


HX_DEFINE_DYNAMIC_FUNC1(Image_obj,__clipRect,return )

Void Image_obj::__fromBase64( ::String base64,::String type,Dynamic onload){
{
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC3(Image_obj,__fromBase64,(void))

Void Image_obj::__fromBytes( ::haxe::io::Bytes bytes,Dynamic onload){
{
		::lime::graphics::ImageBuffer imageBuffer = null();
		Dynamic tmp;
		{
			::lime::utils::ArrayBufferView tmp1;
			{
				::haxe::io::Bytes tmp2 = ::haxe::io::Bytes_obj::alloc((int)0);
				::haxe::io::Bytes buffer = tmp2;
				::lime::utils::ArrayBufferView this1;
				bool tmp3 = (buffer != null());
				if ((tmp3)){
					::lime::utils::ArrayBufferView tmp4;
					{
						::lime::utils::ArrayBufferView tmp5 = ::lime::utils::ArrayBufferView_obj::__new((int)0,(int)4);
						::lime::utils::ArrayBufferView _this = tmp5;
						int in_byteOffset = (int)0;
						bool tmp6 = (in_byteOffset < (int)0);
						if ((tmp6)){
							HX_STACK_DO_THROW(::lime::utils::TAError_obj::RangeError);
						}
						int tmp7 = hx::Mod(in_byteOffset,_this->bytesPerElement);
						bool tmp8 = (tmp7 != (int)0);
						if ((tmp8)){
							HX_STACK_DO_THROW(::lime::utils::TAError_obj::RangeError);
						}
						int bufferByteLength = buffer->length;
						int elementSize = _this->bytesPerElement;
						int newByteLength = bufferByteLength;
						{
							int tmp9 = (bufferByteLength - in_byteOffset);
							newByteLength = tmp9;
							int tmp10 = hx::Mod(bufferByteLength,_this->bytesPerElement);
							bool tmp11 = (tmp10 != (int)0);
							if ((tmp11)){
								HX_STACK_DO_THROW(::lime::utils::TAError_obj::RangeError);
							}
							bool tmp12 = (newByteLength < (int)0);
							if ((tmp12)){
								HX_STACK_DO_THROW(::lime::utils::TAError_obj::RangeError);
							}
						}
						_this->buffer = buffer;
						_this->byteOffset = in_byteOffset;
						_this->byteLength = newByteLength;
						Float tmp9 = (Float(newByteLength) / Float(_this->bytesPerElement));
						int tmp10 = ::Std_obj::_int(tmp9);
						_this->length = tmp10;
						tmp4 = _this;
					}
					this1 = tmp4;
				}
				else{
					HX_STACK_DO_THROW(HX_HCSTRING("Invalid constructor arguments for UInt8Array","\x6b","\x44","\xd5","\x85"));
				}
				tmp1 = this1;
			}
			::lime::graphics::ImageBuffer tmp2 = ::lime::graphics::ImageBuffer_obj::__new(tmp1,null(),null(),null(),null());
			Dynamic buffer = tmp2;
			tmp = ::lime::_backend::native::NativeCFFI_obj::cffi_lime_image_load.call(hx::DynamicPtr(bytes),hx::DynamicPtr(buffer));
		}
		imageBuffer = tmp;
		bool tmp1 = (imageBuffer != null());
		if ((tmp1)){
			::lime::graphics::ImageBuffer tmp2 = imageBuffer;
			this->__fromImageBuffer(tmp2);
			bool tmp3 = (onload != null());
			if ((tmp3)){
				onload(hx::ObjectPtr<OBJ_>(this)).Cast< Void >();
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(Image_obj,__fromBytes,(void))

Void Image_obj::__fromFile( ::String path,Dynamic onload,Dynamic onerror){
{
		::lime::graphics::ImageBuffer buffer = null();
		bool tmp = ::lime::_system::CFFI_obj::enabled;
		if ((tmp)){
			Dynamic tmp1;
			{
				::lime::utils::ArrayBufferView tmp2;
				{
					::haxe::io::Bytes tmp3 = ::haxe::io::Bytes_obj::alloc((int)0);
					::haxe::io::Bytes buffer1 = tmp3;
					::lime::utils::ArrayBufferView this1;
					bool tmp4 = (buffer1 != null());
					if ((tmp4)){
						::lime::utils::ArrayBufferView tmp5;
						{
							::lime::utils::ArrayBufferView tmp6 = ::lime::utils::ArrayBufferView_obj::__new((int)0,(int)4);
							::lime::utils::ArrayBufferView _this = tmp6;
							int in_byteOffset = (int)0;
							bool tmp7 = (in_byteOffset < (int)0);
							if ((tmp7)){
								HX_STACK_DO_THROW(::lime::utils::TAError_obj::RangeError);
							}
							int tmp8 = hx::Mod(in_byteOffset,_this->bytesPerElement);
							bool tmp9 = (tmp8 != (int)0);
							if ((tmp9)){
								HX_STACK_DO_THROW(::lime::utils::TAError_obj::RangeError);
							}
							int bufferByteLength = buffer1->length;
							int elementSize = _this->bytesPerElement;
							int newByteLength = bufferByteLength;
							{
								int tmp10 = (bufferByteLength - in_byteOffset);
								newByteLength = tmp10;
								int tmp11 = hx::Mod(bufferByteLength,_this->bytesPerElement);
								bool tmp12 = (tmp11 != (int)0);
								if ((tmp12)){
									HX_STACK_DO_THROW(::lime::utils::TAError_obj::RangeError);
								}
								bool tmp13 = (newByteLength < (int)0);
								if ((tmp13)){
									HX_STACK_DO_THROW(::lime::utils::TAError_obj::RangeError);
								}
							}
							_this->buffer = buffer1;
							_this->byteOffset = in_byteOffset;
							_this->byteLength = newByteLength;
							Float tmp10 = (Float(newByteLength) / Float(_this->bytesPerElement));
							int tmp11 = ::Std_obj::_int(tmp10);
							_this->length = tmp11;
							tmp5 = _this;
						}
						this1 = tmp5;
					}
					else{
						HX_STACK_DO_THROW(HX_HCSTRING("Invalid constructor arguments for UInt8Array","\x6b","\x44","\xd5","\x85"));
					}
					tmp2 = this1;
				}
				::lime::graphics::ImageBuffer tmp3 = ::lime::graphics::ImageBuffer_obj::__new(tmp2,null(),null(),null(),null());
				Dynamic buffer1 = tmp3;
				tmp1 = ::lime::_backend::native::NativeCFFI_obj::cffi_lime_image_load.call(hx::DynamicPtr(path),hx::DynamicPtr(buffer1));
			}
			buffer = tmp1;
		}
		bool tmp1 = (buffer != null());
		if ((tmp1)){
			::lime::graphics::ImageBuffer tmp2 = buffer;
			this->__fromImageBuffer(tmp2);
			bool tmp3 = (onload != null());
			if ((tmp3)){
				onload(hx::ObjectPtr<OBJ_>(this)).Cast< Void >();
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC3(Image_obj,__fromFile,(void))

Void Image_obj::__fromImageBuffer( ::lime::graphics::ImageBuffer buffer){
{
		this->buffer = buffer;
		bool tmp = (buffer != null());
		if ((tmp)){
			int tmp1 = this->width;
			bool tmp2 = (tmp1 == (int)-1);
			if ((tmp2)){
				this->width = buffer->width;
			}
			int tmp3 = this->height;
			bool tmp4 = (tmp3 == (int)-1);
			if ((tmp4)){
				this->height = buffer->height;
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Image_obj,__fromImageBuffer,(void))

::lime::utils::ArrayBufferView Image_obj::get_data( ){
	::lime::graphics::ImageBuffer tmp = this->buffer;
	::lime::utils::ArrayBufferView tmp1 = tmp->data;
	bool tmp2 = (tmp1 == null());
	bool tmp3 = tmp2;
	bool tmp4;
	if ((tmp3)){
		::lime::graphics::ImageBuffer tmp5 = this->buffer;
		::lime::graphics::ImageBuffer tmp6 = tmp5;
		::lime::graphics::ImageBuffer tmp7 = tmp6;
		int tmp8 = tmp7->width;
		tmp4 = (tmp8 > (int)0);
	}
	else{
		tmp4 = false;
	}
	bool tmp5;
	if ((tmp4)){
		::lime::graphics::ImageBuffer tmp6 = this->buffer;
		::lime::graphics::ImageBuffer tmp7 = tmp6;
		int tmp8 = tmp7->height;
		tmp5 = (tmp8 > (int)0);
	}
	else{
		tmp5 = false;
	}
	if ((tmp5)){
	}
	::lime::graphics::ImageBuffer tmp6 = this->buffer;
	::lime::utils::ArrayBufferView tmp7 = tmp6->data;
	return tmp7;
}


HX_DEFINE_DYNAMIC_FUNC0(Image_obj,get_data,return )

::lime::utils::ArrayBufferView Image_obj::set_data( ::lime::utils::ArrayBufferView value){
	::lime::graphics::ImageBuffer tmp = this->buffer;
	::lime::utils::ArrayBufferView tmp1 = tmp->data = value;
	return tmp1;
}


HX_DEFINE_DYNAMIC_FUNC1(Image_obj,set_data,return )

int Image_obj::get_format( ){
	::lime::graphics::ImageBuffer tmp = this->buffer;
	int tmp1 = tmp->format;
	return tmp1;
}


HX_DEFINE_DYNAMIC_FUNC0(Image_obj,get_format,return )

int Image_obj::set_format( int value){
	::lime::graphics::ImageBuffer tmp = this->buffer;
	int tmp1 = tmp->format;
	int tmp2 = value;
	bool tmp3 = (tmp1 != tmp2);
	if ((tmp3)){
		::lime::graphics::ImageType tmp4 = this->type;
		::lime::graphics::ImageType _g = tmp4;
		switch( (int)(_g->__Index())){
			case (int)1: {
				int tmp5 = value;
				::lime::graphics::utils::ImageDataUtil_obj::setFormat(hx::ObjectPtr<OBJ_>(this),tmp5);
			}
			;break;
			default: {
			}
		}
	}
	::lime::graphics::ImageBuffer tmp4 = this->buffer;
	int tmp5 = tmp4->format = value;
	return tmp5;
}


HX_DEFINE_DYNAMIC_FUNC1(Image_obj,set_format,return )

bool Image_obj::get_powerOfTwo( ){
	::lime::graphics::ImageBuffer tmp = this->buffer;
	int tmp1 = tmp->width;
	bool tmp2 = (tmp1 != (int)0);
	bool tmp3 = tmp2;
	bool tmp4;
	if ((tmp3)){
		::lime::graphics::ImageBuffer tmp5 = this->buffer;
		::lime::graphics::ImageBuffer tmp6 = tmp5;
		::lime::graphics::ImageBuffer tmp7 = tmp6;
		int tmp8 = tmp7->width;
		::lime::graphics::ImageBuffer tmp9 = this->buffer;
		::lime::graphics::ImageBuffer tmp10 = tmp9;
		::lime::graphics::ImageBuffer tmp11 = tmp10;
		int tmp12 = tmp11->width;
		int tmp13 = tmp12;
		int tmp14 = tmp13;
		int tmp15 = ~(int)(tmp14);
		int tmp16 = tmp15;
		int tmp17 = tmp16;
		int tmp18 = (tmp17 + (int)1);
		int tmp19 = tmp18;
		int tmp20 = tmp19;
		int tmp21 = (int(tmp8) & int(tmp20));
		int tmp22 = tmp21;
		int tmp23 = tmp22;
		::lime::graphics::ImageBuffer tmp24 = this->buffer;
		::lime::graphics::ImageBuffer tmp25 = tmp24;
		::lime::graphics::ImageBuffer tmp26 = tmp25;
		int tmp27 = tmp26->width;
		tmp4 = (tmp23 == tmp27);
	}
	else{
		tmp4 = false;
	}
	bool tmp5;
	if ((tmp4)){
		::lime::graphics::ImageBuffer tmp6 = this->buffer;
		::lime::graphics::ImageBuffer tmp7 = tmp6;
		int tmp8 = tmp7->height;
		bool tmp9 = (tmp8 != (int)0);
		bool tmp10 = tmp9;
		bool tmp11 = tmp10;
		if ((tmp11)){
			::lime::graphics::ImageBuffer tmp12 = this->buffer;
			::lime::graphics::ImageBuffer tmp13 = tmp12;
			::lime::graphics::ImageBuffer tmp14 = tmp13;
			int tmp15 = tmp14->height;
			::lime::graphics::ImageBuffer tmp16 = this->buffer;
			::lime::graphics::ImageBuffer tmp17 = tmp16;
			::lime::graphics::ImageBuffer tmp18 = tmp17;
			int tmp19 = tmp18->height;
			int tmp20 = tmp19;
			int tmp21 = tmp20;
			int tmp22 = ~(int)(tmp21);
			int tmp23 = tmp22;
			int tmp24 = tmp23;
			int tmp25 = (tmp24 + (int)1);
			int tmp26 = tmp25;
			int tmp27 = tmp26;
			int tmp28 = (int(tmp15) & int(tmp27));
			int tmp29 = tmp28;
			int tmp30 = tmp29;
			::lime::graphics::ImageBuffer tmp31 = this->buffer;
			::lime::graphics::ImageBuffer tmp32 = tmp31;
			::lime::graphics::ImageBuffer tmp33 = tmp32;
			int tmp34 = tmp33->height;
			tmp5 = (tmp30 == tmp34);
		}
		else{
			tmp5 = false;
		}
	}
	else{
		tmp5 = false;
	}
	return tmp5;
}


HX_DEFINE_DYNAMIC_FUNC0(Image_obj,get_powerOfTwo,return )

bool Image_obj::set_powerOfTwo( bool value){
	bool tmp = value;
	bool tmp1 = this->get_powerOfTwo();
	bool tmp2 = (tmp != tmp1);
	if ((tmp2)){
		int newWidth = (int)1;
		int newHeight = (int)1;
		while((true)){
			int tmp3 = newWidth;
			::lime::graphics::ImageBuffer tmp4 = this->buffer;
			int tmp5 = tmp4->width;
			bool tmp6 = (tmp3 < tmp5);
			bool tmp7 = !(tmp6);
			if ((tmp7)){
				break;
			}
			hx::ShlEq(newWidth,(int)1);
		}
		while((true)){
			int tmp3 = newHeight;
			::lime::graphics::ImageBuffer tmp4 = this->buffer;
			int tmp5 = tmp4->height;
			bool tmp6 = (tmp3 < tmp5);
			bool tmp7 = !(tmp6);
			if ((tmp7)){
				break;
			}
			hx::ShlEq(newHeight,(int)1);
		}
		{
			::lime::graphics::ImageType tmp3 = this->type;
			::lime::graphics::ImageType _g = tmp3;
			switch( (int)(_g->__Index())){
				case (int)0: {
				}
				;break;
				case (int)1: {
					int tmp4 = newWidth;
					int tmp5 = newHeight;
					::lime::graphics::utils::ImageDataUtil_obj::resizeBuffer(hx::ObjectPtr<OBJ_>(this),tmp4,tmp5);
				}
				;break;
				case (int)2: {
				}
				;break;
				default: {
				}
			}
		}
	}
	bool tmp3 = value;
	return tmp3;
}


HX_DEFINE_DYNAMIC_FUNC1(Image_obj,set_powerOfTwo,return )

bool Image_obj::get_premultiplied( ){
	::lime::graphics::ImageBuffer tmp = this->buffer;
	bool tmp1 = tmp->premultiplied;
	return tmp1;
}


HX_DEFINE_DYNAMIC_FUNC0(Image_obj,get_premultiplied,return )

bool Image_obj::set_premultiplied( bool value){
	bool tmp = value;
	bool tmp1;
	if ((tmp)){
		::lime::graphics::ImageBuffer tmp2 = this->buffer;
		::lime::graphics::ImageBuffer tmp3 = tmp2;
		bool tmp4 = tmp3->premultiplied;
		bool tmp5 = tmp4;
		tmp1 = !(tmp5);
	}
	else{
		tmp1 = false;
	}
	if ((tmp1)){
		::lime::graphics::ImageType tmp2 = this->type;
		::lime::graphics::ImageType _g = tmp2;
		switch( (int)(_g->__Index())){
			case (int)0: case (int)1: {
				::lime::graphics::utils::ImageDataUtil_obj::multiplyAlpha(hx::ObjectPtr<OBJ_>(this));
			}
			;break;
			default: {
			}
		}
	}
	else{
		bool tmp2 = value;
		bool tmp3 = tmp2;
		bool tmp4 = !(tmp3);
		bool tmp5;
		if ((tmp4)){
			::lime::graphics::ImageBuffer tmp6 = this->buffer;
			::lime::graphics::ImageBuffer tmp7 = tmp6;
			tmp5 = tmp7->premultiplied;
		}
		else{
			tmp5 = false;
		}
		if ((tmp5)){
			::lime::graphics::ImageType tmp6 = this->type;
			::lime::graphics::ImageType _g = tmp6;
			switch( (int)(_g->__Index())){
				case (int)1: {
					::lime::graphics::utils::ImageDataUtil_obj::unmultiplyAlpha(hx::ObjectPtr<OBJ_>(this));
				}
				;break;
				default: {
				}
			}
		}
	}
	bool tmp2 = value;
	return tmp2;
}


HX_DEFINE_DYNAMIC_FUNC1(Image_obj,set_premultiplied,return )

::lime::math::Rectangle Image_obj::get_rect( ){
	int tmp = this->width;
	int tmp1 = this->height;
	::lime::math::Rectangle tmp2 = ::lime::math::Rectangle_obj::__new((int)0,(int)0,tmp,tmp1);
	return tmp2;
}


HX_DEFINE_DYNAMIC_FUNC0(Image_obj,get_rect,return )

Dynamic Image_obj::get_src( ){
	::lime::graphics::ImageBuffer tmp = this->buffer;
	Dynamic tmp1 = tmp->get_src();
	return tmp1;
}


HX_DEFINE_DYNAMIC_FUNC0(Image_obj,get_src,return )

Dynamic Image_obj::set_src( Dynamic value){
	::lime::graphics::ImageBuffer tmp = this->buffer;
	Dynamic tmp1 = value;
	Dynamic tmp2 = tmp->set_src(tmp1);
	return tmp2;
}


HX_DEFINE_DYNAMIC_FUNC1(Image_obj,set_src,return )

bool Image_obj::get_transparent( ){
	::lime::graphics::ImageBuffer tmp = this->buffer;
	bool tmp1 = (tmp == null());
	if ((tmp1)){
		return false;
	}
	::lime::graphics::ImageBuffer tmp2 = this->buffer;
	bool tmp3 = tmp2->transparent;
	return tmp3;
}


HX_DEFINE_DYNAMIC_FUNC0(Image_obj,get_transparent,return )

bool Image_obj::set_transparent( bool value){
	::lime::graphics::ImageBuffer tmp = this->buffer;
	bool tmp1 = (tmp == null());
	if ((tmp1)){
		return false;
	}
	::lime::graphics::ImageBuffer tmp2 = this->buffer;
	bool tmp3 = tmp2->transparent = value;
	return tmp3;
}


HX_DEFINE_DYNAMIC_FUNC1(Image_obj,set_transparent,return )

::String Image_obj::__base64Chars;

::haxe::crypto::BaseCode Image_obj::__base64Encoder;

::lime::graphics::Image Image_obj::fromBase64( ::String base64,::String type){
	bool tmp = (base64 == null());
	if ((tmp)){
		return null();
	}
	::lime::graphics::Image tmp1 = ::lime::graphics::Image_obj::__new(null(),null(),null(),null(),null(),null(),null());
	::lime::graphics::Image image = tmp1;
	::String tmp2 = base64;
	::String tmp3 = type;
	image->__fromBase64(tmp2,tmp3,null());
	::lime::graphics::Image tmp4 = image;
	return tmp4;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(Image_obj,fromBase64,return )

::lime::graphics::Image Image_obj::fromBitmapData( Dynamic bitmapData){
	bool tmp = (bitmapData == null());
	if ((tmp)){
		return null();
	}
	return bitmapData->__Field(HX_HCSTRING("image","\x5b","\x1f","\x69","\xbd"), hx::paccDynamic );
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Image_obj,fromBitmapData,return )

::lime::graphics::Image Image_obj::fromBytes( ::haxe::io::Bytes bytes){
	bool tmp = (bytes == null());
	if ((tmp)){
		return null();
	}
	::lime::graphics::Image tmp1 = ::lime::graphics::Image_obj::__new(null(),null(),null(),null(),null(),null(),null());
	::lime::graphics::Image image = tmp1;
	::haxe::io::Bytes tmp2 = bytes;
	image->__fromBytes(tmp2,null());
	::lime::graphics::Image tmp3 = image;
	return tmp3;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Image_obj,fromBytes,return )

::lime::graphics::Image Image_obj::fromCanvas( Dynamic canvas){
	bool tmp = (canvas == null());
	if ((tmp)){
		return null();
	}
	::lime::graphics::ImageBuffer tmp1 = ::lime::graphics::ImageBuffer_obj::__new(null(),canvas->__Field(HX_HCSTRING("width","\x06","\xb6","\x62","\xca"), hx::paccDynamic ),canvas->__Field(HX_HCSTRING("height","\xe7","\x07","\x4c","\x02"), hx::paccDynamic ),null(),null());
	::lime::graphics::ImageBuffer buffer = tmp1;
	Dynamic tmp2 = canvas;
	buffer->set_src(tmp2);
	::lime::graphics::Image tmp3 = ::lime::graphics::Image_obj::__new(buffer,null(),null(),null(),null(),null(),null());
	::lime::graphics::Image image = tmp3;
	image->type = ::lime::graphics::ImageType_obj::CANVAS;
	::lime::graphics::Image tmp4 = image;
	return tmp4;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Image_obj,fromCanvas,return )

::lime::graphics::Image Image_obj::fromFile( ::String path){
	bool tmp = (path == null());
	if ((tmp)){
		return null();
	}
	::lime::graphics::Image tmp1 = ::lime::graphics::Image_obj::__new(null(),null(),null(),null(),null(),null(),null());
	::lime::graphics::Image image = tmp1;
	::String tmp2 = path;
	image->__fromFile(tmp2,null(),null());
	::lime::graphics::Image tmp3 = image;
	return tmp3;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Image_obj,fromFile,return )

::lime::graphics::Image Image_obj::fromImageElement( Dynamic image){
	bool tmp = (image == null());
	if ((tmp)){
		return null();
	}
	::lime::graphics::ImageBuffer tmp1 = ::lime::graphics::ImageBuffer_obj::__new(null(),image->__Field(HX_HCSTRING("width","\x06","\xb6","\x62","\xca"), hx::paccDynamic ),image->__Field(HX_HCSTRING("height","\xe7","\x07","\x4c","\x02"), hx::paccDynamic ),null(),null());
	::lime::graphics::ImageBuffer buffer = tmp1;
	Dynamic tmp2 = image;
	buffer->set_src(tmp2);
	::lime::graphics::Image tmp3 = ::lime::graphics::Image_obj::__new(buffer,null(),null(),null(),null(),null(),null());
	::lime::graphics::Image _image = tmp3;
	_image->type = ::lime::graphics::ImageType_obj::CANVAS;
	::lime::graphics::Image tmp4 = _image;
	return tmp4;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Image_obj,fromImageElement,return )

::lime::app::Future Image_obj::loadFromBase64( ::String base64,::String type){
	bool tmp = (base64 == null());
	bool tmp1 = !(tmp);
	bool tmp2;
	if ((tmp1)){
		tmp2 = (type == null());
	}
	else{
		tmp2 = true;
	}
	if ((tmp2)){
		::lime::app::Future tmp3 = ::lime::app::Future_obj::withValue(null());
		return tmp3;
	}
	::lime::app::Future tmp3 = ::lime::app::Future_obj::withError(HX_HCSTRING("","\x00","\x00","\x00","\x00"));
	::lime::app::Future tmp4 = tmp3;
	return tmp4;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(Image_obj,loadFromBase64,return )

::lime::app::Future Image_obj::loadFromBytes( ::haxe::io::Bytes bytes){
	bool tmp = (bytes == null());
	if ((tmp)){
		::lime::app::Future tmp1 = ::lime::app::Future_obj::withValue(null());
		return tmp1;
	}

	HX_BEGIN_LOCAL_FUNC_S1(hx::LocalFunc,_Function_1_1,::haxe::io::Bytes,bytes)
	int __ArgCount() const { return 0; }
	::lime::graphics::Image run(){
		{
			::haxe::io::Bytes tmp1 = bytes;
			::lime::graphics::Image tmp2 = ::lime::graphics::Image_obj::fromBytes(tmp1);
			return tmp2;
		}
		return null();
	}
	HX_END_LOCAL_FUNC0(return)

	::lime::app::Future tmp1 = ::lime::app::Future_obj::__new( Dynamic(new _Function_1_1(bytes)),true);
	return tmp1;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Image_obj,loadFromBytes,return )

::lime::app::Future Image_obj::loadFromFile( ::String path){
	bool tmp = (path == null());
	if ((tmp)){
		::lime::app::Future tmp1 = ::lime::app::Future_obj::withValue(null());
		return tmp1;
	}
	::lime::net::_HTTPRequest_lime_graphics_Image tmp1 = ::lime::net::_HTTPRequest_lime_graphics_Image_obj::__new(null());
	::lime::net::_HTTPRequest_lime_graphics_Image request = tmp1;
	::String tmp2 = path;
	::lime::app::Future tmp3 = request->load(tmp2);

	HX_BEGIN_LOCAL_FUNC_S0(hx::LocalFunc,_Function_1_1)
	int __ArgCount() const { return 1; }
	::lime::app::Future run(::lime::graphics::Image image){
		{
			bool tmp4 = (image != null());
			if ((tmp4)){
				::lime::graphics::Image tmp5 = image;
				::lime::app::Future tmp6 = ::lime::app::Future_obj::withValue(tmp5);
				return tmp6;
			}
			else{
				::lime::app::Future tmp5 = ::lime::app::Future_obj::withError(HX_HCSTRING("","\x00","\x00","\x00","\x00"));
				::lime::app::Future tmp6 = tmp5;
				return tmp6;
			}
			return null();
		}
		return null();
	}
	HX_END_LOCAL_FUNC1(return)

	::lime::app::Future tmp4 = tmp3->then( Dynamic(new _Function_1_1()));
	return tmp4;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Image_obj,loadFromFile,return )

::String Image_obj::__base64Encode( ::haxe::io::Bytes bytes){
	return HX_HCSTRING("","\x00","\x00","\x00","\x00");
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Image_obj,__base64Encode,return )

bool Image_obj::__isGIF( ::haxe::io::Bytes bytes){
	bool tmp = (bytes == null());
	bool tmp1 = !(tmp);
	bool tmp2;
	if ((tmp1)){
		tmp2 = (bytes->length < (int)6);
	}
	else{
		tmp2 = true;
	}
	if ((tmp2)){
		return false;
	}
	::String tmp3 = bytes->getString((int)0,(int)6);
	::String header = tmp3;
	bool tmp4 = (header == HX_HCSTRING("GIF87a","\x1e","\x95","\x06","\x9a"));
	bool tmp5 = !(tmp4);
	bool tmp6;
	if ((tmp5)){
		tmp6 = (header == HX_HCSTRING("GIF89a","\xdc","\x96","\x06","\x9a"));
	}
	else{
		tmp6 = true;
	}
	return tmp6;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Image_obj,__isGIF,return )

bool Image_obj::__isJPG( ::haxe::io::Bytes bytes){
	bool tmp = (bytes == null());
	bool tmp1 = !(tmp);
	bool tmp2;
	if ((tmp1)){
		tmp2 = (bytes->length < (int)4);
	}
	else{
		tmp2 = true;
	}
	if ((tmp2)){
		return false;
	}
	int tmp3 = bytes->b->__get((int)0);
	bool tmp4 = (tmp3 == (int)255);
	bool tmp5 = tmp4;
	bool tmp6;
	if ((tmp5)){
		int tmp7 = bytes->b->__get((int)1);
		int tmp8 = tmp7;
		int tmp9 = tmp8;
		tmp6 = (tmp9 == (int)216);
	}
	else{
		tmp6 = false;
	}
	bool tmp7 = tmp6;
	bool tmp8;
	if ((tmp7)){
		int tmp9 = (bytes->length - (int)2);
		int tmp10 = tmp9;
		int tmp11 = tmp10;
		int tmp12 = bytes->b->__get(tmp11);
		int tmp13 = tmp12;
		int tmp14 = tmp13;
		tmp8 = (tmp14 == (int)255);
	}
	else{
		tmp8 = false;
	}
	bool tmp9;
	if ((tmp8)){
		int tmp10 = (bytes->length - (int)1);
		int tmp11 = tmp10;
		int tmp12 = bytes->b->__get(tmp11);
		int tmp13 = tmp12;
		tmp9 = (tmp13 == (int)217);
	}
	else{
		tmp9 = false;
	}
	return tmp9;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Image_obj,__isJPG,return )

bool Image_obj::__isPNG( ::haxe::io::Bytes bytes){
	bool tmp = (bytes == null());
	bool tmp1 = !(tmp);
	bool tmp2;
	if ((tmp1)){
		tmp2 = (bytes->length < (int)8);
	}
	else{
		tmp2 = true;
	}
	if ((tmp2)){
		return false;
	}
	int tmp3 = bytes->b->__get((int)0);
	bool tmp4 = (tmp3 == (int)137);
	bool tmp5 = tmp4;
	bool tmp6;
	if ((tmp5)){
		int tmp7 = bytes->b->__get((int)1);
		int tmp8 = tmp7;
		int tmp9 = tmp8;
		tmp6 = (tmp9 == (int)80);
	}
	else{
		tmp6 = false;
	}
	bool tmp7 = tmp6;
	bool tmp8;
	if ((tmp7)){
		int tmp9 = bytes->b->__get((int)2);
		int tmp10 = tmp9;
		int tmp11 = tmp10;
		tmp8 = (tmp11 == (int)78);
	}
	else{
		tmp8 = false;
	}
	bool tmp9 = tmp8;
	bool tmp10;
	if ((tmp9)){
		int tmp11 = bytes->b->__get((int)3);
		int tmp12 = tmp11;
		int tmp13 = tmp12;
		tmp10 = (tmp13 == (int)71);
	}
	else{
		tmp10 = false;
	}
	bool tmp11 = tmp10;
	bool tmp12;
	if ((tmp11)){
		int tmp13 = bytes->b->__get((int)4);
		int tmp14 = tmp13;
		int tmp15 = tmp14;
		tmp12 = (tmp15 == (int)13);
	}
	else{
		tmp12 = false;
	}
	bool tmp13 = tmp12;
	bool tmp14;
	if ((tmp13)){
		int tmp15 = bytes->b->__get((int)5);
		int tmp16 = tmp15;
		int tmp17 = tmp16;
		tmp14 = (tmp17 == (int)10);
	}
	else{
		tmp14 = false;
	}
	bool tmp15 = tmp14;
	bool tmp16;
	if ((tmp15)){
		int tmp17 = bytes->b->__get((int)6);
		int tmp18 = tmp17;
		int tmp19 = tmp18;
		tmp16 = (tmp19 == (int)26);
	}
	else{
		tmp16 = false;
	}
	bool tmp17;
	if ((tmp16)){
		int tmp18 = bytes->b->__get((int)7);
		int tmp19 = tmp18;
		tmp17 = (tmp19 == (int)10);
	}
	else{
		tmp17 = false;
	}
	return tmp17;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Image_obj,__isPNG,return )

bool Image_obj::__isWebP( ::haxe::io::Bytes bytes){
	bool tmp = (bytes == null());
	bool tmp1 = !(tmp);
	bool tmp2;
	if ((tmp1)){
		tmp2 = (bytes->length < (int)16);
	}
	else{
		tmp2 = true;
	}
	if ((tmp2)){
		return false;
	}
	::String tmp3 = bytes->getString((int)0,(int)4);
	bool tmp4 = (tmp3 == HX_HCSTRING("RIFF","\xb7","\x20","\x6b","\x36"));
	bool tmp5;
	if ((tmp4)){
		::String tmp6 = bytes->getString((int)8,(int)4);
		::String tmp7 = tmp6;
		tmp5 = (tmp7 == HX_HCSTRING("WEBP","\x5c","\x25","\xb6","\x39"));
	}
	else{
		tmp5 = false;
	}
	return tmp5;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Image_obj,__isWebP,return )


Image_obj::Image_obj()
{
}

void Image_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(Image);
	HX_MARK_MEMBER_NAME(buffer,"buffer");
	HX_MARK_MEMBER_NAME(dirty,"dirty");
	HX_MARK_MEMBER_NAME(height,"height");
	HX_MARK_MEMBER_NAME(offsetX,"offsetX");
	HX_MARK_MEMBER_NAME(offsetY,"offsetY");
	HX_MARK_MEMBER_NAME(rect,"rect");
	HX_MARK_MEMBER_NAME(type,"type");
	HX_MARK_MEMBER_NAME(version,"version");
	HX_MARK_MEMBER_NAME(width,"width");
	HX_MARK_MEMBER_NAME(x,"x");
	HX_MARK_MEMBER_NAME(y,"y");
	HX_MARK_END_CLASS();
}

void Image_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(buffer,"buffer");
	HX_VISIT_MEMBER_NAME(dirty,"dirty");
	HX_VISIT_MEMBER_NAME(height,"height");
	HX_VISIT_MEMBER_NAME(offsetX,"offsetX");
	HX_VISIT_MEMBER_NAME(offsetY,"offsetY");
	HX_VISIT_MEMBER_NAME(rect,"rect");
	HX_VISIT_MEMBER_NAME(type,"type");
	HX_VISIT_MEMBER_NAME(version,"version");
	HX_VISIT_MEMBER_NAME(width,"width");
	HX_VISIT_MEMBER_NAME(x,"x");
	HX_VISIT_MEMBER_NAME(y,"y");
}

Dynamic Image_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 1:
		if (HX_FIELD_EQ(inName,"x") ) { return x; }
		if (HX_FIELD_EQ(inName,"y") ) { return y; }
		break;
	case 3:
		if (HX_FIELD_EQ(inName,"src") ) { if (inCallProp == hx::paccAlways) return get_src(); }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"data") ) { if (inCallProp == hx::paccAlways) return get_data(); }
		if (HX_FIELD_EQ(inName,"rect") ) { return inCallProp == hx::paccAlways ? get_rect() : rect; }
		if (HX_FIELD_EQ(inName,"type") ) { return type; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"dirty") ) { return dirty; }
		if (HX_FIELD_EQ(inName,"width") ) { return width; }
		if (HX_FIELD_EQ(inName,"clone") ) { return clone_dyn(); }
		if (HX_FIELD_EQ(inName,"merge") ) { return merge_dyn(); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"buffer") ) { return buffer; }
		if (HX_FIELD_EQ(inName,"format") ) { if (inCallProp == hx::paccAlways) return get_format(); }
		if (HX_FIELD_EQ(inName,"height") ) { return height; }
		if (HX_FIELD_EQ(inName,"encode") ) { return encode_dyn(); }
		if (HX_FIELD_EQ(inName,"resize") ) { return resize_dyn(); }
		if (HX_FIELD_EQ(inName,"scroll") ) { return scroll_dyn(); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"offsetX") ) { return offsetX; }
		if (HX_FIELD_EQ(inName,"offsetY") ) { return offsetY; }
		if (HX_FIELD_EQ(inName,"version") ) { return version; }
		if (HX_FIELD_EQ(inName,"get_src") ) { return get_src_dyn(); }
		if (HX_FIELD_EQ(inName,"set_src") ) { return set_src_dyn(); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"fillRect") ) { return fillRect_dyn(); }
		if (HX_FIELD_EQ(inName,"getPixel") ) { return getPixel_dyn(); }
		if (HX_FIELD_EQ(inName,"setPixel") ) { return setPixel_dyn(); }
		if (HX_FIELD_EQ(inName,"get_data") ) { return get_data_dyn(); }
		if (HX_FIELD_EQ(inName,"set_data") ) { return set_data_dyn(); }
		if (HX_FIELD_EQ(inName,"get_rect") ) { return get_rect_dyn(); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"floodFill") ) { return floodFill_dyn(); }
		if (HX_FIELD_EQ(inName,"getPixels") ) { return getPixels_dyn(); }
		if (HX_FIELD_EQ(inName,"setPixels") ) { return setPixels_dyn(); }
		if (HX_FIELD_EQ(inName,"threshold") ) { return threshold_dyn(); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"powerOfTwo") ) { if (inCallProp == hx::paccAlways) return get_powerOfTwo(); }
		if (HX_FIELD_EQ(inName,"copyPixels") ) { return copyPixels_dyn(); }
		if (HX_FIELD_EQ(inName,"getPixel32") ) { return getPixel32_dyn(); }
		if (HX_FIELD_EQ(inName,"setPixel32") ) { return setPixel32_dyn(); }
		if (HX_FIELD_EQ(inName,"__clipRect") ) { return __clipRect_dyn(); }
		if (HX_FIELD_EQ(inName,"__fromFile") ) { return __fromFile_dyn(); }
		if (HX_FIELD_EQ(inName,"get_format") ) { return get_format_dyn(); }
		if (HX_FIELD_EQ(inName,"set_format") ) { return set_format_dyn(); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"transparent") ) { if (inCallProp == hx::paccAlways) return get_transparent(); }
		if (HX_FIELD_EQ(inName,"copyChannel") ) { return copyChannel_dyn(); }
		if (HX_FIELD_EQ(inName,"__fromBytes") ) { return __fromBytes_dyn(); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"__fromBase64") ) { return __fromBase64_dyn(); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"premultiplied") ) { if (inCallProp == hx::paccAlways) return get_premultiplied(); }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"colorTransform") ) { return colorTransform_dyn(); }
		if (HX_FIELD_EQ(inName,"get_powerOfTwo") ) { return get_powerOfTwo_dyn(); }
		if (HX_FIELD_EQ(inName,"set_powerOfTwo") ) { return set_powerOfTwo_dyn(); }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"get_transparent") ) { return get_transparent_dyn(); }
		if (HX_FIELD_EQ(inName,"set_transparent") ) { return set_transparent_dyn(); }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"__fromImageBuffer") ) { return __fromImageBuffer_dyn(); }
		if (HX_FIELD_EQ(inName,"get_premultiplied") ) { return get_premultiplied_dyn(); }
		if (HX_FIELD_EQ(inName,"set_premultiplied") ) { return set_premultiplied_dyn(); }
		break;
	case 18:
		if (HX_FIELD_EQ(inName,"getColorBoundsRect") ) { return getColorBoundsRect_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

bool Image_obj::__GetStatic(const ::String &inName, Dynamic &outValue, hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 7:
		if (HX_FIELD_EQ(inName,"__isGIF") ) { outValue = __isGIF_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"__isJPG") ) { outValue = __isJPG_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"__isPNG") ) { outValue = __isPNG_dyn(); return true;  }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"fromFile") ) { outValue = fromFile_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"__isWebP") ) { outValue = __isWebP_dyn(); return true;  }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"fromBytes") ) { outValue = fromBytes_dyn(); return true;  }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"fromBase64") ) { outValue = fromBase64_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"fromCanvas") ) { outValue = fromCanvas_dyn(); return true;  }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"loadFromFile") ) { outValue = loadFromFile_dyn(); return true;  }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"__base64Chars") ) { outValue = __base64Chars; return true;  }
		if (HX_FIELD_EQ(inName,"loadFromBytes") ) { outValue = loadFromBytes_dyn(); return true;  }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"fromBitmapData") ) { outValue = fromBitmapData_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"loadFromBase64") ) { outValue = loadFromBase64_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"__base64Encode") ) { outValue = __base64Encode_dyn(); return true;  }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"__base64Encoder") ) { outValue = __base64Encoder; return true;  }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"fromImageElement") ) { outValue = fromImageElement_dyn(); return true;  }
	}
	return false;
}

Dynamic Image_obj::__SetField(const ::String &inName,const Dynamic &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 1:
		if (HX_FIELD_EQ(inName,"x") ) { x=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"y") ) { y=inValue.Cast< Float >(); return inValue; }
		break;
	case 3:
		if (HX_FIELD_EQ(inName,"src") ) { if (inCallProp == hx::paccAlways) return set_src(inValue); }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"data") ) { if (inCallProp == hx::paccAlways) return set_data(inValue); }
		if (HX_FIELD_EQ(inName,"rect") ) { rect=inValue.Cast< ::lime::math::Rectangle >(); return inValue; }
		if (HX_FIELD_EQ(inName,"type") ) { type=inValue.Cast< ::lime::graphics::ImageType >(); return inValue; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"dirty") ) { dirty=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"width") ) { width=inValue.Cast< int >(); return inValue; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"buffer") ) { buffer=inValue.Cast< ::lime::graphics::ImageBuffer >(); return inValue; }
		if (HX_FIELD_EQ(inName,"format") ) { if (inCallProp == hx::paccAlways) return set_format(inValue); }
		if (HX_FIELD_EQ(inName,"height") ) { height=inValue.Cast< int >(); return inValue; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"offsetX") ) { offsetX=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"offsetY") ) { offsetY=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"version") ) { version=inValue.Cast< int >(); return inValue; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"powerOfTwo") ) { if (inCallProp == hx::paccAlways) return set_powerOfTwo(inValue); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"transparent") ) { if (inCallProp == hx::paccAlways) return set_transparent(inValue); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"premultiplied") ) { if (inCallProp == hx::paccAlways) return set_premultiplied(inValue); }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

bool Image_obj::__SetStatic(const ::String &inName,Dynamic &ioValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 13:
		if (HX_FIELD_EQ(inName,"__base64Chars") ) { __base64Chars=ioValue.Cast< ::String >(); return true; }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"__base64Encoder") ) { __base64Encoder=ioValue.Cast< ::haxe::crypto::BaseCode >(); return true; }
	}
	return false;
}

void Image_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("buffer","\x00","\xbd","\x94","\xd0"));
	outFields->push(HX_HCSTRING("data","\x2a","\x56","\x63","\x42"));
	outFields->push(HX_HCSTRING("dirty","\x12","\x50","\xd0","\xd9"));
	outFields->push(HX_HCSTRING("format","\x37","\x8f","\x8e","\xfd"));
	outFields->push(HX_HCSTRING("height","\xe7","\x07","\x4c","\x02"));
	outFields->push(HX_HCSTRING("offsetX","\x65","\x09","\x65","\xd7"));
	outFields->push(HX_HCSTRING("offsetY","\x66","\x09","\x65","\xd7"));
	outFields->push(HX_HCSTRING("powerOfTwo","\x70","\xbe","\xae","\xea"));
	outFields->push(HX_HCSTRING("premultiplied","\x56","\xf1","\x4e","\xa4"));
	outFields->push(HX_HCSTRING("rect","\x24","\x4d","\xa7","\x4b"));
	outFields->push(HX_HCSTRING("src","\xe4","\xa6","\x57","\x00"));
	outFields->push(HX_HCSTRING("transparent","\x52","\x2b","\xba","\x22"));
	outFields->push(HX_HCSTRING("type","\xba","\xf2","\x08","\x4d"));
	outFields->push(HX_HCSTRING("version","\x18","\xe7","\xf1","\x7c"));
	outFields->push(HX_HCSTRING("width","\x06","\xb6","\x62","\xca"));
	outFields->push(HX_HCSTRING("x","\x78","\x00","\x00","\x00"));
	outFields->push(HX_HCSTRING("y","\x79","\x00","\x00","\x00"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsObject /*::lime::graphics::ImageBuffer*/ ,(int)offsetof(Image_obj,buffer),HX_HCSTRING("buffer","\x00","\xbd","\x94","\xd0")},
	{hx::fsBool,(int)offsetof(Image_obj,dirty),HX_HCSTRING("dirty","\x12","\x50","\xd0","\xd9")},
	{hx::fsInt,(int)offsetof(Image_obj,height),HX_HCSTRING("height","\xe7","\x07","\x4c","\x02")},
	{hx::fsInt,(int)offsetof(Image_obj,offsetX),HX_HCSTRING("offsetX","\x65","\x09","\x65","\xd7")},
	{hx::fsInt,(int)offsetof(Image_obj,offsetY),HX_HCSTRING("offsetY","\x66","\x09","\x65","\xd7")},
	{hx::fsObject /*::lime::math::Rectangle*/ ,(int)offsetof(Image_obj,rect),HX_HCSTRING("rect","\x24","\x4d","\xa7","\x4b")},
	{hx::fsObject /*::lime::graphics::ImageType*/ ,(int)offsetof(Image_obj,type),HX_HCSTRING("type","\xba","\xf2","\x08","\x4d")},
	{hx::fsInt,(int)offsetof(Image_obj,version),HX_HCSTRING("version","\x18","\xe7","\xf1","\x7c")},
	{hx::fsInt,(int)offsetof(Image_obj,width),HX_HCSTRING("width","\x06","\xb6","\x62","\xca")},
	{hx::fsFloat,(int)offsetof(Image_obj,x),HX_HCSTRING("x","\x78","\x00","\x00","\x00")},
	{hx::fsFloat,(int)offsetof(Image_obj,y),HX_HCSTRING("y","\x79","\x00","\x00","\x00")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo sStaticStorageInfo[] = {
	{hx::fsString,(void *) &Image_obj::__base64Chars,HX_HCSTRING("__base64Chars","\xae","\xc9","\x24","\x36")},
	{hx::fsObject /*::haxe::crypto::BaseCode*/ ,(void *) &Image_obj::__base64Encoder,HX_HCSTRING("__base64Encoder","\xad","\xa4","\x42","\x7e")},
	{ hx::fsUnknown, 0, null()}
};
#endif

static ::String sMemberFields[] = {
	HX_HCSTRING("buffer","\x00","\xbd","\x94","\xd0"),
	HX_HCSTRING("dirty","\x12","\x50","\xd0","\xd9"),
	HX_HCSTRING("height","\xe7","\x07","\x4c","\x02"),
	HX_HCSTRING("offsetX","\x65","\x09","\x65","\xd7"),
	HX_HCSTRING("offsetY","\x66","\x09","\x65","\xd7"),
	HX_HCSTRING("rect","\x24","\x4d","\xa7","\x4b"),
	HX_HCSTRING("type","\xba","\xf2","\x08","\x4d"),
	HX_HCSTRING("version","\x18","\xe7","\xf1","\x7c"),
	HX_HCSTRING("width","\x06","\xb6","\x62","\xca"),
	HX_HCSTRING("x","\x78","\x00","\x00","\x00"),
	HX_HCSTRING("y","\x79","\x00","\x00","\x00"),
	HX_HCSTRING("clone","\x5d","\x13","\x63","\x48"),
	HX_HCSTRING("colorTransform","\x89","\xd7","\x3f","\xad"),
	HX_HCSTRING("copyChannel","\x8e","\x7d","\xe6","\x22"),
	HX_HCSTRING("copyPixels","\xc2","\x54","\x6e","\x42"),
	HX_HCSTRING("encode","\x16","\xf2","\xe3","\xf9"),
	HX_HCSTRING("fillRect","\x47","\x45","\xb9","\x6c"),
	HX_HCSTRING("floodFill","\x61","\x83","\x8a","\x59"),
	HX_HCSTRING("getColorBoundsRect","\x86","\xad","\xe8","\x80"),
	HX_HCSTRING("getPixel","\x10","\xd6","\x7a","\x22"),
	HX_HCSTRING("getPixel32","\xaf","\xa6","\x68","\xd7"),
	HX_HCSTRING("getPixels","\x63","\x78","\x00","\x09"),
	HX_HCSTRING("merge","\xb8","\xa2","\xc6","\x05"),
	HX_HCSTRING("resize","\xf4","\x59","\x7b","\x08"),
	HX_HCSTRING("scroll","\x0d","\xd8","\x64","\x47"),
	HX_HCSTRING("setPixel","\x84","\x2f","\xd8","\xd0"),
	HX_HCSTRING("setPixel32","\x23","\x45","\xe6","\xda"),
	HX_HCSTRING("setPixels","\x6f","\x64","\x51","\xec"),
	HX_HCSTRING("threshold","\xab","\xc3","\xa3","\x34"),
	HX_HCSTRING("__clipRect","\x34","\x03","\xa3","\xfb"),
	HX_HCSTRING("__fromBase64","\xb9","\x7d","\xff","\xd0"),
	HX_HCSTRING("__fromBytes","\x81","\x3b","\x4d","\xa0"),
	HX_HCSTRING("__fromFile","\x26","\x10","\xc0","\x44"),
	HX_HCSTRING("__fromImageBuffer","\x51","\x6e","\xca","\xca"),
	HX_HCSTRING("get_data","\xb3","\x11","\x1e","\xc2"),
	HX_HCSTRING("set_data","\x27","\x6b","\x7b","\x70"),
	HX_HCSTRING("get_format","\x00","\xff","\x15","\xee"),
	HX_HCSTRING("set_format","\x74","\x9d","\x93","\xf1"),
	HX_HCSTRING("get_powerOfTwo","\xb9","\x46","\xa4","\x60"),
	HX_HCSTRING("set_powerOfTwo","\x2d","\x2f","\xc4","\x80"),
	HX_HCSTRING("get_premultiplied","\xad","\xfc","\xbe","\xaa"),
	HX_HCSTRING("set_premultiplied","\xb9","\xd4","\x2c","\xce"),
	HX_HCSTRING("get_rect","\xad","\x08","\x62","\xcb"),
	HX_HCSTRING("get_src","\x7b","\x6f","\xcc","\x26"),
	HX_HCSTRING("set_src","\x87","\x00","\xce","\x19"),
	HX_HCSTRING("get_transparent","\xe9","\xe2","\x9b","\xe3"),
	HX_HCSTRING("set_transparent","\xf5","\x5f","\x67","\xdf"),
	::String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(Image_obj::__mClass,"__mClass");
	HX_MARK_MEMBER_NAME(Image_obj::__base64Chars,"__base64Chars");
	HX_MARK_MEMBER_NAME(Image_obj::__base64Encoder,"__base64Encoder");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(Image_obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(Image_obj::__base64Chars,"__base64Chars");
	HX_VISIT_MEMBER_NAME(Image_obj::__base64Encoder,"__base64Encoder");
};

#endif

hx::Class Image_obj::__mClass;

static ::String sStaticFields[] = {
	HX_HCSTRING("__base64Chars","\xae","\xc9","\x24","\x36"),
	HX_HCSTRING("__base64Encoder","\xad","\xa4","\x42","\x7e"),
	HX_HCSTRING("fromBase64","\x99","\x02","\x6c","\x98"),
	HX_HCSTRING("fromBitmapData","\xc3","\x07","\xed","\x2b"),
	HX_HCSTRING("fromBytes","\xa1","\xf2","\x20","\x72"),
	HX_HCSTRING("fromCanvas","\xe2","\x59","\x86","\xfb"),
	HX_HCSTRING("fromFile","\x06","\x9d","\x87","\xa1"),
	HX_HCSTRING("fromImageElement","\x2b","\x91","\x89","\x8f"),
	HX_HCSTRING("loadFromBase64","\x5f","\x0c","\x1d","\x2f"),
	HX_HCSTRING("loadFromBytes","\x9b","\xc3","\x86","\xf4"),
	HX_HCSTRING("loadFromFile","\x4c","\x89","\xf0","\x5a"),
	HX_HCSTRING("__base64Encode","\x25","\xfc","\x79","\x6c"),
	HX_HCSTRING("__isGIF","\x1a","\xeb","\xaa","\x2b"),
	HX_HCSTRING("__isJPG","\xf7","\x37","\xad","\x2b"),
	HX_HCSTRING("__isPNG","\xbf","\xc3","\xb1","\x2b"),
	HX_HCSTRING("__isWebP","\x66","\x8d","\x8b","\x14"),
	::String(null()) };

void Image_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("lime.graphics.Image","\x91","\x28","\xc1","\x9c");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &Image_obj::__GetStatic;
	__mClass->mSetStaticField = &Image_obj::__SetStatic;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(sStaticFields);
	__mClass->mMembers = hx::Class_obj::dupFunctions(sMemberFields);
	__mClass->mCanCast = hx::TCanCast< Image_obj >;
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

void Image_obj::__boot()
{
	__base64Chars= HX_HCSTRING("ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz0123456789+/","\x03","\x41","\x03","\x7f");
}

} // end namespace lime
} // end namespace graphics
