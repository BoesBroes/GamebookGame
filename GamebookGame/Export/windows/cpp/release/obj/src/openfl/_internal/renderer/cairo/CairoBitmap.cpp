#include <hxcpp.h>

#include "hxMath.h"
#ifndef INCLUDED_lime_graphics_cairo_Cairo
#include <lime/graphics/cairo/Cairo.h>
#endif
#ifndef INCLUDED_lime_graphics_cairo__CairoPattern_CairoPattern_Impl_
#include <lime/graphics/cairo/_CairoPattern/CairoPattern_Impl_.h>
#endif
#ifndef INCLUDED_lime_math_Matrix3
#include <lime/math/Matrix3.h>
#endif
#ifndef INCLUDED_openfl__internal_renderer_AbstractMaskManager
#include <openfl/_internal/renderer/AbstractMaskManager.h>
#endif
#ifndef INCLUDED_openfl__internal_renderer_RenderSession
#include <openfl/_internal/renderer/RenderSession.h>
#endif
#ifndef INCLUDED_openfl__internal_renderer_cairo_CairoBitmap
#include <openfl/_internal/renderer/cairo/CairoBitmap.h>
#endif
#ifndef INCLUDED_openfl_display_Bitmap
#include <openfl/display/Bitmap.h>
#endif
#ifndef INCLUDED_openfl_display_BitmapData
#include <openfl/display/BitmapData.h>
#endif
#ifndef INCLUDED_openfl_display_DisplayObject
#include <openfl/display/DisplayObject.h>
#endif
#ifndef INCLUDED_openfl_display_IBitmapDrawable
#include <openfl/display/IBitmapDrawable.h>
#endif
#ifndef INCLUDED_openfl_events_EventDispatcher
#include <openfl/events/EventDispatcher.h>
#endif
#ifndef INCLUDED_openfl_events_IEventDispatcher
#include <openfl/events/IEventDispatcher.h>
#endif
#ifndef INCLUDED_openfl_geom_Matrix
#include <openfl/geom/Matrix.h>
#endif
namespace openfl{
namespace _internal{
namespace renderer{
namespace cairo{

Void CairoBitmap_obj::__construct()
{
	return null();
}

//CairoBitmap_obj::~CairoBitmap_obj() { }

Dynamic CairoBitmap_obj::__CreateEmpty() { return  new CairoBitmap_obj; }
hx::ObjectPtr< CairoBitmap_obj > CairoBitmap_obj::__new()
{  hx::ObjectPtr< CairoBitmap_obj > _result_ = new CairoBitmap_obj();
	_result_->__construct();
	return _result_;}

Dynamic CairoBitmap_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< CairoBitmap_obj > _result_ = new CairoBitmap_obj();
	_result_->__construct();
	return _result_;}

Void CairoBitmap_obj::render( ::openfl::display::Bitmap bitmap,::openfl::_internal::renderer::RenderSession renderSession){
{
		bool tmp = bitmap->__renderable;
		bool tmp1 = tmp;
		bool tmp2 = !(tmp1);
		bool tmp3 = !(tmp2);
		bool tmp4;
		if ((tmp3)){
			tmp4 = (bitmap->__worldAlpha <= (int)0);
		}
		else{
			tmp4 = true;
		}
		if ((tmp4)){
			return null();
		}
		::lime::graphics::cairo::Cairo cairo = renderSession->cairo;
		bool tmp5 = (bitmap->bitmapData != null());
		bool tmp6;
		if ((tmp5)){
			tmp6 = bitmap->bitmapData->__isValid;
		}
		else{
			tmp6 = false;
		}
		if ((tmp6)){
			::openfl::display::Bitmap tmp7 = bitmap;
			renderSession->maskManager->pushObject(tmp7,null());
			::openfl::geom::Matrix transform = bitmap->__renderTransform;
			bool tmp8 = renderSession->roundPixels;
			if ((tmp8)){
				::lime::math::Matrix3 tmp9 = transform->__toMatrix3();
				::lime::math::Matrix3 matrix = tmp9;
				Float tmp10 = matrix->tx;
				int tmp11 = ::Math_obj::round(tmp10);
				matrix->tx = tmp11;
				Float tmp12 = matrix->ty;
				int tmp13 = ::Math_obj::round(tmp12);
				matrix->ty = tmp13;
				::lime::math::Matrix3 tmp14 = matrix;
				cairo->set_matrix(tmp14);
			}
			else{
				::lime::math::Matrix3 tmp9 = transform->__toMatrix3();
				cairo->set_matrix(tmp9);
			}
			Dynamic tmp9 = bitmap->bitmapData->getSurface();
			Dynamic surface = tmp9;
			bool tmp10 = (surface != null());
			if ((tmp10)){
				Dynamic tmp11 = surface;
				Dynamic tmp12 = ::lime::graphics::cairo::_CairoPattern::CairoPattern_Impl__obj::createForSurface(tmp11);
				Dynamic pattern = tmp12;
				Dynamic tmp13 = pattern;
				bool tmp14 = renderSession->allowSmoothing;
				bool tmp15;
				if ((tmp14)){
					tmp15 = bitmap->smoothing;
				}
				else{
					tmp15 = false;
				}
				int tmp16;
				if ((tmp15)){
					tmp16 = (int)1;
				}
				else{
					tmp16 = (int)3;
				}
				::lime::graphics::cairo::_CairoPattern::CairoPattern_Impl__obj::set_filter(tmp13,tmp16);
				Dynamic tmp17 = pattern;
				cairo->set_source(tmp17);
				bool tmp18 = (bitmap->__worldAlpha == (int)1);
				if ((tmp18)){
					cairo->paint();
				}
				else{
					Float tmp19 = bitmap->__worldAlpha;
					cairo->paintWithAlpha(tmp19);
				}
			}
			::openfl::display::Bitmap tmp11 = bitmap;
			renderSession->maskManager->popObject(tmp11,null());
		}
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(CairoBitmap_obj,render,(void))


CairoBitmap_obj::CairoBitmap_obj()
{
}

bool CairoBitmap_obj::__GetStatic(const ::String &inName, Dynamic &outValue, hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 6:
		if (HX_FIELD_EQ(inName,"render") ) { outValue = render_dyn(); return true;  }
	}
	return false;
}

#if HXCPP_SCRIPTABLE
static hx::StorageInfo *sMemberStorageInfo = 0;
static hx::StaticInfo *sStaticStorageInfo = 0;
#endif

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(CairoBitmap_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(CairoBitmap_obj::__mClass,"__mClass");
};

#endif

hx::Class CairoBitmap_obj::__mClass;

static ::String sStaticFields[] = {
	HX_HCSTRING("render","\x56","\x6b","\x29","\x05"),
	::String(null()) };

void CairoBitmap_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("openfl._internal.renderer.cairo.CairoBitmap","\xd6","\x01","\xc6","\x83");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &CairoBitmap_obj::__GetStatic;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(sStaticFields);
	__mClass->mMembers = hx::Class_obj::dupFunctions(0 /* sMemberFields */);
	__mClass->mCanCast = hx::TCanCast< CairoBitmap_obj >;
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

} // end namespace openfl
} // end namespace _internal
} // end namespace renderer
} // end namespace cairo
