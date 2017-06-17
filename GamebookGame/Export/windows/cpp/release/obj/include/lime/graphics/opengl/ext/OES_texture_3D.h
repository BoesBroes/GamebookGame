#ifndef INCLUDED_lime_graphics_opengl_ext_OES_texture_3D
#define INCLUDED_lime_graphics_opengl_ext_OES_texture_3D

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS4(lime,graphics,opengl,ext,OES_texture_3D)
namespace lime{
namespace graphics{
namespace opengl{
namespace ext{


class HXCPP_CLASS_ATTRIBUTES  OES_texture_3D_obj : public hx::Object{
	public:
		typedef hx::Object super;
		typedef OES_texture_3D_obj OBJ_;
		OES_texture_3D_obj();
		Void __construct();

	public:
		inline void *operator new( size_t inSize, bool inContainer=false,const char *inName="lime.graphics.opengl.ext.OES_texture_3D")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		static hx::ObjectPtr< OES_texture_3D_obj > __new();
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~OES_texture_3D_obj();

		HX_DO_RTTI_ALL;
		Dynamic __Field(const ::String &inString, hx::PropertyAccess inCallProp);
		Dynamic __SetField(const ::String &inString,const Dynamic &inValue, hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		::String __ToString() const { return HX_HCSTRING("OES_texture_3D","\x97","\x1a","\xcf","\xb4"); }

		int TEXTURE_WRAP_R_OES;
		int TEXTURE_3D_OES;
		int TEXTURE_BINDING_3D_OES;
		int MAX_3D_TEXTURE_SIZE_OES;
		int SAMPLER_3D_OES;
		int FRAMEBUFFER_ATTACHMENT_TEXTURE_3D_ZOFFSET_OES;
};

} // end namespace lime
} // end namespace graphics
} // end namespace opengl
} // end namespace ext

#endif /* INCLUDED_lime_graphics_opengl_ext_OES_texture_3D */ 
