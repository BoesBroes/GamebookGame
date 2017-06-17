#ifndef INCLUDED_lime_graphics_opengl_ext_NV_fence
#define INCLUDED_lime_graphics_opengl_ext_NV_fence

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS4(lime,graphics,opengl,ext,NV_fence)
namespace lime{
namespace graphics{
namespace opengl{
namespace ext{


class HXCPP_CLASS_ATTRIBUTES  NV_fence_obj : public hx::Object{
	public:
		typedef hx::Object super;
		typedef NV_fence_obj OBJ_;
		NV_fence_obj();
		Void __construct();

	public:
		inline void *operator new( size_t inSize, bool inContainer=false,const char *inName="lime.graphics.opengl.ext.NV_fence")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		static hx::ObjectPtr< NV_fence_obj > __new();
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~NV_fence_obj();

		HX_DO_RTTI_ALL;
		Dynamic __Field(const ::String &inString, hx::PropertyAccess inCallProp);
		Dynamic __SetField(const ::String &inString,const Dynamic &inValue, hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		::String __ToString() const { return HX_HCSTRING("NV_fence","\x3a","\x78","\x71","\x5f"); }

		int ALL_COMPLETED_NV;
		int FENCE_STATUS_NV;
		int FENCE_CONDITION_NV;
};

} // end namespace lime
} // end namespace graphics
} // end namespace opengl
} // end namespace ext

#endif /* INCLUDED_lime_graphics_opengl_ext_NV_fence */ 
