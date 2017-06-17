#include <hxcpp.h>

#ifndef INCLUDED_lime_graphics_opengl_ext_EXT_texture_format_BGRA8888
#include <lime/graphics/opengl/ext/EXT_texture_format_BGRA8888.h>
#endif
namespace lime{
namespace graphics{
namespace opengl{
namespace ext{

Void EXT_texture_format_BGRA8888_obj::__construct()
{
HX_STACK_FRAME("lime.graphics.opengl.ext.EXT_texture_format_BGRA8888","new",0xf062f3ea,"lime.graphics.opengl.ext.EXT_texture_format_BGRA8888.new","lime/graphics/opengl/ext/EXT_texture_format_BGRA8888.hx",6,0x3ffddae8)
HX_STACK_THIS(this)
{
	HX_STACK_LINE(9)
	this->BGRA_EXT = (int)32993;
}
;
	return null();
}

//EXT_texture_format_BGRA8888_obj::~EXT_texture_format_BGRA8888_obj() { }

Dynamic EXT_texture_format_BGRA8888_obj::__CreateEmpty() { return  new EXT_texture_format_BGRA8888_obj; }
hx::ObjectPtr< EXT_texture_format_BGRA8888_obj > EXT_texture_format_BGRA8888_obj::__new()
{  hx::ObjectPtr< EXT_texture_format_BGRA8888_obj > _result_ = new EXT_texture_format_BGRA8888_obj();
	_result_->__construct();
	return _result_;}

Dynamic EXT_texture_format_BGRA8888_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< EXT_texture_format_BGRA8888_obj > _result_ = new EXT_texture_format_BGRA8888_obj();
	_result_->__construct();
	return _result_;}


EXT_texture_format_BGRA8888_obj::EXT_texture_format_BGRA8888_obj()
{
}

Dynamic EXT_texture_format_BGRA8888_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 8:
		if (HX_FIELD_EQ(inName,"BGRA_EXT") ) { return BGRA_EXT; }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic EXT_texture_format_BGRA8888_obj::__SetField(const ::String &inName,const Dynamic &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 8:
		if (HX_FIELD_EQ(inName,"BGRA_EXT") ) { BGRA_EXT=inValue.Cast< int >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void EXT_texture_format_BGRA8888_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("BGRA_EXT","\x36","\x94","\xc4","\xbc"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsInt,(int)offsetof(EXT_texture_format_BGRA8888_obj,BGRA_EXT),HX_HCSTRING("BGRA_EXT","\x36","\x94","\xc4","\xbc")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo *sStaticStorageInfo = 0;
#endif

static ::String sMemberFields[] = {
	HX_HCSTRING("BGRA_EXT","\x36","\x94","\xc4","\xbc"),
	::String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(EXT_texture_format_BGRA8888_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(EXT_texture_format_BGRA8888_obj::__mClass,"__mClass");
};

#endif

hx::Class EXT_texture_format_BGRA8888_obj::__mClass;

void EXT_texture_format_BGRA8888_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("lime.graphics.opengl.ext.EXT_texture_format_BGRA8888","\xf8","\x76","\xd4","\x43");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = hx::Class_obj::dupFunctions(sMemberFields);
	__mClass->mCanCast = hx::TCanCast< EXT_texture_format_BGRA8888_obj >;
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
