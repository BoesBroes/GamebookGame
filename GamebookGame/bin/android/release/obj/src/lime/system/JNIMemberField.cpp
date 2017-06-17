#include <hxcpp.h>

#ifndef INCLUDED_lime__backend_native_NativeCFFI
#include <lime/_backend/native/NativeCFFI.h>
#endif
#ifndef INCLUDED_lime_system_JNIMemberField
#include <lime/system/JNIMemberField.h>
#endif
namespace lime{
namespace _system{

Void JNIMemberField_obj::__construct(Dynamic field)
{
HX_STACK_FRAME("lime.system.JNIMemberField","new",0x7a00f0f3,"lime.system.JNIMemberField.new","lime/system/JNI.hx",215,0x21970b7f)
HX_STACK_THIS(this)
HX_STACK_ARG(field,"field")
{
	HX_STACK_LINE(215)
	this->field = field;
}
;
	return null();
}

//JNIMemberField_obj::~JNIMemberField_obj() { }

Dynamic JNIMemberField_obj::__CreateEmpty() { return  new JNIMemberField_obj; }
hx::ObjectPtr< JNIMemberField_obj > JNIMemberField_obj::__new(Dynamic field)
{  hx::ObjectPtr< JNIMemberField_obj > _result_ = new JNIMemberField_obj();
	_result_->__construct(field);
	return _result_;}

Dynamic JNIMemberField_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< JNIMemberField_obj > _result_ = new JNIMemberField_obj();
	_result_->__construct(inArgs[0]);
	return _result_;}

Dynamic JNIMemberField_obj::get( Dynamic jobject){
	HX_STACK_FRAME("lime.system.JNIMemberField","get",0x79fba129,"lime.system.JNIMemberField.get","lime/system/JNI.hx",223,0x21970b7f)
	HX_STACK_THIS(this)
	HX_STACK_ARG(jobject,"jobject")
	HX_STACK_LINE(223)
	return ((Dynamic)(::lime::_backend::native::NativeCFFI_obj::cffi_lime_jni_get_member.call(hx::DynamicPtr(this->field),hx::DynamicPtr(jobject))));
}


HX_DEFINE_DYNAMIC_FUNC1(JNIMemberField_obj,get,return )

Dynamic JNIMemberField_obj::set( Dynamic jobject,Dynamic value){
	HX_STACK_FRAME("lime.system.JNIMemberField","set",0x7a04bc35,"lime.system.JNIMemberField.set","lime/system/JNI.hx",231,0x21970b7f)
	HX_STACK_THIS(this)
	HX_STACK_ARG(jobject,"jobject")
	HX_STACK_ARG(value,"value")
	HX_STACK_LINE(234)
	::lime::_backend::native::NativeCFFI_obj::cffi_lime_jni_set_member.call(hx::DynamicPtr(this->field),hx::DynamicPtr(jobject),hx::DynamicPtr(value));
	HX_STACK_LINE(236)
	Dynamic tmp = value;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(236)
	return tmp;
}


HX_DEFINE_DYNAMIC_FUNC2(JNIMemberField_obj,set,return )


JNIMemberField_obj::JNIMemberField_obj()
{
}

void JNIMemberField_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(JNIMemberField);
	HX_MARK_MEMBER_NAME(field,"field");
	HX_MARK_END_CLASS();
}

void JNIMemberField_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(field,"field");
}

Dynamic JNIMemberField_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"get") ) { return get_dyn(); }
		if (HX_FIELD_EQ(inName,"set") ) { return set_dyn(); }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"field") ) { return field; }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic JNIMemberField_obj::__SetField(const ::String &inName,const Dynamic &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"field") ) { field=inValue.Cast< Dynamic >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void JNIMemberField_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("field","\xba","\x94","\x93","\x00"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsObject /*Dynamic*/ ,(int)offsetof(JNIMemberField_obj,field),HX_HCSTRING("field","\xba","\x94","\x93","\x00")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo *sStaticStorageInfo = 0;
#endif

static ::String sMemberFields[] = {
	HX_HCSTRING("field","\xba","\x94","\x93","\x00"),
	HX_HCSTRING("get","\x96","\x80","\x4e","\x00"),
	HX_HCSTRING("set","\xa2","\x9b","\x57","\x00"),
	::String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(JNIMemberField_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(JNIMemberField_obj::__mClass,"__mClass");
};

#endif

hx::Class JNIMemberField_obj::__mClass;

void JNIMemberField_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("lime.system.JNIMemberField","\x81","\xfb","\xfa","\xfb");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = hx::Class_obj::dupFunctions(sMemberFields);
	__mClass->mCanCast = hx::TCanCast< JNIMemberField_obj >;
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
