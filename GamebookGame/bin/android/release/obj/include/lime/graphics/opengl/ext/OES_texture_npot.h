#ifndef INCLUDED_lime_graphics_opengl_ext_OES_texture_npot
#define INCLUDED_lime_graphics_opengl_ext_OES_texture_npot

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS4(lime,graphics,opengl,ext,OES_texture_npot)
namespace lime{
namespace graphics{
namespace opengl{
namespace ext{


class HXCPP_CLASS_ATTRIBUTES  OES_texture_npot_obj : public hx::Object{
	public:
		typedef hx::Object super;
		typedef OES_texture_npot_obj OBJ_;
		OES_texture_npot_obj();
		Void __construct();

	public:
		inline void *operator new( size_t inSize, bool inContainer=false,const char *inName="lime.graphics.opengl.ext.OES_texture_npot")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		static hx::ObjectPtr< OES_texture_npot_obj > __new();
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~OES_texture_npot_obj();

		HX_DO_RTTI_ALL;
		static void __register();
		::String __ToString() const { return HX_HCSTRING("OES_texture_npot","\x4d","\x89","\xdd","\x01"); }

};

} // end namespace lime
} // end namespace graphics
} // end namespace opengl
} // end namespace ext

#endif /* INCLUDED_lime_graphics_opengl_ext_OES_texture_npot */ 
