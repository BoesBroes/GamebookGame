#ifndef INCLUDED_lime_graphics_opengl_ext_NV_fbo_color_attachments
#define INCLUDED_lime_graphics_opengl_ext_NV_fbo_color_attachments

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS4(lime,graphics,opengl,ext,NV_fbo_color_attachments)
namespace lime{
namespace graphics{
namespace opengl{
namespace ext{


class HXCPP_CLASS_ATTRIBUTES  NV_fbo_color_attachments_obj : public hx::Object{
	public:
		typedef hx::Object super;
		typedef NV_fbo_color_attachments_obj OBJ_;
		NV_fbo_color_attachments_obj();
		Void __construct();

	public:
		inline void *operator new( size_t inSize, bool inContainer=false,const char *inName="lime.graphics.opengl.ext.NV_fbo_color_attachments")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		static hx::ObjectPtr< NV_fbo_color_attachments_obj > __new();
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~NV_fbo_color_attachments_obj();

		HX_DO_RTTI_ALL;
		Dynamic __Field(const ::String &inString, hx::PropertyAccess inCallProp);
		Dynamic __SetField(const ::String &inString,const Dynamic &inValue, hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		::String __ToString() const { return HX_HCSTRING("NV_fbo_color_attachments","\xd1","\xa3","\xac","\x87"); }

		int MAX_COLOR_ATTACHMENTS_NV;
		int COLOR_ATTACHMENT0_NV;
		int COLOR_ATTACHMENT1_NV;
		int COLOR_ATTACHMENT2_NV;
		int COLOR_ATTACHMENT3_NV;
		int COLOR_ATTACHMENT4_NV;
		int COLOR_ATTACHMENT5_NV;
		int COLOR_ATTACHMENT6_NV;
		int COLOR_ATTACHMENT7_NV;
		int COLOR_ATTACHMENT8_NV;
		int COLOR_ATTACHMENT9_NV;
		int COLOR_ATTACHMENT10_NV;
		int COLOR_ATTACHMENT11_NV;
		int COLOR_ATTACHMENT12_NV;
		int COLOR_ATTACHMENT13_NV;
		int COLOR_ATTACHMENT14_NV;
		int COLOR_ATTACHMENT15_NV;
};

} // end namespace lime
} // end namespace graphics
} // end namespace opengl
} // end namespace ext

#endif /* INCLUDED_lime_graphics_opengl_ext_NV_fbo_color_attachments */ 
