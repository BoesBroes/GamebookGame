#include <hxcpp.h>

#ifndef INCLUDED_lime_graphics_opengl_ext_APPLE_framebuffer_multisample
#include <lime/graphics/opengl/ext/APPLE_framebuffer_multisample.h>
#endif
namespace lime{
namespace graphics{
namespace opengl{
namespace ext{

Void APPLE_framebuffer_multisample_obj::__construct()
{
HX_STACK_FRAME("lime.graphics.opengl.ext.APPLE_framebuffer_multisample","new",0x083f8a9c,"lime.graphics.opengl.ext.APPLE_framebuffer_multisample.new","lime/graphics/opengl/ext/APPLE_framebuffer_multisample.hx",6,0x7558ecf6)
HX_STACK_THIS(this)
{
	HX_STACK_LINE(15)
	this->READ_FRAMEBUFFER_BINDING_APPLE = (int)36010;
	HX_STACK_LINE(14)
	this->DRAW_FRAMEBUFFER_BINDING_APPLE = (int)36006;
	HX_STACK_LINE(13)
	this->DRAW_FRAMEBUFFER_APPLE = (int)36009;
	HX_STACK_LINE(12)
	this->READ_FRAMEBUFFER_APPLE = (int)36008;
	HX_STACK_LINE(11)
	this->MAX_SAMPLES_APPLE = (int)36183;
	HX_STACK_LINE(10)
	this->FRAMEBUFFER_INCOMPLETE_MULTISAMPLE_APPLE = (int)36182;
	HX_STACK_LINE(9)
	this->RENDERBUFFER_SAMPLES_APPLE = (int)36011;
}
;
	return null();
}

//APPLE_framebuffer_multisample_obj::~APPLE_framebuffer_multisample_obj() { }

Dynamic APPLE_framebuffer_multisample_obj::__CreateEmpty() { return  new APPLE_framebuffer_multisample_obj; }
hx::ObjectPtr< APPLE_framebuffer_multisample_obj > APPLE_framebuffer_multisample_obj::__new()
{  hx::ObjectPtr< APPLE_framebuffer_multisample_obj > _result_ = new APPLE_framebuffer_multisample_obj();
	_result_->__construct();
	return _result_;}

Dynamic APPLE_framebuffer_multisample_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< APPLE_framebuffer_multisample_obj > _result_ = new APPLE_framebuffer_multisample_obj();
	_result_->__construct();
	return _result_;}


APPLE_framebuffer_multisample_obj::APPLE_framebuffer_multisample_obj()
{
}

Dynamic APPLE_framebuffer_multisample_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 17:
		if (HX_FIELD_EQ(inName,"MAX_SAMPLES_APPLE") ) { return MAX_SAMPLES_APPLE; }
		break;
	case 22:
		if (HX_FIELD_EQ(inName,"READ_FRAMEBUFFER_APPLE") ) { return READ_FRAMEBUFFER_APPLE; }
		if (HX_FIELD_EQ(inName,"DRAW_FRAMEBUFFER_APPLE") ) { return DRAW_FRAMEBUFFER_APPLE; }
		break;
	case 26:
		if (HX_FIELD_EQ(inName,"RENDERBUFFER_SAMPLES_APPLE") ) { return RENDERBUFFER_SAMPLES_APPLE; }
		break;
	case 30:
		if (HX_FIELD_EQ(inName,"DRAW_FRAMEBUFFER_BINDING_APPLE") ) { return DRAW_FRAMEBUFFER_BINDING_APPLE; }
		if (HX_FIELD_EQ(inName,"READ_FRAMEBUFFER_BINDING_APPLE") ) { return READ_FRAMEBUFFER_BINDING_APPLE; }
		break;
	case 40:
		if (HX_FIELD_EQ(inName,"FRAMEBUFFER_INCOMPLETE_MULTISAMPLE_APPLE") ) { return FRAMEBUFFER_INCOMPLETE_MULTISAMPLE_APPLE; }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic APPLE_framebuffer_multisample_obj::__SetField(const ::String &inName,const Dynamic &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 17:
		if (HX_FIELD_EQ(inName,"MAX_SAMPLES_APPLE") ) { MAX_SAMPLES_APPLE=inValue.Cast< int >(); return inValue; }
		break;
	case 22:
		if (HX_FIELD_EQ(inName,"READ_FRAMEBUFFER_APPLE") ) { READ_FRAMEBUFFER_APPLE=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"DRAW_FRAMEBUFFER_APPLE") ) { DRAW_FRAMEBUFFER_APPLE=inValue.Cast< int >(); return inValue; }
		break;
	case 26:
		if (HX_FIELD_EQ(inName,"RENDERBUFFER_SAMPLES_APPLE") ) { RENDERBUFFER_SAMPLES_APPLE=inValue.Cast< int >(); return inValue; }
		break;
	case 30:
		if (HX_FIELD_EQ(inName,"DRAW_FRAMEBUFFER_BINDING_APPLE") ) { DRAW_FRAMEBUFFER_BINDING_APPLE=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"READ_FRAMEBUFFER_BINDING_APPLE") ) { READ_FRAMEBUFFER_BINDING_APPLE=inValue.Cast< int >(); return inValue; }
		break;
	case 40:
		if (HX_FIELD_EQ(inName,"FRAMEBUFFER_INCOMPLETE_MULTISAMPLE_APPLE") ) { FRAMEBUFFER_INCOMPLETE_MULTISAMPLE_APPLE=inValue.Cast< int >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void APPLE_framebuffer_multisample_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("RENDERBUFFER_SAMPLES_APPLE","\xbb","\xd1","\x9e","\x08"));
	outFields->push(HX_HCSTRING("FRAMEBUFFER_INCOMPLETE_MULTISAMPLE_APPLE","\xcf","\xcb","\x0a","\xc6"));
	outFields->push(HX_HCSTRING("MAX_SAMPLES_APPLE","\xe9","\x27","\x5b","\xb8"));
	outFields->push(HX_HCSTRING("READ_FRAMEBUFFER_APPLE","\x9f","\x82","\x80","\x93"));
	outFields->push(HX_HCSTRING("DRAW_FRAMEBUFFER_APPLE","\xcd","\x26","\xe5","\xbc"));
	outFields->push(HX_HCSTRING("DRAW_FRAMEBUFFER_BINDING_APPLE","\xf3","\x81","\xe9","\xbf"));
	outFields->push(HX_HCSTRING("READ_FRAMEBUFFER_BINDING_APPLE","\xc5","\xff","\xdf","\x03"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsInt,(int)offsetof(APPLE_framebuffer_multisample_obj,RENDERBUFFER_SAMPLES_APPLE),HX_HCSTRING("RENDERBUFFER_SAMPLES_APPLE","\xbb","\xd1","\x9e","\x08")},
	{hx::fsInt,(int)offsetof(APPLE_framebuffer_multisample_obj,FRAMEBUFFER_INCOMPLETE_MULTISAMPLE_APPLE),HX_HCSTRING("FRAMEBUFFER_INCOMPLETE_MULTISAMPLE_APPLE","\xcf","\xcb","\x0a","\xc6")},
	{hx::fsInt,(int)offsetof(APPLE_framebuffer_multisample_obj,MAX_SAMPLES_APPLE),HX_HCSTRING("MAX_SAMPLES_APPLE","\xe9","\x27","\x5b","\xb8")},
	{hx::fsInt,(int)offsetof(APPLE_framebuffer_multisample_obj,READ_FRAMEBUFFER_APPLE),HX_HCSTRING("READ_FRAMEBUFFER_APPLE","\x9f","\x82","\x80","\x93")},
	{hx::fsInt,(int)offsetof(APPLE_framebuffer_multisample_obj,DRAW_FRAMEBUFFER_APPLE),HX_HCSTRING("DRAW_FRAMEBUFFER_APPLE","\xcd","\x26","\xe5","\xbc")},
	{hx::fsInt,(int)offsetof(APPLE_framebuffer_multisample_obj,DRAW_FRAMEBUFFER_BINDING_APPLE),HX_HCSTRING("DRAW_FRAMEBUFFER_BINDING_APPLE","\xf3","\x81","\xe9","\xbf")},
	{hx::fsInt,(int)offsetof(APPLE_framebuffer_multisample_obj,READ_FRAMEBUFFER_BINDING_APPLE),HX_HCSTRING("READ_FRAMEBUFFER_BINDING_APPLE","\xc5","\xff","\xdf","\x03")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo *sStaticStorageInfo = 0;
#endif

static ::String sMemberFields[] = {
	HX_HCSTRING("RENDERBUFFER_SAMPLES_APPLE","\xbb","\xd1","\x9e","\x08"),
	HX_HCSTRING("FRAMEBUFFER_INCOMPLETE_MULTISAMPLE_APPLE","\xcf","\xcb","\x0a","\xc6"),
	HX_HCSTRING("MAX_SAMPLES_APPLE","\xe9","\x27","\x5b","\xb8"),
	HX_HCSTRING("READ_FRAMEBUFFER_APPLE","\x9f","\x82","\x80","\x93"),
	HX_HCSTRING("DRAW_FRAMEBUFFER_APPLE","\xcd","\x26","\xe5","\xbc"),
	HX_HCSTRING("DRAW_FRAMEBUFFER_BINDING_APPLE","\xf3","\x81","\xe9","\xbf"),
	HX_HCSTRING("READ_FRAMEBUFFER_BINDING_APPLE","\xc5","\xff","\xdf","\x03"),
	::String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(APPLE_framebuffer_multisample_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(APPLE_framebuffer_multisample_obj::__mClass,"__mClass");
};

#endif

hx::Class APPLE_framebuffer_multisample_obj::__mClass;

void APPLE_framebuffer_multisample_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("lime.graphics.opengl.ext.APPLE_framebuffer_multisample","\xaa","\x4c","\xcf","\xff");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = hx::Class_obj::dupFunctions(sMemberFields);
	__mClass->mCanCast = hx::TCanCast< APPLE_framebuffer_multisample_obj >;
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
