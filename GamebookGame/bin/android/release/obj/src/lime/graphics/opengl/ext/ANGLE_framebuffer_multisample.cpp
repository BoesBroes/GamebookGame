#include <hxcpp.h>

#ifndef INCLUDED_lime_graphics_opengl_ext_ANGLE_framebuffer_multisample
#include <lime/graphics/opengl/ext/ANGLE_framebuffer_multisample.h>
#endif
namespace lime{
namespace graphics{
namespace opengl{
namespace ext{

Void ANGLE_framebuffer_multisample_obj::__construct()
{
HX_STACK_FRAME("lime.graphics.opengl.ext.ANGLE_framebuffer_multisample","new",0x237bdc95,"lime.graphics.opengl.ext.ANGLE_framebuffer_multisample.new","lime/graphics/opengl/ext/ANGLE_framebuffer_multisample.hx",6,0x48b2bd1d)
HX_STACK_THIS(this)
{
	HX_STACK_LINE(11)
	this->MAX_SAMPLES_ANGLE = (int)36183;
	HX_STACK_LINE(10)
	this->FRAMEBUFFER_INCOMPLETE_MULTISAMPLE_ANGLE = (int)36182;
	HX_STACK_LINE(9)
	this->RENDERBUFFER_SAMPLES_ANGLE = (int)36011;
}
;
	return null();
}

//ANGLE_framebuffer_multisample_obj::~ANGLE_framebuffer_multisample_obj() { }

Dynamic ANGLE_framebuffer_multisample_obj::__CreateEmpty() { return  new ANGLE_framebuffer_multisample_obj; }
hx::ObjectPtr< ANGLE_framebuffer_multisample_obj > ANGLE_framebuffer_multisample_obj::__new()
{  hx::ObjectPtr< ANGLE_framebuffer_multisample_obj > _result_ = new ANGLE_framebuffer_multisample_obj();
	_result_->__construct();
	return _result_;}

Dynamic ANGLE_framebuffer_multisample_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< ANGLE_framebuffer_multisample_obj > _result_ = new ANGLE_framebuffer_multisample_obj();
	_result_->__construct();
	return _result_;}


ANGLE_framebuffer_multisample_obj::ANGLE_framebuffer_multisample_obj()
{
}

Dynamic ANGLE_framebuffer_multisample_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 17:
		if (HX_FIELD_EQ(inName,"MAX_SAMPLES_ANGLE") ) { return MAX_SAMPLES_ANGLE; }
		break;
	case 26:
		if (HX_FIELD_EQ(inName,"RENDERBUFFER_SAMPLES_ANGLE") ) { return RENDERBUFFER_SAMPLES_ANGLE; }
		break;
	case 40:
		if (HX_FIELD_EQ(inName,"FRAMEBUFFER_INCOMPLETE_MULTISAMPLE_ANGLE") ) { return FRAMEBUFFER_INCOMPLETE_MULTISAMPLE_ANGLE; }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic ANGLE_framebuffer_multisample_obj::__SetField(const ::String &inName,const Dynamic &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 17:
		if (HX_FIELD_EQ(inName,"MAX_SAMPLES_ANGLE") ) { MAX_SAMPLES_ANGLE=inValue.Cast< int >(); return inValue; }
		break;
	case 26:
		if (HX_FIELD_EQ(inName,"RENDERBUFFER_SAMPLES_ANGLE") ) { RENDERBUFFER_SAMPLES_ANGLE=inValue.Cast< int >(); return inValue; }
		break;
	case 40:
		if (HX_FIELD_EQ(inName,"FRAMEBUFFER_INCOMPLETE_MULTISAMPLE_ANGLE") ) { FRAMEBUFFER_INCOMPLETE_MULTISAMPLE_ANGLE=inValue.Cast< int >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void ANGLE_framebuffer_multisample_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("RENDERBUFFER_SAMPLES_ANGLE","\x34","\x90","\x45","\x07"));
	outFields->push(HX_HCSTRING("FRAMEBUFFER_INCOMPLETE_MULTISAMPLE_ANGLE","\x48","\x8a","\xb1","\xc4"));
	outFields->push(HX_HCSTRING("MAX_SAMPLES_ANGLE","\x62","\xe6","\x01","\xb7"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsInt,(int)offsetof(ANGLE_framebuffer_multisample_obj,RENDERBUFFER_SAMPLES_ANGLE),HX_HCSTRING("RENDERBUFFER_SAMPLES_ANGLE","\x34","\x90","\x45","\x07")},
	{hx::fsInt,(int)offsetof(ANGLE_framebuffer_multisample_obj,FRAMEBUFFER_INCOMPLETE_MULTISAMPLE_ANGLE),HX_HCSTRING("FRAMEBUFFER_INCOMPLETE_MULTISAMPLE_ANGLE","\x48","\x8a","\xb1","\xc4")},
	{hx::fsInt,(int)offsetof(ANGLE_framebuffer_multisample_obj,MAX_SAMPLES_ANGLE),HX_HCSTRING("MAX_SAMPLES_ANGLE","\x62","\xe6","\x01","\xb7")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo *sStaticStorageInfo = 0;
#endif

static ::String sMemberFields[] = {
	HX_HCSTRING("RENDERBUFFER_SAMPLES_ANGLE","\x34","\x90","\x45","\x07"),
	HX_HCSTRING("FRAMEBUFFER_INCOMPLETE_MULTISAMPLE_ANGLE","\x48","\x8a","\xb1","\xc4"),
	HX_HCSTRING("MAX_SAMPLES_ANGLE","\x62","\xe6","\x01","\xb7"),
	::String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(ANGLE_framebuffer_multisample_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(ANGLE_framebuffer_multisample_obj::__mClass,"__mClass");
};

#endif

hx::Class ANGLE_framebuffer_multisample_obj::__mClass;

void ANGLE_framebuffer_multisample_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("lime.graphics.opengl.ext.ANGLE_framebuffer_multisample","\x23","\xee","\xaa","\xe2");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = hx::Class_obj::dupFunctions(sMemberFields);
	__mClass->mCanCast = hx::TCanCast< ANGLE_framebuffer_multisample_obj >;
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
