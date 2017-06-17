#include <hxcpp.h>

#ifndef INCLUDED_lime_graphics_opengl_ext_EXT_unpack_subimage
#include <lime/graphics/opengl/ext/EXT_unpack_subimage.h>
#endif
namespace lime{
namespace graphics{
namespace opengl{
namespace ext{

Void EXT_unpack_subimage_obj::__construct()
{
HX_STACK_FRAME("lime.graphics.opengl.ext.EXT_unpack_subimage","new",0xdcb8a1da,"lime.graphics.opengl.ext.EXT_unpack_subimage.new","lime/graphics/opengl/ext/EXT_unpack_subimage.hx",6,0xb36a48f8)
HX_STACK_THIS(this)
{
	HX_STACK_LINE(11)
	this->UNPACK_SKIP_PIXELS = (int)3316;
	HX_STACK_LINE(10)
	this->UNPACK_SKIP_ROWS = (int)3315;
	HX_STACK_LINE(9)
	this->UNPACK_ROW_LENGTH = (int)3314;
}
;
	return null();
}

//EXT_unpack_subimage_obj::~EXT_unpack_subimage_obj() { }

Dynamic EXT_unpack_subimage_obj::__CreateEmpty() { return  new EXT_unpack_subimage_obj; }
hx::ObjectPtr< EXT_unpack_subimage_obj > EXT_unpack_subimage_obj::__new()
{  hx::ObjectPtr< EXT_unpack_subimage_obj > _result_ = new EXT_unpack_subimage_obj();
	_result_->__construct();
	return _result_;}

Dynamic EXT_unpack_subimage_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< EXT_unpack_subimage_obj > _result_ = new EXT_unpack_subimage_obj();
	_result_->__construct();
	return _result_;}


EXT_unpack_subimage_obj::EXT_unpack_subimage_obj()
{
}

Dynamic EXT_unpack_subimage_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 16:
		if (HX_FIELD_EQ(inName,"UNPACK_SKIP_ROWS") ) { return UNPACK_SKIP_ROWS; }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"UNPACK_ROW_LENGTH") ) { return UNPACK_ROW_LENGTH; }
		break;
	case 18:
		if (HX_FIELD_EQ(inName,"UNPACK_SKIP_PIXELS") ) { return UNPACK_SKIP_PIXELS; }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic EXT_unpack_subimage_obj::__SetField(const ::String &inName,const Dynamic &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 16:
		if (HX_FIELD_EQ(inName,"UNPACK_SKIP_ROWS") ) { UNPACK_SKIP_ROWS=inValue.Cast< int >(); return inValue; }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"UNPACK_ROW_LENGTH") ) { UNPACK_ROW_LENGTH=inValue.Cast< int >(); return inValue; }
		break;
	case 18:
		if (HX_FIELD_EQ(inName,"UNPACK_SKIP_PIXELS") ) { UNPACK_SKIP_PIXELS=inValue.Cast< int >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void EXT_unpack_subimage_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("UNPACK_ROW_LENGTH","\x78","\x04","\xc5","\x5f"));
	outFields->push(HX_HCSTRING("UNPACK_SKIP_ROWS","\x0c","\xe6","\x50","\x4d"));
	outFields->push(HX_HCSTRING("UNPACK_SKIP_PIXELS","\xe0","\x26","\x60","\xaf"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsInt,(int)offsetof(EXT_unpack_subimage_obj,UNPACK_ROW_LENGTH),HX_HCSTRING("UNPACK_ROW_LENGTH","\x78","\x04","\xc5","\x5f")},
	{hx::fsInt,(int)offsetof(EXT_unpack_subimage_obj,UNPACK_SKIP_ROWS),HX_HCSTRING("UNPACK_SKIP_ROWS","\x0c","\xe6","\x50","\x4d")},
	{hx::fsInt,(int)offsetof(EXT_unpack_subimage_obj,UNPACK_SKIP_PIXELS),HX_HCSTRING("UNPACK_SKIP_PIXELS","\xe0","\x26","\x60","\xaf")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo *sStaticStorageInfo = 0;
#endif

static ::String sMemberFields[] = {
	HX_HCSTRING("UNPACK_ROW_LENGTH","\x78","\x04","\xc5","\x5f"),
	HX_HCSTRING("UNPACK_SKIP_ROWS","\x0c","\xe6","\x50","\x4d"),
	HX_HCSTRING("UNPACK_SKIP_PIXELS","\xe0","\x26","\x60","\xaf"),
	::String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(EXT_unpack_subimage_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(EXT_unpack_subimage_obj::__mClass,"__mClass");
};

#endif

hx::Class EXT_unpack_subimage_obj::__mClass;

void EXT_unpack_subimage_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("lime.graphics.opengl.ext.EXT_unpack_subimage","\xe8","\x6c","\x60","\x32");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = hx::Class_obj::dupFunctions(sMemberFields);
	__mClass->mCanCast = hx::TCanCast< EXT_unpack_subimage_obj >;
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
