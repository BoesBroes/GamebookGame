#include <hxcpp.h>

#ifndef INCLUDED_lime_graphics_opengl_GLContextType
#include <lime/graphics/opengl/GLContextType.h>
#endif
namespace lime{
namespace graphics{
namespace opengl{

::lime::graphics::opengl::GLContextType GLContextType_obj::GLES;

::lime::graphics::opengl::GLContextType GLContextType_obj::OPENGL;

::lime::graphics::opengl::GLContextType GLContextType_obj::WEBGL;

HX_DEFINE_CREATE_ENUM(GLContextType_obj)

int GLContextType_obj::__FindIndex(::String inName)
{
	if (inName==HX_HCSTRING("GLES","\xd3","\x0d","\x28","\x2f")) return 1;
	if (inName==HX_HCSTRING("OPENGL","\x6f","\x10","\x17","\xd4")) return 0;
	if (inName==HX_HCSTRING("WEBGL","\x99","\x83","\xaa","\x45")) return 2;
	return super::__FindIndex(inName);
}

int GLContextType_obj::__FindArgCount(::String inName)
{
	if (inName==HX_HCSTRING("GLES","\xd3","\x0d","\x28","\x2f")) return 0;
	if (inName==HX_HCSTRING("OPENGL","\x6f","\x10","\x17","\xd4")) return 0;
	if (inName==HX_HCSTRING("WEBGL","\x99","\x83","\xaa","\x45")) return 0;
	return super::__FindArgCount(inName);
}

Dynamic GLContextType_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	if (inName==HX_HCSTRING("GLES","\xd3","\x0d","\x28","\x2f")) return GLES;
	if (inName==HX_HCSTRING("OPENGL","\x6f","\x10","\x17","\xd4")) return OPENGL;
	if (inName==HX_HCSTRING("WEBGL","\x99","\x83","\xaa","\x45")) return WEBGL;
	return super::__Field(inName,inCallProp);
}

static ::String sStaticFields[] = {
	HX_HCSTRING("OPENGL","\x6f","\x10","\x17","\xd4"),
	HX_HCSTRING("GLES","\xd3","\x0d","\x28","\x2f"),
	HX_HCSTRING("WEBGL","\x99","\x83","\xaa","\x45"),
	::String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(GLContextType_obj::GLES,"GLES");
	HX_MARK_MEMBER_NAME(GLContextType_obj::OPENGL,"OPENGL");
	HX_MARK_MEMBER_NAME(GLContextType_obj::WEBGL,"WEBGL");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatic(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(GLContextType_obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(GLContextType_obj::GLES,"GLES");
	HX_VISIT_MEMBER_NAME(GLContextType_obj::OPENGL,"OPENGL");
	HX_VISIT_MEMBER_NAME(GLContextType_obj::WEBGL,"WEBGL");
};
#endif

static ::String sMemberFields[] = { ::String(null()) };
hx::Class GLContextType_obj::__mClass;

Dynamic __Create_GLContextType_obj() { return new GLContextType_obj; }

void GLContextType_obj::__register()
{

hx::Static(__mClass) = hx::RegisterClass(HX_HCSTRING("lime.graphics.opengl.GLContextType","\x4f","\xc5","\x88","\xac"), hx::TCanCast< GLContextType_obj >,sStaticFields,sMemberFields,
	&__Create_GLContextType_obj, &__Create,
	&super::__SGetClass(), &CreateGLContextType_obj, sMarkStatics
#ifdef HXCPP_VISIT_ALLOCS
    , sVisitStatic
#endif
#ifdef HXCPP_SCRIPTABLE
    , 0
#endif
);
}

void GLContextType_obj::__boot()
{
hx::Static(GLES) = hx::CreateEnum< GLContextType_obj >(HX_HCSTRING("GLES","\xd3","\x0d","\x28","\x2f"),1);
hx::Static(OPENGL) = hx::CreateEnum< GLContextType_obj >(HX_HCSTRING("OPENGL","\x6f","\x10","\x17","\xd4"),0);
hx::Static(WEBGL) = hx::CreateEnum< GLContextType_obj >(HX_HCSTRING("WEBGL","\x99","\x83","\xaa","\x45"),2);
}


} // end namespace lime
} // end namespace graphics
} // end namespace opengl
