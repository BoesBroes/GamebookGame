#include <hxcpp.h>

#ifndef INCLUDED_lime_graphics_opengl_ext_NV_draw_buffers
#include <lime/graphics/opengl/ext/NV_draw_buffers.h>
#endif
namespace lime{
namespace graphics{
namespace opengl{
namespace ext{

Void NV_draw_buffers_obj::__construct()
{
HX_STACK_FRAME("lime.graphics.opengl.ext.NV_draw_buffers","new",0xc657799f,"lime.graphics.opengl.ext.NV_draw_buffers.new","lime/graphics/opengl/ext/NV_draw_buffers.hx",6,0x692217d3)
HX_STACK_THIS(this)
{
	HX_STACK_LINE(41)
	this->COLOR_ATTACHMENT15_NV = (int)36079;
	HX_STACK_LINE(40)
	this->COLOR_ATTACHMENT14_NV = (int)36078;
	HX_STACK_LINE(39)
	this->COLOR_ATTACHMENT13_NV = (int)36077;
	HX_STACK_LINE(38)
	this->COLOR_ATTACHMENT12_NV = (int)36076;
	HX_STACK_LINE(37)
	this->COLOR_ATTACHMENT11_NV = (int)36075;
	HX_STACK_LINE(36)
	this->COLOR_ATTACHMENT10_NV = (int)36074;
	HX_STACK_LINE(35)
	this->COLOR_ATTACHMENT9_NV = (int)36073;
	HX_STACK_LINE(34)
	this->COLOR_ATTACHMENT8_NV = (int)36072;
	HX_STACK_LINE(33)
	this->COLOR_ATTACHMENT7_NV = (int)36071;
	HX_STACK_LINE(32)
	this->COLOR_ATTACHMENT6_NV = (int)36070;
	HX_STACK_LINE(31)
	this->COLOR_ATTACHMENT5_NV = (int)36069;
	HX_STACK_LINE(30)
	this->COLOR_ATTACHMENT4_NV = (int)36068;
	HX_STACK_LINE(29)
	this->COLOR_ATTACHMENT3_NV = (int)36067;
	HX_STACK_LINE(28)
	this->COLOR_ATTACHMENT2_NV = (int)36066;
	HX_STACK_LINE(27)
	this->COLOR_ATTACHMENT1_NV = (int)36065;
	HX_STACK_LINE(26)
	this->COLOR_ATTACHMENT0_NV = (int)36064;
	HX_STACK_LINE(25)
	this->DRAW_BUFFER15_NV = (int)34868;
	HX_STACK_LINE(24)
	this->DRAW_BUFFER14_NV = (int)34867;
	HX_STACK_LINE(23)
	this->DRAW_BUFFER13_NV = (int)34866;
	HX_STACK_LINE(22)
	this->DRAW_BUFFER12_NV = (int)34865;
	HX_STACK_LINE(21)
	this->DRAW_BUFFER11_NV = (int)34864;
	HX_STACK_LINE(20)
	this->DRAW_BUFFER10_NV = (int)34863;
	HX_STACK_LINE(19)
	this->DRAW_BUFFER9_NV = (int)34862;
	HX_STACK_LINE(18)
	this->DRAW_BUFFER8_NV = (int)34861;
	HX_STACK_LINE(17)
	this->DRAW_BUFFER7_NV = (int)34860;
	HX_STACK_LINE(16)
	this->DRAW_BUFFER6_NV = (int)34859;
	HX_STACK_LINE(15)
	this->DRAW_BUFFER5_NV = (int)34858;
	HX_STACK_LINE(14)
	this->DRAW_BUFFER4_NV = (int)34857;
	HX_STACK_LINE(13)
	this->DRAW_BUFFER3_NV = (int)34856;
	HX_STACK_LINE(12)
	this->DRAW_BUFFER2_NV = (int)34855;
	HX_STACK_LINE(11)
	this->DRAW_BUFFER1_NV = (int)34854;
	HX_STACK_LINE(10)
	this->DRAW_BUFFER0_NV = (int)34853;
	HX_STACK_LINE(9)
	this->MAX_DRAW_BUFFERS_NV = (int)34852;
}
;
	return null();
}

//NV_draw_buffers_obj::~NV_draw_buffers_obj() { }

Dynamic NV_draw_buffers_obj::__CreateEmpty() { return  new NV_draw_buffers_obj; }
hx::ObjectPtr< NV_draw_buffers_obj > NV_draw_buffers_obj::__new()
{  hx::ObjectPtr< NV_draw_buffers_obj > _result_ = new NV_draw_buffers_obj();
	_result_->__construct();
	return _result_;}

Dynamic NV_draw_buffers_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< NV_draw_buffers_obj > _result_ = new NV_draw_buffers_obj();
	_result_->__construct();
	return _result_;}


NV_draw_buffers_obj::NV_draw_buffers_obj()
{
}

Dynamic NV_draw_buffers_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 15:
		if (HX_FIELD_EQ(inName,"DRAW_BUFFER0_NV") ) { return DRAW_BUFFER0_NV; }
		if (HX_FIELD_EQ(inName,"DRAW_BUFFER1_NV") ) { return DRAW_BUFFER1_NV; }
		if (HX_FIELD_EQ(inName,"DRAW_BUFFER2_NV") ) { return DRAW_BUFFER2_NV; }
		if (HX_FIELD_EQ(inName,"DRAW_BUFFER3_NV") ) { return DRAW_BUFFER3_NV; }
		if (HX_FIELD_EQ(inName,"DRAW_BUFFER4_NV") ) { return DRAW_BUFFER4_NV; }
		if (HX_FIELD_EQ(inName,"DRAW_BUFFER5_NV") ) { return DRAW_BUFFER5_NV; }
		if (HX_FIELD_EQ(inName,"DRAW_BUFFER6_NV") ) { return DRAW_BUFFER6_NV; }
		if (HX_FIELD_EQ(inName,"DRAW_BUFFER7_NV") ) { return DRAW_BUFFER7_NV; }
		if (HX_FIELD_EQ(inName,"DRAW_BUFFER8_NV") ) { return DRAW_BUFFER8_NV; }
		if (HX_FIELD_EQ(inName,"DRAW_BUFFER9_NV") ) { return DRAW_BUFFER9_NV; }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"DRAW_BUFFER10_NV") ) { return DRAW_BUFFER10_NV; }
		if (HX_FIELD_EQ(inName,"DRAW_BUFFER11_NV") ) { return DRAW_BUFFER11_NV; }
		if (HX_FIELD_EQ(inName,"DRAW_BUFFER12_NV") ) { return DRAW_BUFFER12_NV; }
		if (HX_FIELD_EQ(inName,"DRAW_BUFFER13_NV") ) { return DRAW_BUFFER13_NV; }
		if (HX_FIELD_EQ(inName,"DRAW_BUFFER14_NV") ) { return DRAW_BUFFER14_NV; }
		if (HX_FIELD_EQ(inName,"DRAW_BUFFER15_NV") ) { return DRAW_BUFFER15_NV; }
		break;
	case 19:
		if (HX_FIELD_EQ(inName,"MAX_DRAW_BUFFERS_NV") ) { return MAX_DRAW_BUFFERS_NV; }
		break;
	case 20:
		if (HX_FIELD_EQ(inName,"COLOR_ATTACHMENT0_NV") ) { return COLOR_ATTACHMENT0_NV; }
		if (HX_FIELD_EQ(inName,"COLOR_ATTACHMENT1_NV") ) { return COLOR_ATTACHMENT1_NV; }
		if (HX_FIELD_EQ(inName,"COLOR_ATTACHMENT2_NV") ) { return COLOR_ATTACHMENT2_NV; }
		if (HX_FIELD_EQ(inName,"COLOR_ATTACHMENT3_NV") ) { return COLOR_ATTACHMENT3_NV; }
		if (HX_FIELD_EQ(inName,"COLOR_ATTACHMENT4_NV") ) { return COLOR_ATTACHMENT4_NV; }
		if (HX_FIELD_EQ(inName,"COLOR_ATTACHMENT5_NV") ) { return COLOR_ATTACHMENT5_NV; }
		if (HX_FIELD_EQ(inName,"COLOR_ATTACHMENT6_NV") ) { return COLOR_ATTACHMENT6_NV; }
		if (HX_FIELD_EQ(inName,"COLOR_ATTACHMENT7_NV") ) { return COLOR_ATTACHMENT7_NV; }
		if (HX_FIELD_EQ(inName,"COLOR_ATTACHMENT8_NV") ) { return COLOR_ATTACHMENT8_NV; }
		if (HX_FIELD_EQ(inName,"COLOR_ATTACHMENT9_NV") ) { return COLOR_ATTACHMENT9_NV; }
		break;
	case 21:
		if (HX_FIELD_EQ(inName,"COLOR_ATTACHMENT10_NV") ) { return COLOR_ATTACHMENT10_NV; }
		if (HX_FIELD_EQ(inName,"COLOR_ATTACHMENT11_NV") ) { return COLOR_ATTACHMENT11_NV; }
		if (HX_FIELD_EQ(inName,"COLOR_ATTACHMENT12_NV") ) { return COLOR_ATTACHMENT12_NV; }
		if (HX_FIELD_EQ(inName,"COLOR_ATTACHMENT13_NV") ) { return COLOR_ATTACHMENT13_NV; }
		if (HX_FIELD_EQ(inName,"COLOR_ATTACHMENT14_NV") ) { return COLOR_ATTACHMENT14_NV; }
		if (HX_FIELD_EQ(inName,"COLOR_ATTACHMENT15_NV") ) { return COLOR_ATTACHMENT15_NV; }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic NV_draw_buffers_obj::__SetField(const ::String &inName,const Dynamic &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 15:
		if (HX_FIELD_EQ(inName,"DRAW_BUFFER0_NV") ) { DRAW_BUFFER0_NV=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"DRAW_BUFFER1_NV") ) { DRAW_BUFFER1_NV=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"DRAW_BUFFER2_NV") ) { DRAW_BUFFER2_NV=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"DRAW_BUFFER3_NV") ) { DRAW_BUFFER3_NV=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"DRAW_BUFFER4_NV") ) { DRAW_BUFFER4_NV=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"DRAW_BUFFER5_NV") ) { DRAW_BUFFER5_NV=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"DRAW_BUFFER6_NV") ) { DRAW_BUFFER6_NV=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"DRAW_BUFFER7_NV") ) { DRAW_BUFFER7_NV=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"DRAW_BUFFER8_NV") ) { DRAW_BUFFER8_NV=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"DRAW_BUFFER9_NV") ) { DRAW_BUFFER9_NV=inValue.Cast< int >(); return inValue; }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"DRAW_BUFFER10_NV") ) { DRAW_BUFFER10_NV=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"DRAW_BUFFER11_NV") ) { DRAW_BUFFER11_NV=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"DRAW_BUFFER12_NV") ) { DRAW_BUFFER12_NV=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"DRAW_BUFFER13_NV") ) { DRAW_BUFFER13_NV=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"DRAW_BUFFER14_NV") ) { DRAW_BUFFER14_NV=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"DRAW_BUFFER15_NV") ) { DRAW_BUFFER15_NV=inValue.Cast< int >(); return inValue; }
		break;
	case 19:
		if (HX_FIELD_EQ(inName,"MAX_DRAW_BUFFERS_NV") ) { MAX_DRAW_BUFFERS_NV=inValue.Cast< int >(); return inValue; }
		break;
	case 20:
		if (HX_FIELD_EQ(inName,"COLOR_ATTACHMENT0_NV") ) { COLOR_ATTACHMENT0_NV=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"COLOR_ATTACHMENT1_NV") ) { COLOR_ATTACHMENT1_NV=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"COLOR_ATTACHMENT2_NV") ) { COLOR_ATTACHMENT2_NV=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"COLOR_ATTACHMENT3_NV") ) { COLOR_ATTACHMENT3_NV=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"COLOR_ATTACHMENT4_NV") ) { COLOR_ATTACHMENT4_NV=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"COLOR_ATTACHMENT5_NV") ) { COLOR_ATTACHMENT5_NV=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"COLOR_ATTACHMENT6_NV") ) { COLOR_ATTACHMENT6_NV=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"COLOR_ATTACHMENT7_NV") ) { COLOR_ATTACHMENT7_NV=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"COLOR_ATTACHMENT8_NV") ) { COLOR_ATTACHMENT8_NV=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"COLOR_ATTACHMENT9_NV") ) { COLOR_ATTACHMENT9_NV=inValue.Cast< int >(); return inValue; }
		break;
	case 21:
		if (HX_FIELD_EQ(inName,"COLOR_ATTACHMENT10_NV") ) { COLOR_ATTACHMENT10_NV=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"COLOR_ATTACHMENT11_NV") ) { COLOR_ATTACHMENT11_NV=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"COLOR_ATTACHMENT12_NV") ) { COLOR_ATTACHMENT12_NV=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"COLOR_ATTACHMENT13_NV") ) { COLOR_ATTACHMENT13_NV=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"COLOR_ATTACHMENT14_NV") ) { COLOR_ATTACHMENT14_NV=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"COLOR_ATTACHMENT15_NV") ) { COLOR_ATTACHMENT15_NV=inValue.Cast< int >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void NV_draw_buffers_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("MAX_DRAW_BUFFERS_NV","\x94","\x39","\x76","\x92"));
	outFields->push(HX_HCSTRING("DRAW_BUFFER0_NV","\xd2","\x90","\x55","\x5c"));
	outFields->push(HX_HCSTRING("DRAW_BUFFER1_NV","\x71","\xc7","\xfe","\x5c"));
	outFields->push(HX_HCSTRING("DRAW_BUFFER2_NV","\x10","\xfe","\xa7","\x5d"));
	outFields->push(HX_HCSTRING("DRAW_BUFFER3_NV","\xaf","\x34","\x51","\x5e"));
	outFields->push(HX_HCSTRING("DRAW_BUFFER4_NV","\x4e","\x6b","\xfa","\x5e"));
	outFields->push(HX_HCSTRING("DRAW_BUFFER5_NV","\xed","\xa1","\xa3","\x5f"));
	outFields->push(HX_HCSTRING("DRAW_BUFFER6_NV","\x8c","\xd8","\x4c","\x60"));
	outFields->push(HX_HCSTRING("DRAW_BUFFER7_NV","\x2b","\x0f","\xf6","\x60"));
	outFields->push(HX_HCSTRING("DRAW_BUFFER8_NV","\xca","\x45","\x9f","\x61"));
	outFields->push(HX_HCSTRING("DRAW_BUFFER9_NV","\x69","\x7c","\x48","\x62"));
	outFields->push(HX_HCSTRING("DRAW_BUFFER10_NV","\xed","\x93","\xeb","\xe2"));
	outFields->push(HX_HCSTRING("DRAW_BUFFER11_NV","\x8c","\xca","\x94","\xe3"));
	outFields->push(HX_HCSTRING("DRAW_BUFFER12_NV","\x2b","\x01","\x3e","\xe4"));
	outFields->push(HX_HCSTRING("DRAW_BUFFER13_NV","\xca","\x37","\xe7","\xe4"));
	outFields->push(HX_HCSTRING("DRAW_BUFFER14_NV","\x69","\x6e","\x90","\xe5"));
	outFields->push(HX_HCSTRING("DRAW_BUFFER15_NV","\x08","\xa5","\x39","\xe6"));
	outFields->push(HX_HCSTRING("COLOR_ATTACHMENT0_NV","\x56","\xc4","\xe4","\xab"));
	outFields->push(HX_HCSTRING("COLOR_ATTACHMENT1_NV","\xf5","\xfa","\x8d","\xac"));
	outFields->push(HX_HCSTRING("COLOR_ATTACHMENT2_NV","\x94","\x31","\x37","\xad"));
	outFields->push(HX_HCSTRING("COLOR_ATTACHMENT3_NV","\x33","\x68","\xe0","\xad"));
	outFields->push(HX_HCSTRING("COLOR_ATTACHMENT4_NV","\xd2","\x9e","\x89","\xae"));
	outFields->push(HX_HCSTRING("COLOR_ATTACHMENT5_NV","\x71","\xd5","\x32","\xaf"));
	outFields->push(HX_HCSTRING("COLOR_ATTACHMENT6_NV","\x10","\x0c","\xdc","\xaf"));
	outFields->push(HX_HCSTRING("COLOR_ATTACHMENT7_NV","\xaf","\x42","\x85","\xb0"));
	outFields->push(HX_HCSTRING("COLOR_ATTACHMENT8_NV","\x4e","\x79","\x2e","\xb1"));
	outFields->push(HX_HCSTRING("COLOR_ATTACHMENT9_NV","\xed","\xaf","\xd7","\xb1"));
	outFields->push(HX_HCSTRING("COLOR_ATTACHMENT10_NV","\xe9","\x73","\xa9","\x30"));
	outFields->push(HX_HCSTRING("COLOR_ATTACHMENT11_NV","\x88","\xaa","\x52","\x31"));
	outFields->push(HX_HCSTRING("COLOR_ATTACHMENT12_NV","\x27","\xe1","\xfb","\x31"));
	outFields->push(HX_HCSTRING("COLOR_ATTACHMENT13_NV","\xc6","\x17","\xa5","\x32"));
	outFields->push(HX_HCSTRING("COLOR_ATTACHMENT14_NV","\x65","\x4e","\x4e","\x33"));
	outFields->push(HX_HCSTRING("COLOR_ATTACHMENT15_NV","\x04","\x85","\xf7","\x33"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsInt,(int)offsetof(NV_draw_buffers_obj,MAX_DRAW_BUFFERS_NV),HX_HCSTRING("MAX_DRAW_BUFFERS_NV","\x94","\x39","\x76","\x92")},
	{hx::fsInt,(int)offsetof(NV_draw_buffers_obj,DRAW_BUFFER0_NV),HX_HCSTRING("DRAW_BUFFER0_NV","\xd2","\x90","\x55","\x5c")},
	{hx::fsInt,(int)offsetof(NV_draw_buffers_obj,DRAW_BUFFER1_NV),HX_HCSTRING("DRAW_BUFFER1_NV","\x71","\xc7","\xfe","\x5c")},
	{hx::fsInt,(int)offsetof(NV_draw_buffers_obj,DRAW_BUFFER2_NV),HX_HCSTRING("DRAW_BUFFER2_NV","\x10","\xfe","\xa7","\x5d")},
	{hx::fsInt,(int)offsetof(NV_draw_buffers_obj,DRAW_BUFFER3_NV),HX_HCSTRING("DRAW_BUFFER3_NV","\xaf","\x34","\x51","\x5e")},
	{hx::fsInt,(int)offsetof(NV_draw_buffers_obj,DRAW_BUFFER4_NV),HX_HCSTRING("DRAW_BUFFER4_NV","\x4e","\x6b","\xfa","\x5e")},
	{hx::fsInt,(int)offsetof(NV_draw_buffers_obj,DRAW_BUFFER5_NV),HX_HCSTRING("DRAW_BUFFER5_NV","\xed","\xa1","\xa3","\x5f")},
	{hx::fsInt,(int)offsetof(NV_draw_buffers_obj,DRAW_BUFFER6_NV),HX_HCSTRING("DRAW_BUFFER6_NV","\x8c","\xd8","\x4c","\x60")},
	{hx::fsInt,(int)offsetof(NV_draw_buffers_obj,DRAW_BUFFER7_NV),HX_HCSTRING("DRAW_BUFFER7_NV","\x2b","\x0f","\xf6","\x60")},
	{hx::fsInt,(int)offsetof(NV_draw_buffers_obj,DRAW_BUFFER8_NV),HX_HCSTRING("DRAW_BUFFER8_NV","\xca","\x45","\x9f","\x61")},
	{hx::fsInt,(int)offsetof(NV_draw_buffers_obj,DRAW_BUFFER9_NV),HX_HCSTRING("DRAW_BUFFER9_NV","\x69","\x7c","\x48","\x62")},
	{hx::fsInt,(int)offsetof(NV_draw_buffers_obj,DRAW_BUFFER10_NV),HX_HCSTRING("DRAW_BUFFER10_NV","\xed","\x93","\xeb","\xe2")},
	{hx::fsInt,(int)offsetof(NV_draw_buffers_obj,DRAW_BUFFER11_NV),HX_HCSTRING("DRAW_BUFFER11_NV","\x8c","\xca","\x94","\xe3")},
	{hx::fsInt,(int)offsetof(NV_draw_buffers_obj,DRAW_BUFFER12_NV),HX_HCSTRING("DRAW_BUFFER12_NV","\x2b","\x01","\x3e","\xe4")},
	{hx::fsInt,(int)offsetof(NV_draw_buffers_obj,DRAW_BUFFER13_NV),HX_HCSTRING("DRAW_BUFFER13_NV","\xca","\x37","\xe7","\xe4")},
	{hx::fsInt,(int)offsetof(NV_draw_buffers_obj,DRAW_BUFFER14_NV),HX_HCSTRING("DRAW_BUFFER14_NV","\x69","\x6e","\x90","\xe5")},
	{hx::fsInt,(int)offsetof(NV_draw_buffers_obj,DRAW_BUFFER15_NV),HX_HCSTRING("DRAW_BUFFER15_NV","\x08","\xa5","\x39","\xe6")},
	{hx::fsInt,(int)offsetof(NV_draw_buffers_obj,COLOR_ATTACHMENT0_NV),HX_HCSTRING("COLOR_ATTACHMENT0_NV","\x56","\xc4","\xe4","\xab")},
	{hx::fsInt,(int)offsetof(NV_draw_buffers_obj,COLOR_ATTACHMENT1_NV),HX_HCSTRING("COLOR_ATTACHMENT1_NV","\xf5","\xfa","\x8d","\xac")},
	{hx::fsInt,(int)offsetof(NV_draw_buffers_obj,COLOR_ATTACHMENT2_NV),HX_HCSTRING("COLOR_ATTACHMENT2_NV","\x94","\x31","\x37","\xad")},
	{hx::fsInt,(int)offsetof(NV_draw_buffers_obj,COLOR_ATTACHMENT3_NV),HX_HCSTRING("COLOR_ATTACHMENT3_NV","\x33","\x68","\xe0","\xad")},
	{hx::fsInt,(int)offsetof(NV_draw_buffers_obj,COLOR_ATTACHMENT4_NV),HX_HCSTRING("COLOR_ATTACHMENT4_NV","\xd2","\x9e","\x89","\xae")},
	{hx::fsInt,(int)offsetof(NV_draw_buffers_obj,COLOR_ATTACHMENT5_NV),HX_HCSTRING("COLOR_ATTACHMENT5_NV","\x71","\xd5","\x32","\xaf")},
	{hx::fsInt,(int)offsetof(NV_draw_buffers_obj,COLOR_ATTACHMENT6_NV),HX_HCSTRING("COLOR_ATTACHMENT6_NV","\x10","\x0c","\xdc","\xaf")},
	{hx::fsInt,(int)offsetof(NV_draw_buffers_obj,COLOR_ATTACHMENT7_NV),HX_HCSTRING("COLOR_ATTACHMENT7_NV","\xaf","\x42","\x85","\xb0")},
	{hx::fsInt,(int)offsetof(NV_draw_buffers_obj,COLOR_ATTACHMENT8_NV),HX_HCSTRING("COLOR_ATTACHMENT8_NV","\x4e","\x79","\x2e","\xb1")},
	{hx::fsInt,(int)offsetof(NV_draw_buffers_obj,COLOR_ATTACHMENT9_NV),HX_HCSTRING("COLOR_ATTACHMENT9_NV","\xed","\xaf","\xd7","\xb1")},
	{hx::fsInt,(int)offsetof(NV_draw_buffers_obj,COLOR_ATTACHMENT10_NV),HX_HCSTRING("COLOR_ATTACHMENT10_NV","\xe9","\x73","\xa9","\x30")},
	{hx::fsInt,(int)offsetof(NV_draw_buffers_obj,COLOR_ATTACHMENT11_NV),HX_HCSTRING("COLOR_ATTACHMENT11_NV","\x88","\xaa","\x52","\x31")},
	{hx::fsInt,(int)offsetof(NV_draw_buffers_obj,COLOR_ATTACHMENT12_NV),HX_HCSTRING("COLOR_ATTACHMENT12_NV","\x27","\xe1","\xfb","\x31")},
	{hx::fsInt,(int)offsetof(NV_draw_buffers_obj,COLOR_ATTACHMENT13_NV),HX_HCSTRING("COLOR_ATTACHMENT13_NV","\xc6","\x17","\xa5","\x32")},
	{hx::fsInt,(int)offsetof(NV_draw_buffers_obj,COLOR_ATTACHMENT14_NV),HX_HCSTRING("COLOR_ATTACHMENT14_NV","\x65","\x4e","\x4e","\x33")},
	{hx::fsInt,(int)offsetof(NV_draw_buffers_obj,COLOR_ATTACHMENT15_NV),HX_HCSTRING("COLOR_ATTACHMENT15_NV","\x04","\x85","\xf7","\x33")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo *sStaticStorageInfo = 0;
#endif

static ::String sMemberFields[] = {
	HX_HCSTRING("MAX_DRAW_BUFFERS_NV","\x94","\x39","\x76","\x92"),
	HX_HCSTRING("DRAW_BUFFER0_NV","\xd2","\x90","\x55","\x5c"),
	HX_HCSTRING("DRAW_BUFFER1_NV","\x71","\xc7","\xfe","\x5c"),
	HX_HCSTRING("DRAW_BUFFER2_NV","\x10","\xfe","\xa7","\x5d"),
	HX_HCSTRING("DRAW_BUFFER3_NV","\xaf","\x34","\x51","\x5e"),
	HX_HCSTRING("DRAW_BUFFER4_NV","\x4e","\x6b","\xfa","\x5e"),
	HX_HCSTRING("DRAW_BUFFER5_NV","\xed","\xa1","\xa3","\x5f"),
	HX_HCSTRING("DRAW_BUFFER6_NV","\x8c","\xd8","\x4c","\x60"),
	HX_HCSTRING("DRAW_BUFFER7_NV","\x2b","\x0f","\xf6","\x60"),
	HX_HCSTRING("DRAW_BUFFER8_NV","\xca","\x45","\x9f","\x61"),
	HX_HCSTRING("DRAW_BUFFER9_NV","\x69","\x7c","\x48","\x62"),
	HX_HCSTRING("DRAW_BUFFER10_NV","\xed","\x93","\xeb","\xe2"),
	HX_HCSTRING("DRAW_BUFFER11_NV","\x8c","\xca","\x94","\xe3"),
	HX_HCSTRING("DRAW_BUFFER12_NV","\x2b","\x01","\x3e","\xe4"),
	HX_HCSTRING("DRAW_BUFFER13_NV","\xca","\x37","\xe7","\xe4"),
	HX_HCSTRING("DRAW_BUFFER14_NV","\x69","\x6e","\x90","\xe5"),
	HX_HCSTRING("DRAW_BUFFER15_NV","\x08","\xa5","\x39","\xe6"),
	HX_HCSTRING("COLOR_ATTACHMENT0_NV","\x56","\xc4","\xe4","\xab"),
	HX_HCSTRING("COLOR_ATTACHMENT1_NV","\xf5","\xfa","\x8d","\xac"),
	HX_HCSTRING("COLOR_ATTACHMENT2_NV","\x94","\x31","\x37","\xad"),
	HX_HCSTRING("COLOR_ATTACHMENT3_NV","\x33","\x68","\xe0","\xad"),
	HX_HCSTRING("COLOR_ATTACHMENT4_NV","\xd2","\x9e","\x89","\xae"),
	HX_HCSTRING("COLOR_ATTACHMENT5_NV","\x71","\xd5","\x32","\xaf"),
	HX_HCSTRING("COLOR_ATTACHMENT6_NV","\x10","\x0c","\xdc","\xaf"),
	HX_HCSTRING("COLOR_ATTACHMENT7_NV","\xaf","\x42","\x85","\xb0"),
	HX_HCSTRING("COLOR_ATTACHMENT8_NV","\x4e","\x79","\x2e","\xb1"),
	HX_HCSTRING("COLOR_ATTACHMENT9_NV","\xed","\xaf","\xd7","\xb1"),
	HX_HCSTRING("COLOR_ATTACHMENT10_NV","\xe9","\x73","\xa9","\x30"),
	HX_HCSTRING("COLOR_ATTACHMENT11_NV","\x88","\xaa","\x52","\x31"),
	HX_HCSTRING("COLOR_ATTACHMENT12_NV","\x27","\xe1","\xfb","\x31"),
	HX_HCSTRING("COLOR_ATTACHMENT13_NV","\xc6","\x17","\xa5","\x32"),
	HX_HCSTRING("COLOR_ATTACHMENT14_NV","\x65","\x4e","\x4e","\x33"),
	HX_HCSTRING("COLOR_ATTACHMENT15_NV","\x04","\x85","\xf7","\x33"),
	::String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(NV_draw_buffers_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(NV_draw_buffers_obj::__mClass,"__mClass");
};

#endif

hx::Class NV_draw_buffers_obj::__mClass;

void NV_draw_buffers_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("lime.graphics.opengl.ext.NV_draw_buffers","\x2d","\xbe","\x5c","\x3e");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = hx::Class_obj::dupFunctions(sMemberFields);
	__mClass->mCanCast = hx::TCanCast< NV_draw_buffers_obj >;
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
