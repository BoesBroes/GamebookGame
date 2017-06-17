#ifndef INCLUDED_lime_graphics_opengl_ext_QCOM_extended_get
#define INCLUDED_lime_graphics_opengl_ext_QCOM_extended_get

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS4(lime,graphics,opengl,ext,QCOM_extended_get)
namespace lime{
namespace graphics{
namespace opengl{
namespace ext{


class HXCPP_CLASS_ATTRIBUTES  QCOM_extended_get_obj : public hx::Object{
	public:
		typedef hx::Object super;
		typedef QCOM_extended_get_obj OBJ_;
		QCOM_extended_get_obj();
		Void __construct();

	public:
		inline void *operator new( size_t inSize, bool inContainer=false,const char *inName="lime.graphics.opengl.ext.QCOM_extended_get")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		static hx::ObjectPtr< QCOM_extended_get_obj > __new();
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~QCOM_extended_get_obj();

		HX_DO_RTTI_ALL;
		Dynamic __Field(const ::String &inString, hx::PropertyAccess inCallProp);
		Dynamic __SetField(const ::String &inString,const Dynamic &inValue, hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		::String __ToString() const { return HX_HCSTRING("QCOM_extended_get","\x3f","\x13","\x03","\xb6"); }

		int TEXTURE_WIDTH_QCOM;
		int TEXTURE_HEIGHT_QCOM;
		int TEXTURE_DEPTH_QCOM;
		int TEXTURE_INTERNAL_FORMAT_QCOM;
		int TEXTURE_FORMAT_QCOM;
		int TEXTURE_TYPE_QCOM;
		int TEXTURE_IMAGE_VALID_QCOM;
		int TEXTURE_NUM_LEVELS_QCOM;
		int TEXTURE_TARGET_QCOM;
		int TEXTURE_OBJECT_VALID_QCOM;
		int STATE_RESTORE;
};

} // end namespace lime
} // end namespace graphics
} // end namespace opengl
} // end namespace ext

#endif /* INCLUDED_lime_graphics_opengl_ext_QCOM_extended_get */ 
