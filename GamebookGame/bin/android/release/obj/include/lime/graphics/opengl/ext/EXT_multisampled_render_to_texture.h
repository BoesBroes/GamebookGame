#ifndef INCLUDED_lime_graphics_opengl_ext_EXT_multisampled_render_to_texture
#define INCLUDED_lime_graphics_opengl_ext_EXT_multisampled_render_to_texture

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS4(lime,graphics,opengl,ext,EXT_multisampled_render_to_texture)
namespace lime{
namespace graphics{
namespace opengl{
namespace ext{


class HXCPP_CLASS_ATTRIBUTES  EXT_multisampled_render_to_texture_obj : public hx::Object{
	public:
		typedef hx::Object super;
		typedef EXT_multisampled_render_to_texture_obj OBJ_;
		EXT_multisampled_render_to_texture_obj();
		Void __construct();

	public:
		inline void *operator new( size_t inSize, bool inContainer=false,const char *inName="lime.graphics.opengl.ext.EXT_multisampled_render_to_texture")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		static hx::ObjectPtr< EXT_multisampled_render_to_texture_obj > __new();
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~EXT_multisampled_render_to_texture_obj();

		HX_DO_RTTI_ALL;
		Dynamic __Field(const ::String &inString, hx::PropertyAccess inCallProp);
		Dynamic __SetField(const ::String &inString,const Dynamic &inValue, hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		::String __ToString() const { return HX_HCSTRING("EXT_multisampled_render_to_texture","\x40","\xd2","\x98","\x03"); }

		int FRAMEBUFFER_ATTACHMENT_TEXTURE_SAMPLES_EXT;
		int RENDERBUFFER_SAMPLES_EXT;
		int FRAMEBUFFER_INCOMPLETE_MULTISAMPLE_EXT;
		int MAX_SAMPLES_EXT;
};

} // end namespace lime
} // end namespace graphics
} // end namespace opengl
} // end namespace ext

#endif /* INCLUDED_lime_graphics_opengl_ext_EXT_multisampled_render_to_texture */ 
