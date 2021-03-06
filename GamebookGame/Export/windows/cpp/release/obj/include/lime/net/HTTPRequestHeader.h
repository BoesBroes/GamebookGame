#ifndef INCLUDED_lime_net_HTTPRequestHeader
#define INCLUDED_lime_net_HTTPRequestHeader

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS2(lime,net,HTTPRequestHeader)
namespace lime{
namespace net{


class HXCPP_CLASS_ATTRIBUTES  HTTPRequestHeader_obj : public hx::Object{
	public:
		typedef hx::Object super;
		typedef HTTPRequestHeader_obj OBJ_;
		HTTPRequestHeader_obj();
		Void __construct(::String name,::String __o_value);

	public:
		inline void *operator new( size_t inSize, bool inContainer=true,const char *inName="lime.net.HTTPRequestHeader")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		static hx::ObjectPtr< HTTPRequestHeader_obj > __new(::String name,::String __o_value);
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~HTTPRequestHeader_obj();

		HX_DO_RTTI_ALL;
		Dynamic __Field(const ::String &inString, hx::PropertyAccess inCallProp);
		Dynamic __SetField(const ::String &inString,const Dynamic &inValue, hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		::String __ToString() const { return HX_HCSTRING("HTTPRequestHeader","\x94","\x99","\xb5","\xe9"); }

		::String name;
		::String value;
};

} // end namespace lime
} // end namespace net

#endif /* INCLUDED_lime_net_HTTPRequestHeader */ 
