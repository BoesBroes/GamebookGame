#include <hxcpp.h>

#ifndef INCLUDED_lime_graphics_opengl_ext_ANGLE_translated_shader_source
#include <lime/graphics/opengl/ext/ANGLE_translated_shader_source.h>
#endif
namespace lime{
namespace graphics{
namespace opengl{
namespace ext{

Void ANGLE_translated_shader_source_obj::__construct()
{
HX_STACK_FRAME("lime.graphics.opengl.ext.ANGLE_translated_shader_source","new",0xe2c2076c,"lime.graphics.opengl.ext.ANGLE_translated_shader_source.new","lime/graphics/opengl/ext/ANGLE_translated_shader_source.hx",6,0xc9ee26a2)
HX_STACK_THIS(this)
{
	HX_STACK_LINE(9)
	this->TRANSLATED_SHADER_SOURCE_LENGTH_ANGLE = (int)37792;
}
;
	return null();
}

//ANGLE_translated_shader_source_obj::~ANGLE_translated_shader_source_obj() { }

Dynamic ANGLE_translated_shader_source_obj::__CreateEmpty() { return  new ANGLE_translated_shader_source_obj; }
hx::ObjectPtr< ANGLE_translated_shader_source_obj > ANGLE_translated_shader_source_obj::__new()
{  hx::ObjectPtr< ANGLE_translated_shader_source_obj > _result_ = new ANGLE_translated_shader_source_obj();
	_result_->__construct();
	return _result_;}

Dynamic ANGLE_translated_shader_source_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< ANGLE_translated_shader_source_obj > _result_ = new ANGLE_translated_shader_source_obj();
	_result_->__construct();
	return _result_;}


ANGLE_translated_shader_source_obj::ANGLE_translated_shader_source_obj()
{
}

Dynamic ANGLE_translated_shader_source_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 37:
		if (HX_FIELD_EQ(inName,"TRANSLATED_SHADER_SOURCE_LENGTH_ANGLE") ) { return TRANSLATED_SHADER_SOURCE_LENGTH_ANGLE; }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic ANGLE_translated_shader_source_obj::__SetField(const ::String &inName,const Dynamic &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 37:
		if (HX_FIELD_EQ(inName,"TRANSLATED_SHADER_SOURCE_LENGTH_ANGLE") ) { TRANSLATED_SHADER_SOURCE_LENGTH_ANGLE=inValue.Cast< int >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void ANGLE_translated_shader_source_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("TRANSLATED_SHADER_SOURCE_LENGTH_ANGLE","\xad","\x31","\x15","\x74"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsInt,(int)offsetof(ANGLE_translated_shader_source_obj,TRANSLATED_SHADER_SOURCE_LENGTH_ANGLE),HX_HCSTRING("TRANSLATED_SHADER_SOURCE_LENGTH_ANGLE","\xad","\x31","\x15","\x74")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo *sStaticStorageInfo = 0;
#endif

static ::String sMemberFields[] = {
	HX_HCSTRING("TRANSLATED_SHADER_SOURCE_LENGTH_ANGLE","\xad","\x31","\x15","\x74"),
	::String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(ANGLE_translated_shader_source_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(ANGLE_translated_shader_source_obj::__mClass,"__mClass");
};

#endif

hx::Class ANGLE_translated_shader_source_obj::__mClass;

void ANGLE_translated_shader_source_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("lime.graphics.opengl.ext.ANGLE_translated_shader_source","\x7a","\x21","\x7f","\xa0");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = hx::Class_obj::dupFunctions(sMemberFields);
	__mClass->mCanCast = hx::TCanCast< ANGLE_translated_shader_source_obj >;
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
