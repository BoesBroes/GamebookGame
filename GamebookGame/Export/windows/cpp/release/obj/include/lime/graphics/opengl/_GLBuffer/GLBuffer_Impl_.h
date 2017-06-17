#ifndef INCLUDED_lime_graphics_opengl__GLBuffer_GLBuffer_Impl_
#define INCLUDED_lime_graphics_opengl__GLBuffer_GLBuffer_Impl_

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS3(lime,graphics,opengl,GLObject)
HX_DECLARE_CLASS4(lime,graphics,opengl,_GLBuffer,GLBuffer_Impl_)
namespace lime{
namespace graphics{
namespace opengl{
namespace _GLBuffer{


class HXCPP_CLASS_ATTRIBUTES  GLBuffer_Impl__obj : public hx::Object{
	public:
		typedef hx::Object super;
		typedef GLBuffer_Impl__obj OBJ_;
		GLBuffer_Impl__obj();
		Void __construct();

	public:
		inline void *operator new( size_t inSize, bool inContainer=false,const char *inName="lime.graphics.opengl._GLBuffer.GLBuffer_Impl_")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		static hx::ObjectPtr< GLBuffer_Impl__obj > __new();
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~GLBuffer_Impl__obj();

		HX_DO_RTTI_ALL;
		static bool __GetStatic(const ::String &inString, Dynamic &outValue, hx::PropertyAccess inCallProp);
		static void __register();
		::String __ToString() const { return HX_HCSTRING("GLBuffer_Impl_","\x65","\x67","\x13","\x98"); }

		static ::lime::graphics::opengl::GLObject fromInt( int id);
		static Dynamic fromInt_dyn();

};

} // end namespace lime
} // end namespace graphics
} // end namespace opengl
} // end namespace _GLBuffer

#endif /* INCLUDED_lime_graphics_opengl__GLBuffer_GLBuffer_Impl_ */ 
