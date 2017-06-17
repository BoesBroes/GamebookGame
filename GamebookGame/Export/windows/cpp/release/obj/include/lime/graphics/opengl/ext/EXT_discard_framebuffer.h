#ifndef INCLUDED_lime_graphics_opengl_ext_EXT_discard_framebuffer
#define INCLUDED_lime_graphics_opengl_ext_EXT_discard_framebuffer

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS4(lime,graphics,opengl,ext,EXT_discard_framebuffer)
namespace lime{
namespace graphics{
namespace opengl{
namespace ext{


class HXCPP_CLASS_ATTRIBUTES  EXT_discard_framebuffer_obj : public hx::Object{
	public:
		typedef hx::Object super;
		typedef EXT_discard_framebuffer_obj OBJ_;
		EXT_discard_framebuffer_obj();
		Void __construct();

	public:
		inline void *operator new( size_t inSize, bool inContainer=false,const char *inName="lime.graphics.opengl.ext.EXT_discard_framebuffer")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		static hx::ObjectPtr< EXT_discard_framebuffer_obj > __new();
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~EXT_discard_framebuffer_obj();

		HX_DO_RTTI_ALL;
		Dynamic __Field(const ::String &inString, hx::PropertyAccess inCallProp);
		Dynamic __SetField(const ::String &inString,const Dynamic &inValue, hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		::String __ToString() const { return HX_HCSTRING("EXT_discard_framebuffer","\x0e","\xf8","\x79","\xf7"); }

		int COLOR_EXT;
		int DEPTH_EXT;
		int STENCIL_EXT;
};

} // end namespace lime
} // end namespace graphics
} // end namespace opengl
} // end namespace ext

#endif /* INCLUDED_lime_graphics_opengl_ext_EXT_discard_framebuffer */ 
