#ifndef INCLUDED_lime_graphics_opengl_ext_OES_packed_depth_stencil
#define INCLUDED_lime_graphics_opengl_ext_OES_packed_depth_stencil

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS4(lime,graphics,opengl,ext,OES_packed_depth_stencil)
namespace lime{
namespace graphics{
namespace opengl{
namespace ext{


class HXCPP_CLASS_ATTRIBUTES  OES_packed_depth_stencil_obj : public hx::Object{
	public:
		typedef hx::Object super;
		typedef OES_packed_depth_stencil_obj OBJ_;
		OES_packed_depth_stencil_obj();
		Void __construct();

	public:
		inline void *operator new( size_t inSize, bool inContainer=false,const char *inName="lime.graphics.opengl.ext.OES_packed_depth_stencil")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		static hx::ObjectPtr< OES_packed_depth_stencil_obj > __new();
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~OES_packed_depth_stencil_obj();

		HX_DO_RTTI_ALL;
		Dynamic __Field(const ::String &inString, hx::PropertyAccess inCallProp);
		Dynamic __SetField(const ::String &inString,const Dynamic &inValue, hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		::String __ToString() const { return HX_HCSTRING("OES_packed_depth_stencil","\x7b","\x19","\x31","\xfc"); }

		int DEPTH_STENCIL_OES;
		int UNSIGNED_INT_24_8_OES;
		int DEPTH24_STENCIL8_OES;
};

} // end namespace lime
} // end namespace graphics
} // end namespace opengl
} // end namespace ext

#endif /* INCLUDED_lime_graphics_opengl_ext_OES_packed_depth_stencil */ 
