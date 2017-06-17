#ifndef INCLUDED_lime_graphics_opengl_ext_EXT_debug_label
#define INCLUDED_lime_graphics_opengl_ext_EXT_debug_label

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS4(lime,graphics,opengl,ext,EXT_debug_label)
namespace lime{
namespace graphics{
namespace opengl{
namespace ext{


class HXCPP_CLASS_ATTRIBUTES  EXT_debug_label_obj : public hx::Object{
	public:
		typedef hx::Object super;
		typedef EXT_debug_label_obj OBJ_;
		EXT_debug_label_obj();
		Void __construct();

	public:
		inline void *operator new( size_t inSize, bool inContainer=false,const char *inName="lime.graphics.opengl.ext.EXT_debug_label")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		static hx::ObjectPtr< EXT_debug_label_obj > __new();
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~EXT_debug_label_obj();

		HX_DO_RTTI_ALL;
		Dynamic __Field(const ::String &inString, hx::PropertyAccess inCallProp);
		Dynamic __SetField(const ::String &inString,const Dynamic &inValue, hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		::String __ToString() const { return HX_HCSTRING("EXT_debug_label","\xca","\x3b","\x0e","\x9c"); }

		int PROGRAM_PIPELINE_OBJECT_EXT;
		int PROGRAM_OBJECT_EXT;
		int SHADER_OBJECT_EXT;
		int BUFFER_OBJECT_EXT;
		int QUERY_OBJECT_EXT;
		int VERTEX_ARRAY_OBJECT_EXT;
};

} // end namespace lime
} // end namespace graphics
} // end namespace opengl
} // end namespace ext

#endif /* INCLUDED_lime_graphics_opengl_ext_EXT_debug_label */ 
