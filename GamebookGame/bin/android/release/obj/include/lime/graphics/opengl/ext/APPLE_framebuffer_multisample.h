#ifndef INCLUDED_lime_graphics_opengl_ext_APPLE_framebuffer_multisample
#define INCLUDED_lime_graphics_opengl_ext_APPLE_framebuffer_multisample

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS4(lime,graphics,opengl,ext,APPLE_framebuffer_multisample)
namespace lime{
namespace graphics{
namespace opengl{
namespace ext{


class HXCPP_CLASS_ATTRIBUTES  APPLE_framebuffer_multisample_obj : public hx::Object{
	public:
		typedef hx::Object super;
		typedef APPLE_framebuffer_multisample_obj OBJ_;
		APPLE_framebuffer_multisample_obj();
		Void __construct();

	public:
		inline void *operator new( size_t inSize, bool inContainer=false,const char *inName="lime.graphics.opengl.ext.APPLE_framebuffer_multisample")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		static hx::ObjectPtr< APPLE_framebuffer_multisample_obj > __new();
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~APPLE_framebuffer_multisample_obj();

		HX_DO_RTTI_ALL;
		Dynamic __Field(const ::String &inString, hx::PropertyAccess inCallProp);
		Dynamic __SetField(const ::String &inString,const Dynamic &inValue, hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		::String __ToString() const { return HX_HCSTRING("APPLE_framebuffer_multisample","\x8c","\xc4","\x4f","\x00"); }

		int RENDERBUFFER_SAMPLES_APPLE;
		int FRAMEBUFFER_INCOMPLETE_MULTISAMPLE_APPLE;
		int MAX_SAMPLES_APPLE;
		int READ_FRAMEBUFFER_APPLE;
		int DRAW_FRAMEBUFFER_APPLE;
		int DRAW_FRAMEBUFFER_BINDING_APPLE;
		int READ_FRAMEBUFFER_BINDING_APPLE;
};

} // end namespace lime
} // end namespace graphics
} // end namespace opengl
} // end namespace ext

#endif /* INCLUDED_lime_graphics_opengl_ext_APPLE_framebuffer_multisample */ 
