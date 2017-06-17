#include <hxcpp.h>

#ifndef INCLUDED_openfl__internal_timeline_FrameObjectType
#include <openfl/_internal/timeline/FrameObjectType.h>
#endif
namespace openfl{
namespace _internal{
namespace timeline{

::openfl::_internal::timeline::FrameObjectType FrameObjectType_obj::CREATE;

::openfl::_internal::timeline::FrameObjectType FrameObjectType_obj::DESTROY;

::openfl::_internal::timeline::FrameObjectType FrameObjectType_obj::UPDATE;

HX_DEFINE_CREATE_ENUM(FrameObjectType_obj)

int FrameObjectType_obj::__FindIndex(::String inName)
{
	if (inName==HX_HCSTRING("CREATE","\xfc","\x12","\x92","\x2e")) return 0;
	if (inName==HX_HCSTRING("DESTROY","\xda","\x00","\x5a","\xa4")) return 2;
	if (inName==HX_HCSTRING("UPDATE","\x09","\x32","\x88","\x39")) return 1;
	return super::__FindIndex(inName);
}

int FrameObjectType_obj::__FindArgCount(::String inName)
{
	if (inName==HX_HCSTRING("CREATE","\xfc","\x12","\x92","\x2e")) return 0;
	if (inName==HX_HCSTRING("DESTROY","\xda","\x00","\x5a","\xa4")) return 0;
	if (inName==HX_HCSTRING("UPDATE","\x09","\x32","\x88","\x39")) return 0;
	return super::__FindArgCount(inName);
}

Dynamic FrameObjectType_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	if (inName==HX_HCSTRING("CREATE","\xfc","\x12","\x92","\x2e")) return CREATE;
	if (inName==HX_HCSTRING("DESTROY","\xda","\x00","\x5a","\xa4")) return DESTROY;
	if (inName==HX_HCSTRING("UPDATE","\x09","\x32","\x88","\x39")) return UPDATE;
	return super::__Field(inName,inCallProp);
}

static ::String sStaticFields[] = {
	HX_HCSTRING("CREATE","\xfc","\x12","\x92","\x2e"),
	HX_HCSTRING("UPDATE","\x09","\x32","\x88","\x39"),
	HX_HCSTRING("DESTROY","\xda","\x00","\x5a","\xa4"),
	::String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(FrameObjectType_obj::CREATE,"CREATE");
	HX_MARK_MEMBER_NAME(FrameObjectType_obj::DESTROY,"DESTROY");
	HX_MARK_MEMBER_NAME(FrameObjectType_obj::UPDATE,"UPDATE");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatic(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(FrameObjectType_obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(FrameObjectType_obj::CREATE,"CREATE");
	HX_VISIT_MEMBER_NAME(FrameObjectType_obj::DESTROY,"DESTROY");
	HX_VISIT_MEMBER_NAME(FrameObjectType_obj::UPDATE,"UPDATE");
};
#endif

static ::String sMemberFields[] = { ::String(null()) };
hx::Class FrameObjectType_obj::__mClass;

Dynamic __Create_FrameObjectType_obj() { return new FrameObjectType_obj; }

void FrameObjectType_obj::__register()
{

hx::Static(__mClass) = hx::RegisterClass(HX_HCSTRING("openfl._internal.timeline.FrameObjectType","\xc9","\x51","\x85","\xe1"), hx::TCanCast< FrameObjectType_obj >,sStaticFields,sMemberFields,
	&__Create_FrameObjectType_obj, &__Create,
	&super::__SGetClass(), &CreateFrameObjectType_obj, sMarkStatics
#ifdef HXCPP_VISIT_ALLOCS
    , sVisitStatic
#endif
#ifdef HXCPP_SCRIPTABLE
    , 0
#endif
);
}

void FrameObjectType_obj::__boot()
{
hx::Static(CREATE) = hx::CreateEnum< FrameObjectType_obj >(HX_HCSTRING("CREATE","\xfc","\x12","\x92","\x2e"),0);
hx::Static(DESTROY) = hx::CreateEnum< FrameObjectType_obj >(HX_HCSTRING("DESTROY","\xda","\x00","\x5a","\xa4"),2);
hx::Static(UPDATE) = hx::CreateEnum< FrameObjectType_obj >(HX_HCSTRING("UPDATE","\x09","\x32","\x88","\x39"),1);
}


} // end namespace openfl
} // end namespace _internal
} // end namespace timeline
