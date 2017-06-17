#include <hxcpp.h>

#ifndef INCLUDED_Type
#include <Type.h>
#endif
#ifndef INCLUDED_openfl__internal_swf_SWFLite
#include <openfl/_internal/swf/SWFLite.h>
#endif
#ifndef INCLUDED_openfl__internal_symbols_SWFSymbol
#include <openfl/_internal/symbols/SWFSymbol.h>
#endif
#ifndef INCLUDED_openfl__internal_symbols_SpriteSymbol
#include <openfl/_internal/symbols/SpriteSymbol.h>
#endif
#ifndef INCLUDED_openfl__internal_timeline_Frame
#include <openfl/_internal/timeline/Frame.h>
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
#ifndef INCLUDED_openfl_display_MovieClip
#include <openfl/display/MovieClip.h>
#endif
#ifndef INCLUDED_openfl_display_Sprite
#include <openfl/display/Sprite.h>
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

Void SpriteSymbol_obj::__construct()
{
{
	super::__construct();
	this->frames = Array_obj< ::Dynamic >::__new();
}
;
	return null();
}

//SpriteSymbol_obj::~SpriteSymbol_obj() { }

Dynamic SpriteSymbol_obj::__CreateEmpty() { return  new SpriteSymbol_obj; }
hx::ObjectPtr< SpriteSymbol_obj > SpriteSymbol_obj::__new()
{  hx::ObjectPtr< SpriteSymbol_obj > _result_ = new SpriteSymbol_obj();
	_result_->__construct();
	return _result_;}

Dynamic SpriteSymbol_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< SpriteSymbol_obj > _result_ = new SpriteSymbol_obj();
	_result_->__construct();
	return _result_;}

::openfl::display::DisplayObject SpriteSymbol_obj::__createObject( ::openfl::_internal::swf::SWFLite swf){
	::openfl::display::MovieClip movieClip = null();
	::openfl::display::MovieClip_obj::__initSWF = swf;
	::openfl::display::MovieClip_obj::__initSymbol = hx::ObjectPtr<OBJ_>(this);
	::String tmp = this->className;
	bool tmp1 = (tmp != null());
	if ((tmp1)){
		::String tmp2 = this->className;
		::hx::Class tmp3 = ::Type_obj::resolveClass(tmp2);
		::hx::Class symbolType = tmp3;
		bool tmp4 = (symbolType != null());
		if ((tmp4)){
			::hx::Class tmp5 = symbolType;
			::openfl::display::MovieClip tmp6 = ::Type_obj::createInstance(tmp5,cpp::ArrayBase_obj::__new());
			movieClip = tmp6;
		}
		else{
		}
	}
	bool tmp2 = (movieClip == null());
	if ((tmp2)){
		::openfl::display::MovieClip tmp3 = ::openfl::display::MovieClip_obj::__new();
		movieClip = tmp3;
	}
	::openfl::display::MovieClip tmp3 = movieClip;
	return tmp3;
}



SpriteSymbol_obj::SpriteSymbol_obj()
{
}

void SpriteSymbol_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(SpriteSymbol);
	HX_MARK_MEMBER_NAME(frames,"frames");
	::openfl::_internal::symbols::SWFSymbol_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void SpriteSymbol_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(frames,"frames");
	::openfl::_internal::symbols::SWFSymbol_obj::__Visit(HX_VISIT_ARG);
}

Dynamic SpriteSymbol_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 6:
		if (HX_FIELD_EQ(inName,"frames") ) { return frames; }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"__createObject") ) { return __createObject_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic SpriteSymbol_obj::__SetField(const ::String &inName,const Dynamic &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 6:
		if (HX_FIELD_EQ(inName,"frames") ) { frames=inValue.Cast< Array< ::Dynamic > >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void SpriteSymbol_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("frames","\xa6","\xaf","\x85","\xac"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsObject /*Array< ::Dynamic >*/ ,(int)offsetof(SpriteSymbol_obj,frames),HX_HCSTRING("frames","\xa6","\xaf","\x85","\xac")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo *sStaticStorageInfo = 0;
#endif

static ::String sMemberFields[] = {
	HX_HCSTRING("frames","\xa6","\xaf","\x85","\xac"),
	HX_HCSTRING("__createObject","\xfb","\x41","\x55","\x58"),
	::String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(SpriteSymbol_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(SpriteSymbol_obj::__mClass,"__mClass");
};

#endif

hx::Class SpriteSymbol_obj::__mClass;

void SpriteSymbol_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("openfl._internal.symbols.SpriteSymbol","\xc0","\x85","\xa4","\xf7");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = hx::Class_obj::dupFunctions(sMemberFields);
	__mClass->mCanCast = hx::TCanCast< SpriteSymbol_obj >;
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
