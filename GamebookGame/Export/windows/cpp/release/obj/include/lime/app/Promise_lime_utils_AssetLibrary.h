#ifndef INCLUDED_lime_app_Promise_lime_utils_AssetLibrary
#define INCLUDED_lime_app_Promise_lime_utils_AssetLibrary

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS2(lime,app,Future)
HX_DECLARE_CLASS2(lime,app,Promise_lime_utils_AssetLibrary)
HX_DECLARE_CLASS2(lime,utils,AssetLibrary)
namespace lime{
namespace app{


class HXCPP_CLASS_ATTRIBUTES  Promise_lime_utils_AssetLibrary_obj : public hx::Object{
	public:
		typedef hx::Object super;
		typedef Promise_lime_utils_AssetLibrary_obj OBJ_;
		Promise_lime_utils_AssetLibrary_obj();
		Void __construct();

	public:
		inline void *operator new( size_t inSize, bool inContainer=true,const char *inName="lime.app.Promise_lime_utils_AssetLibrary")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		static hx::ObjectPtr< Promise_lime_utils_AssetLibrary_obj > __new();
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~Promise_lime_utils_AssetLibrary_obj();

		HX_DO_RTTI_ALL;
		Dynamic __Field(const ::String &inString, hx::PropertyAccess inCallProp);
		Dynamic __SetField(const ::String &inString,const Dynamic &inValue, hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		::String __ToString() const { return HX_HCSTRING("Promise_lime_utils_AssetLibrary","\x3f","\xb5","\x04","\x9e"); }

		::lime::app::Future future;
		bool isComplete;
		bool isError;
		virtual ::lime::app::Promise_lime_utils_AssetLibrary complete( ::lime::utils::AssetLibrary data);
		Dynamic complete_dyn();

		virtual ::lime::app::Promise_lime_utils_AssetLibrary completeWith( ::lime::app::Future future);
		Dynamic completeWith_dyn();

		virtual ::lime::app::Promise_lime_utils_AssetLibrary error( Dynamic msg);
		Dynamic error_dyn();

		virtual ::lime::app::Promise_lime_utils_AssetLibrary progress( int progress,int total);
		Dynamic progress_dyn();

		virtual bool get_isComplete( );
		Dynamic get_isComplete_dyn();

		virtual bool get_isError( );
		Dynamic get_isError_dyn();

};

} // end namespace lime
} // end namespace app

#endif /* INCLUDED_lime_app_Promise_lime_utils_AssetLibrary */ 
