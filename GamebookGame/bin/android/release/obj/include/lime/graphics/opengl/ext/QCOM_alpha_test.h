#ifndef INCLUDED_lime_graphics_opengl_ext_QCOM_alpha_test
#define INCLUDED_lime_graphics_opengl_ext_QCOM_alpha_test

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS4(lime,graphics,opengl,ext,QCOM_alpha_test)
namespace lime{
namespace graphics{
namespace opengl{
namespace ext{


class HXCPP_CLASS_ATTRIBUTES  QCOM_alpha_test_obj : public hx::Object{
	public:
		typedef hx::Object super;
		typedef QCOM_alpha_test_obj OBJ_;
		QCOM_alpha_test_obj();
		Void __construct();

	public:
		inline void *operator new( size_t inSize, bool inContainer=false,const char *inName="lime.graphics.opengl.ext.QCOM_alpha_test")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		static hx::ObjectPtr< QCOM_alpha_test_obj > __new();
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~QCOM_alpha_test_obj();

		HX_DO_RTTI_ALL;
		Dynamic __Field(const ::String &inString, hx::PropertyAccess inCallProp);
		Dynamic __SetField(const ::String &inString,const Dynamic &inValue, hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		::String __ToString() const { return HX_HCSTRING("QCOM_alpha_test","\xc2","\xa6","\x01","\xc4"); }

		int ALPHA_TEST_QCOM;
		int ALPHA_TEST_FUNC_QCOM;
		int ALPHA_TEST_REF_QCOM;
};

} // end namespace lime
} // end namespace graphics
} // end namespace opengl
} // end namespace ext

#endif /* INCLUDED_lime_graphics_opengl_ext_QCOM_alpha_test */ 
