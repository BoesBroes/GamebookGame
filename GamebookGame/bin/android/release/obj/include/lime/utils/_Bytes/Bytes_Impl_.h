#ifndef INCLUDED_lime_utils__Bytes_Bytes_Impl_
#define INCLUDED_lime_utils__Bytes_Bytes_Impl_

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS2(haxe,io,Bytes)
HX_DECLARE_CLASS2(lime,app,Future)
HX_DECLARE_CLASS3(lime,utils,_Bytes,Bytes_Impl_)
namespace lime{
namespace utils{
namespace _Bytes{


class HXCPP_CLASS_ATTRIBUTES  Bytes_Impl__obj : public hx::Object{
	public:
		typedef hx::Object super;
		typedef Bytes_Impl__obj OBJ_;
		Bytes_Impl__obj();
		Void __construct();

	public:
		inline void *operator new( size_t inSize, bool inContainer=false,const char *inName="lime.utils._Bytes.Bytes_Impl_")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		static hx::ObjectPtr< Bytes_Impl__obj > __new();
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~Bytes_Impl__obj();

		HX_DO_RTTI_ALL;
		static bool __GetStatic(const ::String &inString, Dynamic &outValue, hx::PropertyAccess inCallProp);
		static void __register();
		::String __ToString() const { return HX_HCSTRING("Bytes_Impl_","\x2b","\x7f","\x82","\x3d"); }

		static ::haxe::io::Bytes _new( int length,Array< unsigned char > bytesData);
		static Dynamic _new_dyn();

		static ::haxe::io::Bytes alloc( int length);
		static Dynamic alloc_dyn();

		static int fastGet( Array< unsigned char > b,int pos);
		static Dynamic fastGet_dyn();

		static ::haxe::io::Bytes fromBytes( ::haxe::io::Bytes bytes);
		static Dynamic fromBytes_dyn();

		static ::haxe::io::Bytes fromFile( ::String path);
		static Dynamic fromFile_dyn();

		static ::lime::app::Future loadFromBytes( ::haxe::io::Bytes bytes);
		static Dynamic loadFromBytes_dyn();

		static ::lime::app::Future loadFromFile( ::String path);
		static Dynamic loadFromFile_dyn();

		static ::haxe::io::Bytes ofData( Array< unsigned char > b);
		static Dynamic ofData_dyn();

		static ::haxe::io::Bytes ofString( ::String s);
		static Dynamic ofString_dyn();

		static ::haxe::io::Bytes __fromNativePointer( Dynamic data,int length);
		static Dynamic __fromNativePointer_dyn();

};

} // end namespace lime
} // end namespace utils
} // end namespace _Bytes

#endif /* INCLUDED_lime_utils__Bytes_Bytes_Impl_ */ 
