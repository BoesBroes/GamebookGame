#ifndef INCLUDED_openfl_events__EventDispatcher_DispatchIterator
#define INCLUDED_openfl_events__EventDispatcher_DispatchIterator

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS3(openfl,events,_EventDispatcher,DispatchIterator)
HX_DECLARE_CLASS3(openfl,events,_EventDispatcher,Listener)
namespace openfl{
namespace events{
namespace _EventDispatcher{


class HXCPP_CLASS_ATTRIBUTES  DispatchIterator_obj : public hx::Object{
	public:
		typedef hx::Object super;
		typedef DispatchIterator_obj OBJ_;
		DispatchIterator_obj();
		Void __construct(Array< ::Dynamic > list);

	public:
		inline void *operator new( size_t inSize, bool inContainer=true,const char *inName="openfl.events._EventDispatcher.DispatchIterator")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		static hx::ObjectPtr< DispatchIterator_obj > __new(Array< ::Dynamic > list);
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~DispatchIterator_obj();

		HX_DO_RTTI_ALL;
		Dynamic __Field(const ::String &inString, hx::PropertyAccess inCallProp);
		Dynamic __SetField(const ::String &inString,const Dynamic &inValue, hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		::String __ToString() const { return HX_HCSTRING("DispatchIterator","\xe8","\xfa","\x8e","\xc6"); }

		bool active;
		int index;
		bool isCopy;
		Array< ::Dynamic > list;
		virtual Void copy( );
		Dynamic copy_dyn();

		virtual bool hasNext( );
		Dynamic hasNext_dyn();

		virtual ::openfl::events::_EventDispatcher::Listener next( );
		Dynamic next_dyn();

		virtual Void remove( ::openfl::events::_EventDispatcher::Listener listener,int listIndex);
		Dynamic remove_dyn();

		virtual Void reset( Array< ::Dynamic > list);
		Dynamic reset_dyn();

};

} // end namespace openfl
} // end namespace events
} // end namespace _EventDispatcher

#endif /* INCLUDED_openfl_events__EventDispatcher_DispatchIterator */ 
