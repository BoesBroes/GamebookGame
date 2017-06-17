#ifndef INCLUDED_lime_graphics_opengl_ext_APPLE_sync
#define INCLUDED_lime_graphics_opengl_ext_APPLE_sync

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS4(lime,graphics,opengl,ext,APPLE_sync)
namespace lime{
namespace graphics{
namespace opengl{
namespace ext{


class HXCPP_CLASS_ATTRIBUTES  APPLE_sync_obj : public hx::Object{
	public:
		typedef hx::Object super;
		typedef APPLE_sync_obj OBJ_;
		APPLE_sync_obj();
		Void __construct();

	public:
		inline void *operator new( size_t inSize, bool inContainer=false,const char *inName="lime.graphics.opengl.ext.APPLE_sync")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		static hx::ObjectPtr< APPLE_sync_obj > __new();
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~APPLE_sync_obj();

		HX_DO_RTTI_ALL;
		Dynamic __Field(const ::String &inString, hx::PropertyAccess inCallProp);
		Dynamic __SetField(const ::String &inString,const Dynamic &inValue, hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		::String __ToString() const { return HX_HCSTRING("APPLE_sync","\xc0","\xe6","\x8c","\x8c"); }

		int SYNC_OBJECT_APPLE;
		int MAX_SERVER_WAIT_TIMEOUT_APPLE;
		int OBJECT_TYPE_APPLE;
		int SYNC_CONDITION_APPLE;
		int SYNC_STATUS_APPLE;
		int SYNC_FLAGS_APPLE;
		int SYNC_FENCE_APPLE;
		int SYNC_GPU_COMMANDS_COMPLETE_APPLE;
		int UNSIGNALED_APPLE;
		int SIGNALED_APPLE;
		int ALREADY_SIGNALED_APPLE;
		int TIMEOUT_EXPIRED_APPLE;
		int CONDITION_SATISFIED_APPLE;
		int WAIT_FAILED_APPLE;
		int SYNC_FLUSH_COMMANDS_BIT_APPLE;
		int TIMEOUT_IGNORED_APPLE;
};

} // end namespace lime
} // end namespace graphics
} // end namespace opengl
} // end namespace ext

#endif /* INCLUDED_lime_graphics_opengl_ext_APPLE_sync */ 
