#ifndef INCLUDED_lime_graphics_opengl__GLShader_GLShader_Impl_
#define INCLUDED_lime_graphics_opengl__GLShader_GLShader_Impl_

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS3(lime,graphics,opengl,GLObject)
HX_DECLARE_CLASS4(lime,graphics,opengl,_GLShader,GLShader_Impl_)
namespace lime{
namespace graphics{
namespace opengl{
namespace _GLShader{


class HXCPP_CLASS_ATTRIBUTES  GLShader_Impl__obj : public hx::Object{
	public:
		typedef hx::Object super;
		typedef GLShader_Impl__obj OBJ_;
		GLShader_Impl__obj();
		Void __construct();

	public:
		inline void *operator new( size_t inSize, bool inContainer=false,const char *inName="lime.graphics.opengl._GLShader.GLShader_Impl_")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		static hx::ObjectPtr< GLShader_Impl__obj > __new();
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~GLShader_Impl__obj();

		HX_DO_RTTI_ALL;
		static bool __GetStatic(const ::String &inString, Dynamic &outValue, hx::PropertyAccess inCallProp);
		static void __register();
		::String __ToString() const { return HX_HCSTRING("GLShader_Impl_","\x4a","\x13","\x27","\x03"); }

		static ::lime::graphics::opengl::GLObject fromInt( int id);
		static Dynamic fromInt_dyn();

};

} // end namespace lime
} // end namespace graphics
} // end namespace opengl
} // end namespace _GLShader

#endif /* INCLUDED_lime_graphics_opengl__GLShader_GLShader_Impl_ */ 
