#ifndef INCLUDED_openfl__internal_timeline_FrameObjectType
#define INCLUDED_openfl__internal_timeline_FrameObjectType

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS3(openfl,_internal,timeline,FrameObjectType)
namespace openfl{
namespace _internal{
namespace timeline{


class FrameObjectType_obj : public hx::EnumBase_obj
{
	typedef hx::EnumBase_obj super;
		typedef FrameObjectType_obj OBJ_;

	public:
		FrameObjectType_obj() {};
		HX_DO_ENUM_RTTI;
		static void __boot();
		static void __register();
		::String GetEnumName( ) const { return HX_HCSTRING("openfl._internal.timeline.FrameObjectType","\xc9","\x51","\x85","\xe1"); }
		::String __ToString() const { return HX_HCSTRING("FrameObjectType.","\xe8","\xcd","\x8d","\xa4") + tag; }

		static ::openfl::_internal::timeline::FrameObjectType CREATE;
		static inline ::openfl::_internal::timeline::FrameObjectType CREATE_dyn() { return CREATE; }
		static ::openfl::_internal::timeline::FrameObjectType DESTROY;
		static inline ::openfl::_internal::timeline::FrameObjectType DESTROY_dyn() { return DESTROY; }
		static ::openfl::_internal::timeline::FrameObjectType UPDATE;
		static inline ::openfl::_internal::timeline::FrameObjectType UPDATE_dyn() { return UPDATE; }
};

} // end namespace openfl
} // end namespace _internal
} // end namespace timeline

#endif /* INCLUDED_openfl__internal_timeline_FrameObjectType */ 
