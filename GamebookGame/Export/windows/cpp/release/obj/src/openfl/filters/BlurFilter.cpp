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
#ifndef INCLUDED_openfl_filters_BlurFilter
#include <openfl/filters/BlurFilter.h>
#endif
#ifndef INCLUDED_openfl_filters__BlurFilter_BlurShader
#include <openfl/filters/_BlurFilter/BlurShader.h>
#endif
namespace openfl{
namespace filters{

Void BlurFilter_obj::__construct(hx::Null< Float >  __o_blurX,hx::Null< Float >  __o_blurY,hx::Null< int >  __o_quality)
{
HX_STACK_FRAME("openfl.filters.BlurFilter","new",0x2ff6acc2,"openfl.filters.BlurFilter.new","openfl/filters/BlurFilter.hx",23,0x46563eac)
HX_STACK_THIS(this)
HX_STACK_ARG(__o_blurX,"blurX")
HX_STACK_ARG(__o_blurY,"blurY")
HX_STACK_ARG(__o_quality,"quality")
Float blurX = __o_blurX.Default(4);
Float blurY = __o_blurY.Default(4);
int quality = __o_quality.Default(1);
{
	HX_STACK_LINE(25)
	super::__construct();
	HX_STACK_LINE(27)
	this->blurX = blurX;
	HX_STACK_LINE(28)
	this->blurY = blurY;
	HX_STACK_LINE(29)
	int tmp = quality;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(29)
	this->set_quality(tmp);
}
;
	return null();
}

//BlurFilter_obj::~BlurFilter_obj() { }

Dynamic BlurFilter_obj::__CreateEmpty() { return  new BlurFilter_obj; }
hx::ObjectPtr< BlurFilter_obj > BlurFilter_obj::__new(hx::Null< Float >  __o_blurX,hx::Null< Float >  __o_blurY,hx::Null< int >  __o_quality)
{  hx::ObjectPtr< BlurFilter_obj > _result_ = new BlurFilter_obj();
	_result_->__construct(__o_blurX,__o_blurY,__o_quality);
	return _result_;}

Dynamic BlurFilter_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< BlurFilter_obj > _result_ = new BlurFilter_obj();
	_result_->__construct(inArgs[0],inArgs[1],inArgs[2]);
	return _result_;}

::openfl::filters::BitmapFilter BlurFilter_obj::clone( ){
	HX_STACK_FRAME("openfl.filters.BlurFilter","clone",0xcbbf4c3f,"openfl.filters.BlurFilter.clone","openfl/filters/BlurFilter.hx",34,0x46563eac)
	HX_STACK_THIS(this)
	HX_STACK_LINE(36)
	Float tmp = this->blurX;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(36)
	Float tmp1 = this->blurY;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(36)
	int tmp2 = this->quality;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(36)
	::openfl::filters::BlurFilter tmp3 = ::openfl::filters::BlurFilter_obj::__new(tmp,tmp1,tmp2);		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(36)
	return tmp3;
}


::openfl::display::Shader BlurFilter_obj::__initShader( ::openfl::_internal::renderer::RenderSession renderSession,int pass){
	HX_STACK_FRAME("openfl.filters.BlurFilter","__initShader",0xc19d1cd3,"openfl.filters.BlurFilter.__initShader","openfl/filters/BlurFilter.hx",41,0x46563eac)
	HX_STACK_THIS(this)
	HX_STACK_ARG(renderSession,"renderSession")
	HX_STACK_ARG(pass,"pass")
	HX_STACK_LINE(43)
	::openfl::filters::_BlurFilter::BlurShader tmp = ::openfl::filters::BlurFilter_obj::__blurShader;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(43)
	::openfl::display::ShaderData tmp1 = tmp->get_data();		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(43)
	::openfl::display::ShaderData data = tmp1;		HX_STACK_VAR(data,"data");
	HX_STACK_LINE(45)
	int tmp2 = pass;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(45)
	int tmp3 = this->horizontalPasses;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(45)
	bool tmp4 = (tmp2 <= tmp3);		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(45)
	if ((tmp4)){
		HX_STACK_LINE(47)
		int tmp5 = (int(pass) >> int((int)1));		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(47)
		Float tmp6 = ::Math_obj::pow(((Float)0.5),tmp5);		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(47)
		Float scale = tmp6;		HX_STACK_VAR(scale,"scale");
		HX_STACK_LINE(48)
		Float tmp7 = this->blurX;		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(48)
		Float tmp8 = scale;		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(48)
		Float tmp9 = (tmp7 * tmp8);		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(48)
		hx::IndexRef((data->__Field(HX_HCSTRING("uRadius","\xa7","\x8a","\xda","\xe6"), hx::paccDynamic )->__Field(HX_HCSTRING("value","\x71","\x7f","\xb8","\x31"), hx::paccDynamic )).mPtr,(int)0) = tmp9;
		HX_STACK_LINE(49)
		hx::IndexRef((data->__Field(HX_HCSTRING("uRadius","\xa7","\x8a","\xda","\xe6"), hx::paccDynamic )->__Field(HX_HCSTRING("value","\x71","\x7f","\xb8","\x31"), hx::paccDynamic )).mPtr,(int)1) = (int)0;
	}
	else{
		HX_STACK_LINE(53)
		int tmp5 = pass;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(53)
		int tmp6 = this->horizontalPasses;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(53)
		int tmp7 = (tmp5 - tmp6);		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(53)
		int tmp8 = (int(tmp7) >> int((int)1));		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(53)
		Float tmp9 = ::Math_obj::pow(((Float)0.5),tmp8);		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(53)
		Float scale = tmp9;		HX_STACK_VAR(scale,"scale");
		HX_STACK_LINE(54)
		hx::IndexRef((data->__Field(HX_HCSTRING("uRadius","\xa7","\x8a","\xda","\xe6"), hx::paccDynamic )->__Field(HX_HCSTRING("value","\x71","\x7f","\xb8","\x31"), hx::paccDynamic )).mPtr,(int)0) = (int)0;
		HX_STACK_LINE(55)
		Float tmp10 = this->blurY;		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(55)
		Float tmp11 = scale;		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(55)
		Float tmp12 = (tmp10 * tmp11);		HX_STACK_VAR(tmp12,"tmp12");
		HX_STACK_LINE(55)
		hx::IndexRef((data->__Field(HX_HCSTRING("uRadius","\xa7","\x8a","\xda","\xe6"), hx::paccDynamic )->__Field(HX_HCSTRING("value","\x71","\x7f","\xb8","\x31"), hx::paccDynamic )).mPtr,(int)1) = tmp12;
	}
	HX_STACK_LINE(59)
	::openfl::filters::_BlurFilter::BlurShader tmp5 = ::openfl::filters::BlurFilter_obj::__blurShader;		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(59)
	return tmp5;
}


int BlurFilter_obj::set_quality( int value){
	HX_STACK_FRAME("openfl.filters.BlurFilter","set_quality",0xacfc7a44,"openfl.filters.BlurFilter.set_quality","openfl/filters/BlurFilter.hx",71,0x46563eac)
	HX_STACK_THIS(this)
	HX_STACK_ARG(value,"value")
	HX_STACK_LINE(75)
	Float tmp = this->blurX;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(75)
	bool tmp1 = (tmp <= (int)0);		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(75)
	int tmp2;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(75)
	if ((tmp1)){
		HX_STACK_LINE(75)
		tmp2 = (int)0;
	}
	else{
		HX_STACK_LINE(75)
		Float tmp3 = this->blurX;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(75)
		Float tmp4 = (Float(value) / Float((int)4));		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(75)
		Float tmp5 = (tmp3 * tmp4);		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(75)
		int tmp6 = ::Math_obj::round(tmp5);		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(75)
		tmp2 = (tmp6 + (int)1);
	}
	HX_STACK_LINE(75)
	this->horizontalPasses = tmp2;
	HX_STACK_LINE(76)
	Float tmp3 = this->blurY;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(76)
	bool tmp4 = (tmp3 <= (int)0);		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(76)
	int tmp5;		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(76)
	if ((tmp4)){
		HX_STACK_LINE(76)
		tmp5 = (int)0;
	}
	else{
		HX_STACK_LINE(76)
		Float tmp6 = this->blurY;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(76)
		Float tmp7 = (Float(value) / Float((int)4));		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(76)
		Float tmp8 = (tmp6 * tmp7);		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(76)
		int tmp9 = ::Math_obj::round(tmp8);		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(76)
		tmp5 = (tmp9 + (int)1);
	}
	HX_STACK_LINE(76)
	this->verticalPasses = tmp5;
	HX_STACK_LINE(78)
	int tmp6 = this->horizontalPasses;		HX_STACK_VAR(tmp6,"tmp6");
	HX_STACK_LINE(78)
	int tmp7 = this->verticalPasses;		HX_STACK_VAR(tmp7,"tmp7");
	HX_STACK_LINE(78)
	int tmp8 = (tmp6 + tmp7);		HX_STACK_VAR(tmp8,"tmp8");
	HX_STACK_LINE(78)
	this->__numPasses = tmp8;
	HX_STACK_LINE(80)
	int tmp9 = this->quality = value;		HX_STACK_VAR(tmp9,"tmp9");
	HX_STACK_LINE(80)
	return tmp9;
}


HX_DEFINE_DYNAMIC_FUNC1(BlurFilter_obj,set_quality,return )

::openfl::filters::_BlurFilter::BlurShader BlurFilter_obj::__blurShader;


BlurFilter_obj::BlurFilter_obj()
{
}

Dynamic BlurFilter_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"blurX") ) { return blurX; }
		if (HX_FIELD_EQ(inName,"blurY") ) { return blurY; }
		if (HX_FIELD_EQ(inName,"clone") ) { return clone_dyn(); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"quality") ) { return quality; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"set_quality") ) { return set_quality_dyn(); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"__initShader") ) { return __initShader_dyn(); }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"verticalPasses") ) { return verticalPasses; }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"horizontalPasses") ) { return horizontalPasses; }
	}
	return super::__Field(inName,inCallProp);
}

bool BlurFilter_obj::__GetStatic(const ::String &inName, Dynamic &outValue, hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 12:
		if (HX_FIELD_EQ(inName,"__blurShader") ) { outValue = __blurShader; return true;  }
	}
	return false;
}

Dynamic BlurFilter_obj::__SetField(const ::String &inName,const Dynamic &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"blurX") ) { blurX=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"blurY") ) { blurY=inValue.Cast< Float >(); return inValue; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"quality") ) { if (inCallProp == hx::paccAlways) return set_quality(inValue);quality=inValue.Cast< int >(); return inValue; }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"verticalPasses") ) { verticalPasses=inValue.Cast< int >(); return inValue; }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"horizontalPasses") ) { horizontalPasses=inValue.Cast< int >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

bool BlurFilter_obj::__SetStatic(const ::String &inName,Dynamic &ioValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 12:
		if (HX_FIELD_EQ(inName,"__blurShader") ) { __blurShader=ioValue.Cast< ::openfl::filters::_BlurFilter::BlurShader >(); return true; }
	}
	return false;
}

void BlurFilter_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("blurX","\xd1","\x0f","\x01","\xb5"));
	outFields->push(HX_HCSTRING("blurY","\xd2","\x0f","\x01","\xb5"));
	outFields->push(HX_HCSTRING("quality","\xbf","\x04","\x4c","\x44"));
	outFields->push(HX_HCSTRING("horizontalPasses","\x83","\x07","\xcd","\x96"));
	outFields->push(HX_HCSTRING("verticalPasses","\x95","\xc0","\xb5","\xb8"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsFloat,(int)offsetof(BlurFilter_obj,blurX),HX_HCSTRING("blurX","\xd1","\x0f","\x01","\xb5")},
	{hx::fsFloat,(int)offsetof(BlurFilter_obj,blurY),HX_HCSTRING("blurY","\xd2","\x0f","\x01","\xb5")},
	{hx::fsInt,(int)offsetof(BlurFilter_obj,quality),HX_HCSTRING("quality","\xbf","\x04","\x4c","\x44")},
	{hx::fsInt,(int)offsetof(BlurFilter_obj,horizontalPasses),HX_HCSTRING("horizontalPasses","\x83","\x07","\xcd","\x96")},
	{hx::fsInt,(int)offsetof(BlurFilter_obj,verticalPasses),HX_HCSTRING("verticalPasses","\x95","\xc0","\xb5","\xb8")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo sStaticStorageInfo[] = {
	{hx::fsObject /*::openfl::filters::_BlurFilter::BlurShader*/ ,(void *) &BlurFilter_obj::__blurShader,HX_HCSTRING("__blurShader","\x4c","\xe8","\x3f","\xcd")},
	{ hx::fsUnknown, 0, null()}
};
#endif

static ::String sMemberFields[] = {
	HX_HCSTRING("blurX","\xd1","\x0f","\x01","\xb5"),
	HX_HCSTRING("blurY","\xd2","\x0f","\x01","\xb5"),
	HX_HCSTRING("quality","\xbf","\x04","\x4c","\x44"),
	HX_HCSTRING("horizontalPasses","\x83","\x07","\xcd","\x96"),
	HX_HCSTRING("verticalPasses","\x95","\xc0","\xb5","\xb8"),
	HX_HCSTRING("clone","\x5d","\x13","\x63","\x48"),
	HX_HCSTRING("__initShader","\x75","\x95","\xf9","\x59"),
	HX_HCSTRING("set_quality","\xe2","\x6b","\xb3","\xd4"),
	::String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(BlurFilter_obj::__mClass,"__mClass");
	HX_MARK_MEMBER_NAME(BlurFilter_obj::__blurShader,"__blurShader");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(BlurFilter_obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(BlurFilter_obj::__blurShader,"__blurShader");
};

#endif

hx::Class BlurFilter_obj::__mClass;

static ::String sStaticFields[] = {
	HX_HCSTRING("__blurShader","\x4c","\xe8","\x3f","\xcd"),
	::String(null()) };

void BlurFilter_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("openfl.filters.BlurFilter","\xd0","\xe3","\x34","\x2e");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &BlurFilter_obj::__GetStatic;
	__mClass->mSetStaticField = &BlurFilter_obj::__SetStatic;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(sStaticFields);
	__mClass->mMembers = hx::Class_obj::dupFunctions(sMemberFields);
	__mClass->mCanCast = hx::TCanCast< BlurFilter_obj >;
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

void BlurFilter_obj::__boot()
{
	__blurShader= ::openfl::filters::_BlurFilter::BlurShader_obj::__new();
}

} // end namespace openfl
} // end namespace filters
