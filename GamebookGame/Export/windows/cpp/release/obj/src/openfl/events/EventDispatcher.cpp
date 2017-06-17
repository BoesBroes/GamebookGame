#include <hxcpp.h>

#ifndef INCLUDED_Type
#include <Type.h>
#endif
#ifndef INCLUDED_haxe_IMap
#include <haxe/IMap.h>
#endif
#ifndef INCLUDED_haxe_ds_StringMap
#include <haxe/ds/StringMap.h>
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
#ifndef INCLUDED_openfl_events__EventDispatcher_DispatchIterator
#include <openfl/events/_EventDispatcher/DispatchIterator.h>
#endif
#ifndef INCLUDED_openfl_events__EventDispatcher_Listener
#include <openfl/events/_EventDispatcher/Listener.h>
#endif
namespace openfl{
namespace events{

Void EventDispatcher_obj::__construct(::openfl::events::IEventDispatcher target)
{
{
	bool tmp = (target != null());
	if ((tmp)){
		this->__targetDispatcher = target;
	}
}
;
	return null();
}

//EventDispatcher_obj::~EventDispatcher_obj() { }

Dynamic EventDispatcher_obj::__CreateEmpty() { return  new EventDispatcher_obj; }
hx::ObjectPtr< EventDispatcher_obj > EventDispatcher_obj::__new(::openfl::events::IEventDispatcher target)
{  hx::ObjectPtr< EventDispatcher_obj > _result_ = new EventDispatcher_obj();
	_result_->__construct(target);
	return _result_;}

Dynamic EventDispatcher_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< EventDispatcher_obj > _result_ = new EventDispatcher_obj();
	_result_->__construct(inArgs[0]);
	return _result_;}

hx::Object *EventDispatcher_obj::__ToInterface(const hx::type_info &inType) {
	if (inType==typeid( ::openfl::events::IEventDispatcher_obj)) return operator ::openfl::events::IEventDispatcher_obj *();
	return super::__ToInterface(inType);
}

EventDispatcher_obj::operator ::openfl::events::IEventDispatcher_obj *()
	{ return new ::openfl::events::IEventDispatcher_delegate_< EventDispatcher_obj >(this); }
Void EventDispatcher_obj::addEventListener( ::String type,Dynamic listener,hx::Null< bool >  __o_useCapture,hx::Null< int >  __o_priority,hx::Null< bool >  __o_useWeakReference){
bool useCapture = __o_useCapture.Default(false);
int priority = __o_priority.Default(0);
bool useWeakReference = __o_useWeakReference.Default(false);
{
		bool tmp = (listener == null());
		if ((tmp)){
			return null();
		}
		::haxe::ds::StringMap tmp1 = this->__eventMap;
		bool tmp2 = (tmp1 == null());
		if ((tmp2)){
			::haxe::ds::StringMap tmp3 = ::haxe::ds::StringMap_obj::__new();
			this->__eventMap = tmp3;
			::haxe::ds::StringMap tmp4 = ::haxe::ds::StringMap_obj::__new();
			this->__iterators = tmp4;
		}
		::haxe::ds::StringMap tmp3 = this->__eventMap;
		::String tmp4 = type;
		bool tmp5 = tmp3->exists(tmp4);
		bool tmp6 = !(tmp5);
		if ((tmp6)){
			Array< ::Dynamic > list = Array_obj< ::Dynamic >::__new();
			::openfl::events::_EventDispatcher::Listener tmp7 = ::openfl::events::_EventDispatcher::Listener_obj::__new(listener,useCapture,priority);
			list->push(tmp7);
			::openfl::events::_EventDispatcher::DispatchIterator tmp8 = ::openfl::events::_EventDispatcher::DispatchIterator_obj::__new(list);
			::openfl::events::_EventDispatcher::DispatchIterator iterator = tmp8;
			::haxe::ds::StringMap tmp9 = this->__eventMap;
			::String tmp10 = type;
			tmp9->set(tmp10,list);
			::haxe::ds::StringMap tmp11 = this->__iterators;
			::String tmp12 = type;
			tmp11->set(tmp12,Array_obj< ::Dynamic >::__new().Add(iterator));
		}
		else{
			::haxe::ds::StringMap tmp7 = this->__eventMap;
			::String tmp8 = type;
			Array< ::Dynamic > list = ((Array< ::Dynamic >)(tmp7->get(tmp8)));
			{
				int _g1 = (int)0;
				int _g = list->length;
				while((true)){
					bool tmp9 = (_g1 < _g);
					bool tmp10 = !(tmp9);
					if ((tmp10)){
						break;
					}
					int tmp11 = (_g1)++;
					int i = tmp11;
					::openfl::events::_EventDispatcher::Listener tmp12 = list->__get(i).StaticCast< ::openfl::events::_EventDispatcher::Listener >();
					Dynamic tmp13 = listener;
					bool tmp14 = useCapture;
					bool tmp15 = tmp12->match(tmp13,tmp14);
					if ((tmp15)){
						return null();
					}
				}
			}
			::haxe::ds::StringMap tmp9 = this->__iterators;
			::String tmp10 = type;
			Array< ::Dynamic > iterators = ((Array< ::Dynamic >)(tmp9->get(tmp10)));
			{
				int _g = (int)0;
				while((true)){
					bool tmp11 = (_g < iterators->length);
					bool tmp12 = !(tmp11);
					if ((tmp12)){
						break;
					}
					::openfl::events::_EventDispatcher::DispatchIterator tmp13 = iterators->__get(_g).StaticCast< ::openfl::events::_EventDispatcher::DispatchIterator >();
					::openfl::events::_EventDispatcher::DispatchIterator iterator = tmp13;
					++(_g);
					bool tmp14 = iterator->active;
					if ((tmp14)){
						iterator->copy();
					}
				}
			}
			::openfl::events::_EventDispatcher::Listener tmp11 = ::openfl::events::_EventDispatcher::Listener_obj::__new(listener,useCapture,priority);
			list->push(tmp11);
			Dynamic tmp12 = ::openfl::events::EventDispatcher_obj::__sortByPriority_dyn();
			list->sort(tmp12);
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC5(EventDispatcher_obj,addEventListener,(void))

bool EventDispatcher_obj::dispatchEvent( ::openfl::events::Event event){
	::openfl::events::IEventDispatcher tmp = this->__targetDispatcher;
	bool tmp1 = (tmp != null());
	if ((tmp1)){
		::openfl::events::IEventDispatcher tmp2 = this->__targetDispatcher;
		event->target = tmp2;
	}
	else{
		event->target = hx::ObjectPtr<OBJ_>(this);
	}
	::openfl::events::Event tmp2 = event;
	bool tmp3 = this->__dispatchEvent(tmp2);
	return tmp3;
}


HX_DEFINE_DYNAMIC_FUNC1(EventDispatcher_obj,dispatchEvent,return )

bool EventDispatcher_obj::hasEventListener( ::String type){
	::haxe::ds::StringMap tmp = this->__eventMap;
	bool tmp1 = (tmp == null());
	if ((tmp1)){
		return false;
	}
	::haxe::ds::StringMap tmp2 = this->__eventMap;
	::String tmp3 = type;
	bool tmp4 = tmp2->exists(tmp3);
	return tmp4;
}


HX_DEFINE_DYNAMIC_FUNC1(EventDispatcher_obj,hasEventListener,return )

Void EventDispatcher_obj::removeEventListener( ::String type,Dynamic listener,hx::Null< bool >  __o_useCapture){
bool useCapture = __o_useCapture.Default(false);
{
		::haxe::ds::StringMap tmp = this->__eventMap;
		bool tmp1 = (tmp == null());
		bool tmp2 = !(tmp1);
		bool tmp3;
		if ((tmp2)){
			tmp3 = (listener == null());
		}
		else{
			tmp3 = true;
		}
		if ((tmp3)){
			return null();
		}
		::haxe::ds::StringMap tmp4 = this->__eventMap;
		::String tmp5 = type;
		Array< ::Dynamic > list = ((Array< ::Dynamic >)(tmp4->get(tmp5)));
		bool tmp6 = (list == null());
		if ((tmp6)){
			return null();
		}
		::haxe::ds::StringMap tmp7 = this->__iterators;
		::String tmp8 = type;
		Array< ::Dynamic > iterators = ((Array< ::Dynamic >)(tmp7->get(tmp8)));
		{
			int _g1 = (int)0;
			int _g = list->length;
			while((true)){
				bool tmp9 = (_g1 < _g);
				bool tmp10 = !(tmp9);
				if ((tmp10)){
					break;
				}
				int tmp11 = (_g1)++;
				int i = tmp11;
				::openfl::events::_EventDispatcher::Listener tmp12 = list->__get(i).StaticCast< ::openfl::events::_EventDispatcher::Listener >();
				Dynamic tmp13 = listener;
				bool tmp14 = useCapture;
				bool tmp15 = tmp12->match(tmp13,tmp14);
				if ((tmp15)){
					{
						int _g2 = (int)0;
						while((true)){
							bool tmp16 = (_g2 < iterators->length);
							bool tmp17 = !(tmp16);
							if ((tmp17)){
								break;
							}
							::openfl::events::_EventDispatcher::DispatchIterator tmp18 = iterators->__get(_g2).StaticCast< ::openfl::events::_EventDispatcher::DispatchIterator >();
							::openfl::events::_EventDispatcher::DispatchIterator iterator = tmp18;
							++(_g2);
							::openfl::events::_EventDispatcher::Listener tmp19 = list->__get(i).StaticCast< ::openfl::events::_EventDispatcher::Listener >();
							int tmp20 = i;
							iterator->remove(tmp19,tmp20);
						}
					}
					int tmp16 = i;
					list->splice(tmp16,(int)1);
					break;
				}
			}
		}
		bool tmp9 = (list->length == (int)0);
		if ((tmp9)){
			::haxe::ds::StringMap tmp10 = this->__eventMap;
			::String tmp11 = type;
			tmp10->remove(tmp11);
			::haxe::ds::StringMap tmp12 = this->__iterators;
			::String tmp13 = type;
			tmp12->remove(tmp13);
		}
		::haxe::ds::StringMap tmp10 = this->__eventMap;
		Dynamic tmp11 = tmp10->iterator();
		bool tmp12 = tmp11->__Field(HX_HCSTRING("hasNext","\x6d","\xa5","\x46","\x18"), hx::paccDynamic )();
		bool tmp13 = !(tmp12);
		if ((tmp13)){
			this->__eventMap = null();
			this->__iterators = null();
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC3(EventDispatcher_obj,removeEventListener,(void))

::String EventDispatcher_obj::toString( ){
	::hx::Class tmp = ::Type_obj::getClass(hx::ObjectPtr<OBJ_>(this));
	::String tmp1 = ::Type_obj::getClassName(tmp);
	::String full = tmp1;
	::String tmp2 = full.split(HX_HCSTRING(".","\x2e","\x00","\x00","\x00"))->pop();
	::String _short = tmp2;
	::String tmp3 = (HX_HCSTRING("[object ","\x86","\xf9","\x3d","\xd7") + _short);
	::String tmp4 = (tmp3 + HX_HCSTRING("]","\x5d","\x00","\x00","\x00"));
	return tmp4;
}


HX_DEFINE_DYNAMIC_FUNC0(EventDispatcher_obj,toString,return )

bool EventDispatcher_obj::willTrigger( ::String type){
	::String tmp = type;
	bool tmp1 = this->hasEventListener(tmp);
	return tmp1;
}


HX_DEFINE_DYNAMIC_FUNC1(EventDispatcher_obj,willTrigger,return )

bool EventDispatcher_obj::__dispatchEvent( ::openfl::events::Event event){
	::haxe::ds::StringMap tmp = this->__eventMap;
	bool tmp1 = (tmp == null());
	bool tmp2 = !(tmp1);
	bool tmp3;
	if ((tmp2)){
		tmp3 = (event == null());
	}
	else{
		tmp3 = true;
	}
	if ((tmp3)){
		return true;
	}
	::String type = event->type;
	::haxe::ds::StringMap tmp4 = this->__eventMap;
	::String tmp5 = type;
	Array< ::Dynamic > list = ((Array< ::Dynamic >)(tmp4->get(tmp5)));
	bool tmp6 = (list == null());
	if ((tmp6)){
		return true;
	}
	bool tmp7 = (event->target == null());
	if ((tmp7)){
		::openfl::events::IEventDispatcher tmp8 = this->__targetDispatcher;
		bool tmp9 = (tmp8 != null());
		if ((tmp9)){
			::openfl::events::IEventDispatcher tmp10 = this->__targetDispatcher;
			event->target = tmp10;
		}
		else{
			event->target = hx::ObjectPtr<OBJ_>(this);
		}
	}
	event->currentTarget = hx::ObjectPtr<OBJ_>(this);
	bool tmp8 = (event->eventPhase == (int)1);
	bool capture = tmp8;
	int index = (int)0;
	::haxe::ds::StringMap tmp9 = this->__iterators;
	::String tmp10 = type;
	Array< ::Dynamic > iterators = ((Array< ::Dynamic >)(tmp9->get(tmp10)));
	::openfl::events::_EventDispatcher::DispatchIterator tmp11 = iterators->__get((int)0).StaticCast< ::openfl::events::_EventDispatcher::DispatchIterator >();
	::openfl::events::_EventDispatcher::DispatchIterator iterator = tmp11;
	bool tmp12 = iterator->active;
	if ((tmp12)){
		::openfl::events::_EventDispatcher::DispatchIterator tmp13 = ::openfl::events::_EventDispatcher::DispatchIterator_obj::__new(list);
		iterator = tmp13;
		::openfl::events::_EventDispatcher::DispatchIterator tmp14 = iterator;
		iterators->push(tmp14);
	}
	iterator->reset(list);
	::openfl::events::_EventDispatcher::DispatchIterator tmp13 = iterator;
	for(::cpp::FastIterator_obj< ::openfl::events::_EventDispatcher::Listener > *__it = ::cpp::CreateFastIterator< ::openfl::events::_EventDispatcher::Listener >(tmp13);  __it->hasNext(); ){
		::openfl::events::_EventDispatcher::Listener listener = __it->next();
		{
			bool tmp14 = (listener == null());
			if ((tmp14)){
				continue;
			}
			bool tmp15 = (listener->useCapture == capture);
			if ((tmp15)){
				::openfl::events::Event tmp16 = event;
				listener->callback(tmp16);
				bool tmp17 = event->__isCanceledNow;
				if ((tmp17)){
					break;
				}
			}
		}
;
	}
	::openfl::events::_EventDispatcher::DispatchIterator tmp14 = iterator;
	::openfl::events::_EventDispatcher::DispatchIterator tmp15 = iterators->__get((int)0).StaticCast< ::openfl::events::_EventDispatcher::DispatchIterator >();
	bool tmp16 = (tmp14 != tmp15);
	if ((tmp16)){
		::openfl::events::_EventDispatcher::DispatchIterator tmp17 = iterator;
		iterators->remove(tmp17);
	}
	return true;
}


HX_DEFINE_DYNAMIC_FUNC1(EventDispatcher_obj,__dispatchEvent,return )

int EventDispatcher_obj::__sortByPriority( ::openfl::events::_EventDispatcher::Listener l1,::openfl::events::_EventDispatcher::Listener l2){
	bool tmp = (l1->priority == l2->priority);
	int tmp1;
	if ((tmp)){
		tmp1 = (int)0;
	}
	else{
		bool tmp2 = (l1->priority > l2->priority);
		if ((tmp2)){
			tmp1 = (int)-1;
		}
		else{
			tmp1 = (int)1;
		}
	}
	return tmp1;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(EventDispatcher_obj,__sortByPriority,return )


EventDispatcher_obj::EventDispatcher_obj()
{
}

void EventDispatcher_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(EventDispatcher);
	HX_MARK_MEMBER_NAME(__eventMap,"__eventMap");
	HX_MARK_MEMBER_NAME(__iterators,"__iterators");
	HX_MARK_MEMBER_NAME(__targetDispatcher,"__targetDispatcher");
	HX_MARK_END_CLASS();
}

void EventDispatcher_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(__eventMap,"__eventMap");
	HX_VISIT_MEMBER_NAME(__iterators,"__iterators");
	HX_VISIT_MEMBER_NAME(__targetDispatcher,"__targetDispatcher");
}

Dynamic EventDispatcher_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 8:
		if (HX_FIELD_EQ(inName,"toString") ) { return toString_dyn(); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"__eventMap") ) { return __eventMap; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"__iterators") ) { return __iterators; }
		if (HX_FIELD_EQ(inName,"willTrigger") ) { return willTrigger_dyn(); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"dispatchEvent") ) { return dispatchEvent_dyn(); }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"__dispatchEvent") ) { return __dispatchEvent_dyn(); }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"addEventListener") ) { return addEventListener_dyn(); }
		if (HX_FIELD_EQ(inName,"hasEventListener") ) { return hasEventListener_dyn(); }
		break;
	case 18:
		if (HX_FIELD_EQ(inName,"__targetDispatcher") ) { return __targetDispatcher; }
		break;
	case 19:
		if (HX_FIELD_EQ(inName,"removeEventListener") ) { return removeEventListener_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

bool EventDispatcher_obj::__GetStatic(const ::String &inName, Dynamic &outValue, hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 16:
		if (HX_FIELD_EQ(inName,"__sortByPriority") ) { outValue = __sortByPriority_dyn(); return true;  }
	}
	return false;
}

Dynamic EventDispatcher_obj::__SetField(const ::String &inName,const Dynamic &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 10:
		if (HX_FIELD_EQ(inName,"__eventMap") ) { __eventMap=inValue.Cast< ::haxe::ds::StringMap >(); return inValue; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"__iterators") ) { __iterators=inValue.Cast< ::haxe::ds::StringMap >(); return inValue; }
		break;
	case 18:
		if (HX_FIELD_EQ(inName,"__targetDispatcher") ) { __targetDispatcher=inValue.Cast< ::openfl::events::IEventDispatcher >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void EventDispatcher_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("__eventMap","\xc2","\xf9","\x0a","\x64"));
	outFields->push(HX_HCSTRING("__iterators","\xa5","\xaf","\x92","\xc1"));
	outFields->push(HX_HCSTRING("__targetDispatcher","\x78","\x03","\x5d","\x88"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsObject /*::haxe::ds::StringMap*/ ,(int)offsetof(EventDispatcher_obj,__eventMap),HX_HCSTRING("__eventMap","\xc2","\xf9","\x0a","\x64")},
	{hx::fsObject /*::haxe::ds::StringMap*/ ,(int)offsetof(EventDispatcher_obj,__iterators),HX_HCSTRING("__iterators","\xa5","\xaf","\x92","\xc1")},
	{hx::fsObject /*::openfl::events::IEventDispatcher*/ ,(int)offsetof(EventDispatcher_obj,__targetDispatcher),HX_HCSTRING("__targetDispatcher","\x78","\x03","\x5d","\x88")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo *sStaticStorageInfo = 0;
#endif

static ::String sMemberFields[] = {
	HX_HCSTRING("__eventMap","\xc2","\xf9","\x0a","\x64"),
	HX_HCSTRING("__iterators","\xa5","\xaf","\x92","\xc1"),
	HX_HCSTRING("__targetDispatcher","\x78","\x03","\x5d","\x88"),
	HX_HCSTRING("addEventListener","\xcd","\x0b","\x64","\xf1"),
	HX_HCSTRING("dispatchEvent","\x00","\xc7","\x64","\xc6"),
	HX_HCSTRING("hasEventListener","\xf4","\x2e","\xea","\x0c"),
	HX_HCSTRING("removeEventListener","\xca","\x87","\x75","\x55"),
	HX_HCSTRING("toString","\xac","\xd0","\x6e","\x38"),
	HX_HCSTRING("willTrigger","\x46","\xf4","\x3f","\xd8"),
	HX_HCSTRING("__dispatchEvent","\xe0","\xff","\x16","\x4e"),
	::String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(EventDispatcher_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(EventDispatcher_obj::__mClass,"__mClass");
};

#endif

hx::Class EventDispatcher_obj::__mClass;

static ::String sStaticFields[] = {
	HX_HCSTRING("__sortByPriority","\x79","\x94","\xd7","\x6e"),
	::String(null()) };

void EventDispatcher_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("openfl.events.EventDispatcher","\x0a","\xd8","\x08","\xc2");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &EventDispatcher_obj::__GetStatic;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(sStaticFields);
	__mClass->mMembers = hx::Class_obj::dupFunctions(sMemberFields);
	__mClass->mCanCast = hx::TCanCast< EventDispatcher_obj >;
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
} // end namespace events
