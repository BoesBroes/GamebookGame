#include <hxcpp.h>

#ifndef INCLUDED_Type
#include <Type.h>
#endif
#ifndef INCLUDED_openfl__internal_swf_SWFLite
#include <openfl/_internal/swf/SWFLite.h>
#endif
#ifndef INCLUDED_openfl__internal_symbols_ButtonSymbol
#include <openfl/_internal/symbols/ButtonSymbol.h>
#endif
#ifndef INCLUDED_openfl__internal_symbols_SWFSymbol
#include <openfl/_internal/symbols/SWFSymbol.h>
#endif
#ifndef INCLUDED_openfl__internal_symbols_SpriteSymbol
#include <openfl/_internal/symbols/SpriteSymbol.h>
#endif
#ifndef INCLUDED_openfl_display_DisplayObject
#include <openfl/display/DisplayObject.h>
#endif
#ifndef INCLUDED_openfl_display_IBitmapDrawable
#include <openfl/display/IBitmapDrawable.h>
#endif
#ifndef INCLUDED_openfl_display_InteractiveObject
#include <openfl/display/InteractiveObject.h>
#endif
#ifndef INCLUDED_openfl_display_SimpleButton
#include <openfl/display/SimpleButton.h>
#endif
#ifndef INCLUDED_openfl_events_EventDispatcher
#include <openfl/events/EventDispatcher.h>
#endif
#ifndef INCLUDED_openfl_events_IEventDispatcher
#include <openfl/events/IEventDispatcher.h>
#endif
namespace openfl{
namespace _internal{
namespace symbols{

Void ButtonSymbol_obj::__construct()
{
{
	super::__construct();
}
;
	return null();
}

//ButtonSymbol_obj::~ButtonSymbol_obj() { }

Dynamic ButtonSymbol_obj::__CreateEmpty() { return  new ButtonSymbol_obj; }
hx::ObjectPtr< ButtonSymbol_obj > ButtonSymbol_obj::__new()
{  hx::ObjectPtr< ButtonSymbol_obj > _result_ = new ButtonSymbol_obj();
	_result_->__construct();
	return _result_;}

Dynamic ButtonSymbol_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< ButtonSymbol_obj > _result_ = new ButtonSymbol_obj();
	_result_->__construct();
	return _result_;}

::openfl::display::DisplayObject ButtonSymbol_obj::__createObject( ::openfl::_internal::swf::SWFLite swf){
	::openfl::display::SimpleButton simpleButton = null();
	::openfl::display::SimpleButton_obj::__initSWF = swf;
	::openfl::display::SimpleButton_obj::__initSymbol = hx::ObjectPtr<OBJ_>(this);
	::String tmp = this->className;
	bool tmp1 = (tmp != null());
	if ((tmp1)){
		::String tmp2 = this->className;
		::hx::Class tmp3 = ::Type_obj::resolveClass(tmp2);
		::hx::Class symbolType = tmp3;
		bool tmp4 = (symbolType != null());
		if ((tmp4)){
			::hx::Class tmp5 = symbolType;
			::openfl::display::SimpleButton tmp6 = ::Type_obj::createInstance(tmp5,cpp::ArrayBase_obj::__new());
			simpleButton = tmp6;
		}
		else{
		}
	}
	bool tmp2 = (simpleButton == null());
	if ((tmp2)){
		::openfl::display::SimpleButton tmp3 = ::openfl::display::SimpleButton_obj::__new(null(),null(),null(),null());
		simpleButton = tmp3;
	}
	::openfl::display::SimpleButton tmp3 = simpleButton;
	return tmp3;
}



ButtonSymbol_obj::ButtonSymbol_obj()
{
}

void ButtonSymbol_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(ButtonSymbol);
	HX_MARK_MEMBER_NAME(downState,"downState");
	HX_MARK_MEMBER_NAME(hitState,"hitState");
	HX_MARK_MEMBER_NAME(overState,"overState");
	HX_MARK_MEMBER_NAME(upState,"upState");
	::openfl::_internal::symbols::SWFSymbol_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void ButtonSymbol_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(downState,"downState");
	HX_VISIT_MEMBER_NAME(hitState,"hitState");
	HX_VISIT_MEMBER_NAME(overState,"overState");
	HX_VISIT_MEMBER_NAME(upState,"upState");
	::openfl::_internal::symbols::SWFSymbol_obj::__Visit(HX_VISIT_ARG);
}

Dynamic ButtonSymbol_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 7:
		if (HX_FIELD_EQ(inName,"upState") ) { return upState; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"hitState") ) { return hitState; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"downState") ) { return downState; }
		if (HX_FIELD_EQ(inName,"overState") ) { return overState; }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"__createObject") ) { return __createObject_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic ButtonSymbol_obj::__SetField(const ::String &inName,const Dynamic &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 7:
		if (HX_FIELD_EQ(inName,"upState") ) { upState=inValue.Cast< ::openfl::_internal::symbols::SpriteSymbol >(); return inValue; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"hitState") ) { hitState=inValue.Cast< ::openfl::_internal::symbols::SpriteSymbol >(); return inValue; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"downState") ) { downState=inValue.Cast< ::openfl::_internal::symbols::SpriteSymbol >(); return inValue; }
		if (HX_FIELD_EQ(inName,"overState") ) { overState=inValue.Cast< ::openfl::_internal::symbols::SpriteSymbol >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void ButtonSymbol_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("downState","\x4f","\x4a","\x21","\x9a"));
	outFields->push(HX_HCSTRING("hitState","\xbe","\xd2","\x6a","\xc3"));
	outFields->push(HX_HCSTRING("overState","\x1d","\x04","\xcd","\xe7"));
	outFields->push(HX_HCSTRING("upState","\xb6","\x95","\x80","\xe0"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsObject /*::openfl::_internal::symbols::SpriteSymbol*/ ,(int)offsetof(ButtonSymbol_obj,downState),HX_HCSTRING("downState","\x4f","\x4a","\x21","\x9a")},
	{hx::fsObject /*::openfl::_internal::symbols::SpriteSymbol*/ ,(int)offsetof(ButtonSymbol_obj,hitState),HX_HCSTRING("hitState","\xbe","\xd2","\x6a","\xc3")},
	{hx::fsObject /*::openfl::_internal::symbols::SpriteSymbol*/ ,(int)offsetof(ButtonSymbol_obj,overState),HX_HCSTRING("overState","\x1d","\x04","\xcd","\xe7")},
	{hx::fsObject /*::openfl::_internal::symbols::SpriteSymbol*/ ,(int)offsetof(ButtonSymbol_obj,upState),HX_HCSTRING("upState","\xb6","\x95","\x80","\xe0")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo *sStaticStorageInfo = 0;
#endif

static ::String sMemberFields[] = {
	HX_HCSTRING("downState","\x4f","\x4a","\x21","\x9a"),
	HX_HCSTRING("hitState","\xbe","\xd2","\x6a","\xc3"),
	HX_HCSTRING("overState","\x1d","\x04","\xcd","\xe7"),
	HX_HCSTRING("upState","\xb6","\x95","\x80","\xe0"),
	HX_HCSTRING("__createObject","\xfb","\x41","\x55","\x58"),
	::String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(ButtonSymbol_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(ButtonSymbol_obj::__mClass,"__mClass");
};

#endif

hx::Class ButtonSymbol_obj::__mClass;

void ButtonSymbol_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("openfl._internal.symbols.ButtonSymbol","\x6d","\xbb","\x7f","\x07");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = hx::Class_obj::dupFunctions(sMemberFields);
	__mClass->mCanCast = hx::TCanCast< ButtonSymbol_obj >;
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
} // end namespace symbols
