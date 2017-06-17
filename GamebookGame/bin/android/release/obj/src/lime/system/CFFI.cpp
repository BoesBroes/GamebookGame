#include <hxcpp.h>

#ifndef INCLUDED_Reflect
#include <Reflect.h>
#endif
#ifndef INCLUDED_Std
#include <Std.h>
#endif
#ifndef INCLUDED_Sys
#include <Sys.h>
#endif
#ifndef INCLUDED_cpp_Lib
#include <cpp/Lib.h>
#endif
#ifndef INCLUDED_haxe_IMap
#include <haxe/IMap.h>
#endif
#ifndef INCLUDED_haxe_ds_StringMap
#include <haxe/ds/StringMap.h>
#endif
#ifndef INCLUDED_haxe_io_Input
#include <haxe/io/Input.h>
#endif
#ifndef INCLUDED_lime_system_CFFI
#include <lime/system/CFFI.h>
#endif
#ifndef INCLUDED_sys_io_Process
#include <sys/io/Process.h>
#endif
namespace lime{
namespace _system{

Void CFFI_obj::__construct()
{
	return null();
}

//CFFI_obj::~CFFI_obj() { }

Dynamic CFFI_obj::__CreateEmpty() { return  new CFFI_obj; }
hx::ObjectPtr< CFFI_obj > CFFI_obj::__new()
{  hx::ObjectPtr< CFFI_obj > _result_ = new CFFI_obj();
	_result_->__construct();
	return _result_;}

Dynamic CFFI_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< CFFI_obj > _result_ = new CFFI_obj();
	_result_->__construct();
	return _result_;}

void CFFI_obj::__init__() {
{
	::lime::_system::CFFI_obj::available = true;
	::lime::_system::CFFI_obj::enabled = true;
}
}

::haxe::ds::StringMap CFFI_obj::__moduleNames;

bool CFFI_obj::available;

bool CFFI_obj::enabled;

Dynamic CFFI_obj::load( ::String library,::String method,hx::Null< int >  __o_args,hx::Null< bool >  __o_lazy){
int args = __o_args.Default(0);
bool lazy = __o_lazy.Default(false);
{
		bool tmp = ::lime::_system::CFFI_obj::enabled;
		bool tmp1 = !(tmp);
		if ((tmp1)){

			HX_BEGIN_LOCAL_FUNC_S0(hx::LocalFunc,_Function_2_1)
			int __ArgCount() const { return 1; }
			Dynamic run(cpp::ArrayBase __){
				{
					struct _Function_3_1{
						inline static Dynamic Block( ){
							{
								hx::Anon __result = hx::Anon_obj::Create();
								return __result;
							}
							return null();
						}
					};
					Dynamic tmp2 = _Function_3_1::Block();
					return tmp2;
				}
				return null();
			}
			HX_END_LOCAL_FUNC1(return)

			Dynamic tmp2 = ::Reflect_obj::makeVarArgs( Dynamic(new _Function_2_1()));
			return tmp2;
		}
		Dynamic result = null();
		::haxe::ds::StringMap tmp2 = ::lime::_system::CFFI_obj::__moduleNames;
		bool tmp3 = (tmp2 == null());
		if ((tmp3)){
			::haxe::ds::StringMap tmp4;
			{
				::haxe::ds::StringMap tmp5 = ::haxe::ds::StringMap_obj::__new();
				::haxe::ds::StringMap tmp6 = tmp5;
				tmp4 = tmp6;
			}
			::lime::_system::CFFI_obj::__moduleNames = tmp4;
		}
		bool tmp4 = lazy;
		if ((tmp4)){
			::haxe::ds::StringMap tmp5 = ::lime::_system::CFFI_obj::__moduleNames;
			::String tmp6 = library;
			::String tmp7 = library;
			tmp5->set(tmp6,tmp7);
			try
			{
			HX_STACK_CATCHABLE(Dynamic, 0);
			{
				::String tmp8 = library;
				::String tmp9 = method;
				int tmp10 = args;
				Dynamic tmp11 = ::cpp::Lib_obj::loadLazy(tmp8,tmp9,tmp10);
				result = tmp11;
			}
			}
			catch(Dynamic __e){
				{
					HX_STACK_BEGIN_CATCH
					Dynamic e = __e;{
					}
				}
			}
		}
		else{
			::String tmp5 = library;
			::String tmp6 = method;
			int tmp7 = args;
			Dynamic tmp8 = ::cpp::Lib_obj::load(tmp5,tmp6,tmp7);
			return tmp8;
			::haxe::ds::StringMap tmp9 = ::lime::_system::CFFI_obj::__moduleNames;
			::String tmp10 = library;
			bool tmp11 = tmp9->exists(tmp10);
			if ((tmp11)){
				::haxe::ds::StringMap tmp12 = ::lime::_system::CFFI_obj::__moduleNames;
				::String tmp13 = library;
				::String tmp14 = tmp12->get(tmp13);
				::String tmp15 = tmp14;
				::String tmp16 = method;
				int tmp17 = args;
				Dynamic tmp18 = ::cpp::Lib_obj::load(tmp15,tmp16,tmp17);
				return tmp18;
			}
			::haxe::ds::StringMap tmp12 = ::lime::_system::CFFI_obj::__moduleNames;
			::String tmp13 = library;
			::String tmp14 = library;
			tmp12->set(tmp13,tmp14);
			::String tmp15 = (HX_HCSTRING("./","\x41","\x28","\x00","\x00") + library);
			::String tmp16 = library;
			::String tmp17 = method;
			int tmp18 = args;
			Dynamic tmp19 = ::lime::_system::CFFI_obj::__tryLoad(tmp15,tmp16,tmp17,tmp18);
			result = tmp19;
			bool tmp20 = (result == null());
			if ((tmp20)){
				::String tmp21 = (HX_HCSTRING(".\\","\x6e","\x28","\x00","\x00") + library);
				::String tmp22 = library;
				::String tmp23 = method;
				int tmp24 = args;
				Dynamic tmp25 = ::lime::_system::CFFI_obj::__tryLoad(tmp21,tmp22,tmp23,tmp24);
				result = tmp25;
			}
			bool tmp21 = (result == null());
			if ((tmp21)){
				::String tmp22 = library;
				::String tmp23 = library;
				::String tmp24 = method;
				int tmp25 = args;
				Dynamic tmp26 = ::lime::_system::CFFI_obj::__tryLoad(tmp22,tmp23,tmp24,tmp25);
				result = tmp26;
			}
			bool tmp22 = (result == null());
			if ((tmp22)){
				::String tmp23 = ::lime::_system::CFFI_obj::__sysName();
				::String tmp24 = tmp23.substr((int)7,null());
				::String tmp25 = tmp24.toLowerCase();
				bool tmp26 = (tmp25 == HX_HCSTRING("windows","\x83","\xde","\x74","\xe8"));
				::String tmp27;
				if ((tmp26)){
					tmp27 = HX_HCSTRING("\\","\x5c","\x00","\x00","\x00");
				}
				else{
					tmp27 = HX_HCSTRING("/","\x2f","\x00","\x00","\x00");
				}
				::String slash = tmp27;
				::String tmp28 = ::lime::_system::CFFI_obj::__findHaxelib(HX_HCSTRING("lime","\x15","\x17","\xb3","\x47"));
				::String haxelib = tmp28;
				bool tmp29 = (haxelib != HX_HCSTRING("","\x00","\x00","\x00","\x00"));
				if ((tmp29)){
					::String tmp30 = (haxelib + slash);
					::String tmp31 = (tmp30 + HX_HCSTRING("ndll","\x36","\xb8","\x01","\x49"));
					::String tmp32 = slash;
					::String tmp33 = (tmp31 + tmp32);
					::String tmp34 = ::lime::_system::CFFI_obj::__sysName();
					::String tmp35 = (tmp33 + tmp34);
					::String tmp36 = slash;
					::String tmp37 = (tmp35 + tmp36);
					::String tmp38 = library;
					::String tmp39 = (tmp37 + tmp38);
					::String tmp40 = library;
					::String tmp41 = method;
					int tmp42 = args;
					Dynamic tmp43 = ::lime::_system::CFFI_obj::__tryLoad(tmp39,tmp40,tmp41,tmp42);
					result = tmp43;
					bool tmp44 = (result == null());
					if ((tmp44)){
						::String tmp45 = (haxelib + slash);
						::String tmp46 = (tmp45 + HX_HCSTRING("ndll","\x36","\xb8","\x01","\x49"));
						::String tmp47 = slash;
						::String tmp48 = (tmp46 + tmp47);
						::String tmp49 = ::lime::_system::CFFI_obj::__sysName();
						::String tmp50 = (tmp48 + tmp49);
						::String tmp51 = (tmp50 + HX_HCSTRING("64","\x3e","\x2f","\x00","\x00"));
						::String tmp52 = slash;
						::String tmp53 = (tmp51 + tmp52);
						::String tmp54 = library;
						::String tmp55 = (tmp53 + tmp54);
						::String tmp56 = library;
						::String tmp57 = method;
						int tmp58 = args;
						Dynamic tmp59 = ::lime::_system::CFFI_obj::__tryLoad(tmp55,tmp56,tmp57,tmp58);
						result = tmp59;
					}
				}
			}
			Dynamic tmp23 = result;
			::String tmp24 = ::Std_obj::string(tmp23);
			::String tmp25 = (HX_HCSTRING("Result : ","\xe9","\x19","\x2c","\x14") + tmp24);
			::lime::_system::CFFI_obj::__loaderTrace(tmp25);
		}
		Dynamic tmp5 = result;
		return tmp5;
	}
}


STATIC_HX_DEFINE_DYNAMIC_FUNC4(CFFI_obj,load,return )

::String CFFI_obj::__findHaxelib( ::String library){
	try
	{
	HX_STACK_CATCHABLE(Dynamic, 0);
	{
		::sys::io::Process tmp = ::sys::io::Process_obj::__new(HX_HCSTRING("haxelib","\xdf","\xb6","\x80","\x08"),Array_obj< ::String >::__new().Add(HX_HCSTRING("path","\xa5","\xe5","\x51","\x4a")).Add(library));
		::sys::io::Process proc = tmp;
		bool tmp1 = (proc != null());
		if ((tmp1)){
			::haxe::io::Input stream = proc->_stdout;
			try
			{
			HX_STACK_CATCHABLE(Dynamic, 0);
			{
				while((true)){
					::String tmp2 = stream->readLine();
					::String s = tmp2;
					::String tmp3 = s.substr((int)0,(int)1);
					bool tmp4 = (tmp3 != HX_HCSTRING("-","\x2d","\x00","\x00","\x00"));
					if ((tmp4)){
						stream->close();
						proc->close();
						::String tmp5 = (HX_HCSTRING("Found haxelib ","\x1f","\xa6","\x4d","\xc9") + s);
						::lime::_system::CFFI_obj::__loaderTrace(tmp5);
						::String tmp6 = s;
						return tmp6;
					}
				}
			}
			}
			catch(Dynamic __e){
				{
					HX_STACK_BEGIN_CATCH
					Dynamic e = __e;{
					}
				}
			}
			stream->close();
			proc->close();
		}
	}
	}
	catch(Dynamic __e){
		{
			HX_STACK_BEGIN_CATCH
			Dynamic e = __e;{
			}
		}
	}
	return HX_HCSTRING("","\x00","\x00","\x00","\x00");
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(CFFI_obj,__findHaxelib,return )

Void CFFI_obj::__loaderTrace( ::String message){
{
		Dynamic tmp = ::cpp::Lib_obj::load(HX_HCSTRING("std","\xa3","\xa8","\x57","\x00"),HX_HCSTRING("get_env","\x84","\xcc","\xc1","\x26"),(int)1);
		Dynamic get_env = tmp;
		Dynamic tmp1 = get_env(HX_HCSTRING("OPENFL_LOAD_DEBUG","\xa9","\x1b","\xff","\x9b"));
		bool tmp2 = (tmp1 != null());
		bool debug = tmp2;
		bool tmp3 = debug;
		if ((tmp3)){
			::String tmp4 = message;
			::Sys_obj::println(tmp4);
		}
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(CFFI_obj,__loaderTrace,(void))

::String CFFI_obj::__sysName( ){
	Dynamic tmp = ::cpp::Lib_obj::load(HX_HCSTRING("std","\xa3","\xa8","\x57","\x00"),HX_HCSTRING("sys_string","\x03","\xf9","\xde","\x46"),(int)0);
	Dynamic sys_string = tmp;
	::String tmp1 = sys_string().Cast< ::String >();
	return tmp1;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(CFFI_obj,__sysName,return )

Dynamic CFFI_obj::__tryLoad( ::String name,::String library,::String func,int args){
	try
	{
	HX_STACK_CATCHABLE(Dynamic, 0);
	{
		::String tmp = name;
		::String tmp1 = func;
		int tmp2 = args;
		Dynamic tmp3 = ::cpp::Lib_obj::load(tmp,tmp1,tmp2);
		Dynamic result = tmp3;
		bool tmp4 = (result != null());
		if ((tmp4)){
			::String tmp5 = (HX_HCSTRING("Got result ","\xaf","\xe9","\x02","\x45") + name);
			::lime::_system::CFFI_obj::__loaderTrace(tmp5);
			::haxe::ds::StringMap tmp6 = ::lime::_system::CFFI_obj::__moduleNames;
			::String tmp7 = library;
			::String tmp8 = name;
			tmp6->set(tmp7,tmp8);
			Dynamic tmp9 = result;
			return tmp9;
		}
	}
	}
	catch(Dynamic __e){
		{
			HX_STACK_BEGIN_CATCH
			Dynamic e = __e;{
				::String tmp = (HX_HCSTRING("Failed to load : ","\x1e","\xca","\x38","\x9b") + name);
				::lime::_system::CFFI_obj::__loaderTrace(tmp);
			}
		}
	}
	return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC4(CFFI_obj,__tryLoad,return )


CFFI_obj::CFFI_obj()
{
}

bool CFFI_obj::__GetStatic(const ::String &inName, Dynamic &outValue, hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"load") ) { outValue = load_dyn(); return true;  }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"enabled") ) { outValue = enabled; return true;  }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"available") ) { outValue = available; return true;  }
		if (HX_FIELD_EQ(inName,"__sysName") ) { outValue = __sysName_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"__tryLoad") ) { outValue = __tryLoad_dyn(); return true;  }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"__moduleNames") ) { outValue = __moduleNames; return true;  }
		if (HX_FIELD_EQ(inName,"__findHaxelib") ) { outValue = __findHaxelib_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"__loaderTrace") ) { outValue = __loaderTrace_dyn(); return true;  }
	}
	return false;
}

bool CFFI_obj::__SetStatic(const ::String &inName,Dynamic &ioValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 7:
		if (HX_FIELD_EQ(inName,"enabled") ) { enabled=ioValue.Cast< bool >(); return true; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"available") ) { available=ioValue.Cast< bool >(); return true; }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"__moduleNames") ) { __moduleNames=ioValue.Cast< ::haxe::ds::StringMap >(); return true; }
	}
	return false;
}

#if HXCPP_SCRIPTABLE
static hx::StorageInfo *sMemberStorageInfo = 0;
static hx::StaticInfo sStaticStorageInfo[] = {
	{hx::fsObject /*::haxe::ds::StringMap*/ ,(void *) &CFFI_obj::__moduleNames,HX_HCSTRING("__moduleNames","\x5c","\x9c","\x9c","\x28")},
	{hx::fsBool,(void *) &CFFI_obj::available,HX_HCSTRING("available","\xc9","\x59","\x83","\x77")},
	{hx::fsBool,(void *) &CFFI_obj::enabled,HX_HCSTRING("enabled","\x81","\x04","\x31","\x7e")},
	{ hx::fsUnknown, 0, null()}
};
#endif

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(CFFI_obj::__mClass,"__mClass");
	HX_MARK_MEMBER_NAME(CFFI_obj::__moduleNames,"__moduleNames");
	HX_MARK_MEMBER_NAME(CFFI_obj::available,"available");
	HX_MARK_MEMBER_NAME(CFFI_obj::enabled,"enabled");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(CFFI_obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(CFFI_obj::__moduleNames,"__moduleNames");
	HX_VISIT_MEMBER_NAME(CFFI_obj::available,"available");
	HX_VISIT_MEMBER_NAME(CFFI_obj::enabled,"enabled");
};

#endif

hx::Class CFFI_obj::__mClass;

static ::String sStaticFields[] = {
	HX_HCSTRING("__moduleNames","\x5c","\x9c","\x9c","\x28"),
	HX_HCSTRING("available","\xc9","\x59","\x83","\x77"),
	HX_HCSTRING("enabled","\x81","\x04","\x31","\x7e"),
	HX_HCSTRING("load","\x26","\x9a","\xb7","\x47"),
	HX_HCSTRING("__findHaxelib","\x86","\xb8","\xe3","\x50"),
	HX_HCSTRING("__loaderTrace","\x52","\xd2","\xb8","\xf1"),
	HX_HCSTRING("__sysName","\xd8","\xa6","\x8e","\xfb"),
	HX_HCSTRING("__tryLoad","\xe1","\x39","\xc4","\xcb"),
	::String(null()) };

void CFFI_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("lime.system.CFFI","\xac","\xd1","\xdf","\x76");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &CFFI_obj::__GetStatic;
	__mClass->mSetStaticField = &CFFI_obj::__SetStatic;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(sStaticFields);
	__mClass->mMembers = hx::Class_obj::dupFunctions(0 /* sMemberFields */);
	__mClass->mCanCast = hx::TCanCast< CFFI_obj >;
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

void CFFI_obj::__boot()
{
	__moduleNames= null();
}

} // end namespace lime
} // end namespace system
