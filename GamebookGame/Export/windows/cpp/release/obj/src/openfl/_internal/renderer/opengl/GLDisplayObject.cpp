#include <hxcpp.h>

#ifndef INCLUDED_lime__backend_native_NativeGLRenderContext
#include <lime/_backend/native/NativeGLRenderContext.h>
#endif
#ifndef INCLUDED_lime_graphics_opengl_GLObject
#include <lime/graphics/opengl/GLObject.h>
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
#ifndef INCLUDED_openfl__internal_renderer_RenderSession
#include <openfl/_internal/renderer/RenderSession.h>
#endif
#ifndef INCLUDED_openfl__internal_renderer_cairo_CairoGraphics
#include <openfl/_internal/renderer/cairo/CairoGraphics.h>
#endif
#ifndef INCLUDED_openfl__internal_renderer_opengl_GLDisplayObject
#include <openfl/_internal/renderer/opengl/GLDisplayObject.h>
#endif
#ifndef INCLUDED_openfl__internal_renderer_opengl_GLRenderer
#include <openfl/_internal/renderer/opengl/GLRenderer.h>
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
#ifndef INCLUDED_openfl_geom_Matrix
#include <openfl/geom/Matrix.h>
#endif
#ifndef INCLUDED_openfl_geom_Rectangle
#include <openfl/geom/Rectangle.h>
#endif
namespace openfl{
namespace _internal{
namespace renderer{
namespace opengl{

Void GLDisplayObject_obj::__construct()
{
	return null();
}

//GLDisplayObject_obj::~GLDisplayObject_obj() { }

Dynamic GLDisplayObject_obj::__CreateEmpty() { return  new GLDisplayObject_obj; }
hx::ObjectPtr< GLDisplayObject_obj > GLDisplayObject_obj::__new()
{  hx::ObjectPtr< GLDisplayObject_obj > _result_ = new GLDisplayObject_obj();
	_result_->__construct();
	return _result_;}

Dynamic GLDisplayObject_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< GLDisplayObject_obj > _result_ = new GLDisplayObject_obj();
	_result_->__construct();
	return _result_;}

Void GLDisplayObject_obj::render( ::openfl::display::DisplayObject displayObject,::openfl::_internal::renderer::RenderSession renderSession){
{
		bool tmp = (displayObject->opaqueBackground == null());
		bool tmp1;
		if ((tmp)){
			tmp1 = (displayObject->__graphics == null());
		}
		else{
			tmp1 = false;
		}
		if ((tmp1)){
			return null();
		}
		bool tmp2 = displayObject->__renderable;
		bool tmp3 = tmp2;
		bool tmp4 = !(tmp3);
		bool tmp5 = !(tmp4);
		bool tmp6;
		if ((tmp5)){
			tmp6 = (displayObject->__worldAlpha <= (int)0);
		}
		else{
			tmp6 = true;
		}
		if ((tmp6)){
			return null();
		}
		bool tmp7 = (displayObject->opaqueBackground != null());
		bool tmp8 = tmp7;
		bool tmp9;
		if ((tmp8)){
			bool tmp10 = displayObject->__cacheBitmapRender;
			bool tmp11 = tmp10;
			bool tmp12 = tmp11;
			tmp9 = !(tmp12);
		}
		else{
			tmp9 = false;
		}
		bool tmp10 = tmp9;
		bool tmp11;
		if ((tmp10)){
			Float tmp12 = displayObject->get_width();
			Float tmp13 = tmp12;
			Float tmp14 = tmp13;
			tmp11 = (tmp14 > (int)0);
		}
		else{
			tmp11 = false;
		}
		bool tmp12;
		if ((tmp11)){
			Float tmp13 = displayObject->get_height();
			Float tmp14 = tmp13;
			tmp12 = (tmp14 > (int)0);
		}
		else{
			tmp12 = false;
		}
		if ((tmp12)){
			::openfl::display::DisplayObject tmp13 = displayObject;
			renderSession->maskManager->pushObject(tmp13,null());
			::lime::_backend::native::NativeGLRenderContext gl = renderSession->gl;
			::lime::utils::ObjectPool_openfl_geom_Rectangle tmp14 = ::openfl::geom::Rectangle_obj::__pool;
			::openfl::geom::Rectangle tmp15 = tmp14->get();
			::openfl::geom::Rectangle rect = tmp15;
			Float tmp16 = displayObject->get_width();
			Float tmp17 = displayObject->get_height();
			rect->setTo((int)0,(int)0,tmp16,tmp17);
			::openfl::geom::Rectangle tmp18 = rect;
			::openfl::geom::Matrix tmp19 = displayObject->__renderTransform;
			renderSession->maskManager->pushRect(tmp18,tmp19);
			int color = ((int)(displayObject->opaqueBackground));
			int tmp20 = (int(color) >> int((int)16));
			int tmp21 = tmp20;
			int tmp22 = (int(tmp21) & int((int)255));
			int tmp23 = tmp22;
			Float tmp24 = (Float(tmp23) / Float((int)255));
			int tmp25 = (int(color) >> int((int)8));
			int tmp26 = tmp25;
			int tmp27 = (int(tmp26) & int((int)255));
			int tmp28 = tmp27;
			Float tmp29 = (Float(tmp28) / Float((int)255));
			int tmp30 = (int(color) & int((int)255));
			int tmp31 = tmp30;
			Float tmp32 = (Float(tmp31) / Float((int)255));
			gl->clearColor(tmp24,tmp29,tmp32,(int)1);
			int tmp33 = gl->COLOR_BUFFER_BIT;
			gl->clear(tmp33);
			renderSession->maskManager->popRect();
			::openfl::display::DisplayObject tmp34 = displayObject;
			renderSession->maskManager->popObject(tmp34,null());
			::lime::utils::ObjectPool_openfl_geom_Rectangle tmp35 = ::openfl::geom::Rectangle_obj::__pool;
			::openfl::geom::Rectangle tmp36 = rect;
			tmp35->release(tmp36);
		}
		bool tmp13 = (displayObject->__graphics != null());
		if ((tmp13)){
			bool tmp14 = displayObject->__renderable;
			bool tmp15 = tmp14;
			bool tmp16 = !(tmp15);
			bool tmp17 = !(tmp16);
			bool tmp18;
			if ((tmp17)){
				tmp18 = (displayObject->__worldAlpha <= (int)0);
			}
			else{
				tmp18 = true;
			}
			if ((tmp18)){
				Dynamic();
			}
			else{
				::openfl::display::Graphics graphics = displayObject->__graphics;
				bool tmp19 = (graphics != null());
				if ((tmp19)){
					::openfl::display::Graphics tmp20 = graphics;
					::openfl::_internal::renderer::RenderSession tmp21 = renderSession;
					::openfl::geom::Matrix tmp22 = displayObject->__renderTransform;
					::openfl::_internal::renderer::cairo::CairoGraphics_obj::render(tmp20,tmp21,tmp22);
					::openfl::geom::Rectangle bounds = graphics->__bounds;
					bool tmp23 = (graphics->__bitmap != null());
					bool tmp24;
					if ((tmp23)){
						tmp24 = graphics->__visible;
					}
					else{
						tmp24 = false;
					}
					if ((tmp24)){
						::openfl::_internal::renderer::opengl::GLRenderer renderer = ((::openfl::_internal::renderer::opengl::GLRenderer)(renderSession->renderer));
						::lime::_backend::native::NativeGLRenderContext gl = renderSession->gl;
						Dynamic tmp25 = displayObject->__worldBlendMode;
						renderSession->blendModeManager->setBlendMode(tmp25);
						::openfl::display::DisplayObject tmp26 = displayObject;
						renderSession->maskManager->pushObject(tmp26,null());
						::openfl::display::DisplayObject tmp27 = displayObject;
						::openfl::display::Shader tmp28 = renderSession->filterManager->pushObject(tmp27);
						::openfl::display::Shader shader = tmp28;
						::openfl::display::ShaderData tmp29 = shader->get_data();
						tmp29->uImage0->input = graphics->__bitmap;
						::openfl::display::ShaderData tmp30 = shader->get_data();
						tmp30->uImage0->smoothing = renderSession->allowSmoothing;
						::openfl::geom::Matrix tmp31 = graphics->__worldTransform;
						::openfl::display::ShaderData tmp32 = shader->get_data();
						tmp32->uMatrix->value = renderer->getMatrix(tmp31);
						::openfl::display::Shader tmp33 = shader;
						renderSession->shaderManager->setShader(tmp33);
						int tmp34 = gl->ARRAY_BUFFER;
						::lime::_backend::native::NativeGLRenderContext tmp35 = gl;
						Float tmp36 = displayObject->__worldAlpha;
						::lime::graphics::opengl::GLObject tmp37 = graphics->__bitmap->getBuffer(tmp35,tmp36);
						gl->bindBuffer(tmp34,tmp37);
						::openfl::display::ShaderData tmp38 = shader->get_data();
						int tmp39 = tmp38->aPosition->index;
						int tmp40 = gl->FLOAT;
						int tmp41 = (int)24;
						Float tmp42 = ::lime::utils::_DataPointer::DataPointer_Impl__obj::fromInt((int)0);
						gl->vertexAttribPointer(tmp39,(int)3,tmp40,false,tmp41,tmp42);
						::openfl::display::ShaderData tmp43 = shader->get_data();
						int tmp44 = tmp43->aTexCoord->index;
						int tmp45 = gl->FLOAT;
						int tmp46 = (int)24;
						int tmp47 = (int)12;
						Float tmp48 = ::lime::utils::_DataPointer::DataPointer_Impl__obj::fromInt(tmp47);
						gl->vertexAttribPointer(tmp44,(int)2,tmp45,false,tmp46,tmp48);
						::openfl::display::ShaderData tmp49 = shader->get_data();
						int tmp50 = tmp49->aAlpha->index;
						int tmp51 = gl->FLOAT;
						int tmp52 = (int)24;
						int tmp53 = (int)20;
						Float tmp54 = ::lime::utils::_DataPointer::DataPointer_Impl__obj::fromInt(tmp53);
						gl->vertexAttribPointer(tmp50,(int)1,tmp51,false,tmp52,tmp54);
						int tmp55 = gl->TRIANGLE_STRIP;
						gl->drawArrays(tmp55,(int)0,(int)4);
						::openfl::display::DisplayObject tmp56 = displayObject;
						renderSession->filterManager->popObject(tmp56);
						::openfl::display::DisplayObject tmp57 = displayObject;
						renderSession->maskManager->popObject(tmp57,null());
					}
				}
			}
		}
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(GLDisplayObject_obj,render,(void))


GLDisplayObject_obj::GLDisplayObject_obj()
{
}

bool GLDisplayObject_obj::__GetStatic(const ::String &inName, Dynamic &outValue, hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 6:
		if (HX_FIELD_EQ(inName,"render") ) { outValue = render_dyn(); return true;  }
	}
	return false;
}

#if HXCPP_SCRIPTABLE
static hx::StorageInfo *sMemberStorageInfo = 0;
static hx::StaticInfo *sStaticStorageInfo = 0;
#endif

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(GLDisplayObject_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(GLDisplayObject_obj::__mClass,"__mClass");
};

#endif

hx::Class GLDisplayObject_obj::__mClass;

static ::String sStaticFields[] = {
	HX_HCSTRING("render","\x56","\x6b","\x29","\x05"),
	::String(null()) };

void GLDisplayObject_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("openfl._internal.renderer.opengl.GLDisplayObject","\xd8","\x44","\x6d","\x02");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &GLDisplayObject_obj::__GetStatic;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(sStaticFields);
	__mClass->mMembers = hx::Class_obj::dupFunctions(0 /* sMemberFields */);
	__mClass->mCanCast = hx::TCanCast< GLDisplayObject_obj >;
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
