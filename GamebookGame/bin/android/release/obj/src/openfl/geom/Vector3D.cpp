#include <hxcpp.h>

#include "hxMath.h"
#ifndef INCLUDED_openfl_geom_Vector3D
#include <openfl/geom/Vector3D.h>
#endif
namespace openfl{
namespace geom{

Void Vector3D_obj::__construct(hx::Null< Float >  __o_x,hx::Null< Float >  __o_y,hx::Null< Float >  __o_z,hx::Null< Float >  __o_w)
{
Float x = __o_x.Default(0);
Float y = __o_y.Default(0);
Float z = __o_z.Default(0);
Float w = __o_w.Default(0);
{
	this->w = w;
	this->x = x;
	this->y = y;
	this->z = z;
}
;
	return null();
}

//Vector3D_obj::~Vector3D_obj() { }

Dynamic Vector3D_obj::__CreateEmpty() { return  new Vector3D_obj; }
hx::ObjectPtr< Vector3D_obj > Vector3D_obj::__new(hx::Null< Float >  __o_x,hx::Null< Float >  __o_y,hx::Null< Float >  __o_z,hx::Null< Float >  __o_w)
{  hx::ObjectPtr< Vector3D_obj > _result_ = new Vector3D_obj();
	_result_->__construct(__o_x,__o_y,__o_z,__o_w);
	return _result_;}

Dynamic Vector3D_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< Vector3D_obj > _result_ = new Vector3D_obj();
	_result_->__construct(inArgs[0],inArgs[1],inArgs[2],inArgs[3]);
	return _result_;}

::openfl::geom::Vector3D Vector3D_obj::add( ::openfl::geom::Vector3D a){
	Float tmp = this->x;
	Float tmp1 = a->x;
	Float tmp2 = (tmp + tmp1);
	Float tmp3 = this->y;
	Float tmp4 = a->y;
	Float tmp5 = (tmp3 + tmp4);
	Float tmp6 = this->z;
	Float tmp7 = a->z;
	Float tmp8 = (tmp6 + tmp7);
	::openfl::geom::Vector3D tmp9 = ::openfl::geom::Vector3D_obj::__new(tmp2,tmp5,tmp8,null());
	return tmp9;
}


HX_DEFINE_DYNAMIC_FUNC1(Vector3D_obj,add,return )

::openfl::geom::Vector3D Vector3D_obj::clone( ){
	Float tmp = this->x;
	Float tmp1 = this->y;
	Float tmp2 = this->z;
	Float tmp3 = this->w;
	::openfl::geom::Vector3D tmp4 = ::openfl::geom::Vector3D_obj::__new(tmp,tmp1,tmp2,tmp3);
	return tmp4;
}


HX_DEFINE_DYNAMIC_FUNC0(Vector3D_obj,clone,return )

Void Vector3D_obj::copyFrom( ::openfl::geom::Vector3D sourceVector3D){
{
		this->x = sourceVector3D->x;
		this->y = sourceVector3D->y;
		this->z = sourceVector3D->z;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Vector3D_obj,copyFrom,(void))

::openfl::geom::Vector3D Vector3D_obj::crossProduct( ::openfl::geom::Vector3D a){
	Float tmp = this->y;
	Float tmp1 = a->z;
	Float tmp2 = (tmp * tmp1);
	Float tmp3 = this->z;
	Float tmp4 = a->y;
	Float tmp5 = (tmp3 * tmp4);
	Float tmp6 = (tmp2 - tmp5);
	Float tmp7 = this->z;
	Float tmp8 = a->x;
	Float tmp9 = (tmp7 * tmp8);
	Float tmp10 = this->x;
	Float tmp11 = a->z;
	Float tmp12 = (tmp10 * tmp11);
	Float tmp13 = (tmp9 - tmp12);
	Float tmp14 = this->x;
	Float tmp15 = a->y;
	Float tmp16 = (tmp14 * tmp15);
	Float tmp17 = this->y;
	Float tmp18 = a->x;
	Float tmp19 = (tmp17 * tmp18);
	Float tmp20 = (tmp16 - tmp19);
	::openfl::geom::Vector3D tmp21 = ::openfl::geom::Vector3D_obj::__new(tmp6,tmp13,tmp20,(int)1);
	return tmp21;
}


HX_DEFINE_DYNAMIC_FUNC1(Vector3D_obj,crossProduct,return )

Void Vector3D_obj::decrementBy( ::openfl::geom::Vector3D a){
{
		hx::SubEq(this->x,a->x);
		hx::SubEq(this->y,a->y);
		hx::SubEq(this->z,a->z);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Vector3D_obj,decrementBy,(void))

Float Vector3D_obj::dotProduct( ::openfl::geom::Vector3D a){
	Float tmp = this->x;
	Float tmp1 = a->x;
	Float tmp2 = (tmp * tmp1);
	Float tmp3 = this->y;
	Float tmp4 = a->y;
	Float tmp5 = (tmp3 * tmp4);
	Float tmp6 = (tmp2 + tmp5);
	Float tmp7 = this->z;
	Float tmp8 = a->z;
	Float tmp9 = (tmp7 * tmp8);
	Float tmp10 = (tmp6 + tmp9);
	return tmp10;
}


HX_DEFINE_DYNAMIC_FUNC1(Vector3D_obj,dotProduct,return )

bool Vector3D_obj::equals( ::openfl::geom::Vector3D toCompare,hx::Null< bool >  __o_allFour){
bool allFour = __o_allFour.Default(false);
{
		Float tmp = this->x;
		Float tmp1 = toCompare->x;
		bool tmp2 = (tmp == tmp1);
		bool tmp3 = tmp2;
		bool tmp4;
		if ((tmp3)){
			Float tmp5 = this->y;
			Float tmp6 = tmp5;
			Float tmp7 = tmp6;
			Float tmp8 = toCompare->y;
			tmp4 = (tmp7 == tmp8);
		}
		else{
			tmp4 = false;
		}
		bool tmp5 = tmp4;
		bool tmp6;
		if ((tmp5)){
			Float tmp7 = this->z;
			Float tmp8 = tmp7;
			Float tmp9 = tmp8;
			Float tmp10 = toCompare->z;
			tmp6 = (tmp9 == tmp10);
		}
		else{
			tmp6 = false;
		}
		bool tmp7;
		if ((tmp6)){
			bool tmp8 = allFour;
			bool tmp9 = tmp8;
			bool tmp10 = tmp9;
			bool tmp11 = !(tmp10);
			bool tmp12 = tmp11;
			bool tmp13 = tmp12;
			bool tmp14 = !(tmp13);
			bool tmp15 = tmp14;
			bool tmp16 = tmp15;
			if ((tmp16)){
				Float tmp17 = this->w;
				Float tmp18 = tmp17;
				Float tmp19 = tmp18;
				Float tmp20 = toCompare->w;
				tmp7 = (tmp19 == tmp20);
			}
			else{
				tmp7 = true;
			}
		}
		else{
			tmp7 = false;
		}
		return tmp7;
	}
}


HX_DEFINE_DYNAMIC_FUNC2(Vector3D_obj,equals,return )

Void Vector3D_obj::incrementBy( ::openfl::geom::Vector3D a){
{
		hx::AddEq(this->x,a->x);
		hx::AddEq(this->y,a->y);
		hx::AddEq(this->z,a->z);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Vector3D_obj,incrementBy,(void))

bool Vector3D_obj::nearEquals( ::openfl::geom::Vector3D toCompare,Float tolerance,Dynamic __o_allFour){
Dynamic allFour = __o_allFour.Default(false);
{
		Float tmp = this->x;
		Float tmp1 = toCompare->x;
		Float tmp2 = (tmp - tmp1);
		Float tmp3 = ::Math_obj::abs(tmp2);
		Float tmp4 = tolerance;
		bool tmp5 = (tmp3 < tmp4);
		bool tmp6 = tmp5;
		bool tmp7;
		if ((tmp6)){
			Float tmp8 = this->y;
			Float tmp9 = tmp8;
			Float tmp10 = tmp9;
			Float tmp11 = toCompare->y;
			Float tmp12 = (tmp10 - tmp11);
			Float tmp13 = tmp12;
			Float tmp14 = tmp13;
			Float tmp15 = tmp14;
			Float tmp16 = tmp15;
			Float tmp17 = ::Math_obj::abs(tmp16);
			Float tmp18 = tmp17;
			Float tmp19 = tmp18;
			Float tmp20 = tolerance;
			tmp7 = (tmp19 < tmp20);
		}
		else{
			tmp7 = false;
		}
		bool tmp8 = tmp7;
		bool tmp9;
		if ((tmp8)){
			Float tmp10 = this->z;
			Float tmp11 = tmp10;
			Float tmp12 = tmp11;
			Float tmp13 = toCompare->z;
			Float tmp14 = (tmp12 - tmp13);
			Float tmp15 = tmp14;
			Float tmp16 = tmp15;
			Float tmp17 = tmp16;
			Float tmp18 = tmp17;
			Float tmp19 = ::Math_obj::abs(tmp18);
			Float tmp20 = tmp19;
			Float tmp21 = tmp20;
			Float tmp22 = tolerance;
			tmp9 = (tmp21 < tmp22);
		}
		else{
			tmp9 = false;
		}
		bool tmp10;
		if ((tmp9)){
			Dynamic tmp11 = allFour;
			Dynamic tmp12 = tmp11;
			Dynamic tmp13 = tmp12;
			bool tmp14 = !(tmp13);
			bool tmp15 = tmp14;
			bool tmp16 = tmp15;
			bool tmp17 = !(tmp16);
			bool tmp18 = tmp17;
			bool tmp19 = tmp18;
			if ((tmp19)){
				Float tmp20 = this->w;
				Float tmp21 = tmp20;
				Float tmp22 = tmp21;
				Float tmp23 = toCompare->w;
				Float tmp24 = (tmp22 - tmp23);
				Float tmp25 = tmp24;
				Float tmp26 = tmp25;
				Float tmp27 = tmp26;
				Float tmp28 = tmp27;
				Float tmp29 = ::Math_obj::abs(tmp28);
				Float tmp30 = tmp29;
				Float tmp31 = tmp30;
				Float tmp32 = tolerance;
				tmp10 = (tmp31 < tmp32);
			}
			else{
				tmp10 = true;
			}
		}
		else{
			tmp10 = false;
		}
		return tmp10;
	}
}


HX_DEFINE_DYNAMIC_FUNC3(Vector3D_obj,nearEquals,return )

Void Vector3D_obj::negate( ){
{
		hx::MultEq(this->x,(int)-1);
		hx::MultEq(this->y,(int)-1);
		hx::MultEq(this->z,(int)-1);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(Vector3D_obj,negate,(void))

Float Vector3D_obj::normalize( ){
	Float tmp = this->get_length();
	Float l = tmp;
	bool tmp1 = (l != (int)0);
	if ((tmp1)){
		hx::DivEq(this->x,l);
		hx::DivEq(this->y,l);
		hx::DivEq(this->z,l);
	}
	Float tmp2 = l;
	return tmp2;
}


HX_DEFINE_DYNAMIC_FUNC0(Vector3D_obj,normalize,return )

Void Vector3D_obj::project( ){
{
		Float tmp = this->w;
		hx::DivEq(this->x,tmp);
		Float tmp1 = this->w;
		hx::DivEq(this->y,tmp1);
		Float tmp2 = this->w;
		hx::DivEq(this->z,tmp2);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(Vector3D_obj,project,(void))

Void Vector3D_obj::scaleBy( Float s){
{
		hx::MultEq(this->x,s);
		hx::MultEq(this->y,s);
		hx::MultEq(this->z,s);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Vector3D_obj,scaleBy,(void))

Void Vector3D_obj::setTo( Float xa,Float ya,Float za){
{
		this->x = xa;
		this->y = ya;
		this->z = za;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC3(Vector3D_obj,setTo,(void))

::openfl::geom::Vector3D Vector3D_obj::subtract( ::openfl::geom::Vector3D a){
	Float tmp = this->x;
	Float tmp1 = a->x;
	Float tmp2 = (tmp - tmp1);
	Float tmp3 = this->y;
	Float tmp4 = a->y;
	Float tmp5 = (tmp3 - tmp4);
	Float tmp6 = this->z;
	Float tmp7 = a->z;
	Float tmp8 = (tmp6 - tmp7);
	::openfl::geom::Vector3D tmp9 = ::openfl::geom::Vector3D_obj::__new(tmp2,tmp5,tmp8,null());
	return tmp9;
}


HX_DEFINE_DYNAMIC_FUNC1(Vector3D_obj,subtract,return )

::String Vector3D_obj::toString( ){
	Float tmp = this->x;
	::String tmp1 = (HX_HCSTRING("Vector3D(","\x54","\xb9","\x2e","\x19") + tmp);
	::String tmp2 = (tmp1 + HX_HCSTRING(", ","\x74","\x26","\x00","\x00"));
	Float tmp3 = this->y;
	::String tmp4 = (tmp2 + tmp3);
	::String tmp5 = (tmp4 + HX_HCSTRING(", ","\x74","\x26","\x00","\x00"));
	Float tmp6 = this->z;
	::String tmp7 = (tmp5 + tmp6);
	::String tmp8 = (tmp7 + HX_HCSTRING(")","\x29","\x00","\x00","\x00"));
	return tmp8;
}


HX_DEFINE_DYNAMIC_FUNC0(Vector3D_obj,toString,return )

Float Vector3D_obj::get_length( ){
	Float tmp = this->x;
	Float tmp1 = this->x;
	Float tmp2 = (tmp * tmp1);
	Float tmp3 = this->y;
	Float tmp4 = this->y;
	Float tmp5 = (tmp3 * tmp4);
	Float tmp6 = (tmp2 + tmp5);
	Float tmp7 = this->z;
	Float tmp8 = this->z;
	Float tmp9 = (tmp7 * tmp8);
	Float tmp10 = (tmp6 + tmp9);
	Float tmp11 = ::Math_obj::sqrt(tmp10);
	return tmp11;
}


HX_DEFINE_DYNAMIC_FUNC0(Vector3D_obj,get_length,return )

Float Vector3D_obj::get_lengthSquared( ){
	Float tmp = this->x;
	Float tmp1 = this->x;
	Float tmp2 = (tmp * tmp1);
	Float tmp3 = this->y;
	Float tmp4 = this->y;
	Float tmp5 = (tmp3 * tmp4);
	Float tmp6 = (tmp2 + tmp5);
	Float tmp7 = this->z;
	Float tmp8 = this->z;
	Float tmp9 = (tmp7 * tmp8);
	Float tmp10 = (tmp6 + tmp9);
	return tmp10;
}


HX_DEFINE_DYNAMIC_FUNC0(Vector3D_obj,get_lengthSquared,return )

Float Vector3D_obj::angleBetween( ::openfl::geom::Vector3D a,::openfl::geom::Vector3D b){
	Float tmp = a->get_length();
	Float la = tmp;
	Float tmp1 = b->get_length();
	Float lb = tmp1;
	::openfl::geom::Vector3D tmp2 = b;
	Float tmp3 = a->dotProduct(tmp2);
	Float dot = tmp3;
	bool tmp4 = (la != (int)0);
	if ((tmp4)){
		hx::DivEq(dot,la);
	}
	bool tmp5 = (lb != (int)0);
	if ((tmp5)){
		hx::DivEq(dot,lb);
	}
	Float tmp6 = dot;
	Float tmp7 = ::Math_obj::acos(tmp6);
	return tmp7;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(Vector3D_obj,angleBetween,return )

Float Vector3D_obj::distance( ::openfl::geom::Vector3D pt1,::openfl::geom::Vector3D pt2){
	Float tmp = (pt2->x - pt1->x);
	Float x = tmp;
	Float tmp1 = (pt2->y - pt1->y);
	Float y = tmp1;
	Float tmp2 = (pt2->z - pt1->z);
	Float z = tmp2;
	Float tmp3 = (x * x);
	Float tmp4 = (y * y);
	Float tmp5 = (tmp3 + tmp4);
	Float tmp6 = (z * z);
	Float tmp7 = (tmp5 + tmp6);
	Float tmp8 = ::Math_obj::sqrt(tmp7);
	return tmp8;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(Vector3D_obj,distance,return )

::openfl::geom::Vector3D Vector3D_obj::get_X_AXIS( ){
	::openfl::geom::Vector3D tmp = ::openfl::geom::Vector3D_obj::__new((int)1,(int)0,(int)0,null());
	return tmp;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(Vector3D_obj,get_X_AXIS,return )

::openfl::geom::Vector3D Vector3D_obj::get_Y_AXIS( ){
	::openfl::geom::Vector3D tmp = ::openfl::geom::Vector3D_obj::__new((int)0,(int)1,(int)0,null());
	return tmp;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(Vector3D_obj,get_Y_AXIS,return )

::openfl::geom::Vector3D Vector3D_obj::get_Z_AXIS( ){
	::openfl::geom::Vector3D tmp = ::openfl::geom::Vector3D_obj::__new((int)0,(int)0,(int)1,null());
	return tmp;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(Vector3D_obj,get_Z_AXIS,return )


Vector3D_obj::Vector3D_obj()
{
}

Dynamic Vector3D_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 1:
		if (HX_FIELD_EQ(inName,"w") ) { return w; }
		if (HX_FIELD_EQ(inName,"x") ) { return x; }
		if (HX_FIELD_EQ(inName,"y") ) { return y; }
		if (HX_FIELD_EQ(inName,"z") ) { return z; }
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
		if (HX_FIELD_EQ(inName,"negate") ) { return negate_dyn(); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"project") ) { return project_dyn(); }
		if (HX_FIELD_EQ(inName,"scaleBy") ) { return scaleBy_dyn(); }
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
		if (HX_FIELD_EQ(inName,"dotProduct") ) { return dotProduct_dyn(); }
		if (HX_FIELD_EQ(inName,"nearEquals") ) { return nearEquals_dyn(); }
		if (HX_FIELD_EQ(inName,"get_length") ) { return get_length_dyn(); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"decrementBy") ) { return decrementBy_dyn(); }
		if (HX_FIELD_EQ(inName,"incrementBy") ) { return incrementBy_dyn(); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"crossProduct") ) { return crossProduct_dyn(); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"lengthSquared") ) { if (inCallProp == hx::paccAlways) return get_lengthSquared(); }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"get_lengthSquared") ) { return get_lengthSquared_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

bool Vector3D_obj::__GetStatic(const ::String &inName, Dynamic &outValue, hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 6:
		if (HX_FIELD_EQ(inName,"X_AXIS") ) { if (inCallProp == hx::paccAlways) { outValue = get_X_AXIS(); return true; } }
		if (HX_FIELD_EQ(inName,"Y_AXIS") ) { if (inCallProp == hx::paccAlways) { outValue = get_Y_AXIS(); return true; } }
		if (HX_FIELD_EQ(inName,"Z_AXIS") ) { if (inCallProp == hx::paccAlways) { outValue = get_Z_AXIS(); return true; } }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"distance") ) { outValue = distance_dyn(); return true;  }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"get_X_AXIS") ) { outValue = get_X_AXIS_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"get_Y_AXIS") ) { outValue = get_Y_AXIS_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"get_Z_AXIS") ) { outValue = get_Z_AXIS_dyn(); return true;  }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"angleBetween") ) { outValue = angleBetween_dyn(); return true;  }
	}
	return false;
}

Dynamic Vector3D_obj::__SetField(const ::String &inName,const Dynamic &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 1:
		if (HX_FIELD_EQ(inName,"w") ) { w=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"x") ) { x=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"y") ) { y=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"z") ) { z=inValue.Cast< Float >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void Vector3D_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("length","\xe6","\x94","\x07","\x9f"));
	outFields->push(HX_HCSTRING("lengthSquared","\xe1","\x24","\x45","\x35"));
	outFields->push(HX_HCSTRING("w","\x77","\x00","\x00","\x00"));
	outFields->push(HX_HCSTRING("x","\x78","\x00","\x00","\x00"));
	outFields->push(HX_HCSTRING("y","\x79","\x00","\x00","\x00"));
	outFields->push(HX_HCSTRING("z","\x7a","\x00","\x00","\x00"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsFloat,(int)offsetof(Vector3D_obj,w),HX_HCSTRING("w","\x77","\x00","\x00","\x00")},
	{hx::fsFloat,(int)offsetof(Vector3D_obj,x),HX_HCSTRING("x","\x78","\x00","\x00","\x00")},
	{hx::fsFloat,(int)offsetof(Vector3D_obj,y),HX_HCSTRING("y","\x79","\x00","\x00","\x00")},
	{hx::fsFloat,(int)offsetof(Vector3D_obj,z),HX_HCSTRING("z","\x7a","\x00","\x00","\x00")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo *sStaticStorageInfo = 0;
#endif

static ::String sMemberFields[] = {
	HX_HCSTRING("w","\x77","\x00","\x00","\x00"),
	HX_HCSTRING("x","\x78","\x00","\x00","\x00"),
	HX_HCSTRING("y","\x79","\x00","\x00","\x00"),
	HX_HCSTRING("z","\x7a","\x00","\x00","\x00"),
	HX_HCSTRING("add","\x21","\xf2","\x49","\x00"),
	HX_HCSTRING("clone","\x5d","\x13","\x63","\x48"),
	HX_HCSTRING("copyFrom","\xbf","\x0b","\x61","\xc8"),
	HX_HCSTRING("crossProduct","\x8f","\xa7","\xc9","\x63"),
	HX_HCSTRING("decrementBy","\xca","\x1a","\x7a","\xad"),
	HX_HCSTRING("dotProduct","\xa6","\x27","\xf0","\x3d"),
	HX_HCSTRING("equals","\x3f","\xee","\xf2","\xbf"),
	HX_HCSTRING("incrementBy","\xe6","\x69","\x70","\xf4"),
	HX_HCSTRING("nearEquals","\x47","\x71","\x71","\xfe"),
	HX_HCSTRING("negate","\xc2","\x41","\x19","\x67"),
	HX_HCSTRING("normalize","\x8d","\x37","\xa1","\xab"),
	HX_HCSTRING("project","\xd9","\x12","\xeb","\xf5"),
	HX_HCSTRING("scaleBy","\x01","\x3f","\x07","\x65"),
	HX_HCSTRING("setTo","\xbd","\x91","\x2f","\x7a"),
	HX_HCSTRING("subtract","\x14","\x75","\x11","\xf8"),
	HX_HCSTRING("toString","\xac","\xd0","\x6e","\x38"),
	HX_HCSTRING("get_length","\xaf","\x04","\x8f","\x8f"),
	HX_HCSTRING("get_lengthSquared","\x38","\x30","\xb5","\x3b"),
	::String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(Vector3D_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(Vector3D_obj::__mClass,"__mClass");
};

#endif

hx::Class Vector3D_obj::__mClass;

static ::String sStaticFields[] = {
	HX_HCSTRING("angleBetween","\x35","\xe6","\xd4","\x69"),
	HX_HCSTRING("distance","\x35","\x93","\xf9","\x6b"),
	HX_HCSTRING("get_X_AXIS","\xf1","\x30","\x3a","\xfe"),
	HX_HCSTRING("get_Y_AXIS","\x50","\x8d","\x95","\x64"),
	HX_HCSTRING("get_Z_AXIS","\xaf","\xe9","\xf0","\xca"),
	::String(null()) };

void Vector3D_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("openfl.geom.Vector3D","\xe8","\x32","\xf9","\x44");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &Vector3D_obj::__GetStatic;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(sStaticFields);
	__mClass->mMembers = hx::Class_obj::dupFunctions(sMemberFields);
	__mClass->mCanCast = hx::TCanCast< Vector3D_obj >;
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
} // end namespace geom
