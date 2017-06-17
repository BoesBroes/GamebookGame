#include <hxcpp.h>

#ifndef INCLUDED_haxe_IMap
#include <haxe/IMap.h>
#endif
#ifndef INCLUDED_haxe_ds_IntMap
#include <haxe/ds/IntMap.h>
#endif
#ifndef INCLUDED_lime__backend_native_NativeCFFI
#include <lime/_backend/native/NativeCFFI.h>
#endif
#ifndef INCLUDED_lime_app__Event_Int_Float_Float_Void
#include <lime/app/_Event_Int_Float_Float_Void.h>
#endif
#ifndef INCLUDED_lime_app__Event_Int_Float_Void
#include <lime/app/_Event_Int_Float_Void.h>
#endif
#ifndef INCLUDED_lime_app__Event_Int_Void
#include <lime/app/_Event_Int_Void.h>
#endif
#ifndef INCLUDED_lime_app__Event_Int_lime_ui_JoystickHatPosition_Void
#include <lime/app/_Event_Int_lime_ui_JoystickHatPosition_Void.h>
#endif
#ifndef INCLUDED_lime_app__Event_Void_Void
#include <lime/app/_Event_Void_Void.h>
#endif
#ifndef INCLUDED_lime_app__Event_lime_ui_Joystick_Void
#include <lime/app/_Event_lime_ui_Joystick_Void.h>
#endif
#ifndef INCLUDED_lime_ui_Joystick
#include <lime/ui/Joystick.h>
#endif
namespace lime{
namespace ui{

Void Joystick_obj::__construct(int id)
{
{
	this->onTrackballMove = ::lime::app::_Event_Int_Float_Float_Void_obj::__new();
	this->onHatMove = ::lime::app::_Event_Int_lime_ui_JoystickHatPosition_Void_obj::__new();
	this->onDisconnect = ::lime::app::_Event_Void_Void_obj::__new();
	this->onButtonUp = ::lime::app::_Event_Int_Void_obj::__new();
	this->onButtonDown = ::lime::app::_Event_Int_Void_obj::__new();
	this->onAxisMove = ::lime::app::_Event_Int_Float_Void_obj::__new();
	this->id = id;
	this->connected = true;
}
;
	return null();
}

//Joystick_obj::~Joystick_obj() { }

Dynamic Joystick_obj::__CreateEmpty() { return  new Joystick_obj; }
hx::ObjectPtr< Joystick_obj > Joystick_obj::__new(int id)
{  hx::ObjectPtr< Joystick_obj > _result_ = new Joystick_obj();
	_result_->__construct(id);
	return _result_;}

Dynamic Joystick_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< Joystick_obj > _result_ = new Joystick_obj();
	_result_->__construct(inArgs[0]);
	return _result_;}

::String Joystick_obj::get_guid( ){
	return ((Dynamic)(::lime::_backend::native::NativeCFFI_obj::cffi_lime_joystick_get_device_guid.call(this->id)));
}


HX_DEFINE_DYNAMIC_FUNC0(Joystick_obj,get_guid,return )

::String Joystick_obj::get_name( ){
	return ((Dynamic)(::lime::_backend::native::NativeCFFI_obj::cffi_lime_joystick_get_device_name.call(this->id)));
}


HX_DEFINE_DYNAMIC_FUNC0(Joystick_obj,get_name,return )

int Joystick_obj::get_numAxes( ){
	return ::lime::_backend::native::NativeCFFI_obj::cffi_lime_joystick_get_num_axes.call(this->id);
}


HX_DEFINE_DYNAMIC_FUNC0(Joystick_obj,get_numAxes,return )

int Joystick_obj::get_numButtons( ){
	return ::lime::_backend::native::NativeCFFI_obj::cffi_lime_joystick_get_num_buttons.call(this->id);
}


HX_DEFINE_DYNAMIC_FUNC0(Joystick_obj,get_numButtons,return )

int Joystick_obj::get_numHats( ){
	return ::lime::_backend::native::NativeCFFI_obj::cffi_lime_joystick_get_num_hats.call(this->id);
}


HX_DEFINE_DYNAMIC_FUNC0(Joystick_obj,get_numHats,return )

int Joystick_obj::get_numTrackballs( ){
	return ::lime::_backend::native::NativeCFFI_obj::cffi_lime_joystick_get_num_trackballs.call(this->id);
}


HX_DEFINE_DYNAMIC_FUNC0(Joystick_obj,get_numTrackballs,return )

::haxe::ds::IntMap Joystick_obj::devices;

::lime::app::_Event_lime_ui_Joystick_Void Joystick_obj::onConnect;

Void Joystick_obj::__connect( int id){
{
		::haxe::ds::IntMap tmp = ::lime::ui::Joystick_obj::devices;
		int tmp1 = id;
		bool tmp2 = tmp->exists(tmp1);
		bool tmp3 = !(tmp2);
		if ((tmp3)){
			::lime::ui::Joystick tmp4 = ::lime::ui::Joystick_obj::__new(id);
			::lime::ui::Joystick joystick = tmp4;
			::haxe::ds::IntMap tmp5 = ::lime::ui::Joystick_obj::devices;
			int tmp6 = id;
			::lime::ui::Joystick tmp7 = joystick;
			tmp5->set(tmp6,tmp7);
			::lime::app::_Event_lime_ui_Joystick_Void tmp8 = ::lime::ui::Joystick_obj::onConnect;
			::lime::ui::Joystick tmp9 = joystick;
			tmp8->dispatch(tmp9);
		}
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Joystick_obj,__connect,(void))

Void Joystick_obj::__disconnect( int id){
{
		::haxe::ds::IntMap tmp = ::lime::ui::Joystick_obj::devices;
		int tmp1 = id;
		::lime::ui::Joystick tmp2 = tmp->get(tmp1);
		::lime::ui::Joystick joystick = tmp2;
		bool tmp3 = (joystick != null());
		if ((tmp3)){
			joystick->connected = false;
		}
		::haxe::ds::IntMap tmp4 = ::lime::ui::Joystick_obj::devices;
		int tmp5 = id;
		tmp4->remove(tmp5);
		bool tmp6 = (joystick != null());
		if ((tmp6)){
			joystick->onDisconnect->dispatch();
		}
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Joystick_obj,__disconnect,(void))


Joystick_obj::Joystick_obj()
{
}

void Joystick_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(Joystick);
	HX_MARK_MEMBER_NAME(connected,"connected");
	HX_MARK_MEMBER_NAME(id,"id");
	HX_MARK_MEMBER_NAME(onAxisMove,"onAxisMove");
	HX_MARK_MEMBER_NAME(onButtonDown,"onButtonDown");
	HX_MARK_MEMBER_NAME(onButtonUp,"onButtonUp");
	HX_MARK_MEMBER_NAME(onDisconnect,"onDisconnect");
	HX_MARK_MEMBER_NAME(onHatMove,"onHatMove");
	HX_MARK_MEMBER_NAME(onTrackballMove,"onTrackballMove");
	HX_MARK_END_CLASS();
}

void Joystick_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(connected,"connected");
	HX_VISIT_MEMBER_NAME(id,"id");
	HX_VISIT_MEMBER_NAME(onAxisMove,"onAxisMove");
	HX_VISIT_MEMBER_NAME(onButtonDown,"onButtonDown");
	HX_VISIT_MEMBER_NAME(onButtonUp,"onButtonUp");
	HX_VISIT_MEMBER_NAME(onDisconnect,"onDisconnect");
	HX_VISIT_MEMBER_NAME(onHatMove,"onHatMove");
	HX_VISIT_MEMBER_NAME(onTrackballMove,"onTrackballMove");
}

Dynamic Joystick_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 2:
		if (HX_FIELD_EQ(inName,"id") ) { return id; }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"guid") ) { if (inCallProp == hx::paccAlways) return get_guid(); }
		if (HX_FIELD_EQ(inName,"name") ) { if (inCallProp == hx::paccAlways) return get_name(); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"numAxes") ) { if (inCallProp == hx::paccAlways) return get_numAxes(); }
		if (HX_FIELD_EQ(inName,"numHats") ) { if (inCallProp == hx::paccAlways) return get_numHats(); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"get_guid") ) { return get_guid_dyn(); }
		if (HX_FIELD_EQ(inName,"get_name") ) { return get_name_dyn(); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"connected") ) { return connected; }
		if (HX_FIELD_EQ(inName,"onHatMove") ) { return onHatMove; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"numButtons") ) { if (inCallProp == hx::paccAlways) return get_numButtons(); }
		if (HX_FIELD_EQ(inName,"onAxisMove") ) { return onAxisMove; }
		if (HX_FIELD_EQ(inName,"onButtonUp") ) { return onButtonUp; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"get_numAxes") ) { return get_numAxes_dyn(); }
		if (HX_FIELD_EQ(inName,"get_numHats") ) { return get_numHats_dyn(); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"onButtonDown") ) { return onButtonDown; }
		if (HX_FIELD_EQ(inName,"onDisconnect") ) { return onDisconnect; }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"numTrackballs") ) { if (inCallProp == hx::paccAlways) return get_numTrackballs(); }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"get_numButtons") ) { return get_numButtons_dyn(); }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"onTrackballMove") ) { return onTrackballMove; }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"get_numTrackballs") ) { return get_numTrackballs_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

bool Joystick_obj::__GetStatic(const ::String &inName, Dynamic &outValue, hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 7:
		if (HX_FIELD_EQ(inName,"devices") ) { outValue = devices; return true;  }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"onConnect") ) { outValue = onConnect; return true;  }
		if (HX_FIELD_EQ(inName,"__connect") ) { outValue = __connect_dyn(); return true;  }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"__disconnect") ) { outValue = __disconnect_dyn(); return true;  }
	}
	return false;
}

Dynamic Joystick_obj::__SetField(const ::String &inName,const Dynamic &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 2:
		if (HX_FIELD_EQ(inName,"id") ) { id=inValue.Cast< int >(); return inValue; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"connected") ) { connected=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"onHatMove") ) { onHatMove=inValue.Cast< ::lime::app::_Event_Int_lime_ui_JoystickHatPosition_Void >(); return inValue; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"onAxisMove") ) { onAxisMove=inValue.Cast< ::lime::app::_Event_Int_Float_Void >(); return inValue; }
		if (HX_FIELD_EQ(inName,"onButtonUp") ) { onButtonUp=inValue.Cast< ::lime::app::_Event_Int_Void >(); return inValue; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"onButtonDown") ) { onButtonDown=inValue.Cast< ::lime::app::_Event_Int_Void >(); return inValue; }
		if (HX_FIELD_EQ(inName,"onDisconnect") ) { onDisconnect=inValue.Cast< ::lime::app::_Event_Void_Void >(); return inValue; }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"onTrackballMove") ) { onTrackballMove=inValue.Cast< ::lime::app::_Event_Int_Float_Float_Void >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

bool Joystick_obj::__SetStatic(const ::String &inName,Dynamic &ioValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 7:
		if (HX_FIELD_EQ(inName,"devices") ) { devices=ioValue.Cast< ::haxe::ds::IntMap >(); return true; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"onConnect") ) { onConnect=ioValue.Cast< ::lime::app::_Event_lime_ui_Joystick_Void >(); return true; }
	}
	return false;
}

void Joystick_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("connected","\xc9","\xe2","\xf6","\xa2"));
	outFields->push(HX_HCSTRING("guid","\x89","\x1d","\x6e","\x44"));
	outFields->push(HX_HCSTRING("id","\xdb","\x5b","\x00","\x00"));
	outFields->push(HX_HCSTRING("name","\x4b","\x72","\xff","\x48"));
	outFields->push(HX_HCSTRING("numAxes","\x8b","\xbe","\xf9","\x93"));
	outFields->push(HX_HCSTRING("numButtons","\x9b","\x90","\x95","\xfa"));
	outFields->push(HX_HCSTRING("numHats","\x1e","\xd6","\x88","\x98"));
	outFields->push(HX_HCSTRING("numTrackballs","\x0f","\x6d","\xa5","\x22"));
	outFields->push(HX_HCSTRING("onAxisMove","\x91","\x64","\xab","\x6d"));
	outFields->push(HX_HCSTRING("onButtonDown","\x73","\x09","\xa8","\x84"));
	outFields->push(HX_HCSTRING("onButtonUp","\x2c","\x61","\xe9","\x39"));
	outFields->push(HX_HCSTRING("onDisconnect","\x5b","\x06","\x88","\x41"));
	outFields->push(HX_HCSTRING("onHatMove","\xad","\x50","\xb6","\x82"));
	outFields->push(HX_HCSTRING("onTrackballMove","\x9c","\x55","\xf3","\xfd"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsBool,(int)offsetof(Joystick_obj,connected),HX_HCSTRING("connected","\xc9","\xe2","\xf6","\xa2")},
	{hx::fsInt,(int)offsetof(Joystick_obj,id),HX_HCSTRING("id","\xdb","\x5b","\x00","\x00")},
	{hx::fsObject /*::lime::app::_Event_Int_Float_Void*/ ,(int)offsetof(Joystick_obj,onAxisMove),HX_HCSTRING("onAxisMove","\x91","\x64","\xab","\x6d")},
	{hx::fsObject /*::lime::app::_Event_Int_Void*/ ,(int)offsetof(Joystick_obj,onButtonDown),HX_HCSTRING("onButtonDown","\x73","\x09","\xa8","\x84")},
	{hx::fsObject /*::lime::app::_Event_Int_Void*/ ,(int)offsetof(Joystick_obj,onButtonUp),HX_HCSTRING("onButtonUp","\x2c","\x61","\xe9","\x39")},
	{hx::fsObject /*::lime::app::_Event_Void_Void*/ ,(int)offsetof(Joystick_obj,onDisconnect),HX_HCSTRING("onDisconnect","\x5b","\x06","\x88","\x41")},
	{hx::fsObject /*::lime::app::_Event_Int_lime_ui_JoystickHatPosition_Void*/ ,(int)offsetof(Joystick_obj,onHatMove),HX_HCSTRING("onHatMove","\xad","\x50","\xb6","\x82")},
	{hx::fsObject /*::lime::app::_Event_Int_Float_Float_Void*/ ,(int)offsetof(Joystick_obj,onTrackballMove),HX_HCSTRING("onTrackballMove","\x9c","\x55","\xf3","\xfd")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo sStaticStorageInfo[] = {
	{hx::fsObject /*::haxe::ds::IntMap*/ ,(void *) &Joystick_obj::devices,HX_HCSTRING("devices","\x1d","\x27","\x69","\xd7")},
	{hx::fsObject /*::lime::app::_Event_lime_ui_Joystick_Void*/ ,(void *) &Joystick_obj::onConnect,HX_HCSTRING("onConnect","\x8b","\xf4","\x2a","\xed")},
	{ hx::fsUnknown, 0, null()}
};
#endif

static ::String sMemberFields[] = {
	HX_HCSTRING("connected","\xc9","\xe2","\xf6","\xa2"),
	HX_HCSTRING("id","\xdb","\x5b","\x00","\x00"),
	HX_HCSTRING("onAxisMove","\x91","\x64","\xab","\x6d"),
	HX_HCSTRING("onButtonDown","\x73","\x09","\xa8","\x84"),
	HX_HCSTRING("onButtonUp","\x2c","\x61","\xe9","\x39"),
	HX_HCSTRING("onDisconnect","\x5b","\x06","\x88","\x41"),
	HX_HCSTRING("onHatMove","\xad","\x50","\xb6","\x82"),
	HX_HCSTRING("onTrackballMove","\x9c","\x55","\xf3","\xfd"),
	HX_HCSTRING("get_guid","\x12","\xd9","\x28","\xc4"),
	HX_HCSTRING("get_name","\xd4","\x2d","\xba","\xc8"),
	HX_HCSTRING("get_numAxes","\xa2","\x1e","\xf4","\x19"),
	HX_HCSTRING("get_numButtons","\xe4","\x18","\x8b","\x70"),
	HX_HCSTRING("get_numHats","\x35","\x36","\x83","\x1e"),
	HX_HCSTRING("get_numTrackballs","\x66","\x78","\x15","\x29"),
	::String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(Joystick_obj::__mClass,"__mClass");
	HX_MARK_MEMBER_NAME(Joystick_obj::devices,"devices");
	HX_MARK_MEMBER_NAME(Joystick_obj::onConnect,"onConnect");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(Joystick_obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(Joystick_obj::devices,"devices");
	HX_VISIT_MEMBER_NAME(Joystick_obj::onConnect,"onConnect");
};

#endif

hx::Class Joystick_obj::__mClass;

static ::String sStaticFields[] = {
	HX_HCSTRING("devices","\x1d","\x27","\x69","\xd7"),
	HX_HCSTRING("onConnect","\x8b","\xf4","\x2a","\xed"),
	HX_HCSTRING("__connect","\xca","\x8c","\xce","\x96"),
	HX_HCSTRING("__disconnect","\x7c","\xdf","\xd7","\xa1"),
	::String(null()) };

void Joystick_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("lime.ui.Joystick","\x5d","\x3f","\xe0","\x7d");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &Joystick_obj::__GetStatic;
	__mClass->mSetStaticField = &Joystick_obj::__SetStatic;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(sStaticFields);
	__mClass->mMembers = hx::Class_obj::dupFunctions(sMemberFields);
	__mClass->mCanCast = hx::TCanCast< Joystick_obj >;
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

void Joystick_obj::__boot()
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
	devices= _Function_0_1::Block();
	onConnect= ::lime::app::_Event_lime_ui_Joystick_Void_obj::__new();
}

} // end namespace lime
} // end namespace ui
