#ifndef INCLUDED_lime_graphics_opengl_ext_KHR_texture_compression_astc_ldr
#define INCLUDED_lime_graphics_opengl_ext_KHR_texture_compression_astc_ldr

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS4(lime,graphics,opengl,ext,KHR_texture_compression_astc_ldr)
namespace lime{
namespace graphics{
namespace opengl{
namespace ext{


class HXCPP_CLASS_ATTRIBUTES  KHR_texture_compression_astc_ldr_obj : public hx::Object{
	public:
		typedef hx::Object super;
		typedef KHR_texture_compression_astc_ldr_obj OBJ_;
		KHR_texture_compression_astc_ldr_obj();
		Void __construct();

	public:
		inline void *operator new( size_t inSize, bool inContainer=false,const char *inName="lime.graphics.opengl.ext.KHR_texture_compression_astc_ldr")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		static hx::ObjectPtr< KHR_texture_compression_astc_ldr_obj > __new();
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~KHR_texture_compression_astc_ldr_obj();

		HX_DO_RTTI_ALL;
		Dynamic __Field(const ::String &inString, hx::PropertyAccess inCallProp);
		Dynamic __SetField(const ::String &inString,const Dynamic &inValue, hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		::String __ToString() const { return HX_HCSTRING("KHR_texture_compression_astc_ldr","\x63","\x29","\xb6","\xea"); }

		int COMPRESSED_RGBA_ASTC_4x4_KHR;
		int COMPRESSED_RGBA_ASTC_5x4_KHR;
		int COMPRESSED_RGBA_ASTC_5x5_KHR;
		int COMPRESSED_RGBA_ASTC_6x5_KHR;
		int COMPRESSED_RGBA_ASTC_6x6_KHR;
		int COMPRESSED_RGBA_ASTC_8x5_KHR;
		int COMPRESSED_RGBA_ASTC_8x6_KHR;
		int COMPRESSED_RGBA_ASTC_8x8_KHR;
		int COMPRESSED_RGBA_ASTC_10x5_KHR;
		int COMPRESSED_RGBA_ASTC_10x6_KHR;
		int COMPRESSED_RGBA_ASTC_10x8_KHR;
		int COMPRESSED_RGBA_ASTC_10x10_KHR;
		int COMPRESSED_RGBA_ASTC_12x10_KHR;
		int COMPRESSED_RGBA_ASTC_12x12_KHR;
		int COMPRESSED_SRGB8_ALPHA8_ASTC_4x4_KHR;
		int COMPRESSED_SRGB8_ALPHA8_ASTC_5x4_KHR;
		int COMPRESSED_SRGB8_ALPHA8_ASTC_5x5_KHR;
		int COMPRESSED_SRGB8_ALPHA8_ASTC_6x5_KHR;
		int COMPRESSED_SRGB8_ALPHA8_ASTC_6x6_KHR;
		int COMPRESSED_SRGB8_ALPHA8_ASTC_8x5_KHR;
		int COMPRESSED_SRGB8_ALPHA8_ASTC_8x6_KHR;
		int COMPRESSED_SRGB8_ALPHA8_ASTC_8x8_KHR;
		int COMPRESSED_SRGB8_ALPHA8_ASTC_10x5_KHR;
		int COMPRESSED_SRGB8_ALPHA8_ASTC_10x6_KHR;
		int COMPRESSED_SRGB8_ALPHA8_ASTC_10x8_KHR;
		int COMPRESSED_SRGB8_ALPHA8_ASTC_10x10_KHR;
		int COMPRESSED_SRGB8_ALPHA8_ASTC_12x10_KHR;
		int COMPRESSED_SRGB8_ALPHA8_ASTC_12x12_KHR;
};

} // end namespace lime
} // end namespace graphics
} // end namespace opengl
} // end namespace ext

#endif /* INCLUDED_lime_graphics_opengl_ext_KHR_texture_compression_astc_ldr */ 
