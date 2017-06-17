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
#ifndef INCLUDED_haxe_io_Bytes
#include <haxe/io/Bytes.h>
#endif
#ifndef INCLUDED_lime_app_Application
#include <lime/app/Application.h>
#endif
#ifndef INCLUDED_lime_app_Future
#include <lime/app/Future.h>
#endif
#ifndef INCLUDED_lime_app_IModule
#include <lime/app/IModule.h>
#endif
#ifndef INCLUDED_lime_app_Module
#include <lime/app/Module.h>
#endif
#ifndef INCLUDED_lime_app_Preloader
#include <lime/app/Preloader.h>
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
#ifndef INCLUDED_lime_graphics_ImageBuffer
#include <lime/graphics/ImageBuffer.h>
#endif
#ifndef INCLUDED_lime_media_AudioBuffer
#include <lime/media/AudioBuffer.h>
#endif
#ifndef INCLUDED_lime_text_Font
#include <lime/text/Font.h>
#endif
#ifndef INCLUDED_lime_utils_AssetCache
#include <lime/utils/AssetCache.h>
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
#ifndef INCLUDED_lime_utils_Log
#include <lime/utils/Log.h>
#endif
#ifndef INCLUDED_lime_utils__Assets_LibrarySymbol
#include <lime/utils/_Assets/LibrarySymbol.h>
#endif
namespace lime{
namespace utils{

Void Assets_obj::__construct()
{
	return null();
}

//Assets_obj::~Assets_obj() { }

Dynamic Assets_obj::__CreateEmpty() { return  new Assets_obj; }
hx::ObjectPtr< Assets_obj > Assets_obj::__new()
{  hx::ObjectPtr< Assets_obj > _result_ = new Assets_obj();
	_result_->__construct();
	return _result_;}

Dynamic Assets_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< Assets_obj > _result_ = new Assets_obj();
	_result_->__construct();
	return _result_;}

::lime::utils::AssetCache Assets_obj::cache;

::lime::app::_Event_Void_Void Assets_obj::onChange;

::String Assets_obj::defaultRootPath;

::haxe::ds::StringMap Assets_obj::libraries;

::haxe::ds::StringMap Assets_obj::libraryPaths;

bool Assets_obj::exists( ::String id,::String type){
	bool tmp = (type == null());
	if ((tmp)){
		type = HX_HCSTRING("BINARY","\x01","\x68","\x8e","\x9f");
	}
	::lime::utils::_Assets::LibrarySymbol tmp1 = ::lime::utils::_Assets::LibrarySymbol_obj::__new(id);
	::lime::utils::_Assets::LibrarySymbol symbol = tmp1;
	bool tmp2 = (symbol->library != null());
	if ((tmp2)){
		::String tmp3 = symbol->symbolName;
		::String tmp4 = type;
		bool tmp5 = symbol->library->exists(tmp3,tmp4);
		return tmp5;
	}
	return false;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(Assets_obj,exists,return )

Dynamic Assets_obj::getAsset( ::String id,::String type,bool useCache){
	bool tmp = useCache;
	bool tmp1;
	if ((tmp)){
		::lime::utils::AssetCache tmp2 = ::lime::utils::Assets_obj::cache;
		::lime::utils::AssetCache tmp3 = tmp2;
		tmp1 = tmp3->enabled;
	}
	else{
		tmp1 = false;
	}
	if ((tmp1)){
		::String tmp2 = type;
		::String _switch_1 = (tmp2);
		if (  ( _switch_1==HX_HCSTRING("BINARY","\x01","\x68","\x8e","\x9f")) ||  ( _switch_1==HX_HCSTRING("TEXT","\xad","\x94","\xba","\x37"))){
			useCache = false;
		}
		else if (  ( _switch_1==HX_HCSTRING("FONT","\xcf","\x25","\x81","\x2e"))){
			::lime::utils::AssetCache tmp3 = ::lime::utils::Assets_obj::cache;
			::String tmp4 = id;
			Dynamic tmp5 = tmp3->font->get(tmp4);
			Dynamic font = tmp5;
			bool tmp6 = (font != null());
			if ((tmp6)){
				Dynamic tmp7 = font;
				return tmp7;
			}
		}
		else if (  ( _switch_1==HX_HCSTRING("IMAGE","\x3b","\x57","\x57","\x3b"))){
			::lime::utils::AssetCache tmp3 = ::lime::utils::Assets_obj::cache;
			::String tmp4 = id;
			::lime::graphics::Image tmp5 = tmp3->image->get(tmp4);
			::lime::graphics::Image image = tmp5;
			::lime::graphics::Image tmp6 = image;
			bool tmp7 = ::lime::utils::Assets_obj::isValidImage(tmp6);
			if ((tmp7)){
				::lime::graphics::Image tmp8 = image;
				return tmp8;
			}
		}
		else if (  ( _switch_1==HX_HCSTRING("MUSIC","\x85","\x08","\x49","\x8e")) ||  ( _switch_1==HX_HCSTRING("SOUND","\xaf","\xc4","\xba","\xfe"))){
			::lime::utils::AssetCache tmp3 = ::lime::utils::Assets_obj::cache;
			::String tmp4 = id;
			::lime::media::AudioBuffer tmp5 = tmp3->audio->get(tmp4);
			::lime::media::AudioBuffer audio = tmp5;
			::lime::media::AudioBuffer tmp6 = audio;
			bool tmp7 = ::lime::utils::Assets_obj::isValidAudio(tmp6);
			if ((tmp7)){
				::lime::media::AudioBuffer tmp8 = audio;
				return tmp8;
			}
		}
		else if (  ( _switch_1==HX_HCSTRING("TEMPLATE","\x3a","\x78","\xcd","\x05"))){
			::String tmp3 = (HX_HCSTRING("Not sure how to get template: ","\xa1","\x19","\x8c","\xad") + id);
			HX_STACK_DO_THROW(tmp3);
		}
		else  {
			return null();
		}
;
;
	}
	::lime::utils::_Assets::LibrarySymbol tmp2 = ::lime::utils::_Assets::LibrarySymbol_obj::__new(id);
	::lime::utils::_Assets::LibrarySymbol symbol = tmp2;
	bool tmp3 = (symbol->library != null());
	if ((tmp3)){
		::String tmp4 = symbol->symbolName;
		::String tmp5 = type;
		bool tmp6 = symbol->library->exists(tmp4,tmp5);
		if ((tmp6)){
			::String tmp7 = symbol->symbolName;
			::String tmp8 = type;
			bool tmp9 = symbol->library->isLocal(tmp7,tmp8);
			if ((tmp9)){
				::String tmp10 = symbol->symbolName;
				::String tmp11 = type;
				Dynamic tmp12 = symbol->library->getAsset(tmp10,tmp11);
				Dynamic asset = tmp12;
				bool tmp13 = useCache;
				bool tmp14;
				if ((tmp13)){
					::lime::utils::AssetCache tmp15 = ::lime::utils::Assets_obj::cache;
					::lime::utils::AssetCache tmp16 = tmp15;
					tmp14 = tmp16->enabled;
				}
				else{
					tmp14 = false;
				}
				if ((tmp14)){
					::lime::utils::AssetCache tmp15 = ::lime::utils::Assets_obj::cache;
					::String tmp16 = id;
					::String tmp17 = type;
					Dynamic tmp18 = asset;
					tmp15->set(tmp16,tmp17,tmp18);
				}
				Dynamic tmp15 = asset;
				return tmp15;
			}
			else{
				::String tmp10 = (type + HX_HCSTRING(" asset \"","\xd2","\x25","\x2a","\x5d"));
				::String tmp11 = id;
				::String tmp12 = (tmp10 + tmp11);
				::String tmp13 = (tmp12 + HX_HCSTRING("\" exists, but only asynchronously","\xdc","\xca","\xf2","\xdd"));
				Dynamic tmp14 = hx::SourceInfo(HX_HCSTRING("Assets.hx","\xfb","\xcd","\xc6","\x67"),160,HX_HCSTRING("lime.utils.Assets","\x39","\x6e","\x7e","\xb0"),HX_HCSTRING("getAsset","\x7a","\x79","\x10","\x86"));
				::lime::utils::Log_obj::error(tmp13,tmp14);
			}
		}
		else{
			::String tmp7 = (HX_HCSTRING("There is no ","\xe5","\xbb","\xab","\xc5") + type);
			::String tmp8 = (tmp7 + HX_HCSTRING(" asset with an ID of \"","\x95","\xf2","\x3a","\x0d"));
			::String tmp9 = id;
			::String tmp10 = (tmp8 + tmp9);
			::String tmp11 = (tmp10 + HX_HCSTRING("\"","\x22","\x00","\x00","\x00"));
			Dynamic tmp12 = hx::SourceInfo(HX_HCSTRING("Assets.hx","\xfb","\xcd","\xc6","\x67"),166,HX_HCSTRING("lime.utils.Assets","\x39","\x6e","\x7e","\xb0"),HX_HCSTRING("getAsset","\x7a","\x79","\x10","\x86"));
			::lime::utils::Log_obj::error(tmp11,tmp12);
		}
	}
	else{
		::String tmp4 = symbol->libraryName;
		::String tmp5 = ::lime::utils::Assets_obj::__libraryNotFound(tmp4);
		Dynamic tmp6 = hx::SourceInfo(HX_HCSTRING("Assets.hx","\xfb","\xcd","\xc6","\x67"),172,HX_HCSTRING("lime.utils.Assets","\x39","\x6e","\x7e","\xb0"),HX_HCSTRING("getAsset","\x7a","\x79","\x10","\x86"));
		::lime::utils::Log_obj::error(tmp5,tmp6);
	}
	return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC3(Assets_obj,getAsset,return )

::lime::media::AudioBuffer Assets_obj::getAudioBuffer( ::String id,hx::Null< bool >  __o_useCache){
bool useCache = __o_useCache.Default(true);
{
		::String tmp = id;
		bool tmp1 = useCache;
		Dynamic tmp2 = ::lime::utils::Assets_obj::getAsset(tmp,HX_HCSTRING("SOUND","\xaf","\xc4","\xba","\xfe"),tmp1);
		::lime::media::AudioBuffer tmp3 = ((::lime::media::AudioBuffer)(tmp2));
		return tmp3;
	}
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(Assets_obj,getAudioBuffer,return )

::haxe::io::Bytes Assets_obj::getBytes( ::String id){
	::String tmp = id;
	Dynamic tmp1 = ::lime::utils::Assets_obj::getAsset(tmp,HX_HCSTRING("BINARY","\x01","\x68","\x8e","\x9f"),false);
	::haxe::io::Bytes tmp2 = ((::haxe::io::Bytes)(tmp1));
	return tmp2;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Assets_obj,getBytes,return )

::lime::text::Font Assets_obj::getFont( ::String id,hx::Null< bool >  __o_useCache){
bool useCache = __o_useCache.Default(true);
{
		::String tmp = id;
		bool tmp1 = useCache;
		Dynamic tmp2 = ::lime::utils::Assets_obj::getAsset(tmp,HX_HCSTRING("FONT","\xcf","\x25","\x81","\x2e"),tmp1);
		return tmp2;
	}
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(Assets_obj,getFont,return )

::lime::graphics::Image Assets_obj::getImage( ::String id,hx::Null< bool >  __o_useCache){
bool useCache = __o_useCache.Default(true);
{
		::String tmp = id;
		bool tmp1 = useCache;
		Dynamic tmp2 = ::lime::utils::Assets_obj::getAsset(tmp,HX_HCSTRING("IMAGE","\x3b","\x57","\x57","\x3b"),tmp1);
		return tmp2;
	}
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(Assets_obj,getImage,return )

::lime::utils::AssetLibrary Assets_obj::getLibrary( ::String name){
	bool tmp = (name == null());
	bool tmp1 = !(tmp);
	bool tmp2;
	if ((tmp1)){
		tmp2 = (name == HX_HCSTRING("","\x00","\x00","\x00","\x00"));
	}
	else{
		tmp2 = true;
	}
	if ((tmp2)){
		name = HX_HCSTRING("default","\xc1","\xd8","\xc3","\x9b");
	}
	::haxe::ds::StringMap tmp3 = ::lime::utils::Assets_obj::libraries;
	::String tmp4 = name;
	::lime::utils::AssetLibrary tmp5 = tmp3->get(tmp4);
	::lime::utils::AssetLibrary tmp6 = tmp5;
	return tmp6;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Assets_obj,getLibrary,return )

::String Assets_obj::getPath( ::String id){
	::lime::utils::_Assets::LibrarySymbol tmp = ::lime::utils::_Assets::LibrarySymbol_obj::__new(id);
	::lime::utils::_Assets::LibrarySymbol symbol = tmp;
	bool tmp1 = (symbol->library != null());
	if ((tmp1)){
		::String tmp2 = symbol->symbolName;
		bool tmp3 = symbol->library->exists(tmp2,null());
		if ((tmp3)){
			::String tmp4 = symbol->symbolName;
			::String tmp5 = symbol->library->getPath(tmp4);
			return tmp5;
		}
		else{
			::String tmp4 = (HX_HCSTRING("There is no asset with an ID of \"","\xb0","\x92","\x42","\x96") + id);
			::String tmp5 = (tmp4 + HX_HCSTRING("\"","\x22","\x00","\x00","\x00"));
			Dynamic tmp6 = hx::SourceInfo(HX_HCSTRING("Assets.hx","\xfb","\xcd","\xc6","\x67"),269,HX_HCSTRING("lime.utils.Assets","\x39","\x6e","\x7e","\xb0"),HX_HCSTRING("getPath","\x5b","\x95","\xd4","\x1c"));
			::lime::utils::Log_obj::error(tmp5,tmp6);
		}
	}
	else{
		::String tmp2 = symbol->libraryName;
		::String tmp3 = ::lime::utils::Assets_obj::__libraryNotFound(tmp2);
		Dynamic tmp4 = hx::SourceInfo(HX_HCSTRING("Assets.hx","\xfb","\xcd","\xc6","\x67"),275,HX_HCSTRING("lime.utils.Assets","\x39","\x6e","\x7e","\xb0"),HX_HCSTRING("getPath","\x5b","\x95","\xd4","\x1c"));
		::lime::utils::Log_obj::error(tmp3,tmp4);
	}
	return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Assets_obj,getPath,return )

::String Assets_obj::getText( ::String id){
	::String tmp = id;
	Dynamic tmp1 = ::lime::utils::Assets_obj::getAsset(tmp,HX_HCSTRING("TEXT","\xad","\x94","\xba","\x37"),false);
	return tmp1;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Assets_obj,getText,return )

bool Assets_obj::isLocal( ::String id,::String type,hx::Null< bool >  __o_useCache){
bool useCache = __o_useCache.Default(true);
{
		bool tmp = useCache;
		bool tmp1;
		if ((tmp)){
			::lime::utils::AssetCache tmp2 = ::lime::utils::Assets_obj::cache;
			::lime::utils::AssetCache tmp3 = tmp2;
			tmp1 = tmp3->enabled;
		}
		else{
			tmp1 = false;
		}
		if ((tmp1)){
			::lime::utils::AssetCache tmp2 = ::lime::utils::Assets_obj::cache;
			::String tmp3 = id;
			::String tmp4 = type;
			bool tmp5 = tmp2->exists(tmp3,tmp4);
			if ((tmp5)){
				return true;
			}
		}
		::lime::utils::_Assets::LibrarySymbol tmp2 = ::lime::utils::_Assets::LibrarySymbol_obj::__new(id);
		::lime::utils::_Assets::LibrarySymbol symbol = tmp2;
		bool tmp3 = (symbol->library != null());
		bool tmp4;
		if ((tmp3)){
			::String tmp5 = symbol->symbolName;
			::String tmp6 = type;
			::String tmp7 = tmp5;
			::String tmp8 = tmp6;
			tmp4 = symbol->library->isLocal(tmp7,tmp8);
		}
		else{
			tmp4 = false;
		}
		return tmp4;
	}
}


STATIC_HX_DEFINE_DYNAMIC_FUNC3(Assets_obj,isLocal,return )

bool Assets_obj::isValidAudio( ::lime::media::AudioBuffer buffer){
	bool tmp = (buffer != null());
	return tmp;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Assets_obj,isValidAudio,return )

bool Assets_obj::isValidImage( ::lime::graphics::Image image){
	bool tmp = (image != null());
	bool tmp1;
	if ((tmp)){
		tmp1 = (image->buffer != null());
	}
	else{
		tmp1 = false;
	}
	return tmp1;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Assets_obj,isValidImage,return )

Array< ::String > Assets_obj::list( ::String type){
	Array< ::String > items = Array_obj< ::String >::__new();
	::haxe::ds::StringMap tmp = ::lime::utils::Assets_obj::libraries;
	Dynamic tmp1 = tmp->iterator();
	for(::cpp::FastIterator_obj< ::lime::utils::AssetLibrary > *__it = ::cpp::CreateFastIterator< ::lime::utils::AssetLibrary >(tmp1);  __it->hasNext(); ){
		::lime::utils::AssetLibrary library = __it->next();
		{
			::String tmp2 = type;
			Array< ::String > libraryItems = library->list(tmp2);
			bool tmp3 = (libraryItems != null());
			if ((tmp3)){
				items = items->concat(libraryItems);
			}
		}
;
	}
	return items;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Assets_obj,list,return )

::lime::app::Future Assets_obj::loadAsset( ::String id,::String type,bool useCache){
	bool tmp = useCache;
	bool tmp1;
	if ((tmp)){
		::lime::utils::AssetCache tmp2 = ::lime::utils::Assets_obj::cache;
		::lime::utils::AssetCache tmp3 = tmp2;
		tmp1 = tmp3->enabled;
	}
	else{
		tmp1 = false;
	}
	if ((tmp1)){
		::String tmp2 = type;
		::String _switch_2 = (tmp2);
		if (  ( _switch_2==HX_HCSTRING("BINARY","\x01","\x68","\x8e","\x9f")) ||  ( _switch_2==HX_HCSTRING("TEXT","\xad","\x94","\xba","\x37"))){
			useCache = false;
		}
		else if (  ( _switch_2==HX_HCSTRING("FONT","\xcf","\x25","\x81","\x2e"))){
			::lime::utils::AssetCache tmp3 = ::lime::utils::Assets_obj::cache;
			::String tmp4 = id;
			Dynamic tmp5 = tmp3->font->get(tmp4);
			Dynamic font = tmp5;
			bool tmp6 = (font != null());
			if ((tmp6)){
				Dynamic tmp7 = font;
				::lime::app::Future tmp8 = ::lime::app::Future_obj::withValue(tmp7);
				return tmp8;
			}
		}
		else if (  ( _switch_2==HX_HCSTRING("IMAGE","\x3b","\x57","\x57","\x3b"))){
			::lime::utils::AssetCache tmp3 = ::lime::utils::Assets_obj::cache;
			::String tmp4 = id;
			::lime::graphics::Image tmp5 = tmp3->image->get(tmp4);
			::lime::graphics::Image image = tmp5;
			::lime::graphics::Image tmp6 = image;
			bool tmp7 = ::lime::utils::Assets_obj::isValidImage(tmp6);
			if ((tmp7)){
				::lime::graphics::Image tmp8 = image;
				::lime::app::Future tmp9 = ::lime::app::Future_obj::withValue(tmp8);
				return tmp9;
			}
		}
		else if (  ( _switch_2==HX_HCSTRING("MUSIC","\x85","\x08","\x49","\x8e")) ||  ( _switch_2==HX_HCSTRING("SOUND","\xaf","\xc4","\xba","\xfe"))){
			::lime::utils::AssetCache tmp3 = ::lime::utils::Assets_obj::cache;
			::String tmp4 = id;
			::lime::media::AudioBuffer tmp5 = tmp3->audio->get(tmp4);
			::lime::media::AudioBuffer audio = tmp5;
			::lime::media::AudioBuffer tmp6 = audio;
			bool tmp7 = ::lime::utils::Assets_obj::isValidAudio(tmp6);
			if ((tmp7)){
				::lime::media::AudioBuffer tmp8 = audio;
				::lime::app::Future tmp9 = ::lime::app::Future_obj::withValue(tmp8);
				return tmp9;
			}
		}
		else if (  ( _switch_2==HX_HCSTRING("TEMPLATE","\x3a","\x78","\xcd","\x05"))){
			::String tmp3 = (HX_HCSTRING("Not sure how to get template: ","\xa1","\x19","\x8c","\xad") + id);
			HX_STACK_DO_THROW(tmp3);
		}
		else  {
			return null();
		}
;
;
	}
	::lime::utils::_Assets::LibrarySymbol tmp2 = ::lime::utils::_Assets::LibrarySymbol_obj::__new(id);
	::lime::utils::_Assets::LibrarySymbol symbol = tmp2;
	bool tmp3 = (symbol->library != null());
	if ((tmp3)){
		::String tmp4 = symbol->symbolName;
		::String tmp5 = type;
		bool tmp6 = symbol->library->exists(tmp4,tmp5);
		if ((tmp6)){
			::String tmp7 = symbol->symbolName;
			::String tmp8 = type;
			::lime::app::Future tmp9 = symbol->library->loadAsset(tmp7,tmp8);
			::lime::app::Future future = tmp9;
			bool tmp10 = useCache;
			bool tmp11;
			if ((tmp10)){
				::lime::utils::AssetCache tmp12 = ::lime::utils::Assets_obj::cache;
				::lime::utils::AssetCache tmp13 = tmp12;
				tmp11 = tmp13->enabled;
			}
			else{
				tmp11 = false;
			}
			if ((tmp11)){

				HX_BEGIN_LOCAL_FUNC_S2(hx::LocalFunc,_Function_4_1,::String,type,::String,id)
				int __ArgCount() const { return 1; }
				Void run(Dynamic asset){
					{
						::lime::utils::AssetCache tmp12 = ::lime::utils::Assets_obj::cache;
						::String tmp13 = id;
						::String tmp14 = type;
						Dynamic tmp15 = asset;
						tmp12->set(tmp13,tmp14,tmp15);
					}
					return null();
				}
				HX_END_LOCAL_FUNC1((void))

				future->onComplete( Dynamic(new _Function_4_1(type,id)));
			}
			::lime::app::Future tmp12 = future;
			return tmp12;
		}
		else{
			::String tmp7 = (HX_HCSTRING("There is no ","\xe5","\xbb","\xab","\xc5") + type);
			::String tmp8 = (tmp7 + HX_HCSTRING(" asset with an ID of \"","\x95","\xf2","\x3a","\x0d"));
			::String tmp9 = id;
			::String tmp10 = (tmp8 + tmp9);
			::String tmp11 = (tmp10 + HX_HCSTRING("\"","\x22","\x00","\x00","\x00"));
			::lime::app::Future tmp12 = ::lime::app::Future_obj::withError(tmp11);
			return tmp12;
		}
	}
	else{
		::String tmp4 = symbol->libraryName;
		::String tmp5 = ::lime::utils::Assets_obj::__libraryNotFound(tmp4);
		::lime::app::Future tmp6 = ::lime::app::Future_obj::withError(tmp5);
		return tmp6;
	}
	return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC3(Assets_obj,loadAsset,return )

::lime::app::Future Assets_obj::loadAudioBuffer( ::String id,hx::Null< bool >  __o_useCache){
bool useCache = __o_useCache.Default(true);
{
		::String tmp = id;
		bool tmp1 = useCache;
		::lime::app::Future tmp2 = ::lime::utils::Assets_obj::loadAsset(tmp,HX_HCSTRING("SOUND","\xaf","\xc4","\xba","\xfe"),tmp1);
		::lime::app::Future tmp3 = tmp2;
		return tmp3;
	}
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(Assets_obj,loadAudioBuffer,return )

::lime::app::Future Assets_obj::loadBytes( ::String id){
	::String tmp = id;
	::lime::app::Future tmp1 = ::lime::utils::Assets_obj::loadAsset(tmp,HX_HCSTRING("BINARY","\x01","\x68","\x8e","\x9f"),false);
	::lime::app::Future tmp2 = tmp1;
	return tmp2;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Assets_obj,loadBytes,return )

::lime::app::Future Assets_obj::loadFont( ::String id,hx::Null< bool >  __o_useCache){
bool useCache = __o_useCache.Default(true);
{
		::String tmp = id;
		bool tmp1 = useCache;
		::lime::app::Future tmp2 = ::lime::utils::Assets_obj::loadAsset(tmp,HX_HCSTRING("FONT","\xcf","\x25","\x81","\x2e"),tmp1);
		::lime::app::Future tmp3 = tmp2;
		return tmp3;
	}
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(Assets_obj,loadFont,return )

::lime::app::Future Assets_obj::loadImage( ::String id,hx::Null< bool >  __o_useCache){
bool useCache = __o_useCache.Default(true);
{
		::String tmp = id;
		bool tmp1 = useCache;
		::lime::app::Future tmp2 = ::lime::utils::Assets_obj::loadAsset(tmp,HX_HCSTRING("IMAGE","\x3b","\x57","\x57","\x3b"),tmp1);
		::lime::app::Future tmp3 = tmp2;
		return tmp3;
	}
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(Assets_obj,loadImage,return )

::lime::app::Future Assets_obj::loadLibrary( ::String id){
	::lime::app::Promise_lime_utils_AssetLibrary tmp = ::lime::app::Promise_lime_utils_AssetLibrary_obj::__new();
	::lime::app::Promise_lime_utils_AssetLibrary promise = tmp;
	::String tmp1 = id;
	::lime::utils::AssetLibrary tmp2 = ::lime::utils::Assets_obj::getLibrary(tmp1);
	::lime::utils::AssetLibrary library = tmp2;
	bool tmp3 = (library != null());
	if ((tmp3)){
		::lime::app::Future tmp4 = library->load();
		return tmp4;
	}
	::String path = id;
	::String rootPath = null();
	::haxe::ds::StringMap tmp4 = ::lime::utils::Assets_obj::libraryPaths;
	::String tmp5 = id;
	bool tmp6 = tmp4->exists(tmp5);
	if ((tmp6)){
		::haxe::ds::StringMap tmp7 = ::lime::utils::Assets_obj::libraryPaths;
		::String tmp8 = id;
		::String tmp9 = tmp7->get(tmp8);
		path = tmp9;
		::String tmp10 = ::lime::utils::Assets_obj::defaultRootPath;
		rootPath = tmp10;
	}
	else{
		::String tmp7 = path;
		bool tmp8 = ::StringTools_obj::endsWith(tmp7,HX_HCSTRING(".bundle","\x30","\x4a","\xb8","\x4e"));
		if ((tmp8)){
			hx::AddEq(path,HX_HCSTRING("/library.json","\x2a","\xa7","\x07","\x47"));
		}
	}
	::String tmp7 = path;
	::String tmp8 = rootPath;
	::lime::app::Future tmp9 = ::lime::utils::AssetManifest_obj::loadFromFile(tmp7,tmp8);

	HX_BEGIN_LOCAL_FUNC_S2(hx::LocalFunc,_Function_1_1,::lime::app::Promise_lime_utils_AssetLibrary,promise,::String,id)
	int __ArgCount() const { return 1; }
	Void run(::lime::utils::AssetManifest manifest){
		{
			bool tmp10 = (manifest == null());
			if ((tmp10)){
				::String tmp11 = (HX_HCSTRING("Cannot parse asset manifest for library \"","\xcf","\x1e","\xcc","\x48") + id);
				::String tmp12 = (tmp11 + HX_HCSTRING("\"","\x22","\x00","\x00","\x00"));
				promise->error(tmp12);
				return null();
			}
			::lime::utils::AssetManifest tmp11 = manifest;
			::lime::utils::AssetLibrary tmp12 = ::lime::utils::AssetLibrary_obj::fromManifest(tmp11);
			::lime::utils::AssetLibrary library1 = tmp12;
			bool tmp13 = (library1 == null());
			if ((tmp13)){
				::String tmp14 = (HX_HCSTRING("Cannot open library \"","\x44","\xcc","\x55","\xe7") + id);
				::String tmp15 = (tmp14 + HX_HCSTRING("\"","\x22","\x00","\x00","\x00"));
				promise->error(tmp15);
			}
			else{
				::haxe::ds::StringMap tmp14 = ::lime::utils::Assets_obj::libraries;
				::String tmp15 = id;
				::lime::utils::AssetLibrary tmp16 = library1;
				tmp14->set(tmp15,tmp16);
				::lime::app::_Event_Void_Void tmp17 = ::lime::utils::Assets_obj::onChange;
				Dynamic tmp18 = tmp17->dispatch_dyn();
				library1->onChange->add(tmp18,null(),null());
				::lime::app::Future tmp19 = library1->load();
				promise->completeWith(tmp19);
			}
		}
		return null();
	}
	HX_END_LOCAL_FUNC1((void))

	::lime::app::Future tmp10 = tmp9->onComplete( Dynamic(new _Function_1_1(promise,id)));

	HX_BEGIN_LOCAL_FUNC_S2(hx::LocalFunc,_Function_1_2,::lime::app::Promise_lime_utils_AssetLibrary,promise,::String,id)
	int __ArgCount() const { return 1; }
	Void run(Dynamic _){
		{
			::String tmp11 = (HX_HCSTRING("There is no asset library with an ID of \"","\x8b","\x06","\xe2","\x9a") + id);
			::String tmp12 = (tmp11 + HX_HCSTRING("\"","\x22","\x00","\x00","\x00"));
			promise->error(tmp12);
		}
		return null();
	}
	HX_END_LOCAL_FUNC1((void))

	tmp10->onError( Dynamic(new _Function_1_2(promise,id)));
	::lime::app::Future tmp11 = promise->future;
	return tmp11;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Assets_obj,loadLibrary,return )

::lime::app::Future Assets_obj::loadText( ::String id){
	::String tmp = id;
	::lime::app::Future tmp1 = ::lime::utils::Assets_obj::loadAsset(tmp,HX_HCSTRING("TEXT","\xad","\x94","\xba","\x37"),false);
	::lime::app::Future tmp2 = tmp1;
	return tmp2;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Assets_obj,loadText,return )

Void Assets_obj::registerLibrary( ::String name,::lime::utils::AssetLibrary library){
{
		::haxe::ds::StringMap tmp = ::lime::utils::Assets_obj::libraries;
		::String tmp1 = name;
		bool tmp2 = tmp->exists(tmp1);
		if ((tmp2)){
			::haxe::ds::StringMap tmp3 = ::lime::utils::Assets_obj::libraries;
			::String tmp4 = name;
			::lime::utils::AssetLibrary tmp5 = tmp3->get(tmp4);
			::lime::utils::AssetLibrary tmp6 = tmp5;
			::lime::utils::AssetLibrary tmp7 = library;
			bool tmp8 = (tmp6 == tmp7);
			if ((tmp8)){
				return null();
			}
			else{
				::String tmp9 = name;
				::lime::utils::Assets_obj::unloadLibrary(tmp9);
			}
		}
		bool tmp3 = (library != null());
		if ((tmp3)){
			Dynamic tmp4 = ::lime::utils::Assets_obj::library_onChange_dyn();
			library->onChange->add(tmp4,null(),null());
		}
		::haxe::ds::StringMap tmp4 = ::lime::utils::Assets_obj::libraries;
		::String tmp5 = name;
		::lime::utils::AssetLibrary tmp6 = library;
		tmp4->set(tmp5,tmp6);
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(Assets_obj,registerLibrary,(void))

Void Assets_obj::unloadLibrary( ::String name){
{
		::haxe::ds::StringMap tmp = ::lime::utils::Assets_obj::libraries;
		::String tmp1 = name;
		::lime::utils::AssetLibrary tmp2 = tmp->get(tmp1);
		::lime::utils::AssetLibrary library = tmp2;
		bool tmp3 = (library != null());
		if ((tmp3)){
			::lime::utils::AssetCache tmp4 = ::lime::utils::Assets_obj::cache;
			::String tmp5 = (name + HX_HCSTRING(":","\x3a","\x00","\x00","\x00"));
			tmp4->clear(tmp5);
			Dynamic tmp6 = ::lime::utils::Assets_obj::library_onChange_dyn();
			library->onChange->remove(tmp6);
			library->unload();
		}
		::haxe::ds::StringMap tmp4 = ::lime::utils::Assets_obj::libraries;
		::String tmp5 = name;
		tmp4->remove(tmp5);
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Assets_obj,unloadLibrary,(void))

::String Assets_obj::__libraryNotFound( ::String name){
	bool tmp = (name == null());
	bool tmp1 = !(tmp);
	bool tmp2;
	if ((tmp1)){
		tmp2 = (name == HX_HCSTRING("","\x00","\x00","\x00","\x00"));
	}
	else{
		tmp2 = true;
	}
	if ((tmp2)){
		name = HX_HCSTRING("default","\xc1","\xd8","\xc3","\x9b");
	}
	::lime::app::Application tmp3 = ::lime::app::Application_obj::current;
	bool tmp4 = (tmp3 != null());
	bool tmp5 = tmp4;
	bool tmp6;
	if ((tmp5)){
		::lime::app::Application tmp7 = ::lime::app::Application_obj::current;
		::lime::app::Application tmp8 = tmp7;
		::lime::app::Application tmp9 = tmp8;
		::lime::app::Preloader tmp10 = tmp9->__preloader;
		tmp6 = (tmp10 != null());
	}
	else{
		tmp6 = false;
	}
	bool tmp7;
	if ((tmp6)){
		::lime::app::Application tmp8 = ::lime::app::Application_obj::current;
		::lime::app::Application tmp9 = tmp8;
		bool tmp10 = tmp9->__preloader->complete;
		bool tmp11 = tmp10;
		bool tmp12 = tmp11;
		tmp7 = !(tmp12);
	}
	else{
		tmp7 = false;
	}
	if ((tmp7)){
		::String tmp8 = (HX_HCSTRING("There is no asset library named \"","\xa1","\x83","\x5f","\x51") + name);
		::String tmp9 = (tmp8 + HX_HCSTRING("\", or it is not yet preloaded","\xdb","\xac","\xd4","\x2f"));
		return tmp9;
	}
	else{
		::String tmp8 = (HX_HCSTRING("There is no asset library named \"","\xa1","\x83","\x5f","\x51") + name);
		::String tmp9 = (tmp8 + HX_HCSTRING("\"","\x22","\x00","\x00","\x00"));
		return tmp9;
	}
	return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Assets_obj,__libraryNotFound,return )

Void Assets_obj::library_onChange( ){
{
		::lime::utils::AssetCache tmp = ::lime::utils::Assets_obj::cache;
		tmp->clear(null());
		::lime::app::_Event_Void_Void tmp1 = ::lime::utils::Assets_obj::onChange;
		tmp1->dispatch();
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(Assets_obj,library_onChange,(void))


Assets_obj::Assets_obj()
{
}

bool Assets_obj::__GetStatic(const ::String &inName, Dynamic &outValue, hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"list") ) { outValue = list_dyn(); return true;  }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"cache") ) { outValue = cache; return true;  }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"exists") ) { outValue = exists_dyn(); return true;  }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"getFont") ) { outValue = getFont_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"getPath") ) { outValue = getPath_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"getText") ) { outValue = getText_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"isLocal") ) { outValue = isLocal_dyn(); return true;  }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"onChange") ) { outValue = onChange; return true;  }
		if (HX_FIELD_EQ(inName,"getAsset") ) { outValue = getAsset_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"getBytes") ) { outValue = getBytes_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"getImage") ) { outValue = getImage_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"loadFont") ) { outValue = loadFont_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"loadText") ) { outValue = loadText_dyn(); return true;  }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"libraries") ) { outValue = libraries; return true;  }
		if (HX_FIELD_EQ(inName,"loadAsset") ) { outValue = loadAsset_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"loadBytes") ) { outValue = loadBytes_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"loadImage") ) { outValue = loadImage_dyn(); return true;  }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"getLibrary") ) { outValue = getLibrary_dyn(); return true;  }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"loadLibrary") ) { outValue = loadLibrary_dyn(); return true;  }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"libraryPaths") ) { outValue = libraryPaths; return true;  }
		if (HX_FIELD_EQ(inName,"isValidAudio") ) { outValue = isValidAudio_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"isValidImage") ) { outValue = isValidImage_dyn(); return true;  }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"unloadLibrary") ) { outValue = unloadLibrary_dyn(); return true;  }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"getAudioBuffer") ) { outValue = getAudioBuffer_dyn(); return true;  }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"defaultRootPath") ) { outValue = defaultRootPath; return true;  }
		if (HX_FIELD_EQ(inName,"loadAudioBuffer") ) { outValue = loadAudioBuffer_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"registerLibrary") ) { outValue = registerLibrary_dyn(); return true;  }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"library_onChange") ) { outValue = library_onChange_dyn(); return true;  }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"__libraryNotFound") ) { outValue = __libraryNotFound_dyn(); return true;  }
	}
	return false;
}

bool Assets_obj::__SetStatic(const ::String &inName,Dynamic &ioValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"cache") ) { cache=ioValue.Cast< ::lime::utils::AssetCache >(); return true; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"onChange") ) { onChange=ioValue.Cast< ::lime::app::_Event_Void_Void >(); return true; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"libraries") ) { libraries=ioValue.Cast< ::haxe::ds::StringMap >(); return true; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"libraryPaths") ) { libraryPaths=ioValue.Cast< ::haxe::ds::StringMap >(); return true; }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"defaultRootPath") ) { defaultRootPath=ioValue.Cast< ::String >(); return true; }
	}
	return false;
}

#if HXCPP_SCRIPTABLE
static hx::StorageInfo *sMemberStorageInfo = 0;
static hx::StaticInfo sStaticStorageInfo[] = {
	{hx::fsObject /*::lime::utils::AssetCache*/ ,(void *) &Assets_obj::cache,HX_HCSTRING("cache","\x42","\x9a","\x14","\x41")},
	{hx::fsObject /*::lime::app::_Event_Void_Void*/ ,(void *) &Assets_obj::onChange,HX_HCSTRING("onChange","\xef","\x87","\x1f","\x97")},
	{hx::fsString,(void *) &Assets_obj::defaultRootPath,HX_HCSTRING("defaultRootPath","\xc8","\x76","\x96","\x0a")},
	{hx::fsObject /*::haxe::ds::StringMap*/ ,(void *) &Assets_obj::libraries,HX_HCSTRING("libraries","\x19","\x50","\xf8","\x18")},
	{hx::fsObject /*::haxe::ds::StringMap*/ ,(void *) &Assets_obj::libraryPaths,HX_HCSTRING("libraryPaths","\x33","\x26","\x5e","\x06")},
	{ hx::fsUnknown, 0, null()}
};
#endif

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(Assets_obj::__mClass,"__mClass");
	HX_MARK_MEMBER_NAME(Assets_obj::cache,"cache");
	HX_MARK_MEMBER_NAME(Assets_obj::onChange,"onChange");
	HX_MARK_MEMBER_NAME(Assets_obj::defaultRootPath,"defaultRootPath");
	HX_MARK_MEMBER_NAME(Assets_obj::libraries,"libraries");
	HX_MARK_MEMBER_NAME(Assets_obj::libraryPaths,"libraryPaths");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(Assets_obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(Assets_obj::cache,"cache");
	HX_VISIT_MEMBER_NAME(Assets_obj::onChange,"onChange");
	HX_VISIT_MEMBER_NAME(Assets_obj::defaultRootPath,"defaultRootPath");
	HX_VISIT_MEMBER_NAME(Assets_obj::libraries,"libraries");
	HX_VISIT_MEMBER_NAME(Assets_obj::libraryPaths,"libraryPaths");
};

#endif

hx::Class Assets_obj::__mClass;

static ::String sStaticFields[] = {
	HX_HCSTRING("cache","\x42","\x9a","\x14","\x41"),
	HX_HCSTRING("onChange","\xef","\x87","\x1f","\x97"),
	HX_HCSTRING("defaultRootPath","\xc8","\x76","\x96","\x0a"),
	HX_HCSTRING("libraries","\x19","\x50","\xf8","\x18"),
	HX_HCSTRING("libraryPaths","\x33","\x26","\x5e","\x06"),
	HX_HCSTRING("exists","\xdc","\x1d","\xe0","\xbf"),
	HX_HCSTRING("getAsset","\x7a","\x79","\x10","\x86"),
	HX_HCSTRING("getAudioBuffer","\x80","\x41","\xe3","\x26"),
	HX_HCSTRING("getBytes","\xf5","\x17","\x6f","\x1d"),
	HX_HCSTRING("getFont","\x85","\x0d","\x43","\x16"),
	HX_HCSTRING("getImage","\xe5","\x2e","\x40","\x1d"),
	HX_HCSTRING("getLibrary","\x05","\xad","\xd1","\x8e"),
	HX_HCSTRING("getPath","\x5b","\x95","\xd4","\x1c"),
	HX_HCSTRING("getText","\x63","\x7c","\x7c","\x1f"),
	HX_HCSTRING("isLocal","\x21","\x6d","\x76","\x15"),
	HX_HCSTRING("isValidAudio","\xc4","\x0a","\xdf","\x47"),
	HX_HCSTRING("isValidImage","\x49","\xb1","\xc7","\xdd"),
	HX_HCSTRING("list","\x5e","\x1c","\xb3","\x47"),
	HX_HCSTRING("loadAsset","\xea","\xb5","\x70","\x41"),
	HX_HCSTRING("loadAudioBuffer","\xf0","\x71","\x7c","\xe3"),
	HX_HCSTRING("loadBytes","\x65","\x54","\xcf","\xd8"),
	HX_HCSTRING("loadFont","\x15","\x2f","\x60","\xb4"),
	HX_HCSTRING("loadImage","\x55","\x6b","\xa0","\xd8"),
	HX_HCSTRING("loadLibrary","\x75","\xe5","\x0d","\x10"),
	HX_HCSTRING("loadText","\xf3","\x9d","\x99","\xbd"),
	HX_HCSTRING("registerLibrary","\xd8","\x8a","\x84","\xf2"),
	HX_HCSTRING("unloadLibrary","\xbc","\x5b","\x48","\x31"),
	HX_HCSTRING("__libraryNotFound","\x2a","\xdb","\x69","\xc9"),
	HX_HCSTRING("library_onChange","\xf3","\x20","\x14","\xc8"),
	::String(null()) };

void Assets_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("lime.utils.Assets","\x39","\x6e","\x7e","\xb0");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &Assets_obj::__GetStatic;
	__mClass->mSetStaticField = &Assets_obj::__SetStatic;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(sStaticFields);
	__mClass->mMembers = hx::Class_obj::dupFunctions(0 /* sMemberFields */);
	__mClass->mCanCast = hx::TCanCast< Assets_obj >;
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

void Assets_obj::__boot()
{
	cache= ::lime::utils::AssetCache_obj::__new();
	onChange= ::lime::app::_Event_Void_Void_obj::__new();
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
	libraries= _Function_0_1::Block();
struct _Function_0_2{
	inline static ::haxe::ds::StringMap Block( ){
		{
			::haxe::ds::StringMap tmp = ::haxe::ds::StringMap_obj::__new();
			::haxe::ds::StringMap tmp1 = tmp;
			return tmp1;
		}
		return null();
	}
};
	libraryPaths= _Function_0_2::Block();
}

} // end namespace lime
} // end namespace utils
