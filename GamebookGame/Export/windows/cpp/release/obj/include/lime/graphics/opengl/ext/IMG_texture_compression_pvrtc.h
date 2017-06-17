#ifndef INCLUDED_lime_graphics_opengl_ext_IMG_texture_compression_pvrtc
#define INCLUDED_lime_graphics_opengl_ext_IMG_texture_compression_pvrtc

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS4(lime,graphics,opengl,ext,IMG_texture_compression_pvrtc)
namespace lime{
namespace graphics{
namespace opengl{
namespace ext{


class HXCPP_CLASS_ATTRIBUTES  IMG_texture_compression_pvrtc_obj : public hx::Object{
	public:
		typedef hx::Object super;
		typedef IMG_texture_compression_pvrtc_obj OBJ_;
		IMG_texture_compression_pvrtc_obj();
		Void __construct();

	public:
		inline void *operator new( size_t inSize, bool inContainer=false,const char *inName="lime.graphics.opengl.ext.IMG_texture_compression_pvrtc")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		static hx::ObjectPtr< IMG_texture_compression_pvrtc_obj > __new();
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~IMG_texture_compression_pvrtc_obj();

		HX_DO_RTTI_ALL;
		Dynamic __Field(const ::String &inString, hx::PropertyAccess inCallProp);
		Dynamic __SetField(const ::String &inString,const Dynamic &inValue, hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		::String __ToString() const { return HX_HCSTRING("IMG_texture_compression_pvrtc","\x02","\x61","\x85","\xd1"); }

		int COMPRESSED_RGB_PVRTC_4BPPV1_IMG;
		int COMPRESSED_RGB_PVRTC_2BPPV1_IMG;
		int COMPRESSED_RGBA_PVRTC_4BPPV1_IMG;
		int COMPRESSED_RGBA_PVRTC_2BPPV1_IMG;
};

} // end namespace lime
} // end namespace graphics
} // end namespace opengl
} // end namespace ext

#endif /* INCLUDED_lime_graphics_opengl_ext_IMG_texture_compression_pvrtc */ 
