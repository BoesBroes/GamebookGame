#include <hxcpp.h>

#ifndef INCLUDED_lime__backend_native_NativeCFFI
#include <lime/_backend/native/NativeCFFI.h>
#endif
#ifndef INCLUDED_lime_graphics_cairo__CairoFTFontFace_CairoFTFontFace_Impl_
#include <lime/graphics/cairo/_CairoFTFontFace/CairoFTFontFace_Impl_.h>
#endif
#ifndef INCLUDED_lime_text_Font
#include <lime/text/Font.h>
#endif
namespace lime{
namespace graphics{
namespace cairo{
namespace _CairoFTFontFace{

Void CairoFTFontFace_Impl__obj::__construct()
{
	return null();
}

//CairoFTFontFace_Impl__obj::~CairoFTFontFace_Impl__obj() { }

Dynamic CairoFTFontFace_Impl__obj::__CreateEmpty() { return  new CairoFTFontFace_Impl__obj; }
hx::ObjectPtr< CairoFTFontFace_Impl__obj > CairoFTFontFace_Impl__obj::__new()
{  hx::ObjectPtr< CairoFTFontFace_Impl__obj > _result_ = new CairoFTFontFace_Impl__obj();
	_result_->__construct();
	return _result_;}

Dynamic CairoFTFontFace_Impl__obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< CairoFTFontFace_Impl__obj > _result_ = new CairoFTFontFace_Impl__obj();
	_result_->__construct();
	return _result_;}

int CairoFTFontFace_Impl__obj::FT_LOAD_FORCE_AUTOHINT;

Dynamic CairoFTFontFace_Impl__obj::_new( ){
	HX_STACK_FRAME("lime.graphics.cairo._CairoFTFontFace.CairoFTFontFace_Impl_","_new",0x5b2d72e8,"lime.graphics.cairo._CairoFTFontFace.CairoFTFontFace_Impl_._new","lime/graphics/cairo/CairoFTFontFace.hx",19,0x9647c8cd)
	HX_STACK_LINE(19)
	return ((Dynamic)((int)0));
}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(CairoFTFontFace_Impl__obj,_new,return )

Dynamic CairoFTFontFace_Impl__obj::create( ::lime::text::Font face,int loadFlags){
	HX_STACK_FRAME("lime.graphics.cairo._CairoFTFontFace.CairoFTFontFace_Impl_","create",0x7e957443,"lime.graphics.cairo._CairoFTFontFace.CairoFTFontFace_Impl_.create","lime/graphics/cairo/CairoFTFontFace.hx",24,0x9647c8cd)
	HX_STACK_ARG(face,"face")
	HX_STACK_ARG(loadFlags,"loadFlags")
	HX_STACK_LINE(27)
	Dynamic tmp;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(27)
	{
		HX_STACK_LINE(27)
		Dynamic face1 = face->src;		HX_STACK_VAR(face1,"face1");
		HX_STACK_LINE(27)
		{
			HX_STACK_LINE(27)
			::hx::Object * inVal = ::lime::_backend::native::NativeCFFI_obj::cffi_lime_cairo_ft_font_face_create.call(hx::DynamicPtr(face1),loadFlags);		HX_STACK_VAR(inVal,"inVal");
			HX_STACK_LINE(27)
			::hx::Object * tmp1 = inVal;		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(27)
			::hx::Object * tmp2 = hx::DynamicPtr(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(27)
			tmp = Dynamic(tmp2);
		}
	}
	HX_STACK_LINE(27)
	return tmp;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(CairoFTFontFace_Impl__obj,create,return )


CairoFTFontFace_Impl__obj::CairoFTFontFace_Impl__obj()
{
}

bool CairoFTFontFace_Impl__obj::__GetStatic(const ::String &inName, Dynamic &outValue, hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"_new") ) { outValue = _new_dyn(); return true;  }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"create") ) { outValue = create_dyn(); return true;  }
	}
	return false;
}

#if HXCPP_SCRIPTABLE
static hx::StorageInfo *sMemberStorageInfo = 0;
static hx::StaticInfo sStaticStorageInfo[] = {
	{hx::fsInt,(void *) &CairoFTFontFace_Impl__obj::FT_LOAD_FORCE_AUTOHINT,HX_HCSTRING("FT_LOAD_FORCE_AUTOHINT","\x32","\xdd","\xa6","\xd5")},
	{ hx::fsUnknown, 0, null()}
};
#endif

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(CairoFTFontFace_Impl__obj::__mClass,"__mClass");
	HX_MARK_MEMBER_NAME(CairoFTFontFace_Impl__obj::FT_LOAD_FORCE_AUTOHINT,"FT_LOAD_FORCE_AUTOHINT");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(CairoFTFontFace_Impl__obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(CairoFTFontFace_Impl__obj::FT_LOAD_FORCE_AUTOHINT,"FT_LOAD_FORCE_AUTOHINT");
};

#endif

hx::Class CairoFTFontFace_Impl__obj::__mClass;

static ::String sStaticFields[] = {
	HX_HCSTRING("FT_LOAD_FORCE_AUTOHINT","\x32","\xdd","\xa6","\xd5"),
	HX_HCSTRING("_new","\x61","\x15","\x1f","\x3f"),
	HX_HCSTRING("create","\xfc","\x66","\x0f","\x7c"),
	::String(null()) };

void CairoFTFontFace_Impl__obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("lime.graphics.cairo._CairoFTFontFace.CairoFTFontFace_Impl_","\x47","\xf0","\x50","\x48");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &CairoFTFontFace_Impl__obj::__GetStatic;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(sStaticFields);
	__mClass->mMembers = hx::Class_obj::dupFunctions(0 /* sMemberFields */);
	__mClass->mCanCast = hx::TCanCast< CairoFTFontFace_Impl__obj >;
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

void CairoFTFontFace_Impl__obj::__boot()
{
	FT_LOAD_FORCE_AUTOHINT= (int)32;
}

} // end namespace lime
} // end namespace graphics
} // end namespace cairo
} // end namespace _CairoFTFontFace
