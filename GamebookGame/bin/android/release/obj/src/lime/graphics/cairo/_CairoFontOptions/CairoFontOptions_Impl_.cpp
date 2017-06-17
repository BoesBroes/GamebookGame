#include <hxcpp.h>

#ifndef INCLUDED_lime__backend_native_NativeCFFI
#include <lime/_backend/native/NativeCFFI.h>
#endif
#ifndef INCLUDED_lime_graphics_cairo__CairoFontOptions_CairoFontOptions_Impl_
#include <lime/graphics/cairo/_CairoFontOptions/CairoFontOptions_Impl_.h>
#endif
namespace lime{
namespace graphics{
namespace cairo{
namespace _CairoFontOptions{

Void CairoFontOptions_Impl__obj::__construct()
{
	return null();
}

//CairoFontOptions_Impl__obj::~CairoFontOptions_Impl__obj() { }

Dynamic CairoFontOptions_Impl__obj::__CreateEmpty() { return  new CairoFontOptions_Impl__obj; }
hx::ObjectPtr< CairoFontOptions_Impl__obj > CairoFontOptions_Impl__obj::__new()
{  hx::ObjectPtr< CairoFontOptions_Impl__obj > _result_ = new CairoFontOptions_Impl__obj();
	_result_->__construct();
	return _result_;}

Dynamic CairoFontOptions_Impl__obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< CairoFontOptions_Impl__obj > _result_ = new CairoFontOptions_Impl__obj();
	_result_->__construct();
	return _result_;}

Dynamic CairoFontOptions_Impl__obj::_new( ){
	HX_STACK_FRAME("lime.graphics.cairo._CairoFontOptions.CairoFontOptions_Impl_","_new",0x3ba81ab0,"lime.graphics.cairo._CairoFontOptions.CairoFontOptions_Impl_._new","lime/graphics/cairo/CairoFontOptions.hx",20,0x355ba586)
	HX_STACK_LINE(20)
	Dynamic this1;		HX_STACK_VAR(this1,"this1");
	HX_STACK_LINE(23)
	Dynamic tmp;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(23)
	{
		HX_STACK_LINE(23)
		::hx::Object * inVal = ::lime::_backend::native::NativeCFFI_obj::cffi_lime_cairo_font_options_create.call();		HX_STACK_VAR(inVal,"inVal");
		HX_STACK_LINE(23)
		::hx::Object * tmp1 = inVal;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(23)
		::hx::Object * tmp2 = hx::DynamicPtr(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(23)
		tmp = Dynamic(tmp2);
	}
	HX_STACK_LINE(23)
	this1 = tmp;
	HX_STACK_LINE(20)
	Dynamic tmp1 = this1;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(20)
	return tmp1;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(CairoFontOptions_Impl__obj,_new,return )

int CairoFontOptions_Impl__obj::get_antialias( Dynamic this1){
	HX_STACK_FRAME("lime.graphics.cairo._CairoFontOptions.CairoFontOptions_Impl_","get_antialias",0xacf70356,"lime.graphics.cairo._CairoFontOptions.CairoFontOptions_Impl_.get_antialias","lime/graphics/cairo/CairoFontOptions.hx",38,0x355ba586)
	HX_STACK_ARG(this1,"this1")
	HX_STACK_LINE(41)
	return ::lime::_backend::native::NativeCFFI_obj::cffi_lime_cairo_font_options_get_antialias.call(hx::DynamicPtr(this1));
	HX_STACK_LINE(44)
	return (int)0;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(CairoFontOptions_Impl__obj,get_antialias,return )

int CairoFontOptions_Impl__obj::set_antialias( Dynamic this1,int value){
	HX_STACK_FRAME("lime.graphics.cairo._CairoFontOptions.CairoFontOptions_Impl_","set_antialias",0xf1fce562,"lime.graphics.cairo._CairoFontOptions.CairoFontOptions_Impl_.set_antialias","lime/graphics/cairo/CairoFontOptions.hx",49,0x355ba586)
	HX_STACK_ARG(this1,"this1")
	HX_STACK_ARG(value,"value")
	HX_STACK_LINE(52)
	::lime::_backend::native::NativeCFFI_obj::cffi_lime_cairo_font_options_set_antialias.call(hx::DynamicPtr(this1),value);
	HX_STACK_LINE(55)
	int tmp = value;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(55)
	return tmp;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(CairoFontOptions_Impl__obj,set_antialias,return )

int CairoFontOptions_Impl__obj::get_hintMetrics( Dynamic this1){
	HX_STACK_FRAME("lime.graphics.cairo._CairoFontOptions.CairoFontOptions_Impl_","get_hintMetrics",0xb7d30224,"lime.graphics.cairo._CairoFontOptions.CairoFontOptions_Impl_.get_hintMetrics","lime/graphics/cairo/CairoFontOptions.hx",60,0x355ba586)
	HX_STACK_ARG(this1,"this1")
	HX_STACK_LINE(63)
	return ::lime::_backend::native::NativeCFFI_obj::cffi_lime_cairo_font_options_get_hint_metrics.call(hx::DynamicPtr(this1));
	HX_STACK_LINE(66)
	return (int)0;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(CairoFontOptions_Impl__obj,get_hintMetrics,return )

int CairoFontOptions_Impl__obj::set_hintMetrics( Dynamic this1,int value){
	HX_STACK_FRAME("lime.graphics.cairo._CairoFontOptions.CairoFontOptions_Impl_","set_hintMetrics",0xb39e7f30,"lime.graphics.cairo._CairoFontOptions.CairoFontOptions_Impl_.set_hintMetrics","lime/graphics/cairo/CairoFontOptions.hx",71,0x355ba586)
	HX_STACK_ARG(this1,"this1")
	HX_STACK_ARG(value,"value")
	HX_STACK_LINE(74)
	::lime::_backend::native::NativeCFFI_obj::cffi_lime_cairo_font_options_set_hint_metrics.call(hx::DynamicPtr(this1),value);
	HX_STACK_LINE(77)
	int tmp = value;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(77)
	return tmp;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(CairoFontOptions_Impl__obj,set_hintMetrics,return )

int CairoFontOptions_Impl__obj::get_hintStyle( Dynamic this1){
	HX_STACK_FRAME("lime.graphics.cairo._CairoFontOptions.CairoFontOptions_Impl_","get_hintStyle",0xb5ba9ad2,"lime.graphics.cairo._CairoFontOptions.CairoFontOptions_Impl_.get_hintStyle","lime/graphics/cairo/CairoFontOptions.hx",83,0x355ba586)
	HX_STACK_ARG(this1,"this1")
	HX_STACK_LINE(86)
	return ::lime::_backend::native::NativeCFFI_obj::cffi_lime_cairo_font_options_get_hint_style.call(hx::DynamicPtr(this1));
	HX_STACK_LINE(89)
	return (int)0;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(CairoFontOptions_Impl__obj,get_hintStyle,return )

int CairoFontOptions_Impl__obj::set_hintStyle( Dynamic this1,int value){
	HX_STACK_FRAME("lime.graphics.cairo._CairoFontOptions.CairoFontOptions_Impl_","set_hintStyle",0xfac07cde,"lime.graphics.cairo._CairoFontOptions.CairoFontOptions_Impl_.set_hintStyle","lime/graphics/cairo/CairoFontOptions.hx",94,0x355ba586)
	HX_STACK_ARG(this1,"this1")
	HX_STACK_ARG(value,"value")
	HX_STACK_LINE(97)
	::lime::_backend::native::NativeCFFI_obj::cffi_lime_cairo_font_options_set_hint_style.call(hx::DynamicPtr(this1),value);
	HX_STACK_LINE(100)
	int tmp = value;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(100)
	return tmp;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(CairoFontOptions_Impl__obj,set_hintStyle,return )

int CairoFontOptions_Impl__obj::get_subpixelOrder( Dynamic this1){
	HX_STACK_FRAME("lime.graphics.cairo._CairoFontOptions.CairoFontOptions_Impl_","get_subpixelOrder",0x298e5e50,"lime.graphics.cairo._CairoFontOptions.CairoFontOptions_Impl_.get_subpixelOrder","lime/graphics/cairo/CairoFontOptions.hx",105,0x355ba586)
	HX_STACK_ARG(this1,"this1")
	HX_STACK_LINE(108)
	return ::lime::_backend::native::NativeCFFI_obj::cffi_lime_cairo_font_options_get_subpixel_order.call(hx::DynamicPtr(this1));
	HX_STACK_LINE(111)
	return (int)0;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(CairoFontOptions_Impl__obj,get_subpixelOrder,return )

int CairoFontOptions_Impl__obj::set_subpixelOrder( Dynamic this1,int value){
	HX_STACK_FRAME("lime.graphics.cairo._CairoFontOptions.CairoFontOptions_Impl_","set_subpixelOrder",0x4cfc365c,"lime.graphics.cairo._CairoFontOptions.CairoFontOptions_Impl_.set_subpixelOrder","lime/graphics/cairo/CairoFontOptions.hx",116,0x355ba586)
	HX_STACK_ARG(this1,"this1")
	HX_STACK_ARG(value,"value")
	HX_STACK_LINE(119)
	::lime::_backend::native::NativeCFFI_obj::cffi_lime_cairo_font_options_set_subpixel_order.call(hx::DynamicPtr(this1),value);
	HX_STACK_LINE(122)
	int tmp = value;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(122)
	return tmp;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(CairoFontOptions_Impl__obj,set_subpixelOrder,return )


CairoFontOptions_Impl__obj::CairoFontOptions_Impl__obj()
{
}

bool CairoFontOptions_Impl__obj::__GetStatic(const ::String &inName, Dynamic &outValue, hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"_new") ) { outValue = _new_dyn(); return true;  }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"get_antialias") ) { outValue = get_antialias_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"set_antialias") ) { outValue = set_antialias_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"get_hintStyle") ) { outValue = get_hintStyle_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"set_hintStyle") ) { outValue = set_hintStyle_dyn(); return true;  }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"get_hintMetrics") ) { outValue = get_hintMetrics_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"set_hintMetrics") ) { outValue = set_hintMetrics_dyn(); return true;  }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"get_subpixelOrder") ) { outValue = get_subpixelOrder_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"set_subpixelOrder") ) { outValue = set_subpixelOrder_dyn(); return true;  }
	}
	return false;
}

#if HXCPP_SCRIPTABLE
static hx::StorageInfo *sMemberStorageInfo = 0;
static hx::StaticInfo *sStaticStorageInfo = 0;
#endif

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(CairoFontOptions_Impl__obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(CairoFontOptions_Impl__obj::__mClass,"__mClass");
};

#endif

hx::Class CairoFontOptions_Impl__obj::__mClass;

static ::String sStaticFields[] = {
	HX_HCSTRING("_new","\x61","\x15","\x1f","\x3f"),
	HX_HCSTRING("get_antialias","\x85","\xaa","\x4d","\x37"),
	HX_HCSTRING("set_antialias","\x91","\x8c","\x53","\x7c"),
	HX_HCSTRING("get_hintMetrics","\x13","\x13","\x85","\x82"),
	HX_HCSTRING("set_hintMetrics","\x1f","\x90","\x50","\x7e"),
	HX_HCSTRING("get_hintStyle","\x01","\x42","\x11","\x40"),
	HX_HCSTRING("set_hintStyle","\x0d","\x24","\x17","\x85"),
	HX_HCSTRING("get_subpixelOrder","\xff","\xc8","\x99","\x91"),
	HX_HCSTRING("set_subpixelOrder","\x0b","\xa1","\x07","\xb5"),
	::String(null()) };

void CairoFontOptions_Impl__obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("lime.graphics.cairo._CairoFontOptions.CairoFontOptions_Impl_","\x7f","\x5d","\x67","\x62");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &CairoFontOptions_Impl__obj::__GetStatic;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(sStaticFields);
	__mClass->mMembers = hx::Class_obj::dupFunctions(0 /* sMemberFields */);
	__mClass->mCanCast = hx::TCanCast< CairoFontOptions_Impl__obj >;
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
} // end namespace cairo
} // end namespace _CairoFontOptions
