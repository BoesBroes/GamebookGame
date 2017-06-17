#include <hxcpp.h>

#ifndef INCLUDED_openfl_display_DisplayObject
#include <openfl/display/DisplayObject.h>
#endif
#ifndef INCLUDED_openfl_display_IBitmapDrawable
#include <openfl/display/IBitmapDrawable.h>
#endif
#ifndef INCLUDED_openfl_display__MovieClip_TimelineObject
#include <openfl/display/_MovieClip/TimelineObject.h>
#endif
#ifndef INCLUDED_openfl_events_EventDispatcher
#include <openfl/events/EventDispatcher.h>
#endif
#ifndef INCLUDED_openfl_events_IEventDispatcher
#include <openfl/events/IEventDispatcher.h>
#endif
namespace openfl{
namespace display{
namespace _MovieClip{

Void TimelineObject_obj::__construct(int id,int depth,int clipDepth,::openfl::display::DisplayObject displayObject)
{
{
	this->id = id;
	this->depth = depth;
	this->clipDepth = clipDepth;
	this->displayObject = displayObject;
}
;
	return null();
}

//TimelineObject_obj::~TimelineObject_obj() { }

Dynamic TimelineObject_obj::__CreateEmpty() { return  new TimelineObject_obj; }
hx::ObjectPtr< TimelineObject_obj > TimelineObject_obj::__new(int id,int depth,int clipDepth,::openfl::display::DisplayObject displayObject)
{  hx::ObjectPtr< TimelineObject_obj > _result_ = new TimelineObject_obj();
	_result_->__construct(id,depth,clipDepth,displayObject);
	return _result_;}

Dynamic TimelineObject_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< TimelineObject_obj > _result_ = new TimelineObject_obj();
	_result_->__construct(inArgs[0],inArgs[1],inArgs[2],inArgs[3]);
	return _result_;}


TimelineObject_obj::TimelineObject_obj()
{
}

void TimelineObject_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(TimelineObject);
	HX_MARK_MEMBER_NAME(clipDepth,"clipDepth");
	HX_MARK_MEMBER_NAME(depth,"depth");
	HX_MARK_MEMBER_NAME(displayObject,"displayObject");
	HX_MARK_MEMBER_NAME(id,"id");
	HX_MARK_END_CLASS();
}

void TimelineObject_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(clipDepth,"clipDepth");
	HX_VISIT_MEMBER_NAME(depth,"depth");
	HX_VISIT_MEMBER_NAME(displayObject,"displayObject");
	HX_VISIT_MEMBER_NAME(id,"id");
}

Dynamic TimelineObject_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 2:
		if (HX_FIELD_EQ(inName,"id") ) { return id; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"depth") ) { return depth; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"clipDepth") ) { return clipDepth; }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"displayObject") ) { return displayObject; }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic TimelineObject_obj::__SetField(const ::String &inName,const Dynamic &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 2:
		if (HX_FIELD_EQ(inName,"id") ) { id=inValue.Cast< int >(); return inValue; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"depth") ) { depth=inValue.Cast< int >(); return inValue; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"clipDepth") ) { clipDepth=inValue.Cast< int >(); return inValue; }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"displayObject") ) { displayObject=inValue.Cast< ::openfl::display::DisplayObject >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void TimelineObject_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("clipDepth","\x13","\x40","\x41","\xf5"));
	outFields->push(HX_HCSTRING("depth","\x03","\xf1","\x29","\xd7"));
	outFields->push(HX_HCSTRING("displayObject","\xa1","\x3a","\xa2","\xd6"));
	outFields->push(HX_HCSTRING("id","\xdb","\x5b","\x00","\x00"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsInt,(int)offsetof(TimelineObject_obj,clipDepth),HX_HCSTRING("clipDepth","\x13","\x40","\x41","\xf5")},
	{hx::fsInt,(int)offsetof(TimelineObject_obj,depth),HX_HCSTRING("depth","\x03","\xf1","\x29","\xd7")},
	{hx::fsObject /*::openfl::display::DisplayObject*/ ,(int)offsetof(TimelineObject_obj,displayObject),HX_HCSTRING("displayObject","\xa1","\x3a","\xa2","\xd6")},
	{hx::fsInt,(int)offsetof(TimelineObject_obj,id),HX_HCSTRING("id","\xdb","\x5b","\x00","\x00")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo *sStaticStorageInfo = 0;
#endif

static ::String sMemberFields[] = {
	HX_HCSTRING("clipDepth","\x13","\x40","\x41","\xf5"),
	HX_HCSTRING("depth","\x03","\xf1","\x29","\xd7"),
	HX_HCSTRING("displayObject","\xa1","\x3a","\xa2","\xd6"),
	HX_HCSTRING("id","\xdb","\x5b","\x00","\x00"),
	::String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(TimelineObject_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(TimelineObject_obj::__mClass,"__mClass");
};

#endif

hx::Class TimelineObject_obj::__mClass;

void TimelineObject_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("openfl.display._MovieClip.TimelineObject","\x43","\xee","\x2a","\x5c");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = hx::Class_obj::dupFunctions(sMemberFields);
	__mClass->mCanCast = hx::TCanCast< TimelineObject_obj >;
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
} // end namespace _MovieClip
