#include <hxcpp.h>

#include "hxMath.h"
#ifndef INCLUDED_Std
#include <Std.h>
#endif
#ifndef INCLUDED_haxe_io_Bytes
#include <haxe/io/Bytes.h>
#endif
#ifndef INCLUDED_lime__backend_native_NativeCFFI
#include <lime/_backend/native/NativeCFFI.h>
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
#ifndef INCLUDED_lime_graphics_utils_ImageDataUtil
#include <lime/graphics/utils/ImageDataUtil.h>
#endif
#ifndef INCLUDED_lime_graphics_utils__ImageDataUtil_ImageDataView
#include <lime/graphics/utils/_ImageDataUtil/ImageDataView.h>
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
#ifndef INCLUDED_lime_math_color__RGBA_RGBA_Impl_
#include <lime/math/color/_RGBA/RGBA_Impl_.h>
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
namespace utils{

Void ImageDataUtil_obj::__construct()
{
	return null();
}

//ImageDataUtil_obj::~ImageDataUtil_obj() { }

Dynamic ImageDataUtil_obj::__CreateEmpty() { return  new ImageDataUtil_obj; }
hx::ObjectPtr< ImageDataUtil_obj > ImageDataUtil_obj::__new()
{  hx::ObjectPtr< ImageDataUtil_obj > _result_ = new ImageDataUtil_obj();
	_result_->__construct();
	return _result_;}

Dynamic ImageDataUtil_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< ImageDataUtil_obj > _result_ = new ImageDataUtil_obj();
	_result_->__construct();
	return _result_;}

Void ImageDataUtil_obj::colorTransform( ::lime::graphics::Image image,::lime::math::Rectangle rect,::lime::utils::ArrayBufferView colorMatrix){
{
		::lime::utils::ArrayBufferView tmp = image->buffer->data;
		::lime::utils::ArrayBufferView data = tmp;
		bool tmp1 = (data == null());
		if ((tmp1)){
			return null();
		}
		bool tmp2 = ::lime::_system::CFFI_obj::enabled;
		if ((tmp2)){
			::lime::_backend::native::NativeCFFI_obj::cffi_lime_image_data_util_color_transform.call(hx::DynamicPtr(image),hx::DynamicPtr(rect),hx::DynamicPtr(colorMatrix));
		}
		else{
			int tmp3 = image->buffer->format;
			int format = tmp3;
			bool tmp4 = image->buffer->premultiplied;
			bool premultiplied = tmp4;
			::lime::graphics::utils::_ImageDataUtil::ImageDataView tmp5 = ::lime::graphics::utils::_ImageDataUtil::ImageDataView_obj::__new(image,rect);
			::lime::graphics::utils::_ImageDataUtil::ImageDataView dataView = tmp5;
			::lime::utils::ArrayBufferView tmp6 = colorMatrix;
			::lime::utils::ArrayBufferView tmp7 = ::lime::math::_ColorMatrix::ColorMatrix_Impl__obj::getAlphaTable(tmp6);
			::lime::utils::ArrayBufferView alphaTable = tmp7;
			::lime::utils::ArrayBufferView tmp8 = colorMatrix;
			::lime::utils::ArrayBufferView tmp9 = ::lime::math::_ColorMatrix::ColorMatrix_Impl__obj::getRedTable(tmp8);
			::lime::utils::ArrayBufferView redTable = tmp9;
			::lime::utils::ArrayBufferView tmp10 = colorMatrix;
			::lime::utils::ArrayBufferView tmp11 = ::lime::math::_ColorMatrix::ColorMatrix_Impl__obj::getGreenTable(tmp10);
			::lime::utils::ArrayBufferView greenTable = tmp11;
			::lime::utils::ArrayBufferView tmp12 = colorMatrix;
			::lime::utils::ArrayBufferView tmp13 = ::lime::math::_ColorMatrix::ColorMatrix_Impl__obj::getBlueTable(tmp12);
			::lime::utils::ArrayBufferView blueTable = tmp13;
			int row;
			int offset;
			int pixel;
			{
				int _g1 = (int)0;
				int _g = dataView->height;
				while((true)){
					bool tmp14 = (_g1 < _g);
					bool tmp15 = !(tmp14);
					if ((tmp15)){
						break;
					}
					int tmp16 = (_g1)++;
					int y = tmp16;
					int tmp17 = dataView->offset;
					int tmp18 = (dataView->stride * y);
					int tmp19 = (tmp17 + tmp18);
					row = tmp19;
					{
						int _g3 = (int)0;
						int _g2 = dataView->width;
						while((true)){
							bool tmp20 = (_g3 < _g2);
							bool tmp21 = !(tmp20);
							if ((tmp21)){
								break;
							}
							int tmp22 = (_g3)++;
							int x = tmp22;
							int tmp23 = row;
							int tmp24 = (x * (int)4);
							int tmp25 = (tmp23 + tmp24);
							offset = tmp25;
							{
								int tmp26 = format;
								switch( (int)(tmp26)){
									case (int)2: {
										int tmp27 = ::__hxcpp_memory_get_byte(data->buffer->b,(data->byteOffset + ((offset + (int)2))));
										Dynamic tmp28 = (int(tmp27) & int((int)255));
										int r = tmp28;
										int tmp29 = ::__hxcpp_memory_get_byte(data->buffer->b,(data->byteOffset + ((offset + (int)1))));
										Dynamic tmp30 = (int(tmp29) & int((int)255));
										int g = tmp30;
										int tmp31 = ::__hxcpp_memory_get_byte(data->buffer->b,(data->byteOffset + offset));
										Dynamic tmp32 = (int(tmp31) & int((int)255));
										int b = tmp32;
										int tmp33 = ::__hxcpp_memory_get_byte(data->buffer->b,(data->byteOffset + ((offset + (int)3))));
										Dynamic tmp34 = (int(tmp33) & int((int)255));
										int a = tmp34;
										int tmp35 = (int(r) & int((int)255));
										int tmp36 = (int(tmp35) << int((int)24));
										int tmp37 = (int(g) & int((int)255));
										int tmp38 = (int(tmp37) << int((int)16));
										int tmp39 = (int(tmp36) | int(tmp38));
										int tmp40 = (int(b) & int((int)255));
										int tmp41 = (int(tmp40) << int((int)8));
										int tmp42 = (int(tmp39) | int(tmp41));
										int tmp43 = (int(a) & int((int)255));
										int tmp44 = (int(tmp42) | int(tmp43));
										pixel = tmp44;
									}
									;break;
									case (int)0: {
										int tmp27 = ::__hxcpp_memory_get_byte(data->buffer->b,(data->byteOffset + offset));
										Dynamic tmp28 = (int(tmp27) & int((int)255));
										int r = tmp28;
										int tmp29 = ::__hxcpp_memory_get_byte(data->buffer->b,(data->byteOffset + ((offset + (int)1))));
										Dynamic tmp30 = (int(tmp29) & int((int)255));
										int g = tmp30;
										int tmp31 = ::__hxcpp_memory_get_byte(data->buffer->b,(data->byteOffset + ((offset + (int)2))));
										Dynamic tmp32 = (int(tmp31) & int((int)255));
										int b = tmp32;
										int tmp33 = ::__hxcpp_memory_get_byte(data->buffer->b,(data->byteOffset + ((offset + (int)3))));
										Dynamic tmp34 = (int(tmp33) & int((int)255));
										int a = tmp34;
										int tmp35 = (int(r) & int((int)255));
										int tmp36 = (int(tmp35) << int((int)24));
										int tmp37 = (int(g) & int((int)255));
										int tmp38 = (int(tmp37) << int((int)16));
										int tmp39 = (int(tmp36) | int(tmp38));
										int tmp40 = (int(b) & int((int)255));
										int tmp41 = (int(tmp40) << int((int)8));
										int tmp42 = (int(tmp39) | int(tmp41));
										int tmp43 = (int(a) & int((int)255));
										int tmp44 = (int(tmp42) | int(tmp43));
										pixel = tmp44;
									}
									;break;
									case (int)1: {
										int tmp27 = ::__hxcpp_memory_get_byte(data->buffer->b,(data->byteOffset + ((offset + (int)1))));
										Dynamic tmp28 = (int(tmp27) & int((int)255));
										int r = tmp28;
										int tmp29 = ::__hxcpp_memory_get_byte(data->buffer->b,(data->byteOffset + ((offset + (int)2))));
										Dynamic tmp30 = (int(tmp29) & int((int)255));
										int g = tmp30;
										int tmp31 = ::__hxcpp_memory_get_byte(data->buffer->b,(data->byteOffset + ((offset + (int)3))));
										Dynamic tmp32 = (int(tmp31) & int((int)255));
										int b = tmp32;
										int tmp33 = ::__hxcpp_memory_get_byte(data->buffer->b,(data->byteOffset + offset));
										Dynamic tmp34 = (int(tmp33) & int((int)255));
										int a = tmp34;
										int tmp35 = (int(r) & int((int)255));
										int tmp36 = (int(tmp35) << int((int)24));
										int tmp37 = (int(g) & int((int)255));
										int tmp38 = (int(tmp37) << int((int)16));
										int tmp39 = (int(tmp36) | int(tmp38));
										int tmp40 = (int(b) & int((int)255));
										int tmp41 = (int(tmp40) << int((int)8));
										int tmp42 = (int(tmp39) | int(tmp41));
										int tmp43 = (int(a) & int((int)255));
										int tmp44 = (int(tmp42) | int(tmp43));
										pixel = tmp44;
									}
									;break;
								}
								bool tmp27 = premultiplied;
								if ((tmp27)){
									int tmp28 = (int(pixel) & int((int)255));
									int tmp29 = tmp28;
									bool tmp30 = (tmp29 != (int)0);
									bool tmp31;
									if ((tmp30)){
										int tmp32 = (int(pixel) & int((int)255));
										int tmp33 = tmp32;
										int tmp34 = tmp33;
										tmp31 = (tmp34 != (int)255);
									}
									else{
										tmp31 = false;
									}
									if ((tmp31)){
										int tmp32 = (int(pixel) & int((int)255));
										int tmp33 = tmp32;
										Float tmp34 = (Float(((Float)255.0)) / Float(tmp33));
										::lime::math::color::_RGBA::RGBA_Impl__obj::unmult = tmp34;
										{
											Dynamic tmp35;
											{
												::lime::utils::ArrayBufferView tmp36 = ::lime::math::color::_RGBA::RGBA_Impl__obj::__clamp;
												::lime::utils::ArrayBufferView this1 = tmp36;
												int tmp37 = (int(pixel) >> int((int)24));
												int tmp38 = tmp37;
												int tmp39 = (int(tmp38) & int((int)255));
												int tmp40 = tmp39;
												Float tmp41 = ::lime::math::color::_RGBA::RGBA_Impl__obj::unmult;
												Float tmp42 = (tmp40 * tmp41);
												int tmp43 = ::Math_obj::round(tmp42);
												int idx = tmp43;
												int tmp44 = ::__hxcpp_memory_get_byte(this1->buffer->b,(this1->byteOffset + idx));
												tmp35 = (int(tmp44) & int((int)255));
											}
											int r = tmp35;
											Dynamic tmp36;
											{
												::lime::utils::ArrayBufferView tmp37 = ::lime::math::color::_RGBA::RGBA_Impl__obj::__clamp;
												::lime::utils::ArrayBufferView this1 = tmp37;
												int tmp38 = (int(pixel) >> int((int)16));
												int tmp39 = tmp38;
												int tmp40 = (int(tmp39) & int((int)255));
												int tmp41 = tmp40;
												Float tmp42 = ::lime::math::color::_RGBA::RGBA_Impl__obj::unmult;
												Float tmp43 = (tmp41 * tmp42);
												int tmp44 = ::Math_obj::round(tmp43);
												int idx = tmp44;
												int tmp45 = ::__hxcpp_memory_get_byte(this1->buffer->b,(this1->byteOffset + idx));
												tmp36 = (int(tmp45) & int((int)255));
											}
											int g = tmp36;
											Dynamic tmp37;
											{
												::lime::utils::ArrayBufferView tmp38 = ::lime::math::color::_RGBA::RGBA_Impl__obj::__clamp;
												::lime::utils::ArrayBufferView this1 = tmp38;
												int tmp39 = (int(pixel) >> int((int)8));
												int tmp40 = tmp39;
												int tmp41 = (int(tmp40) & int((int)255));
												int tmp42 = tmp41;
												Float tmp43 = ::lime::math::color::_RGBA::RGBA_Impl__obj::unmult;
												Float tmp44 = (tmp42 * tmp43);
												int tmp45 = ::Math_obj::round(tmp44);
												int idx = tmp45;
												int tmp46 = ::__hxcpp_memory_get_byte(this1->buffer->b,(this1->byteOffset + idx));
												tmp37 = (int(tmp46) & int((int)255));
											}
											int b = tmp37;
											int tmp38 = (int(r) & int((int)255));
											int tmp39 = (int(tmp38) << int((int)24));
											int tmp40 = (int(g) & int((int)255));
											int tmp41 = (int(tmp40) << int((int)16));
											int tmp42 = (int(tmp39) | int(tmp41));
											int tmp43 = (int(b) & int((int)255));
											int tmp44 = (int(tmp43) << int((int)8));
											int tmp45 = (int(tmp42) | int(tmp44));
											int tmp46 = (int(pixel) & int((int)255));
											int tmp47 = tmp46;
											int tmp48 = (int(tmp47) & int((int)255));
											int tmp49 = (int(tmp45) | int(tmp48));
											pixel = tmp49;
										}
									}
								}
							}
							{
								int tmp26 = ::__hxcpp_memory_get_byte(redTable->buffer->b,(redTable->byteOffset + ((int((int(pixel) >> int((int)24))) & int((int)255)))));
								Dynamic tmp27 = (int(tmp26) & int((int)255));
								int r = tmp27;
								int tmp28 = ::__hxcpp_memory_get_byte(greenTable->buffer->b,(greenTable->byteOffset + ((int((int(pixel) >> int((int)16))) & int((int)255)))));
								Dynamic tmp29 = (int(tmp28) & int((int)255));
								int g = tmp29;
								int tmp30 = ::__hxcpp_memory_get_byte(blueTable->buffer->b,(blueTable->byteOffset + ((int((int(pixel) >> int((int)8))) & int((int)255)))));
								Dynamic tmp31 = (int(tmp30) & int((int)255));
								int b = tmp31;
								int tmp32 = ::__hxcpp_memory_get_byte(alphaTable->buffer->b,(alphaTable->byteOffset + ((int(pixel) & int((int)255)))));
								Dynamic tmp33 = (int(tmp32) & int((int)255));
								int a = tmp33;
								int tmp34 = (int(r) & int((int)255));
								int tmp35 = (int(tmp34) << int((int)24));
								int tmp36 = (int(g) & int((int)255));
								int tmp37 = (int(tmp36) << int((int)16));
								int tmp38 = (int(tmp35) | int(tmp37));
								int tmp39 = (int(b) & int((int)255));
								int tmp40 = (int(tmp39) << int((int)8));
								int tmp41 = (int(tmp38) | int(tmp40));
								int tmp42 = (int(a) & int((int)255));
								int tmp43 = (int(tmp41) | int(tmp42));
								pixel = tmp43;
							}
							{
								bool tmp26 = premultiplied;
								if ((tmp26)){
									int tmp27 = (int(pixel) & int((int)255));
									int tmp28 = tmp27;
									bool tmp29 = (tmp28 == (int)0);
									if ((tmp29)){
										bool tmp30 = (pixel != (int)0);
										if ((tmp30)){
											pixel = (int)0;
										}
									}
									else{
										int tmp30 = (int(pixel) & int((int)255));
										int tmp31 = tmp30;
										bool tmp32 = (tmp31 != (int)255);
										if ((tmp32)){
											Dynamic tmp33;
											{
												::lime::utils::ArrayBufferView tmp34 = ::lime::math::color::_RGBA::RGBA_Impl__obj::__alpha16;
												::lime::utils::ArrayBufferView this1 = tmp34;
												tmp33 = ::__hxcpp_memory_get_ui32(this1->buffer->b,(this1->byteOffset + (((int(pixel) & int((int)255))) * (int)4)));
											}
											::lime::math::color::_RGBA::RGBA_Impl__obj::a16 = tmp33;
											{
												int tmp34 = (int(pixel) >> int((int)24));
												int tmp35 = tmp34;
												int tmp36 = (int(tmp35) & int((int)255));
												int tmp37 = tmp36;
												int tmp38 = ::lime::math::color::_RGBA::RGBA_Impl__obj::a16;
												int tmp39 = (tmp37 * tmp38);
												int tmp40 = (int(tmp39) >> int((int)16));
												int tmp41 = (int(tmp40) & int((int)255));
												int tmp42 = (int(tmp41) << int((int)24));
												int tmp43 = (int(pixel) >> int((int)16));
												int tmp44 = tmp43;
												int tmp45 = (int(tmp44) & int((int)255));
												int tmp46 = tmp45;
												int tmp47 = ::lime::math::color::_RGBA::RGBA_Impl__obj::a16;
												int tmp48 = (tmp46 * tmp47);
												int tmp49 = (int(tmp48) >> int((int)16));
												int tmp50 = (int(tmp49) & int((int)255));
												int tmp51 = (int(tmp50) << int((int)16));
												int tmp52 = (int(tmp42) | int(tmp51));
												int tmp53 = (int(pixel) >> int((int)8));
												int tmp54 = tmp53;
												int tmp55 = (int(tmp54) & int((int)255));
												int tmp56 = tmp55;
												int tmp57 = ::lime::math::color::_RGBA::RGBA_Impl__obj::a16;
												int tmp58 = (tmp56 * tmp57);
												int tmp59 = (int(tmp58) >> int((int)16));
												int tmp60 = (int(tmp59) & int((int)255));
												int tmp61 = (int(tmp60) << int((int)8));
												int tmp62 = (int(tmp52) | int(tmp61));
												int tmp63 = (int(pixel) & int((int)255));
												int tmp64 = tmp63;
												int tmp65 = (int(tmp64) & int((int)255));
												int tmp66 = (int(tmp62) | int(tmp65));
												pixel = tmp66;
											}
										}
									}
								}
								int tmp27 = format;
								switch( (int)(tmp27)){
									case (int)2: {
										{
											int tmp28 = (int(pixel) >> int((int)8));
											int tmp29 = tmp28;
											int tmp30 = (int(tmp29) & int((int)255));
											int val = tmp30;
											::__hxcpp_memory_set_byte(data->buffer->b,(data->byteOffset + offset),val);
											val;
										}
										{
											int tmp28 = (int(pixel) >> int((int)16));
											int tmp29 = tmp28;
											int tmp30 = (int(tmp29) & int((int)255));
											int val = tmp30;
											::__hxcpp_memory_set_byte(data->buffer->b,(data->byteOffset + ((offset + (int)1))),val);
											val;
										}
										{
											int tmp28 = (int(pixel) >> int((int)24));
											int tmp29 = tmp28;
											int tmp30 = (int(tmp29) & int((int)255));
											int val = tmp30;
											::__hxcpp_memory_set_byte(data->buffer->b,(data->byteOffset + ((offset + (int)2))),val);
											val;
										}
										{
											int tmp28 = (int(pixel) & int((int)255));
											int val = tmp28;
											::__hxcpp_memory_set_byte(data->buffer->b,(data->byteOffset + ((offset + (int)3))),val);
											val;
										}
									}
									;break;
									case (int)0: {
										{
											int tmp28 = (int(pixel) >> int((int)24));
											int tmp29 = tmp28;
											int tmp30 = (int(tmp29) & int((int)255));
											int val = tmp30;
											::__hxcpp_memory_set_byte(data->buffer->b,(data->byteOffset + offset),val);
											val;
										}
										{
											int tmp28 = (int(pixel) >> int((int)16));
											int tmp29 = tmp28;
											int tmp30 = (int(tmp29) & int((int)255));
											int val = tmp30;
											::__hxcpp_memory_set_byte(data->buffer->b,(data->byteOffset + ((offset + (int)1))),val);
											val;
										}
										{
											int tmp28 = (int(pixel) >> int((int)8));
											int tmp29 = tmp28;
											int tmp30 = (int(tmp29) & int((int)255));
											int val = tmp30;
											::__hxcpp_memory_set_byte(data->buffer->b,(data->byteOffset + ((offset + (int)2))),val);
											val;
										}
										{
											int tmp28 = (int(pixel) & int((int)255));
											int val = tmp28;
											::__hxcpp_memory_set_byte(data->buffer->b,(data->byteOffset + ((offset + (int)3))),val);
											val;
										}
									}
									;break;
									case (int)1: {
										{
											int tmp28 = (int(pixel) & int((int)255));
											int val = tmp28;
											::__hxcpp_memory_set_byte(data->buffer->b,(data->byteOffset + offset),val);
											val;
										}
										{
											int tmp28 = (int(pixel) >> int((int)24));
											int tmp29 = tmp28;
											int tmp30 = (int(tmp29) & int((int)255));
											int val = tmp30;
											::__hxcpp_memory_set_byte(data->buffer->b,(data->byteOffset + ((offset + (int)1))),val);
											val;
										}
										{
											int tmp28 = (int(pixel) >> int((int)16));
											int tmp29 = tmp28;
											int tmp30 = (int(tmp29) & int((int)255));
											int val = tmp30;
											::__hxcpp_memory_set_byte(data->buffer->b,(data->byteOffset + ((offset + (int)2))),val);
											val;
										}
										{
											int tmp28 = (int(pixel) >> int((int)8));
											int tmp29 = tmp28;
											int tmp30 = (int(tmp29) & int((int)255));
											int val = tmp30;
											::__hxcpp_memory_set_byte(data->buffer->b,(data->byteOffset + ((offset + (int)3))),val);
											val;
										}
									}
									;break;
								}
							}
						}
					}
				}
			}
		}
		image->dirty = true;
		(image->version)++;
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC3(ImageDataUtil_obj,colorTransform,(void))

Void ImageDataUtil_obj::copyChannel( ::lime::graphics::Image image,::lime::graphics::Image sourceImage,::lime::math::Rectangle sourceRect,::lime::math::Vector2 destPoint,::lime::graphics::ImageChannel sourceChannel,::lime::graphics::ImageChannel destChannel){
{
		int tmp;
		switch( (int)(destChannel->__Index())){
			case (int)0: {
				tmp = (int)0;
			}
			;break;
			case (int)1: {
				tmp = (int)1;
			}
			;break;
			case (int)2: {
				tmp = (int)2;
			}
			;break;
			case (int)3: {
				tmp = (int)3;
			}
			;break;
		}
		int destIdx = tmp;
		int tmp1;
		switch( (int)(sourceChannel->__Index())){
			case (int)0: {
				tmp1 = (int)0;
			}
			;break;
			case (int)1: {
				tmp1 = (int)1;
			}
			;break;
			case (int)2: {
				tmp1 = (int)2;
			}
			;break;
			case (int)3: {
				tmp1 = (int)3;
			}
			;break;
		}
		int srcIdx = tmp1;
		::lime::utils::ArrayBufferView tmp2 = sourceImage->buffer->data;
		::lime::utils::ArrayBufferView srcData = tmp2;
		::lime::utils::ArrayBufferView tmp3 = image->buffer->data;
		::lime::utils::ArrayBufferView destData = tmp3;
		bool tmp4 = (srcData == null());
		bool tmp5 = !(tmp4);
		bool tmp6;
		if ((tmp5)){
			tmp6 = (destData == null());
		}
		else{
			tmp6 = true;
		}
		if ((tmp6)){
			return null();
		}
		bool tmp7 = ::lime::_system::CFFI_obj::enabled;
		if ((tmp7)){
			::lime::_backend::native::NativeCFFI_obj::cffi_lime_image_data_util_copy_channel.call(hx::DynamicPtr(image),hx::DynamicPtr(sourceImage),hx::DynamicPtr(sourceRect),hx::DynamicPtr(destPoint),srcIdx,destIdx);
		}
		else{
			::lime::graphics::utils::_ImageDataUtil::ImageDataView tmp8 = ::lime::graphics::utils::_ImageDataUtil::ImageDataView_obj::__new(sourceImage,sourceRect);
			::lime::graphics::utils::_ImageDataUtil::ImageDataView srcView = tmp8;
			::lime::graphics::Image tmp9 = image;
			::lime::math::Rectangle tmp10 = ::lime::math::Rectangle_obj::__new(destPoint->x,destPoint->y,srcView->width,srcView->height);
			::lime::graphics::utils::_ImageDataUtil::ImageDataView tmp11 = ::lime::graphics::utils::_ImageDataUtil::ImageDataView_obj::__new(tmp9,tmp10);
			::lime::graphics::utils::_ImageDataUtil::ImageDataView destView = tmp11;
			int tmp12 = sourceImage->buffer->format;
			int srcFormat = tmp12;
			int tmp13 = image->buffer->format;
			int destFormat = tmp13;
			bool tmp14 = sourceImage->buffer->premultiplied;
			bool srcPremultiplied = tmp14;
			bool tmp15 = image->buffer->premultiplied;
			bool destPremultiplied = tmp15;
			int srcPosition;
			int destPosition;
			int srcPixel;
			int destPixel;
			int value = (int)0;
			{
				int _g1 = (int)0;
				int _g = destView->height;
				while((true)){
					bool tmp16 = (_g1 < _g);
					bool tmp17 = !(tmp16);
					if ((tmp17)){
						break;
					}
					int tmp18 = (_g1)++;
					int y = tmp18;
					int tmp19 = srcView->offset;
					int tmp20 = (srcView->stride * y);
					int tmp21 = (tmp19 + tmp20);
					srcPosition = tmp21;
					int tmp22 = destView->offset;
					int tmp23 = (destView->stride * y);
					int tmp24 = (tmp22 + tmp23);
					destPosition = tmp24;
					{
						int _g3 = (int)0;
						int _g2 = destView->width;
						while((true)){
							bool tmp25 = (_g3 < _g2);
							bool tmp26 = !(tmp25);
							if ((tmp26)){
								break;
							}
							int tmp27 = (_g3)++;
							int x = tmp27;
							{
								int tmp28 = srcFormat;
								switch( (int)(tmp28)){
									case (int)2: {
										int tmp29 = ::__hxcpp_memory_get_byte(srcData->buffer->b,(srcData->byteOffset + ((srcPosition + (int)2))));
										Dynamic tmp30 = (int(tmp29) & int((int)255));
										int r = tmp30;
										int tmp31 = ::__hxcpp_memory_get_byte(srcData->buffer->b,(srcData->byteOffset + ((srcPosition + (int)1))));
										Dynamic tmp32 = (int(tmp31) & int((int)255));
										int g = tmp32;
										int tmp33 = ::__hxcpp_memory_get_byte(srcData->buffer->b,(srcData->byteOffset + srcPosition));
										Dynamic tmp34 = (int(tmp33) & int((int)255));
										int b = tmp34;
										int tmp35 = ::__hxcpp_memory_get_byte(srcData->buffer->b,(srcData->byteOffset + ((srcPosition + (int)3))));
										Dynamic tmp36 = (int(tmp35) & int((int)255));
										int a = tmp36;
										int tmp37 = (int(r) & int((int)255));
										int tmp38 = (int(tmp37) << int((int)24));
										int tmp39 = (int(g) & int((int)255));
										int tmp40 = (int(tmp39) << int((int)16));
										int tmp41 = (int(tmp38) | int(tmp40));
										int tmp42 = (int(b) & int((int)255));
										int tmp43 = (int(tmp42) << int((int)8));
										int tmp44 = (int(tmp41) | int(tmp43));
										int tmp45 = (int(a) & int((int)255));
										int tmp46 = (int(tmp44) | int(tmp45));
										srcPixel = tmp46;
									}
									;break;
									case (int)0: {
										int tmp29 = ::__hxcpp_memory_get_byte(srcData->buffer->b,(srcData->byteOffset + srcPosition));
										Dynamic tmp30 = (int(tmp29) & int((int)255));
										int r = tmp30;
										int tmp31 = ::__hxcpp_memory_get_byte(srcData->buffer->b,(srcData->byteOffset + ((srcPosition + (int)1))));
										Dynamic tmp32 = (int(tmp31) & int((int)255));
										int g = tmp32;
										int tmp33 = ::__hxcpp_memory_get_byte(srcData->buffer->b,(srcData->byteOffset + ((srcPosition + (int)2))));
										Dynamic tmp34 = (int(tmp33) & int((int)255));
										int b = tmp34;
										int tmp35 = ::__hxcpp_memory_get_byte(srcData->buffer->b,(srcData->byteOffset + ((srcPosition + (int)3))));
										Dynamic tmp36 = (int(tmp35) & int((int)255));
										int a = tmp36;
										int tmp37 = (int(r) & int((int)255));
										int tmp38 = (int(tmp37) << int((int)24));
										int tmp39 = (int(g) & int((int)255));
										int tmp40 = (int(tmp39) << int((int)16));
										int tmp41 = (int(tmp38) | int(tmp40));
										int tmp42 = (int(b) & int((int)255));
										int tmp43 = (int(tmp42) << int((int)8));
										int tmp44 = (int(tmp41) | int(tmp43));
										int tmp45 = (int(a) & int((int)255));
										int tmp46 = (int(tmp44) | int(tmp45));
										srcPixel = tmp46;
									}
									;break;
									case (int)1: {
										int tmp29 = ::__hxcpp_memory_get_byte(srcData->buffer->b,(srcData->byteOffset + ((srcPosition + (int)1))));
										Dynamic tmp30 = (int(tmp29) & int((int)255));
										int r = tmp30;
										int tmp31 = ::__hxcpp_memory_get_byte(srcData->buffer->b,(srcData->byteOffset + ((srcPosition + (int)2))));
										Dynamic tmp32 = (int(tmp31) & int((int)255));
										int g = tmp32;
										int tmp33 = ::__hxcpp_memory_get_byte(srcData->buffer->b,(srcData->byteOffset + ((srcPosition + (int)3))));
										Dynamic tmp34 = (int(tmp33) & int((int)255));
										int b = tmp34;
										int tmp35 = ::__hxcpp_memory_get_byte(srcData->buffer->b,(srcData->byteOffset + srcPosition));
										Dynamic tmp36 = (int(tmp35) & int((int)255));
										int a = tmp36;
										int tmp37 = (int(r) & int((int)255));
										int tmp38 = (int(tmp37) << int((int)24));
										int tmp39 = (int(g) & int((int)255));
										int tmp40 = (int(tmp39) << int((int)16));
										int tmp41 = (int(tmp38) | int(tmp40));
										int tmp42 = (int(b) & int((int)255));
										int tmp43 = (int(tmp42) << int((int)8));
										int tmp44 = (int(tmp41) | int(tmp43));
										int tmp45 = (int(a) & int((int)255));
										int tmp46 = (int(tmp44) | int(tmp45));
										srcPixel = tmp46;
									}
									;break;
								}
								bool tmp29 = srcPremultiplied;
								if ((tmp29)){
									int tmp30 = (int(srcPixel) & int((int)255));
									int tmp31 = tmp30;
									bool tmp32 = (tmp31 != (int)0);
									bool tmp33;
									if ((tmp32)){
										int tmp34 = (int(srcPixel) & int((int)255));
										int tmp35 = tmp34;
										int tmp36 = tmp35;
										tmp33 = (tmp36 != (int)255);
									}
									else{
										tmp33 = false;
									}
									if ((tmp33)){
										int tmp34 = (int(srcPixel) & int((int)255));
										int tmp35 = tmp34;
										Float tmp36 = (Float(((Float)255.0)) / Float(tmp35));
										::lime::math::color::_RGBA::RGBA_Impl__obj::unmult = tmp36;
										{
											Dynamic tmp37;
											{
												::lime::utils::ArrayBufferView tmp38 = ::lime::math::color::_RGBA::RGBA_Impl__obj::__clamp;
												::lime::utils::ArrayBufferView this1 = tmp38;
												int tmp39 = (int(srcPixel) >> int((int)24));
												int tmp40 = tmp39;
												int tmp41 = (int(tmp40) & int((int)255));
												int tmp42 = tmp41;
												Float tmp43 = ::lime::math::color::_RGBA::RGBA_Impl__obj::unmult;
												Float tmp44 = (tmp42 * tmp43);
												int tmp45 = ::Math_obj::round(tmp44);
												int idx = tmp45;
												int tmp46 = ::__hxcpp_memory_get_byte(this1->buffer->b,(this1->byteOffset + idx));
												tmp37 = (int(tmp46) & int((int)255));
											}
											int r = tmp37;
											Dynamic tmp38;
											{
												::lime::utils::ArrayBufferView tmp39 = ::lime::math::color::_RGBA::RGBA_Impl__obj::__clamp;
												::lime::utils::ArrayBufferView this1 = tmp39;
												int tmp40 = (int(srcPixel) >> int((int)16));
												int tmp41 = tmp40;
												int tmp42 = (int(tmp41) & int((int)255));
												int tmp43 = tmp42;
												Float tmp44 = ::lime::math::color::_RGBA::RGBA_Impl__obj::unmult;
												Float tmp45 = (tmp43 * tmp44);
												int tmp46 = ::Math_obj::round(tmp45);
												int idx = tmp46;
												int tmp47 = ::__hxcpp_memory_get_byte(this1->buffer->b,(this1->byteOffset + idx));
												tmp38 = (int(tmp47) & int((int)255));
											}
											int g = tmp38;
											Dynamic tmp39;
											{
												::lime::utils::ArrayBufferView tmp40 = ::lime::math::color::_RGBA::RGBA_Impl__obj::__clamp;
												::lime::utils::ArrayBufferView this1 = tmp40;
												int tmp41 = (int(srcPixel) >> int((int)8));
												int tmp42 = tmp41;
												int tmp43 = (int(tmp42) & int((int)255));
												int tmp44 = tmp43;
												Float tmp45 = ::lime::math::color::_RGBA::RGBA_Impl__obj::unmult;
												Float tmp46 = (tmp44 * tmp45);
												int tmp47 = ::Math_obj::round(tmp46);
												int idx = tmp47;
												int tmp48 = ::__hxcpp_memory_get_byte(this1->buffer->b,(this1->byteOffset + idx));
												tmp39 = (int(tmp48) & int((int)255));
											}
											int b = tmp39;
											int tmp40 = (int(r) & int((int)255));
											int tmp41 = (int(tmp40) << int((int)24));
											int tmp42 = (int(g) & int((int)255));
											int tmp43 = (int(tmp42) << int((int)16));
											int tmp44 = (int(tmp41) | int(tmp43));
											int tmp45 = (int(b) & int((int)255));
											int tmp46 = (int(tmp45) << int((int)8));
											int tmp47 = (int(tmp44) | int(tmp46));
											int tmp48 = (int(srcPixel) & int((int)255));
											int tmp49 = tmp48;
											int tmp50 = (int(tmp49) & int((int)255));
											int tmp51 = (int(tmp47) | int(tmp50));
											srcPixel = tmp51;
										}
									}
								}
							}
							{
								int tmp28 = destFormat;
								switch( (int)(tmp28)){
									case (int)2: {
										int tmp29 = ::__hxcpp_memory_get_byte(destData->buffer->b,(destData->byteOffset + ((destPosition + (int)2))));
										Dynamic tmp30 = (int(tmp29) & int((int)255));
										int r = tmp30;
										int tmp31 = ::__hxcpp_memory_get_byte(destData->buffer->b,(destData->byteOffset + ((destPosition + (int)1))));
										Dynamic tmp32 = (int(tmp31) & int((int)255));
										int g = tmp32;
										int tmp33 = ::__hxcpp_memory_get_byte(destData->buffer->b,(destData->byteOffset + destPosition));
										Dynamic tmp34 = (int(tmp33) & int((int)255));
										int b = tmp34;
										int tmp35 = ::__hxcpp_memory_get_byte(destData->buffer->b,(destData->byteOffset + ((destPosition + (int)3))));
										Dynamic tmp36 = (int(tmp35) & int((int)255));
										int a = tmp36;
										int tmp37 = (int(r) & int((int)255));
										int tmp38 = (int(tmp37) << int((int)24));
										int tmp39 = (int(g) & int((int)255));
										int tmp40 = (int(tmp39) << int((int)16));
										int tmp41 = (int(tmp38) | int(tmp40));
										int tmp42 = (int(b) & int((int)255));
										int tmp43 = (int(tmp42) << int((int)8));
										int tmp44 = (int(tmp41) | int(tmp43));
										int tmp45 = (int(a) & int((int)255));
										int tmp46 = (int(tmp44) | int(tmp45));
										destPixel = tmp46;
									}
									;break;
									case (int)0: {
										int tmp29 = ::__hxcpp_memory_get_byte(destData->buffer->b,(destData->byteOffset + destPosition));
										Dynamic tmp30 = (int(tmp29) & int((int)255));
										int r = tmp30;
										int tmp31 = ::__hxcpp_memory_get_byte(destData->buffer->b,(destData->byteOffset + ((destPosition + (int)1))));
										Dynamic tmp32 = (int(tmp31) & int((int)255));
										int g = tmp32;
										int tmp33 = ::__hxcpp_memory_get_byte(destData->buffer->b,(destData->byteOffset + ((destPosition + (int)2))));
										Dynamic tmp34 = (int(tmp33) & int((int)255));
										int b = tmp34;
										int tmp35 = ::__hxcpp_memory_get_byte(destData->buffer->b,(destData->byteOffset + ((destPosition + (int)3))));
										Dynamic tmp36 = (int(tmp35) & int((int)255));
										int a = tmp36;
										int tmp37 = (int(r) & int((int)255));
										int tmp38 = (int(tmp37) << int((int)24));
										int tmp39 = (int(g) & int((int)255));
										int tmp40 = (int(tmp39) << int((int)16));
										int tmp41 = (int(tmp38) | int(tmp40));
										int tmp42 = (int(b) & int((int)255));
										int tmp43 = (int(tmp42) << int((int)8));
										int tmp44 = (int(tmp41) | int(tmp43));
										int tmp45 = (int(a) & int((int)255));
										int tmp46 = (int(tmp44) | int(tmp45));
										destPixel = tmp46;
									}
									;break;
									case (int)1: {
										int tmp29 = ::__hxcpp_memory_get_byte(destData->buffer->b,(destData->byteOffset + ((destPosition + (int)1))));
										Dynamic tmp30 = (int(tmp29) & int((int)255));
										int r = tmp30;
										int tmp31 = ::__hxcpp_memory_get_byte(destData->buffer->b,(destData->byteOffset + ((destPosition + (int)2))));
										Dynamic tmp32 = (int(tmp31) & int((int)255));
										int g = tmp32;
										int tmp33 = ::__hxcpp_memory_get_byte(destData->buffer->b,(destData->byteOffset + ((destPosition + (int)3))));
										Dynamic tmp34 = (int(tmp33) & int((int)255));
										int b = tmp34;
										int tmp35 = ::__hxcpp_memory_get_byte(destData->buffer->b,(destData->byteOffset + destPosition));
										Dynamic tmp36 = (int(tmp35) & int((int)255));
										int a = tmp36;
										int tmp37 = (int(r) & int((int)255));
										int tmp38 = (int(tmp37) << int((int)24));
										int tmp39 = (int(g) & int((int)255));
										int tmp40 = (int(tmp39) << int((int)16));
										int tmp41 = (int(tmp38) | int(tmp40));
										int tmp42 = (int(b) & int((int)255));
										int tmp43 = (int(tmp42) << int((int)8));
										int tmp44 = (int(tmp41) | int(tmp43));
										int tmp45 = (int(a) & int((int)255));
										int tmp46 = (int(tmp44) | int(tmp45));
										destPixel = tmp46;
									}
									;break;
								}
								bool tmp29 = destPremultiplied;
								if ((tmp29)){
									int tmp30 = (int(destPixel) & int((int)255));
									int tmp31 = tmp30;
									bool tmp32 = (tmp31 != (int)0);
									bool tmp33;
									if ((tmp32)){
										int tmp34 = (int(destPixel) & int((int)255));
										int tmp35 = tmp34;
										int tmp36 = tmp35;
										tmp33 = (tmp36 != (int)255);
									}
									else{
										tmp33 = false;
									}
									if ((tmp33)){
										int tmp34 = (int(destPixel) & int((int)255));
										int tmp35 = tmp34;
										Float tmp36 = (Float(((Float)255.0)) / Float(tmp35));
										::lime::math::color::_RGBA::RGBA_Impl__obj::unmult = tmp36;
										{
											Dynamic tmp37;
											{
												::lime::utils::ArrayBufferView tmp38 = ::lime::math::color::_RGBA::RGBA_Impl__obj::__clamp;
												::lime::utils::ArrayBufferView this1 = tmp38;
												int tmp39 = (int(destPixel) >> int((int)24));
												int tmp40 = tmp39;
												int tmp41 = (int(tmp40) & int((int)255));
												int tmp42 = tmp41;
												Float tmp43 = ::lime::math::color::_RGBA::RGBA_Impl__obj::unmult;
												Float tmp44 = (tmp42 * tmp43);
												int tmp45 = ::Math_obj::round(tmp44);
												int idx = tmp45;
												int tmp46 = ::__hxcpp_memory_get_byte(this1->buffer->b,(this1->byteOffset + idx));
												tmp37 = (int(tmp46) & int((int)255));
											}
											int r = tmp37;
											Dynamic tmp38;
											{
												::lime::utils::ArrayBufferView tmp39 = ::lime::math::color::_RGBA::RGBA_Impl__obj::__clamp;
												::lime::utils::ArrayBufferView this1 = tmp39;
												int tmp40 = (int(destPixel) >> int((int)16));
												int tmp41 = tmp40;
												int tmp42 = (int(tmp41) & int((int)255));
												int tmp43 = tmp42;
												Float tmp44 = ::lime::math::color::_RGBA::RGBA_Impl__obj::unmult;
												Float tmp45 = (tmp43 * tmp44);
												int tmp46 = ::Math_obj::round(tmp45);
												int idx = tmp46;
												int tmp47 = ::__hxcpp_memory_get_byte(this1->buffer->b,(this1->byteOffset + idx));
												tmp38 = (int(tmp47) & int((int)255));
											}
											int g = tmp38;
											Dynamic tmp39;
											{
												::lime::utils::ArrayBufferView tmp40 = ::lime::math::color::_RGBA::RGBA_Impl__obj::__clamp;
												::lime::utils::ArrayBufferView this1 = tmp40;
												int tmp41 = (int(destPixel) >> int((int)8));
												int tmp42 = tmp41;
												int tmp43 = (int(tmp42) & int((int)255));
												int tmp44 = tmp43;
												Float tmp45 = ::lime::math::color::_RGBA::RGBA_Impl__obj::unmult;
												Float tmp46 = (tmp44 * tmp45);
												int tmp47 = ::Math_obj::round(tmp46);
												int idx = tmp47;
												int tmp48 = ::__hxcpp_memory_get_byte(this1->buffer->b,(this1->byteOffset + idx));
												tmp39 = (int(tmp48) & int((int)255));
											}
											int b = tmp39;
											int tmp40 = (int(r) & int((int)255));
											int tmp41 = (int(tmp40) << int((int)24));
											int tmp42 = (int(g) & int((int)255));
											int tmp43 = (int(tmp42) << int((int)16));
											int tmp44 = (int(tmp41) | int(tmp43));
											int tmp45 = (int(b) & int((int)255));
											int tmp46 = (int(tmp45) << int((int)8));
											int tmp47 = (int(tmp44) | int(tmp46));
											int tmp48 = (int(destPixel) & int((int)255));
											int tmp49 = tmp48;
											int tmp50 = (int(tmp49) & int((int)255));
											int tmp51 = (int(tmp47) | int(tmp50));
											destPixel = tmp51;
										}
									}
								}
							}
							int tmp28 = srcIdx;
							switch( (int)(tmp28)){
								case (int)0: {
									int tmp29 = (int(srcPixel) >> int((int)24));
									int tmp30 = tmp29;
									int tmp31 = (int(tmp30) & int((int)255));
									value = tmp31;
								}
								;break;
								case (int)1: {
									int tmp29 = (int(srcPixel) >> int((int)16));
									int tmp30 = tmp29;
									int tmp31 = (int(tmp30) & int((int)255));
									value = tmp31;
								}
								;break;
								case (int)2: {
									int tmp29 = (int(srcPixel) >> int((int)8));
									int tmp30 = tmp29;
									int tmp31 = (int(tmp30) & int((int)255));
									value = tmp31;
								}
								;break;
								case (int)3: {
									int tmp29 = (int(srcPixel) & int((int)255));
									value = tmp29;
								}
								;break;
							}
							int tmp29 = destIdx;
							switch( (int)(tmp29)){
								case (int)0: {
									{
										int tmp30 = (int(value) & int((int)255));
										int tmp31 = (int(tmp30) << int((int)24));
										int tmp32 = (int(destPixel) >> int((int)16));
										int tmp33 = tmp32;
										int tmp34 = (int(tmp33) & int((int)255));
										int tmp35 = tmp34;
										int tmp36 = (int(tmp35) & int((int)255));
										int tmp37 = (int(tmp36) << int((int)16));
										int tmp38 = (int(tmp31) | int(tmp37));
										int tmp39 = (int(destPixel) >> int((int)8));
										int tmp40 = tmp39;
										int tmp41 = (int(tmp40) & int((int)255));
										int tmp42 = tmp41;
										int tmp43 = (int(tmp42) & int((int)255));
										int tmp44 = (int(tmp43) << int((int)8));
										int tmp45 = (int(tmp38) | int(tmp44));
										int tmp46 = (int(destPixel) & int((int)255));
										int tmp47 = tmp46;
										int tmp48 = (int(tmp47) & int((int)255));
										int tmp49 = (int(tmp45) | int(tmp48));
										destPixel = tmp49;
									}
									value;
								}
								;break;
								case (int)1: {
									{
										int tmp30 = (int(destPixel) >> int((int)24));
										int tmp31 = tmp30;
										int tmp32 = (int(tmp31) & int((int)255));
										int tmp33 = tmp32;
										int tmp34 = (int(tmp33) & int((int)255));
										int tmp35 = (int(tmp34) << int((int)24));
										int tmp36 = (int(value) & int((int)255));
										int tmp37 = (int(tmp36) << int((int)16));
										int tmp38 = (int(tmp35) | int(tmp37));
										int tmp39 = (int(destPixel) >> int((int)8));
										int tmp40 = tmp39;
										int tmp41 = (int(tmp40) & int((int)255));
										int tmp42 = tmp41;
										int tmp43 = (int(tmp42) & int((int)255));
										int tmp44 = (int(tmp43) << int((int)8));
										int tmp45 = (int(tmp38) | int(tmp44));
										int tmp46 = (int(destPixel) & int((int)255));
										int tmp47 = tmp46;
										int tmp48 = (int(tmp47) & int((int)255));
										int tmp49 = (int(tmp45) | int(tmp48));
										destPixel = tmp49;
									}
									value;
								}
								;break;
								case (int)2: {
									{
										int tmp30 = (int(destPixel) >> int((int)24));
										int tmp31 = tmp30;
										int tmp32 = (int(tmp31) & int((int)255));
										int tmp33 = tmp32;
										int tmp34 = (int(tmp33) & int((int)255));
										int tmp35 = (int(tmp34) << int((int)24));
										int tmp36 = (int(destPixel) >> int((int)16));
										int tmp37 = tmp36;
										int tmp38 = (int(tmp37) & int((int)255));
										int tmp39 = tmp38;
										int tmp40 = (int(tmp39) & int((int)255));
										int tmp41 = (int(tmp40) << int((int)16));
										int tmp42 = (int(tmp35) | int(tmp41));
										int tmp43 = (int(value) & int((int)255));
										int tmp44 = (int(tmp43) << int((int)8));
										int tmp45 = (int(tmp42) | int(tmp44));
										int tmp46 = (int(destPixel) & int((int)255));
										int tmp47 = tmp46;
										int tmp48 = (int(tmp47) & int((int)255));
										int tmp49 = (int(tmp45) | int(tmp48));
										destPixel = tmp49;
									}
									value;
								}
								;break;
								case (int)3: {
									{
										int tmp30 = (int(destPixel) >> int((int)24));
										int tmp31 = tmp30;
										int tmp32 = (int(tmp31) & int((int)255));
										int tmp33 = tmp32;
										int tmp34 = (int(tmp33) & int((int)255));
										int tmp35 = (int(tmp34) << int((int)24));
										int tmp36 = (int(destPixel) >> int((int)16));
										int tmp37 = tmp36;
										int tmp38 = (int(tmp37) & int((int)255));
										int tmp39 = tmp38;
										int tmp40 = (int(tmp39) & int((int)255));
										int tmp41 = (int(tmp40) << int((int)16));
										int tmp42 = (int(tmp35) | int(tmp41));
										int tmp43 = (int(destPixel) >> int((int)8));
										int tmp44 = tmp43;
										int tmp45 = (int(tmp44) & int((int)255));
										int tmp46 = tmp45;
										int tmp47 = (int(tmp46) & int((int)255));
										int tmp48 = (int(tmp47) << int((int)8));
										int tmp49 = (int(tmp42) | int(tmp48));
										int tmp50 = (int(value) & int((int)255));
										int tmp51 = (int(tmp49) | int(tmp50));
										destPixel = tmp51;
									}
									value;
								}
								;break;
							}
							{
								bool tmp30 = destPremultiplied;
								if ((tmp30)){
									int tmp31 = (int(destPixel) & int((int)255));
									int tmp32 = tmp31;
									bool tmp33 = (tmp32 == (int)0);
									if ((tmp33)){
										bool tmp34 = (destPixel != (int)0);
										if ((tmp34)){
											destPixel = (int)0;
										}
									}
									else{
										int tmp34 = (int(destPixel) & int((int)255));
										int tmp35 = tmp34;
										bool tmp36 = (tmp35 != (int)255);
										if ((tmp36)){
											Dynamic tmp37;
											{
												::lime::utils::ArrayBufferView tmp38 = ::lime::math::color::_RGBA::RGBA_Impl__obj::__alpha16;
												::lime::utils::ArrayBufferView this1 = tmp38;
												tmp37 = ::__hxcpp_memory_get_ui32(this1->buffer->b,(this1->byteOffset + (((int(destPixel) & int((int)255))) * (int)4)));
											}
											::lime::math::color::_RGBA::RGBA_Impl__obj::a16 = tmp37;
											{
												int tmp38 = (int(destPixel) >> int((int)24));
												int tmp39 = tmp38;
												int tmp40 = (int(tmp39) & int((int)255));
												int tmp41 = tmp40;
												int tmp42 = ::lime::math::color::_RGBA::RGBA_Impl__obj::a16;
												int tmp43 = (tmp41 * tmp42);
												int tmp44 = (int(tmp43) >> int((int)16));
												int tmp45 = (int(tmp44) & int((int)255));
												int tmp46 = (int(tmp45) << int((int)24));
												int tmp47 = (int(destPixel) >> int((int)16));
												int tmp48 = tmp47;
												int tmp49 = (int(tmp48) & int((int)255));
												int tmp50 = tmp49;
												int tmp51 = ::lime::math::color::_RGBA::RGBA_Impl__obj::a16;
												int tmp52 = (tmp50 * tmp51);
												int tmp53 = (int(tmp52) >> int((int)16));
												int tmp54 = (int(tmp53) & int((int)255));
												int tmp55 = (int(tmp54) << int((int)16));
												int tmp56 = (int(tmp46) | int(tmp55));
												int tmp57 = (int(destPixel) >> int((int)8));
												int tmp58 = tmp57;
												int tmp59 = (int(tmp58) & int((int)255));
												int tmp60 = tmp59;
												int tmp61 = ::lime::math::color::_RGBA::RGBA_Impl__obj::a16;
												int tmp62 = (tmp60 * tmp61);
												int tmp63 = (int(tmp62) >> int((int)16));
												int tmp64 = (int(tmp63) & int((int)255));
												int tmp65 = (int(tmp64) << int((int)8));
												int tmp66 = (int(tmp56) | int(tmp65));
												int tmp67 = (int(destPixel) & int((int)255));
												int tmp68 = tmp67;
												int tmp69 = (int(tmp68) & int((int)255));
												int tmp70 = (int(tmp66) | int(tmp69));
												destPixel = tmp70;
											}
										}
									}
								}
								int tmp31 = destFormat;
								switch( (int)(tmp31)){
									case (int)2: {
										{
											int tmp32 = (int(destPixel) >> int((int)8));
											int tmp33 = tmp32;
											int tmp34 = (int(tmp33) & int((int)255));
											int val = tmp34;
											::__hxcpp_memory_set_byte(destData->buffer->b,(destData->byteOffset + destPosition),val);
											val;
										}
										{
											int tmp32 = (int(destPixel) >> int((int)16));
											int tmp33 = tmp32;
											int tmp34 = (int(tmp33) & int((int)255));
											int val = tmp34;
											::__hxcpp_memory_set_byte(destData->buffer->b,(destData->byteOffset + ((destPosition + (int)1))),val);
											val;
										}
										{
											int tmp32 = (int(destPixel) >> int((int)24));
											int tmp33 = tmp32;
											int tmp34 = (int(tmp33) & int((int)255));
											int val = tmp34;
											::__hxcpp_memory_set_byte(destData->buffer->b,(destData->byteOffset + ((destPosition + (int)2))),val);
											val;
										}
										{
											int tmp32 = (int(destPixel) & int((int)255));
											int val = tmp32;
											::__hxcpp_memory_set_byte(destData->buffer->b,(destData->byteOffset + ((destPosition + (int)3))),val);
											val;
										}
									}
									;break;
									case (int)0: {
										{
											int tmp32 = (int(destPixel) >> int((int)24));
											int tmp33 = tmp32;
											int tmp34 = (int(tmp33) & int((int)255));
											int val = tmp34;
											::__hxcpp_memory_set_byte(destData->buffer->b,(destData->byteOffset + destPosition),val);
											val;
										}
										{
											int tmp32 = (int(destPixel) >> int((int)16));
											int tmp33 = tmp32;
											int tmp34 = (int(tmp33) & int((int)255));
											int val = tmp34;
											::__hxcpp_memory_set_byte(destData->buffer->b,(destData->byteOffset + ((destPosition + (int)1))),val);
											val;
										}
										{
											int tmp32 = (int(destPixel) >> int((int)8));
											int tmp33 = tmp32;
											int tmp34 = (int(tmp33) & int((int)255));
											int val = tmp34;
											::__hxcpp_memory_set_byte(destData->buffer->b,(destData->byteOffset + ((destPosition + (int)2))),val);
											val;
										}
										{
											int tmp32 = (int(destPixel) & int((int)255));
											int val = tmp32;
											::__hxcpp_memory_set_byte(destData->buffer->b,(destData->byteOffset + ((destPosition + (int)3))),val);
											val;
										}
									}
									;break;
									case (int)1: {
										{
											int tmp32 = (int(destPixel) & int((int)255));
											int val = tmp32;
											::__hxcpp_memory_set_byte(destData->buffer->b,(destData->byteOffset + destPosition),val);
											val;
										}
										{
											int tmp32 = (int(destPixel) >> int((int)24));
											int tmp33 = tmp32;
											int tmp34 = (int(tmp33) & int((int)255));
											int val = tmp34;
											::__hxcpp_memory_set_byte(destData->buffer->b,(destData->byteOffset + ((destPosition + (int)1))),val);
											val;
										}
										{
											int tmp32 = (int(destPixel) >> int((int)16));
											int tmp33 = tmp32;
											int tmp34 = (int(tmp33) & int((int)255));
											int val = tmp34;
											::__hxcpp_memory_set_byte(destData->buffer->b,(destData->byteOffset + ((destPosition + (int)2))),val);
											val;
										}
										{
											int tmp32 = (int(destPixel) >> int((int)8));
											int tmp33 = tmp32;
											int tmp34 = (int(tmp33) & int((int)255));
											int val = tmp34;
											::__hxcpp_memory_set_byte(destData->buffer->b,(destData->byteOffset + ((destPosition + (int)3))),val);
											val;
										}
									}
									;break;
								}
							}
							hx::AddEq(srcPosition,(int)4);
							hx::AddEq(destPosition,(int)4);
						}
					}
				}
			}
		}
		image->dirty = true;
		(image->version)++;
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC6(ImageDataUtil_obj,copyChannel,(void))

Void ImageDataUtil_obj::copyPixels( ::lime::graphics::Image image,::lime::graphics::Image sourceImage,::lime::math::Rectangle sourceRect,::lime::math::Vector2 destPoint,::lime::graphics::Image alphaImage,::lime::math::Vector2 alphaPoint,hx::Null< bool >  __o_mergeAlpha){
bool mergeAlpha = __o_mergeAlpha.Default(false);
{
		bool tmp = (image->width == sourceImage->width);
		bool tmp1 = tmp;
		bool tmp2;
		if ((tmp1)){
			tmp2 = (image->height == sourceImage->height);
		}
		else{
			tmp2 = false;
		}
		bool tmp3 = tmp2;
		bool tmp4;
		if ((tmp3)){
			tmp4 = (sourceRect->width == sourceImage->width);
		}
		else{
			tmp4 = false;
		}
		bool tmp5 = tmp4;
		bool tmp6;
		if ((tmp5)){
			tmp6 = (sourceRect->height == sourceImage->height);
		}
		else{
			tmp6 = false;
		}
		bool tmp7 = tmp6;
		bool tmp8;
		if ((tmp7)){
			tmp8 = (sourceRect->x == (int)0);
		}
		else{
			tmp8 = false;
		}
		bool tmp9 = tmp8;
		bool tmp10;
		if ((tmp9)){
			tmp10 = (sourceRect->y == (int)0);
		}
		else{
			tmp10 = false;
		}
		bool tmp11 = tmp10;
		bool tmp12;
		if ((tmp11)){
			tmp12 = (destPoint->x == (int)0);
		}
		else{
			tmp12 = false;
		}
		bool tmp13 = tmp12;
		bool tmp14;
		if ((tmp13)){
			tmp14 = (destPoint->y == (int)0);
		}
		else{
			tmp14 = false;
		}
		bool tmp15 = tmp14;
		bool tmp16;
		if ((tmp15)){
			tmp16 = (alphaImage == null());
		}
		else{
			tmp16 = false;
		}
		bool tmp17 = tmp16;
		bool tmp18;
		if ((tmp17)){
			tmp18 = (alphaPoint == null());
		}
		else{
			tmp18 = false;
		}
		bool tmp19 = tmp18;
		bool tmp20;
		if ((tmp19)){
			tmp20 = (mergeAlpha == false);
		}
		else{
			tmp20 = false;
		}
		bool tmp21;
		if ((tmp20)){
			int tmp22 = image->get_format();
			int tmp23 = tmp22;
			int tmp24 = sourceImage->get_format();
			int tmp25 = tmp24;
			tmp21 = (tmp23 == tmp25);
		}
		else{
			tmp21 = false;
		}
		if ((tmp21)){
			::lime::utils::ArrayBufferView tmp22 = image->buffer->data;
			::lime::utils::ArrayBufferView _this = tmp22;
			::lime::utils::ArrayBufferView tmp23 = sourceImage->buffer->data;
			::lime::utils::ArrayBufferView view = tmp23;
			int offset = (int)0;
			bool tmp24 = (view != null());
			bool tmp25;
			if ((tmp24)){
				tmp25 = true;
			}
			else{
				tmp25 = false;
			}
			if ((tmp25)){
				int tmp26 = (offset * _this->bytesPerElement);
				::haxe::io::Bytes tmp27 = view->buffer;
				int tmp28 = view->byteOffset;
				int tmp29 = view->byteLength;
				_this->buffer->blit(tmp26,tmp27,tmp28,tmp29);
			}
			else{
				bool tmp26 = false;
				bool tmp27;
				if ((tmp26)){
					tmp27 = (view == null());
				}
				else{
					tmp27 = false;
				}
				if ((tmp27)){
					int tmp28 = offset;
					_this->copyFromArray(((Array< Float >)(null())),tmp28);
				}
				else{
					HX_STACK_DO_THROW(HX_HCSTRING("Invalid .set call. either view, or array must be not-null.","\x64","\xba","\xb7","\x6c"));
				}
			}
		}
		else{
			bool tmp22 = ::lime::_system::CFFI_obj::enabled;
			if ((tmp22)){
				::lime::_backend::native::NativeCFFI_obj::cffi_lime_image_data_util_copy_pixels.call(hx::DynamicPtr(image),hx::DynamicPtr(sourceImage),hx::DynamicPtr(sourceRect),hx::DynamicPtr(destPoint),hx::DynamicPtr(alphaImage),hx::DynamicPtr(alphaPoint),mergeAlpha);
			}
			else{
				::lime::utils::ArrayBufferView tmp23 = sourceImage->buffer->data;
				::lime::utils::ArrayBufferView sourceData = tmp23;
				::lime::utils::ArrayBufferView tmp24 = image->buffer->data;
				::lime::utils::ArrayBufferView destData = tmp24;
				bool tmp25 = (sourceData == null());
				bool tmp26 = !(tmp25);
				bool tmp27;
				if ((tmp26)){
					tmp27 = (destData == null());
				}
				else{
					tmp27 = true;
				}
				if ((tmp27)){
					return null();
				}
				::lime::graphics::utils::_ImageDataUtil::ImageDataView tmp28 = ::lime::graphics::utils::_ImageDataUtil::ImageDataView_obj::__new(sourceImage,sourceRect);
				::lime::graphics::utils::_ImageDataUtil::ImageDataView sourceView = tmp28;
				::lime::graphics::Image tmp29 = image;
				::lime::math::Rectangle tmp30 = ::lime::math::Rectangle_obj::__new(destPoint->x,destPoint->y,sourceView->width,sourceView->height);
				::lime::graphics::utils::_ImageDataUtil::ImageDataView tmp31 = ::lime::graphics::utils::_ImageDataUtil::ImageDataView_obj::__new(tmp29,tmp30);
				::lime::graphics::utils::_ImageDataUtil::ImageDataView destView = tmp31;
				int tmp32 = sourceImage->buffer->format;
				int sourceFormat = tmp32;
				int tmp33 = image->buffer->format;
				int destFormat = tmp33;
				bool tmp34 = sourceImage->buffer->premultiplied;
				bool sourcePremultiplied = tmp34;
				bool tmp35 = image->buffer->premultiplied;
				bool destPremultiplied = tmp35;
				int tmp36 = sourceImage->buffer->bitsPerPixel;
				Float tmp37 = (Float(tmp36) / Float((int)8));
				int tmp38 = ::Std_obj::_int(tmp37);
				int sourceBytesPerPixel = tmp38;
				int tmp39 = image->buffer->bitsPerPixel;
				Float tmp40 = (Float(tmp39) / Float((int)8));
				int tmp41 = ::Std_obj::_int(tmp40);
				int destBytesPerPixel = tmp41;
				int sourcePosition;
				int destPosition;
				int sourcePixel;
				bool tmp42 = mergeAlpha;
				bool tmp43 = tmp42;
				bool tmp44 = !(tmp43);
				bool tmp45 = !(tmp44);
				bool tmp46;
				if ((tmp45)){
					bool tmp47 = sourceImage->get_transparent();
					bool tmp48 = tmp47;
					bool tmp49 = tmp48;
					tmp46 = !(tmp49);
				}
				else{
					tmp46 = true;
				}
				if ((tmp46)){
					bool tmp47 = (sourceFormat == destFormat);
					bool tmp48 = tmp47;
					bool tmp49;
					if ((tmp48)){
						tmp49 = (sourcePremultiplied == destPremultiplied);
					}
					else{
						tmp49 = false;
					}
					bool tmp50;
					if ((tmp49)){
						tmp50 = (sourceBytesPerPixel == destBytesPerPixel);
					}
					else{
						tmp50 = false;
					}
					if ((tmp50)){
						int _g1 = (int)0;
						int _g = destView->height;
						while((true)){
							bool tmp51 = (_g1 < _g);
							bool tmp52 = !(tmp51);
							if ((tmp52)){
								break;
							}
							int tmp53 = (_g1)++;
							int y = tmp53;
							int tmp54 = sourceView->offset;
							int tmp55 = (sourceView->stride * y);
							int tmp56 = (tmp54 + tmp55);
							sourcePosition = tmp56;
							int tmp57 = destView->offset;
							int tmp58 = (destView->stride * y);
							int tmp59 = (tmp57 + tmp58);
							destPosition = tmp59;
							int tmp60 = destPosition;
							::haxe::io::Bytes tmp61 = sourceData->buffer;
							int tmp62 = sourcePosition;
							int tmp63 = (destView->width * destBytesPerPixel);
							destData->buffer->blit(tmp60,tmp61,tmp62,tmp63);
						}
					}
					else{
						int _g1 = (int)0;
						int _g = destView->height;
						while((true)){
							bool tmp51 = (_g1 < _g);
							bool tmp52 = !(tmp51);
							if ((tmp52)){
								break;
							}
							int tmp53 = (_g1)++;
							int y = tmp53;
							int tmp54 = sourceView->offset;
							int tmp55 = (sourceView->stride * y);
							int tmp56 = (tmp54 + tmp55);
							sourcePosition = tmp56;
							int tmp57 = destView->offset;
							int tmp58 = (destView->stride * y);
							int tmp59 = (tmp57 + tmp58);
							destPosition = tmp59;
							{
								int _g3 = (int)0;
								int _g2 = destView->width;
								while((true)){
									bool tmp60 = (_g3 < _g2);
									bool tmp61 = !(tmp60);
									if ((tmp61)){
										break;
									}
									int tmp62 = (_g3)++;
									int x = tmp62;
									{
										int tmp63 = sourceFormat;
										switch( (int)(tmp63)){
											case (int)2: {
												int tmp64 = ::__hxcpp_memory_get_byte(sourceData->buffer->b,(sourceData->byteOffset + ((sourcePosition + (int)2))));
												Dynamic tmp65 = (int(tmp64) & int((int)255));
												int r = tmp65;
												int tmp66 = ::__hxcpp_memory_get_byte(sourceData->buffer->b,(sourceData->byteOffset + ((sourcePosition + (int)1))));
												Dynamic tmp67 = (int(tmp66) & int((int)255));
												int g = tmp67;
												int tmp68 = ::__hxcpp_memory_get_byte(sourceData->buffer->b,(sourceData->byteOffset + sourcePosition));
												Dynamic tmp69 = (int(tmp68) & int((int)255));
												int b = tmp69;
												int tmp70 = ::__hxcpp_memory_get_byte(sourceData->buffer->b,(sourceData->byteOffset + ((sourcePosition + (int)3))));
												Dynamic tmp71 = (int(tmp70) & int((int)255));
												int a = tmp71;
												int tmp72 = (int(r) & int((int)255));
												int tmp73 = (int(tmp72) << int((int)24));
												int tmp74 = (int(g) & int((int)255));
												int tmp75 = (int(tmp74) << int((int)16));
												int tmp76 = (int(tmp73) | int(tmp75));
												int tmp77 = (int(b) & int((int)255));
												int tmp78 = (int(tmp77) << int((int)8));
												int tmp79 = (int(tmp76) | int(tmp78));
												int tmp80 = (int(a) & int((int)255));
												int tmp81 = (int(tmp79) | int(tmp80));
												sourcePixel = tmp81;
											}
											;break;
											case (int)0: {
												int tmp64 = ::__hxcpp_memory_get_byte(sourceData->buffer->b,(sourceData->byteOffset + sourcePosition));
												Dynamic tmp65 = (int(tmp64) & int((int)255));
												int r = tmp65;
												int tmp66 = ::__hxcpp_memory_get_byte(sourceData->buffer->b,(sourceData->byteOffset + ((sourcePosition + (int)1))));
												Dynamic tmp67 = (int(tmp66) & int((int)255));
												int g = tmp67;
												int tmp68 = ::__hxcpp_memory_get_byte(sourceData->buffer->b,(sourceData->byteOffset + ((sourcePosition + (int)2))));
												Dynamic tmp69 = (int(tmp68) & int((int)255));
												int b = tmp69;
												int tmp70 = ::__hxcpp_memory_get_byte(sourceData->buffer->b,(sourceData->byteOffset + ((sourcePosition + (int)3))));
												Dynamic tmp71 = (int(tmp70) & int((int)255));
												int a = tmp71;
												int tmp72 = (int(r) & int((int)255));
												int tmp73 = (int(tmp72) << int((int)24));
												int tmp74 = (int(g) & int((int)255));
												int tmp75 = (int(tmp74) << int((int)16));
												int tmp76 = (int(tmp73) | int(tmp75));
												int tmp77 = (int(b) & int((int)255));
												int tmp78 = (int(tmp77) << int((int)8));
												int tmp79 = (int(tmp76) | int(tmp78));
												int tmp80 = (int(a) & int((int)255));
												int tmp81 = (int(tmp79) | int(tmp80));
												sourcePixel = tmp81;
											}
											;break;
											case (int)1: {
												int tmp64 = ::__hxcpp_memory_get_byte(sourceData->buffer->b,(sourceData->byteOffset + ((sourcePosition + (int)1))));
												Dynamic tmp65 = (int(tmp64) & int((int)255));
												int r = tmp65;
												int tmp66 = ::__hxcpp_memory_get_byte(sourceData->buffer->b,(sourceData->byteOffset + ((sourcePosition + (int)2))));
												Dynamic tmp67 = (int(tmp66) & int((int)255));
												int g = tmp67;
												int tmp68 = ::__hxcpp_memory_get_byte(sourceData->buffer->b,(sourceData->byteOffset + ((sourcePosition + (int)3))));
												Dynamic tmp69 = (int(tmp68) & int((int)255));
												int b = tmp69;
												int tmp70 = ::__hxcpp_memory_get_byte(sourceData->buffer->b,(sourceData->byteOffset + sourcePosition));
												Dynamic tmp71 = (int(tmp70) & int((int)255));
												int a = tmp71;
												int tmp72 = (int(r) & int((int)255));
												int tmp73 = (int(tmp72) << int((int)24));
												int tmp74 = (int(g) & int((int)255));
												int tmp75 = (int(tmp74) << int((int)16));
												int tmp76 = (int(tmp73) | int(tmp75));
												int tmp77 = (int(b) & int((int)255));
												int tmp78 = (int(tmp77) << int((int)8));
												int tmp79 = (int(tmp76) | int(tmp78));
												int tmp80 = (int(a) & int((int)255));
												int tmp81 = (int(tmp79) | int(tmp80));
												sourcePixel = tmp81;
											}
											;break;
										}
										bool tmp64 = sourcePremultiplied;
										if ((tmp64)){
											int tmp65 = (int(sourcePixel) & int((int)255));
											int tmp66 = tmp65;
											bool tmp67 = (tmp66 != (int)0);
											bool tmp68;
											if ((tmp67)){
												int tmp69 = (int(sourcePixel) & int((int)255));
												int tmp70 = tmp69;
												int tmp71 = tmp70;
												tmp68 = (tmp71 != (int)255);
											}
											else{
												tmp68 = false;
											}
											if ((tmp68)){
												int tmp69 = (int(sourcePixel) & int((int)255));
												int tmp70 = tmp69;
												Float tmp71 = (Float(((Float)255.0)) / Float(tmp70));
												::lime::math::color::_RGBA::RGBA_Impl__obj::unmult = tmp71;
												{
													Dynamic tmp72;
													{
														::lime::utils::ArrayBufferView tmp73 = ::lime::math::color::_RGBA::RGBA_Impl__obj::__clamp;
														::lime::utils::ArrayBufferView this1 = tmp73;
														int tmp74 = (int(sourcePixel) >> int((int)24));
														int tmp75 = tmp74;
														int tmp76 = (int(tmp75) & int((int)255));
														int tmp77 = tmp76;
														Float tmp78 = ::lime::math::color::_RGBA::RGBA_Impl__obj::unmult;
														Float tmp79 = (tmp77 * tmp78);
														int tmp80 = ::Math_obj::round(tmp79);
														int idx = tmp80;
														int tmp81 = ::__hxcpp_memory_get_byte(this1->buffer->b,(this1->byteOffset + idx));
														tmp72 = (int(tmp81) & int((int)255));
													}
													int r = tmp72;
													Dynamic tmp73;
													{
														::lime::utils::ArrayBufferView tmp74 = ::lime::math::color::_RGBA::RGBA_Impl__obj::__clamp;
														::lime::utils::ArrayBufferView this1 = tmp74;
														int tmp75 = (int(sourcePixel) >> int((int)16));
														int tmp76 = tmp75;
														int tmp77 = (int(tmp76) & int((int)255));
														int tmp78 = tmp77;
														Float tmp79 = ::lime::math::color::_RGBA::RGBA_Impl__obj::unmult;
														Float tmp80 = (tmp78 * tmp79);
														int tmp81 = ::Math_obj::round(tmp80);
														int idx = tmp81;
														int tmp82 = ::__hxcpp_memory_get_byte(this1->buffer->b,(this1->byteOffset + idx));
														tmp73 = (int(tmp82) & int((int)255));
													}
													int g = tmp73;
													Dynamic tmp74;
													{
														::lime::utils::ArrayBufferView tmp75 = ::lime::math::color::_RGBA::RGBA_Impl__obj::__clamp;
														::lime::utils::ArrayBufferView this1 = tmp75;
														int tmp76 = (int(sourcePixel) >> int((int)8));
														int tmp77 = tmp76;
														int tmp78 = (int(tmp77) & int((int)255));
														int tmp79 = tmp78;
														Float tmp80 = ::lime::math::color::_RGBA::RGBA_Impl__obj::unmult;
														Float tmp81 = (tmp79 * tmp80);
														int tmp82 = ::Math_obj::round(tmp81);
														int idx = tmp82;
														int tmp83 = ::__hxcpp_memory_get_byte(this1->buffer->b,(this1->byteOffset + idx));
														tmp74 = (int(tmp83) & int((int)255));
													}
													int b = tmp74;
													int tmp75 = (int(r) & int((int)255));
													int tmp76 = (int(tmp75) << int((int)24));
													int tmp77 = (int(g) & int((int)255));
													int tmp78 = (int(tmp77) << int((int)16));
													int tmp79 = (int(tmp76) | int(tmp78));
													int tmp80 = (int(b) & int((int)255));
													int tmp81 = (int(tmp80) << int((int)8));
													int tmp82 = (int(tmp79) | int(tmp81));
													int tmp83 = (int(sourcePixel) & int((int)255));
													int tmp84 = tmp83;
													int tmp85 = (int(tmp84) & int((int)255));
													int tmp86 = (int(tmp82) | int(tmp85));
													sourcePixel = tmp86;
												}
											}
										}
									}
									{
										bool tmp63 = destPremultiplied;
										if ((tmp63)){
											int tmp64 = (int(sourcePixel) & int((int)255));
											int tmp65 = tmp64;
											bool tmp66 = (tmp65 == (int)0);
											if ((tmp66)){
												bool tmp67 = (sourcePixel != (int)0);
												if ((tmp67)){
													sourcePixel = (int)0;
												}
											}
											else{
												int tmp67 = (int(sourcePixel) & int((int)255));
												int tmp68 = tmp67;
												bool tmp69 = (tmp68 != (int)255);
												if ((tmp69)){
													Dynamic tmp70;
													{
														::lime::utils::ArrayBufferView tmp71 = ::lime::math::color::_RGBA::RGBA_Impl__obj::__alpha16;
														::lime::utils::ArrayBufferView this1 = tmp71;
														tmp70 = ::__hxcpp_memory_get_ui32(this1->buffer->b,(this1->byteOffset + (((int(sourcePixel) & int((int)255))) * (int)4)));
													}
													::lime::math::color::_RGBA::RGBA_Impl__obj::a16 = tmp70;
													{
														int tmp71 = (int(sourcePixel) >> int((int)24));
														int tmp72 = tmp71;
														int tmp73 = (int(tmp72) & int((int)255));
														int tmp74 = tmp73;
														int tmp75 = ::lime::math::color::_RGBA::RGBA_Impl__obj::a16;
														int tmp76 = (tmp74 * tmp75);
														int tmp77 = (int(tmp76) >> int((int)16));
														int tmp78 = (int(tmp77) & int((int)255));
														int tmp79 = (int(tmp78) << int((int)24));
														int tmp80 = (int(sourcePixel) >> int((int)16));
														int tmp81 = tmp80;
														int tmp82 = (int(tmp81) & int((int)255));
														int tmp83 = tmp82;
														int tmp84 = ::lime::math::color::_RGBA::RGBA_Impl__obj::a16;
														int tmp85 = (tmp83 * tmp84);
														int tmp86 = (int(tmp85) >> int((int)16));
														int tmp87 = (int(tmp86) & int((int)255));
														int tmp88 = (int(tmp87) << int((int)16));
														int tmp89 = (int(tmp79) | int(tmp88));
														int tmp90 = (int(sourcePixel) >> int((int)8));
														int tmp91 = tmp90;
														int tmp92 = (int(tmp91) & int((int)255));
														int tmp93 = tmp92;
														int tmp94 = ::lime::math::color::_RGBA::RGBA_Impl__obj::a16;
														int tmp95 = (tmp93 * tmp94);
														int tmp96 = (int(tmp95) >> int((int)16));
														int tmp97 = (int(tmp96) & int((int)255));
														int tmp98 = (int(tmp97) << int((int)8));
														int tmp99 = (int(tmp89) | int(tmp98));
														int tmp100 = (int(sourcePixel) & int((int)255));
														int tmp101 = tmp100;
														int tmp102 = (int(tmp101) & int((int)255));
														int tmp103 = (int(tmp99) | int(tmp102));
														sourcePixel = tmp103;
													}
												}
											}
										}
										int tmp64 = destFormat;
										switch( (int)(tmp64)){
											case (int)2: {
												{
													int tmp65 = (int(sourcePixel) >> int((int)8));
													int tmp66 = tmp65;
													int tmp67 = (int(tmp66) & int((int)255));
													int val = tmp67;
													::__hxcpp_memory_set_byte(destData->buffer->b,(destData->byteOffset + destPosition),val);
													val;
												}
												{
													int tmp65 = (int(sourcePixel) >> int((int)16));
													int tmp66 = tmp65;
													int tmp67 = (int(tmp66) & int((int)255));
													int val = tmp67;
													::__hxcpp_memory_set_byte(destData->buffer->b,(destData->byteOffset + ((destPosition + (int)1))),val);
													val;
												}
												{
													int tmp65 = (int(sourcePixel) >> int((int)24));
													int tmp66 = tmp65;
													int tmp67 = (int(tmp66) & int((int)255));
													int val = tmp67;
													::__hxcpp_memory_set_byte(destData->buffer->b,(destData->byteOffset + ((destPosition + (int)2))),val);
													val;
												}
												{
													int tmp65 = (int(sourcePixel) & int((int)255));
													int val = tmp65;
													::__hxcpp_memory_set_byte(destData->buffer->b,(destData->byteOffset + ((destPosition + (int)3))),val);
													val;
												}
											}
											;break;
											case (int)0: {
												{
													int tmp65 = (int(sourcePixel) >> int((int)24));
													int tmp66 = tmp65;
													int tmp67 = (int(tmp66) & int((int)255));
													int val = tmp67;
													::__hxcpp_memory_set_byte(destData->buffer->b,(destData->byteOffset + destPosition),val);
													val;
												}
												{
													int tmp65 = (int(sourcePixel) >> int((int)16));
													int tmp66 = tmp65;
													int tmp67 = (int(tmp66) & int((int)255));
													int val = tmp67;
													::__hxcpp_memory_set_byte(destData->buffer->b,(destData->byteOffset + ((destPosition + (int)1))),val);
													val;
												}
												{
													int tmp65 = (int(sourcePixel) >> int((int)8));
													int tmp66 = tmp65;
													int tmp67 = (int(tmp66) & int((int)255));
													int val = tmp67;
													::__hxcpp_memory_set_byte(destData->buffer->b,(destData->byteOffset + ((destPosition + (int)2))),val);
													val;
												}
												{
													int tmp65 = (int(sourcePixel) & int((int)255));
													int val = tmp65;
													::__hxcpp_memory_set_byte(destData->buffer->b,(destData->byteOffset + ((destPosition + (int)3))),val);
													val;
												}
											}
											;break;
											case (int)1: {
												{
													int tmp65 = (int(sourcePixel) & int((int)255));
													int val = tmp65;
													::__hxcpp_memory_set_byte(destData->buffer->b,(destData->byteOffset + destPosition),val);
													val;
												}
												{
													int tmp65 = (int(sourcePixel) >> int((int)24));
													int tmp66 = tmp65;
													int tmp67 = (int(tmp66) & int((int)255));
													int val = tmp67;
													::__hxcpp_memory_set_byte(destData->buffer->b,(destData->byteOffset + ((destPosition + (int)1))),val);
													val;
												}
												{
													int tmp65 = (int(sourcePixel) >> int((int)16));
													int tmp66 = tmp65;
													int tmp67 = (int(tmp66) & int((int)255));
													int val = tmp67;
													::__hxcpp_memory_set_byte(destData->buffer->b,(destData->byteOffset + ((destPosition + (int)2))),val);
													val;
												}
												{
													int tmp65 = (int(sourcePixel) >> int((int)8));
													int tmp66 = tmp65;
													int tmp67 = (int(tmp66) & int((int)255));
													int val = tmp67;
													::__hxcpp_memory_set_byte(destData->buffer->b,(destData->byteOffset + ((destPosition + (int)3))),val);
													val;
												}
											}
											;break;
										}
									}
									hx::AddEq(sourcePosition,(int)4);
									hx::AddEq(destPosition,(int)4);
								}
							}
						}
					}
				}
				else{
					Float sourceAlpha;
					Float destAlpha;
					Float oneMinusSourceAlpha;
					Float blendAlpha;
					int destPixel;
					bool tmp47 = (alphaImage == null());
					if ((tmp47)){
						int _g1 = (int)0;
						int _g = destView->height;
						while((true)){
							bool tmp48 = (_g1 < _g);
							bool tmp49 = !(tmp48);
							if ((tmp49)){
								break;
							}
							int tmp50 = (_g1)++;
							int y = tmp50;
							int tmp51 = sourceView->offset;
							int tmp52 = (sourceView->stride * y);
							int tmp53 = (tmp51 + tmp52);
							sourcePosition = tmp53;
							int tmp54 = destView->offset;
							int tmp55 = (destView->stride * y);
							int tmp56 = (tmp54 + tmp55);
							destPosition = tmp56;
							{
								int _g3 = (int)0;
								int _g2 = destView->width;
								while((true)){
									bool tmp57 = (_g3 < _g2);
									bool tmp58 = !(tmp57);
									if ((tmp58)){
										break;
									}
									int tmp59 = (_g3)++;
									int x = tmp59;
									{
										int tmp60 = sourceFormat;
										switch( (int)(tmp60)){
											case (int)2: {
												int tmp61 = ::__hxcpp_memory_get_byte(sourceData->buffer->b,(sourceData->byteOffset + ((sourcePosition + (int)2))));
												Dynamic tmp62 = (int(tmp61) & int((int)255));
												int r = tmp62;
												int tmp63 = ::__hxcpp_memory_get_byte(sourceData->buffer->b,(sourceData->byteOffset + ((sourcePosition + (int)1))));
												Dynamic tmp64 = (int(tmp63) & int((int)255));
												int g = tmp64;
												int tmp65 = ::__hxcpp_memory_get_byte(sourceData->buffer->b,(sourceData->byteOffset + sourcePosition));
												Dynamic tmp66 = (int(tmp65) & int((int)255));
												int b = tmp66;
												int tmp67 = ::__hxcpp_memory_get_byte(sourceData->buffer->b,(sourceData->byteOffset + ((sourcePosition + (int)3))));
												Dynamic tmp68 = (int(tmp67) & int((int)255));
												int a = tmp68;
												int tmp69 = (int(r) & int((int)255));
												int tmp70 = (int(tmp69) << int((int)24));
												int tmp71 = (int(g) & int((int)255));
												int tmp72 = (int(tmp71) << int((int)16));
												int tmp73 = (int(tmp70) | int(tmp72));
												int tmp74 = (int(b) & int((int)255));
												int tmp75 = (int(tmp74) << int((int)8));
												int tmp76 = (int(tmp73) | int(tmp75));
												int tmp77 = (int(a) & int((int)255));
												int tmp78 = (int(tmp76) | int(tmp77));
												sourcePixel = tmp78;
											}
											;break;
											case (int)0: {
												int tmp61 = ::__hxcpp_memory_get_byte(sourceData->buffer->b,(sourceData->byteOffset + sourcePosition));
												Dynamic tmp62 = (int(tmp61) & int((int)255));
												int r = tmp62;
												int tmp63 = ::__hxcpp_memory_get_byte(sourceData->buffer->b,(sourceData->byteOffset + ((sourcePosition + (int)1))));
												Dynamic tmp64 = (int(tmp63) & int((int)255));
												int g = tmp64;
												int tmp65 = ::__hxcpp_memory_get_byte(sourceData->buffer->b,(sourceData->byteOffset + ((sourcePosition + (int)2))));
												Dynamic tmp66 = (int(tmp65) & int((int)255));
												int b = tmp66;
												int tmp67 = ::__hxcpp_memory_get_byte(sourceData->buffer->b,(sourceData->byteOffset + ((sourcePosition + (int)3))));
												Dynamic tmp68 = (int(tmp67) & int((int)255));
												int a = tmp68;
												int tmp69 = (int(r) & int((int)255));
												int tmp70 = (int(tmp69) << int((int)24));
												int tmp71 = (int(g) & int((int)255));
												int tmp72 = (int(tmp71) << int((int)16));
												int tmp73 = (int(tmp70) | int(tmp72));
												int tmp74 = (int(b) & int((int)255));
												int tmp75 = (int(tmp74) << int((int)8));
												int tmp76 = (int(tmp73) | int(tmp75));
												int tmp77 = (int(a) & int((int)255));
												int tmp78 = (int(tmp76) | int(tmp77));
												sourcePixel = tmp78;
											}
											;break;
											case (int)1: {
												int tmp61 = ::__hxcpp_memory_get_byte(sourceData->buffer->b,(sourceData->byteOffset + ((sourcePosition + (int)1))));
												Dynamic tmp62 = (int(tmp61) & int((int)255));
												int r = tmp62;
												int tmp63 = ::__hxcpp_memory_get_byte(sourceData->buffer->b,(sourceData->byteOffset + ((sourcePosition + (int)2))));
												Dynamic tmp64 = (int(tmp63) & int((int)255));
												int g = tmp64;
												int tmp65 = ::__hxcpp_memory_get_byte(sourceData->buffer->b,(sourceData->byteOffset + ((sourcePosition + (int)3))));
												Dynamic tmp66 = (int(tmp65) & int((int)255));
												int b = tmp66;
												int tmp67 = ::__hxcpp_memory_get_byte(sourceData->buffer->b,(sourceData->byteOffset + sourcePosition));
												Dynamic tmp68 = (int(tmp67) & int((int)255));
												int a = tmp68;
												int tmp69 = (int(r) & int((int)255));
												int tmp70 = (int(tmp69) << int((int)24));
												int tmp71 = (int(g) & int((int)255));
												int tmp72 = (int(tmp71) << int((int)16));
												int tmp73 = (int(tmp70) | int(tmp72));
												int tmp74 = (int(b) & int((int)255));
												int tmp75 = (int(tmp74) << int((int)8));
												int tmp76 = (int(tmp73) | int(tmp75));
												int tmp77 = (int(a) & int((int)255));
												int tmp78 = (int(tmp76) | int(tmp77));
												sourcePixel = tmp78;
											}
											;break;
										}
										bool tmp61 = sourcePremultiplied;
										if ((tmp61)){
											int tmp62 = (int(sourcePixel) & int((int)255));
											int tmp63 = tmp62;
											bool tmp64 = (tmp63 != (int)0);
											bool tmp65;
											if ((tmp64)){
												int tmp66 = (int(sourcePixel) & int((int)255));
												int tmp67 = tmp66;
												int tmp68 = tmp67;
												tmp65 = (tmp68 != (int)255);
											}
											else{
												tmp65 = false;
											}
											if ((tmp65)){
												int tmp66 = (int(sourcePixel) & int((int)255));
												int tmp67 = tmp66;
												Float tmp68 = (Float(((Float)255.0)) / Float(tmp67));
												::lime::math::color::_RGBA::RGBA_Impl__obj::unmult = tmp68;
												{
													Dynamic tmp69;
													{
														::lime::utils::ArrayBufferView tmp70 = ::lime::math::color::_RGBA::RGBA_Impl__obj::__clamp;
														::lime::utils::ArrayBufferView this1 = tmp70;
														int tmp71 = (int(sourcePixel) >> int((int)24));
														int tmp72 = tmp71;
														int tmp73 = (int(tmp72) & int((int)255));
														int tmp74 = tmp73;
														Float tmp75 = ::lime::math::color::_RGBA::RGBA_Impl__obj::unmult;
														Float tmp76 = (tmp74 * tmp75);
														int tmp77 = ::Math_obj::round(tmp76);
														int idx = tmp77;
														int tmp78 = ::__hxcpp_memory_get_byte(this1->buffer->b,(this1->byteOffset + idx));
														tmp69 = (int(tmp78) & int((int)255));
													}
													int r = tmp69;
													Dynamic tmp70;
													{
														::lime::utils::ArrayBufferView tmp71 = ::lime::math::color::_RGBA::RGBA_Impl__obj::__clamp;
														::lime::utils::ArrayBufferView this1 = tmp71;
														int tmp72 = (int(sourcePixel) >> int((int)16));
														int tmp73 = tmp72;
														int tmp74 = (int(tmp73) & int((int)255));
														int tmp75 = tmp74;
														Float tmp76 = ::lime::math::color::_RGBA::RGBA_Impl__obj::unmult;
														Float tmp77 = (tmp75 * tmp76);
														int tmp78 = ::Math_obj::round(tmp77);
														int idx = tmp78;
														int tmp79 = ::__hxcpp_memory_get_byte(this1->buffer->b,(this1->byteOffset + idx));
														tmp70 = (int(tmp79) & int((int)255));
													}
													int g = tmp70;
													Dynamic tmp71;
													{
														::lime::utils::ArrayBufferView tmp72 = ::lime::math::color::_RGBA::RGBA_Impl__obj::__clamp;
														::lime::utils::ArrayBufferView this1 = tmp72;
														int tmp73 = (int(sourcePixel) >> int((int)8));
														int tmp74 = tmp73;
														int tmp75 = (int(tmp74) & int((int)255));
														int tmp76 = tmp75;
														Float tmp77 = ::lime::math::color::_RGBA::RGBA_Impl__obj::unmult;
														Float tmp78 = (tmp76 * tmp77);
														int tmp79 = ::Math_obj::round(tmp78);
														int idx = tmp79;
														int tmp80 = ::__hxcpp_memory_get_byte(this1->buffer->b,(this1->byteOffset + idx));
														tmp71 = (int(tmp80) & int((int)255));
													}
													int b = tmp71;
													int tmp72 = (int(r) & int((int)255));
													int tmp73 = (int(tmp72) << int((int)24));
													int tmp74 = (int(g) & int((int)255));
													int tmp75 = (int(tmp74) << int((int)16));
													int tmp76 = (int(tmp73) | int(tmp75));
													int tmp77 = (int(b) & int((int)255));
													int tmp78 = (int(tmp77) << int((int)8));
													int tmp79 = (int(tmp76) | int(tmp78));
													int tmp80 = (int(sourcePixel) & int((int)255));
													int tmp81 = tmp80;
													int tmp82 = (int(tmp81) & int((int)255));
													int tmp83 = (int(tmp79) | int(tmp82));
													sourcePixel = tmp83;
												}
											}
										}
									}
									{
										int tmp60 = destFormat;
										switch( (int)(tmp60)){
											case (int)2: {
												int tmp61 = ::__hxcpp_memory_get_byte(destData->buffer->b,(destData->byteOffset + ((destPosition + (int)2))));
												Dynamic tmp62 = (int(tmp61) & int((int)255));
												int r = tmp62;
												int tmp63 = ::__hxcpp_memory_get_byte(destData->buffer->b,(destData->byteOffset + ((destPosition + (int)1))));
												Dynamic tmp64 = (int(tmp63) & int((int)255));
												int g = tmp64;
												int tmp65 = ::__hxcpp_memory_get_byte(destData->buffer->b,(destData->byteOffset + destPosition));
												Dynamic tmp66 = (int(tmp65) & int((int)255));
												int b = tmp66;
												int tmp67 = ::__hxcpp_memory_get_byte(destData->buffer->b,(destData->byteOffset + ((destPosition + (int)3))));
												Dynamic tmp68 = (int(tmp67) & int((int)255));
												int a = tmp68;
												int tmp69 = (int(r) & int((int)255));
												int tmp70 = (int(tmp69) << int((int)24));
												int tmp71 = (int(g) & int((int)255));
												int tmp72 = (int(tmp71) << int((int)16));
												int tmp73 = (int(tmp70) | int(tmp72));
												int tmp74 = (int(b) & int((int)255));
												int tmp75 = (int(tmp74) << int((int)8));
												int tmp76 = (int(tmp73) | int(tmp75));
												int tmp77 = (int(a) & int((int)255));
												int tmp78 = (int(tmp76) | int(tmp77));
												destPixel = tmp78;
											}
											;break;
											case (int)0: {
												int tmp61 = ::__hxcpp_memory_get_byte(destData->buffer->b,(destData->byteOffset + destPosition));
												Dynamic tmp62 = (int(tmp61) & int((int)255));
												int r = tmp62;
												int tmp63 = ::__hxcpp_memory_get_byte(destData->buffer->b,(destData->byteOffset + ((destPosition + (int)1))));
												Dynamic tmp64 = (int(tmp63) & int((int)255));
												int g = tmp64;
												int tmp65 = ::__hxcpp_memory_get_byte(destData->buffer->b,(destData->byteOffset + ((destPosition + (int)2))));
												Dynamic tmp66 = (int(tmp65) & int((int)255));
												int b = tmp66;
												int tmp67 = ::__hxcpp_memory_get_byte(destData->buffer->b,(destData->byteOffset + ((destPosition + (int)3))));
												Dynamic tmp68 = (int(tmp67) & int((int)255));
												int a = tmp68;
												int tmp69 = (int(r) & int((int)255));
												int tmp70 = (int(tmp69) << int((int)24));
												int tmp71 = (int(g) & int((int)255));
												int tmp72 = (int(tmp71) << int((int)16));
												int tmp73 = (int(tmp70) | int(tmp72));
												int tmp74 = (int(b) & int((int)255));
												int tmp75 = (int(tmp74) << int((int)8));
												int tmp76 = (int(tmp73) | int(tmp75));
												int tmp77 = (int(a) & int((int)255));
												int tmp78 = (int(tmp76) | int(tmp77));
												destPixel = tmp78;
											}
											;break;
											case (int)1: {
												int tmp61 = ::__hxcpp_memory_get_byte(destData->buffer->b,(destData->byteOffset + ((destPosition + (int)1))));
												Dynamic tmp62 = (int(tmp61) & int((int)255));
												int r = tmp62;
												int tmp63 = ::__hxcpp_memory_get_byte(destData->buffer->b,(destData->byteOffset + ((destPosition + (int)2))));
												Dynamic tmp64 = (int(tmp63) & int((int)255));
												int g = tmp64;
												int tmp65 = ::__hxcpp_memory_get_byte(destData->buffer->b,(destData->byteOffset + ((destPosition + (int)3))));
												Dynamic tmp66 = (int(tmp65) & int((int)255));
												int b = tmp66;
												int tmp67 = ::__hxcpp_memory_get_byte(destData->buffer->b,(destData->byteOffset + destPosition));
												Dynamic tmp68 = (int(tmp67) & int((int)255));
												int a = tmp68;
												int tmp69 = (int(r) & int((int)255));
												int tmp70 = (int(tmp69) << int((int)24));
												int tmp71 = (int(g) & int((int)255));
												int tmp72 = (int(tmp71) << int((int)16));
												int tmp73 = (int(tmp70) | int(tmp72));
												int tmp74 = (int(b) & int((int)255));
												int tmp75 = (int(tmp74) << int((int)8));
												int tmp76 = (int(tmp73) | int(tmp75));
												int tmp77 = (int(a) & int((int)255));
												int tmp78 = (int(tmp76) | int(tmp77));
												destPixel = tmp78;
											}
											;break;
										}
										bool tmp61 = destPremultiplied;
										if ((tmp61)){
											int tmp62 = (int(destPixel) & int((int)255));
											int tmp63 = tmp62;
											bool tmp64 = (tmp63 != (int)0);
											bool tmp65;
											if ((tmp64)){
												int tmp66 = (int(destPixel) & int((int)255));
												int tmp67 = tmp66;
												int tmp68 = tmp67;
												tmp65 = (tmp68 != (int)255);
											}
											else{
												tmp65 = false;
											}
											if ((tmp65)){
												int tmp66 = (int(destPixel) & int((int)255));
												int tmp67 = tmp66;
												Float tmp68 = (Float(((Float)255.0)) / Float(tmp67));
												::lime::math::color::_RGBA::RGBA_Impl__obj::unmult = tmp68;
												{
													Dynamic tmp69;
													{
														::lime::utils::ArrayBufferView tmp70 = ::lime::math::color::_RGBA::RGBA_Impl__obj::__clamp;
														::lime::utils::ArrayBufferView this1 = tmp70;
														int tmp71 = (int(destPixel) >> int((int)24));
														int tmp72 = tmp71;
														int tmp73 = (int(tmp72) & int((int)255));
														int tmp74 = tmp73;
														Float tmp75 = ::lime::math::color::_RGBA::RGBA_Impl__obj::unmult;
														Float tmp76 = (tmp74 * tmp75);
														int tmp77 = ::Math_obj::round(tmp76);
														int idx = tmp77;
														int tmp78 = ::__hxcpp_memory_get_byte(this1->buffer->b,(this1->byteOffset + idx));
														tmp69 = (int(tmp78) & int((int)255));
													}
													int r = tmp69;
													Dynamic tmp70;
													{
														::lime::utils::ArrayBufferView tmp71 = ::lime::math::color::_RGBA::RGBA_Impl__obj::__clamp;
														::lime::utils::ArrayBufferView this1 = tmp71;
														int tmp72 = (int(destPixel) >> int((int)16));
														int tmp73 = tmp72;
														int tmp74 = (int(tmp73) & int((int)255));
														int tmp75 = tmp74;
														Float tmp76 = ::lime::math::color::_RGBA::RGBA_Impl__obj::unmult;
														Float tmp77 = (tmp75 * tmp76);
														int tmp78 = ::Math_obj::round(tmp77);
														int idx = tmp78;
														int tmp79 = ::__hxcpp_memory_get_byte(this1->buffer->b,(this1->byteOffset + idx));
														tmp70 = (int(tmp79) & int((int)255));
													}
													int g = tmp70;
													Dynamic tmp71;
													{
														::lime::utils::ArrayBufferView tmp72 = ::lime::math::color::_RGBA::RGBA_Impl__obj::__clamp;
														::lime::utils::ArrayBufferView this1 = tmp72;
														int tmp73 = (int(destPixel) >> int((int)8));
														int tmp74 = tmp73;
														int tmp75 = (int(tmp74) & int((int)255));
														int tmp76 = tmp75;
														Float tmp77 = ::lime::math::color::_RGBA::RGBA_Impl__obj::unmult;
														Float tmp78 = (tmp76 * tmp77);
														int tmp79 = ::Math_obj::round(tmp78);
														int idx = tmp79;
														int tmp80 = ::__hxcpp_memory_get_byte(this1->buffer->b,(this1->byteOffset + idx));
														tmp71 = (int(tmp80) & int((int)255));
													}
													int b = tmp71;
													int tmp72 = (int(r) & int((int)255));
													int tmp73 = (int(tmp72) << int((int)24));
													int tmp74 = (int(g) & int((int)255));
													int tmp75 = (int(tmp74) << int((int)16));
													int tmp76 = (int(tmp73) | int(tmp75));
													int tmp77 = (int(b) & int((int)255));
													int tmp78 = (int(tmp77) << int((int)8));
													int tmp79 = (int(tmp76) | int(tmp78));
													int tmp80 = (int(destPixel) & int((int)255));
													int tmp81 = tmp80;
													int tmp82 = (int(tmp81) & int((int)255));
													int tmp83 = (int(tmp79) | int(tmp82));
													destPixel = tmp83;
												}
											}
										}
									}
									int tmp60 = (int(sourcePixel) & int((int)255));
									int tmp61 = tmp60;
									Float tmp62 = (Float(tmp61) / Float(((Float)255.0)));
									sourceAlpha = tmp62;
									int tmp63 = (int(destPixel) & int((int)255));
									int tmp64 = tmp63;
									Float tmp65 = (Float(tmp64) / Float(((Float)255.0)));
									destAlpha = tmp65;
									Float tmp66 = ((int)1 - sourceAlpha);
									oneMinusSourceAlpha = tmp66;
									Float tmp67 = sourceAlpha;
									Float tmp68 = (destAlpha * oneMinusSourceAlpha);
									Float tmp69 = (tmp67 + tmp68);
									blendAlpha = tmp69;
									bool tmp70 = (blendAlpha == (int)0);
									if ((tmp70)){
										destPixel = (int)0;
									}
									else{
										{
											Dynamic tmp71;
											{
												::lime::utils::ArrayBufferView tmp72 = ::lime::math::color::_RGBA::RGBA_Impl__obj::__clamp;
												::lime::utils::ArrayBufferView this1 = tmp72;
												int tmp73 = (int(sourcePixel) >> int((int)24));
												int tmp74 = tmp73;
												int tmp75 = (int(tmp74) & int((int)255));
												int tmp76 = tmp75;
												Float tmp77 = sourceAlpha;
												Float tmp78 = (tmp76 * tmp77);
												int tmp79 = (int(destPixel) >> int((int)24));
												int tmp80 = tmp79;
												int tmp81 = (int(tmp80) & int((int)255));
												int tmp82 = tmp81;
												Float tmp83 = destAlpha;
												Float tmp84 = (tmp82 * tmp83);
												Float tmp85 = oneMinusSourceAlpha;
												Float tmp86 = (tmp84 * tmp85);
												Float tmp87 = (tmp78 + tmp86);
												Float tmp88 = blendAlpha;
												Float tmp89 = (Float(tmp87) / Float(tmp88));
												int tmp90 = ::Math_obj::round(tmp89);
												int idx = tmp90;
												int tmp91 = ::__hxcpp_memory_get_byte(this1->buffer->b,(this1->byteOffset + idx));
												tmp71 = (int(tmp91) & int((int)255));
											}
											int value = tmp71;
											{
												int tmp72 = (int(value) & int((int)255));
												int tmp73 = (int(tmp72) << int((int)24));
												int tmp74 = (int(destPixel) >> int((int)16));
												int tmp75 = tmp74;
												int tmp76 = (int(tmp75) & int((int)255));
												int tmp77 = tmp76;
												int tmp78 = (int(tmp77) & int((int)255));
												int tmp79 = (int(tmp78) << int((int)16));
												int tmp80 = (int(tmp73) | int(tmp79));
												int tmp81 = (int(destPixel) >> int((int)8));
												int tmp82 = tmp81;
												int tmp83 = (int(tmp82) & int((int)255));
												int tmp84 = tmp83;
												int tmp85 = (int(tmp84) & int((int)255));
												int tmp86 = (int(tmp85) << int((int)8));
												int tmp87 = (int(tmp80) | int(tmp86));
												int tmp88 = (int(destPixel) & int((int)255));
												int tmp89 = tmp88;
												int tmp90 = (int(tmp89) & int((int)255));
												int tmp91 = (int(tmp87) | int(tmp90));
												destPixel = tmp91;
											}
											value;
										}
										{
											Dynamic tmp71;
											{
												::lime::utils::ArrayBufferView tmp72 = ::lime::math::color::_RGBA::RGBA_Impl__obj::__clamp;
												::lime::utils::ArrayBufferView this1 = tmp72;
												int tmp73 = (int(sourcePixel) >> int((int)16));
												int tmp74 = tmp73;
												int tmp75 = (int(tmp74) & int((int)255));
												int tmp76 = tmp75;
												Float tmp77 = sourceAlpha;
												Float tmp78 = (tmp76 * tmp77);
												int tmp79 = (int(destPixel) >> int((int)16));
												int tmp80 = tmp79;
												int tmp81 = (int(tmp80) & int((int)255));
												int tmp82 = tmp81;
												Float tmp83 = destAlpha;
												Float tmp84 = (tmp82 * tmp83);
												Float tmp85 = oneMinusSourceAlpha;
												Float tmp86 = (tmp84 * tmp85);
												Float tmp87 = (tmp78 + tmp86);
												Float tmp88 = blendAlpha;
												Float tmp89 = (Float(tmp87) / Float(tmp88));
												int tmp90 = ::Math_obj::round(tmp89);
												int idx = tmp90;
												int tmp91 = ::__hxcpp_memory_get_byte(this1->buffer->b,(this1->byteOffset + idx));
												tmp71 = (int(tmp91) & int((int)255));
											}
											int value = tmp71;
											{
												int tmp72 = (int(destPixel) >> int((int)24));
												int tmp73 = tmp72;
												int tmp74 = (int(tmp73) & int((int)255));
												int tmp75 = tmp74;
												int tmp76 = (int(tmp75) & int((int)255));
												int tmp77 = (int(tmp76) << int((int)24));
												int tmp78 = (int(value) & int((int)255));
												int tmp79 = (int(tmp78) << int((int)16));
												int tmp80 = (int(tmp77) | int(tmp79));
												int tmp81 = (int(destPixel) >> int((int)8));
												int tmp82 = tmp81;
												int tmp83 = (int(tmp82) & int((int)255));
												int tmp84 = tmp83;
												int tmp85 = (int(tmp84) & int((int)255));
												int tmp86 = (int(tmp85) << int((int)8));
												int tmp87 = (int(tmp80) | int(tmp86));
												int tmp88 = (int(destPixel) & int((int)255));
												int tmp89 = tmp88;
												int tmp90 = (int(tmp89) & int((int)255));
												int tmp91 = (int(tmp87) | int(tmp90));
												destPixel = tmp91;
											}
											value;
										}
										{
											Dynamic tmp71;
											{
												::lime::utils::ArrayBufferView tmp72 = ::lime::math::color::_RGBA::RGBA_Impl__obj::__clamp;
												::lime::utils::ArrayBufferView this1 = tmp72;
												int tmp73 = (int(sourcePixel) >> int((int)8));
												int tmp74 = tmp73;
												int tmp75 = (int(tmp74) & int((int)255));
												int tmp76 = tmp75;
												Float tmp77 = sourceAlpha;
												Float tmp78 = (tmp76 * tmp77);
												int tmp79 = (int(destPixel) >> int((int)8));
												int tmp80 = tmp79;
												int tmp81 = (int(tmp80) & int((int)255));
												int tmp82 = tmp81;
												Float tmp83 = destAlpha;
												Float tmp84 = (tmp82 * tmp83);
												Float tmp85 = oneMinusSourceAlpha;
												Float tmp86 = (tmp84 * tmp85);
												Float tmp87 = (tmp78 + tmp86);
												Float tmp88 = blendAlpha;
												Float tmp89 = (Float(tmp87) / Float(tmp88));
												int tmp90 = ::Math_obj::round(tmp89);
												int idx = tmp90;
												int tmp91 = ::__hxcpp_memory_get_byte(this1->buffer->b,(this1->byteOffset + idx));
												tmp71 = (int(tmp91) & int((int)255));
											}
											int value = tmp71;
											{
												int tmp72 = (int(destPixel) >> int((int)24));
												int tmp73 = tmp72;
												int tmp74 = (int(tmp73) & int((int)255));
												int tmp75 = tmp74;
												int tmp76 = (int(tmp75) & int((int)255));
												int tmp77 = (int(tmp76) << int((int)24));
												int tmp78 = (int(destPixel) >> int((int)16));
												int tmp79 = tmp78;
												int tmp80 = (int(tmp79) & int((int)255));
												int tmp81 = tmp80;
												int tmp82 = (int(tmp81) & int((int)255));
												int tmp83 = (int(tmp82) << int((int)16));
												int tmp84 = (int(tmp77) | int(tmp83));
												int tmp85 = (int(value) & int((int)255));
												int tmp86 = (int(tmp85) << int((int)8));
												int tmp87 = (int(tmp84) | int(tmp86));
												int tmp88 = (int(destPixel) & int((int)255));
												int tmp89 = tmp88;
												int tmp90 = (int(tmp89) & int((int)255));
												int tmp91 = (int(tmp87) | int(tmp90));
												destPixel = tmp91;
											}
											value;
										}
										{
											Dynamic tmp71;
											{
												::lime::utils::ArrayBufferView tmp72 = ::lime::math::color::_RGBA::RGBA_Impl__obj::__clamp;
												::lime::utils::ArrayBufferView this1 = tmp72;
												Float tmp73 = (blendAlpha * ((Float)255.0));
												int tmp74 = ::Math_obj::round(tmp73);
												int idx = tmp74;
												int tmp75 = ::__hxcpp_memory_get_byte(this1->buffer->b,(this1->byteOffset + idx));
												tmp71 = (int(tmp75) & int((int)255));
											}
											int value = tmp71;
											{
												int tmp72 = (int(destPixel) >> int((int)24));
												int tmp73 = tmp72;
												int tmp74 = (int(tmp73) & int((int)255));
												int tmp75 = tmp74;
												int tmp76 = (int(tmp75) & int((int)255));
												int tmp77 = (int(tmp76) << int((int)24));
												int tmp78 = (int(destPixel) >> int((int)16));
												int tmp79 = tmp78;
												int tmp80 = (int(tmp79) & int((int)255));
												int tmp81 = tmp80;
												int tmp82 = (int(tmp81) & int((int)255));
												int tmp83 = (int(tmp82) << int((int)16));
												int tmp84 = (int(tmp77) | int(tmp83));
												int tmp85 = (int(destPixel) >> int((int)8));
												int tmp86 = tmp85;
												int tmp87 = (int(tmp86) & int((int)255));
												int tmp88 = tmp87;
												int tmp89 = (int(tmp88) & int((int)255));
												int tmp90 = (int(tmp89) << int((int)8));
												int tmp91 = (int(tmp84) | int(tmp90));
												int tmp92 = (int(value) & int((int)255));
												int tmp93 = (int(tmp91) | int(tmp92));
												destPixel = tmp93;
											}
											value;
										}
									}
									{
										bool tmp71 = destPremultiplied;
										if ((tmp71)){
											int tmp72 = (int(destPixel) & int((int)255));
											int tmp73 = tmp72;
											bool tmp74 = (tmp73 == (int)0);
											if ((tmp74)){
												bool tmp75 = (destPixel != (int)0);
												if ((tmp75)){
													destPixel = (int)0;
												}
											}
											else{
												int tmp75 = (int(destPixel) & int((int)255));
												int tmp76 = tmp75;
												bool tmp77 = (tmp76 != (int)255);
												if ((tmp77)){
													Dynamic tmp78;
													{
														::lime::utils::ArrayBufferView tmp79 = ::lime::math::color::_RGBA::RGBA_Impl__obj::__alpha16;
														::lime::utils::ArrayBufferView this1 = tmp79;
														tmp78 = ::__hxcpp_memory_get_ui32(this1->buffer->b,(this1->byteOffset + (((int(destPixel) & int((int)255))) * (int)4)));
													}
													::lime::math::color::_RGBA::RGBA_Impl__obj::a16 = tmp78;
													{
														int tmp79 = (int(destPixel) >> int((int)24));
														int tmp80 = tmp79;
														int tmp81 = (int(tmp80) & int((int)255));
														int tmp82 = tmp81;
														int tmp83 = ::lime::math::color::_RGBA::RGBA_Impl__obj::a16;
														int tmp84 = (tmp82 * tmp83);
														int tmp85 = (int(tmp84) >> int((int)16));
														int tmp86 = (int(tmp85) & int((int)255));
														int tmp87 = (int(tmp86) << int((int)24));
														int tmp88 = (int(destPixel) >> int((int)16));
														int tmp89 = tmp88;
														int tmp90 = (int(tmp89) & int((int)255));
														int tmp91 = tmp90;
														int tmp92 = ::lime::math::color::_RGBA::RGBA_Impl__obj::a16;
														int tmp93 = (tmp91 * tmp92);
														int tmp94 = (int(tmp93) >> int((int)16));
														int tmp95 = (int(tmp94) & int((int)255));
														int tmp96 = (int(tmp95) << int((int)16));
														int tmp97 = (int(tmp87) | int(tmp96));
														int tmp98 = (int(destPixel) >> int((int)8));
														int tmp99 = tmp98;
														int tmp100 = (int(tmp99) & int((int)255));
														int tmp101 = tmp100;
														int tmp102 = ::lime::math::color::_RGBA::RGBA_Impl__obj::a16;
														int tmp103 = (tmp101 * tmp102);
														int tmp104 = (int(tmp103) >> int((int)16));
														int tmp105 = (int(tmp104) & int((int)255));
														int tmp106 = (int(tmp105) << int((int)8));
														int tmp107 = (int(tmp97) | int(tmp106));
														int tmp108 = (int(destPixel) & int((int)255));
														int tmp109 = tmp108;
														int tmp110 = (int(tmp109) & int((int)255));
														int tmp111 = (int(tmp107) | int(tmp110));
														destPixel = tmp111;
													}
												}
											}
										}
										int tmp72 = destFormat;
										switch( (int)(tmp72)){
											case (int)2: {
												{
													int tmp73 = (int(destPixel) >> int((int)8));
													int tmp74 = tmp73;
													int tmp75 = (int(tmp74) & int((int)255));
													int val = tmp75;
													::__hxcpp_memory_set_byte(destData->buffer->b,(destData->byteOffset + destPosition),val);
													val;
												}
												{
													int tmp73 = (int(destPixel) >> int((int)16));
													int tmp74 = tmp73;
													int tmp75 = (int(tmp74) & int((int)255));
													int val = tmp75;
													::__hxcpp_memory_set_byte(destData->buffer->b,(destData->byteOffset + ((destPosition + (int)1))),val);
													val;
												}
												{
													int tmp73 = (int(destPixel) >> int((int)24));
													int tmp74 = tmp73;
													int tmp75 = (int(tmp74) & int((int)255));
													int val = tmp75;
													::__hxcpp_memory_set_byte(destData->buffer->b,(destData->byteOffset + ((destPosition + (int)2))),val);
													val;
												}
												{
													int tmp73 = (int(destPixel) & int((int)255));
													int val = tmp73;
													::__hxcpp_memory_set_byte(destData->buffer->b,(destData->byteOffset + ((destPosition + (int)3))),val);
													val;
												}
											}
											;break;
											case (int)0: {
												{
													int tmp73 = (int(destPixel) >> int((int)24));
													int tmp74 = tmp73;
													int tmp75 = (int(tmp74) & int((int)255));
													int val = tmp75;
													::__hxcpp_memory_set_byte(destData->buffer->b,(destData->byteOffset + destPosition),val);
													val;
												}
												{
													int tmp73 = (int(destPixel) >> int((int)16));
													int tmp74 = tmp73;
													int tmp75 = (int(tmp74) & int((int)255));
													int val = tmp75;
													::__hxcpp_memory_set_byte(destData->buffer->b,(destData->byteOffset + ((destPosition + (int)1))),val);
													val;
												}
												{
													int tmp73 = (int(destPixel) >> int((int)8));
													int tmp74 = tmp73;
													int tmp75 = (int(tmp74) & int((int)255));
													int val = tmp75;
													::__hxcpp_memory_set_byte(destData->buffer->b,(destData->byteOffset + ((destPosition + (int)2))),val);
													val;
												}
												{
													int tmp73 = (int(destPixel) & int((int)255));
													int val = tmp73;
													::__hxcpp_memory_set_byte(destData->buffer->b,(destData->byteOffset + ((destPosition + (int)3))),val);
													val;
												}
											}
											;break;
											case (int)1: {
												{
													int tmp73 = (int(destPixel) & int((int)255));
													int val = tmp73;
													::__hxcpp_memory_set_byte(destData->buffer->b,(destData->byteOffset + destPosition),val);
													val;
												}
												{
													int tmp73 = (int(destPixel) >> int((int)24));
													int tmp74 = tmp73;
													int tmp75 = (int(tmp74) & int((int)255));
													int val = tmp75;
													::__hxcpp_memory_set_byte(destData->buffer->b,(destData->byteOffset + ((destPosition + (int)1))),val);
													val;
												}
												{
													int tmp73 = (int(destPixel) >> int((int)16));
													int tmp74 = tmp73;
													int tmp75 = (int(tmp74) & int((int)255));
													int val = tmp75;
													::__hxcpp_memory_set_byte(destData->buffer->b,(destData->byteOffset + ((destPosition + (int)2))),val);
													val;
												}
												{
													int tmp73 = (int(destPixel) >> int((int)8));
													int tmp74 = tmp73;
													int tmp75 = (int(tmp74) & int((int)255));
													int val = tmp75;
													::__hxcpp_memory_set_byte(destData->buffer->b,(destData->byteOffset + ((destPosition + (int)3))),val);
													val;
												}
											}
											;break;
										}
									}
									hx::AddEq(sourcePosition,(int)4);
									hx::AddEq(destPosition,(int)4);
								}
							}
						}
					}
					else{
						bool tmp48 = (alphaPoint == null());
						if ((tmp48)){
							::lime::math::Vector2 tmp49 = ::lime::math::Vector2_obj::__new(null(),null());
							alphaPoint = tmp49;
						}
						::lime::utils::ArrayBufferView tmp49 = alphaImage->buffer->data;
						::lime::utils::ArrayBufferView alphaData = tmp49;
						int tmp50 = alphaImage->buffer->format;
						int alphaFormat = tmp50;
						bool tmp51 = alphaImage->buffer->premultiplied;
						bool alphaPremultiplied = tmp51;
						::lime::graphics::Image tmp52 = alphaImage;
						::lime::math::Rectangle tmp53 = ::lime::math::Rectangle_obj::__new(alphaPoint->x,alphaPoint->y,destView->width,destView->height);
						::lime::graphics::utils::_ImageDataUtil::ImageDataView tmp54 = ::lime::graphics::utils::_ImageDataUtil::ImageDataView_obj::__new(tmp52,tmp53);
						::lime::graphics::utils::_ImageDataUtil::ImageDataView alphaView = tmp54;
						int alphaPosition;
						int alphaPixel;
						{
							int _g1 = (int)0;
							int _g = alphaView->height;
							while((true)){
								bool tmp55 = (_g1 < _g);
								bool tmp56 = !(tmp55);
								if ((tmp56)){
									break;
								}
								int tmp57 = (_g1)++;
								int y = tmp57;
								int tmp58 = sourceView->offset;
								int tmp59 = (sourceView->stride * y);
								int tmp60 = (tmp58 + tmp59);
								sourcePosition = tmp60;
								int tmp61 = destView->offset;
								int tmp62 = (destView->stride * y);
								int tmp63 = (tmp61 + tmp62);
								destPosition = tmp63;
								int tmp64 = alphaView->offset;
								int tmp65 = (alphaView->stride * y);
								int tmp66 = (tmp64 + tmp65);
								alphaPosition = tmp66;
								{
									int _g3 = (int)0;
									int _g2 = alphaView->width;
									while((true)){
										bool tmp67 = (_g3 < _g2);
										bool tmp68 = !(tmp67);
										if ((tmp68)){
											break;
										}
										int tmp69 = (_g3)++;
										int x = tmp69;
										{
											int tmp70 = sourceFormat;
											switch( (int)(tmp70)){
												case (int)2: {
													int tmp71 = ::__hxcpp_memory_get_byte(sourceData->buffer->b,(sourceData->byteOffset + ((sourcePosition + (int)2))));
													Dynamic tmp72 = (int(tmp71) & int((int)255));
													int r = tmp72;
													int tmp73 = ::__hxcpp_memory_get_byte(sourceData->buffer->b,(sourceData->byteOffset + ((sourcePosition + (int)1))));
													Dynamic tmp74 = (int(tmp73) & int((int)255));
													int g = tmp74;
													int tmp75 = ::__hxcpp_memory_get_byte(sourceData->buffer->b,(sourceData->byteOffset + sourcePosition));
													Dynamic tmp76 = (int(tmp75) & int((int)255));
													int b = tmp76;
													int tmp77 = ::__hxcpp_memory_get_byte(sourceData->buffer->b,(sourceData->byteOffset + ((sourcePosition + (int)3))));
													Dynamic tmp78 = (int(tmp77) & int((int)255));
													int a = tmp78;
													int tmp79 = (int(r) & int((int)255));
													int tmp80 = (int(tmp79) << int((int)24));
													int tmp81 = (int(g) & int((int)255));
													int tmp82 = (int(tmp81) << int((int)16));
													int tmp83 = (int(tmp80) | int(tmp82));
													int tmp84 = (int(b) & int((int)255));
													int tmp85 = (int(tmp84) << int((int)8));
													int tmp86 = (int(tmp83) | int(tmp85));
													int tmp87 = (int(a) & int((int)255));
													int tmp88 = (int(tmp86) | int(tmp87));
													sourcePixel = tmp88;
												}
												;break;
												case (int)0: {
													int tmp71 = ::__hxcpp_memory_get_byte(sourceData->buffer->b,(sourceData->byteOffset + sourcePosition));
													Dynamic tmp72 = (int(tmp71) & int((int)255));
													int r = tmp72;
													int tmp73 = ::__hxcpp_memory_get_byte(sourceData->buffer->b,(sourceData->byteOffset + ((sourcePosition + (int)1))));
													Dynamic tmp74 = (int(tmp73) & int((int)255));
													int g = tmp74;
													int tmp75 = ::__hxcpp_memory_get_byte(sourceData->buffer->b,(sourceData->byteOffset + ((sourcePosition + (int)2))));
													Dynamic tmp76 = (int(tmp75) & int((int)255));
													int b = tmp76;
													int tmp77 = ::__hxcpp_memory_get_byte(sourceData->buffer->b,(sourceData->byteOffset + ((sourcePosition + (int)3))));
													Dynamic tmp78 = (int(tmp77) & int((int)255));
													int a = tmp78;
													int tmp79 = (int(r) & int((int)255));
													int tmp80 = (int(tmp79) << int((int)24));
													int tmp81 = (int(g) & int((int)255));
													int tmp82 = (int(tmp81) << int((int)16));
													int tmp83 = (int(tmp80) | int(tmp82));
													int tmp84 = (int(b) & int((int)255));
													int tmp85 = (int(tmp84) << int((int)8));
													int tmp86 = (int(tmp83) | int(tmp85));
													int tmp87 = (int(a) & int((int)255));
													int tmp88 = (int(tmp86) | int(tmp87));
													sourcePixel = tmp88;
												}
												;break;
												case (int)1: {
													int tmp71 = ::__hxcpp_memory_get_byte(sourceData->buffer->b,(sourceData->byteOffset + ((sourcePosition + (int)1))));
													Dynamic tmp72 = (int(tmp71) & int((int)255));
													int r = tmp72;
													int tmp73 = ::__hxcpp_memory_get_byte(sourceData->buffer->b,(sourceData->byteOffset + ((sourcePosition + (int)2))));
													Dynamic tmp74 = (int(tmp73) & int((int)255));
													int g = tmp74;
													int tmp75 = ::__hxcpp_memory_get_byte(sourceData->buffer->b,(sourceData->byteOffset + ((sourcePosition + (int)3))));
													Dynamic tmp76 = (int(tmp75) & int((int)255));
													int b = tmp76;
													int tmp77 = ::__hxcpp_memory_get_byte(sourceData->buffer->b,(sourceData->byteOffset + sourcePosition));
													Dynamic tmp78 = (int(tmp77) & int((int)255));
													int a = tmp78;
													int tmp79 = (int(r) & int((int)255));
													int tmp80 = (int(tmp79) << int((int)24));
													int tmp81 = (int(g) & int((int)255));
													int tmp82 = (int(tmp81) << int((int)16));
													int tmp83 = (int(tmp80) | int(tmp82));
													int tmp84 = (int(b) & int((int)255));
													int tmp85 = (int(tmp84) << int((int)8));
													int tmp86 = (int(tmp83) | int(tmp85));
													int tmp87 = (int(a) & int((int)255));
													int tmp88 = (int(tmp86) | int(tmp87));
													sourcePixel = tmp88;
												}
												;break;
											}
											bool tmp71 = sourcePremultiplied;
											if ((tmp71)){
												int tmp72 = (int(sourcePixel) & int((int)255));
												int tmp73 = tmp72;
												bool tmp74 = (tmp73 != (int)0);
												bool tmp75;
												if ((tmp74)){
													int tmp76 = (int(sourcePixel) & int((int)255));
													int tmp77 = tmp76;
													int tmp78 = tmp77;
													tmp75 = (tmp78 != (int)255);
												}
												else{
													tmp75 = false;
												}
												if ((tmp75)){
													int tmp76 = (int(sourcePixel) & int((int)255));
													int tmp77 = tmp76;
													Float tmp78 = (Float(((Float)255.0)) / Float(tmp77));
													::lime::math::color::_RGBA::RGBA_Impl__obj::unmult = tmp78;
													{
														Dynamic tmp79;
														{
															::lime::utils::ArrayBufferView tmp80 = ::lime::math::color::_RGBA::RGBA_Impl__obj::__clamp;
															::lime::utils::ArrayBufferView this1 = tmp80;
															int tmp81 = (int(sourcePixel) >> int((int)24));
															int tmp82 = tmp81;
															int tmp83 = (int(tmp82) & int((int)255));
															int tmp84 = tmp83;
															Float tmp85 = ::lime::math::color::_RGBA::RGBA_Impl__obj::unmult;
															Float tmp86 = (tmp84 * tmp85);
															int tmp87 = ::Math_obj::round(tmp86);
															int idx = tmp87;
															int tmp88 = ::__hxcpp_memory_get_byte(this1->buffer->b,(this1->byteOffset + idx));
															tmp79 = (int(tmp88) & int((int)255));
														}
														int r = tmp79;
														Dynamic tmp80;
														{
															::lime::utils::ArrayBufferView tmp81 = ::lime::math::color::_RGBA::RGBA_Impl__obj::__clamp;
															::lime::utils::ArrayBufferView this1 = tmp81;
															int tmp82 = (int(sourcePixel) >> int((int)16));
															int tmp83 = tmp82;
															int tmp84 = (int(tmp83) & int((int)255));
															int tmp85 = tmp84;
															Float tmp86 = ::lime::math::color::_RGBA::RGBA_Impl__obj::unmult;
															Float tmp87 = (tmp85 * tmp86);
															int tmp88 = ::Math_obj::round(tmp87);
															int idx = tmp88;
															int tmp89 = ::__hxcpp_memory_get_byte(this1->buffer->b,(this1->byteOffset + idx));
															tmp80 = (int(tmp89) & int((int)255));
														}
														int g = tmp80;
														Dynamic tmp81;
														{
															::lime::utils::ArrayBufferView tmp82 = ::lime::math::color::_RGBA::RGBA_Impl__obj::__clamp;
															::lime::utils::ArrayBufferView this1 = tmp82;
															int tmp83 = (int(sourcePixel) >> int((int)8));
															int tmp84 = tmp83;
															int tmp85 = (int(tmp84) & int((int)255));
															int tmp86 = tmp85;
															Float tmp87 = ::lime::math::color::_RGBA::RGBA_Impl__obj::unmult;
															Float tmp88 = (tmp86 * tmp87);
															int tmp89 = ::Math_obj::round(tmp88);
															int idx = tmp89;
															int tmp90 = ::__hxcpp_memory_get_byte(this1->buffer->b,(this1->byteOffset + idx));
															tmp81 = (int(tmp90) & int((int)255));
														}
														int b = tmp81;
														int tmp82 = (int(r) & int((int)255));
														int tmp83 = (int(tmp82) << int((int)24));
														int tmp84 = (int(g) & int((int)255));
														int tmp85 = (int(tmp84) << int((int)16));
														int tmp86 = (int(tmp83) | int(tmp85));
														int tmp87 = (int(b) & int((int)255));
														int tmp88 = (int(tmp87) << int((int)8));
														int tmp89 = (int(tmp86) | int(tmp88));
														int tmp90 = (int(sourcePixel) & int((int)255));
														int tmp91 = tmp90;
														int tmp92 = (int(tmp91) & int((int)255));
														int tmp93 = (int(tmp89) | int(tmp92));
														sourcePixel = tmp93;
													}
												}
											}
										}
										{
											int tmp70 = destFormat;
											switch( (int)(tmp70)){
												case (int)2: {
													int tmp71 = ::__hxcpp_memory_get_byte(destData->buffer->b,(destData->byteOffset + ((destPosition + (int)2))));
													Dynamic tmp72 = (int(tmp71) & int((int)255));
													int r = tmp72;
													int tmp73 = ::__hxcpp_memory_get_byte(destData->buffer->b,(destData->byteOffset + ((destPosition + (int)1))));
													Dynamic tmp74 = (int(tmp73) & int((int)255));
													int g = tmp74;
													int tmp75 = ::__hxcpp_memory_get_byte(destData->buffer->b,(destData->byteOffset + destPosition));
													Dynamic tmp76 = (int(tmp75) & int((int)255));
													int b = tmp76;
													int tmp77 = ::__hxcpp_memory_get_byte(destData->buffer->b,(destData->byteOffset + ((destPosition + (int)3))));
													Dynamic tmp78 = (int(tmp77) & int((int)255));
													int a = tmp78;
													int tmp79 = (int(r) & int((int)255));
													int tmp80 = (int(tmp79) << int((int)24));
													int tmp81 = (int(g) & int((int)255));
													int tmp82 = (int(tmp81) << int((int)16));
													int tmp83 = (int(tmp80) | int(tmp82));
													int tmp84 = (int(b) & int((int)255));
													int tmp85 = (int(tmp84) << int((int)8));
													int tmp86 = (int(tmp83) | int(tmp85));
													int tmp87 = (int(a) & int((int)255));
													int tmp88 = (int(tmp86) | int(tmp87));
													destPixel = tmp88;
												}
												;break;
												case (int)0: {
													int tmp71 = ::__hxcpp_memory_get_byte(destData->buffer->b,(destData->byteOffset + destPosition));
													Dynamic tmp72 = (int(tmp71) & int((int)255));
													int r = tmp72;
													int tmp73 = ::__hxcpp_memory_get_byte(destData->buffer->b,(destData->byteOffset + ((destPosition + (int)1))));
													Dynamic tmp74 = (int(tmp73) & int((int)255));
													int g = tmp74;
													int tmp75 = ::__hxcpp_memory_get_byte(destData->buffer->b,(destData->byteOffset + ((destPosition + (int)2))));
													Dynamic tmp76 = (int(tmp75) & int((int)255));
													int b = tmp76;
													int tmp77 = ::__hxcpp_memory_get_byte(destData->buffer->b,(destData->byteOffset + ((destPosition + (int)3))));
													Dynamic tmp78 = (int(tmp77) & int((int)255));
													int a = tmp78;
													int tmp79 = (int(r) & int((int)255));
													int tmp80 = (int(tmp79) << int((int)24));
													int tmp81 = (int(g) & int((int)255));
													int tmp82 = (int(tmp81) << int((int)16));
													int tmp83 = (int(tmp80) | int(tmp82));
													int tmp84 = (int(b) & int((int)255));
													int tmp85 = (int(tmp84) << int((int)8));
													int tmp86 = (int(tmp83) | int(tmp85));
													int tmp87 = (int(a) & int((int)255));
													int tmp88 = (int(tmp86) | int(tmp87));
													destPixel = tmp88;
												}
												;break;
												case (int)1: {
													int tmp71 = ::__hxcpp_memory_get_byte(destData->buffer->b,(destData->byteOffset + ((destPosition + (int)1))));
													Dynamic tmp72 = (int(tmp71) & int((int)255));
													int r = tmp72;
													int tmp73 = ::__hxcpp_memory_get_byte(destData->buffer->b,(destData->byteOffset + ((destPosition + (int)2))));
													Dynamic tmp74 = (int(tmp73) & int((int)255));
													int g = tmp74;
													int tmp75 = ::__hxcpp_memory_get_byte(destData->buffer->b,(destData->byteOffset + ((destPosition + (int)3))));
													Dynamic tmp76 = (int(tmp75) & int((int)255));
													int b = tmp76;
													int tmp77 = ::__hxcpp_memory_get_byte(destData->buffer->b,(destData->byteOffset + destPosition));
													Dynamic tmp78 = (int(tmp77) & int((int)255));
													int a = tmp78;
													int tmp79 = (int(r) & int((int)255));
													int tmp80 = (int(tmp79) << int((int)24));
													int tmp81 = (int(g) & int((int)255));
													int tmp82 = (int(tmp81) << int((int)16));
													int tmp83 = (int(tmp80) | int(tmp82));
													int tmp84 = (int(b) & int((int)255));
													int tmp85 = (int(tmp84) << int((int)8));
													int tmp86 = (int(tmp83) | int(tmp85));
													int tmp87 = (int(a) & int((int)255));
													int tmp88 = (int(tmp86) | int(tmp87));
													destPixel = tmp88;
												}
												;break;
											}
											bool tmp71 = destPremultiplied;
											if ((tmp71)){
												int tmp72 = (int(destPixel) & int((int)255));
												int tmp73 = tmp72;
												bool tmp74 = (tmp73 != (int)0);
												bool tmp75;
												if ((tmp74)){
													int tmp76 = (int(destPixel) & int((int)255));
													int tmp77 = tmp76;
													int tmp78 = tmp77;
													tmp75 = (tmp78 != (int)255);
												}
												else{
													tmp75 = false;
												}
												if ((tmp75)){
													int tmp76 = (int(destPixel) & int((int)255));
													int tmp77 = tmp76;
													Float tmp78 = (Float(((Float)255.0)) / Float(tmp77));
													::lime::math::color::_RGBA::RGBA_Impl__obj::unmult = tmp78;
													{
														Dynamic tmp79;
														{
															::lime::utils::ArrayBufferView tmp80 = ::lime::math::color::_RGBA::RGBA_Impl__obj::__clamp;
															::lime::utils::ArrayBufferView this1 = tmp80;
															int tmp81 = (int(destPixel) >> int((int)24));
															int tmp82 = tmp81;
															int tmp83 = (int(tmp82) & int((int)255));
															int tmp84 = tmp83;
															Float tmp85 = ::lime::math::color::_RGBA::RGBA_Impl__obj::unmult;
															Float tmp86 = (tmp84 * tmp85);
															int tmp87 = ::Math_obj::round(tmp86);
															int idx = tmp87;
															int tmp88 = ::__hxcpp_memory_get_byte(this1->buffer->b,(this1->byteOffset + idx));
															tmp79 = (int(tmp88) & int((int)255));
														}
														int r = tmp79;
														Dynamic tmp80;
														{
															::lime::utils::ArrayBufferView tmp81 = ::lime::math::color::_RGBA::RGBA_Impl__obj::__clamp;
															::lime::utils::ArrayBufferView this1 = tmp81;
															int tmp82 = (int(destPixel) >> int((int)16));
															int tmp83 = tmp82;
															int tmp84 = (int(tmp83) & int((int)255));
															int tmp85 = tmp84;
															Float tmp86 = ::lime::math::color::_RGBA::RGBA_Impl__obj::unmult;
															Float tmp87 = (tmp85 * tmp86);
															int tmp88 = ::Math_obj::round(tmp87);
															int idx = tmp88;
															int tmp89 = ::__hxcpp_memory_get_byte(this1->buffer->b,(this1->byteOffset + idx));
															tmp80 = (int(tmp89) & int((int)255));
														}
														int g = tmp80;
														Dynamic tmp81;
														{
															::lime::utils::ArrayBufferView tmp82 = ::lime::math::color::_RGBA::RGBA_Impl__obj::__clamp;
															::lime::utils::ArrayBufferView this1 = tmp82;
															int tmp83 = (int(destPixel) >> int((int)8));
															int tmp84 = tmp83;
															int tmp85 = (int(tmp84) & int((int)255));
															int tmp86 = tmp85;
															Float tmp87 = ::lime::math::color::_RGBA::RGBA_Impl__obj::unmult;
															Float tmp88 = (tmp86 * tmp87);
															int tmp89 = ::Math_obj::round(tmp88);
															int idx = tmp89;
															int tmp90 = ::__hxcpp_memory_get_byte(this1->buffer->b,(this1->byteOffset + idx));
															tmp81 = (int(tmp90) & int((int)255));
														}
														int b = tmp81;
														int tmp82 = (int(r) & int((int)255));
														int tmp83 = (int(tmp82) << int((int)24));
														int tmp84 = (int(g) & int((int)255));
														int tmp85 = (int(tmp84) << int((int)16));
														int tmp86 = (int(tmp83) | int(tmp85));
														int tmp87 = (int(b) & int((int)255));
														int tmp88 = (int(tmp87) << int((int)8));
														int tmp89 = (int(tmp86) | int(tmp88));
														int tmp90 = (int(destPixel) & int((int)255));
														int tmp91 = tmp90;
														int tmp92 = (int(tmp91) & int((int)255));
														int tmp93 = (int(tmp89) | int(tmp92));
														destPixel = tmp93;
													}
												}
											}
										}
										{
											int tmp70 = alphaFormat;
											switch( (int)(tmp70)){
												case (int)2: {
													int tmp71 = ::__hxcpp_memory_get_byte(alphaData->buffer->b,(alphaData->byteOffset + ((alphaPosition + (int)2))));
													Dynamic tmp72 = (int(tmp71) & int((int)255));
													int r = tmp72;
													int tmp73 = ::__hxcpp_memory_get_byte(alphaData->buffer->b,(alphaData->byteOffset + ((alphaPosition + (int)1))));
													Dynamic tmp74 = (int(tmp73) & int((int)255));
													int g = tmp74;
													int tmp75 = ::__hxcpp_memory_get_byte(alphaData->buffer->b,(alphaData->byteOffset + alphaPosition));
													Dynamic tmp76 = (int(tmp75) & int((int)255));
													int b = tmp76;
													int tmp77 = ::__hxcpp_memory_get_byte(alphaData->buffer->b,(alphaData->byteOffset + ((alphaPosition + (int)3))));
													Dynamic tmp78 = (int(tmp77) & int((int)255));
													int a = tmp78;
													int tmp79 = (int(r) & int((int)255));
													int tmp80 = (int(tmp79) << int((int)24));
													int tmp81 = (int(g) & int((int)255));
													int tmp82 = (int(tmp81) << int((int)16));
													int tmp83 = (int(tmp80) | int(tmp82));
													int tmp84 = (int(b) & int((int)255));
													int tmp85 = (int(tmp84) << int((int)8));
													int tmp86 = (int(tmp83) | int(tmp85));
													int tmp87 = (int(a) & int((int)255));
													int tmp88 = (int(tmp86) | int(tmp87));
													alphaPixel = tmp88;
												}
												;break;
												case (int)0: {
													int tmp71 = ::__hxcpp_memory_get_byte(alphaData->buffer->b,(alphaData->byteOffset + alphaPosition));
													Dynamic tmp72 = (int(tmp71) & int((int)255));
													int r = tmp72;
													int tmp73 = ::__hxcpp_memory_get_byte(alphaData->buffer->b,(alphaData->byteOffset + ((alphaPosition + (int)1))));
													Dynamic tmp74 = (int(tmp73) & int((int)255));
													int g = tmp74;
													int tmp75 = ::__hxcpp_memory_get_byte(alphaData->buffer->b,(alphaData->byteOffset + ((alphaPosition + (int)2))));
													Dynamic tmp76 = (int(tmp75) & int((int)255));
													int b = tmp76;
													int tmp77 = ::__hxcpp_memory_get_byte(alphaData->buffer->b,(alphaData->byteOffset + ((alphaPosition + (int)3))));
													Dynamic tmp78 = (int(tmp77) & int((int)255));
													int a = tmp78;
													int tmp79 = (int(r) & int((int)255));
													int tmp80 = (int(tmp79) << int((int)24));
													int tmp81 = (int(g) & int((int)255));
													int tmp82 = (int(tmp81) << int((int)16));
													int tmp83 = (int(tmp80) | int(tmp82));
													int tmp84 = (int(b) & int((int)255));
													int tmp85 = (int(tmp84) << int((int)8));
													int tmp86 = (int(tmp83) | int(tmp85));
													int tmp87 = (int(a) & int((int)255));
													int tmp88 = (int(tmp86) | int(tmp87));
													alphaPixel = tmp88;
												}
												;break;
												case (int)1: {
													int tmp71 = ::__hxcpp_memory_get_byte(alphaData->buffer->b,(alphaData->byteOffset + ((alphaPosition + (int)1))));
													Dynamic tmp72 = (int(tmp71) & int((int)255));
													int r = tmp72;
													int tmp73 = ::__hxcpp_memory_get_byte(alphaData->buffer->b,(alphaData->byteOffset + ((alphaPosition + (int)2))));
													Dynamic tmp74 = (int(tmp73) & int((int)255));
													int g = tmp74;
													int tmp75 = ::__hxcpp_memory_get_byte(alphaData->buffer->b,(alphaData->byteOffset + ((alphaPosition + (int)3))));
													Dynamic tmp76 = (int(tmp75) & int((int)255));
													int b = tmp76;
													int tmp77 = ::__hxcpp_memory_get_byte(alphaData->buffer->b,(alphaData->byteOffset + alphaPosition));
													Dynamic tmp78 = (int(tmp77) & int((int)255));
													int a = tmp78;
													int tmp79 = (int(r) & int((int)255));
													int tmp80 = (int(tmp79) << int((int)24));
													int tmp81 = (int(g) & int((int)255));
													int tmp82 = (int(tmp81) << int((int)16));
													int tmp83 = (int(tmp80) | int(tmp82));
													int tmp84 = (int(b) & int((int)255));
													int tmp85 = (int(tmp84) << int((int)8));
													int tmp86 = (int(tmp83) | int(tmp85));
													int tmp87 = (int(a) & int((int)255));
													int tmp88 = (int(tmp86) | int(tmp87));
													alphaPixel = tmp88;
												}
												;break;
											}
											bool tmp71 = alphaPremultiplied;
											if ((tmp71)){
												int tmp72 = (int(alphaPixel) & int((int)255));
												int tmp73 = tmp72;
												bool tmp74 = (tmp73 != (int)0);
												bool tmp75;
												if ((tmp74)){
													int tmp76 = (int(alphaPixel) & int((int)255));
													int tmp77 = tmp76;
													int tmp78 = tmp77;
													tmp75 = (tmp78 != (int)255);
												}
												else{
													tmp75 = false;
												}
												if ((tmp75)){
													int tmp76 = (int(alphaPixel) & int((int)255));
													int tmp77 = tmp76;
													Float tmp78 = (Float(((Float)255.0)) / Float(tmp77));
													::lime::math::color::_RGBA::RGBA_Impl__obj::unmult = tmp78;
													{
														Dynamic tmp79;
														{
															::lime::utils::ArrayBufferView tmp80 = ::lime::math::color::_RGBA::RGBA_Impl__obj::__clamp;
															::lime::utils::ArrayBufferView this1 = tmp80;
															int tmp81 = (int(alphaPixel) >> int((int)24));
															int tmp82 = tmp81;
															int tmp83 = (int(tmp82) & int((int)255));
															int tmp84 = tmp83;
															Float tmp85 = ::lime::math::color::_RGBA::RGBA_Impl__obj::unmult;
															Float tmp86 = (tmp84 * tmp85);
															int tmp87 = ::Math_obj::round(tmp86);
															int idx = tmp87;
															int tmp88 = ::__hxcpp_memory_get_byte(this1->buffer->b,(this1->byteOffset + idx));
															tmp79 = (int(tmp88) & int((int)255));
														}
														int r = tmp79;
														Dynamic tmp80;
														{
															::lime::utils::ArrayBufferView tmp81 = ::lime::math::color::_RGBA::RGBA_Impl__obj::__clamp;
															::lime::utils::ArrayBufferView this1 = tmp81;
															int tmp82 = (int(alphaPixel) >> int((int)16));
															int tmp83 = tmp82;
															int tmp84 = (int(tmp83) & int((int)255));
															int tmp85 = tmp84;
															Float tmp86 = ::lime::math::color::_RGBA::RGBA_Impl__obj::unmult;
															Float tmp87 = (tmp85 * tmp86);
															int tmp88 = ::Math_obj::round(tmp87);
															int idx = tmp88;
															int tmp89 = ::__hxcpp_memory_get_byte(this1->buffer->b,(this1->byteOffset + idx));
															tmp80 = (int(tmp89) & int((int)255));
														}
														int g = tmp80;
														Dynamic tmp81;
														{
															::lime::utils::ArrayBufferView tmp82 = ::lime::math::color::_RGBA::RGBA_Impl__obj::__clamp;
															::lime::utils::ArrayBufferView this1 = tmp82;
															int tmp83 = (int(alphaPixel) >> int((int)8));
															int tmp84 = tmp83;
															int tmp85 = (int(tmp84) & int((int)255));
															int tmp86 = tmp85;
															Float tmp87 = ::lime::math::color::_RGBA::RGBA_Impl__obj::unmult;
															Float tmp88 = (tmp86 * tmp87);
															int tmp89 = ::Math_obj::round(tmp88);
															int idx = tmp89;
															int tmp90 = ::__hxcpp_memory_get_byte(this1->buffer->b,(this1->byteOffset + idx));
															tmp81 = (int(tmp90) & int((int)255));
														}
														int b = tmp81;
														int tmp82 = (int(r) & int((int)255));
														int tmp83 = (int(tmp82) << int((int)24));
														int tmp84 = (int(g) & int((int)255));
														int tmp85 = (int(tmp84) << int((int)16));
														int tmp86 = (int(tmp83) | int(tmp85));
														int tmp87 = (int(b) & int((int)255));
														int tmp88 = (int(tmp87) << int((int)8));
														int tmp89 = (int(tmp86) | int(tmp88));
														int tmp90 = (int(alphaPixel) & int((int)255));
														int tmp91 = tmp90;
														int tmp92 = (int(tmp91) & int((int)255));
														int tmp93 = (int(tmp89) | int(tmp92));
														alphaPixel = tmp93;
													}
												}
											}
										}
										int tmp70 = (int(alphaPixel) & int((int)255));
										int tmp71 = tmp70;
										Float tmp72 = (Float(tmp71) / Float((int)255));
										sourceAlpha = tmp72;
										int tmp73 = (int(destPixel) & int((int)255));
										int tmp74 = tmp73;
										Float tmp75 = (Float(tmp74) / Float((int)255));
										destAlpha = tmp75;
										Float tmp76 = ((int)1 - sourceAlpha);
										oneMinusSourceAlpha = tmp76;
										Float tmp77 = sourceAlpha;
										Float tmp78 = (destAlpha * oneMinusSourceAlpha);
										Float tmp79 = (tmp77 + tmp78);
										blendAlpha = tmp79;
										bool tmp80 = (blendAlpha == (int)0);
										if ((tmp80)){
											destPixel = (int)0;
										}
										else{
											{
												Dynamic tmp81;
												{
													::lime::utils::ArrayBufferView tmp82 = ::lime::math::color::_RGBA::RGBA_Impl__obj::__clamp;
													::lime::utils::ArrayBufferView this1 = tmp82;
													int tmp83 = (int(sourcePixel) >> int((int)24));
													int tmp84 = tmp83;
													int tmp85 = (int(tmp84) & int((int)255));
													int tmp86 = tmp85;
													Float tmp87 = sourceAlpha;
													Float tmp88 = (tmp86 * tmp87);
													int tmp89 = (int(destPixel) >> int((int)24));
													int tmp90 = tmp89;
													int tmp91 = (int(tmp90) & int((int)255));
													int tmp92 = tmp91;
													Float tmp93 = destAlpha;
													Float tmp94 = (tmp92 * tmp93);
													Float tmp95 = oneMinusSourceAlpha;
													Float tmp96 = (tmp94 * tmp95);
													Float tmp97 = (tmp88 + tmp96);
													Float tmp98 = blendAlpha;
													Float tmp99 = (Float(tmp97) / Float(tmp98));
													int tmp100 = ::Math_obj::round(tmp99);
													int idx = tmp100;
													int tmp101 = ::__hxcpp_memory_get_byte(this1->buffer->b,(this1->byteOffset + idx));
													tmp81 = (int(tmp101) & int((int)255));
												}
												int value = tmp81;
												{
													int tmp82 = (int(value) & int((int)255));
													int tmp83 = (int(tmp82) << int((int)24));
													int tmp84 = (int(destPixel) >> int((int)16));
													int tmp85 = tmp84;
													int tmp86 = (int(tmp85) & int((int)255));
													int tmp87 = tmp86;
													int tmp88 = (int(tmp87) & int((int)255));
													int tmp89 = (int(tmp88) << int((int)16));
													int tmp90 = (int(tmp83) | int(tmp89));
													int tmp91 = (int(destPixel) >> int((int)8));
													int tmp92 = tmp91;
													int tmp93 = (int(tmp92) & int((int)255));
													int tmp94 = tmp93;
													int tmp95 = (int(tmp94) & int((int)255));
													int tmp96 = (int(tmp95) << int((int)8));
													int tmp97 = (int(tmp90) | int(tmp96));
													int tmp98 = (int(destPixel) & int((int)255));
													int tmp99 = tmp98;
													int tmp100 = (int(tmp99) & int((int)255));
													int tmp101 = (int(tmp97) | int(tmp100));
													destPixel = tmp101;
												}
												value;
											}
											{
												Dynamic tmp81;
												{
													::lime::utils::ArrayBufferView tmp82 = ::lime::math::color::_RGBA::RGBA_Impl__obj::__clamp;
													::lime::utils::ArrayBufferView this1 = tmp82;
													int tmp83 = (int(sourcePixel) >> int((int)16));
													int tmp84 = tmp83;
													int tmp85 = (int(tmp84) & int((int)255));
													int tmp86 = tmp85;
													Float tmp87 = sourceAlpha;
													Float tmp88 = (tmp86 * tmp87);
													int tmp89 = (int(destPixel) >> int((int)16));
													int tmp90 = tmp89;
													int tmp91 = (int(tmp90) & int((int)255));
													int tmp92 = tmp91;
													Float tmp93 = destAlpha;
													Float tmp94 = (tmp92 * tmp93);
													Float tmp95 = oneMinusSourceAlpha;
													Float tmp96 = (tmp94 * tmp95);
													Float tmp97 = (tmp88 + tmp96);
													Float tmp98 = blendAlpha;
													Float tmp99 = (Float(tmp97) / Float(tmp98));
													int tmp100 = ::Math_obj::round(tmp99);
													int idx = tmp100;
													int tmp101 = ::__hxcpp_memory_get_byte(this1->buffer->b,(this1->byteOffset + idx));
													tmp81 = (int(tmp101) & int((int)255));
												}
												int value = tmp81;
												{
													int tmp82 = (int(destPixel) >> int((int)24));
													int tmp83 = tmp82;
													int tmp84 = (int(tmp83) & int((int)255));
													int tmp85 = tmp84;
													int tmp86 = (int(tmp85) & int((int)255));
													int tmp87 = (int(tmp86) << int((int)24));
													int tmp88 = (int(value) & int((int)255));
													int tmp89 = (int(tmp88) << int((int)16));
													int tmp90 = (int(tmp87) | int(tmp89));
													int tmp91 = (int(destPixel) >> int((int)8));
													int tmp92 = tmp91;
													int tmp93 = (int(tmp92) & int((int)255));
													int tmp94 = tmp93;
													int tmp95 = (int(tmp94) & int((int)255));
													int tmp96 = (int(tmp95) << int((int)8));
													int tmp97 = (int(tmp90) | int(tmp96));
													int tmp98 = (int(destPixel) & int((int)255));
													int tmp99 = tmp98;
													int tmp100 = (int(tmp99) & int((int)255));
													int tmp101 = (int(tmp97) | int(tmp100));
													destPixel = tmp101;
												}
												value;
											}
											{
												Dynamic tmp81;
												{
													::lime::utils::ArrayBufferView tmp82 = ::lime::math::color::_RGBA::RGBA_Impl__obj::__clamp;
													::lime::utils::ArrayBufferView this1 = tmp82;
													int tmp83 = (int(sourcePixel) >> int((int)8));
													int tmp84 = tmp83;
													int tmp85 = (int(tmp84) & int((int)255));
													int tmp86 = tmp85;
													Float tmp87 = sourceAlpha;
													Float tmp88 = (tmp86 * tmp87);
													int tmp89 = (int(destPixel) >> int((int)8));
													int tmp90 = tmp89;
													int tmp91 = (int(tmp90) & int((int)255));
													int tmp92 = tmp91;
													Float tmp93 = destAlpha;
													Float tmp94 = (tmp92 * tmp93);
													Float tmp95 = oneMinusSourceAlpha;
													Float tmp96 = (tmp94 * tmp95);
													Float tmp97 = (tmp88 + tmp96);
													Float tmp98 = blendAlpha;
													Float tmp99 = (Float(tmp97) / Float(tmp98));
													int tmp100 = ::Math_obj::round(tmp99);
													int idx = tmp100;
													int tmp101 = ::__hxcpp_memory_get_byte(this1->buffer->b,(this1->byteOffset + idx));
													tmp81 = (int(tmp101) & int((int)255));
												}
												int value = tmp81;
												{
													int tmp82 = (int(destPixel) >> int((int)24));
													int tmp83 = tmp82;
													int tmp84 = (int(tmp83) & int((int)255));
													int tmp85 = tmp84;
													int tmp86 = (int(tmp85) & int((int)255));
													int tmp87 = (int(tmp86) << int((int)24));
													int tmp88 = (int(destPixel) >> int((int)16));
													int tmp89 = tmp88;
													int tmp90 = (int(tmp89) & int((int)255));
													int tmp91 = tmp90;
													int tmp92 = (int(tmp91) & int((int)255));
													int tmp93 = (int(tmp92) << int((int)16));
													int tmp94 = (int(tmp87) | int(tmp93));
													int tmp95 = (int(value) & int((int)255));
													int tmp96 = (int(tmp95) << int((int)8));
													int tmp97 = (int(tmp94) | int(tmp96));
													int tmp98 = (int(destPixel) & int((int)255));
													int tmp99 = tmp98;
													int tmp100 = (int(tmp99) & int((int)255));
													int tmp101 = (int(tmp97) | int(tmp100));
													destPixel = tmp101;
												}
												value;
											}
											{
												Dynamic tmp81;
												{
													::lime::utils::ArrayBufferView tmp82 = ::lime::math::color::_RGBA::RGBA_Impl__obj::__clamp;
													::lime::utils::ArrayBufferView this1 = tmp82;
													Float tmp83 = (blendAlpha * ((Float)255.0));
													int tmp84 = ::Math_obj::round(tmp83);
													int idx = tmp84;
													int tmp85 = ::__hxcpp_memory_get_byte(this1->buffer->b,(this1->byteOffset + idx));
													tmp81 = (int(tmp85) & int((int)255));
												}
												int value = tmp81;
												{
													int tmp82 = (int(destPixel) >> int((int)24));
													int tmp83 = tmp82;
													int tmp84 = (int(tmp83) & int((int)255));
													int tmp85 = tmp84;
													int tmp86 = (int(tmp85) & int((int)255));
													int tmp87 = (int(tmp86) << int((int)24));
													int tmp88 = (int(destPixel) >> int((int)16));
													int tmp89 = tmp88;
													int tmp90 = (int(tmp89) & int((int)255));
													int tmp91 = tmp90;
													int tmp92 = (int(tmp91) & int((int)255));
													int tmp93 = (int(tmp92) << int((int)16));
													int tmp94 = (int(tmp87) | int(tmp93));
													int tmp95 = (int(destPixel) >> int((int)8));
													int tmp96 = tmp95;
													int tmp97 = (int(tmp96) & int((int)255));
													int tmp98 = tmp97;
													int tmp99 = (int(tmp98) & int((int)255));
													int tmp100 = (int(tmp99) << int((int)8));
													int tmp101 = (int(tmp94) | int(tmp100));
													int tmp102 = (int(value) & int((int)255));
													int tmp103 = (int(tmp101) | int(tmp102));
													destPixel = tmp103;
												}
												value;
											}
										}
										{
											bool tmp81 = destPremultiplied;
											if ((tmp81)){
												int tmp82 = (int(destPixel) & int((int)255));
												int tmp83 = tmp82;
												bool tmp84 = (tmp83 == (int)0);
												if ((tmp84)){
													bool tmp85 = (destPixel != (int)0);
													if ((tmp85)){
														destPixel = (int)0;
													}
												}
												else{
													int tmp85 = (int(destPixel) & int((int)255));
													int tmp86 = tmp85;
													bool tmp87 = (tmp86 != (int)255);
													if ((tmp87)){
														Dynamic tmp88;
														{
															::lime::utils::ArrayBufferView tmp89 = ::lime::math::color::_RGBA::RGBA_Impl__obj::__alpha16;
															::lime::utils::ArrayBufferView this1 = tmp89;
															tmp88 = ::__hxcpp_memory_get_ui32(this1->buffer->b,(this1->byteOffset + (((int(destPixel) & int((int)255))) * (int)4)));
														}
														::lime::math::color::_RGBA::RGBA_Impl__obj::a16 = tmp88;
														{
															int tmp89 = (int(destPixel) >> int((int)24));
															int tmp90 = tmp89;
															int tmp91 = (int(tmp90) & int((int)255));
															int tmp92 = tmp91;
															int tmp93 = ::lime::math::color::_RGBA::RGBA_Impl__obj::a16;
															int tmp94 = (tmp92 * tmp93);
															int tmp95 = (int(tmp94) >> int((int)16));
															int tmp96 = (int(tmp95) & int((int)255));
															int tmp97 = (int(tmp96) << int((int)24));
															int tmp98 = (int(destPixel) >> int((int)16));
															int tmp99 = tmp98;
															int tmp100 = (int(tmp99) & int((int)255));
															int tmp101 = tmp100;
															int tmp102 = ::lime::math::color::_RGBA::RGBA_Impl__obj::a16;
															int tmp103 = (tmp101 * tmp102);
															int tmp104 = (int(tmp103) >> int((int)16));
															int tmp105 = (int(tmp104) & int((int)255));
															int tmp106 = (int(tmp105) << int((int)16));
															int tmp107 = (int(tmp97) | int(tmp106));
															int tmp108 = (int(destPixel) >> int((int)8));
															int tmp109 = tmp108;
															int tmp110 = (int(tmp109) & int((int)255));
															int tmp111 = tmp110;
															int tmp112 = ::lime::math::color::_RGBA::RGBA_Impl__obj::a16;
															int tmp113 = (tmp111 * tmp112);
															int tmp114 = (int(tmp113) >> int((int)16));
															int tmp115 = (int(tmp114) & int((int)255));
															int tmp116 = (int(tmp115) << int((int)8));
															int tmp117 = (int(tmp107) | int(tmp116));
															int tmp118 = (int(destPixel) & int((int)255));
															int tmp119 = tmp118;
															int tmp120 = (int(tmp119) & int((int)255));
															int tmp121 = (int(tmp117) | int(tmp120));
															destPixel = tmp121;
														}
													}
												}
											}
											int tmp82 = destFormat;
											switch( (int)(tmp82)){
												case (int)2: {
													{
														int tmp83 = (int(destPixel) >> int((int)8));
														int tmp84 = tmp83;
														int tmp85 = (int(tmp84) & int((int)255));
														int val = tmp85;
														::__hxcpp_memory_set_byte(destData->buffer->b,(destData->byteOffset + destPosition),val);
														val;
													}
													{
														int tmp83 = (int(destPixel) >> int((int)16));
														int tmp84 = tmp83;
														int tmp85 = (int(tmp84) & int((int)255));
														int val = tmp85;
														::__hxcpp_memory_set_byte(destData->buffer->b,(destData->byteOffset + ((destPosition + (int)1))),val);
														val;
													}
													{
														int tmp83 = (int(destPixel) >> int((int)24));
														int tmp84 = tmp83;
														int tmp85 = (int(tmp84) & int((int)255));
														int val = tmp85;
														::__hxcpp_memory_set_byte(destData->buffer->b,(destData->byteOffset + ((destPosition + (int)2))),val);
														val;
													}
													{
														int tmp83 = (int(destPixel) & int((int)255));
														int val = tmp83;
														::__hxcpp_memory_set_byte(destData->buffer->b,(destData->byteOffset + ((destPosition + (int)3))),val);
														val;
													}
												}
												;break;
												case (int)0: {
													{
														int tmp83 = (int(destPixel) >> int((int)24));
														int tmp84 = tmp83;
														int tmp85 = (int(tmp84) & int((int)255));
														int val = tmp85;
														::__hxcpp_memory_set_byte(destData->buffer->b,(destData->byteOffset + destPosition),val);
														val;
													}
													{
														int tmp83 = (int(destPixel) >> int((int)16));
														int tmp84 = tmp83;
														int tmp85 = (int(tmp84) & int((int)255));
														int val = tmp85;
														::__hxcpp_memory_set_byte(destData->buffer->b,(destData->byteOffset + ((destPosition + (int)1))),val);
														val;
													}
													{
														int tmp83 = (int(destPixel) >> int((int)8));
														int tmp84 = tmp83;
														int tmp85 = (int(tmp84) & int((int)255));
														int val = tmp85;
														::__hxcpp_memory_set_byte(destData->buffer->b,(destData->byteOffset + ((destPosition + (int)2))),val);
														val;
													}
													{
														int tmp83 = (int(destPixel) & int((int)255));
														int val = tmp83;
														::__hxcpp_memory_set_byte(destData->buffer->b,(destData->byteOffset + ((destPosition + (int)3))),val);
														val;
													}
												}
												;break;
												case (int)1: {
													{
														int tmp83 = (int(destPixel) & int((int)255));
														int val = tmp83;
														::__hxcpp_memory_set_byte(destData->buffer->b,(destData->byteOffset + destPosition),val);
														val;
													}
													{
														int tmp83 = (int(destPixel) >> int((int)24));
														int tmp84 = tmp83;
														int tmp85 = (int(tmp84) & int((int)255));
														int val = tmp85;
														::__hxcpp_memory_set_byte(destData->buffer->b,(destData->byteOffset + ((destPosition + (int)1))),val);
														val;
													}
													{
														int tmp83 = (int(destPixel) >> int((int)16));
														int tmp84 = tmp83;
														int tmp85 = (int(tmp84) & int((int)255));
														int val = tmp85;
														::__hxcpp_memory_set_byte(destData->buffer->b,(destData->byteOffset + ((destPosition + (int)2))),val);
														val;
													}
													{
														int tmp83 = (int(destPixel) >> int((int)8));
														int tmp84 = tmp83;
														int tmp85 = (int(tmp84) & int((int)255));
														int val = tmp85;
														::__hxcpp_memory_set_byte(destData->buffer->b,(destData->byteOffset + ((destPosition + (int)3))),val);
														val;
													}
												}
												;break;
											}
										}
										hx::AddEq(sourcePosition,(int)4);
										hx::AddEq(destPosition,(int)4);
									}
								}
							}
						}
					}
				}
			}
		}
		image->dirty = true;
		(image->version)++;
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC7(ImageDataUtil_obj,copyPixels,(void))

Void ImageDataUtil_obj::fillRect( ::lime::graphics::Image image,::lime::math::Rectangle rect,int color,int format){
{
		int fillColor;
		int tmp = format;
		switch( (int)(tmp)){
			case (int)1: {
				int tmp1;
				{
					int argb = color;
					{
						int tmp2;
						{
							int rgba = (int)0;
							tmp2 = rgba;
						}
						int rgba = tmp2;
						{
							int tmp3 = (int(argb) >> int((int)16));
							int tmp4 = tmp3;
							int tmp5 = (int(tmp4) & int((int)255));
							int tmp6 = tmp5;
							int tmp7 = (int(tmp6) & int((int)255));
							int tmp8 = (int(tmp7) << int((int)24));
							int tmp9 = (int(argb) >> int((int)8));
							int tmp10 = tmp9;
							int tmp11 = (int(tmp10) & int((int)255));
							int tmp12 = tmp11;
							int tmp13 = (int(tmp12) & int((int)255));
							int tmp14 = (int(tmp13) << int((int)16));
							int tmp15 = (int(tmp8) | int(tmp14));
							int tmp16 = (int(argb) & int((int)255));
							int tmp17 = tmp16;
							int tmp18 = (int(tmp17) & int((int)255));
							int tmp19 = (int(tmp18) << int((int)8));
							int tmp20 = (int(tmp15) | int(tmp19));
							int tmp21 = (int(argb) >> int((int)24));
							int tmp22 = tmp21;
							int tmp23 = (int(tmp22) & int((int)255));
							int tmp24 = tmp23;
							int tmp25 = (int(tmp24) & int((int)255));
							int tmp26 = (int(tmp20) | int(tmp25));
							rgba = tmp26;
						}
						tmp1 = rgba;
					}
				}
				fillColor = tmp1;
			}
			;break;
			case (int)2: {
				int tmp1;
				{
					int bgra = color;
					{
						int tmp2;
						{
							int rgba = (int)0;
							tmp2 = rgba;
						}
						int rgba = tmp2;
						{
							int tmp3 = (int(bgra) >> int((int)8));
							int tmp4 = tmp3;
							int tmp5 = (int(tmp4) & int((int)255));
							int tmp6 = tmp5;
							int tmp7 = (int(tmp6) & int((int)255));
							int tmp8 = (int(tmp7) << int((int)24));
							int tmp9 = (int(bgra) >> int((int)16));
							int tmp10 = tmp9;
							int tmp11 = (int(tmp10) & int((int)255));
							int tmp12 = tmp11;
							int tmp13 = (int(tmp12) & int((int)255));
							int tmp14 = (int(tmp13) << int((int)16));
							int tmp15 = (int(tmp8) | int(tmp14));
							int tmp16 = (int(bgra) >> int((int)24));
							int tmp17 = tmp16;
							int tmp18 = (int(tmp17) & int((int)255));
							int tmp19 = tmp18;
							int tmp20 = (int(tmp19) & int((int)255));
							int tmp21 = (int(tmp20) << int((int)8));
							int tmp22 = (int(tmp15) | int(tmp21));
							int tmp23 = (int(bgra) & int((int)255));
							int tmp24 = tmp23;
							int tmp25 = (int(tmp24) & int((int)255));
							int tmp26 = (int(tmp22) | int(tmp25));
							rgba = tmp26;
						}
						tmp1 = rgba;
					}
				}
				fillColor = tmp1;
			}
			;break;
			default: {
				fillColor = color;
			}
		}
		bool tmp1 = image->get_transparent();
		bool tmp2 = !(tmp1);
		if ((tmp2)){
			{
				int tmp3 = (int(fillColor) >> int((int)24));
				int tmp4 = tmp3;
				int tmp5 = (int(tmp4) & int((int)255));
				int tmp6 = tmp5;
				int tmp7 = (int(tmp6) & int((int)255));
				int tmp8 = (int(tmp7) << int((int)24));
				int tmp9 = (int(fillColor) >> int((int)16));
				int tmp10 = tmp9;
				int tmp11 = (int(tmp10) & int((int)255));
				int tmp12 = tmp11;
				int tmp13 = (int(tmp12) & int((int)255));
				int tmp14 = (int(tmp13) << int((int)16));
				int tmp15 = (int(tmp8) | int(tmp14));
				int tmp16 = (int(fillColor) >> int((int)8));
				int tmp17 = tmp16;
				int tmp18 = (int(tmp17) & int((int)255));
				int tmp19 = tmp18;
				int tmp20 = (int(tmp19) & int((int)255));
				int tmp21 = (int(tmp20) << int((int)8));
				int tmp22 = (int(tmp15) | int(tmp21));
				int tmp23 = (int)255;
				int tmp24 = (int(tmp22) | int(tmp23));
				fillColor = tmp24;
			}
			(int)255;
		}
		::lime::utils::ArrayBufferView tmp3 = image->buffer->data;
		::lime::utils::ArrayBufferView data = tmp3;
		bool tmp4 = (data == null());
		if ((tmp4)){
			return null();
		}
		bool tmp5 = ::lime::_system::CFFI_obj::enabled;
		if ((tmp5)){
			::lime::_backend::native::NativeCFFI_obj::cffi_lime_image_data_util_fill_rect.call(hx::DynamicPtr(image),hx::DynamicPtr(rect),(int((int(fillColor) >> int((int)16))) & int((int)65535)),(int(fillColor) & int((int)65535)));
		}
		else{
			int tmp6 = image->buffer->format;
			int format1 = tmp6;
			bool tmp7 = image->buffer->premultiplied;
			bool premultiplied = tmp7;
			bool tmp8 = premultiplied;
			if ((tmp8)){
				int tmp9 = (int(fillColor) & int((int)255));
				int tmp10 = tmp9;
				bool tmp11 = (tmp10 == (int)0);
				if ((tmp11)){
					bool tmp12 = (fillColor != (int)0);
					if ((tmp12)){
						fillColor = (int)0;
					}
				}
				else{
					int tmp12 = (int(fillColor) & int((int)255));
					int tmp13 = tmp12;
					bool tmp14 = (tmp13 != (int)255);
					if ((tmp14)){
						Dynamic tmp15;
						{
							::lime::utils::ArrayBufferView tmp16 = ::lime::math::color::_RGBA::RGBA_Impl__obj::__alpha16;
							::lime::utils::ArrayBufferView this1 = tmp16;
							tmp15 = ::__hxcpp_memory_get_ui32(this1->buffer->b,(this1->byteOffset + (((int(fillColor) & int((int)255))) * (int)4)));
						}
						::lime::math::color::_RGBA::RGBA_Impl__obj::a16 = tmp15;
						{
							int tmp16 = (int(fillColor) >> int((int)24));
							int tmp17 = tmp16;
							int tmp18 = (int(tmp17) & int((int)255));
							int tmp19 = tmp18;
							int tmp20 = ::lime::math::color::_RGBA::RGBA_Impl__obj::a16;
							int tmp21 = (tmp19 * tmp20);
							int tmp22 = (int(tmp21) >> int((int)16));
							int tmp23 = (int(tmp22) & int((int)255));
							int tmp24 = (int(tmp23) << int((int)24));
							int tmp25 = (int(fillColor) >> int((int)16));
							int tmp26 = tmp25;
							int tmp27 = (int(tmp26) & int((int)255));
							int tmp28 = tmp27;
							int tmp29 = ::lime::math::color::_RGBA::RGBA_Impl__obj::a16;
							int tmp30 = (tmp28 * tmp29);
							int tmp31 = (int(tmp30) >> int((int)16));
							int tmp32 = (int(tmp31) & int((int)255));
							int tmp33 = (int(tmp32) << int((int)16));
							int tmp34 = (int(tmp24) | int(tmp33));
							int tmp35 = (int(fillColor) >> int((int)8));
							int tmp36 = tmp35;
							int tmp37 = (int(tmp36) & int((int)255));
							int tmp38 = tmp37;
							int tmp39 = ::lime::math::color::_RGBA::RGBA_Impl__obj::a16;
							int tmp40 = (tmp38 * tmp39);
							int tmp41 = (int(tmp40) >> int((int)16));
							int tmp42 = (int(tmp41) & int((int)255));
							int tmp43 = (int(tmp42) << int((int)8));
							int tmp44 = (int(tmp34) | int(tmp43));
							int tmp45 = (int(fillColor) & int((int)255));
							int tmp46 = tmp45;
							int tmp47 = (int(tmp46) & int((int)255));
							int tmp48 = (int(tmp44) | int(tmp47));
							fillColor = tmp48;
						}
					}
				}
			}
			::lime::graphics::utils::_ImageDataUtil::ImageDataView tmp9 = ::lime::graphics::utils::_ImageDataUtil::ImageDataView_obj::__new(image,rect);
			::lime::graphics::utils::_ImageDataUtil::ImageDataView dataView = tmp9;
			int row;
			{
				int _g1 = (int)0;
				int _g = dataView->height;
				while((true)){
					bool tmp10 = (_g1 < _g);
					bool tmp11 = !(tmp10);
					if ((tmp11)){
						break;
					}
					int tmp12 = (_g1)++;
					int y = tmp12;
					int tmp13 = dataView->offset;
					int tmp14 = (dataView->stride * y);
					int tmp15 = (tmp13 + tmp14);
					row = tmp15;
					{
						int _g3 = (int)0;
						int _g2 = dataView->width;
						while((true)){
							bool tmp16 = (_g3 < _g2);
							bool tmp17 = !(tmp16);
							if ((tmp17)){
								break;
							}
							int tmp18 = (_g3)++;
							int x = tmp18;
							{
								int tmp19 = row;
								int tmp20 = (x * (int)4);
								int tmp21 = (tmp19 + tmp20);
								int offset = tmp21;
								int tmp22 = format1;
								switch( (int)(tmp22)){
									case (int)2: {
										{
											int tmp23 = (int(fillColor) >> int((int)8));
											int tmp24 = tmp23;
											int tmp25 = (int(tmp24) & int((int)255));
											int val = tmp25;
											::__hxcpp_memory_set_byte(data->buffer->b,(data->byteOffset + offset),val);
											val;
										}
										{
											int tmp23 = (int(fillColor) >> int((int)16));
											int tmp24 = tmp23;
											int tmp25 = (int(tmp24) & int((int)255));
											int val = tmp25;
											::__hxcpp_memory_set_byte(data->buffer->b,(data->byteOffset + ((offset + (int)1))),val);
											val;
										}
										{
											int tmp23 = (int(fillColor) >> int((int)24));
											int tmp24 = tmp23;
											int tmp25 = (int(tmp24) & int((int)255));
											int val = tmp25;
											::__hxcpp_memory_set_byte(data->buffer->b,(data->byteOffset + ((offset + (int)2))),val);
											val;
										}
										{
											int tmp23 = (int(fillColor) & int((int)255));
											int val = tmp23;
											::__hxcpp_memory_set_byte(data->buffer->b,(data->byteOffset + ((offset + (int)3))),val);
											val;
										}
									}
									;break;
									case (int)0: {
										{
											int tmp23 = (int(fillColor) >> int((int)24));
											int tmp24 = tmp23;
											int tmp25 = (int(tmp24) & int((int)255));
											int val = tmp25;
											::__hxcpp_memory_set_byte(data->buffer->b,(data->byteOffset + offset),val);
											val;
										}
										{
											int tmp23 = (int(fillColor) >> int((int)16));
											int tmp24 = tmp23;
											int tmp25 = (int(tmp24) & int((int)255));
											int val = tmp25;
											::__hxcpp_memory_set_byte(data->buffer->b,(data->byteOffset + ((offset + (int)1))),val);
											val;
										}
										{
											int tmp23 = (int(fillColor) >> int((int)8));
											int tmp24 = tmp23;
											int tmp25 = (int(tmp24) & int((int)255));
											int val = tmp25;
											::__hxcpp_memory_set_byte(data->buffer->b,(data->byteOffset + ((offset + (int)2))),val);
											val;
										}
										{
											int tmp23 = (int(fillColor) & int((int)255));
											int val = tmp23;
											::__hxcpp_memory_set_byte(data->buffer->b,(data->byteOffset + ((offset + (int)3))),val);
											val;
										}
									}
									;break;
									case (int)1: {
										{
											int tmp23 = (int(fillColor) & int((int)255));
											int val = tmp23;
											::__hxcpp_memory_set_byte(data->buffer->b,(data->byteOffset + offset),val);
											val;
										}
										{
											int tmp23 = (int(fillColor) >> int((int)24));
											int tmp24 = tmp23;
											int tmp25 = (int(tmp24) & int((int)255));
											int val = tmp25;
											::__hxcpp_memory_set_byte(data->buffer->b,(data->byteOffset + ((offset + (int)1))),val);
											val;
										}
										{
											int tmp23 = (int(fillColor) >> int((int)16));
											int tmp24 = tmp23;
											int tmp25 = (int(tmp24) & int((int)255));
											int val = tmp25;
											::__hxcpp_memory_set_byte(data->buffer->b,(data->byteOffset + ((offset + (int)2))),val);
											val;
										}
										{
											int tmp23 = (int(fillColor) >> int((int)8));
											int tmp24 = tmp23;
											int tmp25 = (int(tmp24) & int((int)255));
											int val = tmp25;
											::__hxcpp_memory_set_byte(data->buffer->b,(data->byteOffset + ((offset + (int)3))),val);
											val;
										}
									}
									;break;
								}
							}
						}
					}
				}
			}
		}
		image->dirty = true;
		(image->version)++;
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC4(ImageDataUtil_obj,fillRect,(void))

Void ImageDataUtil_obj::floodFill( ::lime::graphics::Image image,int x,int y,int color,int format){
{
		::lime::utils::ArrayBufferView tmp = image->buffer->data;
		::lime::utils::ArrayBufferView data = tmp;
		bool tmp1 = (data == null());
		if ((tmp1)){
			return null();
		}
		bool tmp2 = (format == (int)1);
		if ((tmp2)){
			int tmp3 = (int(color) & int((int)16777215));
			int tmp4 = (int(tmp3) << int((int)8));
			int tmp5 = (int(color) >> int((int)24));
			int tmp6 = (int(tmp5) & int((int)255));
			int tmp7 = (int(tmp4) | int(tmp6));
			color = tmp7;
		}
		bool tmp3 = ::lime::_system::CFFI_obj::enabled;
		if ((tmp3)){
			::lime::_backend::native::NativeCFFI_obj::cffi_lime_image_data_util_flood_fill.call(hx::DynamicPtr(image),x,y,(int((int(color) >> int((int)16))) & int((int)65535)),(int(color) & int((int)65535)));
		}
		else{
			int tmp4 = image->buffer->format;
			int format1 = tmp4;
			bool tmp5 = image->buffer->premultiplied;
			bool premultiplied = tmp5;
			int fillColor = color;
			int hitColor;
			{
				int tmp6 = (y + image->offsetY);
				int tmp7 = image->buffer->width;
				int tmp8 = (tmp7 * (int)4);
				int tmp9 = (tmp6 * tmp8);
				int tmp10 = (x + image->offsetX);
				int tmp11 = (tmp10 * (int)4);
				int tmp12 = (tmp9 + tmp11);
				int offset = tmp12;
				int tmp13 = format1;
				switch( (int)(tmp13)){
					case (int)2: {
						int tmp14 = ::__hxcpp_memory_get_byte(data->buffer->b,(data->byteOffset + ((offset + (int)2))));
						Dynamic tmp15 = (int(tmp14) & int((int)255));
						int r = tmp15;
						int tmp16 = ::__hxcpp_memory_get_byte(data->buffer->b,(data->byteOffset + ((offset + (int)1))));
						Dynamic tmp17 = (int(tmp16) & int((int)255));
						int g = tmp17;
						int tmp18 = ::__hxcpp_memory_get_byte(data->buffer->b,(data->byteOffset + offset));
						Dynamic tmp19 = (int(tmp18) & int((int)255));
						int b = tmp19;
						int tmp20 = ::__hxcpp_memory_get_byte(data->buffer->b,(data->byteOffset + ((offset + (int)3))));
						Dynamic tmp21 = (int(tmp20) & int((int)255));
						int a = tmp21;
						int tmp22 = (int(r) & int((int)255));
						int tmp23 = (int(tmp22) << int((int)24));
						int tmp24 = (int(g) & int((int)255));
						int tmp25 = (int(tmp24) << int((int)16));
						int tmp26 = (int(tmp23) | int(tmp25));
						int tmp27 = (int(b) & int((int)255));
						int tmp28 = (int(tmp27) << int((int)8));
						int tmp29 = (int(tmp26) | int(tmp28));
						int tmp30 = (int(a) & int((int)255));
						int tmp31 = (int(tmp29) | int(tmp30));
						hitColor = tmp31;
					}
					;break;
					case (int)0: {
						int tmp14 = ::__hxcpp_memory_get_byte(data->buffer->b,(data->byteOffset + offset));
						Dynamic tmp15 = (int(tmp14) & int((int)255));
						int r = tmp15;
						int tmp16 = ::__hxcpp_memory_get_byte(data->buffer->b,(data->byteOffset + ((offset + (int)1))));
						Dynamic tmp17 = (int(tmp16) & int((int)255));
						int g = tmp17;
						int tmp18 = ::__hxcpp_memory_get_byte(data->buffer->b,(data->byteOffset + ((offset + (int)2))));
						Dynamic tmp19 = (int(tmp18) & int((int)255));
						int b = tmp19;
						int tmp20 = ::__hxcpp_memory_get_byte(data->buffer->b,(data->byteOffset + ((offset + (int)3))));
						Dynamic tmp21 = (int(tmp20) & int((int)255));
						int a = tmp21;
						int tmp22 = (int(r) & int((int)255));
						int tmp23 = (int(tmp22) << int((int)24));
						int tmp24 = (int(g) & int((int)255));
						int tmp25 = (int(tmp24) << int((int)16));
						int tmp26 = (int(tmp23) | int(tmp25));
						int tmp27 = (int(b) & int((int)255));
						int tmp28 = (int(tmp27) << int((int)8));
						int tmp29 = (int(tmp26) | int(tmp28));
						int tmp30 = (int(a) & int((int)255));
						int tmp31 = (int(tmp29) | int(tmp30));
						hitColor = tmp31;
					}
					;break;
					case (int)1: {
						int tmp14 = ::__hxcpp_memory_get_byte(data->buffer->b,(data->byteOffset + ((offset + (int)1))));
						Dynamic tmp15 = (int(tmp14) & int((int)255));
						int r = tmp15;
						int tmp16 = ::__hxcpp_memory_get_byte(data->buffer->b,(data->byteOffset + ((offset + (int)2))));
						Dynamic tmp17 = (int(tmp16) & int((int)255));
						int g = tmp17;
						int tmp18 = ::__hxcpp_memory_get_byte(data->buffer->b,(data->byteOffset + ((offset + (int)3))));
						Dynamic tmp19 = (int(tmp18) & int((int)255));
						int b = tmp19;
						int tmp20 = ::__hxcpp_memory_get_byte(data->buffer->b,(data->byteOffset + offset));
						Dynamic tmp21 = (int(tmp20) & int((int)255));
						int a = tmp21;
						int tmp22 = (int(r) & int((int)255));
						int tmp23 = (int(tmp22) << int((int)24));
						int tmp24 = (int(g) & int((int)255));
						int tmp25 = (int(tmp24) << int((int)16));
						int tmp26 = (int(tmp23) | int(tmp25));
						int tmp27 = (int(b) & int((int)255));
						int tmp28 = (int(tmp27) << int((int)8));
						int tmp29 = (int(tmp26) | int(tmp28));
						int tmp30 = (int(a) & int((int)255));
						int tmp31 = (int(tmp29) | int(tmp30));
						hitColor = tmp31;
					}
					;break;
				}
				bool tmp14 = premultiplied;
				if ((tmp14)){
					int tmp15 = (int(hitColor) & int((int)255));
					int tmp16 = tmp15;
					bool tmp17 = (tmp16 != (int)0);
					bool tmp18;
					if ((tmp17)){
						int tmp19 = (int(hitColor) & int((int)255));
						int tmp20 = tmp19;
						int tmp21 = tmp20;
						tmp18 = (tmp21 != (int)255);
					}
					else{
						tmp18 = false;
					}
					if ((tmp18)){
						int tmp19 = (int(hitColor) & int((int)255));
						int tmp20 = tmp19;
						Float tmp21 = (Float(((Float)255.0)) / Float(tmp20));
						::lime::math::color::_RGBA::RGBA_Impl__obj::unmult = tmp21;
						{
							Dynamic tmp22;
							{
								::lime::utils::ArrayBufferView tmp23 = ::lime::math::color::_RGBA::RGBA_Impl__obj::__clamp;
								::lime::utils::ArrayBufferView this1 = tmp23;
								int tmp24 = (int(hitColor) >> int((int)24));
								int tmp25 = tmp24;
								int tmp26 = (int(tmp25) & int((int)255));
								int tmp27 = tmp26;
								Float tmp28 = ::lime::math::color::_RGBA::RGBA_Impl__obj::unmult;
								Float tmp29 = (tmp27 * tmp28);
								int tmp30 = ::Math_obj::round(tmp29);
								int idx = tmp30;
								int tmp31 = ::__hxcpp_memory_get_byte(this1->buffer->b,(this1->byteOffset + idx));
								tmp22 = (int(tmp31) & int((int)255));
							}
							int r = tmp22;
							Dynamic tmp23;
							{
								::lime::utils::ArrayBufferView tmp24 = ::lime::math::color::_RGBA::RGBA_Impl__obj::__clamp;
								::lime::utils::ArrayBufferView this1 = tmp24;
								int tmp25 = (int(hitColor) >> int((int)16));
								int tmp26 = tmp25;
								int tmp27 = (int(tmp26) & int((int)255));
								int tmp28 = tmp27;
								Float tmp29 = ::lime::math::color::_RGBA::RGBA_Impl__obj::unmult;
								Float tmp30 = (tmp28 * tmp29);
								int tmp31 = ::Math_obj::round(tmp30);
								int idx = tmp31;
								int tmp32 = ::__hxcpp_memory_get_byte(this1->buffer->b,(this1->byteOffset + idx));
								tmp23 = (int(tmp32) & int((int)255));
							}
							int g = tmp23;
							Dynamic tmp24;
							{
								::lime::utils::ArrayBufferView tmp25 = ::lime::math::color::_RGBA::RGBA_Impl__obj::__clamp;
								::lime::utils::ArrayBufferView this1 = tmp25;
								int tmp26 = (int(hitColor) >> int((int)8));
								int tmp27 = tmp26;
								int tmp28 = (int(tmp27) & int((int)255));
								int tmp29 = tmp28;
								Float tmp30 = ::lime::math::color::_RGBA::RGBA_Impl__obj::unmult;
								Float tmp31 = (tmp29 * tmp30);
								int tmp32 = ::Math_obj::round(tmp31);
								int idx = tmp32;
								int tmp33 = ::__hxcpp_memory_get_byte(this1->buffer->b,(this1->byteOffset + idx));
								tmp24 = (int(tmp33) & int((int)255));
							}
							int b = tmp24;
							int tmp25 = (int(r) & int((int)255));
							int tmp26 = (int(tmp25) << int((int)24));
							int tmp27 = (int(g) & int((int)255));
							int tmp28 = (int(tmp27) << int((int)16));
							int tmp29 = (int(tmp26) | int(tmp28));
							int tmp30 = (int(b) & int((int)255));
							int tmp31 = (int(tmp30) << int((int)8));
							int tmp32 = (int(tmp29) | int(tmp31));
							int tmp33 = (int(hitColor) & int((int)255));
							int tmp34 = tmp33;
							int tmp35 = (int(tmp34) & int((int)255));
							int tmp36 = (int(tmp32) | int(tmp35));
							hitColor = tmp36;
						}
					}
				}
			}
			bool tmp6 = image->get_transparent();
			bool tmp7 = !(tmp6);
			if ((tmp7)){
				{
					{
						int tmp8 = (int(fillColor) >> int((int)24));
						int tmp9 = tmp8;
						int tmp10 = (int(tmp9) & int((int)255));
						int tmp11 = tmp10;
						int tmp12 = (int(tmp11) & int((int)255));
						int tmp13 = (int(tmp12) << int((int)24));
						int tmp14 = (int(fillColor) >> int((int)16));
						int tmp15 = tmp14;
						int tmp16 = (int(tmp15) & int((int)255));
						int tmp17 = tmp16;
						int tmp18 = (int(tmp17) & int((int)255));
						int tmp19 = (int(tmp18) << int((int)16));
						int tmp20 = (int(tmp13) | int(tmp19));
						int tmp21 = (int(fillColor) >> int((int)8));
						int tmp22 = tmp21;
						int tmp23 = (int(tmp22) & int((int)255));
						int tmp24 = tmp23;
						int tmp25 = (int(tmp24) & int((int)255));
						int tmp26 = (int(tmp25) << int((int)8));
						int tmp27 = (int(tmp20) | int(tmp26));
						int tmp28 = (int)255;
						int tmp29 = (int(tmp27) | int(tmp28));
						fillColor = tmp29;
					}
					(int)255;
				}
				{
					{
						int tmp8 = (int(hitColor) >> int((int)24));
						int tmp9 = tmp8;
						int tmp10 = (int(tmp9) & int((int)255));
						int tmp11 = tmp10;
						int tmp12 = (int(tmp11) & int((int)255));
						int tmp13 = (int(tmp12) << int((int)24));
						int tmp14 = (int(hitColor) >> int((int)16));
						int tmp15 = tmp14;
						int tmp16 = (int(tmp15) & int((int)255));
						int tmp17 = tmp16;
						int tmp18 = (int(tmp17) & int((int)255));
						int tmp19 = (int(tmp18) << int((int)16));
						int tmp20 = (int(tmp13) | int(tmp19));
						int tmp21 = (int(hitColor) >> int((int)8));
						int tmp22 = tmp21;
						int tmp23 = (int(tmp22) & int((int)255));
						int tmp24 = tmp23;
						int tmp25 = (int(tmp24) & int((int)255));
						int tmp26 = (int(tmp25) << int((int)8));
						int tmp27 = (int(tmp20) | int(tmp26));
						int tmp28 = (int)255;
						int tmp29 = (int(tmp27) | int(tmp28));
						hitColor = tmp29;
					}
					(int)255;
				}
			}
			bool tmp8 = (fillColor == hitColor);
			if ((tmp8)){
				return null();
			}
			bool tmp9 = premultiplied;
			if ((tmp9)){
				int tmp10 = (int(fillColor) & int((int)255));
				int tmp11 = tmp10;
				bool tmp12 = (tmp11 == (int)0);
				if ((tmp12)){
					bool tmp13 = (fillColor != (int)0);
					if ((tmp13)){
						fillColor = (int)0;
					}
				}
				else{
					int tmp13 = (int(fillColor) & int((int)255));
					int tmp14 = tmp13;
					bool tmp15 = (tmp14 != (int)255);
					if ((tmp15)){
						Dynamic tmp16;
						{
							::lime::utils::ArrayBufferView tmp17 = ::lime::math::color::_RGBA::RGBA_Impl__obj::__alpha16;
							::lime::utils::ArrayBufferView this1 = tmp17;
							tmp16 = ::__hxcpp_memory_get_ui32(this1->buffer->b,(this1->byteOffset + (((int(fillColor) & int((int)255))) * (int)4)));
						}
						::lime::math::color::_RGBA::RGBA_Impl__obj::a16 = tmp16;
						{
							int tmp17 = (int(fillColor) >> int((int)24));
							int tmp18 = tmp17;
							int tmp19 = (int(tmp18) & int((int)255));
							int tmp20 = tmp19;
							int tmp21 = ::lime::math::color::_RGBA::RGBA_Impl__obj::a16;
							int tmp22 = (tmp20 * tmp21);
							int tmp23 = (int(tmp22) >> int((int)16));
							int tmp24 = (int(tmp23) & int((int)255));
							int tmp25 = (int(tmp24) << int((int)24));
							int tmp26 = (int(fillColor) >> int((int)16));
							int tmp27 = tmp26;
							int tmp28 = (int(tmp27) & int((int)255));
							int tmp29 = tmp28;
							int tmp30 = ::lime::math::color::_RGBA::RGBA_Impl__obj::a16;
							int tmp31 = (tmp29 * tmp30);
							int tmp32 = (int(tmp31) >> int((int)16));
							int tmp33 = (int(tmp32) & int((int)255));
							int tmp34 = (int(tmp33) << int((int)16));
							int tmp35 = (int(tmp25) | int(tmp34));
							int tmp36 = (int(fillColor) >> int((int)8));
							int tmp37 = tmp36;
							int tmp38 = (int(tmp37) & int((int)255));
							int tmp39 = tmp38;
							int tmp40 = ::lime::math::color::_RGBA::RGBA_Impl__obj::a16;
							int tmp41 = (tmp39 * tmp40);
							int tmp42 = (int(tmp41) >> int((int)16));
							int tmp43 = (int(tmp42) & int((int)255));
							int tmp44 = (int(tmp43) << int((int)8));
							int tmp45 = (int(tmp35) | int(tmp44));
							int tmp46 = (int(fillColor) & int((int)255));
							int tmp47 = tmp46;
							int tmp48 = (int(tmp47) & int((int)255));
							int tmp49 = (int(tmp45) | int(tmp48));
							fillColor = tmp49;
						}
					}
				}
			}
			Array< int > dx = Array_obj< int >::__new().Add((int)0).Add((int)-1).Add((int)1).Add((int)0);
			Array< int > dy = Array_obj< int >::__new().Add((int)-1).Add((int)0).Add((int)0).Add((int)1);
			int tmp10 = image->offsetX;
			int tmp11 = -(tmp10);
			int minX = tmp11;
			int tmp12 = image->offsetY;
			int tmp13 = -(tmp12);
			int minY = tmp13;
			int tmp14 = (minX + image->width);
			int maxX = tmp14;
			int tmp15 = (minY + image->height);
			int maxY = tmp15;
			Array< int > queue = Array_obj< int >::__new();
			int tmp16 = x;
			queue->push(tmp16);
			int tmp17 = y;
			queue->push(tmp17);
			Dynamic curPointX;
			Dynamic curPointY;
			int nextPointX;
			int nextPointY;
			int nextPointOffset;
			int readColor;
			while((true)){
				bool tmp18 = (queue->length > (int)0);
				bool tmp19 = !(tmp18);
				if ((tmp19)){
					break;
				}
				Dynamic tmp20 = queue->pop();
				curPointY = tmp20;
				Dynamic tmp21 = queue->pop();
				curPointX = tmp21;
				{
					int _g = (int)0;
					while((true)){
						bool tmp22 = (_g < (int)4);
						bool tmp23 = !(tmp22);
						if ((tmp23)){
							break;
						}
						int tmp24 = (_g)++;
						int i = tmp24;
						Dynamic tmp25 = curPointX;
						int tmp26 = dx->__get(i);
						int tmp27 = (tmp25 + tmp26);
						nextPointX = tmp27;
						Dynamic tmp28 = curPointY;
						int tmp29 = dy->__get(i);
						int tmp30 = (tmp28 + tmp29);
						nextPointY = tmp30;
						bool tmp31 = (nextPointX < minX);
						bool tmp32 = !(tmp31);
						bool tmp33 = tmp32;
						bool tmp34;
						if ((tmp33)){
							tmp34 = (nextPointY < minY);
						}
						else{
							tmp34 = true;
						}
						bool tmp35 = !(tmp34);
						bool tmp36 = tmp35;
						bool tmp37;
						if ((tmp36)){
							tmp37 = (nextPointX >= maxX);
						}
						else{
							tmp37 = true;
						}
						bool tmp38 = !(tmp37);
						bool tmp39;
						if ((tmp38)){
							tmp39 = (nextPointY >= maxY);
						}
						else{
							tmp39 = true;
						}
						if ((tmp39)){
							continue;
						}
						int tmp40 = (nextPointY * image->width);
						int tmp41 = nextPointX;
						int tmp42 = (tmp40 + tmp41);
						int tmp43 = (tmp42 * (int)4);
						nextPointOffset = tmp43;
						{
							int tmp44 = format1;
							switch( (int)(tmp44)){
								case (int)2: {
									int tmp45 = ::__hxcpp_memory_get_byte(data->buffer->b,(data->byteOffset + ((nextPointOffset + (int)2))));
									Dynamic tmp46 = (int(tmp45) & int((int)255));
									int r = tmp46;
									int tmp47 = ::__hxcpp_memory_get_byte(data->buffer->b,(data->byteOffset + ((nextPointOffset + (int)1))));
									Dynamic tmp48 = (int(tmp47) & int((int)255));
									int g = tmp48;
									int tmp49 = ::__hxcpp_memory_get_byte(data->buffer->b,(data->byteOffset + nextPointOffset));
									Dynamic tmp50 = (int(tmp49) & int((int)255));
									int b = tmp50;
									int tmp51 = ::__hxcpp_memory_get_byte(data->buffer->b,(data->byteOffset + ((nextPointOffset + (int)3))));
									Dynamic tmp52 = (int(tmp51) & int((int)255));
									int a = tmp52;
									int tmp53 = (int(r) & int((int)255));
									int tmp54 = (int(tmp53) << int((int)24));
									int tmp55 = (int(g) & int((int)255));
									int tmp56 = (int(tmp55) << int((int)16));
									int tmp57 = (int(tmp54) | int(tmp56));
									int tmp58 = (int(b) & int((int)255));
									int tmp59 = (int(tmp58) << int((int)8));
									int tmp60 = (int(tmp57) | int(tmp59));
									int tmp61 = (int(a) & int((int)255));
									int tmp62 = (int(tmp60) | int(tmp61));
									readColor = tmp62;
								}
								;break;
								case (int)0: {
									int tmp45 = ::__hxcpp_memory_get_byte(data->buffer->b,(data->byteOffset + nextPointOffset));
									Dynamic tmp46 = (int(tmp45) & int((int)255));
									int r = tmp46;
									int tmp47 = ::__hxcpp_memory_get_byte(data->buffer->b,(data->byteOffset + ((nextPointOffset + (int)1))));
									Dynamic tmp48 = (int(tmp47) & int((int)255));
									int g = tmp48;
									int tmp49 = ::__hxcpp_memory_get_byte(data->buffer->b,(data->byteOffset + ((nextPointOffset + (int)2))));
									Dynamic tmp50 = (int(tmp49) & int((int)255));
									int b = tmp50;
									int tmp51 = ::__hxcpp_memory_get_byte(data->buffer->b,(data->byteOffset + ((nextPointOffset + (int)3))));
									Dynamic tmp52 = (int(tmp51) & int((int)255));
									int a = tmp52;
									int tmp53 = (int(r) & int((int)255));
									int tmp54 = (int(tmp53) << int((int)24));
									int tmp55 = (int(g) & int((int)255));
									int tmp56 = (int(tmp55) << int((int)16));
									int tmp57 = (int(tmp54) | int(tmp56));
									int tmp58 = (int(b) & int((int)255));
									int tmp59 = (int(tmp58) << int((int)8));
									int tmp60 = (int(tmp57) | int(tmp59));
									int tmp61 = (int(a) & int((int)255));
									int tmp62 = (int(tmp60) | int(tmp61));
									readColor = tmp62;
								}
								;break;
								case (int)1: {
									int tmp45 = ::__hxcpp_memory_get_byte(data->buffer->b,(data->byteOffset + ((nextPointOffset + (int)1))));
									Dynamic tmp46 = (int(tmp45) & int((int)255));
									int r = tmp46;
									int tmp47 = ::__hxcpp_memory_get_byte(data->buffer->b,(data->byteOffset + ((nextPointOffset + (int)2))));
									Dynamic tmp48 = (int(tmp47) & int((int)255));
									int g = tmp48;
									int tmp49 = ::__hxcpp_memory_get_byte(data->buffer->b,(data->byteOffset + ((nextPointOffset + (int)3))));
									Dynamic tmp50 = (int(tmp49) & int((int)255));
									int b = tmp50;
									int tmp51 = ::__hxcpp_memory_get_byte(data->buffer->b,(data->byteOffset + nextPointOffset));
									Dynamic tmp52 = (int(tmp51) & int((int)255));
									int a = tmp52;
									int tmp53 = (int(r) & int((int)255));
									int tmp54 = (int(tmp53) << int((int)24));
									int tmp55 = (int(g) & int((int)255));
									int tmp56 = (int(tmp55) << int((int)16));
									int tmp57 = (int(tmp54) | int(tmp56));
									int tmp58 = (int(b) & int((int)255));
									int tmp59 = (int(tmp58) << int((int)8));
									int tmp60 = (int(tmp57) | int(tmp59));
									int tmp61 = (int(a) & int((int)255));
									int tmp62 = (int(tmp60) | int(tmp61));
									readColor = tmp62;
								}
								;break;
							}
							bool tmp45 = premultiplied;
							if ((tmp45)){
								int tmp46 = (int(readColor) & int((int)255));
								int tmp47 = tmp46;
								bool tmp48 = (tmp47 != (int)0);
								bool tmp49;
								if ((tmp48)){
									int tmp50 = (int(readColor) & int((int)255));
									int tmp51 = tmp50;
									int tmp52 = tmp51;
									tmp49 = (tmp52 != (int)255);
								}
								else{
									tmp49 = false;
								}
								if ((tmp49)){
									int tmp50 = (int(readColor) & int((int)255));
									int tmp51 = tmp50;
									Float tmp52 = (Float(((Float)255.0)) / Float(tmp51));
									::lime::math::color::_RGBA::RGBA_Impl__obj::unmult = tmp52;
									{
										Dynamic tmp53;
										{
											::lime::utils::ArrayBufferView tmp54 = ::lime::math::color::_RGBA::RGBA_Impl__obj::__clamp;
											::lime::utils::ArrayBufferView this1 = tmp54;
											int tmp55 = (int(readColor) >> int((int)24));
											int tmp56 = tmp55;
											int tmp57 = (int(tmp56) & int((int)255));
											int tmp58 = tmp57;
											Float tmp59 = ::lime::math::color::_RGBA::RGBA_Impl__obj::unmult;
											Float tmp60 = (tmp58 * tmp59);
											int tmp61 = ::Math_obj::round(tmp60);
											int idx = tmp61;
											int tmp62 = ::__hxcpp_memory_get_byte(this1->buffer->b,(this1->byteOffset + idx));
											tmp53 = (int(tmp62) & int((int)255));
										}
										int r = tmp53;
										Dynamic tmp54;
										{
											::lime::utils::ArrayBufferView tmp55 = ::lime::math::color::_RGBA::RGBA_Impl__obj::__clamp;
											::lime::utils::ArrayBufferView this1 = tmp55;
											int tmp56 = (int(readColor) >> int((int)16));
											int tmp57 = tmp56;
											int tmp58 = (int(tmp57) & int((int)255));
											int tmp59 = tmp58;
											Float tmp60 = ::lime::math::color::_RGBA::RGBA_Impl__obj::unmult;
											Float tmp61 = (tmp59 * tmp60);
											int tmp62 = ::Math_obj::round(tmp61);
											int idx = tmp62;
											int tmp63 = ::__hxcpp_memory_get_byte(this1->buffer->b,(this1->byteOffset + idx));
											tmp54 = (int(tmp63) & int((int)255));
										}
										int g = tmp54;
										Dynamic tmp55;
										{
											::lime::utils::ArrayBufferView tmp56 = ::lime::math::color::_RGBA::RGBA_Impl__obj::__clamp;
											::lime::utils::ArrayBufferView this1 = tmp56;
											int tmp57 = (int(readColor) >> int((int)8));
											int tmp58 = tmp57;
											int tmp59 = (int(tmp58) & int((int)255));
											int tmp60 = tmp59;
											Float tmp61 = ::lime::math::color::_RGBA::RGBA_Impl__obj::unmult;
											Float tmp62 = (tmp60 * tmp61);
											int tmp63 = ::Math_obj::round(tmp62);
											int idx = tmp63;
											int tmp64 = ::__hxcpp_memory_get_byte(this1->buffer->b,(this1->byteOffset + idx));
											tmp55 = (int(tmp64) & int((int)255));
										}
										int b = tmp55;
										int tmp56 = (int(r) & int((int)255));
										int tmp57 = (int(tmp56) << int((int)24));
										int tmp58 = (int(g) & int((int)255));
										int tmp59 = (int(tmp58) << int((int)16));
										int tmp60 = (int(tmp57) | int(tmp59));
										int tmp61 = (int(b) & int((int)255));
										int tmp62 = (int(tmp61) << int((int)8));
										int tmp63 = (int(tmp60) | int(tmp62));
										int tmp64 = (int(readColor) & int((int)255));
										int tmp65 = tmp64;
										int tmp66 = (int(tmp65) & int((int)255));
										int tmp67 = (int(tmp63) | int(tmp66));
										readColor = tmp67;
									}
								}
							}
						}
						bool tmp44 = (readColor == hitColor);
						if ((tmp44)){
							{
								int tmp45 = format1;
								switch( (int)(tmp45)){
									case (int)2: {
										{
											int tmp46 = (int(fillColor) >> int((int)8));
											int tmp47 = tmp46;
											int tmp48 = (int(tmp47) & int((int)255));
											int val = tmp48;
											::__hxcpp_memory_set_byte(data->buffer->b,(data->byteOffset + nextPointOffset),val);
											val;
										}
										{
											int tmp46 = (int(fillColor) >> int((int)16));
											int tmp47 = tmp46;
											int tmp48 = (int(tmp47) & int((int)255));
											int val = tmp48;
											::__hxcpp_memory_set_byte(data->buffer->b,(data->byteOffset + ((nextPointOffset + (int)1))),val);
											val;
										}
										{
											int tmp46 = (int(fillColor) >> int((int)24));
											int tmp47 = tmp46;
											int tmp48 = (int(tmp47) & int((int)255));
											int val = tmp48;
											::__hxcpp_memory_set_byte(data->buffer->b,(data->byteOffset + ((nextPointOffset + (int)2))),val);
											val;
										}
										{
											int tmp46 = (int(fillColor) & int((int)255));
											int val = tmp46;
											::__hxcpp_memory_set_byte(data->buffer->b,(data->byteOffset + ((nextPointOffset + (int)3))),val);
											val;
										}
									}
									;break;
									case (int)0: {
										{
											int tmp46 = (int(fillColor) >> int((int)24));
											int tmp47 = tmp46;
											int tmp48 = (int(tmp47) & int((int)255));
											int val = tmp48;
											::__hxcpp_memory_set_byte(data->buffer->b,(data->byteOffset + nextPointOffset),val);
											val;
										}
										{
											int tmp46 = (int(fillColor) >> int((int)16));
											int tmp47 = tmp46;
											int tmp48 = (int(tmp47) & int((int)255));
											int val = tmp48;
											::__hxcpp_memory_set_byte(data->buffer->b,(data->byteOffset + ((nextPointOffset + (int)1))),val);
											val;
										}
										{
											int tmp46 = (int(fillColor) >> int((int)8));
											int tmp47 = tmp46;
											int tmp48 = (int(tmp47) & int((int)255));
											int val = tmp48;
											::__hxcpp_memory_set_byte(data->buffer->b,(data->byteOffset + ((nextPointOffset + (int)2))),val);
											val;
										}
										{
											int tmp46 = (int(fillColor) & int((int)255));
											int val = tmp46;
											::__hxcpp_memory_set_byte(data->buffer->b,(data->byteOffset + ((nextPointOffset + (int)3))),val);
											val;
										}
									}
									;break;
									case (int)1: {
										{
											int tmp46 = (int(fillColor) & int((int)255));
											int val = tmp46;
											::__hxcpp_memory_set_byte(data->buffer->b,(data->byteOffset + nextPointOffset),val);
											val;
										}
										{
											int tmp46 = (int(fillColor) >> int((int)24));
											int tmp47 = tmp46;
											int tmp48 = (int(tmp47) & int((int)255));
											int val = tmp48;
											::__hxcpp_memory_set_byte(data->buffer->b,(data->byteOffset + ((nextPointOffset + (int)1))),val);
											val;
										}
										{
											int tmp46 = (int(fillColor) >> int((int)16));
											int tmp47 = tmp46;
											int tmp48 = (int(tmp47) & int((int)255));
											int val = tmp48;
											::__hxcpp_memory_set_byte(data->buffer->b,(data->byteOffset + ((nextPointOffset + (int)2))),val);
											val;
										}
										{
											int tmp46 = (int(fillColor) >> int((int)8));
											int tmp47 = tmp46;
											int tmp48 = (int(tmp47) & int((int)255));
											int val = tmp48;
											::__hxcpp_memory_set_byte(data->buffer->b,(data->byteOffset + ((nextPointOffset + (int)3))),val);
											val;
										}
									}
									;break;
								}
							}
							int tmp45 = nextPointX;
							queue->push(tmp45);
							int tmp46 = nextPointY;
							queue->push(tmp46);
						}
					}
				}
			}
		}
		image->dirty = true;
		(image->version)++;
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC5(ImageDataUtil_obj,floodFill,(void))

::lime::math::Rectangle ImageDataUtil_obj::getColorBoundsRect( ::lime::graphics::Image image,int mask,int color,hx::Null< bool >  __o_findColor,int format){
bool findColor = __o_findColor.Default(true);
{
		int tmp = (image->width + (int)1);
		int left = tmp;
		int right = (int)0;
		int tmp1 = (image->height + (int)1);
		int top = tmp1;
		int bottom = (int)0;
		int _color;
		int _mask;
		int tmp2 = format;
		switch( (int)(tmp2)){
			case (int)1: {
				int tmp3;
				{
					int argb = color;
					{
						int tmp4;
						{
							int rgba = (int)0;
							tmp4 = rgba;
						}
						int rgba = tmp4;
						{
							int tmp5 = (int(argb) >> int((int)16));
							int tmp6 = tmp5;
							int tmp7 = (int(tmp6) & int((int)255));
							int tmp8 = tmp7;
							int tmp9 = (int(tmp8) & int((int)255));
							int tmp10 = (int(tmp9) << int((int)24));
							int tmp11 = (int(argb) >> int((int)8));
							int tmp12 = tmp11;
							int tmp13 = (int(tmp12) & int((int)255));
							int tmp14 = tmp13;
							int tmp15 = (int(tmp14) & int((int)255));
							int tmp16 = (int(tmp15) << int((int)16));
							int tmp17 = (int(tmp10) | int(tmp16));
							int tmp18 = (int(argb) & int((int)255));
							int tmp19 = tmp18;
							int tmp20 = (int(tmp19) & int((int)255));
							int tmp21 = (int(tmp20) << int((int)8));
							int tmp22 = (int(tmp17) | int(tmp21));
							int tmp23 = (int(argb) >> int((int)24));
							int tmp24 = tmp23;
							int tmp25 = (int(tmp24) & int((int)255));
							int tmp26 = tmp25;
							int tmp27 = (int(tmp26) & int((int)255));
							int tmp28 = (int(tmp22) | int(tmp27));
							rgba = tmp28;
						}
						tmp3 = rgba;
					}
				}
				_color = tmp3;
				int tmp4;
				{
					int argb = mask;
					{
						int tmp5;
						{
							int rgba = (int)0;
							tmp5 = rgba;
						}
						int rgba = tmp5;
						{
							int tmp6 = (int(argb) >> int((int)16));
							int tmp7 = tmp6;
							int tmp8 = (int(tmp7) & int((int)255));
							int tmp9 = tmp8;
							int tmp10 = (int(tmp9) & int((int)255));
							int tmp11 = (int(tmp10) << int((int)24));
							int tmp12 = (int(argb) >> int((int)8));
							int tmp13 = tmp12;
							int tmp14 = (int(tmp13) & int((int)255));
							int tmp15 = tmp14;
							int tmp16 = (int(tmp15) & int((int)255));
							int tmp17 = (int(tmp16) << int((int)16));
							int tmp18 = (int(tmp11) | int(tmp17));
							int tmp19 = (int(argb) & int((int)255));
							int tmp20 = tmp19;
							int tmp21 = (int(tmp20) & int((int)255));
							int tmp22 = (int(tmp21) << int((int)8));
							int tmp23 = (int(tmp18) | int(tmp22));
							int tmp24 = (int(argb) >> int((int)24));
							int tmp25 = tmp24;
							int tmp26 = (int(tmp25) & int((int)255));
							int tmp27 = tmp26;
							int tmp28 = (int(tmp27) & int((int)255));
							int tmp29 = (int(tmp23) | int(tmp28));
							rgba = tmp29;
						}
						tmp4 = rgba;
					}
				}
				_mask = tmp4;
			}
			;break;
			case (int)2: {
				int tmp3;
				{
					int bgra = color;
					{
						int tmp4;
						{
							int rgba = (int)0;
							tmp4 = rgba;
						}
						int rgba = tmp4;
						{
							int tmp5 = (int(bgra) >> int((int)8));
							int tmp6 = tmp5;
							int tmp7 = (int(tmp6) & int((int)255));
							int tmp8 = tmp7;
							int tmp9 = (int(tmp8) & int((int)255));
							int tmp10 = (int(tmp9) << int((int)24));
							int tmp11 = (int(bgra) >> int((int)16));
							int tmp12 = tmp11;
							int tmp13 = (int(tmp12) & int((int)255));
							int tmp14 = tmp13;
							int tmp15 = (int(tmp14) & int((int)255));
							int tmp16 = (int(tmp15) << int((int)16));
							int tmp17 = (int(tmp10) | int(tmp16));
							int tmp18 = (int(bgra) >> int((int)24));
							int tmp19 = tmp18;
							int tmp20 = (int(tmp19) & int((int)255));
							int tmp21 = tmp20;
							int tmp22 = (int(tmp21) & int((int)255));
							int tmp23 = (int(tmp22) << int((int)8));
							int tmp24 = (int(tmp17) | int(tmp23));
							int tmp25 = (int(bgra) & int((int)255));
							int tmp26 = tmp25;
							int tmp27 = (int(tmp26) & int((int)255));
							int tmp28 = (int(tmp24) | int(tmp27));
							rgba = tmp28;
						}
						tmp3 = rgba;
					}
				}
				_color = tmp3;
				int tmp4;
				{
					int bgra = mask;
					{
						int tmp5;
						{
							int rgba = (int)0;
							tmp5 = rgba;
						}
						int rgba = tmp5;
						{
							int tmp6 = (int(bgra) >> int((int)8));
							int tmp7 = tmp6;
							int tmp8 = (int(tmp7) & int((int)255));
							int tmp9 = tmp8;
							int tmp10 = (int(tmp9) & int((int)255));
							int tmp11 = (int(tmp10) << int((int)24));
							int tmp12 = (int(bgra) >> int((int)16));
							int tmp13 = tmp12;
							int tmp14 = (int(tmp13) & int((int)255));
							int tmp15 = tmp14;
							int tmp16 = (int(tmp15) & int((int)255));
							int tmp17 = (int(tmp16) << int((int)16));
							int tmp18 = (int(tmp11) | int(tmp17));
							int tmp19 = (int(bgra) >> int((int)24));
							int tmp20 = tmp19;
							int tmp21 = (int(tmp20) & int((int)255));
							int tmp22 = tmp21;
							int tmp23 = (int(tmp22) & int((int)255));
							int tmp24 = (int(tmp23) << int((int)8));
							int tmp25 = (int(tmp18) | int(tmp24));
							int tmp26 = (int(bgra) & int((int)255));
							int tmp27 = tmp26;
							int tmp28 = (int(tmp27) & int((int)255));
							int tmp29 = (int(tmp25) | int(tmp28));
							rgba = tmp29;
						}
						tmp4 = rgba;
					}
				}
				_mask = tmp4;
			}
			;break;
			default: {
				_color = color;
				_mask = mask;
			}
		}
		bool tmp3 = image->get_transparent();
		bool tmp4 = !(tmp3);
		if ((tmp4)){
			{
				{
					int tmp5 = (int(_color) >> int((int)24));
					int tmp6 = tmp5;
					int tmp7 = (int(tmp6) & int((int)255));
					int tmp8 = tmp7;
					int tmp9 = (int(tmp8) & int((int)255));
					int tmp10 = (int(tmp9) << int((int)24));
					int tmp11 = (int(_color) >> int((int)16));
					int tmp12 = tmp11;
					int tmp13 = (int(tmp12) & int((int)255));
					int tmp14 = tmp13;
					int tmp15 = (int(tmp14) & int((int)255));
					int tmp16 = (int(tmp15) << int((int)16));
					int tmp17 = (int(tmp10) | int(tmp16));
					int tmp18 = (int(_color) >> int((int)8));
					int tmp19 = tmp18;
					int tmp20 = (int(tmp19) & int((int)255));
					int tmp21 = tmp20;
					int tmp22 = (int(tmp21) & int((int)255));
					int tmp23 = (int(tmp22) << int((int)8));
					int tmp24 = (int(tmp17) | int(tmp23));
					int tmp25 = (int)255;
					int tmp26 = (int(tmp24) | int(tmp25));
					_color = tmp26;
				}
				(int)255;
			}
			{
				{
					int tmp5 = (int(_mask) >> int((int)24));
					int tmp6 = tmp5;
					int tmp7 = (int(tmp6) & int((int)255));
					int tmp8 = tmp7;
					int tmp9 = (int(tmp8) & int((int)255));
					int tmp10 = (int(tmp9) << int((int)24));
					int tmp11 = (int(_mask) >> int((int)16));
					int tmp12 = tmp11;
					int tmp13 = (int(tmp12) & int((int)255));
					int tmp14 = tmp13;
					int tmp15 = (int(tmp14) & int((int)255));
					int tmp16 = (int(tmp15) << int((int)16));
					int tmp17 = (int(tmp10) | int(tmp16));
					int tmp18 = (int(_mask) >> int((int)8));
					int tmp19 = tmp18;
					int tmp20 = (int(tmp19) & int((int)255));
					int tmp21 = tmp20;
					int tmp22 = (int(tmp21) & int((int)255));
					int tmp23 = (int(tmp22) << int((int)8));
					int tmp24 = (int(tmp17) | int(tmp23));
					int tmp25 = (int)255;
					int tmp26 = (int(tmp24) | int(tmp25));
					_mask = tmp26;
				}
				(int)255;
			}
		}
		int pixel;
		bool hit;
		{
			int _g1 = (int)0;
			int _g = image->width;
			while((true)){
				bool tmp5 = (_g1 < _g);
				bool tmp6 = !(tmp5);
				if ((tmp6)){
					break;
				}
				int tmp7 = (_g1)++;
				int x = tmp7;
				hit = false;
				{
					int _g3 = (int)0;
					int _g2 = image->height;
					while((true)){
						bool tmp8 = (_g3 < _g2);
						bool tmp9 = !(tmp8);
						if ((tmp9)){
							break;
						}
						int tmp10 = (_g3)++;
						int y = tmp10;
						int tmp11 = x;
						int tmp12 = y;
						int tmp13 = image->getPixel32(tmp11,tmp12,(int)0);
						pixel = tmp13;
						bool tmp14 = findColor;
						bool tmp15;
						if ((tmp14)){
							int tmp16 = (int(pixel) & int(_mask));
							int tmp17 = _color;
							tmp15 = (tmp16 == tmp17);
						}
						else{
							int tmp16 = (int(pixel) & int(_mask));
							int tmp17 = _color;
							tmp15 = (tmp16 != tmp17);
						}
						hit = tmp15;
						bool tmp16 = hit;
						if ((tmp16)){
							bool tmp17 = (x < left);
							if ((tmp17)){
								left = x;
							}
							break;
						}
					}
				}
				bool tmp8 = hit;
				if ((tmp8)){
					break;
				}
			}
		}
		int ix;
		{
			int _g1 = (int)0;
			int _g = image->width;
			while((true)){
				bool tmp5 = (_g1 < _g);
				bool tmp6 = !(tmp5);
				if ((tmp6)){
					break;
				}
				int tmp7 = (_g1)++;
				int x = tmp7;
				int tmp8 = (image->width - (int)1);
				int tmp9 = x;
				int tmp10 = (tmp8 - tmp9);
				ix = tmp10;
				hit = false;
				{
					int _g3 = (int)0;
					int _g2 = image->height;
					while((true)){
						bool tmp11 = (_g3 < _g2);
						bool tmp12 = !(tmp11);
						if ((tmp12)){
							break;
						}
						int tmp13 = (_g3)++;
						int y = tmp13;
						int tmp14 = ix;
						int tmp15 = y;
						int tmp16 = image->getPixel32(tmp14,tmp15,(int)0);
						pixel = tmp16;
						bool tmp17 = findColor;
						bool tmp18;
						if ((tmp17)){
							int tmp19 = (int(pixel) & int(_mask));
							int tmp20 = _color;
							tmp18 = (tmp19 == tmp20);
						}
						else{
							int tmp19 = (int(pixel) & int(_mask));
							int tmp20 = _color;
							tmp18 = (tmp19 != tmp20);
						}
						hit = tmp18;
						bool tmp19 = hit;
						if ((tmp19)){
							bool tmp20 = (ix > right);
							if ((tmp20)){
								right = ix;
							}
							break;
						}
					}
				}
				bool tmp11 = hit;
				if ((tmp11)){
					break;
				}
			}
		}
		{
			int _g1 = (int)0;
			int _g = image->height;
			while((true)){
				bool tmp5 = (_g1 < _g);
				bool tmp6 = !(tmp5);
				if ((tmp6)){
					break;
				}
				int tmp7 = (_g1)++;
				int y = tmp7;
				hit = false;
				{
					int _g3 = (int)0;
					int _g2 = image->width;
					while((true)){
						bool tmp8 = (_g3 < _g2);
						bool tmp9 = !(tmp8);
						if ((tmp9)){
							break;
						}
						int tmp10 = (_g3)++;
						int x = tmp10;
						int tmp11 = x;
						int tmp12 = y;
						int tmp13 = image->getPixel32(tmp11,tmp12,(int)0);
						pixel = tmp13;
						bool tmp14 = findColor;
						bool tmp15;
						if ((tmp14)){
							int tmp16 = (int(pixel) & int(_mask));
							int tmp17 = _color;
							tmp15 = (tmp16 == tmp17);
						}
						else{
							int tmp16 = (int(pixel) & int(_mask));
							int tmp17 = _color;
							tmp15 = (tmp16 != tmp17);
						}
						hit = tmp15;
						bool tmp16 = hit;
						if ((tmp16)){
							bool tmp17 = (y < top);
							if ((tmp17)){
								top = y;
							}
							break;
						}
					}
				}
				bool tmp8 = hit;
				if ((tmp8)){
					break;
				}
			}
		}
		int iy;
		{
			int _g1 = (int)0;
			int _g = image->height;
			while((true)){
				bool tmp5 = (_g1 < _g);
				bool tmp6 = !(tmp5);
				if ((tmp6)){
					break;
				}
				int tmp7 = (_g1)++;
				int y = tmp7;
				int tmp8 = (image->height - (int)1);
				int tmp9 = y;
				int tmp10 = (tmp8 - tmp9);
				iy = tmp10;
				hit = false;
				{
					int _g3 = (int)0;
					int _g2 = image->width;
					while((true)){
						bool tmp11 = (_g3 < _g2);
						bool tmp12 = !(tmp11);
						if ((tmp12)){
							break;
						}
						int tmp13 = (_g3)++;
						int x = tmp13;
						int tmp14 = x;
						int tmp15 = iy;
						int tmp16 = image->getPixel32(tmp14,tmp15,(int)0);
						pixel = tmp16;
						bool tmp17 = findColor;
						bool tmp18;
						if ((tmp17)){
							int tmp19 = (int(pixel) & int(_mask));
							int tmp20 = _color;
							tmp18 = (tmp19 == tmp20);
						}
						else{
							int tmp19 = (int(pixel) & int(_mask));
							int tmp20 = _color;
							tmp18 = (tmp19 != tmp20);
						}
						hit = tmp18;
						bool tmp19 = hit;
						if ((tmp19)){
							bool tmp20 = (iy > bottom);
							if ((tmp20)){
								bottom = iy;
							}
							break;
						}
					}
				}
				bool tmp11 = hit;
				if ((tmp11)){
					break;
				}
			}
		}
		int tmp5 = (right - left);
		int w = tmp5;
		int tmp6 = (bottom - top);
		int h = tmp6;
		bool tmp7 = (w > (int)0);
		if ((tmp7)){
			(w)++;
		}
		bool tmp8 = (h > (int)0);
		if ((tmp8)){
			(h)++;
		}
		bool tmp9 = (w < (int)0);
		if ((tmp9)){
			w = (int)0;
		}
		bool tmp10 = (h < (int)0);
		if ((tmp10)){
			h = (int)0;
		}
		bool tmp11 = (left == right);
		if ((tmp11)){
			w = (int)1;
		}
		bool tmp12 = (top == bottom);
		if ((tmp12)){
			h = (int)1;
		}
		bool tmp13 = (left > image->width);
		if ((tmp13)){
			left = (int)0;
		}
		bool tmp14 = (top > image->height);
		if ((tmp14)){
			top = (int)0;
		}
		::lime::math::Rectangle tmp15 = ::lime::math::Rectangle_obj::__new(left,top,w,h);
		return tmp15;
	}
}


STATIC_HX_DEFINE_DYNAMIC_FUNC5(ImageDataUtil_obj,getColorBoundsRect,return )

int ImageDataUtil_obj::getPixel( ::lime::graphics::Image image,int x,int y,int format){
	int pixel;
	{
		::lime::utils::ArrayBufferView tmp = image->buffer->data;
		::lime::utils::ArrayBufferView data = tmp;
		int tmp1 = (y + image->offsetY);
		int tmp2 = ((int)4 * tmp1);
		int tmp3 = image->buffer->width;
		int tmp4 = (tmp2 * tmp3);
		int tmp5 = (x + image->offsetX);
		int tmp6 = (tmp5 * (int)4);
		int tmp7 = (tmp4 + tmp6);
		int offset = tmp7;
		int tmp8 = image->buffer->format;
		switch( (int)(tmp8)){
			case (int)2: {
				int tmp9 = ::__hxcpp_memory_get_byte(data->buffer->b,(data->byteOffset + ((offset + (int)2))));
				Dynamic tmp10 = (int(tmp9) & int((int)255));
				int r = tmp10;
				int tmp11 = ::__hxcpp_memory_get_byte(data->buffer->b,(data->byteOffset + ((offset + (int)1))));
				Dynamic tmp12 = (int(tmp11) & int((int)255));
				int g = tmp12;
				int tmp13 = ::__hxcpp_memory_get_byte(data->buffer->b,(data->byteOffset + offset));
				Dynamic tmp14 = (int(tmp13) & int((int)255));
				int b = tmp14;
				int tmp15 = ::__hxcpp_memory_get_byte(data->buffer->b,(data->byteOffset + ((offset + (int)3))));
				Dynamic tmp16 = (int(tmp15) & int((int)255));
				int a = tmp16;
				int tmp17 = (int(r) & int((int)255));
				int tmp18 = (int(tmp17) << int((int)24));
				int tmp19 = (int(g) & int((int)255));
				int tmp20 = (int(tmp19) << int((int)16));
				int tmp21 = (int(tmp18) | int(tmp20));
				int tmp22 = (int(b) & int((int)255));
				int tmp23 = (int(tmp22) << int((int)8));
				int tmp24 = (int(tmp21) | int(tmp23));
				int tmp25 = (int(a) & int((int)255));
				int tmp26 = (int(tmp24) | int(tmp25));
				pixel = tmp26;
			}
			;break;
			case (int)0: {
				int tmp9 = ::__hxcpp_memory_get_byte(data->buffer->b,(data->byteOffset + offset));
				Dynamic tmp10 = (int(tmp9) & int((int)255));
				int r = tmp10;
				int tmp11 = ::__hxcpp_memory_get_byte(data->buffer->b,(data->byteOffset + ((offset + (int)1))));
				Dynamic tmp12 = (int(tmp11) & int((int)255));
				int g = tmp12;
				int tmp13 = ::__hxcpp_memory_get_byte(data->buffer->b,(data->byteOffset + ((offset + (int)2))));
				Dynamic tmp14 = (int(tmp13) & int((int)255));
				int b = tmp14;
				int tmp15 = ::__hxcpp_memory_get_byte(data->buffer->b,(data->byteOffset + ((offset + (int)3))));
				Dynamic tmp16 = (int(tmp15) & int((int)255));
				int a = tmp16;
				int tmp17 = (int(r) & int((int)255));
				int tmp18 = (int(tmp17) << int((int)24));
				int tmp19 = (int(g) & int((int)255));
				int tmp20 = (int(tmp19) << int((int)16));
				int tmp21 = (int(tmp18) | int(tmp20));
				int tmp22 = (int(b) & int((int)255));
				int tmp23 = (int(tmp22) << int((int)8));
				int tmp24 = (int(tmp21) | int(tmp23));
				int tmp25 = (int(a) & int((int)255));
				int tmp26 = (int(tmp24) | int(tmp25));
				pixel = tmp26;
			}
			;break;
			case (int)1: {
				int tmp9 = ::__hxcpp_memory_get_byte(data->buffer->b,(data->byteOffset + ((offset + (int)1))));
				Dynamic tmp10 = (int(tmp9) & int((int)255));
				int r = tmp10;
				int tmp11 = ::__hxcpp_memory_get_byte(data->buffer->b,(data->byteOffset + ((offset + (int)2))));
				Dynamic tmp12 = (int(tmp11) & int((int)255));
				int g = tmp12;
				int tmp13 = ::__hxcpp_memory_get_byte(data->buffer->b,(data->byteOffset + ((offset + (int)3))));
				Dynamic tmp14 = (int(tmp13) & int((int)255));
				int b = tmp14;
				int tmp15 = ::__hxcpp_memory_get_byte(data->buffer->b,(data->byteOffset + offset));
				Dynamic tmp16 = (int(tmp15) & int((int)255));
				int a = tmp16;
				int tmp17 = (int(r) & int((int)255));
				int tmp18 = (int(tmp17) << int((int)24));
				int tmp19 = (int(g) & int((int)255));
				int tmp20 = (int(tmp19) << int((int)16));
				int tmp21 = (int(tmp18) | int(tmp20));
				int tmp22 = (int(b) & int((int)255));
				int tmp23 = (int(tmp22) << int((int)8));
				int tmp24 = (int(tmp21) | int(tmp23));
				int tmp25 = (int(a) & int((int)255));
				int tmp26 = (int(tmp24) | int(tmp25));
				pixel = tmp26;
			}
			;break;
		}
		bool tmp9 = image->buffer->premultiplied;
		if ((tmp9)){
			int tmp10 = (int(pixel) & int((int)255));
			int tmp11 = tmp10;
			bool tmp12 = (tmp11 != (int)0);
			bool tmp13;
			if ((tmp12)){
				int tmp14 = (int(pixel) & int((int)255));
				int tmp15 = tmp14;
				int tmp16 = tmp15;
				tmp13 = (tmp16 != (int)255);
			}
			else{
				tmp13 = false;
			}
			if ((tmp13)){
				int tmp14 = (int(pixel) & int((int)255));
				int tmp15 = tmp14;
				Float tmp16 = (Float(((Float)255.0)) / Float(tmp15));
				::lime::math::color::_RGBA::RGBA_Impl__obj::unmult = tmp16;
				{
					Dynamic tmp17;
					{
						::lime::utils::ArrayBufferView tmp18 = ::lime::math::color::_RGBA::RGBA_Impl__obj::__clamp;
						::lime::utils::ArrayBufferView this1 = tmp18;
						int tmp19 = (int(pixel) >> int((int)24));
						int tmp20 = tmp19;
						int tmp21 = (int(tmp20) & int((int)255));
						int tmp22 = tmp21;
						Float tmp23 = ::lime::math::color::_RGBA::RGBA_Impl__obj::unmult;
						Float tmp24 = (tmp22 * tmp23);
						int tmp25 = ::Math_obj::round(tmp24);
						int idx = tmp25;
						int tmp26 = ::__hxcpp_memory_get_byte(this1->buffer->b,(this1->byteOffset + idx));
						tmp17 = (int(tmp26) & int((int)255));
					}
					int r = tmp17;
					Dynamic tmp18;
					{
						::lime::utils::ArrayBufferView tmp19 = ::lime::math::color::_RGBA::RGBA_Impl__obj::__clamp;
						::lime::utils::ArrayBufferView this1 = tmp19;
						int tmp20 = (int(pixel) >> int((int)16));
						int tmp21 = tmp20;
						int tmp22 = (int(tmp21) & int((int)255));
						int tmp23 = tmp22;
						Float tmp24 = ::lime::math::color::_RGBA::RGBA_Impl__obj::unmult;
						Float tmp25 = (tmp23 * tmp24);
						int tmp26 = ::Math_obj::round(tmp25);
						int idx = tmp26;
						int tmp27 = ::__hxcpp_memory_get_byte(this1->buffer->b,(this1->byteOffset + idx));
						tmp18 = (int(tmp27) & int((int)255));
					}
					int g = tmp18;
					Dynamic tmp19;
					{
						::lime::utils::ArrayBufferView tmp20 = ::lime::math::color::_RGBA::RGBA_Impl__obj::__clamp;
						::lime::utils::ArrayBufferView this1 = tmp20;
						int tmp21 = (int(pixel) >> int((int)8));
						int tmp22 = tmp21;
						int tmp23 = (int(tmp22) & int((int)255));
						int tmp24 = tmp23;
						Float tmp25 = ::lime::math::color::_RGBA::RGBA_Impl__obj::unmult;
						Float tmp26 = (tmp24 * tmp25);
						int tmp27 = ::Math_obj::round(tmp26);
						int idx = tmp27;
						int tmp28 = ::__hxcpp_memory_get_byte(this1->buffer->b,(this1->byteOffset + idx));
						tmp19 = (int(tmp28) & int((int)255));
					}
					int b = tmp19;
					int tmp20 = (int(r) & int((int)255));
					int tmp21 = (int(tmp20) << int((int)24));
					int tmp22 = (int(g) & int((int)255));
					int tmp23 = (int(tmp22) << int((int)16));
					int tmp24 = (int(tmp21) | int(tmp23));
					int tmp25 = (int(b) & int((int)255));
					int tmp26 = (int(tmp25) << int((int)8));
					int tmp27 = (int(tmp24) | int(tmp26));
					int tmp28 = (int(pixel) & int((int)255));
					int tmp29 = tmp28;
					int tmp30 = (int(tmp29) & int((int)255));
					int tmp31 = (int(tmp27) | int(tmp30));
					pixel = tmp31;
				}
			}
		}
	}
	{
		{
			int tmp = (int(pixel) >> int((int)24));
			int tmp1 = tmp;
			int tmp2 = (int(tmp1) & int((int)255));
			int tmp3 = tmp2;
			int tmp4 = (int(tmp3) & int((int)255));
			int tmp5 = (int(tmp4) << int((int)24));
			int tmp6 = (int(pixel) >> int((int)16));
			int tmp7 = tmp6;
			int tmp8 = (int(tmp7) & int((int)255));
			int tmp9 = tmp8;
			int tmp10 = (int(tmp9) & int((int)255));
			int tmp11 = (int(tmp10) << int((int)16));
			int tmp12 = (int(tmp5) | int(tmp11));
			int tmp13 = (int(pixel) >> int((int)8));
			int tmp14 = tmp13;
			int tmp15 = (int(tmp14) & int((int)255));
			int tmp16 = tmp15;
			int tmp17 = (int(tmp16) & int((int)255));
			int tmp18 = (int(tmp17) << int((int)8));
			int tmp19 = (int(tmp12) | int(tmp18));
			int tmp20 = (int)0;
			int tmp21 = (int(tmp19) | int(tmp20));
			pixel = tmp21;
		}
		(int)0;
	}
	int tmp = format;
	switch( (int)(tmp)){
		case (int)1: {
			int tmp1;
			{
				int tmp2;
				{
					int argb = (int)0;
					tmp2 = argb;
				}
				int argb = tmp2;
				{
					int tmp3 = (int(pixel) & int((int)255));
					int tmp4 = tmp3;
					int tmp5 = (int(tmp4) & int((int)255));
					int tmp6 = (int(tmp5) << int((int)24));
					int tmp7 = (int(pixel) >> int((int)24));
					int tmp8 = tmp7;
					int tmp9 = (int(tmp8) & int((int)255));
					int tmp10 = tmp9;
					int tmp11 = (int(tmp10) & int((int)255));
					int tmp12 = (int(tmp11) << int((int)16));
					int tmp13 = (int(tmp6) | int(tmp12));
					int tmp14 = (int(pixel) >> int((int)16));
					int tmp15 = tmp14;
					int tmp16 = (int(tmp15) & int((int)255));
					int tmp17 = tmp16;
					int tmp18 = (int(tmp17) & int((int)255));
					int tmp19 = (int(tmp18) << int((int)8));
					int tmp20 = (int(tmp13) | int(tmp19));
					int tmp21 = (int(pixel) >> int((int)8));
					int tmp22 = tmp21;
					int tmp23 = (int(tmp22) & int((int)255));
					int tmp24 = tmp23;
					int tmp25 = (int(tmp24) & int((int)255));
					int tmp26 = (int(tmp20) | int(tmp25));
					argb = tmp26;
				}
				tmp1 = argb;
			}
			int tmp2 = tmp1;
			return tmp2;
		}
		;break;
		case (int)2: {
			int tmp1;
			{
				int tmp2;
				{
					int bgra = (int)0;
					tmp2 = bgra;
				}
				int bgra = tmp2;
				{
					int tmp3 = (int(pixel) >> int((int)8));
					int tmp4 = tmp3;
					int tmp5 = (int(tmp4) & int((int)255));
					int tmp6 = tmp5;
					int tmp7 = (int(tmp6) & int((int)255));
					int tmp8 = (int(tmp7) << int((int)24));
					int tmp9 = (int(pixel) >> int((int)16));
					int tmp10 = tmp9;
					int tmp11 = (int(tmp10) & int((int)255));
					int tmp12 = tmp11;
					int tmp13 = (int(tmp12) & int((int)255));
					int tmp14 = (int(tmp13) << int((int)16));
					int tmp15 = (int(tmp8) | int(tmp14));
					int tmp16 = (int(pixel) >> int((int)24));
					int tmp17 = tmp16;
					int tmp18 = (int(tmp17) & int((int)255));
					int tmp19 = tmp18;
					int tmp20 = (int(tmp19) & int((int)255));
					int tmp21 = (int(tmp20) << int((int)8));
					int tmp22 = (int(tmp15) | int(tmp21));
					int tmp23 = (int(pixel) & int((int)255));
					int tmp24 = tmp23;
					int tmp25 = (int(tmp24) & int((int)255));
					int tmp26 = (int(tmp22) | int(tmp25));
					bgra = tmp26;
				}
				tmp1 = bgra;
			}
			int tmp2 = tmp1;
			return tmp2;
		}
		;break;
		default: {
			int tmp1 = pixel;
			return tmp1;
		}
	}
	return (int)0;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC4(ImageDataUtil_obj,getPixel,return )

int ImageDataUtil_obj::getPixel32( ::lime::graphics::Image image,int x,int y,int format){
	int pixel;
	{
		::lime::utils::ArrayBufferView tmp = image->buffer->data;
		::lime::utils::ArrayBufferView data = tmp;
		int tmp1 = (y + image->offsetY);
		int tmp2 = ((int)4 * tmp1);
		int tmp3 = image->buffer->width;
		int tmp4 = (tmp2 * tmp3);
		int tmp5 = (x + image->offsetX);
		int tmp6 = (tmp5 * (int)4);
		int tmp7 = (tmp4 + tmp6);
		int offset = tmp7;
		int tmp8 = image->buffer->format;
		switch( (int)(tmp8)){
			case (int)2: {
				int tmp9 = ::__hxcpp_memory_get_byte(data->buffer->b,(data->byteOffset + ((offset + (int)2))));
				Dynamic tmp10 = (int(tmp9) & int((int)255));
				int r = tmp10;
				int tmp11 = ::__hxcpp_memory_get_byte(data->buffer->b,(data->byteOffset + ((offset + (int)1))));
				Dynamic tmp12 = (int(tmp11) & int((int)255));
				int g = tmp12;
				int tmp13 = ::__hxcpp_memory_get_byte(data->buffer->b,(data->byteOffset + offset));
				Dynamic tmp14 = (int(tmp13) & int((int)255));
				int b = tmp14;
				int tmp15 = ::__hxcpp_memory_get_byte(data->buffer->b,(data->byteOffset + ((offset + (int)3))));
				Dynamic tmp16 = (int(tmp15) & int((int)255));
				int a = tmp16;
				int tmp17 = (int(r) & int((int)255));
				int tmp18 = (int(tmp17) << int((int)24));
				int tmp19 = (int(g) & int((int)255));
				int tmp20 = (int(tmp19) << int((int)16));
				int tmp21 = (int(tmp18) | int(tmp20));
				int tmp22 = (int(b) & int((int)255));
				int tmp23 = (int(tmp22) << int((int)8));
				int tmp24 = (int(tmp21) | int(tmp23));
				int tmp25 = (int(a) & int((int)255));
				int tmp26 = (int(tmp24) | int(tmp25));
				pixel = tmp26;
			}
			;break;
			case (int)0: {
				int tmp9 = ::__hxcpp_memory_get_byte(data->buffer->b,(data->byteOffset + offset));
				Dynamic tmp10 = (int(tmp9) & int((int)255));
				int r = tmp10;
				int tmp11 = ::__hxcpp_memory_get_byte(data->buffer->b,(data->byteOffset + ((offset + (int)1))));
				Dynamic tmp12 = (int(tmp11) & int((int)255));
				int g = tmp12;
				int tmp13 = ::__hxcpp_memory_get_byte(data->buffer->b,(data->byteOffset + ((offset + (int)2))));
				Dynamic tmp14 = (int(tmp13) & int((int)255));
				int b = tmp14;
				int tmp15 = ::__hxcpp_memory_get_byte(data->buffer->b,(data->byteOffset + ((offset + (int)3))));
				Dynamic tmp16 = (int(tmp15) & int((int)255));
				int a = tmp16;
				int tmp17 = (int(r) & int((int)255));
				int tmp18 = (int(tmp17) << int((int)24));
				int tmp19 = (int(g) & int((int)255));
				int tmp20 = (int(tmp19) << int((int)16));
				int tmp21 = (int(tmp18) | int(tmp20));
				int tmp22 = (int(b) & int((int)255));
				int tmp23 = (int(tmp22) << int((int)8));
				int tmp24 = (int(tmp21) | int(tmp23));
				int tmp25 = (int(a) & int((int)255));
				int tmp26 = (int(tmp24) | int(tmp25));
				pixel = tmp26;
			}
			;break;
			case (int)1: {
				int tmp9 = ::__hxcpp_memory_get_byte(data->buffer->b,(data->byteOffset + ((offset + (int)1))));
				Dynamic tmp10 = (int(tmp9) & int((int)255));
				int r = tmp10;
				int tmp11 = ::__hxcpp_memory_get_byte(data->buffer->b,(data->byteOffset + ((offset + (int)2))));
				Dynamic tmp12 = (int(tmp11) & int((int)255));
				int g = tmp12;
				int tmp13 = ::__hxcpp_memory_get_byte(data->buffer->b,(data->byteOffset + ((offset + (int)3))));
				Dynamic tmp14 = (int(tmp13) & int((int)255));
				int b = tmp14;
				int tmp15 = ::__hxcpp_memory_get_byte(data->buffer->b,(data->byteOffset + offset));
				Dynamic tmp16 = (int(tmp15) & int((int)255));
				int a = tmp16;
				int tmp17 = (int(r) & int((int)255));
				int tmp18 = (int(tmp17) << int((int)24));
				int tmp19 = (int(g) & int((int)255));
				int tmp20 = (int(tmp19) << int((int)16));
				int tmp21 = (int(tmp18) | int(tmp20));
				int tmp22 = (int(b) & int((int)255));
				int tmp23 = (int(tmp22) << int((int)8));
				int tmp24 = (int(tmp21) | int(tmp23));
				int tmp25 = (int(a) & int((int)255));
				int tmp26 = (int(tmp24) | int(tmp25));
				pixel = tmp26;
			}
			;break;
		}
		bool tmp9 = image->buffer->premultiplied;
		if ((tmp9)){
			int tmp10 = (int(pixel) & int((int)255));
			int tmp11 = tmp10;
			bool tmp12 = (tmp11 != (int)0);
			bool tmp13;
			if ((tmp12)){
				int tmp14 = (int(pixel) & int((int)255));
				int tmp15 = tmp14;
				int tmp16 = tmp15;
				tmp13 = (tmp16 != (int)255);
			}
			else{
				tmp13 = false;
			}
			if ((tmp13)){
				int tmp14 = (int(pixel) & int((int)255));
				int tmp15 = tmp14;
				Float tmp16 = (Float(((Float)255.0)) / Float(tmp15));
				::lime::math::color::_RGBA::RGBA_Impl__obj::unmult = tmp16;
				{
					Dynamic tmp17;
					{
						::lime::utils::ArrayBufferView tmp18 = ::lime::math::color::_RGBA::RGBA_Impl__obj::__clamp;
						::lime::utils::ArrayBufferView this1 = tmp18;
						int tmp19 = (int(pixel) >> int((int)24));
						int tmp20 = tmp19;
						int tmp21 = (int(tmp20) & int((int)255));
						int tmp22 = tmp21;
						Float tmp23 = ::lime::math::color::_RGBA::RGBA_Impl__obj::unmult;
						Float tmp24 = (tmp22 * tmp23);
						int tmp25 = ::Math_obj::round(tmp24);
						int idx = tmp25;
						int tmp26 = ::__hxcpp_memory_get_byte(this1->buffer->b,(this1->byteOffset + idx));
						tmp17 = (int(tmp26) & int((int)255));
					}
					int r = tmp17;
					Dynamic tmp18;
					{
						::lime::utils::ArrayBufferView tmp19 = ::lime::math::color::_RGBA::RGBA_Impl__obj::__clamp;
						::lime::utils::ArrayBufferView this1 = tmp19;
						int tmp20 = (int(pixel) >> int((int)16));
						int tmp21 = tmp20;
						int tmp22 = (int(tmp21) & int((int)255));
						int tmp23 = tmp22;
						Float tmp24 = ::lime::math::color::_RGBA::RGBA_Impl__obj::unmult;
						Float tmp25 = (tmp23 * tmp24);
						int tmp26 = ::Math_obj::round(tmp25);
						int idx = tmp26;
						int tmp27 = ::__hxcpp_memory_get_byte(this1->buffer->b,(this1->byteOffset + idx));
						tmp18 = (int(tmp27) & int((int)255));
					}
					int g = tmp18;
					Dynamic tmp19;
					{
						::lime::utils::ArrayBufferView tmp20 = ::lime::math::color::_RGBA::RGBA_Impl__obj::__clamp;
						::lime::utils::ArrayBufferView this1 = tmp20;
						int tmp21 = (int(pixel) >> int((int)8));
						int tmp22 = tmp21;
						int tmp23 = (int(tmp22) & int((int)255));
						int tmp24 = tmp23;
						Float tmp25 = ::lime::math::color::_RGBA::RGBA_Impl__obj::unmult;
						Float tmp26 = (tmp24 * tmp25);
						int tmp27 = ::Math_obj::round(tmp26);
						int idx = tmp27;
						int tmp28 = ::__hxcpp_memory_get_byte(this1->buffer->b,(this1->byteOffset + idx));
						tmp19 = (int(tmp28) & int((int)255));
					}
					int b = tmp19;
					int tmp20 = (int(r) & int((int)255));
					int tmp21 = (int(tmp20) << int((int)24));
					int tmp22 = (int(g) & int((int)255));
					int tmp23 = (int(tmp22) << int((int)16));
					int tmp24 = (int(tmp21) | int(tmp23));
					int tmp25 = (int(b) & int((int)255));
					int tmp26 = (int(tmp25) << int((int)8));
					int tmp27 = (int(tmp24) | int(tmp26));
					int tmp28 = (int(pixel) & int((int)255));
					int tmp29 = tmp28;
					int tmp30 = (int(tmp29) & int((int)255));
					int tmp31 = (int(tmp27) | int(tmp30));
					pixel = tmp31;
				}
			}
		}
	}
	int tmp = format;
	switch( (int)(tmp)){
		case (int)1: {
			int tmp1;
			{
				int tmp2;
				{
					int argb = (int)0;
					tmp2 = argb;
				}
				int argb = tmp2;
				{
					int tmp3 = (int(pixel) & int((int)255));
					int tmp4 = tmp3;
					int tmp5 = (int(tmp4) & int((int)255));
					int tmp6 = (int(tmp5) << int((int)24));
					int tmp7 = (int(pixel) >> int((int)24));
					int tmp8 = tmp7;
					int tmp9 = (int(tmp8) & int((int)255));
					int tmp10 = tmp9;
					int tmp11 = (int(tmp10) & int((int)255));
					int tmp12 = (int(tmp11) << int((int)16));
					int tmp13 = (int(tmp6) | int(tmp12));
					int tmp14 = (int(pixel) >> int((int)16));
					int tmp15 = tmp14;
					int tmp16 = (int(tmp15) & int((int)255));
					int tmp17 = tmp16;
					int tmp18 = (int(tmp17) & int((int)255));
					int tmp19 = (int(tmp18) << int((int)8));
					int tmp20 = (int(tmp13) | int(tmp19));
					int tmp21 = (int(pixel) >> int((int)8));
					int tmp22 = tmp21;
					int tmp23 = (int(tmp22) & int((int)255));
					int tmp24 = tmp23;
					int tmp25 = (int(tmp24) & int((int)255));
					int tmp26 = (int(tmp20) | int(tmp25));
					argb = tmp26;
				}
				tmp1 = argb;
			}
			int tmp2 = tmp1;
			return tmp2;
		}
		;break;
		case (int)2: {
			int tmp1;
			{
				int tmp2;
				{
					int bgra = (int)0;
					tmp2 = bgra;
				}
				int bgra = tmp2;
				{
					int tmp3 = (int(pixel) >> int((int)8));
					int tmp4 = tmp3;
					int tmp5 = (int(tmp4) & int((int)255));
					int tmp6 = tmp5;
					int tmp7 = (int(tmp6) & int((int)255));
					int tmp8 = (int(tmp7) << int((int)24));
					int tmp9 = (int(pixel) >> int((int)16));
					int tmp10 = tmp9;
					int tmp11 = (int(tmp10) & int((int)255));
					int tmp12 = tmp11;
					int tmp13 = (int(tmp12) & int((int)255));
					int tmp14 = (int(tmp13) << int((int)16));
					int tmp15 = (int(tmp8) | int(tmp14));
					int tmp16 = (int(pixel) >> int((int)24));
					int tmp17 = tmp16;
					int tmp18 = (int(tmp17) & int((int)255));
					int tmp19 = tmp18;
					int tmp20 = (int(tmp19) & int((int)255));
					int tmp21 = (int(tmp20) << int((int)8));
					int tmp22 = (int(tmp15) | int(tmp21));
					int tmp23 = (int(pixel) & int((int)255));
					int tmp24 = tmp23;
					int tmp25 = (int(tmp24) & int((int)255));
					int tmp26 = (int(tmp22) | int(tmp25));
					bgra = tmp26;
				}
				tmp1 = bgra;
			}
			int tmp2 = tmp1;
			return tmp2;
		}
		;break;
		default: {
			int tmp1 = pixel;
			return tmp1;
		}
	}
	return (int)0;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC4(ImageDataUtil_obj,getPixel32,return )

::haxe::io::Bytes ImageDataUtil_obj::getPixels( ::lime::graphics::Image image,::lime::math::Rectangle rect,int format){
	::lime::utils::ArrayBufferView tmp = image->buffer->data;
	bool tmp1 = (tmp == null());
	if ((tmp1)){
		return null();
	}
	Float tmp2 = (rect->width * rect->height);
	int tmp3 = ::Std_obj::_int(tmp2);
	int length = tmp3;
	int tmp4 = (length * (int)4);
	::haxe::io::Bytes tmp5 = ::haxe::io::Bytes_obj::alloc(tmp4);
	::haxe::io::Bytes bytes = tmp5;
	bool tmp6 = ::lime::_system::CFFI_obj::enabled;
	if ((tmp6)){
		::lime::_backend::native::NativeCFFI_obj::cffi_lime_image_data_util_get_pixels.call(hx::DynamicPtr(image),hx::DynamicPtr(rect),format,hx::DynamicPtr(bytes));
	}
	else{
		::lime::utils::ArrayBufferView tmp7 = image->buffer->data;
		::lime::utils::ArrayBufferView data = tmp7;
		int tmp8 = image->buffer->format;
		int sourceFormat = tmp8;
		bool tmp9 = image->buffer->premultiplied;
		bool premultiplied = tmp9;
		::lime::graphics::utils::_ImageDataUtil::ImageDataView tmp10 = ::lime::graphics::utils::_ImageDataUtil::ImageDataView_obj::__new(image,rect);
		::lime::graphics::utils::_ImageDataUtil::ImageDataView dataView = tmp10;
		int position;
		int argb;
		int bgra;
		int pixel;
		int destPosition = (int)0;
		{
			int _g1 = (int)0;
			int _g = dataView->height;
			while((true)){
				bool tmp11 = (_g1 < _g);
				bool tmp12 = !(tmp11);
				if ((tmp12)){
					break;
				}
				int tmp13 = (_g1)++;
				int y = tmp13;
				int tmp14 = dataView->offset;
				int tmp15 = (dataView->stride * y);
				int tmp16 = (tmp14 + tmp15);
				position = tmp16;
				{
					int _g3 = (int)0;
					int _g2 = dataView->width;
					while((true)){
						bool tmp17 = (_g3 < _g2);
						bool tmp18 = !(tmp17);
						if ((tmp18)){
							break;
						}
						int tmp19 = (_g3)++;
						int x = tmp19;
						{
							int tmp20 = sourceFormat;
							switch( (int)(tmp20)){
								case (int)2: {
									int tmp21 = ::__hxcpp_memory_get_byte(data->buffer->b,(data->byteOffset + ((position + (int)2))));
									Dynamic tmp22 = (int(tmp21) & int((int)255));
									int r = tmp22;
									int tmp23 = ::__hxcpp_memory_get_byte(data->buffer->b,(data->byteOffset + ((position + (int)1))));
									Dynamic tmp24 = (int(tmp23) & int((int)255));
									int g = tmp24;
									int tmp25 = ::__hxcpp_memory_get_byte(data->buffer->b,(data->byteOffset + position));
									Dynamic tmp26 = (int(tmp25) & int((int)255));
									int b = tmp26;
									int tmp27 = ::__hxcpp_memory_get_byte(data->buffer->b,(data->byteOffset + ((position + (int)3))));
									Dynamic tmp28 = (int(tmp27) & int((int)255));
									int a = tmp28;
									int tmp29 = (int(r) & int((int)255));
									int tmp30 = (int(tmp29) << int((int)24));
									int tmp31 = (int(g) & int((int)255));
									int tmp32 = (int(tmp31) << int((int)16));
									int tmp33 = (int(tmp30) | int(tmp32));
									int tmp34 = (int(b) & int((int)255));
									int tmp35 = (int(tmp34) << int((int)8));
									int tmp36 = (int(tmp33) | int(tmp35));
									int tmp37 = (int(a) & int((int)255));
									int tmp38 = (int(tmp36) | int(tmp37));
									pixel = tmp38;
								}
								;break;
								case (int)0: {
									int tmp21 = ::__hxcpp_memory_get_byte(data->buffer->b,(data->byteOffset + position));
									Dynamic tmp22 = (int(tmp21) & int((int)255));
									int r = tmp22;
									int tmp23 = ::__hxcpp_memory_get_byte(data->buffer->b,(data->byteOffset + ((position + (int)1))));
									Dynamic tmp24 = (int(tmp23) & int((int)255));
									int g = tmp24;
									int tmp25 = ::__hxcpp_memory_get_byte(data->buffer->b,(data->byteOffset + ((position + (int)2))));
									Dynamic tmp26 = (int(tmp25) & int((int)255));
									int b = tmp26;
									int tmp27 = ::__hxcpp_memory_get_byte(data->buffer->b,(data->byteOffset + ((position + (int)3))));
									Dynamic tmp28 = (int(tmp27) & int((int)255));
									int a = tmp28;
									int tmp29 = (int(r) & int((int)255));
									int tmp30 = (int(tmp29) << int((int)24));
									int tmp31 = (int(g) & int((int)255));
									int tmp32 = (int(tmp31) << int((int)16));
									int tmp33 = (int(tmp30) | int(tmp32));
									int tmp34 = (int(b) & int((int)255));
									int tmp35 = (int(tmp34) << int((int)8));
									int tmp36 = (int(tmp33) | int(tmp35));
									int tmp37 = (int(a) & int((int)255));
									int tmp38 = (int(tmp36) | int(tmp37));
									pixel = tmp38;
								}
								;break;
								case (int)1: {
									int tmp21 = ::__hxcpp_memory_get_byte(data->buffer->b,(data->byteOffset + ((position + (int)1))));
									Dynamic tmp22 = (int(tmp21) & int((int)255));
									int r = tmp22;
									int tmp23 = ::__hxcpp_memory_get_byte(data->buffer->b,(data->byteOffset + ((position + (int)2))));
									Dynamic tmp24 = (int(tmp23) & int((int)255));
									int g = tmp24;
									int tmp25 = ::__hxcpp_memory_get_byte(data->buffer->b,(data->byteOffset + ((position + (int)3))));
									Dynamic tmp26 = (int(tmp25) & int((int)255));
									int b = tmp26;
									int tmp27 = ::__hxcpp_memory_get_byte(data->buffer->b,(data->byteOffset + position));
									Dynamic tmp28 = (int(tmp27) & int((int)255));
									int a = tmp28;
									int tmp29 = (int(r) & int((int)255));
									int tmp30 = (int(tmp29) << int((int)24));
									int tmp31 = (int(g) & int((int)255));
									int tmp32 = (int(tmp31) << int((int)16));
									int tmp33 = (int(tmp30) | int(tmp32));
									int tmp34 = (int(b) & int((int)255));
									int tmp35 = (int(tmp34) << int((int)8));
									int tmp36 = (int(tmp33) | int(tmp35));
									int tmp37 = (int(a) & int((int)255));
									int tmp38 = (int(tmp36) | int(tmp37));
									pixel = tmp38;
								}
								;break;
							}
							bool tmp21 = premultiplied;
							if ((tmp21)){
								int tmp22 = (int(pixel) & int((int)255));
								int tmp23 = tmp22;
								bool tmp24 = (tmp23 != (int)0);
								bool tmp25;
								if ((tmp24)){
									int tmp26 = (int(pixel) & int((int)255));
									int tmp27 = tmp26;
									int tmp28 = tmp27;
									tmp25 = (tmp28 != (int)255);
								}
								else{
									tmp25 = false;
								}
								if ((tmp25)){
									int tmp26 = (int(pixel) & int((int)255));
									int tmp27 = tmp26;
									Float tmp28 = (Float(((Float)255.0)) / Float(tmp27));
									::lime::math::color::_RGBA::RGBA_Impl__obj::unmult = tmp28;
									{
										Dynamic tmp29;
										{
											::lime::utils::ArrayBufferView tmp30 = ::lime::math::color::_RGBA::RGBA_Impl__obj::__clamp;
											::lime::utils::ArrayBufferView this1 = tmp30;
											int tmp31 = (int(pixel) >> int((int)24));
											int tmp32 = tmp31;
											int tmp33 = (int(tmp32) & int((int)255));
											int tmp34 = tmp33;
											Float tmp35 = ::lime::math::color::_RGBA::RGBA_Impl__obj::unmult;
											Float tmp36 = (tmp34 * tmp35);
											int tmp37 = ::Math_obj::round(tmp36);
											int idx = tmp37;
											int tmp38 = ::__hxcpp_memory_get_byte(this1->buffer->b,(this1->byteOffset + idx));
											tmp29 = (int(tmp38) & int((int)255));
										}
										int r = tmp29;
										Dynamic tmp30;
										{
											::lime::utils::ArrayBufferView tmp31 = ::lime::math::color::_RGBA::RGBA_Impl__obj::__clamp;
											::lime::utils::ArrayBufferView this1 = tmp31;
											int tmp32 = (int(pixel) >> int((int)16));
											int tmp33 = tmp32;
											int tmp34 = (int(tmp33) & int((int)255));
											int tmp35 = tmp34;
											Float tmp36 = ::lime::math::color::_RGBA::RGBA_Impl__obj::unmult;
											Float tmp37 = (tmp35 * tmp36);
											int tmp38 = ::Math_obj::round(tmp37);
											int idx = tmp38;
											int tmp39 = ::__hxcpp_memory_get_byte(this1->buffer->b,(this1->byteOffset + idx));
											tmp30 = (int(tmp39) & int((int)255));
										}
										int g = tmp30;
										Dynamic tmp31;
										{
											::lime::utils::ArrayBufferView tmp32 = ::lime::math::color::_RGBA::RGBA_Impl__obj::__clamp;
											::lime::utils::ArrayBufferView this1 = tmp32;
											int tmp33 = (int(pixel) >> int((int)8));
											int tmp34 = tmp33;
											int tmp35 = (int(tmp34) & int((int)255));
											int tmp36 = tmp35;
											Float tmp37 = ::lime::math::color::_RGBA::RGBA_Impl__obj::unmult;
											Float tmp38 = (tmp36 * tmp37);
											int tmp39 = ::Math_obj::round(tmp38);
											int idx = tmp39;
											int tmp40 = ::__hxcpp_memory_get_byte(this1->buffer->b,(this1->byteOffset + idx));
											tmp31 = (int(tmp40) & int((int)255));
										}
										int b = tmp31;
										int tmp32 = (int(r) & int((int)255));
										int tmp33 = (int(tmp32) << int((int)24));
										int tmp34 = (int(g) & int((int)255));
										int tmp35 = (int(tmp34) << int((int)16));
										int tmp36 = (int(tmp33) | int(tmp35));
										int tmp37 = (int(b) & int((int)255));
										int tmp38 = (int(tmp37) << int((int)8));
										int tmp39 = (int(tmp36) | int(tmp38));
										int tmp40 = (int(pixel) & int((int)255));
										int tmp41 = tmp40;
										int tmp42 = (int(tmp41) & int((int)255));
										int tmp43 = (int(tmp39) | int(tmp42));
										pixel = tmp43;
									}
								}
							}
						}
						int tmp20 = format;
						switch( (int)(tmp20)){
							case (int)1: {
								int tmp21;
								{
									int tmp22;
									{
										int argb1 = (int)0;
										tmp22 = argb1;
									}
									int argb1 = tmp22;
									{
										int tmp23 = (int(pixel) & int((int)255));
										int tmp24 = tmp23;
										int tmp25 = (int(tmp24) & int((int)255));
										int tmp26 = (int(tmp25) << int((int)24));
										int tmp27 = (int(pixel) >> int((int)24));
										int tmp28 = tmp27;
										int tmp29 = (int(tmp28) & int((int)255));
										int tmp30 = tmp29;
										int tmp31 = (int(tmp30) & int((int)255));
										int tmp32 = (int(tmp31) << int((int)16));
										int tmp33 = (int(tmp26) | int(tmp32));
										int tmp34 = (int(pixel) >> int((int)16));
										int tmp35 = tmp34;
										int tmp36 = (int(tmp35) & int((int)255));
										int tmp37 = tmp36;
										int tmp38 = (int(tmp37) & int((int)255));
										int tmp39 = (int(tmp38) << int((int)8));
										int tmp40 = (int(tmp33) | int(tmp39));
										int tmp41 = (int(pixel) >> int((int)8));
										int tmp42 = tmp41;
										int tmp43 = (int(tmp42) & int((int)255));
										int tmp44 = tmp43;
										int tmp45 = (int(tmp44) & int((int)255));
										int tmp46 = (int(tmp40) | int(tmp45));
										argb1 = tmp46;
									}
									tmp21 = argb1;
								}
								argb = tmp21;
								pixel = argb;
							}
							;break;
							case (int)2: {
								int tmp21;
								{
									int tmp22;
									{
										int bgra1 = (int)0;
										tmp22 = bgra1;
									}
									int bgra1 = tmp22;
									{
										int tmp23 = (int(pixel) >> int((int)8));
										int tmp24 = tmp23;
										int tmp25 = (int(tmp24) & int((int)255));
										int tmp26 = tmp25;
										int tmp27 = (int(tmp26) & int((int)255));
										int tmp28 = (int(tmp27) << int((int)24));
										int tmp29 = (int(pixel) >> int((int)16));
										int tmp30 = tmp29;
										int tmp31 = (int(tmp30) & int((int)255));
										int tmp32 = tmp31;
										int tmp33 = (int(tmp32) & int((int)255));
										int tmp34 = (int(tmp33) << int((int)16));
										int tmp35 = (int(tmp28) | int(tmp34));
										int tmp36 = (int(pixel) >> int((int)24));
										int tmp37 = tmp36;
										int tmp38 = (int(tmp37) & int((int)255));
										int tmp39 = tmp38;
										int tmp40 = (int(tmp39) & int((int)255));
										int tmp41 = (int(tmp40) << int((int)8));
										int tmp42 = (int(tmp35) | int(tmp41));
										int tmp43 = (int(pixel) & int((int)255));
										int tmp44 = tmp43;
										int tmp45 = (int(tmp44) & int((int)255));
										int tmp46 = (int(tmp42) | int(tmp45));
										bgra1 = tmp46;
									}
									tmp21 = bgra1;
								}
								bgra = tmp21;
								pixel = bgra;
							}
							;break;
							default: {
							}
						}
						{
							int tmp21 = (destPosition)++;
							int pos = tmp21;
							int tmp22 = (int(pixel) >> int((int)24));
							int tmp23 = tmp22;
							int tmp24 = (int(tmp23) & int((int)255));
							int tmp25 = tmp24;
							bytes->b[pos] = tmp25;
						}
						{
							int tmp21 = (destPosition)++;
							int pos = tmp21;
							int tmp22 = (int(pixel) >> int((int)16));
							int tmp23 = tmp22;
							int tmp24 = (int(tmp23) & int((int)255));
							int tmp25 = tmp24;
							bytes->b[pos] = tmp25;
						}
						{
							int tmp21 = (destPosition)++;
							int pos = tmp21;
							int tmp22 = (int(pixel) >> int((int)8));
							int tmp23 = tmp22;
							int tmp24 = (int(tmp23) & int((int)255));
							int tmp25 = tmp24;
							bytes->b[pos] = tmp25;
						}
						{
							int tmp21 = (destPosition)++;
							int pos = tmp21;
							int tmp22 = (int(pixel) & int((int)255));
							int tmp23 = tmp22;
							bytes->b[pos] = tmp23;
						}
						hx::AddEq(position,(int)4);
					}
				}
			}
		}
	}
	::haxe::io::Bytes tmp7 = bytes;
	return tmp7;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC3(ImageDataUtil_obj,getPixels,return )

Void ImageDataUtil_obj::merge( ::lime::graphics::Image image,::lime::graphics::Image sourceImage,::lime::math::Rectangle sourceRect,::lime::math::Vector2 destPoint,int redMultiplier,int greenMultiplier,int blueMultiplier,int alphaMultiplier){
{
		::lime::utils::ArrayBufferView tmp = image->buffer->data;
		bool tmp1 = (tmp == null());
		bool tmp2 = !(tmp1);
		bool tmp3;
		if ((tmp2)){
			::lime::utils::ArrayBufferView tmp4 = sourceImage->buffer->data;
			::lime::utils::ArrayBufferView tmp5 = tmp4;
			tmp3 = (tmp5 == null());
		}
		else{
			tmp3 = true;
		}
		if ((tmp3)){
			return null();
		}
		bool tmp4 = ::lime::_system::CFFI_obj::enabled;
		if ((tmp4)){
			::lime::_backend::native::NativeCFFI_obj::cffi_lime_image_data_util_merge.call(hx::DynamicPtr(image),hx::DynamicPtr(sourceImage),hx::DynamicPtr(sourceRect),hx::DynamicPtr(destPoint),redMultiplier,greenMultiplier,blueMultiplier,alphaMultiplier);
		}
		else{
			::lime::graphics::utils::_ImageDataUtil::ImageDataView tmp5 = ::lime::graphics::utils::_ImageDataUtil::ImageDataView_obj::__new(sourceImage,sourceRect);
			::lime::graphics::utils::_ImageDataUtil::ImageDataView sourceView = tmp5;
			::lime::graphics::Image tmp6 = image;
			::lime::math::Rectangle tmp7 = ::lime::math::Rectangle_obj::__new(destPoint->x,destPoint->y,sourceView->width,sourceView->height);
			::lime::graphics::utils::_ImageDataUtil::ImageDataView tmp8 = ::lime::graphics::utils::_ImageDataUtil::ImageDataView_obj::__new(tmp6,tmp7);
			::lime::graphics::utils::_ImageDataUtil::ImageDataView destView = tmp8;
			::lime::utils::ArrayBufferView tmp9 = sourceImage->buffer->data;
			::lime::utils::ArrayBufferView sourceData = tmp9;
			::lime::utils::ArrayBufferView tmp10 = image->buffer->data;
			::lime::utils::ArrayBufferView destData = tmp10;
			int tmp11 = sourceImage->buffer->format;
			int sourceFormat = tmp11;
			int tmp12 = image->buffer->format;
			int destFormat = tmp12;
			bool tmp13 = sourceImage->buffer->premultiplied;
			bool sourcePremultiplied = tmp13;
			bool tmp14 = image->buffer->premultiplied;
			bool destPremultiplied = tmp14;
			int sourcePosition;
			int destPosition;
			int sourcePixel;
			int destPixel;
			{
				int _g1 = (int)0;
				int _g = destView->height;
				while((true)){
					bool tmp15 = (_g1 < _g);
					bool tmp16 = !(tmp15);
					if ((tmp16)){
						break;
					}
					int tmp17 = (_g1)++;
					int y = tmp17;
					int tmp18 = sourceView->offset;
					int tmp19 = (sourceView->stride * y);
					int tmp20 = (tmp18 + tmp19);
					sourcePosition = tmp20;
					int tmp21 = destView->offset;
					int tmp22 = (destView->stride * y);
					int tmp23 = (tmp21 + tmp22);
					destPosition = tmp23;
					{
						int _g3 = (int)0;
						int _g2 = destView->width;
						while((true)){
							bool tmp24 = (_g3 < _g2);
							bool tmp25 = !(tmp24);
							if ((tmp25)){
								break;
							}
							int tmp26 = (_g3)++;
							int x = tmp26;
							{
								int tmp27 = sourceFormat;
								switch( (int)(tmp27)){
									case (int)2: {
										int tmp28 = ::__hxcpp_memory_get_byte(sourceData->buffer->b,(sourceData->byteOffset + ((sourcePosition + (int)2))));
										Dynamic tmp29 = (int(tmp28) & int((int)255));
										int r = tmp29;
										int tmp30 = ::__hxcpp_memory_get_byte(sourceData->buffer->b,(sourceData->byteOffset + ((sourcePosition + (int)1))));
										Dynamic tmp31 = (int(tmp30) & int((int)255));
										int g = tmp31;
										int tmp32 = ::__hxcpp_memory_get_byte(sourceData->buffer->b,(sourceData->byteOffset + sourcePosition));
										Dynamic tmp33 = (int(tmp32) & int((int)255));
										int b = tmp33;
										int tmp34 = ::__hxcpp_memory_get_byte(sourceData->buffer->b,(sourceData->byteOffset + ((sourcePosition + (int)3))));
										Dynamic tmp35 = (int(tmp34) & int((int)255));
										int a = tmp35;
										int tmp36 = (int(r) & int((int)255));
										int tmp37 = (int(tmp36) << int((int)24));
										int tmp38 = (int(g) & int((int)255));
										int tmp39 = (int(tmp38) << int((int)16));
										int tmp40 = (int(tmp37) | int(tmp39));
										int tmp41 = (int(b) & int((int)255));
										int tmp42 = (int(tmp41) << int((int)8));
										int tmp43 = (int(tmp40) | int(tmp42));
										int tmp44 = (int(a) & int((int)255));
										int tmp45 = (int(tmp43) | int(tmp44));
										sourcePixel = tmp45;
									}
									;break;
									case (int)0: {
										int tmp28 = ::__hxcpp_memory_get_byte(sourceData->buffer->b,(sourceData->byteOffset + sourcePosition));
										Dynamic tmp29 = (int(tmp28) & int((int)255));
										int r = tmp29;
										int tmp30 = ::__hxcpp_memory_get_byte(sourceData->buffer->b,(sourceData->byteOffset + ((sourcePosition + (int)1))));
										Dynamic tmp31 = (int(tmp30) & int((int)255));
										int g = tmp31;
										int tmp32 = ::__hxcpp_memory_get_byte(sourceData->buffer->b,(sourceData->byteOffset + ((sourcePosition + (int)2))));
										Dynamic tmp33 = (int(tmp32) & int((int)255));
										int b = tmp33;
										int tmp34 = ::__hxcpp_memory_get_byte(sourceData->buffer->b,(sourceData->byteOffset + ((sourcePosition + (int)3))));
										Dynamic tmp35 = (int(tmp34) & int((int)255));
										int a = tmp35;
										int tmp36 = (int(r) & int((int)255));
										int tmp37 = (int(tmp36) << int((int)24));
										int tmp38 = (int(g) & int((int)255));
										int tmp39 = (int(tmp38) << int((int)16));
										int tmp40 = (int(tmp37) | int(tmp39));
										int tmp41 = (int(b) & int((int)255));
										int tmp42 = (int(tmp41) << int((int)8));
										int tmp43 = (int(tmp40) | int(tmp42));
										int tmp44 = (int(a) & int((int)255));
										int tmp45 = (int(tmp43) | int(tmp44));
										sourcePixel = tmp45;
									}
									;break;
									case (int)1: {
										int tmp28 = ::__hxcpp_memory_get_byte(sourceData->buffer->b,(sourceData->byteOffset + ((sourcePosition + (int)1))));
										Dynamic tmp29 = (int(tmp28) & int((int)255));
										int r = tmp29;
										int tmp30 = ::__hxcpp_memory_get_byte(sourceData->buffer->b,(sourceData->byteOffset + ((sourcePosition + (int)2))));
										Dynamic tmp31 = (int(tmp30) & int((int)255));
										int g = tmp31;
										int tmp32 = ::__hxcpp_memory_get_byte(sourceData->buffer->b,(sourceData->byteOffset + ((sourcePosition + (int)3))));
										Dynamic tmp33 = (int(tmp32) & int((int)255));
										int b = tmp33;
										int tmp34 = ::__hxcpp_memory_get_byte(sourceData->buffer->b,(sourceData->byteOffset + sourcePosition));
										Dynamic tmp35 = (int(tmp34) & int((int)255));
										int a = tmp35;
										int tmp36 = (int(r) & int((int)255));
										int tmp37 = (int(tmp36) << int((int)24));
										int tmp38 = (int(g) & int((int)255));
										int tmp39 = (int(tmp38) << int((int)16));
										int tmp40 = (int(tmp37) | int(tmp39));
										int tmp41 = (int(b) & int((int)255));
										int tmp42 = (int(tmp41) << int((int)8));
										int tmp43 = (int(tmp40) | int(tmp42));
										int tmp44 = (int(a) & int((int)255));
										int tmp45 = (int(tmp43) | int(tmp44));
										sourcePixel = tmp45;
									}
									;break;
								}
								bool tmp28 = sourcePremultiplied;
								if ((tmp28)){
									int tmp29 = (int(sourcePixel) & int((int)255));
									int tmp30 = tmp29;
									bool tmp31 = (tmp30 != (int)0);
									bool tmp32;
									if ((tmp31)){
										int tmp33 = (int(sourcePixel) & int((int)255));
										int tmp34 = tmp33;
										int tmp35 = tmp34;
										tmp32 = (tmp35 != (int)255);
									}
									else{
										tmp32 = false;
									}
									if ((tmp32)){
										int tmp33 = (int(sourcePixel) & int((int)255));
										int tmp34 = tmp33;
										Float tmp35 = (Float(((Float)255.0)) / Float(tmp34));
										::lime::math::color::_RGBA::RGBA_Impl__obj::unmult = tmp35;
										{
											Dynamic tmp36;
											{
												::lime::utils::ArrayBufferView tmp37 = ::lime::math::color::_RGBA::RGBA_Impl__obj::__clamp;
												::lime::utils::ArrayBufferView this1 = tmp37;
												int tmp38 = (int(sourcePixel) >> int((int)24));
												int tmp39 = tmp38;
												int tmp40 = (int(tmp39) & int((int)255));
												int tmp41 = tmp40;
												Float tmp42 = ::lime::math::color::_RGBA::RGBA_Impl__obj::unmult;
												Float tmp43 = (tmp41 * tmp42);
												int tmp44 = ::Math_obj::round(tmp43);
												int idx = tmp44;
												int tmp45 = ::__hxcpp_memory_get_byte(this1->buffer->b,(this1->byteOffset + idx));
												tmp36 = (int(tmp45) & int((int)255));
											}
											int r = tmp36;
											Dynamic tmp37;
											{
												::lime::utils::ArrayBufferView tmp38 = ::lime::math::color::_RGBA::RGBA_Impl__obj::__clamp;
												::lime::utils::ArrayBufferView this1 = tmp38;
												int tmp39 = (int(sourcePixel) >> int((int)16));
												int tmp40 = tmp39;
												int tmp41 = (int(tmp40) & int((int)255));
												int tmp42 = tmp41;
												Float tmp43 = ::lime::math::color::_RGBA::RGBA_Impl__obj::unmult;
												Float tmp44 = (tmp42 * tmp43);
												int tmp45 = ::Math_obj::round(tmp44);
												int idx = tmp45;
												int tmp46 = ::__hxcpp_memory_get_byte(this1->buffer->b,(this1->byteOffset + idx));
												tmp37 = (int(tmp46) & int((int)255));
											}
											int g = tmp37;
											Dynamic tmp38;
											{
												::lime::utils::ArrayBufferView tmp39 = ::lime::math::color::_RGBA::RGBA_Impl__obj::__clamp;
												::lime::utils::ArrayBufferView this1 = tmp39;
												int tmp40 = (int(sourcePixel) >> int((int)8));
												int tmp41 = tmp40;
												int tmp42 = (int(tmp41) & int((int)255));
												int tmp43 = tmp42;
												Float tmp44 = ::lime::math::color::_RGBA::RGBA_Impl__obj::unmult;
												Float tmp45 = (tmp43 * tmp44);
												int tmp46 = ::Math_obj::round(tmp45);
												int idx = tmp46;
												int tmp47 = ::__hxcpp_memory_get_byte(this1->buffer->b,(this1->byteOffset + idx));
												tmp38 = (int(tmp47) & int((int)255));
											}
											int b = tmp38;
											int tmp39 = (int(r) & int((int)255));
											int tmp40 = (int(tmp39) << int((int)24));
											int tmp41 = (int(g) & int((int)255));
											int tmp42 = (int(tmp41) << int((int)16));
											int tmp43 = (int(tmp40) | int(tmp42));
											int tmp44 = (int(b) & int((int)255));
											int tmp45 = (int(tmp44) << int((int)8));
											int tmp46 = (int(tmp43) | int(tmp45));
											int tmp47 = (int(sourcePixel) & int((int)255));
											int tmp48 = tmp47;
											int tmp49 = (int(tmp48) & int((int)255));
											int tmp50 = (int(tmp46) | int(tmp49));
											sourcePixel = tmp50;
										}
									}
								}
							}
							{
								int tmp27 = destFormat;
								switch( (int)(tmp27)){
									case (int)2: {
										int tmp28 = ::__hxcpp_memory_get_byte(destData->buffer->b,(destData->byteOffset + ((destPosition + (int)2))));
										Dynamic tmp29 = (int(tmp28) & int((int)255));
										int r = tmp29;
										int tmp30 = ::__hxcpp_memory_get_byte(destData->buffer->b,(destData->byteOffset + ((destPosition + (int)1))));
										Dynamic tmp31 = (int(tmp30) & int((int)255));
										int g = tmp31;
										int tmp32 = ::__hxcpp_memory_get_byte(destData->buffer->b,(destData->byteOffset + destPosition));
										Dynamic tmp33 = (int(tmp32) & int((int)255));
										int b = tmp33;
										int tmp34 = ::__hxcpp_memory_get_byte(destData->buffer->b,(destData->byteOffset + ((destPosition + (int)3))));
										Dynamic tmp35 = (int(tmp34) & int((int)255));
										int a = tmp35;
										int tmp36 = (int(r) & int((int)255));
										int tmp37 = (int(tmp36) << int((int)24));
										int tmp38 = (int(g) & int((int)255));
										int tmp39 = (int(tmp38) << int((int)16));
										int tmp40 = (int(tmp37) | int(tmp39));
										int tmp41 = (int(b) & int((int)255));
										int tmp42 = (int(tmp41) << int((int)8));
										int tmp43 = (int(tmp40) | int(tmp42));
										int tmp44 = (int(a) & int((int)255));
										int tmp45 = (int(tmp43) | int(tmp44));
										destPixel = tmp45;
									}
									;break;
									case (int)0: {
										int tmp28 = ::__hxcpp_memory_get_byte(destData->buffer->b,(destData->byteOffset + destPosition));
										Dynamic tmp29 = (int(tmp28) & int((int)255));
										int r = tmp29;
										int tmp30 = ::__hxcpp_memory_get_byte(destData->buffer->b,(destData->byteOffset + ((destPosition + (int)1))));
										Dynamic tmp31 = (int(tmp30) & int((int)255));
										int g = tmp31;
										int tmp32 = ::__hxcpp_memory_get_byte(destData->buffer->b,(destData->byteOffset + ((destPosition + (int)2))));
										Dynamic tmp33 = (int(tmp32) & int((int)255));
										int b = tmp33;
										int tmp34 = ::__hxcpp_memory_get_byte(destData->buffer->b,(destData->byteOffset + ((destPosition + (int)3))));
										Dynamic tmp35 = (int(tmp34) & int((int)255));
										int a = tmp35;
										int tmp36 = (int(r) & int((int)255));
										int tmp37 = (int(tmp36) << int((int)24));
										int tmp38 = (int(g) & int((int)255));
										int tmp39 = (int(tmp38) << int((int)16));
										int tmp40 = (int(tmp37) | int(tmp39));
										int tmp41 = (int(b) & int((int)255));
										int tmp42 = (int(tmp41) << int((int)8));
										int tmp43 = (int(tmp40) | int(tmp42));
										int tmp44 = (int(a) & int((int)255));
										int tmp45 = (int(tmp43) | int(tmp44));
										destPixel = tmp45;
									}
									;break;
									case (int)1: {
										int tmp28 = ::__hxcpp_memory_get_byte(destData->buffer->b,(destData->byteOffset + ((destPosition + (int)1))));
										Dynamic tmp29 = (int(tmp28) & int((int)255));
										int r = tmp29;
										int tmp30 = ::__hxcpp_memory_get_byte(destData->buffer->b,(destData->byteOffset + ((destPosition + (int)2))));
										Dynamic tmp31 = (int(tmp30) & int((int)255));
										int g = tmp31;
										int tmp32 = ::__hxcpp_memory_get_byte(destData->buffer->b,(destData->byteOffset + ((destPosition + (int)3))));
										Dynamic tmp33 = (int(tmp32) & int((int)255));
										int b = tmp33;
										int tmp34 = ::__hxcpp_memory_get_byte(destData->buffer->b,(destData->byteOffset + destPosition));
										Dynamic tmp35 = (int(tmp34) & int((int)255));
										int a = tmp35;
										int tmp36 = (int(r) & int((int)255));
										int tmp37 = (int(tmp36) << int((int)24));
										int tmp38 = (int(g) & int((int)255));
										int tmp39 = (int(tmp38) << int((int)16));
										int tmp40 = (int(tmp37) | int(tmp39));
										int tmp41 = (int(b) & int((int)255));
										int tmp42 = (int(tmp41) << int((int)8));
										int tmp43 = (int(tmp40) | int(tmp42));
										int tmp44 = (int(a) & int((int)255));
										int tmp45 = (int(tmp43) | int(tmp44));
										destPixel = tmp45;
									}
									;break;
								}
								bool tmp28 = destPremultiplied;
								if ((tmp28)){
									int tmp29 = (int(destPixel) & int((int)255));
									int tmp30 = tmp29;
									bool tmp31 = (tmp30 != (int)0);
									bool tmp32;
									if ((tmp31)){
										int tmp33 = (int(destPixel) & int((int)255));
										int tmp34 = tmp33;
										int tmp35 = tmp34;
										tmp32 = (tmp35 != (int)255);
									}
									else{
										tmp32 = false;
									}
									if ((tmp32)){
										int tmp33 = (int(destPixel) & int((int)255));
										int tmp34 = tmp33;
										Float tmp35 = (Float(((Float)255.0)) / Float(tmp34));
										::lime::math::color::_RGBA::RGBA_Impl__obj::unmult = tmp35;
										{
											Dynamic tmp36;
											{
												::lime::utils::ArrayBufferView tmp37 = ::lime::math::color::_RGBA::RGBA_Impl__obj::__clamp;
												::lime::utils::ArrayBufferView this1 = tmp37;
												int tmp38 = (int(destPixel) >> int((int)24));
												int tmp39 = tmp38;
												int tmp40 = (int(tmp39) & int((int)255));
												int tmp41 = tmp40;
												Float tmp42 = ::lime::math::color::_RGBA::RGBA_Impl__obj::unmult;
												Float tmp43 = (tmp41 * tmp42);
												int tmp44 = ::Math_obj::round(tmp43);
												int idx = tmp44;
												int tmp45 = ::__hxcpp_memory_get_byte(this1->buffer->b,(this1->byteOffset + idx));
												tmp36 = (int(tmp45) & int((int)255));
											}
											int r = tmp36;
											Dynamic tmp37;
											{
												::lime::utils::ArrayBufferView tmp38 = ::lime::math::color::_RGBA::RGBA_Impl__obj::__clamp;
												::lime::utils::ArrayBufferView this1 = tmp38;
												int tmp39 = (int(destPixel) >> int((int)16));
												int tmp40 = tmp39;
												int tmp41 = (int(tmp40) & int((int)255));
												int tmp42 = tmp41;
												Float tmp43 = ::lime::math::color::_RGBA::RGBA_Impl__obj::unmult;
												Float tmp44 = (tmp42 * tmp43);
												int tmp45 = ::Math_obj::round(tmp44);
												int idx = tmp45;
												int tmp46 = ::__hxcpp_memory_get_byte(this1->buffer->b,(this1->byteOffset + idx));
												tmp37 = (int(tmp46) & int((int)255));
											}
											int g = tmp37;
											Dynamic tmp38;
											{
												::lime::utils::ArrayBufferView tmp39 = ::lime::math::color::_RGBA::RGBA_Impl__obj::__clamp;
												::lime::utils::ArrayBufferView this1 = tmp39;
												int tmp40 = (int(destPixel) >> int((int)8));
												int tmp41 = tmp40;
												int tmp42 = (int(tmp41) & int((int)255));
												int tmp43 = tmp42;
												Float tmp44 = ::lime::math::color::_RGBA::RGBA_Impl__obj::unmult;
												Float tmp45 = (tmp43 * tmp44);
												int tmp46 = ::Math_obj::round(tmp45);
												int idx = tmp46;
												int tmp47 = ::__hxcpp_memory_get_byte(this1->buffer->b,(this1->byteOffset + idx));
												tmp38 = (int(tmp47) & int((int)255));
											}
											int b = tmp38;
											int tmp39 = (int(r) & int((int)255));
											int tmp40 = (int(tmp39) << int((int)24));
											int tmp41 = (int(g) & int((int)255));
											int tmp42 = (int(tmp41) << int((int)16));
											int tmp43 = (int(tmp40) | int(tmp42));
											int tmp44 = (int(b) & int((int)255));
											int tmp45 = (int(tmp44) << int((int)8));
											int tmp46 = (int(tmp43) | int(tmp45));
											int tmp47 = (int(destPixel) & int((int)255));
											int tmp48 = tmp47;
											int tmp49 = (int(tmp48) & int((int)255));
											int tmp50 = (int(tmp46) | int(tmp49));
											destPixel = tmp50;
										}
									}
								}
							}
							{
								int tmp27 = (int(sourcePixel) >> int((int)24));
								int tmp28 = tmp27;
								int tmp29 = (int(tmp28) & int((int)255));
								int tmp30 = tmp29;
								int tmp31 = redMultiplier;
								int tmp32 = (tmp30 * tmp31);
								int tmp33 = (int(destPixel) >> int((int)24));
								int tmp34 = tmp33;
								int tmp35 = (int(tmp34) & int((int)255));
								int tmp36 = tmp35;
								int tmp37 = ((int)256 - redMultiplier);
								int tmp38 = (tmp36 * tmp37);
								int tmp39 = (tmp32 + tmp38);
								Float tmp40 = (Float(tmp39) / Float((int)256));
								int tmp41 = ::Std_obj::_int(tmp40);
								int value = tmp41;
								{
									int tmp42 = (int(value) & int((int)255));
									int tmp43 = (int(tmp42) << int((int)24));
									int tmp44 = (int(destPixel) >> int((int)16));
									int tmp45 = tmp44;
									int tmp46 = (int(tmp45) & int((int)255));
									int tmp47 = tmp46;
									int tmp48 = (int(tmp47) & int((int)255));
									int tmp49 = (int(tmp48) << int((int)16));
									int tmp50 = (int(tmp43) | int(tmp49));
									int tmp51 = (int(destPixel) >> int((int)8));
									int tmp52 = tmp51;
									int tmp53 = (int(tmp52) & int((int)255));
									int tmp54 = tmp53;
									int tmp55 = (int(tmp54) & int((int)255));
									int tmp56 = (int(tmp55) << int((int)8));
									int tmp57 = (int(tmp50) | int(tmp56));
									int tmp58 = (int(destPixel) & int((int)255));
									int tmp59 = tmp58;
									int tmp60 = (int(tmp59) & int((int)255));
									int tmp61 = (int(tmp57) | int(tmp60));
									destPixel = tmp61;
								}
								value;
							}
							{
								int tmp27 = (int(sourcePixel) >> int((int)16));
								int tmp28 = tmp27;
								int tmp29 = (int(tmp28) & int((int)255));
								int tmp30 = tmp29;
								int tmp31 = greenMultiplier;
								int tmp32 = (tmp30 * tmp31);
								int tmp33 = (int(destPixel) >> int((int)16));
								int tmp34 = tmp33;
								int tmp35 = (int(tmp34) & int((int)255));
								int tmp36 = tmp35;
								int tmp37 = ((int)256 - greenMultiplier);
								int tmp38 = (tmp36 * tmp37);
								int tmp39 = (tmp32 + tmp38);
								Float tmp40 = (Float(tmp39) / Float((int)256));
								int tmp41 = ::Std_obj::_int(tmp40);
								int value = tmp41;
								{
									int tmp42 = (int(destPixel) >> int((int)24));
									int tmp43 = tmp42;
									int tmp44 = (int(tmp43) & int((int)255));
									int tmp45 = tmp44;
									int tmp46 = (int(tmp45) & int((int)255));
									int tmp47 = (int(tmp46) << int((int)24));
									int tmp48 = (int(value) & int((int)255));
									int tmp49 = (int(tmp48) << int((int)16));
									int tmp50 = (int(tmp47) | int(tmp49));
									int tmp51 = (int(destPixel) >> int((int)8));
									int tmp52 = tmp51;
									int tmp53 = (int(tmp52) & int((int)255));
									int tmp54 = tmp53;
									int tmp55 = (int(tmp54) & int((int)255));
									int tmp56 = (int(tmp55) << int((int)8));
									int tmp57 = (int(tmp50) | int(tmp56));
									int tmp58 = (int(destPixel) & int((int)255));
									int tmp59 = tmp58;
									int tmp60 = (int(tmp59) & int((int)255));
									int tmp61 = (int(tmp57) | int(tmp60));
									destPixel = tmp61;
								}
								value;
							}
							{
								int tmp27 = (int(sourcePixel) >> int((int)8));
								int tmp28 = tmp27;
								int tmp29 = (int(tmp28) & int((int)255));
								int tmp30 = tmp29;
								int tmp31 = blueMultiplier;
								int tmp32 = (tmp30 * tmp31);
								int tmp33 = (int(destPixel) >> int((int)8));
								int tmp34 = tmp33;
								int tmp35 = (int(tmp34) & int((int)255));
								int tmp36 = tmp35;
								int tmp37 = ((int)256 - blueMultiplier);
								int tmp38 = (tmp36 * tmp37);
								int tmp39 = (tmp32 + tmp38);
								Float tmp40 = (Float(tmp39) / Float((int)256));
								int tmp41 = ::Std_obj::_int(tmp40);
								int value = tmp41;
								{
									int tmp42 = (int(destPixel) >> int((int)24));
									int tmp43 = tmp42;
									int tmp44 = (int(tmp43) & int((int)255));
									int tmp45 = tmp44;
									int tmp46 = (int(tmp45) & int((int)255));
									int tmp47 = (int(tmp46) << int((int)24));
									int tmp48 = (int(destPixel) >> int((int)16));
									int tmp49 = tmp48;
									int tmp50 = (int(tmp49) & int((int)255));
									int tmp51 = tmp50;
									int tmp52 = (int(tmp51) & int((int)255));
									int tmp53 = (int(tmp52) << int((int)16));
									int tmp54 = (int(tmp47) | int(tmp53));
									int tmp55 = (int(value) & int((int)255));
									int tmp56 = (int(tmp55) << int((int)8));
									int tmp57 = (int(tmp54) | int(tmp56));
									int tmp58 = (int(destPixel) & int((int)255));
									int tmp59 = tmp58;
									int tmp60 = (int(tmp59) & int((int)255));
									int tmp61 = (int(tmp57) | int(tmp60));
									destPixel = tmp61;
								}
								value;
							}
							{
								int tmp27 = (int(sourcePixel) & int((int)255));
								int tmp28 = tmp27;
								int tmp29 = alphaMultiplier;
								int tmp30 = (tmp28 * tmp29);
								int tmp31 = (int(destPixel) & int((int)255));
								int tmp32 = tmp31;
								int tmp33 = ((int)256 - alphaMultiplier);
								int tmp34 = (tmp32 * tmp33);
								int tmp35 = (tmp30 + tmp34);
								Float tmp36 = (Float(tmp35) / Float((int)256));
								int tmp37 = ::Std_obj::_int(tmp36);
								int value = tmp37;
								{
									int tmp38 = (int(destPixel) >> int((int)24));
									int tmp39 = tmp38;
									int tmp40 = (int(tmp39) & int((int)255));
									int tmp41 = tmp40;
									int tmp42 = (int(tmp41) & int((int)255));
									int tmp43 = (int(tmp42) << int((int)24));
									int tmp44 = (int(destPixel) >> int((int)16));
									int tmp45 = tmp44;
									int tmp46 = (int(tmp45) & int((int)255));
									int tmp47 = tmp46;
									int tmp48 = (int(tmp47) & int((int)255));
									int tmp49 = (int(tmp48) << int((int)16));
									int tmp50 = (int(tmp43) | int(tmp49));
									int tmp51 = (int(destPixel) >> int((int)8));
									int tmp52 = tmp51;
									int tmp53 = (int(tmp52) & int((int)255));
									int tmp54 = tmp53;
									int tmp55 = (int(tmp54) & int((int)255));
									int tmp56 = (int(tmp55) << int((int)8));
									int tmp57 = (int(tmp50) | int(tmp56));
									int tmp58 = (int(value) & int((int)255));
									int tmp59 = (int(tmp57) | int(tmp58));
									destPixel = tmp59;
								}
								value;
							}
							{
								bool tmp27 = destPremultiplied;
								if ((tmp27)){
									int tmp28 = (int(destPixel) & int((int)255));
									int tmp29 = tmp28;
									bool tmp30 = (tmp29 == (int)0);
									if ((tmp30)){
										bool tmp31 = (destPixel != (int)0);
										if ((tmp31)){
											destPixel = (int)0;
										}
									}
									else{
										int tmp31 = (int(destPixel) & int((int)255));
										int tmp32 = tmp31;
										bool tmp33 = (tmp32 != (int)255);
										if ((tmp33)){
											Dynamic tmp34;
											{
												::lime::utils::ArrayBufferView tmp35 = ::lime::math::color::_RGBA::RGBA_Impl__obj::__alpha16;
												::lime::utils::ArrayBufferView this1 = tmp35;
												tmp34 = ::__hxcpp_memory_get_ui32(this1->buffer->b,(this1->byteOffset + (((int(destPixel) & int((int)255))) * (int)4)));
											}
											::lime::math::color::_RGBA::RGBA_Impl__obj::a16 = tmp34;
											{
												int tmp35 = (int(destPixel) >> int((int)24));
												int tmp36 = tmp35;
												int tmp37 = (int(tmp36) & int((int)255));
												int tmp38 = tmp37;
												int tmp39 = ::lime::math::color::_RGBA::RGBA_Impl__obj::a16;
												int tmp40 = (tmp38 * tmp39);
												int tmp41 = (int(tmp40) >> int((int)16));
												int tmp42 = (int(tmp41) & int((int)255));
												int tmp43 = (int(tmp42) << int((int)24));
												int tmp44 = (int(destPixel) >> int((int)16));
												int tmp45 = tmp44;
												int tmp46 = (int(tmp45) & int((int)255));
												int tmp47 = tmp46;
												int tmp48 = ::lime::math::color::_RGBA::RGBA_Impl__obj::a16;
												int tmp49 = (tmp47 * tmp48);
												int tmp50 = (int(tmp49) >> int((int)16));
												int tmp51 = (int(tmp50) & int((int)255));
												int tmp52 = (int(tmp51) << int((int)16));
												int tmp53 = (int(tmp43) | int(tmp52));
												int tmp54 = (int(destPixel) >> int((int)8));
												int tmp55 = tmp54;
												int tmp56 = (int(tmp55) & int((int)255));
												int tmp57 = tmp56;
												int tmp58 = ::lime::math::color::_RGBA::RGBA_Impl__obj::a16;
												int tmp59 = (tmp57 * tmp58);
												int tmp60 = (int(tmp59) >> int((int)16));
												int tmp61 = (int(tmp60) & int((int)255));
												int tmp62 = (int(tmp61) << int((int)8));
												int tmp63 = (int(tmp53) | int(tmp62));
												int tmp64 = (int(destPixel) & int((int)255));
												int tmp65 = tmp64;
												int tmp66 = (int(tmp65) & int((int)255));
												int tmp67 = (int(tmp63) | int(tmp66));
												destPixel = tmp67;
											}
										}
									}
								}
								int tmp28 = destFormat;
								switch( (int)(tmp28)){
									case (int)2: {
										{
											int tmp29 = (int(destPixel) >> int((int)8));
											int tmp30 = tmp29;
											int tmp31 = (int(tmp30) & int((int)255));
											int val = tmp31;
											::__hxcpp_memory_set_byte(destData->buffer->b,(destData->byteOffset + destPosition),val);
											val;
										}
										{
											int tmp29 = (int(destPixel) >> int((int)16));
											int tmp30 = tmp29;
											int tmp31 = (int(tmp30) & int((int)255));
											int val = tmp31;
											::__hxcpp_memory_set_byte(destData->buffer->b,(destData->byteOffset + ((destPosition + (int)1))),val);
											val;
										}
										{
											int tmp29 = (int(destPixel) >> int((int)24));
											int tmp30 = tmp29;
											int tmp31 = (int(tmp30) & int((int)255));
											int val = tmp31;
											::__hxcpp_memory_set_byte(destData->buffer->b,(destData->byteOffset + ((destPosition + (int)2))),val);
											val;
										}
										{
											int tmp29 = (int(destPixel) & int((int)255));
											int val = tmp29;
											::__hxcpp_memory_set_byte(destData->buffer->b,(destData->byteOffset + ((destPosition + (int)3))),val);
											val;
										}
									}
									;break;
									case (int)0: {
										{
											int tmp29 = (int(destPixel) >> int((int)24));
											int tmp30 = tmp29;
											int tmp31 = (int(tmp30) & int((int)255));
											int val = tmp31;
											::__hxcpp_memory_set_byte(destData->buffer->b,(destData->byteOffset + destPosition),val);
											val;
										}
										{
											int tmp29 = (int(destPixel) >> int((int)16));
											int tmp30 = tmp29;
											int tmp31 = (int(tmp30) & int((int)255));
											int val = tmp31;
											::__hxcpp_memory_set_byte(destData->buffer->b,(destData->byteOffset + ((destPosition + (int)1))),val);
											val;
										}
										{
											int tmp29 = (int(destPixel) >> int((int)8));
											int tmp30 = tmp29;
											int tmp31 = (int(tmp30) & int((int)255));
											int val = tmp31;
											::__hxcpp_memory_set_byte(destData->buffer->b,(destData->byteOffset + ((destPosition + (int)2))),val);
											val;
										}
										{
											int tmp29 = (int(destPixel) & int((int)255));
											int val = tmp29;
											::__hxcpp_memory_set_byte(destData->buffer->b,(destData->byteOffset + ((destPosition + (int)3))),val);
											val;
										}
									}
									;break;
									case (int)1: {
										{
											int tmp29 = (int(destPixel) & int((int)255));
											int val = tmp29;
											::__hxcpp_memory_set_byte(destData->buffer->b,(destData->byteOffset + destPosition),val);
											val;
										}
										{
											int tmp29 = (int(destPixel) >> int((int)24));
											int tmp30 = tmp29;
											int tmp31 = (int(tmp30) & int((int)255));
											int val = tmp31;
											::__hxcpp_memory_set_byte(destData->buffer->b,(destData->byteOffset + ((destPosition + (int)1))),val);
											val;
										}
										{
											int tmp29 = (int(destPixel) >> int((int)16));
											int tmp30 = tmp29;
											int tmp31 = (int(tmp30) & int((int)255));
											int val = tmp31;
											::__hxcpp_memory_set_byte(destData->buffer->b,(destData->byteOffset + ((destPosition + (int)2))),val);
											val;
										}
										{
											int tmp29 = (int(destPixel) >> int((int)8));
											int tmp30 = tmp29;
											int tmp31 = (int(tmp30) & int((int)255));
											int val = tmp31;
											::__hxcpp_memory_set_byte(destData->buffer->b,(destData->byteOffset + ((destPosition + (int)3))),val);
											val;
										}
									}
									;break;
								}
							}
							hx::AddEq(sourcePosition,(int)4);
							hx::AddEq(destPosition,(int)4);
						}
					}
				}
			}
		}
		image->dirty = true;
		(image->version)++;
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC8(ImageDataUtil_obj,merge,(void))

Void ImageDataUtil_obj::multiplyAlpha( ::lime::graphics::Image image){
{
		::lime::utils::ArrayBufferView tmp = image->buffer->data;
		::lime::utils::ArrayBufferView data = tmp;
		bool tmp1 = (data == null());
		bool tmp2 = !(tmp1);
		bool tmp3;
		if ((tmp2)){
			bool tmp4 = image->buffer->transparent;
			bool tmp5 = tmp4;
			bool tmp6 = tmp5;
			tmp3 = !(tmp6);
		}
		else{
			tmp3 = true;
		}
		if ((tmp3)){
			return null();
		}
		bool tmp4 = ::lime::_system::CFFI_obj::enabled;
		if ((tmp4)){
			::lime::_backend::native::NativeCFFI_obj::cffi_lime_image_data_util_multiply_alpha.call(hx::DynamicPtr(image));
		}
		else{
			int tmp5 = image->buffer->format;
			int format = tmp5;
			int tmp6 = data->length;
			Float tmp7 = (Float(tmp6) / Float((int)4));
			int tmp8 = ::Std_obj::_int(tmp7);
			int length = tmp8;
			int pixel;
			{
				int _g = (int)0;
				while((true)){
					bool tmp9 = (_g < length);
					bool tmp10 = !(tmp9);
					if ((tmp10)){
						break;
					}
					int tmp11 = (_g)++;
					int i = tmp11;
					{
						int tmp12 = (i * (int)4);
						int offset = tmp12;
						int tmp13 = format;
						switch( (int)(tmp13)){
							case (int)2: {
								int tmp14 = ::__hxcpp_memory_get_byte(data->buffer->b,(data->byteOffset + ((offset + (int)2))));
								Dynamic tmp15 = (int(tmp14) & int((int)255));
								int r = tmp15;
								int tmp16 = ::__hxcpp_memory_get_byte(data->buffer->b,(data->byteOffset + ((offset + (int)1))));
								Dynamic tmp17 = (int(tmp16) & int((int)255));
								int g = tmp17;
								int tmp18 = ::__hxcpp_memory_get_byte(data->buffer->b,(data->byteOffset + offset));
								Dynamic tmp19 = (int(tmp18) & int((int)255));
								int b = tmp19;
								int tmp20 = ::__hxcpp_memory_get_byte(data->buffer->b,(data->byteOffset + ((offset + (int)3))));
								Dynamic tmp21 = (int(tmp20) & int((int)255));
								int a = tmp21;
								int tmp22 = (int(r) & int((int)255));
								int tmp23 = (int(tmp22) << int((int)24));
								int tmp24 = (int(g) & int((int)255));
								int tmp25 = (int(tmp24) << int((int)16));
								int tmp26 = (int(tmp23) | int(tmp25));
								int tmp27 = (int(b) & int((int)255));
								int tmp28 = (int(tmp27) << int((int)8));
								int tmp29 = (int(tmp26) | int(tmp28));
								int tmp30 = (int(a) & int((int)255));
								int tmp31 = (int(tmp29) | int(tmp30));
								pixel = tmp31;
							}
							;break;
							case (int)0: {
								int tmp14 = ::__hxcpp_memory_get_byte(data->buffer->b,(data->byteOffset + offset));
								Dynamic tmp15 = (int(tmp14) & int((int)255));
								int r = tmp15;
								int tmp16 = ::__hxcpp_memory_get_byte(data->buffer->b,(data->byteOffset + ((offset + (int)1))));
								Dynamic tmp17 = (int(tmp16) & int((int)255));
								int g = tmp17;
								int tmp18 = ::__hxcpp_memory_get_byte(data->buffer->b,(data->byteOffset + ((offset + (int)2))));
								Dynamic tmp19 = (int(tmp18) & int((int)255));
								int b = tmp19;
								int tmp20 = ::__hxcpp_memory_get_byte(data->buffer->b,(data->byteOffset + ((offset + (int)3))));
								Dynamic tmp21 = (int(tmp20) & int((int)255));
								int a = tmp21;
								int tmp22 = (int(r) & int((int)255));
								int tmp23 = (int(tmp22) << int((int)24));
								int tmp24 = (int(g) & int((int)255));
								int tmp25 = (int(tmp24) << int((int)16));
								int tmp26 = (int(tmp23) | int(tmp25));
								int tmp27 = (int(b) & int((int)255));
								int tmp28 = (int(tmp27) << int((int)8));
								int tmp29 = (int(tmp26) | int(tmp28));
								int tmp30 = (int(a) & int((int)255));
								int tmp31 = (int(tmp29) | int(tmp30));
								pixel = tmp31;
							}
							;break;
							case (int)1: {
								int tmp14 = ::__hxcpp_memory_get_byte(data->buffer->b,(data->byteOffset + ((offset + (int)1))));
								Dynamic tmp15 = (int(tmp14) & int((int)255));
								int r = tmp15;
								int tmp16 = ::__hxcpp_memory_get_byte(data->buffer->b,(data->byteOffset + ((offset + (int)2))));
								Dynamic tmp17 = (int(tmp16) & int((int)255));
								int g = tmp17;
								int tmp18 = ::__hxcpp_memory_get_byte(data->buffer->b,(data->byteOffset + ((offset + (int)3))));
								Dynamic tmp19 = (int(tmp18) & int((int)255));
								int b = tmp19;
								int tmp20 = ::__hxcpp_memory_get_byte(data->buffer->b,(data->byteOffset + offset));
								Dynamic tmp21 = (int(tmp20) & int((int)255));
								int a = tmp21;
								int tmp22 = (int(r) & int((int)255));
								int tmp23 = (int(tmp22) << int((int)24));
								int tmp24 = (int(g) & int((int)255));
								int tmp25 = (int(tmp24) << int((int)16));
								int tmp26 = (int(tmp23) | int(tmp25));
								int tmp27 = (int(b) & int((int)255));
								int tmp28 = (int(tmp27) << int((int)8));
								int tmp29 = (int(tmp26) | int(tmp28));
								int tmp30 = (int(a) & int((int)255));
								int tmp31 = (int(tmp29) | int(tmp30));
								pixel = tmp31;
							}
							;break;
						}
						{
						}
					}
					{
						int tmp12 = (i * (int)4);
						int offset = tmp12;
						{
							int tmp13 = (int(pixel) & int((int)255));
							int tmp14 = tmp13;
							bool tmp15 = (tmp14 == (int)0);
							if ((tmp15)){
								bool tmp16 = (pixel != (int)0);
								if ((tmp16)){
									pixel = (int)0;
								}
							}
							else{
								int tmp16 = (int(pixel) & int((int)255));
								int tmp17 = tmp16;
								bool tmp18 = (tmp17 != (int)255);
								if ((tmp18)){
									Dynamic tmp19;
									{
										::lime::utils::ArrayBufferView tmp20 = ::lime::math::color::_RGBA::RGBA_Impl__obj::__alpha16;
										::lime::utils::ArrayBufferView this1 = tmp20;
										tmp19 = ::__hxcpp_memory_get_ui32(this1->buffer->b,(this1->byteOffset + (((int(pixel) & int((int)255))) * (int)4)));
									}
									::lime::math::color::_RGBA::RGBA_Impl__obj::a16 = tmp19;
									{
										int tmp20 = (int(pixel) >> int((int)24));
										int tmp21 = tmp20;
										int tmp22 = (int(tmp21) & int((int)255));
										int tmp23 = tmp22;
										int tmp24 = ::lime::math::color::_RGBA::RGBA_Impl__obj::a16;
										int tmp25 = (tmp23 * tmp24);
										int tmp26 = (int(tmp25) >> int((int)16));
										int tmp27 = (int(tmp26) & int((int)255));
										int tmp28 = (int(tmp27) << int((int)24));
										int tmp29 = (int(pixel) >> int((int)16));
										int tmp30 = tmp29;
										int tmp31 = (int(tmp30) & int((int)255));
										int tmp32 = tmp31;
										int tmp33 = ::lime::math::color::_RGBA::RGBA_Impl__obj::a16;
										int tmp34 = (tmp32 * tmp33);
										int tmp35 = (int(tmp34) >> int((int)16));
										int tmp36 = (int(tmp35) & int((int)255));
										int tmp37 = (int(tmp36) << int((int)16));
										int tmp38 = (int(tmp28) | int(tmp37));
										int tmp39 = (int(pixel) >> int((int)8));
										int tmp40 = tmp39;
										int tmp41 = (int(tmp40) & int((int)255));
										int tmp42 = tmp41;
										int tmp43 = ::lime::math::color::_RGBA::RGBA_Impl__obj::a16;
										int tmp44 = (tmp42 * tmp43);
										int tmp45 = (int(tmp44) >> int((int)16));
										int tmp46 = (int(tmp45) & int((int)255));
										int tmp47 = (int(tmp46) << int((int)8));
										int tmp48 = (int(tmp38) | int(tmp47));
										int tmp49 = (int(pixel) & int((int)255));
										int tmp50 = tmp49;
										int tmp51 = (int(tmp50) & int((int)255));
										int tmp52 = (int(tmp48) | int(tmp51));
										pixel = tmp52;
									}
								}
							}
						}
						int tmp13 = format;
						switch( (int)(tmp13)){
							case (int)2: {
								{
									int tmp14 = (int(pixel) >> int((int)8));
									int tmp15 = tmp14;
									int tmp16 = (int(tmp15) & int((int)255));
									int val = tmp16;
									::__hxcpp_memory_set_byte(data->buffer->b,(data->byteOffset + offset),val);
									val;
								}
								{
									int tmp14 = (int(pixel) >> int((int)16));
									int tmp15 = tmp14;
									int tmp16 = (int(tmp15) & int((int)255));
									int val = tmp16;
									::__hxcpp_memory_set_byte(data->buffer->b,(data->byteOffset + ((offset + (int)1))),val);
									val;
								}
								{
									int tmp14 = (int(pixel) >> int((int)24));
									int tmp15 = tmp14;
									int tmp16 = (int(tmp15) & int((int)255));
									int val = tmp16;
									::__hxcpp_memory_set_byte(data->buffer->b,(data->byteOffset + ((offset + (int)2))),val);
									val;
								}
								{
									int tmp14 = (int(pixel) & int((int)255));
									int val = tmp14;
									::__hxcpp_memory_set_byte(data->buffer->b,(data->byteOffset + ((offset + (int)3))),val);
									val;
								}
							}
							;break;
							case (int)0: {
								{
									int tmp14 = (int(pixel) >> int((int)24));
									int tmp15 = tmp14;
									int tmp16 = (int(tmp15) & int((int)255));
									int val = tmp16;
									::__hxcpp_memory_set_byte(data->buffer->b,(data->byteOffset + offset),val);
									val;
								}
								{
									int tmp14 = (int(pixel) >> int((int)16));
									int tmp15 = tmp14;
									int tmp16 = (int(tmp15) & int((int)255));
									int val = tmp16;
									::__hxcpp_memory_set_byte(data->buffer->b,(data->byteOffset + ((offset + (int)1))),val);
									val;
								}
								{
									int tmp14 = (int(pixel) >> int((int)8));
									int tmp15 = tmp14;
									int tmp16 = (int(tmp15) & int((int)255));
									int val = tmp16;
									::__hxcpp_memory_set_byte(data->buffer->b,(data->byteOffset + ((offset + (int)2))),val);
									val;
								}
								{
									int tmp14 = (int(pixel) & int((int)255));
									int val = tmp14;
									::__hxcpp_memory_set_byte(data->buffer->b,(data->byteOffset + ((offset + (int)3))),val);
									val;
								}
							}
							;break;
							case (int)1: {
								{
									int tmp14 = (int(pixel) & int((int)255));
									int val = tmp14;
									::__hxcpp_memory_set_byte(data->buffer->b,(data->byteOffset + offset),val);
									val;
								}
								{
									int tmp14 = (int(pixel) >> int((int)24));
									int tmp15 = tmp14;
									int tmp16 = (int(tmp15) & int((int)255));
									int val = tmp16;
									::__hxcpp_memory_set_byte(data->buffer->b,(data->byteOffset + ((offset + (int)1))),val);
									val;
								}
								{
									int tmp14 = (int(pixel) >> int((int)16));
									int tmp15 = tmp14;
									int tmp16 = (int(tmp15) & int((int)255));
									int val = tmp16;
									::__hxcpp_memory_set_byte(data->buffer->b,(data->byteOffset + ((offset + (int)2))),val);
									val;
								}
								{
									int tmp14 = (int(pixel) >> int((int)8));
									int tmp15 = tmp14;
									int tmp16 = (int(tmp15) & int((int)255));
									int val = tmp16;
									::__hxcpp_memory_set_byte(data->buffer->b,(data->byteOffset + ((offset + (int)3))),val);
									val;
								}
							}
							;break;
						}
					}
				}
			}
		}
		image->buffer->premultiplied = true;
		image->dirty = true;
		(image->version)++;
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(ImageDataUtil_obj,multiplyAlpha,(void))

Void ImageDataUtil_obj::resize( ::lime::graphics::Image image,int newWidth,int newHeight){
{
		::lime::graphics::ImageBuffer buffer = image->buffer;
		bool tmp = (buffer->width == newWidth);
		bool tmp1;
		if ((tmp)){
			tmp1 = (buffer->height == newHeight);
		}
		else{
			tmp1 = false;
		}
		if ((tmp1)){
			return null();
		}
		::lime::utils::ArrayBufferView tmp2;
		{
			int tmp3 = (newWidth * newHeight);
			int tmp4 = (tmp3 * (int)4);
			Dynamic elements = tmp4;
			::lime::utils::ArrayBufferView this1;
			bool tmp5 = (elements != null());
			if ((tmp5)){
				::lime::utils::ArrayBufferView tmp6 = ::lime::utils::ArrayBufferView_obj::__new(elements,(int)4);
				this1 = tmp6;
			}
			else{
				bool tmp6 = false;
				if ((tmp6)){
					::lime::utils::ArrayBufferView tmp7;
					{
						::lime::utils::ArrayBufferView tmp8 = ::lime::utils::ArrayBufferView_obj::__new((int)0,(int)4);
						::lime::utils::ArrayBufferView _this = tmp8;
						_this->byteOffset = (int)0;
						int tmp9 = hx::Throw(HX_CSTRING("Invalid field access on null object"));
						_this->length = tmp9;
						int tmp10 = (_this->length * _this->bytesPerElement);
						_this->byteLength = tmp10;
						::haxe::io::Bytes tmp11;
						{
							::haxe::io::Bytes this2;
							int tmp12 = _this->byteLength;
							::haxe::io::Bytes tmp13 = ::haxe::io::Bytes_obj::alloc(tmp12);
							this2 = tmp13;
							tmp11 = this2;
						}
						_this->buffer = tmp11;
						_this->copyFromArray(((Array< Float >)(null())),null());
						tmp7 = _this;
					}
					this1 = tmp7;
				}
				else{
					bool tmp7 = false;
					if ((tmp7)){
						::lime::utils::ArrayBufferView tmp8;
						{
							::lime::utils::ArrayBufferView tmp9 = ::lime::utils::ArrayBufferView_obj::__new((int)0,(int)4);
							::lime::utils::ArrayBufferView _this = tmp9;
							cpp::ArrayBase array = hx::Throw(HX_CSTRING("Invalid field access on null object"));
							_this->byteOffset = (int)0;
							_this->length = array->__Field(HX_HCSTRING("length","\xe6","\x94","\x07","\x9f"), hx::paccDynamic );
							int tmp10 = (_this->length * _this->bytesPerElement);
							_this->byteLength = tmp10;
							::haxe::io::Bytes tmp11;
							{
								::haxe::io::Bytes this2;
								int tmp12 = _this->byteLength;
								::haxe::io::Bytes tmp13 = ::haxe::io::Bytes_obj::alloc(tmp12);
								this2 = tmp13;
								tmp11 = this2;
							}
							_this->buffer = tmp11;
							_this->copyFromArray(((Array< Float >)(array)),null());
							tmp8 = _this;
						}
						this1 = tmp8;
					}
					else{
						bool tmp8 = false;
						if ((tmp8)){
							::lime::utils::ArrayBufferView tmp9;
							{
								::lime::utils::ArrayBufferView tmp10 = ::lime::utils::ArrayBufferView_obj::__new((int)0,(int)4);
								::lime::utils::ArrayBufferView _this = tmp10;
								::haxe::io::Bytes tmp11 = hx::Throw(HX_CSTRING("Invalid field access on null object"));
								::haxe::io::Bytes srcData = tmp11;
								int tmp12 = hx::Throw(HX_CSTRING("Invalid field access on null object"));
								int srcLength = tmp12;
								int tmp13 = hx::Throw(HX_CSTRING("Invalid field access on null object"));
								int srcByteOffset = tmp13;
								int tmp14 = hx::Throw(HX_CSTRING("Invalid field access on null object"));
								int srcElementSize = tmp14;
								int elementSize = _this->bytesPerElement;
								int tmp15 = hx::Throw(HX_CSTRING("Invalid field access on null object"));
								int tmp16 = _this->type;
								bool tmp17 = (tmp15 == tmp16);
								if ((tmp17)){
									int srcLength1 = srcData->length;
									int tmp18 = (srcLength1 - srcByteOffset);
									int cloneLength = tmp18;
									::haxe::io::Bytes tmp19;
									{
										::haxe::io::Bytes this2;
										int tmp20 = cloneLength;
										::haxe::io::Bytes tmp21 = ::haxe::io::Bytes_obj::alloc(tmp20);
										this2 = tmp21;
										tmp19 = this2;
									}
									_this->buffer = tmp19;
									::haxe::io::Bytes tmp20 = srcData;
									int tmp21 = srcByteOffset;
									int tmp22 = cloneLength;
									_this->buffer->blit((int)0,tmp20,tmp21,tmp22);
								}
								else{
									HX_STACK_DO_THROW(HX_HCSTRING("unimplemented","\x09","\x2f","\x74","\xb4"));
								}
								int tmp18 = (_this->bytesPerElement * srcLength);
								_this->byteLength = tmp18;
								_this->byteOffset = (int)0;
								_this->length = srcLength;
								tmp9 = _this;
							}
							this1 = tmp9;
						}
						else{
							bool tmp9 = false;
							if ((tmp9)){
								::lime::utils::ArrayBufferView tmp10;
								{
									::lime::utils::ArrayBufferView tmp11 = ::lime::utils::ArrayBufferView_obj::__new((int)0,(int)4);
									::lime::utils::ArrayBufferView _this = tmp11;
									int in_byteOffset = (int)0;
									bool tmp12 = (in_byteOffset < (int)0);
									if ((tmp12)){
										HX_STACK_DO_THROW(::lime::utils::TAError_obj::RangeError);
									}
									int tmp13 = hx::Mod(in_byteOffset,_this->bytesPerElement);
									bool tmp14 = (tmp13 != (int)0);
									if ((tmp14)){
										HX_STACK_DO_THROW(::lime::utils::TAError_obj::RangeError);
									}
									int tmp15 = hx::Throw(HX_CSTRING("Invalid field access on null object"));
									int bufferByteLength = tmp15;
									int elementSize = _this->bytesPerElement;
									int newByteLength = bufferByteLength;
									bool tmp16 = true;
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
										int tmp17 = (null() * _this->bytesPerElement);
										newByteLength = tmp17;
										int tmp18 = (in_byteOffset + newByteLength);
										int newRange = tmp18;
										bool tmp19 = (newRange > bufferByteLength);
										if ((tmp19)){
											HX_STACK_DO_THROW(::lime::utils::TAError_obj::RangeError);
										}
									}
									_this->buffer = null();
									_this->byteOffset = in_byteOffset;
									_this->byteLength = newByteLength;
									Float tmp17 = (Float(newByteLength) / Float(_this->bytesPerElement));
									int tmp18 = ::Std_obj::_int(tmp17);
									_this->length = tmp18;
									tmp10 = _this;
								}
								this1 = tmp10;
							}
							else{
								HX_STACK_DO_THROW(HX_HCSTRING("Invalid constructor arguments for UInt8Array","\x6b","\x44","\xd5","\x85"));
							}
						}
					}
				}
			}
			tmp2 = this1;
		}
		int tmp3 = newWidth;
		int tmp4 = newHeight;
		::lime::graphics::ImageBuffer tmp5 = ::lime::graphics::ImageBuffer_obj::__new(tmp2,tmp3,tmp4,null(),null());
		::lime::graphics::ImageBuffer newBuffer = tmp5;
		bool tmp6 = ::lime::_system::CFFI_obj::enabled;
		if ((tmp6)){
			::lime::_backend::native::NativeCFFI_obj::cffi_lime_image_data_util_resize.call(hx::DynamicPtr(image),hx::DynamicPtr(newBuffer),newWidth,newHeight);
		}
		else{
			int imageWidth = image->width;
			int imageHeight = image->height;
			::lime::utils::ArrayBufferView tmp7 = image->get_data();
			::lime::utils::ArrayBufferView data = tmp7;
			::lime::utils::ArrayBufferView newData = newBuffer->data;
			int sourceIndex;
			int sourceIndexX;
			int sourceIndexY;
			int sourceIndexXY;
			int index;
			int sourceX;
			int sourceY;
			Float u;
			Float v;
			Float uRatio;
			Float vRatio;
			Float uOpposite;
			Float vOpposite;
			{
				int _g = (int)0;
				while((true)){
					bool tmp8 = (_g < newHeight);
					bool tmp9 = !(tmp8);
					if ((tmp9)){
						break;
					}
					int tmp10 = (_g)++;
					int y = tmp10;
					{
						int _g1 = (int)0;
						while((true)){
							bool tmp11 = (_g1 < newWidth);
							bool tmp12 = !(tmp11);
							if ((tmp12)){
								break;
							}
							int tmp13 = (_g1)++;
							int x = tmp13;
							Float tmp14 = (x + ((Float)0.5));
							int tmp15 = newWidth;
							Float tmp16 = (Float(tmp14) / Float(tmp15));
							int tmp17 = imageWidth;
							Float tmp18 = (tmp16 * tmp17);
							Float tmp19 = (tmp18 - ((Float)0.5));
							u = tmp19;
							Float tmp20 = (y + ((Float)0.5));
							int tmp21 = newHeight;
							Float tmp22 = (Float(tmp20) / Float(tmp21));
							int tmp23 = imageHeight;
							Float tmp24 = (tmp22 * tmp23);
							Float tmp25 = (tmp24 - ((Float)0.5));
							v = tmp25;
							Float tmp26 = u;
							int tmp27 = ::Std_obj::_int(tmp26);
							sourceX = tmp27;
							Float tmp28 = v;
							int tmp29 = ::Std_obj::_int(tmp28);
							sourceY = tmp29;
							int tmp30 = (sourceY * imageWidth);
							int tmp31 = sourceX;
							int tmp32 = (tmp30 + tmp31);
							int tmp33 = (tmp32 * (int)4);
							sourceIndex = tmp33;
							int tmp34 = sourceX;
							int tmp35 = (imageWidth - (int)1);
							bool tmp36 = (tmp34 < tmp35);
							int tmp37;
							if ((tmp36)){
								tmp37 = (sourceIndex + (int)4);
							}
							else{
								tmp37 = sourceIndex;
							}
							sourceIndexX = tmp37;
							int tmp38 = sourceY;
							int tmp39 = (imageHeight - (int)1);
							bool tmp40 = (tmp38 < tmp39);
							int tmp41;
							if ((tmp40)){
								int tmp42 = sourceIndex;
								int tmp43 = (imageWidth * (int)4);
								tmp41 = (tmp42 + tmp43);
							}
							else{
								tmp41 = sourceIndex;
							}
							sourceIndexY = tmp41;
							bool tmp42 = (sourceIndexX != sourceIndex);
							int tmp43;
							if ((tmp42)){
								tmp43 = (sourceIndexY + (int)4);
							}
							else{
								tmp43 = sourceIndexY;
							}
							sourceIndexXY = tmp43;
							int tmp44 = (y * newWidth);
							int tmp45 = x;
							int tmp46 = (tmp44 + tmp45);
							int tmp47 = (tmp46 * (int)4);
							index = tmp47;
							Float tmp48 = (u - sourceX);
							uRatio = tmp48;
							Float tmp49 = (v - sourceY);
							vRatio = tmp49;
							Float tmp50 = ((int)1 - uRatio);
							uOpposite = tmp50;
							Float tmp51 = ((int)1 - vRatio);
							vOpposite = tmp51;
							{
								Float tmp52;
								{
									int tmp53 = ::__hxcpp_memory_get_byte(data->buffer->b,(data->byteOffset + sourceIndex));
									Dynamic tmp54 = (int(tmp53) & int((int)255));
									int a = tmp54;
									Float tmp55;
									{
										int _int = a;
										bool tmp56 = (_int < (int)0);
										if ((tmp56)){
											tmp55 = (((Float)4294967296.0) + _int);
										}
										else{
											tmp55 = (_int + ((Float)0.0));
										}
									}
									Float tmp56 = uOpposite;
									tmp52 = (tmp55 * tmp56);
								}
								Float tmp53;
								{
									int tmp54 = ::__hxcpp_memory_get_byte(data->buffer->b,(data->byteOffset + sourceIndexX));
									Dynamic tmp55 = (int(tmp54) & int((int)255));
									int a = tmp55;
									Float tmp56;
									{
										int _int = a;
										bool tmp57 = (_int < (int)0);
										if ((tmp57)){
											tmp56 = (((Float)4294967296.0) + _int);
										}
										else{
											tmp56 = (_int + ((Float)0.0));
										}
									}
									Float tmp57 = uRatio;
									tmp53 = (tmp56 * tmp57);
								}
								Float tmp54 = (tmp52 + tmp53);
								Float tmp55 = vOpposite;
								Float tmp56 = (tmp54 * tmp55);
								Float tmp57;
								{
									int tmp58 = ::__hxcpp_memory_get_byte(data->buffer->b,(data->byteOffset + sourceIndexY));
									Dynamic tmp59 = (int(tmp58) & int((int)255));
									int a = tmp59;
									Float tmp60;
									{
										int _int = a;
										bool tmp61 = (_int < (int)0);
										if ((tmp61)){
											tmp60 = (((Float)4294967296.0) + _int);
										}
										else{
											tmp60 = (_int + ((Float)0.0));
										}
									}
									Float tmp61 = uOpposite;
									tmp57 = (tmp60 * tmp61);
								}
								Float tmp58;
								{
									int tmp59 = ::__hxcpp_memory_get_byte(data->buffer->b,(data->byteOffset + sourceIndexXY));
									Dynamic tmp60 = (int(tmp59) & int((int)255));
									int a = tmp60;
									Float tmp61;
									{
										int _int = a;
										bool tmp62 = (_int < (int)0);
										if ((tmp62)){
											tmp61 = (((Float)4294967296.0) + _int);
										}
										else{
											tmp61 = (_int + ((Float)0.0));
										}
									}
									Float tmp62 = uRatio;
									tmp58 = (tmp61 * tmp62);
								}
								Float tmp59 = (tmp57 + tmp58);
								Float tmp60 = vRatio;
								Float tmp61 = (tmp59 * tmp60);
								Float tmp62 = (tmp56 + tmp61);
								int tmp63 = ::Std_obj::_int(tmp62);
								int val = tmp63;
								::__hxcpp_memory_set_byte(newData->buffer->b,(newData->byteOffset + index),val);
								val;
							}
							{
								Float tmp52;
								{
									int tmp53 = ::__hxcpp_memory_get_byte(data->buffer->b,(data->byteOffset + ((sourceIndex + (int)1))));
									Dynamic tmp54 = (int(tmp53) & int((int)255));
									int a = tmp54;
									Float tmp55;
									{
										int _int = a;
										bool tmp56 = (_int < (int)0);
										if ((tmp56)){
											tmp55 = (((Float)4294967296.0) + _int);
										}
										else{
											tmp55 = (_int + ((Float)0.0));
										}
									}
									Float tmp56 = uOpposite;
									tmp52 = (tmp55 * tmp56);
								}
								Float tmp53;
								{
									int tmp54 = ::__hxcpp_memory_get_byte(data->buffer->b,(data->byteOffset + ((sourceIndexX + (int)1))));
									Dynamic tmp55 = (int(tmp54) & int((int)255));
									int a = tmp55;
									Float tmp56;
									{
										int _int = a;
										bool tmp57 = (_int < (int)0);
										if ((tmp57)){
											tmp56 = (((Float)4294967296.0) + _int);
										}
										else{
											tmp56 = (_int + ((Float)0.0));
										}
									}
									Float tmp57 = uRatio;
									tmp53 = (tmp56 * tmp57);
								}
								Float tmp54 = (tmp52 + tmp53);
								Float tmp55 = vOpposite;
								Float tmp56 = (tmp54 * tmp55);
								Float tmp57;
								{
									int tmp58 = ::__hxcpp_memory_get_byte(data->buffer->b,(data->byteOffset + ((sourceIndexY + (int)1))));
									Dynamic tmp59 = (int(tmp58) & int((int)255));
									int a = tmp59;
									Float tmp60;
									{
										int _int = a;
										bool tmp61 = (_int < (int)0);
										if ((tmp61)){
											tmp60 = (((Float)4294967296.0) + _int);
										}
										else{
											tmp60 = (_int + ((Float)0.0));
										}
									}
									Float tmp61 = uOpposite;
									tmp57 = (tmp60 * tmp61);
								}
								Float tmp58;
								{
									int tmp59 = ::__hxcpp_memory_get_byte(data->buffer->b,(data->byteOffset + ((sourceIndexXY + (int)1))));
									Dynamic tmp60 = (int(tmp59) & int((int)255));
									int a = tmp60;
									Float tmp61;
									{
										int _int = a;
										bool tmp62 = (_int < (int)0);
										if ((tmp62)){
											tmp61 = (((Float)4294967296.0) + _int);
										}
										else{
											tmp61 = (_int + ((Float)0.0));
										}
									}
									Float tmp62 = uRatio;
									tmp58 = (tmp61 * tmp62);
								}
								Float tmp59 = (tmp57 + tmp58);
								Float tmp60 = vRatio;
								Float tmp61 = (tmp59 * tmp60);
								Float tmp62 = (tmp56 + tmp61);
								int tmp63 = ::Std_obj::_int(tmp62);
								int val = tmp63;
								::__hxcpp_memory_set_byte(newData->buffer->b,(newData->byteOffset + ((index + (int)1))),val);
								val;
							}
							{
								Float tmp52;
								{
									int tmp53 = ::__hxcpp_memory_get_byte(data->buffer->b,(data->byteOffset + ((sourceIndex + (int)2))));
									Dynamic tmp54 = (int(tmp53) & int((int)255));
									int a = tmp54;
									Float tmp55;
									{
										int _int = a;
										bool tmp56 = (_int < (int)0);
										if ((tmp56)){
											tmp55 = (((Float)4294967296.0) + _int);
										}
										else{
											tmp55 = (_int + ((Float)0.0));
										}
									}
									Float tmp56 = uOpposite;
									tmp52 = (tmp55 * tmp56);
								}
								Float tmp53;
								{
									int tmp54 = ::__hxcpp_memory_get_byte(data->buffer->b,(data->byteOffset + ((sourceIndexX + (int)2))));
									Dynamic tmp55 = (int(tmp54) & int((int)255));
									int a = tmp55;
									Float tmp56;
									{
										int _int = a;
										bool tmp57 = (_int < (int)0);
										if ((tmp57)){
											tmp56 = (((Float)4294967296.0) + _int);
										}
										else{
											tmp56 = (_int + ((Float)0.0));
										}
									}
									Float tmp57 = uRatio;
									tmp53 = (tmp56 * tmp57);
								}
								Float tmp54 = (tmp52 + tmp53);
								Float tmp55 = vOpposite;
								Float tmp56 = (tmp54 * tmp55);
								Float tmp57;
								{
									int tmp58 = ::__hxcpp_memory_get_byte(data->buffer->b,(data->byteOffset + ((sourceIndexY + (int)2))));
									Dynamic tmp59 = (int(tmp58) & int((int)255));
									int a = tmp59;
									Float tmp60;
									{
										int _int = a;
										bool tmp61 = (_int < (int)0);
										if ((tmp61)){
											tmp60 = (((Float)4294967296.0) + _int);
										}
										else{
											tmp60 = (_int + ((Float)0.0));
										}
									}
									Float tmp61 = uOpposite;
									tmp57 = (tmp60 * tmp61);
								}
								Float tmp58;
								{
									int tmp59 = ::__hxcpp_memory_get_byte(data->buffer->b,(data->byteOffset + ((sourceIndexXY + (int)2))));
									Dynamic tmp60 = (int(tmp59) & int((int)255));
									int a = tmp60;
									Float tmp61;
									{
										int _int = a;
										bool tmp62 = (_int < (int)0);
										if ((tmp62)){
											tmp61 = (((Float)4294967296.0) + _int);
										}
										else{
											tmp61 = (_int + ((Float)0.0));
										}
									}
									Float tmp62 = uRatio;
									tmp58 = (tmp61 * tmp62);
								}
								Float tmp59 = (tmp57 + tmp58);
								Float tmp60 = vRatio;
								Float tmp61 = (tmp59 * tmp60);
								Float tmp62 = (tmp56 + tmp61);
								int tmp63 = ::Std_obj::_int(tmp62);
								int val = tmp63;
								::__hxcpp_memory_set_byte(newData->buffer->b,(newData->byteOffset + ((index + (int)2))),val);
								val;
							}
							bool tmp52;
							{
								int tmp53 = ::__hxcpp_memory_get_byte(data->buffer->b,(data->byteOffset + ((sourceIndexX + (int)3))));
								int tmp54 = tmp53;
								Dynamic tmp55 = (int(tmp54) & int((int)255));
								Dynamic tmp56 = tmp55;
								int a = tmp56;
								tmp52 = (a == (int)0);
							}
							bool tmp53 = !(tmp52);
							bool tmp54 = tmp53;
							bool tmp55;
							if ((tmp54)){
								int tmp56 = ::__hxcpp_memory_get_byte(data->buffer->b,(data->byteOffset + ((sourceIndexY + (int)3))));
								int tmp57 = tmp56;
								int tmp58 = tmp57;
								Dynamic tmp59 = (int(tmp58) & int((int)255));
								Dynamic tmp60 = tmp59;
								Dynamic tmp61 = tmp60;
								int a = tmp61;
								tmp55 = (a == (int)0);
							}
							else{
								tmp55 = true;
							}
							bool tmp56 = !(tmp55);
							bool tmp57;
							if ((tmp56)){
								int tmp58 = ::__hxcpp_memory_get_byte(data->buffer->b,(data->byteOffset + ((sourceIndexXY + (int)3))));
								int tmp59 = tmp58;
								Dynamic tmp60 = (int(tmp59) & int((int)255));
								Dynamic tmp61 = tmp60;
								int a = tmp61;
								tmp57 = (a == (int)0);
							}
							else{
								tmp57 = true;
							}
							if ((tmp57)){
								::__hxcpp_memory_set_byte(newData->buffer->b,(newData->byteOffset + ((index + (int)3))),(int)0);
								(int)0;
							}
							else{
								int tmp58 = ::__hxcpp_memory_get_byte(data->buffer->b,(data->byteOffset + ((sourceIndex + (int)3))));
								Dynamic tmp59 = (int(tmp58) & int((int)255));
								int val = tmp59;
								::__hxcpp_memory_set_byte(newData->buffer->b,(newData->byteOffset + ((index + (int)3))),val);
								val;
							}
						}
					}
				}
			}
		}
		buffer->data = newBuffer->data;
		buffer->width = newWidth;
		buffer->height = newHeight;
		image->dirty = true;
		(image->version)++;
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC3(ImageDataUtil_obj,resize,(void))

Void ImageDataUtil_obj::resizeBuffer( ::lime::graphics::Image image,int newWidth,int newHeight){
{
		::lime::graphics::ImageBuffer buffer = image->buffer;
		::lime::utils::ArrayBufferView tmp = image->get_data();
		::lime::utils::ArrayBufferView data = tmp;
		::lime::utils::ArrayBufferView tmp1;
		{
			int tmp2 = (newWidth * newHeight);
			int tmp3 = (tmp2 * (int)4);
			Dynamic elements = tmp3;
			::lime::utils::ArrayBufferView this1;
			bool tmp4 = (elements != null());
			if ((tmp4)){
				::lime::utils::ArrayBufferView tmp5 = ::lime::utils::ArrayBufferView_obj::__new(elements,(int)4);
				this1 = tmp5;
			}
			else{
				bool tmp5 = false;
				if ((tmp5)){
					::lime::utils::ArrayBufferView tmp6;
					{
						::lime::utils::ArrayBufferView tmp7 = ::lime::utils::ArrayBufferView_obj::__new((int)0,(int)4);
						::lime::utils::ArrayBufferView _this = tmp7;
						_this->byteOffset = (int)0;
						int tmp8 = hx::Throw(HX_CSTRING("Invalid field access on null object"));
						_this->length = tmp8;
						int tmp9 = (_this->length * _this->bytesPerElement);
						_this->byteLength = tmp9;
						::haxe::io::Bytes tmp10;
						{
							::haxe::io::Bytes this2;
							int tmp11 = _this->byteLength;
							::haxe::io::Bytes tmp12 = ::haxe::io::Bytes_obj::alloc(tmp11);
							this2 = tmp12;
							tmp10 = this2;
						}
						_this->buffer = tmp10;
						_this->copyFromArray(((Array< Float >)(null())),null());
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
							cpp::ArrayBase array = hx::Throw(HX_CSTRING("Invalid field access on null object"));
							_this->byteOffset = (int)0;
							_this->length = array->__Field(HX_HCSTRING("length","\xe6","\x94","\x07","\x9f"), hx::paccDynamic );
							int tmp9 = (_this->length * _this->bytesPerElement);
							_this->byteLength = tmp9;
							::haxe::io::Bytes tmp10;
							{
								::haxe::io::Bytes this2;
								int tmp11 = _this->byteLength;
								::haxe::io::Bytes tmp12 = ::haxe::io::Bytes_obj::alloc(tmp11);
								this2 = tmp12;
								tmp10 = this2;
							}
							_this->buffer = tmp10;
							_this->copyFromArray(((Array< Float >)(array)),null());
							tmp7 = _this;
						}
						this1 = tmp7;
					}
					else{
						bool tmp7 = false;
						if ((tmp7)){
							::lime::utils::ArrayBufferView tmp8;
							{
								::lime::utils::ArrayBufferView tmp9 = ::lime::utils::ArrayBufferView_obj::__new((int)0,(int)4);
								::lime::utils::ArrayBufferView _this = tmp9;
								::haxe::io::Bytes tmp10 = hx::Throw(HX_CSTRING("Invalid field access on null object"));
								::haxe::io::Bytes srcData = tmp10;
								int tmp11 = hx::Throw(HX_CSTRING("Invalid field access on null object"));
								int srcLength = tmp11;
								int tmp12 = hx::Throw(HX_CSTRING("Invalid field access on null object"));
								int srcByteOffset = tmp12;
								int tmp13 = hx::Throw(HX_CSTRING("Invalid field access on null object"));
								int srcElementSize = tmp13;
								int elementSize = _this->bytesPerElement;
								int tmp14 = hx::Throw(HX_CSTRING("Invalid field access on null object"));
								int tmp15 = _this->type;
								bool tmp16 = (tmp14 == tmp15);
								if ((tmp16)){
									int srcLength1 = srcData->length;
									int tmp17 = (srcLength1 - srcByteOffset);
									int cloneLength = tmp17;
									::haxe::io::Bytes tmp18;
									{
										::haxe::io::Bytes this2;
										int tmp19 = cloneLength;
										::haxe::io::Bytes tmp20 = ::haxe::io::Bytes_obj::alloc(tmp19);
										this2 = tmp20;
										tmp18 = this2;
									}
									_this->buffer = tmp18;
									::haxe::io::Bytes tmp19 = srcData;
									int tmp20 = srcByteOffset;
									int tmp21 = cloneLength;
									_this->buffer->blit((int)0,tmp19,tmp20,tmp21);
								}
								else{
									HX_STACK_DO_THROW(HX_HCSTRING("unimplemented","\x09","\x2f","\x74","\xb4"));
								}
								int tmp17 = (_this->bytesPerElement * srcLength);
								_this->byteLength = tmp17;
								_this->byteOffset = (int)0;
								_this->length = srcLength;
								tmp8 = _this;
							}
							this1 = tmp8;
						}
						else{
							bool tmp8 = false;
							if ((tmp8)){
								::lime::utils::ArrayBufferView tmp9;
								{
									::lime::utils::ArrayBufferView tmp10 = ::lime::utils::ArrayBufferView_obj::__new((int)0,(int)4);
									::lime::utils::ArrayBufferView _this = tmp10;
									int in_byteOffset = (int)0;
									bool tmp11 = (in_byteOffset < (int)0);
									if ((tmp11)){
										HX_STACK_DO_THROW(::lime::utils::TAError_obj::RangeError);
									}
									int tmp12 = hx::Mod(in_byteOffset,_this->bytesPerElement);
									bool tmp13 = (tmp12 != (int)0);
									if ((tmp13)){
										HX_STACK_DO_THROW(::lime::utils::TAError_obj::RangeError);
									}
									int tmp14 = hx::Throw(HX_CSTRING("Invalid field access on null object"));
									int bufferByteLength = tmp14;
									int elementSize = _this->bytesPerElement;
									int newByteLength = bufferByteLength;
									bool tmp15 = true;
									if ((tmp15)){
										int tmp16 = (bufferByteLength - in_byteOffset);
										newByteLength = tmp16;
										int tmp17 = hx::Mod(bufferByteLength,_this->bytesPerElement);
										bool tmp18 = (tmp17 != (int)0);
										if ((tmp18)){
											HX_STACK_DO_THROW(::lime::utils::TAError_obj::RangeError);
										}
										bool tmp19 = (newByteLength < (int)0);
										if ((tmp19)){
											HX_STACK_DO_THROW(::lime::utils::TAError_obj::RangeError);
										}
									}
									else{
										int tmp16 = (null() * _this->bytesPerElement);
										newByteLength = tmp16;
										int tmp17 = (in_byteOffset + newByteLength);
										int newRange = tmp17;
										bool tmp18 = (newRange > bufferByteLength);
										if ((tmp18)){
											HX_STACK_DO_THROW(::lime::utils::TAError_obj::RangeError);
										}
									}
									_this->buffer = null();
									_this->byteOffset = in_byteOffset;
									_this->byteLength = newByteLength;
									Float tmp16 = (Float(newByteLength) / Float(_this->bytesPerElement));
									int tmp17 = ::Std_obj::_int(tmp16);
									_this->length = tmp17;
									tmp9 = _this;
								}
								this1 = tmp9;
							}
							else{
								HX_STACK_DO_THROW(HX_HCSTRING("Invalid constructor arguments for UInt8Array","\x6b","\x44","\xd5","\x85"));
							}
						}
					}
				}
			}
			tmp1 = this1;
		}
		::lime::utils::ArrayBufferView newData = tmp1;
		int sourceIndex;
		int index;
		{
			int _g1 = (int)0;
			int _g = buffer->height;
			while((true)){
				bool tmp2 = (_g1 < _g);
				bool tmp3 = !(tmp2);
				if ((tmp3)){
					break;
				}
				int tmp4 = (_g1)++;
				int y = tmp4;
				{
					int _g3 = (int)0;
					int _g2 = buffer->width;
					while((true)){
						bool tmp5 = (_g3 < _g2);
						bool tmp6 = !(tmp5);
						if ((tmp6)){
							break;
						}
						int tmp7 = (_g3)++;
						int x = tmp7;
						int tmp8 = (y * buffer->width);
						int tmp9 = x;
						int tmp10 = (tmp8 + tmp9);
						int tmp11 = (tmp10 * (int)4);
						sourceIndex = tmp11;
						int tmp12 = (y * newWidth);
						int tmp13 = x;
						int tmp14 = (tmp12 + tmp13);
						int tmp15 = (tmp14 * (int)4);
						index = tmp15;
						{
							int tmp16 = ::__hxcpp_memory_get_byte(data->buffer->b,(data->byteOffset + sourceIndex));
							Dynamic tmp17 = (int(tmp16) & int((int)255));
							int val = tmp17;
							::__hxcpp_memory_set_byte(newData->buffer->b,(newData->byteOffset + index),val);
							val;
						}
						{
							int tmp16 = ::__hxcpp_memory_get_byte(data->buffer->b,(data->byteOffset + ((sourceIndex + (int)1))));
							Dynamic tmp17 = (int(tmp16) & int((int)255));
							int val = tmp17;
							::__hxcpp_memory_set_byte(newData->buffer->b,(newData->byteOffset + ((index + (int)1))),val);
							val;
						}
						{
							int tmp16 = ::__hxcpp_memory_get_byte(data->buffer->b,(data->byteOffset + ((sourceIndex + (int)2))));
							Dynamic tmp17 = (int(tmp16) & int((int)255));
							int val = tmp17;
							::__hxcpp_memory_set_byte(newData->buffer->b,(newData->byteOffset + ((index + (int)2))),val);
							val;
						}
						{
							int tmp16 = ::__hxcpp_memory_get_byte(data->buffer->b,(data->byteOffset + ((sourceIndex + (int)3))));
							Dynamic tmp17 = (int(tmp16) & int((int)255));
							int val = tmp17;
							::__hxcpp_memory_set_byte(newData->buffer->b,(newData->byteOffset + ((index + (int)3))),val);
							val;
						}
					}
				}
			}
		}
		buffer->data = newData;
		buffer->width = newWidth;
		buffer->height = newHeight;
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC3(ImageDataUtil_obj,resizeBuffer,(void))

Void ImageDataUtil_obj::setFormat( ::lime::graphics::Image image,int format){
{
		::lime::utils::ArrayBufferView tmp = image->buffer->data;
		::lime::utils::ArrayBufferView data = tmp;
		bool tmp1 = (data == null());
		if ((tmp1)){
			return null();
		}
		bool tmp2 = ::lime::_system::CFFI_obj::enabled;
		if ((tmp2)){
			::lime::_backend::native::NativeCFFI_obj::cffi_lime_image_data_util_set_format.call(hx::DynamicPtr(image),format);
		}
		else{
			int index;
			Dynamic a16;
			int tmp3 = data->length;
			Float tmp4 = (Float(tmp3) / Float((int)4));
			int tmp5 = ::Std_obj::_int(tmp4);
			int length = tmp5;
			int r1;
			int g1;
			int b1;
			int a1;
			int r2;
			int g2;
			int b2;
			int a2;
			Dynamic r;
			Dynamic g;
			Dynamic b;
			Dynamic a;
			{
				int tmp6 = image->get_format();
				int _g = tmp6;
				int tmp7 = _g;
				switch( (int)(tmp7)){
					case (int)0: {
						r1 = (int)0;
						g1 = (int)1;
						b1 = (int)2;
						a1 = (int)3;
					}
					;break;
					case (int)1: {
						r1 = (int)1;
						g1 = (int)2;
						b1 = (int)3;
						a1 = (int)0;
					}
					;break;
					case (int)2: {
						r1 = (int)2;
						g1 = (int)1;
						b1 = (int)0;
						a1 = (int)3;
					}
					;break;
				}
			}
			int tmp6 = format;
			switch( (int)(tmp6)){
				case (int)0: {
					r2 = (int)0;
					g2 = (int)1;
					b2 = (int)2;
					a2 = (int)3;
				}
				;break;
				case (int)1: {
					r2 = (int)1;
					g2 = (int)2;
					b2 = (int)3;
					a2 = (int)0;
				}
				;break;
				case (int)2: {
					r2 = (int)2;
					g2 = (int)1;
					b2 = (int)0;
					a2 = (int)3;
				}
				;break;
			}
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
					int tmp10 = (i * (int)4);
					index = tmp10;
					int tmp11 = ::__hxcpp_memory_get_byte(data->buffer->b,(data->byteOffset + ((index + r1))));
					Dynamic tmp12 = (int(tmp11) & int((int)255));
					r = tmp12;
					int tmp13 = ::__hxcpp_memory_get_byte(data->buffer->b,(data->byteOffset + ((index + g1))));
					Dynamic tmp14 = (int(tmp13) & int((int)255));
					g = tmp14;
					int tmp15 = ::__hxcpp_memory_get_byte(data->buffer->b,(data->byteOffset + ((index + b1))));
					Dynamic tmp16 = (int(tmp15) & int((int)255));
					b = tmp16;
					int tmp17 = ::__hxcpp_memory_get_byte(data->buffer->b,(data->byteOffset + ((index + a1))));
					Dynamic tmp18 = (int(tmp17) & int((int)255));
					a = tmp18;
					{
						int val = r;
						::__hxcpp_memory_set_byte(data->buffer->b,(data->byteOffset + ((index + r2))),val);
						val;
					}
					{
						int val = g;
						::__hxcpp_memory_set_byte(data->buffer->b,(data->byteOffset + ((index + g2))),val);
						val;
					}
					{
						int val = b;
						::__hxcpp_memory_set_byte(data->buffer->b,(data->byteOffset + ((index + b2))),val);
						val;
					}
					{
						int val = a;
						::__hxcpp_memory_set_byte(data->buffer->b,(data->byteOffset + ((index + a2))),val);
						val;
					}
				}
			}
		}
		image->buffer->format = format;
		image->dirty = true;
		(image->version)++;
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(ImageDataUtil_obj,setFormat,(void))

Void ImageDataUtil_obj::setPixel( ::lime::graphics::Image image,int x,int y,int color,int format){
{
		int pixel;
		int tmp = format;
		switch( (int)(tmp)){
			case (int)1: {
				int tmp1;
				{
					int argb = color;
					{
						int tmp2;
						{
							int rgba = (int)0;
							tmp2 = rgba;
						}
						int rgba = tmp2;
						{
							int tmp3 = (int(argb) >> int((int)16));
							int tmp4 = tmp3;
							int tmp5 = (int(tmp4) & int((int)255));
							int tmp6 = tmp5;
							int tmp7 = (int(tmp6) & int((int)255));
							int tmp8 = (int(tmp7) << int((int)24));
							int tmp9 = (int(argb) >> int((int)8));
							int tmp10 = tmp9;
							int tmp11 = (int(tmp10) & int((int)255));
							int tmp12 = tmp11;
							int tmp13 = (int(tmp12) & int((int)255));
							int tmp14 = (int(tmp13) << int((int)16));
							int tmp15 = (int(tmp8) | int(tmp14));
							int tmp16 = (int(argb) & int((int)255));
							int tmp17 = tmp16;
							int tmp18 = (int(tmp17) & int((int)255));
							int tmp19 = (int(tmp18) << int((int)8));
							int tmp20 = (int(tmp15) | int(tmp19));
							int tmp21 = (int(argb) >> int((int)24));
							int tmp22 = tmp21;
							int tmp23 = (int(tmp22) & int((int)255));
							int tmp24 = tmp23;
							int tmp25 = (int(tmp24) & int((int)255));
							int tmp26 = (int(tmp20) | int(tmp25));
							rgba = tmp26;
						}
						tmp1 = rgba;
					}
				}
				pixel = tmp1;
			}
			;break;
			case (int)2: {
				int tmp1;
				{
					int bgra = color;
					{
						int tmp2;
						{
							int rgba = (int)0;
							tmp2 = rgba;
						}
						int rgba = tmp2;
						{
							int tmp3 = (int(bgra) >> int((int)8));
							int tmp4 = tmp3;
							int tmp5 = (int(tmp4) & int((int)255));
							int tmp6 = tmp5;
							int tmp7 = (int(tmp6) & int((int)255));
							int tmp8 = (int(tmp7) << int((int)24));
							int tmp9 = (int(bgra) >> int((int)16));
							int tmp10 = tmp9;
							int tmp11 = (int(tmp10) & int((int)255));
							int tmp12 = tmp11;
							int tmp13 = (int(tmp12) & int((int)255));
							int tmp14 = (int(tmp13) << int((int)16));
							int tmp15 = (int(tmp8) | int(tmp14));
							int tmp16 = (int(bgra) >> int((int)24));
							int tmp17 = tmp16;
							int tmp18 = (int(tmp17) & int((int)255));
							int tmp19 = tmp18;
							int tmp20 = (int(tmp19) & int((int)255));
							int tmp21 = (int(tmp20) << int((int)8));
							int tmp22 = (int(tmp15) | int(tmp21));
							int tmp23 = (int(bgra) & int((int)255));
							int tmp24 = tmp23;
							int tmp25 = (int(tmp24) & int((int)255));
							int tmp26 = (int(tmp22) | int(tmp25));
							rgba = tmp26;
						}
						tmp1 = rgba;
					}
				}
				pixel = tmp1;
			}
			;break;
			default: {
				pixel = color;
			}
		}
		int tmp1;
		{
			int rgba = (int)0;
			tmp1 = rgba;
		}
		int source = tmp1;
		{
			::lime::utils::ArrayBufferView tmp2 = image->buffer->data;
			::lime::utils::ArrayBufferView data = tmp2;
			int tmp3 = (y + image->offsetY);
			int tmp4 = ((int)4 * tmp3);
			int tmp5 = image->buffer->width;
			int tmp6 = (tmp4 * tmp5);
			int tmp7 = (x + image->offsetX);
			int tmp8 = (tmp7 * (int)4);
			int tmp9 = (tmp6 + tmp8);
			int offset = tmp9;
			int tmp10 = image->buffer->format;
			switch( (int)(tmp10)){
				case (int)2: {
					int tmp11 = ::__hxcpp_memory_get_byte(data->buffer->b,(data->byteOffset + ((offset + (int)2))));
					Dynamic tmp12 = (int(tmp11) & int((int)255));
					int r = tmp12;
					int tmp13 = ::__hxcpp_memory_get_byte(data->buffer->b,(data->byteOffset + ((offset + (int)1))));
					Dynamic tmp14 = (int(tmp13) & int((int)255));
					int g = tmp14;
					int tmp15 = ::__hxcpp_memory_get_byte(data->buffer->b,(data->byteOffset + offset));
					Dynamic tmp16 = (int(tmp15) & int((int)255));
					int b = tmp16;
					int tmp17 = ::__hxcpp_memory_get_byte(data->buffer->b,(data->byteOffset + ((offset + (int)3))));
					Dynamic tmp18 = (int(tmp17) & int((int)255));
					int a = tmp18;
					int tmp19 = (int(r) & int((int)255));
					int tmp20 = (int(tmp19) << int((int)24));
					int tmp21 = (int(g) & int((int)255));
					int tmp22 = (int(tmp21) << int((int)16));
					int tmp23 = (int(tmp20) | int(tmp22));
					int tmp24 = (int(b) & int((int)255));
					int tmp25 = (int(tmp24) << int((int)8));
					int tmp26 = (int(tmp23) | int(tmp25));
					int tmp27 = (int(a) & int((int)255));
					int tmp28 = (int(tmp26) | int(tmp27));
					source = tmp28;
				}
				;break;
				case (int)0: {
					int tmp11 = ::__hxcpp_memory_get_byte(data->buffer->b,(data->byteOffset + offset));
					Dynamic tmp12 = (int(tmp11) & int((int)255));
					int r = tmp12;
					int tmp13 = ::__hxcpp_memory_get_byte(data->buffer->b,(data->byteOffset + ((offset + (int)1))));
					Dynamic tmp14 = (int(tmp13) & int((int)255));
					int g = tmp14;
					int tmp15 = ::__hxcpp_memory_get_byte(data->buffer->b,(data->byteOffset + ((offset + (int)2))));
					Dynamic tmp16 = (int(tmp15) & int((int)255));
					int b = tmp16;
					int tmp17 = ::__hxcpp_memory_get_byte(data->buffer->b,(data->byteOffset + ((offset + (int)3))));
					Dynamic tmp18 = (int(tmp17) & int((int)255));
					int a = tmp18;
					int tmp19 = (int(r) & int((int)255));
					int tmp20 = (int(tmp19) << int((int)24));
					int tmp21 = (int(g) & int((int)255));
					int tmp22 = (int(tmp21) << int((int)16));
					int tmp23 = (int(tmp20) | int(tmp22));
					int tmp24 = (int(b) & int((int)255));
					int tmp25 = (int(tmp24) << int((int)8));
					int tmp26 = (int(tmp23) | int(tmp25));
					int tmp27 = (int(a) & int((int)255));
					int tmp28 = (int(tmp26) | int(tmp27));
					source = tmp28;
				}
				;break;
				case (int)1: {
					int tmp11 = ::__hxcpp_memory_get_byte(data->buffer->b,(data->byteOffset + ((offset + (int)1))));
					Dynamic tmp12 = (int(tmp11) & int((int)255));
					int r = tmp12;
					int tmp13 = ::__hxcpp_memory_get_byte(data->buffer->b,(data->byteOffset + ((offset + (int)2))));
					Dynamic tmp14 = (int(tmp13) & int((int)255));
					int g = tmp14;
					int tmp15 = ::__hxcpp_memory_get_byte(data->buffer->b,(data->byteOffset + ((offset + (int)3))));
					Dynamic tmp16 = (int(tmp15) & int((int)255));
					int b = tmp16;
					int tmp17 = ::__hxcpp_memory_get_byte(data->buffer->b,(data->byteOffset + offset));
					Dynamic tmp18 = (int(tmp17) & int((int)255));
					int a = tmp18;
					int tmp19 = (int(r) & int((int)255));
					int tmp20 = (int(tmp19) << int((int)24));
					int tmp21 = (int(g) & int((int)255));
					int tmp22 = (int(tmp21) << int((int)16));
					int tmp23 = (int(tmp20) | int(tmp22));
					int tmp24 = (int(b) & int((int)255));
					int tmp25 = (int(tmp24) << int((int)8));
					int tmp26 = (int(tmp23) | int(tmp25));
					int tmp27 = (int(a) & int((int)255));
					int tmp28 = (int(tmp26) | int(tmp27));
					source = tmp28;
				}
				;break;
			}
			bool tmp11 = image->buffer->premultiplied;
			if ((tmp11)){
				int tmp12 = (int(source) & int((int)255));
				int tmp13 = tmp12;
				bool tmp14 = (tmp13 != (int)0);
				bool tmp15;
				if ((tmp14)){
					int tmp16 = (int(source) & int((int)255));
					int tmp17 = tmp16;
					int tmp18 = tmp17;
					tmp15 = (tmp18 != (int)255);
				}
				else{
					tmp15 = false;
				}
				if ((tmp15)){
					int tmp16 = (int(source) & int((int)255));
					int tmp17 = tmp16;
					Float tmp18 = (Float(((Float)255.0)) / Float(tmp17));
					::lime::math::color::_RGBA::RGBA_Impl__obj::unmult = tmp18;
					{
						Dynamic tmp19;
						{
							::lime::utils::ArrayBufferView tmp20 = ::lime::math::color::_RGBA::RGBA_Impl__obj::__clamp;
							::lime::utils::ArrayBufferView this1 = tmp20;
							int tmp21 = (int(source) >> int((int)24));
							int tmp22 = tmp21;
							int tmp23 = (int(tmp22) & int((int)255));
							int tmp24 = tmp23;
							Float tmp25 = ::lime::math::color::_RGBA::RGBA_Impl__obj::unmult;
							Float tmp26 = (tmp24 * tmp25);
							int tmp27 = ::Math_obj::round(tmp26);
							int idx = tmp27;
							int tmp28 = ::__hxcpp_memory_get_byte(this1->buffer->b,(this1->byteOffset + idx));
							tmp19 = (int(tmp28) & int((int)255));
						}
						int r = tmp19;
						Dynamic tmp20;
						{
							::lime::utils::ArrayBufferView tmp21 = ::lime::math::color::_RGBA::RGBA_Impl__obj::__clamp;
							::lime::utils::ArrayBufferView this1 = tmp21;
							int tmp22 = (int(source) >> int((int)16));
							int tmp23 = tmp22;
							int tmp24 = (int(tmp23) & int((int)255));
							int tmp25 = tmp24;
							Float tmp26 = ::lime::math::color::_RGBA::RGBA_Impl__obj::unmult;
							Float tmp27 = (tmp25 * tmp26);
							int tmp28 = ::Math_obj::round(tmp27);
							int idx = tmp28;
							int tmp29 = ::__hxcpp_memory_get_byte(this1->buffer->b,(this1->byteOffset + idx));
							tmp20 = (int(tmp29) & int((int)255));
						}
						int g = tmp20;
						Dynamic tmp21;
						{
							::lime::utils::ArrayBufferView tmp22 = ::lime::math::color::_RGBA::RGBA_Impl__obj::__clamp;
							::lime::utils::ArrayBufferView this1 = tmp22;
							int tmp23 = (int(source) >> int((int)8));
							int tmp24 = tmp23;
							int tmp25 = (int(tmp24) & int((int)255));
							int tmp26 = tmp25;
							Float tmp27 = ::lime::math::color::_RGBA::RGBA_Impl__obj::unmult;
							Float tmp28 = (tmp26 * tmp27);
							int tmp29 = ::Math_obj::round(tmp28);
							int idx = tmp29;
							int tmp30 = ::__hxcpp_memory_get_byte(this1->buffer->b,(this1->byteOffset + idx));
							tmp21 = (int(tmp30) & int((int)255));
						}
						int b = tmp21;
						int tmp22 = (int(r) & int((int)255));
						int tmp23 = (int(tmp22) << int((int)24));
						int tmp24 = (int(g) & int((int)255));
						int tmp25 = (int(tmp24) << int((int)16));
						int tmp26 = (int(tmp23) | int(tmp25));
						int tmp27 = (int(b) & int((int)255));
						int tmp28 = (int(tmp27) << int((int)8));
						int tmp29 = (int(tmp26) | int(tmp28));
						int tmp30 = (int(source) & int((int)255));
						int tmp31 = tmp30;
						int tmp32 = (int(tmp31) & int((int)255));
						int tmp33 = (int(tmp29) | int(tmp32));
						source = tmp33;
					}
				}
			}
		}
		{
			int tmp2 = (int(source) & int((int)255));
			int value = tmp2;
			{
				int tmp3 = (int(pixel) >> int((int)24));
				int tmp4 = tmp3;
				int tmp5 = (int(tmp4) & int((int)255));
				int tmp6 = tmp5;
				int tmp7 = (int(tmp6) & int((int)255));
				int tmp8 = (int(tmp7) << int((int)24));
				int tmp9 = (int(pixel) >> int((int)16));
				int tmp10 = tmp9;
				int tmp11 = (int(tmp10) & int((int)255));
				int tmp12 = tmp11;
				int tmp13 = (int(tmp12) & int((int)255));
				int tmp14 = (int(tmp13) << int((int)16));
				int tmp15 = (int(tmp8) | int(tmp14));
				int tmp16 = (int(pixel) >> int((int)8));
				int tmp17 = tmp16;
				int tmp18 = (int(tmp17) & int((int)255));
				int tmp19 = tmp18;
				int tmp20 = (int(tmp19) & int((int)255));
				int tmp21 = (int(tmp20) << int((int)8));
				int tmp22 = (int(tmp15) | int(tmp21));
				int tmp23 = (int(value) & int((int)255));
				int tmp24 = (int(tmp22) | int(tmp23));
				pixel = tmp24;
			}
			value;
		}
		{
			::lime::utils::ArrayBufferView tmp2 = image->buffer->data;
			::lime::utils::ArrayBufferView data = tmp2;
			int tmp3 = (y + image->offsetY);
			int tmp4 = ((int)4 * tmp3);
			int tmp5 = image->buffer->width;
			int tmp6 = (tmp4 * tmp5);
			int tmp7 = (x + image->offsetX);
			int tmp8 = (tmp7 * (int)4);
			int tmp9 = (tmp6 + tmp8);
			int offset = tmp9;
			bool tmp10 = image->buffer->premultiplied;
			if ((tmp10)){
				int tmp11 = (int(pixel) & int((int)255));
				int tmp12 = tmp11;
				bool tmp13 = (tmp12 == (int)0);
				if ((tmp13)){
					bool tmp14 = (pixel != (int)0);
					if ((tmp14)){
						pixel = (int)0;
					}
				}
				else{
					int tmp14 = (int(pixel) & int((int)255));
					int tmp15 = tmp14;
					bool tmp16 = (tmp15 != (int)255);
					if ((tmp16)){
						Dynamic tmp17;
						{
							::lime::utils::ArrayBufferView tmp18 = ::lime::math::color::_RGBA::RGBA_Impl__obj::__alpha16;
							::lime::utils::ArrayBufferView this1 = tmp18;
							tmp17 = ::__hxcpp_memory_get_ui32(this1->buffer->b,(this1->byteOffset + (((int(pixel) & int((int)255))) * (int)4)));
						}
						::lime::math::color::_RGBA::RGBA_Impl__obj::a16 = tmp17;
						{
							int tmp18 = (int(pixel) >> int((int)24));
							int tmp19 = tmp18;
							int tmp20 = (int(tmp19) & int((int)255));
							int tmp21 = tmp20;
							int tmp22 = ::lime::math::color::_RGBA::RGBA_Impl__obj::a16;
							int tmp23 = (tmp21 * tmp22);
							int tmp24 = (int(tmp23) >> int((int)16));
							int tmp25 = (int(tmp24) & int((int)255));
							int tmp26 = (int(tmp25) << int((int)24));
							int tmp27 = (int(pixel) >> int((int)16));
							int tmp28 = tmp27;
							int tmp29 = (int(tmp28) & int((int)255));
							int tmp30 = tmp29;
							int tmp31 = ::lime::math::color::_RGBA::RGBA_Impl__obj::a16;
							int tmp32 = (tmp30 * tmp31);
							int tmp33 = (int(tmp32) >> int((int)16));
							int tmp34 = (int(tmp33) & int((int)255));
							int tmp35 = (int(tmp34) << int((int)16));
							int tmp36 = (int(tmp26) | int(tmp35));
							int tmp37 = (int(pixel) >> int((int)8));
							int tmp38 = tmp37;
							int tmp39 = (int(tmp38) & int((int)255));
							int tmp40 = tmp39;
							int tmp41 = ::lime::math::color::_RGBA::RGBA_Impl__obj::a16;
							int tmp42 = (tmp40 * tmp41);
							int tmp43 = (int(tmp42) >> int((int)16));
							int tmp44 = (int(tmp43) & int((int)255));
							int tmp45 = (int(tmp44) << int((int)8));
							int tmp46 = (int(tmp36) | int(tmp45));
							int tmp47 = (int(pixel) & int((int)255));
							int tmp48 = tmp47;
							int tmp49 = (int(tmp48) & int((int)255));
							int tmp50 = (int(tmp46) | int(tmp49));
							pixel = tmp50;
						}
					}
				}
			}
			int tmp11 = image->buffer->format;
			switch( (int)(tmp11)){
				case (int)2: {
					{
						int tmp12 = (int(pixel) >> int((int)8));
						int tmp13 = tmp12;
						int tmp14 = (int(tmp13) & int((int)255));
						int val = tmp14;
						::__hxcpp_memory_set_byte(data->buffer->b,(data->byteOffset + offset),val);
						val;
					}
					{
						int tmp12 = (int(pixel) >> int((int)16));
						int tmp13 = tmp12;
						int tmp14 = (int(tmp13) & int((int)255));
						int val = tmp14;
						::__hxcpp_memory_set_byte(data->buffer->b,(data->byteOffset + ((offset + (int)1))),val);
						val;
					}
					{
						int tmp12 = (int(pixel) >> int((int)24));
						int tmp13 = tmp12;
						int tmp14 = (int(tmp13) & int((int)255));
						int val = tmp14;
						::__hxcpp_memory_set_byte(data->buffer->b,(data->byteOffset + ((offset + (int)2))),val);
						val;
					}
					{
						int tmp12 = (int(pixel) & int((int)255));
						int val = tmp12;
						::__hxcpp_memory_set_byte(data->buffer->b,(data->byteOffset + ((offset + (int)3))),val);
						val;
					}
				}
				;break;
				case (int)0: {
					{
						int tmp12 = (int(pixel) >> int((int)24));
						int tmp13 = tmp12;
						int tmp14 = (int(tmp13) & int((int)255));
						int val = tmp14;
						::__hxcpp_memory_set_byte(data->buffer->b,(data->byteOffset + offset),val);
						val;
					}
					{
						int tmp12 = (int(pixel) >> int((int)16));
						int tmp13 = tmp12;
						int tmp14 = (int(tmp13) & int((int)255));
						int val = tmp14;
						::__hxcpp_memory_set_byte(data->buffer->b,(data->byteOffset + ((offset + (int)1))),val);
						val;
					}
					{
						int tmp12 = (int(pixel) >> int((int)8));
						int tmp13 = tmp12;
						int tmp14 = (int(tmp13) & int((int)255));
						int val = tmp14;
						::__hxcpp_memory_set_byte(data->buffer->b,(data->byteOffset + ((offset + (int)2))),val);
						val;
					}
					{
						int tmp12 = (int(pixel) & int((int)255));
						int val = tmp12;
						::__hxcpp_memory_set_byte(data->buffer->b,(data->byteOffset + ((offset + (int)3))),val);
						val;
					}
				}
				;break;
				case (int)1: {
					{
						int tmp12 = (int(pixel) & int((int)255));
						int val = tmp12;
						::__hxcpp_memory_set_byte(data->buffer->b,(data->byteOffset + offset),val);
						val;
					}
					{
						int tmp12 = (int(pixel) >> int((int)24));
						int tmp13 = tmp12;
						int tmp14 = (int(tmp13) & int((int)255));
						int val = tmp14;
						::__hxcpp_memory_set_byte(data->buffer->b,(data->byteOffset + ((offset + (int)1))),val);
						val;
					}
					{
						int tmp12 = (int(pixel) >> int((int)16));
						int tmp13 = tmp12;
						int tmp14 = (int(tmp13) & int((int)255));
						int val = tmp14;
						::__hxcpp_memory_set_byte(data->buffer->b,(data->byteOffset + ((offset + (int)2))),val);
						val;
					}
					{
						int tmp12 = (int(pixel) >> int((int)8));
						int tmp13 = tmp12;
						int tmp14 = (int(tmp13) & int((int)255));
						int val = tmp14;
						::__hxcpp_memory_set_byte(data->buffer->b,(data->byteOffset + ((offset + (int)3))),val);
						val;
					}
				}
				;break;
			}
		}
		image->dirty = true;
		(image->version)++;
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC5(ImageDataUtil_obj,setPixel,(void))

Void ImageDataUtil_obj::setPixel32( ::lime::graphics::Image image,int x,int y,int color,int format){
{
		int pixel;
		int tmp = format;
		switch( (int)(tmp)){
			case (int)1: {
				int tmp1;
				{
					int argb = color;
					{
						int tmp2;
						{
							int rgba = (int)0;
							tmp2 = rgba;
						}
						int rgba = tmp2;
						{
							int tmp3 = (int(argb) >> int((int)16));
							int tmp4 = tmp3;
							int tmp5 = (int(tmp4) & int((int)255));
							int tmp6 = tmp5;
							int tmp7 = (int(tmp6) & int((int)255));
							int tmp8 = (int(tmp7) << int((int)24));
							int tmp9 = (int(argb) >> int((int)8));
							int tmp10 = tmp9;
							int tmp11 = (int(tmp10) & int((int)255));
							int tmp12 = tmp11;
							int tmp13 = (int(tmp12) & int((int)255));
							int tmp14 = (int(tmp13) << int((int)16));
							int tmp15 = (int(tmp8) | int(tmp14));
							int tmp16 = (int(argb) & int((int)255));
							int tmp17 = tmp16;
							int tmp18 = (int(tmp17) & int((int)255));
							int tmp19 = (int(tmp18) << int((int)8));
							int tmp20 = (int(tmp15) | int(tmp19));
							int tmp21 = (int(argb) >> int((int)24));
							int tmp22 = tmp21;
							int tmp23 = (int(tmp22) & int((int)255));
							int tmp24 = tmp23;
							int tmp25 = (int(tmp24) & int((int)255));
							int tmp26 = (int(tmp20) | int(tmp25));
							rgba = tmp26;
						}
						tmp1 = rgba;
					}
				}
				pixel = tmp1;
			}
			;break;
			case (int)2: {
				int tmp1;
				{
					int bgra = color;
					{
						int tmp2;
						{
							int rgba = (int)0;
							tmp2 = rgba;
						}
						int rgba = tmp2;
						{
							int tmp3 = (int(bgra) >> int((int)8));
							int tmp4 = tmp3;
							int tmp5 = (int(tmp4) & int((int)255));
							int tmp6 = tmp5;
							int tmp7 = (int(tmp6) & int((int)255));
							int tmp8 = (int(tmp7) << int((int)24));
							int tmp9 = (int(bgra) >> int((int)16));
							int tmp10 = tmp9;
							int tmp11 = (int(tmp10) & int((int)255));
							int tmp12 = tmp11;
							int tmp13 = (int(tmp12) & int((int)255));
							int tmp14 = (int(tmp13) << int((int)16));
							int tmp15 = (int(tmp8) | int(tmp14));
							int tmp16 = (int(bgra) >> int((int)24));
							int tmp17 = tmp16;
							int tmp18 = (int(tmp17) & int((int)255));
							int tmp19 = tmp18;
							int tmp20 = (int(tmp19) & int((int)255));
							int tmp21 = (int(tmp20) << int((int)8));
							int tmp22 = (int(tmp15) | int(tmp21));
							int tmp23 = (int(bgra) & int((int)255));
							int tmp24 = tmp23;
							int tmp25 = (int(tmp24) & int((int)255));
							int tmp26 = (int(tmp22) | int(tmp25));
							rgba = tmp26;
						}
						tmp1 = rgba;
					}
				}
				pixel = tmp1;
			}
			;break;
			default: {
				pixel = color;
			}
		}
		bool tmp1 = image->get_transparent();
		bool tmp2 = !(tmp1);
		if ((tmp2)){
			{
				int tmp3 = (int(pixel) >> int((int)24));
				int tmp4 = tmp3;
				int tmp5 = (int(tmp4) & int((int)255));
				int tmp6 = tmp5;
				int tmp7 = (int(tmp6) & int((int)255));
				int tmp8 = (int(tmp7) << int((int)24));
				int tmp9 = (int(pixel) >> int((int)16));
				int tmp10 = tmp9;
				int tmp11 = (int(tmp10) & int((int)255));
				int tmp12 = tmp11;
				int tmp13 = (int(tmp12) & int((int)255));
				int tmp14 = (int(tmp13) << int((int)16));
				int tmp15 = (int(tmp8) | int(tmp14));
				int tmp16 = (int(pixel) >> int((int)8));
				int tmp17 = tmp16;
				int tmp18 = (int(tmp17) & int((int)255));
				int tmp19 = tmp18;
				int tmp20 = (int(tmp19) & int((int)255));
				int tmp21 = (int(tmp20) << int((int)8));
				int tmp22 = (int(tmp15) | int(tmp21));
				int tmp23 = (int)255;
				int tmp24 = (int(tmp22) | int(tmp23));
				pixel = tmp24;
			}
			(int)255;
		}
		{
			::lime::utils::ArrayBufferView tmp3 = image->buffer->data;
			::lime::utils::ArrayBufferView data = tmp3;
			int tmp4 = (y + image->offsetY);
			int tmp5 = ((int)4 * tmp4);
			int tmp6 = image->buffer->width;
			int tmp7 = (tmp5 * tmp6);
			int tmp8 = (x + image->offsetX);
			int tmp9 = (tmp8 * (int)4);
			int tmp10 = (tmp7 + tmp9);
			int offset = tmp10;
			bool tmp11 = image->buffer->premultiplied;
			if ((tmp11)){
				int tmp12 = (int(pixel) & int((int)255));
				int tmp13 = tmp12;
				bool tmp14 = (tmp13 == (int)0);
				if ((tmp14)){
					bool tmp15 = (pixel != (int)0);
					if ((tmp15)){
						pixel = (int)0;
					}
				}
				else{
					int tmp15 = (int(pixel) & int((int)255));
					int tmp16 = tmp15;
					bool tmp17 = (tmp16 != (int)255);
					if ((tmp17)){
						Dynamic tmp18;
						{
							::lime::utils::ArrayBufferView tmp19 = ::lime::math::color::_RGBA::RGBA_Impl__obj::__alpha16;
							::lime::utils::ArrayBufferView this1 = tmp19;
							tmp18 = ::__hxcpp_memory_get_ui32(this1->buffer->b,(this1->byteOffset + (((int(pixel) & int((int)255))) * (int)4)));
						}
						::lime::math::color::_RGBA::RGBA_Impl__obj::a16 = tmp18;
						{
							int tmp19 = (int(pixel) >> int((int)24));
							int tmp20 = tmp19;
							int tmp21 = (int(tmp20) & int((int)255));
							int tmp22 = tmp21;
							int tmp23 = ::lime::math::color::_RGBA::RGBA_Impl__obj::a16;
							int tmp24 = (tmp22 * tmp23);
							int tmp25 = (int(tmp24) >> int((int)16));
							int tmp26 = (int(tmp25) & int((int)255));
							int tmp27 = (int(tmp26) << int((int)24));
							int tmp28 = (int(pixel) >> int((int)16));
							int tmp29 = tmp28;
							int tmp30 = (int(tmp29) & int((int)255));
							int tmp31 = tmp30;
							int tmp32 = ::lime::math::color::_RGBA::RGBA_Impl__obj::a16;
							int tmp33 = (tmp31 * tmp32);
							int tmp34 = (int(tmp33) >> int((int)16));
							int tmp35 = (int(tmp34) & int((int)255));
							int tmp36 = (int(tmp35) << int((int)16));
							int tmp37 = (int(tmp27) | int(tmp36));
							int tmp38 = (int(pixel) >> int((int)8));
							int tmp39 = tmp38;
							int tmp40 = (int(tmp39) & int((int)255));
							int tmp41 = tmp40;
							int tmp42 = ::lime::math::color::_RGBA::RGBA_Impl__obj::a16;
							int tmp43 = (tmp41 * tmp42);
							int tmp44 = (int(tmp43) >> int((int)16));
							int tmp45 = (int(tmp44) & int((int)255));
							int tmp46 = (int(tmp45) << int((int)8));
							int tmp47 = (int(tmp37) | int(tmp46));
							int tmp48 = (int(pixel) & int((int)255));
							int tmp49 = tmp48;
							int tmp50 = (int(tmp49) & int((int)255));
							int tmp51 = (int(tmp47) | int(tmp50));
							pixel = tmp51;
						}
					}
				}
			}
			int tmp12 = image->buffer->format;
			switch( (int)(tmp12)){
				case (int)2: {
					{
						int tmp13 = (int(pixel) >> int((int)8));
						int tmp14 = tmp13;
						int tmp15 = (int(tmp14) & int((int)255));
						int val = tmp15;
						::__hxcpp_memory_set_byte(data->buffer->b,(data->byteOffset + offset),val);
						val;
					}
					{
						int tmp13 = (int(pixel) >> int((int)16));
						int tmp14 = tmp13;
						int tmp15 = (int(tmp14) & int((int)255));
						int val = tmp15;
						::__hxcpp_memory_set_byte(data->buffer->b,(data->byteOffset + ((offset + (int)1))),val);
						val;
					}
					{
						int tmp13 = (int(pixel) >> int((int)24));
						int tmp14 = tmp13;
						int tmp15 = (int(tmp14) & int((int)255));
						int val = tmp15;
						::__hxcpp_memory_set_byte(data->buffer->b,(data->byteOffset + ((offset + (int)2))),val);
						val;
					}
					{
						int tmp13 = (int(pixel) & int((int)255));
						int val = tmp13;
						::__hxcpp_memory_set_byte(data->buffer->b,(data->byteOffset + ((offset + (int)3))),val);
						val;
					}
				}
				;break;
				case (int)0: {
					{
						int tmp13 = (int(pixel) >> int((int)24));
						int tmp14 = tmp13;
						int tmp15 = (int(tmp14) & int((int)255));
						int val = tmp15;
						::__hxcpp_memory_set_byte(data->buffer->b,(data->byteOffset + offset),val);
						val;
					}
					{
						int tmp13 = (int(pixel) >> int((int)16));
						int tmp14 = tmp13;
						int tmp15 = (int(tmp14) & int((int)255));
						int val = tmp15;
						::__hxcpp_memory_set_byte(data->buffer->b,(data->byteOffset + ((offset + (int)1))),val);
						val;
					}
					{
						int tmp13 = (int(pixel) >> int((int)8));
						int tmp14 = tmp13;
						int tmp15 = (int(tmp14) & int((int)255));
						int val = tmp15;
						::__hxcpp_memory_set_byte(data->buffer->b,(data->byteOffset + ((offset + (int)2))),val);
						val;
					}
					{
						int tmp13 = (int(pixel) & int((int)255));
						int val = tmp13;
						::__hxcpp_memory_set_byte(data->buffer->b,(data->byteOffset + ((offset + (int)3))),val);
						val;
					}
				}
				;break;
				case (int)1: {
					{
						int tmp13 = (int(pixel) & int((int)255));
						int val = tmp13;
						::__hxcpp_memory_set_byte(data->buffer->b,(data->byteOffset + offset),val);
						val;
					}
					{
						int tmp13 = (int(pixel) >> int((int)24));
						int tmp14 = tmp13;
						int tmp15 = (int(tmp14) & int((int)255));
						int val = tmp15;
						::__hxcpp_memory_set_byte(data->buffer->b,(data->byteOffset + ((offset + (int)1))),val);
						val;
					}
					{
						int tmp13 = (int(pixel) >> int((int)16));
						int tmp14 = tmp13;
						int tmp15 = (int(tmp14) & int((int)255));
						int val = tmp15;
						::__hxcpp_memory_set_byte(data->buffer->b,(data->byteOffset + ((offset + (int)2))),val);
						val;
					}
					{
						int tmp13 = (int(pixel) >> int((int)8));
						int tmp14 = tmp13;
						int tmp15 = (int(tmp14) & int((int)255));
						int val = tmp15;
						::__hxcpp_memory_set_byte(data->buffer->b,(data->byteOffset + ((offset + (int)3))),val);
						val;
					}
				}
				;break;
			}
		}
		image->dirty = true;
		(image->version)++;
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC5(ImageDataUtil_obj,setPixel32,(void))

Void ImageDataUtil_obj::setPixels( ::lime::graphics::Image image,::lime::math::Rectangle rect,::haxe::io::Bytes bytes,int format){
{
		::lime::utils::ArrayBufferView tmp = image->buffer->data;
		bool tmp1 = (tmp == null());
		if ((tmp1)){
			return null();
		}
		bool tmp2 = ::lime::_system::CFFI_obj::enabled;
		if ((tmp2)){
			::lime::_backend::native::NativeCFFI_obj::cffi_lime_image_data_util_set_pixels.call(hx::DynamicPtr(image),hx::DynamicPtr(rect),hx::DynamicPtr(bytes),format);
		}
		else{
			::lime::utils::ArrayBufferView tmp3 = image->buffer->data;
			::lime::utils::ArrayBufferView data = tmp3;
			int tmp4 = image->buffer->format;
			int sourceFormat = tmp4;
			bool tmp5 = image->buffer->premultiplied;
			bool premultiplied = tmp5;
			::lime::graphics::utils::_ImageDataUtil::ImageDataView tmp6 = ::lime::graphics::utils::_ImageDataUtil::ImageDataView_obj::__new(image,rect);
			::lime::graphics::utils::_ImageDataUtil::ImageDataView dataView = tmp6;
			int row;
			int color;
			int pixel;
			bool tmp7 = image->get_transparent();
			bool transparent = tmp7;
			int dataPosition = (int)0;
			{
				int _g1 = (int)0;
				int _g = dataView->height;
				while((true)){
					bool tmp8 = (_g1 < _g);
					bool tmp9 = !(tmp8);
					if ((tmp9)){
						break;
					}
					int tmp10 = (_g1)++;
					int y = tmp10;
					int tmp11 = dataView->offset;
					int tmp12 = (dataView->stride * y);
					int tmp13 = (tmp11 + tmp12);
					row = tmp13;
					{
						int _g3 = (int)0;
						int _g2 = dataView->width;
						while((true)){
							bool tmp14 = (_g3 < _g2);
							bool tmp15 = !(tmp14);
							if ((tmp15)){
								break;
							}
							int tmp16 = (_g3)++;
							int x = tmp16;
							int tmp17 = (dataPosition + (int)3);
							int tmp18 = bytes->b->__get(tmp17);
							int tmp19 = (dataPosition + (int)2);
							int tmp20 = bytes->b->__get(tmp19);
							int tmp21 = (int(tmp20) << int((int)8));
							int tmp22 = (int(tmp18) | int(tmp21));
							int tmp23 = (dataPosition + (int)1);
							int tmp24 = bytes->b->__get(tmp23);
							int tmp25 = (int(tmp24) << int((int)16));
							int tmp26 = (int(tmp22) | int(tmp25));
							int tmp27 = bytes->b->__get(dataPosition);
							int tmp28 = (int(tmp27) << int((int)24));
							int tmp29 = (int(tmp26) | int(tmp28));
							color = tmp29;
							hx::AddEq(dataPosition,(int)4);
							int tmp30 = format;
							switch( (int)(tmp30)){
								case (int)1: {
									int tmp31;
									{
										int argb = color;
										{
											int tmp32;
											{
												int rgba = (int)0;
												tmp32 = rgba;
											}
											int rgba = tmp32;
											{
												int tmp33 = (int(argb) >> int((int)16));
												int tmp34 = tmp33;
												int tmp35 = (int(tmp34) & int((int)255));
												int tmp36 = tmp35;
												int tmp37 = (int(tmp36) & int((int)255));
												int tmp38 = (int(tmp37) << int((int)24));
												int tmp39 = (int(argb) >> int((int)8));
												int tmp40 = tmp39;
												int tmp41 = (int(tmp40) & int((int)255));
												int tmp42 = tmp41;
												int tmp43 = (int(tmp42) & int((int)255));
												int tmp44 = (int(tmp43) << int((int)16));
												int tmp45 = (int(tmp38) | int(tmp44));
												int tmp46 = (int(argb) & int((int)255));
												int tmp47 = tmp46;
												int tmp48 = (int(tmp47) & int((int)255));
												int tmp49 = (int(tmp48) << int((int)8));
												int tmp50 = (int(tmp45) | int(tmp49));
												int tmp51 = (int(argb) >> int((int)24));
												int tmp52 = tmp51;
												int tmp53 = (int(tmp52) & int((int)255));
												int tmp54 = tmp53;
												int tmp55 = (int(tmp54) & int((int)255));
												int tmp56 = (int(tmp50) | int(tmp55));
												rgba = tmp56;
											}
											tmp31 = rgba;
										}
									}
									pixel = tmp31;
								}
								;break;
								case (int)2: {
									int tmp31;
									{
										int bgra = color;
										{
											int tmp32;
											{
												int rgba = (int)0;
												tmp32 = rgba;
											}
											int rgba = tmp32;
											{
												int tmp33 = (int(bgra) >> int((int)8));
												int tmp34 = tmp33;
												int tmp35 = (int(tmp34) & int((int)255));
												int tmp36 = tmp35;
												int tmp37 = (int(tmp36) & int((int)255));
												int tmp38 = (int(tmp37) << int((int)24));
												int tmp39 = (int(bgra) >> int((int)16));
												int tmp40 = tmp39;
												int tmp41 = (int(tmp40) & int((int)255));
												int tmp42 = tmp41;
												int tmp43 = (int(tmp42) & int((int)255));
												int tmp44 = (int(tmp43) << int((int)16));
												int tmp45 = (int(tmp38) | int(tmp44));
												int tmp46 = (int(bgra) >> int((int)24));
												int tmp47 = tmp46;
												int tmp48 = (int(tmp47) & int((int)255));
												int tmp49 = tmp48;
												int tmp50 = (int(tmp49) & int((int)255));
												int tmp51 = (int(tmp50) << int((int)8));
												int tmp52 = (int(tmp45) | int(tmp51));
												int tmp53 = (int(bgra) & int((int)255));
												int tmp54 = tmp53;
												int tmp55 = (int(tmp54) & int((int)255));
												int tmp56 = (int(tmp52) | int(tmp55));
												rgba = tmp56;
											}
											tmp31 = rgba;
										}
									}
									pixel = tmp31;
								}
								;break;
								default: {
									pixel = color;
								}
							}
							bool tmp31 = transparent;
							bool tmp32 = !(tmp31);
							if ((tmp32)){
								{
									int tmp33 = (int(pixel) >> int((int)24));
									int tmp34 = tmp33;
									int tmp35 = (int(tmp34) & int((int)255));
									int tmp36 = tmp35;
									int tmp37 = (int(tmp36) & int((int)255));
									int tmp38 = (int(tmp37) << int((int)24));
									int tmp39 = (int(pixel) >> int((int)16));
									int tmp40 = tmp39;
									int tmp41 = (int(tmp40) & int((int)255));
									int tmp42 = tmp41;
									int tmp43 = (int(tmp42) & int((int)255));
									int tmp44 = (int(tmp43) << int((int)16));
									int tmp45 = (int(tmp38) | int(tmp44));
									int tmp46 = (int(pixel) >> int((int)8));
									int tmp47 = tmp46;
									int tmp48 = (int(tmp47) & int((int)255));
									int tmp49 = tmp48;
									int tmp50 = (int(tmp49) & int((int)255));
									int tmp51 = (int(tmp50) << int((int)8));
									int tmp52 = (int(tmp45) | int(tmp51));
									int tmp53 = (int)255;
									int tmp54 = (int(tmp52) | int(tmp53));
									pixel = tmp54;
								}
								(int)255;
							}
							{
								int tmp33 = row;
								int tmp34 = (x * (int)4);
								int tmp35 = (tmp33 + tmp34);
								int offset = tmp35;
								bool tmp36 = premultiplied;
								if ((tmp36)){
									int tmp37 = (int(pixel) & int((int)255));
									int tmp38 = tmp37;
									bool tmp39 = (tmp38 == (int)0);
									if ((tmp39)){
										bool tmp40 = (pixel != (int)0);
										if ((tmp40)){
											pixel = (int)0;
										}
									}
									else{
										int tmp40 = (int(pixel) & int((int)255));
										int tmp41 = tmp40;
										bool tmp42 = (tmp41 != (int)255);
										if ((tmp42)){
											Dynamic tmp43;
											{
												::lime::utils::ArrayBufferView tmp44 = ::lime::math::color::_RGBA::RGBA_Impl__obj::__alpha16;
												::lime::utils::ArrayBufferView this1 = tmp44;
												tmp43 = ::__hxcpp_memory_get_ui32(this1->buffer->b,(this1->byteOffset + (((int(pixel) & int((int)255))) * (int)4)));
											}
											::lime::math::color::_RGBA::RGBA_Impl__obj::a16 = tmp43;
											{
												int tmp44 = (int(pixel) >> int((int)24));
												int tmp45 = tmp44;
												int tmp46 = (int(tmp45) & int((int)255));
												int tmp47 = tmp46;
												int tmp48 = ::lime::math::color::_RGBA::RGBA_Impl__obj::a16;
												int tmp49 = (tmp47 * tmp48);
												int tmp50 = (int(tmp49) >> int((int)16));
												int tmp51 = (int(tmp50) & int((int)255));
												int tmp52 = (int(tmp51) << int((int)24));
												int tmp53 = (int(pixel) >> int((int)16));
												int tmp54 = tmp53;
												int tmp55 = (int(tmp54) & int((int)255));
												int tmp56 = tmp55;
												int tmp57 = ::lime::math::color::_RGBA::RGBA_Impl__obj::a16;
												int tmp58 = (tmp56 * tmp57);
												int tmp59 = (int(tmp58) >> int((int)16));
												int tmp60 = (int(tmp59) & int((int)255));
												int tmp61 = (int(tmp60) << int((int)16));
												int tmp62 = (int(tmp52) | int(tmp61));
												int tmp63 = (int(pixel) >> int((int)8));
												int tmp64 = tmp63;
												int tmp65 = (int(tmp64) & int((int)255));
												int tmp66 = tmp65;
												int tmp67 = ::lime::math::color::_RGBA::RGBA_Impl__obj::a16;
												int tmp68 = (tmp66 * tmp67);
												int tmp69 = (int(tmp68) >> int((int)16));
												int tmp70 = (int(tmp69) & int((int)255));
												int tmp71 = (int(tmp70) << int((int)8));
												int tmp72 = (int(tmp62) | int(tmp71));
												int tmp73 = (int(pixel) & int((int)255));
												int tmp74 = tmp73;
												int tmp75 = (int(tmp74) & int((int)255));
												int tmp76 = (int(tmp72) | int(tmp75));
												pixel = tmp76;
											}
										}
									}
								}
								int tmp37 = sourceFormat;
								switch( (int)(tmp37)){
									case (int)2: {
										{
											int tmp38 = (int(pixel) >> int((int)8));
											int tmp39 = tmp38;
											int tmp40 = (int(tmp39) & int((int)255));
											int val = tmp40;
											::__hxcpp_memory_set_byte(data->buffer->b,(data->byteOffset + offset),val);
											val;
										}
										{
											int tmp38 = (int(pixel) >> int((int)16));
											int tmp39 = tmp38;
											int tmp40 = (int(tmp39) & int((int)255));
											int val = tmp40;
											::__hxcpp_memory_set_byte(data->buffer->b,(data->byteOffset + ((offset + (int)1))),val);
											val;
										}
										{
											int tmp38 = (int(pixel) >> int((int)24));
											int tmp39 = tmp38;
											int tmp40 = (int(tmp39) & int((int)255));
											int val = tmp40;
											::__hxcpp_memory_set_byte(data->buffer->b,(data->byteOffset + ((offset + (int)2))),val);
											val;
										}
										{
											int tmp38 = (int(pixel) & int((int)255));
											int val = tmp38;
											::__hxcpp_memory_set_byte(data->buffer->b,(data->byteOffset + ((offset + (int)3))),val);
											val;
										}
									}
									;break;
									case (int)0: {
										{
											int tmp38 = (int(pixel) >> int((int)24));
											int tmp39 = tmp38;
											int tmp40 = (int(tmp39) & int((int)255));
											int val = tmp40;
											::__hxcpp_memory_set_byte(data->buffer->b,(data->byteOffset + offset),val);
											val;
										}
										{
											int tmp38 = (int(pixel) >> int((int)16));
											int tmp39 = tmp38;
											int tmp40 = (int(tmp39) & int((int)255));
											int val = tmp40;
											::__hxcpp_memory_set_byte(data->buffer->b,(data->byteOffset + ((offset + (int)1))),val);
											val;
										}
										{
											int tmp38 = (int(pixel) >> int((int)8));
											int tmp39 = tmp38;
											int tmp40 = (int(tmp39) & int((int)255));
											int val = tmp40;
											::__hxcpp_memory_set_byte(data->buffer->b,(data->byteOffset + ((offset + (int)2))),val);
											val;
										}
										{
											int tmp38 = (int(pixel) & int((int)255));
											int val = tmp38;
											::__hxcpp_memory_set_byte(data->buffer->b,(data->byteOffset + ((offset + (int)3))),val);
											val;
										}
									}
									;break;
									case (int)1: {
										{
											int tmp38 = (int(pixel) & int((int)255));
											int val = tmp38;
											::__hxcpp_memory_set_byte(data->buffer->b,(data->byteOffset + offset),val);
											val;
										}
										{
											int tmp38 = (int(pixel) >> int((int)24));
											int tmp39 = tmp38;
											int tmp40 = (int(tmp39) & int((int)255));
											int val = tmp40;
											::__hxcpp_memory_set_byte(data->buffer->b,(data->byteOffset + ((offset + (int)1))),val);
											val;
										}
										{
											int tmp38 = (int(pixel) >> int((int)16));
											int tmp39 = tmp38;
											int tmp40 = (int(tmp39) & int((int)255));
											int val = tmp40;
											::__hxcpp_memory_set_byte(data->buffer->b,(data->byteOffset + ((offset + (int)2))),val);
											val;
										}
										{
											int tmp38 = (int(pixel) >> int((int)8));
											int tmp39 = tmp38;
											int tmp40 = (int(tmp39) & int((int)255));
											int val = tmp40;
											::__hxcpp_memory_set_byte(data->buffer->b,(data->byteOffset + ((offset + (int)3))),val);
											val;
										}
									}
									;break;
								}
							}
						}
					}
				}
			}
		}
		image->dirty = true;
		(image->version)++;
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC4(ImageDataUtil_obj,setPixels,(void))

int ImageDataUtil_obj::threshold( ::lime::graphics::Image image,::lime::graphics::Image sourceImage,::lime::math::Rectangle sourceRect,::lime::math::Vector2 destPoint,::String operation,int threshold,int color,int mask,bool copySource,int format){
	int _color;
	int _mask;
	int _threshold;
	int tmp = format;
	switch( (int)(tmp)){
		case (int)1: {
			int tmp1;
			{
				int argb = color;
				{
					int tmp2;
					{
						int rgba = (int)0;
						tmp2 = rgba;
					}
					int rgba = tmp2;
					{
						int tmp3 = (int(argb) >> int((int)16));
						int tmp4 = tmp3;
						int tmp5 = (int(tmp4) & int((int)255));
						int tmp6 = tmp5;
						int tmp7 = (int(tmp6) & int((int)255));
						int tmp8 = (int(tmp7) << int((int)24));
						int tmp9 = (int(argb) >> int((int)8));
						int tmp10 = tmp9;
						int tmp11 = (int(tmp10) & int((int)255));
						int tmp12 = tmp11;
						int tmp13 = (int(tmp12) & int((int)255));
						int tmp14 = (int(tmp13) << int((int)16));
						int tmp15 = (int(tmp8) | int(tmp14));
						int tmp16 = (int(argb) & int((int)255));
						int tmp17 = tmp16;
						int tmp18 = (int(tmp17) & int((int)255));
						int tmp19 = (int(tmp18) << int((int)8));
						int tmp20 = (int(tmp15) | int(tmp19));
						int tmp21 = (int(argb) >> int((int)24));
						int tmp22 = tmp21;
						int tmp23 = (int(tmp22) & int((int)255));
						int tmp24 = tmp23;
						int tmp25 = (int(tmp24) & int((int)255));
						int tmp26 = (int(tmp20) | int(tmp25));
						rgba = tmp26;
					}
					tmp1 = rgba;
				}
			}
			_color = tmp1;
			int tmp2;
			{
				int argb = mask;
				{
					int tmp3;
					{
						int rgba = (int)0;
						tmp3 = rgba;
					}
					int rgba = tmp3;
					{
						int tmp4 = (int(argb) >> int((int)16));
						int tmp5 = tmp4;
						int tmp6 = (int(tmp5) & int((int)255));
						int tmp7 = tmp6;
						int tmp8 = (int(tmp7) & int((int)255));
						int tmp9 = (int(tmp8) << int((int)24));
						int tmp10 = (int(argb) >> int((int)8));
						int tmp11 = tmp10;
						int tmp12 = (int(tmp11) & int((int)255));
						int tmp13 = tmp12;
						int tmp14 = (int(tmp13) & int((int)255));
						int tmp15 = (int(tmp14) << int((int)16));
						int tmp16 = (int(tmp9) | int(tmp15));
						int tmp17 = (int(argb) & int((int)255));
						int tmp18 = tmp17;
						int tmp19 = (int(tmp18) & int((int)255));
						int tmp20 = (int(tmp19) << int((int)8));
						int tmp21 = (int(tmp16) | int(tmp20));
						int tmp22 = (int(argb) >> int((int)24));
						int tmp23 = tmp22;
						int tmp24 = (int(tmp23) & int((int)255));
						int tmp25 = tmp24;
						int tmp26 = (int(tmp25) & int((int)255));
						int tmp27 = (int(tmp21) | int(tmp26));
						rgba = tmp27;
					}
					tmp2 = rgba;
				}
			}
			_mask = tmp2;
			int tmp3;
			{
				int argb = threshold;
				{
					int tmp4;
					{
						int rgba = (int)0;
						tmp4 = rgba;
					}
					int rgba = tmp4;
					{
						int tmp5 = (int(argb) >> int((int)16));
						int tmp6 = tmp5;
						int tmp7 = (int(tmp6) & int((int)255));
						int tmp8 = tmp7;
						int tmp9 = (int(tmp8) & int((int)255));
						int tmp10 = (int(tmp9) << int((int)24));
						int tmp11 = (int(argb) >> int((int)8));
						int tmp12 = tmp11;
						int tmp13 = (int(tmp12) & int((int)255));
						int tmp14 = tmp13;
						int tmp15 = (int(tmp14) & int((int)255));
						int tmp16 = (int(tmp15) << int((int)16));
						int tmp17 = (int(tmp10) | int(tmp16));
						int tmp18 = (int(argb) & int((int)255));
						int tmp19 = tmp18;
						int tmp20 = (int(tmp19) & int((int)255));
						int tmp21 = (int(tmp20) << int((int)8));
						int tmp22 = (int(tmp17) | int(tmp21));
						int tmp23 = (int(argb) >> int((int)24));
						int tmp24 = tmp23;
						int tmp25 = (int(tmp24) & int((int)255));
						int tmp26 = tmp25;
						int tmp27 = (int(tmp26) & int((int)255));
						int tmp28 = (int(tmp22) | int(tmp27));
						rgba = tmp28;
					}
					tmp3 = rgba;
				}
			}
			_threshold = tmp3;
		}
		;break;
		case (int)2: {
			int tmp1;
			{
				int bgra = color;
				{
					int tmp2;
					{
						int rgba = (int)0;
						tmp2 = rgba;
					}
					int rgba = tmp2;
					{
						int tmp3 = (int(bgra) >> int((int)8));
						int tmp4 = tmp3;
						int tmp5 = (int(tmp4) & int((int)255));
						int tmp6 = tmp5;
						int tmp7 = (int(tmp6) & int((int)255));
						int tmp8 = (int(tmp7) << int((int)24));
						int tmp9 = (int(bgra) >> int((int)16));
						int tmp10 = tmp9;
						int tmp11 = (int(tmp10) & int((int)255));
						int tmp12 = tmp11;
						int tmp13 = (int(tmp12) & int((int)255));
						int tmp14 = (int(tmp13) << int((int)16));
						int tmp15 = (int(tmp8) | int(tmp14));
						int tmp16 = (int(bgra) >> int((int)24));
						int tmp17 = tmp16;
						int tmp18 = (int(tmp17) & int((int)255));
						int tmp19 = tmp18;
						int tmp20 = (int(tmp19) & int((int)255));
						int tmp21 = (int(tmp20) << int((int)8));
						int tmp22 = (int(tmp15) | int(tmp21));
						int tmp23 = (int(bgra) & int((int)255));
						int tmp24 = tmp23;
						int tmp25 = (int(tmp24) & int((int)255));
						int tmp26 = (int(tmp22) | int(tmp25));
						rgba = tmp26;
					}
					tmp1 = rgba;
				}
			}
			_color = tmp1;
			int tmp2;
			{
				int bgra = mask;
				{
					int tmp3;
					{
						int rgba = (int)0;
						tmp3 = rgba;
					}
					int rgba = tmp3;
					{
						int tmp4 = (int(bgra) >> int((int)8));
						int tmp5 = tmp4;
						int tmp6 = (int(tmp5) & int((int)255));
						int tmp7 = tmp6;
						int tmp8 = (int(tmp7) & int((int)255));
						int tmp9 = (int(tmp8) << int((int)24));
						int tmp10 = (int(bgra) >> int((int)16));
						int tmp11 = tmp10;
						int tmp12 = (int(tmp11) & int((int)255));
						int tmp13 = tmp12;
						int tmp14 = (int(tmp13) & int((int)255));
						int tmp15 = (int(tmp14) << int((int)16));
						int tmp16 = (int(tmp9) | int(tmp15));
						int tmp17 = (int(bgra) >> int((int)24));
						int tmp18 = tmp17;
						int tmp19 = (int(tmp18) & int((int)255));
						int tmp20 = tmp19;
						int tmp21 = (int(tmp20) & int((int)255));
						int tmp22 = (int(tmp21) << int((int)8));
						int tmp23 = (int(tmp16) | int(tmp22));
						int tmp24 = (int(bgra) & int((int)255));
						int tmp25 = tmp24;
						int tmp26 = (int(tmp25) & int((int)255));
						int tmp27 = (int(tmp23) | int(tmp26));
						rgba = tmp27;
					}
					tmp2 = rgba;
				}
			}
			_mask = tmp2;
			int tmp3;
			{
				int bgra = threshold;
				{
					int tmp4;
					{
						int rgba = (int)0;
						tmp4 = rgba;
					}
					int rgba = tmp4;
					{
						int tmp5 = (int(bgra) >> int((int)8));
						int tmp6 = tmp5;
						int tmp7 = (int(tmp6) & int((int)255));
						int tmp8 = tmp7;
						int tmp9 = (int(tmp8) & int((int)255));
						int tmp10 = (int(tmp9) << int((int)24));
						int tmp11 = (int(bgra) >> int((int)16));
						int tmp12 = tmp11;
						int tmp13 = (int(tmp12) & int((int)255));
						int tmp14 = tmp13;
						int tmp15 = (int(tmp14) & int((int)255));
						int tmp16 = (int(tmp15) << int((int)16));
						int tmp17 = (int(tmp10) | int(tmp16));
						int tmp18 = (int(bgra) >> int((int)24));
						int tmp19 = tmp18;
						int tmp20 = (int(tmp19) & int((int)255));
						int tmp21 = tmp20;
						int tmp22 = (int(tmp21) & int((int)255));
						int tmp23 = (int(tmp22) << int((int)8));
						int tmp24 = (int(tmp17) | int(tmp23));
						int tmp25 = (int(bgra) & int((int)255));
						int tmp26 = tmp25;
						int tmp27 = (int(tmp26) & int((int)255));
						int tmp28 = (int(tmp24) | int(tmp27));
						rgba = tmp28;
					}
					tmp3 = rgba;
				}
			}
			_threshold = tmp3;
		}
		;break;
		default: {
			_color = color;
			_mask = mask;
			_threshold = threshold;
		}
	}
	::String tmp1 = operation;
	int tmp2;
	::String _switch_1 = (tmp1);
	if (  ( _switch_1==HX_HCSTRING("!=","\xfc","\x1c","\x00","\x00"))){
		tmp2 = (int)0;
	}
	else if (  ( _switch_1==HX_HCSTRING("==","\x60","\x35","\x00","\x00"))){
		tmp2 = (int)1;
	}
	else if (  ( _switch_1==HX_HCSTRING("<","\x3c","\x00","\x00","\x00"))){
		tmp2 = (int)2;
	}
	else if (  ( _switch_1==HX_HCSTRING("<=","\x81","\x34","\x00","\x00"))){
		tmp2 = (int)3;
	}
	else if (  ( _switch_1==HX_HCSTRING(">","\x3e","\x00","\x00","\x00"))){
		tmp2 = (int)4;
	}
	else if (  ( _switch_1==HX_HCSTRING(">=","\x3f","\x36","\x00","\x00"))){
		tmp2 = (int)5;
	}
	else  {
		tmp2 = (int)-1;
	}
;
;
	int _operation = tmp2;
	bool tmp3 = (_operation == (int)-1);
	if ((tmp3)){
		return (int)0;
	}
	::lime::utils::ArrayBufferView tmp4 = sourceImage->buffer->data;
	::lime::utils::ArrayBufferView srcData = tmp4;
	::lime::utils::ArrayBufferView tmp5 = image->buffer->data;
	::lime::utils::ArrayBufferView destData = tmp5;
	bool tmp6 = (srcData == null());
	bool tmp7 = !(tmp6);
	bool tmp8;
	if ((tmp7)){
		tmp8 = (destData == null());
	}
	else{
		tmp8 = true;
	}
	if ((tmp8)){
		return (int)0;
	}
	int hits = (int)0;
	bool tmp9 = ::lime::_system::CFFI_obj::enabled;
	if ((tmp9)){
		hits = ::lime::_backend::native::NativeCFFI_obj::cffi_lime_image_data_util_threshold.call(hx::DynamicPtr(image),hx::DynamicPtr(sourceImage),hx::DynamicPtr(sourceRect),hx::DynamicPtr(destPoint),_operation,(int((int(_threshold) >> int((int)16))) & int((int)65535)),(int(_threshold) & int((int)65535)),(int((int(_color) >> int((int)16))) & int((int)65535)),(int(_color) & int((int)65535)),(int((int(_mask) >> int((int)16))) & int((int)65535)),(int(_mask) & int((int)65535)),copySource);
	}
	else{
		::lime::graphics::utils::_ImageDataUtil::ImageDataView tmp10 = ::lime::graphics::utils::_ImageDataUtil::ImageDataView_obj::__new(sourceImage,sourceRect);
		::lime::graphics::utils::_ImageDataUtil::ImageDataView srcView = tmp10;
		::lime::graphics::Image tmp11 = image;
		::lime::math::Rectangle tmp12 = ::lime::math::Rectangle_obj::__new(destPoint->x,destPoint->y,srcView->width,srcView->height);
		::lime::graphics::utils::_ImageDataUtil::ImageDataView tmp13 = ::lime::graphics::utils::_ImageDataUtil::ImageDataView_obj::__new(tmp11,tmp12);
		::lime::graphics::utils::_ImageDataUtil::ImageDataView destView = tmp13;
		int tmp14 = sourceImage->buffer->format;
		int srcFormat = tmp14;
		int tmp15 = image->buffer->format;
		int destFormat = tmp15;
		bool tmp16 = sourceImage->buffer->premultiplied;
		bool srcPremultiplied = tmp16;
		bool tmp17 = image->buffer->premultiplied;
		bool destPremultiplied = tmp17;
		int srcPosition;
		int destPosition;
		int srcPixel;
		int destPixel;
		int pixelMask;
		bool test;
		int value;
		{
			int _g1 = (int)0;
			int _g = destView->height;
			while((true)){
				bool tmp18 = (_g1 < _g);
				bool tmp19 = !(tmp18);
				if ((tmp19)){
					break;
				}
				int tmp20 = (_g1)++;
				int y = tmp20;
				int tmp21 = srcView->offset;
				int tmp22 = (srcView->stride * y);
				int tmp23 = (tmp21 + tmp22);
				srcPosition = tmp23;
				int tmp24 = destView->offset;
				int tmp25 = (destView->stride * y);
				int tmp26 = (tmp24 + tmp25);
				destPosition = tmp26;
				{
					int _g3 = (int)0;
					int _g2 = destView->width;
					while((true)){
						bool tmp27 = (_g3 < _g2);
						bool tmp28 = !(tmp27);
						if ((tmp28)){
							break;
						}
						int tmp29 = (_g3)++;
						int x = tmp29;
						{
							int tmp30 = srcFormat;
							switch( (int)(tmp30)){
								case (int)2: {
									int tmp31 = ::__hxcpp_memory_get_byte(srcData->buffer->b,(srcData->byteOffset + ((srcPosition + (int)2))));
									Dynamic tmp32 = (int(tmp31) & int((int)255));
									int r = tmp32;
									int tmp33 = ::__hxcpp_memory_get_byte(srcData->buffer->b,(srcData->byteOffset + ((srcPosition + (int)1))));
									Dynamic tmp34 = (int(tmp33) & int((int)255));
									int g = tmp34;
									int tmp35 = ::__hxcpp_memory_get_byte(srcData->buffer->b,(srcData->byteOffset + srcPosition));
									Dynamic tmp36 = (int(tmp35) & int((int)255));
									int b = tmp36;
									int tmp37 = ::__hxcpp_memory_get_byte(srcData->buffer->b,(srcData->byteOffset + ((srcPosition + (int)3))));
									Dynamic tmp38 = (int(tmp37) & int((int)255));
									int a = tmp38;
									int tmp39 = (int(r) & int((int)255));
									int tmp40 = (int(tmp39) << int((int)24));
									int tmp41 = (int(g) & int((int)255));
									int tmp42 = (int(tmp41) << int((int)16));
									int tmp43 = (int(tmp40) | int(tmp42));
									int tmp44 = (int(b) & int((int)255));
									int tmp45 = (int(tmp44) << int((int)8));
									int tmp46 = (int(tmp43) | int(tmp45));
									int tmp47 = (int(a) & int((int)255));
									int tmp48 = (int(tmp46) | int(tmp47));
									srcPixel = tmp48;
								}
								;break;
								case (int)0: {
									int tmp31 = ::__hxcpp_memory_get_byte(srcData->buffer->b,(srcData->byteOffset + srcPosition));
									Dynamic tmp32 = (int(tmp31) & int((int)255));
									int r = tmp32;
									int tmp33 = ::__hxcpp_memory_get_byte(srcData->buffer->b,(srcData->byteOffset + ((srcPosition + (int)1))));
									Dynamic tmp34 = (int(tmp33) & int((int)255));
									int g = tmp34;
									int tmp35 = ::__hxcpp_memory_get_byte(srcData->buffer->b,(srcData->byteOffset + ((srcPosition + (int)2))));
									Dynamic tmp36 = (int(tmp35) & int((int)255));
									int b = tmp36;
									int tmp37 = ::__hxcpp_memory_get_byte(srcData->buffer->b,(srcData->byteOffset + ((srcPosition + (int)3))));
									Dynamic tmp38 = (int(tmp37) & int((int)255));
									int a = tmp38;
									int tmp39 = (int(r) & int((int)255));
									int tmp40 = (int(tmp39) << int((int)24));
									int tmp41 = (int(g) & int((int)255));
									int tmp42 = (int(tmp41) << int((int)16));
									int tmp43 = (int(tmp40) | int(tmp42));
									int tmp44 = (int(b) & int((int)255));
									int tmp45 = (int(tmp44) << int((int)8));
									int tmp46 = (int(tmp43) | int(tmp45));
									int tmp47 = (int(a) & int((int)255));
									int tmp48 = (int(tmp46) | int(tmp47));
									srcPixel = tmp48;
								}
								;break;
								case (int)1: {
									int tmp31 = ::__hxcpp_memory_get_byte(srcData->buffer->b,(srcData->byteOffset + ((srcPosition + (int)1))));
									Dynamic tmp32 = (int(tmp31) & int((int)255));
									int r = tmp32;
									int tmp33 = ::__hxcpp_memory_get_byte(srcData->buffer->b,(srcData->byteOffset + ((srcPosition + (int)2))));
									Dynamic tmp34 = (int(tmp33) & int((int)255));
									int g = tmp34;
									int tmp35 = ::__hxcpp_memory_get_byte(srcData->buffer->b,(srcData->byteOffset + ((srcPosition + (int)3))));
									Dynamic tmp36 = (int(tmp35) & int((int)255));
									int b = tmp36;
									int tmp37 = ::__hxcpp_memory_get_byte(srcData->buffer->b,(srcData->byteOffset + srcPosition));
									Dynamic tmp38 = (int(tmp37) & int((int)255));
									int a = tmp38;
									int tmp39 = (int(r) & int((int)255));
									int tmp40 = (int(tmp39) << int((int)24));
									int tmp41 = (int(g) & int((int)255));
									int tmp42 = (int(tmp41) << int((int)16));
									int tmp43 = (int(tmp40) | int(tmp42));
									int tmp44 = (int(b) & int((int)255));
									int tmp45 = (int(tmp44) << int((int)8));
									int tmp46 = (int(tmp43) | int(tmp45));
									int tmp47 = (int(a) & int((int)255));
									int tmp48 = (int(tmp46) | int(tmp47));
									srcPixel = tmp48;
								}
								;break;
							}
							bool tmp31 = srcPremultiplied;
							if ((tmp31)){
								int tmp32 = (int(srcPixel) & int((int)255));
								int tmp33 = tmp32;
								bool tmp34 = (tmp33 != (int)0);
								bool tmp35;
								if ((tmp34)){
									int tmp36 = (int(srcPixel) & int((int)255));
									int tmp37 = tmp36;
									int tmp38 = tmp37;
									tmp35 = (tmp38 != (int)255);
								}
								else{
									tmp35 = false;
								}
								if ((tmp35)){
									int tmp36 = (int(srcPixel) & int((int)255));
									int tmp37 = tmp36;
									Float tmp38 = (Float(((Float)255.0)) / Float(tmp37));
									::lime::math::color::_RGBA::RGBA_Impl__obj::unmult = tmp38;
									{
										Dynamic tmp39;
										{
											::lime::utils::ArrayBufferView tmp40 = ::lime::math::color::_RGBA::RGBA_Impl__obj::__clamp;
											::lime::utils::ArrayBufferView this1 = tmp40;
											int tmp41 = (int(srcPixel) >> int((int)24));
											int tmp42 = tmp41;
											int tmp43 = (int(tmp42) & int((int)255));
											int tmp44 = tmp43;
											Float tmp45 = ::lime::math::color::_RGBA::RGBA_Impl__obj::unmult;
											Float tmp46 = (tmp44 * tmp45);
											int tmp47 = ::Math_obj::round(tmp46);
											int idx = tmp47;
											int tmp48 = ::__hxcpp_memory_get_byte(this1->buffer->b,(this1->byteOffset + idx));
											tmp39 = (int(tmp48) & int((int)255));
										}
										int r = tmp39;
										Dynamic tmp40;
										{
											::lime::utils::ArrayBufferView tmp41 = ::lime::math::color::_RGBA::RGBA_Impl__obj::__clamp;
											::lime::utils::ArrayBufferView this1 = tmp41;
											int tmp42 = (int(srcPixel) >> int((int)16));
											int tmp43 = tmp42;
											int tmp44 = (int(tmp43) & int((int)255));
											int tmp45 = tmp44;
											Float tmp46 = ::lime::math::color::_RGBA::RGBA_Impl__obj::unmult;
											Float tmp47 = (tmp45 * tmp46);
											int tmp48 = ::Math_obj::round(tmp47);
											int idx = tmp48;
											int tmp49 = ::__hxcpp_memory_get_byte(this1->buffer->b,(this1->byteOffset + idx));
											tmp40 = (int(tmp49) & int((int)255));
										}
										int g = tmp40;
										Dynamic tmp41;
										{
											::lime::utils::ArrayBufferView tmp42 = ::lime::math::color::_RGBA::RGBA_Impl__obj::__clamp;
											::lime::utils::ArrayBufferView this1 = tmp42;
											int tmp43 = (int(srcPixel) >> int((int)8));
											int tmp44 = tmp43;
											int tmp45 = (int(tmp44) & int((int)255));
											int tmp46 = tmp45;
											Float tmp47 = ::lime::math::color::_RGBA::RGBA_Impl__obj::unmult;
											Float tmp48 = (tmp46 * tmp47);
											int tmp49 = ::Math_obj::round(tmp48);
											int idx = tmp49;
											int tmp50 = ::__hxcpp_memory_get_byte(this1->buffer->b,(this1->byteOffset + idx));
											tmp41 = (int(tmp50) & int((int)255));
										}
										int b = tmp41;
										int tmp42 = (int(r) & int((int)255));
										int tmp43 = (int(tmp42) << int((int)24));
										int tmp44 = (int(g) & int((int)255));
										int tmp45 = (int(tmp44) << int((int)16));
										int tmp46 = (int(tmp43) | int(tmp45));
										int tmp47 = (int(b) & int((int)255));
										int tmp48 = (int(tmp47) << int((int)8));
										int tmp49 = (int(tmp46) | int(tmp48));
										int tmp50 = (int(srcPixel) & int((int)255));
										int tmp51 = tmp50;
										int tmp52 = (int(tmp51) & int((int)255));
										int tmp53 = (int(tmp49) | int(tmp52));
										srcPixel = tmp53;
									}
								}
							}
						}
						int tmp30 = (int(srcPixel) & int(_mask));
						pixelMask = tmp30;
						int tmp31;
						{
							int tmp110;
							int tmp210;
							int tmp32 = (int(pixelMask) >> int((int)24));
							int tmp33 = tmp32;
							int tmp34 = (int(tmp33) & int((int)255));
							tmp110 = tmp34;
							int tmp35 = (int(_threshold) >> int((int)24));
							int tmp36 = tmp35;
							int tmp37 = (int(tmp36) & int((int)255));
							tmp210 = tmp37;
							bool tmp38 = (tmp110 != tmp210);
							if ((tmp38)){
								bool tmp39;
								{
									bool tmp40 = (tmp110 < (int)0);
									bool aNeg = tmp40;
									bool tmp41 = (tmp210 < (int)0);
									bool bNeg = tmp41;
									bool tmp42 = (aNeg != bNeg);
									if ((tmp42)){
										tmp39 = aNeg;
									}
									else{
										tmp39 = (tmp110 > tmp210);
									}
								}
								if ((tmp39)){
									tmp31 = (int)1;
								}
								else{
									tmp31 = (int)-1;
								}
							}
							else{
								int tmp39 = (int(pixelMask) >> int((int)16));
								int tmp40 = tmp39;
								int tmp41 = (int(tmp40) & int((int)255));
								tmp110 = tmp41;
								int tmp42 = (int(_threshold) >> int((int)16));
								int tmp43 = tmp42;
								int tmp44 = (int(tmp43) & int((int)255));
								tmp210 = tmp44;
								bool tmp45 = (tmp110 != tmp210);
								if ((tmp45)){
									bool tmp46;
									{
										bool tmp47 = (tmp110 < (int)0);
										bool aNeg = tmp47;
										bool tmp48 = (tmp210 < (int)0);
										bool bNeg = tmp48;
										bool tmp49 = (aNeg != bNeg);
										if ((tmp49)){
											tmp46 = aNeg;
										}
										else{
											tmp46 = (tmp110 > tmp210);
										}
									}
									if ((tmp46)){
										tmp31 = (int)1;
									}
									else{
										tmp31 = (int)-1;
									}
								}
								else{
									int tmp46 = (int(pixelMask) >> int((int)8));
									int tmp47 = tmp46;
									int tmp48 = (int(tmp47) & int((int)255));
									tmp110 = tmp48;
									int tmp49 = (int(_threshold) >> int((int)8));
									int tmp50 = tmp49;
									int tmp51 = (int(tmp50) & int((int)255));
									tmp210 = tmp51;
									bool tmp52 = (tmp110 != tmp210);
									if ((tmp52)){
										bool tmp53;
										{
											bool tmp54 = (tmp110 < (int)0);
											bool aNeg = tmp54;
											bool tmp55 = (tmp210 < (int)0);
											bool bNeg = tmp55;
											bool tmp56 = (aNeg != bNeg);
											if ((tmp56)){
												tmp53 = aNeg;
											}
											else{
												tmp53 = (tmp110 > tmp210);
											}
										}
										if ((tmp53)){
											tmp31 = (int)1;
										}
										else{
											tmp31 = (int)-1;
										}
									}
									else{
										int tmp53 = (int(pixelMask) & int((int)255));
										tmp110 = tmp53;
										int tmp54 = (int(_threshold) & int((int)255));
										tmp210 = tmp54;
										bool tmp55 = (tmp110 != tmp210);
										if ((tmp55)){
											bool tmp56;
											{
												bool tmp57 = (tmp110 < (int)0);
												bool aNeg = tmp57;
												bool tmp58 = (tmp210 < (int)0);
												bool bNeg = tmp58;
												bool tmp59 = (aNeg != bNeg);
												if ((tmp59)){
													tmp56 = aNeg;
												}
												else{
													tmp56 = (tmp110 > tmp210);
												}
											}
											if ((tmp56)){
												tmp31 = (int)1;
											}
											else{
												tmp31 = (int)-1;
											}
										}
										else{
											tmp31 = (int)0;
										}
									}
								}
							}
						}
						value = tmp31;
						int tmp32 = _operation;
						bool tmp33;
						switch( (int)(tmp32)){
							case (int)0: {
								tmp33 = (value != (int)0);
							}
							;break;
							case (int)1: {
								tmp33 = (value == (int)0);
							}
							;break;
							case (int)2: {
								tmp33 = (value == (int)-1);
							}
							;break;
							case (int)3: {
								bool tmp34 = (value == (int)0);
								bool tmp35 = !(tmp34);
								if ((tmp35)){
									tmp33 = (value == (int)-1);
								}
								else{
									tmp33 = true;
								}
							}
							;break;
							case (int)4: {
								tmp33 = (value == (int)1);
							}
							;break;
							case (int)5: {
								bool tmp34 = (value == (int)0);
								bool tmp35 = !(tmp34);
								if ((tmp35)){
									tmp33 = (value == (int)1);
								}
								else{
									tmp33 = true;
								}
							}
							;break;
							default: {
								tmp33 = false;
							}
						}
						test = tmp33;
						bool tmp34 = test;
						if ((tmp34)){
							{
								bool tmp35 = destPremultiplied;
								if ((tmp35)){
									int tmp36 = (int(_color) & int((int)255));
									int tmp37 = tmp36;
									bool tmp38 = (tmp37 == (int)0);
									if ((tmp38)){
										bool tmp39 = (_color != (int)0);
										if ((tmp39)){
											_color = (int)0;
										}
									}
									else{
										int tmp39 = (int(_color) & int((int)255));
										int tmp40 = tmp39;
										bool tmp41 = (tmp40 != (int)255);
										if ((tmp41)){
											Dynamic tmp42;
											{
												::lime::utils::ArrayBufferView tmp43 = ::lime::math::color::_RGBA::RGBA_Impl__obj::__alpha16;
												::lime::utils::ArrayBufferView this1 = tmp43;
												tmp42 = ::__hxcpp_memory_get_ui32(this1->buffer->b,(this1->byteOffset + (((int(_color) & int((int)255))) * (int)4)));
											}
											::lime::math::color::_RGBA::RGBA_Impl__obj::a16 = tmp42;
											{
												int tmp43 = (int(_color) >> int((int)24));
												int tmp44 = tmp43;
												int tmp45 = (int(tmp44) & int((int)255));
												int tmp46 = tmp45;
												int tmp47 = ::lime::math::color::_RGBA::RGBA_Impl__obj::a16;
												int tmp48 = (tmp46 * tmp47);
												int tmp49 = (int(tmp48) >> int((int)16));
												int tmp50 = (int(tmp49) & int((int)255));
												int tmp51 = (int(tmp50) << int((int)24));
												int tmp52 = (int(_color) >> int((int)16));
												int tmp53 = tmp52;
												int tmp54 = (int(tmp53) & int((int)255));
												int tmp55 = tmp54;
												int tmp56 = ::lime::math::color::_RGBA::RGBA_Impl__obj::a16;
												int tmp57 = (tmp55 * tmp56);
												int tmp58 = (int(tmp57) >> int((int)16));
												int tmp59 = (int(tmp58) & int((int)255));
												int tmp60 = (int(tmp59) << int((int)16));
												int tmp61 = (int(tmp51) | int(tmp60));
												int tmp62 = (int(_color) >> int((int)8));
												int tmp63 = tmp62;
												int tmp64 = (int(tmp63) & int((int)255));
												int tmp65 = tmp64;
												int tmp66 = ::lime::math::color::_RGBA::RGBA_Impl__obj::a16;
												int tmp67 = (tmp65 * tmp66);
												int tmp68 = (int(tmp67) >> int((int)16));
												int tmp69 = (int(tmp68) & int((int)255));
												int tmp70 = (int(tmp69) << int((int)8));
												int tmp71 = (int(tmp61) | int(tmp70));
												int tmp72 = (int(_color) & int((int)255));
												int tmp73 = tmp72;
												int tmp74 = (int(tmp73) & int((int)255));
												int tmp75 = (int(tmp71) | int(tmp74));
												_color = tmp75;
											}
										}
									}
								}
								int tmp36 = destFormat;
								switch( (int)(tmp36)){
									case (int)2: {
										{
											int tmp37 = (int(_color) >> int((int)8));
											int tmp38 = tmp37;
											int tmp39 = (int(tmp38) & int((int)255));
											int val = tmp39;
											::__hxcpp_memory_set_byte(destData->buffer->b,(destData->byteOffset + destPosition),val);
											val;
										}
										{
											int tmp37 = (int(_color) >> int((int)16));
											int tmp38 = tmp37;
											int tmp39 = (int(tmp38) & int((int)255));
											int val = tmp39;
											::__hxcpp_memory_set_byte(destData->buffer->b,(destData->byteOffset + ((destPosition + (int)1))),val);
											val;
										}
										{
											int tmp37 = (int(_color) >> int((int)24));
											int tmp38 = tmp37;
											int tmp39 = (int(tmp38) & int((int)255));
											int val = tmp39;
											::__hxcpp_memory_set_byte(destData->buffer->b,(destData->byteOffset + ((destPosition + (int)2))),val);
											val;
										}
										{
											int tmp37 = (int(_color) & int((int)255));
											int val = tmp37;
											::__hxcpp_memory_set_byte(destData->buffer->b,(destData->byteOffset + ((destPosition + (int)3))),val);
											val;
										}
									}
									;break;
									case (int)0: {
										{
											int tmp37 = (int(_color) >> int((int)24));
											int tmp38 = tmp37;
											int tmp39 = (int(tmp38) & int((int)255));
											int val = tmp39;
											::__hxcpp_memory_set_byte(destData->buffer->b,(destData->byteOffset + destPosition),val);
											val;
										}
										{
											int tmp37 = (int(_color) >> int((int)16));
											int tmp38 = tmp37;
											int tmp39 = (int(tmp38) & int((int)255));
											int val = tmp39;
											::__hxcpp_memory_set_byte(destData->buffer->b,(destData->byteOffset + ((destPosition + (int)1))),val);
											val;
										}
										{
											int tmp37 = (int(_color) >> int((int)8));
											int tmp38 = tmp37;
											int tmp39 = (int(tmp38) & int((int)255));
											int val = tmp39;
											::__hxcpp_memory_set_byte(destData->buffer->b,(destData->byteOffset + ((destPosition + (int)2))),val);
											val;
										}
										{
											int tmp37 = (int(_color) & int((int)255));
											int val = tmp37;
											::__hxcpp_memory_set_byte(destData->buffer->b,(destData->byteOffset + ((destPosition + (int)3))),val);
											val;
										}
									}
									;break;
									case (int)1: {
										{
											int tmp37 = (int(_color) & int((int)255));
											int val = tmp37;
											::__hxcpp_memory_set_byte(destData->buffer->b,(destData->byteOffset + destPosition),val);
											val;
										}
										{
											int tmp37 = (int(_color) >> int((int)24));
											int tmp38 = tmp37;
											int tmp39 = (int(tmp38) & int((int)255));
											int val = tmp39;
											::__hxcpp_memory_set_byte(destData->buffer->b,(destData->byteOffset + ((destPosition + (int)1))),val);
											val;
										}
										{
											int tmp37 = (int(_color) >> int((int)16));
											int tmp38 = tmp37;
											int tmp39 = (int(tmp38) & int((int)255));
											int val = tmp39;
											::__hxcpp_memory_set_byte(destData->buffer->b,(destData->byteOffset + ((destPosition + (int)2))),val);
											val;
										}
										{
											int tmp37 = (int(_color) >> int((int)8));
											int tmp38 = tmp37;
											int tmp39 = (int(tmp38) & int((int)255));
											int val = tmp39;
											::__hxcpp_memory_set_byte(destData->buffer->b,(destData->byteOffset + ((destPosition + (int)3))),val);
											val;
										}
									}
									;break;
								}
							}
							(hits)++;
						}
						else{
							bool tmp35 = copySource;
							if ((tmp35)){
								bool tmp36 = destPremultiplied;
								if ((tmp36)){
									int tmp37 = (int(srcPixel) & int((int)255));
									int tmp38 = tmp37;
									bool tmp39 = (tmp38 == (int)0);
									if ((tmp39)){
										bool tmp40 = (srcPixel != (int)0);
										if ((tmp40)){
											srcPixel = (int)0;
										}
									}
									else{
										int tmp40 = (int(srcPixel) & int((int)255));
										int tmp41 = tmp40;
										bool tmp42 = (tmp41 != (int)255);
										if ((tmp42)){
											Dynamic tmp43;
											{
												::lime::utils::ArrayBufferView tmp44 = ::lime::math::color::_RGBA::RGBA_Impl__obj::__alpha16;
												::lime::utils::ArrayBufferView this1 = tmp44;
												tmp43 = ::__hxcpp_memory_get_ui32(this1->buffer->b,(this1->byteOffset + (((int(srcPixel) & int((int)255))) * (int)4)));
											}
											::lime::math::color::_RGBA::RGBA_Impl__obj::a16 = tmp43;
											{
												int tmp44 = (int(srcPixel) >> int((int)24));
												int tmp45 = tmp44;
												int tmp46 = (int(tmp45) & int((int)255));
												int tmp47 = tmp46;
												int tmp48 = ::lime::math::color::_RGBA::RGBA_Impl__obj::a16;
												int tmp49 = (tmp47 * tmp48);
												int tmp50 = (int(tmp49) >> int((int)16));
												int tmp51 = (int(tmp50) & int((int)255));
												int tmp52 = (int(tmp51) << int((int)24));
												int tmp53 = (int(srcPixel) >> int((int)16));
												int tmp54 = tmp53;
												int tmp55 = (int(tmp54) & int((int)255));
												int tmp56 = tmp55;
												int tmp57 = ::lime::math::color::_RGBA::RGBA_Impl__obj::a16;
												int tmp58 = (tmp56 * tmp57);
												int tmp59 = (int(tmp58) >> int((int)16));
												int tmp60 = (int(tmp59) & int((int)255));
												int tmp61 = (int(tmp60) << int((int)16));
												int tmp62 = (int(tmp52) | int(tmp61));
												int tmp63 = (int(srcPixel) >> int((int)8));
												int tmp64 = tmp63;
												int tmp65 = (int(tmp64) & int((int)255));
												int tmp66 = tmp65;
												int tmp67 = ::lime::math::color::_RGBA::RGBA_Impl__obj::a16;
												int tmp68 = (tmp66 * tmp67);
												int tmp69 = (int(tmp68) >> int((int)16));
												int tmp70 = (int(tmp69) & int((int)255));
												int tmp71 = (int(tmp70) << int((int)8));
												int tmp72 = (int(tmp62) | int(tmp71));
												int tmp73 = (int(srcPixel) & int((int)255));
												int tmp74 = tmp73;
												int tmp75 = (int(tmp74) & int((int)255));
												int tmp76 = (int(tmp72) | int(tmp75));
												srcPixel = tmp76;
											}
										}
									}
								}
								int tmp37 = destFormat;
								switch( (int)(tmp37)){
									case (int)2: {
										{
											int tmp38 = (int(srcPixel) >> int((int)8));
											int tmp39 = tmp38;
											int tmp40 = (int(tmp39) & int((int)255));
											int val = tmp40;
											::__hxcpp_memory_set_byte(destData->buffer->b,(destData->byteOffset + destPosition),val);
											val;
										}
										{
											int tmp38 = (int(srcPixel) >> int((int)16));
											int tmp39 = tmp38;
											int tmp40 = (int(tmp39) & int((int)255));
											int val = tmp40;
											::__hxcpp_memory_set_byte(destData->buffer->b,(destData->byteOffset + ((destPosition + (int)1))),val);
											val;
										}
										{
											int tmp38 = (int(srcPixel) >> int((int)24));
											int tmp39 = tmp38;
											int tmp40 = (int(tmp39) & int((int)255));
											int val = tmp40;
											::__hxcpp_memory_set_byte(destData->buffer->b,(destData->byteOffset + ((destPosition + (int)2))),val);
											val;
										}
										{
											int tmp38 = (int(srcPixel) & int((int)255));
											int val = tmp38;
											::__hxcpp_memory_set_byte(destData->buffer->b,(destData->byteOffset + ((destPosition + (int)3))),val);
											val;
										}
									}
									;break;
									case (int)0: {
										{
											int tmp38 = (int(srcPixel) >> int((int)24));
											int tmp39 = tmp38;
											int tmp40 = (int(tmp39) & int((int)255));
											int val = tmp40;
											::__hxcpp_memory_set_byte(destData->buffer->b,(destData->byteOffset + destPosition),val);
											val;
										}
										{
											int tmp38 = (int(srcPixel) >> int((int)16));
											int tmp39 = tmp38;
											int tmp40 = (int(tmp39) & int((int)255));
											int val = tmp40;
											::__hxcpp_memory_set_byte(destData->buffer->b,(destData->byteOffset + ((destPosition + (int)1))),val);
											val;
										}
										{
											int tmp38 = (int(srcPixel) >> int((int)8));
											int tmp39 = tmp38;
											int tmp40 = (int(tmp39) & int((int)255));
											int val = tmp40;
											::__hxcpp_memory_set_byte(destData->buffer->b,(destData->byteOffset + ((destPosition + (int)2))),val);
											val;
										}
										{
											int tmp38 = (int(srcPixel) & int((int)255));
											int val = tmp38;
											::__hxcpp_memory_set_byte(destData->buffer->b,(destData->byteOffset + ((destPosition + (int)3))),val);
											val;
										}
									}
									;break;
									case (int)1: {
										{
											int tmp38 = (int(srcPixel) & int((int)255));
											int val = tmp38;
											::__hxcpp_memory_set_byte(destData->buffer->b,(destData->byteOffset + destPosition),val);
											val;
										}
										{
											int tmp38 = (int(srcPixel) >> int((int)24));
											int tmp39 = tmp38;
											int tmp40 = (int(tmp39) & int((int)255));
											int val = tmp40;
											::__hxcpp_memory_set_byte(destData->buffer->b,(destData->byteOffset + ((destPosition + (int)1))),val);
											val;
										}
										{
											int tmp38 = (int(srcPixel) >> int((int)16));
											int tmp39 = tmp38;
											int tmp40 = (int(tmp39) & int((int)255));
											int val = tmp40;
											::__hxcpp_memory_set_byte(destData->buffer->b,(destData->byteOffset + ((destPosition + (int)2))),val);
											val;
										}
										{
											int tmp38 = (int(srcPixel) >> int((int)8));
											int tmp39 = tmp38;
											int tmp40 = (int(tmp39) & int((int)255));
											int val = tmp40;
											::__hxcpp_memory_set_byte(destData->buffer->b,(destData->byteOffset + ((destPosition + (int)3))),val);
											val;
										}
									}
									;break;
								}
							}
						}
						hx::AddEq(srcPosition,(int)4);
						hx::AddEq(destPosition,(int)4);
					}
				}
			}
		}
	}
	bool tmp10 = (hits > (int)0);
	if ((tmp10)){
		image->dirty = true;
		(image->version)++;
	}
	int tmp11 = hits;
	return tmp11;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC10(ImageDataUtil_obj,threshold,return )

Void ImageDataUtil_obj::unmultiplyAlpha( ::lime::graphics::Image image){
{
		::lime::utils::ArrayBufferView tmp = image->buffer->data;
		::lime::utils::ArrayBufferView data = tmp;
		bool tmp1 = (data == null());
		if ((tmp1)){
			return null();
		}
		bool tmp2 = ::lime::_system::CFFI_obj::enabled;
		if ((tmp2)){
			::lime::_backend::native::NativeCFFI_obj::cffi_lime_image_data_util_unmultiply_alpha.call(hx::DynamicPtr(image));
		}
		else{
			int tmp3 = image->buffer->format;
			int format = tmp3;
			int tmp4 = data->length;
			Float tmp5 = (Float(tmp4) / Float((int)4));
			int tmp6 = ::Std_obj::_int(tmp5);
			int length = tmp6;
			int pixel;
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
						int tmp10 = (i * (int)4);
						int offset = tmp10;
						int tmp11 = format;
						switch( (int)(tmp11)){
							case (int)2: {
								int tmp12 = ::__hxcpp_memory_get_byte(data->buffer->b,(data->byteOffset + ((offset + (int)2))));
								Dynamic tmp13 = (int(tmp12) & int((int)255));
								int r = tmp13;
								int tmp14 = ::__hxcpp_memory_get_byte(data->buffer->b,(data->byteOffset + ((offset + (int)1))));
								Dynamic tmp15 = (int(tmp14) & int((int)255));
								int g = tmp15;
								int tmp16 = ::__hxcpp_memory_get_byte(data->buffer->b,(data->byteOffset + offset));
								Dynamic tmp17 = (int(tmp16) & int((int)255));
								int b = tmp17;
								int tmp18 = ::__hxcpp_memory_get_byte(data->buffer->b,(data->byteOffset + ((offset + (int)3))));
								Dynamic tmp19 = (int(tmp18) & int((int)255));
								int a = tmp19;
								int tmp20 = (int(r) & int((int)255));
								int tmp21 = (int(tmp20) << int((int)24));
								int tmp22 = (int(g) & int((int)255));
								int tmp23 = (int(tmp22) << int((int)16));
								int tmp24 = (int(tmp21) | int(tmp23));
								int tmp25 = (int(b) & int((int)255));
								int tmp26 = (int(tmp25) << int((int)8));
								int tmp27 = (int(tmp24) | int(tmp26));
								int tmp28 = (int(a) & int((int)255));
								int tmp29 = (int(tmp27) | int(tmp28));
								pixel = tmp29;
							}
							;break;
							case (int)0: {
								int tmp12 = ::__hxcpp_memory_get_byte(data->buffer->b,(data->byteOffset + offset));
								Dynamic tmp13 = (int(tmp12) & int((int)255));
								int r = tmp13;
								int tmp14 = ::__hxcpp_memory_get_byte(data->buffer->b,(data->byteOffset + ((offset + (int)1))));
								Dynamic tmp15 = (int(tmp14) & int((int)255));
								int g = tmp15;
								int tmp16 = ::__hxcpp_memory_get_byte(data->buffer->b,(data->byteOffset + ((offset + (int)2))));
								Dynamic tmp17 = (int(tmp16) & int((int)255));
								int b = tmp17;
								int tmp18 = ::__hxcpp_memory_get_byte(data->buffer->b,(data->byteOffset + ((offset + (int)3))));
								Dynamic tmp19 = (int(tmp18) & int((int)255));
								int a = tmp19;
								int tmp20 = (int(r) & int((int)255));
								int tmp21 = (int(tmp20) << int((int)24));
								int tmp22 = (int(g) & int((int)255));
								int tmp23 = (int(tmp22) << int((int)16));
								int tmp24 = (int(tmp21) | int(tmp23));
								int tmp25 = (int(b) & int((int)255));
								int tmp26 = (int(tmp25) << int((int)8));
								int tmp27 = (int(tmp24) | int(tmp26));
								int tmp28 = (int(a) & int((int)255));
								int tmp29 = (int(tmp27) | int(tmp28));
								pixel = tmp29;
							}
							;break;
							case (int)1: {
								int tmp12 = ::__hxcpp_memory_get_byte(data->buffer->b,(data->byteOffset + ((offset + (int)1))));
								Dynamic tmp13 = (int(tmp12) & int((int)255));
								int r = tmp13;
								int tmp14 = ::__hxcpp_memory_get_byte(data->buffer->b,(data->byteOffset + ((offset + (int)2))));
								Dynamic tmp15 = (int(tmp14) & int((int)255));
								int g = tmp15;
								int tmp16 = ::__hxcpp_memory_get_byte(data->buffer->b,(data->byteOffset + ((offset + (int)3))));
								Dynamic tmp17 = (int(tmp16) & int((int)255));
								int b = tmp17;
								int tmp18 = ::__hxcpp_memory_get_byte(data->buffer->b,(data->byteOffset + offset));
								Dynamic tmp19 = (int(tmp18) & int((int)255));
								int a = tmp19;
								int tmp20 = (int(r) & int((int)255));
								int tmp21 = (int(tmp20) << int((int)24));
								int tmp22 = (int(g) & int((int)255));
								int tmp23 = (int(tmp22) << int((int)16));
								int tmp24 = (int(tmp21) | int(tmp23));
								int tmp25 = (int(b) & int((int)255));
								int tmp26 = (int(tmp25) << int((int)8));
								int tmp27 = (int(tmp24) | int(tmp26));
								int tmp28 = (int(a) & int((int)255));
								int tmp29 = (int(tmp27) | int(tmp28));
								pixel = tmp29;
							}
							;break;
						}
						{
							int tmp12 = (int(pixel) & int((int)255));
							int tmp13 = tmp12;
							bool tmp14 = (tmp13 != (int)0);
							bool tmp15;
							if ((tmp14)){
								int tmp16 = (int(pixel) & int((int)255));
								int tmp17 = tmp16;
								int tmp18 = tmp17;
								tmp15 = (tmp18 != (int)255);
							}
							else{
								tmp15 = false;
							}
							if ((tmp15)){
								int tmp16 = (int(pixel) & int((int)255));
								int tmp17 = tmp16;
								Float tmp18 = (Float(((Float)255.0)) / Float(tmp17));
								::lime::math::color::_RGBA::RGBA_Impl__obj::unmult = tmp18;
								{
									Dynamic tmp19;
									{
										::lime::utils::ArrayBufferView tmp20 = ::lime::math::color::_RGBA::RGBA_Impl__obj::__clamp;
										::lime::utils::ArrayBufferView this1 = tmp20;
										int tmp21 = (int(pixel) >> int((int)24));
										int tmp22 = tmp21;
										int tmp23 = (int(tmp22) & int((int)255));
										int tmp24 = tmp23;
										Float tmp25 = ::lime::math::color::_RGBA::RGBA_Impl__obj::unmult;
										Float tmp26 = (tmp24 * tmp25);
										int tmp27 = ::Math_obj::round(tmp26);
										int idx = tmp27;
										int tmp28 = ::__hxcpp_memory_get_byte(this1->buffer->b,(this1->byteOffset + idx));
										tmp19 = (int(tmp28) & int((int)255));
									}
									int r = tmp19;
									Dynamic tmp20;
									{
										::lime::utils::ArrayBufferView tmp21 = ::lime::math::color::_RGBA::RGBA_Impl__obj::__clamp;
										::lime::utils::ArrayBufferView this1 = tmp21;
										int tmp22 = (int(pixel) >> int((int)16));
										int tmp23 = tmp22;
										int tmp24 = (int(tmp23) & int((int)255));
										int tmp25 = tmp24;
										Float tmp26 = ::lime::math::color::_RGBA::RGBA_Impl__obj::unmult;
										Float tmp27 = (tmp25 * tmp26);
										int tmp28 = ::Math_obj::round(tmp27);
										int idx = tmp28;
										int tmp29 = ::__hxcpp_memory_get_byte(this1->buffer->b,(this1->byteOffset + idx));
										tmp20 = (int(tmp29) & int((int)255));
									}
									int g = tmp20;
									Dynamic tmp21;
									{
										::lime::utils::ArrayBufferView tmp22 = ::lime::math::color::_RGBA::RGBA_Impl__obj::__clamp;
										::lime::utils::ArrayBufferView this1 = tmp22;
										int tmp23 = (int(pixel) >> int((int)8));
										int tmp24 = tmp23;
										int tmp25 = (int(tmp24) & int((int)255));
										int tmp26 = tmp25;
										Float tmp27 = ::lime::math::color::_RGBA::RGBA_Impl__obj::unmult;
										Float tmp28 = (tmp26 * tmp27);
										int tmp29 = ::Math_obj::round(tmp28);
										int idx = tmp29;
										int tmp30 = ::__hxcpp_memory_get_byte(this1->buffer->b,(this1->byteOffset + idx));
										tmp21 = (int(tmp30) & int((int)255));
									}
									int b = tmp21;
									int tmp22 = (int(r) & int((int)255));
									int tmp23 = (int(tmp22) << int((int)24));
									int tmp24 = (int(g) & int((int)255));
									int tmp25 = (int(tmp24) << int((int)16));
									int tmp26 = (int(tmp23) | int(tmp25));
									int tmp27 = (int(b) & int((int)255));
									int tmp28 = (int(tmp27) << int((int)8));
									int tmp29 = (int(tmp26) | int(tmp28));
									int tmp30 = (int(pixel) & int((int)255));
									int tmp31 = tmp30;
									int tmp32 = (int(tmp31) & int((int)255));
									int tmp33 = (int(tmp29) | int(tmp32));
									pixel = tmp33;
								}
							}
						}
					}
					{
						int tmp10 = (i * (int)4);
						int offset = tmp10;
						int tmp11 = format;
						switch( (int)(tmp11)){
							case (int)2: {
								{
									int tmp12 = (int(pixel) >> int((int)8));
									int tmp13 = tmp12;
									int tmp14 = (int(tmp13) & int((int)255));
									int val = tmp14;
									::__hxcpp_memory_set_byte(data->buffer->b,(data->byteOffset + offset),val);
									val;
								}
								{
									int tmp12 = (int(pixel) >> int((int)16));
									int tmp13 = tmp12;
									int tmp14 = (int(tmp13) & int((int)255));
									int val = tmp14;
									::__hxcpp_memory_set_byte(data->buffer->b,(data->byteOffset + ((offset + (int)1))),val);
									val;
								}
								{
									int tmp12 = (int(pixel) >> int((int)24));
									int tmp13 = tmp12;
									int tmp14 = (int(tmp13) & int((int)255));
									int val = tmp14;
									::__hxcpp_memory_set_byte(data->buffer->b,(data->byteOffset + ((offset + (int)2))),val);
									val;
								}
								{
									int tmp12 = (int(pixel) & int((int)255));
									int val = tmp12;
									::__hxcpp_memory_set_byte(data->buffer->b,(data->byteOffset + ((offset + (int)3))),val);
									val;
								}
							}
							;break;
							case (int)0: {
								{
									int tmp12 = (int(pixel) >> int((int)24));
									int tmp13 = tmp12;
									int tmp14 = (int(tmp13) & int((int)255));
									int val = tmp14;
									::__hxcpp_memory_set_byte(data->buffer->b,(data->byteOffset + offset),val);
									val;
								}
								{
									int tmp12 = (int(pixel) >> int((int)16));
									int tmp13 = tmp12;
									int tmp14 = (int(tmp13) & int((int)255));
									int val = tmp14;
									::__hxcpp_memory_set_byte(data->buffer->b,(data->byteOffset + ((offset + (int)1))),val);
									val;
								}
								{
									int tmp12 = (int(pixel) >> int((int)8));
									int tmp13 = tmp12;
									int tmp14 = (int(tmp13) & int((int)255));
									int val = tmp14;
									::__hxcpp_memory_set_byte(data->buffer->b,(data->byteOffset + ((offset + (int)2))),val);
									val;
								}
								{
									int tmp12 = (int(pixel) & int((int)255));
									int val = tmp12;
									::__hxcpp_memory_set_byte(data->buffer->b,(data->byteOffset + ((offset + (int)3))),val);
									val;
								}
							}
							;break;
							case (int)1: {
								{
									int tmp12 = (int(pixel) & int((int)255));
									int val = tmp12;
									::__hxcpp_memory_set_byte(data->buffer->b,(data->byteOffset + offset),val);
									val;
								}
								{
									int tmp12 = (int(pixel) >> int((int)24));
									int tmp13 = tmp12;
									int tmp14 = (int(tmp13) & int((int)255));
									int val = tmp14;
									::__hxcpp_memory_set_byte(data->buffer->b,(data->byteOffset + ((offset + (int)1))),val);
									val;
								}
								{
									int tmp12 = (int(pixel) >> int((int)16));
									int tmp13 = tmp12;
									int tmp14 = (int(tmp13) & int((int)255));
									int val = tmp14;
									::__hxcpp_memory_set_byte(data->buffer->b,(data->byteOffset + ((offset + (int)2))),val);
									val;
								}
								{
									int tmp12 = (int(pixel) >> int((int)8));
									int tmp13 = tmp12;
									int tmp14 = (int(tmp13) & int((int)255));
									int val = tmp14;
									::__hxcpp_memory_set_byte(data->buffer->b,(data->byteOffset + ((offset + (int)3))),val);
									val;
								}
							}
							;break;
						}
					}
				}
			}
		}
		image->buffer->premultiplied = false;
		image->dirty = true;
		(image->version)++;
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(ImageDataUtil_obj,unmultiplyAlpha,(void))

int ImageDataUtil_obj::__pixelCompare( int n1,int n2){
	int tmp1;
	int tmp2;
	int tmp = (int(n1) >> int((int)24));
	int tmp3 = tmp;
	int tmp4 = (int(tmp3) & int((int)255));
	tmp1 = tmp4;
	int tmp5 = (int(n2) >> int((int)24));
	int tmp6 = tmp5;
	int tmp7 = (int(tmp6) & int((int)255));
	tmp2 = tmp7;
	bool tmp8 = (tmp1 != tmp2);
	if ((tmp8)){
		bool tmp9;
		{
			bool tmp10 = (tmp1 < (int)0);
			bool aNeg = tmp10;
			bool tmp11 = (tmp2 < (int)0);
			bool bNeg = tmp11;
			bool tmp12 = (aNeg != bNeg);
			if ((tmp12)){
				tmp9 = aNeg;
			}
			else{
				tmp9 = (tmp1 > tmp2);
			}
		}
		int tmp10;
		if ((tmp9)){
			tmp10 = (int)1;
		}
		else{
			tmp10 = (int)-1;
		}
		return tmp10;
	}
	else{
		int tmp9 = (int(n1) >> int((int)16));
		int tmp10 = tmp9;
		int tmp11 = (int(tmp10) & int((int)255));
		tmp1 = tmp11;
		int tmp12 = (int(n2) >> int((int)16));
		int tmp13 = tmp12;
		int tmp14 = (int(tmp13) & int((int)255));
		tmp2 = tmp14;
		bool tmp15 = (tmp1 != tmp2);
		if ((tmp15)){
			bool tmp16;
			{
				bool tmp17 = (tmp1 < (int)0);
				bool aNeg = tmp17;
				bool tmp18 = (tmp2 < (int)0);
				bool bNeg = tmp18;
				bool tmp19 = (aNeg != bNeg);
				if ((tmp19)){
					tmp16 = aNeg;
				}
				else{
					tmp16 = (tmp1 > tmp2);
				}
			}
			int tmp17;
			if ((tmp16)){
				tmp17 = (int)1;
			}
			else{
				tmp17 = (int)-1;
			}
			return tmp17;
		}
		else{
			int tmp16 = (int(n1) >> int((int)8));
			int tmp17 = tmp16;
			int tmp18 = (int(tmp17) & int((int)255));
			tmp1 = tmp18;
			int tmp19 = (int(n2) >> int((int)8));
			int tmp20 = tmp19;
			int tmp21 = (int(tmp20) & int((int)255));
			tmp2 = tmp21;
			bool tmp22 = (tmp1 != tmp2);
			if ((tmp22)){
				bool tmp23;
				{
					bool tmp24 = (tmp1 < (int)0);
					bool aNeg = tmp24;
					bool tmp25 = (tmp2 < (int)0);
					bool bNeg = tmp25;
					bool tmp26 = (aNeg != bNeg);
					if ((tmp26)){
						tmp23 = aNeg;
					}
					else{
						tmp23 = (tmp1 > tmp2);
					}
				}
				int tmp24;
				if ((tmp23)){
					tmp24 = (int)1;
				}
				else{
					tmp24 = (int)-1;
				}
				return tmp24;
			}
			else{
				int tmp23 = (int(n1) & int((int)255));
				tmp1 = tmp23;
				int tmp24 = (int(n2) & int((int)255));
				tmp2 = tmp24;
				bool tmp25 = (tmp1 != tmp2);
				if ((tmp25)){
					bool tmp26;
					{
						bool tmp27 = (tmp1 < (int)0);
						bool aNeg = tmp27;
						bool tmp28 = (tmp2 < (int)0);
						bool bNeg = tmp28;
						bool tmp29 = (aNeg != bNeg);
						if ((tmp29)){
							tmp26 = aNeg;
						}
						else{
							tmp26 = (tmp1 > tmp2);
						}
					}
					int tmp27;
					if ((tmp26)){
						tmp27 = (int)1;
					}
					else{
						tmp27 = (int)-1;
					}
					return tmp27;
				}
				else{
					return (int)0;
				}
			}
		}
	}
	return (int)0;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(ImageDataUtil_obj,__pixelCompare,return )


ImageDataUtil_obj::ImageDataUtil_obj()
{
}

bool ImageDataUtil_obj::__GetStatic(const ::String &inName, Dynamic &outValue, hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"merge") ) { outValue = merge_dyn(); return true;  }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"resize") ) { outValue = resize_dyn(); return true;  }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"fillRect") ) { outValue = fillRect_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"getPixel") ) { outValue = getPixel_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"setPixel") ) { outValue = setPixel_dyn(); return true;  }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"floodFill") ) { outValue = floodFill_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"getPixels") ) { outValue = getPixels_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"setFormat") ) { outValue = setFormat_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"setPixels") ) { outValue = setPixels_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"threshold") ) { outValue = threshold_dyn(); return true;  }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"copyPixels") ) { outValue = copyPixels_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"getPixel32") ) { outValue = getPixel32_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"setPixel32") ) { outValue = setPixel32_dyn(); return true;  }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"copyChannel") ) { outValue = copyChannel_dyn(); return true;  }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"resizeBuffer") ) { outValue = resizeBuffer_dyn(); return true;  }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"multiplyAlpha") ) { outValue = multiplyAlpha_dyn(); return true;  }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"colorTransform") ) { outValue = colorTransform_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"__pixelCompare") ) { outValue = __pixelCompare_dyn(); return true;  }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"unmultiplyAlpha") ) { outValue = unmultiplyAlpha_dyn(); return true;  }
		break;
	case 18:
		if (HX_FIELD_EQ(inName,"getColorBoundsRect") ) { outValue = getColorBoundsRect_dyn(); return true;  }
	}
	return false;
}

#if HXCPP_SCRIPTABLE
static hx::StorageInfo *sMemberStorageInfo = 0;
static hx::StaticInfo *sStaticStorageInfo = 0;
#endif

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(ImageDataUtil_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(ImageDataUtil_obj::__mClass,"__mClass");
};

#endif

hx::Class ImageDataUtil_obj::__mClass;

static ::String sStaticFields[] = {
	HX_HCSTRING("colorTransform","\x89","\xd7","\x3f","\xad"),
	HX_HCSTRING("copyChannel","\x8e","\x7d","\xe6","\x22"),
	HX_HCSTRING("copyPixels","\xc2","\x54","\x6e","\x42"),
	HX_HCSTRING("fillRect","\x47","\x45","\xb9","\x6c"),
	HX_HCSTRING("floodFill","\x61","\x83","\x8a","\x59"),
	HX_HCSTRING("getColorBoundsRect","\x86","\xad","\xe8","\x80"),
	HX_HCSTRING("getPixel","\x10","\xd6","\x7a","\x22"),
	HX_HCSTRING("getPixel32","\xaf","\xa6","\x68","\xd7"),
	HX_HCSTRING("getPixels","\x63","\x78","\x00","\x09"),
	HX_HCSTRING("merge","\xb8","\xa2","\xc6","\x05"),
	HX_HCSTRING("multiplyAlpha","\x9a","\xf2","\x1c","\x6b"),
	HX_HCSTRING("resize","\xf4","\x59","\x7b","\x08"),
	HX_HCSTRING("resizeBuffer","\x14","\x7a","\xa2","\xb4"),
	HX_HCSTRING("setFormat","\x79","\x04","\x36","\x5d"),
	HX_HCSTRING("setPixel","\x84","\x2f","\xd8","\xd0"),
	HX_HCSTRING("setPixel32","\x23","\x45","\xe6","\xda"),
	HX_HCSTRING("setPixels","\x6f","\x64","\x51","\xec"),
	HX_HCSTRING("threshold","\xab","\xc3","\xa3","\x34"),
	HX_HCSTRING("unmultiplyAlpha","\xa1","\xc8","\x96","\x28"),
	HX_HCSTRING("__pixelCompare","\xdf","\x79","\xe3","\x8d"),
	::String(null()) };

void ImageDataUtil_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("lime.graphics.utils.ImageDataUtil","\x80","\x72","\x23","\xf0");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &ImageDataUtil_obj::__GetStatic;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(sStaticFields);
	__mClass->mMembers = hx::Class_obj::dupFunctions(0 /* sMemberFields */);
	__mClass->mCanCast = hx::TCanCast< ImageDataUtil_obj >;
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
} // end namespace graphics
} // end namespace utils
