#ifndef INCLUDED_lime_graphics_utils_ImageDataUtil
#define INCLUDED_lime_graphics_utils_ImageDataUtil

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS2(haxe,io,Bytes)
HX_DECLARE_CLASS2(lime,graphics,Image)
HX_DECLARE_CLASS2(lime,graphics,ImageChannel)
HX_DECLARE_CLASS3(lime,graphics,utils,ImageDataUtil)
HX_DECLARE_CLASS2(lime,math,Rectangle)
HX_DECLARE_CLASS2(lime,math,Vector2)
HX_DECLARE_CLASS2(lime,utils,ArrayBufferView)
namespace lime{
namespace graphics{
namespace utils{


class HXCPP_CLASS_ATTRIBUTES  ImageDataUtil_obj : public hx::Object{
	public:
		typedef hx::Object super;
		typedef ImageDataUtil_obj OBJ_;
		ImageDataUtil_obj();
		Void __construct();

	public:
		inline void *operator new( size_t inSize, bool inContainer=false,const char *inName="lime.graphics.utils.ImageDataUtil")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		static hx::ObjectPtr< ImageDataUtil_obj > __new();
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~ImageDataUtil_obj();

		HX_DO_RTTI_ALL;
		static bool __GetStatic(const ::String &inString, Dynamic &outValue, hx::PropertyAccess inCallProp);
		static void __register();
		::String __ToString() const { return HX_HCSTRING("ImageDataUtil","\xa7","\xb5","\xb4","\xb4"); }

		static Void colorTransform( ::lime::graphics::Image image,::lime::math::Rectangle rect,::lime::utils::ArrayBufferView colorMatrix);
		static Dynamic colorTransform_dyn();

		static Void copyChannel( ::lime::graphics::Image image,::lime::graphics::Image sourceImage,::lime::math::Rectangle sourceRect,::lime::math::Vector2 destPoint,::lime::graphics::ImageChannel sourceChannel,::lime::graphics::ImageChannel destChannel);
		static Dynamic copyChannel_dyn();

		static Void copyPixels( ::lime::graphics::Image image,::lime::graphics::Image sourceImage,::lime::math::Rectangle sourceRect,::lime::math::Vector2 destPoint,::lime::graphics::Image alphaImage,::lime::math::Vector2 alphaPoint,hx::Null< bool >  mergeAlpha);
		static Dynamic copyPixels_dyn();

		static Void fillRect( ::lime::graphics::Image image,::lime::math::Rectangle rect,int color,int format);
		static Dynamic fillRect_dyn();

		static Void floodFill( ::lime::graphics::Image image,int x,int y,int color,int format);
		static Dynamic floodFill_dyn();

		static ::lime::math::Rectangle getColorBoundsRect( ::lime::graphics::Image image,int mask,int color,hx::Null< bool >  findColor,int format);
		static Dynamic getColorBoundsRect_dyn();

		static int getPixel( ::lime::graphics::Image image,int x,int y,int format);
		static Dynamic getPixel_dyn();

		static int getPixel32( ::lime::graphics::Image image,int x,int y,int format);
		static Dynamic getPixel32_dyn();

		static ::haxe::io::Bytes getPixels( ::lime::graphics::Image image,::lime::math::Rectangle rect,int format);
		static Dynamic getPixels_dyn();

		static Void merge( ::lime::graphics::Image image,::lime::graphics::Image sourceImage,::lime::math::Rectangle sourceRect,::lime::math::Vector2 destPoint,int redMultiplier,int greenMultiplier,int blueMultiplier,int alphaMultiplier);
		static Dynamic merge_dyn();

		static Void multiplyAlpha( ::lime::graphics::Image image);
		static Dynamic multiplyAlpha_dyn();

		static Void resize( ::lime::graphics::Image image,int newWidth,int newHeight);
		static Dynamic resize_dyn();

		static Void resizeBuffer( ::lime::graphics::Image image,int newWidth,int newHeight);
		static Dynamic resizeBuffer_dyn();

		static Void setFormat( ::lime::graphics::Image image,int format);
		static Dynamic setFormat_dyn();

		static Void setPixel( ::lime::graphics::Image image,int x,int y,int color,int format);
		static Dynamic setPixel_dyn();

		static Void setPixel32( ::lime::graphics::Image image,int x,int y,int color,int format);
		static Dynamic setPixel32_dyn();

		static Void setPixels( ::lime::graphics::Image image,::lime::math::Rectangle rect,::haxe::io::Bytes bytes,int format);
		static Dynamic setPixels_dyn();

		static int threshold( ::lime::graphics::Image image,::lime::graphics::Image sourceImage,::lime::math::Rectangle sourceRect,::lime::math::Vector2 destPoint,::String operation,int threshold,int color,int mask,bool copySource,int format);
		static Dynamic threshold_dyn();

		static Void unmultiplyAlpha( ::lime::graphics::Image image);
		static Dynamic unmultiplyAlpha_dyn();

		static int __pixelCompare( int n1,int n2);
		static Dynamic __pixelCompare_dyn();

};

} // end namespace lime
} // end namespace graphics
} // end namespace utils

#endif /* INCLUDED_lime_graphics_utils_ImageDataUtil */ 
