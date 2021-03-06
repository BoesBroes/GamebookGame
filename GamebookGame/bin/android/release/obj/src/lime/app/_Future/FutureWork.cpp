#include <hxcpp.h>

#ifndef INCLUDED_lime_app__Event_Dynamic_Void
#include <lime/app/_Event_Dynamic_Void.h>
#endif
#ifndef INCLUDED_lime_app__Future_FutureWork
#include <lime/app/_Future/FutureWork.h>
#endif
#ifndef INCLUDED_lime_system_ThreadPool
#include <lime/system/ThreadPool.h>
#endif
namespace lime{
namespace app{
namespace _Future{

Void FutureWork_obj::__construct()
{
	return null();
}

//FutureWork_obj::~FutureWork_obj() { }

Dynamic FutureWork_obj::__CreateEmpty() { return  new FutureWork_obj; }
hx::ObjectPtr< FutureWork_obj > FutureWork_obj::__new()
{  hx::ObjectPtr< FutureWork_obj > _result_ = new FutureWork_obj();
	_result_->__construct();
	return _result_;}

Dynamic FutureWork_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< FutureWork_obj > _result_ = new FutureWork_obj();
	_result_->__construct();
	return _result_;}

::lime::_system::ThreadPool FutureWork_obj::threadPool;

Void FutureWork_obj::queue( Dynamic state){
{
		::lime::_system::ThreadPool tmp = ::lime::app::_Future::FutureWork_obj::threadPool;
		bool tmp1 = (tmp == null());
		if ((tmp1)){
			::lime::_system::ThreadPool tmp2 = ::lime::_system::ThreadPool_obj::__new(null(),null());
			::lime::app::_Future::FutureWork_obj::threadPool = tmp2;
			::lime::_system::ThreadPool tmp3 = ::lime::app::_Future::FutureWork_obj::threadPool;
			Dynamic tmp4 = ::lime::app::_Future::FutureWork_obj::threadPool_doWork_dyn();
			tmp3->__Field(HX_HCSTRING("doWork","\xfc","\xa6","\x00","\x1f"), hx::paccDynamic )->__Field(HX_HCSTRING("add","\x21","\xf2","\x49","\x00"), hx::paccDynamic )(tmp4,null(),null());
			::lime::_system::ThreadPool tmp5 = ::lime::app::_Future::FutureWork_obj::threadPool;
			Dynamic tmp6 = ::lime::app::_Future::FutureWork_obj::threadPool_onComplete_dyn();
			tmp5->__Field(HX_HCSTRING("onComplete","\xf8","\xd4","\x7e","\x5d"), hx::paccDynamic )->__Field(HX_HCSTRING("add","\x21","\xf2","\x49","\x00"), hx::paccDynamic )(tmp6,null(),null());
			::lime::_system::ThreadPool tmp7 = ::lime::app::_Future::FutureWork_obj::threadPool;
			Dynamic tmp8 = ::lime::app::_Future::FutureWork_obj::threadPool_onError_dyn();
			tmp7->__Field(HX_HCSTRING("onError","\x29","\x6a","\x67","\x09"), hx::paccDynamic )->__Field(HX_HCSTRING("add","\x21","\xf2","\x49","\x00"), hx::paccDynamic )(tmp8,null(),null());
		}
		::lime::_system::ThreadPool tmp2 = ::lime::app::_Future::FutureWork_obj::threadPool;
		Dynamic tmp3 = state;
		tmp2->__Field(HX_HCSTRING("queue","\x91","\x8d","\xea","\x5d"), hx::paccDynamic )(tmp3);
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(FutureWork_obj,queue,(void))

Void FutureWork_obj::threadPool_doWork( Dynamic state){
{
		try
		{
		HX_STACK_CATCHABLE(Dynamic, 0);
		{
			Dynamic tmp = state->__Field(HX_HCSTRING("work","\xd1","\x01","\xfd","\x4e"), hx::paccDynamic )();
			Dynamic result = tmp;
			::lime::_system::ThreadPool tmp1 = ::lime::app::_Future::FutureWork_obj::threadPool;
			struct _Function_2_1{
				inline static Dynamic Block( Dynamic &result,Dynamic &state){
					{
						hx::Anon __result = hx::Anon_obj::Create();
						__result->Add(HX_HCSTRING("promise","\x9b","\xcd","\xe9","\xf7") , state->__Field(HX_HCSTRING("promise","\x9b","\xcd","\xe9","\xf7"), hx::paccDynamic ),false);
						__result->Add(HX_HCSTRING("result","\xdd","\x68","\x84","\x08") , result,false);
						return __result;
					}
					return null();
				}
			};
			Dynamic tmp2 = _Function_2_1::Block(result,state);
			tmp1->__Field(HX_HCSTRING("sendComplete","\x21","\xd2","\x84","\xc0"), hx::paccDynamic )(tmp2);
		}
		}
		catch(Dynamic __e){
			{
				HX_STACK_BEGIN_CATCH
				Dynamic e = __e;{
					::lime::_system::ThreadPool tmp = ::lime::app::_Future::FutureWork_obj::threadPool;
					struct _Function_2_1{
						inline static Dynamic Block( Dynamic &e,Dynamic &state){
							{
								hx::Anon __result = hx::Anon_obj::Create();
								__result->Add(HX_HCSTRING("promise","\x9b","\xcd","\xe9","\xf7") , state->__Field(HX_HCSTRING("promise","\x9b","\xcd","\xe9","\xf7"), hx::paccDynamic ),false);
								__result->Add(HX_HCSTRING("error","\xc8","\xcb","\x29","\x73") , e,false);
								return __result;
							}
							return null();
						}
					};
					Dynamic tmp1 = _Function_2_1::Block(e,state);
					tmp->__Field(HX_HCSTRING("sendError","\x60","\x89","\x99","\x33"), hx::paccDynamic )(tmp1);
				}
			}
		}
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(FutureWork_obj,threadPool_doWork,(void))

Void FutureWork_obj::threadPool_onComplete( Dynamic state){
{
		state->__Field(HX_HCSTRING("promise","\x9b","\xcd","\xe9","\xf7"), hx::paccDynamic )->__Field(HX_HCSTRING("complete","\xb9","\x00","\xc8","\x7f"), hx::paccDynamic )(state->__Field(HX_HCSTRING("result","\xdd","\x68","\x84","\x08"), hx::paccDynamic ));
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(FutureWork_obj,threadPool_onComplete,(void))

Void FutureWork_obj::threadPool_onError( Dynamic state){
{
		state->__Field(HX_HCSTRING("promise","\x9b","\xcd","\xe9","\xf7"), hx::paccDynamic )->__Field(HX_HCSTRING("error","\xc8","\xcb","\x29","\x73"), hx::paccDynamic )(state->__Field(HX_HCSTRING("error","\xc8","\xcb","\x29","\x73"), hx::paccDynamic ));
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(FutureWork_obj,threadPool_onError,(void))


FutureWork_obj::FutureWork_obj()
{
}

bool FutureWork_obj::__GetStatic(const ::String &inName, Dynamic &outValue, hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"queue") ) { outValue = queue_dyn(); return true;  }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"threadPool") ) { outValue = threadPool; return true;  }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"threadPool_doWork") ) { outValue = threadPool_doWork_dyn(); return true;  }
		break;
	case 18:
		if (HX_FIELD_EQ(inName,"threadPool_onError") ) { outValue = threadPool_onError_dyn(); return true;  }
		break;
	case 21:
		if (HX_FIELD_EQ(inName,"threadPool_onComplete") ) { outValue = threadPool_onComplete_dyn(); return true;  }
	}
	return false;
}

bool FutureWork_obj::__SetStatic(const ::String &inName,Dynamic &ioValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 10:
		if (HX_FIELD_EQ(inName,"threadPool") ) { threadPool=ioValue.Cast< ::lime::_system::ThreadPool >(); return true; }
	}
	return false;
}

#if HXCPP_SCRIPTABLE
static hx::StorageInfo *sMemberStorageInfo = 0;
static hx::StaticInfo sStaticStorageInfo[] = {
	{hx::fsObject /*::lime::_system::ThreadPool*/ ,(void *) &FutureWork_obj::threadPool,HX_HCSTRING("threadPool","\xc6","\x54","\x25","\x46")},
	{ hx::fsUnknown, 0, null()}
};
#endif

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(FutureWork_obj::__mClass,"__mClass");
	HX_MARK_MEMBER_NAME(FutureWork_obj::threadPool,"threadPool");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(FutureWork_obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(FutureWork_obj::threadPool,"threadPool");
};

#endif

hx::Class FutureWork_obj::__mClass;

static ::String sStaticFields[] = {
	HX_HCSTRING("threadPool","\xc6","\x54","\x25","\x46"),
	HX_HCSTRING("queue","\x91","\x8d","\xea","\x5d"),
	HX_HCSTRING("threadPool_doWork","\x95","\x28","\x69","\x50"),
	HX_HCSTRING("threadPool_onComplete","\x11","\x97","\x0a","\x2c"),
	HX_HCSTRING("threadPool_onError","\x70","\x4e","\x70","\x13"),
	::String(null()) };

void FutureWork_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("lime.app._Future.FutureWork","\xa6","\x58","\x06","\x6f");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &FutureWork_obj::__GetStatic;
	__mClass->mSetStaticField = &FutureWork_obj::__SetStatic;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(sStaticFields);
	__mClass->mMembers = hx::Class_obj::dupFunctions(0 /* sMemberFields */);
	__mClass->mCanCast = hx::TCanCast< FutureWork_obj >;
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

} // end namespace lime
} // end namespace app
} // end namespace _Future
