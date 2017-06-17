#include <hxcpp.h>

#include "hxMath.h"
#ifndef INCLUDED_Std
#include <Std.h>
#endif
#ifndef INCLUDED_lime_math_Matrix3
#include <lime/math/Matrix3.h>
#endif
#ifndef INCLUDED_lime_math_Vector2
#include <lime/math/Vector2.h>
#endif
#ifndef INCLUDED_lime_math_Vector4
#include <lime/math/Vector4.h>
#endif
namespace lime{
namespace math{

Void Matrix3_obj::__construct(hx::Null< Float >  __o_a,hx::Null< Float >  __o_b,hx::Null< Float >  __o_c,hx::Null< Float >  __o_d,hx::Null< Float >  __o_tx,hx::Null< Float >  __o_ty)
{
Float a = __o_a.Default(1);
Float b = __o_b.Default(0);
Float c = __o_c.Default(0);
Float d = __o_d.Default(1);
Float tx = __o_tx.Default(0);
Float ty = __o_ty.Default(0);
{
	this->a = a;
	this->b = b;
	this->c = c;
	this->d = d;
	this->tx = tx;
	this->ty = ty;
}
;
	return null();
}

//Matrix3_obj::~Matrix3_obj() { }

Dynamic Matrix3_obj::__CreateEmpty() { return  new Matrix3_obj; }
hx::ObjectPtr< Matrix3_obj > Matrix3_obj::__new(hx::Null< Float >  __o_a,hx::Null< Float >  __o_b,hx::Null< Float >  __o_c,hx::Null< Float >  __o_d,hx::Null< Float >  __o_tx,hx::Null< Float >  __o_ty)
{  hx::ObjectPtr< Matrix3_obj > _result_ = new Matrix3_obj();
	_result_->__construct(__o_a,__o_b,__o_c,__o_d,__o_tx,__o_ty);
	return _result_;}

Dynamic Matrix3_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< Matrix3_obj > _result_ = new Matrix3_obj();
	_result_->__construct(inArgs[0],inArgs[1],inArgs[2],inArgs[3],inArgs[4],inArgs[5]);
	return _result_;}

::lime::math::Matrix3 Matrix3_obj::clone( ){
	Float tmp = this->a;
	Float tmp1 = this->b;
	Float tmp2 = this->c;
	Float tmp3 = this->d;
	Float tmp4 = this->tx;
	Float tmp5 = this->ty;
	::lime::math::Matrix3 tmp6 = ::lime::math::Matrix3_obj::__new(tmp,tmp1,tmp2,tmp3,tmp4,tmp5);
	return tmp6;
}


HX_DEFINE_DYNAMIC_FUNC0(Matrix3_obj,clone,return )

Void Matrix3_obj::concat( ::lime::math::Matrix3 m){
{
		Float tmp = this->a;
		Float tmp1 = m->a;
		Float tmp2 = (tmp * tmp1);
		Float tmp3 = this->b;
		Float tmp4 = m->c;
		Float tmp5 = (tmp3 * tmp4);
		Float tmp6 = (tmp2 + tmp5);
		Float a1 = tmp6;
		Float tmp7 = this->a;
		Float tmp8 = m->b;
		Float tmp9 = (tmp7 * tmp8);
		Float tmp10 = this->b;
		Float tmp11 = m->d;
		Float tmp12 = (tmp10 * tmp11);
		Float tmp13 = (tmp9 + tmp12);
		this->b = tmp13;
		this->a = a1;
		Float tmp14 = this->c;
		Float tmp15 = m->a;
		Float tmp16 = (tmp14 * tmp15);
		Float tmp17 = this->d;
		Float tmp18 = m->c;
		Float tmp19 = (tmp17 * tmp18);
		Float tmp20 = (tmp16 + tmp19);
		Float c1 = tmp20;
		Float tmp21 = this->c;
		Float tmp22 = m->b;
		Float tmp23 = (tmp21 * tmp22);
		Float tmp24 = this->d;
		Float tmp25 = m->d;
		Float tmp26 = (tmp24 * tmp25);
		Float tmp27 = (tmp23 + tmp26);
		this->d = tmp27;
		this->c = c1;
		Float tmp28 = this->tx;
		Float tmp29 = m->a;
		Float tmp30 = (tmp28 * tmp29);
		Float tmp31 = this->ty;
		Float tmp32 = m->c;
		Float tmp33 = (tmp31 * tmp32);
		Float tmp34 = (tmp30 + tmp33);
		Float tmp35 = m->tx;
		Float tmp36 = (tmp34 + tmp35);
		Float tx1 = tmp36;
		Float tmp37 = this->tx;
		Float tmp38 = m->b;
		Float tmp39 = (tmp37 * tmp38);
		Float tmp40 = this->ty;
		Float tmp41 = m->d;
		Float tmp42 = (tmp40 * tmp41);
		Float tmp43 = (tmp39 + tmp42);
		Float tmp44 = m->ty;
		Float tmp45 = (tmp43 + tmp44);
		this->ty = tmp45;
		this->tx = tx1;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Matrix3_obj,concat,(void))

Void Matrix3_obj::copyColumnFrom( int column,::lime::math::Vector4 vector4){
{
		bool tmp = (column > (int)2);
		if ((tmp)){
			::String tmp1 = (HX_HCSTRING("Column ","\x6a","\xd4","\xaa","\xc0") + column);
			::String tmp2 = (tmp1 + HX_HCSTRING(" out of bounds (2)","\xeb","\xc3","\xf0","\xde"));
			HX_STACK_DO_THROW(tmp2);
		}
		else{
			bool tmp1 = (column == (int)0);
			if ((tmp1)){
				this->a = vector4->x;
				this->c = vector4->y;
			}
			else{
				bool tmp2 = (column == (int)1);
				if ((tmp2)){
					this->b = vector4->x;
					this->d = vector4->y;
				}
				else{
					this->tx = vector4->x;
					this->ty = vector4->y;
				}
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(Matrix3_obj,copyColumnFrom,(void))

Void Matrix3_obj::copyColumnTo( int column,::lime::math::Vector4 vector4){
{
		bool tmp = (column > (int)2);
		if ((tmp)){
			::String tmp1 = (HX_HCSTRING("Column ","\x6a","\xd4","\xaa","\xc0") + column);
			::String tmp2 = (tmp1 + HX_HCSTRING(" out of bounds (2)","\xeb","\xc3","\xf0","\xde"));
			HX_STACK_DO_THROW(tmp2);
		}
		else{
			bool tmp1 = (column == (int)0);
			if ((tmp1)){
				Float tmp2 = this->a;
				vector4->x = tmp2;
				Float tmp3 = this->c;
				vector4->y = tmp3;
				vector4->z = (int)0;
			}
			else{
				bool tmp2 = (column == (int)1);
				if ((tmp2)){
					Float tmp3 = this->b;
					vector4->x = tmp3;
					Float tmp4 = this->d;
					vector4->y = tmp4;
					vector4->z = (int)0;
				}
				else{
					Float tmp3 = this->tx;
					vector4->x = tmp3;
					Float tmp4 = this->ty;
					vector4->y = tmp4;
					vector4->z = (int)1;
				}
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(Matrix3_obj,copyColumnTo,(void))

Void Matrix3_obj::copyFrom( ::lime::math::Matrix3 sourceMatrix3){
{
		this->a = sourceMatrix3->a;
		this->b = sourceMatrix3->b;
		this->c = sourceMatrix3->c;
		this->d = sourceMatrix3->d;
		this->tx = sourceMatrix3->tx;
		this->ty = sourceMatrix3->ty;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Matrix3_obj,copyFrom,(void))

Void Matrix3_obj::copyRowFrom( int row,::lime::math::Vector4 vector4){
{
		bool tmp = (row > (int)2);
		if ((tmp)){
			::String tmp1 = (HX_HCSTRING("Row ","\xe6","\x20","\x88","\x36") + row);
			::String tmp2 = (tmp1 + HX_HCSTRING(" out of bounds (2)","\xeb","\xc3","\xf0","\xde"));
			HX_STACK_DO_THROW(tmp2);
		}
		else{
			bool tmp1 = (row == (int)0);
			if ((tmp1)){
				this->a = vector4->x;
				this->c = vector4->y;
			}
			else{
				bool tmp2 = (row == (int)1);
				if ((tmp2)){
					this->b = vector4->x;
					this->d = vector4->y;
				}
				else{
					this->tx = vector4->x;
					this->ty = vector4->y;
				}
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(Matrix3_obj,copyRowFrom,(void))

Void Matrix3_obj::copyRowTo( int row,::lime::math::Vector4 vector4){
{
		bool tmp = (row > (int)2);
		if ((tmp)){
			::String tmp1 = (HX_HCSTRING("Row ","\xe6","\x20","\x88","\x36") + row);
			::String tmp2 = (tmp1 + HX_HCSTRING(" out of bounds (2)","\xeb","\xc3","\xf0","\xde"));
			HX_STACK_DO_THROW(tmp2);
		}
		else{
			bool tmp1 = (row == (int)0);
			if ((tmp1)){
				Float tmp2 = this->a;
				vector4->x = tmp2;
				Float tmp3 = this->b;
				vector4->y = tmp3;
				Float tmp4 = this->tx;
				vector4->z = tmp4;
			}
			else{
				bool tmp2 = (row == (int)1);
				if ((tmp2)){
					Float tmp3 = this->c;
					vector4->x = tmp3;
					Float tmp4 = this->d;
					vector4->y = tmp4;
					Float tmp5 = this->ty;
					vector4->z = tmp5;
				}
				else{
					vector4->x = (int)0;
					vector4->y = (int)0;
					vector4->z = (int)1;
				}
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(Matrix3_obj,copyRowTo,(void))

Void Matrix3_obj::createBox( Float scaleX,Float scaleY,hx::Null< Float >  __o_rotation,hx::Null< Float >  __o_tx,hx::Null< Float >  __o_ty){
Float rotation = __o_rotation.Default(0);
Float tx = __o_tx.Default(0);
Float ty = __o_ty.Default(0);
{
		this->a = scaleX;
		this->d = scaleY;
		this->b = rotation;
		this->tx = tx;
		this->ty = ty;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC5(Matrix3_obj,createBox,(void))

Void Matrix3_obj::createGradientBox( Float width,Float height,hx::Null< Float >  __o_rotation,hx::Null< Float >  __o_tx,hx::Null< Float >  __o_ty){
Float rotation = __o_rotation.Default(0);
Float tx = __o_tx.Default(0);
Float ty = __o_ty.Default(0);
{
		Float tmp = (Float(width) / Float(((Float)1638.4)));
		this->a = tmp;
		Float tmp1 = (Float(height) / Float(((Float)1638.4)));
		this->d = tmp1;
		bool tmp2 = (rotation != (int)0);
		if ((tmp2)){
			Float tmp3 = rotation;
			Float tmp4 = ::Math_obj::cos(tmp3);
			Float cos = tmp4;
			Float tmp5 = rotation;
			Float tmp6 = ::Math_obj::sin(tmp5);
			Float sin = tmp6;
			Float tmp7 = sin;
			Float tmp8 = this->d;
			Float tmp9 = (tmp7 * tmp8);
			this->b = tmp9;
			Float tmp10 = sin;
			Float tmp11 = -(tmp10);
			Float tmp12 = this->a;
			Float tmp13 = (tmp11 * tmp12);
			this->c = tmp13;
			hx::MultEq(this->a,cos);
			hx::MultEq(this->d,cos);
		}
		else{
			this->b = (int)0;
			this->c = (int)0;
		}
		Float tmp3 = tx;
		Float tmp4 = (Float(width) / Float((int)2));
		Float tmp5 = (tmp3 + tmp4);
		this->tx = tmp5;
		Float tmp6 = ty;
		Float tmp7 = (Float(height) / Float((int)2));
		Float tmp8 = (tmp6 + tmp7);
		this->ty = tmp8;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC5(Matrix3_obj,createGradientBox,(void))

bool Matrix3_obj::equals( Dynamic Matrix3){
	bool tmp = (Matrix3 != null());
	bool tmp1 = tmp;
	bool tmp2;
	if ((tmp1)){
		Float tmp3 = this->tx;
		Float tmp4 = tmp3;
		Float tmp5 = tmp4;
		Float tmp6 = Matrix3->__Field(HX_HCSTRING("tx","\x84","\x65","\x00","\x00"), hx::paccDynamic );
		tmp2 = (tmp5 == tmp6);
	}
	else{
		tmp2 = false;
	}
	bool tmp3 = tmp2;
	bool tmp4;
	if ((tmp3)){
		Float tmp5 = this->ty;
		Float tmp6 = tmp5;
		Float tmp7 = tmp6;
		Float tmp8 = Matrix3->__Field(HX_HCSTRING("ty","\x85","\x65","\x00","\x00"), hx::paccDynamic );
		tmp4 = (tmp7 == tmp8);
	}
	else{
		tmp4 = false;
	}
	bool tmp5 = tmp4;
	bool tmp6;
	if ((tmp5)){
		Float tmp7 = this->a;
		Float tmp8 = tmp7;
		Float tmp9 = tmp8;
		Float tmp10 = Matrix3->__Field(HX_HCSTRING("a","\x61","\x00","\x00","\x00"), hx::paccDynamic );
		tmp6 = (tmp9 == tmp10);
	}
	else{
		tmp6 = false;
	}
	bool tmp7 = tmp6;
	bool tmp8;
	if ((tmp7)){
		Float tmp9 = this->b;
		Float tmp10 = tmp9;
		Float tmp11 = tmp10;
		Float tmp12 = Matrix3->__Field(HX_HCSTRING("b","\x62","\x00","\x00","\x00"), hx::paccDynamic );
		tmp8 = (tmp11 == tmp12);
	}
	else{
		tmp8 = false;
	}
	bool tmp9 = tmp8;
	bool tmp10;
	if ((tmp9)){
		Float tmp11 = this->c;
		Float tmp12 = tmp11;
		Float tmp13 = tmp12;
		Float tmp14 = Matrix3->__Field(HX_HCSTRING("c","\x63","\x00","\x00","\x00"), hx::paccDynamic );
		tmp10 = (tmp13 == tmp14);
	}
	else{
		tmp10 = false;
	}
	bool tmp11;
	if ((tmp10)){
		Float tmp12 = this->d;
		Float tmp13 = tmp12;
		Float tmp14 = Matrix3->__Field(HX_HCSTRING("d","\x64","\x00","\x00","\x00"), hx::paccDynamic );
		tmp11 = (tmp13 == tmp14);
	}
	else{
		tmp11 = false;
	}
	return tmp11;
}


HX_DEFINE_DYNAMIC_FUNC1(Matrix3_obj,equals,return )

::lime::math::Vector2 Matrix3_obj::deltaTransformVector2( ::lime::math::Vector2 Vector2){
	Float tmp = Vector2->x;
	Float tmp1 = this->a;
	Float tmp2 = (tmp * tmp1);
	Float tmp3 = Vector2->y;
	Float tmp4 = this->c;
	Float tmp5 = (tmp3 * tmp4);
	Float tmp6 = (tmp2 + tmp5);
	Float tmp7 = Vector2->x;
	Float tmp8 = this->b;
	Float tmp9 = (tmp7 * tmp8);
	Float tmp10 = Vector2->y;
	Float tmp11 = this->d;
	Float tmp12 = (tmp10 * tmp11);
	Float tmp13 = (tmp9 + tmp12);
	::lime::math::Vector2 tmp14 = ::lime::math::Vector2_obj::__new(tmp6,tmp13);
	return tmp14;
}


HX_DEFINE_DYNAMIC_FUNC1(Matrix3_obj,deltaTransformVector2,return )

Void Matrix3_obj::identity( ){
{
		this->a = (int)1;
		this->b = (int)0;
		this->c = (int)0;
		this->d = (int)1;
		this->tx = (int)0;
		this->ty = (int)0;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(Matrix3_obj,identity,(void))

::lime::math::Matrix3 Matrix3_obj::invert( ){
	Float tmp = this->a;
	Float tmp1 = this->d;
	Float tmp2 = (tmp * tmp1);
	Float tmp3 = this->b;
	Float tmp4 = this->c;
	Float tmp5 = (tmp3 * tmp4);
	Float tmp6 = (tmp2 - tmp5);
	Float norm = tmp6;
	bool tmp7 = (norm == (int)0);
	if ((tmp7)){
		Float tmp8 = this->d = (int)0;
		Float tmp9 = this->c = tmp8;
		Float tmp10 = this->b = tmp9;
		this->a = tmp10;
		Float tmp11 = this->tx;
		Float tmp12 = -(tmp11);
		this->tx = tmp12;
		Float tmp13 = this->ty;
		Float tmp14 = -(tmp13);
		this->ty = tmp14;
	}
	else{
		Float tmp8 = (Float(((Float)1.0)) / Float(norm));
		norm = tmp8;
		Float tmp9 = this->d;
		Float tmp10 = norm;
		Float tmp11 = (tmp9 * tmp10);
		Float a1 = tmp11;
		Float tmp12 = this->a;
		Float tmp13 = norm;
		Float tmp14 = (tmp12 * tmp13);
		this->d = tmp14;
		this->a = a1;
		Float tmp15 = norm;
		Float tmp16 = -(tmp15);
		hx::MultEq(this->b,tmp16);
		Float tmp17 = norm;
		Float tmp18 = -(tmp17);
		hx::MultEq(this->c,tmp18);
		Float tmp19 = this->a;
		Float tmp20 = -(tmp19);
		Float tmp21 = this->tx;
		Float tmp22 = (tmp20 * tmp21);
		Float tmp23 = this->c;
		Float tmp24 = this->ty;
		Float tmp25 = (tmp23 * tmp24);
		Float tmp26 = (tmp22 - tmp25);
		Float tx1 = tmp26;
		Float tmp27 = this->b;
		Float tmp28 = -(tmp27);
		Float tmp29 = this->tx;
		Float tmp30 = (tmp28 * tmp29);
		Float tmp31 = this->d;
		Float tmp32 = this->ty;
		Float tmp33 = (tmp31 * tmp32);
		Float tmp34 = (tmp30 - tmp33);
		this->ty = tmp34;
		this->tx = tx1;
	}
	return hx::ObjectPtr<OBJ_>(this);
}


HX_DEFINE_DYNAMIC_FUNC0(Matrix3_obj,invert,return )

::lime::math::Matrix3 Matrix3_obj::mult( ::lime::math::Matrix3 m){
	Float tmp = this->a;
	Float tmp1 = this->b;
	Float tmp2 = this->c;
	Float tmp3 = this->d;
	Float tmp4 = this->tx;
	Float tmp5 = this->ty;
	::lime::math::Matrix3 tmp6 = ::lime::math::Matrix3_obj::__new(tmp,tmp1,tmp2,tmp3,tmp4,tmp5);
	::lime::math::Matrix3 result = tmp6;
	::lime::math::Matrix3 tmp7 = m;
	result->concat(tmp7);
	::lime::math::Matrix3 tmp8 = result;
	return tmp8;
}


HX_DEFINE_DYNAMIC_FUNC1(Matrix3_obj,mult,return )

Void Matrix3_obj::rotate( Float theta){
{
		Float tmp = theta;
		Float tmp1 = ::Math_obj::cos(tmp);
		Float cos = tmp1;
		Float tmp2 = theta;
		Float tmp3 = ::Math_obj::sin(tmp2);
		Float sin = tmp3;
		Float tmp4 = this->a;
		Float tmp5 = cos;
		Float tmp6 = (tmp4 * tmp5);
		Float tmp7 = this->b;
		Float tmp8 = sin;
		Float tmp9 = (tmp7 * tmp8);
		Float tmp10 = (tmp6 - tmp9);
		Float a1 = tmp10;
		Float tmp11 = this->a;
		Float tmp12 = sin;
		Float tmp13 = (tmp11 * tmp12);
		Float tmp14 = this->b;
		Float tmp15 = cos;
		Float tmp16 = (tmp14 * tmp15);
		Float tmp17 = (tmp13 + tmp16);
		this->b = tmp17;
		this->a = a1;
		Float tmp18 = this->c;
		Float tmp19 = cos;
		Float tmp20 = (tmp18 * tmp19);
		Float tmp21 = this->d;
		Float tmp22 = sin;
		Float tmp23 = (tmp21 * tmp22);
		Float tmp24 = (tmp20 - tmp23);
		Float c1 = tmp24;
		Float tmp25 = this->c;
		Float tmp26 = sin;
		Float tmp27 = (tmp25 * tmp26);
		Float tmp28 = this->d;
		Float tmp29 = cos;
		Float tmp30 = (tmp28 * tmp29);
		Float tmp31 = (tmp27 + tmp30);
		this->d = tmp31;
		this->c = c1;
		Float tmp32 = this->tx;
		Float tmp33 = cos;
		Float tmp34 = (tmp32 * tmp33);
		Float tmp35 = this->ty;
		Float tmp36 = sin;
		Float tmp37 = (tmp35 * tmp36);
		Float tmp38 = (tmp34 - tmp37);
		Float tx1 = tmp38;
		Float tmp39 = this->tx;
		Float tmp40 = sin;
		Float tmp41 = (tmp39 * tmp40);
		Float tmp42 = this->ty;
		Float tmp43 = cos;
		Float tmp44 = (tmp42 * tmp43);
		Float tmp45 = (tmp41 + tmp44);
		this->ty = tmp45;
		this->tx = tx1;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Matrix3_obj,rotate,(void))

Void Matrix3_obj::scale( Float sx,Float sy){
{
		hx::MultEq(this->a,sx);
		hx::MultEq(this->b,sy);
		hx::MultEq(this->c,sx);
		hx::MultEq(this->d,sy);
		hx::MultEq(this->tx,sx);
		hx::MultEq(this->ty,sy);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(Matrix3_obj,scale,(void))

Void Matrix3_obj::setRotation( Float theta,hx::Null< Float >  __o_scale){
Float scale = __o_scale.Default(1);
{
		Float tmp = theta;
		Float tmp1 = ::Math_obj::cos(tmp);
		Float tmp2 = scale;
		Float tmp3 = (tmp1 * tmp2);
		this->a = tmp3;
		Float tmp4 = theta;
		Float tmp5 = ::Math_obj::sin(tmp4);
		Float tmp6 = scale;
		Float tmp7 = (tmp5 * tmp6);
		this->c = tmp7;
		Float tmp8 = this->c;
		Float tmp9 = -(tmp8);
		this->b = tmp9;
		Float tmp10 = this->a;
		this->d = tmp10;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(Matrix3_obj,setRotation,(void))

Void Matrix3_obj::setTo( Float a,Float b,Float c,Float d,Float tx,Float ty){
{
		this->a = a;
		this->b = b;
		this->c = c;
		this->d = d;
		this->tx = tx;
		this->ty = ty;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC6(Matrix3_obj,setTo,(void))

::String Matrix3_obj::to3DString( hx::Null< bool >  __o_roundPixels){
bool roundPixels = __o_roundPixels.Default(false);
{
		bool tmp = roundPixels;
		if ((tmp)){
			Float tmp1 = this->a;
			::String tmp2 = (HX_HCSTRING("Matrix33d(","\xc5","\xda","\xb4","\x68") + tmp1);
			::String tmp3 = (tmp2 + HX_HCSTRING(", ","\x74","\x26","\x00","\x00"));
			Float tmp4 = this->b;
			::String tmp5 = (tmp3 + tmp4);
			::String tmp6 = (tmp5 + HX_HCSTRING(", ","\x74","\x26","\x00","\x00"));
			::String tmp7 = (tmp6 + HX_HCSTRING("0, 0, ","\x80","\x3e","\x0e","\x9c"));
			Float tmp8 = this->c;
			::String tmp9 = (tmp7 + tmp8);
			::String tmp10 = (tmp9 + HX_HCSTRING(", ","\x74","\x26","\x00","\x00"));
			Float tmp11 = this->d;
			::String tmp12 = (tmp10 + tmp11);
			::String tmp13 = (tmp12 + HX_HCSTRING(", ","\x74","\x26","\x00","\x00"));
			::String tmp14 = (tmp13 + HX_HCSTRING("0, 0, 0, 0, 1, 0, ","\xdf","\xb7","\x27","\x12"));
			Float tmp15 = this->tx;
			int tmp16 = ::Std_obj::_int(tmp15);
			::String tmp17 = (tmp14 + tmp16);
			::String tmp18 = (tmp17 + HX_HCSTRING(", ","\x74","\x26","\x00","\x00"));
			Float tmp19 = this->ty;
			int tmp20 = ::Std_obj::_int(tmp19);
			::String tmp21 = (tmp18 + tmp20);
			::String tmp22 = (tmp21 + HX_HCSTRING(", 0, 1)","\x88","\xa3","\x85","\xb1"));
			return tmp22;
		}
		else{
			Float tmp1 = this->a;
			::String tmp2 = (HX_HCSTRING("Matrix33d(","\xc5","\xda","\xb4","\x68") + tmp1);
			::String tmp3 = (tmp2 + HX_HCSTRING(", ","\x74","\x26","\x00","\x00"));
			Float tmp4 = this->b;
			::String tmp5 = (tmp3 + tmp4);
			::String tmp6 = (tmp5 + HX_HCSTRING(", ","\x74","\x26","\x00","\x00"));
			::String tmp7 = (tmp6 + HX_HCSTRING("0, 0, ","\x80","\x3e","\x0e","\x9c"));
			Float tmp8 = this->c;
			::String tmp9 = (tmp7 + tmp8);
			::String tmp10 = (tmp9 + HX_HCSTRING(", ","\x74","\x26","\x00","\x00"));
			Float tmp11 = this->d;
			::String tmp12 = (tmp10 + tmp11);
			::String tmp13 = (tmp12 + HX_HCSTRING(", ","\x74","\x26","\x00","\x00"));
			::String tmp14 = (tmp13 + HX_HCSTRING("0, 0, 0, 0, 1, 0, ","\xdf","\xb7","\x27","\x12"));
			Float tmp15 = this->tx;
			::String tmp16 = (tmp14 + tmp15);
			::String tmp17 = (tmp16 + HX_HCSTRING(", ","\x74","\x26","\x00","\x00"));
			Float tmp18 = this->ty;
			::String tmp19 = (tmp17 + tmp18);
			::String tmp20 = (tmp19 + HX_HCSTRING(", 0, 1)","\x88","\xa3","\x85","\xb1"));
			return tmp20;
		}
		return null();
	}
}


HX_DEFINE_DYNAMIC_FUNC1(Matrix3_obj,to3DString,return )

::String Matrix3_obj::toMozString( ){
	Float tmp = this->a;
	::String tmp1 = (HX_HCSTRING("Matrix3(","\x36","\xf1","\xa4","\x40") + tmp);
	::String tmp2 = (tmp1 + HX_HCSTRING(", ","\x74","\x26","\x00","\x00"));
	Float tmp3 = this->b;
	::String tmp4 = (tmp2 + tmp3);
	::String tmp5 = (tmp4 + HX_HCSTRING(", ","\x74","\x26","\x00","\x00"));
	Float tmp6 = this->c;
	::String tmp7 = (tmp5 + tmp6);
	::String tmp8 = (tmp7 + HX_HCSTRING(", ","\x74","\x26","\x00","\x00"));
	Float tmp9 = this->d;
	::String tmp10 = (tmp8 + tmp9);
	::String tmp11 = (tmp10 + HX_HCSTRING(", ","\x74","\x26","\x00","\x00"));
	Float tmp12 = this->tx;
	::String tmp13 = (tmp11 + tmp12);
	::String tmp14 = (tmp13 + HX_HCSTRING("px, ","\x7c","\x1a","\x63","\x4a"));
	Float tmp15 = this->ty;
	::String tmp16 = (tmp14 + tmp15);
	::String tmp17 = (tmp16 + HX_HCSTRING("px)","\x21","\x65","\x55","\x00"));
	return tmp17;
}


HX_DEFINE_DYNAMIC_FUNC0(Matrix3_obj,toMozString,return )

::String Matrix3_obj::toString( ){
	Float tmp = this->a;
	::String tmp1 = (HX_HCSTRING("Matrix3(","\x36","\xf1","\xa4","\x40") + tmp);
	::String tmp2 = (tmp1 + HX_HCSTRING(", ","\x74","\x26","\x00","\x00"));
	Float tmp3 = this->b;
	::String tmp4 = (tmp2 + tmp3);
	::String tmp5 = (tmp4 + HX_HCSTRING(", ","\x74","\x26","\x00","\x00"));
	Float tmp6 = this->c;
	::String tmp7 = (tmp5 + tmp6);
	::String tmp8 = (tmp7 + HX_HCSTRING(", ","\x74","\x26","\x00","\x00"));
	Float tmp9 = this->d;
	::String tmp10 = (tmp8 + tmp9);
	::String tmp11 = (tmp10 + HX_HCSTRING(", ","\x74","\x26","\x00","\x00"));
	Float tmp12 = this->tx;
	::String tmp13 = (tmp11 + tmp12);
	::String tmp14 = (tmp13 + HX_HCSTRING(", ","\x74","\x26","\x00","\x00"));
	Float tmp15 = this->ty;
	::String tmp16 = (tmp14 + tmp15);
	::String tmp17 = (tmp16 + HX_HCSTRING(")","\x29","\x00","\x00","\x00"));
	return tmp17;
}


HX_DEFINE_DYNAMIC_FUNC0(Matrix3_obj,toString,return )

::lime::math::Vector2 Matrix3_obj::transformVector2( ::lime::math::Vector2 pos){
	Float tmp = pos->x;
	Float tmp1 = this->a;
	Float tmp2 = (tmp * tmp1);
	Float tmp3 = pos->y;
	Float tmp4 = this->c;
	Float tmp5 = (tmp3 * tmp4);
	Float tmp6 = (tmp2 + tmp5);
	Float tmp7 = this->tx;
	Float tmp8 = (tmp6 + tmp7);
	Float tmp9 = pos->x;
	Float tmp10 = this->b;
	Float tmp11 = (tmp9 * tmp10);
	Float tmp12 = pos->y;
	Float tmp13 = this->d;
	Float tmp14 = (tmp12 * tmp13);
	Float tmp15 = (tmp11 + tmp14);
	Float tmp16 = this->ty;
	Float tmp17 = (tmp15 + tmp16);
	::lime::math::Vector2 tmp18 = ::lime::math::Vector2_obj::__new(tmp8,tmp17);
	return tmp18;
}


HX_DEFINE_DYNAMIC_FUNC1(Matrix3_obj,transformVector2,return )

Void Matrix3_obj::translate( Float dx,Float dy){
{
		hx::AddEq(this->tx,dx);
		hx::AddEq(this->ty,dy);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(Matrix3_obj,translate,(void))

Void Matrix3_obj::__cleanValues( ){
{
		Float tmp = this->a;
		Float tmp1 = (tmp * (int)1000);
		int tmp2 = ::Math_obj::round(tmp1);
		Float tmp3 = (Float(tmp2) / Float((int)1000));
		this->a = tmp3;
		Float tmp4 = this->b;
		Float tmp5 = (tmp4 * (int)1000);
		int tmp6 = ::Math_obj::round(tmp5);
		Float tmp7 = (Float(tmp6) / Float((int)1000));
		this->b = tmp7;
		Float tmp8 = this->c;
		Float tmp9 = (tmp8 * (int)1000);
		int tmp10 = ::Math_obj::round(tmp9);
		Float tmp11 = (Float(tmp10) / Float((int)1000));
		this->c = tmp11;
		Float tmp12 = this->d;
		Float tmp13 = (tmp12 * (int)1000);
		int tmp14 = ::Math_obj::round(tmp13);
		Float tmp15 = (Float(tmp14) / Float((int)1000));
		this->d = tmp15;
		Float tmp16 = this->tx;
		Float tmp17 = (tmp16 * (int)10);
		int tmp18 = ::Math_obj::round(tmp17);
		Float tmp19 = (Float(tmp18) / Float((int)10));
		this->tx = tmp19;
		Float tmp20 = this->ty;
		Float tmp21 = (tmp20 * (int)10);
		int tmp22 = ::Math_obj::round(tmp21);
		Float tmp23 = (Float(tmp22) / Float((int)10));
		this->ty = tmp23;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(Matrix3_obj,__cleanValues,(void))

Float Matrix3_obj::__transformX( ::lime::math::Vector2 pos){
	Float tmp = pos->x;
	Float tmp1 = this->a;
	Float tmp2 = (tmp * tmp1);
	Float tmp3 = pos->y;
	Float tmp4 = this->c;
	Float tmp5 = (tmp3 * tmp4);
	Float tmp6 = (tmp2 + tmp5);
	Float tmp7 = this->tx;
	Float tmp8 = (tmp6 + tmp7);
	return tmp8;
}


HX_DEFINE_DYNAMIC_FUNC1(Matrix3_obj,__transformX,return )

Float Matrix3_obj::__transformY( ::lime::math::Vector2 pos){
	Float tmp = pos->x;
	Float tmp1 = this->b;
	Float tmp2 = (tmp * tmp1);
	Float tmp3 = pos->y;
	Float tmp4 = this->d;
	Float tmp5 = (tmp3 * tmp4);
	Float tmp6 = (tmp2 + tmp5);
	Float tmp7 = this->ty;
	Float tmp8 = (tmp6 + tmp7);
	return tmp8;
}


HX_DEFINE_DYNAMIC_FUNC1(Matrix3_obj,__transformY,return )

Void Matrix3_obj::__translateTransformed( ::lime::math::Vector2 pos){
{
		Float tmp = pos->x;
		Float tmp1 = this->a;
		Float tmp2 = (tmp * tmp1);
		Float tmp3 = pos->y;
		Float tmp4 = this->c;
		Float tmp5 = (tmp3 * tmp4);
		Float tmp6 = (tmp2 + tmp5);
		Float tmp7 = this->tx;
		Float tmp8 = (tmp6 + tmp7);
		this->tx = tmp8;
		Float tmp9 = pos->x;
		Float tmp10 = this->b;
		Float tmp11 = (tmp9 * tmp10);
		Float tmp12 = pos->y;
		Float tmp13 = this->d;
		Float tmp14 = (tmp12 * tmp13);
		Float tmp15 = (tmp11 + tmp14);
		Float tmp16 = this->ty;
		Float tmp17 = (tmp15 + tmp16);
		this->ty = tmp17;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Matrix3_obj,__translateTransformed,(void))

::lime::math::Matrix3 Matrix3_obj::__identity;


Matrix3_obj::Matrix3_obj()
{
}

Dynamic Matrix3_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 1:
		if (HX_FIELD_EQ(inName,"a") ) { return a; }
		if (HX_FIELD_EQ(inName,"b") ) { return b; }
		if (HX_FIELD_EQ(inName,"c") ) { return c; }
		if (HX_FIELD_EQ(inName,"d") ) { return d; }
		break;
	case 2:
		if (HX_FIELD_EQ(inName,"tx") ) { return tx; }
		if (HX_FIELD_EQ(inName,"ty") ) { return ty; }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"mult") ) { return mult_dyn(); }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"clone") ) { return clone_dyn(); }
		if (HX_FIELD_EQ(inName,"scale") ) { return scale_dyn(); }
		if (HX_FIELD_EQ(inName,"setTo") ) { return setTo_dyn(); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"concat") ) { return concat_dyn(); }
		if (HX_FIELD_EQ(inName,"equals") ) { return equals_dyn(); }
		if (HX_FIELD_EQ(inName,"invert") ) { return invert_dyn(); }
		if (HX_FIELD_EQ(inName,"rotate") ) { return rotate_dyn(); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"copyFrom") ) { return copyFrom_dyn(); }
		if (HX_FIELD_EQ(inName,"identity") ) { return identity_dyn(); }
		if (HX_FIELD_EQ(inName,"toString") ) { return toString_dyn(); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"copyRowTo") ) { return copyRowTo_dyn(); }
		if (HX_FIELD_EQ(inName,"createBox") ) { return createBox_dyn(); }
		if (HX_FIELD_EQ(inName,"translate") ) { return translate_dyn(); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"to3DString") ) { return to3DString_dyn(); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"copyRowFrom") ) { return copyRowFrom_dyn(); }
		if (HX_FIELD_EQ(inName,"setRotation") ) { return setRotation_dyn(); }
		if (HX_FIELD_EQ(inName,"toMozString") ) { return toMozString_dyn(); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"copyColumnTo") ) { return copyColumnTo_dyn(); }
		if (HX_FIELD_EQ(inName,"__transformX") ) { return __transformX_dyn(); }
		if (HX_FIELD_EQ(inName,"__transformY") ) { return __transformY_dyn(); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"__cleanValues") ) { return __cleanValues_dyn(); }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"copyColumnFrom") ) { return copyColumnFrom_dyn(); }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"transformVector2") ) { return transformVector2_dyn(); }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"createGradientBox") ) { return createGradientBox_dyn(); }
		break;
	case 21:
		if (HX_FIELD_EQ(inName,"deltaTransformVector2") ) { return deltaTransformVector2_dyn(); }
		break;
	case 22:
		if (HX_FIELD_EQ(inName,"__translateTransformed") ) { return __translateTransformed_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

bool Matrix3_obj::__GetStatic(const ::String &inName, Dynamic &outValue, hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 10:
		if (HX_FIELD_EQ(inName,"__identity") ) { outValue = __identity; return true;  }
	}
	return false;
}

Dynamic Matrix3_obj::__SetField(const ::String &inName,const Dynamic &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 1:
		if (HX_FIELD_EQ(inName,"a") ) { a=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"b") ) { b=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"c") ) { c=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"d") ) { d=inValue.Cast< Float >(); return inValue; }
		break;
	case 2:
		if (HX_FIELD_EQ(inName,"tx") ) { tx=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"ty") ) { ty=inValue.Cast< Float >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

bool Matrix3_obj::__SetStatic(const ::String &inName,Dynamic &ioValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 10:
		if (HX_FIELD_EQ(inName,"__identity") ) { __identity=ioValue.Cast< ::lime::math::Matrix3 >(); return true; }
	}
	return false;
}

void Matrix3_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("a","\x61","\x00","\x00","\x00"));
	outFields->push(HX_HCSTRING("b","\x62","\x00","\x00","\x00"));
	outFields->push(HX_HCSTRING("c","\x63","\x00","\x00","\x00"));
	outFields->push(HX_HCSTRING("d","\x64","\x00","\x00","\x00"));
	outFields->push(HX_HCSTRING("tx","\x84","\x65","\x00","\x00"));
	outFields->push(HX_HCSTRING("ty","\x85","\x65","\x00","\x00"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsFloat,(int)offsetof(Matrix3_obj,a),HX_HCSTRING("a","\x61","\x00","\x00","\x00")},
	{hx::fsFloat,(int)offsetof(Matrix3_obj,b),HX_HCSTRING("b","\x62","\x00","\x00","\x00")},
	{hx::fsFloat,(int)offsetof(Matrix3_obj,c),HX_HCSTRING("c","\x63","\x00","\x00","\x00")},
	{hx::fsFloat,(int)offsetof(Matrix3_obj,d),HX_HCSTRING("d","\x64","\x00","\x00","\x00")},
	{hx::fsFloat,(int)offsetof(Matrix3_obj,tx),HX_HCSTRING("tx","\x84","\x65","\x00","\x00")},
	{hx::fsFloat,(int)offsetof(Matrix3_obj,ty),HX_HCSTRING("ty","\x85","\x65","\x00","\x00")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo sStaticStorageInfo[] = {
	{hx::fsObject /*::lime::math::Matrix3*/ ,(void *) &Matrix3_obj::__identity,HX_HCSTRING("__identity","\x5e","\xb8","\x67","\x5c")},
	{ hx::fsUnknown, 0, null()}
};
#endif

static ::String sMemberFields[] = {
	HX_HCSTRING("a","\x61","\x00","\x00","\x00"),
	HX_HCSTRING("b","\x62","\x00","\x00","\x00"),
	HX_HCSTRING("c","\x63","\x00","\x00","\x00"),
	HX_HCSTRING("d","\x64","\x00","\x00","\x00"),
	HX_HCSTRING("tx","\x84","\x65","\x00","\x00"),
	HX_HCSTRING("ty","\x85","\x65","\x00","\x00"),
	HX_HCSTRING("clone","\x5d","\x13","\x63","\x48"),
	HX_HCSTRING("concat","\x14","\x09","\xd0","\xc7"),
	HX_HCSTRING("copyColumnFrom","\x75","\x97","\xb5","\x3a"),
	HX_HCSTRING("copyColumnTo","\xc6","\x2e","\xf6","\xf6"),
	HX_HCSTRING("copyFrom","\xbf","\x0b","\x61","\xc8"),
	HX_HCSTRING("copyRowFrom","\x6f","\x45","\x8b","\xef"),
	HX_HCSTRING("copyRowTo","\x40","\x8a","\x62","\x73"),
	HX_HCSTRING("createBox","\x6f","\x94","\xd8","\x49"),
	HX_HCSTRING("createGradientBox","\x5f","\xec","\xc0","\x25"),
	HX_HCSTRING("equals","\x3f","\xee","\xf2","\xbf"),
	HX_HCSTRING("deltaTransformVector2","\x1b","\xee","\xe5","\x85"),
	HX_HCSTRING("identity","\x3e","\x45","\x2f","\xb9"),
	HX_HCSTRING("invert","\x16","\xe7","\xd8","\x9f"),
	HX_HCSTRING("mult","\xf0","\x67","\x65","\x48"),
	HX_HCSTRING("rotate","\x5b","\x46","\x20","\xcb"),
	HX_HCSTRING("scale","\x8a","\xce","\xce","\x78"),
	HX_HCSTRING("setRotation","\x00","\x07","\xe7","\x38"),
	HX_HCSTRING("setTo","\xbd","\x91","\x2f","\x7a"),
	HX_HCSTRING("to3DString","\xdd","\xbc","\xef","\x4e"),
	HX_HCSTRING("toMozString","\xce","\xd8","\x8d","\x1b"),
	HX_HCSTRING("toString","\xac","\xd0","\x6e","\x38"),
	HX_HCSTRING("transformVector2","\x03","\xba","\x12","\x8a"),
	HX_HCSTRING("translate","\x4e","\xd7","\x7f","\x49"),
	HX_HCSTRING("__cleanValues","\x2b","\x77","\xc6","\x85"),
	HX_HCSTRING("__transformX","\x8c","\x0c","\xc8","\xd3"),
	HX_HCSTRING("__transformY","\x8d","\x0c","\xc8","\xd3"),
	HX_HCSTRING("__translateTransformed","\x3d","\xe3","\xea","\x64"),
	::String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(Matrix3_obj::__mClass,"__mClass");
	HX_MARK_MEMBER_NAME(Matrix3_obj::__identity,"__identity");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(Matrix3_obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(Matrix3_obj::__identity,"__identity");
};

#endif

hx::Class Matrix3_obj::__mClass;

static ::String sStaticFields[] = {
	HX_HCSTRING("__identity","\x5e","\xb8","\x67","\x5c"),
	::String(null()) };

void Matrix3_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("lime.math.Matrix3","\x05","\x23","\x1b","\x06");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &Matrix3_obj::__GetStatic;
	__mClass->mSetStaticField = &Matrix3_obj::__SetStatic;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(sStaticFields);
	__mClass->mMembers = hx::Class_obj::dupFunctions(sMemberFields);
	__mClass->mCanCast = hx::TCanCast< Matrix3_obj >;
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

void Matrix3_obj::__boot()
{
	__identity= ::lime::math::Matrix3_obj::__new(null(),null(),null(),null(),null(),null());
}

} // end namespace lime
} // end namespace math
