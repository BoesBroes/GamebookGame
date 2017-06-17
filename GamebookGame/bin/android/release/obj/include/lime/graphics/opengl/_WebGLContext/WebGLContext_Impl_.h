#ifndef INCLUDED_lime_graphics_opengl__WebGLContext_WebGLContext_Impl_
#define INCLUDED_lime_graphics_opengl__WebGLContext_WebGLContext_Impl_

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS3(lime,_backend,native,NativeGLRenderContext)
HX_DECLARE_CLASS4(lime,graphics,opengl,_WebGLContext,WebGLContext_Impl_)
HX_DECLARE_CLASS2(lime,utils,ArrayBufferView)
namespace lime{
namespace graphics{
namespace opengl{
namespace _WebGLContext{


class HXCPP_CLASS_ATTRIBUTES  WebGLContext_Impl__obj : public hx::Object{
	public:
		typedef hx::Object super;
		typedef WebGLContext_Impl__obj OBJ_;
		WebGLContext_Impl__obj();
		Void __construct();

	public:
		inline void *operator new( size_t inSize, bool inContainer=false,const char *inName="lime.graphics.opengl._WebGLContext.WebGLContext_Impl_")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		static hx::ObjectPtr< WebGLContext_Impl__obj > __new();
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~WebGLContext_Impl__obj();

		HX_DO_RTTI_ALL;
		static bool __GetStatic(const ::String &inString, Dynamic &outValue, hx::PropertyAccess inCallProp);
		static void __register();
		::String __ToString() const { return HX_HCSTRING("WebGLContext_Impl_","\x76","\x94","\xae","\xb9"); }

		static Void bufferData( ::lime::_backend::native::NativeGLRenderContext this1,int target,::lime::utils::ArrayBufferView srcData,int usage);
		static Dynamic bufferData_dyn();

		static Void bufferSubData( ::lime::_backend::native::NativeGLRenderContext this1,int target,int offset,::lime::utils::ArrayBufferView srcData);
		static Dynamic bufferSubData_dyn();

		static Void compressedTexImage2D( ::lime::_backend::native::NativeGLRenderContext this1,int target,int level,int internalformat,int width,int height,int border,::lime::utils::ArrayBufferView srcData);
		static Dynamic compressedTexImage2D_dyn();

		static Void compressedTexSubImage2D( ::lime::_backend::native::NativeGLRenderContext this1,int target,int level,int xoffset,int yoffset,int width,int height,int format,::lime::utils::ArrayBufferView srcData);
		static Dynamic compressedTexSubImage2D_dyn();

		static Void readPixels( ::lime::_backend::native::NativeGLRenderContext this1,int x,int y,int width,int height,int format,int type,::lime::utils::ArrayBufferView pixels);
		static Dynamic readPixels_dyn();

		static Void texImage2D( ::lime::_backend::native::NativeGLRenderContext this1,int target,int level,int internalformat,int width,int height,int border,int format,int type,::lime::utils::ArrayBufferView srcData);
		static Dynamic texImage2D_dyn();

		static Void texSubImage2D( ::lime::_backend::native::NativeGLRenderContext this1,int target,int level,int xoffset,int yoffset,int width,int height,int format,int type,::lime::utils::ArrayBufferView srcData,hx::Null< int >  srcOffset);
		static Dynamic texSubImage2D_dyn();

		static Void uniformMatrix2fv( ::lime::_backend::native::NativeGLRenderContext this1,int location,bool transpose,::lime::utils::ArrayBufferView v);
		static Dynamic uniformMatrix2fv_dyn();

		static Void uniformMatrix3fv( ::lime::_backend::native::NativeGLRenderContext this1,int location,bool transpose,::lime::utils::ArrayBufferView v);
		static Dynamic uniformMatrix3fv_dyn();

		static Void uniformMatrix4fv( ::lime::_backend::native::NativeGLRenderContext this1,int location,bool transpose,::lime::utils::ArrayBufferView v);
		static Dynamic uniformMatrix4fv_dyn();

		static ::lime::_backend::native::NativeGLRenderContext fromGL( ::hx::Class gl);
		static Dynamic fromGL_dyn();

		static ::lime::_backend::native::NativeGLRenderContext fromGLES2Context( ::lime::_backend::native::NativeGLRenderContext gl);
		static Dynamic fromGLES2Context_dyn();

		static ::lime::_backend::native::NativeGLRenderContext fromGLES3Context( ::lime::_backend::native::NativeGLRenderContext gl);
		static Dynamic fromGLES3Context_dyn();

};

} // end namespace lime
} // end namespace graphics
} // end namespace opengl
} // end namespace _WebGLContext

#endif /* INCLUDED_lime_graphics_opengl__WebGLContext_WebGLContext_Impl_ */ 
