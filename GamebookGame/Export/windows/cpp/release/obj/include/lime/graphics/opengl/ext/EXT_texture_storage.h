#ifndef INCLUDED_lime_graphics_opengl_ext_EXT_texture_storage
#define INCLUDED_lime_graphics_opengl_ext_EXT_texture_storage

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS4(lime,graphics,opengl,ext,EXT_texture_storage)
namespace lime{
namespace graphics{
namespace opengl{
namespace ext{


class HXCPP_CLASS_ATTRIBUTES  EXT_texture_storage_obj : public hx::Object{
	public:
		typedef hx::Object super;
		typedef EXT_texture_storage_obj OBJ_;
		EXT_texture_storage_obj();
		Void __construct();

	public:
		inline void *operator new( size_t inSize, bool inContainer=false,const char *inName="lime.graphics.opengl.ext.EXT_texture_storage")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		static hx::ObjectPtr< EXT_texture_storage_obj > __new();
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~EXT_texture_storage_obj();

		HX_DO_RTTI_ALL;
		Dynamic __Field(const ::String &inString, hx::PropertyAccess inCallProp);
		Dynamic __SetField(const ::String &inString,const Dynamic &inValue, hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		::String __ToString() const { return HX_HCSTRING("EXT_texture_storage","\x99","\x91","\x8f","\x9d"); }

		int TEXTURE_IMMUTABLE_FORMAT_EXT;
		int ALPHA8_EXT;
		int LUMINANCE8_EXT;
		int LUMINANCE8_ALPHA8_EXT;
		int RGBA32F_EXT;
		int RGB32F_EXT;
		int ALPHA32F_EXT;
		int LUMINANCE32F_EXT;
		int LUMINANCE_ALPHA32F_EXT;
		int RGBA16F_EXT;
		int RGB16F_EXT;
		int ALPHA16F_EXT;
		int LUMINANCE16F_EXT;
		int LUMINANCE_ALPHA16F_EXT;
		int RGB10_A2_EXT;
		int RGB10_EXT;
		int BGRA8_EXT;
		int R8_EXT;
		int RG8_EXT;
		int R32F_EXT;
		int RG32F_EXT;
		int R16F_EXT;
		int RG16F_EXT;
};

} // end namespace lime
} // end namespace graphics
} // end namespace opengl
} // end namespace ext

#endif /* INCLUDED_lime_graphics_opengl_ext_EXT_texture_storage */ 
