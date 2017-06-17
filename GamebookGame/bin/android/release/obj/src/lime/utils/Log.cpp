#include <hxcpp.h>

#ifndef INCLUDED_Sys
#include <Sys.h>
#endif
#ifndef INCLUDED_lime_utils_Log
#include <lime/utils/Log.h>
#endif
namespace lime{
namespace utils{

Void Log_obj::__construct()
{
	return null();
}

//Log_obj::~Log_obj() { }

Dynamic Log_obj::__CreateEmpty() { return  new Log_obj; }
hx::ObjectPtr< Log_obj > Log_obj::__new()
{  hx::ObjectPtr< Log_obj > _result_ = new Log_obj();
	_result_->__construct();
	return _result_;}

Dynamic Log_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< Log_obj > _result_ = new Log_obj();
	_result_->__construct();
	return _result_;}

void Log_obj::__init__() {
{
	Array< ::String > args = ::Sys_obj::args();
	int tmp = args->indexOf(HX_HCSTRING("-v","\xa9","\x27","\x00","\x00"),null());
	int tmp1 = (int)-1;
	bool tmp2 = (tmp > tmp1);
	bool tmp3 = !(tmp2);
	bool tmp4;
	if ((tmp3)){
		int tmp5 = args->indexOf(HX_HCSTRING("-verbose","\xf5","\xe6","\x97","\x7f"),null());
		int tmp6 = tmp5;
		tmp4 = (tmp6 > (int)-1);
	}
	else{
		tmp4 = true;
	}
	if ((tmp4)){
		::lime::utils::Log_obj::level = (int)5;
	}
	else{
		::lime::utils::Log_obj::level = (int)3;
	}
	::lime::utils::Log_obj::throwErrors = true;
}
}

int Log_obj::level;

bool Log_obj::throwErrors;

Void Log_obj::debug( ::String message,Dynamic info){
{
		int tmp = ::lime::utils::Log_obj::level;
		int tmp1 = tmp;
		bool tmp2 = (tmp1 >= (int)4);
		if ((tmp2)){
			::String tmp3 = (HX_HCSTRING("[","\x5b","\x00","\x00","\x00") + info->__Field(HX_HCSTRING("className","\xa3","\x92","\x3d","\xdc"), hx::paccDynamic ));
			::String tmp4 = (tmp3 + HX_HCSTRING("] ","\x23","\x51","\x00","\x00"));
			::String tmp5 = message;
			::String tmp6 = (tmp4 + tmp5);
			::Sys_obj::println(tmp6);
		}
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(Log_obj,debug,(void))

Void Log_obj::error( ::String message,Dynamic info){
{
		int tmp = ::lime::utils::Log_obj::level;
		int tmp1 = tmp;
		bool tmp2 = (tmp1 >= (int)1);
		if ((tmp2)){
			::String tmp3 = (HX_HCSTRING("[","\x5b","\x00","\x00","\x00") + info->__Field(HX_HCSTRING("className","\xa3","\x92","\x3d","\xdc"), hx::paccDynamic ));
			::String tmp4 = (tmp3 + HX_HCSTRING("] ERROR: ","\x8b","\xd9","\xdf","\x31"));
			::String tmp5 = message;
			::String tmp6 = (tmp4 + tmp5);
			::String message1 = tmp6;
			bool tmp7 = ::lime::utils::Log_obj::throwErrors;
			if ((tmp7)){
				::String tmp8 = message1;
				HX_STACK_DO_THROW(tmp8);
			}
			else{
				::String tmp8 = message1;
				::Sys_obj::println(tmp8);
			}
		}
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(Log_obj,error,(void))

Void Log_obj::info( ::String message,Dynamic info){
{
		int tmp = ::lime::utils::Log_obj::level;
		int tmp1 = tmp;
		bool tmp2 = (tmp1 >= (int)3);
		if ((tmp2)){
			::String tmp3 = (HX_HCSTRING("[","\x5b","\x00","\x00","\x00") + info->__Field(HX_HCSTRING("className","\xa3","\x92","\x3d","\xdc"), hx::paccDynamic ));
			::String tmp4 = (tmp3 + HX_HCSTRING("] ","\x23","\x51","\x00","\x00"));
			::String tmp5 = message;
			::String tmp6 = (tmp4 + tmp5);
			::Sys_obj::println(tmp6);
		}
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(Log_obj,info,(void))

Void Log_obj::print( ::String message){
{
		::String tmp = message;
		::Sys_obj::print(tmp);
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Log_obj,print,(void))

Void Log_obj::println( ::String message){
{
		::String tmp = message;
		::Sys_obj::println(tmp);
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Log_obj,println,(void))

Void Log_obj::verbose( ::String message,Dynamic info){
{
		int tmp = ::lime::utils::Log_obj::level;
		int tmp1 = tmp;
		bool tmp2 = (tmp1 >= (int)5);
		if ((tmp2)){
			::String tmp3 = (HX_HCSTRING("[","\x5b","\x00","\x00","\x00") + info->__Field(HX_HCSTRING("className","\xa3","\x92","\x3d","\xdc"), hx::paccDynamic ));
			::String tmp4 = (tmp3 + HX_HCSTRING("] ","\x23","\x51","\x00","\x00"));
			::String tmp5 = message;
			::String tmp6 = (tmp4 + tmp5);
			::Sys_obj::println(tmp6);
		}
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(Log_obj,verbose,(void))

Void Log_obj::warn( ::String message,Dynamic info){
{
		int tmp = ::lime::utils::Log_obj::level;
		int tmp1 = tmp;
		bool tmp2 = (tmp1 >= (int)2);
		if ((tmp2)){
			::String tmp3 = (HX_HCSTRING("[","\x5b","\x00","\x00","\x00") + info->__Field(HX_HCSTRING("className","\xa3","\x92","\x3d","\xdc"), hx::paccDynamic ));
			::String tmp4 = (tmp3 + HX_HCSTRING("] WARNING: ","\x5f","\xda","\xb0","\xcd"));
			::String tmp5 = message;
			::String tmp6 = (tmp4 + tmp5);
			::Sys_obj::println(tmp6);
		}
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(Log_obj,warn,(void))


Log_obj::Log_obj()
{
}

bool Log_obj::__GetStatic(const ::String &inName, Dynamic &outValue, hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"info") ) { outValue = info_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"warn") ) { outValue = warn_dyn(); return true;  }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"level") ) { outValue = level; return true;  }
		if (HX_FIELD_EQ(inName,"debug") ) { outValue = debug_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"error") ) { outValue = error_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"print") ) { outValue = print_dyn(); return true;  }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"println") ) { outValue = println_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"verbose") ) { outValue = verbose_dyn(); return true;  }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"throwErrors") ) { outValue = throwErrors; return true;  }
	}
	return false;
}

bool Log_obj::__SetStatic(const ::String &inName,Dynamic &ioValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"level") ) { level=ioValue.Cast< int >(); return true; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"throwErrors") ) { throwErrors=ioValue.Cast< bool >(); return true; }
	}
	return false;
}

#if HXCPP_SCRIPTABLE
static hx::StorageInfo *sMemberStorageInfo = 0;
static hx::StaticInfo sStaticStorageInfo[] = {
	{hx::fsInt,(void *) &Log_obj::level,HX_HCSTRING("level","\x84","\x15","\x63","\x72")},
	{hx::fsBool,(void *) &Log_obj::throwErrors,HX_HCSTRING("throwErrors","\x71","\xb5","\xe0","\x19")},
	{ hx::fsUnknown, 0, null()}
};
#endif

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(Log_obj::__mClass,"__mClass");
	HX_MARK_MEMBER_NAME(Log_obj::level,"level");
	HX_MARK_MEMBER_NAME(Log_obj::throwErrors,"throwErrors");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(Log_obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(Log_obj::level,"level");
	HX_VISIT_MEMBER_NAME(Log_obj::throwErrors,"throwErrors");
};

#endif

hx::Class Log_obj::__mClass;

static ::String sStaticFields[] = {
	HX_HCSTRING("level","\x84","\x15","\x63","\x72"),
	HX_HCSTRING("throwErrors","\x71","\xb5","\xe0","\x19"),
	HX_HCSTRING("debug","\x53","\x52","\x1f","\xd7"),
	HX_HCSTRING("error","\xc8","\xcb","\x29","\x73"),
	HX_HCSTRING("info","\x6e","\x38","\xbb","\x45"),
	HX_HCSTRING("print","\x2d","\x58","\x8b","\xc8"),
	HX_HCSTRING("println","\xef","\xdb","\x33","\x84"),
	HX_HCSTRING("verbose","\x82","\xd7","\xb9","\x71"),
	HX_HCSTRING("warn","\x46","\x62","\xf2","\x4e"),
	::String(null()) };

void Log_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("lime.utils.Log","\x0e","\x21","\x76","\x06");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &Log_obj::__GetStatic;
	__mClass->mSetStaticField = &Log_obj::__SetStatic;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(sStaticFields);
	__mClass->mMembers = hx::Class_obj::dupFunctions(0 /* sMemberFields */);
	__mClass->mCanCast = hx::TCanCast< Log_obj >;
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

void Log_obj::__boot()
{
	throwErrors= true;
}

} // end namespace lime
} // end namespace utils
