#include <hxcpp.h>

#ifndef INCLUDED_haxe_io_Bytes
#include <haxe/io/Bytes.h>
#endif
#ifndef INCLUDED_haxe_io_Error
#include <haxe/io/Error.h>
#endif
#ifndef INCLUDED_lime__backend_native_NativeCFFI
#include <lime/_backend/native/NativeCFFI.h>
#endif
#ifndef INCLUDED_lime_math_Vector2
#include <lime/math/Vector2.h>
#endif
#ifndef INCLUDED_lime_text_Font
#include <lime/text/Font.h>
#endif
#ifndef INCLUDED_lime_text_GlyphPosition
#include <lime/text/GlyphPosition.h>
#endif
#ifndef INCLUDED_lime_text_TextLayout
#include <lime/text/TextLayout.h>
#endif
namespace lime{
namespace text{

Void TextLayout_obj::__construct(::String __o_text,::lime::text::Font font,hx::Null< int >  __o_size,hx::Null< int >  __o_direction,::String __o_script,::String __o_language)
{
::String text = __o_text.Default(HX_HCSTRING("","\x00","\x00","\x00","\x00"));
int size = __o_size.Default(12);
int direction = __o_direction.Default(4);
::String script = __o_script.Default(HX_HCSTRING("Zyyy","\x7f","\x6e","\xd9","\x3b"));
::String language = __o_language.Default(HX_HCSTRING("en","\x69","\x58","\x00","\x00"));
{
	::String tmp = text;
	this->set_text(tmp);
	::lime::text::Font tmp1 = font;
	this->set_font(tmp1);
	int tmp2 = size;
	this->set_size(tmp2);
	this->__direction = direction;
	this->__script = script;
	this->__language = language;
	this->positions = Array_obj< ::Dynamic >::__new();
	this->__dirty = true;
	this->__handle = ((Dynamic)(::lime::_backend::native::NativeCFFI_obj::cffi_lime_text_layout_create.call(this->__direction,this->__script,this->__language)));
}
;
	return null();
}

//TextLayout_obj::~TextLayout_obj() { }

Dynamic TextLayout_obj::__CreateEmpty() { return  new TextLayout_obj; }
hx::ObjectPtr< TextLayout_obj > TextLayout_obj::__new(::String __o_text,::lime::text::Font font,hx::Null< int >  __o_size,hx::Null< int >  __o_direction,::String __o_script,::String __o_language)
{  hx::ObjectPtr< TextLayout_obj > _result_ = new TextLayout_obj();
	_result_->__construct(__o_text,font,__o_size,__o_direction,__o_script,__o_language);
	return _result_;}

Dynamic TextLayout_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< TextLayout_obj > _result_ = new TextLayout_obj();
	_result_->__construct(inArgs[0],inArgs[1],inArgs[2],inArgs[3],inArgs[4],inArgs[5]);
	return _result_;}

Void TextLayout_obj::__position( ){
{
		this->positions = Array_obj< ::Dynamic >::__new();
		Dynamic tmp = this->__handle;
		bool tmp1 = (tmp != null());
		bool tmp2 = tmp1;
		bool tmp3;
		if ((tmp2)){
			::String tmp4 = this->text;
			::String tmp5 = tmp4;
			::String tmp6 = tmp5;
			tmp3 = (tmp6 != null());
		}
		else{
			tmp3 = false;
		}
		bool tmp4 = tmp3;
		bool tmp5;
		if ((tmp4)){
			::String tmp6 = this->text;
			::String tmp7 = tmp6;
			::String tmp8 = tmp7;
			tmp5 = (tmp8 != HX_HCSTRING("","\x00","\x00","\x00","\x00"));
		}
		else{
			tmp5 = false;
		}
		bool tmp6 = tmp5;
		bool tmp7;
		if ((tmp6)){
			::lime::text::Font tmp8 = this->font;
			::lime::text::Font tmp9 = tmp8;
			::lime::text::Font tmp10 = tmp9;
			tmp7 = (tmp10 != null());
		}
		else{
			tmp7 = false;
		}
		bool tmp8;
		if ((tmp7)){
			::lime::text::Font tmp9 = this->font;
			::lime::text::Font tmp10 = tmp9;
			Dynamic tmp11 = tmp10->src;
			tmp8 = (tmp11 != null());
		}
		else{
			tmp8 = false;
		}
		if ((tmp8)){
			::haxe::io::Bytes tmp9 = this->__buffer;
			bool tmp10 = (tmp9 == null());
			if ((tmp10)){
				::String tmp11 = this->text;
				int tmp12 = tmp11.length;
				::haxe::io::Bytes tmp13 = ::haxe::io::Bytes_obj::alloc(tmp12);
				this->__buffer = tmp13;
			}
			Dynamic data = ((Dynamic)(::lime::_backend::native::NativeCFFI_obj::cffi_lime_text_layout_position.call(hx::DynamicPtr(this->__handle),hx::DynamicPtr(this->font->src),this->size,this->text,hx::DynamicPtr(this->__buffer))));
			int position = (int)0;
			::haxe::io::Bytes tmp11 = this->__buffer;
			int tmp12 = tmp11->length;
			bool tmp13 = (tmp12 > (int)4);
			if ((tmp13)){
				int tmp14;
				{
					::haxe::io::Bytes tmp15 = this->__buffer;
					::haxe::io::Bytes _this = tmp15;
					int tmp16 = _this->b->__get(position);
					int tmp17 = (position + (int)1);
					int tmp18 = _this->b->__get(tmp17);
					int tmp19 = (int(tmp18) << int((int)8));
					int tmp20 = (int(tmp16) | int(tmp19));
					int tmp21 = (position + (int)2);
					int tmp22 = _this->b->__get(tmp21);
					int tmp23 = (int(tmp22) << int((int)16));
					int tmp24 = (int(tmp20) | int(tmp23));
					int tmp25 = (position + (int)3);
					int tmp26 = _this->b->__get(tmp25);
					int tmp27 = (int(tmp26) << int((int)24));
					tmp14 = (int(tmp24) | int(tmp27));
				}
				int count = tmp14;
				hx::AddEq(position,(int)4);
				int index;
				Float advanceX;
				Float advanceY;
				Float offsetX;
				Float offsetY;
				{
					int _g = (int)0;
					while((true)){
						bool tmp15 = (_g < count);
						bool tmp16 = !(tmp15);
						if ((tmp16)){
							break;
						}
						int tmp17 = (_g)++;
						int i = tmp17;
						int tmp18;
						{
							::haxe::io::Bytes tmp19 = this->__buffer;
							::haxe::io::Bytes _this = tmp19;
							int tmp20 = _this->b->__get(position);
							int tmp21 = (position + (int)1);
							int tmp22 = _this->b->__get(tmp21);
							int tmp23 = (int(tmp22) << int((int)8));
							int tmp24 = (int(tmp20) | int(tmp23));
							int tmp25 = (position + (int)2);
							int tmp26 = _this->b->__get(tmp25);
							int tmp27 = (int(tmp26) << int((int)16));
							int tmp28 = (int(tmp24) | int(tmp27));
							int tmp29 = (position + (int)3);
							int tmp30 = _this->b->__get(tmp29);
							int tmp31 = (int(tmp30) << int((int)24));
							tmp18 = (int(tmp28) | int(tmp31));
						}
						index = tmp18;
						hx::AddEq(position,(int)4);
						Float tmp19;
						{
							::haxe::io::Bytes tmp20 = this->__buffer;
							::haxe::io::Bytes _this = tmp20;
							bool tmp21 = (position < (int)0);
							bool tmp22 = !(tmp21);
							bool tmp23;
							if ((tmp22)){
								int tmp24 = (position + (int)4);
								int tmp25 = tmp24;
								int tmp26 = _this->length;
								tmp23 = (tmp25 > tmp26);
							}
							else{
								tmp23 = true;
							}
							if ((tmp23)){
								HX_STACK_DO_THROW(::haxe::io::Error_obj::OutsideBounds);
							}
							tmp19 = ::__hxcpp_memory_get_float(_this->b,position);
						}
						advanceX = tmp19;
						hx::AddEq(position,(int)4);
						Float tmp20;
						{
							::haxe::io::Bytes tmp21 = this->__buffer;
							::haxe::io::Bytes _this = tmp21;
							bool tmp22 = (position < (int)0);
							bool tmp23 = !(tmp22);
							bool tmp24;
							if ((tmp23)){
								int tmp25 = (position + (int)4);
								int tmp26 = tmp25;
								int tmp27 = _this->length;
								tmp24 = (tmp26 > tmp27);
							}
							else{
								tmp24 = true;
							}
							if ((tmp24)){
								HX_STACK_DO_THROW(::haxe::io::Error_obj::OutsideBounds);
							}
							tmp20 = ::__hxcpp_memory_get_float(_this->b,position);
						}
						advanceY = tmp20;
						hx::AddEq(position,(int)4);
						Float tmp21;
						{
							::haxe::io::Bytes tmp22 = this->__buffer;
							::haxe::io::Bytes _this = tmp22;
							bool tmp23 = (position < (int)0);
							bool tmp24 = !(tmp23);
							bool tmp25;
							if ((tmp24)){
								int tmp26 = (position + (int)4);
								int tmp27 = tmp26;
								int tmp28 = _this->length;
								tmp25 = (tmp27 > tmp28);
							}
							else{
								tmp25 = true;
							}
							if ((tmp25)){
								HX_STACK_DO_THROW(::haxe::io::Error_obj::OutsideBounds);
							}
							tmp21 = ::__hxcpp_memory_get_float(_this->b,position);
						}
						offsetX = tmp21;
						hx::AddEq(position,(int)4);
						Float tmp22;
						{
							::haxe::io::Bytes tmp23 = this->__buffer;
							::haxe::io::Bytes _this = tmp23;
							bool tmp24 = (position < (int)0);
							bool tmp25 = !(tmp24);
							bool tmp26;
							if ((tmp25)){
								int tmp27 = (position + (int)4);
								int tmp28 = tmp27;
								int tmp29 = _this->length;
								tmp26 = (tmp28 > tmp29);
							}
							else{
								tmp26 = true;
							}
							if ((tmp26)){
								HX_STACK_DO_THROW(::haxe::io::Error_obj::OutsideBounds);
							}
							tmp22 = ::__hxcpp_memory_get_float(_this->b,position);
						}
						offsetY = tmp22;
						hx::AddEq(position,(int)4);
						int tmp23 = index;
						::lime::math::Vector2 tmp24 = ::lime::math::Vector2_obj::__new(advanceX,advanceY);
						::lime::math::Vector2 tmp25 = ::lime::math::Vector2_obj::__new(offsetX,offsetY);
						::lime::text::GlyphPosition tmp26 = ::lime::text::GlyphPosition_obj::__new(tmp23,tmp24,tmp25);
						this->get_positions()->push(tmp26);
					}
				}
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(TextLayout_obj,__position,(void))

Array< ::Dynamic > TextLayout_obj::get_positions( ){
	bool tmp = this->__dirty;
	if ((tmp)){
		this->__dirty = false;
		this->__position();
	}
	return this->positions;
}


HX_DEFINE_DYNAMIC_FUNC0(TextLayout_obj,get_positions,return )

int TextLayout_obj::get_direction( ){
	int tmp = this->__direction;
	return tmp;
}


HX_DEFINE_DYNAMIC_FUNC0(TextLayout_obj,get_direction,return )

int TextLayout_obj::set_direction( int value){
	int tmp = value;
	int tmp1 = this->__direction;
	bool tmp2 = (tmp == tmp1);
	if ((tmp2)){
		int tmp3 = value;
		return tmp3;
	}
	this->__direction = value;
	::lime::_backend::native::NativeCFFI_obj::cffi_lime_text_layout_set_direction.call(hx::DynamicPtr(this->__handle),value);
	this->__dirty = true;
	int tmp3 = value;
	return tmp3;
}


HX_DEFINE_DYNAMIC_FUNC1(TextLayout_obj,set_direction,return )

::lime::text::Font TextLayout_obj::set_font( ::lime::text::Font value){
	::lime::text::Font tmp = value;
	::lime::text::Font tmp1 = this->font;
	bool tmp2 = (tmp == tmp1);
	if ((tmp2)){
		::lime::text::Font tmp3 = value;
		return tmp3;
	}
	this->font = value;
	this->__dirty = true;
	::lime::text::Font tmp3 = value;
	return tmp3;
}


HX_DEFINE_DYNAMIC_FUNC1(TextLayout_obj,set_font,return )

Array< int > TextLayout_obj::get_glyphs( ){
	Array< int > glyphs = Array_obj< int >::__new();
	{
		int _g = (int)0;
		Array< ::Dynamic > _g1 = this->get_positions();
		while((true)){
			bool tmp = (_g < _g1->length);
			bool tmp1 = !(tmp);
			if ((tmp1)){
				break;
			}
			::lime::text::GlyphPosition tmp2 = _g1->__get(_g).StaticCast< ::lime::text::GlyphPosition >();
			::lime::text::GlyphPosition position = tmp2;
			++(_g);
			int tmp3 = position->glyph;
			glyphs->push(tmp3);
		}
	}
	return glyphs;
}


HX_DEFINE_DYNAMIC_FUNC0(TextLayout_obj,get_glyphs,return )

::String TextLayout_obj::get_language( ){
	::String tmp = this->__language;
	return tmp;
}


HX_DEFINE_DYNAMIC_FUNC0(TextLayout_obj,get_language,return )

::String TextLayout_obj::set_language( ::String value){
	::String tmp = value;
	::String tmp1 = this->__language;
	bool tmp2 = (tmp == tmp1);
	if ((tmp2)){
		::String tmp3 = value;
		return tmp3;
	}
	this->__language = value;
	::lime::_backend::native::NativeCFFI_obj::cffi_lime_text_layout_set_language.call(hx::DynamicPtr(this->__handle),value);
	this->__dirty = true;
	::String tmp3 = value;
	return tmp3;
}


HX_DEFINE_DYNAMIC_FUNC1(TextLayout_obj,set_language,return )

::String TextLayout_obj::get_script( ){
	::String tmp = this->__script;
	return tmp;
}


HX_DEFINE_DYNAMIC_FUNC0(TextLayout_obj,get_script,return )

::String TextLayout_obj::set_script( ::String value){
	::String tmp = value;
	::String tmp1 = this->__script;
	bool tmp2 = (tmp == tmp1);
	if ((tmp2)){
		::String tmp3 = value;
		return tmp3;
	}
	this->__script = value;
	::lime::_backend::native::NativeCFFI_obj::cffi_lime_text_layout_set_script.call(hx::DynamicPtr(this->__handle),value);
	this->__dirty = true;
	::String tmp3 = value;
	return tmp3;
}


HX_DEFINE_DYNAMIC_FUNC1(TextLayout_obj,set_script,return )

int TextLayout_obj::set_size( int value){
	int tmp = value;
	int tmp1 = this->size;
	bool tmp2 = (tmp == tmp1);
	if ((tmp2)){
		int tmp3 = value;
		return tmp3;
	}
	this->size = value;
	this->__dirty = true;
	int tmp3 = value;
	return tmp3;
}


HX_DEFINE_DYNAMIC_FUNC1(TextLayout_obj,set_size,return )

::String TextLayout_obj::set_text( ::String value){
	::String tmp = value;
	::String tmp1 = this->text;
	bool tmp2 = (tmp == tmp1);
	if ((tmp2)){
		::String tmp3 = value;
		return tmp3;
	}
	this->text = value;
	this->__dirty = true;
	::String tmp3 = value;
	return tmp3;
}


HX_DEFINE_DYNAMIC_FUNC1(TextLayout_obj,set_text,return )


TextLayout_obj::TextLayout_obj()
{
}

void TextLayout_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(TextLayout);
	HX_MARK_MEMBER_NAME(font,"font");
	HX_MARK_MEMBER_NAME(glyphs,"glyphs");
	HX_MARK_MEMBER_NAME(positions,"positions");
	HX_MARK_MEMBER_NAME(size,"size");
	HX_MARK_MEMBER_NAME(text,"text");
	HX_MARK_MEMBER_NAME(__dirty,"__dirty");
	HX_MARK_MEMBER_NAME(__buffer,"__buffer");
	HX_MARK_MEMBER_NAME(__direction,"__direction");
	HX_MARK_MEMBER_NAME(__handle,"__handle");
	HX_MARK_MEMBER_NAME(__language,"__language");
	HX_MARK_MEMBER_NAME(__script,"__script");
	HX_MARK_END_CLASS();
}

void TextLayout_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(font,"font");
	HX_VISIT_MEMBER_NAME(glyphs,"glyphs");
	HX_VISIT_MEMBER_NAME(positions,"positions");
	HX_VISIT_MEMBER_NAME(size,"size");
	HX_VISIT_MEMBER_NAME(text,"text");
	HX_VISIT_MEMBER_NAME(__dirty,"__dirty");
	HX_VISIT_MEMBER_NAME(__buffer,"__buffer");
	HX_VISIT_MEMBER_NAME(__direction,"__direction");
	HX_VISIT_MEMBER_NAME(__handle,"__handle");
	HX_VISIT_MEMBER_NAME(__language,"__language");
	HX_VISIT_MEMBER_NAME(__script,"__script");
}

Dynamic TextLayout_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"font") ) { return font; }
		if (HX_FIELD_EQ(inName,"size") ) { return size; }
		if (HX_FIELD_EQ(inName,"text") ) { return text; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"glyphs") ) { return inCallProp == hx::paccAlways ? get_glyphs() : glyphs; }
		if (HX_FIELD_EQ(inName,"script") ) { if (inCallProp == hx::paccAlways) return get_script(); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"__dirty") ) { return __dirty; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"language") ) { if (inCallProp == hx::paccAlways) return get_language(); }
		if (HX_FIELD_EQ(inName,"__buffer") ) { return __buffer; }
		if (HX_FIELD_EQ(inName,"__handle") ) { return __handle; }
		if (HX_FIELD_EQ(inName,"__script") ) { return __script; }
		if (HX_FIELD_EQ(inName,"set_font") ) { return set_font_dyn(); }
		if (HX_FIELD_EQ(inName,"set_size") ) { return set_size_dyn(); }
		if (HX_FIELD_EQ(inName,"set_text") ) { return set_text_dyn(); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"direction") ) { if (inCallProp == hx::paccAlways) return get_direction(); }
		if (HX_FIELD_EQ(inName,"positions") ) { return inCallProp == hx::paccAlways ? get_positions() : positions; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"__language") ) { return __language; }
		if (HX_FIELD_EQ(inName,"__position") ) { return __position_dyn(); }
		if (HX_FIELD_EQ(inName,"get_glyphs") ) { return get_glyphs_dyn(); }
		if (HX_FIELD_EQ(inName,"get_script") ) { return get_script_dyn(); }
		if (HX_FIELD_EQ(inName,"set_script") ) { return set_script_dyn(); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"__direction") ) { return __direction; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"get_language") ) { return get_language_dyn(); }
		if (HX_FIELD_EQ(inName,"set_language") ) { return set_language_dyn(); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"get_positions") ) { return get_positions_dyn(); }
		if (HX_FIELD_EQ(inName,"get_direction") ) { return get_direction_dyn(); }
		if (HX_FIELD_EQ(inName,"set_direction") ) { return set_direction_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic TextLayout_obj::__SetField(const ::String &inName,const Dynamic &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"font") ) { if (inCallProp == hx::paccAlways) return set_font(inValue);font=inValue.Cast< ::lime::text::Font >(); return inValue; }
		if (HX_FIELD_EQ(inName,"size") ) { if (inCallProp == hx::paccAlways) return set_size(inValue);size=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"text") ) { if (inCallProp == hx::paccAlways) return set_text(inValue);text=inValue.Cast< ::String >(); return inValue; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"glyphs") ) { glyphs=inValue.Cast< Array< int > >(); return inValue; }
		if (HX_FIELD_EQ(inName,"script") ) { if (inCallProp == hx::paccAlways) return set_script(inValue); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"__dirty") ) { __dirty=inValue.Cast< bool >(); return inValue; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"language") ) { if (inCallProp == hx::paccAlways) return set_language(inValue); }
		if (HX_FIELD_EQ(inName,"__buffer") ) { __buffer=inValue.Cast< ::haxe::io::Bytes >(); return inValue; }
		if (HX_FIELD_EQ(inName,"__handle") ) { __handle=inValue.Cast< Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"__script") ) { __script=inValue.Cast< ::String >(); return inValue; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"direction") ) { if (inCallProp == hx::paccAlways) return set_direction(inValue); }
		if (HX_FIELD_EQ(inName,"positions") ) { positions=inValue.Cast< Array< ::Dynamic > >(); return inValue; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"__language") ) { __language=inValue.Cast< ::String >(); return inValue; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"__direction") ) { __direction=inValue.Cast< int >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void TextLayout_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("direction","\x3f","\x62","\x40","\x10"));
	outFields->push(HX_HCSTRING("font","\xcf","\x5d","\xc0","\x43"));
	outFields->push(HX_HCSTRING("glyphs","\x47","\xf9","\x58","\xae"));
	outFields->push(HX_HCSTRING("language","\x58","\x80","\x11","\x7a"));
	outFields->push(HX_HCSTRING("positions","\xaa","\xf3","\x51","\xd0"));
	outFields->push(HX_HCSTRING("script","\x0b","\x4e","\x60","\x47"));
	outFields->push(HX_HCSTRING("size","\xc1","\xa0","\x53","\x4c"));
	outFields->push(HX_HCSTRING("text","\xad","\xcc","\xf9","\x4c"));
	outFields->push(HX_HCSTRING("__dirty","\xf2","\xa8","\x2e","\x44"));
	outFields->push(HX_HCSTRING("__buffer","\x20","\x28","\xc4","\x78"));
	outFields->push(HX_HCSTRING("__direction","\x1f","\xab","\x6c","\x3e"));
	outFields->push(HX_HCSTRING("__handle","\xc8","\xee","\x2c","\x60"));
	outFields->push(HX_HCSTRING("__language","\x78","\xf3","\x49","\x1d"));
	outFields->push(HX_HCSTRING("__script","\x2b","\xb9","\x8f","\xef"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsObject /*::lime::text::Font*/ ,(int)offsetof(TextLayout_obj,font),HX_HCSTRING("font","\xcf","\x5d","\xc0","\x43")},
	{hx::fsObject /*Array< int >*/ ,(int)offsetof(TextLayout_obj,glyphs),HX_HCSTRING("glyphs","\x47","\xf9","\x58","\xae")},
	{hx::fsObject /*Array< ::Dynamic >*/ ,(int)offsetof(TextLayout_obj,positions),HX_HCSTRING("positions","\xaa","\xf3","\x51","\xd0")},
	{hx::fsInt,(int)offsetof(TextLayout_obj,size),HX_HCSTRING("size","\xc1","\xa0","\x53","\x4c")},
	{hx::fsString,(int)offsetof(TextLayout_obj,text),HX_HCSTRING("text","\xad","\xcc","\xf9","\x4c")},
	{hx::fsBool,(int)offsetof(TextLayout_obj,__dirty),HX_HCSTRING("__dirty","\xf2","\xa8","\x2e","\x44")},
	{hx::fsObject /*::haxe::io::Bytes*/ ,(int)offsetof(TextLayout_obj,__buffer),HX_HCSTRING("__buffer","\x20","\x28","\xc4","\x78")},
	{hx::fsInt,(int)offsetof(TextLayout_obj,__direction),HX_HCSTRING("__direction","\x1f","\xab","\x6c","\x3e")},
	{hx::fsObject /*Dynamic*/ ,(int)offsetof(TextLayout_obj,__handle),HX_HCSTRING("__handle","\xc8","\xee","\x2c","\x60")},
	{hx::fsString,(int)offsetof(TextLayout_obj,__language),HX_HCSTRING("__language","\x78","\xf3","\x49","\x1d")},
	{hx::fsString,(int)offsetof(TextLayout_obj,__script),HX_HCSTRING("__script","\x2b","\xb9","\x8f","\xef")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo *sStaticStorageInfo = 0;
#endif

static ::String sMemberFields[] = {
	HX_HCSTRING("font","\xcf","\x5d","\xc0","\x43"),
	HX_HCSTRING("glyphs","\x47","\xf9","\x58","\xae"),
	HX_HCSTRING("positions","\xaa","\xf3","\x51","\xd0"),
	HX_HCSTRING("size","\xc1","\xa0","\x53","\x4c"),
	HX_HCSTRING("text","\xad","\xcc","\xf9","\x4c"),
	HX_HCSTRING("__dirty","\xf2","\xa8","\x2e","\x44"),
	HX_HCSTRING("__buffer","\x20","\x28","\xc4","\x78"),
	HX_HCSTRING("__direction","\x1f","\xab","\x6c","\x3e"),
	HX_HCSTRING("__handle","\xc8","\xee","\x2c","\x60"),
	HX_HCSTRING("__language","\x78","\xf3","\x49","\x1d"),
	HX_HCSTRING("__script","\x2b","\xb9","\x8f","\xef"),
	HX_HCSTRING("__position","\xc9","\x13","\x33","\x6e"),
	HX_HCSTRING("get_positions","\x81","\xc7","\xb5","\x91"),
	HX_HCSTRING("get_direction","\x16","\x36","\xa4","\xd1"),
	HX_HCSTRING("set_direction","\x22","\x18","\xaa","\x16"),
	HX_HCSTRING("set_font","\xcc","\x72","\xd8","\x71"),
	HX_HCSTRING("get_glyphs","\x10","\x69","\xe0","\x9e"),
	HX_HCSTRING("get_language","\x61","\x34","\x2b","\x2f"),
	HX_HCSTRING("set_language","\xd5","\x57","\x24","\x44"),
	HX_HCSTRING("get_script","\xd4","\xbd","\xe7","\x37"),
	HX_HCSTRING("set_script","\x48","\x5c","\x65","\x3b"),
	HX_HCSTRING("set_size","\xbe","\xb5","\x6b","\x7a"),
	HX_HCSTRING("set_text","\xaa","\xe1","\x11","\x7b"),
	::String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(TextLayout_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(TextLayout_obj::__mClass,"__mClass");
};

#endif

hx::Class TextLayout_obj::__mClass;

void TextLayout_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("lime.text.TextLayout","\x1f","\xf6","\xe8","\x09");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = hx::Class_obj::dupFunctions(sMemberFields);
	__mClass->mCanCast = hx::TCanCast< TextLayout_obj >;
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

} // end namespace lime
} // end namespace text
