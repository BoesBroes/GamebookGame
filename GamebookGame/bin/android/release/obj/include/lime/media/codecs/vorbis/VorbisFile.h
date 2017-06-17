#ifndef INCLUDED_lime_media_codecs_vorbis_VorbisFile
#define INCLUDED_lime_media_codecs_vorbis_VorbisFile

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS2(haxe,io,Bytes)
HX_DECLARE_CLASS4(lime,media,codecs,vorbis,VorbisComment)
HX_DECLARE_CLASS4(lime,media,codecs,vorbis,VorbisFile)
HX_DECLARE_CLASS4(lime,media,codecs,vorbis,VorbisInfo)
namespace lime{
namespace media{
namespace codecs{
namespace vorbis{


class HXCPP_CLASS_ATTRIBUTES  VorbisFile_obj : public hx::Object{
	public:
		typedef hx::Object super;
		typedef VorbisFile_obj OBJ_;
		VorbisFile_obj();
		Void __construct(Dynamic handle);

	public:
		inline void *operator new( size_t inSize, bool inContainer=true,const char *inName="lime.media.codecs.vorbis.VorbisFile")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		static hx::ObjectPtr< VorbisFile_obj > __new(Dynamic handle);
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~VorbisFile_obj();

		HX_DO_RTTI_ALL;
		Dynamic __Field(const ::String &inString, hx::PropertyAccess inCallProp);
		static bool __GetStatic(const ::String &inString, Dynamic &outValue, hx::PropertyAccess inCallProp);
		Dynamic __SetField(const ::String &inString,const Dynamic &inValue, hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		::String __ToString() const { return HX_HCSTRING("VorbisFile","\x8f","\xa7","\x81","\xd4"); }

		static ::lime::media::codecs::vorbis::VorbisFile fromBytes( ::haxe::io::Bytes bytes);
		static Dynamic fromBytes_dyn();

		static ::lime::media::codecs::vorbis::VorbisFile fromFile( ::String path);
		static Dynamic fromFile_dyn();

		int bitstream;
		Dynamic handle;
		virtual int bitrate( hx::Null< int >  bitstream);
		Dynamic bitrate_dyn();

		virtual int bitrateInstant( );
		Dynamic bitrateInstant_dyn();

		virtual Void clear( );
		Dynamic clear_dyn();

		virtual ::lime::media::codecs::vorbis::VorbisComment comment( hx::Null< int >  bitstream);
		Dynamic comment_dyn();

		virtual int crosslap( ::lime::media::codecs::vorbis::VorbisFile other);
		Dynamic crosslap_dyn();

		virtual ::lime::media::codecs::vorbis::VorbisInfo info( hx::Null< int >  bitstream);
		Dynamic info_dyn();

		virtual int pcmSeek( cpp::Int64Struct pos);
		Dynamic pcmSeek_dyn();

		virtual int pcmSeekLap( cpp::Int64Struct pos);
		Dynamic pcmSeekLap_dyn();

		virtual int pcmSeekPage( cpp::Int64Struct pos);
		Dynamic pcmSeekPage_dyn();

		virtual int pcmSeekPageLap( cpp::Int64Struct pos);
		Dynamic pcmSeekPageLap_dyn();

		virtual cpp::Int64Struct pcmTell( );
		Dynamic pcmTell_dyn();

		virtual cpp::Int64Struct pcmTotal( hx::Null< int >  bitstream);
		Dynamic pcmTotal_dyn();

		virtual int rawSeek( cpp::Int64Struct pos);
		Dynamic rawSeek_dyn();

		virtual int rawSeekLap( cpp::Int64Struct pos);
		Dynamic rawSeekLap_dyn();

		virtual cpp::Int64Struct rawTell( );
		Dynamic rawTell_dyn();

		virtual cpp::Int64Struct rawTotal( hx::Null< int >  bitstream);
		Dynamic rawTotal_dyn();

		virtual int read( ::haxe::io::Bytes buffer,int position,hx::Null< int >  length,hx::Null< bool >  bigEndianPacking,hx::Null< int >  wordSize,hx::Null< bool >  _signed);
		Dynamic read_dyn();

		virtual int readFloat( ::haxe::io::Bytes pcmChannels,int samples);
		Dynamic readFloat_dyn();

		virtual bool seekable( );
		Dynamic seekable_dyn();

		virtual int serialNumber( hx::Null< int >  bitstream);
		Dynamic serialNumber_dyn();

		virtual int streams( );
		Dynamic streams_dyn();

		virtual int timeSeek( Float s);
		Dynamic timeSeek_dyn();

		virtual int timeSeekLap( Float s);
		Dynamic timeSeekLap_dyn();

		virtual int timeSeekPage( Float s);
		Dynamic timeSeekPage_dyn();

		virtual int timeSeekPageLap( Float s);
		Dynamic timeSeekPageLap_dyn();

		virtual Float timeTell( );
		Dynamic timeTell_dyn();

		virtual Float timeTotal( hx::Null< int >  bitstream);
		Dynamic timeTotal_dyn();

};

} // end namespace lime
} // end namespace media
} // end namespace codecs
} // end namespace vorbis

#endif /* INCLUDED_lime_media_codecs_vorbis_VorbisFile */ 
