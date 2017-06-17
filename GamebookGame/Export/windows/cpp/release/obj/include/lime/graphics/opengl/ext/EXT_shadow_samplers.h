#ifndef INCLUDED_lime_graphics_opengl_ext_EXT_shadow_samplers
#define INCLUDED_lime_graphics_opengl_ext_EXT_shadow_samplers

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS4(lime,graphics,opengl,ext,EXT_shadow_samplers)
namespace lime{
namespace graphics{
namespace opengl{
namespace ext{


class HXCPP_CLASS_ATTRIBUTES  EXT_shadow_samplers_obj : public hx::Object{
	public:
		typedef hx::Object super;
		typedef EXT_shadow_samplers_obj OBJ_;
		EXT_shadow_samplers_obj();
		Void __construct();

	public:
		inline void *operator new( size_t inSize, bool inContainer=false,const char *inName="lime.graphics.opengl.ext.EXT_shadow_samplers")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		static hx::ObjectPtr< EXT_shadow_samplers_obj > __new();
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~EXT_shadow_samplers_obj();

		HX_DO_RTTI_ALL;
		Dynamic __Field(const ::String &inString, hx::PropertyAccess inCallProp);
		Dynamic __SetField(const ::String &inString,const Dynamic &inValue, hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		::String __ToString() const { return HX_HCSTRING("EXT_shadow_samplers","\xec","\x92","\x50","\x09"); }

		int TEXTURE_COMPARE_MODE_EXT;
		int TEXTURE_COMPARE_FUNC_EXT;
		int COMPARE_REF_TO_TEXTURE_EXT;
		int SAMPLER_2D_SHADOW_EXT;
};

} // end namespace lime
} // end namespace graphics
} // end namespace opengl
} // end namespace ext

#endif /* INCLUDED_lime_graphics_opengl_ext_EXT_shadow_samplers */ 
