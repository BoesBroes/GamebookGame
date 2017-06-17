#ifndef INCLUDED_lime_graphics_opengl_ext_OES_get_program_binary
#define INCLUDED_lime_graphics_opengl_ext_OES_get_program_binary

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS4(lime,graphics,opengl,ext,OES_get_program_binary)
namespace lime{
namespace graphics{
namespace opengl{
namespace ext{


class HXCPP_CLASS_ATTRIBUTES  OES_get_program_binary_obj : public hx::Object{
	public:
		typedef hx::Object super;
		typedef OES_get_program_binary_obj OBJ_;
		OES_get_program_binary_obj();
		Void __construct();

	public:
		inline void *operator new( size_t inSize, bool inContainer=false,const char *inName="lime.graphics.opengl.ext.OES_get_program_binary")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		static hx::ObjectPtr< OES_get_program_binary_obj > __new();
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~OES_get_program_binary_obj();

		HX_DO_RTTI_ALL;
		Dynamic __Field(const ::String &inString, hx::PropertyAccess inCallProp);
		Dynamic __SetField(const ::String &inString,const Dynamic &inValue, hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		::String __ToString() const { return HX_HCSTRING("OES_get_program_binary","\x27","\xf4","\x1a","\x01"); }

		int PROGRAM_BINARY_LENGTH_OES;
		int NUM_PROGRAM_BINARY_FORMATS_OES;
		int PROGRAM_BINARY_FORMATS_OES;
};

} // end namespace lime
} // end namespace graphics
} // end namespace opengl
} // end namespace ext

#endif /* INCLUDED_lime_graphics_opengl_ext_OES_get_program_binary */ 
