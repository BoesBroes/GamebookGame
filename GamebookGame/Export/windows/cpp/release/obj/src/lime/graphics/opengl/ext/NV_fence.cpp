#include <hxcpp.h>

#ifndef INCLUDED_lime_graphics_opengl_ext_NV_fence
#include <lime/graphics/opengl/ext/NV_fence.h>
#endif
namespace lime{
namespace graphics{
namespace opengl{
namespace ext{

Void NV_fence_obj::__construct()
{
HX_STACK_FRAME("lime.graphics.opengl.ext.NV_fence","new",0xb5233fce,"lime.graphics.opengl.ext.NV_fence.new","lime/graphics/opengl/ext/NV_fence.hx",6,0x47c92a00)
HX_STACK_THIS(this)
{
	HX_STACK_LINE(11)
	this->FENCE_CONDITION_NV = (int)34036;
	HX_STACK_LINE(10)
	this->FENCE_STATUS_NV = (int)34035;
	HX_STACK_LINE(9)
	this->ALL_COMPLETED_NV = (int)34034;
}
;
	return null();
}

//NV_fence_obj::~NV_fence_obj() { }

Dynamic NV_fence_obj::__CreateEmpty() { return  new NV_fence_obj; }
hx::ObjectPtr< NV_fence_obj > NV_fence_obj::__new()
{  hx::ObjectPtr< NV_fence_obj > _result_ = new NV_fence_obj();
	_result_->__construct();
	return _result_;}

Dynamic NV_fence_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< NV_fence_obj > _result_ = new NV_fence_obj();
	_result_->__construct();
	return _result_;}


NV_fence_obj::NV_fence_obj()
{
}

Dynamic NV_fence_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 15:
		if (HX_FIELD_EQ(inName,"FENCE_STATUS_NV") ) { return FENCE_STATUS_NV; }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"ALL_COMPLETED_NV") ) { return ALL_COMPLETED_NV; }
		break;
	case 18:
		if (HX_FIELD_EQ(inName,"FENCE_CONDITION_NV") ) { return FENCE_CONDITION_NV; }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic NV_fence_obj::__SetField(const ::String &inName,const Dynamic &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 15:
		if (HX_FIELD_EQ(inName,"FENCE_STATUS_NV") ) { FENCE_STATUS_NV=inValue.Cast< int >(); return inValue; }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"ALL_COMPLETED_NV") ) { ALL_COMPLETED_NV=inValue.Cast< int >(); return inValue; }
		break;
	case 18:
		if (HX_FIELD_EQ(inName,"FENCE_CONDITION_NV") ) { FENCE_CONDITION_NV=inValue.Cast< int >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void NV_fence_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("ALL_COMPLETED_NV","\x1a","\xef","\x82","\xe5"));
	outFields->push(HX_HCSTRING("FENCE_STATUS_NV","\x07","\xcc","\xce","\x38"));
	outFields->push(HX_HCSTRING("FENCE_CONDITION_NV","\x7a","\x2d","\x3f","\xca"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsInt,(int)offsetof(NV_fence_obj,ALL_COMPLETED_NV),HX_HCSTRING("ALL_COMPLETED_NV","\x1a","\xef","\x82","\xe5")},
	{hx::fsInt,(int)offsetof(NV_fence_obj,FENCE_STATUS_NV),HX_HCSTRING("FENCE_STATUS_NV","\x07","\xcc","\xce","\x38")},
	{hx::fsInt,(int)offsetof(NV_fence_obj,FENCE_CONDITION_NV),HX_HCSTRING("FENCE_CONDITION_NV","\x7a","\x2d","\x3f","\xca")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo *sStaticStorageInfo = 0;
#endif

static ::String sMemberFields[] = {
	HX_HCSTRING("ALL_COMPLETED_NV","\x1a","\xef","\x82","\xe5"),
	HX_HCSTRING("FENCE_STATUS_NV","\x07","\xcc","\xce","\x38"),
	HX_HCSTRING("FENCE_CONDITION_NV","\x7a","\x2d","\x3f","\xca"),
	::String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(NV_fence_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(NV_fence_obj::__mClass,"__mClass");
};

#endif

hx::Class NV_fence_obj::__mClass;

void NV_fence_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("lime.graphics.opengl.ext.NV_fence","\xdc","\x00","\x40","\xca");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = hx::Class_obj::dupFunctions(sMemberFields);
	__mClass->mCanCast = hx::TCanCast< NV_fence_obj >;
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
} // end namespace graphics
} // end namespace opengl
} // end namespace ext
