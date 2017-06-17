#ifndef INCLUDED_lime_graphics_opengl_ext_QCOM_driver_control
#define INCLUDED_lime_graphics_opengl_ext_QCOM_driver_control

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS4(lime,graphics,opengl,ext,QCOM_driver_control)
namespace lime{
namespace graphics{
namespace opengl{
namespace ext{


class HXCPP_CLASS_ATTRIBUTES  QCOM_driver_control_obj : public hx::Object{
	public:
		typedef hx::Object super;
		typedef QCOM_driver_control_obj OBJ_;
		QCOM_driver_control_obj();
		Void __construct();

	public:
		inline void *operator new( size_t inSize, bool inContainer=false,const char *inName="lime.graphics.opengl.ext.QCOM_driver_control")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		static hx::ObjectPtr< QCOM_driver_control_obj > __new();
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~QCOM_driver_control_obj();

		HX_DO_RTTI_ALL;
		static void __register();
		::String __ToString() const { return HX_HCSTRING("QCOM_driver_control","\x35","\x0f","\xf7","\x9e"); }

};

} // end namespace lime
} // end namespace graphics
} // end namespace opengl
} // end namespace ext

#endif /* INCLUDED_lime_graphics_opengl_ext_QCOM_driver_control */ 
