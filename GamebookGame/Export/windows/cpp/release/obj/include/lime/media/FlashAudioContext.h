#ifndef INCLUDED_lime_media_FlashAudioContext
#define INCLUDED_lime_media_FlashAudioContext

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS2(lime,media,AudioBuffer)
HX_DECLARE_CLASS2(lime,media,FlashAudioContext)
namespace lime{
namespace media{


class HXCPP_CLASS_ATTRIBUTES  FlashAudioContext_obj : public hx::Object{
	public:
		typedef hx::Object super;
		typedef FlashAudioContext_obj OBJ_;
		FlashAudioContext_obj();
		Void __construct();

	public:
		inline void *operator new( size_t inSize, bool inContainer=false,const char *inName="lime.media.FlashAudioContext")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		static hx::ObjectPtr< FlashAudioContext_obj > __new();
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~FlashAudioContext_obj();

		HX_DO_RTTI_ALL;
		Dynamic __Field(const ::String &inString, hx::PropertyAccess inCallProp);
		static void __register();
		::String __ToString() const { return HX_HCSTRING("FlashAudioContext","\x69","\xb5","\x68","\x01"); }

		virtual ::lime::media::AudioBuffer createBuffer( Dynamic stream,Dynamic context);
		Dynamic createBuffer_dyn();

		virtual int getBytesLoaded( ::lime::media::AudioBuffer buffer);
		Dynamic getBytesLoaded_dyn();

		virtual int getBytesTotal( ::lime::media::AudioBuffer buffer);
		Dynamic getBytesTotal_dyn();

		virtual Dynamic getID3( ::lime::media::AudioBuffer buffer);
		Dynamic getID3_dyn();

		virtual bool getIsBuffering( ::lime::media::AudioBuffer buffer);
		Dynamic getIsBuffering_dyn();

		virtual bool getIsURLInaccessible( ::lime::media::AudioBuffer buffer);
		Dynamic getIsURLInaccessible_dyn();

		virtual Float getLength( ::lime::media::AudioBuffer buffer);
		Dynamic getLength_dyn();

		virtual ::String getURL( ::lime::media::AudioBuffer buffer);
		Dynamic getURL_dyn();

		virtual Void close( ::lime::media::AudioBuffer buffer);
		Dynamic close_dyn();

		virtual Float extract( ::lime::media::AudioBuffer buffer,Dynamic target,Float length,hx::Null< Float >  startPosition);
		Dynamic extract_dyn();

		virtual Void load( ::lime::media::AudioBuffer buffer,Dynamic stream,Dynamic context);
		Dynamic load_dyn();

		virtual Void loadCompressedDataFromByteArray( ::lime::media::AudioBuffer buffer,Dynamic bytes,int bytesLength);
		Dynamic loadCompressedDataFromByteArray_dyn();

		virtual Void loadPCMFromByteArray( ::lime::media::AudioBuffer buffer,Dynamic bytes,int samples,::String format,hx::Null< bool >  stereo,hx::Null< Float >  sampleRate);
		Dynamic loadPCMFromByteArray_dyn();

		virtual Dynamic play( ::lime::media::AudioBuffer buffer,hx::Null< Float >  startTime,hx::Null< int >  loops,Dynamic sndTransform);
		Dynamic play_dyn();

};

} // end namespace lime
} // end namespace media

#endif /* INCLUDED_lime_media_FlashAudioContext */ 