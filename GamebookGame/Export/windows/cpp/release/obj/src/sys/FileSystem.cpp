#include <hxcpp.h>

#ifndef INCLUDED_Sys
#include <Sys.h>
#endif
#ifndef INCLUDED_cpp_Lib
#include <cpp/Lib.h>
#endif
#ifndef INCLUDED_haxe_io_Path
#include <haxe/io/Path.h>
#endif
#ifndef INCLUDED_sys_FileSystem
#include <sys/FileSystem.h>
#endif
namespace sys{

Void FileSystem_obj::__construct()
{
	return null();
}

//FileSystem_obj::~FileSystem_obj() { }

Dynamic FileSystem_obj::__CreateEmpty() { return  new FileSystem_obj; }
hx::ObjectPtr< FileSystem_obj > FileSystem_obj::__new()
{  hx::ObjectPtr< FileSystem_obj > _result_ = new FileSystem_obj();
	_result_->__construct();
	return _result_;}

Dynamic FileSystem_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< FileSystem_obj > _result_ = new FileSystem_obj();
	_result_->__construct();
	return _result_;}

bool FileSystem_obj::exists( ::String path){
	HX_STACK_FRAME("sys.FileSystem","exists",0xf55bed9e,"sys.FileSystem.exists","S:\\haxe\\haxe\\std/cpp/_std/sys/FileSystem.hx",33,0xe8ae85d3)
	HX_STACK_ARG(path,"path")
	HX_STACK_LINE(34)
	::String tmp = path;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(34)
	::String tmp1 = ::haxe::io::Path_obj::removeTrailingSlashes(tmp);		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(34)
	bool tmp2 = ::sys::FileSystem_obj::sys_exists(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(34)
	return tmp2;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(FileSystem_obj,exists,return )

::String FileSystem_obj::absolutePath( ::String relPath){
	HX_STACK_FRAME("sys.FileSystem","absolutePath",0x5973f4fe,"sys.FileSystem.absolutePath","S:\\haxe\\haxe\\std/cpp/_std/sys/FileSystem.hx",56,0xe8ae85d3)
	HX_STACK_ARG(relPath,"relPath")
	HX_STACK_LINE(57)
	::String tmp = relPath;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(57)
	bool tmp1 = ::haxe::io::Path_obj::isAbsolute(tmp);		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(57)
	if ((tmp1)){
		HX_STACK_LINE(57)
		::String tmp2 = relPath;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(57)
		return tmp2;
	}
	HX_STACK_LINE(58)
	::String tmp2 = ::Sys_obj::getCwd();		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(58)
	::String tmp3 = relPath;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(58)
	::String tmp4 = ::haxe::io::Path_obj::join(Array_obj< ::String >::__new().Add(tmp2).Add(tmp3));		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(58)
	return tmp4;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(FileSystem_obj,absolutePath,return )

Dynamic FileSystem_obj::sys_exists;


FileSystem_obj::FileSystem_obj()
{
}

bool FileSystem_obj::__GetStatic(const ::String &inName, Dynamic &outValue, hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 6:
		if (HX_FIELD_EQ(inName,"exists") ) { outValue = exists_dyn(); return true;  }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"sys_exists") ) { outValue = sys_exists; return true;  }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"absolutePath") ) { outValue = absolutePath_dyn(); return true;  }
	}
	return false;
}

bool FileSystem_obj::__SetStatic(const ::String &inName,Dynamic &ioValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 10:
		if (HX_FIELD_EQ(inName,"sys_exists") ) { sys_exists=ioValue.Cast< Dynamic >(); return true; }
	}
	return false;
}

#if HXCPP_SCRIPTABLE
static hx::StorageInfo *sMemberStorageInfo = 0;
static hx::StaticInfo sStaticStorageInfo[] = {
	{hx::fsObject /*Dynamic*/ ,(void *) &FileSystem_obj::sys_exists,HX_HCSTRING("sys_exists","\x0e","\xee","\x8e","\xf5")},
	{ hx::fsUnknown, 0, null()}
};
#endif

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(FileSystem_obj::__mClass,"__mClass");
	HX_MARK_MEMBER_NAME(FileSystem_obj::sys_exists,"sys_exists");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(FileSystem_obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(FileSystem_obj::sys_exists,"sys_exists");
};

#endif

hx::Class FileSystem_obj::__mClass;

static ::String sStaticFields[] = {
	HX_HCSTRING("exists","\xdc","\x1d","\xe0","\xbf"),
	HX_HCSTRING("absolutePath","\xbc","\xe7","\x6e","\xf7"),
	HX_HCSTRING("sys_exists","\x0e","\xee","\x8e","\xf5"),
	::String(null()) };

void FileSystem_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("sys.FileSystem","\x6c","\x2c","\xe5","\xe6");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &FileSystem_obj::__GetStatic;
	__mClass->mSetStaticField = &FileSystem_obj::__SetStatic;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(sStaticFields);
	__mClass->mMembers = hx::Class_obj::dupFunctions(0 /* sMemberFields */);
	__mClass->mCanCast = hx::TCanCast< FileSystem_obj >;
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

void FileSystem_obj::__boot()
{
	sys_exists= ::cpp::Lib_obj::load(HX_HCSTRING("std","\xa3","\xa8","\x57","\x00"),HX_HCSTRING("sys_exists","\x0e","\xee","\x8e","\xf5"),(int)1);
}

} // end namespace sys
