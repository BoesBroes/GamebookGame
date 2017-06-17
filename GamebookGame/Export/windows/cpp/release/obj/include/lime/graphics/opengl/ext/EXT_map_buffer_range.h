#ifndef INCLUDED_lime_graphics_opengl_ext_EXT_map_buffer_range
#define INCLUDED_lime_graphics_opengl_ext_EXT_map_buffer_range

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS4(lime,graphics,opengl,ext,EXT_map_buffer_range)
namespace lime{
namespace graphics{
namespace opengl{
namespace ext{


class HXCPP_CLASS_ATTRIBUTES  EXT_map_buffer_range_obj : public hx::Object{
	public:
		typedef hx::Object super;
		typedef EXT_map_buffer_range_obj OBJ_;
		EXT_map_buffer_range_obj();
		Void __construct();

	public:
		inline void *operator new( size_t inSize, bool inContainer=false,const char *inName="lime.graphics.opengl.ext.EXT_map_buffer_range")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		static hx::ObjectPtr< EXT_map_buffer_range_obj > __new();
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~EXT_map_buffer_range_obj();

		HX_DO_RTTI_ALL;
		Dynamic __Field(const ::String &inString, hx::PropertyAccess inCallProp);
		Dynamic __SetField(const ::String &inString,const Dynamic &inValue, hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		::String __ToString() const { return HX_HCSTRING("EXT_map_buffer_range","\x7f","\x25","\x48","\xf8"); }

		int MAP_READ_BIT_EXT;
		int MAP_WRITE_BIT_EXT;
		int MAP_INVALIDATE_RANGE_BIT_EXT;
		int MAP_INVALIDATE_BUFFER_BIT_EXT;
		int MAP_FLUSH_EXPLICIT_BIT_EXT;
		int MAP_UNSYNCHRONIZED_BIT_EXT;
};

} // end namespace lime
} // end namespace graphics
} // end namespace opengl
} // end namespace ext

#endif /* INCLUDED_lime_graphics_opengl_ext_EXT_map_buffer_range */ 
