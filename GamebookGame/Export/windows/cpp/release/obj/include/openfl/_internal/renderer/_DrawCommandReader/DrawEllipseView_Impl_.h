#ifndef INCLUDED_openfl__internal_renderer__DrawCommandReader_DrawEllipseView_Impl_
#define INCLUDED_openfl__internal_renderer__DrawCommandReader_DrawEllipseView_Impl_

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS3(openfl,_internal,renderer,DrawCommandReader)
HX_DECLARE_CLASS4(openfl,_internal,renderer,_DrawCommandReader,DrawEllipseView_Impl_)
namespace openfl{
namespace _internal{
namespace renderer{
namespace _DrawCommandReader{


class HXCPP_CLASS_ATTRIBUTES  DrawEllipseView_Impl__obj : public hx::Object{
	public:
		typedef hx::Object super;
		typedef DrawEllipseView_Impl__obj OBJ_;
		DrawEllipseView_Impl__obj();
		Void __construct();

	public:
		inline void *operator new( size_t inSize, bool inContainer=false,const char *inName="openfl._internal.renderer._DrawCommandReader.DrawEllipseView_Impl_")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		static hx::ObjectPtr< DrawEllipseView_Impl__obj > __new();
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~DrawEllipseView_Impl__obj();

		HX_DO_RTTI_ALL;
		static bool __GetStatic(const ::String &inString, Dynamic &outValue, hx::PropertyAccess inCallProp);
		static void __register();
		::String __ToString() const { return HX_HCSTRING("DrawEllipseView_Impl_","\x7f","\x0e","\xf1","\x7c"); }

		static ::openfl::_internal::renderer::DrawCommandReader _new( ::openfl::_internal::renderer::DrawCommandReader d);
		static Dynamic _new_dyn();

		static Float get_x( ::openfl::_internal::renderer::DrawCommandReader this1);
		static Dynamic get_x_dyn();

		static Float get_y( ::openfl::_internal::renderer::DrawCommandReader this1);
		static Dynamic get_y_dyn();

		static Float get_width( ::openfl::_internal::renderer::DrawCommandReader this1);
		static Dynamic get_width_dyn();

		static Float get_height( ::openfl::_internal::renderer::DrawCommandReader this1);
		static Dynamic get_height_dyn();

};

} // end namespace openfl
} // end namespace _internal
} // end namespace renderer
} // end namespace _DrawCommandReader

#endif /* INCLUDED_openfl__internal_renderer__DrawCommandReader_DrawEllipseView_Impl_ */ 
