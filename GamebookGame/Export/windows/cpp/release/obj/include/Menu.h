#ifndef INCLUDED_Menu
#define INCLUDED_Menu

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#ifndef INCLUDED_openfl_display_Sprite
#include <openfl/display/Sprite.h>
#endif
HX_DECLARE_CLASS0(Menu)
HX_DECLARE_CLASS2(openfl,display,DisplayObject)
HX_DECLARE_CLASS2(openfl,display,DisplayObjectContainer)
HX_DECLARE_CLASS2(openfl,display,IBitmapDrawable)
HX_DECLARE_CLASS2(openfl,display,InteractiveObject)
HX_DECLARE_CLASS2(openfl,display,Sprite)
HX_DECLARE_CLASS2(openfl,events,EventDispatcher)
HX_DECLARE_CLASS2(openfl,events,IEventDispatcher)
HX_DECLARE_CLASS2(openfl,media,Sound)
HX_DECLARE_CLASS2(openfl,media,SoundChannel)


class HXCPP_CLASS_ATTRIBUTES  Menu_obj : public ::openfl::display::Sprite_obj{
	public:
		typedef ::openfl::display::Sprite_obj super;
		typedef Menu_obj OBJ_;
		Menu_obj();
		Void __construct();

	public:
		inline void *operator new( size_t inSize, bool inContainer=true,const char *inName="Menu")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		static hx::ObjectPtr< Menu_obj > __new();
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~Menu_obj();

		HX_DO_RTTI_ALL;
		static bool __GetStatic(const ::String &inString, Dynamic &outValue, hx::PropertyAccess inCallProp);
		static bool __SetStatic(const ::String &inString, Dynamic &ioValue, hx::PropertyAccess inCallProp);
		static void __register();
		::String __ToString() const { return HX_HCSTRING("Menu","\xbf","\x71","\x32","\x33"); }

		static void __boot();
		static ::openfl::media::SoundChannel musicChannel;
		static ::openfl::media::SoundChannel sfxChannel;
		static ::openfl::media::Sound playedMusic;
		static ::openfl::media::Sound sfxSoundPlay;
		static bool musicPlaying;
		static Void playMusic( ::String musicName);
		static Dynamic playMusic_dyn();

		static Void stopMusic( ::String musicName);
		static Dynamic stopMusic_dyn();

		static Void playSFX( ::String sfxName);
		static Dynamic playSFX_dyn();

};


#endif /* INCLUDED_Menu */ 
