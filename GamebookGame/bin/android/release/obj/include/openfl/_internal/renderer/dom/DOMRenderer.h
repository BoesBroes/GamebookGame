#ifndef INCLUDED_openfl__internal_renderer_dom_DOMRenderer
#define INCLUDED_openfl__internal_renderer_dom_DOMRenderer

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#ifndef INCLUDED_openfl__internal_renderer_AbstractRenderer
#include <openfl/_internal/renderer/AbstractRenderer.h>
#endif
HX_DECLARE_CLASS2(lime,app,IModule)
HX_DECLARE_CLASS2(lime,graphics,DOMRenderContext)
HX_DECLARE_CLASS3(openfl,_internal,renderer,AbstractRenderer)
HX_DECLARE_CLASS3(openfl,_internal,renderer,RenderSession)
HX_DECLARE_CLASS4(openfl,_internal,renderer,dom,DOMRenderer)
HX_DECLARE_CLASS2(openfl,display,DisplayObject)
HX_DECLARE_CLASS2(openfl,display,DisplayObjectContainer)
HX_DECLARE_CLASS2(openfl,display,IBitmapDrawable)
HX_DECLARE_CLASS2(openfl,display,InteractiveObject)
HX_DECLARE_CLASS2(openfl,display,Stage)
HX_DECLARE_CLASS2(openfl,events,EventDispatcher)
HX_DECLARE_CLASS2(openfl,events,IEventDispatcher)
namespace openfl{
namespace _internal{
namespace renderer{
namespace dom{


class HXCPP_CLASS_ATTRIBUTES  DOMRenderer_obj : public ::openfl::_internal::renderer::AbstractRenderer_obj{
	public:
		typedef ::openfl::_internal::renderer::AbstractRenderer_obj super;
		typedef DOMRenderer_obj OBJ_;
		DOMRenderer_obj();
		Void __construct(::openfl::display::Stage stage,::lime::graphics::DOMRenderContext element);

	public:
		inline void *operator new( size_t inSize, bool inContainer=true,const char *inName="openfl._internal.renderer.dom.DOMRenderer")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		static hx::ObjectPtr< DOMRenderer_obj > __new(::openfl::display::Stage stage,::lime::graphics::DOMRenderContext element);
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~DOMRenderer_obj();

		HX_DO_RTTI_ALL;
		Dynamic __Field(const ::String &inString, hx::PropertyAccess inCallProp);
		static bool __GetStatic(const ::String &inString, Dynamic &outValue, hx::PropertyAccess inCallProp);
		Dynamic __SetField(const ::String &inString,const Dynamic &inValue, hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		::String __ToString() const { return HX_HCSTRING("DOMRenderer","\xc5","\x91","\x39","\x91"); }

		static Void applyStyle( ::openfl::display::DisplayObject displayObject,::openfl::_internal::renderer::RenderSession renderSession,bool setTransform,bool setAlpha,bool setClip);
		static Dynamic applyStyle_dyn();

		static Void updateClip( ::openfl::display::DisplayObject displayObject,::openfl::_internal::renderer::RenderSession renderSession);
		static Dynamic updateClip_dyn();

		::lime::graphics::DOMRenderContext element;
		virtual Void render( );

		virtual Void renderStage3D( );

};

} // end namespace openfl
} // end namespace _internal
} // end namespace renderer
} // end namespace dom

#endif /* INCLUDED_openfl__internal_renderer_dom_DOMRenderer */ 
