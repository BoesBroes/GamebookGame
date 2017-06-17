#include <hxcpp.h>

#ifndef INCLUDED_ManifestResources
#include <ManifestResources.h>
#endif
#ifndef INCLUDED_Reflect
#include <Reflect.h>
#endif
#ifndef INCLUDED_Sys
#include <Sys.h>
#endif
#ifndef INCLUDED___ASSET__OPENFL__fonts_papyrus_ttf
#include <__ASSET__OPENFL__fonts_papyrus_ttf.h>
#endif
#ifndef INCLUDED_haxe_IMap
#include <haxe/IMap.h>
#endif
#ifndef INCLUDED_haxe_ds_StringMap
#include <haxe/ds/StringMap.h>
#endif
#ifndef INCLUDED_haxe_io_Path
#include <haxe/io/Path.h>
#endif
#ifndef INCLUDED_lime_text_Font
#include <lime/text/Font.h>
#endif
#ifndef INCLUDED_lime_utils_AssetLibrary
#include <lime/utils/AssetLibrary.h>
#endif
#ifndef INCLUDED_lime_utils_Assets
#include <lime/utils/Assets.h>
#endif
#ifndef INCLUDED_openfl_text_Font
#include <openfl/text/Font.h>
#endif
#ifndef INCLUDED_sys_FileSystem
#include <sys/FileSystem.h>
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
			HX_STACK_LINE(40)
			::String tmp3 = ::Sys_obj::executablePath();		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(40)
			::String tmp4 = ::haxe::io::Path_obj::directory(tmp3);		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(40)
			::String tmp5 = ::sys::FileSystem_obj::absolutePath(tmp4);		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(40)
			::String tmp6 = (tmp5 + HX_HCSTRING("/","\x2f","\x00","\x00","\x00"));		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(40)
			rootPath = tmp6;
		}
		HX_STACK_LINE(47)
		::lime::utils::Assets_obj::defaultRootPath = rootPath;
		HX_STACK_LINE(50)
		::openfl::text::Font_obj::registerFont(hx::ClassOf< ::__ASSET__OPENFL__fonts_papyrus_ttf >());
		HX_STACK_LINE(54)
		Dynamic data;		HX_STACK_VAR(data,"data");
		HX_STACK_LINE(54)
		Dynamic manifest;		HX_STACK_VAR(manifest,"manifest");
		HX_STACK_LINE(54)
		::lime::utils::AssetLibrary library;		HX_STACK_VAR(library,"library");
		HX_STACK_LINE(56)
		{
			HX_STACK_LINE(56)
			::String tmp3 = (rootPath + HX_HCSTRING("manifest/default.json","\x95","\xea","\xcc","\x42"));		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(56)
			::String v = tmp3;		HX_STACK_VAR(v,"v");
			HX_STACK_LINE(56)
			::haxe::ds::StringMap tmp4 = ::lime::utils::Assets_obj::libraryPaths;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(56)
			::String tmp5 = v;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(56)
			tmp4->set(HX_HCSTRING("default","\xc1","\xd8","\xc3","\x9b"),tmp5);
			HX_STACK_LINE(56)
			v;
		}
		HX_STACK_LINE(59)
		::lime::utils::AssetLibrary tmp3 = ::lime::utils::Assets_obj::getLibrary(HX_HCSTRING("default","\xc1","\xd8","\xc3","\x9b"));		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(59)
		library = tmp3;
		HX_STACK_LINE(60)
		bool tmp4 = (library != null());		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(60)
		if ((tmp4)){
			HX_STACK_LINE(60)
			::lime::utils::AssetLibrary tmp5 = library;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(60)
			::ManifestResources_obj::preloadLibraries->push(tmp5);
		}
		else{
			HX_STACK_LINE(61)
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

