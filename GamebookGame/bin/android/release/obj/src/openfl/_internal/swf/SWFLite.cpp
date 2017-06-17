#include <hxcpp.h>

#ifndef INCLUDED_Std
#include <Std.h>
#endif
#ifndef INCLUDED_StringTools
#include <StringTools.h>
#endif
#ifndef INCLUDED_Type
#include <Type.h>
#endif
#ifndef INCLUDED_haxe_IMap
#include <haxe/IMap.h>
#endif
#ifndef INCLUDED_haxe_Serializer
#include <haxe/Serializer.h>
#endif
#ifndef INCLUDED_haxe_Unserializer
#include <haxe/Unserializer.h>
#endif
#ifndef INCLUDED_haxe_ds_IntMap
#include <haxe/ds/IntMap.h>
#endif
#ifndef INCLUDED_haxe_ds_StringMap
#include <haxe/ds/StringMap.h>
#endif
#ifndef INCLUDED_lime_utils_AssetLibrary
#include <lime/utils/AssetLibrary.h>
#endif
#ifndef INCLUDED_openfl__internal_swf_SWFLite
#include <openfl/_internal/swf/SWFLite.h>
#endif
#ifndef INCLUDED_openfl__internal_swf_SWFLiteLibrary
#include <openfl/_internal/swf/SWFLiteLibrary.h>
#endif
#ifndef INCLUDED_openfl__internal_symbols_BitmapSymbol
#include <openfl/_internal/symbols/BitmapSymbol.h>
#endif
#ifndef INCLUDED_openfl__internal_symbols_SWFSymbol
#include <openfl/_internal/symbols/SWFSymbol.h>
#endif
#ifndef INCLUDED_openfl__internal_symbols_SpriteSymbol
#include <openfl/_internal/symbols/SpriteSymbol.h>
#endif
#ifndef INCLUDED_openfl_display_BitmapData
#include <openfl/display/BitmapData.h>
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
#ifndef INCLUDED_openfl_display_SimpleButton
#include <openfl/display/SimpleButton.h>
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
#ifndef INCLUDED_openfl_utils_Assets
#include <openfl/utils/Assets.h>
#endif
namespace openfl{
namespace _internal{
namespace swf{

Void SWFLite_obj::__construct()
{
{
	::haxe::ds::IntMap tmp;
	{
		::haxe::ds::IntMap tmp1 = ::haxe::ds::IntMap_obj::__new();
		::haxe::ds::IntMap tmp2 = tmp1;
		tmp = tmp2;
	}
	this->symbols = tmp;
}
;
	return null();
}

//SWFLite_obj::~SWFLite_obj() { }

Dynamic SWFLite_obj::__CreateEmpty() { return  new SWFLite_obj; }
hx::ObjectPtr< SWFLite_obj > SWFLite_obj::__new()
{  hx::ObjectPtr< SWFLite_obj > _result_ = new SWFLite_obj();
	_result_->__construct();
	return _result_;}

Dynamic SWFLite_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< SWFLite_obj > _result_ = new SWFLite_obj();
	_result_->__construct();
	return _result_;}

::openfl::display::SimpleButton SWFLite_obj::createButton( ::String className){
	return null();
}


HX_DEFINE_DYNAMIC_FUNC1(SWFLite_obj,createButton,return )

::openfl::display::MovieClip SWFLite_obj::createMovieClip( ::String __o_className){
::String className = __o_className.Default(HX_HCSTRING("","\x00","\x00","\x00","\x00"));
{
		bool tmp = (className == HX_HCSTRING("","\x00","\x00","\x00","\x00"));
		if ((tmp)){
			::openfl::_internal::symbols::SpriteSymbol tmp1 = this->root;
			::openfl::display::MovieClip tmp2 = hx::TCast< ::openfl::display::MovieClip >::cast(tmp1->__createObject(hx::ObjectPtr<OBJ_>(this)));
			::openfl::display::MovieClip tmp3 = tmp2;
			return tmp3;
		}
		else{
			::haxe::ds::IntMap tmp1 = this->symbols;
			Dynamic tmp2 = tmp1->iterator();
			for(::cpp::FastIterator_obj< ::openfl::_internal::symbols::SWFSymbol > *__it = ::cpp::CreateFastIterator< ::openfl::_internal::symbols::SWFSymbol >(tmp2);  __it->hasNext(); ){
				::openfl::_internal::symbols::SWFSymbol symbol = __it->next();
				{
					bool tmp3 = (symbol->className == className);
					if ((tmp3)){
						::openfl::_internal::symbols::SWFSymbol tmp4 = symbol;
						bool tmp5 = ::Std_obj::is(tmp4,hx::ClassOf< ::openfl::_internal::symbols::SpriteSymbol >());
						if ((tmp5)){
							::openfl::_internal::symbols::SpriteSymbol tmp6;
							tmp6 = hx::TCast< ::openfl::_internal::symbols::SpriteSymbol >::cast(symbol);
							::openfl::display::MovieClip tmp7 = hx::TCast< ::openfl::display::MovieClip >::cast(tmp6->__createObject(hx::ObjectPtr<OBJ_>(this)));
							return tmp7;
						}
					}
				}
;
			}
		}
		return null();
	}
}


HX_DEFINE_DYNAMIC_FUNC1(SWFLite_obj,createMovieClip,return )

::openfl::display::BitmapData SWFLite_obj::getBitmapData( ::String className){
	::haxe::ds::IntMap tmp = this->symbols;
	Dynamic tmp1 = tmp->iterator();
	for(::cpp::FastIterator_obj< ::openfl::_internal::symbols::SWFSymbol > *__it = ::cpp::CreateFastIterator< ::openfl::_internal::symbols::SWFSymbol >(tmp1);  __it->hasNext(); ){
		::openfl::_internal::symbols::SWFSymbol symbol = __it->next();
		{
			bool tmp2 = (symbol->className == className);
			if ((tmp2)){
				::openfl::_internal::symbols::SWFSymbol tmp3 = symbol;
				bool tmp4 = ::Std_obj::is(tmp3,hx::ClassOf< ::openfl::_internal::symbols::BitmapSymbol >());
				if ((tmp4)){
					::openfl::_internal::symbols::BitmapSymbol bitmap = ((::openfl::_internal::symbols::BitmapSymbol)(symbol));
					::String tmp5 = bitmap->path;
					::openfl::display::BitmapData tmp6 = ::openfl::utils::Assets_obj::getBitmapData(tmp5,null());
					return tmp6;
				}
			}
		}
;
	}
	return null();
}


HX_DEFINE_DYNAMIC_FUNC1(SWFLite_obj,getBitmapData,return )

bool SWFLite_obj::hasSymbol( ::String className){
	::haxe::ds::IntMap tmp = this->symbols;
	Dynamic tmp1 = tmp->iterator();
	for(::cpp::FastIterator_obj< ::openfl::_internal::symbols::SWFSymbol > *__it = ::cpp::CreateFastIterator< ::openfl::_internal::symbols::SWFSymbol >(tmp1);  __it->hasNext(); ){
		::openfl::_internal::symbols::SWFSymbol symbol = __it->next();
		{
			bool tmp2 = (symbol->className == className);
			if ((tmp2)){
				return true;
			}
		}
;
	}
	return false;
}


HX_DEFINE_DYNAMIC_FUNC1(SWFLite_obj,hasSymbol,return )

::String SWFLite_obj::serialize( ){
	::haxe::Serializer tmp = ::haxe::Serializer_obj::__new();
	::haxe::Serializer serializer = tmp;
	serializer->serialize(hx::ObjectPtr<OBJ_>(this));
	::String tmp1 = serializer->toString();
	return tmp1;
}


HX_DEFINE_DYNAMIC_FUNC0(SWFLite_obj,serialize,return )

::haxe::ds::StringMap SWFLite_obj::instances;

::hx::Class SWFLite_obj::resolveClass( ::String name){
	::String tmp = name;
	::hx::Class tmp1 = ::Type_obj::resolveClass(tmp);
	::hx::Class value = tmp1;
	bool tmp2 = (value == null());
	if ((tmp2)){
		::String tmp3 = name;
		::String tmp4 = ::StringTools_obj::replace(tmp3,HX_HCSTRING("openfl._legacy","\x0a","\x81","\xe4","\x28"),HX_HCSTRING("openfl","\x90","\x63","\x94","\x21"));
		::hx::Class tmp5 = ::Type_obj::resolveClass(tmp4);
		value = tmp5;
	}
	bool tmp3 = (value == null());
	if ((tmp3)){
		::String tmp4 = name;
		::String tmp5 = ::StringTools_obj::replace(tmp4,HX_HCSTRING("openfl._v2","\x3d","\xb9","\x65","\x2f"),HX_HCSTRING("openfl","\x90","\x63","\x94","\x21"));
		::hx::Class tmp6 = ::Type_obj::resolveClass(tmp5);
		value = tmp6;
	}
	::hx::Class tmp4 = value;
	return tmp4;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(SWFLite_obj,resolveClass,return )

::Enum SWFLite_obj::resolveEnum( ::String name){
	::String tmp = name;
	::Enum tmp1 = ::Type_obj::resolveEnum(tmp);
	::Enum value = tmp1;
	bool tmp2 = (value == null());
	if ((tmp2)){
		::String tmp3 = name;
		::String tmp4 = ::StringTools_obj::replace(tmp3,HX_HCSTRING("openfl._legacy","\x0a","\x81","\xe4","\x28"),HX_HCSTRING("openfl","\x90","\x63","\x94","\x21"));
		::Enum tmp5 = ::Type_obj::resolveEnum(tmp4);
		value = tmp5;
	}
	bool tmp3 = (value == null());
	if ((tmp3)){
		::String tmp4 = name;
		::String tmp5 = ::StringTools_obj::replace(tmp4,HX_HCSTRING("openfl._v2","\x3d","\xb9","\x65","\x2f"),HX_HCSTRING("openfl","\x90","\x63","\x94","\x21"));
		::Enum tmp6 = ::Type_obj::resolveEnum(tmp5);
		value = tmp6;
	}
	::Enum tmp4 = value;
	return tmp4;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(SWFLite_obj,resolveEnum,return )

::openfl::_internal::swf::SWFLite SWFLite_obj::unserialize( ::String data){
	bool tmp = (data == null());
	if ((tmp)){
		return null();
	}
	::haxe::Unserializer tmp1 = ::haxe::Unserializer_obj::__new(data);
	::haxe::Unserializer unserializer = tmp1;
	Dynamic tmp2 = ::openfl::_internal::swf::SWFLite_obj::resolveClass_dyn();
	Dynamic tmp3 = ::openfl::_internal::swf::SWFLite_obj::resolveEnum_dyn();
	struct _Function_1_1{
		inline static Dynamic Block( Dynamic &tmp2,Dynamic &tmp3){
			{
				hx::Anon __result = hx::Anon_obj::Create();
				__result->Add(HX_HCSTRING("resolveClass","\xac","\xbd","\xdd","\x80") , tmp2,false);
				__result->Add(HX_HCSTRING("resolveEnum","\x0d","\x90","\x51","\xde") , tmp3,false);
				return __result;
			}
			return null();
		}
	};
	Dynamic tmp4 = _Function_1_1::Block(tmp2,tmp3);
	unserializer->setResolver(tmp4);
	Dynamic tmp5 = unserializer->unserialize();
	::openfl::_internal::swf::SWFLite tmp6 = ((::openfl::_internal::swf::SWFLite)(tmp5));
	return tmp6;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(SWFLite_obj,unserialize,return )


SWFLite_obj::SWFLite_obj()
{
}

void SWFLite_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(SWFLite);
	HX_MARK_MEMBER_NAME(frameRate,"frameRate");
	HX_MARK_MEMBER_NAME(library,"library");
	HX_MARK_MEMBER_NAME(root,"root");
	HX_MARK_MEMBER_NAME(symbols,"symbols");
	HX_MARK_END_CLASS();
}

void SWFLite_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(frameRate,"frameRate");
	HX_VISIT_MEMBER_NAME(library,"library");
	HX_VISIT_MEMBER_NAME(root,"root");
	HX_VISIT_MEMBER_NAME(symbols,"symbols");
}

Dynamic SWFLite_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"root") ) { return root; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"library") ) { return library; }
		if (HX_FIELD_EQ(inName,"symbols") ) { return symbols; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"frameRate") ) { return frameRate; }
		if (HX_FIELD_EQ(inName,"hasSymbol") ) { return hasSymbol_dyn(); }
		if (HX_FIELD_EQ(inName,"serialize") ) { return serialize_dyn(); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"createButton") ) { return createButton_dyn(); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"getBitmapData") ) { return getBitmapData_dyn(); }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"createMovieClip") ) { return createMovieClip_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

bool SWFLite_obj::__GetStatic(const ::String &inName, Dynamic &outValue, hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 9:
		if (HX_FIELD_EQ(inName,"instances") ) { outValue = instances; return true;  }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"resolveEnum") ) { outValue = resolveEnum_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"unserialize") ) { outValue = unserialize_dyn(); return true;  }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"resolveClass") ) { outValue = resolveClass_dyn(); return true;  }
	}
	return false;
}

Dynamic SWFLite_obj::__SetField(const ::String &inName,const Dynamic &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"root") ) { root=inValue.Cast< ::openfl::_internal::symbols::SpriteSymbol >(); return inValue; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"library") ) { library=inValue.Cast< ::openfl::_internal::swf::SWFLiteLibrary >(); return inValue; }
		if (HX_FIELD_EQ(inName,"symbols") ) { symbols=inValue.Cast< ::haxe::ds::IntMap >(); return inValue; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"frameRate") ) { frameRate=inValue.Cast< Float >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

bool SWFLite_obj::__SetStatic(const ::String &inName,Dynamic &ioValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 9:
		if (HX_FIELD_EQ(inName,"instances") ) { instances=ioValue.Cast< ::haxe::ds::StringMap >(); return true; }
	}
	return false;
}

void SWFLite_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("frameRate","\xad","\x11","\x25","\x39"));
	outFields->push(HX_HCSTRING("library","\xfb","\x26","\x70","\x3f"));
	outFields->push(HX_HCSTRING("root","\x22","\xee","\xae","\x4b"));
	outFields->push(HX_HCSTRING("symbols","\x1b","\xbe","\x1b","\x13"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsFloat,(int)offsetof(SWFLite_obj,frameRate),HX_HCSTRING("frameRate","\xad","\x11","\x25","\x39")},
	{hx::fsObject /*::openfl::_internal::swf::SWFLiteLibrary*/ ,(int)offsetof(SWFLite_obj,library),HX_HCSTRING("library","\xfb","\x26","\x70","\x3f")},
	{hx::fsObject /*::openfl::_internal::symbols::SpriteSymbol*/ ,(int)offsetof(SWFLite_obj,root),HX_HCSTRING("root","\x22","\xee","\xae","\x4b")},
	{hx::fsObject /*::haxe::ds::IntMap*/ ,(int)offsetof(SWFLite_obj,symbols),HX_HCSTRING("symbols","\x1b","\xbe","\x1b","\x13")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo sStaticStorageInfo[] = {
	{hx::fsObject /*::haxe::ds::StringMap*/ ,(void *) &SWFLite_obj::instances,HX_HCSTRING("instances","\x3e","\x83","\x1a","\x4b")},
	{ hx::fsUnknown, 0, null()}
};
#endif

static ::String sMemberFields[] = {
	HX_HCSTRING("frameRate","\xad","\x11","\x25","\x39"),
	HX_HCSTRING("library","\xfb","\x26","\x70","\x3f"),
	HX_HCSTRING("root","\x22","\xee","\xae","\x4b"),
	HX_HCSTRING("symbols","\x1b","\xbe","\x1b","\x13"),
	HX_HCSTRING("createButton","\x0e","\xa2","\x35","\xfc"),
	HX_HCSTRING("createMovieClip","\x04","\xbc","\x0f","\xb9"),
	HX_HCSTRING("getBitmapData","\xef","\x11","\x33","\x90"),
	HX_HCSTRING("hasSymbol","\x52","\x62","\xc6","\x2f"),
	HX_HCSTRING("serialize","\xe0","\x5d","\xf2","\xf4"),
	::String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(SWFLite_obj::__mClass,"__mClass");
	HX_MARK_MEMBER_NAME(SWFLite_obj::instances,"instances");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(SWFLite_obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(SWFLite_obj::instances,"instances");
};

#endif

hx::Class SWFLite_obj::__mClass;

static ::String sStaticFields[] = {
	HX_HCSTRING("instances","\x3e","\x83","\x1a","\x4b"),
	HX_HCSTRING("resolveClass","\xac","\xbd","\xdd","\x80"),
	HX_HCSTRING("resolveEnum","\x0d","\x90","\x51","\xde"),
	HX_HCSTRING("unserialize","\x67","\xe4","\x98","\x7a"),
	::String(null()) };

void SWFLite_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("openfl._internal.swf.SWFLite","\x14","\x80","\x8f","\xa7");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &SWFLite_obj::__GetStatic;
	__mClass->mSetStaticField = &SWFLite_obj::__SetStatic;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(sStaticFields);
	__mClass->mMembers = hx::Class_obj::dupFunctions(sMemberFields);
	__mClass->mCanCast = hx::TCanCast< SWFLite_obj >;
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

void SWFLite_obj::__boot()
{
struct _Function_0_1{
	inline static ::haxe::ds::StringMap Block( ){
		{
			::haxe::ds::StringMap tmp = ::haxe::ds::StringMap_obj::__new();
			::haxe::ds::StringMap tmp1 = tmp;
			return tmp1;
		}
		return null();
	}
};
	instances= _Function_0_1::Block();
}

} // end namespace openfl
} // end namespace _internal
} // end namespace swf
