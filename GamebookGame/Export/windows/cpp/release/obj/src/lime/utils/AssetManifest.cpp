#include <hxcpp.h>

#ifndef INCLUDED_StringTools
#include <StringTools.h>
#endif
#ifndef INCLUDED_haxe_Serializer
#include <haxe/Serializer.h>
#endif
#ifndef INCLUDED_haxe_Unserializer
#include <haxe/Unserializer.h>
#endif
#ifndef INCLUDED_haxe_format_JsonParser
#include <haxe/format/JsonParser.h>
#endif
#ifndef INCLUDED_haxe_format_JsonPrinter
#include <haxe/format/JsonPrinter.h>
#endif
#ifndef INCLUDED_haxe_io_Bytes
#include <haxe/io/Bytes.h>
#endif
#ifndef INCLUDED_haxe_io_Path
#include <haxe/io/Path.h>
#endif
#ifndef INCLUDED_lime_app_Future
#include <lime/app/Future.h>
#endif
#ifndef INCLUDED_lime_utils_AssetManifest
#include <lime/utils/AssetManifest.h>
#endif
#ifndef INCLUDED_lime_utils__Bytes_Bytes_Impl_
#include <lime/utils/_Bytes/Bytes_Impl_.h>
#endif
namespace lime{
namespace utils{

Void AssetManifest_obj::__construct()
{
{
	this->assets = cpp::ArrayBase_obj::__new();
	this->libraryArgs = Array_obj< ::String >::__new();
	this->version = (int)2;
}
;
	return null();
}

//AssetManifest_obj::~AssetManifest_obj() { }

Dynamic AssetManifest_obj::__CreateEmpty() { return  new AssetManifest_obj; }
hx::ObjectPtr< AssetManifest_obj > AssetManifest_obj::__new()
{  hx::ObjectPtr< AssetManifest_obj > _result_ = new AssetManifest_obj();
	_result_->__construct();
	return _result_;}

Dynamic AssetManifest_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< AssetManifest_obj > _result_ = new AssetManifest_obj();
	_result_->__construct();
	return _result_;}

::String AssetManifest_obj::serialize( ){
	struct _Function_1_1{
		inline static Dynamic Block( ){
			{
				hx::Anon __result = hx::Anon_obj::Create();
				return __result;
			}
			return null();
		}
	};
	Dynamic tmp = _Function_1_1::Block();
	Dynamic manifestData = tmp;
	int tmp1 = this->version;
	manifestData->__FieldRef(HX_HCSTRING("version","\x18","\xe7","\xf1","\x7c")) = tmp1;
	::String tmp2 = this->libraryType;
	manifestData->__FieldRef(HX_HCSTRING("libraryType","\x55","\xdf","\xf0","\xae")) = tmp2;
	manifestData->__FieldRef(HX_HCSTRING("libraryArgs","\xf8","\x79","\x5c","\xa2")) = this->libraryArgs;
	::String tmp3 = this->name;
	manifestData->__FieldRef(HX_HCSTRING("name","\x4b","\x72","\xff","\x48")) = tmp3;
	::String tmp4 = ::haxe::Serializer_obj::run(this->assets);
	manifestData->__FieldRef(HX_HCSTRING("assets","\x83","\x48","\x03","\x4c")) = tmp4;
	Dynamic tmp5 = manifestData;
	::String tmp6 = ::haxe::format::JsonPrinter_obj::print(tmp5,null(),null());
	return tmp6;
}


HX_DEFINE_DYNAMIC_FUNC0(AssetManifest_obj,serialize,return )

::lime::utils::AssetManifest AssetManifest_obj::fromBytes( ::haxe::io::Bytes bytes,::String rootPath){
	bool tmp = (bytes != null());
	if ((tmp)){
		int tmp1 = bytes->length;
		::String tmp2 = bytes->getString((int)0,tmp1);
		::String tmp3 = rootPath;
		::lime::utils::AssetManifest tmp4 = ::lime::utils::AssetManifest_obj::parse(tmp2,tmp3);
		return tmp4;
	}
	else{
		return null();
	}
	return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(AssetManifest_obj,fromBytes,return )

::lime::utils::AssetManifest AssetManifest_obj::fromFile( ::String path,::String rootPath){
	::String tmp = path;
	::String tmp1 = ::lime::utils::AssetManifest_obj::__resolvePath(tmp);
	path = tmp1;
	::String tmp2 = rootPath;
	::String tmp3 = path;
	::String tmp4 = ::lime::utils::AssetManifest_obj::__resolveRootPath(tmp2,tmp3);
	rootPath = tmp4;
	bool tmp5 = (path == null());
	if ((tmp5)){
		return null();
	}
	::String tmp6 = path;
	::haxe::io::Bytes tmp7 = ::lime::utils::_Bytes::Bytes_Impl__obj::fromFile(tmp6);
	::String tmp8 = rootPath;
	::lime::utils::AssetManifest tmp9 = ::lime::utils::AssetManifest_obj::fromBytes(tmp7,tmp8);
	return tmp9;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(AssetManifest_obj,fromFile,return )

::lime::app::Future AssetManifest_obj::loadFromBytes( ::haxe::io::Bytes bytes,::String rootPath){
	::haxe::io::Bytes tmp = bytes;
	::String tmp1 = rootPath;
	::lime::utils::AssetManifest tmp2 = ::lime::utils::AssetManifest_obj::fromBytes(tmp,tmp1);
	::lime::app::Future tmp3 = ::lime::app::Future_obj::withValue(tmp2);
	return tmp3;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(AssetManifest_obj,loadFromBytes,return )

::lime::app::Future AssetManifest_obj::loadFromFile( ::String path,::String rootPath){
	::String tmp = path;
	::String tmp1 = ::lime::utils::AssetManifest_obj::__resolvePath(tmp);
	path = tmp1;
	::String tmp2 = rootPath;
	::String tmp3 = path;
	::String tmp4 = ::lime::utils::AssetManifest_obj::__resolveRootPath(tmp2,tmp3);
	rootPath = tmp4;
	bool tmp5 = (path == null());
	if ((tmp5)){
		return null();
	}
	::String tmp6 = path;
	::lime::app::Future tmp7 = ::lime::utils::_Bytes::Bytes_Impl__obj::loadFromFile(tmp6);

	HX_BEGIN_LOCAL_FUNC_S1(hx::LocalFunc,_Function_1_1,::String,rootPath)
	int __ArgCount() const { return 1; }
	::lime::app::Future run(::haxe::io::Bytes bytes){
		{
			::haxe::io::Bytes tmp8 = bytes;
			::String tmp9 = rootPath;
			::lime::utils::AssetManifest tmp10 = ::lime::utils::AssetManifest_obj::fromBytes(tmp8,tmp9);
			::lime::app::Future tmp11 = ::lime::app::Future_obj::withValue(tmp10);
			return tmp11;
		}
		return null();
	}
	HX_END_LOCAL_FUNC1(return)

	::lime::app::Future tmp8 = tmp7->then( Dynamic(new _Function_1_1(rootPath)));
	return tmp8;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(AssetManifest_obj,loadFromFile,return )

::lime::utils::AssetManifest AssetManifest_obj::parse( ::String data,::String rootPath){
	bool tmp = (data == null());
	bool tmp1 = !(tmp);
	bool tmp2;
	if ((tmp1)){
		tmp2 = (data == HX_HCSTRING("","\x00","\x00","\x00","\x00"));
	}
	else{
		tmp2 = true;
	}
	if ((tmp2)){
		return null();
	}
	::haxe::format::JsonParser tmp3 = ::haxe::format::JsonParser_obj::__new(data);
	Dynamic tmp4 = tmp3->parseRec();
	Dynamic manifestData = tmp4;
	::lime::utils::AssetManifest tmp5 = ::lime::utils::AssetManifest_obj::__new();
	::lime::utils::AssetManifest manifest = tmp5;
	manifest->name = manifestData->__Field(HX_HCSTRING("name","\x4b","\x72","\xff","\x48"), hx::paccDynamic );
	manifest->libraryType = manifestData->__Field(HX_HCSTRING("libraryType","\x55","\xdf","\xf0","\xae"), hx::paccDynamic );
	manifest->libraryArgs = manifestData->__Field(HX_HCSTRING("libraryArgs","\xf8","\x79","\x5c","\xa2"), hx::paccDynamic );
	::String tmp6 = manifestData->__Field(HX_HCSTRING("assets","\x83","\x48","\x03","\x4c"), hx::paccDynamic );
	Dynamic tmp7 = ::haxe::Unserializer_obj::run(tmp6);
	manifest->assets = tmp7;
	bool tmp8 = (rootPath != null());
	if ((tmp8)){
		manifest->rootPath = rootPath;
	}
	::lime::utils::AssetManifest tmp9 = manifest;
	return tmp9;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(AssetManifest_obj,parse,return )

::String AssetManifest_obj::__resolvePath( ::String path){
	bool tmp = (path == null());
	if ((tmp)){
		return null();
	}
	int tmp1 = path.indexOf(HX_HCSTRING("?","\x3f","\x00","\x00","\x00"),null());
	int queryIndex = tmp1;
	::String basePath;
	bool tmp2 = (queryIndex > (int)-1);
	if ((tmp2)){
		int tmp3 = queryIndex;
		::String tmp4 = path.substr((int)0,tmp3);
		basePath = tmp4;
	}
	else{
		basePath = path;
	}
	::String tmp3 = basePath;
	::StringTools_obj::replace(tmp3,HX_HCSTRING("\\","\x5c","\x00","\x00","\x00"),HX_HCSTRING("/","\x2f","\x00","\x00","\x00"));
	while((true)){
		::String tmp4 = basePath;
		bool tmp5 = ::StringTools_obj::endsWith(tmp4,HX_HCSTRING("/","\x2f","\x00","\x00","\x00"));
		bool tmp6 = !(tmp5);
		if ((tmp6)){
			break;
		}
		int tmp7 = (basePath.length - (int)1);
		::String tmp8 = basePath.substr((int)0,tmp7);
		basePath = tmp8;
	}
	::String tmp4 = basePath;
	bool tmp5 = ::StringTools_obj::endsWith(tmp4,HX_HCSTRING(".bundle","\x30","\x4a","\xb8","\x4e"));
	if ((tmp5)){
		bool tmp6 = (queryIndex > (int)-1);
		if ((tmp6)){
			::String tmp7 = (basePath + HX_HCSTRING("/library.json","\x2a","\xa7","\x07","\x47"));
			int tmp8 = queryIndex;
			::String tmp9 = path.substr(tmp8,null());
			::String tmp10 = (tmp7 + tmp9);
			return tmp10;
		}
		else{
			::String tmp7 = (basePath + HX_HCSTRING("/library.json","\x2a","\xa7","\x07","\x47"));
			return tmp7;
		}
	}
	else{
		::String tmp6 = path;
		return tmp6;
	}
	return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(AssetManifest_obj,__resolvePath,return )

::String AssetManifest_obj::__resolveRootPath( ::String rootPath,::String path){
	bool tmp = (rootPath != null());
	if ((tmp)){
		::String tmp1 = rootPath;
		return tmp1;
	}
	int tmp1 = path.indexOf(HX_HCSTRING("?","\x3f","\x00","\x00","\x00"),null());
	int queryIndex = tmp1;
	bool tmp2 = (queryIndex > (int)-1);
	if ((tmp2)){
		int tmp3 = queryIndex;
		::String tmp4 = path.substr((int)0,tmp3);
		rootPath = tmp4;
	}
	else{
		rootPath = path;
	}
	::String tmp3 = rootPath;
	::StringTools_obj::replace(tmp3,HX_HCSTRING("\\","\x5c","\x00","\x00","\x00"),HX_HCSTRING("/","\x2f","\x00","\x00","\x00"));
	while((true)){
		::String tmp4 = rootPath;
		bool tmp5 = ::StringTools_obj::endsWith(tmp4,HX_HCSTRING("/","\x2f","\x00","\x00","\x00"));
		bool tmp6 = !(tmp5);
		if ((tmp6)){
			break;
		}
		bool tmp7 = (rootPath == HX_HCSTRING("/","\x2f","\x00","\x00","\x00"));
		if ((tmp7)){
			::String tmp8 = rootPath;
			return tmp8;
		}
		int tmp8 = (rootPath.length - (int)1);
		::String tmp9 = rootPath.substr((int)0,tmp8);
		rootPath = tmp9;
	}
	::String tmp4 = rootPath;
	bool tmp5 = ::StringTools_obj::endsWith(tmp4,HX_HCSTRING(".bundle","\x30","\x4a","\xb8","\x4e"));
	if ((tmp5)){
		::String tmp6 = rootPath;
		return tmp6;
	}
	else{
		::String tmp6 = rootPath;
		::String tmp7 = ::haxe::io::Path_obj::directory(tmp6);
		return tmp7;
	}
	::String tmp6 = rootPath;
	return tmp6;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(AssetManifest_obj,__resolveRootPath,return )


AssetManifest_obj::AssetManifest_obj()
{
}

void AssetManifest_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(AssetManifest);
	HX_MARK_MEMBER_NAME(assets,"assets");
	HX_MARK_MEMBER_NAME(libraryArgs,"libraryArgs");
	HX_MARK_MEMBER_NAME(libraryType,"libraryType");
	HX_MARK_MEMBER_NAME(name,"name");
	HX_MARK_MEMBER_NAME(rootPath,"rootPath");
	HX_MARK_MEMBER_NAME(version,"version");
	HX_MARK_END_CLASS();
}

void AssetManifest_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(assets,"assets");
	HX_VISIT_MEMBER_NAME(libraryArgs,"libraryArgs");
	HX_VISIT_MEMBER_NAME(libraryType,"libraryType");
	HX_VISIT_MEMBER_NAME(name,"name");
	HX_VISIT_MEMBER_NAME(rootPath,"rootPath");
	HX_VISIT_MEMBER_NAME(version,"version");
}

Dynamic AssetManifest_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"name") ) { return name; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"assets") ) { return assets; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"version") ) { return version; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"rootPath") ) { return rootPath; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"serialize") ) { return serialize_dyn(); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"libraryArgs") ) { return libraryArgs; }
		if (HX_FIELD_EQ(inName,"libraryType") ) { return libraryType; }
	}
	return super::__Field(inName,inCallProp);
}

bool AssetManifest_obj::__GetStatic(const ::String &inName, Dynamic &outValue, hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"parse") ) { outValue = parse_dyn(); return true;  }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"fromFile") ) { outValue = fromFile_dyn(); return true;  }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"fromBytes") ) { outValue = fromBytes_dyn(); return true;  }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"loadFromFile") ) { outValue = loadFromFile_dyn(); return true;  }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"loadFromBytes") ) { outValue = loadFromBytes_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"__resolvePath") ) { outValue = __resolvePath_dyn(); return true;  }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"__resolveRootPath") ) { outValue = __resolveRootPath_dyn(); return true;  }
	}
	return false;
}

Dynamic AssetManifest_obj::__SetField(const ::String &inName,const Dynamic &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"name") ) { name=inValue.Cast< ::String >(); return inValue; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"assets") ) { assets=inValue.Cast< cpp::ArrayBase >(); return inValue; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"version") ) { version=inValue.Cast< int >(); return inValue; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"rootPath") ) { rootPath=inValue.Cast< ::String >(); return inValue; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"libraryArgs") ) { libraryArgs=inValue.Cast< Array< ::String > >(); return inValue; }
		if (HX_FIELD_EQ(inName,"libraryType") ) { libraryType=inValue.Cast< ::String >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void AssetManifest_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("assets","\x83","\x48","\x03","\x4c"));
	outFields->push(HX_HCSTRING("libraryArgs","\xf8","\x79","\x5c","\xa2"));
	outFields->push(HX_HCSTRING("libraryType","\x55","\xdf","\xf0","\xae"));
	outFields->push(HX_HCSTRING("name","\x4b","\x72","\xff","\x48"));
	outFields->push(HX_HCSTRING("rootPath","\xe7","\xb8","\x88","\xe1"));
	outFields->push(HX_HCSTRING("version","\x18","\xe7","\xf1","\x7c"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsObject /*cpp::ArrayBase*/ ,(int)offsetof(AssetManifest_obj,assets),HX_HCSTRING("assets","\x83","\x48","\x03","\x4c")},
	{hx::fsObject /*Array< ::String >*/ ,(int)offsetof(AssetManifest_obj,libraryArgs),HX_HCSTRING("libraryArgs","\xf8","\x79","\x5c","\xa2")},
	{hx::fsString,(int)offsetof(AssetManifest_obj,libraryType),HX_HCSTRING("libraryType","\x55","\xdf","\xf0","\xae")},
	{hx::fsString,(int)offsetof(AssetManifest_obj,name),HX_HCSTRING("name","\x4b","\x72","\xff","\x48")},
	{hx::fsString,(int)offsetof(AssetManifest_obj,rootPath),HX_HCSTRING("rootPath","\xe7","\xb8","\x88","\xe1")},
	{hx::fsInt,(int)offsetof(AssetManifest_obj,version),HX_HCSTRING("version","\x18","\xe7","\xf1","\x7c")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo *sStaticStorageInfo = 0;
#endif

static ::String sMemberFields[] = {
	HX_HCSTRING("assets","\x83","\x48","\x03","\x4c"),
	HX_HCSTRING("libraryArgs","\xf8","\x79","\x5c","\xa2"),
	HX_HCSTRING("libraryType","\x55","\xdf","\xf0","\xae"),
	HX_HCSTRING("name","\x4b","\x72","\xff","\x48"),
	HX_HCSTRING("rootPath","\xe7","\xb8","\x88","\xe1"),
	HX_HCSTRING("version","\x18","\xe7","\xf1","\x7c"),
	HX_HCSTRING("serialize","\xe0","\x5d","\xf2","\xf4"),
	::String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(AssetManifest_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(AssetManifest_obj::__mClass,"__mClass");
};

#endif

hx::Class AssetManifest_obj::__mClass;

static ::String sStaticFields[] = {
	HX_HCSTRING("fromBytes","\xa1","\xf2","\x20","\x72"),
	HX_HCSTRING("fromFile","\x06","\x9d","\x87","\xa1"),
	HX_HCSTRING("loadFromBytes","\x9b","\xc3","\x86","\xf4"),
	HX_HCSTRING("loadFromFile","\x4c","\x89","\xf0","\x5a"),
	HX_HCSTRING("parse","\x33","\x90","\x55","\xbd"),
	HX_HCSTRING("__resolvePath","\x91","\x4b","\x05","\x2e"),
	HX_HCSTRING("__resolveRootPath","\xd3","\x84","\xe3","\x75"),
	::String(null()) };

void AssetManifest_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("lime.utils.AssetManifest","\xc9","\x2e","\xb9","\xdc");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &AssetManifest_obj::__GetStatic;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(sStaticFields);
	__mClass->mMembers = hx::Class_obj::dupFunctions(sMemberFields);
	__mClass->mCanCast = hx::TCanCast< AssetManifest_obj >;
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
