#ifndef INCLUDED_openfl_utils_Timer
#define INCLUDED_openfl_utils_Timer

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#ifndef INCLUDED_openfl_events_EventDispatcher
#include <openfl/events/EventDispatcher.h>
#endif
HX_DECLARE_CLASS1(haxe,Timer)
HX_DECLARE_CLASS2(openfl,events,EventDispatcher)
HX_DECLARE_CLASS2(openfl,events,IEventDispatcher)
HX_DECLARE_CLASS2(openfl,utils,Timer)
namespace openfl{
namespace utils{


class HXCPP_CLASS_ATTRIBUTES  Timer_obj : public ::openfl::events::EventDispatcher_obj{
	public:
		typedef ::openfl::events::EventDispatcher_obj super;
		typedef Timer_obj OBJ_;
		Timer_obj();
		Void __construct(Float delay,hx::Null< int >  __o_repeatCount);

	public:
		inline void *operator new( size_t inSize, bool inContainer=true,const char *inName="openfl.utils.Timer")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		static hx::ObjectPtr< Timer_obj > __new(Float delay,hx::Null< int >  __o_repeatCount);
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~Timer_obj();

		HX_DO_RTTI_ALL;
		Dynamic __Field(const ::String &inString, hx::PropertyAccess inCallProp);
		Dynamic __SetField(const ::String &inString,const Dynamic &inValue, hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		::String __ToString() const { return HX_HCSTRING("Timer","\xa5","\x2f","\x63","\xa3"); }

		int currentCount;
		int repeatCount;
		bool running;
		Float __delay;
		::haxe::Timer __timer;
		int __timerID;
		virtual Void reset( );
		Dynamic reset_dyn();

		virtual Void start( );
		Dynamic start_dyn();

		virtual Void stop( );
		Dynamic stop_dyn();

		virtual Float get_delay( );
		Dynamic get_delay_dyn();

		virtual Float set_delay( Float value);
		Dynamic set_delay_dyn();

		virtual int set_repeatCount( int v);
		Dynamic set_repeatCount_dyn();

		virtual Void timer_onTimer( );
		Dynamic timer_onTimer_dyn();

};

} // end namespace openfl
} // end namespace utils

#endif /* INCLUDED_openfl_utils_Timer */ 
