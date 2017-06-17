#include <hxcpp.h>

#ifndef INCLUDED_haxe_IMap
#include <haxe/IMap.h>
#endif
#ifndef INCLUDED_haxe_ds_IntMap
#include <haxe/ds/IntMap.h>
#endif
#ifndef INCLUDED_openfl__internal_swf_SWFLite
#include <openfl/_internal/swf/SWFLite.h>
#endif
#ifndef INCLUDED_openfl__internal_swf_ShapeCommand
#include <openfl/_internal/swf/ShapeCommand.h>
#endif
#ifndef INCLUDED_openfl__internal_symbols_FontSymbol
#include <openfl/_internal/symbols/FontSymbol.h>
#endif
#ifndef INCLUDED_openfl__internal_symbols_SWFSymbol
#include <openfl/_internal/symbols/SWFSymbol.h>
#endif
#ifndef INCLUDED_openfl__internal_symbols_StaticTextRecord
#include <openfl/_internal/symbols/StaticTextRecord.h>
#endif
#ifndef INCLUDED_openfl__internal_symbols_StaticTextSymbol
#include <openfl/_internal/symbols/StaticTextSymbol.h>
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
#ifndef INCLUDED_openfl_events_EventDispatcher
#include <openfl/events/EventDispatcher.h>
#endif
#ifndef INCLUDED_openfl_events_IEventDispatcher
#include <openfl/events/IEventDispatcher.h>
#endif
#ifndef INCLUDED_openfl_geom_Matrix
#include <openfl/geom/Matrix.h>
#endif
#ifndef INCLUDED_openfl_text_StaticText
#include <openfl/text/StaticText.h>
#endif
namespace openfl{
namespace _internal{
namespace symbols{

Void StaticTextSymbol_obj::__construct()
{
{
	super::__construct();
}
;
	return null();
}

//StaticTextSymbol_obj::~StaticTextSymbol_obj() { }

Dynamic StaticTextSymbol_obj::__CreateEmpty() { return  new StaticTextSymbol_obj; }
hx::ObjectPtr< StaticTextSymbol_obj > StaticTextSymbol_obj::__new()
{  hx::ObjectPtr< StaticTextSymbol_obj > _result_ = new StaticTextSymbol_obj();
	_result_->__construct();
	return _result_;}

Dynamic StaticTextSymbol_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< StaticTextSymbol_obj > _result_ = new StaticTextSymbol_obj();
	_result_->__construct();
	return _result_;}

::openfl::display::DisplayObject StaticTextSymbol_obj::__createObject( ::openfl::_internal::swf::SWFLite swf){
	::openfl::text::StaticText tmp = ::openfl::text::StaticText_obj::__new();
	::openfl::text::StaticText staticText = tmp;
	::openfl::display::Graphics graphics = staticText->__graphics;
	::openfl::text::StaticText tmp1 = this->rendered;
	bool tmp2 = (tmp1 != null());
	if ((tmp2)){
		::openfl::text::StaticText tmp3 = this->rendered;
		staticText->text = tmp3->text;
		::openfl::text::StaticText tmp4 = this->rendered;
		::openfl::display::Graphics tmp5 = tmp4->__graphics;
		graphics->copyFrom(tmp5);
		::openfl::text::StaticText tmp6 = staticText;
		return tmp6;
	}
	::String text = HX_HCSTRING("","\x00","\x00","\x00","\x00");
	bool tmp3 = (this->records != null());
	if ((tmp3)){
		::openfl::_internal::symbols::FontSymbol font = null();
		int color = (int)16777215;
		::openfl::geom::Matrix tmp4 = this->matrix;
		Float offsetX = tmp4->tx;
		::openfl::geom::Matrix tmp5 = this->matrix;
		Float offsetY = tmp5->ty;
		Float scale;
		int index;
		Dynamic code;
		{
			int _g = (int)0;
			Array< ::Dynamic > _g1 = this->records;
			while((true)){
				bool tmp6 = (_g < _g1->length);
				bool tmp7 = !(tmp6);
				if ((tmp7)){
					break;
				}
				::openfl::_internal::symbols::StaticTextRecord tmp8 = _g1->__get(_g).StaticCast< ::openfl::_internal::symbols::StaticTextRecord >();
				::openfl::_internal::symbols::StaticTextRecord record = tmp8;
				++(_g);
				bool tmp9 = (record->fontID != null());
				if ((tmp9)){
					Dynamic tmp10 = record->fontID;
					::openfl::_internal::symbols::SWFSymbol tmp11 = swf->symbols->get(tmp10);
					font = ((::openfl::_internal::symbols::FontSymbol)(tmp11));
				}
				bool tmp10 = (record->offsetX != null());
				if ((tmp10)){
					::openfl::geom::Matrix tmp11 = this->matrix;
					Float tmp12 = tmp11->tx;
					Float tmp13 = (record->offsetX * ((Float)0.05));
					Float tmp14 = (tmp12 + tmp13);
					offsetX = tmp14;
				}
				bool tmp11 = (record->offsetY != null());
				if ((tmp11)){
					::openfl::geom::Matrix tmp12 = this->matrix;
					Float tmp13 = tmp12->ty;
					Float tmp14 = (record->offsetY * ((Float)0.05));
					Float tmp15 = (tmp13 + tmp14);
					offsetY = tmp15;
				}
				bool tmp12 = (record->color != null());
				if ((tmp12)){
					color = record->color;
				}
				bool tmp13 = (font != null());
				if ((tmp13)){
					Float tmp14 = (Float(record->fontHeight) / Float((int)1024));
					Float tmp15 = (tmp14 * ((Float)0.05));
					scale = tmp15;
					{
						int _g3 = (int)0;
						int tmp16 = record->glyphs->length;
						int _g2 = tmp16;
						while((true)){
							bool tmp17 = (_g3 < _g2);
							bool tmp18 = !(tmp17);
							if ((tmp18)){
								break;
							}
							int tmp19 = (_g3)++;
							int i = tmp19;
							int tmp20 = record->glyphs->__get(i);
							index = tmp20;
							int tmp21 = font->codes->__get(index);
							::String tmp22 = ::String::fromCharCode(tmp21);
							hx::AddEq(text,tmp22);
							{
								int _g4 = (int)0;
								Array< ::Dynamic > _g5 = font->glyphs->__get(index).StaticCast< Array< ::Dynamic > >();
								while((true)){
									bool tmp23 = (_g4 < _g5->length);
									bool tmp24 = !(tmp23);
									if ((tmp24)){
										break;
									}
									::openfl::_internal::swf::ShapeCommand tmp25 = _g5->__get(_g4).StaticCast< ::openfl::_internal::swf::ShapeCommand >();
									::openfl::_internal::swf::ShapeCommand command = tmp25;
									++(_g4);
									switch( (int)(command->__Index())){
										case (int)1: {
											Float tmp26 = (::openfl::_internal::swf::ShapeCommand(command))->__Param(1);
											Float alpha = tmp26;
											{
												int tmp27 = (int(color) & int((int)16777215));
												int tmp28 = (int(color) >> int((int)24));
												int tmp29 = (int(tmp28) & int((int)255));
												Float tmp30 = (Float(tmp29) / Float((int)255));
												graphics->beginFill(tmp27,tmp30);
											}
										}
										;break;
										case (int)3: {
											Float tmp26 = (::openfl::_internal::swf::ShapeCommand(command))->__Param(3);
											Float anchorY = tmp26;
											Float tmp27 = (::openfl::_internal::swf::ShapeCommand(command))->__Param(2);
											Float anchorX = tmp27;
											Float tmp28 = (::openfl::_internal::swf::ShapeCommand(command))->__Param(1);
											Float controlY = tmp28;
											Float tmp29 = (::openfl::_internal::swf::ShapeCommand(command))->__Param(0);
											Float controlX = tmp29;
											{
												Float tmp30 = (controlX * scale);
												Float tmp31 = offsetX;
												Float tmp32 = (tmp30 + tmp31);
												Float tmp33 = (controlY * scale);
												Float tmp34 = offsetY;
												Float tmp35 = (tmp33 + tmp34);
												Float tmp36 = (anchorX * scale);
												Float tmp37 = offsetX;
												Float tmp38 = (tmp36 + tmp37);
												Float tmp39 = (anchorY * scale);
												Float tmp40 = offsetY;
												Float tmp41 = (tmp39 + tmp40);
												graphics->curveTo(tmp32,tmp35,tmp38,tmp41);
											}
										}
										;break;
										case (int)4: {
											graphics->endFill();
										}
										;break;
										case (int)5: {
											Dynamic tmp26 = (::openfl::_internal::swf::ShapeCommand(command))->__Param(7);
											Dynamic miterLimit = tmp26;
											Dynamic tmp27 = (::openfl::_internal::swf::ShapeCommand(command))->__Param(6);
											Dynamic joints = tmp27;
											Dynamic tmp28 = (::openfl::_internal::swf::ShapeCommand(command))->__Param(5);
											Dynamic caps = tmp28;
											Dynamic tmp29 = (::openfl::_internal::swf::ShapeCommand(command))->__Param(4);
											Dynamic scaleMode = tmp29;
											Dynamic tmp30 = (::openfl::_internal::swf::ShapeCommand(command))->__Param(3);
											Dynamic pixelHinting = tmp30;
											Dynamic tmp31 = (::openfl::_internal::swf::ShapeCommand(command))->__Param(2);
											Dynamic alpha = tmp31;
											Dynamic tmp32 = (::openfl::_internal::swf::ShapeCommand(command))->__Param(1);
											Dynamic color1 = tmp32;
											Dynamic tmp33 = (::openfl::_internal::swf::ShapeCommand(command))->__Param(0);
											Dynamic thickness = tmp33;
											{
												bool tmp34 = (thickness != null());
												if ((tmp34)){
													Dynamic tmp35 = thickness;
													Dynamic tmp36 = color1;
													Dynamic tmp37 = alpha;
													Dynamic tmp38 = pixelHinting;
													Dynamic tmp39 = scaleMode;
													Dynamic tmp40 = caps;
													Dynamic tmp41 = joints;
													Dynamic tmp42 = miterLimit;
													graphics->lineStyle(tmp35,tmp36,tmp37,tmp38,tmp39,tmp40,tmp41,tmp42);
												}
												else{
													graphics->lineStyle(null(),null(),null(),null(),null(),null(),null(),null());
												}
											}
										}
										;break;
										case (int)6: {
											Float tmp26 = (::openfl::_internal::swf::ShapeCommand(command))->__Param(1);
											Float y = tmp26;
											Float tmp27 = (::openfl::_internal::swf::ShapeCommand(command))->__Param(0);
											Float x = tmp27;
											{
												Float tmp28 = (x * scale);
												Float tmp29 = offsetX;
												Float tmp30 = (tmp28 + tmp29);
												Float tmp31 = (y * scale);
												Float tmp32 = offsetY;
												Float tmp33 = (tmp31 + tmp32);
												graphics->lineTo(tmp30,tmp33);
											}
										}
										;break;
										case (int)7: {
											Float tmp26 = (::openfl::_internal::swf::ShapeCommand(command))->__Param(1);
											Float y = tmp26;
											Float tmp27 = (::openfl::_internal::swf::ShapeCommand(command))->__Param(0);
											Float x = tmp27;
											{
												Float tmp28 = (x * scale);
												Float tmp29 = offsetX;
												Float tmp30 = (tmp28 + tmp29);
												Float tmp31 = (y * scale);
												Float tmp32 = offsetY;
												Float tmp33 = (tmp31 + tmp32);
												graphics->moveTo(tmp30,tmp33);
											}
										}
										;break;
										default: {
										}
									}
								}
							}
							int tmp23 = record->advances->__get(i);
							Float tmp24 = (tmp23 * ((Float)0.05));
							hx::AddEq(offsetX,tmp24);
						}
					}
				}
			}
		}
	}
	staticText->text = text;
	this->records = null();
	::openfl::text::StaticText tmp4 = ::openfl::text::StaticText_obj::__new();
	this->rendered = tmp4;
	::openfl::text::StaticText tmp5 = this->rendered;
	tmp5->text = text;
	::openfl::text::StaticText tmp6 = this->rendered;
	::openfl::display::Graphics tmp7 = staticText->__graphics;
	tmp6->__graphics->copyFrom(tmp7);
	::openfl::text::StaticText tmp8 = staticText;
	return tmp8;
}



StaticTextSymbol_obj::StaticTextSymbol_obj()
{
}

void StaticTextSymbol_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(StaticTextSymbol);
	HX_MARK_MEMBER_NAME(matrix,"matrix");
	HX_MARK_MEMBER_NAME(records,"records");
	HX_MARK_MEMBER_NAME(rendered,"rendered");
	::openfl::_internal::symbols::SWFSymbol_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void StaticTextSymbol_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(matrix,"matrix");
	HX_VISIT_MEMBER_NAME(records,"records");
	HX_VISIT_MEMBER_NAME(rendered,"rendered");
	::openfl::_internal::symbols::SWFSymbol_obj::__Visit(HX_VISIT_ARG);
}

Dynamic StaticTextSymbol_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 6:
		if (HX_FIELD_EQ(inName,"matrix") ) { return matrix; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"records") ) { return records; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"rendered") ) { return rendered; }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"__createObject") ) { return __createObject_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic StaticTextSymbol_obj::__SetField(const ::String &inName,const Dynamic &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 6:
		if (HX_FIELD_EQ(inName,"matrix") ) { matrix=inValue.Cast< ::openfl::geom::Matrix >(); return inValue; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"records") ) { records=inValue.Cast< Array< ::Dynamic > >(); return inValue; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"rendered") ) { rendered=inValue.Cast< ::openfl::text::StaticText >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void StaticTextSymbol_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("matrix","\x41","\x36","\xc8","\xbb"));
	outFields->push(HX_HCSTRING("records","\xc2","\x48","\xfb","\x30"));
	outFields->push(HX_HCSTRING("rendered","\x35","\xc5","\xdb","\xb2"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsObject /*::openfl::geom::Matrix*/ ,(int)offsetof(StaticTextSymbol_obj,matrix),HX_HCSTRING("matrix","\x41","\x36","\xc8","\xbb")},
	{hx::fsObject /*Array< ::Dynamic >*/ ,(int)offsetof(StaticTextSymbol_obj,records),HX_HCSTRING("records","\xc2","\x48","\xfb","\x30")},
	{hx::fsObject /*::openfl::text::StaticText*/ ,(int)offsetof(StaticTextSymbol_obj,rendered),HX_HCSTRING("rendered","\x35","\xc5","\xdb","\xb2")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo *sStaticStorageInfo = 0;
#endif

static ::String sMemberFields[] = {
	HX_HCSTRING("matrix","\x41","\x36","\xc8","\xbb"),
	HX_HCSTRING("records","\xc2","\x48","\xfb","\x30"),
	HX_HCSTRING("rendered","\x35","\xc5","\xdb","\xb2"),
	HX_HCSTRING("__createObject","\xfb","\x41","\x55","\x58"),
	::String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(StaticTextSymbol_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(StaticTextSymbol_obj::__mClass,"__mClass");
};

#endif

hx::Class StaticTextSymbol_obj::__mClass;

void StaticTextSymbol_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("openfl._internal.symbols.StaticTextSymbol","\x36","\x28","\x1f","\x3c");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = hx::Class_obj::dupFunctions(sMemberFields);
	__mClass->mCanCast = hx::TCanCast< StaticTextSymbol_obj >;
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
