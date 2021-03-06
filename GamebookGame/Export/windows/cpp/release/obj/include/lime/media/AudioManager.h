#ifndef INCLUDED_lime_media_AudioManager
#define INCLUDED_lime_media_AudioManager

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS2(lime,media,AudioContext)
HX_DECLARE_CLASS2(lime,media,AudioManager)
namespace lime{
namespace media{


class HXCPP_CLASS_ATTRIBUTES  AudioManager_obj : public hx::Object{
	public:
		typedef hx::Object super;
		typedef AudioManager_obj OBJ_;
		AudioManager_obj();
		Void __construct();

	public:
		inline void *operator new( size_t inSize, bool inContainer=false,const char *inName="lime.media.AudioManager")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		static hx::ObjectPtr< AudioManager_obj > __new();
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~AudioManager_obj();

		HX_DO_RTTI_ALL;
		static bool __GetStatic(const ::String &inString, Dynamic &outValue, hx::PropertyAccess inCallProp);
		static bool __SetStatic(const ::String &inString, Dynamic &ioValue, hx::PropertyAccess inCallProp);
		static void __register();
		::String __ToString() const { return HX_HCSTRING("AudioManager","\x57","\xf4","\x4e","\xe7"); }

		static ::lime::media::AudioContext context;
		static Void init( ::lime::media::AudioContext context);
		static Dynamic init_dyn();

		static Void resume( );
		static Dynamic resume_dyn();

		static Void shutdown( );
		static Dynamic shutdown_dyn();

		static Void suspend( );
		static Dynamic suspend_dyn();

};

} // end namespace lime
} // end namespace media

#endif /* INCLUDED_lime_media_AudioManager */ 
