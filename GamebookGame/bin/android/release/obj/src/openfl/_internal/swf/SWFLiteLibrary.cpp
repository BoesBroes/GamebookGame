#include <hxcpp.h>

#ifndef INCLUDED_Std
#include <Std.h>
#endif
#ifndef INCLUDED_haxe_IMap
#include <haxe/IMap.h>
#endif
#ifndef INCLUDED_haxe_ds_IntMap
#include <haxe/ds/IntMap.h>
#endif
#ifndef INCLUDED_haxe_ds_StringMap
#include <haxe/ds/StringMap.h>
#endif
#ifndef INCLUDED_lime_app_Future
#include <lime/app/Future.h>
#endif
#ifndef INCLUDED_lime_app_Promise_lime_graphics_Image
#include <lime/app/Promise_lime_graphics_Image.h>
#endif
#ifndef INCLUDED_lime_app_Promise_lime_utils_AssetLibrary
#include <lime/app/Promise_lime_utils_AssetLibrary.h>
#endif
#ifndef INCLUDED_lime_graphics_Image
#include <lime/graphics/Image.h>
#endif
#ifndef INCLUDED_lime_graphics_ImageBuffer
#include <lime/graphics/ImageBuffer.h>
#endif
#ifndef INCLUDED_lime_graphics_ImageChannel
#include <lime/graphics/ImageChannel.h>
#endif
#ifndef INCLUDED_lime_math_Rectangle
#include <lime/math/Rectangle.h>
#endif
#ifndef INCLUDED_lime_math_Vector2
#include <lime/math/Vector2.h>
#endif
#ifndef INCLUDED_lime_utils_AssetLibrary
#include <lime/utils/AssetLibrary.h>
#endif
#ifndef INCLUDED_lime_utils_AssetManifest
#include <lime/utils/AssetManifest.h>
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
#ifndef INCLUDED_openfl_net_URLLoader
#include <openfl/net/URLLoader.h>
#endif
#ifndef INCLUDED_openfl_net_URLRequest
#include <openfl/net/URLRequest.h>
#endif
#ifndef INCLUDED_openfl_utils_AssetLibrary
#include <openfl/utils/AssetLibrary.h>
#endif
#ifndef INCLUDED_openfl_utils_Assets
#include <openfl/utils/Assets.h>
#endif
#ifndef INCLUDED_openfl_utils_IAssetCache
#include <openfl/utils/IAssetCache.h>
#endif
namespace openfl{
namespace _internal{
namespace swf{

Void SWFLiteLibrary_obj::__construct(::String id)
{
{
	super::__construct();
	this->id = id;
	::haxe::ds::StringMap tmp;
	{
		::haxe::ds::StringMap tmp1 = ::haxe::ds::StringMap_obj::__new();
		::haxe::ds::StringMap tmp2 = tmp1;
		tmp = tmp2;
	}
	this->alphaCheck = tmp;
	::haxe::ds::StringMap tmp1;
	{
		::haxe::ds::StringMap tmp2 = ::haxe::ds::StringMap_obj::__new();
		::haxe::ds::StringMap tmp3 = tmp2;
		tmp1 = tmp3;
	}
	this->imageClassNames = tmp1;
	this->rootPath = HX_HCSTRING("","\x00","\x00","\x00","\x00");
}
;
	return null();
}

//SWFLiteLibrary_obj::~SWFLiteLibrary_obj() { }

Dynamic SWFLiteLibrary_obj::__CreateEmpty() { return  new SWFLiteLibrary_obj; }
hx::ObjectPtr< SWFLiteLibrary_obj > SWFLiteLibrary_obj::__new(::String id)
{  hx::ObjectPtr< SWFLiteLibrary_obj > _result_ = new SWFLiteLibrary_obj();
	_result_->__construct(id);
	return _result_;}

Dynamic SWFLiteLibrary_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< SWFLiteLibrary_obj > _result_ = new SWFLiteLibrary_obj();
	_result_->__construct(inArgs[0]);
	return _result_;}

bool SWFLiteLibrary_obj::exists( ::String id,::String type){
	::openfl::_internal::swf::SWFLite tmp = this->swf;
	bool tmp1 = (tmp == null());
	if ((tmp1)){
		return false;
	}
	bool tmp2 = (id == HX_HCSTRING("","\x00","\x00","\x00","\x00"));
	bool tmp3;
	if ((tmp2)){
		tmp3 = (type == HX_HCSTRING("MOVIE_CLIP","\x1f","\xe1","\xaa","\x77"));
	}
	else{
		tmp3 = false;
	}
	if ((tmp3)){
		return true;
	}
	bool tmp4 = (type == HX_HCSTRING("IMAGE","\x3b","\x57","\x57","\x3b"));
	bool tmp5 = !(tmp4);
	bool tmp6;
	if ((tmp5)){
		tmp6 = (type == HX_HCSTRING("MOVIE_CLIP","\x1f","\xe1","\xaa","\x77"));
	}
	else{
		tmp6 = true;
	}
	if ((tmp6)){
		::openfl::_internal::swf::SWFLite tmp7 = this->swf;
		bool tmp8 = (tmp7 != null());
		bool tmp9;
		if ((tmp8)){
			::openfl::_internal::swf::SWFLite tmp10 = this->swf;
			::openfl::_internal::swf::SWFLite tmp11 = tmp10;
			::String tmp12 = id;
			::String tmp13 = tmp12;
			tmp9 = tmp11->hasSymbol(tmp13);
		}
		else{
			tmp9 = false;
		}
		return tmp9;
	}
	return false;
}


::lime::graphics::Image SWFLiteLibrary_obj::getImage( ::String id){
	::haxe::ds::StringMap tmp = this->imageClassNames;
	::String tmp1 = id;
	bool tmp2 = tmp->exists(tmp1);
	if ((tmp2)){
		::haxe::ds::StringMap tmp3 = this->imageClassNames;
		::String tmp4 = id;
		::String tmp5 = tmp3->get(tmp4);
		id = tmp5;
	}
	::haxe::ds::StringMap tmp3 = this->alphaCheck;
	::String tmp4 = id;
	bool tmp5 = tmp3->exists(tmp4);
	bool tmp6 = !(tmp5);
	if ((tmp6)){
		::openfl::_internal::swf::SWFLite tmp7 = this->swf;
		Dynamic tmp8 = tmp7->symbols->iterator();
		for(::cpp::FastIterator_obj< ::openfl::_internal::symbols::SWFSymbol > *__it = ::cpp::CreateFastIterator< ::openfl::_internal::symbols::SWFSymbol >(tmp8);  __it->hasNext(); ){
			::openfl::_internal::symbols::SWFSymbol symbol = __it->next();
			{
				::openfl::_internal::symbols::SWFSymbol tmp9 = symbol;
				::openfl::_internal::symbols::SWFSymbol tmp10 = tmp9;
				bool tmp11 = ::Std_obj::is(tmp10,hx::ClassOf< ::openfl::_internal::symbols::BitmapSymbol >());
				bool tmp12;
				if ((tmp11)){
					::openfl::_internal::symbols::BitmapSymbol tmp13;
					tmp13 = hx::TCast< ::openfl::_internal::symbols::BitmapSymbol >::cast(symbol);
					::openfl::_internal::symbols::BitmapSymbol tmp14 = tmp13;
					::String tmp15 = tmp14->path;
					::String tmp16 = id;
					tmp12 = (tmp15 == tmp16);
				}
				else{
					tmp12 = false;
				}
				if ((tmp12)){
					::openfl::_internal::symbols::BitmapSymbol bitmapSymbol = ((::openfl::_internal::symbols::BitmapSymbol)(symbol));
					bool tmp13 = (bitmapSymbol->alpha != null());
					if ((tmp13)){
						::String tmp14 = id;
						::lime::graphics::Image tmp15 = this->super::getImage(tmp14);
						::lime::graphics::Image image = tmp15;
						::String tmp16 = bitmapSymbol->alpha;
						::lime::graphics::Image tmp17 = this->super::getImage(tmp16);
						::lime::graphics::Image alpha = tmp17;
						::lime::graphics::Image tmp18 = image;
						::lime::graphics::Image tmp19 = alpha;
						this->__copyChannel(tmp18,tmp19);
						::haxe::ds::StringMap tmp20 = this->cachedImages;
						::String tmp21 = id;
						::lime::graphics::Image tmp22 = image;
						tmp20->set(tmp21,tmp22);
						::haxe::ds::StringMap tmp23 = this->alphaCheck;
						::String tmp24 = id;
						tmp23->set(tmp24,true);
						::lime::graphics::Image tmp25 = image;
						return tmp25;
					}
				}
			}
;
		}
	}
	::String tmp7 = id;
	::lime::graphics::Image tmp8 = this->super::getImage(tmp7);
	return tmp8;
}


::openfl::display::MovieClip SWFLiteLibrary_obj::getMovieClip( ::String id){
	::openfl::_internal::swf::SWFLite tmp = this->swf;
	bool tmp1 = (tmp != null());
	::openfl::display::MovieClip tmp2;
	if ((tmp1)){
		::openfl::_internal::swf::SWFLite tmp3 = this->swf;
		::String tmp4 = id;
		tmp2 = tmp3->createMovieClip(tmp4);
	}
	else{
		tmp2 = null();
	}
	return tmp2;
}


bool SWFLiteLibrary_obj::isLocal( ::String id,::String type){
	return true;
}


::lime::app::Future SWFLiteLibrary_obj::load( ){
	::openfl::_internal::swf::SWFLiteLibrary _g = hx::ObjectPtr<OBJ_>(this);
	::String tmp = this->id;
	bool tmp1 = (tmp != null());
	if ((tmp1)){
		::haxe::ds::StringMap tmp2 = this->preload;
		::String tmp3 = this->id;
		tmp2->set(tmp3,true);
	}
	::lime::app::Promise_lime_utils_AssetLibrary tmp2 = ::lime::app::Promise_lime_utils_AssetLibrary_obj::__new();
	::lime::app::Promise_lime_utils_AssetLibrary promise = tmp2;
	this->preloading = true;

	HX_BEGIN_LOCAL_FUNC_S2(hx::LocalFunc,_Function_1_1,::openfl::_internal::swf::SWFLiteLibrary,_g,::lime::app::Promise_lime_utils_AssetLibrary,promise)
	int __ArgCount() const { return 1; }
	Void run(::String data){
		{
			::String tmp3 = _g->id;
			::String tmp4 = data;
			_g->cachedText->set(tmp3,tmp4);
			::String tmp5 = data;
			::openfl::_internal::swf::SWFLite tmp6 = ::openfl::_internal::swf::SWFLite_obj::unserialize(tmp5);
			_g->swf = tmp6;
			_g->swf->library = _g;
			::openfl::_internal::symbols::BitmapSymbol bitmapSymbol;
			::haxe::ds::IntMap tmp7 = _g->swf->symbols;
			Dynamic tmp8 = tmp7->iterator();
			for(::cpp::FastIterator_obj< ::openfl::_internal::symbols::SWFSymbol > *__it = ::cpp::CreateFastIterator< ::openfl::_internal::symbols::SWFSymbol >(tmp8);  __it->hasNext(); ){
				::openfl::_internal::symbols::SWFSymbol symbol = __it->next();
				{
					::openfl::_internal::symbols::SWFSymbol tmp9 = symbol;
					bool tmp10 = ::Std_obj::is(tmp9,hx::ClassOf< ::openfl::_internal::symbols::BitmapSymbol >());
					if ((tmp10)){
						bitmapSymbol = ((::openfl::_internal::symbols::BitmapSymbol)(symbol));
						bool tmp11 = (bitmapSymbol->className != null());
						if ((tmp11)){
							::String tmp12 = bitmapSymbol->className;
							::String tmp13 = bitmapSymbol->path;
							_g->imageClassNames->set(tmp12,tmp13);
						}
					}
				}
;
			}
			::haxe::ds::StringMap tmp9 = ::openfl::_internal::swf::SWFLite_obj::instances;
			::String tmp10 = _g->id;
			::openfl::_internal::swf::SWFLite tmp11 = _g->swf;
			tmp9->set(tmp10,tmp11);
			::lime::app::Future tmp12 = _g->__load();
			Dynamic tmp13 = promise->progress_dyn();
			::lime::app::Future tmp14 = tmp12->onProgress(tmp13);
			Dynamic tmp15 = promise->error_dyn();
			::lime::app::Future tmp16 = tmp14->onError(tmp15);

			HX_BEGIN_LOCAL_FUNC_S2(hx::LocalFunc,_Function_2_1,::openfl::_internal::swf::SWFLiteLibrary,_g,::lime::app::Promise_lime_utils_AssetLibrary,promise)
			int __ArgCount() const { return 1; }
			Void run(::lime::utils::AssetLibrary _){
				{
					_g->preloading = false;
					::openfl::_internal::swf::SWFLiteLibrary tmp17 = _g;
					promise->complete(tmp17);
				}
				return null();
			}
			HX_END_LOCAL_FUNC1((void))

			tmp16->onComplete( Dynamic(new _Function_2_1(_g,promise)));
		}
		return null();
	}
	HX_END_LOCAL_FUNC1((void))

	Dynamic onComplete =  Dynamic(new _Function_1_1(_g,promise));
	::String tmp3 = this->id;
	bool tmp4 = ::openfl::utils::Assets_obj::exists(tmp3,null());
	if ((tmp4)){
		::String tmp5 = this->id;
		::lime::app::Future tmp6 = this->loadText(tmp5);
		Dynamic tmp7 = promise->error_dyn();
		::lime::app::Future tmp8 = tmp6->onError(tmp7);
		Dynamic tmp9 = onComplete;
		tmp8->onComplete(tmp9);
	}
	else{
		::haxe::ds::StringMap tmp5 = this->paths;
		Dynamic tmp6 = tmp5->keys();
		for(::cpp::FastIterator_obj< ::String > *__it = ::cpp::CreateFastIterator< ::String >(tmp6);  __it->hasNext(); ){
			::String id = __it->next();
			{
				::haxe::ds::StringMap tmp7 = this->preload;
				::String tmp8 = id;
				tmp7->set(tmp8,true);
			}
;
		}
		::String tmp7 = this->rootPath;
		bool tmp8 = (tmp7 != null());
		bool tmp9;
		if ((tmp8)){
			::String tmp10 = this->rootPath;
			::String tmp11 = tmp10;
			tmp9 = (tmp11 != HX_HCSTRING("","\x00","\x00","\x00","\x00"));
		}
		else{
			tmp9 = false;
		}
		::String tmp10;
		if ((tmp9)){
			::String tmp11 = this->rootPath;
			::String tmp12 = (tmp11 + HX_HCSTRING("/","\x2f","\x00","\x00","\x00"));
			::String tmp13 = this->id;
			tmp10 = (tmp12 + tmp13);
		}
		else{
			tmp10 = this->id;
		}
		::String path = tmp10;
		::openfl::net::URLLoader tmp11 = ::openfl::net::URLLoader_obj::__new(null());
		::openfl::net::URLLoader loader = tmp11;

		HX_BEGIN_LOCAL_FUNC_S2(hx::LocalFunc,_Function_2_1,Dynamic,onComplete,::openfl::net::URLLoader,loader)
		int __ArgCount() const { return 1; }
		Void run(Dynamic _){
			{
				Dynamic tmp12 = loader->data;
				onComplete(tmp12).Cast< Void >();
			}
			return null();
		}
		HX_END_LOCAL_FUNC1((void))

		loader->addEventListener(HX_HCSTRING("complete","\xb9","\x00","\xc8","\x7f"), Dynamic(new _Function_2_1(onComplete,loader)),null(),null(),null());

		HX_BEGIN_LOCAL_FUNC_S1(hx::LocalFunc,_Function_2_2,::lime::app::Promise_lime_utils_AssetLibrary,promise)
		int __ArgCount() const { return 1; }
		Void run(Dynamic e){
			{
				Dynamic tmp12 = e;
				promise->error(tmp12);
			}
			return null();
		}
		HX_END_LOCAL_FUNC1((void))

		loader->addEventListener(HX_HCSTRING("ioError","\x02","\xfe","\x41","\x76"), Dynamic(new _Function_2_2(promise)),null(),null(),null());
		::openfl::net::URLRequest tmp12 = ::openfl::net::URLRequest_obj::__new(path);
		loader->load(tmp12);
	}
	::lime::app::Future tmp5 = promise->future;
	return tmp5;
}


::lime::app::Future SWFLiteLibrary_obj::loadImage( ::String id){
	::openfl::_internal::swf::SWFLiteLibrary _g = hx::ObjectPtr<OBJ_>(this);
	::haxe::ds::StringMap tmp = this->imageClassNames;
	::String tmp1 = id;
	bool tmp2 = tmp->exists(tmp1);
	if ((tmp2)){
		::haxe::ds::StringMap tmp3 = this->imageClassNames;
		::String tmp4 = id;
		::String tmp5 = tmp3->get(tmp4);
		id = tmp5;
	}
	bool tmp3 = this->preloading;
	bool tmp4 = tmp3;
	bool tmp5 = !(tmp4);
	bool tmp6;
	if ((tmp5)){
		::haxe::ds::StringMap tmp7 = this->alphaCheck;
		::haxe::ds::StringMap tmp8 = tmp7;
		::String tmp9 = id;
		::String tmp10 = tmp9;
		bool tmp11 = tmp8->exists(tmp10);
		bool tmp12 = tmp11;
		bool tmp13 = tmp12;
		tmp6 = !(tmp13);
	}
	else{
		tmp6 = false;
	}
	if ((tmp6)){
		::openfl::_internal::swf::SWFLite tmp7 = this->swf;
		Dynamic tmp8 = tmp7->symbols->iterator();
		for(::cpp::FastIterator_obj< ::openfl::_internal::symbols::SWFSymbol > *__it = ::cpp::CreateFastIterator< ::openfl::_internal::symbols::SWFSymbol >(tmp8);  __it->hasNext(); ){
			::openfl::_internal::symbols::SWFSymbol symbol = __it->next();
			{
				::openfl::_internal::symbols::SWFSymbol tmp9 = symbol;
				::openfl::_internal::symbols::SWFSymbol tmp10 = tmp9;
				bool tmp11 = ::Std_obj::is(tmp10,hx::ClassOf< ::openfl::_internal::symbols::BitmapSymbol >());
				bool tmp12;
				if ((tmp11)){
					::openfl::_internal::symbols::BitmapSymbol tmp13;
					tmp13 = hx::TCast< ::openfl::_internal::symbols::BitmapSymbol >::cast(symbol);
					::openfl::_internal::symbols::BitmapSymbol tmp14 = tmp13;
					::String tmp15 = tmp14->path;
					::String tmp16 = id;
					tmp12 = (tmp15 == tmp16);
				}
				else{
					tmp12 = false;
				}
				if ((tmp12)){
					::openfl::_internal::symbols::BitmapSymbol bitmapSymbol = ((::openfl::_internal::symbols::BitmapSymbol)(symbol));
					bool tmp13 = (bitmapSymbol->alpha != null());
					if ((tmp13)){
						::lime::app::Promise_lime_graphics_Image tmp14 = ::lime::app::Promise_lime_graphics_Image_obj::__new();
						::lime::app::Promise_lime_graphics_Image promise = tmp14;
						::String tmp15 = id;
						::lime::app::Future tmp16 = this->__loadImage(tmp15);
						Dynamic tmp17 = promise->error_dyn();
						::lime::app::Future tmp18 = tmp16->onError(tmp17);

						HX_BEGIN_LOCAL_FUNC_S4(hx::LocalFunc,_Function_5_1,::openfl::_internal::symbols::BitmapSymbol,bitmapSymbol,::openfl::_internal::swf::SWFLiteLibrary,_g,::lime::app::Promise_lime_graphics_Image,promise,::String,id)
						int __ArgCount() const { return 1; }
						Void run(::lime::graphics::Image image){
							{
								::String tmp19 = bitmapSymbol->alpha;
								::lime::app::Future tmp20 = _g->__loadImage(tmp19);
								Dynamic tmp21 = promise->error_dyn();
								::lime::app::Future tmp22 = tmp20->onError(tmp21);

								HX_BEGIN_LOCAL_FUNC_S4(hx::LocalFunc,_Function_6_1,::lime::graphics::Image,image,::openfl::_internal::swf::SWFLiteLibrary,_g,::lime::app::Promise_lime_graphics_Image,promise,::String,id)
								int __ArgCount() const { return 1; }
								Void run(::lime::graphics::Image alpha){
									{
										::lime::graphics::Image tmp23 = image;
										::lime::graphics::Image tmp24 = alpha;
										_g->__copyChannel(tmp23,tmp24);
										::String tmp25 = id;
										::lime::graphics::Image tmp26 = image;
										_g->cachedImages->set(tmp25,tmp26);
										::String tmp27 = id;
										_g->alphaCheck->set(tmp27,true);
										::lime::graphics::Image tmp28 = image;
										promise->complete(tmp28);
									}
									return null();
								}
								HX_END_LOCAL_FUNC1((void))

								tmp22->onComplete( Dynamic(new _Function_6_1(image,_g,promise,id)));
							}
							return null();
						}
						HX_END_LOCAL_FUNC1((void))

						tmp18->onComplete( Dynamic(new _Function_5_1(bitmapSymbol,_g,promise,id)));
						::lime::app::Future tmp19 = promise->future;
						return tmp19;
					}
				}
			}
;
		}
	}
	::String tmp7 = id;
	::lime::app::Future tmp8 = this->super::loadImage(tmp7);
	return tmp8;
}


Void SWFLiteLibrary_obj::unload( ){
{
		::openfl::_internal::symbols::BitmapSymbol bitmap;
		::openfl::_internal::swf::SWFLite tmp = this->swf;
		Dynamic tmp1 = tmp->symbols->iterator();
		for(::cpp::FastIterator_obj< ::openfl::_internal::symbols::SWFSymbol > *__it = ::cpp::CreateFastIterator< ::openfl::_internal::symbols::SWFSymbol >(tmp1);  __it->hasNext(); ){
			::openfl::_internal::symbols::SWFSymbol symbol = __it->next();
			{
				::openfl::_internal::symbols::SWFSymbol tmp2 = symbol;
				bool tmp3 = ::Std_obj::is(tmp2,hx::ClassOf< ::openfl::_internal::symbols::BitmapSymbol >());
				if ((tmp3)){
					bitmap = ((::openfl::_internal::symbols::BitmapSymbol)(symbol));
					::openfl::utils::IAssetCache tmp4 = ::openfl::utils::Assets_obj::cache;
					::String tmp5 = bitmap->path;
					tmp4->removeBitmapData(tmp5);
				}
			}
;
		}
	}
return null();
}


Void SWFLiteLibrary_obj::__copyChannel( ::lime::graphics::Image image,::lime::graphics::Image alpha){
{
		bool tmp = (alpha != null());
		if ((tmp)){
			::lime::graphics::Image tmp1 = alpha;
			::lime::math::Rectangle tmp2 = alpha->get_rect();
			::lime::math::Vector2 tmp3 = ::lime::math::Vector2_obj::__new(null(),null());
			image->copyChannel(tmp1,tmp2,tmp3,::lime::graphics::ImageChannel_obj::RED,::lime::graphics::ImageChannel_obj::ALPHA);
		}
		image->buffer->premultiplied = true;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(SWFLiteLibrary_obj,__copyChannel,(void))

Void SWFLiteLibrary_obj::__fromManifest( ::lime::utils::AssetManifest manifest){
{
		this->rootPath = manifest->rootPath;
		::lime::utils::AssetManifest tmp = manifest;
		this->super::__fromManifest(tmp);
	}
return null();
}


::lime::app::Future SWFLiteLibrary_obj::__load( ){
	::lime::app::Future tmp = this->super::load();
	return tmp;
}


HX_DEFINE_DYNAMIC_FUNC0(SWFLiteLibrary_obj,__load,return )

::lime::app::Future SWFLiteLibrary_obj::__loadImage( ::String id){
	::String tmp = id;
	::lime::app::Future tmp1 = this->super::loadImage(tmp);
	return tmp1;
}


HX_DEFINE_DYNAMIC_FUNC1(SWFLiteLibrary_obj,__loadImage,return )


SWFLiteLibrary_obj::SWFLiteLibrary_obj()
{
}

void SWFLiteLibrary_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(SWFLiteLibrary);
	HX_MARK_MEMBER_NAME(alphaCheck,"alphaCheck");
	HX_MARK_MEMBER_NAME(id,"id");
	HX_MARK_MEMBER_NAME(imageClassNames,"imageClassNames");
	HX_MARK_MEMBER_NAME(preloading,"preloading");
	HX_MARK_MEMBER_NAME(rootPath,"rootPath");
	HX_MARK_MEMBER_NAME(swf,"swf");
	::lime::utils::AssetLibrary_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void SWFLiteLibrary_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(alphaCheck,"alphaCheck");
	HX_VISIT_MEMBER_NAME(id,"id");
	HX_VISIT_MEMBER_NAME(imageClassNames,"imageClassNames");
	HX_VISIT_MEMBER_NAME(preloading,"preloading");
	HX_VISIT_MEMBER_NAME(rootPath,"rootPath");
	HX_VISIT_MEMBER_NAME(swf,"swf");
	::lime::utils::AssetLibrary_obj::__Visit(HX_VISIT_ARG);
}

Dynamic SWFLiteLibrary_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 2:
		if (HX_FIELD_EQ(inName,"id") ) { return id; }
		break;
	case 3:
		if (HX_FIELD_EQ(inName,"swf") ) { return swf; }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"load") ) { return load_dyn(); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"exists") ) { return exists_dyn(); }
		if (HX_FIELD_EQ(inName,"unload") ) { return unload_dyn(); }
		if (HX_FIELD_EQ(inName,"__load") ) { return __load_dyn(); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"isLocal") ) { return isLocal_dyn(); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"rootPath") ) { return rootPath; }
		if (HX_FIELD_EQ(inName,"getImage") ) { return getImage_dyn(); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"loadImage") ) { return loadImage_dyn(); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"alphaCheck") ) { return alphaCheck; }
		if (HX_FIELD_EQ(inName,"preloading") ) { return preloading; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"__loadImage") ) { return __loadImage_dyn(); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"getMovieClip") ) { return getMovieClip_dyn(); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"__copyChannel") ) { return __copyChannel_dyn(); }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"__fromManifest") ) { return __fromManifest_dyn(); }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"imageClassNames") ) { return imageClassNames; }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic SWFLiteLibrary_obj::__SetField(const ::String &inName,const Dynamic &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 2:
		if (HX_FIELD_EQ(inName,"id") ) { id=inValue.Cast< ::String >(); return inValue; }
		break;
	case 3:
		if (HX_FIELD_EQ(inName,"swf") ) { swf=inValue.Cast< ::openfl::_internal::swf::SWFLite >(); return inValue; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"rootPath") ) { rootPath=inValue.Cast< ::String >(); return inValue; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"alphaCheck") ) { alphaCheck=inValue.Cast< ::haxe::ds::StringMap >(); return inValue; }
		if (HX_FIELD_EQ(inName,"preloading") ) { preloading=inValue.Cast< bool >(); return inValue; }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"imageClassNames") ) { imageClassNames=inValue.Cast< ::haxe::ds::StringMap >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void SWFLiteLibrary_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("alphaCheck","\x8a","\xec","\x5b","\x66"));
	outFields->push(HX_HCSTRING("id","\xdb","\x5b","\x00","\x00"));
	outFields->push(HX_HCSTRING("imageClassNames","\xab","\xbf","\x09","\x89"));
	outFields->push(HX_HCSTRING("preloading","\xb9","\x08","\xef","\xa9"));
	outFields->push(HX_HCSTRING("rootPath","\xe7","\xb8","\x88","\xe1"));
	outFields->push(HX_HCSTRING("swf","\x42","\xab","\x57","\x00"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsObject /*::haxe::ds::StringMap*/ ,(int)offsetof(SWFLiteLibrary_obj,alphaCheck),HX_HCSTRING("alphaCheck","\x8a","\xec","\x5b","\x66")},
	{hx::fsString,(int)offsetof(SWFLiteLibrary_obj,id),HX_HCSTRING("id","\xdb","\x5b","\x00","\x00")},
	{hx::fsObject /*::haxe::ds::StringMap*/ ,(int)offsetof(SWFLiteLibrary_obj,imageClassNames),HX_HCSTRING("imageClassNames","\xab","\xbf","\x09","\x89")},
	{hx::fsBool,(int)offsetof(SWFLiteLibrary_obj,preloading),HX_HCSTRING("preloading","\xb9","\x08","\xef","\xa9")},
	{hx::fsString,(int)offsetof(SWFLiteLibrary_obj,rootPath),HX_HCSTRING("rootPath","\xe7","\xb8","\x88","\xe1")},
	{hx::fsObject /*::openfl::_internal::swf::SWFLite*/ ,(int)offsetof(SWFLiteLibrary_obj,swf),HX_HCSTRING("swf","\x42","\xab","\x57","\x00")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo *sStaticStorageInfo = 0;
#endif

static ::String sMemberFields[] = {
	HX_HCSTRING("alphaCheck","\x8a","\xec","\x5b","\x66"),
	HX_HCSTRING("id","\xdb","\x5b","\x00","\x00"),
	HX_HCSTRING("imageClassNames","\xab","\xbf","\x09","\x89"),
	HX_HCSTRING("preloading","\xb9","\x08","\xef","\xa9"),
	HX_HCSTRING("rootPath","\xe7","\xb8","\x88","\xe1"),
	HX_HCSTRING("swf","\x42","\xab","\x57","\x00"),
	HX_HCSTRING("exists","\xdc","\x1d","\xe0","\xbf"),
	HX_HCSTRING("getImage","\xe5","\x2e","\x40","\x1d"),
	HX_HCSTRING("getMovieClip","\x2a","\x9f","\x71","\x27"),
	HX_HCSTRING("isLocal","\x21","\x6d","\x76","\x15"),
	HX_HCSTRING("load","\x26","\x9a","\xb7","\x47"),
	HX_HCSTRING("loadImage","\x55","\x6b","\xa0","\xd8"),
	HX_HCSTRING("unload","\xff","\xa0","\x8c","\x65"),
	HX_HCSTRING("__copyChannel","\x6e","\xbe","\x5e","\x6b"),
	HX_HCSTRING("__fromManifest","\x59","\x5a","\x01","\x91"),
	HX_HCSTRING("__load","\x46","\xfd","\xaf","\xf6"),
	HX_HCSTRING("__loadImage","\x35","\xb4","\xcc","\x06"),
	::String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(SWFLiteLibrary_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(SWFLiteLibrary_obj::__mClass,"__mClass");
};

#endif

hx::Class SWFLiteLibrary_obj::__mClass;

void SWFLiteLibrary_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("openfl._internal.swf.SWFLiteLibrary","\x47","\xb9","\x12","\xb6");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = hx::Class_obj::dupFunctions(sMemberFields);
	__mClass->mCanCast = hx::TCanCast< SWFLiteLibrary_obj >;
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
} // end namespace _internal
} // end namespace swf
