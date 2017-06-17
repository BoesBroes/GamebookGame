#ifndef INCLUDED_lime_graphics_opengl_ext_OES_standard_derivatives
#define INCLUDED_lime_graphics_opengl_ext_OES_standard_derivatives

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS4(lime,graphics,opengl,ext,OES_standard_derivatives)
namespace lime{
namespace graphics{
namespace opengl{
namespace ext{


class HXCPP_CLASS_ATTRIBUTES  OES_standard_derivatives_obj : public hx::Object{
	public:
		typedef hx::Object super;
		typedef OES_standard_derivatives_obj OBJ_;
		OES_standard_derivatives_obj();
		Void __construct();

	public:
		inline void *operator new( size_t inSize, bool inContainer=false,const char *inName="lime.graphics.opengl.ext.OES_standard_derivatives")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		static hx::ObjectPtr< OES_standard_derivatives_obj > __new();
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~OES_standard_derivatives_obj();

		HX_DO_RTTI_ALL;
		Dynamic __Field(const ::String &inString, hx::PropertyAccess inCallProp);
		Dynamic __SetField(const ::String &inString,const Dynamic &inValue, hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		::String __ToString() const { return HX_HCSTRING("OES_standard_derivatives","\x8c","\xcb","\x00","\x04"); }

		int FRAGMENT_SHADER_DERIVATIVE_HINT_OES;
};

} // end namespace lime
} // end namespace graphics
} // end namespace opengl
} // end namespace ext

#endif /* INCLUDED_lime_graphics_opengl_ext_OES_standard_derivatives */ 
