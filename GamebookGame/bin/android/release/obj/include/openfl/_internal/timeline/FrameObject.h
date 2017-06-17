#ifndef INCLUDED_openfl__internal_timeline_FrameObject
#define INCLUDED_openfl__internal_timeline_FrameObject

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS3(openfl,_internal,swf,FilterType)
HX_DECLARE_CLASS3(openfl,_internal,timeline,FrameObject)
HX_DECLARE_CLASS3(openfl,_internal,timeline,FrameObjectType)
HX_DECLARE_CLASS2(openfl,geom,ColorTransform)
HX_DECLARE_CLASS2(openfl,geom,Matrix)
namespace openfl{
namespace _internal{
namespace timeline{


class HXCPP_CLASS_ATTRIBUTES  FrameObject_obj : public hx::Object{
	public:
		typedef hx::Object super;
		typedef FrameObject_obj OBJ_;
		FrameObject_obj();
		Void __construct();

	public:
		inline void *operator new( size_t inSize, bool inContainer=true,const char *inName="openfl._internal.timeline.FrameObject")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		static hx::ObjectPtr< FrameObject_obj > __new();
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~FrameObject_obj();

		HX_DO_RTTI_ALL;
		Dynamic __Field(const ::String &inString, hx::PropertyAccess inCallProp);
		Dynamic __SetField(const ::String &inString,const Dynamic &inValue, hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		::String __ToString() const { return HX_HCSTRING("FrameObject","\xac","\xe2","\xb9","\xd7"); }

		int clipDepth;
		::openfl::geom::ColorTransform colorTransform;
		int depth;
		Array< ::Dynamic > filters;
		int id;
		::openfl::geom::Matrix matrix;
		::String name;
		int symbol;
		::openfl::_internal::timeline::FrameObjectType type;
		bool visible;
};

} // end namespace openfl
} // end namespace _internal
} // end namespace timeline

#endif /* INCLUDED_openfl__internal_timeline_FrameObject */ 
