#include <hxcpp.h>

#include "hxMath.h"
#ifndef INCLUDED_lime_graphics_cairo_Cairo
#include <lime/graphics/cairo/Cairo.h>
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
#ifndef INCLUDED_openfl__internal_renderer_cairo_CairoGraphics
#include <openfl/_internal/renderer/cairo/CairoGraphics.h>
#endif
#ifndef INCLUDED_openfl__internal_renderer_cairo_CairoShape
#include <openfl/_internal/renderer/cairo/CairoShape.h>
#endif
#ifndef INCLUDED_openfl_display_DisplayObject
#include <openfl/display/DisplayObject.h>
#endif
#ifndef INCLUDED_openfl_display_Graphics
#include <openfl/display/Graphics.h>
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
#ifndef INCLUDED_openfl_geom_Rectangle
#include <openfl/geom/Rectangle.h>
#endif
namespace openfl{
namespace _internal{
namespace renderer{
namespace cairo{

Void CairoShape_obj::__construct()
{
	return null();
}

//CairoShape_obj::~CairoShape_obj() { }

Dynamic CairoShape_obj::__CreateEmpty() { return  new CairoShape_obj; }
hx::ObjectPtr< CairoShape_obj > CairoShape_obj::__new()
{  hx::ObjectPtr< CairoShape_obj > _result_ = new CairoShape_obj();
	_result_->__construct();
	return _result_;}

Dynamic CairoShape_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< CairoShape_obj > _result_ = new CairoShape_obj();
	_result_->__construct();
	return _result_;}

Void CairoShape_obj::render( ::openfl::display::DisplayObject shape,::openfl::_internal::renderer::RenderSession renderSession){
{
		bool tmp = shape->__renderable;
		bool tmp1 = tmp;
		bool tmp2 = !(tmp1);
		bool tmp3 = !(tmp2);
		bool tmp4;
		if ((tmp3)){
			tmp4 = (shape->__worldAlpha <= (int)0);
		}
		else{
			tmp4 = true;
		}
		if ((tmp4)){
			return null();
		}
		::openfl::display::Graphics graphics = shape->__graphics;
		bool tmp5 = (graphics != null());
		if ((tmp5)){
			::openfl::display::Graphics tmp6 = graphics;
			::openfl::_internal::renderer::RenderSession tmp7 = renderSession;
			::openfl::geom::Matrix tmp8 = shape->__renderTransform;
			::openfl::_internal::renderer::cairo::CairoGraphics_obj::render(tmp6,tmp7,tmp8);
			::openfl::geom::Rectangle bounds = graphics->__bounds;
			bool tmp9 = (graphics->__cairo != null());
			bool tmp10 = tmp9;
			bool tmp11;
			if ((tmp10)){
				tmp11 = graphics->__visible;
			}
			else{
				tmp11 = false;
			}
			bool tmp12 = tmp11;
			bool tmp13;
			if ((tmp12)){
				tmp13 = (bounds != null());
			}
			else{
				tmp13 = false;
			}
			bool tmp14 = tmp13;
			bool tmp15;
			if ((tmp14)){
				tmp15 = (graphics->__width >= (int)1);
			}
			else{
				tmp15 = false;
			}
			bool tmp16;
			if ((tmp15)){
				tmp16 = (graphics->__height >= (int)1);
			}
			else{
				tmp16 = false;
			}
			if ((tmp16)){
				::openfl::display::DisplayObject tmp17 = shape;
				renderSession->maskManager->pushObject(tmp17,null());
				::lime::graphics::cairo::Cairo cairo = renderSession->cairo;
				bool tmp18 = renderSession->roundPixels;
				if ((tmp18)){
					::lime::math::Matrix3 tmp19 = graphics->__worldTransform->__toMatrix3();
					::lime::math::Matrix3 matrix = tmp19;
					Float tmp20 = matrix->tx;
					int tmp21 = ::Math_obj::round(tmp20);
					matrix->tx = tmp21;
					Float tmp22 = matrix->ty;
					int tmp23 = ::Math_obj::round(tmp22);
					matrix->ty = tmp23;
					::lime::math::Matrix3 tmp24 = matrix;
					cairo->set_matrix(tmp24);
				}
				else{
					::lime::math::Matrix3 tmp19 = graphics->__worldTransform->__toMatrix3();
					cairo->set_matrix(tmp19);
				}
				Dynamic tmp19 = graphics->__cairo->get_target();
				cairo->setSourceSurface(tmp19,(int)0,(int)0);
				Float tmp20 = shape->__worldAlpha;
				cairo->paintWithAlpha(tmp20);
				::openfl::display::DisplayObject tmp21 = shape;
				renderSession->maskManager->popObject(tmp21,null());
			}
		}
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(CairoShape_obj,render,(void))


CairoShape_obj::CairoShape_obj()
{
}

bool CairoShape_obj::__GetStatic(const ::String &inName, Dynamic &outValue, hx::PropertyAccess inCallProp)
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
	HX_MARK_MEMBER_NAME(CairoShape_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(CairoShape_obj::__mClass,"__mClass");
};

#endif

hx::Class CairoShape_obj::__mClass;

static ::String sStaticFields[] = {
	HX_HCSTRING("render","\x56","\x6b","\x29","\x05"),
	::String(null()) };

void CairoShape_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("openfl._internal.renderer.cairo.CairoShape","\x1a","\xeb","\xc9","\x00");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &CairoShape_obj::__GetStatic;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(sStaticFields);
	__mClass->mMembers = hx::Class_obj::dupFunctions(0 /* sMemberFields */);
	__mClass->mCanCast = hx::TCanCast< CairoShape_obj >;
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
