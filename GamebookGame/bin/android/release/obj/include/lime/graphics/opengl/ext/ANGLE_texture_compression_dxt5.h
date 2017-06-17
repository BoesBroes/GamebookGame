#ifndef INCLUDED_lime_graphics_opengl_ext_ANGLE_texture_compression_dxt5
#define INCLUDED_lime_graphics_opengl_ext_ANGLE_texture_compression_dxt5

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS4(lime,graphics,opengl,ext,ANGLE_texture_compression_dxt5)
namespace lime{
namespace graphics{
namespace opengl{
namespace ext{


class HXCPP_CLASS_ATTRIBUTES  ANGLE_texture_compression_dxt5_obj : public hx::Object{
	public:
		typedef hx::Object super;
		typedef ANGLE_texture_compression_dxt5_obj OBJ_;
		ANGLE_texture_compression_dxt5_obj();
		Void __construct();

	public:
		inline void *operator new( size_t inSize, bool inContainer=false,const char *inName="lime.graphics.opengl.ext.ANGLE_texture_compression_dxt5")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		static hx::ObjectPtr< ANGLE_texture_compression_dxt5_obj > __new();
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~ANGLE_texture_compression_dxt5_obj();

		HX_DO_RTTI_ALL;
		Dynamic __Field(const ::String &inString, hx::PropertyAccess inCallProp);
		Dynamic __SetField(const ::String &inString,const Dynamic &inValue, hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		::String __ToString() const { return HX_HCSTRING("ANGLE_texture_compression_dxt5","\xfe","\x60","\xdc","\xb5"); }

		int COMPRESSED_RGBA_S3TC_DXT5_ANGLE;
};

} // end namespace lime
} // end namespace graphics
} // end namespace opengl
} // end namespace ext

#endif /* INCLUDED_lime_graphics_opengl_ext_ANGLE_texture_compression_dxt5 */ 
