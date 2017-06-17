#ifndef INCLUDED_lime_graphics_opengl_ext_EXT_shader_framebuffer_fetch
#define INCLUDED_lime_graphics_opengl_ext_EXT_shader_framebuffer_fetch

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS4(lime,graphics,opengl,ext,EXT_shader_framebuffer_fetch)
namespace lime{
namespace graphics{
namespace opengl{
namespace ext{


class HXCPP_CLASS_ATTRIBUTES  EXT_shader_framebuffer_fetch_obj : public hx::Object{
	public:
		typedef hx::Object super;
		typedef EXT_shader_framebuffer_fetch_obj OBJ_;
		EXT_shader_framebuffer_fetch_obj();
		Void __construct();

	public:
		inline void *operator new( size_t inSize, bool inContainer=false,const char *inName="lime.graphics.opengl.ext.EXT_shader_framebuffer_fetch")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		static hx::ObjectPtr< EXT_shader_framebuffer_fetch_obj > __new();
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~EXT_shader_framebuffer_fetch_obj();

		HX_DO_RTTI_ALL;
		Dynamic __Field(const ::String &inString, hx::PropertyAccess inCallProp);
		Dynamic __SetField(const ::String &inString,const Dynamic &inValue, hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		::String __ToString() const { return HX_HCSTRING("EXT_shader_framebuffer_fetch","\x0c","\x04","\x5a","\x6d"); }

		int FRAGMENT_SHADER_DISCARDS_SAMPLES_EXT;
};

} // end namespace lime
} // end namespace graphics
} // end namespace opengl
} // end namespace ext

#endif /* INCLUDED_lime_graphics_opengl_ext_EXT_shader_framebuffer_fetch */ 
