#include <hxcpp.h>

#include "hxMath.h"
#ifndef INCLUDED_Reflect
#include <Reflect.h>
#endif
#ifndef INCLUDED_Std
#include <Std.h>
#endif
#ifndef INCLUDED_Type
#include <Type.h>
#endif
#ifndef INCLUDED_haxe_IMap
#include <haxe/IMap.h>
#endif
#ifndef INCLUDED_haxe_ds_StringMap
#include <haxe/ds/StringMap.h>
#endif
#ifndef INCLUDED_haxe_io_Bytes
#include <haxe/io/Bytes.h>
#endif
#ifndef INCLUDED_lime_app_Future
#include <lime/app/Future.h>
#endif
#ifndef INCLUDED_lime_app_Promise_lime_utils_AssetLibrary
#include <lime/app/Promise_lime_utils_AssetLibrary.h>
#endif
#ifndef INCLUDED_lime_app__Event_Void_Void
#include <lime/app/_Event_Void_Void.h>
#endif
#ifndef INCLUDED_lime_graphics_Image
#include <lime/graphics/Image.h>
#endif
#ifndef INCLUDED_lime_media_AudioBuffer
#include <lime/media/AudioBuffer.h>
#endif
#ifndef INCLUDED_lime_net__HTTPRequest_AbstractHTTPRequest
#include <lime/net/_HTTPRequest/AbstractHTTPRequest.h>
#endif
#ifndef INCLUDED_lime_net__HTTPRequest_String
#include <lime/net/_HTTPRequest_String.h>
#endif
#ifndef INCLUDED_lime_net__IHTTPRequest
#include <lime/net/_IHTTPRequest.h>
#endif
#ifndef INCLUDED_lime_text_Font
#include <lime/text/Font.h>
#endif
#ifndef INCLUDED_lime_utils_AssetLibrary
#include <lime/utils/AssetLibrary.h>
#endif
#ifndef INCLUDED_lime_utils_AssetManifest
#include <lime/utils/AssetManifest.h>
#endif
#ifndef INCLUDED_lime_utils_Log
#include <lime/utils/Log.h>
#endif
#ifndef INCLUDED_lime_utils__Bytes_Bytes_Impl_
#include <lime/utils/_Bytes/Bytes_Impl_.h>
#endif
namespace lime{
namespace utils{

Void AssetLibrary_obj::__construct()
{
{
	struct _Function_1_1{
		inline static ::haxe::ds::StringMap Block( ){
			{
				::haxe::ds::StringMap tmp = ::haxe::ds::StringMap_obj::__new();
				::haxe::ds::StringMap tmp1 = tmp;
				return tmp1;
			}
			return null();
		}
	};
	this->types = _Function_1_1::Block();
	struct _Function_1_2{
		inline static ::haxe::ds::StringMap Block( ){
			{
				::haxe::ds::StringMap tmp = ::haxe::ds::StringMap_obj::__new();
				::haxe::ds::StringMap tmp1 = tmp;
				return tmp1;
			}
			return null();
		}
	};
	this->sizes = _Function_1_2::Block();
	struct _Function_1_3{
		inline static ::haxe::ds::StringMap Block( ){
			{
				::haxe::ds::StringMap tmp = ::haxe::ds::StringMap_obj::__new();
				::haxe::ds::StringMap tmp1 = tmp;
				return tmp1;
			}
			return null();
		}
	};
	this->preload = _Function_1_3::Block();
	struct _Function_1_4{
		inline static ::haxe::ds::StringMap Block( ){
			{
				::haxe::ds::StringMap tmp = ::haxe::ds::StringMap_obj::__new();
				::haxe::ds::StringMap tmp1 = tmp;
				return tmp1;
			}
			return null();
		}
	};
	this->paths = _Function_1_4::Block();
	struct _Function_1_5{
		inline static ::haxe::ds::StringMap Block( ){
			{
				::haxe::ds::StringMap tmp = ::haxe::ds::StringMap_obj::__new();
				::haxe::ds::StringMap tmp1 = tmp;
				return tmp1;
			}
			return null();
		}
	};
	this->pathGroups = _Function_1_5::Block();
	struct _Function_1_6{
		inline static ::haxe::ds::StringMap Block( ){
			{
				::haxe::ds::StringMap tmp = ::haxe::ds::StringMap_obj::__new();
				::haxe::ds::StringMap tmp1 = tmp;
				return tmp1;
			}
			return null();
		}
	};
	this->classTypes = _Function_1_6::Block();
	struct _Function_1_7{
		inline static ::haxe::ds::StringMap Block( ){
			{
				::haxe::ds::StringMap tmp = ::haxe::ds::StringMap_obj::__new();
				::haxe::ds::StringMap tmp1 = tmp;
				return tmp1;
			}
			return null();
		}
	};
	this->cachedText = _Function_1_7::Block();
	struct _Function_1_8{
		inline static ::haxe::ds::StringMap Block( ){
			{
				::haxe::ds::StringMap tmp = ::haxe::ds::StringMap_obj::__new();
				::haxe::ds::StringMap tmp1 = tmp;
				return tmp1;
			}
			return null();
		}
	};
	this->cachedImages = _Function_1_8::Block();
	struct _Function_1_9{
		inline static ::haxe::ds::StringMap Block( ){
			{
				::haxe::ds::StringMap tmp = ::haxe::ds::StringMap_obj::__new();
				::haxe::ds::StringMap tmp1 = tmp;
				return tmp1;
			}
			return null();
		}
	};
	this->cachedFonts = _Function_1_9::Block();
	struct _Function_1_10{
		inline static ::haxe::ds::StringMap Block( ){
			{
				::haxe::ds::StringMap tmp = ::haxe::ds::StringMap_obj::__new();
				::haxe::ds::StringMap tmp1 = tmp;
				return tmp1;
			}
			return null();
		}
	};
	this->cachedBytes = _Function_1_10::Block();
	struct _Function_1_11{
		inline static ::haxe::ds::StringMap Block( ){
			{
				::haxe::ds::StringMap tmp = ::haxe::ds::StringMap_obj::__new();
				::haxe::ds::StringMap tmp1 = tmp;
				return tmp1;
			}
			return null();
		}
	};
	this->cachedAudioBuffers = _Function_1_11::Block();
	this->onChange = ::lime::app::_Event_Void_Void_obj::__new();
	this->bytesLoaded = (int)0;
	this->bytesTotal = (int)0;
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

bool AssetLibrary_obj::exists( ::String id,::String type){
	bool tmp = (type != null());
	::String tmp1;
	if ((tmp)){
		tmp1 = hx::TCast< ::String >::cast(type);
	}
	else{
		tmp1 = null();
	}
	::String requestedType = tmp1;
	::haxe::ds::StringMap tmp2 = this->types;
	::String tmp3 = id;
	::String tmp4 = tmp2->get(tmp3);
	::String assetType = tmp4;
	bool tmp5 = (assetType != null());
	if ((tmp5)){
		bool tmp6 = (assetType == requestedType);
		bool tmp7 = !(tmp6);
		bool tmp8;
		if ((tmp7)){
			bool tmp9 = (requestedType == HX_HCSTRING("SOUND","\xaf","\xc4","\xba","\xfe"));
			bool tmp10 = tmp9;
			bool tmp11 = tmp10;
			bool tmp12 = !(tmp11);
			bool tmp13 = tmp12;
			bool tmp14 = tmp13;
			bool tmp15;
			bool tmp16 = tmp14;
			if ((tmp16)){
				bool tmp17 = (requestedType == HX_HCSTRING("MUSIC","\x85","\x08","\x49","\x8e"));
				tmp15 = tmp17;
			}
			else{
				tmp15 = true;
			}
			bool tmp17 = tmp15;
			if ((tmp17)){
				bool tmp18 = (assetType == HX_HCSTRING("MUSIC","\x85","\x08","\x49","\x8e"));
				bool tmp19 = tmp18;
				bool tmp20 = tmp19;
				bool tmp21 = tmp20;
				bool tmp22 = tmp21;
				bool tmp23 = !(tmp22);
				bool tmp24 = tmp23;
				bool tmp25 = tmp24;
				bool tmp26 = tmp25;
				bool tmp27 = tmp26;
				if ((tmp27)){
					tmp8 = (assetType == HX_HCSTRING("SOUND","\xaf","\xc4","\xba","\xfe"));
				}
				else{
					tmp8 = true;
				}
			}
			else{
				tmp8 = false;
			}
		}
		else{
			tmp8 = true;
		}
		if ((tmp8)){
			return true;
		}
		bool tmp9 = (requestedType == HX_HCSTRING("BINARY","\x01","\x68","\x8e","\x9f"));
		bool tmp10 = !(tmp9);
		bool tmp11 = tmp10;
		bool tmp12;
		if ((tmp11)){
			tmp12 = (requestedType == null());
		}
		else{
			tmp12 = true;
		}
		bool tmp13 = !(tmp12);
		bool tmp14;
		if ((tmp13)){
			bool tmp15 = (assetType == HX_HCSTRING("BINARY","\x01","\x68","\x8e","\x9f"));
			bool tmp16 = tmp15;
			bool tmp17 = tmp16;
			if ((tmp17)){
				tmp14 = (requestedType == HX_HCSTRING("TEXT","\xad","\x94","\xba","\x37"));
			}
			else{
				tmp14 = false;
			}
		}
		else{
			tmp14 = true;
		}
		if ((tmp14)){
			return true;
		}
	}
	return false;
}


HX_DEFINE_DYNAMIC_FUNC2(AssetLibrary_obj,exists,return )

Dynamic AssetLibrary_obj::getAsset( ::String id,::String type){
	::String tmp = type;
	Dynamic tmp1;
	::String _switch_1 = (tmp);
	if (  ( _switch_1==HX_HCSTRING("BINARY","\x01","\x68","\x8e","\x9f"))){
		::String tmp2 = id;
		tmp1 = this->getBytes(tmp2);
	}
	else if (  ( _switch_1==HX_HCSTRING("FONT","\xcf","\x25","\x81","\x2e"))){
		::String tmp2 = id;
		tmp1 = this->getFont(tmp2);
	}
	else if (  ( _switch_1==HX_HCSTRING("IMAGE","\x3b","\x57","\x57","\x3b"))){
		::String tmp2 = id;
		tmp1 = this->getImage(tmp2);
	}
	else if (  ( _switch_1==HX_HCSTRING("MUSIC","\x85","\x08","\x49","\x8e")) ||  ( _switch_1==HX_HCSTRING("SOUND","\xaf","\xc4","\xba","\xfe"))){
		::String tmp2 = id;
		tmp1 = this->getAudioBuffer(tmp2);
	}
	else if (  ( _switch_1==HX_HCSTRING("TEXT","\xad","\x94","\xba","\x37"))){
		::String tmp2 = id;
		tmp1 = this->getText(tmp2);
	}
	else if (  ( _switch_1==HX_HCSTRING("TEMPLATE","\x3a","\x78","\xcd","\x05"))){
		::String tmp2 = (HX_HCSTRING("Not sure how to get template: ","\xa1","\x19","\x8c","\xad") + id);
		HX_STACK_DO_THROW(tmp2);
	}
	else  {
		::String tmp2 = (HX_HCSTRING("Unknown asset type: ","\x86","\x5e","\xdb","\xf9") + type);
		HX_STACK_DO_THROW(tmp2);
	}
;
;
	return tmp1;
}


HX_DEFINE_DYNAMIC_FUNC2(AssetLibrary_obj,getAsset,return )

::lime::media::AudioBuffer AssetLibrary_obj::getAudioBuffer( ::String id){
	::haxe::ds::StringMap tmp = this->cachedAudioBuffers;
	::String tmp1 = id;
	bool tmp2 = tmp->exists(tmp1);
	if ((tmp2)){
		::haxe::ds::StringMap tmp3 = this->cachedAudioBuffers;
		::String tmp4 = id;
		::lime::media::AudioBuffer tmp5 = tmp3->get(tmp4);
		::lime::media::AudioBuffer tmp6 = tmp5;
		return tmp6;
	}
	else{
		::haxe::ds::StringMap tmp3 = this->classTypes;
		::String tmp4 = id;
		bool tmp5 = tmp3->exists(tmp4);
		if ((tmp5)){
			::haxe::ds::StringMap tmp6 = this->classTypes;
			::String tmp7 = id;
			::hx::Class tmp8 = tmp6->get(tmp7);
			::hx::Class tmp9 = tmp8;
			Dynamic tmp10 = ::Type_obj::createInstance(tmp9,cpp::ArrayBase_obj::__new());
			::haxe::io::Bytes tmp11;
			tmp11 = hx::TCast< ::haxe::io::Bytes >::cast(tmp10);
			::lime::media::AudioBuffer tmp12 = ::lime::media::AudioBuffer_obj::fromBytes(tmp11);
			return tmp12;
		}
		else{
			::haxe::ds::StringMap tmp6 = this->paths;
			::String tmp7 = id;
			::String tmp8 = tmp6->get(tmp7);
			::String tmp9 = tmp8;
			::lime::media::AudioBuffer tmp10 = ::lime::media::AudioBuffer_obj::fromFile(tmp9);
			return tmp10;
		}
	}
	return null();
}


HX_DEFINE_DYNAMIC_FUNC1(AssetLibrary_obj,getAudioBuffer,return )

::haxe::io::Bytes AssetLibrary_obj::getBytes( ::String id){
	::haxe::ds::StringMap tmp = this->cachedBytes;
	::String tmp1 = id;
	bool tmp2 = tmp->exists(tmp1);
	if ((tmp2)){
		::haxe::ds::StringMap tmp3 = this->cachedBytes;
		::String tmp4 = id;
		::haxe::io::Bytes tmp5 = tmp3->get(tmp4);
		::haxe::io::Bytes tmp6 = tmp5;
		return tmp6;
	}
	else{
		::haxe::ds::StringMap tmp3 = this->cachedText;
		::String tmp4 = id;
		bool tmp5 = tmp3->exists(tmp4);
		if ((tmp5)){
			::haxe::ds::StringMap tmp6 = this->cachedText;
			::String tmp7 = id;
			::String tmp8 = tmp6->get(tmp7);
			::String tmp9 = tmp8;
			::haxe::io::Bytes tmp10 = ::lime::utils::_Bytes::Bytes_Impl__obj::ofString(tmp9);
			::haxe::io::Bytes bytes = tmp10;
			::haxe::ds::StringMap tmp11 = this->cachedBytes;
			::String tmp12 = id;
			::haxe::io::Bytes tmp13 = bytes;
			tmp11->set(tmp12,tmp13);
			::haxe::io::Bytes tmp14 = bytes;
			return tmp14;
		}
		else{
			::haxe::ds::StringMap tmp6 = this->classTypes;
			::String tmp7 = id;
			bool tmp8 = tmp6->exists(tmp7);
			if ((tmp8)){
				::haxe::ds::StringMap tmp9 = this->classTypes;
				::String tmp10 = id;
				::hx::Class tmp11 = tmp9->get(tmp10);
				::hx::Class tmp12 = tmp11;
				Dynamic tmp13 = ::Type_obj::createInstance(tmp12,cpp::ArrayBase_obj::__new());
				::haxe::io::Bytes tmp14;
				tmp14 = hx::TCast< ::haxe::io::Bytes >::cast(tmp13);
				return tmp14;
			}
			else{
				::haxe::ds::StringMap tmp9 = this->paths;
				::String tmp10 = id;
				::String tmp11 = tmp9->get(tmp10);
				::String tmp12 = tmp11;
				::haxe::io::Bytes tmp13 = ::lime::utils::_Bytes::Bytes_Impl__obj::fromFile(tmp12);
				return tmp13;
			}
		}
	}
	return null();
}


HX_DEFINE_DYNAMIC_FUNC1(AssetLibrary_obj,getBytes,return )

::lime::text::Font AssetLibrary_obj::getFont( ::String id){
	::haxe::ds::StringMap tmp = this->cachedFonts;
	::String tmp1 = id;
	bool tmp2 = tmp->exists(tmp1);
	if ((tmp2)){
		::haxe::ds::StringMap tmp3 = this->cachedFonts;
		::String tmp4 = id;
		::lime::text::Font tmp5 = tmp3->get(tmp4);
		::lime::text::Font tmp6 = tmp5;
		return tmp6;
	}
	else{
		::haxe::ds::StringMap tmp3 = this->classTypes;
		::String tmp4 = id;
		bool tmp5 = tmp3->exists(tmp4);
		if ((tmp5)){
			::haxe::ds::StringMap tmp6 = this->classTypes;
			::String tmp7 = id;
			::hx::Class tmp8 = tmp6->get(tmp7);
			::hx::Class tmp9 = tmp8;
			Dynamic tmp10 = ::Type_obj::createInstance(tmp9,cpp::ArrayBase_obj::__new());
			::lime::text::Font tmp11;
			tmp11 = hx::TCast< ::lime::text::Font >::cast(tmp10);
			return tmp11;
		}
		else{
			::haxe::ds::StringMap tmp6 = this->paths;
			::String tmp7 = id;
			::String tmp8 = tmp6->get(tmp7);
			::String tmp9 = tmp8;
			::lime::text::Font tmp10 = ::lime::text::Font_obj::fromFile(tmp9);
			return tmp10;
		}
	}
	return null();
}


HX_DEFINE_DYNAMIC_FUNC1(AssetLibrary_obj,getFont,return )

::lime::graphics::Image AssetLibrary_obj::getImage( ::String id){
	::haxe::ds::StringMap tmp = this->cachedImages;
	::String tmp1 = id;
	bool tmp2 = tmp->exists(tmp1);
	if ((tmp2)){
		::haxe::ds::StringMap tmp3 = this->cachedImages;
		::String tmp4 = id;
		::lime::graphics::Image tmp5 = tmp3->get(tmp4);
		::lime::graphics::Image tmp6 = tmp5;
		return tmp6;
	}
	else{
		::haxe::ds::StringMap tmp3 = this->classTypes;
		::String tmp4 = id;
		bool tmp5 = tmp3->exists(tmp4);
		if ((tmp5)){
			::haxe::ds::StringMap tmp6 = this->classTypes;
			::String tmp7 = id;
			::hx::Class tmp8 = tmp6->get(tmp7);
			::hx::Class tmp9 = tmp8;
			Dynamic tmp10 = ::Type_obj::createInstance(tmp9,cpp::ArrayBase_obj::__new());
			::lime::graphics::Image tmp11;
			tmp11 = hx::TCast< ::lime::graphics::Image >::cast(tmp10);
			return tmp11;
		}
		else{
			::haxe::ds::StringMap tmp6 = this->paths;
			::String tmp7 = id;
			::String tmp8 = tmp6->get(tmp7);
			::String tmp9 = tmp8;
			::lime::graphics::Image tmp10 = ::lime::graphics::Image_obj::fromFile(tmp9);
			return tmp10;
		}
	}
	return null();
}


HX_DEFINE_DYNAMIC_FUNC1(AssetLibrary_obj,getImage,return )

::String AssetLibrary_obj::getPath( ::String id){
	::haxe::ds::StringMap tmp = this->paths;
	::String tmp1 = id;
	::String tmp2 = tmp->get(tmp1);
	::String tmp3 = tmp2;
	return tmp3;
}


HX_DEFINE_DYNAMIC_FUNC1(AssetLibrary_obj,getPath,return )

::String AssetLibrary_obj::getText( ::String id){
	::haxe::ds::StringMap tmp = this->cachedText;
	::String tmp1 = id;
	bool tmp2 = tmp->exists(tmp1);
	if ((tmp2)){
		::haxe::ds::StringMap tmp3 = this->cachedText;
		::String tmp4 = id;
		::String tmp5 = tmp3->get(tmp4);
		::String tmp6 = tmp5;
		return tmp6;
	}
	else{
		::String tmp3 = id;
		::haxe::io::Bytes tmp4 = this->getBytes(tmp3);
		::haxe::io::Bytes bytes = tmp4;
		bool tmp5 = (bytes == null());
		if ((tmp5)){
			return null();
		}
		else{
			int tmp6 = bytes->length;
			::String tmp7 = bytes->getString((int)0,tmp6);
			return tmp7;
		}
	}
	return null();
}


HX_DEFINE_DYNAMIC_FUNC1(AssetLibrary_obj,getText,return )

bool AssetLibrary_obj::isLocal( ::String id,::String type){
	return true;
}


HX_DEFINE_DYNAMIC_FUNC2(AssetLibrary_obj,isLocal,return )

Array< ::String > AssetLibrary_obj::list( ::String type){
	bool tmp = (type != null());
	::String tmp1;
	if ((tmp)){
		tmp1 = hx::TCast< ::String >::cast(type);
	}
	else{
		tmp1 = null();
	}
	::String requestedType = tmp1;
	Array< ::String > items = Array_obj< ::String >::__new();
	::haxe::ds::StringMap tmp2 = this->types;
	Dynamic tmp3 = tmp2->keys();
	for(::cpp::FastIterator_obj< ::String > *__it = ::cpp::CreateFastIterator< ::String >(tmp3);  __it->hasNext(); ){
		::String id = __it->next();
		{
			bool tmp4 = (requestedType == null());
			bool tmp5 = !(tmp4);
			bool tmp6;
			if ((tmp5)){
				::String tmp7 = id;
				::String tmp8 = type;
				::String tmp9 = tmp7;
				::String tmp10 = tmp8;
				tmp6 = this->exists(tmp9,tmp10);
			}
			else{
				tmp6 = true;
			}
			if ((tmp6)){
				::String tmp7 = id;
				items->push(tmp7);
			}
		}
;
	}
	return items;
}


HX_DEFINE_DYNAMIC_FUNC1(AssetLibrary_obj,list,return )

::lime::app::Future AssetLibrary_obj::loadAsset( ::String id,::String type){
	::String tmp = type;
	::lime::app::Future tmp1;
	::String _switch_2 = (tmp);
	if (  ( _switch_2==HX_HCSTRING("BINARY","\x01","\x68","\x8e","\x9f"))){
		::String tmp2 = id;
		tmp1 = this->loadBytes(tmp2);
	}
	else if (  ( _switch_2==HX_HCSTRING("FONT","\xcf","\x25","\x81","\x2e"))){
		::String tmp2 = id;
		tmp1 = this->loadFont(tmp2);
	}
	else if (  ( _switch_2==HX_HCSTRING("IMAGE","\x3b","\x57","\x57","\x3b"))){
		::String tmp2 = id;
		tmp1 = this->loadImage(tmp2);
	}
	else if (  ( _switch_2==HX_HCSTRING("MUSIC","\x85","\x08","\x49","\x8e")) ||  ( _switch_2==HX_HCSTRING("SOUND","\xaf","\xc4","\xba","\xfe"))){
		::String tmp2 = id;
		tmp1 = this->loadAudioBuffer(tmp2);
	}
	else if (  ( _switch_2==HX_HCSTRING("TEXT","\xad","\x94","\xba","\x37"))){
		::String tmp2 = id;
		tmp1 = this->loadText(tmp2);
	}
	else if (  ( _switch_2==HX_HCSTRING("TEMPLATE","\x3a","\x78","\xcd","\x05"))){
		::String tmp2 = (HX_HCSTRING("Not sure how to load template: ","\x43","\x70","\x39","\xd8") + id);
		HX_STACK_DO_THROW(tmp2);
	}
	else  {
		::String tmp2 = (HX_HCSTRING("Unknown asset type: ","\x86","\x5e","\xdb","\xf9") + type);
		HX_STACK_DO_THROW(tmp2);
	}
;
;
	return tmp1;
}


HX_DEFINE_DYNAMIC_FUNC2(AssetLibrary_obj,loadAsset,return )

::lime::app::Future AssetLibrary_obj::load( ){
	bool tmp = this->loaded;
	if ((tmp)){
		::lime::app::Future tmp1 = ::lime::app::Future_obj::withValue(hx::ObjectPtr<OBJ_>(this));
		return tmp1;
	}
	::lime::app::Promise_lime_utils_AssetLibrary tmp1 = this->promise;
	bool tmp2 = (tmp1 == null());
	if ((tmp2)){
		::lime::app::Promise_lime_utils_AssetLibrary tmp3 = ::lime::app::Promise_lime_utils_AssetLibrary_obj::__new();
		this->promise = tmp3;
		::haxe::ds::StringMap tmp4;
		{
			::haxe::ds::StringMap tmp5 = ::haxe::ds::StringMap_obj::__new();
			::haxe::ds::StringMap tmp6 = tmp5;
			tmp4 = tmp6;
		}
		this->bytesLoadedCache = tmp4;
		this->assetsLoaded = (int)0;
		this->assetsTotal = (int)1;
		::haxe::ds::StringMap tmp5 = this->preload;
		Dynamic tmp6 = tmp5->keys();
		for(::cpp::FastIterator_obj< ::String > *__it = ::cpp::CreateFastIterator< ::String >(tmp6);  __it->hasNext(); ){
			::String id = __it->next();
			{
				::haxe::ds::StringMap tmp7 = this->preload;
				::String tmp8 = id;
				Dynamic tmp9 = tmp7->get(tmp8);
				Dynamic tmp10 = tmp9;
				bool tmp11 = !(tmp10);
				if ((tmp11)){
					continue;
				}
				::String tmp12 = (HX_HCSTRING("Preloading asset: ","\x4f","\x4a","\x58","\xbd") + id);
				::String tmp13 = (tmp12 + HX_HCSTRING(" [","\x3b","\x1c","\x00","\x00"));
				::haxe::ds::StringMap tmp14 = this->types;
				::String tmp15 = id;
				::String tmp16 = tmp14->get(tmp15);
				::String tmp17 = tmp16;
				::String tmp18 = (tmp13 + tmp17);
				::String tmp19 = (tmp18 + HX_HCSTRING("]","\x5d","\x00","\x00","\x00"));
				Dynamic tmp20 = hx::SourceInfo(HX_HCSTRING("AssetLibrary.hx","\x93","\xac","\xef","\xb3"),434,HX_HCSTRING("lime.utils.AssetLibrary","\x21","\x55","\xe9","\xfc"),HX_HCSTRING("load","\x26","\x9a","\xb7","\x47"));
				::lime::utils::Log_obj::verbose(tmp19,tmp20);
				{
					::haxe::ds::StringMap tmp21 = this->types;
					::String tmp22 = id;
					::String tmp23 = tmp21->get(tmp22);
					::String _g = tmp23;
					bool tmp24 = (_g != null());
					if ((tmp24)){
						::String tmp25 = _g;
						::String _switch_3 = (tmp25);
						if (  ( _switch_3==HX_HCSTRING("BINARY","\x01","\x68","\x8e","\x9f"))){
							(this->assetsTotal)++;
							::String tmp26 = id;
							::lime::app::Future tmp27 = this->loadBytes(tmp26);
							::lime::app::Future future = tmp27;
							Dynamic tmp28 = this->load_onProgress_dyn();
							::String tmp29 = id;
							Dynamic tmp30;
							{
								Dynamic f = tmp28;
								::String id1 = tmp29;

								HX_BEGIN_LOCAL_FUNC_S2(hx::LocalFunc,_Function_7_1,Dynamic,f,::String,id1)
								int __ArgCount() const { return 2; }
								Void run(int a1,int a2){
									{
										::String tmp31 = id1;
										int tmp32 = a1;
										int tmp33 = a2;
										f(tmp31,tmp32,tmp33).Cast< Void >();
									}
									return null();
								}
								HX_END_LOCAL_FUNC2((void))

								tmp30 =  Dynamic(new _Function_7_1(f,id1));
							}
							future->onProgress(tmp30);
							Dynamic tmp31 = this->load_onError_dyn();
							::String tmp32 = id;
							Dynamic tmp33;
							{
								Dynamic f = tmp31;
								::String id1 = tmp32;

								HX_BEGIN_LOCAL_FUNC_S2(hx::LocalFunc,_Function_7_1,Dynamic,f,::String,id1)
								int __ArgCount() const { return 1; }
								Void run(Dynamic a1){
									{
										::String tmp34 = id1;
										Dynamic tmp35 = a1;
										f(tmp34,tmp35).Cast< Void >();
									}
									return null();
								}
								HX_END_LOCAL_FUNC1((void))

								tmp33 =  Dynamic(new _Function_7_1(f,id1));
							}
							future->onError(tmp33);
							Dynamic tmp34 = this->loadBytes_onComplete_dyn();
							::String tmp35 = id;
							Dynamic tmp36;
							{
								Dynamic f = tmp34;
								::String id1 = tmp35;

								HX_BEGIN_LOCAL_FUNC_S2(hx::LocalFunc,_Function_7_1,Dynamic,f,::String,id1)
								int __ArgCount() const { return 1; }
								Void run(::haxe::io::Bytes a1){
									{
										::String tmp37 = id1;
										::haxe::io::Bytes tmp38 = a1;
										f(tmp37,tmp38).Cast< Void >();
									}
									return null();
								}
								HX_END_LOCAL_FUNC1((void))

								tmp36 =  Dynamic(new _Function_7_1(f,id1));
							}
							future->onComplete(tmp36);
						}
						else if (  ( _switch_3==HX_HCSTRING("FONT","\xcf","\x25","\x81","\x2e"))){
							(this->assetsTotal)++;
							::String tmp26 = id;
							::lime::app::Future tmp27 = this->loadFont(tmp26);
							::lime::app::Future future = tmp27;
							Dynamic tmp28 = this->load_onProgress_dyn();
							::String tmp29 = id;
							Dynamic tmp30;
							{
								Dynamic f = tmp28;
								::String id1 = tmp29;

								HX_BEGIN_LOCAL_FUNC_S2(hx::LocalFunc,_Function_7_1,Dynamic,f,::String,id1)
								int __ArgCount() const { return 2; }
								Void run(int a1,int a2){
									{
										::String tmp31 = id1;
										int tmp32 = a1;
										int tmp33 = a2;
										f(tmp31,tmp32,tmp33).Cast< Void >();
									}
									return null();
								}
								HX_END_LOCAL_FUNC2((void))

								tmp30 =  Dynamic(new _Function_7_1(f,id1));
							}
							future->onProgress(tmp30);
							Dynamic tmp31 = this->load_onError_dyn();
							::String tmp32 = id;
							Dynamic tmp33;
							{
								Dynamic f = tmp31;
								::String id1 = tmp32;

								HX_BEGIN_LOCAL_FUNC_S2(hx::LocalFunc,_Function_7_1,Dynamic,f,::String,id1)
								int __ArgCount() const { return 1; }
								Void run(Dynamic a1){
									{
										::String tmp34 = id1;
										Dynamic tmp35 = a1;
										f(tmp34,tmp35).Cast< Void >();
									}
									return null();
								}
								HX_END_LOCAL_FUNC1((void))

								tmp33 =  Dynamic(new _Function_7_1(f,id1));
							}
							future->onError(tmp33);
							Dynamic tmp34 = this->loadFont_onComplete_dyn();
							::String tmp35 = id;
							Dynamic tmp36;
							{
								Dynamic f = tmp34;
								::String id1 = tmp35;

								HX_BEGIN_LOCAL_FUNC_S2(hx::LocalFunc,_Function_7_1,Dynamic,f,::String,id1)
								int __ArgCount() const { return 1; }
								Void run(::lime::text::Font a1){
									{
										::String tmp37 = id1;
										::lime::text::Font tmp38 = a1;
										f(tmp37,tmp38).Cast< Void >();
									}
									return null();
								}
								HX_END_LOCAL_FUNC1((void))

								tmp36 =  Dynamic(new _Function_7_1(f,id1));
							}
							future->onComplete(tmp36);
						}
						else if (  ( _switch_3==HX_HCSTRING("IMAGE","\x3b","\x57","\x57","\x3b"))){
							(this->assetsTotal)++;
							::String tmp26 = id;
							::lime::app::Future tmp27 = this->loadImage(tmp26);
							::lime::app::Future future = tmp27;
							Dynamic tmp28 = this->load_onProgress_dyn();
							::String tmp29 = id;
							Dynamic tmp30;
							{
								Dynamic f = tmp28;
								::String id1 = tmp29;

								HX_BEGIN_LOCAL_FUNC_S2(hx::LocalFunc,_Function_7_1,Dynamic,f,::String,id1)
								int __ArgCount() const { return 2; }
								Void run(int a1,int a2){
									{
										::String tmp31 = id1;
										int tmp32 = a1;
										int tmp33 = a2;
										f(tmp31,tmp32,tmp33).Cast< Void >();
									}
									return null();
								}
								HX_END_LOCAL_FUNC2((void))

								tmp30 =  Dynamic(new _Function_7_1(f,id1));
							}
							future->onProgress(tmp30);
							Dynamic tmp31 = this->load_onError_dyn();
							::String tmp32 = id;
							Dynamic tmp33;
							{
								Dynamic f = tmp31;
								::String id1 = tmp32;

								HX_BEGIN_LOCAL_FUNC_S2(hx::LocalFunc,_Function_7_1,Dynamic,f,::String,id1)
								int __ArgCount() const { return 1; }
								Void run(Dynamic a1){
									{
										::String tmp34 = id1;
										Dynamic tmp35 = a1;
										f(tmp34,tmp35).Cast< Void >();
									}
									return null();
								}
								HX_END_LOCAL_FUNC1((void))

								tmp33 =  Dynamic(new _Function_7_1(f,id1));
							}
							future->onError(tmp33);
							Dynamic tmp34 = this->loadImage_onComplete_dyn();
							::String tmp35 = id;
							Dynamic tmp36;
							{
								Dynamic f = tmp34;
								::String id1 = tmp35;

								HX_BEGIN_LOCAL_FUNC_S2(hx::LocalFunc,_Function_7_1,Dynamic,f,::String,id1)
								int __ArgCount() const { return 1; }
								Void run(::lime::graphics::Image a1){
									{
										::String tmp37 = id1;
										::lime::graphics::Image tmp38 = a1;
										f(tmp37,tmp38).Cast< Void >();
									}
									return null();
								}
								HX_END_LOCAL_FUNC1((void))

								tmp36 =  Dynamic(new _Function_7_1(f,id1));
							}
							future->onComplete(tmp36);
						}
						else if (  ( _switch_3==HX_HCSTRING("MUSIC","\x85","\x08","\x49","\x8e")) ||  ( _switch_3==HX_HCSTRING("SOUND","\xaf","\xc4","\xba","\xfe"))){
							(this->assetsTotal)++;
							::String tmp26 = id;
							::lime::app::Future tmp27 = this->loadAudioBuffer(tmp26);
							::lime::app::Future future = tmp27;
							Dynamic tmp28 = this->load_onProgress_dyn();
							::String tmp29 = id;
							Dynamic tmp30;
							{
								Dynamic f = tmp28;
								::String id1 = tmp29;

								HX_BEGIN_LOCAL_FUNC_S2(hx::LocalFunc,_Function_7_1,Dynamic,f,::String,id1)
								int __ArgCount() const { return 2; }
								Void run(int a1,int a2){
									{
										::String tmp31 = id1;
										int tmp32 = a1;
										int tmp33 = a2;
										f(tmp31,tmp32,tmp33).Cast< Void >();
									}
									return null();
								}
								HX_END_LOCAL_FUNC2((void))

								tmp30 =  Dynamic(new _Function_7_1(f,id1));
							}
							future->onProgress(tmp30);
							Dynamic tmp31 = this->load_onError_dyn();
							::String tmp32 = id;
							Dynamic tmp33;
							{
								Dynamic f = tmp31;
								::String id1 = tmp32;

								HX_BEGIN_LOCAL_FUNC_S2(hx::LocalFunc,_Function_7_1,Dynamic,f,::String,id1)
								int __ArgCount() const { return 1; }
								Void run(Dynamic a1){
									{
										::String tmp34 = id1;
										Dynamic tmp35 = a1;
										f(tmp34,tmp35).Cast< Void >();
									}
									return null();
								}
								HX_END_LOCAL_FUNC1((void))

								tmp33 =  Dynamic(new _Function_7_1(f,id1));
							}
							future->onError(tmp33);
							Dynamic tmp34 = this->loadAudioBuffer_onComplete_dyn();
							::String tmp35 = id;
							Dynamic tmp36;
							{
								Dynamic f = tmp34;
								::String id1 = tmp35;

								HX_BEGIN_LOCAL_FUNC_S2(hx::LocalFunc,_Function_7_1,Dynamic,f,::String,id1)
								int __ArgCount() const { return 1; }
								Void run(::lime::media::AudioBuffer a1){
									{
										::String tmp37 = id1;
										::lime::media::AudioBuffer tmp38 = a1;
										f(tmp37,tmp38).Cast< Void >();
									}
									return null();
								}
								HX_END_LOCAL_FUNC1((void))

								tmp36 =  Dynamic(new _Function_7_1(f,id1));
							}
							future->onComplete(tmp36);
						}
						else if (  ( _switch_3==HX_HCSTRING("TEXT","\xad","\x94","\xba","\x37"))){
							(this->assetsTotal)++;
							::String tmp26 = id;
							::lime::app::Future tmp27 = this->loadText(tmp26);
							::lime::app::Future future = tmp27;
							Dynamic tmp28 = this->load_onProgress_dyn();
							::String tmp29 = id;
							Dynamic tmp30;
							{
								Dynamic f = tmp28;
								::String id1 = tmp29;

								HX_BEGIN_LOCAL_FUNC_S2(hx::LocalFunc,_Function_7_1,Dynamic,f,::String,id1)
								int __ArgCount() const { return 2; }
								Void run(int a1,int a2){
									{
										::String tmp31 = id1;
										int tmp32 = a1;
										int tmp33 = a2;
										f(tmp31,tmp32,tmp33).Cast< Void >();
									}
									return null();
								}
								HX_END_LOCAL_FUNC2((void))

								tmp30 =  Dynamic(new _Function_7_1(f,id1));
							}
							future->onProgress(tmp30);
							Dynamic tmp31 = this->load_onError_dyn();
							::String tmp32 = id;
							Dynamic tmp33;
							{
								Dynamic f = tmp31;
								::String id1 = tmp32;

								HX_BEGIN_LOCAL_FUNC_S2(hx::LocalFunc,_Function_7_1,Dynamic,f,::String,id1)
								int __ArgCount() const { return 1; }
								Void run(Dynamic a1){
									{
										::String tmp34 = id1;
										Dynamic tmp35 = a1;
										f(tmp34,tmp35).Cast< Void >();
									}
									return null();
								}
								HX_END_LOCAL_FUNC1((void))

								tmp33 =  Dynamic(new _Function_7_1(f,id1));
							}
							future->onError(tmp33);
							Dynamic tmp34 = this->loadText_onComplete_dyn();
							::String tmp35 = id;
							Dynamic tmp36;
							{
								Dynamic f = tmp34;
								::String id1 = tmp35;

								HX_BEGIN_LOCAL_FUNC_S2(hx::LocalFunc,_Function_7_1,Dynamic,f,::String,id1)
								int __ArgCount() const { return 1; }
								Void run(::String a1){
									{
										::String tmp37 = id1;
										::String tmp38 = a1;
										f(tmp37,tmp38).Cast< Void >();
									}
									return null();
								}
								HX_END_LOCAL_FUNC1((void))

								tmp36 =  Dynamic(new _Function_7_1(f,id1));
							}
							future->onComplete(tmp36);
						}
						else  {
						}
;
;
					}
					else{
					}
				}
			}
;
		}
		this->__assetLoaded(null());
	}
	::lime::app::Promise_lime_utils_AssetLibrary tmp3 = this->promise;
	::lime::app::Future tmp4 = tmp3->future;
	return tmp4;
}


HX_DEFINE_DYNAMIC_FUNC0(AssetLibrary_obj,load,return )

::lime::app::Future AssetLibrary_obj::loadAudioBuffer( ::String id){
	::haxe::ds::StringMap tmp = this->cachedAudioBuffers;
	::String tmp1 = id;
	bool tmp2 = tmp->exists(tmp1);
	if ((tmp2)){
		::haxe::ds::StringMap tmp3 = this->cachedAudioBuffers;
		::String tmp4 = id;
		::lime::media::AudioBuffer tmp5 = tmp3->get(tmp4);
		::lime::media::AudioBuffer tmp6 = tmp5;
		::lime::app::Future tmp7 = ::lime::app::Future_obj::withValue(tmp6);
		return tmp7;
	}
	else{
		::haxe::ds::StringMap tmp3 = this->classTypes;
		::String tmp4 = id;
		bool tmp5 = tmp3->exists(tmp4);
		if ((tmp5)){
			::haxe::ds::StringMap tmp6 = this->classTypes;
			::String tmp7 = id;
			::hx::Class tmp8 = tmp6->get(tmp7);
			::hx::Class tmp9 = tmp8;
			::lime::media::AudioBuffer tmp10 = ::Type_obj::createInstance(tmp9,cpp::ArrayBase_obj::__new());
			::lime::app::Future tmp11 = ::lime::app::Future_obj::withValue(tmp10);
			return tmp11;
		}
		else{
			::haxe::ds::StringMap tmp6 = this->pathGroups;
			::String tmp7 = id;
			bool tmp8 = tmp6->exists(tmp7);
			if ((tmp8)){
				::haxe::ds::StringMap tmp9 = this->pathGroups;
				::String tmp10 = id;
				::lime::app::Future tmp11 = ::lime::media::AudioBuffer_obj::loadFromFiles(((Array< ::String >)(tmp9->get(tmp10))));
				return tmp11;
			}
			else{
				::haxe::ds::StringMap tmp9 = this->paths;
				::String tmp10 = id;
				::String tmp11 = tmp9->get(tmp10);
				::String tmp12 = tmp11;
				::lime::app::Future tmp13 = ::lime::media::AudioBuffer_obj::loadFromFile(tmp12);
				return tmp13;
			}
		}
	}
	return null();
}


HX_DEFINE_DYNAMIC_FUNC1(AssetLibrary_obj,loadAudioBuffer,return )

::lime::app::Future AssetLibrary_obj::loadBytes( ::String id){
	::haxe::ds::StringMap tmp = this->cachedBytes;
	::String tmp1 = id;
	bool tmp2 = tmp->exists(tmp1);
	if ((tmp2)){
		::haxe::ds::StringMap tmp3 = this->cachedBytes;
		::String tmp4 = id;
		::haxe::io::Bytes tmp5 = tmp3->get(tmp4);
		::haxe::io::Bytes tmp6 = tmp5;
		::lime::app::Future tmp7 = ::lime::app::Future_obj::withValue(tmp6);
		return tmp7;
	}
	else{
		::haxe::ds::StringMap tmp3 = this->classTypes;
		::String tmp4 = id;
		bool tmp5 = tmp3->exists(tmp4);
		if ((tmp5)){
			::haxe::ds::StringMap tmp6 = this->classTypes;
			::String tmp7 = id;
			::hx::Class tmp8 = tmp6->get(tmp7);
			::hx::Class tmp9 = tmp8;
			::haxe::io::Bytes tmp10 = ::Type_obj::createInstance(tmp9,cpp::ArrayBase_obj::__new());
			::lime::app::Future tmp11 = ::lime::app::Future_obj::withValue(tmp10);
			return tmp11;
		}
		else{
			::haxe::ds::StringMap tmp6 = this->paths;
			::String tmp7 = id;
			::String tmp8 = tmp6->get(tmp7);
			::String tmp9 = tmp8;
			::lime::app::Future tmp10 = ::lime::utils::_Bytes::Bytes_Impl__obj::loadFromFile(tmp9);
			return tmp10;
		}
	}
	return null();
}


HX_DEFINE_DYNAMIC_FUNC1(AssetLibrary_obj,loadBytes,return )

::lime::app::Future AssetLibrary_obj::loadFont( ::String id){
	::haxe::ds::StringMap tmp = this->cachedFonts;
	::String tmp1 = id;
	bool tmp2 = tmp->exists(tmp1);
	if ((tmp2)){
		::haxe::ds::StringMap tmp3 = this->cachedFonts;
		::String tmp4 = id;
		::lime::text::Font tmp5 = tmp3->get(tmp4);
		::lime::text::Font tmp6 = tmp5;
		::lime::app::Future tmp7 = ::lime::app::Future_obj::withValue(tmp6);
		return tmp7;
	}
	else{
		::haxe::ds::StringMap tmp3 = this->classTypes;
		::String tmp4 = id;
		bool tmp5 = tmp3->exists(tmp4);
		if ((tmp5)){
			::haxe::ds::StringMap tmp6 = this->classTypes;
			::String tmp7 = id;
			::hx::Class tmp8 = tmp6->get(tmp7);
			::hx::Class tmp9 = tmp8;
			::lime::text::Font tmp10 = ::Type_obj::createInstance(tmp9,cpp::ArrayBase_obj::__new());
			::lime::text::Font font = tmp10;
			::lime::text::Font tmp11 = font;
			::lime::app::Future tmp12 = ::lime::app::Future_obj::withValue(tmp11);
			return tmp12;
		}
		else{
			::haxe::ds::StringMap tmp6 = this->paths;
			::String tmp7 = id;
			::String tmp8 = tmp6->get(tmp7);
			::String tmp9 = tmp8;
			::lime::app::Future tmp10 = ::lime::text::Font_obj::loadFromFile(tmp9);
			return tmp10;
		}
	}
	return null();
}


HX_DEFINE_DYNAMIC_FUNC1(AssetLibrary_obj,loadFont,return )

::lime::app::Future AssetLibrary_obj::loadImage( ::String id){
	::haxe::ds::StringMap tmp = this->cachedImages;
	::String tmp1 = id;
	bool tmp2 = tmp->exists(tmp1);
	if ((tmp2)){
		::haxe::ds::StringMap tmp3 = this->cachedImages;
		::String tmp4 = id;
		::lime::graphics::Image tmp5 = tmp3->get(tmp4);
		::lime::graphics::Image tmp6 = tmp5;
		::lime::app::Future tmp7 = ::lime::app::Future_obj::withValue(tmp6);
		return tmp7;
	}
	else{
		::haxe::ds::StringMap tmp3 = this->classTypes;
		::String tmp4 = id;
		bool tmp5 = tmp3->exists(tmp4);
		if ((tmp5)){
			::haxe::ds::StringMap tmp6 = this->classTypes;
			::String tmp7 = id;
			::hx::Class tmp8 = tmp6->get(tmp7);
			::hx::Class tmp9 = tmp8;
			::lime::graphics::Image tmp10 = ::Type_obj::createInstance(tmp9,cpp::ArrayBase_obj::__new());
			::lime::app::Future tmp11 = ::lime::app::Future_obj::withValue(tmp10);
			return tmp11;
		}
		else{
			::haxe::ds::StringMap tmp6 = this->paths;
			::String tmp7 = id;
			::String tmp8 = tmp6->get(tmp7);
			::String tmp9 = tmp8;
			::lime::app::Future tmp10 = ::lime::graphics::Image_obj::loadFromFile(tmp9);
			return tmp10;
		}
	}
	return null();
}


HX_DEFINE_DYNAMIC_FUNC1(AssetLibrary_obj,loadImage,return )

::lime::app::Future AssetLibrary_obj::loadText( ::String id){
	::haxe::ds::StringMap tmp = this->cachedText;
	::String tmp1 = id;
	bool tmp2 = tmp->exists(tmp1);
	if ((tmp2)){
		::haxe::ds::StringMap tmp3 = this->cachedText;
		::String tmp4 = id;
		::String tmp5 = tmp3->get(tmp4);
		::String tmp6 = tmp5;
		::lime::app::Future tmp7 = ::lime::app::Future_obj::withValue(tmp6);
		return tmp7;
	}
	else{
		::haxe::ds::StringMap tmp3 = this->cachedBytes;
		::String tmp4 = id;
		::String tmp5 = tmp4;
		bool tmp6 = tmp3->exists(tmp5);
		bool tmp7 = !(tmp6);
		bool tmp8;
		if ((tmp7)){
			::haxe::ds::StringMap tmp9 = this->classTypes;
			::haxe::ds::StringMap tmp10 = tmp9;
			::String tmp11 = id;
			::String tmp12 = tmp11;
			tmp8 = tmp10->exists(tmp12);
		}
		else{
			tmp8 = true;
		}
		if ((tmp8)){
			::String tmp9 = id;
			::haxe::io::Bytes tmp10 = this->getBytes(tmp9);
			::haxe::io::Bytes bytes = tmp10;
			bool tmp11 = (bytes == null());
			if ((tmp11)){
				::lime::app::Future tmp12 = ::lime::app::Future_obj::withValue(null());
				::lime::app::Future tmp13 = tmp12;
				return tmp13;
			}
			else{
				int tmp12 = bytes->length;
				::String tmp13 = bytes->getString((int)0,tmp12);
				::String text = tmp13;
				::haxe::ds::StringMap tmp14 = this->cachedText;
				::String tmp15 = id;
				::String tmp16 = text;
				tmp14->set(tmp15,tmp16);
				::String tmp17 = text;
				::lime::app::Future tmp18 = ::lime::app::Future_obj::withValue(tmp17);
				return tmp18;
			}
		}
		else{
			::lime::net::_HTTPRequest_String tmp9 = ::lime::net::_HTTPRequest_String_obj::__new(null());
			::lime::net::_HTTPRequest_String request = tmp9;
			::haxe::ds::StringMap tmp10 = this->paths;
			::String tmp11 = id;
			::String tmp12 = tmp10->get(tmp11);
			::String tmp13 = tmp12;
			::lime::app::Future tmp14 = request->load(tmp13);
			return tmp14;
		}
	}
	return null();
}


HX_DEFINE_DYNAMIC_FUNC1(AssetLibrary_obj,loadText,return )

Void AssetLibrary_obj::unload( ){
{
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(AssetLibrary_obj,unload,(void))

Void AssetLibrary_obj::__assetLoaded( ::String id){
{
		(this->assetsLoaded)++;
		bool tmp = (id != null());
		if ((tmp)){
			::String tmp1 = (HX_HCSTRING("Loaded asset: ","\x9b","\x25","\x2e","\xeb") + id);
			::String tmp2 = (tmp1 + HX_HCSTRING(" [","\x3b","\x1c","\x00","\x00"));
			::haxe::ds::StringMap tmp3 = this->types;
			::String tmp4 = id;
			::String tmp5 = tmp3->get(tmp4);
			::String tmp6 = tmp5;
			::String tmp7 = (tmp2 + tmp6);
			::String tmp8 = (tmp7 + HX_HCSTRING("] (","\xa5","\xad","\x46","\x00"));
			int tmp9 = this->assetsLoaded;
			int tmp10 = (tmp9 - (int)1);
			::String tmp11 = (tmp8 + tmp10);
			::String tmp12 = (tmp11 + HX_HCSTRING("/","\x2f","\x00","\x00","\x00"));
			int tmp13 = this->assetsTotal;
			int tmp14 = (tmp13 - (int)1);
			::String tmp15 = (tmp12 + tmp14);
			::String tmp16 = (tmp15 + HX_HCSTRING(")","\x29","\x00","\x00","\x00"));
			Dynamic tmp17 = hx::SourceInfo(HX_HCSTRING("AssetLibrary.hx","\x93","\xac","\xef","\xb3"),680,HX_HCSTRING("lime.utils.AssetLibrary","\x21","\x55","\xe9","\xfc"),HX_HCSTRING("__assetLoaded","\xf5","\x7a","\x49","\x36"));
			::lime::utils::Log_obj::verbose(tmp16,tmp17);
		}
		bool tmp1 = (id != null());
		if ((tmp1)){
			::haxe::ds::StringMap tmp2 = this->sizes;
			::String tmp3 = id;
			Dynamic tmp4 = tmp2->get(tmp3);
			Dynamic size = tmp4;
			::haxe::ds::StringMap tmp5 = this->bytesLoadedCache;
			::String tmp6 = id;
			bool tmp7 = tmp5->exists(tmp6);
			bool tmp8 = !(tmp7);
			if ((tmp8)){
				hx::AddEq(this->bytesLoaded,size);
			}
			else{
				::haxe::ds::StringMap tmp9 = this->bytesLoadedCache;
				::String tmp10 = id;
				Dynamic tmp11 = tmp9->get(tmp10);
				Dynamic cache = tmp11;
				bool tmp12 = (cache < size);
				if ((tmp12)){
					int tmp13 = (size - cache);
					hx::AddEq(this->bytesLoaded,tmp13);
				}
			}
			::haxe::ds::StringMap tmp9 = this->bytesLoadedCache;
			::String tmp10 = id;
			Dynamic tmp11 = size;
			tmp9->set(tmp10,tmp11);
		}
		int tmp2 = this->assetsLoaded;
		int tmp3 = this->assetsTotal;
		bool tmp4 = (tmp2 < tmp3);
		if ((tmp4)){
			::lime::app::Promise_lime_utils_AssetLibrary tmp5 = this->promise;
			int tmp6 = this->bytesLoaded;
			int tmp7 = this->bytesTotal;
			tmp5->progress(tmp6,tmp7);
		}
		else{
			this->loaded = true;
			::lime::app::Promise_lime_utils_AssetLibrary tmp5 = this->promise;
			int tmp6 = this->bytesTotal;
			int tmp7 = this->bytesTotal;
			tmp5->progress(tmp6,tmp7);
			::lime::app::Promise_lime_utils_AssetLibrary tmp8 = this->promise;
			tmp8->complete(hx::ObjectPtr<OBJ_>(this));
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(AssetLibrary_obj,__assetLoaded,(void))

Void AssetLibrary_obj::__fromManifest( ::lime::utils::AssetManifest manifest){
{
		bool tmp = (manifest->version >= (int)2);
		bool hasSize = tmp;
		int size;
		::String id;
		Array< ::String > pathGroup;
		::String basePath = manifest->rootPath;
		bool tmp1 = (basePath == null());
		if ((tmp1)){
			basePath = HX_HCSTRING("","\x00","\x00","\x00","\x00");
		}
		bool tmp2 = (basePath != HX_HCSTRING("","\x00","\x00","\x00","\x00"));
		if ((tmp2)){
			hx::AddEq(basePath,HX_HCSTRING("/","\x2f","\x00","\x00","\x00"));
		}
		{
			int _g = (int)0;
			cpp::ArrayBase _g1 = manifest->assets;
			while((true)){
				bool tmp3 = (_g < _g1->__Field(HX_HCSTRING("length","\xe6","\x94","\x07","\x9f"), hx::paccDynamic ));
				bool tmp4 = !(tmp3);
				if ((tmp4)){
					break;
				}
				Dynamic tmp5 = _g1->__GetItem(_g);
				Dynamic asset = tmp5;
				++(_g);
				bool tmp6 = hasSize;
				int tmp7;
				if ((tmp6)){
					tmp7 = asset->__Field(HX_HCSTRING("size","\xc1","\xa0","\x53","\x4c"), hx::paccDynamic );
				}
				else{
					tmp7 = (int)100;
				}
				size = tmp7;
				id = asset->__Field(HX_HCSTRING("id","\xdb","\x5b","\x00","\x00"), hx::paccDynamic );
				Dynamic tmp8 = asset;
				bool tmp9 = ::Reflect_obj::hasField(tmp8,HX_HCSTRING("path","\xa5","\xe5","\x51","\x4a"));
				if ((tmp9)){
					::String tmp10 = basePath;
					Dynamic tmp11 = asset;
					Dynamic tmp12 = ::Reflect_obj::field(tmp11,HX_HCSTRING("path","\xa5","\xe5","\x51","\x4a"));
					::String tmp13 = ::Std_obj::string(tmp12);
					::String tmp14 = (tmp10 + tmp13);
					::String value = tmp14;
					::haxe::ds::StringMap tmp15 = this->paths;
					::String tmp16 = id;
					::String tmp17 = value;
					tmp15->set(tmp16,tmp17);
				}
				Dynamic tmp10 = asset;
				bool tmp11 = ::Reflect_obj::hasField(tmp10,HX_HCSTRING("pathGroup","\x5a","\xa7","\xb4","\x8f"));
				if ((tmp11)){
					Dynamic tmp12 = asset;
					Dynamic tmp13 = ::Reflect_obj::field(tmp12,HX_HCSTRING("pathGroup","\x5a","\xa7","\xb4","\x8f"));
					pathGroup = tmp13;
					{
						int _g3 = (int)0;
						int _g2 = pathGroup->length;
						while((true)){
							bool tmp14 = (_g3 < _g2);
							bool tmp15 = !(tmp14);
							if ((tmp15)){
								break;
							}
							int tmp16 = (_g3)++;
							int i = tmp16;
							::String tmp17 = basePath;
							::String tmp18 = pathGroup->__get(i);
							::String tmp19 = (tmp17 + tmp18);
							pathGroup[i] = tmp19;
						}
					}
					::haxe::ds::StringMap tmp14 = this->pathGroups;
					::String tmp15 = id;
					tmp14->set(tmp15,pathGroup);
				}
				::haxe::ds::StringMap tmp12 = this->sizes;
				::String tmp13 = id;
				int tmp14 = size;
				tmp12->set(tmp13,tmp14);
				{
					::String value = asset->__Field(HX_HCSTRING("type","\xba","\xf2","\x08","\x4d"), hx::paccDynamic );
					::haxe::ds::StringMap tmp15 = this->types;
					::String tmp16 = id;
					::String tmp17 = value;
					tmp15->set(tmp16,tmp17);
				}
				Dynamic tmp15 = asset;
				bool tmp16 = ::Reflect_obj::hasField(tmp15,HX_HCSTRING("preload","\xc9","\x47","\x43","\x35"));
				if ((tmp16)){
					Dynamic tmp17 = asset;
					Dynamic tmp18 = ::Reflect_obj::field(tmp17,HX_HCSTRING("preload","\xc9","\x47","\x43","\x35"));
					bool value = tmp18;
					::haxe::ds::StringMap tmp19 = this->preload;
					::String tmp20 = id;
					bool tmp21 = value;
					tmp19->set(tmp20,tmp21);
				}
				Dynamic tmp17 = asset;
				bool tmp18 = ::Reflect_obj::hasField(tmp17,HX_HCSTRING("className","\xa3","\x92","\x3d","\xdc"));
				if ((tmp18)){
					Dynamic tmp19 = asset;
					Dynamic tmp20 = ::Reflect_obj::field(tmp19,HX_HCSTRING("className","\xa3","\x92","\x3d","\xdc"));
					::hx::Class tmp21 = ::Type_obj::resolveClass(tmp20);
					::hx::Class value = tmp21;
					::haxe::ds::StringMap tmp22 = this->classTypes;
					::String tmp23 = id;
					::hx::Class tmp24 = value;
					tmp22->set(tmp23,tmp24);
				}
			}
		}
		this->bytesTotal = (int)0;
		{
			int _g = (int)0;
			cpp::ArrayBase _g1 = manifest->assets;
			while((true)){
				bool tmp3 = (_g < _g1->__Field(HX_HCSTRING("length","\xe6","\x94","\x07","\x9f"), hx::paccDynamic ));
				bool tmp4 = !(tmp3);
				if ((tmp4)){
					break;
				}
				Dynamic tmp5 = _g1->__GetItem(_g);
				Dynamic asset = tmp5;
				++(_g);
				id = asset->__Field(HX_HCSTRING("id","\xdb","\x5b","\x00","\x00"), hx::paccDynamic );
				::haxe::ds::StringMap tmp6 = this->preload;
				::String tmp7 = id;
				::String tmp8 = tmp7;
				bool tmp9 = tmp6->exists(tmp8);
				bool tmp10;
				if ((tmp9)){
					::haxe::ds::StringMap tmp11 = this->preload;
					::haxe::ds::StringMap tmp12 = tmp11;
					::String tmp13 = id;
					::String tmp14 = tmp13;
					Dynamic tmp15 = tmp12->get(tmp14);
					Dynamic tmp16 = tmp15;
					tmp10 = tmp16;
				}
				else{
					tmp10 = false;
				}
				if ((tmp10)){
					::haxe::ds::StringMap tmp11 = this->sizes;
					::String tmp12 = id;
					Dynamic tmp13 = tmp11->get(tmp12);
					hx::AddEq(this->bytesTotal,tmp13);
				}
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(AssetLibrary_obj,__fromManifest,(void))

Void AssetLibrary_obj::loadAudioBuffer_onComplete( ::String id,::lime::media::AudioBuffer audioBuffer){
{
		::haxe::ds::StringMap tmp = this->cachedAudioBuffers;
		::String tmp1 = id;
		::lime::media::AudioBuffer tmp2 = audioBuffer;
		tmp->set(tmp1,tmp2);
		::haxe::ds::StringMap tmp3 = this->pathGroups;
		::String tmp4 = id;
		bool tmp5 = tmp3->exists(tmp4);
		if ((tmp5)){
			::haxe::ds::StringMap tmp6 = this->pathGroups;
			::String tmp7 = id;
			Array< ::String > pathGroup = ((Array< ::String >)(tmp6->get(tmp7)));
			::haxe::ds::StringMap tmp8 = this->pathGroups;
			Dynamic tmp9 = tmp8->keys();
			for(::cpp::FastIterator_obj< ::String > *__it = ::cpp::CreateFastIterator< ::String >(tmp9);  __it->hasNext(); ){
				::String otherID = __it->next();
				{
					bool tmp10 = (otherID == id);
					if ((tmp10)){
						continue;
					}
					{
						int _g = (int)0;
						while((true)){
							bool tmp11 = (_g < pathGroup->length);
							bool tmp12 = !(tmp11);
							if ((tmp12)){
								break;
							}
							::String tmp13 = pathGroup->__get(_g);
							::String path = tmp13;
							++(_g);
							::haxe::ds::StringMap tmp14 = this->pathGroups;
							::String tmp15 = otherID;
							::String tmp16 = path;
							int tmp17 = ((Array< ::String >)(tmp14->get(tmp15)))->indexOf(tmp16,null());
							bool tmp18 = (tmp17 > (int)-1);
							if ((tmp18)){
								::haxe::ds::StringMap tmp19 = this->cachedAudioBuffers;
								::String tmp20 = otherID;
								::lime::media::AudioBuffer tmp21 = audioBuffer;
								tmp19->set(tmp20,tmp21);
								break;
							}
						}
					}
				}
;
			}
		}
		::String tmp6 = id;
		this->__assetLoaded(tmp6);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(AssetLibrary_obj,loadAudioBuffer_onComplete,(void))

Void AssetLibrary_obj::loadBytes_onComplete( ::String id,::haxe::io::Bytes bytes){
{
		::haxe::ds::StringMap tmp = this->cachedBytes;
		::String tmp1 = id;
		::haxe::io::Bytes tmp2 = bytes;
		tmp->set(tmp1,tmp2);
		::String tmp3 = id;
		this->__assetLoaded(tmp3);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(AssetLibrary_obj,loadBytes_onComplete,(void))

Void AssetLibrary_obj::loadFont_onComplete( ::String id,::lime::text::Font font){
{
		::haxe::ds::StringMap tmp = this->cachedFonts;
		::String tmp1 = id;
		::lime::text::Font tmp2 = font;
		tmp->set(tmp1,tmp2);
		::String tmp3 = id;
		this->__assetLoaded(tmp3);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(AssetLibrary_obj,loadFont_onComplete,(void))

Void AssetLibrary_obj::loadImage_onComplete( ::String id,::lime::graphics::Image image){
{
		::haxe::ds::StringMap tmp = this->cachedImages;
		::String tmp1 = id;
		::lime::graphics::Image tmp2 = image;
		tmp->set(tmp1,tmp2);
		::String tmp3 = id;
		this->__assetLoaded(tmp3);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(AssetLibrary_obj,loadImage_onComplete,(void))

Void AssetLibrary_obj::loadText_onComplete( ::String id,::String text){
{
		::haxe::ds::StringMap tmp = this->cachedText;
		::String tmp1 = id;
		::String tmp2 = text;
		tmp->set(tmp1,tmp2);
		::String tmp3 = id;
		this->__assetLoaded(tmp3);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(AssetLibrary_obj,loadText_onComplete,(void))

Void AssetLibrary_obj::load_onError( ::String id,Dynamic message){
{
		bool tmp = (message != null());
		bool tmp1;
		if ((tmp)){
			tmp1 = (message != HX_HCSTRING("","\x00","\x00","\x00","\x00"));
		}
		else{
			tmp1 = false;
		}
		if ((tmp1)){
			::lime::app::Promise_lime_utils_AssetLibrary tmp2 = this->promise;
			::String tmp3 = (HX_HCSTRING("Error loading asset \"","\xd6","\xff","\x4d","\x83") + id);
			::String tmp4 = (tmp3 + HX_HCSTRING("\": ","\x48","\xff","\x19","\x00"));
			Dynamic tmp5 = message;
			::String tmp6 = ::Std_obj::string(tmp5);
			::String tmp7 = (tmp4 + tmp6);
			tmp2->error(tmp7);
		}
		else{
			::lime::app::Promise_lime_utils_AssetLibrary tmp2 = this->promise;
			::String tmp3 = (HX_HCSTRING("Error loading asset \"","\xd6","\xff","\x4d","\x83") + id);
			::String tmp4 = (tmp3 + HX_HCSTRING("\"","\x22","\x00","\x00","\x00"));
			tmp2->error(tmp4);
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(AssetLibrary_obj,load_onError,(void))

Void AssetLibrary_obj::load_onProgress( ::String id,int bytesLoaded,int bytesTotal){
{
		bool tmp = (bytesLoaded > (int)0);
		if ((tmp)){
			::haxe::ds::StringMap tmp1 = this->sizes;
			::String tmp2 = id;
			Dynamic tmp3 = tmp1->get(tmp2);
			Dynamic size = tmp3;
			Float percent;
			bool tmp4 = (bytesTotal > (int)0);
			if ((tmp4)){
				Float tmp5 = (Float(bytesLoaded) / Float(bytesTotal));
				percent = tmp5;
				bool tmp6 = (percent > (int)1);
				if ((tmp6)){
					percent = (int)1;
				}
				Float tmp7 = (percent * size);
				int tmp8 = ::Math_obj::floor(tmp7);
				bytesLoaded = tmp8;
			}
			else{
				bool tmp5 = (bytesLoaded > size);
				if ((tmp5)){
					bytesLoaded = size;
				}
			}
			::haxe::ds::StringMap tmp5 = this->bytesLoadedCache;
			::String tmp6 = id;
			bool tmp7 = tmp5->exists(tmp6);
			if ((tmp7)){
				::haxe::ds::StringMap tmp8 = this->bytesLoadedCache;
				::String tmp9 = id;
				Dynamic tmp10 = tmp8->get(tmp9);
				Dynamic cache = tmp10;
				bool tmp11 = (bytesLoaded != cache);
				if ((tmp11)){
					int tmp12 = (bytesLoaded - cache);
					hx::AddEq(this->bytesLoaded,tmp12);
				}
			}
			else{
				hx::AddEq(this->bytesLoaded,bytesLoaded);
			}
			::haxe::ds::StringMap tmp8 = this->bytesLoadedCache;
			::String tmp9 = id;
			int tmp10 = bytesLoaded;
			tmp8->set(tmp9,tmp10);
			::lime::app::Promise_lime_utils_AssetLibrary tmp11 = this->promise;
			int tmp12 = this->bytesLoaded;
			int tmp13 = this->bytesTotal;
			tmp11->progress(tmp12,tmp13);
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC3(AssetLibrary_obj,load_onProgress,(void))

::lime::utils::AssetLibrary AssetLibrary_obj::fromBytes( ::haxe::io::Bytes bytes,::String rootPath){
	::haxe::io::Bytes tmp = bytes;
	::String tmp1 = rootPath;
	::lime::utils::AssetManifest tmp2 = ::lime::utils::AssetManifest_obj::fromBytes(tmp,tmp1);
	::lime::utils::AssetLibrary tmp3 = ::lime::utils::AssetLibrary_obj::fromManifest(tmp2);
	return tmp3;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(AssetLibrary_obj,fromBytes,return )

::lime::utils::AssetLibrary AssetLibrary_obj::fromFile( ::String path,::String rootPath){
	::String tmp = path;
	::String tmp1 = rootPath;
	::lime::utils::AssetManifest tmp2 = ::lime::utils::AssetManifest_obj::fromFile(tmp,tmp1);
	::lime::utils::AssetLibrary tmp3 = ::lime::utils::AssetLibrary_obj::fromManifest(tmp2);
	return tmp3;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(AssetLibrary_obj,fromFile,return )

::lime::utils::AssetLibrary AssetLibrary_obj::fromManifest( ::lime::utils::AssetManifest manifest){
	bool tmp = (manifest == null());
	if ((tmp)){
		return null();
	}
	::lime::utils::AssetLibrary library = null();
	bool tmp1 = (manifest->libraryType == null());
	if ((tmp1)){
		::lime::utils::AssetLibrary tmp2 = ::lime::utils::AssetLibrary_obj::__new();
		library = tmp2;
	}
	else{
		::String tmp2 = manifest->libraryType;
		::hx::Class tmp3 = ::Type_obj::resolveClass(tmp2);
		::hx::Class libraryClass = tmp3;
		bool tmp4 = (libraryClass != null());
		if ((tmp4)){
			::hx::Class tmp5 = libraryClass;
			::lime::utils::AssetLibrary tmp6 = ::Type_obj::createInstance(tmp5,manifest->libraryArgs);
			library = tmp6;
		}
		else{
			::String tmp5 = (HX_HCSTRING("Could not find library type: ","\xa0","\x88","\xa8","\x78") + manifest->libraryType);
			Dynamic tmp6 = hx::SourceInfo(HX_HCSTRING("AssetLibrary.hx","\x93","\xac","\xef","\xb3"),138,HX_HCSTRING("lime.utils.AssetLibrary","\x21","\x55","\xe9","\xfc"),HX_HCSTRING("fromManifest","\x39","\xd7","\x40","\x70"));
			::lime::utils::Log_obj::warn(tmp5,tmp6);
			return null();
		}
	}
	::lime::utils::AssetManifest tmp2 = manifest;
	library->__fromManifest(tmp2);
	::lime::utils::AssetLibrary tmp3 = library;
	return tmp3;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(AssetLibrary_obj,fromManifest,return )

::lime::app::Future AssetLibrary_obj::loadFromBytes( ::haxe::io::Bytes bytes,::String rootPath){
	::haxe::io::Bytes tmp = bytes;
	::String tmp1 = rootPath;
	::lime::app::Future tmp2 = ::lime::utils::AssetManifest_obj::loadFromBytes(tmp,tmp1);

	HX_BEGIN_LOCAL_FUNC_S0(hx::LocalFunc,_Function_1_1)
	int __ArgCount() const { return 1; }
	::lime::app::Future run(::lime::utils::AssetManifest manifest){
		{
			::lime::utils::AssetManifest tmp3 = manifest;
			::lime::app::Future tmp4 = ::lime::utils::AssetLibrary_obj::loadFromManifest(tmp3);
			return tmp4;
		}
		return null();
	}
	HX_END_LOCAL_FUNC1(return)

	::lime::app::Future tmp3 = tmp2->then( Dynamic(new _Function_1_1()));
	return tmp3;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(AssetLibrary_obj,loadFromBytes,return )

::lime::app::Future AssetLibrary_obj::loadFromFile( ::String path,::String rootPath){
	::String tmp = path;
	::String tmp1 = rootPath;
	::lime::app::Future tmp2 = ::lime::utils::AssetManifest_obj::loadFromFile(tmp,tmp1);

	HX_BEGIN_LOCAL_FUNC_S0(hx::LocalFunc,_Function_1_1)
	int __ArgCount() const { return 1; }
	::lime::app::Future run(::lime::utils::AssetManifest manifest){
		{
			::lime::utils::AssetManifest tmp3 = manifest;
			::lime::app::Future tmp4 = ::lime::utils::AssetLibrary_obj::loadFromManifest(tmp3);
			return tmp4;
		}
		return null();
	}
	HX_END_LOCAL_FUNC1(return)

	::lime::app::Future tmp3 = tmp2->then( Dynamic(new _Function_1_1()));
	return tmp3;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(AssetLibrary_obj,loadFromFile,return )

::lime::app::Future AssetLibrary_obj::loadFromManifest( ::lime::utils::AssetManifest manifest){
	::lime::utils::AssetManifest tmp = manifest;
	::lime::utils::AssetLibrary tmp1 = ::lime::utils::AssetLibrary_obj::fromManifest(tmp);
	::lime::utils::AssetLibrary library = tmp1;
	bool tmp2 = (library != null());
	if ((tmp2)){
		::lime::app::Future tmp3 = library->load();
		return tmp3;
	}
	else{
		::lime::app::Future tmp3 = ::lime::app::Future_obj::withError(HX_HCSTRING("Could not load asset manifest","\xcd","\xc6","\x09","\x7f"));
		::lime::app::Future tmp4 = tmp3;
		return tmp4;
	}
	return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(AssetLibrary_obj,loadFromManifest,return )


AssetLibrary_obj::AssetLibrary_obj()
{
}

void AssetLibrary_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(AssetLibrary);
	HX_MARK_MEMBER_NAME(onChange,"onChange");
	HX_MARK_MEMBER_NAME(assetsLoaded,"assetsLoaded");
	HX_MARK_MEMBER_NAME(assetsTotal,"assetsTotal");
	HX_MARK_MEMBER_NAME(bytesLoaded,"bytesLoaded");
	HX_MARK_MEMBER_NAME(bytesLoadedCache,"bytesLoadedCache");
	HX_MARK_MEMBER_NAME(bytesTotal,"bytesTotal");
	HX_MARK_MEMBER_NAME(cachedAudioBuffers,"cachedAudioBuffers");
	HX_MARK_MEMBER_NAME(cachedBytes,"cachedBytes");
	HX_MARK_MEMBER_NAME(cachedFonts,"cachedFonts");
	HX_MARK_MEMBER_NAME(cachedImages,"cachedImages");
	HX_MARK_MEMBER_NAME(cachedText,"cachedText");
	HX_MARK_MEMBER_NAME(classTypes,"classTypes");
	HX_MARK_MEMBER_NAME(loaded,"loaded");
	HX_MARK_MEMBER_NAME(pathGroups,"pathGroups");
	HX_MARK_MEMBER_NAME(paths,"paths");
	HX_MARK_MEMBER_NAME(preload,"preload");
	HX_MARK_MEMBER_NAME(promise,"promise");
	HX_MARK_MEMBER_NAME(sizes,"sizes");
	HX_MARK_MEMBER_NAME(types,"types");
	HX_MARK_END_CLASS();
}

void AssetLibrary_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(onChange,"onChange");
	HX_VISIT_MEMBER_NAME(assetsLoaded,"assetsLoaded");
	HX_VISIT_MEMBER_NAME(assetsTotal,"assetsTotal");
	HX_VISIT_MEMBER_NAME(bytesLoaded,"bytesLoaded");
	HX_VISIT_MEMBER_NAME(bytesLoadedCache,"bytesLoadedCache");
	HX_VISIT_MEMBER_NAME(bytesTotal,"bytesTotal");
	HX_VISIT_MEMBER_NAME(cachedAudioBuffers,"cachedAudioBuffers");
	HX_VISIT_MEMBER_NAME(cachedBytes,"cachedBytes");
	HX_VISIT_MEMBER_NAME(cachedFonts,"cachedFonts");
	HX_VISIT_MEMBER_NAME(cachedImages,"cachedImages");
	HX_VISIT_MEMBER_NAME(cachedText,"cachedText");
	HX_VISIT_MEMBER_NAME(classTypes,"classTypes");
	HX_VISIT_MEMBER_NAME(loaded,"loaded");
	HX_VISIT_MEMBER_NAME(pathGroups,"pathGroups");
	HX_VISIT_MEMBER_NAME(paths,"paths");
	HX_VISIT_MEMBER_NAME(preload,"preload");
	HX_VISIT_MEMBER_NAME(promise,"promise");
	HX_VISIT_MEMBER_NAME(sizes,"sizes");
	HX_VISIT_MEMBER_NAME(types,"types");
}

Dynamic AssetLibrary_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"list") ) { return list_dyn(); }
		if (HX_FIELD_EQ(inName,"load") ) { return load_dyn(); }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"paths") ) { return paths; }
		if (HX_FIELD_EQ(inName,"sizes") ) { return sizes; }
		if (HX_FIELD_EQ(inName,"types") ) { return types; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"loaded") ) { return loaded; }
		if (HX_FIELD_EQ(inName,"exists") ) { return exists_dyn(); }
		if (HX_FIELD_EQ(inName,"unload") ) { return unload_dyn(); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"preload") ) { return preload; }
		if (HX_FIELD_EQ(inName,"promise") ) { return promise; }
		if (HX_FIELD_EQ(inName,"getFont") ) { return getFont_dyn(); }
		if (HX_FIELD_EQ(inName,"getPath") ) { return getPath_dyn(); }
		if (HX_FIELD_EQ(inName,"getText") ) { return getText_dyn(); }
		if (HX_FIELD_EQ(inName,"isLocal") ) { return isLocal_dyn(); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"onChange") ) { return onChange; }
		if (HX_FIELD_EQ(inName,"getAsset") ) { return getAsset_dyn(); }
		if (HX_FIELD_EQ(inName,"getBytes") ) { return getBytes_dyn(); }
		if (HX_FIELD_EQ(inName,"getImage") ) { return getImage_dyn(); }
		if (HX_FIELD_EQ(inName,"loadFont") ) { return loadFont_dyn(); }
		if (HX_FIELD_EQ(inName,"loadText") ) { return loadText_dyn(); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"loadAsset") ) { return loadAsset_dyn(); }
		if (HX_FIELD_EQ(inName,"loadBytes") ) { return loadBytes_dyn(); }
		if (HX_FIELD_EQ(inName,"loadImage") ) { return loadImage_dyn(); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"bytesTotal") ) { return bytesTotal; }
		if (HX_FIELD_EQ(inName,"cachedText") ) { return cachedText; }
		if (HX_FIELD_EQ(inName,"classTypes") ) { return classTypes; }
		if (HX_FIELD_EQ(inName,"pathGroups") ) { return pathGroups; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"assetsTotal") ) { return assetsTotal; }
		if (HX_FIELD_EQ(inName,"bytesLoaded") ) { return bytesLoaded; }
		if (HX_FIELD_EQ(inName,"cachedBytes") ) { return cachedBytes; }
		if (HX_FIELD_EQ(inName,"cachedFonts") ) { return cachedFonts; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"assetsLoaded") ) { return assetsLoaded; }
		if (HX_FIELD_EQ(inName,"cachedImages") ) { return cachedImages; }
		if (HX_FIELD_EQ(inName,"load_onError") ) { return load_onError_dyn(); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"__assetLoaded") ) { return __assetLoaded_dyn(); }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"getAudioBuffer") ) { return getAudioBuffer_dyn(); }
		if (HX_FIELD_EQ(inName,"__fromManifest") ) { return __fromManifest_dyn(); }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"loadAudioBuffer") ) { return loadAudioBuffer_dyn(); }
		if (HX_FIELD_EQ(inName,"load_onProgress") ) { return load_onProgress_dyn(); }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"bytesLoadedCache") ) { return bytesLoadedCache; }
		break;
	case 18:
		if (HX_FIELD_EQ(inName,"cachedAudioBuffers") ) { return cachedAudioBuffers; }
		break;
	case 19:
		if (HX_FIELD_EQ(inName,"loadFont_onComplete") ) { return loadFont_onComplete_dyn(); }
		if (HX_FIELD_EQ(inName,"loadText_onComplete") ) { return loadText_onComplete_dyn(); }
		break;
	case 20:
		if (HX_FIELD_EQ(inName,"loadBytes_onComplete") ) { return loadBytes_onComplete_dyn(); }
		if (HX_FIELD_EQ(inName,"loadImage_onComplete") ) { return loadImage_onComplete_dyn(); }
		break;
	case 26:
		if (HX_FIELD_EQ(inName,"loadAudioBuffer_onComplete") ) { return loadAudioBuffer_onComplete_dyn(); }
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

Dynamic AssetLibrary_obj::__SetField(const ::String &inName,const Dynamic &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"paths") ) { paths=inValue.Cast< ::haxe::ds::StringMap >(); return inValue; }
		if (HX_FIELD_EQ(inName,"sizes") ) { sizes=inValue.Cast< ::haxe::ds::StringMap >(); return inValue; }
		if (HX_FIELD_EQ(inName,"types") ) { types=inValue.Cast< ::haxe::ds::StringMap >(); return inValue; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"loaded") ) { loaded=inValue.Cast< bool >(); return inValue; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"preload") ) { preload=inValue.Cast< ::haxe::ds::StringMap >(); return inValue; }
		if (HX_FIELD_EQ(inName,"promise") ) { promise=inValue.Cast< ::lime::app::Promise_lime_utils_AssetLibrary >(); return inValue; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"onChange") ) { onChange=inValue.Cast< ::lime::app::_Event_Void_Void >(); return inValue; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"bytesTotal") ) { bytesTotal=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"cachedText") ) { cachedText=inValue.Cast< ::haxe::ds::StringMap >(); return inValue; }
		if (HX_FIELD_EQ(inName,"classTypes") ) { classTypes=inValue.Cast< ::haxe::ds::StringMap >(); return inValue; }
		if (HX_FIELD_EQ(inName,"pathGroups") ) { pathGroups=inValue.Cast< ::haxe::ds::StringMap >(); return inValue; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"assetsTotal") ) { assetsTotal=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"bytesLoaded") ) { bytesLoaded=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"cachedBytes") ) { cachedBytes=inValue.Cast< ::haxe::ds::StringMap >(); return inValue; }
		if (HX_FIELD_EQ(inName,"cachedFonts") ) { cachedFonts=inValue.Cast< ::haxe::ds::StringMap >(); return inValue; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"assetsLoaded") ) { assetsLoaded=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"cachedImages") ) { cachedImages=inValue.Cast< ::haxe::ds::StringMap >(); return inValue; }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"bytesLoadedCache") ) { bytesLoadedCache=inValue.Cast< ::haxe::ds::StringMap >(); return inValue; }
		break;
	case 18:
		if (HX_FIELD_EQ(inName,"cachedAudioBuffers") ) { cachedAudioBuffers=inValue.Cast< ::haxe::ds::StringMap >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void AssetLibrary_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("onChange","\xef","\x87","\x1f","\x97"));
	outFields->push(HX_HCSTRING("assetsLoaded","\xe8","\xc8","\x28","\x8e"));
	outFields->push(HX_HCSTRING("assetsTotal","\x41","\xc0","\x37","\x03"));
	outFields->push(HX_HCSTRING("bytesLoaded","\xd0","\x66","\xca","\x99"));
	outFields->push(HX_HCSTRING("bytesLoadedCache","\x52","\xf1","\x40","\x0f"));
	outFields->push(HX_HCSTRING("bytesTotal","\x59","\x57","\xda","\x45"));
	outFields->push(HX_HCSTRING("cachedAudioBuffers","\x3f","\xb0","\x91","\xdb"));
	outFields->push(HX_HCSTRING("cachedBytes","\x29","\x45","\x82","\x36"));
	outFields->push(HX_HCSTRING("cachedFonts","\x82","\xf4","\x7b","\x7d"));
	outFields->push(HX_HCSTRING("cachedImages","\x3a","\x3a","\x9d","\x52"));
	outFields->push(HX_HCSTRING("cachedText","\xaf","\xf1","\x6f","\x7b"));
	outFields->push(HX_HCSTRING("classTypes","\x21","\x9d","\xe9","\x5d"));
	outFields->push(HX_HCSTRING("loaded","\x05","\x48","\x6f","\x58"));
	outFields->push(HX_HCSTRING("pathGroups","\xd9","\xc7","\x5d","\x2e"));
	outFields->push(HX_HCSTRING("paths","\x2e","\x0b","\x57","\xbd"));
	outFields->push(HX_HCSTRING("preload","\xc9","\x47","\x43","\x35"));
	outFields->push(HX_HCSTRING("promise","\x9b","\xcd","\xe9","\xf7"));
	outFields->push(HX_HCSTRING("sizes","\x92","\x08","\xd9","\x7c"));
	outFields->push(HX_HCSTRING("types","\x79","\x70","\xcb","\x1a"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsObject /*::lime::app::_Event_Void_Void*/ ,(int)offsetof(AssetLibrary_obj,onChange),HX_HCSTRING("onChange","\xef","\x87","\x1f","\x97")},
	{hx::fsInt,(int)offsetof(AssetLibrary_obj,assetsLoaded),HX_HCSTRING("assetsLoaded","\xe8","\xc8","\x28","\x8e")},
	{hx::fsInt,(int)offsetof(AssetLibrary_obj,assetsTotal),HX_HCSTRING("assetsTotal","\x41","\xc0","\x37","\x03")},
	{hx::fsInt,(int)offsetof(AssetLibrary_obj,bytesLoaded),HX_HCSTRING("bytesLoaded","\xd0","\x66","\xca","\x99")},
	{hx::fsObject /*::haxe::ds::StringMap*/ ,(int)offsetof(AssetLibrary_obj,bytesLoadedCache),HX_HCSTRING("bytesLoadedCache","\x52","\xf1","\x40","\x0f")},
	{hx::fsInt,(int)offsetof(AssetLibrary_obj,bytesTotal),HX_HCSTRING("bytesTotal","\x59","\x57","\xda","\x45")},
	{hx::fsObject /*::haxe::ds::StringMap*/ ,(int)offsetof(AssetLibrary_obj,cachedAudioBuffers),HX_HCSTRING("cachedAudioBuffers","\x3f","\xb0","\x91","\xdb")},
	{hx::fsObject /*::haxe::ds::StringMap*/ ,(int)offsetof(AssetLibrary_obj,cachedBytes),HX_HCSTRING("cachedBytes","\x29","\x45","\x82","\x36")},
	{hx::fsObject /*::haxe::ds::StringMap*/ ,(int)offsetof(AssetLibrary_obj,cachedFonts),HX_HCSTRING("cachedFonts","\x82","\xf4","\x7b","\x7d")},
	{hx::fsObject /*::haxe::ds::StringMap*/ ,(int)offsetof(AssetLibrary_obj,cachedImages),HX_HCSTRING("cachedImages","\x3a","\x3a","\x9d","\x52")},
	{hx::fsObject /*::haxe::ds::StringMap*/ ,(int)offsetof(AssetLibrary_obj,cachedText),HX_HCSTRING("cachedText","\xaf","\xf1","\x6f","\x7b")},
	{hx::fsObject /*::haxe::ds::StringMap*/ ,(int)offsetof(AssetLibrary_obj,classTypes),HX_HCSTRING("classTypes","\x21","\x9d","\xe9","\x5d")},
	{hx::fsBool,(int)offsetof(AssetLibrary_obj,loaded),HX_HCSTRING("loaded","\x05","\x48","\x6f","\x58")},
	{hx::fsObject /*::haxe::ds::StringMap*/ ,(int)offsetof(AssetLibrary_obj,pathGroups),HX_HCSTRING("pathGroups","\xd9","\xc7","\x5d","\x2e")},
	{hx::fsObject /*::haxe::ds::StringMap*/ ,(int)offsetof(AssetLibrary_obj,paths),HX_HCSTRING("paths","\x2e","\x0b","\x57","\xbd")},
	{hx::fsObject /*::haxe::ds::StringMap*/ ,(int)offsetof(AssetLibrary_obj,preload),HX_HCSTRING("preload","\xc9","\x47","\x43","\x35")},
	{hx::fsObject /*::lime::app::Promise_lime_utils_AssetLibrary*/ ,(int)offsetof(AssetLibrary_obj,promise),HX_HCSTRING("promise","\x9b","\xcd","\xe9","\xf7")},
	{hx::fsObject /*::haxe::ds::StringMap*/ ,(int)offsetof(AssetLibrary_obj,sizes),HX_HCSTRING("sizes","\x92","\x08","\xd9","\x7c")},
	{hx::fsObject /*::haxe::ds::StringMap*/ ,(int)offsetof(AssetLibrary_obj,types),HX_HCSTRING("types","\x79","\x70","\xcb","\x1a")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo *sStaticStorageInfo = 0;
#endif

static ::String sMemberFields[] = {
	HX_HCSTRING("onChange","\xef","\x87","\x1f","\x97"),
	HX_HCSTRING("assetsLoaded","\xe8","\xc8","\x28","\x8e"),
	HX_HCSTRING("assetsTotal","\x41","\xc0","\x37","\x03"),
	HX_HCSTRING("bytesLoaded","\xd0","\x66","\xca","\x99"),
	HX_HCSTRING("bytesLoadedCache","\x52","\xf1","\x40","\x0f"),
	HX_HCSTRING("bytesTotal","\x59","\x57","\xda","\x45"),
	HX_HCSTRING("cachedAudioBuffers","\x3f","\xb0","\x91","\xdb"),
	HX_HCSTRING("cachedBytes","\x29","\x45","\x82","\x36"),
	HX_HCSTRING("cachedFonts","\x82","\xf4","\x7b","\x7d"),
	HX_HCSTRING("cachedImages","\x3a","\x3a","\x9d","\x52"),
	HX_HCSTRING("cachedText","\xaf","\xf1","\x6f","\x7b"),
	HX_HCSTRING("classTypes","\x21","\x9d","\xe9","\x5d"),
	HX_HCSTRING("loaded","\x05","\x48","\x6f","\x58"),
	HX_HCSTRING("pathGroups","\xd9","\xc7","\x5d","\x2e"),
	HX_HCSTRING("paths","\x2e","\x0b","\x57","\xbd"),
	HX_HCSTRING("preload","\xc9","\x47","\x43","\x35"),
	HX_HCSTRING("promise","\x9b","\xcd","\xe9","\xf7"),
	HX_HCSTRING("sizes","\x92","\x08","\xd9","\x7c"),
	HX_HCSTRING("types","\x79","\x70","\xcb","\x1a"),
	HX_HCSTRING("exists","\xdc","\x1d","\xe0","\xbf"),
	HX_HCSTRING("getAsset","\x7a","\x79","\x10","\x86"),
	HX_HCSTRING("getAudioBuffer","\x80","\x41","\xe3","\x26"),
	HX_HCSTRING("getBytes","\xf5","\x17","\x6f","\x1d"),
	HX_HCSTRING("getFont","\x85","\x0d","\x43","\x16"),
	HX_HCSTRING("getImage","\xe5","\x2e","\x40","\x1d"),
	HX_HCSTRING("getPath","\x5b","\x95","\xd4","\x1c"),
	HX_HCSTRING("getText","\x63","\x7c","\x7c","\x1f"),
	HX_HCSTRING("isLocal","\x21","\x6d","\x76","\x15"),
	HX_HCSTRING("list","\x5e","\x1c","\xb3","\x47"),
	HX_HCSTRING("loadAsset","\xea","\xb5","\x70","\x41"),
	HX_HCSTRING("load","\x26","\x9a","\xb7","\x47"),
	HX_HCSTRING("loadAudioBuffer","\xf0","\x71","\x7c","\xe3"),
	HX_HCSTRING("loadBytes","\x65","\x54","\xcf","\xd8"),
	HX_HCSTRING("loadFont","\x15","\x2f","\x60","\xb4"),
	HX_HCSTRING("loadImage","\x55","\x6b","\xa0","\xd8"),
	HX_HCSTRING("loadText","\xf3","\x9d","\x99","\xbd"),
	HX_HCSTRING("unload","\xff","\xa0","\x8c","\x65"),
	HX_HCSTRING("__assetLoaded","\xf5","\x7a","\x49","\x36"),
	HX_HCSTRING("__fromManifest","\x59","\x5a","\x01","\x91"),
	HX_HCSTRING("loadAudioBuffer_onComplete","\x27","\x96","\xe6","\x68"),
	HX_HCSTRING("loadBytes_onComplete","\xd2","\x0d","\x18","\xbc"),
	HX_HCSTRING("loadFont_onComplete","\x22","\xd1","\x7c","\xa1"),
	HX_HCSTRING("loadImage_onComplete","\xe2","\x7c","\xc9","\xb2"),
	HX_HCSTRING("loadText_onComplete","\x04","\x33","\xff","\xe5"),
	HX_HCSTRING("load_onError","\xd0","\xf3","\xd6","\x22"),
	HX_HCSTRING("load_onProgress","\xa5","\x84","\x70","\x96"),
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
	__mClass->mName = HX_HCSTRING("lime.utils.AssetLibrary","\x21","\x55","\xe9","\xfc");
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

} // end namespace lime
} // end namespace utils
