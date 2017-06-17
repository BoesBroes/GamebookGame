#include <hxcpp.h>

#ifndef INCLUDED_Button
#include <Button.h>
#endif
#ifndef INCLUDED_Database
#include <Database.h>
#endif
#ifndef INCLUDED_Main
#include <Main.h>
#endif
#ifndef INCLUDED_Menu
#include <Menu.h>
#endif
#ifndef INCLUDED_Std
#include <Std.h>
#endif
#ifndef INCLUDED_haxe_Log
#include <haxe/Log.h>
#endif
#ifndef INCLUDED_lime_app_IModule
#include <lime/app/IModule.h>
#endif
#ifndef INCLUDED_motion_Actuate
#include <motion/Actuate.h>
#endif
#ifndef INCLUDED_motion_actuators_GenericActuator
#include <motion/actuators/GenericActuator.h>
#endif
#ifndef INCLUDED_motion_actuators_IGenericActuator
#include <motion/actuators/IGenericActuator.h>
#endif
#ifndef INCLUDED_motion_easing_IEasing
#include <motion/easing/IEasing.h>
#endif
#ifndef INCLUDED_motion_easing_Linear
#include <motion/easing/Linear.h>
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
#ifndef INCLUDED_openfl_events_MouseEvent
#include <openfl/events/MouseEvent.h>
#endif
#ifndef INCLUDED_openfl_system_System
#include <openfl/system/System.h>
#endif
#ifndef INCLUDED_openfl_text_TextField
#include <openfl/text/TextField.h>
#endif
#ifndef INCLUDED_openfl_text_TextFormat
#include <openfl/text/TextFormat.h>
#endif
#ifndef INCLUDED_openfl_utils_Assets
#include <openfl/utils/Assets.h>
#endif
#ifndef INCLUDED_sys_db_Connection
#include <sys/db/Connection.h>
#endif
#ifndef INCLUDED_sys_db_ResultSet
#include <sys/db/ResultSet.h>
#endif

Void Main_obj::__construct()
{
HX_STACK_FRAME("Main","new",0x6616a5cb,"Main.new","Main.hx",34,0x087e5c05)
HX_STACK_THIS(this)
{
	HX_STACK_LINE(37)
	this->stopTimer = false;
	HX_STACK_LINE(76)
	super::__construct();
	HX_STACK_LINE(78)
	this->gamestart();
	HX_STACK_LINE(80)
	::Menu_obj::playMusic(HX_HCSTRING("whiteguy","\x82","\x93","\x30","\x84"));
	HX_STACK_LINE(82)
	this->ToggleFullScreen();
}
;
	return null();
}

//Main_obj::~Main_obj() { }

Dynamic Main_obj::__CreateEmpty() { return  new Main_obj; }
hx::ObjectPtr< Main_obj > Main_obj::__new()
{  hx::ObjectPtr< Main_obj > _result_ = new Main_obj();
	_result_->__construct();
	return _result_;}

Dynamic Main_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< Main_obj > _result_ = new Main_obj();
	_result_->__construct();
	return _result_;}

Void Main_obj::ToggleFullScreen( ){
{
		HX_STACK_FRAME("Main","ToggleFullScreen",0x5060f2e4,"Main.ToggleFullScreen","Main.hx",87,0x087e5c05)
		HX_STACK_THIS(this)
		HX_STACK_LINE(91)
		::openfl::display::MovieClip tmp = ::openfl::Lib_obj::current;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(91)
		Dynamic tmp1 = tmp->stage->get_displayState();		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(91)
		bool tmp2 = (tmp1 != ((Dynamic)((int)1)));		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(91)
		if ((tmp2)){
			HX_STACK_LINE(93)
			::openfl::display::MovieClip tmp3 = ::openfl::Lib_obj::current;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(93)
			tmp3->stage->set_displayState(((Dynamic)((int)1)));
			HX_STACK_LINE(95)
			Float currentWindowWidth;		HX_STACK_VAR(currentWindowWidth,"currentWindowWidth");
			HX_STACK_LINE(96)
			Float currentWindowHeight;		HX_STACK_VAR(currentWindowHeight,"currentWindowHeight");
			HX_STACK_LINE(97)
			Float widthRatio;		HX_STACK_VAR(widthRatio,"widthRatio");
			HX_STACK_LINE(98)
			Float heightRatio;		HX_STACK_VAR(heightRatio,"heightRatio");
			HX_STACK_LINE(101)
			::openfl::display::MovieClip tmp4 = ::openfl::Lib_obj::current;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(101)
			int tmp5 = tmp4->stage->stageWidth;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(101)
			currentWindowWidth = tmp5;
			HX_STACK_LINE(102)
			::openfl::display::MovieClip tmp6 = ::openfl::Lib_obj::current;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(102)
			int tmp7 = tmp6->stage->stageHeight;		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(102)
			currentWindowHeight = tmp7;
			HX_STACK_LINE(103)
			Float tmp8 = (Float(currentWindowWidth) / Float((int)1920));		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(103)
			widthRatio = tmp8;
			HX_STACK_LINE(104)
			Float tmp9 = (Float(currentWindowHeight) / Float((int)1080));		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(104)
			heightRatio = tmp9;
			HX_STACK_LINE(107)
			::openfl::display::Stage tmp10 = this->stage;		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(107)
			Float tmp11 = widthRatio;		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(107)
			tmp10->set_scaleX(tmp11);
			HX_STACK_LINE(108)
			::openfl::display::Stage tmp12 = this->stage;		HX_STACK_VAR(tmp12,"tmp12");
			HX_STACK_LINE(108)
			Float tmp13 = heightRatio;		HX_STACK_VAR(tmp13,"tmp13");
			HX_STACK_LINE(108)
			tmp12->set_scaleY(tmp13);
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(Main_obj,ToggleFullScreen,(void))

Void Main_obj::gamestart( ){
{
		HX_STACK_FRAME("Main","gamestart",0x06822adb,"Main.gamestart","Main.hx",115,0x087e5c05)
		HX_STACK_THIS(this)
		HX_STACK_LINE(117)
		::openfl::display::BitmapData tmp = ::openfl::utils::Assets_obj::getBitmapData(HX_HCSTRING("img/white.png","\x18","\xd0","\x3d","\xc2"),null());		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(117)
		::openfl::display::BitmapData backdropData = tmp;		HX_STACK_VAR(backdropData,"backdropData");
		HX_STACK_LINE(118)
		::openfl::display::Bitmap tmp1 = ::openfl::display::Bitmap_obj::__new(backdropData,null(),null());		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(118)
		::openfl::display::Bitmap backdrop = tmp1;		HX_STACK_VAR(backdrop,"backdrop");
		HX_STACK_LINE(119)
		::openfl::display::Bitmap tmp2 = backdrop;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(119)
		this->addChild(tmp2);
		HX_STACK_LINE(120)
		backdrop->set_scaleX((int)1);
		HX_STACK_LINE(121)
		backdrop->set_scaleY((int)1);
		HX_STACK_LINE(123)
		::Button tmp3 = ::Button_obj::__new(HX_HCSTRING("Start_Button","\xaf","\xef","\x58","\xe9"));		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(123)
		this->startButton = tmp3;
		HX_STACK_LINE(124)
		::Button tmp4 = this->startButton;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(124)
		this->addChild(tmp4);
		HX_STACK_LINE(125)
		::Button tmp5 = this->startButton;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(125)
		tmp5->set_x(((Float)823.5));
		HX_STACK_LINE(126)
		::Button tmp6 = this->startButton;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(126)
		tmp6->set_y((int)350);
		HX_STACK_LINE(127)
		::Button tmp7 = this->startButton;		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(127)
		Dynamic tmp8 = this->startGame_dyn();		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(127)
		tmp7->addEventListener(HX_HCSTRING("click","\x48","\x7c","\x5e","\x48"),tmp8,null(),null(),null());
		HX_STACK_LINE(128)
		::Button tmp9 = this->startButton;		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(128)
		Dynamic tmp10 = this->startRoll_dyn();		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(128)
		tmp9->addEventListener(HX_HCSTRING("rollOver","\x71","\xab","\xa8","\x12"),tmp10,null(),null(),null());
		HX_STACK_LINE(129)
		::Button tmp11 = this->startButton;		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(129)
		Dynamic tmp12 = this->startOut_dyn();		HX_STACK_VAR(tmp12,"tmp12");
		HX_STACK_LINE(129)
		tmp11->addEventListener(HX_HCSTRING("rollOut","\x11","\xf9","\x11","\x5d"),tmp12,null(),null(),null());
		HX_STACK_LINE(131)
		::Button tmp13 = ::Button_obj::__new(HX_HCSTRING("Music_Button","\xcc","\xf1","\x20","\x2e"));		HX_STACK_VAR(tmp13,"tmp13");
		HX_STACK_LINE(131)
		this->musicButton = tmp13;
		HX_STACK_LINE(132)
		::Button tmp14 = this->musicButton;		HX_STACK_VAR(tmp14,"tmp14");
		HX_STACK_LINE(132)
		Dynamic tmp15 = this->OnMusicButton_dyn();		HX_STACK_VAR(tmp15,"tmp15");
		HX_STACK_LINE(132)
		tmp14->addEventListener(HX_HCSTRING("click","\x48","\x7c","\x5e","\x48"),tmp15,null(),null(),null());
		HX_STACK_LINE(133)
		::Button tmp16 = this->musicButton;		HX_STACK_VAR(tmp16,"tmp16");
		HX_STACK_LINE(133)
		this->addChild(tmp16);
		HX_STACK_LINE(134)
		::Button tmp17 = this->musicButton;		HX_STACK_VAR(tmp17,"tmp17");
		HX_STACK_LINE(134)
		tmp17->set_x(((Float)823.5));
		HX_STACK_LINE(135)
		::Button tmp18 = this->musicButton;		HX_STACK_VAR(tmp18,"tmp18");
		HX_STACK_LINE(135)
		tmp18->set_y((int)450);
		HX_STACK_LINE(136)
		::Button tmp19 = this->musicButton;		HX_STACK_VAR(tmp19,"tmp19");
		HX_STACK_LINE(136)
		Dynamic tmp20 = this->musicRoll_dyn();		HX_STACK_VAR(tmp20,"tmp20");
		HX_STACK_LINE(136)
		tmp19->addEventListener(HX_HCSTRING("rollOver","\x71","\xab","\xa8","\x12"),tmp20,null(),null(),null());
		HX_STACK_LINE(137)
		::Button tmp21 = this->musicButton;		HX_STACK_VAR(tmp21,"tmp21");
		HX_STACK_LINE(137)
		Dynamic tmp22 = this->musicOut_dyn();		HX_STACK_VAR(tmp22,"tmp22");
		HX_STACK_LINE(137)
		tmp21->addEventListener(HX_HCSTRING("rollOut","\x11","\xf9","\x11","\x5d"),tmp22,null(),null(),null());
		HX_STACK_LINE(139)
		::Button tmp23 = ::Button_obj::__new(HX_HCSTRING("Leaderboard_Button","\x74","\xaa","\x91","\x55"));		HX_STACK_VAR(tmp23,"tmp23");
		HX_STACK_LINE(139)
		this->leaderboardButton = tmp23;
		HX_STACK_LINE(140)
		::Button tmp24 = this->leaderboardButton;		HX_STACK_VAR(tmp24,"tmp24");
		HX_STACK_LINE(140)
		Dynamic tmp25 = this->OnLeaderboardButton_dyn();		HX_STACK_VAR(tmp25,"tmp25");
		HX_STACK_LINE(140)
		tmp24->addEventListener(HX_HCSTRING("click","\x48","\x7c","\x5e","\x48"),tmp25,null(),null(),null());
		HX_STACK_LINE(141)
		::Button tmp26 = this->leaderboardButton;		HX_STACK_VAR(tmp26,"tmp26");
		HX_STACK_LINE(141)
		this->addChild(tmp26);
		HX_STACK_LINE(142)
		::Button tmp27 = this->leaderboardButton;		HX_STACK_VAR(tmp27,"tmp27");
		HX_STACK_LINE(142)
		tmp27->set_x(((Float)1123.5));
		HX_STACK_LINE(143)
		::Button tmp28 = this->leaderboardButton;		HX_STACK_VAR(tmp28,"tmp28");
		HX_STACK_LINE(143)
		tmp28->set_y((int)350);
		HX_STACK_LINE(144)
		::Button tmp29 = this->leaderboardButton;		HX_STACK_VAR(tmp29,"tmp29");
		HX_STACK_LINE(144)
		Dynamic tmp30 = this->leaderboardRoll_dyn();		HX_STACK_VAR(tmp30,"tmp30");
		HX_STACK_LINE(144)
		tmp29->addEventListener(HX_HCSTRING("rollOver","\x71","\xab","\xa8","\x12"),tmp30,null(),null(),null());
		HX_STACK_LINE(145)
		::Button tmp31 = this->leaderboardButton;		HX_STACK_VAR(tmp31,"tmp31");
		HX_STACK_LINE(145)
		Dynamic tmp32 = this->leaderboardOut_dyn();		HX_STACK_VAR(tmp32,"tmp32");
		HX_STACK_LINE(145)
		tmp31->addEventListener(HX_HCSTRING("rollOut","\x11","\xf9","\x11","\x5d"),tmp32,null(),null(),null());
		HX_STACK_LINE(148)
		::Button tmp33 = ::Button_obj::__new(HX_HCSTRING("Quit_Button","\xa2","\x67","\x34","\x95"));		HX_STACK_VAR(tmp33,"tmp33");
		HX_STACK_LINE(148)
		this->quitButton = tmp33;
		HX_STACK_LINE(149)
		::Button tmp34 = this->quitButton;		HX_STACK_VAR(tmp34,"tmp34");
		HX_STACK_LINE(149)
		this->addChild(tmp34);
		HX_STACK_LINE(150)
		::Button tmp35 = this->quitButton;		HX_STACK_VAR(tmp35,"tmp35");
		HX_STACK_LINE(150)
		tmp35->set_x(((Float)523.5));
		HX_STACK_LINE(151)
		::Button tmp36 = this->quitButton;		HX_STACK_VAR(tmp36,"tmp36");
		HX_STACK_LINE(151)
		tmp36->set_y((int)350);
		HX_STACK_LINE(152)
		::Button tmp37 = this->quitButton;		HX_STACK_VAR(tmp37,"tmp37");
		HX_STACK_LINE(152)
		Dynamic tmp38 = this->OnQuitGame_dyn();		HX_STACK_VAR(tmp38,"tmp38");
		HX_STACK_LINE(152)
		tmp37->addEventListener(HX_HCSTRING("click","\x48","\x7c","\x5e","\x48"),tmp38,null(),null(),null());
		HX_STACK_LINE(153)
		::Button tmp39 = this->quitButton;		HX_STACK_VAR(tmp39,"tmp39");
		HX_STACK_LINE(153)
		Dynamic tmp40 = this->quitRoll_dyn();		HX_STACK_VAR(tmp40,"tmp40");
		HX_STACK_LINE(153)
		tmp39->addEventListener(HX_HCSTRING("rollOver","\x71","\xab","\xa8","\x12"),tmp40,null(),null(),null());
		HX_STACK_LINE(154)
		::Button tmp41 = this->quitButton;		HX_STACK_VAR(tmp41,"tmp41");
		HX_STACK_LINE(154)
		Dynamic tmp42 = this->quitOut_dyn();		HX_STACK_VAR(tmp42,"tmp42");
		HX_STACK_LINE(154)
		tmp41->addEventListener(HX_HCSTRING("rollOut","\x11","\xf9","\x11","\x5d"),tmp42,null(),null(),null());
		HX_STACK_LINE(156)
		::Button tmp43 = ::Button_obj::__new(HX_HCSTRING("Credit_Button","\x78","\x7c","\x42","\x6a"));		HX_STACK_VAR(tmp43,"tmp43");
		HX_STACK_LINE(156)
		this->creditButton = tmp43;
		HX_STACK_LINE(157)
		::Button tmp44 = this->creditButton;		HX_STACK_VAR(tmp44,"tmp44");
		HX_STACK_LINE(157)
		this->addChild(tmp44);
		HX_STACK_LINE(158)
		::Button tmp45 = this->creditButton;		HX_STACK_VAR(tmp45,"tmp45");
		HX_STACK_LINE(158)
		tmp45->set_x(((Float)823.5));
		HX_STACK_LINE(159)
		::Button tmp46 = this->creditButton;		HX_STACK_VAR(tmp46,"tmp46");
		HX_STACK_LINE(159)
		tmp46->set_y((int)550);
		HX_STACK_LINE(160)
		::Button tmp47 = this->creditButton;		HX_STACK_VAR(tmp47,"tmp47");
		HX_STACK_LINE(160)
		Dynamic tmp48 = this->OnCreditGame_dyn();		HX_STACK_VAR(tmp48,"tmp48");
		HX_STACK_LINE(160)
		tmp47->addEventListener(HX_HCSTRING("click","\x48","\x7c","\x5e","\x48"),tmp48,null(),null(),null());
		HX_STACK_LINE(161)
		::Button tmp49 = this->creditButton;		HX_STACK_VAR(tmp49,"tmp49");
		HX_STACK_LINE(161)
		Dynamic tmp50 = this->creditRoll_dyn();		HX_STACK_VAR(tmp50,"tmp50");
		HX_STACK_LINE(161)
		tmp49->addEventListener(HX_HCSTRING("rollOver","\x71","\xab","\xa8","\x12"),tmp50,null(),null(),null());
		HX_STACK_LINE(162)
		::Button tmp51 = this->creditButton;		HX_STACK_VAR(tmp51,"tmp51");
		HX_STACK_LINE(162)
		Dynamic tmp52 = this->creditOut_dyn();		HX_STACK_VAR(tmp52,"tmp52");
		HX_STACK_LINE(162)
		tmp51->addEventListener(HX_HCSTRING("rollOut","\x11","\xf9","\x11","\x5d"),tmp52,null(),null(),null());
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(Main_obj,gamestart,(void))

Void Main_obj::startGame( ::openfl::events::MouseEvent event){
{
		HX_STACK_FRAME("Main","startGame",0xdddba51f,"Main.startGame","Main.hx",168,0x087e5c05)
		HX_STACK_THIS(this)
		HX_STACK_ARG(event,"event")
		HX_STACK_LINE(169)
		this->removeChildren(null(),null());
		HX_STACK_LINE(171)
		::openfl::display::BitmapData tmp = ::openfl::utils::Assets_obj::getBitmapData(HX_HCSTRING("img/whiter.png","\x30","\x2d","\x79","\x2f"),null());		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(171)
		::openfl::display::BitmapData backdropData = tmp;		HX_STACK_VAR(backdropData,"backdropData");
		HX_STACK_LINE(172)
		::openfl::display::Bitmap tmp1 = ::openfl::display::Bitmap_obj::__new(backdropData,null(),null());		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(172)
		::openfl::display::Bitmap backdrop = tmp1;		HX_STACK_VAR(backdrop,"backdrop");
		HX_STACK_LINE(173)
		::openfl::display::Bitmap tmp2 = backdrop;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(173)
		this->addChild(tmp2);
		HX_STACK_LINE(174)
		backdrop->set_scaleX((int)1);
		HX_STACK_LINE(175)
		backdrop->set_scaleY((int)1);
		HX_STACK_LINE(178)
		::openfl::text::TextFormat tmp3 = ::openfl::text::TextFormat_obj::__new(HX_HCSTRING("fonts/PAPYRUS.TTF","\x83","\x91","\xd1","\x4a"),(int)30,(int)-16777216,true,null(),null(),null(),null(),null(),null(),null(),null(),null());		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(178)
		::openfl::text::TextFormat QATextFormat = tmp3;		HX_STACK_VAR(QATextFormat,"QATextFormat");
		HX_STACK_LINE(179)
		::openfl::text::TextFormat tmp4 = ::openfl::text::TextFormat_obj::__new(HX_HCSTRING("fonts/PAPYRUS.TTF","\x83","\x91","\xd1","\x4a"),(int)28,(int)-16777216,true,null(),null(),null(),null(),null(),null(),null(),null(),null());		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(179)
		::openfl::text::TextFormat QATextFormat2 = tmp4;		HX_STACK_VAR(QATextFormat2,"QATextFormat2");
		HX_STACK_LINE(182)
		::sys::db::ResultSet tmp5 = ::Database_obj::getQ1();		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(182)
		::sys::db::ResultSet result = tmp5;		HX_STACK_VAR(result,"result");
		HX_STACK_LINE(183)
		::sys::db::ResultSet tmp6 = result;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(183)
		for(::cpp::FastIterator_obj< Dynamic > *__it = ::cpp::CreateFastIterator< Dynamic >(tmp6);  __it->hasNext(); ){
			Dynamic row = __it->next();
			{
				HX_STACK_LINE(186)
				::String QA = row->__Field(HX_HCSTRING("QA","\xd0","\x46","\x00","\x00"), hx::paccDynamic );		HX_STACK_VAR(QA,"QA");
				HX_STACK_LINE(187)
				::String tmp7 = (HX_HCSTRING("","\x00","\x00","\x00","\x00") + QA);		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(187)
				Dynamic tmp8 = hx::SourceInfo(HX_HCSTRING("Main.hx","\x05","\x5c","\x7e","\x08"),187,HX_HCSTRING("Main","\x59","\x64","\x2f","\x33"),HX_HCSTRING("startGame","\x74","\x6d","\x52","\xfd"));		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(187)
				::haxe::Log_obj::trace(tmp7,tmp8);
				HX_STACK_LINE(189)
				::openfl::text::TextField tmp9 = ::openfl::text::TextField_obj::__new();		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(189)
				this->QADisplay = tmp9;
				HX_STACK_LINE(190)
				::openfl::text::TextField tmp10 = this->QADisplay;		HX_STACK_VAR(tmp10,"tmp10");
				HX_STACK_LINE(190)
				tmp10->set_autoSize(((Dynamic)((int)1)));
				HX_STACK_LINE(191)
				::openfl::text::TextField tmp11 = this->QADisplay;		HX_STACK_VAR(tmp11,"tmp11");
				HX_STACK_LINE(191)
				::openfl::text::TextFormat tmp12 = QATextFormat;		HX_STACK_VAR(tmp12,"tmp12");
				HX_STACK_LINE(191)
				tmp11->set_defaultTextFormat(tmp12);
				HX_STACK_LINE(192)
				::openfl::text::TextField tmp13 = this->QADisplay;		HX_STACK_VAR(tmp13,"tmp13");
				HX_STACK_LINE(192)
				tmp13->set_selectable(false);
				HX_STACK_LINE(193)
				::openfl::text::TextField tmp14 = this->QADisplay;		HX_STACK_VAR(tmp14,"tmp14");
				HX_STACK_LINE(193)
				tmp14->set_border(false);
				HX_STACK_LINE(194)
				::openfl::text::TextField tmp15 = this->QADisplay;		HX_STACK_VAR(tmp15,"tmp15");
				HX_STACK_LINE(194)
				tmp15->set_x((int)300);
				HX_STACK_LINE(195)
				::openfl::text::TextField tmp16 = this->QADisplay;		HX_STACK_VAR(tmp16,"tmp16");
				HX_STACK_LINE(195)
				tmp16->set_y((int)50);
				HX_STACK_LINE(196)
				::openfl::text::TextField tmp17 = this->QADisplay;		HX_STACK_VAR(tmp17,"tmp17");
				HX_STACK_LINE(196)
				::String tmp18 = QA;		HX_STACK_VAR(tmp18,"tmp18");
				HX_STACK_LINE(196)
				::String tmp19 = ::Std_obj::string(tmp18);		HX_STACK_VAR(tmp19,"tmp19");
				HX_STACK_LINE(196)
				tmp17->set_text(tmp19);
				HX_STACK_LINE(197)
				::openfl::text::TextField tmp20 = this->QADisplay;		HX_STACK_VAR(tmp20,"tmp20");
				HX_STACK_LINE(197)
				this->addChild(tmp20);
			}
;
		}
		HX_STACK_LINE(200)
		::sys::db::ResultSet tmp7 = ::Database_obj::getA1();		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(200)
		::sys::db::ResultSet result1 = tmp7;		HX_STACK_VAR(result1,"result1");
		HX_STACK_LINE(201)
		::sys::db::ResultSet tmp8 = result1;		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(201)
		for(::cpp::FastIterator_obj< Dynamic > *__it = ::cpp::CreateFastIterator< Dynamic >(tmp8);  __it->hasNext(); ){
			Dynamic row = __it->next();
			{
				HX_STACK_LINE(204)
				::String creditname = row->__Field(HX_HCSTRING("QA","\xd0","\x46","\x00","\x00"), hx::paccDynamic );		HX_STACK_VAR(creditname,"creditname");
				HX_STACK_LINE(205)
				::String QA = row->__Field(HX_HCSTRING("QA","\xd0","\x46","\x00","\x00"), hx::paccDynamic );		HX_STACK_VAR(QA,"QA");
				HX_STACK_LINE(206)
				::String tmp9 = (HX_HCSTRING("","\x00","\x00","\x00","\x00") + QA);		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(206)
				Dynamic tmp10 = hx::SourceInfo(HX_HCSTRING("Main.hx","\x05","\x5c","\x7e","\x08"),206,HX_HCSTRING("Main","\x59","\x64","\x2f","\x33"),HX_HCSTRING("startGame","\x74","\x6d","\x52","\xfd"));		HX_STACK_VAR(tmp10,"tmp10");
				HX_STACK_LINE(206)
				::haxe::Log_obj::trace(tmp9,tmp10);
				HX_STACK_LINE(208)
				::openfl::text::TextField tmp11 = ::openfl::text::TextField_obj::__new();		HX_STACK_VAR(tmp11,"tmp11");
				HX_STACK_LINE(208)
				this->ADisplay = tmp11;
				HX_STACK_LINE(209)
				::openfl::text::TextField tmp12 = this->ADisplay;		HX_STACK_VAR(tmp12,"tmp12");
				HX_STACK_LINE(209)
				tmp12->set_autoSize(((Dynamic)((int)1)));
				HX_STACK_LINE(210)
				::openfl::text::TextField tmp13 = this->ADisplay;		HX_STACK_VAR(tmp13,"tmp13");
				HX_STACK_LINE(210)
				::openfl::text::TextFormat tmp14 = QATextFormat2;		HX_STACK_VAR(tmp14,"tmp14");
				HX_STACK_LINE(210)
				tmp13->set_defaultTextFormat(tmp14);
				HX_STACK_LINE(211)
				::openfl::text::TextField tmp15 = this->ADisplay;		HX_STACK_VAR(tmp15,"tmp15");
				HX_STACK_LINE(211)
				tmp15->set_selectable(false);
				HX_STACK_LINE(212)
				::openfl::text::TextField tmp16 = this->ADisplay;		HX_STACK_VAR(tmp16,"tmp16");
				HX_STACK_LINE(212)
				tmp16->set_border(false);
				HX_STACK_LINE(213)
				::openfl::text::TextField tmp17 = this->ADisplay;		HX_STACK_VAR(tmp17,"tmp17");
				HX_STACK_LINE(213)
				tmp17->set_x((int)300);
				HX_STACK_LINE(214)
				::openfl::text::TextField tmp18 = this->ADisplay;		HX_STACK_VAR(tmp18,"tmp18");
				HX_STACK_LINE(214)
				tmp18->set_y((int)510);
				HX_STACK_LINE(215)
				::openfl::text::TextField tmp19 = this->ADisplay;		HX_STACK_VAR(tmp19,"tmp19");
				HX_STACK_LINE(215)
				::String tmp20 = QA;		HX_STACK_VAR(tmp20,"tmp20");
				HX_STACK_LINE(215)
				::String tmp21 = ::Std_obj::string(tmp20);		HX_STACK_VAR(tmp21,"tmp21");
				HX_STACK_LINE(215)
				tmp19->set_text(tmp21);
				HX_STACK_LINE(216)
				::openfl::text::TextField tmp22 = this->ADisplay;		HX_STACK_VAR(tmp22,"tmp22");
				HX_STACK_LINE(216)
				this->addChild(tmp22);
				HX_STACK_LINE(217)
				::openfl::text::TextField tmp23 = this->ADisplay;		HX_STACK_VAR(tmp23,"tmp23");
				HX_STACK_LINE(217)
				Dynamic tmp24 = this->OnNextQuest_dyn();		HX_STACK_VAR(tmp24,"tmp24");
				HX_STACK_LINE(217)
				tmp23->addEventListener(HX_HCSTRING("click","\x48","\x7c","\x5e","\x48"),tmp24,null(),null(),null());
				HX_STACK_LINE(218)
				::openfl::text::TextField tmp25 = this->ADisplay;		HX_STACK_VAR(tmp25,"tmp25");
				HX_STACK_LINE(218)
				Dynamic tmp26 = this->ARoll_dyn();		HX_STACK_VAR(tmp26,"tmp26");
				HX_STACK_LINE(218)
				tmp25->addEventListener(HX_HCSTRING("rollOver","\x71","\xab","\xa8","\x12"),tmp26,null(),null(),null());
				HX_STACK_LINE(219)
				::openfl::text::TextField tmp27 = this->ADisplay;		HX_STACK_VAR(tmp27,"tmp27");
				HX_STACK_LINE(219)
				Dynamic tmp28 = this->AOut_dyn();		HX_STACK_VAR(tmp28,"tmp28");
				HX_STACK_LINE(219)
				tmp27->addEventListener(HX_HCSTRING("rollOut","\x11","\xf9","\x11","\x5d"),tmp28,null(),null(),null());
			}
;
		}
		HX_STACK_LINE(222)
		::sys::db::ResultSet tmp9 = ::Database_obj::getA2();		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(222)
		::sys::db::ResultSet result2 = tmp9;		HX_STACK_VAR(result2,"result2");
		HX_STACK_LINE(223)
		::sys::db::ResultSet tmp10 = result2;		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(223)
		for(::cpp::FastIterator_obj< Dynamic > *__it = ::cpp::CreateFastIterator< Dynamic >(tmp10);  __it->hasNext(); ){
			Dynamic row = __it->next();
			{
				HX_STACK_LINE(227)
				::String creditname = row->__Field(HX_HCSTRING("QA","\xd0","\x46","\x00","\x00"), hx::paccDynamic );		HX_STACK_VAR(creditname,"creditname");
				HX_STACK_LINE(228)
				::String QA = row->__Field(HX_HCSTRING("QA","\xd0","\x46","\x00","\x00"), hx::paccDynamic );		HX_STACK_VAR(QA,"QA");
				HX_STACK_LINE(229)
				::String tmp11 = (HX_HCSTRING("","\x00","\x00","\x00","\x00") + QA);		HX_STACK_VAR(tmp11,"tmp11");
				HX_STACK_LINE(229)
				Dynamic tmp12 = hx::SourceInfo(HX_HCSTRING("Main.hx","\x05","\x5c","\x7e","\x08"),229,HX_HCSTRING("Main","\x59","\x64","\x2f","\x33"),HX_HCSTRING("startGame","\x74","\x6d","\x52","\xfd"));		HX_STACK_VAR(tmp12,"tmp12");
				HX_STACK_LINE(229)
				::haxe::Log_obj::trace(tmp11,tmp12);
				HX_STACK_LINE(231)
				::openfl::text::TextField tmp13 = ::openfl::text::TextField_obj::__new();		HX_STACK_VAR(tmp13,"tmp13");
				HX_STACK_LINE(231)
				this->A2Display = tmp13;
				HX_STACK_LINE(232)
				::openfl::text::TextField tmp14 = this->A2Display;		HX_STACK_VAR(tmp14,"tmp14");
				HX_STACK_LINE(232)
				tmp14->set_autoSize(((Dynamic)((int)1)));
				HX_STACK_LINE(233)
				::openfl::text::TextField tmp15 = this->A2Display;		HX_STACK_VAR(tmp15,"tmp15");
				HX_STACK_LINE(233)
				::openfl::text::TextFormat tmp16 = QATextFormat2;		HX_STACK_VAR(tmp16,"tmp16");
				HX_STACK_LINE(233)
				tmp15->set_defaultTextFormat(tmp16);
				HX_STACK_LINE(234)
				::openfl::text::TextField tmp17 = this->A2Display;		HX_STACK_VAR(tmp17,"tmp17");
				HX_STACK_LINE(234)
				tmp17->set_selectable(false);
				HX_STACK_LINE(235)
				::openfl::text::TextField tmp18 = this->A2Display;		HX_STACK_VAR(tmp18,"tmp18");
				HX_STACK_LINE(235)
				tmp18->set_border(false);
				HX_STACK_LINE(236)
				::openfl::text::TextField tmp19 = this->A2Display;		HX_STACK_VAR(tmp19,"tmp19");
				HX_STACK_LINE(236)
				tmp19->set_x((int)300);
				HX_STACK_LINE(237)
				::openfl::text::TextField tmp20 = this->A2Display;		HX_STACK_VAR(tmp20,"tmp20");
				HX_STACK_LINE(237)
				tmp20->set_y((int)610);
				HX_STACK_LINE(238)
				::openfl::text::TextField tmp21 = this->A2Display;		HX_STACK_VAR(tmp21,"tmp21");
				HX_STACK_LINE(238)
				::String tmp22 = QA;		HX_STACK_VAR(tmp22,"tmp22");
				HX_STACK_LINE(238)
				::String tmp23 = ::Std_obj::string(tmp22);		HX_STACK_VAR(tmp23,"tmp23");
				HX_STACK_LINE(238)
				tmp21->set_text(tmp23);
				HX_STACK_LINE(239)
				::openfl::text::TextField tmp24 = this->A2Display;		HX_STACK_VAR(tmp24,"tmp24");
				HX_STACK_LINE(239)
				this->addChild(tmp24);
				HX_STACK_LINE(240)
				::openfl::text::TextField tmp25 = this->A2Display;		HX_STACK_VAR(tmp25,"tmp25");
				HX_STACK_LINE(240)
				Dynamic tmp26 = this->OnBlackButton_dyn();		HX_STACK_VAR(tmp26,"tmp26");
				HX_STACK_LINE(240)
				tmp25->addEventListener(HX_HCSTRING("click","\x48","\x7c","\x5e","\x48"),tmp26,null(),null(),null());
				HX_STACK_LINE(241)
				::openfl::text::TextField tmp27 = this->A2Display;		HX_STACK_VAR(tmp27,"tmp27");
				HX_STACK_LINE(241)
				Dynamic tmp28 = this->A2Roll_dyn();		HX_STACK_VAR(tmp28,"tmp28");
				HX_STACK_LINE(241)
				tmp27->addEventListener(HX_HCSTRING("rollOver","\x71","\xab","\xa8","\x12"),tmp28,null(),null(),null());
				HX_STACK_LINE(242)
				::openfl::text::TextField tmp29 = this->A2Display;		HX_STACK_VAR(tmp29,"tmp29");
				HX_STACK_LINE(242)
				Dynamic tmp30 = this->A2Out_dyn();		HX_STACK_VAR(tmp30,"tmp30");
				HX_STACK_LINE(242)
				tmp29->addEventListener(HX_HCSTRING("rollOut","\x11","\xf9","\x11","\x5d"),tmp30,null(),null(),null());
			}
;
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Main_obj,startGame,(void))

Void Main_obj::OnNextQuest( ::openfl::events::MouseEvent event){
{
		HX_STACK_FRAME("Main","OnNextQuest",0x0aabd91b,"Main.OnNextQuest","Main.hx",250,0x087e5c05)
		HX_STACK_THIS(this)
		HX_STACK_ARG(event,"event")
		HX_STACK_LINE(251)
		this->removeChildren(null(),null());
		HX_STACK_LINE(255)
		::openfl::display::BitmapData tmp = ::openfl::utils::Assets_obj::getBitmapData(HX_HCSTRING("img/whiter.png","\x30","\x2d","\x79","\x2f"),null());		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(255)
		::openfl::display::BitmapData backdropData = tmp;		HX_STACK_VAR(backdropData,"backdropData");
		HX_STACK_LINE(256)
		::openfl::display::Bitmap tmp1 = ::openfl::display::Bitmap_obj::__new(backdropData,null(),null());		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(256)
		::openfl::display::Bitmap backdrop = tmp1;		HX_STACK_VAR(backdrop,"backdrop");
		HX_STACK_LINE(257)
		::openfl::display::Bitmap tmp2 = backdrop;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(257)
		this->addChild(tmp2);
		HX_STACK_LINE(258)
		backdrop->set_scaleX((int)1);
		HX_STACK_LINE(259)
		backdrop->set_scaleY((int)1);
		HX_STACK_LINE(261)
		::openfl::text::TextFormat tmp3 = ::openfl::text::TextFormat_obj::__new(HX_HCSTRING("fonts/PAPYRUS.TTF","\x83","\x91","\xd1","\x4a"),(int)30,(int)-16777216,true,null(),null(),null(),null(),null(),null(),null(),null(),null());		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(261)
		::openfl::text::TextFormat QATextFormat = tmp3;		HX_STACK_VAR(QATextFormat,"QATextFormat");
		HX_STACK_LINE(262)
		::openfl::text::TextFormat tmp4 = ::openfl::text::TextFormat_obj::__new(HX_HCSTRING("fonts/PAPYRUS.TTF","\x83","\x91","\xd1","\x4a"),(int)28,(int)-16777216,true,null(),null(),null(),null(),null(),null(),null(),null(),null());		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(262)
		::openfl::text::TextFormat QATextFormat2 = tmp4;		HX_STACK_VAR(QATextFormat2,"QATextFormat2");
		HX_STACK_LINE(265)
		::sys::db::ResultSet tmp5 = ::Database_obj::getQ2();		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(265)
		::sys::db::ResultSet result = tmp5;		HX_STACK_VAR(result,"result");
		HX_STACK_LINE(266)
		::sys::db::ResultSet tmp6 = result;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(266)
		for(::cpp::FastIterator_obj< Dynamic > *__it = ::cpp::CreateFastIterator< Dynamic >(tmp6);  __it->hasNext(); ){
			Dynamic row = __it->next();
			{
				HX_STACK_LINE(269)
				::String QA = row->__Field(HX_HCSTRING("QA","\xd0","\x46","\x00","\x00"), hx::paccDynamic );		HX_STACK_VAR(QA,"QA");
				HX_STACK_LINE(270)
				::String tmp7 = (HX_HCSTRING("","\x00","\x00","\x00","\x00") + QA);		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(270)
				Dynamic tmp8 = hx::SourceInfo(HX_HCSTRING("Main.hx","\x05","\x5c","\x7e","\x08"),270,HX_HCSTRING("Main","\x59","\x64","\x2f","\x33"),HX_HCSTRING("OnNextQuest","\xb0","\x20","\xa5","\x0b"));		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(270)
				::haxe::Log_obj::trace(tmp7,tmp8);
				HX_STACK_LINE(272)
				::openfl::text::TextField tmp9 = ::openfl::text::TextField_obj::__new();		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(272)
				this->QA2Display = tmp9;
				HX_STACK_LINE(273)
				::openfl::text::TextField tmp10 = this->QA2Display;		HX_STACK_VAR(tmp10,"tmp10");
				HX_STACK_LINE(273)
				tmp10->set_autoSize(((Dynamic)((int)1)));
				HX_STACK_LINE(274)
				::openfl::text::TextField tmp11 = this->QA2Display;		HX_STACK_VAR(tmp11,"tmp11");
				HX_STACK_LINE(274)
				::openfl::text::TextFormat tmp12 = QATextFormat;		HX_STACK_VAR(tmp12,"tmp12");
				HX_STACK_LINE(274)
				tmp11->set_defaultTextFormat(tmp12);
				HX_STACK_LINE(275)
				::openfl::text::TextField tmp13 = this->QA2Display;		HX_STACK_VAR(tmp13,"tmp13");
				HX_STACK_LINE(275)
				tmp13->set_selectable(false);
				HX_STACK_LINE(276)
				::openfl::text::TextField tmp14 = this->QA2Display;		HX_STACK_VAR(tmp14,"tmp14");
				HX_STACK_LINE(276)
				tmp14->set_border(false);
				HX_STACK_LINE(277)
				::openfl::text::TextField tmp15 = this->QA2Display;		HX_STACK_VAR(tmp15,"tmp15");
				HX_STACK_LINE(277)
				tmp15->set_x((int)300);
				HX_STACK_LINE(278)
				::openfl::text::TextField tmp16 = this->QA2Display;		HX_STACK_VAR(tmp16,"tmp16");
				HX_STACK_LINE(278)
				tmp16->set_y((int)50);
				HX_STACK_LINE(279)
				::openfl::text::TextField tmp17 = this->QA2Display;		HX_STACK_VAR(tmp17,"tmp17");
				HX_STACK_LINE(279)
				::String tmp18 = QA;		HX_STACK_VAR(tmp18,"tmp18");
				HX_STACK_LINE(279)
				::String tmp19 = ::Std_obj::string(tmp18);		HX_STACK_VAR(tmp19,"tmp19");
				HX_STACK_LINE(279)
				tmp17->set_text(tmp19);
				HX_STACK_LINE(280)
				::openfl::text::TextField tmp20 = this->QA2Display;		HX_STACK_VAR(tmp20,"tmp20");
				HX_STACK_LINE(280)
				this->addChild(tmp20);
			}
;
		}
		HX_STACK_LINE(283)
		::sys::db::ResultSet tmp7 = ::Database_obj::getA3();		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(283)
		::sys::db::ResultSet result1 = tmp7;		HX_STACK_VAR(result1,"result1");
		HX_STACK_LINE(284)
		::sys::db::ResultSet tmp8 = result1;		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(284)
		for(::cpp::FastIterator_obj< Dynamic > *__it = ::cpp::CreateFastIterator< Dynamic >(tmp8);  __it->hasNext(); ){
			Dynamic row = __it->next();
			{
				HX_STACK_LINE(287)
				::String QA = row->__Field(HX_HCSTRING("QA","\xd0","\x46","\x00","\x00"), hx::paccDynamic );		HX_STACK_VAR(QA,"QA");
				HX_STACK_LINE(288)
				::String tmp9 = (HX_HCSTRING("","\x00","\x00","\x00","\x00") + QA);		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(288)
				Dynamic tmp10 = hx::SourceInfo(HX_HCSTRING("Main.hx","\x05","\x5c","\x7e","\x08"),288,HX_HCSTRING("Main","\x59","\x64","\x2f","\x33"),HX_HCSTRING("OnNextQuest","\xb0","\x20","\xa5","\x0b"));		HX_STACK_VAR(tmp10,"tmp10");
				HX_STACK_LINE(288)
				::haxe::Log_obj::trace(tmp9,tmp10);
				HX_STACK_LINE(290)
				::openfl::text::TextField tmp11 = ::openfl::text::TextField_obj::__new();		HX_STACK_VAR(tmp11,"tmp11");
				HX_STACK_LINE(290)
				this->A3Display = tmp11;
				HX_STACK_LINE(291)
				::openfl::text::TextField tmp12 = this->A3Display;		HX_STACK_VAR(tmp12,"tmp12");
				HX_STACK_LINE(291)
				tmp12->set_autoSize(((Dynamic)((int)1)));
				HX_STACK_LINE(292)
				::openfl::text::TextField tmp13 = this->A3Display;		HX_STACK_VAR(tmp13,"tmp13");
				HX_STACK_LINE(292)
				::openfl::text::TextFormat tmp14 = QATextFormat2;		HX_STACK_VAR(tmp14,"tmp14");
				HX_STACK_LINE(292)
				tmp13->set_defaultTextFormat(tmp14);
				HX_STACK_LINE(293)
				::openfl::text::TextField tmp15 = this->A3Display;		HX_STACK_VAR(tmp15,"tmp15");
				HX_STACK_LINE(293)
				tmp15->set_selectable(false);
				HX_STACK_LINE(294)
				::openfl::text::TextField tmp16 = this->A3Display;		HX_STACK_VAR(tmp16,"tmp16");
				HX_STACK_LINE(294)
				tmp16->set_border(false);
				HX_STACK_LINE(295)
				::openfl::text::TextField tmp17 = this->A3Display;		HX_STACK_VAR(tmp17,"tmp17");
				HX_STACK_LINE(295)
				tmp17->set_x((int)300);
				HX_STACK_LINE(296)
				::openfl::text::TextField tmp18 = this->A3Display;		HX_STACK_VAR(tmp18,"tmp18");
				HX_STACK_LINE(296)
				tmp18->set_y((int)510);
				HX_STACK_LINE(297)
				::openfl::text::TextField tmp19 = this->A3Display;		HX_STACK_VAR(tmp19,"tmp19");
				HX_STACK_LINE(297)
				::String tmp20 = QA;		HX_STACK_VAR(tmp20,"tmp20");
				HX_STACK_LINE(297)
				::String tmp21 = ::Std_obj::string(tmp20);		HX_STACK_VAR(tmp21,"tmp21");
				HX_STACK_LINE(297)
				tmp19->set_text(tmp21);
				HX_STACK_LINE(298)
				::openfl::text::TextField tmp22 = this->A3Display;		HX_STACK_VAR(tmp22,"tmp22");
				HX_STACK_LINE(298)
				this->addChild(tmp22);
				HX_STACK_LINE(299)
				::openfl::text::TextField tmp23 = this->A3Display;		HX_STACK_VAR(tmp23,"tmp23");
				HX_STACK_LINE(299)
				Dynamic tmp24 = this->OnWalk_dyn();		HX_STACK_VAR(tmp24,"tmp24");
				HX_STACK_LINE(299)
				tmp23->addEventListener(HX_HCSTRING("click","\x48","\x7c","\x5e","\x48"),tmp24,null(),null(),null());
				HX_STACK_LINE(300)
				::openfl::text::TextField tmp25 = this->A3Display;		HX_STACK_VAR(tmp25,"tmp25");
				HX_STACK_LINE(300)
				Dynamic tmp26 = this->A3Roll_dyn();		HX_STACK_VAR(tmp26,"tmp26");
				HX_STACK_LINE(300)
				tmp25->addEventListener(HX_HCSTRING("rollOver","\x71","\xab","\xa8","\x12"),tmp26,null(),null(),null());
				HX_STACK_LINE(301)
				::openfl::text::TextField tmp27 = this->A3Display;		HX_STACK_VAR(tmp27,"tmp27");
				HX_STACK_LINE(301)
				Dynamic tmp28 = this->A3Out_dyn();		HX_STACK_VAR(tmp28,"tmp28");
				HX_STACK_LINE(301)
				tmp27->addEventListener(HX_HCSTRING("rollOut","\x11","\xf9","\x11","\x5d"),tmp28,null(),null(),null());
			}
;
		}
		HX_STACK_LINE(304)
		::sys::db::ResultSet tmp9 = ::Database_obj::getA4();		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(304)
		::sys::db::ResultSet result2 = tmp9;		HX_STACK_VAR(result2,"result2");
		HX_STACK_LINE(305)
		::sys::db::ResultSet tmp10 = result2;		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(305)
		for(::cpp::FastIterator_obj< Dynamic > *__it = ::cpp::CreateFastIterator< Dynamic >(tmp10);  __it->hasNext(); ){
			Dynamic row = __it->next();
			{
				HX_STACK_LINE(308)
				::String QA = row->__Field(HX_HCSTRING("QA","\xd0","\x46","\x00","\x00"), hx::paccDynamic );		HX_STACK_VAR(QA,"QA");
				HX_STACK_LINE(309)
				::String tmp11 = (HX_HCSTRING("","\x00","\x00","\x00","\x00") + QA);		HX_STACK_VAR(tmp11,"tmp11");
				HX_STACK_LINE(309)
				Dynamic tmp12 = hx::SourceInfo(HX_HCSTRING("Main.hx","\x05","\x5c","\x7e","\x08"),309,HX_HCSTRING("Main","\x59","\x64","\x2f","\x33"),HX_HCSTRING("OnNextQuest","\xb0","\x20","\xa5","\x0b"));		HX_STACK_VAR(tmp12,"tmp12");
				HX_STACK_LINE(309)
				::haxe::Log_obj::trace(tmp11,tmp12);
				HX_STACK_LINE(311)
				::openfl::text::TextField tmp13 = ::openfl::text::TextField_obj::__new();		HX_STACK_VAR(tmp13,"tmp13");
				HX_STACK_LINE(311)
				this->A4Display = tmp13;
				HX_STACK_LINE(312)
				::openfl::text::TextField tmp14 = this->A4Display;		HX_STACK_VAR(tmp14,"tmp14");
				HX_STACK_LINE(312)
				tmp14->set_autoSize(((Dynamic)((int)1)));
				HX_STACK_LINE(313)
				::openfl::text::TextField tmp15 = this->A4Display;		HX_STACK_VAR(tmp15,"tmp15");
				HX_STACK_LINE(313)
				::openfl::text::TextFormat tmp16 = QATextFormat2;		HX_STACK_VAR(tmp16,"tmp16");
				HX_STACK_LINE(313)
				tmp15->set_defaultTextFormat(tmp16);
				HX_STACK_LINE(314)
				::openfl::text::TextField tmp17 = this->A4Display;		HX_STACK_VAR(tmp17,"tmp17");
				HX_STACK_LINE(314)
				tmp17->set_selectable(false);
				HX_STACK_LINE(315)
				::openfl::text::TextField tmp18 = this->A4Display;		HX_STACK_VAR(tmp18,"tmp18");
				HX_STACK_LINE(315)
				tmp18->set_border(false);
				HX_STACK_LINE(316)
				::openfl::text::TextField tmp19 = this->A4Display;		HX_STACK_VAR(tmp19,"tmp19");
				HX_STACK_LINE(316)
				tmp19->set_x((int)300);
				HX_STACK_LINE(317)
				::openfl::text::TextField tmp20 = this->A4Display;		HX_STACK_VAR(tmp20,"tmp20");
				HX_STACK_LINE(317)
				tmp20->set_y((int)610);
				HX_STACK_LINE(318)
				::openfl::text::TextField tmp21 = this->A4Display;		HX_STACK_VAR(tmp21,"tmp21");
				HX_STACK_LINE(318)
				::String tmp22 = QA;		HX_STACK_VAR(tmp22,"tmp22");
				HX_STACK_LINE(318)
				::String tmp23 = ::Std_obj::string(tmp22);		HX_STACK_VAR(tmp23,"tmp23");
				HX_STACK_LINE(318)
				tmp21->set_text(tmp23);
				HX_STACK_LINE(319)
				::openfl::text::TextField tmp24 = this->A4Display;		HX_STACK_VAR(tmp24,"tmp24");
				HX_STACK_LINE(319)
				this->addChild(tmp24);
				HX_STACK_LINE(320)
				::openfl::text::TextField tmp25 = this->A4Display;		HX_STACK_VAR(tmp25,"tmp25");
				HX_STACK_LINE(320)
				Dynamic tmp26 = this->OnStay_dyn();		HX_STACK_VAR(tmp26,"tmp26");
				HX_STACK_LINE(320)
				tmp25->addEventListener(HX_HCSTRING("click","\x48","\x7c","\x5e","\x48"),tmp26,null(),null(),null());
				HX_STACK_LINE(321)
				::openfl::text::TextField tmp27 = this->A4Display;		HX_STACK_VAR(tmp27,"tmp27");
				HX_STACK_LINE(321)
				Dynamic tmp28 = this->A4Roll_dyn();		HX_STACK_VAR(tmp28,"tmp28");
				HX_STACK_LINE(321)
				tmp27->addEventListener(HX_HCSTRING("rollOver","\x71","\xab","\xa8","\x12"),tmp28,null(),null(),null());
				HX_STACK_LINE(322)
				::openfl::text::TextField tmp29 = this->A4Display;		HX_STACK_VAR(tmp29,"tmp29");
				HX_STACK_LINE(322)
				Dynamic tmp30 = this->A4Out_dyn();		HX_STACK_VAR(tmp30,"tmp30");
				HX_STACK_LINE(322)
				tmp29->addEventListener(HX_HCSTRING("rollOut","\x11","\xf9","\x11","\x5d"),tmp30,null(),null(),null());
			}
;
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Main_obj,OnNextQuest,(void))

Void Main_obj::OnWalk( ::openfl::events::MouseEvent event){
{
		HX_STACK_FRAME("Main","OnWalk",0x56baf95d,"Main.OnWalk","Main.hx",327,0x087e5c05)
		HX_STACK_THIS(this)
		HX_STACK_ARG(event,"event")
		HX_STACK_LINE(326)
		::Main _g = hx::ObjectPtr<OBJ_>(this);		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(328)
		this->stopTimer = false;
		HX_STACK_LINE(330)
		this->removeChildren(null(),null());
		HX_STACK_LINE(333)
		::openfl::display::BitmapData tmp = ::openfl::utils::Assets_obj::getBitmapData(HX_HCSTRING("img/whiter.png","\x30","\x2d","\x79","\x2f"),null());		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(333)
		::openfl::display::BitmapData backdropData = tmp;		HX_STACK_VAR(backdropData,"backdropData");
		HX_STACK_LINE(334)
		::openfl::display::Bitmap tmp1 = ::openfl::display::Bitmap_obj::__new(backdropData,null(),null());		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(334)
		::openfl::display::Bitmap backdrop = tmp1;		HX_STACK_VAR(backdrop,"backdrop");
		HX_STACK_LINE(335)
		::openfl::display::Bitmap tmp2 = backdrop;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(335)
		this->addChild(tmp2);
		HX_STACK_LINE(336)
		backdrop->set_scaleX((int)1);
		HX_STACK_LINE(337)
		backdrop->set_scaleY((int)1);
		HX_STACK_LINE(339)
		::openfl::display::MovieClip tmp3 = ::openfl::Lib_obj::current;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(339)
		int tmp4 = tmp3->stage->stageWidth;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(339)
		::openfl::display::BitmapData tmp5 = ::openfl::display::BitmapData_obj::__new(tmp4,(int)10,false,(int)0);		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(339)
		::openfl::display::BitmapData rect = tmp5;		HX_STACK_VAR(rect,"rect");
		HX_STACK_LINE(340)
		::openfl::display::Sprite tmp6 = ::openfl::display::Sprite_obj::__new();		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(340)
		this->countdownSprite = tmp6;
		HX_STACK_LINE(341)
		::openfl::display::Sprite tmp7 = this->countdownSprite;		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(341)
		::openfl::display::Bitmap tmp8 = ::openfl::display::Bitmap_obj::__new(rect,null(),null());		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(341)
		tmp7->addChild(tmp8);
		HX_STACK_LINE(342)
		::openfl::display::Sprite tmp9 = this->countdownSprite;		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(342)
		this->addChild(tmp9);

		HX_BEGIN_LOCAL_FUNC_S1(hx::LocalFunc,_Function_1_1,::Main,_g)
		int __ArgCount() const { return 1; }
		Void run(Float x){
			HX_STACK_FRAME("*","_Function_1_1",0x5200ed37,"*._Function_1_1","Main.hx",345,0x087e5c05)
			HX_STACK_ARG(x,"x")
			{
				HX_STACK_LINE(345)
				Float tmp10 = x;		HX_STACK_VAR(tmp10,"tmp10");
				HX_STACK_LINE(345)
				_g->countdownSprite->set_scaleX(tmp10);
			}
			return null();
		}
		HX_END_LOCAL_FUNC1((void))

		HX_STACK_LINE(345)
		::motion::actuators::GenericActuator tmp10 = ::motion::Actuate_obj::update( Dynamic(new _Function_1_1(_g)),(int)3,cpp::ArrayBase_obj::__new().Add((int)1),cpp::ArrayBase_obj::__new().Add((int)0),null());		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(347)
		::motion::easing::IEasing tmp11 = ::motion::easing::Linear_obj::get_easeNone();		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(345)
		::motion::actuators::GenericActuator tmp12 = tmp10->ease(tmp11);		HX_STACK_VAR(tmp12,"tmp12");

		HX_BEGIN_LOCAL_FUNC_S1(hx::LocalFunc,_Function_1_2,::Main,_g)
		int __ArgCount() const { return 0; }
		Void run(){
			HX_STACK_FRAME("*","_Function_1_2",0x5200ed38,"*._Function_1_2","Main.hx",348,0x087e5c05)
			{
				HX_STACK_LINE(348)
				_g->TooLate();
			}
			return null();
		}
		HX_END_LOCAL_FUNC0((void))

		HX_STACK_LINE(345)
		tmp12->onComplete( Dynamic(new _Function_1_2(_g)),null());
		HX_STACK_LINE(350)
		::openfl::text::TextFormat tmp13 = ::openfl::text::TextFormat_obj::__new(HX_HCSTRING("fonts/PAPYRUS.TTF","\x83","\x91","\xd1","\x4a"),(int)30,(int)-16777216,true,null(),null(),null(),null(),null(),null(),null(),null(),null());		HX_STACK_VAR(tmp13,"tmp13");
		HX_STACK_LINE(350)
		::openfl::text::TextFormat QATextFormat = tmp13;		HX_STACK_VAR(QATextFormat,"QATextFormat");
		HX_STACK_LINE(351)
		::openfl::text::TextFormat tmp14 = ::openfl::text::TextFormat_obj::__new(HX_HCSTRING("fonts/PAPYRUS.TTF","\x83","\x91","\xd1","\x4a"),(int)28,(int)-16777216,true,null(),null(),null(),null(),null(),null(),null(),null(),null());		HX_STACK_VAR(tmp14,"tmp14");
		HX_STACK_LINE(351)
		::openfl::text::TextFormat QATextFormat2 = tmp14;		HX_STACK_VAR(QATextFormat2,"QATextFormat2");
		HX_STACK_LINE(353)
		::sys::db::ResultSet tmp15 = ::Database_obj::getQ3();		HX_STACK_VAR(tmp15,"tmp15");
		HX_STACK_LINE(353)
		::sys::db::ResultSet result = tmp15;		HX_STACK_VAR(result,"result");
		HX_STACK_LINE(354)
		::sys::db::ResultSet tmp16 = result;		HX_STACK_VAR(tmp16,"tmp16");
		HX_STACK_LINE(354)
		for(::cpp::FastIterator_obj< Dynamic > *__it = ::cpp::CreateFastIterator< Dynamic >(tmp16);  __it->hasNext(); ){
			Dynamic row = __it->next();
			{
				HX_STACK_LINE(356)
				::String QA = row->__Field(HX_HCSTRING("QA","\xd0","\x46","\x00","\x00"), hx::paccDynamic );		HX_STACK_VAR(QA,"QA");
				HX_STACK_LINE(357)
				::String tmp17 = (HX_HCSTRING("","\x00","\x00","\x00","\x00") + QA);		HX_STACK_VAR(tmp17,"tmp17");
				HX_STACK_LINE(357)
				Dynamic tmp18 = hx::SourceInfo(HX_HCSTRING("Main.hx","\x05","\x5c","\x7e","\x08"),357,HX_HCSTRING("Main","\x59","\x64","\x2f","\x33"),HX_HCSTRING("OnWalk","\xe8","\xd9","\x10","\x26"));		HX_STACK_VAR(tmp18,"tmp18");
				HX_STACK_LINE(357)
				::haxe::Log_obj::trace(tmp17,tmp18);
				HX_STACK_LINE(359)
				::openfl::text::TextField tmp19 = ::openfl::text::TextField_obj::__new();		HX_STACK_VAR(tmp19,"tmp19");
				HX_STACK_LINE(359)
				this->QA4Display = tmp19;
				HX_STACK_LINE(360)
				::openfl::text::TextField tmp20 = this->QA4Display;		HX_STACK_VAR(tmp20,"tmp20");
				HX_STACK_LINE(360)
				tmp20->set_autoSize(((Dynamic)((int)1)));
				HX_STACK_LINE(361)
				::openfl::text::TextField tmp21 = this->QA4Display;		HX_STACK_VAR(tmp21,"tmp21");
				HX_STACK_LINE(361)
				::openfl::text::TextFormat tmp22 = QATextFormat;		HX_STACK_VAR(tmp22,"tmp22");
				HX_STACK_LINE(361)
				tmp21->set_defaultTextFormat(tmp22);
				HX_STACK_LINE(362)
				::openfl::text::TextField tmp23 = this->QA4Display;		HX_STACK_VAR(tmp23,"tmp23");
				HX_STACK_LINE(362)
				tmp23->set_selectable(false);
				HX_STACK_LINE(363)
				::openfl::text::TextField tmp24 = this->QA4Display;		HX_STACK_VAR(tmp24,"tmp24");
				HX_STACK_LINE(363)
				tmp24->set_border(false);
				HX_STACK_LINE(364)
				::openfl::text::TextField tmp25 = this->QA4Display;		HX_STACK_VAR(tmp25,"tmp25");
				HX_STACK_LINE(364)
				tmp25->set_x((int)300);
				HX_STACK_LINE(365)
				::openfl::text::TextField tmp26 = this->QA4Display;		HX_STACK_VAR(tmp26,"tmp26");
				HX_STACK_LINE(365)
				tmp26->set_y((int)50);
				HX_STACK_LINE(366)
				::openfl::text::TextField tmp27 = this->QA4Display;		HX_STACK_VAR(tmp27,"tmp27");
				HX_STACK_LINE(366)
				::String tmp28 = QA;		HX_STACK_VAR(tmp28,"tmp28");
				HX_STACK_LINE(366)
				::String tmp29 = ::Std_obj::string(tmp28);		HX_STACK_VAR(tmp29,"tmp29");
				HX_STACK_LINE(366)
				tmp27->set_text(tmp29);
				HX_STACK_LINE(367)
				::openfl::text::TextField tmp30 = this->QA4Display;		HX_STACK_VAR(tmp30,"tmp30");
				HX_STACK_LINE(367)
				this->addChild(tmp30);
			}
;
		}
		HX_STACK_LINE(372)
		::sys::db::ResultSet tmp17 = ::Database_obj::getA5();		HX_STACK_VAR(tmp17,"tmp17");
		HX_STACK_LINE(372)
		::sys::db::ResultSet result1 = tmp17;		HX_STACK_VAR(result1,"result1");
		HX_STACK_LINE(373)
		::sys::db::ResultSet tmp18 = result1;		HX_STACK_VAR(tmp18,"tmp18");
		HX_STACK_LINE(373)
		for(::cpp::FastIterator_obj< Dynamic > *__it = ::cpp::CreateFastIterator< Dynamic >(tmp18);  __it->hasNext(); ){
			Dynamic row = __it->next();
			{
				HX_STACK_LINE(376)
				::String QA = row->__Field(HX_HCSTRING("QA","\xd0","\x46","\x00","\x00"), hx::paccDynamic );		HX_STACK_VAR(QA,"QA");
				HX_STACK_LINE(377)
				::String tmp19 = (HX_HCSTRING("","\x00","\x00","\x00","\x00") + QA);		HX_STACK_VAR(tmp19,"tmp19");
				HX_STACK_LINE(377)
				Dynamic tmp20 = hx::SourceInfo(HX_HCSTRING("Main.hx","\x05","\x5c","\x7e","\x08"),377,HX_HCSTRING("Main","\x59","\x64","\x2f","\x33"),HX_HCSTRING("OnWalk","\xe8","\xd9","\x10","\x26"));		HX_STACK_VAR(tmp20,"tmp20");
				HX_STACK_LINE(377)
				::haxe::Log_obj::trace(tmp19,tmp20);
				HX_STACK_LINE(379)
				::openfl::text::TextField tmp21 = ::openfl::text::TextField_obj::__new();		HX_STACK_VAR(tmp21,"tmp21");
				HX_STACK_LINE(379)
				this->end2Display = tmp21;
				HX_STACK_LINE(380)
				::openfl::text::TextField tmp22 = this->end2Display;		HX_STACK_VAR(tmp22,"tmp22");
				HX_STACK_LINE(380)
				tmp22->set_autoSize(((Dynamic)((int)1)));
				HX_STACK_LINE(381)
				::openfl::text::TextField tmp23 = this->end2Display;		HX_STACK_VAR(tmp23,"tmp23");
				HX_STACK_LINE(381)
				::openfl::text::TextFormat tmp24 = QATextFormat2;		HX_STACK_VAR(tmp24,"tmp24");
				HX_STACK_LINE(381)
				tmp23->set_defaultTextFormat(tmp24);
				HX_STACK_LINE(382)
				::openfl::text::TextField tmp25 = this->end2Display;		HX_STACK_VAR(tmp25,"tmp25");
				HX_STACK_LINE(382)
				tmp25->set_selectable(false);
				HX_STACK_LINE(383)
				::openfl::text::TextField tmp26 = this->end2Display;		HX_STACK_VAR(tmp26,"tmp26");
				HX_STACK_LINE(383)
				tmp26->set_border(false);
				HX_STACK_LINE(384)
				::openfl::text::TextField tmp27 = this->end2Display;		HX_STACK_VAR(tmp27,"tmp27");
				HX_STACK_LINE(384)
				tmp27->set_x((int)300);
				HX_STACK_LINE(385)
				::openfl::text::TextField tmp28 = this->end2Display;		HX_STACK_VAR(tmp28,"tmp28");
				HX_STACK_LINE(385)
				tmp28->set_y((int)610);
				HX_STACK_LINE(386)
				::openfl::text::TextField tmp29 = this->end2Display;		HX_STACK_VAR(tmp29,"tmp29");
				HX_STACK_LINE(386)
				::String tmp30 = QA;		HX_STACK_VAR(tmp30,"tmp30");
				HX_STACK_LINE(386)
				::String tmp31 = ::Std_obj::string(tmp30);		HX_STACK_VAR(tmp31,"tmp31");
				HX_STACK_LINE(386)
				tmp29->set_text(tmp31);
				HX_STACK_LINE(387)
				::openfl::text::TextField tmp32 = this->end2Display;		HX_STACK_VAR(tmp32,"tmp32");
				HX_STACK_LINE(387)
				this->addChild(tmp32);
				HX_STACK_LINE(388)
				::openfl::text::TextField tmp33 = this->end2Display;		HX_STACK_VAR(tmp33,"tmp33");
				HX_STACK_LINE(388)
				Dynamic tmp34 = this->OnBluffing_dyn();		HX_STACK_VAR(tmp34,"tmp34");
				HX_STACK_LINE(388)
				tmp33->addEventListener(HX_HCSTRING("click","\x48","\x7c","\x5e","\x48"),tmp34,null(),null(),null());
				HX_STACK_LINE(389)
				::openfl::text::TextField tmp35 = this->end2Display;		HX_STACK_VAR(tmp35,"tmp35");
				HX_STACK_LINE(389)
				Dynamic tmp36 = this->End2Roll_dyn();		HX_STACK_VAR(tmp36,"tmp36");
				HX_STACK_LINE(389)
				tmp35->addEventListener(HX_HCSTRING("rollOver","\x71","\xab","\xa8","\x12"),tmp36,null(),null(),null());
				HX_STACK_LINE(390)
				::openfl::text::TextField tmp37 = this->end2Display;		HX_STACK_VAR(tmp37,"tmp37");
				HX_STACK_LINE(390)
				Dynamic tmp38 = this->End2Out_dyn();		HX_STACK_VAR(tmp38,"tmp38");
				HX_STACK_LINE(390)
				tmp37->addEventListener(HX_HCSTRING("rollOut","\x11","\xf9","\x11","\x5d"),tmp38,null(),null(),null());
			}
;
		}
		HX_STACK_LINE(394)
		::sys::db::ResultSet tmp19 = ::Database_obj::getA6();		HX_STACK_VAR(tmp19,"tmp19");
		HX_STACK_LINE(394)
		::sys::db::ResultSet result2 = tmp19;		HX_STACK_VAR(result2,"result2");
		HX_STACK_LINE(395)
		::sys::db::ResultSet tmp20 = result2;		HX_STACK_VAR(tmp20,"tmp20");
		HX_STACK_LINE(395)
		for(::cpp::FastIterator_obj< Dynamic > *__it = ::cpp::CreateFastIterator< Dynamic >(tmp20);  __it->hasNext(); ){
			Dynamic row = __it->next();
			{
				HX_STACK_LINE(397)
				::String QA = row->__Field(HX_HCSTRING("QA","\xd0","\x46","\x00","\x00"), hx::paccDynamic );		HX_STACK_VAR(QA,"QA");
				HX_STACK_LINE(398)
				::String tmp21 = (HX_HCSTRING("","\x00","\x00","\x00","\x00") + QA);		HX_STACK_VAR(tmp21,"tmp21");
				HX_STACK_LINE(398)
				Dynamic tmp22 = hx::SourceInfo(HX_HCSTRING("Main.hx","\x05","\x5c","\x7e","\x08"),398,HX_HCSTRING("Main","\x59","\x64","\x2f","\x33"),HX_HCSTRING("OnWalk","\xe8","\xd9","\x10","\x26"));		HX_STACK_VAR(tmp22,"tmp22");
				HX_STACK_LINE(398)
				::haxe::Log_obj::trace(tmp21,tmp22);
				HX_STACK_LINE(400)
				::openfl::text::TextField tmp23 = ::openfl::text::TextField_obj::__new();		HX_STACK_VAR(tmp23,"tmp23");
				HX_STACK_LINE(400)
				this->endDisplay = tmp23;
				HX_STACK_LINE(401)
				::openfl::text::TextField tmp24 = this->endDisplay;		HX_STACK_VAR(tmp24,"tmp24");
				HX_STACK_LINE(401)
				tmp24->set_autoSize(((Dynamic)((int)1)));
				HX_STACK_LINE(402)
				::openfl::text::TextField tmp25 = this->endDisplay;		HX_STACK_VAR(tmp25,"tmp25");
				HX_STACK_LINE(402)
				::openfl::text::TextFormat tmp26 = QATextFormat2;		HX_STACK_VAR(tmp26,"tmp26");
				HX_STACK_LINE(402)
				tmp25->set_defaultTextFormat(tmp26);
				HX_STACK_LINE(403)
				::openfl::text::TextField tmp27 = this->endDisplay;		HX_STACK_VAR(tmp27,"tmp27");
				HX_STACK_LINE(403)
				tmp27->set_selectable(false);
				HX_STACK_LINE(404)
				::openfl::text::TextField tmp28 = this->endDisplay;		HX_STACK_VAR(tmp28,"tmp28");
				HX_STACK_LINE(404)
				tmp28->set_border(false);
				HX_STACK_LINE(405)
				::openfl::text::TextField tmp29 = this->endDisplay;		HX_STACK_VAR(tmp29,"tmp29");
				HX_STACK_LINE(405)
				tmp29->set_x((int)300);
				HX_STACK_LINE(406)
				::openfl::text::TextField tmp30 = this->endDisplay;		HX_STACK_VAR(tmp30,"tmp30");
				HX_STACK_LINE(406)
				tmp30->set_y((int)510);
				HX_STACK_LINE(407)
				::openfl::text::TextField tmp31 = this->endDisplay;		HX_STACK_VAR(tmp31,"tmp31");
				HX_STACK_LINE(407)
				::String tmp32 = QA;		HX_STACK_VAR(tmp32,"tmp32");
				HX_STACK_LINE(407)
				::String tmp33 = ::Std_obj::string(tmp32);		HX_STACK_VAR(tmp33,"tmp33");
				HX_STACK_LINE(407)
				tmp31->set_text(tmp33);
				HX_STACK_LINE(408)
				::openfl::text::TextField tmp34 = this->endDisplay;		HX_STACK_VAR(tmp34,"tmp34");
				HX_STACK_LINE(408)
				this->addChild(tmp34);
				HX_STACK_LINE(409)
				::openfl::text::TextField tmp35 = this->endDisplay;		HX_STACK_VAR(tmp35,"tmp35");
				HX_STACK_LINE(409)
				Dynamic tmp36 = this->OnFight_dyn();		HX_STACK_VAR(tmp36,"tmp36");
				HX_STACK_LINE(409)
				tmp35->addEventListener(HX_HCSTRING("click","\x48","\x7c","\x5e","\x48"),tmp36,null(),null(),null());
				HX_STACK_LINE(410)
				::openfl::text::TextField tmp37 = this->endDisplay;		HX_STACK_VAR(tmp37,"tmp37");
				HX_STACK_LINE(410)
				Dynamic tmp38 = this->EndRoll_dyn();		HX_STACK_VAR(tmp38,"tmp38");
				HX_STACK_LINE(410)
				tmp37->addEventListener(HX_HCSTRING("rollOver","\x71","\xab","\xa8","\x12"),tmp38,null(),null(),null());
				HX_STACK_LINE(411)
				::openfl::text::TextField tmp39 = this->endDisplay;		HX_STACK_VAR(tmp39,"tmp39");
				HX_STACK_LINE(411)
				Dynamic tmp40 = this->EndOut_dyn();		HX_STACK_VAR(tmp40,"tmp40");
				HX_STACK_LINE(411)
				tmp39->addEventListener(HX_HCSTRING("rollOut","\x11","\xf9","\x11","\x5d"),tmp40,null(),null(),null());
			}
;
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Main_obj,OnWalk,(void))

Void Main_obj::OnBluffing( ::openfl::events::MouseEvent event){
{
		HX_STACK_FRAME("Main","OnBluffing",0xa2a952ab,"Main.OnBluffing","Main.hx",418,0x087e5c05)
		HX_STACK_THIS(this)
		HX_STACK_ARG(event,"event")
		HX_STACK_LINE(419)
		this->stopTimer = true;
		HX_STACK_LINE(420)
		this->removeChildren(null(),null());
		HX_STACK_LINE(422)
		::openfl::display::BitmapData tmp = ::openfl::utils::Assets_obj::getBitmapData(HX_HCSTRING("img/whiter.png","\x30","\x2d","\x79","\x2f"),null());		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(422)
		::openfl::display::BitmapData backdropData = tmp;		HX_STACK_VAR(backdropData,"backdropData");
		HX_STACK_LINE(423)
		::openfl::display::Bitmap tmp1 = ::openfl::display::Bitmap_obj::__new(backdropData,null(),null());		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(423)
		::openfl::display::Bitmap backdrop = tmp1;		HX_STACK_VAR(backdrop,"backdrop");
		HX_STACK_LINE(424)
		::openfl::display::Bitmap tmp2 = backdrop;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(424)
		this->addChild(tmp2);
		HX_STACK_LINE(425)
		backdrop->set_scaleX((int)1);
		HX_STACK_LINE(426)
		backdrop->set_scaleY((int)1);
		HX_STACK_LINE(428)
		::openfl::text::TextFormat tmp3 = ::openfl::text::TextFormat_obj::__new(HX_HCSTRING("fonts/PAPYRUS.TTF","\x83","\x91","\xd1","\x4a"),(int)30,(int)-16777216,true,null(),null(),null(),null(),null(),null(),null(),null(),null());		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(428)
		::openfl::text::TextFormat QATextFormat = tmp3;		HX_STACK_VAR(QATextFormat,"QATextFormat");
		HX_STACK_LINE(430)
		::sys::db::ResultSet tmp4 = ::Database_obj::getVictory();		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(430)
		::sys::db::ResultSet result = tmp4;		HX_STACK_VAR(result,"result");
		HX_STACK_LINE(431)
		::sys::db::ResultSet tmp5 = result;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(431)
		for(::cpp::FastIterator_obj< Dynamic > *__it = ::cpp::CreateFastIterator< Dynamic >(tmp5);  __it->hasNext(); ){
			Dynamic row = __it->next();
			{
				HX_STACK_LINE(433)
				::String QA = row->__Field(HX_HCSTRING("QA","\xd0","\x46","\x00","\x00"), hx::paccDynamic );		HX_STACK_VAR(QA,"QA");
				HX_STACK_LINE(434)
				::String tmp6 = (HX_HCSTRING("","\x00","\x00","\x00","\x00") + QA);		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(434)
				Dynamic tmp7 = hx::SourceInfo(HX_HCSTRING("Main.hx","\x05","\x5c","\x7e","\x08"),434,HX_HCSTRING("Main","\x59","\x64","\x2f","\x33"),HX_HCSTRING("OnBluffing","\xb6","\xd4","\x21","\x0b"));		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(434)
				::haxe::Log_obj::trace(tmp6,tmp7);
				HX_STACK_LINE(436)
				::openfl::text::TextField tmp8 = ::openfl::text::TextField_obj::__new();		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(436)
				this->endDisplay = tmp8;
				HX_STACK_LINE(437)
				::openfl::text::TextField tmp9 = this->endDisplay;		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(437)
				tmp9->set_autoSize(((Dynamic)((int)1)));
				HX_STACK_LINE(438)
				::openfl::text::TextField tmp10 = this->endDisplay;		HX_STACK_VAR(tmp10,"tmp10");
				HX_STACK_LINE(438)
				::openfl::text::TextFormat tmp11 = QATextFormat;		HX_STACK_VAR(tmp11,"tmp11");
				HX_STACK_LINE(438)
				tmp10->set_defaultTextFormat(tmp11);
				HX_STACK_LINE(439)
				::openfl::text::TextField tmp12 = this->endDisplay;		HX_STACK_VAR(tmp12,"tmp12");
				HX_STACK_LINE(439)
				tmp12->set_selectable(false);
				HX_STACK_LINE(440)
				::openfl::text::TextField tmp13 = this->endDisplay;		HX_STACK_VAR(tmp13,"tmp13");
				HX_STACK_LINE(440)
				tmp13->set_border(false);
				HX_STACK_LINE(441)
				::openfl::text::TextField tmp14 = this->endDisplay;		HX_STACK_VAR(tmp14,"tmp14");
				HX_STACK_LINE(441)
				tmp14->set_x((int)300);
				HX_STACK_LINE(442)
				::openfl::text::TextField tmp15 = this->endDisplay;		HX_STACK_VAR(tmp15,"tmp15");
				HX_STACK_LINE(442)
				tmp15->set_y((int)50);
				HX_STACK_LINE(443)
				::openfl::text::TextField tmp16 = this->endDisplay;		HX_STACK_VAR(tmp16,"tmp16");
				HX_STACK_LINE(443)
				::String tmp17 = QA;		HX_STACK_VAR(tmp17,"tmp17");
				HX_STACK_LINE(443)
				::String tmp18 = ::Std_obj::string(tmp17);		HX_STACK_VAR(tmp18,"tmp18");
				HX_STACK_LINE(443)
				tmp16->set_text(tmp18);
				HX_STACK_LINE(444)
				::openfl::text::TextField tmp19 = this->endDisplay;		HX_STACK_VAR(tmp19,"tmp19");
				HX_STACK_LINE(444)
				this->addChild(tmp19);
				HX_STACK_LINE(445)
				::openfl::text::TextField tmp20 = this->endDisplay;		HX_STACK_VAR(tmp20,"tmp20");
				HX_STACK_LINE(445)
				Dynamic tmp21 = this->Victory_dyn();		HX_STACK_VAR(tmp21,"tmp21");
				HX_STACK_LINE(445)
				tmp20->addEventListener(HX_HCSTRING("click","\x48","\x7c","\x5e","\x48"),tmp21,null(),null(),null());
				HX_STACK_LINE(446)
				::openfl::text::TextField tmp22 = this->endDisplay;		HX_STACK_VAR(tmp22,"tmp22");
				HX_STACK_LINE(446)
				Dynamic tmp23 = this->EndRoll_dyn();		HX_STACK_VAR(tmp23,"tmp23");
				HX_STACK_LINE(446)
				tmp22->addEventListener(HX_HCSTRING("rollOver","\x71","\xab","\xa8","\x12"),tmp23,null(),null(),null());
				HX_STACK_LINE(447)
				::openfl::text::TextField tmp24 = this->endDisplay;		HX_STACK_VAR(tmp24,"tmp24");
				HX_STACK_LINE(447)
				Dynamic tmp25 = this->EndOut_dyn();		HX_STACK_VAR(tmp25,"tmp25");
				HX_STACK_LINE(447)
				tmp24->addEventListener(HX_HCSTRING("rollOut","\x11","\xf9","\x11","\x5d"),tmp25,null(),null(),null());
			}
;
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Main_obj,OnBluffing,(void))

Void Main_obj::OnFight( ::openfl::events::MouseEvent event){
{
		HX_STACK_FRAME("Main","OnFight",0xc85542fc,"Main.OnFight","Main.hx",453,0x087e5c05)
		HX_STACK_THIS(this)
		HX_STACK_ARG(event,"event")
		HX_STACK_LINE(454)
		this->stopTimer = true;
		HX_STACK_LINE(456)
		this->removeChildren(null(),null());
		HX_STACK_LINE(458)
		::openfl::display::BitmapData tmp = ::openfl::utils::Assets_obj::getBitmapData(HX_HCSTRING("img/whiter.png","\x30","\x2d","\x79","\x2f"),null());		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(458)
		::openfl::display::BitmapData backdropData = tmp;		HX_STACK_VAR(backdropData,"backdropData");
		HX_STACK_LINE(459)
		::openfl::display::Bitmap tmp1 = ::openfl::display::Bitmap_obj::__new(backdropData,null(),null());		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(459)
		::openfl::display::Bitmap backdrop = tmp1;		HX_STACK_VAR(backdrop,"backdrop");
		HX_STACK_LINE(460)
		::openfl::display::Bitmap tmp2 = backdrop;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(460)
		this->addChild(tmp2);
		HX_STACK_LINE(461)
		backdrop->set_scaleX((int)1);
		HX_STACK_LINE(462)
		backdrop->set_scaleY((int)1);
		HX_STACK_LINE(464)
		::openfl::text::TextFormat tmp3 = ::openfl::text::TextFormat_obj::__new(HX_HCSTRING("fonts/PAPYRUS.TTF","\x83","\x91","\xd1","\x4a"),(int)30,(int)-16777216,true,null(),null(),null(),null(),null(),null(),null(),null(),null());		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(464)
		::openfl::text::TextFormat QATextFormat = tmp3;		HX_STACK_VAR(QATextFormat,"QATextFormat");
		HX_STACK_LINE(466)
		::sys::db::ResultSet tmp4 = ::Database_obj::getEnd5();		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(466)
		::sys::db::ResultSet result = tmp4;		HX_STACK_VAR(result,"result");
		HX_STACK_LINE(467)
		::sys::db::ResultSet tmp5 = result;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(467)
		for(::cpp::FastIterator_obj< Dynamic > *__it = ::cpp::CreateFastIterator< Dynamic >(tmp5);  __it->hasNext(); ){
			Dynamic row = __it->next();
			{
				HX_STACK_LINE(469)
				::String QA = row->__Field(HX_HCSTRING("QA","\xd0","\x46","\x00","\x00"), hx::paccDynamic );		HX_STACK_VAR(QA,"QA");
				HX_STACK_LINE(470)
				::String tmp6 = (HX_HCSTRING("","\x00","\x00","\x00","\x00") + QA);		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(470)
				Dynamic tmp7 = hx::SourceInfo(HX_HCSTRING("Main.hx","\x05","\x5c","\x7e","\x08"),470,HX_HCSTRING("Main","\x59","\x64","\x2f","\x33"),HX_HCSTRING("OnFight","\x11","\xdc","\x23","\x64"));		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(470)
				::haxe::Log_obj::trace(tmp6,tmp7);
				HX_STACK_LINE(472)
				::openfl::text::TextField tmp8 = ::openfl::text::TextField_obj::__new();		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(472)
				this->endDisplay = tmp8;
				HX_STACK_LINE(473)
				::openfl::text::TextField tmp9 = this->endDisplay;		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(473)
				tmp9->set_autoSize(((Dynamic)((int)1)));
				HX_STACK_LINE(474)
				::openfl::text::TextField tmp10 = this->endDisplay;		HX_STACK_VAR(tmp10,"tmp10");
				HX_STACK_LINE(474)
				::openfl::text::TextFormat tmp11 = QATextFormat;		HX_STACK_VAR(tmp11,"tmp11");
				HX_STACK_LINE(474)
				tmp10->set_defaultTextFormat(tmp11);
				HX_STACK_LINE(475)
				::openfl::text::TextField tmp12 = this->endDisplay;		HX_STACK_VAR(tmp12,"tmp12");
				HX_STACK_LINE(475)
				tmp12->set_selectable(false);
				HX_STACK_LINE(476)
				::openfl::text::TextField tmp13 = this->endDisplay;		HX_STACK_VAR(tmp13,"tmp13");
				HX_STACK_LINE(476)
				tmp13->set_border(false);
				HX_STACK_LINE(477)
				::openfl::text::TextField tmp14 = this->endDisplay;		HX_STACK_VAR(tmp14,"tmp14");
				HX_STACK_LINE(477)
				tmp14->set_x((int)300);
				HX_STACK_LINE(478)
				::openfl::text::TextField tmp15 = this->endDisplay;		HX_STACK_VAR(tmp15,"tmp15");
				HX_STACK_LINE(478)
				tmp15->set_y((int)50);
				HX_STACK_LINE(479)
				::openfl::text::TextField tmp16 = this->endDisplay;		HX_STACK_VAR(tmp16,"tmp16");
				HX_STACK_LINE(479)
				::String tmp17 = QA;		HX_STACK_VAR(tmp17,"tmp17");
				HX_STACK_LINE(479)
				::String tmp18 = ::Std_obj::string(tmp17);		HX_STACK_VAR(tmp18,"tmp18");
				HX_STACK_LINE(479)
				tmp16->set_text(tmp18);
				HX_STACK_LINE(480)
				::openfl::text::TextField tmp19 = this->endDisplay;		HX_STACK_VAR(tmp19,"tmp19");
				HX_STACK_LINE(480)
				this->addChild(tmp19);
				HX_STACK_LINE(481)
				::openfl::text::TextField tmp20 = this->endDisplay;		HX_STACK_VAR(tmp20,"tmp20");
				HX_STACK_LINE(481)
				Dynamic tmp21 = this->OnEnd_dyn();		HX_STACK_VAR(tmp21,"tmp21");
				HX_STACK_LINE(481)
				tmp20->addEventListener(HX_HCSTRING("click","\x48","\x7c","\x5e","\x48"),tmp21,null(),null(),null());
				HX_STACK_LINE(482)
				::openfl::text::TextField tmp22 = this->endDisplay;		HX_STACK_VAR(tmp22,"tmp22");
				HX_STACK_LINE(482)
				Dynamic tmp23 = this->EndRoll_dyn();		HX_STACK_VAR(tmp23,"tmp23");
				HX_STACK_LINE(482)
				tmp22->addEventListener(HX_HCSTRING("rollOver","\x71","\xab","\xa8","\x12"),tmp23,null(),null(),null());
				HX_STACK_LINE(483)
				::openfl::text::TextField tmp24 = this->endDisplay;		HX_STACK_VAR(tmp24,"tmp24");
				HX_STACK_LINE(483)
				Dynamic tmp25 = this->EndOut_dyn();		HX_STACK_VAR(tmp25,"tmp25");
				HX_STACK_LINE(483)
				tmp24->addEventListener(HX_HCSTRING("rollOut","\x11","\xf9","\x11","\x5d"),tmp25,null(),null(),null());
			}
;
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Main_obj,OnFight,(void))

Void Main_obj::OnStay( ::openfl::events::MouseEvent event){
{
		HX_STACK_FRAME("Main","OnStay",0x5424802d,"Main.OnStay","Main.hx",489,0x087e5c05)
		HX_STACK_THIS(this)
		HX_STACK_ARG(event,"event")
		HX_STACK_LINE(490)
		this->removeChildren(null(),null());
		HX_STACK_LINE(492)
		::openfl::display::BitmapData tmp = ::openfl::utils::Assets_obj::getBitmapData(HX_HCSTRING("img/whiter.png","\x30","\x2d","\x79","\x2f"),null());		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(492)
		::openfl::display::BitmapData backdropData = tmp;		HX_STACK_VAR(backdropData,"backdropData");
		HX_STACK_LINE(493)
		::openfl::display::Bitmap tmp1 = ::openfl::display::Bitmap_obj::__new(backdropData,null(),null());		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(493)
		::openfl::display::Bitmap backdrop = tmp1;		HX_STACK_VAR(backdrop,"backdrop");
		HX_STACK_LINE(494)
		::openfl::display::Bitmap tmp2 = backdrop;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(494)
		this->addChild(tmp2);
		HX_STACK_LINE(495)
		backdrop->set_scaleX((int)1);
		HX_STACK_LINE(496)
		backdrop->set_scaleY((int)1);
		HX_STACK_LINE(499)
		::openfl::text::TextFormat tmp3 = ::openfl::text::TextFormat_obj::__new(HX_HCSTRING("fonts/PAPYRUS.TTF","\x83","\x91","\xd1","\x4a"),(int)30,(int)-16777216,true,null(),null(),null(),null(),null(),null(),null(),null(),null());		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(499)
		::openfl::text::TextFormat QATextFormat = tmp3;		HX_STACK_VAR(QATextFormat,"QATextFormat");
		HX_STACK_LINE(501)
		::sys::db::ResultSet tmp4 = ::Database_obj::getEnd4();		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(501)
		::sys::db::ResultSet result = tmp4;		HX_STACK_VAR(result,"result");
		HX_STACK_LINE(502)
		::sys::db::ResultSet tmp5 = result;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(502)
		for(::cpp::FastIterator_obj< Dynamic > *__it = ::cpp::CreateFastIterator< Dynamic >(tmp5);  __it->hasNext(); ){
			Dynamic row = __it->next();
			{
				HX_STACK_LINE(505)
				::String QA = row->__Field(HX_HCSTRING("QA","\xd0","\x46","\x00","\x00"), hx::paccDynamic );		HX_STACK_VAR(QA,"QA");
				HX_STACK_LINE(506)
				::String tmp6 = (HX_HCSTRING("","\x00","\x00","\x00","\x00") + QA);		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(506)
				Dynamic tmp7 = hx::SourceInfo(HX_HCSTRING("Main.hx","\x05","\x5c","\x7e","\x08"),506,HX_HCSTRING("Main","\x59","\x64","\x2f","\x33"),HX_HCSTRING("OnStay","\xb8","\x60","\x7a","\x23"));		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(506)
				::haxe::Log_obj::trace(tmp6,tmp7);
				HX_STACK_LINE(508)
				::openfl::text::TextField tmp8 = ::openfl::text::TextField_obj::__new();		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(508)
				this->end4Display = tmp8;
				HX_STACK_LINE(509)
				::openfl::text::TextField tmp9 = this->end4Display;		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(509)
				tmp9->set_autoSize(((Dynamic)((int)1)));
				HX_STACK_LINE(510)
				::openfl::text::TextField tmp10 = this->end4Display;		HX_STACK_VAR(tmp10,"tmp10");
				HX_STACK_LINE(510)
				::openfl::text::TextFormat tmp11 = QATextFormat;		HX_STACK_VAR(tmp11,"tmp11");
				HX_STACK_LINE(510)
				tmp10->set_defaultTextFormat(tmp11);
				HX_STACK_LINE(511)
				::openfl::text::TextField tmp12 = this->end4Display;		HX_STACK_VAR(tmp12,"tmp12");
				HX_STACK_LINE(511)
				tmp12->set_selectable(false);
				HX_STACK_LINE(512)
				::openfl::text::TextField tmp13 = this->end4Display;		HX_STACK_VAR(tmp13,"tmp13");
				HX_STACK_LINE(512)
				tmp13->set_border(false);
				HX_STACK_LINE(513)
				::openfl::text::TextField tmp14 = this->end4Display;		HX_STACK_VAR(tmp14,"tmp14");
				HX_STACK_LINE(513)
				tmp14->set_x((int)300);
				HX_STACK_LINE(514)
				::openfl::text::TextField tmp15 = this->end4Display;		HX_STACK_VAR(tmp15,"tmp15");
				HX_STACK_LINE(514)
				tmp15->set_y((int)50);
				HX_STACK_LINE(515)
				::openfl::text::TextField tmp16 = this->end4Display;		HX_STACK_VAR(tmp16,"tmp16");
				HX_STACK_LINE(515)
				::String tmp17 = QA;		HX_STACK_VAR(tmp17,"tmp17");
				HX_STACK_LINE(515)
				::String tmp18 = ::Std_obj::string(tmp17);		HX_STACK_VAR(tmp18,"tmp18");
				HX_STACK_LINE(515)
				tmp16->set_text(tmp18);
				HX_STACK_LINE(516)
				::openfl::text::TextField tmp19 = this->end4Display;		HX_STACK_VAR(tmp19,"tmp19");
				HX_STACK_LINE(516)
				this->addChild(tmp19);
				HX_STACK_LINE(517)
				::openfl::text::TextField tmp20 = this->end4Display;		HX_STACK_VAR(tmp20,"tmp20");
				HX_STACK_LINE(517)
				Dynamic tmp21 = this->OnEnd_dyn();		HX_STACK_VAR(tmp21,"tmp21");
				HX_STACK_LINE(517)
				tmp20->addEventListener(HX_HCSTRING("click","\x48","\x7c","\x5e","\x48"),tmp21,null(),null(),null());
				HX_STACK_LINE(518)
				::openfl::text::TextField tmp22 = this->end4Display;		HX_STACK_VAR(tmp22,"tmp22");
				HX_STACK_LINE(518)
				Dynamic tmp23 = this->End4Roll_dyn();		HX_STACK_VAR(tmp23,"tmp23");
				HX_STACK_LINE(518)
				tmp22->addEventListener(HX_HCSTRING("rollOver","\x71","\xab","\xa8","\x12"),tmp23,null(),null(),null());
				HX_STACK_LINE(519)
				::openfl::text::TextField tmp24 = this->end4Display;		HX_STACK_VAR(tmp24,"tmp24");
				HX_STACK_LINE(519)
				Dynamic tmp25 = this->End4Out_dyn();		HX_STACK_VAR(tmp25,"tmp25");
				HX_STACK_LINE(519)
				tmp24->addEventListener(HX_HCSTRING("rollOut","\x11","\xf9","\x11","\x5d"),tmp25,null(),null(),null());
			}
;
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Main_obj,OnStay,(void))

Void Main_obj::OnEnd( ::openfl::events::MouseEvent event){
{
		HX_STACK_FRAME("Main","OnEnd",0x41c54e07,"Main.OnEnd","Main.hx",526,0x087e5c05)
		HX_STACK_THIS(this)
		HX_STACK_ARG(event,"event")
		HX_STACK_LINE(526)
		this->gamestart();
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Main_obj,OnEnd,(void))

Void Main_obj::OnBlackButton( ::openfl::events::MouseEvent event){
{
		HX_STACK_FRAME("Main","OnBlackButton",0x73c85b3d,"Main.OnBlackButton","Main.hx",531,0x087e5c05)
		HX_STACK_THIS(this)
		HX_STACK_ARG(event,"event")
		HX_STACK_LINE(532)
		this->removeChildren(null(),null());
		HX_STACK_LINE(534)
		::openfl::display::BitmapData tmp = ::openfl::utils::Assets_obj::getBitmapData(HX_HCSTRING("img/black.png","\x2e","\x9e","\xe4","\xb4"),null());		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(534)
		::openfl::display::BitmapData backdropData = tmp;		HX_STACK_VAR(backdropData,"backdropData");
		HX_STACK_LINE(535)
		::openfl::display::Bitmap tmp1 = ::openfl::display::Bitmap_obj::__new(backdropData,null(),null());		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(535)
		::openfl::display::Bitmap backdrop = tmp1;		HX_STACK_VAR(backdrop,"backdrop");
		HX_STACK_LINE(536)
		::openfl::display::Bitmap tmp2 = backdrop;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(536)
		this->addChild(tmp2);
		HX_STACK_LINE(537)
		backdrop->set_scaleX((int)1);
		HX_STACK_LINE(538)
		backdrop->set_scaleY((int)1);
		HX_STACK_LINE(540)
		::sys::db::ResultSet tmp3 = ::Database_obj::getEnd();		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(540)
		::sys::db::ResultSet result = tmp3;		HX_STACK_VAR(result,"result");
		HX_STACK_LINE(541)
		::sys::db::ResultSet tmp4 = result;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(541)
		for(::cpp::FastIterator_obj< Dynamic > *__it = ::cpp::CreateFastIterator< Dynamic >(tmp4);  __it->hasNext(); ){
			Dynamic row = __it->next();
			{
				HX_STACK_LINE(543)
				::openfl::text::TextFormat tmp5 = ::openfl::text::TextFormat_obj::__new(HX_HCSTRING("fonts/PAPYRUS.TTF","\x83","\x91","\xd1","\x4a"),(int)40,(int)16777215,true,null(),null(),null(),null(),null(),null(),null(),null(),null());		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(543)
				::openfl::text::TextFormat QATextFormat = tmp5;		HX_STACK_VAR(QATextFormat,"QATextFormat");
				HX_STACK_LINE(545)
				::String QA = row->__Field(HX_HCSTRING("QA","\xd0","\x46","\x00","\x00"), hx::paccDynamic );		HX_STACK_VAR(QA,"QA");
				HX_STACK_LINE(546)
				::String tmp6 = (HX_HCSTRING("","\x00","\x00","\x00","\x00") + QA);		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(546)
				Dynamic tmp7 = hx::SourceInfo(HX_HCSTRING("Main.hx","\x05","\x5c","\x7e","\x08"),546,HX_HCSTRING("Main","\x59","\x64","\x2f","\x33"),HX_HCSTRING("OnBlackButton","\x12","\x72","\x52","\x9b"));		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(546)
				::haxe::Log_obj::trace(tmp6,tmp7);
				HX_STACK_LINE(548)
				::openfl::text::TextField tmp8 = ::openfl::text::TextField_obj::__new();		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(548)
				this->endDisplay = tmp8;
				HX_STACK_LINE(549)
				::openfl::text::TextField tmp9 = this->endDisplay;		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(549)
				tmp9->set_autoSize(((Dynamic)((int)1)));
				HX_STACK_LINE(550)
				::openfl::text::TextField tmp10 = this->endDisplay;		HX_STACK_VAR(tmp10,"tmp10");
				HX_STACK_LINE(550)
				::openfl::text::TextFormat tmp11 = QATextFormat;		HX_STACK_VAR(tmp11,"tmp11");
				HX_STACK_LINE(550)
				tmp10->set_defaultTextFormat(tmp11);
				HX_STACK_LINE(551)
				::openfl::text::TextField tmp12 = this->endDisplay;		HX_STACK_VAR(tmp12,"tmp12");
				HX_STACK_LINE(551)
				tmp12->set_selectable(false);
				HX_STACK_LINE(552)
				::openfl::text::TextField tmp13 = this->endDisplay;		HX_STACK_VAR(tmp13,"tmp13");
				HX_STACK_LINE(552)
				tmp13->set_border(false);
				HX_STACK_LINE(553)
				::openfl::text::TextField tmp14 = this->endDisplay;		HX_STACK_VAR(tmp14,"tmp14");
				HX_STACK_LINE(553)
				tmp14->set_x((int)400);
				HX_STACK_LINE(554)
				::openfl::text::TextField tmp15 = this->endDisplay;		HX_STACK_VAR(tmp15,"tmp15");
				HX_STACK_LINE(554)
				tmp15->set_y((int)500);
				HX_STACK_LINE(555)
				::openfl::text::TextField tmp16 = this->endDisplay;		HX_STACK_VAR(tmp16,"tmp16");
				HX_STACK_LINE(555)
				::String tmp17 = QA;		HX_STACK_VAR(tmp17,"tmp17");
				HX_STACK_LINE(555)
				::String tmp18 = ::Std_obj::string(tmp17);		HX_STACK_VAR(tmp18,"tmp18");
				HX_STACK_LINE(555)
				tmp16->set_text(tmp18);
				HX_STACK_LINE(556)
				::openfl::text::TextField tmp19 = this->endDisplay;		HX_STACK_VAR(tmp19,"tmp19");
				HX_STACK_LINE(556)
				this->addChild(tmp19);
				HX_STACK_LINE(557)
				::openfl::text::TextField tmp20 = this->endDisplay;		HX_STACK_VAR(tmp20,"tmp20");
				HX_STACK_LINE(557)
				Dynamic tmp21 = this->OnBlack2Button_dyn();		HX_STACK_VAR(tmp21,"tmp21");
				HX_STACK_LINE(557)
				tmp20->addEventListener(HX_HCSTRING("click","\x48","\x7c","\x5e","\x48"),tmp21,null(),null(),null());
				HX_STACK_LINE(558)
				::openfl::text::TextField tmp22 = this->endDisplay;		HX_STACK_VAR(tmp22,"tmp22");
				HX_STACK_LINE(558)
				Dynamic tmp23 = this->EndRoll_dyn();		HX_STACK_VAR(tmp23,"tmp23");
				HX_STACK_LINE(558)
				tmp22->addEventListener(HX_HCSTRING("rollOver","\x71","\xab","\xa8","\x12"),tmp23,null(),null(),null());
				HX_STACK_LINE(559)
				::openfl::text::TextField tmp24 = this->endDisplay;		HX_STACK_VAR(tmp24,"tmp24");
				HX_STACK_LINE(559)
				Dynamic tmp25 = this->EndOut_dyn();		HX_STACK_VAR(tmp25,"tmp25");
				HX_STACK_LINE(559)
				tmp24->addEventListener(HX_HCSTRING("rollOut","\x11","\xf9","\x11","\x5d"),tmp25,null(),null(),null());
			}
;
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Main_obj,OnBlackButton,(void))

Void Main_obj::OnBlack2Button( ::openfl::events::MouseEvent event){
{
		HX_STACK_FRAME("Main","OnBlack2Button",0x71670839,"Main.OnBlack2Button","Main.hx",564,0x087e5c05)
		HX_STACK_THIS(this)
		HX_STACK_ARG(event,"event")
		HX_STACK_LINE(565)
		this->removeChildren(null(),null());
		HX_STACK_LINE(567)
		::openfl::display::BitmapData tmp = ::openfl::utils::Assets_obj::getBitmapData(HX_HCSTRING("img/black.png","\x2e","\x9e","\xe4","\xb4"),null());		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(567)
		::openfl::display::BitmapData backdropData = tmp;		HX_STACK_VAR(backdropData,"backdropData");
		HX_STACK_LINE(568)
		::openfl::display::Bitmap tmp1 = ::openfl::display::Bitmap_obj::__new(backdropData,null(),null());		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(568)
		::openfl::display::Bitmap backdrop = tmp1;		HX_STACK_VAR(backdrop,"backdrop");
		HX_STACK_LINE(569)
		::openfl::display::Bitmap tmp2 = backdrop;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(569)
		this->addChild(tmp2);
		HX_STACK_LINE(570)
		backdrop->set_scaleX((int)1);
		HX_STACK_LINE(571)
		backdrop->set_scaleY((int)1);
		HX_STACK_LINE(573)
		::sys::db::ResultSet tmp3 = ::Database_obj::getEnd2();		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(573)
		::sys::db::ResultSet result = tmp3;		HX_STACK_VAR(result,"result");
		HX_STACK_LINE(574)
		::sys::db::ResultSet tmp4 = result;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(574)
		for(::cpp::FastIterator_obj< Dynamic > *__it = ::cpp::CreateFastIterator< Dynamic >(tmp4);  __it->hasNext(); ){
			Dynamic row = __it->next();
			{
				HX_STACK_LINE(576)
				::openfl::text::TextFormat tmp5 = ::openfl::text::TextFormat_obj::__new(HX_HCSTRING("fonts/PAPYRUS.TTF","\x83","\x91","\xd1","\x4a"),(int)40,(int)16777215,true,null(),null(),null(),null(),null(),null(),null(),null(),null());		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(576)
				::openfl::text::TextFormat QATextFormat = tmp5;		HX_STACK_VAR(QATextFormat,"QATextFormat");
				HX_STACK_LINE(578)
				::String QA = row->__Field(HX_HCSTRING("QA","\xd0","\x46","\x00","\x00"), hx::paccDynamic );		HX_STACK_VAR(QA,"QA");
				HX_STACK_LINE(579)
				::String tmp6 = (HX_HCSTRING("","\x00","\x00","\x00","\x00") + QA);		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(579)
				Dynamic tmp7 = hx::SourceInfo(HX_HCSTRING("Main.hx","\x05","\x5c","\x7e","\x08"),579,HX_HCSTRING("Main","\x59","\x64","\x2f","\x33"),HX_HCSTRING("OnBlack2Button","\xc4","\xeb","\xb0","\xe2"));		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(579)
				::haxe::Log_obj::trace(tmp6,tmp7);
				HX_STACK_LINE(581)
				::openfl::text::TextField tmp8 = ::openfl::text::TextField_obj::__new();		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(581)
				this->end2Display = tmp8;
				HX_STACK_LINE(582)
				::openfl::text::TextField tmp9 = this->end2Display;		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(582)
				tmp9->set_autoSize(((Dynamic)((int)1)));
				HX_STACK_LINE(583)
				::openfl::text::TextField tmp10 = this->end2Display;		HX_STACK_VAR(tmp10,"tmp10");
				HX_STACK_LINE(583)
				::openfl::text::TextFormat tmp11 = QATextFormat;		HX_STACK_VAR(tmp11,"tmp11");
				HX_STACK_LINE(583)
				tmp10->set_defaultTextFormat(tmp11);
				HX_STACK_LINE(584)
				::openfl::text::TextField tmp12 = this->end2Display;		HX_STACK_VAR(tmp12,"tmp12");
				HX_STACK_LINE(584)
				tmp12->set_selectable(false);
				HX_STACK_LINE(585)
				::openfl::text::TextField tmp13 = this->end2Display;		HX_STACK_VAR(tmp13,"tmp13");
				HX_STACK_LINE(585)
				tmp13->set_border(false);
				HX_STACK_LINE(586)
				::openfl::text::TextField tmp14 = this->end2Display;		HX_STACK_VAR(tmp14,"tmp14");
				HX_STACK_LINE(586)
				tmp14->set_x((int)400);
				HX_STACK_LINE(587)
				::openfl::text::TextField tmp15 = this->end2Display;		HX_STACK_VAR(tmp15,"tmp15");
				HX_STACK_LINE(587)
				tmp15->set_y((int)500);
				HX_STACK_LINE(588)
				::openfl::text::TextField tmp16 = this->end2Display;		HX_STACK_VAR(tmp16,"tmp16");
				HX_STACK_LINE(588)
				::String tmp17 = QA;		HX_STACK_VAR(tmp17,"tmp17");
				HX_STACK_LINE(588)
				::String tmp18 = ::Std_obj::string(tmp17);		HX_STACK_VAR(tmp18,"tmp18");
				HX_STACK_LINE(588)
				tmp16->set_text(tmp18);
				HX_STACK_LINE(589)
				::openfl::text::TextField tmp19 = this->end2Display;		HX_STACK_VAR(tmp19,"tmp19");
				HX_STACK_LINE(589)
				this->addChild(tmp19);
				HX_STACK_LINE(590)
				::openfl::text::TextField tmp20 = this->end2Display;		HX_STACK_VAR(tmp20,"tmp20");
				HX_STACK_LINE(590)
				Dynamic tmp21 = this->OnBlack3Button_dyn();		HX_STACK_VAR(tmp21,"tmp21");
				HX_STACK_LINE(590)
				tmp20->addEventListener(HX_HCSTRING("click","\x48","\x7c","\x5e","\x48"),tmp21,null(),null(),null());
				HX_STACK_LINE(591)
				::openfl::text::TextField tmp22 = this->end2Display;		HX_STACK_VAR(tmp22,"tmp22");
				HX_STACK_LINE(591)
				Dynamic tmp23 = this->End2Roll_dyn();		HX_STACK_VAR(tmp23,"tmp23");
				HX_STACK_LINE(591)
				tmp22->addEventListener(HX_HCSTRING("rollOver","\x71","\xab","\xa8","\x12"),tmp23,null(),null(),null());
				HX_STACK_LINE(592)
				::openfl::text::TextField tmp24 = this->end2Display;		HX_STACK_VAR(tmp24,"tmp24");
				HX_STACK_LINE(592)
				Dynamic tmp25 = this->End2Out_dyn();		HX_STACK_VAR(tmp25,"tmp25");
				HX_STACK_LINE(592)
				tmp24->addEventListener(HX_HCSTRING("rollOut","\x11","\xf9","\x11","\x5d"),tmp25,null(),null(),null());
			}
;
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Main_obj,OnBlack2Button,(void))

Void Main_obj::OnBlack3Button( ::openfl::events::MouseEvent event){
{
		HX_STACK_FRAME("Main","OnBlack3Button",0x9afc7efa,"Main.OnBlack3Button","Main.hx",597,0x087e5c05)
		HX_STACK_THIS(this)
		HX_STACK_ARG(event,"event")
		HX_STACK_LINE(598)
		this->removeChildren(null(),null());
		HX_STACK_LINE(600)
		::openfl::display::BitmapData tmp = ::openfl::utils::Assets_obj::getBitmapData(HX_HCSTRING("img/black.png","\x2e","\x9e","\xe4","\xb4"),null());		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(600)
		::openfl::display::BitmapData backdropData = tmp;		HX_STACK_VAR(backdropData,"backdropData");
		HX_STACK_LINE(601)
		::openfl::display::Bitmap tmp1 = ::openfl::display::Bitmap_obj::__new(backdropData,null(),null());		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(601)
		::openfl::display::Bitmap backdrop = tmp1;		HX_STACK_VAR(backdrop,"backdrop");
		HX_STACK_LINE(602)
		::openfl::display::Bitmap tmp2 = backdrop;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(602)
		this->addChild(tmp2);
		HX_STACK_LINE(603)
		backdrop->set_scaleX((int)1);
		HX_STACK_LINE(604)
		backdrop->set_scaleY((int)1);
		HX_STACK_LINE(606)
		::sys::db::ResultSet tmp3 = ::Database_obj::getEnd3();		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(606)
		::sys::db::ResultSet result = tmp3;		HX_STACK_VAR(result,"result");
		HX_STACK_LINE(607)
		::sys::db::ResultSet tmp4 = result;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(607)
		for(::cpp::FastIterator_obj< Dynamic > *__it = ::cpp::CreateFastIterator< Dynamic >(tmp4);  __it->hasNext(); ){
			Dynamic row = __it->next();
			{
				HX_STACK_LINE(609)
				::openfl::text::TextFormat tmp5 = ::openfl::text::TextFormat_obj::__new(HX_HCSTRING("fonts/PAPYRUS.TTF","\x83","\x91","\xd1","\x4a"),(int)40,(int)16777215,true,null(),null(),null(),null(),null(),null(),null(),null(),null());		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(609)
				::openfl::text::TextFormat QATextFormat = tmp5;		HX_STACK_VAR(QATextFormat,"QATextFormat");
				HX_STACK_LINE(611)
				::String QA = row->__Field(HX_HCSTRING("QA","\xd0","\x46","\x00","\x00"), hx::paccDynamic );		HX_STACK_VAR(QA,"QA");
				HX_STACK_LINE(612)
				::String tmp6 = (HX_HCSTRING("","\x00","\x00","\x00","\x00") + QA);		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(612)
				Dynamic tmp7 = hx::SourceInfo(HX_HCSTRING("Main.hx","\x05","\x5c","\x7e","\x08"),612,HX_HCSTRING("Main","\x59","\x64","\x2f","\x33"),HX_HCSTRING("OnBlack3Button","\x85","\x62","\x46","\x0c"));		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(612)
				::haxe::Log_obj::trace(tmp6,tmp7);
				HX_STACK_LINE(614)
				::openfl::text::TextField tmp8 = ::openfl::text::TextField_obj::__new();		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(614)
				this->end3Display = tmp8;
				HX_STACK_LINE(615)
				::openfl::text::TextField tmp9 = this->end3Display;		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(615)
				tmp9->set_autoSize(((Dynamic)((int)1)));
				HX_STACK_LINE(616)
				::openfl::text::TextField tmp10 = this->end3Display;		HX_STACK_VAR(tmp10,"tmp10");
				HX_STACK_LINE(616)
				::openfl::text::TextFormat tmp11 = QATextFormat;		HX_STACK_VAR(tmp11,"tmp11");
				HX_STACK_LINE(616)
				tmp10->set_defaultTextFormat(tmp11);
				HX_STACK_LINE(617)
				::openfl::text::TextField tmp12 = this->end3Display;		HX_STACK_VAR(tmp12,"tmp12");
				HX_STACK_LINE(617)
				tmp12->set_selectable(false);
				HX_STACK_LINE(618)
				::openfl::text::TextField tmp13 = this->end3Display;		HX_STACK_VAR(tmp13,"tmp13");
				HX_STACK_LINE(618)
				tmp13->set_border(false);
				HX_STACK_LINE(619)
				::openfl::text::TextField tmp14 = this->end3Display;		HX_STACK_VAR(tmp14,"tmp14");
				HX_STACK_LINE(619)
				tmp14->set_x((int)400);
				HX_STACK_LINE(620)
				::openfl::text::TextField tmp15 = this->end3Display;		HX_STACK_VAR(tmp15,"tmp15");
				HX_STACK_LINE(620)
				tmp15->set_y((int)500);
				HX_STACK_LINE(621)
				::openfl::text::TextField tmp16 = this->end3Display;		HX_STACK_VAR(tmp16,"tmp16");
				HX_STACK_LINE(621)
				::String tmp17 = QA;		HX_STACK_VAR(tmp17,"tmp17");
				HX_STACK_LINE(621)
				::String tmp18 = ::Std_obj::string(tmp17);		HX_STACK_VAR(tmp18,"tmp18");
				HX_STACK_LINE(621)
				tmp16->set_text(tmp18);
				HX_STACK_LINE(622)
				::openfl::text::TextField tmp19 = this->end3Display;		HX_STACK_VAR(tmp19,"tmp19");
				HX_STACK_LINE(622)
				this->addChild(tmp19);
				HX_STACK_LINE(623)
				::openfl::text::TextField tmp20 = this->end3Display;		HX_STACK_VAR(tmp20,"tmp20");
				HX_STACK_LINE(623)
				Dynamic tmp21 = this->OnBlack4Button_dyn();		HX_STACK_VAR(tmp21,"tmp21");
				HX_STACK_LINE(623)
				tmp20->addEventListener(HX_HCSTRING("click","\x48","\x7c","\x5e","\x48"),tmp21,null(),null(),null());
				HX_STACK_LINE(624)
				::openfl::text::TextField tmp22 = this->end3Display;		HX_STACK_VAR(tmp22,"tmp22");
				HX_STACK_LINE(624)
				Dynamic tmp23 = this->End3Roll_dyn();		HX_STACK_VAR(tmp23,"tmp23");
				HX_STACK_LINE(624)
				tmp22->addEventListener(HX_HCSTRING("rollOver","\x71","\xab","\xa8","\x12"),tmp23,null(),null(),null());
				HX_STACK_LINE(625)
				::openfl::text::TextField tmp24 = this->end3Display;		HX_STACK_VAR(tmp24,"tmp24");
				HX_STACK_LINE(625)
				Dynamic tmp25 = this->End3Out_dyn();		HX_STACK_VAR(tmp25,"tmp25");
				HX_STACK_LINE(625)
				tmp24->addEventListener(HX_HCSTRING("rollOut","\x11","\xf9","\x11","\x5d"),tmp25,null(),null(),null());
			}
;
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Main_obj,OnBlack3Button,(void))

Void Main_obj::OnBlack4Button( ::openfl::events::MouseEvent event){
{
		HX_STACK_FRAME("Main","OnBlack4Button",0xc491f5bb,"Main.OnBlack4Button","Main.hx",632,0x087e5c05)
		HX_STACK_THIS(this)
		HX_STACK_ARG(event,"event")
		HX_STACK_LINE(632)
		this->gamestart();
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Main_obj,OnBlack4Button,(void))

Void Main_obj::TooLate( ){
{
		HX_STACK_FRAME("Main","TooLate",0x86da06a5,"Main.TooLate","Main.hx",636,0x087e5c05)
		HX_STACK_THIS(this)
		HX_STACK_LINE(638)
		bool tmp = this->stopTimer;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(638)
		bool tmp1 = (tmp == false);		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(638)
		if ((tmp1)){
			HX_STACK_LINE(640)
			this->removeChildren(null(),null());
			HX_STACK_LINE(642)
			::openfl::display::BitmapData tmp2 = ::openfl::utils::Assets_obj::getBitmapData(HX_HCSTRING("img/whiter.png","\x30","\x2d","\x79","\x2f"),null());		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(642)
			::openfl::display::BitmapData backdropData = tmp2;		HX_STACK_VAR(backdropData,"backdropData");
			HX_STACK_LINE(643)
			::openfl::display::Bitmap tmp3 = ::openfl::display::Bitmap_obj::__new(backdropData,null(),null());		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(643)
			::openfl::display::Bitmap backdrop = tmp3;		HX_STACK_VAR(backdrop,"backdrop");
			HX_STACK_LINE(644)
			::openfl::display::Bitmap tmp4 = backdrop;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(644)
			this->addChild(tmp4);
			HX_STACK_LINE(645)
			backdrop->set_scaleX((int)1);
			HX_STACK_LINE(646)
			backdrop->set_scaleY((int)1);
			HX_STACK_LINE(648)
			::openfl::text::TextFormat tmp5 = ::openfl::text::TextFormat_obj::__new(HX_HCSTRING("fonts/PAPYRUS.TTF","\x83","\x91","\xd1","\x4a"),(int)40,(int)-16777216,true,null(),null(),null(),null(),null(),null(),null(),null(),null());		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(648)
			::openfl::text::TextFormat QATextFormat = tmp5;		HX_STACK_VAR(QATextFormat,"QATextFormat");
			HX_STACK_LINE(649)
			::sys::db::ResultSet tmp6 = ::Database_obj::getLate();		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(649)
			::sys::db::ResultSet result = tmp6;		HX_STACK_VAR(result,"result");
			HX_STACK_LINE(650)
			::sys::db::ResultSet tmp7 = result;		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(650)
			for(::cpp::FastIterator_obj< Dynamic > *__it = ::cpp::CreateFastIterator< Dynamic >(tmp7);  __it->hasNext(); ){
				Dynamic row = __it->next();
				{
					HX_STACK_LINE(653)
					::String creditname = row->__Field(HX_HCSTRING("QA","\xd0","\x46","\x00","\x00"), hx::paccDynamic );		HX_STACK_VAR(creditname,"creditname");
					HX_STACK_LINE(654)
					::String QA = row->__Field(HX_HCSTRING("QA","\xd0","\x46","\x00","\x00"), hx::paccDynamic );		HX_STACK_VAR(QA,"QA");
					HX_STACK_LINE(655)
					::String tmp8 = (HX_HCSTRING("","\x00","\x00","\x00","\x00") + QA);		HX_STACK_VAR(tmp8,"tmp8");
					HX_STACK_LINE(655)
					Dynamic tmp9 = hx::SourceInfo(HX_HCSTRING("Main.hx","\x05","\x5c","\x7e","\x08"),655,HX_HCSTRING("Main","\x59","\x64","\x2f","\x33"),HX_HCSTRING("TooLate","\xba","\x9f","\xa8","\x22"));		HX_STACK_VAR(tmp9,"tmp9");
					HX_STACK_LINE(655)
					::haxe::Log_obj::trace(tmp8,tmp9);
					HX_STACK_LINE(657)
					::openfl::text::TextField tmp10 = ::openfl::text::TextField_obj::__new();		HX_STACK_VAR(tmp10,"tmp10");
					HX_STACK_LINE(657)
					this->ADisplay = tmp10;
					HX_STACK_LINE(658)
					::openfl::text::TextField tmp11 = this->ADisplay;		HX_STACK_VAR(tmp11,"tmp11");
					HX_STACK_LINE(658)
					tmp11->set_autoSize(((Dynamic)((int)1)));
					HX_STACK_LINE(659)
					::openfl::text::TextField tmp12 = this->ADisplay;		HX_STACK_VAR(tmp12,"tmp12");
					HX_STACK_LINE(659)
					::openfl::text::TextFormat tmp13 = QATextFormat;		HX_STACK_VAR(tmp13,"tmp13");
					HX_STACK_LINE(659)
					tmp12->set_defaultTextFormat(tmp13);
					HX_STACK_LINE(660)
					::openfl::text::TextField tmp14 = this->ADisplay;		HX_STACK_VAR(tmp14,"tmp14");
					HX_STACK_LINE(660)
					tmp14->set_selectable(false);
					HX_STACK_LINE(661)
					::openfl::text::TextField tmp15 = this->ADisplay;		HX_STACK_VAR(tmp15,"tmp15");
					HX_STACK_LINE(661)
					tmp15->set_border(false);
					HX_STACK_LINE(662)
					::openfl::text::TextField tmp16 = this->ADisplay;		HX_STACK_VAR(tmp16,"tmp16");
					HX_STACK_LINE(662)
					tmp16->set_x((int)300);
					HX_STACK_LINE(663)
					::openfl::text::TextField tmp17 = this->ADisplay;		HX_STACK_VAR(tmp17,"tmp17");
					HX_STACK_LINE(663)
					tmp17->set_y((int)510);
					HX_STACK_LINE(664)
					::openfl::text::TextField tmp18 = this->ADisplay;		HX_STACK_VAR(tmp18,"tmp18");
					HX_STACK_LINE(664)
					::String tmp19 = QA;		HX_STACK_VAR(tmp19,"tmp19");
					HX_STACK_LINE(664)
					::String tmp20 = ::Std_obj::string(tmp19);		HX_STACK_VAR(tmp20,"tmp20");
					HX_STACK_LINE(664)
					tmp18->set_text(tmp20);
					HX_STACK_LINE(665)
					::openfl::text::TextField tmp21 = this->ADisplay;		HX_STACK_VAR(tmp21,"tmp21");
					HX_STACK_LINE(665)
					this->addChild(tmp21);
					HX_STACK_LINE(666)
					::openfl::text::TextField tmp22 = this->ADisplay;		HX_STACK_VAR(tmp22,"tmp22");
					HX_STACK_LINE(666)
					Dynamic tmp23 = this->OnBlack4Button_dyn();		HX_STACK_VAR(tmp23,"tmp23");
					HX_STACK_LINE(666)
					tmp22->addEventListener(HX_HCSTRING("click","\x48","\x7c","\x5e","\x48"),tmp23,null(),null(),null());
					HX_STACK_LINE(667)
					::openfl::text::TextField tmp24 = this->ADisplay;		HX_STACK_VAR(tmp24,"tmp24");
					HX_STACK_LINE(667)
					Dynamic tmp25 = this->ARoll_dyn();		HX_STACK_VAR(tmp25,"tmp25");
					HX_STACK_LINE(667)
					tmp24->addEventListener(HX_HCSTRING("rollOver","\x71","\xab","\xa8","\x12"),tmp25,null(),null(),null());
					HX_STACK_LINE(668)
					::openfl::text::TextField tmp26 = this->ADisplay;		HX_STACK_VAR(tmp26,"tmp26");
					HX_STACK_LINE(668)
					Dynamic tmp27 = this->AOut_dyn();		HX_STACK_VAR(tmp27,"tmp27");
					HX_STACK_LINE(668)
					tmp26->addEventListener(HX_HCSTRING("rollOut","\x11","\xf9","\x11","\x5d"),tmp27,null(),null(),null());
				}
;
			}
		}
		HX_STACK_LINE(671)
		Dynamic tmp2 = hx::SourceInfo(HX_HCSTRING("Main.hx","\x05","\x5c","\x7e","\x08"),671,HX_HCSTRING("Main","\x59","\x64","\x2f","\x33"),HX_HCSTRING("TooLate","\xba","\x9f","\xa8","\x22"));		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(671)
		::haxe::Log_obj::trace(HX_HCSTRING("boii","\xed","\x7e","\x1b","\x41"),tmp2);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(Main_obj,TooLate,(void))

Void Main_obj::Victory( ::openfl::events::MouseEvent event){
{
		HX_STACK_FRAME("Main","Victory",0xa58cfa9d,"Main.Victory","Main.hx",675,0x087e5c05)
		HX_STACK_THIS(this)
		HX_STACK_ARG(event,"event")
		HX_STACK_LINE(676)
		this->removeChildren(null(),null());
		HX_STACK_LINE(678)
		::openfl::display::BitmapData tmp = ::openfl::utils::Assets_obj::getBitmapData(HX_HCSTRING("img/whiter.png","\x30","\x2d","\x79","\x2f"),null());		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(678)
		::openfl::display::BitmapData backdropData = tmp;		HX_STACK_VAR(backdropData,"backdropData");
		HX_STACK_LINE(679)
		::openfl::display::Bitmap tmp1 = ::openfl::display::Bitmap_obj::__new(backdropData,null(),null());		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(679)
		::openfl::display::Bitmap backdrop = tmp1;		HX_STACK_VAR(backdrop,"backdrop");
		HX_STACK_LINE(680)
		::openfl::display::Bitmap tmp2 = backdrop;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(680)
		this->addChild(tmp2);
		HX_STACK_LINE(681)
		backdrop->set_scaleX((int)1);
		HX_STACK_LINE(682)
		backdrop->set_scaleY((int)1);
		HX_STACK_LINE(684)
		::openfl::text::TextField tmp3 = ::openfl::text::TextField_obj::__new();		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(684)
		::Main_obj::input2 = tmp3;
		HX_STACK_LINE(685)
		::openfl::text::TextField tmp4 = ::Main_obj::input2;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(685)
		tmp4->set_border(true);
		HX_STACK_LINE(686)
		::openfl::text::TextField tmp5 = ::Main_obj::input2;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(686)
		tmp5->set_multiline(false);
		HX_STACK_LINE(687)
		::openfl::text::TextField tmp6 = ::Main_obj::input2;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(687)
		tmp6->set_selectable(true);
		HX_STACK_LINE(688)
		::openfl::text::TextField tmp7 = ::Main_obj::input2;		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(688)
		tmp7->set_type(((Dynamic)((int)1)));
		HX_STACK_LINE(689)
		::openfl::text::TextField tmp8 = ::Main_obj::input2;		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(689)
		tmp8->set_autoSize(((Dynamic)((int)1)));
		HX_STACK_LINE(690)
		::openfl::text::TextField tmp9 = ::Main_obj::input2;		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(690)
		tmp9->set_background(true);
		HX_STACK_LINE(691)
		::openfl::text::TextField tmp10 = ::Main_obj::input2;		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(691)
		tmp10->set_backgroundColor((int)11250603);
		HX_STACK_LINE(692)
		::openfl::text::TextField tmp11 = ::Main_obj::input2;		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(692)
		tmp11->set_x((int)930);
		HX_STACK_LINE(693)
		::openfl::text::TextField tmp12 = ::Main_obj::input2;		HX_STACK_VAR(tmp12,"tmp12");
		HX_STACK_LINE(693)
		tmp12->set_y((int)240);
		HX_STACK_LINE(694)
		::openfl::text::TextField tmp13 = ::Main_obj::input2;		HX_STACK_VAR(tmp13,"tmp13");
		HX_STACK_LINE(694)
		this->addChild(tmp13);
		HX_STACK_LINE(696)
		::openfl::text::TextField tmp14 = ::openfl::text::TextField_obj::__new();		HX_STACK_VAR(tmp14,"tmp14");
		HX_STACK_LINE(696)
		::Main_obj::text = tmp14;
		HX_STACK_LINE(697)
		::openfl::text::TextField tmp15 = ::Main_obj::text;		HX_STACK_VAR(tmp15,"tmp15");
		HX_STACK_LINE(697)
		tmp15->set_border(true);
		HX_STACK_LINE(698)
		::openfl::text::TextField tmp16 = ::Main_obj::text;		HX_STACK_VAR(tmp16,"tmp16");
		HX_STACK_LINE(698)
		tmp16->set_multiline(false);
		HX_STACK_LINE(699)
		::openfl::text::TextField tmp17 = ::Main_obj::text;		HX_STACK_VAR(tmp17,"tmp17");
		HX_STACK_LINE(699)
		tmp17->set_selectable(false);
		HX_STACK_LINE(700)
		::openfl::text::TextField tmp18 = ::Main_obj::text;		HX_STACK_VAR(tmp18,"tmp18");
		HX_STACK_LINE(700)
		tmp18->set_text(HX_HCSTRING("Fill in your name for the highscores and press next","\x2a","\x79","\x85","\x71"));
		HX_STACK_LINE(701)
		::openfl::text::TextField tmp19 = ::Main_obj::text;		HX_STACK_VAR(tmp19,"tmp19");
		HX_STACK_LINE(701)
		tmp19->set_autoSize(((Dynamic)((int)1)));
		HX_STACK_LINE(702)
		::openfl::text::TextField tmp20 = ::Main_obj::text;		HX_STACK_VAR(tmp20,"tmp20");
		HX_STACK_LINE(702)
		tmp20->set_background(true);
		HX_STACK_LINE(703)
		::openfl::text::TextField tmp21 = ::Main_obj::text;		HX_STACK_VAR(tmp21,"tmp21");
		HX_STACK_LINE(703)
		tmp21->set_backgroundColor((int)11250603);
		HX_STACK_LINE(704)
		::openfl::text::TextField tmp22 = ::Main_obj::text;		HX_STACK_VAR(tmp22,"tmp22");
		HX_STACK_LINE(704)
		tmp22->set_x((int)850);
		HX_STACK_LINE(705)
		::openfl::text::TextField tmp23 = ::Main_obj::text;		HX_STACK_VAR(tmp23,"tmp23");
		HX_STACK_LINE(705)
		tmp23->set_y((int)190);
		HX_STACK_LINE(706)
		::openfl::text::TextField tmp24 = ::Main_obj::text;		HX_STACK_VAR(tmp24,"tmp24");
		HX_STACK_LINE(706)
		this->addChild(tmp24);
		HX_STACK_LINE(708)
		::Button tmp25 = ::Button_obj::__new(HX_HCSTRING("okay_Button","\x1d","\x3d","\xcd","\xb2"));		HX_STACK_VAR(tmp25,"tmp25");
		HX_STACK_LINE(708)
		this->okayButton = tmp25;
		HX_STACK_LINE(709)
		::Button tmp26 = this->okayButton;		HX_STACK_VAR(tmp26,"tmp26");
		HX_STACK_LINE(709)
		this->addChild(tmp26);
		HX_STACK_LINE(710)
		::Button tmp27 = this->okayButton;		HX_STACK_VAR(tmp27,"tmp27");
		HX_STACK_LINE(710)
		tmp27->set_x((int)850);
		HX_STACK_LINE(711)
		::Button tmp28 = this->okayButton;		HX_STACK_VAR(tmp28,"tmp28");
		HX_STACK_LINE(711)
		tmp28->set_y((int)430);
		HX_STACK_LINE(712)
		::Button tmp29 = this->okayButton;		HX_STACK_VAR(tmp29,"tmp29");
		HX_STACK_LINE(712)
		Dynamic tmp30 = this->nameScene_dyn();		HX_STACK_VAR(tmp30,"tmp30");
		HX_STACK_LINE(712)
		tmp29->addEventListener(HX_HCSTRING("click","\x48","\x7c","\x5e","\x48"),tmp30,null(),null(),null());
		HX_STACK_LINE(713)
		::Button tmp31 = this->okayButton;		HX_STACK_VAR(tmp31,"tmp31");
		HX_STACK_LINE(713)
		Dynamic tmp32 = this->okayRoll_dyn();		HX_STACK_VAR(tmp32,"tmp32");
		HX_STACK_LINE(713)
		tmp31->addEventListener(HX_HCSTRING("rollOver","\x71","\xab","\xa8","\x12"),tmp32,null(),null(),null());
		HX_STACK_LINE(714)
		::Button tmp33 = this->okayButton;		HX_STACK_VAR(tmp33,"tmp33");
		HX_STACK_LINE(714)
		Dynamic tmp34 = this->okayOut_dyn();		HX_STACK_VAR(tmp34,"tmp34");
		HX_STACK_LINE(714)
		tmp33->addEventListener(HX_HCSTRING("rollOut","\x11","\xf9","\x11","\x5d"),tmp34,null(),null(),null());
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Main_obj,Victory,(void))

Void Main_obj::nameScene( ::openfl::events::MouseEvent event){
{
		HX_STACK_FRAME("Main","nameScene",0x530fdeac,"Main.nameScene","Main.hx",733,0x087e5c05)
		HX_STACK_THIS(this)
		HX_STACK_ARG(event,"event")
		HX_STACK_LINE(735)
		::openfl::text::TextField tmp = ::Main_obj::input2;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(735)
		::String tmp1 = tmp->get_text();		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(735)
		::Main_obj::Setanswer2(tmp1);
		HX_STACK_LINE(736)
		::sys::db::Connection tmp2 = ::Database_obj::getInstance();		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(736)
		::sys::db::Connection result = tmp2;		HX_STACK_VAR(result,"result");
		HX_STACK_LINE(737)
		result->request(HX_HCSTRING("create table if not exists highscores (name text);","\x3f","\x58","\xfd","\xa0"));
		HX_STACK_LINE(738)
		::String tmp3 = ::Main_obj::input3;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(738)
		::String tmp4 = (HX_HCSTRING("insert into highscores values ('","\xb9","\x39","\xe3","\xba") + tmp3);		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(738)
		::String tmp5 = (tmp4 + HX_HCSTRING("');","\xd9","\xbb","\x1d","\x00"));		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(738)
		result->request(tmp5);
		HX_STACK_LINE(739)
		this->gamestart();
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Main_obj,nameScene,(void))

Void Main_obj::OnCreditGame( ::openfl::events::MouseEvent event){
{
		HX_STACK_FRAME("Main","OnCreditGame",0xd7f3681f,"Main.OnCreditGame","Main.hx",754,0x087e5c05)
		HX_STACK_THIS(this)
		HX_STACK_ARG(event,"event")
		HX_STACK_LINE(755)
		this->removeChildren(null(),null());
		HX_STACK_LINE(759)
		::openfl::text::TextFormat tmp = ::openfl::text::TextFormat_obj::__new(HX_HCSTRING("fonts/PAPYRUS.TTF","\x83","\x91","\xd1","\x4a"),(int)28,(int)-16777216,true,null(),null(),null(),null(),null(),null(),null(),null(),null());		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(759)
		::openfl::text::TextFormat scoreTextFormat = tmp;		HX_STACK_VAR(scoreTextFormat,"scoreTextFormat");
		HX_STACK_LINE(761)
		::openfl::display::BitmapData tmp1 = ::openfl::utils::Assets_obj::getBitmapData(HX_HCSTRING("img/whiter.png","\x30","\x2d","\x79","\x2f"),null());		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(761)
		::openfl::display::BitmapData backdropData = tmp1;		HX_STACK_VAR(backdropData,"backdropData");
		HX_STACK_LINE(762)
		::openfl::display::Bitmap tmp2 = ::openfl::display::Bitmap_obj::__new(backdropData,null(),null());		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(762)
		::openfl::display::Bitmap backdrop = tmp2;		HX_STACK_VAR(backdrop,"backdrop");
		HX_STACK_LINE(763)
		::openfl::display::Bitmap tmp3 = backdrop;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(763)
		this->addChild(tmp3);
		HX_STACK_LINE(764)
		backdrop->set_scaleX((int)1);
		HX_STACK_LINE(765)
		backdrop->set_scaleY((int)1);
		HX_STACK_LINE(767)
		int yPos = (int)10;		HX_STACK_VAR(yPos,"yPos");
		HX_STACK_LINE(770)
		::sys::db::ResultSet tmp4 = ::Database_obj::getCredits();		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(770)
		::sys::db::ResultSet result = tmp4;		HX_STACK_VAR(result,"result");
		HX_STACK_LINE(771)
		::sys::db::ResultSet tmp5 = result;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(771)
		for(::cpp::FastIterator_obj< Dynamic > *__it = ::cpp::CreateFastIterator< Dynamic >(tmp5);  __it->hasNext(); ){
			Dynamic row = __it->next();
			{
				HX_STACK_LINE(773)
				hx::AddEq(yPos,(int)50);
				HX_STACK_LINE(775)
				::String creditname = row->__Field(HX_HCSTRING("Name","\x6b","\x9e","\xd8","\x33"), hx::paccDynamic );		HX_STACK_VAR(creditname,"creditname");
				HX_STACK_LINE(776)
				::String job = row->__Field(HX_HCSTRING("Job","\xdd","\x87","\x38","\x00"), hx::paccDynamic );		HX_STACK_VAR(job,"job");
				HX_STACK_LINE(777)
				::String tmp6 = (HX_HCSTRING("","\x00","\x00","\x00","\x00") + creditname);		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(777)
				::String tmp7 = (tmp6 + HX_HCSTRING(" - ","\x73","\x6f","\x18","\x00"));		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(777)
				::String tmp8 = job;		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(777)
				::String tmp9 = (tmp7 + tmp8);		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(777)
				Dynamic tmp10 = hx::SourceInfo(HX_HCSTRING("Main.hx","\x05","\x5c","\x7e","\x08"),777,HX_HCSTRING("Main","\x59","\x64","\x2f","\x33"),HX_HCSTRING("OnCreditGame","\xea","\xc2","\x18","\xb1"));		HX_STACK_VAR(tmp10,"tmp10");
				HX_STACK_LINE(777)
				::haxe::Log_obj::trace(tmp9,tmp10);
				HX_STACK_LINE(781)
				::openfl::text::TextField tmp11 = ::openfl::text::TextField_obj::__new();		HX_STACK_VAR(tmp11,"tmp11");
				HX_STACK_LINE(781)
				this->jobDisplay = tmp11;
				HX_STACK_LINE(782)
				::openfl::text::TextField tmp12 = this->jobDisplay;		HX_STACK_VAR(tmp12,"tmp12");
				HX_STACK_LINE(782)
				tmp12->set_autoSize(((Dynamic)((int)1)));
				HX_STACK_LINE(783)
				::openfl::text::TextField tmp13 = this->jobDisplay;		HX_STACK_VAR(tmp13,"tmp13");
				HX_STACK_LINE(783)
				::openfl::text::TextFormat tmp14 = scoreTextFormat;		HX_STACK_VAR(tmp14,"tmp14");
				HX_STACK_LINE(783)
				tmp13->set_defaultTextFormat(tmp14);
				HX_STACK_LINE(784)
				::openfl::text::TextField tmp15 = this->jobDisplay;		HX_STACK_VAR(tmp15,"tmp15");
				HX_STACK_LINE(784)
				tmp15->set_selectable(false);
				HX_STACK_LINE(785)
				::openfl::text::TextField tmp16 = this->jobDisplay;		HX_STACK_VAR(tmp16,"tmp16");
				HX_STACK_LINE(785)
				tmp16->set_border(false);
				HX_STACK_LINE(786)
				::openfl::text::TextField tmp17 = this->jobDisplay;		HX_STACK_VAR(tmp17,"tmp17");
				HX_STACK_LINE(786)
				tmp17->set_x((int)300);
				HX_STACK_LINE(787)
				::openfl::text::TextField tmp18 = this->jobDisplay;		HX_STACK_VAR(tmp18,"tmp18");
				HX_STACK_LINE(787)
				int tmp19 = yPos;		HX_STACK_VAR(tmp19,"tmp19");
				HX_STACK_LINE(787)
				tmp18->set_y(tmp19);
				HX_STACK_LINE(788)
				::openfl::text::TextField tmp20 = this->jobDisplay;		HX_STACK_VAR(tmp20,"tmp20");
				HX_STACK_LINE(788)
				::String tmp21 = job;		HX_STACK_VAR(tmp21,"tmp21");
				HX_STACK_LINE(788)
				::String tmp22 = ::Std_obj::string(tmp21);		HX_STACK_VAR(tmp22,"tmp22");
				HX_STACK_LINE(788)
				tmp20->set_text(tmp22);
				HX_STACK_LINE(789)
				::openfl::text::TextField tmp23 = this->jobDisplay;		HX_STACK_VAR(tmp23,"tmp23");
				HX_STACK_LINE(789)
				this->addChild(tmp23);
				HX_STACK_LINE(791)
				::openfl::text::TextField tmp24 = ::openfl::text::TextField_obj::__new();		HX_STACK_VAR(tmp24,"tmp24");
				HX_STACK_LINE(791)
				this->creditnameDisplay = tmp24;
				HX_STACK_LINE(792)
				::openfl::text::TextField tmp25 = this->creditnameDisplay;		HX_STACK_VAR(tmp25,"tmp25");
				HX_STACK_LINE(792)
				tmp25->set_autoSize(((Dynamic)((int)1)));
				HX_STACK_LINE(793)
				::openfl::text::TextField tmp26 = this->creditnameDisplay;		HX_STACK_VAR(tmp26,"tmp26");
				HX_STACK_LINE(793)
				::openfl::text::TextFormat tmp27 = scoreTextFormat;		HX_STACK_VAR(tmp27,"tmp27");
				HX_STACK_LINE(793)
				tmp26->set_defaultTextFormat(tmp27);
				HX_STACK_LINE(794)
				::openfl::text::TextField tmp28 = this->creditnameDisplay;		HX_STACK_VAR(tmp28,"tmp28");
				HX_STACK_LINE(794)
				tmp28->set_selectable(false);
				HX_STACK_LINE(795)
				::openfl::text::TextField tmp29 = this->creditnameDisplay;		HX_STACK_VAR(tmp29,"tmp29");
				HX_STACK_LINE(795)
				tmp29->set_border(false);
				HX_STACK_LINE(796)
				::openfl::text::TextField tmp30 = this->creditnameDisplay;		HX_STACK_VAR(tmp30,"tmp30");
				HX_STACK_LINE(796)
				tmp30->set_x((int)10);
				HX_STACK_LINE(797)
				::openfl::text::TextField tmp31 = this->creditnameDisplay;		HX_STACK_VAR(tmp31,"tmp31");
				HX_STACK_LINE(797)
				int tmp32 = yPos;		HX_STACK_VAR(tmp32,"tmp32");
				HX_STACK_LINE(797)
				tmp31->set_y(tmp32);
				HX_STACK_LINE(798)
				::openfl::text::TextField tmp33 = this->creditnameDisplay;		HX_STACK_VAR(tmp33,"tmp33");
				HX_STACK_LINE(798)
				::String tmp34 = creditname;		HX_STACK_VAR(tmp34,"tmp34");
				HX_STACK_LINE(798)
				::String tmp35 = ::Std_obj::string(tmp34);		HX_STACK_VAR(tmp35,"tmp35");
				HX_STACK_LINE(798)
				tmp33->set_text(tmp35);
				HX_STACK_LINE(799)
				::openfl::text::TextField tmp36 = this->creditnameDisplay;		HX_STACK_VAR(tmp36,"tmp36");
				HX_STACK_LINE(799)
				this->addChild(tmp36);
			}
;
		}
		HX_STACK_LINE(803)
		::Button tmp6 = ::Button_obj::__new(HX_HCSTRING("Back_Button","\x4a","\x48","\xec","\x0d"));		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(803)
		this->backButton = tmp6;
		HX_STACK_LINE(804)
		::Button tmp7 = this->backButton;		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(804)
		Dynamic tmp8 = this->OnBackButton_dyn();		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(804)
		tmp7->addEventListener(HX_HCSTRING("click","\x48","\x7c","\x5e","\x48"),tmp8,null(),null(),null());
		HX_STACK_LINE(805)
		::Button tmp9 = this->backButton;		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(805)
		this->addChild(tmp9);
		HX_STACK_LINE(806)
		::Button tmp10 = this->backButton;		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(806)
		tmp10->set_x((int)450);
		HX_STACK_LINE(807)
		::Button tmp11 = this->backButton;		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(807)
		tmp11->set_y((int)850);
		HX_STACK_LINE(808)
		::Button tmp12 = this->backButton;		HX_STACK_VAR(tmp12,"tmp12");
		HX_STACK_LINE(808)
		Dynamic tmp13 = this->backRoll_dyn();		HX_STACK_VAR(tmp13,"tmp13");
		HX_STACK_LINE(808)
		tmp12->addEventListener(HX_HCSTRING("rollOver","\x71","\xab","\xa8","\x12"),tmp13,null(),null(),null());
		HX_STACK_LINE(809)
		::Button tmp14 = this->backButton;		HX_STACK_VAR(tmp14,"tmp14");
		HX_STACK_LINE(809)
		Dynamic tmp15 = this->backOut_dyn();		HX_STACK_VAR(tmp15,"tmp15");
		HX_STACK_LINE(809)
		tmp14->addEventListener(HX_HCSTRING("rollOut","\x11","\xf9","\x11","\x5d"),tmp15,null(),null(),null());
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Main_obj,OnCreditGame,(void))

Void Main_obj::OnQuitGame( ::openfl::events::MouseEvent event){
{
		HX_STACK_FRAME("Main","OnQuitGame",0xa1af49b5,"Main.OnQuitGame","Main.hx",814,0x087e5c05)
		HX_STACK_THIS(this)
		HX_STACK_ARG(event,"event")
		HX_STACK_LINE(814)
		::openfl::_system::System_obj::exit((int)0);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Main_obj,OnQuitGame,(void))

Void Main_obj::OnPlayMusicButton( ::openfl::events::MouseEvent event){
{
		HX_STACK_FRAME("Main","OnPlayMusicButton",0x07c8130f,"Main.OnPlayMusicButton","Main.hx",819,0x087e5c05)
		HX_STACK_THIS(this)
		HX_STACK_ARG(event,"event")
		HX_STACK_LINE(820)
		::Menu_obj::playMusic(HX_HCSTRING("whiteguy","\x82","\x93","\x30","\x84"));
		HX_STACK_LINE(823)
		::Button tmp = this->playmusicButton;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(823)
		this->removeChild(tmp);
		HX_STACK_LINE(825)
		::Button tmp1 = ::Button_obj::__new(HX_HCSTRING("Music_Button","\xcc","\xf1","\x20","\x2e"));		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(825)
		this->musicButton = tmp1;
		HX_STACK_LINE(826)
		::Button tmp2 = this->musicButton;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(826)
		Dynamic tmp3 = this->OnMusicButton_dyn();		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(826)
		tmp2->addEventListener(HX_HCSTRING("click","\x48","\x7c","\x5e","\x48"),tmp3,null(),null(),null());
		HX_STACK_LINE(827)
		::Button tmp4 = this->musicButton;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(827)
		this->addChild(tmp4);
		HX_STACK_LINE(828)
		::Button tmp5 = this->musicButton;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(828)
		tmp5->set_x(((Float)823.5));
		HX_STACK_LINE(829)
		::Button tmp6 = this->musicButton;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(829)
		tmp6->set_y((int)450);
		HX_STACK_LINE(830)
		::Button tmp7 = this->musicButton;		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(830)
		Dynamic tmp8 = this->musicRoll_dyn();		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(830)
		tmp7->addEventListener(HX_HCSTRING("rollOver","\x71","\xab","\xa8","\x12"),tmp8,null(),null(),null());
		HX_STACK_LINE(831)
		::Button tmp9 = this->musicButton;		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(831)
		Dynamic tmp10 = this->musicOut_dyn();		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(831)
		tmp9->addEventListener(HX_HCSTRING("rollOut","\x11","\xf9","\x11","\x5d"),tmp10,null(),null(),null());
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Main_obj,OnPlayMusicButton,(void))

Void Main_obj::OnMusicButton( ::openfl::events::MouseEvent event){
{
		HX_STACK_FRAME("Main","OnMusicButton",0x9f7186a3,"Main.OnMusicButton","Main.hx",835,0x087e5c05)
		HX_STACK_THIS(this)
		HX_STACK_ARG(event,"event")
		HX_STACK_LINE(836)
		::Menu_obj::stopMusic(HX_HCSTRING("whiteguy","\x82","\x93","\x30","\x84"));
		HX_STACK_LINE(839)
		::Button tmp = this->musicButton;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(839)
		this->removeChild(tmp);
		HX_STACK_LINE(841)
		::Button tmp1 = ::Button_obj::__new(HX_HCSTRING("Play_Button","\x1d","\xb8","\x28","\xd8"));		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(841)
		this->playmusicButton = tmp1;
		HX_STACK_LINE(842)
		::Button tmp2 = this->playmusicButton;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(842)
		Dynamic tmp3 = this->OnPlayMusicButton_dyn();		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(842)
		tmp2->addEventListener(HX_HCSTRING("click","\x48","\x7c","\x5e","\x48"),tmp3,null(),null(),null());
		HX_STACK_LINE(843)
		::Button tmp4 = this->playmusicButton;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(843)
		this->addChild(tmp4);
		HX_STACK_LINE(844)
		::Button tmp5 = this->playmusicButton;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(844)
		tmp5->set_x(((Float)823.5));
		HX_STACK_LINE(845)
		::Button tmp6 = this->playmusicButton;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(845)
		tmp6->set_y((int)450);
		HX_STACK_LINE(846)
		::Button tmp7 = this->playmusicButton;		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(846)
		Dynamic tmp8 = this->playmusicRoll_dyn();		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(846)
		tmp7->addEventListener(HX_HCSTRING("rollOver","\x71","\xab","\xa8","\x12"),tmp8,null(),null(),null());
		HX_STACK_LINE(847)
		::Button tmp9 = this->playmusicButton;		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(847)
		Dynamic tmp10 = this->playmusicOut_dyn();		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(847)
		tmp9->addEventListener(HX_HCSTRING("rollOut","\x11","\xf9","\x11","\x5d"),tmp10,null(),null(),null());
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Main_obj,OnMusicButton,(void))

Void Main_obj::OnLeaderboardButton( ::openfl::events::MouseEvent event){
{
		HX_STACK_FRAME("Main","OnLeaderboardButton",0xc3345bfb,"Main.OnLeaderboardButton","Main.hx",851,0x087e5c05)
		HX_STACK_THIS(this)
		HX_STACK_ARG(event,"event")
		HX_STACK_LINE(852)
		this->removeChildren(null(),null());
		HX_STACK_LINE(856)
		::openfl::text::TextFormat tmp = ::openfl::text::TextFormat_obj::__new(HX_HCSTRING("fonts/PAPYRUS.TTF","\x83","\x91","\xd1","\x4a"),(int)28,(int)-16777216,true,null(),null(),null(),null(),null(),null(),null(),null(),null());		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(856)
		::openfl::text::TextFormat scoreTextFormat = tmp;		HX_STACK_VAR(scoreTextFormat,"scoreTextFormat");
		HX_STACK_LINE(858)
		::openfl::display::BitmapData tmp1 = ::openfl::utils::Assets_obj::getBitmapData(HX_HCSTRING("img/whiter.png","\x30","\x2d","\x79","\x2f"),null());		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(858)
		::openfl::display::BitmapData backdropData = tmp1;		HX_STACK_VAR(backdropData,"backdropData");
		HX_STACK_LINE(859)
		::openfl::display::Bitmap tmp2 = ::openfl::display::Bitmap_obj::__new(backdropData,null(),null());		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(859)
		::openfl::display::Bitmap backdrop = tmp2;		HX_STACK_VAR(backdrop,"backdrop");
		HX_STACK_LINE(860)
		::openfl::display::Bitmap tmp3 = backdrop;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(860)
		this->addChild(tmp3);
		HX_STACK_LINE(861)
		backdrop->set_scaleX((int)1);
		HX_STACK_LINE(862)
		backdrop->set_scaleY((int)1);
		HX_STACK_LINE(864)
		int yPos = (int)10;		HX_STACK_VAR(yPos,"yPos");
		HX_STACK_LINE(867)
		::sys::db::ResultSet tmp4 = ::Database_obj::getHighscores();		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(867)
		::sys::db::ResultSet result = tmp4;		HX_STACK_VAR(result,"result");
		HX_STACK_LINE(868)
		::sys::db::ResultSet tmp5 = result;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(868)
		for(::cpp::FastIterator_obj< Dynamic > *__it = ::cpp::CreateFastIterator< Dynamic >(tmp5);  __it->hasNext(); ){
			Dynamic row = __it->next();
			{
				HX_STACK_LINE(870)
				hx::AddEq(yPos,(int)50);
				HX_STACK_LINE(872)
				::String name = row->__Field(HX_HCSTRING("name","\x4b","\x72","\xff","\x48"), hx::paccDynamic );		HX_STACK_VAR(name,"name");
				HX_STACK_LINE(873)
				::String tmp6 = (HX_HCSTRING("","\x00","\x00","\x00","\x00") + name);		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(873)
				Dynamic tmp7 = hx::SourceInfo(HX_HCSTRING("Main.hx","\x05","\x5c","\x7e","\x08"),873,HX_HCSTRING("Main","\x59","\x64","\x2f","\x33"),HX_HCSTRING("OnLeaderboardButton","\x90","\xc0","\xce","\x9f"));		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(873)
				::haxe::Log_obj::trace(tmp6,tmp7);
				HX_STACK_LINE(875)
				::openfl::text::TextField tmp8 = ::openfl::text::TextField_obj::__new();		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(875)
				this->nameDisplay = tmp8;
				HX_STACK_LINE(876)
				::openfl::text::TextField tmp9 = this->nameDisplay;		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(876)
				tmp9->set_autoSize(((Dynamic)((int)1)));
				HX_STACK_LINE(877)
				::openfl::text::TextField tmp10 = this->nameDisplay;		HX_STACK_VAR(tmp10,"tmp10");
				HX_STACK_LINE(877)
				::openfl::text::TextFormat tmp11 = scoreTextFormat;		HX_STACK_VAR(tmp11,"tmp11");
				HX_STACK_LINE(877)
				tmp10->set_defaultTextFormat(tmp11);
				HX_STACK_LINE(878)
				::openfl::text::TextField tmp12 = this->nameDisplay;		HX_STACK_VAR(tmp12,"tmp12");
				HX_STACK_LINE(878)
				tmp12->set_selectable(false);
				HX_STACK_LINE(879)
				::openfl::text::TextField tmp13 = this->nameDisplay;		HX_STACK_VAR(tmp13,"tmp13");
				HX_STACK_LINE(879)
				tmp13->set_border(false);
				HX_STACK_LINE(880)
				::openfl::text::TextField tmp14 = this->nameDisplay;		HX_STACK_VAR(tmp14,"tmp14");
				HX_STACK_LINE(880)
				tmp14->set_x((int)10);
				HX_STACK_LINE(881)
				::openfl::text::TextField tmp15 = this->nameDisplay;		HX_STACK_VAR(tmp15,"tmp15");
				HX_STACK_LINE(881)
				int tmp16 = yPos;		HX_STACK_VAR(tmp16,"tmp16");
				HX_STACK_LINE(881)
				tmp15->set_y(tmp16);
				HX_STACK_LINE(882)
				::openfl::text::TextField tmp17 = this->nameDisplay;		HX_STACK_VAR(tmp17,"tmp17");
				HX_STACK_LINE(882)
				::String tmp18 = name;		HX_STACK_VAR(tmp18,"tmp18");
				HX_STACK_LINE(882)
				::String tmp19 = ::Std_obj::string(tmp18);		HX_STACK_VAR(tmp19,"tmp19");
				HX_STACK_LINE(882)
				tmp17->set_text(tmp19);
				HX_STACK_LINE(883)
				::openfl::text::TextField tmp20 = this->nameDisplay;		HX_STACK_VAR(tmp20,"tmp20");
				HX_STACK_LINE(883)
				this->addChild(tmp20);
			}
;
		}
		HX_STACK_LINE(887)
		::Button tmp6 = ::Button_obj::__new(HX_HCSTRING("Back_Button","\x4a","\x48","\xec","\x0d"));		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(887)
		this->backButton = tmp6;
		HX_STACK_LINE(888)
		::Button tmp7 = this->backButton;		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(888)
		Dynamic tmp8 = this->OnBackButton_dyn();		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(888)
		tmp7->addEventListener(HX_HCSTRING("click","\x48","\x7c","\x5e","\x48"),tmp8,null(),null(),null());
		HX_STACK_LINE(889)
		::Button tmp9 = this->backButton;		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(889)
		this->addChild(tmp9);
		HX_STACK_LINE(890)
		::Button tmp10 = this->backButton;		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(890)
		tmp10->set_x((int)450);
		HX_STACK_LINE(891)
		::Button tmp11 = this->backButton;		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(891)
		tmp11->set_y((int)850);
		HX_STACK_LINE(892)
		::Button tmp12 = this->backButton;		HX_STACK_VAR(tmp12,"tmp12");
		HX_STACK_LINE(892)
		Dynamic tmp13 = this->backRoll_dyn();		HX_STACK_VAR(tmp13,"tmp13");
		HX_STACK_LINE(892)
		tmp12->addEventListener(HX_HCSTRING("rollOver","\x71","\xab","\xa8","\x12"),tmp13,null(),null(),null());
		HX_STACK_LINE(893)
		::Button tmp14 = this->backButton;		HX_STACK_VAR(tmp14,"tmp14");
		HX_STACK_LINE(893)
		Dynamic tmp15 = this->backOut_dyn();		HX_STACK_VAR(tmp15,"tmp15");
		HX_STACK_LINE(893)
		tmp14->addEventListener(HX_HCSTRING("rollOut","\x11","\xf9","\x11","\x5d"),tmp15,null(),null(),null());
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Main_obj,OnLeaderboardButton,(void))

Void Main_obj::OnBackButton( ::openfl::events::MouseEvent event){
{
		HX_STACK_FRAME("Main","OnBackButton",0xdf9adacd,"Main.OnBackButton","Main.hx",900,0x087e5c05)
		HX_STACK_THIS(this)
		HX_STACK_ARG(event,"event")
		HX_STACK_LINE(900)
		this->gamestart();
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Main_obj,OnBackButton,(void))

Void Main_obj::startRoll( ::openfl::events::MouseEvent event){
{
		HX_STACK_FRAME("Main","startRoll",0xe52b9caa,"Main.startRoll","Main.hx",906,0x087e5c05)
		HX_STACK_THIS(this)
		HX_STACK_ARG(event,"event")
		HX_STACK_LINE(907)
		::Button tmp = this->startButton;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(907)
		tmp->set_scaleX(((Float)1.15));
		HX_STACK_LINE(908)
		::Button tmp1 = this->startButton;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(908)
		tmp1->set_scaleY(((Float)1.15));
		HX_STACK_LINE(909)
		::Menu_obj::playSFX(HX_HCSTRING("SFX","\x65","\x38","\x3f","\x00"));
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Main_obj,startRoll,(void))

Void Main_obj::startOut( ::openfl::events::MouseEvent event){
{
		HX_STACK_FRAME("Main","startOut",0x89a0f401,"Main.startOut","Main.hx",913,0x087e5c05)
		HX_STACK_THIS(this)
		HX_STACK_ARG(event,"event")
		HX_STACK_LINE(914)
		::Button tmp = this->startButton;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(914)
		tmp->set_scaleX((int)1);
		HX_STACK_LINE(915)
		::Button tmp1 = this->startButton;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(915)
		tmp1->set_scaleY((int)1);
		HX_STACK_LINE(916)
		::Menu_obj::playSFX(HX_HCSTRING("OUT","\x6e","\x3c","\x3c","\x00"));
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Main_obj,startOut,(void))

Void Main_obj::playmusicRoll( ::openfl::events::MouseEvent event){
{
		HX_STACK_FRAME("Main","playmusicRoll",0xa690fb79,"Main.playmusicRoll","Main.hx",920,0x087e5c05)
		HX_STACK_THIS(this)
		HX_STACK_ARG(event,"event")
		HX_STACK_LINE(921)
		::Button tmp = this->playmusicButton;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(921)
		tmp->set_scaleX(((Float)1.15));
		HX_STACK_LINE(922)
		::Button tmp1 = this->playmusicButton;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(922)
		tmp1->set_scaleY(((Float)1.15));
		HX_STACK_LINE(923)
		::Menu_obj::playSFX(HX_HCSTRING("SFX","\x65","\x38","\x3f","\x00"));
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Main_obj,playmusicRoll,(void))

Void Main_obj::playmusicOut( ::openfl::events::MouseEvent event){
{
		HX_STACK_FRAME("Main","playmusicOut",0xe655a412,"Main.playmusicOut","Main.hx",927,0x087e5c05)
		HX_STACK_THIS(this)
		HX_STACK_ARG(event,"event")
		HX_STACK_LINE(928)
		::Button tmp = this->playmusicButton;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(928)
		tmp->set_scaleX((int)1);
		HX_STACK_LINE(929)
		::Button tmp1 = this->playmusicButton;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(929)
		tmp1->set_scaleY((int)1);
		HX_STACK_LINE(930)
		::Menu_obj::playSFX(HX_HCSTRING("OUT","\x6e","\x3c","\x3c","\x00"));
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Main_obj,playmusicOut,(void))

Void Main_obj::musicRoll( ::openfl::events::MouseEvent event){
{
		HX_STACK_FRAME("Main","musicRoll",0xb631d66d,"Main.musicRoll","Main.hx",934,0x087e5c05)
		HX_STACK_THIS(this)
		HX_STACK_ARG(event,"event")
		HX_STACK_LINE(935)
		::Button tmp = this->musicButton;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(935)
		tmp->set_scaleX(((Float)1.15));
		HX_STACK_LINE(936)
		::Button tmp1 = this->musicButton;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(936)
		tmp1->set_scaleY(((Float)1.15));
		HX_STACK_LINE(937)
		::Menu_obj::playSFX(HX_HCSTRING("SFX","\x65","\x38","\x3f","\x00"));
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Main_obj,musicRoll,(void))

Void Main_obj::musicOut( ::openfl::events::MouseEvent event){
{
		HX_STACK_FRAME("Main","musicOut",0x549c639e,"Main.musicOut","Main.hx",941,0x087e5c05)
		HX_STACK_THIS(this)
		HX_STACK_ARG(event,"event")
		HX_STACK_LINE(942)
		::Button tmp = this->musicButton;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(942)
		tmp->set_scaleX((int)1);
		HX_STACK_LINE(943)
		::Button tmp1 = this->musicButton;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(943)
		tmp1->set_scaleY((int)1);
		HX_STACK_LINE(944)
		::Menu_obj::playSFX(HX_HCSTRING("OUT","\x6e","\x3c","\x3c","\x00"));
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Main_obj,musicOut,(void))

Void Main_obj::leaderboardRoll( ::openfl::events::MouseEvent event){
{
		HX_STACK_FRAME("Main","leaderboardRoll",0x3d010f05,"Main.leaderboardRoll","Main.hx",948,0x087e5c05)
		HX_STACK_THIS(this)
		HX_STACK_ARG(event,"event")
		HX_STACK_LINE(949)
		::Button tmp = this->leaderboardButton;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(949)
		tmp->set_scaleX(((Float)1.15));
		HX_STACK_LINE(950)
		::Button tmp1 = this->leaderboardButton;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(950)
		tmp1->set_scaleY(((Float)1.15));
		HX_STACK_LINE(951)
		::Menu_obj::playSFX(HX_HCSTRING("SFX","\x65","\x38","\x3f","\x00"));
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Main_obj,leaderboardRoll,(void))

Void Main_obj::leaderboardOut( ::openfl::events::MouseEvent event){
{
		HX_STACK_FRAME("Main","leaderboardOut",0xddd34606,"Main.leaderboardOut","Main.hx",955,0x087e5c05)
		HX_STACK_THIS(this)
		HX_STACK_ARG(event,"event")
		HX_STACK_LINE(956)
		::Button tmp = this->leaderboardButton;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(956)
		tmp->set_scaleX((int)1);
		HX_STACK_LINE(957)
		::Button tmp1 = this->leaderboardButton;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(957)
		tmp1->set_scaleY((int)1);
		HX_STACK_LINE(958)
		::Menu_obj::playSFX(HX_HCSTRING("OUT","\x6e","\x3c","\x3c","\x00"));
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Main_obj,leaderboardOut,(void))

Void Main_obj::backRoll( ::openfl::events::MouseEvent event){
{
		HX_STACK_FRAME("Main","backRoll",0x55b737f9,"Main.backRoll","Main.hx",962,0x087e5c05)
		HX_STACK_THIS(this)
		HX_STACK_ARG(event,"event")
		HX_STACK_LINE(963)
		::Button tmp = this->backButton;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(963)
		tmp->set_scaleX(((Float)1.15));
		HX_STACK_LINE(964)
		::Button tmp1 = this->backButton;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(964)
		tmp1->set_scaleY(((Float)1.15));
		HX_STACK_LINE(965)
		::Menu_obj::playSFX(HX_HCSTRING("SFX","\x65","\x38","\x3f","\x00"));
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Main_obj,backRoll,(void))

Void Main_obj::backOut( ::openfl::events::MouseEvent event){
{
		HX_STACK_FRAME("Main","backOut",0x5fa87792,"Main.backOut","Main.hx",969,0x087e5c05)
		HX_STACK_THIS(this)
		HX_STACK_ARG(event,"event")
		HX_STACK_LINE(970)
		::Button tmp = this->backButton;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(970)
		tmp->set_scaleX((int)1);
		HX_STACK_LINE(971)
		::Button tmp1 = this->backButton;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(971)
		tmp1->set_scaleY((int)1);
		HX_STACK_LINE(972)
		::Menu_obj::playSFX(HX_HCSTRING("OUT","\x6e","\x3c","\x3c","\x00"));
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Main_obj,backOut,(void))

Void Main_obj::quitRoll( ::openfl::events::MouseEvent event){
{
		HX_STACK_FRAME("Main","quitRoll",0x841891a1,"Main.quitRoll","Main.hx",976,0x087e5c05)
		HX_STACK_THIS(this)
		HX_STACK_ARG(event,"event")
		HX_STACK_LINE(977)
		::Button tmp = this->quitButton;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(977)
		tmp->set_scaleX(((Float)1.15));
		HX_STACK_LINE(978)
		::Button tmp1 = this->quitButton;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(978)
		tmp1->set_scaleY(((Float)1.15));
		HX_STACK_LINE(979)
		::Menu_obj::playSFX(HX_HCSTRING("SFX","\x65","\x38","\x3f","\x00"));
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Main_obj,quitRoll,(void))

Void Main_obj::quitOut( ::openfl::events::MouseEvent event){
{
		HX_STACK_FRAME("Main","quitOut",0x48e80aea,"Main.quitOut","Main.hx",983,0x087e5c05)
		HX_STACK_THIS(this)
		HX_STACK_ARG(event,"event")
		HX_STACK_LINE(984)
		::Button tmp = this->quitButton;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(984)
		tmp->set_scaleX((int)1);
		HX_STACK_LINE(985)
		::Button tmp1 = this->quitButton;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(985)
		tmp1->set_scaleY((int)1);
		HX_STACK_LINE(986)
		::Menu_obj::playSFX(HX_HCSTRING("OUT","\x6e","\x3c","\x3c","\x00"));
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Main_obj,quitOut,(void))

Void Main_obj::creditRoll( ::openfl::events::MouseEvent event){
{
		HX_STACK_FRAME("Main","creditRoll",0xaf9a4a4b,"Main.creditRoll","Main.hx",990,0x087e5c05)
		HX_STACK_THIS(this)
		HX_STACK_ARG(event,"event")
		HX_STACK_LINE(991)
		::Button tmp = this->creditButton;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(991)
		tmp->set_scaleX(((Float)1.15));
		HX_STACK_LINE(992)
		::Button tmp1 = this->creditButton;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(992)
		tmp1->set_scaleY(((Float)1.15));
		HX_STACK_LINE(993)
		::Menu_obj::playSFX(HX_HCSTRING("SFX","\x65","\x38","\x3f","\x00"));
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Main_obj,creditRoll,(void))

Void Main_obj::creditOut( ::openfl::events::MouseEvent event){
{
		HX_STACK_FRAME("Main","creditOut",0x11ff9580,"Main.creditOut","Main.hx",997,0x087e5c05)
		HX_STACK_THIS(this)
		HX_STACK_ARG(event,"event")
		HX_STACK_LINE(998)
		::Button tmp = this->creditButton;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(998)
		tmp->set_scaleX((int)1);
		HX_STACK_LINE(999)
		::Button tmp1 = this->creditButton;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(999)
		tmp1->set_scaleY((int)1);
		HX_STACK_LINE(1000)
		::Menu_obj::playSFX(HX_HCSTRING("OUT","\x6e","\x3c","\x3c","\x00"));
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Main_obj,creditOut,(void))

Void Main_obj::okayRoll( ::openfl::events::MouseEvent event){
{
		HX_STACK_FRAME("Main","okayRoll",0x20030d66,"Main.okayRoll","Main.hx",1004,0x087e5c05)
		HX_STACK_THIS(this)
		HX_STACK_ARG(event,"event")
		HX_STACK_LINE(1005)
		::Button tmp = this->okayButton;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(1005)
		tmp->set_scaleX(((Float)1.15));
		HX_STACK_LINE(1006)
		::Button tmp1 = this->okayButton;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(1006)
		tmp1->set_scaleY(((Float)1.15));
		HX_STACK_LINE(1007)
		::Menu_obj::playSFX(HX_HCSTRING("SFX","\x65","\x38","\x3f","\x00"));
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Main_obj,okayRoll,(void))

Void Main_obj::okayOut( ::openfl::events::MouseEvent event){
{
		HX_STACK_FRAME("Main","okayOut",0x5e44eec5,"Main.okayOut","Main.hx",1011,0x087e5c05)
		HX_STACK_THIS(this)
		HX_STACK_ARG(event,"event")
		HX_STACK_LINE(1012)
		::Button tmp = this->okayButton;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(1012)
		tmp->set_scaleX((int)1);
		HX_STACK_LINE(1013)
		::Button tmp1 = this->okayButton;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(1013)
		tmp1->set_scaleY((int)1);
		HX_STACK_LINE(1014)
		::Menu_obj::playSFX(HX_HCSTRING("OUT","\x6e","\x3c","\x3c","\x00"));
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Main_obj,okayOut,(void))

Void Main_obj::QARoll( ::openfl::events::MouseEvent event){
{
		HX_STACK_FRAME("Main","QARoll",0x372625e2,"Main.QARoll","Main.hx",1018,0x087e5c05)
		HX_STACK_THIS(this)
		HX_STACK_ARG(event,"event")
		HX_STACK_LINE(1019)
		::openfl::text::TextField tmp = this->QADisplay;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(1019)
		tmp->set_scaleX(((Float)1.15));
		HX_STACK_LINE(1020)
		::openfl::text::TextField tmp1 = this->QADisplay;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(1020)
		tmp1->set_scaleY(((Float)1.15));
		HX_STACK_LINE(1021)
		::Menu_obj::playSFX(HX_HCSTRING("SFX","\x65","\x38","\x3f","\x00"));
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Main_obj,QARoll,(void))

Void Main_obj::QAOut( ::openfl::events::MouseEvent event){
{
		HX_STACK_FRAME("Main","QAOut",0x4adb79c9,"Main.QAOut","Main.hx",1025,0x087e5c05)
		HX_STACK_THIS(this)
		HX_STACK_ARG(event,"event")
		HX_STACK_LINE(1026)
		::openfl::text::TextField tmp = this->QADisplay;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(1026)
		tmp->set_scaleX((int)1);
		HX_STACK_LINE(1027)
		::openfl::text::TextField tmp1 = this->QADisplay;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(1027)
		tmp1->set_scaleY((int)1);
		HX_STACK_LINE(1028)
		::Menu_obj::playSFX(HX_HCSTRING("OUT","\x6e","\x3c","\x3c","\x00"));
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Main_obj,QAOut,(void))

Void Main_obj::ARoll( ::openfl::events::MouseEvent event){
{
		HX_STACK_FRAME("Main","ARoll",0x1fc71289,"Main.ARoll","Main.hx",1032,0x087e5c05)
		HX_STACK_THIS(this)
		HX_STACK_ARG(event,"event")
		HX_STACK_LINE(1033)
		::openfl::text::TextField tmp = this->ADisplay;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(1033)
		tmp->set_scaleX(((Float)1.15));
		HX_STACK_LINE(1034)
		::openfl::text::TextField tmp1 = this->ADisplay;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(1034)
		tmp1->set_scaleY(((Float)1.15));
		HX_STACK_LINE(1035)
		::Menu_obj::playSFX(HX_HCSTRING("SFX","\x65","\x38","\x3f","\x00"));
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Main_obj,ARoll,(void))

Void Main_obj::AOut( ::openfl::events::MouseEvent event){
{
		HX_STACK_FRAME("Main","AOut",0xcfeb1f02,"Main.AOut","Main.hx",1039,0x087e5c05)
		HX_STACK_THIS(this)
		HX_STACK_ARG(event,"event")
		HX_STACK_LINE(1040)
		::openfl::text::TextField tmp = this->ADisplay;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(1040)
		tmp->set_scaleX((int)1);
		HX_STACK_LINE(1041)
		::openfl::text::TextField tmp1 = this->ADisplay;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(1041)
		tmp1->set_scaleY((int)1);
		HX_STACK_LINE(1042)
		::Menu_obj::playSFX(HX_HCSTRING("OUT","\x6e","\x3c","\x3c","\x00"));
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Main_obj,AOut,(void))

Void Main_obj::A2Roll( ::openfl::events::MouseEvent event){
{
		HX_STACK_FRAME("Main","A2Roll",0x2e6dac63,"Main.A2Roll","Main.hx",1046,0x087e5c05)
		HX_STACK_THIS(this)
		HX_STACK_ARG(event,"event")
		HX_STACK_LINE(1047)
		::openfl::text::TextField tmp = this->A2Display;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(1047)
		tmp->set_scaleX(((Float)1.15));
		HX_STACK_LINE(1048)
		::openfl::text::TextField tmp1 = this->A2Display;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(1048)
		tmp1->set_scaleY(((Float)1.15));
		HX_STACK_LINE(1049)
		::Menu_obj::playSFX(HX_HCSTRING("SFX","\x65","\x38","\x3f","\x00"));
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Main_obj,A2Roll,(void))

Void Main_obj::A2Out( ::openfl::events::MouseEvent event){
{
		HX_STACK_FRAME("Main","A2Out",0x0a87fe68,"Main.A2Out","Main.hx",1053,0x087e5c05)
		HX_STACK_THIS(this)
		HX_STACK_ARG(event,"event")
		HX_STACK_LINE(1054)
		::openfl::text::TextField tmp = this->A2Display;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(1054)
		tmp->set_scaleX((int)1);
		HX_STACK_LINE(1055)
		::openfl::text::TextField tmp1 = this->A2Display;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(1055)
		tmp1->set_scaleY((int)1);
		HX_STACK_LINE(1056)
		::Menu_obj::playSFX(HX_HCSTRING("OUT","\x6e","\x3c","\x3c","\x00"));
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Main_obj,A2Out,(void))

Void Main_obj::EndRoll( ::openfl::events::MouseEvent event){
{
		HX_STACK_FRAME("Main","EndRoll",0x5f5633c3,"Main.EndRoll","Main.hx",1060,0x087e5c05)
		HX_STACK_THIS(this)
		HX_STACK_ARG(event,"event")
		HX_STACK_LINE(1061)
		::openfl::text::TextField tmp = this->endDisplay;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(1061)
		tmp->set_scaleX(((Float)1.15));
		HX_STACK_LINE(1062)
		::openfl::text::TextField tmp1 = this->endDisplay;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(1062)
		tmp1->set_scaleY(((Float)1.15));
		HX_STACK_LINE(1063)
		::Menu_obj::playSFX(HX_HCSTRING("SFX","\x65","\x38","\x3f","\x00"));
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Main_obj,EndRoll,(void))

Void Main_obj::EndOut( ::openfl::events::MouseEvent event){
{
		HX_STACK_FRAME("Main","EndOut",0x5fb38308,"Main.EndOut","Main.hx",1067,0x087e5c05)
		HX_STACK_THIS(this)
		HX_STACK_ARG(event,"event")
		HX_STACK_LINE(1068)
		::openfl::text::TextField tmp = this->endDisplay;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(1068)
		tmp->set_scaleX((int)1);
		HX_STACK_LINE(1069)
		::openfl::text::TextField tmp1 = this->endDisplay;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(1069)
		tmp1->set_scaleY((int)1);
		HX_STACK_LINE(1070)
		::Menu_obj::playSFX(HX_HCSTRING("OUT","\x6e","\x3c","\x3c","\x00"));
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Main_obj,EndOut,(void))

Void Main_obj::End2Roll( ::openfl::events::MouseEvent event){
{
		HX_STACK_FRAME("Main","End2Roll",0x8c1b9de9,"Main.End2Roll","Main.hx",1074,0x087e5c05)
		HX_STACK_THIS(this)
		HX_STACK_ARG(event,"event")
		HX_STACK_LINE(1075)
		::openfl::text::TextField tmp = this->end2Display;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(1075)
		tmp->set_scaleX(((Float)1.15));
		HX_STACK_LINE(1076)
		::openfl::text::TextField tmp1 = this->end2Display;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(1076)
		tmp1->set_scaleY(((Float)1.15));
		HX_STACK_LINE(1077)
		::Menu_obj::playSFX(HX_HCSTRING("SFX","\x65","\x38","\x3f","\x00"));
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Main_obj,End2Roll,(void))

Void Main_obj::End2Out( ::openfl::events::MouseEvent event){
{
		HX_STACK_FRAME("Main","End2Out",0x4a171fa2,"Main.End2Out","Main.hx",1081,0x087e5c05)
		HX_STACK_THIS(this)
		HX_STACK_ARG(event,"event")
		HX_STACK_LINE(1082)
		::openfl::text::TextField tmp = this->end2Display;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(1082)
		tmp->set_scaleX((int)1);
		HX_STACK_LINE(1083)
		::openfl::text::TextField tmp1 = this->end2Display;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(1083)
		tmp1->set_scaleY((int)1);
		HX_STACK_LINE(1084)
		::Menu_obj::playSFX(HX_HCSTRING("OUT","\x6e","\x3c","\x3c","\x00"));
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Main_obj,End2Out,(void))

Void Main_obj::End3Roll( ::openfl::events::MouseEvent event){
{
		HX_STACK_FRAME("Main","End3Roll",0x1f82326a,"Main.End3Roll","Main.hx",1088,0x087e5c05)
		HX_STACK_THIS(this)
		HX_STACK_ARG(event,"event")
		HX_STACK_LINE(1089)
		::openfl::text::TextField tmp = this->end3Display;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(1089)
		tmp->set_scaleX(((Float)1.15));
		HX_STACK_LINE(1090)
		::openfl::text::TextField tmp1 = this->end3Display;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(1090)
		tmp1->set_scaleY(((Float)1.15));
		HX_STACK_LINE(1091)
		::Menu_obj::playSFX(HX_HCSTRING("SFX","\x65","\x38","\x3f","\x00"));
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Main_obj,End3Roll,(void))

Void Main_obj::End3Out( ::openfl::events::MouseEvent event){
{
		HX_STACK_FRAME("Main","End3Out",0x4ac05641,"Main.End3Out","Main.hx",1095,0x087e5c05)
		HX_STACK_THIS(this)
		HX_STACK_ARG(event,"event")
		HX_STACK_LINE(1096)
		::openfl::text::TextField tmp = this->end3Display;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(1096)
		tmp->set_scaleX((int)1);
		HX_STACK_LINE(1097)
		::openfl::text::TextField tmp1 = this->end3Display;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(1097)
		tmp1->set_scaleY((int)1);
		HX_STACK_LINE(1098)
		::Menu_obj::playSFX(HX_HCSTRING("OUT","\x6e","\x3c","\x3c","\x00"));
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Main_obj,End3Out,(void))

Void Main_obj::End4Roll( ::openfl::events::MouseEvent event){
{
		HX_STACK_FRAME("Main","End4Roll",0xb2e8c6eb,"Main.End4Roll","Main.hx",1102,0x087e5c05)
		HX_STACK_THIS(this)
		HX_STACK_ARG(event,"event")
		HX_STACK_LINE(1103)
		::openfl::text::TextField tmp = this->end4Display;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(1103)
		tmp->set_scaleX(((Float)1.15));
		HX_STACK_LINE(1104)
		::openfl::text::TextField tmp1 = this->end4Display;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(1104)
		tmp1->set_scaleY(((Float)1.15));
		HX_STACK_LINE(1105)
		::Menu_obj::playSFX(HX_HCSTRING("SFX","\x65","\x38","\x3f","\x00"));
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Main_obj,End4Roll,(void))

Void Main_obj::End4Out( ::openfl::events::MouseEvent event){
{
		HX_STACK_FRAME("Main","End4Out",0x4b698ce0,"Main.End4Out","Main.hx",1109,0x087e5c05)
		HX_STACK_THIS(this)
		HX_STACK_ARG(event,"event")
		HX_STACK_LINE(1110)
		::openfl::text::TextField tmp = this->end4Display;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(1110)
		tmp->set_scaleX((int)1);
		HX_STACK_LINE(1111)
		::openfl::text::TextField tmp1 = this->end4Display;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(1111)
		tmp1->set_scaleY((int)1);
		HX_STACK_LINE(1112)
		::Menu_obj::playSFX(HX_HCSTRING("OUT","\x6e","\x3c","\x3c","\x00"));
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Main_obj,End4Out,(void))

Void Main_obj::A3Roll( ::openfl::events::MouseEvent event){
{
		HX_STACK_FRAME("Main","A3Roll",0xc1d440e4,"Main.A3Roll","Main.hx",1116,0x087e5c05)
		HX_STACK_THIS(this)
		HX_STACK_ARG(event,"event")
		HX_STACK_LINE(1117)
		::openfl::text::TextField tmp = this->A3Display;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(1117)
		tmp->set_scaleX(((Float)1.15));
		HX_STACK_LINE(1118)
		::openfl::text::TextField tmp1 = this->A3Display;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(1118)
		tmp1->set_scaleY(((Float)1.15));
		HX_STACK_LINE(1119)
		::Menu_obj::playSFX(HX_HCSTRING("SFX","\x65","\x38","\x3f","\x00"));
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Main_obj,A3Roll,(void))

Void Main_obj::A3Out( ::openfl::events::MouseEvent event){
{
		HX_STACK_FRAME("Main","A3Out",0x0b313507,"Main.A3Out","Main.hx",1123,0x087e5c05)
		HX_STACK_THIS(this)
		HX_STACK_ARG(event,"event")
		HX_STACK_LINE(1124)
		::openfl::text::TextField tmp = this->A3Display;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(1124)
		tmp->set_scaleX((int)1);
		HX_STACK_LINE(1125)
		::openfl::text::TextField tmp1 = this->A3Display;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(1125)
		tmp1->set_scaleY((int)1);
		HX_STACK_LINE(1126)
		::Menu_obj::playSFX(HX_HCSTRING("OUT","\x6e","\x3c","\x3c","\x00"));
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Main_obj,A3Out,(void))

Void Main_obj::A4Roll( ::openfl::events::MouseEvent event){
{
		HX_STACK_FRAME("Main","A4Roll",0x553ad565,"Main.A4Roll","Main.hx",1130,0x087e5c05)
		HX_STACK_THIS(this)
		HX_STACK_ARG(event,"event")
		HX_STACK_LINE(1131)
		::openfl::text::TextField tmp = this->A4Display;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(1131)
		tmp->set_scaleX(((Float)1.15));
		HX_STACK_LINE(1132)
		::openfl::text::TextField tmp1 = this->A4Display;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(1132)
		tmp1->set_scaleY(((Float)1.15));
		HX_STACK_LINE(1133)
		::Menu_obj::playSFX(HX_HCSTRING("SFX","\x65","\x38","\x3f","\x00"));
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Main_obj,A4Roll,(void))

Void Main_obj::A4Out( ::openfl::events::MouseEvent event){
{
		HX_STACK_FRAME("Main","A4Out",0x0bda6ba6,"Main.A4Out","Main.hx",1137,0x087e5c05)
		HX_STACK_THIS(this)
		HX_STACK_ARG(event,"event")
		HX_STACK_LINE(1138)
		::openfl::text::TextField tmp = this->A4Display;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(1138)
		tmp->set_scaleX((int)1);
		HX_STACK_LINE(1139)
		::openfl::text::TextField tmp1 = this->A4Display;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(1139)
		tmp1->set_scaleY((int)1);
		HX_STACK_LINE(1140)
		::Menu_obj::playSFX(HX_HCSTRING("OUT","\x6e","\x3c","\x3c","\x00"));
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Main_obj,A4Out,(void))

::openfl::text::TextField Main_obj::answer;

::openfl::text::TextField Main_obj::answertext;

::String Main_obj::input;

::openfl::text::TextField Main_obj::input2;

::openfl::text::TextField Main_obj::text;

::String Main_obj::input3;

Void Main_obj::Setanswer2( ::String newName2){
{
		HX_STACK_FRAME("Main","Setanswer2",0x56b44fa7,"Main.Setanswer2","Main.hx",721,0x087e5c05)
		HX_STACK_ARG(newName2,"newName2")
		HX_STACK_LINE(721)
		::Main_obj::input3 = newName2;
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Main_obj,Setanswer2,(void))

::String Main_obj::Getanswer2( ){
	HX_STACK_FRAME("Main","Getanswer2",0x5336b133,"Main.Getanswer2","Main.hx",725,0x087e5c05)
	HX_STACK_LINE(727)
	::String tmp = ::Main_obj::input3;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(727)
	return tmp;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(Main_obj,Getanswer2,return )

Void Main_obj::Setanswer( ::String newName){
{
		HX_STACK_FRAME("Main","Setanswer",0x187f162b,"Main.Setanswer","Main.hx",744,0x087e5c05)
		HX_STACK_ARG(newName,"newName")
		HX_STACK_LINE(744)
		::Main_obj::input = newName;
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Main_obj,Setanswer,(void))

::String Main_obj::Getanswer( ){
	HX_STACK_FRAME("Main","Getanswer",0x352e2a1f,"Main.Getanswer","Main.hx",748,0x087e5c05)
	HX_STACK_LINE(749)
	::String tmp = ::Main_obj::input;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(749)
	return tmp;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(Main_obj,Getanswer,return )


Main_obj::Main_obj()
{
}

void Main_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(Main);
	HX_MARK_MEMBER_NAME(stopTimer,"stopTimer");
	HX_MARK_MEMBER_NAME(countdownSprite,"countdownSprite");
	HX_MARK_MEMBER_NAME(scoreDisplay,"scoreDisplay");
	HX_MARK_MEMBER_NAME(nameDisplay,"nameDisplay");
	HX_MARK_MEMBER_NAME(creditnameDisplay,"creditnameDisplay");
	HX_MARK_MEMBER_NAME(jobDisplay,"jobDisplay");
	HX_MARK_MEMBER_NAME(QADisplay,"QADisplay");
	HX_MARK_MEMBER_NAME(QA2Display,"QA2Display");
	HX_MARK_MEMBER_NAME(QA4Display,"QA4Display");
	HX_MARK_MEMBER_NAME(ADisplay,"ADisplay");
	HX_MARK_MEMBER_NAME(A2Display,"A2Display");
	HX_MARK_MEMBER_NAME(A3Display,"A3Display");
	HX_MARK_MEMBER_NAME(A4Display,"A4Display");
	HX_MARK_MEMBER_NAME(endDisplay,"endDisplay");
	HX_MARK_MEMBER_NAME(end2Display,"end2Display");
	HX_MARK_MEMBER_NAME(end3Display,"end3Display");
	HX_MARK_MEMBER_NAME(end4Display,"end4Display");
	HX_MARK_MEMBER_NAME(startButton,"startButton");
	HX_MARK_MEMBER_NAME(playmusicButton,"playmusicButton");
	HX_MARK_MEMBER_NAME(musicButton,"musicButton");
	HX_MARK_MEMBER_NAME(leaderboardButton,"leaderboardButton");
	HX_MARK_MEMBER_NAME(backButton,"backButton");
	HX_MARK_MEMBER_NAME(quitButton,"quitButton");
	HX_MARK_MEMBER_NAME(creditButton,"creditButton");
	HX_MARK_MEMBER_NAME(answerButton1,"answerButton1");
	HX_MARK_MEMBER_NAME(answerButton2,"answerButton2");
	HX_MARK_MEMBER_NAME(okayButton,"okayButton");
	::openfl::display::Sprite_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void Main_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(stopTimer,"stopTimer");
	HX_VISIT_MEMBER_NAME(countdownSprite,"countdownSprite");
	HX_VISIT_MEMBER_NAME(scoreDisplay,"scoreDisplay");
	HX_VISIT_MEMBER_NAME(nameDisplay,"nameDisplay");
	HX_VISIT_MEMBER_NAME(creditnameDisplay,"creditnameDisplay");
	HX_VISIT_MEMBER_NAME(jobDisplay,"jobDisplay");
	HX_VISIT_MEMBER_NAME(QADisplay,"QADisplay");
	HX_VISIT_MEMBER_NAME(QA2Display,"QA2Display");
	HX_VISIT_MEMBER_NAME(QA4Display,"QA4Display");
	HX_VISIT_MEMBER_NAME(ADisplay,"ADisplay");
	HX_VISIT_MEMBER_NAME(A2Display,"A2Display");
	HX_VISIT_MEMBER_NAME(A3Display,"A3Display");
	HX_VISIT_MEMBER_NAME(A4Display,"A4Display");
	HX_VISIT_MEMBER_NAME(endDisplay,"endDisplay");
	HX_VISIT_MEMBER_NAME(end2Display,"end2Display");
	HX_VISIT_MEMBER_NAME(end3Display,"end3Display");
	HX_VISIT_MEMBER_NAME(end4Display,"end4Display");
	HX_VISIT_MEMBER_NAME(startButton,"startButton");
	HX_VISIT_MEMBER_NAME(playmusicButton,"playmusicButton");
	HX_VISIT_MEMBER_NAME(musicButton,"musicButton");
	HX_VISIT_MEMBER_NAME(leaderboardButton,"leaderboardButton");
	HX_VISIT_MEMBER_NAME(backButton,"backButton");
	HX_VISIT_MEMBER_NAME(quitButton,"quitButton");
	HX_VISIT_MEMBER_NAME(creditButton,"creditButton");
	HX_VISIT_MEMBER_NAME(answerButton1,"answerButton1");
	HX_VISIT_MEMBER_NAME(answerButton2,"answerButton2");
	HX_VISIT_MEMBER_NAME(okayButton,"okayButton");
	::openfl::display::Sprite_obj::__Visit(HX_VISIT_ARG);
}

Dynamic Main_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"AOut") ) { return AOut_dyn(); }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"OnEnd") ) { return OnEnd_dyn(); }
		if (HX_FIELD_EQ(inName,"QAOut") ) { return QAOut_dyn(); }
		if (HX_FIELD_EQ(inName,"ARoll") ) { return ARoll_dyn(); }
		if (HX_FIELD_EQ(inName,"A2Out") ) { return A2Out_dyn(); }
		if (HX_FIELD_EQ(inName,"A3Out") ) { return A3Out_dyn(); }
		if (HX_FIELD_EQ(inName,"A4Out") ) { return A4Out_dyn(); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"OnWalk") ) { return OnWalk_dyn(); }
		if (HX_FIELD_EQ(inName,"OnStay") ) { return OnStay_dyn(); }
		if (HX_FIELD_EQ(inName,"QARoll") ) { return QARoll_dyn(); }
		if (HX_FIELD_EQ(inName,"A2Roll") ) { return A2Roll_dyn(); }
		if (HX_FIELD_EQ(inName,"EndOut") ) { return EndOut_dyn(); }
		if (HX_FIELD_EQ(inName,"A3Roll") ) { return A3Roll_dyn(); }
		if (HX_FIELD_EQ(inName,"A4Roll") ) { return A4Roll_dyn(); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"OnFight") ) { return OnFight_dyn(); }
		if (HX_FIELD_EQ(inName,"TooLate") ) { return TooLate_dyn(); }
		if (HX_FIELD_EQ(inName,"Victory") ) { return Victory_dyn(); }
		if (HX_FIELD_EQ(inName,"backOut") ) { return backOut_dyn(); }
		if (HX_FIELD_EQ(inName,"quitOut") ) { return quitOut_dyn(); }
		if (HX_FIELD_EQ(inName,"okayOut") ) { return okayOut_dyn(); }
		if (HX_FIELD_EQ(inName,"EndRoll") ) { return EndRoll_dyn(); }
		if (HX_FIELD_EQ(inName,"End2Out") ) { return End2Out_dyn(); }
		if (HX_FIELD_EQ(inName,"End3Out") ) { return End3Out_dyn(); }
		if (HX_FIELD_EQ(inName,"End4Out") ) { return End4Out_dyn(); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"ADisplay") ) { return ADisplay; }
		if (HX_FIELD_EQ(inName,"startOut") ) { return startOut_dyn(); }
		if (HX_FIELD_EQ(inName,"musicOut") ) { return musicOut_dyn(); }
		if (HX_FIELD_EQ(inName,"backRoll") ) { return backRoll_dyn(); }
		if (HX_FIELD_EQ(inName,"quitRoll") ) { return quitRoll_dyn(); }
		if (HX_FIELD_EQ(inName,"okayRoll") ) { return okayRoll_dyn(); }
		if (HX_FIELD_EQ(inName,"End2Roll") ) { return End2Roll_dyn(); }
		if (HX_FIELD_EQ(inName,"End3Roll") ) { return End3Roll_dyn(); }
		if (HX_FIELD_EQ(inName,"End4Roll") ) { return End4Roll_dyn(); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"stopTimer") ) { return stopTimer; }
		if (HX_FIELD_EQ(inName,"QADisplay") ) { return QADisplay; }
		if (HX_FIELD_EQ(inName,"A2Display") ) { return A2Display; }
		if (HX_FIELD_EQ(inName,"A3Display") ) { return A3Display; }
		if (HX_FIELD_EQ(inName,"A4Display") ) { return A4Display; }
		if (HX_FIELD_EQ(inName,"gamestart") ) { return gamestart_dyn(); }
		if (HX_FIELD_EQ(inName,"startGame") ) { return startGame_dyn(); }
		if (HX_FIELD_EQ(inName,"nameScene") ) { return nameScene_dyn(); }
		if (HX_FIELD_EQ(inName,"startRoll") ) { return startRoll_dyn(); }
		if (HX_FIELD_EQ(inName,"musicRoll") ) { return musicRoll_dyn(); }
		if (HX_FIELD_EQ(inName,"creditOut") ) { return creditOut_dyn(); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"jobDisplay") ) { return jobDisplay; }
		if (HX_FIELD_EQ(inName,"QA2Display") ) { return QA2Display; }
		if (HX_FIELD_EQ(inName,"QA4Display") ) { return QA4Display; }
		if (HX_FIELD_EQ(inName,"endDisplay") ) { return endDisplay; }
		if (HX_FIELD_EQ(inName,"backButton") ) { return backButton; }
		if (HX_FIELD_EQ(inName,"quitButton") ) { return quitButton; }
		if (HX_FIELD_EQ(inName,"okayButton") ) { return okayButton; }
		if (HX_FIELD_EQ(inName,"OnBluffing") ) { return OnBluffing_dyn(); }
		if (HX_FIELD_EQ(inName,"OnQuitGame") ) { return OnQuitGame_dyn(); }
		if (HX_FIELD_EQ(inName,"creditRoll") ) { return creditRoll_dyn(); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"nameDisplay") ) { return nameDisplay; }
		if (HX_FIELD_EQ(inName,"end2Display") ) { return end2Display; }
		if (HX_FIELD_EQ(inName,"end3Display") ) { return end3Display; }
		if (HX_FIELD_EQ(inName,"end4Display") ) { return end4Display; }
		if (HX_FIELD_EQ(inName,"startButton") ) { return startButton; }
		if (HX_FIELD_EQ(inName,"musicButton") ) { return musicButton; }
		if (HX_FIELD_EQ(inName,"OnNextQuest") ) { return OnNextQuest_dyn(); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"scoreDisplay") ) { return scoreDisplay; }
		if (HX_FIELD_EQ(inName,"creditButton") ) { return creditButton; }
		if (HX_FIELD_EQ(inName,"OnCreditGame") ) { return OnCreditGame_dyn(); }
		if (HX_FIELD_EQ(inName,"OnBackButton") ) { return OnBackButton_dyn(); }
		if (HX_FIELD_EQ(inName,"playmusicOut") ) { return playmusicOut_dyn(); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"answerButton1") ) { return answerButton1; }
		if (HX_FIELD_EQ(inName,"answerButton2") ) { return answerButton2; }
		if (HX_FIELD_EQ(inName,"OnBlackButton") ) { return OnBlackButton_dyn(); }
		if (HX_FIELD_EQ(inName,"OnMusicButton") ) { return OnMusicButton_dyn(); }
		if (HX_FIELD_EQ(inName,"playmusicRoll") ) { return playmusicRoll_dyn(); }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"OnBlack2Button") ) { return OnBlack2Button_dyn(); }
		if (HX_FIELD_EQ(inName,"OnBlack3Button") ) { return OnBlack3Button_dyn(); }
		if (HX_FIELD_EQ(inName,"OnBlack4Button") ) { return OnBlack4Button_dyn(); }
		if (HX_FIELD_EQ(inName,"leaderboardOut") ) { return leaderboardOut_dyn(); }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"countdownSprite") ) { return countdownSprite; }
		if (HX_FIELD_EQ(inName,"playmusicButton") ) { return playmusicButton; }
		if (HX_FIELD_EQ(inName,"leaderboardRoll") ) { return leaderboardRoll_dyn(); }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"ToggleFullScreen") ) { return ToggleFullScreen_dyn(); }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"creditnameDisplay") ) { return creditnameDisplay; }
		if (HX_FIELD_EQ(inName,"leaderboardButton") ) { return leaderboardButton; }
		if (HX_FIELD_EQ(inName,"OnPlayMusicButton") ) { return OnPlayMusicButton_dyn(); }
		break;
	case 19:
		if (HX_FIELD_EQ(inName,"OnLeaderboardButton") ) { return OnLeaderboardButton_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

bool Main_obj::__GetStatic(const ::String &inName, Dynamic &outValue, hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"text") ) { outValue = text; return true;  }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"input") ) { outValue = input; return true;  }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"answer") ) { outValue = answer; return true;  }
		if (HX_FIELD_EQ(inName,"input2") ) { outValue = input2; return true;  }
		if (HX_FIELD_EQ(inName,"input3") ) { outValue = input3; return true;  }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"Setanswer") ) { outValue = Setanswer_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"Getanswer") ) { outValue = Getanswer_dyn(); return true;  }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"answertext") ) { outValue = answertext; return true;  }
		if (HX_FIELD_EQ(inName,"Setanswer2") ) { outValue = Setanswer2_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"Getanswer2") ) { outValue = Getanswer2_dyn(); return true;  }
	}
	return false;
}

Dynamic Main_obj::__SetField(const ::String &inName,const Dynamic &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 8:
		if (HX_FIELD_EQ(inName,"ADisplay") ) { ADisplay=inValue.Cast< ::openfl::text::TextField >(); return inValue; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"stopTimer") ) { stopTimer=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"QADisplay") ) { QADisplay=inValue.Cast< ::openfl::text::TextField >(); return inValue; }
		if (HX_FIELD_EQ(inName,"A2Display") ) { A2Display=inValue.Cast< ::openfl::text::TextField >(); return inValue; }
		if (HX_FIELD_EQ(inName,"A3Display") ) { A3Display=inValue.Cast< ::openfl::text::TextField >(); return inValue; }
		if (HX_FIELD_EQ(inName,"A4Display") ) { A4Display=inValue.Cast< ::openfl::text::TextField >(); return inValue; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"jobDisplay") ) { jobDisplay=inValue.Cast< ::openfl::text::TextField >(); return inValue; }
		if (HX_FIELD_EQ(inName,"QA2Display") ) { QA2Display=inValue.Cast< ::openfl::text::TextField >(); return inValue; }
		if (HX_FIELD_EQ(inName,"QA4Display") ) { QA4Display=inValue.Cast< ::openfl::text::TextField >(); return inValue; }
		if (HX_FIELD_EQ(inName,"endDisplay") ) { endDisplay=inValue.Cast< ::openfl::text::TextField >(); return inValue; }
		if (HX_FIELD_EQ(inName,"backButton") ) { backButton=inValue.Cast< ::Button >(); return inValue; }
		if (HX_FIELD_EQ(inName,"quitButton") ) { quitButton=inValue.Cast< ::Button >(); return inValue; }
		if (HX_FIELD_EQ(inName,"okayButton") ) { okayButton=inValue.Cast< ::Button >(); return inValue; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"nameDisplay") ) { nameDisplay=inValue.Cast< ::openfl::text::TextField >(); return inValue; }
		if (HX_FIELD_EQ(inName,"end2Display") ) { end2Display=inValue.Cast< ::openfl::text::TextField >(); return inValue; }
		if (HX_FIELD_EQ(inName,"end3Display") ) { end3Display=inValue.Cast< ::openfl::text::TextField >(); return inValue; }
		if (HX_FIELD_EQ(inName,"end4Display") ) { end4Display=inValue.Cast< ::openfl::text::TextField >(); return inValue; }
		if (HX_FIELD_EQ(inName,"startButton") ) { startButton=inValue.Cast< ::Button >(); return inValue; }
		if (HX_FIELD_EQ(inName,"musicButton") ) { musicButton=inValue.Cast< ::Button >(); return inValue; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"scoreDisplay") ) { scoreDisplay=inValue.Cast< ::openfl::text::TextField >(); return inValue; }
		if (HX_FIELD_EQ(inName,"creditButton") ) { creditButton=inValue.Cast< ::Button >(); return inValue; }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"answerButton1") ) { answerButton1=inValue.Cast< ::Button >(); return inValue; }
		if (HX_FIELD_EQ(inName,"answerButton2") ) { answerButton2=inValue.Cast< ::Button >(); return inValue; }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"countdownSprite") ) { countdownSprite=inValue.Cast< ::openfl::display::Sprite >(); return inValue; }
		if (HX_FIELD_EQ(inName,"playmusicButton") ) { playmusicButton=inValue.Cast< ::Button >(); return inValue; }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"creditnameDisplay") ) { creditnameDisplay=inValue.Cast< ::openfl::text::TextField >(); return inValue; }
		if (HX_FIELD_EQ(inName,"leaderboardButton") ) { leaderboardButton=inValue.Cast< ::Button >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

bool Main_obj::__SetStatic(const ::String &inName,Dynamic &ioValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"text") ) { text=ioValue.Cast< ::openfl::text::TextField >(); return true; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"input") ) { input=ioValue.Cast< ::String >(); return true; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"answer") ) { answer=ioValue.Cast< ::openfl::text::TextField >(); return true; }
		if (HX_FIELD_EQ(inName,"input2") ) { input2=ioValue.Cast< ::openfl::text::TextField >(); return true; }
		if (HX_FIELD_EQ(inName,"input3") ) { input3=ioValue.Cast< ::String >(); return true; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"answertext") ) { answertext=ioValue.Cast< ::openfl::text::TextField >(); return true; }
	}
	return false;
}

void Main_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("stopTimer","\x63","\xf8","\x77","\x20"));
	outFields->push(HX_HCSTRING("countdownSprite","\x96","\xbb","\x12","\x8d"));
	outFields->push(HX_HCSTRING("scoreDisplay","\x10","\xcd","\x4e","\xc8"));
	outFields->push(HX_HCSTRING("nameDisplay","\x37","\x8f","\x15","\x26"));
	outFields->push(HX_HCSTRING("creditnameDisplay","\x9e","\xd3","\x7d","\xb7"));
	outFields->push(HX_HCSTRING("jobDisplay","\xc5","\x2b","\x6d","\x83"));
	outFields->push(HX_HCSTRING("QADisplay","\x52","\x85","\xcc","\xcc"));
	outFields->push(HX_HCSTRING("QA2Display","\x00","\x33","\x51","\x1b"));
	outFields->push(HX_HCSTRING("QA4Display","\x3e","\x17","\xb6","\x8d"));
	outFields->push(HX_HCSTRING("ADisplay","\x01","\x4c","\x6a","\x0e"));
	outFields->push(HX_HCSTRING("A2Display","\x71","\x45","\xc1","\x43"));
	outFields->push(HX_HCSTRING("A3Display","\x90","\xb7","\xf3","\x7c"));
	outFields->push(HX_HCSTRING("A4Display","\xaf","\x29","\x26","\xb6"));
	outFields->push(HX_HCSTRING("endDisplay","\xa7","\x4f","\x6c","\x61"));
	outFields->push(HX_HCSTRING("end2Display","\x0b","\x73","\x82","\x92"));
	outFields->push(HX_HCSTRING("end3Display","\x2a","\xe5","\xb4","\xcb"));
	outFields->push(HX_HCSTRING("end4Display","\x49","\x57","\xe7","\x04"));
	outFields->push(HX_HCSTRING("startButton","\xf4","\xbf","\xc6","\x51"));
	outFields->push(HX_HCSTRING("playmusicButton","\x03","\x9f","\xc0","\xec"));
	outFields->push(HX_HCSTRING("musicButton","\x77","\x30","\x21","\x1c"));
	outFields->push(HX_HCSTRING("leaderboardButton","\xcf","\x1c","\x4f","\x88"));
	outFields->push(HX_HCSTRING("backButton","\x79","\x47","\x6a","\x18"));
	outFields->push(HX_HCSTRING("quitButton","\x21","\x5b","\x13","\xa5"));
	outFields->push(HX_HCSTRING("creditButton","\x0b","\xeb","\xa0","\x6f"));
	outFields->push(HX_HCSTRING("answerButton1","\x21","\x48","\x34","\x3e"));
	outFields->push(HX_HCSTRING("answerButton2","\x22","\x48","\x34","\x3e"));
	outFields->push(HX_HCSTRING("okayButton","\x26","\x12","\x68","\xed"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsBool,(int)offsetof(Main_obj,stopTimer),HX_HCSTRING("stopTimer","\x63","\xf8","\x77","\x20")},
	{hx::fsObject /*::openfl::display::Sprite*/ ,(int)offsetof(Main_obj,countdownSprite),HX_HCSTRING("countdownSprite","\x96","\xbb","\x12","\x8d")},
	{hx::fsObject /*::openfl::text::TextField*/ ,(int)offsetof(Main_obj,scoreDisplay),HX_HCSTRING("scoreDisplay","\x10","\xcd","\x4e","\xc8")},
	{hx::fsObject /*::openfl::text::TextField*/ ,(int)offsetof(Main_obj,nameDisplay),HX_HCSTRING("nameDisplay","\x37","\x8f","\x15","\x26")},
	{hx::fsObject /*::openfl::text::TextField*/ ,(int)offsetof(Main_obj,creditnameDisplay),HX_HCSTRING("creditnameDisplay","\x9e","\xd3","\x7d","\xb7")},
	{hx::fsObject /*::openfl::text::TextField*/ ,(int)offsetof(Main_obj,jobDisplay),HX_HCSTRING("jobDisplay","\xc5","\x2b","\x6d","\x83")},
	{hx::fsObject /*::openfl::text::TextField*/ ,(int)offsetof(Main_obj,QADisplay),HX_HCSTRING("QADisplay","\x52","\x85","\xcc","\xcc")},
	{hx::fsObject /*::openfl::text::TextField*/ ,(int)offsetof(Main_obj,QA2Display),HX_HCSTRING("QA2Display","\x00","\x33","\x51","\x1b")},
	{hx::fsObject /*::openfl::text::TextField*/ ,(int)offsetof(Main_obj,QA4Display),HX_HCSTRING("QA4Display","\x3e","\x17","\xb6","\x8d")},
	{hx::fsObject /*::openfl::text::TextField*/ ,(int)offsetof(Main_obj,ADisplay),HX_HCSTRING("ADisplay","\x01","\x4c","\x6a","\x0e")},
	{hx::fsObject /*::openfl::text::TextField*/ ,(int)offsetof(Main_obj,A2Display),HX_HCSTRING("A2Display","\x71","\x45","\xc1","\x43")},
	{hx::fsObject /*::openfl::text::TextField*/ ,(int)offsetof(Main_obj,A3Display),HX_HCSTRING("A3Display","\x90","\xb7","\xf3","\x7c")},
	{hx::fsObject /*::openfl::text::TextField*/ ,(int)offsetof(Main_obj,A4Display),HX_HCSTRING("A4Display","\xaf","\x29","\x26","\xb6")},
	{hx::fsObject /*::openfl::text::TextField*/ ,(int)offsetof(Main_obj,endDisplay),HX_HCSTRING("endDisplay","\xa7","\x4f","\x6c","\x61")},
	{hx::fsObject /*::openfl::text::TextField*/ ,(int)offsetof(Main_obj,end2Display),HX_HCSTRING("end2Display","\x0b","\x73","\x82","\x92")},
	{hx::fsObject /*::openfl::text::TextField*/ ,(int)offsetof(Main_obj,end3Display),HX_HCSTRING("end3Display","\x2a","\xe5","\xb4","\xcb")},
	{hx::fsObject /*::openfl::text::TextField*/ ,(int)offsetof(Main_obj,end4Display),HX_HCSTRING("end4Display","\x49","\x57","\xe7","\x04")},
	{hx::fsObject /*::Button*/ ,(int)offsetof(Main_obj,startButton),HX_HCSTRING("startButton","\xf4","\xbf","\xc6","\x51")},
	{hx::fsObject /*::Button*/ ,(int)offsetof(Main_obj,playmusicButton),HX_HCSTRING("playmusicButton","\x03","\x9f","\xc0","\xec")},
	{hx::fsObject /*::Button*/ ,(int)offsetof(Main_obj,musicButton),HX_HCSTRING("musicButton","\x77","\x30","\x21","\x1c")},
	{hx::fsObject /*::Button*/ ,(int)offsetof(Main_obj,leaderboardButton),HX_HCSTRING("leaderboardButton","\xcf","\x1c","\x4f","\x88")},
	{hx::fsObject /*::Button*/ ,(int)offsetof(Main_obj,backButton),HX_HCSTRING("backButton","\x79","\x47","\x6a","\x18")},
	{hx::fsObject /*::Button*/ ,(int)offsetof(Main_obj,quitButton),HX_HCSTRING("quitButton","\x21","\x5b","\x13","\xa5")},
	{hx::fsObject /*::Button*/ ,(int)offsetof(Main_obj,creditButton),HX_HCSTRING("creditButton","\x0b","\xeb","\xa0","\x6f")},
	{hx::fsObject /*::Button*/ ,(int)offsetof(Main_obj,answerButton1),HX_HCSTRING("answerButton1","\x21","\x48","\x34","\x3e")},
	{hx::fsObject /*::Button*/ ,(int)offsetof(Main_obj,answerButton2),HX_HCSTRING("answerButton2","\x22","\x48","\x34","\x3e")},
	{hx::fsObject /*::Button*/ ,(int)offsetof(Main_obj,okayButton),HX_HCSTRING("okayButton","\x26","\x12","\x68","\xed")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo sStaticStorageInfo[] = {
	{hx::fsObject /*::openfl::text::TextField*/ ,(void *) &Main_obj::answer,HX_HCSTRING("answer","\x7e","\xfd","\x0f","\x6b")},
	{hx::fsObject /*::openfl::text::TextField*/ ,(void *) &Main_obj::answertext,HX_HCSTRING("answertext","\x2b","\x61","\xc9","\xd8")},
	{hx::fsString,(void *) &Main_obj::input,HX_HCSTRING("input","\x0a","\xc4","\x1d","\xbe")},
	{hx::fsObject /*::openfl::text::TextField*/ ,(void *) &Main_obj::input2,HX_HCSTRING("input2","\xe8","\xc4","\xed","\x9b")},
	{hx::fsObject /*::openfl::text::TextField*/ ,(void *) &Main_obj::text,HX_HCSTRING("text","\xad","\xcc","\xf9","\x4c")},
	{hx::fsString,(void *) &Main_obj::input3,HX_HCSTRING("input3","\xe9","\xc4","\xed","\x9b")},
	{ hx::fsUnknown, 0, null()}
};
#endif

static ::String sMemberFields[] = {
	HX_HCSTRING("stopTimer","\x63","\xf8","\x77","\x20"),
	HX_HCSTRING("countdownSprite","\x96","\xbb","\x12","\x8d"),
	HX_HCSTRING("scoreDisplay","\x10","\xcd","\x4e","\xc8"),
	HX_HCSTRING("nameDisplay","\x37","\x8f","\x15","\x26"),
	HX_HCSTRING("creditnameDisplay","\x9e","\xd3","\x7d","\xb7"),
	HX_HCSTRING("jobDisplay","\xc5","\x2b","\x6d","\x83"),
	HX_HCSTRING("QADisplay","\x52","\x85","\xcc","\xcc"),
	HX_HCSTRING("QA2Display","\x00","\x33","\x51","\x1b"),
	HX_HCSTRING("QA4Display","\x3e","\x17","\xb6","\x8d"),
	HX_HCSTRING("ADisplay","\x01","\x4c","\x6a","\x0e"),
	HX_HCSTRING("A2Display","\x71","\x45","\xc1","\x43"),
	HX_HCSTRING("A3Display","\x90","\xb7","\xf3","\x7c"),
	HX_HCSTRING("A4Display","\xaf","\x29","\x26","\xb6"),
	HX_HCSTRING("endDisplay","\xa7","\x4f","\x6c","\x61"),
	HX_HCSTRING("end2Display","\x0b","\x73","\x82","\x92"),
	HX_HCSTRING("end3Display","\x2a","\xe5","\xb4","\xcb"),
	HX_HCSTRING("end4Display","\x49","\x57","\xe7","\x04"),
	HX_HCSTRING("startButton","\xf4","\xbf","\xc6","\x51"),
	HX_HCSTRING("playmusicButton","\x03","\x9f","\xc0","\xec"),
	HX_HCSTRING("musicButton","\x77","\x30","\x21","\x1c"),
	HX_HCSTRING("leaderboardButton","\xcf","\x1c","\x4f","\x88"),
	HX_HCSTRING("backButton","\x79","\x47","\x6a","\x18"),
	HX_HCSTRING("quitButton","\x21","\x5b","\x13","\xa5"),
	HX_HCSTRING("creditButton","\x0b","\xeb","\xa0","\x6f"),
	HX_HCSTRING("answerButton1","\x21","\x48","\x34","\x3e"),
	HX_HCSTRING("answerButton2","\x22","\x48","\x34","\x3e"),
	HX_HCSTRING("okayButton","\x26","\x12","\x68","\xed"),
	HX_HCSTRING("ToggleFullScreen","\x2f","\x0f","\x93","\x12"),
	HX_HCSTRING("gamestart","\x30","\xf3","\xf8","\x25"),
	HX_HCSTRING("startGame","\x74","\x6d","\x52","\xfd"),
	HX_HCSTRING("OnNextQuest","\xb0","\x20","\xa5","\x0b"),
	HX_HCSTRING("OnWalk","\xe8","\xd9","\x10","\x26"),
	HX_HCSTRING("OnBluffing","\xb6","\xd4","\x21","\x0b"),
	HX_HCSTRING("OnFight","\x11","\xdc","\x23","\x64"),
	HX_HCSTRING("OnStay","\xb8","\x60","\x7a","\x23"),
	HX_HCSTRING("OnEnd","\xdc","\x07","\x92","\xc5"),
	HX_HCSTRING("OnBlackButton","\x12","\x72","\x52","\x9b"),
	HX_HCSTRING("OnBlack2Button","\xc4","\xeb","\xb0","\xe2"),
	HX_HCSTRING("OnBlack3Button","\x85","\x62","\x46","\x0c"),
	HX_HCSTRING("OnBlack4Button","\x46","\xd9","\xdb","\x35"),
	HX_HCSTRING("TooLate","\xba","\x9f","\xa8","\x22"),
	HX_HCSTRING("Victory","\xb2","\x93","\x5b","\x41"),
	HX_HCSTRING("nameScene","\x01","\xa7","\x86","\x72"),
	HX_HCSTRING("OnCreditGame","\xea","\xc2","\x18","\xb1"),
	HX_HCSTRING("OnQuitGame","\xc0","\xcb","\x27","\x0a"),
	HX_HCSTRING("OnPlayMusicButton","\x64","\xb8","\x6e","\x31"),
	HX_HCSTRING("OnMusicButton","\x78","\x9d","\xfb","\xc6"),
	HX_HCSTRING("OnLeaderboardButton","\x90","\xc0","\xce","\x9f"),
	HX_HCSTRING("OnBackButton","\x98","\x35","\xc0","\xb8"),
	HX_HCSTRING("startRoll","\xff","\x64","\xa2","\x04"),
	HX_HCSTRING("startOut","\x4c","\x4d","\x98","\x42"),
	HX_HCSTRING("playmusicRoll","\x4e","\x12","\x1b","\xce"),
	HX_HCSTRING("playmusicOut","\xdd","\xfe","\x7a","\xbf"),
	HX_HCSTRING("musicRoll","\xc2","\x9e","\xa8","\xd5"),
	HX_HCSTRING("musicOut","\xe9","\xbc","\x93","\x0d"),
	HX_HCSTRING("leaderboardRoll","\x1a","\x45","\x5e","\xec"),
	HX_HCSTRING("leaderboardOut","\x91","\x29","\x1d","\x4f"),
	HX_HCSTRING("backRoll","\x44","\x91","\xae","\x0e"),
	HX_HCSTRING("backOut","\xa7","\x10","\x77","\xfb"),
	HX_HCSTRING("quitRoll","\xec","\xea","\x0f","\x3d"),
	HX_HCSTRING("quitOut","\xff","\xa3","\xb6","\xe4"),
	HX_HCSTRING("creditRoll","\x56","\xcc","\x12","\x18"),
	HX_HCSTRING("creditOut","\xd5","\x5d","\x76","\x31"),
	HX_HCSTRING("okayRoll","\xb1","\x66","\xfa","\xd8"),
	HX_HCSTRING("okayOut","\xda","\x87","\x13","\xfa"),
	HX_HCSTRING("QARoll","\x6d","\x06","\x7c","\x06"),
	HX_HCSTRING("QAOut","\x9e","\x33","\xa8","\xce"),
	HX_HCSTRING("ARoll","\x5e","\xcc","\x93","\xa3"),
	HX_HCSTRING("AOut","\xcd","\x36","\x33","\x2b"),
	HX_HCSTRING("A2Roll","\xee","\x8c","\xc3","\xfd"),
	HX_HCSTRING("A2Out","\x3d","\xb8","\x54","\x8e"),
	HX_HCSTRING("EndRoll","\xd8","\xcc","\x24","\xfb"),
	HX_HCSTRING("EndOut","\x93","\x63","\x09","\x2f"),
	HX_HCSTRING("End2Roll","\x34","\xf7","\x12","\x45"),
	HX_HCSTRING("End2Out","\xb7","\xb8","\xe5","\xe5"),
	HX_HCSTRING("End3Roll","\xb5","\x8b","\x79","\xd8"),
	HX_HCSTRING("End3Out","\x56","\xef","\x8e","\xe6"),
	HX_HCSTRING("End4Roll","\x36","\x20","\xe0","\x6b"),
	HX_HCSTRING("End4Out","\xf5","\x25","\x38","\xe7"),
	HX_HCSTRING("A3Roll","\x6f","\x21","\x2a","\x91"),
	HX_HCSTRING("A3Out","\xdc","\xee","\xfd","\x8e"),
	HX_HCSTRING("A4Roll","\xf0","\xb5","\x90","\x24"),
	HX_HCSTRING("A4Out","\x7b","\x25","\xa7","\x8f"),
	::String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(Main_obj::__mClass,"__mClass");
	HX_MARK_MEMBER_NAME(Main_obj::answer,"answer");
	HX_MARK_MEMBER_NAME(Main_obj::answertext,"answertext");
	HX_MARK_MEMBER_NAME(Main_obj::input,"input");
	HX_MARK_MEMBER_NAME(Main_obj::input2,"input2");
	HX_MARK_MEMBER_NAME(Main_obj::text,"text");
	HX_MARK_MEMBER_NAME(Main_obj::input3,"input3");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(Main_obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(Main_obj::answer,"answer");
	HX_VISIT_MEMBER_NAME(Main_obj::answertext,"answertext");
	HX_VISIT_MEMBER_NAME(Main_obj::input,"input");
	HX_VISIT_MEMBER_NAME(Main_obj::input2,"input2");
	HX_VISIT_MEMBER_NAME(Main_obj::text,"text");
	HX_VISIT_MEMBER_NAME(Main_obj::input3,"input3");
};

#endif

hx::Class Main_obj::__mClass;

static ::String sStaticFields[] = {
	HX_HCSTRING("answer","\x7e","\xfd","\x0f","\x6b"),
	HX_HCSTRING("answertext","\x2b","\x61","\xc9","\xd8"),
	HX_HCSTRING("input","\x0a","\xc4","\x1d","\xbe"),
	HX_HCSTRING("input2","\xe8","\xc4","\xed","\x9b"),
	HX_HCSTRING("text","\xad","\xcc","\xf9","\x4c"),
	HX_HCSTRING("input3","\xe9","\xc4","\xed","\x9b"),
	HX_HCSTRING("Setanswer2","\xb2","\xd1","\x2c","\xbf"),
	HX_HCSTRING("Getanswer2","\x3e","\x33","\xaf","\xbb"),
	HX_HCSTRING("Setanswer","\x80","\xde","\xf5","\x37"),
	HX_HCSTRING("Getanswer","\x74","\xf2","\xa4","\x54"),
	::String(null()) };

void Main_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("Main","\x59","\x64","\x2f","\x33");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &Main_obj::__GetStatic;
	__mClass->mSetStaticField = &Main_obj::__SetStatic;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(sStaticFields);
	__mClass->mMembers = hx::Class_obj::dupFunctions(sMemberFields);
	__mClass->mCanCast = hx::TCanCast< Main_obj >;
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

