#ifndef INCLUDED_lime_utils_BytePointerData
#define INCLUDED_lime_utils_BytePointerData

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS2(haxe,io,Bytes)
HX_DECLARE_CLASS2(lime,utils,BytePointerData)
namespace lime{
namespace utils{


class HXCPP_CLASS_ATTRIBUTES  BytePointerData_obj : public hx::Object{
	public:
		typedef hx::Object super;
		typedef BytePointerData_obj OBJ_;
		BytePointerData_obj();
		Void __construct(::haxe::io::Bytes bytes,int offset);

	public:
		inline void *operator new( size_t inSize, bool inContainer=true,const char *inName="lime.utils.BytePointerData")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		static hx::ObjectPtr< BytePointerData_obj > __new(::haxe::io::Bytes bytes,int offset);
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~BytePointerData_obj();

		HX_DO_RTTI_ALL;
		Dynamic __Field(const ::String &inString, hx::PropertyAccess inCallProp);
		Dynamic __SetField(const ::String &inString,const Dynamic &inValue, hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		::String __ToString() const { return HX_HCSTRING("BytePointerData","\x3f","\x33","\xb7","\xc1"); }

		::haxe::io::Bytes bytes;
		int offset;
};

} // end namespace lime
} // end namespace utils

#endif /* INCLUDED_lime_utils_BytePointerData */ 
