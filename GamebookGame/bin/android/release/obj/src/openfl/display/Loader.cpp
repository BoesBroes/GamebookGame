#include <hxcpp.h>

#ifndef INCLUDED_Std
#include <Std.h>
#endif
#ifndef INCLUDED_StringTools
#include <StringTools.h>
#endif
#ifndef INCLUDED_cpp_vm_Gc
#include <cpp/vm/Gc.h>
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
#ifndef INCLUDED_lime_utils_AssetLibrary
#include <lime/utils/AssetLibrary.h>
#endif
#ifndef INCLUDED_lime_utils_AssetManifest
#include <lime/utils/AssetManifest.h>
#endif
#ifndef INCLUDED_openfl_Lib
#include <openfl/Lib.h>
#endif
#ifndef INCLUDED_openfl_display_Bitmap
#include <openfl/display/Bitmap.h>
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
#ifndef INCLUDED_openfl_display_Loader
#include <openfl/display/Loader.h>
#endif
#ifndef INCLUDED_openfl_display_LoaderInfo
#include <openfl/display/LoaderInfo.h>
#endif
#ifndef INCLUDED_openfl_display_MovieClip
#include <openfl/display/MovieClip.h>
#endif
#ifndef INCLUDED_openfl_display_Sprite
#include <openfl/display/Sprite.h>
#endif
#ifndef INCLUDED_openfl_events_ErrorEvent
#include <openfl/events/ErrorEvent.h>
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
#ifndef INCLUDED_openfl_events_IOErrorEvent
#include <openfl/events/IOErrorEvent.h>
#endif
#ifndef INCLUDED_openfl_events_ProgressEvent
#include <openfl/events/ProgressEvent.h>
#endif
#ifndef INCLUDED_openfl_events_TextEvent
#include <openfl/events/TextEvent.h>
#endif
#ifndef INCLUDED_openfl_net_URLLoader
#include <openfl/net/URLLoader.h>
#endif
#ifndef INCLUDED_openfl_net_URLRequest
#include <openfl/net/URLRequest.h>
#endif
#ifndef INCLUDED_openfl_system_LoaderContext
#include <openfl/system/LoaderContext.h>
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
namespace openfl{
namespace display{

Void Loader_obj::__construct()
{
{
	super::__construct();
	::openfl::display::LoaderInfo tmp = ::openfl::display::LoaderInfo_obj::create(hx::ObjectPtr<OBJ_>(this));
	this->contentLoaderInfo = tmp;
}
;
	return null();
}

//Loader_obj::~Loader_obj() { }

Dynamic Loader_obj::__CreateEmpty() { return  new Loader_obj; }
hx::ObjectPtr< Loader_obj > Loader_obj::__new()
{  hx::ObjectPtr< Loader_obj > _result_ = new Loader_obj();
	_result_->__construct();
	return _result_;}

Dynamic Loader_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< Loader_obj > _result_ = new Loader_obj();
	_result_->__construct();
	return _result_;}

Void Loader_obj::close( ){
{
		Dynamic tmp = hx::SourceInfo(HX_HCSTRING("Loader.hx","\x6b","\xe8","\xd2","\x9c"),54,HX_HCSTRING("openfl.display.Loader","\xfd","\x67","\xb0","\xe2"),HX_HCSTRING("close","\xb8","\x17","\x63","\x48"));
		::openfl::Lib_obj::notImplemented(tmp);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(Loader_obj,close,(void))

Void Loader_obj::load( ::openfl::net::URLRequest request,::openfl::_system::LoaderContext context){
{
		::openfl::display::LoaderInfo tmp = this->contentLoaderInfo;
		tmp->url = request->url;
		bool tmp1 = (request->contentType == null());
		bool tmp2 = !(tmp1);
		bool tmp3;
		if ((tmp2)){
			tmp3 = (request->contentType == HX_HCSTRING("","\x00","\x00","\x00","\x00"));
		}
		else{
			tmp3 = true;
		}
		if ((tmp3)){
			::String extension = HX_HCSTRING("","\x00","\x00","\x00","\x00");
			this->__path = request->url;
			::String tmp4 = this->__path;
			int tmp5 = tmp4.indexOf(HX_HCSTRING("?","\x3f","\x00","\x00","\x00"),null());
			int queryIndex = tmp5;
			bool tmp6 = (queryIndex > (int)-1);
			if ((tmp6)){
				::String tmp7 = this->__path;
				int tmp8 = queryIndex;
				::String tmp9 = tmp7.substring((int)0,tmp8);
				this->__path = tmp9;
			}
			while((true)){
				::String tmp7 = this->__path;
				bool tmp8 = ::StringTools_obj::endsWith(tmp7,HX_HCSTRING("/","\x2f","\x00","\x00","\x00"));
				bool tmp9 = !(tmp8);
				if ((tmp9)){
					break;
				}
				::String tmp10 = this->__path;
				::String tmp11 = this->__path;
				int tmp12 = tmp11.length;
				int tmp13 = (tmp12 - (int)1);
				::String tmp14 = tmp10.substring((int)0,tmp13);
				this->__path = tmp14;
			}
			::String tmp7 = this->__path;
			bool tmp8 = ::StringTools_obj::endsWith(tmp7,HX_HCSTRING(".bundle","\x30","\x4a","\xb8","\x4e"));
			if ((tmp8)){
				hx::AddEq(this->__path,HX_HCSTRING("/library.json","\x2a","\xa7","\x07","\x47"));
				bool tmp9 = (queryIndex > (int)-1);
				if ((tmp9)){
					::String tmp10 = this->__path;
					int tmp11 = queryIndex;
					::String tmp12 = request->url.substring(tmp11,null());
					::String tmp13 = (tmp10 + tmp12);
					request->url = tmp13;
				}
				else{
					::String tmp10 = this->__path;
					request->url = tmp10;
				}
			}
			::String tmp9 = this->__path;
			int tmp10 = tmp9.lastIndexOf(HX_HCSTRING(".","\x2e","\x00","\x00","\x00"),null());
			int extIndex = tmp10;
			bool tmp11 = (extIndex > (int)-1);
			if ((tmp11)){
				::String tmp12 = this->__path;
				int tmp13 = (extIndex + (int)1);
				::String tmp14 = tmp12.substring(tmp13,null());
				extension = tmp14;
			}
			::String tmp12 = extension;
			::String tmp13;
			::String _switch_1 = (tmp12);
			if (  ( _switch_1==HX_HCSTRING("json","\x28","\x42","\x68","\x46"))){
				tmp13 = HX_HCSTRING("application/json","\x87","\xd8","\x7f","\x4e");
			}
			else if (  ( _switch_1==HX_HCSTRING("swf","\x42","\xab","\x57","\x00"))){
				tmp13 = HX_HCSTRING("application/x-shockwave-flash","\xea","\xf3","\x47","\x4a");
			}
			else if (  ( _switch_1==HX_HCSTRING("jpg","\xe1","\xd0","\x50","\x00")) ||  ( _switch_1==HX_HCSTRING("jpeg","\xa8","\xf2","\x65","\x46"))){
				tmp13 = HX_HCSTRING("image/jpeg","\x1c","\x8d","\xdb","\xce");
			}
			else if (  ( _switch_1==HX_HCSTRING("png","\xa9","\x5c","\x55","\x00"))){
				tmp13 = HX_HCSTRING("image/png","\xb5","\xcc","\xc1","\x16");
			}
			else if (  ( _switch_1==HX_HCSTRING("gif","\x04","\x84","\x4e","\x00"))){
				tmp13 = HX_HCSTRING("image/gif","\x10","\xf4","\xba","\x16");
			}
			else if (  ( _switch_1==HX_HCSTRING("js","\xc9","\x5c","\x00","\x00"))){
				tmp13 = HX_HCSTRING("application/javascript","\xcc","\x7a","\xf4","\xa7");
			}
			else  {
				tmp13 = HX_HCSTRING("application/x-www-form-urlencoded","\x9e","\x61","\x91","\xfa");
			}
;
;
			::openfl::display::LoaderInfo tmp14 = this->contentLoaderInfo;
			tmp14->contentType = tmp13;
		}
		else{
			::openfl::display::LoaderInfo tmp4 = this->contentLoaderInfo;
			tmp4->contentType = request->contentType;
		}
		::openfl::net::URLLoader tmp4 = ::openfl::net::URLLoader_obj::__new(null());
		::openfl::net::URLLoader loader = tmp4;
		loader->dataFormat = ((Dynamic)((int)0));
		::openfl::display::LoaderInfo tmp5 = this->contentLoaderInfo;
		int tmp6 = tmp5->contentType.indexOf(HX_HCSTRING("/json","\xd7","\x85","\x3d","\x56"),null());
		int tmp7 = (int)-1;
		bool tmp8 = (tmp6 > tmp7);
		bool tmp9 = !(tmp8);
		bool tmp10 = tmp9;
		bool tmp11;
		if ((tmp10)){
			::openfl::display::LoaderInfo tmp12 = this->contentLoaderInfo;
			::openfl::display::LoaderInfo tmp13 = tmp12;
			::openfl::display::LoaderInfo tmp14 = tmp13;
			int tmp15 = tmp14->contentType.indexOf(HX_HCSTRING("/javascript","\x1c","\x04","\x67","\x9b"),null());
			int tmp16 = tmp15;
			int tmp17 = tmp16;
			int tmp18 = (int)-1;
			int tmp19 = tmp18;
			int tmp20 = tmp19;
			tmp11 = (tmp17 > tmp20);
		}
		else{
			tmp11 = true;
		}
		bool tmp12 = !(tmp11);
		bool tmp13;
		if ((tmp12)){
			::openfl::display::LoaderInfo tmp14 = this->contentLoaderInfo;
			::openfl::display::LoaderInfo tmp15 = tmp14;
			int tmp16 = tmp15->contentType.indexOf(HX_HCSTRING("/ecmascript","\xac","\x7b","\x0f","\x7d"),null());
			int tmp17 = tmp16;
			tmp13 = (tmp17 > (int)-1);
		}
		else{
			tmp13 = true;
		}
		if ((tmp13)){
			loader->dataFormat = ((Dynamic)((int)1));
		}
		Dynamic tmp14 = this->loader_onComplete_dyn();
		loader->addEventListener(HX_HCSTRING("complete","\xb9","\x00","\xc8","\x7f"),tmp14,null(),null(),null());
		Dynamic tmp15 = this->loader_onError_dyn();
		loader->addEventListener(HX_HCSTRING("ioError","\x02","\xfe","\x41","\x76"),tmp15,null(),null(),null());
		Dynamic tmp16 = this->loader_onProgress_dyn();
		loader->addEventListener(HX_HCSTRING("progress","\xad","\xf7","\x2a","\x86"),tmp16,null(),null(),null());
		::openfl::net::URLRequest tmp17 = request;
		loader->load(tmp17);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(Loader_obj,load,(void))

Void Loader_obj::loadBytes( ::openfl::utils::ByteArrayData buffer,::openfl::_system::LoaderContext context){
{
		::openfl::utils::ByteArrayData tmp = buffer;
		::lime::app::Future tmp1 = ::openfl::display::BitmapData_obj::loadFromBytes(tmp,null());
		Dynamic tmp2 = this->BitmapData_onLoad_dyn();
		::lime::app::Future tmp3 = tmp1->onComplete(tmp2);
		Dynamic tmp4 = this->BitmapData_onError_dyn();
		tmp3->onError(tmp4);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(Loader_obj,loadBytes,(void))

Void Loader_obj::unload( ){
{
		int tmp = this->get_numChildren();
		bool tmp1 = (tmp > (int)0);
		if ((tmp1)){
			while((true)){
				int tmp2 = this->get_numChildren();
				bool tmp3 = (tmp2 > (int)0);
				bool tmp4 = !(tmp3);
				if ((tmp4)){
					break;
				}
				this->removeChildAt((int)0);
			}
			this->content = null();
			::openfl::display::LoaderInfo tmp2 = this->contentLoaderInfo;
			tmp2->url = null();
			::openfl::display::LoaderInfo tmp3 = this->contentLoaderInfo;
			tmp3->contentType = null();
			::openfl::display::LoaderInfo tmp4 = this->contentLoaderInfo;
			tmp4->content = null();
			::openfl::display::LoaderInfo tmp5 = this->contentLoaderInfo;
			tmp5->bytesLoaded = (int)0;
			::openfl::display::LoaderInfo tmp6 = this->contentLoaderInfo;
			tmp6->bytesTotal = (int)0;
			::openfl::display::LoaderInfo tmp7 = this->contentLoaderInfo;
			tmp7->width = (int)0;
			::openfl::display::LoaderInfo tmp8 = this->contentLoaderInfo;
			tmp8->height = (int)0;
			::openfl::events::Event tmp9 = ::openfl::events::Event_obj::__new(HX_HCSTRING("unload","\xff","\xa0","\x8c","\x65"),null(),null());
			this->dispatchEvent(tmp9);
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(Loader_obj,unload,(void))

Void Loader_obj::unloadAndStop( hx::Null< bool >  __o_gc){
bool gc = __o_gc.Default(true);
{
		::openfl::display::DisplayObject tmp = this->content;
		bool tmp1 = (tmp != null());
		if ((tmp1)){
			::openfl::display::DisplayObject tmp2 = this->content;
			tmp2->__stopAllMovieClips();
		}
		{
			int _g1 = (int)0;
			int tmp2 = this->get_numChildren();
			int _g = tmp2;
			while((true)){
				bool tmp3 = (_g1 < _g);
				bool tmp4 = !(tmp3);
				if ((tmp4)){
					break;
				}
				int tmp5 = (_g1)++;
				int i = tmp5;
				int tmp6 = i;
				::openfl::display::DisplayObject tmp7 = this->getChildAt(tmp6);
				tmp7->__stopAllMovieClips();
			}
		}
		this->unload();
		bool tmp2 = gc;
		if ((tmp2)){
			::cpp::vm::Gc_obj::run(false);
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Loader_obj,unloadAndStop,(void))

Void Loader_obj::__dispatchError( ::String text){
{
		::openfl::events::IOErrorEvent tmp = ::openfl::events::IOErrorEvent_obj::__new(HX_HCSTRING("ioError","\x02","\xfe","\x41","\x76"),null(),null(),null(),null());
		::openfl::events::IOErrorEvent event = tmp;
		event->text = text;
		::openfl::display::LoaderInfo tmp1 = this->contentLoaderInfo;
		::openfl::events::IOErrorEvent tmp2 = event;
		tmp1->dispatchEvent(tmp2);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Loader_obj,__dispatchError,(void))

Void Loader_obj::BitmapData_onError( Dynamic error){
{
		Dynamic tmp = error;
		::String tmp1 = ::Std_obj::string(tmp);
		this->__dispatchError(tmp1);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Loader_obj,BitmapData_onError,(void))

Void Loader_obj::BitmapData_onLoad( ::openfl::display::BitmapData bitmapData){
{
		::openfl::display::Bitmap tmp = ::openfl::display::Bitmap_obj::__new(bitmapData,null(),null());
		::openfl::display::LoaderInfo tmp1 = this->contentLoaderInfo;
		tmp1->content = tmp;
		::openfl::display::LoaderInfo tmp2 = this->contentLoaderInfo;
		this->content = tmp2->content;
		::openfl::display::DisplayObject tmp3 = this->content;
		this->addChild(tmp3);
		::openfl::display::LoaderInfo tmp4 = this->contentLoaderInfo;
		::openfl::events::Event tmp5 = ::openfl::events::Event_obj::__new(HX_HCSTRING("complete","\xb9","\x00","\xc8","\x7f"),null(),null());
		tmp4->dispatchEvent(tmp5);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Loader_obj,BitmapData_onLoad,(void))

Void Loader_obj::BitmapData_onProgress( int bytesLoaded,int bytesTotal){
{
		::openfl::events::ProgressEvent tmp = ::openfl::events::ProgressEvent_obj::__new(HX_HCSTRING("progress","\xad","\xf7","\x2a","\x86"),null(),null(),null(),null());
		::openfl::events::ProgressEvent event = tmp;
		event->bytesLoaded = bytesLoaded;
		event->bytesTotal = bytesTotal;
		::openfl::display::LoaderInfo tmp1 = this->contentLoaderInfo;
		::openfl::events::ProgressEvent tmp2 = event;
		tmp1->dispatchEvent(tmp2);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(Loader_obj,BitmapData_onProgress,(void))

Void Loader_obj::loader_onComplete( ::openfl::events::Event event){
{
		::openfl::display::Loader _g = hx::ObjectPtr<OBJ_>(this);
		::openfl::net::URLLoader loader = ((::openfl::net::URLLoader)(event->target));
		::openfl::display::LoaderInfo tmp = this->contentLoaderInfo;
		int tmp1 = tmp->contentType.indexOf(HX_HCSTRING("/json","\xd7","\x85","\x3d","\x56"),null());
		bool tmp2 = (tmp1 > (int)-1);
		if ((tmp2)){
			Dynamic tmp3 = loader->data;
			::String tmp4 = this->__path;
			::String tmp5 = ::haxe::io::Path_obj::directory(tmp4);
			::lime::utils::AssetManifest tmp6 = ::lime::utils::AssetManifest_obj::parse(tmp3,tmp5);
			::lime::utils::AssetManifest manifest = tmp6;
			bool tmp7 = (manifest == null());
			if ((tmp7)){
				this->__dispatchError(HX_HCSTRING("Cannot parse asset manifest","\x49","\xe5","\x68","\xe9"));
				return null();
			}
			::lime::utils::AssetManifest tmp8 = manifest;
			::lime::utils::AssetLibrary tmp9 = ::lime::utils::AssetLibrary_obj::fromManifest(tmp8);
			::lime::utils::AssetLibrary library = tmp9;
			bool tmp10 = (library == null());
			if ((tmp10)){
				this->__dispatchError(HX_HCSTRING("Cannot open library","\xc2","\xbb","\x9d","\x77"));
				return null();
			}
			::lime::utils::AssetLibrary tmp11 = library;
			bool tmp12 = ::Std_obj::is(tmp11,hx::ClassOf< ::openfl::utils::AssetLibrary >());
			if ((tmp12)){
				::lime::app::Future tmp13 = library->load();

				HX_BEGIN_LOCAL_FUNC_S2(hx::LocalFunc,_Function_3_1,::openfl::display::Loader,_g,::lime::utils::AssetLibrary,library)
				int __ArgCount() const { return 1; }
				Void run(::lime::utils::AssetLibrary _){
					{
						::openfl::utils::AssetLibrary tmp14;
						tmp14 = hx::TCast< ::openfl::utils::AssetLibrary >::cast(library);
						::openfl::display::MovieClip tmp15 = tmp14->getMovieClip(HX_HCSTRING("","\x00","\x00","\x00","\x00"));
						_g->contentLoaderInfo->content = tmp15;
						::openfl::display::DisplayObject tmp16 = _g->contentLoaderInfo->content;
						_g->addChild(tmp16);
						::openfl::events::Event tmp17 = ::openfl::events::Event_obj::__new(HX_HCSTRING("complete","\xb9","\x00","\xc8","\x7f"),null(),null());
						_g->contentLoaderInfo->dispatchEvent(tmp17);
					}
					return null();
				}
				HX_END_LOCAL_FUNC1((void))

				::lime::app::Future tmp14 = tmp13->onComplete( Dynamic(new _Function_3_1(_g,library)));

				HX_BEGIN_LOCAL_FUNC_S1(hx::LocalFunc,_Function_3_2,::openfl::display::Loader,_g)
				int __ArgCount() const { return 1; }
				Void run(::String e){
					{
						::String tmp15 = e;
						_g->__dispatchError(tmp15);
					}
					return null();
				}
				HX_END_LOCAL_FUNC1((void))

				tmp14->onError( Dynamic(new _Function_3_2(_g)));
			}
		}
		else{
			::openfl::display::LoaderInfo tmp3 = this->contentLoaderInfo;
			int tmp4 = tmp3->contentType.indexOf(HX_HCSTRING("/javascript","\x1c","\x04","\x67","\x9b"),null());
			int tmp5 = (int)-1;
			bool tmp6 = (tmp4 > tmp5);
			bool tmp7 = !(tmp6);
			bool tmp8;
			if ((tmp7)){
				::openfl::display::LoaderInfo tmp9 = this->contentLoaderInfo;
				::openfl::display::LoaderInfo tmp10 = tmp9;
				int tmp11 = tmp10->contentType.indexOf(HX_HCSTRING("/ecmascript","\xac","\x7b","\x0f","\x7d"),null());
				int tmp12 = tmp11;
				tmp8 = (tmp12 > (int)-1);
			}
			else{
				tmp8 = true;
			}
			if ((tmp8)){
				::openfl::display::Sprite tmp9 = ::openfl::display::Sprite_obj::__new();
				::openfl::display::LoaderInfo tmp10 = this->contentLoaderInfo;
				tmp10->content = tmp9;
				::openfl::display::LoaderInfo tmp11 = this->contentLoaderInfo;
				::openfl::display::DisplayObject tmp12 = tmp11->content;
				this->addChild(tmp12);
				::openfl::display::LoaderInfo tmp13 = this->contentLoaderInfo;
				::openfl::events::Event tmp14 = ::openfl::events::Event_obj::__new(HX_HCSTRING("complete","\xb9","\x00","\xc8","\x7f"),null(),null());
				tmp13->dispatchEvent(tmp14);
			}
			else{
				Dynamic tmp9 = loader->data;
				::lime::app::Future tmp10 = ::openfl::display::BitmapData_obj::loadFromBytes(tmp9,null());
				Dynamic tmp11 = this->BitmapData_onLoad_dyn();
				::lime::app::Future tmp12 = tmp10->onComplete(tmp11);
				Dynamic tmp13 = this->BitmapData_onError_dyn();
				tmp12->onError(tmp13);
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Loader_obj,loader_onComplete,(void))

Void Loader_obj::loader_onError( ::openfl::events::IOErrorEvent event){
{
		::openfl::display::LoaderInfo tmp = this->contentLoaderInfo;
		event->target = tmp;
		::openfl::display::LoaderInfo tmp1 = this->contentLoaderInfo;
		::openfl::events::IOErrorEvent tmp2 = event;
		tmp1->dispatchEvent(tmp2);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Loader_obj,loader_onError,(void))

Void Loader_obj::loader_onProgress( ::openfl::events::ProgressEvent event){
{
		::openfl::display::LoaderInfo tmp = this->contentLoaderInfo;
		event->target = tmp;
		::openfl::display::LoaderInfo tmp1 = this->contentLoaderInfo;
		::openfl::events::ProgressEvent tmp2 = event;
		tmp1->dispatchEvent(tmp2);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Loader_obj,loader_onProgress,(void))


Loader_obj::Loader_obj()
{
}

void Loader_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(Loader);
	HX_MARK_MEMBER_NAME(content,"content");
	HX_MARK_MEMBER_NAME(contentLoaderInfo,"contentLoaderInfo");
	HX_MARK_MEMBER_NAME(__path,"__path");
	::openfl::display::DisplayObjectContainer_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void Loader_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(content,"content");
	HX_VISIT_MEMBER_NAME(contentLoaderInfo,"contentLoaderInfo");
	HX_VISIT_MEMBER_NAME(__path,"__path");
	::openfl::display::DisplayObjectContainer_obj::__Visit(HX_VISIT_ARG);
}

Dynamic Loader_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"load") ) { return load_dyn(); }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"close") ) { return close_dyn(); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"__path") ) { return __path; }
		if (HX_FIELD_EQ(inName,"unload") ) { return unload_dyn(); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"content") ) { return content; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"loadBytes") ) { return loadBytes_dyn(); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"unloadAndStop") ) { return unloadAndStop_dyn(); }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"loader_onError") ) { return loader_onError_dyn(); }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"__dispatchError") ) { return __dispatchError_dyn(); }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"contentLoaderInfo") ) { return contentLoaderInfo; }
		if (HX_FIELD_EQ(inName,"BitmapData_onLoad") ) { return BitmapData_onLoad_dyn(); }
		if (HX_FIELD_EQ(inName,"loader_onComplete") ) { return loader_onComplete_dyn(); }
		if (HX_FIELD_EQ(inName,"loader_onProgress") ) { return loader_onProgress_dyn(); }
		break;
	case 18:
		if (HX_FIELD_EQ(inName,"BitmapData_onError") ) { return BitmapData_onError_dyn(); }
		break;
	case 21:
		if (HX_FIELD_EQ(inName,"BitmapData_onProgress") ) { return BitmapData_onProgress_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic Loader_obj::__SetField(const ::String &inName,const Dynamic &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 6:
		if (HX_FIELD_EQ(inName,"__path") ) { __path=inValue.Cast< ::String >(); return inValue; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"content") ) { content=inValue.Cast< ::openfl::display::DisplayObject >(); return inValue; }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"contentLoaderInfo") ) { contentLoaderInfo=inValue.Cast< ::openfl::display::LoaderInfo >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void Loader_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("content","\x39","\x8d","\x77","\x19"));
	outFields->push(HX_HCSTRING("contentLoaderInfo","\xba","\x64","\x65","\x14"));
	outFields->push(HX_HCSTRING("__path","\xc5","\x48","\x4a","\xf9"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsObject /*::openfl::display::DisplayObject*/ ,(int)offsetof(Loader_obj,content),HX_HCSTRING("content","\x39","\x8d","\x77","\x19")},
	{hx::fsObject /*::openfl::display::LoaderInfo*/ ,(int)offsetof(Loader_obj,contentLoaderInfo),HX_HCSTRING("contentLoaderInfo","\xba","\x64","\x65","\x14")},
	{hx::fsString,(int)offsetof(Loader_obj,__path),HX_HCSTRING("__path","\xc5","\x48","\x4a","\xf9")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo *sStaticStorageInfo = 0;
#endif

static ::String sMemberFields[] = {
	HX_HCSTRING("content","\x39","\x8d","\x77","\x19"),
	HX_HCSTRING("contentLoaderInfo","\xba","\x64","\x65","\x14"),
	HX_HCSTRING("__path","\xc5","\x48","\x4a","\xf9"),
	HX_HCSTRING("close","\xb8","\x17","\x63","\x48"),
	HX_HCSTRING("load","\x26","\x9a","\xb7","\x47"),
	HX_HCSTRING("loadBytes","\x65","\x54","\xcf","\xd8"),
	HX_HCSTRING("unload","\xff","\xa0","\x8c","\x65"),
	HX_HCSTRING("unloadAndStop","\x3a","\x03","\x03","\x7a"),
	HX_HCSTRING("__dispatchError","\x8e","\x03","\x7c","\x4b"),
	HX_HCSTRING("BitmapData_onError","\x83","\x7e","\x14","\x0a"),
	HX_HCSTRING("BitmapData_onLoad","\xcb","\xd7","\xa2","\xbe"),
	HX_HCSTRING("BitmapData_onProgress","\xd2","\x6b","\x16","\xc1"),
	HX_HCSTRING("loader_onComplete","\xe4","\x7c","\x03","\x18"),
	HX_HCSTRING("loader_onError","\xbd","\xd6","\x01","\xb0"),
	HX_HCSTRING("loader_onProgress","\xd8","\x73","\x66","\x1e"),
	::String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(Loader_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(Loader_obj::__mClass,"__mClass");
};

#endif

hx::Class Loader_obj::__mClass;

void Loader_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("openfl.display.Loader","\xfd","\x67","\xb0","\xe2");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = hx::Class_obj::dupFunctions(sMemberFields);
	__mClass->mCanCast = hx::TCanCast< Loader_obj >;
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
} // end namespace display
