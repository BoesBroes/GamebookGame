#ifndef INCLUDED_openfl_display__MovieClip_TimelineObject
#define INCLUDED_openfl_display__MovieClip_TimelineObject

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS2(openfl,display,DisplayObject)
HX_DECLARE_CLASS2(openfl,display,IBitmapDrawable)
HX_DECLARE_CLASS3(openfl,display,_MovieClip,TimelineObject)
HX_DECLARE_CLASS2(openfl,events,EventDispatcher)
HX_DECLARE_CLASS2(openfl,events,IEventDispatcher)
namespace openfl{
namespace display{
namespace _MovieClip{


class HXCPP_CLASS_ATTRIBUTES  TimelineObject_obj : public hx::Object{
	public:
		typedef hx::Object super;
		typedef TimelineObject_obj OBJ_;
		TimelineObject_obj();
		Void __construct(int id,int depth,int clipDepth,::openfl::display::DisplayObject displayObject);

	public:
		inline void *operator new( size_t inSize, bool inContainer=true,const char *inName="openfl.display._MovieClip.TimelineObject")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		static hx::ObjectPtr< TimelineObject_obj > __new(int id,int depth,int clipDepth,::openfl::display::DisplayObject displayObject);
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~TimelineObject_obj();

		HX_DO_RTTI_ALL;
		Dynamic __Field(const ::String &inString, hx::PropertyAccess inCallProp);
		Dynamic __SetField(const ::String &inString,const Dynamic &inValue, hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		::String __ToString() const { return HX_HCSTRING("TimelineObject","\x40","\x4c","\xfc","\x3c"); }

		int clipDepth;
		int depth;
		::openfl::display::DisplayObject displayObject;
		int id;
};

} // end namespace openfl
} // end namespace display
} // end namespace _MovieClip

#endif /* INCLUDED_openfl_display__MovieClip_TimelineObject */ 
