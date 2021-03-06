#ifndef INCLUDED_lime_app_Future
#define INCLUDED_lime_app_Future

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS2(lime,app,Future)
HX_DECLARE_CLASS2(lime,app,_Event_Dynamic_Void)
HX_DECLARE_CLASS2(lime,app,_Event_Int_Int_Void)
HX_DECLARE_CLASS2(lime,app,_Event_ofEvents_T_Void)
namespace lime{
namespace app{


class HXCPP_CLASS_ATTRIBUTES  Future_obj : public hx::Object{
	public:
		typedef hx::Object super;
		typedef Future_obj OBJ_;
		Future_obj();
		Void __construct(Dynamic work,hx::Null< bool >  __o_async);

	public:
		inline void *operator new( size_t inSize, bool inContainer=true,const char *inName="lime.app.Future")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		static hx::ObjectPtr< Future_obj > __new(Dynamic work,hx::Null< bool >  __o_async);
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~Future_obj();

		HX_DO_RTTI_ALL;
		Dynamic __Field(const ::String &inString, hx::PropertyAccess inCallProp);
		static bool __GetStatic(const ::String &inString, Dynamic &outValue, hx::PropertyAccess inCallProp);
		Dynamic __SetField(const ::String &inString,const Dynamic &inValue, hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		::String __ToString() const { return HX_HCSTRING("Future","\x63","\x0c","\xe3","\xa7"); }

		static ::lime::app::Future ofEvents( ::lime::app::_Event_ofEvents_T_Void onComplete,::lime::app::_Event_Dynamic_Void onError,::lime::app::_Event_Int_Int_Void onProgress);
		static Dynamic ofEvents_dyn();

		static ::lime::app::Future withError( Dynamic error);
		static Dynamic withError_dyn();

		static ::lime::app::Future withValue( Dynamic value);
		static Dynamic withValue_dyn();

		Dynamic error;
		bool isComplete;
		bool isError;
		Dynamic value;
		cpp::ArrayBase __completeListeners;
		cpp::ArrayBase __errorListeners;
		cpp::ArrayBase __progressListeners;
		virtual ::lime::app::Future onComplete( Dynamic listener);
		Dynamic onComplete_dyn();

		virtual ::lime::app::Future onError( Dynamic listener);
		Dynamic onError_dyn();

		virtual ::lime::app::Future onProgress( Dynamic listener);
		Dynamic onProgress_dyn();

		virtual ::lime::app::Future ready( hx::Null< int >  waitTime);
		Dynamic ready_dyn();

		virtual Dynamic result( hx::Null< int >  waitTime);
		Dynamic result_dyn();

		virtual ::lime::app::Future then( Dynamic next);
		Dynamic then_dyn();

};

} // end namespace lime
} // end namespace app

#endif /* INCLUDED_lime_app_Future */ 
