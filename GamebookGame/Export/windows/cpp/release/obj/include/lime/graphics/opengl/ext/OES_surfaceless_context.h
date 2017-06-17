#ifndef INCLUDED_lime_graphics_opengl_ext_OES_surfaceless_context
#define INCLUDED_lime_graphics_opengl_ext_OES_surfaceless_context

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS4(lime,graphics,opengl,ext,OES_surfaceless_context)
namespace lime{
namespace graphics{
namespace opengl{
namespace ext{


class HXCPP_CLASS_ATTRIBUTES  OES_surfaceless_context_obj : public hx::Object{
	public:
		typedef hx::Object super;
		typedef OES_surfaceless_context_obj OBJ_;
		OES_surfaceless_context_obj();
		Void __construct();

	public:
		inline void *operator new( size_t inSize, bool inContainer=false,const char *inName="lime.graphics.opengl.ext.OES_surfaceless_context")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		static hx::ObjectPtr< OES_surfaceless_context_obj > __new();
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~OES_surfaceless_context_obj();

		HX_DO_RTTI_ALL;
		Dynamic __Field(const ::String &inString, hx::PropertyAccess inCallProp);
		Dynamic __SetField(const ::String &inString,const Dynamic &inValue, hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		::String __ToString() const { return HX_HCSTRING("OES_surfaceless_context","\x74","\x4b","\xea","\xb9"); }

		int FRAMEBUFFER_UNDEFINED_OES;
};

} // end namespace lime
} // end namespace graphics
} // end namespace opengl
} // end namespace ext

#endif /* INCLUDED_lime_graphics_opengl_ext_OES_surfaceless_context */ 
