#ifndef INCLUDED_lime_graphics_opengl_ext_IMG_program_binary
#define INCLUDED_lime_graphics_opengl_ext_IMG_program_binary

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS4(lime,graphics,opengl,ext,IMG_program_binary)
namespace lime{
namespace graphics{
namespace opengl{
namespace ext{


class HXCPP_CLASS_ATTRIBUTES  IMG_program_binary_obj : public hx::Object{
	public:
		typedef hx::Object super;
		typedef IMG_program_binary_obj OBJ_;
		IMG_program_binary_obj();
		Void __construct();

	public:
		inline void *operator new( size_t inSize, bool inContainer=false,const char *inName="lime.graphics.opengl.ext.IMG_program_binary")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		static hx::ObjectPtr< IMG_program_binary_obj > __new();
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~IMG_program_binary_obj();

		HX_DO_RTTI_ALL;
		Dynamic __Field(const ::String &inString, hx::PropertyAccess inCallProp);
		Dynamic __SetField(const ::String &inString,const Dynamic &inValue, hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		::String __ToString() const { return HX_HCSTRING("IMG_program_binary","\xb8","\x93","\x3a","\x05"); }

		int SGX_PROGRAM_BINARY_IMG;
};

} // end namespace lime
} // end namespace graphics
} // end namespace opengl
} // end namespace ext

#endif /* INCLUDED_lime_graphics_opengl_ext_IMG_program_binary */ 
