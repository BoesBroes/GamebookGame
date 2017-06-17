#include <hxcpp.h>

#ifndef INCLUDED_lime_app_IModule
#include <lime/app/IModule.h>
#endif
#ifndef INCLUDED_lime_graphics_CanvasRenderContext
#include <lime/graphics/CanvasRenderContext.h>
#endif
#ifndef INCLUDED_lime_ui_MouseCursor
#include <lime/ui/MouseCursor.h>
#endif
#ifndef INCLUDED_lime_utils_ObjectPool_openfl_geom_Matrix
#include <lime/utils/ObjectPool_openfl_geom_Matrix.h>
#endif
#ifndef INCLUDED_openfl__Vector_IVector
#include <openfl/_Vector/IVector.h>
#endif
#ifndef INCLUDED_openfl__Vector_ObjectVector
#include <openfl/_Vector/ObjectVector.h>
#endif
#ifndef INCLUDED_openfl__internal_renderer_AbstractMaskManager
#include <openfl/_internal/renderer/AbstractMaskManager.h>
#endif
#ifndef INCLUDED_openfl__internal_renderer_RenderSession
#include <openfl/_internal/renderer/RenderSession.h>
#endif
#ifndef INCLUDED_openfl__internal_swf_SWFLite
#include <openfl/_internal/swf/SWFLite.h>
#endif
#ifndef INCLUDED_openfl__internal_symbols_ButtonSymbol
#include <openfl/_internal/symbols/ButtonSymbol.h>
#endif
#ifndef INCLUDED_openfl__internal_symbols_SWFSymbol
#include <openfl/_internal/symbols/SWFSymbol.h>
#endif
#ifndef INCLUDED_openfl__internal_symbols_SpriteSymbol
#include <openfl/_internal/symbols/SpriteSymbol.h>
#endif
#ifndef INCLUDED_openfl_display_DisplayObject
#include <openfl/display/DisplayObject.h>
#endif
#ifndef INCLUDED_openfl_display_DisplayObjectContainer
#include <openfl/display/DisplayObjectContainer.h>
#endif
#ifndef INCLUDED_openfl_display_Graphics
#include <openfl/display/Graphics.h>
#endif
#ifndef INCLUDED_openfl_display_IBitmapDrawable
#include <openfl/display/IBitmapDrawable.h>
#endif
#ifndef INCLUDED_openfl_display_InteractiveObject
#include <openfl/display/InteractiveObject.h>
#endif
#ifndef INCLUDED_openfl_display_MovieClip
#include <openfl/display/MovieClip.h>
#endif
#ifndef INCLUDED_openfl_display_SimpleButton
#include <openfl/display/SimpleButton.h>
#endif
#ifndef INCLUDED_openfl_display_Sprite
#include <openfl/display/Sprite.h>
#endif
#ifndef INCLUDED_openfl_display_Stage
#include <openfl/display/Stage.h>
#endif
#ifndef INCLUDED_openfl_events_Event
#include <openfl/events/Event.h>
#endif
#ifndef INCLUDED_openfl_events_EventDispatcher
#include <openfl/events/EventDispatcher.h>
#endif
#ifndef INCLUDED_openfl_events_IEventDispatcher
#include <openfl/events/IEventDispatcher.h>
#endif
#ifndef INCLUDED_openfl_events_MouseEvent
#include <openfl/events/MouseEvent.h>
#endif
#ifndef INCLUDED_openfl_geom_Matrix
#include <openfl/geom/Matrix.h>
#endif
#ifndef INCLUDED_openfl_geom_Rectangle
#include <openfl/geom/Rectangle.h>
#endif
#ifndef INCLUDED_openfl_media_SoundTransform
#include <openfl/media/SoundTransform.h>
#endif
namespace openfl{
namespace display{

Void SimpleButton_obj::__construct(::openfl::display::DisplayObject upState,::openfl::display::DisplayObject overState,::openfl::display::DisplayObject downState,::openfl::display::DisplayObject hitTestState)
{
{
	super::__construct();
	this->enabled = true;
	this->trackAsMenu = false;
	this->useHandCursor = true;
	bool tmp = (upState != null());
	::openfl::display::DisplayObject tmp1;
	if ((tmp)){
		tmp1 = upState;
	}
	else{
		tmp1 = ::openfl::display::DisplayObject_obj::__new();
	}
	this->set_upState(tmp1);
	::openfl::display::DisplayObject tmp2 = overState;
	this->set_overState(tmp2);
	::openfl::display::DisplayObject tmp3 = downState;
	this->set_downState(tmp3);
	bool tmp4 = (hitTestState != null());
	::openfl::display::DisplayObject tmp5;
	if ((tmp4)){
		tmp5 = hitTestState;
	}
	else{
		tmp5 = ::openfl::display::DisplayObject_obj::__new();
	}
	this->set_hitTestState(tmp5);
	Dynamic tmp6 = this->__this_onMouseDown_dyn();
	this->addEventListener(HX_HCSTRING("mouseDown","\x27","\xb1","\xc2","\xee"),tmp6,null(),null(),null());
	Dynamic tmp7 = this->__this_onMouseOut_dyn();
	this->addEventListener(HX_HCSTRING("mouseOut","\x69","\xe7","\x1d","\xa4"),tmp7,null(),null(),null());
	Dynamic tmp8 = this->__this_onMouseOver_dyn();
	this->addEventListener(HX_HCSTRING("mouseOver","\x19","\x4a","\x0d","\xf6"),tmp8,null(),null(),null());
	Dynamic tmp9 = this->__this_onMouseUp_dyn();
	this->addEventListener(HX_HCSTRING("mouseUp","\xe0","\xf3","\x72","\xc0"),tmp9,null(),null(),null());
	::openfl::display::DisplayObject tmp10 = this->upState;
	this->set___currentState(tmp10);
	::openfl::_internal::symbols::ButtonSymbol tmp11 = ::openfl::display::SimpleButton_obj::__initSymbol;
	bool tmp12 = (tmp11 != null());
	if ((tmp12)){
		::openfl::_internal::swf::SWFLite tmp13 = ::openfl::display::SimpleButton_obj::__initSWF;
		::openfl::_internal::swf::SWFLite swf = tmp13;
		::openfl::_internal::symbols::ButtonSymbol tmp14 = ::openfl::display::SimpleButton_obj::__initSymbol;
		this->__symbol = tmp14;
		::openfl::display::SimpleButton_obj::__initSWF = null();
		::openfl::display::SimpleButton_obj::__initSymbol = null();
		::openfl::_internal::swf::SWFLite tmp15 = swf;
		::openfl::_internal::symbols::ButtonSymbol tmp16 = this->__symbol;
		this->__fromSymbol(tmp15,tmp16);
	}
}
;
	return null();
}

//SimpleButton_obj::~SimpleButton_obj() { }

Dynamic SimpleButton_obj::__CreateEmpty() { return  new SimpleButton_obj; }
hx::ObjectPtr< SimpleButton_obj > SimpleButton_obj::__new(::openfl::display::DisplayObject upState,::openfl::display::DisplayObject overState,::openfl::display::DisplayObject downState,::openfl::display::DisplayObject hitTestState)
{  hx::ObjectPtr< SimpleButton_obj > _result_ = new SimpleButton_obj();
	_result_->__construct(upState,overState,downState,hitTestState);
	return _result_;}

Dynamic SimpleButton_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< SimpleButton_obj > _result_ = new SimpleButton_obj();
	_result_->__construct(inArgs[0],inArgs[1],inArgs[2],inArgs[3]);
	return _result_;}

Void SimpleButton_obj::__fromSymbol( ::openfl::_internal::swf::SWFLite swf,::openfl::_internal::symbols::ButtonSymbol symbol){
{
		this->__symbol = symbol;
		bool tmp = (symbol->downState != null());
		if ((tmp)){
			::openfl::_internal::swf::SWFLite tmp1 = swf;
			::openfl::display::MovieClip tmp2 = hx::TCast< ::openfl::display::MovieClip >::cast(symbol->downState->__createObject(tmp1));
			this->set_downState(tmp2);
		}
		bool tmp1 = (symbol->hitState != null());
		if ((tmp1)){
			::openfl::_internal::swf::SWFLite tmp2 = swf;
			::openfl::display::MovieClip tmp3 = hx::TCast< ::openfl::display::MovieClip >::cast(symbol->hitState->__createObject(tmp2));
			this->set_hitTestState(tmp3);
		}
		bool tmp2 = (symbol->overState != null());
		if ((tmp2)){
			::openfl::_internal::swf::SWFLite tmp3 = swf;
			::openfl::display::MovieClip tmp4 = hx::TCast< ::openfl::display::MovieClip >::cast(symbol->overState->__createObject(tmp3));
			this->set_overState(tmp4);
		}
		bool tmp3 = (symbol->upState != null());
		if ((tmp3)){
			::openfl::_internal::swf::SWFLite tmp4 = swf;
			::openfl::display::MovieClip tmp5 = hx::TCast< ::openfl::display::MovieClip >::cast(symbol->upState->__createObject(tmp4));
			this->set_upState(tmp5);
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(SimpleButton_obj,__fromSymbol,(void))

Void SimpleButton_obj::__getBounds( ::openfl::geom::Rectangle rect,::openfl::geom::Matrix matrix){
{
		::openfl::geom::Rectangle tmp = rect;
		::openfl::geom::Matrix tmp1 = matrix;
		this->super::__getBounds(tmp,tmp1);
		bool tmp2 = (matrix != null());
		if ((tmp2)){
			::openfl::geom::Matrix tmp3 = matrix;
			this->__updateTransforms(tmp3);
			this->__updateChildren(true);
		}
		::openfl::display::DisplayObject tmp3 = this->__currentState;
		::openfl::geom::Rectangle tmp4 = rect;
		::openfl::display::DisplayObject tmp5 = this->__currentState;
		::openfl::geom::Matrix tmp6 = tmp5->__worldTransform;
		tmp3->__getBounds(tmp4,tmp6);
		bool tmp7 = (matrix != null());
		if ((tmp7)){
			this->__updateTransforms(null());
			this->__updateChildren(true);
		}
	}
return null();
}


Void SimpleButton_obj::__getRenderBounds( ::openfl::geom::Rectangle rect,::openfl::geom::Matrix matrix){
{
		::openfl::geom::Rectangle tmp = this->__scrollRect;
		bool tmp1 = (tmp != null());
		if ((tmp1)){
			::openfl::geom::Rectangle tmp2 = rect;
			::openfl::geom::Matrix tmp3 = matrix;
			this->super::__getRenderBounds(tmp2,tmp3);
			return null();
		}
		else{
			::openfl::geom::Rectangle tmp2 = rect;
			::openfl::geom::Matrix tmp3 = matrix;
			this->super::__getBounds(tmp2,tmp3);
		}
		bool tmp2 = (matrix != null());
		if ((tmp2)){
			::openfl::geom::Matrix tmp3 = matrix;
			this->__updateTransforms(tmp3);
			this->__updateChildren(true);
		}
		::openfl::display::DisplayObject tmp3 = this->__currentState;
		::openfl::geom::Rectangle tmp4 = rect;
		::openfl::display::DisplayObject tmp5 = this->__currentState;
		::openfl::geom::Matrix tmp6 = tmp5->__worldTransform;
		tmp3->__getRenderBounds(tmp4,tmp6);
		bool tmp7 = (matrix != null());
		if ((tmp7)){
			this->__updateTransforms(null());
			this->__updateChildren(true);
		}
	}
return null();
}


::lime::ui::MouseCursor SimpleButton_obj::__getCursor( ){
	bool tmp = this->useHandCursor;
	bool tmp1;
	if ((tmp)){
		bool tmp2 = this->__ignoreEvent;
		bool tmp3 = tmp2;
		bool tmp4 = tmp3;
		tmp1 = !(tmp4);
	}
	else{
		tmp1 = false;
	}
	::lime::ui::MouseCursor tmp2;
	if ((tmp1)){
		tmp2 = ::lime::ui::MouseCursor_obj::POINTER;
	}
	else{
		tmp2 = null();
	}
	return tmp2;
}


bool SimpleButton_obj::__hitTest( Float x,Float y,bool shapeFlag,Array< ::Dynamic > stack,bool interactiveOnly,::openfl::display::DisplayObject hitObject){
	bool hitTest = false;
	::openfl::display::DisplayObject tmp = this->hitTestState;
	bool tmp1 = (tmp != null());
	if ((tmp1)){
		::openfl::display::DisplayObject tmp2 = this->hitTestState;
		::openfl::geom::Matrix tmp3 = this->__updateTransform(tmp2);
		::openfl::geom::Matrix cacheTransform = tmp3;
		::openfl::display::DisplayObject tmp4 = this->hitTestState;
		Float tmp5 = x;
		Float tmp6 = y;
		bool tmp7 = shapeFlag;
		bool tmp8 = interactiveOnly;
		::openfl::display::DisplayObject tmp9 = hitObject;
		bool tmp10 = tmp4->__hitTest(tmp5,tmp6,tmp7,stack,tmp8,tmp9);
		if ((tmp10)){
			bool tmp11 = (stack != null());
			if ((tmp11)){
				int tmp12 = (stack->length - (int)1);
				::openfl::display::DisplayObject tmp13 = hitObject;
				stack[tmp12] = tmp13;
			}
			hitTest = true;
		}
		::openfl::display::DisplayObject tmp11 = this->hitTestState;
		::openfl::geom::Matrix tmp12 = cacheTransform;
		this->__resetTransform(tmp11,tmp12);
	}
	else{
		::openfl::display::DisplayObject tmp2 = this->__currentState;
		bool tmp3 = (tmp2 != null());
		if ((tmp3)){
			bool tmp4 = hitObject->get_visible();
			bool tmp5 = tmp4;
			bool tmp6 = !(tmp5);
			bool tmp7 = !(tmp6);
			bool tmp8 = tmp7;
			bool tmp9;
			if ((tmp8)){
				tmp9 = this->__isMask;
			}
			else{
				tmp9 = true;
			}
			bool tmp10 = !(tmp9);
			bool tmp11;
			if ((tmp10)){
				bool tmp12 = interactiveOnly;
				bool tmp13 = tmp12;
				if ((tmp13)){
					bool tmp14 = this->mouseEnabled;
					bool tmp15 = tmp14;
					bool tmp16 = tmp15;
					bool tmp17 = tmp16;
					bool tmp18 = tmp17;
					tmp11 = !(tmp18);
				}
				else{
					tmp11 = false;
				}
			}
			else{
				tmp11 = true;
			}
			if ((tmp11)){
				return false;
			}
			::openfl::display::DisplayObject tmp12 = this->get_mask();
			bool tmp13 = (tmp12 != null());
			bool tmp14;
			if ((tmp13)){
				::openfl::display::DisplayObject tmp15 = this->get_mask();
				::openfl::display::DisplayObject tmp16 = tmp15;
				Float tmp17 = x;
				Float tmp18 = y;
				Float tmp19 = tmp17;
				Float tmp20 = tmp18;
				bool tmp21 = tmp16->__hitTestMask(tmp19,tmp20);
				bool tmp22 = tmp21;
				bool tmp23 = tmp22;
				tmp14 = !(tmp23);
			}
			else{
				tmp14 = false;
			}
			if ((tmp14)){
				return false;
			}
			::openfl::display::DisplayObject tmp15 = this->__currentState;
			::openfl::geom::Matrix tmp16 = this->__updateTransform(tmp15);
			::openfl::geom::Matrix cacheTransform = tmp16;
			::openfl::display::DisplayObject tmp17 = this->__currentState;
			Float tmp18 = x;
			Float tmp19 = y;
			bool tmp20 = shapeFlag;
			bool tmp21 = interactiveOnly;
			::openfl::display::DisplayObject tmp22 = hitObject;
			bool tmp23 = tmp17->__hitTest(tmp18,tmp19,tmp20,stack,tmp21,tmp22);
			if ((tmp23)){
				hitTest = interactiveOnly;
			}
			::openfl::display::DisplayObject tmp24 = this->__currentState;
			::openfl::geom::Matrix tmp25 = cacheTransform;
			this->__resetTransform(tmp24,tmp25);
		}
	}
	bool tmp2 = (stack != null());
	if ((tmp2)){
		while((true)){
			bool tmp3 = (stack->length > (int)1);
			bool tmp4;
			if ((tmp3)){
				int tmp5 = (stack->length - (int)1);
				int tmp6 = tmp5;
				::openfl::display::DisplayObject tmp7 = stack->__get(tmp6).StaticCast< ::openfl::display::DisplayObject >();
				::openfl::display::DisplayObject tmp8 = tmp7;
				int tmp9 = (stack->length - (int)2);
				int tmp10 = tmp9;
				::openfl::display::DisplayObject tmp11 = stack->__get(tmp10).StaticCast< ::openfl::display::DisplayObject >();
				::openfl::display::DisplayObject tmp12 = tmp11;
				tmp4 = (tmp8 == tmp12);
			}
			else{
				tmp4 = false;
			}
			bool tmp5 = !(tmp4);
			if ((tmp5)){
				break;
			}
			stack->pop().StaticCast< ::openfl::display::DisplayObject >();
		}
	}
	bool tmp3 = hitTest;
	return tmp3;
}


bool SimpleButton_obj::__hitTestMask( Float x,Float y){
	bool hitTest = false;
	::openfl::display::DisplayObject tmp = this->__currentState;
	::openfl::geom::Matrix tmp1 = this->__updateTransform(tmp);
	::openfl::geom::Matrix cacheTransform = tmp1;
	::openfl::display::DisplayObject tmp2 = this->__currentState;
	Float tmp3 = x;
	Float tmp4 = y;
	bool tmp5 = tmp2->__hitTestMask(tmp3,tmp4);
	if ((tmp5)){
		hitTest = true;
	}
	::openfl::display::DisplayObject tmp6 = this->__currentState;
	::openfl::geom::Matrix tmp7 = cacheTransform;
	this->__resetTransform(tmp6,tmp7);
	bool tmp8 = hitTest;
	return tmp8;
}


Void SimpleButton_obj::__renderCairo( ::openfl::_internal::renderer::RenderSession renderSession){
{
		bool tmp = this->__renderable;
		bool tmp1 = tmp;
		bool tmp2 = !(tmp1);
		bool tmp3 = !(tmp2);
		bool tmp4;
		if ((tmp3)){
			Float tmp5 = this->__worldAlpha;
			Float tmp6 = tmp5;
			tmp4 = (tmp6 <= (int)0);
		}
		else{
			tmp4 = true;
		}
		if ((tmp4)){
			return null();
		}
		renderSession->maskManager->pushObject(hx::ObjectPtr<OBJ_>(this),null());
		::openfl::display::DisplayObject tmp5 = this->__currentState;
		::openfl::_internal::renderer::RenderSession tmp6 = renderSession;
		tmp5->__renderCairo(tmp6);
		renderSession->maskManager->popObject(hx::ObjectPtr<OBJ_>(this),null());
	}
return null();
}


Void SimpleButton_obj::__renderCairoMask( ::openfl::_internal::renderer::RenderSession renderSession){
{
		::openfl::display::DisplayObject tmp = this->__currentState;
		::openfl::_internal::renderer::RenderSession tmp1 = renderSession;
		tmp->__renderCairoMask(tmp1);
	}
return null();
}


Void SimpleButton_obj::__renderCanvas( ::openfl::_internal::renderer::RenderSession renderSession){
{
		bool tmp = this->__renderable;
		bool tmp1 = tmp;
		bool tmp2 = !(tmp1);
		bool tmp3 = !(tmp2);
		bool tmp4;
		if ((tmp3)){
			Float tmp5 = this->__worldAlpha;
			Float tmp6 = tmp5;
			tmp4 = (tmp6 <= (int)0);
		}
		else{
			tmp4 = true;
		}
		if ((tmp4)){
			return null();
		}
		renderSession->maskManager->pushObject(hx::ObjectPtr<OBJ_>(this),null());
		::openfl::display::DisplayObject tmp5 = this->__currentState;
		::openfl::_internal::renderer::RenderSession tmp6 = renderSession;
		tmp5->__renderCanvas(tmp6);
		renderSession->maskManager->popObject(hx::ObjectPtr<OBJ_>(this),null());
	}
return null();
}


Void SimpleButton_obj::__renderCanvasMask( ::openfl::_internal::renderer::RenderSession renderSession){
{
		::openfl::geom::Rectangle tmp = ::openfl::geom::Rectangle_obj::__new(null(),null(),null(),null());
		::openfl::geom::Rectangle bounds = tmp;
		::openfl::geom::Rectangle tmp1 = bounds;
		this->__getLocalBounds(tmp1);
		Float tmp2 = bounds->width;
		Float tmp3 = bounds->height;
		renderSession->context->rect((int)0,(int)0,tmp2,tmp3);
		::openfl::display::DisplayObject tmp4 = this->__currentState;
		::openfl::_internal::renderer::RenderSession tmp5 = renderSession;
		tmp4->__renderCanvasMask(tmp5);
	}
return null();
}


Void SimpleButton_obj::__renderDOM( ::openfl::_internal::renderer::RenderSession renderSession){
{
		renderSession->maskManager->pushObject(hx::ObjectPtr<OBJ_>(this),null());
		{
			int _g = (int)0;
			::openfl::_Vector::ObjectVector tmp = this->__previousStates;
			::openfl::_Vector::ObjectVector _g1 = tmp;
			while((true)){
				int tmp1 = _g;
				int tmp2 = _g1->get_length();
				bool tmp3 = (tmp1 < tmp2);
				bool tmp4 = !(tmp3);
				if ((tmp4)){
					break;
				}
				int tmp5 = _g;
				::openfl::display::DisplayObject tmp6 = _g1->get(tmp5);
				::openfl::display::DisplayObject previousState = tmp6;
				++(_g);
				::openfl::_internal::renderer::RenderSession tmp7 = renderSession;
				previousState->__renderDOM(tmp7);
			}
		}
		::openfl::_Vector::ObjectVector tmp = this->__previousStates;
		tmp->set_length((int)0);
		::openfl::display::DisplayObject tmp1 = this->__currentState;
		::openfl::_internal::renderer::RenderSession tmp2 = renderSession;
		tmp1->__renderDOM(tmp2);
		renderSession->maskManager->popObject(hx::ObjectPtr<OBJ_>(this),null());
	}
return null();
}


Void SimpleButton_obj::__renderGL( ::openfl::_internal::renderer::RenderSession renderSession){
{
		bool tmp = this->__renderable;
		bool tmp1 = tmp;
		bool tmp2 = !(tmp1);
		bool tmp3 = !(tmp2);
		bool tmp4;
		if ((tmp3)){
			Float tmp5 = this->__worldAlpha;
			Float tmp6 = tmp5;
			tmp4 = (tmp6 <= (int)0);
		}
		else{
			tmp4 = true;
		}
		if ((tmp4)){
			return null();
		}
		renderSession->maskManager->pushObject(hx::ObjectPtr<OBJ_>(this),null());
		::openfl::display::DisplayObject tmp5 = this->__currentState;
		::openfl::_internal::renderer::RenderSession tmp6 = renderSession;
		tmp5->__renderGL(tmp6);
		renderSession->maskManager->popObject(hx::ObjectPtr<OBJ_>(this),null());
	}
return null();
}


Void SimpleButton_obj::__resetTransform( ::openfl::display::DisplayObject state,::openfl::geom::Matrix cacheTransform){
{
		::openfl::geom::Matrix tmp = cacheTransform;
		state->__updateTransforms(tmp);
		state->__updateChildren(false);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(SimpleButton_obj,__resetTransform,(void))

Void SimpleButton_obj::__setStageReference( ::openfl::display::Stage stage){
{
		::openfl::display::Stage tmp = stage;
		this->super::__setStageReference(tmp);
		::openfl::display::DisplayObject tmp1 = this->__currentState;
		bool tmp2 = (tmp1 != null());
		if ((tmp2)){
			::openfl::display::DisplayObject tmp3 = this->__currentState;
			::openfl::display::Stage tmp4 = stage;
			tmp3->__setStageReference(tmp4);
		}
	}
return null();
}


::openfl::geom::Matrix SimpleButton_obj::__updateTransform( ::openfl::display::DisplayObject state){
	::openfl::geom::Matrix cacheTransform = state->__worldTransform;
	::openfl::geom::Matrix local = state->__transform;
	::openfl::geom::Matrix tmp = this->__worldTransform;
	::openfl::geom::Matrix parentTransform = tmp;
	::lime::utils::ObjectPool_openfl_geom_Matrix tmp1 = ::openfl::geom::Matrix_obj::__pool;
	::openfl::geom::Matrix tmp2 = tmp1->get();
	::openfl::geom::Matrix overrideTransform = tmp2;
	Float tmp3 = (local->a * parentTransform->a);
	Float tmp4 = (local->b * parentTransform->c);
	Float tmp5 = (tmp3 + tmp4);
	overrideTransform->a = tmp5;
	Float tmp6 = (local->a * parentTransform->b);
	Float tmp7 = (local->b * parentTransform->d);
	Float tmp8 = (tmp6 + tmp7);
	overrideTransform->b = tmp8;
	Float tmp9 = (local->c * parentTransform->a);
	Float tmp10 = (local->d * parentTransform->c);
	Float tmp11 = (tmp9 + tmp10);
	overrideTransform->c = tmp11;
	Float tmp12 = (local->c * parentTransform->b);
	Float tmp13 = (local->d * parentTransform->d);
	Float tmp14 = (tmp12 + tmp13);
	overrideTransform->d = tmp14;
	Float tmp15 = (local->tx * parentTransform->a);
	Float tmp16 = (local->ty * parentTransform->c);
	Float tmp17 = (tmp15 + tmp16);
	Float tmp18 = parentTransform->tx;
	Float tmp19 = (tmp17 + tmp18);
	overrideTransform->tx = tmp19;
	Float tmp20 = (local->tx * parentTransform->b);
	Float tmp21 = (local->ty * parentTransform->d);
	Float tmp22 = (tmp20 + tmp21);
	Float tmp23 = parentTransform->ty;
	Float tmp24 = (tmp22 + tmp23);
	overrideTransform->ty = tmp24;
	::openfl::geom::Matrix cacheTransform1 = state->__transform;
	state->__transform = overrideTransform;
	state->__update(false,true,null());
	state->__transform = cacheTransform1;
	::lime::utils::ObjectPool_openfl_geom_Matrix tmp25 = ::openfl::geom::Matrix_obj::__pool;
	::openfl::geom::Matrix tmp26 = overrideTransform;
	tmp25->release(tmp26);
	::openfl::geom::Matrix tmp27 = cacheTransform1;
	return tmp27;
}


HX_DEFINE_DYNAMIC_FUNC1(SimpleButton_obj,__updateTransform,return )

Void SimpleButton_obj::__updateTransforms( ::openfl::geom::Matrix overrideTransform){
{
		::openfl::geom::Matrix tmp = overrideTransform;
		this->super::__updateTransforms(tmp);
		::openfl::display::DisplayObject tmp1 = this->__currentState;
		this->__updateTransform(tmp1);
	}
return null();
}


::openfl::display::DisplayObject SimpleButton_obj::set_downState( ::openfl::display::DisplayObject downState){
	::openfl::display::DisplayObject tmp = this->downState;
	bool tmp1 = (tmp != null());
	bool tmp2;
	if ((tmp1)){
		::openfl::display::DisplayObject tmp3 = this->__currentState;
		::openfl::display::DisplayObject tmp4 = tmp3;
		::openfl::display::DisplayObject tmp5 = this->downState;
		::openfl::display::DisplayObject tmp6 = tmp5;
		tmp2 = (tmp4 == tmp6);
	}
	else{
		tmp2 = false;
	}
	if ((tmp2)){
		::openfl::display::DisplayObject tmp3 = downState;
		this->set___currentState(tmp3);
	}
	::openfl::display::DisplayObject tmp3 = this->downState = downState;
	return tmp3;
}


HX_DEFINE_DYNAMIC_FUNC1(SimpleButton_obj,set_downState,return )

::openfl::display::DisplayObject SimpleButton_obj::set_hitTestState( ::openfl::display::DisplayObject hitTestState){
	::openfl::display::DisplayObject tmp = this->hitTestState = hitTestState;
	return tmp;
}


HX_DEFINE_DYNAMIC_FUNC1(SimpleButton_obj,set_hitTestState,return )

::openfl::display::DisplayObject SimpleButton_obj::set_overState( ::openfl::display::DisplayObject overState){
	::openfl::display::DisplayObject tmp = this->overState;
	bool tmp1 = (tmp != null());
	bool tmp2;
	if ((tmp1)){
		::openfl::display::DisplayObject tmp3 = this->__currentState;
		::openfl::display::DisplayObject tmp4 = tmp3;
		::openfl::display::DisplayObject tmp5 = this->overState;
		::openfl::display::DisplayObject tmp6 = tmp5;
		tmp2 = (tmp4 == tmp6);
	}
	else{
		tmp2 = false;
	}
	if ((tmp2)){
		::openfl::display::DisplayObject tmp3 = overState;
		this->set___currentState(tmp3);
	}
	::openfl::display::DisplayObject tmp3 = this->overState = overState;
	return tmp3;
}


HX_DEFINE_DYNAMIC_FUNC1(SimpleButton_obj,set_overState,return )

::openfl::media::SoundTransform SimpleButton_obj::get_soundTransform( ){
	::openfl::media::SoundTransform tmp = this->__soundTransform;
	bool tmp1 = (tmp == null());
	if ((tmp1)){
		::openfl::media::SoundTransform tmp2 = ::openfl::media::SoundTransform_obj::__new(null(),null());
		this->__soundTransform = tmp2;
	}
	::openfl::media::SoundTransform tmp2 = this->__soundTransform;
	Float tmp3 = tmp2->volume;
	::openfl::media::SoundTransform tmp4 = this->__soundTransform;
	Float tmp5 = tmp4->pan;
	::openfl::media::SoundTransform tmp6 = ::openfl::media::SoundTransform_obj::__new(tmp3,tmp5);
	return tmp6;
}


HX_DEFINE_DYNAMIC_FUNC0(SimpleButton_obj,get_soundTransform,return )

::openfl::media::SoundTransform SimpleButton_obj::set_soundTransform( ::openfl::media::SoundTransform value){
	::openfl::media::SoundTransform tmp = ::openfl::media::SoundTransform_obj::__new(value->volume,value->pan);
	this->__soundTransform = tmp;
	::openfl::media::SoundTransform tmp1 = value;
	return tmp1;
}


HX_DEFINE_DYNAMIC_FUNC1(SimpleButton_obj,set_soundTransform,return )

::openfl::display::DisplayObject SimpleButton_obj::set_upState( ::openfl::display::DisplayObject upState){
	::openfl::display::DisplayObject tmp = this->upState;
	bool tmp1 = (tmp != null());
	bool tmp2;
	if ((tmp1)){
		::openfl::display::DisplayObject tmp3 = this->__currentState;
		::openfl::display::DisplayObject tmp4 = tmp3;
		::openfl::display::DisplayObject tmp5 = this->upState;
		::openfl::display::DisplayObject tmp6 = tmp5;
		tmp2 = (tmp4 == tmp6);
	}
	else{
		tmp2 = false;
	}
	if ((tmp2)){
		::openfl::display::DisplayObject tmp3 = upState;
		this->set___currentState(tmp3);
	}
	::openfl::display::DisplayObject tmp3 = this->upState = upState;
	return tmp3;
}


HX_DEFINE_DYNAMIC_FUNC1(SimpleButton_obj,set_upState,return )

::openfl::display::DisplayObject SimpleButton_obj::set___currentState( ::openfl::display::DisplayObject value){
	::openfl::display::DisplayObject tmp = this->__currentState;
	bool tmp1 = (tmp != null());
	if ((tmp1)){
		::openfl::display::DisplayObject tmp2 = this->__currentState;
		tmp2->__renderParent = null();
	}
	bool tmp2 = (value->parent != null());
	if ((tmp2)){
		::openfl::display::DisplayObject tmp3 = value;
		value->parent->removeChild(tmp3);
	}
	value->__renderParent = hx::ObjectPtr<OBJ_>(this);
	::openfl::display::DisplayObject tmp3 = this->__currentState = value;
	return tmp3;
}


HX_DEFINE_DYNAMIC_FUNC1(SimpleButton_obj,set___currentState,return )

Void SimpleButton_obj::__this_onMouseDown( ::openfl::events::MouseEvent event){
{
		::openfl::display::DisplayObject tmp = this->downState;
		bool tmp1 = (tmp != null());
		if ((tmp1)){
			::openfl::display::DisplayObject tmp2 = this->downState;
			this->set___currentState(tmp2);
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(SimpleButton_obj,__this_onMouseDown,(void))

Void SimpleButton_obj::__this_onMouseOut( ::openfl::events::MouseEvent event){
{
		this->__ignoreEvent = false;
		::openfl::display::DisplayObject tmp = this->upState;
		::openfl::display::DisplayObject tmp1 = this->__currentState;
		bool tmp2 = (tmp != tmp1);
		if ((tmp2)){
			::openfl::display::DisplayObject tmp3 = this->upState;
			this->set___currentState(tmp3);
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(SimpleButton_obj,__this_onMouseOut,(void))

Void SimpleButton_obj::__this_onMouseOver( ::openfl::events::MouseEvent event){
{
		bool tmp = event->buttonDown;
		if ((tmp)){
			this->__ignoreEvent = true;
		}
		::openfl::display::DisplayObject tmp1 = this->overState;
		::openfl::display::DisplayObject tmp2 = this->__currentState;
		bool tmp3 = (tmp1 != tmp2);
		bool tmp4 = tmp3;
		bool tmp5;
		if ((tmp4)){
			::openfl::display::DisplayObject tmp6 = this->overState;
			::openfl::display::DisplayObject tmp7 = tmp6;
			::openfl::display::DisplayObject tmp8 = tmp7;
			tmp5 = (tmp8 != null());
		}
		else{
			tmp5 = false;
		}
		bool tmp6;
		if ((tmp5)){
			bool tmp7 = this->__ignoreEvent;
			bool tmp8 = tmp7;
			bool tmp9 = tmp8;
			tmp6 = !(tmp9);
		}
		else{
			tmp6 = false;
		}
		if ((tmp6)){
			::openfl::display::DisplayObject tmp7 = this->overState;
			this->set___currentState(tmp7);
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(SimpleButton_obj,__this_onMouseOver,(void))

Void SimpleButton_obj::__this_onMouseUp( ::openfl::events::MouseEvent event){
{
		this->__ignoreEvent = false;
		::openfl::display::DisplayObject tmp = this->overState;
		bool tmp1 = (tmp != null());
		if ((tmp1)){
			::openfl::display::DisplayObject tmp2 = this->overState;
			this->set___currentState(tmp2);
		}
		else{
			::openfl::display::DisplayObject tmp2 = this->upState;
			this->set___currentState(tmp2);
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(SimpleButton_obj,__this_onMouseUp,(void))

::openfl::_internal::swf::SWFLite SimpleButton_obj::__initSWF;

::openfl::_internal::symbols::ButtonSymbol SimpleButton_obj::__initSymbol;


SimpleButton_obj::SimpleButton_obj()
{
}

void SimpleButton_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(SimpleButton);
	HX_MARK_MEMBER_NAME(downState,"downState");
	HX_MARK_MEMBER_NAME(enabled,"enabled");
	HX_MARK_MEMBER_NAME(hitTestState,"hitTestState");
	HX_MARK_MEMBER_NAME(overState,"overState");
	HX_MARK_MEMBER_NAME(trackAsMenu,"trackAsMenu");
	HX_MARK_MEMBER_NAME(upState,"upState");
	HX_MARK_MEMBER_NAME(useHandCursor,"useHandCursor");
	HX_MARK_MEMBER_NAME(__currentState,"__currentState");
	HX_MARK_MEMBER_NAME(__ignoreEvent,"__ignoreEvent");
	HX_MARK_MEMBER_NAME(__previousStates,"__previousStates");
	HX_MARK_MEMBER_NAME(__soundTransform,"__soundTransform");
	HX_MARK_MEMBER_NAME(__symbol,"__symbol");
	::openfl::display::InteractiveObject_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void SimpleButton_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(downState,"downState");
	HX_VISIT_MEMBER_NAME(enabled,"enabled");
	HX_VISIT_MEMBER_NAME(hitTestState,"hitTestState");
	HX_VISIT_MEMBER_NAME(overState,"overState");
	HX_VISIT_MEMBER_NAME(trackAsMenu,"trackAsMenu");
	HX_VISIT_MEMBER_NAME(upState,"upState");
	HX_VISIT_MEMBER_NAME(useHandCursor,"useHandCursor");
	HX_VISIT_MEMBER_NAME(__currentState,"__currentState");
	HX_VISIT_MEMBER_NAME(__ignoreEvent,"__ignoreEvent");
	HX_VISIT_MEMBER_NAME(__previousStates,"__previousStates");
	HX_VISIT_MEMBER_NAME(__soundTransform,"__soundTransform");
	HX_VISIT_MEMBER_NAME(__symbol,"__symbol");
	::openfl::display::InteractiveObject_obj::__Visit(HX_VISIT_ARG);
}

Dynamic SimpleButton_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 7:
		if (HX_FIELD_EQ(inName,"enabled") ) { return enabled; }
		if (HX_FIELD_EQ(inName,"upState") ) { return upState; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"__symbol") ) { return __symbol; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"downState") ) { return downState; }
		if (HX_FIELD_EQ(inName,"overState") ) { return overState; }
		if (HX_FIELD_EQ(inName,"__hitTest") ) { return __hitTest_dyn(); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"__renderGL") ) { return __renderGL_dyn(); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"trackAsMenu") ) { return trackAsMenu; }
		if (HX_FIELD_EQ(inName,"__getBounds") ) { return __getBounds_dyn(); }
		if (HX_FIELD_EQ(inName,"__getCursor") ) { return __getCursor_dyn(); }
		if (HX_FIELD_EQ(inName,"__renderDOM") ) { return __renderDOM_dyn(); }
		if (HX_FIELD_EQ(inName,"set_upState") ) { return set_upState_dyn(); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"hitTestState") ) { return hitTestState; }
		if (HX_FIELD_EQ(inName,"__fromSymbol") ) { return __fromSymbol_dyn(); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"useHandCursor") ) { return useHandCursor; }
		if (HX_FIELD_EQ(inName,"__ignoreEvent") ) { return __ignoreEvent; }
		if (HX_FIELD_EQ(inName,"__hitTestMask") ) { return __hitTestMask_dyn(); }
		if (HX_FIELD_EQ(inName,"__renderCairo") ) { return __renderCairo_dyn(); }
		if (HX_FIELD_EQ(inName,"set_downState") ) { return set_downState_dyn(); }
		if (HX_FIELD_EQ(inName,"set_overState") ) { return set_overState_dyn(); }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"soundTransform") ) { if (inCallProp == hx::paccAlways) return get_soundTransform(); }
		if (HX_FIELD_EQ(inName,"__currentState") ) { return __currentState; }
		if (HX_FIELD_EQ(inName,"__renderCanvas") ) { return __renderCanvas_dyn(); }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"__previousStates") ) { return __previousStates; }
		if (HX_FIELD_EQ(inName,"__soundTransform") ) { return __soundTransform; }
		if (HX_FIELD_EQ(inName,"__resetTransform") ) { return __resetTransform_dyn(); }
		if (HX_FIELD_EQ(inName,"set_hitTestState") ) { return set_hitTestState_dyn(); }
		if (HX_FIELD_EQ(inName,"__this_onMouseUp") ) { return __this_onMouseUp_dyn(); }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"__getRenderBounds") ) { return __getRenderBounds_dyn(); }
		if (HX_FIELD_EQ(inName,"__renderCairoMask") ) { return __renderCairoMask_dyn(); }
		if (HX_FIELD_EQ(inName,"__updateTransform") ) { return __updateTransform_dyn(); }
		if (HX_FIELD_EQ(inName,"__this_onMouseOut") ) { return __this_onMouseOut_dyn(); }
		break;
	case 18:
		if (HX_FIELD_EQ(inName,"__renderCanvasMask") ) { return __renderCanvasMask_dyn(); }
		if (HX_FIELD_EQ(inName,"__updateTransforms") ) { return __updateTransforms_dyn(); }
		if (HX_FIELD_EQ(inName,"get_soundTransform") ) { return get_soundTransform_dyn(); }
		if (HX_FIELD_EQ(inName,"set_soundTransform") ) { return set_soundTransform_dyn(); }
		if (HX_FIELD_EQ(inName,"set___currentState") ) { return set___currentState_dyn(); }
		if (HX_FIELD_EQ(inName,"__this_onMouseDown") ) { return __this_onMouseDown_dyn(); }
		if (HX_FIELD_EQ(inName,"__this_onMouseOver") ) { return __this_onMouseOver_dyn(); }
		break;
	case 19:
		if (HX_FIELD_EQ(inName,"__setStageReference") ) { return __setStageReference_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

bool SimpleButton_obj::__GetStatic(const ::String &inName, Dynamic &outValue, hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 9:
		if (HX_FIELD_EQ(inName,"__initSWF") ) { outValue = __initSWF; return true;  }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"__initSymbol") ) { outValue = __initSymbol; return true;  }
	}
	return false;
}

Dynamic SimpleButton_obj::__SetField(const ::String &inName,const Dynamic &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 7:
		if (HX_FIELD_EQ(inName,"enabled") ) { enabled=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"upState") ) { if (inCallProp == hx::paccAlways) return set_upState(inValue);upState=inValue.Cast< ::openfl::display::DisplayObject >(); return inValue; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"__symbol") ) { __symbol=inValue.Cast< ::openfl::_internal::symbols::ButtonSymbol >(); return inValue; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"downState") ) { if (inCallProp == hx::paccAlways) return set_downState(inValue);downState=inValue.Cast< ::openfl::display::DisplayObject >(); return inValue; }
		if (HX_FIELD_EQ(inName,"overState") ) { if (inCallProp == hx::paccAlways) return set_overState(inValue);overState=inValue.Cast< ::openfl::display::DisplayObject >(); return inValue; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"trackAsMenu") ) { trackAsMenu=inValue.Cast< bool >(); return inValue; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"hitTestState") ) { if (inCallProp == hx::paccAlways) return set_hitTestState(inValue);hitTestState=inValue.Cast< ::openfl::display::DisplayObject >(); return inValue; }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"useHandCursor") ) { useHandCursor=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"__ignoreEvent") ) { __ignoreEvent=inValue.Cast< bool >(); return inValue; }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"soundTransform") ) { if (inCallProp == hx::paccAlways) return set_soundTransform(inValue); }
		if (HX_FIELD_EQ(inName,"__currentState") ) { if (inCallProp == hx::paccAlways) return set___currentState(inValue);__currentState=inValue.Cast< ::openfl::display::DisplayObject >(); return inValue; }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"__previousStates") ) { __previousStates=inValue.Cast< ::openfl::_Vector::ObjectVector >(); return inValue; }
		if (HX_FIELD_EQ(inName,"__soundTransform") ) { __soundTransform=inValue.Cast< ::openfl::media::SoundTransform >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

bool SimpleButton_obj::__SetStatic(const ::String &inName,Dynamic &ioValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 9:
		if (HX_FIELD_EQ(inName,"__initSWF") ) { __initSWF=ioValue.Cast< ::openfl::_internal::swf::SWFLite >(); return true; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"__initSymbol") ) { __initSymbol=ioValue.Cast< ::openfl::_internal::symbols::ButtonSymbol >(); return true; }
	}
	return false;
}

void SimpleButton_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("downState","\x4f","\x4a","\x21","\x9a"));
	outFields->push(HX_HCSTRING("enabled","\x81","\x04","\x31","\x7e"));
	outFields->push(HX_HCSTRING("hitTestState","\x8c","\x6b","\x9d","\xa1"));
	outFields->push(HX_HCSTRING("overState","\x1d","\x04","\xcd","\xe7"));
	outFields->push(HX_HCSTRING("soundTransform","\x9d","\xee","\xde","\x22"));
	outFields->push(HX_HCSTRING("trackAsMenu","\x9c","\x24","\xdf","\xda"));
	outFields->push(HX_HCSTRING("upState","\xb6","\x95","\x80","\xe0"));
	outFields->push(HX_HCSTRING("useHandCursor","\xcc","\xda","\xae","\x89"));
	outFields->push(HX_HCSTRING("__currentState","\x38","\xde","\xd7","\xeb"));
	outFields->push(HX_HCSTRING("__ignoreEvent","\x88","\x9e","\xcf","\xe1"));
	outFields->push(HX_HCSTRING("__previousStates","\xf9","\x17","\xd2","\x28"));
	outFields->push(HX_HCSTRING("__soundTransform","\xbd","\x79","\x1e","\x57"));
	outFields->push(HX_HCSTRING("__symbol","\x78","\x1a","\x0d","\x97"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsObject /*::openfl::display::DisplayObject*/ ,(int)offsetof(SimpleButton_obj,downState),HX_HCSTRING("downState","\x4f","\x4a","\x21","\x9a")},
	{hx::fsBool,(int)offsetof(SimpleButton_obj,enabled),HX_HCSTRING("enabled","\x81","\x04","\x31","\x7e")},
	{hx::fsObject /*::openfl::display::DisplayObject*/ ,(int)offsetof(SimpleButton_obj,hitTestState),HX_HCSTRING("hitTestState","\x8c","\x6b","\x9d","\xa1")},
	{hx::fsObject /*::openfl::display::DisplayObject*/ ,(int)offsetof(SimpleButton_obj,overState),HX_HCSTRING("overState","\x1d","\x04","\xcd","\xe7")},
	{hx::fsBool,(int)offsetof(SimpleButton_obj,trackAsMenu),HX_HCSTRING("trackAsMenu","\x9c","\x24","\xdf","\xda")},
	{hx::fsObject /*::openfl::display::DisplayObject*/ ,(int)offsetof(SimpleButton_obj,upState),HX_HCSTRING("upState","\xb6","\x95","\x80","\xe0")},
	{hx::fsBool,(int)offsetof(SimpleButton_obj,useHandCursor),HX_HCSTRING("useHandCursor","\xcc","\xda","\xae","\x89")},
	{hx::fsObject /*::openfl::display::DisplayObject*/ ,(int)offsetof(SimpleButton_obj,__currentState),HX_HCSTRING("__currentState","\x38","\xde","\xd7","\xeb")},
	{hx::fsBool,(int)offsetof(SimpleButton_obj,__ignoreEvent),HX_HCSTRING("__ignoreEvent","\x88","\x9e","\xcf","\xe1")},
	{hx::fsObject /*::openfl::_Vector::ObjectVector*/ ,(int)offsetof(SimpleButton_obj,__previousStates),HX_HCSTRING("__previousStates","\xf9","\x17","\xd2","\x28")},
	{hx::fsObject /*::openfl::media::SoundTransform*/ ,(int)offsetof(SimpleButton_obj,__soundTransform),HX_HCSTRING("__soundTransform","\xbd","\x79","\x1e","\x57")},
	{hx::fsObject /*::openfl::_internal::symbols::ButtonSymbol*/ ,(int)offsetof(SimpleButton_obj,__symbol),HX_HCSTRING("__symbol","\x78","\x1a","\x0d","\x97")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo sStaticStorageInfo[] = {
	{hx::fsObject /*::openfl::_internal::swf::SWFLite*/ ,(void *) &SimpleButton_obj::__initSWF,HX_HCSTRING("__initSWF","\xf2","\xa6","\xdc","\x4c")},
	{hx::fsObject /*::openfl::_internal::symbols::ButtonSymbol*/ ,(void *) &SimpleButton_obj::__initSymbol,HX_HCSTRING("__initSymbol","\xa8","\x85","\xb6","\x2b")},
	{ hx::fsUnknown, 0, null()}
};
#endif

static ::String sMemberFields[] = {
	HX_HCSTRING("downState","\x4f","\x4a","\x21","\x9a"),
	HX_HCSTRING("enabled","\x81","\x04","\x31","\x7e"),
	HX_HCSTRING("hitTestState","\x8c","\x6b","\x9d","\xa1"),
	HX_HCSTRING("overState","\x1d","\x04","\xcd","\xe7"),
	HX_HCSTRING("trackAsMenu","\x9c","\x24","\xdf","\xda"),
	HX_HCSTRING("upState","\xb6","\x95","\x80","\xe0"),
	HX_HCSTRING("useHandCursor","\xcc","\xda","\xae","\x89"),
	HX_HCSTRING("__currentState","\x38","\xde","\xd7","\xeb"),
	HX_HCSTRING("__ignoreEvent","\x88","\x9e","\xcf","\xe1"),
	HX_HCSTRING("__previousStates","\xf9","\x17","\xd2","\x28"),
	HX_HCSTRING("__soundTransform","\xbd","\x79","\x1e","\x57"),
	HX_HCSTRING("__symbol","\x78","\x1a","\x0d","\x97"),
	HX_HCSTRING("__fromSymbol","\x82","\x2f","\xb5","\x6a"),
	HX_HCSTRING("__getBounds","\x8b","\x58","\xa0","\x10"),
	HX_HCSTRING("__getRenderBounds","\x01","\x11","\xb8","\x7b"),
	HX_HCSTRING("__getCursor","\xec","\x60","\x6b","\xe9"),
	HX_HCSTRING("__hitTest","\x25","\xb1","\xcd","\x63"),
	HX_HCSTRING("__hitTestMask","\xb1","\x14","\xfd","\x3b"),
	HX_HCSTRING("__renderCairo","\x32","\x9e","\x42","\x55"),
	HX_HCSTRING("__renderCairoMask","\x3e","\x0c","\x22","\x6b"),
	HX_HCSTRING("__renderCanvas","\xee","\xdb","\x58","\x48"),
	HX_HCSTRING("__renderCanvasMask","\xfa","\xd7","\xef","\x51"),
	HX_HCSTRING("__renderDOM","\xac","\xf5","\x83","\xfb"),
	HX_HCSTRING("__renderGL","\x1b","\x1e","\x14","\x56"),
	HX_HCSTRING("__resetTransform","\xbd","\x1c","\x43","\xd4"),
	HX_HCSTRING("__setStageReference","\x4f","\xe5","\xe5","\xf4"),
	HX_HCSTRING("__updateTransform","\x03","\x2f","\x78","\x18"),
	HX_HCSTRING("__updateTransforms","\x10","\xf4","\xb0","\x50"),
	HX_HCSTRING("set_downState","\x32","\x00","\x8b","\xa0"),
	HX_HCSTRING("set_hitTestState","\x89","\x45","\x7e","\xfc"),
	HX_HCSTRING("set_overState","\x00","\xba","\x36","\xee"),
	HX_HCSTRING("get_soundTransform","\x66","\xcf","\x78","\xbe"),
	HX_HCSTRING("set_soundTransform","\xda","\x01","\x28","\x9b"),
	HX_HCSTRING("set_upState","\xd9","\xfc","\xe7","\x70"),
	HX_HCSTRING("set___currentState","\x75","\xf1","\x20","\x64"),
	HX_HCSTRING("__this_onMouseDown","\x87","\xf0","\x3a","\xd9"),
	HX_HCSTRING("__this_onMouseOut","\x09","\xb4","\x18","\x95"),
	HX_HCSTRING("__this_onMouseOver","\x79","\x89","\x85","\xe0"),
	HX_HCSTRING("__this_onMouseUp","\x40","\x9b","\x2a","\x90"),
	::String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(SimpleButton_obj::__mClass,"__mClass");
	HX_MARK_MEMBER_NAME(SimpleButton_obj::__initSWF,"__initSWF");
	HX_MARK_MEMBER_NAME(SimpleButton_obj::__initSymbol,"__initSymbol");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(SimpleButton_obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(SimpleButton_obj::__initSWF,"__initSWF");
	HX_VISIT_MEMBER_NAME(SimpleButton_obj::__initSymbol,"__initSymbol");
};

#endif

hx::Class SimpleButton_obj::__mClass;

static ::String sStaticFields[] = {
	HX_HCSTRING("__initSWF","\xf2","\xa6","\xdc","\x4c"),
	HX_HCSTRING("__initSymbol","\xa8","\x85","\xb6","\x2b"),
	::String(null()) };

void SimpleButton_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("openfl.display.SimpleButton","\x2e","\xf7","\x40","\x72");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &SimpleButton_obj::__GetStatic;
	__mClass->mSetStaticField = &SimpleButton_obj::__SetStatic;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(sStaticFields);
	__mClass->mMembers = hx::Class_obj::dupFunctions(sMemberFields);
	__mClass->mCanCast = hx::TCanCast< SimpleButton_obj >;
#ifdef HXCPP_VISIT_ALLOCS
	__mClass->mVisitFunc = sVisitStatics;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = sStaticStorageInfo;
#endif
	hx::RegisterClass(__mClass->mName, __mClass);
}

} // end namespace openfl
} // end namespace display
