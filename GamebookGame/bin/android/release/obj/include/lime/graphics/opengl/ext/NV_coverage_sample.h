#ifndef INCLUDED_lime_graphics_opengl_ext_NV_coverage_sample
#define INCLUDED_lime_graphics_opengl_ext_NV_coverage_sample

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS4(lime,graphics,opengl,ext,NV_coverage_sample)
namespace lime{
namespace graphics{
namespace opengl{
namespace ext{


class HXCPP_CLASS_ATTRIBUTES  NV_coverage_sample_obj : public hx::Object{
	public:
		typedef hx::Object super;
		typedef NV_coverage_sample_obj OBJ_;
		NV_coverage_sample_obj();
		Void __construct();

	public:
		inline void *operator new( size_t inSize, bool inContainer=false,const char *inName="lime.graphics.opengl.ext.NV_coverage_sample")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		static hx::ObjectPtr< NV_coverage_sample_obj > __new();
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~NV_coverage_sample_obj();

		HX_DO_RTTI_ALL;
		Dynamic __Field(const ::String &inString, hx::PropertyAccess inCallProp);
		Dynamic __SetField(const ::String &inString,const Dynamic &inValue, hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		::String __ToString() const { return HX_HCSTRING("NV_coverage_sample","\xaa","\x83","\xfd","\xdb"); }

		int COVERAGE_COMPONENT_NV;
		int COVERAGE_COMPONENT4_NV;
		int COVERAGE_ATTACHMENT_NV;
		int COVERAGE_BUFFERS_NV;
		int COVERAGE_SAMPLES_NV;
		int COVERAGE_ALL_FRAGMENTS_NV;
		int COVERAGE_EDGE_FRAGMENTS_NV;
		int COVERAGE_AUTOMATIC_NV;
		int COVERAGE_BUFFER_BIT_NV;
};

} // end namespace lime
} // end namespace graphics
} // end namespace opengl
} // end namespace ext

#endif /* INCLUDED_lime_graphics_opengl_ext_NV_coverage_sample */ 
