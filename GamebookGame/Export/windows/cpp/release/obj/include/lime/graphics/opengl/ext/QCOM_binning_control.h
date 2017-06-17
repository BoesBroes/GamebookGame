#ifndef INCLUDED_lime_graphics_opengl_ext_QCOM_binning_control
#define INCLUDED_lime_graphics_opengl_ext_QCOM_binning_control

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS4(lime,graphics,opengl,ext,QCOM_binning_control)
namespace lime{
namespace graphics{
namespace opengl{
namespace ext{


class HXCPP_CLASS_ATTRIBUTES  QCOM_binning_control_obj : public hx::Object{
	public:
		typedef hx::Object super;
		typedef QCOM_binning_control_obj OBJ_;
		QCOM_binning_control_obj();
		Void __construct();

	public:
		inline void *operator new( size_t inSize, bool inContainer=false,const char *inName="lime.graphics.opengl.ext.QCOM_binning_control")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		static hx::ObjectPtr< QCOM_binning_control_obj > __new();
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~QCOM_binning_control_obj();

		HX_DO_RTTI_ALL;
		Dynamic __Field(const ::String &inString, hx::PropertyAccess inCallProp);
		Dynamic __SetField(const ::String &inString,const Dynamic &inValue, hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		::String __ToString() const { return HX_HCSTRING("QCOM_binning_control","\x4a","\x6c","\x46","\x7b"); }

		int BINNING_CONTROL_HINT_QCOM;
		int CPU_OPTIMIZED_QCOM;
		int GPU_OPTIMIZED_QCOM;
		int RENDER_DIRECT_TO_FRAMEBUFFER_QCOM;
};

} // end namespace lime
} // end namespace graphics
} // end namespace opengl
} // end namespace ext

#endif /* INCLUDED_lime_graphics_opengl_ext_QCOM_binning_control */ 
