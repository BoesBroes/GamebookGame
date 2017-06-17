#include <hxcpp.h>

#ifndef INCLUDED_lime_graphics_opengl_ext_EXT_multiview_draw_buffers
#include <lime/graphics/opengl/ext/EXT_multiview_draw_buffers.h>
#endif
namespace lime{
namespace graphics{
namespace opengl{
namespace ext{

Void EXT_multiview_draw_buffers_obj::__construct()
{
HX_STACK_FRAME("lime.graphics.opengl.ext.EXT_multiview_draw_buffers","new",0xf0c5318b,"lime.graphics.opengl.ext.EXT_multiview_draw_buffers.new","lime/graphics/opengl/ext/EXT_multiview_draw_buffers.hx",6,0x15797e63)
HX_STACK_THIS(this)
{
	HX_STACK_LINE(13)
	this->MAX_MULTIVIEW_BUFFERS_EXT = (int)37106;
	HX_STACK_LINE(12)
	this->READ_BUFFER_EXT = (int)3074;
	HX_STACK_LINE(11)
	this->DRAW_BUFFER_EXT = (int)3073;
	HX_STACK_LINE(10)
	this->MULTIVIEW_EXT = (int)37105;
	HX_STACK_LINE(9)
	this->COLOR_ATTACHMENT_EXT = (int)37104;
}
;
	return null();
}

//EXT_multiview_draw_buffers_obj::~EXT_multiview_draw_buffers_obj() { }

Dynamic EXT_multiview_draw_buffers_obj::__CreateEmpty() { return  new EXT_multiview_draw_buffers_obj; }
hx::ObjectPtr< EXT_multiview_draw_buffers_obj > EXT_multiview_draw_buffers_obj::__new()
{  hx::ObjectPtr< EXT_multiview_draw_buffers_obj > _result_ = new EXT_multiview_draw_buffers_obj();
	_result_->__construct();
	return _result_;}

Dynamic EXT_multiview_draw_buffers_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< EXT_multiview_draw_buffers_obj > _result_ = new EXT_multiview_draw_buffers_obj();
	_result_->__construct();
	return _result_;}


EXT_multiview_draw_buffers_obj::EXT_multiview_draw_buffers_obj()
{
}

Dynamic EXT_multiview_draw_buffers_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 13:
		if (HX_FIELD_EQ(inName,"MULTIVIEW_EXT") ) { return MULTIVIEW_EXT; }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"DRAW_BUFFER_EXT") ) { return DRAW_BUFFER_EXT; }
		if (HX_FIELD_EQ(inName,"READ_BUFFER_EXT") ) { return READ_BUFFER_EXT; }
		break;
	case 20:
		if (HX_FIELD_EQ(inName,"COLOR_ATTACHMENT_EXT") ) { return COLOR_ATTACHMENT_EXT; }
		break;
	case 25:
		if (HX_FIELD_EQ(inName,"MAX_MULTIVIEW_BUFFERS_EXT") ) { return MAX_MULTIVIEW_BUFFERS_EXT; }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic EXT_multiview_draw_buffers_obj::__SetField(const ::String &inName,const Dynamic &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 13:
		if (HX_FIELD_EQ(inName,"MULTIVIEW_EXT") ) { MULTIVIEW_EXT=inValue.Cast< int >(); return inValue; }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"DRAW_BUFFER_EXT") ) { DRAW_BUFFER_EXT=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"READ_BUFFER_EXT") ) { READ_BUFFER_EXT=inValue.Cast< int >(); return inValue; }
		break;
	case 20:
		if (HX_FIELD_EQ(inName,"COLOR_ATTACHMENT_EXT") ) { COLOR_ATTACHMENT_EXT=inValue.Cast< int >(); return inValue; }
		break;
	case 25:
		if (HX_FIELD_EQ(inName,"MAX_MULTIVIEW_BUFFERS_EXT") ) { MAX_MULTIVIEW_BUFFERS_EXT=inValue.Cast< int >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void EXT_multiview_draw_buffers_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("COLOR_ATTACHMENT_EXT","\xa1","\x19","\xe2","\xca"));
	outFields->push(HX_HCSTRING("MULTIVIEW_EXT","\xc0","\xc1","\xd0","\x50"));
	outFields->push(HX_HCSTRING("DRAW_BUFFER_EXT","\x1d","\xe6","\x52","\x7b"));
	outFields->push(HX_HCSTRING("READ_BUFFER_EXT","\x0b","\x44","\x13","\xdd"));
	outFields->push(HX_HCSTRING("MAX_MULTIVIEW_BUFFERS_EXT","\x59","\x3d","\x18","\x12"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsInt,(int)offsetof(EXT_multiview_draw_buffers_obj,COLOR_ATTACHMENT_EXT),HX_HCSTRING("COLOR_ATTACHMENT_EXT","\xa1","\x19","\xe2","\xca")},
	{hx::fsInt,(int)offsetof(EXT_multiview_draw_buffers_obj,MULTIVIEW_EXT),HX_HCSTRING("MULTIVIEW_EXT","\xc0","\xc1","\xd0","\x50")},
	{hx::fsInt,(int)offsetof(EXT_multiview_draw_buffers_obj,DRAW_BUFFER_EXT),HX_HCSTRING("DRAW_BUFFER_EXT","\x1d","\xe6","\x52","\x7b")},
	{hx::fsInt,(int)offsetof(EXT_multiview_draw_buffers_obj,READ_BUFFER_EXT),HX_HCSTRING("READ_BUFFER_EXT","\x0b","\x44","\x13","\xdd")},
	{hx::fsInt,(int)offsetof(EXT_multiview_draw_buffers_obj,MAX_MULTIVIEW_BUFFERS_EXT),HX_HCSTRING("MAX_MULTIVIEW_BUFFERS_EXT","\x59","\x3d","\x18","\x12")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo *sStaticStorageInfo = 0;
#endif

static ::String sMemberFields[] = {
	HX_HCSTRING("COLOR_ATTACHMENT_EXT","\xa1","\x19","\xe2","\xca"),
	HX_HCSTRING("MULTIVIEW_EXT","\xc0","\xc1","\xd0","\x50"),
	HX_HCSTRING("DRAW_BUFFER_EXT","\x1d","\xe6","\x52","\x7b"),
	HX_HCSTRING("READ_BUFFER_EXT","\x0b","\x44","\x13","\xdd"),
	HX_HCSTRING("MAX_MULTIVIEW_BUFFERS_EXT","\x59","\x3d","\x18","\x12"),
	::String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(EXT_multiview_draw_buffers_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(EXT_multiview_draw_buffers_obj::__mClass,"__mClass");
};

#endif

hx::Class EXT_multiview_draw_buffers_obj::__mClass;

void EXT_multiview_draw_buffers_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("lime.graphics.opengl.ext.EXT_multiview_draw_buffers","\x19","\x10","\x3d","\x21");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = hx::Class_obj::dupFunctions(sMemberFields);
	__mClass->mCanCast = hx::TCanCast< EXT_multiview_draw_buffers_obj >;
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
