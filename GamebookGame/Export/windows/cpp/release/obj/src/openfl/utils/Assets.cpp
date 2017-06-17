#include <hxcpp.h>

#ifndef INCLUDED_Std
#include <Std.h>
#endif
#ifndef INCLUDED_Type
#include <Type.h>
#endif
#ifndef INCLUDED_haxe_io_Bytes
#include <haxe/io/Bytes.h>
#endif
#ifndef INCLUDED_lime_app_Future
#include <lime/app/Future.h>
#endif
#ifndef INCLUDED_lime_app_Promise_openfl_display_BitmapData
#include <lime/app/Promise_openfl_display_BitmapData.h>
#endif
#ifndef INCLUDED_lime_app_Promise_openfl_display_MovieClip
#include <lime/app/Promise_openfl_display_MovieClip.h>
#endif
#ifndef INCLUDED_lime_app_Promise_openfl_media_Sound
#include <lime/app/Promise_openfl_media_Sound.h>
#endif
#ifndef INCLUDED_lime_app_Promise_openfl_text_Font
#include <lime/app/Promise_openfl_text_Font.h>
#endif
#ifndef INCLUDED_lime_app_Promise_openfl_utils_ByteArray
#include <lime/app/Promise_openfl_utils_ByteArray.h>
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
#ifndef INCLUDED_lime_text_Font
#include <lime/text/Font.h>
#endif
#ifndef INCLUDED_lime_utils_AssetLibrary
#include <lime/utils/AssetLibrary.h>
#endif
#ifndef INCLUDED_lime_utils_Assets
#include <lime/utils/Assets.h>
#endif
#ifndef INCLUDED_lime_utils_Log
#include <lime/utils/Log.h>
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
#ifndef INCLUDED_openfl_display_Sprite
#include <openfl/display/Sprite.h>
#endif
#ifndef INCLUDED_openfl_events_Event
#include <openfl/events/Event.h>
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
#ifndef INCLUDED_openfl_utils_AssetLibrary
#include <openfl/utils/AssetLibrary.h>
#endif
#ifndef INCLUDED_openfl_utils_Assets
#include <openfl/utils/Assets.h>
#endif
#ifndef INCLUDED_openfl_utils_ByteArrayData
#include <openfl/utils/ByteArrayData.h>
#endif
#ifndef INCLUDED_openfl_utils_IAssetCache
#include <openfl/utils/IAssetCache.h>
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

::openfl::utils::IAssetCache Assets_obj::cache;

::openfl::events::EventDispatcher Assets_obj::dispatcher;

Void Assets_obj::addEventListener( ::String type,Dynamic listener,hx::Null< bool >  __o_useCapture,hx::Null< int >  __o_priority,hx::Null< bool >  __o_useWeakReference){
bool useCapture = __o_useCapture.Default(false);
int priority = __o_priority.Default(0);
bool useWeakReference = __o_useWeakReference.Default(false);
	HX_STACK_FRAME("openfl.utils.Assets","addEventListener",0xdf923d5d,"openfl.utils.Assets.addEventListener","openfl/utils/Assets.hx",50,0x4e64919e)
	HX_STACK_ARG(type,"type")
	HX_STACK_ARG(listener,"listener")
	HX_STACK_ARG(useCapture,"useCapture")
	HX_STACK_ARG(priority,"priority")
	HX_STACK_ARG(useWeakReference,"useWeakReference")
{
		HX_STACK_LINE(52)
		::lime::app::_Event_Void_Void tmp = ::lime::utils::Assets_obj::onChange;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(52)
		Dynamic tmp1 = ::openfl::utils::Assets_obj::LimeAssets_onChange_dyn();		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(52)
		bool tmp2 = tmp->has(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(52)
		bool tmp3 = !(tmp2);		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(52)
		if ((tmp3)){
			HX_STACK_LINE(54)
			::lime::app::_Event_Void_Void tmp4 = ::lime::utils::Assets_obj::onChange;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(54)
			Dynamic tmp5 = ::openfl::utils::Assets_obj::LimeAssets_onChange_dyn();		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(54)
			tmp4->add(tmp5,null(),null());
		}
		HX_STACK_LINE(58)
		::openfl::events::EventDispatcher tmp4 = ::openfl::utils::Assets_obj::dispatcher;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(58)
		::String tmp5 = type;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(58)
		Dynamic tmp6 = listener;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(58)
		bool tmp7 = useCapture;		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(58)
		int tmp8 = priority;		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(58)
		bool tmp9 = useWeakReference;		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(58)
		tmp4->addEventListener(tmp5,tmp6,tmp7,tmp8,tmp9);
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC5(Assets_obj,addEventListener,(void))

bool Assets_obj::dispatchEvent( ::openfl::events::Event event){
	HX_STACK_FRAME("openfl.utils.Assets","dispatchEvent",0xec96fb70,"openfl.utils.Assets.dispatchEvent","openfl/utils/Assets.hx",63,0x4e64919e)
	HX_STACK_ARG(event,"event")
	HX_STACK_LINE(65)
	::openfl::events::EventDispatcher tmp = ::openfl::utils::Assets_obj::dispatcher;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(65)
	::openfl::events::Event tmp1 = event;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(65)
	bool tmp2 = tmp->dispatchEvent(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(65)
	return tmp2;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Assets_obj,dispatchEvent,return )

bool Assets_obj::exists( ::String id,::String type){
	HX_STACK_FRAME("openfl.utils.Assets","exists",0x4d6bbb6c,"openfl.utils.Assets.exists","openfl/utils/Assets.hx",75,0x4e64919e)
	HX_STACK_ARG(id,"id")
	HX_STACK_ARG(type,"type")
	HX_STACK_LINE(77)
	::String tmp = id;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(77)
	::String tmp1 = type;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(77)
	bool tmp2 = ::lime::utils::Assets_obj::exists(tmp,tmp1);		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(77)
	return tmp2;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(Assets_obj,exists,return )

::openfl::display::BitmapData Assets_obj::getBitmapData( ::String id,hx::Null< bool >  __o_useCache){
bool useCache = __o_useCache.Default(true);
	HX_STACK_FRAME("openfl.utils.Assets","getBitmapData",0xb665465f,"openfl.utils.Assets.getBitmapData","openfl/utils/Assets.hx",89,0x4e64919e)
	HX_STACK_ARG(id,"id")
	HX_STACK_ARG(useCache,"useCache")
{
		HX_STACK_LINE(93)
		bool tmp = useCache;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(93)
		bool tmp1 = tmp;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(93)
		bool tmp2;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(93)
		if ((tmp1)){
			HX_STACK_LINE(93)
			::openfl::utils::IAssetCache tmp3 = ::openfl::utils::Assets_obj::cache;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(93)
			::openfl::utils::IAssetCache tmp4 = tmp3;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(93)
			::openfl::utils::IAssetCache tmp5 = tmp4;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(93)
			tmp2 = tmp5->get_enabled();
		}
		else{
			HX_STACK_LINE(93)
			tmp2 = false;
		}
		HX_STACK_LINE(93)
		bool tmp3;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(93)
		if ((tmp2)){
			HX_STACK_LINE(93)
			::openfl::utils::IAssetCache tmp4 = ::openfl::utils::Assets_obj::cache;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(93)
			::openfl::utils::IAssetCache tmp5 = tmp4;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(93)
			::String tmp6 = id;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(93)
			::String tmp7 = tmp6;		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(93)
			tmp3 = tmp5->hasBitmapData(tmp7);
		}
		else{
			HX_STACK_LINE(93)
			tmp3 = false;
		}
		HX_STACK_LINE(93)
		if ((tmp3)){
			HX_STACK_LINE(95)
			::openfl::utils::IAssetCache tmp4 = ::openfl::utils::Assets_obj::cache;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(95)
			::String tmp5 = id;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(95)
			::openfl::display::BitmapData tmp6 = tmp4->getBitmapData(tmp5);		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(95)
			::openfl::display::BitmapData bitmapData = tmp6;		HX_STACK_VAR(bitmapData,"bitmapData");
			HX_STACK_LINE(97)
			::openfl::display::BitmapData tmp7 = bitmapData;		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(97)
			bool tmp8 = ::openfl::utils::Assets_obj::isValidBitmapData(tmp7);		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(97)
			if ((tmp8)){
				HX_STACK_LINE(99)
				::openfl::display::BitmapData tmp9 = bitmapData;		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(99)
				return tmp9;
			}
		}
		HX_STACK_LINE(105)
		::String tmp4 = id;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(105)
		::lime::graphics::Image tmp5 = ::lime::utils::Assets_obj::getImage(tmp4,false);		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(105)
		::lime::graphics::Image image = tmp5;		HX_STACK_VAR(image,"image");
		HX_STACK_LINE(107)
		bool tmp6 = (image != null());		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(107)
		if ((tmp6)){
			HX_STACK_LINE(112)
			::lime::graphics::Image tmp7 = image;		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(112)
			::openfl::display::BitmapData tmp8 = ::openfl::display::BitmapData_obj::fromImage(tmp7,null());		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(112)
			::openfl::display::BitmapData bitmapData = tmp8;		HX_STACK_VAR(bitmapData,"bitmapData");
			HX_STACK_LINE(115)
			bool tmp9 = useCache;		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(115)
			bool tmp10;		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(115)
			if ((tmp9)){
				HX_STACK_LINE(115)
				::openfl::utils::IAssetCache tmp11 = ::openfl::utils::Assets_obj::cache;		HX_STACK_VAR(tmp11,"tmp11");
				HX_STACK_LINE(115)
				::openfl::utils::IAssetCache tmp12 = tmp11;		HX_STACK_VAR(tmp12,"tmp12");
				HX_STACK_LINE(115)
				tmp10 = tmp12->get_enabled();
			}
			else{
				HX_STACK_LINE(115)
				tmp10 = false;
			}
			HX_STACK_LINE(115)
			if ((tmp10)){
				HX_STACK_LINE(117)
				::openfl::utils::IAssetCache tmp11 = ::openfl::utils::Assets_obj::cache;		HX_STACK_VAR(tmp11,"tmp11");
				HX_STACK_LINE(117)
				::String tmp12 = id;		HX_STACK_VAR(tmp12,"tmp12");
				HX_STACK_LINE(117)
				::openfl::display::BitmapData tmp13 = bitmapData;		HX_STACK_VAR(tmp13,"tmp13");
				HX_STACK_LINE(117)
				tmp11->setBitmapData(tmp12,tmp13);
			}
			HX_STACK_LINE(121)
			::openfl::display::BitmapData tmp11 = bitmapData;		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(121)
			return tmp11;
		}
		HX_STACK_LINE(127)
		return null();
	}
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(Assets_obj,getBitmapData,return )

::openfl::utils::ByteArrayData Assets_obj::getBytes( ::String id){
	HX_STACK_FRAME("openfl.utils.Assets","getBytes",0xdb493985,"openfl.utils.Assets.getBytes","openfl/utils/Assets.hx",138,0x4e64919e)
	HX_STACK_ARG(id,"id")
	HX_STACK_LINE(140)
	::String tmp = id;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(140)
	::haxe::io::Bytes tmp1 = ::lime::utils::Assets_obj::getBytes(tmp);		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(140)
	::openfl::utils::ByteArrayData tmp2 = ::openfl::utils::_ByteArray::ByteArray_Impl__obj::fromBytes(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(140)
	return tmp2;
	HX_STACK_LINE(140)
	return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Assets_obj,getBytes,return )

::openfl::text::Font Assets_obj::getFont( ::String id,hx::Null< bool >  __o_useCache){
bool useCache = __o_useCache.Default(true);
	HX_STACK_FRAME("openfl.utils.Assets","getFont",0x62e14df5,"openfl.utils.Assets.getFont","openfl/utils/Assets.hx",152,0x4e64919e)
	HX_STACK_ARG(id,"id")
	HX_STACK_ARG(useCache,"useCache")
{
		HX_STACK_LINE(156)
		bool tmp = useCache;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(156)
		bool tmp1 = tmp;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(156)
		bool tmp2;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(156)
		if ((tmp1)){
			HX_STACK_LINE(156)
			::openfl::utils::IAssetCache tmp3 = ::openfl::utils::Assets_obj::cache;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(156)
			::openfl::utils::IAssetCache tmp4 = tmp3;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(156)
			::openfl::utils::IAssetCache tmp5 = tmp4;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(156)
			tmp2 = tmp5->get_enabled();
		}
		else{
			HX_STACK_LINE(156)
			tmp2 = false;
		}
		HX_STACK_LINE(156)
		bool tmp3;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(156)
		if ((tmp2)){
			HX_STACK_LINE(156)
			::openfl::utils::IAssetCache tmp4 = ::openfl::utils::Assets_obj::cache;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(156)
			::openfl::utils::IAssetCache tmp5 = tmp4;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(156)
			::String tmp6 = id;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(156)
			::String tmp7 = tmp6;		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(156)
			tmp3 = tmp5->hasFont(tmp7);
		}
		else{
			HX_STACK_LINE(156)
			tmp3 = false;
		}
		HX_STACK_LINE(156)
		if ((tmp3)){
			HX_STACK_LINE(158)
			::openfl::utils::IAssetCache tmp4 = ::openfl::utils::Assets_obj::cache;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(158)
			::String tmp5 = id;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(158)
			::openfl::text::Font tmp6 = tmp4->getFont(tmp5);		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(158)
			return tmp6;
		}
		HX_STACK_LINE(162)
		::String tmp4 = id;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(162)
		::lime::text::Font tmp5 = ::lime::utils::Assets_obj::getFont(tmp4,false);		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(162)
		::lime::text::Font limeFont = tmp5;		HX_STACK_VAR(limeFont,"limeFont");
		HX_STACK_LINE(164)
		bool tmp6 = (limeFont != null());		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(164)
		if ((tmp6)){
			HX_STACK_LINE(169)
			::lime::text::Font tmp7 = limeFont;		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(169)
			::openfl::text::Font tmp8 = ::openfl::text::Font_obj::__fromLimeFont(tmp7);		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(169)
			::openfl::text::Font font = tmp8;		HX_STACK_VAR(font,"font");
			HX_STACK_LINE(172)
			bool tmp9 = useCache;		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(172)
			bool tmp10;		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(172)
			if ((tmp9)){
				HX_STACK_LINE(172)
				::openfl::utils::IAssetCache tmp11 = ::openfl::utils::Assets_obj::cache;		HX_STACK_VAR(tmp11,"tmp11");
				HX_STACK_LINE(172)
				::openfl::utils::IAssetCache tmp12 = tmp11;		HX_STACK_VAR(tmp12,"tmp12");
				HX_STACK_LINE(172)
				tmp10 = tmp12->get_enabled();
			}
			else{
				HX_STACK_LINE(172)
				tmp10 = false;
			}
			HX_STACK_LINE(172)
			if ((tmp10)){
				HX_STACK_LINE(174)
				::openfl::utils::IAssetCache tmp11 = ::openfl::utils::Assets_obj::cache;		HX_STACK_VAR(tmp11,"tmp11");
				HX_STACK_LINE(174)
				::String tmp12 = id;		HX_STACK_VAR(tmp12,"tmp12");
				HX_STACK_LINE(174)
				::openfl::text::Font tmp13 = font;		HX_STACK_VAR(tmp13,"tmp13");
				HX_STACK_LINE(174)
				tmp11->setFont(tmp12,tmp13);
			}
			HX_STACK_LINE(178)
			::openfl::text::Font tmp11 = font;		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(178)
			return tmp11;
		}
		HX_STACK_LINE(184)
		::openfl::text::Font tmp7 = ::openfl::text::Font_obj::__new(null());		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(184)
		return tmp7;
	}
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(Assets_obj,getFont,return )

::lime::utils::AssetLibrary Assets_obj::getLibrary( ::String name){
	HX_STACK_FRAME("openfl.utils.Assets","getLibrary",0x10a35295,"openfl.utils.Assets.getLibrary","openfl/utils/Assets.hx",189,0x4e64919e)
	HX_STACK_ARG(name,"name")
	HX_STACK_LINE(191)
	::String tmp = name;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(191)
	::lime::utils::AssetLibrary tmp1 = ::lime::utils::Assets_obj::getLibrary(tmp);		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(191)
	return tmp1;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Assets_obj,getLibrary,return )

::openfl::display::MovieClip Assets_obj::getMovieClip( ::String id){
	HX_STACK_FRAME("openfl.utils.Assets","getMovieClip",0xfd23c8ba,"openfl.utils.Assets.getMovieClip","openfl/utils/Assets.hx",202,0x4e64919e)
	HX_STACK_ARG(id,"id")
	HX_STACK_LINE(206)
	int tmp = id.indexOf(HX_HCSTRING(":","\x3a","\x00","\x00","\x00"),null());		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(206)
	::String tmp1 = id.substring((int)0,tmp);		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(206)
	::String libraryName = tmp1;		HX_STACK_VAR(libraryName,"libraryName");
	HX_STACK_LINE(207)
	int tmp2 = id.indexOf(HX_HCSTRING(":","\x3a","\x00","\x00","\x00"),null());		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(207)
	int tmp3 = (tmp2 + (int)1);		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(207)
	::String tmp4 = id.substr(tmp3,null());		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(207)
	::String symbolName = tmp4;		HX_STACK_VAR(symbolName,"symbolName");
	HX_STACK_LINE(208)
	::String tmp5 = libraryName;		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(208)
	::lime::utils::AssetLibrary tmp6 = ::openfl::utils::Assets_obj::getLibrary(tmp5);		HX_STACK_VAR(tmp6,"tmp6");
	HX_STACK_LINE(208)
	::lime::utils::AssetLibrary limeLibrary = tmp6;		HX_STACK_VAR(limeLibrary,"limeLibrary");
	HX_STACK_LINE(210)
	bool tmp7 = (limeLibrary != null());		HX_STACK_VAR(tmp7,"tmp7");
	HX_STACK_LINE(210)
	if ((tmp7)){
		HX_STACK_LINE(212)
		::lime::utils::AssetLibrary tmp8 = limeLibrary;		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(212)
		bool tmp9 = ::Std_obj::is(tmp8,hx::ClassOf< ::openfl::utils::AssetLibrary >());		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(212)
		if ((tmp9)){
			HX_STACK_LINE(214)
			::openfl::utils::AssetLibrary library = ((::openfl::utils::AssetLibrary)(limeLibrary));		HX_STACK_VAR(library,"library");
			HX_STACK_LINE(216)
			::String tmp10 = symbolName;		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(216)
			bool tmp11 = library->exists(tmp10,HX_HCSTRING("MOVIE_CLIP","\x1f","\xe1","\xaa","\x77"));		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(216)
			if ((tmp11)){
				HX_STACK_LINE(218)
				::String tmp12 = symbolName;		HX_STACK_VAR(tmp12,"tmp12");
				HX_STACK_LINE(218)
				bool tmp13 = library->isLocal(tmp12,HX_HCSTRING("MOVIE_CLIP","\x1f","\xe1","\xaa","\x77"));		HX_STACK_VAR(tmp13,"tmp13");
				HX_STACK_LINE(218)
				if ((tmp13)){
					HX_STACK_LINE(220)
					::String tmp14 = symbolName;		HX_STACK_VAR(tmp14,"tmp14");
					HX_STACK_LINE(220)
					::openfl::display::MovieClip tmp15 = library->getMovieClip(tmp14);		HX_STACK_VAR(tmp15,"tmp15");
					HX_STACK_LINE(220)
					return tmp15;
				}
				else{
					HX_STACK_LINE(224)
					::String tmp14 = (HX_HCSTRING("MovieClip asset \"","\x52","\x88","\x7e","\xe3") + id);		HX_STACK_VAR(tmp14,"tmp14");
					HX_STACK_LINE(224)
					::String tmp15 = (tmp14 + HX_HCSTRING("\" exists, but only asynchronously","\xdc","\xca","\xf2","\xdd"));		HX_STACK_VAR(tmp15,"tmp15");
					HX_STACK_LINE(224)
					Dynamic tmp16 = hx::SourceInfo(HX_HCSTRING("Assets.hx","\xfb","\xcd","\xc6","\x67"),224,HX_HCSTRING("openfl.utils.Assets","\xde","\xb0","\x04","\x7c"),HX_HCSTRING("getMovieClip","\x2a","\x9f","\x71","\x27"));		HX_STACK_VAR(tmp16,"tmp16");
					HX_STACK_LINE(224)
					::lime::utils::Log_obj::error(tmp15,tmp16);
					HX_STACK_LINE(225)
					return null();
				}
			}
		}
		HX_STACK_LINE(233)
		::String tmp10 = (HX_HCSTRING("There is no MovieClip asset with an ID of \"","\xd0","\x88","\xde","\x8c") + id);		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(233)
		::String tmp11 = (tmp10 + HX_HCSTRING("\"","\x22","\x00","\x00","\x00"));		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(233)
		Dynamic tmp12 = hx::SourceInfo(HX_HCSTRING("Assets.hx","\xfb","\xcd","\xc6","\x67"),233,HX_HCSTRING("openfl.utils.Assets","\xde","\xb0","\x04","\x7c"),HX_HCSTRING("getMovieClip","\x2a","\x9f","\x71","\x27"));		HX_STACK_VAR(tmp12,"tmp12");
		HX_STACK_LINE(233)
		::lime::utils::Log_obj::error(tmp11,tmp12);
	}
	else{
		HX_STACK_LINE(237)
		::String tmp8 = (HX_HCSTRING("There is no asset library named \"","\xa1","\x83","\x5f","\x51") + libraryName);		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(237)
		::String tmp9 = (tmp8 + HX_HCSTRING("\"","\x22","\x00","\x00","\x00"));		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(237)
		Dynamic tmp10 = hx::SourceInfo(HX_HCSTRING("Assets.hx","\xfb","\xcd","\xc6","\x67"),237,HX_HCSTRING("openfl.utils.Assets","\xde","\xb0","\x04","\x7c"),HX_HCSTRING("getMovieClip","\x2a","\x9f","\x71","\x27"));		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(237)
		::lime::utils::Log_obj::error(tmp9,tmp10);
	}
	HX_STACK_LINE(243)
	return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Assets_obj,getMovieClip,return )

::openfl::media::Sound Assets_obj::getMusic( ::String id,hx::Null< bool >  __o_useCache){
bool useCache = __o_useCache.Default(true);
	HX_STACK_FRAME("openfl.utils.Assets","getMusic",0x2e0c01bf,"openfl.utils.Assets.getMusic","openfl/utils/Assets.hx",255,0x4e64919e)
	HX_STACK_ARG(id,"id")
	HX_STACK_ARG(useCache,"useCache")
{
		HX_STACK_LINE(259)
		::String tmp = id;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(259)
		bool tmp1 = useCache;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(259)
		::openfl::media::Sound tmp2 = ::openfl::utils::Assets_obj::getSound(tmp,tmp1);		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(259)
		return tmp2;
	}
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(Assets_obj,getMusic,return )

::String Assets_obj::getPath( ::String id){
	HX_STACK_FRAME("openfl.utils.Assets","getPath",0x6972d5cb,"openfl.utils.Assets.getPath","openfl/utils/Assets.hx",270,0x4e64919e)
	HX_STACK_ARG(id,"id")
	HX_STACK_LINE(272)
	::String tmp = id;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(272)
	::String tmp1 = ::lime::utils::Assets_obj::getPath(tmp);		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(272)
	return tmp1;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Assets_obj,getPath,return )

::openfl::media::Sound Assets_obj::getSound( ::String id,hx::Null< bool >  __o_useCache){
bool useCache = __o_useCache.Default(true);
	HX_STACK_FRAME("openfl.utils.Assets","getSound",0x9e7dbde9,"openfl.utils.Assets.getSound","openfl/utils/Assets.hx",284,0x4e64919e)
	HX_STACK_ARG(id,"id")
	HX_STACK_ARG(useCache,"useCache")
{
		HX_STACK_LINE(288)
		bool tmp = useCache;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(288)
		bool tmp1 = tmp;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(288)
		bool tmp2;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(288)
		if ((tmp1)){
			HX_STACK_LINE(288)
			::openfl::utils::IAssetCache tmp3 = ::openfl::utils::Assets_obj::cache;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(288)
			::openfl::utils::IAssetCache tmp4 = tmp3;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(288)
			::openfl::utils::IAssetCache tmp5 = tmp4;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(288)
			tmp2 = tmp5->get_enabled();
		}
		else{
			HX_STACK_LINE(288)
			tmp2 = false;
		}
		HX_STACK_LINE(288)
		bool tmp3;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(288)
		if ((tmp2)){
			HX_STACK_LINE(288)
			::openfl::utils::IAssetCache tmp4 = ::openfl::utils::Assets_obj::cache;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(288)
			::openfl::utils::IAssetCache tmp5 = tmp4;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(288)
			::String tmp6 = id;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(288)
			::String tmp7 = tmp6;		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(288)
			tmp3 = tmp5->hasSound(tmp7);
		}
		else{
			HX_STACK_LINE(288)
			tmp3 = false;
		}
		HX_STACK_LINE(288)
		if ((tmp3)){
			HX_STACK_LINE(290)
			::openfl::utils::IAssetCache tmp4 = ::openfl::utils::Assets_obj::cache;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(290)
			::String tmp5 = id;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(290)
			::openfl::media::Sound tmp6 = tmp4->getSound(tmp5);		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(290)
			::openfl::media::Sound sound = tmp6;		HX_STACK_VAR(sound,"sound");
			HX_STACK_LINE(292)
			::openfl::media::Sound tmp7 = sound;		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(292)
			bool tmp8 = ::openfl::utils::Assets_obj::isValidSound(tmp7);		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(292)
			if ((tmp8)){
				HX_STACK_LINE(294)
				::openfl::media::Sound tmp9 = sound;		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(294)
				return tmp9;
			}
		}
		HX_STACK_LINE(300)
		::String tmp4 = id;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(300)
		::lime::media::AudioBuffer tmp5 = ::lime::utils::Assets_obj::getAudioBuffer(tmp4,false);		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(300)
		::lime::media::AudioBuffer buffer = tmp5;		HX_STACK_VAR(buffer,"buffer");
		HX_STACK_LINE(302)
		bool tmp6 = (buffer != null());		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(302)
		if ((tmp6)){
			HX_STACK_LINE(307)
			::lime::media::AudioBuffer tmp7 = buffer;		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(307)
			::openfl::media::Sound tmp8 = ::openfl::media::Sound_obj::fromAudioBuffer(tmp7);		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(307)
			::openfl::media::Sound sound = tmp8;		HX_STACK_VAR(sound,"sound");
			HX_STACK_LINE(310)
			bool tmp9 = useCache;		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(310)
			bool tmp10;		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(310)
			if ((tmp9)){
				HX_STACK_LINE(310)
				::openfl::utils::IAssetCache tmp11 = ::openfl::utils::Assets_obj::cache;		HX_STACK_VAR(tmp11,"tmp11");
				HX_STACK_LINE(310)
				::openfl::utils::IAssetCache tmp12 = tmp11;		HX_STACK_VAR(tmp12,"tmp12");
				HX_STACK_LINE(310)
				tmp10 = tmp12->get_enabled();
			}
			else{
				HX_STACK_LINE(310)
				tmp10 = false;
			}
			HX_STACK_LINE(310)
			if ((tmp10)){
				HX_STACK_LINE(312)
				::openfl::utils::IAssetCache tmp11 = ::openfl::utils::Assets_obj::cache;		HX_STACK_VAR(tmp11,"tmp11");
				HX_STACK_LINE(312)
				::String tmp12 = id;		HX_STACK_VAR(tmp12,"tmp12");
				HX_STACK_LINE(312)
				::openfl::media::Sound tmp13 = sound;		HX_STACK_VAR(tmp13,"tmp13");
				HX_STACK_LINE(312)
				tmp11->setSound(tmp12,tmp13);
			}
			HX_STACK_LINE(316)
			::openfl::media::Sound tmp11 = sound;		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(316)
			return tmp11;
		}
		HX_STACK_LINE(322)
		return null();
	}
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(Assets_obj,getSound,return )

::String Assets_obj::getText( ::String id){
	HX_STACK_FRAME("openfl.utils.Assets","getText",0x6c1abcd3,"openfl.utils.Assets.getText","openfl/utils/Assets.hx",333,0x4e64919e)
	HX_STACK_ARG(id,"id")
	HX_STACK_LINE(335)
	::String tmp = id;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(335)
	::String tmp1 = ::lime::utils::Assets_obj::getText(tmp);		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(335)
	return tmp1;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Assets_obj,getText,return )

bool Assets_obj::hasEventListener( ::String type){
	HX_STACK_FRAME("openfl.utils.Assets","hasEventListener",0xfb186084,"openfl.utils.Assets.hasEventListener","openfl/utils/Assets.hx",340,0x4e64919e)
	HX_STACK_ARG(type,"type")
	HX_STACK_LINE(342)
	::openfl::events::EventDispatcher tmp = ::openfl::utils::Assets_obj::dispatcher;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(342)
	::String tmp1 = type;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(342)
	bool tmp2 = tmp->hasEventListener(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(342)
	return tmp2;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Assets_obj,hasEventListener,return )

bool Assets_obj::isLocal( ::String id,::String type,hx::Null< bool >  __o_useCache){
bool useCache = __o_useCache.Default(true);
	HX_STACK_FRAME("openfl.utils.Assets","isLocal",0x6214ad91,"openfl.utils.Assets.isLocal","openfl/utils/Assets.hx",354,0x4e64919e)
	HX_STACK_ARG(id,"id")
	HX_STACK_ARG(type,"type")
	HX_STACK_ARG(useCache,"useCache")
{
		HX_STACK_LINE(358)
		bool tmp = useCache;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(358)
		bool tmp1;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(358)
		if ((tmp)){
			HX_STACK_LINE(358)
			::openfl::utils::IAssetCache tmp2 = ::openfl::utils::Assets_obj::cache;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(358)
			::openfl::utils::IAssetCache tmp3 = tmp2;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(358)
			tmp1 = tmp3->get_enabled();
		}
		else{
			HX_STACK_LINE(358)
			tmp1 = false;
		}
		HX_STACK_LINE(358)
		if ((tmp1)){
			HX_STACK_LINE(360)
			bool tmp2 = (type == HX_HCSTRING("IMAGE","\x3b","\x57","\x57","\x3b"));		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(360)
			bool tmp3 = !(tmp2);		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(360)
			bool tmp4;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(360)
			if ((tmp3)){
				HX_STACK_LINE(360)
				tmp4 = (type == null());
			}
			else{
				HX_STACK_LINE(360)
				tmp4 = true;
			}
			HX_STACK_LINE(360)
			if ((tmp4)){
				HX_STACK_LINE(362)
				::openfl::utils::IAssetCache tmp5 = ::openfl::utils::Assets_obj::cache;		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(362)
				::String tmp6 = id;		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(362)
				bool tmp7 = tmp5->hasBitmapData(tmp6);		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(362)
				if ((tmp7)){
					HX_STACK_LINE(362)
					return true;
				}
			}
			HX_STACK_LINE(366)
			bool tmp5 = (type == HX_HCSTRING("FONT","\xcf","\x25","\x81","\x2e"));		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(366)
			bool tmp6 = !(tmp5);		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(366)
			bool tmp7;		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(366)
			if ((tmp6)){
				HX_STACK_LINE(366)
				tmp7 = (type == null());
			}
			else{
				HX_STACK_LINE(366)
				tmp7 = true;
			}
			HX_STACK_LINE(366)
			if ((tmp7)){
				HX_STACK_LINE(368)
				::openfl::utils::IAssetCache tmp8 = ::openfl::utils::Assets_obj::cache;		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(368)
				::String tmp9 = id;		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(368)
				bool tmp10 = tmp8->hasFont(tmp9);		HX_STACK_VAR(tmp10,"tmp10");
				HX_STACK_LINE(368)
				if ((tmp10)){
					HX_STACK_LINE(368)
					return true;
				}
			}
			HX_STACK_LINE(372)
			bool tmp8 = (type == HX_HCSTRING("SOUND","\xaf","\xc4","\xba","\xfe"));		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(372)
			bool tmp9 = !(tmp8);		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(372)
			bool tmp10 = tmp9;		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(372)
			bool tmp11;		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(372)
			if ((tmp10)){
				HX_STACK_LINE(372)
				tmp11 = (type == HX_HCSTRING("MUSIC","\x85","\x08","\x49","\x8e"));
			}
			else{
				HX_STACK_LINE(372)
				tmp11 = true;
			}
			HX_STACK_LINE(372)
			bool tmp12 = !(tmp11);		HX_STACK_VAR(tmp12,"tmp12");
			HX_STACK_LINE(372)
			bool tmp13;		HX_STACK_VAR(tmp13,"tmp13");
			HX_STACK_LINE(372)
			if ((tmp12)){
				HX_STACK_LINE(372)
				tmp13 = (type == null());
			}
			else{
				HX_STACK_LINE(372)
				tmp13 = true;
			}
			HX_STACK_LINE(372)
			if ((tmp13)){
				HX_STACK_LINE(374)
				::openfl::utils::IAssetCache tmp14 = ::openfl::utils::Assets_obj::cache;		HX_STACK_VAR(tmp14,"tmp14");
				HX_STACK_LINE(374)
				::String tmp15 = id;		HX_STACK_VAR(tmp15,"tmp15");
				HX_STACK_LINE(374)
				bool tmp16 = tmp14->hasSound(tmp15);		HX_STACK_VAR(tmp16,"tmp16");
				HX_STACK_LINE(374)
				if ((tmp16)){
					HX_STACK_LINE(374)
					return true;
				}
			}
		}
		HX_STACK_LINE(380)
		int tmp2 = id.indexOf(HX_HCSTRING(":","\x3a","\x00","\x00","\x00"),null());		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(380)
		::String tmp3 = id.substring((int)0,tmp2);		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(380)
		::String libraryName = tmp3;		HX_STACK_VAR(libraryName,"libraryName");
		HX_STACK_LINE(381)
		int tmp4 = id.indexOf(HX_HCSTRING(":","\x3a","\x00","\x00","\x00"),null());		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(381)
		int tmp5 = (tmp4 + (int)1);		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(381)
		::String tmp6 = id.substr(tmp5,null());		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(381)
		::String symbolName = tmp6;		HX_STACK_VAR(symbolName,"symbolName");
		HX_STACK_LINE(382)
		::String tmp7 = libraryName;		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(382)
		::lime::utils::AssetLibrary tmp8 = ::openfl::utils::Assets_obj::getLibrary(tmp7);		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(382)
		::lime::utils::AssetLibrary library = tmp8;		HX_STACK_VAR(library,"library");
		HX_STACK_LINE(384)
		bool tmp9 = (library != null());		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(384)
		if ((tmp9)){
			HX_STACK_LINE(386)
			::String tmp10 = symbolName;		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(386)
			::String tmp11 = type;		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(386)
			bool tmp12 = library->isLocal(tmp10,tmp11);		HX_STACK_VAR(tmp12,"tmp12");
			HX_STACK_LINE(386)
			return tmp12;
		}
		HX_STACK_LINE(392)
		return false;
	}
}


STATIC_HX_DEFINE_DYNAMIC_FUNC3(Assets_obj,isLocal,return )

bool Assets_obj::isValidBitmapData( ::openfl::display::BitmapData bitmapData){
	HX_STACK_FRAME("openfl.utils.Assets","isValidBitmapData",0x6121917b,"openfl.utils.Assets.isValidBitmapData","openfl/utils/Assets.hx",397,0x4e64919e)
	HX_STACK_ARG(bitmapData,"bitmapData")
	HX_STACK_LINE(415)
	bool tmp = (bitmapData != null());		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(415)
	bool tmp1;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(415)
	if ((tmp)){
		HX_STACK_LINE(415)
		tmp1 = (bitmapData->image != null());
	}
	else{
		HX_STACK_LINE(415)
		tmp1 = false;
	}
	HX_STACK_LINE(415)
	return tmp1;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Assets_obj,isValidBitmapData,return )

bool Assets_obj::isValidSound( ::openfl::media::Sound sound){
	HX_STACK_FRAME("openfl.utils.Assets","isValidSound",0x76dd484d,"openfl.utils.Assets.isValidSound","openfl/utils/Assets.hx",431,0x4e64919e)
	HX_STACK_ARG(sound,"sound")
	HX_STACK_LINE(431)
	return true;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Assets_obj,isValidSound,return )

Array< ::String > Assets_obj::list( ::String type){
	HX_STACK_FRAME("openfl.utils.Assets","list",0xcc5935ee,"openfl.utils.Assets.list","openfl/utils/Assets.hx",448,0x4e64919e)
	HX_STACK_ARG(type,"type")
	HX_STACK_LINE(450)
	::String tmp = type;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(450)
	return ::lime::utils::Assets_obj::list(tmp);
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Assets_obj,list,return )

::lime::app::Future Assets_obj::loadBitmapData( ::String id,Dynamic __o_useCache,Dynamic handler){
Dynamic useCache = __o_useCache.Default(true);
	HX_STACK_FRAME("openfl.utils.Assets","loadBitmapData",0x102d6d0f,"openfl.utils.Assets.loadBitmapData","openfl/utils/Assets.hx",463,0x4e64919e)
	HX_STACK_ARG(id,"id")
	HX_STACK_ARG(useCache,"useCache")
	HX_STACK_ARG(handler,"handler")
{
		HX_STACK_LINE(465)
		bool tmp = (useCache == null());		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(465)
		if ((tmp)){
			HX_STACK_LINE(465)
			useCache = true;
		}
		HX_STACK_LINE(467)
		::lime::app::Promise_openfl_display_BitmapData tmp1 = ::lime::app::Promise_openfl_display_BitmapData_obj::__new();		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(467)
		::lime::app::Promise_openfl_display_BitmapData promise = tmp1;		HX_STACK_VAR(promise,"promise");
		HX_STACK_LINE(469)
		bool tmp2 = (handler != null());		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(469)
		if ((tmp2)){
			HX_STACK_LINE(471)
			Dynamic tmp3 = handler;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(471)
			promise->future->onComplete(tmp3);

			HX_BEGIN_LOCAL_FUNC_S1(hx::LocalFunc,_Function_2_1,Dynamic,handler)
			int __ArgCount() const { return 1; }
			Void run(Dynamic _){
				HX_STACK_FRAME("*","_Function_2_1",0x5201af78,"*._Function_2_1","openfl/utils/Assets.hx",472,0x4e64919e)
				HX_STACK_ARG(_,"_")
				{
					HX_STACK_LINE(472)
					handler(null()).Cast< Void >();
				}
				return null();
			}
			HX_END_LOCAL_FUNC1((void))

			HX_STACK_LINE(472)
			promise->future->onError( Dynamic(new _Function_2_1(handler)));
		}
		HX_STACK_LINE(478)
		Dynamic tmp3 = useCache;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(478)
		Dynamic tmp4 = tmp3;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(478)
		bool tmp5;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(478)
		if ((tmp4)){
			HX_STACK_LINE(478)
			::openfl::utils::IAssetCache tmp6 = ::openfl::utils::Assets_obj::cache;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(478)
			::openfl::utils::IAssetCache tmp7 = tmp6;		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(478)
			::openfl::utils::IAssetCache tmp8 = tmp7;		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(478)
			tmp5 = tmp8->get_enabled();
		}
		else{
			HX_STACK_LINE(478)
			tmp5 = false;
		}
		HX_STACK_LINE(478)
		bool tmp6;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(478)
		if ((tmp5)){
			HX_STACK_LINE(478)
			::openfl::utils::IAssetCache tmp7 = ::openfl::utils::Assets_obj::cache;		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(478)
			::openfl::utils::IAssetCache tmp8 = tmp7;		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(478)
			::String tmp9 = id;		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(478)
			::String tmp10 = tmp9;		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(478)
			tmp6 = tmp8->hasBitmapData(tmp10);
		}
		else{
			HX_STACK_LINE(478)
			tmp6 = false;
		}
		HX_STACK_LINE(478)
		if ((tmp6)){
			HX_STACK_LINE(480)
			::openfl::utils::IAssetCache tmp7 = ::openfl::utils::Assets_obj::cache;		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(480)
			::String tmp8 = id;		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(480)
			::openfl::display::BitmapData tmp9 = tmp7->getBitmapData(tmp8);		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(480)
			::openfl::display::BitmapData bitmapData = tmp9;		HX_STACK_VAR(bitmapData,"bitmapData");
			HX_STACK_LINE(482)
			::openfl::display::BitmapData tmp10 = bitmapData;		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(482)
			bool tmp11 = ::openfl::utils::Assets_obj::isValidBitmapData(tmp10);		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(482)
			if ((tmp11)){
				HX_STACK_LINE(484)
				::openfl::display::BitmapData tmp12 = bitmapData;		HX_STACK_VAR(tmp12,"tmp12");
				HX_STACK_LINE(484)
				promise->complete(tmp12);
				HX_STACK_LINE(485)
				::lime::app::Future tmp13 = promise->future;		HX_STACK_VAR(tmp13,"tmp13");
				HX_STACK_LINE(485)
				return tmp13;
			}
		}
		HX_STACK_LINE(491)
		::String tmp7 = id;		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(491)
		::lime::app::Future tmp8 = ::lime::utils::Assets_obj::loadImage(tmp7,false);		HX_STACK_VAR(tmp8,"tmp8");

		HX_BEGIN_LOCAL_FUNC_S3(hx::LocalFunc,_Function_1_1,Dynamic,useCache,::lime::app::Promise_openfl_display_BitmapData,promise,::String,id)
		int __ArgCount() const { return 1; }
		Void run(::lime::graphics::Image image){
			HX_STACK_FRAME("*","_Function_1_1",0x5200ed37,"*._Function_1_1","openfl/utils/Assets.hx",491,0x4e64919e)
			HX_STACK_ARG(image,"image")
			{
				HX_STACK_LINE(493)
				bool tmp9 = (image != null());		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(493)
				if ((tmp9)){
					HX_STACK_LINE(498)
					::lime::graphics::Image tmp10 = image;		HX_STACK_VAR(tmp10,"tmp10");
					HX_STACK_LINE(498)
					::openfl::display::BitmapData tmp11 = ::openfl::display::BitmapData_obj::fromImage(tmp10,null());		HX_STACK_VAR(tmp11,"tmp11");
					HX_STACK_LINE(498)
					::openfl::display::BitmapData bitmapData = tmp11;		HX_STACK_VAR(bitmapData,"bitmapData");
					HX_STACK_LINE(501)
					Dynamic tmp12 = useCache;		HX_STACK_VAR(tmp12,"tmp12");
					HX_STACK_LINE(501)
					bool tmp13;		HX_STACK_VAR(tmp13,"tmp13");
					HX_STACK_LINE(501)
					if ((tmp12)){
						HX_STACK_LINE(501)
						::openfl::utils::IAssetCache tmp14 = ::openfl::utils::Assets_obj::cache;		HX_STACK_VAR(tmp14,"tmp14");
						HX_STACK_LINE(501)
						::openfl::utils::IAssetCache tmp15 = tmp14;		HX_STACK_VAR(tmp15,"tmp15");
						HX_STACK_LINE(501)
						tmp13 = tmp15->get_enabled();
					}
					else{
						HX_STACK_LINE(501)
						tmp13 = false;
					}
					HX_STACK_LINE(501)
					if ((tmp13)){
						HX_STACK_LINE(503)
						::openfl::utils::IAssetCache tmp14 = ::openfl::utils::Assets_obj::cache;		HX_STACK_VAR(tmp14,"tmp14");
						HX_STACK_LINE(503)
						::String tmp15 = id;		HX_STACK_VAR(tmp15,"tmp15");
						HX_STACK_LINE(503)
						::openfl::display::BitmapData tmp16 = bitmapData;		HX_STACK_VAR(tmp16,"tmp16");
						HX_STACK_LINE(503)
						tmp14->setBitmapData(tmp15,tmp16);
					}
					HX_STACK_LINE(507)
					::openfl::display::BitmapData tmp14 = bitmapData;		HX_STACK_VAR(tmp14,"tmp14");
					HX_STACK_LINE(507)
					promise->complete(tmp14);
				}
				else{
					HX_STACK_LINE(511)
					::String tmp10 = (HX_HCSTRING("[Assets] Could not load Image \"","\xf0","\x0b","\xf7","\xed") + id);		HX_STACK_VAR(tmp10,"tmp10");
					HX_STACK_LINE(511)
					::String tmp11 = (tmp10 + HX_HCSTRING("\"","\x22","\x00","\x00","\x00"));		HX_STACK_VAR(tmp11,"tmp11");
					HX_STACK_LINE(511)
					promise->error(tmp11);
				}
			}
			return null();
		}
		HX_END_LOCAL_FUNC1((void))

		HX_STACK_LINE(491)
		::lime::app::Future tmp9 = tmp8->onComplete( Dynamic(new _Function_1_1(useCache,promise,id)));		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(515)
		Dynamic tmp10 = promise->error_dyn();		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(491)
		::lime::app::Future tmp11 = tmp9->onError(tmp10);		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(515)
		Dynamic tmp12 = promise->progress_dyn();		HX_STACK_VAR(tmp12,"tmp12");
		HX_STACK_LINE(491)
		tmp11->onProgress(tmp12);
		HX_STACK_LINE(519)
		::lime::app::Future tmp13 = promise->future;		HX_STACK_VAR(tmp13,"tmp13");
		HX_STACK_LINE(519)
		return tmp13;
	}
}


STATIC_HX_DEFINE_DYNAMIC_FUNC3(Assets_obj,loadBitmapData,return )

::lime::app::Future Assets_obj::loadBytes( ::String id,Dynamic handler){
	HX_STACK_FRAME("openfl.utils.Assets","loadBytes",0x39d290d5,"openfl.utils.Assets.loadBytes","openfl/utils/Assets.hx",532,0x4e64919e)
	HX_STACK_ARG(id,"id")
	HX_STACK_ARG(handler,"handler")
	HX_STACK_LINE(534)
	::lime::app::Promise_openfl_utils_ByteArray tmp = ::lime::app::Promise_openfl_utils_ByteArray_obj::__new();		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(534)
	::lime::app::Promise_openfl_utils_ByteArray promise = tmp;		HX_STACK_VAR(promise,"promise");
	HX_STACK_LINE(535)
	::String tmp1 = id;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(535)
	::lime::app::Future tmp2 = ::lime::utils::Assets_obj::loadBytes(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(535)
	::lime::app::Future future = tmp2;		HX_STACK_VAR(future,"future");
	HX_STACK_LINE(537)
	bool tmp3 = (handler != null());		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(537)
	if ((tmp3)){
		HX_STACK_LINE(539)
		Dynamic tmp4 = handler;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(539)
		promise->future->onComplete(tmp4);

		HX_BEGIN_LOCAL_FUNC_S1(hx::LocalFunc,_Function_2_1,Dynamic,handler)
		int __ArgCount() const { return 1; }
		Void run(Dynamic _){
			HX_STACK_FRAME("*","_Function_2_1",0x5201af78,"*._Function_2_1","openfl/utils/Assets.hx",540,0x4e64919e)
			HX_STACK_ARG(_,"_")
			{
				HX_STACK_LINE(540)
				handler(null()).Cast< Void >();
			}
			return null();
		}
		HX_END_LOCAL_FUNC1((void))

		HX_STACK_LINE(540)
		promise->future->onError( Dynamic(new _Function_2_1(handler)));
	}

	HX_BEGIN_LOCAL_FUNC_S1(hx::LocalFunc,_Function_1_1,::lime::app::Promise_openfl_utils_ByteArray,promise)
	int __ArgCount() const { return 1; }
	Void run(::haxe::io::Bytes bytes){
		HX_STACK_FRAME("*","_Function_1_1",0x5200ed37,"*._Function_1_1","openfl/utils/Assets.hx",544,0x4e64919e)
		HX_STACK_ARG(bytes,"bytes")
		{
			HX_STACK_LINE(544)
			::haxe::io::Bytes tmp4 = bytes;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(544)
			::openfl::utils::ByteArrayData tmp5 = ::openfl::utils::_ByteArray::ByteArray_Impl__obj::fromBytes(tmp4);		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(544)
			promise->complete(tmp5);
		}
		return null();
	}
	HX_END_LOCAL_FUNC1((void))

	HX_STACK_LINE(544)
	future->onComplete( Dynamic(new _Function_1_1(promise)));

	HX_BEGIN_LOCAL_FUNC_S1(hx::LocalFunc,_Function_1_2,::lime::app::Promise_openfl_utils_ByteArray,promise)
	int __ArgCount() const { return 2; }
	Void run(int progress,int total){
		HX_STACK_FRAME("*","_Function_1_2",0x5200ed38,"*._Function_1_2","openfl/utils/Assets.hx",545,0x4e64919e)
		HX_STACK_ARG(progress,"progress")
		HX_STACK_ARG(total,"total")
		{
			HX_STACK_LINE(545)
			int tmp4 = progress;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(545)
			int tmp5 = total;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(545)
			promise->progress(tmp4,tmp5);
		}
		return null();
	}
	HX_END_LOCAL_FUNC2((void))

	HX_STACK_LINE(545)
	future->onProgress( Dynamic(new _Function_1_2(promise)));

	HX_BEGIN_LOCAL_FUNC_S1(hx::LocalFunc,_Function_1_3,::lime::app::Promise_openfl_utils_ByteArray,promise)
	int __ArgCount() const { return 1; }
	Void run(Dynamic msg){
		HX_STACK_FRAME("*","_Function_1_3",0x5200ed39,"*._Function_1_3","openfl/utils/Assets.hx",546,0x4e64919e)
		HX_STACK_ARG(msg,"msg")
		{
			HX_STACK_LINE(546)
			Dynamic tmp4 = msg;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(546)
			promise->error(tmp4);
		}
		return null();
	}
	HX_END_LOCAL_FUNC1((void))

	HX_STACK_LINE(546)
	future->onError( Dynamic(new _Function_1_3(promise)));
	HX_STACK_LINE(548)
	::lime::app::Future tmp4 = promise->future;		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(548)
	return tmp4;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(Assets_obj,loadBytes,return )

::lime::app::Future Assets_obj::loadFont( ::String id,Dynamic __o_useCache,Dynamic handler){
Dynamic useCache = __o_useCache.Default(true);
	HX_STACK_FRAME("openfl.utils.Assets","loadFont",0x723a50a5,"openfl.utils.Assets.loadFont","openfl/utils/Assets.hx",561,0x4e64919e)
	HX_STACK_ARG(id,"id")
	HX_STACK_ARG(useCache,"useCache")
	HX_STACK_ARG(handler,"handler")
{
		HX_STACK_LINE(563)
		bool tmp = (useCache == null());		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(563)
		if ((tmp)){
			HX_STACK_LINE(563)
			useCache = true;
		}
		HX_STACK_LINE(565)
		::lime::app::Promise_openfl_text_Font tmp1 = ::lime::app::Promise_openfl_text_Font_obj::__new();		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(565)
		::lime::app::Promise_openfl_text_Font promise = tmp1;		HX_STACK_VAR(promise,"promise");
		HX_STACK_LINE(567)
		bool tmp2 = (handler != null());		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(567)
		if ((tmp2)){
			HX_STACK_LINE(569)
			Dynamic tmp3 = handler;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(569)
			promise->future->onComplete(tmp3);

			HX_BEGIN_LOCAL_FUNC_S1(hx::LocalFunc,_Function_2_1,Dynamic,handler)
			int __ArgCount() const { return 1; }
			Void run(Dynamic _){
				HX_STACK_FRAME("*","_Function_2_1",0x5201af78,"*._Function_2_1","openfl/utils/Assets.hx",570,0x4e64919e)
				HX_STACK_ARG(_,"_")
				{
					HX_STACK_LINE(570)
					handler(null()).Cast< Void >();
				}
				return null();
			}
			HX_END_LOCAL_FUNC1((void))

			HX_STACK_LINE(570)
			promise->future->onError( Dynamic(new _Function_2_1(handler)));
		}
		HX_STACK_LINE(576)
		Dynamic tmp3 = useCache;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(576)
		Dynamic tmp4 = tmp3;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(576)
		bool tmp5;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(576)
		if ((tmp4)){
			HX_STACK_LINE(576)
			::openfl::utils::IAssetCache tmp6 = ::openfl::utils::Assets_obj::cache;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(576)
			::openfl::utils::IAssetCache tmp7 = tmp6;		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(576)
			::openfl::utils::IAssetCache tmp8 = tmp7;		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(576)
			tmp5 = tmp8->get_enabled();
		}
		else{
			HX_STACK_LINE(576)
			tmp5 = false;
		}
		HX_STACK_LINE(576)
		bool tmp6;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(576)
		if ((tmp5)){
			HX_STACK_LINE(576)
			::openfl::utils::IAssetCache tmp7 = ::openfl::utils::Assets_obj::cache;		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(576)
			::openfl::utils::IAssetCache tmp8 = tmp7;		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(576)
			::String tmp9 = id;		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(576)
			::String tmp10 = tmp9;		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(576)
			tmp6 = tmp8->hasFont(tmp10);
		}
		else{
			HX_STACK_LINE(576)
			tmp6 = false;
		}
		HX_STACK_LINE(576)
		if ((tmp6)){
			HX_STACK_LINE(578)
			::openfl::utils::IAssetCache tmp7 = ::openfl::utils::Assets_obj::cache;		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(578)
			::String tmp8 = id;		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(578)
			::openfl::text::Font tmp9 = tmp7->getFont(tmp8);		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(578)
			promise->complete(tmp9);
			HX_STACK_LINE(579)
			::lime::app::Future tmp10 = promise->future;		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(579)
			return tmp10;
		}
		HX_STACK_LINE(583)
		::String tmp7 = id;		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(583)
		::lime::app::Future tmp8 = ::lime::utils::Assets_obj::loadFont(tmp7,null());		HX_STACK_VAR(tmp8,"tmp8");

		HX_BEGIN_LOCAL_FUNC_S3(hx::LocalFunc,_Function_1_1,Dynamic,useCache,::lime::app::Promise_openfl_text_Font,promise,::String,id)
		int __ArgCount() const { return 1; }
		Void run(::lime::text::Font limeFont){
			HX_STACK_FRAME("*","_Function_1_1",0x5200ed37,"*._Function_1_1","openfl/utils/Assets.hx",583,0x4e64919e)
			HX_STACK_ARG(limeFont,"limeFont")
			{
				HX_STACK_LINE(588)
				::lime::text::Font tmp9 = limeFont;		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(588)
				::openfl::text::Font tmp10 = ::openfl::text::Font_obj::__fromLimeFont(tmp9);		HX_STACK_VAR(tmp10,"tmp10");
				HX_STACK_LINE(588)
				::openfl::text::Font font = tmp10;		HX_STACK_VAR(font,"font");
				HX_STACK_LINE(591)
				Dynamic tmp11 = useCache;		HX_STACK_VAR(tmp11,"tmp11");
				HX_STACK_LINE(591)
				bool tmp12;		HX_STACK_VAR(tmp12,"tmp12");
				HX_STACK_LINE(591)
				if ((tmp11)){
					HX_STACK_LINE(591)
					::openfl::utils::IAssetCache tmp13 = ::openfl::utils::Assets_obj::cache;		HX_STACK_VAR(tmp13,"tmp13");
					HX_STACK_LINE(591)
					::openfl::utils::IAssetCache tmp14 = tmp13;		HX_STACK_VAR(tmp14,"tmp14");
					HX_STACK_LINE(591)
					tmp12 = tmp14->get_enabled();
				}
				else{
					HX_STACK_LINE(591)
					tmp12 = false;
				}
				HX_STACK_LINE(591)
				if ((tmp12)){
					HX_STACK_LINE(593)
					::openfl::utils::IAssetCache tmp13 = ::openfl::utils::Assets_obj::cache;		HX_STACK_VAR(tmp13,"tmp13");
					HX_STACK_LINE(593)
					::String tmp14 = id;		HX_STACK_VAR(tmp14,"tmp14");
					HX_STACK_LINE(593)
					::openfl::text::Font tmp15 = font;		HX_STACK_VAR(tmp15,"tmp15");
					HX_STACK_LINE(593)
					tmp13->setFont(tmp14,tmp15);
				}
				HX_STACK_LINE(597)
				::openfl::text::Font tmp13 = font;		HX_STACK_VAR(tmp13,"tmp13");
				HX_STACK_LINE(597)
				promise->complete(tmp13);
			}
			return null();
		}
		HX_END_LOCAL_FUNC1((void))

		HX_STACK_LINE(583)
		::lime::app::Future tmp9 = tmp8->onComplete( Dynamic(new _Function_1_1(useCache,promise,id)));		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(599)
		Dynamic tmp10 = promise->error_dyn();		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(583)
		::lime::app::Future tmp11 = tmp9->onError(tmp10);		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(599)
		Dynamic tmp12 = promise->progress_dyn();		HX_STACK_VAR(tmp12,"tmp12");
		HX_STACK_LINE(583)
		tmp11->onProgress(tmp12);
		HX_STACK_LINE(603)
		::lime::app::Future tmp13 = promise->future;		HX_STACK_VAR(tmp13,"tmp13");
		HX_STACK_LINE(603)
		return tmp13;
	}
}


STATIC_HX_DEFINE_DYNAMIC_FUNC3(Assets_obj,loadFont,return )

::lime::app::Future Assets_obj::loadLibrary( ::String name,Dynamic handler){
	HX_STACK_FRAME("openfl.utils.Assets","loadLibrary",0x25ad1de5,"openfl.utils.Assets.loadLibrary","openfl/utils/Assets.hx",614,0x4e64919e)
	HX_STACK_ARG(name,"name")
	HX_STACK_ARG(handler,"handler")
	HX_STACK_LINE(616)
	::String tmp = name;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(616)
	::lime::app::Future tmp1 = ::lime::utils::Assets_obj::loadLibrary(tmp);		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(616)
	::lime::app::Future future = tmp1;		HX_STACK_VAR(future,"future");
	HX_STACK_LINE(618)
	bool tmp2 = (handler != null());		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(618)
	if ((tmp2)){
		HX_STACK_LINE(620)
		Dynamic tmp3 = handler;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(620)
		future->onComplete(tmp3);

		HX_BEGIN_LOCAL_FUNC_S1(hx::LocalFunc,_Function_2_1,Dynamic,handler)
		int __ArgCount() const { return 1; }
		Void run(Dynamic _){
			HX_STACK_FRAME("*","_Function_2_1",0x5201af78,"*._Function_2_1","openfl/utils/Assets.hx",621,0x4e64919e)
			HX_STACK_ARG(_,"_")
			{
				HX_STACK_LINE(621)
				handler(null()).Cast< Void >();
			}
			return null();
		}
		HX_END_LOCAL_FUNC1((void))

		HX_STACK_LINE(621)
		future->onError( Dynamic(new _Function_2_1(handler)));
	}
	HX_STACK_LINE(625)
	::lime::app::Future tmp3 = future;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(625)
	return tmp3;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(Assets_obj,loadLibrary,return )

::lime::app::Future Assets_obj::loadMusic( ::String id,Dynamic __o_useCache,Dynamic handler){
Dynamic useCache = __o_useCache.Default(true);
	HX_STACK_FRAME("openfl.utils.Assets","loadMusic",0x8c95590f,"openfl.utils.Assets.loadMusic","openfl/utils/Assets.hx",638,0x4e64919e)
	HX_STACK_ARG(id,"id")
	HX_STACK_ARG(useCache,"useCache")
	HX_STACK_ARG(handler,"handler")
{
		HX_STACK_LINE(640)
		bool tmp = (useCache == null());		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(640)
		if ((tmp)){
			HX_STACK_LINE(640)
			useCache = true;
		}
		HX_STACK_LINE(644)
		::lime::app::Promise_openfl_media_Sound tmp1 = ::lime::app::Promise_openfl_media_Sound_obj::__new();		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(644)
		::lime::app::Promise_openfl_media_Sound promise = tmp1;		HX_STACK_VAR(promise,"promise");
		HX_STACK_LINE(646)
		::String tmp2 = id;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(646)
		Dynamic tmp3 = useCache;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(646)
		::lime::app::Future tmp4 = ::lime::utils::Assets_obj::loadAudioBuffer(tmp2,tmp3);		HX_STACK_VAR(tmp4,"tmp4");

		HX_BEGIN_LOCAL_FUNC_S3(hx::LocalFunc,_Function_1_1,Dynamic,useCache,::lime::app::Promise_openfl_media_Sound,promise,::String,id)
		int __ArgCount() const { return 1; }
		Void run(::lime::media::AudioBuffer buffer){
			HX_STACK_FRAME("*","_Function_1_1",0x5200ed37,"*._Function_1_1","openfl/utils/Assets.hx",646,0x4e64919e)
			HX_STACK_ARG(buffer,"buffer")
			{
				HX_STACK_LINE(648)
				bool tmp5 = (buffer != null());		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(648)
				if ((tmp5)){
					HX_STACK_LINE(653)
					::lime::media::AudioBuffer tmp6 = buffer;		HX_STACK_VAR(tmp6,"tmp6");
					HX_STACK_LINE(653)
					::openfl::media::Sound tmp7 = ::openfl::media::Sound_obj::fromAudioBuffer(tmp6);		HX_STACK_VAR(tmp7,"tmp7");
					HX_STACK_LINE(653)
					::openfl::media::Sound sound = tmp7;		HX_STACK_VAR(sound,"sound");
					HX_STACK_LINE(656)
					Dynamic tmp8 = useCache;		HX_STACK_VAR(tmp8,"tmp8");
					HX_STACK_LINE(656)
					bool tmp9;		HX_STACK_VAR(tmp9,"tmp9");
					HX_STACK_LINE(656)
					if ((tmp8)){
						HX_STACK_LINE(656)
						::openfl::utils::IAssetCache tmp10 = ::openfl::utils::Assets_obj::cache;		HX_STACK_VAR(tmp10,"tmp10");
						HX_STACK_LINE(656)
						::openfl::utils::IAssetCache tmp11 = tmp10;		HX_STACK_VAR(tmp11,"tmp11");
						HX_STACK_LINE(656)
						tmp9 = tmp11->get_enabled();
					}
					else{
						HX_STACK_LINE(656)
						tmp9 = false;
					}
					HX_STACK_LINE(656)
					if ((tmp9)){
						HX_STACK_LINE(658)
						::openfl::utils::IAssetCache tmp10 = ::openfl::utils::Assets_obj::cache;		HX_STACK_VAR(tmp10,"tmp10");
						HX_STACK_LINE(658)
						::String tmp11 = id;		HX_STACK_VAR(tmp11,"tmp11");
						HX_STACK_LINE(658)
						::openfl::media::Sound tmp12 = sound;		HX_STACK_VAR(tmp12,"tmp12");
						HX_STACK_LINE(658)
						tmp10->setSound(tmp11,tmp12);
					}
					HX_STACK_LINE(662)
					::openfl::media::Sound tmp10 = sound;		HX_STACK_VAR(tmp10,"tmp10");
					HX_STACK_LINE(662)
					promise->complete(tmp10);
				}
				else{
					HX_STACK_LINE(666)
					::String tmp6 = (HX_HCSTRING("[Assets] Could not load Sound \"","\x64","\xbe","\x27","\xe3") + id);		HX_STACK_VAR(tmp6,"tmp6");
					HX_STACK_LINE(666)
					::String tmp7 = (tmp6 + HX_HCSTRING("\"","\x22","\x00","\x00","\x00"));		HX_STACK_VAR(tmp7,"tmp7");
					HX_STACK_LINE(666)
					promise->error(tmp7);
				}
			}
			return null();
		}
		HX_END_LOCAL_FUNC1((void))

		HX_STACK_LINE(646)
		::lime::app::Future tmp5 = tmp4->onComplete( Dynamic(new _Function_1_1(useCache,promise,id)));		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(670)
		Dynamic tmp6 = promise->error_dyn();		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(646)
		::lime::app::Future tmp7 = tmp5->onError(tmp6);		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(670)
		Dynamic tmp8 = promise->progress_dyn();		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(646)
		tmp7->onProgress(tmp8);
		HX_STACK_LINE(671)
		::lime::app::Future tmp9 = promise->future;		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(671)
		return tmp9;
	}
}


STATIC_HX_DEFINE_DYNAMIC_FUNC3(Assets_obj,loadMusic,return )

::lime::app::Future Assets_obj::loadMovieClip( ::String id,Dynamic handler){
	HX_STACK_FRAME("openfl.utils.Assets","loadMovieClip",0xc0b3080a,"openfl.utils.Assets.loadMovieClip","openfl/utils/Assets.hx",690,0x4e64919e)
	HX_STACK_ARG(id,"id")
	HX_STACK_ARG(handler,"handler")
	HX_STACK_LINE(692)
	::lime::app::Promise_openfl_display_MovieClip tmp = ::lime::app::Promise_openfl_display_MovieClip_obj::__new();		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(692)
	::lime::app::Promise_openfl_display_MovieClip promise = tmp;		HX_STACK_VAR(promise,"promise");
	HX_STACK_LINE(694)
	bool tmp1 = (handler != null());		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(694)
	if ((tmp1)){
		HX_STACK_LINE(696)
		Dynamic tmp2 = handler;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(696)
		promise->future->onComplete(tmp2);

		HX_BEGIN_LOCAL_FUNC_S1(hx::LocalFunc,_Function_2_1,Dynamic,handler)
		int __ArgCount() const { return 1; }
		Void run(Dynamic _){
			HX_STACK_FRAME("*","_Function_2_1",0x5201af78,"*._Function_2_1","openfl/utils/Assets.hx",697,0x4e64919e)
			HX_STACK_ARG(_,"_")
			{
				HX_STACK_LINE(697)
				handler(null()).Cast< Void >();
			}
			return null();
		}
		HX_END_LOCAL_FUNC1((void))

		HX_STACK_LINE(697)
		promise->future->onError( Dynamic(new _Function_2_1(handler)));
	}
	HX_STACK_LINE(703)
	int tmp2 = id.indexOf(HX_HCSTRING(":","\x3a","\x00","\x00","\x00"),null());		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(703)
	::String tmp3 = id.substring((int)0,tmp2);		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(703)
	::String libraryName = tmp3;		HX_STACK_VAR(libraryName,"libraryName");
	HX_STACK_LINE(704)
	int tmp4 = id.indexOf(HX_HCSTRING(":","\x3a","\x00","\x00","\x00"),null());		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(704)
	int tmp5 = (tmp4 + (int)1);		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(704)
	::String tmp6 = id.substr(tmp5,null());		HX_STACK_VAR(tmp6,"tmp6");
	HX_STACK_LINE(704)
	::String symbolName = tmp6;		HX_STACK_VAR(symbolName,"symbolName");
	HX_STACK_LINE(705)
	::String tmp7 = libraryName;		HX_STACK_VAR(tmp7,"tmp7");
	HX_STACK_LINE(705)
	::lime::utils::AssetLibrary tmp8 = ::openfl::utils::Assets_obj::getLibrary(tmp7);		HX_STACK_VAR(tmp8,"tmp8");
	HX_STACK_LINE(705)
	::lime::utils::AssetLibrary limeLibrary = tmp8;		HX_STACK_VAR(limeLibrary,"limeLibrary");
	HX_STACK_LINE(707)
	bool tmp9 = (limeLibrary != null());		HX_STACK_VAR(tmp9,"tmp9");
	HX_STACK_LINE(707)
	if ((tmp9)){
		HX_STACK_LINE(709)
		::lime::utils::AssetLibrary tmp10 = limeLibrary;		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(709)
		bool tmp11 = ::Std_obj::is(tmp10,hx::ClassOf< ::openfl::utils::AssetLibrary >());		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(709)
		if ((tmp11)){
			HX_STACK_LINE(711)
			::openfl::utils::AssetLibrary library = ((::openfl::utils::AssetLibrary)(limeLibrary));		HX_STACK_VAR(library,"library");
			HX_STACK_LINE(713)
			::String tmp12 = symbolName;		HX_STACK_VAR(tmp12,"tmp12");
			HX_STACK_LINE(713)
			bool tmp13 = library->exists(tmp12,HX_HCSTRING("MOVIE_CLIP","\x1f","\xe1","\xaa","\x77"));		HX_STACK_VAR(tmp13,"tmp13");
			HX_STACK_LINE(713)
			if ((tmp13)){
				HX_STACK_LINE(715)
				::String tmp14 = symbolName;		HX_STACK_VAR(tmp14,"tmp14");
				HX_STACK_LINE(715)
				::lime::app::Future tmp15 = library->loadMovieClip(tmp14);		HX_STACK_VAR(tmp15,"tmp15");
				HX_STACK_LINE(715)
				promise->completeWith(tmp15);
				HX_STACK_LINE(716)
				::lime::app::Future tmp16 = promise->future;		HX_STACK_VAR(tmp16,"tmp16");
				HX_STACK_LINE(716)
				return tmp16;
			}
		}
		HX_STACK_LINE(722)
		::String tmp12 = (HX_HCSTRING("[Assets] There is no MovieClip asset with an ID of \"","\x8f","\x8e","\xf2","\x7d") + id);		HX_STACK_VAR(tmp12,"tmp12");
		HX_STACK_LINE(722)
		::String tmp13 = (tmp12 + HX_HCSTRING("\"","\x22","\x00","\x00","\x00"));		HX_STACK_VAR(tmp13,"tmp13");
		HX_STACK_LINE(722)
		promise->error(tmp13);
	}
	else{
		HX_STACK_LINE(726)
		::String tmp10 = (HX_HCSTRING("[Assets] There is no asset library named \"","\xa0","\xb4","\x0a","\xcd") + libraryName);		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(726)
		::String tmp11 = (tmp10 + HX_HCSTRING("\"","\x22","\x00","\x00","\x00"));		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(726)
		promise->error(tmp11);
	}
	HX_STACK_LINE(732)
	::lime::app::Future tmp10 = promise->future;		HX_STACK_VAR(tmp10,"tmp10");
	HX_STACK_LINE(732)
	return tmp10;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(Assets_obj,loadMovieClip,return )

::lime::app::Future Assets_obj::loadSound( ::String id,Dynamic __o_useCache,Dynamic handler){
Dynamic useCache = __o_useCache.Default(true);
	HX_STACK_FRAME("openfl.utils.Assets","loadSound",0xfd071539,"openfl.utils.Assets.loadSound","openfl/utils/Assets.hx",745,0x4e64919e)
	HX_STACK_ARG(id,"id")
	HX_STACK_ARG(useCache,"useCache")
	HX_STACK_ARG(handler,"handler")
{
		HX_STACK_LINE(747)
		bool tmp = (useCache == null());		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(747)
		if ((tmp)){
			HX_STACK_LINE(747)
			useCache = true;
		}
		HX_STACK_LINE(749)
		::lime::app::Promise_openfl_media_Sound tmp1 = ::lime::app::Promise_openfl_media_Sound_obj::__new();		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(749)
		::lime::app::Promise_openfl_media_Sound promise = tmp1;		HX_STACK_VAR(promise,"promise");
		HX_STACK_LINE(751)
		::String tmp2 = id;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(751)
		Dynamic tmp3 = useCache;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(751)
		::lime::app::Future tmp4 = ::lime::utils::Assets_obj::loadAudioBuffer(tmp2,tmp3);		HX_STACK_VAR(tmp4,"tmp4");

		HX_BEGIN_LOCAL_FUNC_S3(hx::LocalFunc,_Function_1_1,Dynamic,useCache,::lime::app::Promise_openfl_media_Sound,promise,::String,id)
		int __ArgCount() const { return 1; }
		Void run(::lime::media::AudioBuffer buffer){
			HX_STACK_FRAME("*","_Function_1_1",0x5200ed37,"*._Function_1_1","openfl/utils/Assets.hx",751,0x4e64919e)
			HX_STACK_ARG(buffer,"buffer")
			{
				HX_STACK_LINE(753)
				bool tmp5 = (buffer != null());		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(753)
				if ((tmp5)){
					HX_STACK_LINE(758)
					::lime::media::AudioBuffer tmp6 = buffer;		HX_STACK_VAR(tmp6,"tmp6");
					HX_STACK_LINE(758)
					::openfl::media::Sound tmp7 = ::openfl::media::Sound_obj::fromAudioBuffer(tmp6);		HX_STACK_VAR(tmp7,"tmp7");
					HX_STACK_LINE(758)
					::openfl::media::Sound sound = tmp7;		HX_STACK_VAR(sound,"sound");
					HX_STACK_LINE(761)
					Dynamic tmp8 = useCache;		HX_STACK_VAR(tmp8,"tmp8");
					HX_STACK_LINE(761)
					bool tmp9;		HX_STACK_VAR(tmp9,"tmp9");
					HX_STACK_LINE(761)
					if ((tmp8)){
						HX_STACK_LINE(761)
						::openfl::utils::IAssetCache tmp10 = ::openfl::utils::Assets_obj::cache;		HX_STACK_VAR(tmp10,"tmp10");
						HX_STACK_LINE(761)
						::openfl::utils::IAssetCache tmp11 = tmp10;		HX_STACK_VAR(tmp11,"tmp11");
						HX_STACK_LINE(761)
						tmp9 = tmp11->get_enabled();
					}
					else{
						HX_STACK_LINE(761)
						tmp9 = false;
					}
					HX_STACK_LINE(761)
					if ((tmp9)){
						HX_STACK_LINE(763)
						::openfl::utils::IAssetCache tmp10 = ::openfl::utils::Assets_obj::cache;		HX_STACK_VAR(tmp10,"tmp10");
						HX_STACK_LINE(763)
						::String tmp11 = id;		HX_STACK_VAR(tmp11,"tmp11");
						HX_STACK_LINE(763)
						::openfl::media::Sound tmp12 = sound;		HX_STACK_VAR(tmp12,"tmp12");
						HX_STACK_LINE(763)
						tmp10->setSound(tmp11,tmp12);
					}
					HX_STACK_LINE(767)
					::openfl::media::Sound tmp10 = sound;		HX_STACK_VAR(tmp10,"tmp10");
					HX_STACK_LINE(767)
					promise->complete(tmp10);
				}
				else{
					HX_STACK_LINE(771)
					::String tmp6 = (HX_HCSTRING("[Assets] Could not load Sound \"","\x64","\xbe","\x27","\xe3") + id);		HX_STACK_VAR(tmp6,"tmp6");
					HX_STACK_LINE(771)
					::String tmp7 = (tmp6 + HX_HCSTRING("\"","\x22","\x00","\x00","\x00"));		HX_STACK_VAR(tmp7,"tmp7");
					HX_STACK_LINE(771)
					promise->error(tmp7);
				}
			}
			return null();
		}
		HX_END_LOCAL_FUNC1((void))

		HX_STACK_LINE(751)
		::lime::app::Future tmp5 = tmp4->onComplete( Dynamic(new _Function_1_1(useCache,promise,id)));		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(775)
		Dynamic tmp6 = promise->error_dyn();		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(751)
		::lime::app::Future tmp7 = tmp5->onError(tmp6);		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(775)
		Dynamic tmp8 = promise->progress_dyn();		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(751)
		tmp7->onProgress(tmp8);
		HX_STACK_LINE(776)
		::lime::app::Future tmp9 = promise->future;		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(776)
		return tmp9;
	}
}


STATIC_HX_DEFINE_DYNAMIC_FUNC3(Assets_obj,loadSound,return )

::lime::app::Future Assets_obj::loadText( ::String id,Dynamic handler){
	HX_STACK_FRAME("openfl.utils.Assets","loadText",0x7b73bf83,"openfl.utils.Assets.loadText","openfl/utils/Assets.hx",789,0x4e64919e)
	HX_STACK_ARG(id,"id")
	HX_STACK_ARG(handler,"handler")
	HX_STACK_LINE(791)
	::String tmp = id;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(791)
	::lime::app::Future tmp1 = ::lime::utils::Assets_obj::loadText(tmp);		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(791)
	::lime::app::Future future = tmp1;		HX_STACK_VAR(future,"future");
	HX_STACK_LINE(793)
	bool tmp2 = (handler != null());		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(793)
	if ((tmp2)){
		HX_STACK_LINE(795)
		Dynamic tmp3 = handler;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(795)
		future->onComplete(tmp3);

		HX_BEGIN_LOCAL_FUNC_S1(hx::LocalFunc,_Function_2_1,Dynamic,handler)
		int __ArgCount() const { return 1; }
		Void run(Dynamic _){
			HX_STACK_FRAME("*","_Function_2_1",0x5201af78,"*._Function_2_1","openfl/utils/Assets.hx",796,0x4e64919e)
			HX_STACK_ARG(_,"_")
			{
				HX_STACK_LINE(796)
				handler(null()).Cast< Void >();
			}
			return null();
		}
		HX_END_LOCAL_FUNC1((void))

		HX_STACK_LINE(796)
		future->onError( Dynamic(new _Function_2_1(handler)));
	}
	HX_STACK_LINE(800)
	::lime::app::Future tmp3 = future;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(800)
	return tmp3;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(Assets_obj,loadText,return )

Void Assets_obj::registerLibrary( ::String name,::openfl::utils::AssetLibrary library){
{
		HX_STACK_FRAME("openfl.utils.Assets","registerLibrary",0xb100bb48,"openfl.utils.Assets.registerLibrary","openfl/utils/Assets.hx",810,0x4e64919e)
		HX_STACK_ARG(name,"name")
		HX_STACK_ARG(library,"library")
		HX_STACK_LINE(812)
		::String tmp = name;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(812)
		::openfl::utils::AssetLibrary tmp1 = library;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(812)
		::lime::utils::Assets_obj::registerLibrary(tmp,tmp1);
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(Assets_obj,registerLibrary,(void))

Void Assets_obj::removeEventListener( ::String type,Dynamic listener,hx::Null< bool >  __o_capture){
bool capture = __o_capture.Default(false);
	HX_STACK_FRAME("openfl.utils.Assets","removeEventListener",0xbaaab03a,"openfl.utils.Assets.removeEventListener","openfl/utils/Assets.hx",817,0x4e64919e)
	HX_STACK_ARG(type,"type")
	HX_STACK_ARG(listener,"listener")
	HX_STACK_ARG(capture,"capture")
{
		HX_STACK_LINE(819)
		::openfl::events::EventDispatcher tmp = ::openfl::utils::Assets_obj::dispatcher;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(819)
		::String tmp1 = type;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(819)
		Dynamic tmp2 = listener;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(819)
		bool tmp3 = capture;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(819)
		tmp->removeEventListener(tmp1,tmp2,tmp3);
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC3(Assets_obj,removeEventListener,(void))

::hx::Class Assets_obj::resolveClass( ::String name){
	HX_STACK_FRAME("openfl.utils.Assets","resolveClass",0x568fe73c,"openfl.utils.Assets.resolveClass","openfl/utils/Assets.hx",824,0x4e64919e)
	HX_STACK_ARG(name,"name")
	HX_STACK_LINE(826)
	::String tmp = name;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(826)
	::hx::Class tmp1 = ::Type_obj::resolveClass(tmp);		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(826)
	return tmp1;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Assets_obj,resolveClass,return )

::Enum Assets_obj::resolveEnum( ::String name){
	HX_STACK_FRAME("openfl.utils.Assets","resolveEnum",0xf3f0c87d,"openfl.utils.Assets.resolveEnum","openfl/utils/Assets.hx",831,0x4e64919e)
	HX_STACK_ARG(name,"name")
	HX_STACK_LINE(833)
	::String tmp = name;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(833)
	::Enum tmp1 = ::Type_obj::resolveEnum(tmp);		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(833)
	::Enum value = tmp1;		HX_STACK_VAR(value,"value");
	HX_STACK_LINE(845)
	::Enum tmp2 = value;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(845)
	return tmp2;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Assets_obj,resolveEnum,return )

Void Assets_obj::unloadLibrary( ::String name){
{
		HX_STACK_FRAME("openfl.utils.Assets","unloadLibrary",0x577a902c,"openfl.utils.Assets.unloadLibrary","openfl/utils/Assets.hx",850,0x4e64919e)
		HX_STACK_ARG(name,"name")
		HX_STACK_LINE(852)
		::String tmp = name;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(852)
		::lime::utils::Assets_obj::unloadLibrary(tmp);
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Assets_obj,unloadLibrary,(void))

Void Assets_obj::LimeAssets_onChange( ){
{
		HX_STACK_FRAME("openfl.utils.Assets","LimeAssets_onChange",0xfa955f26,"openfl.utils.Assets.LimeAssets_onChange","openfl/utils/Assets.hx",864,0x4e64919e)
		HX_STACK_LINE(866)
		::openfl::events::Event tmp = ::openfl::events::Event_obj::__new(HX_HCSTRING("change","\x70","\x91","\x72","\xb7"),null(),null());		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(866)
		::openfl::utils::Assets_obj::dispatchEvent(tmp);
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(Assets_obj,LimeAssets_onChange,(void))


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
		if (HX_FIELD_EQ(inName,"getBytes") ) { outValue = getBytes_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"getMusic") ) { outValue = getMusic_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"getSound") ) { outValue = getSound_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"loadFont") ) { outValue = loadFont_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"loadText") ) { outValue = loadText_dyn(); return true;  }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"loadBytes") ) { outValue = loadBytes_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"loadMusic") ) { outValue = loadMusic_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"loadSound") ) { outValue = loadSound_dyn(); return true;  }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"dispatcher") ) { outValue = dispatcher; return true;  }
		if (HX_FIELD_EQ(inName,"getLibrary") ) { outValue = getLibrary_dyn(); return true;  }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"loadLibrary") ) { outValue = loadLibrary_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"resolveEnum") ) { outValue = resolveEnum_dyn(); return true;  }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"getMovieClip") ) { outValue = getMovieClip_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"isValidSound") ) { outValue = isValidSound_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"resolveClass") ) { outValue = resolveClass_dyn(); return true;  }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"dispatchEvent") ) { outValue = dispatchEvent_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"getBitmapData") ) { outValue = getBitmapData_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"loadMovieClip") ) { outValue = loadMovieClip_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"unloadLibrary") ) { outValue = unloadLibrary_dyn(); return true;  }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"loadBitmapData") ) { outValue = loadBitmapData_dyn(); return true;  }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"registerLibrary") ) { outValue = registerLibrary_dyn(); return true;  }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"addEventListener") ) { outValue = addEventListener_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"hasEventListener") ) { outValue = hasEventListener_dyn(); return true;  }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"isValidBitmapData") ) { outValue = isValidBitmapData_dyn(); return true;  }
		break;
	case 19:
		if (HX_FIELD_EQ(inName,"removeEventListener") ) { outValue = removeEventListener_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"LimeAssets_onChange") ) { outValue = LimeAssets_onChange_dyn(); return true;  }
	}
	return false;
}

bool Assets_obj::__SetStatic(const ::String &inName,Dynamic &ioValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"cache") ) { cache=ioValue.Cast< ::openfl::utils::IAssetCache >(); return true; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"dispatcher") ) { dispatcher=ioValue.Cast< ::openfl::events::EventDispatcher >(); return true; }
	}
	return false;
}

#if HXCPP_SCRIPTABLE
static hx::StorageInfo *sMemberStorageInfo = 0;
static hx::StaticInfo sStaticStorageInfo[] = {
	{hx::fsObject /*::openfl::utils::IAssetCache*/ ,(void *) &Assets_obj::cache,HX_HCSTRING("cache","\x42","\x9a","\x14","\x41")},
	{hx::fsObject /*::openfl::events::EventDispatcher*/ ,(void *) &Assets_obj::dispatcher,HX_HCSTRING("dispatcher","\xa7","\xc9","\x00","\x5a")},
	{ hx::fsUnknown, 0, null()}
};
#endif

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(Assets_obj::__mClass,"__mClass");
	HX_MARK_MEMBER_NAME(Assets_obj::cache,"cache");
	HX_MARK_MEMBER_NAME(Assets_obj::dispatcher,"dispatcher");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(Assets_obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(Assets_obj::cache,"cache");
	HX_VISIT_MEMBER_NAME(Assets_obj::dispatcher,"dispatcher");
};

#endif

hx::Class Assets_obj::__mClass;

static ::String sStaticFields[] = {
	HX_HCSTRING("cache","\x42","\x9a","\x14","\x41"),
	HX_HCSTRING("dispatcher","\xa7","\xc9","\x00","\x5a"),
	HX_HCSTRING("addEventListener","\xcd","\x0b","\x64","\xf1"),
	HX_HCSTRING("dispatchEvent","\x00","\xc7","\x64","\xc6"),
	HX_HCSTRING("exists","\xdc","\x1d","\xe0","\xbf"),
	HX_HCSTRING("getBitmapData","\xef","\x11","\x33","\x90"),
	HX_HCSTRING("getBytes","\xf5","\x17","\x6f","\x1d"),
	HX_HCSTRING("getFont","\x85","\x0d","\x43","\x16"),
	HX_HCSTRING("getLibrary","\x05","\xad","\xd1","\x8e"),
	HX_HCSTRING("getMovieClip","\x2a","\x9f","\x71","\x27"),
	HX_HCSTRING("getMusic","\x2f","\xe0","\x31","\x70"),
	HX_HCSTRING("getPath","\x5b","\x95","\xd4","\x1c"),
	HX_HCSTRING("getSound","\x59","\x9c","\xa3","\xe0"),
	HX_HCSTRING("getText","\x63","\x7c","\x7c","\x1f"),
	HX_HCSTRING("hasEventListener","\xf4","\x2e","\xea","\x0c"),
	HX_HCSTRING("isLocal","\x21","\x6d","\x76","\x15"),
	HX_HCSTRING("isValidBitmapData","\x0b","\x65","\xe4","\xe6"),
	HX_HCSTRING("isValidSound","\xbd","\x1e","\x2b","\xa1"),
	HX_HCSTRING("list","\x5e","\x1c","\xb3","\x47"),
	HX_HCSTRING("loadBitmapData","\x7f","\xbf","\x71","\xca"),
	HX_HCSTRING("loadBytes","\x65","\x54","\xcf","\xd8"),
	HX_HCSTRING("loadFont","\x15","\x2f","\x60","\xb4"),
	HX_HCSTRING("loadLibrary","\x75","\xe5","\x0d","\x10"),
	HX_HCSTRING("loadMusic","\x9f","\x1c","\x92","\x2b"),
	HX_HCSTRING("loadMovieClip","\x9a","\xd3","\x80","\x9a"),
	HX_HCSTRING("loadSound","\xc9","\xd8","\x03","\x9c"),
	HX_HCSTRING("loadText","\xf3","\x9d","\x99","\xbd"),
	HX_HCSTRING("registerLibrary","\xd8","\x8a","\x84","\xf2"),
	HX_HCSTRING("removeEventListener","\xca","\x87","\x75","\x55"),
	HX_HCSTRING("resolveClass","\xac","\xbd","\xdd","\x80"),
	HX_HCSTRING("resolveEnum","\x0d","\x90","\x51","\xde"),
	HX_HCSTRING("unloadLibrary","\xbc","\x5b","\x48","\x31"),
	HX_HCSTRING("LimeAssets_onChange","\xb6","\x36","\x60","\x95"),
	::String(null()) };

void Assets_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("openfl.utils.Assets","\xde","\xb0","\x04","\x7c");
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
struct _Function_0_1{
	inline static ::openfl::utils::IAssetCache Block( ){
		HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","openfl/utils/Assets.hx",45,0x4e64919e)
		{
			HX_STACK_LINE(45)
			::openfl::utils::AssetCache tmp = ::openfl::utils::AssetCache_obj::__new();		HX_STACK_VAR(tmp,"tmp");
			HX_STACK_LINE(45)
			return ((::openfl::utils::IAssetCache)(tmp));
		}
		return null();
	}
};
	cache= _Function_0_1::Block();
	dispatcher= ::openfl::events::EventDispatcher_obj::__new(null());
}

} // end namespace openfl
} // end namespace utils
