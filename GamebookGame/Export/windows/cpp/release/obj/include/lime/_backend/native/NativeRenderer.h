#ifndef INCLUDED_lime__backend_native_NativeRenderer
#define INCLUDED_lime__backend_native_NativeRenderer

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS3(lime,_backend,native,NativeRenderer)
HX_DECLARE_CLASS2(lime,graphics,Image)
HX_DECLARE_CLASS2(lime,graphics,Renderer)
HX_DECLARE_CLASS3(lime,graphics,cairo,Cairo)
HX_DECLARE_CLASS2(lime,math,Rectangle)
namespace lime{
namespace _backend{
namespace native{


class HXCPP_CLASS_ATTRIBUTES  NativeRenderer_obj : public hx::Object{
	public:
		typedef hx::Object super;
		typedef NativeRenderer_obj OBJ_;
		NativeRenderer_obj();
		Void __construct(::lime::graphics::Renderer parent);

	public:
		inline void *operator new( size_t inSize, bool inContainer=true,const char *inName="lime._backend.native.NativeRenderer")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		static hx::ObjectPtr< NativeRenderer_obj > __new(::lime::graphics::Renderer parent);
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~NativeRenderer_obj();

		HX_DO_RTTI_ALL;
		Dynamic __Field(const ::String &inString, hx::PropertyAccess inCallProp);
		Dynamic __SetField(const ::String &inString,const Dynamic &inValue, hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		::String __ToString() const { return HX_HCSTRING("NativeRenderer","\x1a","\xce","\xd5","\xcc"); }

		Dynamic handle;
		::lime::graphics::Renderer parent;
		bool useHardware;
		Dynamic cacheLock;
		::lime::graphics::cairo::Cairo cairo;
		Dynamic primarySurface;
		virtual Void create( );
		Dynamic create_dyn();

		virtual Void dispatch( );
		Dynamic dispatch_dyn();

		virtual Void flip( );
		Dynamic flip_dyn();

		virtual ::lime::graphics::Image readPixels( ::lime::math::Rectangle rect);
		Dynamic readPixels_dyn();

		virtual Void render( );
		Dynamic render_dyn();

};

} // end namespace lime
} // end namespace _backend
} // end namespace native

#endif /* INCLUDED_lime__backend_native_NativeRenderer */ 
