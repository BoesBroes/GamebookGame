#include <hxcpp.h>

#ifndef INCLUDED_Menu
#include <Menu.h>
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
#ifndef INCLUDED_openfl_display_Sprite
#include <openfl/display/Sprite.h>
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
#ifndef INCLUDED_openfl_media_SoundChannel
#include <openfl/media/SoundChannel.h>
#endif
#ifndef INCLUDED_openfl_media_SoundTransform
#include <openfl/media/SoundTransform.h>
#endif
#ifndef INCLUDED_openfl_utils_Assets
#include <openfl/utils/Assets.h>
#endif

Void Menu_obj::__construct()
{
HX_STACK_FRAME("Menu","new",0x14035e31,"Menu.new","Menu.hx",33,0x878d325f)
HX_STACK_THIS(this)
{
	HX_STACK_LINE(33)
	super::__construct();
}
;
	return null();
}

//Menu_obj::~Menu_obj() { }

Dynamic Menu_obj::__CreateEmpty() { return  new Menu_obj; }
hx::ObjectPtr< Menu_obj > Menu_obj::__new()
{  hx::ObjectPtr< Menu_obj > _result_ = new Menu_obj();
	_result_->__construct();
	return _result_;}

Dynamic Menu_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< Menu_obj > _result_ = new Menu_obj();
	_result_->__construct();
	return _result_;}

::openfl::media::SoundChannel Menu_obj::musicChannel;

::openfl::media::SoundChannel Menu_obj::sfxChannel;

::openfl::media::Sound Menu_obj::playedMusic;

::openfl::media::Sound Menu_obj::sfxSoundPlay;

bool Menu_obj::musicPlaying;

Void Menu_obj::playMusic( ::String musicName){
{
		HX_STACK_FRAME("Menu","playMusic",0xf79c3ea2,"Menu.playMusic","Menu.hx",46,0x878d325f)
		HX_STACK_ARG(musicName,"musicName")
		HX_STACK_LINE(48)
		::openfl::media::SoundChannel tmp = ::Menu_obj::musicChannel;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(48)
		bool tmp1 = (tmp != null());		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(48)
		if ((tmp1)){
			HX_STACK_LINE(49)
			::openfl::media::SoundChannel tmp2 = ::Menu_obj::musicChannel;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(49)
			tmp2->stop();
		}
		HX_STACK_LINE(53)
		::String tmp2 = (HX_HCSTRING("music/","\xea","\xbf","\x1b","\x3f") + musicName);		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(53)
		::String tmp3 = (tmp2 + HX_HCSTRING(".wav","\xbe","\x71","\xc2","\x1e"));		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(53)
		::openfl::media::Sound tmp4 = ::openfl::utils::Assets_obj::getMusic(tmp3,null());		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(53)
		::Menu_obj::playedMusic = tmp4;
		HX_STACK_LINE(54)
		::openfl::media::Sound tmp5 = ::Menu_obj::playedMusic;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(54)
		::openfl::media::SoundChannel tmp6 = tmp5->play(((Float)0.0),(int)1000,null());		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(54)
		::Menu_obj::musicChannel = tmp6;
		HX_STACK_LINE(61)
		::openfl::media::SoundChannel tmp7 = ::Menu_obj::musicChannel;		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(61)
		::openfl::media::SoundTransform tmp8 = ::openfl::media::SoundTransform_obj::__new(((Float)0.90),(int)0);		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(61)
		tmp7->set_soundTransform(tmp8);
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Menu_obj,playMusic,(void))

Void Menu_obj::stopMusic( ::String musicName){
{
		HX_STACK_FRAME("Menu","stopMusic",0xe6fa49d4,"Menu.stopMusic","Menu.hx",65,0x878d325f)
		HX_STACK_ARG(musicName,"musicName")
		HX_STACK_LINE(66)
		::openfl::media::SoundChannel tmp = ::Menu_obj::musicChannel;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(66)
		bool tmp1 = (tmp != null());		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(66)
		if ((tmp1)){
			HX_STACK_LINE(67)
			::openfl::media::SoundChannel tmp2 = ::Menu_obj::musicChannel;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(67)
			tmp2->stop();
		}
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Menu_obj,stopMusic,(void))

Void Menu_obj::playSFX( ::String sfxName){
{
		HX_STACK_FRAME("Menu","playSFX",0x77c08542,"Menu.playSFX","Menu.hx",72,0x878d325f)
		HX_STACK_ARG(sfxName,"sfxName")
		HX_STACK_LINE(74)
		::String tmp = (HX_HCSTRING("music/","\xea","\xbf","\x1b","\x3f") + sfxName);		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(74)
		::String tmp1 = (tmp + HX_HCSTRING(".wav","\xbe","\x71","\xc2","\x1e"));		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(74)
		::openfl::media::Sound tmp2 = ::openfl::utils::Assets_obj::getSound(tmp1,null());		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(74)
		::Menu_obj::sfxSoundPlay = tmp2;
		HX_STACK_LINE(77)
		::openfl::media::Sound tmp3 = ::Menu_obj::sfxSoundPlay;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(77)
		::openfl::media::SoundChannel tmp4 = tmp3->play(null(),null(),null());		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(77)
		::Menu_obj::sfxChannel = tmp4;
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Menu_obj,playSFX,(void))


Menu_obj::Menu_obj()
{
}

bool Menu_obj::__GetStatic(const ::String &inName, Dynamic &outValue, hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 7:
		if (HX_FIELD_EQ(inName,"playSFX") ) { outValue = playSFX_dyn(); return true;  }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"playMusic") ) { outValue = playMusic_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"stopMusic") ) { outValue = stopMusic_dyn(); return true;  }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"sfxChannel") ) { outValue = sfxChannel; return true;  }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"playedMusic") ) { outValue = playedMusic; return true;  }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"musicChannel") ) { outValue = musicChannel; return true;  }
		if (HX_FIELD_EQ(inName,"sfxSoundPlay") ) { outValue = sfxSoundPlay; return true;  }
		if (HX_FIELD_EQ(inName,"musicPlaying") ) { outValue = musicPlaying; return true;  }
	}
	return false;
}

bool Menu_obj::__SetStatic(const ::String &inName,Dynamic &ioValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 10:
		if (HX_FIELD_EQ(inName,"sfxChannel") ) { sfxChannel=ioValue.Cast< ::openfl::media::SoundChannel >(); return true; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"playedMusic") ) { playedMusic=ioValue.Cast< ::openfl::media::Sound >(); return true; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"musicChannel") ) { musicChannel=ioValue.Cast< ::openfl::media::SoundChannel >(); return true; }
		if (HX_FIELD_EQ(inName,"sfxSoundPlay") ) { sfxSoundPlay=ioValue.Cast< ::openfl::media::Sound >(); return true; }
		if (HX_FIELD_EQ(inName,"musicPlaying") ) { musicPlaying=ioValue.Cast< bool >(); return true; }
	}
	return false;
}

#if HXCPP_SCRIPTABLE
static hx::StorageInfo *sMemberStorageInfo = 0;
static hx::StaticInfo sStaticStorageInfo[] = {
	{hx::fsObject /*::openfl::media::SoundChannel*/ ,(void *) &Menu_obj::musicChannel,HX_HCSTRING("musicChannel","\x9e","\xe6","\x45","\x83")},
	{hx::fsObject /*::openfl::media::SoundChannel*/ ,(void *) &Menu_obj::sfxChannel,HX_HCSTRING("sfxChannel","\xbe","\x56","\x6c","\xd7")},
	{hx::fsObject /*::openfl::media::Sound*/ ,(void *) &Menu_obj::playedMusic,HX_HCSTRING("playedMusic","\x52","\x68","\x3a","\x7e")},
	{hx::fsObject /*::openfl::media::Sound*/ ,(void *) &Menu_obj::sfxSoundPlay,HX_HCSTRING("sfxSoundPlay","\x1e","\x05","\x80","\xfb")},
	{hx::fsBool,(void *) &Menu_obj::musicPlaying,HX_HCSTRING("musicPlaying","\x49","\xf5","\x8b","\x40")},
	{ hx::fsUnknown, 0, null()}
};
#endif

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(Menu_obj::__mClass,"__mClass");
	HX_MARK_MEMBER_NAME(Menu_obj::musicChannel,"musicChannel");
	HX_MARK_MEMBER_NAME(Menu_obj::sfxChannel,"sfxChannel");
	HX_MARK_MEMBER_NAME(Menu_obj::playedMusic,"playedMusic");
	HX_MARK_MEMBER_NAME(Menu_obj::sfxSoundPlay,"sfxSoundPlay");
	HX_MARK_MEMBER_NAME(Menu_obj::musicPlaying,"musicPlaying");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(Menu_obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(Menu_obj::musicChannel,"musicChannel");
	HX_VISIT_MEMBER_NAME(Menu_obj::sfxChannel,"sfxChannel");
	HX_VISIT_MEMBER_NAME(Menu_obj::playedMusic,"playedMusic");
	HX_VISIT_MEMBER_NAME(Menu_obj::sfxSoundPlay,"sfxSoundPlay");
	HX_VISIT_MEMBER_NAME(Menu_obj::musicPlaying,"musicPlaying");
};

#endif

hx::Class Menu_obj::__mClass;

static ::String sStaticFields[] = {
	HX_HCSTRING("musicChannel","\x9e","\xe6","\x45","\x83"),
	HX_HCSTRING("sfxChannel","\xbe","\x56","\x6c","\xd7"),
	HX_HCSTRING("playedMusic","\x52","\x68","\x3a","\x7e"),
	HX_HCSTRING("sfxSoundPlay","\x1e","\x05","\x80","\xfb"),
	HX_HCSTRING("musicPlaying","\x49","\xf5","\x8b","\x40"),
	HX_HCSTRING("playMusic","\x11","\xfe","\x3e","\x31"),
	HX_HCSTRING("stopMusic","\x43","\x09","\x9d","\x20"),
	HX_HCSTRING("playSFX","\xf1","\x3a","\x07","\x8a"),
	::String(null()) };

void Menu_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("Menu","\xbf","\x71","\x32","\x33");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &Menu_obj::__GetStatic;
	__mClass->mSetStaticField = &Menu_obj::__SetStatic;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(sStaticFields);
	__mClass->mMembers = hx::Class_obj::dupFunctions(0 /* sMemberFields */);
	__mClass->mCanCast = hx::TCanCast< Menu_obj >;
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

void Menu_obj::__boot()
{
	musicPlaying= true;
}

