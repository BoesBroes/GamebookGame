#ifndef INCLUDED_lime_media_AudioBuffer
#define INCLUDED_lime_media_AudioBuffer

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS2(haxe,io,Bytes)
HX_DECLARE_CLASS2(lime,app,Future)
HX_DECLARE_CLASS2(lime,media,AudioBuffer)
HX_DECLARE_CLASS4(lime,media,codecs,vorbis,VorbisFile)
HX_DECLARE_CLASS2(lime,utils,ArrayBufferView)
namespace lime{
namespace media{


class HXCPP_CLASS_ATTRIBUTES  AudioBuffer_obj : public hx::Object{
	public:
		typedef hx::Object super;
		typedef AudioBuffer_obj OBJ_;
		AudioBuffer_obj();
		Void __construct();

	public:
		inline void *operator new( size_t inSize, bool inContainer=true,const char *inName="lime.media.AudioBuffer")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		static hx::ObjectPtr< AudioBuffer_obj > __new();
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~AudioBuffer_obj();

		HX_DO_RTTI_ALL;
		Dynamic __Field(const ::String &inString, hx::PropertyAccess inCallProp);
		static bool __GetStatic(const ::String &inString, Dynamic &outValue, hx::PropertyAccess inCallProp);
		Dynamic __SetField(const ::String &inString,const Dynamic &inValue, hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		::String __ToString() const { return HX_HCSTRING("AudioBuffer","\x56","\x86","\x77","\x83"); }

		static ::lime::media::AudioBuffer fromBytes( ::haxe::io::Bytes bytes);
		static Dynamic fromBytes_dyn();

		static ::lime::media::AudioBuffer fromFile( ::String path);
		static Dynamic fromFile_dyn();

		static ::lime::media::AudioBuffer fromFiles( Array< ::String > paths);
		static Dynamic fromFiles_dyn();

		static ::lime::media::AudioBuffer fromVorbisFile( ::lime::media::codecs::vorbis::VorbisFile vorbisFile);
		static Dynamic fromVorbisFile_dyn();

		static ::lime::app::Future loadFromFile( ::String path);
		static Dynamic loadFromFile_dyn();

		static ::lime::app::Future loadFromFiles( Array< ::String > paths);
		static Dynamic loadFromFiles_dyn();

		int bitsPerSample;
		int channels;
		::lime::utils::ArrayBufferView data;
		int sampleRate;
		Dynamic __srcAudio;
		Dynamic __srcBuffer;
		Dynamic __srcCustom;
		Dynamic __srcFMODSound;
		Dynamic __srcHowl;
		Dynamic __srcSound;
		::lime::media::codecs::vorbis::VorbisFile __srcVorbisFile;
		virtual Void dispose( );
		Dynamic dispose_dyn();

		virtual Dynamic get_src( );
		Dynamic get_src_dyn();

		virtual Dynamic set_src( Dynamic value);
		Dynamic set_src_dyn();

};

} // end namespace lime
} // end namespace media

#endif /* INCLUDED_lime_media_AudioBuffer */ 
