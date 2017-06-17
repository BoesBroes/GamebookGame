#ifndef INCLUDED_Main
#define INCLUDED_Main

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#ifndef INCLUDED_openfl_display_Sprite
#include <openfl/display/Sprite.h>
#endif
HX_DECLARE_CLASS0(Button)
HX_DECLARE_CLASS0(Main)
HX_DECLARE_CLASS2(openfl,display,DisplayObject)
HX_DECLARE_CLASS2(openfl,display,DisplayObjectContainer)
HX_DECLARE_CLASS2(openfl,display,IBitmapDrawable)
HX_DECLARE_CLASS2(openfl,display,InteractiveObject)
HX_DECLARE_CLASS2(openfl,display,Sprite)
HX_DECLARE_CLASS2(openfl,events,Event)
HX_DECLARE_CLASS2(openfl,events,EventDispatcher)
HX_DECLARE_CLASS2(openfl,events,IEventDispatcher)
HX_DECLARE_CLASS2(openfl,events,MouseEvent)
HX_DECLARE_CLASS2(openfl,text,TextField)


class HXCPP_CLASS_ATTRIBUTES  Main_obj : public ::openfl::display::Sprite_obj{
	public:
		typedef ::openfl::display::Sprite_obj super;
		typedef Main_obj OBJ_;
		Main_obj();
		Void __construct();

	public:
		inline void *operator new( size_t inSize, bool inContainer=true,const char *inName="Main")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		static hx::ObjectPtr< Main_obj > __new();
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~Main_obj();

		HX_DO_RTTI_ALL;
		Dynamic __Field(const ::String &inString, hx::PropertyAccess inCallProp);
		static bool __GetStatic(const ::String &inString, Dynamic &outValue, hx::PropertyAccess inCallProp);
		Dynamic __SetField(const ::String &inString,const Dynamic &inValue, hx::PropertyAccess inCallProp);
		static bool __SetStatic(const ::String &inString, Dynamic &ioValue, hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		::String __ToString() const { return HX_HCSTRING("Main","\x59","\x64","\x2f","\x33"); }

		static ::openfl::text::TextField answer;
		static ::openfl::text::TextField answertext;
		static ::String input;
		static ::openfl::text::TextField input2;
		static ::openfl::text::TextField text;
		static ::String input3;
		static Void Setanswer2( ::String newName2);
		static Dynamic Setanswer2_dyn();

		static ::String Getanswer2( );
		static Dynamic Getanswer2_dyn();

		static Void Setanswer( ::String newName);
		static Dynamic Setanswer_dyn();

		static ::String Getanswer( );
		static Dynamic Getanswer_dyn();

		bool stopTimer;
		::openfl::display::Sprite countdownSprite;
		::openfl::text::TextField scoreDisplay;
		::openfl::text::TextField nameDisplay;
		::openfl::text::TextField creditnameDisplay;
		::openfl::text::TextField jobDisplay;
		::openfl::text::TextField QADisplay;
		::openfl::text::TextField QA2Display;
		::openfl::text::TextField QA4Display;
		::openfl::text::TextField ADisplay;
		::openfl::text::TextField A2Display;
		::openfl::text::TextField A3Display;
		::openfl::text::TextField A4Display;
		::openfl::text::TextField endDisplay;
		::openfl::text::TextField end2Display;
		::openfl::text::TextField end3Display;
		::openfl::text::TextField end4Display;
		::Button startButton;
		::Button playmusicButton;
		::Button musicButton;
		::Button leaderboardButton;
		::Button backButton;
		::Button quitButton;
		::Button creditButton;
		::Button answerButton1;
		::Button answerButton2;
		::Button okayButton;
		virtual Void ToggleFullScreen( );
		Dynamic ToggleFullScreen_dyn();

		virtual Void gamestart( );
		Dynamic gamestart_dyn();

		virtual Void startGame( ::openfl::events::MouseEvent event);
		Dynamic startGame_dyn();

		virtual Void OnNextQuest( ::openfl::events::MouseEvent event);
		Dynamic OnNextQuest_dyn();

		virtual Void OnWalk( ::openfl::events::MouseEvent event);
		Dynamic OnWalk_dyn();

		virtual Void OnBluffing( ::openfl::events::MouseEvent event);
		Dynamic OnBluffing_dyn();

		virtual Void OnFight( ::openfl::events::MouseEvent event);
		Dynamic OnFight_dyn();

		virtual Void OnStay( ::openfl::events::MouseEvent event);
		Dynamic OnStay_dyn();

		virtual Void OnEnd( ::openfl::events::MouseEvent event);
		Dynamic OnEnd_dyn();

		virtual Void OnBlackButton( ::openfl::events::MouseEvent event);
		Dynamic OnBlackButton_dyn();

		virtual Void OnBlack2Button( ::openfl::events::MouseEvent event);
		Dynamic OnBlack2Button_dyn();

		virtual Void OnBlack3Button( ::openfl::events::MouseEvent event);
		Dynamic OnBlack3Button_dyn();

		virtual Void OnBlack4Button( ::openfl::events::MouseEvent event);
		Dynamic OnBlack4Button_dyn();

		virtual Void TooLate( );
		Dynamic TooLate_dyn();

		virtual Void Victory( ::openfl::events::MouseEvent event);
		Dynamic Victory_dyn();

		virtual Void nameScene( ::openfl::events::MouseEvent event);
		Dynamic nameScene_dyn();

		virtual Void OnCreditGame( ::openfl::events::MouseEvent event);
		Dynamic OnCreditGame_dyn();

		virtual Void OnQuitGame( ::openfl::events::MouseEvent event);
		Dynamic OnQuitGame_dyn();

		virtual Void OnPlayMusicButton( ::openfl::events::MouseEvent event);
		Dynamic OnPlayMusicButton_dyn();

		virtual Void OnMusicButton( ::openfl::events::MouseEvent event);
		Dynamic OnMusicButton_dyn();

		virtual Void OnLeaderboardButton( ::openfl::events::MouseEvent event);
		Dynamic OnLeaderboardButton_dyn();

		virtual Void OnBackButton( ::openfl::events::MouseEvent event);
		Dynamic OnBackButton_dyn();

		virtual Void startRoll( ::openfl::events::MouseEvent event);
		Dynamic startRoll_dyn();

		virtual Void startOut( ::openfl::events::MouseEvent event);
		Dynamic startOut_dyn();

		virtual Void playmusicRoll( ::openfl::events::MouseEvent event);
		Dynamic playmusicRoll_dyn();

		virtual Void playmusicOut( ::openfl::events::MouseEvent event);
		Dynamic playmusicOut_dyn();

		virtual Void musicRoll( ::openfl::events::MouseEvent event);
		Dynamic musicRoll_dyn();

		virtual Void musicOut( ::openfl::events::MouseEvent event);
		Dynamic musicOut_dyn();

		virtual Void leaderboardRoll( ::openfl::events::MouseEvent event);
		Dynamic leaderboardRoll_dyn();

		virtual Void leaderboardOut( ::openfl::events::MouseEvent event);
		Dynamic leaderboardOut_dyn();

		virtual Void backRoll( ::openfl::events::MouseEvent event);
		Dynamic backRoll_dyn();

		virtual Void backOut( ::openfl::events::MouseEvent event);
		Dynamic backOut_dyn();

		virtual Void quitRoll( ::openfl::events::MouseEvent event);
		Dynamic quitRoll_dyn();

		virtual Void quitOut( ::openfl::events::MouseEvent event);
		Dynamic quitOut_dyn();

		virtual Void creditRoll( ::openfl::events::MouseEvent event);
		Dynamic creditRoll_dyn();

		virtual Void creditOut( ::openfl::events::MouseEvent event);
		Dynamic creditOut_dyn();

		virtual Void okayRoll( ::openfl::events::MouseEvent event);
		Dynamic okayRoll_dyn();

		virtual Void okayOut( ::openfl::events::MouseEvent event);
		Dynamic okayOut_dyn();

		virtual Void QARoll( ::openfl::events::MouseEvent event);
		Dynamic QARoll_dyn();

		virtual Void QAOut( ::openfl::events::MouseEvent event);
		Dynamic QAOut_dyn();

		virtual Void ARoll( ::openfl::events::MouseEvent event);
		Dynamic ARoll_dyn();

		virtual Void AOut( ::openfl::events::MouseEvent event);
		Dynamic AOut_dyn();

		virtual Void A2Roll( ::openfl::events::MouseEvent event);
		Dynamic A2Roll_dyn();

		virtual Void A2Out( ::openfl::events::MouseEvent event);
		Dynamic A2Out_dyn();

		virtual Void EndRoll( ::openfl::events::MouseEvent event);
		Dynamic EndRoll_dyn();

		virtual Void EndOut( ::openfl::events::MouseEvent event);
		Dynamic EndOut_dyn();

		virtual Void End2Roll( ::openfl::events::MouseEvent event);
		Dynamic End2Roll_dyn();

		virtual Void End2Out( ::openfl::events::MouseEvent event);
		Dynamic End2Out_dyn();

		virtual Void End3Roll( ::openfl::events::MouseEvent event);
		Dynamic End3Roll_dyn();

		virtual Void End3Out( ::openfl::events::MouseEvent event);
		Dynamic End3Out_dyn();

		virtual Void End4Roll( ::openfl::events::MouseEvent event);
		Dynamic End4Roll_dyn();

		virtual Void End4Out( ::openfl::events::MouseEvent event);
		Dynamic End4Out_dyn();

		virtual Void A3Roll( ::openfl::events::MouseEvent event);
		Dynamic A3Roll_dyn();

		virtual Void A3Out( ::openfl::events::MouseEvent event);
		Dynamic A3Out_dyn();

		virtual Void A4Roll( ::openfl::events::MouseEvent event);
		Dynamic A4Roll_dyn();

		virtual Void A4Out( ::openfl::events::MouseEvent event);
		Dynamic A4Out_dyn();

};


#endif /* INCLUDED_Main */ 
