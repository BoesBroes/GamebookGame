#ifndef INCLUDED_lime_graphics_opengl_ext_EXT_unpack_subimage
#define INCLUDED_lime_graphics_opengl_ext_EXT_unpack_subimage

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS4(lime,graphics,opengl,ext,EXT_unpack_subimage)
namespace lime{
namespace graphics{
namespace opengl{
namespace ext{


class HXCPP_CLASS_ATTRIBUTES  EXT_unpack_subimage_obj : public hx::Object{
	public:
		typedef hx::Object super;
		typedef EXT_unpack_subimage_obj OBJ_;
		EXT_unpack_subimage_obj();
		Void __construct();

	public:
		inline void *operator new( size_t inSize, bool inContainer=false,const char *inName="lime.graphics.opengl.ext.EXT_unpack_subimage")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		static hx::ObjectPtr< EXT_unpack_subimage_obj > __new();
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~EXT_unpack_subimage_obj();

		HX_DO_RTTI_ALL;
		Dynamic __Field(const ::String &inString, hx::PropertyAccess inCallProp);
		Dynamic __SetField(const ::String &inString,const Dynamic &inValue, hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		::String __ToString() const { return HX_HCSTRING("EXT_unpack_subimage","\x4a","\x96","\x0e","\xd9"); }

		int UNPACK_ROW_LENGTH;
		int UNPACK_SKIP_ROWS;
		int UNPACK_SKIP_PIXELS;
};

} // end namespace lime
} // end namespace graphics
} // end namespace opengl
} // end namespace ext

#endif /* INCLUDED_lime_graphics_opengl_ext_EXT_unpack_subimage */ 
