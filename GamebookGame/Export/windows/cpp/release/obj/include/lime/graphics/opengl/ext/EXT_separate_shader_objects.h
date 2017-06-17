#ifndef INCLUDED_lime_graphics_opengl_ext_EXT_separate_shader_objects
#define INCLUDED_lime_graphics_opengl_ext_EXT_separate_shader_objects

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS4(lime,graphics,opengl,ext,EXT_separate_shader_objects)
namespace lime{
namespace graphics{
namespace opengl{
namespace ext{


class HXCPP_CLASS_ATTRIBUTES  EXT_separate_shader_objects_obj : public hx::Object{
	public:
		typedef hx::Object super;
		typedef EXT_separate_shader_objects_obj OBJ_;
		EXT_separate_shader_objects_obj();
		Void __construct();

	public:
		inline void *operator new( size_t inSize, bool inContainer=false,const char *inName="lime.graphics.opengl.ext.EXT_separate_shader_objects")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		static hx::ObjectPtr< EXT_separate_shader_objects_obj > __new();
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~EXT_separate_shader_objects_obj();

		HX_DO_RTTI_ALL;
		Dynamic __Field(const ::String &inString, hx::PropertyAccess inCallProp);
		Dynamic __SetField(const ::String &inString,const Dynamic &inValue, hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		::String __ToString() const { return HX_HCSTRING("EXT_separate_shader_objects","\x18","\x2e","\xeb","\x43"); }

		int VERTEX_SHADER_BIT_EXT;
		int FRAGMENT_SHADER_BIT_EXT;
		int ALL_SHADER_BITS_EXT;
		int PROGRAM_SEPARABLE_EXT;
		int ACTIVE_PROGRAM_EXT;
		int PROGRAM_PIPELINE_BINDING_EXT;
};

} // end namespace lime
} // end namespace graphics
} // end namespace opengl
} // end namespace ext

#endif /* INCLUDED_lime_graphics_opengl_ext_EXT_separate_shader_objects */ 
