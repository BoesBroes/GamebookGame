#include <hxcpp.h>

#ifndef INCLUDED_lime__backend_native_NativeCFFI
#include <lime/_backend/native/NativeCFFI.h>
#endif
#ifndef INCLUDED_lime_system_JNIStaticField
#include <lime/system/JNIStaticField.h>
#endif
namespace lime{
namespace _system{

Void JNIStaticField_obj::__construct(Dynamic field)
{
HX_STACK_FRAME("lime.system.JNIStaticField","new",0x799b0c1f,"lime.system.JNIStaticField.new","lime/system/JNI.hx",255,0x21970b7f)
HX_STACK_THIS(this)
HX_STACK_ARG(field,"field")
{
	HX_STACK_LINE(255)
	this->field = field;
}
;
	return null();
}

//JNIStaticField_obj::~JNIStaticField_obj() { }

Dynamic JNIStaticField_obj::__CreateEmpty() { return  new JNIStaticField_obj; }
hx::ObjectPtr< JNIStaticField_obj > JNIStaticField_obj::__new(Dynamic field)
{  hx::ObjectPtr< JNIStaticField_obj > _result_ = new JNIStaticField_obj();
	_result_->__construct(field);
	return _result_;}

Dynamic JNIStaticField_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< JNIStaticField_obj > _result_ = new JNIStaticField_obj();
	_result_->__construct(inArgs[0]);
	return _result_;}

Dynamic JNIStaticField_obj::get( ){
	HX_STACK_FRAME("lime.system.JNIStaticField","get",0x7995bc55,"lime.system.JNIStaticField.get","lime/system/JNI.hx",263,0x21970b7f)
	HX_STACK_THIS(this)
	HX_STACK_LINE(263)
	return ((Dynamic)(::lime::_backend::native::NativeCFFI_obj::cffi_lime_jni_get_static.call(hx::DynamicPtr(this->field))));
}


HX_DEFINE_DYNAMIC_FUNC0(JNIStaticField_obj,get,return )

Dynamic JNIStaticField_obj::set( Dynamic value){
	HX_STACK_FRAME("lime.system.JNIStaticField","set",0x799ed761,"lime.system.JNIStaticField.set","lime/system/JNI.hx",271,0x21970b7f)
	HX_STACK_THIS(this)
	HX_STACK_ARG(value,"value")
	HX_STACK_LINE(274)
	::lime::_backend::native::NativeCFFI_obj::cffi_lime_jni_set_static.call(hx::DynamicPtr(this->field),hx::DynamicPtr(value));
	HX_STACK_LINE(276)
	Dynamic tmp = value;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(276)
	return tmp;
}


HX_DEFINE_DYNAMIC_FUNC1(JNIStaticField_obj,set,return )


JNIStaticField_obj::JNIStaticField_obj()
{
}

void JNIStaticField_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(JNIStaticField);
	HX_MARK_MEMBER_NAME(field,"field");
	HX_MARK_END_CLASS();
}

void JNIStaticField_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(field,"field");
}

Dynamic JNIStaticField_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
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

Dynamic JNIStaticField_obj::__SetField(const ::String &inName,const Dynamic &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"field") ) { field=inValue.Cast< Dynamic >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void JNIStaticField_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("field","\xba","\x94","\x93","\x00"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsObject /*Dynamic*/ ,(int)offsetof(JNIStaticField_obj,field),HX_HCSTRING("field","\xba","\x94","\x93","\x00")},
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
	HX_MARK_MEMBER_NAME(JNIStaticField_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(JNIStaticField_obj::__mClass,"__mClass");
};

#endif

hx::Class JNIStaticField_obj::__mClass;

void JNIStaticField_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("lime.system.JNIStaticField","\xad","\x10","\xc5","\x0e");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = hx::Class_obj::dupFunctions(sMemberFields);
	__mClass->mCanCast = hx::TCanCast< JNIStaticField_obj >;
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
