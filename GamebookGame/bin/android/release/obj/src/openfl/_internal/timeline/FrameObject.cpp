#include <hxcpp.h>

#ifndef INCLUDED_openfl__internal_swf_FilterType
#include <openfl/_internal/swf/FilterType.h>
#endif
#ifndef INCLUDED_openfl__internal_timeline_FrameObject
#include <openfl/_internal/timeline/FrameObject.h>
#endif
#ifndef INCLUDED_openfl__internal_timeline_FrameObjectType
#include <openfl/_internal/timeline/FrameObjectType.h>
#endif
#ifndef INCLUDED_openfl_geom_ColorTransform
#include <openfl/geom/ColorTransform.h>
#endif
#ifndef INCLUDED_openfl_geom_Matrix
#include <openfl/geom/Matrix.h>
#endif
namespace openfl{
namespace _internal{
namespace timeline{

Void FrameObject_obj::__construct()
{
{
}
;
	return null();
}

//FrameObject_obj::~FrameObject_obj() { }

Dynamic FrameObject_obj::__CreateEmpty() { return  new FrameObject_obj; }
hx::ObjectPtr< FrameObject_obj > FrameObject_obj::__new()
{  hx::ObjectPtr< FrameObject_obj > _result_ = new FrameObject_obj();
	_result_->__construct();
	return _result_;}

Dynamic FrameObject_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< FrameObject_obj > _result_ = new FrameObject_obj();
	_result_->__construct();
	return _result_;}


FrameObject_obj::FrameObject_obj()
{
}

void FrameObject_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(FrameObject);
	HX_MARK_MEMBER_NAME(clipDepth,"clipDepth");
	HX_MARK_MEMBER_NAME(colorTransform,"colorTransform");
	HX_MARK_MEMBER_NAME(depth,"depth");
	HX_MARK_MEMBER_NAME(filters,"filters");
	HX_MARK_MEMBER_NAME(id,"id");
	HX_MARK_MEMBER_NAME(matrix,"matrix");
	HX_MARK_MEMBER_NAME(name,"name");
	HX_MARK_MEMBER_NAME(symbol,"symbol");
	HX_MARK_MEMBER_NAME(type,"type");
	HX_MARK_MEMBER_NAME(visible,"visible");
	HX_MARK_END_CLASS();
}

void FrameObject_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(clipDepth,"clipDepth");
	HX_VISIT_MEMBER_NAME(colorTransform,"colorTransform");
	HX_VISIT_MEMBER_NAME(depth,"depth");
	HX_VISIT_MEMBER_NAME(filters,"filters");
	HX_VISIT_MEMBER_NAME(id,"id");
	HX_VISIT_MEMBER_NAME(matrix,"matrix");
	HX_VISIT_MEMBER_NAME(name,"name");
	HX_VISIT_MEMBER_NAME(symbol,"symbol");
	HX_VISIT_MEMBER_NAME(type,"type");
	HX_VISIT_MEMBER_NAME(visible,"visible");
}

Dynamic FrameObject_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 2:
		if (HX_FIELD_EQ(inName,"id") ) { return id; }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"name") ) { return name; }
		if (HX_FIELD_EQ(inName,"type") ) { return type; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"depth") ) { return depth; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"matrix") ) { return matrix; }
		if (HX_FIELD_EQ(inName,"symbol") ) { return symbol; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"filters") ) { return filters; }
		if (HX_FIELD_EQ(inName,"visible") ) { return visible; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"clipDepth") ) { return clipDepth; }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"colorTransform") ) { return colorTransform; }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic FrameObject_obj::__SetField(const ::String &inName,const Dynamic &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 2:
		if (HX_FIELD_EQ(inName,"id") ) { id=inValue.Cast< int >(); return inValue; }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"name") ) { name=inValue.Cast< ::String >(); return inValue; }
		if (HX_FIELD_EQ(inName,"type") ) { type=inValue.Cast< ::openfl::_internal::timeline::FrameObjectType >(); return inValue; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"depth") ) { depth=inValue.Cast< int >(); return inValue; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"matrix") ) { matrix=inValue.Cast< ::openfl::geom::Matrix >(); return inValue; }
		if (HX_FIELD_EQ(inName,"symbol") ) { symbol=inValue.Cast< int >(); return inValue; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"filters") ) { filters=inValue.Cast< Array< ::Dynamic > >(); return inValue; }
		if (HX_FIELD_EQ(inName,"visible") ) { visible=inValue.Cast< bool >(); return inValue; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"clipDepth") ) { clipDepth=inValue.Cast< int >(); return inValue; }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"colorTransform") ) { colorTransform=inValue.Cast< ::openfl::geom::ColorTransform >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void FrameObject_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("clipDepth","\x13","\x40","\x41","\xf5"));
	outFields->push(HX_HCSTRING("colorTransform","\x89","\xd7","\x3f","\xad"));
	outFields->push(HX_HCSTRING("depth","\x03","\xf1","\x29","\xd7"));
	outFields->push(HX_HCSTRING("filters","\xbb","\xa1","\x46","\x09"));
	outFields->push(HX_HCSTRING("id","\xdb","\x5b","\x00","\x00"));
	outFields->push(HX_HCSTRING("matrix","\x41","\x36","\xc8","\xbb"));
	outFields->push(HX_HCSTRING("name","\x4b","\x72","\xff","\x48"));
	outFields->push(HX_HCSTRING("symbol","\x58","\xaf","\xdd","\xee"));
	outFields->push(HX_HCSTRING("type","\xba","\xf2","\x08","\x4d"));
	outFields->push(HX_HCSTRING("visible","\x72","\x78","\x24","\xa3"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsInt,(int)offsetof(FrameObject_obj,clipDepth),HX_HCSTRING("clipDepth","\x13","\x40","\x41","\xf5")},
	{hx::fsObject /*::openfl::geom::ColorTransform*/ ,(int)offsetof(FrameObject_obj,colorTransform),HX_HCSTRING("colorTransform","\x89","\xd7","\x3f","\xad")},
	{hx::fsInt,(int)offsetof(FrameObject_obj,depth),HX_HCSTRING("depth","\x03","\xf1","\x29","\xd7")},
	{hx::fsObject /*Array< ::Dynamic >*/ ,(int)offsetof(FrameObject_obj,filters),HX_HCSTRING("filters","\xbb","\xa1","\x46","\x09")},
	{hx::fsInt,(int)offsetof(FrameObject_obj,id),HX_HCSTRING("id","\xdb","\x5b","\x00","\x00")},
	{hx::fsObject /*::openfl::geom::Matrix*/ ,(int)offsetof(FrameObject_obj,matrix),HX_HCSTRING("matrix","\x41","\x36","\xc8","\xbb")},
	{hx::fsString,(int)offsetof(FrameObject_obj,name),HX_HCSTRING("name","\x4b","\x72","\xff","\x48")},
	{hx::fsInt,(int)offsetof(FrameObject_obj,symbol),HX_HCSTRING("symbol","\x58","\xaf","\xdd","\xee")},
	{hx::fsObject /*::openfl::_internal::timeline::FrameObjectType*/ ,(int)offsetof(FrameObject_obj,type),HX_HCSTRING("type","\xba","\xf2","\x08","\x4d")},
	{hx::fsBool,(int)offsetof(FrameObject_obj,visible),HX_HCSTRING("visible","\x72","\x78","\x24","\xa3")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo *sStaticStorageInfo = 0;
#endif

static ::String sMemberFields[] = {
	HX_HCSTRING("clipDepth","\x13","\x40","\x41","\xf5"),
	HX_HCSTRING("colorTransform","\x89","\xd7","\x3f","\xad"),
	HX_HCSTRING("depth","\x03","\xf1","\x29","\xd7"),
	HX_HCSTRING("filters","\xbb","\xa1","\x46","\x09"),
	HX_HCSTRING("id","\xdb","\x5b","\x00","\x00"),
	HX_HCSTRING("matrix","\x41","\x36","\xc8","\xbb"),
	HX_HCSTRING("name","\x4b","\x72","\xff","\x48"),
	HX_HCSTRING("symbol","\x58","\xaf","\xdd","\xee"),
	HX_HCSTRING("type","\xba","\xf2","\x08","\x4d"),
	HX_HCSTRING("visible","\x72","\x78","\x24","\xa3"),
	::String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(FrameObject_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(FrameObject_obj::__mClass,"__mClass");
};

#endif

hx::Class FrameObject_obj::__mClass;

void FrameObject_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("openfl._internal.timeline.FrameObject","\x6f","\x4f","\xd5","\x09");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = hx::Class_obj::dupFunctions(sMemberFields);
	__mClass->mCanCast = hx::TCanCast< FrameObject_obj >;
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
} // end namespace timeline
