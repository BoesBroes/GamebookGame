#include <hxcpp.h>

#ifndef INCLUDED_lime_app_IModule
#include <lime/app/IModule.h>
#endif
#ifndef INCLUDED_lime_graphics_CanvasRenderContext
#include <lime/graphics/CanvasRenderContext.h>
#endif
#ifndef INCLUDED_lime_utils_ObjectPool_openfl_geom_Point
#include <lime/utils/ObjectPool_openfl_geom_Point.h>
#endif
#ifndef INCLUDED_openfl__Vector_IVector
#include <openfl/_Vector/IVector.h>
#endif
#ifndef INCLUDED_openfl__Vector_ObjectVector
#include <openfl/_Vector/ObjectVector.h>
#endif
#ifndef INCLUDED_openfl__internal_renderer_AbstractFilterManager
#include <openfl/_internal/renderer/AbstractFilterManager.h>
#endif
#ifndef INCLUDED_openfl__internal_renderer_AbstractMaskManager
#include <openfl/_internal/renderer/AbstractMaskManager.h>
#endif
#ifndef INCLUDED_openfl__internal_renderer_RenderSession
#include <openfl/_internal/renderer/RenderSession.h>
#endif
#ifndef INCLUDED_openfl__internal_renderer_cairo_CairoGraphics
#include <openfl/_internal/renderer/cairo/CairoGraphics.h>
#endif
#ifndef INCLUDED_openfl__internal_renderer_canvas_CanvasGraphics
#include <openfl/_internal/renderer/canvas/CanvasGraphics.h>
#endif
#ifndef INCLUDED_openfl_display_Bitmap
#include <openfl/display/Bitmap.h>
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
#ifndef INCLUDED_openfl_display_Shader
#include <openfl/display/Shader.h>
#endif
#ifndef INCLUDED_openfl_display_Stage
#include <openfl/display/Stage.h>
#endif
#ifndef INCLUDED_openfl_errors_Error
#include <openfl/errors/Error.h>
#endif
#ifndef INCLUDED_openfl_errors_RangeError
#include <openfl/errors/RangeError.h>
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
#ifndef INCLUDED_openfl_geom_Matrix
#include <openfl/geom/Matrix.h>
#endif
#ifndef INCLUDED_openfl_geom_Point
#include <openfl/geom/Point.h>
#endif
#ifndef INCLUDED_openfl_geom_Rectangle
#include <openfl/geom/Rectangle.h>
#endif
namespace openfl{
namespace display{

Void DisplayObjectContainer_obj::__construct()
{
{
	super::__construct();
	this->mouseChildren = true;
	this->__children = Array_obj< ::Dynamic >::__new();
	::openfl::_Vector::ObjectVector tmp;
	{
		int length = null();
		bool fixed = null();
		tmp = ::openfl::_Vector::ObjectVector_obj::__new(length,fixed,null());
	}
	this->__removedChildren = tmp;
	::openfl::_Vector::ObjectVector tmp1;
	{
		int length = null();
		bool fixed = null();
		tmp1 = ::openfl::_Vector::ObjectVector_obj::__new(length,fixed,null());
	}
	this->__tempStack = tmp1;
}
;
	return null();
}

//DisplayObjectContainer_obj::~DisplayObjectContainer_obj() { }

Dynamic DisplayObjectContainer_obj::__CreateEmpty() { return  new DisplayObjectContainer_obj; }
hx::ObjectPtr< DisplayObjectContainer_obj > DisplayObjectContainer_obj::__new()
{  hx::ObjectPtr< DisplayObjectContainer_obj > _result_ = new DisplayObjectContainer_obj();
	_result_->__construct();
	return _result_;}

Dynamic DisplayObjectContainer_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< DisplayObjectContainer_obj > _result_ = new DisplayObjectContainer_obj();
	_result_->__construct();
	return _result_;}

::openfl::display::DisplayObject DisplayObjectContainer_obj::addChild( ::openfl::display::DisplayObject child){
	::openfl::display::DisplayObject tmp = child;
	int tmp1 = this->get_numChildren();
	::openfl::display::DisplayObject tmp2 = this->addChildAt(tmp,tmp1);
	return tmp2;
}


HX_DEFINE_DYNAMIC_FUNC1(DisplayObjectContainer_obj,addChild,return )

::openfl::display::DisplayObject DisplayObjectContainer_obj::addChildAt( ::openfl::display::DisplayObject child,int index){
	int tmp = index;
	int tmp1 = this->__children->length;
	bool tmp2 = (tmp > tmp1);
	bool tmp3 = !(tmp2);
	bool tmp4;
	if ((tmp3)){
		tmp4 = (index < (int)0);
	}
	else{
		tmp4 = true;
	}
	if ((tmp4)){
		::String tmp5 = (HX_HCSTRING("Invalid index position ","\x80","\x59","\x50","\x86") + index);
		HX_STACK_DO_THROW(tmp5);
	}
	bool tmp5 = (child->parent == hx::ObjectPtr<OBJ_>(this));
	if ((tmp5)){
		::openfl::display::DisplayObject tmp6 = this->__children->__get(index).StaticCast< ::openfl::display::DisplayObject >();
		::openfl::display::DisplayObject tmp7 = child;
		bool tmp8 = (tmp6 != tmp7);
		if ((tmp8)){
			::openfl::display::DisplayObject tmp9 = child;
			this->__children->remove(tmp9);
			int tmp10 = index;
			::openfl::display::DisplayObject tmp11 = child;
			this->__children->insert(tmp10,tmp11);
		}
	}
	else{
		bool tmp6 = (child->parent != null());
		if ((tmp6)){
			::openfl::display::DisplayObject tmp7 = child;
			child->parent->removeChild(tmp7);
		}
		int tmp7 = index;
		::openfl::display::DisplayObject tmp8 = child;
		this->__children->insert(tmp7,tmp8);
		child->parent = hx::ObjectPtr<OBJ_>(this);
		::openfl::display::Stage tmp9 = this->stage;
		bool tmp10 = (tmp9 != null());
		bool tmp11;
		if ((tmp10)){
			tmp11 = (child->stage == null());
		}
		else{
			tmp11 = false;
		}
		bool addedToStage = tmp11;
		bool tmp12 = addedToStage;
		if ((tmp12)){
			::openfl::display::Stage tmp13 = this->stage;
			this->__setStageReference(tmp13);
		}
		child->__setTransformDirty();
		{
			bool tmp13 = child->__renderDirty;
			bool tmp14 = !(tmp13);
			if ((tmp14)){
				child->__renderDirty = true;
				child->__setParentRenderDirty();
			}
		}
		{
			bool tmp13 = this->__renderDirty;
			bool tmp14 = !(tmp13);
			if ((tmp14)){
				this->__renderDirty = true;
				this->__setParentRenderDirty();
			}
		}
		::openfl::events::Event tmp13 = ::openfl::events::Event_obj::__new(HX_HCSTRING("added","\xc0","\xd4","\x43","\x1c"),true,null());
		::openfl::events::Event event = tmp13;
		event->target = child;
		::openfl::events::Event tmp14 = event;
		child->__dispatchEvent(tmp14);
		bool tmp15 = addedToStage;
		if ((tmp15)){
			::openfl::events::Event tmp16 = ::openfl::events::Event_obj::__new(HX_HCSTRING("addedToStage","\x63","\x22","\x55","\x0c"),false,false);
			::openfl::_Vector::ObjectVector tmp17 = this->__tempStack;
			child->__dispatchChildren(tmp16,tmp17);
			::openfl::_Vector::ObjectVector tmp18 = this->__tempStack;
			tmp18->set_length((int)0);
		}
	}
	::openfl::display::DisplayObject tmp6 = child;
	return tmp6;
}


HX_DEFINE_DYNAMIC_FUNC2(DisplayObjectContainer_obj,addChildAt,return )

bool DisplayObjectContainer_obj::areInaccessibleObjectsUnderPoint( ::openfl::geom::Point point){
	return false;
}


HX_DEFINE_DYNAMIC_FUNC1(DisplayObjectContainer_obj,areInaccessibleObjectsUnderPoint,return )

bool DisplayObjectContainer_obj::contains( ::openfl::display::DisplayObject child){
	while((true)){
		bool tmp = (child != hx::ObjectPtr<OBJ_>(this));
		bool tmp1;
		if ((tmp)){
			tmp1 = (child != null());
		}
		else{
			tmp1 = false;
		}
		bool tmp2 = !(tmp1);
		if ((tmp2)){
			break;
		}
		child = child->parent;
	}
	bool tmp = (child == hx::ObjectPtr<OBJ_>(this));
	return tmp;
}


HX_DEFINE_DYNAMIC_FUNC1(DisplayObjectContainer_obj,contains,return )

::openfl::display::DisplayObject DisplayObjectContainer_obj::getChildAt( int index){
	bool tmp = (index >= (int)0);
	bool tmp1;
	if ((tmp)){
		int tmp2 = index;
		int tmp3 = this->__children->length;
		int tmp4 = tmp3;
		tmp1 = (tmp2 < tmp4);
	}
	else{
		tmp1 = false;
	}
	if ((tmp1)){
		::openfl::display::DisplayObject tmp2 = this->__children->__get(index).StaticCast< ::openfl::display::DisplayObject >();
		return tmp2;
	}
	return null();
}


HX_DEFINE_DYNAMIC_FUNC1(DisplayObjectContainer_obj,getChildAt,return )

::openfl::display::DisplayObject DisplayObjectContainer_obj::getChildByName( ::String name){
	{
		int _g = (int)0;
		Array< ::Dynamic > _g1 = this->__children;
		while((true)){
			bool tmp = (_g < _g1->length);
			bool tmp1 = !(tmp);
			if ((tmp1)){
				break;
			}
			::openfl::display::DisplayObject tmp2 = _g1->__get(_g).StaticCast< ::openfl::display::DisplayObject >();
			::openfl::display::DisplayObject child = tmp2;
			++(_g);
			::String tmp3 = child->get_name();
			::String tmp4 = name;
			bool tmp5 = (tmp3 == tmp4);
			if ((tmp5)){
				::openfl::display::DisplayObject tmp6 = child;
				return tmp6;
			}
		}
	}
	return null();
}


HX_DEFINE_DYNAMIC_FUNC1(DisplayObjectContainer_obj,getChildByName,return )

int DisplayObjectContainer_obj::getChildIndex( ::openfl::display::DisplayObject child){
	{
		int _g1 = (int)0;
		int tmp = this->__children->length;
		int _g = tmp;
		while((true)){
			bool tmp1 = (_g1 < _g);
			bool tmp2 = !(tmp1);
			if ((tmp2)){
				break;
			}
			int tmp3 = (_g1)++;
			int i = tmp3;
			::openfl::display::DisplayObject tmp4 = this->__children->__get(i).StaticCast< ::openfl::display::DisplayObject >();
			::openfl::display::DisplayObject tmp5 = child;
			bool tmp6 = (tmp4 == tmp5);
			if ((tmp6)){
				int tmp7 = i;
				return tmp7;
			}
		}
	}
	return (int)-1;
}


HX_DEFINE_DYNAMIC_FUNC1(DisplayObjectContainer_obj,getChildIndex,return )

Array< ::Dynamic > DisplayObjectContainer_obj::getObjectsUnderPoint( ::openfl::geom::Point point){
	Array< ::Dynamic > stack = Array_obj< ::Dynamic >::__new();
	Float tmp = point->x;
	Float tmp1 = point->y;
	this->__hitTest(tmp,tmp1,false,stack,false,hx::ObjectPtr<OBJ_>(this));
	stack->reverse();
	return stack;
}


HX_DEFINE_DYNAMIC_FUNC1(DisplayObjectContainer_obj,getObjectsUnderPoint,return )

::openfl::display::DisplayObject DisplayObjectContainer_obj::removeChild( ::openfl::display::DisplayObject child){
	bool tmp = (child != null());
	bool tmp1;
	if ((tmp)){
		tmp1 = (child->parent == hx::ObjectPtr<OBJ_>(this));
	}
	else{
		tmp1 = false;
	}
	if ((tmp1)){
		child->__setTransformDirty();
		{
			bool tmp2 = child->__renderDirty;
			bool tmp3 = !(tmp2);
			if ((tmp3)){
				child->__renderDirty = true;
				child->__setParentRenderDirty();
			}
		}
		{
			bool tmp2 = this->__renderDirty;
			bool tmp3 = !(tmp2);
			if ((tmp3)){
				this->__renderDirty = true;
				this->__setParentRenderDirty();
			}
		}
		::openfl::events::Event tmp2 = ::openfl::events::Event_obj::__new(HX_HCSTRING("removed","\xa0","\x1f","\x00","\xf3"),true,null());
		child->__dispatchEvent(tmp2);
		::openfl::display::Stage tmp3 = this->stage;
		bool tmp4 = (tmp3 != null());
		if ((tmp4)){
			bool tmp5 = (child->stage != null());
			bool tmp6;
			if ((tmp5)){
				::openfl::display::Stage tmp7 = this->stage;
				::openfl::display::Stage tmp8 = tmp7;
				::openfl::display::InteractiveObject tmp9 = tmp8->get_focus();
				::openfl::display::InteractiveObject tmp10 = tmp9;
				::openfl::display::DisplayObject tmp11 = child;
				tmp6 = (tmp10 == tmp11);
			}
			else{
				tmp6 = false;
			}
			if ((tmp6)){
				::openfl::display::Stage tmp7 = this->stage;
				tmp7->set_focus(null());
			}
			::openfl::events::Event tmp7 = ::openfl::events::Event_obj::__new(HX_HCSTRING("removedFromStage","\x34","\x21","\x76","\xba"),false,false);
			::openfl::_Vector::ObjectVector tmp8 = this->__tempStack;
			child->__dispatchChildren(tmp7,tmp8);
			::openfl::_Vector::ObjectVector tmp9 = this->__tempStack;
			tmp9->set_length((int)0);
			child->__setStageReference(null());
		}
		child->parent = null();
		::openfl::display::DisplayObject tmp5 = child;
		this->__children->remove(tmp5);
		::openfl::_Vector::ObjectVector tmp6 = this->__removedChildren;
		::openfl::display::DisplayObject tmp7 = child;
		tmp6->push(tmp7);
		child->__setTransformDirty();
	}
	::openfl::display::DisplayObject tmp2 = child;
	return tmp2;
}


HX_DEFINE_DYNAMIC_FUNC1(DisplayObjectContainer_obj,removeChild,return )

::openfl::display::DisplayObject DisplayObjectContainer_obj::removeChildAt( int index){
	bool tmp = (index >= (int)0);
	bool tmp1;
	if ((tmp)){
		int tmp2 = index;
		int tmp3 = this->__children->length;
		int tmp4 = tmp3;
		tmp1 = (tmp2 < tmp4);
	}
	else{
		tmp1 = false;
	}
	if ((tmp1)){
		::openfl::display::DisplayObject tmp2 = this->__children->__get(index).StaticCast< ::openfl::display::DisplayObject >();
		::openfl::display::DisplayObject tmp3 = this->removeChild(tmp2);
		return tmp3;
	}
	return null();
}


HX_DEFINE_DYNAMIC_FUNC1(DisplayObjectContainer_obj,removeChildAt,return )

Void DisplayObjectContainer_obj::removeChildren( hx::Null< int >  __o_beginIndex,hx::Null< int >  __o_endIndex){
int beginIndex = __o_beginIndex.Default(0);
int endIndex = __o_endIndex.Default(2147483647);
{
		bool tmp = (endIndex == (int)2147483647);
		if ((tmp)){
			int tmp1 = this->__children->length;
			int tmp2 = (tmp1 - (int)1);
			endIndex = tmp2;
			bool tmp3 = (endIndex < (int)0);
			if ((tmp3)){
				return null();
			}
		}
		int tmp1 = beginIndex;
		int tmp2 = this->__children->length;
		int tmp3 = (tmp2 - (int)1);
		bool tmp4 = (tmp1 > tmp3);
		if ((tmp4)){
			return null();
		}
		else{
			bool tmp5 = (endIndex < beginIndex);
			bool tmp6 = !(tmp5);
			bool tmp7 = tmp6;
			bool tmp8;
			if ((tmp7)){
				tmp8 = (beginIndex < (int)0);
			}
			else{
				tmp8 = true;
			}
			bool tmp9 = !(tmp8);
			bool tmp10;
			if ((tmp9)){
				int tmp11 = endIndex;
				int tmp12 = this->__children->length;
				int tmp13 = tmp12;
				tmp10 = (tmp11 > tmp13);
			}
			else{
				tmp10 = true;
			}
			if ((tmp10)){
				::openfl::errors::RangeError tmp11 = ::openfl::errors::RangeError_obj::__new(HX_HCSTRING("The supplied index is out of bounds.","\x17","\x96","\x1b","\x51"));
				HX_STACK_DO_THROW(tmp11);
			}
		}
		int tmp5 = (endIndex - beginIndex);
		int numRemovals = tmp5;
		while((true)){
			bool tmp6 = (numRemovals >= (int)0);
			bool tmp7 = !(tmp6);
			if ((tmp7)){
				break;
			}
			int tmp8 = beginIndex;
			this->removeChildAt(tmp8);
			(numRemovals)--;
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(DisplayObjectContainer_obj,removeChildren,(void))

::openfl::display::DisplayObject DisplayObjectContainer_obj::resolve( ::String fieldName){
	bool tmp = (this->__children == null());
	if ((tmp)){
		return null();
	}
	{
		int _g = (int)0;
		Array< ::Dynamic > _g1 = this->__children;
		while((true)){
			bool tmp1 = (_g < _g1->length);
			bool tmp2 = !(tmp1);
			if ((tmp2)){
				break;
			}
			::openfl::display::DisplayObject tmp3 = _g1->__get(_g).StaticCast< ::openfl::display::DisplayObject >();
			::openfl::display::DisplayObject child = tmp3;
			++(_g);
			::String tmp4 = child->get_name();
			::String tmp5 = fieldName;
			bool tmp6 = (tmp4 == tmp5);
			if ((tmp6)){
				::openfl::display::DisplayObject tmp7 = child;
				return tmp7;
			}
		}
	}
	return null();
}


HX_DEFINE_DYNAMIC_FUNC1(DisplayObjectContainer_obj,resolve,return )

Void DisplayObjectContainer_obj::setChildIndex( ::openfl::display::DisplayObject child,int index){
{
		bool tmp = (index >= (int)0);
		bool tmp1 = tmp;
		bool tmp2;
		if ((tmp1)){
			int tmp3 = index;
			int tmp4 = this->__children->length;
			int tmp5 = tmp4;
			int tmp6 = tmp5;
			tmp2 = (tmp3 <= tmp6);
		}
		else{
			tmp2 = false;
		}
		bool tmp3;
		if ((tmp2)){
			tmp3 = (child->parent == hx::ObjectPtr<OBJ_>(this));
		}
		else{
			tmp3 = false;
		}
		if ((tmp3)){
			::openfl::display::DisplayObject tmp4 = child;
			this->__children->remove(tmp4);
			int tmp5 = index;
			::openfl::display::DisplayObject tmp6 = child;
			this->__children->insert(tmp5,tmp6);
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(DisplayObjectContainer_obj,setChildIndex,(void))

Void DisplayObjectContainer_obj::stopAllMovieClips( ){
{
		this->__stopAllMovieClips();
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(DisplayObjectContainer_obj,stopAllMovieClips,(void))

Void DisplayObjectContainer_obj::swapChildren( ::openfl::display::DisplayObject child1,::openfl::display::DisplayObject child2){
{
		bool tmp = (child1->parent == hx::ObjectPtr<OBJ_>(this));
		bool tmp1;
		if ((tmp)){
			tmp1 = (child2->parent == hx::ObjectPtr<OBJ_>(this));
		}
		else{
			tmp1 = false;
		}
		if ((tmp1)){
			::openfl::display::DisplayObject tmp2 = child1;
			int tmp3 = this->__children->indexOf(tmp2,null());
			int index1 = tmp3;
			::openfl::display::DisplayObject tmp4 = child2;
			int tmp5 = this->__children->indexOf(tmp4,null());
			int index2 = tmp5;
			::openfl::display::DisplayObject tmp6 = child2;
			this->__children[index1] = tmp6;
			::openfl::display::DisplayObject tmp7 = child1;
			this->__children[index2] = tmp7;
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(DisplayObjectContainer_obj,swapChildren,(void))

Void DisplayObjectContainer_obj::swapChildrenAt( int index1,int index2){
{
		::openfl::display::DisplayObject tmp = this->__children->__get(index1).StaticCast< ::openfl::display::DisplayObject >();
		::openfl::display::DisplayObject swap = tmp;
		::openfl::display::DisplayObject tmp1 = this->__children->__get(index2).StaticCast< ::openfl::display::DisplayObject >();
		this->__children[index1] = tmp1;
		::openfl::display::DisplayObject tmp2 = swap;
		this->__children[index2] = tmp2;
		swap = null();
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(DisplayObjectContainer_obj,swapChildrenAt,(void))

bool DisplayObjectContainer_obj::__dispatchChildren( ::openfl::events::Event event,::openfl::_Vector::ObjectVector stack){
	::openfl::events::Event tmp = event;
	::openfl::_Vector::ObjectVector tmp1 = stack;
	bool tmp2 = this->super::__dispatchChildren(tmp,tmp1);
	bool success = tmp2;
	bool tmp3 = success;
	bool tmp4;
	if ((tmp3)){
		tmp4 = (this->__children != null());
	}
	else{
		tmp4 = false;
	}
	if ((tmp4)){
		int _g = (int)0;
		Array< ::Dynamic > _g1 = this->__children;
		while((true)){
			bool tmp5 = (_g < _g1->length);
			bool tmp6 = !(tmp5);
			if ((tmp6)){
				break;
			}
			::openfl::display::DisplayObject tmp7 = _g1->__get(_g).StaticCast< ::openfl::display::DisplayObject >();
			::openfl::display::DisplayObject child = tmp7;
			++(_g);
			::openfl::events::Event tmp8 = event;
			::openfl::_Vector::ObjectVector tmp9 = stack;
			bool tmp10 = child->__dispatchChildren(tmp8,tmp9);
			bool tmp11 = !(tmp10);
			if ((tmp11)){
				return false;
			}
		}
	}
	bool tmp5 = success;
	return tmp5;
}


Void DisplayObjectContainer_obj::__enterFrame( int deltaTime){
{
		int _g = (int)0;
		Array< ::Dynamic > _g1 = this->__children;
		while((true)){
			bool tmp = (_g < _g1->length);
			bool tmp1 = !(tmp);
			if ((tmp1)){
				break;
			}
			::openfl::display::DisplayObject tmp2 = _g1->__get(_g).StaticCast< ::openfl::display::DisplayObject >();
			::openfl::display::DisplayObject child = tmp2;
			++(_g);
			int tmp3 = deltaTime;
			child->__enterFrame(tmp3);
		}
	}
return null();
}


Void DisplayObjectContainer_obj::__getBounds( ::openfl::geom::Rectangle rect,::openfl::geom::Matrix matrix){
{
		::openfl::geom::Rectangle tmp = rect;
		::openfl::geom::Matrix tmp1 = matrix;
		this->super::__getBounds(tmp,tmp1);
		int tmp2 = this->__children->length;
		bool tmp3 = (tmp2 == (int)0);
		if ((tmp3)){
			return null();
		}
		bool tmp4 = (matrix != null());
		if ((tmp4)){
			::openfl::geom::Matrix tmp5 = matrix;
			this->__updateTransforms(tmp5);
			this->__updateChildren(true);
		}
		{
			int _g = (int)0;
			Array< ::Dynamic > _g1 = this->__children;
			while((true)){
				bool tmp5 = (_g < _g1->length);
				bool tmp6 = !(tmp5);
				if ((tmp6)){
					break;
				}
				::openfl::display::DisplayObject tmp7 = _g1->__get(_g).StaticCast< ::openfl::display::DisplayObject >();
				::openfl::display::DisplayObject child = tmp7;
				++(_g);
				bool tmp8 = (child->__scaleX == (int)0);
				bool tmp9 = !(tmp8);
				bool tmp10;
				if ((tmp9)){
					tmp10 = (child->__scaleY == (int)0);
				}
				else{
					tmp10 = true;
				}
				if ((tmp10)){
					continue;
				}
				::openfl::geom::Rectangle tmp11 = rect;
				::openfl::geom::Matrix tmp12 = child->__worldTransform;
				child->__getBounds(tmp11,tmp12);
			}
		}
		bool tmp5 = (matrix != null());
		if ((tmp5)){
			this->__updateTransforms(null());
			this->__updateChildren(true);
		}
	}
return null();
}


Void DisplayObjectContainer_obj::__getRenderBounds( ::openfl::geom::Rectangle rect,::openfl::geom::Matrix matrix){
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
		int tmp2 = this->__children->length;
		bool tmp3 = (tmp2 == (int)0);
		if ((tmp3)){
			return null();
		}
		bool tmp4 = (matrix != null());
		if ((tmp4)){
			::openfl::geom::Matrix tmp5 = matrix;
			this->__updateTransforms(tmp5);
			this->__updateChildren(true);
		}
		{
			int _g = (int)0;
			Array< ::Dynamic > _g1 = this->__children;
			while((true)){
				bool tmp5 = (_g < _g1->length);
				bool tmp6 = !(tmp5);
				if ((tmp6)){
					break;
				}
				::openfl::display::DisplayObject tmp7 = _g1->__get(_g).StaticCast< ::openfl::display::DisplayObject >();
				::openfl::display::DisplayObject child = tmp7;
				++(_g);
				bool tmp8 = (child->__scaleX == (int)0);
				bool tmp9 = !(tmp8);
				bool tmp10 = tmp9;
				bool tmp11;
				if ((tmp10)){
					tmp11 = (child->__scaleY == (int)0);
				}
				else{
					tmp11 = true;
				}
				bool tmp12 = !(tmp11);
				bool tmp13;
				if ((tmp12)){
					tmp13 = child->__isMask;
				}
				else{
					tmp13 = true;
				}
				if ((tmp13)){
					continue;
				}
				::openfl::geom::Rectangle tmp14 = rect;
				::openfl::geom::Matrix tmp15 = child->__worldTransform;
				child->__getRenderBounds(tmp14,tmp15);
			}
		}
		bool tmp5 = (matrix != null());
		if ((tmp5)){
			this->__updateTransforms(null());
			this->__updateChildren(true);
		}
	}
return null();
}


bool DisplayObjectContainer_obj::__hitTest( Float x,Float y,bool shapeFlag,Array< ::Dynamic > stack,bool interactiveOnly,::openfl::display::DisplayObject hitObject){
	bool tmp = hitObject->get_visible();
	bool tmp1 = tmp;
	bool tmp2 = !(tmp1);
	bool tmp3 = !(tmp2);
	bool tmp4 = tmp3;
	bool tmp5;
	if ((tmp4)){
		tmp5 = this->__isMask;
	}
	else{
		tmp5 = true;
	}
	bool tmp6 = !(tmp5);
	bool tmp7;
	if ((tmp6)){
		bool tmp8 = interactiveOnly;
		bool tmp9 = tmp8;
		bool tmp10;
		bool tmp11 = tmp9;
		if ((tmp11)){
			bool tmp12 = this->mouseEnabled;
			bool tmp13 = tmp12;
			bool tmp14 = tmp13;
			bool tmp15 = tmp14;
			bool tmp16 = tmp15;
			bool tmp17 = tmp16;
			bool tmp18 = tmp17;
			bool tmp19 = !(tmp18);
			tmp10 = tmp19;
		}
		else{
			tmp10 = false;
		}
		bool tmp12 = tmp10;
		if ((tmp12)){
			bool tmp13 = this->mouseChildren;
			bool tmp14 = tmp13;
			bool tmp15 = tmp14;
			bool tmp16 = tmp15;
			bool tmp17 = tmp16;
			tmp7 = !(tmp17);
		}
		else{
			tmp7 = false;
		}
	}
	else{
		tmp7 = true;
	}
	if ((tmp7)){
		return false;
	}
	::openfl::display::DisplayObject tmp8 = this->get_mask();
	bool tmp9 = (tmp8 != null());
	bool tmp10;
	if ((tmp9)){
		::openfl::display::DisplayObject tmp11 = this->get_mask();
		::openfl::display::DisplayObject tmp12 = tmp11;
		Float tmp13 = x;
		Float tmp14 = y;
		Float tmp15 = tmp13;
		Float tmp16 = tmp14;
		bool tmp17 = tmp12->__hitTestMask(tmp15,tmp16);
		bool tmp18 = tmp17;
		bool tmp19 = tmp18;
		tmp10 = !(tmp19);
	}
	else{
		tmp10 = false;
	}
	if ((tmp10)){
		return false;
	}
	::openfl::geom::Rectangle tmp11 = this->__scrollRect;
	bool tmp12 = (tmp11 != null());
	if ((tmp12)){
		::lime::utils::ObjectPool_openfl_geom_Point tmp13 = ::openfl::geom::Point_obj::__pool;
		::openfl::geom::Point tmp14 = tmp13->get();
		::openfl::geom::Point point = tmp14;
		Float tmp15 = x;
		Float tmp16 = y;
		point->setTo(tmp15,tmp16);
		{
			::openfl::geom::Matrix tmp17 = this->__getRenderTransform();
			::openfl::geom::Matrix _this = tmp17;
			Float tmp18 = (_this->a * _this->d);
			Float tmp19 = (_this->b * _this->c);
			Float tmp20 = (tmp18 - tmp19);
			Float norm = tmp20;
			bool tmp21 = (norm == (int)0);
			if ((tmp21)){
				Float tmp22 = _this->tx;
				Float tmp23 = -(tmp22);
				point->x = tmp23;
				Float tmp24 = _this->ty;
				Float tmp25 = -(tmp24);
				point->y = tmp25;
			}
			else{
				Float tmp22 = (Float(((Float)1.0)) / Float(norm));
				Float tmp23 = _this->c;
				Float tmp24 = (_this->ty - point->y);
				Float tmp25 = (tmp23 * tmp24);
				Float tmp26 = _this->d;
				Float tmp27 = (point->x - _this->tx);
				Float tmp28 = (tmp26 * tmp27);
				Float tmp29 = (tmp25 + tmp28);
				Float tmp30 = (tmp22 * tmp29);
				Float px = tmp30;
				Float tmp31 = (Float(((Float)1.0)) / Float(norm));
				Float tmp32 = _this->a;
				Float tmp33 = (point->y - _this->ty);
				Float tmp34 = (tmp32 * tmp33);
				Float tmp35 = _this->b;
				Float tmp36 = (_this->tx - point->x);
				Float tmp37 = (tmp35 * tmp36);
				Float tmp38 = (tmp34 + tmp37);
				Float tmp39 = (tmp31 * tmp38);
				point->y = tmp39;
				point->x = px;
			}
		}
		::openfl::geom::Rectangle tmp17 = this->__scrollRect;
		::openfl::geom::Point tmp18 = point;
		bool tmp19 = tmp17->containsPoint(tmp18);
		bool tmp20 = !(tmp19);
		if ((tmp20)){
			::lime::utils::ObjectPool_openfl_geom_Point tmp21 = ::openfl::geom::Point_obj::__pool;
			::openfl::geom::Point tmp22 = point;
			tmp21->release(tmp22);
			return false;
		}
		::lime::utils::ObjectPool_openfl_geom_Point tmp21 = ::openfl::geom::Point_obj::__pool;
		::openfl::geom::Point tmp22 = point;
		tmp21->release(tmp22);
	}
	int tmp13 = this->__children->length;
	int i = tmp13;
	bool tmp14 = interactiveOnly;
	if ((tmp14)){
		bool tmp15 = (stack == null());
		bool tmp16 = !(tmp15);
		bool tmp17;
		if ((tmp16)){
			bool tmp18 = this->mouseChildren;
			bool tmp19 = tmp18;
			bool tmp20 = tmp19;
			tmp17 = !(tmp20);
		}
		else{
			tmp17 = true;
		}
		if ((tmp17)){
			while((true)){
				int tmp18 = --(i);
				bool tmp19 = (tmp18 >= (int)0);
				bool tmp20 = !(tmp19);
				if ((tmp20)){
					break;
				}
				::openfl::display::DisplayObject tmp21 = this->__children->__get(i).StaticCast< ::openfl::display::DisplayObject >();
				Float tmp22 = x;
				Float tmp23 = y;
				bool tmp24 = shapeFlag;
				::openfl::display::DisplayObject tmp25 = this->__children->__get(i).StaticCast< ::openfl::display::DisplayObject >();
				::openfl::display::DisplayObject tmp26 = tmp25;
				bool tmp27 = tmp21->__hitTest(tmp22,tmp23,tmp24,null(),true,tmp26);
				if ((tmp27)){
					bool tmp28 = (stack != null());
					if ((tmp28)){
						::openfl::display::DisplayObject tmp29 = hitObject;
						stack->push(tmp29);
					}
					return true;
				}
			}
		}
		else{
			bool tmp18 = (stack != null());
			if ((tmp18)){
				int length = stack->length;
				bool interactive = false;
				bool hitTest = false;
				while((true)){
					int tmp19 = --(i);
					bool tmp20 = (tmp19 >= (int)0);
					bool tmp21 = !(tmp20);
					if ((tmp21)){
						break;
					}
					::openfl::display::DisplayObject tmp22 = this->__children->__get(i).StaticCast< ::openfl::display::DisplayObject >();
					bool tmp23 = tmp22->__getInteractive(null());
					interactive = tmp23;
					bool tmp24 = interactive;
					bool tmp25 = !(tmp24);
					bool tmp26;
					if ((tmp25)){
						bool tmp27 = this->mouseEnabled;
						bool tmp28 = tmp27;
						bool tmp29 = tmp28;
						if ((tmp29)){
							bool tmp30 = hitTest;
							bool tmp31 = tmp30;
							bool tmp32 = tmp31;
							tmp26 = !(tmp32);
						}
						else{
							tmp26 = false;
						}
					}
					else{
						tmp26 = true;
					}
					if ((tmp26)){
						::openfl::display::DisplayObject tmp27 = this->__children->__get(i).StaticCast< ::openfl::display::DisplayObject >();
						Float tmp28 = x;
						Float tmp29 = y;
						bool tmp30 = shapeFlag;
						::openfl::display::DisplayObject tmp31 = this->__children->__get(i).StaticCast< ::openfl::display::DisplayObject >();
						::openfl::display::DisplayObject tmp32 = tmp31;
						bool tmp33 = tmp27->__hitTest(tmp28,tmp29,tmp30,stack,true,tmp32);
						if ((tmp33)){
							hitTest = true;
							bool tmp34 = interactive;
							if ((tmp34)){
								break;
							}
						}
					}
				}
				bool tmp19 = hitTest;
				if ((tmp19)){
					int tmp20 = length;
					::openfl::display::DisplayObject tmp21 = hitObject;
					stack->insert(tmp20,tmp21);
					return true;
				}
			}
		}
	}
	else{
		while((true)){
			int tmp15 = --(i);
			bool tmp16 = (tmp15 >= (int)0);
			bool tmp17 = !(tmp16);
			if ((tmp17)){
				break;
			}
			::openfl::display::DisplayObject tmp18 = this->__children->__get(i).StaticCast< ::openfl::display::DisplayObject >();
			Float tmp19 = x;
			Float tmp20 = y;
			bool tmp21 = shapeFlag;
			::openfl::display::DisplayObject tmp22 = this->__children->__get(i).StaticCast< ::openfl::display::DisplayObject >();
			::openfl::display::DisplayObject tmp23 = tmp22;
			tmp18->__hitTest(tmp19,tmp20,tmp21,stack,false,tmp23);
		}
	}
	return false;
}


bool DisplayObjectContainer_obj::__hitTestMask( Float x,Float y){
	int tmp = this->__children->length;
	int i = tmp;
	while((true)){
		int tmp1 = --(i);
		bool tmp2 = (tmp1 >= (int)0);
		bool tmp3 = !(tmp2);
		if ((tmp3)){
			break;
		}
		::openfl::display::DisplayObject tmp4 = this->__children->__get(i).StaticCast< ::openfl::display::DisplayObject >();
		Float tmp5 = x;
		Float tmp6 = y;
		bool tmp7 = tmp4->__hitTestMask(tmp5,tmp6);
		if ((tmp7)){
			return true;
		}
	}
	return false;
}


Void DisplayObjectContainer_obj::__readGraphicsData( ::openfl::_Vector::ObjectVector graphicsData,bool recurse){
{
		::openfl::_Vector::ObjectVector tmp = graphicsData;
		bool tmp1 = recurse;
		this->super::__readGraphicsData(tmp,tmp1);
		bool tmp2 = recurse;
		if ((tmp2)){
			int _g = (int)0;
			Array< ::Dynamic > _g1 = this->__children;
			while((true)){
				bool tmp3 = (_g < _g1->length);
				bool tmp4 = !(tmp3);
				if ((tmp4)){
					break;
				}
				::openfl::display::DisplayObject tmp5 = _g1->__get(_g).StaticCast< ::openfl::display::DisplayObject >();
				::openfl::display::DisplayObject child = tmp5;
				++(_g);
				::openfl::_Vector::ObjectVector tmp6 = graphicsData;
				bool tmp7 = recurse;
				child->__readGraphicsData(tmp6,tmp7);
			}
		}
	}
return null();
}


Void DisplayObjectContainer_obj::__renderCairo( ::openfl::_internal::renderer::RenderSession renderSession){
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
		::openfl::_internal::renderer::RenderSession tmp5 = renderSession;
		this->super::__renderCairo(tmp5);
		::openfl::display::Bitmap tmp6 = this->__cacheBitmap;
		bool tmp7 = (tmp6 != null());
		bool tmp8;
		if ((tmp7)){
			bool tmp9 = this->__cacheBitmapRender;
			bool tmp10 = tmp9;
			bool tmp11 = tmp10;
			tmp8 = !(tmp11);
		}
		else{
			tmp8 = false;
		}
		if ((tmp8)){
			return null();
		}
		renderSession->maskManager->pushObject(hx::ObjectPtr<OBJ_>(this),null());
		bool tmp9 = renderSession->clearDirtyFlags;
		if ((tmp9)){
			{
				int _g = (int)0;
				Array< ::Dynamic > _g1 = this->__children;
				while((true)){
					bool tmp10 = (_g < _g1->length);
					bool tmp11 = !(tmp10);
					if ((tmp11)){
						break;
					}
					::openfl::display::DisplayObject tmp12 = _g1->__get(_g).StaticCast< ::openfl::display::DisplayObject >();
					::openfl::display::DisplayObject child = tmp12;
					++(_g);
					::openfl::_internal::renderer::RenderSession tmp13 = renderSession;
					child->__renderCairo(tmp13);
					child->__renderDirty = false;
				}
			}
			this->__renderDirty = false;
		}
		else{
			int _g = (int)0;
			Array< ::Dynamic > _g1 = this->__children;
			while((true)){
				bool tmp10 = (_g < _g1->length);
				bool tmp11 = !(tmp10);
				if ((tmp11)){
					break;
				}
				::openfl::display::DisplayObject tmp12 = _g1->__get(_g).StaticCast< ::openfl::display::DisplayObject >();
				::openfl::display::DisplayObject child = tmp12;
				++(_g);
				::openfl::_internal::renderer::RenderSession tmp13 = renderSession;
				child->__renderCairo(tmp13);
			}
		}
		{
			int _g = (int)0;
			::openfl::_Vector::ObjectVector tmp10 = this->__removedChildren;
			::openfl::_Vector::ObjectVector _g1 = tmp10;
			while((true)){
				int tmp11 = _g;
				int tmp12 = _g1->get_length();
				bool tmp13 = (tmp11 < tmp12);
				bool tmp14 = !(tmp13);
				if ((tmp14)){
					break;
				}
				int tmp15 = _g;
				::openfl::display::DisplayObject tmp16 = _g1->get(tmp15);
				::openfl::display::DisplayObject orphan = tmp16;
				++(_g);
				bool tmp17 = (orphan->stage == null());
				if ((tmp17)){
					orphan->__cleanup();
				}
			}
		}
		::openfl::_Vector::ObjectVector tmp10 = this->__removedChildren;
		tmp10->set_length((int)0);
		renderSession->maskManager->popObject(hx::ObjectPtr<OBJ_>(this),null());
	}
return null();
}


Void DisplayObjectContainer_obj::__renderCairoMask( ::openfl::_internal::renderer::RenderSession renderSession){
{
		::openfl::display::Graphics tmp = this->__graphics;
		bool tmp1 = (tmp != null());
		if ((tmp1)){
			::openfl::display::Graphics tmp2 = this->__graphics;
			::openfl::_internal::renderer::RenderSession tmp3 = renderSession;
			::openfl::_internal::renderer::cairo::CairoGraphics_obj::renderMask(tmp2,tmp3);
		}
		{
			int _g = (int)0;
			Array< ::Dynamic > _g1 = this->__children;
			while((true)){
				bool tmp2 = (_g < _g1->length);
				bool tmp3 = !(tmp2);
				if ((tmp3)){
					break;
				}
				::openfl::display::DisplayObject tmp4 = _g1->__get(_g).StaticCast< ::openfl::display::DisplayObject >();
				::openfl::display::DisplayObject child = tmp4;
				++(_g);
				::openfl::_internal::renderer::RenderSession tmp5 = renderSession;
				child->__renderCairoMask(tmp5);
			}
		}
	}
return null();
}


Void DisplayObjectContainer_obj::__renderCanvas( ::openfl::_internal::renderer::RenderSession renderSession){
{
		bool tmp = this->__renderable;
		bool tmp1 = tmp;
		bool tmp2 = !(tmp1);
		bool tmp3 = !(tmp2);
		bool tmp4 = tmp3;
		bool tmp5;
		if ((tmp4)){
			Float tmp6 = this->__worldAlpha;
			Float tmp7 = tmp6;
			Float tmp8 = tmp7;
			tmp5 = (tmp8 <= (int)0);
		}
		else{
			tmp5 = true;
		}
		bool tmp6 = !(tmp5);
		bool tmp7;
		if ((tmp6)){
			::openfl::display::DisplayObject tmp8 = this->get_mask();
			::openfl::display::DisplayObject tmp9 = tmp8;
			bool tmp10 = (tmp9 != null());
			bool tmp11 = tmp10;
			bool tmp12 = tmp11;
			if ((tmp12)){
				::openfl::display::DisplayObject tmp13 = this->get_mask();
				::openfl::display::DisplayObject tmp14 = tmp13;
				::openfl::display::DisplayObject tmp15 = tmp14;
				Float tmp16 = tmp15->get_width();
				Float tmp17 = tmp16;
				Float tmp18 = tmp17;
				bool tmp19 = (tmp18 <= (int)0);
				bool tmp20 = tmp19;
				bool tmp21 = tmp20;
				bool tmp22 = tmp21;
				bool tmp23 = tmp22;
				bool tmp24 = !(tmp23);
				bool tmp25 = tmp24;
				bool tmp26 = tmp25;
				bool tmp27 = tmp26;
				bool tmp28 = tmp27;
				if ((tmp28)){
					::openfl::display::DisplayObject tmp29 = this->get_mask();
					::openfl::display::DisplayObject tmp30 = tmp29;
					::openfl::display::DisplayObject tmp31 = tmp30;
					::openfl::display::DisplayObject tmp32 = tmp31;
					Float tmp33 = tmp32->get_height();
					Float tmp34 = tmp33;
					Float tmp35 = tmp34;
					Float tmp36 = tmp35;
					tmp7 = (tmp36 <= (int)0);
				}
				else{
					tmp7 = true;
				}
			}
			else{
				tmp7 = false;
			}
		}
		else{
			tmp7 = true;
		}
		if ((tmp7)){
			return null();
		}
		::openfl::_internal::renderer::RenderSession tmp8 = renderSession;
		this->super::__renderCanvas(tmp8);
		::openfl::display::Bitmap tmp9 = this->__cacheBitmap;
		bool tmp10 = (tmp9 != null());
		bool tmp11;
		if ((tmp10)){
			bool tmp12 = this->__cacheBitmapRender;
			bool tmp13 = tmp12;
			bool tmp14 = tmp13;
			tmp11 = !(tmp14);
		}
		else{
			tmp11 = false;
		}
		if ((tmp11)){
			return null();
		}
		renderSession->maskManager->pushObject(hx::ObjectPtr<OBJ_>(this),null());
		bool tmp12 = renderSession->clearDirtyFlags;
		if ((tmp12)){
			{
				int _g = (int)0;
				Array< ::Dynamic > _g1 = this->__children;
				while((true)){
					bool tmp13 = (_g < _g1->length);
					bool tmp14 = !(tmp13);
					if ((tmp14)){
						break;
					}
					::openfl::display::DisplayObject tmp15 = _g1->__get(_g).StaticCast< ::openfl::display::DisplayObject >();
					::openfl::display::DisplayObject child = tmp15;
					++(_g);
					::openfl::_internal::renderer::RenderSession tmp16 = renderSession;
					child->__renderCanvas(tmp16);
					child->__renderDirty = false;
				}
			}
			this->__renderDirty = false;
		}
		else{
			int _g = (int)0;
			Array< ::Dynamic > _g1 = this->__children;
			while((true)){
				bool tmp13 = (_g < _g1->length);
				bool tmp14 = !(tmp13);
				if ((tmp14)){
					break;
				}
				::openfl::display::DisplayObject tmp15 = _g1->__get(_g).StaticCast< ::openfl::display::DisplayObject >();
				::openfl::display::DisplayObject child = tmp15;
				++(_g);
				::openfl::_internal::renderer::RenderSession tmp16 = renderSession;
				child->__renderCanvas(tmp16);
			}
		}
		{
			int _g = (int)0;
			::openfl::_Vector::ObjectVector tmp13 = this->__removedChildren;
			::openfl::_Vector::ObjectVector _g1 = tmp13;
			while((true)){
				int tmp14 = _g;
				int tmp15 = _g1->get_length();
				bool tmp16 = (tmp14 < tmp15);
				bool tmp17 = !(tmp16);
				if ((tmp17)){
					break;
				}
				int tmp18 = _g;
				::openfl::display::DisplayObject tmp19 = _g1->get(tmp18);
				::openfl::display::DisplayObject orphan = tmp19;
				++(_g);
				bool tmp20 = (orphan->stage == null());
				if ((tmp20)){
					orphan->__cleanup();
				}
			}
		}
		::openfl::_Vector::ObjectVector tmp13 = this->__removedChildren;
		tmp13->set_length((int)0);
		renderSession->maskManager->popObject(hx::ObjectPtr<OBJ_>(this),null());
	}
return null();
}


Void DisplayObjectContainer_obj::__renderCanvasMask( ::openfl::_internal::renderer::RenderSession renderSession){
{
		::openfl::display::Graphics tmp = this->__graphics;
		bool tmp1 = (tmp != null());
		if ((tmp1)){
			::openfl::display::Graphics tmp2 = this->__graphics;
			::openfl::_internal::renderer::RenderSession tmp3 = renderSession;
			::openfl::_internal::renderer::canvas::CanvasGraphics_obj::renderMask(tmp2,tmp3);
		}
		::openfl::geom::Rectangle tmp2 = ::openfl::geom::Rectangle_obj::__new(null(),null(),null(),null());
		::openfl::geom::Rectangle bounds = tmp2;
		::openfl::geom::Rectangle tmp3 = bounds;
		this->__getLocalBounds(tmp3);
		Float tmp4 = bounds->width;
		Float tmp5 = bounds->height;
		renderSession->context->rect((int)0,(int)0,tmp4,tmp5);
	}
return null();
}


Void DisplayObjectContainer_obj::__renderDOM( ::openfl::_internal::renderer::RenderSession renderSession){
{
	}
return null();
}


Void DisplayObjectContainer_obj::__renderGL( ::openfl::_internal::renderer::RenderSession renderSession){
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
		::openfl::_internal::renderer::RenderSession tmp5 = renderSession;
		this->super::__renderGL(tmp5);
		::openfl::display::Bitmap tmp6 = this->__cacheBitmap;
		bool tmp7 = (tmp6 != null());
		bool tmp8;
		if ((tmp7)){
			bool tmp9 = this->__cacheBitmapRender;
			bool tmp10 = tmp9;
			bool tmp11 = tmp10;
			tmp8 = !(tmp11);
		}
		else{
			tmp8 = false;
		}
		if ((tmp8)){
			return null();
		}
		renderSession->maskManager->pushObject(hx::ObjectPtr<OBJ_>(this),null());
		renderSession->filterManager->pushObject(hx::ObjectPtr<OBJ_>(this));
		bool tmp9 = renderSession->clearDirtyFlags;
		if ((tmp9)){
			{
				int _g = (int)0;
				Array< ::Dynamic > _g1 = this->__children;
				while((true)){
					bool tmp10 = (_g < _g1->length);
					bool tmp11 = !(tmp10);
					if ((tmp11)){
						break;
					}
					::openfl::display::DisplayObject tmp12 = _g1->__get(_g).StaticCast< ::openfl::display::DisplayObject >();
					::openfl::display::DisplayObject child = tmp12;
					++(_g);
					::openfl::_internal::renderer::RenderSession tmp13 = renderSession;
					child->__renderGL(tmp13);
					child->__renderDirty = false;
				}
			}
			this->__renderDirty = false;
		}
		else{
			int _g = (int)0;
			Array< ::Dynamic > _g1 = this->__children;
			while((true)){
				bool tmp10 = (_g < _g1->length);
				bool tmp11 = !(tmp10);
				if ((tmp11)){
					break;
				}
				::openfl::display::DisplayObject tmp12 = _g1->__get(_g).StaticCast< ::openfl::display::DisplayObject >();
				::openfl::display::DisplayObject child = tmp12;
				++(_g);
				::openfl::_internal::renderer::RenderSession tmp13 = renderSession;
				child->__renderGL(tmp13);
			}
		}
		{
			int _g = (int)0;
			::openfl::_Vector::ObjectVector tmp10 = this->__removedChildren;
			::openfl::_Vector::ObjectVector _g1 = tmp10;
			while((true)){
				int tmp11 = _g;
				int tmp12 = _g1->get_length();
				bool tmp13 = (tmp11 < tmp12);
				bool tmp14 = !(tmp13);
				if ((tmp14)){
					break;
				}
				int tmp15 = _g;
				::openfl::display::DisplayObject tmp16 = _g1->get(tmp15);
				::openfl::display::DisplayObject orphan = tmp16;
				++(_g);
				bool tmp17 = (orphan->stage == null());
				if ((tmp17)){
					orphan->__cleanup();
				}
			}
		}
		::openfl::_Vector::ObjectVector tmp10 = this->__removedChildren;
		tmp10->set_length((int)0);
		renderSession->filterManager->popObject(hx::ObjectPtr<OBJ_>(this));
		renderSession->maskManager->popObject(hx::ObjectPtr<OBJ_>(this),null());
	}
return null();
}


Void DisplayObjectContainer_obj::__setStageReference( ::openfl::display::Stage stage){
{
		::openfl::display::Stage tmp = stage;
		this->super::__setStageReference(tmp);
		bool tmp1 = (this->__children != null());
		if ((tmp1)){
			int _g = (int)0;
			Array< ::Dynamic > _g1 = this->__children;
			while((true)){
				bool tmp2 = (_g < _g1->length);
				bool tmp3 = !(tmp2);
				if ((tmp3)){
					break;
				}
				::openfl::display::DisplayObject tmp4 = _g1->__get(_g).StaticCast< ::openfl::display::DisplayObject >();
				::openfl::display::DisplayObject child = tmp4;
				++(_g);
				::openfl::display::Stage tmp5 = stage;
				child->__setStageReference(tmp5);
			}
		}
	}
return null();
}


Void DisplayObjectContainer_obj::__setTransformDirty( ){
{
		bool tmp = this->__transformDirty;
		bool tmp1 = !(tmp);
		if ((tmp1)){
			this->super::__setTransformDirty();
			bool tmp2 = (this->__children != null());
			if ((tmp2)){
				int _g = (int)0;
				Array< ::Dynamic > _g1 = this->__children;
				while((true)){
					bool tmp3 = (_g < _g1->length);
					bool tmp4 = !(tmp3);
					if ((tmp4)){
						break;
					}
					::openfl::display::DisplayObject tmp5 = _g1->__get(_g).StaticCast< ::openfl::display::DisplayObject >();
					::openfl::display::DisplayObject child = tmp5;
					++(_g);
					child->__setTransformDirty();
				}
			}
		}
	}
return null();
}


Void DisplayObjectContainer_obj::__stopAllMovieClips( ){
{
		int _g = (int)0;
		Array< ::Dynamic > _g1 = this->__children;
		while((true)){
			bool tmp = (_g < _g1->length);
			bool tmp1 = !(tmp);
			if ((tmp1)){
				break;
			}
			::openfl::display::DisplayObject tmp2 = _g1->__get(_g).StaticCast< ::openfl::display::DisplayObject >();
			::openfl::display::DisplayObject child = tmp2;
			++(_g);
			child->__stopAllMovieClips();
		}
	}
return null();
}


Void DisplayObjectContainer_obj::__update( bool transformOnly,bool updateChildren,::openfl::display::Graphics maskGraphics){
{
		bool tmp = transformOnly;
		bool tmp1 = updateChildren;
		::openfl::display::Graphics tmp2 = maskGraphics;
		this->super::__update(tmp,tmp1,tmp2);
		bool tmp3 = updateChildren;
		if ((tmp3)){
			int _g = (int)0;
			Array< ::Dynamic > _g1 = this->__children;
			while((true)){
				bool tmp4 = (_g < _g1->length);
				bool tmp5 = !(tmp4);
				if ((tmp5)){
					break;
				}
				::openfl::display::DisplayObject tmp6 = _g1->__get(_g).StaticCast< ::openfl::display::DisplayObject >();
				::openfl::display::DisplayObject child = tmp6;
				++(_g);
				bool tmp7 = transformOnly;
				::openfl::display::Graphics tmp8 = maskGraphics;
				child->__update(tmp7,true,tmp8);
			}
		}
	}
return null();
}


Void DisplayObjectContainer_obj::__updateChildren( bool transformOnly){
{
		bool tmp = transformOnly;
		this->super::__updateChildren(tmp);
		{
			int _g = (int)0;
			Array< ::Dynamic > _g1 = this->__children;
			while((true)){
				bool tmp1 = (_g < _g1->length);
				bool tmp2 = !(tmp1);
				if ((tmp2)){
					break;
				}
				::openfl::display::DisplayObject tmp3 = _g1->__get(_g).StaticCast< ::openfl::display::DisplayObject >();
				::openfl::display::DisplayObject child = tmp3;
				++(_g);
				bool tmp4 = transformOnly;
				child->__update(tmp4,true,null());
			}
		}
	}
return null();
}


int DisplayObjectContainer_obj::get_numChildren( ){
	int tmp = this->__children->length;
	return tmp;
}


HX_DEFINE_DYNAMIC_FUNC0(DisplayObjectContainer_obj,get_numChildren,return )


DisplayObjectContainer_obj::DisplayObjectContainer_obj()
{
}

void DisplayObjectContainer_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(DisplayObjectContainer);
	HX_MARK_MEMBER_NAME(mouseChildren,"mouseChildren");
	HX_MARK_MEMBER_NAME(tabChildren,"tabChildren");
	HX_MARK_MEMBER_NAME(__removedChildren,"__removedChildren");
	HX_MARK_MEMBER_NAME(__tempStack,"__tempStack");
	::openfl::display::InteractiveObject_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void DisplayObjectContainer_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(mouseChildren,"mouseChildren");
	HX_VISIT_MEMBER_NAME(tabChildren,"tabChildren");
	HX_VISIT_MEMBER_NAME(__removedChildren,"__removedChildren");
	HX_VISIT_MEMBER_NAME(__tempStack,"__tempStack");
	::openfl::display::InteractiveObject_obj::__Visit(HX_VISIT_ARG);
}

Dynamic DisplayObjectContainer_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 7:
		if (HX_FIELD_EQ(inName,"resolve") ) { return resolve_dyn(); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"addChild") ) { return addChild_dyn(); }
		if (HX_FIELD_EQ(inName,"contains") ) { return contains_dyn(); }
		if (HX_FIELD_EQ(inName,"__update") ) { return __update_dyn(); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"__hitTest") ) { return __hitTest_dyn(); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"addChildAt") ) { return addChildAt_dyn(); }
		if (HX_FIELD_EQ(inName,"getChildAt") ) { return getChildAt_dyn(); }
		if (HX_FIELD_EQ(inName,"__renderGL") ) { return __renderGL_dyn(); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"numChildren") ) { if (inCallProp == hx::paccAlways) return get_numChildren(); }
		if (HX_FIELD_EQ(inName,"tabChildren") ) { return tabChildren; }
		if (HX_FIELD_EQ(inName,"__tempStack") ) { return __tempStack; }
		if (HX_FIELD_EQ(inName,"removeChild") ) { return removeChild_dyn(); }
		if (HX_FIELD_EQ(inName,"__getBounds") ) { return __getBounds_dyn(); }
		if (HX_FIELD_EQ(inName,"__renderDOM") ) { return __renderDOM_dyn(); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"swapChildren") ) { return swapChildren_dyn(); }
		if (HX_FIELD_EQ(inName,"__enterFrame") ) { return __enterFrame_dyn(); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"mouseChildren") ) { return mouseChildren; }
		if (HX_FIELD_EQ(inName,"getChildIndex") ) { return getChildIndex_dyn(); }
		if (HX_FIELD_EQ(inName,"removeChildAt") ) { return removeChildAt_dyn(); }
		if (HX_FIELD_EQ(inName,"setChildIndex") ) { return setChildIndex_dyn(); }
		if (HX_FIELD_EQ(inName,"__hitTestMask") ) { return __hitTestMask_dyn(); }
		if (HX_FIELD_EQ(inName,"__renderCairo") ) { return __renderCairo_dyn(); }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"getChildByName") ) { return getChildByName_dyn(); }
		if (HX_FIELD_EQ(inName,"removeChildren") ) { return removeChildren_dyn(); }
		if (HX_FIELD_EQ(inName,"swapChildrenAt") ) { return swapChildrenAt_dyn(); }
		if (HX_FIELD_EQ(inName,"__renderCanvas") ) { return __renderCanvas_dyn(); }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"get_numChildren") ) { return get_numChildren_dyn(); }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"__updateChildren") ) { return __updateChildren_dyn(); }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"__removedChildren") ) { return __removedChildren; }
		if (HX_FIELD_EQ(inName,"stopAllMovieClips") ) { return stopAllMovieClips_dyn(); }
		if (HX_FIELD_EQ(inName,"__getRenderBounds") ) { return __getRenderBounds_dyn(); }
		if (HX_FIELD_EQ(inName,"__renderCairoMask") ) { return __renderCairoMask_dyn(); }
		break;
	case 18:
		if (HX_FIELD_EQ(inName,"__dispatchChildren") ) { return __dispatchChildren_dyn(); }
		if (HX_FIELD_EQ(inName,"__readGraphicsData") ) { return __readGraphicsData_dyn(); }
		if (HX_FIELD_EQ(inName,"__renderCanvasMask") ) { return __renderCanvasMask_dyn(); }
		break;
	case 19:
		if (HX_FIELD_EQ(inName,"__setStageReference") ) { return __setStageReference_dyn(); }
		if (HX_FIELD_EQ(inName,"__setTransformDirty") ) { return __setTransformDirty_dyn(); }
		if (HX_FIELD_EQ(inName,"__stopAllMovieClips") ) { return __stopAllMovieClips_dyn(); }
		break;
	case 20:
		if (HX_FIELD_EQ(inName,"getObjectsUnderPoint") ) { return getObjectsUnderPoint_dyn(); }
		break;
	case 32:
		if (HX_FIELD_EQ(inName,"areInaccessibleObjectsUnderPoint") ) { return areInaccessibleObjectsUnderPoint_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic DisplayObjectContainer_obj::__SetField(const ::String &inName,const Dynamic &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 11:
		if (HX_FIELD_EQ(inName,"tabChildren") ) { tabChildren=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"__tempStack") ) { __tempStack=inValue.Cast< ::openfl::_Vector::ObjectVector >(); return inValue; }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"mouseChildren") ) { mouseChildren=inValue.Cast< bool >(); return inValue; }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"__removedChildren") ) { __removedChildren=inValue.Cast< ::openfl::_Vector::ObjectVector >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void DisplayObjectContainer_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("mouseChildren","\x84","\x18","\x6b","\xff"));
	outFields->push(HX_HCSTRING("numChildren","\xa5","\x69","\x80","\x5c"));
	outFields->push(HX_HCSTRING("tabChildren","\xb4","\x0c","\x86","\x4b"));
	outFields->push(HX_HCSTRING("__removedChildren","\xdf","\xc5","\x0e","\xd3"));
	outFields->push(HX_HCSTRING("__tempStack","\x74","\xb4","\x4b","\xe8"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsBool,(int)offsetof(DisplayObjectContainer_obj,mouseChildren),HX_HCSTRING("mouseChildren","\x84","\x18","\x6b","\xff")},
	{hx::fsBool,(int)offsetof(DisplayObjectContainer_obj,tabChildren),HX_HCSTRING("tabChildren","\xb4","\x0c","\x86","\x4b")},
	{hx::fsObject /*::openfl::_Vector::ObjectVector*/ ,(int)offsetof(DisplayObjectContainer_obj,__removedChildren),HX_HCSTRING("__removedChildren","\xdf","\xc5","\x0e","\xd3")},
	{hx::fsObject /*::openfl::_Vector::ObjectVector*/ ,(int)offsetof(DisplayObjectContainer_obj,__tempStack),HX_HCSTRING("__tempStack","\x74","\xb4","\x4b","\xe8")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo *sStaticStorageInfo = 0;
#endif

static ::String sMemberFields[] = {
	HX_HCSTRING("mouseChildren","\x84","\x18","\x6b","\xff"),
	HX_HCSTRING("tabChildren","\xb4","\x0c","\x86","\x4b"),
	HX_HCSTRING("__removedChildren","\xdf","\xc5","\x0e","\xd3"),
	HX_HCSTRING("__tempStack","\x74","\xb4","\x4b","\xe8"),
	HX_HCSTRING("addChild","\xbb","\xcf","\x16","\xbf"),
	HX_HCSTRING("addChildAt","\x8e","\xad","\x36","\xce"),
	HX_HCSTRING("areInaccessibleObjectsUnderPoint","\x3d","\x22","\x9b","\x1e"),
	HX_HCSTRING("contains","\x1f","\x5a","\x7b","\x2c"),
	HX_HCSTRING("getChildAt","\xb9","\x07","\x0e","\xb6"),
	HX_HCSTRING("getChildByName","\x88","\xb9","\x73","\xa3"),
	HX_HCSTRING("getChildIndex","\x0c","\x68","\x02","\xb9"),
	HX_HCSTRING("getObjectsUnderPoint","\x96","\x10","\xd5","\x80"),
	HX_HCSTRING("removeChild","\xb8","\x86","\xed","\x43"),
	HX_HCSTRING("removeChildAt","\xcb","\xdd","\x66","\x3f"),
	HX_HCSTRING("removeChildren","\xa3","\x55","\xc0","\x3a"),
	HX_HCSTRING("resolve","\xec","\x12","\x60","\x67"),
	HX_HCSTRING("setChildIndex","\x18","\x4a","\x08","\xfe"),
	HX_HCSTRING("stopAllMovieClips","\xf2","\x60","\xf8","\xa0"),
	HX_HCSTRING("swapChildren","\xf2","\x4a","\x53","\xe0"),
	HX_HCSTRING("swapChildrenAt","\x85","\xa4","\xf1","\x13"),
	HX_HCSTRING("__dispatchChildren","\x39","\x81","\xf4","\xf4"),
	HX_HCSTRING("__enterFrame","\x15","\x7f","\xe3","\x3a"),
	HX_HCSTRING("__getBounds","\x8b","\x58","\xa0","\x10"),
	HX_HCSTRING("__getRenderBounds","\x01","\x11","\xb8","\x7b"),
	HX_HCSTRING("__hitTest","\x25","\xb1","\xcd","\x63"),
	HX_HCSTRING("__hitTestMask","\xb1","\x14","\xfd","\x3b"),
	HX_HCSTRING("__readGraphicsData","\x2b","\x10","\x91","\xf2"),
	HX_HCSTRING("__renderCairo","\x32","\x9e","\x42","\x55"),
	HX_HCSTRING("__renderCairoMask","\x3e","\x0c","\x22","\x6b"),
	HX_HCSTRING("__renderCanvas","\xee","\xdb","\x58","\x48"),
	HX_HCSTRING("__renderCanvasMask","\xfa","\xd7","\xef","\x51"),
	HX_HCSTRING("__renderDOM","\xac","\xf5","\x83","\xfb"),
	HX_HCSTRING("__renderGL","\x1b","\x1e","\x14","\x56"),
	HX_HCSTRING("__setStageReference","\x4f","\xe5","\xe5","\xf4"),
	HX_HCSTRING("__setTransformDirty","\x28","\x1b","\x24","\x99"),
	HX_HCSTRING("__stopAllMovieClips","\xd2","\x89","\xe8","\x53"),
	HX_HCSTRING("__update","\x29","\xf1","\x34","\x2f"),
	HX_HCSTRING("__updateChildren","\x88","\x97","\xd3","\xd9"),
	HX_HCSTRING("get_numChildren","\x3c","\x21","\x62","\x1d"),
	::String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(DisplayObjectContainer_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(DisplayObjectContainer_obj::__mClass,"__mClass");
};

#endif

hx::Class DisplayObjectContainer_obj::__mClass;

void DisplayObjectContainer_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("openfl.display.DisplayObjectContainer","\x4a","\x52","\xef","\x89");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = hx::Class_obj::dupFunctions(sMemberFields);
	__mClass->mCanCast = hx::TCanCast< DisplayObjectContainer_obj >;
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
