#ifndef INCLUDED___ASSET__fonts_papyrus_ttf
#define INCLUDED___ASSET__fonts_papyrus_ttf

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#ifndef INCLUDED_lime_text_Font
#include <lime/text/Font.h>
#endif
HX_DECLARE_CLASS0(__ASSET__fonts_papyrus_ttf)
HX_DECLARE_CLASS2(lime,text,Font)


class HXCPP_CLASS_ATTRIBUTES  __ASSET__fonts_papyrus_ttf_obj : public ::lime::text::Font_obj{
	public:
		typedef ::lime::text::Font_obj super;
		typedef __ASSET__fonts_papyrus_ttf_obj OBJ_;
		__ASSET__fonts_papyrus_ttf_obj();
		Void __construct();

	public:
		inline void *operator new( size_t inSize, bool inContainer=true,const char *inName="__ASSET__fonts_papyrus_ttf")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		static hx::ObjectPtr< __ASSET__fonts_papyrus_ttf_obj > __new();
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~__ASSET__fonts_papyrus_ttf_obj();

		HX_DO_RTTI_ALL;
		static void __register();
		::String __ToString() const { return HX_HCSTRING("__ASSET__fonts_papyrus_ttf","\x32","\x50","\x36","\x6d"); }

};


#endif /* INCLUDED___ASSET__fonts_papyrus_ttf */ 
