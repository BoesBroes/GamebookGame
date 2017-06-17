#include <hxcpp.h>

#ifndef INCLUDED_Std
#include <Std.h>
#endif
#ifndef INCLUDED_lime__backend_native_NativeGLRenderContext
#include <lime/_backend/native/NativeGLRenderContext.h>
#endif
#ifndef INCLUDED_lime_graphics_opengl_GL
#include <lime/graphics/opengl/GL.h>
#endif
#ifndef INCLUDED_openfl__internal_stage3D_GLUtils
#include <openfl/_internal/stage3D/GLUtils.h>
#endif
#ifndef INCLUDED_openfl_errors_Error
#include <openfl/errors/Error.h>
#endif
#ifndef INCLUDED_openfl_errors_IllegalOperationError
#include <openfl/errors/IllegalOperationError.h>
#endif
namespace openfl{
namespace _internal{
namespace stage3D{

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

bool GLUtils_obj::debug;

Void GLUtils_obj::CheckGLError( ){
{
		bool tmp = ::openfl::_internal::stage3D::GLUtils_obj::debug;
		bool tmp1 = !(tmp);
		if ((tmp1)){
			return null();
		}
		::lime::_backend::native::NativeGLRenderContext tmp2 = ::lime::graphics::opengl::GL_obj::context;
		int tmp3 = tmp2->getError();
		int error = tmp3;
		bool tmp4 = (error != (int)0);
		if ((tmp4)){
			int tmp5 = error;
			::String tmp6;
			switch( (int)(tmp5)){
				case (int)0: {
					tmp6 = HX_HCSTRING("GL_NO_ERROR","\x84","\x02","\xdf","\x4a");
				}
				;break;
				case (int)1280: {
					tmp6 = HX_HCSTRING("GL_INVALID_ENUM","\x43","\x16","\x1d","\x13");
				}
				;break;
				case (int)1282: {
					tmp6 = HX_HCSTRING("GL_INVALID_OPERATION","\x85","\x01","\xaa","\xe2");
				}
				;break;
				case (int)1286: {
					tmp6 = HX_HCSTRING("GL_INVALID_FRAMEBUFFER_OPERATION","\x53","\xc5","\xf1","\xcb");
				}
				;break;
				case (int)1281: {
					tmp6 = HX_HCSTRING("GL_INVALID_VALUE","\xcf","\xad","\x87","\x67");
				}
				;break;
				case (int)1285: {
					tmp6 = HX_HCSTRING("GL_OUT_OF_MEMORY","\x3e","\xb7","\xf8","\x98");
				}
				;break;
				default: {
					int tmp7 = error;
					tmp6 = ::Std_obj::string(tmp7);
				}
			}
			::String errorText = tmp6;
			::String tmp7 = (HX_HCSTRING("Error calling openGL api. Error: ","\x3f","\xad","\x32","\x17") + errorText);
			::String tmp8 = (tmp7 + HX_HCSTRING("\n","\x0a","\x00","\x00","\x00"));
			::openfl::errors::IllegalOperationError tmp9 = ::openfl::errors::IllegalOperationError_obj::__new(tmp8);
			HX_STACK_DO_THROW(tmp9);
		}
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(GLUtils_obj,CheckGLError,(void))


GLUtils_obj::GLUtils_obj()
{
}

bool GLUtils_obj::__GetStatic(const ::String &inName, Dynamic &outValue, hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"debug") ) { outValue = debug; return true;  }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"CheckGLError") ) { outValue = CheckGLError_dyn(); return true;  }
	}
	return false;
}

bool GLUtils_obj::__SetStatic(const ::String &inName,Dynamic &ioValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"debug") ) { debug=ioValue.Cast< bool >(); return true; }
	}
	return false;
}

#if HXCPP_SCRIPTABLE
static hx::StorageInfo *sMemberStorageInfo = 0;
static hx::StaticInfo sStaticStorageInfo[] = {
	{hx::fsBool,(void *) &GLUtils_obj::debug,HX_HCSTRING("debug","\x53","\x52","\x1f","\xd7")},
	{ hx::fsUnknown, 0, null()}
};
#endif

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(GLUtils_obj::__mClass,"__mClass");
	HX_MARK_MEMBER_NAME(GLUtils_obj::debug,"debug");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(GLUtils_obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(GLUtils_obj::debug,"debug");
};

#endif

hx::Class GLUtils_obj::__mClass;

static ::String sStaticFields[] = {
	HX_HCSTRING("debug","\x53","\x52","\x1f","\xd7"),
	HX_HCSTRING("CheckGLError","\xbb","\x73","\x32","\xda"),
	::String(null()) };

void GLUtils_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("openfl._internal.stage3D.GLUtils","\x1d","\xe1","\xf9","\x25");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &GLUtils_obj::__GetStatic;
	__mClass->mSetStaticField = &GLUtils_obj::__SetStatic;
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

void GLUtils_obj::__boot()
{
	debug= false;
}

} // end namespace openfl
} // end namespace _internal
} // end namespace stage3D
