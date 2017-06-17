#ifndef INCLUDED_lime_graphics_opengl_ext_EXT_robustness
#define INCLUDED_lime_graphics_opengl_ext_EXT_robustness

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS4(lime,graphics,opengl,ext,EXT_robustness)
namespace lime{
namespace graphics{
namespace opengl{
namespace ext{


class HXCPP_CLASS_ATTRIBUTES  EXT_robustness_obj : public hx::Object{
	public:
		typedef hx::Object super;
		typedef EXT_robustness_obj OBJ_;
		EXT_robustness_obj();
		Void __construct();

	public:
		inline void *operator new( size_t inSize, bool inContainer=false,const char *inName="lime.graphics.opengl.ext.EXT_robustness")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		static hx::ObjectPtr< EXT_robustness_obj > __new();
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~EXT_robustness_obj();

		HX_DO_RTTI_ALL;
		Dynamic __Field(const ::String &inString, hx::PropertyAccess inCallProp);
		Dynamic __SetField(const ::String &inString,const Dynamic &inValue, hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		::String __ToString() const { return HX_HCSTRING("EXT_robustness","\xc6","\x8a","\x39","\xe5"); }

		int GUILTY_CONTEXT_RESET_EXT;
		int INNOCENT_CONTEXT_RESET_EXT;
		int UNKNOWN_CONTEXT_RESET_EXT;
		int CONTEXT_ROBUST_ACCESS_EXT;
		int RESET_NOTIFICATION_STRATEGY_EXT;
		int LOSE_CONTEXT_ON_RESET_EXT;
		int NO_RESET_NOTIFICATION_EXT;
};

} // end namespace lime
} // end namespace graphics
} // end namespace opengl
} // end namespace ext

#endif /* INCLUDED_lime_graphics_opengl_ext_EXT_robustness */ 
