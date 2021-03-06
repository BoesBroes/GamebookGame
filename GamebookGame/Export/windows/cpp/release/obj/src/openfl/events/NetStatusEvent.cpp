#include <hxcpp.h>

#ifndef INCLUDED_openfl_events_Event
#include <openfl/events/Event.h>
#endif
#ifndef INCLUDED_openfl_events_IEventDispatcher
#include <openfl/events/IEventDispatcher.h>
#endif
#ifndef INCLUDED_openfl_events_NetStatusEvent
#include <openfl/events/NetStatusEvent.h>
#endif
namespace openfl{
namespace events{

Void NetStatusEvent_obj::__construct(::String type,hx::Null< bool >  __o_bubbles,hx::Null< bool >  __o_cancelable,Dynamic info)
{
HX_STACK_FRAME("openfl.events.NetStatusEvent","new",0x7499fa94,"openfl.events.NetStatusEvent.new","openfl/events/NetStatusEvent.hx",12,0xf85a9d3c)
HX_STACK_THIS(this)
HX_STACK_ARG(type,"type")
HX_STACK_ARG(__o_bubbles,"bubbles")
HX_STACK_ARG(__o_cancelable,"cancelable")
HX_STACK_ARG(info,"info")
bool bubbles = __o_bubbles.Default(false);
bool cancelable = __o_cancelable.Default(false);
{
	HX_STACK_LINE(14)
	this->info = info;
	HX_STACK_LINE(16)
	::String tmp = type;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(16)
	bool tmp1 = bubbles;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(16)
	bool tmp2 = cancelable;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(16)
	super::__construct(tmp,tmp1,tmp2);
}
;
	return null();
}

//NetStatusEvent_obj::~NetStatusEvent_obj() { }

Dynamic NetStatusEvent_obj::__CreateEmpty() { return  new NetStatusEvent_obj; }
hx::ObjectPtr< NetStatusEvent_obj > NetStatusEvent_obj::__new(::String type,hx::Null< bool >  __o_bubbles,hx::Null< bool >  __o_cancelable,Dynamic info)
{  hx::ObjectPtr< NetStatusEvent_obj > _result_ = new NetStatusEvent_obj();
	_result_->__construct(type,__o_bubbles,__o_cancelable,info);
	return _result_;}

Dynamic NetStatusEvent_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< NetStatusEvent_obj > _result_ = new NetStatusEvent_obj();
	_result_->__construct(inArgs[0],inArgs[1],inArgs[2],inArgs[3]);
	return _result_;}

::openfl::events::Event NetStatusEvent_obj::clone( ){
	HX_STACK_FRAME("openfl.events.NetStatusEvent","clone",0xfa2f3291,"openfl.events.NetStatusEvent.clone","openfl/events/NetStatusEvent.hx",21,0xf85a9d3c)
	HX_STACK_THIS(this)
	HX_STACK_LINE(23)
	::String tmp = this->type;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(23)
	bool tmp1 = this->bubbles;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(23)
	bool tmp2 = this->cancelable;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(23)
	Dynamic tmp3 = this->info;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(23)
	::openfl::events::NetStatusEvent tmp4 = ::openfl::events::NetStatusEvent_obj::__new(tmp,tmp1,tmp2,tmp3);		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(23)
	::openfl::events::NetStatusEvent event = tmp4;		HX_STACK_VAR(event,"event");
	HX_STACK_LINE(24)
	::openfl::events::IEventDispatcher tmp5 = this->target;		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(24)
	event->target = tmp5;
	HX_STACK_LINE(25)
	::openfl::events::IEventDispatcher tmp6 = this->currentTarget;		HX_STACK_VAR(tmp6,"tmp6");
	HX_STACK_LINE(25)
	event->currentTarget = tmp6;
	HX_STACK_LINE(26)
	int tmp7 = this->eventPhase;		HX_STACK_VAR(tmp7,"tmp7");
	HX_STACK_LINE(26)
	event->eventPhase = tmp7;
	HX_STACK_LINE(27)
	::openfl::events::NetStatusEvent tmp8 = event;		HX_STACK_VAR(tmp8,"tmp8");
	HX_STACK_LINE(27)
	return tmp8;
}


::String NetStatusEvent_obj::toString( ){
	HX_STACK_FRAME("openfl.events.NetStatusEvent","toString",0x4e1f29f8,"openfl.events.NetStatusEvent.toString","openfl/events/NetStatusEvent.hx",32,0xf85a9d3c)
	HX_STACK_THIS(this)
	HX_STACK_LINE(34)
	::String tmp = this->__formatToString(HX_HCSTRING("NetStatusEvent","\x4b","\x2a","\xfa","\x67"),Array_obj< ::String >::__new().Add(HX_HCSTRING("type","\xba","\xf2","\x08","\x4d")).Add(HX_HCSTRING("bubbles","\x67","\xbb","\x56","\x61")).Add(HX_HCSTRING("cancelable","\x14","\xa0","\x79","\xc4")).Add(HX_HCSTRING("info","\x6e","\x38","\xbb","\x45")));		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(34)
	return tmp;
}


::String NetStatusEvent_obj::NET_STATUS;


NetStatusEvent_obj::NetStatusEvent_obj()
{
}

void NetStatusEvent_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(NetStatusEvent);
	HX_MARK_MEMBER_NAME(info,"info");
	::openfl::events::Event_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void NetStatusEvent_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(info,"info");
	::openfl::events::Event_obj::__Visit(HX_VISIT_ARG);
}

Dynamic NetStatusEvent_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"info") ) { return info; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"clone") ) { return clone_dyn(); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"toString") ) { return toString_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic NetStatusEvent_obj::__SetField(const ::String &inName,const Dynamic &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"info") ) { info=inValue.Cast< Dynamic >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void NetStatusEvent_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("info","\x6e","\x38","\xbb","\x45"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsObject /*Dynamic*/ ,(int)offsetof(NetStatusEvent_obj,info),HX_HCSTRING("info","\x6e","\x38","\xbb","\x45")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo sStaticStorageInfo[] = {
	{hx::fsString,(void *) &NetStatusEvent_obj::NET_STATUS,HX_HCSTRING("NET_STATUS","\x34","\xea","\x44","\x5d")},
	{ hx::fsUnknown, 0, null()}
};
#endif

static ::String sMemberFields[] = {
	HX_HCSTRING("info","\x6e","\x38","\xbb","\x45"),
	HX_HCSTRING("clone","\x5d","\x13","\x63","\x48"),
	HX_HCSTRING("toString","\xac","\xd0","\x6e","\x38"),
	::String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(NetStatusEvent_obj::__mClass,"__mClass");
	HX_MARK_MEMBER_NAME(NetStatusEvent_obj::NET_STATUS,"NET_STATUS");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(NetStatusEvent_obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(NetStatusEvent_obj::NET_STATUS,"NET_STATUS");
};

#endif

hx::Class NetStatusEvent_obj::__mClass;

static ::String sStaticFields[] = {
	HX_HCSTRING("NET_STATUS","\x34","\xea","\x44","\x5d"),
	::String(null()) };

void NetStatusEvent_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("openfl.events.NetStatusEvent","\xa2","\x60","\x44","\xa5");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(sStaticFields);
	__mClass->mMembers = hx::Class_obj::dupFunctions(sMemberFields);
	__mClass->mCanCast = hx::TCanCast< NetStatusEvent_obj >;
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

void NetStatusEvent_obj::__boot()
{
	NET_STATUS= HX_HCSTRING("netStatus","\x6f","\x4f","\xec","\x46");
}

} // end namespace openfl
} // end namespace events
