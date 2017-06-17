#include <hxcpp.h>

#ifndef INCLUDED_lime__backend_native_NativeCFFI
#include <lime/_backend/native/NativeCFFI.h>
#endif
#ifndef INCLUDED_lime_graphics_cairo__CairoPattern_CairoPattern_Impl_
#include <lime/graphics/cairo/_CairoPattern/CairoPattern_Impl_.h>
#endif
#ifndef INCLUDED_lime_math_Matrix3
#include <lime/math/Matrix3.h>
#endif
namespace lime{
namespace graphics{
namespace cairo{
namespace _CairoPattern{

Void CairoPattern_Impl__obj::__construct()
{
	return null();
}

//CairoPattern_Impl__obj::~CairoPattern_Impl__obj() { }

Dynamic CairoPattern_Impl__obj::__CreateEmpty() { return  new CairoPattern_Impl__obj; }
hx::ObjectPtr< CairoPattern_Impl__obj > CairoPattern_Impl__obj::__new()
{  hx::ObjectPtr< CairoPattern_Impl__obj > _result_ = new CairoPattern_Impl__obj();
	_result_->__construct();
	return _result_;}

Dynamic CairoPattern_Impl__obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< CairoPattern_Impl__obj > _result_ = new CairoPattern_Impl__obj();
	_result_->__construct();
	return _result_;}

Dynamic CairoPattern_Impl__obj::_new( Dynamic handle){
	HX_STACK_FRAME("lime.graphics.cairo._CairoPattern.CairoPattern_Impl_","_new",0xc71fdbd0,"lime.graphics.cairo._CairoPattern.CairoPattern_Impl_._new","lime/graphics/cairo/CairoPattern.hx",22,0x9806f3a5)
	HX_STACK_ARG(handle,"handle")
	HX_STACK_LINE(22)
	Dynamic tmp = handle;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(22)
	return tmp;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(CairoPattern_Impl__obj,_new,return )

Void CairoPattern_Impl__obj::addColorStopRGB( Dynamic this1,Float offset,Float r,Float g,Float b){
{
		HX_STACK_FRAME("lime.graphics.cairo._CairoPattern.CairoPattern_Impl_","addColorStopRGB",0xfbbadaba,"lime.graphics.cairo._CairoPattern.CairoPattern_Impl_.addColorStopRGB","lime/graphics/cairo/CairoPattern.hx",30,0x9806f3a5)
		HX_STACK_ARG(this1,"this1")
		HX_STACK_ARG(offset,"offset")
		HX_STACK_ARG(r,"r")
		HX_STACK_ARG(g,"g")
		HX_STACK_ARG(b,"b")
		HX_STACK_LINE(30)
		::lime::_backend::native::NativeCFFI_obj::cffi_lime_cairo_pattern_add_color_stop_rgb.call(hx::DynamicPtr(this1),offset,r,g,b);
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC5(CairoPattern_Impl__obj,addColorStopRGB,(void))

Void CairoPattern_Impl__obj::addColorStopRGBA( Dynamic this1,Float offset,Float r,Float g,Float b,Float a){
{
		HX_STACK_FRAME("lime.graphics.cairo._CairoPattern.CairoPattern_Impl_","addColorStopRGBA",0x47c48847,"lime.graphics.cairo._CairoPattern.CairoPattern_Impl_.addColorStopRGBA","lime/graphics/cairo/CairoPattern.hx",39,0x9806f3a5)
		HX_STACK_ARG(this1,"this1")
		HX_STACK_ARG(offset,"offset")
		HX_STACK_ARG(r,"r")
		HX_STACK_ARG(g,"g")
		HX_STACK_ARG(b,"b")
		HX_STACK_ARG(a,"a")
		HX_STACK_LINE(39)
		::lime::_backend::native::NativeCFFI_obj::cffi_lime_cairo_pattern_add_color_stop_rgba.call(hx::DynamicPtr(this1),offset,r,g,b,a);
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC6(CairoPattern_Impl__obj,addColorStopRGBA,(void))

Dynamic CairoPattern_Impl__obj::createForSurface( Dynamic surface){
	HX_STACK_FRAME("lime.graphics.cairo._CairoPattern.CairoPattern_Impl_","createForSurface",0x941f592f,"lime.graphics.cairo._CairoPattern.CairoPattern_Impl_.createForSurface","lime/graphics/cairo/CairoPattern.hx",45,0x9806f3a5)
	HX_STACK_ARG(surface,"surface")
	HX_STACK_LINE(48)
	Dynamic tmp;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(48)
	{
		HX_STACK_LINE(48)
		::hx::Object * inVal = ::lime::_backend::native::NativeCFFI_obj::cffi_lime_cairo_pattern_create_for_surface.call(hx::DynamicPtr(surface));		HX_STACK_VAR(inVal,"inVal");
		HX_STACK_LINE(48)
		::hx::Object * tmp1 = inVal;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(48)
		::hx::Object * tmp2 = hx::DynamicPtr(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(48)
		tmp = Dynamic(tmp2);
	}
	HX_STACK_LINE(48)
	return tmp;
	HX_STACK_LINE(48)
	return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(CairoPattern_Impl__obj,createForSurface,return )

Dynamic CairoPattern_Impl__obj::createLinear( Float x0,Float y0,Float x1,Float y1){
	HX_STACK_FRAME("lime.graphics.cairo._CairoPattern.CairoPattern_Impl_","createLinear",0xc4d8df70,"lime.graphics.cairo._CairoPattern.CairoPattern_Impl_.createLinear","lime/graphics/cairo/CairoPattern.hx",56,0x9806f3a5)
	HX_STACK_ARG(x0,"x0")
	HX_STACK_ARG(y0,"y0")
	HX_STACK_ARG(x1,"x1")
	HX_STACK_ARG(y1,"y1")
	HX_STACK_LINE(59)
	Dynamic tmp;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(59)
	{
		HX_STACK_LINE(59)
		::hx::Object * inVal = ::lime::_backend::native::NativeCFFI_obj::cffi_lime_cairo_pattern_create_linear.call(x0,y0,x1,y1);		HX_STACK_VAR(inVal,"inVal");
		HX_STACK_LINE(59)
		::hx::Object * tmp1 = inVal;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(59)
		::hx::Object * tmp2 = hx::DynamicPtr(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(59)
		tmp = Dynamic(tmp2);
	}
	HX_STACK_LINE(59)
	return tmp;
	HX_STACK_LINE(59)
	return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC4(CairoPattern_Impl__obj,createLinear,return )

Dynamic CairoPattern_Impl__obj::createRadial( Float cx0,Float cy0,Float radius0,Float cx1,Float cy1,Float radius1){
	HX_STACK_FRAME("lime.graphics.cairo._CairoPattern.CairoPattern_Impl_","createRadial",0x892f4c6a,"lime.graphics.cairo._CairoPattern.CairoPattern_Impl_.createRadial","lime/graphics/cairo/CairoPattern.hx",67,0x9806f3a5)
	HX_STACK_ARG(cx0,"cx0")
	HX_STACK_ARG(cy0,"cy0")
	HX_STACK_ARG(radius0,"radius0")
	HX_STACK_ARG(cx1,"cx1")
	HX_STACK_ARG(cy1,"cy1")
	HX_STACK_ARG(radius1,"radius1")
	HX_STACK_LINE(70)
	Dynamic tmp;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(70)
	{
		HX_STACK_LINE(70)
		::hx::Object * inVal = ::lime::_backend::native::NativeCFFI_obj::cffi_lime_cairo_pattern_create_radial.call(cx0,cy0,radius0,cx1,cy1,radius1);		HX_STACK_VAR(inVal,"inVal");
		HX_STACK_LINE(70)
		::hx::Object * tmp1 = inVal;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(70)
		::hx::Object * tmp2 = hx::DynamicPtr(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(70)
		tmp = Dynamic(tmp2);
	}
	HX_STACK_LINE(70)
	return tmp;
	HX_STACK_LINE(70)
	return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC6(CairoPattern_Impl__obj,createRadial,return )

Dynamic CairoPattern_Impl__obj::createRGB( Float r,Float g,Float b){
	HX_STACK_FRAME("lime.graphics.cairo._CairoPattern.CairoPattern_Impl_","createRGB",0xccf31ca2,"lime.graphics.cairo._CairoPattern.CairoPattern_Impl_.createRGB","lime/graphics/cairo/CairoPattern.hx",78,0x9806f3a5)
	HX_STACK_ARG(r,"r")
	HX_STACK_ARG(g,"g")
	HX_STACK_ARG(b,"b")
	HX_STACK_LINE(81)
	Dynamic tmp;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(81)
	{
		HX_STACK_LINE(81)
		::hx::Object * inVal = ::lime::_backend::native::NativeCFFI_obj::cffi_lime_cairo_pattern_create_rgb.call(r,g,b);		HX_STACK_VAR(inVal,"inVal");
		HX_STACK_LINE(81)
		::hx::Object * tmp1 = inVal;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(81)
		::hx::Object * tmp2 = hx::DynamicPtr(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(81)
		tmp = Dynamic(tmp2);
	}
	HX_STACK_LINE(81)
	return tmp;
	HX_STACK_LINE(81)
	return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC3(CairoPattern_Impl__obj,createRGB,return )

Dynamic CairoPattern_Impl__obj::createRGBA( Float r,Float g,Float b,Float a){
	HX_STACK_FRAME("lime.graphics.cairo._CairoPattern.CairoPattern_Impl_","createRGBA",0x87c5f15f,"lime.graphics.cairo._CairoPattern.CairoPattern_Impl_.createRGBA","lime/graphics/cairo/CairoPattern.hx",89,0x9806f3a5)
	HX_STACK_ARG(r,"r")
	HX_STACK_ARG(g,"g")
	HX_STACK_ARG(b,"b")
	HX_STACK_ARG(a,"a")
	HX_STACK_LINE(92)
	Dynamic tmp;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(92)
	{
		HX_STACK_LINE(92)
		::hx::Object * inVal = ::lime::_backend::native::NativeCFFI_obj::cffi_lime_cairo_pattern_create_rgba.call(r,g,b,a);		HX_STACK_VAR(inVal,"inVal");
		HX_STACK_LINE(92)
		::hx::Object * tmp1 = inVal;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(92)
		::hx::Object * tmp2 = hx::DynamicPtr(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(92)
		tmp = Dynamic(tmp2);
	}
	HX_STACK_LINE(92)
	return tmp;
	HX_STACK_LINE(92)
	return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC4(CairoPattern_Impl__obj,createRGBA,return )

int CairoPattern_Impl__obj::get_colorStopCount( Dynamic this1){
	HX_STACK_FRAME("lime.graphics.cairo._CairoPattern.CairoPattern_Impl_","get_colorStopCount",0x1c959302,"lime.graphics.cairo._CairoPattern.CairoPattern_Impl_.get_colorStopCount","lime/graphics/cairo/CairoPattern.hx",110,0x9806f3a5)
	HX_STACK_ARG(this1,"this1")
	HX_STACK_LINE(110)
	return ::lime::_backend::native::NativeCFFI_obj::cffi_lime_cairo_pattern_get_color_stop_count.call(hx::DynamicPtr(this1));
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(CairoPattern_Impl__obj,get_colorStopCount,return )

int CairoPattern_Impl__obj::get_extend( Dynamic this1){
	HX_STACK_FRAME("lime.graphics.cairo._CairoPattern.CairoPattern_Impl_","get_extend",0xe14a0552,"lime.graphics.cairo._CairoPattern.CairoPattern_Impl_.get_extend","lime/graphics/cairo/CairoPattern.hx",121,0x9806f3a5)
	HX_STACK_ARG(this1,"this1")
	HX_STACK_LINE(121)
	return ::lime::_backend::native::NativeCFFI_obj::cffi_lime_cairo_pattern_get_extend.call(hx::DynamicPtr(this1));
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(CairoPattern_Impl__obj,get_extend,return )

int CairoPattern_Impl__obj::set_extend( Dynamic this1,int value){
	HX_STACK_FRAME("lime.graphics.cairo._CairoPattern.CairoPattern_Impl_","set_extend",0xe4c7a3c6,"lime.graphics.cairo._CairoPattern.CairoPattern_Impl_.set_extend","lime/graphics/cairo/CairoPattern.hx",129,0x9806f3a5)
	HX_STACK_ARG(this1,"this1")
	HX_STACK_ARG(value,"value")
	HX_STACK_LINE(132)
	::lime::_backend::native::NativeCFFI_obj::cffi_lime_cairo_pattern_set_extend.call(hx::DynamicPtr(this1),value);
	HX_STACK_LINE(135)
	int tmp = value;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(135)
	return tmp;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(CairoPattern_Impl__obj,set_extend,return )

int CairoPattern_Impl__obj::get_filter( Dynamic this1){
	HX_STACK_FRAME("lime.graphics.cairo._CairoPattern.CairoPattern_Impl_","get_filter",0x9f645330,"lime.graphics.cairo._CairoPattern.CairoPattern_Impl_.get_filter","lime/graphics/cairo/CairoPattern.hx",143,0x9806f3a5)
	HX_STACK_ARG(this1,"this1")
	HX_STACK_LINE(143)
	return ::lime::_backend::native::NativeCFFI_obj::cffi_lime_cairo_pattern_get_filter.call(hx::DynamicPtr(this1));
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(CairoPattern_Impl__obj,get_filter,return )

int CairoPattern_Impl__obj::set_filter( Dynamic this1,int value){
	HX_STACK_FRAME("lime.graphics.cairo._CairoPattern.CairoPattern_Impl_","set_filter",0xa2e1f1a4,"lime.graphics.cairo._CairoPattern.CairoPattern_Impl_.set_filter","lime/graphics/cairo/CairoPattern.hx",151,0x9806f3a5)
	HX_STACK_ARG(this1,"this1")
	HX_STACK_ARG(value,"value")
	HX_STACK_LINE(154)
	::lime::_backend::native::NativeCFFI_obj::cffi_lime_cairo_pattern_set_filter.call(hx::DynamicPtr(this1),value);
	HX_STACK_LINE(157)
	int tmp = value;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(157)
	return tmp;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(CairoPattern_Impl__obj,set_filter,return )

::lime::math::Matrix3 CairoPattern_Impl__obj::get_matrix( Dynamic this1){
	HX_STACK_FRAME("lime.graphics.cairo._CairoPattern.CairoPattern_Impl_","get_matrix",0xd5f769b9,"lime.graphics.cairo._CairoPattern.CairoPattern_Impl_.get_matrix","lime/graphics/cairo/CairoPattern.hx",162,0x9806f3a5)
	HX_STACK_ARG(this1,"this1")
	HX_STACK_LINE(165)
	Dynamic m = ((Dynamic)(::lime::_backend::native::NativeCFFI_obj::cffi_lime_cairo_pattern_get_matrix.call(hx::DynamicPtr(this1))));		HX_STACK_VAR(m,"m");
	HX_STACK_LINE(166)
	::lime::math::Matrix3 tmp = ::lime::math::Matrix3_obj::__new(m->__Field(HX_HCSTRING("a","\x61","\x00","\x00","\x00"), hx::paccDynamic ),m->__Field(HX_HCSTRING("b","\x62","\x00","\x00","\x00"), hx::paccDynamic ),m->__Field(HX_HCSTRING("c","\x63","\x00","\x00","\x00"), hx::paccDynamic ),m->__Field(HX_HCSTRING("d","\x64","\x00","\x00","\x00"), hx::paccDynamic ),m->__Field(HX_HCSTRING("tx","\x84","\x65","\x00","\x00"), hx::paccDynamic ),m->__Field(HX_HCSTRING("ty","\x85","\x65","\x00","\x00"), hx::paccDynamic ));		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(166)
	return tmp;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(CairoPattern_Impl__obj,get_matrix,return )

::lime::math::Matrix3 CairoPattern_Impl__obj::set_matrix( Dynamic this1,::lime::math::Matrix3 value){
	HX_STACK_FRAME("lime.graphics.cairo._CairoPattern.CairoPattern_Impl_","set_matrix",0xd975082d,"lime.graphics.cairo._CairoPattern.CairoPattern_Impl_.set_matrix","lime/graphics/cairo/CairoPattern.hx",174,0x9806f3a5)
	HX_STACK_ARG(this1,"this1")
	HX_STACK_ARG(value,"value")
	HX_STACK_LINE(177)
	::lime::_backend::native::NativeCFFI_obj::cffi_lime_cairo_pattern_set_matrix.call(hx::DynamicPtr(this1),hx::DynamicPtr(value));
	HX_STACK_LINE(180)
	::lime::math::Matrix3 tmp = value;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(180)
	return tmp;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(CairoPattern_Impl__obj,set_matrix,return )


CairoPattern_Impl__obj::CairoPattern_Impl__obj()
{
}

bool CairoPattern_Impl__obj::__GetStatic(const ::String &inName, Dynamic &outValue, hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"_new") ) { outValue = _new_dyn(); return true;  }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"createRGB") ) { outValue = createRGB_dyn(); return true;  }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"createRGBA") ) { outValue = createRGBA_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"get_extend") ) { outValue = get_extend_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"set_extend") ) { outValue = set_extend_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"get_filter") ) { outValue = get_filter_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"set_filter") ) { outValue = set_filter_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"get_matrix") ) { outValue = get_matrix_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"set_matrix") ) { outValue = set_matrix_dyn(); return true;  }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"createLinear") ) { outValue = createLinear_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"createRadial") ) { outValue = createRadial_dyn(); return true;  }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"addColorStopRGB") ) { outValue = addColorStopRGB_dyn(); return true;  }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"addColorStopRGBA") ) { outValue = addColorStopRGBA_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"createForSurface") ) { outValue = createForSurface_dyn(); return true;  }
		break;
	case 18:
		if (HX_FIELD_EQ(inName,"get_colorStopCount") ) { outValue = get_colorStopCount_dyn(); return true;  }
	}
	return false;
}

#if HXCPP_SCRIPTABLE
static hx::StorageInfo *sMemberStorageInfo = 0;
static hx::StaticInfo *sStaticStorageInfo = 0;
#endif

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(CairoPattern_Impl__obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(CairoPattern_Impl__obj::__mClass,"__mClass");
};

#endif

hx::Class CairoPattern_Impl__obj::__mClass;

static ::String sStaticFields[] = {
	HX_HCSTRING("_new","\x61","\x15","\x1f","\x3f"),
	HX_HCSTRING("addColorStopRGB","\xc9","\x58","\xf1","\xf2"),
	HX_HCSTRING("addColorStopRGBA","\x58","\x57","\x3c","\xa0"),
	HX_HCSTRING("createForSurface","\x40","\x28","\x97","\xec"),
	HX_HCSTRING("createLinear","\x01","\x92","\xf5","\x0e"),
	HX_HCSTRING("createRadial","\xfb","\xfe","\x4b","\xd3"),
	HX_HCSTRING("createRGB","\x71","\x95","\xe4","\x49"),
	HX_HCSTRING("createRGBA","\xb0","\x2d","\x1e","\x5e"),
	HX_HCSTRING("get_colorStopCount","\x53","\x08","\xec","\x5d"),
	HX_HCSTRING("get_extend","\xa3","\x41","\xa2","\xb7"),
	HX_HCSTRING("set_extend","\x17","\xe0","\x1f","\xbb"),
	HX_HCSTRING("get_filter","\x81","\x8f","\xbc","\x75"),
	HX_HCSTRING("set_filter","\xf5","\x2d","\x3a","\x79"),
	HX_HCSTRING("get_matrix","\x0a","\xa6","\x4f","\xac"),
	HX_HCSTRING("set_matrix","\x7e","\x44","\xcd","\xaf"),
	::String(null()) };

void CairoPattern_Impl__obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("lime.graphics.cairo._CairoPattern.CairoPattern_Impl_","\x5f","\x30","\x47","\xb0");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &CairoPattern_Impl__obj::__GetStatic;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(sStaticFields);
	__mClass->mMembers = hx::Class_obj::dupFunctions(0 /* sMemberFields */);
	__mClass->mCanCast = hx::TCanCast< CairoPattern_Impl__obj >;
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
} // end namespace _CairoPattern
