#ifndef INCLUDED_lime_graphics_opengl_ext_OES_vertex_array_object
#define INCLUDED_lime_graphics_opengl_ext_OES_vertex_array_object

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS4(lime,graphics,opengl,ext,OES_vertex_array_object)
namespace lime{
namespace graphics{
namespace opengl{
namespace ext{


class HXCPP_CLASS_ATTRIBUTES  OES_vertex_array_object_obj : public hx::Object{
	public:
		typedef hx::Object super;
		typedef OES_vertex_array_object_obj OBJ_;
		OES_vertex_array_object_obj();
		Void __construct();

	public:
		inline void *operator new( size_t inSize, bool inContainer=false,const char *inName="lime.graphics.opengl.ext.OES_vertex_array_object")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		static hx::ObjectPtr< OES_vertex_array_object_obj > __new();
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~OES_vertex_array_object_obj();

		HX_DO_RTTI_ALL;
		Dynamic __Field(const ::String &inString, hx::PropertyAccess inCallProp);
		Dynamic __SetField(const ::String &inString,const Dynamic &inValue, hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		::String __ToString() const { return HX_HCSTRING("OES_vertex_array_object","\xde","\xb2","\x44","\x8d"); }

		int VERTEX_ARRAY_BINDING_OES;
		virtual Dynamic createVertexArrayOES( );
		Dynamic createVertexArrayOES_dyn();

		virtual Void deleteVertexArrayOES( Dynamic arrayObject);
		Dynamic deleteVertexArrayOES_dyn();

		virtual bool isVertexArrayOES( Dynamic arrayObject);
		Dynamic isVertexArrayOES_dyn();

		virtual Void bindVertexArrayOES( Dynamic arrayObject);
		Dynamic bindVertexArrayOES_dyn();

};

} // end namespace lime
} // end namespace graphics
} // end namespace opengl
} // end namespace ext

#endif /* INCLUDED_lime_graphics_opengl_ext_OES_vertex_array_object */ 
