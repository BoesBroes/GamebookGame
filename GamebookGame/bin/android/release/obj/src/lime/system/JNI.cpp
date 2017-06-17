#include <hxcpp.h>

#ifndef INCLUDED_Reflect
#include <Reflect.h>
#endif
#ifndef INCLUDED_Std
#include <Std.h>
#endif
#ifndef INCLUDED_haxe_IMap
#include <haxe/IMap.h>
#endif
#ifndef INCLUDED_haxe_Log
#include <haxe/Log.h>
#endif
#ifndef INCLUDED_haxe_ds_StringMap
#include <haxe/ds/StringMap.h>
#endif
#ifndef INCLUDED_lime__backend_native_NativeCFFI
#include <lime/_backend/native/NativeCFFI.h>
#endif
#ifndef INCLUDED_lime_system_CFFI
#include <lime/system/CFFI.h>
#endif
#ifndef INCLUDED_lime_system_JNI
#include <lime/system/JNI.h>
#endif
#ifndef INCLUDED_lime_system_JNIMemberField
#include <lime/system/JNIMemberField.h>
#endif
#ifndef INCLUDED_lime_system_JNIMethod
#include <lime/system/JNIMethod.h>
#endif
#ifndef INCLUDED_lime_system_JNIStaticField
#include <lime/system/JNIStaticField.h>
#endif
namespace lime{
namespace _system{

Void JNI_obj::__construct()
{
	return null();
}

//JNI_obj::~JNI_obj() { }

Dynamic JNI_obj::__CreateEmpty() { return  new JNI_obj; }
hx::ObjectPtr< JNI_obj > JNI_obj::__new()
{  hx::ObjectPtr< JNI_obj > _result_ = new JNI_obj();
	_result_->__construct();
	return _result_;}

Dynamic JNI_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< JNI_obj > _result_ = new JNI_obj();
	_result_->__construct();
	return _result_;}

::haxe::ds::StringMap JNI_obj::alreadyCreated;

bool JNI_obj::initialized;

Dynamic JNI_obj::callMember( Dynamic method,Dynamic jobject,cpp::ArrayBase a){
	int _g = a->__Field(HX_HCSTRING("length","\xe6","\x94","\x07","\x9f"), hx::paccDynamic );
	int tmp = _g;
	switch( (int)(tmp)){
		case (int)0: {
			Dynamic tmp1 = method(jobject);
			return tmp1;
		}
		;break;
		case (int)1: {
			Dynamic tmp1 = method(jobject,a->__GetItem((int)0));
			return tmp1;
		}
		;break;
		case (int)2: {
			Dynamic tmp1 = method(jobject,a->__GetItem((int)0),a->__GetItem((int)1));
			return tmp1;
		}
		;break;
		case (int)3: {
			Dynamic tmp1 = method(jobject,a->__GetItem((int)0),a->__GetItem((int)1),a->__GetItem((int)2));
			return tmp1;
		}
		;break;
		case (int)4: {
			Dynamic tmp1 = method(jobject,a->__GetItem((int)0),a->__GetItem((int)1),a->__GetItem((int)2),a->__GetItem((int)3));
			return tmp1;
		}
		;break;
		case (int)5: {
			Dynamic tmp1 = method(jobject,a->__GetItem((int)0),a->__GetItem((int)1),a->__GetItem((int)2),a->__GetItem((int)3),a->__GetItem((int)4));
			return tmp1;
		}
		;break;
		case (int)6: {
			Dynamic tmp1 = method(jobject,a->__GetItem((int)0),a->__GetItem((int)1),a->__GetItem((int)2),a->__GetItem((int)3),a->__GetItem((int)4),a->__GetItem((int)5));
			return tmp1;
		}
		;break;
		case (int)7: {
			Dynamic tmp1 = method(jobject,a->__GetItem((int)0),a->__GetItem((int)1),a->__GetItem((int)2),a->__GetItem((int)3),a->__GetItem((int)4),a->__GetItem((int)5),a->__GetItem((int)6));
			return tmp1;
		}
		;break;
		default: {
			return null();
		}
	}
	return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC3(JNI_obj,callMember,return )

Dynamic JNI_obj::callStatic( Dynamic method,cpp::ArrayBase a){
	int _g = a->__Field(HX_HCSTRING("length","\xe6","\x94","\x07","\x9f"), hx::paccDynamic );
	int tmp = _g;
	switch( (int)(tmp)){
		case (int)0: {
			Dynamic tmp1 = method();
			return tmp1;
		}
		;break;
		case (int)1: {
			Dynamic tmp1 = method(a->__GetItem((int)0));
			return tmp1;
		}
		;break;
		case (int)2: {
			Dynamic tmp1 = method(a->__GetItem((int)0),a->__GetItem((int)1));
			return tmp1;
		}
		;break;
		case (int)3: {
			Dynamic tmp1 = method(a->__GetItem((int)0),a->__GetItem((int)1),a->__GetItem((int)2));
			return tmp1;
		}
		;break;
		case (int)4: {
			Dynamic tmp1 = method(a->__GetItem((int)0),a->__GetItem((int)1),a->__GetItem((int)2),a->__GetItem((int)3));
			return tmp1;
		}
		;break;
		case (int)5: {
			Dynamic tmp1 = method(a->__GetItem((int)0),a->__GetItem((int)1),a->__GetItem((int)2),a->__GetItem((int)3),a->__GetItem((int)4));
			return tmp1;
		}
		;break;
		case (int)6: {
			Dynamic tmp1 = method(a->__GetItem((int)0),a->__GetItem((int)1),a->__GetItem((int)2),a->__GetItem((int)3),a->__GetItem((int)4),a->__GetItem((int)5));
			return tmp1;
		}
		;break;
		case (int)7: {
			Dynamic tmp1 = method(a->__GetItem((int)0),a->__GetItem((int)1),a->__GetItem((int)2),a->__GetItem((int)3),a->__GetItem((int)4),a->__GetItem((int)5),a->__GetItem((int)6));
			return tmp1;
		}
		;break;
		default: {
			return null();
		}
	}
	return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(JNI_obj,callStatic,return )

::lime::_system::JNIMemberField JNI_obj::createMemberField( ::String className,::String memberName,::String signature){
	::lime::_system::JNI_obj::init();
	::lime::_system::JNIMemberField tmp = ::lime::_system::JNIMemberField_obj::__new(((Dynamic)(::lime::_backend::native::NativeCFFI_obj::cffi_lime_jni_create_field.call(className,memberName,signature,false))));
	return tmp;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC3(JNI_obj,createMemberField,return )

Dynamic JNI_obj::createMemberMethod( ::String className,::String memberName,::String signature,hx::Null< bool >  __o_useArray,hx::Null< bool >  __o_quietFail){
bool useArray = __o_useArray.Default(false);
bool quietFail = __o_quietFail.Default(false);
{
		::lime::_system::JNI_obj::init();
		::String tmp = className.split(HX_HCSTRING(".","\x2e","\x00","\x00","\x00"))->join(HX_HCSTRING("/","\x2f","\x00","\x00","\x00"));
		className = tmp;
		Dynamic handle = ((Dynamic)(::lime::_backend::native::NativeCFFI_obj::cffi_lime_jni_create_method.call(className,memberName,signature,false,quietFail)));
		bool tmp1 = (handle == null());
		if ((tmp1)){
			bool tmp2 = quietFail;
			if ((tmp2)){
				return null();
			}
			::String tmp3 = (HX_HCSTRING("Could not find member function \"","\xc5","\x79","\x42","\xb4") + memberName);
			::String tmp4 = (tmp3 + HX_HCSTRING("\"","\x22","\x00","\x00","\x00"));
			HX_STACK_DO_THROW(tmp4);
		}
		::lime::_system::JNIMethod tmp2 = ::lime::_system::JNIMethod_obj::__new(handle);
		::lime::_system::JNIMethod method = tmp2;
		bool tmp3 = useArray;
		Dynamic tmp4 = method->__Field(HX_HCSTRING("getMemberMethod","\x91","\xe2","\xb0","\xec"), hx::paccDynamic )(tmp3);
		return tmp4;
	}
}


STATIC_HX_DEFINE_DYNAMIC_FUNC5(JNI_obj,createMemberMethod,return )

::lime::_system::JNIStaticField JNI_obj::createStaticField( ::String className,::String memberName,::String signature){
	::lime::_system::JNI_obj::init();
	::lime::_system::JNIStaticField tmp = ::lime::_system::JNIStaticField_obj::__new(((Dynamic)(::lime::_backend::native::NativeCFFI_obj::cffi_lime_jni_create_field.call(className,memberName,signature,true))));
	return tmp;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC3(JNI_obj,createStaticField,return )

Dynamic JNI_obj::createStaticMethod( ::String className,::String memberName,::String signature,hx::Null< bool >  __o_useArray,hx::Null< bool >  __o_quietFail){
bool useArray = __o_useArray.Default(false);
bool quietFail = __o_quietFail.Default(false);
{
		::lime::_system::JNI_obj::init();
		::String tmp = className.split(HX_HCSTRING(".","\x2e","\x00","\x00","\x00"))->join(HX_HCSTRING("/","\x2f","\x00","\x00","\x00"));
		className = tmp;
		Dynamic handle = ((Dynamic)(::lime::_backend::native::NativeCFFI_obj::cffi_lime_jni_create_method.call(className,memberName,signature,true,quietFail)));
		bool tmp1 = (handle == null());
		if ((tmp1)){
			bool tmp2 = quietFail;
			if ((tmp2)){
				return null();
			}
			::String tmp3 = (HX_HCSTRING("Could not find static function \"","\xf1","\xb7","\xfa","\x62") + memberName);
			::String tmp4 = (tmp3 + HX_HCSTRING("\"","\x22","\x00","\x00","\x00"));
			HX_STACK_DO_THROW(tmp4);
		}
		::lime::_system::JNIMethod tmp2 = ::lime::_system::JNIMethod_obj::__new(handle);
		::lime::_system::JNIMethod method = tmp2;
		bool tmp3 = useArray;
		Dynamic tmp4 = method->__Field(HX_HCSTRING("getStaticMethod","\xe5","\x53","\xb9","\x4a"), hx::paccDynamic )(tmp3);
		return tmp4;
	}
}


STATIC_HX_DEFINE_DYNAMIC_FUNC5(JNI_obj,createStaticMethod,return )

Dynamic JNI_obj::getEnv( ){
	::lime::_system::JNI_obj::init();
	return ::lime::_backend::native::NativeCFFI_obj::cffi_lime_jni_get_env.call();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(JNI_obj,getEnv,return )

Void JNI_obj::init( ){
{
		bool tmp = ::lime::_system::JNI_obj::initialized;
		bool tmp1 = !(tmp);
		if ((tmp1)){
			::lime::_system::JNI_obj::initialized = true;
			Dynamic tmp2;
			{
				bool lazy = false;
				bool tmp3 = lazy;
				tmp2 = ::lime::_system::CFFI_obj::load(HX_HCSTRING("lime","\x15","\x17","\xb3","\x47"),HX_HCSTRING("lime_jni_init_callback","\x50","\xaf","\x63","\x63"),(int)1,tmp3);
			}
			Dynamic method = tmp2;
			Dynamic tmp3 = ::lime::_system::JNI_obj::onCallback_dyn();
			method(tmp3);
		}
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(JNI_obj,init,(void))

Dynamic JNI_obj::onCallback( Dynamic object,Dynamic method,Dynamic args){
	Dynamic tmp = object;
	Dynamic tmp1 = method;
	Dynamic tmp2 = ::Reflect_obj::field(tmp,tmp1);
	Dynamic field = tmp2;
	bool tmp3 = (field != null());
	if ((tmp3)){
		Dynamic tmp4 = object;
		Dynamic tmp5 = field;
		Dynamic tmp6 = args;
		Dynamic tmp7 = ::Reflect_obj::callMethod(tmp4,tmp5,tmp6);
		return tmp7;
	}
	Dynamic tmp4 = method;
	::String tmp5 = ::Std_obj::string(tmp4);
	::String tmp6 = (HX_HCSTRING("onCallback - unknown field ","\x2b","\x28","\x2a","\x3c") + tmp5);
	Dynamic tmp7 = hx::SourceInfo(HX_HCSTRING("JNI.hx","\xd9","\xc8","\x0d","\xb0"),182,HX_HCSTRING("lime.system.JNI","\xbf","\x02","\xfc","\x60"),HX_HCSTRING("onCallback","\x04","\x6e","\xbd","\x5c"));
	::haxe::Log_obj::trace(tmp6,tmp7);
	return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC3(JNI_obj,onCallback,return )

Void JNI_obj::postUICallback( Dynamic callback){
{
		::lime::_backend::native::NativeCFFI_obj::cffi_lime_jni_post_ui_callback.call(hx::DynamicPtr(callback));
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(JNI_obj,postUICallback,(void))


JNI_obj::JNI_obj()
{
}

bool JNI_obj::__GetStatic(const ::String &inName, Dynamic &outValue, hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"init") ) { outValue = init_dyn(); return true;  }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"getEnv") ) { outValue = getEnv_dyn(); return true;  }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"callMember") ) { outValue = callMember_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"callStatic") ) { outValue = callStatic_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"onCallback") ) { outValue = onCallback_dyn(); return true;  }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"initialized") ) { outValue = initialized; return true;  }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"alreadyCreated") ) { outValue = alreadyCreated; return true;  }
		if (HX_FIELD_EQ(inName,"postUICallback") ) { outValue = postUICallback_dyn(); return true;  }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"createMemberField") ) { outValue = createMemberField_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"createStaticField") ) { outValue = createStaticField_dyn(); return true;  }
		break;
	case 18:
		if (HX_FIELD_EQ(inName,"createMemberMethod") ) { outValue = createMemberMethod_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"createStaticMethod") ) { outValue = createStaticMethod_dyn(); return true;  }
	}
	return false;
}

bool JNI_obj::__SetStatic(const ::String &inName,Dynamic &ioValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 11:
		if (HX_FIELD_EQ(inName,"initialized") ) { initialized=ioValue.Cast< bool >(); return true; }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"alreadyCreated") ) { alreadyCreated=ioValue.Cast< ::haxe::ds::StringMap >(); return true; }
	}
	return false;
}

#if HXCPP_SCRIPTABLE
static hx::StorageInfo *sMemberStorageInfo = 0;
static hx::StaticInfo sStaticStorageInfo[] = {
	{hx::fsObject /*::haxe::ds::StringMap*/ ,(void *) &JNI_obj::alreadyCreated,HX_HCSTRING("alreadyCreated","\x30","\xe9","\xf8","\x79")},
	{hx::fsBool,(void *) &JNI_obj::initialized,HX_HCSTRING("initialized","\x14","\xf5","\x0f","\x37")},
	{ hx::fsUnknown, 0, null()}
};
#endif

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(JNI_obj::__mClass,"__mClass");
	HX_MARK_MEMBER_NAME(JNI_obj::alreadyCreated,"alreadyCreated");
	HX_MARK_MEMBER_NAME(JNI_obj::initialized,"initialized");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(JNI_obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(JNI_obj::alreadyCreated,"alreadyCreated");
	HX_VISIT_MEMBER_NAME(JNI_obj::initialized,"initialized");
};

#endif

hx::Class JNI_obj::__mClass;

static ::String sStaticFields[] = {
	HX_HCSTRING("alreadyCreated","\x30","\xe9","\xf8","\x79"),
	HX_HCSTRING("initialized","\x14","\xf5","\x0f","\x37"),
	HX_HCSTRING("callMember","\x98","\xb9","\xe5","\x2f"),
	HX_HCSTRING("callStatic","\xec","\xb3","\x2b","\x31"),
	HX_HCSTRING("createMemberField","\x64","\x36","\x37","\x55"),
	HX_HCSTRING("createMemberMethod","\xf7","\xc9","\xe4","\xc3"),
	HX_HCSTRING("createStaticField","\x90","\x4b","\x01","\x68"),
	HX_HCSTRING("createStaticMethod","\x4b","\x3b","\xed","\x21"),
	HX_HCSTRING("getEnv","\xf7","\x3c","\x1c","\xa3"),
	HX_HCSTRING("init","\x10","\x3b","\xbb","\x45"),
	HX_HCSTRING("onCallback","\x04","\x6e","\xbd","\x5c"),
	HX_HCSTRING("postUICallback","\x99","\xd0","\x5a","\xb0"),
	::String(null()) };

void JNI_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("lime.system.JNI","\xbf","\x02","\xfc","\x60");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &JNI_obj::__GetStatic;
	__mClass->mSetStaticField = &JNI_obj::__SetStatic;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(sStaticFields);
	__mClass->mMembers = hx::Class_obj::dupFunctions(0 /* sMemberFields */);
	__mClass->mCanCast = hx::TCanCast< JNI_obj >;
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

void JNI_obj::__boot()
{
struct _Function_0_1{
	inline static ::haxe::ds::StringMap Block( ){
		{
			::haxe::ds::StringMap tmp = ::haxe::ds::StringMap_obj::__new();
			::haxe::ds::StringMap tmp1 = tmp;
			return tmp1;
		}
		return null();
	}
};
	alreadyCreated= _Function_0_1::Block();
	initialized= false;
}

} // end namespace lime
} // end namespace system
