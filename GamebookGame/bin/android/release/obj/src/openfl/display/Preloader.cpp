#include <hxcpp.h>

#ifndef INCLUDED_lime_app_IModule
#include <lime/app/IModule.h>
#endif
#ifndef INCLUDED_lime_app_Preloader
#include <lime/app/Preloader.h>
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
#ifndef INCLUDED_openfl_display_LoaderInfo
#include <openfl/display/LoaderInfo.h>
#endif
#ifndef INCLUDED_openfl_display_MovieClip
#include <openfl/display/MovieClip.h>
#endif
#ifndef INCLUDED_openfl_display_Preloader
#include <openfl/display/Preloader.h>
#endif
#ifndef INCLUDED_openfl_display_Sprite
#include <openfl/display/Sprite.h>
#endif
#ifndef INCLUDED_openfl_display_Stage
#include <openfl/display/Stage.h>
#endif
#ifndef INCLUDED_openfl_events_Event
#include <openfl/events/Event.h>
#endif
#ifndef INCLUDED_openfl_events_EventDispatcher
#include <openfl/events/EventDispatcher.h>
#endif
#ifndef INCLUDED_openfl_events_IEventDispatcher
#include <openfl/events/IEventDispatcher.h>
#endif
#ifndef INCLUDED_openfl_events_ProgressEvent
#include <openfl/events/ProgressEvent.h>
#endif
namespace openfl{
namespace display{

Void Preloader_obj::__construct(::openfl::display::Sprite display)
{
{
	super::__construct();
	this->display = display;
	bool tmp = (display != null());
	if ((tmp)){
		Dynamic tmp1 = this->display_onUnload_dyn();
		display->addEventListener(HX_HCSTRING("unload","\xff","\xa0","\x8c","\x65"),tmp1,null(),null(),null());
		::openfl::display::MovieClip tmp2 = ::openfl::Lib_obj::current;
		::openfl::display::Sprite tmp3 = display;
		tmp2->addChild(tmp3);
	}
}
;
	return null();
}

//Preloader_obj::~Preloader_obj() { }

Dynamic Preloader_obj::__CreateEmpty() { return  new Preloader_obj; }
hx::ObjectPtr< Preloader_obj > Preloader_obj::__new(::openfl::display::Sprite display)
{  hx::ObjectPtr< Preloader_obj > _result_ = new Preloader_obj();
	_result_->__construct(display);
	return _result_;}

Dynamic Preloader_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< Preloader_obj > _result_ = new Preloader_obj();
	_result_->__construct(inArgs[0]);
	return _result_;}

Void Preloader_obj::start( ){
{
		bool tmp = this->simulateProgress;
		if ((tmp)){
			return null();
		}
		this->ready = true;
		::openfl::display::MovieClip tmp1 = ::openfl::Lib_obj::current;
		::openfl::display::LoaderInfo tmp2 = tmp1->get_loaderInfo();
		tmp2->__complete();
		::openfl::display::Sprite tmp3 = this->display;
		bool tmp4 = (tmp3 != null());
		if ((tmp4)){
			::openfl::events::Event tmp5 = ::openfl::events::Event_obj::__new(HX_HCSTRING("complete","\xb9","\x00","\xc8","\x7f"),true,true);
			::openfl::events::Event complete = tmp5;
			::openfl::display::Sprite tmp6 = this->display;
			::openfl::events::Event tmp7 = complete;
			tmp6->dispatchEvent(tmp7);
			bool tmp8 = complete->isDefaultPrevented();
			bool tmp9 = !(tmp8);
			if ((tmp9)){
				::openfl::display::Sprite tmp10 = this->display;
				::openfl::events::Event tmp11 = ::openfl::events::Event_obj::__new(HX_HCSTRING("unload","\xff","\xa0","\x8c","\x65"),null(),null());
				tmp10->dispatchEvent(tmp11);
			}
		}
		else{
			this->super::start();
		}
	}
return null();
}


Void Preloader_obj::update( int loaded,int total){
{
		::openfl::display::MovieClip tmp = ::openfl::Lib_obj::current;
		::openfl::display::LoaderInfo tmp1 = tmp->get_loaderInfo();
		int tmp2 = loaded;
		int tmp3 = total;
		tmp1->__update(tmp2,tmp3);
		::openfl::display::Sprite tmp4 = this->display;
		bool tmp5 = (tmp4 != null());
		if ((tmp5)){
			::openfl::display::Sprite tmp6 = this->display;
			::openfl::events::ProgressEvent tmp7 = ::openfl::events::ProgressEvent_obj::__new(HX_HCSTRING("progress","\xad","\xf7","\x2a","\x86"),true,true,loaded,total);
			tmp6->dispatchEvent(tmp7);
		}
	}
return null();
}


Void Preloader_obj::display_onUnload( ::openfl::events::Event event){
{
		::openfl::display::Sprite tmp = this->display;
		bool tmp1 = (tmp != null());
		if ((tmp1)){
			::openfl::display::Sprite tmp2 = this->display;
			Dynamic tmp3 = this->display_onUnload_dyn();
			tmp2->removeEventListener(HX_HCSTRING("unload","\xff","\xa0","\x8c","\x65"),tmp3,null());
			::openfl::display::Sprite tmp4 = this->display;
			::openfl::display::DisplayObjectContainer tmp5 = tmp4->parent;
			::openfl::display::MovieClip tmp6 = ::openfl::Lib_obj::current;
			bool tmp7 = (tmp5 == tmp6);
			if ((tmp7)){
				::openfl::display::MovieClip tmp8 = ::openfl::Lib_obj::current;
				::openfl::display::Sprite tmp9 = this->display;
				tmp8->removeChild(tmp9);
			}
			::openfl::display::MovieClip tmp8 = ::openfl::Lib_obj::current;
			tmp8->stage->set_focus(null());
			this->display = null();
		}
		bool tmp2 = this->ready;
		bool tmp3;
		if ((tmp2)){
			bool tmp4 = this->simulateProgress;
			bool tmp5 = tmp4;
			bool tmp6 = tmp5;
			tmp3 = !(tmp6);
		}
		else{
			tmp3 = false;
		}
		if ((tmp3)){
			this->super::start();
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Preloader_obj,display_onUnload,(void))


Preloader_obj::Preloader_obj()
{
}

void Preloader_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(Preloader);
	HX_MARK_MEMBER_NAME(display,"display");
	HX_MARK_MEMBER_NAME(ready,"ready");
	::lime::app::Preloader_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void Preloader_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(display,"display");
	HX_VISIT_MEMBER_NAME(ready,"ready");
	::lime::app::Preloader_obj::__Visit(HX_VISIT_ARG);
}

Dynamic Preloader_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"ready") ) { return ready; }
		if (HX_FIELD_EQ(inName,"start") ) { return start_dyn(); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"update") ) { return update_dyn(); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"display") ) { return display; }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"display_onUnload") ) { return display_onUnload_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic Preloader_obj::__SetField(const ::String &inName,const Dynamic &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"ready") ) { ready=inValue.Cast< bool >(); return inValue; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"display") ) { display=inValue.Cast< ::openfl::display::Sprite >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void Preloader_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("display","\x42","\x2a","\x4a","\xbb"));
	outFields->push(HX_HCSTRING("ready","\x63","\xa0","\xba","\xe6"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsObject /*::openfl::display::Sprite*/ ,(int)offsetof(Preloader_obj,display),HX_HCSTRING("display","\x42","\x2a","\x4a","\xbb")},
	{hx::fsBool,(int)offsetof(Preloader_obj,ready),HX_HCSTRING("ready","\x63","\xa0","\xba","\xe6")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo *sStaticStorageInfo = 0;
#endif

static ::String sMemberFields[] = {
	HX_HCSTRING("display","\x42","\x2a","\x4a","\xbb"),
	HX_HCSTRING("ready","\x63","\xa0","\xba","\xe6"),
	HX_HCSTRING("start","\x62","\x74","\x0b","\x84"),
	HX_HCSTRING("update","\x09","\x86","\x05","\x87"),
	HX_HCSTRING("display_onUnload","\x5b","\x0c","\x23","\xe3"),
	::String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(Preloader_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(Preloader_obj::__mClass,"__mClass");
};

#endif

hx::Class Preloader_obj::__mClass;

void Preloader_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("openfl.display.Preloader","\xcc","\x12","\x24","\x2f");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = hx::Class_obj::dupFunctions(sMemberFields);
	__mClass->mCanCast = hx::TCanCast< Preloader_obj >;
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
