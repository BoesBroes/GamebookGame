#include <hxcpp.h>

#ifndef INCLUDED_openfl__internal_swf_ShapeCommand
#include <openfl/_internal/swf/ShapeCommand.h>
#endif
#ifndef INCLUDED_openfl_geom_Matrix
#include <openfl/geom/Matrix.h>
#endif
namespace openfl{
namespace _internal{
namespace swf{

::openfl::_internal::swf::ShapeCommand  ShapeCommand_obj::BeginBitmapFill(int bitmap,::openfl::geom::Matrix matrix,bool repeat,bool smooth)
	{ return hx::CreateEnum< ShapeCommand_obj >(HX_HCSTRING("BeginBitmapFill","\x7b","\xd1","\x93","\xca"),0,hx::DynamicArray(0,4).Add(bitmap).Add(matrix).Add(repeat).Add(smooth)); }

::openfl::_internal::swf::ShapeCommand  ShapeCommand_obj::BeginFill(int color,Float alpha)
	{ return hx::CreateEnum< ShapeCommand_obj >(HX_HCSTRING("BeginFill","\x2c","\x8d","\x68","\x2e"),1,hx::DynamicArray(0,2).Add(color).Add(alpha)); }

::openfl::_internal::swf::ShapeCommand  ShapeCommand_obj::BeginGradientFill(Dynamic fillType,Array< int > colors,Array< Float > alphas,Array< int > ratios,::openfl::geom::Matrix matrix,Dynamic spreadMethod,Dynamic interpolationMethod,Float focalPointRatio)
	{ return hx::CreateEnum< ShapeCommand_obj >(HX_HCSTRING("BeginGradientFill","\x3c","\xfc","\x88","\xcf"),2,hx::DynamicArray(0,8).Add(fillType).Add(colors).Add(alphas).Add(ratios).Add(matrix).Add(spreadMethod).Add(interpolationMethod).Add(focalPointRatio)); }

::openfl::_internal::swf::ShapeCommand  ShapeCommand_obj::CurveTo(Float controlX,Float controlY,Float anchorX,Float anchorY)
	{ return hx::CreateEnum< ShapeCommand_obj >(HX_HCSTRING("CurveTo","\xea","\x87","\xd9","\x9b"),3,hx::DynamicArray(0,4).Add(controlX).Add(controlY).Add(anchorX).Add(anchorY)); }

::openfl::_internal::swf::ShapeCommand ShapeCommand_obj::EndFill;

::openfl::_internal::swf::ShapeCommand  ShapeCommand_obj::LineStyle(Dynamic thickness,Dynamic color,Dynamic alpha,Dynamic pixelHinting,Dynamic scaleMode,Dynamic caps,Dynamic joints,Dynamic miterLimit)
	{ return hx::CreateEnum< ShapeCommand_obj >(HX_HCSTRING("LineStyle","\x7d","\x88","\xeb","\x6c"),5,hx::DynamicArray(0,8).Add(thickness).Add(color).Add(alpha).Add(pixelHinting).Add(scaleMode).Add(caps).Add(joints).Add(miterLimit)); }

::openfl::_internal::swf::ShapeCommand  ShapeCommand_obj::LineTo(Float x,Float y)
	{ return hx::CreateEnum< ShapeCommand_obj >(HX_HCSTRING("LineTo","\xaf","\xba","\x34","\x21"),6,hx::DynamicArray(0,2).Add(x).Add(y)); }

::openfl::_internal::swf::ShapeCommand  ShapeCommand_obj::MoveTo(Float x,Float y)
	{ return hx::CreateEnum< ShapeCommand_obj >(HX_HCSTRING("MoveTo","\x0c","\x47","\x41","\x01"),7,hx::DynamicArray(0,2).Add(x).Add(y)); }

HX_DEFINE_CREATE_ENUM(ShapeCommand_obj)

int ShapeCommand_obj::__FindIndex(::String inName)
{
	if (inName==HX_HCSTRING("BeginBitmapFill","\x7b","\xd1","\x93","\xca")) return 0;
	if (inName==HX_HCSTRING("BeginFill","\x2c","\x8d","\x68","\x2e")) return 1;
	if (inName==HX_HCSTRING("BeginGradientFill","\x3c","\xfc","\x88","\xcf")) return 2;
	if (inName==HX_HCSTRING("CurveTo","\xea","\x87","\xd9","\x9b")) return 3;
	if (inName==HX_HCSTRING("EndFill","\xde","\xaf","\x31","\xf3")) return 4;
	if (inName==HX_HCSTRING("LineStyle","\x7d","\x88","\xeb","\x6c")) return 5;
	if (inName==HX_HCSTRING("LineTo","\xaf","\xba","\x34","\x21")) return 6;
	if (inName==HX_HCSTRING("MoveTo","\x0c","\x47","\x41","\x01")) return 7;
	return super::__FindIndex(inName);
}

STATIC_HX_DEFINE_DYNAMIC_FUNC4(ShapeCommand_obj,BeginBitmapFill,return)

STATIC_HX_DEFINE_DYNAMIC_FUNC2(ShapeCommand_obj,BeginFill,return)

STATIC_HX_DEFINE_DYNAMIC_FUNC8(ShapeCommand_obj,BeginGradientFill,return)

STATIC_HX_DEFINE_DYNAMIC_FUNC4(ShapeCommand_obj,CurveTo,return)

STATIC_HX_DEFINE_DYNAMIC_FUNC8(ShapeCommand_obj,LineStyle,return)

STATIC_HX_DEFINE_DYNAMIC_FUNC2(ShapeCommand_obj,LineTo,return)

STATIC_HX_DEFINE_DYNAMIC_FUNC2(ShapeCommand_obj,MoveTo,return)

int ShapeCommand_obj::__FindArgCount(::String inName)
{
	if (inName==HX_HCSTRING("BeginBitmapFill","\x7b","\xd1","\x93","\xca")) return 4;
	if (inName==HX_HCSTRING("BeginFill","\x2c","\x8d","\x68","\x2e")) return 2;
	if (inName==HX_HCSTRING("BeginGradientFill","\x3c","\xfc","\x88","\xcf")) return 8;
	if (inName==HX_HCSTRING("CurveTo","\xea","\x87","\xd9","\x9b")) return 4;
	if (inName==HX_HCSTRING("EndFill","\xde","\xaf","\x31","\xf3")) return 0;
	if (inName==HX_HCSTRING("LineStyle","\x7d","\x88","\xeb","\x6c")) return 8;
	if (inName==HX_HCSTRING("LineTo","\xaf","\xba","\x34","\x21")) return 2;
	if (inName==HX_HCSTRING("MoveTo","\x0c","\x47","\x41","\x01")) return 2;
	return super::__FindArgCount(inName);
}

Dynamic ShapeCommand_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	if (inName==HX_HCSTRING("BeginBitmapFill","\x7b","\xd1","\x93","\xca")) return BeginBitmapFill_dyn();
	if (inName==HX_HCSTRING("BeginFill","\x2c","\x8d","\x68","\x2e")) return BeginFill_dyn();
	if (inName==HX_HCSTRING("BeginGradientFill","\x3c","\xfc","\x88","\xcf")) return BeginGradientFill_dyn();
	if (inName==HX_HCSTRING("CurveTo","\xea","\x87","\xd9","\x9b")) return CurveTo_dyn();
	if (inName==HX_HCSTRING("EndFill","\xde","\xaf","\x31","\xf3")) return EndFill;
	if (inName==HX_HCSTRING("LineStyle","\x7d","\x88","\xeb","\x6c")) return LineStyle_dyn();
	if (inName==HX_HCSTRING("LineTo","\xaf","\xba","\x34","\x21")) return LineTo_dyn();
	if (inName==HX_HCSTRING("MoveTo","\x0c","\x47","\x41","\x01")) return MoveTo_dyn();
	return super::__Field(inName,inCallProp);
}

static ::String sStaticFields[] = {
	HX_HCSTRING("BeginBitmapFill","\x7b","\xd1","\x93","\xca"),
	HX_HCSTRING("BeginFill","\x2c","\x8d","\x68","\x2e"),
	HX_HCSTRING("BeginGradientFill","\x3c","\xfc","\x88","\xcf"),
	HX_HCSTRING("CurveTo","\xea","\x87","\xd9","\x9b"),
	HX_HCSTRING("EndFill","\xde","\xaf","\x31","\xf3"),
	HX_HCSTRING("LineStyle","\x7d","\x88","\xeb","\x6c"),
	HX_HCSTRING("LineTo","\xaf","\xba","\x34","\x21"),
	HX_HCSTRING("MoveTo","\x0c","\x47","\x41","\x01"),
	::String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(ShapeCommand_obj::EndFill,"EndFill");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatic(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(ShapeCommand_obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(ShapeCommand_obj::EndFill,"EndFill");
};
#endif

static ::String sMemberFields[] = { ::String(null()) };
hx::Class ShapeCommand_obj::__mClass;

Dynamic __Create_ShapeCommand_obj() { return new ShapeCommand_obj; }

void ShapeCommand_obj::__register()
{

hx::Static(__mClass) = hx::RegisterClass(HX_HCSTRING("openfl._internal.swf.ShapeCommand","\x26","\xcf","\x25","\xf0"), hx::TCanCast< ShapeCommand_obj >,sStaticFields,sMemberFields,
	&__Create_ShapeCommand_obj, &__Create,
	&super::__SGetClass(), &CreateShapeCommand_obj, sMarkStatics
#ifdef HXCPP_VISIT_ALLOCS
    , sVisitStatic
#endif
#ifdef HXCPP_SCRIPTABLE
    , 0
#endif
);
}

void ShapeCommand_obj::__boot()
{
hx::Static(EndFill) = hx::CreateEnum< ShapeCommand_obj >(HX_HCSTRING("EndFill","\xde","\xaf","\x31","\xf3"),4);
}


} // end namespace openfl
} // end namespace _internal
} // end namespace swf
