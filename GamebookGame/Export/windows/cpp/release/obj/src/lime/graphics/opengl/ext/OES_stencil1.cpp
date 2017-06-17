#include <hxcpp.h>

#ifndef INCLUDED_lime_graphics_opengl_ext_OES_stencil1
#include <lime/graphics/opengl/ext/OES_stencil1.h>
#endif
namespace lime{
namespace graphics{
namespace opengl{
namespace ext{

Void OES_stencil1_obj::__construct()
{
HX_STACK_FRAME("lime.graphics.opengl.ext.OES_stencil1","new",0x6546730b,"lime.graphics.opengl.ext.OES_stencil1.new","lime/graphics/opengl/ext/OES_stencil1.hx",6,0x3b739463)
HX_STACK_THIS(this)
{
	HX_STACK_LINE(9)
	this->STENCIL_INDEX1_OES = (int)36166;
}
;
	return null();
}

//OES_stencil1_obj::~OES_stencil1_obj() { }

Dynamic OES_stencil1_obj::__CreateEmpty() { return  new OES_stencil1_obj; }
hx::ObjectPtr< OES_stencil1_obj > OES_stencil1_obj::__new()
{  hx::ObjectPtr< OES_stencil1_obj > _result_ = new OES_stencil1_obj();
	_result_->__construct();
	return _result_;}

Dynamic OES_stencil1_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< OES_stencil1_obj > _result_ = new OES_stencil1_obj();
	_result_->__construct();
	return _result_;}


OES_stencil1_obj::OES_stencil1_obj()
{
}

Dynamic OES_stencil1_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 18:
		if (HX_FIELD_EQ(inName,"STENCIL_INDEX1_OES") ) { return STENCIL_INDEX1_OES; }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic OES_stencil1_obj::__SetField(const ::String &inName,const Dynamic &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 18:
		if (HX_FIELD_EQ(inName,"STENCIL_INDEX1_OES") ) { STENCIL_INDEX1_OES=inValue.Cast< int >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void OES_stencil1_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("STENCIL_INDEX1_OES","\xc0","\x30","\x37","\x58"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsInt,(int)offsetof(OES_stencil1_obj,STENCIL_INDEX1_OES),HX_HCSTRING("STENCIL_INDEX1_OES","\xc0","\x30","\x37","\x58")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo *sStaticStorageInfo = 0;
#endif

static ::String sMemberFields[] = {
	HX_HCSTRING("STENCIL_INDEX1_OES","\xc0","\x30","\x37","\x58"),
	::String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(OES_stencil1_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(OES_stencil1_obj::__mClass,"__mClass");
};

#endif

hx::Class OES_stencil1_obj::__mClass;

void OES_stencil1_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("lime.graphics.opengl.ext.OES_stencil1","\x99","\x91","\x9f","\xd8");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = hx::Class_obj::dupFunctions(sMemberFields);
	__mClass->mCanCast = hx::TCanCast< OES_stencil1_obj >;
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
