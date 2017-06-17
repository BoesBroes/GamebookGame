#ifndef INCLUDED_lime_graphics_opengl_ext_NV_texture_compression_s3tc_update
#define INCLUDED_lime_graphics_opengl_ext_NV_texture_compression_s3tc_update

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS4(lime,graphics,opengl,ext,NV_texture_compression_s3tc_update)
namespace lime{
namespace graphics{
namespace opengl{
namespace ext{


class HXCPP_CLASS_ATTRIBUTES  NV_texture_compression_s3tc_update_obj : public hx::Object{
	public:
		typedef hx::Object super;
		typedef NV_texture_compression_s3tc_update_obj OBJ_;
		NV_texture_compression_s3tc_update_obj();
		Void __construct();

	public:
		inline void *operator new( size_t inSize, bool inContainer=false,const char *inName="lime.graphics.opengl.ext.NV_texture_compression_s3tc_update")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		static hx::ObjectPtr< NV_texture_compression_s3tc_update_obj > __new();
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~NV_texture_compression_s3tc_update_obj();

		HX_DO_RTTI_ALL;
		static void __register();
		::String __ToString() const { return HX_HCSTRING("NV_texture_compression_s3tc_update","\x45","\x2a","\xb6","\x00"); }

};

} // end namespace lime
} // end namespace graphics
} // end namespace opengl
} // end namespace ext

#endif /* INCLUDED_lime_graphics_opengl_ext_NV_texture_compression_s3tc_update */ 
