#include <hxcpp.h>

#ifndef INCLUDED_Database
#include <Database.h>
#endif
#ifndef INCLUDED_sys_db_Connection
#include <sys/db/Connection.h>
#endif
#ifndef INCLUDED_sys_db_ResultSet
#include <sys/db/ResultSet.h>
#endif
#ifndef INCLUDED_sys_db_Sqlite
#include <sys/db/Sqlite.h>
#endif

Void Database_obj::__construct()
{
	return null();
}

//Database_obj::~Database_obj() { }

Dynamic Database_obj::__CreateEmpty() { return  new Database_obj; }
hx::ObjectPtr< Database_obj > Database_obj::__new()
{  hx::ObjectPtr< Database_obj > _result_ = new Database_obj();
	_result_->__construct();
	return _result_;}

Dynamic Database_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< Database_obj > _result_ = new Database_obj();
	_result_->__construct();
	return _result_;}

::sys::db::Connection Database_obj::dbhighscores;

::sys::db::Connection Database_obj::dbcredit;

::sys::db::Connection Database_obj::dbQ1;

Dynamic Database_obj::cnx;

::sys::db::Connection Database_obj::getInstance( ){
	HX_STACK_FRAME("Database","getInstance",0x0d2b08b8,"Database.getInstance","Database.hx",22,0x869cb643)
	HX_STACK_LINE(23)
	::sys::db::Connection tmp = ::Database_obj::dbhighscores;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(23)
	bool tmp1 = (tmp == null());		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(23)
	if ((tmp1)){
		HX_STACK_LINE(25)
		::sys::db::Connection tmp2 = ::sys::db::Sqlite_obj::open(HX_HCSTRING("data/highscores.db","\x64","\x73","\xee","\x76"));		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(25)
		::Database_obj::dbhighscores = tmp2;
	}
	HX_STACK_LINE(27)
	::sys::db::Connection tmp2 = ::Database_obj::dbhighscores;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(27)
	return tmp2;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(Database_obj,getInstance,return )

::sys::db::ResultSet Database_obj::getHighscores( ){
	HX_STACK_FRAME("Database","getHighscores",0x592519a6,"Database.getHighscores","Database.hx",32,0x869cb643)
	HX_STACK_LINE(33)
	::sys::db::Connection tmp = ::Database_obj::getInstance();		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(33)
	::sys::db::ResultSet tmp1 = tmp->request(HX_HCSTRING("select * from highscores desc limit 10","\x12","\x05","\x08","\x8e"));		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(33)
	return tmp1;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(Database_obj,getHighscores,return )

::sys::db::Connection Database_obj::getInstanceTwo( ){
	HX_STACK_FRAME("Database","getInstanceTwo",0x03495fb4,"Database.getInstanceTwo","Database.hx",38,0x869cb643)
	HX_STACK_LINE(39)
	::sys::db::Connection tmp = ::Database_obj::dbcredit;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(39)
	bool tmp1 = (tmp == null());		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(39)
	if ((tmp1)){
		HX_STACK_LINE(41)
		::sys::db::Connection tmp2 = ::sys::db::Sqlite_obj::open(HX_HCSTRING("data/credits.db","\x57","\x94","\x3f","\x51"));		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(41)
		::Database_obj::dbcredit = tmp2;
	}
	HX_STACK_LINE(43)
	::sys::db::Connection tmp2 = ::Database_obj::dbcredit;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(43)
	return tmp2;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(Database_obj,getInstanceTwo,return )

::sys::db::ResultSet Database_obj::getCredits( ){
	HX_STACK_FRAME("Database","getCredits",0xbbc6da57,"Database.getCredits","Database.hx",48,0x869cb643)
	HX_STACK_LINE(49)
	::sys::db::Connection tmp = ::Database_obj::getInstanceTwo();		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(49)
	::sys::db::ResultSet tmp1 = tmp->request(HX_HCSTRING("select * from credits","\xbe","\x67","\xc7","\x46"));		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(49)
	return tmp1;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(Database_obj,getCredits,return )

::sys::db::Connection Database_obj::getIntancethree( ){
	HX_STACK_FRAME("Database","getIntancethree",0x905b9903,"Database.getIntancethree","Database.hx",54,0x869cb643)
	HX_STACK_LINE(55)
	::sys::db::Connection tmp = ::Database_obj::dbQ1;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(55)
	bool tmp1 = (tmp == null());		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(55)
	if ((tmp1)){
		HX_STACK_LINE(57)
		::sys::db::Connection tmp2 = ::sys::db::Sqlite_obj::open(HX_HCSTRING("data/Q1.db","\x87","\xf7","\xce","\x45"));		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(57)
		::Database_obj::dbQ1 = tmp2;
	}
	HX_STACK_LINE(59)
	::sys::db::Connection tmp2 = ::Database_obj::dbQ1;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(59)
	return tmp2;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(Database_obj,getIntancethree,return )

::sys::db::ResultSet Database_obj::getQ1( ){
	HX_STACK_FRAME("Database","getQ1",0x5c64ff83,"Database.getQ1","Database.hx",64,0x869cb643)
	HX_STACK_LINE(65)
	::sys::db::Connection tmp = ::Database_obj::getIntancethree();		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(65)
	::sys::db::ResultSet tmp1 = tmp->request(HX_HCSTRING("select * from Q1 where ID = 3","\xe8","\x44","\xdd","\x5a"));		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(65)
	return tmp1;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(Database_obj,getQ1,return )

::sys::db::ResultSet Database_obj::getA1( ){
	HX_STACK_FRAME("Database","getA1",0x5c64f193,"Database.getA1","Database.hx",69,0x869cb643)
	HX_STACK_LINE(70)
	::sys::db::Connection tmp = ::Database_obj::getIntancethree();		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(70)
	::sys::db::ResultSet tmp1 = tmp->request(HX_HCSTRING("select * from Q1 where ID = 1","\xe6","\x44","\xdd","\x5a"));		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(70)
	return tmp1;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(Database_obj,getA1,return )

::sys::db::ResultSet Database_obj::getA2( ){
	HX_STACK_FRAME("Database","getA2",0x5c64f194,"Database.getA2","Database.hx",74,0x869cb643)
	HX_STACK_LINE(75)
	::sys::db::Connection tmp = ::Database_obj::getIntancethree();		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(75)
	::sys::db::ResultSet tmp1 = tmp->request(HX_HCSTRING("select * from Q1 where ID = 2","\xe7","\x44","\xdd","\x5a"));		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(75)
	return tmp1;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(Database_obj,getA2,return )

::sys::db::ResultSet Database_obj::getEnd( ){
	HX_STACK_FRAME("Database","getEnd",0x7bf1ad98,"Database.getEnd","Database.hx",79,0x869cb643)
	HX_STACK_LINE(80)
	::sys::db::Connection tmp = ::Database_obj::getIntancethree();		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(80)
	::sys::db::ResultSet tmp1 = tmp->request(HX_HCSTRING("select * from Q1 where ID = 4","\xe9","\x44","\xdd","\x5a"));		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(80)
	return tmp1;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(Database_obj,getEnd,return )

::sys::db::ResultSet Database_obj::getEnd2( ){
	HX_STACK_FRAME("Database","getEnd2",0xf786379a,"Database.getEnd2","Database.hx",84,0x869cb643)
	HX_STACK_LINE(85)
	::sys::db::Connection tmp = ::Database_obj::getIntancethree();		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(85)
	::sys::db::ResultSet tmp1 = tmp->request(HX_HCSTRING("select * from Q1 where ID = 5","\xea","\x44","\xdd","\x5a"));		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(85)
	return tmp1;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(Database_obj,getEnd2,return )

::sys::db::ResultSet Database_obj::getEnd3( ){
	HX_STACK_FRAME("Database","getEnd3",0xf786379b,"Database.getEnd3","Database.hx",89,0x869cb643)
	HX_STACK_LINE(90)
	::sys::db::Connection tmp = ::Database_obj::getIntancethree();		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(90)
	::sys::db::ResultSet tmp1 = tmp->request(HX_HCSTRING("select * from Q1 where ID = 6","\xeb","\x44","\xdd","\x5a"));		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(90)
	return tmp1;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(Database_obj,getEnd3,return )

::sys::db::ResultSet Database_obj::getQ2( ){
	HX_STACK_FRAME("Database","getQ2",0x5c64ff84,"Database.getQ2","Database.hx",94,0x869cb643)
	HX_STACK_LINE(95)
	::sys::db::Connection tmp = ::Database_obj::getIntancethree();		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(95)
	::sys::db::ResultSet tmp1 = tmp->request(HX_HCSTRING("select * from Q1 where ID = 7","\xec","\x44","\xdd","\x5a"));		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(95)
	return tmp1;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(Database_obj,getQ2,return )

::sys::db::ResultSet Database_obj::getA3( ){
	HX_STACK_FRAME("Database","getA3",0x5c64f195,"Database.getA3","Database.hx",99,0x869cb643)
	HX_STACK_LINE(100)
	::sys::db::Connection tmp = ::Database_obj::getIntancethree();		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(100)
	::sys::db::ResultSet tmp1 = tmp->request(HX_HCSTRING("select * from Q1 where ID = 8","\xed","\x44","\xdd","\x5a"));		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(100)
	return tmp1;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(Database_obj,getA3,return )

::sys::db::ResultSet Database_obj::getA4( ){
	HX_STACK_FRAME("Database","getA4",0x5c64f196,"Database.getA4","Database.hx",104,0x869cb643)
	HX_STACK_LINE(105)
	::sys::db::Connection tmp = ::Database_obj::getIntancethree();		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(105)
	::sys::db::ResultSet tmp1 = tmp->request(HX_HCSTRING("select * from Q1 where ID = 9","\xee","\x44","\xdd","\x5a"));		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(105)
	return tmp1;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(Database_obj,getA4,return )

::sys::db::ResultSet Database_obj::getEnd4( ){
	HX_STACK_FRAME("Database","getEnd4",0xf786379c,"Database.getEnd4","Database.hx",109,0x869cb643)
	HX_STACK_LINE(110)
	::sys::db::Connection tmp = ::Database_obj::getIntancethree();		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(110)
	::sys::db::ResultSet tmp1 = tmp->request(HX_HCSTRING("select * from Q1 where ID = 10","\x8a","\x04","\xbf","\x26"));		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(110)
	return tmp1;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(Database_obj,getEnd4,return )

::sys::db::ResultSet Database_obj::getQ3( ){
	HX_STACK_FRAME("Database","getQ3",0x5c64ff85,"Database.getQ3","Database.hx",114,0x869cb643)
	HX_STACK_LINE(115)
	::sys::db::Connection tmp = ::Database_obj::getIntancethree();		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(115)
	::sys::db::ResultSet tmp1 = tmp->request(HX_HCSTRING("select * from Q1 where ID = 11","\x8b","\x04","\xbf","\x26"));		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(115)
	return tmp1;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(Database_obj,getQ3,return )

::sys::db::ResultSet Database_obj::getA5( ){
	HX_STACK_FRAME("Database","getA5",0x5c64f197,"Database.getA5","Database.hx",119,0x869cb643)
	HX_STACK_LINE(120)
	::sys::db::Connection tmp = ::Database_obj::getIntancethree();		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(120)
	::sys::db::ResultSet tmp1 = tmp->request(HX_HCSTRING("select * from Q1 where ID = 12","\x8c","\x04","\xbf","\x26"));		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(120)
	return tmp1;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(Database_obj,getA5,return )

::sys::db::ResultSet Database_obj::getA6( ){
	HX_STACK_FRAME("Database","getA6",0x5c64f198,"Database.getA6","Database.hx",124,0x869cb643)
	HX_STACK_LINE(125)
	::sys::db::Connection tmp = ::Database_obj::getIntancethree();		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(125)
	::sys::db::ResultSet tmp1 = tmp->request(HX_HCSTRING("select * from Q1 where ID = 13","\x8d","\x04","\xbf","\x26"));		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(125)
	return tmp1;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(Database_obj,getA6,return )

::sys::db::ResultSet Database_obj::getEnd5( ){
	HX_STACK_FRAME("Database","getEnd5",0xf786379d,"Database.getEnd5","Database.hx",129,0x869cb643)
	HX_STACK_LINE(130)
	::sys::db::Connection tmp = ::Database_obj::getIntancethree();		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(130)
	::sys::db::ResultSet tmp1 = tmp->request(HX_HCSTRING("select * from Q1 where ID = 14","\x8e","\x04","\xbf","\x26"));		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(130)
	return tmp1;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(Database_obj,getEnd5,return )

::sys::db::ResultSet Database_obj::getVictory( ){
	HX_STACK_FRAME("Database","getVictory",0x1c73380f,"Database.getVictory","Database.hx",134,0x869cb643)
	HX_STACK_LINE(135)
	::sys::db::Connection tmp = ::Database_obj::getIntancethree();		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(135)
	::sys::db::ResultSet tmp1 = tmp->request(HX_HCSTRING("select * from Q1 where ID = 15","\x8f","\x04","\xbf","\x26"));		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(135)
	return tmp1;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(Database_obj,getVictory,return )

::sys::db::ResultSet Database_obj::getLate( ){
	HX_STACK_FRAME("Database","getLate",0xfc1ce6c9,"Database.getLate","Database.hx",139,0x869cb643)
	HX_STACK_LINE(140)
	::sys::db::Connection tmp = ::Database_obj::getIntancethree();		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(140)
	::sys::db::ResultSet tmp1 = tmp->request(HX_HCSTRING("select * from Q1 where ID = 16","\x90","\x04","\xbf","\x26"));		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(140)
	return tmp1;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(Database_obj,getLate,return )


Database_obj::Database_obj()
{
}

bool Database_obj::__GetStatic(const ::String &inName, Dynamic &outValue, hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"cnx") ) { outValue = cnx; return true;  }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"dbQ1") ) { outValue = dbQ1; return true;  }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"getQ1") ) { outValue = getQ1_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"getA1") ) { outValue = getA1_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"getA2") ) { outValue = getA2_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"getQ2") ) { outValue = getQ2_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"getA3") ) { outValue = getA3_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"getA4") ) { outValue = getA4_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"getQ3") ) { outValue = getQ3_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"getA5") ) { outValue = getA5_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"getA6") ) { outValue = getA6_dyn(); return true;  }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"getEnd") ) { outValue = getEnd_dyn(); return true;  }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"getEnd2") ) { outValue = getEnd2_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"getEnd3") ) { outValue = getEnd3_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"getEnd4") ) { outValue = getEnd4_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"getEnd5") ) { outValue = getEnd5_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"getLate") ) { outValue = getLate_dyn(); return true;  }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"dbcredit") ) { outValue = dbcredit; return true;  }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"getCredits") ) { outValue = getCredits_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"getVictory") ) { outValue = getVictory_dyn(); return true;  }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"getInstance") ) { outValue = getInstance_dyn(); return true;  }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"dbhighscores") ) { outValue = dbhighscores; return true;  }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"getHighscores") ) { outValue = getHighscores_dyn(); return true;  }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"getInstanceTwo") ) { outValue = getInstanceTwo_dyn(); return true;  }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"getIntancethree") ) { outValue = getIntancethree_dyn(); return true;  }
	}
	return false;
}

bool Database_obj::__SetStatic(const ::String &inName,Dynamic &ioValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"cnx") ) { cnx=ioValue.Cast< Dynamic >(); return true; }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"dbQ1") ) { dbQ1=ioValue.Cast< ::sys::db::Connection >(); return true; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"dbcredit") ) { dbcredit=ioValue.Cast< ::sys::db::Connection >(); return true; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"dbhighscores") ) { dbhighscores=ioValue.Cast< ::sys::db::Connection >(); return true; }
	}
	return false;
}

#if HXCPP_SCRIPTABLE
static hx::StorageInfo *sMemberStorageInfo = 0;
static hx::StaticInfo sStaticStorageInfo[] = {
	{hx::fsObject /*::sys::db::Connection*/ ,(void *) &Database_obj::dbhighscores,HX_HCSTRING("dbhighscores","\xc1","\x42","\xa0","\xd4")},
	{hx::fsObject /*::sys::db::Connection*/ ,(void *) &Database_obj::dbcredit,HX_HCSTRING("dbcredit","\x37","\xae","\xfd","\xbe")},
	{hx::fsObject /*::sys::db::Connection*/ ,(void *) &Database_obj::dbQ1,HX_HCSTRING("dbQ1","\xbe","\xf9","\x63","\x42")},
	{hx::fsObject /*Dynamic*/ ,(void *) &Database_obj::cnx,HX_HCSTRING("cnx","\x6d","\x7f","\x4b","\x00")},
	{ hx::fsUnknown, 0, null()}
};
#endif

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(Database_obj::__mClass,"__mClass");
	HX_MARK_MEMBER_NAME(Database_obj::dbhighscores,"dbhighscores");
	HX_MARK_MEMBER_NAME(Database_obj::dbcredit,"dbcredit");
	HX_MARK_MEMBER_NAME(Database_obj::dbQ1,"dbQ1");
	HX_MARK_MEMBER_NAME(Database_obj::cnx,"cnx");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(Database_obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(Database_obj::dbhighscores,"dbhighscores");
	HX_VISIT_MEMBER_NAME(Database_obj::dbcredit,"dbcredit");
	HX_VISIT_MEMBER_NAME(Database_obj::dbQ1,"dbQ1");
	HX_VISIT_MEMBER_NAME(Database_obj::cnx,"cnx");
};

#endif

hx::Class Database_obj::__mClass;

static ::String sStaticFields[] = {
	HX_HCSTRING("dbhighscores","\xc1","\x42","\xa0","\xd4"),
	HX_HCSTRING("dbcredit","\x37","\xae","\xfd","\xbe"),
	HX_HCSTRING("dbQ1","\xbe","\xf9","\x63","\x42"),
	HX_HCSTRING("cnx","\x6d","\x7f","\x4b","\x00"),
	HX_HCSTRING("getInstance","\x4b","\xe2","\xd4","\x7f"),
	HX_HCSTRING("getHighscores","\xf9","\xbd","\x26","\x2d"),
	HX_HCSTRING("getInstanceTwo","\x01","\x84","\xb7","\xb0"),
	HX_HCSTRING("getCredits","\x24","\x94","\xbf","\x62"),
	HX_HCSTRING("getIntancethree","\x16","\x38","\x4d","\xa3"),
	HX_HCSTRING("getQ1","\xd6","\x98","\x60","\x91"),
	HX_HCSTRING("getA1","\xe6","\x8a","\x60","\x91"),
	HX_HCSTRING("getA2","\xe7","\x8a","\x60","\x91"),
	HX_HCSTRING("getEnd","\xe5","\x3c","\x1c","\xa3"),
	HX_HCSTRING("getEnd2","\xad","\x0b","\x99","\x15"),
	HX_HCSTRING("getEnd3","\xae","\x0b","\x99","\x15"),
	HX_HCSTRING("getQ2","\xd7","\x98","\x60","\x91"),
	HX_HCSTRING("getA3","\xe8","\x8a","\x60","\x91"),
	HX_HCSTRING("getA4","\xe9","\x8a","\x60","\x91"),
	HX_HCSTRING("getEnd4","\xaf","\x0b","\x99","\x15"),
	HX_HCSTRING("getQ3","\xd8","\x98","\x60","\x91"),
	HX_HCSTRING("getA5","\xea","\x8a","\x60","\x91"),
	HX_HCSTRING("getA6","\xeb","\x8a","\x60","\x91"),
	HX_HCSTRING("getEnd5","\xb0","\x0b","\x99","\x15"),
	HX_HCSTRING("getVictory","\xdc","\xf1","\x6b","\xc3"),
	HX_HCSTRING("getLate","\xdc","\xba","\x2f","\x1a"),
	::String(null()) };

void Database_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("Database","\x5b","\x57","\x5d","\x6f");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &Database_obj::__GetStatic;
	__mClass->mSetStaticField = &Database_obj::__SetStatic;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(sStaticFields);
	__mClass->mMembers = hx::Class_obj::dupFunctions(0 /* sMemberFields */);
	__mClass->mCanCast = hx::TCanCast< Database_obj >;
#ifdef HXCPP_VISIT_ALLOCS
	__mClass->mVisitFunc = sVisitStatics;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = sStaticStorageInfo;
#endif
	hx::RegisterClass(__mClass->mName, __mClass);
}

void Database_obj::__boot()
{
	cnx= hx::ClassOf< ::sys::db::Sqlite >();
}

