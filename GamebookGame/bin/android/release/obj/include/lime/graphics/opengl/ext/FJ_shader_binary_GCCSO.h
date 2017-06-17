#ifndef INCLUDED_lime_graphics_opengl_ext_FJ_shader_binary_GCCSO
#define INCLUDED_lime_graphics_opengl_ext_FJ_shader_binary_GCCSO

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS4(lime,graphics,opengl,ext,FJ_shader_binary_GCCSO)
namespace lime{
namespace graphics{
namespace opengl{
namespace ext{


class HXCPP_CLASS_ATTRIBUTES  FJ_shader_binary_GCCSO_obj : public hx::Object{
	public:
		typedef hx::Object super;
		typedef FJ_shader_binary_GCCSO_obj OBJ_;
		FJ_shader_binary_GCCSO_obj();
		Void __construct();

	public:
		inline void *operator new( size_t inSize, bool inContainer=false,const char *inName="lime.graphics.opengl.ext.FJ_shader_binary_GCCSO")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		static hx::ObjectPtr< FJ_shader_binary_GCCSO_obj > __new();
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~FJ_shader_binary_GCCSO_obj();

		HX_DO_RTTI_ALL;
		Dynamic __Field(const ::String &inString, hx::PropertyAccess inCallProp);
		Dynamic __SetField(const ::String &inString,const Dynamic &inValue, hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		::String __ToString() const { return HX_HCSTRING("FJ_shader_binary_GCCSO","\xe4","\xa3","\xc9","\x4b"); }

		int GCCSO_SHADER_BINARY_FJ;
};

} // end namespace lime
} // end namespace graphics
} // end namespace opengl
} // end namespace ext

#endif /* INCLUDED_lime_graphics_opengl_ext_FJ_shader_binary_GCCSO */ 
