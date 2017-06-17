#include <hxcpp.h>

#ifndef INCLUDED_lime_graphics_opengl_ext_EXT_separate_shader_objects
#include <lime/graphics/opengl/ext/EXT_separate_shader_objects.h>
#endif
namespace lime{
namespace graphics{
namespace opengl{
namespace ext{

Void EXT_separate_shader_objects_obj::__construct()
{
HX_STACK_FRAME("lime.graphics.opengl.ext.EXT_separate_shader_objects","new",0xf8fc06a8,"lime.graphics.opengl.ext.EXT_separate_shader_objects.new","lime/graphics/opengl/ext/EXT_separate_shader_objects.hx",6,0x8cf1e9ea)
HX_STACK_THIS(this)
{
	HX_STACK_LINE(14)
	this->PROGRAM_PIPELINE_BINDING_EXT = (int)33370;
	HX_STACK_LINE(13)
	this->ACTIVE_PROGRAM_EXT = (int)33369;
	HX_STACK_LINE(12)
	this->PROGRAM_SEPARABLE_EXT = (int)33368;
	HX_STACK_LINE(11)
	this->ALL_SHADER_BITS_EXT = (int)-1;
	HX_STACK_LINE(10)
	this->FRAGMENT_SHADER_BIT_EXT = (int)2;
	HX_STACK_LINE(9)
	this->VERTEX_SHADER_BIT_EXT = (int)1;
}
;
	return null();
}

//EXT_separate_shader_objects_obj::~EXT_separate_shader_objects_obj() { }

Dynamic EXT_separate_shader_objects_obj::__CreateEmpty() { return  new EXT_separate_shader_objects_obj; }
hx::ObjectPtr< EXT_separate_shader_objects_obj > EXT_separate_shader_objects_obj::__new()
{  hx::ObjectPtr< EXT_separate_shader_objects_obj > _result_ = new EXT_separate_shader_objects_obj();
	_result_->__construct();
	return _result_;}

Dynamic EXT_separate_shader_objects_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< EXT_separate_shader_objects_obj > _result_ = new EXT_separate_shader_objects_obj();
	_result_->__construct();
	return _result_;}


EXT_separate_shader_objects_obj::EXT_separate_shader_objects_obj()
{
}

Dynamic EXT_separate_shader_objects_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 18:
		if (HX_FIELD_EQ(inName,"ACTIVE_PROGRAM_EXT") ) { return ACTIVE_PROGRAM_EXT; }
		break;
	case 19:
		if (HX_FIELD_EQ(inName,"ALL_SHADER_BITS_EXT") ) { return ALL_SHADER_BITS_EXT; }
		break;
	case 21:
		if (HX_FIELD_EQ(inName,"VERTEX_SHADER_BIT_EXT") ) { return VERTEX_SHADER_BIT_EXT; }
		if (HX_FIELD_EQ(inName,"PROGRAM_SEPARABLE_EXT") ) { return PROGRAM_SEPARABLE_EXT; }
		break;
	case 23:
		if (HX_FIELD_EQ(inName,"FRAGMENT_SHADER_BIT_EXT") ) { return FRAGMENT_SHADER_BIT_EXT; }
		break;
	case 28:
		if (HX_FIELD_EQ(inName,"PROGRAM_PIPELINE_BINDING_EXT") ) { return PROGRAM_PIPELINE_BINDING_EXT; }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic EXT_separate_shader_objects_obj::__SetField(const ::String &inName,const Dynamic &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 18:
		if (HX_FIELD_EQ(inName,"ACTIVE_PROGRAM_EXT") ) { ACTIVE_PROGRAM_EXT=inValue.Cast< int >(); return inValue; }
		break;
	case 19:
		if (HX_FIELD_EQ(inName,"ALL_SHADER_BITS_EXT") ) { ALL_SHADER_BITS_EXT=inValue.Cast< int >(); return inValue; }
		break;
	case 21:
		if (HX_FIELD_EQ(inName,"VERTEX_SHADER_BIT_EXT") ) { VERTEX_SHADER_BIT_EXT=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"PROGRAM_SEPARABLE_EXT") ) { PROGRAM_SEPARABLE_EXT=inValue.Cast< int >(); return inValue; }
		break;
	case 23:
		if (HX_FIELD_EQ(inName,"FRAGMENT_SHADER_BIT_EXT") ) { FRAGMENT_SHADER_BIT_EXT=inValue.Cast< int >(); return inValue; }
		break;
	case 28:
		if (HX_FIELD_EQ(inName,"PROGRAM_PIPELINE_BINDING_EXT") ) { PROGRAM_PIPELINE_BINDING_EXT=inValue.Cast< int >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void EXT_separate_shader_objects_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("VERTEX_SHADER_BIT_EXT","\x10","\x40","\xb7","\xca"));
	outFields->push(HX_HCSTRING("FRAGMENT_SHADER_BIT_EXT","\x24","\x31","\x1d","\xc4"));
	outFields->push(HX_HCSTRING("ALL_SHADER_BITS_EXT","\xa4","\xd4","\x8b","\x99"));
	outFields->push(HX_HCSTRING("PROGRAM_SEPARABLE_EXT","\xb0","\xc0","\xbd","\x28"));
	outFields->push(HX_HCSTRING("ACTIVE_PROGRAM_EXT","\xad","\x3a","\xa9","\x18"));
	outFields->push(HX_HCSTRING("PROGRAM_PIPELINE_BINDING_EXT","\x45","\xa0","\x52","\xd3"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsInt,(int)offsetof(EXT_separate_shader_objects_obj,VERTEX_SHADER_BIT_EXT),HX_HCSTRING("VERTEX_SHADER_BIT_EXT","\x10","\x40","\xb7","\xca")},
	{hx::fsInt,(int)offsetof(EXT_separate_shader_objects_obj,FRAGMENT_SHADER_BIT_EXT),HX_HCSTRING("FRAGMENT_SHADER_BIT_EXT","\x24","\x31","\x1d","\xc4")},
	{hx::fsInt,(int)offsetof(EXT_separate_shader_objects_obj,ALL_SHADER_BITS_EXT),HX_HCSTRING("ALL_SHADER_BITS_EXT","\xa4","\xd4","\x8b","\x99")},
	{hx::fsInt,(int)offsetof(EXT_separate_shader_objects_obj,PROGRAM_SEPARABLE_EXT),HX_HCSTRING("PROGRAM_SEPARABLE_EXT","\xb0","\xc0","\xbd","\x28")},
	{hx::fsInt,(int)offsetof(EXT_separate_shader_objects_obj,ACTIVE_PROGRAM_EXT),HX_HCSTRING("ACTIVE_PROGRAM_EXT","\xad","\x3a","\xa9","\x18")},
	{hx::fsInt,(int)offsetof(EXT_separate_shader_objects_obj,PROGRAM_PIPELINE_BINDING_EXT),HX_HCSTRING("PROGRAM_PIPELINE_BINDING_EXT","\x45","\xa0","\x52","\xd3")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo *sStaticStorageInfo = 0;
#endif

static ::String sMemberFields[] = {
	HX_HCSTRING("VERTEX_SHADER_BIT_EXT","\x10","\x40","\xb7","\xca"),
	HX_HCSTRING("FRAGMENT_SHADER_BIT_EXT","\x24","\x31","\x1d","\xc4"),
	HX_HCSTRING("ALL_SHADER_BITS_EXT","\xa4","\xd4","\x8b","\x99"),
	HX_HCSTRING("PROGRAM_SEPARABLE_EXT","\xb0","\xc0","\xbd","\x28"),
	HX_HCSTRING("ACTIVE_PROGRAM_EXT","\xad","\x3a","\xa9","\x18"),
	HX_HCSTRING("PROGRAM_PIPELINE_BINDING_EXT","\x45","\xa0","\x52","\xd3"),
	::String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(EXT_separate_shader_objects_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(EXT_separate_shader_objects_obj::__mClass,"__mClass");
};

#endif

hx::Class EXT_separate_shader_objects_obj::__mClass;

void EXT_separate_shader_objects_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("lime.graphics.opengl.ext.EXT_separate_shader_objects","\xb6","\xd2","\x01","\xd5");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = hx::Class_obj::dupFunctions(sMemberFields);
	__mClass->mCanCast = hx::TCanCast< EXT_separate_shader_objects_obj >;
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
