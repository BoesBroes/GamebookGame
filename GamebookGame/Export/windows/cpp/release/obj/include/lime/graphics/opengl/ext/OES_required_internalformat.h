#ifndef INCLUDED_lime_graphics_opengl_ext_OES_required_internalformat
#define INCLUDED_lime_graphics_opengl_ext_OES_required_internalformat

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS4(lime,graphics,opengl,ext,OES_required_internalformat)
namespace lime{
namespace graphics{
namespace opengl{
namespace ext{


class HXCPP_CLASS_ATTRIBUTES  OES_required_internalformat_obj : public hx::Object{
	public:
		typedef hx::Object super;
		typedef OES_required_internalformat_obj OBJ_;
		OES_required_internalformat_obj();
		Void __construct();

	public:
		inline void *operator new( size_t inSize, bool inContainer=false,const char *inName="lime.graphics.opengl.ext.OES_required_internalformat")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		static hx::ObjectPtr< OES_required_internalformat_obj > __new();
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~OES_required_internalformat_obj();

		HX_DO_RTTI_ALL;
		Dynamic __Field(const ::String &inString, hx::PropertyAccess inCallProp);
		Dynamic __SetField(const ::String &inString,const Dynamic &inValue, hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		::String __ToString() const { return HX_HCSTRING("OES_required_internalformat","\x52","\xc5","\x46","\x29"); }

		int ALPHA8_OES;
		int DEPTH_COMPONENT16_OES;
		int DEPTH_COMPONENT24_OES;
		int DEPTH24_STENCIL8_OES;
		int DEPTH_COMPONENT32_OES;
		int LUMINANCE4_ALPHA4_OES;
		int LUMINANCE8_ALPHA8_OES;
		int LUMINANCE8_OES;
		int RGBA4_OES;
		int RGB5_A1_OES;
		int RGB565_OES;
		int RGB8_OES;
		int RGBA8_OES;
		int RGB10_EXT;
		int RGB10_A2_EXT;
};

} // end namespace lime
} // end namespace graphics
} // end namespace opengl
} // end namespace ext

#endif /* INCLUDED_lime_graphics_opengl_ext_OES_required_internalformat */ 
