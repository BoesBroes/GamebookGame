#include <hxcpp.h>

#ifndef INCLUDED_haxe_IMap
#include <haxe/IMap.h>
#endif
#ifndef INCLUDED_haxe_ds_IntMap
#include <haxe/ds/IntMap.h>
#endif
#ifndef INCLUDED_lime_app__Event_Float_Float_Float_Void
#include <lime/app/_Event_Float_Float_Float_Void.h>
#endif
#ifndef INCLUDED_lime_system_Sensor
#include <lime/system/Sensor.h>
#endif
#ifndef INCLUDED_lime_system_SensorType
#include <lime/system/SensorType.h>
#endif
namespace lime{
namespace _system{

Void Sensor_obj::__construct(::lime::_system::SensorType type,int id)
{
{
	this->onUpdate = ::lime::app::_Event_Float_Float_Float_Void_obj::__new();
	this->type = type;
	this->id = id;
}
;
	return null();
}

//Sensor_obj::~Sensor_obj() { }

Dynamic Sensor_obj::__CreateEmpty() { return  new Sensor_obj; }
hx::ObjectPtr< Sensor_obj > Sensor_obj::__new(::lime::_system::SensorType type,int id)
{  hx::ObjectPtr< Sensor_obj > _result_ = new Sensor_obj();
	_result_->__construct(type,id);
	return _result_;}

Dynamic Sensor_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< Sensor_obj > _result_ = new Sensor_obj();
	_result_->__construct(inArgs[0],inArgs[1]);
	return _result_;}

::haxe::ds::IntMap Sensor_obj::sensorByID;

Array< ::Dynamic > Sensor_obj::sensors;

Array< ::Dynamic > Sensor_obj::getSensors( ::lime::_system::SensorType type){
	bool tmp = (type == null());
	if ((tmp)){
		return ::lime::_system::Sensor_obj::sensors->copy();
	}
	else{
		Array< ::Dynamic > result = Array_obj< ::Dynamic >::__new();
		{
			int _g = (int)0;
			Array< ::Dynamic > _g1 = ::lime::_system::Sensor_obj::sensors;
			while((true)){
				bool tmp1 = (_g < _g1->length);
				bool tmp2 = !(tmp1);
				if ((tmp2)){
					break;
				}
				::lime::_system::Sensor tmp3 = _g1->__get(_g).StaticCast< ::lime::_system::Sensor >();
				::lime::_system::Sensor sensor = tmp3;
				++(_g);
				bool tmp4 = (sensor->__Field(HX_HCSTRING("type","\xba","\xf2","\x08","\x4d"), hx::paccDynamic ) == type);
				if ((tmp4)){
					::lime::_system::Sensor tmp5 = sensor;
					result->push(tmp5);
				}
			}
		}
		return result;
	}
	return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Sensor_obj,getSensors,return )

Void Sensor_obj::registerSensor( ::lime::_system::SensorType type,int id){
{
		::lime::_system::Sensor tmp = ::lime::_system::Sensor_obj::__new(type,id);
		::lime::_system::Sensor sensor = tmp;
		::lime::_system::Sensor tmp1 = sensor;
		::lime::_system::Sensor_obj::sensors->push(tmp1);
		::haxe::ds::IntMap tmp2 = ::lime::_system::Sensor_obj::sensorByID;
		int tmp3 = id;
		::lime::_system::Sensor tmp4 = sensor;
		tmp2->set(tmp3,tmp4);
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(Sensor_obj,registerSensor,(void))


Sensor_obj::Sensor_obj()
{
}

void Sensor_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(Sensor);
	HX_MARK_MEMBER_NAME(id,"id");
	HX_MARK_MEMBER_NAME(onUpdate,"onUpdate");
	HX_MARK_MEMBER_NAME(type,"type");
	HX_MARK_END_CLASS();
}

void Sensor_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(id,"id");
	HX_VISIT_MEMBER_NAME(onUpdate,"onUpdate");
	HX_VISIT_MEMBER_NAME(type,"type");
}

Dynamic Sensor_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 2:
		if (HX_FIELD_EQ(inName,"id") ) { return id; }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"type") ) { return type; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"onUpdate") ) { return onUpdate; }
	}
	return super::__Field(inName,inCallProp);
}

bool Sensor_obj::__GetStatic(const ::String &inName, Dynamic &outValue, hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 7:
		if (HX_FIELD_EQ(inName,"sensors") ) { outValue = sensors; return true;  }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"sensorByID") ) { outValue = sensorByID; return true;  }
		if (HX_FIELD_EQ(inName,"getSensors") ) { outValue = getSensors_dyn(); return true;  }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"registerSensor") ) { outValue = registerSensor_dyn(); return true;  }
	}
	return false;
}

Dynamic Sensor_obj::__SetField(const ::String &inName,const Dynamic &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 2:
		if (HX_FIELD_EQ(inName,"id") ) { id=inValue.Cast< int >(); return inValue; }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"type") ) { type=inValue.Cast< ::lime::_system::SensorType >(); return inValue; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"onUpdate") ) { onUpdate=inValue.Cast< ::lime::app::_Event_Float_Float_Float_Void >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

bool Sensor_obj::__SetStatic(const ::String &inName,Dynamic &ioValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 7:
		if (HX_FIELD_EQ(inName,"sensors") ) { sensors=ioValue.Cast< Array< ::Dynamic > >(); return true; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"sensorByID") ) { sensorByID=ioValue.Cast< ::haxe::ds::IntMap >(); return true; }
	}
	return false;
}

void Sensor_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("id","\xdb","\x5b","\x00","\x00"));
	outFields->push(HX_HCSTRING("onUpdate","\x88","\x7c","\xb2","\x66"));
	outFields->push(HX_HCSTRING("type","\xba","\xf2","\x08","\x4d"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsInt,(int)offsetof(Sensor_obj,id),HX_HCSTRING("id","\xdb","\x5b","\x00","\x00")},
	{hx::fsObject /*::lime::app::_Event_Float_Float_Float_Void*/ ,(int)offsetof(Sensor_obj,onUpdate),HX_HCSTRING("onUpdate","\x88","\x7c","\xb2","\x66")},
	{hx::fsObject /*::lime::_system::SensorType*/ ,(int)offsetof(Sensor_obj,type),HX_HCSTRING("type","\xba","\xf2","\x08","\x4d")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo sStaticStorageInfo[] = {
	{hx::fsObject /*::haxe::ds::IntMap*/ ,(void *) &Sensor_obj::sensorByID,HX_HCSTRING("sensorByID","\xcc","\xfc","\xca","\x0d")},
	{hx::fsObject /*Array< ::Dynamic >*/ ,(void *) &Sensor_obj::sensors,HX_HCSTRING("sensors","\xf9","\xc0","\x9b","\xb2")},
	{ hx::fsUnknown, 0, null()}
};
#endif

static ::String sMemberFields[] = {
	HX_HCSTRING("id","\xdb","\x5b","\x00","\x00"),
	HX_HCSTRING("onUpdate","\x88","\x7c","\xb2","\x66"),
	HX_HCSTRING("type","\xba","\xf2","\x08","\x4d"),
	::String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(Sensor_obj::__mClass,"__mClass");
	HX_MARK_MEMBER_NAME(Sensor_obj::sensorByID,"sensorByID");
	HX_MARK_MEMBER_NAME(Sensor_obj::sensors,"sensors");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(Sensor_obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(Sensor_obj::sensorByID,"sensorByID");
	HX_VISIT_MEMBER_NAME(Sensor_obj::sensors,"sensors");
};

#endif

hx::Class Sensor_obj::__mClass;

static ::String sStaticFields[] = {
	HX_HCSTRING("sensorByID","\xcc","\xfc","\xca","\x0d"),
	HX_HCSTRING("sensors","\xf9","\xc0","\x9b","\xb2"),
	HX_HCSTRING("getSensors","\x03","\x47","\xfd","\x01"),
	HX_HCSTRING("registerSensor","\xfd","\xb8","\xd1","\x31"),
	::String(null()) };

void Sensor_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("lime.system.Sensor","\xe0","\x1e","\x6b","\x25");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &Sensor_obj::__GetStatic;
	__mClass->mSetStaticField = &Sensor_obj::__SetStatic;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(sStaticFields);
	__mClass->mMembers = hx::Class_obj::dupFunctions(sMemberFields);
	__mClass->mCanCast = hx::TCanCast< Sensor_obj >;
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

void Sensor_obj::__boot()
{
struct _Function_0_1{
	inline static ::haxe::ds::IntMap Block( ){
		{
			::haxe::ds::IntMap tmp = ::haxe::ds::IntMap_obj::__new();
			::haxe::ds::IntMap tmp1 = tmp;
			return tmp1;
		}
		return null();
	}
};
	sensorByID= _Function_0_1::Block();
	sensors= Array_obj< ::Dynamic >::__new();
}

} // end namespace lime
} // end namespace system
