#include <hxcpp.h>

#ifndef INCLUDED_openfl_Lib
#include <openfl/Lib.h>
#endif
#ifndef INCLUDED_openfl_display_DisplayObject
#include <openfl/display/DisplayObject.h>
#endif
#ifndef INCLUDED_openfl_display_DisplayObjectContainer
#include <openfl/display/DisplayObjectContainer.h>
#endif
#ifndef INCLUDED_openfl_display_IBitmapDrawable
#include <openfl/display/IBitmapDrawable.h>
#endif
#ifndef INCLUDED_openfl_display_InteractiveObject
#include <openfl/display/InteractiveObject.h>
#endif
#ifndef INCLUDED_openfl_events_EventDispatcher
#include <openfl/events/EventDispatcher.h>
#endif
#ifndef INCLUDED_openfl_events_IEventDispatcher
#include <openfl/events/IEventDispatcher.h>
#endif
#ifndef INCLUDED_openfl_geom_Rectangle
#include <openfl/geom/Rectangle.h>
#endif
namespace openfl{
namespace display{

Void InteractiveObject_obj::__construct()
{
{
	super::__construct();
	this->doubleClickEnabled = false;
	this->mouseEnabled = true;
	this->needsSoftKeyboard = false;
	this->__tabEnabled = false;
	this->tabIndex = (int)-1;
}
;
	return null();
}

//InteractiveObject_obj::~InteractiveObject_obj() { }

Dynamic InteractiveObject_obj::__CreateEmpty() { return  new InteractiveObject_obj; }
hx::ObjectPtr< InteractiveObject_obj > InteractiveObject_obj::__new()
{  hx::ObjectPtr< InteractiveObject_obj > _result_ = new InteractiveObject_obj();
	_result_->__construct();
	return _result_;}

Dynamic InteractiveObject_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< InteractiveObject_obj > _result_ = new InteractiveObject_obj();
	_result_->__construct();
	return _result_;}

bool InteractiveObject_obj::requestSoftKeyboard( ){
	Dynamic tmp = hx::SourceInfo(HX_HCSTRING("InteractiveObject.hx","\x3d","\x87","\x79","\x89"),42,HX_HCSTRING("openfl.display.InteractiveObject","\x97","\x3a","\xcb","\xf4"),HX_HCSTRING("requestSoftKeyboard","\xa0","\xf5","\xa9","\xd4"));
	::openfl::Lib_obj::notImplemented(tmp);
	return false;
}


HX_DEFINE_DYNAMIC_FUNC0(InteractiveObject_obj,requestSoftKeyboard,return )

bool InteractiveObject_obj::__getInteractive( Array< ::Dynamic > stack){
	bool tmp = (stack != null());
	if ((tmp)){
		stack->push(hx::ObjectPtr<OBJ_>(this));
		::openfl::display::DisplayObjectContainer tmp1 = this->parent;
		bool tmp2 = (tmp1 != null());
		if ((tmp2)){
			::openfl::display::DisplayObjectContainer tmp3 = this->parent;
			tmp3->__getInteractive(stack);
		}
	}
	return true;
}


bool InteractiveObject_obj::__hitTest( Float x,Float y,bool shapeFlag,Array< ::Dynamic > stack,bool interactiveOnly,::openfl::display::DisplayObject hitObject){
	bool tmp = hitObject->get_visible();
	bool tmp1 = tmp;
	bool tmp2 = !(tmp1);
	bool tmp3 = !(tmp2);
	bool tmp4 = tmp3;
	bool tmp5;
	if ((tmp4)){
		tmp5 = this->__isMask;
	}
	else{
		tmp5 = true;
	}
	bool tmp6 = !(tmp5);
	bool tmp7;
	if ((tmp6)){
		bool tmp8 = interactiveOnly;
		bool tmp9 = tmp8;
		if ((tmp9)){
			bool tmp10 = this->mouseEnabled;
			bool tmp11 = tmp10;
			bool tmp12 = tmp11;
			bool tmp13 = tmp12;
			bool tmp14 = tmp13;
			tmp7 = !(tmp14);
		}
		else{
			tmp7 = false;
		}
	}
	else{
		tmp7 = true;
	}
	if ((tmp7)){
		return false;
	}
	Float tmp8 = x;
	Float tmp9 = y;
	bool tmp10 = shapeFlag;
	bool tmp11 = interactiveOnly;
	::openfl::display::DisplayObject tmp12 = hitObject;
	bool tmp13 = this->super::__hitTest(tmp8,tmp9,tmp10,stack,tmp11,tmp12);
	return tmp13;
}


bool InteractiveObject_obj::get_tabEnabled( ){
	bool tmp = this->__tabEnabled;
	return tmp;
}


HX_DEFINE_DYNAMIC_FUNC0(InteractiveObject_obj,get_tabEnabled,return )

bool InteractiveObject_obj::set_tabEnabled( bool value){
	bool tmp = this->__tabEnabled = value;
	return tmp;
}


HX_DEFINE_DYNAMIC_FUNC1(InteractiveObject_obj,set_tabEnabled,return )


InteractiveObject_obj::InteractiveObject_obj()
{
}

void InteractiveObject_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(InteractiveObject);
	HX_MARK_MEMBER_NAME(doubleClickEnabled,"doubleClickEnabled");
	HX_MARK_MEMBER_NAME(focusRect,"focusRect");
	HX_MARK_MEMBER_NAME(mouseEnabled,"mouseEnabled");
	HX_MARK_MEMBER_NAME(needsSoftKeyboard,"needsSoftKeyboard");
	HX_MARK_MEMBER_NAME(softKeyboardInputAreaOfInterest,"softKeyboardInputAreaOfInterest");
	HX_MARK_MEMBER_NAME(tabIndex,"tabIndex");
	HX_MARK_MEMBER_NAME(__tabEnabled,"__tabEnabled");
	::openfl::display::DisplayObject_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void InteractiveObject_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(doubleClickEnabled,"doubleClickEnabled");
	HX_VISIT_MEMBER_NAME(focusRect,"focusRect");
	HX_VISIT_MEMBER_NAME(mouseEnabled,"mouseEnabled");
	HX_VISIT_MEMBER_NAME(needsSoftKeyboard,"needsSoftKeyboard");
	HX_VISIT_MEMBER_NAME(softKeyboardInputAreaOfInterest,"softKeyboardInputAreaOfInterest");
	HX_VISIT_MEMBER_NAME(tabIndex,"tabIndex");
	HX_VISIT_MEMBER_NAME(__tabEnabled,"__tabEnabled");
	::openfl::display::DisplayObject_obj::__Visit(HX_VISIT_ARG);
}

Dynamic InteractiveObject_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 8:
		if (HX_FIELD_EQ(inName,"tabIndex") ) { return tabIndex; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"focusRect") ) { return focusRect; }
		if (HX_FIELD_EQ(inName,"__hitTest") ) { return __hitTest_dyn(); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"tabEnabled") ) { if (inCallProp == hx::paccAlways) return get_tabEnabled(); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"mouseEnabled") ) { return mouseEnabled; }
		if (HX_FIELD_EQ(inName,"__tabEnabled") ) { return __tabEnabled; }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"get_tabEnabled") ) { return get_tabEnabled_dyn(); }
		if (HX_FIELD_EQ(inName,"set_tabEnabled") ) { return set_tabEnabled_dyn(); }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"__getInteractive") ) { return __getInteractive_dyn(); }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"needsSoftKeyboard") ) { return needsSoftKeyboard; }
		break;
	case 18:
		if (HX_FIELD_EQ(inName,"doubleClickEnabled") ) { return doubleClickEnabled; }
		break;
	case 19:
		if (HX_FIELD_EQ(inName,"requestSoftKeyboard") ) { return requestSoftKeyboard_dyn(); }
		break;
	case 31:
		if (HX_FIELD_EQ(inName,"softKeyboardInputAreaOfInterest") ) { return softKeyboardInputAreaOfInterest; }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic InteractiveObject_obj::__SetField(const ::String &inName,const Dynamic &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 8:
		if (HX_FIELD_EQ(inName,"tabIndex") ) { tabIndex=inValue.Cast< int >(); return inValue; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"focusRect") ) { focusRect=inValue.Cast< Dynamic >(); return inValue; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"tabEnabled") ) { if (inCallProp == hx::paccAlways) return set_tabEnabled(inValue); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"mouseEnabled") ) { mouseEnabled=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"__tabEnabled") ) { __tabEnabled=inValue.Cast< bool >(); return inValue; }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"needsSoftKeyboard") ) { needsSoftKeyboard=inValue.Cast< bool >(); return inValue; }
		break;
	case 18:
		if (HX_FIELD_EQ(inName,"doubleClickEnabled") ) { doubleClickEnabled=inValue.Cast< bool >(); return inValue; }
		break;
	case 31:
		if (HX_FIELD_EQ(inName,"softKeyboardInputAreaOfInterest") ) { softKeyboardInputAreaOfInterest=inValue.Cast< ::openfl::geom::Rectangle >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void InteractiveObject_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("doubleClickEnabled","\xca","\x95","\x95","\xe6"));
	outFields->push(HX_HCSTRING("focusRect","\x1c","\xa5","\x32","\x23"));
	outFields->push(HX_HCSTRING("mouseEnabled","\xdc","\x54","\xd6","\x5f"));
	outFields->push(HX_HCSTRING("needsSoftKeyboard","\xae","\x4a","\xa3","\xa9"));
	outFields->push(HX_HCSTRING("softKeyboardInputAreaOfInterest","\x47","\x41","\x03","\xf6"));
	outFields->push(HX_HCSTRING("tabEnabled","\xac","\xf6","\x08","\x40"));
	outFields->push(HX_HCSTRING("tabIndex","\x7d","\x1c","\xb9","\x2c"));
	outFields->push(HX_HCSTRING("__tabEnabled","\xcc","\x71","\x9c","\x78"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsBool,(int)offsetof(InteractiveObject_obj,doubleClickEnabled),HX_HCSTRING("doubleClickEnabled","\xca","\x95","\x95","\xe6")},
	{hx::fsObject /*Dynamic*/ ,(int)offsetof(InteractiveObject_obj,focusRect),HX_HCSTRING("focusRect","\x1c","\xa5","\x32","\x23")},
	{hx::fsBool,(int)offsetof(InteractiveObject_obj,mouseEnabled),HX_HCSTRING("mouseEnabled","\xdc","\x54","\xd6","\x5f")},
	{hx::fsBool,(int)offsetof(InteractiveObject_obj,needsSoftKeyboard),HX_HCSTRING("needsSoftKeyboard","\xae","\x4a","\xa3","\xa9")},
	{hx::fsObject /*::openfl::geom::Rectangle*/ ,(int)offsetof(InteractiveObject_obj,softKeyboardInputAreaOfInterest),HX_HCSTRING("softKeyboardInputAreaOfInterest","\x47","\x41","\x03","\xf6")},
	{hx::fsInt,(int)offsetof(InteractiveObject_obj,tabIndex),HX_HCSTRING("tabIndex","\x7d","\x1c","\xb9","\x2c")},
	{hx::fsBool,(int)offsetof(InteractiveObject_obj,__tabEnabled),HX_HCSTRING("__tabEnabled","\xcc","\x71","\x9c","\x78")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo *sStaticStorageInfo = 0;
#endif

static ::String sMemberFields[] = {
	HX_HCSTRING("doubleClickEnabled","\xca","\x95","\x95","\xe6"),
	HX_HCSTRING("focusRect","\x1c","\xa5","\x32","\x23"),
	HX_HCSTRING("mouseEnabled","\xdc","\x54","\xd6","\x5f"),
	HX_HCSTRING("needsSoftKeyboard","\xae","\x4a","\xa3","\xa9"),
	HX_HCSTRING("softKeyboardInputAreaOfInterest","\x47","\x41","\x03","\xf6"),
	HX_HCSTRING("tabIndex","\x7d","\x1c","\xb9","\x2c"),
	HX_HCSTRING("__tabEnabled","\xcc","\x71","\x9c","\x78"),
	HX_HCSTRING("requestSoftKeyboard","\xa0","\xf5","\xa9","\xd4"),
	HX_HCSTRING("__getInteractive","\x0c","\x1c","\x37","\xf8"),
	HX_HCSTRING("__hitTest","\x25","\xb1","\xcd","\x63"),
	HX_HCSTRING("get_tabEnabled","\xf5","\x7e","\xfe","\xb5"),
	HX_HCSTRING("set_tabEnabled","\x69","\x67","\x1e","\xd6"),
	::String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(InteractiveObject_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(InteractiveObject_obj::__mClass,"__mClass");
};

#endif

hx::Class InteractiveObject_obj::__mClass;

void InteractiveObject_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("openfl.display.InteractiveObject","\x97","\x3a","\xcb","\xf4");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = hx::Class_obj::dupFunctions(sMemberFields);
	__mClass->mCanCast = hx::TCanCast< InteractiveObject_obj >;
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
