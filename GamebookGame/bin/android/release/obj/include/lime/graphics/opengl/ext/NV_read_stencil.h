#ifndef INCLUDED_lime_graphics_opengl_ext_NV_read_stencil
#define INCLUDED_lime_graphics_opengl_ext_NV_read_stencil

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS4(lime,graphics,opengl,ext,NV_read_stencil)
namespace lime{
namespace graphics{
namespace opengl{
namespace ext{


class HXCPP_CLASS_ATTRIBUTES  NV_read_stencil_obj : public hx::Object{
	public:
		typedef hx::Object super;
		typedef NV_read_stencil_obj OBJ_;
		NV_read_stencil_obj();
		Void __construct();

	public:
		inline void *operator new( size_t inSize, bool inContainer=false,const char *inName="lime.graphics.opengl.ext.NV_read_stencil")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		static hx::ObjectPtr< NV_read_stencil_obj > __new();
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~NV_read_stencil_obj();

		HX_DO_RTTI_ALL;
		static void __register();
		::String __ToString() const { return HX_HCSTRING("NV_read_stencil","\x6a","\xea","\x92","\xc8"); }

};

} // end namespace lime
} // end namespace graphics
} // end namespace opengl
} // end namespace ext

#endif /* INCLUDED_lime_graphics_opengl_ext_NV_read_stencil */ 
