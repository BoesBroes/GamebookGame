#ifndef INCLUDED_lime_media_codecs_vorbis_VorbisInfo
#define INCLUDED_lime_media_codecs_vorbis_VorbisInfo

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS4(lime,media,codecs,vorbis,VorbisInfo)
namespace lime{
namespace media{
namespace codecs{
namespace vorbis{


class HXCPP_CLASS_ATTRIBUTES  VorbisInfo_obj : public hx::Object{
	public:
		typedef hx::Object super;
		typedef VorbisInfo_obj OBJ_;
		VorbisInfo_obj();
		Void __construct();

	public:
		inline void *operator new( size_t inSize, bool inContainer=false,const char *inName="lime.media.codecs.vorbis.VorbisInfo")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		static hx::ObjectPtr< VorbisInfo_obj > __new();
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~VorbisInfo_obj();

		HX_DO_RTTI_ALL;
		Dynamic __Field(const ::String &inString, hx::PropertyAccess inCallProp);
		Dynamic __SetField(const ::String &inString,const Dynamic &inValue, hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		::String __ToString() const { return HX_HCSTRING("VorbisInfo","\x81","\x11","\x81","\xd6"); }

		int bitrateLower;
		int bitrateNominal;
		int bitrateUpper;
		int channels;
		int rate;
		int version;
};

} // end namespace lime
} // end namespace media
} // end namespace codecs
} // end namespace vorbis

#endif /* INCLUDED_lime_media_codecs_vorbis_VorbisInfo */ 
