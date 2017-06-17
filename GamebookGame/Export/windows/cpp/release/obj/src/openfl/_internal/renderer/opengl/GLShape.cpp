#include <hxcpp.h>

#ifndef INCLUDED_lime__backend_native_NativeGLRenderContext
#include <lime/_backend/native/NativeGLRenderContext.h>
#endif
#ifndef INCLUDED_lime_graphics_opengl_GLObject
#include <lime/graphics/opengl/GLObject.h>
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
#ifndef INCLUDED_openfl__internal_renderer_opengl_GLRenderer
#include <openfl/_internal/renderer/opengl/GLRenderer.h>
#endif
#ifndef INCLUDED_openfl__internal_renderer_opengl_GLShape
#include <openfl/_internal/renderer/opengl/GLShape.h>
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

Void GLShape_obj::__construct()
{
	return null();
}

//GLShape_obj::~GLShape_obj() { }

Dynamic GLShape_obj::__CreateEmpty() { return  new GLShape_obj; }
hx::ObjectPtr< GLShape_obj > GLShape_obj::__new()
{  hx::ObjectPtr< GLShape_obj > _result_ = new GLShape_obj();
	_result_->__construct();
	return _result_;}

Dynamic GLShape_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< GLShape_obj > _result_ = new GLShape_obj();
	_result_->__construct();
	return _result_;}

Void GLShape_obj::render( ::openfl::display::DisplayObject shape,::openfl::_internal::renderer::RenderSession renderSession){
{
		bool tmp = shape->__renderable;
		bool tmp1 = tmp;
		bool tmp2 = !(tmp1);
		bool tmp3 = !(tmp2);
		bool tmp4;
		if ((tmp3)){
			tmp4 = (shape->__worldAlpha <= (int)0);
		}
		else{
			tmp4 = true;
		}
		if ((tmp4)){
			return null();
		}
		::openfl::display::Graphics graphics = shape->__graphics;
		bool tmp5 = (graphics != null());
		if ((tmp5)){
			::openfl::display::Graphics tmp6 = graphics;
			::openfl::_internal::renderer::RenderSession tmp7 = renderSession;
			::openfl::geom::Matrix tmp8 = shape->__renderTransform;
			::openfl::_internal::renderer::cairo::CairoGraphics_obj::render(tmp6,tmp7,tmp8);
			::openfl::geom::Rectangle bounds = graphics->__bounds;
			bool tmp9 = (graphics->__bitmap != null());
			bool tmp10;
			if ((tmp9)){
				tmp10 = graphics->__visible;
			}
			else{
				tmp10 = false;
			}
			if ((tmp10)){
				::openfl::_internal::renderer::opengl::GLRenderer renderer = ((::openfl::_internal::renderer::opengl::GLRenderer)(renderSession->renderer));
				::lime::_backend::native::NativeGLRenderContext gl = renderSession->gl;
				Dynamic tmp11 = shape->__worldBlendMode;
				renderSession->blendModeManager->setBlendMode(tmp11);
				::openfl::display::DisplayObject tmp12 = shape;
				renderSession->maskManager->pushObject(tmp12,null());
				::openfl::display::DisplayObject tmp13 = shape;
				::openfl::display::Shader tmp14 = renderSession->filterManager->pushObject(tmp13);
				::openfl::display::Shader shader = tmp14;
				::openfl::display::ShaderData tmp15 = shader->get_data();
				tmp15->uImage0->input = graphics->__bitmap;
				::openfl::display::ShaderData tmp16 = shader->get_data();
				tmp16->uImage0->smoothing = renderSession->allowSmoothing;
				::openfl::geom::Matrix tmp17 = graphics->__worldTransform;
				::openfl::display::ShaderData tmp18 = shader->get_data();
				tmp18->uMatrix->value = renderer->getMatrix(tmp17);
				::openfl::display::Shader tmp19 = shader;
				renderSession->shaderManager->setShader(tmp19);
				int tmp20 = gl->ARRAY_BUFFER;
				::lime::_backend::native::NativeGLRenderContext tmp21 = gl;
				Float tmp22 = shape->__worldAlpha;
				::lime::graphics::opengl::GLObject tmp23 = graphics->__bitmap->getBuffer(tmp21,tmp22);
				gl->bindBuffer(tmp20,tmp23);
				::openfl::display::ShaderData tmp24 = shader->get_data();
				int tmp25 = tmp24->aPosition->index;
				int tmp26 = gl->FLOAT;
				int tmp27 = (int)24;
				Float tmp28 = ::lime::utils::_DataPointer::DataPointer_Impl__obj::fromInt((int)0);
				gl->vertexAttribPointer(tmp25,(int)3,tmp26,false,tmp27,tmp28);
				::openfl::display::ShaderData tmp29 = shader->get_data();
				int tmp30 = tmp29->aTexCoord->index;
				int tmp31 = gl->FLOAT;
				int tmp32 = (int)24;
				int tmp33 = (int)12;
				Float tmp34 = ::lime::utils::_DataPointer::DataPointer_Impl__obj::fromInt(tmp33);
				gl->vertexAttribPointer(tmp30,(int)2,tmp31,false,tmp32,tmp34);
				::openfl::display::ShaderData tmp35 = shader->get_data();
				int tmp36 = tmp35->aAlpha->index;
				int tmp37 = gl->FLOAT;
				int tmp38 = (int)24;
				int tmp39 = (int)20;
				Float tmp40 = ::lime::utils::_DataPointer::DataPointer_Impl__obj::fromInt(tmp39);
				gl->vertexAttribPointer(tmp36,(int)1,tmp37,false,tmp38,tmp40);
				int tmp41 = gl->TRIANGLE_STRIP;
				gl->drawArrays(tmp41,(int)0,(int)4);
				::openfl::display::DisplayObject tmp42 = shape;
				renderSession->filterManager->popObject(tmp42);
				::openfl::display::DisplayObject tmp43 = shape;
				renderSession->maskManager->popObject(tmp43,null());
			}
		}
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(GLShape_obj,render,(void))


GLShape_obj::GLShape_obj()
{
}

bool GLShape_obj::__GetStatic(const ::String &inName, Dynamic &outValue, hx::PropertyAccess inCallProp)
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
	HX_MARK_MEMBER_NAME(GLShape_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(GLShape_obj::__mClass,"__mClass");
};

#endif

hx::Class GLShape_obj::__mClass;

static ::String sStaticFields[] = {
	HX_HCSTRING("render","\x56","\x6b","\x29","\x05"),
	::String(null()) };

void GLShape_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("openfl._internal.renderer.opengl.GLShape","\x58","\x5e","\x97","\x4e");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &GLShape_obj::__GetStatic;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(sStaticFields);
	__mClass->mMembers = hx::Class_obj::dupFunctions(0 /* sMemberFields */);
	__mClass->mCanCast = hx::TCanCast< GLShape_obj >;
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
