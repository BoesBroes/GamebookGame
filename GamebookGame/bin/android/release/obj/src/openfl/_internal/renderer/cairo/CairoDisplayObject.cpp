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
#ifndef INCLUDED_openfl__internal_renderer_cairo_CairoDisplayObject
#include <openfl/_internal/renderer/cairo/CairoDisplayObject.h>
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
namespace openfl{
namespace _internal{
namespace renderer{
namespace cairo{

Void CairoDisplayObject_obj::__construct()
{
	return null();
}

//CairoDisplayObject_obj::~CairoDisplayObject_obj() { }

Dynamic CairoDisplayObject_obj::__CreateEmpty() { return  new CairoDisplayObject_obj; }
hx::ObjectPtr< CairoDisplayObject_obj > CairoDisplayObject_obj::__new()
{  hx::ObjectPtr< CairoDisplayObject_obj > _result_ = new CairoDisplayObject_obj();
	_result_->__construct();
	return _result_;}

Dynamic CairoDisplayObject_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< CairoDisplayObject_obj > _result_ = new CairoDisplayObject_obj();
	_result_->__construct();
	return _result_;}

Void CairoDisplayObject_obj::render( ::openfl::display::DisplayObject displayObject,::openfl::_internal::renderer::RenderSession renderSession){
{
		bool tmp = (displayObject->opaqueBackground == null());
		bool tmp1;
		if ((tmp)){
			tmp1 = (displayObject->__graphics == null());
		}
		else{
			tmp1 = false;
		}
		if ((tmp1)){
			return null();
		}
		bool tmp2 = displayObject->__renderable;
		bool tmp3 = tmp2;
		bool tmp4 = !(tmp3);
		bool tmp5 = !(tmp4);
		bool tmp6;
		if ((tmp5)){
			tmp6 = (displayObject->__worldAlpha <= (int)0);
		}
		else{
			tmp6 = true;
		}
		if ((tmp6)){
			return null();
		}
		bool tmp7 = (displayObject->opaqueBackground != null());
		bool tmp8 = tmp7;
		bool tmp9;
		if ((tmp8)){
			bool tmp10 = displayObject->__cacheBitmapRender;
			bool tmp11 = tmp10;
			bool tmp12 = tmp11;
			tmp9 = !(tmp12);
		}
		else{
			tmp9 = false;
		}
		bool tmp10 = tmp9;
		bool tmp11;
		if ((tmp10)){
			Float tmp12 = displayObject->get_width();
			Float tmp13 = tmp12;
			Float tmp14 = tmp13;
			tmp11 = (tmp14 > (int)0);
		}
		else{
			tmp11 = false;
		}
		bool tmp12;
		if ((tmp11)){
			Float tmp13 = displayObject->get_height();
			Float tmp14 = tmp13;
			tmp12 = (tmp14 > (int)0);
		}
		else{
			tmp12 = false;
		}
		if ((tmp12)){
			::openfl::display::DisplayObject tmp13 = displayObject;
			renderSession->maskManager->pushObject(tmp13,null());
			::lime::graphics::cairo::Cairo cairo = renderSession->cairo;
			bool tmp14 = renderSession->roundPixels;
			if ((tmp14)){
				::lime::math::Matrix3 tmp15 = displayObject->__renderTransform->__toMatrix3();
				::lime::math::Matrix3 matrix = tmp15;
				Float tmp16 = matrix->tx;
				int tmp17 = ::Math_obj::round(tmp16);
				matrix->tx = tmp17;
				Float tmp18 = matrix->ty;
				int tmp19 = ::Math_obj::round(tmp18);
				matrix->ty = tmp19;
				::lime::math::Matrix3 tmp20 = matrix;
				cairo->set_matrix(tmp20);
			}
			else{
				::lime::math::Matrix3 tmp15 = displayObject->__renderTransform->__toMatrix3();
				cairo->set_matrix(tmp15);
			}
			int color = ((int)(displayObject->opaqueBackground));
			int tmp15 = (int(color) >> int((int)16));
			int tmp16 = tmp15;
			int tmp17 = (int(tmp16) & int((int)255));
			int tmp18 = tmp17;
			Float tmp19 = (Float(tmp18) / Float((int)255));
			int tmp20 = (int(color) >> int((int)8));
			int tmp21 = tmp20;
			int tmp22 = (int(tmp21) & int((int)255));
			int tmp23 = tmp22;
			Float tmp24 = (Float(tmp23) / Float((int)255));
			int tmp25 = (int(color) & int((int)255));
			int tmp26 = tmp25;
			Float tmp27 = (Float(tmp26) / Float((int)255));
			cairo->setSourceRGB(tmp19,tmp24,tmp27);
			Float tmp28 = displayObject->get_width();
			Float tmp29 = displayObject->get_height();
			cairo->rectangle((int)0,(int)0,tmp28,tmp29);
			cairo->fill();
			::openfl::display::DisplayObject tmp30 = displayObject;
			renderSession->maskManager->popObject(tmp30,null());
		}
		bool tmp13 = (displayObject->__graphics != null());
		if ((tmp13)){
			::openfl::display::DisplayObject tmp14 = displayObject;
			::openfl::_internal::renderer::RenderSession tmp15 = renderSession;
			::openfl::_internal::renderer::cairo::CairoShape_obj::render(tmp14,tmp15);
		}
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(CairoDisplayObject_obj,render,(void))


CairoDisplayObject_obj::CairoDisplayObject_obj()
{
}

bool CairoDisplayObject_obj::__GetStatic(const ::String &inName, Dynamic &outValue, hx::PropertyAccess inCallProp)
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
	HX_MARK_MEMBER_NAME(CairoDisplayObject_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(CairoDisplayObject_obj::__mClass,"__mClass");
};

#endif

hx::Class CairoDisplayObject_obj::__mClass;

static ::String sStaticFields[] = {
	HX_HCSTRING("render","\x56","\x6b","\x29","\x05"),
	::String(null()) };

void CairoDisplayObject_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("openfl._internal.renderer.cairo.CairoDisplayObject","\x9a","\x63","\xfd","\x16");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &CairoDisplayObject_obj::__GetStatic;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(sStaticFields);
	__mClass->mMembers = hx::Class_obj::dupFunctions(0 /* sMemberFields */);
	__mClass->mCanCast = hx::TCanCast< CairoDisplayObject_obj >;
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
