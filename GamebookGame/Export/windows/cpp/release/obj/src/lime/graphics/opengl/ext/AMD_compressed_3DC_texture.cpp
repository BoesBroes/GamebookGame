#include <hxcpp.h>

#ifndef INCLUDED_lime_graphics_opengl_ext_AMD_compressed_3DC_texture
#include <lime/graphics/opengl/ext/AMD_compressed_3DC_texture.h>
#endif
namespace lime{
namespace graphics{
namespace opengl{
namespace ext{

Void AMD_compressed_3DC_texture_obj::__construct()
{
HX_STACK_FRAME("lime.graphics.opengl.ext.AMD_compressed_3DC_texture","new",0x9572fa2b,"lime.graphics.opengl.ext.AMD_compressed_3DC_texture.new","lime/graphics/opengl/ext/AMD_compressed_3DC_texture.hx",6,0x59f1a9c3)
HX_STACK_THIS(this)
{
	HX_STACK_LINE(10)
	this->_3DC_XY_AMD = (int)34810;
	HX_STACK_LINE(9)
	this->_3DC_X_AMD = (int)34809;
}
;
	return null();
}

//AMD_compressed_3DC_texture_obj::~AMD_compressed_3DC_texture_obj() { }

Dynamic AMD_compressed_3DC_texture_obj::__CreateEmpty() { return  new AMD_compressed_3DC_texture_obj; }
hx::ObjectPtr< AMD_compressed_3DC_texture_obj > AMD_compressed_3DC_texture_obj::__new()
{  hx::ObjectPtr< AMD_compressed_3DC_texture_obj > _result_ = new AMD_compressed_3DC_texture_obj();
	_result_->__construct();
	return _result_;}

Dynamic AMD_compressed_3DC_texture_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< AMD_compressed_3DC_texture_obj > _result_ = new AMD_compressed_3DC_texture_obj();
	_result_->__construct();
	return _result_;}


AMD_compressed_3DC_texture_obj::AMD_compressed_3DC_texture_obj()
{
}

Dynamic AMD_compressed_3DC_texture_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 10:
		if (HX_FIELD_EQ(inName,"_3DC_X_AMD") ) { return _3DC_X_AMD; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"_3DC_XY_AMD") ) { return _3DC_XY_AMD; }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic AMD_compressed_3DC_texture_obj::__SetField(const ::String &inName,const Dynamic &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 10:
		if (HX_FIELD_EQ(inName,"_3DC_X_AMD") ) { _3DC_X_AMD=inValue.Cast< int >(); return inValue; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"_3DC_XY_AMD") ) { _3DC_XY_AMD=inValue.Cast< int >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void AMD_compressed_3DC_texture_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("_3DC_X_AMD","\x25","\xfa","\x65","\x5b"));
	outFields->push(HX_HCSTRING("_3DC_XY_AMD","\xe6","\xbe","\x38","\x3d"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsInt,(int)offsetof(AMD_compressed_3DC_texture_obj,_3DC_X_AMD),HX_HCSTRING("_3DC_X_AMD","\x25","\xfa","\x65","\x5b")},
	{hx::fsInt,(int)offsetof(AMD_compressed_3DC_texture_obj,_3DC_XY_AMD),HX_HCSTRING("_3DC_XY_AMD","\xe6","\xbe","\x38","\x3d")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo *sStaticStorageInfo = 0;
#endif

static ::String sMemberFields[] = {
	HX_HCSTRING("_3DC_X_AMD","\x25","\xfa","\x65","\x5b"),
	HX_HCSTRING("_3DC_XY_AMD","\xe6","\xbe","\x38","\x3d"),
	::String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(AMD_compressed_3DC_texture_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(AMD_compressed_3DC_texture_obj::__mClass,"__mClass");
};

#endif

hx::Class AMD_compressed_3DC_texture_obj::__mClass;

void AMD_compressed_3DC_texture_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("lime.graphics.opengl.ext.AMD_compressed_3DC_texture","\xb9","\x08","\xf2","\xdb");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = hx::Class_obj::dupFunctions(sMemberFields);
	__mClass->mCanCast = hx::TCanCast< AMD_compressed_3DC_texture_obj >;
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
