#include <hxcpp.h>

#ifndef INCLUDED_haxe_io_Bytes
#include <haxe/io/Bytes.h>
#endif
#ifndef INCLUDED_lime__backend_native_NativeCFFI
#include <lime/_backend/native/NativeCFFI.h>
#endif
#ifndef INCLUDED_lime_net_curl_CURLEasy
#include <lime/net/curl/CURLEasy.h>
#endif
namespace lime{
namespace net{
namespace curl{

Void CURLEasy_obj::__construct()
{
	return null();
}

//CURLEasy_obj::~CURLEasy_obj() { }

Dynamic CURLEasy_obj::__CreateEmpty() { return  new CURLEasy_obj; }
hx::ObjectPtr< CURLEasy_obj > CURLEasy_obj::__new()
{  hx::ObjectPtr< CURLEasy_obj > _result_ = new CURLEasy_obj();
	_result_->__construct();
	return _result_;}

Dynamic CURLEasy_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< CURLEasy_obj > _result_ = new CURLEasy_obj();
	_result_->__construct();
	return _result_;}

Void CURLEasy_obj::cleanup( Float handle){
{
		::lime::_backend::native::NativeCFFI_obj::cffi_lime_curl_easy_cleanup.call(handle);
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(CURLEasy_obj,cleanup,(void))

Float CURLEasy_obj::duphandle( Float handle){
	return ::lime::_backend::native::NativeCFFI_obj::cffi_lime_curl_easy_duphandle.call(handle);
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(CURLEasy_obj,duphandle,return )

::String CURLEasy_obj::escape( Float handle,::String url,int length){
	return ((Dynamic)(::lime::_backend::native::NativeCFFI_obj::cffi_lime_curl_easy_escape.call(handle,url,length)));
}


STATIC_HX_DEFINE_DYNAMIC_FUNC3(CURLEasy_obj,escape,return )

Dynamic CURLEasy_obj::getinfo( Float handle,int info){
	Dynamic tmp;
	{
		int tmp1;
		tmp1 = hx::TCast< ::Int >::cast(info);
		int info1 = tmp1;
		tmp = ::lime::_backend::native::NativeCFFI_obj::cffi_lime_curl_easy_getinfo.call(handle,info1);
	}
	return tmp;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(CURLEasy_obj,getinfo,return )

Float CURLEasy_obj::init( ){
	return ::lime::_backend::native::NativeCFFI_obj::cffi_lime_curl_easy_init.call();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(CURLEasy_obj,init,return )

int CURLEasy_obj::pause( Float handle,int bitMask){
	return ::lime::_backend::native::NativeCFFI_obj::cffi_lime_curl_easy_pause.call(handle,bitMask);
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(CURLEasy_obj,pause,return )

int CURLEasy_obj::perform( Float handle){
	return ::lime::_backend::native::NativeCFFI_obj::cffi_lime_curl_easy_perform.call(handle);
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(CURLEasy_obj,perform,return )

Void CURLEasy_obj::reset( Float handle){
{
		::lime::_backend::native::NativeCFFI_obj::cffi_lime_curl_easy_reset.call(handle);
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(CURLEasy_obj,reset,(void))

int CURLEasy_obj::setopt( Float handle,int option,Dynamic parameter){
	bool tmp = (option == (int)20011);
	bool tmp1 = !(tmp);
	bool tmp2;
	if ((tmp1)){
		tmp2 = (option == (int)20079);
	}
	else{
		tmp2 = true;
	}
	if ((tmp2)){
		Dynamic tmp3 = ::lime::net::curl::CURLEasy_obj::__writeCallback_dyn();
		Dynamic tmp4 = parameter;
		Dynamic tmp5;
		{
			Dynamic f = tmp3;
			Dynamic a1 = tmp4;

			HX_BEGIN_LOCAL_FUNC_S2(hx::LocalFunc,_Function_3_1,Dynamic,a1,Dynamic,f)
			int __ArgCount() const { return 3; }
			int run(Dynamic a2,int a3,int a4){
				{
					Dynamic tmp6 = a1;
					Dynamic tmp7 = a2;
					int tmp8 = a3;
					int tmp9 = a4;
					int tmp10 = f(tmp6,tmp7,tmp8,tmp9).Cast< int >();
					return tmp10;
				}
				return null();
			}
			HX_END_LOCAL_FUNC3(return)

			tmp5 =  Dynamic(new _Function_3_1(a1,f));
		}
		parameter = tmp5;
	}
	int tmp3;
	{
		int tmp4;
		tmp4 = hx::TCast< ::Int >::cast(option);
		int option1 = tmp4;
		tmp3 = ::lime::_backend::native::NativeCFFI_obj::cffi_lime_curl_easy_setopt.call(handle,option1,hx::DynamicPtr(parameter));
	}
	int tmp4 = tmp3;
	return tmp4;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC3(CURLEasy_obj,setopt,return )

::String CURLEasy_obj::strerror( int code){
	Dynamic tmp;
	{
		int tmp1;
		tmp1 = hx::TCast< ::Int >::cast(code);
		int errornum = tmp1;
		tmp = ::lime::_backend::native::NativeCFFI_obj::cffi_lime_curl_easy_strerror.call(errornum);
	}
	return tmp;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(CURLEasy_obj,strerror,return )

::String CURLEasy_obj::unescape( Float handle,::String url,int inLength,int outLength){
	return ((Dynamic)(::lime::_backend::native::NativeCFFI_obj::cffi_lime_curl_easy_unescape.call(handle,url,inLength,outLength)));
}


STATIC_HX_DEFINE_DYNAMIC_FUNC4(CURLEasy_obj,unescape,return )

int CURLEasy_obj::__writeCallback( Dynamic callback,Dynamic output,int size,int nmemb){
	::haxe::io::Bytes bytes = null();
	bool tmp = (output != null());
	if ((tmp)){
		::haxe::io::Bytes tmp1 = ::haxe::io::Bytes_obj::__new(output->__Field(HX_HCSTRING("length","\xe6","\x94","\x07","\x9f"), hx::paccDynamic ),output->__Field(HX_HCSTRING("b","\x62","\x00","\x00","\x00"), hx::paccDynamic ));
		bytes = tmp1;
	}
	Dynamic tmp1 = callback(bytes,size,nmemb);
	return tmp1;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC4(CURLEasy_obj,__writeCallback,return )


CURLEasy_obj::CURLEasy_obj()
{
}

bool CURLEasy_obj::__GetStatic(const ::String &inName, Dynamic &outValue, hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"init") ) { outValue = init_dyn(); return true;  }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"pause") ) { outValue = pause_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"reset") ) { outValue = reset_dyn(); return true;  }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"escape") ) { outValue = escape_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"setopt") ) { outValue = setopt_dyn(); return true;  }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"cleanup") ) { outValue = cleanup_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"getinfo") ) { outValue = getinfo_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"perform") ) { outValue = perform_dyn(); return true;  }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"strerror") ) { outValue = strerror_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"unescape") ) { outValue = unescape_dyn(); return true;  }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"duphandle") ) { outValue = duphandle_dyn(); return true;  }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"__writeCallback") ) { outValue = __writeCallback_dyn(); return true;  }
	}
	return false;
}

#if HXCPP_SCRIPTABLE
static hx::StorageInfo *sMemberStorageInfo = 0;
static hx::StaticInfo *sStaticStorageInfo = 0;
#endif

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(CURLEasy_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(CURLEasy_obj::__mClass,"__mClass");
};

#endif

hx::Class CURLEasy_obj::__mClass;

static ::String sStaticFields[] = {
	HX_HCSTRING("cleanup","\x24","\x0c","\x42","\xab"),
	HX_HCSTRING("duphandle","\xa7","\xa4","\xbc","\x73"),
	HX_HCSTRING("escape","\x81","\x43","\xda","\xda"),
	HX_HCSTRING("getinfo","\x04","\xbc","\x64","\x2d"),
	HX_HCSTRING("init","\x10","\x3b","\xbb","\x45"),
	HX_HCSTRING("pause","\xf6","\xd6","\x57","\xbd"),
	HX_HCSTRING("perform","\xa1","\xe8","\xdd","\x7a"),
	HX_HCSTRING("reset","\xcf","\x49","\xc8","\xe6"),
	HX_HCSTRING("setopt","\xd1","\x71","\x84","\x6f"),
	HX_HCSTRING("strerror","\x77","\x01","\x3c","\x91"),
	HX_HCSTRING("unescape","\x9a","\x72","\x21","\xdd"),
	HX_HCSTRING("__writeCallback","\xa4","\x72","\x5a","\xca"),
	::String(null()) };

void CURLEasy_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("lime.net.curl.CURLEasy","\x66","\xc7","\x70","\x5d");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &CURLEasy_obj::__GetStatic;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(sStaticFields);
	__mClass->mMembers = hx::Class_obj::dupFunctions(0 /* sMemberFields */);
	__mClass->mCanCast = hx::TCanCast< CURLEasy_obj >;
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
} // end namespace net
} // end namespace curl
