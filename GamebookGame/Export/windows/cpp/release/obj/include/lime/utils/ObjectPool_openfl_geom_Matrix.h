#ifndef INCLUDED_lime_utils_ObjectPool_openfl_geom_Matrix
#define INCLUDED_lime_utils_ObjectPool_openfl_geom_Matrix

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS0(List)
HX_DECLARE_CLASS2(lime,utils,ObjectPool_openfl_geom_Matrix)
HX_DECLARE_CLASS2(openfl,geom,Matrix)
namespace lime{
namespace utils{


class HXCPP_CLASS_ATTRIBUTES  ObjectPool_openfl_geom_Matrix_obj : public hx::Object{
	public:
		typedef hx::Object super;
		typedef ObjectPool_openfl_geom_Matrix_obj OBJ_;
		ObjectPool_openfl_geom_Matrix_obj();
		Void __construct(Dynamic create,Dynamic clean,Dynamic size);

	public:
		inline void *operator new( size_t inSize, bool inContainer=true,const char *inName="lime.utils.ObjectPool_openfl_geom_Matrix")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		static hx::ObjectPtr< ObjectPool_openfl_geom_Matrix_obj > __new(Dynamic create,Dynamic clean,Dynamic size);
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~ObjectPool_openfl_geom_Matrix_obj();

		HX_DO_RTTI_ALL;
		Dynamic __Field(const ::String &inString, hx::PropertyAccess inCallProp);
		Dynamic __SetField(const ::String &inString,const Dynamic &inValue, hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		::String __ToString() const { return HX_HCSTRING("ObjectPool_openfl_geom_Matrix","\xf9","\x63","\x2a","\x98"); }

		::List __activeObjects;
		::List __inactiveObjects;
		Dynamic __size;
		virtual Void add( ::openfl::geom::Matrix object);
		Dynamic add_dyn();

		Dynamic clean;
		inline Dynamic &clean_dyn() {return clean; }

		virtual Void clear( );
		Dynamic clear_dyn();

		Dynamic create;
		inline Dynamic &create_dyn() {return create; }

		virtual ::openfl::geom::Matrix get( );
		Dynamic get_dyn();

		virtual Void release( ::openfl::geom::Matrix object);
		Dynamic release_dyn();

		virtual int get_activeObjects( );
		Dynamic get_activeObjects_dyn();

		virtual int get_inactiveObjects( );
		Dynamic get_inactiveObjects_dyn();

		virtual Dynamic get_size( );
		Dynamic get_size_dyn();

		virtual Dynamic set_size( Dynamic value);
		Dynamic set_size_dyn();

};

} // end namespace lime
} // end namespace utils

#endif /* INCLUDED_lime_utils_ObjectPool_openfl_geom_Matrix */ 
