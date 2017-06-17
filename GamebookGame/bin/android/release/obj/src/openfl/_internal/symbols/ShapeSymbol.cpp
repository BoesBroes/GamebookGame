#include <hxcpp.h>

#ifndef INCLUDED_haxe_IMap
#include <haxe/IMap.h>
#endif
#ifndef INCLUDED_haxe_ds_IntMap
#include <haxe/ds/IntMap.h>
#endif
#ifndef INCLUDED_lime_graphics_Image
#include <lime/graphics/Image.h>
#endif
#ifndef INCLUDED_lime_utils_AssetLibrary
#include <lime/utils/AssetLibrary.h>
#endif
#ifndef INCLUDED_openfl__internal_swf_SWFLite
#include <openfl/_internal/swf/SWFLite.h>
#endif
#ifndef INCLUDED_openfl__internal_swf_SWFLiteLibrary
#include <openfl/_internal/swf/SWFLiteLibrary.h>
#endif
#ifndef INCLUDED_openfl__internal_swf_ShapeCommand
#include <openfl/_internal/swf/ShapeCommand.h>
#endif
#ifndef INCLUDED_openfl__internal_symbols_BitmapSymbol
#include <openfl/_internal/symbols/BitmapSymbol.h>
#endif
#ifndef INCLUDED_openfl__internal_symbols_SWFSymbol
#include <openfl/_internal/symbols/SWFSymbol.h>
#endif
#ifndef INCLUDED_openfl__internal_symbols_ShapeSymbol
#include <openfl/_internal/symbols/ShapeSymbol.h>
#endif
#ifndef INCLUDED_openfl_display_BitmapData
#include <openfl/display/BitmapData.h>
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
#ifndef INCLUDED_openfl_display_Shape
#include <openfl/display/Shape.h>
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
#ifndef INCLUDED_openfl_utils_AssetLibrary
#include <openfl/utils/AssetLibrary.h>
#endif
namespace openfl{
namespace _internal{
namespace symbols{

Void ShapeSymbol_obj::__construct()
{
{
	super::__construct();
}
;
	return null();
}

//ShapeSymbol_obj::~ShapeSymbol_obj() { }

Dynamic ShapeSymbol_obj::__CreateEmpty() { return  new ShapeSymbol_obj; }
hx::ObjectPtr< ShapeSymbol_obj > ShapeSymbol_obj::__new()
{  hx::ObjectPtr< ShapeSymbol_obj > _result_ = new ShapeSymbol_obj();
	_result_->__construct();
	return _result_;}

Dynamic ShapeSymbol_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< ShapeSymbol_obj > _result_ = new ShapeSymbol_obj();
	_result_->__construct();
	return _result_;}

::openfl::display::DisplayObject ShapeSymbol_obj::__createObject( ::openfl::_internal::swf::SWFLite swf){
	::openfl::display::Shape tmp = ::openfl::display::Shape_obj::__new();
	::openfl::display::Shape shape = tmp;
	::openfl::display::Graphics tmp1 = shape->get_graphics();
	::openfl::display::Graphics graphics = tmp1;
	::openfl::display::Shape tmp2 = this->rendered;
	bool tmp3 = (tmp2 != null());
	if ((tmp3)){
		::openfl::display::Shape tmp4 = this->rendered;
		::openfl::display::Graphics tmp5 = tmp4->get_graphics();
		graphics->copyFrom(tmp5);
		::openfl::display::Shape tmp6 = shape;
		return tmp6;
	}
	{
		int _g = (int)0;
		Array< ::Dynamic > _g1 = this->commands;
		while((true)){
			bool tmp4 = (_g < _g1->length);
			bool tmp5 = !(tmp4);
			if ((tmp5)){
				break;
			}
			::openfl::_internal::swf::ShapeCommand tmp6 = _g1->__get(_g).StaticCast< ::openfl::_internal::swf::ShapeCommand >();
			::openfl::_internal::swf::ShapeCommand command = tmp6;
			++(_g);
			switch( (int)(command->__Index())){
				case (int)1: {
					Float tmp7 = (::openfl::_internal::swf::ShapeCommand(command))->__Param(1);
					Float alpha = tmp7;
					int tmp8 = (::openfl::_internal::swf::ShapeCommand(command))->__Param(0);
					int color = tmp8;
					{
						int tmp9 = color;
						Float tmp10 = alpha;
						graphics->beginFill(tmp9,tmp10);
					}
				}
				;break;
				case (int)0: {
					bool tmp7 = (::openfl::_internal::swf::ShapeCommand(command))->__Param(3);
					bool smooth = tmp7;
					bool tmp8 = (::openfl::_internal::swf::ShapeCommand(command))->__Param(2);
					bool repeat = tmp8;
					::openfl::geom::Matrix tmp9 = (::openfl::_internal::swf::ShapeCommand(command))->__Param(1);
					::openfl::geom::Matrix matrix = tmp9;
					int tmp10 = (::openfl::_internal::swf::ShapeCommand(command))->__Param(0);
					int bitmapID = tmp10;
					{
						int tmp11 = bitmapID;
						::openfl::_internal::symbols::SWFSymbol tmp12 = swf->symbols->get(tmp11);
						::openfl::_internal::symbols::BitmapSymbol bitmapSymbol = ((::openfl::_internal::symbols::BitmapSymbol)(tmp12));
						::String tmp13 = bitmapSymbol->path;
						::lime::graphics::Image tmp14 = swf->library->getImage(tmp13);
						::lime::graphics::Image bitmap = tmp14;
						bool tmp15 = (bitmap != null());
						if ((tmp15)){
							::lime::graphics::Image tmp16 = bitmap;
							::openfl::display::BitmapData tmp17 = ::openfl::display::BitmapData_obj::fromImage(tmp16,null());
							::openfl::geom::Matrix tmp18 = matrix;
							bool tmp19 = repeat;
							bool tmp20 = smooth;
							graphics->beginBitmapFill(tmp17,tmp18,tmp19,tmp20);
						}
					}
				}
				;break;
				case (int)2: {
					Float tmp7 = (::openfl::_internal::swf::ShapeCommand(command))->__Param(7);
					Float focalPointRatio = tmp7;
					Dynamic tmp8 = (::openfl::_internal::swf::ShapeCommand(command))->__Param(6);
					Dynamic interpolationMethod = tmp8;
					Dynamic tmp9 = (::openfl::_internal::swf::ShapeCommand(command))->__Param(5);
					Dynamic spreadMethod = tmp9;
					::openfl::geom::Matrix tmp10 = (::openfl::_internal::swf::ShapeCommand(command))->__Param(4);
					::openfl::geom::Matrix matrix = tmp10;
					Array< int > ratios = (::openfl::_internal::swf::ShapeCommand(command))->__Param(3);
					Array< Float > alphas = (::openfl::_internal::swf::ShapeCommand(command))->__Param(2);
					Array< int > colors = (::openfl::_internal::swf::ShapeCommand(command))->__Param(1);
					Dynamic tmp11 = (::openfl::_internal::swf::ShapeCommand(command))->__Param(0);
					Dynamic fillType = tmp11;
					{
						Dynamic tmp12 = fillType;
						::openfl::geom::Matrix tmp13 = matrix;
						Dynamic tmp14 = spreadMethod;
						Dynamic tmp15 = interpolationMethod;
						Float tmp16 = focalPointRatio;
						graphics->beginGradientFill(tmp12,colors,alphas,ratios,tmp13,tmp14,tmp15,tmp16);
					}
				}
				;break;
				case (int)3: {
					Float tmp7 = (::openfl::_internal::swf::ShapeCommand(command))->__Param(3);
					Float anchorY = tmp7;
					Float tmp8 = (::openfl::_internal::swf::ShapeCommand(command))->__Param(2);
					Float anchorX = tmp8;
					Float tmp9 = (::openfl::_internal::swf::ShapeCommand(command))->__Param(1);
					Float controlY = tmp9;
					Float tmp10 = (::openfl::_internal::swf::ShapeCommand(command))->__Param(0);
					Float controlX = tmp10;
					{
						Float tmp11 = controlX;
						Float tmp12 = controlY;
						Float tmp13 = anchorX;
						Float tmp14 = anchorY;
						graphics->curveTo(tmp11,tmp12,tmp13,tmp14);
					}
				}
				;break;
				case (int)4: {
					graphics->endFill();
				}
				;break;
				case (int)5: {
					Dynamic tmp7 = (::openfl::_internal::swf::ShapeCommand(command))->__Param(7);
					Dynamic miterLimit = tmp7;
					Dynamic tmp8 = (::openfl::_internal::swf::ShapeCommand(command))->__Param(6);
					Dynamic joints = tmp8;
					Dynamic tmp9 = (::openfl::_internal::swf::ShapeCommand(command))->__Param(5);
					Dynamic caps = tmp9;
					Dynamic tmp10 = (::openfl::_internal::swf::ShapeCommand(command))->__Param(4);
					Dynamic scaleMode = tmp10;
					Dynamic tmp11 = (::openfl::_internal::swf::ShapeCommand(command))->__Param(3);
					Dynamic pixelHinting = tmp11;
					Dynamic tmp12 = (::openfl::_internal::swf::ShapeCommand(command))->__Param(2);
					Dynamic alpha = tmp12;
					Dynamic tmp13 = (::openfl::_internal::swf::ShapeCommand(command))->__Param(1);
					Dynamic color = tmp13;
					Dynamic tmp14 = (::openfl::_internal::swf::ShapeCommand(command))->__Param(0);
					Dynamic thickness = tmp14;
					{
						bool tmp15 = (thickness != null());
						if ((tmp15)){
							Dynamic tmp16 = thickness;
							Dynamic tmp17 = color;
							Dynamic tmp18 = alpha;
							Dynamic tmp19 = pixelHinting;
							Dynamic tmp20 = scaleMode;
							Dynamic tmp21 = caps;
							Dynamic tmp22 = joints;
							Dynamic tmp23 = miterLimit;
							graphics->lineStyle(tmp16,tmp17,tmp18,tmp19,tmp20,tmp21,tmp22,tmp23);
						}
						else{
							graphics->lineStyle(null(),null(),null(),null(),null(),null(),null(),null());
						}
					}
				}
				;break;
				case (int)6: {
					Float tmp7 = (::openfl::_internal::swf::ShapeCommand(command))->__Param(1);
					Float y = tmp7;
					Float tmp8 = (::openfl::_internal::swf::ShapeCommand(command))->__Param(0);
					Float x = tmp8;
					{
						Float tmp9 = x;
						Float tmp10 = y;
						graphics->lineTo(tmp9,tmp10);
					}
				}
				;break;
				case (int)7: {
					Float tmp7 = (::openfl::_internal::swf::ShapeCommand(command))->__Param(1);
					Float y = tmp7;
					Float tmp8 = (::openfl::_internal::swf::ShapeCommand(command))->__Param(0);
					Float x = tmp8;
					{
						Float tmp9 = x;
						Float tmp10 = y;
						graphics->moveTo(tmp9,tmp10);
					}
				}
				;break;
			}
		}
	}
	this->commands = null();
	::openfl::display::Shape tmp4 = ::openfl::display::Shape_obj::__new();
	this->rendered = tmp4;
	::openfl::display::Shape tmp5 = this->rendered;
	::openfl::display::Graphics tmp6 = tmp5->get_graphics();
	::openfl::display::Graphics tmp7 = shape->get_graphics();
	tmp6->copyFrom(tmp7);
	::openfl::display::Shape tmp8 = shape;
	return tmp8;
}



ShapeSymbol_obj::ShapeSymbol_obj()
{
}

void ShapeSymbol_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(ShapeSymbol);
	HX_MARK_MEMBER_NAME(commands,"commands");
	HX_MARK_MEMBER_NAME(rendered,"rendered");
	::openfl::_internal::symbols::SWFSymbol_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void ShapeSymbol_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(commands,"commands");
	HX_VISIT_MEMBER_NAME(rendered,"rendered");
	::openfl::_internal::symbols::SWFSymbol_obj::__Visit(HX_VISIT_ARG);
}

Dynamic ShapeSymbol_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 8:
		if (HX_FIELD_EQ(inName,"commands") ) { return commands; }
		if (HX_FIELD_EQ(inName,"rendered") ) { return rendered; }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"__createObject") ) { return __createObject_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic ShapeSymbol_obj::__SetField(const ::String &inName,const Dynamic &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 8:
		if (HX_FIELD_EQ(inName,"commands") ) { commands=inValue.Cast< Array< ::Dynamic > >(); return inValue; }
		if (HX_FIELD_EQ(inName,"rendered") ) { rendered=inValue.Cast< ::openfl::display::Shape >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void ShapeSymbol_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("commands","\xc8","\xb0","\x55","\xbe"));
	outFields->push(HX_HCSTRING("rendered","\x35","\xc5","\xdb","\xb2"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsObject /*Array< ::Dynamic >*/ ,(int)offsetof(ShapeSymbol_obj,commands),HX_HCSTRING("commands","\xc8","\xb0","\x55","\xbe")},
	{hx::fsObject /*::openfl::display::Shape*/ ,(int)offsetof(ShapeSymbol_obj,rendered),HX_HCSTRING("rendered","\x35","\xc5","\xdb","\xb2")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo *sStaticStorageInfo = 0;
#endif

static ::String sMemberFields[] = {
	HX_HCSTRING("commands","\xc8","\xb0","\x55","\xbe"),
	HX_HCSTRING("rendered","\x35","\xc5","\xdb","\xb2"),
	HX_HCSTRING("__createObject","\xfb","\x41","\x55","\x58"),
	::String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(ShapeSymbol_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(ShapeSymbol_obj::__mClass,"__mClass");
};

#endif

hx::Class ShapeSymbol_obj::__mClass;

void ShapeSymbol_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("openfl._internal.symbols.ShapeSymbol","\x36","\xa2","\x66","\xae");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = hx::Class_obj::dupFunctions(sMemberFields);
	__mClass->mCanCast = hx::TCanCast< ShapeSymbol_obj >;
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
} // end namespace symbols
