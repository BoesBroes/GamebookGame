#include <hxcpp.h>

#ifndef INCLUDED_ManifestResources
#include <ManifestResources.h>
#endif
#ifndef INCLUDED_Reflect
#include <Reflect.h>
#endif
#ifndef INCLUDED_lime_utils_AssetLibrary
#include <lime/utils/AssetLibrary.h>
#endif
#ifndef INCLUDED_lime_utils_AssetManifest
#include <lime/utils/AssetManifest.h>
#endif
#ifndef INCLUDED_lime_utils_Assets
#include <lime/utils/Assets.h>
#endif

Void ManifestResources_obj::__construct()
{
	return null();
}

//ManifestResources_obj::~ManifestResources_obj() { }

Dynamic ManifestResources_obj::__CreateEmpty() { return  new ManifestResources_obj; }
hx::ObjectPtr< ManifestResources_obj > ManifestResources_obj::__new()
{  hx::ObjectPtr< ManifestResources_obj > _result_ = new ManifestResources_obj();
	_result_->__construct();
	return _result_;}

Dynamic ManifestResources_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< ManifestResources_obj > _result_ = new ManifestResources_obj();
	_result_->__construct();
	return _result_;}

Array< ::Dynamic > ManifestResources_obj::preloadLibraries;

Array< ::String > ManifestResources_obj::preloadLibraryNames;

Void ManifestResources_obj::init( Dynamic config){
{
		HX_STACK_FRAME("ManifestResources","init",0xc8e10c68,"ManifestResources.init","ManifestResources.hx",23,0xf77aa668)
		HX_STACK_ARG(config,"config")
		HX_STACK_LINE(25)
		::ManifestResources_obj::preloadLibraries = Array_obj< ::Dynamic >::__new();
		HX_STACK_LINE(26)
		::ManifestResources_obj::preloadLibraryNames = Array_obj< ::String >::__new();
		HX_STACK_LINE(27)
		::String rootPath = null();		HX_STACK_VAR(rootPath,"rootPath");
		HX_STACK_LINE(29)
		bool tmp = (config != null());		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(29)
		bool tmp1;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(29)
		if ((tmp)){
			HX_STACK_LINE(29)
			Dynamic tmp2 = config;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(29)
			Dynamic tmp3 = tmp2;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(29)
			tmp1 = ::Reflect_obj::hasField(tmp3,HX_HCSTRING("assetsPrefix","\x75","\x5a","\x70","\xe4"));
		}
		else{
			HX_STACK_LINE(29)
			tmp1 = false;
		}
		HX_STACK_LINE(29)
		if ((tmp1)){
			HX_STACK_LINE(31)
			Dynamic tmp2 = config;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(31)
			Dynamic tmp3 = ::Reflect_obj::field(tmp2,HX_HCSTRING("assetsPrefix","\x75","\x5a","\x70","\xe4"));		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(31)
			rootPath = tmp3;
		}
		HX_STACK_LINE(35)
		bool tmp2 = (rootPath == null());		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(35)
		if ((tmp2)){
			HX_STACK_LINE(42)
			rootPath = HX_HCSTRING("","\x00","\x00","\x00","\x00");
		}
		HX_STACK_LINE(47)
		::lime::utils::Assets_obj::defaultRootPath = rootPath;
		HX_STACK_LINE(53)
		::String data;		HX_STACK_VAR(data,"data");
		HX_STACK_LINE(53)
		::lime::utils::AssetManifest manifest;		HX_STACK_VAR(manifest,"manifest");
		HX_STACK_LINE(53)
		::lime::utils::AssetLibrary library;		HX_STACK_VAR(library,"library");
		HX_STACK_LINE(55)
		data = HX_HCSTRING("{\"name\":null,\"assets\":\"ah\",\"version\":2,\"libraryArgs\":[],\"libraryType\":null}","\x68","\x94","\xb6","\x8d");
		HX_STACK_LINE(56)
		::String tmp3 = data;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(56)
		::String tmp4 = rootPath;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(56)
		::lime::utils::AssetManifest tmp5 = ::lime::utils::AssetManifest_obj::parse(tmp3,tmp4);		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(56)
		manifest = tmp5;
		HX_STACK_LINE(57)
		::lime::utils::AssetManifest tmp6 = manifest;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(57)
		::lime::utils::AssetLibrary tmp7 = ::lime::utils::AssetLibrary_obj::fromManifest(tmp6);		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(57)
		library = tmp7;
		HX_STACK_LINE(58)
		::lime::utils::AssetLibrary tmp8 = library;		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(58)
		::lime::utils::Assets_obj::registerLibrary(HX_HCSTRING("default","\xc1","\xd8","\xc3","\x9b"),tmp8);
		HX_STACK_LINE(61)
		::lime::utils::AssetLibrary tmp9 = ::lime::utils::Assets_obj::getLibrary(HX_HCSTRING("default","\xc1","\xd8","\xc3","\x9b"));		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(61)
		library = tmp9;
		HX_STACK_LINE(62)
		bool tmp10 = (library != null());		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(62)
		if ((tmp10)){
			HX_STACK_LINE(62)
			::lime::utils::AssetLibrary tmp11 = library;		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(62)
			::ManifestResources_obj::preloadLibraries->push(tmp11);
		}
		else{
			HX_STACK_LINE(63)
			::ManifestResources_obj::preloadLibraryNames->push(HX_HCSTRING("default","\xc1","\xd8","\xc3","\x9b"));
		}
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(ManifestResources_obj,init,(void))


ManifestResources_obj::ManifestResources_obj()
{
}

bool ManifestResources_obj::__GetStatic(const ::String &inName, Dynamic &outValue, hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"init") ) { outValue = init_dyn(); return true;  }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"preloadLibraries") ) { outValue = preloadLibraries; return true;  }
		break;
	case 19:
		if (HX_FIELD_EQ(inName,"preloadLibraryNames") ) { outValue = preloadLibraryNames; return true;  }
	}
	return false;
}

bool ManifestResources_obj::__SetStatic(const ::String &inName,Dynamic &ioValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 16:
		if (HX_FIELD_EQ(inName,"preloadLibraries") ) { preloadLibraries=ioValue.Cast< Array< ::Dynamic > >(); return true; }
		break;
	case 19:
		if (HX_FIELD_EQ(inName,"preloadLibraryNames") ) { preloadLibraryNames=ioValue.Cast< Array< ::String > >(); return true; }
	}
	return false;
}

#if HXCPP_SCRIPTABLE
static hx::StorageInfo *sMemberStorageInfo = 0;
static hx::StaticInfo sStaticStorageInfo[] = {
	{hx::fsObject /*Array< ::Dynamic >*/ ,(void *) &ManifestResources_obj::preloadLibraries,HX_HCSTRING("preloadLibraries","\x10","\x27","\xdf","\xe6")},
	{hx::fsObject /*Array< ::String >*/ ,(void *) &ManifestResources_obj::preloadLibraryNames,HX_HCSTRING("preloadLibraryNames","\x36","\x48","\x52","\x5c")},
	{ hx::fsUnknown, 0, null()}
};
#endif

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(ManifestResources_obj::__mClass,"__mClass");
	HX_MARK_MEMBER_NAME(ManifestResources_obj::preloadLibraries,"preloadLibraries");
	HX_MARK_MEMBER_NAME(ManifestResources_obj::preloadLibraryNames,"preloadLibraryNames");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(ManifestResources_obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(ManifestResources_obj::preloadLibraries,"preloadLibraries");
	HX_VISIT_MEMBER_NAME(ManifestResources_obj::preloadLibraryNames,"preloadLibraryNames");
};

#endif

hx::Class ManifestResources_obj::__mClass;

static ::String sStaticFields[] = {
	HX_HCSTRING("preloadLibraries","\x10","\x27","\xdf","\xe6"),
	HX_HCSTRING("preloadLibraryNames","\x36","\x48","\x52","\x5c"),
	HX_HCSTRING("init","\x10","\x3b","\xbb","\x45"),
	::String(null()) };

void ManifestResources_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("ManifestResources","\x16","\x0e","\x30","\x56");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &ManifestResources_obj::__GetStatic;
	__mClass->mSetStaticField = &ManifestResources_obj::__SetStatic;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(sStaticFields);
	__mClass->mMembers = hx::Class_obj::dupFunctions(0 /* sMemberFields */);
	__mClass->mCanCast = hx::TCanCast< ManifestResources_obj >;
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

