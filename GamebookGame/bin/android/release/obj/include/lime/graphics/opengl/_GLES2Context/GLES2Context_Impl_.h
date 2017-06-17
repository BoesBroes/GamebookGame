#ifndef INCLUDED_lime_graphics_opengl__GLES2Context_GLES2Context_Impl_
#define INCLUDED_lime_graphics_opengl__GLES2Context_GLES2Context_Impl_

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS3(lime,_backend,native,NativeGLRenderContext)
HX_DECLARE_CLASS4(lime,graphics,opengl,_GLES2Context,GLES2Context_Impl_)
namespace lime{
namespace graphics{
namespace opengl{
namespace _GLES2Context{


class HXCPP_CLASS_ATTRIBUTES  GLES2Context_Impl__obj : public hx::Object{
	public:
		typedef hx::Object super;
		typedef GLES2Context_Impl__obj OBJ_;
		GLES2Context_Impl__obj();
		Void __construct();

	public:
		inline void *operator new( size_t inSize, bool inContainer=false,const char *inName="lime.graphics.opengl._GLES2Context.GLES2Context_Impl_")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		static hx::ObjectPtr< GLES2Context_Impl__obj > __new();
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~GLES2Context_Impl__obj();

		HX_DO_RTTI_ALL;
		static bool __GetStatic(const ::String &inString, Dynamic &outValue, hx::PropertyAccess inCallProp);
		static void __register();
		::String __ToString() const { return HX_HCSTRING("GLES2Context_Impl_","\x50","\x81","\x5c","\x6f"); }

		static ::lime::_backend::native::NativeGLRenderContext fromGL( ::hx::Class gl);
		static Dynamic fromGL_dyn();

};

} // end namespace lime
} // end namespace graphics
} // end namespace opengl
} // end namespace _GLES2Context

#endif /* INCLUDED_lime_graphics_opengl__GLES2Context_GLES2Context_Impl_ */ 
