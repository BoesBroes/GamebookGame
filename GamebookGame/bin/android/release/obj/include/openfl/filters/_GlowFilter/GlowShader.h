#ifndef INCLUDED_openfl_filters__GlowFilter_GlowShader
#define INCLUDED_openfl_filters__GlowFilter_GlowShader

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#ifndef INCLUDED_openfl_display_Shader
#include <openfl/display/Shader.h>
#endif
HX_DECLARE_CLASS2(openfl,display,Shader)
HX_DECLARE_CLASS3(openfl,filters,_GlowFilter,GlowShader)
namespace openfl{
namespace filters{
namespace _GlowFilter{


class HXCPP_CLASS_ATTRIBUTES  GlowShader_obj : public ::openfl::display::Shader_obj{
	public:
		typedef ::openfl::display::Shader_obj super;
		typedef GlowShader_obj OBJ_;
		GlowShader_obj();
		Void __construct();

	public:
		inline void *operator new( size_t inSize, bool inContainer=true,const char *inName="openfl.filters._GlowFilter.GlowShader")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		static hx::ObjectPtr< GlowShader_obj > __new();
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~GlowShader_obj();

		HX_DO_RTTI_ALL;
		Dynamic __Field(const ::String &inString, hx::PropertyAccess inCallProp);
		static void __register();
		::String __ToString() const { return HX_HCSTRING("GlowShader","\xb2","\x6d","\x8e","\xc5"); }

		virtual Void __update( );

};

} // end namespace openfl
} // end namespace filters
} // end namespace _GlowFilter

#endif /* INCLUDED_openfl_filters__GlowFilter_GlowShader */ 
