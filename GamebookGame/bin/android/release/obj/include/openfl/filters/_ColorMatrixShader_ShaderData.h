#ifndef INCLUDED_openfl_filters__ColorMatrixShader_ShaderData
#define INCLUDED_openfl_filters__ColorMatrixShader_ShaderData

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#ifndef INCLUDED_openfl_display_ShaderData
#include <openfl/display/ShaderData.h>
#endif
HX_DECLARE_CLASS2(haxe,io,Bytes)
HX_DECLARE_CLASS2(openfl,display,ShaderData)
HX_DECLARE_CLASS2(openfl,display,ShaderParameter_Float)
HX_DECLARE_CLASS2(openfl,filters,_ColorMatrixShader_ShaderData)
HX_DECLARE_CLASS2(openfl,utils,ByteArrayData)
HX_DECLARE_CLASS2(openfl,utils,IDataInput)
HX_DECLARE_CLASS2(openfl,utils,IDataOutput)
namespace openfl{
namespace filters{


class HXCPP_CLASS_ATTRIBUTES  _ColorMatrixShader_ShaderData_obj : public ::openfl::display::ShaderData_obj{
	public:
		typedef ::openfl::display::ShaderData_obj super;
		typedef _ColorMatrixShader_ShaderData_obj OBJ_;
		_ColorMatrixShader_ShaderData_obj();
		Void __construct(::openfl::utils::ByteArrayData byteArray);

	public:
		inline void *operator new( size_t inSize, bool inContainer=true,const char *inName="openfl.filters._ColorMatrixShader_ShaderData")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		static hx::ObjectPtr< _ColorMatrixShader_ShaderData_obj > __new(::openfl::utils::ByteArrayData byteArray);
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~_ColorMatrixShader_ShaderData_obj();

		HX_DO_RTTI_ALL;
		Dynamic __Field(const ::String &inString, hx::PropertyAccess inCallProp);
		Dynamic __SetField(const ::String &inString,const Dynamic &inValue, hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		::String __ToString() const { return HX_HCSTRING("_ColorMatrixShader_ShaderData","\x84","\x42","\xca","\x69"); }

		::openfl::display::ShaderParameter_Float uMultipliers;
		::openfl::display::ShaderParameter_Float uOffsets;
};

} // end namespace openfl
} // end namespace filters

#endif /* INCLUDED_openfl_filters__ColorMatrixShader_ShaderData */ 
