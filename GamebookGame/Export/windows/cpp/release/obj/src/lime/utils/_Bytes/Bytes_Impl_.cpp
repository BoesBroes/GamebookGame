#include <hxcpp.h>

#ifndef INCLUDED_haxe_io_Bytes
#include <haxe/io/Bytes.h>
#endif
#ifndef INCLUDED_lime__backend_native_NativeCFFI
#include <lime/_backend/native/NativeCFFI.h>
#endif
#ifndef INCLUDED_lime_app_Future
#include <lime/app/Future.h>
#endif
#ifndef INCLUDED_lime_net__HTTPRequest_AbstractHTTPRequest
#include <lime/net/_HTTPRequest/AbstractHTTPRequest.h>
#endif
#ifndef INCLUDED_lime_net__HTTPRequest_Bytes
#include <lime/net/_HTTPRequest_Bytes.h>
#endif
#ifndef INCLUDED_lime_net__HTTPRequest_lime_utils_Bytes
#include <lime/net/_HTTPRequest_lime_utils_Bytes.h>
#endif
#ifndef INCLUDED_lime_net__IHTTPRequest
#include <lime/net/_IHTTPRequest.h>
#endif
#ifndef INCLUDED_lime_utils__Bytes_Bytes_Impl_
#include <lime/utils/_Bytes/Bytes_Impl_.h>
#endif
namespace lime{
namespace utils{
namespace _Bytes{

Void Bytes_Impl__obj::__construct()
{
	return null();
}

//Bytes_Impl__obj::~Bytes_Impl__obj() { }

Dynamic Bytes_Impl__obj::__CreateEmpty() { return  new Bytes_Impl__obj; }
hx::ObjectPtr< Bytes_Impl__obj > Bytes_Impl__obj::__new()
{  hx::ObjectPtr< Bytes_Impl__obj > _result_ = new Bytes_Impl__obj();
	_result_->__construct();
	return _result_;}

Dynamic Bytes_Impl__obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< Bytes_Impl__obj > _result_ = new Bytes_Impl__obj();
	_result_->__construct();
	return _result_;}

::haxe::io::Bytes Bytes_Impl__obj::_new( int length,Array< unsigned char > bytesData){
	HX_STACK_FRAME("lime.utils._Bytes.Bytes_Impl_","_new",0x0e8a4e50,"lime.utils._Bytes.Bytes_Impl_._new","lime/utils/Bytes.hx",23,0x9fbf972b)
	HX_STACK_ARG(length,"length")
	HX_STACK_ARG(bytesData,"bytesData")
	HX_STACK_LINE(23)
	::haxe::io::Bytes tmp = ::haxe::io::Bytes_obj::__new(length,bytesData);		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(23)
	::haxe::io::Bytes tmp1 = tmp;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(23)
	return tmp1;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(Bytes_Impl__obj,_new,return )

::haxe::io::Bytes Bytes_Impl__obj::alloc( int length){
	HX_STACK_FRAME("lime.utils._Bytes.Bytes_Impl_","alloc",0xcffa3ca6,"lime.utils._Bytes.Bytes_Impl_.alloc","lime/utils/Bytes.hx",29,0x9fbf972b)
	HX_STACK_ARG(length,"length")
	HX_STACK_LINE(31)
	int tmp = length;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(31)
	::haxe::io::Bytes tmp1 = ::haxe::io::Bytes_obj::alloc(tmp);		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(31)
	::haxe::io::Bytes bytes = tmp1;		HX_STACK_VAR(bytes,"bytes");
	HX_STACK_LINE(32)
	int tmp2 = bytes->length;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(32)
	::haxe::io::Bytes tmp3 = ::lime::utils::_Bytes::Bytes_Impl__obj::_new(tmp2,bytes->b);		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(32)
	return tmp3;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Bytes_Impl__obj,alloc,return )

int Bytes_Impl__obj::fastGet( Array< unsigned char > b,int pos){
	HX_STACK_FRAME("lime.utils._Bytes.Bytes_Impl_","fastGet",0xe584c5cb,"lime.utils._Bytes.Bytes_Impl_.fastGet","lime/utils/Bytes.hx",37,0x9fbf972b)
	HX_STACK_ARG(b,"b")
	HX_STACK_ARG(pos,"pos")
	HX_STACK_LINE(39)
	int tmp = pos;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(39)
	unsigned char tmp1 = b->__unsafe_get(tmp);		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(39)
	int tmp2 = ((int)(tmp1));		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(39)
	return tmp2;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(Bytes_Impl__obj,fastGet,return )

::haxe::io::Bytes Bytes_Impl__obj::fromBytes( ::haxe::io::Bytes bytes){
	HX_STACK_FRAME("lime.utils._Bytes.Bytes_Impl_","fromBytes",0x6a55f752,"lime.utils._Bytes.Bytes_Impl_.fromBytes","lime/utils/Bytes.hx",44,0x9fbf972b)
	HX_STACK_ARG(bytes,"bytes")
	HX_STACK_LINE(46)
	bool tmp = (bytes == null());		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(46)
	if ((tmp)){
		HX_STACK_LINE(46)
		return null();
	}
	HX_STACK_LINE(48)
	int tmp1 = bytes->length;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(48)
	::haxe::io::Bytes tmp2 = ::lime::utils::_Bytes::Bytes_Impl__obj::_new(tmp1,bytes->b);		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(48)
	return tmp2;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Bytes_Impl__obj,fromBytes,return )

::haxe::io::Bytes Bytes_Impl__obj::fromFile( ::String path){
	HX_STACK_FRAME("lime.utils._Bytes.Bytes_Impl_","fromFile",0x0fb37975,"lime.utils._Bytes.Bytes_Impl_.fromFile","lime/utils/Bytes.hx",53,0x9fbf972b)
	HX_STACK_ARG(path,"path")
	HX_STACK_LINE(57)
	::haxe::io::Bytes tmp = ::lime::utils::_Bytes::Bytes_Impl__obj::alloc((int)0);		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(57)
	::haxe::io::Bytes bytes = tmp;		HX_STACK_VAR(bytes,"bytes");
	HX_STACK_LINE(58)
	::lime::_backend::native::NativeCFFI_obj::cffi_lime_bytes_read_file.call(path,hx::DynamicPtr(bytes));
	HX_STACK_LINE(59)
	bool tmp1 = (bytes->length > (int)0);		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(59)
	if ((tmp1)){
		HX_STACK_LINE(59)
		::haxe::io::Bytes tmp2 = bytes;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(59)
		return tmp2;
	}
	HX_STACK_LINE(65)
	return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Bytes_Impl__obj,fromFile,return )

::lime::app::Future Bytes_Impl__obj::loadFromBytes( ::haxe::io::Bytes bytes){
	HX_STACK_FRAME("lime.utils._Bytes.Bytes_Impl_","loadFromBytes",0x2f7a74cc,"lime.utils._Bytes.Bytes_Impl_.loadFromBytes","lime/utils/Bytes.hx",70,0x9fbf972b)
	HX_STACK_ARG(bytes,"bytes")
	HX_STACK_LINE(72)
	::haxe::io::Bytes tmp = bytes;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(72)
	::haxe::io::Bytes tmp1 = ::lime::utils::_Bytes::Bytes_Impl__obj::fromBytes(tmp);		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(72)
	::lime::app::Future tmp2 = ::lime::app::Future_obj::withValue(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(72)
	return tmp2;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Bytes_Impl__obj,loadFromBytes,return )

::lime::app::Future Bytes_Impl__obj::loadFromFile( ::String path){
	HX_STACK_FRAME("lime.utils._Bytes.Bytes_Impl_","loadFromFile",0xcbb4c93b,"lime.utils._Bytes.Bytes_Impl_.loadFromFile","lime/utils/Bytes.hx",77,0x9fbf972b)
	HX_STACK_ARG(path,"path")
	HX_STACK_LINE(79)
	::lime::net::_HTTPRequest_lime_utils_Bytes tmp = ::lime::net::_HTTPRequest_lime_utils_Bytes_obj::__new(null());		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(79)
	::lime::net::_HTTPRequest_lime_utils_Bytes request = tmp;		HX_STACK_VAR(request,"request");
	HX_STACK_LINE(80)
	::String tmp1 = path;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(80)
	::lime::app::Future tmp2 = request->load(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(80)
	return tmp2;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Bytes_Impl__obj,loadFromFile,return )

::haxe::io::Bytes Bytes_Impl__obj::ofData( Array< unsigned char > b){
	HX_STACK_FRAME("lime.utils._Bytes.Bytes_Impl_","ofData",0x35174d90,"lime.utils._Bytes.Bytes_Impl_.ofData","lime/utils/Bytes.hx",85,0x9fbf972b)
	HX_STACK_ARG(b,"b")
	HX_STACK_LINE(87)
	::haxe::io::Bytes tmp = ::haxe::io::Bytes_obj::ofData(b);		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(87)
	::haxe::io::Bytes bytes = tmp;		HX_STACK_VAR(bytes,"bytes");
	HX_STACK_LINE(88)
	int tmp1 = bytes->length;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(88)
	::haxe::io::Bytes tmp2 = ::lime::utils::_Bytes::Bytes_Impl__obj::_new(tmp1,bytes->b);		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(88)
	return tmp2;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Bytes_Impl__obj,ofData,return )

::haxe::io::Bytes Bytes_Impl__obj::ofString( ::String s){
	HX_STACK_FRAME("lime.utils._Bytes.Bytes_Impl_","ofString",0x125d45b7,"lime.utils._Bytes.Bytes_Impl_.ofString","lime/utils/Bytes.hx",93,0x9fbf972b)
	HX_STACK_ARG(s,"s")
	HX_STACK_LINE(95)
	::String tmp = s;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(95)
	::haxe::io::Bytes tmp1 = ::haxe::io::Bytes_obj::ofString(tmp);		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(95)
	::haxe::io::Bytes bytes = tmp1;		HX_STACK_VAR(bytes,"bytes");
	HX_STACK_LINE(96)
	int tmp2 = bytes->length;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(96)
	::haxe::io::Bytes tmp3 = ::lime::utils::_Bytes::Bytes_Impl__obj::_new(tmp2,bytes->b);		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(96)
	return tmp3;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Bytes_Impl__obj,ofString,return )

::haxe::io::Bytes Bytes_Impl__obj::__fromNativePointer( Dynamic data,int length){
	HX_STACK_FRAME("lime.utils._Bytes.Bytes_Impl_","__fromNativePointer",0x287bf4ed,"lime.utils._Bytes.Bytes_Impl_.__fromNativePointer","lime/utils/Bytes.hx",102,0x9fbf972b)
	HX_STACK_ARG(data,"data")
	HX_STACK_ARG(length,"length")
	HX_STACK_LINE(104)
	Dynamic tmp;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(104)
	{
		HX_STACK_LINE(104)
		Float data1 = data;		HX_STACK_VAR(data1,"data1");
		HX_STACK_LINE(104)
		tmp = ::lime::_backend::native::NativeCFFI_obj::cffi_lime_bytes_from_data_pointer.call(data1,length);
	}
	HX_STACK_LINE(104)
	Dynamic bytes = tmp;		HX_STACK_VAR(bytes,"bytes");
	HX_STACK_LINE(105)
	::haxe::io::Bytes tmp1 = ::lime::utils::_Bytes::Bytes_Impl__obj::_new(bytes->__Field(HX_HCSTRING("length","\xe6","\x94","\x07","\x9f"), hx::paccDynamic ),bytes->__Field(HX_HCSTRING("b","\x62","\x00","\x00","\x00"), hx::paccDynamic ));		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(105)
	return tmp1;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(Bytes_Impl__obj,__fromNativePointer,return )


Bytes_Impl__obj::Bytes_Impl__obj()
{
}

bool Bytes_Impl__obj::__GetStatic(const ::String &inName, Dynamic &outValue, hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"_new") ) { outValue = _new_dyn(); return true;  }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"alloc") ) { outValue = alloc_dyn(); return true;  }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"ofData") ) { outValue = ofData_dyn(); return true;  }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"fastGet") ) { outValue = fastGet_dyn(); return true;  }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"fromFile") ) { outValue = fromFile_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"ofString") ) { outValue = ofString_dyn(); return true;  }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"fromBytes") ) { outValue = fromBytes_dyn(); return true;  }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"loadFromFile") ) { outValue = loadFromFile_dyn(); return true;  }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"loadFromBytes") ) { outValue = loadFromBytes_dyn(); return true;  }
		break;
	case 19:
		if (HX_FIELD_EQ(inName,"__fromNativePointer") ) { outValue = __fromNativePointer_dyn(); return true;  }
	}
	return false;
}

#if HXCPP_SCRIPTABLE
static hx::StorageInfo *sMemberStorageInfo = 0;
static hx::StaticInfo *sStaticStorageInfo = 0;
#endif

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(Bytes_Impl__obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(Bytes_Impl__obj::__mClass,"__mClass");
};

#endif

hx::Class Bytes_Impl__obj::__mClass;

static ::String sStaticFields[] = {
	HX_HCSTRING("_new","\x61","\x15","\x1f","\x3f"),
	HX_HCSTRING("alloc","\x75","\xa4","\x93","\x21"),
	HX_HCSTRING("fastGet","\x5a","\xff","\x22","\xde"),
	HX_HCSTRING("fromBytes","\xa1","\xf2","\x20","\x72"),
	HX_HCSTRING("fromFile","\x06","\x9d","\x87","\xa1"),
	HX_HCSTRING("loadFromBytes","\x9b","\xc3","\x86","\xf4"),
	HX_HCSTRING("loadFromFile","\x4c","\x89","\xf0","\x5a"),
	HX_HCSTRING("ofData","\xe1","\xba","\xb8","\x49"),
	HX_HCSTRING("ofString","\x48","\x69","\x31","\xa4"),
	HX_HCSTRING("__fromNativePointer","\xfc","\xc8","\x91","\x68"),
	::String(null()) };

void Bytes_Impl__obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("lime.utils._Bytes.Bytes_Impl_","\xdf","\xcd","\xf1","\xd5");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &Bytes_Impl__obj::__GetStatic;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(sStaticFields);
	__mClass->mMembers = hx::Class_obj::dupFunctions(0 /* sMemberFields */);
	__mClass->mCanCast = hx::TCanCast< Bytes_Impl__obj >;
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
} // end namespace utils
} // end namespace _Bytes
