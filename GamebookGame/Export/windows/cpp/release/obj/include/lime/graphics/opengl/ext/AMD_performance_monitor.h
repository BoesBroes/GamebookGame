#ifndef INCLUDED_lime_graphics_opengl_ext_AMD_performance_monitor
#define INCLUDED_lime_graphics_opengl_ext_AMD_performance_monitor

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS4(lime,graphics,opengl,ext,AMD_performance_monitor)
namespace lime{
namespace graphics{
namespace opengl{
namespace ext{


class HXCPP_CLASS_ATTRIBUTES  AMD_performance_monitor_obj : public hx::Object{
	public:
		typedef hx::Object super;
		typedef AMD_performance_monitor_obj OBJ_;
		AMD_performance_monitor_obj();
		Void __construct();

	public:
		inline void *operator new( size_t inSize, bool inContainer=false,const char *inName="lime.graphics.opengl.ext.AMD_performance_monitor")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		static hx::ObjectPtr< AMD_performance_monitor_obj > __new();
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~AMD_performance_monitor_obj();

		HX_DO_RTTI_ALL;
		Dynamic __Field(const ::String &inString, hx::PropertyAccess inCallProp);
		Dynamic __SetField(const ::String &inString,const Dynamic &inValue, hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		::String __ToString() const { return HX_HCSTRING("AMD_performance_monitor","\xe4","\x7a","\x6c","\x36"); }

		int COUNTER_TYPE_AMD;
		int COUNTER_RANGE_AMD;
		int UNSIGNED_INT64_AMD;
		int PERCENTAGE_AMD;
		int PERFMON_RESULT_AVAILABLE_AMD;
		int PERFMON_RESULT_SIZE_AMD;
		int PERFMON_RESULT_AMD;
};

} // end namespace lime
} // end namespace graphics
} // end namespace opengl
} // end namespace ext

#endif /* INCLUDED_lime_graphics_opengl_ext_AMD_performance_monitor */ 
