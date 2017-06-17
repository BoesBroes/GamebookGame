#include <hxcpp.h>

#ifndef INCLUDED_lime__backend_native_NativeCFFI
#include <lime/_backend/native/NativeCFFI.h>
#endif
#ifndef INCLUDED_lime_media_openal_ALC
#include <lime/media/openal/ALC.h>
#endif
namespace lime{
namespace media{
namespace openal{

Void ALC_obj::__construct()
{
	return null();
}

//ALC_obj::~ALC_obj() { }

Dynamic ALC_obj::__CreateEmpty() { return  new ALC_obj; }
hx::ObjectPtr< ALC_obj > ALC_obj::__new()
{  hx::ObjectPtr< ALC_obj > _result_ = new ALC_obj();
	_result_->__construct();
	return _result_;}

Dynamic ALC_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< ALC_obj > _result_ = new ALC_obj();
	_result_->__construct();
	return _result_;}

int ALC_obj::FALSE;

int ALC_obj::TRUE;

int ALC_obj::FREQUENCY;

int ALC_obj::REFRESH;

int ALC_obj::SYNC;

int ALC_obj::MONO_SOURCES;

int ALC_obj::STEREO_SOURCES;

int ALC_obj::NO_ERROR;

int ALC_obj::INVALID_DEVICE;

int ALC_obj::INVALID_CONTEXT;

int ALC_obj::INVALID_ENUM;

int ALC_obj::INVALID_VALUE;

int ALC_obj::OUT_OF_MEMORY;

int ALC_obj::ATTRIBUTES_SIZE;

int ALC_obj::ALL_ATTRIBUTES;

int ALC_obj::DEFAULT_DEVICE_SPECIFIER;

int ALC_obj::DEVICE_SPECIFIER;

int ALC_obj::EXTENSIONS;

int ALC_obj::ENUMERATE_ALL_EXT;

int ALC_obj::DEFAULT_ALL_DEVICES_SPECIFIER;

int ALC_obj::ALL_DEVICES_SPECIFIER;

bool ALC_obj::closeDevice( Dynamic device){
	return ::lime::_backend::native::NativeCFFI_obj::cffi_lime_alc_close_device.call(hx::DynamicPtr(device));
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(ALC_obj,closeDevice,return )

Dynamic ALC_obj::createContext( Dynamic device,Array< int > attrlist){
	Dynamic tmp;
	{
		::hx::Object * inVal = ::lime::_backend::native::NativeCFFI_obj::cffi_lime_alc_create_context.call(hx::DynamicPtr(device),hx::DynamicPtr(attrlist));
		::hx::Object * tmp1 = inVal;
		::hx::Object * tmp2 = hx::DynamicPtr(tmp1);
		tmp = Dynamic(tmp2);
	}
	Dynamic handle = tmp;
	bool tmp1 = (handle != null());
	if ((tmp1)){
		Dynamic tmp2;
		{
			Dynamic handle1 = handle;
			tmp2 = handle1;
		}
		return tmp2;
	}
	return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(ALC_obj,createContext,return )

Void ALC_obj::destroyContext( Dynamic context){
{
		::lime::_backend::native::NativeCFFI_obj::cffi_lime_alc_destroy_context.call(hx::DynamicPtr(context));
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(ALC_obj,destroyContext,(void))

Dynamic ALC_obj::getContextsDevice( Dynamic context){
	Dynamic tmp;
	{
		::hx::Object * inVal = ::lime::_backend::native::NativeCFFI_obj::cffi_lime_alc_get_contexts_device.call(hx::DynamicPtr(context));
		::hx::Object * tmp1 = inVal;
		::hx::Object * tmp2 = hx::DynamicPtr(tmp1);
		tmp = Dynamic(tmp2);
	}
	Dynamic handle = tmp;
	bool tmp1 = (handle != null());
	if ((tmp1)){
		Dynamic tmp2;
		{
			Dynamic handle1 = handle;
			tmp2 = handle1;
		}
		return tmp2;
	}
	return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(ALC_obj,getContextsDevice,return )

Dynamic ALC_obj::getCurrentContext( ){
	Dynamic tmp;
	{
		::hx::Object * inVal = ::lime::_backend::native::NativeCFFI_obj::cffi_lime_alc_get_current_context.call();
		::hx::Object * tmp1 = inVal;
		::hx::Object * tmp2 = hx::DynamicPtr(tmp1);
		tmp = Dynamic(tmp2);
	}
	Dynamic handle = tmp;
	bool tmp1 = (handle != null());
	if ((tmp1)){
		Dynamic tmp2;
		{
			Dynamic handle1 = handle;
			tmp2 = handle1;
		}
		return tmp2;
	}
	return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(ALC_obj,getCurrentContext,return )

int ALC_obj::getError( Dynamic device){
	return ::lime::_backend::native::NativeCFFI_obj::cffi_lime_alc_get_error.call(hx::DynamicPtr(device));
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(ALC_obj,getError,return )

::String ALC_obj::getErrorString( Dynamic device){
	::String tmp;
	{
		Dynamic tmp1 = device;
		int tmp2 = ::lime::media::openal::ALC_obj::getError(tmp1);
		int _g = tmp2;
		int tmp3 = _g;
		switch( (int)(tmp3)){
			case (int)40961: {
				tmp = HX_HCSTRING("INVALID_DEVICE: Invalid device (or no device?)","\x8d","\x16","\x8a","\x9d");
			}
			;break;
			case (int)40962: {
				tmp = HX_HCSTRING("INVALID_CONTEXT: Invalid context (or no context?)","\x56","\x39","\x91","\x8b");
			}
			;break;
			case (int)40963: {
				tmp = HX_HCSTRING("INVALID_ENUM: Invalid enum value","\x0a","\xd7","\xdf","\x59");
			}
			;break;
			case (int)40964: {
				tmp = HX_HCSTRING("INVALID_VALUE: Invalid param value","\xa6","\x0e","\x30","\x55");
			}
			;break;
			case (int)40965: {
				tmp = HX_HCSTRING("OUT_OF_MEMORY: OpenAL has run out of memory","\xb0","\xdd","\xfb","\x0a");
			}
			;break;
			default: {
				tmp = HX_HCSTRING("","\x00","\x00","\x00","\x00");
			}
		}
	}
	return tmp;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(ALC_obj,getErrorString,return )

Array< int > ALC_obj::getIntegerv( Dynamic device,int param,int size){
	return ((Dynamic)(::lime::_backend::native::NativeCFFI_obj::cffi_lime_alc_get_integerv.call(hx::DynamicPtr(device),param,size)));
}


STATIC_HX_DEFINE_DYNAMIC_FUNC3(ALC_obj,getIntegerv,return )

::String ALC_obj::getString( Dynamic device,int param){
	return ((Dynamic)(::lime::_backend::native::NativeCFFI_obj::cffi_lime_alc_get_string.call(hx::DynamicPtr(device),param)));
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(ALC_obj,getString,return )

bool ALC_obj::makeContextCurrent( Dynamic context){
	return ::lime::_backend::native::NativeCFFI_obj::cffi_lime_alc_make_context_current.call(hx::DynamicPtr(context));
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(ALC_obj,makeContextCurrent,return )

Dynamic ALC_obj::openDevice( ::String deviceName){
	Dynamic tmp;
	{
		::hx::Object * inVal = ::lime::_backend::native::NativeCFFI_obj::cffi_lime_alc_open_device.call(deviceName);
		::hx::Object * tmp1 = inVal;
		::hx::Object * tmp2 = hx::DynamicPtr(tmp1);
		tmp = Dynamic(tmp2);
	}
	Dynamic handle = tmp;
	bool tmp1 = (handle != null());
	if ((tmp1)){
		Dynamic tmp2;
		{
			Dynamic handle1 = handle;
			tmp2 = handle1;
		}
		return tmp2;
	}
	return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(ALC_obj,openDevice,return )

Void ALC_obj::pauseDevice( Dynamic device){
{
		::lime::_backend::native::NativeCFFI_obj::cffi_lime_alc_pause_device.call(hx::DynamicPtr(device));
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(ALC_obj,pauseDevice,(void))

Void ALC_obj::processContext( Dynamic context){
{
		::lime::_backend::native::NativeCFFI_obj::cffi_lime_alc_process_context.call(hx::DynamicPtr(context));
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(ALC_obj,processContext,(void))

Void ALC_obj::resumeDevice( Dynamic device){
{
		::lime::_backend::native::NativeCFFI_obj::cffi_lime_alc_resume_device.call(hx::DynamicPtr(device));
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(ALC_obj,resumeDevice,(void))

Void ALC_obj::suspendContext( Dynamic context){
{
		::lime::_backend::native::NativeCFFI_obj::cffi_lime_alc_suspend_context.call(hx::DynamicPtr(context));
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(ALC_obj,suspendContext,(void))


ALC_obj::ALC_obj()
{
}

bool ALC_obj::__GetStatic(const ::String &inName, Dynamic &outValue, hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 8:
		if (HX_FIELD_EQ(inName,"getError") ) { outValue = getError_dyn(); return true;  }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"getString") ) { outValue = getString_dyn(); return true;  }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"openDevice") ) { outValue = openDevice_dyn(); return true;  }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"closeDevice") ) { outValue = closeDevice_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"getIntegerv") ) { outValue = getIntegerv_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"pauseDevice") ) { outValue = pauseDevice_dyn(); return true;  }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"resumeDevice") ) { outValue = resumeDevice_dyn(); return true;  }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"createContext") ) { outValue = createContext_dyn(); return true;  }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"destroyContext") ) { outValue = destroyContext_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"getErrorString") ) { outValue = getErrorString_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"processContext") ) { outValue = processContext_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"suspendContext") ) { outValue = suspendContext_dyn(); return true;  }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"getContextsDevice") ) { outValue = getContextsDevice_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"getCurrentContext") ) { outValue = getCurrentContext_dyn(); return true;  }
		break;
	case 18:
		if (HX_FIELD_EQ(inName,"makeContextCurrent") ) { outValue = makeContextCurrent_dyn(); return true;  }
	}
	return false;
}

#if HXCPP_SCRIPTABLE
static hx::StorageInfo *sMemberStorageInfo = 0;
static hx::StaticInfo sStaticStorageInfo[] = {
	{hx::fsInt,(void *) &ALC_obj::FALSE,HX_HCSTRING("FALSE","\x83","\x6d","\x3d","\x79")},
	{hx::fsInt,(void *) &ALC_obj::TRUE,HX_HCSTRING("TRUE","\x4e","\x6f","\xc4","\x37")},
	{hx::fsInt,(void *) &ALC_obj::FREQUENCY,HX_HCSTRING("FREQUENCY","\x7c","\xf2","\x42","\xb7")},
	{hx::fsInt,(void *) &ALC_obj::REFRESH,HX_HCSTRING("REFRESH","\xbb","\xad","\xf4","\x6c")},
	{hx::fsInt,(void *) &ALC_obj::SYNC,HX_HCSTRING("SYNC","\x5b","\x82","\x20","\x37")},
	{hx::fsInt,(void *) &ALC_obj::MONO_SOURCES,HX_HCSTRING("MONO_SOURCES","\xbc","\x3b","\x3c","\xad")},
	{hx::fsInt,(void *) &ALC_obj::STEREO_SOURCES,HX_HCSTRING("STEREO_SOURCES","\xd1","\x0f","\x99","\x60")},
	{hx::fsInt,(void *) &ALC_obj::NO_ERROR,HX_HCSTRING("NO_ERROR","\xea","\xb5","\x7d","\x2f")},
	{hx::fsInt,(void *) &ALC_obj::INVALID_DEVICE,HX_HCSTRING("INVALID_DEVICE","\x3e","\x84","\xa5","\x93")},
	{hx::fsInt,(void *) &ALC_obj::INVALID_CONTEXT,HX_HCSTRING("INVALID_CONTEXT","\x27","\xa1","\x3c","\xdf")},
	{hx::fsInt,(void *) &ALC_obj::INVALID_ENUM,HX_HCSTRING("INVALID_ENUM","\xa9","\x74","\x70","\x13")},
	{hx::fsInt,(void *) &ALC_obj::INVALID_VALUE,HX_HCSTRING("INVALID_VALUE","\xa9","\xe8","\x26","\xb0")},
	{hx::fsInt,(void *) &ALC_obj::OUT_OF_MEMORY,HX_HCSTRING("OUT_OF_MEMORY","\x18","\xf2","\x97","\xe1")},
	{hx::fsInt,(void *) &ALC_obj::ATTRIBUTES_SIZE,HX_HCSTRING("ATTRIBUTES_SIZE","\x69","\x7c","\x9f","\x17")},
	{hx::fsInt,(void *) &ALC_obj::ALL_ATTRIBUTES,HX_HCSTRING("ALL_ATTRIBUTES","\x95","\xe2","\x00","\x04")},
	{hx::fsInt,(void *) &ALC_obj::DEFAULT_DEVICE_SPECIFIER,HX_HCSTRING("DEFAULT_DEVICE_SPECIFIER","\x93","\xa5","\xbc","\xd9")},
	{hx::fsInt,(void *) &ALC_obj::DEVICE_SPECIFIER,HX_HCSTRING("DEVICE_SPECIFIER","\xf5","\xa8","\x61","\x21")},
	{hx::fsInt,(void *) &ALC_obj::EXTENSIONS,HX_HCSTRING("EXTENSIONS","\x14","\xf0","\x79","\x7b")},
	{hx::fsInt,(void *) &ALC_obj::ENUMERATE_ALL_EXT,HX_HCSTRING("ENUMERATE_ALL_EXT","\x88","\xff","\x7d","\xb7")},
	{hx::fsInt,(void *) &ALC_obj::DEFAULT_ALL_DEVICES_SPECIFIER,HX_HCSTRING("DEFAULT_ALL_DEVICES_SPECIFIER","\xc0","\xd6","\x77","\xd2")},
	{hx::fsInt,(void *) &ALC_obj::ALL_DEVICES_SPECIFIER,HX_HCSTRING("ALL_DEVICES_SPECIFIER","\x1e","\x50","\xc1","\xf5")},
	{ hx::fsUnknown, 0, null()}
};
#endif

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(ALC_obj::__mClass,"__mClass");
	HX_MARK_MEMBER_NAME(ALC_obj::FALSE,"FALSE");
	HX_MARK_MEMBER_NAME(ALC_obj::TRUE,"TRUE");
	HX_MARK_MEMBER_NAME(ALC_obj::FREQUENCY,"FREQUENCY");
	HX_MARK_MEMBER_NAME(ALC_obj::REFRESH,"REFRESH");
	HX_MARK_MEMBER_NAME(ALC_obj::SYNC,"SYNC");
	HX_MARK_MEMBER_NAME(ALC_obj::MONO_SOURCES,"MONO_SOURCES");
	HX_MARK_MEMBER_NAME(ALC_obj::STEREO_SOURCES,"STEREO_SOURCES");
	HX_MARK_MEMBER_NAME(ALC_obj::NO_ERROR,"NO_ERROR");
	HX_MARK_MEMBER_NAME(ALC_obj::INVALID_DEVICE,"INVALID_DEVICE");
	HX_MARK_MEMBER_NAME(ALC_obj::INVALID_CONTEXT,"INVALID_CONTEXT");
	HX_MARK_MEMBER_NAME(ALC_obj::INVALID_ENUM,"INVALID_ENUM");
	HX_MARK_MEMBER_NAME(ALC_obj::INVALID_VALUE,"INVALID_VALUE");
	HX_MARK_MEMBER_NAME(ALC_obj::OUT_OF_MEMORY,"OUT_OF_MEMORY");
	HX_MARK_MEMBER_NAME(ALC_obj::ATTRIBUTES_SIZE,"ATTRIBUTES_SIZE");
	HX_MARK_MEMBER_NAME(ALC_obj::ALL_ATTRIBUTES,"ALL_ATTRIBUTES");
	HX_MARK_MEMBER_NAME(ALC_obj::DEFAULT_DEVICE_SPECIFIER,"DEFAULT_DEVICE_SPECIFIER");
	HX_MARK_MEMBER_NAME(ALC_obj::DEVICE_SPECIFIER,"DEVICE_SPECIFIER");
	HX_MARK_MEMBER_NAME(ALC_obj::EXTENSIONS,"EXTENSIONS");
	HX_MARK_MEMBER_NAME(ALC_obj::ENUMERATE_ALL_EXT,"ENUMERATE_ALL_EXT");
	HX_MARK_MEMBER_NAME(ALC_obj::DEFAULT_ALL_DEVICES_SPECIFIER,"DEFAULT_ALL_DEVICES_SPECIFIER");
	HX_MARK_MEMBER_NAME(ALC_obj::ALL_DEVICES_SPECIFIER,"ALL_DEVICES_SPECIFIER");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(ALC_obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(ALC_obj::FALSE,"FALSE");
	HX_VISIT_MEMBER_NAME(ALC_obj::TRUE,"TRUE");
	HX_VISIT_MEMBER_NAME(ALC_obj::FREQUENCY,"FREQUENCY");
	HX_VISIT_MEMBER_NAME(ALC_obj::REFRESH,"REFRESH");
	HX_VISIT_MEMBER_NAME(ALC_obj::SYNC,"SYNC");
	HX_VISIT_MEMBER_NAME(ALC_obj::MONO_SOURCES,"MONO_SOURCES");
	HX_VISIT_MEMBER_NAME(ALC_obj::STEREO_SOURCES,"STEREO_SOURCES");
	HX_VISIT_MEMBER_NAME(ALC_obj::NO_ERROR,"NO_ERROR");
	HX_VISIT_MEMBER_NAME(ALC_obj::INVALID_DEVICE,"INVALID_DEVICE");
	HX_VISIT_MEMBER_NAME(ALC_obj::INVALID_CONTEXT,"INVALID_CONTEXT");
	HX_VISIT_MEMBER_NAME(ALC_obj::INVALID_ENUM,"INVALID_ENUM");
	HX_VISIT_MEMBER_NAME(ALC_obj::INVALID_VALUE,"INVALID_VALUE");
	HX_VISIT_MEMBER_NAME(ALC_obj::OUT_OF_MEMORY,"OUT_OF_MEMORY");
	HX_VISIT_MEMBER_NAME(ALC_obj::ATTRIBUTES_SIZE,"ATTRIBUTES_SIZE");
	HX_VISIT_MEMBER_NAME(ALC_obj::ALL_ATTRIBUTES,"ALL_ATTRIBUTES");
	HX_VISIT_MEMBER_NAME(ALC_obj::DEFAULT_DEVICE_SPECIFIER,"DEFAULT_DEVICE_SPECIFIER");
	HX_VISIT_MEMBER_NAME(ALC_obj::DEVICE_SPECIFIER,"DEVICE_SPECIFIER");
	HX_VISIT_MEMBER_NAME(ALC_obj::EXTENSIONS,"EXTENSIONS");
	HX_VISIT_MEMBER_NAME(ALC_obj::ENUMERATE_ALL_EXT,"ENUMERATE_ALL_EXT");
	HX_VISIT_MEMBER_NAME(ALC_obj::DEFAULT_ALL_DEVICES_SPECIFIER,"DEFAULT_ALL_DEVICES_SPECIFIER");
	HX_VISIT_MEMBER_NAME(ALC_obj::ALL_DEVICES_SPECIFIER,"ALL_DEVICES_SPECIFIER");
};

#endif

hx::Class ALC_obj::__mClass;

static ::String sStaticFields[] = {
	HX_HCSTRING("FALSE","\x83","\x6d","\x3d","\x79"),
	HX_HCSTRING("TRUE","\x4e","\x6f","\xc4","\x37"),
	HX_HCSTRING("FREQUENCY","\x7c","\xf2","\x42","\xb7"),
	HX_HCSTRING("REFRESH","\xbb","\xad","\xf4","\x6c"),
	HX_HCSTRING("SYNC","\x5b","\x82","\x20","\x37"),
	HX_HCSTRING("MONO_SOURCES","\xbc","\x3b","\x3c","\xad"),
	HX_HCSTRING("STEREO_SOURCES","\xd1","\x0f","\x99","\x60"),
	HX_HCSTRING("NO_ERROR","\xea","\xb5","\x7d","\x2f"),
	HX_HCSTRING("INVALID_DEVICE","\x3e","\x84","\xa5","\x93"),
	HX_HCSTRING("INVALID_CONTEXT","\x27","\xa1","\x3c","\xdf"),
	HX_HCSTRING("INVALID_ENUM","\xa9","\x74","\x70","\x13"),
	HX_HCSTRING("INVALID_VALUE","\xa9","\xe8","\x26","\xb0"),
	HX_HCSTRING("OUT_OF_MEMORY","\x18","\xf2","\x97","\xe1"),
	HX_HCSTRING("ATTRIBUTES_SIZE","\x69","\x7c","\x9f","\x17"),
	HX_HCSTRING("ALL_ATTRIBUTES","\x95","\xe2","\x00","\x04"),
	HX_HCSTRING("DEFAULT_DEVICE_SPECIFIER","\x93","\xa5","\xbc","\xd9"),
	HX_HCSTRING("DEVICE_SPECIFIER","\xf5","\xa8","\x61","\x21"),
	HX_HCSTRING("EXTENSIONS","\x14","\xf0","\x79","\x7b"),
	HX_HCSTRING("ENUMERATE_ALL_EXT","\x88","\xff","\x7d","\xb7"),
	HX_HCSTRING("DEFAULT_ALL_DEVICES_SPECIFIER","\xc0","\xd6","\x77","\xd2"),
	HX_HCSTRING("ALL_DEVICES_SPECIFIER","\x1e","\x50","\xc1","\xf5"),
	HX_HCSTRING("closeDevice","\x6e","\x02","\xc8","\x2b"),
	HX_HCSTRING("createContext","\x53","\x6e","\xba","\x01"),
	HX_HCSTRING("destroyContext","\x15","\x84","\xe3","\x85"),
	HX_HCSTRING("getContextsDevice","\x90","\xee","\x91","\x9c"),
	HX_HCSTRING("getCurrentContext","\xec","\xb9","\x7f","\x99"),
	HX_HCSTRING("getError","\x52","\xdb","\x00","\xd3"),
	HX_HCSTRING("getErrorString","\xc3","\xc1","\x3b","\x87"),
	HX_HCSTRING("getIntegerv","\xae","\x0b","\x1e","\x47"),
	HX_HCSTRING("getString","\x07","\xb2","\x86","\x8d"),
	HX_HCSTRING("makeContextCurrent","\x98","\x6c","\xce","\x94"),
	HX_HCSTRING("openDevice","\x00","\x48","\x14","\xbf"),
	HX_HCSTRING("pauseDevice","\x2c","\xc4","\x88","\x65"),
	HX_HCSTRING("processContext","\x40","\xd7","\xd5","\xcb"),
	HX_HCSTRING("resumeDevice","\x23","\xba","\x46","\x51"),
	HX_HCSTRING("suspendContext","\xd3","\xb5","\xbc","\xfe"),
	::String(null()) };

void ALC_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("lime.media.openal.ALC","\x02","\xc4","\xda","\x62");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &ALC_obj::__GetStatic;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(sStaticFields);
	__mClass->mMembers = hx::Class_obj::dupFunctions(0 /* sMemberFields */);
	__mClass->mCanCast = hx::TCanCast< ALC_obj >;
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

void ALC_obj::__boot()
{
	FALSE= (int)0;
	TRUE= (int)1;
	FREQUENCY= (int)4103;
	REFRESH= (int)4104;
	SYNC= (int)4105;
	MONO_SOURCES= (int)4112;
	STEREO_SOURCES= (int)4113;
	NO_ERROR= (int)0;
	INVALID_DEVICE= (int)40961;
	INVALID_CONTEXT= (int)40962;
	INVALID_ENUM= (int)40963;
	INVALID_VALUE= (int)40964;
	OUT_OF_MEMORY= (int)40965;
	ATTRIBUTES_SIZE= (int)4098;
	ALL_ATTRIBUTES= (int)4099;
	DEFAULT_DEVICE_SPECIFIER= (int)4100;
	DEVICE_SPECIFIER= (int)4101;
	EXTENSIONS= (int)4102;
	ENUMERATE_ALL_EXT= (int)1;
	DEFAULT_ALL_DEVICES_SPECIFIER= (int)4114;
	ALL_DEVICES_SPECIFIER= (int)4115;
}

} // end namespace lime
} // end namespace media
} // end namespace openal
