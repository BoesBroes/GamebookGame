#include <hxcpp.h>

#ifndef INCLUDED_lime_graphics_opengl_ext_EXT_debug_label
#include <lime/graphics/opengl/ext/EXT_debug_label.h>
#endif
namespace lime{
namespace graphics{
namespace opengl{
namespace ext{

Void EXT_debug_label_obj::__construct()
{
HX_STACK_FRAME("lime.graphics.opengl.ext.EXT_debug_label","new",0x2646605a,"lime.graphics.opengl.ext.EXT_debug_label.new","lime/graphics/opengl/ext/EXT_debug_label.hx",6,0xe58ba178)
HX_STACK_THIS(this)
{
	HX_STACK_LINE(14)
	this->VERTEX_ARRAY_OBJECT_EXT = (int)37204;
	HX_STACK_LINE(13)
	this->QUERY_OBJECT_EXT = (int)37203;
	HX_STACK_LINE(12)
	this->BUFFER_OBJECT_EXT = (int)37201;
	HX_STACK_LINE(11)
	this->SHADER_OBJECT_EXT = (int)35656;
	HX_STACK_LINE(10)
	this->PROGRAM_OBJECT_EXT = (int)35648;
	HX_STACK_LINE(9)
	this->PROGRAM_PIPELINE_OBJECT_EXT = (int)35407;
}
;
	return null();
}

//EXT_debug_label_obj::~EXT_debug_label_obj() { }

Dynamic EXT_debug_label_obj::__CreateEmpty() { return  new EXT_debug_label_obj; }
hx::ObjectPtr< EXT_debug_label_obj > EXT_debug_label_obj::__new()
{  hx::ObjectPtr< EXT_debug_label_obj > _result_ = new EXT_debug_label_obj();
	_result_->__construct();
	return _result_;}

Dynamic EXT_debug_label_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< EXT_debug_label_obj > _result_ = new EXT_debug_label_obj();
	_result_->__construct();
	return _result_;}


EXT_debug_label_obj::EXT_debug_label_obj()
{
}

Dynamic EXT_debug_label_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 16:
		if (HX_FIELD_EQ(inName,"QUERY_OBJECT_EXT") ) { return QUERY_OBJECT_EXT; }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"SHADER_OBJECT_EXT") ) { return SHADER_OBJECT_EXT; }
		if (HX_FIELD_EQ(inName,"BUFFER_OBJECT_EXT") ) { return BUFFER_OBJECT_EXT; }
		break;
	case 18:
		if (HX_FIELD_EQ(inName,"PROGRAM_OBJECT_EXT") ) { return PROGRAM_OBJECT_EXT; }
		break;
	case 23:
		if (HX_FIELD_EQ(inName,"VERTEX_ARRAY_OBJECT_EXT") ) { return VERTEX_ARRAY_OBJECT_EXT; }
		break;
	case 27:
		if (HX_FIELD_EQ(inName,"PROGRAM_PIPELINE_OBJECT_EXT") ) { return PROGRAM_PIPELINE_OBJECT_EXT; }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic EXT_debug_label_obj::__SetField(const ::String &inName,const Dynamic &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 16:
		if (HX_FIELD_EQ(inName,"QUERY_OBJECT_EXT") ) { QUERY_OBJECT_EXT=inValue.Cast< int >(); return inValue; }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"SHADER_OBJECT_EXT") ) { SHADER_OBJECT_EXT=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"BUFFER_OBJECT_EXT") ) { BUFFER_OBJECT_EXT=inValue.Cast< int >(); return inValue; }
		break;
	case 18:
		if (HX_FIELD_EQ(inName,"PROGRAM_OBJECT_EXT") ) { PROGRAM_OBJECT_EXT=inValue.Cast< int >(); return inValue; }
		break;
	case 23:
		if (HX_FIELD_EQ(inName,"VERTEX_ARRAY_OBJECT_EXT") ) { VERTEX_ARRAY_OBJECT_EXT=inValue.Cast< int >(); return inValue; }
		break;
	case 27:
		if (HX_FIELD_EQ(inName,"PROGRAM_PIPELINE_OBJECT_EXT") ) { PROGRAM_PIPELINE_OBJECT_EXT=inValue.Cast< int >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void EXT_debug_label_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("PROGRAM_PIPELINE_OBJECT_EXT","\x63","\x14","\xf0","\x5a"));
	outFields->push(HX_HCSTRING("PROGRAM_OBJECT_EXT","\xfc","\x24","\x24","\x03"));
	outFields->push(HX_HCSTRING("SHADER_OBJECT_EXT","\xdb","\xfd","\xea","\x90"));
	outFields->push(HX_HCSTRING("BUFFER_OBJECT_EXT","\xe0","\xe7","\x70","\x6a"));
	outFields->push(HX_HCSTRING("QUERY_OBJECT_EXT","\xf8","\x86","\xe7","\xd9"));
	outFields->push(HX_HCSTRING("VERTEX_ARRAY_OBJECT_EXT","\x82","\xd2","\x68","\x2c"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsInt,(int)offsetof(EXT_debug_label_obj,PROGRAM_PIPELINE_OBJECT_EXT),HX_HCSTRING("PROGRAM_PIPELINE_OBJECT_EXT","\x63","\x14","\xf0","\x5a")},
	{hx::fsInt,(int)offsetof(EXT_debug_label_obj,PROGRAM_OBJECT_EXT),HX_HCSTRING("PROGRAM_OBJECT_EXT","\xfc","\x24","\x24","\x03")},
	{hx::fsInt,(int)offsetof(EXT_debug_label_obj,SHADER_OBJECT_EXT),HX_HCSTRING("SHADER_OBJECT_EXT","\xdb","\xfd","\xea","\x90")},
	{hx::fsInt,(int)offsetof(EXT_debug_label_obj,BUFFER_OBJECT_EXT),HX_HCSTRING("BUFFER_OBJECT_EXT","\xe0","\xe7","\x70","\x6a")},
	{hx::fsInt,(int)offsetof(EXT_debug_label_obj,QUERY_OBJECT_EXT),HX_HCSTRING("QUERY_OBJECT_EXT","\xf8","\x86","\xe7","\xd9")},
	{hx::fsInt,(int)offsetof(EXT_debug_label_obj,VERTEX_ARRAY_OBJECT_EXT),HX_HCSTRING("VERTEX_ARRAY_OBJECT_EXT","\x82","\xd2","\x68","\x2c")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo *sStaticStorageInfo = 0;
#endif

static ::String sMemberFields[] = {
	HX_HCSTRING("PROGRAM_PIPELINE_OBJECT_EXT","\x63","\x14","\xf0","\x5a"),
	HX_HCSTRING("PROGRAM_OBJECT_EXT","\xfc","\x24","\x24","\x03"),
	HX_HCSTRING("SHADER_OBJECT_EXT","\xdb","\xfd","\xea","\x90"),
	HX_HCSTRING("BUFFER_OBJECT_EXT","\xe0","\xe7","\x70","\x6a"),
	HX_HCSTRING("QUERY_OBJECT_EXT","\xf8","\x86","\xe7","\xd9"),
	HX_HCSTRING("VERTEX_ARRAY_OBJECT_EXT","\x82","\xd2","\x68","\x2c"),
	::String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(EXT_debug_label_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(EXT_debug_label_obj::__mClass,"__mClass");
};

#endif

hx::Class EXT_debug_label_obj::__mClass;

void EXT_debug_label_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("lime.graphics.opengl.ext.EXT_debug_label","\x68","\xeb","\x8c","\x45");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = hx::Class_obj::dupFunctions(sMemberFields);
	__mClass->mCanCast = hx::TCanCast< EXT_debug_label_obj >;
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
