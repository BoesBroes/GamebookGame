#ifndef INCLUDED_Database
#define INCLUDED_Database

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS0(Database)
HX_DECLARE_CLASS2(sys,db,Connection)
HX_DECLARE_CLASS2(sys,db,ResultSet)


class HXCPP_CLASS_ATTRIBUTES  Database_obj : public hx::Object{
	public:
		typedef hx::Object super;
		typedef Database_obj OBJ_;
		Database_obj();
		Void __construct();

	public:
		inline void *operator new( size_t inSize, bool inContainer=false,const char *inName="Database")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		static hx::ObjectPtr< Database_obj > __new();
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~Database_obj();

		HX_DO_RTTI_ALL;
		static bool __GetStatic(const ::String &inString, Dynamic &outValue, hx::PropertyAccess inCallProp);
		static bool __SetStatic(const ::String &inString, Dynamic &ioValue, hx::PropertyAccess inCallProp);
		static void __register();
		::String __ToString() const { return HX_HCSTRING("Database","\x5b","\x57","\x5d","\x6f"); }

		static void __boot();
		static ::sys::db::Connection dbhighscores;
		static ::sys::db::Connection dbcredit;
		static ::sys::db::Connection dbQ1;
		static Dynamic cnx;
		static ::sys::db::Connection getInstance( );
		static Dynamic getInstance_dyn();

		static ::sys::db::ResultSet getHighscores( );
		static Dynamic getHighscores_dyn();

		static ::sys::db::Connection getInstanceTwo( );
		static Dynamic getInstanceTwo_dyn();

		static ::sys::db::ResultSet getCredits( );
		static Dynamic getCredits_dyn();

		static ::sys::db::Connection getIntancethree( );
		static Dynamic getIntancethree_dyn();

		static ::sys::db::ResultSet getQ1( );
		static Dynamic getQ1_dyn();

		static ::sys::db::ResultSet getA1( );
		static Dynamic getA1_dyn();

		static ::sys::db::ResultSet getA2( );
		static Dynamic getA2_dyn();

		static ::sys::db::ResultSet getEnd( );
		static Dynamic getEnd_dyn();

		static ::sys::db::ResultSet getEnd2( );
		static Dynamic getEnd2_dyn();

		static ::sys::db::ResultSet getEnd3( );
		static Dynamic getEnd3_dyn();

		static ::sys::db::ResultSet getQ2( );
		static Dynamic getQ2_dyn();

		static ::sys::db::ResultSet getA3( );
		static Dynamic getA3_dyn();

		static ::sys::db::ResultSet getA4( );
		static Dynamic getA4_dyn();

		static ::sys::db::ResultSet getEnd4( );
		static Dynamic getEnd4_dyn();

		static ::sys::db::ResultSet getQ3( );
		static Dynamic getQ3_dyn();

		static ::sys::db::ResultSet getA5( );
		static Dynamic getA5_dyn();

		static ::sys::db::ResultSet getA6( );
		static Dynamic getA6_dyn();

		static ::sys::db::ResultSet getEnd5( );
		static Dynamic getEnd5_dyn();

		static ::sys::db::ResultSet getVictory( );
		static Dynamic getVictory_dyn();

		static ::sys::db::ResultSet getLate( );
		static Dynamic getLate_dyn();

};


#endif /* INCLUDED_Database */ 
