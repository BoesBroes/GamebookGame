#include <hxcpp.h>

#ifndef INCLUDED_Std
#include <Std.h>
#endif
#ifndef INCLUDED_lime_app_IModule
#include <lime/app/IModule.h>
#endif
#ifndef INCLUDED_lime_ui_Window
#include <lime/ui/Window.h>
#endif
#ifndef INCLUDED_openfl_Lib
#include <openfl/Lib.h>
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
#ifndef INCLUDED_openfl_display_Graphics
#include <openfl/display/Graphics.h>
#endif
#ifndef INCLUDED_openfl_display_IBitmapDrawable
#include <openfl/display/IBitmapDrawable.h>
#endif
#ifndef INCLUDED_openfl_display_InteractiveObject
#include <openfl/display/InteractiveObject.h>
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
#ifndef INCLUDED_openfl_display_Stage
#include <openfl/display/Stage.h>
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
#ifndef INCLUDED_openfl_events_ProgressEvent
#include <openfl/events/ProgressEvent.h>
#endif
namespace openfl{
namespace display{

Void DefaultPreloader_obj::__construct()
{
HX_STACK_FRAME("openfl.display.DefaultPreloader","new",0xd9ecb051,"openfl.display.DefaultPreloader.new","openfl/display/Preloader.hx",133,0xc399db74)
HX_STACK_THIS(this)
{
	HX_STACK_LINE(135)
	super::__construct();
	HX_STACK_LINE(137)
	int tmp = this->getBackgroundColor();		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(137)
	int backgroundColor = tmp;		HX_STACK_VAR(backgroundColor,"backgroundColor");
	HX_STACK_LINE(138)
	int tmp1 = (int(backgroundColor) >> int((int)16));		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(138)
	int tmp2 = (int(tmp1) & int((int)255));		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(138)
	int r = tmp2;		HX_STACK_VAR(r,"r");
	HX_STACK_LINE(139)
	int tmp3 = (int(backgroundColor) >> int((int)8));		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(139)
	int tmp4 = (int(tmp3) & int((int)255));		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(139)
	int g = tmp4;		HX_STACK_VAR(g,"g");
	HX_STACK_LINE(140)
	int tmp5 = (int(backgroundColor) & int((int)255));		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(140)
	int b = tmp5;		HX_STACK_VAR(b,"b");
	HX_STACK_LINE(141)
	Float tmp6 = (((Float)0.299) * r);		HX_STACK_VAR(tmp6,"tmp6");
	HX_STACK_LINE(141)
	Float tmp7 = (((Float)0.587) * g);		HX_STACK_VAR(tmp7,"tmp7");
	HX_STACK_LINE(141)
	Float tmp8 = (tmp6 + tmp7);		HX_STACK_VAR(tmp8,"tmp8");
	HX_STACK_LINE(141)
	Float tmp9 = (((Float)0.114) * b);		HX_STACK_VAR(tmp9,"tmp9");
	HX_STACK_LINE(141)
	Float tmp10 = (tmp8 + tmp9);		HX_STACK_VAR(tmp10,"tmp10");
	HX_STACK_LINE(141)
	Float perceivedLuminosity = tmp10;		HX_STACK_VAR(perceivedLuminosity,"perceivedLuminosity");
	HX_STACK_LINE(142)
	int color = (int)0;		HX_STACK_VAR(color,"color");
	HX_STACK_LINE(144)
	bool tmp11 = (perceivedLuminosity < (int)70);		HX_STACK_VAR(tmp11,"tmp11");
	HX_STACK_LINE(144)
	if ((tmp11)){
		HX_STACK_LINE(146)
		color = (int)16777215;
	}
	HX_STACK_LINE(150)
	int x = (int)30;		HX_STACK_VAR(x,"x");
	HX_STACK_LINE(151)
	int height = (int)7;		HX_STACK_VAR(height,"height");
	HX_STACK_LINE(152)
	Float tmp12 = this->getHeight();		HX_STACK_VAR(tmp12,"tmp12");
	HX_STACK_LINE(152)
	Float tmp13 = (Float(tmp12) / Float((int)2));		HX_STACK_VAR(tmp13,"tmp13");
	HX_STACK_LINE(152)
	Float tmp14 = (Float(height) / Float((int)2));		HX_STACK_VAR(tmp14,"tmp14");
	HX_STACK_LINE(152)
	Float tmp15 = (tmp13 - tmp14);		HX_STACK_VAR(tmp15,"tmp15");
	HX_STACK_LINE(152)
	Float y = tmp15;		HX_STACK_VAR(y,"y");
	HX_STACK_LINE(153)
	Float tmp16 = this->getWidth();		HX_STACK_VAR(tmp16,"tmp16");
	HX_STACK_LINE(153)
	int tmp17 = (x * (int)2);		HX_STACK_VAR(tmp17,"tmp17");
	HX_STACK_LINE(153)
	Float tmp18 = (tmp16 - tmp17);		HX_STACK_VAR(tmp18,"tmp18");
	HX_STACK_LINE(153)
	Float width = tmp18;		HX_STACK_VAR(width,"width");
	HX_STACK_LINE(155)
	int padding = (int)2;		HX_STACK_VAR(padding,"padding");
	HX_STACK_LINE(157)
	::openfl::display::Sprite tmp19 = ::openfl::display::Sprite_obj::__new();		HX_STACK_VAR(tmp19,"tmp19");
	HX_STACK_LINE(157)
	this->outline = tmp19;
	HX_STACK_LINE(158)
	::openfl::display::Sprite tmp20 = this->outline;		HX_STACK_VAR(tmp20,"tmp20");
	HX_STACK_LINE(158)
	::openfl::display::Graphics tmp21 = tmp20->get_graphics();		HX_STACK_VAR(tmp21,"tmp21");
	HX_STACK_LINE(158)
	int tmp22 = color;		HX_STACK_VAR(tmp22,"tmp22");
	HX_STACK_LINE(158)
	tmp21->beginFill(tmp22,((Float)0.07));
	HX_STACK_LINE(159)
	::openfl::display::Sprite tmp23 = this->outline;		HX_STACK_VAR(tmp23,"tmp23");
	HX_STACK_LINE(159)
	::openfl::display::Graphics tmp24 = tmp23->get_graphics();		HX_STACK_VAR(tmp24,"tmp24");
	HX_STACK_LINE(159)
	Float tmp25 = width;		HX_STACK_VAR(tmp25,"tmp25");
	HX_STACK_LINE(159)
	int tmp26 = height;		HX_STACK_VAR(tmp26,"tmp26");
	HX_STACK_LINE(159)
	tmp24->drawRect((int)0,(int)0,tmp25,tmp26);
	HX_STACK_LINE(160)
	::openfl::display::Sprite tmp27 = this->outline;		HX_STACK_VAR(tmp27,"tmp27");
	HX_STACK_LINE(160)
	int tmp28 = x;		HX_STACK_VAR(tmp28,"tmp28");
	HX_STACK_LINE(160)
	tmp27->set_x(tmp28);
	HX_STACK_LINE(161)
	::openfl::display::Sprite tmp29 = this->outline;		HX_STACK_VAR(tmp29,"tmp29");
	HX_STACK_LINE(161)
	Float tmp30 = y;		HX_STACK_VAR(tmp30,"tmp30");
	HX_STACK_LINE(161)
	tmp29->set_y(tmp30);
	HX_STACK_LINE(162)
	::openfl::display::Sprite tmp31 = this->outline;		HX_STACK_VAR(tmp31,"tmp31");
	HX_STACK_LINE(162)
	tmp31->set_alpha((int)0);
	HX_STACK_LINE(163)
	::openfl::display::Sprite tmp32 = this->outline;		HX_STACK_VAR(tmp32,"tmp32");
	HX_STACK_LINE(163)
	this->addChild(tmp32);
	HX_STACK_LINE(165)
	::openfl::display::Sprite tmp33 = ::openfl::display::Sprite_obj::__new();		HX_STACK_VAR(tmp33,"tmp33");
	HX_STACK_LINE(165)
	this->progress = tmp33;
	HX_STACK_LINE(166)
	::openfl::display::Sprite tmp34 = this->progress;		HX_STACK_VAR(tmp34,"tmp34");
	HX_STACK_LINE(166)
	::openfl::display::Graphics tmp35 = tmp34->get_graphics();		HX_STACK_VAR(tmp35,"tmp35");
	HX_STACK_LINE(166)
	int tmp36 = color;		HX_STACK_VAR(tmp36,"tmp36");
	HX_STACK_LINE(166)
	tmp35->beginFill(tmp36,((Float)0.35));
	HX_STACK_LINE(167)
	::openfl::display::Sprite tmp37 = this->progress;		HX_STACK_VAR(tmp37,"tmp37");
	HX_STACK_LINE(167)
	::openfl::display::Graphics tmp38 = tmp37->get_graphics();		HX_STACK_VAR(tmp38,"tmp38");
	HX_STACK_LINE(167)
	Float tmp39 = width;		HX_STACK_VAR(tmp39,"tmp39");
	HX_STACK_LINE(167)
	int tmp40 = (padding * (int)2);		HX_STACK_VAR(tmp40,"tmp40");
	HX_STACK_LINE(167)
	Float tmp41 = (tmp39 - tmp40);		HX_STACK_VAR(tmp41,"tmp41");
	HX_STACK_LINE(167)
	int tmp42 = height;		HX_STACK_VAR(tmp42,"tmp42");
	HX_STACK_LINE(167)
	int tmp43 = (padding * (int)2);		HX_STACK_VAR(tmp43,"tmp43");
	HX_STACK_LINE(167)
	int tmp44 = (tmp42 - tmp43);		HX_STACK_VAR(tmp44,"tmp44");
	HX_STACK_LINE(167)
	tmp38->drawRect((int)0,(int)0,tmp41,tmp44);
	HX_STACK_LINE(168)
	::openfl::display::Sprite tmp45 = this->progress;		HX_STACK_VAR(tmp45,"tmp45");
	HX_STACK_LINE(168)
	int tmp46 = (x + padding);		HX_STACK_VAR(tmp46,"tmp46");
	HX_STACK_LINE(168)
	tmp45->set_x(tmp46);
	HX_STACK_LINE(169)
	::openfl::display::Sprite tmp47 = this->progress;		HX_STACK_VAR(tmp47,"tmp47");
	HX_STACK_LINE(169)
	Float tmp48 = (y + padding);		HX_STACK_VAR(tmp48,"tmp48");
	HX_STACK_LINE(169)
	tmp47->set_y(tmp48);
	HX_STACK_LINE(170)
	::openfl::display::Sprite tmp49 = this->progress;		HX_STACK_VAR(tmp49,"tmp49");
	HX_STACK_LINE(170)
	tmp49->set_scaleX((int)0);
	HX_STACK_LINE(171)
	::openfl::display::Sprite tmp50 = this->progress;		HX_STACK_VAR(tmp50,"tmp50");
	HX_STACK_LINE(171)
	tmp50->set_alpha((int)0);
	HX_STACK_LINE(172)
	::openfl::display::Sprite tmp51 = this->progress;		HX_STACK_VAR(tmp51,"tmp51");
	HX_STACK_LINE(172)
	this->addChild(tmp51);
	HX_STACK_LINE(174)
	int tmp52 = ::openfl::Lib_obj::getTimer();		HX_STACK_VAR(tmp52,"tmp52");
	HX_STACK_LINE(174)
	int tmp53 = (tmp52 + (int)100);		HX_STACK_VAR(tmp53,"tmp53");
	HX_STACK_LINE(174)
	this->startAnimation = tmp53;
	HX_STACK_LINE(175)
	int tmp54 = this->startAnimation;		HX_STACK_VAR(tmp54,"tmp54");
	HX_STACK_LINE(175)
	int tmp55 = (tmp54 + (int)1000);		HX_STACK_VAR(tmp55,"tmp55");
	HX_STACK_LINE(175)
	this->endAnimation = tmp55;
	HX_STACK_LINE(177)
	Dynamic tmp56 = this->this_onAddedToStage_dyn();		HX_STACK_VAR(tmp56,"tmp56");
	HX_STACK_LINE(177)
	this->addEventListener(HX_HCSTRING("addedToStage","\x63","\x22","\x55","\x0c"),tmp56,null(),null(),null());
}
;
	return null();
}

//DefaultPreloader_obj::~DefaultPreloader_obj() { }

Dynamic DefaultPreloader_obj::__CreateEmpty() { return  new DefaultPreloader_obj; }
hx::ObjectPtr< DefaultPreloader_obj > DefaultPreloader_obj::__new()
{  hx::ObjectPtr< DefaultPreloader_obj > _result_ = new DefaultPreloader_obj();
	_result_->__construct();
	return _result_;}

Dynamic DefaultPreloader_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< DefaultPreloader_obj > _result_ = new DefaultPreloader_obj();
	_result_->__construct();
	return _result_;}

int DefaultPreloader_obj::getBackgroundColor( ){
	HX_STACK_FRAME("openfl.display.DefaultPreloader","getBackgroundColor",0xe99da5ce,"openfl.display.DefaultPreloader.getBackgroundColor","openfl/display/Preloader.hx",182,0xc399db74)
	HX_STACK_THIS(this)
	HX_STACK_LINE(184)
	::openfl::display::MovieClip tmp = ::openfl::Lib_obj::current;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(184)
	::lime::ui::Window tmp1 = tmp->stage->window;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(184)
	Dynamic tmp2 = tmp1->config->__Field(HX_HCSTRING("background","\xee","\x93","\x1d","\x26"), hx::paccDynamic );		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(184)
	return tmp2;
}


HX_DEFINE_DYNAMIC_FUNC0(DefaultPreloader_obj,getBackgroundColor,return )

Float DefaultPreloader_obj::getHeight( ){
	HX_STACK_FRAME("openfl.display.DefaultPreloader","getHeight",0xf2617bce,"openfl.display.DefaultPreloader.getHeight","openfl/display/Preloader.hx",189,0xc399db74)
	HX_STACK_THIS(this)
	HX_STACK_LINE(191)
	::openfl::display::MovieClip tmp = ::openfl::Lib_obj::current;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(191)
	::lime::ui::Window tmp1 = tmp->stage->window;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(191)
	Dynamic tmp2 = tmp1->config->__Field(HX_HCSTRING("height","\xe7","\x07","\x4c","\x02"), hx::paccDynamic );		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(191)
	Dynamic height = tmp2;		HX_STACK_VAR(height,"height");
	HX_STACK_LINE(193)
	bool tmp3 = (height > (int)0);		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(193)
	if ((tmp3)){
		HX_STACK_LINE(195)
		Dynamic tmp4 = height;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(195)
		return tmp4;
	}
	else{
		HX_STACK_LINE(199)
		::openfl::display::MovieClip tmp4 = ::openfl::Lib_obj::current;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(199)
		int tmp5 = tmp4->stage->stageHeight;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(199)
		return tmp5;
	}
	HX_STACK_LINE(193)
	return ((Float)0.);
}


HX_DEFINE_DYNAMIC_FUNC0(DefaultPreloader_obj,getHeight,return )

Float DefaultPreloader_obj::getWidth( ){
	HX_STACK_FRAME("openfl.display.DefaultPreloader","getWidth",0x7b1a7bff,"openfl.display.DefaultPreloader.getWidth","openfl/display/Preloader.hx",206,0xc399db74)
	HX_STACK_THIS(this)
	HX_STACK_LINE(208)
	::openfl::display::MovieClip tmp = ::openfl::Lib_obj::current;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(208)
	::lime::ui::Window tmp1 = tmp->stage->window;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(208)
	Dynamic tmp2 = tmp1->config->__Field(HX_HCSTRING("width","\x06","\xb6","\x62","\xca"), hx::paccDynamic );		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(208)
	Dynamic width = tmp2;		HX_STACK_VAR(width,"width");
	HX_STACK_LINE(210)
	bool tmp3 = (width > (int)0);		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(210)
	if ((tmp3)){
		HX_STACK_LINE(212)
		Dynamic tmp4 = width;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(212)
		return tmp4;
	}
	else{
		HX_STACK_LINE(216)
		::openfl::display::MovieClip tmp4 = ::openfl::Lib_obj::current;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(216)
		int tmp5 = tmp4->stage->stageWidth;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(216)
		return tmp5;
	}
	HX_STACK_LINE(210)
	return ((Float)0.);
}


HX_DEFINE_DYNAMIC_FUNC0(DefaultPreloader_obj,getWidth,return )

Void DefaultPreloader_obj::onInit( ){
{
		HX_STACK_FRAME("openfl.display.DefaultPreloader","onInit",0x238e307e,"openfl.display.DefaultPreloader.onInit","openfl/display/Preloader.hx",223,0xc399db74)
		HX_STACK_THIS(this)
		HX_STACK_LINE(225)
		Dynamic tmp = this->this_onEnterFrame_dyn();		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(225)
		this->addEventListener(HX_HCSTRING("enterFrame","\xf5","\x03","\x50","\x02"),tmp,null(),null(),null());
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(DefaultPreloader_obj,onInit,(void))

Void DefaultPreloader_obj::onLoaded( ){
{
		HX_STACK_FRAME("openfl.display.DefaultPreloader","onLoaded",0x88fcf4f3,"openfl.display.DefaultPreloader.onLoaded","openfl/display/Preloader.hx",230,0xc399db74)
		HX_STACK_THIS(this)
		HX_STACK_LINE(232)
		Dynamic tmp = this->this_onEnterFrame_dyn();		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(232)
		this->removeEventListener(HX_HCSTRING("enterFrame","\xf5","\x03","\x50","\x02"),tmp,null());
		HX_STACK_LINE(234)
		::openfl::events::Event tmp1 = ::openfl::events::Event_obj::__new(HX_HCSTRING("unload","\xff","\xa0","\x8c","\x65"),null(),null());		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(234)
		this->dispatchEvent(tmp1);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(DefaultPreloader_obj,onLoaded,(void))

Void DefaultPreloader_obj::onUpdate( int bytesLoaded,int bytesTotal){
{
		HX_STACK_FRAME("openfl.display.DefaultPreloader","onUpdate",0xb79332f7,"openfl.display.DefaultPreloader.onUpdate","openfl/display/Preloader.hx",239,0xc399db74)
		HX_STACK_THIS(this)
		HX_STACK_ARG(bytesLoaded,"bytesLoaded")
		HX_STACK_ARG(bytesTotal,"bytesTotal")
		HX_STACK_LINE(241)
		Float percentLoaded = ((Float)0.0);		HX_STACK_VAR(percentLoaded,"percentLoaded");
		HX_STACK_LINE(243)
		bool tmp = (bytesTotal > (int)0);		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(243)
		if ((tmp)){
			HX_STACK_LINE(245)
			Float tmp1 = (Float(bytesLoaded) / Float(bytesTotal));		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(245)
			percentLoaded = tmp1;
			HX_STACK_LINE(247)
			bool tmp2 = (percentLoaded > (int)1);		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(247)
			if ((tmp2)){
				HX_STACK_LINE(249)
				percentLoaded = (int)1;
			}
		}
		HX_STACK_LINE(255)
		::openfl::display::Sprite tmp1 = this->progress;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(255)
		Float tmp2 = percentLoaded;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(255)
		tmp1->set_scaleX(tmp2);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(DefaultPreloader_obj,onUpdate,(void))

Void DefaultPreloader_obj::this_onAddedToStage( ::openfl::events::Event event){
{
		HX_STACK_FRAME("openfl.display.DefaultPreloader","this_onAddedToStage",0xa7de3014,"openfl.display.DefaultPreloader.this_onAddedToStage","openfl/display/Preloader.hx",267,0xc399db74)
		HX_STACK_THIS(this)
		HX_STACK_ARG(event,"event")
		HX_STACK_LINE(269)
		Dynamic tmp = this->this_onAddedToStage_dyn();		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(269)
		this->removeEventListener(HX_HCSTRING("addedToStage","\x63","\x22","\x55","\x0c"),tmp,null());
		HX_STACK_LINE(271)
		this->onInit();
		HX_STACK_LINE(272)
		::openfl::display::LoaderInfo tmp1 = this->get_loaderInfo();		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(272)
		int tmp2 = tmp1->bytesLoaded;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(272)
		::openfl::display::LoaderInfo tmp3 = this->get_loaderInfo();		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(272)
		int tmp4 = tmp3->bytesTotal;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(272)
		this->onUpdate(tmp2,tmp4);
		HX_STACK_LINE(274)
		Dynamic tmp5 = this->this_onProgress_dyn();		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(274)
		this->addEventListener(HX_HCSTRING("progress","\xad","\xf7","\x2a","\x86"),tmp5,null(),null(),null());
		HX_STACK_LINE(275)
		Dynamic tmp6 = this->this_onComplete_dyn();		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(275)
		this->addEventListener(HX_HCSTRING("complete","\xb9","\x00","\xc8","\x7f"),tmp6,null(),null(),null());
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(DefaultPreloader_obj,this_onAddedToStage,(void))

Void DefaultPreloader_obj::this_onComplete( ::openfl::events::Event event){
{
		HX_STACK_FRAME("openfl.display.DefaultPreloader","this_onComplete",0x228a21ea,"openfl.display.DefaultPreloader.this_onComplete","openfl/display/Preloader.hx",280,0xc399db74)
		HX_STACK_THIS(this)
		HX_STACK_ARG(event,"event")
		HX_STACK_LINE(282)
		event->preventDefault();
		HX_STACK_LINE(284)
		Dynamic tmp = this->this_onProgress_dyn();		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(284)
		this->removeEventListener(HX_HCSTRING("progress","\xad","\xf7","\x2a","\x86"),tmp,null());
		HX_STACK_LINE(285)
		Dynamic tmp1 = this->this_onComplete_dyn();		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(285)
		this->removeEventListener(HX_HCSTRING("complete","\xb9","\x00","\xc8","\x7f"),tmp1,null());
		HX_STACK_LINE(287)
		this->onLoaded();
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(DefaultPreloader_obj,this_onComplete,(void))

Void DefaultPreloader_obj::this_onEnterFrame( ::openfl::events::Event event){
{
		HX_STACK_FRAME("openfl.display.DefaultPreloader","this_onEnterFrame",0x72c19366,"openfl.display.DefaultPreloader.this_onEnterFrame","openfl/display/Preloader.hx",292,0xc399db74)
		HX_STACK_THIS(this)
		HX_STACK_ARG(event,"event")
		HX_STACK_LINE(294)
		int tmp = ::openfl::Lib_obj::getTimer();		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(294)
		int tmp1 = this->startAnimation;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(294)
		int tmp2 = (tmp - tmp1);		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(294)
		int elapsed = tmp2;		HX_STACK_VAR(elapsed,"elapsed");
		HX_STACK_LINE(295)
		int tmp3 = this->endAnimation;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(295)
		int tmp4 = this->startAnimation;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(295)
		int tmp5 = (tmp3 - tmp4);		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(295)
		int total = tmp5;		HX_STACK_VAR(total,"total");
		HX_STACK_LINE(297)
		Float tmp6 = (Float(elapsed) / Float(total));		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(297)
		Float percent = tmp6;		HX_STACK_VAR(percent,"percent");
		HX_STACK_LINE(299)
		bool tmp7 = (percent < (int)0);		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(299)
		if ((tmp7)){
			HX_STACK_LINE(299)
			percent = (int)0;
		}
		HX_STACK_LINE(300)
		bool tmp8 = (percent > (int)1);		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(300)
		if ((tmp8)){
			HX_STACK_LINE(300)
			percent = (int)1;
		}
		HX_STACK_LINE(302)
		::openfl::display::Sprite tmp9 = this->outline;		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(302)
		Float tmp10 = percent;		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(302)
		tmp9->set_alpha(tmp10);
		HX_STACK_LINE(303)
		::openfl::display::Sprite tmp11 = this->progress;		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(303)
		Float tmp12 = percent;		HX_STACK_VAR(tmp12,"tmp12");
		HX_STACK_LINE(303)
		tmp11->set_alpha(tmp12);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(DefaultPreloader_obj,this_onEnterFrame,(void))

Void DefaultPreloader_obj::this_onProgress( ::openfl::events::ProgressEvent event){
{
		HX_STACK_FRAME("openfl.display.DefaultPreloader","this_onProgress",0x28ed18de,"openfl.display.DefaultPreloader.this_onProgress","openfl/display/Preloader.hx",308,0xc399db74)
		HX_STACK_THIS(this)
		HX_STACK_ARG(event,"event")
		HX_STACK_LINE(310)
		Float tmp = event->bytesLoaded;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(310)
		int tmp1 = ::Std_obj::_int(tmp);		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(310)
		Float tmp2 = event->bytesTotal;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(310)
		int tmp3 = ::Std_obj::_int(tmp2);		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(310)
		this->onUpdate(tmp1,tmp3);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(DefaultPreloader_obj,this_onProgress,(void))


DefaultPreloader_obj::DefaultPreloader_obj()
{
}

void DefaultPreloader_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(DefaultPreloader);
	HX_MARK_MEMBER_NAME(endAnimation,"endAnimation");
	HX_MARK_MEMBER_NAME(outline,"outline");
	HX_MARK_MEMBER_NAME(progress,"progress");
	HX_MARK_MEMBER_NAME(startAnimation,"startAnimation");
	::openfl::display::Sprite_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void DefaultPreloader_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(endAnimation,"endAnimation");
	HX_VISIT_MEMBER_NAME(outline,"outline");
	HX_VISIT_MEMBER_NAME(progress,"progress");
	HX_VISIT_MEMBER_NAME(startAnimation,"startAnimation");
	::openfl::display::Sprite_obj::__Visit(HX_VISIT_ARG);
}

Dynamic DefaultPreloader_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 6:
		if (HX_FIELD_EQ(inName,"onInit") ) { return onInit_dyn(); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"outline") ) { return outline; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"progress") ) { return progress; }
		if (HX_FIELD_EQ(inName,"getWidth") ) { return getWidth_dyn(); }
		if (HX_FIELD_EQ(inName,"onLoaded") ) { return onLoaded_dyn(); }
		if (HX_FIELD_EQ(inName,"onUpdate") ) { return onUpdate_dyn(); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"getHeight") ) { return getHeight_dyn(); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"endAnimation") ) { return endAnimation; }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"startAnimation") ) { return startAnimation; }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"this_onComplete") ) { return this_onComplete_dyn(); }
		if (HX_FIELD_EQ(inName,"this_onProgress") ) { return this_onProgress_dyn(); }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"this_onEnterFrame") ) { return this_onEnterFrame_dyn(); }
		break;
	case 18:
		if (HX_FIELD_EQ(inName,"getBackgroundColor") ) { return getBackgroundColor_dyn(); }
		break;
	case 19:
		if (HX_FIELD_EQ(inName,"this_onAddedToStage") ) { return this_onAddedToStage_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic DefaultPreloader_obj::__SetField(const ::String &inName,const Dynamic &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 7:
		if (HX_FIELD_EQ(inName,"outline") ) { outline=inValue.Cast< ::openfl::display::Sprite >(); return inValue; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"progress") ) { progress=inValue.Cast< ::openfl::display::Sprite >(); return inValue; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"endAnimation") ) { endAnimation=inValue.Cast< int >(); return inValue; }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"startAnimation") ) { startAnimation=inValue.Cast< int >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void DefaultPreloader_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("endAnimation","\xa9","\xf7","\x36","\x5a"));
	outFields->push(HX_HCSTRING("outline","\x82","\x17","\xbe","\xe1"));
	outFields->push(HX_HCSTRING("progress","\xad","\xf7","\x2a","\x86"));
	outFields->push(HX_HCSTRING("startAnimation","\x42","\xbe","\x6f","\x6a"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsInt,(int)offsetof(DefaultPreloader_obj,endAnimation),HX_HCSTRING("endAnimation","\xa9","\xf7","\x36","\x5a")},
	{hx::fsObject /*::openfl::display::Sprite*/ ,(int)offsetof(DefaultPreloader_obj,outline),HX_HCSTRING("outline","\x82","\x17","\xbe","\xe1")},
	{hx::fsObject /*::openfl::display::Sprite*/ ,(int)offsetof(DefaultPreloader_obj,progress),HX_HCSTRING("progress","\xad","\xf7","\x2a","\x86")},
	{hx::fsInt,(int)offsetof(DefaultPreloader_obj,startAnimation),HX_HCSTRING("startAnimation","\x42","\xbe","\x6f","\x6a")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo *sStaticStorageInfo = 0;
#endif

static ::String sMemberFields[] = {
	HX_HCSTRING("endAnimation","\xa9","\xf7","\x36","\x5a"),
	HX_HCSTRING("outline","\x82","\x17","\xbe","\xe1"),
	HX_HCSTRING("progress","\xad","\xf7","\x2a","\x86"),
	HX_HCSTRING("startAnimation","\x42","\xbe","\x6f","\x6a"),
	HX_HCSTRING("getBackgroundColor","\x9f","\xee","\x0c","\xc0"),
	HX_HCSTRING("getHeight","\x1d","\x91","\xa2","\x7e"),
	HX_HCSTRING("getWidth","\x90","\xc5","\x39","\x2a"),
	HX_HCSTRING("onInit","\xcf","\x43","\x45","\xe8"),
	HX_HCSTRING("onLoaded","\x84","\x3e","\x1c","\x38"),
	HX_HCSTRING("onUpdate","\x88","\x7c","\xb2","\x66"),
	HX_HCSTRING("this_onAddedToStage","\x23","\x9e","\xce","\x72"),
	HX_HCSTRING("this_onComplete","\x79","\x9c","\x68","\xed"),
	HX_HCSTRING("this_onEnterFrame","\xb5","\x0f","\x1f","\x8e"),
	HX_HCSTRING("this_onProgress","\x6d","\x93","\xcb","\xf3"),
	::String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(DefaultPreloader_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(DefaultPreloader_obj::__mClass,"__mClass");
};

#endif

hx::Class DefaultPreloader_obj::__mClass;

void DefaultPreloader_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("openfl.display.DefaultPreloader","\xdf","\x33","\x40","\x45");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = hx::Class_obj::dupFunctions(sMemberFields);
	__mClass->mCanCast = hx::TCanCast< DefaultPreloader_obj >;
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
