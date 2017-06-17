#include <hxcpp.h>

#ifndef INCLUDED_Std
#include <Std.h>
#endif
#ifndef INCLUDED_StringTools
#include <StringTools.h>
#endif
#ifndef INCLUDED_haxe_IMap
#include <haxe/IMap.h>
#endif
#ifndef INCLUDED_haxe_ds_StringMap
#include <haxe/ds/StringMap.h>
#endif
#ifndef INCLUDED_lime_graphics_Image
#include <lime/graphics/Image.h>
#endif
#ifndef INCLUDED_lime_media_AudioBuffer
#include <lime/media/AudioBuffer.h>
#endif
#ifndef INCLUDED_lime_utils_AssetCache
#include <lime/utils/AssetCache.h>
#endif
namespace lime{
namespace utils{

Void AssetCache_obj::__construct()
{
{
	this->enabled = true;
	::haxe::ds::StringMap tmp;
	{
		::haxe::ds::StringMap tmp1 = ::haxe::ds::StringMap_obj::__new();
		::haxe::ds::StringMap tmp2 = tmp1;
		tmp = tmp2;
	}
	this->audio = tmp;
	::haxe::ds::StringMap tmp1;
	{
		::haxe::ds::StringMap tmp2 = ::haxe::ds::StringMap_obj::__new();
		::haxe::ds::StringMap tmp3 = tmp2;
		tmp1 = tmp3;
	}
	this->font = tmp1;
	::haxe::ds::StringMap tmp2;
	{
		::haxe::ds::StringMap tmp3 = ::haxe::ds::StringMap_obj::__new();
		::haxe::ds::StringMap tmp4 = tmp3;
		tmp2 = tmp4;
	}
	this->image = tmp2;
	this->version = (int)484030;
}
;
	return null();
}

//AssetCache_obj::~AssetCache_obj() { }

Dynamic AssetCache_obj::__CreateEmpty() { return  new AssetCache_obj; }
hx::ObjectPtr< AssetCache_obj > AssetCache_obj::__new()
{  hx::ObjectPtr< AssetCache_obj > _result_ = new AssetCache_obj();
	_result_->__construct();
	return _result_;}

Dynamic AssetCache_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< AssetCache_obj > _result_ = new AssetCache_obj();
	_result_->__construct();
	return _result_;}

bool AssetCache_obj::exists( ::String id,::String type){
	bool tmp = (type == HX_HCSTRING("IMAGE","\x3b","\x57","\x57","\x3b"));
	bool tmp1 = !(tmp);
	bool tmp2;
	if ((tmp1)){
		tmp2 = (type == null());
	}
	else{
		tmp2 = true;
	}
	if ((tmp2)){
		::haxe::ds::StringMap tmp3 = this->image;
		::String tmp4 = id;
		bool tmp5 = tmp3->exists(tmp4);
		if ((tmp5)){
			return true;
		}
	}
	bool tmp3 = (type == HX_HCSTRING("FONT","\xcf","\x25","\x81","\x2e"));
	bool tmp4 = !(tmp3);
	bool tmp5;
	if ((tmp4)){
		tmp5 = (type == null());
	}
	else{
		tmp5 = true;
	}
	if ((tmp5)){
		::haxe::ds::StringMap tmp6 = this->font;
		::String tmp7 = id;
		bool tmp8 = tmp6->exists(tmp7);
		if ((tmp8)){
			return true;
		}
	}
	bool tmp6 = (type == HX_HCSTRING("SOUND","\xaf","\xc4","\xba","\xfe"));
	bool tmp7 = !(tmp6);
	bool tmp8 = tmp7;
	bool tmp9;
	if ((tmp8)){
		tmp9 = (type == HX_HCSTRING("MUSIC","\x85","\x08","\x49","\x8e"));
	}
	else{
		tmp9 = true;
	}
	bool tmp10 = !(tmp9);
	bool tmp11;
	if ((tmp10)){
		tmp11 = (type == null());
	}
	else{
		tmp11 = true;
	}
	if ((tmp11)){
		::haxe::ds::StringMap tmp12 = this->audio;
		::String tmp13 = id;
		bool tmp14 = tmp12->exists(tmp13);
		if ((tmp14)){
			return true;
		}
	}
	return false;
}


HX_DEFINE_DYNAMIC_FUNC2(AssetCache_obj,exists,return )

Void AssetCache_obj::set( ::String id,::String type,Dynamic asset){
{
		::String tmp = type;
		::String _switch_1 = (tmp);
		if (  ( _switch_1==HX_HCSTRING("FONT","\xcf","\x25","\x81","\x2e"))){
			Dynamic value = asset;
			::haxe::ds::StringMap tmp1 = this->font;
			::String tmp2 = id;
			Dynamic tmp3 = value;
			tmp1->set(tmp2,tmp3);
		}
		else if (  ( _switch_1==HX_HCSTRING("IMAGE","\x3b","\x57","\x57","\x3b"))){
			Dynamic tmp1 = asset;
			bool tmp2 = ::Std_obj::is(tmp1,hx::ClassOf< ::lime::graphics::Image >());
			bool tmp3 = !(tmp2);
			if ((tmp3)){
				Dynamic tmp4 = asset;
				::String tmp5 = ::Std_obj::string(tmp4);
				::String tmp6 = (HX_HCSTRING("Cannot cache non-Image asset: ","\xd6","\x62","\xc2","\x3a") + tmp5);
				::String tmp7 = (tmp6 + HX_HCSTRING(" as Image","\xad","\xd1","\x70","\xd4"));
				HX_STACK_DO_THROW(tmp7);
			}
			{
				::lime::graphics::Image value = asset;
				::haxe::ds::StringMap tmp4 = this->image;
				::String tmp5 = id;
				::lime::graphics::Image tmp6 = value;
				tmp4->set(tmp5,tmp6);
			}
		}
		else if (  ( _switch_1==HX_HCSTRING("SOUND","\xaf","\xc4","\xba","\xfe")) ||  ( _switch_1==HX_HCSTRING("MUSIC","\x85","\x08","\x49","\x8e"))){
			Dynamic tmp1 = asset;
			bool tmp2 = ::Std_obj::is(tmp1,hx::ClassOf< ::lime::media::AudioBuffer >());
			bool tmp3 = !(tmp2);
			if ((tmp3)){
				Dynamic tmp4 = asset;
				::String tmp5 = ::Std_obj::string(tmp4);
				::String tmp6 = (HX_HCSTRING("Cannot cache non-AudioBuffer asset: ","\xb1","\x96","\xa5","\x01") + tmp5);
				::String tmp7 = (tmp6 + HX_HCSTRING(" as AudioBuffer","\x48","\x2a","\xfe","\x73"));
				HX_STACK_DO_THROW(tmp7);
			}
			{
				::lime::media::AudioBuffer value = asset;
				::haxe::ds::StringMap tmp4 = this->audio;
				::String tmp5 = id;
				::lime::media::AudioBuffer tmp6 = value;
				tmp4->set(tmp5,tmp6);
			}
		}
		else  {
			::String tmp1 = (type + HX_HCSTRING(" assets are not cachable","\xf3","\x2d","\xee","\xfa"));
			HX_STACK_DO_THROW(tmp1);
		}
;
;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC3(AssetCache_obj,set,(void))

Void AssetCache_obj::clear( ::String prefix){
{
		bool tmp = (prefix == null());
		if ((tmp)){
			::haxe::ds::StringMap tmp1;
			{
				::haxe::ds::StringMap tmp2 = ::haxe::ds::StringMap_obj::__new();
				::haxe::ds::StringMap tmp3 = tmp2;
				tmp1 = tmp3;
			}
			this->audio = tmp1;
			::haxe::ds::StringMap tmp2;
			{
				::haxe::ds::StringMap tmp3 = ::haxe::ds::StringMap_obj::__new();
				::haxe::ds::StringMap tmp4 = tmp3;
				tmp2 = tmp4;
			}
			this->font = tmp2;
			::haxe::ds::StringMap tmp3;
			{
				::haxe::ds::StringMap tmp4 = ::haxe::ds::StringMap_obj::__new();
				::haxe::ds::StringMap tmp5 = tmp4;
				tmp3 = tmp5;
			}
			this->image = tmp3;
		}
		else{
			::haxe::ds::StringMap tmp1 = this->audio;
			Dynamic tmp2 = tmp1->keys();
			Dynamic keys = tmp2;
			Dynamic tmp3 = keys;
			for(::cpp::FastIterator_obj< ::String > *__it = ::cpp::CreateFastIterator< ::String >(tmp3);  __it->hasNext(); ){
				::String key = __it->next();
				{
					::String tmp4 = key;
					::String tmp5 = prefix;
					bool tmp6 = ::StringTools_obj::startsWith(tmp4,tmp5);
					if ((tmp6)){
						::haxe::ds::StringMap tmp7 = this->audio;
						::String tmp8 = key;
						tmp7->remove(tmp8);
					}
				}
;
			}
			::haxe::ds::StringMap tmp4 = this->font;
			Dynamic tmp5 = tmp4->keys();
			Dynamic keys1 = tmp5;
			Dynamic tmp6 = keys1;
			for(::cpp::FastIterator_obj< ::String > *__it = ::cpp::CreateFastIterator< ::String >(tmp6);  __it->hasNext(); ){
				::String key = __it->next();
				{
					::String tmp7 = key;
					::String tmp8 = prefix;
					bool tmp9 = ::StringTools_obj::startsWith(tmp7,tmp8);
					if ((tmp9)){
						::haxe::ds::StringMap tmp10 = this->font;
						::String tmp11 = key;
						tmp10->remove(tmp11);
					}
				}
;
			}
			::haxe::ds::StringMap tmp7 = this->image;
			Dynamic tmp8 = tmp7->keys();
			Dynamic keys2 = tmp8;
			Dynamic tmp9 = keys2;
			for(::cpp::FastIterator_obj< ::String > *__it = ::cpp::CreateFastIterator< ::String >(tmp9);  __it->hasNext(); ){
				::String key = __it->next();
				{
					::String tmp10 = key;
					::String tmp11 = prefix;
					bool tmp12 = ::StringTools_obj::startsWith(tmp10,tmp11);
					if ((tmp12)){
						::haxe::ds::StringMap tmp13 = this->image;
						::String tmp14 = key;
						tmp13->remove(tmp14);
					}
				}
;
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(AssetCache_obj,clear,(void))


AssetCache_obj::AssetCache_obj()
{
}

void AssetCache_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(AssetCache);
	HX_MARK_MEMBER_NAME(audio,"audio");
	HX_MARK_MEMBER_NAME(enabled,"enabled");
	HX_MARK_MEMBER_NAME(image,"image");
	HX_MARK_MEMBER_NAME(font,"font");
	HX_MARK_MEMBER_NAME(version,"version");
	HX_MARK_END_CLASS();
}

void AssetCache_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(audio,"audio");
	HX_VISIT_MEMBER_NAME(enabled,"enabled");
	HX_VISIT_MEMBER_NAME(image,"image");
	HX_VISIT_MEMBER_NAME(font,"font");
	HX_VISIT_MEMBER_NAME(version,"version");
}

Dynamic AssetCache_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"set") ) { return set_dyn(); }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"font") ) { return font; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"audio") ) { return audio; }
		if (HX_FIELD_EQ(inName,"image") ) { return image; }
		if (HX_FIELD_EQ(inName,"clear") ) { return clear_dyn(); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"exists") ) { return exists_dyn(); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"enabled") ) { return enabled; }
		if (HX_FIELD_EQ(inName,"version") ) { return version; }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic AssetCache_obj::__SetField(const ::String &inName,const Dynamic &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"font") ) { font=inValue.Cast< ::haxe::ds::StringMap >(); return inValue; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"audio") ) { audio=inValue.Cast< ::haxe::ds::StringMap >(); return inValue; }
		if (HX_FIELD_EQ(inName,"image") ) { image=inValue.Cast< ::haxe::ds::StringMap >(); return inValue; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"enabled") ) { enabled=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"version") ) { version=inValue.Cast< int >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void AssetCache_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("audio","\xd6","\x78","\x80","\x27"));
	outFields->push(HX_HCSTRING("enabled","\x81","\x04","\x31","\x7e"));
	outFields->push(HX_HCSTRING("image","\x5b","\x1f","\x69","\xbd"));
	outFields->push(HX_HCSTRING("font","\xcf","\x5d","\xc0","\x43"));
	outFields->push(HX_HCSTRING("version","\x18","\xe7","\xf1","\x7c"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsObject /*::haxe::ds::StringMap*/ ,(int)offsetof(AssetCache_obj,audio),HX_HCSTRING("audio","\xd6","\x78","\x80","\x27")},
	{hx::fsBool,(int)offsetof(AssetCache_obj,enabled),HX_HCSTRING("enabled","\x81","\x04","\x31","\x7e")},
	{hx::fsObject /*::haxe::ds::StringMap*/ ,(int)offsetof(AssetCache_obj,image),HX_HCSTRING("image","\x5b","\x1f","\x69","\xbd")},
	{hx::fsObject /*::haxe::ds::StringMap*/ ,(int)offsetof(AssetCache_obj,font),HX_HCSTRING("font","\xcf","\x5d","\xc0","\x43")},
	{hx::fsInt,(int)offsetof(AssetCache_obj,version),HX_HCSTRING("version","\x18","\xe7","\xf1","\x7c")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo *sStaticStorageInfo = 0;
#endif

static ::String sMemberFields[] = {
	HX_HCSTRING("audio","\xd6","\x78","\x80","\x27"),
	HX_HCSTRING("enabled","\x81","\x04","\x31","\x7e"),
	HX_HCSTRING("image","\x5b","\x1f","\x69","\xbd"),
	HX_HCSTRING("font","\xcf","\x5d","\xc0","\x43"),
	HX_HCSTRING("version","\x18","\xe7","\xf1","\x7c"),
	HX_HCSTRING("exists","\xdc","\x1d","\xe0","\xbf"),
	HX_HCSTRING("set","\xa2","\x9b","\x57","\x00"),
	HX_HCSTRING("clear","\x8d","\x71","\x5b","\x48"),
	::String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(AssetCache_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(AssetCache_obj::__mClass,"__mClass");
};

#endif

hx::Class AssetCache_obj::__mClass;

void AssetCache_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("lime.utils.AssetCache","\xe8","\xd2","\x51","\x4a");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = hx::Class_obj::dupFunctions(sMemberFields);
	__mClass->mCanCast = hx::TCanCast< AssetCache_obj >;
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
