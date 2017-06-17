#include <hxcpp.h>

#include "hxMath.h"
#ifndef INCLUDED_Std
#include <Std.h>
#endif
#ifndef INCLUDED_haxe_io_Bytes
#include <haxe/io/Bytes.h>
#endif
#ifndef INCLUDED_lime_math_Matrix3
#include <lime/math/Matrix3.h>
#endif
#ifndef INCLUDED_lime_utils_ArrayBufferView
#include <lime/utils/ArrayBufferView.h>
#endif
#ifndef INCLUDED_lime_utils_ObjectPool_openfl_geom_Matrix
#include <lime/utils/ObjectPool_openfl_geom_Matrix.h>
#endif
#ifndef INCLUDED_lime_utils_TAError
#include <lime/utils/TAError.h>
#endif
#ifndef INCLUDED_openfl__Vector_FloatVector
#include <openfl/_Vector/FloatVector.h>
#endif
#ifndef INCLUDED_openfl__Vector_IVector
#include <openfl/_Vector/IVector.h>
#endif
#ifndef INCLUDED_openfl_geom_Matrix
#include <openfl/geom/Matrix.h>
#endif
#ifndef INCLUDED_openfl_geom_Point
#include <openfl/geom/Point.h>
#endif
#ifndef INCLUDED_openfl_geom_Vector3D
#include <openfl/geom/Vector3D.h>
#endif
namespace openfl{
namespace geom{

Void Matrix_obj::__construct(hx::Null< Float >  __o_a,hx::Null< Float >  __o_b,hx::Null< Float >  __o_c,hx::Null< Float >  __o_d,hx::Null< Float >  __o_tx,hx::Null< Float >  __o_ty)
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

//Matrix_obj::~Matrix_obj() { }

Dynamic Matrix_obj::__CreateEmpty() { return  new Matrix_obj; }
hx::ObjectPtr< Matrix_obj > Matrix_obj::__new(hx::Null< Float >  __o_a,hx::Null< Float >  __o_b,hx::Null< Float >  __o_c,hx::Null< Float >  __o_d,hx::Null< Float >  __o_tx,hx::Null< Float >  __o_ty)
{  hx::ObjectPtr< Matrix_obj > _result_ = new Matrix_obj();
	_result_->__construct(__o_a,__o_b,__o_c,__o_d,__o_tx,__o_ty);
	return _result_;}

Dynamic Matrix_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< Matrix_obj > _result_ = new Matrix_obj();
	_result_->__construct(inArgs[0],inArgs[1],inArgs[2],inArgs[3],inArgs[4],inArgs[5]);
	return _result_;}

::openfl::geom::Matrix Matrix_obj::clone( ){
	Float tmp = this->a;
	Float tmp1 = this->b;
	Float tmp2 = this->c;
	Float tmp3 = this->d;
	Float tmp4 = this->tx;
	Float tmp5 = this->ty;
	::openfl::geom::Matrix tmp6 = ::openfl::geom::Matrix_obj::__new(tmp,tmp1,tmp2,tmp3,tmp4,tmp5);
	return tmp6;
}


HX_DEFINE_DYNAMIC_FUNC0(Matrix_obj,clone,return )

Void Matrix_obj::concat( ::openfl::geom::Matrix m){
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


HX_DEFINE_DYNAMIC_FUNC1(Matrix_obj,concat,(void))

Void Matrix_obj::copyColumnFrom( int column,::openfl::geom::Vector3D vector3D){
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
				this->a = vector3D->x;
				this->c = vector3D->y;
			}
			else{
				bool tmp2 = (column == (int)1);
				if ((tmp2)){
					this->b = vector3D->x;
					this->d = vector3D->y;
				}
				else{
					this->tx = vector3D->x;
					this->ty = vector3D->y;
				}
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(Matrix_obj,copyColumnFrom,(void))

Void Matrix_obj::copyColumnTo( int column,::openfl::geom::Vector3D vector3D){
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
				vector3D->x = tmp2;
				Float tmp3 = this->c;
				vector3D->y = tmp3;
				vector3D->z = (int)0;
			}
			else{
				bool tmp2 = (column == (int)1);
				if ((tmp2)){
					Float tmp3 = this->b;
					vector3D->x = tmp3;
					Float tmp4 = this->d;
					vector3D->y = tmp4;
					vector3D->z = (int)0;
				}
				else{
					Float tmp3 = this->tx;
					vector3D->x = tmp3;
					Float tmp4 = this->ty;
					vector3D->y = tmp4;
					vector3D->z = (int)1;
				}
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(Matrix_obj,copyColumnTo,(void))

Void Matrix_obj::copyFrom( ::openfl::geom::Matrix sourceMatrix){
{
		this->a = sourceMatrix->a;
		this->b = sourceMatrix->b;
		this->c = sourceMatrix->c;
		this->d = sourceMatrix->d;
		this->tx = sourceMatrix->tx;
		this->ty = sourceMatrix->ty;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Matrix_obj,copyFrom,(void))

Void Matrix_obj::copyRowFrom( int row,::openfl::geom::Vector3D vector3D){
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
				this->a = vector3D->x;
				this->c = vector3D->y;
			}
			else{
				bool tmp2 = (row == (int)1);
				if ((tmp2)){
					this->b = vector3D->x;
					this->d = vector3D->y;
				}
				else{
					this->tx = vector3D->x;
					this->ty = vector3D->y;
				}
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(Matrix_obj,copyRowFrom,(void))

Void Matrix_obj::copyRowTo( int row,::openfl::geom::Vector3D vector3D){
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
				vector3D->x = tmp2;
				Float tmp3 = this->b;
				vector3D->y = tmp3;
				Float tmp4 = this->tx;
				vector3D->z = tmp4;
			}
			else{
				bool tmp2 = (row == (int)1);
				if ((tmp2)){
					Float tmp3 = this->c;
					vector3D->x = tmp3;
					Float tmp4 = this->d;
					vector3D->y = tmp4;
					Float tmp5 = this->ty;
					vector3D->z = tmp5;
				}
				else{
					vector3D->setTo((int)0,(int)0,(int)1);
				}
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(Matrix_obj,copyRowTo,(void))

Void Matrix_obj::createBox( Float scaleX,Float scaleY,hx::Null< Float >  __o_rotation,hx::Null< Float >  __o_tx,hx::Null< Float >  __o_ty){
Float rotation = __o_rotation.Default(0);
Float tx = __o_tx.Default(0);
Float ty = __o_ty.Default(0);
{
		bool tmp = (rotation != (int)0);
		if ((tmp)){
			Float tmp1 = rotation;
			Float tmp2 = ::Math_obj::cos(tmp1);
			Float cos = tmp2;
			Float tmp3 = rotation;
			Float tmp4 = ::Math_obj::sin(tmp3);
			Float sin = tmp4;
			Float tmp5 = (cos * scaleX);
			this->a = tmp5;
			Float tmp6 = (sin * scaleY);
			this->b = tmp6;
			Float tmp7 = sin;
			Float tmp8 = -(tmp7);
			Float tmp9 = scaleX;
			Float tmp10 = (tmp8 * tmp9);
			this->c = tmp10;
			Float tmp11 = (cos * scaleY);
			this->d = tmp11;
		}
		else{
			this->a = scaleX;
			this->b = (int)0;
			this->c = (int)0;
			this->d = scaleY;
		}
		this->tx = tx;
		this->ty = ty;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC5(Matrix_obj,createBox,(void))

Void Matrix_obj::createGradientBox( Float width,Float height,hx::Null< Float >  __o_rotation,hx::Null< Float >  __o_tx,hx::Null< Float >  __o_ty){
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


HX_DEFINE_DYNAMIC_FUNC5(Matrix_obj,createGradientBox,(void))

::openfl::geom::Point Matrix_obj::deltaTransformPoint( ::openfl::geom::Point point){
	Float tmp = point->x;
	Float tmp1 = this->a;
	Float tmp2 = (tmp * tmp1);
	Float tmp3 = point->y;
	Float tmp4 = this->c;
	Float tmp5 = (tmp3 * tmp4);
	Float tmp6 = (tmp2 + tmp5);
	Float tmp7 = point->x;
	Float tmp8 = this->b;
	Float tmp9 = (tmp7 * tmp8);
	Float tmp10 = point->y;
	Float tmp11 = this->d;
	Float tmp12 = (tmp10 * tmp11);
	Float tmp13 = (tmp9 + tmp12);
	::openfl::geom::Point tmp14 = ::openfl::geom::Point_obj::__new(tmp6,tmp13);
	return tmp14;
}


HX_DEFINE_DYNAMIC_FUNC1(Matrix_obj,deltaTransformPoint,return )

bool Matrix_obj::equals( Dynamic matrix){
	bool tmp = (matrix != null());
	bool tmp1 = tmp;
	bool tmp2;
	if ((tmp1)){
		Float tmp3 = this->tx;
		Float tmp4 = tmp3;
		Float tmp5 = tmp4;
		Float tmp6 = matrix->__Field(HX_HCSTRING("tx","\x84","\x65","\x00","\x00"), hx::paccDynamic );
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
		Float tmp8 = matrix->__Field(HX_HCSTRING("ty","\x85","\x65","\x00","\x00"), hx::paccDynamic );
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
		Float tmp10 = matrix->__Field(HX_HCSTRING("a","\x61","\x00","\x00","\x00"), hx::paccDynamic );
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
		Float tmp12 = matrix->__Field(HX_HCSTRING("b","\x62","\x00","\x00","\x00"), hx::paccDynamic );
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
		Float tmp14 = matrix->__Field(HX_HCSTRING("c","\x63","\x00","\x00","\x00"), hx::paccDynamic );
		tmp10 = (tmp13 == tmp14);
	}
	else{
		tmp10 = false;
	}
	bool tmp11;
	if ((tmp10)){
		Float tmp12 = this->d;
		Float tmp13 = tmp12;
		Float tmp14 = matrix->__Field(HX_HCSTRING("d","\x64","\x00","\x00","\x00"), hx::paccDynamic );
		tmp11 = (tmp13 == tmp14);
	}
	else{
		tmp11 = false;
	}
	return tmp11;
}


HX_DEFINE_DYNAMIC_FUNC1(Matrix_obj,equals,return )

Void Matrix_obj::identity( ){
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


HX_DEFINE_DYNAMIC_FUNC0(Matrix_obj,identity,(void))

::openfl::geom::Matrix Matrix_obj::invert( ){
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


HX_DEFINE_DYNAMIC_FUNC0(Matrix_obj,invert,return )

Void Matrix_obj::rotate( Float theta){
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


HX_DEFINE_DYNAMIC_FUNC1(Matrix_obj,rotate,(void))

Void Matrix_obj::scale( Float sx,Float sy){
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


HX_DEFINE_DYNAMIC_FUNC2(Matrix_obj,scale,(void))

Void Matrix_obj::setRotation( Float theta,hx::Null< Float >  __o_scale){
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


HX_DEFINE_DYNAMIC_FUNC2(Matrix_obj,setRotation,(void))

Void Matrix_obj::setTo( Float a,Float b,Float c,Float d,Float tx,Float ty){
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


HX_DEFINE_DYNAMIC_FUNC6(Matrix_obj,setTo,(void))

::String Matrix_obj::to3DString( hx::Null< bool >  __o_roundPixels){
bool roundPixels = __o_roundPixels.Default(false);
{
		bool tmp = roundPixels;
		if ((tmp)){
			Float tmp1 = this->a;
			::String tmp2 = (HX_HCSTRING("matrix3d(","\x96","\x72","\xdb","\xad") + tmp1);
			::String tmp3 = (tmp2 + HX_HCSTRING(", ","\x74","\x26","\x00","\x00"));
			Float tmp4 = this->b;
			::String tmp5 = (tmp3 + tmp4);
			::String tmp6 = (tmp5 + HX_HCSTRING(", 0, 0, ","\xf4","\xb3","\x68","\xa3"));
			Float tmp7 = this->c;
			::String tmp8 = (tmp6 + tmp7);
			::String tmp9 = (tmp8 + HX_HCSTRING(", ","\x74","\x26","\x00","\x00"));
			Float tmp10 = this->d;
			::String tmp11 = (tmp9 + tmp10);
			::String tmp12 = (tmp11 + HX_HCSTRING(", 0, 0, 0, 0, 1, 0, ","\x53","\x8b","\x16","\x4d"));
			Float tmp13 = this->tx;
			int tmp14 = ::Std_obj::_int(tmp13);
			::String tmp15 = (tmp12 + tmp14);
			::String tmp16 = (tmp15 + HX_HCSTRING(", ","\x74","\x26","\x00","\x00"));
			Float tmp17 = this->ty;
			int tmp18 = ::Std_obj::_int(tmp17);
			::String tmp19 = (tmp16 + tmp18);
			::String tmp20 = (tmp19 + HX_HCSTRING(", 0, 1)","\x88","\xa3","\x85","\xb1"));
			return tmp20;
		}
		else{
			Float tmp1 = this->a;
			::String tmp2 = (HX_HCSTRING("matrix3d(","\x96","\x72","\xdb","\xad") + tmp1);
			::String tmp3 = (tmp2 + HX_HCSTRING(", ","\x74","\x26","\x00","\x00"));
			Float tmp4 = this->b;
			::String tmp5 = (tmp3 + tmp4);
			::String tmp6 = (tmp5 + HX_HCSTRING(", 0, 0, ","\xf4","\xb3","\x68","\xa3"));
			Float tmp7 = this->c;
			::String tmp8 = (tmp6 + tmp7);
			::String tmp9 = (tmp8 + HX_HCSTRING(", ","\x74","\x26","\x00","\x00"));
			Float tmp10 = this->d;
			::String tmp11 = (tmp9 + tmp10);
			::String tmp12 = (tmp11 + HX_HCSTRING(", 0, 0, 0, 0, 1, 0, ","\x53","\x8b","\x16","\x4d"));
			Float tmp13 = this->tx;
			::String tmp14 = (tmp12 + tmp13);
			::String tmp15 = (tmp14 + HX_HCSTRING(", ","\x74","\x26","\x00","\x00"));
			Float tmp16 = this->ty;
			::String tmp17 = (tmp15 + tmp16);
			::String tmp18 = (tmp17 + HX_HCSTRING(", 0, 1)","\x88","\xa3","\x85","\xb1"));
			return tmp18;
		}
		return null();
	}
}


HX_DEFINE_DYNAMIC_FUNC1(Matrix_obj,to3DString,return )

::String Matrix_obj::toMozString( ){
	Float tmp = this->a;
	::String tmp1 = (HX_HCSTRING("matrix(","\xc7","\x42","\x67","\x93") + tmp);
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


HX_DEFINE_DYNAMIC_FUNC0(Matrix_obj,toMozString,return )

::String Matrix_obj::toString( ){
	Float tmp = this->a;
	::String tmp1 = (HX_HCSTRING("matrix(","\xc7","\x42","\x67","\x93") + tmp);
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


HX_DEFINE_DYNAMIC_FUNC0(Matrix_obj,toString,return )

::openfl::geom::Point Matrix_obj::transformPoint( ::openfl::geom::Point pos){
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
	::openfl::geom::Point tmp18 = ::openfl::geom::Point_obj::__new(tmp8,tmp17);
	return tmp18;
}


HX_DEFINE_DYNAMIC_FUNC1(Matrix_obj,transformPoint,return )

Void Matrix_obj::translate( Float dx,Float dy){
{
		hx::AddEq(this->tx,dx);
		hx::AddEq(this->ty,dy);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(Matrix_obj,translate,(void))

::lime::utils::ArrayBufferView Matrix_obj::toArray( hx::Null< bool >  __o_transpose){
bool transpose = __o_transpose.Default(false);
{
		::lime::utils::ArrayBufferView tmp = this->__array;
		bool tmp1 = (tmp == null());
		if ((tmp1)){
			::lime::utils::ArrayBufferView tmp2;
			{
				::lime::utils::ArrayBufferView this1;
				bool tmp3 = true;
				if ((tmp3)){
					::lime::utils::ArrayBufferView tmp4 = ::lime::utils::ArrayBufferView_obj::__new((int)9,(int)8);
					this1 = tmp4;
				}
				else{
					bool tmp4 = false;
					if ((tmp4)){
						::lime::utils::ArrayBufferView tmp5;
						{
							::lime::utils::ArrayBufferView tmp6 = ::lime::utils::ArrayBufferView_obj::__new((int)0,(int)8);
							::lime::utils::ArrayBufferView _this = tmp6;
							_this->byteOffset = (int)0;
							int tmp7 = hx::Throw(HX_CSTRING("Invalid field access on null object"));
							_this->length = tmp7;
							int tmp8 = (_this->length * _this->bytesPerElement);
							_this->byteLength = tmp8;
							::haxe::io::Bytes tmp9;
							{
								::haxe::io::Bytes this2;
								int tmp10 = _this->byteLength;
								::haxe::io::Bytes tmp11 = ::haxe::io::Bytes_obj::alloc(tmp10);
								this2 = tmp11;
								tmp9 = this2;
							}
							_this->buffer = tmp9;
							_this->copyFromArray(((Array< Float >)(null())),null());
							tmp5 = _this;
						}
						this1 = tmp5;
					}
					else{
						bool tmp5 = false;
						if ((tmp5)){
							::lime::utils::ArrayBufferView tmp6;
							{
								::lime::utils::ArrayBufferView tmp7 = ::lime::utils::ArrayBufferView_obj::__new((int)0,(int)8);
								::lime::utils::ArrayBufferView _this = tmp7;
								cpp::ArrayBase array = hx::Throw(HX_CSTRING("Invalid field access on null object"));
								_this->byteOffset = (int)0;
								_this->length = array->__Field(HX_HCSTRING("length","\xe6","\x94","\x07","\x9f"), hx::paccDynamic );
								int tmp8 = (_this->length * _this->bytesPerElement);
								_this->byteLength = tmp8;
								::haxe::io::Bytes tmp9;
								{
									::haxe::io::Bytes this2;
									int tmp10 = _this->byteLength;
									::haxe::io::Bytes tmp11 = ::haxe::io::Bytes_obj::alloc(tmp10);
									this2 = tmp11;
									tmp9 = this2;
								}
								_this->buffer = tmp9;
								_this->copyFromArray(((Array< Float >)(array)),null());
								tmp6 = _this;
							}
							this1 = tmp6;
						}
						else{
							bool tmp6 = false;
							if ((tmp6)){
								::lime::utils::ArrayBufferView tmp7;
								{
									::lime::utils::ArrayBufferView tmp8 = ::lime::utils::ArrayBufferView_obj::__new((int)0,(int)8);
									::lime::utils::ArrayBufferView _this = tmp8;
									::haxe::io::Bytes tmp9 = hx::Throw(HX_CSTRING("Invalid field access on null object"));
									::haxe::io::Bytes srcData = tmp9;
									int tmp10 = hx::Throw(HX_CSTRING("Invalid field access on null object"));
									int srcLength = tmp10;
									int tmp11 = hx::Throw(HX_CSTRING("Invalid field access on null object"));
									int srcByteOffset = tmp11;
									int tmp12 = hx::Throw(HX_CSTRING("Invalid field access on null object"));
									int srcElementSize = tmp12;
									int elementSize = _this->bytesPerElement;
									int tmp13 = hx::Throw(HX_CSTRING("Invalid field access on null object"));
									int tmp14 = _this->type;
									bool tmp15 = (tmp13 == tmp14);
									if ((tmp15)){
										int srcLength1 = srcData->length;
										int tmp16 = (srcLength1 - srcByteOffset);
										int cloneLength = tmp16;
										::haxe::io::Bytes tmp17;
										{
											::haxe::io::Bytes this2;
											int tmp18 = cloneLength;
											::haxe::io::Bytes tmp19 = ::haxe::io::Bytes_obj::alloc(tmp18);
											this2 = tmp19;
											tmp17 = this2;
										}
										_this->buffer = tmp17;
										::haxe::io::Bytes tmp18 = srcData;
										int tmp19 = srcByteOffset;
										int tmp20 = cloneLength;
										_this->buffer->blit((int)0,tmp18,tmp19,tmp20);
									}
									else{
										HX_STACK_DO_THROW(HX_HCSTRING("unimplemented","\x09","\x2f","\x74","\xb4"));
									}
									int tmp16 = (_this->bytesPerElement * srcLength);
									_this->byteLength = tmp16;
									_this->byteOffset = (int)0;
									_this->length = srcLength;
									tmp7 = _this;
								}
								this1 = tmp7;
							}
							else{
								bool tmp7 = false;
								if ((tmp7)){
									::lime::utils::ArrayBufferView tmp8;
									{
										::lime::utils::ArrayBufferView tmp9 = ::lime::utils::ArrayBufferView_obj::__new((int)0,(int)8);
										::lime::utils::ArrayBufferView _this = tmp9;
										int in_byteOffset = (int)0;
										bool tmp10 = (in_byteOffset < (int)0);
										if ((tmp10)){
											HX_STACK_DO_THROW(::lime::utils::TAError_obj::RangeError);
										}
										int tmp11 = hx::Mod(in_byteOffset,_this->bytesPerElement);
										bool tmp12 = (tmp11 != (int)0);
										if ((tmp12)){
											HX_STACK_DO_THROW(::lime::utils::TAError_obj::RangeError);
										}
										int tmp13 = hx::Throw(HX_CSTRING("Invalid field access on null object"));
										int bufferByteLength = tmp13;
										int elementSize = _this->bytesPerElement;
										int newByteLength = bufferByteLength;
										bool tmp14 = true;
										if ((tmp14)){
											int tmp15 = (bufferByteLength - in_byteOffset);
											newByteLength = tmp15;
											int tmp16 = hx::Mod(bufferByteLength,_this->bytesPerElement);
											bool tmp17 = (tmp16 != (int)0);
											if ((tmp17)){
												HX_STACK_DO_THROW(::lime::utils::TAError_obj::RangeError);
											}
											bool tmp18 = (newByteLength < (int)0);
											if ((tmp18)){
												HX_STACK_DO_THROW(::lime::utils::TAError_obj::RangeError);
											}
										}
										else{
											int tmp15 = (null() * _this->bytesPerElement);
											newByteLength = tmp15;
											int tmp16 = (in_byteOffset + newByteLength);
											int newRange = tmp16;
											bool tmp17 = (newRange > bufferByteLength);
											if ((tmp17)){
												HX_STACK_DO_THROW(::lime::utils::TAError_obj::RangeError);
											}
										}
										_this->buffer = null();
										_this->byteOffset = in_byteOffset;
										_this->byteLength = newByteLength;
										Float tmp15 = (Float(newByteLength) / Float(_this->bytesPerElement));
										int tmp16 = ::Std_obj::_int(tmp15);
										_this->length = tmp16;
										tmp8 = _this;
									}
									this1 = tmp8;
								}
								else{
									HX_STACK_DO_THROW(HX_HCSTRING("Invalid constructor arguments for Float32Array","\x8e","\xc1","\xf4","\xd4"));
								}
							}
						}
					}
				}
				tmp2 = this1;
			}
			this->__array = tmp2;
		}
		bool tmp2 = transpose;
		if ((tmp2)){
			{
				::lime::utils::ArrayBufferView tmp3 = this->__array;
				::lime::utils::ArrayBufferView this1 = tmp3;
				Float tmp4 = this->a;
				Float val = tmp4;
				::__hxcpp_memory_set_float(this1->buffer->b,this1->byteOffset,val);
				val;
			}
			{
				::lime::utils::ArrayBufferView tmp3 = this->__array;
				::lime::utils::ArrayBufferView this1 = tmp3;
				Float tmp4 = this->b;
				Float val = tmp4;
				::__hxcpp_memory_set_float(this1->buffer->b,(this1->byteOffset + (int)4),val);
				val;
			}
			{
				::lime::utils::ArrayBufferView tmp3 = this->__array;
				::lime::utils::ArrayBufferView this1 = tmp3;
				::__hxcpp_memory_set_float(this1->buffer->b,(this1->byteOffset + (int)8),(int)0);
				(int)0;
			}
			{
				::lime::utils::ArrayBufferView tmp3 = this->__array;
				::lime::utils::ArrayBufferView this1 = tmp3;
				Float tmp4 = this->c;
				Float val = tmp4;
				::__hxcpp_memory_set_float(this1->buffer->b,(this1->byteOffset + (int)12),val);
				val;
			}
			{
				::lime::utils::ArrayBufferView tmp3 = this->__array;
				::lime::utils::ArrayBufferView this1 = tmp3;
				Float tmp4 = this->d;
				Float val = tmp4;
				::__hxcpp_memory_set_float(this1->buffer->b,(this1->byteOffset + (int)16),val);
				val;
			}
			{
				::lime::utils::ArrayBufferView tmp3 = this->__array;
				::lime::utils::ArrayBufferView this1 = tmp3;
				::__hxcpp_memory_set_float(this1->buffer->b,(this1->byteOffset + (int)20),(int)0);
				(int)0;
			}
			{
				::lime::utils::ArrayBufferView tmp3 = this->__array;
				::lime::utils::ArrayBufferView this1 = tmp3;
				Float tmp4 = this->tx;
				Float val = tmp4;
				::__hxcpp_memory_set_float(this1->buffer->b,(this1->byteOffset + (int)24),val);
				val;
			}
			{
				::lime::utils::ArrayBufferView tmp3 = this->__array;
				::lime::utils::ArrayBufferView this1 = tmp3;
				Float tmp4 = this->ty;
				Float val = tmp4;
				::__hxcpp_memory_set_float(this1->buffer->b,(this1->byteOffset + (int)28),val);
				val;
			}
			{
				::lime::utils::ArrayBufferView tmp3 = this->__array;
				::lime::utils::ArrayBufferView this1 = tmp3;
				::__hxcpp_memory_set_float(this1->buffer->b,(this1->byteOffset + (int)32),(int)1);
				(int)1;
			}
		}
		else{
			{
				::lime::utils::ArrayBufferView tmp3 = this->__array;
				::lime::utils::ArrayBufferView this1 = tmp3;
				Float tmp4 = this->a;
				Float val = tmp4;
				::__hxcpp_memory_set_float(this1->buffer->b,this1->byteOffset,val);
				val;
			}
			{
				::lime::utils::ArrayBufferView tmp3 = this->__array;
				::lime::utils::ArrayBufferView this1 = tmp3;
				Float tmp4 = this->c;
				Float val = tmp4;
				::__hxcpp_memory_set_float(this1->buffer->b,(this1->byteOffset + (int)4),val);
				val;
			}
			{
				::lime::utils::ArrayBufferView tmp3 = this->__array;
				::lime::utils::ArrayBufferView this1 = tmp3;
				Float tmp4 = this->tx;
				Float val = tmp4;
				::__hxcpp_memory_set_float(this1->buffer->b,(this1->byteOffset + (int)8),val);
				val;
			}
			{
				::lime::utils::ArrayBufferView tmp3 = this->__array;
				::lime::utils::ArrayBufferView this1 = tmp3;
				Float tmp4 = this->b;
				Float val = tmp4;
				::__hxcpp_memory_set_float(this1->buffer->b,(this1->byteOffset + (int)12),val);
				val;
			}
			{
				::lime::utils::ArrayBufferView tmp3 = this->__array;
				::lime::utils::ArrayBufferView this1 = tmp3;
				Float tmp4 = this->d;
				Float val = tmp4;
				::__hxcpp_memory_set_float(this1->buffer->b,(this1->byteOffset + (int)16),val);
				val;
			}
			{
				::lime::utils::ArrayBufferView tmp3 = this->__array;
				::lime::utils::ArrayBufferView this1 = tmp3;
				Float tmp4 = this->ty;
				Float val = tmp4;
				::__hxcpp_memory_set_float(this1->buffer->b,(this1->byteOffset + (int)20),val);
				val;
			}
			{
				::lime::utils::ArrayBufferView tmp3 = this->__array;
				::lime::utils::ArrayBufferView this1 = tmp3;
				::__hxcpp_memory_set_float(this1->buffer->b,(this1->byteOffset + (int)24),(int)0);
				(int)0;
			}
			{
				::lime::utils::ArrayBufferView tmp3 = this->__array;
				::lime::utils::ArrayBufferView this1 = tmp3;
				::__hxcpp_memory_set_float(this1->buffer->b,(this1->byteOffset + (int)28),(int)0);
				(int)0;
			}
			{
				::lime::utils::ArrayBufferView tmp3 = this->__array;
				::lime::utils::ArrayBufferView this1 = tmp3;
				::__hxcpp_memory_set_float(this1->buffer->b,(this1->byteOffset + (int)32),(int)1);
				(int)1;
			}
		}
		::lime::utils::ArrayBufferView tmp3 = this->__array;
		return tmp3;
	}
}


HX_DEFINE_DYNAMIC_FUNC1(Matrix_obj,toArray,return )

Void Matrix_obj::__cleanValues( ){
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


HX_DEFINE_DYNAMIC_FUNC0(Matrix_obj,__cleanValues,(void))

::lime::math::Matrix3 Matrix_obj::__toMatrix3( ){
	::lime::math::Matrix3 tmp = ::openfl::geom::Matrix_obj::__matrix3;
	Float tmp1 = this->a;
	Float tmp2 = this->b;
	Float tmp3 = this->c;
	Float tmp4 = this->d;
	Float tmp5 = this->tx;
	Float tmp6 = this->ty;
	tmp->setTo(tmp1,tmp2,tmp3,tmp4,tmp5,tmp6);
	::lime::math::Matrix3 tmp7 = ::openfl::geom::Matrix_obj::__matrix3;
	return tmp7;
}


HX_DEFINE_DYNAMIC_FUNC0(Matrix_obj,__toMatrix3,return )

Void Matrix_obj::__transformInversePoint( ::openfl::geom::Point point){
{
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
			Float tmp8 = this->tx;
			Float tmp9 = -(tmp8);
			point->x = tmp9;
			Float tmp10 = this->ty;
			Float tmp11 = -(tmp10);
			point->y = tmp11;
		}
		else{
			Float tmp8 = (Float(((Float)1.0)) / Float(norm));
			Float tmp9 = this->c;
			Float tmp10 = this->ty;
			Float tmp11 = point->y;
			Float tmp12 = (tmp10 - tmp11);
			Float tmp13 = (tmp9 * tmp12);
			Float tmp14 = this->d;
			Float tmp15 = point->x;
			Float tmp16 = this->tx;
			Float tmp17 = (tmp15 - tmp16);
			Float tmp18 = (tmp14 * tmp17);
			Float tmp19 = (tmp13 + tmp18);
			Float tmp20 = (tmp8 * tmp19);
			Float px = tmp20;
			Float tmp21 = (Float(((Float)1.0)) / Float(norm));
			Float tmp22 = this->a;
			Float tmp23 = point->y;
			Float tmp24 = this->ty;
			Float tmp25 = (tmp23 - tmp24);
			Float tmp26 = (tmp22 * tmp25);
			Float tmp27 = this->b;
			Float tmp28 = this->tx;
			Float tmp29 = point->x;
			Float tmp30 = (tmp28 - tmp29);
			Float tmp31 = (tmp27 * tmp30);
			Float tmp32 = (tmp26 + tmp31);
			Float tmp33 = (tmp21 * tmp32);
			point->y = tmp33;
			point->x = px;
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Matrix_obj,__transformInversePoint,(void))

Float Matrix_obj::__transformInverseX( Float px,Float py){
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
		Float tmp8 = this->tx;
		Float tmp9 = -(tmp8);
		return tmp9;
	}
	else{
		Float tmp8 = (Float(((Float)1.0)) / Float(norm));
		Float tmp9 = this->c;
		Float tmp10 = this->ty;
		Float tmp11 = py;
		Float tmp12 = (tmp10 - tmp11);
		Float tmp13 = (tmp9 * tmp12);
		Float tmp14 = this->d;
		Float tmp15 = px;
		Float tmp16 = this->tx;
		Float tmp17 = (tmp15 - tmp16);
		Float tmp18 = (tmp14 * tmp17);
		Float tmp19 = (tmp13 + tmp18);
		Float tmp20 = (tmp8 * tmp19);
		return tmp20;
	}
	return ((Float)0.);
}


HX_DEFINE_DYNAMIC_FUNC2(Matrix_obj,__transformInverseX,return )

Float Matrix_obj::__transformInverseY( Float px,Float py){
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
		Float tmp8 = this->ty;
		Float tmp9 = -(tmp8);
		return tmp9;
	}
	else{
		Float tmp8 = (Float(((Float)1.0)) / Float(norm));
		Float tmp9 = this->a;
		Float tmp10 = py;
		Float tmp11 = this->ty;
		Float tmp12 = (tmp10 - tmp11);
		Float tmp13 = (tmp9 * tmp12);
		Float tmp14 = this->b;
		Float tmp15 = this->tx;
		Float tmp16 = px;
		Float tmp17 = (tmp15 - tmp16);
		Float tmp18 = (tmp14 * tmp17);
		Float tmp19 = (tmp13 + tmp18);
		Float tmp20 = (tmp8 * tmp19);
		return tmp20;
	}
	return ((Float)0.);
}


HX_DEFINE_DYNAMIC_FUNC2(Matrix_obj,__transformInverseY,return )

Void Matrix_obj::__transformPoint( ::openfl::geom::Point point){
{
		Float px = point->x;
		Float py = point->y;
		Float tmp = px;
		Float tmp1 = this->a;
		Float tmp2 = (tmp * tmp1);
		Float tmp3 = py;
		Float tmp4 = this->c;
		Float tmp5 = (tmp3 * tmp4);
		Float tmp6 = (tmp2 + tmp5);
		Float tmp7 = this->tx;
		Float tmp8 = (tmp6 + tmp7);
		point->x = tmp8;
		Float tmp9 = px;
		Float tmp10 = this->b;
		Float tmp11 = (tmp9 * tmp10);
		Float tmp12 = py;
		Float tmp13 = this->d;
		Float tmp14 = (tmp12 * tmp13);
		Float tmp15 = (tmp11 + tmp14);
		Float tmp16 = this->ty;
		Float tmp17 = (tmp15 + tmp16);
		point->y = tmp17;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Matrix_obj,__transformPoint,(void))

Float Matrix_obj::__transformX( Float px,Float py){
	Float tmp = px;
	Float tmp1 = this->a;
	Float tmp2 = (tmp * tmp1);
	Float tmp3 = py;
	Float tmp4 = this->c;
	Float tmp5 = (tmp3 * tmp4);
	Float tmp6 = (tmp2 + tmp5);
	Float tmp7 = this->tx;
	Float tmp8 = (tmp6 + tmp7);
	return tmp8;
}


HX_DEFINE_DYNAMIC_FUNC2(Matrix_obj,__transformX,return )

Float Matrix_obj::__transformY( Float px,Float py){
	Float tmp = px;
	Float tmp1 = this->b;
	Float tmp2 = (tmp * tmp1);
	Float tmp3 = py;
	Float tmp4 = this->d;
	Float tmp5 = (tmp3 * tmp4);
	Float tmp6 = (tmp2 + tmp5);
	Float tmp7 = this->ty;
	Float tmp8 = (tmp6 + tmp7);
	return tmp8;
}


HX_DEFINE_DYNAMIC_FUNC2(Matrix_obj,__transformY,return )

Void Matrix_obj::__translateTransformed( Float px,Float py){
{
		Float tmp = px;
		Float tmp1 = this->a;
		Float tmp2 = (tmp * tmp1);
		Float tmp3 = py;
		Float tmp4 = this->c;
		Float tmp5 = (tmp3 * tmp4);
		Float tmp6 = (tmp2 + tmp5);
		Float tmp7 = this->tx;
		Float tmp8 = (tmp6 + tmp7);
		this->tx = tmp8;
		Float tmp9 = px;
		Float tmp10 = this->b;
		Float tmp11 = (tmp9 * tmp10);
		Float tmp12 = py;
		Float tmp13 = this->d;
		Float tmp14 = (tmp12 * tmp13);
		Float tmp15 = (tmp11 + tmp14);
		Float tmp16 = this->ty;
		Float tmp17 = (tmp15 + tmp16);
		this->ty = tmp17;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(Matrix_obj,__translateTransformed,(void))

::openfl::geom::Matrix Matrix_obj::__identity;

::lime::math::Matrix3 Matrix_obj::__matrix3;

::lime::utils::ObjectPool_openfl_geom_Matrix Matrix_obj::__pool;


Matrix_obj::Matrix_obj()
{
}

void Matrix_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(Matrix);
	HX_MARK_MEMBER_NAME(a,"a");
	HX_MARK_MEMBER_NAME(b,"b");
	HX_MARK_MEMBER_NAME(c,"c");
	HX_MARK_MEMBER_NAME(d,"d");
	HX_MARK_MEMBER_NAME(tx,"tx");
	HX_MARK_MEMBER_NAME(ty,"ty");
	HX_MARK_MEMBER_NAME(__array,"__array");
	HX_MARK_END_CLASS();
}

void Matrix_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(a,"a");
	HX_VISIT_MEMBER_NAME(b,"b");
	HX_VISIT_MEMBER_NAME(c,"c");
	HX_VISIT_MEMBER_NAME(d,"d");
	HX_VISIT_MEMBER_NAME(tx,"tx");
	HX_VISIT_MEMBER_NAME(ty,"ty");
	HX_VISIT_MEMBER_NAME(__array,"__array");
}

Dynamic Matrix_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
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
	case 7:
		if (HX_FIELD_EQ(inName,"__array") ) { return __array; }
		if (HX_FIELD_EQ(inName,"toArray") ) { return toArray_dyn(); }
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
		if (HX_FIELD_EQ(inName,"__toMatrix3") ) { return __toMatrix3_dyn(); }
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
		if (HX_FIELD_EQ(inName,"transformPoint") ) { return transformPoint_dyn(); }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"__transformPoint") ) { return __transformPoint_dyn(); }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"createGradientBox") ) { return createGradientBox_dyn(); }
		break;
	case 19:
		if (HX_FIELD_EQ(inName,"deltaTransformPoint") ) { return deltaTransformPoint_dyn(); }
		if (HX_FIELD_EQ(inName,"__transformInverseX") ) { return __transformInverseX_dyn(); }
		if (HX_FIELD_EQ(inName,"__transformInverseY") ) { return __transformInverseY_dyn(); }
		break;
	case 22:
		if (HX_FIELD_EQ(inName,"__translateTransformed") ) { return __translateTransformed_dyn(); }
		break;
	case 23:
		if (HX_FIELD_EQ(inName,"__transformInversePoint") ) { return __transformInversePoint_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

bool Matrix_obj::__GetStatic(const ::String &inName, Dynamic &outValue, hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 6:
		if (HX_FIELD_EQ(inName,"__pool") ) { outValue = __pool; return true;  }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"__matrix3") ) { outValue = __matrix3; return true;  }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"__identity") ) { outValue = __identity; return true;  }
	}
	return false;
}

Dynamic Matrix_obj::__SetField(const ::String &inName,const Dynamic &inValue,hx::PropertyAccess inCallProp)
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
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"__array") ) { __array=inValue.Cast< ::lime::utils::ArrayBufferView >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

bool Matrix_obj::__SetStatic(const ::String &inName,Dynamic &ioValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 6:
		if (HX_FIELD_EQ(inName,"__pool") ) { __pool=ioValue.Cast< ::lime::utils::ObjectPool_openfl_geom_Matrix >(); return true; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"__matrix3") ) { __matrix3=ioValue.Cast< ::lime::math::Matrix3 >(); return true; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"__identity") ) { __identity=ioValue.Cast< ::openfl::geom::Matrix >(); return true; }
	}
	return false;
}

void Matrix_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("a","\x61","\x00","\x00","\x00"));
	outFields->push(HX_HCSTRING("b","\x62","\x00","\x00","\x00"));
	outFields->push(HX_HCSTRING("c","\x63","\x00","\x00","\x00"));
	outFields->push(HX_HCSTRING("d","\x64","\x00","\x00","\x00"));
	outFields->push(HX_HCSTRING("tx","\x84","\x65","\x00","\x00"));
	outFields->push(HX_HCSTRING("ty","\x85","\x65","\x00","\x00"));
	outFields->push(HX_HCSTRING("__array","\x79","\xc6","\xed","\x8f"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsFloat,(int)offsetof(Matrix_obj,a),HX_HCSTRING("a","\x61","\x00","\x00","\x00")},
	{hx::fsFloat,(int)offsetof(Matrix_obj,b),HX_HCSTRING("b","\x62","\x00","\x00","\x00")},
	{hx::fsFloat,(int)offsetof(Matrix_obj,c),HX_HCSTRING("c","\x63","\x00","\x00","\x00")},
	{hx::fsFloat,(int)offsetof(Matrix_obj,d),HX_HCSTRING("d","\x64","\x00","\x00","\x00")},
	{hx::fsFloat,(int)offsetof(Matrix_obj,tx),HX_HCSTRING("tx","\x84","\x65","\x00","\x00")},
	{hx::fsFloat,(int)offsetof(Matrix_obj,ty),HX_HCSTRING("ty","\x85","\x65","\x00","\x00")},
	{hx::fsObject /*::lime::utils::ArrayBufferView*/ ,(int)offsetof(Matrix_obj,__array),HX_HCSTRING("__array","\x79","\xc6","\xed","\x8f")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo sStaticStorageInfo[] = {
	{hx::fsObject /*::openfl::geom::Matrix*/ ,(void *) &Matrix_obj::__identity,HX_HCSTRING("__identity","\x5e","\xb8","\x67","\x5c")},
	{hx::fsObject /*::lime::math::Matrix3*/ ,(void *) &Matrix_obj::__matrix3,HX_HCSTRING("__matrix3","\xb2","\x93","\xb5","\x14")},
	{hx::fsObject /*::lime::utils::ObjectPool_openfl_geom_Matrix*/ ,(void *) &Matrix_obj::__pool,HX_HCSTRING("__pool","\xfc","\xe3","\x54","\xf9")},
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
	HX_HCSTRING("__array","\x79","\xc6","\xed","\x8f"),
	HX_HCSTRING("clone","\x5d","\x13","\x63","\x48"),
	HX_HCSTRING("concat","\x14","\x09","\xd0","\xc7"),
	HX_HCSTRING("copyColumnFrom","\x75","\x97","\xb5","\x3a"),
	HX_HCSTRING("copyColumnTo","\xc6","\x2e","\xf6","\xf6"),
	HX_HCSTRING("copyFrom","\xbf","\x0b","\x61","\xc8"),
	HX_HCSTRING("copyRowFrom","\x6f","\x45","\x8b","\xef"),
	HX_HCSTRING("copyRowTo","\x40","\x8a","\x62","\x73"),
	HX_HCSTRING("createBox","\x6f","\x94","\xd8","\x49"),
	HX_HCSTRING("createGradientBox","\x5f","\xec","\xc0","\x25"),
	HX_HCSTRING("deltaTransformPoint","\x5c","\x4d","\xf7","\x15"),
	HX_HCSTRING("equals","\x3f","\xee","\xf2","\xbf"),
	HX_HCSTRING("identity","\x3e","\x45","\x2f","\xb9"),
	HX_HCSTRING("invert","\x16","\xe7","\xd8","\x9f"),
	HX_HCSTRING("rotate","\x5b","\x46","\x20","\xcb"),
	HX_HCSTRING("scale","\x8a","\xce","\xce","\x78"),
	HX_HCSTRING("setRotation","\x00","\x07","\xe7","\x38"),
	HX_HCSTRING("setTo","\xbd","\x91","\x2f","\x7a"),
	HX_HCSTRING("to3DString","\xdd","\xbc","\xef","\x4e"),
	HX_HCSTRING("toMozString","\xce","\xd8","\x8d","\x1b"),
	HX_HCSTRING("toString","\xac","\xd0","\x6e","\x38"),
	HX_HCSTRING("transformPoint","\x44","\xcf","\x11","\x3d"),
	HX_HCSTRING("translate","\x4e","\xd7","\x7f","\x49"),
	HX_HCSTRING("toArray","\x1e","\xba","\x13","\xf2"),
	HX_HCSTRING("__cleanValues","\x2b","\x77","\xc6","\x85"),
	HX_HCSTRING("__toMatrix3","\x77","\xc3","\x27","\xf1"),
	HX_HCSTRING("__transformInversePoint","\xec","\x7e","\x5b","\xe2"),
	HX_HCSTRING("__transformInverseX","\x14","\x4d","\xb3","\x7f"),
	HX_HCSTRING("__transformInverseY","\x15","\x4d","\xb3","\x7f"),
	HX_HCSTRING("__transformPoint","\x64","\x5a","\x51","\x71"),
	HX_HCSTRING("__transformX","\x8c","\x0c","\xc8","\xd3"),
	HX_HCSTRING("__transformY","\x8d","\x0c","\xc8","\xd3"),
	HX_HCSTRING("__translateTransformed","\x3d","\xe3","\xea","\x64"),
	::String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(Matrix_obj::__mClass,"__mClass");
	HX_MARK_MEMBER_NAME(Matrix_obj::__identity,"__identity");
	HX_MARK_MEMBER_NAME(Matrix_obj::__matrix3,"__matrix3");
	HX_MARK_MEMBER_NAME(Matrix_obj::__pool,"__pool");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(Matrix_obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(Matrix_obj::__identity,"__identity");
	HX_VISIT_MEMBER_NAME(Matrix_obj::__matrix3,"__matrix3");
	HX_VISIT_MEMBER_NAME(Matrix_obj::__pool,"__pool");
};

#endif

hx::Class Matrix_obj::__mClass;

static ::String sStaticFields[] = {
	HX_HCSTRING("__identity","\x5e","\xb8","\x67","\x5c"),
	HX_HCSTRING("__matrix3","\xb2","\x93","\xb5","\x14"),
	HX_HCSTRING("__pool","\xfc","\xe3","\x54","\xf9"),
	::String(null()) };

void Matrix_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("openfl.geom.Matrix","\xf5","\xbf","\x06","\x9e");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &Matrix_obj::__GetStatic;
	__mClass->mSetStaticField = &Matrix_obj::__SetStatic;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(sStaticFields);
	__mClass->mMembers = hx::Class_obj::dupFunctions(sMemberFields);
	__mClass->mCanCast = hx::TCanCast< Matrix_obj >;
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

void Matrix_obj::__boot()
{
	__identity= ::openfl::geom::Matrix_obj::__new(null(),null(),null(),null(),null(),null());
	__matrix3= ::lime::math::Matrix3_obj::__new(null(),null(),null(),null(),null(),null());

HX_BEGIN_LOCAL_FUNC_S0(hx::LocalFunc,_Function_0_1)
int __ArgCount() const { return 0; }
::openfl::geom::Matrix run(){
	{
		::openfl::geom::Matrix tmp = ::openfl::geom::Matrix_obj::__new(null(),null(),null(),null(),null(),null());
		return tmp;
	}
	return null();
}
HX_END_LOCAL_FUNC0(return)


HX_BEGIN_LOCAL_FUNC_S0(hx::LocalFunc,_Function_0_2)
int __ArgCount() const { return 1; }
Void run(::openfl::geom::Matrix m){
	{
		m->identity();
	}
	return null();
}
HX_END_LOCAL_FUNC1((void))

	__pool= ::lime::utils::ObjectPool_openfl_geom_Matrix_obj::__new( Dynamic(new _Function_0_1()), Dynamic(new _Function_0_2()),null());
}

} // end namespace openfl
} // end namespace geom
