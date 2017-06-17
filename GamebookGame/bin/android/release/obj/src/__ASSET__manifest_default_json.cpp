#include <hxcpp.h>

#ifndef INCLUDED___ASSET__manifest_default_json
#include <__ASSET__manifest_default_json.h>
#endif
#ifndef INCLUDED_haxe_Resource
#include <haxe/Resource.h>
#endif
#ifndef INCLUDED_haxe_io_Bytes
#include <haxe/io/Bytes.h>
#endif

Void __ASSET__manifest_default_json_obj::__construct(Dynamic length,Array< unsigned char > bytesData)
{
HX_STACK_FRAME("__ASSET__manifest_default_json","new",0x8da5bf98,"__ASSET__manifest_default_json.new","lime/_macros/AssetsMacro.hx",69,0xfe246b98)
HX_STACK_THIS(this)
HX_STACK_ARG(length,"length")
HX_STACK_ARG(bytesData,"bytesData")
{
	HX_STACK_LINE(74)
	::String tmp = ::__ASSET__manifest_default_json_obj::resourceName;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(74)
	::haxe::io::Bytes tmp1 = ::haxe::Resource_obj::getBytes(tmp);		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(74)
	::haxe::io::Bytes bytes = tmp1;		HX_STACK_VAR(bytes,"bytes");
	HX_STACK_LINE(78)
	int tmp2 = bytes->length;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(78)
	super::__construct(tmp2,bytes->b);
}
;
	return null();
}

//__ASSET__manifest_default_json_obj::~__ASSET__manifest_default_json_obj() { }

Dynamic __ASSET__manifest_default_json_obj::__CreateEmpty() { return  new __ASSET__manifest_default_json_obj; }
hx::ObjectPtr< __ASSET__manifest_default_json_obj > __ASSET__manifest_default_json_obj::__new(Dynamic length,Array< unsigned char > bytesData)
{  hx::ObjectPtr< __ASSET__manifest_default_json_obj > _result_ = new __ASSET__manifest_default_json_obj();
	_result_->__construct(length,bytesData);
	return _result_;}

Dynamic __ASSET__manifest_default_json_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< __ASSET__manifest_default_json_obj > _result_ = new __ASSET__manifest_default_json_obj();
	_result_->__construct(inArgs[0],inArgs[1]);
	return _result_;}

::String __ASSET__manifest_default_json_obj::resourceName;


__ASSET__manifest_default_json_obj::__ASSET__manifest_default_json_obj()
{
}

bool __ASSET__manifest_default_json_obj::__GetStatic(const ::String &inName, Dynamic &outValue, hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 12:
		if (HX_FIELD_EQ(inName,"resourceName") ) { outValue = resourceName; return true;  }
	}
	return false;
}

bool __ASSET__manifest_default_json_obj::__SetStatic(const ::String &inName,Dynamic &ioValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 12:
		if (HX_FIELD_EQ(inName,"resourceName") ) { resourceName=ioValue.Cast< ::String >(); return true; }
	}
	return false;
}

#if HXCPP_SCRIPTABLE
static hx::StorageInfo *sMemberStorageInfo = 0;
static hx::StaticInfo sStaticStorageInfo[] = {
	{hx::fsString,(void *) &__ASSET__manifest_default_json_obj::resourceName,HX_HCSTRING("resourceName","\x39","\x7a","\x62","\x90")},
	{ hx::fsUnknown, 0, null()}
};
#endif

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(__ASSET__manifest_default_json_obj::__mClass,"__mClass");
	HX_MARK_MEMBER_NAME(__ASSET__manifest_default_json_obj::resourceName,"resourceName");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(__ASSET__manifest_default_json_obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(__ASSET__manifest_default_json_obj::resourceName,"resourceName");
};

#endif

hx::Class __ASSET__manifest_default_json_obj::__mClass;

static ::String sStaticFields[] = {
	HX_HCSTRING("resourceName","\x39","\x7a","\x62","\x90"),
	::String(null()) };

void __ASSET__manifest_default_json_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("__ASSET__manifest_default_json","\xa6","\x53","\x40","\x78");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &__ASSET__manifest_default_json_obj::__GetStatic;
	__mClass->mSetStaticField = &__ASSET__manifest_default_json_obj::__SetStatic;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(sStaticFields);
	__mClass->mMembers = hx::Class_obj::dupFunctions(0 /* sMemberFields */);
	__mClass->mCanCast = hx::TCanCast< __ASSET__manifest_default_json_obj >;
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

void __ASSET__manifest_default_json_obj::__boot()
{
	resourceName= HX_HCSTRING("__ASSET__:file___ASSET__manifest_default_json","\x1f","\x29","\x36","\xad");
}

