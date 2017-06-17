#include <hxcpp.h>

#ifndef INCLUDED_lime_graphics_opengl_ext_EXT_bgra
#include <lime/graphics/opengl/ext/EXT_bgra.h>
#endif
namespace lime{
namespace graphics{
namespace opengl{
namespace ext{

Void EXT_bgra_obj::__construct()
{
HX_STACK_FRAME("lime.graphics.opengl.ext.EXT_bgra","new",0x426ab806,"lime.graphics.opengl.ext.EXT_bgra.new","lime/graphics/opengl/ext/EXT_bgra.hx",6,0xf6e9a0c8)
HX_STACK_THIS(this)
{
	HX_STACK_LINE(10)
	this->BGRA_EXT = (int)32993;
	HX_STACK_LINE(9)
	this->BGR_EXT = (int)32992;
}
;
	return null();
}

//EXT_bgra_obj::~EXT_bgra_obj() { }

Dynamic EXT_bgra_obj::__CreateEmpty() { return  new EXT_bgra_obj; }
hx::ObjectPtr< EXT_bgra_obj > EXT_bgra_obj::__new()
{  hx::ObjectPtr< EXT_bgra_obj > _result_ = new EXT_bgra_obj();
	_result_->__construct();
	return _result_;}

Dynamic EXT_bgra_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< EXT_bgra_obj > _result_ = new EXT_bgra_obj();
	_result_->__construct();
	return _result_;}


EXT_bgra_obj::EXT_bgra_obj()
{
}

Dynamic EXT_bgra_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 7:
		if (HX_FIELD_EQ(inName,"BGR_EXT") ) { return BGR_EXT; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"BGRA_EXT") ) { return BGRA_EXT; }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic EXT_bgra_obj::__SetField(const ::String &inName,const Dynamic &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 7:
		if (HX_FIELD_EQ(inName,"BGR_EXT") ) { BGR_EXT=inValue.Cast< int >(); return inValue; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"BGRA_EXT") ) { BGRA_EXT=inValue.Cast< int >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void EXT_bgra_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("BGR_EXT","\xef","\xba","\xba","\x91"));
	outFields->push(HX_HCSTRING("BGRA_EXT","\x36","\x94","\xc4","\xbc"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsInt,(int)offsetof(EXT_bgra_obj,BGR_EXT),HX_HCSTRING("BGR_EXT","\xef","\xba","\xba","\x91")},
	{hx::fsInt,(int)offsetof(EXT_bgra_obj,BGRA_EXT),HX_HCSTRING("BGRA_EXT","\x36","\x94","\xc4","\xbc")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo *sStaticStorageInfo = 0;
#endif

static ::String sMemberFields[] = {
	HX_HCSTRING("BGR_EXT","\xef","\xba","\xba","\x91"),
	HX_HCSTRING("BGRA_EXT","\x36","\x94","\xc4","\xbc"),
	::String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(EXT_bgra_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(EXT_bgra_obj::__mClass,"__mClass");
};

#endif

hx::Class EXT_bgra_obj::__mClass;

void EXT_bgra_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("lime.graphics.opengl.ext.EXT_bgra","\x14","\xfd","\xe8","\xaa");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = hx::Class_obj::dupFunctions(sMemberFields);
	__mClass->mCanCast = hx::TCanCast< EXT_bgra_obj >;
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
