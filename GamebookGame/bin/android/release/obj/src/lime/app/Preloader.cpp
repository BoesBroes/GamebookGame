#include <hxcpp.h>

#ifndef INCLUDED_haxe_IMap
#include <haxe/IMap.h>
#endif
#ifndef INCLUDED_haxe_ds_ObjectMap
#include <haxe/ds/ObjectMap.h>
#endif
#ifndef INCLUDED_haxe_ds_StringMap
#include <haxe/ds/StringMap.h>
#endif
#ifndef INCLUDED_lime_app_Future
#include <lime/app/Future.h>
#endif
#ifndef INCLUDED_lime_app_Preloader
#include <lime/app/Preloader.h>
#endif
#ifndef INCLUDED_lime_app__Event_Int_Int_Void
#include <lime/app/_Event_Int_Int_Void.h>
#endif
#ifndef INCLUDED_lime_app__Event_Void_Void
#include <lime/app/_Event_Void_Void.h>
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
namespace lime{
namespace app{

Void Preloader_obj::__construct()
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
	this->bytesTotalCache = _Function_1_1::Block();
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
	this->bytesLoadedCache2 = _Function_1_2::Block();
	struct _Function_1_3{
		inline static ::haxe::ds::ObjectMap Block( ){
			{
				::haxe::ds::ObjectMap tmp = ::haxe::ds::ObjectMap_obj::__new();
				::haxe::ds::ObjectMap tmp1 = tmp;
				return tmp1;
			}
			return null();
		}
	};
	this->bytesLoadedCache = _Function_1_3::Block();
	this->onProgress = ::lime::app::_Event_Int_Int_Void_obj::__new();
	this->onComplete = ::lime::app::_Event_Void_Void_obj::__new();
	this->bytesLoaded = (int)0;
	this->bytesTotal = (int)0;
	this->libraries = Array_obj< ::Dynamic >::__new();
	this->libraryNames = Array_obj< ::String >::__new();
	::lime::app::_Event_Int_Int_Void tmp = this->onProgress;
	Dynamic tmp1 = this->update_dyn();
	tmp->add(tmp1,null(),null());
}
;
	return null();
}

//Preloader_obj::~Preloader_obj() { }

Dynamic Preloader_obj::__CreateEmpty() { return  new Preloader_obj; }
hx::ObjectPtr< Preloader_obj > Preloader_obj::__new()
{  hx::ObjectPtr< Preloader_obj > _result_ = new Preloader_obj();
	_result_->__construct();
	return _result_;}

Dynamic Preloader_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< Preloader_obj > _result_ = new Preloader_obj();
	_result_->__construct();
	return _result_;}

Void Preloader_obj::addLibrary( ::lime::utils::AssetLibrary library){
{
		::lime::utils::AssetLibrary tmp = library;
		this->libraries->push(tmp);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Preloader_obj,addLibrary,(void))

Void Preloader_obj::addLibraryName( ::String name){
{
		::String tmp = name;
		int tmp1 = this->libraryNames->indexOf(tmp,null());
		bool tmp2 = (tmp1 == (int)-1);
		if ((tmp2)){
			::String tmp3 = name;
			this->libraryNames->push(tmp3);
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Preloader_obj,addLibraryName,(void))

Void Preloader_obj::create( Dynamic config){
{
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Preloader_obj,create,(void))

Void Preloader_obj::load( ){
{
		::lime::app::Preloader _g2 = hx::ObjectPtr<OBJ_>(this);
		{
			int _g = (int)0;
			Array< ::Dynamic > _g1 = this->libraries;
			while((true)){
				bool tmp = (_g < _g1->length);
				bool tmp1 = !(tmp);
				if ((tmp1)){
					break;
				}
				::lime::utils::AssetLibrary tmp2 = _g1->__get(_g).StaticCast< ::lime::utils::AssetLibrary >();
				::lime::utils::AssetLibrary library = tmp2;
				++(_g);
				hx::AddEq(this->bytesTotal,library->bytesTotal);
			}
		}
		this->loadedLibraries = (int)-1;
		this->preloadStarted = false;
		{
			int _g = (int)0;
			Array< ::Dynamic > _g1 = this->libraries;
			while((true)){
				bool tmp = (_g < _g1->length);
				bool tmp1 = !(tmp);
				if ((tmp1)){
					break;
				}
				::lime::utils::AssetLibrary tmp2 = _g1->__get(_g).StaticCast< ::lime::utils::AssetLibrary >();
				::lime::utils::AssetLibrary library = tmp2;
				++(_g);
				Dynamic tmp3 = hx::SourceInfo(HX_HCSTRING("Preloader.hx","\x28","\x58","\x3f","\xc7"),153,HX_HCSTRING("lime.app.Preloader","\x30","\x2b","\xc5","\x4e"),HX_HCSTRING("load","\x26","\x9a","\xb7","\x47"));
				::lime::utils::Log_obj::verbose(HX_HCSTRING("Preloading asset library","\x44","\x27","\x6d","\x96"),tmp3);
				::lime::app::Future tmp4 = library->load();

				HX_BEGIN_LOCAL_FUNC_S2(hx::LocalFunc,_Function_3_1,::lime::utils::AssetLibrary,library,::lime::app::Preloader,_g2)
				int __ArgCount() const { return 2; }
				Void run(int loaded,int total){
					{
						::lime::utils::AssetLibrary tmp5 = library;
						bool tmp6 = _g2->bytesLoadedCache->exists(tmp5);
						bool tmp7 = !(tmp6);
						if ((tmp7)){
							hx::AddEq(_g2->bytesLoaded,loaded);
						}
						else{
							int tmp8 = loaded;
							::lime::utils::AssetLibrary tmp9 = library;
							Dynamic tmp10 = _g2->bytesLoadedCache->get(tmp9);
							Dynamic tmp11 = tmp10;
							int tmp12 = (tmp8 - tmp11);
							hx::AddEq(_g2->bytesLoaded,tmp12);
						}
						::lime::utils::AssetLibrary tmp8 = library;
						int tmp9 = loaded;
						_g2->bytesLoadedCache->set(tmp8,tmp9);
						bool tmp10 = _g2->simulateProgress;
						bool tmp11 = !(tmp10);
						if ((tmp11)){
							int tmp12 = _g2->bytesLoaded;
							int tmp13 = _g2->bytesTotal;
							_g2->onProgress->dispatch(tmp12,tmp13);
						}
					}
					return null();
				}
				HX_END_LOCAL_FUNC2((void))

				::lime::app::Future tmp5 = tmp4->onProgress( Dynamic(new _Function_3_1(library,_g2)));

				HX_BEGIN_LOCAL_FUNC_S2(hx::LocalFunc,_Function_3_2,::lime::utils::AssetLibrary,library,::lime::app::Preloader,_g2)
				int __ArgCount() const { return 1; }
				Void run(::lime::utils::AssetLibrary _){
					{
						::lime::utils::AssetLibrary tmp6 = library;
						bool tmp7 = _g2->bytesLoadedCache->exists(tmp6);
						bool tmp8 = !(tmp7);
						if ((tmp8)){
							hx::AddEq(_g2->bytesLoaded,library->bytesTotal);
						}
						else{
							int tmp9 = library->bytesTotal;
							::lime::utils::AssetLibrary tmp10 = library;
							Dynamic tmp11 = _g2->bytesLoadedCache->get(tmp10);
							Dynamic tmp12 = tmp11;
							int tmp13 = (tmp9 - tmp12);
							hx::AddEq(_g2->bytesLoaded,tmp13);
						}
						_g2->loadedAssetLibrary(null());
					}
					return null();
				}
				HX_END_LOCAL_FUNC1((void))

				::lime::app::Future tmp6 = tmp5->onComplete( Dynamic(new _Function_3_2(library,_g2)));

				HX_BEGIN_LOCAL_FUNC_S0(hx::LocalFunc,_Function_3_3)
				int __ArgCount() const { return 1; }
				Void run(::String e){
					{
						::String tmp7 = e;
						Dynamic tmp8 = hx::SourceInfo(HX_HCSTRING("Preloader.hx","\x28","\x58","\x3f","\xc7"),191,HX_HCSTRING("lime.app.Preloader","\x30","\x2b","\xc5","\x4e"),HX_HCSTRING("load","\x26","\x9a","\xb7","\x47"));
						::lime::utils::Log_obj::error(tmp7,tmp8);
					}
					return null();
				}
				HX_END_LOCAL_FUNC1((void))

				tmp6->onError( Dynamic(new _Function_3_3()));
			}
		}
		{
			int _g = (int)0;
			Array< ::String > _g1 = this->libraryNames;
			while((true)){
				bool tmp = (_g < _g1->length);
				bool tmp1 = !(tmp);
				if ((tmp1)){
					break;
				}
				::String tmp2 = _g1->__get(_g);
				::String name = tmp2;
				++(_g);
				hx::AddEq(this->bytesTotal,(int)200);
			}
		}
		(this->loadedLibraries)++;
		this->preloadStarted = true;
		this->updateProgress();
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(Preloader_obj,load,(void))

Void Preloader_obj::loadedAssetLibrary( ::String name){
{
		(this->loadedLibraries)++;
		int tmp = this->loadedLibraries;
		int current = tmp;
		bool tmp1 = this->preloadStarted;
		bool tmp2 = !(tmp1);
		if ((tmp2)){
			(current)++;
		}
		int tmp3 = this->libraries->length;
		int tmp4 = this->libraryNames->length;
		int tmp5 = (tmp3 + tmp4);
		int totalLibraries = tmp5;
		bool tmp6 = (name != null());
		if ((tmp6)){
			::String tmp7 = (HX_HCSTRING("Loaded asset library: ","\x36","\xba","\xcc","\x98") + name);
			::String tmp8 = (tmp7 + HX_HCSTRING(" [","\x3b","\x1c","\x00","\x00"));
			int tmp9 = current;
			::String tmp10 = (tmp8 + tmp9);
			::String tmp11 = (tmp10 + HX_HCSTRING("/","\x2f","\x00","\x00","\x00"));
			int tmp12 = totalLibraries;
			::String tmp13 = (tmp11 + tmp12);
			::String tmp14 = (tmp13 + HX_HCSTRING("]","\x5d","\x00","\x00","\x00"));
			Dynamic tmp15 = hx::SourceInfo(HX_HCSTRING("Preloader.hx","\x28","\x58","\x3f","\xc7"),223,HX_HCSTRING("lime.app.Preloader","\x30","\x2b","\xc5","\x4e"),HX_HCSTRING("loadedAssetLibrary","\x90","\x0a","\xd2","\x6a"));
			::lime::utils::Log_obj::verbose(tmp14,tmp15);
		}
		else{
			::String tmp7 = (HX_HCSTRING("Loaded asset library [","\xcb","\xa3","\xcc","\x98") + current);
			::String tmp8 = (tmp7 + HX_HCSTRING("/","\x2f","\x00","\x00","\x00"));
			int tmp9 = totalLibraries;
			::String tmp10 = (tmp8 + tmp9);
			::String tmp11 = (tmp10 + HX_HCSTRING("]","\x5d","\x00","\x00","\x00"));
			Dynamic tmp12 = hx::SourceInfo(HX_HCSTRING("Preloader.hx","\x28","\x58","\x3f","\xc7"),227,HX_HCSTRING("lime.app.Preloader","\x30","\x2b","\xc5","\x4e"),HX_HCSTRING("loadedAssetLibrary","\x90","\x0a","\xd2","\x6a"));
			::lime::utils::Log_obj::verbose(tmp11,tmp12);
		}
		this->updateProgress();
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Preloader_obj,loadedAssetLibrary,(void))

Void Preloader_obj::start( ){
{
		bool tmp = this->complete;
		if ((tmp)){
			return null();
		}
		this->complete = true;
		::lime::app::_Event_Void_Void tmp1 = this->onComplete;
		tmp1->dispatch();
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(Preloader_obj,start,(void))

Void Preloader_obj::update( int loaded,int total){
{
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(Preloader_obj,update,(void))

Void Preloader_obj::updateProgress( ){
{
		::lime::app::Preloader _g2 = hx::ObjectPtr<OBJ_>(this);
		bool tmp = this->simulateProgress;
		bool tmp1 = !(tmp);
		if ((tmp1)){
			::lime::app::_Event_Int_Int_Void tmp2 = this->onProgress;
			int tmp3 = this->bytesLoaded;
			int tmp4 = this->bytesTotal;
			tmp2->dispatch(tmp3,tmp4);
		}
		int tmp2 = this->loadedLibraries;
		int tmp3 = this->libraries->length;
		bool tmp4 = (tmp2 == tmp3);
		bool tmp5;
		if ((tmp4)){
			bool tmp6 = this->initLibraryNames;
			bool tmp7 = tmp6;
			bool tmp8 = tmp7;
			tmp5 = !(tmp8);
		}
		else{
			tmp5 = false;
		}
		if ((tmp5)){
			this->initLibraryNames = true;
			{
				int _g = (int)0;
				Array< ::String > _g1 = this->libraryNames;
				while((true)){
					bool tmp6 = (_g < _g1->length);
					bool tmp7 = !(tmp6);
					if ((tmp7)){
						break;
					}
					::String tmp8 = _g1->__get(_g);
					::String name = tmp8;
					++(_g);
					::String tmp9 = (HX_HCSTRING("Preloading asset library: ","\xea","\xb2","\x78","\xe9") + name);
					Dynamic tmp10 = hx::SourceInfo(HX_HCSTRING("Preloader.hx","\x28","\x58","\x3f","\xc7"),276,HX_HCSTRING("lime.app.Preloader","\x30","\x2b","\xc5","\x4e"),HX_HCSTRING("updateProgress","\xd6","\xea","\x54","\xbb"));
					::lime::utils::Log_obj::verbose(tmp9,tmp10);
					::String tmp11 = name;
					::lime::app::Future tmp12 = ::lime::utils::Assets_obj::loadLibrary(tmp11);

					HX_BEGIN_LOCAL_FUNC_S2(hx::LocalFunc,_Function_4_1,::lime::app::Preloader,_g2,::String,name)
					int __ArgCount() const { return 2; }
					Void run(int loaded,int total){
						{
							bool tmp13 = (total > (int)0);
							if ((tmp13)){
								::String tmp14 = name;
								bool tmp15 = _g2->bytesTotalCache->exists(tmp14);
								bool tmp16 = !(tmp15);
								if ((tmp16)){
									::String tmp17 = name;
									int tmp18 = total;
									_g2->bytesTotalCache->set(tmp17,tmp18);
									int tmp19 = (total - (int)200);
									hx::AddEq(_g2->bytesTotal,tmp19);
								}
								bool tmp17 = (loaded > total);
								if ((tmp17)){
									loaded = total;
								}
								::String tmp18 = name;
								bool tmp19 = _g2->bytesLoadedCache2->exists(tmp18);
								bool tmp20 = !(tmp19);
								if ((tmp20)){
									hx::AddEq(_g2->bytesLoaded,loaded);
								}
								else{
									int tmp21 = loaded;
									::String tmp22 = name;
									Dynamic tmp23 = _g2->bytesLoadedCache2->get(tmp22);
									Dynamic tmp24 = tmp23;
									int tmp25 = (tmp21 - tmp24);
									hx::AddEq(_g2->bytesLoaded,tmp25);
								}
								::String tmp21 = name;
								int tmp22 = loaded;
								_g2->bytesLoadedCache2->set(tmp21,tmp22);
								bool tmp23 = _g2->simulateProgress;
								bool tmp24 = !(tmp23);
								if ((tmp24)){
									int tmp25 = _g2->bytesLoaded;
									int tmp26 = _g2->bytesTotal;
									_g2->onProgress->dispatch(tmp25,tmp26);
								}
							}
						}
						return null();
					}
					HX_END_LOCAL_FUNC2((void))

					::lime::app::Future tmp13 = tmp12->onProgress( Dynamic(new _Function_4_1(_g2,name)));

					HX_BEGIN_LOCAL_FUNC_S2(hx::LocalFunc,_Function_4_2,::lime::app::Preloader,_g2,::String,name)
					int __ArgCount() const { return 1; }
					Void run(::lime::utils::AssetLibrary library){
						{
							int total = (int)200;
							::String tmp14 = name;
							bool tmp15 = _g2->bytesTotalCache->exists(tmp14);
							if ((tmp15)){
								::String tmp16 = name;
								Dynamic tmp17 = _g2->bytesTotalCache->get(tmp16);
								total = tmp17;
							}
							::String tmp16 = name;
							bool tmp17 = _g2->bytesLoadedCache2->exists(tmp16);
							bool tmp18 = !(tmp17);
							if ((tmp18)){
								hx::AddEq(_g2->bytesLoaded,total);
							}
							else{
								int tmp19 = total;
								::String tmp20 = name;
								Dynamic tmp21 = _g2->bytesLoadedCache2->get(tmp20);
								Dynamic tmp22 = tmp21;
								int tmp23 = (tmp19 - tmp22);
								hx::AddEq(_g2->bytesLoaded,tmp23);
							}
							::String tmp19 = name;
							_g2->loadedAssetLibrary(tmp19);
						}
						return null();
					}
					HX_END_LOCAL_FUNC1((void))

					::lime::app::Future tmp14 = tmp13->onComplete( Dynamic(new _Function_4_2(_g2,name)));

					HX_BEGIN_LOCAL_FUNC_S0(hx::LocalFunc,_Function_4_3)
					int __ArgCount() const { return 1; }
					Void run(::String e){
						{
							::String tmp15 = e;
							Dynamic tmp16 = hx::SourceInfo(HX_HCSTRING("Preloader.hx","\x28","\x58","\x3f","\xc7"),335,HX_HCSTRING("lime.app.Preloader","\x30","\x2b","\xc5","\x4e"),HX_HCSTRING("updateProgress","\xd6","\xea","\x54","\xbb"));
							::lime::utils::Log_obj::error(tmp15,tmp16);
						}
						return null();
					}
					HX_END_LOCAL_FUNC1((void))

					tmp14->onError( Dynamic(new _Function_4_3()));
				}
			}
		}
		bool tmp6 = this->simulateProgress;
		bool tmp7 = tmp6;
		bool tmp8 = !(tmp7);
		bool tmp9;
		if ((tmp8)){
			int tmp10 = this->loadedLibraries;
			int tmp11 = tmp10;
			int tmp12 = this->libraries->length;
			int tmp13 = tmp12;
			int tmp14 = this->libraryNames->length;
			int tmp15 = tmp14;
			int tmp16 = (tmp13 + tmp15);
			int tmp17 = tmp16;
			tmp9 = (tmp11 == tmp17);
		}
		else{
			tmp9 = false;
		}
		if ((tmp9)){
			bool tmp10 = this->preloadComplete;
			bool tmp11 = !(tmp10);
			if ((tmp11)){
				this->preloadComplete = true;
				Dynamic tmp12 = hx::SourceInfo(HX_HCSTRING("Preloader.hx","\x28","\x58","\x3f","\xc7"),349,HX_HCSTRING("lime.app.Preloader","\x30","\x2b","\xc5","\x4e"),HX_HCSTRING("updateProgress","\xd6","\xea","\x54","\xbb"));
				::lime::utils::Log_obj::verbose(HX_HCSTRING("Preload complete","\x10","\xf4","\x03","\x24"),tmp12);
			}
			this->start();
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(Preloader_obj,updateProgress,(void))


Preloader_obj::Preloader_obj()
{
}

void Preloader_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(Preloader);
	HX_MARK_MEMBER_NAME(complete,"complete");
	HX_MARK_MEMBER_NAME(onComplete,"onComplete");
	HX_MARK_MEMBER_NAME(onProgress,"onProgress");
	HX_MARK_MEMBER_NAME(bytesLoaded,"bytesLoaded");
	HX_MARK_MEMBER_NAME(bytesLoadedCache,"bytesLoadedCache");
	HX_MARK_MEMBER_NAME(bytesLoadedCache2,"bytesLoadedCache2");
	HX_MARK_MEMBER_NAME(bytesTotal,"bytesTotal");
	HX_MARK_MEMBER_NAME(bytesTotalCache,"bytesTotalCache");
	HX_MARK_MEMBER_NAME(initLibraryNames,"initLibraryNames");
	HX_MARK_MEMBER_NAME(libraries,"libraries");
	HX_MARK_MEMBER_NAME(libraryNames,"libraryNames");
	HX_MARK_MEMBER_NAME(loadedLibraries,"loadedLibraries");
	HX_MARK_MEMBER_NAME(loadedStage,"loadedStage");
	HX_MARK_MEMBER_NAME(preloadComplete,"preloadComplete");
	HX_MARK_MEMBER_NAME(preloadStarted,"preloadStarted");
	HX_MARK_MEMBER_NAME(simulateProgress,"simulateProgress");
	HX_MARK_END_CLASS();
}

void Preloader_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(complete,"complete");
	HX_VISIT_MEMBER_NAME(onComplete,"onComplete");
	HX_VISIT_MEMBER_NAME(onProgress,"onProgress");
	HX_VISIT_MEMBER_NAME(bytesLoaded,"bytesLoaded");
	HX_VISIT_MEMBER_NAME(bytesLoadedCache,"bytesLoadedCache");
	HX_VISIT_MEMBER_NAME(bytesLoadedCache2,"bytesLoadedCache2");
	HX_VISIT_MEMBER_NAME(bytesTotal,"bytesTotal");
	HX_VISIT_MEMBER_NAME(bytesTotalCache,"bytesTotalCache");
	HX_VISIT_MEMBER_NAME(initLibraryNames,"initLibraryNames");
	HX_VISIT_MEMBER_NAME(libraries,"libraries");
	HX_VISIT_MEMBER_NAME(libraryNames,"libraryNames");
	HX_VISIT_MEMBER_NAME(loadedLibraries,"loadedLibraries");
	HX_VISIT_MEMBER_NAME(loadedStage,"loadedStage");
	HX_VISIT_MEMBER_NAME(preloadComplete,"preloadComplete");
	HX_VISIT_MEMBER_NAME(preloadStarted,"preloadStarted");
	HX_VISIT_MEMBER_NAME(simulateProgress,"simulateProgress");
}

Dynamic Preloader_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"load") ) { return load_dyn(); }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"start") ) { return start_dyn(); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"create") ) { return create_dyn(); }
		if (HX_FIELD_EQ(inName,"update") ) { return update_dyn(); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"complete") ) { return complete; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"libraries") ) { return libraries; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"onComplete") ) { return onComplete; }
		if (HX_FIELD_EQ(inName,"onProgress") ) { return onProgress; }
		if (HX_FIELD_EQ(inName,"bytesTotal") ) { return bytesTotal; }
		if (HX_FIELD_EQ(inName,"addLibrary") ) { return addLibrary_dyn(); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"bytesLoaded") ) { return bytesLoaded; }
		if (HX_FIELD_EQ(inName,"loadedStage") ) { return loadedStage; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"libraryNames") ) { return libraryNames; }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"preloadStarted") ) { return preloadStarted; }
		if (HX_FIELD_EQ(inName,"addLibraryName") ) { return addLibraryName_dyn(); }
		if (HX_FIELD_EQ(inName,"updateProgress") ) { return updateProgress_dyn(); }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"bytesTotalCache") ) { return bytesTotalCache; }
		if (HX_FIELD_EQ(inName,"loadedLibraries") ) { return loadedLibraries; }
		if (HX_FIELD_EQ(inName,"preloadComplete") ) { return preloadComplete; }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"bytesLoadedCache") ) { return bytesLoadedCache; }
		if (HX_FIELD_EQ(inName,"initLibraryNames") ) { return initLibraryNames; }
		if (HX_FIELD_EQ(inName,"simulateProgress") ) { return simulateProgress; }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"bytesLoadedCache2") ) { return bytesLoadedCache2; }
		break;
	case 18:
		if (HX_FIELD_EQ(inName,"loadedAssetLibrary") ) { return loadedAssetLibrary_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic Preloader_obj::__SetField(const ::String &inName,const Dynamic &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 8:
		if (HX_FIELD_EQ(inName,"complete") ) { complete=inValue.Cast< bool >(); return inValue; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"libraries") ) { libraries=inValue.Cast< Array< ::Dynamic > >(); return inValue; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"onComplete") ) { onComplete=inValue.Cast< ::lime::app::_Event_Void_Void >(); return inValue; }
		if (HX_FIELD_EQ(inName,"onProgress") ) { onProgress=inValue.Cast< ::lime::app::_Event_Int_Int_Void >(); return inValue; }
		if (HX_FIELD_EQ(inName,"bytesTotal") ) { bytesTotal=inValue.Cast< int >(); return inValue; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"bytesLoaded") ) { bytesLoaded=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"loadedStage") ) { loadedStage=inValue.Cast< bool >(); return inValue; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"libraryNames") ) { libraryNames=inValue.Cast< Array< ::String > >(); return inValue; }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"preloadStarted") ) { preloadStarted=inValue.Cast< bool >(); return inValue; }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"bytesTotalCache") ) { bytesTotalCache=inValue.Cast< ::haxe::ds::StringMap >(); return inValue; }
		if (HX_FIELD_EQ(inName,"loadedLibraries") ) { loadedLibraries=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"preloadComplete") ) { preloadComplete=inValue.Cast< bool >(); return inValue; }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"bytesLoadedCache") ) { bytesLoadedCache=inValue.Cast< ::haxe::ds::ObjectMap >(); return inValue; }
		if (HX_FIELD_EQ(inName,"initLibraryNames") ) { initLibraryNames=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"simulateProgress") ) { simulateProgress=inValue.Cast< bool >(); return inValue; }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"bytesLoadedCache2") ) { bytesLoadedCache2=inValue.Cast< ::haxe::ds::StringMap >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void Preloader_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("complete","\xb9","\x00","\xc8","\x7f"));
	outFields->push(HX_HCSTRING("onComplete","\xf8","\xd4","\x7e","\x5d"));
	outFields->push(HX_HCSTRING("onProgress","\xec","\xcb","\xe1","\x63"));
	outFields->push(HX_HCSTRING("bytesLoaded","\xd0","\x66","\xca","\x99"));
	outFields->push(HX_HCSTRING("bytesLoadedCache","\x52","\xf1","\x40","\x0f"));
	outFields->push(HX_HCSTRING("bytesLoadedCache2","\xa0","\x36","\x92","\x49"));
	outFields->push(HX_HCSTRING("bytesTotal","\x59","\x57","\xda","\x45"));
	outFields->push(HX_HCSTRING("bytesTotalCache","\x29","\x70","\x4f","\xba"));
	outFields->push(HX_HCSTRING("initLibraryNames","\xfd","\x89","\xcd","\xd2"));
	outFields->push(HX_HCSTRING("libraries","\x19","\x50","\xf8","\x18"));
	outFields->push(HX_HCSTRING("libraryNames","\xcd","\xaa","\x8b","\xdf"));
	outFields->push(HX_HCSTRING("loadedLibraries","\x54","\x3f","\xa7","\x0f"));
	outFields->push(HX_HCSTRING("loadedStage","\x79","\x60","\x2d","\x7e"));
	outFields->push(HX_HCSTRING("preloadComplete","\xa2","\x75","\x67","\x9d"));
	outFields->push(HX_HCSTRING("preloadStarted","\x78","\x84","\xcb","\x31"));
	outFields->push(HX_HCSTRING("simulateProgress","\x71","\x2f","\x7f","\xa6"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsBool,(int)offsetof(Preloader_obj,complete),HX_HCSTRING("complete","\xb9","\x00","\xc8","\x7f")},
	{hx::fsObject /*::lime::app::_Event_Void_Void*/ ,(int)offsetof(Preloader_obj,onComplete),HX_HCSTRING("onComplete","\xf8","\xd4","\x7e","\x5d")},
	{hx::fsObject /*::lime::app::_Event_Int_Int_Void*/ ,(int)offsetof(Preloader_obj,onProgress),HX_HCSTRING("onProgress","\xec","\xcb","\xe1","\x63")},
	{hx::fsInt,(int)offsetof(Preloader_obj,bytesLoaded),HX_HCSTRING("bytesLoaded","\xd0","\x66","\xca","\x99")},
	{hx::fsObject /*::haxe::ds::ObjectMap*/ ,(int)offsetof(Preloader_obj,bytesLoadedCache),HX_HCSTRING("bytesLoadedCache","\x52","\xf1","\x40","\x0f")},
	{hx::fsObject /*::haxe::ds::StringMap*/ ,(int)offsetof(Preloader_obj,bytesLoadedCache2),HX_HCSTRING("bytesLoadedCache2","\xa0","\x36","\x92","\x49")},
	{hx::fsInt,(int)offsetof(Preloader_obj,bytesTotal),HX_HCSTRING("bytesTotal","\x59","\x57","\xda","\x45")},
	{hx::fsObject /*::haxe::ds::StringMap*/ ,(int)offsetof(Preloader_obj,bytesTotalCache),HX_HCSTRING("bytesTotalCache","\x29","\x70","\x4f","\xba")},
	{hx::fsBool,(int)offsetof(Preloader_obj,initLibraryNames),HX_HCSTRING("initLibraryNames","\xfd","\x89","\xcd","\xd2")},
	{hx::fsObject /*Array< ::Dynamic >*/ ,(int)offsetof(Preloader_obj,libraries),HX_HCSTRING("libraries","\x19","\x50","\xf8","\x18")},
	{hx::fsObject /*Array< ::String >*/ ,(int)offsetof(Preloader_obj,libraryNames),HX_HCSTRING("libraryNames","\xcd","\xaa","\x8b","\xdf")},
	{hx::fsInt,(int)offsetof(Preloader_obj,loadedLibraries),HX_HCSTRING("loadedLibraries","\x54","\x3f","\xa7","\x0f")},
	{hx::fsBool,(int)offsetof(Preloader_obj,loadedStage),HX_HCSTRING("loadedStage","\x79","\x60","\x2d","\x7e")},
	{hx::fsBool,(int)offsetof(Preloader_obj,preloadComplete),HX_HCSTRING("preloadComplete","\xa2","\x75","\x67","\x9d")},
	{hx::fsBool,(int)offsetof(Preloader_obj,preloadStarted),HX_HCSTRING("preloadStarted","\x78","\x84","\xcb","\x31")},
	{hx::fsBool,(int)offsetof(Preloader_obj,simulateProgress),HX_HCSTRING("simulateProgress","\x71","\x2f","\x7f","\xa6")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo *sStaticStorageInfo = 0;
#endif

static ::String sMemberFields[] = {
	HX_HCSTRING("complete","\xb9","\x00","\xc8","\x7f"),
	HX_HCSTRING("onComplete","\xf8","\xd4","\x7e","\x5d"),
	HX_HCSTRING("onProgress","\xec","\xcb","\xe1","\x63"),
	HX_HCSTRING("bytesLoaded","\xd0","\x66","\xca","\x99"),
	HX_HCSTRING("bytesLoadedCache","\x52","\xf1","\x40","\x0f"),
	HX_HCSTRING("bytesLoadedCache2","\xa0","\x36","\x92","\x49"),
	HX_HCSTRING("bytesTotal","\x59","\x57","\xda","\x45"),
	HX_HCSTRING("bytesTotalCache","\x29","\x70","\x4f","\xba"),
	HX_HCSTRING("initLibraryNames","\xfd","\x89","\xcd","\xd2"),
	HX_HCSTRING("libraries","\x19","\x50","\xf8","\x18"),
	HX_HCSTRING("libraryNames","\xcd","\xaa","\x8b","\xdf"),
	HX_HCSTRING("loadedLibraries","\x54","\x3f","\xa7","\x0f"),
	HX_HCSTRING("loadedStage","\x79","\x60","\x2d","\x7e"),
	HX_HCSTRING("preloadComplete","\xa2","\x75","\x67","\x9d"),
	HX_HCSTRING("preloadStarted","\x78","\x84","\xcb","\x31"),
	HX_HCSTRING("simulateProgress","\x71","\x2f","\x7f","\xa6"),
	HX_HCSTRING("addLibrary","\xda","\x52","\xfa","\xa6"),
	HX_HCSTRING("addLibraryName","\x45","\x66","\xbe","\x40"),
	HX_HCSTRING("create","\xfc","\x66","\x0f","\x7c"),
	HX_HCSTRING("load","\x26","\x9a","\xb7","\x47"),
	HX_HCSTRING("loadedAssetLibrary","\x90","\x0a","\xd2","\x6a"),
	HX_HCSTRING("start","\x62","\x74","\x0b","\x84"),
	HX_HCSTRING("update","\x09","\x86","\x05","\x87"),
	HX_HCSTRING("updateProgress","\xd6","\xea","\x54","\xbb"),
	::String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(Preloader_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(Preloader_obj::__mClass,"__mClass");
};

#endif

hx::Class Preloader_obj::__mClass;

void Preloader_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("lime.app.Preloader","\x30","\x2b","\xc5","\x4e");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = hx::Class_obj::dupFunctions(sMemberFields);
	__mClass->mCanCast = hx::TCanCast< Preloader_obj >;
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
} // end namespace app
