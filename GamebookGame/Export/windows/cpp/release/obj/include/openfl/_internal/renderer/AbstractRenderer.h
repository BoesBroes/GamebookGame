#ifndef INCLUDED_openfl__internal_renderer_AbstractRenderer
#define INCLUDED_openfl__internal_renderer_AbstractRenderer

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS2(lime,app,IModule)
HX_DECLARE_CLASS3(openfl,_internal,renderer,AbstractRenderer)
HX_DECLARE_CLASS3(openfl,_internal,renderer,RenderSession)
HX_DECLARE_CLASS2(openfl,display,DisplayObject)
HX_DECLARE_CLASS2(openfl,display,DisplayObjectContainer)
HX_DECLARE_CLASS2(openfl,display,IBitmapDrawable)
HX_DECLARE_CLASS2(openfl,display,InteractiveObject)
HX_DECLARE_CLASS2(openfl,display,Stage)
HX_DECLARE_CLASS2(openfl,events,EventDispatcher)
HX_DECLARE_CLASS2(openfl,events,IEventDispatcher)
HX_DECLARE_CLASS2(openfl,geom,Rectangle)
namespace openfl{
namespace _internal{
namespace renderer{


class HXCPP_CLASS_ATTRIBUTES  AbstractRenderer_obj : public hx::Object{
	public:
		typedef hx::Object super;
		typedef AbstractRenderer_obj OBJ_;
		AbstractRenderer_obj();
		Void __construct(::openfl::display::Stage stage);

	public:
		inline void *operator new( size_t inSize, bool inContainer=true,const char *inName="openfl._internal.renderer.AbstractRenderer")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		static hx::ObjectPtr< AbstractRenderer_obj > __new(::openfl::display::Stage stage);
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~AbstractRenderer_obj();

		HX_DO_RTTI_ALL;
		Dynamic __Field(const ::String &inString, hx::PropertyAccess inCallProp);
		Dynamic __SetField(const ::String &inString,const Dynamic &inValue, hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		::String __ToString() const { return HX_HCSTRING("AbstractRenderer","\x65","\xd0","\xe5","\x44"); }

		int height;
		int width;
		bool transparent;
		::openfl::geom::Rectangle viewport;
		::openfl::_internal::renderer::RenderSession renderSession;
		::openfl::display::Stage stage;
		virtual Void clear( );
		Dynamic clear_dyn();

		virtual Void render( );
		Dynamic render_dyn();

		virtual Void renderStage3D( );
		Dynamic renderStage3D_dyn();

		virtual Void resize( int width,int height);
		Dynamic resize_dyn();

};

} // end namespace openfl
} // end namespace _internal
} // end namespace renderer

#endif /* INCLUDED_openfl__internal_renderer_AbstractRenderer */ 
