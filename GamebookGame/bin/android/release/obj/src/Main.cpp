#include <hxcpp.h>

#ifndef INCLUDED_Main
#include <Main.h>
#endif
#ifndef INCLUDED_lime_app_IModule
#include <lime/app/IModule.h>
#endif
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
#ifndef INCLUDED_openfl_display_MovieClip
#include <openfl/display/MovieClip.h>
#endif
#ifndef INCLUDED_openfl_display_Sprite
#include <openfl/display/Sprite.h>
#endif
#ifndef INCLUDED_openfl_display_Stage
#include <openfl/display/Stage.h>
#endif
#ifndef INCLUDED_openfl_events_EventDispatcher
#include <openfl/events/EventDispatcher.h>
#endif
#ifndef INCLUDED_openfl_events_IEventDispatcher
#include <openfl/events/IEventDispatcher.h>
#endif

Void Main_obj::__construct()
{
HX_STACK_FRAME("Main","new",0x6616a5cb,"Main.new","Main.hx",29,0x087e5c05)
HX_STACK_THIS(this)
{
	HX_STACK_LINE(30)
	super::__construct();
	HX_STACK_LINE(32)
	this->ToggleFullScreen();
}
;
	return null();
}

//Main_obj::~Main_obj() { }

Dynamic Main_obj::__CreateEmpty() { return  new Main_obj; }
hx::ObjectPtr< Main_obj > Main_obj::__new()
{  hx::ObjectPtr< Main_obj > _result_ = new Main_obj();
	_result_->__construct();
	return _result_;}

Dynamic Main_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< Main_obj > _result_ = new Main_obj();
	_result_->__construct();
	return _result_;}

Void Main_obj::ToggleFullScreen( ){
{
		HX_STACK_FRAME("Main","ToggleFullScreen",0x5060f2e4,"Main.ToggleFullScreen","Main.hx",37,0x087e5c05)
		HX_STACK_THIS(this)
		HX_STACK_LINE(41)
		::openfl::display::MovieClip tmp = ::openfl::Lib_obj::current;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(41)
		Dynamic tmp1 = tmp->stage->get_displayState();		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(41)
		bool tmp2 = (tmp1 != ((Dynamic)((int)1)));		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(41)
		if ((tmp2)){
			HX_STACK_LINE(43)
			::openfl::display::MovieClip tmp3 = ::openfl::Lib_obj::current;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(43)
			tmp3->stage->set_displayState(((Dynamic)((int)1)));
			HX_STACK_LINE(45)
			Float currentWindowWidth;		HX_STACK_VAR(currentWindowWidth,"currentWindowWidth");
			HX_STACK_LINE(46)
			Float currentWindowHeight;		HX_STACK_VAR(currentWindowHeight,"currentWindowHeight");
			HX_STACK_LINE(47)
			Float widthRatio;		HX_STACK_VAR(widthRatio,"widthRatio");
			HX_STACK_LINE(48)
			Float heightRatio;		HX_STACK_VAR(heightRatio,"heightRatio");
			HX_STACK_LINE(51)
			::openfl::display::MovieClip tmp4 = ::openfl::Lib_obj::current;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(51)
			int tmp5 = tmp4->stage->stageWidth;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(51)
			currentWindowWidth = tmp5;
			HX_STACK_LINE(52)
			::openfl::display::MovieClip tmp6 = ::openfl::Lib_obj::current;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(52)
			int tmp7 = tmp6->stage->stageHeight;		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(52)
			currentWindowHeight = tmp7;
			HX_STACK_LINE(53)
			Float tmp8 = (Float(currentWindowWidth) / Float((int)1920));		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(53)
			widthRatio = tmp8;
			HX_STACK_LINE(54)
			Float tmp9 = (Float(currentWindowHeight) / Float((int)1080));		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(54)
			heightRatio = tmp9;
			HX_STACK_LINE(57)
			::openfl::display::Stage tmp10 = this->stage;		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(57)
			Float tmp11 = widthRatio;		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(57)
			tmp10->set_scaleX(tmp11);
			HX_STACK_LINE(58)
			::openfl::display::Stage tmp12 = this->stage;		HX_STACK_VAR(tmp12,"tmp12");
			HX_STACK_LINE(58)
			Float tmp13 = heightRatio;		HX_STACK_VAR(tmp13,"tmp13");
			HX_STACK_LINE(58)
			tmp12->set_scaleY(tmp13);
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(Main_obj,ToggleFullScreen,(void))


Main_obj::Main_obj()
{
}

Dynamic Main_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 16:
		if (HX_FIELD_EQ(inName,"ToggleFullScreen") ) { return ToggleFullScreen_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

#if HXCPP_SCRIPTABLE
static hx::StorageInfo *sMemberStorageInfo = 0;
static hx::StaticInfo *sStaticStorageInfo = 0;
#endif

static ::String sMemberFields[] = {
	HX_HCSTRING("ToggleFullScreen","\x2f","\x0f","\x93","\x12"),
	::String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(Main_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(Main_obj::__mClass,"__mClass");
};

#endif

hx::Class Main_obj::__mClass;

void Main_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("Main","\x59","\x64","\x2f","\x33");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = hx::Class_obj::dupFunctions(sMemberFields);
	__mClass->mCanCast = hx::TCanCast< Main_obj >;
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

