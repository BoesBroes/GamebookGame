#include <hxcpp.h>

#ifndef INCLUDED_lime_graphics_opengl_GLObject
#include <lime/graphics/opengl/GLObject.h>
#endif
#ifndef INCLUDED_lime_graphics_opengl__GLSampler_GLSampler_Impl_
#include <lime/graphics/opengl/_GLSampler/GLSampler_Impl_.h>
#endif
namespace lime{
namespace graphics{
namespace opengl{
namespace _GLSampler{

Void GLSampler_Impl__obj::__construct()
{
	return null();
}

//GLSampler_Impl__obj::~GLSampler_Impl__obj() { }

Dynamic GLSampler_Impl__obj::__CreateEmpty() { return  new GLSampler_Impl__obj; }
hx::ObjectPtr< GLSampler_Impl__obj > GLSampler_Impl__obj::__new()
{  hx::ObjectPtr< GLSampler_Impl__obj > _result_ = new GLSampler_Impl__obj();
	_result_->__construct();
	return _result_;}

Dynamic GLSampler_Impl__obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< GLSampler_Impl__obj > _result_ = new GLSampler_Impl__obj();
	_result_->__construct();
	return _result_;}

::lime::graphics::opengl::GLObject GLSampler_Impl__obj::fromInt( int id){
	HX_STACK_FRAME("lime.graphics.opengl._GLSampler.GLSampler_Impl_","fromInt",0x2f824e25,"lime.graphics.opengl._GLSampler.GLSampler_Impl_.fromInt","lime/graphics/opengl/GLSampler.hx",12,0x764fda11)
	HX_STACK_ARG(id,"id")
	HX_STACK_LINE(14)
	int tmp = id;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(14)
	::lime::graphics::opengl::GLObject tmp1 = ::lime::graphics::opengl::GLObject_obj::fromInt((int)9,tmp);		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(14)
	return tmp1;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(GLSampler_Impl__obj,fromInt,return )


GLSampler_Impl__obj::GLSampler_Impl__obj()
{
}

bool GLSampler_Impl__obj::__GetStatic(const ::String &inName, Dynamic &outValue, hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 7:
		if (HX_FIELD_EQ(inName,"fromInt") ) { outValue = fromInt_dyn(); return true;  }
	}
	return false;
}

#if HXCPP_SCRIPTABLE
static hx::StorageInfo *sMemberStorageInfo = 0;
static hx::StaticInfo *sStaticStorageInfo = 0;
#endif

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(GLSampler_Impl__obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(GLSampler_Impl__obj::__mClass,"__mClass");
};

#endif

hx::Class GLSampler_Impl__obj::__mClass;

static ::String sStaticFields[] = {
	HX_HCSTRING("fromInt","\xa5","\xdd","\xfa","\x57"),
	::String(null()) };

void GLSampler_Impl__obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("lime.graphics.opengl._GLSampler.GLSampler_Impl_","\xee","\x50","\x37","\x74");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &GLSampler_Impl__obj::__GetStatic;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(sStaticFields);
	__mClass->mMembers = hx::Class_obj::dupFunctions(0 /* sMemberFields */);
	__mClass->mCanCast = hx::TCanCast< GLSampler_Impl__obj >;
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
} // end namespace _GLSampler
