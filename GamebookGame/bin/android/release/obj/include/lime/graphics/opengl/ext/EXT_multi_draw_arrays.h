#ifndef INCLUDED_lime_graphics_opengl_ext_EXT_multi_draw_arrays
#define INCLUDED_lime_graphics_opengl_ext_EXT_multi_draw_arrays

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS4(lime,graphics,opengl,ext,EXT_multi_draw_arrays)
namespace lime{
namespace graphics{
namespace opengl{
namespace ext{


class HXCPP_CLASS_ATTRIBUTES  EXT_multi_draw_arrays_obj : public hx::Object{
	public:
		typedef hx::Object super;
		typedef EXT_multi_draw_arrays_obj OBJ_;
		EXT_multi_draw_arrays_obj();
		Void __construct();

	public:
		inline void *operator new( size_t inSize, bool inContainer=false,const char *inName="lime.graphics.opengl.ext.EXT_multi_draw_arrays")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		static hx::ObjectPtr< EXT_multi_draw_arrays_obj > __new();
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~EXT_multi_draw_arrays_obj();

		HX_DO_RTTI_ALL;
		static void __register();
		::String __ToString() const { return HX_HCSTRING("EXT_multi_draw_arrays","\x51","\xb2","\x0b","\x91"); }

};

} // end namespace lime
} // end namespace graphics
} // end namespace opengl
} // end namespace ext

#endif /* INCLUDED_lime_graphics_opengl_ext_EXT_multi_draw_arrays */ 
