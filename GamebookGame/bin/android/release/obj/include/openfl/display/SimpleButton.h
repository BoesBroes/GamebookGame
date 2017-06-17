#ifndef INCLUDED_openfl_display_SimpleButton
#define INCLUDED_openfl_display_SimpleButton

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#ifndef INCLUDED_openfl_display_InteractiveObject
#include <openfl/display/InteractiveObject.h>
#endif
HX_DECLARE_CLASS2(lime,app,IModule)
HX_DECLARE_CLASS2(lime,ui,MouseCursor)
HX_DECLARE_CLASS2(openfl,_Vector,IVector)
HX_DECLARE_CLASS2(openfl,_Vector,ObjectVector)
HX_DECLARE_CLASS3(openfl,_internal,renderer,RenderSession)
HX_DECLARE_CLASS3(openfl,_internal,swf,SWFLite)
HX_DECLARE_CLASS3(openfl,_internal,symbols,ButtonSymbol)
HX_DECLARE_CLASS3(openfl,_internal,symbols,SWFSymbol)
HX_DECLARE_CLASS2(openfl,display,DisplayObject)
HX_DECLARE_CLASS2(openfl,display,DisplayObjectContainer)
HX_DECLARE_CLASS2(openfl,display,IBitmapDrawable)
HX_DECLARE_CLASS2(openfl,display,InteractiveObject)
HX_DECLARE_CLASS2(openfl,display,SimpleButton)
HX_DECLARE_CLASS2(openfl,display,Stage)
HX_DECLARE_CLASS2(openfl,events,Event)
HX_DECLARE_CLASS2(openfl,events,EventDispatcher)
HX_DECLARE_CLASS2(openfl,events,IEventDispatcher)
HX_DECLARE_CLASS2(openfl,events,MouseEvent)
HX_DECLARE_CLASS2(openfl,geom,Matrix)
HX_DECLARE_CLASS2(openfl,geom,Rectangle)
HX_DECLARE_CLASS2(openfl,media,SoundTransform)
namespace openfl{
namespace display{


class HXCPP_CLASS_ATTRIBUTES  SimpleButton_obj : public ::openfl::display::InteractiveObject_obj{
	public:
		typedef ::openfl::display::InteractiveObject_obj super;
		typedef SimpleButton_obj OBJ_;
		SimpleButton_obj();
		Void __construct(::openfl::display::DisplayObject upState,::openfl::display::DisplayObject overState,::openfl::display::DisplayObject downState,::openfl::display::DisplayObject hitTestState);

	public:
		inline void *operator new( size_t inSize, bool inContainer=true,const char *inName="openfl.display.SimpleButton")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		static hx::ObjectPtr< SimpleButton_obj > __new(::openfl::display::DisplayObject upState,::openfl::display::DisplayObject overState,::openfl::display::DisplayObject downState,::openfl::display::DisplayObject hitTestState);
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~SimpleButton_obj();

		HX_DO_RTTI_ALL;
		Dynamic __Field(const ::String &inString, hx::PropertyAccess inCallProp);
		static bool __GetStatic(const ::String &inString, Dynamic &outValue, hx::PropertyAccess inCallProp);
		Dynamic __SetField(const ::String &inString,const Dynamic &inValue, hx::PropertyAccess inCallProp);
		static bool __SetStatic(const ::String &inString, Dynamic &ioValue, hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		::String __ToString() const { return HX_HCSTRING("SimpleButton","\xe4","\x57","\x52","\xed"); }

		static ::openfl::_internal::swf::SWFLite __initSWF;
		static ::openfl::_internal::symbols::ButtonSymbol __initSymbol;
		::openfl::display::DisplayObject downState;
		bool enabled;
		::openfl::display::DisplayObject hitTestState;
		::openfl::display::DisplayObject overState;
		bool trackAsMenu;
		::openfl::display::DisplayObject upState;
		bool useHandCursor;
		::openfl::display::DisplayObject __currentState;
		bool __ignoreEvent;
		::openfl::_Vector::ObjectVector __previousStates;
		::openfl::media::SoundTransform __soundTransform;
		::openfl::_internal::symbols::ButtonSymbol __symbol;
		virtual Void __fromSymbol( ::openfl::_internal::swf::SWFLite swf,::openfl::_internal::symbols::ButtonSymbol symbol);
		Dynamic __fromSymbol_dyn();

		virtual Void __getBounds( ::openfl::geom::Rectangle rect,::openfl::geom::Matrix matrix);

		virtual Void __getRenderBounds( ::openfl::geom::Rectangle rect,::openfl::geom::Matrix matrix);

		virtual ::lime::ui::MouseCursor __getCursor( );

		virtual bool __hitTest( Float x,Float y,bool shapeFlag,Array< ::Dynamic > stack,bool interactiveOnly,::openfl::display::DisplayObject hitObject);

		virtual bool __hitTestMask( Float x,Float y);

		virtual Void __renderCairo( ::openfl::_internal::renderer::RenderSession renderSession);

		virtual Void __renderCairoMask( ::openfl::_internal::renderer::RenderSession renderSession);

		virtual Void __renderCanvas( ::openfl::_internal::renderer::RenderSession renderSession);

		virtual Void __renderCanvasMask( ::openfl::_internal::renderer::RenderSession renderSession);

		virtual Void __renderDOM( ::openfl::_internal::renderer::RenderSession renderSession);

		virtual Void __renderGL( ::openfl::_internal::renderer::RenderSession renderSession);

		virtual Void __resetTransform( ::openfl::display::DisplayObject state,::openfl::geom::Matrix cacheTransform);
		Dynamic __resetTransform_dyn();

		virtual Void __setStageReference( ::openfl::display::Stage stage);

		virtual ::openfl::geom::Matrix __updateTransform( ::openfl::display::DisplayObject state);
		Dynamic __updateTransform_dyn();

		virtual Void __updateTransforms( ::openfl::geom::Matrix overrideTransform);

		virtual ::openfl::display::DisplayObject set_downState( ::openfl::display::DisplayObject downState);
		Dynamic set_downState_dyn();

		virtual ::openfl::display::DisplayObject set_hitTestState( ::openfl::display::DisplayObject hitTestState);
		Dynamic set_hitTestState_dyn();

		virtual ::openfl::display::DisplayObject set_overState( ::openfl::display::DisplayObject overState);
		Dynamic set_overState_dyn();

		virtual ::openfl::media::SoundTransform get_soundTransform( );
		Dynamic get_soundTransform_dyn();

		virtual ::openfl::media::SoundTransform set_soundTransform( ::openfl::media::SoundTransform value);
		Dynamic set_soundTransform_dyn();

		virtual ::openfl::display::DisplayObject set_upState( ::openfl::display::DisplayObject upState);
		Dynamic set_upState_dyn();

		virtual ::openfl::display::DisplayObject set___currentState( ::openfl::display::DisplayObject value);
		Dynamic set___currentState_dyn();

		virtual Void __this_onMouseDown( ::openfl::events::MouseEvent event);
		Dynamic __this_onMouseDown_dyn();

		virtual Void __this_onMouseOut( ::openfl::events::MouseEvent event);
		Dynamic __this_onMouseOut_dyn();

		virtual Void __this_onMouseOver( ::openfl::events::MouseEvent event);
		Dynamic __this_onMouseOver_dyn();

		virtual Void __this_onMouseUp( ::openfl::events::MouseEvent event);
		Dynamic __this_onMouseUp_dyn();

};

} // end namespace openfl
} // end namespace display

#endif /* INCLUDED_openfl_display_SimpleButton */ 
