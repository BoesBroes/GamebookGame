#include <hxcpp.h>

#ifndef INCLUDED_openfl_events_Event
#include <openfl/events/Event.h>
#endif
#ifndef INCLUDED_openfl_events_EventDispatcher
#include <openfl/events/EventDispatcher.h>
#endif
#ifndef INCLUDED_openfl_events_IEventDispatcher
#include <openfl/events/IEventDispatcher.h>
#endif
#ifndef INCLUDED_openfl_events_NetStatusEvent
#include <openfl/events/NetStatusEvent.h>
#endif
#ifndef INCLUDED_openfl_net_NetConnection
#include <openfl/net/NetConnection.h>
#endif
namespace openfl{
namespace net{

Void NetConnection_obj::__construct()
{
HX_STACK_FRAME("openfl.net.NetConnection","new",0x5c5dd97e,"openfl.net.NetConnection.new","openfl/net/NetConnection.hx",16,0x3b599834)
HX_STACK_THIS(this)
{
	HX_STACK_LINE(16)
	super::__construct(null());
}
;
	return null();
}

//NetConnection_obj::~NetConnection_obj() { }

Dynamic NetConnection_obj::__CreateEmpty() { return  new NetConnection_obj; }
hx::ObjectPtr< NetConnection_obj > NetConnection_obj::__new()
{  hx::ObjectPtr< NetConnection_obj > _result_ = new NetConnection_obj();
	_result_->__construct();
	return _result_;}

Dynamic NetConnection_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< NetConnection_obj > _result_ = new NetConnection_obj();
	_result_->__construct();
	return _result_;}

Void NetConnection_obj::connect( ::String command,Dynamic _,Dynamic _1,Dynamic _2,Dynamic _3,Dynamic _4){
{
		HX_STACK_FRAME("openfl.net.NetConnection","connect",0x1fc82c08,"openfl.net.NetConnection.connect","openfl/net/NetConnection.hx",21,0x3b599834)
		HX_STACK_THIS(this)
		HX_STACK_ARG(command,"command")
		HX_STACK_ARG(_,"_")
		HX_STACK_ARG(_1,"_1")
		HX_STACK_ARG(_2,"_2")
		HX_STACK_ARG(_3,"_3")
		HX_STACK_ARG(_4,"_4")
		HX_STACK_LINE(23)
		bool tmp = (command != null());		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(23)
		if ((tmp)){
			HX_STACK_LINE(25)
			HX_STACK_DO_THROW(HX_HCSTRING("Error: Can only connect in \"HTTP streaming\" mode","\xfe","\xf3","\x67","\x57"));
		}
		struct _Function_1_1{
			inline static Dynamic Block( ){
				HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","openfl/net/NetConnection.hx",29,0x3b599834)
				{
					hx::Anon __result = hx::Anon_obj::Create();
					__result->Add(HX_HCSTRING("code","\x2d","\xb1","\xc4","\x41") , HX_HCSTRING("connectSuccess","\xf9","\xc2","\x88","\x08"),false);
					return __result;
				}
				return null();
			}
		};
		HX_STACK_LINE(29)
		Dynamic tmp1 = _Function_1_1::Block();		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(29)
		::openfl::events::NetStatusEvent tmp2 = ::openfl::events::NetStatusEvent_obj::__new(HX_HCSTRING("netStatus","\x6f","\x4f","\xec","\x46"),false,true,tmp1);		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(29)
		this->dispatchEvent(tmp2);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC6(NetConnection_obj,connect,(void))

::String NetConnection_obj::CONNECT_SUCCESS;


NetConnection_obj::NetConnection_obj()
{
}

Dynamic NetConnection_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 7:
		if (HX_FIELD_EQ(inName,"connect") ) { return connect_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

#if HXCPP_SCRIPTABLE
static hx::StorageInfo *sMemberStorageInfo = 0;
static hx::StaticInfo sStaticStorageInfo[] = {
	{hx::fsString,(void *) &NetConnection_obj::CONNECT_SUCCESS,HX_HCSTRING("CONNECT_SUCCESS","\xee","\x3c","\xd2","\x12")},
	{ hx::fsUnknown, 0, null()}
};
#endif

static ::String sMemberFields[] = {
	HX_HCSTRING("connect","\xea","\x3b","\x80","\x15"),
	::String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(NetConnection_obj::__mClass,"__mClass");
	HX_MARK_MEMBER_NAME(NetConnection_obj::CONNECT_SUCCESS,"CONNECT_SUCCESS");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(NetConnection_obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(NetConnection_obj::CONNECT_SUCCESS,"CONNECT_SUCCESS");
};

#endif

hx::Class NetConnection_obj::__mClass;

static ::String sStaticFields[] = {
	HX_HCSTRING("CONNECT_SUCCESS","\xee","\x3c","\xd2","\x12"),
	::String(null()) };

void NetConnection_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("openfl.net.NetConnection","\x8c","\x02","\x60","\x24");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(sStaticFields);
	__mClass->mMembers = hx::Class_obj::dupFunctions(sMemberFields);
	__mClass->mCanCast = hx::TCanCast< NetConnection_obj >;
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

void NetConnection_obj::__boot()
{
	CONNECT_SUCCESS= HX_HCSTRING("connectSuccess","\xf9","\xc2","\x88","\x08");
}

} // end namespace openfl
} // end namespace net
