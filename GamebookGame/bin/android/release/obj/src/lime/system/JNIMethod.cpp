#include <hxcpp.h>

#ifndef INCLUDED_Reflect
#include <Reflect.h>
#endif
#ifndef INCLUDED_lime__backend_native_NativeCFFI
#include <lime/_backend/native/NativeCFFI.h>
#endif
#ifndef INCLUDED_lime_system_JNIMethod
#include <lime/system/JNIMethod.h>
#endif
namespace lime{
namespace _system{

Void JNIMethod_obj::__construct(Dynamic method)
{
HX_STACK_FRAME("lime.system.JNIMethod","new",0xca67a7f2,"lime.system.JNIMethod.new","lime/system/JNI.hx",295,0x21970b7f)
HX_STACK_THIS(this)
HX_STACK_ARG(method,"method")
{
	HX_STACK_LINE(295)
	this->method = method;
}
;
	return null();
}

//JNIMethod_obj::~JNIMethod_obj() { }

Dynamic JNIMethod_obj::__CreateEmpty() { return  new JNIMethod_obj; }
hx::ObjectPtr< JNIMethod_obj > JNIMethod_obj::__new(Dynamic method)
{  hx::ObjectPtr< JNIMethod_obj > _result_ = new JNIMethod_obj();
	_result_->__construct(method);
	return _result_;}

Dynamic JNIMethod_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< JNIMethod_obj > _result_ = new JNIMethod_obj();
	_result_->__construct(inArgs[0]);
	return _result_;}

Dynamic JNIMethod_obj::callMember( cpp::ArrayBase args){
	HX_STACK_FRAME("lime.system.JNIMethod","callMember",0x1acfd846,"lime.system.JNIMethod.callMember","lime/system/JNI.hx",299,0x21970b7f)
	HX_STACK_THIS(this)
	HX_STACK_ARG(args,"args")
	HX_STACK_LINE(302)
	Dynamic tmp = args->__Field(HX_HCSTRING("shift","\x82","\xec","\x22","\x7c"), hx::paccDynamic )();		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(302)
	Dynamic jobject = tmp;		HX_STACK_VAR(jobject,"jobject");
	HX_STACK_LINE(303)
	return ((Dynamic)(::lime::_backend::native::NativeCFFI_obj::cffi_lime_jni_call_member.call(hx::DynamicPtr(this->method),hx::DynamicPtr(jobject),hx::DynamicPtr(args))));
}


HX_DEFINE_DYNAMIC_FUNC1(JNIMethod_obj,callMember,return )

Dynamic JNIMethod_obj::callStatic( cpp::ArrayBase args){
	HX_STACK_FRAME("lime.system.JNIMethod","callStatic",0x1c15d29a,"lime.system.JNIMethod.callStatic","lime/system/JNI.hx",314,0x21970b7f)
	HX_STACK_THIS(this)
	HX_STACK_ARG(args,"args")
	HX_STACK_LINE(314)
	return ((Dynamic)(::lime::_backend::native::NativeCFFI_obj::cffi_lime_jni_call_static.call(hx::DynamicPtr(this->method),hx::DynamicPtr(args))));
}


HX_DEFINE_DYNAMIC_FUNC1(JNIMethod_obj,callStatic,return )

Dynamic JNIMethod_obj::getMemberMethod( bool useArray){
	HX_STACK_FRAME("lime.system.JNIMethod","getMemberMethod",0x7872cd23,"lime.system.JNIMethod.getMemberMethod","lime/system/JNI.hx",322,0x21970b7f)
	HX_STACK_THIS(this)
	HX_STACK_ARG(useArray,"useArray")
	HX_STACK_LINE(324)
	bool tmp = useArray;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(324)
	if ((tmp)){
		HX_STACK_LINE(326)
		Dynamic tmp1 = this->callMember_dyn();		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(326)
		return tmp1;
	}
	else{
		HX_STACK_LINE(330)
		Dynamic tmp1 = this->callMember_dyn();		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(330)
		Dynamic tmp2 = ::Reflect_obj::makeVarArgs(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(330)
		return tmp2;
	}
	HX_STACK_LINE(324)
	return null();
}


HX_DEFINE_DYNAMIC_FUNC1(JNIMethod_obj,getMemberMethod,return )

Dynamic JNIMethod_obj::getStaticMethod( bool useArray){
	HX_STACK_FRAME("lime.system.JNIMethod","getStaticMethod",0xd67b3e77,"lime.system.JNIMethod.getStaticMethod","lime/system/JNI.hx",337,0x21970b7f)
	HX_STACK_THIS(this)
	HX_STACK_ARG(useArray,"useArray")
	HX_STACK_LINE(339)
	bool tmp = useArray;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(339)
	if ((tmp)){
		HX_STACK_LINE(341)
		Dynamic tmp1 = this->callStatic_dyn();		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(341)
		return tmp1;
	}
	else{
		HX_STACK_LINE(345)
		Dynamic tmp1 = this->callStatic_dyn();		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(345)
		Dynamic tmp2 = ::Reflect_obj::makeVarArgs(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(345)
		return tmp2;
	}
	HX_STACK_LINE(339)
	return null();
}


HX_DEFINE_DYNAMIC_FUNC1(JNIMethod_obj,getStaticMethod,return )


JNIMethod_obj::JNIMethod_obj()
{
}

void JNIMethod_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(JNIMethod);
	HX_MARK_MEMBER_NAME(method,"method");
	HX_MARK_END_CLASS();
}

void JNIMethod_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(method,"method");
}

Dynamic JNIMethod_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 6:
		if (HX_FIELD_EQ(inName,"method") ) { return method; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"callMember") ) { return callMember_dyn(); }
		if (HX_FIELD_EQ(inName,"callStatic") ) { return callStatic_dyn(); }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"getMemberMethod") ) { return getMemberMethod_dyn(); }
		if (HX_FIELD_EQ(inName,"getStaticMethod") ) { return getStaticMethod_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic JNIMethod_obj::__SetField(const ::String &inName,const Dynamic &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 6:
		if (HX_FIELD_EQ(inName,"method") ) { method=inValue.Cast< Dynamic >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void JNIMethod_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("method","\xe1","\xf6","\x5a","\x09"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsObject /*Dynamic*/ ,(int)offsetof(JNIMethod_obj,method),HX_HCSTRING("method","\xe1","\xf6","\x5a","\x09")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo *sStaticStorageInfo = 0;
#endif

static ::String sMemberFields[] = {
	HX_HCSTRING("method","\xe1","\xf6","\x5a","\x09"),
	HX_HCSTRING("callMember","\x98","\xb9","\xe5","\x2f"),
	HX_HCSTRING("callStatic","\xec","\xb3","\x2b","\x31"),
	HX_HCSTRING("getMemberMethod","\x91","\xe2","\xb0","\xec"),
	HX_HCSTRING("getStaticMethod","\xe5","\x53","\xb9","\x4a"),
	::String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(JNIMethod_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(JNIMethod_obj::__mClass,"__mClass");
};

#endif

hx::Class JNIMethod_obj::__mClass;

void JNIMethod_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("lime.system.JNIMethod","\x00","\x87","\x5c","\xb5");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = hx::Class_obj::dupFunctions(sMemberFields);
	__mClass->mCanCast = hx::TCanCast< JNIMethod_obj >;
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

} // end namespace lime
} // end namespace system
