#include <hxcpp.h>

#ifndef INCLUDED_openfl_filters_BitmapFilter
#include <openfl/filters/BitmapFilter.h>
#endif
#ifndef INCLUDED_openfl_filters_DropShadowFilter
#include <openfl/filters/DropShadowFilter.h>
#endif
namespace openfl{
namespace filters{

Void DropShadowFilter_obj::__construct(hx::Null< Float >  __o_distance,hx::Null< Float >  __o_angle,hx::Null< int >  __o_color,hx::Null< Float >  __o_alpha,hx::Null< Float >  __o_blurX,hx::Null< Float >  __o_blurY,hx::Null< Float >  __o_strength,hx::Null< int >  __o_quality,hx::Null< bool >  __o_inner,hx::Null< bool >  __o_knockout,hx::Null< bool >  __o_hideObject)
{
HX_STACK_FRAME("openfl.filters.DropShadowFilter","new",0xf784b84a,"openfl.filters.DropShadowFilter.new","openfl/filters/DropShadowFilter.hx",24,0x048fdea4)
HX_STACK_THIS(this)
HX_STACK_ARG(__o_distance,"distance")
HX_STACK_ARG(__o_angle,"angle")
HX_STACK_ARG(__o_color,"color")
HX_STACK_ARG(__o_alpha,"alpha")
HX_STACK_ARG(__o_blurX,"blurX")
HX_STACK_ARG(__o_blurY,"blurY")
HX_STACK_ARG(__o_strength,"strength")
HX_STACK_ARG(__o_quality,"quality")
HX_STACK_ARG(__o_inner,"inner")
HX_STACK_ARG(__o_knockout,"knockout")
HX_STACK_ARG(__o_hideObject,"hideObject")
Float distance = __o_distance.Default(4);
Float angle = __o_angle.Default(45);
int color = __o_color.Default(0);
Float alpha = __o_alpha.Default(1);
Float blurX = __o_blurX.Default(4);
Float blurY = __o_blurY.Default(4);
Float strength = __o_strength.Default(1);
int quality = __o_quality.Default(1);
bool inner = __o_inner.Default(false);
bool knockout = __o_knockout.Default(false);
bool hideObject = __o_hideObject.Default(false);
{
	HX_STACK_LINE(26)
	super::__construct();
	HX_STACK_LINE(28)
	this->distance = distance;
	HX_STACK_LINE(29)
	this->angle = angle;
	HX_STACK_LINE(30)
	this->color = color;
	HX_STACK_LINE(31)
	this->alpha = alpha;
	HX_STACK_LINE(32)
	this->blurX = blurX;
	HX_STACK_LINE(33)
	this->blurY = blurY;
	HX_STACK_LINE(34)
	this->strength = strength;
	HX_STACK_LINE(35)
	int tmp = quality;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(35)
	this->set_quality(tmp);
	HX_STACK_LINE(36)
	this->inner = inner;
	HX_STACK_LINE(37)
	bool tmp1 = knockout;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(37)
	this->set_knockout(tmp1);
	HX_STACK_LINE(38)
	bool tmp2 = hideObject;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(38)
	this->set_hideObject(tmp2);
}
;
	return null();
}

//DropShadowFilter_obj::~DropShadowFilter_obj() { }

Dynamic DropShadowFilter_obj::__CreateEmpty() { return  new DropShadowFilter_obj; }
hx::ObjectPtr< DropShadowFilter_obj > DropShadowFilter_obj::__new(hx::Null< Float >  __o_distance,hx::Null< Float >  __o_angle,hx::Null< int >  __o_color,hx::Null< Float >  __o_alpha,hx::Null< Float >  __o_blurX,hx::Null< Float >  __o_blurY,hx::Null< Float >  __o_strength,hx::Null< int >  __o_quality,hx::Null< bool >  __o_inner,hx::Null< bool >  __o_knockout,hx::Null< bool >  __o_hideObject)
{  hx::ObjectPtr< DropShadowFilter_obj > _result_ = new DropShadowFilter_obj();
	_result_->__construct(__o_distance,__o_angle,__o_color,__o_alpha,__o_blurX,__o_blurY,__o_strength,__o_quality,__o_inner,__o_knockout,__o_hideObject);
	return _result_;}

Dynamic DropShadowFilter_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< DropShadowFilter_obj > _result_ = new DropShadowFilter_obj();
	_result_->__construct(inArgs[0],inArgs[1],inArgs[2],inArgs[3],inArgs[4],inArgs[5],inArgs[6],inArgs[7],inArgs[8],inArgs[9],inArgs[10]);
	return _result_;}

::openfl::filters::BitmapFilter DropShadowFilter_obj::clone( ){
	HX_STACK_FRAME("openfl.filters.DropShadowFilter","clone",0x1b8d49c7,"openfl.filters.DropShadowFilter.clone","openfl/filters/DropShadowFilter.hx",43,0x048fdea4)
	HX_STACK_THIS(this)
	HX_STACK_LINE(45)
	Float tmp = this->distance;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(45)
	Float tmp1 = this->angle;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(45)
	int tmp2 = this->color;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(45)
	Float tmp3 = this->alpha;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(45)
	Float tmp4 = this->blurX;		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(45)
	Float tmp5 = this->blurY;		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(45)
	Float tmp6 = this->strength;		HX_STACK_VAR(tmp6,"tmp6");
	HX_STACK_LINE(45)
	int tmp7 = this->quality;		HX_STACK_VAR(tmp7,"tmp7");
	HX_STACK_LINE(45)
	bool tmp8 = this->inner;		HX_STACK_VAR(tmp8,"tmp8");
	HX_STACK_LINE(45)
	bool tmp9 = this->knockout;		HX_STACK_VAR(tmp9,"tmp9");
	HX_STACK_LINE(45)
	bool tmp10 = this->hideObject;		HX_STACK_VAR(tmp10,"tmp10");
	HX_STACK_LINE(45)
	::openfl::filters::DropShadowFilter tmp11 = ::openfl::filters::DropShadowFilter_obj::__new(tmp,tmp1,tmp2,tmp3,tmp4,tmp5,tmp6,tmp7,tmp8,tmp9,tmp10);		HX_STACK_VAR(tmp11,"tmp11");
	HX_STACK_LINE(45)
	return tmp11;
}


bool DropShadowFilter_obj::set_knockout( bool value){
	HX_STACK_FRAME("openfl.filters.DropShadowFilter","set_knockout",0xd2c44c4d,"openfl.filters.DropShadowFilter.set_knockout","openfl/filters/DropShadowFilter.hx",57,0x048fdea4)
	HX_STACK_THIS(this)
	HX_STACK_ARG(value,"value")
	HX_STACK_LINE(59)
	bool tmp = this->knockout = value;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(59)
	return tmp;
}


HX_DEFINE_DYNAMIC_FUNC1(DropShadowFilter_obj,set_knockout,return )

bool DropShadowFilter_obj::set_hideObject( bool value){
	HX_STACK_FRAME("openfl.filters.DropShadowFilter","set_hideObject",0x0e8f4234,"openfl.filters.DropShadowFilter.set_hideObject","openfl/filters/DropShadowFilter.hx",64,0x048fdea4)
	HX_STACK_THIS(this)
	HX_STACK_ARG(value,"value")
	HX_STACK_LINE(66)
	bool tmp = this->hideObject = value;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(66)
	return tmp;
}


HX_DEFINE_DYNAMIC_FUNC1(DropShadowFilter_obj,set_hideObject,return )

int DropShadowFilter_obj::set_quality( int value){
	HX_STACK_FRAME("openfl.filters.DropShadowFilter","set_quality",0x224d4dcc,"openfl.filters.DropShadowFilter.set_quality","openfl/filters/DropShadowFilter.hx",71,0x048fdea4)
	HX_STACK_THIS(this)
	HX_STACK_ARG(value,"value")
	HX_STACK_LINE(73)
	int tmp = this->quality = value;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(73)
	return tmp;
}


HX_DEFINE_DYNAMIC_FUNC1(DropShadowFilter_obj,set_quality,return )


DropShadowFilter_obj::DropShadowFilter_obj()
{
}

Dynamic DropShadowFilter_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"alpha") ) { return alpha; }
		if (HX_FIELD_EQ(inName,"angle") ) { return angle; }
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
		if (HX_FIELD_EQ(inName,"distance") ) { return distance; }
		if (HX_FIELD_EQ(inName,"knockout") ) { return knockout; }
		if (HX_FIELD_EQ(inName,"strength") ) { return strength; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"hideObject") ) { return hideObject; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"set_quality") ) { return set_quality_dyn(); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"set_knockout") ) { return set_knockout_dyn(); }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"set_hideObject") ) { return set_hideObject_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic DropShadowFilter_obj::__SetField(const ::String &inName,const Dynamic &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"alpha") ) { alpha=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"angle") ) { angle=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"blurX") ) { blurX=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"blurY") ) { blurY=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"color") ) { color=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"inner") ) { inner=inValue.Cast< bool >(); return inValue; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"quality") ) { if (inCallProp == hx::paccAlways) return set_quality(inValue);quality=inValue.Cast< int >(); return inValue; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"distance") ) { distance=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"knockout") ) { if (inCallProp == hx::paccAlways) return set_knockout(inValue);knockout=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"strength") ) { strength=inValue.Cast< Float >(); return inValue; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"hideObject") ) { if (inCallProp == hx::paccAlways) return set_hideObject(inValue);hideObject=inValue.Cast< bool >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void DropShadowFilter_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("alpha","\x5e","\xa7","\x96","\x21"));
	outFields->push(HX_HCSTRING("angle","\xd3","\x43","\xe2","\x22"));
	outFields->push(HX_HCSTRING("blurX","\xd1","\x0f","\x01","\xb5"));
	outFields->push(HX_HCSTRING("blurY","\xd2","\x0f","\x01","\xb5"));
	outFields->push(HX_HCSTRING("color","\x63","\x71","\x5c","\x4a"));
	outFields->push(HX_HCSTRING("distance","\x35","\x93","\xf9","\x6b"));
	outFields->push(HX_HCSTRING("hideObject","\x21","\x25","\xc5","\xac"));
	outFields->push(HX_HCSTRING("inner","\x96","\x31","\x1c","\xbe"));
	outFields->push(HX_HCSTRING("knockout","\xfa","\xa9","\xa5","\x6f"));
	outFields->push(HX_HCSTRING("quality","\xbf","\x04","\x4c","\x44"));
	outFields->push(HX_HCSTRING("strength","\x81","\xd2","\x8e","\x8e"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsFloat,(int)offsetof(DropShadowFilter_obj,alpha),HX_HCSTRING("alpha","\x5e","\xa7","\x96","\x21")},
	{hx::fsFloat,(int)offsetof(DropShadowFilter_obj,angle),HX_HCSTRING("angle","\xd3","\x43","\xe2","\x22")},
	{hx::fsFloat,(int)offsetof(DropShadowFilter_obj,blurX),HX_HCSTRING("blurX","\xd1","\x0f","\x01","\xb5")},
	{hx::fsFloat,(int)offsetof(DropShadowFilter_obj,blurY),HX_HCSTRING("blurY","\xd2","\x0f","\x01","\xb5")},
	{hx::fsInt,(int)offsetof(DropShadowFilter_obj,color),HX_HCSTRING("color","\x63","\x71","\x5c","\x4a")},
	{hx::fsFloat,(int)offsetof(DropShadowFilter_obj,distance),HX_HCSTRING("distance","\x35","\x93","\xf9","\x6b")},
	{hx::fsBool,(int)offsetof(DropShadowFilter_obj,hideObject),HX_HCSTRING("hideObject","\x21","\x25","\xc5","\xac")},
	{hx::fsBool,(int)offsetof(DropShadowFilter_obj,inner),HX_HCSTRING("inner","\x96","\x31","\x1c","\xbe")},
	{hx::fsBool,(int)offsetof(DropShadowFilter_obj,knockout),HX_HCSTRING("knockout","\xfa","\xa9","\xa5","\x6f")},
	{hx::fsInt,(int)offsetof(DropShadowFilter_obj,quality),HX_HCSTRING("quality","\xbf","\x04","\x4c","\x44")},
	{hx::fsFloat,(int)offsetof(DropShadowFilter_obj,strength),HX_HCSTRING("strength","\x81","\xd2","\x8e","\x8e")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo *sStaticStorageInfo = 0;
#endif

static ::String sMemberFields[] = {
	HX_HCSTRING("alpha","\x5e","\xa7","\x96","\x21"),
	HX_HCSTRING("angle","\xd3","\x43","\xe2","\x22"),
	HX_HCSTRING("blurX","\xd1","\x0f","\x01","\xb5"),
	HX_HCSTRING("blurY","\xd2","\x0f","\x01","\xb5"),
	HX_HCSTRING("color","\x63","\x71","\x5c","\x4a"),
	HX_HCSTRING("distance","\x35","\x93","\xf9","\x6b"),
	HX_HCSTRING("hideObject","\x21","\x25","\xc5","\xac"),
	HX_HCSTRING("inner","\x96","\x31","\x1c","\xbe"),
	HX_HCSTRING("knockout","\xfa","\xa9","\xa5","\x6f"),
	HX_HCSTRING("quality","\xbf","\x04","\x4c","\x44"),
	HX_HCSTRING("strength","\x81","\xd2","\x8e","\x8e"),
	HX_HCSTRING("clone","\x5d","\x13","\x63","\x48"),
	HX_HCSTRING("set_knockout","\x77","\x81","\xb8","\x39"),
	HX_HCSTRING("set_hideObject","\xde","\x95","\xda","\x42"),
	HX_HCSTRING("set_quality","\xe2","\x6b","\xb3","\xd4"),
	::String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(DropShadowFilter_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(DropShadowFilter_obj::__mClass,"__mClass");
};

#endif

hx::Class DropShadowFilter_obj::__mClass;

void DropShadowFilter_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("openfl.filters.DropShadowFilter","\x58","\x8b","\xe4","\x38");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = hx::Class_obj::dupFunctions(sMemberFields);
	__mClass->mCanCast = hx::TCanCast< DropShadowFilter_obj >;
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
} // end namespace filters
