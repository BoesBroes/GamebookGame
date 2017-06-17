#ifndef INCLUDED_openfl_filters_ColorMatrixFilter
#define INCLUDED_openfl_filters_ColorMatrixFilter

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#ifndef INCLUDED_openfl_filters_BitmapFilter
#include <openfl/filters/BitmapFilter.h>
#endif
HX_DECLARE_CLASS3(openfl,_internal,renderer,RenderSession)
HX_DECLARE_CLASS2(openfl,display,BitmapData)
HX_DECLARE_CLASS2(openfl,display,IBitmapDrawable)
HX_DECLARE_CLASS2(openfl,display,Shader)
HX_DECLARE_CLASS2(openfl,filters,BitmapFilter)
HX_DECLARE_CLASS2(openfl,filters,ColorMatrixFilter)
HX_DECLARE_CLASS3(openfl,filters,_ColorMatrixFilter,ColorMatrixShader)
HX_DECLARE_CLASS2(openfl,geom,Point)
HX_DECLARE_CLASS2(openfl,geom,Rectangle)
namespace openfl{
namespace filters{


class HXCPP_CLASS_ATTRIBUTES  ColorMatrixFilter_obj : public ::openfl::filters::BitmapFilter_obj{
	public:
		typedef ::openfl::filters::BitmapFilter_obj super;
		typedef ColorMatrixFilter_obj OBJ_;
		ColorMatrixFilter_obj();
		Void __construct(Array< Float > matrix);

	public:
		inline void *operator new( size_t inSize, bool inContainer=true,const char *inName="openfl.filters.ColorMatrixFilter")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		static hx::ObjectPtr< ColorMatrixFilter_obj > __new(Array< Float > matrix);
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~ColorMatrixFilter_obj();

		HX_DO_RTTI_ALL;
		Dynamic __Field(const ::String &inString, hx::PropertyAccess inCallProp);
		static bool __GetStatic(const ::String &inString, Dynamic &outValue, hx::PropertyAccess inCallProp);
		Dynamic __SetField(const ::String &inString,const Dynamic &inValue, hx::PropertyAccess inCallProp);
		static bool __SetStatic(const ::String &inString, Dynamic &ioValue, hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		::String __ToString() const { return HX_HCSTRING("ColorMatrixFilter","\xbc","\xf6","\x5b","\x50"); }

		static void __boot();
		static ::openfl::filters::_ColorMatrixFilter::ColorMatrixShader __colorMatrixShader;
		Array< Float > matrix;
		virtual ::openfl::filters::BitmapFilter clone( );

		virtual Void __applyFilter( ::openfl::display::BitmapData sourceBitmapData,::openfl::display::BitmapData destBitmapData,::openfl::geom::Rectangle sourceRect,::openfl::geom::Point destPoint);

		virtual ::openfl::display::Shader __initShader( ::openfl::_internal::renderer::RenderSession renderSession,int pass);

		virtual Array< Float > set_matrix( Array< Float > value);
		Dynamic set_matrix_dyn();

};

} // end namespace openfl
} // end namespace filters

#endif /* INCLUDED_openfl_filters_ColorMatrixFilter */ 
