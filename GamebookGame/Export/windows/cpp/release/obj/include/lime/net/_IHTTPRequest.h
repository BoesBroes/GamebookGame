#ifndef INCLUDED_lime_net__IHTTPRequest
#define INCLUDED_lime_net__IHTTPRequest

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS1(haxe,IMap)
HX_DECLARE_CLASS2(haxe,ds,StringMap)
HX_DECLARE_CLASS2(haxe,io,Bytes)
HX_DECLARE_CLASS2(lime,net,HTTPRequestHeader)
HX_DECLARE_CLASS2(lime,net,_IHTTPRequest)
namespace lime{
namespace net{


class HXCPP_CLASS_ATTRIBUTES  _IHTTPRequest_obj : public hx::Interface{
	public:
		typedef hx::Interface super;
		typedef _IHTTPRequest_obj OBJ_;
		HX_DO_INTERFACE_RTTI;
		virtual Void cancel( )=0;
virtual Dynamic cancel_dyn()=0;
};



template<typename IMPL>
class _IHTTPRequest_delegate_ : public _IHTTPRequest_obj
{
	protected:
		IMPL *mDelegate;
	public:
		_IHTTPRequest_delegate_(IMPL *inDelegate) : mDelegate(inDelegate) {}
		hx::Object *__GetRealObject() { return mDelegate; }
		void __Visit(HX_VISIT_PARAMS) { HX_VISIT_OBJECT(mDelegate); }
		Void cancel( ) { return mDelegate->cancel();}
		Dynamic cancel_dyn() { return mDelegate->cancel_dyn();}
};

} // end namespace lime
} // end namespace net

#endif /* INCLUDED_lime_net__IHTTPRequest */ 
