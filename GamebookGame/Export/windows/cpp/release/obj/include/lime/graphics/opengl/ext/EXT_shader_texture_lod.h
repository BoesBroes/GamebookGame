#ifndef INCLUDED_lime_graphics_opengl_ext_EXT_shader_texture_lod
#define INCLUDED_lime_graphics_opengl_ext_EXT_shader_texture_lod

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS4(lime,graphics,opengl,ext,EXT_shader_texture_lod)
namespace lime{
namespace graphics{
namespace opengl{
namespace ext{


class HXCPP_CLASS_ATTRIBUTES  EXT_shader_texture_lod_obj : public hx::Object{
	public:
		typedef hx::Object super;
		typedef EXT_shader_texture_lod_obj OBJ_;
		EXT_shader_texture_lod_obj();
		Void __construct();

	public:
		inline void *operator new( size_t inSize, bool inContainer=false,const char *inName="lime.graphics.opengl.ext.EXT_shader_texture_lod")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		static hx::ObjectPtr< EXT_shader_texture_lod_obj > __new();
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~EXT_shader_texture_lod_obj();

		HX_DO_RTTI_ALL;
		static void __register();
		::String __ToString() const { return HX_HCSTRING("EXT_shader_texture_lod","\xc1","\x4c","\x48","\x65"); }

};

} // end namespace lime
} // end namespace graphics
} // end namespace opengl
} // end namespace ext

#endif /* INCLUDED_lime_graphics_opengl_ext_EXT_shader_texture_lod */ 
