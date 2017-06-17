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
#ifndef INCLUDED_lime_app__Event_Void_Void
#include <lime/app/_Event_Void_Void.h>
#endif
#ifndef INCLUDED_lime_app__Event_lime_ui_GamepadAxis_Float_Void
#include <lime/app/_Event_lime_ui_GamepadAxis_Float_Void.h>
#endif
#ifndef INCLUDED_lime_app__Event_lime_ui_GamepadButton_Void
#include <lime/app/_Event_lime_ui_GamepadButton_Void.h>
#endif
#ifndef INCLUDED_lime_app__Event_lime_ui_Gamepad_Void
#include <lime/app/_Event_lime_ui_Gamepad_Void.h>
#endif
#ifndef INCLUDED_lime_ui_Gamepad
#include <lime/ui/Gamepad.h>
#endif
namespace lime{
namespace ui{

Void Gamepad_obj::__construct(int id)
{
{
	this->onDisconnect = ::lime::app::_Event_Void_Void_obj::__new();
	this->onButtonUp = ::lime::app::_Event_lime_ui_GamepadButton_Void_obj::__new();
	this->onButtonDown = ::lime::app::_Event_lime_ui_GamepadButton_Void_obj::__new();
	this->onAxisMove = ::lime::app::_Event_lime_ui_GamepadAxis_Float_Void_obj::__new();
	this->id = id;
	this->connected = true;
}
;
	return null();
}

//Gamepad_obj::~Gamepad_obj() { }

Dynamic Gamepad_obj::__CreateEmpty() { return  new Gamepad_obj; }
hx::ObjectPtr< Gamepad_obj > Gamepad_obj::__new(int id)
{  hx::ObjectPtr< Gamepad_obj > _result_ = new Gamepad_obj();
	_result_->__construct(id);
	return _result_;}

Dynamic Gamepad_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< Gamepad_obj > _result_ = new Gamepad_obj();
	_result_->__construct(inArgs[0]);
	return _result_;}

::String Gamepad_obj::get_guid( ){
	return ((Dynamic)(::lime::_backend::native::NativeCFFI_obj::cffi_lime_gamepad_get_device_guid.call(this->id)));
}


HX_DEFINE_DYNAMIC_FUNC0(Gamepad_obj,get_guid,return )

::String Gamepad_obj::get_name( ){
	return ((Dynamic)(::lime::_backend::native::NativeCFFI_obj::cffi_lime_gamepad_get_device_name.call(this->id)));
}


HX_DEFINE_DYNAMIC_FUNC0(Gamepad_obj,get_name,return )

::haxe::ds::IntMap Gamepad_obj::devices;

::lime::app::_Event_lime_ui_Gamepad_Void Gamepad_obj::onConnect;

Void Gamepad_obj::addMappings( Array< ::String > mappings){
{
		::lime::_backend::native::NativeCFFI_obj::cffi_lime_gamepad_add_mappings.call(hx::DynamicPtr(mappings));
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Gamepad_obj,addMappings,(void))

Void Gamepad_obj::__connect( int id){
{
		::haxe::ds::IntMap tmp = ::lime::ui::Gamepad_obj::devices;
		int tmp1 = id;
		bool tmp2 = tmp->exists(tmp1);
		bool tmp3 = !(tmp2);
		if ((tmp3)){
			::lime::ui::Gamepad tmp4 = ::lime::ui::Gamepad_obj::__new(id);
			::lime::ui::Gamepad gamepad = tmp4;
			::haxe::ds::IntMap tmp5 = ::lime::ui::Gamepad_obj::devices;
			int tmp6 = id;
			::lime::ui::Gamepad tmp7 = gamepad;
			tmp5->set(tmp6,tmp7);
			::lime::app::_Event_lime_ui_Gamepad_Void tmp8 = ::lime::ui::Gamepad_obj::onConnect;
			::lime::ui::Gamepad tmp9 = gamepad;
			tmp8->dispatch(tmp9);
		}
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Gamepad_obj,__connect,(void))

Void Gamepad_obj::__disconnect( int id){
{
		::haxe::ds::IntMap tmp = ::lime::ui::Gamepad_obj::devices;
		int tmp1 = id;
		::lime::ui::Gamepad tmp2 = tmp->get(tmp1);
		::lime::ui::Gamepad gamepad = tmp2;
		bool tmp3 = (gamepad != null());
		if ((tmp3)){
			gamepad->connected = false;
		}
		::haxe::ds::IntMap tmp4 = ::lime::ui::Gamepad_obj::devices;
		int tmp5 = id;
		tmp4->remove(tmp5);
		bool tmp6 = (gamepad != null());
		if ((tmp6)){
			gamepad->onDisconnect->dispatch();
		}
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Gamepad_obj,__disconnect,(void))


Gamepad_obj::Gamepad_obj()
{
}

void Gamepad_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(Gamepad);
	HX_MARK_MEMBER_NAME(connected,"connected");
	HX_MARK_MEMBER_NAME(id,"id");
	HX_MARK_MEMBER_NAME(onAxisMove,"onAxisMove");
	HX_MARK_MEMBER_NAME(onButtonDown,"onButtonDown");
	HX_MARK_MEMBER_NAME(onButtonUp,"onButtonUp");
	HX_MARK_MEMBER_NAME(onDisconnect,"onDisconnect");
	HX_MARK_END_CLASS();
}

void Gamepad_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(connected,"connected");
	HX_VISIT_MEMBER_NAME(id,"id");
	HX_VISIT_MEMBER_NAME(onAxisMove,"onAxisMove");
	HX_VISIT_MEMBER_NAME(onButtonDown,"onButtonDown");
	HX_VISIT_MEMBER_NAME(onButtonUp,"onButtonUp");
	HX_VISIT_MEMBER_NAME(onDisconnect,"onDisconnect");
}

Dynamic Gamepad_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 2:
		if (HX_FIELD_EQ(inName,"id") ) { return id; }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"guid") ) { if (inCallProp == hx::paccAlways) return get_guid(); }
		if (HX_FIELD_EQ(inName,"name") ) { if (inCallProp == hx::paccAlways) return get_name(); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"get_guid") ) { return get_guid_dyn(); }
		if (HX_FIELD_EQ(inName,"get_name") ) { return get_name_dyn(); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"connected") ) { return connected; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"onAxisMove") ) { return onAxisMove; }
		if (HX_FIELD_EQ(inName,"onButtonUp") ) { return onButtonUp; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"onButtonDown") ) { return onButtonDown; }
		if (HX_FIELD_EQ(inName,"onDisconnect") ) { return onDisconnect; }
	}
	return super::__Field(inName,inCallProp);
}

bool Gamepad_obj::__GetStatic(const ::String &inName, Dynamic &outValue, hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 7:
		if (HX_FIELD_EQ(inName,"devices") ) { outValue = devices; return true;  }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"onConnect") ) { outValue = onConnect; return true;  }
		if (HX_FIELD_EQ(inName,"__connect") ) { outValue = __connect_dyn(); return true;  }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"addMappings") ) { outValue = addMappings_dyn(); return true;  }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"__disconnect") ) { outValue = __disconnect_dyn(); return true;  }
	}
	return false;
}

Dynamic Gamepad_obj::__SetField(const ::String &inName,const Dynamic &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 2:
		if (HX_FIELD_EQ(inName,"id") ) { id=inValue.Cast< int >(); return inValue; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"connected") ) { connected=inValue.Cast< bool >(); return inValue; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"onAxisMove") ) { onAxisMove=inValue.Cast< ::lime::app::_Event_lime_ui_GamepadAxis_Float_Void >(); return inValue; }
		if (HX_FIELD_EQ(inName,"onButtonUp") ) { onButtonUp=inValue.Cast< ::lime::app::_Event_lime_ui_GamepadButton_Void >(); return inValue; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"onButtonDown") ) { onButtonDown=inValue.Cast< ::lime::app::_Event_lime_ui_GamepadButton_Void >(); return inValue; }
		if (HX_FIELD_EQ(inName,"onDisconnect") ) { onDisconnect=inValue.Cast< ::lime::app::_Event_Void_Void >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

bool Gamepad_obj::__SetStatic(const ::String &inName,Dynamic &ioValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 7:
		if (HX_FIELD_EQ(inName,"devices") ) { devices=ioValue.Cast< ::haxe::ds::IntMap >(); return true; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"onConnect") ) { onConnect=ioValue.Cast< ::lime::app::_Event_lime_ui_Gamepad_Void >(); return true; }
	}
	return false;
}

void Gamepad_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("connected","\xc9","\xe2","\xf6","\xa2"));
	outFields->push(HX_HCSTRING("guid","\x89","\x1d","\x6e","\x44"));
	outFields->push(HX_HCSTRING("id","\xdb","\x5b","\x00","\x00"));
	outFields->push(HX_HCSTRING("name","\x4b","\x72","\xff","\x48"));
	outFields->push(HX_HCSTRING("onAxisMove","\x91","\x64","\xab","\x6d"));
	outFields->push(HX_HCSTRING("onButtonDown","\x73","\x09","\xa8","\x84"));
	outFields->push(HX_HCSTRING("onButtonUp","\x2c","\x61","\xe9","\x39"));
	outFields->push(HX_HCSTRING("onDisconnect","\x5b","\x06","\x88","\x41"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsBool,(int)offsetof(Gamepad_obj,connected),HX_HCSTRING("connected","\xc9","\xe2","\xf6","\xa2")},
	{hx::fsInt,(int)offsetof(Gamepad_obj,id),HX_HCSTRING("id","\xdb","\x5b","\x00","\x00")},
	{hx::fsObject /*::lime::app::_Event_lime_ui_GamepadAxis_Float_Void*/ ,(int)offsetof(Gamepad_obj,onAxisMove),HX_HCSTRING("onAxisMove","\x91","\x64","\xab","\x6d")},
	{hx::fsObject /*::lime::app::_Event_lime_ui_GamepadButton_Void*/ ,(int)offsetof(Gamepad_obj,onButtonDown),HX_HCSTRING("onButtonDown","\x73","\x09","\xa8","\x84")},
	{hx::fsObject /*::lime::app::_Event_lime_ui_GamepadButton_Void*/ ,(int)offsetof(Gamepad_obj,onButtonUp),HX_HCSTRING("onButtonUp","\x2c","\x61","\xe9","\x39")},
	{hx::fsObject /*::lime::app::_Event_Void_Void*/ ,(int)offsetof(Gamepad_obj,onDisconnect),HX_HCSTRING("onDisconnect","\x5b","\x06","\x88","\x41")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo sStaticStorageInfo[] = {
	{hx::fsObject /*::haxe::ds::IntMap*/ ,(void *) &Gamepad_obj::devices,HX_HCSTRING("devices","\x1d","\x27","\x69","\xd7")},
	{hx::fsObject /*::lime::app::_Event_lime_ui_Gamepad_Void*/ ,(void *) &Gamepad_obj::onConnect,HX_HCSTRING("onConnect","\x8b","\xf4","\x2a","\xed")},
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
	HX_HCSTRING("get_guid","\x12","\xd9","\x28","\xc4"),
	HX_HCSTRING("get_name","\xd4","\x2d","\xba","\xc8"),
	::String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(Gamepad_obj::__mClass,"__mClass");
	HX_MARK_MEMBER_NAME(Gamepad_obj::devices,"devices");
	HX_MARK_MEMBER_NAME(Gamepad_obj::onConnect,"onConnect");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(Gamepad_obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(Gamepad_obj::devices,"devices");
	HX_VISIT_MEMBER_NAME(Gamepad_obj::onConnect,"onConnect");
};

#endif

hx::Class Gamepad_obj::__mClass;

static ::String sStaticFields[] = {
	HX_HCSTRING("devices","\x1d","\x27","\x69","\xd7"),
	HX_HCSTRING("onConnect","\x8b","\xf4","\x2a","\xed"),
	HX_HCSTRING("addMappings","\xe6","\x68","\x0d","\xd8"),
	HX_HCSTRING("__connect","\xca","\x8c","\xce","\x96"),
	HX_HCSTRING("__disconnect","\x7c","\xdf","\xd7","\xa1"),
	::String(null()) };

void Gamepad_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("lime.ui.Gamepad","\x20","\xf1","\xa5","\x83");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &Gamepad_obj::__GetStatic;
	__mClass->mSetStaticField = &Gamepad_obj::__SetStatic;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(sStaticFields);
	__mClass->mMembers = hx::Class_obj::dupFunctions(sMemberFields);
	__mClass->mCanCast = hx::TCanCast< Gamepad_obj >;
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

void Gamepad_obj::__boot()
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
	onConnect= ::lime::app::_Event_lime_ui_Gamepad_Void_obj::__new();
}

} // end namespace lime
} // end namespace ui
