#ifndef INCLUDED_lime_graphics_opengl_ext_OES_rgb8_rgba8
#define INCLUDED_lime_graphics_opengl_ext_OES_rgb8_rgba8

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS4(lime,graphics,opengl,ext,OES_rgb8_rgba8)
namespace lime{
namespace graphics{
namespace opengl{
namespace ext{


class HXCPP_CLASS_ATTRIBUTES  OES_rgb8_rgba8_obj : public hx::Object{
	public:
		typedef hx::Object super;
		typedef OES_rgb8_rgba8_obj OBJ_;
		OES_rgb8_rgba8_obj();
		Void __construct();

	public:
		inline void *operator new( size_t inSize, bool inContainer=false,const char *inName="lime.graphics.opengl.ext.OES_rgb8_rgba8")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		static hx::ObjectPtr< OES_rgb8_rgba8_obj > __new();
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~OES_rgb8_rgba8_obj();

		HX_DO_RTTI_ALL;
		Dynamic __Field(const ::String &inString, hx::PropertyAccess inCallProp);
		Dynamic __SetField(const ::String &inString,const Dynamic &inValue, hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		::String __ToString() const { return HX_HCSTRING("OES_rgb8_rgba8","\xd2","\x44","\x3a","\x66"); }

		int RGB8_OES;
		int RGBA8_OES;
};

} // end namespace lime
} // end namespace graphics
} // end namespace opengl
} // end namespace ext

#endif /* INCLUDED_lime_graphics_opengl_ext_OES_rgb8_rgba8 */ 
