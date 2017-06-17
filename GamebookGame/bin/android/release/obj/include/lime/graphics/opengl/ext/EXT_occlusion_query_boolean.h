#ifndef INCLUDED_lime_graphics_opengl_ext_EXT_occlusion_query_boolean
#define INCLUDED_lime_graphics_opengl_ext_EXT_occlusion_query_boolean

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS4(lime,graphics,opengl,ext,EXT_occlusion_query_boolean)
namespace lime{
namespace graphics{
namespace opengl{
namespace ext{


class HXCPP_CLASS_ATTRIBUTES  EXT_occlusion_query_boolean_obj : public hx::Object{
	public:
		typedef hx::Object super;
		typedef EXT_occlusion_query_boolean_obj OBJ_;
		EXT_occlusion_query_boolean_obj();
		Void __construct();

	public:
		inline void *operator new( size_t inSize, bool inContainer=false,const char *inName="lime.graphics.opengl.ext.EXT_occlusion_query_boolean")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		static hx::ObjectPtr< EXT_occlusion_query_boolean_obj > __new();
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~EXT_occlusion_query_boolean_obj();

		HX_DO_RTTI_ALL;
		Dynamic __Field(const ::String &inString, hx::PropertyAccess inCallProp);
		Dynamic __SetField(const ::String &inString,const Dynamic &inValue, hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		::String __ToString() const { return HX_HCSTRING("EXT_occlusion_query_boolean","\x81","\xa7","\x94","\x3d"); }

		int ANY_SAMPLES_PASSED_EXT;
		int ANY_SAMPLES_PASSED_CONSERVATIVE_EXT;
		int CURRENT_QUERY_EXT;
		int QUERY_RESULT_EXT;
		int QUERY_RESULT_AVAILABLE_EXT;
};

} // end namespace lime
} // end namespace graphics
} // end namespace opengl
} // end namespace ext

#endif /* INCLUDED_lime_graphics_opengl_ext_EXT_occlusion_query_boolean */ 
