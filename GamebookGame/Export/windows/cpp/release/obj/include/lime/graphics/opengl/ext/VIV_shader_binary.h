#ifndef INCLUDED_lime_graphics_opengl_ext_VIV_shader_binary
#define INCLUDED_lime_graphics_opengl_ext_VIV_shader_binary

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS4(lime,graphics,opengl,ext,VIV_shader_binary)
namespace lime{
namespace graphics{
namespace opengl{
namespace ext{


class HXCPP_CLASS_ATTRIBUTES  VIV_shader_binary_obj : public hx::Object{
	public:
		typedef hx::Object super;
		typedef VIV_shader_binary_obj OBJ_;
		VIV_shader_binary_obj();
		Void __construct();

	public:
		inline void *operator new( size_t inSize, bool inContainer=false,const char *inName="lime.graphics.opengl.ext.VIV_shader_binary")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		static hx::ObjectPtr< VIV_shader_binary_obj > __new();
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~VIV_shader_binary_obj();

		HX_DO_RTTI_ALL;
		Dynamic __Field(const ::String &inString, hx::PropertyAccess inCallProp);
		Dynamic __SetField(const ::String &inString,const Dynamic &inValue, hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		::String __ToString() const { return HX_HCSTRING("VIV_shader_binary","\x5f","\x4e","\x50","\x1f"); }

		int SHADER_BINARY_VIV;
};

} // end namespace lime
} // end namespace graphics
} // end namespace opengl
} // end namespace ext

#endif /* INCLUDED_lime_graphics_opengl_ext_VIV_shader_binary */ 
