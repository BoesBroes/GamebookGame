#include <hxcpp.h>

#ifndef INCLUDED_EReg
#include <EReg.h>
#endif
#ifndef INCLUDED_openfl__internal_renderer_RenderSession
#include <openfl/_internal/renderer/RenderSession.h>
#endif
#ifndef INCLUDED_openfl__internal_renderer_dom_DOMTextField
#include <openfl/_internal/renderer/dom/DOMTextField.h>
#endif
#ifndef INCLUDED_openfl_display_DisplayObject
#include <openfl/display/DisplayObject.h>
#endif
#ifndef INCLUDED_openfl_display_IBitmapDrawable
#include <openfl/display/IBitmapDrawable.h>
#endif
#ifndef INCLUDED_openfl_display_InteractiveObject
#include <openfl/display/InteractiveObject.h>
#endif
#ifndef INCLUDED_openfl_events_EventDispatcher
#include <openfl/events/EventDispatcher.h>
#endif
#ifndef INCLUDED_openfl_events_IEventDispatcher
#include <openfl/events/IEventDispatcher.h>
#endif
#ifndef INCLUDED_openfl_text_TextField
#include <openfl/text/TextField.h>
#endif
namespace openfl{
namespace _internal{
namespace renderer{
namespace dom{

Void DOMTextField_obj::__construct()
{
	return null();
}

//DOMTextField_obj::~DOMTextField_obj() { }

Dynamic DOMTextField_obj::__CreateEmpty() { return  new DOMTextField_obj; }
hx::ObjectPtr< DOMTextField_obj > DOMTextField_obj::__new()
{  hx::ObjectPtr< DOMTextField_obj > _result_ = new DOMTextField_obj();
	_result_->__construct();
	return _result_;}

Dynamic DOMTextField_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< DOMTextField_obj > _result_ = new DOMTextField_obj();
	_result_->__construct();
	return _result_;}

::EReg DOMTextField_obj::__regexColor;

::EReg DOMTextField_obj::__regexFace;

::EReg DOMTextField_obj::__regexFont;

::EReg DOMTextField_obj::__regexCloseFont;

::EReg DOMTextField_obj::__regexSize;

Void DOMTextField_obj::measureText( ::openfl::text::TextField textField){
{
		HX_STACK_FRAME("openfl._internal.renderer.dom.DOMTextField","measureText",0x2926ab8f,"openfl._internal.renderer.dom.DOMTextField.measureText","openfl/_internal/renderer/dom/DOMTextField.hx",28,0xc9b27f2c)
		HX_STACK_ARG(textField,"textField")
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(DOMTextField_obj,measureText,(void))

Void DOMTextField_obj::render( ::openfl::text::TextField textField,::openfl::_internal::renderer::RenderSession renderSession){
{
		HX_STACK_FRAME("openfl._internal.renderer.dom.DOMTextField","render",0xcba99572,"openfl._internal.renderer.dom.DOMTextField.render","openfl/_internal/renderer/dom/DOMTextField.hx",71,0xc9b27f2c)
		HX_STACK_ARG(textField,"textField")
		HX_STACK_ARG(renderSession,"renderSession")
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(DOMTextField_obj,render,(void))

::String DOMTextField_obj::__getAttributeMatch( ::EReg regex){
	HX_STACK_FRAME("openfl._internal.renderer.dom.DOMTextField","__getAttributeMatch",0x294ef003,"openfl._internal.renderer.dom.DOMTextField.__getAttributeMatch","openfl/_internal/renderer/dom/DOMTextField.hx",354,0xc9b27f2c)
	HX_STACK_ARG(regex,"regex")
	HX_STACK_LINE(356)
	::String tmp = regex->matched((int)2);		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(356)
	bool tmp1 = (tmp != null());		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(356)
	::String tmp2;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(356)
	if ((tmp1)){
		HX_STACK_LINE(356)
		tmp2 = regex->matched((int)2);
	}
	else{
		HX_STACK_LINE(356)
		tmp2 = regex->matched((int)3);
	}
	HX_STACK_LINE(356)
	return tmp2;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(DOMTextField_obj,__getAttributeMatch,return )


DOMTextField_obj::DOMTextField_obj()
{
}

bool DOMTextField_obj::__GetStatic(const ::String &inName, Dynamic &outValue, hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 6:
		if (HX_FIELD_EQ(inName,"render") ) { outValue = render_dyn(); return true;  }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"__regexFace") ) { outValue = __regexFace; return true;  }
		if (HX_FIELD_EQ(inName,"__regexFont") ) { outValue = __regexFont; return true;  }
		if (HX_FIELD_EQ(inName,"__regexSize") ) { outValue = __regexSize; return true;  }
		if (HX_FIELD_EQ(inName,"measureText") ) { outValue = measureText_dyn(); return true;  }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"__regexColor") ) { outValue = __regexColor; return true;  }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"__regexCloseFont") ) { outValue = __regexCloseFont; return true;  }
		break;
	case 19:
		if (HX_FIELD_EQ(inName,"__getAttributeMatch") ) { outValue = __getAttributeMatch_dyn(); return true;  }
	}
	return false;
}

bool DOMTextField_obj::__SetStatic(const ::String &inName,Dynamic &ioValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 11:
		if (HX_FIELD_EQ(inName,"__regexFace") ) { __regexFace=ioValue.Cast< ::EReg >(); return true; }
		if (HX_FIELD_EQ(inName,"__regexFont") ) { __regexFont=ioValue.Cast< ::EReg >(); return true; }
		if (HX_FIELD_EQ(inName,"__regexSize") ) { __regexSize=ioValue.Cast< ::EReg >(); return true; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"__regexColor") ) { __regexColor=ioValue.Cast< ::EReg >(); return true; }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"__regexCloseFont") ) { __regexCloseFont=ioValue.Cast< ::EReg >(); return true; }
	}
	return false;
}

#if HXCPP_SCRIPTABLE
static hx::StorageInfo *sMemberStorageInfo = 0;
static hx::StaticInfo sStaticStorageInfo[] = {
	{hx::fsObject /*::EReg*/ ,(void *) &DOMTextField_obj::__regexColor,HX_HCSTRING("__regexColor","\x3c","\x3c","\x9c","\x56")},
	{hx::fsObject /*::EReg*/ ,(void *) &DOMTextField_obj::__regexFace,HX_HCSTRING("__regexFace","\xe4","\xc7","\x66","\x12")},
	{hx::fsObject /*::EReg*/ ,(void *) &DOMTextField_obj::__regexFont,HX_HCSTRING("__regexFont","\x16","\x71","\x71","\x12")},
	{hx::fsObject /*::EReg*/ ,(void *) &DOMTextField_obj::__regexCloseFont,HX_HCSTRING("__regexCloseFont","\x00","\x89","\x6f","\x88")},
	{hx::fsObject /*::EReg*/ ,(void *) &DOMTextField_obj::__regexSize,HX_HCSTRING("__regexSize","\x08","\xb4","\x04","\x1b")},
	{ hx::fsUnknown, 0, null()}
};
#endif

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(DOMTextField_obj::__mClass,"__mClass");
	HX_MARK_MEMBER_NAME(DOMTextField_obj::__regexColor,"__regexColor");
	HX_MARK_MEMBER_NAME(DOMTextField_obj::__regexFace,"__regexFace");
	HX_MARK_MEMBER_NAME(DOMTextField_obj::__regexFont,"__regexFont");
	HX_MARK_MEMBER_NAME(DOMTextField_obj::__regexCloseFont,"__regexCloseFont");
	HX_MARK_MEMBER_NAME(DOMTextField_obj::__regexSize,"__regexSize");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(DOMTextField_obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(DOMTextField_obj::__regexColor,"__regexColor");
	HX_VISIT_MEMBER_NAME(DOMTextField_obj::__regexFace,"__regexFace");
	HX_VISIT_MEMBER_NAME(DOMTextField_obj::__regexFont,"__regexFont");
	HX_VISIT_MEMBER_NAME(DOMTextField_obj::__regexCloseFont,"__regexCloseFont");
	HX_VISIT_MEMBER_NAME(DOMTextField_obj::__regexSize,"__regexSize");
};

#endif

hx::Class DOMTextField_obj::__mClass;

static ::String sStaticFields[] = {
	HX_HCSTRING("__regexColor","\x3c","\x3c","\x9c","\x56"),
	HX_HCSTRING("__regexFace","\xe4","\xc7","\x66","\x12"),
	HX_HCSTRING("__regexFont","\x16","\x71","\x71","\x12"),
	HX_HCSTRING("__regexCloseFont","\x00","\x89","\x6f","\x88"),
	HX_HCSTRING("__regexSize","\x08","\xb4","\x04","\x1b"),
	HX_HCSTRING("measureText","\x2b","\xfb","\x80","\x50"),
	HX_HCSTRING("render","\x56","\x6b","\x29","\x05"),
	HX_HCSTRING("__getAttributeMatch","\x9f","\x3b","\x2c","\x45"),
	::String(null()) };

void DOMTextField_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("openfl._internal.renderer.dom.DOMTextField","\xd2","\x0a","\x72","\x68");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &DOMTextField_obj::__GetStatic;
	__mClass->mSetStaticField = &DOMTextField_obj::__SetStatic;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(sStaticFields);
	__mClass->mMembers = hx::Class_obj::dupFunctions(0 /* sMemberFields */);
	__mClass->mCanCast = hx::TCanCast< DOMTextField_obj >;
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

void DOMTextField_obj::__boot()
{
	__regexColor= ::EReg_obj::__new(HX_HCSTRING("color=(\"#([^\"]+)\"|'#([^']+)')","\x36","\x15","\x0f","\x76"),HX_HCSTRING("i","\x69","\x00","\x00","\x00"));
	__regexFace= ::EReg_obj::__new(HX_HCSTRING("face=(\"([^\"]+)\"|'([^']+)')","\x1e","\x00","\x2b","\x89"),HX_HCSTRING("i","\x69","\x00","\x00","\x00"));
	__regexFont= ::EReg_obj::__new(HX_HCSTRING("<font ([^>]+)>","\xeb","\x24","\xd0","\x0a"),HX_HCSTRING("gi","\x22","\x5a","\x00","\x00"));
	__regexCloseFont= ::EReg_obj::__new(HX_HCSTRING("</font>","\x3c","\x82","\x5f","\x8e"),HX_HCSTRING("gi","\x22","\x5a","\x00","\x00"));
	__regexSize= ::EReg_obj::__new(HX_HCSTRING("size=(\"([^\"]+)\"|'([^']+)')>","\xbc","\x32","\xa4","\x3e"),HX_HCSTRING("i","\x69","\x00","\x00","\x00"));
}

} // end namespace openfl
} // end namespace _internal
} // end namespace renderer
} // end namespace dom
