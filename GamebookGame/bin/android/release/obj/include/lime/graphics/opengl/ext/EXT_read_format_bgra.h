#ifndef INCLUDED_lime_graphics_opengl_ext_EXT_read_format_bgra
#define INCLUDED_lime_graphics_opengl_ext_EXT_read_format_bgra

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS4(lime,graphics,opengl,ext,EXT_read_format_bgra)
namespace lime{
namespace graphics{
namespace opengl{
namespace ext{


class HXCPP_CLASS_ATTRIBUTES  EXT_read_format_bgra_obj : public hx::Object{
	public:
		typedef hx::Object super;
		typedef EXT_read_format_bgra_obj OBJ_;
		EXT_read_format_bgra_obj();
		Void __construct();

	public:
		inline void *operator new( size_t inSize, bool inContainer=false,const char *inName="lime.graphics.opengl.ext.EXT_read_format_bgra")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		static hx::ObjectPtr< EXT_read_format_bgra_obj > __new();
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~EXT_read_format_bgra_obj();

		HX_DO_RTTI_ALL;
		Dynamic __Field(const ::String &inString, hx::PropertyAccess inCallProp);
		Dynamic __SetField(const ::String &inString,const Dynamic &inValue, hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		::String __ToString() const { return HX_HCSTRING("EXT_read_format_bgra","\x11","\xc1","\x96","\xf4"); }

		int BGRA_EXT;
		int UNSIGNED_SHORT_4_4_4_4_REV_EXT;
		int UNSIGNED_SHORT_1_5_5_5_REV_EXT;
};

} // end namespace lime
} // end namespace graphics
} // end namespace opengl
} // end namespace ext

#endif /* INCLUDED_lime_graphics_opengl_ext_EXT_read_format_bgra */ 
