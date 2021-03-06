#ifndef INCLUDED_openfl_display_IGraphicsPath
#define INCLUDED_openfl_display_IGraphicsPath

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS2(openfl,display,IGraphicsPath)
namespace openfl{
namespace display{


class HXCPP_CLASS_ATTRIBUTES  IGraphicsPath_obj : public hx::Interface{
	public:
		typedef hx::Interface super;
		typedef IGraphicsPath_obj OBJ_;
		HX_DO_INTERFACE_RTTI;
};



template<typename IMPL>
class IGraphicsPath_delegate_ : public IGraphicsPath_obj
{
	protected:
		IMPL *mDelegate;
	public:
		IGraphicsPath_delegate_(IMPL *inDelegate) : mDelegate(inDelegate) {}
		hx::Object *__GetRealObject() { return mDelegate; }
		void __Visit(HX_VISIT_PARAMS) { HX_VISIT_OBJECT(mDelegate); }
};

} // end namespace openfl
} // end namespace display

#endif /* INCLUDED_openfl_display_IGraphicsPath */ 
