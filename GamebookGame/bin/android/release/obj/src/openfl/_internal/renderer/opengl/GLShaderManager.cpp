#include <hxcpp.h>

#ifndef INCLUDED_haxe_io_Bytes
#include <haxe/io/Bytes.h>
#endif
#ifndef INCLUDED_lime__backend_native_NativeGLRenderContext
#include <lime/_backend/native/NativeGLRenderContext.h>
#endif
#ifndef INCLUDED_lime_graphics_opengl_GLObject
#include <lime/graphics/opengl/GLObject.h>
#endif
#ifndef INCLUDED_openfl__internal_renderer_AbstractShaderManager
#include <openfl/_internal/renderer/AbstractShaderManager.h>
#endif
#ifndef INCLUDED_openfl__internal_renderer_opengl_GLShaderManager
#include <openfl/_internal/renderer/opengl/GLShaderManager.h>
#endif
#ifndef INCLUDED_openfl_display_Shader
#include <openfl/display/Shader.h>
#endif
#ifndef INCLUDED_openfl_utils_ByteArrayData
#include <openfl/utils/ByteArrayData.h>
#endif
#ifndef INCLUDED_openfl_utils_IDataInput
#include <openfl/utils/IDataInput.h>
#endif
#ifndef INCLUDED_openfl_utils_IDataOutput
#include <openfl/utils/IDataOutput.h>
#endif
namespace openfl{
namespace _internal{
namespace renderer{
namespace opengl{

Void GLShaderManager_obj::__construct(::lime::_backend::native::NativeGLRenderContext gl)
{
{
	super::__construct();
	this->gl = gl;
	::openfl::display::Shader tmp = ::openfl::display::Shader_obj::__new(null());
	this->defaultShader = tmp;
	::openfl::display::Shader tmp1 = this->defaultShader;
	tmp1->gl = gl;
	::openfl::display::Shader tmp2 = this->defaultShader;
	tmp2->__init();
}
;
	return null();
}

//GLShaderManager_obj::~GLShaderManager_obj() { }

Dynamic GLShaderManager_obj::__CreateEmpty() { return  new GLShaderManager_obj; }
hx::ObjectPtr< GLShaderManager_obj > GLShaderManager_obj::__new(::lime::_backend::native::NativeGLRenderContext gl)
{  hx::ObjectPtr< GLShaderManager_obj > _result_ = new GLShaderManager_obj();
	_result_->__construct(gl);
	return _result_;}

Dynamic GLShaderManager_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< GLShaderManager_obj > _result_ = new GLShaderManager_obj();
	_result_->__construct(inArgs[0]);
	return _result_;}

Void GLShaderManager_obj::setShader( ::openfl::display::Shader shader){
{
		::openfl::display::Shader tmp = this->currentShader;
		::openfl::display::Shader tmp1 = shader;
		bool tmp2 = (tmp == tmp1);
		if ((tmp2)){
			::openfl::display::Shader tmp3 = this->currentShader;
			bool tmp4 = (tmp3 != null());
			if ((tmp4)){
				::openfl::display::Shader tmp5 = this->currentShader;
				tmp5->__update();
			}
			return null();
		}
		::openfl::display::Shader tmp3 = this->currentShader;
		bool tmp4 = (tmp3 != null());
		if ((tmp4)){
			::openfl::display::Shader tmp5 = this->currentShader;
			tmp5->__disable();
		}
		bool tmp5 = (shader == null());
		if ((tmp5)){
			this->currentShader = null();
			::lime::_backend::native::NativeGLRenderContext tmp6 = this->gl;
			tmp6->useProgram(null());
			return null();
		}
		this->currentShader = shader;
		::openfl::display::Shader tmp6 = this->currentShader;
		::lime::_backend::native::NativeGLRenderContext tmp7 = tmp6->gl;
		bool tmp8 = (tmp7 == null());
		if ((tmp8)){
			::lime::_backend::native::NativeGLRenderContext tmp9 = this->gl;
			::openfl::display::Shader tmp10 = this->currentShader;
			tmp10->gl = tmp9;
			::openfl::display::Shader tmp11 = this->currentShader;
			tmp11->__init();
		}
		::lime::_backend::native::NativeGLRenderContext tmp9 = this->gl;
		::lime::graphics::opengl::GLObject tmp10 = shader->glProgram;
		tmp9->useProgram(tmp10);
		::openfl::display::Shader tmp11 = this->currentShader;
		tmp11->__enable();
		::openfl::display::Shader tmp12 = this->currentShader;
		tmp12->__update();
	}
return null();
}



GLShaderManager_obj::GLShaderManager_obj()
{
}

void GLShaderManager_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(GLShaderManager);
	HX_MARK_MEMBER_NAME(gl,"gl");
	::openfl::_internal::renderer::AbstractShaderManager_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void GLShaderManager_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(gl,"gl");
	::openfl::_internal::renderer::AbstractShaderManager_obj::__Visit(HX_VISIT_ARG);
}

Dynamic GLShaderManager_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 2:
		if (HX_FIELD_EQ(inName,"gl") ) { return gl; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"setShader") ) { return setShader_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic GLShaderManager_obj::__SetField(const ::String &inName,const Dynamic &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 2:
		if (HX_FIELD_EQ(inName,"gl") ) { gl=inValue.Cast< ::lime::_backend::native::NativeGLRenderContext >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void GLShaderManager_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("gl","\x25","\x5a","\x00","\x00"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsObject /*::lime::_backend::native::NativeGLRenderContext*/ ,(int)offsetof(GLShaderManager_obj,gl),HX_HCSTRING("gl","\x25","\x5a","\x00","\x00")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo *sStaticStorageInfo = 0;
#endif

static ::String sMemberFields[] = {
	HX_HCSTRING("gl","\x25","\x5a","\x00","\x00"),
	HX_HCSTRING("setShader","\x67","\x34","\xc8","\x7c"),
	::String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(GLShaderManager_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(GLShaderManager_obj::__mClass,"__mClass");
};

#endif

hx::Class GLShaderManager_obj::__mClass;

void GLShaderManager_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("openfl._internal.renderer.opengl.GLShaderManager","\xff","\x63","\x2d","\xbb");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = hx::Class_obj::dupFunctions(sMemberFields);
	__mClass->mCanCast = hx::TCanCast< GLShaderManager_obj >;
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
