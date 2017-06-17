#ifndef INCLUDED_lime_graphics_opengl_ext_EXT_texture_filter_anisotropic
#define INCLUDED_lime_graphics_opengl_ext_EXT_texture_filter_anisotropic

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS4(lime,graphics,opengl,ext,EXT_texture_filter_anisotropic)
namespace lime{
namespace graphics{
namespace opengl{
namespace ext{


class HXCPP_CLASS_ATTRIBUTES  EXT_texture_filter_anisotropic_obj : public hx::Object{
	public:
		typedef hx::Object super;
		typedef EXT_texture_filter_anisotropic_obj OBJ_;
		EXT_texture_filter_anisotropic_obj();
		Void __construct();

	public:
		inline void *operator new( size_t inSize, bool inContainer=false,const char *inName="lime.graphics.opengl.ext.EXT_texture_filter_anisotropic")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		static hx::ObjectPtr< EXT_texture_filter_anisotropic_obj > __new();
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~EXT_texture_filter_anisotropic_obj();

		HX_DO_RTTI_ALL;
		Dynamic __Field(const ::String &inString, hx::PropertyAccess inCallProp);
		Dynamic __SetField(const ::String &inString,const Dynamic &inValue, hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		::String __ToString() const { return HX_HCSTRING("EXT_texture_filter_anisotropic","\x4c","\x4c","\x32","\x3d"); }

		int TEXTURE_MAX_ANISOTROPY_EXT;
		int MAX_TEXTURE_MAX_ANISOTROPY_EXT;
};

} // end namespace lime
} // end namespace graphics
} // end namespace opengl
} // end namespace ext

#endif /* INCLUDED_lime_graphics_opengl_ext_EXT_texture_filter_anisotropic */ 
