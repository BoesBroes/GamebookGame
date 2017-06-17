#ifndef INCLUDED_openfl_filters_BlurFilter
#define INCLUDED_openfl_filters_BlurFilter

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#ifndef INCLUDED_openfl_filters_BitmapFilter
#include <openfl/filters/BitmapFilter.h>
#endif
HX_DECLARE_CLASS3(openfl,_internal,renderer,RenderSession)
HX_DECLARE_CLASS2(openfl,display,Shader)
HX_DECLARE_CLASS2(openfl,filters,BitmapFilter)
HX_DECLARE_CLASS2(openfl,filters,BlurFilter)
HX_DECLARE_CLASS3(openfl,filters,_BlurFilter,BlurShader)
namespace openfl{
namespace filters{


class HXCPP_CLASS_ATTRIBUTES  BlurFilter_obj : public ::openfl::filters::BitmapFilter_obj{
	public:
		typedef ::openfl::filters::BitmapFilter_obj super;
		typedef BlurFilter_obj OBJ_;
		BlurFilter_obj();
		Void __construct(hx::Null< Float >  __o_blurX,hx::Null< Float >  __o_blurY,hx::Null< int >  __o_quality);

	public:
		inline void *operator new( size_t inSize, bool inContainer=false,const char *inName="openfl.filters.BlurFilter")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		static hx::ObjectPtr< BlurFilter_obj > __new(hx::Null< Float >  __o_blurX,hx::Null< Float >  __o_blurY,hx::Null< int >  __o_quality);
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~BlurFilter_obj();

		HX_DO_RTTI_ALL;
		Dynamic __Field(const ::String &inString, hx::PropertyAccess inCallProp);
		static bool __GetStatic(const ::String &inString, Dynamic &outValue, hx::PropertyAccess inCallProp);
		Dynamic __SetField(const ::String &inString,const Dynamic &inValue, hx::PropertyAccess inCallProp);
		static bool __SetStatic(const ::String &inString, Dynamic &ioValue, hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		::String __ToString() const { return HX_HCSTRING("BlurFilter","\xdf","\xd1","\x71","\xf3"); }

		static void __boot();
		static ::openfl::filters::_BlurFilter::BlurShader __blurShader;
		Float blurX;
		Float blurY;
		int quality;
		int horizontalPasses;
		int verticalPasses;
		virtual ::openfl::filters::BitmapFilter clone( );

		virtual ::openfl::display::Shader __initShader( ::openfl::_internal::renderer::RenderSession renderSession,int pass);

		virtual int set_quality( int value);
		Dynamic set_quality_dyn();

};

} // end namespace openfl
} // end namespace filters

#endif /* INCLUDED_openfl_filters_BlurFilter */ 
