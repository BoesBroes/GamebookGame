#ifndef INCLUDED_lime_graphics_opengl_ext_QCOM_perfmon_global_mode
#define INCLUDED_lime_graphics_opengl_ext_QCOM_perfmon_global_mode

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS4(lime,graphics,opengl,ext,QCOM_perfmon_global_mode)
namespace lime{
namespace graphics{
namespace opengl{
namespace ext{


class HXCPP_CLASS_ATTRIBUTES  QCOM_perfmon_global_mode_obj : public hx::Object{
	public:
		typedef hx::Object super;
		typedef QCOM_perfmon_global_mode_obj OBJ_;
		QCOM_perfmon_global_mode_obj();
		Void __construct();

	public:
		inline void *operator new( size_t inSize, bool inContainer=false,const char *inName="lime.graphics.opengl.ext.QCOM_perfmon_global_mode")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		static hx::ObjectPtr< QCOM_perfmon_global_mode_obj > __new();
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~QCOM_perfmon_global_mode_obj();

		HX_DO_RTTI_ALL;
		Dynamic __Field(const ::String &inString, hx::PropertyAccess inCallProp);
		Dynamic __SetField(const ::String &inString,const Dynamic &inValue, hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		::String __ToString() const { return HX_HCSTRING("QCOM_perfmon_global_mode","\x74","\xf2","\x13","\xad"); }

		int PERFMON_GLOBAL_MODE_QCOM;
};

} // end namespace lime
} // end namespace graphics
} // end namespace opengl
} // end namespace ext

#endif /* INCLUDED_lime_graphics_opengl_ext_QCOM_perfmon_global_mode */ 
