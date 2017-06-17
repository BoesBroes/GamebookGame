#include <hxcpp.h>

#ifndef INCLUDED_lime_graphics_opengl_ext_OES_compressed_ETC1_RGB8_texture
#include <lime/graphics/opengl/ext/OES_compressed_ETC1_RGB8_texture.h>
#endif
namespace lime{
namespace graphics{
namespace opengl{
namespace ext{

Void OES_compressed_ETC1_RGB8_texture_obj::__construct()
{
HX_STACK_FRAME("lime.graphics.opengl.ext.OES_compressed_ETC1_RGB8_texture","new",0x4138d4e1,"lime.graphics.opengl.ext.OES_compressed_ETC1_RGB8_texture.new","lime/graphics/opengl/ext/OES_compressed_ETC1_RGB8_texture.hx",6,0xea6c824d)
HX_STACK_THIS(this)
{
	HX_STACK_LINE(9)
	this->ETC1_RGB8_OES = (int)36196;
}
;
	return null();
}

//OES_compressed_ETC1_RGB8_texture_obj::~OES_compressed_ETC1_RGB8_texture_obj() { }

Dynamic OES_compressed_ETC1_RGB8_texture_obj::__CreateEmpty() { return  new OES_compressed_ETC1_RGB8_texture_obj; }
hx::ObjectPtr< OES_compressed_ETC1_RGB8_texture_obj > OES_compressed_ETC1_RGB8_texture_obj::__new()
{  hx::ObjectPtr< OES_compressed_ETC1_RGB8_texture_obj > _result_ = new OES_compressed_ETC1_RGB8_texture_obj();
	_result_->__construct();
	return _result_;}

Dynamic OES_compressed_ETC1_RGB8_texture_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< OES_compressed_ETC1_RGB8_texture_obj > _result_ = new OES_compressed_ETC1_RGB8_texture_obj();
	_result_->__construct();
	return _result_;}


OES_compressed_ETC1_RGB8_texture_obj::OES_compressed_ETC1_RGB8_texture_obj()
{
}

Dynamic OES_compressed_ETC1_RGB8_texture_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 13:
		if (HX_FIELD_EQ(inName,"ETC1_RGB8_OES") ) { return ETC1_RGB8_OES; }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic OES_compressed_ETC1_RGB8_texture_obj::__SetField(const ::String &inName,const Dynamic &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 13:
		if (HX_FIELD_EQ(inName,"ETC1_RGB8_OES") ) { ETC1_RGB8_OES=inValue.Cast< int >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void OES_compressed_ETC1_RGB8_texture_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("ETC1_RGB8_OES","\xab","\x04","\x61","\xeb"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsInt,(int)offsetof(OES_compressed_ETC1_RGB8_texture_obj,ETC1_RGB8_OES),HX_HCSTRING("ETC1_RGB8_OES","\xab","\x04","\x61","\xeb")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo *sStaticStorageInfo = 0;
#endif

static ::String sMemberFields[] = {
	HX_HCSTRING("ETC1_RGB8_OES","\xab","\x04","\x61","\xeb"),
	::String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(OES_compressed_ETC1_RGB8_texture_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(OES_compressed_ETC1_RGB8_texture_obj::__mClass,"__mClass");
};

#endif

hx::Class OES_compressed_ETC1_RGB8_texture_obj::__mClass;

void OES_compressed_ETC1_RGB8_texture_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("lime.graphics.opengl.ext.OES_compressed_ETC1_RGB8_texture","\x6f","\xd0","\x5a","\x2b");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = hx::Class_obj::dupFunctions(sMemberFields);
	__mClass->mCanCast = hx::TCanCast< OES_compressed_ETC1_RGB8_texture_obj >;
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
