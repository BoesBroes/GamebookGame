#include <hxcpp.h>

#ifndef INCLUDED_lime__backend_native_NativeGLRenderContext
#include <lime/_backend/native/NativeGLRenderContext.h>
#endif
#ifndef INCLUDED_openfl__internal_renderer_AbstractBlendModeManager
#include <openfl/_internal/renderer/AbstractBlendModeManager.h>
#endif
#ifndef INCLUDED_openfl__internal_renderer_AbstractShaderManager
#include <openfl/_internal/renderer/AbstractShaderManager.h>
#endif
#ifndef INCLUDED_openfl__internal_renderer_RenderSession
#include <openfl/_internal/renderer/RenderSession.h>
#endif
#ifndef INCLUDED_openfl__internal_renderer_opengl_GLStage3D
#include <openfl/_internal/renderer/opengl/GLStage3D.h>
#endif
#ifndef INCLUDED_openfl__internal_stage3D_GLUtils
#include <openfl/_internal/stage3D/GLUtils.h>
#endif
#ifndef INCLUDED_openfl_display_Shader
#include <openfl/display/Shader.h>
#endif
#ifndef INCLUDED_openfl_display_Stage3D
#include <openfl/display/Stage3D.h>
#endif
#ifndef INCLUDED_openfl_display3D_Context3D
#include <openfl/display3D/Context3D.h>
#endif
#ifndef INCLUDED_openfl_display3D_Program3D
#include <openfl/display3D/Program3D.h>
#endif
#ifndef INCLUDED_openfl_events_EventDispatcher
#include <openfl/events/EventDispatcher.h>
#endif
#ifndef INCLUDED_openfl_events_IEventDispatcher
#include <openfl/events/IEventDispatcher.h>
#endif
namespace openfl{
namespace _internal{
namespace renderer{
namespace opengl{

Void GLStage3D_obj::__construct()
{
	return null();
}

//GLStage3D_obj::~GLStage3D_obj() { }

Dynamic GLStage3D_obj::__CreateEmpty() { return  new GLStage3D_obj; }
hx::ObjectPtr< GLStage3D_obj > GLStage3D_obj::__new()
{  hx::ObjectPtr< GLStage3D_obj > _result_ = new GLStage3D_obj();
	_result_->__construct();
	return _result_;}

Dynamic GLStage3D_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< GLStage3D_obj > _result_ = new GLStage3D_obj();
	_result_->__construct();
	return _result_;}

Void GLStage3D_obj::render( ::openfl::display::Stage3D stage3D,::openfl::_internal::renderer::RenderSession renderSession){
{
		bool tmp = (stage3D->context3D != null());
		if ((tmp)){
			renderSession->blendModeManager->setBlendMode(null());
			::openfl::display::Shader tmp1 = renderSession->shaderManager->currentShader;
			bool tmp2 = (tmp1 != null());
			if ((tmp2)){
				renderSession->shaderManager->setShader(null());
				::openfl::display3D::Program3D tmp3 = stage3D->context3D->__program;
				bool tmp4 = (tmp3 != null());
				if ((tmp4)){
					::openfl::display3D::Program3D tmp5 = stage3D->context3D->__program;
					tmp5->__use();
				}
			}
		}
		bool tmp1 = ::openfl::_internal::stage3D::GLUtils_obj::debug;
		if ((tmp1)){
			renderSession->gl->getError();
		}
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(GLStage3D_obj,render,(void))


GLStage3D_obj::GLStage3D_obj()
{
}

bool GLStage3D_obj::__GetStatic(const ::String &inName, Dynamic &outValue, hx::PropertyAccess inCallProp)
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
	HX_MARK_MEMBER_NAME(GLStage3D_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(GLStage3D_obj::__mClass,"__mClass");
};

#endif

hx::Class GLStage3D_obj::__mClass;

static ::String sStaticFields[] = {
	HX_HCSTRING("render","\x56","\x6b","\x29","\x05"),
	::String(null()) };

void GLStage3D_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("openfl._internal.renderer.opengl.GLStage3D","\xe6","\x39","\x43","\x70");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &GLStage3D_obj::__GetStatic;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(sStaticFields);
	__mClass->mMembers = hx::Class_obj::dupFunctions(0 /* sMemberFields */);
	__mClass->mCanCast = hx::TCanCast< GLStage3D_obj >;
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
