#ifndef INCLUDED_openfl__Vector_FloatVector
#define INCLUDED_openfl__Vector_FloatVector

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#ifndef INCLUDED_openfl__Vector_IVector
#include <openfl/_Vector/IVector.h>
#endif
HX_DECLARE_CLASS2(openfl,_Vector,FloatVector)
HX_DECLARE_CLASS2(openfl,_Vector,IVector)
namespace openfl{
namespace _Vector{


class HXCPP_CLASS_ATTRIBUTES  FloatVector_obj : public hx::Object{
	public:
		typedef hx::Object super;
		typedef FloatVector_obj OBJ_;
		FloatVector_obj();
		Void __construct(Dynamic length,Dynamic fixed,Array< Float > array);

	public:
		inline void *operator new( size_t inSize, bool inContainer=true,const char *inName="openfl._Vector.FloatVector")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		static hx::ObjectPtr< FloatVector_obj > __new(Dynamic length,Dynamic fixed,Array< Float > array);
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~FloatVector_obj();

		HX_DO_RTTI_ALL;
		Dynamic __Field(const ::String &inString, hx::PropertyAccess inCallProp);
		Dynamic __SetField(const ::String &inString,const Dynamic &inValue, hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		hx::Object *__ToInterface(const hx::type_info &inType);
		operator ::openfl::_Vector::IVector_obj *();
		::String __ToString() const { return HX_HCSTRING("FloatVector","\x5f","\x9f","\xb1","\x22"); }

		bool fixed;
		Array< Float > __array;
		virtual ::openfl::_Vector::IVector concat( ::openfl::_Vector::IVector a);
		Dynamic concat_dyn();

		virtual ::openfl::_Vector::IVector copy( );
		Dynamic copy_dyn();

		virtual Float get( int index);
		Dynamic get_dyn();

		virtual int indexOf( Float x,Dynamic from);
		Dynamic indexOf_dyn();

		virtual Void insertAt( int index,Float element);
		Dynamic insertAt_dyn();

		virtual Dynamic iterator( );
		Dynamic iterator_dyn();

		virtual ::String join( ::String sep);
		Dynamic join_dyn();

		virtual int lastIndexOf( Float x,Dynamic from);
		Dynamic lastIndexOf_dyn();

		virtual Dynamic pop( );
		Dynamic pop_dyn();

		virtual int push( Float x);
		Dynamic push_dyn();

		virtual ::openfl::_Vector::IVector reverse( );
		Dynamic reverse_dyn();

		virtual Float set( int index,Float value);
		Dynamic set_dyn();

		virtual Dynamic shift( );
		Dynamic shift_dyn();

		virtual ::openfl::_Vector::IVector slice( Dynamic startIndex,Dynamic endIndex);
		Dynamic slice_dyn();

		virtual Void sort( Dynamic f);
		Dynamic sort_dyn();

		virtual ::openfl::_Vector::IVector splice( int pos,int len);
		Dynamic splice_dyn();

		virtual ::String toString( );
		Dynamic toString_dyn();

		virtual Void unshift( Float x);
		Dynamic unshift_dyn();

		virtual int get_length( );
		Dynamic get_length_dyn();

		virtual int set_length( int value);
		Dynamic set_length_dyn();

};

} // end namespace openfl
} // end namespace _Vector

#endif /* INCLUDED_openfl__Vector_FloatVector */ 
