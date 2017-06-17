#ifndef INCLUDED_lime_graphics_opengl__GLSync_GLSync_Impl_
#define INCLUDED_lime_graphics_opengl__GLSync_GLSync_Impl_

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS3(lime,graphics,opengl,GLObject)
HX_DECLARE_CLASS4(lime,graphics,opengl,_GLSync,GLSync_Impl_)
namespace lime{
namespace graphics{
namespace opengl{
namespace _GLSync{


class HXCPP_CLASS_ATTRIBUTES  GLSync_Impl__obj : public hx::Object{
	public:
		typedef hx::Object super;
		typedef GLSync_Impl__obj OBJ_;
		GLSync_Impl__obj();
		Void __construct();

	public:
		inline void *operator new( size_t inSize, bool inContainer=false,const char *inName="lime.graphics.opengl._GLSync.GLSync_Impl_")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		static hx::ObjectPtr< GLSync_Impl__obj > __new();
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~GLSync_Impl__obj();

		HX_DO_RTTI_ALL;
		static bool __GetStatic(const ::String &inString, Dynamic &outValue, hx::PropertyAccess inCallProp);
		static void __register();
		::String __ToString() const { return HX_HCSTRING("GLSync_Impl_","\xc0","\xef","\x61","\x7f"); }

		static ::lime::graphics::opengl::GLObject fromInt( int id);
		static Dynamic fromInt_dyn();

};

} // end namespace lime
} // end namespace graphics
} // end namespace opengl
} // end namespace _GLSync

#endif /* INCLUDED_lime_graphics_opengl__GLSync_GLSync_Impl_ */ 
