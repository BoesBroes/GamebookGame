#ifndef INCLUDED_lime_system__ThreadPool_ThreadPoolMessageType
#define INCLUDED_lime_system__ThreadPool_ThreadPoolMessageType

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS3(lime,_system,_ThreadPool,ThreadPoolMessageType)
namespace lime{
namespace _system{
namespace _ThreadPool{


class ThreadPoolMessageType_obj : public hx::EnumBase_obj
{
	typedef hx::EnumBase_obj super;
		typedef ThreadPoolMessageType_obj OBJ_;

	public:
		ThreadPoolMessageType_obj() {};
		HX_DO_ENUM_RTTI;
		static void __boot();
		static void __register();
		::String GetEnumName( ) const { return HX_HCSTRING("lime.system._ThreadPool.ThreadPoolMessageType","\xec","\x6c","\x62","\xb0"); }
		::String __ToString() const { return HX_HCSTRING("ThreadPoolMessageType.","\xf3","\xbe","\x69","\x35") + tag; }

		static ::lime::_system::_ThreadPool::ThreadPoolMessageType COMPLETE;
		static inline ::lime::_system::_ThreadPool::ThreadPoolMessageType COMPLETE_dyn() { return COMPLETE; }
		static ::lime::_system::_ThreadPool::ThreadPoolMessageType ERROR;
		static inline ::lime::_system::_ThreadPool::ThreadPoolMessageType ERROR_dyn() { return ERROR; }
		static ::lime::_system::_ThreadPool::ThreadPoolMessageType EXIT;
		static inline ::lime::_system::_ThreadPool::ThreadPoolMessageType EXIT_dyn() { return EXIT; }
		static ::lime::_system::_ThreadPool::ThreadPoolMessageType PROGRESS;
		static inline ::lime::_system::_ThreadPool::ThreadPoolMessageType PROGRESS_dyn() { return PROGRESS; }
		static ::lime::_system::_ThreadPool::ThreadPoolMessageType WORK;
		static inline ::lime::_system::_ThreadPool::ThreadPoolMessageType WORK_dyn() { return WORK; }
};

} // end namespace lime
} // end namespace system
} // end namespace _ThreadPool

#endif /* INCLUDED_lime_system__ThreadPool_ThreadPoolMessageType */ 
