#ifndef INCLUDED_lime_graphics_opengl_ext_QCOM_extended_get2
#define INCLUDED_lime_graphics_opengl_ext_QCOM_extended_get2

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS4(lime,graphics,opengl,ext,QCOM_extended_get2)
namespace lime{
namespace graphics{
namespace opengl{
namespace ext{


class HXCPP_CLASS_ATTRIBUTES  QCOM_extended_get2_obj : public hx::Object{
	public:
		typedef hx::Object super;
		typedef QCOM_extended_get2_obj OBJ_;
		QCOM_extended_get2_obj();
		Void __construct();

	public:
		inline void *operator new( size_t inSize, bool inContainer=false,const char *inName="lime.graphics.opengl.ext.QCOM_extended_get2")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		static hx::ObjectPtr< QCOM_extended_get2_obj > __new();
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~QCOM_extended_get2_obj();

		HX_DO_RTTI_ALL;
		static void __register();
		::String __ToString() const { return HX_HCSTRING("QCOM_extended_get2","\x13","\xc4","\xad","\x8c"); }

};

} // end namespace lime
} // end namespace graphics
} // end namespace opengl
} // end namespace ext

#endif /* INCLUDED_lime_graphics_opengl_ext_QCOM_extended_get2 */ 
