#ifndef INCLUDED_lime__macros_AssetsMacro
#define INCLUDED_lime__macros_AssetsMacro

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS2(lime,_macros,AssetsMacro)
namespace lime{
namespace _macros{


class HXCPP_CLASS_ATTRIBUTES  AssetsMacro_obj : public hx::Object{
	public:
		typedef hx::Object super;
		typedef AssetsMacro_obj OBJ_;
		AssetsMacro_obj();
		Void __construct();

	public:
		inline void *operator new( size_t inSize, bool inContainer=false,const char *inName="lime._macros.AssetsMacro")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		static hx::ObjectPtr< AssetsMacro_obj > __new();
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~AssetsMacro_obj();

		HX_DO_RTTI_ALL;
		static void __register();
		::String __ToString() const { return HX_HCSTRING("AssetsMacro","\x69","\x74","\x4e","\xd6"); }

};

} // end namespace lime
} // end namespace _macros

#endif /* INCLUDED_lime__macros_AssetsMacro */ 
