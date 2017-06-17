#include <hxcpp.h>

#include "hxMath.h"
#ifndef INCLUDED_openfl__Vector_FloatVector
#include <openfl/_Vector/FloatVector.h>
#endif
#ifndef INCLUDED_openfl__Vector_IVector
#include <openfl/_Vector/IVector.h>
#endif
#ifndef INCLUDED_openfl__Vector_ObjectVector
#include <openfl/_Vector/ObjectVector.h>
#endif
#ifndef INCLUDED_openfl_geom_Matrix3D
#include <openfl/geom/Matrix3D.h>
#endif
#ifndef INCLUDED_openfl_geom_Vector3D
#include <openfl/geom/Vector3D.h>
#endif
namespace openfl{
namespace geom{

Void Matrix3D_obj::__construct(::openfl::_Vector::FloatVector v)
{
{
	bool tmp = (v != null());
	bool tmp1;
	if ((tmp)){
		int tmp2 = v->get_length();
		int tmp3 = tmp2;
		tmp1 = (tmp3 == (int)16);
	}
	else{
		tmp1 = false;
	}
	if ((tmp1)){
		::openfl::_Vector::IVector tmp2 = v->concat(((::openfl::_Vector::IVector)(null())));
		this->rawData = ((::openfl::_Vector::FloatVector)(tmp2));
	}
	else{
		::openfl::_Vector::FloatVector tmp2;
		{
			Array< Float > a = Array_obj< Float >::__new().Add(((Float)1.0)).Add(((Float)0.0)).Add(((Float)0.0)).Add(((Float)0.0)).Add(((Float)0.0)).Add(((Float)1.0)).Add(((Float)0.0)).Add(((Float)0.0)).Add(((Float)0.0)).Add(((Float)0.0)).Add(((Float)1.0)).Add(((Float)0.0)).Add(((Float)0.0)).Add(((Float)0.0)).Add(((Float)0.0)).Add(((Float)1.0));
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
		this->rawData = tmp2;
	}
}
;
	return null();
}

//Matrix3D_obj::~Matrix3D_obj() { }

Dynamic Matrix3D_obj::__CreateEmpty() { return  new Matrix3D_obj; }
hx::ObjectPtr< Matrix3D_obj > Matrix3D_obj::__new(::openfl::_Vector::FloatVector v)
{  hx::ObjectPtr< Matrix3D_obj > _result_ = new Matrix3D_obj();
	_result_->__construct(v);
	return _result_;}

Dynamic Matrix3D_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< Matrix3D_obj > _result_ = new Matrix3D_obj();
	_result_->__construct(inArgs[0]);
	return _result_;}

Void Matrix3D_obj::append( ::openfl::geom::Matrix3D lhs){
{
		::openfl::_Vector::FloatVector tmp = this->rawData;
		Float tmp1 = tmp->get((int)0);
		Float m111 = tmp1;
		::openfl::_Vector::FloatVector tmp2 = this->rawData;
		Float tmp3 = tmp2->get((int)4);
		Float m121 = tmp3;
		::openfl::_Vector::FloatVector tmp4 = this->rawData;
		Float tmp5 = tmp4->get((int)8);
		Float m131 = tmp5;
		::openfl::_Vector::FloatVector tmp6 = this->rawData;
		Float tmp7 = tmp6->get((int)12);
		Float m141 = tmp7;
		::openfl::_Vector::FloatVector tmp8 = this->rawData;
		Float tmp9 = tmp8->get((int)1);
		Float m112 = tmp9;
		::openfl::_Vector::FloatVector tmp10 = this->rawData;
		Float tmp11 = tmp10->get((int)5);
		Float m122 = tmp11;
		::openfl::_Vector::FloatVector tmp12 = this->rawData;
		Float tmp13 = tmp12->get((int)9);
		Float m132 = tmp13;
		::openfl::_Vector::FloatVector tmp14 = this->rawData;
		Float tmp15 = tmp14->get((int)13);
		Float m142 = tmp15;
		::openfl::_Vector::FloatVector tmp16 = this->rawData;
		Float tmp17 = tmp16->get((int)2);
		Float m113 = tmp17;
		::openfl::_Vector::FloatVector tmp18 = this->rawData;
		Float tmp19 = tmp18->get((int)6);
		Float m123 = tmp19;
		::openfl::_Vector::FloatVector tmp20 = this->rawData;
		Float tmp21 = tmp20->get((int)10);
		Float m133 = tmp21;
		::openfl::_Vector::FloatVector tmp22 = this->rawData;
		Float tmp23 = tmp22->get((int)14);
		Float m143 = tmp23;
		::openfl::_Vector::FloatVector tmp24 = this->rawData;
		Float tmp25 = tmp24->get((int)3);
		Float m114 = tmp25;
		::openfl::_Vector::FloatVector tmp26 = this->rawData;
		Float tmp27 = tmp26->get((int)7);
		Float m124 = tmp27;
		::openfl::_Vector::FloatVector tmp28 = this->rawData;
		Float tmp29 = tmp28->get((int)11);
		Float m134 = tmp29;
		::openfl::_Vector::FloatVector tmp30 = this->rawData;
		Float tmp31 = tmp30->get((int)15);
		Float m144 = tmp31;
		Float tmp32 = lhs->rawData->get((int)0);
		Float m211 = tmp32;
		Float tmp33 = lhs->rawData->get((int)4);
		Float m221 = tmp33;
		Float tmp34 = lhs->rawData->get((int)8);
		Float m231 = tmp34;
		Float tmp35 = lhs->rawData->get((int)12);
		Float m241 = tmp35;
		Float tmp36 = lhs->rawData->get((int)1);
		Float m212 = tmp36;
		Float tmp37 = lhs->rawData->get((int)5);
		Float m222 = tmp37;
		Float tmp38 = lhs->rawData->get((int)9);
		Float m232 = tmp38;
		Float tmp39 = lhs->rawData->get((int)13);
		Float m242 = tmp39;
		Float tmp40 = lhs->rawData->get((int)2);
		Float m213 = tmp40;
		Float tmp41 = lhs->rawData->get((int)6);
		Float m223 = tmp41;
		Float tmp42 = lhs->rawData->get((int)10);
		Float m233 = tmp42;
		Float tmp43 = lhs->rawData->get((int)14);
		Float m243 = tmp43;
		Float tmp44 = lhs->rawData->get((int)3);
		Float m214 = tmp44;
		Float tmp45 = lhs->rawData->get((int)7);
		Float m224 = tmp45;
		Float tmp46 = lhs->rawData->get((int)11);
		Float m234 = tmp46;
		Float tmp47 = lhs->rawData->get((int)15);
		Float m244 = tmp47;
		::openfl::_Vector::FloatVector tmp48 = this->rawData;
		Float tmp49 = (m111 * m211);
		Float tmp50 = (m112 * m221);
		Float tmp51 = (tmp49 + tmp50);
		Float tmp52 = (m113 * m231);
		Float tmp53 = (tmp51 + tmp52);
		Float tmp54 = (m114 * m241);
		Float tmp55 = (tmp53 + tmp54);
		Float tmp56 = tmp48->set((int)0,tmp55);
		tmp56;
		::openfl::_Vector::FloatVector tmp57 = this->rawData;
		Float tmp58 = (m111 * m212);
		Float tmp59 = (m112 * m222);
		Float tmp60 = (tmp58 + tmp59);
		Float tmp61 = (m113 * m232);
		Float tmp62 = (tmp60 + tmp61);
		Float tmp63 = (m114 * m242);
		Float tmp64 = (tmp62 + tmp63);
		Float tmp65 = tmp57->set((int)1,tmp64);
		tmp65;
		::openfl::_Vector::FloatVector tmp66 = this->rawData;
		Float tmp67 = (m111 * m213);
		Float tmp68 = (m112 * m223);
		Float tmp69 = (tmp67 + tmp68);
		Float tmp70 = (m113 * m233);
		Float tmp71 = (tmp69 + tmp70);
		Float tmp72 = (m114 * m243);
		Float tmp73 = (tmp71 + tmp72);
		Float tmp74 = tmp66->set((int)2,tmp73);
		tmp74;
		::openfl::_Vector::FloatVector tmp75 = this->rawData;
		Float tmp76 = (m111 * m214);
		Float tmp77 = (m112 * m224);
		Float tmp78 = (tmp76 + tmp77);
		Float tmp79 = (m113 * m234);
		Float tmp80 = (tmp78 + tmp79);
		Float tmp81 = (m114 * m244);
		Float tmp82 = (tmp80 + tmp81);
		Float tmp83 = tmp75->set((int)3,tmp82);
		tmp83;
		::openfl::_Vector::FloatVector tmp84 = this->rawData;
		Float tmp85 = (m121 * m211);
		Float tmp86 = (m122 * m221);
		Float tmp87 = (tmp85 + tmp86);
		Float tmp88 = (m123 * m231);
		Float tmp89 = (tmp87 + tmp88);
		Float tmp90 = (m124 * m241);
		Float tmp91 = (tmp89 + tmp90);
		Float tmp92 = tmp84->set((int)4,tmp91);
		tmp92;
		::openfl::_Vector::FloatVector tmp93 = this->rawData;
		Float tmp94 = (m121 * m212);
		Float tmp95 = (m122 * m222);
		Float tmp96 = (tmp94 + tmp95);
		Float tmp97 = (m123 * m232);
		Float tmp98 = (tmp96 + tmp97);
		Float tmp99 = (m124 * m242);
		Float tmp100 = (tmp98 + tmp99);
		Float tmp101 = tmp93->set((int)5,tmp100);
		tmp101;
		::openfl::_Vector::FloatVector tmp102 = this->rawData;
		Float tmp103 = (m121 * m213);
		Float tmp104 = (m122 * m223);
		Float tmp105 = (tmp103 + tmp104);
		Float tmp106 = (m123 * m233);
		Float tmp107 = (tmp105 + tmp106);
		Float tmp108 = (m124 * m243);
		Float tmp109 = (tmp107 + tmp108);
		Float tmp110 = tmp102->set((int)6,tmp109);
		tmp110;
		::openfl::_Vector::FloatVector tmp111 = this->rawData;
		Float tmp112 = (m121 * m214);
		Float tmp113 = (m122 * m224);
		Float tmp114 = (tmp112 + tmp113);
		Float tmp115 = (m123 * m234);
		Float tmp116 = (tmp114 + tmp115);
		Float tmp117 = (m124 * m244);
		Float tmp118 = (tmp116 + tmp117);
		Float tmp119 = tmp111->set((int)7,tmp118);
		tmp119;
		::openfl::_Vector::FloatVector tmp120 = this->rawData;
		Float tmp121 = (m131 * m211);
		Float tmp122 = (m132 * m221);
		Float tmp123 = (tmp121 + tmp122);
		Float tmp124 = (m133 * m231);
		Float tmp125 = (tmp123 + tmp124);
		Float tmp126 = (m134 * m241);
		Float tmp127 = (tmp125 + tmp126);
		Float tmp128 = tmp120->set((int)8,tmp127);
		tmp128;
		::openfl::_Vector::FloatVector tmp129 = this->rawData;
		Float tmp130 = (m131 * m212);
		Float tmp131 = (m132 * m222);
		Float tmp132 = (tmp130 + tmp131);
		Float tmp133 = (m133 * m232);
		Float tmp134 = (tmp132 + tmp133);
		Float tmp135 = (m134 * m242);
		Float tmp136 = (tmp134 + tmp135);
		Float tmp137 = tmp129->set((int)9,tmp136);
		tmp137;
		::openfl::_Vector::FloatVector tmp138 = this->rawData;
		Float tmp139 = (m131 * m213);
		Float tmp140 = (m132 * m223);
		Float tmp141 = (tmp139 + tmp140);
		Float tmp142 = (m133 * m233);
		Float tmp143 = (tmp141 + tmp142);
		Float tmp144 = (m134 * m243);
		Float tmp145 = (tmp143 + tmp144);
		Float tmp146 = tmp138->set((int)10,tmp145);
		tmp146;
		::openfl::_Vector::FloatVector tmp147 = this->rawData;
		Float tmp148 = (m131 * m214);
		Float tmp149 = (m132 * m224);
		Float tmp150 = (tmp148 + tmp149);
		Float tmp151 = (m133 * m234);
		Float tmp152 = (tmp150 + tmp151);
		Float tmp153 = (m134 * m244);
		Float tmp154 = (tmp152 + tmp153);
		Float tmp155 = tmp147->set((int)11,tmp154);
		tmp155;
		::openfl::_Vector::FloatVector tmp156 = this->rawData;
		Float tmp157 = (m141 * m211);
		Float tmp158 = (m142 * m221);
		Float tmp159 = (tmp157 + tmp158);
		Float tmp160 = (m143 * m231);
		Float tmp161 = (tmp159 + tmp160);
		Float tmp162 = (m144 * m241);
		Float tmp163 = (tmp161 + tmp162);
		Float tmp164 = tmp156->set((int)12,tmp163);
		tmp164;
		::openfl::_Vector::FloatVector tmp165 = this->rawData;
		Float tmp166 = (m141 * m212);
		Float tmp167 = (m142 * m222);
		Float tmp168 = (tmp166 + tmp167);
		Float tmp169 = (m143 * m232);
		Float tmp170 = (tmp168 + tmp169);
		Float tmp171 = (m144 * m242);
		Float tmp172 = (tmp170 + tmp171);
		Float tmp173 = tmp165->set((int)13,tmp172);
		tmp173;
		::openfl::_Vector::FloatVector tmp174 = this->rawData;
		Float tmp175 = (m141 * m213);
		Float tmp176 = (m142 * m223);
		Float tmp177 = (tmp175 + tmp176);
		Float tmp178 = (m143 * m233);
		Float tmp179 = (tmp177 + tmp178);
		Float tmp180 = (m144 * m243);
		Float tmp181 = (tmp179 + tmp180);
		Float tmp182 = tmp174->set((int)14,tmp181);
		tmp182;
		::openfl::_Vector::FloatVector tmp183 = this->rawData;
		Float tmp184 = (m141 * m214);
		Float tmp185 = (m142 * m224);
		Float tmp186 = (tmp184 + tmp185);
		Float tmp187 = (m143 * m234);
		Float tmp188 = (tmp186 + tmp187);
		Float tmp189 = (m144 * m244);
		Float tmp190 = (tmp188 + tmp189);
		Float tmp191 = tmp183->set((int)15,tmp190);
		tmp191;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Matrix3D_obj,append,(void))

Void Matrix3D_obj::appendRotation( Float degrees,::openfl::geom::Vector3D axis,::openfl::geom::Vector3D pivotPoint){
{
		Float tx;
		Float ty;
		Float tz;
		Float tmp = tz = (int)0;
		Float tmp1 = ty = tmp;
		tx = tmp1;
		bool tmp2 = (pivotPoint != null());
		if ((tmp2)){
			tx = pivotPoint->x;
			ty = pivotPoint->y;
			tz = pivotPoint->z;
		}
		Float tmp3 = degrees;
		Float tmp4 = ::Math_obj::PI;
		Float tmp5 = (tmp3 * tmp4);
		Float tmp6 = (Float(tmp5) / Float((int)180));
		Float radian = tmp6;
		Float tmp7 = radian;
		Float tmp8 = ::Math_obj::cos(tmp7);
		Float cos = tmp8;
		Float tmp9 = radian;
		Float tmp10 = ::Math_obj::sin(tmp9);
		Float sin = tmp10;
		Float x = axis->x;
		Float y = axis->y;
		Float z = axis->z;
		Float tmp11 = (x * x);
		Float x2 = tmp11;
		Float tmp12 = (y * y);
		Float y2 = tmp12;
		Float tmp13 = (z * z);
		Float z2 = tmp13;
		Float tmp14 = (x2 + y2);
		Float tmp15 = z2;
		Float tmp16 = (tmp14 + tmp15);
		Float ls = tmp16;
		bool tmp17 = (ls != (int)0);
		if ((tmp17)){
			Float tmp18 = ls;
			Float tmp19 = ::Math_obj::sqrt(tmp18);
			Float l = tmp19;
			hx::DivEq(x,l);
			hx::DivEq(y,l);
			hx::DivEq(z,l);
			hx::DivEq(x2,ls);
			hx::DivEq(y2,ls);
			hx::DivEq(z2,ls);
		}
		Float tmp18 = ((int)1 - cos);
		Float ccos = tmp18;
		::openfl::geom::Matrix3D tmp19 = ::openfl::geom::Matrix3D_obj::__new(null());
		::openfl::geom::Matrix3D m = tmp19;
		::openfl::_Vector::FloatVector d = m->rawData;
		Float tmp20 = x2;
		Float tmp21 = (y2 + z2);
		Float tmp22 = cos;
		Float tmp23 = (tmp21 * tmp22);
		Float tmp24 = (tmp20 + tmp23);
		Float tmp25 = d->set((int)0,tmp24);
		tmp25;
		Float tmp26 = (x * y);
		Float tmp27 = ccos;
		Float tmp28 = (tmp26 * tmp27);
		Float tmp29 = (z * sin);
		Float tmp30 = (tmp28 + tmp29);
		Float tmp31 = d->set((int)1,tmp30);
		tmp31;
		Float tmp32 = (x * z);
		Float tmp33 = ccos;
		Float tmp34 = (tmp32 * tmp33);
		Float tmp35 = (y * sin);
		Float tmp36 = (tmp34 - tmp35);
		Float tmp37 = d->set((int)2,tmp36);
		tmp37;
		Float tmp38 = (x * y);
		Float tmp39 = ccos;
		Float tmp40 = (tmp38 * tmp39);
		Float tmp41 = (z * sin);
		Float tmp42 = (tmp40 - tmp41);
		Float tmp43 = d->set((int)4,tmp42);
		tmp43;
		Float tmp44 = y2;
		Float tmp45 = (x2 + z2);
		Float tmp46 = cos;
		Float tmp47 = (tmp45 * tmp46);
		Float tmp48 = (tmp44 + tmp47);
		Float tmp49 = d->set((int)5,tmp48);
		tmp49;
		Float tmp50 = (y * z);
		Float tmp51 = ccos;
		Float tmp52 = (tmp50 * tmp51);
		Float tmp53 = (x * sin);
		Float tmp54 = (tmp52 + tmp53);
		Float tmp55 = d->set((int)6,tmp54);
		tmp55;
		Float tmp56 = (x * z);
		Float tmp57 = ccos;
		Float tmp58 = (tmp56 * tmp57);
		Float tmp59 = (y * sin);
		Float tmp60 = (tmp58 + tmp59);
		Float tmp61 = d->set((int)8,tmp60);
		tmp61;
		Float tmp62 = (y * z);
		Float tmp63 = ccos;
		Float tmp64 = (tmp62 * tmp63);
		Float tmp65 = (x * sin);
		Float tmp66 = (tmp64 - tmp65);
		Float tmp67 = d->set((int)9,tmp66);
		tmp67;
		Float tmp68 = z2;
		Float tmp69 = (x2 + y2);
		Float tmp70 = cos;
		Float tmp71 = (tmp69 * tmp70);
		Float tmp72 = (tmp68 + tmp71);
		Float tmp73 = d->set((int)10,tmp72);
		tmp73;
		Float tmp74 = tx;
		Float tmp75 = (y2 + z2);
		Float tmp76 = (tmp74 * tmp75);
		Float tmp77 = x;
		Float tmp78 = (ty * y);
		Float tmp79 = (tz * z);
		Float tmp80 = (tmp78 + tmp79);
		Float tmp81 = (tmp77 * tmp80);
		Float tmp82 = (tmp76 - tmp81);
		Float tmp83 = ccos;
		Float tmp84 = (tmp82 * tmp83);
		Float tmp85 = (ty * z);
		Float tmp86 = (tz * y);
		Float tmp87 = (tmp85 - tmp86);
		Float tmp88 = sin;
		Float tmp89 = (tmp87 * tmp88);
		Float tmp90 = (tmp84 + tmp89);
		Float tmp91 = d->set((int)12,tmp90);
		tmp91;
		Float tmp92 = ty;
		Float tmp93 = (x2 + z2);
		Float tmp94 = (tmp92 * tmp93);
		Float tmp95 = y;
		Float tmp96 = (tx * x);
		Float tmp97 = (tz * z);
		Float tmp98 = (tmp96 + tmp97);
		Float tmp99 = (tmp95 * tmp98);
		Float tmp100 = (tmp94 - tmp99);
		Float tmp101 = ccos;
		Float tmp102 = (tmp100 * tmp101);
		Float tmp103 = (tz * x);
		Float tmp104 = (tx * z);
		Float tmp105 = (tmp103 - tmp104);
		Float tmp106 = sin;
		Float tmp107 = (tmp105 * tmp106);
		Float tmp108 = (tmp102 + tmp107);
		Float tmp109 = d->set((int)13,tmp108);
		tmp109;
		Float tmp110 = tz;
		Float tmp111 = (x2 + y2);
		Float tmp112 = (tmp110 * tmp111);
		Float tmp113 = z;
		Float tmp114 = (tx * x);
		Float tmp115 = (ty * y);
		Float tmp116 = (tmp114 + tmp115);
		Float tmp117 = (tmp113 * tmp116);
		Float tmp118 = (tmp112 - tmp117);
		Float tmp119 = ccos;
		Float tmp120 = (tmp118 * tmp119);
		Float tmp121 = (tx * y);
		Float tmp122 = (ty * x);
		Float tmp123 = (tmp121 - tmp122);
		Float tmp124 = sin;
		Float tmp125 = (tmp123 * tmp124);
		Float tmp126 = (tmp120 + tmp125);
		Float tmp127 = d->set((int)14,tmp126);
		tmp127;
		::openfl::geom::Matrix3D tmp128 = m;
		this->append(tmp128);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC3(Matrix3D_obj,appendRotation,(void))

Void Matrix3D_obj::appendScale( Float xScale,Float yScale,Float zScale){
{
		::openfl::_Vector::FloatVector tmp;
		{
			Array< Float > a = Array_obj< Float >::__new().Add(xScale).Add(((Float)0.0)).Add(((Float)0.0)).Add(((Float)0.0)).Add(((Float)0.0)).Add(yScale).Add(((Float)0.0)).Add(((Float)0.0)).Add(((Float)0.0)).Add(((Float)0.0)).Add(zScale).Add(((Float)0.0)).Add(((Float)0.0)).Add(((Float)0.0)).Add(((Float)0.0)).Add(((Float)1.0));
			::openfl::_Vector::FloatVector tmp1;
			{
				int length = null();
				bool fixed = null();
				::openfl::_Vector::FloatVector tmp2 = ::openfl::_Vector::FloatVector_obj::__new(length,fixed,null());
				::openfl::_Vector::FloatVector tmp3 = tmp2;
				tmp1 = tmp3;
			}
			::openfl::_Vector::FloatVector vector = tmp1;
			{
				int _g1 = (int)0;
				int _g = a->length;
				while((true)){
					bool tmp2 = (_g1 < _g);
					bool tmp3 = !(tmp2);
					if ((tmp3)){
						break;
					}
					int tmp4 = (_g1)++;
					int i = tmp4;
					int tmp5 = i;
					Float tmp6 = a->__get(i);
					Float tmp7 = tmp6;
					Float tmp8 = vector->set(tmp5,tmp7);
					tmp8;
				}
			}
			tmp = vector;
		}
		::openfl::geom::Matrix3D tmp1 = ::openfl::geom::Matrix3D_obj::__new(tmp);
		this->append(tmp1);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC3(Matrix3D_obj,appendScale,(void))

Void Matrix3D_obj::appendTranslation( Float x,Float y,Float z){
{
		{
			::openfl::_Vector::FloatVector tmp = this->rawData;
			Float tmp1 = tmp->get((int)12);
			Float tmp2 = tmp1;
			Float tmp3 = x;
			Float tmp4 = (tmp2 + tmp3);
			Float value = tmp4;
			::openfl::_Vector::FloatVector tmp5 = this->rawData;
			Float tmp6 = value;
			tmp5->set((int)12,tmp6);
		}
		{
			::openfl::_Vector::FloatVector tmp = this->rawData;
			Float tmp1 = tmp->get((int)13);
			Float tmp2 = tmp1;
			Float tmp3 = y;
			Float tmp4 = (tmp2 + tmp3);
			Float value = tmp4;
			::openfl::_Vector::FloatVector tmp5 = this->rawData;
			Float tmp6 = value;
			tmp5->set((int)13,tmp6);
		}
		{
			::openfl::_Vector::FloatVector tmp = this->rawData;
			Float tmp1 = tmp->get((int)14);
			Float tmp2 = tmp1;
			Float tmp3 = z;
			Float tmp4 = (tmp2 + tmp3);
			Float value = tmp4;
			::openfl::_Vector::FloatVector tmp5 = this->rawData;
			Float tmp6 = value;
			tmp5->set((int)14,tmp6);
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC3(Matrix3D_obj,appendTranslation,(void))

::openfl::geom::Matrix3D Matrix3D_obj::clone( ){
	::openfl::_Vector::FloatVector tmp = this->rawData;
	::openfl::_Vector::IVector tmp1 = tmp->copy();
	::openfl::_Vector::FloatVector tmp2 = ((::openfl::_Vector::FloatVector)(tmp1));
	::openfl::geom::Matrix3D tmp3 = ::openfl::geom::Matrix3D_obj::__new(tmp2);
	return tmp3;
}


HX_DEFINE_DYNAMIC_FUNC0(Matrix3D_obj,clone,return )

Void Matrix3D_obj::copyColumnFrom( int column,::openfl::geom::Vector3D vector3D){
{
		int tmp = column;
		switch( (int)(tmp)){
			case (int)0: {
				::openfl::_Vector::FloatVector tmp1 = this->rawData;
				Float tmp2 = vector3D->x;
				Float tmp3 = tmp1->set((int)0,tmp2);
				tmp3;
				::openfl::_Vector::FloatVector tmp4 = this->rawData;
				Float tmp5 = vector3D->y;
				Float tmp6 = tmp4->set((int)1,tmp5);
				tmp6;
				::openfl::_Vector::FloatVector tmp7 = this->rawData;
				Float tmp8 = vector3D->z;
				Float tmp9 = tmp7->set((int)2,tmp8);
				tmp9;
				::openfl::_Vector::FloatVector tmp10 = this->rawData;
				Float tmp11 = vector3D->w;
				Float tmp12 = tmp10->set((int)3,tmp11);
				tmp12;
			}
			;break;
			case (int)1: {
				::openfl::_Vector::FloatVector tmp1 = this->rawData;
				Float tmp2 = vector3D->x;
				Float tmp3 = tmp1->set((int)4,tmp2);
				tmp3;
				::openfl::_Vector::FloatVector tmp4 = this->rawData;
				Float tmp5 = vector3D->y;
				Float tmp6 = tmp4->set((int)5,tmp5);
				tmp6;
				::openfl::_Vector::FloatVector tmp7 = this->rawData;
				Float tmp8 = vector3D->z;
				Float tmp9 = tmp7->set((int)6,tmp8);
				tmp9;
				::openfl::_Vector::FloatVector tmp10 = this->rawData;
				Float tmp11 = vector3D->w;
				Float tmp12 = tmp10->set((int)7,tmp11);
				tmp12;
			}
			;break;
			case (int)2: {
				::openfl::_Vector::FloatVector tmp1 = this->rawData;
				Float tmp2 = vector3D->x;
				Float tmp3 = tmp1->set((int)8,tmp2);
				tmp3;
				::openfl::_Vector::FloatVector tmp4 = this->rawData;
				Float tmp5 = vector3D->y;
				Float tmp6 = tmp4->set((int)9,tmp5);
				tmp6;
				::openfl::_Vector::FloatVector tmp7 = this->rawData;
				Float tmp8 = vector3D->z;
				Float tmp9 = tmp7->set((int)10,tmp8);
				tmp9;
				::openfl::_Vector::FloatVector tmp10 = this->rawData;
				Float tmp11 = vector3D->w;
				Float tmp12 = tmp10->set((int)11,tmp11);
				tmp12;
			}
			;break;
			case (int)3: {
				::openfl::_Vector::FloatVector tmp1 = this->rawData;
				Float tmp2 = vector3D->x;
				Float tmp3 = tmp1->set((int)12,tmp2);
				tmp3;
				::openfl::_Vector::FloatVector tmp4 = this->rawData;
				Float tmp5 = vector3D->y;
				Float tmp6 = tmp4->set((int)13,tmp5);
				tmp6;
				::openfl::_Vector::FloatVector tmp7 = this->rawData;
				Float tmp8 = vector3D->z;
				Float tmp9 = tmp7->set((int)14,tmp8);
				tmp9;
				::openfl::_Vector::FloatVector tmp10 = this->rawData;
				Float tmp11 = vector3D->w;
				Float tmp12 = tmp10->set((int)15,tmp11);
				tmp12;
			}
			;break;
			default: {
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(Matrix3D_obj,copyColumnFrom,(void))

Void Matrix3D_obj::copyColumnTo( int column,::openfl::geom::Vector3D vector3D){
{
		int tmp = column;
		switch( (int)(tmp)){
			case (int)0: {
				::openfl::_Vector::FloatVector tmp1 = this->rawData;
				Float tmp2 = tmp1->get((int)0);
				vector3D->x = tmp2;
				::openfl::_Vector::FloatVector tmp3 = this->rawData;
				Float tmp4 = tmp3->get((int)1);
				vector3D->y = tmp4;
				::openfl::_Vector::FloatVector tmp5 = this->rawData;
				Float tmp6 = tmp5->get((int)2);
				vector3D->z = tmp6;
				::openfl::_Vector::FloatVector tmp7 = this->rawData;
				Float tmp8 = tmp7->get((int)3);
				vector3D->w = tmp8;
			}
			;break;
			case (int)1: {
				::openfl::_Vector::FloatVector tmp1 = this->rawData;
				Float tmp2 = tmp1->get((int)4);
				vector3D->x = tmp2;
				::openfl::_Vector::FloatVector tmp3 = this->rawData;
				Float tmp4 = tmp3->get((int)5);
				vector3D->y = tmp4;
				::openfl::_Vector::FloatVector tmp5 = this->rawData;
				Float tmp6 = tmp5->get((int)6);
				vector3D->z = tmp6;
				::openfl::_Vector::FloatVector tmp7 = this->rawData;
				Float tmp8 = tmp7->get((int)7);
				vector3D->w = tmp8;
			}
			;break;
			case (int)2: {
				::openfl::_Vector::FloatVector tmp1 = this->rawData;
				Float tmp2 = tmp1->get((int)8);
				vector3D->x = tmp2;
				::openfl::_Vector::FloatVector tmp3 = this->rawData;
				Float tmp4 = tmp3->get((int)9);
				vector3D->y = tmp4;
				::openfl::_Vector::FloatVector tmp5 = this->rawData;
				Float tmp6 = tmp5->get((int)10);
				vector3D->z = tmp6;
				::openfl::_Vector::FloatVector tmp7 = this->rawData;
				Float tmp8 = tmp7->get((int)11);
				vector3D->w = tmp8;
			}
			;break;
			case (int)3: {
				::openfl::_Vector::FloatVector tmp1 = this->rawData;
				Float tmp2 = tmp1->get((int)12);
				vector3D->x = tmp2;
				::openfl::_Vector::FloatVector tmp3 = this->rawData;
				Float tmp4 = tmp3->get((int)13);
				vector3D->y = tmp4;
				::openfl::_Vector::FloatVector tmp5 = this->rawData;
				Float tmp6 = tmp5->get((int)14);
				vector3D->z = tmp6;
				::openfl::_Vector::FloatVector tmp7 = this->rawData;
				Float tmp8 = tmp7->get((int)15);
				vector3D->w = tmp8;
			}
			;break;
			default: {
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(Matrix3D_obj,copyColumnTo,(void))

Void Matrix3D_obj::copyFrom( ::openfl::geom::Matrix3D other){
{
		::openfl::_Vector::IVector tmp = other->rawData->copy();
		this->rawData = ((::openfl::_Vector::FloatVector)(tmp));
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Matrix3D_obj,copyFrom,(void))

Void Matrix3D_obj::copyRawDataFrom( ::openfl::_Vector::FloatVector vector,hx::Null< int >  __o_index,hx::Null< bool >  __o_transpose){
int index = __o_index.Default(0);
bool transpose = __o_transpose.Default(false);
{
		bool tmp = transpose;
		if ((tmp)){
			this->transpose();
		}
		int tmp1;
		{
			int tmp2 = vector->get_length();
			int a = tmp2;
			tmp1 = (a - index);
		}
		int length = tmp1;
		{
			int _g = (int)0;
			while((true)){
				bool tmp2 = (_g < length);
				bool tmp3 = !(tmp2);
				if ((tmp3)){
					break;
				}
				int tmp4 = (_g)++;
				int i = tmp4;
				{
					int tmp5 = (i + index);
					int tmp6 = tmp5;
					Float tmp7 = vector->get(tmp6);
					Float value = tmp7;
					::openfl::_Vector::FloatVector tmp8 = this->rawData;
					int tmp9 = i;
					Float tmp10 = value;
					tmp8->set(tmp9,tmp10);
				}
			}
		}
		bool tmp2 = transpose;
		if ((tmp2)){
			this->transpose();
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC3(Matrix3D_obj,copyRawDataFrom,(void))

Void Matrix3D_obj::copyRawDataTo( ::openfl::_Vector::FloatVector vector,hx::Null< int >  __o_index,hx::Null< bool >  __o_transpose){
int index = __o_index.Default(0);
bool transpose = __o_transpose.Default(false);
{
		bool tmp = transpose;
		if ((tmp)){
			this->transpose();
		}
		{
			int _g1 = (int)0;
			::openfl::_Vector::FloatVector tmp1 = this->rawData;
			int tmp2 = tmp1->get_length();
			int _g = tmp2;
			while((true)){
				bool tmp3 = (_g1 < _g);
				bool tmp4 = !(tmp3);
				if ((tmp4)){
					break;
				}
				int tmp5 = (_g1)++;
				int i = tmp5;
				{
					::openfl::_Vector::FloatVector tmp6 = this->rawData;
					int tmp7 = i;
					Float tmp8 = tmp6->get(tmp7);
					Float value = tmp8;
					int tmp9 = (i + index);
					int tmp10 = tmp9;
					Float tmp11 = value;
					vector->set(tmp10,tmp11);
				}
			}
		}
		bool tmp1 = transpose;
		if ((tmp1)){
			this->transpose();
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC3(Matrix3D_obj,copyRawDataTo,(void))

Void Matrix3D_obj::copyRowFrom( int row,::openfl::geom::Vector3D vector3D){
{
		int tmp = row;
		switch( (int)(tmp)){
			case (int)0: {
				::openfl::_Vector::FloatVector tmp1 = this->rawData;
				Float tmp2 = vector3D->x;
				Float tmp3 = tmp1->set((int)0,tmp2);
				tmp3;
				::openfl::_Vector::FloatVector tmp4 = this->rawData;
				Float tmp5 = vector3D->y;
				Float tmp6 = tmp4->set((int)4,tmp5);
				tmp6;
				::openfl::_Vector::FloatVector tmp7 = this->rawData;
				Float tmp8 = vector3D->z;
				Float tmp9 = tmp7->set((int)8,tmp8);
				tmp9;
				::openfl::_Vector::FloatVector tmp10 = this->rawData;
				Float tmp11 = vector3D->w;
				Float tmp12 = tmp10->set((int)12,tmp11);
				tmp12;
			}
			;break;
			case (int)1: {
				::openfl::_Vector::FloatVector tmp1 = this->rawData;
				Float tmp2 = vector3D->x;
				Float tmp3 = tmp1->set((int)1,tmp2);
				tmp3;
				::openfl::_Vector::FloatVector tmp4 = this->rawData;
				Float tmp5 = vector3D->y;
				Float tmp6 = tmp4->set((int)5,tmp5);
				tmp6;
				::openfl::_Vector::FloatVector tmp7 = this->rawData;
				Float tmp8 = vector3D->z;
				Float tmp9 = tmp7->set((int)9,tmp8);
				tmp9;
				::openfl::_Vector::FloatVector tmp10 = this->rawData;
				Float tmp11 = vector3D->w;
				Float tmp12 = tmp10->set((int)13,tmp11);
				tmp12;
			}
			;break;
			case (int)2: {
				::openfl::_Vector::FloatVector tmp1 = this->rawData;
				Float tmp2 = vector3D->x;
				Float tmp3 = tmp1->set((int)2,tmp2);
				tmp3;
				::openfl::_Vector::FloatVector tmp4 = this->rawData;
				Float tmp5 = vector3D->y;
				Float tmp6 = tmp4->set((int)6,tmp5);
				tmp6;
				::openfl::_Vector::FloatVector tmp7 = this->rawData;
				Float tmp8 = vector3D->z;
				Float tmp9 = tmp7->set((int)10,tmp8);
				tmp9;
				::openfl::_Vector::FloatVector tmp10 = this->rawData;
				Float tmp11 = vector3D->w;
				Float tmp12 = tmp10->set((int)14,tmp11);
				tmp12;
			}
			;break;
			case (int)3: {
				::openfl::_Vector::FloatVector tmp1 = this->rawData;
				Float tmp2 = vector3D->x;
				Float tmp3 = tmp1->set((int)3,tmp2);
				tmp3;
				::openfl::_Vector::FloatVector tmp4 = this->rawData;
				Float tmp5 = vector3D->y;
				Float tmp6 = tmp4->set((int)7,tmp5);
				tmp6;
				::openfl::_Vector::FloatVector tmp7 = this->rawData;
				Float tmp8 = vector3D->z;
				Float tmp9 = tmp7->set((int)11,tmp8);
				tmp9;
				::openfl::_Vector::FloatVector tmp10 = this->rawData;
				Float tmp11 = vector3D->w;
				Float tmp12 = tmp10->set((int)15,tmp11);
				tmp12;
			}
			;break;
			default: {
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(Matrix3D_obj,copyRowFrom,(void))

Void Matrix3D_obj::copyRowTo( int row,::openfl::geom::Vector3D vector3D){
{
		int tmp = row;
		switch( (int)(tmp)){
			case (int)0: {
				::openfl::_Vector::FloatVector tmp1 = this->rawData;
				Float tmp2 = tmp1->get((int)0);
				vector3D->x = tmp2;
				::openfl::_Vector::FloatVector tmp3 = this->rawData;
				Float tmp4 = tmp3->get((int)4);
				vector3D->y = tmp4;
				::openfl::_Vector::FloatVector tmp5 = this->rawData;
				Float tmp6 = tmp5->get((int)8);
				vector3D->z = tmp6;
				::openfl::_Vector::FloatVector tmp7 = this->rawData;
				Float tmp8 = tmp7->get((int)12);
				vector3D->w = tmp8;
			}
			;break;
			case (int)1: {
				::openfl::_Vector::FloatVector tmp1 = this->rawData;
				Float tmp2 = tmp1->get((int)1);
				vector3D->x = tmp2;
				::openfl::_Vector::FloatVector tmp3 = this->rawData;
				Float tmp4 = tmp3->get((int)5);
				vector3D->y = tmp4;
				::openfl::_Vector::FloatVector tmp5 = this->rawData;
				Float tmp6 = tmp5->get((int)9);
				vector3D->z = tmp6;
				::openfl::_Vector::FloatVector tmp7 = this->rawData;
				Float tmp8 = tmp7->get((int)13);
				vector3D->w = tmp8;
			}
			;break;
			case (int)2: {
				::openfl::_Vector::FloatVector tmp1 = this->rawData;
				Float tmp2 = tmp1->get((int)2);
				vector3D->x = tmp2;
				::openfl::_Vector::FloatVector tmp3 = this->rawData;
				Float tmp4 = tmp3->get((int)6);
				vector3D->y = tmp4;
				::openfl::_Vector::FloatVector tmp5 = this->rawData;
				Float tmp6 = tmp5->get((int)10);
				vector3D->z = tmp6;
				::openfl::_Vector::FloatVector tmp7 = this->rawData;
				Float tmp8 = tmp7->get((int)14);
				vector3D->w = tmp8;
			}
			;break;
			case (int)3: {
				::openfl::_Vector::FloatVector tmp1 = this->rawData;
				Float tmp2 = tmp1->get((int)3);
				vector3D->x = tmp2;
				::openfl::_Vector::FloatVector tmp3 = this->rawData;
				Float tmp4 = tmp3->get((int)7);
				vector3D->y = tmp4;
				::openfl::_Vector::FloatVector tmp5 = this->rawData;
				Float tmp6 = tmp5->get((int)11);
				vector3D->z = tmp6;
				::openfl::_Vector::FloatVector tmp7 = this->rawData;
				Float tmp8 = tmp7->get((int)15);
				vector3D->w = tmp8;
			}
			;break;
			default: {
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(Matrix3D_obj,copyRowTo,(void))

Void Matrix3D_obj::copyToMatrix3D( ::openfl::geom::Matrix3D other){
{
		::openfl::_Vector::FloatVector tmp = this->rawData;
		::openfl::_Vector::IVector tmp1 = tmp->copy();
		other->rawData = ((::openfl::_Vector::FloatVector)(tmp1));
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Matrix3D_obj,copyToMatrix3D,(void))

::openfl::_Vector::ObjectVector Matrix3D_obj::decompose( Dynamic orientationStyle){
	bool tmp = (orientationStyle == null());
	if ((tmp)){
		orientationStyle = ((Dynamic)((int)1));
	}
	::openfl::_Vector::ObjectVector tmp1;
	{
		int length = null();
		bool fixed = null();
		::openfl::_Vector::ObjectVector tmp2 = ::openfl::_Vector::ObjectVector_obj::__new(length,fixed,null());
		::openfl::_Vector::ObjectVector tmp3 = tmp2;
		tmp1 = tmp3;
	}
	::openfl::_Vector::ObjectVector vec = tmp1;
	::openfl::geom::Matrix3D tmp2 = this->clone();
	::openfl::geom::Matrix3D m = tmp2;
	::openfl::_Vector::IVector tmp3 = m->rawData->copy();
	::openfl::_Vector::FloatVector mr = ((::openfl::_Vector::FloatVector)(tmp3));
	Float tmp4 = mr->get((int)12);
	Float tmp5 = tmp4;
	Float tmp6 = mr->get((int)13);
	Float tmp7 = tmp6;
	Float tmp8 = mr->get((int)14);
	Float tmp9 = tmp8;
	::openfl::geom::Vector3D tmp10 = ::openfl::geom::Vector3D_obj::__new(tmp5,tmp7,tmp9,null());
	::openfl::geom::Vector3D pos = tmp10;
	Float tmp11 = mr->set((int)12,(int)0);
	tmp11;
	Float tmp12 = mr->set((int)13,(int)0);
	tmp12;
	Float tmp13 = mr->set((int)14,(int)0);
	tmp13;
	::openfl::geom::Vector3D tmp14 = ::openfl::geom::Vector3D_obj::__new(null(),null(),null(),null());
	::openfl::geom::Vector3D scale = tmp14;
	Float tmp15 = mr->get((int)0);
	Float tmp16 = tmp15;
	Float tmp17 = mr->get((int)0);
	Float tmp18 = tmp17;
	Float tmp19 = (tmp16 * tmp18);
	Float tmp20 = mr->get((int)1);
	Float tmp21 = tmp20;
	Float tmp22 = mr->get((int)1);
	Float tmp23 = tmp22;
	Float tmp24 = (tmp21 * tmp23);
	Float tmp25 = (tmp19 + tmp24);
	Float tmp26 = mr->get((int)2);
	Float tmp27 = tmp26;
	Float tmp28 = mr->get((int)2);
	Float tmp29 = tmp28;
	Float tmp30 = (tmp27 * tmp29);
	Float tmp31 = (tmp25 + tmp30);
	Float tmp32 = ::Math_obj::sqrt(tmp31);
	scale->x = tmp32;
	Float tmp33 = mr->get((int)4);
	Float tmp34 = tmp33;
	Float tmp35 = mr->get((int)4);
	Float tmp36 = tmp35;
	Float tmp37 = (tmp34 * tmp36);
	Float tmp38 = mr->get((int)5);
	Float tmp39 = tmp38;
	Float tmp40 = mr->get((int)5);
	Float tmp41 = tmp40;
	Float tmp42 = (tmp39 * tmp41);
	Float tmp43 = (tmp37 + tmp42);
	Float tmp44 = mr->get((int)6);
	Float tmp45 = tmp44;
	Float tmp46 = mr->get((int)6);
	Float tmp47 = tmp46;
	Float tmp48 = (tmp45 * tmp47);
	Float tmp49 = (tmp43 + tmp48);
	Float tmp50 = ::Math_obj::sqrt(tmp49);
	scale->y = tmp50;
	Float tmp51 = mr->get((int)8);
	Float tmp52 = tmp51;
	Float tmp53 = mr->get((int)8);
	Float tmp54 = tmp53;
	Float tmp55 = (tmp52 * tmp54);
	Float tmp56 = mr->get((int)9);
	Float tmp57 = tmp56;
	Float tmp58 = mr->get((int)9);
	Float tmp59 = tmp58;
	Float tmp60 = (tmp57 * tmp59);
	Float tmp61 = (tmp55 + tmp60);
	Float tmp62 = mr->get((int)10);
	Float tmp63 = tmp62;
	Float tmp64 = mr->get((int)10);
	Float tmp65 = tmp64;
	Float tmp66 = (tmp63 * tmp65);
	Float tmp67 = (tmp61 + tmp66);
	Float tmp68 = ::Math_obj::sqrt(tmp67);
	scale->z = tmp68;
	Float tmp69 = mr->get((int)0);
	Float tmp70 = tmp69;
	Float tmp71 = mr->get((int)5);
	Float tmp72 = tmp71;
	Float tmp73 = mr->get((int)10);
	Float tmp74 = tmp73;
	Float tmp75 = (tmp72 * tmp74);
	Float tmp76 = mr->get((int)6);
	Float tmp77 = tmp76;
	Float tmp78 = mr->get((int)9);
	Float tmp79 = tmp78;
	Float tmp80 = (tmp77 * tmp79);
	Float tmp81 = (tmp75 - tmp80);
	Float tmp82 = (tmp70 * tmp81);
	Float tmp83 = mr->get((int)1);
	Float tmp84 = tmp83;
	Float tmp85 = mr->get((int)4);
	Float tmp86 = tmp85;
	Float tmp87 = mr->get((int)10);
	Float tmp88 = tmp87;
	Float tmp89 = (tmp86 * tmp88);
	Float tmp90 = mr->get((int)6);
	Float tmp91 = tmp90;
	Float tmp92 = mr->get((int)8);
	Float tmp93 = tmp92;
	Float tmp94 = (tmp91 * tmp93);
	Float tmp95 = (tmp89 - tmp94);
	Float tmp96 = (tmp84 * tmp95);
	Float tmp97 = (tmp82 - tmp96);
	Float tmp98 = mr->get((int)2);
	Float tmp99 = tmp98;
	Float tmp100 = mr->get((int)4);
	Float tmp101 = tmp100;
	Float tmp102 = mr->get((int)9);
	Float tmp103 = tmp102;
	Float tmp104 = (tmp101 * tmp103);
	Float tmp105 = mr->get((int)5);
	Float tmp106 = tmp105;
	Float tmp107 = mr->get((int)8);
	Float tmp108 = tmp107;
	Float tmp109 = (tmp106 * tmp108);
	Float tmp110 = (tmp104 - tmp109);
	Float tmp111 = (tmp99 * tmp110);
	Float tmp112 = (tmp97 + tmp111);
	bool tmp113 = (tmp112 < (int)0);
	if ((tmp113)){
		Float tmp114 = scale->z;
		Float tmp115 = -(tmp114);
		scale->z = tmp115;
	}
	{
		Float tmp114 = mr->get((int)0);
		Float tmp115 = tmp114;
		Float tmp116 = scale->x;
		Float tmp117 = (Float(tmp115) / Float(tmp116));
		Float value = tmp117;
		Float tmp118 = value;
		mr->set((int)0,tmp118);
	}
	{
		Float tmp114 = mr->get((int)1);
		Float tmp115 = tmp114;
		Float tmp116 = scale->x;
		Float tmp117 = (Float(tmp115) / Float(tmp116));
		Float value = tmp117;
		Float tmp118 = value;
		mr->set((int)1,tmp118);
	}
	{
		Float tmp114 = mr->get((int)2);
		Float tmp115 = tmp114;
		Float tmp116 = scale->x;
		Float tmp117 = (Float(tmp115) / Float(tmp116));
		Float value = tmp117;
		Float tmp118 = value;
		mr->set((int)2,tmp118);
	}
	{
		Float tmp114 = mr->get((int)4);
		Float tmp115 = tmp114;
		Float tmp116 = scale->y;
		Float tmp117 = (Float(tmp115) / Float(tmp116));
		Float value = tmp117;
		Float tmp118 = value;
		mr->set((int)4,tmp118);
	}
	{
		Float tmp114 = mr->get((int)5);
		Float tmp115 = tmp114;
		Float tmp116 = scale->y;
		Float tmp117 = (Float(tmp115) / Float(tmp116));
		Float value = tmp117;
		Float tmp118 = value;
		mr->set((int)5,tmp118);
	}
	{
		Float tmp114 = mr->get((int)6);
		Float tmp115 = tmp114;
		Float tmp116 = scale->y;
		Float tmp117 = (Float(tmp115) / Float(tmp116));
		Float value = tmp117;
		Float tmp118 = value;
		mr->set((int)6,tmp118);
	}
	{
		Float tmp114 = mr->get((int)8);
		Float tmp115 = tmp114;
		Float tmp116 = scale->z;
		Float tmp117 = (Float(tmp115) / Float(tmp116));
		Float value = tmp117;
		Float tmp118 = value;
		mr->set((int)8,tmp118);
	}
	{
		Float tmp114 = mr->get((int)9);
		Float tmp115 = tmp114;
		Float tmp116 = scale->z;
		Float tmp117 = (Float(tmp115) / Float(tmp116));
		Float value = tmp117;
		Float tmp118 = value;
		mr->set((int)9,tmp118);
	}
	{
		Float tmp114 = mr->get((int)10);
		Float tmp115 = tmp114;
		Float tmp116 = scale->z;
		Float tmp117 = (Float(tmp115) / Float(tmp116));
		Float value = tmp117;
		Float tmp118 = value;
		mr->set((int)10,tmp118);
	}
	::openfl::geom::Vector3D tmp114 = ::openfl::geom::Vector3D_obj::__new(null(),null(),null(),null());
	::openfl::geom::Vector3D rot = tmp114;
	bool tmp115 = (orientationStyle != null());
	if ((tmp115)){
		Dynamic tmp116 = orientationStyle;
		switch( (int)(tmp116)){
			case (int)0: {
				Float tmp117 = mr->get((int)0);
				Float tmp118 = tmp117;
				Float tmp119 = mr->get((int)5);
				Float tmp120 = tmp119;
				Float tmp121 = (tmp118 + tmp120);
				Float tmp122 = mr->get((int)10);
				Float tmp123 = tmp122;
				Float tmp124 = (tmp121 + tmp123);
				Float tmp125 = (tmp124 - (int)1);
				Float tmp126 = (Float(tmp125) / Float((int)2));
				Float tmp127 = ::Math_obj::acos(tmp126);
				rot->w = tmp127;
				Float tmp128 = mr->get((int)6);
				Float tmp129 = tmp128;
				Float tmp130 = mr->get((int)9);
				Float tmp131 = tmp130;
				Float tmp132 = (tmp129 - tmp131);
				Float tmp133 = mr->get((int)6);
				Float tmp134 = tmp133;
				Float tmp135 = mr->get((int)9);
				Float tmp136 = tmp135;
				Float tmp137 = (tmp134 - tmp136);
				Float tmp138 = (tmp132 * tmp137);
				Float tmp139 = mr->get((int)8);
				Float tmp140 = tmp139;
				Float tmp141 = mr->get((int)2);
				Float tmp142 = tmp141;
				Float tmp143 = (tmp140 - tmp142);
				Float tmp144 = mr->get((int)8);
				Float tmp145 = tmp144;
				Float tmp146 = mr->get((int)2);
				Float tmp147 = tmp146;
				Float tmp148 = (tmp145 - tmp147);
				Float tmp149 = (tmp143 * tmp148);
				Float tmp150 = (tmp138 + tmp149);
				Float tmp151 = mr->get((int)1);
				Float tmp152 = tmp151;
				Float tmp153 = mr->get((int)4);
				Float tmp154 = tmp153;
				Float tmp155 = (tmp152 - tmp154);
				Float tmp156 = mr->get((int)1);
				Float tmp157 = tmp156;
				Float tmp158 = mr->get((int)4);
				Float tmp159 = tmp158;
				Float tmp160 = (tmp157 - tmp159);
				Float tmp161 = (tmp155 * tmp160);
				Float tmp162 = (tmp150 + tmp161);
				Float tmp163 = ::Math_obj::sqrt(tmp162);
				Float len = tmp163;
				bool tmp164 = (len != (int)0);
				if ((tmp164)){
					Float tmp165 = mr->get((int)6);
					Float tmp166 = tmp165;
					Float tmp167 = mr->get((int)9);
					Float tmp168 = tmp167;
					Float tmp169 = (tmp166 - tmp168);
					Float tmp170 = len;
					Float tmp171 = (Float(tmp169) / Float(tmp170));
					rot->x = tmp171;
					Float tmp172 = mr->get((int)8);
					Float tmp173 = tmp172;
					Float tmp174 = mr->get((int)2);
					Float tmp175 = tmp174;
					Float tmp176 = (tmp173 - tmp175);
					Float tmp177 = len;
					Float tmp178 = (Float(tmp176) / Float(tmp177));
					rot->y = tmp178;
					Float tmp179 = mr->get((int)1);
					Float tmp180 = tmp179;
					Float tmp181 = mr->get((int)4);
					Float tmp182 = tmp181;
					Float tmp183 = (tmp180 - tmp182);
					Float tmp184 = len;
					Float tmp185 = (Float(tmp183) / Float(tmp184));
					rot->z = tmp185;
				}
				else{
					Float tmp165 = rot->z = (int)0;
					Float tmp166 = rot->y = tmp165;
					rot->x = tmp166;
				}
			}
			;break;
			case (int)2: {
				Float tmp117 = mr->get((int)0);
				Float tmp118 = tmp117;
				Float tmp119 = mr->get((int)5);
				Float tmp120 = tmp119;
				Float tmp121 = (tmp118 + tmp120);
				Float tmp122 = mr->get((int)10);
				Float tmp123 = tmp122;
				Float tmp124 = (tmp121 + tmp123);
				Float tr = tmp124;
				bool tmp125 = (tr > (int)0);
				if ((tmp125)){
					Float tmp126 = ((int)1 + tr);
					Float tmp127 = ::Math_obj::sqrt(tmp126);
					Float tmp128 = (Float(tmp127) / Float((int)2));
					rot->w = tmp128;
					Float tmp129 = mr->get((int)6);
					Float tmp130 = tmp129;
					Float tmp131 = mr->get((int)9);
					Float tmp132 = tmp131;
					Float tmp133 = (tmp130 - tmp132);
					Float tmp134 = ((int)4 * rot->w);
					Float tmp135 = (Float(tmp133) / Float(tmp134));
					rot->x = tmp135;
					Float tmp136 = mr->get((int)8);
					Float tmp137 = tmp136;
					Float tmp138 = mr->get((int)2);
					Float tmp139 = tmp138;
					Float tmp140 = (tmp137 - tmp139);
					Float tmp141 = ((int)4 * rot->w);
					Float tmp142 = (Float(tmp140) / Float(tmp141));
					rot->y = tmp142;
					Float tmp143 = mr->get((int)1);
					Float tmp144 = tmp143;
					Float tmp145 = mr->get((int)4);
					Float tmp146 = tmp145;
					Float tmp147 = (tmp144 - tmp146);
					Float tmp148 = ((int)4 * rot->w);
					Float tmp149 = (Float(tmp147) / Float(tmp148));
					rot->z = tmp149;
				}
				else{
					Float tmp126 = mr->get((int)0);
					Float tmp127 = tmp126;
					Float tmp128 = mr->get((int)5);
					Float tmp129 = tmp128;
					bool tmp130 = (tmp127 > tmp129);
					bool tmp131;
					if ((tmp130)){
						Float tmp132 = mr->get((int)0);
						Float tmp133 = tmp132;
						Float tmp134 = tmp133;
						Float tmp135 = mr->get((int)10);
						Float tmp136 = tmp135;
						Float tmp137 = tmp136;
						tmp131 = (tmp134 > tmp137);
					}
					else{
						tmp131 = false;
					}
					if ((tmp131)){
						Float tmp132 = mr->get((int)0);
						Float tmp133 = tmp132;
						Float tmp134 = ((int)1 + tmp133);
						Float tmp135 = mr->get((int)5);
						Float tmp136 = tmp135;
						Float tmp137 = (tmp134 - tmp136);
						Float tmp138 = mr->get((int)10);
						Float tmp139 = tmp138;
						Float tmp140 = (tmp137 - tmp139);
						Float tmp141 = ::Math_obj::sqrt(tmp140);
						Float tmp142 = (Float(tmp141) / Float((int)2));
						rot->x = tmp142;
						Float tmp143 = mr->get((int)6);
						Float tmp144 = tmp143;
						Float tmp145 = mr->get((int)9);
						Float tmp146 = tmp145;
						Float tmp147 = (tmp144 - tmp146);
						Float tmp148 = ((int)4 * rot->x);
						Float tmp149 = (Float(tmp147) / Float(tmp148));
						rot->w = tmp149;
						Float tmp150 = mr->get((int)1);
						Float tmp151 = tmp150;
						Float tmp152 = mr->get((int)4);
						Float tmp153 = tmp152;
						Float tmp154 = (tmp151 + tmp153);
						Float tmp155 = ((int)4 * rot->x);
						Float tmp156 = (Float(tmp154) / Float(tmp155));
						rot->y = tmp156;
						Float tmp157 = mr->get((int)8);
						Float tmp158 = tmp157;
						Float tmp159 = mr->get((int)2);
						Float tmp160 = tmp159;
						Float tmp161 = (tmp158 + tmp160);
						Float tmp162 = ((int)4 * rot->x);
						Float tmp163 = (Float(tmp161) / Float(tmp162));
						rot->z = tmp163;
					}
					else{
						Float tmp132 = mr->get((int)5);
						Float tmp133 = tmp132;
						Float tmp134 = mr->get((int)10);
						Float tmp135 = tmp134;
						bool tmp136 = (tmp133 > tmp135);
						if ((tmp136)){
							Float tmp137 = mr->get((int)5);
							Float tmp138 = tmp137;
							Float tmp139 = ((int)1 + tmp138);
							Float tmp140 = mr->get((int)0);
							Float tmp141 = tmp140;
							Float tmp142 = (tmp139 - tmp141);
							Float tmp143 = mr->get((int)10);
							Float tmp144 = tmp143;
							Float tmp145 = (tmp142 - tmp144);
							Float tmp146 = ::Math_obj::sqrt(tmp145);
							Float tmp147 = (Float(tmp146) / Float((int)2));
							rot->y = tmp147;
							Float tmp148 = mr->get((int)1);
							Float tmp149 = tmp148;
							Float tmp150 = mr->get((int)4);
							Float tmp151 = tmp150;
							Float tmp152 = (tmp149 + tmp151);
							Float tmp153 = ((int)4 * rot->y);
							Float tmp154 = (Float(tmp152) / Float(tmp153));
							rot->x = tmp154;
							Float tmp155 = mr->get((int)8);
							Float tmp156 = tmp155;
							Float tmp157 = mr->get((int)2);
							Float tmp158 = tmp157;
							Float tmp159 = (tmp156 - tmp158);
							Float tmp160 = ((int)4 * rot->y);
							Float tmp161 = (Float(tmp159) / Float(tmp160));
							rot->w = tmp161;
							Float tmp162 = mr->get((int)6);
							Float tmp163 = tmp162;
							Float tmp164 = mr->get((int)9);
							Float tmp165 = tmp164;
							Float tmp166 = (tmp163 + tmp165);
							Float tmp167 = ((int)4 * rot->y);
							Float tmp168 = (Float(tmp166) / Float(tmp167));
							rot->z = tmp168;
						}
						else{
							Float tmp137 = mr->get((int)10);
							Float tmp138 = tmp137;
							Float tmp139 = ((int)1 + tmp138);
							Float tmp140 = mr->get((int)0);
							Float tmp141 = tmp140;
							Float tmp142 = (tmp139 - tmp141);
							Float tmp143 = mr->get((int)5);
							Float tmp144 = tmp143;
							Float tmp145 = (tmp142 - tmp144);
							Float tmp146 = ::Math_obj::sqrt(tmp145);
							Float tmp147 = (Float(tmp146) / Float((int)2));
							rot->z = tmp147;
							Float tmp148 = mr->get((int)8);
							Float tmp149 = tmp148;
							Float tmp150 = mr->get((int)2);
							Float tmp151 = tmp150;
							Float tmp152 = (tmp149 + tmp151);
							Float tmp153 = ((int)4 * rot->z);
							Float tmp154 = (Float(tmp152) / Float(tmp153));
							rot->x = tmp154;
							Float tmp155 = mr->get((int)6);
							Float tmp156 = tmp155;
							Float tmp157 = mr->get((int)9);
							Float tmp158 = tmp157;
							Float tmp159 = (tmp156 + tmp158);
							Float tmp160 = ((int)4 * rot->z);
							Float tmp161 = (Float(tmp159) / Float(tmp160));
							rot->y = tmp161;
							Float tmp162 = mr->get((int)1);
							Float tmp163 = tmp162;
							Float tmp164 = mr->get((int)4);
							Float tmp165 = tmp164;
							Float tmp166 = (tmp163 - tmp165);
							Float tmp167 = ((int)4 * rot->z);
							Float tmp168 = (Float(tmp166) / Float(tmp167));
							rot->w = tmp168;
						}
					}
				}
			}
			;break;
			case (int)1: {
				Float tmp117 = mr->get((int)2);
				Float tmp118 = tmp117;
				Float tmp119 = -(tmp118);
				Float tmp120 = ::Math_obj::asin(tmp119);
				rot->y = tmp120;
				Float tmp121 = mr->get((int)2);
				Float tmp122 = tmp121;
				bool tmp123 = (tmp122 != (int)1);
				bool tmp124;
				if ((tmp123)){
					Float tmp125 = mr->get((int)2);
					Float tmp126 = tmp125;
					Float tmp127 = tmp126;
					tmp124 = (tmp127 != (int)-1);
				}
				else{
					tmp124 = false;
				}
				if ((tmp124)){
					Float tmp125 = mr->get((int)6);
					Float tmp126 = tmp125;
					Float tmp127 = mr->get((int)10);
					Float tmp128 = tmp127;
					Float tmp129 = ::Math_obj::atan2(tmp126,tmp128);
					rot->x = tmp129;
					Float tmp130 = mr->get((int)1);
					Float tmp131 = tmp130;
					Float tmp132 = mr->get((int)0);
					Float tmp133 = tmp132;
					Float tmp134 = ::Math_obj::atan2(tmp131,tmp133);
					rot->z = tmp134;
				}
				else{
					rot->z = (int)0;
					Float tmp125 = mr->get((int)4);
					Float tmp126 = tmp125;
					Float tmp127 = mr->get((int)5);
					Float tmp128 = tmp127;
					Float tmp129 = ::Math_obj::atan2(tmp126,tmp128);
					rot->x = tmp129;
				}
			}
			;break;
		}
	}
	::openfl::geom::Vector3D tmp116 = pos;
	vec->push(tmp116);
	::openfl::geom::Vector3D tmp117 = rot;
	vec->push(tmp117);
	::openfl::geom::Vector3D tmp118 = scale;
	vec->push(tmp118);
	::openfl::_Vector::ObjectVector tmp119 = vec;
	return tmp119;
}


HX_DEFINE_DYNAMIC_FUNC1(Matrix3D_obj,decompose,return )

::openfl::geom::Vector3D Matrix3D_obj::deltaTransformVector( ::openfl::geom::Vector3D v){
	Float x = v->x;
	Float y = v->y;
	Float z = v->z;
	Float tmp = x;
	::openfl::_Vector::FloatVector tmp1 = this->rawData;
	Float tmp2 = tmp1->get((int)0);
	Float tmp3 = tmp2;
	Float tmp4 = (tmp * tmp3);
	Float tmp5 = y;
	::openfl::_Vector::FloatVector tmp6 = this->rawData;
	Float tmp7 = tmp6->get((int)4);
	Float tmp8 = tmp7;
	Float tmp9 = (tmp5 * tmp8);
	Float tmp10 = (tmp4 + tmp9);
	Float tmp11 = z;
	::openfl::_Vector::FloatVector tmp12 = this->rawData;
	Float tmp13 = tmp12->get((int)8);
	Float tmp14 = tmp13;
	Float tmp15 = (tmp11 * tmp14);
	Float tmp16 = (tmp10 + tmp15);
	::openfl::_Vector::FloatVector tmp17 = this->rawData;
	Float tmp18 = tmp17->get((int)3);
	Float tmp19 = tmp18;
	Float tmp20 = (tmp16 + tmp19);
	Float tmp21 = x;
	::openfl::_Vector::FloatVector tmp22 = this->rawData;
	Float tmp23 = tmp22->get((int)1);
	Float tmp24 = tmp23;
	Float tmp25 = (tmp21 * tmp24);
	Float tmp26 = y;
	::openfl::_Vector::FloatVector tmp27 = this->rawData;
	Float tmp28 = tmp27->get((int)5);
	Float tmp29 = tmp28;
	Float tmp30 = (tmp26 * tmp29);
	Float tmp31 = (tmp25 + tmp30);
	Float tmp32 = z;
	::openfl::_Vector::FloatVector tmp33 = this->rawData;
	Float tmp34 = tmp33->get((int)9);
	Float tmp35 = tmp34;
	Float tmp36 = (tmp32 * tmp35);
	Float tmp37 = (tmp31 + tmp36);
	::openfl::_Vector::FloatVector tmp38 = this->rawData;
	Float tmp39 = tmp38->get((int)7);
	Float tmp40 = tmp39;
	Float tmp41 = (tmp37 + tmp40);
	Float tmp42 = x;
	::openfl::_Vector::FloatVector tmp43 = this->rawData;
	Float tmp44 = tmp43->get((int)2);
	Float tmp45 = tmp44;
	Float tmp46 = (tmp42 * tmp45);
	Float tmp47 = y;
	::openfl::_Vector::FloatVector tmp48 = this->rawData;
	Float tmp49 = tmp48->get((int)6);
	Float tmp50 = tmp49;
	Float tmp51 = (tmp47 * tmp50);
	Float tmp52 = (tmp46 + tmp51);
	Float tmp53 = z;
	::openfl::_Vector::FloatVector tmp54 = this->rawData;
	Float tmp55 = tmp54->get((int)10);
	Float tmp56 = tmp55;
	Float tmp57 = (tmp53 * tmp56);
	Float tmp58 = (tmp52 + tmp57);
	::openfl::_Vector::FloatVector tmp59 = this->rawData;
	Float tmp60 = tmp59->get((int)11);
	Float tmp61 = tmp60;
	Float tmp62 = (tmp58 + tmp61);
	::openfl::geom::Vector3D tmp63 = ::openfl::geom::Vector3D_obj::__new(tmp20,tmp41,tmp62,(int)0);
	return tmp63;
}


HX_DEFINE_DYNAMIC_FUNC1(Matrix3D_obj,deltaTransformVector,return )

Void Matrix3D_obj::identity( ){
{
		::openfl::_Vector::FloatVector tmp;
		{
			Array< Float > a = Array_obj< Float >::__new().Add(((Float)1.0)).Add(((Float)0.0)).Add(((Float)0.0)).Add(((Float)0.0)).Add(((Float)0.0)).Add(((Float)1.0)).Add(((Float)0.0)).Add(((Float)0.0)).Add(((Float)0.0)).Add(((Float)0.0)).Add(((Float)1.0)).Add(((Float)0.0)).Add(((Float)0.0)).Add(((Float)0.0)).Add(((Float)0.0)).Add(((Float)1.0));
			::openfl::_Vector::FloatVector tmp1;
			{
				int length = null();
				bool fixed = null();
				::openfl::_Vector::FloatVector tmp2 = ::openfl::_Vector::FloatVector_obj::__new(length,fixed,null());
				::openfl::_Vector::FloatVector tmp3 = tmp2;
				tmp1 = tmp3;
			}
			::openfl::_Vector::FloatVector vector = tmp1;
			{
				int _g1 = (int)0;
				int _g = a->length;
				while((true)){
					bool tmp2 = (_g1 < _g);
					bool tmp3 = !(tmp2);
					if ((tmp3)){
						break;
					}
					int tmp4 = (_g1)++;
					int i = tmp4;
					int tmp5 = i;
					Float tmp6 = a->__get(i);
					Float tmp7 = tmp6;
					Float tmp8 = vector->set(tmp5,tmp7);
					tmp8;
				}
			}
			tmp = vector;
		}
		this->rawData = tmp;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(Matrix3D_obj,identity,(void))

Void Matrix3D_obj::interpolateTo( ::openfl::geom::Matrix3D toMat,Float percent){
{
		int _g = (int)0;
		while((true)){
			bool tmp = (_g < (int)16);
			bool tmp1 = !(tmp);
			if ((tmp1)){
				break;
			}
			int tmp2 = (_g)++;
			int i = tmp2;
			{
				::openfl::_Vector::FloatVector tmp3 = this->rawData;
				int tmp4 = i;
				Float tmp5 = tmp3->get(tmp4);
				Float tmp6 = tmp5;
				int tmp7 = i;
				Float tmp8 = toMat->rawData->get(tmp7);
				Float tmp9 = tmp8;
				::openfl::_Vector::FloatVector tmp10 = this->rawData;
				int tmp11 = i;
				Float tmp12 = tmp10->get(tmp11);
				Float tmp13 = tmp12;
				Float tmp14 = (tmp9 - tmp13);
				Float tmp15 = percent;
				Float tmp16 = (tmp14 * tmp15);
				Float tmp17 = (tmp6 + tmp16);
				Float value = tmp17;
				::openfl::_Vector::FloatVector tmp18 = this->rawData;
				int tmp19 = i;
				Float tmp20 = value;
				tmp18->set(tmp19,tmp20);
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(Matrix3D_obj,interpolateTo,(void))

bool Matrix3D_obj::invert( ){
	Float tmp = this->get_determinant();
	Float d = tmp;
	Float tmp1 = d;
	Float tmp2 = ::Math_obj::abs(tmp1);
	bool tmp3 = (tmp2 > ((Float)0.00000000001));
	bool invertable = tmp3;
	bool tmp4 = invertable;
	if ((tmp4)){
		Float tmp5 = (Float((int)1) / Float(d));
		d = tmp5;
		::openfl::_Vector::FloatVector tmp6 = this->rawData;
		Float tmp7 = tmp6->get((int)0);
		Float m11 = tmp7;
		::openfl::_Vector::FloatVector tmp8 = this->rawData;
		Float tmp9 = tmp8->get((int)4);
		Float m21 = tmp9;
		::openfl::_Vector::FloatVector tmp10 = this->rawData;
		Float tmp11 = tmp10->get((int)8);
		Float m31 = tmp11;
		::openfl::_Vector::FloatVector tmp12 = this->rawData;
		Float tmp13 = tmp12->get((int)12);
		Float m41 = tmp13;
		::openfl::_Vector::FloatVector tmp14 = this->rawData;
		Float tmp15 = tmp14->get((int)1);
		Float m12 = tmp15;
		::openfl::_Vector::FloatVector tmp16 = this->rawData;
		Float tmp17 = tmp16->get((int)5);
		Float m22 = tmp17;
		::openfl::_Vector::FloatVector tmp18 = this->rawData;
		Float tmp19 = tmp18->get((int)9);
		Float m32 = tmp19;
		::openfl::_Vector::FloatVector tmp20 = this->rawData;
		Float tmp21 = tmp20->get((int)13);
		Float m42 = tmp21;
		::openfl::_Vector::FloatVector tmp22 = this->rawData;
		Float tmp23 = tmp22->get((int)2);
		Float m13 = tmp23;
		::openfl::_Vector::FloatVector tmp24 = this->rawData;
		Float tmp25 = tmp24->get((int)6);
		Float m23 = tmp25;
		::openfl::_Vector::FloatVector tmp26 = this->rawData;
		Float tmp27 = tmp26->get((int)10);
		Float m33 = tmp27;
		::openfl::_Vector::FloatVector tmp28 = this->rawData;
		Float tmp29 = tmp28->get((int)14);
		Float m43 = tmp29;
		::openfl::_Vector::FloatVector tmp30 = this->rawData;
		Float tmp31 = tmp30->get((int)3);
		Float m14 = tmp31;
		::openfl::_Vector::FloatVector tmp32 = this->rawData;
		Float tmp33 = tmp32->get((int)7);
		Float m24 = tmp33;
		::openfl::_Vector::FloatVector tmp34 = this->rawData;
		Float tmp35 = tmp34->get((int)11);
		Float m34 = tmp35;
		::openfl::_Vector::FloatVector tmp36 = this->rawData;
		Float tmp37 = tmp36->get((int)15);
		Float m44 = tmp37;
		::openfl::_Vector::FloatVector tmp38 = this->rawData;
		Float tmp39 = d;
		Float tmp40 = m22;
		Float tmp41 = (m33 * m44);
		Float tmp42 = (m43 * m34);
		Float tmp43 = (tmp41 - tmp42);
		Float tmp44 = (tmp40 * tmp43);
		Float tmp45 = m32;
		Float tmp46 = (m23 * m44);
		Float tmp47 = (m43 * m24);
		Float tmp48 = (tmp46 - tmp47);
		Float tmp49 = (tmp45 * tmp48);
		Float tmp50 = (tmp44 - tmp49);
		Float tmp51 = m42;
		Float tmp52 = (m23 * m34);
		Float tmp53 = (m33 * m24);
		Float tmp54 = (tmp52 - tmp53);
		Float tmp55 = (tmp51 * tmp54);
		Float tmp56 = (tmp50 + tmp55);
		Float tmp57 = (tmp39 * tmp56);
		Float tmp58 = tmp38->set((int)0,tmp57);
		tmp58;
		::openfl::_Vector::FloatVector tmp59 = this->rawData;
		Float tmp60 = d;
		Float tmp61 = -(tmp60);
		Float tmp62 = m12;
		Float tmp63 = (m33 * m44);
		Float tmp64 = (m43 * m34);
		Float tmp65 = (tmp63 - tmp64);
		Float tmp66 = (tmp62 * tmp65);
		Float tmp67 = m32;
		Float tmp68 = (m13 * m44);
		Float tmp69 = (m43 * m14);
		Float tmp70 = (tmp68 - tmp69);
		Float tmp71 = (tmp67 * tmp70);
		Float tmp72 = (tmp66 - tmp71);
		Float tmp73 = m42;
		Float tmp74 = (m13 * m34);
		Float tmp75 = (m33 * m14);
		Float tmp76 = (tmp74 - tmp75);
		Float tmp77 = (tmp73 * tmp76);
		Float tmp78 = (tmp72 + tmp77);
		Float tmp79 = (tmp61 * tmp78);
		Float tmp80 = tmp59->set((int)1,tmp79);
		tmp80;
		::openfl::_Vector::FloatVector tmp81 = this->rawData;
		Float tmp82 = d;
		Float tmp83 = m12;
		Float tmp84 = (m23 * m44);
		Float tmp85 = (m43 * m24);
		Float tmp86 = (tmp84 - tmp85);
		Float tmp87 = (tmp83 * tmp86);
		Float tmp88 = m22;
		Float tmp89 = (m13 * m44);
		Float tmp90 = (m43 * m14);
		Float tmp91 = (tmp89 - tmp90);
		Float tmp92 = (tmp88 * tmp91);
		Float tmp93 = (tmp87 - tmp92);
		Float tmp94 = m42;
		Float tmp95 = (m13 * m24);
		Float tmp96 = (m23 * m14);
		Float tmp97 = (tmp95 - tmp96);
		Float tmp98 = (tmp94 * tmp97);
		Float tmp99 = (tmp93 + tmp98);
		Float tmp100 = (tmp82 * tmp99);
		Float tmp101 = tmp81->set((int)2,tmp100);
		tmp101;
		::openfl::_Vector::FloatVector tmp102 = this->rawData;
		Float tmp103 = d;
		Float tmp104 = -(tmp103);
		Float tmp105 = m12;
		Float tmp106 = (m23 * m34);
		Float tmp107 = (m33 * m24);
		Float tmp108 = (tmp106 - tmp107);
		Float tmp109 = (tmp105 * tmp108);
		Float tmp110 = m22;
		Float tmp111 = (m13 * m34);
		Float tmp112 = (m33 * m14);
		Float tmp113 = (tmp111 - tmp112);
		Float tmp114 = (tmp110 * tmp113);
		Float tmp115 = (tmp109 - tmp114);
		Float tmp116 = m32;
		Float tmp117 = (m13 * m24);
		Float tmp118 = (m23 * m14);
		Float tmp119 = (tmp117 - tmp118);
		Float tmp120 = (tmp116 * tmp119);
		Float tmp121 = (tmp115 + tmp120);
		Float tmp122 = (tmp104 * tmp121);
		Float tmp123 = tmp102->set((int)3,tmp122);
		tmp123;
		::openfl::_Vector::FloatVector tmp124 = this->rawData;
		Float tmp125 = d;
		Float tmp126 = -(tmp125);
		Float tmp127 = m21;
		Float tmp128 = (m33 * m44);
		Float tmp129 = (m43 * m34);
		Float tmp130 = (tmp128 - tmp129);
		Float tmp131 = (tmp127 * tmp130);
		Float tmp132 = m31;
		Float tmp133 = (m23 * m44);
		Float tmp134 = (m43 * m24);
		Float tmp135 = (tmp133 - tmp134);
		Float tmp136 = (tmp132 * tmp135);
		Float tmp137 = (tmp131 - tmp136);
		Float tmp138 = m41;
		Float tmp139 = (m23 * m34);
		Float tmp140 = (m33 * m24);
		Float tmp141 = (tmp139 - tmp140);
		Float tmp142 = (tmp138 * tmp141);
		Float tmp143 = (tmp137 + tmp142);
		Float tmp144 = (tmp126 * tmp143);
		Float tmp145 = tmp124->set((int)4,tmp144);
		tmp145;
		::openfl::_Vector::FloatVector tmp146 = this->rawData;
		Float tmp147 = d;
		Float tmp148 = m11;
		Float tmp149 = (m33 * m44);
		Float tmp150 = (m43 * m34);
		Float tmp151 = (tmp149 - tmp150);
		Float tmp152 = (tmp148 * tmp151);
		Float tmp153 = m31;
		Float tmp154 = (m13 * m44);
		Float tmp155 = (m43 * m14);
		Float tmp156 = (tmp154 - tmp155);
		Float tmp157 = (tmp153 * tmp156);
		Float tmp158 = (tmp152 - tmp157);
		Float tmp159 = m41;
		Float tmp160 = (m13 * m34);
		Float tmp161 = (m33 * m14);
		Float tmp162 = (tmp160 - tmp161);
		Float tmp163 = (tmp159 * tmp162);
		Float tmp164 = (tmp158 + tmp163);
		Float tmp165 = (tmp147 * tmp164);
		Float tmp166 = tmp146->set((int)5,tmp165);
		tmp166;
		::openfl::_Vector::FloatVector tmp167 = this->rawData;
		Float tmp168 = d;
		Float tmp169 = -(tmp168);
		Float tmp170 = m11;
		Float tmp171 = (m23 * m44);
		Float tmp172 = (m43 * m24);
		Float tmp173 = (tmp171 - tmp172);
		Float tmp174 = (tmp170 * tmp173);
		Float tmp175 = m21;
		Float tmp176 = (m13 * m44);
		Float tmp177 = (m43 * m14);
		Float tmp178 = (tmp176 - tmp177);
		Float tmp179 = (tmp175 * tmp178);
		Float tmp180 = (tmp174 - tmp179);
		Float tmp181 = m41;
		Float tmp182 = (m13 * m24);
		Float tmp183 = (m23 * m14);
		Float tmp184 = (tmp182 - tmp183);
		Float tmp185 = (tmp181 * tmp184);
		Float tmp186 = (tmp180 + tmp185);
		Float tmp187 = (tmp169 * tmp186);
		Float tmp188 = tmp167->set((int)6,tmp187);
		tmp188;
		::openfl::_Vector::FloatVector tmp189 = this->rawData;
		Float tmp190 = d;
		Float tmp191 = m11;
		Float tmp192 = (m23 * m34);
		Float tmp193 = (m33 * m24);
		Float tmp194 = (tmp192 - tmp193);
		Float tmp195 = (tmp191 * tmp194);
		Float tmp196 = m21;
		Float tmp197 = (m13 * m34);
		Float tmp198 = (m33 * m14);
		Float tmp199 = (tmp197 - tmp198);
		Float tmp200 = (tmp196 * tmp199);
		Float tmp201 = (tmp195 - tmp200);
		Float tmp202 = m31;
		Float tmp203 = (m13 * m24);
		Float tmp204 = (m23 * m14);
		Float tmp205 = (tmp203 - tmp204);
		Float tmp206 = (tmp202 * tmp205);
		Float tmp207 = (tmp201 + tmp206);
		Float tmp208 = (tmp190 * tmp207);
		Float tmp209 = tmp189->set((int)7,tmp208);
		tmp209;
		::openfl::_Vector::FloatVector tmp210 = this->rawData;
		Float tmp211 = d;
		Float tmp212 = m21;
		Float tmp213 = (m32 * m44);
		Float tmp214 = (m42 * m34);
		Float tmp215 = (tmp213 - tmp214);
		Float tmp216 = (tmp212 * tmp215);
		Float tmp217 = m31;
		Float tmp218 = (m22 * m44);
		Float tmp219 = (m42 * m24);
		Float tmp220 = (tmp218 - tmp219);
		Float tmp221 = (tmp217 * tmp220);
		Float tmp222 = (tmp216 - tmp221);
		Float tmp223 = m41;
		Float tmp224 = (m22 * m34);
		Float tmp225 = (m32 * m24);
		Float tmp226 = (tmp224 - tmp225);
		Float tmp227 = (tmp223 * tmp226);
		Float tmp228 = (tmp222 + tmp227);
		Float tmp229 = (tmp211 * tmp228);
		Float tmp230 = tmp210->set((int)8,tmp229);
		tmp230;
		::openfl::_Vector::FloatVector tmp231 = this->rawData;
		Float tmp232 = d;
		Float tmp233 = -(tmp232);
		Float tmp234 = m11;
		Float tmp235 = (m32 * m44);
		Float tmp236 = (m42 * m34);
		Float tmp237 = (tmp235 - tmp236);
		Float tmp238 = (tmp234 * tmp237);
		Float tmp239 = m31;
		Float tmp240 = (m12 * m44);
		Float tmp241 = (m42 * m14);
		Float tmp242 = (tmp240 - tmp241);
		Float tmp243 = (tmp239 * tmp242);
		Float tmp244 = (tmp238 - tmp243);
		Float tmp245 = m41;
		Float tmp246 = (m12 * m34);
		Float tmp247 = (m32 * m14);
		Float tmp248 = (tmp246 - tmp247);
		Float tmp249 = (tmp245 * tmp248);
		Float tmp250 = (tmp244 + tmp249);
		Float tmp251 = (tmp233 * tmp250);
		Float tmp252 = tmp231->set((int)9,tmp251);
		tmp252;
		::openfl::_Vector::FloatVector tmp253 = this->rawData;
		Float tmp254 = d;
		Float tmp255 = m11;
		Float tmp256 = (m22 * m44);
		Float tmp257 = (m42 * m24);
		Float tmp258 = (tmp256 - tmp257);
		Float tmp259 = (tmp255 * tmp258);
		Float tmp260 = m21;
		Float tmp261 = (m12 * m44);
		Float tmp262 = (m42 * m14);
		Float tmp263 = (tmp261 - tmp262);
		Float tmp264 = (tmp260 * tmp263);
		Float tmp265 = (tmp259 - tmp264);
		Float tmp266 = m41;
		Float tmp267 = (m12 * m24);
		Float tmp268 = (m22 * m14);
		Float tmp269 = (tmp267 - tmp268);
		Float tmp270 = (tmp266 * tmp269);
		Float tmp271 = (tmp265 + tmp270);
		Float tmp272 = (tmp254 * tmp271);
		Float tmp273 = tmp253->set((int)10,tmp272);
		tmp273;
		::openfl::_Vector::FloatVector tmp274 = this->rawData;
		Float tmp275 = d;
		Float tmp276 = -(tmp275);
		Float tmp277 = m11;
		Float tmp278 = (m22 * m34);
		Float tmp279 = (m32 * m24);
		Float tmp280 = (tmp278 - tmp279);
		Float tmp281 = (tmp277 * tmp280);
		Float tmp282 = m21;
		Float tmp283 = (m12 * m34);
		Float tmp284 = (m32 * m14);
		Float tmp285 = (tmp283 - tmp284);
		Float tmp286 = (tmp282 * tmp285);
		Float tmp287 = (tmp281 - tmp286);
		Float tmp288 = m31;
		Float tmp289 = (m12 * m24);
		Float tmp290 = (m22 * m14);
		Float tmp291 = (tmp289 - tmp290);
		Float tmp292 = (tmp288 * tmp291);
		Float tmp293 = (tmp287 + tmp292);
		Float tmp294 = (tmp276 * tmp293);
		Float tmp295 = tmp274->set((int)11,tmp294);
		tmp295;
		::openfl::_Vector::FloatVector tmp296 = this->rawData;
		Float tmp297 = d;
		Float tmp298 = -(tmp297);
		Float tmp299 = m21;
		Float tmp300 = (m32 * m43);
		Float tmp301 = (m42 * m33);
		Float tmp302 = (tmp300 - tmp301);
		Float tmp303 = (tmp299 * tmp302);
		Float tmp304 = m31;
		Float tmp305 = (m22 * m43);
		Float tmp306 = (m42 * m23);
		Float tmp307 = (tmp305 - tmp306);
		Float tmp308 = (tmp304 * tmp307);
		Float tmp309 = (tmp303 - tmp308);
		Float tmp310 = m41;
		Float tmp311 = (m22 * m33);
		Float tmp312 = (m32 * m23);
		Float tmp313 = (tmp311 - tmp312);
		Float tmp314 = (tmp310 * tmp313);
		Float tmp315 = (tmp309 + tmp314);
		Float tmp316 = (tmp298 * tmp315);
		Float tmp317 = tmp296->set((int)12,tmp316);
		tmp317;
		::openfl::_Vector::FloatVector tmp318 = this->rawData;
		Float tmp319 = d;
		Float tmp320 = m11;
		Float tmp321 = (m32 * m43);
		Float tmp322 = (m42 * m33);
		Float tmp323 = (tmp321 - tmp322);
		Float tmp324 = (tmp320 * tmp323);
		Float tmp325 = m31;
		Float tmp326 = (m12 * m43);
		Float tmp327 = (m42 * m13);
		Float tmp328 = (tmp326 - tmp327);
		Float tmp329 = (tmp325 * tmp328);
		Float tmp330 = (tmp324 - tmp329);
		Float tmp331 = m41;
		Float tmp332 = (m12 * m33);
		Float tmp333 = (m32 * m13);
		Float tmp334 = (tmp332 - tmp333);
		Float tmp335 = (tmp331 * tmp334);
		Float tmp336 = (tmp330 + tmp335);
		Float tmp337 = (tmp319 * tmp336);
		Float tmp338 = tmp318->set((int)13,tmp337);
		tmp338;
		::openfl::_Vector::FloatVector tmp339 = this->rawData;
		Float tmp340 = d;
		Float tmp341 = -(tmp340);
		Float tmp342 = m11;
		Float tmp343 = (m22 * m43);
		Float tmp344 = (m42 * m23);
		Float tmp345 = (tmp343 - tmp344);
		Float tmp346 = (tmp342 * tmp345);
		Float tmp347 = m21;
		Float tmp348 = (m12 * m43);
		Float tmp349 = (m42 * m13);
		Float tmp350 = (tmp348 - tmp349);
		Float tmp351 = (tmp347 * tmp350);
		Float tmp352 = (tmp346 - tmp351);
		Float tmp353 = m41;
		Float tmp354 = (m12 * m23);
		Float tmp355 = (m22 * m13);
		Float tmp356 = (tmp354 - tmp355);
		Float tmp357 = (tmp353 * tmp356);
		Float tmp358 = (tmp352 + tmp357);
		Float tmp359 = (tmp341 * tmp358);
		Float tmp360 = tmp339->set((int)14,tmp359);
		tmp360;
		::openfl::_Vector::FloatVector tmp361 = this->rawData;
		Float tmp362 = d;
		Float tmp363 = m11;
		Float tmp364 = (m22 * m33);
		Float tmp365 = (m32 * m23);
		Float tmp366 = (tmp364 - tmp365);
		Float tmp367 = (tmp363 * tmp366);
		Float tmp368 = m21;
		Float tmp369 = (m12 * m33);
		Float tmp370 = (m32 * m13);
		Float tmp371 = (tmp369 - tmp370);
		Float tmp372 = (tmp368 * tmp371);
		Float tmp373 = (tmp367 - tmp372);
		Float tmp374 = m31;
		Float tmp375 = (m12 * m23);
		Float tmp376 = (m22 * m13);
		Float tmp377 = (tmp375 - tmp376);
		Float tmp378 = (tmp374 * tmp377);
		Float tmp379 = (tmp373 + tmp378);
		Float tmp380 = (tmp362 * tmp379);
		Float tmp381 = tmp361->set((int)15,tmp380);
		tmp381;
	}
	bool tmp5 = invertable;
	return tmp5;
}


HX_DEFINE_DYNAMIC_FUNC0(Matrix3D_obj,invert,return )

Void Matrix3D_obj::pointAt( ::openfl::geom::Vector3D pos,::openfl::geom::Vector3D at,::openfl::geom::Vector3D up){
{
		bool tmp = (at == null());
		if ((tmp)){
			::openfl::geom::Vector3D tmp1 = ::openfl::geom::Vector3D_obj::__new((int)0,(int)0,(int)-1,null());
			at = tmp1;
		}
		bool tmp1 = (up == null());
		if ((tmp1)){
			::openfl::geom::Vector3D tmp2 = ::openfl::geom::Vector3D_obj::__new((int)0,(int)-1,(int)0,null());
			up = tmp2;
		}
		::openfl::geom::Vector3D tmp2 = pos;
		::openfl::geom::Vector3D tmp3 = at->subtract(tmp2);
		::openfl::geom::Vector3D dir = tmp3;
		::openfl::geom::Vector3D tmp4 = up->clone();
		::openfl::geom::Vector3D vup = tmp4;
		::openfl::geom::Vector3D right;
		dir->normalize();
		vup->normalize();
		::openfl::geom::Vector3D tmp5 = dir->clone();
		::openfl::geom::Vector3D dir2 = tmp5;
		::openfl::geom::Vector3D tmp6 = dir;
		Float tmp7 = vup->dotProduct(tmp6);
		dir2->scaleBy(tmp7);
		::openfl::geom::Vector3D tmp8 = dir2;
		::openfl::geom::Vector3D tmp9 = vup->subtract(tmp8);
		vup = tmp9;
		Float tmp10 = vup->get_length();
		bool tmp11 = (tmp10 > (int)0);
		if ((tmp11)){
			vup->normalize();
		}
		else{
			bool tmp12 = (dir->x != (int)0);
			if ((tmp12)){
				Float tmp13 = dir->y;
				Float tmp14 = -(tmp13);
				Float tmp15 = dir->x;
				::openfl::geom::Vector3D tmp16 = ::openfl::geom::Vector3D_obj::__new(tmp14,tmp15,(int)0,null());
				vup = tmp16;
			}
			else{
				::openfl::geom::Vector3D tmp13 = ::openfl::geom::Vector3D_obj::__new((int)1,(int)0,(int)0,null());
				vup = tmp13;
			}
		}
		::openfl::geom::Vector3D tmp12 = dir;
		::openfl::geom::Vector3D tmp13 = vup->crossProduct(tmp12);
		right = tmp13;
		right->normalize();
		::openfl::_Vector::FloatVector tmp14 = this->rawData;
		Float tmp15 = right->x;
		Float tmp16 = tmp14->set((int)0,tmp15);
		tmp16;
		::openfl::_Vector::FloatVector tmp17 = this->rawData;
		Float tmp18 = right->y;
		Float tmp19 = tmp17->set((int)4,tmp18);
		tmp19;
		::openfl::_Vector::FloatVector tmp20 = this->rawData;
		Float tmp21 = right->z;
		Float tmp22 = tmp20->set((int)8,tmp21);
		tmp22;
		::openfl::_Vector::FloatVector tmp23 = this->rawData;
		Float tmp24 = tmp23->set((int)12,((Float)0.0));
		tmp24;
		::openfl::_Vector::FloatVector tmp25 = this->rawData;
		Float tmp26 = vup->x;
		Float tmp27 = tmp25->set((int)1,tmp26);
		tmp27;
		::openfl::_Vector::FloatVector tmp28 = this->rawData;
		Float tmp29 = vup->y;
		Float tmp30 = tmp28->set((int)5,tmp29);
		tmp30;
		::openfl::_Vector::FloatVector tmp31 = this->rawData;
		Float tmp32 = vup->z;
		Float tmp33 = tmp31->set((int)9,tmp32);
		tmp33;
		::openfl::_Vector::FloatVector tmp34 = this->rawData;
		Float tmp35 = tmp34->set((int)13,((Float)0.0));
		tmp35;
		::openfl::_Vector::FloatVector tmp36 = this->rawData;
		Float tmp37 = dir->x;
		Float tmp38 = tmp36->set((int)2,tmp37);
		tmp38;
		::openfl::_Vector::FloatVector tmp39 = this->rawData;
		Float tmp40 = dir->y;
		Float tmp41 = tmp39->set((int)6,tmp40);
		tmp41;
		::openfl::_Vector::FloatVector tmp42 = this->rawData;
		Float tmp43 = dir->z;
		Float tmp44 = tmp42->set((int)10,tmp43);
		tmp44;
		::openfl::_Vector::FloatVector tmp45 = this->rawData;
		Float tmp46 = tmp45->set((int)14,((Float)0.0));
		tmp46;
		::openfl::_Vector::FloatVector tmp47 = this->rawData;
		Float tmp48 = pos->x;
		Float tmp49 = tmp47->set((int)3,tmp48);
		tmp49;
		::openfl::_Vector::FloatVector tmp50 = this->rawData;
		Float tmp51 = pos->y;
		Float tmp52 = tmp50->set((int)7,tmp51);
		tmp52;
		::openfl::_Vector::FloatVector tmp53 = this->rawData;
		Float tmp54 = pos->z;
		Float tmp55 = tmp53->set((int)11,tmp54);
		tmp55;
		::openfl::_Vector::FloatVector tmp56 = this->rawData;
		Float tmp57 = tmp56->set((int)15,((Float)1.0));
		tmp57;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC3(Matrix3D_obj,pointAt,(void))

Void Matrix3D_obj::prepend( ::openfl::geom::Matrix3D rhs){
{
		Float tmp = rhs->rawData->get((int)0);
		Float m111 = tmp;
		Float tmp1 = rhs->rawData->get((int)4);
		Float m121 = tmp1;
		Float tmp2 = rhs->rawData->get((int)8);
		Float m131 = tmp2;
		Float tmp3 = rhs->rawData->get((int)12);
		Float m141 = tmp3;
		Float tmp4 = rhs->rawData->get((int)1);
		Float m112 = tmp4;
		Float tmp5 = rhs->rawData->get((int)5);
		Float m122 = tmp5;
		Float tmp6 = rhs->rawData->get((int)9);
		Float m132 = tmp6;
		Float tmp7 = rhs->rawData->get((int)13);
		Float m142 = tmp7;
		Float tmp8 = rhs->rawData->get((int)2);
		Float m113 = tmp8;
		Float tmp9 = rhs->rawData->get((int)6);
		Float m123 = tmp9;
		Float tmp10 = rhs->rawData->get((int)10);
		Float m133 = tmp10;
		Float tmp11 = rhs->rawData->get((int)14);
		Float m143 = tmp11;
		Float tmp12 = rhs->rawData->get((int)3);
		Float m114 = tmp12;
		Float tmp13 = rhs->rawData->get((int)7);
		Float m124 = tmp13;
		Float tmp14 = rhs->rawData->get((int)11);
		Float m134 = tmp14;
		Float tmp15 = rhs->rawData->get((int)15);
		Float m144 = tmp15;
		::openfl::_Vector::FloatVector tmp16 = this->rawData;
		Float tmp17 = tmp16->get((int)0);
		Float m211 = tmp17;
		::openfl::_Vector::FloatVector tmp18 = this->rawData;
		Float tmp19 = tmp18->get((int)4);
		Float m221 = tmp19;
		::openfl::_Vector::FloatVector tmp20 = this->rawData;
		Float tmp21 = tmp20->get((int)8);
		Float m231 = tmp21;
		::openfl::_Vector::FloatVector tmp22 = this->rawData;
		Float tmp23 = tmp22->get((int)12);
		Float m241 = tmp23;
		::openfl::_Vector::FloatVector tmp24 = this->rawData;
		Float tmp25 = tmp24->get((int)1);
		Float m212 = tmp25;
		::openfl::_Vector::FloatVector tmp26 = this->rawData;
		Float tmp27 = tmp26->get((int)5);
		Float m222 = tmp27;
		::openfl::_Vector::FloatVector tmp28 = this->rawData;
		Float tmp29 = tmp28->get((int)9);
		Float m232 = tmp29;
		::openfl::_Vector::FloatVector tmp30 = this->rawData;
		Float tmp31 = tmp30->get((int)13);
		Float m242 = tmp31;
		::openfl::_Vector::FloatVector tmp32 = this->rawData;
		Float tmp33 = tmp32->get((int)2);
		Float m213 = tmp33;
		::openfl::_Vector::FloatVector tmp34 = this->rawData;
		Float tmp35 = tmp34->get((int)6);
		Float m223 = tmp35;
		::openfl::_Vector::FloatVector tmp36 = this->rawData;
		Float tmp37 = tmp36->get((int)10);
		Float m233 = tmp37;
		::openfl::_Vector::FloatVector tmp38 = this->rawData;
		Float tmp39 = tmp38->get((int)14);
		Float m243 = tmp39;
		::openfl::_Vector::FloatVector tmp40 = this->rawData;
		Float tmp41 = tmp40->get((int)3);
		Float m214 = tmp41;
		::openfl::_Vector::FloatVector tmp42 = this->rawData;
		Float tmp43 = tmp42->get((int)7);
		Float m224 = tmp43;
		::openfl::_Vector::FloatVector tmp44 = this->rawData;
		Float tmp45 = tmp44->get((int)11);
		Float m234 = tmp45;
		::openfl::_Vector::FloatVector tmp46 = this->rawData;
		Float tmp47 = tmp46->get((int)15);
		Float m244 = tmp47;
		::openfl::_Vector::FloatVector tmp48 = this->rawData;
		Float tmp49 = (m111 * m211);
		Float tmp50 = (m112 * m221);
		Float tmp51 = (tmp49 + tmp50);
		Float tmp52 = (m113 * m231);
		Float tmp53 = (tmp51 + tmp52);
		Float tmp54 = (m114 * m241);
		Float tmp55 = (tmp53 + tmp54);
		Float tmp56 = tmp48->set((int)0,tmp55);
		tmp56;
		::openfl::_Vector::FloatVector tmp57 = this->rawData;
		Float tmp58 = (m111 * m212);
		Float tmp59 = (m112 * m222);
		Float tmp60 = (tmp58 + tmp59);
		Float tmp61 = (m113 * m232);
		Float tmp62 = (tmp60 + tmp61);
		Float tmp63 = (m114 * m242);
		Float tmp64 = (tmp62 + tmp63);
		Float tmp65 = tmp57->set((int)1,tmp64);
		tmp65;
		::openfl::_Vector::FloatVector tmp66 = this->rawData;
		Float tmp67 = (m111 * m213);
		Float tmp68 = (m112 * m223);
		Float tmp69 = (tmp67 + tmp68);
		Float tmp70 = (m113 * m233);
		Float tmp71 = (tmp69 + tmp70);
		Float tmp72 = (m114 * m243);
		Float tmp73 = (tmp71 + tmp72);
		Float tmp74 = tmp66->set((int)2,tmp73);
		tmp74;
		::openfl::_Vector::FloatVector tmp75 = this->rawData;
		Float tmp76 = (m111 * m214);
		Float tmp77 = (m112 * m224);
		Float tmp78 = (tmp76 + tmp77);
		Float tmp79 = (m113 * m234);
		Float tmp80 = (tmp78 + tmp79);
		Float tmp81 = (m114 * m244);
		Float tmp82 = (tmp80 + tmp81);
		Float tmp83 = tmp75->set((int)3,tmp82);
		tmp83;
		::openfl::_Vector::FloatVector tmp84 = this->rawData;
		Float tmp85 = (m121 * m211);
		Float tmp86 = (m122 * m221);
		Float tmp87 = (tmp85 + tmp86);
		Float tmp88 = (m123 * m231);
		Float tmp89 = (tmp87 + tmp88);
		Float tmp90 = (m124 * m241);
		Float tmp91 = (tmp89 + tmp90);
		Float tmp92 = tmp84->set((int)4,tmp91);
		tmp92;
		::openfl::_Vector::FloatVector tmp93 = this->rawData;
		Float tmp94 = (m121 * m212);
		Float tmp95 = (m122 * m222);
		Float tmp96 = (tmp94 + tmp95);
		Float tmp97 = (m123 * m232);
		Float tmp98 = (tmp96 + tmp97);
		Float tmp99 = (m124 * m242);
		Float tmp100 = (tmp98 + tmp99);
		Float tmp101 = tmp93->set((int)5,tmp100);
		tmp101;
		::openfl::_Vector::FloatVector tmp102 = this->rawData;
		Float tmp103 = (m121 * m213);
		Float tmp104 = (m122 * m223);
		Float tmp105 = (tmp103 + tmp104);
		Float tmp106 = (m123 * m233);
		Float tmp107 = (tmp105 + tmp106);
		Float tmp108 = (m124 * m243);
		Float tmp109 = (tmp107 + tmp108);
		Float tmp110 = tmp102->set((int)6,tmp109);
		tmp110;
		::openfl::_Vector::FloatVector tmp111 = this->rawData;
		Float tmp112 = (m121 * m214);
		Float tmp113 = (m122 * m224);
		Float tmp114 = (tmp112 + tmp113);
		Float tmp115 = (m123 * m234);
		Float tmp116 = (tmp114 + tmp115);
		Float tmp117 = (m124 * m244);
		Float tmp118 = (tmp116 + tmp117);
		Float tmp119 = tmp111->set((int)7,tmp118);
		tmp119;
		::openfl::_Vector::FloatVector tmp120 = this->rawData;
		Float tmp121 = (m131 * m211);
		Float tmp122 = (m132 * m221);
		Float tmp123 = (tmp121 + tmp122);
		Float tmp124 = (m133 * m231);
		Float tmp125 = (tmp123 + tmp124);
		Float tmp126 = (m134 * m241);
		Float tmp127 = (tmp125 + tmp126);
		Float tmp128 = tmp120->set((int)8,tmp127);
		tmp128;
		::openfl::_Vector::FloatVector tmp129 = this->rawData;
		Float tmp130 = (m131 * m212);
		Float tmp131 = (m132 * m222);
		Float tmp132 = (tmp130 + tmp131);
		Float tmp133 = (m133 * m232);
		Float tmp134 = (tmp132 + tmp133);
		Float tmp135 = (m134 * m242);
		Float tmp136 = (tmp134 + tmp135);
		Float tmp137 = tmp129->set((int)9,tmp136);
		tmp137;
		::openfl::_Vector::FloatVector tmp138 = this->rawData;
		Float tmp139 = (m131 * m213);
		Float tmp140 = (m132 * m223);
		Float tmp141 = (tmp139 + tmp140);
		Float tmp142 = (m133 * m233);
		Float tmp143 = (tmp141 + tmp142);
		Float tmp144 = (m134 * m243);
		Float tmp145 = (tmp143 + tmp144);
		Float tmp146 = tmp138->set((int)10,tmp145);
		tmp146;
		::openfl::_Vector::FloatVector tmp147 = this->rawData;
		Float tmp148 = (m131 * m214);
		Float tmp149 = (m132 * m224);
		Float tmp150 = (tmp148 + tmp149);
		Float tmp151 = (m133 * m234);
		Float tmp152 = (tmp150 + tmp151);
		Float tmp153 = (m134 * m244);
		Float tmp154 = (tmp152 + tmp153);
		Float tmp155 = tmp147->set((int)11,tmp154);
		tmp155;
		::openfl::_Vector::FloatVector tmp156 = this->rawData;
		Float tmp157 = (m141 * m211);
		Float tmp158 = (m142 * m221);
		Float tmp159 = (tmp157 + tmp158);
		Float tmp160 = (m143 * m231);
		Float tmp161 = (tmp159 + tmp160);
		Float tmp162 = (m144 * m241);
		Float tmp163 = (tmp161 + tmp162);
		Float tmp164 = tmp156->set((int)12,tmp163);
		tmp164;
		::openfl::_Vector::FloatVector tmp165 = this->rawData;
		Float tmp166 = (m141 * m212);
		Float tmp167 = (m142 * m222);
		Float tmp168 = (tmp166 + tmp167);
		Float tmp169 = (m143 * m232);
		Float tmp170 = (tmp168 + tmp169);
		Float tmp171 = (m144 * m242);
		Float tmp172 = (tmp170 + tmp171);
		Float tmp173 = tmp165->set((int)13,tmp172);
		tmp173;
		::openfl::_Vector::FloatVector tmp174 = this->rawData;
		Float tmp175 = (m141 * m213);
		Float tmp176 = (m142 * m223);
		Float tmp177 = (tmp175 + tmp176);
		Float tmp178 = (m143 * m233);
		Float tmp179 = (tmp177 + tmp178);
		Float tmp180 = (m144 * m243);
		Float tmp181 = (tmp179 + tmp180);
		Float tmp182 = tmp174->set((int)14,tmp181);
		tmp182;
		::openfl::_Vector::FloatVector tmp183 = this->rawData;
		Float tmp184 = (m141 * m214);
		Float tmp185 = (m142 * m224);
		Float tmp186 = (tmp184 + tmp185);
		Float tmp187 = (m143 * m234);
		Float tmp188 = (tmp186 + tmp187);
		Float tmp189 = (m144 * m244);
		Float tmp190 = (tmp188 + tmp189);
		Float tmp191 = tmp183->set((int)15,tmp190);
		tmp191;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Matrix3D_obj,prepend,(void))

Void Matrix3D_obj::prependRotation( Float degrees,::openfl::geom::Vector3D axis,::openfl::geom::Vector3D pivotPoint){
{
		Float tx;
		Float ty;
		Float tz;
		Float tmp = tz = (int)0;
		Float tmp1 = ty = tmp;
		tx = tmp1;
		bool tmp2 = (pivotPoint != null());
		if ((tmp2)){
			tx = pivotPoint->x;
			ty = pivotPoint->y;
			tz = pivotPoint->z;
		}
		Float tmp3 = degrees;
		Float tmp4 = ::Math_obj::PI;
		Float tmp5 = (tmp3 * tmp4);
		Float tmp6 = (Float(tmp5) / Float((int)180));
		Float radian = tmp6;
		Float tmp7 = radian;
		Float tmp8 = ::Math_obj::cos(tmp7);
		Float cos = tmp8;
		Float tmp9 = radian;
		Float tmp10 = ::Math_obj::sin(tmp9);
		Float sin = tmp10;
		Float x = axis->x;
		Float y = axis->y;
		Float z = axis->z;
		Float tmp11 = (x * x);
		Float x2 = tmp11;
		Float tmp12 = (y * y);
		Float y2 = tmp12;
		Float tmp13 = (z * z);
		Float z2 = tmp13;
		Float tmp14 = (x2 + y2);
		Float tmp15 = z2;
		Float tmp16 = (tmp14 + tmp15);
		Float ls = tmp16;
		bool tmp17 = (ls != (int)0);
		if ((tmp17)){
			Float tmp18 = ls;
			Float tmp19 = ::Math_obj::sqrt(tmp18);
			Float l = tmp19;
			hx::DivEq(x,l);
			hx::DivEq(y,l);
			hx::DivEq(z,l);
			hx::DivEq(x2,ls);
			hx::DivEq(y2,ls);
			hx::DivEq(z2,ls);
		}
		Float tmp18 = ((int)1 - cos);
		Float ccos = tmp18;
		::openfl::geom::Matrix3D tmp19 = ::openfl::geom::Matrix3D_obj::__new(null());
		::openfl::geom::Matrix3D m = tmp19;
		::openfl::_Vector::FloatVector d = m->rawData;
		Float tmp20 = x2;
		Float tmp21 = (y2 + z2);
		Float tmp22 = cos;
		Float tmp23 = (tmp21 * tmp22);
		Float tmp24 = (tmp20 + tmp23);
		Float tmp25 = d->set((int)0,tmp24);
		tmp25;
		Float tmp26 = (x * y);
		Float tmp27 = ccos;
		Float tmp28 = (tmp26 * tmp27);
		Float tmp29 = (z * sin);
		Float tmp30 = (tmp28 + tmp29);
		Float tmp31 = d->set((int)1,tmp30);
		tmp31;
		Float tmp32 = (x * z);
		Float tmp33 = ccos;
		Float tmp34 = (tmp32 * tmp33);
		Float tmp35 = (y * sin);
		Float tmp36 = (tmp34 - tmp35);
		Float tmp37 = d->set((int)2,tmp36);
		tmp37;
		Float tmp38 = (x * y);
		Float tmp39 = ccos;
		Float tmp40 = (tmp38 * tmp39);
		Float tmp41 = (z * sin);
		Float tmp42 = (tmp40 - tmp41);
		Float tmp43 = d->set((int)4,tmp42);
		tmp43;
		Float tmp44 = y2;
		Float tmp45 = (x2 + z2);
		Float tmp46 = cos;
		Float tmp47 = (tmp45 * tmp46);
		Float tmp48 = (tmp44 + tmp47);
		Float tmp49 = d->set((int)5,tmp48);
		tmp49;
		Float tmp50 = (y * z);
		Float tmp51 = ccos;
		Float tmp52 = (tmp50 * tmp51);
		Float tmp53 = (x * sin);
		Float tmp54 = (tmp52 + tmp53);
		Float tmp55 = d->set((int)6,tmp54);
		tmp55;
		Float tmp56 = (x * z);
		Float tmp57 = ccos;
		Float tmp58 = (tmp56 * tmp57);
		Float tmp59 = (y * sin);
		Float tmp60 = (tmp58 + tmp59);
		Float tmp61 = d->set((int)8,tmp60);
		tmp61;
		Float tmp62 = (y * z);
		Float tmp63 = ccos;
		Float tmp64 = (tmp62 * tmp63);
		Float tmp65 = (x * sin);
		Float tmp66 = (tmp64 - tmp65);
		Float tmp67 = d->set((int)9,tmp66);
		tmp67;
		Float tmp68 = z2;
		Float tmp69 = (x2 + y2);
		Float tmp70 = cos;
		Float tmp71 = (tmp69 * tmp70);
		Float tmp72 = (tmp68 + tmp71);
		Float tmp73 = d->set((int)10,tmp72);
		tmp73;
		Float tmp74 = tx;
		Float tmp75 = (y2 + z2);
		Float tmp76 = (tmp74 * tmp75);
		Float tmp77 = x;
		Float tmp78 = (ty * y);
		Float tmp79 = (tz * z);
		Float tmp80 = (tmp78 + tmp79);
		Float tmp81 = (tmp77 * tmp80);
		Float tmp82 = (tmp76 - tmp81);
		Float tmp83 = ccos;
		Float tmp84 = (tmp82 * tmp83);
		Float tmp85 = (ty * z);
		Float tmp86 = (tz * y);
		Float tmp87 = (tmp85 - tmp86);
		Float tmp88 = sin;
		Float tmp89 = (tmp87 * tmp88);
		Float tmp90 = (tmp84 + tmp89);
		Float tmp91 = d->set((int)12,tmp90);
		tmp91;
		Float tmp92 = ty;
		Float tmp93 = (x2 + z2);
		Float tmp94 = (tmp92 * tmp93);
		Float tmp95 = y;
		Float tmp96 = (tx * x);
		Float tmp97 = (tz * z);
		Float tmp98 = (tmp96 + tmp97);
		Float tmp99 = (tmp95 * tmp98);
		Float tmp100 = (tmp94 - tmp99);
		Float tmp101 = ccos;
		Float tmp102 = (tmp100 * tmp101);
		Float tmp103 = (tz * x);
		Float tmp104 = (tx * z);
		Float tmp105 = (tmp103 - tmp104);
		Float tmp106 = sin;
		Float tmp107 = (tmp105 * tmp106);
		Float tmp108 = (tmp102 + tmp107);
		Float tmp109 = d->set((int)13,tmp108);
		tmp109;
		Float tmp110 = tz;
		Float tmp111 = (x2 + y2);
		Float tmp112 = (tmp110 * tmp111);
		Float tmp113 = z;
		Float tmp114 = (tx * x);
		Float tmp115 = (ty * y);
		Float tmp116 = (tmp114 + tmp115);
		Float tmp117 = (tmp113 * tmp116);
		Float tmp118 = (tmp112 - tmp117);
		Float tmp119 = ccos;
		Float tmp120 = (tmp118 * tmp119);
		Float tmp121 = (tx * y);
		Float tmp122 = (ty * x);
		Float tmp123 = (tmp121 - tmp122);
		Float tmp124 = sin;
		Float tmp125 = (tmp123 * tmp124);
		Float tmp126 = (tmp120 + tmp125);
		Float tmp127 = d->set((int)14,tmp126);
		tmp127;
		::openfl::geom::Matrix3D tmp128 = m;
		this->prepend(tmp128);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC3(Matrix3D_obj,prependRotation,(void))

Void Matrix3D_obj::prependScale( Float xScale,Float yScale,Float zScale){
{
		::openfl::_Vector::FloatVector tmp;
		{
			Array< Float > a = Array_obj< Float >::__new().Add(xScale).Add(((Float)0.0)).Add(((Float)0.0)).Add(((Float)0.0)).Add(((Float)0.0)).Add(yScale).Add(((Float)0.0)).Add(((Float)0.0)).Add(((Float)0.0)).Add(((Float)0.0)).Add(zScale).Add(((Float)0.0)).Add(((Float)0.0)).Add(((Float)0.0)).Add(((Float)0.0)).Add(((Float)1.0));
			::openfl::_Vector::FloatVector tmp1;
			{
				int length = null();
				bool fixed = null();
				::openfl::_Vector::FloatVector tmp2 = ::openfl::_Vector::FloatVector_obj::__new(length,fixed,null());
				::openfl::_Vector::FloatVector tmp3 = tmp2;
				tmp1 = tmp3;
			}
			::openfl::_Vector::FloatVector vector = tmp1;
			{
				int _g1 = (int)0;
				int _g = a->length;
				while((true)){
					bool tmp2 = (_g1 < _g);
					bool tmp3 = !(tmp2);
					if ((tmp3)){
						break;
					}
					int tmp4 = (_g1)++;
					int i = tmp4;
					int tmp5 = i;
					Float tmp6 = a->__get(i);
					Float tmp7 = tmp6;
					Float tmp8 = vector->set(tmp5,tmp7);
					tmp8;
				}
			}
			tmp = vector;
		}
		::openfl::geom::Matrix3D tmp1 = ::openfl::geom::Matrix3D_obj::__new(tmp);
		this->prepend(tmp1);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC3(Matrix3D_obj,prependScale,(void))

Void Matrix3D_obj::prependTranslation( Float x,Float y,Float z){
{
		::openfl::geom::Matrix3D tmp = ::openfl::geom::Matrix3D_obj::__new(null());
		::openfl::geom::Matrix3D m = tmp;
		::openfl::geom::Vector3D tmp1 = ::openfl::geom::Vector3D_obj::__new(x,y,z,null());
		m->set_position(tmp1);
		::openfl::geom::Matrix3D tmp2 = m;
		this->prepend(tmp2);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC3(Matrix3D_obj,prependTranslation,(void))

bool Matrix3D_obj::recompose( ::openfl::_Vector::ObjectVector components,Dynamic orientationStyle){
	int tmp = components->get_length();
	bool tmp1 = (tmp < (int)3);
	bool tmp2 = !(tmp1);
	bool tmp3 = tmp2;
	bool tmp4;
	if ((tmp3)){
		::openfl::geom::Vector3D tmp5 = components->get((int)2);
		::openfl::geom::Vector3D tmp6 = tmp5;
		::openfl::geom::Vector3D tmp7 = tmp6;
		Float tmp8 = tmp7->x;
		Float tmp9 = tmp8;
		Float tmp10 = tmp9;
		tmp4 = (tmp10 == (int)0);
	}
	else{
		tmp4 = true;
	}
	bool tmp5 = !(tmp4);
	bool tmp6 = tmp5;
	bool tmp7;
	if ((tmp6)){
		::openfl::geom::Vector3D tmp8 = components->get((int)2);
		::openfl::geom::Vector3D tmp9 = tmp8;
		::openfl::geom::Vector3D tmp10 = tmp9;
		Float tmp11 = tmp10->y;
		Float tmp12 = tmp11;
		Float tmp13 = tmp12;
		tmp7 = (tmp13 == (int)0);
	}
	else{
		tmp7 = true;
	}
	bool tmp8 = !(tmp7);
	bool tmp9;
	if ((tmp8)){
		::openfl::geom::Vector3D tmp10 = components->get((int)2);
		::openfl::geom::Vector3D tmp11 = tmp10;
		Float tmp12 = tmp11->z;
		Float tmp13 = tmp12;
		tmp9 = (tmp13 == (int)0);
	}
	else{
		tmp9 = true;
	}
	if ((tmp9)){
		return false;
	}
	bool tmp10 = (orientationStyle == null());
	if ((tmp10)){
		orientationStyle = ((Dynamic)((int)1));
	}
	this->identity();
	Array< Float > scale = Array_obj< Float >::__new();
	::openfl::geom::Vector3D tmp11 = components->get((int)2);
	Float tmp12 = tmp11->x;
	Float tmp13 = scale[(int)2] = tmp12;
	Float tmp14 = scale[(int)1] = tmp13;
	scale[(int)0] = tmp14;
	::openfl::geom::Vector3D tmp15 = components->get((int)2);
	Float tmp16 = tmp15->y;
	Float tmp17 = scale[(int)6] = tmp16;
	Float tmp18 = scale[(int)5] = tmp17;
	scale[(int)4] = tmp18;
	::openfl::geom::Vector3D tmp19 = components->get((int)2);
	Float tmp20 = tmp19->z;
	Float tmp21 = scale[(int)10] = tmp20;
	Float tmp22 = scale[(int)9] = tmp21;
	scale[(int)8] = tmp22;
	bool tmp23 = (orientationStyle != null());
	if ((tmp23)){
		Dynamic tmp24 = orientationStyle;
		switch( (int)(tmp24)){
			case (int)1: {
				::openfl::geom::Vector3D tmp25 = components->get((int)1);
				Float tmp26 = tmp25->x;
				Float tmp27 = ::Math_obj::cos(tmp26);
				Float cx = tmp27;
				::openfl::geom::Vector3D tmp28 = components->get((int)1);
				Float tmp29 = tmp28->y;
				Float tmp30 = ::Math_obj::cos(tmp29);
				Float cy = tmp30;
				::openfl::geom::Vector3D tmp31 = components->get((int)1);
				Float tmp32 = tmp31->z;
				Float tmp33 = ::Math_obj::cos(tmp32);
				Float cz = tmp33;
				::openfl::geom::Vector3D tmp34 = components->get((int)1);
				Float tmp35 = tmp34->x;
				Float tmp36 = ::Math_obj::sin(tmp35);
				Float sx = tmp36;
				::openfl::geom::Vector3D tmp37 = components->get((int)1);
				Float tmp38 = tmp37->y;
				Float tmp39 = ::Math_obj::sin(tmp38);
				Float sy = tmp39;
				::openfl::geom::Vector3D tmp40 = components->get((int)1);
				Float tmp41 = tmp40->z;
				Float tmp42 = ::Math_obj::sin(tmp41);
				Float sz = tmp42;
				::openfl::_Vector::FloatVector tmp43 = this->rawData;
				Float tmp44 = (cy * cz);
				Float tmp45 = scale->__get((int)0);
				Float tmp46 = (tmp44 * tmp45);
				Float tmp47 = tmp43->set((int)0,tmp46);
				tmp47;
				::openfl::_Vector::FloatVector tmp48 = this->rawData;
				Float tmp49 = (cy * sz);
				Float tmp50 = scale->__get((int)1);
				Float tmp51 = (tmp49 * tmp50);
				Float tmp52 = tmp48->set((int)1,tmp51);
				tmp52;
				::openfl::_Vector::FloatVector tmp53 = this->rawData;
				Float tmp54 = sy;
				Float tmp55 = -(tmp54);
				Float tmp56 = scale->__get((int)2);
				Float tmp57 = (tmp55 * tmp56);
				Float tmp58 = tmp53->set((int)2,tmp57);
				tmp58;
				::openfl::_Vector::FloatVector tmp59 = this->rawData;
				Float tmp60 = tmp59->set((int)3,(int)0);
				tmp60;
				::openfl::_Vector::FloatVector tmp61 = this->rawData;
				Float tmp62 = (sx * sy);
				Float tmp63 = cz;
				Float tmp64 = (tmp62 * tmp63);
				Float tmp65 = (cx * sz);
				Float tmp66 = (tmp64 - tmp65);
				Float tmp67 = scale->__get((int)4);
				Float tmp68 = (tmp66 * tmp67);
				Float tmp69 = tmp61->set((int)4,tmp68);
				tmp69;
				::openfl::_Vector::FloatVector tmp70 = this->rawData;
				Float tmp71 = (sx * sy);
				Float tmp72 = sz;
				Float tmp73 = (tmp71 * tmp72);
				Float tmp74 = (cx * cz);
				Float tmp75 = (tmp73 + tmp74);
				Float tmp76 = scale->__get((int)5);
				Float tmp77 = (tmp75 * tmp76);
				Float tmp78 = tmp70->set((int)5,tmp77);
				tmp78;
				::openfl::_Vector::FloatVector tmp79 = this->rawData;
				Float tmp80 = (sx * cy);
				Float tmp81 = scale->__get((int)6);
				Float tmp82 = (tmp80 * tmp81);
				Float tmp83 = tmp79->set((int)6,tmp82);
				tmp83;
				::openfl::_Vector::FloatVector tmp84 = this->rawData;
				Float tmp85 = tmp84->set((int)7,(int)0);
				tmp85;
				::openfl::_Vector::FloatVector tmp86 = this->rawData;
				Float tmp87 = (cx * sy);
				Float tmp88 = cz;
				Float tmp89 = (tmp87 * tmp88);
				Float tmp90 = (sx * sz);
				Float tmp91 = (tmp89 + tmp90);
				Float tmp92 = scale->__get((int)8);
				Float tmp93 = (tmp91 * tmp92);
				Float tmp94 = tmp86->set((int)8,tmp93);
				tmp94;
				::openfl::_Vector::FloatVector tmp95 = this->rawData;
				Float tmp96 = (cx * sy);
				Float tmp97 = sz;
				Float tmp98 = (tmp96 * tmp97);
				Float tmp99 = (sx * cz);
				Float tmp100 = (tmp98 - tmp99);
				Float tmp101 = scale->__get((int)9);
				Float tmp102 = (tmp100 * tmp101);
				Float tmp103 = tmp95->set((int)9,tmp102);
				tmp103;
				::openfl::_Vector::FloatVector tmp104 = this->rawData;
				Float tmp105 = (cx * cy);
				Float tmp106 = scale->__get((int)10);
				Float tmp107 = (tmp105 * tmp106);
				Float tmp108 = tmp104->set((int)10,tmp107);
				tmp108;
				::openfl::_Vector::FloatVector tmp109 = this->rawData;
				Float tmp110 = tmp109->set((int)11,(int)0);
				tmp110;
				{
					::openfl::geom::Vector3D tmp111 = components->get((int)0);
					Float tmp112 = tmp111->x;
					Float value = tmp112;
					::openfl::_Vector::FloatVector tmp113 = this->rawData;
					Float tmp114 = value;
					tmp113->set((int)12,tmp114);
				}
				{
					::openfl::geom::Vector3D tmp111 = components->get((int)0);
					Float tmp112 = tmp111->y;
					Float value = tmp112;
					::openfl::_Vector::FloatVector tmp113 = this->rawData;
					Float tmp114 = value;
					tmp113->set((int)13,tmp114);
				}
				{
					::openfl::geom::Vector3D tmp111 = components->get((int)0);
					Float tmp112 = tmp111->z;
					Float value = tmp112;
					::openfl::_Vector::FloatVector tmp113 = this->rawData;
					Float tmp114 = value;
					tmp113->set((int)14,tmp114);
				}
				::openfl::_Vector::FloatVector tmp111 = this->rawData;
				Float tmp112 = tmp111->set((int)15,(int)1);
				tmp112;
			}
			;break;
			default: {
				::openfl::geom::Vector3D tmp25 = components->get((int)1);
				Float tmp26 = tmp25->x;
				Float x = tmp26;
				::openfl::geom::Vector3D tmp27 = components->get((int)1);
				Float tmp28 = tmp27->y;
				Float y = tmp28;
				::openfl::geom::Vector3D tmp29 = components->get((int)1);
				Float tmp30 = tmp29->z;
				Float z = tmp30;
				::openfl::geom::Vector3D tmp31 = components->get((int)1);
				Float tmp32 = tmp31->w;
				Float w = tmp32;
				bool tmp33 = (orientationStyle == ((Dynamic)((int)0)));
				if ((tmp33)){
					Float tmp34 = (Float(w) / Float((int)2));
					Float tmp35 = ::Math_obj::sin(tmp34);
					hx::MultEq(x,tmp35);
					Float tmp36 = (Float(w) / Float((int)2));
					Float tmp37 = ::Math_obj::sin(tmp36);
					hx::MultEq(y,tmp37);
					Float tmp38 = (Float(w) / Float((int)2));
					Float tmp39 = ::Math_obj::sin(tmp38);
					hx::MultEq(z,tmp39);
					Float tmp40 = (Float(w) / Float((int)2));
					Float tmp41 = ::Math_obj::cos(tmp40);
					w = tmp41;
				}
				::openfl::_Vector::FloatVector tmp34 = this->rawData;
				Float tmp35 = ((int)2 * y);
				Float tmp36 = y;
				Float tmp37 = (tmp35 * tmp36);
				Float tmp38 = ((int)1 - tmp37);
				Float tmp39 = ((int)2 * z);
				Float tmp40 = z;
				Float tmp41 = (tmp39 * tmp40);
				Float tmp42 = (tmp38 - tmp41);
				Float tmp43 = scale->__get((int)0);
				Float tmp44 = (tmp42 * tmp43);
				Float tmp45 = tmp34->set((int)0,tmp44);
				tmp45;
				::openfl::_Vector::FloatVector tmp46 = this->rawData;
				Float tmp47 = ((int)2 * x);
				Float tmp48 = y;
				Float tmp49 = (tmp47 * tmp48);
				Float tmp50 = ((int)2 * w);
				Float tmp51 = z;
				Float tmp52 = (tmp50 * tmp51);
				Float tmp53 = (tmp49 + tmp52);
				Float tmp54 = scale->__get((int)1);
				Float tmp55 = (tmp53 * tmp54);
				Float tmp56 = tmp46->set((int)1,tmp55);
				tmp56;
				::openfl::_Vector::FloatVector tmp57 = this->rawData;
				Float tmp58 = ((int)2 * x);
				Float tmp59 = z;
				Float tmp60 = (tmp58 * tmp59);
				Float tmp61 = ((int)2 * w);
				Float tmp62 = y;
				Float tmp63 = (tmp61 * tmp62);
				Float tmp64 = (tmp60 - tmp63);
				Float tmp65 = scale->__get((int)2);
				Float tmp66 = (tmp64 * tmp65);
				Float tmp67 = tmp57->set((int)2,tmp66);
				tmp67;
				::openfl::_Vector::FloatVector tmp68 = this->rawData;
				Float tmp69 = tmp68->set((int)3,(int)0);
				tmp69;
				::openfl::_Vector::FloatVector tmp70 = this->rawData;
				Float tmp71 = ((int)2 * x);
				Float tmp72 = y;
				Float tmp73 = (tmp71 * tmp72);
				Float tmp74 = ((int)2 * w);
				Float tmp75 = z;
				Float tmp76 = (tmp74 * tmp75);
				Float tmp77 = (tmp73 - tmp76);
				Float tmp78 = scale->__get((int)4);
				Float tmp79 = (tmp77 * tmp78);
				Float tmp80 = tmp70->set((int)4,tmp79);
				tmp80;
				::openfl::_Vector::FloatVector tmp81 = this->rawData;
				Float tmp82 = ((int)2 * x);
				Float tmp83 = x;
				Float tmp84 = (tmp82 * tmp83);
				Float tmp85 = ((int)1 - tmp84);
				Float tmp86 = ((int)2 * z);
				Float tmp87 = z;
				Float tmp88 = (tmp86 * tmp87);
				Float tmp89 = (tmp85 - tmp88);
				Float tmp90 = scale->__get((int)5);
				Float tmp91 = (tmp89 * tmp90);
				Float tmp92 = tmp81->set((int)5,tmp91);
				tmp92;
				::openfl::_Vector::FloatVector tmp93 = this->rawData;
				Float tmp94 = ((int)2 * y);
				Float tmp95 = z;
				Float tmp96 = (tmp94 * tmp95);
				Float tmp97 = ((int)2 * w);
				Float tmp98 = x;
				Float tmp99 = (tmp97 * tmp98);
				Float tmp100 = (tmp96 + tmp99);
				Float tmp101 = scale->__get((int)6);
				Float tmp102 = (tmp100 * tmp101);
				Float tmp103 = tmp93->set((int)6,tmp102);
				tmp103;
				::openfl::_Vector::FloatVector tmp104 = this->rawData;
				Float tmp105 = tmp104->set((int)7,(int)0);
				tmp105;
				::openfl::_Vector::FloatVector tmp106 = this->rawData;
				Float tmp107 = ((int)2 * x);
				Float tmp108 = z;
				Float tmp109 = (tmp107 * tmp108);
				Float tmp110 = ((int)2 * w);
				Float tmp111 = y;
				Float tmp112 = (tmp110 * tmp111);
				Float tmp113 = (tmp109 + tmp112);
				Float tmp114 = scale->__get((int)8);
				Float tmp115 = (tmp113 * tmp114);
				Float tmp116 = tmp106->set((int)8,tmp115);
				tmp116;
				::openfl::_Vector::FloatVector tmp117 = this->rawData;
				Float tmp118 = ((int)2 * y);
				Float tmp119 = z;
				Float tmp120 = (tmp118 * tmp119);
				Float tmp121 = ((int)2 * w);
				Float tmp122 = x;
				Float tmp123 = (tmp121 * tmp122);
				Float tmp124 = (tmp120 - tmp123);
				Float tmp125 = scale->__get((int)9);
				Float tmp126 = (tmp124 * tmp125);
				Float tmp127 = tmp117->set((int)9,tmp126);
				tmp127;
				::openfl::_Vector::FloatVector tmp128 = this->rawData;
				Float tmp129 = ((int)2 * x);
				Float tmp130 = x;
				Float tmp131 = (tmp129 * tmp130);
				Float tmp132 = ((int)1 - tmp131);
				Float tmp133 = ((int)2 * y);
				Float tmp134 = y;
				Float tmp135 = (tmp133 * tmp134);
				Float tmp136 = (tmp132 - tmp135);
				Float tmp137 = scale->__get((int)10);
				Float tmp138 = (tmp136 * tmp137);
				Float tmp139 = tmp128->set((int)10,tmp138);
				tmp139;
				::openfl::_Vector::FloatVector tmp140 = this->rawData;
				Float tmp141 = tmp140->set((int)11,(int)0);
				tmp141;
				{
					::openfl::geom::Vector3D tmp142 = components->get((int)0);
					Float tmp143 = tmp142->x;
					Float value = tmp143;
					::openfl::_Vector::FloatVector tmp144 = this->rawData;
					Float tmp145 = value;
					tmp144->set((int)12,tmp145);
				}
				{
					::openfl::geom::Vector3D tmp142 = components->get((int)0);
					Float tmp143 = tmp142->y;
					Float value = tmp143;
					::openfl::_Vector::FloatVector tmp144 = this->rawData;
					Float tmp145 = value;
					tmp144->set((int)13,tmp145);
				}
				{
					::openfl::geom::Vector3D tmp142 = components->get((int)0);
					Float tmp143 = tmp142->z;
					Float value = tmp143;
					::openfl::_Vector::FloatVector tmp144 = this->rawData;
					Float tmp145 = value;
					tmp144->set((int)14,tmp145);
				}
				::openfl::_Vector::FloatVector tmp142 = this->rawData;
				Float tmp143 = tmp142->set((int)15,(int)1);
				tmp143;
			}
		}
	}
	else{
		::openfl::geom::Vector3D tmp24 = components->get((int)1);
		Float tmp25 = tmp24->x;
		Float x = tmp25;
		::openfl::geom::Vector3D tmp26 = components->get((int)1);
		Float tmp27 = tmp26->y;
		Float y = tmp27;
		::openfl::geom::Vector3D tmp28 = components->get((int)1);
		Float tmp29 = tmp28->z;
		Float z = tmp29;
		::openfl::geom::Vector3D tmp30 = components->get((int)1);
		Float tmp31 = tmp30->w;
		Float w = tmp31;
		bool tmp32 = (orientationStyle == ((Dynamic)((int)0)));
		if ((tmp32)){
			Float tmp33 = (Float(w) / Float((int)2));
			Float tmp34 = ::Math_obj::sin(tmp33);
			hx::MultEq(x,tmp34);
			Float tmp35 = (Float(w) / Float((int)2));
			Float tmp36 = ::Math_obj::sin(tmp35);
			hx::MultEq(y,tmp36);
			Float tmp37 = (Float(w) / Float((int)2));
			Float tmp38 = ::Math_obj::sin(tmp37);
			hx::MultEq(z,tmp38);
			Float tmp39 = (Float(w) / Float((int)2));
			Float tmp40 = ::Math_obj::cos(tmp39);
			w = tmp40;
		}
		::openfl::_Vector::FloatVector tmp33 = this->rawData;
		Float tmp34 = ((int)2 * y);
		Float tmp35 = y;
		Float tmp36 = (tmp34 * tmp35);
		Float tmp37 = ((int)1 - tmp36);
		Float tmp38 = ((int)2 * z);
		Float tmp39 = z;
		Float tmp40 = (tmp38 * tmp39);
		Float tmp41 = (tmp37 - tmp40);
		Float tmp42 = scale->__get((int)0);
		Float tmp43 = (tmp41 * tmp42);
		Float tmp44 = tmp33->set((int)0,tmp43);
		tmp44;
		::openfl::_Vector::FloatVector tmp45 = this->rawData;
		Float tmp46 = ((int)2 * x);
		Float tmp47 = y;
		Float tmp48 = (tmp46 * tmp47);
		Float tmp49 = ((int)2 * w);
		Float tmp50 = z;
		Float tmp51 = (tmp49 * tmp50);
		Float tmp52 = (tmp48 + tmp51);
		Float tmp53 = scale->__get((int)1);
		Float tmp54 = (tmp52 * tmp53);
		Float tmp55 = tmp45->set((int)1,tmp54);
		tmp55;
		::openfl::_Vector::FloatVector tmp56 = this->rawData;
		Float tmp57 = ((int)2 * x);
		Float tmp58 = z;
		Float tmp59 = (tmp57 * tmp58);
		Float tmp60 = ((int)2 * w);
		Float tmp61 = y;
		Float tmp62 = (tmp60 * tmp61);
		Float tmp63 = (tmp59 - tmp62);
		Float tmp64 = scale->__get((int)2);
		Float tmp65 = (tmp63 * tmp64);
		Float tmp66 = tmp56->set((int)2,tmp65);
		tmp66;
		::openfl::_Vector::FloatVector tmp67 = this->rawData;
		Float tmp68 = tmp67->set((int)3,(int)0);
		tmp68;
		::openfl::_Vector::FloatVector tmp69 = this->rawData;
		Float tmp70 = ((int)2 * x);
		Float tmp71 = y;
		Float tmp72 = (tmp70 * tmp71);
		Float tmp73 = ((int)2 * w);
		Float tmp74 = z;
		Float tmp75 = (tmp73 * tmp74);
		Float tmp76 = (tmp72 - tmp75);
		Float tmp77 = scale->__get((int)4);
		Float tmp78 = (tmp76 * tmp77);
		Float tmp79 = tmp69->set((int)4,tmp78);
		tmp79;
		::openfl::_Vector::FloatVector tmp80 = this->rawData;
		Float tmp81 = ((int)2 * x);
		Float tmp82 = x;
		Float tmp83 = (tmp81 * tmp82);
		Float tmp84 = ((int)1 - tmp83);
		Float tmp85 = ((int)2 * z);
		Float tmp86 = z;
		Float tmp87 = (tmp85 * tmp86);
		Float tmp88 = (tmp84 - tmp87);
		Float tmp89 = scale->__get((int)5);
		Float tmp90 = (tmp88 * tmp89);
		Float tmp91 = tmp80->set((int)5,tmp90);
		tmp91;
		::openfl::_Vector::FloatVector tmp92 = this->rawData;
		Float tmp93 = ((int)2 * y);
		Float tmp94 = z;
		Float tmp95 = (tmp93 * tmp94);
		Float tmp96 = ((int)2 * w);
		Float tmp97 = x;
		Float tmp98 = (tmp96 * tmp97);
		Float tmp99 = (tmp95 + tmp98);
		Float tmp100 = scale->__get((int)6);
		Float tmp101 = (tmp99 * tmp100);
		Float tmp102 = tmp92->set((int)6,tmp101);
		tmp102;
		::openfl::_Vector::FloatVector tmp103 = this->rawData;
		Float tmp104 = tmp103->set((int)7,(int)0);
		tmp104;
		::openfl::_Vector::FloatVector tmp105 = this->rawData;
		Float tmp106 = ((int)2 * x);
		Float tmp107 = z;
		Float tmp108 = (tmp106 * tmp107);
		Float tmp109 = ((int)2 * w);
		Float tmp110 = y;
		Float tmp111 = (tmp109 * tmp110);
		Float tmp112 = (tmp108 + tmp111);
		Float tmp113 = scale->__get((int)8);
		Float tmp114 = (tmp112 * tmp113);
		Float tmp115 = tmp105->set((int)8,tmp114);
		tmp115;
		::openfl::_Vector::FloatVector tmp116 = this->rawData;
		Float tmp117 = ((int)2 * y);
		Float tmp118 = z;
		Float tmp119 = (tmp117 * tmp118);
		Float tmp120 = ((int)2 * w);
		Float tmp121 = x;
		Float tmp122 = (tmp120 * tmp121);
		Float tmp123 = (tmp119 - tmp122);
		Float tmp124 = scale->__get((int)9);
		Float tmp125 = (tmp123 * tmp124);
		Float tmp126 = tmp116->set((int)9,tmp125);
		tmp126;
		::openfl::_Vector::FloatVector tmp127 = this->rawData;
		Float tmp128 = ((int)2 * x);
		Float tmp129 = x;
		Float tmp130 = (tmp128 * tmp129);
		Float tmp131 = ((int)1 - tmp130);
		Float tmp132 = ((int)2 * y);
		Float tmp133 = y;
		Float tmp134 = (tmp132 * tmp133);
		Float tmp135 = (tmp131 - tmp134);
		Float tmp136 = scale->__get((int)10);
		Float tmp137 = (tmp135 * tmp136);
		Float tmp138 = tmp127->set((int)10,tmp137);
		tmp138;
		::openfl::_Vector::FloatVector tmp139 = this->rawData;
		Float tmp140 = tmp139->set((int)11,(int)0);
		tmp140;
		{
			::openfl::geom::Vector3D tmp141 = components->get((int)0);
			Float tmp142 = tmp141->x;
			Float value = tmp142;
			::openfl::_Vector::FloatVector tmp143 = this->rawData;
			Float tmp144 = value;
			tmp143->set((int)12,tmp144);
		}
		{
			::openfl::geom::Vector3D tmp141 = components->get((int)0);
			Float tmp142 = tmp141->y;
			Float value = tmp142;
			::openfl::_Vector::FloatVector tmp143 = this->rawData;
			Float tmp144 = value;
			tmp143->set((int)13,tmp144);
		}
		{
			::openfl::geom::Vector3D tmp141 = components->get((int)0);
			Float tmp142 = tmp141->z;
			Float value = tmp142;
			::openfl::_Vector::FloatVector tmp143 = this->rawData;
			Float tmp144 = value;
			tmp143->set((int)14,tmp144);
		}
		::openfl::_Vector::FloatVector tmp141 = this->rawData;
		Float tmp142 = tmp141->set((int)15,(int)1);
		tmp142;
	}
	::openfl::geom::Vector3D tmp24 = components->get((int)2);
	Float tmp25 = tmp24->x;
	bool tmp26 = (tmp25 == (int)0);
	if ((tmp26)){
		::openfl::_Vector::FloatVector tmp27 = this->rawData;
		Float tmp28 = tmp27->set((int)0,((Float)1e-15));
		tmp28;
	}
	::openfl::geom::Vector3D tmp27 = components->get((int)2);
	Float tmp28 = tmp27->y;
	bool tmp29 = (tmp28 == (int)0);
	if ((tmp29)){
		::openfl::_Vector::FloatVector tmp30 = this->rawData;
		Float tmp31 = tmp30->set((int)5,((Float)1e-15));
		tmp31;
	}
	::openfl::geom::Vector3D tmp30 = components->get((int)2);
	Float tmp31 = tmp30->z;
	bool tmp32 = (tmp31 == (int)0);
	if ((tmp32)){
		::openfl::_Vector::FloatVector tmp33 = this->rawData;
		Float tmp34 = tmp33->set((int)10,((Float)1e-15));
		tmp34;
	}
	::openfl::geom::Vector3D tmp33 = components->get((int)2);
	Float tmp34 = tmp33->x;
	bool tmp35 = (tmp34 == (int)0);
	bool tmp36 = !(tmp35);
	bool tmp37 = tmp36;
	bool tmp38;
	if ((tmp37)){
		::openfl::geom::Vector3D tmp39 = components->get((int)2);
		::openfl::geom::Vector3D tmp40 = tmp39;
		::openfl::geom::Vector3D tmp41 = tmp40;
		Float tmp42 = tmp41->y;
		Float tmp43 = tmp42;
		Float tmp44 = tmp43;
		tmp38 = (tmp44 == (int)0);
	}
	else{
		tmp38 = true;
	}
	bool tmp39 = !(tmp38);
	bool tmp40;
	if ((tmp39)){
		::openfl::geom::Vector3D tmp41 = components->get((int)2);
		::openfl::geom::Vector3D tmp42 = tmp41;
		Float tmp43 = tmp42->y;
		Float tmp44 = tmp43;
		tmp40 = (tmp44 == (int)0);
	}
	else{
		tmp40 = true;
	}
	bool tmp41 = !(tmp40);
	return tmp41;
}


HX_DEFINE_DYNAMIC_FUNC2(Matrix3D_obj,recompose,return )

::openfl::geom::Vector3D Matrix3D_obj::transformVector( ::openfl::geom::Vector3D v){
	Float x = v->x;
	Float y = v->y;
	Float z = v->z;
	Float tmp = x;
	::openfl::_Vector::FloatVector tmp1 = this->rawData;
	Float tmp2 = tmp1->get((int)0);
	Float tmp3 = tmp2;
	Float tmp4 = (tmp * tmp3);
	Float tmp5 = y;
	::openfl::_Vector::FloatVector tmp6 = this->rawData;
	Float tmp7 = tmp6->get((int)4);
	Float tmp8 = tmp7;
	Float tmp9 = (tmp5 * tmp8);
	Float tmp10 = (tmp4 + tmp9);
	Float tmp11 = z;
	::openfl::_Vector::FloatVector tmp12 = this->rawData;
	Float tmp13 = tmp12->get((int)8);
	Float tmp14 = tmp13;
	Float tmp15 = (tmp11 * tmp14);
	Float tmp16 = (tmp10 + tmp15);
	::openfl::_Vector::FloatVector tmp17 = this->rawData;
	Float tmp18 = tmp17->get((int)12);
	Float tmp19 = tmp18;
	Float tmp20 = (tmp16 + tmp19);
	Float tmp21 = x;
	::openfl::_Vector::FloatVector tmp22 = this->rawData;
	Float tmp23 = tmp22->get((int)1);
	Float tmp24 = tmp23;
	Float tmp25 = (tmp21 * tmp24);
	Float tmp26 = y;
	::openfl::_Vector::FloatVector tmp27 = this->rawData;
	Float tmp28 = tmp27->get((int)5);
	Float tmp29 = tmp28;
	Float tmp30 = (tmp26 * tmp29);
	Float tmp31 = (tmp25 + tmp30);
	Float tmp32 = z;
	::openfl::_Vector::FloatVector tmp33 = this->rawData;
	Float tmp34 = tmp33->get((int)9);
	Float tmp35 = tmp34;
	Float tmp36 = (tmp32 * tmp35);
	Float tmp37 = (tmp31 + tmp36);
	::openfl::_Vector::FloatVector tmp38 = this->rawData;
	Float tmp39 = tmp38->get((int)13);
	Float tmp40 = tmp39;
	Float tmp41 = (tmp37 + tmp40);
	Float tmp42 = x;
	::openfl::_Vector::FloatVector tmp43 = this->rawData;
	Float tmp44 = tmp43->get((int)2);
	Float tmp45 = tmp44;
	Float tmp46 = (tmp42 * tmp45);
	Float tmp47 = y;
	::openfl::_Vector::FloatVector tmp48 = this->rawData;
	Float tmp49 = tmp48->get((int)6);
	Float tmp50 = tmp49;
	Float tmp51 = (tmp47 * tmp50);
	Float tmp52 = (tmp46 + tmp51);
	Float tmp53 = z;
	::openfl::_Vector::FloatVector tmp54 = this->rawData;
	Float tmp55 = tmp54->get((int)10);
	Float tmp56 = tmp55;
	Float tmp57 = (tmp53 * tmp56);
	Float tmp58 = (tmp52 + tmp57);
	::openfl::_Vector::FloatVector tmp59 = this->rawData;
	Float tmp60 = tmp59->get((int)14);
	Float tmp61 = tmp60;
	Float tmp62 = (tmp58 + tmp61);
	Float tmp63 = x;
	::openfl::_Vector::FloatVector tmp64 = this->rawData;
	Float tmp65 = tmp64->get((int)3);
	Float tmp66 = tmp65;
	Float tmp67 = (tmp63 * tmp66);
	Float tmp68 = y;
	::openfl::_Vector::FloatVector tmp69 = this->rawData;
	Float tmp70 = tmp69->get((int)7);
	Float tmp71 = tmp70;
	Float tmp72 = (tmp68 * tmp71);
	Float tmp73 = (tmp67 + tmp72);
	Float tmp74 = z;
	::openfl::_Vector::FloatVector tmp75 = this->rawData;
	Float tmp76 = tmp75->get((int)11);
	Float tmp77 = tmp76;
	Float tmp78 = (tmp74 * tmp77);
	Float tmp79 = (tmp73 + tmp78);
	::openfl::_Vector::FloatVector tmp80 = this->rawData;
	Float tmp81 = tmp80->get((int)15);
	Float tmp82 = tmp81;
	Float tmp83 = (tmp79 + tmp82);
	::openfl::geom::Vector3D tmp84 = ::openfl::geom::Vector3D_obj::__new(tmp20,tmp41,tmp62,tmp83);
	return tmp84;
}


HX_DEFINE_DYNAMIC_FUNC1(Matrix3D_obj,transformVector,return )

Void Matrix3D_obj::transformVectors( ::openfl::_Vector::FloatVector vin,::openfl::_Vector::FloatVector vout){
{
		int i = (int)0;
		Float x;
		Float y;
		Float z;
		while((true)){
			int tmp = (i + (int)3);
			int tmp1 = vin->get_length();
			bool tmp2 = (tmp <= tmp1);
			bool tmp3 = !(tmp2);
			if ((tmp3)){
				break;
			}
			int tmp4 = i;
			Float tmp5 = vin->get(tmp4);
			x = tmp5;
			int tmp6 = (i + (int)1);
			Float tmp7 = vin->get(tmp6);
			y = tmp7;
			int tmp8 = (i + (int)2);
			Float tmp9 = vin->get(tmp8);
			z = tmp9;
			{
				Float tmp10 = x;
				::openfl::_Vector::FloatVector tmp11 = this->rawData;
				Float tmp12 = tmp11->get((int)0);
				Float tmp13 = tmp12;
				Float tmp14 = (tmp10 * tmp13);
				Float tmp15 = y;
				::openfl::_Vector::FloatVector tmp16 = this->rawData;
				Float tmp17 = tmp16->get((int)4);
				Float tmp18 = tmp17;
				Float tmp19 = (tmp15 * tmp18);
				Float tmp20 = (tmp14 + tmp19);
				Float tmp21 = z;
				::openfl::_Vector::FloatVector tmp22 = this->rawData;
				Float tmp23 = tmp22->get((int)8);
				Float tmp24 = tmp23;
				Float tmp25 = (tmp21 * tmp24);
				Float tmp26 = (tmp20 + tmp25);
				::openfl::_Vector::FloatVector tmp27 = this->rawData;
				Float tmp28 = tmp27->get((int)12);
				Float tmp29 = tmp28;
				Float tmp30 = (tmp26 + tmp29);
				Float value = tmp30;
				int tmp31 = i;
				Float tmp32 = value;
				vout->set(tmp31,tmp32);
			}
			{
				Float tmp10 = x;
				::openfl::_Vector::FloatVector tmp11 = this->rawData;
				Float tmp12 = tmp11->get((int)1);
				Float tmp13 = tmp12;
				Float tmp14 = (tmp10 * tmp13);
				Float tmp15 = y;
				::openfl::_Vector::FloatVector tmp16 = this->rawData;
				Float tmp17 = tmp16->get((int)5);
				Float tmp18 = tmp17;
				Float tmp19 = (tmp15 * tmp18);
				Float tmp20 = (tmp14 + tmp19);
				Float tmp21 = z;
				::openfl::_Vector::FloatVector tmp22 = this->rawData;
				Float tmp23 = tmp22->get((int)9);
				Float tmp24 = tmp23;
				Float tmp25 = (tmp21 * tmp24);
				Float tmp26 = (tmp20 + tmp25);
				::openfl::_Vector::FloatVector tmp27 = this->rawData;
				Float tmp28 = tmp27->get((int)13);
				Float tmp29 = tmp28;
				Float tmp30 = (tmp26 + tmp29);
				Float value = tmp30;
				int tmp31 = (i + (int)1);
				Float tmp32 = value;
				vout->set(tmp31,tmp32);
			}
			{
				Float tmp10 = x;
				::openfl::_Vector::FloatVector tmp11 = this->rawData;
				Float tmp12 = tmp11->get((int)2);
				Float tmp13 = tmp12;
				Float tmp14 = (tmp10 * tmp13);
				Float tmp15 = y;
				::openfl::_Vector::FloatVector tmp16 = this->rawData;
				Float tmp17 = tmp16->get((int)6);
				Float tmp18 = tmp17;
				Float tmp19 = (tmp15 * tmp18);
				Float tmp20 = (tmp14 + tmp19);
				Float tmp21 = z;
				::openfl::_Vector::FloatVector tmp22 = this->rawData;
				Float tmp23 = tmp22->get((int)10);
				Float tmp24 = tmp23;
				Float tmp25 = (tmp21 * tmp24);
				Float tmp26 = (tmp20 + tmp25);
				::openfl::_Vector::FloatVector tmp27 = this->rawData;
				Float tmp28 = tmp27->get((int)14);
				Float tmp29 = tmp28;
				Float tmp30 = (tmp26 + tmp29);
				Float value = tmp30;
				int tmp31 = (i + (int)2);
				Float tmp32 = value;
				vout->set(tmp31,tmp32);
			}
			hx::AddEq(i,(int)3);
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(Matrix3D_obj,transformVectors,(void))

Void Matrix3D_obj::transpose( ){
{
		::openfl::_Vector::FloatVector tmp = this->rawData;
		::openfl::_Vector::IVector tmp1 = tmp->copy();
		::openfl::_Vector::FloatVector oRawData = ((::openfl::_Vector::FloatVector)(tmp1));
		{
			Float tmp2 = oRawData->get((int)4);
			Float value = tmp2;
			::openfl::_Vector::FloatVector tmp3 = this->rawData;
			Float tmp4 = value;
			tmp3->set((int)1,tmp4);
		}
		{
			Float tmp2 = oRawData->get((int)8);
			Float value = tmp2;
			::openfl::_Vector::FloatVector tmp3 = this->rawData;
			Float tmp4 = value;
			tmp3->set((int)2,tmp4);
		}
		{
			Float tmp2 = oRawData->get((int)12);
			Float value = tmp2;
			::openfl::_Vector::FloatVector tmp3 = this->rawData;
			Float tmp4 = value;
			tmp3->set((int)3,tmp4);
		}
		{
			Float tmp2 = oRawData->get((int)1);
			Float value = tmp2;
			::openfl::_Vector::FloatVector tmp3 = this->rawData;
			Float tmp4 = value;
			tmp3->set((int)4,tmp4);
		}
		{
			Float tmp2 = oRawData->get((int)9);
			Float value = tmp2;
			::openfl::_Vector::FloatVector tmp3 = this->rawData;
			Float tmp4 = value;
			tmp3->set((int)6,tmp4);
		}
		{
			Float tmp2 = oRawData->get((int)13);
			Float value = tmp2;
			::openfl::_Vector::FloatVector tmp3 = this->rawData;
			Float tmp4 = value;
			tmp3->set((int)7,tmp4);
		}
		{
			Float tmp2 = oRawData->get((int)2);
			Float value = tmp2;
			::openfl::_Vector::FloatVector tmp3 = this->rawData;
			Float tmp4 = value;
			tmp3->set((int)8,tmp4);
		}
		{
			Float tmp2 = oRawData->get((int)6);
			Float value = tmp2;
			::openfl::_Vector::FloatVector tmp3 = this->rawData;
			Float tmp4 = value;
			tmp3->set((int)9,tmp4);
		}
		{
			Float tmp2 = oRawData->get((int)14);
			Float value = tmp2;
			::openfl::_Vector::FloatVector tmp3 = this->rawData;
			Float tmp4 = value;
			tmp3->set((int)11,tmp4);
		}
		{
			Float tmp2 = oRawData->get((int)3);
			Float value = tmp2;
			::openfl::_Vector::FloatVector tmp3 = this->rawData;
			Float tmp4 = value;
			tmp3->set((int)12,tmp4);
		}
		{
			Float tmp2 = oRawData->get((int)7);
			Float value = tmp2;
			::openfl::_Vector::FloatVector tmp3 = this->rawData;
			Float tmp4 = value;
			tmp3->set((int)13,tmp4);
		}
		{
			Float tmp2 = oRawData->get((int)11);
			Float value = tmp2;
			::openfl::_Vector::FloatVector tmp3 = this->rawData;
			Float tmp4 = value;
			tmp3->set((int)14,tmp4);
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(Matrix3D_obj,transpose,(void))

Float Matrix3D_obj::get_determinant( ){
	::openfl::_Vector::FloatVector tmp = this->rawData;
	Float tmp1 = tmp->get((int)0);
	Float tmp2 = tmp1;
	::openfl::_Vector::FloatVector tmp3 = this->rawData;
	Float tmp4 = tmp3->get((int)5);
	Float tmp5 = tmp4;
	Float tmp6 = (tmp2 * tmp5);
	::openfl::_Vector::FloatVector tmp7 = this->rawData;
	Float tmp8 = tmp7->get((int)4);
	Float tmp9 = tmp8;
	::openfl::_Vector::FloatVector tmp10 = this->rawData;
	Float tmp11 = tmp10->get((int)1);
	Float tmp12 = tmp11;
	Float tmp13 = (tmp9 * tmp12);
	Float tmp14 = (tmp6 - tmp13);
	::openfl::_Vector::FloatVector tmp15 = this->rawData;
	Float tmp16 = tmp15->get((int)10);
	Float tmp17 = tmp16;
	::openfl::_Vector::FloatVector tmp18 = this->rawData;
	Float tmp19 = tmp18->get((int)15);
	Float tmp20 = tmp19;
	Float tmp21 = (tmp17 * tmp20);
	::openfl::_Vector::FloatVector tmp22 = this->rawData;
	Float tmp23 = tmp22->get((int)14);
	Float tmp24 = tmp23;
	::openfl::_Vector::FloatVector tmp25 = this->rawData;
	Float tmp26 = tmp25->get((int)11);
	Float tmp27 = tmp26;
	Float tmp28 = (tmp24 * tmp27);
	Float tmp29 = (tmp21 - tmp28);
	Float tmp30 = (tmp14 * tmp29);
	::openfl::_Vector::FloatVector tmp31 = this->rawData;
	Float tmp32 = tmp31->get((int)0);
	Float tmp33 = tmp32;
	::openfl::_Vector::FloatVector tmp34 = this->rawData;
	Float tmp35 = tmp34->get((int)9);
	Float tmp36 = tmp35;
	Float tmp37 = (tmp33 * tmp36);
	::openfl::_Vector::FloatVector tmp38 = this->rawData;
	Float tmp39 = tmp38->get((int)8);
	Float tmp40 = tmp39;
	::openfl::_Vector::FloatVector tmp41 = this->rawData;
	Float tmp42 = tmp41->get((int)1);
	Float tmp43 = tmp42;
	Float tmp44 = (tmp40 * tmp43);
	Float tmp45 = (tmp37 - tmp44);
	::openfl::_Vector::FloatVector tmp46 = this->rawData;
	Float tmp47 = tmp46->get((int)6);
	Float tmp48 = tmp47;
	::openfl::_Vector::FloatVector tmp49 = this->rawData;
	Float tmp50 = tmp49->get((int)15);
	Float tmp51 = tmp50;
	Float tmp52 = (tmp48 * tmp51);
	::openfl::_Vector::FloatVector tmp53 = this->rawData;
	Float tmp54 = tmp53->get((int)14);
	Float tmp55 = tmp54;
	::openfl::_Vector::FloatVector tmp56 = this->rawData;
	Float tmp57 = tmp56->get((int)7);
	Float tmp58 = tmp57;
	Float tmp59 = (tmp55 * tmp58);
	Float tmp60 = (tmp52 - tmp59);
	Float tmp61 = (tmp45 * tmp60);
	Float tmp62 = (tmp30 - tmp61);
	::openfl::_Vector::FloatVector tmp63 = this->rawData;
	Float tmp64 = tmp63->get((int)0);
	Float tmp65 = tmp64;
	::openfl::_Vector::FloatVector tmp66 = this->rawData;
	Float tmp67 = tmp66->get((int)13);
	Float tmp68 = tmp67;
	Float tmp69 = (tmp65 * tmp68);
	::openfl::_Vector::FloatVector tmp70 = this->rawData;
	Float tmp71 = tmp70->get((int)12);
	Float tmp72 = tmp71;
	::openfl::_Vector::FloatVector tmp73 = this->rawData;
	Float tmp74 = tmp73->get((int)1);
	Float tmp75 = tmp74;
	Float tmp76 = (tmp72 * tmp75);
	Float tmp77 = (tmp69 - tmp76);
	::openfl::_Vector::FloatVector tmp78 = this->rawData;
	Float tmp79 = tmp78->get((int)6);
	Float tmp80 = tmp79;
	::openfl::_Vector::FloatVector tmp81 = this->rawData;
	Float tmp82 = tmp81->get((int)11);
	Float tmp83 = tmp82;
	Float tmp84 = (tmp80 * tmp83);
	::openfl::_Vector::FloatVector tmp85 = this->rawData;
	Float tmp86 = tmp85->get((int)10);
	Float tmp87 = tmp86;
	::openfl::_Vector::FloatVector tmp88 = this->rawData;
	Float tmp89 = tmp88->get((int)7);
	Float tmp90 = tmp89;
	Float tmp91 = (tmp87 * tmp90);
	Float tmp92 = (tmp84 - tmp91);
	Float tmp93 = (tmp77 * tmp92);
	Float tmp94 = (tmp62 + tmp93);
	::openfl::_Vector::FloatVector tmp95 = this->rawData;
	Float tmp96 = tmp95->get((int)4);
	Float tmp97 = tmp96;
	::openfl::_Vector::FloatVector tmp98 = this->rawData;
	Float tmp99 = tmp98->get((int)9);
	Float tmp100 = tmp99;
	Float tmp101 = (tmp97 * tmp100);
	::openfl::_Vector::FloatVector tmp102 = this->rawData;
	Float tmp103 = tmp102->get((int)8);
	Float tmp104 = tmp103;
	::openfl::_Vector::FloatVector tmp105 = this->rawData;
	Float tmp106 = tmp105->get((int)5);
	Float tmp107 = tmp106;
	Float tmp108 = (tmp104 * tmp107);
	Float tmp109 = (tmp101 - tmp108);
	::openfl::_Vector::FloatVector tmp110 = this->rawData;
	Float tmp111 = tmp110->get((int)2);
	Float tmp112 = tmp111;
	::openfl::_Vector::FloatVector tmp113 = this->rawData;
	Float tmp114 = tmp113->get((int)15);
	Float tmp115 = tmp114;
	Float tmp116 = (tmp112 * tmp115);
	::openfl::_Vector::FloatVector tmp117 = this->rawData;
	Float tmp118 = tmp117->get((int)14);
	Float tmp119 = tmp118;
	::openfl::_Vector::FloatVector tmp120 = this->rawData;
	Float tmp121 = tmp120->get((int)3);
	Float tmp122 = tmp121;
	Float tmp123 = (tmp119 * tmp122);
	Float tmp124 = (tmp116 - tmp123);
	Float tmp125 = (tmp109 * tmp124);
	Float tmp126 = (tmp94 + tmp125);
	::openfl::_Vector::FloatVector tmp127 = this->rawData;
	Float tmp128 = tmp127->get((int)4);
	Float tmp129 = tmp128;
	::openfl::_Vector::FloatVector tmp130 = this->rawData;
	Float tmp131 = tmp130->get((int)13);
	Float tmp132 = tmp131;
	Float tmp133 = (tmp129 * tmp132);
	::openfl::_Vector::FloatVector tmp134 = this->rawData;
	Float tmp135 = tmp134->get((int)12);
	Float tmp136 = tmp135;
	::openfl::_Vector::FloatVector tmp137 = this->rawData;
	Float tmp138 = tmp137->get((int)5);
	Float tmp139 = tmp138;
	Float tmp140 = (tmp136 * tmp139);
	Float tmp141 = (tmp133 - tmp140);
	::openfl::_Vector::FloatVector tmp142 = this->rawData;
	Float tmp143 = tmp142->get((int)2);
	Float tmp144 = tmp143;
	::openfl::_Vector::FloatVector tmp145 = this->rawData;
	Float tmp146 = tmp145->get((int)11);
	Float tmp147 = tmp146;
	Float tmp148 = (tmp144 * tmp147);
	::openfl::_Vector::FloatVector tmp149 = this->rawData;
	Float tmp150 = tmp149->get((int)10);
	Float tmp151 = tmp150;
	::openfl::_Vector::FloatVector tmp152 = this->rawData;
	Float tmp153 = tmp152->get((int)3);
	Float tmp154 = tmp153;
	Float tmp155 = (tmp151 * tmp154);
	Float tmp156 = (tmp148 - tmp155);
	Float tmp157 = (tmp141 * tmp156);
	Float tmp158 = (tmp126 - tmp157);
	::openfl::_Vector::FloatVector tmp159 = this->rawData;
	Float tmp160 = tmp159->get((int)8);
	Float tmp161 = tmp160;
	::openfl::_Vector::FloatVector tmp162 = this->rawData;
	Float tmp163 = tmp162->get((int)13);
	Float tmp164 = tmp163;
	Float tmp165 = (tmp161 * tmp164);
	::openfl::_Vector::FloatVector tmp166 = this->rawData;
	Float tmp167 = tmp166->get((int)12);
	Float tmp168 = tmp167;
	::openfl::_Vector::FloatVector tmp169 = this->rawData;
	Float tmp170 = tmp169->get((int)9);
	Float tmp171 = tmp170;
	Float tmp172 = (tmp168 * tmp171);
	Float tmp173 = (tmp165 - tmp172);
	::openfl::_Vector::FloatVector tmp174 = this->rawData;
	Float tmp175 = tmp174->get((int)2);
	Float tmp176 = tmp175;
	::openfl::_Vector::FloatVector tmp177 = this->rawData;
	Float tmp178 = tmp177->get((int)7);
	Float tmp179 = tmp178;
	Float tmp180 = (tmp176 * tmp179);
	::openfl::_Vector::FloatVector tmp181 = this->rawData;
	Float tmp182 = tmp181->get((int)6);
	Float tmp183 = tmp182;
	::openfl::_Vector::FloatVector tmp184 = this->rawData;
	Float tmp185 = tmp184->get((int)3);
	Float tmp186 = tmp185;
	Float tmp187 = (tmp183 * tmp186);
	Float tmp188 = (tmp180 - tmp187);
	Float tmp189 = (tmp173 * tmp188);
	Float tmp190 = (tmp158 + tmp189);
	Float tmp191 = tmp190;
	return tmp191;
}


HX_DEFINE_DYNAMIC_FUNC0(Matrix3D_obj,get_determinant,return )

::openfl::geom::Vector3D Matrix3D_obj::get_position( ){
	::openfl::_Vector::FloatVector tmp = this->rawData;
	Float tmp1 = tmp->get((int)12);
	Float tmp2 = tmp1;
	::openfl::_Vector::FloatVector tmp3 = this->rawData;
	Float tmp4 = tmp3->get((int)13);
	Float tmp5 = tmp4;
	::openfl::_Vector::FloatVector tmp6 = this->rawData;
	Float tmp7 = tmp6->get((int)14);
	Float tmp8 = tmp7;
	::openfl::geom::Vector3D tmp9 = ::openfl::geom::Vector3D_obj::__new(tmp2,tmp5,tmp8,null());
	return tmp9;
}


HX_DEFINE_DYNAMIC_FUNC0(Matrix3D_obj,get_position,return )

::openfl::geom::Vector3D Matrix3D_obj::set_position( ::openfl::geom::Vector3D val){
	::openfl::_Vector::FloatVector tmp = this->rawData;
	Float tmp1 = val->x;
	Float tmp2 = tmp->set((int)12,tmp1);
	tmp2;
	::openfl::_Vector::FloatVector tmp3 = this->rawData;
	Float tmp4 = val->y;
	Float tmp5 = tmp3->set((int)13,tmp4);
	tmp5;
	::openfl::_Vector::FloatVector tmp6 = this->rawData;
	Float tmp7 = val->z;
	Float tmp8 = tmp6->set((int)14,tmp7);
	tmp8;
	::openfl::geom::Vector3D tmp9 = val;
	return tmp9;
}


HX_DEFINE_DYNAMIC_FUNC1(Matrix3D_obj,set_position,return )

::openfl::geom::Matrix3D Matrix3D_obj::create2D( Float x,Float y,hx::Null< Float >  __o_scale,hx::Null< Float >  __o_rotation){
Float scale = __o_scale.Default(1);
Float rotation = __o_rotation.Default(0);
{
		Float tmp = rotation;
		Float tmp1 = ::Math_obj::PI;
		Float tmp2 = (tmp * tmp1);
		Float tmp3 = (Float(tmp2) / Float(((Float)180.0)));
		Float theta = tmp3;
		Float tmp4 = theta;
		Float tmp5 = ::Math_obj::cos(tmp4);
		Float c = tmp5;
		Float tmp6 = theta;
		Float tmp7 = ::Math_obj::sin(tmp6);
		Float s = tmp7;
		::openfl::_Vector::FloatVector tmp8;
		{
			Float tmp9 = (c * scale);
			Float tmp10 = s;
			Float tmp11 = -(tmp10);
			Float tmp12 = scale;
			Float tmp13 = (tmp11 * tmp12);
			Float tmp14 = (s * scale);
			Float tmp15 = (c * scale);
			Float tmp16 = x;
			Float tmp17 = y;
			Array< Float > a = Array_obj< Float >::__new().Add(tmp9).Add(tmp13).Add((int)0).Add((int)0).Add(tmp14).Add(tmp15).Add((int)0).Add((int)0).Add((int)0).Add((int)0).Add((int)1).Add((int)0).Add(tmp16).Add(tmp17).Add((int)0).Add((int)1);
			::openfl::_Vector::FloatVector tmp18;
			{
				int length = null();
				bool fixed = null();
				::openfl::_Vector::FloatVector tmp19 = ::openfl::_Vector::FloatVector_obj::__new(length,fixed,null());
				::openfl::_Vector::FloatVector tmp20 = tmp19;
				tmp18 = tmp20;
			}
			::openfl::_Vector::FloatVector vector = tmp18;
			{
				int _g1 = (int)0;
				int _g = a->length;
				while((true)){
					bool tmp19 = (_g1 < _g);
					bool tmp20 = !(tmp19);
					if ((tmp20)){
						break;
					}
					int tmp21 = (_g1)++;
					int i = tmp21;
					int tmp22 = i;
					Float tmp23 = a->__get(i);
					Float tmp24 = tmp23;
					Float tmp25 = vector->set(tmp22,tmp24);
					tmp25;
				}
			}
			tmp8 = vector;
		}
		::openfl::geom::Matrix3D tmp9 = ::openfl::geom::Matrix3D_obj::__new(tmp8);
		return tmp9;
	}
}


STATIC_HX_DEFINE_DYNAMIC_FUNC4(Matrix3D_obj,create2D,return )

::openfl::geom::Matrix3D Matrix3D_obj::createABCD( Float a,Float b,Float c,Float d,Float tx,Float ty){
	::openfl::_Vector::FloatVector tmp;
	{
		Array< Float > a1 = Array_obj< Float >::__new().Add(a).Add(b).Add((int)0).Add((int)0).Add(c).Add(d).Add((int)0).Add((int)0).Add((int)0).Add((int)0).Add((int)1).Add((int)0).Add(tx).Add(ty).Add((int)0).Add((int)1);
		::openfl::_Vector::FloatVector tmp1;
		{
			int length = null();
			bool fixed = null();
			::openfl::_Vector::FloatVector tmp2 = ::openfl::_Vector::FloatVector_obj::__new(length,fixed,null());
			::openfl::_Vector::FloatVector tmp3 = tmp2;
			tmp1 = tmp3;
		}
		::openfl::_Vector::FloatVector vector = tmp1;
		{
			int _g1 = (int)0;
			int _g = a1->length;
			while((true)){
				bool tmp2 = (_g1 < _g);
				bool tmp3 = !(tmp2);
				if ((tmp3)){
					break;
				}
				int tmp4 = (_g1)++;
				int i = tmp4;
				int tmp5 = i;
				Float tmp6 = a1->__get(i);
				Float tmp7 = tmp6;
				Float tmp8 = vector->set(tmp5,tmp7);
				tmp8;
			}
		}
		tmp = vector;
	}
	::openfl::geom::Matrix3D tmp1 = ::openfl::geom::Matrix3D_obj::__new(tmp);
	return tmp1;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC6(Matrix3D_obj,createABCD,return )

::openfl::geom::Matrix3D Matrix3D_obj::createOrtho( Float x0,Float x1,Float y0,Float y1,Float zNear,Float zFar){
	Float tmp = (x1 - x0);
	Float tmp1 = (Float(((Float)1.0)) / Float(tmp));
	Float sx = tmp1;
	Float tmp2 = (y1 - y0);
	Float tmp3 = (Float(((Float)1.0)) / Float(tmp2));
	Float sy = tmp3;
	Float tmp4 = (zFar - zNear);
	Float tmp5 = (Float(((Float)1.0)) / Float(tmp4));
	Float sz = tmp5;
	::openfl::_Vector::FloatVector tmp6;
	{
		Float tmp7 = (((Float)2.0) * sx);
		Float tmp8 = (((Float)2.0) * sy);
		Float tmp9 = (((Float)-2.) * sz);
		Float tmp10 = (x0 + x1);
		Float tmp11 = -(tmp10);
		Float tmp12 = sx;
		Float tmp13 = (tmp11 * tmp12);
		Float tmp14 = (y0 + y1);
		Float tmp15 = -(tmp14);
		Float tmp16 = sy;
		Float tmp17 = (tmp15 * tmp16);
		Float tmp18 = (zNear + zFar);
		Float tmp19 = -(tmp18);
		Float tmp20 = sz;
		Float tmp21 = (tmp19 * tmp20);
		Array< Float > a = Array_obj< Float >::__new().Add(tmp7).Add((int)0).Add((int)0).Add((int)0).Add((int)0).Add(tmp8).Add((int)0).Add((int)0).Add((int)0).Add((int)0).Add(tmp9).Add((int)0).Add(tmp13).Add(tmp17).Add(tmp21).Add((int)1);
		::openfl::_Vector::FloatVector tmp22;
		{
			int length = null();
			bool fixed = null();
			::openfl::_Vector::FloatVector tmp23 = ::openfl::_Vector::FloatVector_obj::__new(length,fixed,null());
			::openfl::_Vector::FloatVector tmp24 = tmp23;
			tmp22 = tmp24;
		}
		::openfl::_Vector::FloatVector vector = tmp22;
		{
			int _g1 = (int)0;
			int _g = a->length;
			while((true)){
				bool tmp23 = (_g1 < _g);
				bool tmp24 = !(tmp23);
				if ((tmp24)){
					break;
				}
				int tmp25 = (_g1)++;
				int i = tmp25;
				int tmp26 = i;
				Float tmp27 = a->__get(i);
				Float tmp28 = tmp27;
				Float tmp29 = vector->set(tmp26,tmp28);
				tmp29;
			}
		}
		tmp6 = vector;
	}
	::openfl::geom::Matrix3D tmp7 = ::openfl::geom::Matrix3D_obj::__new(tmp6);
	return tmp7;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC6(Matrix3D_obj,createOrtho,return )

::openfl::geom::Matrix3D Matrix3D_obj::interpolate( ::openfl::geom::Matrix3D thisMat,::openfl::geom::Matrix3D toMat,Float percent){
	::openfl::geom::Matrix3D tmp = ::openfl::geom::Matrix3D_obj::__new(null());
	::openfl::geom::Matrix3D m = tmp;
	{
		int _g = (int)0;
		while((true)){
			bool tmp1 = (_g < (int)16);
			bool tmp2 = !(tmp1);
			if ((tmp2)){
				break;
			}
			int tmp3 = (_g)++;
			int i = tmp3;
			{
				int tmp4 = i;
				Float tmp5 = thisMat->rawData->get(tmp4);
				Float tmp6 = tmp5;
				int tmp7 = i;
				Float tmp8 = toMat->rawData->get(tmp7);
				Float tmp9 = tmp8;
				int tmp10 = i;
				Float tmp11 = thisMat->rawData->get(tmp10);
				Float tmp12 = tmp11;
				Float tmp13 = (tmp9 - tmp12);
				Float tmp14 = percent;
				Float tmp15 = (tmp13 * tmp14);
				Float tmp16 = (tmp6 + tmp15);
				Float value = tmp16;
				int tmp17 = i;
				Float tmp18 = value;
				m->rawData->set(tmp17,tmp18);
			}
		}
	}
	::openfl::geom::Matrix3D tmp1 = m;
	return tmp1;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC3(Matrix3D_obj,interpolate,return )

::openfl::geom::Matrix3D Matrix3D_obj::__getAxisRotation( Float x,Float y,Float z,Float degrees){
	::openfl::geom::Matrix3D tmp = ::openfl::geom::Matrix3D_obj::__new(null());
	::openfl::geom::Matrix3D m = tmp;
	::openfl::geom::Vector3D tmp1 = ::openfl::geom::Vector3D_obj::__new(x,y,z,null());
	::openfl::geom::Vector3D a1 = tmp1;
	Float tmp2 = degrees;
	Float tmp3 = -(tmp2);
	Float tmp4 = ::Math_obj::PI;
	Float tmp5 = (Float(tmp4) / Float((int)180));
	Float tmp6 = (tmp3 * tmp5);
	Float rad = tmp6;
	Float tmp7 = rad;
	Float tmp8 = ::Math_obj::cos(tmp7);
	Float c = tmp8;
	Float tmp9 = rad;
	Float tmp10 = ::Math_obj::sin(tmp9);
	Float s = tmp10;
	Float tmp11 = (((Float)1.0) - c);
	Float t = tmp11;
	Float tmp12 = c;
	Float tmp13 = (a1->x * a1->x);
	Float tmp14 = t;
	Float tmp15 = (tmp13 * tmp14);
	Float tmp16 = (tmp12 + tmp15);
	Float tmp17 = m->rawData->set((int)0,tmp16);
	tmp17;
	Float tmp18 = c;
	Float tmp19 = (a1->y * a1->y);
	Float tmp20 = t;
	Float tmp21 = (tmp19 * tmp20);
	Float tmp22 = (tmp18 + tmp21);
	Float tmp23 = m->rawData->set((int)5,tmp22);
	tmp23;
	Float tmp24 = c;
	Float tmp25 = (a1->z * a1->z);
	Float tmp26 = t;
	Float tmp27 = (tmp25 * tmp26);
	Float tmp28 = (tmp24 + tmp27);
	Float tmp29 = m->rawData->set((int)10,tmp28);
	tmp29;
	Float tmp30 = (a1->x * a1->y);
	Float tmp31 = t;
	Float tmp32 = (tmp30 * tmp31);
	Float tmp110 = tmp32;
	Float tmp33 = (a1->z * s);
	Float tmp210 = tmp33;
	Float tmp34 = (tmp110 + tmp210);
	Float tmp35 = m->rawData->set((int)4,tmp34);
	tmp35;
	Float tmp36 = (tmp110 - tmp210);
	Float tmp37 = m->rawData->set((int)1,tmp36);
	tmp37;
	Float tmp38 = (a1->x * a1->z);
	Float tmp39 = t;
	Float tmp40 = (tmp38 * tmp39);
	tmp110 = tmp40;
	Float tmp41 = (a1->y * s);
	tmp210 = tmp41;
	Float tmp42 = (tmp110 - tmp210);
	Float tmp43 = m->rawData->set((int)8,tmp42);
	tmp43;
	Float tmp44 = (tmp110 + tmp210);
	Float tmp45 = m->rawData->set((int)2,tmp44);
	tmp45;
	Float tmp46 = (a1->y * a1->z);
	Float tmp47 = t;
	Float tmp48 = (tmp46 * tmp47);
	tmp110 = tmp48;
	Float tmp49 = (a1->x * s);
	tmp210 = tmp49;
	Float tmp50 = (tmp110 + tmp210);
	Float tmp51 = m->rawData->set((int)9,tmp50);
	tmp51;
	Float tmp52 = (tmp110 - tmp210);
	Float tmp53 = m->rawData->set((int)6,tmp52);
	tmp53;
	::openfl::geom::Matrix3D tmp54 = m;
	return tmp54;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC4(Matrix3D_obj,__getAxisRotation,return )


Matrix3D_obj::Matrix3D_obj()
{
}

void Matrix3D_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(Matrix3D);
	HX_MARK_MEMBER_NAME(rawData,"rawData");
	HX_MARK_END_CLASS();
}

void Matrix3D_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(rawData,"rawData");
}

Dynamic Matrix3D_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"clone") ) { return clone_dyn(); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"append") ) { return append_dyn(); }
		if (HX_FIELD_EQ(inName,"invert") ) { return invert_dyn(); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"rawData") ) { return rawData; }
		if (HX_FIELD_EQ(inName,"pointAt") ) { return pointAt_dyn(); }
		if (HX_FIELD_EQ(inName,"prepend") ) { return prepend_dyn(); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"position") ) { if (inCallProp == hx::paccAlways) return get_position(); }
		if (HX_FIELD_EQ(inName,"copyFrom") ) { return copyFrom_dyn(); }
		if (HX_FIELD_EQ(inName,"identity") ) { return identity_dyn(); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"copyRowTo") ) { return copyRowTo_dyn(); }
		if (HX_FIELD_EQ(inName,"decompose") ) { return decompose_dyn(); }
		if (HX_FIELD_EQ(inName,"recompose") ) { return recompose_dyn(); }
		if (HX_FIELD_EQ(inName,"transpose") ) { return transpose_dyn(); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"determinant") ) { if (inCallProp == hx::paccAlways) return get_determinant(); }
		if (HX_FIELD_EQ(inName,"appendScale") ) { return appendScale_dyn(); }
		if (HX_FIELD_EQ(inName,"copyRowFrom") ) { return copyRowFrom_dyn(); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"copyColumnTo") ) { return copyColumnTo_dyn(); }
		if (HX_FIELD_EQ(inName,"prependScale") ) { return prependScale_dyn(); }
		if (HX_FIELD_EQ(inName,"get_position") ) { return get_position_dyn(); }
		if (HX_FIELD_EQ(inName,"set_position") ) { return set_position_dyn(); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"copyRawDataTo") ) { return copyRawDataTo_dyn(); }
		if (HX_FIELD_EQ(inName,"interpolateTo") ) { return interpolateTo_dyn(); }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"appendRotation") ) { return appendRotation_dyn(); }
		if (HX_FIELD_EQ(inName,"copyColumnFrom") ) { return copyColumnFrom_dyn(); }
		if (HX_FIELD_EQ(inName,"copyToMatrix3D") ) { return copyToMatrix3D_dyn(); }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"copyRawDataFrom") ) { return copyRawDataFrom_dyn(); }
		if (HX_FIELD_EQ(inName,"prependRotation") ) { return prependRotation_dyn(); }
		if (HX_FIELD_EQ(inName,"transformVector") ) { return transformVector_dyn(); }
		if (HX_FIELD_EQ(inName,"get_determinant") ) { return get_determinant_dyn(); }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"transformVectors") ) { return transformVectors_dyn(); }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"appendTranslation") ) { return appendTranslation_dyn(); }
		break;
	case 18:
		if (HX_FIELD_EQ(inName,"prependTranslation") ) { return prependTranslation_dyn(); }
		break;
	case 20:
		if (HX_FIELD_EQ(inName,"deltaTransformVector") ) { return deltaTransformVector_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

bool Matrix3D_obj::__GetStatic(const ::String &inName, Dynamic &outValue, hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 8:
		if (HX_FIELD_EQ(inName,"create2D") ) { outValue = create2D_dyn(); return true;  }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"createABCD") ) { outValue = createABCD_dyn(); return true;  }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"createOrtho") ) { outValue = createOrtho_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"interpolate") ) { outValue = interpolate_dyn(); return true;  }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"__getAxisRotation") ) { outValue = __getAxisRotation_dyn(); return true;  }
	}
	return false;
}

Dynamic Matrix3D_obj::__SetField(const ::String &inName,const Dynamic &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 7:
		if (HX_FIELD_EQ(inName,"rawData") ) { rawData=inValue.Cast< ::openfl::_Vector::FloatVector >(); return inValue; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"position") ) { if (inCallProp == hx::paccAlways) return set_position(inValue); }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void Matrix3D_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("determinant","\x95","\x5d","\x15","\x32"));
	outFields->push(HX_HCSTRING("position","\xa9","\xa0","\xfa","\xca"));
	outFields->push(HX_HCSTRING("rawData","\x32","\x6c","\x18","\xff"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsObject /*::openfl::_Vector::FloatVector*/ ,(int)offsetof(Matrix3D_obj,rawData),HX_HCSTRING("rawData","\x32","\x6c","\x18","\xff")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo *sStaticStorageInfo = 0;
#endif

static ::String sMemberFields[] = {
	HX_HCSTRING("rawData","\x32","\x6c","\x18","\xff"),
	HX_HCSTRING("append","\xda","\xe1","\xd3","\x8f"),
	HX_HCSTRING("appendRotation","\x38","\x45","\xe8","\xcb"),
	HX_HCSTRING("appendScale","\x50","\x66","\x45","\xb5"),
	HX_HCSTRING("appendTranslation","\x37","\xe1","\x3d","\xd6"),
	HX_HCSTRING("clone","\x5d","\x13","\x63","\x48"),
	HX_HCSTRING("copyColumnFrom","\x75","\x97","\xb5","\x3a"),
	HX_HCSTRING("copyColumnTo","\xc6","\x2e","\xf6","\xf6"),
	HX_HCSTRING("copyFrom","\xbf","\x0b","\x61","\xc8"),
	HX_HCSTRING("copyRawDataFrom","\x07","\x7d","\xbd","\x2c"),
	HX_HCSTRING("copyRawDataTo","\xd8","\x2b","\xf7","\xa8"),
	HX_HCSTRING("copyRowFrom","\x6f","\x45","\x8b","\xef"),
	HX_HCSTRING("copyRowTo","\x40","\x8a","\x62","\x73"),
	HX_HCSTRING("copyToMatrix3D","\xe2","\x1d","\x1f","\x04"),
	HX_HCSTRING("decompose","\xb1","\xc3","\xa7","\x7a"),
	HX_HCSTRING("deltaTransformVector","\x37","\x02","\x9c","\xc2"),
	HX_HCSTRING("identity","\x3e","\x45","\x2f","\xb9"),
	HX_HCSTRING("interpolateTo","\x9c","\x90","\x22","\x71"),
	HX_HCSTRING("invert","\x16","\xe7","\xd8","\x9f"),
	HX_HCSTRING("pointAt","\x63","\xa1","\x21","\x51"),
	HX_HCSTRING("prepend","\x0e","\x97","\xe0","\x37"),
	HX_HCSTRING("prependRotation","\x6c","\x4e","\x3b","\xe8"),
	HX_HCSTRING("prependScale","\x9c","\x54","\x97","\xc4"),
	HX_HCSTRING("prependTranslation","\x83","\x90","\x15","\x05"),
	HX_HCSTRING("recompose","\xbf","\x81","\xdb","\x03"),
	HX_HCSTRING("transformVector","\x4f","\x2b","\xb3","\xd2"),
	HX_HCSTRING("transformVectors","\x44","\xba","\x12","\x8a"),
	HX_HCSTRING("transpose","\x79","\x50","\x2f","\x4c"),
	HX_HCSTRING("get_determinant","\x2c","\x15","\xf7","\xf2"),
	HX_HCSTRING("get_position","\xb2","\x54","\x14","\x80"),
	HX_HCSTRING("set_position","\x26","\x78","\x0d","\x95"),
	::String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(Matrix3D_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(Matrix3D_obj::__mClass,"__mClass");
};

#endif

hx::Class Matrix3D_obj::__mClass;

static ::String sStaticFields[] = {
	HX_HCSTRING("create2D","\xce","\x49","\xf4","\x2b"),
	HX_HCSTRING("createABCD","\xbe","\xc2","\xdd","\x52"),
	HX_HCSTRING("createOrtho","\x9c","\x4e","\xa8","\x5e"),
	HX_HCSTRING("interpolate","\xc1","\xd4","\x32","\x1f"),
	HX_HCSTRING("__getAxisRotation","\x95","\xa5","\x44","\x7b"),
	::String(null()) };

void Matrix3D_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("openfl.geom.Matrix3D","\xe6","\x93","\x2e","\x3d");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &Matrix3D_obj::__GetStatic;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(sStaticFields);
	__mClass->mMembers = hx::Class_obj::dupFunctions(sMemberFields);
	__mClass->mCanCast = hx::TCanCast< Matrix3D_obj >;
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
