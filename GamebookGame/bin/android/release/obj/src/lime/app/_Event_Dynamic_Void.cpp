#include <hxcpp.h>

#ifndef INCLUDED_Reflect
#include <Reflect.h>
#endif
#ifndef INCLUDED_lime_app__Event_Dynamic_Void
#include <lime/app/_Event_Dynamic_Void.h>
#endif
namespace lime{
namespace app{

Void _Event_Dynamic_Void_obj::__construct()
{
HX_STACK_FRAME("lime.app._Event_Dynamic_Void","new",0xa035b3a4,"lime.app._Event_Dynamic_Void.new","lime/app/Event.hx",31,0xbda45bec)
HX_STACK_THIS(this)
{
	HX_STACK_LINE(34)
	this->canceled = false;
	HX_STACK_LINE(35)
	this->__listeners = Dynamic( Array_obj<Dynamic>::__new() );
	HX_STACK_LINE(36)
	this->__priorities = Array_obj< int >::__new();
	HX_STACK_LINE(37)
	this->__repeat = Array_obj< bool >::__new();
}
;
	return null();
}

//_Event_Dynamic_Void_obj::~_Event_Dynamic_Void_obj() { }

Dynamic _Event_Dynamic_Void_obj::__CreateEmpty() { return  new _Event_Dynamic_Void_obj; }
hx::ObjectPtr< _Event_Dynamic_Void_obj > _Event_Dynamic_Void_obj::__new()
{  hx::ObjectPtr< _Event_Dynamic_Void_obj > _result_ = new _Event_Dynamic_Void_obj();
	_result_->__construct();
	return _result_;}

Dynamic _Event_Dynamic_Void_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< _Event_Dynamic_Void_obj > _result_ = new _Event_Dynamic_Void_obj();
	_result_->__construct();
	return _result_;}

Void _Event_Dynamic_Void_obj::add( Dynamic listener,hx::Null< bool >  __o_once,hx::Null< int >  __o_priority){
bool once = __o_once.Default(false);
int priority = __o_priority.Default(0);
	HX_STACK_FRAME("lime.app._Event_Dynamic_Void","add",0xa02bd565,"lime.app._Event_Dynamic_Void.add","lime/app/Event.hx",43,0xbda45bec)
	HX_STACK_THIS(this)
	HX_STACK_ARG(listener,"listener")
	HX_STACK_ARG(once,"once")
	HX_STACK_ARG(priority,"priority")
{
		HX_STACK_LINE(46)
		{
			HX_STACK_LINE(46)
			int _g1 = (int)0;		HX_STACK_VAR(_g1,"_g1");
			HX_STACK_LINE(46)
			int tmp = this->__priorities->length;		HX_STACK_VAR(tmp,"tmp");
			HX_STACK_LINE(46)
			int _g = tmp;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(46)
			while((true)){
				HX_STACK_LINE(46)
				bool tmp1 = (_g1 < _g);		HX_STACK_VAR(tmp1,"tmp1");
				HX_STACK_LINE(46)
				bool tmp2 = !(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
				HX_STACK_LINE(46)
				if ((tmp2)){
					HX_STACK_LINE(46)
					break;
				}
				HX_STACK_LINE(46)
				int tmp3 = (_g1)++;		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(46)
				int i = tmp3;		HX_STACK_VAR(i,"i");
				HX_STACK_LINE(48)
				int tmp4 = priority;		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(48)
				int tmp5 = this->__priorities->__get(i);		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(48)
				bool tmp6 = (tmp4 > tmp5);		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(48)
				if ((tmp6)){
					HX_STACK_LINE(50)
					int tmp7 = i;		HX_STACK_VAR(tmp7,"tmp7");
					HX_STACK_LINE(50)
					Dynamic tmp8 = listener;		HX_STACK_VAR(tmp8,"tmp8");
					HX_STACK_LINE(50)
					this->__listeners->__Field(HX_HCSTRING("insert","\x39","\x43","\xdd","\x9d"), hx::paccDynamic )(tmp7,tmp8);
					HX_STACK_LINE(51)
					int tmp9 = i;		HX_STACK_VAR(tmp9,"tmp9");
					HX_STACK_LINE(51)
					int tmp10 = priority;		HX_STACK_VAR(tmp10,"tmp10");
					HX_STACK_LINE(51)
					this->__priorities->insert(tmp9,tmp10);
					HX_STACK_LINE(52)
					int tmp11 = i;		HX_STACK_VAR(tmp11,"tmp11");
					HX_STACK_LINE(52)
					bool tmp12 = once;		HX_STACK_VAR(tmp12,"tmp12");
					HX_STACK_LINE(52)
					bool tmp13 = !(tmp12);		HX_STACK_VAR(tmp13,"tmp13");
					HX_STACK_LINE(52)
					this->__repeat->insert(tmp11,tmp13);
					HX_STACK_LINE(53)
					return null();
				}
			}
		}
		HX_STACK_LINE(59)
		Dynamic tmp = listener;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(59)
		this->__listeners->__Field(HX_HCSTRING("push","\xda","\x11","\x61","\x4a"), hx::paccDynamic )(tmp);
		HX_STACK_LINE(60)
		int tmp1 = priority;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(60)
		this->__priorities->push(tmp1);
		HX_STACK_LINE(61)
		bool tmp2 = once;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(61)
		bool tmp3 = !(tmp2);		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(61)
		this->__repeat->push(tmp3);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC3(_Event_Dynamic_Void_obj,add,(void))

Void _Event_Dynamic_Void_obj::cancel( ){
{
		HX_STACK_FRAME("lime.app._Event_Dynamic_Void","cancel",0xb3546cb6,"lime.app._Event_Dynamic_Void.cancel","lime/app/Event.hx",221,0xbda45bec)
		HX_STACK_THIS(this)
		HX_STACK_LINE(221)
		this->canceled = true;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(_Event_Dynamic_Void_obj,cancel,(void))

bool _Event_Dynamic_Void_obj::has( Dynamic listener){
	HX_STACK_FRAME("lime.app._Event_Dynamic_Void","has",0xa031229e,"lime.app._Event_Dynamic_Void.has","lime/app/Event.hx",257,0xbda45bec)
	HX_STACK_THIS(this)
	HX_STACK_ARG(listener,"listener")
	HX_STACK_LINE(260)
	{
		HX_STACK_LINE(260)
		int _g = (int)0;		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(260)
		cpp::ArrayBase _g1 = this->__listeners;		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(260)
		while((true)){
			HX_STACK_LINE(260)
			bool tmp = (_g < _g1->__Field(HX_HCSTRING("length","\xe6","\x94","\x07","\x9f"), hx::paccDynamic ));		HX_STACK_VAR(tmp,"tmp");
			HX_STACK_LINE(260)
			bool tmp1 = !(tmp);		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(260)
			if ((tmp1)){
				HX_STACK_LINE(260)
				break;
			}
			HX_STACK_LINE(260)
			Dynamic tmp2 = _g1->__GetItem(_g);		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(260)
			Dynamic l = tmp2;		HX_STACK_VAR(l,"l");
			HX_STACK_LINE(260)
			++(_g);
			HX_STACK_LINE(262)
			Dynamic tmp3 = l;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(262)
			Dynamic tmp4 = listener;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(262)
			bool tmp5 = ::Reflect_obj::compareMethods(tmp3,tmp4);		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(262)
			if ((tmp5)){
				HX_STACK_LINE(262)
				return true;
			}
		}
	}
	HX_STACK_LINE(267)
	return false;
}


HX_DEFINE_DYNAMIC_FUNC1(_Event_Dynamic_Void_obj,has,return )

Void _Event_Dynamic_Void_obj::remove( Dynamic listener){
{
		HX_STACK_FRAME("lime.app._Event_Dynamic_Void","remove",0xffa91b80,"lime.app._Event_Dynamic_Void.remove","lime/app/Event.hx",272,0xbda45bec)
		HX_STACK_THIS(this)
		HX_STACK_ARG(listener,"listener")
		HX_STACK_LINE(275)
		int tmp = this->__listeners->__Field(HX_HCSTRING("length","\xe6","\x94","\x07","\x9f"), hx::paccDynamic );		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(275)
		int i = tmp;		HX_STACK_VAR(i,"i");
		HX_STACK_LINE(277)
		while((true)){
			HX_STACK_LINE(277)
			int tmp1 = --(i);		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(277)
			bool tmp2 = (tmp1 >= (int)0);		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(277)
			bool tmp3 = !(tmp2);		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(277)
			if ((tmp3)){
				HX_STACK_LINE(277)
				break;
			}
			HX_STACK_LINE(279)
			Dynamic tmp4 = this->__listeners->__GetItem(i);		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(279)
			Dynamic tmp5 = listener;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(279)
			bool tmp6 = ::Reflect_obj::compareMethods(tmp4,tmp5);		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(279)
			if ((tmp6)){
				HX_STACK_LINE(281)
				int tmp7 = i;		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(281)
				this->__listeners->__Field(HX_HCSTRING("splice","\x7c","\x85","\x9e","\xbf"), hx::paccDynamic )(tmp7,(int)1);
				HX_STACK_LINE(282)
				int tmp8 = i;		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(282)
				this->__priorities->splice(tmp8,(int)1);
				HX_STACK_LINE(283)
				int tmp9 = i;		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(283)
				this->__repeat->splice(tmp9,(int)1);
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(_Event_Dynamic_Void_obj,remove,(void))

Void _Event_Dynamic_Void_obj::dispatch( Dynamic a){
{
		HX_STACK_FRAME("lime.app._Event_Dynamic_Void","dispatch",0x820f94f6,"lime.app._Event_Dynamic_Void.dispatch","lime/_macros/EventMacro.hx",91,0x8c7af009)
		HX_STACK_THIS(this)
		HX_STACK_ARG(a,"a")
		HX_STACK_LINE(93)
		this->canceled = false;
		HX_STACK_LINE(95)
		cpp::ArrayBase listeners = this->__listeners;		HX_STACK_VAR(listeners,"listeners");
		HX_STACK_LINE(96)
		Array< bool > repeat = this->__repeat;		HX_STACK_VAR(repeat,"repeat");
		HX_STACK_LINE(97)
		int i = (int)0;		HX_STACK_VAR(i,"i");
		HX_STACK_LINE(99)
		while((true)){
			HX_STACK_LINE(99)
			bool tmp = (i < listeners->__Field(HX_HCSTRING("length","\xe6","\x94","\x07","\x9f"), hx::paccDynamic ));		HX_STACK_VAR(tmp,"tmp");
			HX_STACK_LINE(99)
			bool tmp1 = !(tmp);		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(99)
			if ((tmp1)){
				HX_STACK_LINE(99)
				break;
			}
			HX_STACK_LINE(101)
			Dynamic tmp2 = listeners->__GetItem(i);		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(25)
			Dynamic tmp3 = a;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(101)
			tmp2(tmp3).Cast< Void >();
			HX_STACK_LINE(103)
			bool tmp4 = repeat->__get(i);		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(103)
			bool tmp5 = !(tmp4);		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(103)
			if ((tmp5)){
				HX_STACK_LINE(105)
				Dynamic tmp6 = listeners->__GetItem(i);		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(105)
				Dynamic tmp7 = tmp6;		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(105)
				this->remove(tmp7);
			}
			else{
				HX_STACK_LINE(109)
				(i)++;
			}
			HX_STACK_LINE(113)
			bool tmp6 = this->canceled;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(113)
			if ((tmp6)){
				HX_STACK_LINE(115)
				break;
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(_Event_Dynamic_Void_obj,dispatch,(void))


_Event_Dynamic_Void_obj::_Event_Dynamic_Void_obj()
{
}

void _Event_Dynamic_Void_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(_Event_Dynamic_Void);
	HX_MARK_MEMBER_NAME(canceled,"canceled");
	HX_MARK_MEMBER_NAME(__repeat,"__repeat");
	HX_MARK_MEMBER_NAME(__priorities,"__priorities");
	HX_MARK_MEMBER_NAME(__listeners,"__listeners");
	HX_MARK_END_CLASS();
}

void _Event_Dynamic_Void_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(canceled,"canceled");
	HX_VISIT_MEMBER_NAME(__repeat,"__repeat");
	HX_VISIT_MEMBER_NAME(__priorities,"__priorities");
	HX_VISIT_MEMBER_NAME(__listeners,"__listeners");
}

Dynamic _Event_Dynamic_Void_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
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
		if (HX_FIELD_EQ(inName,"dispatch") ) { return dispatch_dyn(); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"__listeners") ) { return __listeners; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"__priorities") ) { return __priorities; }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic _Event_Dynamic_Void_obj::__SetField(const ::String &inName,const Dynamic &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 8:
		if (HX_FIELD_EQ(inName,"canceled") ) { canceled=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"__repeat") ) { __repeat=inValue.Cast< Array< bool > >(); return inValue; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"__listeners") ) { __listeners=inValue.Cast< cpp::ArrayBase >(); return inValue; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"__priorities") ) { __priorities=inValue.Cast< Array< int > >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void _Event_Dynamic_Void_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("canceled","\x59","\x18","\x26","\x1f"));
	outFields->push(HX_HCSTRING("__repeat","\x7b","\x02","\xac","\xae"));
	outFields->push(HX_HCSTRING("__priorities","\xe2","\xcb","\xe6","\x1c"));
	outFields->push(HX_HCSTRING("__listeners","\x5f","\xae","\xba","\x21"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsBool,(int)offsetof(_Event_Dynamic_Void_obj,canceled),HX_HCSTRING("canceled","\x59","\x18","\x26","\x1f")},
	{hx::fsObject /*Array< bool >*/ ,(int)offsetof(_Event_Dynamic_Void_obj,__repeat),HX_HCSTRING("__repeat","\x7b","\x02","\xac","\xae")},
	{hx::fsObject /*Array< int >*/ ,(int)offsetof(_Event_Dynamic_Void_obj,__priorities),HX_HCSTRING("__priorities","\xe2","\xcb","\xe6","\x1c")},
	{hx::fsObject /*cpp::ArrayBase*/ ,(int)offsetof(_Event_Dynamic_Void_obj,__listeners),HX_HCSTRING("__listeners","\x5f","\xae","\xba","\x21")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo *sStaticStorageInfo = 0;
#endif

static ::String sMemberFields[] = {
	HX_HCSTRING("canceled","\x59","\x18","\x26","\x1f"),
	HX_HCSTRING("__repeat","\x7b","\x02","\xac","\xae"),
	HX_HCSTRING("__priorities","\xe2","\xcb","\xe6","\x1c"),
	HX_HCSTRING("add","\x21","\xf2","\x49","\x00"),
	HX_HCSTRING("cancel","\x7a","\xed","\x33","\xb8"),
	HX_HCSTRING("has","\x5a","\x3f","\x4f","\x00"),
	HX_HCSTRING("remove","\x44","\x9c","\x88","\x04"),
	HX_HCSTRING("__listeners","\x5f","\xae","\xba","\x21"),
	HX_HCSTRING("dispatch","\xba","\xce","\x63","\x1e"),
	::String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(_Event_Dynamic_Void_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(_Event_Dynamic_Void_obj::__mClass,"__mClass");
};

#endif

hx::Class _Event_Dynamic_Void_obj::__mClass;

void _Event_Dynamic_Void_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("lime.app._Event_Dynamic_Void","\xb2","\x51","\x2a","\x32");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = hx::Class_obj::dupFunctions(sMemberFields);
	__mClass->mCanCast = hx::TCanCast< _Event_Dynamic_Void_obj >;
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
