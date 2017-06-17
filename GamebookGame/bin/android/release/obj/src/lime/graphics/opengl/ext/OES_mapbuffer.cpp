#include <hxcpp.h>

#ifndef INCLUDED_lime_graphics_opengl_ext_OES_mapbuffer
#include <lime/graphics/opengl/ext/OES_mapbuffer.h>
#endif
namespace lime{
namespace graphics{
namespace opengl{
namespace ext{

Void OES_mapbuffer_obj::__construct()
{
HX_STACK_FRAME("lime.graphics.opengl.ext.OES_mapbuffer","new",0x321fb62a,"lime.graphics.opengl.ext.OES_mapbuffer.new","lime/graphics/opengl/ext/OES_mapbuffer.hx",6,0x4ed60928)
HX_STACK_THIS(this)
{
	HX_STACK_LINE(12)
	this->BUFFER_MAP_POINTER_OES = (int)35005;
	HX_STACK_LINE(11)
	this->BUFFER_MAPPED_OES = (int)35004;
	HX_STACK_LINE(10)
	this->BUFFER_ACCESS_OES = (int)35003;
	HX_STACK_LINE(9)
	this->WRITE_ONLY_OES = (int)35001;
}
;
	return null();
}

//OES_mapbuffer_obj::~OES_mapbuffer_obj() { }

Dynamic OES_mapbuffer_obj::__CreateEmpty() { return  new OES_mapbuffer_obj; }
hx::ObjectPtr< OES_mapbuffer_obj > OES_mapbuffer_obj::__new()
{  hx::ObjectPtr< OES_mapbuffer_obj > _result_ = new OES_mapbuffer_obj();
	_result_->__construct();
	return _result_;}

Dynamic OES_mapbuffer_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< OES_mapbuffer_obj > _result_ = new OES_mapbuffer_obj();
	_result_->__construct();
	return _result_;}


OES_mapbuffer_obj::OES_mapbuffer_obj()
{
}

Dynamic OES_mapbuffer_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 14:
		if (HX_FIELD_EQ(inName,"WRITE_ONLY_OES") ) { return WRITE_ONLY_OES; }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"BUFFER_ACCESS_OES") ) { return BUFFER_ACCESS_OES; }
		if (HX_FIELD_EQ(inName,"BUFFER_MAPPED_OES") ) { return BUFFER_MAPPED_OES; }
		break;
	case 22:
		if (HX_FIELD_EQ(inName,"BUFFER_MAP_POINTER_OES") ) { return BUFFER_MAP_POINTER_OES; }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic OES_mapbuffer_obj::__SetField(const ::String &inName,const Dynamic &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 14:
		if (HX_FIELD_EQ(inName,"WRITE_ONLY_OES") ) { WRITE_ONLY_OES=inValue.Cast< int >(); return inValue; }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"BUFFER_ACCESS_OES") ) { BUFFER_ACCESS_OES=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"BUFFER_MAPPED_OES") ) { BUFFER_MAPPED_OES=inValue.Cast< int >(); return inValue; }
		break;
	case 22:
		if (HX_FIELD_EQ(inName,"BUFFER_MAP_POINTER_OES") ) { BUFFER_MAP_POINTER_OES=inValue.Cast< int >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void OES_mapbuffer_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("WRITE_ONLY_OES","\xaa","\x29","\xb5","\xd7"));
	outFields->push(HX_HCSTRING("BUFFER_ACCESS_OES","\x41","\x5b","\x45","\xfb"));
	outFields->push(HX_HCSTRING("BUFFER_MAPPED_OES","\xd0","\x4c","\xda","\xcd"));
	outFields->push(HX_HCSTRING("BUFFER_MAP_POINTER_OES","\x99","\xe4","\x3a","\x9f"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsInt,(int)offsetof(OES_mapbuffer_obj,WRITE_ONLY_OES),HX_HCSTRING("WRITE_ONLY_OES","\xaa","\x29","\xb5","\xd7")},
	{hx::fsInt,(int)offsetof(OES_mapbuffer_obj,BUFFER_ACCESS_OES),HX_HCSTRING("BUFFER_ACCESS_OES","\x41","\x5b","\x45","\xfb")},
	{hx::fsInt,(int)offsetof(OES_mapbuffer_obj,BUFFER_MAPPED_OES),HX_HCSTRING("BUFFER_MAPPED_OES","\xd0","\x4c","\xda","\xcd")},
	{hx::fsInt,(int)offsetof(OES_mapbuffer_obj,BUFFER_MAP_POINTER_OES),HX_HCSTRING("BUFFER_MAP_POINTER_OES","\x99","\xe4","\x3a","\x9f")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo *sStaticStorageInfo = 0;
#endif

static ::String sMemberFields[] = {
	HX_HCSTRING("WRITE_ONLY_OES","\xaa","\x29","\xb5","\xd7"),
	HX_HCSTRING("BUFFER_ACCESS_OES","\x41","\x5b","\x45","\xfb"),
	HX_HCSTRING("BUFFER_MAPPED_OES","\xd0","\x4c","\xda","\xcd"),
	HX_HCSTRING("BUFFER_MAP_POINTER_OES","\x99","\xe4","\x3a","\x9f"),
	::String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(OES_mapbuffer_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(OES_mapbuffer_obj::__mClass,"__mClass");
};

#endif

hx::Class OES_mapbuffer_obj::__mClass;

void OES_mapbuffer_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("lime.graphics.opengl.ext.OES_mapbuffer","\x38","\x19","\xf3","\xda");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = hx::Class_obj::dupFunctions(sMemberFields);
	__mClass->mCanCast = hx::TCanCast< OES_mapbuffer_obj >;
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
