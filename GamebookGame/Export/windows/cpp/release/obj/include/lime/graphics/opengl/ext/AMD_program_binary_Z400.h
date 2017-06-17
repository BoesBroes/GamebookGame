#ifndef INCLUDED_lime_graphics_opengl_ext_AMD_program_binary_Z400
#define INCLUDED_lime_graphics_opengl_ext_AMD_program_binary_Z400

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS4(lime,graphics,opengl,ext,AMD_program_binary_Z400)
namespace lime{
namespace graphics{
namespace opengl{
namespace ext{


class HXCPP_CLASS_ATTRIBUTES  AMD_program_binary_Z400_obj : public hx::Object{
	public:
		typedef hx::Object super;
		typedef AMD_program_binary_Z400_obj OBJ_;
		AMD_program_binary_Z400_obj();
		Void __construct();

	public:
		inline void *operator new( size_t inSize, bool inContainer=false,const char *inName="lime.graphics.opengl.ext.AMD_program_binary_Z400")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		static hx::ObjectPtr< AMD_program_binary_Z400_obj > __new();
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~AMD_program_binary_Z400_obj();

		HX_DO_RTTI_ALL;
		Dynamic __Field(const ::String &inString, hx::PropertyAccess inCallProp);
		Dynamic __SetField(const ::String &inString,const Dynamic &inValue, hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		::String __ToString() const { return HX_HCSTRING("AMD_program_binary_Z400","\xb6","\x66","\x58","\x28"); }

		int Z400_BINARY_AMD;
};

} // end namespace lime
} // end namespace graphics
} // end namespace opengl
} // end namespace ext

#endif /* INCLUDED_lime_graphics_opengl_ext_AMD_program_binary_Z400 */ 
