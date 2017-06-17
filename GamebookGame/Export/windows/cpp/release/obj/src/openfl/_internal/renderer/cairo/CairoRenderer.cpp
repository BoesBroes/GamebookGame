#include <hxcpp.h>

#ifndef INCLUDED_lime_app_IModule
#include <lime/app/IModule.h>
#endif
#ifndef INCLUDED_lime_graphics_cairo_Cairo
#include <lime/graphics/cairo/Cairo.h>
#endif
#ifndef INCLUDED_openfl__Vector_IVector
#include <openfl/_Vector/IVector.h>
#endif
#ifndef INCLUDED_openfl__Vector_ObjectVector
#include <openfl/_Vector/ObjectVector.h>
#endif
#ifndef INCLUDED_openfl__internal_renderer_AbstractBlendModeManager
#include <openfl/_internal/renderer/AbstractBlendModeManager.h>
#endif
#ifndef INCLUDED_openfl__internal_renderer_AbstractMaskManager
#include <openfl/_internal/renderer/AbstractMaskManager.h>
#endif
#ifndef INCLUDED_openfl__internal_renderer_AbstractRenderer
#include <openfl/_internal/renderer/AbstractRenderer.h>
#endif
#ifndef INCLUDED_openfl__internal_renderer_RenderSession
#include <openfl/_internal/renderer/RenderSession.h>
#endif
#ifndef INCLUDED_openfl__internal_renderer_cairo_CairoBlendModeManager
#include <openfl/_internal/renderer/cairo/CairoBlendModeManager.h>
#endif
#ifndef INCLUDED_openfl__internal_renderer_cairo_CairoMaskManager
#include <openfl/_internal/renderer/cairo/CairoMaskManager.h>
#endif
#ifndef INCLUDED_openfl__internal_renderer_cairo_CairoRenderer
#include <openfl/_internal/renderer/cairo/CairoRenderer.h>
#endif
#ifndef INCLUDED_openfl_display_DisplayObject
#include <openfl/display/DisplayObject.h>
#endif
#ifndef INCLUDED_openfl_display_DisplayObjectContainer
#include <openfl/display/DisplayObjectContainer.h>
#endif
#ifndef INCLUDED_openfl_display_IBitmapDrawable
#include <openfl/display/IBitmapDrawable.h>
#endif
#ifndef INCLUDED_openfl_display_InteractiveObject
#include <openfl/display/InteractiveObject.h>
#endif
#ifndef INCLUDED_openfl_display_Stage
#include <openfl/display/Stage.h>
#endif
#ifndef INCLUDED_openfl_display_Stage3D
#include <openfl/display/Stage3D.h>
#endif
#ifndef INCLUDED_openfl_events_EventDispatcher
#include <openfl/events/EventDispatcher.h>
#endif
#ifndef INCLUDED_openfl_events_IEventDispatcher
#include <openfl/events/IEventDispatcher.h>
#endif
namespace openfl{
namespace _internal{
namespace renderer{
namespace cairo{

Void CairoRenderer_obj::__construct(::openfl::display::Stage stage,::lime::graphics::cairo::Cairo cairo)
{
{
	::openfl::display::Stage tmp = stage;
	super::__construct(tmp);
	this->cairo = cairo;
	::openfl::_internal::renderer::RenderSession tmp1 = ::openfl::_internal::renderer::RenderSession_obj::__new();
	this->renderSession = tmp1;
	::openfl::_internal::renderer::RenderSession tmp2 = this->renderSession;
	tmp2->clearDirtyFlags = true;
	::openfl::_internal::renderer::RenderSession tmp3 = this->renderSession;
	tmp3->cairo = cairo;
	::openfl::_internal::renderer::RenderSession tmp4 = this->renderSession;
	tmp4->renderer = hx::ObjectPtr<OBJ_>(this);
	::openfl::_internal::renderer::RenderSession tmp5 = this->renderSession;
	::openfl::_internal::renderer::cairo::CairoMaskManager tmp6 = ::openfl::_internal::renderer::cairo::CairoMaskManager_obj::__new(tmp5);
	::openfl::_internal::renderer::RenderSession tmp7 = this->renderSession;
	tmp7->maskManager = tmp6;
	::openfl::_internal::renderer::RenderSession tmp8 = this->renderSession;
	::openfl::_internal::renderer::cairo::CairoBlendModeManager tmp9 = ::openfl::_internal::renderer::cairo::CairoBlendModeManager_obj::__new(tmp8);
	::openfl::_internal::renderer::RenderSession tmp10 = this->renderSession;
	tmp10->blendModeManager = tmp9;
}
;
	return null();
}

//CairoRenderer_obj::~CairoRenderer_obj() { }

Dynamic CairoRenderer_obj::__CreateEmpty() { return  new CairoRenderer_obj; }
hx::ObjectPtr< CairoRenderer_obj > CairoRenderer_obj::__new(::openfl::display::Stage stage,::lime::graphics::cairo::Cairo cairo)
{  hx::ObjectPtr< CairoRenderer_obj > _result_ = new CairoRenderer_obj();
	_result_->__construct(stage,cairo);
	return _result_;}

Dynamic CairoRenderer_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< CairoRenderer_obj > _result_ = new CairoRenderer_obj();
	_result_->__construct(inArgs[0],inArgs[1]);
	return _result_;}

Void CairoRenderer_obj::clear( ){
{
		::lime::graphics::cairo::Cairo tmp = this->cairo;
		tmp->identityMatrix();
		::openfl::display::Stage tmp1 = this->stage;
		bool tmp2 = tmp1->__clearBeforeRender;
		if ((tmp2)){
			::lime::graphics::cairo::Cairo tmp3 = this->cairo;
			::openfl::display::Stage tmp4 = this->stage;
			Float tmp5 = tmp4->__colorSplit->__get((int)0);
			::openfl::display::Stage tmp6 = this->stage;
			Float tmp7 = tmp6->__colorSplit->__get((int)1);
			::openfl::display::Stage tmp8 = this->stage;
			Float tmp9 = tmp8->__colorSplit->__get((int)2);
			tmp3->setSourceRGB(tmp5,tmp7,tmp9);
			::lime::graphics::cairo::Cairo tmp10 = this->cairo;
			tmp10->paint();
		}
	}
return null();
}


Void CairoRenderer_obj::render( ){
{
		::openfl::display::Stage tmp = this->stage;
		Dynamic tmp1 = tmp->quality;
		bool tmp2 = (tmp1 != ((Dynamic)((int)2)));
		::openfl::_internal::renderer::RenderSession tmp3 = this->renderSession;
		tmp3->allowSmoothing = tmp2;
		::openfl::display::Stage tmp4 = this->stage;
		::openfl::_internal::renderer::RenderSession tmp5 = this->renderSession;
		tmp4->__renderCairo(tmp5);
	}
return null();
}


Void CairoRenderer_obj::renderStage3D( ){
{
		int _g = (int)0;
		::openfl::display::Stage tmp = this->stage;
		::openfl::_Vector::ObjectVector _g1 = tmp->stage3Ds;
		while((true)){
			int tmp1 = _g;
			int tmp2 = _g1->get_length();
			bool tmp3 = (tmp1 < tmp2);
			bool tmp4 = !(tmp3);
			if ((tmp4)){
				break;
			}
			int tmp5 = _g;
			::openfl::display::Stage3D tmp6 = _g1->get(tmp5);
			::openfl::display::Stage3D stage3D = tmp6;
			++(_g);
			::openfl::display::Stage tmp7 = this->stage;
			::openfl::_internal::renderer::RenderSession tmp8 = this->renderSession;
			stage3D->__renderCairo(tmp7,tmp8);
		}
	}
return null();
}



CairoRenderer_obj::CairoRenderer_obj()
{
}

void CairoRenderer_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(CairoRenderer);
	HX_MARK_MEMBER_NAME(cairo,"cairo");
	::openfl::_internal::renderer::AbstractRenderer_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void CairoRenderer_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(cairo,"cairo");
	::openfl::_internal::renderer::AbstractRenderer_obj::__Visit(HX_VISIT_ARG);
}

Dynamic CairoRenderer_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"cairo") ) { return cairo; }
		if (HX_FIELD_EQ(inName,"clear") ) { return clear_dyn(); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"render") ) { return render_dyn(); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"renderStage3D") ) { return renderStage3D_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic CairoRenderer_obj::__SetField(const ::String &inName,const Dynamic &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"cairo") ) { cairo=inValue.Cast< ::lime::graphics::cairo::Cairo >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void CairoRenderer_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("cairo","\x88","\x30","\x19","\x41"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsObject /*::lime::graphics::cairo::Cairo*/ ,(int)offsetof(CairoRenderer_obj,cairo),HX_HCSTRING("cairo","\x88","\x30","\x19","\x41")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo *sStaticStorageInfo = 0;
#endif

static ::String sMemberFields[] = {
	HX_HCSTRING("cairo","\x88","\x30","\x19","\x41"),
	HX_HCSTRING("clear","\x8d","\x71","\x5b","\x48"),
	HX_HCSTRING("render","\x56","\x6b","\x29","\x05"),
	HX_HCSTRING("renderStage3D","\x39","\xb6","\xb7","\x29"),
	::String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(CairoRenderer_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(CairoRenderer_obj::__mClass,"__mClass");
};

#endif

hx::Class CairoRenderer_obj::__mClass;

void CairoRenderer_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("openfl._internal.renderer.cairo.CairoRenderer","\xea","\x3e","\x63","\xdd");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = hx::Class_obj::dupFunctions(sMemberFields);
	__mClass->mCanCast = hx::TCanCast< CairoRenderer_obj >;
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
