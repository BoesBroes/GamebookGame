#include <hxcpp.h>

#ifndef INCLUDED_Reflect
#include <Reflect.h>
#endif
#ifndef INCLUDED_lime_app_Event
#include <lime/app/Event.h>
#endif
namespace lime{
namespace app{

Void Event_obj::__construct()
{
{
	this->canceled = false;
	this->__listeners = Dynamic( Array_obj<Dynamic>::__new() );
	this->__priorities = Array_obj< int >::__new();
	this->__repeat = Array_obj< bool >::__new();
}
;
	return null();
}

//Event_obj::~Event_obj() { }

Dynamic Event_obj::__CreateEmpty() { return  new Event_obj; }
hx::ObjectPtr< Event_obj > Event_obj::__new()
{  hx::ObjectPtr< Event_obj > _result_ = new Event_obj();
	_result_->__construct();
	return _result_;}

Dynamic Event_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< Event_obj > _result_ = new Event_obj();
	_result_->__construct();
	return _result_;}

Void Event_obj::add( Dynamic listener,hx::Null< bool >  __o_once,hx::Null< int >  __o_priority){
bool once = __o_once.Default(false);
int priority = __o_priority.Default(0);
{
		{
			int _g1 = (int)0;
			int tmp = this->__priorities->length;
			int _g = tmp;
			while((true)){
				bool tmp1 = (_g1 < _g);
				bool tmp2 = !(tmp1);
				if ((tmp2)){
					break;
				}
				int tmp3 = (_g1)++;
				int i = tmp3;
				int tmp4 = priority;
				int tmp5 = this->__priorities->__get(i);
				bool tmp6 = (tmp4 > tmp5);
				if ((tmp6)){
					int tmp7 = i;
					Dynamic tmp8 = listener;
					this->__listeners->__Field(HX_HCSTRING("insert","\x39","\x43","\xdd","\x9d"), hx::paccDynamic )(tmp7,tmp8);
					int tmp9 = i;
					int tmp10 = priority;
					this->__priorities->insert(tmp9,tmp10);
					int tmp11 = i;
					bool tmp12 = once;
					bool tmp13 = !(tmp12);
					this->__repeat->insert(tmp11,tmp13);
					return null();
				}
			}
		}
		Dynamic tmp = listener;
		this->__listeners->__Field(HX_HCSTRING("push","\xda","\x11","\x61","\x4a"), hx::paccDynamic )(tmp);
		int tmp1 = priority;
		this->__priorities->push(tmp1);
		bool tmp2 = once;
		bool tmp3 = !(tmp2);
		this->__repeat->push(tmp3);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC3(Event_obj,add,(void))

Void Event_obj::cancel( ){
{
		this->canceled = true;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(Event_obj,cancel,(void))

bool Event_obj::has( Dynamic listener){
	{
		int _g = (int)0;
		cpp::ArrayBase _g1 = this->__listeners;
		while((true)){
			bool tmp = (_g < _g1->__Field(HX_HCSTRING("length","\xe6","\x94","\x07","\x9f"), hx::paccDynamic ));
			bool tmp1 = !(tmp);
			if ((tmp1)){
				break;
			}
			Dynamic tmp2 = _g1->__GetItem(_g);
			Dynamic l = tmp2;
			++(_g);
			Dynamic tmp3 = l;
			Dynamic tmp4 = listener;
			bool tmp5 = ::Reflect_obj::compareMethods(tmp3,tmp4);
			if ((tmp5)){
				return true;
			}
		}
	}
	return false;
}


HX_DEFINE_DYNAMIC_FUNC1(Event_obj,has,return )

Void Event_obj::remove( Dynamic listener){
{
		int tmp = this->__listeners->__Field(HX_HCSTRING("length","\xe6","\x94","\x07","\x9f"), hx::paccDynamic );
		int i = tmp;
		while((true)){
			int tmp1 = --(i);
			bool tmp2 = (tmp1 >= (int)0);
			bool tmp3 = !(tmp2);
			if ((tmp3)){
				break;
			}
			Dynamic tmp4 = this->__listeners->__GetItem(i);
			Dynamic tmp5 = listener;
			bool tmp6 = ::Reflect_obj::compareMethods(tmp4,tmp5);
			if ((tmp6)){
				int tmp7 = i;
				this->__listeners->__Field(HX_HCSTRING("splice","\x7c","\x85","\x9e","\xbf"), hx::paccDynamic )(tmp7,(int)1);
				int tmp8 = i;
				this->__priorities->splice(tmp8,(int)1);
				int tmp9 = i;
				this->__repeat->splice(tmp9,(int)1);
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Event_obj,remove,(void))


Event_obj::Event_obj()
{
}

void Event_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(Event);
	HX_MARK_MEMBER_NAME(canceled,"canceled");
	HX_MARK_MEMBER_NAME(__listeners,"__listeners");
	HX_MARK_MEMBER_NAME(__repeat,"__repeat");
	HX_MARK_MEMBER_NAME(__priorities,"__priorities");
	HX_MARK_MEMBER_NAME(dispatch,"dispatch");
	HX_MARK_END_CLASS();
}

void Event_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(canceled,"canceled");
	HX_VISIT_MEMBER_NAME(__listeners,"__listeners");
	HX_VISIT_MEMBER_NAME(__repeat,"__repeat");
	HX_VISIT_MEMBER_NAME(__priorities,"__priorities");
	HX_VISIT_MEMBER_NAME(dispatch,"dispatch");
}

Dynamic Event_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"add") ) { return add_dyn(); }
		if (HX_FIELD_EQ(inName,"has") ) { return has_dyn(); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"cancel") ) { return cancel_dyn(); }
		if (HX_FIELD_EQ(inName,"remove") ) { return remove_dyn(); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"canceled") ) { return canceled; }
		if (HX_FIELD_EQ(inName,"__repeat") ) { return __repeat; }
		if (HX_FIELD_EQ(inName,"dispatch") ) { return dispatch; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"__listeners") ) { return __listeners; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"__priorities") ) { return __priorities; }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic Event_obj::__SetField(const ::String &inName,const Dynamic &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 8:
		if (HX_FIELD_EQ(inName,"canceled") ) { canceled=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"__repeat") ) { __repeat=inValue.Cast< Array< bool > >(); return inValue; }
		if (HX_FIELD_EQ(inName,"dispatch") ) { dispatch=inValue.Cast< Dynamic >(); return inValue; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"__listeners") ) { __listeners=inValue.Cast< cpp::ArrayBase >(); return inValue; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"__priorities") ) { __priorities=inValue.Cast< Array< int > >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void Event_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("canceled","\x59","\x18","\x26","\x1f"));
	outFields->push(HX_HCSTRING("__listeners","\x5f","\xae","\xba","\x21"));
	outFields->push(HX_HCSTRING("__repeat","\x7b","\x02","\xac","\xae"));
	outFields->push(HX_HCSTRING("__priorities","\xe2","\xcb","\xe6","\x1c"));
	outFields->push(HX_HCSTRING("dispatch","\xba","\xce","\x63","\x1e"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsBool,(int)offsetof(Event_obj,canceled),HX_HCSTRING("canceled","\x59","\x18","\x26","\x1f")},
	{hx::fsObject /*cpp::ArrayBase*/ ,(int)offsetof(Event_obj,__listeners),HX_HCSTRING("__listeners","\x5f","\xae","\xba","\x21")},
	{hx::fsObject /*Array< bool >*/ ,(int)offsetof(Event_obj,__repeat),HX_HCSTRING("__repeat","\x7b","\x02","\xac","\xae")},
	{hx::fsObject /*Array< int >*/ ,(int)offsetof(Event_obj,__priorities),HX_HCSTRING("__priorities","\xe2","\xcb","\xe6","\x1c")},
	{hx::fsObject /*Dynamic*/ ,(int)offsetof(Event_obj,dispatch),HX_HCSTRING("dispatch","\xba","\xce","\x63","\x1e")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo *sStaticStorageInfo = 0;
#endif

static ::String sMemberFields[] = {
	HX_HCSTRING("canceled","\x59","\x18","\x26","\x1f"),
	HX_HCSTRING("__listeners","\x5f","\xae","\xba","\x21"),
	HX_HCSTRING("__repeat","\x7b","\x02","\xac","\xae"),
	HX_HCSTRING("__priorities","\xe2","\xcb","\xe6","\x1c"),
	HX_HCSTRING("add","\x21","\xf2","\x49","\x00"),
	HX_HCSTRING("cancel","\x7a","\xed","\x33","\xb8"),
	HX_HCSTRING("dispatch","\xba","\xce","\x63","\x1e"),
	HX_HCSTRING("has","\x5a","\x3f","\x4f","\x00"),
	HX_HCSTRING("remove","\x44","\x9c","\x88","\x04"),
	::String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(Event_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(Event_obj::__mClass,"__mClass");
};

#endif

hx::Class Event_obj::__mClass;

void Event_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("lime.app.Event","\xd4","\xa9","\x01","\xb3");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = hx::Class_obj::dupFunctions(sMemberFields);
	__mClass->mCanCast = hx::TCanCast< Event_obj >;
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
