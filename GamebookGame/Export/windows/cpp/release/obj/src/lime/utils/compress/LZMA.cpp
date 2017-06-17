#include <hxcpp.h>

#ifndef INCLUDED_haxe_io_Bytes
#include <haxe/io/Bytes.h>
#endif
#ifndef INCLUDED_lime__backend_native_NativeCFFI
#include <lime/_backend/native/NativeCFFI.h>
#endif
#ifndef INCLUDED_lime_utils_compress_LZMA
#include <lime/utils/compress/LZMA.h>
#endif
namespace lime{
namespace utils{
namespace compress{

Void LZMA_obj::__construct()
{
	return null();
}

//LZMA_obj::~LZMA_obj() { }

Dynamic LZMA_obj::__CreateEmpty() { return  new LZMA_obj; }
hx::ObjectPtr< LZMA_obj > LZMA_obj::__new()
{  hx::ObjectPtr< LZMA_obj > _result_ = new LZMA_obj();
	_result_->__construct();
	return _result_;}

Dynamic LZMA_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< LZMA_obj > _result_ = new LZMA_obj();
	_result_->__construct();
	return _result_;}

::haxe::io::Bytes LZMA_obj::compress( ::haxe::io::Bytes bytes){
	Dynamic tmp;
	{
		::haxe::io::Bytes tmp1 = ::haxe::io::Bytes_obj::alloc((int)0);
		Dynamic bytes1 = tmp1;
		tmp = ::lime::_backend::native::NativeCFFI_obj::cffi_lime_lzma_compress.call(hx::DynamicPtr(bytes),hx::DynamicPtr(bytes1));
	}
	return tmp;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(LZMA_obj,compress,return )

::haxe::io::Bytes LZMA_obj::decompress( ::haxe::io::Bytes bytes){
	Dynamic tmp;
	{
		::haxe::io::Bytes tmp1 = ::haxe::io::Bytes_obj::alloc((int)0);
		Dynamic bytes1 = tmp1;
		tmp = ::lime::_backend::native::NativeCFFI_obj::cffi_lime_lzma_decompress.call(hx::DynamicPtr(bytes),hx::DynamicPtr(bytes1));
	}
	return tmp;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(LZMA_obj,decompress,return )


LZMA_obj::LZMA_obj()
{
}

bool LZMA_obj::__GetStatic(const ::String &inName, Dynamic &outValue, hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 8:
		if (HX_FIELD_EQ(inName,"compress") ) { outValue = compress_dyn(); return true;  }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"decompress") ) { outValue = decompress_dyn(); return true;  }
	}
	return false;
}

#if HXCPP_SCRIPTABLE
static hx::StorageInfo *sMemberStorageInfo = 0;
static hx::StaticInfo *sStaticStorageInfo = 0;
#endif

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(LZMA_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(LZMA_obj::__mClass,"__mClass");
};

#endif

hx::Class LZMA_obj::__mClass;

static ::String sStaticFields[] = {
	HX_HCSTRING("compress","\xa2","\x47","\xbf","\x83"),
	HX_HCSTRING("decompress","\x23","\x88","\x14","\xda"),
	::String(null()) };

void LZMA_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("lime.utils.compress.LZMA","\xd8","\x8e","\x8f","\xf0");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &LZMA_obj::__GetStatic;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(sStaticFields);
	__mClass->mMembers = hx::Class_obj::dupFunctions(0 /* sMemberFields */);
	__mClass->mCanCast = hx::TCanCast< LZMA_obj >;
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
} // end namespace compress
