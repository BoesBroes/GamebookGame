#ifndef INCLUDED_lime_graphics_opengl_ext_APPLE_rgb_422
#define INCLUDED_lime_graphics_opengl_ext_APPLE_rgb_422

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS4(lime,graphics,opengl,ext,APPLE_rgb_422)
namespace lime{
namespace graphics{
namespace opengl{
namespace ext{


class HXCPP_CLASS_ATTRIBUTES  APPLE_rgb_422_obj : public hx::Object{
	public:
		typedef hx::Object super;
		typedef APPLE_rgb_422_obj OBJ_;
		APPLE_rgb_422_obj();
		Void __construct();

	public:
		inline void *operator new( size_t inSize, bool inContainer=false,const char *inName="lime.graphics.opengl.ext.APPLE_rgb_422")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		static hx::ObjectPtr< APPLE_rgb_422_obj > __new();
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~APPLE_rgb_422_obj();

		HX_DO_RTTI_ALL;
		Dynamic __Field(const ::String &inString, hx::PropertyAccess inCallProp);
		Dynamic __SetField(const ::String &inString,const Dynamic &inValue, hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		::String __ToString() const { return HX_HCSTRING("APPLE_rgb_422","\x3d","\xac","\xa1","\x11"); }

		int RGB_422_APPLE;
		int UNSIGNED_SHORT_8_8_APPLE;
		int UNSIGNED_SHORT_8_8_REV_APPLE;
};

} // end namespace lime
} // end namespace graphics
} // end namespace opengl
} // end namespace ext

#endif /* INCLUDED_lime_graphics_opengl_ext_APPLE_rgb_422 */ 
