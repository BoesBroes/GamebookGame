#ifndef INCLUDED_lime_graphics_opengl_ext_EXT_texture_compression_dxt1
#define INCLUDED_lime_graphics_opengl_ext_EXT_texture_compression_dxt1

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS4(lime,graphics,opengl,ext,EXT_texture_compression_dxt1)
namespace lime{
namespace graphics{
namespace opengl{
namespace ext{


class HXCPP_CLASS_ATTRIBUTES  EXT_texture_compression_dxt1_obj : public hx::Object{
	public:
		typedef hx::Object super;
		typedef EXT_texture_compression_dxt1_obj OBJ_;
		EXT_texture_compression_dxt1_obj();
		Void __construct();

	public:
		inline void *operator new( size_t inSize, bool inContainer=false,const char *inName="lime.graphics.opengl.ext.EXT_texture_compression_dxt1")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		static hx::ObjectPtr< EXT_texture_compression_dxt1_obj > __new();
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~EXT_texture_compression_dxt1_obj();

		HX_DO_RTTI_ALL;
		Dynamic __Field(const ::String &inString, hx::PropertyAccess inCallProp);
		Dynamic __SetField(const ::String &inString,const Dynamic &inValue, hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		::String __ToString() const { return HX_HCSTRING("EXT_texture_compression_dxt1","\x6c","\xae","\xf4","\x76"); }

		int COMPRESSED_RGB_S3TC_DXT1_EXT;
		int COMPRESSED_RGBA_S3TC_DXT1_EXT;
};

} // end namespace lime
} // end namespace graphics
} // end namespace opengl
} // end namespace ext

#endif /* INCLUDED_lime_graphics_opengl_ext_EXT_texture_compression_dxt1 */ 
