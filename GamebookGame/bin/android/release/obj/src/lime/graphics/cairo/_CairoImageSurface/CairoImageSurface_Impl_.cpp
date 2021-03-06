#include <hxcpp.h>

#ifndef INCLUDED_haxe_io_Bytes
#include <haxe/io/Bytes.h>
#endif
#ifndef INCLUDED_lime__backend_native_NativeCFFI
#include <lime/_backend/native/NativeCFFI.h>
#endif
#ifndef INCLUDED_lime_graphics_Image
#include <lime/graphics/Image.h>
#endif
#ifndef INCLUDED_lime_graphics_ImageBuffer
#include <lime/graphics/ImageBuffer.h>
#endif
#ifndef INCLUDED_lime_graphics_cairo__CairoImageSurface_CairoImageSurface_Impl_
#include <lime/graphics/cairo/_CairoImageSurface/CairoImageSurface_Impl_.h>
#endif
#ifndef INCLUDED_lime_utils_ArrayBufferView
#include <lime/utils/ArrayBufferView.h>
#endif
#ifndef INCLUDED_lime_utils__DataPointer_DataPointer_Impl_
#include <lime/utils/_DataPointer/DataPointer_Impl_.h>
#endif
namespace lime{
namespace graphics{
namespace cairo{
namespace _CairoImageSurface{

Void CairoImageSurface_Impl__obj::__construct()
{
	return null();
}

//CairoImageSurface_Impl__obj::~CairoImageSurface_Impl__obj() { }

Dynamic CairoImageSurface_Impl__obj::__CreateEmpty() { return  new CairoImageSurface_Impl__obj; }
hx::ObjectPtr< CairoImageSurface_Impl__obj > CairoImageSurface_Impl__obj::__new()
{  hx::ObjectPtr< CairoImageSurface_Impl__obj > _result_ = new CairoImageSurface_Impl__obj();
	_result_->__construct();
	return _result_;}

Dynamic CairoImageSurface_Impl__obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< CairoImageSurface_Impl__obj > _result_ = new CairoImageSurface_Impl__obj();
	_result_->__construct();
	return _result_;}

Dynamic CairoImageSurface_Impl__obj::_new( int format,int width,int height){
	HX_STACK_FRAME("lime.graphics.cairo._CairoImageSurface.CairoImageSurface_Impl_","_new",0x1720eff8,"lime.graphics.cairo._CairoImageSurface.CairoImageSurface_Impl_._new","lime/graphics/cairo/CairoImageSurface.hx",21,0x38340d55)
	HX_STACK_ARG(format,"format")
	HX_STACK_ARG(width,"width")
	HX_STACK_ARG(height,"height")
	HX_STACK_LINE(21)
	Dynamic this1;		HX_STACK_VAR(this1,"this1");
	HX_STACK_LINE(24)
	Dynamic tmp;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(24)
	{
		HX_STACK_LINE(24)
		::hx::Object * inVal = ::lime::_backend::native::NativeCFFI_obj::cffi_lime_cairo_image_surface_create.call(format,width,height);		HX_STACK_VAR(inVal,"inVal");
		HX_STACK_LINE(24)
		::hx::Object * tmp1 = inVal;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(24)
		::hx::Object * tmp2 = hx::DynamicPtr(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(24)
		tmp = Dynamic(tmp2);
	}
	HX_STACK_LINE(24)
	this1 = tmp;
	HX_STACK_LINE(21)
	Dynamic tmp1 = this1;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(21)
	return tmp1;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC3(CairoImageSurface_Impl__obj,_new,return )

Dynamic CairoImageSurface_Impl__obj::create( Float data,int format,int width,int height,int stride){
	HX_STACK_FRAME("lime.graphics.cairo._CairoImageSurface.CairoImageSurface_Impl_","create",0xbc2e5553,"lime.graphics.cairo._CairoImageSurface.CairoImageSurface_Impl_.create","lime/graphics/cairo/CairoImageSurface.hx",32,0x38340d55)
	HX_STACK_ARG(data,"data")
	HX_STACK_ARG(format,"format")
	HX_STACK_ARG(width,"width")
	HX_STACK_ARG(height,"height")
	HX_STACK_ARG(stride,"stride")
	HX_STACK_LINE(35)
	Dynamic tmp;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(35)
	{
		HX_STACK_LINE(35)
		::hx::Object * inVal = ::lime::_backend::native::NativeCFFI_obj::cffi_lime_cairo_image_surface_create_for_data.call(data,format,width,height,stride);		HX_STACK_VAR(inVal,"inVal");
		HX_STACK_LINE(35)
		::hx::Object * tmp1 = inVal;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(35)
		::hx::Object * tmp2 = hx::DynamicPtr(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(35)
		tmp = Dynamic(tmp2);
	}
	HX_STACK_LINE(35)
	return tmp;
	HX_STACK_LINE(35)
	return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC5(CairoImageSurface_Impl__obj,create,return )

Dynamic CairoImageSurface_Impl__obj::fromImage( ::lime::graphics::Image image){
	HX_STACK_FRAME("lime.graphics.cairo._CairoImageSurface.CairoImageSurface_Impl_","fromImage",0x22dd6b9a,"lime.graphics.cairo._CairoImageSurface.CairoImageSurface_Impl_.fromImage","lime/graphics/cairo/CairoImageSurface.hx",43,0x38340d55)
	HX_STACK_ARG(image,"image")
	HX_STACK_LINE(46)
	::lime::utils::ArrayBufferView tmp = image->get_data();		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(46)
	::haxe::io::Bytes tmp1 = tmp->buffer;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(46)
	Float tmp2 = ::lime::utils::_DataPointer::DataPointer_Impl__obj::fromArrayBuffer(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(46)
	int tmp3 = image->width;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(46)
	int tmp4 = image->height;		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(46)
	int tmp5 = image->buffer->get_stride();		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(46)
	Dynamic tmp6 = ::lime::graphics::cairo::_CairoImageSurface::CairoImageSurface_Impl__obj::create(tmp2,(int)0,tmp3,tmp4,tmp5);		HX_STACK_VAR(tmp6,"tmp6");
	HX_STACK_LINE(46)
	return tmp6;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(CairoImageSurface_Impl__obj,fromImage,return )

Float CairoImageSurface_Impl__obj::get_data( Dynamic this1){
	HX_STACK_FRAME("lime.graphics.cairo._CairoImageSurface.CairoImageSurface_Impl_","get_data",0x7a9683ca,"lime.graphics.cairo._CairoImageSurface.CairoImageSurface_Impl_.get_data","lime/graphics/cairo/CairoImageSurface.hx",64,0x38340d55)
	HX_STACK_ARG(this1,"this1")
	HX_STACK_LINE(64)
	return ::lime::_backend::native::NativeCFFI_obj::cffi_lime_cairo_image_surface_get_data.call(hx::DynamicPtr(this1));
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(CairoImageSurface_Impl__obj,get_data,return )

int CairoImageSurface_Impl__obj::get_format( Dynamic this1){
	HX_STACK_FRAME("lime.graphics.cairo._CairoImageSurface.CairoImageSurface_Impl_","get_format",0x0b2064d7,"lime.graphics.cairo._CairoImageSurface.CairoImageSurface_Impl_.get_format","lime/graphics/cairo/CairoImageSurface.hx",75,0x38340d55)
	HX_STACK_ARG(this1,"this1")
	HX_STACK_LINE(75)
	return ::lime::_backend::native::NativeCFFI_obj::cffi_lime_cairo_image_surface_get_format.call(hx::DynamicPtr(this1));
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(CairoImageSurface_Impl__obj,get_format,return )

int CairoImageSurface_Impl__obj::get_height( Dynamic this1){
	HX_STACK_FRAME("lime.graphics.cairo._CairoImageSurface.CairoImageSurface_Impl_","get_height",0x0fdddd87,"lime.graphics.cairo._CairoImageSurface.CairoImageSurface_Impl_.get_height","lime/graphics/cairo/CairoImageSurface.hx",86,0x38340d55)
	HX_STACK_ARG(this1,"this1")
	HX_STACK_LINE(86)
	return ::lime::_backend::native::NativeCFFI_obj::cffi_lime_cairo_image_surface_get_height.call(hx::DynamicPtr(this1));
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(CairoImageSurface_Impl__obj,get_height,return )

int CairoImageSurface_Impl__obj::get_stride( Dynamic this1){
	HX_STACK_FRAME("lime.graphics.cairo._CairoImageSurface.CairoImageSurface_Impl_","get_stride",0x1ec1f5b9,"lime.graphics.cairo._CairoImageSurface.CairoImageSurface_Impl_.get_stride","lime/graphics/cairo/CairoImageSurface.hx",97,0x38340d55)
	HX_STACK_ARG(this1,"this1")
	HX_STACK_LINE(97)
	return ::lime::_backend::native::NativeCFFI_obj::cffi_lime_cairo_image_surface_get_stride.call(hx::DynamicPtr(this1));
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(CairoImageSurface_Impl__obj,get_stride,return )

int CairoImageSurface_Impl__obj::get_width( Dynamic this1){
	HX_STACK_FRAME("lime.graphics.cairo._CairoImageSurface.CairoImageSurface_Impl_","get_width",0xbef77466,"lime.graphics.cairo._CairoImageSurface.CairoImageSurface_Impl_.get_width","lime/graphics/cairo/CairoImageSurface.hx",108,0x38340d55)
	HX_STACK_ARG(this1,"this1")
	HX_STACK_LINE(108)
	return ::lime::_backend::native::NativeCFFI_obj::cffi_lime_cairo_image_surface_get_width.call(hx::DynamicPtr(this1));
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(CairoImageSurface_Impl__obj,get_width,return )


CairoImageSurface_Impl__obj::CairoImageSurface_Impl__obj()
{
}

bool CairoImageSurface_Impl__obj::__GetStatic(const ::String &inName, Dynamic &outValue, hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"_new") ) { outValue = _new_dyn(); return true;  }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"create") ) { outValue = create_dyn(); return true;  }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"get_data") ) { outValue = get_data_dyn(); return true;  }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"fromImage") ) { outValue = fromImage_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"get_width") ) { outValue = get_width_dyn(); return true;  }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"get_format") ) { outValue = get_format_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"get_height") ) { outValue = get_height_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"get_stride") ) { outValue = get_stride_dyn(); return true;  }
	}
	return false;
}

#if HXCPP_SCRIPTABLE
static hx::StorageInfo *sMemberStorageInfo = 0;
static hx::StaticInfo *sStaticStorageInfo = 0;
#endif

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(CairoImageSurface_Impl__obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(CairoImageSurface_Impl__obj::__mClass,"__mClass");
};

#endif

hx::Class CairoImageSurface_Impl__obj::__mClass;

static ::String sStaticFields[] = {
	HX_HCSTRING("_new","\x61","\x15","\x1f","\x3f"),
	HX_HCSTRING("create","\xfc","\x66","\x0f","\x7c"),
	HX_HCSTRING("fromImage","\x91","\x09","\xf2","\x71"),
	HX_HCSTRING("get_data","\xb3","\x11","\x1e","\xc2"),
	HX_HCSTRING("get_format","\x00","\xff","\x15","\xee"),
	HX_HCSTRING("get_height","\xb0","\x77","\xd3","\xf2"),
	HX_HCSTRING("get_stride","\xe2","\x8f","\xb7","\x01"),
	HX_HCSTRING("get_width","\x5d","\x12","\x0c","\x0e"),
	::String(null()) };

void CairoImageSurface_Impl__obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("lime.graphics.cairo._CairoImageSurface.CairoImageSurface_Impl_","\x37","\x8d","\x2e","\x6d");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &CairoImageSurface_Impl__obj::__GetStatic;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(sStaticFields);
	__mClass->mMembers = hx::Class_obj::dupFunctions(0 /* sMemberFields */);
	__mClass->mCanCast = hx::TCanCast< CairoImageSurface_Impl__obj >;
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
} // end namespace _CairoImageSurface
