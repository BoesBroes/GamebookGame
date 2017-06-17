#include <hxcpp.h>

#include "hxMath.h"
#ifndef INCLUDED_Std
#include <Std.h>
#endif
#ifndef INCLUDED_haxe_IMap
#include <haxe/IMap.h>
#endif
#ifndef INCLUDED_haxe_ds_StringMap
#include <haxe/ds/StringMap.h>
#endif
#ifndef INCLUDED_lime__backend_native_NativeGLRenderContext
#include <lime/_backend/native/NativeGLRenderContext.h>
#endif
#ifndef INCLUDED_lime_app_IModule
#include <lime/app/IModule.h>
#endif
#ifndef INCLUDED_lime_graphics_cairo_Cairo
#include <lime/graphics/cairo/Cairo.h>
#endif
#ifndef INCLUDED_lime_graphics_cairo__CairoPattern_CairoPattern_Impl_
#include <lime/graphics/cairo/_CairoPattern/CairoPattern_Impl_.h>
#endif
#ifndef INCLUDED_lime_graphics_opengl_GLObject
#include <lime/graphics/opengl/GLObject.h>
#endif
#ifndef INCLUDED_lime_math_Matrix3
#include <lime/math/Matrix3.h>
#endif
#ifndef INCLUDED_lime_ui_MouseCursor
#include <lime/ui/MouseCursor.h>
#endif
#ifndef INCLUDED_lime_utils_ObjectPool_openfl_geom_Matrix
#include <lime/utils/ObjectPool_openfl_geom_Matrix.h>
#endif
#ifndef INCLUDED_lime_utils_ObjectPool_openfl_geom_Rectangle
#include <lime/utils/ObjectPool_openfl_geom_Rectangle.h>
#endif
#ifndef INCLUDED_lime_utils__DataPointer_DataPointer_Impl_
#include <lime/utils/_DataPointer/DataPointer_Impl_.h>
#endif
#ifndef INCLUDED_openfl_Lib
#include <openfl/Lib.h>
#endif
#ifndef INCLUDED_openfl__Vector_IVector
#include <openfl/_Vector/IVector.h>
#endif
#ifndef INCLUDED_openfl__Vector_ObjectVector
#include <openfl/_Vector/ObjectVector.h>
#endif
#ifndef INCLUDED_openfl__internal_renderer_AbstractBlendModeManager
#include <openfl/_internal/renderer/AbstractBlendModeManager.h>
#endif
#ifndef INCLUDED_openfl__internal_renderer_AbstractFilterManager
#include <openfl/_internal/renderer/AbstractFilterManager.h>
#endif
#ifndef INCLUDED_openfl__internal_renderer_AbstractMaskManager
#include <openfl/_internal/renderer/AbstractMaskManager.h>
#endif
#ifndef INCLUDED_openfl__internal_renderer_AbstractRenderer
#include <openfl/_internal/renderer/AbstractRenderer.h>
#endif
#ifndef INCLUDED_openfl__internal_renderer_AbstractShaderManager
#include <openfl/_internal/renderer/AbstractShaderManager.h>
#endif
#ifndef INCLUDED_openfl__internal_renderer_DrawCommandBuffer
#include <openfl/_internal/renderer/DrawCommandBuffer.h>
#endif
#ifndef INCLUDED_openfl__internal_renderer_RenderSession
#include <openfl/_internal/renderer/RenderSession.h>
#endif
#ifndef INCLUDED_openfl__internal_renderer_cairo_CairoDisplayObject
#include <openfl/_internal/renderer/cairo/CairoDisplayObject.h>
#endif
#ifndef INCLUDED_openfl__internal_renderer_cairo_CairoGraphics
#include <openfl/_internal/renderer/cairo/CairoGraphics.h>
#endif
#ifndef INCLUDED_openfl__internal_renderer_canvas_CanvasGraphics
#include <openfl/_internal/renderer/canvas/CanvasGraphics.h>
#endif
#ifndef INCLUDED_openfl__internal_renderer_opengl_GLRenderer
#include <openfl/_internal/renderer/opengl/GLRenderer.h>
#endif
#ifndef INCLUDED_openfl_display_Bitmap
#include <openfl/display/Bitmap.h>
#endif
#ifndef INCLUDED_openfl_display_BitmapData
#include <openfl/display/BitmapData.h>
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
#ifndef INCLUDED_openfl_display_LoaderInfo
#include <openfl/display/LoaderInfo.h>
#endif
#ifndef INCLUDED_openfl_display_MovieClip
#include <openfl/display/MovieClip.h>
#endif
#ifndef INCLUDED_openfl_display_Shader
#include <openfl/display/Shader.h>
#endif
#ifndef INCLUDED_openfl_display_ShaderData
#include <openfl/display/ShaderData.h>
#endif
#ifndef INCLUDED_openfl_display_ShaderInput_openfl_display_BitmapData
#include <openfl/display/ShaderInput_openfl_display_BitmapData.h>
#endif
#ifndef INCLUDED_openfl_display_ShaderParameter_Float
#include <openfl/display/ShaderParameter_Float.h>
#endif
#ifndef INCLUDED_openfl_display_Sprite
#include <openfl/display/Sprite.h>
#endif
#ifndef INCLUDED_openfl_display_Stage
#include <openfl/display/Stage.h>
#endif
#ifndef INCLUDED_openfl_errors_Error
#include <openfl/errors/Error.h>
#endif
#ifndef INCLUDED_openfl_errors_TypeError
#include <openfl/errors/TypeError.h>
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
#ifndef INCLUDED_openfl_events_TouchEvent
#include <openfl/events/TouchEvent.h>
#endif
#ifndef INCLUDED_openfl_filters_BitmapFilter
#include <openfl/filters/BitmapFilter.h>
#endif
#ifndef INCLUDED_openfl_geom_ColorTransform
#include <openfl/geom/ColorTransform.h>
#endif
#ifndef INCLUDED_openfl_geom_Matrix
#include <openfl/geom/Matrix.h>
#endif
#ifndef INCLUDED_openfl_geom_Point
#include <openfl/geom/Point.h>
#endif
#ifndef INCLUDED_openfl_geom_Rectangle
#include <openfl/geom/Rectangle.h>
#endif
#ifndef INCLUDED_openfl_geom_Transform
#include <openfl/geom/Transform.h>
#endif
namespace openfl{
namespace display{

Void DisplayObject_obj::__construct()
{
{
	super::__construct(null());
	this->__alpha = (int)1;
	this->__blendMode = ((Dynamic)((int)10));
	this->__cacheAsBitmap = false;
	::openfl::geom::Matrix tmp = ::openfl::geom::Matrix_obj::__new(null(),null(),null(),null(),null(),null());
	this->__transform = tmp;
	this->__visible = true;
	this->__rotation = (int)0;
	this->__rotationSine = (int)0;
	this->__rotationCosine = (int)1;
	this->__scaleX = (int)1;
	this->__scaleY = (int)1;
	this->__worldAlpha = (int)1;
	this->__worldBlendMode = ((Dynamic)((int)10));
	::openfl::geom::Matrix tmp1 = ::openfl::geom::Matrix_obj::__new(null(),null(),null(),null(),null(),null());
	this->__worldTransform = tmp1;
	::openfl::geom::ColorTransform tmp2 = ::openfl::geom::ColorTransform_obj::__new(null(),null(),null(),null(),null(),null(),null(),null());
	this->__worldColorTransform = tmp2;
	::openfl::geom::Matrix tmp3 = ::openfl::geom::Matrix_obj::__new(null(),null(),null(),null(),null(),null());
	this->__renderTransform = tmp3;
	int tmp4 = ++(::openfl::display::DisplayObject_obj::__instanceCount);
	::String tmp5 = (HX_HCSTRING("instance","\x95","\x1f","\xe1","\x59") + tmp4);
	this->set_name(tmp5);
}
;
	return null();
}

//DisplayObject_obj::~DisplayObject_obj() { }

Dynamic DisplayObject_obj::__CreateEmpty() { return  new DisplayObject_obj; }
hx::ObjectPtr< DisplayObject_obj > DisplayObject_obj::__new()
{  hx::ObjectPtr< DisplayObject_obj > _result_ = new DisplayObject_obj();
	_result_->__construct();
	return _result_;}

Dynamic DisplayObject_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< DisplayObject_obj > _result_ = new DisplayObject_obj();
	_result_->__construct();
	return _result_;}

hx::Object *DisplayObject_obj::__ToInterface(const hx::type_info &inType) {
	if (inType==typeid( ::openfl::display::IBitmapDrawable_obj)) return operator ::openfl::display::IBitmapDrawable_obj *();
	return super::__ToInterface(inType);
}

DisplayObject_obj::operator ::openfl::display::IBitmapDrawable_obj *()
	{ return new ::openfl::display::IBitmapDrawable_delegate_< DisplayObject_obj >(this); }
Void DisplayObject_obj::addEventListener( ::String type,Dynamic listener,hx::Null< bool >  __o_useCapture,hx::Null< int >  __o_priority,hx::Null< bool >  __o_useWeakReference){
bool useCapture = __o_useCapture.Default(false);
int priority = __o_priority.Default(0);
bool useWeakReference = __o_useWeakReference.Default(false);
{
		::String tmp = type;
		::String _switch_1 = (tmp);
		if (  ( _switch_1==HX_HCSTRING("activate","\xb3","\x1b","\xac","\xe5")) ||  ( _switch_1==HX_HCSTRING("deactivate","\x34","\x5c","\x01","\x3c")) ||  ( _switch_1==HX_HCSTRING("enterFrame","\xf5","\x03","\x50","\x02")) ||  ( _switch_1==HX_HCSTRING("exitFrame","\x2f","\x64","\x48","\x12")) ||  ( _switch_1==HX_HCSTRING("frameConstructed","\x09","\x89","\x5d","\x98")) ||  ( _switch_1==HX_HCSTRING("render","\x56","\x6b","\x29","\x05"))){
			::haxe::ds::StringMap tmp1 = ::openfl::display::DisplayObject_obj::__broadcastEvents;
			::String tmp2 = type;
			bool tmp3 = tmp1->exists(tmp2);
			bool tmp4 = !(tmp3);
			if ((tmp4)){
				::haxe::ds::StringMap tmp5 = ::openfl::display::DisplayObject_obj::__broadcastEvents;
				::String tmp6 = type;
				tmp5->set(tmp6,Array_obj< ::Dynamic >::__new());
			}
			::haxe::ds::StringMap tmp5 = ::openfl::display::DisplayObject_obj::__broadcastEvents;
			::String tmp6 = type;
			Array< ::Dynamic > dispatchers = ((Array< ::Dynamic >)(tmp5->get(tmp6)));
			int tmp7 = dispatchers->indexOf(hx::ObjectPtr<OBJ_>(this),null());
			bool tmp8 = (tmp7 == (int)-1);
			if ((tmp8)){
				dispatchers->push(hx::ObjectPtr<OBJ_>(this));
			}
		}
		else  {
		}
;
;
		::String tmp1 = type;
		Dynamic tmp2 = listener;
		bool tmp3 = useCapture;
		int tmp4 = priority;
		bool tmp5 = useWeakReference;
		this->super::addEventListener(tmp1,tmp2,tmp3,tmp4,tmp5);
	}
return null();
}


bool DisplayObject_obj::dispatchEvent( ::openfl::events::Event event){
	::openfl::events::Event tmp = event;
	bool tmp1 = ::Std_obj::is(tmp,hx::ClassOf< ::openfl::events::MouseEvent >());
	if ((tmp1)){
		::openfl::events::MouseEvent mouseEvent = ((::openfl::events::MouseEvent)(event));
		Float tmp2;
		{
			::openfl::geom::Matrix tmp3 = this->__getRenderTransform();
			::openfl::geom::Matrix _this = tmp3;
			Float tmp4 = (mouseEvent->localX * _this->a);
			Float tmp5 = (mouseEvent->localY * _this->c);
			Float tmp6 = (tmp4 + tmp5);
			Float tmp7 = _this->tx;
			tmp2 = (tmp6 + tmp7);
		}
		mouseEvent->stageX = tmp2;
		Float tmp3;
		{
			::openfl::geom::Matrix tmp4 = this->__getRenderTransform();
			::openfl::geom::Matrix _this = tmp4;
			Float tmp5 = (mouseEvent->localX * _this->b);
			Float tmp6 = (mouseEvent->localY * _this->d);
			Float tmp7 = (tmp5 + tmp6);
			Float tmp8 = _this->ty;
			tmp3 = (tmp7 + tmp8);
		}
		mouseEvent->stageY = tmp3;
	}
	else{
		::openfl::events::Event tmp2 = event;
		bool tmp3 = ::Std_obj::is(tmp2,hx::ClassOf< ::openfl::events::TouchEvent >());
		if ((tmp3)){
			::openfl::events::TouchEvent touchEvent = ((::openfl::events::TouchEvent)(event));
			Float tmp4;
			{
				::openfl::geom::Matrix tmp5 = this->__getRenderTransform();
				::openfl::geom::Matrix _this = tmp5;
				Float tmp6 = (touchEvent->localX * _this->a);
				Float tmp7 = (touchEvent->localY * _this->c);
				Float tmp8 = (tmp6 + tmp7);
				Float tmp9 = _this->tx;
				tmp4 = (tmp8 + tmp9);
			}
			touchEvent->stageX = tmp4;
			Float tmp5;
			{
				::openfl::geom::Matrix tmp6 = this->__getRenderTransform();
				::openfl::geom::Matrix _this = tmp6;
				Float tmp7 = (touchEvent->localX * _this->b);
				Float tmp8 = (touchEvent->localY * _this->d);
				Float tmp9 = (tmp7 + tmp8);
				Float tmp10 = _this->ty;
				tmp5 = (tmp9 + tmp10);
			}
			touchEvent->stageY = tmp5;
		}
	}
	::openfl::events::Event tmp2 = event;
	bool tmp3 = this->super::dispatchEvent(tmp2);
	return tmp3;
}


::openfl::geom::Rectangle DisplayObject_obj::getBounds( ::openfl::display::DisplayObject targetCoordinateSpace){
	::openfl::geom::Matrix matrix;
	bool usingTemp = false;
	bool tmp = (targetCoordinateSpace != null());
	if ((tmp)){
		::openfl::geom::Matrix tmp1 = this->__getWorldTransform();
		::openfl::geom::Matrix tmp2 = tmp1->clone();
		matrix = tmp2;
		::openfl::geom::Matrix tmp3 = targetCoordinateSpace->__getWorldTransform();
		::openfl::geom::Matrix tmp4 = tmp3->clone();
		::openfl::geom::Matrix tmp5 = tmp4->invert();
		matrix->concat(tmp5);
	}
	else{
		usingTemp = true;
		::lime::utils::ObjectPool_openfl_geom_Matrix tmp1 = ::openfl::geom::Matrix_obj::__pool;
		::openfl::geom::Matrix tmp2 = tmp1->get();
		matrix = tmp2;
		matrix->identity();
	}
	::openfl::geom::Rectangle tmp1 = ::openfl::geom::Rectangle_obj::__new(null(),null(),null(),null());
	::openfl::geom::Rectangle bounds = tmp1;
	::openfl::geom::Rectangle tmp2 = bounds;
	::openfl::geom::Matrix tmp3 = matrix;
	this->__getBounds(tmp2,tmp3);
	bool tmp4 = usingTemp;
	if ((tmp4)){
		::lime::utils::ObjectPool_openfl_geom_Matrix tmp5 = ::openfl::geom::Matrix_obj::__pool;
		::openfl::geom::Matrix tmp6 = matrix;
		tmp5->release(tmp6);
	}
	::openfl::geom::Rectangle tmp5 = bounds;
	return tmp5;
}


HX_DEFINE_DYNAMIC_FUNC1(DisplayObject_obj,getBounds,return )

::openfl::geom::Rectangle DisplayObject_obj::getRect( ::openfl::display::DisplayObject targetCoordinateSpace){
	::openfl::display::DisplayObject tmp = targetCoordinateSpace;
	::openfl::geom::Rectangle tmp1 = this->getBounds(tmp);
	return tmp1;
}


HX_DEFINE_DYNAMIC_FUNC1(DisplayObject_obj,getRect,return )

::openfl::geom::Point DisplayObject_obj::globalToLocal( ::openfl::geom::Point pos){
	::openfl::geom::Point tmp = pos->clone();
	pos = tmp;
	{
		::openfl::geom::Matrix tmp1 = this->__getRenderTransform();
		::openfl::geom::Matrix _this = tmp1;
		Float tmp2 = (_this->a * _this->d);
		Float tmp3 = (_this->b * _this->c);
		Float tmp4 = (tmp2 - tmp3);
		Float norm = tmp4;
		bool tmp5 = (norm == (int)0);
		if ((tmp5)){
			Float tmp6 = _this->tx;
			Float tmp7 = -(tmp6);
			pos->x = tmp7;
			Float tmp8 = _this->ty;
			Float tmp9 = -(tmp8);
			pos->y = tmp9;
		}
		else{
			Float tmp6 = (Float(((Float)1.0)) / Float(norm));
			Float tmp7 = _this->c;
			Float tmp8 = (_this->ty - pos->y);
			Float tmp9 = (tmp7 * tmp8);
			Float tmp10 = _this->d;
			Float tmp11 = (pos->x - _this->tx);
			Float tmp12 = (tmp10 * tmp11);
			Float tmp13 = (tmp9 + tmp12);
			Float tmp14 = (tmp6 * tmp13);
			Float px = tmp14;
			Float tmp15 = (Float(((Float)1.0)) / Float(norm));
			Float tmp16 = _this->a;
			Float tmp17 = (pos->y - _this->ty);
			Float tmp18 = (tmp16 * tmp17);
			Float tmp19 = _this->b;
			Float tmp20 = (_this->tx - pos->x);
			Float tmp21 = (tmp19 * tmp20);
			Float tmp22 = (tmp18 + tmp21);
			Float tmp23 = (tmp15 * tmp22);
			pos->y = tmp23;
			pos->x = px;
		}
	}
	::openfl::geom::Point tmp1 = pos;
	return tmp1;
}


HX_DEFINE_DYNAMIC_FUNC1(DisplayObject_obj,globalToLocal,return )

bool DisplayObject_obj::hitTestObject( ::openfl::display::DisplayObject obj){
	bool tmp = (obj != null());
	bool tmp1 = tmp;
	bool tmp2;
	if ((tmp1)){
		tmp2 = (obj->parent != null());
	}
	else{
		tmp2 = false;
	}
	bool tmp3;
	if ((tmp2)){
		::openfl::display::DisplayObjectContainer tmp4 = this->parent;
		::openfl::display::DisplayObjectContainer tmp5 = tmp4;
		tmp3 = (tmp5 != null());
	}
	else{
		tmp3 = false;
	}
	if ((tmp3)){
		::openfl::geom::Rectangle tmp4 = this->getBounds(hx::ObjectPtr<OBJ_>(this));
		::openfl::geom::Rectangle currentBounds = tmp4;
		::openfl::geom::Rectangle tmp5 = obj->getBounds(hx::ObjectPtr<OBJ_>(this));
		::openfl::geom::Rectangle targetBounds = tmp5;
		::openfl::geom::Rectangle tmp6 = targetBounds;
		bool tmp7 = currentBounds->intersects(tmp6);
		return tmp7;
	}
	return false;
}


HX_DEFINE_DYNAMIC_FUNC1(DisplayObject_obj,hitTestObject,return )

bool DisplayObject_obj::hitTestPoint( Float x,Float y,hx::Null< bool >  __o_shapeFlag){
bool shapeFlag = __o_shapeFlag.Default(false);
{
		::openfl::display::Stage tmp = this->stage;
		bool tmp1 = (tmp != null());
		if ((tmp1)){
			Float tmp2 = x;
			Float tmp3 = y;
			bool tmp4 = shapeFlag;
			bool tmp5 = this->__hitTest(tmp2,tmp3,tmp4,null(),true,hx::ObjectPtr<OBJ_>(this));
			return tmp5;
		}
		else{
			return false;
		}
		return false;
	}
}


HX_DEFINE_DYNAMIC_FUNC3(DisplayObject_obj,hitTestPoint,return )

::openfl::geom::Point DisplayObject_obj::localToGlobal( ::openfl::geom::Point point){
	::openfl::geom::Matrix tmp = this->__getRenderTransform();
	::openfl::geom::Point tmp1 = point;
	::openfl::geom::Point tmp2 = tmp->transformPoint(tmp1);
	return tmp2;
}


HX_DEFINE_DYNAMIC_FUNC1(DisplayObject_obj,localToGlobal,return )

Void DisplayObject_obj::removeEventListener( ::String type,Dynamic listener,hx::Null< bool >  __o_useCapture){
bool useCapture = __o_useCapture.Default(false);
{
		::String tmp = type;
		Dynamic tmp1 = listener;
		bool tmp2 = useCapture;
		this->super::removeEventListener(tmp,tmp1,tmp2);
		::String tmp3 = type;
		::String _switch_2 = (tmp3);
		if (  ( _switch_2==HX_HCSTRING("activate","\xb3","\x1b","\xac","\xe5")) ||  ( _switch_2==HX_HCSTRING("deactivate","\x34","\x5c","\x01","\x3c")) ||  ( _switch_2==HX_HCSTRING("enterFrame","\xf5","\x03","\x50","\x02")) ||  ( _switch_2==HX_HCSTRING("exitFrame","\x2f","\x64","\x48","\x12")) ||  ( _switch_2==HX_HCSTRING("frameConstructed","\x09","\x89","\x5d","\x98")) ||  ( _switch_2==HX_HCSTRING("render","\x56","\x6b","\x29","\x05"))){
			::String tmp4 = type;
			bool tmp5 = this->hasEventListener(tmp4);
			bool tmp6 = !(tmp5);
			if ((tmp6)){
				::haxe::ds::StringMap tmp7 = ::openfl::display::DisplayObject_obj::__broadcastEvents;
				::String tmp8 = type;
				bool tmp9 = tmp7->exists(tmp8);
				if ((tmp9)){
					::haxe::ds::StringMap tmp10 = ::openfl::display::DisplayObject_obj::__broadcastEvents;
					::String tmp11 = type;
					((Array< ::Dynamic >)(tmp10->get(tmp11)))->remove(hx::ObjectPtr<OBJ_>(this));
				}
			}
		}
		else  {
		}
;
;
	}
return null();
}


Void DisplayObject_obj::__cleanup( ){
{
		this->__cairo = null();
		::openfl::display::Graphics tmp = this->__graphics;
		bool tmp1 = (tmp != null());
		if ((tmp1)){
			::openfl::display::Graphics tmp2 = this->__graphics;
			tmp2->__cleanup();
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(DisplayObject_obj,__cleanup,(void))

bool DisplayObject_obj::__dispatch( ::openfl::events::Event event){
	::haxe::ds::StringMap tmp = this->__eventMap;
	bool tmp1 = (tmp != null());
	bool tmp2;
	if ((tmp1)){
		::String tmp3 = event->type;
		::String tmp4 = tmp3;
		tmp2 = this->hasEventListener(tmp4);
	}
	else{
		tmp2 = false;
	}
	if ((tmp2)){
		::openfl::events::Event tmp3 = event;
		bool tmp4 = this->super::__dispatchEvent(tmp3);
		bool result = tmp4;
		bool tmp5 = event->__isCanceled;
		if ((tmp5)){
			return true;
		}
		bool tmp6 = result;
		return tmp6;
	}
	return true;
}


HX_DEFINE_DYNAMIC_FUNC1(DisplayObject_obj,__dispatch,return )

bool DisplayObject_obj::__dispatchChildren( ::openfl::events::Event event,::openfl::_Vector::ObjectVector stack){
	event->target = hx::ObjectPtr<OBJ_>(this);
	::openfl::display::DisplayObjectContainer tmp = this->parent;
	bool tmp1 = (tmp != null());
	if ((tmp1)){
		event->eventPhase = (int)1;
		::openfl::display::DisplayObjectContainer tmp2 = this->parent;
		::openfl::display::Stage tmp3 = this->stage;
		bool tmp4 = (tmp2 == tmp3);
		if ((tmp4)){
			::openfl::display::DisplayObjectContainer tmp5 = this->parent;
			::openfl::events::Event tmp6 = event;
			tmp5->__dispatchEvent(tmp6);
		}
		else{
			::openfl::display::DisplayObjectContainer tmp5 = this->parent;
			::openfl::display::DisplayObjectContainer parent = tmp5;
			int i = (int)0;
			while((true)){
				bool tmp6 = (parent != null());
				bool tmp7 = !(tmp6);
				if ((tmp7)){
					break;
				}
				int tmp8 = i;
				::openfl::display::DisplayObjectContainer tmp9 = parent;
				::openfl::display::DisplayObject tmp10 = stack->set(tmp8,tmp9);
				tmp10;
				parent = parent->parent;
				(i)++;
			}
			{
				int _g = (int)0;
				while((true)){
					bool tmp6 = (_g < i);
					bool tmp7 = !(tmp6);
					if ((tmp7)){
						break;
					}
					int tmp8 = (_g)++;
					int j = tmp8;
					int tmp9 = (i - j);
					int tmp10 = (tmp9 - (int)1);
					::openfl::display::DisplayObject tmp11 = stack->get(tmp10);
					::openfl::events::Event tmp12 = event;
					tmp11->__dispatchEvent(tmp12);
				}
			}
		}
	}
	event->eventPhase = (int)2;
	::openfl::events::Event tmp2 = event;
	bool tmp3 = this->__dispatchEvent(tmp2);
	return tmp3;
}


HX_DEFINE_DYNAMIC_FUNC2(DisplayObject_obj,__dispatchChildren,return )

bool DisplayObject_obj::__dispatchEvent( ::openfl::events::Event event){
	::openfl::events::Event tmp = event;
	bool tmp1 = this->super::__dispatchEvent(tmp);
	bool result = tmp1;
	bool tmp2 = event->__isCanceled;
	if ((tmp2)){
		return true;
	}
	bool tmp3 = event->bubbles;
	bool tmp4 = tmp3;
	bool tmp5;
	if ((tmp4)){
		::openfl::display::DisplayObjectContainer tmp6 = this->parent;
		::openfl::display::DisplayObjectContainer tmp7 = tmp6;
		::openfl::display::DisplayObjectContainer tmp8 = tmp7;
		tmp5 = (tmp8 != null());
	}
	else{
		tmp5 = false;
	}
	bool tmp6;
	if ((tmp5)){
		::openfl::display::DisplayObjectContainer tmp7 = this->parent;
		::openfl::display::DisplayObjectContainer tmp8 = tmp7;
		tmp6 = (tmp8 != hx::ObjectPtr<OBJ_>(this));
	}
	else{
		tmp6 = false;
	}
	if ((tmp6)){
		event->eventPhase = (int)3;
		bool tmp7 = (event->target == null());
		if ((tmp7)){
			event->target = hx::ObjectPtr<OBJ_>(this);
		}
		::openfl::display::DisplayObjectContainer tmp8 = this->parent;
		::openfl::events::Event tmp9 = event;
		tmp8->__dispatchEvent(tmp9);
	}
	bool tmp7 = result;
	return tmp7;
}


Void DisplayObject_obj::__dispatchStack( ::openfl::events::Event event,Array< ::Dynamic > stack){
{
		::openfl::display::DisplayObject target;
		int length = stack->length;
		bool tmp = (length == (int)0);
		if ((tmp)){
			event->eventPhase = (int)2;
			target = ((::openfl::display::DisplayObject)(event->target));
			::openfl::events::Event tmp1 = event;
			target->__dispatch(tmp1);
		}
		else{
			event->eventPhase = (int)1;
			int tmp1 = (stack->length - (int)1);
			::openfl::display::DisplayObject tmp2 = stack->__get(tmp1).StaticCast< ::openfl::display::DisplayObject >();
			event->target = tmp2;
			{
				int _g1 = (int)0;
				int tmp3 = (length - (int)1);
				int _g = tmp3;
				while((true)){
					bool tmp4 = (_g1 < _g);
					bool tmp5 = !(tmp4);
					if ((tmp5)){
						break;
					}
					int tmp6 = (_g1)++;
					int i = tmp6;
					::openfl::display::DisplayObject tmp7 = stack->__get(i).StaticCast< ::openfl::display::DisplayObject >();
					::openfl::events::Event tmp8 = event;
					tmp7->__dispatch(tmp8);
					bool tmp9 = event->__isCanceled;
					if ((tmp9)){
						return null();
					}
				}
			}
			event->eventPhase = (int)2;
			target = ((::openfl::display::DisplayObject)(event->target));
			::openfl::events::Event tmp3 = event;
			target->__dispatch(tmp3);
			bool tmp4 = event->__isCanceled;
			if ((tmp4)){
				return null();
			}
			bool tmp5 = event->bubbles;
			if ((tmp5)){
				event->eventPhase = (int)3;
				int tmp6 = (length - (int)2);
				int i = tmp6;
				while((true)){
					bool tmp7 = (i >= (int)0);
					bool tmp8 = !(tmp7);
					if ((tmp8)){
						break;
					}
					::openfl::display::DisplayObject tmp9 = stack->__get(i).StaticCast< ::openfl::display::DisplayObject >();
					::openfl::events::Event tmp10 = event;
					tmp9->__dispatch(tmp10);
					bool tmp11 = event->__isCanceled;
					if ((tmp11)){
						return null();
					}
					(i)--;
				}
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(DisplayObject_obj,__dispatchStack,(void))

Void DisplayObject_obj::__enterFrame( int deltaTime){
{
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(DisplayObject_obj,__enterFrame,(void))

Void DisplayObject_obj::__getBounds( ::openfl::geom::Rectangle rect,::openfl::geom::Matrix matrix){
{
		::openfl::display::Graphics tmp = this->__graphics;
		bool tmp1 = (tmp != null());
		if ((tmp1)){
			::openfl::display::Graphics tmp2 = this->__graphics;
			::openfl::geom::Rectangle tmp3 = rect;
			::openfl::geom::Matrix tmp4 = matrix;
			tmp2->__getBounds(tmp3,tmp4);
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(DisplayObject_obj,__getBounds,(void))

::lime::ui::MouseCursor DisplayObject_obj::__getCursor( ){
	return null();
}


HX_DEFINE_DYNAMIC_FUNC0(DisplayObject_obj,__getCursor,return )

bool DisplayObject_obj::__getInteractive( Array< ::Dynamic > stack){
	return false;
}


HX_DEFINE_DYNAMIC_FUNC1(DisplayObject_obj,__getInteractive,return )

Void DisplayObject_obj::__getLocalBounds( ::openfl::geom::Rectangle rect){
{
		::openfl::geom::Matrix tmp = this->__transform;
		Float cacheX = tmp->tx;
		::openfl::geom::Matrix tmp1 = this->__transform;
		Float cacheY = tmp1->ty;
		::openfl::geom::Matrix tmp2 = this->__transform;
		Float tmp3 = tmp2->ty = (int)0;
		::openfl::geom::Matrix tmp4 = this->__transform;
		tmp4->tx = tmp3;
		::openfl::geom::Rectangle tmp5 = rect;
		::openfl::geom::Matrix tmp6 = this->__transform;
		this->__getBounds(tmp5,tmp6);
		::openfl::geom::Matrix tmp7 = this->__transform;
		tmp7->tx = cacheX;
		::openfl::geom::Matrix tmp8 = this->__transform;
		tmp8->ty = cacheY;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(DisplayObject_obj,__getLocalBounds,(void))

Void DisplayObject_obj::__getRenderBounds( ::openfl::geom::Rectangle rect,::openfl::geom::Matrix matrix){
{
		::openfl::geom::Rectangle tmp = this->__scrollRect;
		bool tmp1 = (tmp == null());
		if ((tmp1)){
			::openfl::geom::Rectangle tmp2 = rect;
			::openfl::geom::Matrix tmp3 = matrix;
			this->__getBounds(tmp2,tmp3);
		}
		else{
			::lime::utils::ObjectPool_openfl_geom_Rectangle tmp2 = ::openfl::geom::Rectangle_obj::__pool;
			::openfl::geom::Rectangle tmp3 = tmp2->get();
			::openfl::geom::Rectangle r = tmp3;
			::openfl::geom::Rectangle tmp4 = this->__scrollRect;
			r->copyFrom(tmp4);
			::openfl::geom::Rectangle tmp5 = r;
			::openfl::geom::Matrix tmp6 = matrix;
			r->__transform(tmp5,tmp6);
			Float tmp7 = matrix->tx;
			Float tmp8 = matrix->ty;
			Float tmp9 = r->width;
			Float tmp10 = r->height;
			rect->__expand(tmp7,tmp8,tmp9,tmp10);
			::lime::utils::ObjectPool_openfl_geom_Rectangle tmp11 = ::openfl::geom::Rectangle_obj::__pool;
			::openfl::geom::Rectangle tmp12 = r;
			tmp11->release(tmp12);
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(DisplayObject_obj,__getRenderBounds,(void))

::openfl::geom::Matrix DisplayObject_obj::__getRenderTransform( ){
	this->__getWorldTransform();
	::openfl::geom::Matrix tmp = this->__renderTransform;
	return tmp;
}


HX_DEFINE_DYNAMIC_FUNC0(DisplayObject_obj,__getRenderTransform,return )

::openfl::geom::Matrix DisplayObject_obj::__getWorldTransform( ){
	bool tmp = this->__transformDirty;
	if ((tmp)){
		Array< ::Dynamic > list = Array_obj< ::Dynamic >::__new();
		::openfl::display::DisplayObject current = hx::ObjectPtr<OBJ_>(this);
		bool tmp1 = this->__transformDirty;
		bool transformDirty = tmp1;
		::openfl::display::DisplayObjectContainer tmp2 = this->parent;
		bool tmp3 = (tmp2 == null());
		if ((tmp3)){
			bool tmp4 = transformDirty;
			if ((tmp4)){
				this->__update(true,false,null());
			}
		}
		else{
			while((true)){
				::openfl::display::DisplayObject tmp4 = current;
				::openfl::display::Stage tmp5 = this->stage;
				bool tmp6 = (tmp4 != tmp5);
				bool tmp7 = !(tmp6);
				if ((tmp7)){
					break;
				}
				::openfl::display::DisplayObject tmp8 = current;
				list->push(tmp8);
				current = current->parent;
				bool tmp9 = (current == null());
				if ((tmp9)){
					break;
				}
				::openfl::display::DisplayObject tmp10 = current;
				::openfl::display::Stage tmp11 = this->stage;
				bool tmp12 = (tmp10 != tmp11);
				bool tmp13;
				if ((tmp12)){
					tmp13 = current->__transformDirty;
				}
				else{
					tmp13 = false;
				}
				if ((tmp13)){
					transformDirty = true;
				}
			}
		}
		bool tmp4 = transformDirty;
		if ((tmp4)){
			int i = list->length;
			while((true)){
				int tmp5 = --(i);
				bool tmp6 = (tmp5 >= (int)0);
				bool tmp7 = !(tmp6);
				if ((tmp7)){
					break;
				}
				::openfl::display::DisplayObject tmp8 = list->__get(i).StaticCast< ::openfl::display::DisplayObject >();
				tmp8->__update(true,false,null());
			}
		}
	}
	::openfl::geom::Matrix tmp1 = this->__worldTransform;
	return tmp1;
}


HX_DEFINE_DYNAMIC_FUNC0(DisplayObject_obj,__getWorldTransform,return )

bool DisplayObject_obj::__hitTest( Float x,Float y,bool shapeFlag,Array< ::Dynamic > stack,bool interactiveOnly,::openfl::display::DisplayObject hitObject){
	::openfl::display::Graphics tmp = this->__graphics;
	bool tmp1 = (tmp != null());
	if ((tmp1)){
		bool tmp2 = hitObject->get_visible();
		bool tmp3 = tmp2;
		bool tmp4 = !(tmp3);
		bool tmp5 = !(tmp4);
		bool tmp6;
		if ((tmp5)){
			tmp6 = this->__isMask;
		}
		else{
			tmp6 = true;
		}
		if ((tmp6)){
			return false;
		}
		::openfl::display::DisplayObject tmp7 = this->get_mask();
		bool tmp8 = (tmp7 != null());
		bool tmp9;
		if ((tmp8)){
			::openfl::display::DisplayObject tmp10 = this->get_mask();
			::openfl::display::DisplayObject tmp11 = tmp10;
			Float tmp12 = x;
			Float tmp13 = y;
			Float tmp14 = tmp12;
			Float tmp15 = tmp13;
			bool tmp16 = tmp11->__hitTestMask(tmp14,tmp15);
			bool tmp17 = tmp16;
			bool tmp18 = tmp17;
			tmp9 = !(tmp18);
		}
		else{
			tmp9 = false;
		}
		if ((tmp9)){
			return false;
		}
		::openfl::display::Graphics tmp10 = this->__graphics;
		Float tmp11 = x;
		Float tmp12 = y;
		bool tmp13 = shapeFlag;
		::openfl::geom::Matrix tmp14 = this->__getRenderTransform();
		bool tmp15 = tmp10->__hitTest(tmp11,tmp12,tmp13,tmp14);
		if ((tmp15)){
			bool tmp16 = (stack != null());
			bool tmp17;
			if ((tmp16)){
				bool tmp18 = interactiveOnly;
				bool tmp19 = tmp18;
				tmp17 = !(tmp19);
			}
			else{
				tmp17 = false;
			}
			if ((tmp17)){
				::openfl::display::DisplayObject tmp18 = hitObject;
				stack->push(tmp18);
			}
			return true;
		}
	}
	return false;
}


HX_DEFINE_DYNAMIC_FUNC6(DisplayObject_obj,__hitTest,return )

bool DisplayObject_obj::__hitTestMask( Float x,Float y){
	::openfl::display::Graphics tmp = this->__graphics;
	bool tmp1 = (tmp != null());
	if ((tmp1)){
		::openfl::display::Graphics tmp2 = this->__graphics;
		Float tmp3 = x;
		Float tmp4 = y;
		::openfl::geom::Matrix tmp5 = this->__getRenderTransform();
		bool tmp6 = tmp2->__hitTest(tmp3,tmp4,true,tmp5);
		if ((tmp6)){
			return true;
		}
	}
	return false;
}


HX_DEFINE_DYNAMIC_FUNC2(DisplayObject_obj,__hitTestMask,return )

Void DisplayObject_obj::__readGraphicsData( ::openfl::_Vector::ObjectVector graphicsData,bool recurse){
{
		::openfl::display::Graphics tmp = this->__graphics;
		bool tmp1 = (tmp != null());
		if ((tmp1)){
			::openfl::display::Graphics tmp2 = this->__graphics;
			::openfl::_Vector::ObjectVector tmp3 = graphicsData;
			tmp2->__readGraphicsData(tmp3);
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(DisplayObject_obj,__readGraphicsData,(void))

Void DisplayObject_obj::__renderCairo( ::openfl::_internal::renderer::RenderSession renderSession){
{
		::openfl::_internal::renderer::RenderSession tmp = renderSession;
		this->__updateCacheBitmap(tmp);
		::openfl::display::Bitmap tmp1 = this->__cacheBitmap;
		bool tmp2 = (tmp1 != null());
		bool tmp3;
		if ((tmp2)){
			bool tmp4 = this->__cacheBitmapRender;
			bool tmp5 = tmp4;
			bool tmp6 = tmp5;
			tmp3 = !(tmp6);
		}
		else{
			tmp3 = false;
		}
		if ((tmp3)){
			::openfl::display::Bitmap tmp4 = this->__cacheBitmap;
			::openfl::display::Bitmap bitmap = tmp4;
			bool tmp5 = bitmap->__renderable;
			bool tmp6 = tmp5;
			bool tmp7 = !(tmp6);
			bool tmp8 = !(tmp7);
			bool tmp9;
			if ((tmp8)){
				tmp9 = (bitmap->__worldAlpha <= (int)0);
			}
			else{
				tmp9 = true;
			}
			if ((tmp9)){
				Dynamic();
			}
			else{
				::lime::graphics::cairo::Cairo cairo = renderSession->cairo;
				bool tmp10 = (bitmap->bitmapData != null());
				bool tmp11;
				if ((tmp10)){
					tmp11 = bitmap->bitmapData->__isValid;
				}
				else{
					tmp11 = false;
				}
				if ((tmp11)){
					::openfl::display::Bitmap tmp12 = bitmap;
					renderSession->maskManager->pushObject(tmp12,null());
					::openfl::geom::Matrix transform = bitmap->__renderTransform;
					bool tmp13 = renderSession->roundPixels;
					if ((tmp13)){
						::lime::math::Matrix3 tmp14 = transform->__toMatrix3();
						::lime::math::Matrix3 matrix = tmp14;
						Float tmp15 = matrix->tx;
						int tmp16 = ::Math_obj::round(tmp15);
						matrix->tx = tmp16;
						Float tmp17 = matrix->ty;
						int tmp18 = ::Math_obj::round(tmp17);
						matrix->ty = tmp18;
						::lime::math::Matrix3 tmp19 = matrix;
						cairo->set_matrix(tmp19);
					}
					else{
						::lime::math::Matrix3 tmp14 = transform->__toMatrix3();
						cairo->set_matrix(tmp14);
					}
					Dynamic tmp14 = bitmap->bitmapData->getSurface();
					Dynamic surface = tmp14;
					bool tmp15 = (surface != null());
					if ((tmp15)){
						Dynamic tmp16 = surface;
						Dynamic tmp17 = ::lime::graphics::cairo::_CairoPattern::CairoPattern_Impl__obj::createForSurface(tmp16);
						Dynamic pattern = tmp17;
						Dynamic tmp18 = pattern;
						bool tmp19 = renderSession->allowSmoothing;
						bool tmp20;
						if ((tmp19)){
							tmp20 = bitmap->smoothing;
						}
						else{
							tmp20 = false;
						}
						int tmp21;
						if ((tmp20)){
							tmp21 = (int)1;
						}
						else{
							tmp21 = (int)3;
						}
						::lime::graphics::cairo::_CairoPattern::CairoPattern_Impl__obj::set_filter(tmp18,tmp21);
						Dynamic tmp22 = pattern;
						cairo->set_source(tmp22);
						bool tmp23 = (bitmap->__worldAlpha == (int)1);
						if ((tmp23)){
							cairo->paint();
						}
						else{
							Float tmp24 = bitmap->__worldAlpha;
							cairo->paintWithAlpha(tmp24);
						}
					}
					::openfl::display::Bitmap tmp16 = bitmap;
					renderSession->maskManager->popObject(tmp16,null());
				}
			}
		}
		else{
			::openfl::_internal::renderer::RenderSession tmp4 = renderSession;
			::openfl::_internal::renderer::cairo::CairoDisplayObject_obj::render(hx::ObjectPtr<OBJ_>(this),tmp4);
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(DisplayObject_obj,__renderCairo,(void))

Void DisplayObject_obj::__renderCairoMask( ::openfl::_internal::renderer::RenderSession renderSession){
{
		::openfl::display::Graphics tmp = this->__graphics;
		bool tmp1 = (tmp != null());
		if ((tmp1)){
			::openfl::display::Graphics tmp2 = this->__graphics;
			::openfl::_internal::renderer::RenderSession tmp3 = renderSession;
			::openfl::_internal::renderer::cairo::CairoGraphics_obj::renderMask(tmp2,tmp3);
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(DisplayObject_obj,__renderCairoMask,(void))

Void DisplayObject_obj::__renderCanvas( ::openfl::_internal::renderer::RenderSession renderSession){
{
		::openfl::display::DisplayObject tmp = this->get_mask();
		bool tmp1 = (tmp == null());
		bool tmp2 = !(tmp1);
		bool tmp3;
		if ((tmp2)){
			::openfl::display::DisplayObject tmp4 = this->get_mask();
			::openfl::display::DisplayObject tmp5 = tmp4;
			Float tmp6 = tmp5->get_width();
			Float tmp7 = tmp6;
			bool tmp8 = (tmp7 > (int)0);
			bool tmp9 = tmp8;
			bool tmp10 = tmp9;
			if ((tmp10)){
				::openfl::display::DisplayObject tmp11 = this->get_mask();
				::openfl::display::DisplayObject tmp12 = tmp11;
				::openfl::display::DisplayObject tmp13 = tmp12;
				Float tmp14 = tmp13->get_height();
				Float tmp15 = tmp14;
				Float tmp16 = tmp15;
				tmp3 = (tmp16 > (int)0);
			}
			else{
				tmp3 = false;
			}
		}
		else{
			tmp3 = true;
		}
		if ((tmp3)){
			::openfl::_internal::renderer::RenderSession tmp4 = renderSession;
			this->__updateCacheBitmap(tmp4);
			::openfl::display::Bitmap tmp5 = this->__cacheBitmap;
			bool tmp6 = (tmp5 != null());
			bool tmp7;
			if ((tmp6)){
				bool tmp8 = this->__cacheBitmapRender;
				bool tmp9 = tmp8;
				bool tmp10 = tmp9;
				tmp7 = !(tmp10);
			}
			else{
				tmp7 = false;
			}
			if ((tmp7)){
				Dynamic();
			}
			else{
				Dynamic();
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(DisplayObject_obj,__renderCanvas,(void))

Void DisplayObject_obj::__renderCanvasMask( ::openfl::_internal::renderer::RenderSession renderSession){
{
		::openfl::display::Graphics tmp = this->__graphics;
		bool tmp1 = (tmp != null());
		if ((tmp1)){
			::openfl::display::Graphics tmp2 = this->__graphics;
			::openfl::_internal::renderer::RenderSession tmp3 = renderSession;
			::openfl::_internal::renderer::canvas::CanvasGraphics_obj::renderMask(tmp2,tmp3);
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(DisplayObject_obj,__renderCanvasMask,(void))

Void DisplayObject_obj::__renderDOM( ::openfl::_internal::renderer::RenderSession renderSession){
{
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(DisplayObject_obj,__renderDOM,(void))

Void DisplayObject_obj::__renderGL( ::openfl::_internal::renderer::RenderSession renderSession){
{
		::openfl::_internal::renderer::RenderSession tmp = renderSession;
		this->__updateCacheBitmap(tmp);
		::openfl::display::Bitmap tmp1 = this->__cacheBitmap;
		bool tmp2 = (tmp1 != null());
		bool tmp3;
		if ((tmp2)){
			bool tmp4 = this->__cacheBitmapRender;
			bool tmp5 = tmp4;
			bool tmp6 = tmp5;
			tmp3 = !(tmp6);
		}
		else{
			tmp3 = false;
		}
		if ((tmp3)){
			::openfl::display::Bitmap tmp4 = this->__cacheBitmap;
			::openfl::display::Bitmap bitmap = tmp4;
			bool tmp5 = bitmap->__renderable;
			bool tmp6 = tmp5;
			bool tmp7 = !(tmp6);
			bool tmp8 = !(tmp7);
			bool tmp9;
			if ((tmp8)){
				tmp9 = (bitmap->__worldAlpha <= (int)0);
			}
			else{
				tmp9 = true;
			}
			if ((tmp9)){
				Dynamic();
			}
			else{
				bool tmp10 = (bitmap->bitmapData != null());
				bool tmp11;
				if ((tmp10)){
					tmp11 = bitmap->bitmapData->__isValid;
				}
				else{
					tmp11 = false;
				}
				if ((tmp11)){
					::openfl::_internal::renderer::opengl::GLRenderer renderer = ((::openfl::_internal::renderer::opengl::GLRenderer)(renderSession->renderer));
					::lime::_backend::native::NativeGLRenderContext gl = renderSession->gl;
					Dynamic tmp12 = bitmap->__worldBlendMode;
					renderSession->blendModeManager->setBlendMode(tmp12);
					::openfl::display::Bitmap tmp13 = bitmap;
					renderSession->maskManager->pushObject(tmp13,null());
					::openfl::display::Bitmap tmp14 = bitmap;
					::openfl::display::Shader tmp15 = renderSession->filterManager->pushObject(tmp14);
					::openfl::display::Shader shader = tmp15;
					::openfl::display::ShaderData tmp16 = shader->get_data();
					tmp16->uImage0->input = bitmap->bitmapData;
					bool tmp17 = renderSession->allowSmoothing;
					bool tmp18;
					if ((tmp17)){
						bool tmp19 = bitmap->smoothing;
						bool tmp20 = tmp19;
						bool tmp21 = !(tmp20);
						bool tmp22 = tmp21;
						bool tmp23 = tmp22;
						if ((tmp23)){
							tmp18 = renderSession->upscaled;
						}
						else{
							tmp18 = true;
						}
					}
					else{
						tmp18 = false;
					}
					::openfl::display::ShaderData tmp19 = shader->get_data();
					tmp19->uImage0->smoothing = tmp18;
					::openfl::geom::Matrix tmp20 = bitmap->__renderTransform;
					::openfl::display::ShaderData tmp21 = shader->get_data();
					tmp21->uMatrix->value = renderer->getMatrix(tmp20);
					::openfl::display::Shader tmp22 = shader;
					renderSession->shaderManager->setShader(tmp22);
					int tmp23 = gl->ARRAY_BUFFER;
					::lime::_backend::native::NativeGLRenderContext tmp24 = gl;
					Float tmp25 = bitmap->__worldAlpha;
					::lime::graphics::opengl::GLObject tmp26 = bitmap->bitmapData->getBuffer(tmp24,tmp25);
					gl->bindBuffer(tmp23,tmp26);
					::openfl::display::ShaderData tmp27 = shader->get_data();
					int tmp28 = tmp27->aPosition->index;
					int tmp29 = gl->FLOAT;
					int tmp30 = (int)24;
					Float tmp31 = ::lime::utils::_DataPointer::DataPointer_Impl__obj::fromInt((int)0);
					gl->vertexAttribPointer(tmp28,(int)3,tmp29,false,tmp30,tmp31);
					::openfl::display::ShaderData tmp32 = shader->get_data();
					int tmp33 = tmp32->aTexCoord->index;
					int tmp34 = gl->FLOAT;
					int tmp35 = (int)24;
					int tmp36 = (int)12;
					Float tmp37 = ::lime::utils::_DataPointer::DataPointer_Impl__obj::fromInt(tmp36);
					gl->vertexAttribPointer(tmp33,(int)2,tmp34,false,tmp35,tmp37);
					::openfl::display::ShaderData tmp38 = shader->get_data();
					int tmp39 = tmp38->aAlpha->index;
					int tmp40 = gl->FLOAT;
					int tmp41 = (int)24;
					int tmp42 = (int)20;
					Float tmp43 = ::lime::utils::_DataPointer::DataPointer_Impl__obj::fromInt(tmp42);
					gl->vertexAttribPointer(tmp39,(int)1,tmp40,false,tmp41,tmp43);
					int tmp44 = gl->TRIANGLE_STRIP;
					gl->drawArrays(tmp44,(int)0,(int)4);
					::openfl::display::Bitmap tmp45 = bitmap;
					renderSession->filterManager->popObject(tmp45);
					::openfl::display::Bitmap tmp46 = bitmap;
					renderSession->maskManager->popObject(tmp46,null());
				}
			}
		}
		else{
			Dynamic tmp4 = this->opaqueBackground;
			bool tmp5 = (tmp4 == null());
			bool tmp6;
			if ((tmp5)){
				::openfl::display::Graphics tmp7 = this->__graphics;
				::openfl::display::Graphics tmp8 = tmp7;
				tmp6 = (tmp8 == null());
			}
			else{
				tmp6 = false;
			}
			if ((tmp6)){
				Dynamic();
			}
			else{
				bool tmp7 = this->__renderable;
				bool tmp8 = tmp7;
				bool tmp9 = !(tmp8);
				bool tmp10 = !(tmp9);
				bool tmp11;
				if ((tmp10)){
					Float tmp12 = this->__worldAlpha;
					Float tmp13 = tmp12;
					tmp11 = (tmp13 <= (int)0);
				}
				else{
					tmp11 = true;
				}
				if ((tmp11)){
					Dynamic();
				}
				else{
					Dynamic tmp12 = this->opaqueBackground;
					bool tmp13 = (tmp12 != null());
					bool tmp14 = tmp13;
					bool tmp15;
					if ((tmp14)){
						bool tmp16 = this->__cacheBitmapRender;
						bool tmp17 = tmp16;
						bool tmp18 = tmp17;
						bool tmp19 = tmp18;
						bool tmp20 = tmp19;
						tmp15 = !(tmp20);
					}
					else{
						tmp15 = false;
					}
					bool tmp16 = tmp15;
					bool tmp17;
					if ((tmp16)){
						Float tmp18 = this->get_width();
						Float tmp19 = tmp18;
						Float tmp20 = tmp19;
						tmp17 = (tmp20 > (int)0);
					}
					else{
						tmp17 = false;
					}
					bool tmp18;
					if ((tmp17)){
						Float tmp19 = this->get_height();
						Float tmp20 = tmp19;
						tmp18 = (tmp20 > (int)0);
					}
					else{
						tmp18 = false;
					}
					if ((tmp18)){
						renderSession->maskManager->pushObject(hx::ObjectPtr<OBJ_>(this),null());
						::lime::_backend::native::NativeGLRenderContext gl = renderSession->gl;
						::lime::utils::ObjectPool_openfl_geom_Rectangle tmp19 = ::openfl::geom::Rectangle_obj::__pool;
						::openfl::geom::Rectangle tmp20 = tmp19->get();
						::openfl::geom::Rectangle rect = tmp20;
						Float tmp21 = this->get_width();
						Float tmp22 = this->get_height();
						rect->setTo((int)0,(int)0,tmp21,tmp22);
						::openfl::geom::Rectangle tmp23 = rect;
						::openfl::geom::Matrix tmp24 = this->__renderTransform;
						renderSession->maskManager->pushRect(tmp23,tmp24);
						Dynamic tmp25 = this->opaqueBackground;
						int color = ((int)(tmp25));
						int tmp26 = (int(color) >> int((int)16));
						int tmp27 = tmp26;
						int tmp28 = (int(tmp27) & int((int)255));
						int tmp29 = tmp28;
						Float tmp30 = (Float(tmp29) / Float((int)255));
						int tmp31 = (int(color) >> int((int)8));
						int tmp32 = tmp31;
						int tmp33 = (int(tmp32) & int((int)255));
						int tmp34 = tmp33;
						Float tmp35 = (Float(tmp34) / Float((int)255));
						int tmp36 = (int(color) & int((int)255));
						int tmp37 = tmp36;
						Float tmp38 = (Float(tmp37) / Float((int)255));
						gl->clearColor(tmp30,tmp35,tmp38,(int)1);
						int tmp39 = gl->COLOR_BUFFER_BIT;
						gl->clear(tmp39);
						renderSession->maskManager->popRect();
						renderSession->maskManager->popObject(hx::ObjectPtr<OBJ_>(this),null());
						::lime::utils::ObjectPool_openfl_geom_Rectangle tmp40 = ::openfl::geom::Rectangle_obj::__pool;
						::openfl::geom::Rectangle tmp41 = rect;
						tmp40->release(tmp41);
					}
					::openfl::display::Graphics tmp19 = this->__graphics;
					bool tmp20 = (tmp19 != null());
					if ((tmp20)){
						bool tmp21 = this->__renderable;
						bool tmp22 = tmp21;
						bool tmp23 = !(tmp22);
						bool tmp24 = !(tmp23);
						bool tmp25;
						if ((tmp24)){
							Float tmp26 = this->__worldAlpha;
							Float tmp27 = tmp26;
							tmp25 = (tmp27 <= (int)0);
						}
						else{
							tmp25 = true;
						}
						if ((tmp25)){
							Dynamic();
						}
						else{
							::openfl::display::Graphics tmp26 = this->__graphics;
							::openfl::display::Graphics graphics = tmp26;
							bool tmp27 = (graphics != null());
							if ((tmp27)){
								::openfl::display::Graphics tmp28 = graphics;
								::openfl::_internal::renderer::RenderSession tmp29 = renderSession;
								::openfl::geom::Matrix tmp30 = this->__renderTransform;
								::openfl::_internal::renderer::cairo::CairoGraphics_obj::render(tmp28,tmp29,tmp30);
								::openfl::geom::Rectangle bounds = graphics->__bounds;
								bool tmp31 = (graphics->__bitmap != null());
								bool tmp32;
								if ((tmp31)){
									tmp32 = graphics->__visible;
								}
								else{
									tmp32 = false;
								}
								if ((tmp32)){
									::openfl::_internal::renderer::opengl::GLRenderer renderer = ((::openfl::_internal::renderer::opengl::GLRenderer)(renderSession->renderer));
									::lime::_backend::native::NativeGLRenderContext gl = renderSession->gl;
									Dynamic tmp33 = this->__worldBlendMode;
									renderSession->blendModeManager->setBlendMode(tmp33);
									renderSession->maskManager->pushObject(hx::ObjectPtr<OBJ_>(this),null());
									::openfl::display::Shader tmp34 = renderSession->filterManager->pushObject(hx::ObjectPtr<OBJ_>(this));
									::openfl::display::Shader shader = tmp34;
									::openfl::display::ShaderData tmp35 = shader->get_data();
									tmp35->uImage0->input = graphics->__bitmap;
									::openfl::display::ShaderData tmp36 = shader->get_data();
									tmp36->uImage0->smoothing = renderSession->allowSmoothing;
									::openfl::geom::Matrix tmp37 = graphics->__worldTransform;
									::openfl::display::ShaderData tmp38 = shader->get_data();
									tmp38->uMatrix->value = renderer->getMatrix(tmp37);
									::openfl::display::Shader tmp39 = shader;
									renderSession->shaderManager->setShader(tmp39);
									int tmp40 = gl->ARRAY_BUFFER;
									::lime::_backend::native::NativeGLRenderContext tmp41 = gl;
									Float tmp42 = this->__worldAlpha;
									::lime::graphics::opengl::GLObject tmp43 = graphics->__bitmap->getBuffer(tmp41,tmp42);
									gl->bindBuffer(tmp40,tmp43);
									::openfl::display::ShaderData tmp44 = shader->get_data();
									int tmp45 = tmp44->aPosition->index;
									int tmp46 = gl->FLOAT;
									int tmp47 = (int)24;
									Float tmp48 = ::lime::utils::_DataPointer::DataPointer_Impl__obj::fromInt((int)0);
									gl->vertexAttribPointer(tmp45,(int)3,tmp46,false,tmp47,tmp48);
									::openfl::display::ShaderData tmp49 = shader->get_data();
									int tmp50 = tmp49->aTexCoord->index;
									int tmp51 = gl->FLOAT;
									int tmp52 = (int)24;
									int tmp53 = (int)12;
									Float tmp54 = ::lime::utils::_DataPointer::DataPointer_Impl__obj::fromInt(tmp53);
									gl->vertexAttribPointer(tmp50,(int)2,tmp51,false,tmp52,tmp54);
									::openfl::display::ShaderData tmp55 = shader->get_data();
									int tmp56 = tmp55->aAlpha->index;
									int tmp57 = gl->FLOAT;
									int tmp58 = (int)24;
									int tmp59 = (int)20;
									Float tmp60 = ::lime::utils::_DataPointer::DataPointer_Impl__obj::fromInt(tmp59);
									gl->vertexAttribPointer(tmp56,(int)1,tmp57,false,tmp58,tmp60);
									int tmp61 = gl->TRIANGLE_STRIP;
									gl->drawArrays(tmp61,(int)0,(int)4);
									renderSession->filterManager->popObject(hx::ObjectPtr<OBJ_>(this));
									renderSession->maskManager->popObject(hx::ObjectPtr<OBJ_>(this),null());
								}
							}
						}
					}
				}
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(DisplayObject_obj,__renderGL,(void))

Void DisplayObject_obj::__setParentRenderDirty( ){
{
		::openfl::display::DisplayObjectContainer tmp = this->parent;
		bool tmp1 = (tmp != null());
		bool tmp2;
		if ((tmp1)){
			::openfl::display::DisplayObjectContainer tmp3 = this->parent;
			::openfl::display::DisplayObjectContainer tmp4 = tmp3;
			bool tmp5 = tmp4->__renderDirty;
			bool tmp6 = tmp5;
			tmp2 = !(tmp6);
		}
		else{
			tmp2 = false;
		}
		if ((tmp2)){
			::openfl::display::DisplayObjectContainer tmp3 = this->parent;
			tmp3->__renderDirty = true;
			::openfl::display::DisplayObjectContainer tmp4 = this->parent;
			tmp4->__setParentRenderDirty();
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(DisplayObject_obj,__setParentRenderDirty,(void))

Void DisplayObject_obj::__setRenderDirty( ){
{
		bool tmp = this->__renderDirty;
		bool tmp1 = !(tmp);
		if ((tmp1)){
			this->__renderDirty = true;
			this->__setParentRenderDirty();
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(DisplayObject_obj,__setRenderDirty,(void))

Void DisplayObject_obj::__setStageReference( ::openfl::display::Stage stage){
{
		this->stage = stage;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(DisplayObject_obj,__setStageReference,(void))

Void DisplayObject_obj::__setTransformDirty( ){
{
		bool tmp = this->__transformDirty;
		bool tmp1 = !(tmp);
		if ((tmp1)){
			this->__transformDirty = true;
			this->__setParentRenderDirty();
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(DisplayObject_obj,__setTransformDirty,(void))

Void DisplayObject_obj::__stopAllMovieClips( ){
{
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(DisplayObject_obj,__stopAllMovieClips,(void))

Void DisplayObject_obj::__update( bool transformOnly,bool updateChildren,::openfl::display::Graphics maskGraphics){
{
		bool tmp = this->get_visible();
		bool tmp1 = tmp;
		bool tmp2;
		if ((tmp1)){
			Float tmp3 = this->__scaleX;
			Float tmp4 = tmp3;
			Float tmp5 = tmp4;
			tmp2 = (tmp5 != (int)0);
		}
		else{
			tmp2 = false;
		}
		bool tmp3 = tmp2;
		bool tmp4;
		if ((tmp3)){
			Float tmp5 = this->__scaleY;
			Float tmp6 = tmp5;
			Float tmp7 = tmp6;
			tmp4 = (tmp7 != (int)0);
		}
		else{
			tmp4 = false;
		}
		bool tmp5 = tmp4;
		bool tmp6;
		if ((tmp5)){
			bool tmp7 = this->__isMask;
			bool tmp8 = tmp7;
			bool tmp9 = tmp8;
			bool tmp10 = tmp9;
			bool tmp11 = tmp10;
			tmp6 = !(tmp11);
		}
		else{
			tmp6 = false;
		}
		bool tmp7;
		if ((tmp6)){
			::openfl::display::DisplayObjectContainer tmp8 = this->parent;
			::openfl::display::DisplayObjectContainer tmp9 = tmp8;
			bool tmp10 = (tmp9 == null());
			bool tmp11 = tmp10;
			bool tmp12 = tmp11;
			bool tmp13 = !(tmp12);
			bool tmp14 = tmp13;
			bool tmp15 = tmp14;
			if ((tmp15)){
				::openfl::display::DisplayObjectContainer tmp16 = this->parent;
				::openfl::display::DisplayObjectContainer tmp17 = tmp16;
				::openfl::display::DisplayObjectContainer tmp18 = tmp17;
				bool tmp19 = tmp18->__isMask;
				bool tmp20 = tmp19;
				bool tmp21 = tmp20;
				tmp7 = !(tmp21);
			}
			else{
				tmp7 = true;
			}
		}
		else{
			tmp7 = false;
		}
		this->__renderable = tmp7;
		this->__updateTransforms(null());
		this->__transformDirty = false;
		bool tmp8 = (maskGraphics != null());
		if ((tmp8)){
			::openfl::display::Graphics tmp9 = maskGraphics;
			this->__updateMask(tmp9);
		}
		bool tmp9 = transformOnly;
		bool tmp10 = !(tmp9);
		if ((tmp10)){
			::openfl::geom::ColorTransform tmp11 = this->__worldColorTransform;
			::openfl::geom::Transform tmp12 = this->get_transform();
			::openfl::geom::ColorTransform tmp13 = tmp12->get_colorTransform();
			bool tmp14 = tmp11->__equals(tmp13,null());
			bool tmp15 = !(tmp14);
			if ((tmp15)){
				::openfl::geom::Transform tmp16 = this->get_transform();
				::openfl::geom::ColorTransform tmp17 = tmp16->get_colorTransform();
				::openfl::geom::ColorTransform tmp18 = tmp17->__clone();
				this->__worldColorTransform = tmp18;
			}
			::openfl::display::DisplayObjectContainer tmp16 = this->parent;
			bool tmp17 = (tmp16 != null());
			::openfl::display::DisplayObject tmp18;
			if ((tmp17)){
				tmp18 = this->parent;
			}
			else{
				tmp18 = this->__renderParent;
			}
			::openfl::display::DisplayObject __parent = tmp18;
			bool tmp19 = (__parent != null());
			if ((tmp19)){
				Float tmp20 = this->get_alpha();
				Float tmp21 = __parent->__worldAlpha;
				Float tmp22 = (tmp20 * tmp21);
				this->__worldAlpha = tmp22;
				::openfl::geom::ColorTransform tmp23 = this->__worldColorTransform;
				::openfl::geom::ColorTransform tmp24 = __parent->__worldColorTransform;
				tmp23->__combine(tmp24);
				Dynamic tmp25 = this->__blendMode;
				bool tmp26 = (tmp25 == null());
				bool tmp27 = !(tmp26);
				bool tmp28;
				if ((tmp27)){
					Dynamic tmp29 = this->__blendMode;
					Dynamic tmp30 = tmp29;
					tmp28 = (tmp30 == ((Dynamic)((int)10)));
				}
				else{
					tmp28 = true;
				}
				if ((tmp28)){
					this->__worldBlendMode = __parent->__blendMode;
				}
				else{
					Dynamic tmp29 = this->__blendMode;
					this->__worldBlendMode = tmp29;
				}
			}
			else{
				Float tmp20 = this->get_alpha();
				this->__worldAlpha = tmp20;
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC3(DisplayObject_obj,__update,(void))

Void DisplayObject_obj::__updateCacheBitmap( ::openfl::_internal::renderer::RenderSession renderSession){
{
		bool tmp = this->__cacheBitmapRender;
		if ((tmp)){
			return null();
		}
		bool tmp1 = this->get_cacheAsBitmap();
		if ((tmp1)){
			::openfl::display::Bitmap tmp2 = this->__cacheBitmap;
			bool tmp3 = (tmp2 == null());
			bool tmp4 = !(tmp3);
			bool tmp5;
			if ((tmp4)){
				bool tmp6 = this->__renderDirty;
				bool tmp7 = tmp6;
				bool tmp8 = tmp7;
				if ((tmp8)){
					bool tmp9 = (this->__children != null());
					bool tmp10 = tmp9;
					bool tmp11 = tmp10;
					bool tmp12 = tmp11;
					bool tmp13;
					bool tmp14 = tmp12;
					bool tmp15 = tmp14;
					if ((tmp15)){
						int tmp16 = this->__children->length;
						int tmp17 = tmp16;
						int tmp18 = tmp17;
						int tmp19 = tmp18;
						int tmp20 = tmp19;
						bool tmp21 = (tmp20 > (int)0);
						bool tmp22 = tmp21;
						tmp13 = tmp22;
					}
					else{
						tmp13 = false;
					}
					bool tmp16 = tmp13;
					bool tmp17 = tmp16;
					bool tmp18 = !(tmp17);
					bool tmp19 = tmp18;
					bool tmp20 = tmp19;
					bool tmp21 = tmp20;
					bool tmp22 = tmp21;
					if ((tmp22)){
						::openfl::geom::ColorTransform tmp23 = this->__worldColorTransform;
						::openfl::geom::ColorTransform tmp24 = tmp23;
						::openfl::geom::ColorTransform tmp25 = tmp24;
						::openfl::geom::ColorTransform tmp26 = tmp25;
						bool tmp27 = tmp26->__isDefault();
						bool tmp28 = tmp27;
						bool tmp29 = tmp28;
						bool tmp30 = tmp29;
						bool tmp31 = tmp30;
						bool tmp32 = tmp31;
						bool tmp33 = tmp32;
						tmp5 = !(tmp33);
					}
					else{
						tmp5 = true;
					}
				}
				else{
					tmp5 = false;
				}
			}
			else{
				tmp5 = true;
			}
			if ((tmp5)){
				this->__getWorldTransform();
				this->__update(false,true,null());
				::lime::utils::ObjectPool_openfl_geom_Matrix tmp6 = ::openfl::geom::Matrix_obj::__pool;
				::openfl::geom::Matrix tmp7 = tmp6->get();
				::openfl::geom::Matrix matrix = tmp7;
				::lime::utils::ObjectPool_openfl_geom_Rectangle tmp8 = ::openfl::geom::Rectangle_obj::__pool;
				::openfl::geom::Rectangle tmp9 = tmp8->get();
				::openfl::geom::Rectangle rect = tmp9;
				matrix->identity();
				::openfl::geom::Rectangle tmp10 = rect;
				::openfl::geom::Matrix tmp11 = matrix;
				this->__getBounds(tmp10,tmp11);
				Dynamic tmp12 = this->opaqueBackground;
				bool tmp13 = (tmp12 != null());
				int tmp14;
				if ((tmp13)){
					int tmp15 = (int)-16777216;
					Dynamic tmp16 = this->opaqueBackground;
					tmp14 = (int(tmp15) | int(tmp16));
				}
				else{
					tmp14 = (int)0;
				}
				int color = tmp14;
				::openfl::display::Bitmap tmp15 = this->__cacheBitmap;
				bool tmp16 = (tmp15 == null());
				bool tmp17 = !(tmp16);
				bool tmp18 = tmp17;
				bool tmp19;
				if ((tmp18)){
					Float tmp20 = rect->width;
					::openfl::display::Bitmap tmp21 = this->__cacheBitmap;
					::openfl::display::Bitmap tmp22 = tmp21;
					::openfl::display::Bitmap tmp23 = tmp22;
					Float tmp24 = tmp23->get_width();
					Float tmp25 = tmp24;
					Float tmp26 = tmp25;
					tmp19 = (tmp20 != tmp26);
				}
				else{
					tmp19 = true;
				}
				bool tmp20 = !(tmp19);
				bool tmp21;
				if ((tmp20)){
					Float tmp22 = rect->height;
					::openfl::display::Bitmap tmp23 = this->__cacheBitmap;
					::openfl::display::Bitmap tmp24 = tmp23;
					Float tmp25 = tmp24->get_height();
					Float tmp26 = tmp25;
					tmp21 = (tmp22 != tmp26);
				}
				else{
					tmp21 = true;
				}
				if ((tmp21)){
					Float tmp22 = rect->width;
					int tmp23 = ::Math_obj::ceil(tmp22);
					Float tmp24 = rect->height;
					int tmp25 = ::Math_obj::ceil(tmp24);
					int tmp26 = color;
					::openfl::display::BitmapData tmp27 = ::openfl::display::BitmapData_obj::__new(tmp23,tmp25,true,tmp26);
					this->__cacheBitmapData = tmp27;
					::openfl::display::Bitmap tmp28 = this->__cacheBitmap;
					bool tmp29 = (tmp28 == null());
					if ((tmp29)){
						::openfl::display::Bitmap tmp30 = ::openfl::display::Bitmap_obj::__new(null(),null(),null());
						this->__cacheBitmap = tmp30;
					}
					::openfl::display::Bitmap tmp30 = this->__cacheBitmap;
					::openfl::display::BitmapData tmp31 = this->__cacheBitmapData;
					tmp30->set_bitmapData(tmp31);
				}
				else{
					::openfl::display::BitmapData tmp22 = this->__cacheBitmapData;
					::openfl::display::BitmapData tmp23 = this->__cacheBitmapData;
					::openfl::geom::Rectangle tmp24 = tmp23->rect;
					int tmp25 = color;
					tmp22->fillRect(tmp24,tmp25);
				}
				::openfl::display::Bitmap tmp22 = this->__cacheBitmap;
				tmp22->smoothing = renderSession->allowSmoothing;
				bool tmp23 = this->__renderable;
				::openfl::display::Bitmap tmp24 = this->__cacheBitmap;
				tmp24->__renderable = tmp23;
				::openfl::display::Bitmap tmp25 = this->__cacheBitmap;
				::openfl::geom::Matrix tmp26 = this->__worldTransform;
				tmp25->__worldTransform->copyFrom(tmp26);
				Float tmp27 = this->__worldAlpha;
				::openfl::display::Bitmap tmp28 = this->__cacheBitmap;
				tmp28->__worldAlpha = tmp27;
				Dynamic tmp29 = this->__worldBlendMode;
				::openfl::display::Bitmap tmp30 = this->__cacheBitmap;
				tmp30->__worldBlendMode = tmp29;
				::openfl::geom::Rectangle tmp31 = this->__scrollRect;
				::openfl::display::Bitmap tmp32 = this->__cacheBitmap;
				tmp32->__scrollRect = tmp31;
				::openfl::display::Bitmap tmp33 = this->__cacheBitmap;
				tmp33->set_filters(this->get_filters());
				Float tmp34 = rect->x;
				int tmp35 = ::Math_obj::round(tmp34);
				matrix->tx = tmp35;
				Float tmp36 = rect->y;
				int tmp37 = ::Math_obj::round(tmp36);
				matrix->ty = tmp37;
				::openfl::display::Bitmap tmp38 = this->__cacheBitmap;
				::openfl::geom::Matrix tmp39 = matrix;
				tmp38->__renderTransform->copyFrom(tmp39);
				::openfl::display::Bitmap tmp40 = this->__cacheBitmap;
				::openfl::geom::Matrix tmp41 = this->__renderTransform;
				tmp40->__renderTransform->concat(tmp41);
				hx::MultEq(matrix->tx,(int)-1);
				hx::MultEq(matrix->ty,(int)-1);
				this->__cacheBitmapRender = true;
				::openfl::display::BitmapData tmp42 = this->__cacheBitmapData;
				::openfl::geom::Matrix tmp43 = matrix;
				bool tmp44 = renderSession->allowSmoothing;
				tmp42->__draw(hx::ObjectPtr<OBJ_>(this),tmp43,null(),null(),null(),tmp44);
				this->__cacheBitmapRender = false;
				::openfl::geom::ColorTransform tmp45 = this->__worldColorTransform;
				bool tmp46 = tmp45->__isDefault();
				bool tmp47 = !(tmp46);
				if ((tmp47)){
					::openfl::display::BitmapData tmp48 = this->__cacheBitmapData;
					::openfl::display::BitmapData tmp49 = this->__cacheBitmapData;
					::openfl::geom::Rectangle tmp50 = tmp49->rect;
					::openfl::geom::ColorTransform tmp51 = this->__worldColorTransform;
					tmp48->colorTransform(tmp50,tmp51);
				}
				this->__update(false,true,null());
				::lime::utils::ObjectPool_openfl_geom_Matrix tmp48 = ::openfl::geom::Matrix_obj::__pool;
				::openfl::geom::Matrix tmp49 = matrix;
				tmp48->release(tmp49);
				::lime::utils::ObjectPool_openfl_geom_Rectangle tmp50 = ::openfl::geom::Rectangle_obj::__pool;
				::openfl::geom::Rectangle tmp51 = rect;
				tmp50->release(tmp51);
			}
		}
		else{
			::openfl::display::Bitmap tmp2 = this->__cacheBitmap;
			bool tmp3 = (tmp2 != null());
			if ((tmp3)){
				this->__cacheBitmap = null();
				this->__cacheBitmapData = null();
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(DisplayObject_obj,__updateCacheBitmap,(void))

Void DisplayObject_obj::__updateChildren( bool transformOnly){
{
		bool tmp = this->get_visible();
		bool tmp1 = tmp;
		bool tmp2;
		if ((tmp1)){
			Float tmp3 = this->__scaleX;
			Float tmp4 = tmp3;
			Float tmp5 = tmp4;
			tmp2 = (tmp5 != (int)0);
		}
		else{
			tmp2 = false;
		}
		bool tmp3 = tmp2;
		bool tmp4;
		if ((tmp3)){
			Float tmp5 = this->__scaleY;
			Float tmp6 = tmp5;
			Float tmp7 = tmp6;
			tmp4 = (tmp7 != (int)0);
		}
		else{
			tmp4 = false;
		}
		bool tmp5 = tmp4;
		bool tmp6;
		if ((tmp5)){
			bool tmp7 = this->__isMask;
			bool tmp8 = tmp7;
			bool tmp9 = tmp8;
			bool tmp10 = tmp9;
			bool tmp11 = tmp10;
			tmp6 = !(tmp11);
		}
		else{
			tmp6 = false;
		}
		bool tmp7;
		if ((tmp6)){
			::openfl::display::DisplayObjectContainer tmp8 = this->parent;
			::openfl::display::DisplayObjectContainer tmp9 = tmp8;
			bool tmp10 = (tmp9 == null());
			bool tmp11 = tmp10;
			bool tmp12 = tmp11;
			bool tmp13 = !(tmp12);
			bool tmp14 = tmp13;
			bool tmp15 = tmp14;
			if ((tmp15)){
				::openfl::display::DisplayObjectContainer tmp16 = this->parent;
				::openfl::display::DisplayObjectContainer tmp17 = tmp16;
				::openfl::display::DisplayObjectContainer tmp18 = tmp17;
				bool tmp19 = tmp18->__isMask;
				bool tmp20 = tmp19;
				bool tmp21 = tmp20;
				tmp7 = !(tmp21);
			}
			else{
				tmp7 = true;
			}
		}
		else{
			tmp7 = false;
		}
		this->__renderable = tmp7;
		Float tmp8 = this->get_alpha();
		this->__worldAlpha = tmp8;
		bool tmp9 = this->__transformDirty;
		if ((tmp9)){
			this->__transformDirty = false;
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(DisplayObject_obj,__updateChildren,(void))

Void DisplayObject_obj::__updateMask( ::openfl::display::Graphics maskGraphics){
{
		::openfl::display::Graphics tmp = this->__graphics;
		bool tmp1 = (tmp != null());
		if ((tmp1)){
			::openfl::geom::Matrix tmp2 = this->__worldTransform;
			maskGraphics->__commands->overrideMatrix(tmp2);
			::openfl::display::Graphics tmp3 = this->__graphics;
			::openfl::_internal::renderer::DrawCommandBuffer tmp4 = tmp3->__commands;
			maskGraphics->__commands->append(tmp4);
			maskGraphics->set___dirty(true);
			maskGraphics->__visible = true;
			bool tmp5 = (maskGraphics->__bounds == null());
			if ((tmp5)){
				::openfl::geom::Rectangle tmp6 = ::openfl::geom::Rectangle_obj::__new(null(),null(),null(),null());
				maskGraphics->__bounds = tmp6;
			}
			::openfl::display::Graphics tmp6 = this->__graphics;
			::openfl::geom::Rectangle tmp7 = maskGraphics->__bounds;
			::openfl::geom::Matrix tmp8 = ::openfl::geom::Matrix_obj::__identity;
			tmp6->__getBounds(tmp7,tmp8);
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(DisplayObject_obj,__updateMask,(void))

Void DisplayObject_obj::__updateTransforms( ::openfl::geom::Matrix overrideTransform){
{
		bool tmp = (overrideTransform != null());
		bool overrided = tmp;
		bool tmp1 = overrided;
		::openfl::geom::Matrix tmp2;
		if ((tmp1)){
			tmp2 = overrideTransform;
		}
		else{
			tmp2 = this->__transform;
		}
		::openfl::geom::Matrix local = tmp2;
		::openfl::geom::Matrix tmp3 = this->__worldTransform;
		bool tmp4 = (tmp3 == null());
		if ((tmp4)){
			::openfl::geom::Matrix tmp5 = ::openfl::geom::Matrix_obj::__new(null(),null(),null(),null(),null(),null());
			this->__worldTransform = tmp5;
		}
		::openfl::geom::Matrix tmp5 = this->__renderTransform;
		bool tmp6 = (tmp5 == null());
		if ((tmp6)){
			::openfl::geom::Matrix tmp7 = ::openfl::geom::Matrix_obj::__new(null(),null(),null(),null(),null(),null());
			this->__renderTransform = tmp7;
		}
		bool tmp7 = overrided;
		bool tmp8 = tmp7;
		bool tmp9 = !(tmp8);
		bool tmp10;
		if ((tmp9)){
			::openfl::display::DisplayObjectContainer tmp11 = this->parent;
			::openfl::display::DisplayObjectContainer tmp12 = tmp11;
			tmp10 = (tmp12 != null());
		}
		else{
			tmp10 = false;
		}
		if ((tmp10)){
			::openfl::display::DisplayObjectContainer tmp11 = this->parent;
			::openfl::geom::Matrix parentTransform = tmp11->__worldTransform;
			Float tmp12 = (local->a * parentTransform->a);
			Float tmp13 = (local->b * parentTransform->c);
			Float tmp14 = (tmp12 + tmp13);
			::openfl::geom::Matrix tmp15 = this->__worldTransform;
			tmp15->a = tmp14;
			Float tmp16 = (local->a * parentTransform->b);
			Float tmp17 = (local->b * parentTransform->d);
			Float tmp18 = (tmp16 + tmp17);
			::openfl::geom::Matrix tmp19 = this->__worldTransform;
			tmp19->b = tmp18;
			Float tmp20 = (local->c * parentTransform->a);
			Float tmp21 = (local->d * parentTransform->c);
			Float tmp22 = (tmp20 + tmp21);
			::openfl::geom::Matrix tmp23 = this->__worldTransform;
			tmp23->c = tmp22;
			Float tmp24 = (local->c * parentTransform->b);
			Float tmp25 = (local->d * parentTransform->d);
			Float tmp26 = (tmp24 + tmp25);
			::openfl::geom::Matrix tmp27 = this->__worldTransform;
			tmp27->d = tmp26;
			Float tmp28 = (local->tx * parentTransform->a);
			Float tmp29 = (local->ty * parentTransform->c);
			Float tmp30 = (tmp28 + tmp29);
			Float tmp31 = parentTransform->tx;
			Float tmp32 = (tmp30 + tmp31);
			::openfl::geom::Matrix tmp33 = this->__worldTransform;
			tmp33->tx = tmp32;
			Float tmp34 = (local->tx * parentTransform->b);
			Float tmp35 = (local->ty * parentTransform->d);
			Float tmp36 = (tmp34 + tmp35);
			Float tmp37 = parentTransform->ty;
			Float tmp38 = (tmp36 + tmp37);
			::openfl::geom::Matrix tmp39 = this->__worldTransform;
			tmp39->ty = tmp38;
			::openfl::display::DisplayObjectContainer tmp40 = this->parent;
			parentTransform = tmp40->__renderTransform;
			Float tmp41 = (local->a * parentTransform->a);
			Float tmp42 = (local->b * parentTransform->c);
			Float tmp43 = (tmp41 + tmp42);
			::openfl::geom::Matrix tmp44 = this->__renderTransform;
			tmp44->a = tmp43;
			Float tmp45 = (local->a * parentTransform->b);
			Float tmp46 = (local->b * parentTransform->d);
			Float tmp47 = (tmp45 + tmp46);
			::openfl::geom::Matrix tmp48 = this->__renderTransform;
			tmp48->b = tmp47;
			Float tmp49 = (local->c * parentTransform->a);
			Float tmp50 = (local->d * parentTransform->c);
			Float tmp51 = (tmp49 + tmp50);
			::openfl::geom::Matrix tmp52 = this->__renderTransform;
			tmp52->c = tmp51;
			Float tmp53 = (local->c * parentTransform->b);
			Float tmp54 = (local->d * parentTransform->d);
			Float tmp55 = (tmp53 + tmp54);
			::openfl::geom::Matrix tmp56 = this->__renderTransform;
			tmp56->d = tmp55;
			Float tmp57 = (local->tx * parentTransform->a);
			Float tmp58 = (local->ty * parentTransform->c);
			Float tmp59 = (tmp57 + tmp58);
			Float tmp60 = parentTransform->tx;
			Float tmp61 = (tmp59 + tmp60);
			::openfl::geom::Matrix tmp62 = this->__renderTransform;
			tmp62->tx = tmp61;
			Float tmp63 = (local->tx * parentTransform->b);
			Float tmp64 = (local->ty * parentTransform->d);
			Float tmp65 = (tmp63 + tmp64);
			Float tmp66 = parentTransform->ty;
			Float tmp67 = (tmp65 + tmp66);
			::openfl::geom::Matrix tmp68 = this->__renderTransform;
			tmp68->ty = tmp67;
		}
		else{
			::openfl::geom::Matrix tmp11 = this->__worldTransform;
			::openfl::geom::Matrix tmp12 = local;
			tmp11->copyFrom(tmp12);
			::openfl::geom::Matrix tmp13 = this->__renderTransform;
			::openfl::geom::Matrix tmp14 = local;
			tmp13->copyFrom(tmp14);
		}
		::openfl::geom::Rectangle tmp11 = this->__scrollRect;
		bool tmp12 = (tmp11 != null());
		if ((tmp12)){
			::openfl::geom::Matrix tmp13 = this->__renderTransform;
			::openfl::geom::Matrix _this = tmp13;
			::openfl::geom::Rectangle tmp14 = this->__scrollRect;
			Float tmp15 = tmp14->x;
			Float tmp16 = -(tmp15);
			Float px = tmp16;
			::openfl::geom::Rectangle tmp17 = this->__scrollRect;
			Float tmp18 = tmp17->y;
			Float tmp19 = -(tmp18);
			Float py = tmp19;
			Float tmp20 = (px * _this->a);
			Float tmp21 = (py * _this->c);
			Float tmp22 = (tmp20 + tmp21);
			Float tmp23 = _this->tx;
			Float tmp24 = (tmp22 + tmp23);
			_this->tx = tmp24;
			Float tmp25 = (px * _this->b);
			Float tmp26 = (py * _this->d);
			Float tmp27 = (tmp25 + tmp26);
			Float tmp28 = _this->ty;
			Float tmp29 = (tmp27 + tmp28);
			_this->ty = tmp29;
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(DisplayObject_obj,__updateTransforms,(void))

Float DisplayObject_obj::get_alpha( ){
	Float tmp = this->__alpha;
	return tmp;
}


HX_DEFINE_DYNAMIC_FUNC0(DisplayObject_obj,get_alpha,return )

Float DisplayObject_obj::set_alpha( Float value){
	bool tmp = (value > ((Float)1.0));
	if ((tmp)){
		value = ((Float)1.0);
	}
	Float tmp1 = value;
	Float tmp2 = this->__alpha;
	bool tmp3 = (tmp1 != tmp2);
	if ((tmp3)){
		bool tmp4 = this->__renderDirty;
		bool tmp5 = !(tmp4);
		if ((tmp5)){
			this->__renderDirty = true;
			this->__setParentRenderDirty();
		}
	}
	Float tmp4 = this->__alpha = value;
	return tmp4;
}


HX_DEFINE_DYNAMIC_FUNC1(DisplayObject_obj,set_alpha,return )

Dynamic DisplayObject_obj::get_blendMode( ){
	Dynamic tmp = this->__blendMode;
	return tmp;
}


HX_DEFINE_DYNAMIC_FUNC0(DisplayObject_obj,get_blendMode,return )

Dynamic DisplayObject_obj::set_blendMode( Dynamic value){
	bool tmp = (value == null());
	if ((tmp)){
		value = ((Dynamic)((int)10));
	}
	Dynamic tmp1 = this->__blendMode = value;
	return tmp1;
}


HX_DEFINE_DYNAMIC_FUNC1(DisplayObject_obj,set_blendMode,return )

bool DisplayObject_obj::get_cacheAsBitmap( ){
	bool tmp = (this->__filters == null());
	bool tmp1;
	if ((tmp)){
		tmp1 = this->__cacheAsBitmap;
	}
	else{
		tmp1 = true;
	}
	return tmp1;
}


HX_DEFINE_DYNAMIC_FUNC0(DisplayObject_obj,get_cacheAsBitmap,return )

bool DisplayObject_obj::set_cacheAsBitmap( bool value){
	{
		bool tmp = this->__renderDirty;
		bool tmp1 = !(tmp);
		if ((tmp1)){
			this->__renderDirty = true;
			this->__setParentRenderDirty();
		}
	}
	bool tmp = this->__cacheAsBitmap = value;
	return tmp;
}


HX_DEFINE_DYNAMIC_FUNC1(DisplayObject_obj,set_cacheAsBitmap,return )

::openfl::geom::Matrix DisplayObject_obj::get_cacheAsBitmapMatrix( ){
	::openfl::geom::Matrix tmp = this->__cacheAsBitmapMatrix;
	return tmp;
}


HX_DEFINE_DYNAMIC_FUNC0(DisplayObject_obj,get_cacheAsBitmapMatrix,return )

::openfl::geom::Matrix DisplayObject_obj::set_cacheAsBitmapMatrix( ::openfl::geom::Matrix value){
	{
		bool tmp = this->__renderDirty;
		bool tmp1 = !(tmp);
		if ((tmp1)){
			this->__renderDirty = true;
			this->__setParentRenderDirty();
		}
	}
	::openfl::geom::Matrix tmp = value->clone();
	::openfl::geom::Matrix tmp1 = this->__cacheAsBitmapMatrix = tmp;
	return tmp1;
}


HX_DEFINE_DYNAMIC_FUNC1(DisplayObject_obj,set_cacheAsBitmapMatrix,return )

Array< ::Dynamic > DisplayObject_obj::get_filters( ){
	bool tmp = (this->__filters == null());
	if ((tmp)){
		return Array_obj< ::Dynamic >::__new();
	}
	else{
		return this->__filters->copy();
	}
	return null();
}


HX_DEFINE_DYNAMIC_FUNC0(DisplayObject_obj,get_filters,return )

Array< ::Dynamic > DisplayObject_obj::set_filters( Array< ::Dynamic > value){
	bool tmp = (value != null());
	bool tmp1;
	if ((tmp)){
		tmp1 = (value->length > (int)0);
	}
	else{
		tmp1 = false;
	}
	if ((tmp1)){
		this->__filters = value;
	}
	else{
		this->__filters = null();
	}
	{
		bool tmp2 = this->__renderDirty;
		bool tmp3 = !(tmp2);
		if ((tmp3)){
			this->__renderDirty = true;
			this->__setParentRenderDirty();
		}
	}
	return value;
}


HX_DEFINE_DYNAMIC_FUNC1(DisplayObject_obj,set_filters,return )

Float DisplayObject_obj::get_height( ){
	::lime::utils::ObjectPool_openfl_geom_Rectangle tmp = ::openfl::geom::Rectangle_obj::__pool;
	::openfl::geom::Rectangle tmp1 = tmp->get();
	::openfl::geom::Rectangle rect = tmp1;
	::openfl::geom::Rectangle tmp2 = rect;
	this->__getLocalBounds(tmp2);
	Float height = rect->height;
	::lime::utils::ObjectPool_openfl_geom_Rectangle tmp3 = ::openfl::geom::Rectangle_obj::__pool;
	::openfl::geom::Rectangle tmp4 = rect;
	tmp3->release(tmp4);
	Float tmp5 = height;
	return tmp5;
}


HX_DEFINE_DYNAMIC_FUNC0(DisplayObject_obj,get_height,return )

Float DisplayObject_obj::set_height( Float value){
	::lime::utils::ObjectPool_openfl_geom_Rectangle tmp = ::openfl::geom::Rectangle_obj::__pool;
	::openfl::geom::Rectangle tmp1 = tmp->get();
	::openfl::geom::Rectangle rect = tmp1;
	::lime::utils::ObjectPool_openfl_geom_Matrix tmp2 = ::openfl::geom::Matrix_obj::__pool;
	::openfl::geom::Matrix tmp3 = tmp2->get();
	::openfl::geom::Matrix matrix = tmp3;
	matrix->identity();
	::openfl::geom::Rectangle tmp4 = rect;
	::openfl::geom::Matrix tmp5 = matrix;
	this->__getBounds(tmp4,tmp5);
	bool tmp6 = (value != rect->height);
	if ((tmp6)){
		Float tmp7 = (Float(value) / Float(rect->height));
		this->set_scaleY(tmp7);
	}
	else{
		this->set_scaleY((int)1);
	}
	::lime::utils::ObjectPool_openfl_geom_Rectangle tmp7 = ::openfl::geom::Rectangle_obj::__pool;
	::openfl::geom::Rectangle tmp8 = rect;
	tmp7->release(tmp8);
	::lime::utils::ObjectPool_openfl_geom_Matrix tmp9 = ::openfl::geom::Matrix_obj::__pool;
	::openfl::geom::Matrix tmp10 = matrix;
	tmp9->release(tmp10);
	Float tmp11 = value;
	return tmp11;
}


HX_DEFINE_DYNAMIC_FUNC1(DisplayObject_obj,set_height,return )

::openfl::display::LoaderInfo DisplayObject_obj::get_loaderInfo( ){
	::openfl::display::Stage tmp = this->stage;
	bool tmp1 = (tmp != null());
	if ((tmp1)){
		::openfl::display::MovieClip tmp2 = ::openfl::Lib_obj::current;
		::openfl::display::LoaderInfo tmp3 = tmp2->__loaderInfo;
		return tmp3;
	}
	return null();
}


HX_DEFINE_DYNAMIC_FUNC0(DisplayObject_obj,get_loaderInfo,return )

::openfl::display::DisplayObject DisplayObject_obj::get_mask( ){
	::openfl::display::DisplayObject tmp = this->__mask;
	return tmp;
}


HX_DEFINE_DYNAMIC_FUNC0(DisplayObject_obj,get_mask,return )

::openfl::display::DisplayObject DisplayObject_obj::set_mask( ::openfl::display::DisplayObject value){
	::openfl::display::DisplayObject tmp = value;
	::openfl::display::DisplayObject tmp1 = this->__mask;
	bool tmp2 = (tmp != tmp1);
	if ((tmp2)){
		this->__setTransformDirty();
		{
			bool tmp3 = this->__renderDirty;
			bool tmp4 = !(tmp3);
			if ((tmp4)){
				this->__renderDirty = true;
				this->__setParentRenderDirty();
			}
		}
	}
	::openfl::display::DisplayObject tmp3 = this->__mask;
	bool tmp4 = (tmp3 != null());
	if ((tmp4)){
		::openfl::display::DisplayObject tmp5 = this->__mask;
		tmp5->__isMask = false;
		::openfl::display::DisplayObject tmp6 = this->__mask;
		tmp6->__setTransformDirty();
		{
			::openfl::display::DisplayObject tmp7 = this->__mask;
			::openfl::display::DisplayObject _this = tmp7;
			bool tmp8 = _this->__renderDirty;
			bool tmp9 = !(tmp8);
			if ((tmp9)){
				_this->__renderDirty = true;
				_this->__setParentRenderDirty();
			}
		}
	}
	bool tmp5 = (value != null());
	if ((tmp5)){
		value->__isMask = true;
	}
	::openfl::display::DisplayObject tmp6 = this->__mask = value;
	return tmp6;
}


HX_DEFINE_DYNAMIC_FUNC1(DisplayObject_obj,set_mask,return )

Float DisplayObject_obj::get_mouseX( ){
	::openfl::display::Stage tmp = this->stage;
	bool tmp1 = (tmp != null());
	Float tmp2;
	if ((tmp1)){
		::openfl::display::Stage tmp3 = this->stage;
		tmp2 = tmp3->__mouseX;
	}
	else{
		::openfl::display::MovieClip tmp3 = ::openfl::Lib_obj::current;
		tmp2 = tmp3->stage->__mouseX;
	}
	Float mouseX = tmp2;
	::openfl::display::Stage tmp3 = this->stage;
	bool tmp4 = (tmp3 != null());
	Float tmp5;
	if ((tmp4)){
		::openfl::display::Stage tmp6 = this->stage;
		tmp5 = tmp6->__mouseY;
	}
	else{
		::openfl::display::MovieClip tmp6 = ::openfl::Lib_obj::current;
		tmp5 = tmp6->stage->__mouseY;
	}
	Float mouseY = tmp5;
	Float tmp6;
	{
		::openfl::geom::Matrix tmp7 = this->__getRenderTransform();
		::openfl::geom::Matrix _this = tmp7;
		Float tmp8 = (_this->a * _this->d);
		Float tmp9 = (_this->b * _this->c);
		Float tmp10 = (tmp8 - tmp9);
		Float norm = tmp10;
		bool tmp11 = (norm == (int)0);
		if ((tmp11)){
			Float tmp12 = _this->tx;
			tmp6 = -(tmp12);
		}
		else{
			Float tmp12 = (Float(((Float)1.0)) / Float(norm));
			Float tmp13 = _this->c;
			Float tmp14 = (_this->ty - mouseY);
			Float tmp15 = (tmp13 * tmp14);
			Float tmp16 = _this->d;
			Float tmp17 = (mouseX - _this->tx);
			Float tmp18 = (tmp16 * tmp17);
			Float tmp19 = (tmp15 + tmp18);
			tmp6 = (tmp12 * tmp19);
		}
	}
	return tmp6;
}


HX_DEFINE_DYNAMIC_FUNC0(DisplayObject_obj,get_mouseX,return )

Float DisplayObject_obj::get_mouseY( ){
	::openfl::display::Stage tmp = this->stage;
	bool tmp1 = (tmp != null());
	Float tmp2;
	if ((tmp1)){
		::openfl::display::Stage tmp3 = this->stage;
		tmp2 = tmp3->__mouseX;
	}
	else{
		::openfl::display::MovieClip tmp3 = ::openfl::Lib_obj::current;
		tmp2 = tmp3->stage->__mouseX;
	}
	Float mouseX = tmp2;
	::openfl::display::Stage tmp3 = this->stage;
	bool tmp4 = (tmp3 != null());
	Float tmp5;
	if ((tmp4)){
		::openfl::display::Stage tmp6 = this->stage;
		tmp5 = tmp6->__mouseY;
	}
	else{
		::openfl::display::MovieClip tmp6 = ::openfl::Lib_obj::current;
		tmp5 = tmp6->stage->__mouseY;
	}
	Float mouseY = tmp5;
	Float tmp6;
	{
		::openfl::geom::Matrix tmp7 = this->__getRenderTransform();
		::openfl::geom::Matrix _this = tmp7;
		Float tmp8 = (_this->a * _this->d);
		Float tmp9 = (_this->b * _this->c);
		Float tmp10 = (tmp8 - tmp9);
		Float norm = tmp10;
		bool tmp11 = (norm == (int)0);
		if ((tmp11)){
			Float tmp12 = _this->ty;
			tmp6 = -(tmp12);
		}
		else{
			Float tmp12 = (Float(((Float)1.0)) / Float(norm));
			Float tmp13 = _this->a;
			Float tmp14 = (mouseY - _this->ty);
			Float tmp15 = (tmp13 * tmp14);
			Float tmp16 = _this->b;
			Float tmp17 = (_this->tx - mouseX);
			Float tmp18 = (tmp16 * tmp17);
			Float tmp19 = (tmp15 + tmp18);
			tmp6 = (tmp12 * tmp19);
		}
	}
	return tmp6;
}


HX_DEFINE_DYNAMIC_FUNC0(DisplayObject_obj,get_mouseY,return )

::String DisplayObject_obj::get_name( ){
	::String tmp = this->__name;
	return tmp;
}


HX_DEFINE_DYNAMIC_FUNC0(DisplayObject_obj,get_name,return )

::String DisplayObject_obj::set_name( ::String value){
	::String tmp = this->__name = value;
	return tmp;
}


HX_DEFINE_DYNAMIC_FUNC1(DisplayObject_obj,set_name,return )

::openfl::display::DisplayObject DisplayObject_obj::get_root( ){
	::openfl::display::Stage tmp = this->stage;
	bool tmp1 = (tmp != null());
	if ((tmp1)){
		::openfl::display::MovieClip tmp2 = ::openfl::Lib_obj::current;
		return tmp2;
	}
	return null();
}


HX_DEFINE_DYNAMIC_FUNC0(DisplayObject_obj,get_root,return )

Float DisplayObject_obj::get_rotation( ){
	Float tmp = this->__rotation;
	return tmp;
}


HX_DEFINE_DYNAMIC_FUNC0(DisplayObject_obj,get_rotation,return )

Float DisplayObject_obj::set_rotation( Float value){
	Float tmp = value;
	Float tmp1 = this->__rotation;
	bool tmp2 = (tmp != tmp1);
	if ((tmp2)){
		this->__rotation = value;
		Float tmp3 = this->__rotation;
		Float tmp4 = ::Math_obj::PI;
		Float tmp5 = (Float(tmp4) / Float((int)180));
		Float tmp6 = (tmp3 * tmp5);
		Float radians = tmp6;
		Float tmp7 = radians;
		Float tmp8 = ::Math_obj::sin(tmp7);
		this->__rotationSine = tmp8;
		Float tmp9 = radians;
		Float tmp10 = ::Math_obj::cos(tmp9);
		this->__rotationCosine = tmp10;
		Float tmp11 = this->__rotationCosine;
		Float tmp12 = this->__scaleX;
		Float tmp13 = (tmp11 * tmp12);
		::openfl::geom::Matrix tmp14 = this->__transform;
		tmp14->a = tmp13;
		Float tmp15 = this->__rotationSine;
		Float tmp16 = this->__scaleX;
		Float tmp17 = (tmp15 * tmp16);
		::openfl::geom::Matrix tmp18 = this->__transform;
		tmp18->b = tmp17;
		Float tmp19 = this->__rotationSine;
		Float tmp20 = -(tmp19);
		Float tmp21 = this->__scaleY;
		Float tmp22 = (tmp20 * tmp21);
		::openfl::geom::Matrix tmp23 = this->__transform;
		tmp23->c = tmp22;
		Float tmp24 = this->__rotationCosine;
		Float tmp25 = this->__scaleY;
		Float tmp26 = (tmp24 * tmp25);
		::openfl::geom::Matrix tmp27 = this->__transform;
		tmp27->d = tmp26;
		this->__setTransformDirty();
	}
	Float tmp3 = value;
	return tmp3;
}


HX_DEFINE_DYNAMIC_FUNC1(DisplayObject_obj,set_rotation,return )

Float DisplayObject_obj::get_scaleX( ){
	Float tmp = this->__scaleX;
	return tmp;
}


HX_DEFINE_DYNAMIC_FUNC0(DisplayObject_obj,get_scaleX,return )

Float DisplayObject_obj::set_scaleX( Float value){
	Float tmp = value;
	Float tmp1 = this->__scaleX;
	bool tmp2 = (tmp != tmp1);
	if ((tmp2)){
		this->__scaleX = value;
		::openfl::geom::Matrix tmp3 = this->__transform;
		Float tmp4 = tmp3->b;
		bool tmp5 = (tmp4 == (int)0);
		if ((tmp5)){
			Float tmp6 = value;
			::openfl::geom::Matrix tmp7 = this->__transform;
			Float tmp8 = tmp7->a;
			bool tmp9 = (tmp6 != tmp8);
			if ((tmp9)){
				this->__setTransformDirty();
			}
			::openfl::geom::Matrix tmp10 = this->__transform;
			tmp10->a = value;
		}
		else{
			Float tmp6 = this->__rotationCosine;
			Float tmp7 = value;
			Float tmp8 = (tmp6 * tmp7);
			Float a = tmp8;
			Float tmp9 = this->__rotationSine;
			Float tmp10 = value;
			Float tmp11 = (tmp9 * tmp10);
			Float b = tmp11;
			::openfl::geom::Matrix tmp12 = this->__transform;
			Float tmp13 = tmp12->a;
			Float tmp14 = a;
			bool tmp15 = (tmp13 != tmp14);
			bool tmp16 = !(tmp15);
			bool tmp17;
			if ((tmp16)){
				::openfl::geom::Matrix tmp18 = this->__transform;
				::openfl::geom::Matrix tmp19 = tmp18;
				Float tmp20 = tmp19->b;
				Float tmp21 = b;
				tmp17 = (tmp20 != tmp21);
			}
			else{
				tmp17 = true;
			}
			if ((tmp17)){
				this->__setTransformDirty();
			}
			::openfl::geom::Matrix tmp18 = this->__transform;
			tmp18->a = a;
			::openfl::geom::Matrix tmp19 = this->__transform;
			tmp19->b = b;
		}
	}
	Float tmp3 = value;
	return tmp3;
}


HX_DEFINE_DYNAMIC_FUNC1(DisplayObject_obj,set_scaleX,return )

Float DisplayObject_obj::get_scaleY( ){
	Float tmp = this->__scaleY;
	return tmp;
}


HX_DEFINE_DYNAMIC_FUNC0(DisplayObject_obj,get_scaleY,return )

Float DisplayObject_obj::set_scaleY( Float value){
	Float tmp = value;
	Float tmp1 = this->__scaleY;
	bool tmp2 = (tmp != tmp1);
	if ((tmp2)){
		this->__scaleY = value;
		::openfl::geom::Matrix tmp3 = this->__transform;
		Float tmp4 = tmp3->c;
		bool tmp5 = (tmp4 == (int)0);
		if ((tmp5)){
			Float tmp6 = value;
			::openfl::geom::Matrix tmp7 = this->__transform;
			Float tmp8 = tmp7->d;
			bool tmp9 = (tmp6 != tmp8);
			if ((tmp9)){
				this->__setTransformDirty();
			}
			::openfl::geom::Matrix tmp10 = this->__transform;
			tmp10->d = value;
		}
		else{
			Float tmp6 = this->__rotationSine;
			Float tmp7 = -(tmp6);
			Float tmp8 = value;
			Float tmp9 = (tmp7 * tmp8);
			Float c = tmp9;
			Float tmp10 = this->__rotationCosine;
			Float tmp11 = value;
			Float tmp12 = (tmp10 * tmp11);
			Float d = tmp12;
			::openfl::geom::Matrix tmp13 = this->__transform;
			Float tmp14 = tmp13->d;
			Float tmp15 = d;
			bool tmp16 = (tmp14 != tmp15);
			bool tmp17 = !(tmp16);
			bool tmp18;
			if ((tmp17)){
				::openfl::geom::Matrix tmp19 = this->__transform;
				::openfl::geom::Matrix tmp20 = tmp19;
				Float tmp21 = tmp20->c;
				Float tmp22 = c;
				tmp18 = (tmp21 != tmp22);
			}
			else{
				tmp18 = true;
			}
			if ((tmp18)){
				this->__setTransformDirty();
			}
			::openfl::geom::Matrix tmp19 = this->__transform;
			tmp19->c = c;
			::openfl::geom::Matrix tmp20 = this->__transform;
			tmp20->d = d;
		}
	}
	Float tmp3 = value;
	return tmp3;
}


HX_DEFINE_DYNAMIC_FUNC1(DisplayObject_obj,set_scaleY,return )

::openfl::geom::Rectangle DisplayObject_obj::get_scrollRect( ){
	::openfl::geom::Rectangle tmp = this->__scrollRect;
	bool tmp1 = (tmp == null());
	if ((tmp1)){
		return null();
	}
	::openfl::geom::Rectangle tmp2 = this->__scrollRect;
	::openfl::geom::Rectangle tmp3 = tmp2->clone();
	return tmp3;
}


HX_DEFINE_DYNAMIC_FUNC0(DisplayObject_obj,get_scrollRect,return )

::openfl::geom::Rectangle DisplayObject_obj::set_scrollRect( ::openfl::geom::Rectangle value){
	::openfl::geom::Rectangle tmp = value;
	::openfl::geom::Rectangle tmp1 = this->__scrollRect;
	bool tmp2 = (tmp != tmp1);
	if ((tmp2)){
		this->__setTransformDirty();
	}
	::openfl::geom::Rectangle tmp3 = this->__scrollRect = value;
	return tmp3;
}


HX_DEFINE_DYNAMIC_FUNC1(DisplayObject_obj,set_scrollRect,return )

::openfl::geom::Transform DisplayObject_obj::get_transform( ){
	::openfl::geom::Transform tmp = this->__objectTransform;
	bool tmp1 = (tmp == null());
	if ((tmp1)){
		::openfl::geom::Transform tmp2 = ::openfl::geom::Transform_obj::__new(hx::ObjectPtr<OBJ_>(this));
		this->__objectTransform = tmp2;
	}
	::openfl::geom::Transform tmp2 = this->__objectTransform;
	return tmp2;
}


HX_DEFINE_DYNAMIC_FUNC0(DisplayObject_obj,get_transform,return )

::openfl::geom::Transform DisplayObject_obj::set_transform( ::openfl::geom::Transform value){
	bool tmp = (value == null());
	if ((tmp)){
		::openfl::errors::TypeError tmp1 = ::openfl::errors::TypeError_obj::__new(HX_HCSTRING("Parameter transform must be non-null.","\x56","\x12","\xfe","\x6e"));
		HX_STACK_DO_THROW(tmp1);
	}
	::openfl::geom::Transform tmp1 = this->__objectTransform;
	bool tmp2 = (tmp1 == null());
	if ((tmp2)){
		::openfl::geom::Transform tmp3 = ::openfl::geom::Transform_obj::__new(hx::ObjectPtr<OBJ_>(this));
		this->__objectTransform = tmp3;
	}
	this->__setTransformDirty();
	::openfl::geom::Transform tmp3 = this->__objectTransform;
	::openfl::geom::Matrix tmp4 = value->get_matrix();
	tmp3->set_matrix(tmp4);
	::openfl::geom::Transform tmp5 = this->__objectTransform;
	::openfl::geom::ColorTransform tmp6 = value->get_colorTransform();
	::openfl::geom::ColorTransform tmp7 = tmp6->__clone();
	tmp5->set_colorTransform(tmp7);
	::openfl::geom::Transform tmp8 = this->__objectTransform;
	return tmp8;
}


HX_DEFINE_DYNAMIC_FUNC1(DisplayObject_obj,set_transform,return )

bool DisplayObject_obj::get_visible( ){
	bool tmp = this->__visible;
	return tmp;
}


HX_DEFINE_DYNAMIC_FUNC0(DisplayObject_obj,get_visible,return )

bool DisplayObject_obj::set_visible( bool value){
	bool tmp = value;
	bool tmp1 = this->__visible;
	bool tmp2 = (tmp != tmp1);
	if ((tmp2)){
		bool tmp3 = this->__renderDirty;
		bool tmp4 = !(tmp3);
		if ((tmp4)){
			this->__renderDirty = true;
			this->__setParentRenderDirty();
		}
	}
	bool tmp3 = this->__visible = value;
	return tmp3;
}


HX_DEFINE_DYNAMIC_FUNC1(DisplayObject_obj,set_visible,return )

Float DisplayObject_obj::get_width( ){
	::lime::utils::ObjectPool_openfl_geom_Rectangle tmp = ::openfl::geom::Rectangle_obj::__pool;
	::openfl::geom::Rectangle tmp1 = tmp->get();
	::openfl::geom::Rectangle rect = tmp1;
	::openfl::geom::Rectangle tmp2 = rect;
	this->__getLocalBounds(tmp2);
	Float width = rect->width;
	::lime::utils::ObjectPool_openfl_geom_Rectangle tmp3 = ::openfl::geom::Rectangle_obj::__pool;
	::openfl::geom::Rectangle tmp4 = rect;
	tmp3->release(tmp4);
	Float tmp5 = width;
	return tmp5;
}


HX_DEFINE_DYNAMIC_FUNC0(DisplayObject_obj,get_width,return )

Float DisplayObject_obj::set_width( Float value){
	::lime::utils::ObjectPool_openfl_geom_Rectangle tmp = ::openfl::geom::Rectangle_obj::__pool;
	::openfl::geom::Rectangle tmp1 = tmp->get();
	::openfl::geom::Rectangle rect = tmp1;
	::lime::utils::ObjectPool_openfl_geom_Matrix tmp2 = ::openfl::geom::Matrix_obj::__pool;
	::openfl::geom::Matrix tmp3 = tmp2->get();
	::openfl::geom::Matrix matrix = tmp3;
	matrix->identity();
	::openfl::geom::Rectangle tmp4 = rect;
	::openfl::geom::Matrix tmp5 = matrix;
	this->__getBounds(tmp4,tmp5);
	bool tmp6 = (value != rect->width);
	if ((tmp6)){
		Float tmp7 = (Float(value) / Float(rect->width));
		this->set_scaleX(tmp7);
	}
	else{
		this->set_scaleX((int)1);
	}
	::lime::utils::ObjectPool_openfl_geom_Rectangle tmp7 = ::openfl::geom::Rectangle_obj::__pool;
	::openfl::geom::Rectangle tmp8 = rect;
	tmp7->release(tmp8);
	::lime::utils::ObjectPool_openfl_geom_Matrix tmp9 = ::openfl::geom::Matrix_obj::__pool;
	::openfl::geom::Matrix tmp10 = matrix;
	tmp9->release(tmp10);
	Float tmp11 = value;
	return tmp11;
}


HX_DEFINE_DYNAMIC_FUNC1(DisplayObject_obj,set_width,return )

Float DisplayObject_obj::get_x( ){
	::openfl::geom::Matrix tmp = this->__transform;
	Float tmp1 = tmp->tx;
	return tmp1;
}


HX_DEFINE_DYNAMIC_FUNC0(DisplayObject_obj,get_x,return )

Float DisplayObject_obj::set_x( Float value){
	Float tmp = value;
	::openfl::geom::Matrix tmp1 = this->__transform;
	Float tmp2 = tmp1->tx;
	bool tmp3 = (tmp != tmp2);
	if ((tmp3)){
		this->__setTransformDirty();
	}
	::openfl::geom::Matrix tmp4 = this->__transform;
	Float tmp5 = tmp4->tx = value;
	return tmp5;
}


HX_DEFINE_DYNAMIC_FUNC1(DisplayObject_obj,set_x,return )

Float DisplayObject_obj::get_y( ){
	::openfl::geom::Matrix tmp = this->__transform;
	Float tmp1 = tmp->ty;
	return tmp1;
}


HX_DEFINE_DYNAMIC_FUNC0(DisplayObject_obj,get_y,return )

Float DisplayObject_obj::set_y( Float value){
	Float tmp = value;
	::openfl::geom::Matrix tmp1 = this->__transform;
	Float tmp2 = tmp1->ty;
	bool tmp3 = (tmp != tmp2);
	if ((tmp3)){
		this->__setTransformDirty();
	}
	::openfl::geom::Matrix tmp4 = this->__transform;
	Float tmp5 = tmp4->ty = value;
	return tmp5;
}


HX_DEFINE_DYNAMIC_FUNC1(DisplayObject_obj,set_y,return )

::haxe::ds::StringMap DisplayObject_obj::__broadcastEvents;

int DisplayObject_obj::__instanceCount;


DisplayObject_obj::DisplayObject_obj()
{
}

void DisplayObject_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(DisplayObject);
	HX_MARK_MEMBER_NAME(opaqueBackground,"opaqueBackground");
	HX_MARK_MEMBER_NAME(parent,"parent");
	HX_MARK_MEMBER_NAME(scale9Grid,"scale9Grid");
	HX_MARK_MEMBER_NAME(stage,"stage");
	HX_MARK_MEMBER_NAME(__alpha,"__alpha");
	HX_MARK_MEMBER_NAME(__blendMode,"__blendMode");
	HX_MARK_MEMBER_NAME(__cacheAsBitmap,"__cacheAsBitmap");
	HX_MARK_MEMBER_NAME(__cacheAsBitmapMatrix,"__cacheAsBitmapMatrix");
	HX_MARK_MEMBER_NAME(__cacheBitmap,"__cacheBitmap");
	HX_MARK_MEMBER_NAME(__cacheBitmapData,"__cacheBitmapData");
	HX_MARK_MEMBER_NAME(__cacheBitmapRender,"__cacheBitmapRender");
	HX_MARK_MEMBER_NAME(__cairo,"__cairo");
	HX_MARK_MEMBER_NAME(__children,"__children");
	HX_MARK_MEMBER_NAME(__filters,"__filters");
	HX_MARK_MEMBER_NAME(__graphics,"__graphics");
	HX_MARK_MEMBER_NAME(__interactive,"__interactive");
	HX_MARK_MEMBER_NAME(__isMask,"__isMask");
	HX_MARK_MEMBER_NAME(__loaderInfo,"__loaderInfo");
	HX_MARK_MEMBER_NAME(__mask,"__mask");
	HX_MARK_MEMBER_NAME(__name,"__name");
	HX_MARK_MEMBER_NAME(__objectTransform,"__objectTransform");
	HX_MARK_MEMBER_NAME(__renderable,"__renderable");
	HX_MARK_MEMBER_NAME(__renderDirty,"__renderDirty");
	HX_MARK_MEMBER_NAME(__renderParent,"__renderParent");
	HX_MARK_MEMBER_NAME(__renderTransform,"__renderTransform");
	HX_MARK_MEMBER_NAME(__renderTransformCache,"__renderTransformCache");
	HX_MARK_MEMBER_NAME(__renderTransformChanged,"__renderTransformChanged");
	HX_MARK_MEMBER_NAME(__rotation,"__rotation");
	HX_MARK_MEMBER_NAME(__rotationCosine,"__rotationCosine");
	HX_MARK_MEMBER_NAME(__rotationSine,"__rotationSine");
	HX_MARK_MEMBER_NAME(__scaleX,"__scaleX");
	HX_MARK_MEMBER_NAME(__scaleY,"__scaleY");
	HX_MARK_MEMBER_NAME(__scrollRect,"__scrollRect");
	HX_MARK_MEMBER_NAME(__transform,"__transform");
	HX_MARK_MEMBER_NAME(__transformDirty,"__transformDirty");
	HX_MARK_MEMBER_NAME(__visible,"__visible");
	HX_MARK_MEMBER_NAME(__worldAlpha,"__worldAlpha");
	HX_MARK_MEMBER_NAME(__worldAlphaChanged,"__worldAlphaChanged");
	HX_MARK_MEMBER_NAME(__worldBlendMode,"__worldBlendMode");
	HX_MARK_MEMBER_NAME(__worldClip,"__worldClip");
	HX_MARK_MEMBER_NAME(__worldClipChanged,"__worldClipChanged");
	HX_MARK_MEMBER_NAME(__worldColorTransform,"__worldColorTransform");
	HX_MARK_MEMBER_NAME(__worldTransform,"__worldTransform");
	HX_MARK_MEMBER_NAME(__worldVisible,"__worldVisible");
	HX_MARK_MEMBER_NAME(__worldVisibleChanged,"__worldVisibleChanged");
	HX_MARK_MEMBER_NAME(__worldZ,"__worldZ");
	::openfl::events::EventDispatcher_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void DisplayObject_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(opaqueBackground,"opaqueBackground");
	HX_VISIT_MEMBER_NAME(parent,"parent");
	HX_VISIT_MEMBER_NAME(scale9Grid,"scale9Grid");
	HX_VISIT_MEMBER_NAME(stage,"stage");
	HX_VISIT_MEMBER_NAME(__alpha,"__alpha");
	HX_VISIT_MEMBER_NAME(__blendMode,"__blendMode");
	HX_VISIT_MEMBER_NAME(__cacheAsBitmap,"__cacheAsBitmap");
	HX_VISIT_MEMBER_NAME(__cacheAsBitmapMatrix,"__cacheAsBitmapMatrix");
	HX_VISIT_MEMBER_NAME(__cacheBitmap,"__cacheBitmap");
	HX_VISIT_MEMBER_NAME(__cacheBitmapData,"__cacheBitmapData");
	HX_VISIT_MEMBER_NAME(__cacheBitmapRender,"__cacheBitmapRender");
	HX_VISIT_MEMBER_NAME(__cairo,"__cairo");
	HX_VISIT_MEMBER_NAME(__children,"__children");
	HX_VISIT_MEMBER_NAME(__filters,"__filters");
	HX_VISIT_MEMBER_NAME(__graphics,"__graphics");
	HX_VISIT_MEMBER_NAME(__interactive,"__interactive");
	HX_VISIT_MEMBER_NAME(__isMask,"__isMask");
	HX_VISIT_MEMBER_NAME(__loaderInfo,"__loaderInfo");
	HX_VISIT_MEMBER_NAME(__mask,"__mask");
	HX_VISIT_MEMBER_NAME(__name,"__name");
	HX_VISIT_MEMBER_NAME(__objectTransform,"__objectTransform");
	HX_VISIT_MEMBER_NAME(__renderable,"__renderable");
	HX_VISIT_MEMBER_NAME(__renderDirty,"__renderDirty");
	HX_VISIT_MEMBER_NAME(__renderParent,"__renderParent");
	HX_VISIT_MEMBER_NAME(__renderTransform,"__renderTransform");
	HX_VISIT_MEMBER_NAME(__renderTransformCache,"__renderTransformCache");
	HX_VISIT_MEMBER_NAME(__renderTransformChanged,"__renderTransformChanged");
	HX_VISIT_MEMBER_NAME(__rotation,"__rotation");
	HX_VISIT_MEMBER_NAME(__rotationCosine,"__rotationCosine");
	HX_VISIT_MEMBER_NAME(__rotationSine,"__rotationSine");
	HX_VISIT_MEMBER_NAME(__scaleX,"__scaleX");
	HX_VISIT_MEMBER_NAME(__scaleY,"__scaleY");
	HX_VISIT_MEMBER_NAME(__scrollRect,"__scrollRect");
	HX_VISIT_MEMBER_NAME(__transform,"__transform");
	HX_VISIT_MEMBER_NAME(__transformDirty,"__transformDirty");
	HX_VISIT_MEMBER_NAME(__visible,"__visible");
	HX_VISIT_MEMBER_NAME(__worldAlpha,"__worldAlpha");
	HX_VISIT_MEMBER_NAME(__worldAlphaChanged,"__worldAlphaChanged");
	HX_VISIT_MEMBER_NAME(__worldBlendMode,"__worldBlendMode");
	HX_VISIT_MEMBER_NAME(__worldClip,"__worldClip");
	HX_VISIT_MEMBER_NAME(__worldClipChanged,"__worldClipChanged");
	HX_VISIT_MEMBER_NAME(__worldColorTransform,"__worldColorTransform");
	HX_VISIT_MEMBER_NAME(__worldTransform,"__worldTransform");
	HX_VISIT_MEMBER_NAME(__worldVisible,"__worldVisible");
	HX_VISIT_MEMBER_NAME(__worldVisibleChanged,"__worldVisibleChanged");
	HX_VISIT_MEMBER_NAME(__worldZ,"__worldZ");
	::openfl::events::EventDispatcher_obj::__Visit(HX_VISIT_ARG);
}

Dynamic DisplayObject_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 1:
		if (HX_FIELD_EQ(inName,"x") ) { if (inCallProp == hx::paccAlways) return get_x(); }
		if (HX_FIELD_EQ(inName,"y") ) { if (inCallProp == hx::paccAlways) return get_y(); }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"mask") ) { if (inCallProp == hx::paccAlways) return get_mask(); }
		if (HX_FIELD_EQ(inName,"name") ) { if (inCallProp == hx::paccAlways) return get_name(); }
		if (HX_FIELD_EQ(inName,"root") ) { if (inCallProp == hx::paccAlways) return get_root(); }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"alpha") ) { if (inCallProp == hx::paccAlways) return get_alpha(); }
		if (HX_FIELD_EQ(inName,"stage") ) { return stage; }
		if (HX_FIELD_EQ(inName,"width") ) { if (inCallProp == hx::paccAlways) return get_width(); }
		if (HX_FIELD_EQ(inName,"get_x") ) { return get_x_dyn(); }
		if (HX_FIELD_EQ(inName,"set_x") ) { return set_x_dyn(); }
		if (HX_FIELD_EQ(inName,"get_y") ) { return get_y_dyn(); }
		if (HX_FIELD_EQ(inName,"set_y") ) { return set_y_dyn(); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"height") ) { if (inCallProp == hx::paccAlways) return get_height(); }
		if (HX_FIELD_EQ(inName,"mouseX") ) { if (inCallProp == hx::paccAlways) return get_mouseX(); }
		if (HX_FIELD_EQ(inName,"mouseY") ) { if (inCallProp == hx::paccAlways) return get_mouseY(); }
		if (HX_FIELD_EQ(inName,"parent") ) { return parent; }
		if (HX_FIELD_EQ(inName,"scaleX") ) { if (inCallProp == hx::paccAlways) return get_scaleX(); }
		if (HX_FIELD_EQ(inName,"scaleY") ) { if (inCallProp == hx::paccAlways) return get_scaleY(); }
		if (HX_FIELD_EQ(inName,"__mask") ) { return __mask; }
		if (HX_FIELD_EQ(inName,"__name") ) { return __name; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"filters") ) { if (inCallProp == hx::paccAlways) return get_filters(); }
		if (HX_FIELD_EQ(inName,"visible") ) { if (inCallProp == hx::paccAlways) return get_visible(); }
		if (HX_FIELD_EQ(inName,"__alpha") ) { return __alpha; }
		if (HX_FIELD_EQ(inName,"__cairo") ) { return __cairo; }
		if (HX_FIELD_EQ(inName,"getRect") ) { return getRect_dyn(); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"rotation") ) { if (inCallProp == hx::paccAlways) return get_rotation(); }
		if (HX_FIELD_EQ(inName,"__isMask") ) { return __isMask; }
		if (HX_FIELD_EQ(inName,"__scaleX") ) { return __scaleX; }
		if (HX_FIELD_EQ(inName,"__scaleY") ) { return __scaleY; }
		if (HX_FIELD_EQ(inName,"__worldZ") ) { return __worldZ; }
		if (HX_FIELD_EQ(inName,"__update") ) { return __update_dyn(); }
		if (HX_FIELD_EQ(inName,"get_mask") ) { return get_mask_dyn(); }
		if (HX_FIELD_EQ(inName,"set_mask") ) { return set_mask_dyn(); }
		if (HX_FIELD_EQ(inName,"get_name") ) { return get_name_dyn(); }
		if (HX_FIELD_EQ(inName,"set_name") ) { return set_name_dyn(); }
		if (HX_FIELD_EQ(inName,"get_root") ) { return get_root_dyn(); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"blendMode") ) { if (inCallProp == hx::paccAlways) return get_blendMode(); }
		if (HX_FIELD_EQ(inName,"transform") ) { if (inCallProp == hx::paccAlways) return get_transform(); }
		if (HX_FIELD_EQ(inName,"__filters") ) { return __filters; }
		if (HX_FIELD_EQ(inName,"__visible") ) { return __visible; }
		if (HX_FIELD_EQ(inName,"getBounds") ) { return getBounds_dyn(); }
		if (HX_FIELD_EQ(inName,"__cleanup") ) { return __cleanup_dyn(); }
		if (HX_FIELD_EQ(inName,"__hitTest") ) { return __hitTest_dyn(); }
		if (HX_FIELD_EQ(inName,"get_alpha") ) { return get_alpha_dyn(); }
		if (HX_FIELD_EQ(inName,"set_alpha") ) { return set_alpha_dyn(); }
		if (HX_FIELD_EQ(inName,"get_width") ) { return get_width_dyn(); }
		if (HX_FIELD_EQ(inName,"set_width") ) { return set_width_dyn(); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"loaderInfo") ) { if (inCallProp == hx::paccAlways) return get_loaderInfo(); }
		if (HX_FIELD_EQ(inName,"scale9Grid") ) { return scale9Grid; }
		if (HX_FIELD_EQ(inName,"scrollRect") ) { if (inCallProp == hx::paccAlways) return get_scrollRect(); }
		if (HX_FIELD_EQ(inName,"__children") ) { return __children; }
		if (HX_FIELD_EQ(inName,"__graphics") ) { return __graphics; }
		if (HX_FIELD_EQ(inName,"__rotation") ) { return __rotation; }
		if (HX_FIELD_EQ(inName,"__dispatch") ) { return __dispatch_dyn(); }
		if (HX_FIELD_EQ(inName,"__renderGL") ) { return __renderGL_dyn(); }
		if (HX_FIELD_EQ(inName,"get_height") ) { return get_height_dyn(); }
		if (HX_FIELD_EQ(inName,"set_height") ) { return set_height_dyn(); }
		if (HX_FIELD_EQ(inName,"get_mouseX") ) { return get_mouseX_dyn(); }
		if (HX_FIELD_EQ(inName,"get_mouseY") ) { return get_mouseY_dyn(); }
		if (HX_FIELD_EQ(inName,"get_scaleX") ) { return get_scaleX_dyn(); }
		if (HX_FIELD_EQ(inName,"set_scaleX") ) { return set_scaleX_dyn(); }
		if (HX_FIELD_EQ(inName,"get_scaleY") ) { return get_scaleY_dyn(); }
		if (HX_FIELD_EQ(inName,"set_scaleY") ) { return set_scaleY_dyn(); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"__blendMode") ) { return __blendMode; }
		if (HX_FIELD_EQ(inName,"__transform") ) { return __transform; }
		if (HX_FIELD_EQ(inName,"__worldClip") ) { return __worldClip; }
		if (HX_FIELD_EQ(inName,"__getBounds") ) { return __getBounds_dyn(); }
		if (HX_FIELD_EQ(inName,"__getCursor") ) { return __getCursor_dyn(); }
		if (HX_FIELD_EQ(inName,"__renderDOM") ) { return __renderDOM_dyn(); }
		if (HX_FIELD_EQ(inName,"get_filters") ) { return get_filters_dyn(); }
		if (HX_FIELD_EQ(inName,"set_filters") ) { return set_filters_dyn(); }
		if (HX_FIELD_EQ(inName,"get_visible") ) { return get_visible_dyn(); }
		if (HX_FIELD_EQ(inName,"set_visible") ) { return set_visible_dyn(); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"__loaderInfo") ) { return __loaderInfo; }
		if (HX_FIELD_EQ(inName,"__renderable") ) { return __renderable; }
		if (HX_FIELD_EQ(inName,"__scrollRect") ) { return __scrollRect; }
		if (HX_FIELD_EQ(inName,"__worldAlpha") ) { return __worldAlpha; }
		if (HX_FIELD_EQ(inName,"hitTestPoint") ) { return hitTestPoint_dyn(); }
		if (HX_FIELD_EQ(inName,"__enterFrame") ) { return __enterFrame_dyn(); }
		if (HX_FIELD_EQ(inName,"__updateMask") ) { return __updateMask_dyn(); }
		if (HX_FIELD_EQ(inName,"get_rotation") ) { return get_rotation_dyn(); }
		if (HX_FIELD_EQ(inName,"set_rotation") ) { return set_rotation_dyn(); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"cacheAsBitmap") ) { if (inCallProp == hx::paccAlways) return get_cacheAsBitmap(); }
		if (HX_FIELD_EQ(inName,"__cacheBitmap") ) { return __cacheBitmap; }
		if (HX_FIELD_EQ(inName,"__interactive") ) { return __interactive; }
		if (HX_FIELD_EQ(inName,"__renderDirty") ) { return __renderDirty; }
		if (HX_FIELD_EQ(inName,"dispatchEvent") ) { return dispatchEvent_dyn(); }
		if (HX_FIELD_EQ(inName,"globalToLocal") ) { return globalToLocal_dyn(); }
		if (HX_FIELD_EQ(inName,"hitTestObject") ) { return hitTestObject_dyn(); }
		if (HX_FIELD_EQ(inName,"localToGlobal") ) { return localToGlobal_dyn(); }
		if (HX_FIELD_EQ(inName,"__hitTestMask") ) { return __hitTestMask_dyn(); }
		if (HX_FIELD_EQ(inName,"__renderCairo") ) { return __renderCairo_dyn(); }
		if (HX_FIELD_EQ(inName,"get_blendMode") ) { return get_blendMode_dyn(); }
		if (HX_FIELD_EQ(inName,"set_blendMode") ) { return set_blendMode_dyn(); }
		if (HX_FIELD_EQ(inName,"get_transform") ) { return get_transform_dyn(); }
		if (HX_FIELD_EQ(inName,"set_transform") ) { return set_transform_dyn(); }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"__renderParent") ) { return __renderParent; }
		if (HX_FIELD_EQ(inName,"__rotationSine") ) { return __rotationSine; }
		if (HX_FIELD_EQ(inName,"__worldVisible") ) { return __worldVisible; }
		if (HX_FIELD_EQ(inName,"__renderCanvas") ) { return __renderCanvas_dyn(); }
		if (HX_FIELD_EQ(inName,"get_loaderInfo") ) { return get_loaderInfo_dyn(); }
		if (HX_FIELD_EQ(inName,"get_scrollRect") ) { return get_scrollRect_dyn(); }
		if (HX_FIELD_EQ(inName,"set_scrollRect") ) { return set_scrollRect_dyn(); }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"__cacheAsBitmap") ) { return __cacheAsBitmap; }
		if (HX_FIELD_EQ(inName,"__dispatchEvent") ) { return __dispatchEvent_dyn(); }
		if (HX_FIELD_EQ(inName,"__dispatchStack") ) { return __dispatchStack_dyn(); }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"opaqueBackground") ) { return opaqueBackground; }
		if (HX_FIELD_EQ(inName,"__rotationCosine") ) { return __rotationCosine; }
		if (HX_FIELD_EQ(inName,"__transformDirty") ) { return __transformDirty; }
		if (HX_FIELD_EQ(inName,"__worldBlendMode") ) { return __worldBlendMode; }
		if (HX_FIELD_EQ(inName,"__worldTransform") ) { return __worldTransform; }
		if (HX_FIELD_EQ(inName,"addEventListener") ) { return addEventListener_dyn(); }
		if (HX_FIELD_EQ(inName,"__getInteractive") ) { return __getInteractive_dyn(); }
		if (HX_FIELD_EQ(inName,"__getLocalBounds") ) { return __getLocalBounds_dyn(); }
		if (HX_FIELD_EQ(inName,"__setRenderDirty") ) { return __setRenderDirty_dyn(); }
		if (HX_FIELD_EQ(inName,"__updateChildren") ) { return __updateChildren_dyn(); }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"__cacheBitmapData") ) { return __cacheBitmapData; }
		if (HX_FIELD_EQ(inName,"__objectTransform") ) { return __objectTransform; }
		if (HX_FIELD_EQ(inName,"__renderTransform") ) { return __renderTransform; }
		if (HX_FIELD_EQ(inName,"__getRenderBounds") ) { return __getRenderBounds_dyn(); }
		if (HX_FIELD_EQ(inName,"__renderCairoMask") ) { return __renderCairoMask_dyn(); }
		if (HX_FIELD_EQ(inName,"get_cacheAsBitmap") ) { return get_cacheAsBitmap_dyn(); }
		if (HX_FIELD_EQ(inName,"set_cacheAsBitmap") ) { return set_cacheAsBitmap_dyn(); }
		break;
	case 18:
		if (HX_FIELD_EQ(inName,"__worldClipChanged") ) { return __worldClipChanged; }
		if (HX_FIELD_EQ(inName,"__dispatchChildren") ) { return __dispatchChildren_dyn(); }
		if (HX_FIELD_EQ(inName,"__readGraphicsData") ) { return __readGraphicsData_dyn(); }
		if (HX_FIELD_EQ(inName,"__renderCanvasMask") ) { return __renderCanvasMask_dyn(); }
		if (HX_FIELD_EQ(inName,"__updateTransforms") ) { return __updateTransforms_dyn(); }
		break;
	case 19:
		if (HX_FIELD_EQ(inName,"cacheAsBitmapMatrix") ) { if (inCallProp == hx::paccAlways) return get_cacheAsBitmapMatrix(); }
		if (HX_FIELD_EQ(inName,"__cacheBitmapRender") ) { return __cacheBitmapRender; }
		if (HX_FIELD_EQ(inName,"__worldAlphaChanged") ) { return __worldAlphaChanged; }
		if (HX_FIELD_EQ(inName,"removeEventListener") ) { return removeEventListener_dyn(); }
		if (HX_FIELD_EQ(inName,"__getWorldTransform") ) { return __getWorldTransform_dyn(); }
		if (HX_FIELD_EQ(inName,"__setStageReference") ) { return __setStageReference_dyn(); }
		if (HX_FIELD_EQ(inName,"__setTransformDirty") ) { return __setTransformDirty_dyn(); }
		if (HX_FIELD_EQ(inName,"__stopAllMovieClips") ) { return __stopAllMovieClips_dyn(); }
		if (HX_FIELD_EQ(inName,"__updateCacheBitmap") ) { return __updateCacheBitmap_dyn(); }
		break;
	case 20:
		if (HX_FIELD_EQ(inName,"__getRenderTransform") ) { return __getRenderTransform_dyn(); }
		break;
	case 21:
		if (HX_FIELD_EQ(inName,"__cacheAsBitmapMatrix") ) { return __cacheAsBitmapMatrix; }
		if (HX_FIELD_EQ(inName,"__worldColorTransform") ) { return __worldColorTransform; }
		if (HX_FIELD_EQ(inName,"__worldVisibleChanged") ) { return __worldVisibleChanged; }
		break;
	case 22:
		if (HX_FIELD_EQ(inName,"__renderTransformCache") ) { return __renderTransformCache; }
		if (HX_FIELD_EQ(inName,"__setParentRenderDirty") ) { return __setParentRenderDirty_dyn(); }
		break;
	case 23:
		if (HX_FIELD_EQ(inName,"get_cacheAsBitmapMatrix") ) { return get_cacheAsBitmapMatrix_dyn(); }
		if (HX_FIELD_EQ(inName,"set_cacheAsBitmapMatrix") ) { return set_cacheAsBitmapMatrix_dyn(); }
		break;
	case 24:
		if (HX_FIELD_EQ(inName,"__renderTransformChanged") ) { return __renderTransformChanged; }
	}
	return super::__Field(inName,inCallProp);
}

bool DisplayObject_obj::__GetStatic(const ::String &inName, Dynamic &outValue, hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 15:
		if (HX_FIELD_EQ(inName,"__instanceCount") ) { outValue = __instanceCount; return true;  }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"__broadcastEvents") ) { outValue = __broadcastEvents; return true;  }
	}
	return false;
}

Dynamic DisplayObject_obj::__SetField(const ::String &inName,const Dynamic &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 1:
		if (HX_FIELD_EQ(inName,"x") ) { if (inCallProp == hx::paccAlways) return set_x(inValue); }
		if (HX_FIELD_EQ(inName,"y") ) { if (inCallProp == hx::paccAlways) return set_y(inValue); }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"mask") ) { if (inCallProp == hx::paccAlways) return set_mask(inValue); }
		if (HX_FIELD_EQ(inName,"name") ) { if (inCallProp == hx::paccAlways) return set_name(inValue); }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"alpha") ) { if (inCallProp == hx::paccAlways) return set_alpha(inValue); }
		if (HX_FIELD_EQ(inName,"stage") ) { stage=inValue.Cast< ::openfl::display::Stage >(); return inValue; }
		if (HX_FIELD_EQ(inName,"width") ) { if (inCallProp == hx::paccAlways) return set_width(inValue); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"height") ) { if (inCallProp == hx::paccAlways) return set_height(inValue); }
		if (HX_FIELD_EQ(inName,"parent") ) { parent=inValue.Cast< ::openfl::display::DisplayObjectContainer >(); return inValue; }
		if (HX_FIELD_EQ(inName,"scaleX") ) { if (inCallProp == hx::paccAlways) return set_scaleX(inValue); }
		if (HX_FIELD_EQ(inName,"scaleY") ) { if (inCallProp == hx::paccAlways) return set_scaleY(inValue); }
		if (HX_FIELD_EQ(inName,"__mask") ) { __mask=inValue.Cast< ::openfl::display::DisplayObject >(); return inValue; }
		if (HX_FIELD_EQ(inName,"__name") ) { __name=inValue.Cast< ::String >(); return inValue; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"filters") ) { if (inCallProp == hx::paccAlways) return set_filters(inValue); }
		if (HX_FIELD_EQ(inName,"visible") ) { if (inCallProp == hx::paccAlways) return set_visible(inValue); }
		if (HX_FIELD_EQ(inName,"__alpha") ) { __alpha=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"__cairo") ) { __cairo=inValue.Cast< ::lime::graphics::cairo::Cairo >(); return inValue; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"rotation") ) { if (inCallProp == hx::paccAlways) return set_rotation(inValue); }
		if (HX_FIELD_EQ(inName,"__isMask") ) { __isMask=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"__scaleX") ) { __scaleX=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"__scaleY") ) { __scaleY=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"__worldZ") ) { __worldZ=inValue.Cast< int >(); return inValue; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"blendMode") ) { if (inCallProp == hx::paccAlways) return set_blendMode(inValue); }
		if (HX_FIELD_EQ(inName,"transform") ) { if (inCallProp == hx::paccAlways) return set_transform(inValue); }
		if (HX_FIELD_EQ(inName,"__filters") ) { __filters=inValue.Cast< Array< ::Dynamic > >(); return inValue; }
		if (HX_FIELD_EQ(inName,"__visible") ) { __visible=inValue.Cast< bool >(); return inValue; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"scale9Grid") ) { scale9Grid=inValue.Cast< ::openfl::geom::Rectangle >(); return inValue; }
		if (HX_FIELD_EQ(inName,"scrollRect") ) { if (inCallProp == hx::paccAlways) return set_scrollRect(inValue); }
		if (HX_FIELD_EQ(inName,"__children") ) { __children=inValue.Cast< Array< ::Dynamic > >(); return inValue; }
		if (HX_FIELD_EQ(inName,"__graphics") ) { __graphics=inValue.Cast< ::openfl::display::Graphics >(); return inValue; }
		if (HX_FIELD_EQ(inName,"__rotation") ) { __rotation=inValue.Cast< Float >(); return inValue; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"__blendMode") ) { __blendMode=inValue.Cast< Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"__transform") ) { __transform=inValue.Cast< ::openfl::geom::Matrix >(); return inValue; }
		if (HX_FIELD_EQ(inName,"__worldClip") ) { __worldClip=inValue.Cast< ::openfl::geom::Rectangle >(); return inValue; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"__loaderInfo") ) { __loaderInfo=inValue.Cast< ::openfl::display::LoaderInfo >(); return inValue; }
		if (HX_FIELD_EQ(inName,"__renderable") ) { __renderable=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"__scrollRect") ) { __scrollRect=inValue.Cast< ::openfl::geom::Rectangle >(); return inValue; }
		if (HX_FIELD_EQ(inName,"__worldAlpha") ) { __worldAlpha=inValue.Cast< Float >(); return inValue; }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"cacheAsBitmap") ) { if (inCallProp == hx::paccAlways) return set_cacheAsBitmap(inValue); }
		if (HX_FIELD_EQ(inName,"__cacheBitmap") ) { __cacheBitmap=inValue.Cast< ::openfl::display::Bitmap >(); return inValue; }
		if (HX_FIELD_EQ(inName,"__interactive") ) { __interactive=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"__renderDirty") ) { __renderDirty=inValue.Cast< bool >(); return inValue; }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"__renderParent") ) { __renderParent=inValue.Cast< ::openfl::display::DisplayObject >(); return inValue; }
		if (HX_FIELD_EQ(inName,"__rotationSine") ) { __rotationSine=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"__worldVisible") ) { __worldVisible=inValue.Cast< bool >(); return inValue; }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"__cacheAsBitmap") ) { __cacheAsBitmap=inValue.Cast< bool >(); return inValue; }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"opaqueBackground") ) { opaqueBackground=inValue.Cast< Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"__rotationCosine") ) { __rotationCosine=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"__transformDirty") ) { __transformDirty=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"__worldBlendMode") ) { __worldBlendMode=inValue.Cast< Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"__worldTransform") ) { __worldTransform=inValue.Cast< ::openfl::geom::Matrix >(); return inValue; }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"__cacheBitmapData") ) { __cacheBitmapData=inValue.Cast< ::openfl::display::BitmapData >(); return inValue; }
		if (HX_FIELD_EQ(inName,"__objectTransform") ) { __objectTransform=inValue.Cast< ::openfl::geom::Transform >(); return inValue; }
		if (HX_FIELD_EQ(inName,"__renderTransform") ) { __renderTransform=inValue.Cast< ::openfl::geom::Matrix >(); return inValue; }
		break;
	case 18:
		if (HX_FIELD_EQ(inName,"__worldClipChanged") ) { __worldClipChanged=inValue.Cast< bool >(); return inValue; }
		break;
	case 19:
		if (HX_FIELD_EQ(inName,"cacheAsBitmapMatrix") ) { if (inCallProp == hx::paccAlways) return set_cacheAsBitmapMatrix(inValue); }
		if (HX_FIELD_EQ(inName,"__cacheBitmapRender") ) { __cacheBitmapRender=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"__worldAlphaChanged") ) { __worldAlphaChanged=inValue.Cast< bool >(); return inValue; }
		break;
	case 21:
		if (HX_FIELD_EQ(inName,"__cacheAsBitmapMatrix") ) { __cacheAsBitmapMatrix=inValue.Cast< ::openfl::geom::Matrix >(); return inValue; }
		if (HX_FIELD_EQ(inName,"__worldColorTransform") ) { __worldColorTransform=inValue.Cast< ::openfl::geom::ColorTransform >(); return inValue; }
		if (HX_FIELD_EQ(inName,"__worldVisibleChanged") ) { __worldVisibleChanged=inValue.Cast< bool >(); return inValue; }
		break;
	case 22:
		if (HX_FIELD_EQ(inName,"__renderTransformCache") ) { __renderTransformCache=inValue.Cast< ::openfl::geom::Matrix >(); return inValue; }
		break;
	case 24:
		if (HX_FIELD_EQ(inName,"__renderTransformChanged") ) { __renderTransformChanged=inValue.Cast< bool >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

bool DisplayObject_obj::__SetStatic(const ::String &inName,Dynamic &ioValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 15:
		if (HX_FIELD_EQ(inName,"__instanceCount") ) { __instanceCount=ioValue.Cast< int >(); return true; }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"__broadcastEvents") ) { __broadcastEvents=ioValue.Cast< ::haxe::ds::StringMap >(); return true; }
	}
	return false;
}

void DisplayObject_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("alpha","\x5e","\xa7","\x96","\x21"));
	outFields->push(HX_HCSTRING("blendMode","\x54","\xe4","\x37","\x0c"));
	outFields->push(HX_HCSTRING("cacheAsBitmap","\xe3","\x82","\x0f","\x6a"));
	outFields->push(HX_HCSTRING("cacheAsBitmapMatrix","\x84","\xf9","\x81","\x95"));
	outFields->push(HX_HCSTRING("filters","\xbb","\xa1","\x46","\x09"));
	outFields->push(HX_HCSTRING("height","\xe7","\x07","\x4c","\x02"));
	outFields->push(HX_HCSTRING("loaderInfo","\x21","\xb2","\xe4","\xb6"));
	outFields->push(HX_HCSTRING("mask","\xec","\x40","\x56","\x48"));
	outFields->push(HX_HCSTRING("mouseX","\x93","\x4a","\x0e","\xcc"));
	outFields->push(HX_HCSTRING("mouseY","\x94","\x4a","\x0e","\xcc"));
	outFields->push(HX_HCSTRING("name","\x4b","\x72","\xff","\x48"));
	outFields->push(HX_HCSTRING("opaqueBackground","\x2f","\xb8","\xa7","\x1a"));
	outFields->push(HX_HCSTRING("parent","\x2a","\x05","\x7e","\xed"));
	outFields->push(HX_HCSTRING("root","\x22","\xee","\xae","\x4b"));
	outFields->push(HX_HCSTRING("rotation","\x3e","\x3d","\x86","\x08"));
	outFields->push(HX_HCSTRING("scale9Grid","\xd5","\x50","\x22","\x8f"));
	outFields->push(HX_HCSTRING("scaleX","\x8e","\xea","\x25","\x3c"));
	outFields->push(HX_HCSTRING("scaleY","\x8f","\xea","\x25","\x3c"));
	outFields->push(HX_HCSTRING("scrollRect","\xd1","\xdb","\x66","\x09"));
	outFields->push(HX_HCSTRING("stage","\xbe","\x6a","\x0b","\x84"));
	outFields->push(HX_HCSTRING("transform","\x6c","\x2d","\x93","\x45"));
	outFields->push(HX_HCSTRING("visible","\x72","\x78","\x24","\xa3"));
	outFields->push(HX_HCSTRING("width","\x06","\xb6","\x62","\xca"));
	outFields->push(HX_HCSTRING("x","\x78","\x00","\x00","\x00"));
	outFields->push(HX_HCSTRING("y","\x79","\x00","\x00","\x00"));
	outFields->push(HX_HCSTRING("__alpha","\x3e","\x00","\xf5","\x8b"));
	outFields->push(HX_HCSTRING("__blendMode","\x34","\x2d","\x64","\x3a"));
	outFields->push(HX_HCSTRING("__cacheAsBitmap","\xc3","\xbb","\xc1","\xf1"));
	outFields->push(HX_HCSTRING("__cacheAsBitmapMatrix","\x64","\x1a","\x76","\x03"));
	outFields->push(HX_HCSTRING("__cacheBitmap","\xb1","\x7c","\x25","\x58"));
	outFields->push(HX_HCSTRING("__cacheBitmapData","\x7b","\xab","\xbc","\x95"));
	outFields->push(HX_HCSTRING("__cacheBitmapRender","\xe7","\x76","\x7f","\xe1"));
	outFields->push(HX_HCSTRING("__cairo","\x68","\x89","\x77","\xab"));
	outFields->push(HX_HCSTRING("__children","\x5f","\x8c","\xa2","\x13"));
	outFields->push(HX_HCSTRING("__filters","\x9b","\xf2","\x94","\x8a"));
	outFields->push(HX_HCSTRING("__graphics","\xeb","\x6b","\xa0","\xb5"));
	outFields->push(HX_HCSTRING("__interactive","\xc2","\x7e","\xd1","\x84"));
	outFields->push(HX_HCSTRING("__isMask","\x16","\x71","\xec","\x0d"));
	outFields->push(HX_HCSTRING("__loaderInfo","\x41","\x2d","\x78","\xef"));
	outFields->push(HX_HCSTRING("__mask","\x0c","\xa4","\x4e","\xf7"));
	outFields->push(HX_HCSTRING("__name","\x6b","\xd5","\xf7","\xf7"));
	outFields->push(HX_HCSTRING("__objectTransform","\x8d","\x6f","\x30","\x54"));
	outFields->push(HX_HCSTRING("__renderable","\x10","\xb7","\x2c","\x2b"));
	outFields->push(HX_HCSTRING("__renderDirty","\xbc","\xbd","\xf9","\xed"));
	outFields->push(HX_HCSTRING("__renderParent","\x40","\x8c","\x94","\x7d"));
	outFields->push(HX_HCSTRING("__renderTransform","\x16","\xb8","\x95","\xb1"));
	outFields->push(HX_HCSTRING("__renderTransformCache","\x4c","\x42","\xcb","\xbc"));
	outFields->push(HX_HCSTRING("__renderTransformChanged","\x7e","\xef","\x84","\xa1"));
	outFields->push(HX_HCSTRING("__rotation","\x5e","\xb0","\xbe","\xab"));
	outFields->push(HX_HCSTRING("__rotationCosine","\xf7","\x71","\x7b","\x14"));
	outFields->push(HX_HCSTRING("__rotationSine","\xcb","\xf9","\xad","\x3f"));
	outFields->push(HX_HCSTRING("__scaleX","\xae","\x55","\x55","\xe4"));
	outFields->push(HX_HCSTRING("__scaleY","\xaf","\x55","\x55","\xe4"));
	outFields->push(HX_HCSTRING("__scrollRect","\xf1","\x56","\xfa","\x41"));
	outFields->push(HX_HCSTRING("__transform","\x4c","\x76","\xbf","\x73"));
	outFields->push(HX_HCSTRING("__transformDirty","\x26","\xf6","\x91","\x84"));
	outFields->push(HX_HCSTRING("__visible","\x52","\xc9","\x72","\x24"));
	outFields->push(HX_HCSTRING("__worldAlpha","\xcc","\xd2","\xd6","\xc5"));
	outFields->push(HX_HCSTRING("__worldAlphaChanged","\x88","\x37","\xd8","\xd0"));
	outFields->push(HX_HCSTRING("__worldBlendMode","\xc2","\x5e","\x7d","\x61"));
	outFields->push(HX_HCSTRING("__worldClip","\x22","\x0b","\x0b","\x7d"));
	outFields->push(HX_HCSTRING("__worldClipChanged","\xf2","\x55","\x0d","\x68"));
	outFields->push(HX_HCSTRING("__worldColorTransform","\x5b","\xce","\x21","\xa3"));
	outFields->push(HX_HCSTRING("__worldTransform","\xda","\xa7","\xd8","\x9a"));
	outFields->push(HX_HCSTRING("__worldVisible","\x60","\xdb","\x58","\xf8"));
	outFields->push(HX_HCSTRING("__worldVisibleChanged","\x74","\x29","\x51","\x77"));
	outFields->push(HX_HCSTRING("__worldZ","\xe8","\x5c","\xce","\x71"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsObject /*Dynamic*/ ,(int)offsetof(DisplayObject_obj,opaqueBackground),HX_HCSTRING("opaqueBackground","\x2f","\xb8","\xa7","\x1a")},
	{hx::fsObject /*::openfl::display::DisplayObjectContainer*/ ,(int)offsetof(DisplayObject_obj,parent),HX_HCSTRING("parent","\x2a","\x05","\x7e","\xed")},
	{hx::fsObject /*::openfl::geom::Rectangle*/ ,(int)offsetof(DisplayObject_obj,scale9Grid),HX_HCSTRING("scale9Grid","\xd5","\x50","\x22","\x8f")},
	{hx::fsObject /*::openfl::display::Stage*/ ,(int)offsetof(DisplayObject_obj,stage),HX_HCSTRING("stage","\xbe","\x6a","\x0b","\x84")},
	{hx::fsFloat,(int)offsetof(DisplayObject_obj,__alpha),HX_HCSTRING("__alpha","\x3e","\x00","\xf5","\x8b")},
	{hx::fsObject /*Dynamic*/ ,(int)offsetof(DisplayObject_obj,__blendMode),HX_HCSTRING("__blendMode","\x34","\x2d","\x64","\x3a")},
	{hx::fsBool,(int)offsetof(DisplayObject_obj,__cacheAsBitmap),HX_HCSTRING("__cacheAsBitmap","\xc3","\xbb","\xc1","\xf1")},
	{hx::fsObject /*::openfl::geom::Matrix*/ ,(int)offsetof(DisplayObject_obj,__cacheAsBitmapMatrix),HX_HCSTRING("__cacheAsBitmapMatrix","\x64","\x1a","\x76","\x03")},
	{hx::fsObject /*::openfl::display::Bitmap*/ ,(int)offsetof(DisplayObject_obj,__cacheBitmap),HX_HCSTRING("__cacheBitmap","\xb1","\x7c","\x25","\x58")},
	{hx::fsObject /*::openfl::display::BitmapData*/ ,(int)offsetof(DisplayObject_obj,__cacheBitmapData),HX_HCSTRING("__cacheBitmapData","\x7b","\xab","\xbc","\x95")},
	{hx::fsBool,(int)offsetof(DisplayObject_obj,__cacheBitmapRender),HX_HCSTRING("__cacheBitmapRender","\xe7","\x76","\x7f","\xe1")},
	{hx::fsObject /*::lime::graphics::cairo::Cairo*/ ,(int)offsetof(DisplayObject_obj,__cairo),HX_HCSTRING("__cairo","\x68","\x89","\x77","\xab")},
	{hx::fsObject /*Array< ::Dynamic >*/ ,(int)offsetof(DisplayObject_obj,__children),HX_HCSTRING("__children","\x5f","\x8c","\xa2","\x13")},
	{hx::fsObject /*Array< ::Dynamic >*/ ,(int)offsetof(DisplayObject_obj,__filters),HX_HCSTRING("__filters","\x9b","\xf2","\x94","\x8a")},
	{hx::fsObject /*::openfl::display::Graphics*/ ,(int)offsetof(DisplayObject_obj,__graphics),HX_HCSTRING("__graphics","\xeb","\x6b","\xa0","\xb5")},
	{hx::fsBool,(int)offsetof(DisplayObject_obj,__interactive),HX_HCSTRING("__interactive","\xc2","\x7e","\xd1","\x84")},
	{hx::fsBool,(int)offsetof(DisplayObject_obj,__isMask),HX_HCSTRING("__isMask","\x16","\x71","\xec","\x0d")},
	{hx::fsObject /*::openfl::display::LoaderInfo*/ ,(int)offsetof(DisplayObject_obj,__loaderInfo),HX_HCSTRING("__loaderInfo","\x41","\x2d","\x78","\xef")},
	{hx::fsObject /*::openfl::display::DisplayObject*/ ,(int)offsetof(DisplayObject_obj,__mask),HX_HCSTRING("__mask","\x0c","\xa4","\x4e","\xf7")},
	{hx::fsString,(int)offsetof(DisplayObject_obj,__name),HX_HCSTRING("__name","\x6b","\xd5","\xf7","\xf7")},
	{hx::fsObject /*::openfl::geom::Transform*/ ,(int)offsetof(DisplayObject_obj,__objectTransform),HX_HCSTRING("__objectTransform","\x8d","\x6f","\x30","\x54")},
	{hx::fsBool,(int)offsetof(DisplayObject_obj,__renderable),HX_HCSTRING("__renderable","\x10","\xb7","\x2c","\x2b")},
	{hx::fsBool,(int)offsetof(DisplayObject_obj,__renderDirty),HX_HCSTRING("__renderDirty","\xbc","\xbd","\xf9","\xed")},
	{hx::fsObject /*::openfl::display::DisplayObject*/ ,(int)offsetof(DisplayObject_obj,__renderParent),HX_HCSTRING("__renderParent","\x40","\x8c","\x94","\x7d")},
	{hx::fsObject /*::openfl::geom::Matrix*/ ,(int)offsetof(DisplayObject_obj,__renderTransform),HX_HCSTRING("__renderTransform","\x16","\xb8","\x95","\xb1")},
	{hx::fsObject /*::openfl::geom::Matrix*/ ,(int)offsetof(DisplayObject_obj,__renderTransformCache),HX_HCSTRING("__renderTransformCache","\x4c","\x42","\xcb","\xbc")},
	{hx::fsBool,(int)offsetof(DisplayObject_obj,__renderTransformChanged),HX_HCSTRING("__renderTransformChanged","\x7e","\xef","\x84","\xa1")},
	{hx::fsFloat,(int)offsetof(DisplayObject_obj,__rotation),HX_HCSTRING("__rotation","\x5e","\xb0","\xbe","\xab")},
	{hx::fsFloat,(int)offsetof(DisplayObject_obj,__rotationCosine),HX_HCSTRING("__rotationCosine","\xf7","\x71","\x7b","\x14")},
	{hx::fsFloat,(int)offsetof(DisplayObject_obj,__rotationSine),HX_HCSTRING("__rotationSine","\xcb","\xf9","\xad","\x3f")},
	{hx::fsFloat,(int)offsetof(DisplayObject_obj,__scaleX),HX_HCSTRING("__scaleX","\xae","\x55","\x55","\xe4")},
	{hx::fsFloat,(int)offsetof(DisplayObject_obj,__scaleY),HX_HCSTRING("__scaleY","\xaf","\x55","\x55","\xe4")},
	{hx::fsObject /*::openfl::geom::Rectangle*/ ,(int)offsetof(DisplayObject_obj,__scrollRect),HX_HCSTRING("__scrollRect","\xf1","\x56","\xfa","\x41")},
	{hx::fsObject /*::openfl::geom::Matrix*/ ,(int)offsetof(DisplayObject_obj,__transform),HX_HCSTRING("__transform","\x4c","\x76","\xbf","\x73")},
	{hx::fsBool,(int)offsetof(DisplayObject_obj,__transformDirty),HX_HCSTRING("__transformDirty","\x26","\xf6","\x91","\x84")},
	{hx::fsBool,(int)offsetof(DisplayObject_obj,__visible),HX_HCSTRING("__visible","\x52","\xc9","\x72","\x24")},
	{hx::fsFloat,(int)offsetof(DisplayObject_obj,__worldAlpha),HX_HCSTRING("__worldAlpha","\xcc","\xd2","\xd6","\xc5")},
	{hx::fsBool,(int)offsetof(DisplayObject_obj,__worldAlphaChanged),HX_HCSTRING("__worldAlphaChanged","\x88","\x37","\xd8","\xd0")},
	{hx::fsObject /*Dynamic*/ ,(int)offsetof(DisplayObject_obj,__worldBlendMode),HX_HCSTRING("__worldBlendMode","\xc2","\x5e","\x7d","\x61")},
	{hx::fsObject /*::openfl::geom::Rectangle*/ ,(int)offsetof(DisplayObject_obj,__worldClip),HX_HCSTRING("__worldClip","\x22","\x0b","\x0b","\x7d")},
	{hx::fsBool,(int)offsetof(DisplayObject_obj,__worldClipChanged),HX_HCSTRING("__worldClipChanged","\xf2","\x55","\x0d","\x68")},
	{hx::fsObject /*::openfl::geom::ColorTransform*/ ,(int)offsetof(DisplayObject_obj,__worldColorTransform),HX_HCSTRING("__worldColorTransform","\x5b","\xce","\x21","\xa3")},
	{hx::fsObject /*::openfl::geom::Matrix*/ ,(int)offsetof(DisplayObject_obj,__worldTransform),HX_HCSTRING("__worldTransform","\xda","\xa7","\xd8","\x9a")},
	{hx::fsBool,(int)offsetof(DisplayObject_obj,__worldVisible),HX_HCSTRING("__worldVisible","\x60","\xdb","\x58","\xf8")},
	{hx::fsBool,(int)offsetof(DisplayObject_obj,__worldVisibleChanged),HX_HCSTRING("__worldVisibleChanged","\x74","\x29","\x51","\x77")},
	{hx::fsInt,(int)offsetof(DisplayObject_obj,__worldZ),HX_HCSTRING("__worldZ","\xe8","\x5c","\xce","\x71")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo sStaticStorageInfo[] = {
	{hx::fsObject /*::haxe::ds::StringMap*/ ,(void *) &DisplayObject_obj::__broadcastEvents,HX_HCSTRING("__broadcastEvents","\xda","\x4d","\x64","\x5a")},
	{hx::fsInt,(void *) &DisplayObject_obj::__instanceCount,HX_HCSTRING("__instanceCount","\xda","\x31","\x1e","\x3f")},
	{ hx::fsUnknown, 0, null()}
};
#endif

static ::String sMemberFields[] = {
	HX_HCSTRING("opaqueBackground","\x2f","\xb8","\xa7","\x1a"),
	HX_HCSTRING("parent","\x2a","\x05","\x7e","\xed"),
	HX_HCSTRING("scale9Grid","\xd5","\x50","\x22","\x8f"),
	HX_HCSTRING("stage","\xbe","\x6a","\x0b","\x84"),
	HX_HCSTRING("__alpha","\x3e","\x00","\xf5","\x8b"),
	HX_HCSTRING("__blendMode","\x34","\x2d","\x64","\x3a"),
	HX_HCSTRING("__cacheAsBitmap","\xc3","\xbb","\xc1","\xf1"),
	HX_HCSTRING("__cacheAsBitmapMatrix","\x64","\x1a","\x76","\x03"),
	HX_HCSTRING("__cacheBitmap","\xb1","\x7c","\x25","\x58"),
	HX_HCSTRING("__cacheBitmapData","\x7b","\xab","\xbc","\x95"),
	HX_HCSTRING("__cacheBitmapRender","\xe7","\x76","\x7f","\xe1"),
	HX_HCSTRING("__cairo","\x68","\x89","\x77","\xab"),
	HX_HCSTRING("__children","\x5f","\x8c","\xa2","\x13"),
	HX_HCSTRING("__filters","\x9b","\xf2","\x94","\x8a"),
	HX_HCSTRING("__graphics","\xeb","\x6b","\xa0","\xb5"),
	HX_HCSTRING("__interactive","\xc2","\x7e","\xd1","\x84"),
	HX_HCSTRING("__isMask","\x16","\x71","\xec","\x0d"),
	HX_HCSTRING("__loaderInfo","\x41","\x2d","\x78","\xef"),
	HX_HCSTRING("__mask","\x0c","\xa4","\x4e","\xf7"),
	HX_HCSTRING("__name","\x6b","\xd5","\xf7","\xf7"),
	HX_HCSTRING("__objectTransform","\x8d","\x6f","\x30","\x54"),
	HX_HCSTRING("__renderable","\x10","\xb7","\x2c","\x2b"),
	HX_HCSTRING("__renderDirty","\xbc","\xbd","\xf9","\xed"),
	HX_HCSTRING("__renderParent","\x40","\x8c","\x94","\x7d"),
	HX_HCSTRING("__renderTransform","\x16","\xb8","\x95","\xb1"),
	HX_HCSTRING("__renderTransformCache","\x4c","\x42","\xcb","\xbc"),
	HX_HCSTRING("__renderTransformChanged","\x7e","\xef","\x84","\xa1"),
	HX_HCSTRING("__rotation","\x5e","\xb0","\xbe","\xab"),
	HX_HCSTRING("__rotationCosine","\xf7","\x71","\x7b","\x14"),
	HX_HCSTRING("__rotationSine","\xcb","\xf9","\xad","\x3f"),
	HX_HCSTRING("__scaleX","\xae","\x55","\x55","\xe4"),
	HX_HCSTRING("__scaleY","\xaf","\x55","\x55","\xe4"),
	HX_HCSTRING("__scrollRect","\xf1","\x56","\xfa","\x41"),
	HX_HCSTRING("__transform","\x4c","\x76","\xbf","\x73"),
	HX_HCSTRING("__transformDirty","\x26","\xf6","\x91","\x84"),
	HX_HCSTRING("__visible","\x52","\xc9","\x72","\x24"),
	HX_HCSTRING("__worldAlpha","\xcc","\xd2","\xd6","\xc5"),
	HX_HCSTRING("__worldAlphaChanged","\x88","\x37","\xd8","\xd0"),
	HX_HCSTRING("__worldBlendMode","\xc2","\x5e","\x7d","\x61"),
	HX_HCSTRING("__worldClip","\x22","\x0b","\x0b","\x7d"),
	HX_HCSTRING("__worldClipChanged","\xf2","\x55","\x0d","\x68"),
	HX_HCSTRING("__worldColorTransform","\x5b","\xce","\x21","\xa3"),
	HX_HCSTRING("__worldTransform","\xda","\xa7","\xd8","\x9a"),
	HX_HCSTRING("__worldVisible","\x60","\xdb","\x58","\xf8"),
	HX_HCSTRING("__worldVisibleChanged","\x74","\x29","\x51","\x77"),
	HX_HCSTRING("__worldZ","\xe8","\x5c","\xce","\x71"),
	HX_HCSTRING("addEventListener","\xcd","\x0b","\x64","\xf1"),
	HX_HCSTRING("dispatchEvent","\x00","\xc7","\x64","\xc6"),
	HX_HCSTRING("getBounds","\xab","\x0f","\x74","\xe2"),
	HX_HCSTRING("getRect","\xda","\xfc","\x29","\x1e"),
	HX_HCSTRING("globalToLocal","\xcd","\x4e","\xae","\x6b"),
	HX_HCSTRING("hitTestObject","\xe4","\x54","\x64","\xd7"),
	HX_HCSTRING("hitTestPoint","\xcb","\xa9","\x21","\xe4"),
	HX_HCSTRING("localToGlobal","\xc9","\x41","\xeb","\x47"),
	HX_HCSTRING("removeEventListener","\xca","\x87","\x75","\x55"),
	HX_HCSTRING("__cleanup","\x04","\x5d","\x90","\x2c"),
	HX_HCSTRING("__dispatch","\xda","\x41","\x9c","\xc1"),
	HX_HCSTRING("__dispatchChildren","\x39","\x81","\xf4","\xf4"),
	HX_HCSTRING("__dispatchEvent","\xe0","\xff","\x16","\x4e"),
	HX_HCSTRING("__dispatchStack","\x0e","\x9f","\x5d","\x5c"),
	HX_HCSTRING("__enterFrame","\x15","\x7f","\xe3","\x3a"),
	HX_HCSTRING("__getBounds","\x8b","\x58","\xa0","\x10"),
	HX_HCSTRING("__getCursor","\xec","\x60","\x6b","\xe9"),
	HX_HCSTRING("__getInteractive","\x0c","\x1c","\x37","\xf8"),
	HX_HCSTRING("__getLocalBounds","\x6a","\x04","\x36","\xdf"),
	HX_HCSTRING("__getRenderBounds","\x01","\x11","\xb8","\x7b"),
	HX_HCSTRING("__getRenderTransform","\x60","\xc2","\x34","\xc0"),
	HX_HCSTRING("__getWorldTransform","\xd0","\xf4","\xfc","\x8b"),
	HX_HCSTRING("__hitTest","\x25","\xb1","\xcd","\x63"),
	HX_HCSTRING("__hitTestMask","\xb1","\x14","\xfd","\x3b"),
	HX_HCSTRING("__readGraphicsData","\x2b","\x10","\x91","\xf2"),
	HX_HCSTRING("__renderCairo","\x32","\x9e","\x42","\x55"),
	HX_HCSTRING("__renderCairoMask","\x3e","\x0c","\x22","\x6b"),
	HX_HCSTRING("__renderCanvas","\xee","\xdb","\x58","\x48"),
	HX_HCSTRING("__renderCanvasMask","\xfa","\xd7","\xef","\x51"),
	HX_HCSTRING("__renderDOM","\xac","\xf5","\x83","\xfb"),
	HX_HCSTRING("__renderGL","\x1b","\x1e","\x14","\x56"),
	HX_HCSTRING("__setParentRenderDirty","\xf0","\xbc","\x57","\xf3"),
	HX_HCSTRING("__setRenderDirty","\x7a","\x43","\x7f","\x81"),
	HX_HCSTRING("__setStageReference","\x4f","\xe5","\xe5","\xf4"),
	HX_HCSTRING("__setTransformDirty","\x28","\x1b","\x24","\x99"),
	HX_HCSTRING("__stopAllMovieClips","\xd2","\x89","\xe8","\x53"),
	HX_HCSTRING("__update","\x29","\xf1","\x34","\x2f"),
	HX_HCSTRING("__updateCacheBitmap","\x28","\x11","\x07","\x27"),
	HX_HCSTRING("__updateChildren","\x88","\x97","\xd3","\xd9"),
	HX_HCSTRING("__updateMask","\xb5","\xa6","\x9e","\x39"),
	HX_HCSTRING("__updateTransforms","\x10","\xf4","\xb0","\x50"),
	HX_HCSTRING("get_alpha","\xb5","\x03","\x40","\x65"),
	HX_HCSTRING("set_alpha","\xc1","\xef","\x90","\x48"),
	HX_HCSTRING("get_blendMode","\x2b","\xb8","\x9b","\xcd"),
	HX_HCSTRING("set_blendMode","\x37","\x9a","\xa1","\x12"),
	HX_HCSTRING("get_cacheAsBitmap","\x3a","\x8e","\x7f","\x70"),
	HX_HCSTRING("set_cacheAsBitmap","\x46","\x66","\xed","\x93"),
	HX_HCSTRING("get_cacheAsBitmapMatrix","\x1b","\xa0","\xd7","\x9d"),
	HX_HCSTRING("set_cacheAsBitmapMatrix","\x27","\x09","\x39","\xa0"),
	HX_HCSTRING("get_filters","\xd2","\x01","\x41","\x8f"),
	HX_HCSTRING("set_filters","\xde","\x08","\xae","\x99"),
	HX_HCSTRING("get_height","\xb0","\x77","\xd3","\xf2"),
	HX_HCSTRING("set_height","\x24","\x16","\x51","\xf6"),
	HX_HCSTRING("get_loaderInfo","\x6a","\x3a","\xda","\x2c"),
	HX_HCSTRING("get_mask","\x75","\xfc","\x10","\xc8"),
	HX_HCSTRING("set_mask","\xe9","\x55","\x6e","\x76"),
	HX_HCSTRING("get_mouseX","\x5c","\xba","\x95","\xbc"),
	HX_HCSTRING("get_mouseY","\x5d","\xba","\x95","\xbc"),
	HX_HCSTRING("get_name","\xd4","\x2d","\xba","\xc8"),
	HX_HCSTRING("set_name","\x48","\x87","\x17","\x77"),
	HX_HCSTRING("get_root","\xab","\xa9","\x69","\xcb"),
	HX_HCSTRING("get_rotation","\x47","\xf1","\x9f","\xbd"),
	HX_HCSTRING("set_rotation","\xbb","\x14","\x99","\xd2"),
	HX_HCSTRING("get_scaleX","\x57","\x5a","\xad","\x2c"),
	HX_HCSTRING("set_scaleX","\xcb","\xf8","\x2a","\x30"),
	HX_HCSTRING("get_scaleY","\x58","\x5a","\xad","\x2c"),
	HX_HCSTRING("set_scaleY","\xcc","\xf8","\x2a","\x30"),
	HX_HCSTRING("get_scrollRect","\x1a","\x64","\x5c","\x7f"),
	HX_HCSTRING("set_scrollRect","\x8e","\x4c","\x7c","\x9f"),
	HX_HCSTRING("get_transform","\x43","\x01","\xf7","\x06"),
	HX_HCSTRING("set_transform","\x4f","\xe3","\xfc","\x4b"),
	HX_HCSTRING("get_visible","\x89","\xd8","\x1e","\x29"),
	HX_HCSTRING("set_visible","\x95","\xdf","\x8b","\x33"),
	HX_HCSTRING("get_width","\x5d","\x12","\x0c","\x0e"),
	HX_HCSTRING("set_width","\x69","\xfe","\x5c","\xf1"),
	HX_HCSTRING("get_x","\x4f","\xa5","\x60","\x91"),
	HX_HCSTRING("set_x","\x5b","\x9b","\x2f","\x7a"),
	HX_HCSTRING("get_y","\x50","\xa5","\x60","\x91"),
	HX_HCSTRING("set_y","\x5c","\x9b","\x2f","\x7a"),
	::String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(DisplayObject_obj::__mClass,"__mClass");
	HX_MARK_MEMBER_NAME(DisplayObject_obj::__broadcastEvents,"__broadcastEvents");
	HX_MARK_MEMBER_NAME(DisplayObject_obj::__instanceCount,"__instanceCount");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(DisplayObject_obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(DisplayObject_obj::__broadcastEvents,"__broadcastEvents");
	HX_VISIT_MEMBER_NAME(DisplayObject_obj::__instanceCount,"__instanceCount");
};

#endif

hx::Class DisplayObject_obj::__mClass;

static ::String sStaticFields[] = {
	HX_HCSTRING("__broadcastEvents","\xda","\x4d","\x64","\x5a"),
	HX_HCSTRING("__instanceCount","\xda","\x31","\x1e","\x3f"),
	::String(null()) };

void DisplayObject_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("openfl.display.DisplayObject","\xf7","\x4b","\x6f","\xea");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &DisplayObject_obj::__GetStatic;
	__mClass->mSetStaticField = &DisplayObject_obj::__SetStatic;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(sStaticFields);
	__mClass->mMembers = hx::Class_obj::dupFunctions(sMemberFields);
	__mClass->mCanCast = hx::TCanCast< DisplayObject_obj >;
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

void DisplayObject_obj::__boot()
{
struct _Function_0_1{
	inline static ::haxe::ds::StringMap Block( ){
		{
			::haxe::ds::StringMap tmp = ::haxe::ds::StringMap_obj::__new();
			::haxe::ds::StringMap tmp1 = tmp;
			return tmp1;
		}
		return null();
	}
};
	__broadcastEvents= _Function_0_1::Block();
	__instanceCount= (int)0;
}

} // end namespace openfl
} // end namespace display
