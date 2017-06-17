#ifndef INCLUDED_openfl_filters_GlowFilter
#define INCLUDED_openfl_filters_GlowFilter

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#ifndef INCLUDED_openfl_filters_BitmapFilter
#include <openfl/filters/BitmapFilter.h>
#endif
HX_DECLARE_CLASS3(openfl,_internal,renderer,RenderSession)
HX_DECLARE_CLASS2(openfl,display,Shader)
HX_DECLARE_CLASS2(openfl,filters,BitmapFilter)
HX_DECLARE_CLASS2(openfl,filters,GlowFilter)
HX_DECLARE_CLASS3(openfl,filters,_GlowFilter,GlowShader)
namespace openfl{
namespace filters{


class HXCPP_CLASS_ATTRIBUTES  GlowFilter_obj : public ::openfl::filters::BitmapFilter_obj{
	public:
		typedef ::openfl::filters::BitmapFilter_obj super;
		typedef GlowFilter_obj OBJ_;
		GlowFilter_obj();
		Void __construct(hx::Null< int >  __o_color,hx::Null< Float >  __o_alpha,hx::Null< Float >  __o_blurX,hx::Null< Float >  __o_blurY,hx::Null< Float >  __o_strength,hx::Null< int >  __o_quality,hx::Null< bool >  __o_inner,hx::Null< bool >  __o_knockout);

	public:
		inline void *operator new( size_t inSize, bool inContainer=false,const char *inName="openfl.filters.GlowFilter")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		static hx::ObjectPtr< GlowFilter_obj > __new(hx::Null< int >  __o_color,hx::Null< Float >  __o_alpha,hx::Null< Float >  __o_blurX,hx::Null< Float >  __o_blurY,hx::Null< Float >  __o_strength,hx::Null< int >  __o_quality,hx::Null< bool >  __o_inner,hx::Null< bool >  __o_knockout);
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~GlowFilter_obj();

		HX_DO_RTTI_ALL;
		Dynamic __Field(const ::String &inString, hx::PropertyAccess inCallProp);
		static bool __GetStatic(const ::String &inString, Dynamic &outValue, hx::PropertyAccess inCallProp);
		Dynamic __SetField(const ::String &inString,const Dynamic &inValue, hx::PropertyAccess inCallProp);
		static bool __SetStatic(const ::String &inString, Dynamic &ioValue, hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		::String __ToString() const { return HX_HCSTRING("GlowFilter","\x45","\xce","\xa2","\x2d"); }

		static void __boot();
		static ::openfl::filters::_GlowFilter::GlowShader __glowShader;
		Float alpha;
		Float blurX;
		Float blurY;
		int color;
		bool inner;
		bool knockout;
		int quality;
		Float strength;
		int horizontalPasses;
		int verticalPasses;
		virtual ::openfl::filters::BitmapFilter clone( );

		virtual ::openfl::display::Shader __initShader( ::openfl::_internal::renderer::RenderSession renderSession,int pass);

		virtual bool set_knockout( bool value);
		Dynamic set_knockout_dyn();

		virtual int set_quality( int value);
		Dynamic set_quality_dyn();

};

} // end namespace openfl
} // end namespace filters

#endif /* INCLUDED_openfl_filters_GlowFilter */ 
