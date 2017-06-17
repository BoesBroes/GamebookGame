#include <hxcpp.h>

#include "hxMath.h"
#ifndef INCLUDED_openfl__Vector_FloatVector
#include <openfl/_Vector/FloatVector.h>
#endif
#ifndef INCLUDED_openfl__Vector_IVector
#include <openfl/_Vector/IVector.h>
#endif
#ifndef INCLUDED_openfl_display_DisplayObject
#include <openfl/display/DisplayObject.h>
#endif
#ifndef INCLUDED_openfl_display_IBitmapDrawable
#include <openfl/display/IBitmapDrawable.h>
#endif
#ifndef INCLUDED_openfl_events_EventDispatcher
#include <openfl/events/EventDispatcher.h>
#endif
#ifndef INCLUDED_openfl_events_IEventDispatcher
#include <openfl/events/IEventDispatcher.h>
#endif
#ifndef INCLUDED_openfl_geom_ColorTransform
#include <openfl/geom/ColorTransform.h>
#endif
#ifndef INCLUDED_openfl_geom_Matrix
#include <openfl/geom/Matrix.h>
#endif
#ifndef INCLUDED_openfl_geom_Matrix3D
#include <openfl/geom/Matrix3D.h>
#endif
#ifndef INCLUDED_openfl_geom_Rectangle
#include <openfl/geom/Rectangle.h>
#endif
#ifndef INCLUDED_openfl_geom_Transform
#include <openfl/geom/Transform.h>
#endif
namespace openfl{
namespace geom{

Void Transform_obj::__construct(::openfl::display::DisplayObject displayObject)
{
{
	::openfl::geom::ColorTransform tmp = ::openfl::geom::ColorTransform_obj::__new(null(),null(),null(),null(),null(),null(),null(),null());
	this->__colorTransform = tmp;
	::openfl::geom::ColorTransform tmp1 = ::openfl::geom::ColorTransform_obj::__new(null(),null(),null(),null(),null(),null(),null(),null());
	this->concatenatedColorTransform = tmp1;
	::openfl::geom::Rectangle tmp2 = ::openfl::geom::Rectangle_obj::__new(null(),null(),null(),null());
	this->pixelBounds = tmp2;
	this->__displayObject = displayObject;
	this->__hasMatrix = true;
}
;
	return null();
}

//Transform_obj::~Transform_obj() { }

Dynamic Transform_obj::__CreateEmpty() { return  new Transform_obj; }
hx::ObjectPtr< Transform_obj > Transform_obj::__new(::openfl::display::DisplayObject displayObject)
{  hx::ObjectPtr< Transform_obj > _result_ = new Transform_obj();
	_result_->__construct(displayObject);
	return _result_;}

Dynamic Transform_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< Transform_obj > _result_ = new Transform_obj();
	_result_->__construct(inArgs[0]);
	return _result_;}

::openfl::geom::ColorTransform Transform_obj::get_colorTransform( ){
	::openfl::geom::ColorTransform tmp = this->__colorTransform;
	return tmp;
}


HX_DEFINE_DYNAMIC_FUNC0(Transform_obj,get_colorTransform,return )

::openfl::geom::ColorTransform Transform_obj::set_colorTransform( ::openfl::geom::ColorTransform value){
	::openfl::geom::ColorTransform tmp = this->__colorTransform;
	::openfl::geom::ColorTransform tmp1 = value;
	bool tmp2 = tmp->__equals(tmp1,null());
	bool tmp3 = !(tmp2);
	if ((tmp3)){
		this->__colorTransform = value;
		bool tmp4 = (value != null());
		if ((tmp4)){
			::openfl::display::DisplayObject tmp5 = this->__displayObject;
			Float tmp6 = value->alphaMultiplier;
			tmp5->set_alpha(tmp6);
		}
		{
			::openfl::display::DisplayObject tmp5 = this->__displayObject;
			::openfl::display::DisplayObject _this = tmp5;
			bool tmp6 = _this->__renderDirty;
			bool tmp7 = !(tmp6);
			if ((tmp7)){
				_this->__renderDirty = true;
				_this->__setParentRenderDirty();
			}
		}
	}
	::openfl::geom::ColorTransform tmp4 = this->__colorTransform;
	return tmp4;
}


HX_DEFINE_DYNAMIC_FUNC1(Transform_obj,set_colorTransform,return )

::openfl::geom::Matrix Transform_obj::get_concatenatedMatrix( ){
	bool tmp = this->__hasMatrix;
	if ((tmp)){
		::openfl::display::DisplayObject tmp1 = this->__displayObject;
		::openfl::geom::Matrix tmp2 = tmp1->__getWorldTransform();
		::openfl::geom::Matrix tmp3 = tmp2->clone();
		return tmp3;
	}
	return null();
}


HX_DEFINE_DYNAMIC_FUNC0(Transform_obj,get_concatenatedMatrix,return )

::openfl::geom::Matrix Transform_obj::get_matrix( ){
	bool tmp = this->__hasMatrix;
	if ((tmp)){
		::openfl::display::DisplayObject tmp1 = this->__displayObject;
		::openfl::geom::Matrix tmp2 = tmp1->__transform->clone();
		return tmp2;
	}
	return null();
}


HX_DEFINE_DYNAMIC_FUNC0(Transform_obj,get_matrix,return )

::openfl::geom::Matrix Transform_obj::set_matrix( ::openfl::geom::Matrix value){
	bool tmp = (value == null());
	if ((tmp)){
		this->__hasMatrix = false;
		return null();
	}
	this->__hasMatrix = true;
	this->__hasMatrix3D = false;
	::openfl::display::DisplayObject tmp1 = this->__displayObject;
	bool tmp2 = (tmp1 != null());
	if ((tmp2)){
		Float tmp3 = value->a;
		Float tmp4 = value->b;
		Float tmp5 = value->c;
		Float tmp6 = value->d;
		Float tmp7 = value->tx;
		Float tmp8 = value->ty;
		this->__setTransform(tmp3,tmp4,tmp5,tmp6,tmp7,tmp8);
	}
	::openfl::geom::Matrix tmp3 = value;
	return tmp3;
}


HX_DEFINE_DYNAMIC_FUNC1(Transform_obj,set_matrix,return )

::openfl::geom::Matrix3D Transform_obj::get_matrix3D( ){
	bool tmp = this->__hasMatrix3D;
	if ((tmp)){
		::openfl::display::DisplayObject tmp1 = this->__displayObject;
		::openfl::geom::Matrix matrix = tmp1->__transform;
		::openfl::_Vector::FloatVector tmp2;
		{
			Array< Float > a = Array_obj< Float >::__new().Add(matrix->a).Add(matrix->b).Add(((Float)0.0)).Add(((Float)0.0)).Add(matrix->c).Add(matrix->d).Add(((Float)0.0)).Add(((Float)0.0)).Add(((Float)0.0)).Add(((Float)0.0)).Add(((Float)1.0)).Add(((Float)0.0)).Add(matrix->tx).Add(matrix->ty).Add(((Float)0.0)).Add(((Float)1.0));
			::openfl::_Vector::FloatVector tmp3;
			{
				int length = null();
				bool fixed = null();
				::openfl::_Vector::FloatVector tmp4 = ::openfl::_Vector::FloatVector_obj::__new(length,fixed,null());
				::openfl::_Vector::FloatVector tmp5 = tmp4;
				tmp3 = tmp5;
			}
			::openfl::_Vector::FloatVector vector = tmp3;
			{
				int _g1 = (int)0;
				int _g = a->length;
				while((true)){
					bool tmp4 = (_g1 < _g);
					bool tmp5 = !(tmp4);
					if ((tmp5)){
						break;
					}
					int tmp6 = (_g1)++;
					int i = tmp6;
					int tmp7 = i;
					Float tmp8 = a->__get(i);
					Float tmp9 = tmp8;
					Float tmp10 = vector->set(tmp7,tmp9);
					tmp10;
				}
			}
			tmp2 = vector;
		}
		::openfl::geom::Matrix3D tmp3 = ::openfl::geom::Matrix3D_obj::__new(tmp2);
		return tmp3;
	}
	return null();
}


HX_DEFINE_DYNAMIC_FUNC0(Transform_obj,get_matrix3D,return )

::openfl::geom::Matrix3D Transform_obj::set_matrix3D( ::openfl::geom::Matrix3D value){
	bool tmp = (value == null());
	if ((tmp)){
		this->__hasMatrix3D = false;
		return null();
	}
	this->__hasMatrix = false;
	this->__hasMatrix3D = true;
	Float tmp1 = value->rawData->get((int)0);
	Float tmp2 = tmp1;
	Float tmp3 = value->rawData->get((int)1);
	Float tmp4 = tmp3;
	Float tmp5 = value->rawData->get((int)5);
	Float tmp6 = tmp5;
	Float tmp7 = value->rawData->get((int)6);
	Float tmp8 = tmp7;
	Float tmp9 = value->rawData->get((int)12);
	Float tmp10 = tmp9;
	Float tmp11 = value->rawData->get((int)13);
	Float tmp12 = tmp11;
	this->__setTransform(tmp2,tmp4,tmp6,tmp8,tmp10,tmp12);
	::openfl::geom::Matrix3D tmp13 = value;
	return tmp13;
}


HX_DEFINE_DYNAMIC_FUNC1(Transform_obj,set_matrix3D,return )

Void Transform_obj::__setTransform( Float a,Float b,Float c,Float d,Float tx,Float ty){
{
		::openfl::display::DisplayObject tmp = this->__displayObject;
		bool tmp1 = (tmp != null());
		if ((tmp1)){
			Float scaleX = ((Float)0.0);
			Float scaleY = ((Float)0.0);
			bool tmp2 = (b == (int)0);
			if ((tmp2)){
				scaleX = a;
			}
			else{
				Float tmp3 = (a * a);
				Float tmp4 = (b * b);
				Float tmp5 = (tmp3 + tmp4);
				Float tmp6 = ::Math_obj::sqrt(tmp5);
				scaleX = tmp6;
			}
			bool tmp3 = (c == (int)0);
			if ((tmp3)){
				scaleY = a;
			}
			else{
				Float tmp4 = (c * c);
				Float tmp5 = (d * d);
				Float tmp6 = (tmp4 + tmp5);
				Float tmp7 = ::Math_obj::sqrt(tmp6);
				scaleY = tmp7;
			}
			::openfl::display::DisplayObject tmp4 = this->__displayObject;
			tmp4->__scaleX = scaleX;
			::openfl::display::DisplayObject tmp5 = this->__displayObject;
			tmp5->__scaleY = scaleY;
			Float tmp6 = ::Math_obj::PI;
			Float tmp7 = (Float((int)180) / Float(tmp6));
			Float tmp8 = d;
			Float tmp9 = c;
			Float tmp10 = ::Math_obj::atan2(tmp8,tmp9);
			Float tmp11 = (tmp7 * tmp10);
			Float tmp12 = (tmp11 - (int)90);
			Float rotation = tmp12;
			Float tmp13 = rotation;
			::openfl::display::DisplayObject tmp14 = this->__displayObject;
			Float tmp15 = tmp14->__rotation;
			bool tmp16 = (tmp13 != tmp15);
			if ((tmp16)){
				::openfl::display::DisplayObject tmp17 = this->__displayObject;
				tmp17->__rotation = rotation;
				Float tmp18 = rotation;
				Float tmp19 = ::Math_obj::PI;
				Float tmp20 = (Float(tmp19) / Float((int)180));
				Float tmp21 = (tmp18 * tmp20);
				Float radians = tmp21;
				Float tmp22 = radians;
				Float tmp23 = ::Math_obj::sin(tmp22);
				::openfl::display::DisplayObject tmp24 = this->__displayObject;
				tmp24->__rotationSine = tmp23;
				Float tmp25 = radians;
				Float tmp26 = ::Math_obj::cos(tmp25);
				::openfl::display::DisplayObject tmp27 = this->__displayObject;
				tmp27->__rotationCosine = tmp26;
			}
			::openfl::display::DisplayObject tmp17 = this->__displayObject;
			tmp17->__transform->a = a;
			::openfl::display::DisplayObject tmp18 = this->__displayObject;
			tmp18->__transform->b = b;
			::openfl::display::DisplayObject tmp19 = this->__displayObject;
			tmp19->__transform->c = c;
			::openfl::display::DisplayObject tmp20 = this->__displayObject;
			tmp20->__transform->d = d;
			::openfl::display::DisplayObject tmp21 = this->__displayObject;
			tmp21->__transform->tx = tx;
			::openfl::display::DisplayObject tmp22 = this->__displayObject;
			tmp22->__transform->ty = ty;
			::openfl::display::DisplayObject tmp23 = this->__displayObject;
			tmp23->__setTransformDirty();
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC6(Transform_obj,__setTransform,(void))


Transform_obj::Transform_obj()
{
}

void Transform_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(Transform);
	HX_MARK_MEMBER_NAME(concatenatedColorTransform,"concatenatedColorTransform");
	HX_MARK_MEMBER_NAME(pixelBounds,"pixelBounds");
	HX_MARK_MEMBER_NAME(__colorTransform,"__colorTransform");
	HX_MARK_MEMBER_NAME(__displayObject,"__displayObject");
	HX_MARK_MEMBER_NAME(__hasMatrix,"__hasMatrix");
	HX_MARK_MEMBER_NAME(__hasMatrix3D,"__hasMatrix3D");
	HX_MARK_END_CLASS();
}

void Transform_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(concatenatedColorTransform,"concatenatedColorTransform");
	HX_VISIT_MEMBER_NAME(pixelBounds,"pixelBounds");
	HX_VISIT_MEMBER_NAME(__colorTransform,"__colorTransform");
	HX_VISIT_MEMBER_NAME(__displayObject,"__displayObject");
	HX_VISIT_MEMBER_NAME(__hasMatrix,"__hasMatrix");
	HX_VISIT_MEMBER_NAME(__hasMatrix3D,"__hasMatrix3D");
}

Dynamic Transform_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 6:
		if (HX_FIELD_EQ(inName,"matrix") ) { if (inCallProp == hx::paccAlways) return get_matrix(); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"matrix3D") ) { if (inCallProp == hx::paccAlways) return get_matrix3D(); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"get_matrix") ) { return get_matrix_dyn(); }
		if (HX_FIELD_EQ(inName,"set_matrix") ) { return set_matrix_dyn(); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"pixelBounds") ) { return pixelBounds; }
		if (HX_FIELD_EQ(inName,"__hasMatrix") ) { return __hasMatrix; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"get_matrix3D") ) { return get_matrix3D_dyn(); }
		if (HX_FIELD_EQ(inName,"set_matrix3D") ) { return set_matrix3D_dyn(); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"__hasMatrix3D") ) { return __hasMatrix3D; }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"colorTransform") ) { if (inCallProp == hx::paccAlways) return get_colorTransform(); }
		if (HX_FIELD_EQ(inName,"__setTransform") ) { return __setTransform_dyn(); }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"__displayObject") ) { return __displayObject; }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"__colorTransform") ) { return __colorTransform; }
		break;
	case 18:
		if (HX_FIELD_EQ(inName,"concatenatedMatrix") ) { if (inCallProp == hx::paccAlways) return get_concatenatedMatrix(); }
		if (HX_FIELD_EQ(inName,"get_colorTransform") ) { return get_colorTransform_dyn(); }
		if (HX_FIELD_EQ(inName,"set_colorTransform") ) { return set_colorTransform_dyn(); }
		break;
	case 22:
		if (HX_FIELD_EQ(inName,"get_concatenatedMatrix") ) { return get_concatenatedMatrix_dyn(); }
		break;
	case 26:
		if (HX_FIELD_EQ(inName,"concatenatedColorTransform") ) { return concatenatedColorTransform; }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic Transform_obj::__SetField(const ::String &inName,const Dynamic &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 6:
		if (HX_FIELD_EQ(inName,"matrix") ) { if (inCallProp == hx::paccAlways) return set_matrix(inValue); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"matrix3D") ) { if (inCallProp == hx::paccAlways) return set_matrix3D(inValue); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"pixelBounds") ) { pixelBounds=inValue.Cast< ::openfl::geom::Rectangle >(); return inValue; }
		if (HX_FIELD_EQ(inName,"__hasMatrix") ) { __hasMatrix=inValue.Cast< bool >(); return inValue; }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"__hasMatrix3D") ) { __hasMatrix3D=inValue.Cast< bool >(); return inValue; }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"colorTransform") ) { if (inCallProp == hx::paccAlways) return set_colorTransform(inValue); }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"__displayObject") ) { __displayObject=inValue.Cast< ::openfl::display::DisplayObject >(); return inValue; }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"__colorTransform") ) { __colorTransform=inValue.Cast< ::openfl::geom::ColorTransform >(); return inValue; }
		break;
	case 26:
		if (HX_FIELD_EQ(inName,"concatenatedColorTransform") ) { concatenatedColorTransform=inValue.Cast< ::openfl::geom::ColorTransform >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void Transform_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("colorTransform","\x89","\xd7","\x3f","\xad"));
	outFields->push(HX_HCSTRING("concatenatedColorTransform","\xf8","\xe8","\x5a","\x77"));
	outFields->push(HX_HCSTRING("concatenatedMatrix","\xb0","\xc0","\x9c","\xf8"));
	outFields->push(HX_HCSTRING("matrix","\x41","\x36","\xc8","\xbb"));
	outFields->push(HX_HCSTRING("matrix3D","\x32","\x35","\xf3","\x66"));
	outFields->push(HX_HCSTRING("pixelBounds","\x9b","\x69","\xaa","\xd7"));
	outFields->push(HX_HCSTRING("__colorTransform","\xa9","\x62","\x7f","\xe1"));
	outFields->push(HX_HCSTRING("__displayObject","\x81","\x73","\x54","\x5e"));
	outFields->push(HX_HCSTRING("__hasMatrix","\x1b","\x32","\xdd","\x2a"));
	outFields->push(HX_HCSTRING("__hasMatrix3D","\x8c","\x5b","\x22","\x82"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsObject /*::openfl::geom::ColorTransform*/ ,(int)offsetof(Transform_obj,concatenatedColorTransform),HX_HCSTRING("concatenatedColorTransform","\xf8","\xe8","\x5a","\x77")},
	{hx::fsObject /*::openfl::geom::Rectangle*/ ,(int)offsetof(Transform_obj,pixelBounds),HX_HCSTRING("pixelBounds","\x9b","\x69","\xaa","\xd7")},
	{hx::fsObject /*::openfl::geom::ColorTransform*/ ,(int)offsetof(Transform_obj,__colorTransform),HX_HCSTRING("__colorTransform","\xa9","\x62","\x7f","\xe1")},
	{hx::fsObject /*::openfl::display::DisplayObject*/ ,(int)offsetof(Transform_obj,__displayObject),HX_HCSTRING("__displayObject","\x81","\x73","\x54","\x5e")},
	{hx::fsBool,(int)offsetof(Transform_obj,__hasMatrix),HX_HCSTRING("__hasMatrix","\x1b","\x32","\xdd","\x2a")},
	{hx::fsBool,(int)offsetof(Transform_obj,__hasMatrix3D),HX_HCSTRING("__hasMatrix3D","\x8c","\x5b","\x22","\x82")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo *sStaticStorageInfo = 0;
#endif

static ::String sMemberFields[] = {
	HX_HCSTRING("concatenatedColorTransform","\xf8","\xe8","\x5a","\x77"),
	HX_HCSTRING("pixelBounds","\x9b","\x69","\xaa","\xd7"),
	HX_HCSTRING("__colorTransform","\xa9","\x62","\x7f","\xe1"),
	HX_HCSTRING("__displayObject","\x81","\x73","\x54","\x5e"),
	HX_HCSTRING("__hasMatrix","\x1b","\x32","\xdd","\x2a"),
	HX_HCSTRING("__hasMatrix3D","\x8c","\x5b","\x22","\x82"),
	HX_HCSTRING("get_colorTransform","\x52","\xb8","\xd9","\x48"),
	HX_HCSTRING("set_colorTransform","\xc6","\xea","\x88","\x25"),
	HX_HCSTRING("get_concatenatedMatrix","\xf9","\x39","\x31","\x52"),
	HX_HCSTRING("get_matrix","\x0a","\xa6","\x4f","\xac"),
	HX_HCSTRING("set_matrix","\x7e","\x44","\xcd","\xaf"),
	HX_HCSTRING("get_matrix3D","\x3b","\xe9","\x0c","\x1c"),
	HX_HCSTRING("set_matrix3D","\xaf","\x0c","\x06","\x31"),
	HX_HCSTRING("__setTransform","\x8a","\x70","\xa3","\x8a"),
	::String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(Transform_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(Transform_obj::__mClass,"__mClass");
};

#endif

hx::Class Transform_obj::__mClass;

void Transform_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("openfl.geom.Transform","\x38","\xac","\x4a","\xe3");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = hx::Class_obj::dupFunctions(sMemberFields);
	__mClass->mCanCast = hx::TCanCast< Transform_obj >;
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
