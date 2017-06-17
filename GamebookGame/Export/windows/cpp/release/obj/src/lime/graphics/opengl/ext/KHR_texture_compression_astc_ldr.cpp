#include <hxcpp.h>

#ifndef INCLUDED_lime_graphics_opengl_ext_KHR_texture_compression_astc_ldr
#include <lime/graphics/opengl/ext/KHR_texture_compression_astc_ldr.h>
#endif
namespace lime{
namespace graphics{
namespace opengl{
namespace ext{

Void KHR_texture_compression_astc_ldr_obj::__construct()
{
HX_STACK_FRAME("lime.graphics.opengl.ext.KHR_texture_compression_astc_ldr","new",0x09d08f77,"lime.graphics.opengl.ext.KHR_texture_compression_astc_ldr.new","lime/graphics/opengl/ext/KHR_texture_compression_astc_ldr.hx",6,0x3159ac77)
HX_STACK_THIS(this)
{
	HX_STACK_LINE(36)
	this->COMPRESSED_SRGB8_ALPHA8_ASTC_12x12_KHR = (int)37853;
	HX_STACK_LINE(35)
	this->COMPRESSED_SRGB8_ALPHA8_ASTC_12x10_KHR = (int)37852;
	HX_STACK_LINE(34)
	this->COMPRESSED_SRGB8_ALPHA8_ASTC_10x10_KHR = (int)37851;
	HX_STACK_LINE(33)
	this->COMPRESSED_SRGB8_ALPHA8_ASTC_10x8_KHR = (int)37850;
	HX_STACK_LINE(32)
	this->COMPRESSED_SRGB8_ALPHA8_ASTC_10x6_KHR = (int)37849;
	HX_STACK_LINE(31)
	this->COMPRESSED_SRGB8_ALPHA8_ASTC_10x5_KHR = (int)37848;
	HX_STACK_LINE(30)
	this->COMPRESSED_SRGB8_ALPHA8_ASTC_8x8_KHR = (int)37847;
	HX_STACK_LINE(29)
	this->COMPRESSED_SRGB8_ALPHA8_ASTC_8x6_KHR = (int)37846;
	HX_STACK_LINE(28)
	this->COMPRESSED_SRGB8_ALPHA8_ASTC_8x5_KHR = (int)37845;
	HX_STACK_LINE(27)
	this->COMPRESSED_SRGB8_ALPHA8_ASTC_6x6_KHR = (int)37844;
	HX_STACK_LINE(26)
	this->COMPRESSED_SRGB8_ALPHA8_ASTC_6x5_KHR = (int)37843;
	HX_STACK_LINE(25)
	this->COMPRESSED_SRGB8_ALPHA8_ASTC_5x5_KHR = (int)37842;
	HX_STACK_LINE(24)
	this->COMPRESSED_SRGB8_ALPHA8_ASTC_5x4_KHR = (int)37841;
	HX_STACK_LINE(23)
	this->COMPRESSED_SRGB8_ALPHA8_ASTC_4x4_KHR = (int)37840;
	HX_STACK_LINE(22)
	this->COMPRESSED_RGBA_ASTC_12x12_KHR = (int)37821;
	HX_STACK_LINE(21)
	this->COMPRESSED_RGBA_ASTC_12x10_KHR = (int)37820;
	HX_STACK_LINE(20)
	this->COMPRESSED_RGBA_ASTC_10x10_KHR = (int)37819;
	HX_STACK_LINE(19)
	this->COMPRESSED_RGBA_ASTC_10x8_KHR = (int)37818;
	HX_STACK_LINE(18)
	this->COMPRESSED_RGBA_ASTC_10x6_KHR = (int)37817;
	HX_STACK_LINE(17)
	this->COMPRESSED_RGBA_ASTC_10x5_KHR = (int)37816;
	HX_STACK_LINE(16)
	this->COMPRESSED_RGBA_ASTC_8x8_KHR = (int)37815;
	HX_STACK_LINE(15)
	this->COMPRESSED_RGBA_ASTC_8x6_KHR = (int)37814;
	HX_STACK_LINE(14)
	this->COMPRESSED_RGBA_ASTC_8x5_KHR = (int)37813;
	HX_STACK_LINE(13)
	this->COMPRESSED_RGBA_ASTC_6x6_KHR = (int)37812;
	HX_STACK_LINE(12)
	this->COMPRESSED_RGBA_ASTC_6x5_KHR = (int)37811;
	HX_STACK_LINE(11)
	this->COMPRESSED_RGBA_ASTC_5x5_KHR = (int)37810;
	HX_STACK_LINE(10)
	this->COMPRESSED_RGBA_ASTC_5x4_KHR = (int)37809;
	HX_STACK_LINE(9)
	this->COMPRESSED_RGBA_ASTC_4x4_KHR = (int)37808;
}
;
	return null();
}

//KHR_texture_compression_astc_ldr_obj::~KHR_texture_compression_astc_ldr_obj() { }

Dynamic KHR_texture_compression_astc_ldr_obj::__CreateEmpty() { return  new KHR_texture_compression_astc_ldr_obj; }
hx::ObjectPtr< KHR_texture_compression_astc_ldr_obj > KHR_texture_compression_astc_ldr_obj::__new()
{  hx::ObjectPtr< KHR_texture_compression_astc_ldr_obj > _result_ = new KHR_texture_compression_astc_ldr_obj();
	_result_->__construct();
	return _result_;}

Dynamic KHR_texture_compression_astc_ldr_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< KHR_texture_compression_astc_ldr_obj > _result_ = new KHR_texture_compression_astc_ldr_obj();
	_result_->__construct();
	return _result_;}


KHR_texture_compression_astc_ldr_obj::KHR_texture_compression_astc_ldr_obj()
{
}

Dynamic KHR_texture_compression_astc_ldr_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 28:
		if (HX_FIELD_EQ(inName,"COMPRESSED_RGBA_ASTC_4x4_KHR") ) { return COMPRESSED_RGBA_ASTC_4x4_KHR; }
		if (HX_FIELD_EQ(inName,"COMPRESSED_RGBA_ASTC_5x4_KHR") ) { return COMPRESSED_RGBA_ASTC_5x4_KHR; }
		if (HX_FIELD_EQ(inName,"COMPRESSED_RGBA_ASTC_5x5_KHR") ) { return COMPRESSED_RGBA_ASTC_5x5_KHR; }
		if (HX_FIELD_EQ(inName,"COMPRESSED_RGBA_ASTC_6x5_KHR") ) { return COMPRESSED_RGBA_ASTC_6x5_KHR; }
		if (HX_FIELD_EQ(inName,"COMPRESSED_RGBA_ASTC_6x6_KHR") ) { return COMPRESSED_RGBA_ASTC_6x6_KHR; }
		if (HX_FIELD_EQ(inName,"COMPRESSED_RGBA_ASTC_8x5_KHR") ) { return COMPRESSED_RGBA_ASTC_8x5_KHR; }
		if (HX_FIELD_EQ(inName,"COMPRESSED_RGBA_ASTC_8x6_KHR") ) { return COMPRESSED_RGBA_ASTC_8x6_KHR; }
		if (HX_FIELD_EQ(inName,"COMPRESSED_RGBA_ASTC_8x8_KHR") ) { return COMPRESSED_RGBA_ASTC_8x8_KHR; }
		break;
	case 29:
		if (HX_FIELD_EQ(inName,"COMPRESSED_RGBA_ASTC_10x5_KHR") ) { return COMPRESSED_RGBA_ASTC_10x5_KHR; }
		if (HX_FIELD_EQ(inName,"COMPRESSED_RGBA_ASTC_10x6_KHR") ) { return COMPRESSED_RGBA_ASTC_10x6_KHR; }
		if (HX_FIELD_EQ(inName,"COMPRESSED_RGBA_ASTC_10x8_KHR") ) { return COMPRESSED_RGBA_ASTC_10x8_KHR; }
		break;
	case 30:
		if (HX_FIELD_EQ(inName,"COMPRESSED_RGBA_ASTC_10x10_KHR") ) { return COMPRESSED_RGBA_ASTC_10x10_KHR; }
		if (HX_FIELD_EQ(inName,"COMPRESSED_RGBA_ASTC_12x10_KHR") ) { return COMPRESSED_RGBA_ASTC_12x10_KHR; }
		if (HX_FIELD_EQ(inName,"COMPRESSED_RGBA_ASTC_12x12_KHR") ) { return COMPRESSED_RGBA_ASTC_12x12_KHR; }
		break;
	case 36:
		if (HX_FIELD_EQ(inName,"COMPRESSED_SRGB8_ALPHA8_ASTC_4x4_KHR") ) { return COMPRESSED_SRGB8_ALPHA8_ASTC_4x4_KHR; }
		if (HX_FIELD_EQ(inName,"COMPRESSED_SRGB8_ALPHA8_ASTC_5x4_KHR") ) { return COMPRESSED_SRGB8_ALPHA8_ASTC_5x4_KHR; }
		if (HX_FIELD_EQ(inName,"COMPRESSED_SRGB8_ALPHA8_ASTC_5x5_KHR") ) { return COMPRESSED_SRGB8_ALPHA8_ASTC_5x5_KHR; }
		if (HX_FIELD_EQ(inName,"COMPRESSED_SRGB8_ALPHA8_ASTC_6x5_KHR") ) { return COMPRESSED_SRGB8_ALPHA8_ASTC_6x5_KHR; }
		if (HX_FIELD_EQ(inName,"COMPRESSED_SRGB8_ALPHA8_ASTC_6x6_KHR") ) { return COMPRESSED_SRGB8_ALPHA8_ASTC_6x6_KHR; }
		if (HX_FIELD_EQ(inName,"COMPRESSED_SRGB8_ALPHA8_ASTC_8x5_KHR") ) { return COMPRESSED_SRGB8_ALPHA8_ASTC_8x5_KHR; }
		if (HX_FIELD_EQ(inName,"COMPRESSED_SRGB8_ALPHA8_ASTC_8x6_KHR") ) { return COMPRESSED_SRGB8_ALPHA8_ASTC_8x6_KHR; }
		if (HX_FIELD_EQ(inName,"COMPRESSED_SRGB8_ALPHA8_ASTC_8x8_KHR") ) { return COMPRESSED_SRGB8_ALPHA8_ASTC_8x8_KHR; }
		break;
	case 37:
		if (HX_FIELD_EQ(inName,"COMPRESSED_SRGB8_ALPHA8_ASTC_10x5_KHR") ) { return COMPRESSED_SRGB8_ALPHA8_ASTC_10x5_KHR; }
		if (HX_FIELD_EQ(inName,"COMPRESSED_SRGB8_ALPHA8_ASTC_10x6_KHR") ) { return COMPRESSED_SRGB8_ALPHA8_ASTC_10x6_KHR; }
		if (HX_FIELD_EQ(inName,"COMPRESSED_SRGB8_ALPHA8_ASTC_10x8_KHR") ) { return COMPRESSED_SRGB8_ALPHA8_ASTC_10x8_KHR; }
		break;
	case 38:
		if (HX_FIELD_EQ(inName,"COMPRESSED_SRGB8_ALPHA8_ASTC_10x10_KHR") ) { return COMPRESSED_SRGB8_ALPHA8_ASTC_10x10_KHR; }
		if (HX_FIELD_EQ(inName,"COMPRESSED_SRGB8_ALPHA8_ASTC_12x10_KHR") ) { return COMPRESSED_SRGB8_ALPHA8_ASTC_12x10_KHR; }
		if (HX_FIELD_EQ(inName,"COMPRESSED_SRGB8_ALPHA8_ASTC_12x12_KHR") ) { return COMPRESSED_SRGB8_ALPHA8_ASTC_12x12_KHR; }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic KHR_texture_compression_astc_ldr_obj::__SetField(const ::String &inName,const Dynamic &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 28:
		if (HX_FIELD_EQ(inName,"COMPRESSED_RGBA_ASTC_4x4_KHR") ) { COMPRESSED_RGBA_ASTC_4x4_KHR=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"COMPRESSED_RGBA_ASTC_5x4_KHR") ) { COMPRESSED_RGBA_ASTC_5x4_KHR=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"COMPRESSED_RGBA_ASTC_5x5_KHR") ) { COMPRESSED_RGBA_ASTC_5x5_KHR=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"COMPRESSED_RGBA_ASTC_6x5_KHR") ) { COMPRESSED_RGBA_ASTC_6x5_KHR=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"COMPRESSED_RGBA_ASTC_6x6_KHR") ) { COMPRESSED_RGBA_ASTC_6x6_KHR=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"COMPRESSED_RGBA_ASTC_8x5_KHR") ) { COMPRESSED_RGBA_ASTC_8x5_KHR=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"COMPRESSED_RGBA_ASTC_8x6_KHR") ) { COMPRESSED_RGBA_ASTC_8x6_KHR=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"COMPRESSED_RGBA_ASTC_8x8_KHR") ) { COMPRESSED_RGBA_ASTC_8x8_KHR=inValue.Cast< int >(); return inValue; }
		break;
	case 29:
		if (HX_FIELD_EQ(inName,"COMPRESSED_RGBA_ASTC_10x5_KHR") ) { COMPRESSED_RGBA_ASTC_10x5_KHR=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"COMPRESSED_RGBA_ASTC_10x6_KHR") ) { COMPRESSED_RGBA_ASTC_10x6_KHR=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"COMPRESSED_RGBA_ASTC_10x8_KHR") ) { COMPRESSED_RGBA_ASTC_10x8_KHR=inValue.Cast< int >(); return inValue; }
		break;
	case 30:
		if (HX_FIELD_EQ(inName,"COMPRESSED_RGBA_ASTC_10x10_KHR") ) { COMPRESSED_RGBA_ASTC_10x10_KHR=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"COMPRESSED_RGBA_ASTC_12x10_KHR") ) { COMPRESSED_RGBA_ASTC_12x10_KHR=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"COMPRESSED_RGBA_ASTC_12x12_KHR") ) { COMPRESSED_RGBA_ASTC_12x12_KHR=inValue.Cast< int >(); return inValue; }
		break;
	case 36:
		if (HX_FIELD_EQ(inName,"COMPRESSED_SRGB8_ALPHA8_ASTC_4x4_KHR") ) { COMPRESSED_SRGB8_ALPHA8_ASTC_4x4_KHR=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"COMPRESSED_SRGB8_ALPHA8_ASTC_5x4_KHR") ) { COMPRESSED_SRGB8_ALPHA8_ASTC_5x4_KHR=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"COMPRESSED_SRGB8_ALPHA8_ASTC_5x5_KHR") ) { COMPRESSED_SRGB8_ALPHA8_ASTC_5x5_KHR=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"COMPRESSED_SRGB8_ALPHA8_ASTC_6x5_KHR") ) { COMPRESSED_SRGB8_ALPHA8_ASTC_6x5_KHR=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"COMPRESSED_SRGB8_ALPHA8_ASTC_6x6_KHR") ) { COMPRESSED_SRGB8_ALPHA8_ASTC_6x6_KHR=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"COMPRESSED_SRGB8_ALPHA8_ASTC_8x5_KHR") ) { COMPRESSED_SRGB8_ALPHA8_ASTC_8x5_KHR=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"COMPRESSED_SRGB8_ALPHA8_ASTC_8x6_KHR") ) { COMPRESSED_SRGB8_ALPHA8_ASTC_8x6_KHR=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"COMPRESSED_SRGB8_ALPHA8_ASTC_8x8_KHR") ) { COMPRESSED_SRGB8_ALPHA8_ASTC_8x8_KHR=inValue.Cast< int >(); return inValue; }
		break;
	case 37:
		if (HX_FIELD_EQ(inName,"COMPRESSED_SRGB8_ALPHA8_ASTC_10x5_KHR") ) { COMPRESSED_SRGB8_ALPHA8_ASTC_10x5_KHR=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"COMPRESSED_SRGB8_ALPHA8_ASTC_10x6_KHR") ) { COMPRESSED_SRGB8_ALPHA8_ASTC_10x6_KHR=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"COMPRESSED_SRGB8_ALPHA8_ASTC_10x8_KHR") ) { COMPRESSED_SRGB8_ALPHA8_ASTC_10x8_KHR=inValue.Cast< int >(); return inValue; }
		break;
	case 38:
		if (HX_FIELD_EQ(inName,"COMPRESSED_SRGB8_ALPHA8_ASTC_10x10_KHR") ) { COMPRESSED_SRGB8_ALPHA8_ASTC_10x10_KHR=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"COMPRESSED_SRGB8_ALPHA8_ASTC_12x10_KHR") ) { COMPRESSED_SRGB8_ALPHA8_ASTC_12x10_KHR=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"COMPRESSED_SRGB8_ALPHA8_ASTC_12x12_KHR") ) { COMPRESSED_SRGB8_ALPHA8_ASTC_12x12_KHR=inValue.Cast< int >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void KHR_texture_compression_astc_ldr_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("COMPRESSED_RGBA_ASTC_4x4_KHR","\x95","\xfb","\x5c","\x44"));
	outFields->push(HX_HCSTRING("COMPRESSED_RGBA_ASTC_5x4_KHR","\x56","\x72","\xf2","\x6d"));
	outFields->push(HX_HCSTRING("COMPRESSED_RGBA_ASTC_5x5_KHR","\xd7","\x06","\x59","\x01"));
	outFields->push(HX_HCSTRING("COMPRESSED_RGBA_ASTC_6x5_KHR","\x98","\x7d","\xee","\x2a"));
	outFields->push(HX_HCSTRING("COMPRESSED_RGBA_ASTC_6x6_KHR","\x19","\x12","\x55","\xbe"));
	outFields->push(HX_HCSTRING("COMPRESSED_RGBA_ASTC_8x5_KHR","\x1a","\x6b","\x19","\x7e"));
	outFields->push(HX_HCSTRING("COMPRESSED_RGBA_ASTC_8x6_KHR","\x9b","\xff","\x7f","\x11"));
	outFields->push(HX_HCSTRING("COMPRESSED_RGBA_ASTC_8x8_KHR","\x9d","\x28","\x4d","\x38"));
	outFields->push(HX_HCSTRING("COMPRESSED_RGBA_ASTC_10x5_KHR","\x03","\x19","\x09","\x3e"));
	outFields->push(HX_HCSTRING("COMPRESSED_RGBA_ASTC_10x6_KHR","\x84","\xad","\x6f","\xd1"));
	outFields->push(HX_HCSTRING("COMPRESSED_RGBA_ASTC_10x8_KHR","\x86","\xd6","\x3c","\xf8"));
	outFields->push(HX_HCSTRING("COMPRESSED_RGBA_ASTC_10x10_KHR","\x3d","\x97","\xe4","\x6d"));
	outFields->push(HX_HCSTRING("COMPRESSED_RGBA_ASTC_12x10_KHR","\x7b","\x7b","\x49","\xe0"));
	outFields->push(HX_HCSTRING("COMPRESSED_RGBA_ASTC_12x12_KHR","\x7d","\xa4","\x16","\x07"));
	outFields->push(HX_HCSTRING("COMPRESSED_SRGB8_ALPHA8_ASTC_4x4_KHR","\xce","\x9b","\xdb","\x5c"));
	outFields->push(HX_HCSTRING("COMPRESSED_SRGB8_ALPHA8_ASTC_5x4_KHR","\x8f","\x12","\x71","\x86"));
	outFields->push(HX_HCSTRING("COMPRESSED_SRGB8_ALPHA8_ASTC_5x5_KHR","\x10","\xa7","\xd7","\x19"));
	outFields->push(HX_HCSTRING("COMPRESSED_SRGB8_ALPHA8_ASTC_6x5_KHR","\xd1","\x1d","\x6d","\x43"));
	outFields->push(HX_HCSTRING("COMPRESSED_SRGB8_ALPHA8_ASTC_6x6_KHR","\x52","\xb2","\xd3","\xd6"));
	outFields->push(HX_HCSTRING("COMPRESSED_SRGB8_ALPHA8_ASTC_8x5_KHR","\x53","\x0b","\x98","\x96"));
	outFields->push(HX_HCSTRING("COMPRESSED_SRGB8_ALPHA8_ASTC_8x6_KHR","\xd4","\x9f","\xfe","\x29"));
	outFields->push(HX_HCSTRING("COMPRESSED_SRGB8_ALPHA8_ASTC_8x8_KHR","\xd6","\xc8","\xcb","\x50"));
	outFields->push(HX_HCSTRING("COMPRESSED_SRGB8_ALPHA8_ASTC_10x5_KHR","\xaa","\xaa","\x56","\x94"));
	outFields->push(HX_HCSTRING("COMPRESSED_SRGB8_ALPHA8_ASTC_10x6_KHR","\x2b","\x3f","\xbd","\x27"));
	outFields->push(HX_HCSTRING("COMPRESSED_SRGB8_ALPHA8_ASTC_10x8_KHR","\x2d","\x68","\x8a","\x4e"));
	outFields->push(HX_HCSTRING("COMPRESSED_SRGB8_ALPHA8_ASTC_10x10_KHR","\xb6","\x77","\x76","\x9b"));
	outFields->push(HX_HCSTRING("COMPRESSED_SRGB8_ALPHA8_ASTC_12x10_KHR","\xf4","\x5b","\xdb","\x0d"));
	outFields->push(HX_HCSTRING("COMPRESSED_SRGB8_ALPHA8_ASTC_12x12_KHR","\xf6","\x84","\xa8","\x34"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsInt,(int)offsetof(KHR_texture_compression_astc_ldr_obj,COMPRESSED_RGBA_ASTC_4x4_KHR),HX_HCSTRING("COMPRESSED_RGBA_ASTC_4x4_KHR","\x95","\xfb","\x5c","\x44")},
	{hx::fsInt,(int)offsetof(KHR_texture_compression_astc_ldr_obj,COMPRESSED_RGBA_ASTC_5x4_KHR),HX_HCSTRING("COMPRESSED_RGBA_ASTC_5x4_KHR","\x56","\x72","\xf2","\x6d")},
	{hx::fsInt,(int)offsetof(KHR_texture_compression_astc_ldr_obj,COMPRESSED_RGBA_ASTC_5x5_KHR),HX_HCSTRING("COMPRESSED_RGBA_ASTC_5x5_KHR","\xd7","\x06","\x59","\x01")},
	{hx::fsInt,(int)offsetof(KHR_texture_compression_astc_ldr_obj,COMPRESSED_RGBA_ASTC_6x5_KHR),HX_HCSTRING("COMPRESSED_RGBA_ASTC_6x5_KHR","\x98","\x7d","\xee","\x2a")},
	{hx::fsInt,(int)offsetof(KHR_texture_compression_astc_ldr_obj,COMPRESSED_RGBA_ASTC_6x6_KHR),HX_HCSTRING("COMPRESSED_RGBA_ASTC_6x6_KHR","\x19","\x12","\x55","\xbe")},
	{hx::fsInt,(int)offsetof(KHR_texture_compression_astc_ldr_obj,COMPRESSED_RGBA_ASTC_8x5_KHR),HX_HCSTRING("COMPRESSED_RGBA_ASTC_8x5_KHR","\x1a","\x6b","\x19","\x7e")},
	{hx::fsInt,(int)offsetof(KHR_texture_compression_astc_ldr_obj,COMPRESSED_RGBA_ASTC_8x6_KHR),HX_HCSTRING("COMPRESSED_RGBA_ASTC_8x6_KHR","\x9b","\xff","\x7f","\x11")},
	{hx::fsInt,(int)offsetof(KHR_texture_compression_astc_ldr_obj,COMPRESSED_RGBA_ASTC_8x8_KHR),HX_HCSTRING("COMPRESSED_RGBA_ASTC_8x8_KHR","\x9d","\x28","\x4d","\x38")},
	{hx::fsInt,(int)offsetof(KHR_texture_compression_astc_ldr_obj,COMPRESSED_RGBA_ASTC_10x5_KHR),HX_HCSTRING("COMPRESSED_RGBA_ASTC_10x5_KHR","\x03","\x19","\x09","\x3e")},
	{hx::fsInt,(int)offsetof(KHR_texture_compression_astc_ldr_obj,COMPRESSED_RGBA_ASTC_10x6_KHR),HX_HCSTRING("COMPRESSED_RGBA_ASTC_10x6_KHR","\x84","\xad","\x6f","\xd1")},
	{hx::fsInt,(int)offsetof(KHR_texture_compression_astc_ldr_obj,COMPRESSED_RGBA_ASTC_10x8_KHR),HX_HCSTRING("COMPRESSED_RGBA_ASTC_10x8_KHR","\x86","\xd6","\x3c","\xf8")},
	{hx::fsInt,(int)offsetof(KHR_texture_compression_astc_ldr_obj,COMPRESSED_RGBA_ASTC_10x10_KHR),HX_HCSTRING("COMPRESSED_RGBA_ASTC_10x10_KHR","\x3d","\x97","\xe4","\x6d")},
	{hx::fsInt,(int)offsetof(KHR_texture_compression_astc_ldr_obj,COMPRESSED_RGBA_ASTC_12x10_KHR),HX_HCSTRING("COMPRESSED_RGBA_ASTC_12x10_KHR","\x7b","\x7b","\x49","\xe0")},
	{hx::fsInt,(int)offsetof(KHR_texture_compression_astc_ldr_obj,COMPRESSED_RGBA_ASTC_12x12_KHR),HX_HCSTRING("COMPRESSED_RGBA_ASTC_12x12_KHR","\x7d","\xa4","\x16","\x07")},
	{hx::fsInt,(int)offsetof(KHR_texture_compression_astc_ldr_obj,COMPRESSED_SRGB8_ALPHA8_ASTC_4x4_KHR),HX_HCSTRING("COMPRESSED_SRGB8_ALPHA8_ASTC_4x4_KHR","\xce","\x9b","\xdb","\x5c")},
	{hx::fsInt,(int)offsetof(KHR_texture_compression_astc_ldr_obj,COMPRESSED_SRGB8_ALPHA8_ASTC_5x4_KHR),HX_HCSTRING("COMPRESSED_SRGB8_ALPHA8_ASTC_5x4_KHR","\x8f","\x12","\x71","\x86")},
	{hx::fsInt,(int)offsetof(KHR_texture_compression_astc_ldr_obj,COMPRESSED_SRGB8_ALPHA8_ASTC_5x5_KHR),HX_HCSTRING("COMPRESSED_SRGB8_ALPHA8_ASTC_5x5_KHR","\x10","\xa7","\xd7","\x19")},
	{hx::fsInt,(int)offsetof(KHR_texture_compression_astc_ldr_obj,COMPRESSED_SRGB8_ALPHA8_ASTC_6x5_KHR),HX_HCSTRING("COMPRESSED_SRGB8_ALPHA8_ASTC_6x5_KHR","\xd1","\x1d","\x6d","\x43")},
	{hx::fsInt,(int)offsetof(KHR_texture_compression_astc_ldr_obj,COMPRESSED_SRGB8_ALPHA8_ASTC_6x6_KHR),HX_HCSTRING("COMPRESSED_SRGB8_ALPHA8_ASTC_6x6_KHR","\x52","\xb2","\xd3","\xd6")},
	{hx::fsInt,(int)offsetof(KHR_texture_compression_astc_ldr_obj,COMPRESSED_SRGB8_ALPHA8_ASTC_8x5_KHR),HX_HCSTRING("COMPRESSED_SRGB8_ALPHA8_ASTC_8x5_KHR","\x53","\x0b","\x98","\x96")},
	{hx::fsInt,(int)offsetof(KHR_texture_compression_astc_ldr_obj,COMPRESSED_SRGB8_ALPHA8_ASTC_8x6_KHR),HX_HCSTRING("COMPRESSED_SRGB8_ALPHA8_ASTC_8x6_KHR","\xd4","\x9f","\xfe","\x29")},
	{hx::fsInt,(int)offsetof(KHR_texture_compression_astc_ldr_obj,COMPRESSED_SRGB8_ALPHA8_ASTC_8x8_KHR),HX_HCSTRING("COMPRESSED_SRGB8_ALPHA8_ASTC_8x8_KHR","\xd6","\xc8","\xcb","\x50")},
	{hx::fsInt,(int)offsetof(KHR_texture_compression_astc_ldr_obj,COMPRESSED_SRGB8_ALPHA8_ASTC_10x5_KHR),HX_HCSTRING("COMPRESSED_SRGB8_ALPHA8_ASTC_10x5_KHR","\xaa","\xaa","\x56","\x94")},
	{hx::fsInt,(int)offsetof(KHR_texture_compression_astc_ldr_obj,COMPRESSED_SRGB8_ALPHA8_ASTC_10x6_KHR),HX_HCSTRING("COMPRESSED_SRGB8_ALPHA8_ASTC_10x6_KHR","\x2b","\x3f","\xbd","\x27")},
	{hx::fsInt,(int)offsetof(KHR_texture_compression_astc_ldr_obj,COMPRESSED_SRGB8_ALPHA8_ASTC_10x8_KHR),HX_HCSTRING("COMPRESSED_SRGB8_ALPHA8_ASTC_10x8_KHR","\x2d","\x68","\x8a","\x4e")},
	{hx::fsInt,(int)offsetof(KHR_texture_compression_astc_ldr_obj,COMPRESSED_SRGB8_ALPHA8_ASTC_10x10_KHR),HX_HCSTRING("COMPRESSED_SRGB8_ALPHA8_ASTC_10x10_KHR","\xb6","\x77","\x76","\x9b")},
	{hx::fsInt,(int)offsetof(KHR_texture_compression_astc_ldr_obj,COMPRESSED_SRGB8_ALPHA8_ASTC_12x10_KHR),HX_HCSTRING("COMPRESSED_SRGB8_ALPHA8_ASTC_12x10_KHR","\xf4","\x5b","\xdb","\x0d")},
	{hx::fsInt,(int)offsetof(KHR_texture_compression_astc_ldr_obj,COMPRESSED_SRGB8_ALPHA8_ASTC_12x12_KHR),HX_HCSTRING("COMPRESSED_SRGB8_ALPHA8_ASTC_12x12_KHR","\xf6","\x84","\xa8","\x34")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo *sStaticStorageInfo = 0;
#endif

static ::String sMemberFields[] = {
	HX_HCSTRING("COMPRESSED_RGBA_ASTC_4x4_KHR","\x95","\xfb","\x5c","\x44"),
	HX_HCSTRING("COMPRESSED_RGBA_ASTC_5x4_KHR","\x56","\x72","\xf2","\x6d"),
	HX_HCSTRING("COMPRESSED_RGBA_ASTC_5x5_KHR","\xd7","\x06","\x59","\x01"),
	HX_HCSTRING("COMPRESSED_RGBA_ASTC_6x5_KHR","\x98","\x7d","\xee","\x2a"),
	HX_HCSTRING("COMPRESSED_RGBA_ASTC_6x6_KHR","\x19","\x12","\x55","\xbe"),
	HX_HCSTRING("COMPRESSED_RGBA_ASTC_8x5_KHR","\x1a","\x6b","\x19","\x7e"),
	HX_HCSTRING("COMPRESSED_RGBA_ASTC_8x6_KHR","\x9b","\xff","\x7f","\x11"),
	HX_HCSTRING("COMPRESSED_RGBA_ASTC_8x8_KHR","\x9d","\x28","\x4d","\x38"),
	HX_HCSTRING("COMPRESSED_RGBA_ASTC_10x5_KHR","\x03","\x19","\x09","\x3e"),
	HX_HCSTRING("COMPRESSED_RGBA_ASTC_10x6_KHR","\x84","\xad","\x6f","\xd1"),
	HX_HCSTRING("COMPRESSED_RGBA_ASTC_10x8_KHR","\x86","\xd6","\x3c","\xf8"),
	HX_HCSTRING("COMPRESSED_RGBA_ASTC_10x10_KHR","\x3d","\x97","\xe4","\x6d"),
	HX_HCSTRING("COMPRESSED_RGBA_ASTC_12x10_KHR","\x7b","\x7b","\x49","\xe0"),
	HX_HCSTRING("COMPRESSED_RGBA_ASTC_12x12_KHR","\x7d","\xa4","\x16","\x07"),
	HX_HCSTRING("COMPRESSED_SRGB8_ALPHA8_ASTC_4x4_KHR","\xce","\x9b","\xdb","\x5c"),
	HX_HCSTRING("COMPRESSED_SRGB8_ALPHA8_ASTC_5x4_KHR","\x8f","\x12","\x71","\x86"),
	HX_HCSTRING("COMPRESSED_SRGB8_ALPHA8_ASTC_5x5_KHR","\x10","\xa7","\xd7","\x19"),
	HX_HCSTRING("COMPRESSED_SRGB8_ALPHA8_ASTC_6x5_KHR","\xd1","\x1d","\x6d","\x43"),
	HX_HCSTRING("COMPRESSED_SRGB8_ALPHA8_ASTC_6x6_KHR","\x52","\xb2","\xd3","\xd6"),
	HX_HCSTRING("COMPRESSED_SRGB8_ALPHA8_ASTC_8x5_KHR","\x53","\x0b","\x98","\x96"),
	HX_HCSTRING("COMPRESSED_SRGB8_ALPHA8_ASTC_8x6_KHR","\xd4","\x9f","\xfe","\x29"),
	HX_HCSTRING("COMPRESSED_SRGB8_ALPHA8_ASTC_8x8_KHR","\xd6","\xc8","\xcb","\x50"),
	HX_HCSTRING("COMPRESSED_SRGB8_ALPHA8_ASTC_10x5_KHR","\xaa","\xaa","\x56","\x94"),
	HX_HCSTRING("COMPRESSED_SRGB8_ALPHA8_ASTC_10x6_KHR","\x2b","\x3f","\xbd","\x27"),
	HX_HCSTRING("COMPRESSED_SRGB8_ALPHA8_ASTC_10x8_KHR","\x2d","\x68","\x8a","\x4e"),
	HX_HCSTRING("COMPRESSED_SRGB8_ALPHA8_ASTC_10x10_KHR","\xb6","\x77","\x76","\x9b"),
	HX_HCSTRING("COMPRESSED_SRGB8_ALPHA8_ASTC_12x10_KHR","\xf4","\x5b","\xdb","\x0d"),
	HX_HCSTRING("COMPRESSED_SRGB8_ALPHA8_ASTC_12x12_KHR","\xf6","\x84","\xa8","\x34"),
	::String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(KHR_texture_compression_astc_ldr_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(KHR_texture_compression_astc_ldr_obj::__mClass,"__mClass");
};

#endif

hx::Class KHR_texture_compression_astc_ldr_obj::__mClass;

void KHR_texture_compression_astc_ldr_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("lime.graphics.opengl.ext.KHR_texture_compression_astc_ldr","\x05","\x08","\x70","\x5d");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = hx::Class_obj::dupFunctions(sMemberFields);
	__mClass->mCanCast = hx::TCanCast< KHR_texture_compression_astc_ldr_obj >;
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
} // end namespace graphics
} // end namespace opengl
} // end namespace ext
