#include <hxcpp.h>

#ifndef INCLUDED_lime__backend_native_NativeGLRenderContext
#include <lime/_backend/native/NativeGLRenderContext.h>
#endif
#ifndef INCLUDED_lime_graphics_opengl_GL
#include <lime/graphics/opengl/GL.h>
#endif
#ifndef INCLUDED_lime_graphics_opengl__GLES2Context_GLES2Context_Impl_
#include <lime/graphics/opengl/_GLES2Context/GLES2Context_Impl_.h>
#endif
namespace lime{
namespace graphics{
namespace opengl{
namespace _GLES2Context{

Void GLES2Context_Impl__obj::__construct()
{
	return null();
}

//GLES2Context_Impl__obj::~GLES2Context_Impl__obj() { }

Dynamic GLES2Context_Impl__obj::__CreateEmpty() { return  new GLES2Context_Impl__obj; }
hx::ObjectPtr< GLES2Context_Impl__obj > GLES2Context_Impl__obj::__new()
{  hx::ObjectPtr< GLES2Context_Impl__obj > _result_ = new GLES2Context_Impl__obj();
	_result_->__construct();
	return _result_;}

Dynamic GLES2Context_Impl__obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< GLES2Context_Impl__obj > _result_ = new GLES2Context_Impl__obj();
	_result_->__construct();
	return _result_;}

::lime::_backend::native::NativeGLRenderContext GLES2Context_Impl__obj::fromGL( ::hx::Class gl){
	HX_STACK_FRAME("lime.graphics.opengl._GLES2Context.GLES2Context_Impl_","fromGL",0xc922aeb9,"lime.graphics.opengl._GLES2Context.GLES2Context_Impl_.fromGL","lime/graphics/opengl/GLES2Context.hx",94,0x5fc614f8)
	HX_STACK_ARG(gl,"gl")
	HX_STACK_LINE(97)
	::lime::_backend::native::NativeGLRenderContext tmp = ::lime::graphics::opengl::GL_obj::context;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(97)
	::lime::_backend::native::NativeGLRenderContext tmp1 = tmp;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(97)
	return tmp1;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(GLES2Context_Impl__obj,fromGL,return )


GLES2Context_Impl__obj::GLES2Context_Impl__obj()
{
}

bool GLES2Context_Impl__obj::__GetStatic(const ::String &inName, Dynamic &outValue, hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 6:
		if (HX_FIELD_EQ(inName,"fromGL") ) { outValue = fromGL_dyn(); return true;  }
	}
	return false;
}

#if HXCPP_SCRIPTABLE
static hx::StorageInfo *sMemberStorageInfo = 0;
static hx::StaticInfo *sStaticStorageInfo = 0;
#endif

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(GLES2Context_Impl__obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(GLES2Context_Impl__obj::__mClass,"__mClass");
};

#endif

hx::Class GLES2Context_Impl__obj::__mClass;

static ::String sStaticFields[] = {
	HX_HCSTRING("fromGL","\x0f","\x92","\xc6","\xb5"),
	::String(null()) };

void GLES2Context_Impl__obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("lime.graphics.opengl._GLES2Context.GLES2Context_Impl_","\x84","\x52","\x10","\xee");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &GLES2Context_Impl__obj::__GetStatic;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(sStaticFields);
	__mClass->mMembers = hx::Class_obj::dupFunctions(0 /* sMemberFields */);
	__mClass->mCanCast = hx::TCanCast< GLES2Context_Impl__obj >;
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

} // end namespace lime
} // end namespace graphics
} // end namespace opengl
} // end namespace _GLES2Context
