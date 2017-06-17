#include <hxcpp.h>

#ifndef INCLUDED_lime_app_IModule
#include <lime/app/IModule.h>
#endif
#ifndef INCLUDED_lime_graphics_CanvasRenderContext
#include <lime/graphics/CanvasRenderContext.h>
#endif
#ifndef INCLUDED_lime_ui_Window
#include <lime/ui/Window.h>
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
#ifndef INCLUDED_openfl__internal_renderer_canvas_CanvasMaskManager
#include <openfl/_internal/renderer/canvas/CanvasMaskManager.h>
#endif
#ifndef INCLUDED_openfl__internal_renderer_canvas_CanvasRenderer
#include <openfl/_internal/renderer/canvas/CanvasRenderer.h>
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
namespace canvas{

Void CanvasRenderer_obj::__construct(::openfl::display::Stage stage,::lime::graphics::CanvasRenderContext context)
{
HX_STACK_FRAME("openfl._internal.renderer.canvas.CanvasRenderer","new",0x66327fe8,"openfl._internal.renderer.canvas.CanvasRenderer.new","openfl/_internal/renderer/canvas/CanvasRenderer.hx",19,0x1be544e6)
HX_STACK_THIS(this)
HX_STACK_ARG(stage,"stage")
HX_STACK_ARG(context,"context")
{
	HX_STACK_LINE(21)
	::openfl::display::Stage tmp = stage;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(21)
	super::__construct(tmp);
	HX_STACK_LINE(23)
	this->context = context;
	HX_STACK_LINE(25)
	::openfl::_internal::renderer::RenderSession tmp1 = ::openfl::_internal::renderer::RenderSession_obj::__new();		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(25)
	this->renderSession = tmp1;
	HX_STACK_LINE(26)
	::openfl::_internal::renderer::RenderSession tmp2 = this->renderSession;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(26)
	tmp2->clearDirtyFlags = true;
	HX_STACK_LINE(27)
	::openfl::_internal::renderer::RenderSession tmp3 = this->renderSession;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(27)
	tmp3->context = context;
	HX_STACK_LINE(29)
	::openfl::_internal::renderer::RenderSession tmp4 = this->renderSession;		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(29)
	tmp4->renderer = hx::ObjectPtr<OBJ_>(this);
	HX_STACK_LINE(31)
	::openfl::_internal::renderer::RenderSession tmp5 = this->renderSession;		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(31)
	::openfl::_internal::renderer::canvas::CanvasMaskManager tmp6 = ::openfl::_internal::renderer::canvas::CanvasMaskManager_obj::__new(tmp5);		HX_STACK_VAR(tmp6,"tmp6");
	HX_STACK_LINE(31)
	::openfl::_internal::renderer::RenderSession tmp7 = this->renderSession;		HX_STACK_VAR(tmp7,"tmp7");
	HX_STACK_LINE(31)
	tmp7->maskManager = tmp6;
}
;
	return null();
}

//CanvasRenderer_obj::~CanvasRenderer_obj() { }

Dynamic CanvasRenderer_obj::__CreateEmpty() { return  new CanvasRenderer_obj; }
hx::ObjectPtr< CanvasRenderer_obj > CanvasRenderer_obj::__new(::openfl::display::Stage stage,::lime::graphics::CanvasRenderContext context)
{  hx::ObjectPtr< CanvasRenderer_obj > _result_ = new CanvasRenderer_obj();
	_result_->__construct(stage,context);
	return _result_;}

Dynamic CanvasRenderer_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< CanvasRenderer_obj > _result_ = new CanvasRenderer_obj();
	_result_->__construct(inArgs[0],inArgs[1]);
	return _result_;}

Void CanvasRenderer_obj::clear( ){
{
		HX_STACK_FRAME("openfl._internal.renderer.canvas.CanvasRenderer","clear",0xe6eb1315,"openfl._internal.renderer.canvas.CanvasRenderer.clear","openfl/_internal/renderer/canvas/CanvasRenderer.hx",37,0x1be544e6)
		HX_STACK_THIS(this)
		HX_STACK_LINE(39)
		::lime::graphics::CanvasRenderContext tmp = this->context;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(39)
		tmp->setTransform((int)1,(int)0,(int)0,(int)1,(int)0,(int)0);
		HX_STACK_LINE(40)
		::lime::graphics::CanvasRenderContext tmp1 = this->context;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(40)
		tmp1->globalAlpha = (int)1;
		HX_STACK_LINE(42)
		::openfl::display::Stage tmp2 = this->stage;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(42)
		bool tmp3 = tmp2->__transparent;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(42)
		bool tmp4 = tmp3;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(42)
		bool tmp5 = !(tmp4);		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(42)
		bool tmp6;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(42)
		if ((tmp5)){
			HX_STACK_LINE(42)
			::openfl::display::Stage tmp7 = this->stage;		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(42)
			::openfl::display::Stage tmp8 = tmp7;		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(42)
			tmp6 = tmp8->__clearBeforeRender;
		}
		else{
			HX_STACK_LINE(42)
			tmp6 = false;
		}
		HX_STACK_LINE(42)
		if ((tmp6)){
			HX_STACK_LINE(44)
			::openfl::display::Stage tmp7 = this->stage;		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(44)
			::lime::graphics::CanvasRenderContext tmp8 = this->context;		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(44)
			tmp8->fillStyle = tmp7->__colorString;
			HX_STACK_LINE(45)
			::lime::graphics::CanvasRenderContext tmp9 = this->context;		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(45)
			::openfl::display::Stage tmp10 = this->stage;		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(45)
			int tmp11 = tmp10->stageWidth;		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(45)
			::openfl::display::Stage tmp12 = this->stage;		HX_STACK_VAR(tmp12,"tmp12");
			HX_STACK_LINE(45)
			Float tmp13 = tmp12->window->__scale;		HX_STACK_VAR(tmp13,"tmp13");
			HX_STACK_LINE(45)
			Float tmp14 = (tmp11 * tmp13);		HX_STACK_VAR(tmp14,"tmp14");
			HX_STACK_LINE(45)
			::openfl::display::Stage tmp15 = this->stage;		HX_STACK_VAR(tmp15,"tmp15");
			HX_STACK_LINE(45)
			int tmp16 = tmp15->stageHeight;		HX_STACK_VAR(tmp16,"tmp16");
			HX_STACK_LINE(45)
			::openfl::display::Stage tmp17 = this->stage;		HX_STACK_VAR(tmp17,"tmp17");
			HX_STACK_LINE(45)
			Float tmp18 = tmp17->window->__scale;		HX_STACK_VAR(tmp18,"tmp18");
			HX_STACK_LINE(45)
			Float tmp19 = (tmp16 * tmp18);		HX_STACK_VAR(tmp19,"tmp19");
			HX_STACK_LINE(45)
			tmp9->fillRect((int)0,(int)0,tmp14,tmp19);
		}
		else{
			HX_STACK_LINE(47)
			::openfl::display::Stage tmp7 = this->stage;		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(47)
			bool tmp8 = tmp7->__transparent;		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(47)
			bool tmp9;		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(47)
			if ((tmp8)){
				HX_STACK_LINE(47)
				::openfl::display::Stage tmp10 = this->stage;		HX_STACK_VAR(tmp10,"tmp10");
				HX_STACK_LINE(47)
				::openfl::display::Stage tmp11 = tmp10;		HX_STACK_VAR(tmp11,"tmp11");
				HX_STACK_LINE(47)
				tmp9 = tmp11->__clearBeforeRender;
			}
			else{
				HX_STACK_LINE(47)
				tmp9 = false;
			}
			HX_STACK_LINE(47)
			if ((tmp9)){
				HX_STACK_LINE(49)
				::lime::graphics::CanvasRenderContext tmp10 = this->context;		HX_STACK_VAR(tmp10,"tmp10");
				HX_STACK_LINE(49)
				::openfl::display::Stage tmp11 = this->stage;		HX_STACK_VAR(tmp11,"tmp11");
				HX_STACK_LINE(49)
				int tmp12 = tmp11->stageWidth;		HX_STACK_VAR(tmp12,"tmp12");
				HX_STACK_LINE(49)
				::openfl::display::Stage tmp13 = this->stage;		HX_STACK_VAR(tmp13,"tmp13");
				HX_STACK_LINE(49)
				Float tmp14 = tmp13->window->__scale;		HX_STACK_VAR(tmp14,"tmp14");
				HX_STACK_LINE(49)
				Float tmp15 = (tmp12 * tmp14);		HX_STACK_VAR(tmp15,"tmp15");
				HX_STACK_LINE(49)
				::openfl::display::Stage tmp16 = this->stage;		HX_STACK_VAR(tmp16,"tmp16");
				HX_STACK_LINE(49)
				int tmp17 = tmp16->stageHeight;		HX_STACK_VAR(tmp17,"tmp17");
				HX_STACK_LINE(49)
				::openfl::display::Stage tmp18 = this->stage;		HX_STACK_VAR(tmp18,"tmp18");
				HX_STACK_LINE(49)
				Float tmp19 = tmp18->window->__scale;		HX_STACK_VAR(tmp19,"tmp19");
				HX_STACK_LINE(49)
				Float tmp20 = (tmp17 * tmp19);		HX_STACK_VAR(tmp20,"tmp20");
				HX_STACK_LINE(49)
				tmp10->clearRect((int)0,(int)0,tmp15,tmp20);
			}
		}
	}
return null();
}


Void CanvasRenderer_obj::render( ){
{
		HX_STACK_FRAME("openfl._internal.renderer.canvas.CanvasRenderer","render",0x244720ce,"openfl._internal.renderer.canvas.CanvasRenderer.render","openfl/_internal/renderer/canvas/CanvasRenderer.hx",56,0x1be544e6)
		HX_STACK_THIS(this)
		HX_STACK_LINE(58)
		::openfl::display::Stage tmp = this->stage;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(58)
		Dynamic tmp1 = tmp->quality;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(58)
		bool tmp2 = (tmp1 != ((Dynamic)((int)2)));		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(58)
		::openfl::_internal::renderer::RenderSession tmp3 = this->renderSession;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(58)
		tmp3->allowSmoothing = tmp2;
		HX_STACK_LINE(60)
		::openfl::display::Stage tmp4 = this->stage;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(60)
		::openfl::_internal::renderer::RenderSession tmp5 = this->renderSession;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(60)
		tmp4->__renderCanvas(tmp5);
	}
return null();
}


Void CanvasRenderer_obj::renderStage3D( ){
{
		HX_STACK_FRAME("openfl._internal.renderer.canvas.CanvasRenderer","renderStage3D",0x52901fc1,"openfl._internal.renderer.canvas.CanvasRenderer.renderStage3D","openfl/_internal/renderer/canvas/CanvasRenderer.hx",67,0x1be544e6)
		HX_STACK_THIS(this)
		HX_STACK_LINE(67)
		int _g = (int)0;		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(67)
		::openfl::display::Stage tmp = this->stage;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(67)
		::openfl::_Vector::ObjectVector _g1 = tmp->stage3Ds;		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(67)
		while((true)){
			HX_STACK_LINE(67)
			int tmp1 = _g;		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(67)
			int tmp2 = _g1->get_length();		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(67)
			bool tmp3 = (tmp1 < tmp2);		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(67)
			bool tmp4 = !(tmp3);		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(67)
			if ((tmp4)){
				HX_STACK_LINE(67)
				break;
			}
			HX_STACK_LINE(67)
			int tmp5 = _g;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(67)
			::openfl::display::Stage3D tmp6 = _g1->get(tmp5);		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(67)
			::openfl::display::Stage3D stage3D = tmp6;		HX_STACK_VAR(stage3D,"stage3D");
			HX_STACK_LINE(67)
			++(_g);
			HX_STACK_LINE(69)
			::openfl::display::Stage tmp7 = this->stage;		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(69)
			::openfl::_internal::renderer::RenderSession tmp8 = this->renderSession;		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(69)
			stage3D->__renderCanvas(tmp7,tmp8);
		}
	}
return null();
}



CanvasRenderer_obj::CanvasRenderer_obj()
{
}

void CanvasRenderer_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(CanvasRenderer);
	HX_MARK_MEMBER_NAME(context,"context");
	::openfl::_internal::renderer::AbstractRenderer_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void CanvasRenderer_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(context,"context");
	::openfl::_internal::renderer::AbstractRenderer_obj::__Visit(HX_VISIT_ARG);
}

Dynamic CanvasRenderer_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"clear") ) { return clear_dyn(); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"render") ) { return render_dyn(); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"context") ) { return context; }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"renderStage3D") ) { return renderStage3D_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic CanvasRenderer_obj::__SetField(const ::String &inName,const Dynamic &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 7:
		if (HX_FIELD_EQ(inName,"context") ) { context=inValue.Cast< ::lime::graphics::CanvasRenderContext >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void CanvasRenderer_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("context","\xef","\x95","\x77","\x19"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsObject /*::lime::graphics::CanvasRenderContext*/ ,(int)offsetof(CanvasRenderer_obj,context),HX_HCSTRING("context","\xef","\x95","\x77","\x19")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo *sStaticStorageInfo = 0;
#endif

static ::String sMemberFields[] = {
	HX_HCSTRING("context","\xef","\x95","\x77","\x19"),
	HX_HCSTRING("clear","\x8d","\x71","\x5b","\x48"),
	HX_HCSTRING("render","\x56","\x6b","\x29","\x05"),
	HX_HCSTRING("renderStage3D","\x39","\xb6","\xb7","\x29"),
	::String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(CanvasRenderer_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(CanvasRenderer_obj::__mClass,"__mClass");
};

#endif

hx::Class CanvasRenderer_obj::__mClass;

void CanvasRenderer_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("openfl._internal.renderer.canvas.CanvasRenderer","\xf6","\xab","\xb2","\xdc");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = hx::Class_obj::dupFunctions(sMemberFields);
	__mClass->mCanCast = hx::TCanCast< CanvasRenderer_obj >;
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
} // end namespace canvas
