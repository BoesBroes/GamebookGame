#ifndef INCLUDED_lime_graphics_cairo__CairoImageSurface_CairoImageSurface_Impl_
#define INCLUDED_lime_graphics_cairo__CairoImageSurface_CairoImageSurface_Impl_

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS2(lime,graphics,Image)
HX_DECLARE_CLASS4(lime,graphics,cairo,_CairoImageSurface,CairoImageSurface_Impl_)
namespace lime{
namespace graphics{
namespace cairo{
namespace _CairoImageSurface{


class HXCPP_CLASS_ATTRIBUTES  CairoImageSurface_Impl__obj : public hx::Object{
	public:
		typedef hx::Object super;
		typedef CairoImageSurface_Impl__obj OBJ_;
		CairoImageSurface_Impl__obj();
		Void __construct();

	public:
		inline void *operator new( size_t inSize, bool inContainer=false,const char *inName="lime.graphics.cairo._CairoImageSurface.CairoImageSurface_Impl_")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		static hx::ObjectPtr< CairoImageSurface_Impl__obj > __new();
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~CairoImageSurface_Impl__obj();

		HX_DO_RTTI_ALL;
		static bool __GetStatic(const ::String &inString, Dynamic &outValue, hx::PropertyAccess inCallProp);
		static void __register();
		::String __ToString() const { return HX_HCSTRING("CairoImageSurface_Impl_","\xba","\x74","\x06","\x3c"); }

		static Dynamic _new( int format,int width,int height);
		static Dynamic _new_dyn();

		static Dynamic create( Float data,int format,int width,int height,int stride);
		static Dynamic create_dyn();

		static Dynamic fromImage( ::lime::graphics::Image image);
		static Dynamic fromImage_dyn();

		static Float get_data( Dynamic this1);
		static Dynamic get_data_dyn();

		static int get_format( Dynamic this1);
		static Dynamic get_format_dyn();

		static int get_height( Dynamic this1);
		static Dynamic get_height_dyn();

		static int get_stride( Dynamic this1);
		static Dynamic get_stride_dyn();

		static int get_width( Dynamic this1);
		static Dynamic get_width_dyn();

};

} // end namespace lime
} // end namespace graphics
} // end namespace cairo
} // end namespace _CairoImageSurface

#endif /* INCLUDED_lime_graphics_cairo__CairoImageSurface_CairoImageSurface_Impl_ */ 
