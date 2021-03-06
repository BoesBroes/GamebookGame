#ifndef INCLUDED_lime_graphics_opengl_ext_QCOM_writeonly_rendering
#define INCLUDED_lime_graphics_opengl_ext_QCOM_writeonly_rendering

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS4(lime,graphics,opengl,ext,QCOM_writeonly_rendering)
namespace lime{
namespace graphics{
namespace opengl{
namespace ext{


class HXCPP_CLASS_ATTRIBUTES  QCOM_writeonly_rendering_obj : public hx::Object{
	public:
		typedef hx::Object super;
		typedef QCOM_writeonly_rendering_obj OBJ_;
		QCOM_writeonly_rendering_obj();
		Void __construct();

	public:
		inline void *operator new( size_t inSize, bool inContainer=false,const char *inName="lime.graphics.opengl.ext.QCOM_writeonly_rendering")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		static hx::ObjectPtr< QCOM_writeonly_rendering_obj > __new();
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~QCOM_writeonly_rendering_obj();

		HX_DO_RTTI_ALL;
		Dynamic __Field(const ::String &inString, hx::PropertyAccess inCallProp);
		Dynamic __SetField(const ::String &inString,const Dynamic &inValue, hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		::String __ToString() const { return HX_HCSTRING("QCOM_writeonly_rendering","\x09","\x44","\x22","\x8a"); }

		int WRITEONLY_RENDERING_QCOM;
};

} // end namespace lime
} // end namespace graphics
} // end namespace opengl
} // end namespace ext

#endif /* INCLUDED_lime_graphics_opengl_ext_QCOM_writeonly_rendering */ 
