#ifndef INCLUDED_lime_graphics_opengl_ext_OES_vertex_type_10_10_10_2
#define INCLUDED_lime_graphics_opengl_ext_OES_vertex_type_10_10_10_2

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS4(lime,graphics,opengl,ext,OES_vertex_type_10_10_10_2)
namespace lime{
namespace graphics{
namespace opengl{
namespace ext{


class HXCPP_CLASS_ATTRIBUTES  OES_vertex_type_10_10_10_2_obj : public hx::Object{
	public:
		typedef hx::Object super;
		typedef OES_vertex_type_10_10_10_2_obj OBJ_;
		OES_vertex_type_10_10_10_2_obj();
		Void __construct();

	public:
		inline void *operator new( size_t inSize, bool inContainer=false,const char *inName="lime.graphics.opengl.ext.OES_vertex_type_10_10_10_2")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		static hx::ObjectPtr< OES_vertex_type_10_10_10_2_obj > __new();
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~OES_vertex_type_10_10_10_2_obj();

		HX_DO_RTTI_ALL;
		Dynamic __Field(const ::String &inString, hx::PropertyAccess inCallProp);
		Dynamic __SetField(const ::String &inString,const Dynamic &inValue, hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		::String __ToString() const { return HX_HCSTRING("OES_vertex_type_10_10_10_2","\xde","\xbe","\xf1","\x06"); }

		int UNSIGNED_INT_10_10_10_2_OES;
		int INT_10_10_10_2_OES;
};

} // end namespace lime
} // end namespace graphics
} // end namespace opengl
} // end namespace ext

#endif /* INCLUDED_lime_graphics_opengl_ext_OES_vertex_type_10_10_10_2 */ 
