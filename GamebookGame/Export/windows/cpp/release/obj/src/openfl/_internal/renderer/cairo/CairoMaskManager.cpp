#include <hxcpp.h>

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
#ifndef INCLUDED_openfl__internal_renderer_cairo_CairoMaskManager
#include <openfl/_internal/renderer/cairo/CairoMaskManager.h>
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
#ifndef INCLUDED_openfl_geom_Rectangle
#include <openfl/geom/Rectangle.h>
#endif
namespace openfl{
namespace _internal{
namespace renderer{
namespace cairo{

Void CairoMaskManager_obj::__construct(::openfl::_internal::renderer::RenderSession renderSession)
{
{
	::openfl::_internal::renderer::RenderSession tmp = renderSession;
	super::__construct(tmp);
}
;
	return null();
}

//CairoMaskManager_obj::~CairoMaskManager_obj() { }

Dynamic CairoMaskManager_obj::__CreateEmpty() { return  new CairoMaskManager_obj; }
hx::ObjectPtr< CairoMaskManager_obj > CairoMaskManager_obj::__new(::openfl::_internal::renderer::RenderSession renderSession)
{  hx::ObjectPtr< CairoMaskManager_obj > _result_ = new CairoMaskManager_obj();
	_result_->__construct(renderSession);
	return _result_;}

Dynamic CairoMaskManager_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< CairoMaskManager_obj > _result_ = new CairoMaskManager_obj();
	_result_->__construct(inArgs[0]);
	return _result_;}

Void CairoMaskManager_obj::pushMask( ::openfl::display::DisplayObject mask){
{
		::openfl::_internal::renderer::RenderSession tmp = this->renderSession;
		::lime::graphics::cairo::Cairo cairo = tmp->cairo;
		cairo->save();
		::openfl::geom::Matrix tmp1 = mask->__getRenderTransform();
		::openfl::geom::Matrix transform = tmp1;
		::lime::math::Matrix3 tmp2 = transform->__toMatrix3();
		cairo->set_matrix(tmp2);
		cairo->newPath();
		::openfl::_internal::renderer::RenderSession tmp3 = this->renderSession;
		mask->__renderCairoMask(tmp3);
		cairo->clip();
	}
return null();
}


Void CairoMaskManager_obj::pushObject( ::openfl::display::DisplayObject object,hx::Null< bool >  __o_handleScrollRect){
bool handleScrollRect = __o_handleScrollRect.Default(true);
{
		bool tmp = handleScrollRect;
		bool tmp1;
		if ((tmp)){
			tmp1 = (object->__scrollRect != null());
		}
		else{
			tmp1 = false;
		}
		if ((tmp1)){
			::openfl::geom::Rectangle tmp2 = object->__scrollRect;
			::openfl::geom::Matrix tmp3 = object->__renderTransform;
			this->pushRect(tmp2,tmp3);
		}
		bool tmp2 = (object->__mask != null());
		if ((tmp2)){
			::openfl::display::DisplayObject tmp3 = object->__mask;
			this->pushMask(tmp3);
		}
	}
return null();
}


Void CairoMaskManager_obj::pushRect( ::openfl::geom::Rectangle rect,::openfl::geom::Matrix transform){
{
		::openfl::_internal::renderer::RenderSession tmp = this->renderSession;
		::lime::graphics::cairo::Cairo cairo = tmp->cairo;
		cairo->save();
		::lime::math::Matrix3 tmp1 = ::lime::math::Matrix3_obj::__new(transform->a,transform->c,transform->b,transform->d,transform->tx,transform->ty);
		cairo->set_matrix(tmp1);
		cairo->newPath();
		Float tmp2 = rect->x;
		Float tmp3 = rect->y;
		Float tmp4 = rect->width;
		Float tmp5 = rect->height;
		cairo->rectangle(tmp2,tmp3,tmp4,tmp5);
		cairo->clip();
	}
return null();
}


Void CairoMaskManager_obj::popMask( ){
{
		::openfl::_internal::renderer::RenderSession tmp = this->renderSession;
		tmp->cairo->restore();
	}
return null();
}


Void CairoMaskManager_obj::popObject( ::openfl::display::DisplayObject object,hx::Null< bool >  __o_handleScrollRect){
bool handleScrollRect = __o_handleScrollRect.Default(true);
{
		bool tmp = (object->__mask != null());
		if ((tmp)){
			this->popMask();
		}
		bool tmp1 = handleScrollRect;
		bool tmp2;
		if ((tmp1)){
			tmp2 = (object->__scrollRect != null());
		}
		else{
			tmp2 = false;
		}
		if ((tmp2)){
			this->popRect();
		}
	}
return null();
}


Void CairoMaskManager_obj::popRect( ){
{
		::openfl::_internal::renderer::RenderSession tmp = this->renderSession;
		tmp->cairo->restore();
	}
return null();
}



CairoMaskManager_obj::CairoMaskManager_obj()
{
}

Dynamic CairoMaskManager_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 7:
		if (HX_FIELD_EQ(inName,"popMask") ) { return popMask_dyn(); }
		if (HX_FIELD_EQ(inName,"popRect") ) { return popRect_dyn(); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"pushMask") ) { return pushMask_dyn(); }
		if (HX_FIELD_EQ(inName,"pushRect") ) { return pushRect_dyn(); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"popObject") ) { return popObject_dyn(); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"pushObject") ) { return pushObject_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

#if HXCPP_SCRIPTABLE
static hx::StorageInfo *sMemberStorageInfo = 0;
static hx::StaticInfo *sStaticStorageInfo = 0;
#endif

static ::String sMemberFields[] = {
	HX_HCSTRING("pushMask","\xe6","\x73","\x47","\x17"),
	HX_HCSTRING("pushObject","\x39","\xe4","\x1e","\x69"),
	HX_HCSTRING("pushRect","\x1e","\x80","\x98","\x1a"),
	HX_HCSTRING("popMask","\x1d","\x67","\x11","\x43"),
	HX_HCSTRING("popObject","\x30","\x53","\xb5","\x91"),
	HX_HCSTRING("popRect","\x55","\x73","\x62","\x46"),
	::String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(CairoMaskManager_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(CairoMaskManager_obj::__mClass,"__mClass");
};

#endif

hx::Class CairoMaskManager_obj::__mClass;

void CairoMaskManager_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("openfl._internal.renderer.cairo.CairoMaskManager","\x9a","\x77","\x92","\x93");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = hx::Class_obj::dupFunctions(sMemberFields);
	__mClass->mCanCast = hx::TCanCast< CairoMaskManager_obj >;
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
