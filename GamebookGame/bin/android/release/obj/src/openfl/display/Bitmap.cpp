#include <hxcpp.h>

#include "hxMath.h"
#ifndef INCLUDED_lime__backend_native_NativeGLRenderContext
#include <lime/_backend/native/NativeGLRenderContext.h>
#endif
#ifndef INCLUDED_lime_graphics_CanvasRenderContext
#include <lime/graphics/CanvasRenderContext.h>
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
#ifndef INCLUDED_lime_utils_ObjectPool_openfl_geom_Rectangle
#include <lime/utils/ObjectPool_openfl_geom_Rectangle.h>
#endif
#ifndef INCLUDED_lime_utils__DataPointer_DataPointer_Impl_
#include <lime/utils/_DataPointer/DataPointer_Impl_.h>
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
#ifndef INCLUDED_openfl_display_Graphics
#include <openfl/display/Graphics.h>
#endif
#ifndef INCLUDED_openfl_display_IBitmapDrawable
#include <openfl/display/IBitmapDrawable.h>
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
#ifndef INCLUDED_openfl_events_EventDispatcher
#include <openfl/events/EventDispatcher.h>
#endif
#ifndef INCLUDED_openfl_events_IEventDispatcher
#include <openfl/events/IEventDispatcher.h>
#endif
#ifndef INCLUDED_openfl_filters_BitmapFilter
#include <openfl/filters/BitmapFilter.h>
#endif
#ifndef INCLUDED_openfl_geom_Matrix
#include <openfl/geom/Matrix.h>
#endif
#ifndef INCLUDED_openfl_geom_Rectangle
#include <openfl/geom/Rectangle.h>
#endif
namespace openfl{
namespace display{

Void Bitmap_obj::__construct(::openfl::display::BitmapData bitmapData,Dynamic pixelSnapping,hx::Null< bool >  __o_smoothing)
{
bool smoothing = __o_smoothing.Default(false);
{
	super::__construct();
	::openfl::display::BitmapData tmp = bitmapData;
	this->set_bitmapData(tmp);
	this->pixelSnapping = pixelSnapping;
	this->smoothing = smoothing;
	bool tmp1 = (pixelSnapping == null());
	if ((tmp1)){
		this->pixelSnapping = ((Dynamic)((int)1));
	}
}
;
	return null();
}

//Bitmap_obj::~Bitmap_obj() { }

Dynamic Bitmap_obj::__CreateEmpty() { return  new Bitmap_obj; }
hx::ObjectPtr< Bitmap_obj > Bitmap_obj::__new(::openfl::display::BitmapData bitmapData,Dynamic pixelSnapping,hx::Null< bool >  __o_smoothing)
{  hx::ObjectPtr< Bitmap_obj > _result_ = new Bitmap_obj();
	_result_->__construct(bitmapData,pixelSnapping,__o_smoothing);
	return _result_;}

Dynamic Bitmap_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< Bitmap_obj > _result_ = new Bitmap_obj();
	_result_->__construct(inArgs[0],inArgs[1],inArgs[2]);
	return _result_;}

Void Bitmap_obj::__getBounds( ::openfl::geom::Rectangle rect,::openfl::geom::Matrix matrix){
{
		::openfl::display::BitmapData tmp = this->bitmapData;
		bool tmp1 = (tmp != null());
		if ((tmp1)){
			::lime::utils::ObjectPool_openfl_geom_Rectangle tmp2 = ::openfl::geom::Rectangle_obj::__pool;
			::openfl::geom::Rectangle tmp3 = tmp2->get();
			::openfl::geom::Rectangle bounds = tmp3;
			::openfl::display::BitmapData tmp4 = this->bitmapData;
			int tmp5 = tmp4->width;
			::openfl::display::BitmapData tmp6 = this->bitmapData;
			int tmp7 = tmp6->height;
			bounds->setTo((int)0,(int)0,tmp5,tmp7);
			::openfl::geom::Rectangle tmp8 = bounds;
			::openfl::geom::Matrix tmp9 = matrix;
			bounds->__transform(tmp8,tmp9);
			Float tmp10 = bounds->x;
			Float tmp11 = bounds->y;
			Float tmp12 = bounds->width;
			Float tmp13 = bounds->height;
			rect->__expand(tmp10,tmp11,tmp12,tmp13);
			::lime::utils::ObjectPool_openfl_geom_Rectangle tmp14 = ::openfl::geom::Rectangle_obj::__pool;
			::openfl::geom::Rectangle tmp15 = bounds;
			tmp14->release(tmp15);
		}
	}
return null();
}


bool Bitmap_obj::__hitTest( Float x,Float y,bool shapeFlag,Array< ::Dynamic > stack,bool interactiveOnly,::openfl::display::DisplayObject hitObject){
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
		::openfl::display::BitmapData tmp8 = this->bitmapData;
		::openfl::display::BitmapData tmp9 = tmp8;
		tmp7 = (tmp9 == null());
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
	this->__getRenderTransform();
	Float tmp11;
	{
		::openfl::geom::Matrix tmp12 = this->__renderTransform;
		::openfl::geom::Matrix _this = tmp12;
		Float tmp13 = (_this->a * _this->d);
		Float tmp14 = (_this->b * _this->c);
		Float tmp15 = (tmp13 - tmp14);
		Float norm = tmp15;
		bool tmp16 = (norm == (int)0);
		if ((tmp16)){
			Float tmp17 = _this->tx;
			tmp11 = -(tmp17);
		}
		else{
			Float tmp17 = (Float(((Float)1.0)) / Float(norm));
			Float tmp18 = _this->c;
			Float tmp19 = (_this->ty - y);
			Float tmp20 = (tmp18 * tmp19);
			Float tmp21 = _this->d;
			Float tmp22 = (x - _this->tx);
			Float tmp23 = (tmp21 * tmp22);
			Float tmp24 = (tmp20 + tmp23);
			tmp11 = (tmp17 * tmp24);
		}
	}
	Float px = tmp11;
	Float tmp12;
	{
		::openfl::geom::Matrix tmp13 = this->__renderTransform;
		::openfl::geom::Matrix _this = tmp13;
		Float tmp14 = (_this->a * _this->d);
		Float tmp15 = (_this->b * _this->c);
		Float tmp16 = (tmp14 - tmp15);
		Float norm = tmp16;
		bool tmp17 = (norm == (int)0);
		if ((tmp17)){
			Float tmp18 = _this->ty;
			tmp12 = -(tmp18);
		}
		else{
			Float tmp18 = (Float(((Float)1.0)) / Float(norm));
			Float tmp19 = _this->a;
			Float tmp20 = (y - _this->ty);
			Float tmp21 = (tmp19 * tmp20);
			Float tmp22 = _this->b;
			Float tmp23 = (_this->tx - x);
			Float tmp24 = (tmp22 * tmp23);
			Float tmp25 = (tmp21 + tmp24);
			tmp12 = (tmp18 * tmp25);
		}
	}
	Float py = tmp12;
	bool tmp13 = (px > (int)0);
	bool tmp14 = tmp13;
	bool tmp15;
	if ((tmp14)){
		tmp15 = (py > (int)0);
	}
	else{
		tmp15 = false;
	}
	bool tmp16 = tmp15;
	bool tmp17;
	if ((tmp16)){
		Float tmp18 = px;
		::openfl::display::BitmapData tmp19 = this->bitmapData;
		::openfl::display::BitmapData tmp20 = tmp19;
		::openfl::display::BitmapData tmp21 = tmp20;
		int tmp22 = tmp21->width;
		tmp17 = (tmp18 <= tmp22);
	}
	else{
		tmp17 = false;
	}
	bool tmp18;
	if ((tmp17)){
		Float tmp19 = py;
		::openfl::display::BitmapData tmp20 = this->bitmapData;
		::openfl::display::BitmapData tmp21 = tmp20;
		int tmp22 = tmp21->height;
		tmp18 = (tmp19 <= tmp22);
	}
	else{
		tmp18 = false;
	}
	if ((tmp18)){
		::openfl::geom::Rectangle tmp19 = this->__scrollRect;
		bool tmp20 = (tmp19 != null());
		bool tmp21;
		if ((tmp20)){
			::openfl::geom::Rectangle tmp22 = this->__scrollRect;
			::openfl::geom::Rectangle tmp23 = tmp22;
			Float tmp24 = px;
			Float tmp25 = py;
			Float tmp26 = tmp24;
			Float tmp27 = tmp25;
			bool tmp28 = tmp23->contains(tmp26,tmp27);
			bool tmp29 = tmp28;
			bool tmp30 = tmp29;
			tmp21 = !(tmp30);
		}
		else{
			tmp21 = false;
		}
		if ((tmp21)){
			return false;
		}
		bool tmp22 = (stack != null());
		bool tmp23;
		if ((tmp22)){
			bool tmp24 = interactiveOnly;
			bool tmp25 = tmp24;
			tmp23 = !(tmp25);
		}
		else{
			tmp23 = false;
		}
		if ((tmp23)){
			::openfl::display::DisplayObject tmp24 = hitObject;
			stack->push(tmp24);
		}
		return true;
	}
	return false;
}


bool Bitmap_obj::__hitTestMask( Float x,Float y){
	::openfl::display::BitmapData tmp = this->bitmapData;
	bool tmp1 = (tmp == null());
	if ((tmp1)){
		return false;
	}
	this->__getRenderTransform();
	Float tmp2;
	{
		::openfl::geom::Matrix tmp3 = this->__renderTransform;
		::openfl::geom::Matrix _this = tmp3;
		Float tmp4 = (_this->a * _this->d);
		Float tmp5 = (_this->b * _this->c);
		Float tmp6 = (tmp4 - tmp5);
		Float norm = tmp6;
		bool tmp7 = (norm == (int)0);
		if ((tmp7)){
			Float tmp8 = _this->tx;
			tmp2 = -(tmp8);
		}
		else{
			Float tmp8 = (Float(((Float)1.0)) / Float(norm));
			Float tmp9 = _this->c;
			Float tmp10 = (_this->ty - y);
			Float tmp11 = (tmp9 * tmp10);
			Float tmp12 = _this->d;
			Float tmp13 = (x - _this->tx);
			Float tmp14 = (tmp12 * tmp13);
			Float tmp15 = (tmp11 + tmp14);
			tmp2 = (tmp8 * tmp15);
		}
	}
	Float px = tmp2;
	Float tmp3;
	{
		::openfl::geom::Matrix tmp4 = this->__renderTransform;
		::openfl::geom::Matrix _this = tmp4;
		Float tmp5 = (_this->a * _this->d);
		Float tmp6 = (_this->b * _this->c);
		Float tmp7 = (tmp5 - tmp6);
		Float norm = tmp7;
		bool tmp8 = (norm == (int)0);
		if ((tmp8)){
			Float tmp9 = _this->ty;
			tmp3 = -(tmp9);
		}
		else{
			Float tmp9 = (Float(((Float)1.0)) / Float(norm));
			Float tmp10 = _this->a;
			Float tmp11 = (y - _this->ty);
			Float tmp12 = (tmp10 * tmp11);
			Float tmp13 = _this->b;
			Float tmp14 = (_this->tx - x);
			Float tmp15 = (tmp13 * tmp14);
			Float tmp16 = (tmp12 + tmp15);
			tmp3 = (tmp9 * tmp16);
		}
	}
	Float py = tmp3;
	bool tmp4 = (px > (int)0);
	bool tmp5 = tmp4;
	bool tmp6;
	if ((tmp5)){
		tmp6 = (py > (int)0);
	}
	else{
		tmp6 = false;
	}
	bool tmp7 = tmp6;
	bool tmp8;
	if ((tmp7)){
		Float tmp9 = px;
		::openfl::display::BitmapData tmp10 = this->bitmapData;
		::openfl::display::BitmapData tmp11 = tmp10;
		::openfl::display::BitmapData tmp12 = tmp11;
		int tmp13 = tmp12->width;
		tmp8 = (tmp9 <= tmp13);
	}
	else{
		tmp8 = false;
	}
	bool tmp9;
	if ((tmp8)){
		Float tmp10 = py;
		::openfl::display::BitmapData tmp11 = this->bitmapData;
		::openfl::display::BitmapData tmp12 = tmp11;
		int tmp13 = tmp12->height;
		tmp9 = (tmp10 <= tmp13);
	}
	else{
		tmp9 = false;
	}
	if ((tmp9)){
		return true;
	}
	return false;
}


Void Bitmap_obj::__renderCairo( ::openfl::_internal::renderer::RenderSession renderSession){
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
			Dynamic();
		}
		else{
			::lime::graphics::cairo::Cairo cairo = renderSession->cairo;
			::openfl::display::BitmapData tmp5 = this->bitmapData;
			bool tmp6 = (tmp5 != null());
			bool tmp7;
			if ((tmp6)){
				::openfl::display::BitmapData tmp8 = this->bitmapData;
				::openfl::display::BitmapData tmp9 = tmp8;
				tmp7 = tmp9->__isValid;
			}
			else{
				tmp7 = false;
			}
			if ((tmp7)){
				renderSession->maskManager->pushObject(hx::ObjectPtr<OBJ_>(this),null());
				::openfl::geom::Matrix tmp8 = this->__renderTransform;
				::openfl::geom::Matrix transform = tmp8;
				bool tmp9 = renderSession->roundPixels;
				if ((tmp9)){
					::lime::math::Matrix3 tmp10 = transform->__toMatrix3();
					::lime::math::Matrix3 matrix = tmp10;
					Float tmp11 = matrix->tx;
					int tmp12 = ::Math_obj::round(tmp11);
					matrix->tx = tmp12;
					Float tmp13 = matrix->ty;
					int tmp14 = ::Math_obj::round(tmp13);
					matrix->ty = tmp14;
					::lime::math::Matrix3 tmp15 = matrix;
					cairo->set_matrix(tmp15);
				}
				else{
					::lime::math::Matrix3 tmp10 = transform->__toMatrix3();
					cairo->set_matrix(tmp10);
				}
				::openfl::display::BitmapData tmp10 = this->bitmapData;
				Dynamic tmp11 = tmp10->getSurface();
				Dynamic surface = tmp11;
				bool tmp12 = (surface != null());
				if ((tmp12)){
					Dynamic tmp13 = surface;
					Dynamic tmp14 = ::lime::graphics::cairo::_CairoPattern::CairoPattern_Impl__obj::createForSurface(tmp13);
					Dynamic pattern = tmp14;
					Dynamic tmp15 = pattern;
					bool tmp16 = renderSession->allowSmoothing;
					bool tmp17;
					if ((tmp16)){
						tmp17 = this->smoothing;
					}
					else{
						tmp17 = false;
					}
					int tmp18;
					if ((tmp17)){
						tmp18 = (int)1;
					}
					else{
						tmp18 = (int)3;
					}
					::lime::graphics::cairo::_CairoPattern::CairoPattern_Impl__obj::set_filter(tmp15,tmp18);
					Dynamic tmp19 = pattern;
					cairo->set_source(tmp19);
					Float tmp20 = this->__worldAlpha;
					bool tmp21 = (tmp20 == (int)1);
					if ((tmp21)){
						cairo->paint();
					}
					else{
						Float tmp22 = this->__worldAlpha;
						cairo->paintWithAlpha(tmp22);
					}
				}
				renderSession->maskManager->popObject(hx::ObjectPtr<OBJ_>(this),null());
			}
		}
	}
return null();
}


Void Bitmap_obj::__renderCairoMask( ::openfl::_internal::renderer::RenderSession renderSession){
{
		Float tmp = this->get_width();
		Float tmp1 = this->get_height();
		renderSession->cairo->rectangle((int)0,(int)0,tmp,tmp1);
	}
return null();
}


Void Bitmap_obj::__renderCanvas( ::openfl::_internal::renderer::RenderSession renderSession){
{
		Dynamic();
	}
return null();
}


Void Bitmap_obj::__renderCanvasMask( ::openfl::_internal::renderer::RenderSession renderSession){
{
		Float tmp = this->get_width();
		Float tmp1 = this->get_height();
		renderSession->context->rect((int)0,(int)0,tmp,tmp1);
	}
return null();
}


Void Bitmap_obj::__renderDOM( ::openfl::_internal::renderer::RenderSession renderSession){
{
	}
return null();
}


Void Bitmap_obj::__renderGL( ::openfl::_internal::renderer::RenderSession renderSession){
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
			Dynamic();
		}
		else{
			::openfl::display::BitmapData tmp5 = this->bitmapData;
			bool tmp6 = (tmp5 != null());
			bool tmp7;
			if ((tmp6)){
				::openfl::display::BitmapData tmp8 = this->bitmapData;
				::openfl::display::BitmapData tmp9 = tmp8;
				tmp7 = tmp9->__isValid;
			}
			else{
				tmp7 = false;
			}
			if ((tmp7)){
				::openfl::_internal::renderer::opengl::GLRenderer renderer = ((::openfl::_internal::renderer::opengl::GLRenderer)(renderSession->renderer));
				::lime::_backend::native::NativeGLRenderContext gl = renderSession->gl;
				Dynamic tmp8 = this->__worldBlendMode;
				renderSession->blendModeManager->setBlendMode(tmp8);
				renderSession->maskManager->pushObject(hx::ObjectPtr<OBJ_>(this),null());
				::openfl::display::Shader tmp9 = renderSession->filterManager->pushObject(hx::ObjectPtr<OBJ_>(this));
				::openfl::display::Shader shader = tmp9;
				::openfl::display::BitmapData tmp10 = this->bitmapData;
				::openfl::display::ShaderData tmp11 = shader->get_data();
				tmp11->uImage0->input = tmp10;
				bool tmp12 = renderSession->allowSmoothing;
				bool tmp13;
				if ((tmp12)){
					bool tmp14 = this->smoothing;
					bool tmp15 = tmp14;
					bool tmp16 = tmp15;
					bool tmp17 = !(tmp16);
					bool tmp18 = tmp17;
					bool tmp19 = tmp18;
					if ((tmp19)){
						tmp13 = renderSession->upscaled;
					}
					else{
						tmp13 = true;
					}
				}
				else{
					tmp13 = false;
				}
				::openfl::display::ShaderData tmp14 = shader->get_data();
				tmp14->uImage0->smoothing = tmp13;
				::openfl::geom::Matrix tmp15 = this->__renderTransform;
				::openfl::display::ShaderData tmp16 = shader->get_data();
				tmp16->uMatrix->value = renderer->getMatrix(tmp15);
				::openfl::display::Shader tmp17 = shader;
				renderSession->shaderManager->setShader(tmp17);
				int tmp18 = gl->ARRAY_BUFFER;
				::openfl::display::BitmapData tmp19 = this->bitmapData;
				::lime::_backend::native::NativeGLRenderContext tmp20 = gl;
				Float tmp21 = this->__worldAlpha;
				::lime::graphics::opengl::GLObject tmp22 = tmp19->getBuffer(tmp20,tmp21);
				gl->bindBuffer(tmp18,tmp22);
				::openfl::display::ShaderData tmp23 = shader->get_data();
				int tmp24 = tmp23->aPosition->index;
				int tmp25 = gl->FLOAT;
				int tmp26 = (int)24;
				Float tmp27 = ::lime::utils::_DataPointer::DataPointer_Impl__obj::fromInt((int)0);
				gl->vertexAttribPointer(tmp24,(int)3,tmp25,false,tmp26,tmp27);
				::openfl::display::ShaderData tmp28 = shader->get_data();
				int tmp29 = tmp28->aTexCoord->index;
				int tmp30 = gl->FLOAT;
				int tmp31 = (int)24;
				int tmp32 = (int)12;
				Float tmp33 = ::lime::utils::_DataPointer::DataPointer_Impl__obj::fromInt(tmp32);
				gl->vertexAttribPointer(tmp29,(int)2,tmp30,false,tmp31,tmp33);
				::openfl::display::ShaderData tmp34 = shader->get_data();
				int tmp35 = tmp34->aAlpha->index;
				int tmp36 = gl->FLOAT;
				int tmp37 = (int)24;
				int tmp38 = (int)20;
				Float tmp39 = ::lime::utils::_DataPointer::DataPointer_Impl__obj::fromInt(tmp38);
				gl->vertexAttribPointer(tmp35,(int)1,tmp36,false,tmp37,tmp39);
				int tmp40 = gl->TRIANGLE_STRIP;
				gl->drawArrays(tmp40,(int)0,(int)4);
				renderSession->filterManager->popObject(hx::ObjectPtr<OBJ_>(this));
				renderSession->maskManager->popObject(hx::ObjectPtr<OBJ_>(this),null());
			}
		}
	}
return null();
}


Void Bitmap_obj::__updateMask( ::openfl::display::Graphics maskGraphics){
{
		::openfl::display::BitmapData tmp = this->bitmapData;
		bool tmp1 = (tmp == null());
		if ((tmp1)){
			return null();
		}
		::openfl::geom::Matrix tmp2 = this->__worldTransform;
		maskGraphics->__commands->overrideMatrix(tmp2);
		maskGraphics->beginFill((int)0,null());
		::openfl::display::BitmapData tmp3 = this->bitmapData;
		int tmp4 = tmp3->width;
		::openfl::display::BitmapData tmp5 = this->bitmapData;
		int tmp6 = tmp5->height;
		maskGraphics->drawRect((int)0,(int)0,tmp4,tmp6);
		bool tmp7 = (maskGraphics->__bounds == null());
		if ((tmp7)){
			::openfl::geom::Rectangle tmp8 = ::openfl::geom::Rectangle_obj::__new(null(),null(),null(),null());
			maskGraphics->__bounds = tmp8;
		}
		::openfl::geom::Rectangle tmp8 = maskGraphics->__bounds;
		::openfl::geom::Matrix tmp9 = ::openfl::geom::Matrix_obj::__identity;
		this->__getBounds(tmp8,tmp9);
		::openfl::display::Graphics tmp10 = maskGraphics;
		this->super::__updateMask(tmp10);
	}
return null();
}


::openfl::display::BitmapData Bitmap_obj::set_bitmapData( ::openfl::display::BitmapData value){
	this->bitmapData = value;
	this->smoothing = false;
	{
		bool tmp = this->__renderDirty;
		bool tmp1 = !(tmp);
		if ((tmp1)){
			this->__renderDirty = true;
			this->__setParentRenderDirty();
		}
	}
	bool tmp = (this->__filters != null());
	bool tmp1;
	if ((tmp)){
		int tmp2 = this->__filters->length;
		int tmp3 = tmp2;
		tmp1 = (tmp3 > (int)0);
	}
	else{
		tmp1 = false;
	}
	if ((tmp1)){
	}
	::openfl::display::BitmapData tmp2 = this->bitmapData;
	return tmp2;
}


HX_DEFINE_DYNAMIC_FUNC1(Bitmap_obj,set_bitmapData,return )

Float Bitmap_obj::get_height( ){
	::openfl::display::BitmapData tmp = this->bitmapData;
	bool tmp1 = (tmp != null());
	if ((tmp1)){
		::openfl::display::BitmapData tmp2 = this->bitmapData;
		int tmp3 = tmp2->height;
		Float tmp4 = this->get_scaleY();
		Float tmp5 = ::Math_obj::abs(tmp4);
		Float tmp6 = (tmp3 * tmp5);
		return tmp6;
	}
	return (int)0;
}


Float Bitmap_obj::set_height( Float value){
	::openfl::display::BitmapData tmp = this->bitmapData;
	bool tmp1 = (tmp != null());
	if ((tmp1)){
		Float tmp2 = value;
		::openfl::display::BitmapData tmp3 = this->bitmapData;
		int tmp4 = tmp3->height;
		bool tmp5 = (tmp2 != tmp4);
		if ((tmp5)){
			{
				bool tmp6 = this->__renderDirty;
				bool tmp7 = !(tmp6);
				if ((tmp7)){
					this->__renderDirty = true;
					this->__setParentRenderDirty();
				}
			}
			Float tmp6 = value;
			::openfl::display::BitmapData tmp7 = this->bitmapData;
			int tmp8 = tmp7->height;
			Float tmp9 = (Float(tmp6) / Float(tmp8));
			this->set_scaleY(tmp9);
		}
		Float tmp6 = value;
		return tmp6;
	}
	return (int)0;
}


Float Bitmap_obj::get_width( ){
	::openfl::display::BitmapData tmp = this->bitmapData;
	bool tmp1 = (tmp != null());
	if ((tmp1)){
		::openfl::display::BitmapData tmp2 = this->bitmapData;
		int tmp3 = tmp2->width;
		Float tmp4 = this->__scaleX;
		Float tmp5 = ::Math_obj::abs(tmp4);
		Float tmp6 = (tmp3 * tmp5);
		return tmp6;
	}
	return (int)0;
}


Float Bitmap_obj::set_width( Float value){
	::openfl::display::BitmapData tmp = this->bitmapData;
	bool tmp1 = (tmp != null());
	if ((tmp1)){
		Float tmp2 = value;
		::openfl::display::BitmapData tmp3 = this->bitmapData;
		int tmp4 = tmp3->width;
		bool tmp5 = (tmp2 != tmp4);
		if ((tmp5)){
			{
				bool tmp6 = this->__renderDirty;
				bool tmp7 = !(tmp6);
				if ((tmp7)){
					this->__renderDirty = true;
					this->__setParentRenderDirty();
				}
			}
			Float tmp6 = value;
			::openfl::display::BitmapData tmp7 = this->bitmapData;
			int tmp8 = tmp7->width;
			Float tmp9 = (Float(tmp6) / Float(tmp8));
			this->set_scaleX(tmp9);
		}
		Float tmp6 = value;
		return tmp6;
	}
	return (int)0;
}



Bitmap_obj::Bitmap_obj()
{
}

void Bitmap_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(Bitmap);
	HX_MARK_MEMBER_NAME(bitmapData,"bitmapData");
	HX_MARK_MEMBER_NAME(pixelSnapping,"pixelSnapping");
	HX_MARK_MEMBER_NAME(smoothing,"smoothing");
	::openfl::display::DisplayObject_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void Bitmap_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(bitmapData,"bitmapData");
	HX_VISIT_MEMBER_NAME(pixelSnapping,"pixelSnapping");
	HX_VISIT_MEMBER_NAME(smoothing,"smoothing");
	::openfl::display::DisplayObject_obj::__Visit(HX_VISIT_ARG);
}

Dynamic Bitmap_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 9:
		if (HX_FIELD_EQ(inName,"smoothing") ) { return smoothing; }
		if (HX_FIELD_EQ(inName,"__hitTest") ) { return __hitTest_dyn(); }
		if (HX_FIELD_EQ(inName,"get_width") ) { return get_width_dyn(); }
		if (HX_FIELD_EQ(inName,"set_width") ) { return set_width_dyn(); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"bitmapData") ) { return bitmapData; }
		if (HX_FIELD_EQ(inName,"__renderGL") ) { return __renderGL_dyn(); }
		if (HX_FIELD_EQ(inName,"get_height") ) { return get_height_dyn(); }
		if (HX_FIELD_EQ(inName,"set_height") ) { return set_height_dyn(); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"__getBounds") ) { return __getBounds_dyn(); }
		if (HX_FIELD_EQ(inName,"__renderDOM") ) { return __renderDOM_dyn(); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"__updateMask") ) { return __updateMask_dyn(); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"pixelSnapping") ) { return pixelSnapping; }
		if (HX_FIELD_EQ(inName,"__hitTestMask") ) { return __hitTestMask_dyn(); }
		if (HX_FIELD_EQ(inName,"__renderCairo") ) { return __renderCairo_dyn(); }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"__renderCanvas") ) { return __renderCanvas_dyn(); }
		if (HX_FIELD_EQ(inName,"set_bitmapData") ) { return set_bitmapData_dyn(); }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"__renderCairoMask") ) { return __renderCairoMask_dyn(); }
		break;
	case 18:
		if (HX_FIELD_EQ(inName,"__renderCanvasMask") ) { return __renderCanvasMask_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic Bitmap_obj::__SetField(const ::String &inName,const Dynamic &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 9:
		if (HX_FIELD_EQ(inName,"smoothing") ) { smoothing=inValue.Cast< bool >(); return inValue; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"bitmapData") ) { if (inCallProp == hx::paccAlways) return set_bitmapData(inValue);bitmapData=inValue.Cast< ::openfl::display::BitmapData >(); return inValue; }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"pixelSnapping") ) { pixelSnapping=inValue.Cast< Dynamic >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void Bitmap_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("bitmapData","\xb9","\xb5","\xc0","\x33"));
	outFields->push(HX_HCSTRING("pixelSnapping","\x62","\xae","\xa1","\xb8"));
	outFields->push(HX_HCSTRING("smoothing","\x74","\xd5","\xe1","\x95"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsObject /*::openfl::display::BitmapData*/ ,(int)offsetof(Bitmap_obj,bitmapData),HX_HCSTRING("bitmapData","\xb9","\xb5","\xc0","\x33")},
	{hx::fsObject /*Dynamic*/ ,(int)offsetof(Bitmap_obj,pixelSnapping),HX_HCSTRING("pixelSnapping","\x62","\xae","\xa1","\xb8")},
	{hx::fsBool,(int)offsetof(Bitmap_obj,smoothing),HX_HCSTRING("smoothing","\x74","\xd5","\xe1","\x95")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo *sStaticStorageInfo = 0;
#endif

static ::String sMemberFields[] = {
	HX_HCSTRING("bitmapData","\xb9","\xb5","\xc0","\x33"),
	HX_HCSTRING("pixelSnapping","\x62","\xae","\xa1","\xb8"),
	HX_HCSTRING("smoothing","\x74","\xd5","\xe1","\x95"),
	HX_HCSTRING("__getBounds","\x8b","\x58","\xa0","\x10"),
	HX_HCSTRING("__hitTest","\x25","\xb1","\xcd","\x63"),
	HX_HCSTRING("__hitTestMask","\xb1","\x14","\xfd","\x3b"),
	HX_HCSTRING("__renderCairo","\x32","\x9e","\x42","\x55"),
	HX_HCSTRING("__renderCairoMask","\x3e","\x0c","\x22","\x6b"),
	HX_HCSTRING("__renderCanvas","\xee","\xdb","\x58","\x48"),
	HX_HCSTRING("__renderCanvasMask","\xfa","\xd7","\xef","\x51"),
	HX_HCSTRING("__renderDOM","\xac","\xf5","\x83","\xfb"),
	HX_HCSTRING("__renderGL","\x1b","\x1e","\x14","\x56"),
	HX_HCSTRING("__updateMask","\xb5","\xa6","\x9e","\x39"),
	HX_HCSTRING("set_bitmapData","\x76","\x26","\xd6","\xc9"),
	HX_HCSTRING("get_height","\xb0","\x77","\xd3","\xf2"),
	HX_HCSTRING("set_height","\x24","\x16","\x51","\xf6"),
	HX_HCSTRING("get_width","\x5d","\x12","\x0c","\x0e"),
	HX_HCSTRING("set_width","\x69","\xfe","\x5c","\xf1"),
	::String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(Bitmap_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(Bitmap_obj::__mClass,"__mClass");
};

#endif

hx::Class Bitmap_obj::__mClass;

void Bitmap_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("openfl.display.Bitmap","\xd9","\x2f","\x4d","\x7b");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = hx::Class_obj::dupFunctions(sMemberFields);
	__mClass->mCanCast = hx::TCanCast< Bitmap_obj >;
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
