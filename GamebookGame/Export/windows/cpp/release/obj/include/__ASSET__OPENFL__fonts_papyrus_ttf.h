#ifndef INCLUDED___ASSET__OPENFL__fonts_papyrus_ttf
#define INCLUDED___ASSET__OPENFL__fonts_papyrus_ttf

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#ifndef INCLUDED_openfl_text_Font
#include <openfl/text/Font.h>
#endif
HX_DECLARE_CLASS0(__ASSET__OPENFL__fonts_papyrus_ttf)
HX_DECLARE_CLASS2(lime,text,Font)
HX_DECLARE_CLASS2(openfl,text,Font)


class HXCPP_CLASS_ATTRIBUTES  __ASSET__OPENFL__fonts_papyrus_ttf_obj : public ::openfl::text::Font_obj{
	public:
		typedef ::openfl::text::Font_obj super;
		typedef __ASSET__OPENFL__fonts_papyrus_ttf_obj OBJ_;
		__ASSET__OPENFL__fonts_papyrus_ttf_obj();
		Void __construct();

	public:
		inline void *operator new( size_t inSize, bool inContainer=true,const char *inName="__ASSET__OPENFL__fonts_papyrus_ttf")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		static hx::ObjectPtr< __ASSET__OPENFL__fonts_papyrus_ttf_obj > __new();
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~__ASSET__OPENFL__fonts_papyrus_ttf_obj();

		HX_DO_RTTI_ALL;
		static void __register();
		::String __ToString() const { return HX_HCSTRING("__ASSET__OPENFL__fonts_papyrus_ttf","\x82","\x13","\xf1","\xd4"); }

};


#endif /* INCLUDED___ASSET__OPENFL__fonts_papyrus_ttf */ 
