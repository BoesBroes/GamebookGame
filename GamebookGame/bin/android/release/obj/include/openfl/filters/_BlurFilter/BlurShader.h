#ifndef INCLUDED_openfl_filters__BlurFilter_BlurShader
#define INCLUDED_openfl_filters__BlurFilter_BlurShader

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#ifndef INCLUDED_openfl_display_Shader
#include <openfl/display/Shader.h>
#endif
HX_DECLARE_CLASS2(openfl,display,Shader)
HX_DECLARE_CLASS3(openfl,filters,_BlurFilter,BlurShader)
namespace openfl{
namespace filters{
namespace _BlurFilter{


class HXCPP_CLASS_ATTRIBUTES  BlurShader_obj : public ::openfl::display::Shader_obj{
	public:
		typedef ::openfl::display::Shader_obj super;
		typedef BlurShader_obj OBJ_;
		BlurShader_obj();
		Void __construct();

	public:
		inline void *operator new( size_t inSize, bool inContainer=true,const char *inName="openfl.filters._BlurFilter.BlurShader")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		static hx::ObjectPtr< BlurShader_obj > __new();
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~BlurShader_obj();

		HX_DO_RTTI_ALL;
		Dynamic __Field(const ::String &inString, hx::PropertyAccess inCallProp);
		static void __register();
		::String __ToString() const { return HX_HCSTRING("BlurShader","\x4c","\x71","\x5d","\x8b"); }

		virtual Void __update( );

};

} // end namespace openfl
} // end namespace filters
} // end namespace _BlurFilter

#endif /* INCLUDED_openfl_filters__BlurFilter_BlurShader */ 
