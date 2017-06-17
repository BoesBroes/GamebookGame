#ifndef INCLUDED_lime_graphics_opengl_ext_ANGLE_instanced_arrays
#define INCLUDED_lime_graphics_opengl_ext_ANGLE_instanced_arrays

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS4(lime,graphics,opengl,ext,ANGLE_instanced_arrays)
namespace lime{
namespace graphics{
namespace opengl{
namespace ext{


class HXCPP_CLASS_ATTRIBUTES  ANGLE_instanced_arrays_obj : public hx::Object{
	public:
		typedef hx::Object super;
		typedef ANGLE_instanced_arrays_obj OBJ_;
		ANGLE_instanced_arrays_obj();
		Void __construct();

	public:
		inline void *operator new( size_t inSize, bool inContainer=false,const char *inName="lime.graphics.opengl.ext.ANGLE_instanced_arrays")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		static hx::ObjectPtr< ANGLE_instanced_arrays_obj > __new();
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~ANGLE_instanced_arrays_obj();

		HX_DO_RTTI_ALL;
		Dynamic __Field(const ::String &inString, hx::PropertyAccess inCallProp);
		Dynamic __SetField(const ::String &inString,const Dynamic &inValue, hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		::String __ToString() const { return HX_HCSTRING("ANGLE_instanced_arrays","\x56","\x74","\x86","\x10"); }

		int VERTEX_ATTRIB_ARRAY_DIVISOR_ANGLE;
		virtual Void drawArraysInstancedANGLE( int mode,int first,int count,int primcount);
		Dynamic drawArraysInstancedANGLE_dyn();

		virtual Void drawElementsInstancedANGLE( int mode,int count,int type,int offset,int primcount);
		Dynamic drawElementsInstancedANGLE_dyn();

		virtual Void vertexAttribDivisorANGLE( int index,int divisor);
		Dynamic vertexAttribDivisorANGLE_dyn();

};

} // end namespace lime
} // end namespace graphics
} // end namespace opengl
} // end namespace ext

#endif /* INCLUDED_lime_graphics_opengl_ext_ANGLE_instanced_arrays */ 
