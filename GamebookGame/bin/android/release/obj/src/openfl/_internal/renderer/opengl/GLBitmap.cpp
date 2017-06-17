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
#ifndef INCLUDED_openfl__internal_renderer_opengl_GLBitmap
#include <openfl/_internal/renderer/opengl/GLBitmap.h>
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
namespace openfl{
namespace _internal{
namespace renderer{
namespace opengl{

Void GLBitmap_obj::__construct()
{
	return null();
}

//GLBitmap_obj::~GLBitmap_obj() { }

Dynamic GLBitmap_obj::__CreateEmpty() { return  new GLBitmap_obj; }
hx::ObjectPtr< GLBitmap_obj > GLBitmap_obj::__new()
{  hx::ObjectPtr< GLBitmap_obj > _result_ = new GLBitmap_obj();
	_result_->__construct();
	return _result_;}

Dynamic GLBitmap_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< GLBitmap_obj > _result_ = new GLBitmap_obj();
	_result_->__construct();
	return _result_;}

Void GLBitmap_obj::render( ::openfl::display::Bitmap bitmap,::openfl::_internal::renderer::RenderSession renderSession){
{
		bool tmp = bitmap->__renderable;
		bool tmp1 = tmp;
		bool tmp2 = !(tmp1);
		bool tmp3 = !(tmp2);
		bool tmp4;
		if ((tmp3)){
			tmp4 = (bitmap->__worldAlpha <= (int)0);
		}
		else{
			tmp4 = true;
		}
		if ((tmp4)){
			return null();
		}
		bool tmp5 = (bitmap->bitmapData != null());
		bool tmp6;
		if ((tmp5)){
			tmp6 = bitmap->bitmapData->__isValid;
		}
		else{
			tmp6 = false;
		}
		if ((tmp6)){
			::openfl::_internal::renderer::opengl::GLRenderer renderer = ((::openfl::_internal::renderer::opengl::GLRenderer)(renderSession->renderer));
			::lime::_backend::native::NativeGLRenderContext gl = renderSession->gl;
			Dynamic tmp7 = bitmap->__worldBlendMode;
			renderSession->blendModeManager->setBlendMode(tmp7);
			::openfl::display::Bitmap tmp8 = bitmap;
			renderSession->maskManager->pushObject(tmp8,null());
			::openfl::display::Bitmap tmp9 = bitmap;
			::openfl::display::Shader tmp10 = renderSession->filterManager->pushObject(tmp9);
			::openfl::display::Shader shader = tmp10;
			::openfl::display::ShaderData tmp11 = shader->get_data();
			tmp11->uImage0->input = bitmap->bitmapData;
			bool tmp12 = renderSession->allowSmoothing;
			bool tmp13;
			if ((tmp12)){
				bool tmp14 = bitmap->smoothing;
				bool tmp15 = tmp14;
				bool tmp16 = !(tmp15);
				bool tmp17 = tmp16;
				bool tmp18 = tmp17;
				if ((tmp18)){
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
			::openfl::geom::Matrix tmp15 = bitmap->__renderTransform;
			::openfl::display::ShaderData tmp16 = shader->get_data();
			tmp16->uMatrix->value = renderer->getMatrix(tmp15);
			::openfl::display::Shader tmp17 = shader;
			renderSession->shaderManager->setShader(tmp17);
			int tmp18 = gl->ARRAY_BUFFER;
			::lime::_backend::native::NativeGLRenderContext tmp19 = gl;
			Float tmp20 = bitmap->__worldAlpha;
			::lime::graphics::opengl::GLObject tmp21 = bitmap->bitmapData->getBuffer(tmp19,tmp20);
			gl->bindBuffer(tmp18,tmp21);
			::openfl::display::ShaderData tmp22 = shader->get_data();
			int tmp23 = tmp22->aPosition->index;
			int tmp24 = gl->FLOAT;
			int tmp25 = (int)24;
			Float tmp26 = ::lime::utils::_DataPointer::DataPointer_Impl__obj::fromInt((int)0);
			gl->vertexAttribPointer(tmp23,(int)3,tmp24,false,tmp25,tmp26);
			::openfl::display::ShaderData tmp27 = shader->get_data();
			int tmp28 = tmp27->aTexCoord->index;
			int tmp29 = gl->FLOAT;
			int tmp30 = (int)24;
			int tmp31 = (int)12;
			Float tmp32 = ::lime::utils::_DataPointer::DataPointer_Impl__obj::fromInt(tmp31);
			gl->vertexAttribPointer(tmp28,(int)2,tmp29,false,tmp30,tmp32);
			::openfl::display::ShaderData tmp33 = shader->get_data();
			int tmp34 = tmp33->aAlpha->index;
			int tmp35 = gl->FLOAT;
			int tmp36 = (int)24;
			int tmp37 = (int)20;
			Float tmp38 = ::lime::utils::_DataPointer::DataPointer_Impl__obj::fromInt(tmp37);
			gl->vertexAttribPointer(tmp34,(int)1,tmp35,false,tmp36,tmp38);
			int tmp39 = gl->TRIANGLE_STRIP;
			gl->drawArrays(tmp39,(int)0,(int)4);
			::openfl::display::Bitmap tmp40 = bitmap;
			renderSession->filterManager->popObject(tmp40);
			::openfl::display::Bitmap tmp41 = bitmap;
			renderSession->maskManager->popObject(tmp41,null());
		}
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(GLBitmap_obj,render,(void))


GLBitmap_obj::GLBitmap_obj()
{
}

bool GLBitmap_obj::__GetStatic(const ::String &inName, Dynamic &outValue, hx::PropertyAccess inCallProp)
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
	HX_MARK_MEMBER_NAME(GLBitmap_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(GLBitmap_obj::__mClass,"__mClass");
};

#endif

hx::Class GLBitmap_obj::__mClass;

static ::String sStaticFields[] = {
	HX_HCSTRING("render","\x56","\x6b","\x29","\x05"),
	::String(null()) };

void GLBitmap_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("openfl._internal.renderer.opengl.GLBitmap","\xd8","\x64","\xbd","\x49");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &GLBitmap_obj::__GetStatic;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(sStaticFields);
	__mClass->mMembers = hx::Class_obj::dupFunctions(0 /* sMemberFields */);
	__mClass->mCanCast = hx::TCanCast< GLBitmap_obj >;
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
