#include <hxcpp.h>

#include "hxMath.h"
#ifndef INCLUDED_lime_math_Vector2
#include <lime/math/Vector2.h>
#endif
#ifndef INCLUDED_lime_utils_ObjectPool_openfl_geom_Point
#include <lime/utils/ObjectPool_openfl_geom_Point.h>
#endif
#ifndef INCLUDED_openfl_geom_Point
#include <openfl/geom/Point.h>
#endif
namespace openfl{
namespace geom{

Void Point_obj::__construct(hx::Null< Float >  __o_x,hx::Null< Float >  __o_y)
{
Float x = __o_x.Default(0);
Float y = __o_y.Default(0);
{
	this->x = x;
	this->y = y;
}
;
	return null();
}

//Point_obj::~Point_obj() { }

Dynamic Point_obj::__CreateEmpty() { return  new Point_obj; }
hx::ObjectPtr< Point_obj > Point_obj::__new(hx::Null< Float >  __o_x,hx::Null< Float >  __o_y)
{  hx::ObjectPtr< Point_obj > _result_ = new Point_obj();
	_result_->__construct(__o_x,__o_y);
	return _result_;}

Dynamic Point_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< Point_obj > _result_ = new Point_obj();
	_result_->__construct(inArgs[0],inArgs[1]);
	return _result_;}

::openfl::geom::Point Point_obj::add( ::openfl::geom::Point v){
	Float tmp = v->x;
	Float tmp1 = this->x;
	Float tmp2 = (tmp + tmp1);
	Float tmp3 = v->y;
	Float tmp4 = this->y;
	Float tmp5 = (tmp3 + tmp4);
	::openfl::geom::Point tmp6 = ::openfl::geom::Point_obj::__new(tmp2,tmp5);
	return tmp6;
}


HX_DEFINE_DYNAMIC_FUNC1(Point_obj,add,return )

::openfl::geom::Point Point_obj::clone( ){
	Float tmp = this->x;
	Float tmp1 = this->y;
	::openfl::geom::Point tmp2 = ::openfl::geom::Point_obj::__new(tmp,tmp1);
	return tmp2;
}


HX_DEFINE_DYNAMIC_FUNC0(Point_obj,clone,return )

Void Point_obj::copyFrom( ::openfl::geom::Point sourcePoint){
{
		this->x = sourcePoint->x;
		this->y = sourcePoint->y;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Point_obj,copyFrom,(void))

bool Point_obj::equals( ::openfl::geom::Point toCompare){
	bool tmp = (toCompare != null());
	bool tmp1 = tmp;
	bool tmp2;
	if ((tmp1)){
		Float tmp3 = toCompare->x;
		Float tmp4 = this->x;
		Float tmp5 = tmp4;
		Float tmp6 = tmp5;
		tmp2 = (tmp3 == tmp6);
	}
	else{
		tmp2 = false;
	}
	bool tmp3;
	if ((tmp2)){
		Float tmp4 = toCompare->y;
		Float tmp5 = this->y;
		Float tmp6 = tmp5;
		tmp3 = (tmp4 == tmp6);
	}
	else{
		tmp3 = false;
	}
	return tmp3;
}


HX_DEFINE_DYNAMIC_FUNC1(Point_obj,equals,return )

Void Point_obj::normalize( Float thickness){
{
		Float tmp = this->x;
		bool tmp1 = (tmp == (int)0);
		bool tmp2;
		if ((tmp1)){
			Float tmp3 = this->y;
			Float tmp4 = tmp3;
			tmp2 = (tmp4 == (int)0);
		}
		else{
			tmp2 = false;
		}
		if ((tmp2)){
			return null();
		}
		else{
			Float tmp3 = thickness;
			Float tmp4 = this->x;
			Float tmp5 = this->x;
			Float tmp6 = (tmp4 * tmp5);
			Float tmp7 = this->y;
			Float tmp8 = this->y;
			Float tmp9 = (tmp7 * tmp8);
			Float tmp10 = (tmp6 + tmp9);
			Float tmp11 = ::Math_obj::sqrt(tmp10);
			Float tmp12 = (Float(tmp3) / Float(tmp11));
			Float norm = tmp12;
			hx::MultEq(this->x,norm);
			hx::MultEq(this->y,norm);
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Point_obj,normalize,(void))

Void Point_obj::offset( Float dx,Float dy){
{
		hx::AddEq(this->x,dx);
		hx::AddEq(this->y,dy);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(Point_obj,offset,(void))

Void Point_obj::setTo( Float xa,Float ya){
{
		this->x = xa;
		this->y = ya;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(Point_obj,setTo,(void))

::openfl::geom::Point Point_obj::subtract( ::openfl::geom::Point v){
	Float tmp = this->x;
	Float tmp1 = v->x;
	Float tmp2 = (tmp - tmp1);
	Float tmp3 = this->y;
	Float tmp4 = v->y;
	Float tmp5 = (tmp3 - tmp4);
	::openfl::geom::Point tmp6 = ::openfl::geom::Point_obj::__new(tmp2,tmp5);
	return tmp6;
}


HX_DEFINE_DYNAMIC_FUNC1(Point_obj,subtract,return )

::String Point_obj::toString( ){
	Float tmp = this->x;
	::String tmp1 = (HX_HCSTRING("(x=","\xed","\xc2","\x1e","\x00") + tmp);
	::String tmp2 = (tmp1 + HX_HCSTRING(", y=","\x18","\x15","\x2e","\x1d"));
	Float tmp3 = this->y;
	::String tmp4 = (tmp2 + tmp3);
	::String tmp5 = (tmp4 + HX_HCSTRING(")","\x29","\x00","\x00","\x00"));
	return tmp5;
}


HX_DEFINE_DYNAMIC_FUNC0(Point_obj,toString,return )

::lime::math::Vector2 Point_obj::__toLimeVector2( ){
	::lime::math::Vector2 tmp = ::openfl::geom::Point_obj::__limeVector2;
	bool tmp1 = (tmp == null());
	if ((tmp1)){
		::lime::math::Vector2 tmp2 = ::lime::math::Vector2_obj::__new(null(),null());
		::openfl::geom::Point_obj::__limeVector2 = tmp2;
	}
	{
		::lime::math::Vector2 tmp2 = ::openfl::geom::Point_obj::__limeVector2;
		::lime::math::Vector2 _this = tmp2;
		Float tmp3 = this->x;
		_this->x = tmp3;
		Float tmp4 = this->y;
		_this->y = tmp4;
	}
	::lime::math::Vector2 tmp2 = ::openfl::geom::Point_obj::__limeVector2;
	return tmp2;
}


HX_DEFINE_DYNAMIC_FUNC0(Point_obj,__toLimeVector2,return )

Float Point_obj::get_length( ){
	Float tmp = this->x;
	Float tmp1 = this->x;
	Float tmp2 = (tmp * tmp1);
	Float tmp3 = this->y;
	Float tmp4 = this->y;
	Float tmp5 = (tmp3 * tmp4);
	Float tmp6 = (tmp2 + tmp5);
	Float tmp7 = ::Math_obj::sqrt(tmp6);
	return tmp7;
}


HX_DEFINE_DYNAMIC_FUNC0(Point_obj,get_length,return )

::lime::math::Vector2 Point_obj::__limeVector2;

::lime::utils::ObjectPool_openfl_geom_Point Point_obj::__pool;

Float Point_obj::distance( ::openfl::geom::Point pt1,::openfl::geom::Point pt2){
	Float tmp = (pt1->x - pt2->x);
	Float dx = tmp;
	Float tmp1 = (pt1->y - pt2->y);
	Float dy = tmp1;
	Float tmp2 = (dx * dx);
	Float tmp3 = (dy * dy);
	Float tmp4 = (tmp2 + tmp3);
	Float tmp5 = ::Math_obj::sqrt(tmp4);
	return tmp5;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(Point_obj,distance,return )

::openfl::geom::Point Point_obj::interpolate( ::openfl::geom::Point pt1,::openfl::geom::Point pt2,Float f){
	Float tmp = pt2->x;
	Float tmp1 = f;
	Float tmp2 = (pt1->x - pt2->x);
	Float tmp3 = (tmp1 * tmp2);
	Float tmp4 = (tmp + tmp3);
	Float tmp5 = pt2->y;
	Float tmp6 = f;
	Float tmp7 = (pt1->y - pt2->y);
	Float tmp8 = (tmp6 * tmp7);
	Float tmp9 = (tmp5 + tmp8);
	::openfl::geom::Point tmp10 = ::openfl::geom::Point_obj::__new(tmp4,tmp9);
	return tmp10;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC3(Point_obj,interpolate,return )

::openfl::geom::Point Point_obj::polar( Float len,Float angle){
	Float tmp = len;
	Float tmp1 = angle;
	Float tmp2 = ::Math_obj::cos(tmp1);
	Float tmp3 = (tmp * tmp2);
	Float tmp4 = len;
	Float tmp5 = angle;
	Float tmp6 = ::Math_obj::sin(tmp5);
	Float tmp7 = (tmp4 * tmp6);
	::openfl::geom::Point tmp8 = ::openfl::geom::Point_obj::__new(tmp3,tmp7);
	return tmp8;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(Point_obj,polar,return )


Point_obj::Point_obj()
{
}

Dynamic Point_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 1:
		if (HX_FIELD_EQ(inName,"x") ) { return x; }
		if (HX_FIELD_EQ(inName,"y") ) { return y; }
		break;
	case 3:
		if (HX_FIELD_EQ(inName,"add") ) { return add_dyn(); }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"clone") ) { return clone_dyn(); }
		if (HX_FIELD_EQ(inName,"setTo") ) { return setTo_dyn(); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"length") ) { if (inCallProp == hx::paccAlways) return get_length(); }
		if (HX_FIELD_EQ(inName,"equals") ) { return equals_dyn(); }
		if (HX_FIELD_EQ(inName,"offset") ) { return offset_dyn(); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"copyFrom") ) { return copyFrom_dyn(); }
		if (HX_FIELD_EQ(inName,"subtract") ) { return subtract_dyn(); }
		if (HX_FIELD_EQ(inName,"toString") ) { return toString_dyn(); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"normalize") ) { return normalize_dyn(); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"get_length") ) { return get_length_dyn(); }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"__toLimeVector2") ) { return __toLimeVector2_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

bool Point_obj::__GetStatic(const ::String &inName, Dynamic &outValue, hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"polar") ) { outValue = polar_dyn(); return true;  }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"__pool") ) { outValue = __pool; return true;  }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"distance") ) { outValue = distance_dyn(); return true;  }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"interpolate") ) { outValue = interpolate_dyn(); return true;  }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"__limeVector2") ) { outValue = __limeVector2; return true;  }
	}
	return false;
}

Dynamic Point_obj::__SetField(const ::String &inName,const Dynamic &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 1:
		if (HX_FIELD_EQ(inName,"x") ) { x=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"y") ) { y=inValue.Cast< Float >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

bool Point_obj::__SetStatic(const ::String &inName,Dynamic &ioValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 6:
		if (HX_FIELD_EQ(inName,"__pool") ) { __pool=ioValue.Cast< ::lime::utils::ObjectPool_openfl_geom_Point >(); return true; }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"__limeVector2") ) { __limeVector2=ioValue.Cast< ::lime::math::Vector2 >(); return true; }
	}
	return false;
}

void Point_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("length","\xe6","\x94","\x07","\x9f"));
	outFields->push(HX_HCSTRING("x","\x78","\x00","\x00","\x00"));
	outFields->push(HX_HCSTRING("y","\x79","\x00","\x00","\x00"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsFloat,(int)offsetof(Point_obj,x),HX_HCSTRING("x","\x78","\x00","\x00","\x00")},
	{hx::fsFloat,(int)offsetof(Point_obj,y),HX_HCSTRING("y","\x79","\x00","\x00","\x00")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo sStaticStorageInfo[] = {
	{hx::fsObject /*::lime::math::Vector2*/ ,(void *) &Point_obj::__limeVector2,HX_HCSTRING("__limeVector2","\x5a","\x88","\x77","\x8e")},
	{hx::fsObject /*::lime::utils::ObjectPool_openfl_geom_Point*/ ,(void *) &Point_obj::__pool,HX_HCSTRING("__pool","\xfc","\xe3","\x54","\xf9")},
	{ hx::fsUnknown, 0, null()}
};
#endif

static ::String sMemberFields[] = {
	HX_HCSTRING("x","\x78","\x00","\x00","\x00"),
	HX_HCSTRING("y","\x79","\x00","\x00","\x00"),
	HX_HCSTRING("add","\x21","\xf2","\x49","\x00"),
	HX_HCSTRING("clone","\x5d","\x13","\x63","\x48"),
	HX_HCSTRING("copyFrom","\xbf","\x0b","\x61","\xc8"),
	HX_HCSTRING("equals","\x3f","\xee","\xf2","\xbf"),
	HX_HCSTRING("normalize","\x8d","\x37","\xa1","\xab"),
	HX_HCSTRING("offset","\x93","\x97","\x3f","\x60"),
	HX_HCSTRING("setTo","\xbd","\x91","\x2f","\x7a"),
	HX_HCSTRING("subtract","\x14","\x75","\x11","\xf8"),
	HX_HCSTRING("toString","\xac","\xd0","\x6e","\x38"),
	HX_HCSTRING("__toLimeVector2","\x9f","\x7e","\x1d","\xcf"),
	HX_HCSTRING("get_length","\xaf","\x04","\x8f","\x8f"),
	::String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(Point_obj::__mClass,"__mClass");
	HX_MARK_MEMBER_NAME(Point_obj::__limeVector2,"__limeVector2");
	HX_MARK_MEMBER_NAME(Point_obj::__pool,"__pool");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(Point_obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(Point_obj::__limeVector2,"__limeVector2");
	HX_VISIT_MEMBER_NAME(Point_obj::__pool,"__pool");
};

#endif

hx::Class Point_obj::__mClass;

static ::String sStaticFields[] = {
	HX_HCSTRING("__limeVector2","\x5a","\x88","\x77","\x8e"),
	HX_HCSTRING("__pool","\xfc","\xe3","\x54","\xf9"),
	HX_HCSTRING("distance","\x35","\x93","\xf9","\x6b"),
	HX_HCSTRING("interpolate","\xc1","\xd4","\x32","\x1f"),
	HX_HCSTRING("polar","\xbe","\xef","\x91","\xc6"),
	::String(null()) };

void Point_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("openfl.geom.Point","\x1c","\xdd","\xd4","\xe0");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &Point_obj::__GetStatic;
	__mClass->mSetStaticField = &Point_obj::__SetStatic;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(sStaticFields);
	__mClass->mMembers = hx::Class_obj::dupFunctions(sMemberFields);
	__mClass->mCanCast = hx::TCanCast< Point_obj >;
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

void Point_obj::__boot()
{

HX_BEGIN_LOCAL_FUNC_S0(hx::LocalFunc,_Function_0_1)
int __ArgCount() const { return 0; }
::openfl::geom::Point run(){
	{
		::openfl::geom::Point tmp = ::openfl::geom::Point_obj::__new(null(),null());
		return tmp;
	}
	return null();
}
HX_END_LOCAL_FUNC0(return)


HX_BEGIN_LOCAL_FUNC_S0(hx::LocalFunc,_Function_0_2)
int __ArgCount() const { return 1; }
Void run(::openfl::geom::Point p){
	{
		p->setTo((int)0,(int)0);
	}
	return null();
}
HX_END_LOCAL_FUNC1((void))

	__pool= ::lime::utils::ObjectPool_openfl_geom_Point_obj::__new( Dynamic(new _Function_0_1()), Dynamic(new _Function_0_2()),null());
}

} // end namespace openfl
} // end namespace geom
