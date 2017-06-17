#include <hxcpp.h>

#include "hxMath.h"
#ifndef INCLUDED_Reflect
#include <Reflect.h>
#endif
#ifndef INCLUDED_Std
#include <Std.h>
#endif
#ifndef INCLUDED_Type
#include <Type.h>
#endif
#ifndef INCLUDED_haxe_IMap
#include <haxe/IMap.h>
#endif
#ifndef INCLUDED_haxe_ds_IntMap
#include <haxe/ds/IntMap.h>
#endif
#ifndef INCLUDED_openfl__internal_swf_FilterType
#include <openfl/_internal/swf/FilterType.h>
#endif
#ifndef INCLUDED_openfl__internal_swf_SWFLite
#include <openfl/_internal/swf/SWFLite.h>
#endif
#ifndef INCLUDED_openfl__internal_symbols_SWFSymbol
#include <openfl/_internal/symbols/SWFSymbol.h>
#endif
#ifndef INCLUDED_openfl__internal_symbols_SpriteSymbol
#include <openfl/_internal/symbols/SpriteSymbol.h>
#endif
#ifndef INCLUDED_openfl__internal_timeline_Frame
#include <openfl/_internal/timeline/Frame.h>
#endif
#ifndef INCLUDED_openfl__internal_timeline_FrameObject
#include <openfl/_internal/timeline/FrameObject.h>
#endif
#ifndef INCLUDED_openfl__internal_timeline_FrameObjectType
#include <openfl/_internal/timeline/FrameObjectType.h>
#endif
#ifndef INCLUDED_openfl_display_DisplayObject
#include <openfl/display/DisplayObject.h>
#endif
#ifndef INCLUDED_openfl_display_DisplayObjectContainer
#include <openfl/display/DisplayObjectContainer.h>
#endif
#ifndef INCLUDED_openfl_display_FrameLabel
#include <openfl/display/FrameLabel.h>
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
#ifndef INCLUDED_openfl_display_Sprite
#include <openfl/display/Sprite.h>
#endif
#ifndef INCLUDED_openfl_display__MovieClip_TimelineObject
#include <openfl/display/_MovieClip/TimelineObject.h>
#endif
#ifndef INCLUDED_openfl_events_EventDispatcher
#include <openfl/events/EventDispatcher.h>
#endif
#ifndef INCLUDED_openfl_events_IEventDispatcher
#include <openfl/events/IEventDispatcher.h>
#endif
#ifndef INCLUDED_openfl_filters_BitmapFilter
#include <openfl/filters/BitmapFilter.h>
#endif
#ifndef INCLUDED_openfl_filters_BlurFilter
#include <openfl/filters/BlurFilter.h>
#endif
#ifndef INCLUDED_openfl_filters_ColorMatrixFilter
#include <openfl/filters/ColorMatrixFilter.h>
#endif
#ifndef INCLUDED_openfl_filters_DropShadowFilter
#include <openfl/filters/DropShadowFilter.h>
#endif
#ifndef INCLUDED_openfl_filters_GlowFilter
#include <openfl/filters/GlowFilter.h>
#endif
#ifndef INCLUDED_openfl_geom_ColorTransform
#include <openfl/geom/ColorTransform.h>
#endif
#ifndef INCLUDED_openfl_geom_Matrix
#include <openfl/geom/Matrix.h>
#endif
#ifndef INCLUDED_openfl_geom_Transform
#include <openfl/geom/Transform.h>
#endif
namespace openfl{
namespace display{

Void MovieClip_obj::__construct()
{
{
	super::__construct();
	this->__currentFrame = (int)0;
	this->__currentLabels = Array_obj< ::Dynamic >::__new();
	this->__totalFrames = (int)0;
	this->enabled = true;
	::openfl::_internal::symbols::SpriteSymbol tmp = ::openfl::display::MovieClip_obj::__initSymbol;
	bool tmp1 = (tmp != null());
	if ((tmp1)){
		::openfl::_internal::swf::SWFLite tmp2 = ::openfl::display::MovieClip_obj::__initSWF;
		this->__swf = tmp2;
		::openfl::_internal::symbols::SpriteSymbol tmp3 = ::openfl::display::MovieClip_obj::__initSymbol;
		this->__symbol = tmp3;
		::openfl::display::MovieClip_obj::__initSWF = null();
		::openfl::display::MovieClip_obj::__initSymbol = null();
		::openfl::_internal::swf::SWFLite tmp4 = this->__swf;
		::openfl::_internal::symbols::SpriteSymbol tmp5 = this->__symbol;
		this->__fromSymbol(tmp4,tmp5);
	}
}
;
	return null();
}

//MovieClip_obj::~MovieClip_obj() { }

Dynamic MovieClip_obj::__CreateEmpty() { return  new MovieClip_obj; }
hx::ObjectPtr< MovieClip_obj > MovieClip_obj::__new()
{  hx::ObjectPtr< MovieClip_obj > _result_ = new MovieClip_obj();
	_result_->__construct();
	return _result_;}

Dynamic MovieClip_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< MovieClip_obj > _result_ = new MovieClip_obj();
	_result_->__construct();
	return _result_;}

Void MovieClip_obj::addFrameScript( int index,Dynamic method){
{
		bool tmp = (method != null());
		if ((tmp)){
			::haxe::ds::IntMap tmp1 = this->__frameScripts;
			bool tmp2 = (tmp1 == null());
			if ((tmp2)){
				::haxe::ds::IntMap tmp3;
				{
					::haxe::ds::IntMap tmp4 = ::haxe::ds::IntMap_obj::__new();
					::haxe::ds::IntMap tmp5 = tmp4;
					tmp3 = tmp5;
				}
				this->__frameScripts = tmp3;
			}
			::haxe::ds::IntMap tmp3 = this->__frameScripts;
			int tmp4 = index;
			Dynamic tmp5 = method;
			tmp3->set(tmp4,tmp5);
		}
		else{
			::haxe::ds::IntMap tmp1 = this->__frameScripts;
			bool tmp2 = (tmp1 != null());
			if ((tmp2)){
				::haxe::ds::IntMap tmp3 = this->__frameScripts;
				int tmp4 = index;
				tmp3->remove(tmp4);
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(MovieClip_obj,addFrameScript,(void))

Void MovieClip_obj::gotoAndPlay( Dynamic frame,::String scene){
{
		::openfl::_internal::symbols::SpriteSymbol tmp = this->__symbol;
		bool tmp1 = (tmp != null());
		if ((tmp1)){
			Dynamic tmp2 = frame;
			int tmp3 = this->__getFrame(tmp2);
			this->__currentFrame = tmp3;
			this->__updateFrame();
			this->play();
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(MovieClip_obj,gotoAndPlay,(void))

Void MovieClip_obj::gotoAndStop( Dynamic frame,::String scene){
{
		::openfl::_internal::symbols::SpriteSymbol tmp = this->__symbol;
		bool tmp1 = (tmp != null());
		if ((tmp1)){
			Dynamic tmp2 = frame;
			int tmp3 = this->__getFrame(tmp2);
			this->__currentFrame = tmp3;
			this->__updateFrame();
			this->stop();
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(MovieClip_obj,gotoAndStop,(void))

Void MovieClip_obj::nextFrame( ){
{
		::openfl::_internal::symbols::SpriteSymbol tmp = this->__symbol;
		bool tmp1 = (tmp != null());
		if ((tmp1)){
			int tmp2 = this->__currentFrame;
			int tmp3 = (tmp2 + (int)1);
			int next = tmp3;
			int tmp4 = next;
			int tmp5 = this->__totalFrames;
			bool tmp6 = (tmp4 > tmp5);
			if ((tmp6)){
				int tmp7 = this->__totalFrames;
				next = tmp7;
			}
			int tmp7 = next;
			this->gotoAndStop(tmp7,null());
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(MovieClip_obj,nextFrame,(void))

Void MovieClip_obj::play( ){
{
		::openfl::_internal::symbols::SpriteSymbol tmp = this->__symbol;
		bool tmp1 = (tmp != null());
		if ((tmp1)){
			bool tmp2 = this->__playing;
			bool tmp3 = tmp2;
			bool tmp4 = !(tmp3);
			bool tmp5;
			if ((tmp4)){
				int tmp6 = this->__totalFrames;
				int tmp7 = tmp6;
				tmp5 = (tmp7 > (int)1);
			}
			else{
				tmp5 = false;
			}
			if ((tmp5)){
				this->__playing = true;
				::openfl::_internal::swf::SWFLite tmp6 = this->__swf;
				Float tmp7 = tmp6->frameRate;
				Float tmp8 = (Float((int)1000) / Float(tmp7));
				int tmp9 = ::Std_obj::_int(tmp8);
				this->__frameTime = tmp9;
				this->__timeElapsed = (int)0;
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(MovieClip_obj,play,(void))

Void MovieClip_obj::prevFrame( ){
{
		::openfl::_internal::symbols::SpriteSymbol tmp = this->__symbol;
		bool tmp1 = (tmp != null());
		if ((tmp1)){
			int tmp2 = this->__currentFrame;
			int tmp3 = (tmp2 - (int)1);
			int previous = tmp3;
			bool tmp4 = (previous < (int)1);
			if ((tmp4)){
				previous = (int)1;
			}
			int tmp5 = previous;
			this->gotoAndStop(tmp5,null());
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(MovieClip_obj,prevFrame,(void))

Void MovieClip_obj::stop( ){
{
		::openfl::_internal::symbols::SpriteSymbol tmp = this->__symbol;
		bool tmp1 = (tmp != null());
		if ((tmp1)){
			bool tmp2 = this->__playing;
			if ((tmp2)){
				this->__playing = false;
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(MovieClip_obj,stop,(void))

Float MovieClip_obj::__applyTween( Float start,Float end,Float ratio){
	Float tmp = start;
	Float tmp1 = (end - start);
	Float tmp2 = ratio;
	Float tmp3 = (tmp1 * tmp2);
	Float tmp4 = (tmp + tmp3);
	return tmp4;
}


HX_DEFINE_DYNAMIC_FUNC3(MovieClip_obj,__applyTween,return )

Void MovieClip_obj::__enterFrame( int deltaTime){
{
		::openfl::_internal::symbols::SpriteSymbol tmp = this->__symbol;
		bool tmp1 = (tmp != null());
		if ((tmp1)){
			bool tmp2 = this->__playing;
			if ((tmp2)){
				hx::AddEq(this->__timeElapsed,deltaTime);
				int tmp3 = this->__timeElapsed;
				int tmp4 = this->__frameTime;
				Float tmp5 = (Float(tmp3) / Float(tmp4));
				int tmp6 = ::Math_obj::floor(tmp5);
				int advanceFrames = tmp6;
				int tmp7 = this->__timeElapsed;
				int tmp8 = this->__frameTime;
				int tmp9 = hx::Mod(tmp7,tmp8);
				this->__timeElapsed = tmp9;
				::haxe::ds::IntMap tmp10 = this->__frameScripts;
				bool tmp11 = (tmp10 != null());
				if ((tmp11)){
					int _g = (int)0;
					while((true)){
						bool tmp12 = (_g < advanceFrames);
						bool tmp13 = !(tmp12);
						if ((tmp13)){
							break;
						}
						int tmp14 = (_g)++;
						int i = tmp14;
						(this->__currentFrame)++;
						int tmp15 = this->__currentFrame;
						int tmp16 = this->__totalFrames;
						bool tmp17 = (tmp15 > tmp16);
						if ((tmp17)){
							this->__currentFrame = (int)1;
						}
						::haxe::ds::IntMap tmp18 = this->__frameScripts;
						int tmp19 = this->__currentFrame;
						int tmp20 = (tmp19 - (int)1);
						bool tmp21 = tmp18->exists(tmp20);
						if ((tmp21)){
							::haxe::ds::IntMap tmp22 = this->__frameScripts;
							int tmp23 = this->__currentFrame;
							int tmp24 = (tmp23 - (int)1);
							Dynamic tmp25 = tmp22->get(tmp24);
							Dynamic tmp26 = tmp25;
							tmp26().Cast< Void >();
							bool tmp27 = this->__playing;
							bool tmp28 = !(tmp27);
							if ((tmp28)){
								break;
							}
						}
					}
				}
				else{
					hx::AddEq(this->__currentFrame,advanceFrames);
					while((true)){
						int tmp12 = this->__currentFrame;
						int tmp13 = this->__totalFrames;
						bool tmp14 = (tmp12 > tmp13);
						bool tmp15 = !(tmp14);
						if ((tmp15)){
							break;
						}
						int tmp16 = this->__totalFrames;
						hx::SubEq(this->__currentFrame,tmp16);
					}
				}
				this->__updateFrame();
			}
		}
		int tmp2 = deltaTime;
		this->super::__enterFrame(tmp2);
	}
return null();
}


Void MovieClip_obj::__fromSymbol( ::openfl::_internal::swf::SWFLite swf,::openfl::_internal::symbols::SpriteSymbol symbol){
{
		::haxe::ds::IntMap tmp = this->__objects;
		bool tmp1 = (tmp != null());
		if ((tmp1)){
			return null();
		}
		this->__swf = swf;
		this->__symbol = symbol;
		this->__lastUpdate = (int)-1;
		this->__maskCount = (int)0;
		this->__objectDepths = Array_obj< ::Dynamic >::__new();
		::haxe::ds::IntMap tmp2;
		{
			::haxe::ds::IntMap tmp3 = ::haxe::ds::IntMap_obj::__new();
			::haxe::ds::IntMap tmp4 = tmp3;
			tmp2 = tmp4;
		}
		this->__objects = tmp2;
		this->__zeroSymbol = (int)-1;
		this->__currentFrame = (int)1;
		::openfl::_internal::symbols::SpriteSymbol tmp3 = this->__symbol;
		int tmp4 = tmp3->frames->length;
		this->__totalFrames = tmp4;
		{
			int _g1 = (int)0;
			::openfl::_internal::symbols::SpriteSymbol tmp5 = this->__symbol;
			int tmp6 = tmp5->frames->length;
			int _g = tmp6;
			while((true)){
				bool tmp7 = (_g1 < _g);
				bool tmp8 = !(tmp7);
				if ((tmp8)){
					break;
				}
				int tmp9 = (_g1)++;
				int i = tmp9;
				::openfl::_internal::symbols::SpriteSymbol tmp10 = this->__symbol;
				::openfl::_internal::timeline::Frame tmp11 = tmp10->frames->__get(i).StaticCast< ::openfl::_internal::timeline::Frame >();
				::String tmp12 = tmp11->label;
				bool tmp13 = (tmp12 != null());
				if ((tmp13)){
					::openfl::_internal::symbols::SpriteSymbol tmp14 = this->__symbol;
					::openfl::_internal::timeline::Frame tmp15 = tmp14->frames->__get(i).StaticCast< ::openfl::_internal::timeline::Frame >();
					::String tmp16 = tmp15->label;
					int tmp17 = (i + (int)1);
					::openfl::display::FrameLabel tmp18 = ::openfl::display::FrameLabel_obj::__new(tmp16,tmp17);
					this->__currentLabels->push(tmp18);
				}
			}
		}
		this->__updateFrame();
		{
			int _g = (int)0;
			::hx::Class tmp5 = ::Type_obj::getClass(hx::ObjectPtr<OBJ_>(this));
			Array< ::String > _g1 = ::Type_obj::getInstanceFields(tmp5);
			while((true)){
				bool tmp6 = (_g < _g1->length);
				bool tmp7 = !(tmp6);
				if ((tmp7)){
					break;
				}
				::String tmp8 = _g1->__get(_g);
				::String field = tmp8;
				++(_g);
				{
					int _g2 = (int)0;
					Array< ::Dynamic > _g3 = this->__children;
					while((true)){
						bool tmp9 = (_g2 < _g3->length);
						bool tmp10 = !(tmp9);
						if ((tmp10)){
							break;
						}
						::openfl::display::DisplayObject tmp11 = _g3->__get(_g2).StaticCast< ::openfl::display::DisplayObject >();
						::openfl::display::DisplayObject child = tmp11;
						++(_g2);
						::String tmp12 = child->get_name();
						::String tmp13 = field;
						bool tmp14 = (tmp12 == tmp13);
						if ((tmp14)){
							::String tmp15 = field;
							::openfl::display::DisplayObject tmp16 = child;
							::Reflect_obj::setField(hx::ObjectPtr<OBJ_>(this),tmp15,tmp16);
						}
					}
				}
			}
		}
		int tmp5 = this->__totalFrames;
		bool tmp6 = (tmp5 > (int)1);
		if ((tmp6)){
			this->play();
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(MovieClip_obj,__fromSymbol,(void))

int MovieClip_obj::__getFrame( Dynamic frame){
	Dynamic tmp = frame;
	bool tmp1 = ::Std_obj::is(tmp,hx::ClassOf< ::Int >());
	if ((tmp1)){
		int index = ((int)(frame));
		bool tmp2 = (index < (int)1);
		if ((tmp2)){
			return (int)1;
		}
		int tmp3 = index;
		int tmp4 = this->__totalFrames;
		bool tmp5 = (tmp3 > tmp4);
		if ((tmp5)){
			int tmp6 = this->__totalFrames;
			return tmp6;
		}
		int tmp6 = index;
		return tmp6;
	}
	else{
		Dynamic tmp2 = frame;
		bool tmp3 = ::Std_obj::is(tmp2,hx::ClassOf< ::String >());
		if ((tmp3)){
			::String label = ((::String)(frame));
			{
				int _g = (int)0;
				Array< ::Dynamic > _g1 = this->__currentLabels;
				while((true)){
					bool tmp4 = (_g < _g1->length);
					bool tmp5 = !(tmp4);
					if ((tmp5)){
						break;
					}
					::openfl::display::FrameLabel tmp6 = _g1->__get(_g).StaticCast< ::openfl::display::FrameLabel >();
					::openfl::display::FrameLabel frameLabel = tmp6;
					++(_g);
					::String tmp7 = frameLabel->get_name();
					::String tmp8 = label;
					bool tmp9 = (tmp7 == tmp8);
					if ((tmp9)){
						int tmp10 = frameLabel->get_frame();
						return tmp10;
					}
				}
			}
		}
	}
	return (int)1;
}


HX_DEFINE_DYNAMIC_FUNC1(MovieClip_obj,__getFrame,return )

Void MovieClip_obj::__placeObject( ::openfl::display::DisplayObject displayObject,::openfl::_internal::timeline::FrameObject frameObject){
{
		bool tmp = (frameObject->name != null());
		if ((tmp)){
			::String tmp1 = frameObject->name;
			displayObject->set_name(tmp1);
		}
		bool tmp1 = (frameObject->matrix != null());
		if ((tmp1)){
			::openfl::geom::Transform tmp2 = displayObject->get_transform();
			::openfl::geom::Matrix tmp3 = frameObject->matrix;
			tmp2->set_matrix(tmp3);
		}
		bool tmp2 = (frameObject->colorTransform != null());
		if ((tmp2)){
			::openfl::geom::Transform tmp3 = displayObject->get_transform();
			::openfl::geom::ColorTransform tmp4 = frameObject->colorTransform;
			tmp3->set_colorTransform(tmp4);
		}
		bool tmp3 = (frameObject->filters != null());
		if ((tmp3)){
			Array< ::Dynamic > filters = Array_obj< ::Dynamic >::__new();
			{
				int _g = (int)0;
				Array< ::Dynamic > _g1 = frameObject->filters;
				while((true)){
					bool tmp4 = (_g < _g1->length);
					bool tmp5 = !(tmp4);
					if ((tmp5)){
						break;
					}
					::openfl::_internal::swf::FilterType tmp6 = _g1->__get(_g).StaticCast< ::openfl::_internal::swf::FilterType >();
					::openfl::_internal::swf::FilterType filter = tmp6;
					++(_g);
					switch( (int)(filter->__Index())){
						case (int)0: {
							int tmp7 = (::openfl::_internal::swf::FilterType(filter))->__Param(2);
							int quality = tmp7;
							Float tmp8 = (::openfl::_internal::swf::FilterType(filter))->__Param(1);
							Float blurY = tmp8;
							Float tmp9 = (::openfl::_internal::swf::FilterType(filter))->__Param(0);
							Float blurX = tmp9;
							{
								::openfl::filters::BlurFilter tmp10 = ::openfl::filters::BlurFilter_obj::__new(blurX,blurY,quality);
								filters->push(tmp10);
							}
						}
						;break;
						case (int)1: {
							Array< Float > matrix = (::openfl::_internal::swf::FilterType(filter))->__Param(0);
							{
								::openfl::filters::ColorMatrixFilter tmp7 = ::openfl::filters::ColorMatrixFilter_obj::__new(matrix);
								filters->push(tmp7);
							}
						}
						;break;
						case (int)2: {
							bool tmp7 = (::openfl::_internal::swf::FilterType(filter))->__Param(10);
							bool hideObject = tmp7;
							bool tmp8 = (::openfl::_internal::swf::FilterType(filter))->__Param(9);
							bool knockout = tmp8;
							bool tmp9 = (::openfl::_internal::swf::FilterType(filter))->__Param(8);
							bool inner = tmp9;
							int tmp10 = (::openfl::_internal::swf::FilterType(filter))->__Param(7);
							int quality = tmp10;
							Float tmp11 = (::openfl::_internal::swf::FilterType(filter))->__Param(6);
							Float strength = tmp11;
							Float tmp12 = (::openfl::_internal::swf::FilterType(filter))->__Param(5);
							Float blurY = tmp12;
							Float tmp13 = (::openfl::_internal::swf::FilterType(filter))->__Param(4);
							Float blurX = tmp13;
							Float tmp14 = (::openfl::_internal::swf::FilterType(filter))->__Param(3);
							Float alpha = tmp14;
							int tmp15 = (::openfl::_internal::swf::FilterType(filter))->__Param(2);
							int color = tmp15;
							Float tmp16 = (::openfl::_internal::swf::FilterType(filter))->__Param(1);
							Float angle = tmp16;
							Float tmp17 = (::openfl::_internal::swf::FilterType(filter))->__Param(0);
							Float distance = tmp17;
							{
								::openfl::filters::DropShadowFilter tmp18 = ::openfl::filters::DropShadowFilter_obj::__new(distance,angle,color,alpha,blurX,blurY,strength,quality,inner,knockout,hideObject);
								filters->push(tmp18);
							}
						}
						;break;
						case (int)3: {
							bool tmp7 = (::openfl::_internal::swf::FilterType(filter))->__Param(7);
							bool knockout = tmp7;
							bool tmp8 = (::openfl::_internal::swf::FilterType(filter))->__Param(6);
							bool inner = tmp8;
							int tmp9 = (::openfl::_internal::swf::FilterType(filter))->__Param(5);
							int quality = tmp9;
							Float tmp10 = (::openfl::_internal::swf::FilterType(filter))->__Param(4);
							Float strength = tmp10;
							Float tmp11 = (::openfl::_internal::swf::FilterType(filter))->__Param(3);
							Float blurY = tmp11;
							Float tmp12 = (::openfl::_internal::swf::FilterType(filter))->__Param(2);
							Float blurX = tmp12;
							Float tmp13 = (::openfl::_internal::swf::FilterType(filter))->__Param(1);
							Float alpha = tmp13;
							int tmp14 = (::openfl::_internal::swf::FilterType(filter))->__Param(0);
							int color = tmp14;
							{
								::openfl::filters::GlowFilter tmp15 = ::openfl::filters::GlowFilter_obj::__new(color,alpha,blurX,blurY,strength,quality,inner,knockout);
								filters->push(tmp15);
							}
						}
						;break;
					}
				}
			}
			displayObject->set_filters(filters);
		}
		bool tmp4 = frameObject->visible;
		displayObject->set_visible(tmp4);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(MovieClip_obj,__placeObject,(void))

Void MovieClip_obj::__renderFrame( int index){
{
		int tmp = this->__lastUpdate;
		int tmp1 = (tmp - (int)1);
		int previousIndex = tmp1;
		bool tmp2 = (previousIndex > index);
		if ((tmp2)){
			::openfl::display::_MovieClip::TimelineObject timelineObject;
			bool exists;
			int i = (int)0;
			while((true)){
				int tmp3 = i;
				int tmp4 = this->__objectDepths->length;
				bool tmp5 = (tmp3 < tmp4);
				bool tmp6 = !(tmp5);
				if ((tmp6)){
					break;
				}
				::openfl::display::_MovieClip::TimelineObject tmp7 = this->__objectDepths->__get(i).StaticCast< ::openfl::display::_MovieClip::TimelineObject >();
				timelineObject = tmp7;
				exists = false;
				{
					int _g = (int)0;
					::openfl::_internal::symbols::SpriteSymbol tmp8 = this->__symbol;
					::openfl::_internal::timeline::Frame tmp9 = tmp8->frames->__get((int)0).StaticCast< ::openfl::_internal::timeline::Frame >();
					Array< ::Dynamic > _g1 = tmp9->objects;
					while((true)){
						bool tmp10 = (_g < _g1->length);
						bool tmp11 = !(tmp10);
						if ((tmp11)){
							break;
						}
						::openfl::_internal::timeline::FrameObject tmp12 = _g1->__get(_g).StaticCast< ::openfl::_internal::timeline::FrameObject >();
						::openfl::_internal::timeline::FrameObject frameObject = tmp12;
						++(_g);
						bool tmp13 = (frameObject->id == timelineObject->id);
						if ((tmp13)){
							exists = true;
							break;
						}
					}
				}
				bool tmp8 = exists;
				bool tmp9 = !(tmp8);
				if ((tmp9)){
					::openfl::display::DisplayObjectContainer tmp10 = timelineObject->displayObject->parent;
					bool tmp11 = (tmp10 == hx::ObjectPtr<OBJ_>(this));
					if ((tmp11)){
						::openfl::display::DisplayObject tmp12 = timelineObject->displayObject;
						this->removeChild(tmp12);
					}
					bool tmp12 = (timelineObject->clipDepth > (int)0);
					if ((tmp12)){
						(this->__maskCount)--;
					}
					int tmp13 = this->__maskCount;
					bool tmp14 = (tmp13 < (int)0);
					if ((tmp14)){
						this->__maskCount = (int)0;
					}
					int tmp15 = i;
					this->__objectDepths->splice(tmp15,(int)1);
				}
				else{
					(i)++;
				}
			}
			previousIndex = (int)0;
		}
		::openfl::_internal::timeline::Frame frame;
		::openfl::display::_MovieClip::TimelineObject timelineObject;
		::openfl::display::DisplayObject displayObject;
		Dynamic depth;
		::openfl::_internal::symbols::SWFSymbol symbol;
		bool depthChange = false;
		{
			int _g1 = previousIndex;
			int tmp3 = (index + (int)1);
			int _g = tmp3;
			while((true)){
				bool tmp4 = (_g1 < _g);
				bool tmp5 = !(tmp4);
				if ((tmp5)){
					break;
				}
				int tmp6 = (_g1)++;
				int i = tmp6;
				bool tmp7 = (i < (int)0);
				if ((tmp7)){
					continue;
				}
				::openfl::_internal::symbols::SpriteSymbol tmp8 = this->__symbol;
				::openfl::_internal::timeline::Frame tmp9 = tmp8->frames->__get(i).StaticCast< ::openfl::_internal::timeline::Frame >();
				frame = tmp9;
				{
					int _g2 = (int)0;
					Array< ::Dynamic > _g3 = frame->objects;
					while((true)){
						bool tmp10 = (_g2 < _g3->length);
						bool tmp11 = !(tmp10);
						if ((tmp11)){
							break;
						}
						::openfl::_internal::timeline::FrameObject tmp12 = _g3->__get(_g2).StaticCast< ::openfl::_internal::timeline::FrameObject >();
						::openfl::_internal::timeline::FrameObject frameObject = tmp12;
						++(_g2);
						bool tmp13 = (frameObject->type != ::openfl::_internal::timeline::FrameObjectType_obj::DESTROY);
						if ((tmp13)){
							bool tmp14 = (frameObject->id == (int)0);
							bool tmp15;
							if ((tmp14)){
								int tmp16 = frameObject->symbol;
								int tmp17 = this->__zeroSymbol;
								int tmp18 = tmp17;
								tmp15 = (tmp16 != tmp18);
							}
							else{
								tmp15 = false;
							}
							if ((tmp15)){
								::haxe::ds::IntMap tmp16 = this->__objects;
								::openfl::display::_MovieClip::TimelineObject tmp17 = tmp16->get((int)0);
								timelineObject = tmp17;
								bool tmp18 = (timelineObject != null());
								bool tmp19;
								if ((tmp18)){
									::openfl::display::DisplayObjectContainer tmp20 = timelineObject->displayObject->parent;
									::openfl::display::DisplayObjectContainer tmp21 = tmp20;
									tmp19 = (tmp21 == hx::ObjectPtr<OBJ_>(this));
								}
								else{
									tmp19 = false;
								}
								if ((tmp19)){
									::openfl::display::DisplayObject tmp20 = timelineObject->displayObject;
									this->removeChild(tmp20);
								}
								::haxe::ds::IntMap tmp20 = this->__objects;
								::openfl::display::_MovieClip::TimelineObject tmp21 = tmp20->get((int)0);
								::openfl::display::_MovieClip::TimelineObject tmp22 = tmp21;
								this->__objectDepths->remove(tmp22);
								timelineObject = null();
								this->__zeroSymbol = frameObject->symbol;
							}
							displayObject = null();
							::haxe::ds::IntMap tmp16 = this->__objects;
							int tmp17 = frameObject->id;
							bool tmp18 = tmp16->exists(tmp17);
							bool tmp19 = !(tmp18);
							if ((tmp19)){
								::openfl::_internal::swf::SWFLite tmp20 = this->__swf;
								int tmp21 = frameObject->symbol;
								bool tmp22 = tmp20->symbols->exists(tmp21);
								if ((tmp22)){
									::openfl::_internal::swf::SWFLite tmp23 = this->__swf;
									int tmp24 = frameObject->symbol;
									::openfl::_internal::symbols::SWFSymbol tmp25 = tmp23->symbols->get(tmp24);
									symbol = tmp25;
									::openfl::_internal::swf::SWFLite tmp26 = this->__swf;
									::openfl::display::DisplayObject tmp27 = symbol->__createObject(tmp26);
									displayObject = tmp27;
								}
								bool tmp23 = (displayObject != null());
								if ((tmp23)){
									::openfl::display::_MovieClip::TimelineObject tmp24 = ::openfl::display::_MovieClip::TimelineObject_obj::__new(frameObject->id,frameObject->depth,frameObject->clipDepth,displayObject);
									timelineObject = tmp24;
									bool tmp25 = (frameObject->clipDepth > (int)0);
									if ((tmp25)){
										(this->__maskCount)++;
									}
									::openfl::display::_MovieClip::TimelineObject tmp26 = timelineObject;
									this->__objectDepths->push(tmp26);
									::haxe::ds::IntMap tmp27 = this->__objects;
									int tmp28 = frameObject->id;
									::openfl::display::_MovieClip::TimelineObject tmp29 = timelineObject;
									tmp27->set(tmp28,tmp29);
									depthChange = true;
								}
							}
							else{
								::haxe::ds::IntMap tmp20 = this->__objects;
								int tmp21 = frameObject->id;
								::openfl::display::_MovieClip::TimelineObject tmp22 = tmp20->get(tmp21);
								timelineObject = tmp22;
								displayObject = timelineObject->displayObject;
								::openfl::display::DisplayObjectContainer tmp23 = timelineObject->displayObject->parent;
								bool tmp24 = (tmp23 == null());
								if ((tmp24)){
									bool tmp25 = (frameObject->clipDepth > (int)0);
									if ((tmp25)){
										(this->__maskCount)++;
									}
									::openfl::display::_MovieClip::TimelineObject tmp26 = timelineObject;
									this->__objectDepths->push(tmp26);
									depthChange = true;
								}
							}
							bool tmp20 = (displayObject != null());
							if ((tmp20)){
								::openfl::display::DisplayObject tmp21 = displayObject;
								::openfl::_internal::timeline::FrameObject tmp22 = frameObject;
								this->__placeObject(tmp21,tmp22);
							}
						}
						else{
							::haxe::ds::IntMap tmp14 = this->__objects;
							int tmp15 = frameObject->id;
							bool tmp16 = tmp14->exists(tmp15);
							if ((tmp16)){
								::haxe::ds::IntMap tmp17 = this->__objects;
								int tmp18 = frameObject->id;
								::openfl::display::_MovieClip::TimelineObject tmp19 = tmp17->get(tmp18);
								timelineObject = tmp19;
								bool tmp20 = (timelineObject != null());
								if ((tmp20)){
									::openfl::display::DisplayObjectContainer tmp21 = timelineObject->displayObject->parent;
									bool tmp22 = (tmp21 == hx::ObjectPtr<OBJ_>(this));
									if ((tmp22)){
										::openfl::display::DisplayObject tmp23 = timelineObject->displayObject;
										this->removeChild(tmp23);
									}
									bool tmp23 = (timelineObject->clipDepth > (int)0);
									if ((tmp23)){
										(this->__maskCount)--;
										{
											int _g4 = (int)0;
											Array< ::Dynamic > _g5 = this->__objectDepths;
											while((true)){
												bool tmp24 = (_g4 < _g5->length);
												bool tmp25 = !(tmp24);
												if ((tmp25)){
													break;
												}
												::openfl::display::_MovieClip::TimelineObject tmp26 = _g5->__get(_g4).StaticCast< ::openfl::display::_MovieClip::TimelineObject >();
												::openfl::display::_MovieClip::TimelineObject object = tmp26;
												++(_g4);
												::openfl::display::DisplayObject tmp27 = object->displayObject->get_mask();
												::openfl::display::DisplayObject tmp28 = timelineObject->displayObject;
												bool tmp29 = (tmp27 == tmp28);
												if ((tmp29)){
													object->displayObject->set_mask(null());
												}
											}
										}
									}
									::openfl::display::_MovieClip::TimelineObject tmp24 = timelineObject;
									this->__objectDepths->remove(tmp24);
								}
								depthChange = true;
							}
						}
					}
				}
			}
		}
		bool tmp3 = depthChange;
		if ((tmp3)){
			Dynamic tmp4 = this->__sortTimelineDepth_dyn();
			this->__objectDepths->sort(tmp4);
			int tmp5 = this->__objectDepths->length;
			int tmp6 = (tmp5 - (int)1);
			int i = tmp6;
			while((true)){
				bool tmp7 = (i >= (int)0);
				bool tmp8 = !(tmp7);
				if ((tmp8)){
					break;
				}
				::openfl::display::_MovieClip::TimelineObject tmp9 = this->__objectDepths->__get(i).StaticCast< ::openfl::display::_MovieClip::TimelineObject >();
				timelineObject = tmp9;
				::openfl::display::DisplayObject tmp10 = timelineObject->displayObject;
				this->addChildAt(tmp10,(int)0);
				(i)--;
			}
		}
		int tmp4 = this->__maskCount;
		bool tmp5 = (tmp4 > (int)0);
		if ((tmp5)){
			Dynamic object;
			::openfl::display::DisplayObject mask;
			{
				int _g = (int)0;
				Array< ::Dynamic > _g1 = this->__objectDepths;
				while((true)){
					bool tmp6 = (_g < _g1->length);
					bool tmp7 = !(tmp6);
					if ((tmp7)){
						break;
					}
					::openfl::display::_MovieClip::TimelineObject tmp8 = _g1->__get(_g).StaticCast< ::openfl::display::_MovieClip::TimelineObject >();
					::openfl::display::_MovieClip::TimelineObject timelineObject1 = tmp8;
					++(_g);
					bool tmp9 = (timelineObject1->clipDepth > (int)0);
					if ((tmp9)){
						mask = timelineObject1->displayObject;
						{
							int _g2 = (int)0;
							Array< ::Dynamic > _g3 = this->__objectDepths;
							while((true)){
								bool tmp10 = (_g2 < _g3->length);
								bool tmp11 = !(tmp10);
								if ((tmp11)){
									break;
								}
								::openfl::display::_MovieClip::TimelineObject tmp12 = _g3->__get(_g2).StaticCast< ::openfl::display::_MovieClip::TimelineObject >();
								::openfl::display::_MovieClip::TimelineObject object1 = tmp12;
								++(_g2);
								bool tmp13 = (object1->depth <= timelineObject1->clipDepth);
								if ((tmp13)){
									bool tmp14 = (object1->depth >= timelineObject1->depth);
									if ((tmp14)){
										::openfl::display::DisplayObject tmp15 = mask;
										object1->displayObject->set_mask(tmp15);
									}
								}
								else{
									break;
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


HX_DEFINE_DYNAMIC_FUNC1(MovieClip_obj,__renderFrame,(void))

int MovieClip_obj::__sortTimelineDepth( ::openfl::display::_MovieClip::TimelineObject a,::openfl::display::_MovieClip::TimelineObject b){
	int tmp = (a->depth - b->depth);
	return tmp;
}


HX_DEFINE_DYNAMIC_FUNC2(MovieClip_obj,__sortTimelineDepth,return )

Void MovieClip_obj::__stopAllMovieClips( ){
{
		this->super::__stopAllMovieClips();
		this->stop();
	}
return null();
}


Void MovieClip_obj::__updateFrame( ){
{
		int tmp = this->__currentFrame;
		int tmp1 = this->__lastUpdate;
		bool tmp2 = (tmp != tmp1);
		if ((tmp2)){
			int tmp3 = this->__currentFrame;
			int tmp4 = (tmp3 - (int)1);
			int frameIndex = tmp4;
			bool tmp5 = (frameIndex > (int)-1);
			if ((tmp5)){
				::openfl::_internal::symbols::SpriteSymbol tmp6 = this->__symbol;
				int tmp7 = tmp6->frames->length;
				int tmp8 = frameIndex;
				bool tmp9 = (tmp7 > tmp8);
				bool tmp10;
				if ((tmp9)){
					::openfl::_internal::symbols::SpriteSymbol tmp11 = this->__symbol;
					::openfl::_internal::symbols::SpriteSymbol tmp12 = tmp11;
					::openfl::_internal::timeline::Frame tmp13 = tmp12->frames->__get(frameIndex).StaticCast< ::openfl::_internal::timeline::Frame >();
					::openfl::_internal::timeline::Frame tmp14 = tmp13;
					tmp10 = (tmp14 != null());
				}
				else{
					tmp10 = false;
				}
				if ((tmp10)){
					::openfl::_internal::symbols::SpriteSymbol tmp11 = this->__symbol;
					::openfl::_internal::timeline::Frame tmp12 = tmp11->frames->__get(frameIndex).StaticCast< ::openfl::_internal::timeline::Frame >();
					this->__currentFrameLabel = tmp12->label;
				}
				else{
					this->__currentFrameLabel = null();
				}
				::String tmp11 = this->__currentFrameLabel;
				bool tmp12 = (tmp11 != null());
				if ((tmp12)){
					::String tmp13 = this->__currentFrameLabel;
					this->__currentLabel = tmp13;
				}
				else{
					int tmp13 = this->__currentFrame;
					int tmp14 = this->__lastUpdate;
					int tmp15 = (tmp14 + (int)1);
					bool tmp16 = (tmp13 != tmp15);
					if ((tmp16)){
						this->__currentLabel = null();
						{
							int _g = (int)0;
							Array< ::Dynamic > _g1 = this->__currentLabels;
							while((true)){
								bool tmp17 = (_g < _g1->length);
								bool tmp18 = !(tmp17);
								if ((tmp18)){
									break;
								}
								::openfl::display::FrameLabel tmp19 = _g1->__get(_g).StaticCast< ::openfl::display::FrameLabel >();
								::openfl::display::FrameLabel label = tmp19;
								++(_g);
								int tmp20 = label->get_frame();
								int tmp21 = this->__currentFrame;
								bool tmp22 = (tmp20 <= tmp21);
								if ((tmp22)){
									::String tmp23 = label->get_name();
									this->__currentLabel = tmp23;
								}
								else{
									break;
								}
							}
						}
					}
				}
				int tmp13 = frameIndex;
				this->__renderFrame(tmp13);
			}
		}
		int tmp3 = this->__currentFrame;
		this->__lastUpdate = tmp3;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(MovieClip_obj,__updateFrame,(void))

int MovieClip_obj::get_currentFrame( ){
	int tmp = this->__currentFrame;
	return tmp;
}


HX_DEFINE_DYNAMIC_FUNC0(MovieClip_obj,get_currentFrame,return )

::String MovieClip_obj::get_currentFrameLabel( ){
	::String tmp = this->__currentFrameLabel;
	return tmp;
}


HX_DEFINE_DYNAMIC_FUNC0(MovieClip_obj,get_currentFrameLabel,return )

::String MovieClip_obj::get_currentLabel( ){
	::String tmp = this->__currentLabel;
	return tmp;
}


HX_DEFINE_DYNAMIC_FUNC0(MovieClip_obj,get_currentLabel,return )

Array< ::Dynamic > MovieClip_obj::get_currentLabels( ){
	return this->__currentLabels;
}


HX_DEFINE_DYNAMIC_FUNC0(MovieClip_obj,get_currentLabels,return )

int MovieClip_obj::get_framesLoaded( ){
	int tmp = this->__totalFrames;
	return tmp;
}


HX_DEFINE_DYNAMIC_FUNC0(MovieClip_obj,get_framesLoaded,return )

bool MovieClip_obj::get_isPlaying( ){
	bool tmp = this->__playing;
	return tmp;
}


HX_DEFINE_DYNAMIC_FUNC0(MovieClip_obj,get_isPlaying,return )

int MovieClip_obj::get_totalFrames( ){
	int tmp = this->__totalFrames;
	return tmp;
}


HX_DEFINE_DYNAMIC_FUNC0(MovieClip_obj,get_totalFrames,return )

::openfl::_internal::swf::SWFLite MovieClip_obj::__initSWF;

::openfl::_internal::symbols::SpriteSymbol MovieClip_obj::__initSymbol;


MovieClip_obj::MovieClip_obj()
{
}

void MovieClip_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(MovieClip);
	HX_MARK_MEMBER_NAME(enabled,"enabled");
	HX_MARK_MEMBER_NAME(__currentFrame,"__currentFrame");
	HX_MARK_MEMBER_NAME(__currentFrameLabel,"__currentFrameLabel");
	HX_MARK_MEMBER_NAME(__currentLabel,"__currentLabel");
	HX_MARK_MEMBER_NAME(__currentLabels,"__currentLabels");
	HX_MARK_MEMBER_NAME(__frameScripts,"__frameScripts");
	HX_MARK_MEMBER_NAME(__frameTime,"__frameTime");
	HX_MARK_MEMBER_NAME(__lastUpdate,"__lastUpdate");
	HX_MARK_MEMBER_NAME(__maskCount,"__maskCount");
	HX_MARK_MEMBER_NAME(__objectDepths,"__objectDepths");
	HX_MARK_MEMBER_NAME(__objects,"__objects");
	HX_MARK_MEMBER_NAME(__playing,"__playing");
	HX_MARK_MEMBER_NAME(__swf,"__swf");
	HX_MARK_MEMBER_NAME(__symbol,"__symbol");
	HX_MARK_MEMBER_NAME(__timeElapsed,"__timeElapsed");
	HX_MARK_MEMBER_NAME(__totalFrames,"__totalFrames");
	HX_MARK_MEMBER_NAME(__zeroSymbol,"__zeroSymbol");
	::openfl::display::Sprite_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void MovieClip_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(enabled,"enabled");
	HX_VISIT_MEMBER_NAME(__currentFrame,"__currentFrame");
	HX_VISIT_MEMBER_NAME(__currentFrameLabel,"__currentFrameLabel");
	HX_VISIT_MEMBER_NAME(__currentLabel,"__currentLabel");
	HX_VISIT_MEMBER_NAME(__currentLabels,"__currentLabels");
	HX_VISIT_MEMBER_NAME(__frameScripts,"__frameScripts");
	HX_VISIT_MEMBER_NAME(__frameTime,"__frameTime");
	HX_VISIT_MEMBER_NAME(__lastUpdate,"__lastUpdate");
	HX_VISIT_MEMBER_NAME(__maskCount,"__maskCount");
	HX_VISIT_MEMBER_NAME(__objectDepths,"__objectDepths");
	HX_VISIT_MEMBER_NAME(__objects,"__objects");
	HX_VISIT_MEMBER_NAME(__playing,"__playing");
	HX_VISIT_MEMBER_NAME(__swf,"__swf");
	HX_VISIT_MEMBER_NAME(__symbol,"__symbol");
	HX_VISIT_MEMBER_NAME(__timeElapsed,"__timeElapsed");
	HX_VISIT_MEMBER_NAME(__totalFrames,"__totalFrames");
	HX_VISIT_MEMBER_NAME(__zeroSymbol,"__zeroSymbol");
	::openfl::display::Sprite_obj::__Visit(HX_VISIT_ARG);
}

Dynamic MovieClip_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"play") ) { return play_dyn(); }
		if (HX_FIELD_EQ(inName,"stop") ) { return stop_dyn(); }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"__swf") ) { return __swf; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"enabled") ) { return enabled; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"__symbol") ) { return __symbol; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"isPlaying") ) { if (inCallProp == hx::paccAlways) return get_isPlaying(); }
		if (HX_FIELD_EQ(inName,"__objects") ) { return __objects; }
		if (HX_FIELD_EQ(inName,"__playing") ) { return __playing; }
		if (HX_FIELD_EQ(inName,"nextFrame") ) { return nextFrame_dyn(); }
		if (HX_FIELD_EQ(inName,"prevFrame") ) { return prevFrame_dyn(); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"__getFrame") ) { return __getFrame_dyn(); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"totalFrames") ) { if (inCallProp == hx::paccAlways) return get_totalFrames(); }
		if (HX_FIELD_EQ(inName,"__frameTime") ) { return __frameTime; }
		if (HX_FIELD_EQ(inName,"__maskCount") ) { return __maskCount; }
		if (HX_FIELD_EQ(inName,"gotoAndPlay") ) { return gotoAndPlay_dyn(); }
		if (HX_FIELD_EQ(inName,"gotoAndStop") ) { return gotoAndStop_dyn(); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"currentFrame") ) { if (inCallProp == hx::paccAlways) return get_currentFrame(); }
		if (HX_FIELD_EQ(inName,"currentLabel") ) { if (inCallProp == hx::paccAlways) return get_currentLabel(); }
		if (HX_FIELD_EQ(inName,"framesLoaded") ) { if (inCallProp == hx::paccAlways) return get_framesLoaded(); }
		if (HX_FIELD_EQ(inName,"__lastUpdate") ) { return __lastUpdate; }
		if (HX_FIELD_EQ(inName,"__zeroSymbol") ) { return __zeroSymbol; }
		if (HX_FIELD_EQ(inName,"__applyTween") ) { return __applyTween_dyn(); }
		if (HX_FIELD_EQ(inName,"__enterFrame") ) { return __enterFrame_dyn(); }
		if (HX_FIELD_EQ(inName,"__fromSymbol") ) { return __fromSymbol_dyn(); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"currentLabels") ) { if (inCallProp == hx::paccAlways) return get_currentLabels(); }
		if (HX_FIELD_EQ(inName,"__timeElapsed") ) { return __timeElapsed; }
		if (HX_FIELD_EQ(inName,"__totalFrames") ) { return __totalFrames; }
		if (HX_FIELD_EQ(inName,"__placeObject") ) { return __placeObject_dyn(); }
		if (HX_FIELD_EQ(inName,"__renderFrame") ) { return __renderFrame_dyn(); }
		if (HX_FIELD_EQ(inName,"__updateFrame") ) { return __updateFrame_dyn(); }
		if (HX_FIELD_EQ(inName,"get_isPlaying") ) { return get_isPlaying_dyn(); }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"__currentFrame") ) { return __currentFrame; }
		if (HX_FIELD_EQ(inName,"__currentLabel") ) { return __currentLabel; }
		if (HX_FIELD_EQ(inName,"__frameScripts") ) { return __frameScripts; }
		if (HX_FIELD_EQ(inName,"__objectDepths") ) { return __objectDepths; }
		if (HX_FIELD_EQ(inName,"addFrameScript") ) { return addFrameScript_dyn(); }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"__currentLabels") ) { return __currentLabels; }
		if (HX_FIELD_EQ(inName,"get_totalFrames") ) { return get_totalFrames_dyn(); }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"get_currentFrame") ) { return get_currentFrame_dyn(); }
		if (HX_FIELD_EQ(inName,"get_currentLabel") ) { return get_currentLabel_dyn(); }
		if (HX_FIELD_EQ(inName,"get_framesLoaded") ) { return get_framesLoaded_dyn(); }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"currentFrameLabel") ) { if (inCallProp == hx::paccAlways) return get_currentFrameLabel(); }
		if (HX_FIELD_EQ(inName,"get_currentLabels") ) { return get_currentLabels_dyn(); }
		break;
	case 19:
		if (HX_FIELD_EQ(inName,"__currentFrameLabel") ) { return __currentFrameLabel; }
		if (HX_FIELD_EQ(inName,"__sortTimelineDepth") ) { return __sortTimelineDepth_dyn(); }
		if (HX_FIELD_EQ(inName,"__stopAllMovieClips") ) { return __stopAllMovieClips_dyn(); }
		break;
	case 21:
		if (HX_FIELD_EQ(inName,"get_currentFrameLabel") ) { return get_currentFrameLabel_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

bool MovieClip_obj::__GetStatic(const ::String &inName, Dynamic &outValue, hx::PropertyAccess inCallProp)
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

Dynamic MovieClip_obj::__SetField(const ::String &inName,const Dynamic &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"__swf") ) { __swf=inValue.Cast< ::openfl::_internal::swf::SWFLite >(); return inValue; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"enabled") ) { enabled=inValue.Cast< bool >(); return inValue; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"__symbol") ) { __symbol=inValue.Cast< ::openfl::_internal::symbols::SpriteSymbol >(); return inValue; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"__objects") ) { __objects=inValue.Cast< ::haxe::ds::IntMap >(); return inValue; }
		if (HX_FIELD_EQ(inName,"__playing") ) { __playing=inValue.Cast< bool >(); return inValue; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"__frameTime") ) { __frameTime=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"__maskCount") ) { __maskCount=inValue.Cast< int >(); return inValue; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"__lastUpdate") ) { __lastUpdate=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"__zeroSymbol") ) { __zeroSymbol=inValue.Cast< int >(); return inValue; }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"__timeElapsed") ) { __timeElapsed=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"__totalFrames") ) { __totalFrames=inValue.Cast< int >(); return inValue; }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"__currentFrame") ) { __currentFrame=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"__currentLabel") ) { __currentLabel=inValue.Cast< ::String >(); return inValue; }
		if (HX_FIELD_EQ(inName,"__frameScripts") ) { __frameScripts=inValue.Cast< ::haxe::ds::IntMap >(); return inValue; }
		if (HX_FIELD_EQ(inName,"__objectDepths") ) { __objectDepths=inValue.Cast< Array< ::Dynamic > >(); return inValue; }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"__currentLabels") ) { __currentLabels=inValue.Cast< Array< ::Dynamic > >(); return inValue; }
		break;
	case 19:
		if (HX_FIELD_EQ(inName,"__currentFrameLabel") ) { __currentFrameLabel=inValue.Cast< ::String >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

bool MovieClip_obj::__SetStatic(const ::String &inName,Dynamic &ioValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 9:
		if (HX_FIELD_EQ(inName,"__initSWF") ) { __initSWF=ioValue.Cast< ::openfl::_internal::swf::SWFLite >(); return true; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"__initSymbol") ) { __initSymbol=ioValue.Cast< ::openfl::_internal::symbols::SpriteSymbol >(); return true; }
	}
	return false;
}

void MovieClip_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("currentFrame","\x34","\x5d","\x8f","\x4d"));
	outFields->push(HX_HCSTRING("currentFrameLabel","\x20","\xc4","\x0a","\x2a"));
	outFields->push(HX_HCSTRING("currentLabel","\xfb","\xf2","\xba","\xb6"));
	outFields->push(HX_HCSTRING("currentLabels","\x18","\xa9","\xd9","\x2c"));
	outFields->push(HX_HCSTRING("enabled","\x81","\x04","\x31","\x7e"));
	outFields->push(HX_HCSTRING("framesLoaded","\x4b","\xac","\x61","\x0e"));
	outFields->push(HX_HCSTRING("isPlaying","\xa4","\x8c","\x16","\x8e"));
	outFields->push(HX_HCSTRING("totalFrames","\x8a","\xa2","\xbb","\x72"));
	outFields->push(HX_HCSTRING("__currentFrame","\x54","\xe0","\x4f","\x6e"));
	outFields->push(HX_HCSTRING("__currentFrameLabel","\x00","\xed","\xfa","\xdc"));
	outFields->push(HX_HCSTRING("__currentLabel","\x1b","\x76","\x7b","\xd7"));
	outFields->push(HX_HCSTRING("__currentLabels","\xf8","\xe1","\x8b","\xb4"));
	outFields->push(HX_HCSTRING("__frameScripts","\x7b","\x3e","\x2f","\xee"));
	outFields->push(HX_HCSTRING("__frameTime","\xba","\xd3","\xa9","\x68"));
	outFields->push(HX_HCSTRING("__lastUpdate","\x1f","\xe4","\x73","\x8a"));
	outFields->push(HX_HCSTRING("__maskCount","\x23","\xe5","\xf7","\xfe"));
	outFields->push(HX_HCSTRING("__objectDepths","\x4f","\x81","\x53","\x68"));
	outFields->push(HX_HCSTRING("__objects","\xb4","\xb9","\x9d","\x03"));
	outFields->push(HX_HCSTRING("__playing","\x4e","\x60","\x66","\x0b"));
	outFields->push(HX_HCSTRING("__swf","\x22","\x0c","\x34","\xf2"));
	outFields->push(HX_HCSTRING("__symbol","\x78","\x1a","\x0d","\x97"));
	outFields->push(HX_HCSTRING("__timeElapsed","\x8f","\x80","\x8e","\x75"));
	outFields->push(HX_HCSTRING("__totalFrames","\x6a","\xe3","\x33","\xbb"));
	outFields->push(HX_HCSTRING("__zeroSymbol","\xc0","\x7b","\x06","\xb9"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsBool,(int)offsetof(MovieClip_obj,enabled),HX_HCSTRING("enabled","\x81","\x04","\x31","\x7e")},
	{hx::fsInt,(int)offsetof(MovieClip_obj,__currentFrame),HX_HCSTRING("__currentFrame","\x54","\xe0","\x4f","\x6e")},
	{hx::fsString,(int)offsetof(MovieClip_obj,__currentFrameLabel),HX_HCSTRING("__currentFrameLabel","\x00","\xed","\xfa","\xdc")},
	{hx::fsString,(int)offsetof(MovieClip_obj,__currentLabel),HX_HCSTRING("__currentLabel","\x1b","\x76","\x7b","\xd7")},
	{hx::fsObject /*Array< ::Dynamic >*/ ,(int)offsetof(MovieClip_obj,__currentLabels),HX_HCSTRING("__currentLabels","\xf8","\xe1","\x8b","\xb4")},
	{hx::fsObject /*::haxe::ds::IntMap*/ ,(int)offsetof(MovieClip_obj,__frameScripts),HX_HCSTRING("__frameScripts","\x7b","\x3e","\x2f","\xee")},
	{hx::fsInt,(int)offsetof(MovieClip_obj,__frameTime),HX_HCSTRING("__frameTime","\xba","\xd3","\xa9","\x68")},
	{hx::fsInt,(int)offsetof(MovieClip_obj,__lastUpdate),HX_HCSTRING("__lastUpdate","\x1f","\xe4","\x73","\x8a")},
	{hx::fsInt,(int)offsetof(MovieClip_obj,__maskCount),HX_HCSTRING("__maskCount","\x23","\xe5","\xf7","\xfe")},
	{hx::fsObject /*Array< ::Dynamic >*/ ,(int)offsetof(MovieClip_obj,__objectDepths),HX_HCSTRING("__objectDepths","\x4f","\x81","\x53","\x68")},
	{hx::fsObject /*::haxe::ds::IntMap*/ ,(int)offsetof(MovieClip_obj,__objects),HX_HCSTRING("__objects","\xb4","\xb9","\x9d","\x03")},
	{hx::fsBool,(int)offsetof(MovieClip_obj,__playing),HX_HCSTRING("__playing","\x4e","\x60","\x66","\x0b")},
	{hx::fsObject /*::openfl::_internal::swf::SWFLite*/ ,(int)offsetof(MovieClip_obj,__swf),HX_HCSTRING("__swf","\x22","\x0c","\x34","\xf2")},
	{hx::fsObject /*::openfl::_internal::symbols::SpriteSymbol*/ ,(int)offsetof(MovieClip_obj,__symbol),HX_HCSTRING("__symbol","\x78","\x1a","\x0d","\x97")},
	{hx::fsInt,(int)offsetof(MovieClip_obj,__timeElapsed),HX_HCSTRING("__timeElapsed","\x8f","\x80","\x8e","\x75")},
	{hx::fsInt,(int)offsetof(MovieClip_obj,__totalFrames),HX_HCSTRING("__totalFrames","\x6a","\xe3","\x33","\xbb")},
	{hx::fsInt,(int)offsetof(MovieClip_obj,__zeroSymbol),HX_HCSTRING("__zeroSymbol","\xc0","\x7b","\x06","\xb9")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo sStaticStorageInfo[] = {
	{hx::fsObject /*::openfl::_internal::swf::SWFLite*/ ,(void *) &MovieClip_obj::__initSWF,HX_HCSTRING("__initSWF","\xf2","\xa6","\xdc","\x4c")},
	{hx::fsObject /*::openfl::_internal::symbols::SpriteSymbol*/ ,(void *) &MovieClip_obj::__initSymbol,HX_HCSTRING("__initSymbol","\xa8","\x85","\xb6","\x2b")},
	{ hx::fsUnknown, 0, null()}
};
#endif

static ::String sMemberFields[] = {
	HX_HCSTRING("enabled","\x81","\x04","\x31","\x7e"),
	HX_HCSTRING("__currentFrame","\x54","\xe0","\x4f","\x6e"),
	HX_HCSTRING("__currentFrameLabel","\x00","\xed","\xfa","\xdc"),
	HX_HCSTRING("__currentLabel","\x1b","\x76","\x7b","\xd7"),
	HX_HCSTRING("__currentLabels","\xf8","\xe1","\x8b","\xb4"),
	HX_HCSTRING("__frameScripts","\x7b","\x3e","\x2f","\xee"),
	HX_HCSTRING("__frameTime","\xba","\xd3","\xa9","\x68"),
	HX_HCSTRING("__lastUpdate","\x1f","\xe4","\x73","\x8a"),
	HX_HCSTRING("__maskCount","\x23","\xe5","\xf7","\xfe"),
	HX_HCSTRING("__objectDepths","\x4f","\x81","\x53","\x68"),
	HX_HCSTRING("__objects","\xb4","\xb9","\x9d","\x03"),
	HX_HCSTRING("__playing","\x4e","\x60","\x66","\x0b"),
	HX_HCSTRING("__swf","\x22","\x0c","\x34","\xf2"),
	HX_HCSTRING("__symbol","\x78","\x1a","\x0d","\x97"),
	HX_HCSTRING("__timeElapsed","\x8f","\x80","\x8e","\x75"),
	HX_HCSTRING("__totalFrames","\x6a","\xe3","\x33","\xbb"),
	HX_HCSTRING("__zeroSymbol","\xc0","\x7b","\x06","\xb9"),
	HX_HCSTRING("addFrameScript","\x77","\x21","\x7f","\xbb"),
	HX_HCSTRING("gotoAndPlay","\x08","\x65","\x84","\xef"),
	HX_HCSTRING("gotoAndStop","\x16","\x27","\x86","\xf1"),
	HX_HCSTRING("nextFrame","\x3a","\x92","\xc8","\xad"),
	HX_HCSTRING("play","\xf4","\x2d","\x5a","\x4a"),
	HX_HCSTRING("prevFrame","\x3a","\x18","\xda","\xf1"),
	HX_HCSTRING("stop","\x02","\xf0","\x5b","\x4c"),
	HX_HCSTRING("__applyTween","\x3d","\xa1","\x55","\xfd"),
	HX_HCSTRING("__enterFrame","\x15","\x7f","\xe3","\x3a"),
	HX_HCSTRING("__fromSymbol","\x82","\x2f","\xb5","\x6a"),
	HX_HCSTRING("__getFrame","\xd7","\xfa","\x92","\x09"),
	HX_HCSTRING("__placeObject","\xc6","\x77","\xf8","\x86"),
	HX_HCSTRING("__renderFrame","\xd7","\xe5","\xac","\x1a"),
	HX_HCSTRING("__sortTimelineDepth","\x64","\x4d","\xd7","\x27"),
	HX_HCSTRING("__stopAllMovieClips","\xd2","\x89","\xe8","\x53"),
	HX_HCSTRING("__updateFrame","\x44","\x22","\x94","\x34"),
	HX_HCSTRING("get_currentFrame","\xbd","\x49","\x2e","\x52"),
	HX_HCSTRING("get_currentFrameLabel","\xf7","\xc6","\xb8","\xa8"),
	HX_HCSTRING("get_currentLabel","\x84","\xdf","\x59","\xbb"),
	HX_HCSTRING("get_currentLabels","\x6f","\xb4","\x49","\x33"),
	HX_HCSTRING("get_framesLoaded","\xd4","\x98","\x00","\x13"),
	HX_HCSTRING("get_isPlaying","\x7b","\x60","\x7a","\x4f"),
	HX_HCSTRING("get_totalFrames","\x21","\x5a","\x9d","\x33"),
	::String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(MovieClip_obj::__mClass,"__mClass");
	HX_MARK_MEMBER_NAME(MovieClip_obj::__initSWF,"__initSWF");
	HX_MARK_MEMBER_NAME(MovieClip_obj::__initSymbol,"__initSymbol");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(MovieClip_obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(MovieClip_obj::__initSWF,"__initSWF");
	HX_VISIT_MEMBER_NAME(MovieClip_obj::__initSymbol,"__initSymbol");
};

#endif

hx::Class MovieClip_obj::__mClass;

static ::String sStaticFields[] = {
	HX_HCSTRING("__initSWF","\xf2","\xa6","\xdc","\x4c"),
	HX_HCSTRING("__initSymbol","\xa8","\x85","\xb6","\x2b"),
	::String(null()) };

void MovieClip_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("openfl.display.MovieClip","\xf6","\x30","\xc3","\xc4");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &MovieClip_obj::__GetStatic;
	__mClass->mSetStaticField = &MovieClip_obj::__SetStatic;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(sStaticFields);
	__mClass->mMembers = hx::Class_obj::dupFunctions(sMemberFields);
	__mClass->mCanCast = hx::TCanCast< MovieClip_obj >;
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
