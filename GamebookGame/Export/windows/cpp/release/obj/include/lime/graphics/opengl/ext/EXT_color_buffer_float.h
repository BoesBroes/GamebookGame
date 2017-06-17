#ifndef INCLUDED_lime_graphics_opengl_ext_EXT_color_buffer_float
#define INCLUDED_lime_graphics_opengl_ext_EXT_color_buffer_float

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS4(lime,graphics,opengl,ext,EXT_color_buffer_float)
namespace lime{
namespace graphics{
namespace opengl{
namespace ext{


class HXCPP_CLASS_ATTRIBUTES  EXT_color_buffer_float_obj : public hx::Object{
	public:
		typedef hx::Object super;
		typedef EXT_color_buffer_float_obj OBJ_;
		EXT_color_buffer_float_obj();
		Void __construct();

	public:
		inline void *operator new( size_t inSize, bool inContainer=false,const char *inName="lime.graphics.opengl.ext.EXT_color_buffer_float")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		static hx::ObjectPtr< EXT_color_buffer_float_obj > __new();
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~EXT_color_buffer_float_obj();

		HX_DO_RTTI_ALL;
		static void __register();
		::String __ToString() const { return HX_HCSTRING("EXT_color_buffer_float","\xb7","\x19","\x0b","\xdd"); }

};

} // end namespace lime
} // end namespace graphics
} // end namespace opengl
} // end namespace ext

#endif /* INCLUDED_lime_graphics_opengl_ext_EXT_color_buffer_float */ 
