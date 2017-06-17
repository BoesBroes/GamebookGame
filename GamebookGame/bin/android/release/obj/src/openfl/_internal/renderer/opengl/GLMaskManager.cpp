#include <hxcpp.h>

#include "hxMath.h"
#ifndef INCLUDED_lime__backend_native_NativeGLRenderContext
#include <lime/_backend/native/NativeGLRenderContext.h>
#endif
#ifndef INCLUDED_lime_app_IModule
#include <lime/app/IModule.h>
#endif
#ifndef INCLUDED_openfl_Lib
#include <openfl/Lib.h>
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
#ifndef INCLUDED_openfl__internal_renderer_opengl_GLMaskManager
#include <openfl/_internal/renderer/opengl/GLMaskManager.h>
#endif
#ifndef INCLUDED_openfl__internal_renderer_opengl_GLRenderer
#include <openfl/_internal/renderer/opengl/GLRenderer.h>
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
#ifndef INCLUDED_openfl_display_MovieClip
#include <openfl/display/MovieClip.h>
#endif
#ifndef INCLUDED_openfl_display_Sprite
#include <openfl/display/Sprite.h>
#endif
#ifndef INCLUDED_openfl_display_Stage
#include <openfl/display/Stage.h>
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
namespace opengl{

Void GLMaskManager_obj::__construct(::openfl::_internal::renderer::RenderSession renderSession)
{
{
	::openfl::_internal::renderer::RenderSession tmp = renderSession;
	super::__construct(tmp);
	this->gl = renderSession->gl;
	this->clipRects = Array_obj< ::Dynamic >::__new();
	this->numClipRects = (int)0;
	::openfl::geom::Rectangle tmp1 = ::openfl::geom::Rectangle_obj::__new(null(),null(),null(),null());
	this->tempRect = tmp1;
}
;
	return null();
}

//GLMaskManager_obj::~GLMaskManager_obj() { }

Dynamic GLMaskManager_obj::__CreateEmpty() { return  new GLMaskManager_obj; }
hx::ObjectPtr< GLMaskManager_obj > GLMaskManager_obj::__new(::openfl::_internal::renderer::RenderSession renderSession)
{  hx::ObjectPtr< GLMaskManager_obj > _result_ = new GLMaskManager_obj();
	_result_->__construct(renderSession);
	return _result_;}

Dynamic GLMaskManager_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< GLMaskManager_obj > _result_ = new GLMaskManager_obj();
	_result_->__construct(inArgs[0]);
	return _result_;}

Void GLMaskManager_obj::pushMask( ::openfl::display::DisplayObject mask){
{
		::openfl::display::DisplayObject tmp = mask;
		::openfl::geom::Rectangle tmp1 = mask->getBounds(tmp);
		::openfl::geom::Matrix tmp2 = mask->__getRenderTransform();
		this->pushRect(tmp1,tmp2);
	}
return null();
}


Void GLMaskManager_obj::pushObject( ::openfl::display::DisplayObject object,hx::Null< bool >  __o_handleScrollRect){
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


Void GLMaskManager_obj::pushRect( ::openfl::geom::Rectangle rect,::openfl::geom::Matrix transform){
{
		::openfl::display::MovieClip tmp = ::openfl::Lib_obj::current;
		::openfl::display::Stage stage = tmp->stage;
		int tmp1 = this->numClipRects;
		int tmp2 = this->clipRects->length;
		bool tmp3 = (tmp1 == tmp2);
		if ((tmp3)){
			int tmp4 = this->numClipRects;
			::openfl::geom::Rectangle tmp5 = ::openfl::geom::Rectangle_obj::__new(null(),null(),null(),null());
			this->clipRects[tmp4] = tmp5;
		}
		int tmp4 = this->numClipRects;
		::openfl::geom::Rectangle tmp5 = this->clipRects->__get(tmp4).StaticCast< ::openfl::geom::Rectangle >();
		::openfl::geom::Rectangle clipRect = tmp5;
		::openfl::geom::Rectangle tmp6 = clipRect;
		::openfl::geom::Matrix tmp7 = transform;
		rect->__transform(tmp6,tmp7);
		int tmp8 = this->numClipRects;
		bool tmp9 = (tmp8 > (int)0);
		if ((tmp9)){
			int tmp10 = this->numClipRects;
			int tmp11 = (tmp10 - (int)1);
			::openfl::geom::Rectangle tmp12 = this->clipRects->__get(tmp11).StaticCast< ::openfl::geom::Rectangle >();
			::openfl::geom::Rectangle parentClipRect = tmp12;
			Float tmp13 = parentClipRect->x;
			Float tmp14 = parentClipRect->y;
			Float tmp15 = parentClipRect->width;
			Float tmp16 = parentClipRect->height;
			clipRect->__contract(tmp13,tmp14,tmp15,tmp16);
		}
		bool tmp10 = (clipRect->height < (int)0);
		if ((tmp10)){
			clipRect->height = (int)0;
		}
		bool tmp11 = (clipRect->width < (int)0);
		if ((tmp11)){
			clipRect->width = (int)0;
		}
		::openfl::geom::Rectangle tmp12 = clipRect;
		this->scissorRect(tmp12);
		(this->numClipRects)++;
	}
return null();
}


Void GLMaskManager_obj::popMask( ){
{
		this->popRect();
	}
return null();
}


Void GLMaskManager_obj::popObject( ::openfl::display::DisplayObject object,hx::Null< bool >  __o_handleScrollRect){
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


Void GLMaskManager_obj::popRect( ){
{
		int tmp = this->numClipRects;
		bool tmp1 = (tmp > (int)0);
		if ((tmp1)){
			(this->numClipRects)--;
			int tmp2 = this->numClipRects;
			bool tmp3 = (tmp2 > (int)0);
			if ((tmp3)){
				int tmp4 = this->numClipRects;
				int tmp5 = (tmp4 - (int)1);
				::openfl::geom::Rectangle tmp6 = this->clipRects->__get(tmp5).StaticCast< ::openfl::geom::Rectangle >();
				this->scissorRect(tmp6);
			}
			else{
				this->scissorRect(null());
			}
		}
	}
return null();
}


Void GLMaskManager_obj::scissorRect( ::openfl::geom::Rectangle rect){
{
		bool tmp = (rect != null());
		if ((tmp)){
			::openfl::_internal::renderer::RenderSession tmp1 = this->renderSession;
			::openfl::_internal::renderer::opengl::GLRenderer renderer = ((::openfl::_internal::renderer::opengl::GLRenderer)(tmp1->renderer));
			::lime::_backend::native::NativeGLRenderContext tmp2 = this->gl;
			::lime::_backend::native::NativeGLRenderContext tmp3 = this->gl;
			int tmp4 = tmp3->SCISSOR_TEST;
			tmp2->enable(tmp4);
			::openfl::geom::Rectangle tmp5 = this->tempRect;
			::openfl::geom::Rectangle clipRect = tmp5;
			::openfl::geom::Rectangle tmp6 = clipRect;
			::openfl::geom::Matrix tmp7 = renderer->displayMatrix;
			rect->__transform(tmp6,tmp7);
			Float tmp8 = clipRect->x;
			int tmp9 = ::Math_obj::floor(tmp8);
			int x = tmp9;
			Float tmp10 = (renderer->height - clipRect->y);
			Float tmp11 = clipRect->height;
			Float tmp12 = (tmp10 - tmp11);
			int tmp13 = ::Math_obj::floor(tmp12);
			int y = tmp13;
			Float tmp14 = clipRect->width;
			int tmp15 = ::Math_obj::ceil(tmp14);
			int width = tmp15;
			Float tmp16 = clipRect->height;
			int tmp17 = ::Math_obj::ceil(tmp16);
			int height = tmp17;
			bool tmp18 = (width < (int)0);
			if ((tmp18)){
				width = (int)0;
			}
			bool tmp19 = (height < (int)0);
			if ((tmp19)){
				height = (int)0;
			}
			::lime::_backend::native::NativeGLRenderContext tmp20 = this->gl;
			int tmp21 = x;
			int tmp22 = y;
			int tmp23 = width;
			int tmp24 = height;
			tmp20->scissor(tmp21,tmp22,tmp23,tmp24);
		}
		else{
			::lime::_backend::native::NativeGLRenderContext tmp1 = this->gl;
			::lime::_backend::native::NativeGLRenderContext tmp2 = this->gl;
			int tmp3 = tmp2->SCISSOR_TEST;
			tmp1->disable(tmp3);
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(GLMaskManager_obj,scissorRect,(void))


GLMaskManager_obj::GLMaskManager_obj()
{
}

void GLMaskManager_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(GLMaskManager);
	HX_MARK_MEMBER_NAME(clipRects,"clipRects");
	HX_MARK_MEMBER_NAME(gl,"gl");
	HX_MARK_MEMBER_NAME(numClipRects,"numClipRects");
	HX_MARK_MEMBER_NAME(tempRect,"tempRect");
	::openfl::_internal::renderer::AbstractMaskManager_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void GLMaskManager_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(clipRects,"clipRects");
	HX_VISIT_MEMBER_NAME(gl,"gl");
	HX_VISIT_MEMBER_NAME(numClipRects,"numClipRects");
	HX_VISIT_MEMBER_NAME(tempRect,"tempRect");
	::openfl::_internal::renderer::AbstractMaskManager_obj::__Visit(HX_VISIT_ARG);
}

Dynamic GLMaskManager_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 2:
		if (HX_FIELD_EQ(inName,"gl") ) { return gl; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"popMask") ) { return popMask_dyn(); }
		if (HX_FIELD_EQ(inName,"popRect") ) { return popRect_dyn(); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"tempRect") ) { return tempRect; }
		if (HX_FIELD_EQ(inName,"pushMask") ) { return pushMask_dyn(); }
		if (HX_FIELD_EQ(inName,"pushRect") ) { return pushRect_dyn(); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"clipRects") ) { return clipRects; }
		if (HX_FIELD_EQ(inName,"popObject") ) { return popObject_dyn(); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"pushObject") ) { return pushObject_dyn(); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"scissorRect") ) { return scissorRect_dyn(); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"numClipRects") ) { return numClipRects; }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic GLMaskManager_obj::__SetField(const ::String &inName,const Dynamic &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 2:
		if (HX_FIELD_EQ(inName,"gl") ) { gl=inValue.Cast< ::lime::_backend::native::NativeGLRenderContext >(); return inValue; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"tempRect") ) { tempRect=inValue.Cast< ::openfl::geom::Rectangle >(); return inValue; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"clipRects") ) { clipRects=inValue.Cast< Array< ::Dynamic > >(); return inValue; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"numClipRects") ) { numClipRects=inValue.Cast< int >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void GLMaskManager_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("clipRects","\xdf","\x81","\xd3","\x04"));
	outFields->push(HX_HCSTRING("gl","\x25","\x5a","\x00","\x00"));
	outFields->push(HX_HCSTRING("numClipRects","\xb9","\x8a","\x43","\xac"));
	outFields->push(HX_HCSTRING("tempRect","\x58","\x56","\x1b","\x9b"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsObject /*Array< ::Dynamic >*/ ,(int)offsetof(GLMaskManager_obj,clipRects),HX_HCSTRING("clipRects","\xdf","\x81","\xd3","\x04")},
	{hx::fsObject /*::lime::_backend::native::NativeGLRenderContext*/ ,(int)offsetof(GLMaskManager_obj,gl),HX_HCSTRING("gl","\x25","\x5a","\x00","\x00")},
	{hx::fsInt,(int)offsetof(GLMaskManager_obj,numClipRects),HX_HCSTRING("numClipRects","\xb9","\x8a","\x43","\xac")},
	{hx::fsObject /*::openfl::geom::Rectangle*/ ,(int)offsetof(GLMaskManager_obj,tempRect),HX_HCSTRING("tempRect","\x58","\x56","\x1b","\x9b")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo *sStaticStorageInfo = 0;
#endif

static ::String sMemberFields[] = {
	HX_HCSTRING("clipRects","\xdf","\x81","\xd3","\x04"),
	HX_HCSTRING("gl","\x25","\x5a","\x00","\x00"),
	HX_HCSTRING("numClipRects","\xb9","\x8a","\x43","\xac"),
	HX_HCSTRING("tempRect","\x58","\x56","\x1b","\x9b"),
	HX_HCSTRING("pushMask","\xe6","\x73","\x47","\x17"),
	HX_HCSTRING("pushObject","\x39","\xe4","\x1e","\x69"),
	HX_HCSTRING("pushRect","\x1e","\x80","\x98","\x1a"),
	HX_HCSTRING("popMask","\x1d","\x67","\x11","\x43"),
	HX_HCSTRING("popObject","\x30","\x53","\xb5","\x91"),
	HX_HCSTRING("popRect","\x55","\x73","\x62","\x46"),
	HX_HCSTRING("scissorRect","\x60","\xdf","\x53","\x61"),
	::String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(GLMaskManager_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(GLMaskManager_obj::__mClass,"__mClass");
};

#endif

hx::Class GLMaskManager_obj::__mClass;

void GLMaskManager_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("openfl._internal.renderer.opengl.GLMaskManager","\x58","\xed","\xaa","\xef");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = hx::Class_obj::dupFunctions(sMemberFields);
	__mClass->mCanCast = hx::TCanCast< GLMaskManager_obj >;
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
} // end namespace opengl
