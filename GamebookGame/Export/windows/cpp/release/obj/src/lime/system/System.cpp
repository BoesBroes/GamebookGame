#include <hxcpp.h>

#ifndef INCLUDED_Reflect
#include <Reflect.h>
#endif
#ifndef INCLUDED_StringTools
#include <StringTools.h>
#endif
#ifndef INCLUDED_Sys
#include <Sys.h>
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
#ifndef INCLUDED_lime__backend_native_NativeCFFI
#include <lime/_backend/native/NativeCFFI.h>
#endif
#ifndef INCLUDED_lime_app_Application
#include <lime/app/Application.h>
#endif
#ifndef INCLUDED_lime_app_IModule
#include <lime/app/IModule.h>
#endif
#ifndef INCLUDED_lime_app_Module
#include <lime/app/Module.h>
#endif
#ifndef INCLUDED_lime_app__Event_Int_Void
#include <lime/app/_Event_Int_Void.h>
#endif
#ifndef INCLUDED_lime_math_Rectangle
#include <lime/math/Rectangle.h>
#endif
#ifndef INCLUDED_lime_system_CFFI
#include <lime/system/CFFI.h>
#endif
#ifndef INCLUDED_lime_system_Display
#include <lime/system/Display.h>
#endif
#ifndef INCLUDED_lime_system_DisplayMode
#include <lime/system/DisplayMode.h>
#endif
#ifndef INCLUDED_lime_system_Endian
#include <lime/system/Endian.h>
#endif
#ifndef INCLUDED_lime_system_System
#include <lime/system/System.h>
#endif
namespace lime{
namespace _system{

Void System_obj::__construct()
{
	return null();
}

//System_obj::~System_obj() { }

Dynamic System_obj::__CreateEmpty() { return  new System_obj; }
hx::ObjectPtr< System_obj > System_obj::__new()
{  hx::ObjectPtr< System_obj > _result_ = new System_obj();
	_result_->__construct();
	return _result_;}

Dynamic System_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< System_obj > _result_ = new System_obj();
	_result_->__construct();
	return _result_;}

::String System_obj::applicationDirectory;

::String System_obj::applicationStorageDirectory;

::String System_obj::desktopDirectory;

bool System_obj::disableCFFI;

::String System_obj::documentsDirectory;

::lime::_system::Endian System_obj::endianness;

::String System_obj::fontsDirectory;

int System_obj::numDisplays;

::String System_obj::userDirectory;

::haxe::ds::StringMap System_obj::__applicationConfig;

::haxe::ds::StringMap System_obj::__applicationEntryPoint;

::haxe::ds::IntMap System_obj::__directories;

Void System_obj::exit( int code){
{
		::lime::app::Application tmp = ::lime::app::Application_obj::current;
		bool tmp1 = (tmp != null());
		if ((tmp1)){
			::lime::app::Application tmp2 = ::lime::app::Application_obj::current;
			int tmp3 = code;
			tmp2->onExit->dispatch(tmp3);
			::lime::app::Application tmp4 = ::lime::app::Application_obj::current;
			bool tmp5 = tmp4->onExit->canceled;
			if ((tmp5)){
				return null();
			}
		}
		int tmp2 = code;
		::Sys_obj::exit(tmp2);
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(System_obj,exit,(void))

::lime::_system::Display System_obj::getDisplay( int id){
	Dynamic displayInfo = ((Dynamic)(::lime::_backend::native::NativeCFFI_obj::cffi_lime_system_get_display.call(id)));
	bool tmp = (displayInfo != null());
	if ((tmp)){
		::lime::_system::Display tmp1 = ::lime::_system::Display_obj::__new();
		::lime::_system::Display display = tmp1;
		display->__FieldRef(HX_HCSTRING("id","\xdb","\x5b","\x00","\x00")) = id;
		display->__FieldRef(HX_HCSTRING("name","\x4b","\x72","\xff","\x48")) = displayInfo->__Field(HX_HCSTRING("name","\x4b","\x72","\xff","\x48"), hx::paccDynamic );
		::lime::math::Rectangle tmp2 = ::lime::math::Rectangle_obj::__new(displayInfo->__Field(HX_HCSTRING("bounds","\x75","\x86","\x1d","\x66"), hx::paccDynamic )->__Field(HX_HCSTRING("x","\x78","\x00","\x00","\x00"), hx::paccDynamic ),displayInfo->__Field(HX_HCSTRING("bounds","\x75","\x86","\x1d","\x66"), hx::paccDynamic )->__Field(HX_HCSTRING("y","\x79","\x00","\x00","\x00"), hx::paccDynamic ),displayInfo->__Field(HX_HCSTRING("bounds","\x75","\x86","\x1d","\x66"), hx::paccDynamic )->__Field(HX_HCSTRING("width","\x06","\xb6","\x62","\xca"), hx::paccDynamic ),displayInfo->__Field(HX_HCSTRING("bounds","\x75","\x86","\x1d","\x66"), hx::paccDynamic )->__Field(HX_HCSTRING("height","\xe7","\x07","\x4c","\x02"), hx::paccDynamic ));
		display->__FieldRef(HX_HCSTRING("bounds","\x75","\x86","\x1d","\x66")) = tmp2;
		display->__FieldRef(HX_HCSTRING("dpi","\x5d","\x43","\x4c","\x00")) = displayInfo->__Field(HX_HCSTRING("dpi","\x5d","\x43","\x4c","\x00"), hx::paccDynamic );
		display->__FieldRef(HX_HCSTRING("supportedModes","\xa2","\xa6","\xb8","\xb7")) = Array_obj< ::Dynamic >::__new();
		::lime::_system::DisplayMode displayMode;
		{
			int _g = (int)0;
			cpp::ArrayBase _g1;
			_g1 = hx::TCastToArray(displayInfo->__Field(HX_HCSTRING("supportedModes","\xa2","\xa6","\xb8","\xb7"), hx::paccDynamic ));
			while((true)){
				bool tmp3 = (_g < _g1->__Field(HX_HCSTRING("length","\xe6","\x94","\x07","\x9f"), hx::paccDynamic ));
				bool tmp4 = !(tmp3);
				if ((tmp4)){
					break;
				}
				Dynamic tmp5 = _g1->__GetItem(_g);
				Dynamic mode = tmp5;
				++(_g);
				::lime::_system::DisplayMode tmp6 = ::lime::_system::DisplayMode_obj::__new(mode->__Field(HX_HCSTRING("width","\x06","\xb6","\x62","\xca"), hx::paccDynamic ),mode->__Field(HX_HCSTRING("height","\xe7","\x07","\x4c","\x02"), hx::paccDynamic ),mode->__Field(HX_HCSTRING("refreshRate","\x5b","\xe2","\x3f","\x40"), hx::paccDynamic ),mode->__Field(HX_HCSTRING("pixelFormat","\x5d","\x72","\x1b","\x6f"), hx::paccDynamic ));
				displayMode = tmp6;
				::lime::_system::DisplayMode tmp7 = displayMode;
				display->__Field(HX_HCSTRING("supportedModes","\xa2","\xa6","\xb8","\xb7"), hx::paccDynamic )->__Field(HX_HCSTRING("push","\xda","\x11","\x61","\x4a"), hx::paccDynamic )(tmp7);
			}
		}
		Dynamic mode = displayInfo->__Field(HX_HCSTRING("currentMode","\x3c","\xac","\xf2","\x80"), hx::paccDynamic );
		::lime::_system::DisplayMode tmp3 = ::lime::_system::DisplayMode_obj::__new(mode->__Field(HX_HCSTRING("width","\x06","\xb6","\x62","\xca"), hx::paccDynamic ),mode->__Field(HX_HCSTRING("height","\xe7","\x07","\x4c","\x02"), hx::paccDynamic ),mode->__Field(HX_HCSTRING("refreshRate","\x5b","\xe2","\x3f","\x40"), hx::paccDynamic ),mode->__Field(HX_HCSTRING("pixelFormat","\x5d","\x72","\x1b","\x6f"), hx::paccDynamic ));
		::lime::_system::DisplayMode currentMode = tmp3;
		{
			int _g = (int)0;
			Array< ::Dynamic > _g1 = display->__Field(HX_HCSTRING("supportedModes","\xa2","\xa6","\xb8","\xb7"), hx::paccDynamic );
			while((true)){
				bool tmp4 = (_g < _g1->length);
				bool tmp5 = !(tmp4);
				if ((tmp5)){
					break;
				}
				::lime::_system::DisplayMode tmp6 = _g1->__get(_g).StaticCast< ::lime::_system::DisplayMode >();
				::lime::_system::DisplayMode mode1 = tmp6;
				++(_g);
				bool tmp7 = (currentMode->__Field(HX_HCSTRING("pixelFormat","\x5d","\x72","\x1b","\x6f"), hx::paccDynamic ) == mode1->__Field(HX_HCSTRING("pixelFormat","\x5d","\x72","\x1b","\x6f"), hx::paccDynamic ));
				bool tmp8 = tmp7;
				bool tmp9;
				if ((tmp8)){
					tmp9 = (currentMode->__Field(HX_HCSTRING("width","\x06","\xb6","\x62","\xca"), hx::paccDynamic ) == mode1->__Field(HX_HCSTRING("width","\x06","\xb6","\x62","\xca"), hx::paccDynamic ));
				}
				else{
					tmp9 = false;
				}
				bool tmp10 = tmp9;
				bool tmp11;
				if ((tmp10)){
					tmp11 = (currentMode->__Field(HX_HCSTRING("height","\xe7","\x07","\x4c","\x02"), hx::paccDynamic ) == mode1->__Field(HX_HCSTRING("height","\xe7","\x07","\x4c","\x02"), hx::paccDynamic ));
				}
				else{
					tmp11 = false;
				}
				bool tmp12;
				if ((tmp11)){
					tmp12 = (currentMode->__Field(HX_HCSTRING("refreshRate","\x5b","\xe2","\x3f","\x40"), hx::paccDynamic ) == mode1->__Field(HX_HCSTRING("refreshRate","\x5b","\xe2","\x3f","\x40"), hx::paccDynamic ));
				}
				else{
					tmp12 = false;
				}
				if ((tmp12)){
					currentMode = mode1;
					break;
				}
			}
		}
		display->__FieldRef(HX_HCSTRING("currentMode","\x3c","\xac","\xf2","\x80")) = currentMode;
		::lime::_system::Display tmp4 = display;
		return tmp4;
	}
	return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(System_obj,getDisplay,return )

int System_obj::getTimer( ){
	return ((int)(::lime::_backend::native::NativeCFFI_obj::cffi_lime_system_get_timer.call()));
}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(System_obj,getTimer,return )

Dynamic System_obj::load( ::String library,::String method,hx::Null< int >  __o_args,hx::Null< bool >  __o_lazy){
int args = __o_args.Default(0);
bool lazy = __o_lazy.Default(false);
{
		::String tmp = library;
		::String tmp1 = method;
		int tmp2 = args;
		bool tmp3 = lazy;
		Dynamic tmp4 = ::lime::_system::CFFI_obj::load(tmp,tmp1,tmp2,tmp3);
		return tmp4;
	}
}


STATIC_HX_DEFINE_DYNAMIC_FUNC4(System_obj,load,return )

Void System_obj::openFile( ::String path){
{
		bool tmp = (path != null());
		if ((tmp)){
			::Sys_obj::command(HX_HCSTRING("start","\x62","\x74","\x0b","\x84"),Array_obj< ::String >::__new().Add(path));
		}
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(System_obj,openFile,(void))

Void System_obj::openURL( ::String url,::String __o_target){
::String target = __o_target.Default(HX_HCSTRING("_blank","\x95","\x26","\xd9","\xb0"));
{
		bool tmp = (url != null());
		if ((tmp)){
			::String tmp1 = url;
			::lime::_system::System_obj::openFile(tmp1);
		}
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(System_obj,openURL,(void))

Void System_obj::__copyMissingFields( Dynamic target,Dynamic source){
{
		bool tmp = (source == null());
		bool tmp1 = !(tmp);
		bool tmp2;
		if ((tmp1)){
			tmp2 = (target == null());
		}
		else{
			tmp2 = true;
		}
		if ((tmp2)){
			return null();
		}
		{
			int _g = (int)0;
			Dynamic tmp3 = source;
			Array< ::String > _g1 = ::Reflect_obj::fields(tmp3);
			while((true)){
				bool tmp4 = (_g < _g1->length);
				bool tmp5 = !(tmp4);
				if ((tmp5)){
					break;
				}
				::String tmp6 = _g1->__get(_g);
				::String field = tmp6;
				++(_g);
				Dynamic tmp7 = target;
				::String tmp8 = field;
				bool tmp9 = ::Reflect_obj::hasField(tmp7,tmp8);
				bool tmp10 = !(tmp9);
				if ((tmp10)){
					Dynamic tmp11 = target;
					::String tmp12 = field;
					Dynamic tmp13 = source;
					::String tmp14 = field;
					Dynamic tmp15 = ::Reflect_obj::field(tmp13,tmp14);
					::Reflect_obj::setField(tmp11,tmp12,tmp15);
				}
			}
		}
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(System_obj,__copyMissingFields,(void))

::String System_obj::__getDirectory( int type){
	::haxe::ds::IntMap tmp = ::lime::_system::System_obj::__directories;
	int tmp1 = type;
	bool tmp2 = tmp->exists(tmp1);
	if ((tmp2)){
		::haxe::ds::IntMap tmp3 = ::lime::_system::System_obj::__directories;
		int tmp4 = type;
		::String tmp5 = tmp3->get(tmp4);
		::String tmp6 = tmp5;
		return tmp6;
	}
	else{
		::String path;
		bool tmp3 = (type == (int)1);
		if ((tmp3)){
			::String company = HX_HCSTRING("MyCompany","\x11","\xc3","\x2e","\xcc");
			::String file = HX_HCSTRING("MyApplication","\x24","\xd3","\xd1","\x1c");
			::lime::app::Application tmp4 = ::lime::app::Application_obj::current;
			bool tmp5 = (tmp4 != null());
			bool tmp6;
			if ((tmp5)){
				::lime::app::Application tmp7 = ::lime::app::Application_obj::current;
				::lime::app::Application tmp8 = tmp7;
				Dynamic tmp9 = tmp8->config;
				tmp6 = (tmp9 != null());
			}
			else{
				tmp6 = false;
			}
			if ((tmp6)){
				::lime::app::Application tmp7 = ::lime::app::Application_obj::current;
				::String tmp8 = tmp7->config->__Field(HX_HCSTRING("company","\x3d","\x15","\x69","\x83"), hx::paccDynamic );
				bool tmp9 = (tmp8 != null());
				if ((tmp9)){
					::lime::app::Application tmp10 = ::lime::app::Application_obj::current;
					::String tmp11 = tmp10->config->__Field(HX_HCSTRING("company","\x3d","\x15","\x69","\x83"), hx::paccDynamic );
					company = tmp11;
				}
				::lime::app::Application tmp10 = ::lime::app::Application_obj::current;
				::String tmp11 = tmp10->config->__Field(HX_HCSTRING("file","\x7c","\xce","\xbb","\x43"), hx::paccDynamic );
				bool tmp12 = (tmp11 != null());
				if ((tmp12)){
					::lime::app::Application tmp13 = ::lime::app::Application_obj::current;
					::String tmp14 = tmp13->config->__Field(HX_HCSTRING("file","\x7c","\xce","\xbb","\x43"), hx::paccDynamic );
					file = tmp14;
				}
			}
			path = ((Dynamic)(::lime::_backend::native::NativeCFFI_obj::cffi_lime_system_get_directory.call(type,company,file)));
		}
		else{
			path = ((Dynamic)(::lime::_backend::native::NativeCFFI_obj::cffi_lime_system_get_directory.call(type,null(),null())));
		}
		::String seperator = HX_HCSTRING("\\","\x5c","\x00","\x00","\x00");
		bool tmp4 = (path != null());
		bool tmp5 = tmp4;
		bool tmp6;
		if ((tmp5)){
			tmp6 = (path.length > (int)0);
		}
		else{
			tmp6 = false;
		}
		bool tmp7;
		if ((tmp6)){
			::String tmp8 = path;
			::String tmp9 = seperator;
			::String tmp10 = tmp8;
			::String tmp11 = tmp9;
			bool tmp12 = ::StringTools_obj::endsWith(tmp10,tmp11);
			bool tmp13 = tmp12;
			bool tmp14 = tmp13;
			tmp7 = !(tmp14);
		}
		else{
			tmp7 = false;
		}
		if ((tmp7)){
			hx::AddEq(path,seperator);
		}
		::haxe::ds::IntMap tmp8 = ::lime::_system::System_obj::__directories;
		int tmp9 = type;
		::String tmp10 = path;
		tmp8->set(tmp9,tmp10);
		::String tmp11 = path;
		return tmp11;
	}
	return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(System_obj,__getDirectory,return )

Void System_obj::__registerEntryPoint( ::String projectName,Dynamic entryPoint,Dynamic config){
{
		::haxe::ds::StringMap tmp = ::lime::_system::System_obj::__applicationConfig;
		bool tmp1 = (tmp == null());
		if ((tmp1)){
			::haxe::ds::StringMap tmp2;
			{
				::haxe::ds::StringMap tmp3 = ::haxe::ds::StringMap_obj::__new();
				::haxe::ds::StringMap tmp4 = tmp3;
				tmp2 = tmp4;
			}
			::lime::_system::System_obj::__applicationConfig = tmp2;
		}
		::haxe::ds::StringMap tmp2 = ::lime::_system::System_obj::__applicationEntryPoint;
		bool tmp3 = (tmp2 == null());
		if ((tmp3)){
			::haxe::ds::StringMap tmp4;
			{
				::haxe::ds::StringMap tmp5 = ::haxe::ds::StringMap_obj::__new();
				::haxe::ds::StringMap tmp6 = tmp5;
				tmp4 = tmp6;
			}
			::lime::_system::System_obj::__applicationEntryPoint = tmp4;
		}
		Dynamic tmp4;
		{
			::haxe::ds::StringMap tmp5 = ::lime::_system::System_obj::__applicationEntryPoint;
			::String tmp6 = projectName;
			Dynamic tmp7 = entryPoint;
			tmp5->set(tmp6,tmp7);
			tmp4 = entryPoint;
		}
		tmp4;
		Dynamic tmp5;
		{
			::haxe::ds::StringMap tmp6 = ::lime::_system::System_obj::__applicationConfig;
			::String tmp7 = projectName;
			Dynamic tmp8 = config;
			tmp6->set(tmp7,tmp8);
			tmp5 = config;
		}
		tmp5;
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC3(System_obj,__registerEntryPoint,(void))

bool System_obj::get_allowScreenTimeout( ){
	return ::lime::_backend::native::NativeCFFI_obj::cffi_lime_system_get_allow_screen_timeout.call();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(System_obj,get_allowScreenTimeout,return )

bool System_obj::set_allowScreenTimeout( bool value){
	return ::lime::_backend::native::NativeCFFI_obj::cffi_lime_system_set_allow_screen_timeout.call(value);
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(System_obj,set_allowScreenTimeout,return )

::String System_obj::get_applicationDirectory( ){
	::String tmp = ::lime::_system::System_obj::__getDirectory((int)0);
	return tmp;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(System_obj,get_applicationDirectory,return )

::String System_obj::get_applicationStorageDirectory( ){
	::String tmp = ::lime::_system::System_obj::__getDirectory((int)1);
	return tmp;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(System_obj,get_applicationStorageDirectory,return )

::String System_obj::get_desktopDirectory( ){
	::String tmp = ::lime::_system::System_obj::__getDirectory((int)2);
	return tmp;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(System_obj,get_desktopDirectory,return )

::String System_obj::get_documentsDirectory( ){
	::String tmp = ::lime::_system::System_obj::__getDirectory((int)3);
	return tmp;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(System_obj,get_documentsDirectory,return )

::String System_obj::get_fontsDirectory( ){
	::String tmp = ::lime::_system::System_obj::__getDirectory((int)4);
	return tmp;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(System_obj,get_fontsDirectory,return )

int System_obj::get_numDisplays( ){
	return ::lime::_backend::native::NativeCFFI_obj::cffi_lime_system_get_num_displays.call();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(System_obj,get_numDisplays,return )

::String System_obj::get_userDirectory( ){
	::String tmp = ::lime::_system::System_obj::__getDirectory((int)5);
	return tmp;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(System_obj,get_userDirectory,return )

::lime::_system::Endian System_obj::get_endianness( ){
	return ::lime::_system::Endian_obj::_LITTLE_ENDIAN;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(System_obj,get_endianness,return )


System_obj::System_obj()
{
}

bool System_obj::__GetStatic(const ::String &inName, Dynamic &outValue, hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"exit") ) { outValue = exit_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"load") ) { outValue = load_dyn(); return true;  }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"openURL") ) { outValue = openURL_dyn(); return true;  }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"getTimer") ) { outValue = getTimer_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"openFile") ) { outValue = openFile_dyn(); return true;  }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"endianness") ) { outValue = inCallProp == hx::paccAlways ? get_endianness() : endianness; return true; }
		if (HX_FIELD_EQ(inName,"getDisplay") ) { outValue = getDisplay_dyn(); return true;  }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"disableCFFI") ) { outValue = disableCFFI; return true;  }
		if (HX_FIELD_EQ(inName,"numDisplays") ) { outValue = inCallProp == hx::paccAlways ? get_numDisplays() : numDisplays; return true; }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"userDirectory") ) { outValue = inCallProp == hx::paccAlways ? get_userDirectory() : userDirectory; return true; }
		if (HX_FIELD_EQ(inName,"__directories") ) { outValue = __directories; return true;  }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"fontsDirectory") ) { outValue = inCallProp == hx::paccAlways ? get_fontsDirectory() : fontsDirectory; return true; }
		if (HX_FIELD_EQ(inName,"__getDirectory") ) { outValue = __getDirectory_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"get_endianness") ) { outValue = get_endianness_dyn(); return true;  }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"get_numDisplays") ) { outValue = get_numDisplays_dyn(); return true;  }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"desktopDirectory") ) { outValue = inCallProp == hx::paccAlways ? get_desktopDirectory() : desktopDirectory; return true; }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"get_userDirectory") ) { outValue = get_userDirectory_dyn(); return true;  }
		break;
	case 18:
		if (HX_FIELD_EQ(inName,"allowScreenTimeout") ) { if (inCallProp == hx::paccAlways) { outValue = get_allowScreenTimeout(); return true; } }
		if (HX_FIELD_EQ(inName,"documentsDirectory") ) { outValue = inCallProp == hx::paccAlways ? get_documentsDirectory() : documentsDirectory; return true; }
		if (HX_FIELD_EQ(inName,"get_fontsDirectory") ) { outValue = get_fontsDirectory_dyn(); return true;  }
		break;
	case 19:
		if (HX_FIELD_EQ(inName,"__applicationConfig") ) { outValue = __applicationConfig; return true;  }
		if (HX_FIELD_EQ(inName,"__copyMissingFields") ) { outValue = __copyMissingFields_dyn(); return true;  }
		break;
	case 20:
		if (HX_FIELD_EQ(inName,"applicationDirectory") ) { outValue = inCallProp == hx::paccAlways ? get_applicationDirectory() : applicationDirectory; return true; }
		if (HX_FIELD_EQ(inName,"__registerEntryPoint") ) { outValue = __registerEntryPoint_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"get_desktopDirectory") ) { outValue = get_desktopDirectory_dyn(); return true;  }
		break;
	case 22:
		if (HX_FIELD_EQ(inName,"get_allowScreenTimeout") ) { outValue = get_allowScreenTimeout_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"set_allowScreenTimeout") ) { outValue = set_allowScreenTimeout_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"get_documentsDirectory") ) { outValue = get_documentsDirectory_dyn(); return true;  }
		break;
	case 23:
		if (HX_FIELD_EQ(inName,"__applicationEntryPoint") ) { outValue = __applicationEntryPoint; return true;  }
		break;
	case 24:
		if (HX_FIELD_EQ(inName,"get_applicationDirectory") ) { outValue = get_applicationDirectory_dyn(); return true;  }
		break;
	case 27:
		if (HX_FIELD_EQ(inName,"applicationStorageDirectory") ) { outValue = inCallProp == hx::paccAlways ? get_applicationStorageDirectory() : applicationStorageDirectory; return true; }
		break;
	case 31:
		if (HX_FIELD_EQ(inName,"get_applicationStorageDirectory") ) { outValue = get_applicationStorageDirectory_dyn(); return true;  }
	}
	return false;
}

bool System_obj::__SetStatic(const ::String &inName,Dynamic &ioValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 10:
		if (HX_FIELD_EQ(inName,"endianness") ) { endianness=ioValue.Cast< ::lime::_system::Endian >(); return true; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"disableCFFI") ) { disableCFFI=ioValue.Cast< bool >(); return true; }
		if (HX_FIELD_EQ(inName,"numDisplays") ) { numDisplays=ioValue.Cast< int >(); return true; }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"userDirectory") ) { userDirectory=ioValue.Cast< ::String >(); return true; }
		if (HX_FIELD_EQ(inName,"__directories") ) { __directories=ioValue.Cast< ::haxe::ds::IntMap >(); return true; }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"fontsDirectory") ) { fontsDirectory=ioValue.Cast< ::String >(); return true; }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"desktopDirectory") ) { desktopDirectory=ioValue.Cast< ::String >(); return true; }
		break;
	case 18:
		if (HX_FIELD_EQ(inName,"allowScreenTimeout") ) { if (inCallProp == hx::paccAlways)  ioValue = set_allowScreenTimeout(ioValue); }
		if (HX_FIELD_EQ(inName,"documentsDirectory") ) { documentsDirectory=ioValue.Cast< ::String >(); return true; }
		break;
	case 19:
		if (HX_FIELD_EQ(inName,"__applicationConfig") ) { __applicationConfig=ioValue.Cast< ::haxe::ds::StringMap >(); return true; }
		break;
	case 20:
		if (HX_FIELD_EQ(inName,"applicationDirectory") ) { applicationDirectory=ioValue.Cast< ::String >(); return true; }
		break;
	case 23:
		if (HX_FIELD_EQ(inName,"__applicationEntryPoint") ) { __applicationEntryPoint=ioValue.Cast< ::haxe::ds::StringMap >(); return true; }
		break;
	case 27:
		if (HX_FIELD_EQ(inName,"applicationStorageDirectory") ) { applicationStorageDirectory=ioValue.Cast< ::String >(); return true; }
	}
	return false;
}

#if HXCPP_SCRIPTABLE
static hx::StorageInfo *sMemberStorageInfo = 0;
static hx::StaticInfo sStaticStorageInfo[] = {
	{hx::fsString,(void *) &System_obj::applicationDirectory,HX_HCSTRING("applicationDirectory","\xfd","\x3c","\x71","\x25")},
	{hx::fsString,(void *) &System_obj::applicationStorageDirectory,HX_HCSTRING("applicationStorageDirectory","\x22","\xdb","\xb5","\xb1")},
	{hx::fsString,(void *) &System_obj::desktopDirectory,HX_HCSTRING("desktopDirectory","\xf1","\x70","\x41","\xaf")},
	{hx::fsBool,(void *) &System_obj::disableCFFI,HX_HCSTRING("disableCFFI","\x8e","\x24","\xb6","\x11")},
	{hx::fsString,(void *) &System_obj::documentsDirectory,HX_HCSTRING("documentsDirectory","\x55","\xaa","\xb4","\x36")},
	{hx::fsObject /*::lime::_system::Endian*/ ,(void *) &System_obj::endianness,HX_HCSTRING("endianness","\xb2","\x02","\xd3","\x4e")},
	{hx::fsString,(void *) &System_obj::fontsDirectory,HX_HCSTRING("fontsDirectory","\x09","\x02","\x1b","\x88")},
	{hx::fsInt,(void *) &System_obj::numDisplays,HX_HCSTRING("numDisplays","\x57","\x20","\xb1","\x11")},
	{hx::fsString,(void *) &System_obj::userDirectory,HX_HCSTRING("userDirectory","\xa2","\x1e","\xf9","\x94")},
	{hx::fsObject /*::haxe::ds::StringMap*/ ,(void *) &System_obj::__applicationConfig,HX_HCSTRING("__applicationConfig","\x12","\xfb","\x1c","\xf1")},
	{hx::fsObject /*::haxe::ds::StringMap*/ ,(void *) &System_obj::__applicationEntryPoint,HX_HCSTRING("__applicationEntryPoint","\xce","\xda","\xed","\x08")},
	{hx::fsObject /*::haxe::ds::IntMap*/ ,(void *) &System_obj::__directories,HX_HCSTRING("__directories","\xeb","\x9c","\xa4","\xa9")},
	{ hx::fsUnknown, 0, null()}
};
#endif

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(System_obj::__mClass,"__mClass");
	HX_MARK_MEMBER_NAME(System_obj::applicationDirectory,"applicationDirectory");
	HX_MARK_MEMBER_NAME(System_obj::applicationStorageDirectory,"applicationStorageDirectory");
	HX_MARK_MEMBER_NAME(System_obj::desktopDirectory,"desktopDirectory");
	HX_MARK_MEMBER_NAME(System_obj::disableCFFI,"disableCFFI");
	HX_MARK_MEMBER_NAME(System_obj::documentsDirectory,"documentsDirectory");
	HX_MARK_MEMBER_NAME(System_obj::endianness,"endianness");
	HX_MARK_MEMBER_NAME(System_obj::fontsDirectory,"fontsDirectory");
	HX_MARK_MEMBER_NAME(System_obj::numDisplays,"numDisplays");
	HX_MARK_MEMBER_NAME(System_obj::userDirectory,"userDirectory");
	HX_MARK_MEMBER_NAME(System_obj::__applicationConfig,"__applicationConfig");
	HX_MARK_MEMBER_NAME(System_obj::__applicationEntryPoint,"__applicationEntryPoint");
	HX_MARK_MEMBER_NAME(System_obj::__directories,"__directories");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(System_obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(System_obj::applicationDirectory,"applicationDirectory");
	HX_VISIT_MEMBER_NAME(System_obj::applicationStorageDirectory,"applicationStorageDirectory");
	HX_VISIT_MEMBER_NAME(System_obj::desktopDirectory,"desktopDirectory");
	HX_VISIT_MEMBER_NAME(System_obj::disableCFFI,"disableCFFI");
	HX_VISIT_MEMBER_NAME(System_obj::documentsDirectory,"documentsDirectory");
	HX_VISIT_MEMBER_NAME(System_obj::endianness,"endianness");
	HX_VISIT_MEMBER_NAME(System_obj::fontsDirectory,"fontsDirectory");
	HX_VISIT_MEMBER_NAME(System_obj::numDisplays,"numDisplays");
	HX_VISIT_MEMBER_NAME(System_obj::userDirectory,"userDirectory");
	HX_VISIT_MEMBER_NAME(System_obj::__applicationConfig,"__applicationConfig");
	HX_VISIT_MEMBER_NAME(System_obj::__applicationEntryPoint,"__applicationEntryPoint");
	HX_VISIT_MEMBER_NAME(System_obj::__directories,"__directories");
};

#endif

hx::Class System_obj::__mClass;

static ::String sStaticFields[] = {
	HX_HCSTRING("applicationDirectory","\xfd","\x3c","\x71","\x25"),
	HX_HCSTRING("applicationStorageDirectory","\x22","\xdb","\xb5","\xb1"),
	HX_HCSTRING("desktopDirectory","\xf1","\x70","\x41","\xaf"),
	HX_HCSTRING("disableCFFI","\x8e","\x24","\xb6","\x11"),
	HX_HCSTRING("documentsDirectory","\x55","\xaa","\xb4","\x36"),
	HX_HCSTRING("endianness","\xb2","\x02","\xd3","\x4e"),
	HX_HCSTRING("fontsDirectory","\x09","\x02","\x1b","\x88"),
	HX_HCSTRING("numDisplays","\x57","\x20","\xb1","\x11"),
	HX_HCSTRING("userDirectory","\xa2","\x1e","\xf9","\x94"),
	HX_HCSTRING("__applicationConfig","\x12","\xfb","\x1c","\xf1"),
	HX_HCSTRING("__applicationEntryPoint","\xce","\xda","\xed","\x08"),
	HX_HCSTRING("__directories","\xeb","\x9c","\xa4","\xa9"),
	HX_HCSTRING("exit","\x1e","\xf7","\x1d","\x43"),
	HX_HCSTRING("getDisplay","\x4c","\xb0","\xab","\x0a"),
	HX_HCSTRING("getTimer","\x4f","\xcf","\x0c","\x70"),
	HX_HCSTRING("load","\x26","\x9a","\xb7","\x47"),
	HX_HCSTRING("openFile","\x66","\xab","\xf7","\xe4"),
	HX_HCSTRING("openURL","\xc5","\xbd","\x35","\x40"),
	HX_HCSTRING("__copyMissingFields","\x6a","\x22","\xdd","\xa7"),
	HX_HCSTRING("__getDirectory","\x17","\x12","\x5c","\x40"),
	HX_HCSTRING("__registerEntryPoint","\xe1","\x0d","\x46","\xfe"),
	HX_HCSTRING("get_allowScreenTimeout","\x95","\xcf","\x5c","\x6e"),
	HX_HCSTRING("set_allowScreenTimeout","\x09","\x4c","\x08","\xa2"),
	HX_HCSTRING("get_applicationDirectory","\x86","\x5a","\x0d","\x68"),
	HX_HCSTRING("get_applicationStorageDirectory","\xb9","\x70","\x86","\x8d"),
	HX_HCSTRING("get_desktopDirectory","\xfa","\xd5","\xab","\xcd"),
	HX_HCSTRING("get_documentsDirectory","\x9e","\x23","\x49","\x90"),
	HX_HCSTRING("get_fontsDirectory","\xd2","\xe2","\xb4","\x23"),
	HX_HCSTRING("get_numDisplays","\xee","\xd7","\x92","\xd2"),
	HX_HCSTRING("get_userDirectory","\xf9","\x29","\x69","\x9b"),
	HX_HCSTRING("get_endianness","\xfb","\x8a","\xc8","\xc4"),
	::String(null()) };

void System_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("lime.system.System","\x95","\x83","\xbd","\xac");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &System_obj::__GetStatic;
	__mClass->mSetStaticField = &System_obj::__SetStatic;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(sStaticFields);
	__mClass->mMembers = hx::Class_obj::dupFunctions(0 /* sMemberFields */);
	__mClass->mCanCast = hx::TCanCast< System_obj >;
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

void System_obj::__boot()
{
struct _Function_0_1{
	inline static ::haxe::ds::IntMap Block( ){
		{
			::haxe::ds::IntMap tmp = ::haxe::ds::IntMap_obj::__new();
			::haxe::ds::IntMap tmp1 = tmp;
			return tmp1;
		}
		return null();
	}
};
	__directories= _Function_0_1::Block();
}

} // end namespace lime
} // end namespace system
