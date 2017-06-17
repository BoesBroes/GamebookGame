#include <hxcpp.h>

#ifndef INCLUDED_lime_utils_ObjectPool_openfl_geom_Matrix
#include <lime/utils/ObjectPool_openfl_geom_Matrix.h>
#endif
#ifndef INCLUDED_lime_utils_ObjectPool_openfl_geom_Rectangle
#include <lime/utils/ObjectPool_openfl_geom_Rectangle.h>
#endif
#ifndef INCLUDED_openfl__internal_renderer_AbstractMaskManager
#include <openfl/_internal/renderer/AbstractMaskManager.h>
#endif
#ifndef INCLUDED_openfl__internal_renderer_RenderSession
#include <openfl/_internal/renderer/RenderSession.h>
#endif
#ifndef INCLUDED_openfl__internal_renderer_dom_DOMMaskManager
#include <openfl/_internal/renderer/dom/DOMMaskManager.h>
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
namespace dom{

Void DOMMaskManager_obj::__construct(::openfl::_internal::renderer::RenderSession renderSession)
{
HX_STACK_FRAME("openfl._internal.renderer.dom.DOMMaskManager","new",0x8d658c18,"openfl._internal.renderer.dom.DOMMaskManager.new","openfl/_internal/renderer/dom/DOMMaskManager.hx",24,0x08bbb658)
HX_STACK_THIS(this)
HX_STACK_ARG(renderSession,"renderSession")
{
	HX_STACK_LINE(26)
	::openfl::_internal::renderer::RenderSession tmp = renderSession;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(26)
	super::__construct(tmp);
	HX_STACK_LINE(28)
	this->clipRects = Array_obj< ::Dynamic >::__new();
	HX_STACK_LINE(29)
	this->numClipRects = (int)0;
}
;
	return null();
}

//DOMMaskManager_obj::~DOMMaskManager_obj() { }

Dynamic DOMMaskManager_obj::__CreateEmpty() { return  new DOMMaskManager_obj; }
hx::ObjectPtr< DOMMaskManager_obj > DOMMaskManager_obj::__new(::openfl::_internal::renderer::RenderSession renderSession)
{  hx::ObjectPtr< DOMMaskManager_obj > _result_ = new DOMMaskManager_obj();
	_result_->__construct(renderSession);
	return _result_;}

Dynamic DOMMaskManager_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< DOMMaskManager_obj > _result_ = new DOMMaskManager_obj();
	_result_->__construct(inArgs[0]);
	return _result_;}

Void DOMMaskManager_obj::pushMask( ::openfl::display::DisplayObject mask){
{
		HX_STACK_FRAME("openfl._internal.renderer.dom.DOMMaskManager","pushMask",0xdaba3d2e,"openfl._internal.renderer.dom.DOMMaskManager.pushMask","openfl/_internal/renderer/dom/DOMMaskManager.hx",34,0x08bbb658)
		HX_STACK_THIS(this)
		HX_STACK_ARG(mask,"mask")
		HX_STACK_LINE(38)
		::openfl::display::DisplayObject tmp = mask;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(38)
		::openfl::geom::Rectangle tmp1 = mask->getBounds(tmp);		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(38)
		::openfl::geom::Matrix tmp2 = mask->__getRenderTransform();		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(38)
		this->pushRect(tmp1,tmp2);
	}
return null();
}


Void DOMMaskManager_obj::pushObject( ::openfl::display::DisplayObject object,hx::Null< bool >  __o_handleScrollRect){
bool handleScrollRect = __o_handleScrollRect.Default(true);
	HX_STACK_FRAME("openfl._internal.renderer.dom.DOMMaskManager","pushObject",0x05cc8f81,"openfl._internal.renderer.dom.DOMMaskManager.pushObject","openfl/_internal/renderer/dom/DOMMaskManager.hx",43,0x08bbb658)
	HX_STACK_THIS(this)
	HX_STACK_ARG(object,"object")
	HX_STACK_ARG(handleScrollRect,"handleScrollRect")
{
		HX_STACK_LINE(45)
		bool tmp = handleScrollRect;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(45)
		bool tmp1;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(45)
		if ((tmp)){
			HX_STACK_LINE(45)
			tmp1 = (object->__scrollRect != null());
		}
		else{
			HX_STACK_LINE(45)
			tmp1 = false;
		}
		HX_STACK_LINE(45)
		if ((tmp1)){
			HX_STACK_LINE(47)
			::openfl::geom::Rectangle tmp2 = object->__scrollRect;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(47)
			::openfl::geom::Matrix tmp3 = object->__renderTransform;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(47)
			this->pushRect(tmp2,tmp3);
		}
		HX_STACK_LINE(51)
		bool tmp2 = (object->__mask != null());		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(51)
		if ((tmp2)){
			HX_STACK_LINE(53)
			::openfl::display::DisplayObject tmp3 = object->__mask;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(53)
			this->pushMask(tmp3);
		}
	}
return null();
}


Void DOMMaskManager_obj::pushRect( ::openfl::geom::Rectangle rect,::openfl::geom::Matrix transform){
{
		HX_STACK_FRAME("openfl._internal.renderer.dom.DOMMaskManager","pushRect",0xde0b4966,"openfl._internal.renderer.dom.DOMMaskManager.pushRect","openfl/_internal/renderer/dom/DOMMaskManager.hx",60,0x08bbb658)
		HX_STACK_THIS(this)
		HX_STACK_ARG(rect,"rect")
		HX_STACK_ARG(transform,"transform")
		HX_STACK_LINE(64)
		int tmp = this->numClipRects;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(64)
		int tmp1 = this->clipRects->length;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(64)
		bool tmp2 = (tmp == tmp1);		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(64)
		if ((tmp2)){
			HX_STACK_LINE(66)
			int tmp3 = this->numClipRects;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(66)
			::openfl::geom::Rectangle tmp4 = ::openfl::geom::Rectangle_obj::__new(null(),null(),null(),null());		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(66)
			this->clipRects[tmp3] = tmp4;
		}
		HX_STACK_LINE(70)
		int tmp3 = this->numClipRects;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(70)
		::openfl::geom::Rectangle tmp4 = this->clipRects->__get(tmp3).StaticCast< ::openfl::geom::Rectangle >();		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(70)
		::openfl::geom::Rectangle clipRect = tmp4;		HX_STACK_VAR(clipRect,"clipRect");
		HX_STACK_LINE(71)
		::openfl::geom::Rectangle tmp5 = clipRect;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(71)
		::openfl::geom::Matrix tmp6 = transform;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(71)
		rect->__transform(tmp5,tmp6);
		HX_STACK_LINE(73)
		int tmp7 = this->numClipRects;		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(73)
		bool tmp8 = (tmp7 > (int)0);		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(73)
		if ((tmp8)){
			HX_STACK_LINE(75)
			int tmp9 = this->numClipRects;		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(75)
			int tmp10 = (tmp9 - (int)1);		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(75)
			::openfl::geom::Rectangle tmp11 = this->clipRects->__get(tmp10).StaticCast< ::openfl::geom::Rectangle >();		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(75)
			::openfl::geom::Rectangle parentClipRect = tmp11;		HX_STACK_VAR(parentClipRect,"parentClipRect");
			HX_STACK_LINE(76)
			Float tmp12 = parentClipRect->x;		HX_STACK_VAR(tmp12,"tmp12");
			HX_STACK_LINE(76)
			Float tmp13 = parentClipRect->y;		HX_STACK_VAR(tmp13,"tmp13");
			HX_STACK_LINE(76)
			Float tmp14 = parentClipRect->width;		HX_STACK_VAR(tmp14,"tmp14");
			HX_STACK_LINE(76)
			Float tmp15 = parentClipRect->height;		HX_STACK_VAR(tmp15,"tmp15");
			HX_STACK_LINE(76)
			clipRect->__contract(tmp12,tmp13,tmp14,tmp15);
		}
		HX_STACK_LINE(80)
		bool tmp9 = (clipRect->height < (int)0);		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(80)
		if ((tmp9)){
			HX_STACK_LINE(82)
			clipRect->height = (int)0;
		}
		HX_STACK_LINE(86)
		bool tmp10 = (clipRect->width < (int)0);		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(86)
		if ((tmp10)){
			HX_STACK_LINE(88)
			clipRect->width = (int)0;
		}
		HX_STACK_LINE(92)
		this->currentClipRect = clipRect;
		HX_STACK_LINE(93)
		(this->numClipRects)++;
	}
return null();
}


Void DOMMaskManager_obj::popMask( ){
{
		HX_STACK_FRAME("openfl._internal.renderer.dom.DOMMaskManager","popMask",0x0cd75ed5,"openfl._internal.renderer.dom.DOMMaskManager.popMask","openfl/_internal/renderer/dom/DOMMaskManager.hx",100,0x08bbb658)
		HX_STACK_THIS(this)
		HX_STACK_LINE(100)
		this->popRect();
	}
return null();
}


Void DOMMaskManager_obj::popObject( ::openfl::display::DisplayObject object,hx::Null< bool >  __o_handleScrollRect){
bool handleScrollRect = __o_handleScrollRect.Default(true);
	HX_STACK_FRAME("openfl._internal.renderer.dom.DOMMaskManager","popObject",0xd2b2a8e8,"openfl._internal.renderer.dom.DOMMaskManager.popObject","openfl/_internal/renderer/dom/DOMMaskManager.hx",105,0x08bbb658)
	HX_STACK_THIS(this)
	HX_STACK_ARG(object,"object")
	HX_STACK_ARG(handleScrollRect,"handleScrollRect")
{
		HX_STACK_LINE(107)
		bool tmp = (object->__mask != null());		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(107)
		if ((tmp)){
			HX_STACK_LINE(109)
			this->popMask();
		}
		HX_STACK_LINE(113)
		bool tmp1 = handleScrollRect;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(113)
		bool tmp2;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(113)
		if ((tmp1)){
			HX_STACK_LINE(113)
			tmp2 = (object->__scrollRect != null());
		}
		else{
			HX_STACK_LINE(113)
			tmp2 = false;
		}
		HX_STACK_LINE(113)
		if ((tmp2)){
			HX_STACK_LINE(115)
			this->popRect();
		}
	}
return null();
}


Void DOMMaskManager_obj::popRect( ){
{
		HX_STACK_FRAME("openfl._internal.renderer.dom.DOMMaskManager","popRect",0x10286b0d,"openfl._internal.renderer.dom.DOMMaskManager.popRect","openfl/_internal/renderer/dom/DOMMaskManager.hx",122,0x08bbb658)
		HX_STACK_THIS(this)
		HX_STACK_LINE(124)
		int tmp = this->numClipRects;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(124)
		bool tmp1 = (tmp > (int)0);		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(124)
		if ((tmp1)){
			HX_STACK_LINE(126)
			(this->numClipRects)--;
			HX_STACK_LINE(128)
			int tmp2 = this->numClipRects;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(128)
			bool tmp3 = (tmp2 > (int)0);		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(128)
			if ((tmp3)){
				HX_STACK_LINE(130)
				int tmp4 = this->numClipRects;		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(130)
				int tmp5 = (tmp4 - (int)1);		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(130)
				::openfl::geom::Rectangle tmp6 = this->clipRects->__get(tmp5).StaticCast< ::openfl::geom::Rectangle >();		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(130)
				this->currentClipRect = tmp6;
			}
			else{
				HX_STACK_LINE(134)
				this->currentClipRect = null();
			}
		}
	}
return null();
}


Void DOMMaskManager_obj::updateClip( ::openfl::display::DisplayObject displayObject){
{
		HX_STACK_FRAME("openfl._internal.renderer.dom.DOMMaskManager","updateClip",0x972504c1,"openfl._internal.renderer.dom.DOMMaskManager.updateClip","openfl/_internal/renderer/dom/DOMMaskManager.hx",143,0x08bbb658)
		HX_STACK_THIS(this)
		HX_STACK_ARG(displayObject,"displayObject")
		HX_STACK_LINE(145)
		::openfl::geom::Rectangle tmp = this->currentClipRect;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(145)
		bool tmp1 = (tmp == null());		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(145)
		if ((tmp1)){
			HX_STACK_LINE(147)
			bool tmp2 = (displayObject->__worldClip != null());		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(147)
			displayObject->__worldClipChanged = tmp2;
			HX_STACK_LINE(148)
			displayObject->__worldClip = null();
		}
		else{
			HX_STACK_LINE(152)
			bool tmp2 = (displayObject->__worldClip == null());		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(152)
			if ((tmp2)){
				HX_STACK_LINE(154)
				::openfl::geom::Rectangle tmp3 = ::openfl::geom::Rectangle_obj::__new(null(),null(),null(),null());		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(154)
				displayObject->__worldClip = tmp3;
			}
			HX_STACK_LINE(158)
			::lime::utils::ObjectPool_openfl_geom_Rectangle tmp3 = ::openfl::geom::Rectangle_obj::__pool;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(158)
			::openfl::geom::Rectangle tmp4 = tmp3->get();		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(158)
			::openfl::geom::Rectangle clip = tmp4;		HX_STACK_VAR(clip,"clip");
			HX_STACK_LINE(159)
			::lime::utils::ObjectPool_openfl_geom_Matrix tmp5 = ::openfl::geom::Matrix_obj::__pool;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(159)
			::openfl::geom::Matrix tmp6 = tmp5->get();		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(159)
			::openfl::geom::Matrix matrix = tmp6;		HX_STACK_VAR(matrix,"matrix");
			HX_STACK_LINE(161)
			::openfl::geom::Matrix tmp7 = displayObject->__renderTransform;		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(161)
			matrix->copyFrom(tmp7);
			HX_STACK_LINE(162)
			matrix->invert();
			HX_STACK_LINE(164)
			::openfl::geom::Rectangle tmp8 = this->currentClipRect;		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(164)
			::openfl::geom::Rectangle tmp9 = clip;		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(164)
			::openfl::geom::Matrix tmp10 = matrix;		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(164)
			tmp8->__transform(tmp9,tmp10);
			HX_STACK_LINE(166)
			::openfl::geom::Rectangle tmp11 = displayObject->__worldClip;		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(166)
			bool tmp12 = clip->equals(tmp11);		HX_STACK_VAR(tmp12,"tmp12");
			HX_STACK_LINE(166)
			if ((tmp12)){
				HX_STACK_LINE(168)
				displayObject->__worldClipChanged = false;
			}
			else{
				HX_STACK_LINE(172)
				::openfl::geom::Rectangle tmp13 = clip;		HX_STACK_VAR(tmp13,"tmp13");
				HX_STACK_LINE(172)
				displayObject->__worldClip->copyFrom(tmp13);
				HX_STACK_LINE(173)
				displayObject->__worldClipChanged = true;
			}
			HX_STACK_LINE(177)
			::lime::utils::ObjectPool_openfl_geom_Rectangle tmp13 = ::openfl::geom::Rectangle_obj::__pool;		HX_STACK_VAR(tmp13,"tmp13");
			HX_STACK_LINE(177)
			::openfl::geom::Rectangle tmp14 = clip;		HX_STACK_VAR(tmp14,"tmp14");
			HX_STACK_LINE(177)
			tmp13->release(tmp14);
			HX_STACK_LINE(178)
			::lime::utils::ObjectPool_openfl_geom_Matrix tmp15 = ::openfl::geom::Matrix_obj::__pool;		HX_STACK_VAR(tmp15,"tmp15");
			HX_STACK_LINE(178)
			::openfl::geom::Matrix tmp16 = matrix;		HX_STACK_VAR(tmp16,"tmp16");
			HX_STACK_LINE(178)
			tmp15->release(tmp16);
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(DOMMaskManager_obj,updateClip,(void))


DOMMaskManager_obj::DOMMaskManager_obj()
{
}

void DOMMaskManager_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(DOMMaskManager);
	HX_MARK_MEMBER_NAME(currentClipRect,"currentClipRect");
	HX_MARK_MEMBER_NAME(clipRects,"clipRects");
	HX_MARK_MEMBER_NAME(numClipRects,"numClipRects");
	::openfl::_internal::renderer::AbstractMaskManager_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void DOMMaskManager_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(currentClipRect,"currentClipRect");
	HX_VISIT_MEMBER_NAME(clipRects,"clipRects");
	HX_VISIT_MEMBER_NAME(numClipRects,"numClipRects");
	::openfl::_internal::renderer::AbstractMaskManager_obj::__Visit(HX_VISIT_ARG);
}

Dynamic DOMMaskManager_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
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
		if (HX_FIELD_EQ(inName,"clipRects") ) { return clipRects; }
		if (HX_FIELD_EQ(inName,"popObject") ) { return popObject_dyn(); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"pushObject") ) { return pushObject_dyn(); }
		if (HX_FIELD_EQ(inName,"updateClip") ) { return updateClip_dyn(); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"numClipRects") ) { return numClipRects; }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"currentClipRect") ) { return currentClipRect; }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic DOMMaskManager_obj::__SetField(const ::String &inName,const Dynamic &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 9:
		if (HX_FIELD_EQ(inName,"clipRects") ) { clipRects=inValue.Cast< Array< ::Dynamic > >(); return inValue; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"numClipRects") ) { numClipRects=inValue.Cast< int >(); return inValue; }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"currentClipRect") ) { currentClipRect=inValue.Cast< ::openfl::geom::Rectangle >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void DOMMaskManager_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("currentClipRect","\x6d","\x49","\xbc","\x2c"));
	outFields->push(HX_HCSTRING("clipRects","\xdf","\x81","\xd3","\x04"));
	outFields->push(HX_HCSTRING("numClipRects","\xb9","\x8a","\x43","\xac"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsObject /*::openfl::geom::Rectangle*/ ,(int)offsetof(DOMMaskManager_obj,currentClipRect),HX_HCSTRING("currentClipRect","\x6d","\x49","\xbc","\x2c")},
	{hx::fsObject /*Array< ::Dynamic >*/ ,(int)offsetof(DOMMaskManager_obj,clipRects),HX_HCSTRING("clipRects","\xdf","\x81","\xd3","\x04")},
	{hx::fsInt,(int)offsetof(DOMMaskManager_obj,numClipRects),HX_HCSTRING("numClipRects","\xb9","\x8a","\x43","\xac")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo *sStaticStorageInfo = 0;
#endif

static ::String sMemberFields[] = {
	HX_HCSTRING("currentClipRect","\x6d","\x49","\xbc","\x2c"),
	HX_HCSTRING("clipRects","\xdf","\x81","\xd3","\x04"),
	HX_HCSTRING("numClipRects","\xb9","\x8a","\x43","\xac"),
	HX_HCSTRING("pushMask","\xe6","\x73","\x47","\x17"),
	HX_HCSTRING("pushObject","\x39","\xe4","\x1e","\x69"),
	HX_HCSTRING("pushRect","\x1e","\x80","\x98","\x1a"),
	HX_HCSTRING("popMask","\x1d","\x67","\x11","\x43"),
	HX_HCSTRING("popObject","\x30","\x53","\xb5","\x91"),
	HX_HCSTRING("popRect","\x55","\x73","\x62","\x46"),
	HX_HCSTRING("updateClip","\x79","\x59","\x77","\xfa"),
	::String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(DOMMaskManager_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(DOMMaskManager_obj::__mClass,"__mClass");
};

#endif

hx::Class DOMMaskManager_obj::__mClass;

void DOMMaskManager_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("openfl._internal.renderer.dom.DOMMaskManager","\x26","\xe0","\xff","\x5f");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = hx::Class_obj::dupFunctions(sMemberFields);
	__mClass->mCanCast = hx::TCanCast< DOMMaskManager_obj >;
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
