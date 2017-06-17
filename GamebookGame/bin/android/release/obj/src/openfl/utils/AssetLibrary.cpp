#include <hxcpp.h>

#ifndef INCLUDED_Std
#include <Std.h>
#endif
#ifndef INCLUDED_haxe_io_Bytes
#include <haxe/io/Bytes.h>
#endif
#ifndef INCLUDED_lime_app_Future
#include <lime/app/Future.h>
#endif
#ifndef INCLUDED_lime_utils_AssetLibrary
#include <lime/utils/AssetLibrary.h>
#endif
#ifndef INCLUDED_lime_utils_AssetManifest
#include <lime/utils/AssetManifest.h>
#endif
#ifndef INCLUDED_openfl_display_DisplayObject
#include <openfl/display/DisplayObject.h>
#endif
#ifndef INCLUDED_openfl_display_DisplayObjectContainer
#include <openfl/display/DisplayObjectContainer.h>
#endif
#ifndef INCLUDED_openfl_display_IBitmapDrawable
#include <openfl/display/IBitmapDrawable.h>
#endif
#ifndef INCLUDED_openfl_display_InteractiveObject
#include <openfl/display/InteractiveObject.h>
#endif
#ifndef INCLUDED_openfl_display_MovieClip
#include <openfl/display/MovieClip.h>
#endif
#ifndef INCLUDED_openfl_display_Sprite
#include <openfl/display/Sprite.h>
#endif
#ifndef INCLUDED_openfl_events_EventDispatcher
#include <openfl/events/EventDispatcher.h>
#endif
#ifndef INCLUDED_openfl_events_IEventDispatcher
#include <openfl/events/IEventDispatcher.h>
#endif
#ifndef INCLUDED_openfl_utils_AssetLibrary
#include <openfl/utils/AssetLibrary.h>
#endif
#ifndef INCLUDED_openfl_utils_ByteArrayData
#include <openfl/utils/ByteArrayData.h>
#endif
#ifndef INCLUDED_openfl_utils_IDataInput
#include <openfl/utils/IDataInput.h>
#endif
#ifndef INCLUDED_openfl_utils_IDataOutput
#include <openfl/utils/IDataOutput.h>
#endif
#ifndef INCLUDED_openfl_utils__ByteArray_ByteArray_Impl_
#include <openfl/utils/_ByteArray/ByteArray_Impl_.h>
#endif
namespace openfl{
namespace utils{

Void AssetLibrary_obj::__construct()
{
HX_STACK_FRAME("openfl.utils.AssetLibrary","new",0x69b47d78,"openfl.utils.AssetLibrary.new","openfl/utils/AssetLibrary.hx",15,0x41ec4c76)
HX_STACK_THIS(this)
{
	HX_STACK_LINE(15)
	super::__construct();
}
;
	return null();
}

//AssetLibrary_obj::~AssetLibrary_obj() { }

Dynamic AssetLibrary_obj::__CreateEmpty() { return  new AssetLibrary_obj; }
hx::ObjectPtr< AssetLibrary_obj > AssetLibrary_obj::__new()
{  hx::ObjectPtr< AssetLibrary_obj > _result_ = new AssetLibrary_obj();
	_result_->__construct();
	return _result_;}

Dynamic AssetLibrary_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< AssetLibrary_obj > _result_ = new AssetLibrary_obj();
	_result_->__construct();
	return _result_;}

::openfl::display::MovieClip AssetLibrary_obj::getMovieClip( ::String id){
	HX_STACK_FRAME("openfl.utils.AssetLibrary","getMovieClip",0xec0e8f12,"openfl.utils.AssetLibrary.getMovieClip","openfl/utils/AssetLibrary.hx",53,0x41ec4c76)
	HX_STACK_THIS(this)
	HX_STACK_ARG(id,"id")
	HX_STACK_LINE(53)
	return null();
}


HX_DEFINE_DYNAMIC_FUNC1(AssetLibrary_obj,getMovieClip,return )

::lime::app::Future AssetLibrary_obj::loadMovieClip( ::String id){
	HX_STACK_FRAME("openfl.utils.AssetLibrary","loadMovieClip",0xdf35ceb2,"openfl.utils.AssetLibrary.loadMovieClip","openfl/utils/AssetLibrary.hx",101,0x41ec4c76)
	HX_STACK_THIS(this)
	HX_STACK_ARG(id,"id")
	HX_STACK_LINE(101)
	::openfl::utils::AssetLibrary _g = hx::ObjectPtr<OBJ_>(this);		HX_STACK_VAR(_g,"_g");

	HX_BEGIN_LOCAL_FUNC_S2(hx::LocalFunc,_Function_1_1,::openfl::utils::AssetLibrary,_g,::String,id)
	int __ArgCount() const { return 0; }
	::openfl::display::MovieClip run(){
		HX_STACK_FRAME("*","_Function_1_1",0x5200ed37,"*._Function_1_1","openfl/utils/AssetLibrary.hx",103,0x41ec4c76)
		{
			HX_STACK_LINE(103)
			::String tmp = id;		HX_STACK_VAR(tmp,"tmp");
			HX_STACK_LINE(103)
			::openfl::display::MovieClip tmp1 = _g->getMovieClip(tmp);		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(103)
			return tmp1;
		}
		return null();
	}
	HX_END_LOCAL_FUNC0(return)

	HX_STACK_LINE(103)
	::lime::app::Future tmp = ::lime::app::Future_obj::__new( Dynamic(new _Function_1_1(_g,id)),null());		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(103)
	return tmp;
}


HX_DEFINE_DYNAMIC_FUNC1(AssetLibrary_obj,loadMovieClip,return )

::openfl::utils::AssetLibrary AssetLibrary_obj::fromBytes( ::openfl::utils::ByteArrayData bytes,::String rootPath){
	HX_STACK_FRAME("openfl.utils.AssetLibrary","fromBytes",0x0ac481b9,"openfl.utils.AssetLibrary.fromBytes","openfl/utils/AssetLibrary.hx",20,0x41ec4c76)
	HX_STACK_ARG(bytes,"bytes")
	HX_STACK_ARG(rootPath,"rootPath")
	HX_STACK_LINE(22)
	::openfl::utils::ByteArrayData tmp = bytes;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(22)
	::haxe::io::Bytes tmp1 = ::openfl::utils::_ByteArray::ByteArray_Impl__obj::toBytes(tmp);		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(22)
	::String tmp2 = rootPath;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(22)
	::lime::utils::AssetManifest tmp3 = ::lime::utils::AssetManifest_obj::fromBytes(tmp1,tmp2);		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(22)
	::openfl::utils::AssetLibrary tmp4 = ::openfl::utils::AssetLibrary_obj::fromManifest(tmp3);		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(22)
	return tmp4;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(AssetLibrary_obj,fromBytes,return )

::openfl::utils::AssetLibrary AssetLibrary_obj::fromFile( ::String path,::String rootPath){
	HX_STACK_FRAME("openfl.utils.AssetLibrary","fromFile",0x922478ee,"openfl.utils.AssetLibrary.fromFile","openfl/utils/AssetLibrary.hx",27,0x41ec4c76)
	HX_STACK_ARG(path,"path")
	HX_STACK_ARG(rootPath,"rootPath")
	HX_STACK_LINE(29)
	::String tmp = path;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(29)
	::String tmp1 = rootPath;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(29)
	::lime::utils::AssetManifest tmp2 = ::lime::utils::AssetManifest_obj::fromFile(tmp,tmp1);		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(29)
	::openfl::utils::AssetLibrary tmp3 = ::openfl::utils::AssetLibrary_obj::fromManifest(tmp2);		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(29)
	return tmp3;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(AssetLibrary_obj,fromFile,return )

::openfl::utils::AssetLibrary AssetLibrary_obj::fromManifest( ::lime::utils::AssetManifest manifest){
	HX_STACK_FRAME("openfl.utils.AssetLibrary","fromManifest",0x34ddc721,"openfl.utils.AssetLibrary.fromManifest","openfl/utils/AssetLibrary.hx",34,0x41ec4c76)
	HX_STACK_ARG(manifest,"manifest")
	HX_STACK_LINE(36)
	::lime::utils::AssetManifest tmp = manifest;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(36)
	::lime::utils::AssetLibrary tmp1 = ::lime::utils::AssetLibrary_obj::fromManifest(tmp);		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(36)
	::lime::utils::AssetLibrary library = tmp1;		HX_STACK_VAR(library,"library");
	HX_STACK_LINE(38)
	bool tmp2 = (library != null());		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(38)
	bool tmp3;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(38)
	if ((tmp2)){
		HX_STACK_LINE(38)
		::lime::utils::AssetLibrary tmp4 = library;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(38)
		::lime::utils::AssetLibrary tmp5 = tmp4;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(38)
		tmp3 = ::Std_obj::is(tmp5,hx::ClassOf< ::openfl::utils::AssetLibrary >());
	}
	else{
		HX_STACK_LINE(38)
		tmp3 = false;
	}
	HX_STACK_LINE(38)
	if ((tmp3)){
		HX_STACK_LINE(40)
		::openfl::utils::AssetLibrary tmp4 = ((::openfl::utils::AssetLibrary)(library));		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(40)
		return tmp4;
	}
	else{
		HX_STACK_LINE(44)
		return null();
	}
	HX_STACK_LINE(38)
	return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(AssetLibrary_obj,fromManifest,return )

::lime::app::Future AssetLibrary_obj::loadFromBytes( ::openfl::utils::ByteArrayData bytes,::String rootPath){
	HX_STACK_FRAME("openfl.utils.AssetLibrary","loadFromBytes",0x393bbeb3,"openfl.utils.AssetLibrary.loadFromBytes","openfl/utils/AssetLibrary.hx",58,0x41ec4c76)
	HX_STACK_ARG(bytes,"bytes")
	HX_STACK_ARG(rootPath,"rootPath")
	HX_STACK_LINE(60)
	::openfl::utils::ByteArrayData tmp = bytes;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(60)
	::haxe::io::Bytes tmp1 = ::openfl::utils::_ByteArray::ByteArray_Impl__obj::toBytes(tmp);		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(60)
	::String tmp2 = rootPath;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(60)
	::lime::app::Future tmp3 = ::lime::utils::AssetManifest_obj::loadFromBytes(tmp1,tmp2);		HX_STACK_VAR(tmp3,"tmp3");

	HX_BEGIN_LOCAL_FUNC_S0(hx::LocalFunc,_Function_1_1)
	int __ArgCount() const { return 1; }
	::lime::app::Future run(::lime::utils::AssetManifest manifest){
		HX_STACK_FRAME("*","_Function_1_1",0x5200ed37,"*._Function_1_1","openfl/utils/AssetLibrary.hx",60,0x41ec4c76)
		HX_STACK_ARG(manifest,"manifest")
		{
			HX_STACK_LINE(62)
			::lime::utils::AssetManifest tmp4 = manifest;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(62)
			::lime::app::Future tmp5 = ::openfl::utils::AssetLibrary_obj::loadFromManifest(tmp4);		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(62)
			return tmp5;
		}
		return null();
	}
	HX_END_LOCAL_FUNC1(return)

	HX_STACK_LINE(60)
	::lime::app::Future tmp4 = tmp3->then( Dynamic(new _Function_1_1()));		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(60)
	return tmp4;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(AssetLibrary_obj,loadFromBytes,return )

::lime::app::Future AssetLibrary_obj::loadFromFile( ::String path,::String rootPath){
	HX_STACK_FRAME("openfl.utils.AssetLibrary","loadFromFile",0x1f8d7934,"openfl.utils.AssetLibrary.loadFromFile","openfl/utils/AssetLibrary.hx",69,0x41ec4c76)
	HX_STACK_ARG(path,"path")
	HX_STACK_ARG(rootPath,"rootPath")
	HX_STACK_LINE(71)
	::String tmp = path;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(71)
	::String tmp1 = rootPath;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(71)
	::lime::app::Future tmp2 = ::lime::utils::AssetManifest_obj::loadFromFile(tmp,tmp1);		HX_STACK_VAR(tmp2,"tmp2");

	HX_BEGIN_LOCAL_FUNC_S0(hx::LocalFunc,_Function_1_1)
	int __ArgCount() const { return 1; }
	::lime::app::Future run(::lime::utils::AssetManifest manifest){
		HX_STACK_FRAME("*","_Function_1_1",0x5200ed37,"*._Function_1_1","openfl/utils/AssetLibrary.hx",71,0x41ec4c76)
		HX_STACK_ARG(manifest,"manifest")
		{
			HX_STACK_LINE(73)
			::lime::utils::AssetManifest tmp3 = manifest;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(73)
			::lime::app::Future tmp4 = ::openfl::utils::AssetLibrary_obj::loadFromManifest(tmp3);		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(73)
			return tmp4;
		}
		return null();
	}
	HX_END_LOCAL_FUNC1(return)

	HX_STACK_LINE(71)
	::lime::app::Future tmp3 = tmp2->then( Dynamic(new _Function_1_1()));		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(71)
	return tmp3;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(AssetLibrary_obj,loadFromFile,return )

::lime::app::Future AssetLibrary_obj::loadFromManifest( ::lime::utils::AssetManifest manifest){
	HX_STACK_FRAME("openfl.utils.AssetLibrary","loadFromManifest",0x78d36267,"openfl.utils.AssetLibrary.loadFromManifest","openfl/utils/AssetLibrary.hx",80,0x41ec4c76)
	HX_STACK_ARG(manifest,"manifest")
	HX_STACK_LINE(82)
	::lime::utils::AssetManifest tmp = manifest;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(82)
	::openfl::utils::AssetLibrary tmp1 = ::openfl::utils::AssetLibrary_obj::fromManifest(tmp);		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(82)
	::openfl::utils::AssetLibrary library = tmp1;		HX_STACK_VAR(library,"library");
	HX_STACK_LINE(84)
	bool tmp2 = (library != null());		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(84)
	bool tmp3;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(84)
	if ((tmp2)){
		HX_STACK_LINE(84)
		::openfl::utils::AssetLibrary tmp4 = library;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(84)
		::openfl::utils::AssetLibrary tmp5 = tmp4;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(84)
		tmp3 = ::Std_obj::is(tmp5,hx::ClassOf< ::openfl::utils::AssetLibrary >());
	}
	else{
		HX_STACK_LINE(84)
		tmp3 = false;
	}
	HX_STACK_LINE(84)
	if ((tmp3)){
		HX_STACK_LINE(86)
		::lime::app::Future tmp4 = library->load();		HX_STACK_VAR(tmp4,"tmp4");

		HX_BEGIN_LOCAL_FUNC_S0(hx::LocalFunc,_Function_2_1)
		int __ArgCount() const { return 1; }
		::lime::app::Future run(::lime::utils::AssetLibrary library1){
			HX_STACK_FRAME("*","_Function_2_1",0x5201af78,"*._Function_2_1","openfl/utils/AssetLibrary.hx",86,0x41ec4c76)
			HX_STACK_ARG(library1,"library1")
			{
				HX_STACK_LINE(88)
				::openfl::utils::AssetLibrary tmp5 = ((::openfl::utils::AssetLibrary)(library1));		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(88)
				::lime::app::Future tmp6 = ::lime::app::Future_obj::withValue(tmp5);		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(88)
				return tmp6;
			}
			return null();
		}
		HX_END_LOCAL_FUNC1(return)

		HX_STACK_LINE(86)
		::lime::app::Future tmp5 = tmp4->then( Dynamic(new _Function_2_1()));		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(86)
		return tmp5;
	}
	else{
		HX_STACK_LINE(94)
		::lime::app::Future tmp4 = ::lime::app::Future_obj::withError(HX_HCSTRING("Could not load asset manifest","\xcd","\xc6","\x09","\x7f"));		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(94)
		::lime::app::Future tmp5 = tmp4;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(94)
		return tmp5;
	}
	HX_STACK_LINE(84)
	return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(AssetLibrary_obj,loadFromManifest,return )


AssetLibrary_obj::AssetLibrary_obj()
{
}

Dynamic AssetLibrary_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 12:
		if (HX_FIELD_EQ(inName,"getMovieClip") ) { return getMovieClip_dyn(); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"loadMovieClip") ) { return loadMovieClip_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

bool AssetLibrary_obj::__GetStatic(const ::String &inName, Dynamic &outValue, hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 8:
		if (HX_FIELD_EQ(inName,"fromFile") ) { outValue = fromFile_dyn(); return true;  }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"fromBytes") ) { outValue = fromBytes_dyn(); return true;  }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"fromManifest") ) { outValue = fromManifest_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"loadFromFile") ) { outValue = loadFromFile_dyn(); return true;  }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"loadFromBytes") ) { outValue = loadFromBytes_dyn(); return true;  }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"loadFromManifest") ) { outValue = loadFromManifest_dyn(); return true;  }
	}
	return false;
}

#if HXCPP_SCRIPTABLE
static hx::StorageInfo *sMemberStorageInfo = 0;
static hx::StaticInfo *sStaticStorageInfo = 0;
#endif

static ::String sMemberFields[] = {
	HX_HCSTRING("getMovieClip","\x2a","\x9f","\x71","\x27"),
	HX_HCSTRING("loadMovieClip","\x9a","\xd3","\x80","\x9a"),
	::String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(AssetLibrary_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(AssetLibrary_obj::__mClass,"__mClass");
};

#endif

hx::Class AssetLibrary_obj::__mClass;

static ::String sStaticFields[] = {
	HX_HCSTRING("fromBytes","\xa1","\xf2","\x20","\x72"),
	HX_HCSTRING("fromFile","\x06","\x9d","\x87","\xa1"),
	HX_HCSTRING("fromManifest","\x39","\xd7","\x40","\x70"),
	HX_HCSTRING("loadFromBytes","\x9b","\xc3","\x86","\xf4"),
	HX_HCSTRING("loadFromFile","\x4c","\x89","\xf0","\x5a"),
	HX_HCSTRING("loadFromManifest","\x7f","\x5e","\x9c","\xdc"),
	::String(null()) };

void AssetLibrary_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("openfl.utils.AssetLibrary","\x86","\xa1","\xe2","\x86");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &AssetLibrary_obj::__GetStatic;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(sStaticFields);
	__mClass->mMembers = hx::Class_obj::dupFunctions(sMemberFields);
	__mClass->mCanCast = hx::TCanCast< AssetLibrary_obj >;
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

} // end namespace openfl
} // end namespace utils
