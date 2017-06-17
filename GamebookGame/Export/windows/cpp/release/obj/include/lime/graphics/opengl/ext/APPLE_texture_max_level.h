#ifndef INCLUDED_lime_graphics_opengl_ext_APPLE_texture_max_level
#define INCLUDED_lime_graphics_opengl_ext_APPLE_texture_max_level

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS4(lime,graphics,opengl,ext,APPLE_texture_max_level)
namespace lime{
namespace graphics{
namespace opengl{
namespace ext{


class HXCPP_CLASS_ATTRIBUTES  APPLE_texture_max_level_obj : public hx::Object{
	public:
		typedef hx::Object super;
		typedef APPLE_texture_max_level_obj OBJ_;
		APPLE_texture_max_level_obj();
		Void __construct();

	public:
		inline void *operator new( size_t inSize, bool inContainer=false,const char *inName="lime.graphics.opengl.ext.APPLE_texture_max_level")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		static hx::ObjectPtr< APPLE_texture_max_level_obj > __new();
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~APPLE_texture_max_level_obj();

		HX_DO_RTTI_ALL;
		Dynamic __Field(const ::String &inString, hx::PropertyAccess inCallProp);
		Dynamic __SetField(const ::String &inString,const Dynamic &inValue, hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		::String __ToString() const { return HX_HCSTRING("APPLE_texture_max_level","\x40","\x37","\x3d","\xbe"); }

		int TEXTURE_MAX_LEVEL_APPLE;
};

} // end namespace lime
} // end namespace graphics
} // end namespace opengl
} // end namespace ext

#endif /* INCLUDED_lime_graphics_opengl_ext_APPLE_texture_max_level */ 
