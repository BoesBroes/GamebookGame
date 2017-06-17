#include <hxcpp.h>

#ifndef INCLUDED_lime_app_IModule
#include <lime/app/IModule.h>
#endif
#ifndef INCLUDED_lime_graphics_DOMRenderContext
#include <lime/graphics/DOMRenderContext.h>
#endif
#ifndef INCLUDED_openfl__Vector_IVector
#include <openfl/_Vector/IVector.h>
#endif
#ifndef INCLUDED_openfl__Vector_ObjectVector
#include <openfl/_Vector/ObjectVector.h>
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
#ifndef INCLUDED_openfl__internal_renderer_dom_DOMMaskManager
#include <openfl/_internal/renderer/dom/DOMMaskManager.h>
#endif
#ifndef INCLUDED_openfl__internal_renderer_dom_DOMRenderer
#include <openfl/_internal/renderer/dom/DOMRenderer.h>
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
namespace dom{

Void DOMRenderer_obj::__construct(::openfl::display::Stage stage,::lime::graphics::DOMRenderContext element)
{
HX_STACK_FRAME("openfl._internal.renderer.dom.DOMRenderer","new",0x90a7aed0,"openfl._internal.renderer.dom.DOMRenderer.new","openfl/_internal/renderer/dom/DOMRenderer.hx",29,0xc812e2a0)
HX_STACK_THIS(this)
HX_STACK_ARG(stage,"stage")
HX_STACK_ARG(element,"element")
{
	HX_STACK_LINE(31)
	::openfl::display::Stage tmp = stage;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(31)
	super::__construct(tmp);
}
;
	return null();
}

//DOMRenderer_obj::~DOMRenderer_obj() { }

Dynamic DOMRenderer_obj::__CreateEmpty() { return  new DOMRenderer_obj; }
hx::ObjectPtr< DOMRenderer_obj > DOMRenderer_obj::__new(::openfl::display::Stage stage,::lime::graphics::DOMRenderContext element)
{  hx::ObjectPtr< DOMRenderer_obj > _result_ = new DOMRenderer_obj();
	_result_->__construct(stage,element);
	return _result_;}

Dynamic DOMRenderer_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< DOMRenderer_obj > _result_ = new DOMRenderer_obj();
	_result_->__construct(inArgs[0],inArgs[1]);
	return _result_;}

Void DOMRenderer_obj::render( ){
{
		HX_STACK_FRAME("openfl._internal.renderer.dom.DOMRenderer","render",0x321c32e6,"openfl._internal.renderer.dom.DOMRenderer.render","openfl/_internal/renderer/dom/DOMRenderer.hx",145,0xc812e2a0)
		HX_STACK_THIS(this)
		HX_STACK_LINE(147)
		::openfl::display::Stage tmp = this->stage;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(147)
		Dynamic tmp1 = tmp->quality;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(147)
		bool tmp2 = (tmp1 != ((Dynamic)((int)2)));		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(147)
		::openfl::_internal::renderer::RenderSession tmp3 = this->renderSession;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(147)
		tmp3->allowSmoothing = tmp2;
		HX_STACK_LINE(149)
		::openfl::display::Stage tmp4 = this->stage;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(149)
		bool tmp5 = tmp4->__transparent;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(149)
		bool tmp6 = !(tmp5);		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(149)
		if ((tmp6)){
			HX_STACK_LINE(151)
			::openfl::display::Stage tmp7 = this->stage;		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(151)
			::lime::graphics::DOMRenderContext tmp8 = this->element;		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(151)
			tmp8->style->__FieldRef(HX_HCSTRING("background","\xee","\x93","\x1d","\x26")) = tmp7->__colorString;
		}
		else{
			HX_STACK_LINE(155)
			::lime::graphics::DOMRenderContext tmp7 = this->element;		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(155)
			tmp7->style->__FieldRef(HX_HCSTRING("background","\xee","\x93","\x1d","\x26")) = HX_HCSTRING("none","\xb8","\x12","\x0a","\x49");
		}
		HX_STACK_LINE(159)
		::openfl::_internal::renderer::RenderSession tmp7 = this->renderSession;		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(159)
		tmp7->z = (int)1;
		HX_STACK_LINE(160)
		::openfl::display::Stage tmp8 = this->stage;		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(160)
		::openfl::_internal::renderer::RenderSession tmp9 = this->renderSession;		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(160)
		tmp8->__renderDOM(tmp9);
	}
return null();
}


Void DOMRenderer_obj::renderStage3D( ){
{
		HX_STACK_FRAME("openfl._internal.renderer.dom.DOMRenderer","renderStage3D",0xc21c00a9,"openfl._internal.renderer.dom.DOMRenderer.renderStage3D","openfl/_internal/renderer/dom/DOMRenderer.hx",167,0xc812e2a0)
		HX_STACK_THIS(this)
		HX_STACK_LINE(167)
		int _g = (int)0;		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(167)
		::openfl::display::Stage tmp = this->stage;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(167)
		::openfl::_Vector::ObjectVector _g1 = tmp->stage3Ds;		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(167)
		while((true)){
			HX_STACK_LINE(167)
			int tmp1 = _g;		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(167)
			int tmp2 = _g1->get_length();		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(167)
			bool tmp3 = (tmp1 < tmp2);		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(167)
			bool tmp4 = !(tmp3);		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(167)
			if ((tmp4)){
				HX_STACK_LINE(167)
				break;
			}
			HX_STACK_LINE(167)
			int tmp5 = _g;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(167)
			::openfl::display::Stage3D tmp6 = _g1->get(tmp5);		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(167)
			::openfl::display::Stage3D stage3D = tmp6;		HX_STACK_VAR(stage3D,"stage3D");
			HX_STACK_LINE(167)
			++(_g);
			HX_STACK_LINE(169)
			::openfl::display::Stage tmp7 = this->stage;		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(169)
			::openfl::_internal::renderer::RenderSession tmp8 = this->renderSession;		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(169)
			stage3D->__renderDOM(tmp7,tmp8);
		}
	}
return null();
}


Void DOMRenderer_obj::applyStyle( ::openfl::display::DisplayObject displayObject,::openfl::_internal::renderer::RenderSession renderSession,bool setTransform,bool setAlpha,bool setClip){
{
		HX_STACK_FRAME("openfl._internal.renderer.dom.DOMRenderer","applyStyle",0x6484f073,"openfl._internal.renderer.dom.DOMRenderer.applyStyle","openfl/_internal/renderer/dom/DOMRenderer.hx",71,0xc812e2a0)
		HX_STACK_ARG(displayObject,"displayObject")
		HX_STACK_ARG(renderSession,"renderSession")
		HX_STACK_ARG(setTransform,"setTransform")
		HX_STACK_ARG(setAlpha,"setAlpha")
		HX_STACK_ARG(setClip,"setClip")
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC5(DOMRenderer_obj,applyStyle,(void))

Void DOMRenderer_obj::updateClip( ::openfl::display::DisplayObject displayObject,::openfl::_internal::renderer::RenderSession renderSession){
{
		HX_STACK_FRAME("openfl._internal.renderer.dom.DOMRenderer","updateClip",0x2f8d2909,"openfl._internal.renderer.dom.DOMRenderer.updateClip","openfl/_internal/renderer/dom/DOMRenderer.hx",176,0xc812e2a0)
		HX_STACK_ARG(displayObject,"displayObject")
		HX_STACK_ARG(renderSession,"renderSession")
		HX_STACK_LINE(178)
		::openfl::_internal::renderer::dom::DOMMaskManager maskManager = ((::openfl::_internal::renderer::dom::DOMMaskManager)(renderSession->maskManager));		HX_STACK_VAR(maskManager,"maskManager");
		HX_STACK_LINE(179)
		::openfl::display::DisplayObject tmp = displayObject;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(179)
		maskManager->updateClip(tmp);
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(DOMRenderer_obj,updateClip,(void))


DOMRenderer_obj::DOMRenderer_obj()
{
}

void DOMRenderer_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(DOMRenderer);
	HX_MARK_MEMBER_NAME(element,"element");
	::openfl::_internal::renderer::AbstractRenderer_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void DOMRenderer_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(element,"element");
	::openfl::_internal::renderer::AbstractRenderer_obj::__Visit(HX_VISIT_ARG);
}

Dynamic DOMRenderer_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 6:
		if (HX_FIELD_EQ(inName,"render") ) { return render_dyn(); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"element") ) { return element; }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"renderStage3D") ) { return renderStage3D_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

bool DOMRenderer_obj::__GetStatic(const ::String &inName, Dynamic &outValue, hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 10:
		if (HX_FIELD_EQ(inName,"applyStyle") ) { outValue = applyStyle_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"updateClip") ) { outValue = updateClip_dyn(); return true;  }
	}
	return false;
}

Dynamic DOMRenderer_obj::__SetField(const ::String &inName,const Dynamic &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 7:
		if (HX_FIELD_EQ(inName,"element") ) { element=inValue.Cast< ::lime::graphics::DOMRenderContext >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void DOMRenderer_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("element","\xbc","\xae","\x54","\x06"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsObject /*::lime::graphics::DOMRenderContext*/ ,(int)offsetof(DOMRenderer_obj,element),HX_HCSTRING("element","\xbc","\xae","\x54","\x06")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo *sStaticStorageInfo = 0;
#endif

static ::String sMemberFields[] = {
	HX_HCSTRING("element","\xbc","\xae","\x54","\x06"),
	HX_HCSTRING("render","\x56","\x6b","\x29","\x05"),
	HX_HCSTRING("renderStage3D","\x39","\xb6","\xb7","\x29"),
	::String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(DOMRenderer_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(DOMRenderer_obj::__mClass,"__mClass");
};

#endif

hx::Class DOMRenderer_obj::__mClass;

static ::String sStaticFields[] = {
	HX_HCSTRING("applyStyle","\xe3","\x20","\x6f","\x2f"),
	HX_HCSTRING("updateClip","\x79","\x59","\x77","\xfa"),
	::String(null()) };

void DOMRenderer_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("openfl._internal.renderer.dom.DOMRenderer","\xde","\x46","\x5c","\x34");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &DOMRenderer_obj::__GetStatic;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(sStaticFields);
	__mClass->mMembers = hx::Class_obj::dupFunctions(sMemberFields);
	__mClass->mCanCast = hx::TCanCast< DOMRenderer_obj >;
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
} // end namespace dom
