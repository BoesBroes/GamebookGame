#ifndef INCLUDED_lime_media_openal_ALC
#define INCLUDED_lime_media_openal_ALC

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS3(lime,media,openal,ALC)
namespace lime{
namespace media{
namespace openal{


class HXCPP_CLASS_ATTRIBUTES  ALC_obj : public hx::Object{
	public:
		typedef hx::Object super;
		typedef ALC_obj OBJ_;
		ALC_obj();
		Void __construct();

	public:
		inline void *operator new( size_t inSize, bool inContainer=false,const char *inName="lime.media.openal.ALC")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		static hx::ObjectPtr< ALC_obj > __new();
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~ALC_obj();

		HX_DO_RTTI_ALL;
		static bool __GetStatic(const ::String &inString, Dynamic &outValue, hx::PropertyAccess inCallProp);
		static void __register();
		::String __ToString() const { return HX_HCSTRING("ALC","\xf8","\x94","\x31","\x00"); }

		static void __boot();
		static int FALSE;
		static int TRUE;
		static int FREQUENCY;
		static int REFRESH;
		static int SYNC;
		static int MONO_SOURCES;
		static int STEREO_SOURCES;
		static int NO_ERROR;
		static int INVALID_DEVICE;
		static int INVALID_CONTEXT;
		static int INVALID_ENUM;
		static int INVALID_VALUE;
		static int OUT_OF_MEMORY;
		static int ATTRIBUTES_SIZE;
		static int ALL_ATTRIBUTES;
		static int DEFAULT_DEVICE_SPECIFIER;
		static int DEVICE_SPECIFIER;
		static int EXTENSIONS;
		static int ENUMERATE_ALL_EXT;
		static int DEFAULT_ALL_DEVICES_SPECIFIER;
		static int ALL_DEVICES_SPECIFIER;
		static bool closeDevice( Dynamic device);
		static Dynamic closeDevice_dyn();

		static Dynamic createContext( Dynamic device,Array< int > attrlist);
		static Dynamic createContext_dyn();

		static Void destroyContext( Dynamic context);
		static Dynamic destroyContext_dyn();

		static Dynamic getContextsDevice( Dynamic context);
		static Dynamic getContextsDevice_dyn();

		static Dynamic getCurrentContext( );
		static Dynamic getCurrentContext_dyn();

		static int getError( Dynamic device);
		static Dynamic getError_dyn();

		static ::String getErrorString( Dynamic device);
		static Dynamic getErrorString_dyn();

		static Array< int > getIntegerv( Dynamic device,int param,int size);
		static Dynamic getIntegerv_dyn();

		static ::String getString( Dynamic device,int param);
		static Dynamic getString_dyn();

		static bool makeContextCurrent( Dynamic context);
		static Dynamic makeContextCurrent_dyn();

		static Dynamic openDevice( ::String deviceName);
		static Dynamic openDevice_dyn();

		static Void pauseDevice( Dynamic device);
		static Dynamic pauseDevice_dyn();

		static Void processContext( Dynamic context);
		static Dynamic processContext_dyn();

		static Void resumeDevice( Dynamic device);
		static Dynamic resumeDevice_dyn();

		static Void suspendContext( Dynamic context);
		static Dynamic suspendContext_dyn();

};

} // end namespace lime
} // end namespace media
} // end namespace openal

#endif /* INCLUDED_lime_media_openal_ALC */ 
