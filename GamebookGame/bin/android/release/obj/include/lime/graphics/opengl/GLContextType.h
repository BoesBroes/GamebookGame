#ifndef INCLUDED_lime_graphics_opengl_GLContextType
#define INCLUDED_lime_graphics_opengl_GLContextType

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS3(lime,graphics,opengl,GLContextType)
namespace lime{
namespace graphics{
namespace opengl{


class GLContextType_obj : public hx::EnumBase_obj
{
	typedef hx::EnumBase_obj super;
		typedef GLContextType_obj OBJ_;

	public:
		GLContextType_obj() {};
		HX_DO_ENUM_RTTI;
		static void __boot();
		static void __register();
		::String GetEnumName( ) const { return HX_HCSTRING("lime.graphics.opengl.GLContextType","\x4f","\xc5","\x88","\xac"); }
		::String __ToString() const { return HX_HCSTRING("GLContextType.","\x8a","\x15","\x7a","\x1c") + tag; }

		static ::lime::graphics::opengl::GLContextType GLES;
		static inline ::lime::graphics::opengl::GLContextType GLES_dyn() { return GLES; }
		static ::lime::graphics::opengl::GLContextType OPENGL;
		static inline ::lime::graphics::opengl::GLContextType OPENGL_dyn() { return OPENGL; }
		static ::lime::graphics::opengl::GLContextType WEBGL;
		static inline ::lime::graphics::opengl::GLContextType WEBGL_dyn() { return WEBGL; }
};

} // end namespace lime
} // end namespace graphics
} // end namespace opengl

#endif /* INCLUDED_lime_graphics_opengl_GLContextType */ 
