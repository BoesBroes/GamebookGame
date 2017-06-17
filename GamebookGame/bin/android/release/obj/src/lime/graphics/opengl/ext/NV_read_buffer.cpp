#include <hxcpp.h>

#ifndef INCLUDED_lime_graphics_opengl_ext_NV_read_buffer
#include <lime/graphics/opengl/ext/NV_read_buffer.h>
#endif
namespace lime{
namespace graphics{
namespace opengl{
namespace ext{

Void NV_read_buffer_obj::__construct()
{
HX_STACK_FRAME("lime.graphics.opengl.ext.NV_read_buffer","new",0x0be51166,"lime.graphics.opengl.ext.NV_read_buffer.new","lime/graphics/opengl/ext/NV_read_buffer.hx",6,0x21ff5de8)
HX_STACK_THIS(this)
{
	HX_STACK_LINE(9)
	this->READ_BUFFER_NV = (int)3074;
}
;
	return null();
}

//NV_read_buffer_obj::~NV_read_buffer_obj() { }

Dynamic NV_read_buffer_obj::__CreateEmpty() { return  new NV_read_buffer_obj; }
hx::ObjectPtr< NV_read_buffer_obj > NV_read_buffer_obj::__new()
{  hx::ObjectPtr< NV_read_buffer_obj > _result_ = new NV_read_buffer_obj();
	_result_->__construct();
	return _result_;}

Dynamic NV_read_buffer_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< NV_read_buffer_obj > _result_ = new NV_read_buffer_obj();
	_result_->__construct();
	return _result_;}


NV_read_buffer_obj::NV_read_buffer_obj()
{
}

Dynamic NV_read_buffer_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 14:
		if (HX_FIELD_EQ(inName,"READ_BUFFER_NV") ) { return READ_BUFFER_NV; }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic NV_read_buffer_obj::__SetField(const ::String &inName,const Dynamic &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 14:
		if (HX_FIELD_EQ(inName,"READ_BUFFER_NV") ) { READ_BUFFER_NV=inValue.Cast< int >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void NV_read_buffer_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("READ_BUFFER_NV","\xfe","\xe7","\xb0","\x1d"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsInt,(int)offsetof(NV_read_buffer_obj,READ_BUFFER_NV),HX_HCSTRING("READ_BUFFER_NV","\xfe","\xe7","\xb0","\x1d")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo *sStaticStorageInfo = 0;
#endif

static ::String sMemberFields[] = {
	HX_HCSTRING("READ_BUFFER_NV","\xfe","\xe7","\xb0","\x1d"),
	::String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(NV_read_buffer_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(NV_read_buffer_obj::__mClass,"__mClass");
};

#endif

hx::Class NV_read_buffer_obj::__mClass;

void NV_read_buffer_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("lime.graphics.opengl.ext.NV_read_buffer","\x74","\x26","\x23","\x1b");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = hx::Class_obj::dupFunctions(sMemberFields);
	__mClass->mCanCast = hx::TCanCast< NV_read_buffer_obj >;
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
