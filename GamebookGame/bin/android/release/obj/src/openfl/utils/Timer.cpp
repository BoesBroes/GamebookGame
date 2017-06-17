#include <hxcpp.h>

#include "hxMath.h"
#ifndef INCLUDED_haxe_Timer
#include <haxe/Timer.h>
#endif
#ifndef INCLUDED_openfl_errors_Error
#include <openfl/errors/Error.h>
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
#ifndef INCLUDED_openfl_events_TimerEvent
#include <openfl/events/TimerEvent.h>
#endif
#ifndef INCLUDED_openfl_utils_Timer
#include <openfl/utils/Timer.h>
#endif
namespace openfl{
namespace utils{

Void Timer_obj::__construct(Float delay,hx::Null< int >  __o_repeatCount)
{
int repeatCount = __o_repeatCount.Default(0);
{
	Float tmp = delay;
	Float tmp1 = tmp;
	bool tmp2 = ::Math_obj::isNaN(tmp1);
	bool tmp3 = !(tmp2);
	bool tmp4;
	if ((tmp3)){
		tmp4 = (delay < (int)0);
	}
	else{
		tmp4 = true;
	}
	if ((tmp4)){
		::openfl::errors::Error tmp5 = ::openfl::errors::Error_obj::__new(HX_HCSTRING("The delay specified is negative or not a finite number","\x42","\x5b","\x8b","\xe3"),null());
		HX_STACK_DO_THROW(tmp5);
	}
	super::__construct(null());
	this->__delay = delay;
	int tmp5 = repeatCount;
	this->set_repeatCount(tmp5);
	this->running = false;
	this->currentCount = (int)0;
}
;
	return null();
}

//Timer_obj::~Timer_obj() { }

Dynamic Timer_obj::__CreateEmpty() { return  new Timer_obj; }
hx::ObjectPtr< Timer_obj > Timer_obj::__new(Float delay,hx::Null< int >  __o_repeatCount)
{  hx::ObjectPtr< Timer_obj > _result_ = new Timer_obj();
	_result_->__construct(delay,__o_repeatCount);
	return _result_;}

Dynamic Timer_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< Timer_obj > _result_ = new Timer_obj();
	_result_->__construct(inArgs[0],inArgs[1]);
	return _result_;}

Void Timer_obj::reset( ){
{
		bool tmp = this->running;
		if ((tmp)){
			this->stop();
		}
		this->currentCount = (int)0;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(Timer_obj,reset,(void))

Void Timer_obj::start( ){
{
		bool tmp = this->running;
		bool tmp1 = !(tmp);
		if ((tmp1)){
			this->running = true;
			Float tmp2 = this->__delay;
			::haxe::Timer tmp3 = ::haxe::Timer_obj::__new(tmp2);
			this->__timer = tmp3;
			Dynamic tmp4 = this->timer_onTimer_dyn();
			::haxe::Timer tmp5 = this->__timer;
			tmp5->run = tmp4;
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(Timer_obj,start,(void))

Void Timer_obj::stop( ){
{
		this->running = false;
		::haxe::Timer tmp = this->__timer;
		bool tmp1 = (tmp != null());
		if ((tmp1)){
			::haxe::Timer tmp2 = this->__timer;
			tmp2->stop();
			this->__timer = null();
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(Timer_obj,stop,(void))

Float Timer_obj::get_delay( ){
	Float tmp = this->__delay;
	return tmp;
}


HX_DEFINE_DYNAMIC_FUNC0(Timer_obj,get_delay,return )

Float Timer_obj::set_delay( Float value){
	this->__delay = value;
	bool tmp = this->running;
	if ((tmp)){
		this->stop();
		this->start();
	}
	Float tmp1 = this->__delay;
	return tmp1;
}


HX_DEFINE_DYNAMIC_FUNC1(Timer_obj,set_delay,return )

int Timer_obj::set_repeatCount( int v){
	bool tmp = this->running;
	bool tmp1 = tmp;
	bool tmp2;
	if ((tmp1)){
		tmp2 = (v != (int)0);
	}
	else{
		tmp2 = false;
	}
	bool tmp3;
	if ((tmp2)){
		int tmp4 = v;
		int tmp5 = this->currentCount;
		int tmp6 = tmp5;
		tmp3 = (tmp4 <= tmp6);
	}
	else{
		tmp3 = false;
	}
	if ((tmp3)){
		this->stop();
	}
	this->repeatCount = v;
	int tmp4 = v;
	return tmp4;
}


HX_DEFINE_DYNAMIC_FUNC1(Timer_obj,set_repeatCount,return )

Void Timer_obj::timer_onTimer( ){
{
		(this->currentCount)++;
		int tmp = this->repeatCount;
		bool tmp1 = (tmp > (int)0);
		bool tmp2;
		if ((tmp1)){
			int tmp3 = this->currentCount;
			int tmp4 = tmp3;
			int tmp5 = this->repeatCount;
			int tmp6 = tmp5;
			tmp2 = (tmp4 >= tmp6);
		}
		else{
			tmp2 = false;
		}
		if ((tmp2)){
			this->stop();
			::openfl::events::TimerEvent tmp3 = ::openfl::events::TimerEvent_obj::__new(HX_HCSTRING("timer","\xc5","\xbf","\x35","\x10"),null(),null());
			this->dispatchEvent(tmp3);
			::openfl::events::TimerEvent tmp4 = ::openfl::events::TimerEvent_obj::__new(HX_HCSTRING("timerComplete","\x9e","\x49","\xcc","\x97"),null(),null());
			this->dispatchEvent(tmp4);
		}
		else{
			::openfl::events::TimerEvent tmp3 = ::openfl::events::TimerEvent_obj::__new(HX_HCSTRING("timer","\xc5","\xbf","\x35","\x10"),null(),null());
			this->dispatchEvent(tmp3);
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(Timer_obj,timer_onTimer,(void))


Timer_obj::Timer_obj()
{
}

void Timer_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(Timer);
	HX_MARK_MEMBER_NAME(currentCount,"currentCount");
	HX_MARK_MEMBER_NAME(repeatCount,"repeatCount");
	HX_MARK_MEMBER_NAME(running,"running");
	HX_MARK_MEMBER_NAME(__delay,"__delay");
	HX_MARK_MEMBER_NAME(__timer,"__timer");
	HX_MARK_MEMBER_NAME(__timerID,"__timerID");
	::openfl::events::EventDispatcher_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void Timer_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(currentCount,"currentCount");
	HX_VISIT_MEMBER_NAME(repeatCount,"repeatCount");
	HX_VISIT_MEMBER_NAME(running,"running");
	HX_VISIT_MEMBER_NAME(__delay,"__delay");
	HX_VISIT_MEMBER_NAME(__timer,"__timer");
	HX_VISIT_MEMBER_NAME(__timerID,"__timerID");
	::openfl::events::EventDispatcher_obj::__Visit(HX_VISIT_ARG);
}

Dynamic Timer_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"stop") ) { return stop_dyn(); }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"delay") ) { if (inCallProp == hx::paccAlways) return get_delay(); }
		if (HX_FIELD_EQ(inName,"reset") ) { return reset_dyn(); }
		if (HX_FIELD_EQ(inName,"start") ) { return start_dyn(); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"running") ) { return running; }
		if (HX_FIELD_EQ(inName,"__delay") ) { return __delay; }
		if (HX_FIELD_EQ(inName,"__timer") ) { return __timer; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"__timerID") ) { return __timerID; }
		if (HX_FIELD_EQ(inName,"get_delay") ) { return get_delay_dyn(); }
		if (HX_FIELD_EQ(inName,"set_delay") ) { return set_delay_dyn(); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"repeatCount") ) { return repeatCount; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"currentCount") ) { return currentCount; }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"timer_onTimer") ) { return timer_onTimer_dyn(); }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"set_repeatCount") ) { return set_repeatCount_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic Timer_obj::__SetField(const ::String &inName,const Dynamic &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"delay") ) { if (inCallProp == hx::paccAlways) return set_delay(inValue); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"running") ) { running=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"__delay") ) { __delay=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"__timer") ) { __timer=inValue.Cast< ::haxe::Timer >(); return inValue; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"__timerID") ) { __timerID=inValue.Cast< int >(); return inValue; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"repeatCount") ) { if (inCallProp == hx::paccAlways) return set_repeatCount(inValue);repeatCount=inValue.Cast< int >(); return inValue; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"currentCount") ) { currentCount=inValue.Cast< int >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void Timer_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("currentCount","\xd6","\x29","\x6f","\x91"));
	outFields->push(HX_HCSTRING("delay","\x83","\xd7","\x26","\xd7"));
	outFields->push(HX_HCSTRING("repeatCount","\x74","\x93","\x8a","\x1b"));
	outFields->push(HX_HCSTRING("running","\xff","\x6d","\x69","\xeb"));
	outFields->push(HX_HCSTRING("__delay","\x63","\x30","\x85","\x41"));
	outFields->push(HX_HCSTRING("__timer","\xa5","\x18","\x94","\x7a"));
	outFields->push(HX_HCSTRING("__timerID","\xc0","\x8b","\x47","\x5a"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsInt,(int)offsetof(Timer_obj,currentCount),HX_HCSTRING("currentCount","\xd6","\x29","\x6f","\x91")},
	{hx::fsInt,(int)offsetof(Timer_obj,repeatCount),HX_HCSTRING("repeatCount","\x74","\x93","\x8a","\x1b")},
	{hx::fsBool,(int)offsetof(Timer_obj,running),HX_HCSTRING("running","\xff","\x6d","\x69","\xeb")},
	{hx::fsFloat,(int)offsetof(Timer_obj,__delay),HX_HCSTRING("__delay","\x63","\x30","\x85","\x41")},
	{hx::fsObject /*::haxe::Timer*/ ,(int)offsetof(Timer_obj,__timer),HX_HCSTRING("__timer","\xa5","\x18","\x94","\x7a")},
	{hx::fsInt,(int)offsetof(Timer_obj,__timerID),HX_HCSTRING("__timerID","\xc0","\x8b","\x47","\x5a")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo *sStaticStorageInfo = 0;
#endif

static ::String sMemberFields[] = {
	HX_HCSTRING("currentCount","\xd6","\x29","\x6f","\x91"),
	HX_HCSTRING("repeatCount","\x74","\x93","\x8a","\x1b"),
	HX_HCSTRING("running","\xff","\x6d","\x69","\xeb"),
	HX_HCSTRING("__delay","\x63","\x30","\x85","\x41"),
	HX_HCSTRING("__timer","\xa5","\x18","\x94","\x7a"),
	HX_HCSTRING("__timerID","\xc0","\x8b","\x47","\x5a"),
	HX_HCSTRING("reset","\xcf","\x49","\xc8","\xe6"),
	HX_HCSTRING("start","\x62","\x74","\x0b","\x84"),
	HX_HCSTRING("stop","\x02","\xf0","\x5b","\x4c"),
	HX_HCSTRING("get_delay","\xda","\x33","\xd0","\x1a"),
	HX_HCSTRING("set_delay","\xe6","\x1f","\x21","\xfe"),
	HX_HCSTRING("set_repeatCount","\x17","\xc8","\x37","\xd8"),
	HX_HCSTRING("timer_onTimer","\x6c","\x44","\x7e","\x1e"),
	::String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(Timer_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(Timer_obj::__mClass,"__mClass");
};

#endif

hx::Class Timer_obj::__mClass;

void Timer_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("openfl.utils.Timer","\xca","\xdb","\x6c","\x10");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = hx::Class_obj::dupFunctions(sMemberFields);
	__mClass->mCanCast = hx::TCanCast< Timer_obj >;
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
} // end namespace utils
