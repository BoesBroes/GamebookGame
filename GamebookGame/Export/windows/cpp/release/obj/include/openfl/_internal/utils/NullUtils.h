#ifndef INCLUDED_openfl__internal_utils_NullUtils
#define INCLUDED_openfl__internal_utils_NullUtils

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS3(openfl,_internal,utils,NullUtils)
namespace openfl{
namespace _internal{
namespace utils{


class HXCPP_CLASS_ATTRIBUTES  NullUtils_obj : public hx::Object{
	public:
		typedef hx::Object super;
		typedef NullUtils_obj OBJ_;
		NullUtils_obj();
		Void __construct();

	public:
		inline void *operator new( size_t inSize, bool inContainer=false,const char *inName="openfl._internal.utils.NullUtils")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		static hx::ObjectPtr< NullUtils_obj > __new();
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~NullUtils_obj();

		HX_DO_RTTI_ALL;
		static void __register();
		::String __ToString() const { return HX_HCSTRING("NullUtils","\x0a","\x52","\x41","\x61"); }

};

} // end namespace openfl
} // end namespace _internal
} // end namespace utils

#endif /* INCLUDED_openfl__internal_utils_NullUtils */ 
