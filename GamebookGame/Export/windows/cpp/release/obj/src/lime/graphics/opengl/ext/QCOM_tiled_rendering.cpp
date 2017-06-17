#include <hxcpp.h>

#ifndef INCLUDED_lime_graphics_opengl_ext_QCOM_tiled_rendering
#include <lime/graphics/opengl/ext/QCOM_tiled_rendering.h>
#endif
namespace lime{
namespace graphics{
namespace opengl{
namespace ext{

Void QCOM_tiled_rendering_obj::__construct()
{
HX_STACK_FRAME("lime.graphics.opengl.ext.QCOM_tiled_rendering","new",0x9cd72288,"lime.graphics.opengl.ext.QCOM_tiled_rendering.new","lime/graphics/opengl/ext/QCOM_tiled_rendering.hx",6,0x0643f186)
HX_STACK_THIS(this)
{
	HX_STACK_LINE(40)
	this->MULTISAMPLE_BUFFER_BIT7_QCOM = (int)-2147483648;
	HX_STACK_LINE(39)
	this->MULTISAMPLE_BUFFER_BIT6_QCOM = (int)1073741824;
	HX_STACK_LINE(38)
	this->MULTISAMPLE_BUFFER_BIT5_QCOM = (int)536870912;
	HX_STACK_LINE(37)
	this->MULTISAMPLE_BUFFER_BIT4_QCOM = (int)268435456;
	HX_STACK_LINE(36)
	this->MULTISAMPLE_BUFFER_BIT3_QCOM = (int)134217728;
	HX_STACK_LINE(35)
	this->MULTISAMPLE_BUFFER_BIT2_QCOM = (int)67108864;
	HX_STACK_LINE(34)
	this->MULTISAMPLE_BUFFER_BIT1_QCOM = (int)33554432;
	HX_STACK_LINE(33)
	this->MULTISAMPLE_BUFFER_BIT0_QCOM = (int)16777216;
	HX_STACK_LINE(32)
	this->STENCIL_BUFFER_BIT7_QCOM = (int)8388608;
	HX_STACK_LINE(31)
	this->STENCIL_BUFFER_BIT6_QCOM = (int)4194304;
	HX_STACK_LINE(30)
	this->STENCIL_BUFFER_BIT5_QCOM = (int)2097152;
	HX_STACK_LINE(29)
	this->STENCIL_BUFFER_BIT4_QCOM = (int)1048576;
	HX_STACK_LINE(28)
	this->STENCIL_BUFFER_BIT3_QCOM = (int)524288;
	HX_STACK_LINE(27)
	this->STENCIL_BUFFER_BIT2_QCOM = (int)262144;
	HX_STACK_LINE(26)
	this->STENCIL_BUFFER_BIT1_QCOM = (int)131072;
	HX_STACK_LINE(25)
	this->STENCIL_BUFFER_BIT0_QCOM = (int)65536;
	HX_STACK_LINE(24)
	this->DEPTH_BUFFER_BIT7_QCOM = (int)32768;
	HX_STACK_LINE(23)
	this->DEPTH_BUFFER_BIT6_QCOM = (int)16384;
	HX_STACK_LINE(22)
	this->DEPTH_BUFFER_BIT5_QCOM = (int)8192;
	HX_STACK_LINE(21)
	this->DEPTH_BUFFER_BIT4_QCOM = (int)4096;
	HX_STACK_LINE(20)
	this->DEPTH_BUFFER_BIT3_QCOM = (int)2048;
	HX_STACK_LINE(19)
	this->DEPTH_BUFFER_BIT2_QCOM = (int)1024;
	HX_STACK_LINE(18)
	this->DEPTH_BUFFER_BIT1_QCOM = (int)512;
	HX_STACK_LINE(17)
	this->DEPTH_BUFFER_BIT0_QCOM = (int)256;
	HX_STACK_LINE(16)
	this->COLOR_BUFFER_BIT7_QCOM = (int)128;
	HX_STACK_LINE(15)
	this->COLOR_BUFFER_BIT6_QCOM = (int)64;
	HX_STACK_LINE(14)
	this->COLOR_BUFFER_BIT5_QCOM = (int)32;
	HX_STACK_LINE(13)
	this->COLOR_BUFFER_BIT4_QCOM = (int)16;
	HX_STACK_LINE(12)
	this->COLOR_BUFFER_BIT3_QCOM = (int)8;
	HX_STACK_LINE(11)
	this->COLOR_BUFFER_BIT2_QCOM = (int)4;
	HX_STACK_LINE(10)
	this->COLOR_BUFFER_BIT1_QCOM = (int)2;
	HX_STACK_LINE(9)
	this->COLOR_BUFFER_BIT0_QCOM = (int)1;
}
;
	return null();
}

//QCOM_tiled_rendering_obj::~QCOM_tiled_rendering_obj() { }

Dynamic QCOM_tiled_rendering_obj::__CreateEmpty() { return  new QCOM_tiled_rendering_obj; }
hx::ObjectPtr< QCOM_tiled_rendering_obj > QCOM_tiled_rendering_obj::__new()
{  hx::ObjectPtr< QCOM_tiled_rendering_obj > _result_ = new QCOM_tiled_rendering_obj();
	_result_->__construct();
	return _result_;}

Dynamic QCOM_tiled_rendering_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< QCOM_tiled_rendering_obj > _result_ = new QCOM_tiled_rendering_obj();
	_result_->__construct();
	return _result_;}


QCOM_tiled_rendering_obj::QCOM_tiled_rendering_obj()
{
}

Dynamic QCOM_tiled_rendering_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 22:
		if (HX_FIELD_EQ(inName,"COLOR_BUFFER_BIT0_QCOM") ) { return COLOR_BUFFER_BIT0_QCOM; }
		if (HX_FIELD_EQ(inName,"COLOR_BUFFER_BIT1_QCOM") ) { return COLOR_BUFFER_BIT1_QCOM; }
		if (HX_FIELD_EQ(inName,"COLOR_BUFFER_BIT2_QCOM") ) { return COLOR_BUFFER_BIT2_QCOM; }
		if (HX_FIELD_EQ(inName,"COLOR_BUFFER_BIT3_QCOM") ) { return COLOR_BUFFER_BIT3_QCOM; }
		if (HX_FIELD_EQ(inName,"COLOR_BUFFER_BIT4_QCOM") ) { return COLOR_BUFFER_BIT4_QCOM; }
		if (HX_FIELD_EQ(inName,"COLOR_BUFFER_BIT5_QCOM") ) { return COLOR_BUFFER_BIT5_QCOM; }
		if (HX_FIELD_EQ(inName,"COLOR_BUFFER_BIT6_QCOM") ) { return COLOR_BUFFER_BIT6_QCOM; }
		if (HX_FIELD_EQ(inName,"COLOR_BUFFER_BIT7_QCOM") ) { return COLOR_BUFFER_BIT7_QCOM; }
		if (HX_FIELD_EQ(inName,"DEPTH_BUFFER_BIT0_QCOM") ) { return DEPTH_BUFFER_BIT0_QCOM; }
		if (HX_FIELD_EQ(inName,"DEPTH_BUFFER_BIT1_QCOM") ) { return DEPTH_BUFFER_BIT1_QCOM; }
		if (HX_FIELD_EQ(inName,"DEPTH_BUFFER_BIT2_QCOM") ) { return DEPTH_BUFFER_BIT2_QCOM; }
		if (HX_FIELD_EQ(inName,"DEPTH_BUFFER_BIT3_QCOM") ) { return DEPTH_BUFFER_BIT3_QCOM; }
		if (HX_FIELD_EQ(inName,"DEPTH_BUFFER_BIT4_QCOM") ) { return DEPTH_BUFFER_BIT4_QCOM; }
		if (HX_FIELD_EQ(inName,"DEPTH_BUFFER_BIT5_QCOM") ) { return DEPTH_BUFFER_BIT5_QCOM; }
		if (HX_FIELD_EQ(inName,"DEPTH_BUFFER_BIT6_QCOM") ) { return DEPTH_BUFFER_BIT6_QCOM; }
		if (HX_FIELD_EQ(inName,"DEPTH_BUFFER_BIT7_QCOM") ) { return DEPTH_BUFFER_BIT7_QCOM; }
		break;
	case 24:
		if (HX_FIELD_EQ(inName,"STENCIL_BUFFER_BIT0_QCOM") ) { return STENCIL_BUFFER_BIT0_QCOM; }
		if (HX_FIELD_EQ(inName,"STENCIL_BUFFER_BIT1_QCOM") ) { return STENCIL_BUFFER_BIT1_QCOM; }
		if (HX_FIELD_EQ(inName,"STENCIL_BUFFER_BIT2_QCOM") ) { return STENCIL_BUFFER_BIT2_QCOM; }
		if (HX_FIELD_EQ(inName,"STENCIL_BUFFER_BIT3_QCOM") ) { return STENCIL_BUFFER_BIT3_QCOM; }
		if (HX_FIELD_EQ(inName,"STENCIL_BUFFER_BIT4_QCOM") ) { return STENCIL_BUFFER_BIT4_QCOM; }
		if (HX_FIELD_EQ(inName,"STENCIL_BUFFER_BIT5_QCOM") ) { return STENCIL_BUFFER_BIT5_QCOM; }
		if (HX_FIELD_EQ(inName,"STENCIL_BUFFER_BIT6_QCOM") ) { return STENCIL_BUFFER_BIT6_QCOM; }
		if (HX_FIELD_EQ(inName,"STENCIL_BUFFER_BIT7_QCOM") ) { return STENCIL_BUFFER_BIT7_QCOM; }
		break;
	case 28:
		if (HX_FIELD_EQ(inName,"MULTISAMPLE_BUFFER_BIT0_QCOM") ) { return MULTISAMPLE_BUFFER_BIT0_QCOM; }
		if (HX_FIELD_EQ(inName,"MULTISAMPLE_BUFFER_BIT1_QCOM") ) { return MULTISAMPLE_BUFFER_BIT1_QCOM; }
		if (HX_FIELD_EQ(inName,"MULTISAMPLE_BUFFER_BIT2_QCOM") ) { return MULTISAMPLE_BUFFER_BIT2_QCOM; }
		if (HX_FIELD_EQ(inName,"MULTISAMPLE_BUFFER_BIT3_QCOM") ) { return MULTISAMPLE_BUFFER_BIT3_QCOM; }
		if (HX_FIELD_EQ(inName,"MULTISAMPLE_BUFFER_BIT4_QCOM") ) { return MULTISAMPLE_BUFFER_BIT4_QCOM; }
		if (HX_FIELD_EQ(inName,"MULTISAMPLE_BUFFER_BIT5_QCOM") ) { return MULTISAMPLE_BUFFER_BIT5_QCOM; }
		if (HX_FIELD_EQ(inName,"MULTISAMPLE_BUFFER_BIT6_QCOM") ) { return MULTISAMPLE_BUFFER_BIT6_QCOM; }
		if (HX_FIELD_EQ(inName,"MULTISAMPLE_BUFFER_BIT7_QCOM") ) { return MULTISAMPLE_BUFFER_BIT7_QCOM; }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic QCOM_tiled_rendering_obj::__SetField(const ::String &inName,const Dynamic &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 22:
		if (HX_FIELD_EQ(inName,"COLOR_BUFFER_BIT0_QCOM") ) { COLOR_BUFFER_BIT0_QCOM=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"COLOR_BUFFER_BIT1_QCOM") ) { COLOR_BUFFER_BIT1_QCOM=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"COLOR_BUFFER_BIT2_QCOM") ) { COLOR_BUFFER_BIT2_QCOM=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"COLOR_BUFFER_BIT3_QCOM") ) { COLOR_BUFFER_BIT3_QCOM=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"COLOR_BUFFER_BIT4_QCOM") ) { COLOR_BUFFER_BIT4_QCOM=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"COLOR_BUFFER_BIT5_QCOM") ) { COLOR_BUFFER_BIT5_QCOM=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"COLOR_BUFFER_BIT6_QCOM") ) { COLOR_BUFFER_BIT6_QCOM=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"COLOR_BUFFER_BIT7_QCOM") ) { COLOR_BUFFER_BIT7_QCOM=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"DEPTH_BUFFER_BIT0_QCOM") ) { DEPTH_BUFFER_BIT0_QCOM=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"DEPTH_BUFFER_BIT1_QCOM") ) { DEPTH_BUFFER_BIT1_QCOM=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"DEPTH_BUFFER_BIT2_QCOM") ) { DEPTH_BUFFER_BIT2_QCOM=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"DEPTH_BUFFER_BIT3_QCOM") ) { DEPTH_BUFFER_BIT3_QCOM=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"DEPTH_BUFFER_BIT4_QCOM") ) { DEPTH_BUFFER_BIT4_QCOM=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"DEPTH_BUFFER_BIT5_QCOM") ) { DEPTH_BUFFER_BIT5_QCOM=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"DEPTH_BUFFER_BIT6_QCOM") ) { DEPTH_BUFFER_BIT6_QCOM=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"DEPTH_BUFFER_BIT7_QCOM") ) { DEPTH_BUFFER_BIT7_QCOM=inValue.Cast< int >(); return inValue; }
		break;
	case 24:
		if (HX_FIELD_EQ(inName,"STENCIL_BUFFER_BIT0_QCOM") ) { STENCIL_BUFFER_BIT0_QCOM=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"STENCIL_BUFFER_BIT1_QCOM") ) { STENCIL_BUFFER_BIT1_QCOM=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"STENCIL_BUFFER_BIT2_QCOM") ) { STENCIL_BUFFER_BIT2_QCOM=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"STENCIL_BUFFER_BIT3_QCOM") ) { STENCIL_BUFFER_BIT3_QCOM=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"STENCIL_BUFFER_BIT4_QCOM") ) { STENCIL_BUFFER_BIT4_QCOM=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"STENCIL_BUFFER_BIT5_QCOM") ) { STENCIL_BUFFER_BIT5_QCOM=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"STENCIL_BUFFER_BIT6_QCOM") ) { STENCIL_BUFFER_BIT6_QCOM=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"STENCIL_BUFFER_BIT7_QCOM") ) { STENCIL_BUFFER_BIT7_QCOM=inValue.Cast< int >(); return inValue; }
		break;
	case 28:
		if (HX_FIELD_EQ(inName,"MULTISAMPLE_BUFFER_BIT0_QCOM") ) { MULTISAMPLE_BUFFER_BIT0_QCOM=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"MULTISAMPLE_BUFFER_BIT1_QCOM") ) { MULTISAMPLE_BUFFER_BIT1_QCOM=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"MULTISAMPLE_BUFFER_BIT2_QCOM") ) { MULTISAMPLE_BUFFER_BIT2_QCOM=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"MULTISAMPLE_BUFFER_BIT3_QCOM") ) { MULTISAMPLE_BUFFER_BIT3_QCOM=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"MULTISAMPLE_BUFFER_BIT4_QCOM") ) { MULTISAMPLE_BUFFER_BIT4_QCOM=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"MULTISAMPLE_BUFFER_BIT5_QCOM") ) { MULTISAMPLE_BUFFER_BIT5_QCOM=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"MULTISAMPLE_BUFFER_BIT6_QCOM") ) { MULTISAMPLE_BUFFER_BIT6_QCOM=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"MULTISAMPLE_BUFFER_BIT7_QCOM") ) { MULTISAMPLE_BUFFER_BIT7_QCOM=inValue.Cast< int >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void QCOM_tiled_rendering_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("COLOR_BUFFER_BIT0_QCOM","\x09","\x35","\xdb","\x91"));
	outFields->push(HX_HCSTRING("COLOR_BUFFER_BIT1_QCOM","\x68","\x91","\x36","\xf8"));
	outFields->push(HX_HCSTRING("COLOR_BUFFER_BIT2_QCOM","\xc7","\xed","\x91","\x5e"));
	outFields->push(HX_HCSTRING("COLOR_BUFFER_BIT3_QCOM","\x26","\x4a","\xed","\xc4"));
	outFields->push(HX_HCSTRING("COLOR_BUFFER_BIT4_QCOM","\x85","\xa6","\x48","\x2b"));
	outFields->push(HX_HCSTRING("COLOR_BUFFER_BIT5_QCOM","\xe4","\x02","\xa4","\x91"));
	outFields->push(HX_HCSTRING("COLOR_BUFFER_BIT6_QCOM","\x43","\x5f","\xff","\xf7"));
	outFields->push(HX_HCSTRING("COLOR_BUFFER_BIT7_QCOM","\xa2","\xbb","\x5a","\x5e"));
	outFields->push(HX_HCSTRING("DEPTH_BUFFER_BIT0_QCOM","\x69","\x21","\x64","\xe0"));
	outFields->push(HX_HCSTRING("DEPTH_BUFFER_BIT1_QCOM","\xc8","\x7d","\xbf","\x46"));
	outFields->push(HX_HCSTRING("DEPTH_BUFFER_BIT2_QCOM","\x27","\xda","\x1a","\xad"));
	outFields->push(HX_HCSTRING("DEPTH_BUFFER_BIT3_QCOM","\x86","\x36","\x76","\x13"));
	outFields->push(HX_HCSTRING("DEPTH_BUFFER_BIT4_QCOM","\xe5","\x92","\xd1","\x79"));
	outFields->push(HX_HCSTRING("DEPTH_BUFFER_BIT5_QCOM","\x44","\xef","\x2c","\xe0"));
	outFields->push(HX_HCSTRING("DEPTH_BUFFER_BIT6_QCOM","\xa3","\x4b","\x88","\x46"));
	outFields->push(HX_HCSTRING("DEPTH_BUFFER_BIT7_QCOM","\x02","\xa8","\xe3","\xac"));
	outFields->push(HX_HCSTRING("STENCIL_BUFFER_BIT0_QCOM","\x50","\x10","\x03","\xab"));
	outFields->push(HX_HCSTRING("STENCIL_BUFFER_BIT1_QCOM","\xaf","\x6c","\x5e","\x11"));
	outFields->push(HX_HCSTRING("STENCIL_BUFFER_BIT2_QCOM","\x0e","\xc9","\xb9","\x77"));
	outFields->push(HX_HCSTRING("STENCIL_BUFFER_BIT3_QCOM","\x6d","\x25","\x15","\xde"));
	outFields->push(HX_HCSTRING("STENCIL_BUFFER_BIT4_QCOM","\xcc","\x81","\x70","\x44"));
	outFields->push(HX_HCSTRING("STENCIL_BUFFER_BIT5_QCOM","\x2b","\xde","\xcb","\xaa"));
	outFields->push(HX_HCSTRING("STENCIL_BUFFER_BIT6_QCOM","\x8a","\x3a","\x27","\x11"));
	outFields->push(HX_HCSTRING("STENCIL_BUFFER_BIT7_QCOM","\xe9","\x96","\x82","\x77"));
	outFields->push(HX_HCSTRING("MULTISAMPLE_BUFFER_BIT0_QCOM","\x09","\x87","\xd5","\xae"));
	outFields->push(HX_HCSTRING("MULTISAMPLE_BUFFER_BIT1_QCOM","\x68","\xe3","\x30","\x15"));
	outFields->push(HX_HCSTRING("MULTISAMPLE_BUFFER_BIT2_QCOM","\xc7","\x3f","\x8c","\x7b"));
	outFields->push(HX_HCSTRING("MULTISAMPLE_BUFFER_BIT3_QCOM","\x26","\x9c","\xe7","\xe1"));
	outFields->push(HX_HCSTRING("MULTISAMPLE_BUFFER_BIT4_QCOM","\x85","\xf8","\x42","\x48"));
	outFields->push(HX_HCSTRING("MULTISAMPLE_BUFFER_BIT5_QCOM","\xe4","\x54","\x9e","\xae"));
	outFields->push(HX_HCSTRING("MULTISAMPLE_BUFFER_BIT6_QCOM","\x43","\xb1","\xf9","\x14"));
	outFields->push(HX_HCSTRING("MULTISAMPLE_BUFFER_BIT7_QCOM","\xa2","\x0d","\x55","\x7b"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsInt,(int)offsetof(QCOM_tiled_rendering_obj,COLOR_BUFFER_BIT0_QCOM),HX_HCSTRING("COLOR_BUFFER_BIT0_QCOM","\x09","\x35","\xdb","\x91")},
	{hx::fsInt,(int)offsetof(QCOM_tiled_rendering_obj,COLOR_BUFFER_BIT1_QCOM),HX_HCSTRING("COLOR_BUFFER_BIT1_QCOM","\x68","\x91","\x36","\xf8")},
	{hx::fsInt,(int)offsetof(QCOM_tiled_rendering_obj,COLOR_BUFFER_BIT2_QCOM),HX_HCSTRING("COLOR_BUFFER_BIT2_QCOM","\xc7","\xed","\x91","\x5e")},
	{hx::fsInt,(int)offsetof(QCOM_tiled_rendering_obj,COLOR_BUFFER_BIT3_QCOM),HX_HCSTRING("COLOR_BUFFER_BIT3_QCOM","\x26","\x4a","\xed","\xc4")},
	{hx::fsInt,(int)offsetof(QCOM_tiled_rendering_obj,COLOR_BUFFER_BIT4_QCOM),HX_HCSTRING("COLOR_BUFFER_BIT4_QCOM","\x85","\xa6","\x48","\x2b")},
	{hx::fsInt,(int)offsetof(QCOM_tiled_rendering_obj,COLOR_BUFFER_BIT5_QCOM),HX_HCSTRING("COLOR_BUFFER_BIT5_QCOM","\xe4","\x02","\xa4","\x91")},
	{hx::fsInt,(int)offsetof(QCOM_tiled_rendering_obj,COLOR_BUFFER_BIT6_QCOM),HX_HCSTRING("COLOR_BUFFER_BIT6_QCOM","\x43","\x5f","\xff","\xf7")},
	{hx::fsInt,(int)offsetof(QCOM_tiled_rendering_obj,COLOR_BUFFER_BIT7_QCOM),HX_HCSTRING("COLOR_BUFFER_BIT7_QCOM","\xa2","\xbb","\x5a","\x5e")},
	{hx::fsInt,(int)offsetof(QCOM_tiled_rendering_obj,DEPTH_BUFFER_BIT0_QCOM),HX_HCSTRING("DEPTH_BUFFER_BIT0_QCOM","\x69","\x21","\x64","\xe0")},
	{hx::fsInt,(int)offsetof(QCOM_tiled_rendering_obj,DEPTH_BUFFER_BIT1_QCOM),HX_HCSTRING("DEPTH_BUFFER_BIT1_QCOM","\xc8","\x7d","\xbf","\x46")},
	{hx::fsInt,(int)offsetof(QCOM_tiled_rendering_obj,DEPTH_BUFFER_BIT2_QCOM),HX_HCSTRING("DEPTH_BUFFER_BIT2_QCOM","\x27","\xda","\x1a","\xad")},
	{hx::fsInt,(int)offsetof(QCOM_tiled_rendering_obj,DEPTH_BUFFER_BIT3_QCOM),HX_HCSTRING("DEPTH_BUFFER_BIT3_QCOM","\x86","\x36","\x76","\x13")},
	{hx::fsInt,(int)offsetof(QCOM_tiled_rendering_obj,DEPTH_BUFFER_BIT4_QCOM),HX_HCSTRING("DEPTH_BUFFER_BIT4_QCOM","\xe5","\x92","\xd1","\x79")},
	{hx::fsInt,(int)offsetof(QCOM_tiled_rendering_obj,DEPTH_BUFFER_BIT5_QCOM),HX_HCSTRING("DEPTH_BUFFER_BIT5_QCOM","\x44","\xef","\x2c","\xe0")},
	{hx::fsInt,(int)offsetof(QCOM_tiled_rendering_obj,DEPTH_BUFFER_BIT6_QCOM),HX_HCSTRING("DEPTH_BUFFER_BIT6_QCOM","\xa3","\x4b","\x88","\x46")},
	{hx::fsInt,(int)offsetof(QCOM_tiled_rendering_obj,DEPTH_BUFFER_BIT7_QCOM),HX_HCSTRING("DEPTH_BUFFER_BIT7_QCOM","\x02","\xa8","\xe3","\xac")},
	{hx::fsInt,(int)offsetof(QCOM_tiled_rendering_obj,STENCIL_BUFFER_BIT0_QCOM),HX_HCSTRING("STENCIL_BUFFER_BIT0_QCOM","\x50","\x10","\x03","\xab")},
	{hx::fsInt,(int)offsetof(QCOM_tiled_rendering_obj,STENCIL_BUFFER_BIT1_QCOM),HX_HCSTRING("STENCIL_BUFFER_BIT1_QCOM","\xaf","\x6c","\x5e","\x11")},
	{hx::fsInt,(int)offsetof(QCOM_tiled_rendering_obj,STENCIL_BUFFER_BIT2_QCOM),HX_HCSTRING("STENCIL_BUFFER_BIT2_QCOM","\x0e","\xc9","\xb9","\x77")},
	{hx::fsInt,(int)offsetof(QCOM_tiled_rendering_obj,STENCIL_BUFFER_BIT3_QCOM),HX_HCSTRING("STENCIL_BUFFER_BIT3_QCOM","\x6d","\x25","\x15","\xde")},
	{hx::fsInt,(int)offsetof(QCOM_tiled_rendering_obj,STENCIL_BUFFER_BIT4_QCOM),HX_HCSTRING("STENCIL_BUFFER_BIT4_QCOM","\xcc","\x81","\x70","\x44")},
	{hx::fsInt,(int)offsetof(QCOM_tiled_rendering_obj,STENCIL_BUFFER_BIT5_QCOM),HX_HCSTRING("STENCIL_BUFFER_BIT5_QCOM","\x2b","\xde","\xcb","\xaa")},
	{hx::fsInt,(int)offsetof(QCOM_tiled_rendering_obj,STENCIL_BUFFER_BIT6_QCOM),HX_HCSTRING("STENCIL_BUFFER_BIT6_QCOM","\x8a","\x3a","\x27","\x11")},
	{hx::fsInt,(int)offsetof(QCOM_tiled_rendering_obj,STENCIL_BUFFER_BIT7_QCOM),HX_HCSTRING("STENCIL_BUFFER_BIT7_QCOM","\xe9","\x96","\x82","\x77")},
	{hx::fsInt,(int)offsetof(QCOM_tiled_rendering_obj,MULTISAMPLE_BUFFER_BIT0_QCOM),HX_HCSTRING("MULTISAMPLE_BUFFER_BIT0_QCOM","\x09","\x87","\xd5","\xae")},
	{hx::fsInt,(int)offsetof(QCOM_tiled_rendering_obj,MULTISAMPLE_BUFFER_BIT1_QCOM),HX_HCSTRING("MULTISAMPLE_BUFFER_BIT1_QCOM","\x68","\xe3","\x30","\x15")},
	{hx::fsInt,(int)offsetof(QCOM_tiled_rendering_obj,MULTISAMPLE_BUFFER_BIT2_QCOM),HX_HCSTRING("MULTISAMPLE_BUFFER_BIT2_QCOM","\xc7","\x3f","\x8c","\x7b")},
	{hx::fsInt,(int)offsetof(QCOM_tiled_rendering_obj,MULTISAMPLE_BUFFER_BIT3_QCOM),HX_HCSTRING("MULTISAMPLE_BUFFER_BIT3_QCOM","\x26","\x9c","\xe7","\xe1")},
	{hx::fsInt,(int)offsetof(QCOM_tiled_rendering_obj,MULTISAMPLE_BUFFER_BIT4_QCOM),HX_HCSTRING("MULTISAMPLE_BUFFER_BIT4_QCOM","\x85","\xf8","\x42","\x48")},
	{hx::fsInt,(int)offsetof(QCOM_tiled_rendering_obj,MULTISAMPLE_BUFFER_BIT5_QCOM),HX_HCSTRING("MULTISAMPLE_BUFFER_BIT5_QCOM","\xe4","\x54","\x9e","\xae")},
	{hx::fsInt,(int)offsetof(QCOM_tiled_rendering_obj,MULTISAMPLE_BUFFER_BIT6_QCOM),HX_HCSTRING("MULTISAMPLE_BUFFER_BIT6_QCOM","\x43","\xb1","\xf9","\x14")},
	{hx::fsInt,(int)offsetof(QCOM_tiled_rendering_obj,MULTISAMPLE_BUFFER_BIT7_QCOM),HX_HCSTRING("MULTISAMPLE_BUFFER_BIT7_QCOM","\xa2","\x0d","\x55","\x7b")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo *sStaticStorageInfo = 0;
#endif

static ::String sMemberFields[] = {
	HX_HCSTRING("COLOR_BUFFER_BIT0_QCOM","\x09","\x35","\xdb","\x91"),
	HX_HCSTRING("COLOR_BUFFER_BIT1_QCOM","\x68","\x91","\x36","\xf8"),
	HX_HCSTRING("COLOR_BUFFER_BIT2_QCOM","\xc7","\xed","\x91","\x5e"),
	HX_HCSTRING("COLOR_BUFFER_BIT3_QCOM","\x26","\x4a","\xed","\xc4"),
	HX_HCSTRING("COLOR_BUFFER_BIT4_QCOM","\x85","\xa6","\x48","\x2b"),
	HX_HCSTRING("COLOR_BUFFER_BIT5_QCOM","\xe4","\x02","\xa4","\x91"),
	HX_HCSTRING("COLOR_BUFFER_BIT6_QCOM","\x43","\x5f","\xff","\xf7"),
	HX_HCSTRING("COLOR_BUFFER_BIT7_QCOM","\xa2","\xbb","\x5a","\x5e"),
	HX_HCSTRING("DEPTH_BUFFER_BIT0_QCOM","\x69","\x21","\x64","\xe0"),
	HX_HCSTRING("DEPTH_BUFFER_BIT1_QCOM","\xc8","\x7d","\xbf","\x46"),
	HX_HCSTRING("DEPTH_BUFFER_BIT2_QCOM","\x27","\xda","\x1a","\xad"),
	HX_HCSTRING("DEPTH_BUFFER_BIT3_QCOM","\x86","\x36","\x76","\x13"),
	HX_HCSTRING("DEPTH_BUFFER_BIT4_QCOM","\xe5","\x92","\xd1","\x79"),
	HX_HCSTRING("DEPTH_BUFFER_BIT5_QCOM","\x44","\xef","\x2c","\xe0"),
	HX_HCSTRING("DEPTH_BUFFER_BIT6_QCOM","\xa3","\x4b","\x88","\x46"),
	HX_HCSTRING("DEPTH_BUFFER_BIT7_QCOM","\x02","\xa8","\xe3","\xac"),
	HX_HCSTRING("STENCIL_BUFFER_BIT0_QCOM","\x50","\x10","\x03","\xab"),
	HX_HCSTRING("STENCIL_BUFFER_BIT1_QCOM","\xaf","\x6c","\x5e","\x11"),
	HX_HCSTRING("STENCIL_BUFFER_BIT2_QCOM","\x0e","\xc9","\xb9","\x77"),
	HX_HCSTRING("STENCIL_BUFFER_BIT3_QCOM","\x6d","\x25","\x15","\xde"),
	HX_HCSTRING("STENCIL_BUFFER_BIT4_QCOM","\xcc","\x81","\x70","\x44"),
	HX_HCSTRING("STENCIL_BUFFER_BIT5_QCOM","\x2b","\xde","\xcb","\xaa"),
	HX_HCSTRING("STENCIL_BUFFER_BIT6_QCOM","\x8a","\x3a","\x27","\x11"),
	HX_HCSTRING("STENCIL_BUFFER_BIT7_QCOM","\xe9","\x96","\x82","\x77"),
	HX_HCSTRING("MULTISAMPLE_BUFFER_BIT0_QCOM","\x09","\x87","\xd5","\xae"),
	HX_HCSTRING("MULTISAMPLE_BUFFER_BIT1_QCOM","\x68","\xe3","\x30","\x15"),
	HX_HCSTRING("MULTISAMPLE_BUFFER_BIT2_QCOM","\xc7","\x3f","\x8c","\x7b"),
	HX_HCSTRING("MULTISAMPLE_BUFFER_BIT3_QCOM","\x26","\x9c","\xe7","\xe1"),
	HX_HCSTRING("MULTISAMPLE_BUFFER_BIT4_QCOM","\x85","\xf8","\x42","\x48"),
	HX_HCSTRING("MULTISAMPLE_BUFFER_BIT5_QCOM","\xe4","\x54","\x9e","\xae"),
	HX_HCSTRING("MULTISAMPLE_BUFFER_BIT6_QCOM","\x43","\xb1","\xf9","\x14"),
	HX_HCSTRING("MULTISAMPLE_BUFFER_BIT7_QCOM","\xa2","\x0d","\x55","\x7b"),
	::String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(QCOM_tiled_rendering_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(QCOM_tiled_rendering_obj::__mClass,"__mClass");
};

#endif

hx::Class QCOM_tiled_rendering_obj::__mClass;

void QCOM_tiled_rendering_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("lime.graphics.opengl.ext.QCOM_tiled_rendering","\x96","\x7e","\x69","\xba");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = hx::Class_obj::dupFunctions(sMemberFields);
	__mClass->mCanCast = hx::TCanCast< QCOM_tiled_rendering_obj >;
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
