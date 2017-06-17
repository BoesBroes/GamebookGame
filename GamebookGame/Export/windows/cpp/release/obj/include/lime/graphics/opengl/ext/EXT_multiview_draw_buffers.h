#ifndef INCLUDED_lime_graphics_opengl_ext_EXT_multiview_draw_buffers
#define INCLUDED_lime_graphics_opengl_ext_EXT_multiview_draw_buffers

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS4(lime,graphics,opengl,ext,EXT_multiview_draw_buffers)
namespace lime{
namespace graphics{
namespace opengl{
namespace ext{


class HXCPP_CLASS_ATTRIBUTES  EXT_multiview_draw_buffers_obj : public hx::Object{
	public:
		typedef hx::Object super;
		typedef EXT_multiview_draw_buffers_obj OBJ_;
		EXT_multiview_draw_buffers_obj();
		Void __construct();

	public:
		inline void *operator new( size_t inSize, bool inContainer=false,const char *inName="lime.graphics.opengl.ext.EXT_multiview_draw_buffers")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		static hx::ObjectPtr< EXT_multiview_draw_buffers_obj > __new();
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~EXT_multiview_draw_buffers_obj();

		HX_DO_RTTI_ALL;
		Dynamic __Field(const ::String &inString, hx::PropertyAccess inCallProp);
		Dynamic __SetField(const ::String &inString,const Dynamic &inValue, hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		::String __ToString() const { return HX_HCSTRING("EXT_multiview_draw_buffers","\xf7","\xb6","\xe5","\xc5"); }

		int COLOR_ATTACHMENT_EXT;
		int MULTIVIEW_EXT;
		int DRAW_BUFFER_EXT;
		int READ_BUFFER_EXT;
		int MAX_MULTIVIEW_BUFFERS_EXT;
};

} // end namespace lime
} // end namespace graphics
} // end namespace opengl
} // end namespace ext

#endif /* INCLUDED_lime_graphics_opengl_ext_EXT_multiview_draw_buffers */ 
