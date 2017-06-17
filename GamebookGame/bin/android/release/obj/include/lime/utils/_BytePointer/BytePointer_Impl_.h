#ifndef INCLUDED_lime_utils__BytePointer_BytePointer_Impl_
#define INCLUDED_lime_utils__BytePointer_BytePointer_Impl_

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS2(haxe,io,Bytes)
HX_DECLARE_CLASS2(lime,utils,ArrayBufferView)
HX_DECLARE_CLASS2(lime,utils,BytePointerData)
HX_DECLARE_CLASS3(lime,utils,_BytePointer,BytePointer_Impl_)
namespace lime{
namespace utils{
namespace _BytePointer{


class HXCPP_CLASS_ATTRIBUTES  BytePointer_Impl__obj : public hx::Object{
	public:
		typedef hx::Object super;
		typedef BytePointer_Impl__obj OBJ_;
		BytePointer_Impl__obj();
		Void __construct();

	public:
		inline void *operator new( size_t inSize, bool inContainer=false,const char *inName="lime.utils._BytePointer.BytePointer_Impl_")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		static hx::ObjectPtr< BytePointer_Impl__obj > __new();
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~BytePointer_Impl__obj();

		HX_DO_RTTI_ALL;
		static bool __GetStatic(const ::String &inString, Dynamic &outValue, hx::PropertyAccess inCallProp);
		static void __register();
		::String __ToString() const { return HX_HCSTRING("BytePointer_Impl_","\xd5","\xd4","\xc9","\xf9"); }

		static ::lime::utils::BytePointerData _new( ::haxe::io::Bytes bytes,hx::Null< int >  offset);
		static Dynamic _new_dyn();

		static Void set( ::lime::utils::BytePointerData this1,::haxe::io::Bytes bytes,::lime::utils::ArrayBufferView bufferView,::haxe::io::Bytes buffer,Dynamic offset);
		static Dynamic set_dyn();

		static int __arrayGet( ::lime::utils::BytePointerData this1,int index);
		static Dynamic __arrayGet_dyn();

		static int __arraySet( ::lime::utils::BytePointerData this1,int index,int value);
		static Dynamic __arraySet_dyn();

		static ::lime::utils::BytePointerData fromArrayBufferView( ::lime::utils::ArrayBufferView arrayBufferView);
		static Dynamic fromArrayBufferView_dyn();

		static ::lime::utils::BytePointerData fromArrayBuffer( ::haxe::io::Bytes buffer);
		static Dynamic fromArrayBuffer_dyn();

		static ::lime::utils::BytePointerData fromBytes( ::haxe::io::Bytes bytes);
		static Dynamic fromBytes_dyn();

		static ::lime::utils::BytePointerData fromBytesData( Array< unsigned char > bytesData);
		static Dynamic fromBytesData_dyn();

		static ::lime::utils::BytePointerData fromFile( ::String path);
		static Dynamic fromFile_dyn();

		static ::lime::utils::BytePointerData fromLimeBytes( ::haxe::io::Bytes bytes);
		static Dynamic fromLimeBytes_dyn();

		static ::lime::utils::ArrayBufferView toUInt8Array( ::lime::utils::BytePointerData bytePointer);
		static Dynamic toUInt8Array_dyn();

		static ::lime::utils::ArrayBufferView toUInt8ClampedArray( ::lime::utils::BytePointerData bytePointer);
		static Dynamic toUInt8ClampedArray_dyn();

		static ::lime::utils::ArrayBufferView toInt8Array( ::lime::utils::BytePointerData bytePointer);
		static Dynamic toInt8Array_dyn();

		static ::lime::utils::ArrayBufferView toUInt16Array( ::lime::utils::BytePointerData bytePointer);
		static Dynamic toUInt16Array_dyn();

		static ::lime::utils::ArrayBufferView toInt16Array( ::lime::utils::BytePointerData bytePointer);
		static Dynamic toInt16Array_dyn();

		static ::lime::utils::ArrayBufferView toUInt32Array( ::lime::utils::BytePointerData bytePointer);
		static Dynamic toUInt32Array_dyn();

		static ::lime::utils::ArrayBufferView toInt32Array( ::lime::utils::BytePointerData bytePointer);
		static Dynamic toInt32Array_dyn();

		static ::lime::utils::ArrayBufferView toFloat32Array( ::lime::utils::BytePointerData bytePointer);
		static Dynamic toFloat32Array_dyn();

		static ::lime::utils::ArrayBufferView toFloat64Array( ::lime::utils::BytePointerData bytePointer);
		static Dynamic toFloat64Array_dyn();

};

} // end namespace lime
} // end namespace utils
} // end namespace _BytePointer

#endif /* INCLUDED_lime_utils__BytePointer_BytePointer_Impl_ */ 
