#ifndef INCLUDED_openfl__internal_timeline_Frame
#define INCLUDED_openfl__internal_timeline_Frame

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS3(openfl,_internal,timeline,Frame)
HX_DECLARE_CLASS3(openfl,_internal,timeline,FrameObject)
namespace openfl{
namespace _internal{
namespace timeline{


class HXCPP_CLASS_ATTRIBUTES  Frame_obj : public hx::Object{
	public:
		typedef hx::Object super;
		typedef Frame_obj OBJ_;
		Frame_obj();
		Void __construct();

	public:
		inline void *operator new( size_t inSize, bool inContainer=true,const char *inName="openfl._internal.timeline.Frame")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		static hx::ObjectPtr< Frame_obj > __new();
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~Frame_obj();

		HX_DO_RTTI_ALL;
		Dynamic __Field(const ::String &inString, hx::PropertyAccess inCallProp);
		Dynamic __SetField(const ::String &inString,const Dynamic &inValue, hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		::String __ToString() const { return HX_HCSTRING("Frame","\x0d","\xe8","\xb0","\x99"); }

		::String label;
		Array< ::Dynamic > objects;
};

} // end namespace openfl
} // end namespace _internal
} // end namespace timeline

#endif /* INCLUDED_openfl__internal_timeline_Frame */ 
