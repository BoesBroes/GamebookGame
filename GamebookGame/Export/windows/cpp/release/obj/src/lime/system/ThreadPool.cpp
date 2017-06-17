#include <hxcpp.h>

#ifndef INCLUDED_cpp_vm_Deque
#include <cpp/vm/Deque.h>
#endif
#ifndef INCLUDED_cpp_vm_Thread
#include <cpp/vm/Thread.h>
#endif
#ifndef INCLUDED_lime_app_Application
#include <lime/app/Application.h>
#endif
#ifndef INCLUDED_lime_app_IModule
#include <lime/app/IModule.h>
#endif
#ifndef INCLUDED_lime_app_Module
#include <lime/app/Module.h>
#endif
#ifndef INCLUDED_lime_app__Event_Dynamic_Void
#include <lime/app/_Event_Dynamic_Void.h>
#endif
#ifndef INCLUDED_lime_app__Event_Int_Void
#include <lime/app/_Event_Int_Void.h>
#endif
#ifndef INCLUDED_lime_system_ThreadPool
#include <lime/system/ThreadPool.h>
#endif
#ifndef INCLUDED_lime_system__ThreadPool_ThreadPoolMessage
#include <lime/system/_ThreadPool/ThreadPoolMessage.h>
#endif
#ifndef INCLUDED_lime_system__ThreadPool_ThreadPoolMessageType
#include <lime/system/_ThreadPool/ThreadPoolMessageType.h>
#endif
namespace lime{
namespace _system{

Void ThreadPool_obj::__construct(hx::Null< int >  __o_minThreads,hx::Null< int >  __o_maxThreads)
{
int minThreads = __o_minThreads.Default(0);
int maxThreads = __o_maxThreads.Default(1);
{
	this->__workResult = ::cpp::vm::Deque_obj::__new();
	this->__workIncoming = ::cpp::vm::Deque_obj::__new();
	this->onProgress = ::lime::app::_Event_Dynamic_Void_obj::__new();
	this->onError = ::lime::app::_Event_Dynamic_Void_obj::__new();
	this->onComplete = ::lime::app::_Event_Dynamic_Void_obj::__new();
	this->doWork = ::lime::app::_Event_Dynamic_Void_obj::__new();
	this->minThreads = minThreads;
	this->maxThreads = maxThreads;
	this->currentThreads = (int)0;
	this->__workQueued = (int)0;
	this->__workCompleted = (int)0;
}
;
	return null();
}

//ThreadPool_obj::~ThreadPool_obj() { }

Dynamic ThreadPool_obj::__CreateEmpty() { return  new ThreadPool_obj; }
hx::ObjectPtr< ThreadPool_obj > ThreadPool_obj::__new(hx::Null< int >  __o_minThreads,hx::Null< int >  __o_maxThreads)
{  hx::ObjectPtr< ThreadPool_obj > _result_ = new ThreadPool_obj();
	_result_->__construct(__o_minThreads,__o_maxThreads);
	return _result_;}

Dynamic ThreadPool_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< ThreadPool_obj > _result_ = new ThreadPool_obj();
	_result_->__construct(inArgs[0],inArgs[1]);
	return _result_;}

Void ThreadPool_obj::queue( Dynamic state){
{
		::lime::app::Application tmp = ::lime::app::Application_obj::current;
		bool tmp1 = (tmp != null());
		bool tmp2;
		if ((tmp1)){
			bool tmp3 = this->__synchronous;
			bool tmp4 = tmp3;
			bool tmp5 = tmp4;
			tmp2 = !(tmp5);
		}
		else{
			tmp2 = false;
		}
		if ((tmp2)){
			::cpp::vm::Deque tmp3 = this->__workIncoming;
			::lime::_system::_ThreadPool::ThreadPoolMessage tmp4 = ::lime::_system::_ThreadPool::ThreadPoolMessage_obj::__new(::lime::_system::_ThreadPool::ThreadPoolMessageType_obj::WORK,state);
			tmp3->add(tmp4);
			(this->__workQueued)++;
			int tmp5 = this->currentThreads;
			int tmp6 = this->maxThreads;
			bool tmp7 = (tmp5 < tmp6);
			bool tmp8;
			if ((tmp7)){
				int tmp9 = this->currentThreads;
				int tmp10 = tmp9;
				int tmp11 = this->__workQueued;
				int tmp12 = tmp11;
				int tmp13 = this->__workCompleted;
				int tmp14 = tmp13;
				int tmp15 = (tmp12 - tmp14);
				int tmp16 = tmp15;
				tmp8 = (tmp10 < tmp16);
			}
			else{
				tmp8 = false;
			}
			if ((tmp8)){
				(this->currentThreads)++;
				Dynamic tmp9 = this->__doWork_dyn();
				::cpp::vm::Thread_obj::create(tmp9);
			}
			::lime::app::Application tmp9 = ::lime::app::Application_obj::current;
			Dynamic tmp10 = this->__update_dyn();
			bool tmp11 = tmp9->onUpdate->has(tmp10);
			bool tmp12 = !(tmp11);
			if ((tmp12)){
				::lime::app::Application tmp13 = ::lime::app::Application_obj::current;
				Dynamic tmp14 = this->__update_dyn();
				tmp13->onUpdate->add(tmp14,null(),null());
			}
		}
		else{
			this->__synchronous = true;
			::lime::app::_Event_Dynamic_Void tmp3 = this->doWork;
			Dynamic tmp4 = state;
			tmp3->dispatch(tmp4);
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(ThreadPool_obj,queue,(void))

Void ThreadPool_obj::sendComplete( Dynamic state){
{
		bool tmp = this->__synchronous;
		bool tmp1 = !(tmp);
		if ((tmp1)){
			::cpp::vm::Deque tmp2 = this->__workResult;
			::lime::_system::_ThreadPool::ThreadPoolMessage tmp3 = ::lime::_system::_ThreadPool::ThreadPoolMessage_obj::__new(::lime::_system::_ThreadPool::ThreadPoolMessageType_obj::COMPLETE,state);
			tmp2->add(tmp3);
			return null();
		}
		::lime::app::_Event_Dynamic_Void tmp2 = this->onComplete;
		Dynamic tmp3 = state;
		tmp2->dispatch(tmp3);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(ThreadPool_obj,sendComplete,(void))

Void ThreadPool_obj::sendError( Dynamic state){
{
		bool tmp = this->__synchronous;
		bool tmp1 = !(tmp);
		if ((tmp1)){
			::cpp::vm::Deque tmp2 = this->__workResult;
			::lime::_system::_ThreadPool::ThreadPoolMessage tmp3 = ::lime::_system::_ThreadPool::ThreadPoolMessage_obj::__new(::lime::_system::_ThreadPool::ThreadPoolMessageType_obj::ERROR,state);
			tmp2->add(tmp3);
			return null();
		}
		::lime::app::_Event_Dynamic_Void tmp2 = this->onError;
		Dynamic tmp3 = state;
		tmp2->dispatch(tmp3);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(ThreadPool_obj,sendError,(void))

Void ThreadPool_obj::sendProgress( Dynamic state){
{
		bool tmp = this->__synchronous;
		bool tmp1 = !(tmp);
		if ((tmp1)){
			::cpp::vm::Deque tmp2 = this->__workResult;
			::lime::_system::_ThreadPool::ThreadPoolMessage tmp3 = ::lime::_system::_ThreadPool::ThreadPoolMessage_obj::__new(::lime::_system::_ThreadPool::ThreadPoolMessageType_obj::PROGRESS,state);
			tmp2->add(tmp3);
			return null();
		}
		::lime::app::_Event_Dynamic_Void tmp2 = this->onProgress;
		Dynamic tmp3 = state;
		tmp2->dispatch(tmp3);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(ThreadPool_obj,sendProgress,(void))

Void ThreadPool_obj::__doWork( ){
{
		while((true)){
			::cpp::vm::Deque tmp = this->__workIncoming;
			::lime::_system::_ThreadPool::ThreadPoolMessage tmp1 = tmp->pop(true);
			::lime::_system::_ThreadPool::ThreadPoolMessage message = tmp1;
			bool tmp2 = (message->__Field(HX_HCSTRING("type","\xba","\xf2","\x08","\x4d"), hx::paccDynamic ) == ::lime::_system::_ThreadPool::ThreadPoolMessageType_obj::WORK);
			if ((tmp2)){
				::lime::app::_Event_Dynamic_Void tmp3 = this->doWork;
				Dynamic tmp4 = message->__Field(HX_HCSTRING("state","\x11","\x76","\x0b","\x84"), hx::paccDynamic );
				tmp3->dispatch(tmp4);
			}
			else{
				bool tmp3 = (message->__Field(HX_HCSTRING("type","\xba","\xf2","\x08","\x4d"), hx::paccDynamic ) == ::lime::_system::_ThreadPool::ThreadPoolMessageType_obj::EXIT);
				if ((tmp3)){
					break;
				}
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(ThreadPool_obj,__doWork,(void))

Void ThreadPool_obj::__update( int deltaTime){
{
		int tmp = this->__workQueued;
		int tmp1 = this->__workCompleted;
		bool tmp2 = (tmp > tmp1);
		if ((tmp2)){
			::cpp::vm::Deque tmp3 = this->__workResult;
			::lime::_system::_ThreadPool::ThreadPoolMessage tmp4 = tmp3->pop(false);
			::lime::_system::_ThreadPool::ThreadPoolMessage message = tmp4;
			while((true)){
				bool tmp5 = (message != null());
				bool tmp6 = !(tmp5);
				if ((tmp6)){
					break;
				}
				{
					::lime::_system::_ThreadPool::ThreadPoolMessageType _g = message->__Field(HX_HCSTRING("type","\xba","\xf2","\x08","\x4d"), hx::paccDynamic );
					switch( (int)(_g->__Index())){
						case (int)3: {
							::lime::app::_Event_Dynamic_Void tmp7 = this->onProgress;
							Dynamic tmp8 = message->__Field(HX_HCSTRING("state","\x11","\x76","\x0b","\x84"), hx::paccDynamic );
							tmp7->dispatch(tmp8);
						}
						;break;
						case (int)0: case (int)1: {
							(this->__workCompleted)++;
							int tmp7 = this->currentThreads;
							int tmp8 = this->__workQueued;
							int tmp9 = this->__workCompleted;
							int tmp10 = (tmp8 - tmp9);
							bool tmp11 = (tmp7 > tmp10);
							bool tmp12 = !(tmp11);
							bool tmp13;
							if ((tmp12)){
								int tmp14 = this->currentThreads;
								int tmp15 = tmp14;
								int tmp16 = this->maxThreads;
								int tmp17 = tmp16;
								tmp13 = (tmp15 > tmp17);
							}
							else{
								tmp13 = true;
							}
							if ((tmp13)){
								(this->currentThreads)--;
								::cpp::vm::Deque tmp14 = this->__workIncoming;
								::lime::_system::_ThreadPool::ThreadPoolMessage tmp15 = ::lime::_system::_ThreadPool::ThreadPoolMessage_obj::__new(::lime::_system::_ThreadPool::ThreadPoolMessageType_obj::EXIT,null());
								tmp14->add(tmp15);
							}
							bool tmp14 = (message->__Field(HX_HCSTRING("type","\xba","\xf2","\x08","\x4d"), hx::paccDynamic ) == ::lime::_system::_ThreadPool::ThreadPoolMessageType_obj::COMPLETE);
							if ((tmp14)){
								::lime::app::_Event_Dynamic_Void tmp15 = this->onComplete;
								Dynamic tmp16 = message->__Field(HX_HCSTRING("state","\x11","\x76","\x0b","\x84"), hx::paccDynamic );
								tmp15->dispatch(tmp16);
							}
							else{
								::lime::app::_Event_Dynamic_Void tmp15 = this->onError;
								Dynamic tmp16 = message->__Field(HX_HCSTRING("state","\x11","\x76","\x0b","\x84"), hx::paccDynamic );
								tmp15->dispatch(tmp16);
							}
						}
						;break;
						default: {
						}
					}
				}
				::cpp::vm::Deque tmp7 = this->__workResult;
				::lime::_system::_ThreadPool::ThreadPoolMessage tmp8 = tmp7->pop(false);
				message = tmp8;
			}
		}
		else{
			int tmp3 = this->currentThreads;
			bool tmp4 = (tmp3 == (int)0);
			bool tmp5;
			if ((tmp4)){
				int tmp6 = this->minThreads;
				int tmp7 = tmp6;
				tmp5 = (tmp7 <= (int)0);
			}
			else{
				tmp5 = false;
			}
			if ((tmp5)){
				::lime::app::Application tmp6 = ::lime::app::Application_obj::current;
				Dynamic tmp7 = this->__update_dyn();
				tmp6->onUpdate->remove(tmp7);
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(ThreadPool_obj,__update,(void))


ThreadPool_obj::ThreadPool_obj()
{
}

void ThreadPool_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(ThreadPool);
	HX_MARK_MEMBER_NAME(currentThreads,"currentThreads");
	HX_MARK_MEMBER_NAME(doWork,"doWork");
	HX_MARK_MEMBER_NAME(maxThreads,"maxThreads");
	HX_MARK_MEMBER_NAME(minThreads,"minThreads");
	HX_MARK_MEMBER_NAME(onComplete,"onComplete");
	HX_MARK_MEMBER_NAME(onError,"onError");
	HX_MARK_MEMBER_NAME(onProgress,"onProgress");
	HX_MARK_MEMBER_NAME(__synchronous,"__synchronous");
	HX_MARK_MEMBER_NAME(__workCompleted,"__workCompleted");
	HX_MARK_MEMBER_NAME(__workIncoming,"__workIncoming");
	HX_MARK_MEMBER_NAME(__workQueued,"__workQueued");
	HX_MARK_MEMBER_NAME(__workResult,"__workResult");
	HX_MARK_END_CLASS();
}

void ThreadPool_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(currentThreads,"currentThreads");
	HX_VISIT_MEMBER_NAME(doWork,"doWork");
	HX_VISIT_MEMBER_NAME(maxThreads,"maxThreads");
	HX_VISIT_MEMBER_NAME(minThreads,"minThreads");
	HX_VISIT_MEMBER_NAME(onComplete,"onComplete");
	HX_VISIT_MEMBER_NAME(onError,"onError");
	HX_VISIT_MEMBER_NAME(onProgress,"onProgress");
	HX_VISIT_MEMBER_NAME(__synchronous,"__synchronous");
	HX_VISIT_MEMBER_NAME(__workCompleted,"__workCompleted");
	HX_VISIT_MEMBER_NAME(__workIncoming,"__workIncoming");
	HX_VISIT_MEMBER_NAME(__workQueued,"__workQueued");
	HX_VISIT_MEMBER_NAME(__workResult,"__workResult");
}

Dynamic ThreadPool_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"queue") ) { return queue_dyn(); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"doWork") ) { return doWork; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"onError") ) { return onError; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"__doWork") ) { return __doWork_dyn(); }
		if (HX_FIELD_EQ(inName,"__update") ) { return __update_dyn(); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"sendError") ) { return sendError_dyn(); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"maxThreads") ) { return maxThreads; }
		if (HX_FIELD_EQ(inName,"minThreads") ) { return minThreads; }
		if (HX_FIELD_EQ(inName,"onComplete") ) { return onComplete; }
		if (HX_FIELD_EQ(inName,"onProgress") ) { return onProgress; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"__workQueued") ) { return __workQueued; }
		if (HX_FIELD_EQ(inName,"__workResult") ) { return __workResult; }
		if (HX_FIELD_EQ(inName,"sendComplete") ) { return sendComplete_dyn(); }
		if (HX_FIELD_EQ(inName,"sendProgress") ) { return sendProgress_dyn(); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"__synchronous") ) { return __synchronous; }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"currentThreads") ) { return currentThreads; }
		if (HX_FIELD_EQ(inName,"__workIncoming") ) { return __workIncoming; }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"__workCompleted") ) { return __workCompleted; }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic ThreadPool_obj::__SetField(const ::String &inName,const Dynamic &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 6:
		if (HX_FIELD_EQ(inName,"doWork") ) { doWork=inValue.Cast< ::lime::app::_Event_Dynamic_Void >(); return inValue; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"onError") ) { onError=inValue.Cast< ::lime::app::_Event_Dynamic_Void >(); return inValue; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"maxThreads") ) { maxThreads=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"minThreads") ) { minThreads=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"onComplete") ) { onComplete=inValue.Cast< ::lime::app::_Event_Dynamic_Void >(); return inValue; }
		if (HX_FIELD_EQ(inName,"onProgress") ) { onProgress=inValue.Cast< ::lime::app::_Event_Dynamic_Void >(); return inValue; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"__workQueued") ) { __workQueued=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"__workResult") ) { __workResult=inValue.Cast< ::cpp::vm::Deque >(); return inValue; }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"__synchronous") ) { __synchronous=inValue.Cast< bool >(); return inValue; }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"currentThreads") ) { currentThreads=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"__workIncoming") ) { __workIncoming=inValue.Cast< ::cpp::vm::Deque >(); return inValue; }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"__workCompleted") ) { __workCompleted=inValue.Cast< int >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void ThreadPool_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("currentThreads","\x30","\x6b","\x26","\x61"));
	outFields->push(HX_HCSTRING("doWork","\xfc","\xa6","\x00","\x1f"));
	outFields->push(HX_HCSTRING("maxThreads","\x25","\x70","\xb6","\xbd"));
	outFields->push(HX_HCSTRING("minThreads","\xf7","\x42","\x49","\x19"));
	outFields->push(HX_HCSTRING("onComplete","\xf8","\xd4","\x7e","\x5d"));
	outFields->push(HX_HCSTRING("onError","\x29","\x6a","\x67","\x09"));
	outFields->push(HX_HCSTRING("onProgress","\xec","\xcb","\xe1","\x63"));
	outFields->push(HX_HCSTRING("__synchronous","\x69","\x35","\xbe","\x7d"));
	outFields->push(HX_HCSTRING("__workCompleted","\x5a","\x76","\x64","\x29"));
	outFields->push(HX_HCSTRING("__workIncoming","\xf7","\x3a","\x04","\x52"));
	outFields->push(HX_HCSTRING("__workQueued","\x84","\xf5","\xb2","\xef"));
	outFields->push(HX_HCSTRING("__workResult","\xae","\x0c","\xe6","\x28"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsInt,(int)offsetof(ThreadPool_obj,currentThreads),HX_HCSTRING("currentThreads","\x30","\x6b","\x26","\x61")},
	{hx::fsObject /*::lime::app::_Event_Dynamic_Void*/ ,(int)offsetof(ThreadPool_obj,doWork),HX_HCSTRING("doWork","\xfc","\xa6","\x00","\x1f")},
	{hx::fsInt,(int)offsetof(ThreadPool_obj,maxThreads),HX_HCSTRING("maxThreads","\x25","\x70","\xb6","\xbd")},
	{hx::fsInt,(int)offsetof(ThreadPool_obj,minThreads),HX_HCSTRING("minThreads","\xf7","\x42","\x49","\x19")},
	{hx::fsObject /*::lime::app::_Event_Dynamic_Void*/ ,(int)offsetof(ThreadPool_obj,onComplete),HX_HCSTRING("onComplete","\xf8","\xd4","\x7e","\x5d")},
	{hx::fsObject /*::lime::app::_Event_Dynamic_Void*/ ,(int)offsetof(ThreadPool_obj,onError),HX_HCSTRING("onError","\x29","\x6a","\x67","\x09")},
	{hx::fsObject /*::lime::app::_Event_Dynamic_Void*/ ,(int)offsetof(ThreadPool_obj,onProgress),HX_HCSTRING("onProgress","\xec","\xcb","\xe1","\x63")},
	{hx::fsBool,(int)offsetof(ThreadPool_obj,__synchronous),HX_HCSTRING("__synchronous","\x69","\x35","\xbe","\x7d")},
	{hx::fsInt,(int)offsetof(ThreadPool_obj,__workCompleted),HX_HCSTRING("__workCompleted","\x5a","\x76","\x64","\x29")},
	{hx::fsObject /*::cpp::vm::Deque*/ ,(int)offsetof(ThreadPool_obj,__workIncoming),HX_HCSTRING("__workIncoming","\xf7","\x3a","\x04","\x52")},
	{hx::fsInt,(int)offsetof(ThreadPool_obj,__workQueued),HX_HCSTRING("__workQueued","\x84","\xf5","\xb2","\xef")},
	{hx::fsObject /*::cpp::vm::Deque*/ ,(int)offsetof(ThreadPool_obj,__workResult),HX_HCSTRING("__workResult","\xae","\x0c","\xe6","\x28")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo *sStaticStorageInfo = 0;
#endif

static ::String sMemberFields[] = {
	HX_HCSTRING("currentThreads","\x30","\x6b","\x26","\x61"),
	HX_HCSTRING("doWork","\xfc","\xa6","\x00","\x1f"),
	HX_HCSTRING("maxThreads","\x25","\x70","\xb6","\xbd"),
	HX_HCSTRING("minThreads","\xf7","\x42","\x49","\x19"),
	HX_HCSTRING("onComplete","\xf8","\xd4","\x7e","\x5d"),
	HX_HCSTRING("onError","\x29","\x6a","\x67","\x09"),
	HX_HCSTRING("onProgress","\xec","\xcb","\xe1","\x63"),
	HX_HCSTRING("__synchronous","\x69","\x35","\xbe","\x7d"),
	HX_HCSTRING("__workCompleted","\x5a","\x76","\x64","\x29"),
	HX_HCSTRING("__workIncoming","\xf7","\x3a","\x04","\x52"),
	HX_HCSTRING("__workQueued","\x84","\xf5","\xb2","\xef"),
	HX_HCSTRING("__workResult","\xae","\x0c","\xe6","\x28"),
	HX_HCSTRING("queue","\x91","\x8d","\xea","\x5d"),
	HX_HCSTRING("sendComplete","\x21","\xd2","\x84","\xc0"),
	HX_HCSTRING("sendError","\x60","\x89","\x99","\x33"),
	HX_HCSTRING("sendProgress","\x15","\xc9","\xe7","\xc6"),
	HX_HCSTRING("__doWork","\x1c","\x12","\x30","\xc7"),
	HX_HCSTRING("__update","\x29","\xf1","\x34","\x2f"),
	::String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(ThreadPool_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(ThreadPool_obj::__mClass,"__mClass");
};

#endif

hx::Class ThreadPool_obj::__mClass;

void ThreadPool_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("lime.system.ThreadPool","\x6c","\x8c","\x6a","\x1a");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = hx::Class_obj::dupFunctions(sMemberFields);
	__mClass->mCanCast = hx::TCanCast< ThreadPool_obj >;
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
} // end namespace system
