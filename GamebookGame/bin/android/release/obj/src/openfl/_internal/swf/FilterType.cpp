#include <hxcpp.h>

#ifndef INCLUDED_openfl__internal_swf_FilterType
#include <openfl/_internal/swf/FilterType.h>
#endif
namespace openfl{
namespace _internal{
namespace swf{

::openfl::_internal::swf::FilterType  FilterType_obj::BlurFilter(Float blurX,Float blurY,int quality)
	{ return hx::CreateEnum< FilterType_obj >(HX_HCSTRING("BlurFilter","\xdf","\xd1","\x71","\xf3"),0,hx::DynamicArray(0,3).Add(blurX).Add(blurY).Add(quality)); }

::openfl::_internal::swf::FilterType  FilterType_obj::ColorMatrixFilter(Array< Float > matrix)
	{ return hx::CreateEnum< FilterType_obj >(HX_HCSTRING("ColorMatrixFilter","\xbc","\xf6","\x5b","\x50"),1,hx::DynamicArray(0,1).Add(matrix)); }

::openfl::_internal::swf::FilterType  FilterType_obj::DropShadowFilter(Float distance,Float angle,int color,Float alpha,Float blurX,Float blurY,Float strength,int quality,bool inner,bool knockout,bool hideObject)
	{ return hx::CreateEnum< FilterType_obj >(HX_HCSTRING("DropShadowFilter","\xa7","\xee","\x49","\xf7"),2,hx::DynamicArray(0,11).Add(distance).Add(angle).Add(color).Add(alpha).Add(blurX).Add(blurY).Add(strength).Add(quality).Add(inner).Add(knockout).Add(hideObject)); }

::openfl::_internal::swf::FilterType  FilterType_obj::GlowFilter(int color,Float alpha,Float blurX,Float blurY,Float strength,int quality,bool inner,bool knockout)
	{ return hx::CreateEnum< FilterType_obj >(HX_HCSTRING("GlowFilter","\x45","\xce","\xa2","\x2d"),3,hx::DynamicArray(0,8).Add(color).Add(alpha).Add(blurX).Add(blurY).Add(strength).Add(quality).Add(inner).Add(knockout)); }

HX_DEFINE_CREATE_ENUM(FilterType_obj)

int FilterType_obj::__FindIndex(::String inName)
{
	if (inName==HX_HCSTRING("BlurFilter","\xdf","\xd1","\x71","\xf3")) return 0;
	if (inName==HX_HCSTRING("ColorMatrixFilter","\xbc","\xf6","\x5b","\x50")) return 1;
	if (inName==HX_HCSTRING("DropShadowFilter","\xa7","\xee","\x49","\xf7")) return 2;
	if (inName==HX_HCSTRING("GlowFilter","\x45","\xce","\xa2","\x2d")) return 3;
	return super::__FindIndex(inName);
}

STATIC_HX_DEFINE_DYNAMIC_FUNC3(FilterType_obj,BlurFilter,return)

STATIC_HX_DEFINE_DYNAMIC_FUNC1(FilterType_obj,ColorMatrixFilter,return)

STATIC_HX_DEFINE_DYNAMIC_FUNC11(FilterType_obj,DropShadowFilter,return)

STATIC_HX_DEFINE_DYNAMIC_FUNC8(FilterType_obj,GlowFilter,return)

int FilterType_obj::__FindArgCount(::String inName)
{
	if (inName==HX_HCSTRING("BlurFilter","\xdf","\xd1","\x71","\xf3")) return 3;
	if (inName==HX_HCSTRING("ColorMatrixFilter","\xbc","\xf6","\x5b","\x50")) return 1;
	if (inName==HX_HCSTRING("DropShadowFilter","\xa7","\xee","\x49","\xf7")) return 11;
	if (inName==HX_HCSTRING("GlowFilter","\x45","\xce","\xa2","\x2d")) return 8;
	return super::__FindArgCount(inName);
}

Dynamic FilterType_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	if (inName==HX_HCSTRING("BlurFilter","\xdf","\xd1","\x71","\xf3")) return BlurFilter_dyn();
	if (inName==HX_HCSTRING("ColorMatrixFilter","\xbc","\xf6","\x5b","\x50")) return ColorMatrixFilter_dyn();
	if (inName==HX_HCSTRING("DropShadowFilter","\xa7","\xee","\x49","\xf7")) return DropShadowFilter_dyn();
	if (inName==HX_HCSTRING("GlowFilter","\x45","\xce","\xa2","\x2d")) return GlowFilter_dyn();
	return super::__Field(inName,inCallProp);
}

static ::String sStaticFields[] = {
	HX_HCSTRING("BlurFilter","\xdf","\xd1","\x71","\xf3"),
	HX_HCSTRING("ColorMatrixFilter","\xbc","\xf6","\x5b","\x50"),
	HX_HCSTRING("DropShadowFilter","\xa7","\xee","\x49","\xf7"),
	HX_HCSTRING("GlowFilter","\x45","\xce","\xa2","\x2d"),
	::String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatic(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(FilterType_obj::__mClass,"__mClass");
};
#endif

static ::String sMemberFields[] = { ::String(null()) };
hx::Class FilterType_obj::__mClass;

Dynamic __Create_FilterType_obj() { return new FilterType_obj; }

void FilterType_obj::__register()
{

hx::Static(__mClass) = hx::RegisterClass(HX_HCSTRING("openfl._internal.swf.FilterType","\x8e","\x86","\x46","\x27"), hx::TCanCast< FilterType_obj >,sStaticFields,sMemberFields,
	&__Create_FilterType_obj, &__Create,
	&super::__SGetClass(), &CreateFilterType_obj, sMarkStatics
#ifdef HXCPP_VISIT_ALLOCS
    , sVisitStatic
#endif
#ifdef HXCPP_SCRIPTABLE
    , 0
#endif
);
}

void FilterType_obj::__boot()
{
}


} // end namespace openfl
} // end namespace _internal
} // end namespace swf
