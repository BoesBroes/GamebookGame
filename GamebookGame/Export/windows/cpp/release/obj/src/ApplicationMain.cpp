#include <hxcpp.h>

#ifndef INCLUDED_ApplicationMain
#include <ApplicationMain.h>
#endif
#ifndef INCLUDED_DocumentClass
#include <DocumentClass.h>
#endif
#ifndef INCLUDED_Main
#include <Main.h>
#endif
#ifndef INCLUDED_ManifestResources
#include <ManifestResources.h>
#endif
#ifndef INCLUDED_Std
#include <Std.h>
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
#ifndef INCLUDED_lime_app_Preloader
#include <lime/app/Preloader.h>
#endif
#ifndef INCLUDED_lime_app__Event_Void_Void
#include <lime/app/_Event_Void_Void.h>
#endif
#ifndef INCLUDED_lime_system_System
#include <lime/system/System.h>
#endif
#ifndef INCLUDED_lime_ui_Window
#include <lime/ui/Window.h>
#endif
#ifndef INCLUDED_lime_utils_AssetLibrary
#include <lime/utils/AssetLibrary.h>
#endif
#ifndef INCLUDED_openfl_display_Application
#include <openfl/display/Application.h>
#endif
#ifndef INCLUDED_openfl_display_DefaultPreloader
#include <openfl/display/DefaultPreloader.h>
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
#ifndef INCLUDED_openfl_display_Preloader
#include <openfl/display/Preloader.h>
#endif
#ifndef INCLUDED_openfl_display_Sprite
#include <openfl/display/Sprite.h>
#endif
#ifndef INCLUDED_openfl_display_Stage
#include <openfl/display/Stage.h>
#endif
#ifndef INCLUDED_openfl_events_ActivityEvent
#include <openfl/events/ActivityEvent.h>
#endif
#ifndef INCLUDED_openfl_events_Event
#include <openfl/events/Event.h>
#endif
#ifndef INCLUDED_openfl_events_EventDispatcher
#include <openfl/events/EventDispatcher.h>
#endif
#ifndef INCLUDED_openfl_events_FullScreenEvent
#include <openfl/events/FullScreenEvent.h>
#endif
#ifndef INCLUDED_openfl_events_IEventDispatcher
#include <openfl/events/IEventDispatcher.h>
#endif

Void ApplicationMain_obj::__construct()
{
	return null();
}

//ApplicationMain_obj::~ApplicationMain_obj() { }

Dynamic ApplicationMain_obj::__CreateEmpty() { return  new ApplicationMain_obj; }
hx::ObjectPtr< ApplicationMain_obj > ApplicationMain_obj::__new()
{  hx::ObjectPtr< ApplicationMain_obj > _result_ = new ApplicationMain_obj();
	_result_->__construct();
	return _result_;}

Dynamic ApplicationMain_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< ApplicationMain_obj > _result_ = new ApplicationMain_obj();
	_result_->__construct();
	return _result_;}

void ApplicationMain_obj::__init__() {
HX_STACK_FRAME("ApplicationMain","__init__",0x62c502d5,"ApplicationMain.__init__","ApplicationMain.hx",227,0x0780ded5)
{
	HX_STACK_LINE(227)
	Dynamic init = hx::ClassOf< ::lime::app::Application >();		HX_STACK_VAR(init,"init");
}
}

Void ApplicationMain_obj::main( ){
{
		HX_STACK_FRAME("ApplicationMain","main",0x93d2f73e,"ApplicationMain.main","ApplicationMain.hx",21,0x0780ded5)
		HX_STACK_LINE(23)
		::String projectName = HX_HCSTRING("Database","\x5b","\x57","\x5d","\x6f");		HX_STACK_VAR(projectName,"projectName");
		struct _Function_1_1{
			inline static Dynamic Block( ){
				HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","ApplicationMain.hx",51,0x0780ded5)
				{
					hx::Anon __result = hx::Anon_obj::Create();
					return __result;
				}
				return null();
			}
		};
		HX_STACK_LINE(51)
		Dynamic tmp = _Function_1_1::Block();		HX_STACK_VAR(tmp,"tmp");
		struct _Function_1_2{
			inline static Dynamic Block( Dynamic &tmp){
				HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","ApplicationMain.hx",37,0x0780ded5)
				{
					hx::Anon __result = hx::Anon_obj::Create();
					__result->Add(HX_HCSTRING("allowHighDPI","\x92","\x07","\xa2","\xb4") , false,false);
					__result->Add(HX_HCSTRING("alwaysOnTop","\x67","\x4d","\x53","\x16") , false,false);
					__result->Add(HX_HCSTRING("antialiasing","\xf4","\x16","\xb3","\x48") , (int)0,false);
					__result->Add(HX_HCSTRING("background","\xee","\x93","\x1d","\x26") , (int)0,false);
					__result->Add(HX_HCSTRING("borderless","\x45","\x46","\x71","\x17") , false,false);
					__result->Add(HX_HCSTRING("depthBuffer","\x63","\x46","\x9e","\x52") , false,false);
					__result->Add(HX_HCSTRING("display","\x42","\x2a","\x4a","\xbb") , (int)0,false);
					__result->Add(HX_HCSTRING("fullscreen","\x3b","\x3a","\xb4","\xf9") , false,false);
					__result->Add(HX_HCSTRING("hardware","\xa8","\xe2","\xd3","\x75") , true,false);
					__result->Add(HX_HCSTRING("height","\xe7","\x07","\x4c","\x02") , (int)480,false);
					__result->Add(HX_HCSTRING("hidden","\x6a","\xff","\x95","\x4c") , null(),false);
					__result->Add(HX_HCSTRING("maximized","\x18","\x0e","\xe1","\xfe") , null(),false);
					__result->Add(HX_HCSTRING("minimized","\x86","\xfb","\x9d","\x28") , null(),false);
					__result->Add(HX_HCSTRING("parameters","\xaa","\xbe","\x7e","\x51") , tmp,false);
					__result->Add(HX_HCSTRING("resizable","\x6b","\x37","\x50","\xa9") , true,false);
					__result->Add(HX_HCSTRING("stencilBuffer","\x1c","\x94","\x39","\x31") , true,false);
					__result->Add(HX_HCSTRING("title","\x98","\x15","\x3b","\x10") , HX_HCSTRING("Gamebook Game","\x17","\xc5","\x52","\xf7"),false);
					__result->Add(HX_HCSTRING("vsync","\xd1","\x2d","\xa8","\x3d") , false,false);
					__result->Add(HX_HCSTRING("width","\x06","\xb6","\x62","\xca") , (int)800,false);
					__result->Add(HX_HCSTRING("x","\x78","\x00","\x00","\x00") , null(),false);
					__result->Add(HX_HCSTRING("y","\x79","\x00","\x00","\x00") , null(),false);
					return __result;
				}
				return null();
			}
		};
		HX_STACK_LINE(37)
		Dynamic tmp1 = _Function_1_2::Block(tmp);		HX_STACK_VAR(tmp1,"tmp1");
		struct _Function_1_3{
			inline static Dynamic Block( Dynamic &tmp1){
				HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","ApplicationMain.hx",25,0x0780ded5)
				{
					hx::Anon __result = hx::Anon_obj::Create();
					__result->Add(HX_HCSTRING("build","\x2e","\xdb","\xea","\xba") , HX_HCSTRING("555","\xd5","\x65","\x28","\x00"),false);
					__result->Add(HX_HCSTRING("company","\x3d","\x15","\x69","\x83") , HX_HCSTRING("L'Jonathanos","\x38","\xd3","\xbc","\x0b"),false);
					__result->Add(HX_HCSTRING("file","\x7c","\xce","\xbb","\x43") , HX_HCSTRING("Database","\x5b","\x57","\x5d","\x6f"),false);
					__result->Add(HX_HCSTRING("fps","\xe9","\xc7","\x4d","\x00") , (int)60,false);
					__result->Add(HX_HCSTRING("name","\x4b","\x72","\xff","\x48") , HX_HCSTRING("Gamebook Game","\x17","\xc5","\x52","\xf7"),false);
					__result->Add(HX_HCSTRING("orientation","\xd0","\xee","\xfe","\xfd") , HX_HCSTRING("landscape","\x3b","\x78","\xad","\xfc"),false);
					__result->Add(HX_HCSTRING("packageName","\xf1","\x04","\xad","\x04") , HX_HCSTRING("GamebookGame","\xcd","\xee","\x24","\x43"),false);
					__result->Add(HX_HCSTRING("version","\x18","\xe7","\xf1","\x7c") , HX_HCSTRING("1.0.0","\xb5","\xd1","\x2e","\x55"),false);
					__result->Add(HX_HCSTRING("windows","\x83","\xde","\x74","\xe8") , cpp::ArrayBase_obj::__new().Add(tmp1),false);
					return __result;
				}
				return null();
			}
		};
		HX_STACK_LINE(25)
		Dynamic tmp2 = _Function_1_3::Block(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(25)
		Dynamic config = tmp2;		HX_STACK_VAR(config,"config");
		HX_STACK_LINE(64)
		::String tmp3 = projectName;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(64)
		Dynamic tmp4 = ::ApplicationMain_obj::create_dyn();		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(64)
		Dynamic tmp5 = config;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(64)
		::lime::_system::System_obj::__registerEntryPoint(tmp3,tmp4,tmp5);
		HX_STACK_LINE(79)
		Dynamic tmp6 = config;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(79)
		::ApplicationMain_obj::create(tmp6);
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(ApplicationMain_obj,main,(void))

Void ApplicationMain_obj::create( Dynamic config){
{
		HX_STACK_FRAME("ApplicationMain","create",0x2f7db141,"ApplicationMain.create","ApplicationMain.hx",85,0x0780ded5)
		HX_STACK_ARG(config,"config")
		HX_STACK_LINE(87)
		::openfl::display::Application tmp = ::openfl::display::Application_obj::__new();		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(87)
		::openfl::display::Application app = tmp;		HX_STACK_VAR(app,"app");
		HX_STACK_LINE(88)
		Dynamic tmp1 = config;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(88)
		app->create(tmp1);
		HX_STACK_LINE(90)
		Dynamic tmp2 = config;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(90)
		::ManifestResources_obj::init(tmp2);
		HX_STACK_LINE(218)
		::openfl::display::Preloader tmp3;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(218)
		{
			HX_STACK_LINE(218)
			::openfl::display::DefaultPreloader tmp4 = ::openfl::display::DefaultPreloader_obj::__new();		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(218)
			tmp3 = ::openfl::display::Preloader_obj::__new(tmp4);
		}
		HX_STACK_LINE(218)
		::openfl::display::Preloader preloader = tmp3;		HX_STACK_VAR(preloader,"preloader");
		HX_STACK_LINE(93)
		::openfl::display::Preloader tmp4 = preloader;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(93)
		app->setPreloader(tmp4);
		HX_STACK_LINE(94)
		Dynamic tmp5 = config;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(94)
		preloader->create(tmp5);
		HX_STACK_LINE(95)
		Dynamic tmp6 = ::ApplicationMain_obj::start_dyn();		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(95)
		::lime::ui::Window tmp7 = app->__windows->__get((int)0).StaticCast< ::lime::ui::Window >();		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(95)
		::openfl::display::Stage tmp8 = tmp7->stage;		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(95)
		Dynamic tmp9;		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(95)
		{
			HX_STACK_LINE(95)
			Dynamic f = tmp6;		HX_STACK_VAR(f,"f");
			HX_STACK_LINE(95)
			::openfl::display::Stage a1 = tmp8;		HX_STACK_VAR(a1,"a1");

			HX_BEGIN_LOCAL_FUNC_S2(hx::LocalFunc,_Function_2_1,::openfl::display::Stage,a1,Dynamic,f)
			int __ArgCount() const { return 0; }
			Void run(){
				HX_STACK_FRAME("*","_Function_2_1",0x5201af78,"*._Function_2_1","ApplicationMain.hx",95,0x0780ded5)
				{
					HX_STACK_LINE(95)
					::openfl::display::Stage tmp10 = a1;		HX_STACK_VAR(tmp10,"tmp10");
					HX_STACK_LINE(95)
					f(tmp10).Cast< Void >();
				}
				return null();
			}
			HX_END_LOCAL_FUNC0((void))

			HX_STACK_LINE(95)
			tmp9 =  Dynamic(new _Function_2_1(a1,f));
		}
		HX_STACK_LINE(95)
		preloader->onComplete->add(tmp9,null(),null());
		HX_STACK_LINE(97)
		{
			HX_STACK_LINE(97)
			int _g = (int)0;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(97)
			Array< ::Dynamic > _g1 = ::ManifestResources_obj::preloadLibraries;		HX_STACK_VAR(_g1,"_g1");
			HX_STACK_LINE(97)
			while((true)){
				HX_STACK_LINE(97)
				bool tmp10 = (_g < _g1->length);		HX_STACK_VAR(tmp10,"tmp10");
				HX_STACK_LINE(97)
				bool tmp11 = !(tmp10);		HX_STACK_VAR(tmp11,"tmp11");
				HX_STACK_LINE(97)
				if ((tmp11)){
					HX_STACK_LINE(97)
					break;
				}
				HX_STACK_LINE(97)
				::lime::utils::AssetLibrary tmp12 = _g1->__get(_g).StaticCast< ::lime::utils::AssetLibrary >();		HX_STACK_VAR(tmp12,"tmp12");
				HX_STACK_LINE(97)
				::lime::utils::AssetLibrary library = tmp12;		HX_STACK_VAR(library,"library");
				HX_STACK_LINE(97)
				++(_g);
				HX_STACK_LINE(99)
				::lime::utils::AssetLibrary tmp13 = library;		HX_STACK_VAR(tmp13,"tmp13");
				HX_STACK_LINE(99)
				preloader->addLibrary(tmp13);
			}
		}
		HX_STACK_LINE(103)
		{
			HX_STACK_LINE(103)
			int _g = (int)0;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(103)
			Array< ::String > _g1 = ::ManifestResources_obj::preloadLibraryNames;		HX_STACK_VAR(_g1,"_g1");
			HX_STACK_LINE(103)
			while((true)){
				HX_STACK_LINE(103)
				bool tmp10 = (_g < _g1->length);		HX_STACK_VAR(tmp10,"tmp10");
				HX_STACK_LINE(103)
				bool tmp11 = !(tmp10);		HX_STACK_VAR(tmp11,"tmp11");
				HX_STACK_LINE(103)
				if ((tmp11)){
					HX_STACK_LINE(103)
					break;
				}
				HX_STACK_LINE(103)
				::String tmp12 = _g1->__get(_g);		HX_STACK_VAR(tmp12,"tmp12");
				HX_STACK_LINE(103)
				::String name = tmp12;		HX_STACK_VAR(name,"name");
				HX_STACK_LINE(103)
				++(_g);
				HX_STACK_LINE(105)
				::String tmp13 = name;		HX_STACK_VAR(tmp13,"tmp13");
				HX_STACK_LINE(105)
				preloader->addLibraryName(tmp13);
			}
		}
		HX_STACK_LINE(109)
		preloader->load();
		HX_STACK_LINE(111)
		int tmp10 = app->exec();		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(111)
		int result = tmp10;		HX_STACK_VAR(result,"result");
		HX_STACK_LINE(114)
		int tmp11 = result;		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(114)
		::lime::_system::System_obj::exit(tmp11);
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(ApplicationMain_obj,create,(void))

Void ApplicationMain_obj::start( ::openfl::display::Stage stage){
{
		HX_STACK_FRAME("ApplicationMain","start",0x45b5d9bd,"ApplicationMain.start","ApplicationMain.hx",128,0x0780ded5)
		HX_STACK_ARG(stage,"stage")
		HX_STACK_LINE(128)
		try
		{
		HX_STACK_CATCHABLE(Dynamic, 0);
		{
			HX_STACK_LINE(183)
			{
				HX_STACK_LINE(185)
				::openfl::display::DisplayObject tmp = stage->getChildAt((int)0);		HX_STACK_VAR(tmp,"tmp");
				HX_STACK_LINE(185)
				::openfl::display::DisplayObject current = tmp;		HX_STACK_VAR(current,"current");
				HX_STACK_LINE(187)
				bool tmp1 = (current == null());		HX_STACK_VAR(tmp1,"tmp1");
				HX_STACK_LINE(187)
				bool tmp2 = !(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
				HX_STACK_LINE(187)
				bool tmp3;		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(187)
				if ((tmp2)){
					HX_STACK_LINE(187)
					::openfl::display::DisplayObject tmp4 = current;		HX_STACK_VAR(tmp4,"tmp4");
					HX_STACK_LINE(187)
					::openfl::display::DisplayObject tmp5 = tmp4;		HX_STACK_VAR(tmp5,"tmp5");
					HX_STACK_LINE(187)
					bool tmp6 = ::Std_obj::is(tmp5,hx::ClassOf< ::openfl::display::DisplayObjectContainer >());		HX_STACK_VAR(tmp6,"tmp6");
					HX_STACK_LINE(187)
					bool tmp7 = tmp6;		HX_STACK_VAR(tmp7,"tmp7");
					HX_STACK_LINE(187)
					bool tmp8 = tmp7;		HX_STACK_VAR(tmp8,"tmp8");
					HX_STACK_LINE(187)
					tmp3 = !(tmp8);
				}
				else{
					HX_STACK_LINE(187)
					tmp3 = true;
				}
				HX_STACK_LINE(187)
				if ((tmp3)){
					HX_STACK_LINE(189)
					::openfl::display::MovieClip tmp4 = ::openfl::display::MovieClip_obj::__new();		HX_STACK_VAR(tmp4,"tmp4");
					HX_STACK_LINE(189)
					current = tmp4;
					HX_STACK_LINE(190)
					::openfl::display::DisplayObject tmp5 = current;		HX_STACK_VAR(tmp5,"tmp5");
					HX_STACK_LINE(190)
					stage->addChild(tmp5);
				}
				HX_STACK_LINE(194)
				::DocumentClass_obj::__new(((::openfl::display::DisplayObjectContainer)(current)));
			}
			HX_STACK_LINE(132)
			::openfl::events::Event tmp = ::openfl::events::Event_obj::__new(HX_HCSTRING("resize","\xf4","\x59","\x7b","\x08"),false,false);		HX_STACK_VAR(tmp,"tmp");
			HX_STACK_LINE(132)
			stage->dispatchEvent(tmp);
			HX_STACK_LINE(134)
			bool tmp1 = stage->window->__fullscreen;		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(134)
			if ((tmp1)){
				HX_STACK_LINE(136)
				::openfl::events::FullScreenEvent tmp2 = ::openfl::events::FullScreenEvent_obj::__new(HX_HCSTRING("fullScreen","\x5b","\xae","\x48","\x2e"),false,false,true,true);		HX_STACK_VAR(tmp2,"tmp2");
				HX_STACK_LINE(136)
				stage->dispatchEvent(tmp2);
			}
		}
		}
		catch(Dynamic __e){
			{
				HX_STACK_BEGIN_CATCH
				Dynamic e = __e;{
					HX_STACK_LINE(143)
					Dynamic tmp = e;		HX_STACK_VAR(tmp,"tmp");
					HX_STACK_LINE(143)
					stage->__handleError(tmp);
				}
			}
		}
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(ApplicationMain_obj,start,(void))


ApplicationMain_obj::ApplicationMain_obj()
{
}

bool ApplicationMain_obj::__GetStatic(const ::String &inName, Dynamic &outValue, hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"main") ) { outValue = main_dyn(); return true;  }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"start") ) { outValue = start_dyn(); return true;  }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"create") ) { outValue = create_dyn(); return true;  }
	}
	return false;
}

#if HXCPP_SCRIPTABLE
static hx::StorageInfo *sMemberStorageInfo = 0;
static hx::StaticInfo *sStaticStorageInfo = 0;
#endif

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(ApplicationMain_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(ApplicationMain_obj::__mClass,"__mClass");
};

#endif

hx::Class ApplicationMain_obj::__mClass;

static ::String sStaticFields[] = {
	HX_HCSTRING("main","\x39","\x38","\x56","\x48"),
	HX_HCSTRING("create","\xfc","\x66","\x0f","\x7c"),
	HX_HCSTRING("start","\x62","\x74","\x0b","\x84"),
	::String(null()) };

void ApplicationMain_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("ApplicationMain","\x89","\xff","\x39","\x4a");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &ApplicationMain_obj::__GetStatic;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(sStaticFields);
	__mClass->mMembers = hx::Class_obj::dupFunctions(0 /* sMemberFields */);
	__mClass->mCanCast = hx::TCanCast< ApplicationMain_obj >;
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

