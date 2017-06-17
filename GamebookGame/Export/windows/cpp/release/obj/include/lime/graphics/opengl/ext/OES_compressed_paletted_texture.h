#ifndef INCLUDED_lime_graphics_opengl_ext_OES_compressed_paletted_texture
#define INCLUDED_lime_graphics_opengl_ext_OES_compressed_paletted_texture

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS4(lime,graphics,opengl,ext,OES_compressed_paletted_texture)
namespace lime{
namespace graphics{
namespace opengl{
namespace ext{


class HXCPP_CLASS_ATTRIBUTES  OES_compressed_paletted_texture_obj : public hx::Object{
	public:
		typedef hx::Object super;
		typedef OES_compressed_paletted_texture_obj OBJ_;
		OES_compressed_paletted_texture_obj();
		Void __construct();

	public:
		inline void *operator new( size_t inSize, bool inContainer=false,const char *inName="lime.graphics.opengl.ext.OES_compressed_paletted_texture")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		static hx::ObjectPtr< OES_compressed_paletted_texture_obj > __new();
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~OES_compressed_paletted_texture_obj();

		HX_DO_RTTI_ALL;
		Dynamic __Field(const ::String &inString, hx::PropertyAccess inCallProp);
		Dynamic __SetField(const ::String &inString,const Dynamic &inValue, hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		::String __ToString() const { return HX_HCSTRING("OES_compressed_paletted_texture","\xa1","\xed","\x5e","\x8e"); }

		int PALETTE4_RGB8_OES;
		int PALETTE4_RGBA8_OES;
		int PALETTE4_R5_G6_B5_OES;
		int PALETTE4_RGBA4_OES;
		int PALETTE4_RGB5_A1_OES;
		int PALETTE8_RGB8_OES;
		int PALETTE8_RGBA8_OES;
		int PALETTE8_R5_G6_B5_OES;
		int PALETTE8_RGBA4_OES;
		int PALETTE8_RGB5_A1_OES;
};

} // end namespace lime
} // end namespace graphics
} // end namespace opengl
} // end namespace ext

#endif /* INCLUDED_lime_graphics_opengl_ext_OES_compressed_paletted_texture */ 
