#ifndef INCLUDED_lime_graphics_opengl_ext_OES_stencil4
#define INCLUDED_lime_graphics_opengl_ext_OES_stencil4

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS4(lime,graphics,opengl,ext,OES_stencil4)
namespace lime{
namespace graphics{
namespace opengl{
namespace ext{


class HXCPP_CLASS_ATTRIBUTES  OES_stencil4_obj : public hx::Object{
	public:
		typedef hx::Object super;
		typedef OES_stencil4_obj OBJ_;
		OES_stencil4_obj();
		Void __construct();

	public:
		inline void *operator new( size_t inSize, bool inContainer=false,const char *inName="lime.graphics.opengl.ext.OES_stencil4")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		static hx::ObjectPtr< OES_stencil4_obj > __new();
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~OES_stencil4_obj();

		HX_DO_RTTI_ALL;
		Dynamic __Field(const ::String &inString, hx::PropertyAccess inCallProp);
		Dynamic __SetField(const ::String &inString,const Dynamic &inValue, hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		::String __ToString() const { return HX_HCSTRING("OES_stencil4","\xfa","\x0f","\x03","\x29"); }

		int STENCIL_INDEX4_OES;
};

} // end namespace lime
} // end namespace graphics
} // end namespace opengl
} // end namespace ext

#endif /* INCLUDED_lime_graphics_opengl_ext_OES_stencil4 */ 
