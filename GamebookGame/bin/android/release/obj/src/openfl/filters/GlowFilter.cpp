#include <hxcpp.h>

#include "hxMath.h"
#ifndef INCLUDED_openfl__internal_renderer_RenderSession
#include <openfl/_internal/renderer/RenderSession.h>
#endif
#ifndef INCLUDED_openfl_display_Shader
#include <openfl/display/Shader.h>
#endif
#ifndef INCLUDED_openfl_display_ShaderData
#include <openfl/display/ShaderData.h>
#endif
#ifndef INCLUDED_openfl_filters_BitmapFilter
#include <openfl/filters/BitmapFilter.h>
#endif
#ifndef INCLUDED_openfl_filters_GlowFilter
#include <openfl/filters/GlowFilter.h>
#endif
#ifndef INCLUDED_openfl_filters__GlowFilter_GlowShader
#include <openfl/filters/_GlowFilter/GlowShader.h>
#endif
namespace openfl{
namespace filters{

Void GlowFilter_obj::__construct(hx::Null< int >  __o_color,hx::Null< Float >  __o_alpha,hx::Null< Float >  __o_blurX,hx::Null< Float >  __o_blurY,hx::Null< Float >  __o_strength,hx::Null< int >  __o_quality,hx::Null< bool >  __o_inner,hx::Null< bool >  __o_knockout)
{
HX_STACK_FRAME("openfl.filters.GlowFilter","new",0xf734d428,"openfl.filters.GlowFilter.new","openfl/filters/GlowFilter.hx",27,0x5f568606)
HX_STACK_THIS(this)
HX_STACK_ARG(__o_color,"color")
HX_STACK_ARG(__o_alpha,"alpha")
HX_STACK_ARG(__o_blurX,"blurX")
HX_STACK_ARG(__o_blurY,"blurY")
HX_STACK_ARG(__o_strength,"strength")
HX_STACK_ARG(__o_quality,"quality")
HX_STACK_ARG(__o_inner,"inner")
HX_STACK_ARG(__o_knockout,"knockout")
int color = __o_color.Default(16711680);
Float alpha = __o_alpha.Default(1);
Float blurX = __o_blurX.Default(6);
Float blurY = __o_blurY.Default(6);
Float strength = __o_strength.Default(2);
int quality = __o_quality.Default(1);
bool inner = __o_inner.Default(false);
bool knockout = __o_knockout.Default(false);
{
	HX_STACK_LINE(29)
	super::__construct();
	HX_STACK_LINE(31)
	this->color = color;
	HX_STACK_LINE(32)
	this->alpha = alpha;
	HX_STACK_LINE(33)
	this->blurX = blurX;
	HX_STACK_LINE(34)
	this->blurY = blurY;
	HX_STACK_LINE(35)
	this->strength = strength;
	HX_STACK_LINE(36)
	int tmp = quality;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(36)
	this->set_quality(tmp);
	HX_STACK_LINE(37)
	this->inner = inner;
	HX_STACK_LINE(38)
	bool tmp1 = knockout;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(38)
	this->set_knockout(tmp1);
	HX_STACK_LINE(40)
	this->__cacheObject = true;
}
;
	return null();
}

//GlowFilter_obj::~GlowFilter_obj() { }

Dynamic GlowFilter_obj::__CreateEmpty() { return  new GlowFilter_obj; }
hx::ObjectPtr< GlowFilter_obj > GlowFilter_obj::__new(hx::Null< int >  __o_color,hx::Null< Float >  __o_alpha,hx::Null< Float >  __o_blurX,hx::Null< Float >  __o_blurY,hx::Null< Float >  __o_strength,hx::Null< int >  __o_quality,hx::Null< bool >  __o_inner,hx::Null< bool >  __o_knockout)
{  hx::ObjectPtr< GlowFilter_obj > _result_ = new GlowFilter_obj();
	_result_->__construct(__o_color,__o_alpha,__o_blurX,__o_blurY,__o_strength,__o_quality,__o_inner,__o_knockout);
	return _result_;}

Dynamic GlowFilter_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< GlowFilter_obj > _result_ = new GlowFilter_obj();
	_result_->__construct(inArgs[0],inArgs[1],inArgs[2],inArgs[3],inArgs[4],inArgs[5],inArgs[6],inArgs[7]);
	return _result_;}

::openfl::filters::BitmapFilter GlowFilter_obj::clone( ){
	HX_STACK_FRAME("openfl.filters.GlowFilter","clone",0x7c629925,"openfl.filters.GlowFilter.clone","openfl/filters/GlowFilter.hx",45,0x5f568606)
	HX_STACK_THIS(this)
	HX_STACK_LINE(47)
	int tmp = this->color;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(47)
	Float tmp1 = this->alpha;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(47)
	Float tmp2 = this->blurX;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(47)
	Float tmp3 = this->blurY;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(47)
	Float tmp4 = this->strength;		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(47)
	int tmp5 = this->quality;		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(47)
	bool tmp6 = this->inner;		HX_STACK_VAR(tmp6,"tmp6");
	HX_STACK_LINE(47)
	bool tmp7 = this->knockout;		HX_STACK_VAR(tmp7,"tmp7");
	HX_STACK_LINE(47)
	::openfl::filters::GlowFilter tmp8 = ::openfl::filters::GlowFilter_obj::__new(tmp,tmp1,tmp2,tmp3,tmp4,tmp5,tmp6,tmp7);		HX_STACK_VAR(tmp8,"tmp8");
	HX_STACK_LINE(47)
	return tmp8;
}


::openfl::display::Shader GlowFilter_obj::__initShader( ::openfl::_internal::renderer::RenderSession renderSession,int pass){
	HX_STACK_FRAME("openfl.filters.GlowFilter","__initShader",0x188dd8ad,"openfl.filters.GlowFilter.__initShader","openfl/filters/GlowFilter.hx",52,0x5f568606)
	HX_STACK_THIS(this)
	HX_STACK_ARG(renderSession,"renderSession")
	HX_STACK_ARG(pass,"pass")
	HX_STACK_LINE(54)
	::openfl::filters::_GlowFilter::GlowShader tmp = ::openfl::filters::GlowFilter_obj::__glowShader;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(54)
	::openfl::display::ShaderData tmp1 = tmp->get_data();		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(54)
	::openfl::display::ShaderData data = tmp1;		HX_STACK_VAR(data,"data");
	HX_STACK_LINE(56)
	int tmp2 = pass;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(56)
	int tmp3 = this->horizontalPasses;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(56)
	bool tmp4 = (tmp2 <= tmp3);		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(56)
	if ((tmp4)){
		HX_STACK_LINE(58)
		int tmp5 = (int(pass) >> int((int)1));		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(58)
		Float tmp6 = ::Math_obj::pow(((Float)0.5),tmp5);		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(58)
		Float scale = tmp6;		HX_STACK_VAR(scale,"scale");
		HX_STACK_LINE(59)
		Float tmp7 = this->blurX;		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(59)
		Float tmp8 = scale;		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(59)
		Float tmp9 = (tmp7 * tmp8);		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(59)
		hx::IndexRef((data->__Field(HX_HCSTRING("uRadius","\xa7","\x8a","\xda","\xe6"), hx::paccDynamic )->__Field(HX_HCSTRING("value","\x71","\x7f","\xb8","\x31"), hx::paccDynamic )).mPtr,(int)0) = tmp9;
		HX_STACK_LINE(60)
		hx::IndexRef((data->__Field(HX_HCSTRING("uRadius","\xa7","\x8a","\xda","\xe6"), hx::paccDynamic )->__Field(HX_HCSTRING("value","\x71","\x7f","\xb8","\x31"), hx::paccDynamic )).mPtr,(int)1) = (int)0;
	}
	else{
		HX_STACK_LINE(64)
		int tmp5 = pass;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(64)
		int tmp6 = this->horizontalPasses;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(64)
		int tmp7 = (tmp5 - tmp6);		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(64)
		int tmp8 = (int(tmp7) >> int((int)1));		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(64)
		Float tmp9 = ::Math_obj::pow(((Float)0.5),tmp8);		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(64)
		Float scale = tmp9;		HX_STACK_VAR(scale,"scale");
		HX_STACK_LINE(65)
		hx::IndexRef((data->__Field(HX_HCSTRING("uRadius","\xa7","\x8a","\xda","\xe6"), hx::paccDynamic )->__Field(HX_HCSTRING("value","\x71","\x7f","\xb8","\x31"), hx::paccDynamic )).mPtr,(int)0) = (int)0;
		HX_STACK_LINE(66)
		Float tmp10 = this->blurY;		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(66)
		Float tmp11 = scale;		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(66)
		Float tmp12 = (tmp10 * tmp11);		HX_STACK_VAR(tmp12,"tmp12");
		HX_STACK_LINE(66)
		hx::IndexRef((data->__Field(HX_HCSTRING("uRadius","\xa7","\x8a","\xda","\xe6"), hx::paccDynamic )->__Field(HX_HCSTRING("value","\x71","\x7f","\xb8","\x31"), hx::paccDynamic )).mPtr,(int)1) = tmp12;
	}
	HX_STACK_LINE(70)
	int tmp5 = this->color;		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(70)
	int tmp6 = (int(tmp5) >> int((int)16));		HX_STACK_VAR(tmp6,"tmp6");
	HX_STACK_LINE(70)
	int tmp7 = (int(tmp6) & int((int)255));		HX_STACK_VAR(tmp7,"tmp7");
	HX_STACK_LINE(70)
	Float tmp8 = (Float(tmp7) / Float((int)255));		HX_STACK_VAR(tmp8,"tmp8");
	HX_STACK_LINE(70)
	hx::IndexRef((data->__Field(HX_HCSTRING("uColor","\xae","\x18","\x4b","\xa5"), hx::paccDynamic )->__Field(HX_HCSTRING("value","\x71","\x7f","\xb8","\x31"), hx::paccDynamic )).mPtr,(int)0) = tmp8;
	HX_STACK_LINE(71)
	int tmp9 = this->color;		HX_STACK_VAR(tmp9,"tmp9");
	HX_STACK_LINE(71)
	int tmp10 = (int(tmp9) >> int((int)8));		HX_STACK_VAR(tmp10,"tmp10");
	HX_STACK_LINE(71)
	int tmp11 = (int(tmp10) & int((int)255));		HX_STACK_VAR(tmp11,"tmp11");
	HX_STACK_LINE(71)
	Float tmp12 = (Float(tmp11) / Float((int)255));		HX_STACK_VAR(tmp12,"tmp12");
	HX_STACK_LINE(71)
	hx::IndexRef((data->__Field(HX_HCSTRING("uColor","\xae","\x18","\x4b","\xa5"), hx::paccDynamic )->__Field(HX_HCSTRING("value","\x71","\x7f","\xb8","\x31"), hx::paccDynamic )).mPtr,(int)1) = tmp12;
	HX_STACK_LINE(72)
	int tmp13 = this->color;		HX_STACK_VAR(tmp13,"tmp13");
	HX_STACK_LINE(72)
	int tmp14 = (int(tmp13) & int((int)255));		HX_STACK_VAR(tmp14,"tmp14");
	HX_STACK_LINE(72)
	Float tmp15 = (Float(tmp14) / Float((int)255));		HX_STACK_VAR(tmp15,"tmp15");
	HX_STACK_LINE(72)
	hx::IndexRef((data->__Field(HX_HCSTRING("uColor","\xae","\x18","\x4b","\xa5"), hx::paccDynamic )->__Field(HX_HCSTRING("value","\x71","\x7f","\xb8","\x31"), hx::paccDynamic )).mPtr,(int)2) = tmp15;
	HX_STACK_LINE(73)
	Float tmp16 = this->alpha;		HX_STACK_VAR(tmp16,"tmp16");
	HX_STACK_LINE(73)
	hx::IndexRef((data->__Field(HX_HCSTRING("uColor","\xae","\x18","\x4b","\xa5"), hx::paccDynamic )->__Field(HX_HCSTRING("value","\x71","\x7f","\xb8","\x31"), hx::paccDynamic )).mPtr,(int)3) = tmp16;
	HX_STACK_LINE(75)
	::openfl::filters::_GlowFilter::GlowShader tmp17 = ::openfl::filters::GlowFilter_obj::__glowShader;		HX_STACK_VAR(tmp17,"tmp17");
	HX_STACK_LINE(75)
	return tmp17;
}


bool GlowFilter_obj::set_knockout( bool value){
	HX_STACK_FRAME("openfl.filters.GlowFilter","set_knockout",0xf84cc4af,"openfl.filters.GlowFilter.set_knockout","openfl/filters/GlowFilter.hx",87,0x5f568606)
	HX_STACK_THIS(this)
	HX_STACK_ARG(value,"value")
	HX_STACK_LINE(89)
	bool tmp = this->knockout = value;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(89)
	return tmp;
}


HX_DEFINE_DYNAMIC_FUNC1(GlowFilter_obj,set_knockout,return )

int GlowFilter_obj::set_quality( int value){
	HX_STACK_FRAME("openfl.filters.GlowFilter","set_quality",0xb56977aa,"openfl.filters.GlowFilter.set_quality","openfl/filters/GlowFilter.hx",94,0x5f568606)
	HX_STACK_THIS(this)
	HX_STACK_ARG(value,"value")
	HX_STACK_LINE(98)
	Float tmp = this->blurX;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(98)
	bool tmp1 = (tmp <= (int)0);		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(98)
	int tmp2;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(98)
	if ((tmp1)){
		HX_STACK_LINE(98)
		tmp2 = (int)0;
	}
	else{
		HX_STACK_LINE(98)
		Float tmp3 = this->blurX;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(98)
		Float tmp4 = (Float(value) / Float((int)4));		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(98)
		Float tmp5 = (tmp3 * tmp4);		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(98)
		int tmp6 = ::Math_obj::round(tmp5);		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(98)
		tmp2 = (tmp6 + (int)1);
	}
	HX_STACK_LINE(98)
	this->horizontalPasses = tmp2;
	HX_STACK_LINE(99)
	Float tmp3 = this->blurY;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(99)
	bool tmp4 = (tmp3 <= (int)0);		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(99)
	int tmp5;		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(99)
	if ((tmp4)){
		HX_STACK_LINE(99)
		tmp5 = (int)0;
	}
	else{
		HX_STACK_LINE(99)
		Float tmp6 = this->blurY;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(99)
		Float tmp7 = (Float(value) / Float((int)4));		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(99)
		Float tmp8 = (tmp6 * tmp7);		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(99)
		int tmp9 = ::Math_obj::round(tmp8);		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(99)
		tmp5 = (tmp9 + (int)1);
	}
	HX_STACK_LINE(99)
	this->verticalPasses = tmp5;
	HX_STACK_LINE(101)
	int tmp6 = this->horizontalPasses;		HX_STACK_VAR(tmp6,"tmp6");
	HX_STACK_LINE(101)
	int tmp7 = this->verticalPasses;		HX_STACK_VAR(tmp7,"tmp7");
	HX_STACK_LINE(101)
	int tmp8 = (tmp6 + tmp7);		HX_STACK_VAR(tmp8,"tmp8");
	HX_STACK_LINE(101)
	this->__numPasses = tmp8;
	HX_STACK_LINE(103)
	int tmp9 = this->quality = value;		HX_STACK_VAR(tmp9,"tmp9");
	HX_STACK_LINE(103)
	return tmp9;
}


HX_DEFINE_DYNAMIC_FUNC1(GlowFilter_obj,set_quality,return )

::openfl::filters::_GlowFilter::GlowShader GlowFilter_obj::__glowShader;


GlowFilter_obj::GlowFilter_obj()
{
}

Dynamic GlowFilter_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"alpha") ) { return alpha; }
		if (HX_FIELD_EQ(inName,"blurX") ) { return blurX; }
		if (HX_FIELD_EQ(inName,"blurY") ) { return blurY; }
		if (HX_FIELD_EQ(inName,"color") ) { return color; }
		if (HX_FIELD_EQ(inName,"inner") ) { return inner; }
		if (HX_FIELD_EQ(inName,"clone") ) { return clone_dyn(); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"quality") ) { return quality; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"knockout") ) { return knockout; }
		if (HX_FIELD_EQ(inName,"strength") ) { return strength; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"set_quality") ) { return set_quality_dyn(); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"__initShader") ) { return __initShader_dyn(); }
		if (HX_FIELD_EQ(inName,"set_knockout") ) { return set_knockout_dyn(); }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"verticalPasses") ) { return verticalPasses; }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"horizontalPasses") ) { return horizontalPasses; }
	}
	return super::__Field(inName,inCallProp);
}

bool GlowFilter_obj::__GetStatic(const ::String &inName, Dynamic &outValue, hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 12:
		if (HX_FIELD_EQ(inName,"__glowShader") ) { outValue = __glowShader; return true;  }
	}
	return false;
}

Dynamic GlowFilter_obj::__SetField(const ::String &inName,const Dynamic &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"alpha") ) { alpha=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"blurX") ) { blurX=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"blurY") ) { blurY=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"color") ) { color=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"inner") ) { inner=inValue.Cast< bool >(); return inValue; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"quality") ) { if (inCallProp == hx::paccAlways) return set_quality(inValue);quality=inValue.Cast< int >(); return inValue; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"knockout") ) { if (inCallProp == hx::paccAlways) return set_knockout(inValue);knockout=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"strength") ) { strength=inValue.Cast< Float >(); return inValue; }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"verticalPasses") ) { verticalPasses=inValue.Cast< int >(); return inValue; }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"horizontalPasses") ) { horizontalPasses=inValue.Cast< int >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

bool GlowFilter_obj::__SetStatic(const ::String &inName,Dynamic &ioValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 12:
		if (HX_FIELD_EQ(inName,"__glowShader") ) { __glowShader=ioValue.Cast< ::openfl::filters::_GlowFilter::GlowShader >(); return true; }
	}
	return false;
}

void GlowFilter_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("alpha","\x5e","\xa7","\x96","\x21"));
	outFields->push(HX_HCSTRING("blurX","\xd1","\x0f","\x01","\xb5"));
	outFields->push(HX_HCSTRING("blurY","\xd2","\x0f","\x01","\xb5"));
	outFields->push(HX_HCSTRING("color","\x63","\x71","\x5c","\x4a"));
	outFields->push(HX_HCSTRING("inner","\x96","\x31","\x1c","\xbe"));
	outFields->push(HX_HCSTRING("knockout","\xfa","\xa9","\xa5","\x6f"));
	outFields->push(HX_HCSTRING("quality","\xbf","\x04","\x4c","\x44"));
	outFields->push(HX_HCSTRING("strength","\x81","\xd2","\x8e","\x8e"));
	outFields->push(HX_HCSTRING("horizontalPasses","\x83","\x07","\xcd","\x96"));
	outFields->push(HX_HCSTRING("verticalPasses","\x95","\xc0","\xb5","\xb8"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsFloat,(int)offsetof(GlowFilter_obj,alpha),HX_HCSTRING("alpha","\x5e","\xa7","\x96","\x21")},
	{hx::fsFloat,(int)offsetof(GlowFilter_obj,blurX),HX_HCSTRING("blurX","\xd1","\x0f","\x01","\xb5")},
	{hx::fsFloat,(int)offsetof(GlowFilter_obj,blurY),HX_HCSTRING("blurY","\xd2","\x0f","\x01","\xb5")},
	{hx::fsInt,(int)offsetof(GlowFilter_obj,color),HX_HCSTRING("color","\x63","\x71","\x5c","\x4a")},
	{hx::fsBool,(int)offsetof(GlowFilter_obj,inner),HX_HCSTRING("inner","\x96","\x31","\x1c","\xbe")},
	{hx::fsBool,(int)offsetof(GlowFilter_obj,knockout),HX_HCSTRING("knockout","\xfa","\xa9","\xa5","\x6f")},
	{hx::fsInt,(int)offsetof(GlowFilter_obj,quality),HX_HCSTRING("quality","\xbf","\x04","\x4c","\x44")},
	{hx::fsFloat,(int)offsetof(GlowFilter_obj,strength),HX_HCSTRING("strength","\x81","\xd2","\x8e","\x8e")},
	{hx::fsInt,(int)offsetof(GlowFilter_obj,horizontalPasses),HX_HCSTRING("horizontalPasses","\x83","\x07","\xcd","\x96")},
	{hx::fsInt,(int)offsetof(GlowFilter_obj,verticalPasses),HX_HCSTRING("verticalPasses","\x95","\xc0","\xb5","\xb8")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo sStaticStorageInfo[] = {
	{hx::fsObject /*::openfl::filters::_GlowFilter::GlowShader*/ ,(void *) &GlowFilter_obj::__glowShader,HX_HCSTRING("__glowShader","\xb2","\xe4","\x70","\x07")},
	{ hx::fsUnknown, 0, null()}
};
#endif

static ::String sMemberFields[] = {
	HX_HCSTRING("alpha","\x5e","\xa7","\x96","\x21"),
	HX_HCSTRING("blurX","\xd1","\x0f","\x01","\xb5"),
	HX_HCSTRING("blurY","\xd2","\x0f","\x01","\xb5"),
	HX_HCSTRING("color","\x63","\x71","\x5c","\x4a"),
	HX_HCSTRING("inner","\x96","\x31","\x1c","\xbe"),
	HX_HCSTRING("knockout","\xfa","\xa9","\xa5","\x6f"),
	HX_HCSTRING("quality","\xbf","\x04","\x4c","\x44"),
	HX_HCSTRING("strength","\x81","\xd2","\x8e","\x8e"),
	HX_HCSTRING("horizontalPasses","\x83","\x07","\xcd","\x96"),
	HX_HCSTRING("verticalPasses","\x95","\xc0","\xb5","\xb8"),
	HX_HCSTRING("clone","\x5d","\x13","\x63","\x48"),
	HX_HCSTRING("__initShader","\x75","\x95","\xf9","\x59"),
	HX_HCSTRING("set_knockout","\x77","\x81","\xb8","\x39"),
	HX_HCSTRING("set_quality","\xe2","\x6b","\xb3","\xd4"),
	::String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(GlowFilter_obj::__mClass,"__mClass");
	HX_MARK_MEMBER_NAME(GlowFilter_obj::__glowShader,"__glowShader");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(GlowFilter_obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(GlowFilter_obj::__glowShader,"__glowShader");
};

#endif

hx::Class GlowFilter_obj::__mClass;

static ::String sStaticFields[] = {
	HX_HCSTRING("__glowShader","\xb2","\xe4","\x70","\x07"),
	::String(null()) };

void GlowFilter_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("openfl.filters.GlowFilter","\x36","\xe0","\x65","\x68");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &GlowFilter_obj::__GetStatic;
	__mClass->mSetStaticField = &GlowFilter_obj::__SetStatic;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(sStaticFields);
	__mClass->mMembers = hx::Class_obj::dupFunctions(sMemberFields);
	__mClass->mCanCast = hx::TCanCast< GlowFilter_obj >;
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

void GlowFilter_obj::__boot()
{
	__glowShader= ::openfl::filters::_GlowFilter::GlowShader_obj::__new();
}

} // end namespace openfl
} // end namespace filters
