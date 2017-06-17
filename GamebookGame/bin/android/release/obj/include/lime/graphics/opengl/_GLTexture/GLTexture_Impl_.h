#ifndef INCLUDED_lime_graphics_opengl__GLTexture_GLTexture_Impl_
#define INCLUDED_lime_graphics_opengl__GLTexture_GLTexture_Impl_

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS3(lime,graphics,opengl,GLObject)
HX_DECLARE_CLASS4(lime,graphics,opengl,_GLTexture,GLTexture_Impl_)
namespace lime{
namespace graphics{
namespace opengl{
namespace _GLTexture{


class HXCPP_CLASS_ATTRIBUTES  GLTexture_Impl__obj : public hx::Object{
	public:
		typedef hx::Object super;
		typedef GLTexture_Impl__obj OBJ_;
		GLTexture_Impl__obj();
		Void __construct();

	public:
		inline void *operator new( size_t inSize, bool inContainer=false,const char *inName="lime.graphics.opengl._GLTexture.GLTexture_Impl_")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		static hx::ObjectPtr< GLTexture_Impl__obj > __new();
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~GLTexture_Impl__obj();

		HX_DO_RTTI_ALL;
		static bool __GetStatic(const ::String &inString, Dynamic &outValue, hx::PropertyAccess inCallProp);
		static void __register();
		::String __ToString() const { return HX_HCSTRING("GLTexture_Impl_","\x56","\xfa","\x3a","\x10"); }

		static ::lime::graphics::opengl::GLObject fromInt( int id);
		static Dynamic fromInt_dyn();

};

} // end namespace lime
} // end namespace graphics
} // end namespace opengl
} // end namespace _GLTexture

#endif /* INCLUDED_lime_graphics_opengl__GLTexture_GLTexture_Impl_ */ 
