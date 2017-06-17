#ifndef INCLUDED_lime_graphics_opengl_ext_ANGLE_pack_reverse_row_order
#define INCLUDED_lime_graphics_opengl_ext_ANGLE_pack_reverse_row_order

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS4(lime,graphics,opengl,ext,ANGLE_pack_reverse_row_order)
namespace lime{
namespace graphics{
namespace opengl{
namespace ext{


class HXCPP_CLASS_ATTRIBUTES  ANGLE_pack_reverse_row_order_obj : public hx::Object{
	public:
		typedef hx::Object super;
		typedef ANGLE_pack_reverse_row_order_obj OBJ_;
		ANGLE_pack_reverse_row_order_obj();
		Void __construct();

	public:
		inline void *operator new( size_t inSize, bool inContainer=false,const char *inName="lime.graphics.opengl.ext.ANGLE_pack_reverse_row_order")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		static hx::ObjectPtr< ANGLE_pack_reverse_row_order_obj > __new();
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~ANGLE_pack_reverse_row_order_obj();

		HX_DO_RTTI_ALL;
		Dynamic __Field(const ::String &inString, hx::PropertyAccess inCallProp);
		Dynamic __SetField(const ::String &inString,const Dynamic &inValue, hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		::String __ToString() const { return HX_HCSTRING("ANGLE_pack_reverse_row_order","\xf2","\x1c","\xe0","\x65"); }

		int PACK_REVERSE_ROW_ORDER_ANGLE;
};

} // end namespace lime
} // end namespace graphics
} // end namespace opengl
} // end namespace ext

#endif /* INCLUDED_lime_graphics_opengl_ext_ANGLE_pack_reverse_row_order */ 
