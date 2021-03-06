#ifndef INCLUDED_lime_app__Event_Int_Float_Void
#define INCLUDED_lime_app__Event_Int_Float_Void

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS2(lime,app,_Event_Int_Float_Void)
namespace lime{
namespace app{


class HXCPP_CLASS_ATTRIBUTES  _Event_Int_Float_Void_obj : public hx::Object{
	public:
		typedef hx::Object super;
		typedef _Event_Int_Float_Void_obj OBJ_;
		_Event_Int_Float_Void_obj();
		Void __construct();

	public:
		inline void *operator new( size_t inSize, bool inContainer=true,const char *inName="lime.app._Event_Int_Float_Void")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		static hx::ObjectPtr< _Event_Int_Float_Void_obj > __new();
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~_Event_Int_Float_Void_obj();

		HX_DO_RTTI_ALL;
		Dynamic __Field(const ::String &inString, hx::PropertyAccess inCallProp);
		Dynamic __SetField(const ::String &inString,const Dynamic &inValue, hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		::String __ToString() const { return HX_HCSTRING("_Event_Int_Float_Void","\xcb","\xc4","\xeb","\xf4"); }

		bool canceled;
		Array< bool > __repeat;
		Array< int > __priorities;
		virtual Void add( Dynamic listener,hx::Null< bool >  once,hx::Null< int >  priority);
		Dynamic add_dyn();

		virtual Void cancel( );
		Dynamic cancel_dyn();

		virtual bool has( Dynamic listener);
		Dynamic has_dyn();

		virtual Void remove( Dynamic listener);
		Dynamic remove_dyn();

		cpp::ArrayBase __listeners;
		virtual Void dispatch( int a,Float a1);
		Dynamic dispatch_dyn();

};

} // end namespace lime
} // end namespace app

#endif /* INCLUDED_lime_app__Event_Int_Float_Void */ 
