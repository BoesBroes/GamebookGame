#ifndef INCLUDED_lime_graphics_opengl_ext_NV_depth_nonlinear
#define INCLUDED_lime_graphics_opengl_ext_NV_depth_nonlinear

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS4(lime,graphics,opengl,ext,NV_depth_nonlinear)
namespace lime{
namespace graphics{
namespace opengl{
namespace ext{


class HXCPP_CLASS_ATTRIBUTES  NV_depth_nonlinear_obj : public hx::Object{
	public:
		typedef hx::Object super;
		typedef NV_depth_nonlinear_obj OBJ_;
		NV_depth_nonlinear_obj();
		Void __construct();

	public:
		inline void *operator new( size_t inSize, bool inContainer=false,const char *inName="lime.graphics.opengl.ext.NV_depth_nonlinear")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		static hx::ObjectPtr< NV_depth_nonlinear_obj > __new();
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~NV_depth_nonlinear_obj();

		HX_DO_RTTI_ALL;
		Dynamic __Field(const ::String &inString, hx::PropertyAccess inCallProp);
		Dynamic __SetField(const ::String &inString,const Dynamic &inValue, hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		::String __ToString() const { return HX_HCSTRING("NV_depth_nonlinear","\xff","\x77","\x4d","\xc4"); }

		int DEPTH_COMPONENT16_NONLINEAR_NV;
};

} // end namespace lime
} // end namespace graphics
} // end namespace opengl
} // end namespace ext

#endif /* INCLUDED_lime_graphics_opengl_ext_NV_depth_nonlinear */ 
