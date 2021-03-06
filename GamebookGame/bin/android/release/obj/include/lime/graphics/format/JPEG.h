#ifndef INCLUDED_lime_graphics_format_JPEG
#define INCLUDED_lime_graphics_format_JPEG

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS2(haxe,io,Bytes)
HX_DECLARE_CLASS2(lime,graphics,Image)
HX_DECLARE_CLASS3(lime,graphics,format,JPEG)
namespace lime{
namespace graphics{
namespace format{


class HXCPP_CLASS_ATTRIBUTES  JPEG_obj : public hx::Object{
	public:
		typedef hx::Object super;
		typedef JPEG_obj OBJ_;
		JPEG_obj();
		Void __construct();

	public:
		inline void *operator new( size_t inSize, bool inContainer=false,const char *inName="lime.graphics.format.JPEG")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		static hx::ObjectPtr< JPEG_obj > __new();
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~JPEG_obj();

		HX_DO_RTTI_ALL;
		static bool __GetStatic(const ::String &inString, Dynamic &outValue, hx::PropertyAccess inCallProp);
		static void __register();
		::String __ToString() const { return HX_HCSTRING("JPEG","\xa8","\xba","\x26","\x31"); }

		static ::lime::graphics::Image decodeBytes( ::haxe::io::Bytes bytes,hx::Null< bool >  decodeData);
		static Dynamic decodeBytes_dyn();

		static ::lime::graphics::Image decodeFile( ::String path,hx::Null< bool >  decodeData);
		static Dynamic decodeFile_dyn();

		static ::haxe::io::Bytes encode( ::lime::graphics::Image image,int quality);
		static Dynamic encode_dyn();

};

} // end namespace lime
} // end namespace graphics
} // end namespace format

#endif /* INCLUDED_lime_graphics_format_JPEG */ 
