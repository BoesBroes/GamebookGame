#include <hxcpp.h>

#include "hxMath.h"
#ifndef INCLUDED_lime__backend_native_NativeGLRenderContext
#include <lime/_backend/native/NativeGLRenderContext.h>
#endif
#ifndef INCLUDED_lime_app_IModule
#include <lime/app/IModule.h>
#endif
#ifndef INCLUDED_lime_graphics_opengl_GLObject
#include <lime/graphics/opengl/GLObject.h>
#endif
#ifndef INCLUDED_lime_math__Matrix4_Matrix4_Impl_
#include <lime/math/_Matrix4/Matrix4_Impl_.h>
#endif
#ifndef INCLUDED_lime_ui_Window
#include <lime/ui/Window.h>
#endif
#ifndef INCLUDED_lime_utils_ArrayBufferView
#include <lime/utils/ArrayBufferView.h>
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
#ifndef INCLUDED_openfl__internal_renderer_RenderSession
#include <openfl/_internal/renderer/RenderSession.h>
#endif
#ifndef INCLUDED_openfl__internal_renderer_opengl_GLBlendModeManager
#include <openfl/_internal/renderer/opengl/GLBlendModeManager.h>
#endif
#ifndef INCLUDED_openfl__internal_renderer_opengl_GLFilterManager
#include <openfl/_internal/renderer/opengl/GLFilterManager.h>
#endif
#ifndef INCLUDED_openfl__internal_renderer_opengl_GLMaskManager
#include <openfl/_internal/renderer/opengl/GLMaskManager.h>
#endif
#ifndef INCLUDED_openfl__internal_renderer_opengl_GLRenderer
#include <openfl/_internal/renderer/opengl/GLRenderer.h>
#endif
#ifndef INCLUDED_openfl__internal_renderer_opengl_GLShaderManager
#include <openfl/_internal/renderer/opengl/GLShaderManager.h>
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
#ifndef INCLUDED_openfl_display_IBitmapDrawable
#include <openfl/display/IBitmapDrawable.h>
#endif
#ifndef INCLUDED_openfl_display_InteractiveObject
#include <openfl/display/InteractiveObject.h>
#endif
#ifndef INCLUDED_openfl_display_Stage
#include <openfl/display/Stage.h>
#endif
#ifndef INCLUDED_openfl_display_Stage3D
#include <openfl/display/Stage3D.h>
#endif
#ifndef INCLUDED_openfl_display3D_Context3D
#include <openfl/display3D/Context3D.h>
#endif
#ifndef INCLUDED_openfl_display3D_textures_RectangleTexture
#include <openfl/display3D/textures/RectangleTexture.h>
#endif
#ifndef INCLUDED_openfl_display3D_textures_TextureBase
#include <openfl/display3D/textures/TextureBase.h>
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
namespace openfl{
namespace _internal{
namespace renderer{
namespace opengl{

Void GLRenderer_obj::__construct(::openfl::display::Stage stage,::lime::_backend::native::NativeGLRenderContext gl,hx::Null< bool >  __o_flipped)
{
bool flipped = __o_flipped.Default(true);
{
	::openfl::display::Stage tmp = stage;
	super::__construct(tmp);
	this->gl = gl;
	this->flipped = flipped;
	::lime::utils::ArrayBufferView tmp1 = ::lime::math::_Matrix4::Matrix4_Impl__obj::_new(null());
	this->matrix = tmp1;
	this->values = Array_obj< Float >::__new();
	::openfl::_internal::renderer::RenderSession tmp2 = ::openfl::_internal::renderer::RenderSession_obj::__new();
	this->renderSession = tmp2;
	::openfl::_internal::renderer::RenderSession tmp3 = this->renderSession;
	tmp3->clearDirtyFlags = true;
	::openfl::_internal::renderer::RenderSession tmp4 = this->renderSession;
	tmp4->gl = gl;
	::openfl::_internal::renderer::RenderSession tmp5 = this->renderSession;
	tmp5->renderer = hx::ObjectPtr<OBJ_>(this);
	::openfl::_internal::renderer::opengl::GLBlendModeManager tmp6 = ::openfl::_internal::renderer::opengl::GLBlendModeManager_obj::__new(gl);
	::openfl::_internal::renderer::RenderSession tmp7 = this->renderSession;
	tmp7->blendModeManager = tmp6;
	::openfl::_internal::renderer::RenderSession tmp8 = this->renderSession;
	::openfl::_internal::renderer::opengl::GLFilterManager tmp9 = ::openfl::_internal::renderer::opengl::GLFilterManager_obj::__new(hx::ObjectPtr<OBJ_>(this),tmp8);
	::openfl::_internal::renderer::RenderSession tmp10 = this->renderSession;
	tmp10->filterManager = tmp9;
	::openfl::_internal::renderer::opengl::GLShaderManager tmp11 = ::openfl::_internal::renderer::opengl::GLShaderManager_obj::__new(gl);
	::openfl::_internal::renderer::RenderSession tmp12 = this->renderSession;
	tmp12->shaderManager = tmp11;
	::openfl::_internal::renderer::RenderSession tmp13 = this->renderSession;
	::openfl::_internal::renderer::opengl::GLMaskManager tmp14 = ::openfl::_internal::renderer::opengl::GLMaskManager_obj::__new(tmp13);
	::openfl::_internal::renderer::RenderSession tmp15 = this->renderSession;
	tmp15->maskManager = tmp14;
	bool tmp16 = (stage->window != null());
	if ((tmp16)){
		::openfl::display::Stage3D tmp17 = stage->stage3Ds->get((int)0);
		::openfl::display3D::Context3D tmp18 = tmp17->context3D;
		bool tmp19 = (tmp18 == null());
		if ((tmp19)){
			::openfl::display::Stage3D tmp20 = stage->stage3Ds->get((int)0);
			::openfl::display::Stage tmp21 = stage;
			::openfl::_internal::renderer::RenderSession tmp22 = this->renderSession;
			tmp20->__createContext(tmp21,tmp22);
		}
		int tmp20 = stage->window->__width;
		Float tmp21 = stage->window->__scale;
		Float tmp22 = (tmp20 * tmp21);
		int tmp23 = ::Math_obj::ceil(tmp22);
		int tmp24 = stage->window->__height;
		Float tmp25 = stage->window->__scale;
		Float tmp26 = (tmp24 * tmp25);
		int tmp27 = ::Math_obj::ceil(tmp26);
		this->resize(tmp23,tmp27);
	}
}
;
	return null();
}

//GLRenderer_obj::~GLRenderer_obj() { }

Dynamic GLRenderer_obj::__CreateEmpty() { return  new GLRenderer_obj; }
hx::ObjectPtr< GLRenderer_obj > GLRenderer_obj::__new(::openfl::display::Stage stage,::lime::_backend::native::NativeGLRenderContext gl,hx::Null< bool >  __o_flipped)
{  hx::ObjectPtr< GLRenderer_obj > _result_ = new GLRenderer_obj();
	_result_->__construct(stage,gl,__o_flipped);
	return _result_;}

Dynamic GLRenderer_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< GLRenderer_obj > _result_ = new GLRenderer_obj();
	_result_->__construct(inArgs[0],inArgs[1],inArgs[2]);
	return _result_;}

Void GLRenderer_obj::clear( ){
{
		::openfl::display::Stage tmp = this->stage;
		bool tmp1 = tmp->__transparent;
		if ((tmp1)){
			::lime::_backend::native::NativeGLRenderContext tmp2 = this->gl;
			tmp2->clearColor((int)0,(int)0,(int)0,(int)0);
		}
		else{
			::lime::_backend::native::NativeGLRenderContext tmp2 = this->gl;
			::openfl::display::Stage tmp3 = this->stage;
			Float tmp4 = tmp3->__colorSplit->__get((int)0);
			::openfl::display::Stage tmp5 = this->stage;
			Float tmp6 = tmp5->__colorSplit->__get((int)1);
			::openfl::display::Stage tmp7 = this->stage;
			Float tmp8 = tmp7->__colorSplit->__get((int)2);
			tmp2->clearColor(tmp4,tmp6,tmp8,(int)1);
		}
		::lime::_backend::native::NativeGLRenderContext tmp2 = this->gl;
		::lime::_backend::native::NativeGLRenderContext tmp3 = this->gl;
		int tmp4 = tmp3->COLOR_BUFFER_BIT;
		tmp2->clear(tmp4);
	}
return null();
}


Void GLRenderer_obj::getCacheObject( ){
{
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(GLRenderer_obj,getCacheObject,(void))

Array< Float > GLRenderer_obj::getMatrix( ::openfl::geom::Matrix transform){
	::lime::utils::ObjectPool_openfl_geom_Matrix tmp = ::openfl::geom::Matrix_obj::__pool;
	::openfl::geom::Matrix tmp1 = tmp->get();
	::openfl::geom::Matrix _matrix = tmp1;
	::openfl::geom::Matrix tmp2 = transform;
	_matrix->copyFrom(tmp2);
	::openfl::geom::Matrix tmp3 = this->displayMatrix;
	_matrix->concat(tmp3);
	::openfl::_internal::renderer::RenderSession tmp4 = this->renderSession;
	bool tmp5 = tmp4->roundPixels;
	if ((tmp5)){
		Float tmp6 = _matrix->tx;
		int tmp7 = ::Math_obj::round(tmp6);
		_matrix->tx = tmp7;
		Float tmp8 = _matrix->ty;
		int tmp9 = ::Math_obj::round(tmp8);
		_matrix->ty = tmp9;
	}
	::lime::utils::ArrayBufferView tmp6 = this->matrix;
	::lime::math::_Matrix4::Matrix4_Impl__obj::identity(tmp6);
	::lime::utils::ArrayBufferView tmp7 = this->matrix;
	Float tmp8 = _matrix->a;
	::lime::math::_Matrix4::Matrix4_Impl__obj::set(tmp7,(int)0,tmp8);
	::lime::utils::ArrayBufferView tmp9 = this->matrix;
	Float tmp10 = _matrix->b;
	::lime::math::_Matrix4::Matrix4_Impl__obj::set(tmp9,(int)1,tmp10);
	::lime::utils::ArrayBufferView tmp11 = this->matrix;
	Float tmp12 = _matrix->c;
	::lime::math::_Matrix4::Matrix4_Impl__obj::set(tmp11,(int)4,tmp12);
	::lime::utils::ArrayBufferView tmp13 = this->matrix;
	Float tmp14 = _matrix->d;
	::lime::math::_Matrix4::Matrix4_Impl__obj::set(tmp13,(int)5,tmp14);
	::lime::utils::ArrayBufferView tmp15 = this->matrix;
	Float tmp16 = _matrix->tx;
	::lime::math::_Matrix4::Matrix4_Impl__obj::set(tmp15,(int)12,tmp16);
	::lime::utils::ArrayBufferView tmp17 = this->matrix;
	Float tmp18 = _matrix->ty;
	::lime::math::_Matrix4::Matrix4_Impl__obj::set(tmp17,(int)13,tmp18);
	::lime::utils::ArrayBufferView tmp19 = this->matrix;
	bool tmp20 = this->flipped;
	::lime::utils::ArrayBufferView tmp21;
	if ((tmp20)){
		tmp21 = this->projectionFlipped;
	}
	else{
		tmp21 = this->projection;
	}
	::lime::math::_Matrix4::Matrix4_Impl__obj::append(tmp19,tmp21);
	{
		int _g = (int)0;
		while((true)){
			bool tmp22 = (_g < (int)16);
			bool tmp23 = !(tmp22);
			if ((tmp23)){
				break;
			}
			int tmp24 = (_g)++;
			int i = tmp24;
			::lime::utils::ArrayBufferView tmp25 = this->matrix;
			int tmp26 = i;
			Float tmp27 = ::lime::math::_Matrix4::Matrix4_Impl__obj::get(tmp25,tmp26);
			this->values[i] = tmp27;
		}
	}
	::lime::utils::ObjectPool_openfl_geom_Matrix tmp22 = ::openfl::geom::Matrix_obj::__pool;
	::openfl::geom::Matrix tmp23 = _matrix;
	tmp22->release(tmp23);
	return this->values;
}


HX_DEFINE_DYNAMIC_FUNC1(GLRenderer_obj,getMatrix,return )

Void GLRenderer_obj::getRenderTarget( bool framebuffer){
{
		bool tmp = framebuffer;
		if ((tmp)){
			::openfl::display::BitmapData tmp1 = this->renderTargetA;
			bool tmp2 = (tmp1 == null());
			if ((tmp2)){
				::openfl::display::Stage tmp3 = this->stage;
				::openfl::display::Stage3D tmp4 = tmp3->stage3Ds->get((int)0);
				::openfl::display3D::Context3D tmp5 = tmp4->context3D;
				int tmp6 = this->width;
				int tmp7 = this->height;
				::openfl::display3D::textures::RectangleTexture tmp8 = tmp5->createRectangleTexture(tmp6,tmp7,((Dynamic)((int)1)),true);
				::openfl::display::BitmapData tmp9 = ::openfl::display::BitmapData_obj::fromTexture(tmp8);
				this->renderTargetA = tmp9;
				::lime::_backend::native::NativeGLRenderContext tmp10 = this->gl;
				::lime::_backend::native::NativeGLRenderContext tmp11 = this->gl;
				int tmp12 = tmp11->TEXTURE_2D;
				::openfl::display::BitmapData tmp13 = this->renderTargetA;
				::lime::_backend::native::NativeGLRenderContext tmp14 = this->gl;
				::lime::graphics::opengl::GLObject tmp15 = tmp13->getTexture(tmp14);
				tmp10->bindTexture(tmp12,tmp15);
				::lime::_backend::native::NativeGLRenderContext tmp16 = this->gl;
				::lime::_backend::native::NativeGLRenderContext tmp17 = this->gl;
				int tmp18 = tmp17->TEXTURE_2D;
				::lime::_backend::native::NativeGLRenderContext tmp19 = this->gl;
				int tmp20 = tmp19->TEXTURE_WRAP_S;
				::lime::_backend::native::NativeGLRenderContext tmp21 = this->gl;
				int tmp22 = tmp21->CLAMP_TO_EDGE;
				tmp16->texParameteri(tmp18,tmp20,tmp22);
				::lime::_backend::native::NativeGLRenderContext tmp23 = this->gl;
				::lime::_backend::native::NativeGLRenderContext tmp24 = this->gl;
				int tmp25 = tmp24->TEXTURE_2D;
				::lime::_backend::native::NativeGLRenderContext tmp26 = this->gl;
				int tmp27 = tmp26->TEXTURE_WRAP_T;
				::lime::_backend::native::NativeGLRenderContext tmp28 = this->gl;
				int tmp29 = tmp28->CLAMP_TO_EDGE;
				tmp23->texParameteri(tmp25,tmp27,tmp29);
			}
			::openfl::display::BitmapData tmp3 = this->renderTargetB;
			bool tmp4 = (tmp3 == null());
			if ((tmp4)){
				::openfl::display::Stage tmp5 = this->stage;
				::openfl::display::Stage3D tmp6 = tmp5->stage3Ds->get((int)0);
				::openfl::display3D::Context3D tmp7 = tmp6->context3D;
				int tmp8 = this->width;
				int tmp9 = this->height;
				::openfl::display3D::textures::RectangleTexture tmp10 = tmp7->createRectangleTexture(tmp8,tmp9,((Dynamic)((int)1)),true);
				::openfl::display::BitmapData tmp11 = ::openfl::display::BitmapData_obj::fromTexture(tmp10);
				this->renderTargetB = tmp11;
				::lime::_backend::native::NativeGLRenderContext tmp12 = this->gl;
				::lime::_backend::native::NativeGLRenderContext tmp13 = this->gl;
				int tmp14 = tmp13->TEXTURE_2D;
				::openfl::display::BitmapData tmp15 = this->renderTargetB;
				::lime::_backend::native::NativeGLRenderContext tmp16 = this->gl;
				::lime::graphics::opengl::GLObject tmp17 = tmp15->getTexture(tmp16);
				tmp12->bindTexture(tmp14,tmp17);
				::lime::_backend::native::NativeGLRenderContext tmp18 = this->gl;
				::lime::_backend::native::NativeGLRenderContext tmp19 = this->gl;
				int tmp20 = tmp19->TEXTURE_2D;
				::lime::_backend::native::NativeGLRenderContext tmp21 = this->gl;
				int tmp22 = tmp21->TEXTURE_WRAP_S;
				::lime::_backend::native::NativeGLRenderContext tmp23 = this->gl;
				int tmp24 = tmp23->CLAMP_TO_EDGE;
				tmp18->texParameteri(tmp20,tmp22,tmp24);
				::lime::_backend::native::NativeGLRenderContext tmp25 = this->gl;
				::lime::_backend::native::NativeGLRenderContext tmp26 = this->gl;
				int tmp27 = tmp26->TEXTURE_2D;
				::lime::_backend::native::NativeGLRenderContext tmp28 = this->gl;
				int tmp29 = tmp28->TEXTURE_WRAP_T;
				::lime::_backend::native::NativeGLRenderContext tmp30 = this->gl;
				int tmp31 = tmp30->CLAMP_TO_EDGE;
				tmp25->texParameteri(tmp27,tmp29,tmp31);
			}
			::openfl::display::BitmapData tmp5 = this->currentRenderTarget;
			::openfl::display::BitmapData tmp6 = this->renderTargetA;
			bool tmp7 = (tmp5 == tmp6);
			if ((tmp7)){
				::openfl::display::BitmapData tmp8 = this->renderTargetB;
				this->currentRenderTarget = tmp8;
			}
			else{
				::openfl::display::BitmapData tmp8 = this->renderTargetA;
				this->currentRenderTarget = tmp8;
			}
			::lime::_backend::native::NativeGLRenderContext tmp8 = this->gl;
			::lime::_backend::native::NativeGLRenderContext tmp9 = this->gl;
			int tmp10 = tmp9->FRAMEBUFFER;
			::openfl::display::BitmapData tmp11 = this->currentRenderTarget;
			::lime::_backend::native::NativeGLRenderContext tmp12 = this->gl;
			::lime::graphics::opengl::GLObject tmp13 = tmp11->__getFramebuffer(tmp12);
			tmp8->bindFramebuffer(tmp10,tmp13);
			::lime::_backend::native::NativeGLRenderContext tmp14 = this->gl;
			int tmp15 = this->width;
			int tmp16 = this->height;
			tmp14->viewport((int)0,(int)0,tmp15,tmp16);
			::lime::_backend::native::NativeGLRenderContext tmp17 = this->gl;
			tmp17->clearColor((int)0,(int)0,(int)0,(int)0);
			::lime::_backend::native::NativeGLRenderContext tmp18 = this->gl;
			::lime::_backend::native::NativeGLRenderContext tmp19 = this->gl;
			int tmp20 = tmp19->COLOR_BUFFER_BIT;
			tmp18->clear(tmp20);
			this->flipped = false;
		}
		else{
			::lime::_backend::native::NativeGLRenderContext tmp1 = this->gl;
			::lime::_backend::native::NativeGLRenderContext tmp2 = this->gl;
			int tmp3 = tmp2->FRAMEBUFFER;
			tmp1->bindFramebuffer(tmp3,null());
			this->flipped = true;
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(GLRenderer_obj,getRenderTarget,(void))

Void GLRenderer_obj::render( ){
{
		::lime::_backend::native::NativeGLRenderContext tmp = this->gl;
		int tmp1 = this->offsetX;
		int tmp2 = this->offsetY;
		int tmp3 = this->displayWidth;
		int tmp4 = this->displayHeight;
		tmp->viewport(tmp1,tmp2,tmp3,tmp4);
		::openfl::display::Stage tmp5 = this->stage;
		Dynamic tmp6 = tmp5->quality;
		bool tmp7 = (tmp6 != ((Dynamic)((int)2)));
		::openfl::_internal::renderer::RenderSession tmp8 = this->renderSession;
		tmp8->allowSmoothing = tmp7;
		::openfl::geom::Matrix tmp9 = this->displayMatrix;
		Float tmp10 = tmp9->a;
		bool tmp11 = (tmp10 != (int)1);
		bool tmp12 = !(tmp11);
		bool tmp13;
		if ((tmp12)){
			::openfl::geom::Matrix tmp14 = this->displayMatrix;
			::openfl::geom::Matrix tmp15 = tmp14;
			Float tmp16 = tmp15->d;
			tmp13 = (tmp16 != (int)1);
		}
		else{
			tmp13 = true;
		}
		::openfl::_internal::renderer::RenderSession tmp14 = this->renderSession;
		tmp14->upscaled = tmp13;
		::openfl::display::Stage tmp15 = this->stage;
		::openfl::_internal::renderer::RenderSession tmp16 = this->renderSession;
		tmp15->__renderGL(tmp16);
		int tmp17 = this->offsetX;
		bool tmp18 = (tmp17 > (int)0);
		bool tmp19 = !(tmp18);
		bool tmp20;
		if ((tmp19)){
			int tmp21 = this->offsetY;
			int tmp22 = tmp21;
			tmp20 = (tmp22 > (int)0);
		}
		else{
			tmp20 = true;
		}
		if ((tmp20)){
			::lime::_backend::native::NativeGLRenderContext tmp21 = this->gl;
			tmp21->clearColor((int)0,(int)0,(int)0,(int)1);
			::lime::_backend::native::NativeGLRenderContext tmp22 = this->gl;
			::lime::_backend::native::NativeGLRenderContext tmp23 = this->gl;
			int tmp24 = tmp23->SCISSOR_TEST;
			tmp22->enable(tmp24);
			int tmp25 = this->offsetX;
			bool tmp26 = (tmp25 > (int)0);
			if ((tmp26)){
				::lime::_backend::native::NativeGLRenderContext tmp27 = this->gl;
				int tmp28 = this->offsetX;
				int tmp29 = this->height;
				tmp27->scissor((int)0,(int)0,tmp28,tmp29);
				::lime::_backend::native::NativeGLRenderContext tmp30 = this->gl;
				::lime::_backend::native::NativeGLRenderContext tmp31 = this->gl;
				int tmp32 = tmp31->COLOR_BUFFER_BIT;
				tmp30->clear(tmp32);
				::lime::_backend::native::NativeGLRenderContext tmp33 = this->gl;
				int tmp34 = this->offsetX;
				int tmp35 = this->displayWidth;
				int tmp36 = (tmp34 + tmp35);
				int tmp37 = this->width;
				int tmp38 = this->height;
				tmp33->scissor(tmp36,(int)0,tmp37,tmp38);
				::lime::_backend::native::NativeGLRenderContext tmp39 = this->gl;
				::lime::_backend::native::NativeGLRenderContext tmp40 = this->gl;
				int tmp41 = tmp40->COLOR_BUFFER_BIT;
				tmp39->clear(tmp41);
			}
			int tmp27 = this->offsetY;
			bool tmp28 = (tmp27 > (int)0);
			if ((tmp28)){
				::lime::_backend::native::NativeGLRenderContext tmp29 = this->gl;
				int tmp30 = this->width;
				int tmp31 = this->offsetY;
				tmp29->scissor((int)0,(int)0,tmp30,tmp31);
				::lime::_backend::native::NativeGLRenderContext tmp32 = this->gl;
				::lime::_backend::native::NativeGLRenderContext tmp33 = this->gl;
				int tmp34 = tmp33->COLOR_BUFFER_BIT;
				tmp32->clear(tmp34);
				::lime::_backend::native::NativeGLRenderContext tmp35 = this->gl;
				int tmp36 = this->offsetY;
				int tmp37 = this->displayHeight;
				int tmp38 = (tmp36 + tmp37);
				int tmp39 = this->width;
				int tmp40 = this->height;
				tmp35->scissor((int)0,tmp38,tmp39,tmp40);
				::lime::_backend::native::NativeGLRenderContext tmp41 = this->gl;
				::lime::_backend::native::NativeGLRenderContext tmp42 = this->gl;
				int tmp43 = tmp42->COLOR_BUFFER_BIT;
				tmp41->clear(tmp43);
			}
			::lime::_backend::native::NativeGLRenderContext tmp29 = this->gl;
			::lime::_backend::native::NativeGLRenderContext tmp30 = this->gl;
			int tmp31 = tmp30->SCISSOR_TEST;
			tmp29->disable(tmp31);
		}
	}
return null();
}


Void GLRenderer_obj::renderStage3D( ){
{
		int _g = (int)0;
		::openfl::display::Stage tmp = this->stage;
		::openfl::_Vector::ObjectVector _g1 = tmp->stage3Ds;
		while((true)){
			int tmp1 = _g;
			int tmp2 = _g1->get_length();
			bool tmp3 = (tmp1 < tmp2);
			bool tmp4 = !(tmp3);
			if ((tmp4)){
				break;
			}
			int tmp5 = _g;
			::openfl::display::Stage3D tmp6 = _g1->get(tmp5);
			::openfl::display::Stage3D stage3D = tmp6;
			++(_g);
			::openfl::display::Stage tmp7 = this->stage;
			::openfl::_internal::renderer::RenderSession tmp8 = this->renderSession;
			stage3D->__renderGL(tmp7,tmp8);
		}
	}
return null();
}


Void GLRenderer_obj::resize( int width,int height){
{
		int tmp = width;
		int tmp1 = height;
		this->super::resize(tmp,tmp1);
		bool tmp2 = (width > (int)0);
		bool tmp3;
		if ((tmp2)){
			tmp3 = (height > (int)0);
		}
		else{
			tmp3 = false;
		}
		if ((tmp3)){
			::openfl::display::BitmapData tmp4 = this->renderTargetA;
			bool tmp5 = (tmp4 != null());
			bool tmp6;
			if ((tmp5)){
				::openfl::display::BitmapData tmp7 = this->renderTargetA;
				::openfl::display::BitmapData tmp8 = tmp7;
				int tmp9 = tmp8->width;
				int tmp10 = width;
				bool tmp11 = (tmp9 != tmp10);
				bool tmp12 = tmp11;
				bool tmp13 = tmp12;
				bool tmp14 = !(tmp13);
				bool tmp15 = tmp14;
				bool tmp16 = tmp15;
				if ((tmp16)){
					::openfl::display::BitmapData tmp17 = this->renderTargetA;
					::openfl::display::BitmapData tmp18 = tmp17;
					::openfl::display::BitmapData tmp19 = tmp18;
					int tmp20 = tmp19->height;
					int tmp21 = height;
					tmp6 = (tmp20 != tmp21);
				}
				else{
					tmp6 = true;
				}
			}
			else{
				tmp6 = false;
			}
			if ((tmp6)){
				::openfl::display::Stage tmp7 = this->stage;
				::openfl::display::Stage3D tmp8 = tmp7->stage3Ds->get((int)0);
				::openfl::display3D::Context3D tmp9 = tmp8->context3D;
				int tmp10 = width;
				int tmp11 = height;
				::openfl::display3D::textures::RectangleTexture tmp12 = tmp9->createRectangleTexture(tmp10,tmp11,((Dynamic)((int)1)),true);
				::openfl::display::BitmapData tmp13 = ::openfl::display::BitmapData_obj::fromTexture(tmp12);
				this->renderTargetA = tmp13;
				::lime::_backend::native::NativeGLRenderContext tmp14 = this->gl;
				::lime::_backend::native::NativeGLRenderContext tmp15 = this->gl;
				int tmp16 = tmp15->TEXTURE_2D;
				::openfl::display::BitmapData tmp17 = this->renderTargetA;
				::lime::_backend::native::NativeGLRenderContext tmp18 = this->gl;
				::lime::graphics::opengl::GLObject tmp19 = tmp17->getTexture(tmp18);
				tmp14->bindTexture(tmp16,tmp19);
				::lime::_backend::native::NativeGLRenderContext tmp20 = this->gl;
				::lime::_backend::native::NativeGLRenderContext tmp21 = this->gl;
				int tmp22 = tmp21->TEXTURE_2D;
				::lime::_backend::native::NativeGLRenderContext tmp23 = this->gl;
				int tmp24 = tmp23->TEXTURE_WRAP_S;
				::lime::_backend::native::NativeGLRenderContext tmp25 = this->gl;
				int tmp26 = tmp25->CLAMP_TO_EDGE;
				tmp20->texParameteri(tmp22,tmp24,tmp26);
				::lime::_backend::native::NativeGLRenderContext tmp27 = this->gl;
				::lime::_backend::native::NativeGLRenderContext tmp28 = this->gl;
				int tmp29 = tmp28->TEXTURE_2D;
				::lime::_backend::native::NativeGLRenderContext tmp30 = this->gl;
				int tmp31 = tmp30->TEXTURE_WRAP_T;
				::lime::_backend::native::NativeGLRenderContext tmp32 = this->gl;
				int tmp33 = tmp32->CLAMP_TO_EDGE;
				tmp27->texParameteri(tmp29,tmp31,tmp33);
			}
			::openfl::display::BitmapData tmp7 = this->renderTargetB;
			bool tmp8 = (tmp7 != null());
			bool tmp9;
			if ((tmp8)){
				::openfl::display::BitmapData tmp10 = this->renderTargetB;
				::openfl::display::BitmapData tmp11 = tmp10;
				int tmp12 = tmp11->width;
				int tmp13 = width;
				bool tmp14 = (tmp12 != tmp13);
				bool tmp15 = tmp14;
				bool tmp16 = tmp15;
				bool tmp17 = !(tmp16);
				bool tmp18 = tmp17;
				bool tmp19 = tmp18;
				if ((tmp19)){
					::openfl::display::BitmapData tmp20 = this->renderTargetB;
					::openfl::display::BitmapData tmp21 = tmp20;
					::openfl::display::BitmapData tmp22 = tmp21;
					int tmp23 = tmp22->height;
					int tmp24 = height;
					tmp9 = (tmp23 != tmp24);
				}
				else{
					tmp9 = true;
				}
			}
			else{
				tmp9 = false;
			}
			if ((tmp9)){
				::openfl::display::Stage tmp10 = this->stage;
				::openfl::display::Stage3D tmp11 = tmp10->stage3Ds->get((int)0);
				::openfl::display3D::Context3D tmp12 = tmp11->context3D;
				int tmp13 = width;
				int tmp14 = height;
				::openfl::display3D::textures::RectangleTexture tmp15 = tmp12->createRectangleTexture(tmp13,tmp14,((Dynamic)((int)1)),true);
				::openfl::display::BitmapData tmp16 = ::openfl::display::BitmapData_obj::fromTexture(tmp15);
				this->renderTargetB = tmp16;
				::lime::_backend::native::NativeGLRenderContext tmp17 = this->gl;
				::lime::_backend::native::NativeGLRenderContext tmp18 = this->gl;
				int tmp19 = tmp18->TEXTURE_2D;
				::openfl::display::BitmapData tmp20 = this->renderTargetB;
				::lime::_backend::native::NativeGLRenderContext tmp21 = this->gl;
				::lime::graphics::opengl::GLObject tmp22 = tmp20->getTexture(tmp21);
				tmp17->bindTexture(tmp19,tmp22);
				::lime::_backend::native::NativeGLRenderContext tmp23 = this->gl;
				::lime::_backend::native::NativeGLRenderContext tmp24 = this->gl;
				int tmp25 = tmp24->TEXTURE_2D;
				::lime::_backend::native::NativeGLRenderContext tmp26 = this->gl;
				int tmp27 = tmp26->TEXTURE_WRAP_S;
				::lime::_backend::native::NativeGLRenderContext tmp28 = this->gl;
				int tmp29 = tmp28->CLAMP_TO_EDGE;
				tmp23->texParameteri(tmp25,tmp27,tmp29);
				::lime::_backend::native::NativeGLRenderContext tmp30 = this->gl;
				::lime::_backend::native::NativeGLRenderContext tmp31 = this->gl;
				int tmp32 = tmp31->TEXTURE_2D;
				::lime::_backend::native::NativeGLRenderContext tmp33 = this->gl;
				int tmp34 = tmp33->TEXTURE_WRAP_T;
				::lime::_backend::native::NativeGLRenderContext tmp35 = this->gl;
				int tmp36 = tmp35->CLAMP_TO_EDGE;
				tmp30->texParameteri(tmp32,tmp34,tmp36);
			}
		}
		::openfl::display::Stage tmp4 = this->stage;
		this->displayMatrix = tmp4->__displayMatrix;
		Float tmp5;
		{
			::openfl::geom::Matrix tmp6 = this->displayMatrix;
			::openfl::geom::Matrix _this = tmp6;
			Float tmp7 = ((int)0 * _this->a);
			Float tmp8 = ((int)0 * _this->c);
			Float tmp9 = (tmp7 + tmp8);
			Float tmp10 = _this->tx;
			tmp5 = (tmp9 + tmp10);
		}
		int tmp6 = ::Math_obj::round(tmp5);
		this->offsetX = tmp6;
		Float tmp7;
		{
			::openfl::geom::Matrix tmp8 = this->displayMatrix;
			::openfl::geom::Matrix _this = tmp8;
			Float tmp9 = ((int)0 * _this->b);
			Float tmp10 = ((int)0 * _this->d);
			Float tmp11 = (tmp9 + tmp10);
			Float tmp12 = _this->ty;
			tmp7 = (tmp11 + tmp12);
		}
		int tmp8 = ::Math_obj::round(tmp7);
		this->offsetY = tmp8;
		Float tmp9;
		{
			::openfl::geom::Matrix tmp10 = this->displayMatrix;
			::openfl::geom::Matrix _this = tmp10;
			::openfl::display::Stage tmp11 = this->stage;
			int tmp12 = tmp11->stageWidth;
			Float tmp13 = _this->a;
			Float tmp14 = (tmp12 * tmp13);
			Float tmp15 = ((int)0 * _this->c);
			Float tmp16 = (tmp14 + tmp15);
			Float tmp17 = _this->tx;
			tmp9 = (tmp16 + tmp17);
		}
		int tmp10 = this->offsetX;
		Float tmp11 = (tmp9 - tmp10);
		int tmp12 = ::Math_obj::round(tmp11);
		this->displayWidth = tmp12;
		Float tmp13;
		{
			::openfl::geom::Matrix tmp14 = this->displayMatrix;
			::openfl::geom::Matrix _this = tmp14;
			Float tmp15 = ((int)0 * _this->b);
			::openfl::display::Stage tmp16 = this->stage;
			int tmp17 = tmp16->stageHeight;
			Float tmp18 = _this->d;
			Float tmp19 = (tmp17 * tmp18);
			Float tmp20 = (tmp15 + tmp19);
			Float tmp21 = _this->ty;
			tmp13 = (tmp20 + tmp21);
		}
		int tmp14 = this->offsetY;
		Float tmp15 = (tmp13 - tmp14);
		int tmp16 = ::Math_obj::round(tmp15);
		this->displayHeight = tmp16;
		int tmp17 = this->offsetX;
		int tmp18 = this->displayWidth;
		int tmp19 = this->offsetX;
		int tmp20 = (tmp18 + tmp19);
		int tmp21 = this->offsetY;
		int tmp22 = this->displayHeight;
		int tmp23 = this->offsetY;
		int tmp24 = (tmp22 + tmp23);
		::lime::utils::ArrayBufferView tmp25 = ::lime::math::_Matrix4::Matrix4_Impl__obj::createOrtho(tmp17,tmp20,tmp21,tmp24,(int)-1000,(int)1000);
		this->projection = tmp25;
		int tmp26 = this->offsetX;
		int tmp27 = this->displayWidth;
		int tmp28 = this->offsetX;
		int tmp29 = (tmp27 + tmp28);
		int tmp30 = this->displayHeight;
		int tmp31 = this->offsetY;
		int tmp32 = (tmp30 + tmp31);
		int tmp33 = this->offsetY;
		::lime::utils::ArrayBufferView tmp34 = ::lime::math::_Matrix4::Matrix4_Impl__obj::createOrtho(tmp26,tmp29,tmp32,tmp33,(int)-1000,(int)1000);
		this->projectionFlipped = tmp34;
	}
return null();
}



GLRenderer_obj::GLRenderer_obj()
{
}

void GLRenderer_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(GLRenderer);
	HX_MARK_MEMBER_NAME(projection,"projection");
	HX_MARK_MEMBER_NAME(projectionFlipped,"projectionFlipped");
	HX_MARK_MEMBER_NAME(currentRenderTarget,"currentRenderTarget");
	HX_MARK_MEMBER_NAME(displayHeight,"displayHeight");
	HX_MARK_MEMBER_NAME(displayMatrix,"displayMatrix");
	HX_MARK_MEMBER_NAME(displayWidth,"displayWidth");
	HX_MARK_MEMBER_NAME(flipped,"flipped");
	HX_MARK_MEMBER_NAME(gl,"gl");
	HX_MARK_MEMBER_NAME(matrix,"matrix");
	HX_MARK_MEMBER_NAME(renderTargetA,"renderTargetA");
	HX_MARK_MEMBER_NAME(renderTargetB,"renderTargetB");
	HX_MARK_MEMBER_NAME(offsetX,"offsetX");
	HX_MARK_MEMBER_NAME(offsetY,"offsetY");
	HX_MARK_MEMBER_NAME(values,"values");
	::openfl::_internal::renderer::AbstractRenderer_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void GLRenderer_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(projection,"projection");
	HX_VISIT_MEMBER_NAME(projectionFlipped,"projectionFlipped");
	HX_VISIT_MEMBER_NAME(currentRenderTarget,"currentRenderTarget");
	HX_VISIT_MEMBER_NAME(displayHeight,"displayHeight");
	HX_VISIT_MEMBER_NAME(displayMatrix,"displayMatrix");
	HX_VISIT_MEMBER_NAME(displayWidth,"displayWidth");
	HX_VISIT_MEMBER_NAME(flipped,"flipped");
	HX_VISIT_MEMBER_NAME(gl,"gl");
	HX_VISIT_MEMBER_NAME(matrix,"matrix");
	HX_VISIT_MEMBER_NAME(renderTargetA,"renderTargetA");
	HX_VISIT_MEMBER_NAME(renderTargetB,"renderTargetB");
	HX_VISIT_MEMBER_NAME(offsetX,"offsetX");
	HX_VISIT_MEMBER_NAME(offsetY,"offsetY");
	HX_VISIT_MEMBER_NAME(values,"values");
	::openfl::_internal::renderer::AbstractRenderer_obj::__Visit(HX_VISIT_ARG);
}

Dynamic GLRenderer_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 2:
		if (HX_FIELD_EQ(inName,"gl") ) { return gl; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"clear") ) { return clear_dyn(); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"matrix") ) { return matrix; }
		if (HX_FIELD_EQ(inName,"values") ) { return values; }
		if (HX_FIELD_EQ(inName,"render") ) { return render_dyn(); }
		if (HX_FIELD_EQ(inName,"resize") ) { return resize_dyn(); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"flipped") ) { return flipped; }
		if (HX_FIELD_EQ(inName,"offsetX") ) { return offsetX; }
		if (HX_FIELD_EQ(inName,"offsetY") ) { return offsetY; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"getMatrix") ) { return getMatrix_dyn(); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"projection") ) { return projection; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"displayWidth") ) { return displayWidth; }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"displayHeight") ) { return displayHeight; }
		if (HX_FIELD_EQ(inName,"displayMatrix") ) { return displayMatrix; }
		if (HX_FIELD_EQ(inName,"renderTargetA") ) { return renderTargetA; }
		if (HX_FIELD_EQ(inName,"renderTargetB") ) { return renderTargetB; }
		if (HX_FIELD_EQ(inName,"renderStage3D") ) { return renderStage3D_dyn(); }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"getCacheObject") ) { return getCacheObject_dyn(); }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"getRenderTarget") ) { return getRenderTarget_dyn(); }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"projectionFlipped") ) { return projectionFlipped; }
		break;
	case 19:
		if (HX_FIELD_EQ(inName,"currentRenderTarget") ) { return currentRenderTarget; }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic GLRenderer_obj::__SetField(const ::String &inName,const Dynamic &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 2:
		if (HX_FIELD_EQ(inName,"gl") ) { gl=inValue.Cast< ::lime::_backend::native::NativeGLRenderContext >(); return inValue; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"matrix") ) { matrix=inValue.Cast< ::lime::utils::ArrayBufferView >(); return inValue; }
		if (HX_FIELD_EQ(inName,"values") ) { values=inValue.Cast< Array< Float > >(); return inValue; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"flipped") ) { flipped=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"offsetX") ) { offsetX=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"offsetY") ) { offsetY=inValue.Cast< int >(); return inValue; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"projection") ) { projection=inValue.Cast< ::lime::utils::ArrayBufferView >(); return inValue; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"displayWidth") ) { displayWidth=inValue.Cast< int >(); return inValue; }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"displayHeight") ) { displayHeight=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"displayMatrix") ) { displayMatrix=inValue.Cast< ::openfl::geom::Matrix >(); return inValue; }
		if (HX_FIELD_EQ(inName,"renderTargetA") ) { renderTargetA=inValue.Cast< ::openfl::display::BitmapData >(); return inValue; }
		if (HX_FIELD_EQ(inName,"renderTargetB") ) { renderTargetB=inValue.Cast< ::openfl::display::BitmapData >(); return inValue; }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"projectionFlipped") ) { projectionFlipped=inValue.Cast< ::lime::utils::ArrayBufferView >(); return inValue; }
		break;
	case 19:
		if (HX_FIELD_EQ(inName,"currentRenderTarget") ) { currentRenderTarget=inValue.Cast< ::openfl::display::BitmapData >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void GLRenderer_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("projection","\x8f","\x88","\x8b","\xc4"));
	outFields->push(HX_HCSTRING("projectionFlipped","\x73","\xcb","\x7c","\xbf"));
	outFields->push(HX_HCSTRING("currentRenderTarget","\x20","\xd1","\x0e","\x27"));
	outFields->push(HX_HCSTRING("displayHeight","\xc9","\xc3","\xae","\xc3"));
	outFields->push(HX_HCSTRING("displayMatrix","\x23","\xf2","\x2a","\x7d"));
	outFields->push(HX_HCSTRING("displayWidth","\x64","\x8c","\xbb","\xd6"));
	outFields->push(HX_HCSTRING("flipped","\x42","\x6c","\x88","\x7f"));
	outFields->push(HX_HCSTRING("gl","\x25","\x5a","\x00","\x00"));
	outFields->push(HX_HCSTRING("matrix","\x41","\x36","\xc8","\xbb"));
	outFields->push(HX_HCSTRING("renderTargetA","\x1a","\x67","\x55","\x84"));
	outFields->push(HX_HCSTRING("renderTargetB","\x1b","\x67","\x55","\x84"));
	outFields->push(HX_HCSTRING("offsetX","\x65","\x09","\x65","\xd7"));
	outFields->push(HX_HCSTRING("offsetY","\x66","\x09","\x65","\xd7"));
	outFields->push(HX_HCSTRING("values","\xe2","\x03","\xb7","\x4f"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsObject /*::lime::utils::ArrayBufferView*/ ,(int)offsetof(GLRenderer_obj,projection),HX_HCSTRING("projection","\x8f","\x88","\x8b","\xc4")},
	{hx::fsObject /*::lime::utils::ArrayBufferView*/ ,(int)offsetof(GLRenderer_obj,projectionFlipped),HX_HCSTRING("projectionFlipped","\x73","\xcb","\x7c","\xbf")},
	{hx::fsObject /*::openfl::display::BitmapData*/ ,(int)offsetof(GLRenderer_obj,currentRenderTarget),HX_HCSTRING("currentRenderTarget","\x20","\xd1","\x0e","\x27")},
	{hx::fsInt,(int)offsetof(GLRenderer_obj,displayHeight),HX_HCSTRING("displayHeight","\xc9","\xc3","\xae","\xc3")},
	{hx::fsObject /*::openfl::geom::Matrix*/ ,(int)offsetof(GLRenderer_obj,displayMatrix),HX_HCSTRING("displayMatrix","\x23","\xf2","\x2a","\x7d")},
	{hx::fsInt,(int)offsetof(GLRenderer_obj,displayWidth),HX_HCSTRING("displayWidth","\x64","\x8c","\xbb","\xd6")},
	{hx::fsBool,(int)offsetof(GLRenderer_obj,flipped),HX_HCSTRING("flipped","\x42","\x6c","\x88","\x7f")},
	{hx::fsObject /*::lime::_backend::native::NativeGLRenderContext*/ ,(int)offsetof(GLRenderer_obj,gl),HX_HCSTRING("gl","\x25","\x5a","\x00","\x00")},
	{hx::fsObject /*::lime::utils::ArrayBufferView*/ ,(int)offsetof(GLRenderer_obj,matrix),HX_HCSTRING("matrix","\x41","\x36","\xc8","\xbb")},
	{hx::fsObject /*::openfl::display::BitmapData*/ ,(int)offsetof(GLRenderer_obj,renderTargetA),HX_HCSTRING("renderTargetA","\x1a","\x67","\x55","\x84")},
	{hx::fsObject /*::openfl::display::BitmapData*/ ,(int)offsetof(GLRenderer_obj,renderTargetB),HX_HCSTRING("renderTargetB","\x1b","\x67","\x55","\x84")},
	{hx::fsInt,(int)offsetof(GLRenderer_obj,offsetX),HX_HCSTRING("offsetX","\x65","\x09","\x65","\xd7")},
	{hx::fsInt,(int)offsetof(GLRenderer_obj,offsetY),HX_HCSTRING("offsetY","\x66","\x09","\x65","\xd7")},
	{hx::fsObject /*Array< Float >*/ ,(int)offsetof(GLRenderer_obj,values),HX_HCSTRING("values","\xe2","\x03","\xb7","\x4f")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo *sStaticStorageInfo = 0;
#endif

static ::String sMemberFields[] = {
	HX_HCSTRING("projection","\x8f","\x88","\x8b","\xc4"),
	HX_HCSTRING("projectionFlipped","\x73","\xcb","\x7c","\xbf"),
	HX_HCSTRING("currentRenderTarget","\x20","\xd1","\x0e","\x27"),
	HX_HCSTRING("displayHeight","\xc9","\xc3","\xae","\xc3"),
	HX_HCSTRING("displayMatrix","\x23","\xf2","\x2a","\x7d"),
	HX_HCSTRING("displayWidth","\x64","\x8c","\xbb","\xd6"),
	HX_HCSTRING("flipped","\x42","\x6c","\x88","\x7f"),
	HX_HCSTRING("gl","\x25","\x5a","\x00","\x00"),
	HX_HCSTRING("matrix","\x41","\x36","\xc8","\xbb"),
	HX_HCSTRING("renderTargetA","\x1a","\x67","\x55","\x84"),
	HX_HCSTRING("renderTargetB","\x1b","\x67","\x55","\x84"),
	HX_HCSTRING("offsetX","\x65","\x09","\x65","\xd7"),
	HX_HCSTRING("offsetY","\x66","\x09","\x65","\xd7"),
	HX_HCSTRING("values","\xe2","\x03","\xb7","\x4f"),
	HX_HCSTRING("clear","\x8d","\x71","\x5b","\x48"),
	HX_HCSTRING("getCacheObject","\xab","\xfd","\x7e","\xbb"),
	HX_HCSTRING("getMatrix","\x77","\xbf","\x1e","\x38"),
	HX_HCSTRING("getRenderTarget","\xfd","\x4c","\x2d","\x19"),
	HX_HCSTRING("render","\x56","\x6b","\x29","\x05"),
	HX_HCSTRING("renderStage3D","\x39","\xb6","\xb7","\x29"),
	HX_HCSTRING("resize","\xf4","\x59","\x7b","\x08"),
	::String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(GLRenderer_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(GLRenderer_obj::__mClass,"__mClass");
};

#endif

hx::Class GLRenderer_obj::__mClass;

void GLRenderer_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("openfl._internal.renderer.opengl.GLRenderer","\x6c","\xe6","\x3a","\x9a");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = hx::Class_obj::dupFunctions(sMemberFields);
	__mClass->mCanCast = hx::TCanCast< GLRenderer_obj >;
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
} // end namespace _internal
} // end namespace renderer
} // end namespace opengl
