#include <hxcpp.h>

#ifndef INCLUDED_lime_graphics_opengl_ext_OES_element_index_uint
#include <lime/graphics/opengl/ext/OES_element_index_uint.h>
#endif
namespace lime{
namespace graphics{
namespace opengl{
namespace ext{

Void OES_element_index_uint_obj::__construct()
{
HX_STACK_FRAME("lime.graphics.opengl.ext.OES_element_index_uint","new",0xddf74ae0,"lime.graphics.opengl.ext.OES_element_index_uint.new","lime/graphics/opengl/ext/OES_element_index_uint.hx",10,0x4991bfae)
HX_STACK_THIS(this)
{
	HX_STACK_LINE(13)
	this->UNSIGNED_INT = (int)5125;
}
;
	return null();
}

//OES_element_index_uint_obj::~OES_element_index_uint_obj() { }

Dynamic OES_element_index_uint_obj::__CreateEmpty() { return  new OES_element_index_uint_obj; }
hx::ObjectPtr< OES_element_index_uint_obj > OES_element_index_uint_obj::__new()
{  hx::ObjectPtr< OES_element_index_uint_obj > _result_ = new OES_element_index_uint_obj();
	_result_->__construct();
	return _result_;}

Dynamic OES_element_index_uint_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< OES_element_index_uint_obj > _result_ = new OES_element_index_uint_obj();
	_result_->__construct();
	return _result_;}


OES_element_index_uint_obj::OES_element_index_uint_obj()
{
}

Dynamic OES_element_index_uint_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 12:
		if (HX_FIELD_EQ(inName,"UNSIGNED_INT") ) { return UNSIGNED_INT; }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic OES_element_index_uint_obj::__SetField(const ::String &inName,const Dynamic &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 12:
		if (HX_FIELD_EQ(inName,"UNSIGNED_INT") ) { UNSIGNED_INT=inValue.Cast< int >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void OES_element_index_uint_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("UNSIGNED_INT","\x45","\xfd","\xb9","\x1c"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsInt,(int)offsetof(OES_element_index_uint_obj,UNSIGNED_INT),HX_HCSTRING("UNSIGNED_INT","\x45","\xfd","\xb9","\x1c")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo *sStaticStorageInfo = 0;
#endif

static ::String sMemberFields[] = {
	HX_HCSTRING("UNSIGNED_INT","\x45","\xfd","\xb9","\x1c"),
	::String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(OES_element_index_uint_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(OES_element_index_uint_obj::__mClass,"__mClass");
};

#endif

hx::Class OES_element_index_uint_obj::__mClass;

void OES_element_index_uint_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("lime.graphics.opengl.ext.OES_element_index_uint","\xee","\x9a","\x88","\x1c");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = hx::Class_obj::dupFunctions(sMemberFields);
	__mClass->mCanCast = hx::TCanCast< OES_element_index_uint_obj >;
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
