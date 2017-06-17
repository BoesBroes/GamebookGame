#ifndef INCLUDED_lime_net_curl_CURLEasy
#define INCLUDED_lime_net_curl_CURLEasy

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS3(lime,net,curl,CURLEasy)
namespace lime{
namespace net{
namespace curl{


class HXCPP_CLASS_ATTRIBUTES  CURLEasy_obj : public hx::Object{
	public:
		typedef hx::Object super;
		typedef CURLEasy_obj OBJ_;
		CURLEasy_obj();
		Void __construct();

	public:
		inline void *operator new( size_t inSize, bool inContainer=false,const char *inName="lime.net.curl.CURLEasy")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		static hx::ObjectPtr< CURLEasy_obj > __new();
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~CURLEasy_obj();

		HX_DO_RTTI_ALL;
		static bool __GetStatic(const ::String &inString, Dynamic &outValue, hx::PropertyAccess inCallProp);
		static void __register();
		::String __ToString() const { return HX_HCSTRING("CURLEasy","\x0e","\xb1","\x71","\x80"); }

		static Void cleanup( Float handle);
		static Dynamic cleanup_dyn();

		static Float duphandle( Float handle);
		static Dynamic duphandle_dyn();

		static ::String escape( Float handle,::String url,int length);
		static Dynamic escape_dyn();

		static Dynamic getinfo( Float handle,int info);
		static Dynamic getinfo_dyn();

		static Float init( );
		static Dynamic init_dyn();

		static int pause( Float handle,int bitMask);
		static Dynamic pause_dyn();

		static int perform( Float handle);
		static Dynamic perform_dyn();

		static Void reset( Float handle);
		static Dynamic reset_dyn();

		static int setopt( Float handle,int option,Dynamic parameter);
		static Dynamic setopt_dyn();

		static ::String strerror( int code);
		static Dynamic strerror_dyn();

		static ::String unescape( Float handle,::String url,int inLength,int outLength);
		static Dynamic unescape_dyn();

		static int __writeCallback( Dynamic callback,Dynamic output,int size,int nmemb);
		static Dynamic __writeCallback_dyn();

};

} // end namespace lime
} // end namespace net
} // end namespace curl

#endif /* INCLUDED_lime_net_curl_CURLEasy */ 
