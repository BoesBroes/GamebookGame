#include <hxcpp.h>

#ifndef INCLUDED_openfl_text_TextFormat
#include <openfl/text/TextFormat.h>
#endif
namespace openfl{
namespace text{

Void TextFormat_obj::__construct(::String font,Dynamic size,Dynamic color,Dynamic bold,Dynamic italic,Dynamic underline,::String url,::String target,Dynamic align,Dynamic leftMargin,Dynamic rightMargin,Dynamic indent,Dynamic leading)
{
{
	this->font = font;
	this->size = size;
	this->color = color;
	this->bold = bold;
	this->italic = italic;
	this->underline = underline;
	this->url = url;
	this->target = target;
	this->align = align;
	this->leftMargin = leftMargin;
	this->rightMargin = rightMargin;
	this->indent = indent;
	this->leading = leading;
}
;
	return null();
}

//TextFormat_obj::~TextFormat_obj() { }

Dynamic TextFormat_obj::__CreateEmpty() { return  new TextFormat_obj; }
hx::ObjectPtr< TextFormat_obj > TextFormat_obj::__new(::String font,Dynamic size,Dynamic color,Dynamic bold,Dynamic italic,Dynamic underline,::String url,::String target,Dynamic align,Dynamic leftMargin,Dynamic rightMargin,Dynamic indent,Dynamic leading)
{  hx::ObjectPtr< TextFormat_obj > _result_ = new TextFormat_obj();
	_result_->__construct(font,size,color,bold,italic,underline,url,target,align,leftMargin,rightMargin,indent,leading);
	return _result_;}

Dynamic TextFormat_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< TextFormat_obj > _result_ = new TextFormat_obj();
	_result_->__construct(inArgs[0],inArgs[1],inArgs[2],inArgs[3],inArgs[4],inArgs[5],inArgs[6],inArgs[7],inArgs[8],inArgs[9],inArgs[10],inArgs[11],inArgs[12]);
	return _result_;}

::openfl::text::TextFormat TextFormat_obj::clone( ){
	::String tmp = this->font;
	Dynamic tmp1 = this->size;
	Dynamic tmp2 = this->color;
	Dynamic tmp3 = this->bold;
	Dynamic tmp4 = this->italic;
	Dynamic tmp5 = this->underline;
	::String tmp6 = this->url;
	::String tmp7 = this->target;
	::openfl::text::TextFormat tmp8 = ::openfl::text::TextFormat_obj::__new(tmp,tmp1,tmp2,tmp3,tmp4,tmp5,tmp6,tmp7,null(),null(),null(),null(),null());
	::openfl::text::TextFormat newFormat = tmp8;
	Dynamic tmp9 = this->align;
	newFormat->align = tmp9;
	Dynamic tmp10 = this->leftMargin;
	newFormat->leftMargin = tmp10;
	Dynamic tmp11 = this->rightMargin;
	newFormat->rightMargin = tmp11;
	Dynamic tmp12 = this->indent;
	newFormat->indent = tmp12;
	Dynamic tmp13 = this->leading;
	newFormat->leading = tmp13;
	Dynamic tmp14 = this->blockIndent;
	newFormat->blockIndent = tmp14;
	Dynamic tmp15 = this->bullet;
	newFormat->bullet = tmp15;
	Dynamic tmp16 = this->kerning;
	newFormat->kerning = tmp16;
	Dynamic tmp17 = this->letterSpacing;
	newFormat->letterSpacing = tmp17;
	newFormat->tabStops = this->tabStops;
	::openfl::text::TextFormat tmp18 = newFormat;
	return tmp18;
}


HX_DEFINE_DYNAMIC_FUNC0(TextFormat_obj,clone,return )

Void TextFormat_obj::__merge( ::openfl::text::TextFormat format){
{
		bool tmp = (format->font != null());
		if ((tmp)){
			this->font = format->font;
		}
		bool tmp1 = (format->size != null());
		if ((tmp1)){
			this->size = format->size;
		}
		bool tmp2 = (format->color != null());
		if ((tmp2)){
			this->color = format->color;
		}
		bool tmp3 = (format->bold != null());
		if ((tmp3)){
			this->bold = format->bold;
		}
		bool tmp4 = (format->italic != null());
		if ((tmp4)){
			this->italic = format->italic;
		}
		bool tmp5 = (format->underline != null());
		if ((tmp5)){
			this->underline = format->underline;
		}
		bool tmp6 = (format->url != null());
		if ((tmp6)){
			this->url = format->url;
		}
		bool tmp7 = (format->target != null());
		if ((tmp7)){
			this->target = format->target;
		}
		bool tmp8 = (format->align != null());
		if ((tmp8)){
			this->align = format->align;
		}
		bool tmp9 = (format->leftMargin != null());
		if ((tmp9)){
			this->leftMargin = format->leftMargin;
		}
		bool tmp10 = (format->rightMargin != null());
		if ((tmp10)){
			this->rightMargin = format->rightMargin;
		}
		bool tmp11 = (format->indent != null());
		if ((tmp11)){
			this->indent = format->indent;
		}
		bool tmp12 = (format->leading != null());
		if ((tmp12)){
			this->leading = format->leading;
		}
		bool tmp13 = (format->blockIndent != null());
		if ((tmp13)){
			this->blockIndent = format->blockIndent;
		}
		bool tmp14 = (format->bullet != null());
		if ((tmp14)){
			this->bullet = format->bullet;
		}
		bool tmp15 = (format->kerning != null());
		if ((tmp15)){
			this->kerning = format->kerning;
		}
		bool tmp16 = (format->letterSpacing != null());
		if ((tmp16)){
			this->letterSpacing = format->letterSpacing;
		}
		bool tmp17 = (format->tabStops != null());
		if ((tmp17)){
			this->tabStops = format->tabStops;
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(TextFormat_obj,__merge,(void))


TextFormat_obj::TextFormat_obj()
{
}

void TextFormat_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(TextFormat);
	HX_MARK_MEMBER_NAME(align,"align");
	HX_MARK_MEMBER_NAME(blockIndent,"blockIndent");
	HX_MARK_MEMBER_NAME(bold,"bold");
	HX_MARK_MEMBER_NAME(bullet,"bullet");
	HX_MARK_MEMBER_NAME(color,"color");
	HX_MARK_MEMBER_NAME(font,"font");
	HX_MARK_MEMBER_NAME(indent,"indent");
	HX_MARK_MEMBER_NAME(italic,"italic");
	HX_MARK_MEMBER_NAME(kerning,"kerning");
	HX_MARK_MEMBER_NAME(leading,"leading");
	HX_MARK_MEMBER_NAME(leftMargin,"leftMargin");
	HX_MARK_MEMBER_NAME(letterSpacing,"letterSpacing");
	HX_MARK_MEMBER_NAME(rightMargin,"rightMargin");
	HX_MARK_MEMBER_NAME(size,"size");
	HX_MARK_MEMBER_NAME(tabStops,"tabStops");
	HX_MARK_MEMBER_NAME(target,"target");
	HX_MARK_MEMBER_NAME(underline,"underline");
	HX_MARK_MEMBER_NAME(url,"url");
	HX_MARK_END_CLASS();
}

void TextFormat_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(align,"align");
	HX_VISIT_MEMBER_NAME(blockIndent,"blockIndent");
	HX_VISIT_MEMBER_NAME(bold,"bold");
	HX_VISIT_MEMBER_NAME(bullet,"bullet");
	HX_VISIT_MEMBER_NAME(color,"color");
	HX_VISIT_MEMBER_NAME(font,"font");
	HX_VISIT_MEMBER_NAME(indent,"indent");
	HX_VISIT_MEMBER_NAME(italic,"italic");
	HX_VISIT_MEMBER_NAME(kerning,"kerning");
	HX_VISIT_MEMBER_NAME(leading,"leading");
	HX_VISIT_MEMBER_NAME(leftMargin,"leftMargin");
	HX_VISIT_MEMBER_NAME(letterSpacing,"letterSpacing");
	HX_VISIT_MEMBER_NAME(rightMargin,"rightMargin");
	HX_VISIT_MEMBER_NAME(size,"size");
	HX_VISIT_MEMBER_NAME(tabStops,"tabStops");
	HX_VISIT_MEMBER_NAME(target,"target");
	HX_VISIT_MEMBER_NAME(underline,"underline");
	HX_VISIT_MEMBER_NAME(url,"url");
}

Dynamic TextFormat_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"url") ) { return url; }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"bold") ) { return bold; }
		if (HX_FIELD_EQ(inName,"font") ) { return font; }
		if (HX_FIELD_EQ(inName,"size") ) { return size; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"align") ) { return align; }
		if (HX_FIELD_EQ(inName,"color") ) { return color; }
		if (HX_FIELD_EQ(inName,"clone") ) { return clone_dyn(); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"bullet") ) { return bullet; }
		if (HX_FIELD_EQ(inName,"indent") ) { return indent; }
		if (HX_FIELD_EQ(inName,"italic") ) { return italic; }
		if (HX_FIELD_EQ(inName,"target") ) { return target; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"kerning") ) { return kerning; }
		if (HX_FIELD_EQ(inName,"leading") ) { return leading; }
		if (HX_FIELD_EQ(inName,"__merge") ) { return __merge_dyn(); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"tabStops") ) { return tabStops; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"underline") ) { return underline; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"leftMargin") ) { return leftMargin; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"blockIndent") ) { return blockIndent; }
		if (HX_FIELD_EQ(inName,"rightMargin") ) { return rightMargin; }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"letterSpacing") ) { return letterSpacing; }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic TextFormat_obj::__SetField(const ::String &inName,const Dynamic &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"url") ) { url=inValue.Cast< ::String >(); return inValue; }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"bold") ) { bold=inValue.Cast< Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"font") ) { font=inValue.Cast< ::String >(); return inValue; }
		if (HX_FIELD_EQ(inName,"size") ) { size=inValue.Cast< Dynamic >(); return inValue; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"align") ) { align=inValue.Cast< Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"color") ) { color=inValue.Cast< Dynamic >(); return inValue; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"bullet") ) { bullet=inValue.Cast< Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"indent") ) { indent=inValue.Cast< Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"italic") ) { italic=inValue.Cast< Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"target") ) { target=inValue.Cast< ::String >(); return inValue; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"kerning") ) { kerning=inValue.Cast< Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"leading") ) { leading=inValue.Cast< Dynamic >(); return inValue; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"tabStops") ) { tabStops=inValue.Cast< Array< int > >(); return inValue; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"underline") ) { underline=inValue.Cast< Dynamic >(); return inValue; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"leftMargin") ) { leftMargin=inValue.Cast< Dynamic >(); return inValue; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"blockIndent") ) { blockIndent=inValue.Cast< Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"rightMargin") ) { rightMargin=inValue.Cast< Dynamic >(); return inValue; }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"letterSpacing") ) { letterSpacing=inValue.Cast< Dynamic >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void TextFormat_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("align","\xc5","\x56","\x91","\x21"));
	outFields->push(HX_HCSTRING("blockIndent","\x99","\x6d","\xbe","\x33"));
	outFields->push(HX_HCSTRING("bold","\x85","\x81","\x1b","\x41"));
	outFields->push(HX_HCSTRING("bullet","\x42","\x92","\x90","\xd4"));
	outFields->push(HX_HCSTRING("color","\x63","\x71","\x5c","\x4a"));
	outFields->push(HX_HCSTRING("font","\xcf","\x5d","\xc0","\x43"));
	outFields->push(HX_HCSTRING("indent","\x6c","\x0c","\xf3","\x93"));
	outFields->push(HX_HCSTRING("italic","\xf0","\x2e","\x64","\x06"));
	outFields->push(HX_HCSTRING("kerning","\xcc","\xba","\x37","\xb0"));
	outFields->push(HX_HCSTRING("leading","\xc6","\x32","\x61","\x09"));
	outFields->push(HX_HCSTRING("leftMargin","\x95","\x2b","\x7e","\xe9"));
	outFields->push(HX_HCSTRING("letterSpacing","\x3d","\xb7","\x03","\xf5"));
	outFields->push(HX_HCSTRING("rightMargin","\x2a","\x3d","\xf2","\x23"));
	outFields->push(HX_HCSTRING("size","\xc1","\xa0","\x53","\x4c"));
	outFields->push(HX_HCSTRING("tabStops","\x9c","\x93","\xba","\xf2"));
	outFields->push(HX_HCSTRING("target","\x51","\xf3","\xec","\x86"));
	outFields->push(HX_HCSTRING("underline","\x0c","\x15","\xd1","\x87"));
	outFields->push(HX_HCSTRING("url","\x6f","\x2b","\x59","\x00"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsObject /*Dynamic*/ ,(int)offsetof(TextFormat_obj,align),HX_HCSTRING("align","\xc5","\x56","\x91","\x21")},
	{hx::fsObject /*Dynamic*/ ,(int)offsetof(TextFormat_obj,blockIndent),HX_HCSTRING("blockIndent","\x99","\x6d","\xbe","\x33")},
	{hx::fsObject /*Dynamic*/ ,(int)offsetof(TextFormat_obj,bold),HX_HCSTRING("bold","\x85","\x81","\x1b","\x41")},
	{hx::fsObject /*Dynamic*/ ,(int)offsetof(TextFormat_obj,bullet),HX_HCSTRING("bullet","\x42","\x92","\x90","\xd4")},
	{hx::fsObject /*Dynamic*/ ,(int)offsetof(TextFormat_obj,color),HX_HCSTRING("color","\x63","\x71","\x5c","\x4a")},
	{hx::fsString,(int)offsetof(TextFormat_obj,font),HX_HCSTRING("font","\xcf","\x5d","\xc0","\x43")},
	{hx::fsObject /*Dynamic*/ ,(int)offsetof(TextFormat_obj,indent),HX_HCSTRING("indent","\x6c","\x0c","\xf3","\x93")},
	{hx::fsObject /*Dynamic*/ ,(int)offsetof(TextFormat_obj,italic),HX_HCSTRING("italic","\xf0","\x2e","\x64","\x06")},
	{hx::fsObject /*Dynamic*/ ,(int)offsetof(TextFormat_obj,kerning),HX_HCSTRING("kerning","\xcc","\xba","\x37","\xb0")},
	{hx::fsObject /*Dynamic*/ ,(int)offsetof(TextFormat_obj,leading),HX_HCSTRING("leading","\xc6","\x32","\x61","\x09")},
	{hx::fsObject /*Dynamic*/ ,(int)offsetof(TextFormat_obj,leftMargin),HX_HCSTRING("leftMargin","\x95","\x2b","\x7e","\xe9")},
	{hx::fsObject /*Dynamic*/ ,(int)offsetof(TextFormat_obj,letterSpacing),HX_HCSTRING("letterSpacing","\x3d","\xb7","\x03","\xf5")},
	{hx::fsObject /*Dynamic*/ ,(int)offsetof(TextFormat_obj,rightMargin),HX_HCSTRING("rightMargin","\x2a","\x3d","\xf2","\x23")},
	{hx::fsObject /*Dynamic*/ ,(int)offsetof(TextFormat_obj,size),HX_HCSTRING("size","\xc1","\xa0","\x53","\x4c")},
	{hx::fsObject /*Array< int >*/ ,(int)offsetof(TextFormat_obj,tabStops),HX_HCSTRING("tabStops","\x9c","\x93","\xba","\xf2")},
	{hx::fsString,(int)offsetof(TextFormat_obj,target),HX_HCSTRING("target","\x51","\xf3","\xec","\x86")},
	{hx::fsObject /*Dynamic*/ ,(int)offsetof(TextFormat_obj,underline),HX_HCSTRING("underline","\x0c","\x15","\xd1","\x87")},
	{hx::fsString,(int)offsetof(TextFormat_obj,url),HX_HCSTRING("url","\x6f","\x2b","\x59","\x00")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo *sStaticStorageInfo = 0;
#endif

static ::String sMemberFields[] = {
	HX_HCSTRING("align","\xc5","\x56","\x91","\x21"),
	HX_HCSTRING("blockIndent","\x99","\x6d","\xbe","\x33"),
	HX_HCSTRING("bold","\x85","\x81","\x1b","\x41"),
	HX_HCSTRING("bullet","\x42","\x92","\x90","\xd4"),
	HX_HCSTRING("color","\x63","\x71","\x5c","\x4a"),
	HX_HCSTRING("font","\xcf","\x5d","\xc0","\x43"),
	HX_HCSTRING("indent","\x6c","\x0c","\xf3","\x93"),
	HX_HCSTRING("italic","\xf0","\x2e","\x64","\x06"),
	HX_HCSTRING("kerning","\xcc","\xba","\x37","\xb0"),
	HX_HCSTRING("leading","\xc6","\x32","\x61","\x09"),
	HX_HCSTRING("leftMargin","\x95","\x2b","\x7e","\xe9"),
	HX_HCSTRING("letterSpacing","\x3d","\xb7","\x03","\xf5"),
	HX_HCSTRING("rightMargin","\x2a","\x3d","\xf2","\x23"),
	HX_HCSTRING("size","\xc1","\xa0","\x53","\x4c"),
	HX_HCSTRING("tabStops","\x9c","\x93","\xba","\xf2"),
	HX_HCSTRING("target","\x51","\xf3","\xec","\x86"),
	HX_HCSTRING("underline","\x0c","\x15","\xd1","\x87"),
	HX_HCSTRING("url","\x6f","\x2b","\x59","\x00"),
	HX_HCSTRING("clone","\x5d","\x13","\x63","\x48"),
	HX_HCSTRING("__merge","\x98","\xfb","\x24","\x70"),
	::String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(TextFormat_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(TextFormat_obj::__mClass,"__mClass");
};

#endif

hx::Class TextFormat_obj::__mClass;

void TextFormat_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("openfl.text.TextFormat","\x27","\x09","\x1e","\x68");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = hx::Class_obj::dupFunctions(sMemberFields);
	__mClass->mCanCast = hx::TCanCast< TextFormat_obj >;
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
} // end namespace text
