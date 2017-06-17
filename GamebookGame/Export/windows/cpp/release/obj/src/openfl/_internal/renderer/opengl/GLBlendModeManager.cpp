#include <hxcpp.h>

#ifndef INCLUDED_lime__backend_native_NativeGLRenderContext
#include <lime/_backend/native/NativeGLRenderContext.h>
#endif
#ifndef INCLUDED_openfl__internal_renderer_AbstractBlendModeManager
#include <openfl/_internal/renderer/AbstractBlendModeManager.h>
#endif
#ifndef INCLUDED_openfl__internal_renderer_opengl_GLBlendModeManager
#include <openfl/_internal/renderer/opengl/GLBlendModeManager.h>
#endif
namespace openfl{
namespace _internal{
namespace renderer{
namespace opengl{

Void GLBlendModeManager_obj::__construct(::lime::_backend::native::NativeGLRenderContext gl)
{
{
	super::__construct();
	this->gl = gl;
	this->setBlendMode(((Dynamic)((int)10)));
	int tmp = gl->BLEND;
	gl->enable(tmp);
}
;
	return null();
}

//GLBlendModeManager_obj::~GLBlendModeManager_obj() { }

Dynamic GLBlendModeManager_obj::__CreateEmpty() { return  new GLBlendModeManager_obj; }
hx::ObjectPtr< GLBlendModeManager_obj > GLBlendModeManager_obj::__new(::lime::_backend::native::NativeGLRenderContext gl)
{  hx::ObjectPtr< GLBlendModeManager_obj > _result_ = new GLBlendModeManager_obj();
	_result_->__construct(gl);
	return _result_;}

Dynamic GLBlendModeManager_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< GLBlendModeManager_obj > _result_ = new GLBlendModeManager_obj();
	_result_->__construct(inArgs[0]);
	return _result_;}

Void GLBlendModeManager_obj::setBlendMode( Dynamic blendMode){
{
		Dynamic tmp = this->currentBlendMode;
		Dynamic tmp1 = blendMode;
		bool tmp2 = (tmp == tmp1);
		if ((tmp2)){
			return null();
		}
		this->currentBlendMode = blendMode;
		Dynamic tmp3 = blendMode;
		switch( (int)(tmp3)){
			case (int)0: {
				::lime::_backend::native::NativeGLRenderContext tmp4 = this->gl;
				::lime::_backend::native::NativeGLRenderContext tmp5 = this->gl;
				int tmp6 = tmp5->FUNC_ADD;
				tmp4->blendEquation(tmp6);
				::lime::_backend::native::NativeGLRenderContext tmp7 = this->gl;
				::lime::_backend::native::NativeGLRenderContext tmp8 = this->gl;
				int tmp9 = tmp8->ONE;
				::lime::_backend::native::NativeGLRenderContext tmp10 = this->gl;
				int tmp11 = tmp10->ONE;
				tmp7->blendFunc(tmp9,tmp11);
			}
			;break;
			case (int)9: {
				::lime::_backend::native::NativeGLRenderContext tmp4 = this->gl;
				::lime::_backend::native::NativeGLRenderContext tmp5 = this->gl;
				int tmp6 = tmp5->FUNC_ADD;
				tmp4->blendEquation(tmp6);
				::lime::_backend::native::NativeGLRenderContext tmp7 = this->gl;
				::lime::_backend::native::NativeGLRenderContext tmp8 = this->gl;
				int tmp9 = tmp8->DST_COLOR;
				::lime::_backend::native::NativeGLRenderContext tmp10 = this->gl;
				int tmp11 = tmp10->ONE_MINUS_SRC_ALPHA;
				tmp7->blendFunc(tmp9,tmp11);
			}
			;break;
			case (int)12: {
				::lime::_backend::native::NativeGLRenderContext tmp4 = this->gl;
				::lime::_backend::native::NativeGLRenderContext tmp5 = this->gl;
				int tmp6 = tmp5->FUNC_ADD;
				tmp4->blendEquation(tmp6);
				::lime::_backend::native::NativeGLRenderContext tmp7 = this->gl;
				::lime::_backend::native::NativeGLRenderContext tmp8 = this->gl;
				int tmp9 = tmp8->ONE;
				::lime::_backend::native::NativeGLRenderContext tmp10 = this->gl;
				int tmp11 = tmp10->ONE_MINUS_SRC_COLOR;
				tmp7->blendFunc(tmp9,tmp11);
			}
			;break;
			case (int)14: {
				::lime::_backend::native::NativeGLRenderContext tmp4 = this->gl;
				::lime::_backend::native::NativeGLRenderContext tmp5 = this->gl;
				int tmp6 = tmp5->FUNC_REVERSE_SUBTRACT;
				tmp4->blendEquation(tmp6);
				::lime::_backend::native::NativeGLRenderContext tmp7 = this->gl;
				::lime::_backend::native::NativeGLRenderContext tmp8 = this->gl;
				int tmp9 = tmp8->ONE;
				::lime::_backend::native::NativeGLRenderContext tmp10 = this->gl;
				int tmp11 = tmp10->ONE;
				tmp7->blendFunc(tmp9,tmp11);
			}
			;break;
			case (int)2: {
				::lime::_backend::native::NativeGLRenderContext tmp4 = this->gl;
				tmp4->blendEquation((int)32775);
				::lime::_backend::native::NativeGLRenderContext tmp5 = this->gl;
				::lime::_backend::native::NativeGLRenderContext tmp6 = this->gl;
				int tmp7 = tmp6->ONE;
				::lime::_backend::native::NativeGLRenderContext tmp8 = this->gl;
				int tmp9 = tmp8->ONE;
				tmp5->blendFunc(tmp7,tmp9);
			}
			;break;
			case (int)8: {
				::lime::_backend::native::NativeGLRenderContext tmp4 = this->gl;
				tmp4->blendEquation((int)32776);
				::lime::_backend::native::NativeGLRenderContext tmp5 = this->gl;
				::lime::_backend::native::NativeGLRenderContext tmp6 = this->gl;
				int tmp7 = tmp6->ONE;
				::lime::_backend::native::NativeGLRenderContext tmp8 = this->gl;
				int tmp9 = tmp8->ONE;
				tmp5->blendFunc(tmp7,tmp9);
			}
			;break;
			default: {
				::lime::_backend::native::NativeGLRenderContext tmp4 = this->gl;
				::lime::_backend::native::NativeGLRenderContext tmp5 = this->gl;
				int tmp6 = tmp5->FUNC_ADD;
				tmp4->blendEquation(tmp6);
				::lime::_backend::native::NativeGLRenderContext tmp7 = this->gl;
				::lime::_backend::native::NativeGLRenderContext tmp8 = this->gl;
				int tmp9 = tmp8->ONE;
				::lime::_backend::native::NativeGLRenderContext tmp10 = this->gl;
				int tmp11 = tmp10->ONE_MINUS_SRC_ALPHA;
				tmp7->blendFunc(tmp9,tmp11);
			}
		}
	}
return null();
}



GLBlendModeManager_obj::GLBlendModeManager_obj()
{
}

void GLBlendModeManager_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(GLBlendModeManager);
	HX_MARK_MEMBER_NAME(currentBlendMode,"currentBlendMode");
	HX_MARK_MEMBER_NAME(gl,"gl");
	HX_MARK_END_CLASS();
}

void GLBlendModeManager_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(currentBlendMode,"currentBlendMode");
	HX_VISIT_MEMBER_NAME(gl,"gl");
}

Dynamic GLBlendModeManager_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 2:
		if (HX_FIELD_EQ(inName,"gl") ) { return gl; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"setBlendMode") ) { return setBlendMode_dyn(); }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"currentBlendMode") ) { return currentBlendMode; }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic GLBlendModeManager_obj::__SetField(const ::String &inName,const Dynamic &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 2:
		if (HX_FIELD_EQ(inName,"gl") ) { gl=inValue.Cast< ::lime::_backend::native::NativeGLRenderContext >(); return inValue; }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"currentBlendMode") ) { currentBlendMode=inValue.Cast< Dynamic >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void GLBlendModeManager_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("currentBlendMode","\xdb","\x58","\x68","\xff"));
	outFields->push(HX_HCSTRING("gl","\x25","\x5a","\x00","\x00"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsObject /*Dynamic*/ ,(int)offsetof(GLBlendModeManager_obj,currentBlendMode),HX_HCSTRING("currentBlendMode","\xdb","\x58","\x68","\xff")},
	{hx::fsObject /*::lime::_backend::native::NativeGLRenderContext*/ ,(int)offsetof(GLBlendModeManager_obj,gl),HX_HCSTRING("gl","\x25","\x5a","\x00","\x00")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo *sStaticStorageInfo = 0;
#endif

static ::String sMemberFields[] = {
	HX_HCSTRING("currentBlendMode","\xdb","\x58","\x68","\xff"),
	HX_HCSTRING("gl","\x25","\x5a","\x00","\x00"),
	HX_HCSTRING("setBlendMode","\x52","\xa4","\x87","\x30"),
	::String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(GLBlendModeManager_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(GLBlendModeManager_obj::__mClass,"__mClass");
};

#endif

hx::Class GLBlendModeManager_obj::__mClass;

void GLBlendModeManager_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("openfl._internal.renderer.opengl.GLBlendModeManager","\xa2","\xba","\x7e","\x51");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = hx::Class_obj::dupFunctions(sMemberFields);
	__mClass->mCanCast = hx::TCanCast< GLBlendModeManager_obj >;
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
