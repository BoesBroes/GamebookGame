#ifndef INCLUDED_lime_graphics_opengl_ext_OES_EGL_image_external
#define INCLUDED_lime_graphics_opengl_ext_OES_EGL_image_external

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS4(lime,graphics,opengl,ext,OES_EGL_image_external)
namespace lime{
namespace graphics{
namespace opengl{
namespace ext{


class HXCPP_CLASS_ATTRIBUTES  OES_EGL_image_external_obj : public hx::Object{
	public:
		typedef hx::Object super;
		typedef OES_EGL_image_external_obj OBJ_;
		OES_EGL_image_external_obj();
		Void __construct();

	public:
		inline void *operator new( size_t inSize, bool inContainer=false,const char *inName="lime.graphics.opengl.ext.OES_EGL_image_external")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		static hx::ObjectPtr< OES_EGL_image_external_obj > __new();
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~OES_EGL_image_external_obj();

		HX_DO_RTTI_ALL;
		Dynamic __Field(const ::String &inString, hx::PropertyAccess inCallProp);
		Dynamic __SetField(const ::String &inString,const Dynamic &inValue, hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		::String __ToString() const { return HX_HCSTRING("OES_EGL_image_external","\xe6","\x6c","\x9f","\x93"); }

		int TEXTURE_EXTERNAL_OES;
		int SAMPLER_EXTERNAL_OES;
		int TEXTURE_BINDING_EXTERNAL_OES;
		int REQUIRED_TEXTURE_IMAGE_UNITS_OES;
};

} // end namespace lime
} // end namespace graphics
} // end namespace opengl
} // end namespace ext

#endif /* INCLUDED_lime_graphics_opengl_ext_OES_EGL_image_external */ 
