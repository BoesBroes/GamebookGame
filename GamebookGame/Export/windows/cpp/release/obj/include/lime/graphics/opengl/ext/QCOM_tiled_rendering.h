#ifndef INCLUDED_lime_graphics_opengl_ext_QCOM_tiled_rendering
#define INCLUDED_lime_graphics_opengl_ext_QCOM_tiled_rendering

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS4(lime,graphics,opengl,ext,QCOM_tiled_rendering)
namespace lime{
namespace graphics{
namespace opengl{
namespace ext{


class HXCPP_CLASS_ATTRIBUTES  QCOM_tiled_rendering_obj : public hx::Object{
	public:
		typedef hx::Object super;
		typedef QCOM_tiled_rendering_obj OBJ_;
		QCOM_tiled_rendering_obj();
		Void __construct();

	public:
		inline void *operator new( size_t inSize, bool inContainer=false,const char *inName="lime.graphics.opengl.ext.QCOM_tiled_rendering")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		static hx::ObjectPtr< QCOM_tiled_rendering_obj > __new();
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~QCOM_tiled_rendering_obj();

		HX_DO_RTTI_ALL;
		Dynamic __Field(const ::String &inString, hx::PropertyAccess inCallProp);
		Dynamic __SetField(const ::String &inString,const Dynamic &inValue, hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		::String __ToString() const { return HX_HCSTRING("QCOM_tiled_rendering","\xf4","\x8a","\x1f","\xec"); }

		int COLOR_BUFFER_BIT0_QCOM;
		int COLOR_BUFFER_BIT1_QCOM;
		int COLOR_BUFFER_BIT2_QCOM;
		int COLOR_BUFFER_BIT3_QCOM;
		int COLOR_BUFFER_BIT4_QCOM;
		int COLOR_BUFFER_BIT5_QCOM;
		int COLOR_BUFFER_BIT6_QCOM;
		int COLOR_BUFFER_BIT7_QCOM;
		int DEPTH_BUFFER_BIT0_QCOM;
		int DEPTH_BUFFER_BIT1_QCOM;
		int DEPTH_BUFFER_BIT2_QCOM;
		int DEPTH_BUFFER_BIT3_QCOM;
		int DEPTH_BUFFER_BIT4_QCOM;
		int DEPTH_BUFFER_BIT5_QCOM;
		int DEPTH_BUFFER_BIT6_QCOM;
		int DEPTH_BUFFER_BIT7_QCOM;
		int STENCIL_BUFFER_BIT0_QCOM;
		int STENCIL_BUFFER_BIT1_QCOM;
		int STENCIL_BUFFER_BIT2_QCOM;
		int STENCIL_BUFFER_BIT3_QCOM;
		int STENCIL_BUFFER_BIT4_QCOM;
		int STENCIL_BUFFER_BIT5_QCOM;
		int STENCIL_BUFFER_BIT6_QCOM;
		int STENCIL_BUFFER_BIT7_QCOM;
		int MULTISAMPLE_BUFFER_BIT0_QCOM;
		int MULTISAMPLE_BUFFER_BIT1_QCOM;
		int MULTISAMPLE_BUFFER_BIT2_QCOM;
		int MULTISAMPLE_BUFFER_BIT3_QCOM;
		int MULTISAMPLE_BUFFER_BIT4_QCOM;
		int MULTISAMPLE_BUFFER_BIT5_QCOM;
		int MULTISAMPLE_BUFFER_BIT6_QCOM;
		int MULTISAMPLE_BUFFER_BIT7_QCOM;
};

} // end namespace lime
} // end namespace graphics
} // end namespace opengl
} // end namespace ext

#endif /* INCLUDED_lime_graphics_opengl_ext_QCOM_tiled_rendering */ 
