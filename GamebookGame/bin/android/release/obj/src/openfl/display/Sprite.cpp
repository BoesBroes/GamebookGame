#include <hxcpp.h>

#ifndef INCLUDED_lime_app_IModule
#include <lime/app/IModule.h>
#endif
#ifndef INCLUDED_lime_ui_MouseCursor
#include <lime/ui/MouseCursor.h>
#endif
#ifndef INCLUDED_lime_utils_ObjectPool_openfl_geom_Point
#include <lime/utils/ObjectPool_openfl_geom_Point.h>
#endif
#ifndef INCLUDED_openfl_display_DisplayObject
#include <openfl/display/DisplayObject.h>
#endif
#ifndef INCLUDED_openfl_display_DisplayObjectContainer
#include <openfl/display/DisplayObjectContainer.h>
#endif
#ifndef INCLUDED_openfl_display_Graphics
#include <openfl/display/Graphics.h>
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
#ifndef INCLUDED_openfl_geom_Point
#include <openfl/geom/Point.h>
#endif
#ifndef INCLUDED_openfl_geom_Rectangle
#include <openfl/geom/Rectangle.h>
#endif
namespace openfl{
namespace display{

Void Sprite_obj::__construct()
{
{
	super::__construct();
	this->buttonMode = false;
	this->useHandCursor = true;
}
;
	return null();
}

//Sprite_obj::~Sprite_obj() { }

Dynamic Sprite_obj::__CreateEmpty() { return  new Sprite_obj; }
hx::ObjectPtr< Sprite_obj > Sprite_obj::__new()
{  hx::ObjectPtr< Sprite_obj > _result_ = new Sprite_obj();
	_result_->__construct();
	return _result_;}

Dynamic Sprite_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< Sprite_obj > _result_ = new Sprite_obj();
	_result_->__construct();
	return _result_;}

Void Sprite_obj::startDrag( hx::Null< bool >  __o_lockCenter,::openfl::geom::Rectangle bounds){
bool lockCenter = __o_lockCenter.Default(false);
{
		::openfl::display::Stage tmp = this->stage;
		bool tmp1 = (tmp != null());
		if ((tmp1)){
			::openfl::display::Stage tmp2 = this->stage;
			bool tmp3 = lockCenter;
			::openfl::geom::Rectangle tmp4 = bounds;
			tmp2->__startDrag(hx::ObjectPtr<OBJ_>(this),tmp3,tmp4);
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(Sprite_obj,startDrag,(void))

Void Sprite_obj::stopDrag( ){
{
		::openfl::display::Stage tmp = this->stage;
		bool tmp1 = (tmp != null());
		if ((tmp1)){
			::openfl::display::Stage tmp2 = this->stage;
			tmp2->__stopDrag(hx::ObjectPtr<OBJ_>(this));
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(Sprite_obj,stopDrag,(void))

::lime::ui::MouseCursor Sprite_obj::__getCursor( ){
	bool tmp = this->buttonMode;
	bool tmp1;
	if ((tmp)){
		tmp1 = this->useHandCursor;
	}
	else{
		tmp1 = false;
	}
	::lime::ui::MouseCursor tmp2;
	if ((tmp1)){
		tmp2 = ::lime::ui::MouseCursor_obj::POINTER;
	}
	else{
		tmp2 = null();
	}
	return tmp2;
}


bool Sprite_obj::__hitTest( Float x,Float y,bool shapeFlag,Array< ::Dynamic > stack,bool interactiveOnly,::openfl::display::DisplayObject hitObject){
	::openfl::display::Sprite tmp = this->hitArea;
	bool tmp1 = (tmp != null());
	if ((tmp1)){
		::openfl::display::Sprite tmp2 = this->hitArea;
		bool tmp3 = tmp2->mouseEnabled;
		bool tmp4 = !(tmp3);
		if ((tmp4)){
			::openfl::display::Sprite tmp5 = this->hitArea;
			tmp5->mouseEnabled = true;
			::openfl::display::Sprite tmp6 = this->hitArea;
			Float tmp7 = x;
			Float tmp8 = y;
			bool tmp9 = shapeFlag;
			::openfl::display::DisplayObject tmp10 = hitObject;
			bool tmp11 = tmp6->__hitTest(tmp7,tmp8,tmp9,null(),true,tmp10);
			bool hitTest = tmp11;
			::openfl::display::Sprite tmp12 = this->hitArea;
			tmp12->mouseEnabled = false;
			bool tmp13 = hitTest;
			if ((tmp13)){
				::openfl::display::DisplayObject tmp14 = hitObject;
				stack[stack->length] = tmp14;
			}
			bool tmp14 = hitTest;
			return tmp14;
		}
	}
	else{
		bool tmp2 = hitObject->get_visible();
		bool tmp3 = tmp2;
		bool tmp4 = !(tmp3);
		bool tmp5 = !(tmp4);
		bool tmp6 = tmp5;
		bool tmp7;
		if ((tmp6)){
			tmp7 = this->__isMask;
		}
		else{
			tmp7 = true;
		}
		bool tmp8 = !(tmp7);
		bool tmp9;
		if ((tmp8)){
			bool tmp10 = interactiveOnly;
			bool tmp11 = tmp10;
			bool tmp12;
			bool tmp13 = tmp11;
			if ((tmp13)){
				bool tmp14 = this->mouseEnabled;
				bool tmp15 = tmp14;
				bool tmp16 = tmp15;
				bool tmp17 = tmp16;
				bool tmp18 = tmp17;
				bool tmp19 = tmp18;
				bool tmp20 = tmp19;
				bool tmp21 = !(tmp20);
				tmp12 = tmp21;
			}
			else{
				tmp12 = false;
			}
			bool tmp14 = tmp12;
			if ((tmp14)){
				bool tmp15 = this->mouseChildren;
				bool tmp16 = tmp15;
				bool tmp17 = tmp16;
				bool tmp18 = tmp17;
				bool tmp19 = tmp18;
				tmp9 = !(tmp19);
			}
			else{
				tmp9 = false;
			}
		}
		else{
			tmp9 = true;
		}
		if ((tmp9)){
			return false;
		}
		::openfl::display::DisplayObject tmp10 = this->get_mask();
		bool tmp11 = (tmp10 != null());
		bool tmp12;
		if ((tmp11)){
			::openfl::display::DisplayObject tmp13 = this->get_mask();
			::openfl::display::DisplayObject tmp14 = tmp13;
			Float tmp15 = x;
			Float tmp16 = y;
			Float tmp17 = tmp15;
			Float tmp18 = tmp16;
			bool tmp19 = tmp14->__hitTestMask(tmp17,tmp18);
			bool tmp20 = tmp19;
			bool tmp21 = tmp20;
			tmp12 = !(tmp21);
		}
		else{
			tmp12 = false;
		}
		if ((tmp12)){
			return false;
		}
		::openfl::geom::Rectangle tmp13 = this->__scrollRect;
		bool tmp14 = (tmp13 != null());
		if ((tmp14)){
			::lime::utils::ObjectPool_openfl_geom_Point tmp15 = ::openfl::geom::Point_obj::__pool;
			::openfl::geom::Point tmp16 = tmp15->get();
			::openfl::geom::Point point = tmp16;
			Float tmp17 = x;
			Float tmp18 = y;
			point->setTo(tmp17,tmp18);
			{
				::openfl::geom::Matrix tmp19 = this->__getRenderTransform();
				::openfl::geom::Matrix _this = tmp19;
				Float tmp20 = (_this->a * _this->d);
				Float tmp21 = (_this->b * _this->c);
				Float tmp22 = (tmp20 - tmp21);
				Float norm = tmp22;
				bool tmp23 = (norm == (int)0);
				if ((tmp23)){
					Float tmp24 = _this->tx;
					Float tmp25 = -(tmp24);
					point->x = tmp25;
					Float tmp26 = _this->ty;
					Float tmp27 = -(tmp26);
					point->y = tmp27;
				}
				else{
					Float tmp24 = (Float(((Float)1.0)) / Float(norm));
					Float tmp25 = _this->c;
					Float tmp26 = (_this->ty - point->y);
					Float tmp27 = (tmp25 * tmp26);
					Float tmp28 = _this->d;
					Float tmp29 = (point->x - _this->tx);
					Float tmp30 = (tmp28 * tmp29);
					Float tmp31 = (tmp27 + tmp30);
					Float tmp32 = (tmp24 * tmp31);
					Float px = tmp32;
					Float tmp33 = (Float(((Float)1.0)) / Float(norm));
					Float tmp34 = _this->a;
					Float tmp35 = (point->y - _this->ty);
					Float tmp36 = (tmp34 * tmp35);
					Float tmp37 = _this->b;
					Float tmp38 = (_this->tx - point->x);
					Float tmp39 = (tmp37 * tmp38);
					Float tmp40 = (tmp36 + tmp39);
					Float tmp41 = (tmp33 * tmp40);
					point->y = tmp41;
					point->x = px;
				}
			}
			::openfl::geom::Rectangle tmp19 = this->__scrollRect;
			::openfl::geom::Point tmp20 = point;
			bool tmp21 = tmp19->containsPoint(tmp20);
			bool tmp22 = !(tmp21);
			if ((tmp22)){
				::lime::utils::ObjectPool_openfl_geom_Point tmp23 = ::openfl::geom::Point_obj::__pool;
				::openfl::geom::Point tmp24 = point;
				tmp23->release(tmp24);
				return false;
			}
			::lime::utils::ObjectPool_openfl_geom_Point tmp23 = ::openfl::geom::Point_obj::__pool;
			::openfl::geom::Point tmp24 = point;
			tmp23->release(tmp24);
		}
		Float tmp15 = x;
		Float tmp16 = y;
		bool tmp17 = shapeFlag;
		bool tmp18 = interactiveOnly;
		::openfl::display::DisplayObject tmp19 = hitObject;
		bool tmp20 = this->super::__hitTest(tmp15,tmp16,tmp17,stack,tmp18,tmp19);
		if ((tmp20)){
			bool tmp21 = interactiveOnly;
			return tmp21;
		}
		else{
			bool tmp21 = interactiveOnly;
			bool tmp22 = tmp21;
			bool tmp23 = !(tmp22);
			bool tmp24 = !(tmp23);
			bool tmp25 = tmp24;
			bool tmp26;
			if ((tmp25)){
				tmp26 = this->mouseEnabled;
			}
			else{
				tmp26 = true;
			}
			bool tmp27 = tmp26;
			bool tmp28;
			if ((tmp27)){
				::openfl::display::Graphics tmp29 = this->__graphics;
				::openfl::display::Graphics tmp30 = tmp29;
				::openfl::display::Graphics tmp31 = tmp30;
				tmp28 = (tmp31 != null());
			}
			else{
				tmp28 = false;
			}
			bool tmp29;
			if ((tmp28)){
				::openfl::display::Graphics tmp30 = this->__graphics;
				::openfl::display::Graphics tmp31 = tmp30;
				Float tmp32 = x;
				Float tmp33 = y;
				bool tmp34 = shapeFlag;
				::openfl::geom::Matrix tmp35 = this->__getRenderTransform();
				::openfl::geom::Matrix tmp36 = tmp35;
				Float tmp37 = tmp32;
				Float tmp38 = tmp33;
				bool tmp39 = tmp34;
				::openfl::geom::Matrix tmp40 = tmp36;
				tmp29 = tmp31->__hitTest(tmp37,tmp38,tmp39,tmp40);
			}
			else{
				tmp29 = false;
			}
			if ((tmp29)){
				bool tmp30 = (stack != null());
				if ((tmp30)){
					::openfl::display::DisplayObject tmp31 = hitObject;
					stack->push(tmp31);
				}
				return true;
			}
		}
	}
	return false;
}


bool Sprite_obj::__hitTestMask( Float x,Float y){
	Float tmp = x;
	Float tmp1 = y;
	bool tmp2 = this->super::__hitTestMask(tmp,tmp1);
	if ((tmp2)){
		return true;
	}
	else{
		::openfl::display::Graphics tmp3 = this->__graphics;
		bool tmp4 = (tmp3 != null());
		bool tmp5;
		if ((tmp4)){
			::openfl::display::Graphics tmp6 = this->__graphics;
			::openfl::display::Graphics tmp7 = tmp6;
			Float tmp8 = x;
			Float tmp9 = y;
			::openfl::geom::Matrix tmp10 = this->__getRenderTransform();
			::openfl::geom::Matrix tmp11 = tmp10;
			Float tmp12 = tmp8;
			Float tmp13 = tmp9;
			::openfl::geom::Matrix tmp14 = tmp11;
			tmp5 = tmp7->__hitTest(tmp12,tmp13,true,tmp14);
		}
		else{
			tmp5 = false;
		}
		if ((tmp5)){
			return true;
		}
	}
	return false;
}


::openfl::display::Graphics Sprite_obj::get_graphics( ){
	::openfl::display::Graphics tmp = this->__graphics;
	bool tmp1 = (tmp == null());
	if ((tmp1)){
		::openfl::display::Graphics tmp2 = ::openfl::display::Graphics_obj::__new(hx::ObjectPtr<OBJ_>(this));
		this->__graphics = tmp2;
	}
	::openfl::display::Graphics tmp2 = this->__graphics;
	return tmp2;
}


HX_DEFINE_DYNAMIC_FUNC0(Sprite_obj,get_graphics,return )

bool Sprite_obj::get_tabEnabled( ){
	bool tmp = this->__tabEnabled;
	bool tmp1 = !(tmp);
	bool tmp2;
	if ((tmp1)){
		tmp2 = this->buttonMode;
	}
	else{
		tmp2 = true;
	}
	return tmp2;
}



Sprite_obj::Sprite_obj()
{
}

void Sprite_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(Sprite);
	HX_MARK_MEMBER_NAME(buttonMode,"buttonMode");
	HX_MARK_MEMBER_NAME(dropTarget,"dropTarget");
	HX_MARK_MEMBER_NAME(hitArea,"hitArea");
	HX_MARK_MEMBER_NAME(useHandCursor,"useHandCursor");
	::openfl::display::DisplayObjectContainer_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void Sprite_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(buttonMode,"buttonMode");
	HX_VISIT_MEMBER_NAME(dropTarget,"dropTarget");
	HX_VISIT_MEMBER_NAME(hitArea,"hitArea");
	HX_VISIT_MEMBER_NAME(useHandCursor,"useHandCursor");
	::openfl::display::DisplayObjectContainer_obj::__Visit(HX_VISIT_ARG);
}

Dynamic Sprite_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 7:
		if (HX_FIELD_EQ(inName,"hitArea") ) { return hitArea; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"graphics") ) { if (inCallProp == hx::paccAlways) return get_graphics(); }
		if (HX_FIELD_EQ(inName,"stopDrag") ) { return stopDrag_dyn(); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"startDrag") ) { return startDrag_dyn(); }
		if (HX_FIELD_EQ(inName,"__hitTest") ) { return __hitTest_dyn(); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"buttonMode") ) { return buttonMode; }
		if (HX_FIELD_EQ(inName,"dropTarget") ) { return dropTarget; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"__getCursor") ) { return __getCursor_dyn(); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"get_graphics") ) { return get_graphics_dyn(); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"useHandCursor") ) { return useHandCursor; }
		if (HX_FIELD_EQ(inName,"__hitTestMask") ) { return __hitTestMask_dyn(); }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"get_tabEnabled") ) { return get_tabEnabled_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic Sprite_obj::__SetField(const ::String &inName,const Dynamic &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 7:
		if (HX_FIELD_EQ(inName,"hitArea") ) { hitArea=inValue.Cast< ::openfl::display::Sprite >(); return inValue; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"buttonMode") ) { buttonMode=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"dropTarget") ) { dropTarget=inValue.Cast< ::openfl::display::DisplayObject >(); return inValue; }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"useHandCursor") ) { useHandCursor=inValue.Cast< bool >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void Sprite_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("buttonMode","\x75","\x42","\x57","\xb2"));
	outFields->push(HX_HCSTRING("dropTarget","\xe0","\x6c","\x5c","\xc6"));
	outFields->push(HX_HCSTRING("graphics","\xcb","\xf8","\x67","\x12"));
	outFields->push(HX_HCSTRING("hitArea","\x80","\x23","\xfa","\xd5"));
	outFields->push(HX_HCSTRING("useHandCursor","\xcc","\xda","\xae","\x89"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsBool,(int)offsetof(Sprite_obj,buttonMode),HX_HCSTRING("buttonMode","\x75","\x42","\x57","\xb2")},
	{hx::fsObject /*::openfl::display::DisplayObject*/ ,(int)offsetof(Sprite_obj,dropTarget),HX_HCSTRING("dropTarget","\xe0","\x6c","\x5c","\xc6")},
	{hx::fsObject /*::openfl::display::Sprite*/ ,(int)offsetof(Sprite_obj,hitArea),HX_HCSTRING("hitArea","\x80","\x23","\xfa","\xd5")},
	{hx::fsBool,(int)offsetof(Sprite_obj,useHandCursor),HX_HCSTRING("useHandCursor","\xcc","\xda","\xae","\x89")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo *sStaticStorageInfo = 0;
#endif

static ::String sMemberFields[] = {
	HX_HCSTRING("buttonMode","\x75","\x42","\x57","\xb2"),
	HX_HCSTRING("dropTarget","\xe0","\x6c","\x5c","\xc6"),
	HX_HCSTRING("hitArea","\x80","\x23","\xfa","\xd5"),
	HX_HCSTRING("useHandCursor","\xcc","\xda","\xae","\x89"),
	HX_HCSTRING("startDrag","\x76","\xa5","\x63","\xfb"),
	HX_HCSTRING("stopDrag","\x16","\x71","\x2a","\x95"),
	HX_HCSTRING("__getCursor","\xec","\x60","\x6b","\xe9"),
	HX_HCSTRING("__hitTest","\x25","\xb1","\xcd","\x63"),
	HX_HCSTRING("__hitTestMask","\xb1","\x14","\xfd","\x3b"),
	HX_HCSTRING("get_graphics","\xd4","\xac","\x81","\xc7"),
	HX_HCSTRING("get_tabEnabled","\xf5","\x7e","\xfe","\xb5"),
	::String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(Sprite_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(Sprite_obj::__mClass,"__mClass");
};

#endif

hx::Class Sprite_obj::__mClass;

void Sprite_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("openfl.display.Sprite","\xef","\xfb","\xd6","\x4d");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = hx::Class_obj::dupFunctions(sMemberFields);
	__mClass->mCanCast = hx::TCanCast< Sprite_obj >;
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
} // end namespace display
