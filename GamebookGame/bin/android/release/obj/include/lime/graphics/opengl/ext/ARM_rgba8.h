#ifndef INCLUDED_lime_graphics_opengl_ext_ARM_rgba8
#define INCLUDED_lime_graphics_opengl_ext_ARM_rgba8

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS4(lime,graphics,opengl,ext,ARM_rgba8)
namespace lime{
namespace graphics{
namespace opengl{
namespace ext{


class HXCPP_CLASS_ATTRIBUTES  ARM_rgba8_obj : public hx::Object{
	public:
		typedef hx::Object super;
		typedef ARM_rgba8_obj OBJ_;
		ARM_rgba8_obj();
		Void __construct();

	public:
		inline void *operator new( size_t inSize, bool inContainer=false,const char *inName="lime.graphics.opengl.ext.ARM_rgba8")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		static hx::ObjectPtr< ARM_rgba8_obj > __new();
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~ARM_rgba8_obj();

		HX_DO_RTTI_ALL;
		static void __register();
		::String __ToString() const { return HX_HCSTRING("ARM_rgba8","\x81","\x03","\x5e","\x47"); }

};

} // end namespace lime
} // end namespace graphics
} // end namespace opengl
} // end namespace ext

#endif /* INCLUDED_lime_graphics_opengl_ext_ARM_rgba8 */ 
