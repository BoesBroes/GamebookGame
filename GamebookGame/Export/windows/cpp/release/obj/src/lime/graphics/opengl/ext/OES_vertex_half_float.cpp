#include <hxcpp.h>

#ifndef INCLUDED_lime_graphics_opengl_ext_OES_vertex_half_float
#include <lime/graphics/opengl/ext/OES_vertex_half_float.h>
#endif
namespace lime{
namespace graphics{
namespace opengl{
namespace ext{

Void OES_vertex_half_float_obj::__construct()
{
HX_STACK_FRAME("lime.graphics.opengl.ext.OES_vertex_half_float","new",0x752d1419,"lime.graphics.opengl.ext.OES_vertex_half_float.new","lime/graphics/opengl/ext/OES_vertex_half_float.hx",6,0xaf8f7019)
HX_STACK_THIS(this)
{
	HX_STACK_LINE(9)
	this->HALF_FLOAT_OES = (int)36193;
}
;
	return null();
}

//OES_vertex_half_float_obj::~OES_vertex_half_float_obj() { }

Dynamic OES_vertex_half_float_obj::__CreateEmpty() { return  new OES_vertex_half_float_obj; }
hx::ObjectPtr< OES_vertex_half_float_obj > OES_vertex_half_float_obj::__new()
{  hx::ObjectPtr< OES_vertex_half_float_obj > _result_ = new OES_vertex_half_float_obj();
	_result_->__construct();
	return _result_;}

Dynamic OES_vertex_half_float_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< OES_vertex_half_float_obj > _result_ = new OES_vertex_half_float_obj();
	_result_->__construct();
	return _result_;}


OES_vertex_half_float_obj::OES_vertex_half_float_obj()
{
}

Dynamic OES_vertex_half_float_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 14:
		if (HX_FIELD_EQ(inName,"HALF_FLOAT_OES") ) { return HALF_FLOAT_OES; }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic OES_vertex_half_float_obj::__SetField(const ::String &inName,const Dynamic &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 14:
		if (HX_FIELD_EQ(inName,"HALF_FLOAT_OES") ) { HALF_FLOAT_OES=inValue.Cast< int >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void OES_vertex_half_float_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("HALF_FLOAT_OES","\x2e","\x8a","\xe6","\xab"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsInt,(int)offsetof(OES_vertex_half_float_obj,HALF_FLOAT_OES),HX_HCSTRING("HALF_FLOAT_OES","\x2e","\x8a","\xe6","\xab")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo *sStaticStorageInfo = 0;
#endif

static ::String sMemberFields[] = {
	HX_HCSTRING("HALF_FLOAT_OES","\x2e","\x8a","\xe6","\xab"),
	::String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(OES_vertex_half_float_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(OES_vertex_half_float_obj::__mClass,"__mClass");
};

#endif

hx::Class OES_vertex_half_float_obj::__mClass;

void OES_vertex_half_float_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("lime.graphics.opengl.ext.OES_vertex_half_float","\xa7","\x13","\x01","\x7d");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = hx::Class_obj::dupFunctions(sMemberFields);
	__mClass->mCanCast = hx::TCanCast< OES_vertex_half_float_obj >;
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
