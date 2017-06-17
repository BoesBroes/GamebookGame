#ifndef INCLUDED_lime_graphics_opengl_ext_ANGLE_translated_shader_source
#define INCLUDED_lime_graphics_opengl_ext_ANGLE_translated_shader_source

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS4(lime,graphics,opengl,ext,ANGLE_translated_shader_source)
namespace lime{
namespace graphics{
namespace opengl{
namespace ext{


class HXCPP_CLASS_ATTRIBUTES  ANGLE_translated_shader_source_obj : public hx::Object{
	public:
		typedef hx::Object super;
		typedef ANGLE_translated_shader_source_obj OBJ_;
		ANGLE_translated_shader_source_obj();
		Void __construct();

	public:
		inline void *operator new( size_t inSize, bool inContainer=false,const char *inName="lime.graphics.opengl.ext.ANGLE_translated_shader_source")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		static hx::ObjectPtr< ANGLE_translated_shader_source_obj > __new();
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~ANGLE_translated_shader_source_obj();

		HX_DO_RTTI_ALL;
		Dynamic __Field(const ::String &inString, hx::PropertyAccess inCallProp);
		Dynamic __SetField(const ::String &inString,const Dynamic &inValue, hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		::String __ToString() const { return HX_HCSTRING("ANGLE_translated_shader_source","\x58","\x8f","\x67","\x10"); }

		int TRANSLATED_SHADER_SOURCE_LENGTH_ANGLE;
};

} // end namespace lime
} // end namespace graphics
} // end namespace opengl
} // end namespace ext

#endif /* INCLUDED_lime_graphics_opengl_ext_ANGLE_translated_shader_source */ 
