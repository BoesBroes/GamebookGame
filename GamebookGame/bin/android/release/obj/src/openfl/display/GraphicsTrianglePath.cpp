#include <hxcpp.h>

#ifndef INCLUDED_openfl__Vector_FloatVector
#include <openfl/_Vector/FloatVector.h>
#endif
#ifndef INCLUDED_openfl__Vector_IVector
#include <openfl/_Vector/IVector.h>
#endif
#ifndef INCLUDED_openfl__Vector_IntVector
#include <openfl/_Vector/IntVector.h>
#endif
#ifndef INCLUDED_openfl_display_GraphicsDataType
#include <openfl/display/GraphicsDataType.h>
#endif
#ifndef INCLUDED_openfl_display_GraphicsTrianglePath
#include <openfl/display/GraphicsTrianglePath.h>
#endif
#ifndef INCLUDED_openfl_display_IGraphicsData
#include <openfl/display/IGraphicsData.h>
#endif
#ifndef INCLUDED_openfl_display_IGraphicsPath
#include <openfl/display/IGraphicsPath.h>
#endif
namespace openfl{
namespace display{

Void GraphicsTrianglePath_obj::__construct(::openfl::_Vector::FloatVector vertices,::openfl::_Vector::IntVector indices,::openfl::_Vector::FloatVector uvtData,Dynamic __o_culling)
{
HX_STACK_FRAME("openfl.display.GraphicsTrianglePath","new",0x6d94fd54,"openfl.display.GraphicsTrianglePath.new","openfl/display/GraphicsTrianglePath.hx",19,0x122c7fda)
HX_STACK_THIS(this)
HX_STACK_ARG(vertices,"vertices")
HX_STACK_ARG(indices,"indices")
HX_STACK_ARG(uvtData,"uvtData")
HX_STACK_ARG(__o_culling,"culling")
Dynamic culling = __o_culling.Default(1);
{
	HX_STACK_LINE(21)
	this->vertices = vertices;
	HX_STACK_LINE(22)
	this->indices = indices;
	HX_STACK_LINE(23)
	this->uvtData = uvtData;
	HX_STACK_LINE(24)
	this->culling = culling;
	HX_STACK_LINE(25)
	this->__graphicsDataType = ::openfl::display::GraphicsDataType_obj::TRIANGLE_PATH;
}
;
	return null();
}

//GraphicsTrianglePath_obj::~GraphicsTrianglePath_obj() { }

Dynamic GraphicsTrianglePath_obj::__CreateEmpty() { return  new GraphicsTrianglePath_obj; }
hx::ObjectPtr< GraphicsTrianglePath_obj > GraphicsTrianglePath_obj::__new(::openfl::_Vector::FloatVector vertices,::openfl::_Vector::IntVector indices,::openfl::_Vector::FloatVector uvtData,Dynamic __o_culling)
{  hx::ObjectPtr< GraphicsTrianglePath_obj > _result_ = new GraphicsTrianglePath_obj();
	_result_->__construct(vertices,indices,uvtData,__o_culling);
	return _result_;}

Dynamic GraphicsTrianglePath_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< GraphicsTrianglePath_obj > _result_ = new GraphicsTrianglePath_obj();
	_result_->__construct(inArgs[0],inArgs[1],inArgs[2],inArgs[3]);
	return _result_;}

hx::Object *GraphicsTrianglePath_obj::__ToInterface(const hx::type_info &inType) {
	if (inType==typeid( ::openfl::display::IGraphicsPath_obj)) return operator ::openfl::display::IGraphicsPath_obj *();
	if (inType==typeid( ::openfl::display::IGraphicsData_obj)) return operator ::openfl::display::IGraphicsData_obj *();
	return super::__ToInterface(inType);
}

GraphicsTrianglePath_obj::operator ::openfl::display::IGraphicsPath_obj *()
	{ return new ::openfl::display::IGraphicsPath_delegate_< GraphicsTrianglePath_obj >(this); }
GraphicsTrianglePath_obj::operator ::openfl::display::IGraphicsData_obj *()
	{ return new ::openfl::display::IGraphicsData_delegate_< GraphicsTrianglePath_obj >(this); }

GraphicsTrianglePath_obj::GraphicsTrianglePath_obj()
{
}

void GraphicsTrianglePath_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(GraphicsTrianglePath);
	HX_MARK_MEMBER_NAME(culling,"culling");
	HX_MARK_MEMBER_NAME(indices,"indices");
	HX_MARK_MEMBER_NAME(uvtData,"uvtData");
	HX_MARK_MEMBER_NAME(vertices,"vertices");
	HX_MARK_MEMBER_NAME(__graphicsDataType,"__graphicsDataType");
	HX_MARK_END_CLASS();
}

void GraphicsTrianglePath_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(culling,"culling");
	HX_VISIT_MEMBER_NAME(indices,"indices");
	HX_VISIT_MEMBER_NAME(uvtData,"uvtData");
	HX_VISIT_MEMBER_NAME(vertices,"vertices");
	HX_VISIT_MEMBER_NAME(__graphicsDataType,"__graphicsDataType");
}

Dynamic GraphicsTrianglePath_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 7:
		if (HX_FIELD_EQ(inName,"culling") ) { return culling; }
		if (HX_FIELD_EQ(inName,"indices") ) { return indices; }
		if (HX_FIELD_EQ(inName,"uvtData") ) { return uvtData; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"vertices") ) { return vertices; }
		break;
	case 18:
		if (HX_FIELD_EQ(inName,"__graphicsDataType") ) { return __graphicsDataType; }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic GraphicsTrianglePath_obj::__SetField(const ::String &inName,const Dynamic &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 7:
		if (HX_FIELD_EQ(inName,"culling") ) { culling=inValue.Cast< Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"indices") ) { indices=inValue.Cast< ::openfl::_Vector::IntVector >(); return inValue; }
		if (HX_FIELD_EQ(inName,"uvtData") ) { uvtData=inValue.Cast< ::openfl::_Vector::FloatVector >(); return inValue; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"vertices") ) { vertices=inValue.Cast< ::openfl::_Vector::FloatVector >(); return inValue; }
		break;
	case 18:
		if (HX_FIELD_EQ(inName,"__graphicsDataType") ) { __graphicsDataType=inValue.Cast< ::openfl::display::GraphicsDataType >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void GraphicsTrianglePath_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("culling","\x70","\xe2","\x87","\x53"));
	outFields->push(HX_HCSTRING("indices","\x27","\x47","\x54","\xe3"));
	outFields->push(HX_HCSTRING("uvtData","\xbd","\xa6","\x23","\x27"));
	outFields->push(HX_HCSTRING("vertices","\xf9","\xbf","\x15","\x6a"));
	outFields->push(HX_HCSTRING("__graphicsDataType","\x0f","\x5d","\x4d","\x46"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsObject /*Dynamic*/ ,(int)offsetof(GraphicsTrianglePath_obj,culling),HX_HCSTRING("culling","\x70","\xe2","\x87","\x53")},
	{hx::fsObject /*::openfl::_Vector::IntVector*/ ,(int)offsetof(GraphicsTrianglePath_obj,indices),HX_HCSTRING("indices","\x27","\x47","\x54","\xe3")},
	{hx::fsObject /*::openfl::_Vector::FloatVector*/ ,(int)offsetof(GraphicsTrianglePath_obj,uvtData),HX_HCSTRING("uvtData","\xbd","\xa6","\x23","\x27")},
	{hx::fsObject /*::openfl::_Vector::FloatVector*/ ,(int)offsetof(GraphicsTrianglePath_obj,vertices),HX_HCSTRING("vertices","\xf9","\xbf","\x15","\x6a")},
	{hx::fsObject /*::openfl::display::GraphicsDataType*/ ,(int)offsetof(GraphicsTrianglePath_obj,__graphicsDataType),HX_HCSTRING("__graphicsDataType","\x0f","\x5d","\x4d","\x46")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo *sStaticStorageInfo = 0;
#endif

static ::String sMemberFields[] = {
	HX_HCSTRING("culling","\x70","\xe2","\x87","\x53"),
	HX_HCSTRING("indices","\x27","\x47","\x54","\xe3"),
	HX_HCSTRING("uvtData","\xbd","\xa6","\x23","\x27"),
	HX_HCSTRING("vertices","\xf9","\xbf","\x15","\x6a"),
	HX_HCSTRING("__graphicsDataType","\x0f","\x5d","\x4d","\x46"),
	::String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(GraphicsTrianglePath_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(GraphicsTrianglePath_obj::__mClass,"__mClass");
};

#endif

hx::Class GraphicsTrianglePath_obj::__mClass;

void GraphicsTrianglePath_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("openfl.display.GraphicsTrianglePath","\x62","\x03","\x57","\x36");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = hx::Class_obj::dupFunctions(sMemberFields);
	__mClass->mCanCast = hx::TCanCast< GraphicsTrianglePath_obj >;
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
} // end namespace display
