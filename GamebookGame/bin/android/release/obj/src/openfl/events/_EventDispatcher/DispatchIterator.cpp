#include <hxcpp.h>

#ifndef INCLUDED_openfl_events__EventDispatcher_DispatchIterator
#include <openfl/events/_EventDispatcher/DispatchIterator.h>
#endif
#ifndef INCLUDED_openfl_events__EventDispatcher_Listener
#include <openfl/events/_EventDispatcher/Listener.h>
#endif
namespace openfl{
namespace events{
namespace _EventDispatcher{

Void DispatchIterator_obj::__construct(Array< ::Dynamic > list)
{
{
	this->list = list;
	this->index = list->length;
}
;
	return null();
}

//DispatchIterator_obj::~DispatchIterator_obj() { }

Dynamic DispatchIterator_obj::__CreateEmpty() { return  new DispatchIterator_obj; }
hx::ObjectPtr< DispatchIterator_obj > DispatchIterator_obj::__new(Array< ::Dynamic > list)
{  hx::ObjectPtr< DispatchIterator_obj > _result_ = new DispatchIterator_obj();
	_result_->__construct(list);
	return _result_;}

Dynamic DispatchIterator_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< DispatchIterator_obj > _result_ = new DispatchIterator_obj();
	_result_->__construct(inArgs[0]);
	return _result_;}

Void DispatchIterator_obj::copy( ){
{
		int tmp = this->index;
		int tmp1 = this->list->length;
		bool tmp2 = (tmp < tmp1);
		bool tmp3;
		if ((tmp2)){
			bool tmp4 = this->isCopy;
			bool tmp5 = tmp4;
			bool tmp6 = tmp5;
			tmp3 = !(tmp6);
		}
		else{
			tmp3 = false;
		}
		if ((tmp3)){
			this->list = this->list->copy();
			this->isCopy = true;
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(DispatchIterator_obj,copy,(void))

bool DispatchIterator_obj::hasNext( ){
	int tmp = this->index;
	int tmp1 = this->list->length;
	bool tmp2 = (tmp < tmp1);
	if ((tmp2)){
		return true;
	}
	else{
		this->active = false;
		return false;
	}
	return false;
}


HX_DEFINE_DYNAMIC_FUNC0(DispatchIterator_obj,hasNext,return )

::openfl::events::_EventDispatcher::Listener DispatchIterator_obj::next( ){
	int tmp = (this->index)++;
	::openfl::events::_EventDispatcher::Listener tmp1 = this->list->__get(tmp).StaticCast< ::openfl::events::_EventDispatcher::Listener >();
	return tmp1;
}


HX_DEFINE_DYNAMIC_FUNC0(DispatchIterator_obj,next,return )

Void DispatchIterator_obj::remove( ::openfl::events::_EventDispatcher::Listener listener,int listIndex){
{
		bool tmp = this->active;
		if ((tmp)){
			bool tmp1 = this->isCopy;
			bool tmp2 = !(tmp1);
			if ((tmp2)){
				int tmp3 = listIndex;
				int tmp4 = this->index;
				bool tmp5 = (tmp3 < tmp4);
				if ((tmp5)){
					(this->index)--;
				}
			}
			else{
				int tmp3 = this->index;
				int _g1 = tmp3;
				int tmp4 = this->list->length;
				int _g = tmp4;
				while((true)){
					bool tmp5 = (_g1 < _g);
					bool tmp6 = !(tmp5);
					if ((tmp6)){
						break;
					}
					int tmp7 = (_g1)++;
					int i = tmp7;
					::openfl::events::_EventDispatcher::Listener tmp8 = this->list->__get(i).StaticCast< ::openfl::events::_EventDispatcher::Listener >();
					::openfl::events::_EventDispatcher::Listener tmp9 = listener;
					bool tmp10 = (tmp8 == tmp9);
					if ((tmp10)){
						int tmp11 = i;
						this->list->splice(tmp11,(int)1);
						break;
					}
				}
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(DispatchIterator_obj,remove,(void))

Void DispatchIterator_obj::reset( Array< ::Dynamic > list){
{
		this->list = list;
		this->active = true;
		this->index = (int)0;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(DispatchIterator_obj,reset,(void))


DispatchIterator_obj::DispatchIterator_obj()
{
}

void DispatchIterator_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(DispatchIterator);
	HX_MARK_MEMBER_NAME(active,"active");
	HX_MARK_MEMBER_NAME(index,"index");
	HX_MARK_MEMBER_NAME(isCopy,"isCopy");
	HX_MARK_MEMBER_NAME(list,"list");
	HX_MARK_END_CLASS();
}

void DispatchIterator_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(active,"active");
	HX_VISIT_MEMBER_NAME(index,"index");
	HX_VISIT_MEMBER_NAME(isCopy,"isCopy");
	HX_VISIT_MEMBER_NAME(list,"list");
}

Dynamic DispatchIterator_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"list") ) { return list; }
		if (HX_FIELD_EQ(inName,"copy") ) { return copy_dyn(); }
		if (HX_FIELD_EQ(inName,"next") ) { return next_dyn(); }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"index") ) { return index; }
		if (HX_FIELD_EQ(inName,"reset") ) { return reset_dyn(); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"active") ) { return active; }
		if (HX_FIELD_EQ(inName,"isCopy") ) { return isCopy; }
		if (HX_FIELD_EQ(inName,"remove") ) { return remove_dyn(); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"hasNext") ) { return hasNext_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic DispatchIterator_obj::__SetField(const ::String &inName,const Dynamic &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"list") ) { list=inValue.Cast< Array< ::Dynamic > >(); return inValue; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"index") ) { index=inValue.Cast< int >(); return inValue; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"active") ) { active=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"isCopy") ) { isCopy=inValue.Cast< bool >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void DispatchIterator_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("active","\xc6","\x41","\x46","\x16"));
	outFields->push(HX_HCSTRING("index","\x12","\x9b","\x14","\xbe"));
	outFields->push(HX_HCSTRING("isCopy","\xbf","\x80","\x2b","\x5f"));
	outFields->push(HX_HCSTRING("list","\x5e","\x1c","\xb3","\x47"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsBool,(int)offsetof(DispatchIterator_obj,active),HX_HCSTRING("active","\xc6","\x41","\x46","\x16")},
	{hx::fsInt,(int)offsetof(DispatchIterator_obj,index),HX_HCSTRING("index","\x12","\x9b","\x14","\xbe")},
	{hx::fsBool,(int)offsetof(DispatchIterator_obj,isCopy),HX_HCSTRING("isCopy","\xbf","\x80","\x2b","\x5f")},
	{hx::fsObject /*Array< ::Dynamic >*/ ,(int)offsetof(DispatchIterator_obj,list),HX_HCSTRING("list","\x5e","\x1c","\xb3","\x47")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo *sStaticStorageInfo = 0;
#endif

static ::String sMemberFields[] = {
	HX_HCSTRING("active","\xc6","\x41","\x46","\x16"),
	HX_HCSTRING("index","\x12","\x9b","\x14","\xbe"),
	HX_HCSTRING("isCopy","\xbf","\x80","\x2b","\x5f"),
	HX_HCSTRING("list","\x5e","\x1c","\xb3","\x47"),
	HX_HCSTRING("copy","\xb5","\xbb","\xc4","\x41"),
	HX_HCSTRING("hasNext","\x6d","\xa5","\x46","\x18"),
	HX_HCSTRING("next","\xf3","\x84","\x02","\x49"),
	HX_HCSTRING("remove","\x44","\x9c","\x88","\x04"),
	HX_HCSTRING("reset","\xcf","\x49","\xc8","\xe6"),
	::String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(DispatchIterator_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(DispatchIterator_obj::__mClass,"__mClass");
};

#endif

hx::Class DispatchIterator_obj::__mClass;

void DispatchIterator_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("openfl.events._EventDispatcher.DispatchIterator","\x1d","\xf4","\x5d","\x6d");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = hx::Class_obj::dupFunctions(sMemberFields);
	__mClass->mCanCast = hx::TCanCast< DispatchIterator_obj >;
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
} // end namespace _EventDispatcher
