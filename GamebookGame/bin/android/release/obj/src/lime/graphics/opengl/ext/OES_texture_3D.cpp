#include <hxcpp.h>

#ifndef INCLUDED_lime_graphics_opengl_ext_OES_texture_3D
#include <lime/graphics/opengl/ext/OES_texture_3D.h>
#endif
namespace lime{
namespace graphics{
namespace opengl{
namespace ext{

Void OES_texture_3D_obj::__construct()
{
HX_STACK_FRAME("lime.graphics.opengl.ext.OES_texture_3D","new",0x31a9ba2b,"lime.graphics.opengl.ext.OES_texture_3D.new","lime/graphics/opengl/ext/OES_texture_3D.hx",6,0x0ea6b4c3)
HX_STACK_THIS(this)
{
	HX_STACK_LINE(14)
	this->FRAMEBUFFER_ATTACHMENT_TEXTURE_3D_ZOFFSET_OES = (int)36052;
	HX_STACK_LINE(13)
	this->SAMPLER_3D_OES = (int)35679;
	HX_STACK_LINE(12)
	this->MAX_3D_TEXTURE_SIZE_OES = (int)32883;
	HX_STACK_LINE(11)
	this->TEXTURE_BINDING_3D_OES = (int)32874;
	HX_STACK_LINE(10)
	this->TEXTURE_3D_OES = (int)32879;
	HX_STACK_LINE(9)
	this->TEXTURE_WRAP_R_OES = (int)32882;
}
;
	return null();
}

//OES_texture_3D_obj::~OES_texture_3D_obj() { }

Dynamic OES_texture_3D_obj::__CreateEmpty() { return  new OES_texture_3D_obj; }
hx::ObjectPtr< OES_texture_3D_obj > OES_texture_3D_obj::__new()
{  hx::ObjectPtr< OES_texture_3D_obj > _result_ = new OES_texture_3D_obj();
	_result_->__construct();
	return _result_;}

Dynamic OES_texture_3D_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< OES_texture_3D_obj > _result_ = new OES_texture_3D_obj();
	_result_->__construct();
	return _result_;}


OES_texture_3D_obj::OES_texture_3D_obj()
{
}

Dynamic OES_texture_3D_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 14:
		if (HX_FIELD_EQ(inName,"TEXTURE_3D_OES") ) { return TEXTURE_3D_OES; }
		if (HX_FIELD_EQ(inName,"SAMPLER_3D_OES") ) { return SAMPLER_3D_OES; }
		break;
	case 18:
		if (HX_FIELD_EQ(inName,"TEXTURE_WRAP_R_OES") ) { return TEXTURE_WRAP_R_OES; }
		break;
	case 22:
		if (HX_FIELD_EQ(inName,"TEXTURE_BINDING_3D_OES") ) { return TEXTURE_BINDING_3D_OES; }
		break;
	case 23:
		if (HX_FIELD_EQ(inName,"MAX_3D_TEXTURE_SIZE_OES") ) { return MAX_3D_TEXTURE_SIZE_OES; }
		break;
	case 45:
		if (HX_FIELD_EQ(inName,"FRAMEBUFFER_ATTACHMENT_TEXTURE_3D_ZOFFSET_OES") ) { return FRAMEBUFFER_ATTACHMENT_TEXTURE_3D_ZOFFSET_OES; }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic OES_texture_3D_obj::__SetField(const ::String &inName,const Dynamic &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 14:
		if (HX_FIELD_EQ(inName,"TEXTURE_3D_OES") ) { TEXTURE_3D_OES=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"SAMPLER_3D_OES") ) { SAMPLER_3D_OES=inValue.Cast< int >(); return inValue; }
		break;
	case 18:
		if (HX_FIELD_EQ(inName,"TEXTURE_WRAP_R_OES") ) { TEXTURE_WRAP_R_OES=inValue.Cast< int >(); return inValue; }
		break;
	case 22:
		if (HX_FIELD_EQ(inName,"TEXTURE_BINDING_3D_OES") ) { TEXTURE_BINDING_3D_OES=inValue.Cast< int >(); return inValue; }
		break;
	case 23:
		if (HX_FIELD_EQ(inName,"MAX_3D_TEXTURE_SIZE_OES") ) { MAX_3D_TEXTURE_SIZE_OES=inValue.Cast< int >(); return inValue; }
		break;
	case 45:
		if (HX_FIELD_EQ(inName,"FRAMEBUFFER_ATTACHMENT_TEXTURE_3D_ZOFFSET_OES") ) { FRAMEBUFFER_ATTACHMENT_TEXTURE_3D_ZOFFSET_OES=inValue.Cast< int >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void OES_texture_3D_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("TEXTURE_WRAP_R_OES","\x9f","\x85","\xe8","\x16"));
	outFields->push(HX_HCSTRING("TEXTURE_3D_OES","\xf3","\x9e","\x21","\x9e"));
	outFields->push(HX_HCSTRING("TEXTURE_BINDING_3D_OES","\x0d","\x94","\x1d","\x37"));
	outFields->push(HX_HCSTRING("MAX_3D_TEXTURE_SIZE_OES","\x16","\x3e","\xa6","\x5c"));
	outFields->push(HX_HCSTRING("SAMPLER_3D_OES","\x66","\x32","\x6e","\x5c"));
	outFields->push(HX_HCSTRING("FRAMEBUFFER_ATTACHMENT_TEXTURE_3D_ZOFFSET_OES","\xcb","\x20","\xe8","\x2f"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsInt,(int)offsetof(OES_texture_3D_obj,TEXTURE_WRAP_R_OES),HX_HCSTRING("TEXTURE_WRAP_R_OES","\x9f","\x85","\xe8","\x16")},
	{hx::fsInt,(int)offsetof(OES_texture_3D_obj,TEXTURE_3D_OES),HX_HCSTRING("TEXTURE_3D_OES","\xf3","\x9e","\x21","\x9e")},
	{hx::fsInt,(int)offsetof(OES_texture_3D_obj,TEXTURE_BINDING_3D_OES),HX_HCSTRING("TEXTURE_BINDING_3D_OES","\x0d","\x94","\x1d","\x37")},
	{hx::fsInt,(int)offsetof(OES_texture_3D_obj,MAX_3D_TEXTURE_SIZE_OES),HX_HCSTRING("MAX_3D_TEXTURE_SIZE_OES","\x16","\x3e","\xa6","\x5c")},
	{hx::fsInt,(int)offsetof(OES_texture_3D_obj,SAMPLER_3D_OES),HX_HCSTRING("SAMPLER_3D_OES","\x66","\x32","\x6e","\x5c")},
	{hx::fsInt,(int)offsetof(OES_texture_3D_obj,FRAMEBUFFER_ATTACHMENT_TEXTURE_3D_ZOFFSET_OES),HX_HCSTRING("FRAMEBUFFER_ATTACHMENT_TEXTURE_3D_ZOFFSET_OES","\xcb","\x20","\xe8","\x2f")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo *sStaticStorageInfo = 0;
#endif

static ::String sMemberFields[] = {
	HX_HCSTRING("TEXTURE_WRAP_R_OES","\x9f","\x85","\xe8","\x16"),
	HX_HCSTRING("TEXTURE_3D_OES","\xf3","\x9e","\x21","\x9e"),
	HX_HCSTRING("TEXTURE_BINDING_3D_OES","\x0d","\x94","\x1d","\x37"),
	HX_HCSTRING("MAX_3D_TEXTURE_SIZE_OES","\x16","\x3e","\xa6","\x5c"),
	HX_HCSTRING("SAMPLER_3D_OES","\x66","\x32","\x6e","\x5c"),
	HX_HCSTRING("FRAMEBUFFER_ATTACHMENT_TEXTURE_3D_ZOFFSET_OES","\xcb","\x20","\xe8","\x2f"),
	::String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(OES_texture_3D_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(OES_texture_3D_obj::__mClass,"__mClass");
};

#endif

hx::Class OES_texture_3D_obj::__mClass;

void OES_texture_3D_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("lime.graphics.opengl.ext.OES_texture_3D","\xb9","\xc8","\xc8","\xe5");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = hx::Class_obj::dupFunctions(sMemberFields);
	__mClass->mCanCast = hx::TCanCast< OES_texture_3D_obj >;
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
