#ifndef INCLUDED_lime_graphics_opengl_ext_EXT_sRGB
#define INCLUDED_lime_graphics_opengl_ext_EXT_sRGB

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS4(lime,graphics,opengl,ext,EXT_sRGB)
namespace lime{
namespace graphics{
namespace opengl{
namespace ext{


class HXCPP_CLASS_ATTRIBUTES  EXT_sRGB_obj : public hx::Object{
	public:
		typedef hx::Object super;
		typedef EXT_sRGB_obj OBJ_;
		EXT_sRGB_obj();
		Void __construct();

	public:
		inline void *operator new( size_t inSize, bool inContainer=false,const char *inName="lime.graphics.opengl.ext.EXT_sRGB")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		static hx::ObjectPtr< EXT_sRGB_obj > __new();
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~EXT_sRGB_obj();

		HX_DO_RTTI_ALL;
		Dynamic __Field(const ::String &inString, hx::PropertyAccess inCallProp);
		Dynamic __SetField(const ::String &inString,const Dynamic &inValue, hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		::String __ToString() const { return HX_HCSTRING("EXT_sRGB","\x18","\x00","\x47","\x4b"); }

		int SRGB_EXT;
		int SRGB_ALPHA_EXT;
		int SRGB8_ALPHA8_EXT;
		int FRAMEBUFFER_ATTACHMENT_COLOR_ENCODING_EXT;
};

} // end namespace lime
} // end namespace graphics
} // end namespace opengl
} // end namespace ext

#endif /* INCLUDED_lime_graphics_opengl_ext_EXT_sRGB */ 
