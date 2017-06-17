#include <hxcpp.h>

#ifndef INCLUDED_Sys
#include <Sys.h>
#endif
#ifndef INCLUDED_lime_app_Future
#include <lime/app/Future.h>
#endif
#ifndef INCLUDED_lime_app_Promise
#include <lime/app/Promise.h>
#endif
#ifndef INCLUDED_lime_app__Event_Dynamic_Void
#include <lime/app/_Event_Dynamic_Void.h>
#endif
#ifndef INCLUDED_lime_app__Event_Int_Int_Void
#include <lime/app/_Event_Int_Int_Void.h>
#endif
#ifndef INCLUDED_lime_app__Event_ofEvents_T_Void
#include <lime/app/_Event_ofEvents_T_Void.h>
#endif
#ifndef INCLUDED_lime_app__Future_FutureWork
#include <lime/app/_Future/FutureWork.h>
#endif
#ifndef INCLUDED_lime_system_System
#include <lime/system/System.h>
#endif
namespace lime{
namespace app{

Void Future_obj::__construct(Dynamic work,hx::Null< bool >  __o_async)
{
bool async = __o_async.Default(false);
{
	bool tmp = (work != null());
	if ((tmp)){
		bool tmp1 = async;
		if ((tmp1)){
			::lime::app::Promise tmp2 = ::lime::app::Promise_obj::__new();
			::lime::app::Promise promise = tmp2;
			promise->future = hx::ObjectPtr<OBJ_>(this);
			struct _Function_3_1{
				inline static Dynamic Block( ::lime::app::Promise &promise,Dynamic &work){
					{
						hx::Anon __result = hx::Anon_obj::Create();
						__result->Add(HX_HCSTRING("promise","\x9b","\xcd","\xe9","\xf7") , promise,false);
						__result->Add(HX_HCSTRING("work","\xd1","\x01","\xfd","\x4e") , work,false);
						return __result;
					}
					return null();
				}
			};
			Dynamic tmp3 = _Function_3_1::Block(promise,work);
			::lime::app::_Future::FutureWork_obj::queue(tmp3);
		}
		else{
			try
			{
			HX_STACK_CATCHABLE(Dynamic, 0);
			{
				Dynamic tmp2 = work();
				this->value = tmp2;
				this->isComplete = true;
			}
			}
			catch(Dynamic __e){
				{
					HX_STACK_BEGIN_CATCH
					Dynamic e = __e;{
						this->error = e;
						this->isError = true;
					}
				}
			}
		}
	}
}
;
	return null();
}

//Future_obj::~Future_obj() { }

Dynamic Future_obj::__CreateEmpty() { return  new Future_obj; }
hx::ObjectPtr< Future_obj > Future_obj::__new(Dynamic work,hx::Null< bool >  __o_async)
{  hx::ObjectPtr< Future_obj > _result_ = new Future_obj();
	_result_->__construct(work,__o_async);
	return _result_;}

Dynamic Future_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< Future_obj > _result_ = new Future_obj();
	_result_->__construct(inArgs[0],inArgs[1]);
	return _result_;}

::lime::app::Future Future_obj::onComplete( Dynamic listener){
	bool tmp = (listener != null());
	if ((tmp)){
		bool tmp1 = this->isComplete;
		if ((tmp1)){
			Dynamic tmp2 = this->value;
			listener(tmp2).Cast< Void >();
		}
		else{
			bool tmp2 = this->isError;
			bool tmp3 = !(tmp2);
			if ((tmp3)){
				bool tmp4 = (this->__completeListeners == null());
				if ((tmp4)){
					this->__completeListeners = Dynamic( Array_obj<Dynamic>::__new() );
				}
				Dynamic tmp5 = listener;
				this->__completeListeners->__Field(HX_HCSTRING("push","\xda","\x11","\x61","\x4a"), hx::paccDynamic )(tmp5);
			}
		}
	}
	return hx::ObjectPtr<OBJ_>(this);
}


HX_DEFINE_DYNAMIC_FUNC1(Future_obj,onComplete,return )

::lime::app::Future Future_obj::onError( Dynamic listener){
	bool tmp = (listener != null());
	if ((tmp)){
		bool tmp1 = this->isError;
		if ((tmp1)){
			Dynamic tmp2 = this->error;
			listener(tmp2).Cast< Void >();
		}
		else{
			bool tmp2 = this->isComplete;
			bool tmp3 = !(tmp2);
			if ((tmp3)){
				bool tmp4 = (this->__errorListeners == null());
				if ((tmp4)){
					this->__errorListeners = Dynamic( Array_obj<Dynamic>::__new() );
				}
				Dynamic tmp5 = listener;
				this->__errorListeners->__Field(HX_HCSTRING("push","\xda","\x11","\x61","\x4a"), hx::paccDynamic )(tmp5);
			}
		}
	}
	return hx::ObjectPtr<OBJ_>(this);
}


HX_DEFINE_DYNAMIC_FUNC1(Future_obj,onError,return )

::lime::app::Future Future_obj::onProgress( Dynamic listener){
	bool tmp = (listener != null());
	if ((tmp)){
		bool tmp1 = (this->__progressListeners == null());
		if ((tmp1)){
			this->__progressListeners = Dynamic( Array_obj<Dynamic>::__new() );
		}
		Dynamic tmp2 = listener;
		this->__progressListeners->__Field(HX_HCSTRING("push","\xda","\x11","\x61","\x4a"), hx::paccDynamic )(tmp2);
	}
	return hx::ObjectPtr<OBJ_>(this);
}


HX_DEFINE_DYNAMIC_FUNC1(Future_obj,onProgress,return )

::lime::app::Future Future_obj::ready( hx::Null< int >  __o_waitTime){
int waitTime = __o_waitTime.Default(-1);
{
		bool tmp = this->isComplete;
		bool tmp1 = !(tmp);
		bool tmp2;
		if ((tmp1)){
			tmp2 = this->isError;
		}
		else{
			tmp2 = true;
		}
		if ((tmp2)){
			return hx::ObjectPtr<OBJ_>(this);
		}
		else{
			int tmp3 = ::lime::_system::System_obj::getTimer();
			int time = tmp3;
			int tmp4 = (time + waitTime);
			int end = tmp4;
			while((true)){
				bool tmp5 = this->isComplete;
				bool tmp6 = tmp5;
				bool tmp7 = !(tmp6);
				bool tmp8 = tmp7;
				bool tmp9;
				if ((tmp8)){
					bool tmp10 = this->isError;
					bool tmp11 = tmp10;
					bool tmp12 = tmp11;
					bool tmp13 = tmp12;
					bool tmp14 = tmp13;
					tmp9 = !(tmp14);
				}
				else{
					tmp9 = false;
				}
				bool tmp10;
				if ((tmp9)){
					tmp10 = (time <= end);
				}
				else{
					tmp10 = false;
				}
				bool tmp11 = !(tmp10);
				if ((tmp11)){
					break;
				}
				::Sys_obj::sleep(((Float)0.01));
				int tmp12 = ::lime::_system::System_obj::getTimer();
				time = tmp12;
			}
			return hx::ObjectPtr<OBJ_>(this);
		}
		return null();
	}
}


HX_DEFINE_DYNAMIC_FUNC1(Future_obj,ready,return )

Dynamic Future_obj::result( hx::Null< int >  __o_waitTime){
int waitTime = __o_waitTime.Default(-1);
{
		int tmp = waitTime;
		this->ready(tmp);
		bool tmp1 = this->isComplete;
		if ((tmp1)){
			Dynamic tmp2 = this->value;
			return tmp2;
		}
		else{
			return null();
		}
		return null();
	}
}


HX_DEFINE_DYNAMIC_FUNC1(Future_obj,result,return )

::lime::app::Future Future_obj::then( Dynamic next){
	bool tmp = this->isComplete;
	if ((tmp)){
		Dynamic tmp1 = this->value;
		::lime::app::Future tmp2 = next(tmp1).Cast< ::lime::app::Future >();
		return tmp2;
	}
	else{
		bool tmp1 = this->isError;
		if ((tmp1)){
			::lime::app::Future tmp2 = ::lime::app::Future_obj::__new(null(),null());
			::lime::app::Future future = tmp2;
			Dynamic tmp3 = this->error;
			future->onError(tmp3);
			::lime::app::Future tmp4 = future;
			return tmp4;
		}
		else{
			::lime::app::Promise tmp2 = ::lime::app::Promise_obj::__new();
			::lime::app::Promise promise = tmp2;
			Dynamic tmp3 = promise->error_dyn();
			this->onError(tmp3);
			Dynamic tmp4 = promise->progress_dyn();
			this->onProgress(tmp4);

			HX_BEGIN_LOCAL_FUNC_S2(hx::LocalFunc,_Function_3_1,::lime::app::Promise,promise,Dynamic,next)
			int __ArgCount() const { return 1; }
			Void run(Dynamic val){
				{
					Dynamic tmp5 = val;
					::lime::app::Future tmp6 = next(tmp5).Cast< ::lime::app::Future >();
					::lime::app::Future future = tmp6;
					Dynamic tmp7 = promise->error_dyn();
					future->onError(tmp7);
					Dynamic tmp8 = promise->complete_dyn();
					future->onComplete(tmp8);
				}
				return null();
			}
			HX_END_LOCAL_FUNC1((void))

			this->onComplete( Dynamic(new _Function_3_1(promise,next)));
			::lime::app::Future tmp5 = promise->future;
			return tmp5;
		}
	}
	return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Future_obj,then,return )

::lime::app::Future Future_obj::ofEvents( ::lime::app::_Event_ofEvents_T_Void onComplete,::lime::app::_Event_Dynamic_Void onError,::lime::app::_Event_Int_Int_Void onProgress){
	::lime::app::Promise tmp = ::lime::app::Promise_obj::__new();
	::lime::app::Promise promise = tmp;

	HX_BEGIN_LOCAL_FUNC_S1(hx::LocalFunc,_Function_1_1,::lime::app::Promise,promise)
	int __ArgCount() const { return 1; }
	Void run(Dynamic data){
		{
			Dynamic tmp1 = data;
			promise->complete(tmp1);
		}
		return null();
	}
	HX_END_LOCAL_FUNC1((void))

	onComplete->add( Dynamic(new _Function_1_1(promise)),true,null());
	bool tmp1 = (onError != null());
	if ((tmp1)){

		HX_BEGIN_LOCAL_FUNC_S1(hx::LocalFunc,_Function_2_1,::lime::app::Promise,promise)
		int __ArgCount() const { return 1; }
		Void run(Dynamic error){
			{
				Dynamic tmp2 = error;
				promise->error(tmp2);
			}
			return null();
		}
		HX_END_LOCAL_FUNC1((void))

		onError->add( Dynamic(new _Function_2_1(promise)),true,null());
	}
	bool tmp2 = (onProgress != null());
	if ((tmp2)){

		HX_BEGIN_LOCAL_FUNC_S1(hx::LocalFunc,_Function_2_1,::lime::app::Promise,promise)
		int __ArgCount() const { return 2; }
		Void run(int progress,int total){
			{
				int tmp3 = progress;
				int tmp4 = total;
				promise->progress(tmp3,tmp4);
			}
			return null();
		}
		HX_END_LOCAL_FUNC2((void))

		onProgress->add( Dynamic(new _Function_2_1(promise)),true,null());
	}
	::lime::app::Future tmp3 = promise->future;
	return tmp3;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC3(Future_obj,ofEvents,return )

::lime::app::Future Future_obj::withError( Dynamic error){
	::lime::app::Future tmp = ::lime::app::Future_obj::__new(null(),null());
	::lime::app::Future future = tmp;
	future->isError = true;
	future->error = error;
	::lime::app::Future tmp1 = future;
	return tmp1;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Future_obj,withError,return )

::lime::app::Future Future_obj::withValue( Dynamic value){
	::lime::app::Future tmp = ::lime::app::Future_obj::__new(null(),null());
	::lime::app::Future future = tmp;
	future->isComplete = true;
	future->value = value;
	::lime::app::Future tmp1 = future;
	return tmp1;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Future_obj,withValue,return )


Future_obj::Future_obj()
{
}

void Future_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(Future);
	HX_MARK_MEMBER_NAME(error,"error");
	HX_MARK_MEMBER_NAME(isComplete,"isComplete");
	HX_MARK_MEMBER_NAME(isError,"isError");
	HX_MARK_MEMBER_NAME(value,"value");
	HX_MARK_MEMBER_NAME(__completeListeners,"__completeListeners");
	HX_MARK_MEMBER_NAME(__errorListeners,"__errorListeners");
	HX_MARK_MEMBER_NAME(__progressListeners,"__progressListeners");
	HX_MARK_END_CLASS();
}

void Future_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(error,"error");
	HX_VISIT_MEMBER_NAME(isComplete,"isComplete");
	HX_VISIT_MEMBER_NAME(isError,"isError");
	HX_VISIT_MEMBER_NAME(value,"value");
	HX_VISIT_MEMBER_NAME(__completeListeners,"__completeListeners");
	HX_VISIT_MEMBER_NAME(__errorListeners,"__errorListeners");
	HX_VISIT_MEMBER_NAME(__progressListeners,"__progressListeners");
}

Dynamic Future_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"then") ) { return then_dyn(); }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"error") ) { return error; }
		if (HX_FIELD_EQ(inName,"value") ) { return value; }
		if (HX_FIELD_EQ(inName,"ready") ) { return ready_dyn(); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"result") ) { return result_dyn(); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"isError") ) { return isError; }
		if (HX_FIELD_EQ(inName,"onError") ) { return onError_dyn(); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"isComplete") ) { return isComplete; }
		if (HX_FIELD_EQ(inName,"onComplete") ) { return onComplete_dyn(); }
		if (HX_FIELD_EQ(inName,"onProgress") ) { return onProgress_dyn(); }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"__errorListeners") ) { return __errorListeners; }
		break;
	case 19:
		if (HX_FIELD_EQ(inName,"__completeListeners") ) { return __completeListeners; }
		if (HX_FIELD_EQ(inName,"__progressListeners") ) { return __progressListeners; }
	}
	return super::__Field(inName,inCallProp);
}

bool Future_obj::__GetStatic(const ::String &inName, Dynamic &outValue, hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 8:
		if (HX_FIELD_EQ(inName,"ofEvents") ) { outValue = ofEvents_dyn(); return true;  }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"withError") ) { outValue = withError_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"withValue") ) { outValue = withValue_dyn(); return true;  }
	}
	return false;
}

Dynamic Future_obj::__SetField(const ::String &inName,const Dynamic &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"error") ) { error=inValue.Cast< Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"value") ) { value=inValue.Cast< Dynamic >(); return inValue; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"isError") ) { isError=inValue.Cast< bool >(); return inValue; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"isComplete") ) { isComplete=inValue.Cast< bool >(); return inValue; }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"__errorListeners") ) { __errorListeners=inValue.Cast< cpp::ArrayBase >(); return inValue; }
		break;
	case 19:
		if (HX_FIELD_EQ(inName,"__completeListeners") ) { __completeListeners=inValue.Cast< cpp::ArrayBase >(); return inValue; }
		if (HX_FIELD_EQ(inName,"__progressListeners") ) { __progressListeners=inValue.Cast< cpp::ArrayBase >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void Future_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("error","\xc8","\xcb","\x29","\x73"));
	outFields->push(HX_HCSTRING("isComplete","\xc3","\x12","\x77","\xfa"));
	outFields->push(HX_HCSTRING("isError","\x7e","\x6f","\xaf","\x0f"));
	outFields->push(HX_HCSTRING("value","\x71","\x7f","\xb8","\x31"));
	outFields->push(HX_HCSTRING("__completeListeners","\x66","\x0e","\x5a","\x85"));
	outFields->push(HX_HCSTRING("__errorListeners","\xb7","\x4b","\x93","\x70"));
	outFields->push(HX_HCSTRING("__progressListeners","\xf2","\x98","\xe2","\x78"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsObject /*Dynamic*/ ,(int)offsetof(Future_obj,error),HX_HCSTRING("error","\xc8","\xcb","\x29","\x73")},
	{hx::fsBool,(int)offsetof(Future_obj,isComplete),HX_HCSTRING("isComplete","\xc3","\x12","\x77","\xfa")},
	{hx::fsBool,(int)offsetof(Future_obj,isError),HX_HCSTRING("isError","\x7e","\x6f","\xaf","\x0f")},
	{hx::fsObject /*Dynamic*/ ,(int)offsetof(Future_obj,value),HX_HCSTRING("value","\x71","\x7f","\xb8","\x31")},
	{hx::fsObject /*cpp::ArrayBase*/ ,(int)offsetof(Future_obj,__completeListeners),HX_HCSTRING("__completeListeners","\x66","\x0e","\x5a","\x85")},
	{hx::fsObject /*cpp::ArrayBase*/ ,(int)offsetof(Future_obj,__errorListeners),HX_HCSTRING("__errorListeners","\xb7","\x4b","\x93","\x70")},
	{hx::fsObject /*cpp::ArrayBase*/ ,(int)offsetof(Future_obj,__progressListeners),HX_HCSTRING("__progressListeners","\xf2","\x98","\xe2","\x78")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo *sStaticStorageInfo = 0;
#endif

static ::String sMemberFields[] = {
	HX_HCSTRING("error","\xc8","\xcb","\x29","\x73"),
	HX_HCSTRING("isComplete","\xc3","\x12","\x77","\xfa"),
	HX_HCSTRING("isError","\x7e","\x6f","\xaf","\x0f"),
	HX_HCSTRING("value","\x71","\x7f","\xb8","\x31"),
	HX_HCSTRING("__completeListeners","\x66","\x0e","\x5a","\x85"),
	HX_HCSTRING("__errorListeners","\xb7","\x4b","\x93","\x70"),
	HX_HCSTRING("__progressListeners","\xf2","\x98","\xe2","\x78"),
	HX_HCSTRING("onComplete","\xf8","\xd4","\x7e","\x5d"),
	HX_HCSTRING("onError","\x29","\x6a","\x67","\x09"),
	HX_HCSTRING("onProgress","\xec","\xcb","\xe1","\x63"),
	HX_HCSTRING("ready","\x63","\xa0","\xba","\xe6"),
	HX_HCSTRING("result","\xdd","\x68","\x84","\x08"),
	HX_HCSTRING("then","\xdd","\x02","\xfc","\x4c"),
	::String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(Future_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(Future_obj::__mClass,"__mClass");
};

#endif

hx::Class Future_obj::__mClass;

static ::String sStaticFields[] = {
	HX_HCSTRING("ofEvents","\x90","\x8f","\x6b","\x29"),
	HX_HCSTRING("withError","\xe2","\x2f","\x17","\xf7"),
	HX_HCSTRING("withValue","\x8b","\xe3","\xa5","\xb5"),
	::String(null()) };

void Future_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("lime.app.Future","\x49","\x39","\x57","\xcb");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &Future_obj::__GetStatic;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(sStaticFields);
	__mClass->mMembers = hx::Class_obj::dupFunctions(sMemberFields);
	__mClass->mCanCast = hx::TCanCast< Future_obj >;
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
