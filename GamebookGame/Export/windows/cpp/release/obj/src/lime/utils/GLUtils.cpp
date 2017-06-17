#include <hxcpp.h>

#ifndef INCLUDED_lime__backend_native_NativeGLRenderContext
#include <lime/_backend/native/NativeGLRenderContext.h>
#endif
#ifndef INCLUDED_lime_graphics_opengl_GL
#include <lime/graphics/opengl/GL.h>
#endif
#ifndef INCLUDED_lime_graphics_opengl_GLObject
#include <lime/graphics/opengl/GLObject.h>
#endif
#ifndef INCLUDED_lime_utils_GLUtils
#include <lime/utils/GLUtils.h>
#endif
#ifndef INCLUDED_lime_utils_Log
#include <lime/utils/Log.h>
#endif
namespace lime{
namespace utils{

Void GLUtils_obj::__construct()
{
	return null();
}

//GLUtils_obj::~GLUtils_obj() { }

Dynamic GLUtils_obj::__CreateEmpty() { return  new GLUtils_obj; }
hx::ObjectPtr< GLUtils_obj > GLUtils_obj::__new()
{  hx::ObjectPtr< GLUtils_obj > _result_ = new GLUtils_obj();
	_result_->__construct();
	return _result_;}

Dynamic GLUtils_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< GLUtils_obj > _result_ = new GLUtils_obj();
	_result_->__construct();
	return _result_;}

::lime::graphics::opengl::GLObject GLUtils_obj::compileShader( ::String source,int type){
	::lime::_backend::native::NativeGLRenderContext tmp = ::lime::graphics::opengl::GL_obj::context;
	int tmp1 = type;
	::lime::graphics::opengl::GLObject tmp2 = tmp->createShader(tmp1);
	::lime::graphics::opengl::GLObject shader = tmp2;
	{
		::lime::_backend::native::NativeGLRenderContext tmp3 = ::lime::graphics::opengl::GL_obj::context;
		::lime::graphics::opengl::GLObject tmp4 = shader;
		::String tmp5 = source;
		tmp3->shaderSource(tmp4,tmp5);
	}
	{
		::lime::_backend::native::NativeGLRenderContext tmp3 = ::lime::graphics::opengl::GL_obj::context;
		::lime::graphics::opengl::GLObject tmp4 = shader;
		tmp3->compileShader(tmp4);
	}
	::lime::_backend::native::NativeGLRenderContext tmp3 = ::lime::graphics::opengl::GL_obj::context;
	::lime::graphics::opengl::GLObject tmp4 = shader;
	Dynamic tmp5 = tmp3->getShaderParameter(tmp4,(int)35713);
	bool tmp6 = (tmp5 == (int)0);
	if ((tmp6)){
		int tmp7 = type;
		::String tmp8;
		switch( (int)(tmp7)){
			case (int)35633: {
				tmp8 = HX_HCSTRING("Error compiling vertex shader","\x39","\xc9","\xc1","\xb2");
			}
			;break;
			case (int)35632: {
				tmp8 = HX_HCSTRING("Error compiling fragment shader","\x4d","\xd0","\xbe","\xe3");
			}
			;break;
			default: {
				tmp8 = HX_HCSTRING("Error compiling unknown shader type","\xd7","\x06","\xf2","\x00");
			}
		}
		::String message = tmp8;
		::lime::_backend::native::NativeGLRenderContext tmp9 = ::lime::graphics::opengl::GL_obj::context;
		::lime::graphics::opengl::GLObject tmp10 = shader;
		::String tmp11 = tmp9->getShaderInfoLog(tmp10);
		::String tmp12 = (HX_HCSTRING("\n","\x0a","\x00","\x00","\x00") + tmp11);
		hx::AddEq(message,tmp12);
		::String tmp13 = message;
		Dynamic tmp14 = hx::SourceInfo(HX_HCSTRING("GLUtils.hx","\x72","\x74","\xb2","\x40"),35,HX_HCSTRING("lime.utils.GLUtils","\x76","\x27","\x94","\xe3"),HX_HCSTRING("compileShader","\xf8","\x70","\xb2","\xda"));
		::lime::utils::Log_obj::error(tmp13,tmp14);
	}
	::lime::graphics::opengl::GLObject tmp7 = shader;
	return tmp7;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(GLUtils_obj,compileShader,return )

::lime::graphics::opengl::GLObject GLUtils_obj::createProgram( ::String vertexSource,::String fragmentSource){
	::String tmp = vertexSource;
	::lime::graphics::opengl::GLObject tmp1 = ::lime::utils::GLUtils_obj::compileShader(tmp,(int)35633);
	::lime::graphics::opengl::GLObject vertexShader = tmp1;
	::String tmp2 = fragmentSource;
	::lime::graphics::opengl::GLObject tmp3 = ::lime::utils::GLUtils_obj::compileShader(tmp2,(int)35632);
	::lime::graphics::opengl::GLObject fragmentShader = tmp3;
	::lime::_backend::native::NativeGLRenderContext tmp4 = ::lime::graphics::opengl::GL_obj::context;
	::lime::graphics::opengl::GLObject tmp5 = tmp4->createProgram();
	::lime::graphics::opengl::GLObject program = tmp5;
	{
		::lime::_backend::native::NativeGLRenderContext tmp6 = ::lime::graphics::opengl::GL_obj::context;
		::lime::graphics::opengl::GLObject tmp7 = program;
		::lime::graphics::opengl::GLObject tmp8 = vertexShader;
		tmp6->attachShader(tmp7,tmp8);
	}
	{
		::lime::_backend::native::NativeGLRenderContext tmp6 = ::lime::graphics::opengl::GL_obj::context;
		::lime::graphics::opengl::GLObject tmp7 = program;
		::lime::graphics::opengl::GLObject tmp8 = fragmentShader;
		tmp6->attachShader(tmp7,tmp8);
	}
	{
		::lime::_backend::native::NativeGLRenderContext tmp6 = ::lime::graphics::opengl::GL_obj::context;
		::lime::graphics::opengl::GLObject tmp7 = program;
		tmp6->linkProgram(tmp7);
	}
	::lime::_backend::native::NativeGLRenderContext tmp6 = ::lime::graphics::opengl::GL_obj::context;
	::lime::graphics::opengl::GLObject tmp7 = program;
	Dynamic tmp8 = tmp6->getProgramParameter(tmp7,(int)35714);
	bool tmp9 = (tmp8 == (int)0);
	if ((tmp9)){
		Dynamic tmp10 = hx::SourceInfo(HX_HCSTRING("GLUtils.hx","\x72","\x74","\xb2","\x40"),56,HX_HCSTRING("lime.utils.GLUtils","\x76","\x27","\x94","\xe3"),HX_HCSTRING("createProgram","\xe8","\x22","\x3c","\xdc"));
		::lime::utils::Log_obj::error(HX_HCSTRING("Unable to initialize the shader program","\xf0","\x86","\x8b","\x39"),tmp10);
	}
	::lime::graphics::opengl::GLObject tmp10 = program;
	return tmp10;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(GLUtils_obj,createProgram,return )


GLUtils_obj::GLUtils_obj()
{
}

bool GLUtils_obj::__GetStatic(const ::String &inName, Dynamic &outValue, hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 13:
		if (HX_FIELD_EQ(inName,"compileShader") ) { outValue = compileShader_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"createProgram") ) { outValue = createProgram_dyn(); return true;  }
	}
	return false;
}

#if HXCPP_SCRIPTABLE
static hx::StorageInfo *sMemberStorageInfo = 0;
static hx::StaticInfo *sStaticStorageInfo = 0;
#endif

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(GLUtils_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(GLUtils_obj::__mClass,"__mClass");
};

#endif

hx::Class GLUtils_obj::__mClass;

static ::String sStaticFields[] = {
	HX_HCSTRING("compileShader","\xf8","\x70","\xb2","\xda"),
	HX_HCSTRING("createProgram","\xe8","\x22","\x3c","\xdc"),
	::String(null()) };

void GLUtils_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("lime.utils.GLUtils","\x76","\x27","\x94","\xe3");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &GLUtils_obj::__GetStatic;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(sStaticFields);
	__mClass->mMembers = hx::Class_obj::dupFunctions(0 /* sMemberFields */);
	__mClass->mCanCast = hx::TCanCast< GLUtils_obj >;
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
} // end namespace utils
