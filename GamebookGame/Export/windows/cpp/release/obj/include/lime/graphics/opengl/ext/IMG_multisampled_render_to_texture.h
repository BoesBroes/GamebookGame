#ifndef INCLUDED_lime_graphics_opengl_ext_IMG_multisampled_render_to_texture
#define INCLUDED_lime_graphics_opengl_ext_IMG_multisampled_render_to_texture

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS4(lime,graphics,opengl,ext,IMG_multisampled_render_to_texture)
namespace lime{
namespace graphics{
namespace opengl{
namespace ext{


class HXCPP_CLASS_ATTRIBUTES  IMG_multisampled_render_to_texture_obj : public hx::Object{
	public:
		typedef hx::Object super;
		typedef IMG_multisampled_render_to_texture_obj OBJ_;
		IMG_multisampled_render_to_texture_obj();
		Void __construct();

	public:
		inline void *operator new( size_t inSize, bool inContainer=false,const char *inName="lime.graphics.opengl.ext.IMG_multisampled_render_to_texture")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		static hx::ObjectPtr< IMG_multisampled_render_to_texture_obj > __new();
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~IMG_multisampled_render_to_texture_obj();

		HX_DO_RTTI_ALL;
		Dynamic __Field(const ::String &inString, hx::PropertyAccess inCallProp);
		Dynamic __SetField(const ::String &inString,const Dynamic &inValue, hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		::String __ToString() const { return HX_HCSTRING("IMG_multisampled_render_to_texture","\x1e","\x8d","\x48","\x50"); }

		int RENDERBUFFER_SAMPLES_IMG;
		int FRAMEBUFFER_INCOMPLETE_MULTISAMPLE_IMG;
		int MAX_SAMPLES_IMG;
		int TEXTURE_SAMPLES_IMG;
};

} // end namespace lime
} // end namespace graphics
} // end namespace opengl
} // end namespace ext

#endif /* INCLUDED_lime_graphics_opengl_ext_IMG_multisampled_render_to_texture */ 
