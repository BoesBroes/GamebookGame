#include <hxcpp.h>

#ifndef INCLUDED_lime_graphics_opengl_ext_OES_get_program_binary
#include <lime/graphics/opengl/ext/OES_get_program_binary.h>
#endif
namespace lime{
namespace graphics{
namespace opengl{
namespace ext{

Void OES_get_program_binary_obj::__construct()
{
HX_STACK_FRAME("lime.graphics.opengl.ext.OES_get_program_binary","new",0x4a588dbb,"lime.graphics.opengl.ext.OES_get_program_binary.new","lime/graphics/opengl/ext/OES_get_program_binary.hx",6,0x4d7fd133)
HX_STACK_THIS(this)
{
	HX_STACK_LINE(11)
	this->PROGRAM_BINARY_FORMATS_OES = (int)34815;
	HX_STACK_LINE(10)
	this->NUM_PROGRAM_BINARY_FORMATS_OES = (int)34814;
	HX_STACK_LINE(9)
	this->PROGRAM_BINARY_LENGTH_OES = (int)34625;
}
;
	return null();
}

//OES_get_program_binary_obj::~OES_get_program_binary_obj() { }

Dynamic OES_get_program_binary_obj::__CreateEmpty() { return  new OES_get_program_binary_obj; }
hx::ObjectPtr< OES_get_program_binary_obj > OES_get_program_binary_obj::__new()
{  hx::ObjectPtr< OES_get_program_binary_obj > _result_ = new OES_get_program_binary_obj();
	_result_->__construct();
	return _result_;}

Dynamic OES_get_program_binary_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< OES_get_program_binary_obj > _result_ = new OES_get_program_binary_obj();
	_result_->__construct();
	return _result_;}


OES_get_program_binary_obj::OES_get_program_binary_obj()
{
}

Dynamic OES_get_program_binary_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 25:
		if (HX_FIELD_EQ(inName,"PROGRAM_BINARY_LENGTH_OES") ) { return PROGRAM_BINARY_LENGTH_OES; }
		break;
	case 26:
		if (HX_FIELD_EQ(inName,"PROGRAM_BINARY_FORMATS_OES") ) { return PROGRAM_BINARY_FORMATS_OES; }
		break;
	case 30:
		if (HX_FIELD_EQ(inName,"NUM_PROGRAM_BINARY_FORMATS_OES") ) { return NUM_PROGRAM_BINARY_FORMATS_OES; }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic OES_get_program_binary_obj::__SetField(const ::String &inName,const Dynamic &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 25:
		if (HX_FIELD_EQ(inName,"PROGRAM_BINARY_LENGTH_OES") ) { PROGRAM_BINARY_LENGTH_OES=inValue.Cast< int >(); return inValue; }
		break;
	case 26:
		if (HX_FIELD_EQ(inName,"PROGRAM_BINARY_FORMATS_OES") ) { PROGRAM_BINARY_FORMATS_OES=inValue.Cast< int >(); return inValue; }
		break;
	case 30:
		if (HX_FIELD_EQ(inName,"NUM_PROGRAM_BINARY_FORMATS_OES") ) { NUM_PROGRAM_BINARY_FORMATS_OES=inValue.Cast< int >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void OES_get_program_binary_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("PROGRAM_BINARY_LENGTH_OES","\x47","\x1e","\x7d","\x58"));
	outFields->push(HX_HCSTRING("NUM_PROGRAM_BINARY_FORMATS_OES","\x30","\xf9","\xd9","\x07"));
	outFields->push(HX_HCSTRING("PROGRAM_BINARY_FORMATS_OES","\x77","\x5e","\xa0","\x0d"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsInt,(int)offsetof(OES_get_program_binary_obj,PROGRAM_BINARY_LENGTH_OES),HX_HCSTRING("PROGRAM_BINARY_LENGTH_OES","\x47","\x1e","\x7d","\x58")},
	{hx::fsInt,(int)offsetof(OES_get_program_binary_obj,NUM_PROGRAM_BINARY_FORMATS_OES),HX_HCSTRING("NUM_PROGRAM_BINARY_FORMATS_OES","\x30","\xf9","\xd9","\x07")},
	{hx::fsInt,(int)offsetof(OES_get_program_binary_obj,PROGRAM_BINARY_FORMATS_OES),HX_HCSTRING("PROGRAM_BINARY_FORMATS_OES","\x77","\x5e","\xa0","\x0d")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo *sStaticStorageInfo = 0;
#endif

static ::String sMemberFields[] = {
	HX_HCSTRING("PROGRAM_BINARY_LENGTH_OES","\x47","\x1e","\x7d","\x58"),
	HX_HCSTRING("NUM_PROGRAM_BINARY_FORMATS_OES","\x30","\xf9","\xd9","\x07"),
	HX_HCSTRING("PROGRAM_BINARY_FORMATS_OES","\x77","\x5e","\xa0","\x0d"),
	::String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(OES_get_program_binary_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(OES_get_program_binary_obj::__mClass,"__mClass");
};

#endif

hx::Class OES_get_program_binary_obj::__mClass;

void OES_get_program_binary_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("lime.graphics.opengl.ext.OES_get_program_binary","\x49","\x94","\x82","\x6c");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = hx::Class_obj::dupFunctions(sMemberFields);
	__mClass->mCanCast = hx::TCanCast< OES_get_program_binary_obj >;
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
