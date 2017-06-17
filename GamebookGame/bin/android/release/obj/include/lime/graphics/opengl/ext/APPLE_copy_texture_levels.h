#ifndef INCLUDED_lime_graphics_opengl_ext_APPLE_copy_texture_levels
#define INCLUDED_lime_graphics_opengl_ext_APPLE_copy_texture_levels

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS4(lime,graphics,opengl,ext,APPLE_copy_texture_levels)
namespace lime{
namespace graphics{
namespace opengl{
namespace ext{


class HXCPP_CLASS_ATTRIBUTES  APPLE_copy_texture_levels_obj : public hx::Object{
	public:
		typedef hx::Object super;
		typedef APPLE_copy_texture_levels_obj OBJ_;
		APPLE_copy_texture_levels_obj();
		Void __construct();

	public:
		inline void *operator new( size_t inSize, bool inContainer=false,const char *inName="lime.graphics.opengl.ext.APPLE_copy_texture_levels")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		static hx::ObjectPtr< APPLE_copy_texture_levels_obj > __new();
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~APPLE_copy_texture_levels_obj();

		HX_DO_RTTI_ALL;
		static void __register();
		::String __ToString() const { return HX_HCSTRING("APPLE_copy_texture_levels","\x58","\x36","\xee","\xe5"); }

};

} // end namespace lime
} // end namespace graphics
} // end namespace opengl
} // end namespace ext

#endif /* INCLUDED_lime_graphics_opengl_ext_APPLE_copy_texture_levels */ 
