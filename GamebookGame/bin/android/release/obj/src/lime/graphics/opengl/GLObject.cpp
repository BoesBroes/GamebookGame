#include <hxcpp.h>

#ifndef INCLUDED_lime__backend_native_NativeCFFI
#include <lime/_backend/native/NativeCFFI.h>
#endif
#ifndef INCLUDED_lime_graphics_opengl_GLObject
#include <lime/graphics/opengl/GLObject.h>
#endif
namespace lime{
namespace graphics{
namespace opengl{

Void GLObject_obj::__construct(int id)
{
HX_STACK_FRAME("lime.graphics.opengl.GLObject","new",0x33d200eb,"lime.graphics.opengl.GLObject.new","lime/graphics/opengl/GL.hx",3135,0xa5aa2623)
HX_STACK_THIS(this)
HX_STACK_ARG(id,"id")
{
	HX_STACK_LINE(3135)
	this->id = id;
}
;
	return null();
}

//GLObject_obj::~GLObject_obj() { }

Dynamic GLObject_obj::__CreateEmpty() { return  new GLObject_obj; }
hx::ObjectPtr< GLObject_obj > GLObject_obj::__new(int id)
{  hx::ObjectPtr< GLObject_obj > _result_ = new GLObject_obj();
	_result_->__construct(id);
	return _result_;}

Dynamic GLObject_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< GLObject_obj > _result_ = new GLObject_obj();
	_result_->__construct(inArgs[0]);
	return _result_;}

::lime::graphics::opengl::GLObject GLObject_obj::fromInt( int type,int id){
	HX_STACK_FRAME("lime.graphics.opengl.GLObject","fromInt",0x6703afb0,"lime.graphics.opengl.GLObject.fromInt","lime/graphics/opengl/GL.hx",3140,0xa5aa2623)
	HX_STACK_ARG(type,"type")
	HX_STACK_ARG(id,"id")
	HX_STACK_LINE(3142)
	bool tmp = (id == (int)0);		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(3142)
	if ((tmp)){
		HX_STACK_LINE(3142)
		return null();
	}
	HX_STACK_LINE(3145)
	::lime::graphics::opengl::GLObject object = ((Dynamic)(::lime::_backend::native::NativeCFFI_obj::cffi_lime_gl_object_from_id.call(id,type)));		HX_STACK_VAR(object,"object");
	HX_STACK_LINE(3147)
	bool tmp1 = (object != null());		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(3147)
	if ((tmp1)){
		HX_STACK_LINE(3149)
		::lime::graphics::opengl::GLObject tmp2 = object;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(3149)
		return tmp2;
	}
	HX_STACK_LINE(3153)
	::lime::graphics::opengl::GLObject tmp2 = ::lime::graphics::opengl::GLObject_obj::__new(id);		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(3153)
	object = tmp2;
	HX_STACK_LINE(3154)
	::lime::_backend::native::NativeCFFI_obj::cffi_lime_gl_object_register.call(id,type,hx::DynamicPtr(object));
	HX_STACK_LINE(3155)
	::lime::graphics::opengl::GLObject tmp3 = object;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(3155)
	return tmp3;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(GLObject_obj,fromInt,return )


GLObject_obj::GLObject_obj()
{
}

void GLObject_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(GLObject);
	HX_MARK_MEMBER_NAME(id,"id");
	HX_MARK_MEMBER_NAME(refs,"refs");
	HX_MARK_END_CLASS();
}

void GLObject_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(id,"id");
	HX_VISIT_MEMBER_NAME(refs,"refs");
}

Dynamic GLObject_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 2:
		if (HX_FIELD_EQ(inName,"id") ) { return id; }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"refs") ) { return refs; }
	}
	return super::__Field(inName,inCallProp);
}

bool GLObject_obj::__GetStatic(const ::String &inName, Dynamic &outValue, hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 7:
		if (HX_FIELD_EQ(inName,"fromInt") ) { outValue = fromInt_dyn(); return true;  }
	}
	return false;
}

Dynamic GLObject_obj::__SetField(const ::String &inName,const Dynamic &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 2:
		if (HX_FIELD_EQ(inName,"id") ) { id=inValue.Cast< int >(); return inValue; }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"refs") ) { refs=inValue.Cast< Array< ::Dynamic > >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void GLObject_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("id","\xdb","\x5b","\x00","\x00"));
	outFields->push(HX_HCSTRING("refs","\xc0","\x4f","\xa7","\x4b"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsInt,(int)offsetof(GLObject_obj,id),HX_HCSTRING("id","\xdb","\x5b","\x00","\x00")},
	{hx::fsObject /*Array< ::Dynamic >*/ ,(int)offsetof(GLObject_obj,refs),HX_HCSTRING("refs","\xc0","\x4f","\xa7","\x4b")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo *sStaticStorageInfo = 0;
#endif

static ::String sMemberFields[] = {
	HX_HCSTRING("id","\xdb","\x5b","\x00","\x00"),
	HX_HCSTRING("refs","\xc0","\x4f","\xa7","\x4b"),
	::String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(GLObject_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(GLObject_obj::__mClass,"__mClass");
};

#endif

hx::Class GLObject_obj::__mClass;

static ::String sStaticFields[] = {
	HX_HCSTRING("fromInt","\xa5","\xdd","\xfa","\x57"),
	::String(null()) };

void GLObject_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("lime.graphics.opengl.GLObject","\x79","\xaf","\x16","\x07");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &GLObject_obj::__GetStatic;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(sStaticFields);
	__mClass->mMembers = hx::Class_obj::dupFunctions(sMemberFields);
	__mClass->mCanCast = hx::TCanCast< GLObject_obj >;
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
