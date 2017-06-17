#include <hxcpp.h>

#ifndef INCLUDED_StringTools
#include <StringTools.h>
#endif
#ifndef INCLUDED_haxe_IMap
#include <haxe/IMap.h>
#endif
#ifndef INCLUDED_haxe_ds_StringMap
#include <haxe/ds/StringMap.h>
#endif
#ifndef INCLUDED_lime_text_Font
#include <lime/text/Font.h>
#endif
#ifndef INCLUDED_lime_utils_AssetCache
#include <lime/utils/AssetCache.h>
#endif
#ifndef INCLUDED_lime_utils_Assets
#include <lime/utils/Assets.h>
#endif
#ifndef INCLUDED_openfl_display_BitmapData
#include <openfl/display/BitmapData.h>
#endif
#ifndef INCLUDED_openfl_display_IBitmapDrawable
#include <openfl/display/IBitmapDrawable.h>
#endif
#ifndef INCLUDED_openfl_events_EventDispatcher
#include <openfl/events/EventDispatcher.h>
#endif
#ifndef INCLUDED_openfl_events_IEventDispatcher
#include <openfl/events/IEventDispatcher.h>
#endif
#ifndef INCLUDED_openfl_media_Sound
#include <openfl/media/Sound.h>
#endif
#ifndef INCLUDED_openfl_text_Font
#include <openfl/text/Font.h>
#endif
#ifndef INCLUDED_openfl_utils_AssetCache
#include <openfl/utils/AssetCache.h>
#endif
#ifndef INCLUDED_openfl_utils_IAssetCache
#include <openfl/utils/IAssetCache.h>
#endif
namespace openfl{
namespace utils{

Void AssetCache_obj::__construct()
{
HX_STACK_FRAME("openfl.utils.AssetCache","new",0x1485f77f,"openfl.utils.AssetCache.new","openfl/utils/AssetCache.hx",10,0xffd5b4cf)
HX_STACK_THIS(this)
{
	HX_STACK_LINE(19)
	this->__enabled = true;
	HX_STACK_LINE(24)
	::haxe::ds::StringMap tmp;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(24)
	{
		HX_STACK_LINE(24)
		::haxe::ds::StringMap tmp1 = ::haxe::ds::StringMap_obj::__new();		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(24)
		::haxe::ds::StringMap tmp2 = tmp1;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(24)
		tmp = tmp2;
	}
	HX_STACK_LINE(24)
	this->bitmapData = tmp;
	HX_STACK_LINE(25)
	::haxe::ds::StringMap tmp1;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(25)
	{
		HX_STACK_LINE(25)
		::haxe::ds::StringMap tmp2 = ::haxe::ds::StringMap_obj::__new();		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(25)
		::haxe::ds::StringMap tmp3 = tmp2;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(25)
		tmp1 = tmp3;
	}
	HX_STACK_LINE(25)
	this->font = tmp1;
	HX_STACK_LINE(26)
	::haxe::ds::StringMap tmp2;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(26)
	{
		HX_STACK_LINE(26)
		::haxe::ds::StringMap tmp3 = ::haxe::ds::StringMap_obj::__new();		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(26)
		::haxe::ds::StringMap tmp4 = tmp3;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(26)
		tmp2 = tmp4;
	}
	HX_STACK_LINE(26)
	this->sound = tmp2;
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

hx::Object *AssetCache_obj::__ToInterface(const hx::type_info &inType) {
	if (inType==typeid( ::openfl::utils::IAssetCache_obj)) return operator ::openfl::utils::IAssetCache_obj *();
	return super::__ToInterface(inType);
}

AssetCache_obj::operator ::openfl::utils::IAssetCache_obj *()
	{ return new ::openfl::utils::IAssetCache_delegate_< AssetCache_obj >(this); }
Void AssetCache_obj::clear( ::String prefix){
{
		HX_STACK_FRAME("openfl.utils.AssetCache","clear",0x6abcde6c,"openfl.utils.AssetCache.clear","openfl/utils/AssetCache.hx",31,0xffd5b4cf)
		HX_STACK_THIS(this)
		HX_STACK_ARG(prefix,"prefix")
		HX_STACK_LINE(33)
		bool tmp = (prefix == null());		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(33)
		if ((tmp)){
			HX_STACK_LINE(35)
			::haxe::ds::StringMap tmp1;		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(35)
			{
				HX_STACK_LINE(35)
				::haxe::ds::StringMap tmp2 = ::haxe::ds::StringMap_obj::__new();		HX_STACK_VAR(tmp2,"tmp2");
				HX_STACK_LINE(35)
				::haxe::ds::StringMap tmp3 = tmp2;		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(35)
				tmp1 = tmp3;
			}
			HX_STACK_LINE(35)
			this->bitmapData = tmp1;
			HX_STACK_LINE(36)
			::haxe::ds::StringMap tmp2;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(36)
			{
				HX_STACK_LINE(36)
				::haxe::ds::StringMap tmp3 = ::haxe::ds::StringMap_obj::__new();		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(36)
				::haxe::ds::StringMap tmp4 = tmp3;		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(36)
				tmp2 = tmp4;
			}
			HX_STACK_LINE(36)
			this->font = tmp2;
			HX_STACK_LINE(37)
			::haxe::ds::StringMap tmp3;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(37)
			{
				HX_STACK_LINE(37)
				::haxe::ds::StringMap tmp4 = ::haxe::ds::StringMap_obj::__new();		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(37)
				::haxe::ds::StringMap tmp5 = tmp4;		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(37)
				tmp3 = tmp5;
			}
			HX_STACK_LINE(37)
			this->sound = tmp3;
		}
		else{
			HX_STACK_LINE(41)
			::haxe::ds::StringMap tmp1 = this->bitmapData;		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(41)
			Dynamic tmp2 = tmp1->keys();		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(41)
			Dynamic keys = tmp2;		HX_STACK_VAR(keys,"keys");
			HX_STACK_LINE(43)
			Dynamic tmp3 = keys;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(43)
			for(::cpp::FastIterator_obj< ::String > *__it = ::cpp::CreateFastIterator< ::String >(tmp3);  __it->hasNext(); ){
				::String key = __it->next();
				{
					HX_STACK_LINE(45)
					::String tmp4 = key;		HX_STACK_VAR(tmp4,"tmp4");
					HX_STACK_LINE(45)
					::String tmp5 = prefix;		HX_STACK_VAR(tmp5,"tmp5");
					HX_STACK_LINE(45)
					bool tmp6 = ::StringTools_obj::startsWith(tmp4,tmp5);		HX_STACK_VAR(tmp6,"tmp6");
					HX_STACK_LINE(45)
					if ((tmp6)){
						HX_STACK_LINE(47)
						::String tmp7 = key;		HX_STACK_VAR(tmp7,"tmp7");
						HX_STACK_LINE(47)
						this->removeBitmapData(tmp7);
					}
				}
;
			}
			HX_STACK_LINE(53)
			::haxe::ds::StringMap tmp4 = this->font;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(53)
			Dynamic tmp5 = tmp4->keys();		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(53)
			Dynamic keys1 = tmp5;		HX_STACK_VAR(keys1,"keys1");
			HX_STACK_LINE(55)
			Dynamic tmp6 = keys1;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(55)
			for(::cpp::FastIterator_obj< ::String > *__it = ::cpp::CreateFastIterator< ::String >(tmp6);  __it->hasNext(); ){
				::String key = __it->next();
				{
					HX_STACK_LINE(57)
					::String tmp7 = key;		HX_STACK_VAR(tmp7,"tmp7");
					HX_STACK_LINE(57)
					::String tmp8 = prefix;		HX_STACK_VAR(tmp8,"tmp8");
					HX_STACK_LINE(57)
					bool tmp9 = ::StringTools_obj::startsWith(tmp7,tmp8);		HX_STACK_VAR(tmp9,"tmp9");
					HX_STACK_LINE(57)
					if ((tmp9)){
						HX_STACK_LINE(59)
						::String tmp10 = key;		HX_STACK_VAR(tmp10,"tmp10");
						HX_STACK_LINE(59)
						this->removeFont(tmp10);
					}
				}
;
			}
			HX_STACK_LINE(65)
			::haxe::ds::StringMap tmp7 = this->sound;		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(65)
			Dynamic tmp8 = tmp7->keys();		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(65)
			Dynamic keys2 = tmp8;		HX_STACK_VAR(keys2,"keys2");
			HX_STACK_LINE(67)
			Dynamic tmp9 = keys2;		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(67)
			for(::cpp::FastIterator_obj< ::String > *__it = ::cpp::CreateFastIterator< ::String >(tmp9);  __it->hasNext(); ){
				::String key = __it->next();
				{
					HX_STACK_LINE(69)
					::String tmp10 = key;		HX_STACK_VAR(tmp10,"tmp10");
					HX_STACK_LINE(69)
					::String tmp11 = prefix;		HX_STACK_VAR(tmp11,"tmp11");
					HX_STACK_LINE(69)
					bool tmp12 = ::StringTools_obj::startsWith(tmp10,tmp11);		HX_STACK_VAR(tmp12,"tmp12");
					HX_STACK_LINE(69)
					if ((tmp12)){
						HX_STACK_LINE(71)
						::String tmp13 = key;		HX_STACK_VAR(tmp13,"tmp13");
						HX_STACK_LINE(71)
						this->removeSound(tmp13);
					}
				}
;
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(AssetCache_obj,clear,(void))

::openfl::display::BitmapData AssetCache_obj::getBitmapData( ::String id){
	HX_STACK_FRAME("openfl.utils.AssetCache","getBitmapData",0x142af5ce,"openfl.utils.AssetCache.getBitmapData","openfl/utils/AssetCache.hx",82,0xffd5b4cf)
	HX_STACK_THIS(this)
	HX_STACK_ARG(id,"id")
	HX_STACK_LINE(84)
	::haxe::ds::StringMap tmp = this->bitmapData;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(84)
	::String tmp1 = id;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(84)
	::openfl::display::BitmapData tmp2 = tmp->get(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(84)
	::openfl::display::BitmapData tmp3 = tmp2;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(84)
	return tmp3;
}


HX_DEFINE_DYNAMIC_FUNC1(AssetCache_obj,getBitmapData,return )

::openfl::text::Font AssetCache_obj::getFont( ::String id){
	HX_STACK_FRAME("openfl.utils.AssetCache","getFont",0xa580b024,"openfl.utils.AssetCache.getFont","openfl/utils/AssetCache.hx",89,0xffd5b4cf)
	HX_STACK_THIS(this)
	HX_STACK_ARG(id,"id")
	HX_STACK_LINE(91)
	::haxe::ds::StringMap tmp = this->font;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(91)
	::String tmp1 = id;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(91)
	::openfl::text::Font tmp2 = tmp->get(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(91)
	::openfl::text::Font tmp3 = tmp2;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(91)
	return tmp3;
}


HX_DEFINE_DYNAMIC_FUNC1(AssetCache_obj,getFont,return )

::openfl::media::Sound AssetCache_obj::getSound( ::String id){
	HX_STACK_FRAME("openfl.utils.AssetCache","getSound",0xa75444da,"openfl.utils.AssetCache.getSound","openfl/utils/AssetCache.hx",96,0xffd5b4cf)
	HX_STACK_THIS(this)
	HX_STACK_ARG(id,"id")
	HX_STACK_LINE(98)
	::haxe::ds::StringMap tmp = this->sound;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(98)
	::String tmp1 = id;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(98)
	::openfl::media::Sound tmp2 = tmp->get(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(98)
	::openfl::media::Sound tmp3 = tmp2;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(98)
	return tmp3;
}


HX_DEFINE_DYNAMIC_FUNC1(AssetCache_obj,getSound,return )

bool AssetCache_obj::hasBitmapData( ::String id){
	HX_STACK_FRAME("openfl.utils.AssetCache","hasBitmapData",0xd20f5192,"openfl.utils.AssetCache.hasBitmapData","openfl/utils/AssetCache.hx",103,0xffd5b4cf)
	HX_STACK_THIS(this)
	HX_STACK_ARG(id,"id")
	HX_STACK_LINE(105)
	::haxe::ds::StringMap tmp = this->bitmapData;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(105)
	::String tmp1 = id;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(105)
	bool tmp2 = tmp->exists(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(105)
	return tmp2;
}


HX_DEFINE_DYNAMIC_FUNC1(AssetCache_obj,hasBitmapData,return )

bool AssetCache_obj::hasFont( ::String id){
	HX_STACK_FRAME("openfl.utils.AssetCache","hasFont",0xa24220e8,"openfl.utils.AssetCache.hasFont","openfl/utils/AssetCache.hx",110,0xffd5b4cf)
	HX_STACK_THIS(this)
	HX_STACK_ARG(id,"id")
	HX_STACK_LINE(112)
	::haxe::ds::StringMap tmp = this->font;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(112)
	::String tmp1 = id;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(112)
	bool tmp2 = tmp->exists(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(112)
	return tmp2;
}


HX_DEFINE_DYNAMIC_FUNC1(AssetCache_obj,hasFont,return )

bool AssetCache_obj::hasSound( ::String id){
	HX_STACK_FRAME("openfl.utils.AssetCache","hasSound",0xd3d57f96,"openfl.utils.AssetCache.hasSound","openfl/utils/AssetCache.hx",117,0xffd5b4cf)
	HX_STACK_THIS(this)
	HX_STACK_ARG(id,"id")
	HX_STACK_LINE(119)
	::haxe::ds::StringMap tmp = this->sound;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(119)
	::String tmp1 = id;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(119)
	bool tmp2 = tmp->exists(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(119)
	return tmp2;
}


HX_DEFINE_DYNAMIC_FUNC1(AssetCache_obj,hasSound,return )

bool AssetCache_obj::removeBitmapData( ::String id){
	HX_STACK_FRAME("openfl.utils.AssetCache","removeBitmapData",0x9ca8649e,"openfl.utils.AssetCache.removeBitmapData","openfl/utils/AssetCache.hx",124,0xffd5b4cf)
	HX_STACK_THIS(this)
	HX_STACK_ARG(id,"id")
	HX_STACK_LINE(126)
	::lime::utils::AssetCache tmp = ::lime::utils::Assets_obj::cache;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(126)
	::String tmp1 = id;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(126)
	tmp->image->remove(tmp1);
	HX_STACK_LINE(127)
	::haxe::ds::StringMap tmp2 = this->bitmapData;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(127)
	::String tmp3 = id;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(127)
	bool tmp4 = tmp2->remove(tmp3);		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(127)
	return tmp4;
}


HX_DEFINE_DYNAMIC_FUNC1(AssetCache_obj,removeBitmapData,return )

bool AssetCache_obj::removeFont( ::String id){
	HX_STACK_FRAME("openfl.utils.AssetCache","removeFont",0x136c22f4,"openfl.utils.AssetCache.removeFont","openfl/utils/AssetCache.hx",132,0xffd5b4cf)
	HX_STACK_THIS(this)
	HX_STACK_ARG(id,"id")
	HX_STACK_LINE(134)
	::lime::utils::AssetCache tmp = ::lime::utils::Assets_obj::cache;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(134)
	::String tmp1 = id;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(134)
	tmp->font->remove(tmp1);
	HX_STACK_LINE(135)
	::haxe::ds::StringMap tmp2 = this->font;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(135)
	::String tmp3 = id;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(135)
	bool tmp4 = tmp2->remove(tmp3);		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(135)
	return tmp4;
}


HX_DEFINE_DYNAMIC_FUNC1(AssetCache_obj,removeFont,return )

bool AssetCache_obj::removeSound( ::String id){
	HX_STACK_FRAME("openfl.utils.AssetCache","removeSound",0x676d480a,"openfl.utils.AssetCache.removeSound","openfl/utils/AssetCache.hx",140,0xffd5b4cf)
	HX_STACK_THIS(this)
	HX_STACK_ARG(id,"id")
	HX_STACK_LINE(142)
	::lime::utils::AssetCache tmp = ::lime::utils::Assets_obj::cache;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(142)
	::String tmp1 = id;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(142)
	tmp->audio->remove(tmp1);
	HX_STACK_LINE(143)
	::haxe::ds::StringMap tmp2 = this->sound;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(143)
	::String tmp3 = id;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(143)
	bool tmp4 = tmp2->remove(tmp3);		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(143)
	return tmp4;
}


HX_DEFINE_DYNAMIC_FUNC1(AssetCache_obj,removeSound,return )

Void AssetCache_obj::setBitmapData( ::String id,::openfl::display::BitmapData bitmapData){
{
		HX_STACK_FRAME("openfl.utils.AssetCache","setBitmapData",0x5930d7da,"openfl.utils.AssetCache.setBitmapData","openfl/utils/AssetCache.hx",148,0xffd5b4cf)
		HX_STACK_THIS(this)
		HX_STACK_ARG(id,"id")
		HX_STACK_ARG(bitmapData,"bitmapData")
		HX_STACK_LINE(150)
		::haxe::ds::StringMap tmp = this->bitmapData;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(150)
		::String tmp1 = id;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(150)
		::openfl::display::BitmapData tmp2 = bitmapData;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(150)
		tmp->set(tmp1,tmp2);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(AssetCache_obj,setBitmapData,(void))

Void AssetCache_obj::setFont( ::String id,::openfl::text::Font font){
{
		HX_STACK_FRAME("openfl.utils.AssetCache","setFont",0x98824130,"openfl.utils.AssetCache.setFont","openfl/utils/AssetCache.hx",155,0xffd5b4cf)
		HX_STACK_THIS(this)
		HX_STACK_ARG(id,"id")
		HX_STACK_ARG(font,"font")
		HX_STACK_LINE(157)
		::haxe::ds::StringMap tmp = this->font;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(157)
		::String tmp1 = id;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(157)
		::openfl::text::Font tmp2 = font;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(157)
		tmp->set(tmp1,tmp2);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(AssetCache_obj,setFont,(void))

Void AssetCache_obj::setSound( ::String id,::openfl::media::Sound sound){
{
		HX_STACK_FRAME("openfl.utils.AssetCache","setSound",0x55b19e4e,"openfl.utils.AssetCache.setSound","openfl/utils/AssetCache.hx",162,0xffd5b4cf)
		HX_STACK_THIS(this)
		HX_STACK_ARG(id,"id")
		HX_STACK_ARG(sound,"sound")
		HX_STACK_LINE(164)
		::haxe::ds::StringMap tmp = this->sound;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(164)
		::String tmp1 = id;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(164)
		::openfl::media::Sound tmp2 = sound;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(164)
		tmp->set(tmp1,tmp2);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(AssetCache_obj,setSound,(void))

bool AssetCache_obj::get_enabled( ){
	HX_STACK_FRAME("openfl.utils.AssetCache","get_enabled",0xec9842b7,"openfl.utils.AssetCache.get_enabled","openfl/utils/AssetCache.hx",176,0xffd5b4cf)
	HX_STACK_THIS(this)
	HX_STACK_LINE(178)
	bool tmp = this->__enabled;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(178)
	return tmp;
}


HX_DEFINE_DYNAMIC_FUNC0(AssetCache_obj,get_enabled,return )

bool AssetCache_obj::set_enabled( bool value){
	HX_STACK_FRAME("openfl.utils.AssetCache","set_enabled",0xf70549c3,"openfl.utils.AssetCache.set_enabled","openfl/utils/AssetCache.hx",183,0xffd5b4cf)
	HX_STACK_THIS(this)
	HX_STACK_ARG(value,"value")
	HX_STACK_LINE(185)
	bool tmp = this->__enabled = value;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(185)
	return tmp;
}


HX_DEFINE_DYNAMIC_FUNC1(AssetCache_obj,set_enabled,return )


AssetCache_obj::AssetCache_obj()
{
}

void AssetCache_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(AssetCache);
	HX_MARK_MEMBER_NAME(bitmapData,"bitmapData");
	HX_MARK_MEMBER_NAME(font,"font");
	HX_MARK_MEMBER_NAME(sound,"sound");
	HX_MARK_MEMBER_NAME(__enabled,"__enabled");
	HX_MARK_END_CLASS();
}

void AssetCache_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(bitmapData,"bitmapData");
	HX_VISIT_MEMBER_NAME(font,"font");
	HX_VISIT_MEMBER_NAME(sound,"sound");
	HX_VISIT_MEMBER_NAME(__enabled,"__enabled");
}

Dynamic AssetCache_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"font") ) { return font; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"sound") ) { return sound; }
		if (HX_FIELD_EQ(inName,"clear") ) { return clear_dyn(); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"enabled") ) { if (inCallProp == hx::paccAlways) return get_enabled(); }
		if (HX_FIELD_EQ(inName,"getFont") ) { return getFont_dyn(); }
		if (HX_FIELD_EQ(inName,"hasFont") ) { return hasFont_dyn(); }
		if (HX_FIELD_EQ(inName,"setFont") ) { return setFont_dyn(); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"getSound") ) { return getSound_dyn(); }
		if (HX_FIELD_EQ(inName,"hasSound") ) { return hasSound_dyn(); }
		if (HX_FIELD_EQ(inName,"setSound") ) { return setSound_dyn(); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"__enabled") ) { return __enabled; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"bitmapData") ) { return bitmapData; }
		if (HX_FIELD_EQ(inName,"removeFont") ) { return removeFont_dyn(); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"removeSound") ) { return removeSound_dyn(); }
		if (HX_FIELD_EQ(inName,"get_enabled") ) { return get_enabled_dyn(); }
		if (HX_FIELD_EQ(inName,"set_enabled") ) { return set_enabled_dyn(); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"getBitmapData") ) { return getBitmapData_dyn(); }
		if (HX_FIELD_EQ(inName,"hasBitmapData") ) { return hasBitmapData_dyn(); }
		if (HX_FIELD_EQ(inName,"setBitmapData") ) { return setBitmapData_dyn(); }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"removeBitmapData") ) { return removeBitmapData_dyn(); }
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
		if (HX_FIELD_EQ(inName,"sound") ) { sound=inValue.Cast< ::haxe::ds::StringMap >(); return inValue; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"enabled") ) { if (inCallProp == hx::paccAlways) return set_enabled(inValue); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"__enabled") ) { __enabled=inValue.Cast< bool >(); return inValue; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"bitmapData") ) { bitmapData=inValue.Cast< ::haxe::ds::StringMap >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void AssetCache_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("enabled","\x81","\x04","\x31","\x7e"));
	outFields->push(HX_HCSTRING("bitmapData","\xb9","\xb5","\xc0","\x33"));
	outFields->push(HX_HCSTRING("font","\xcf","\x5d","\xc0","\x43"));
	outFields->push(HX_HCSTRING("sound","\xcf","\x8c","\xcc","\x80"));
	outFields->push(HX_HCSTRING("__enabled","\x61","\x55","\x7f","\xff"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsObject /*::haxe::ds::StringMap*/ ,(int)offsetof(AssetCache_obj,bitmapData),HX_HCSTRING("bitmapData","\xb9","\xb5","\xc0","\x33")},
	{hx::fsObject /*::haxe::ds::StringMap*/ ,(int)offsetof(AssetCache_obj,font),HX_HCSTRING("font","\xcf","\x5d","\xc0","\x43")},
	{hx::fsObject /*::haxe::ds::StringMap*/ ,(int)offsetof(AssetCache_obj,sound),HX_HCSTRING("sound","\xcf","\x8c","\xcc","\x80")},
	{hx::fsBool,(int)offsetof(AssetCache_obj,__enabled),HX_HCSTRING("__enabled","\x61","\x55","\x7f","\xff")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo *sStaticStorageInfo = 0;
#endif

static ::String sMemberFields[] = {
	HX_HCSTRING("bitmapData","\xb9","\xb5","\xc0","\x33"),
	HX_HCSTRING("font","\xcf","\x5d","\xc0","\x43"),
	HX_HCSTRING("sound","\xcf","\x8c","\xcc","\x80"),
	HX_HCSTRING("__enabled","\x61","\x55","\x7f","\xff"),
	HX_HCSTRING("clear","\x8d","\x71","\x5b","\x48"),
	HX_HCSTRING("getBitmapData","\xef","\x11","\x33","\x90"),
	HX_HCSTRING("getFont","\x85","\x0d","\x43","\x16"),
	HX_HCSTRING("getSound","\x59","\x9c","\xa3","\xe0"),
	HX_HCSTRING("hasBitmapData","\xb3","\x6d","\x17","\x4e"),
	HX_HCSTRING("hasFont","\x49","\x7e","\x04","\x13"),
	HX_HCSTRING("hasSound","\x15","\xd7","\x24","\x0d"),
	HX_HCSTRING("removeBitmapData","\x1d","\xd3","\x69","\xed"),
	HX_HCSTRING("removeFont","\x33","\x98","\xdf","\xc0"),
	HX_HCSTRING("removeSound","\xeb","\x69","\x00","\x7f"),
	HX_HCSTRING("setBitmapData","\xfb","\xf3","\x38","\xd5"),
	HX_HCSTRING("setFont","\x91","\x9e","\x44","\x09"),
	HX_HCSTRING("setSound","\xcd","\xf5","\x00","\x8f"),
	HX_HCSTRING("get_enabled","\x98","\x64","\x2b","\x04"),
	HX_HCSTRING("set_enabled","\xa4","\x6b","\x98","\x0e"),
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
	__mClass->mName = HX_HCSTRING("openfl.utils.AssetCache","\x0d","\xcc","\x3e","\xc4");
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

} // end namespace openfl
} // end namespace utils
