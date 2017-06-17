#include <hxcpp.h>

#ifndef INCLUDED_lime_graphics_opengl_ext_OES_vertex_type_10_10_10_2
#include <lime/graphics/opengl/ext/OES_vertex_type_10_10_10_2.h>
#endif
namespace lime{
namespace graphics{
namespace opengl{
namespace ext{

Void OES_vertex_type_10_10_10_2_obj::__construct()
{
HX_STACK_FRAME("lime.graphics.opengl.ext.OES_vertex_type_10_10_10_2","new",0x7770b8f2,"lime.graphics.opengl.ext.OES_vertex_type_10_10_10_2.new","lime/graphics/opengl/ext/OES_vertex_type_10_10_10_2.hx",6,0x3d1c20dc)
HX_STACK_THIS(this)
{
	HX_STACK_LINE(10)
	this->INT_10_10_10_2_OES = (int)36343;
	HX_STACK_LINE(9)
	this->UNSIGNED_INT_10_10_10_2_OES = (int)36342;
}
;
	return null();
}

//OES_vertex_type_10_10_10_2_obj::~OES_vertex_type_10_10_10_2_obj() { }

Dynamic OES_vertex_type_10_10_10_2_obj::__CreateEmpty() { return  new OES_vertex_type_10_10_10_2_obj; }
hx::ObjectPtr< OES_vertex_type_10_10_10_2_obj > OES_vertex_type_10_10_10_2_obj::__new()
{  hx::ObjectPtr< OES_vertex_type_10_10_10_2_obj > _result_ = new OES_vertex_type_10_10_10_2_obj();
	_result_->__construct();
	return _result_;}

Dynamic OES_vertex_type_10_10_10_2_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< OES_vertex_type_10_10_10_2_obj > _result_ = new OES_vertex_type_10_10_10_2_obj();
	_result_->__construct();
	return _result_;}


OES_vertex_type_10_10_10_2_obj::OES_vertex_type_10_10_10_2_obj()
{
}

Dynamic OES_vertex_type_10_10_10_2_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 18:
		if (HX_FIELD_EQ(inName,"INT_10_10_10_2_OES") ) { return INT_10_10_10_2_OES; }
		break;
	case 27:
		if (HX_FIELD_EQ(inName,"UNSIGNED_INT_10_10_10_2_OES") ) { return UNSIGNED_INT_10_10_10_2_OES; }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic OES_vertex_type_10_10_10_2_obj::__SetField(const ::String &inName,const Dynamic &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 18:
		if (HX_FIELD_EQ(inName,"INT_10_10_10_2_OES") ) { INT_10_10_10_2_OES=inValue.Cast< int >(); return inValue; }
		break;
	case 27:
		if (HX_FIELD_EQ(inName,"UNSIGNED_INT_10_10_10_2_OES") ) { UNSIGNED_INT_10_10_10_2_OES=inValue.Cast< int >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void OES_vertex_type_10_10_10_2_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("UNSIGNED_INT_10_10_10_2_OES","\x0a","\xfd","\x78","\x2e"));
	outFields->push(HX_HCSTRING("INT_10_10_10_2_OES","\xc0","\xdc","\x09","\x4b"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsInt,(int)offsetof(OES_vertex_type_10_10_10_2_obj,UNSIGNED_INT_10_10_10_2_OES),HX_HCSTRING("UNSIGNED_INT_10_10_10_2_OES","\x0a","\xfd","\x78","\x2e")},
	{hx::fsInt,(int)offsetof(OES_vertex_type_10_10_10_2_obj,INT_10_10_10_2_OES),HX_HCSTRING("INT_10_10_10_2_OES","\xc0","\xdc","\x09","\x4b")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo *sStaticStorageInfo = 0;
#endif

static ::String sMemberFields[] = {
	HX_HCSTRING("UNSIGNED_INT_10_10_10_2_OES","\x0a","\xfd","\x78","\x2e"),
	HX_HCSTRING("INT_10_10_10_2_OES","\xc0","\xdc","\x09","\x4b"),
	::String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(OES_vertex_type_10_10_10_2_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(OES_vertex_type_10_10_10_2_obj::__mClass,"__mClass");
};

#endif

hx::Class OES_vertex_type_10_10_10_2_obj::__mClass;

void OES_vertex_type_10_10_10_2_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("lime.graphics.opengl.ext.OES_vertex_type_10_10_10_2","\x00","\x18","\x49","\x62");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = hx::Class_obj::dupFunctions(sMemberFields);
	__mClass->mCanCast = hx::TCanCast< OES_vertex_type_10_10_10_2_obj >;
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
