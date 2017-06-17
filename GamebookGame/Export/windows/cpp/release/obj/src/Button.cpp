#include <hxcpp.h>

#ifndef INCLUDED_Button
#include <Button.h>
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
#ifndef INCLUDED_openfl_display_DisplayObjectContainer
#include <openfl/display/DisplayObjectContainer.h>
#endif
#ifndef INCLUDED_openfl_display_IBitmapDrawable
#include <openfl/display/IBitmapDrawable.h>
#endif
#ifndef INCLUDED_openfl_display_InteractiveObject
#include <openfl/display/InteractiveObject.h>
#endif
#ifndef INCLUDED_openfl_display_Sprite
#include <openfl/display/Sprite.h>
#endif
#ifndef INCLUDED_openfl_events_Event
#include <openfl/events/Event.h>
#endif
#ifndef INCLUDED_openfl_events_EventDispatcher
#include <openfl/events/EventDispatcher.h>
#endif
#ifndef INCLUDED_openfl_events_IEventDispatcher
#include <openfl/events/IEventDispatcher.h>
#endif
#ifndef INCLUDED_openfl_events_MouseEvent
#include <openfl/events/MouseEvent.h>
#endif
#ifndef INCLUDED_openfl_utils_Assets
#include <openfl/utils/Assets.h>
#endif

Void Button_obj::__construct(::String _imageName)
{
HX_STACK_FRAME("Button","new",0x9489e804,"Button.new","Button.hx",19,0xf1be03ec)
HX_STACK_THIS(this)
HX_STACK_ARG(_imageName,"_imageName")
{
	HX_STACK_LINE(20)
	super::__construct();
	HX_STACK_LINE(23)
	this->imageName = _imageName;
	HX_STACK_LINE(24)
	::String tmp = this->imageName;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(24)
	::String tmp1 = (HX_HCSTRING("img/buttons/","\x9a","\xc9","\xb2","\x4a") + tmp);		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(24)
	::String tmp2 = (tmp1 + HX_HCSTRING(".png","\x3b","\x2d","\xbd","\x1e"));		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(24)
	::openfl::display::BitmapData tmp3 = ::openfl::utils::Assets_obj::getBitmapData(tmp2,null());		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(24)
	::openfl::display::BitmapData imageData = tmp3;		HX_STACK_VAR(imageData,"imageData");
	HX_STACK_LINE(25)
	::openfl::display::Bitmap tmp4 = ::openfl::display::Bitmap_obj::__new(imageData,null(),null());		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(25)
	::openfl::display::Bitmap image = tmp4;		HX_STACK_VAR(image,"image");
	HX_STACK_LINE(26)
	::openfl::display::Bitmap tmp5 = image;		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(26)
	this->addChild(tmp5);
	HX_STACK_LINE(30)
	Dynamic tmp6 = this->OnMouseClick_dyn();		HX_STACK_VAR(tmp6,"tmp6");
	HX_STACK_LINE(30)
	this->addEventListener(HX_HCSTRING("click","\x48","\x7c","\x5e","\x48"),tmp6,null(),null(),null());
	HX_STACK_LINE(31)
	Dynamic tmp7 = this->onRoll_dyn();		HX_STACK_VAR(tmp7,"tmp7");
	HX_STACK_LINE(31)
	this->addEventListener(HX_HCSTRING("rollOver","\x71","\xab","\xa8","\x12"),tmp7,null(),null(),null());
	HX_STACK_LINE(32)
	Dynamic tmp8 = this->onOut_dyn();		HX_STACK_VAR(tmp8,"tmp8");
	HX_STACK_LINE(32)
	this->addEventListener(HX_HCSTRING("rollOut","\x11","\xf9","\x11","\x5d"),tmp8,null(),null(),null());
}
;
	return null();
}

//Button_obj::~Button_obj() { }

Dynamic Button_obj::__CreateEmpty() { return  new Button_obj; }
hx::ObjectPtr< Button_obj > Button_obj::__new(::String _imageName)
{  hx::ObjectPtr< Button_obj > _result_ = new Button_obj();
	_result_->__construct(_imageName);
	return _result_;}

Dynamic Button_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< Button_obj > _result_ = new Button_obj();
	_result_->__construct(inArgs[0]);
	return _result_;}

Void Button_obj::OnMouseClick( ::openfl::events::MouseEvent event){
{
		HX_STACK_FRAME("Button","OnMouseClick",0x1c0531de,"Button.OnMouseClick","Button.hx",36,0xf1be03ec)
		HX_STACK_THIS(this)
		HX_STACK_ARG(event,"event")
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Button_obj,OnMouseClick,(void))

Void Button_obj::onRoll( ::openfl::events::MouseEvent event){
{
		HX_STACK_FRAME("Button","onRoll",0x00123b18,"Button.onRoll","Button.hx",41,0xf1be03ec)
		HX_STACK_THIS(this)
		HX_STACK_ARG(event,"event")
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Button_obj,onRoll,(void))

Void Button_obj::onOut( ::openfl::events::MouseEvent event){
{
		HX_STACK_FRAME("Button","onOut",0xd2127d53,"Button.onOut","Button.hx",46,0xf1be03ec)
		HX_STACK_THIS(this)
		HX_STACK_ARG(event,"event")
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Button_obj,onOut,(void))


Button_obj::Button_obj()
{
}

void Button_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(Button);
	HX_MARK_MEMBER_NAME(imageName,"imageName");
	HX_MARK_MEMBER_NAME(image,"image");
	::openfl::display::Sprite_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void Button_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(imageName,"imageName");
	HX_VISIT_MEMBER_NAME(image,"image");
	::openfl::display::Sprite_obj::__Visit(HX_VISIT_ARG);
}

Dynamic Button_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"image") ) { return image; }
		if (HX_FIELD_EQ(inName,"onOut") ) { return onOut_dyn(); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"onRoll") ) { return onRoll_dyn(); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"imageName") ) { return imageName; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"OnMouseClick") ) { return OnMouseClick_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic Button_obj::__SetField(const ::String &inName,const Dynamic &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"image") ) { image=inValue.Cast< ::openfl::display::Bitmap >(); return inValue; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"imageName") ) { imageName=inValue.Cast< ::String >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void Button_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("imageName","\x46","\x07","\x34","\x2b"));
	outFields->push(HX_HCSTRING("image","\x5b","\x1f","\x69","\xbd"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsString,(int)offsetof(Button_obj,imageName),HX_HCSTRING("imageName","\x46","\x07","\x34","\x2b")},
	{hx::fsObject /*::openfl::display::Bitmap*/ ,(int)offsetof(Button_obj,image),HX_HCSTRING("image","\x5b","\x1f","\x69","\xbd")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo *sStaticStorageInfo = 0;
#endif

static ::String sMemberFields[] = {
	HX_HCSTRING("imageName","\x46","\x07","\x34","\x2b"),
	HX_HCSTRING("image","\x5b","\x1f","\x69","\xbd"),
	HX_HCSTRING("OnMouseClick","\x02","\x5e","\x81","\x06"),
	HX_HCSTRING("onRoll","\x3c","\xf4","\x38","\xee"),
	HX_HCSTRING("onOut","\xaf","\x34","\x6c","\x32"),
	::String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(Button_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(Button_obj::__mClass,"__mClass");
};

#endif

hx::Class Button_obj::__mClass;

void Button_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("Button","\x12","\xd6","\x74","\x0e");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = hx::Class_obj::dupFunctions(sMemberFields);
	__mClass->mCanCast = hx::TCanCast< Button_obj >;
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

