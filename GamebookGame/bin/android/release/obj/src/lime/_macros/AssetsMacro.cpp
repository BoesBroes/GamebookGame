#include <hxcpp.h>

#ifndef INCLUDED_lime__macros_AssetsMacro
#include <lime/_macros/AssetsMacro.h>
#endif
namespace lime{
namespace _macros{

Void AssetsMacro_obj::__construct()
{
	return null();
}

//AssetsMacro_obj::~AssetsMacro_obj() { }

Dynamic AssetsMacro_obj::__CreateEmpty() { return  new AssetsMacro_obj; }
hx::ObjectPtr< AssetsMacro_obj > AssetsMacro_obj::__new()
{  hx::ObjectPtr< AssetsMacro_obj > _result_ = new AssetsMacro_obj();
	_result_->__construct();
	return _result_;}

Dynamic AssetsMacro_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< AssetsMacro_obj > _result_ = new AssetsMacro_obj();
	_result_->__construct();
	return _result_;}


AssetsMacro_obj::AssetsMacro_obj()
{
}

#if HXCPP_SCRIPTABLE
static hx::StorageInfo *sMemberStorageInfo = 0;
static hx::StaticInfo *sStaticStorageInfo = 0;
#endif

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(AssetsMacro_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(AssetsMacro_obj::__mClass,"__mClass");
};

#endif

hx::Class AssetsMacro_obj::__mClass;

void AssetsMacro_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("lime._macros.AssetsMacro","\xa8","\x18","\x58","\x6a");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = hx::Class_obj::dupFunctions(0 /* sMemberFields */);
	__mClass->mCanCast = hx::TCanCast< AssetsMacro_obj >;
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
} // end namespace _macros
