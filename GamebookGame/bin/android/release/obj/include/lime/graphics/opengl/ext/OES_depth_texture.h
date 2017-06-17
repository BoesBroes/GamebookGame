#ifndef INCLUDED_lime_graphics_opengl_ext_OES_depth_texture
#define INCLUDED_lime_graphics_opengl_ext_OES_depth_texture

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS4(lime,graphics,opengl,ext,OES_depth_texture)
namespace lime{
namespace graphics{
namespace opengl{
namespace ext{


class HXCPP_CLASS_ATTRIBUTES  OES_depth_texture_obj : public hx::Object{
	public:
		typedef hx::Object super;
		typedef OES_depth_texture_obj OBJ_;
		OES_depth_texture_obj();
		Void __construct();

	public:
		inline void *operator new( size_t inSize, bool inContainer=false,const char *inName="lime.graphics.opengl.ext.OES_depth_texture")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		static hx::ObjectPtr< OES_depth_texture_obj > __new();
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~OES_depth_texture_obj();

		HX_DO_RTTI_ALL;
		static void __register();
		::String __ToString() const { return HX_HCSTRING("OES_depth_texture","\xdd","\xed","\x8f","\xe2"); }

};

} // end namespace lime
} // end namespace graphics
} // end namespace opengl
} // end namespace ext

#endif /* INCLUDED_lime_graphics_opengl_ext_OES_depth_texture */ 
