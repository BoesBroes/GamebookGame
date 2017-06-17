#include <hxcpp.h>

#include "hxMath.h"
#ifndef INCLUDED_Std
#include <Std.h>
#endif
#ifndef INCLUDED_openfl__internal_utils_PerlinNoise
#include <openfl/_internal/utils/PerlinNoise.h>
#endif
#ifndef INCLUDED_openfl_display_BitmapData
#include <openfl/display/BitmapData.h>
#endif
#ifndef INCLUDED_openfl_display_IBitmapDrawable
#include <openfl/display/IBitmapDrawable.h>
#endif
namespace openfl{
namespace _internal{
namespace utils{

Void PerlinNoise_obj::__construct(Dynamic seed,Dynamic octaves,Dynamic falloff)
{
{
	bool tmp = (seed == null());
	if ((tmp)){
		seed = (int)123;
	}
	bool tmp1 = (falloff == null());
	if ((tmp1)){
		falloff = ((Float).5);
	}
	bool tmp2 = (octaves == null());
	int tmp3;
	if ((tmp2)){
		tmp3 = (int)4;
	}
	else{
		tmp3 = octaves;
	}
	this->octaves = tmp3;
	Float tmp4 = ((Float)0.015625);
	this->baseFactor = tmp4;
	Dynamic tmp5 = seed;
	this->seedOffset(tmp5);
	Dynamic tmp6 = falloff;
	this->octFreqPers(tmp6);
}
;
	return null();
}

//PerlinNoise_obj::~PerlinNoise_obj() { }

Dynamic PerlinNoise_obj::__CreateEmpty() { return  new PerlinNoise_obj; }
hx::ObjectPtr< PerlinNoise_obj > PerlinNoise_obj::__new(Dynamic seed,Dynamic octaves,Dynamic falloff)
{  hx::ObjectPtr< PerlinNoise_obj > _result_ = new PerlinNoise_obj();
	_result_->__construct(seed,octaves,falloff);
	return _result_;}

Dynamic PerlinNoise_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< PerlinNoise_obj > _result_ = new PerlinNoise_obj();
	_result_->__construct(inArgs[0],inArgs[1],inArgs[2]);
	return _result_;}

Void PerlinNoise_obj::fill( ::openfl::display::BitmapData bitmap,Float _x,Float _y,Float _z,Dynamic _){
{
		Float baseX;
		Float tmp = _x;
		Float tmp1 = this->baseFactor;
		Float tmp2 = (tmp * tmp1);
		Float tmp3 = this->iXoffset;
		Float tmp4 = (tmp2 + tmp3);
		baseX = tmp4;
		Float tmp5 = _y;
		Float tmp6 = this->baseFactor;
		Float tmp7 = (tmp5 * tmp6);
		Float tmp8 = this->iYoffset;
		Float tmp9 = (tmp7 + tmp8);
		_y = tmp9;
		Float tmp10 = _z;
		Float tmp11 = this->baseFactor;
		Float tmp12 = (tmp10 * tmp11);
		Float tmp13 = this->iZoffset;
		Float tmp14 = (tmp12 + tmp13);
		_z = tmp14;
		int width = bitmap->width;
		int height = bitmap->height;
		Array< int > p = ::openfl::_internal::utils::PerlinNoise_obj::P;
		int tmp15 = this->octaves;
		int octaves = tmp15;
		Array< Float > aOctFreq = this->aOctFreq;
		Array< Float > aOctPers = this->aOctPers;
		{
			int _g = (int)0;
			while((true)){
				bool tmp16 = (_g < height);
				bool tmp17 = !(tmp16);
				if ((tmp17)){
					break;
				}
				int tmp18 = (_g)++;
				int py = tmp18;
				_x = baseX;
				{
					int _g1 = (int)0;
					while((true)){
						bool tmp19 = (_g1 < width);
						bool tmp20 = !(tmp19);
						if ((tmp20)){
							break;
						}
						int tmp21 = (_g1)++;
						int px = tmp21;
						Float s = ((Float)0.);
						{
							int _g2 = (int)0;
							while((true)){
								bool tmp22 = (_g2 < octaves);
								bool tmp23 = !(tmp22);
								if ((tmp23)){
									break;
								}
								int tmp24 = (_g2)++;
								int i = tmp24;
								Float tmp25 = aOctFreq->__get(i);
								Float fFreq = tmp25;
								Float tmp26 = aOctPers->__get(i);
								Float fPers = tmp26;
								Float tmp27 = (_x * fFreq);
								Float x = tmp27;
								Float tmp28 = (_y * fFreq);
								Float y = tmp28;
								Float tmp29 = (_z * fFreq);
								Float z = tmp29;
								Float tmp30 = x;
								Float tmp31 = hx::Mod(x,(int)1);
								Float tmp32 = (tmp30 - tmp31);
								Float xf = tmp32;
								Float tmp33 = y;
								Float tmp34 = hx::Mod(y,(int)1);
								Float tmp35 = (tmp33 - tmp34);
								Float yf = tmp35;
								Float tmp36 = z;
								Float tmp37 = hx::Mod(z,(int)1);
								Float tmp38 = (tmp36 - tmp37);
								Float zf = tmp38;
								Float tmp39 = xf;
								int tmp40 = ::Std_obj::_int(tmp39);
								int tmp41 = (int(tmp40) & int((int)255));
								int X = tmp41;
								Float tmp42 = yf;
								int tmp43 = ::Std_obj::_int(tmp42);
								int tmp44 = (int(tmp43) & int((int)255));
								int Y = tmp44;
								Float tmp45 = zf;
								int tmp46 = ::Std_obj::_int(tmp45);
								int tmp47 = (int(tmp46) & int((int)255));
								int Z = tmp47;
								hx::SubEq(x,xf);
								hx::SubEq(y,yf);
								hx::SubEq(z,zf);
								Float tmp48 = (x * x);
								Float tmp49 = x;
								Float tmp50 = (tmp48 * tmp49);
								Float tmp51 = x;
								Float tmp52 = (x * (int)6);
								Float tmp53 = (tmp52 - (int)15);
								Float tmp54 = (tmp51 * tmp53);
								Float tmp55 = (tmp54 + (int)10);
								Float tmp56 = (tmp50 * tmp55);
								Float u = tmp56;
								Float tmp57 = (y * y);
								Float tmp58 = y;
								Float tmp59 = (tmp57 * tmp58);
								Float tmp60 = y;
								Float tmp61 = (y * (int)6);
								Float tmp62 = (tmp61 - (int)15);
								Float tmp63 = (tmp60 * tmp62);
								Float tmp64 = (tmp63 + (int)10);
								Float tmp65 = (tmp59 * tmp64);
								Float v = tmp65;
								Float tmp66 = (z * z);
								Float tmp67 = z;
								Float tmp68 = (tmp66 * tmp67);
								Float tmp69 = z;
								Float tmp70 = (z * (int)6);
								Float tmp71 = (tmp70 - (int)15);
								Float tmp72 = (tmp69 * tmp71);
								Float tmp73 = (tmp72 + (int)10);
								Float tmp74 = (tmp68 * tmp73);
								Float w = tmp74;
								int tmp75 = p->__get(X);
								int tmp76 = Y;
								int tmp77 = (tmp75 + tmp76);
								int A = tmp77;
								int tmp78 = p->__get(A);
								int tmp79 = Z;
								int tmp80 = (tmp78 + tmp79);
								int AA = tmp80;
								int tmp81 = (A + (int)1);
								int tmp82 = p->__get(tmp81);
								int tmp83 = Z;
								int tmp84 = (tmp82 + tmp83);
								int AB = tmp84;
								int tmp85 = (X + (int)1);
								int tmp86 = p->__get(tmp85);
								int tmp87 = Y;
								int tmp88 = (tmp86 + tmp87);
								int B = tmp88;
								int tmp89 = p->__get(B);
								int tmp90 = Z;
								int tmp91 = (tmp89 + tmp90);
								int BA = tmp91;
								int tmp92 = (B + (int)1);
								int tmp93 = p->__get(tmp92);
								int tmp94 = Z;
								int tmp95 = (tmp93 + tmp94);
								int BB = tmp95;
								Float tmp96 = (x - (int)1);
								Float x1 = tmp96;
								Float tmp97 = (y - (int)1);
								Float y1 = tmp97;
								Float tmp98 = (z - (int)1);
								Float z1 = tmp98;
								int tmp99 = (BB + (int)1);
								int tmp100 = p->__get(tmp99);
								int tmp101 = (int(tmp100) & int((int)15));
								int hash = tmp101;
								int tmp102 = (int(hash) & int((int)1));
								bool tmp103 = (tmp102 == (int)0);
								Float tmp104;
								if ((tmp103)){
									bool tmp105 = (hash < (int)8);
									if ((tmp105)){
										tmp104 = x1;
									}
									else{
										tmp104 = y1;
									}
								}
								else{
									bool tmp105 = (hash < (int)8);
									if ((tmp105)){
										Float tmp106 = x1;
										tmp104 = -(tmp106);
									}
									else{
										Float tmp106 = y1;
										tmp104 = -(tmp106);
									}
								}
								int tmp105 = (int(hash) & int((int)2));
								bool tmp106 = (tmp105 == (int)0);
								Float tmp107;
								if ((tmp106)){
									bool tmp108 = (hash < (int)4);
									if ((tmp108)){
										tmp107 = y1;
									}
									else{
										bool tmp109 = (hash == (int)12);
										if ((tmp109)){
											tmp107 = x1;
										}
										else{
											tmp107 = z1;
										}
									}
								}
								else{
									bool tmp108 = (hash < (int)4);
									if ((tmp108)){
										Float tmp109 = y1;
										tmp107 = -(tmp109);
									}
									else{
										bool tmp109 = (hash == (int)14);
										if ((tmp109)){
											Float tmp110 = x1;
											tmp107 = -(tmp110);
										}
										else{
											Float tmp110 = z1;
											tmp107 = -(tmp110);
										}
									}
								}
								Float tmp108 = (tmp104 + tmp107);
								Float g1 = tmp108;
								int tmp109 = (AB + (int)1);
								int tmp110 = p->__get(tmp109);
								int tmp111 = (int(tmp110) & int((int)15));
								hash = tmp111;
								int tmp112 = (int(hash) & int((int)1));
								bool tmp113 = (tmp112 == (int)0);
								Float tmp114;
								if ((tmp113)){
									bool tmp115 = (hash < (int)8);
									if ((tmp115)){
										tmp114 = x;
									}
									else{
										tmp114 = y1;
									}
								}
								else{
									bool tmp115 = (hash < (int)8);
									if ((tmp115)){
										Float tmp116 = x;
										tmp114 = -(tmp116);
									}
									else{
										Float tmp116 = y1;
										tmp114 = -(tmp116);
									}
								}
								int tmp115 = (int(hash) & int((int)2));
								bool tmp116 = (tmp115 == (int)0);
								Float tmp117;
								if ((tmp116)){
									bool tmp118 = (hash < (int)4);
									if ((tmp118)){
										tmp117 = y1;
									}
									else{
										bool tmp119 = (hash == (int)12);
										if ((tmp119)){
											tmp117 = x;
										}
										else{
											tmp117 = z1;
										}
									}
								}
								else{
									bool tmp118 = (hash < (int)4);
									if ((tmp118)){
										Float tmp119 = y1;
										tmp117 = -(tmp119);
									}
									else{
										bool tmp119 = (hash == (int)14);
										if ((tmp119)){
											Float tmp120 = x;
											tmp117 = -(tmp120);
										}
										else{
											Float tmp120 = z1;
											tmp117 = -(tmp120);
										}
									}
								}
								Float tmp118 = (tmp114 + tmp117);
								Float g2 = tmp118;
								int tmp119 = (BA + (int)1);
								int tmp120 = p->__get(tmp119);
								int tmp121 = (int(tmp120) & int((int)15));
								hash = tmp121;
								int tmp122 = (int(hash) & int((int)1));
								bool tmp123 = (tmp122 == (int)0);
								Float tmp124;
								if ((tmp123)){
									bool tmp125 = (hash < (int)8);
									if ((tmp125)){
										tmp124 = x1;
									}
									else{
										tmp124 = y;
									}
								}
								else{
									bool tmp125 = (hash < (int)8);
									if ((tmp125)){
										Float tmp126 = x1;
										tmp124 = -(tmp126);
									}
									else{
										Float tmp126 = y;
										tmp124 = -(tmp126);
									}
								}
								int tmp125 = (int(hash) & int((int)2));
								bool tmp126 = (tmp125 == (int)0);
								Float tmp127;
								if ((tmp126)){
									bool tmp128 = (hash < (int)4);
									if ((tmp128)){
										tmp127 = y;
									}
									else{
										bool tmp129 = (hash == (int)12);
										if ((tmp129)){
											tmp127 = x1;
										}
										else{
											tmp127 = z1;
										}
									}
								}
								else{
									bool tmp128 = (hash < (int)4);
									if ((tmp128)){
										Float tmp129 = y;
										tmp127 = -(tmp129);
									}
									else{
										bool tmp129 = (hash == (int)14);
										if ((tmp129)){
											Float tmp130 = x1;
											tmp127 = -(tmp130);
										}
										else{
											Float tmp130 = z1;
											tmp127 = -(tmp130);
										}
									}
								}
								Float tmp128 = (tmp124 + tmp127);
								Float g3 = tmp128;
								int tmp129 = (AA + (int)1);
								int tmp130 = p->__get(tmp129);
								int tmp131 = (int(tmp130) & int((int)15));
								hash = tmp131;
								int tmp132 = (int(hash) & int((int)1));
								bool tmp133 = (tmp132 == (int)0);
								Float tmp134;
								if ((tmp133)){
									bool tmp135 = (hash < (int)8);
									if ((tmp135)){
										tmp134 = x;
									}
									else{
										tmp134 = y;
									}
								}
								else{
									bool tmp135 = (hash < (int)8);
									if ((tmp135)){
										Float tmp136 = x;
										tmp134 = -(tmp136);
									}
									else{
										Float tmp136 = y;
										tmp134 = -(tmp136);
									}
								}
								int tmp135 = (int(hash) & int((int)2));
								bool tmp136 = (tmp135 == (int)0);
								Float tmp137;
								if ((tmp136)){
									bool tmp138 = (hash < (int)4);
									if ((tmp138)){
										tmp137 = y;
									}
									else{
										bool tmp139 = (hash == (int)12);
										if ((tmp139)){
											tmp137 = x;
										}
										else{
											tmp137 = z1;
										}
									}
								}
								else{
									bool tmp138 = (hash < (int)4);
									if ((tmp138)){
										Float tmp139 = y;
										tmp137 = -(tmp139);
									}
									else{
										bool tmp139 = (hash == (int)14);
										if ((tmp139)){
											Float tmp140 = x;
											tmp137 = -(tmp140);
										}
										else{
											Float tmp140 = z1;
											tmp137 = -(tmp140);
										}
									}
								}
								Float tmp138 = (tmp134 + tmp137);
								Float g4 = tmp138;
								int tmp139 = p->__get(BB);
								int tmp140 = (int(tmp139) & int((int)15));
								hash = tmp140;
								int tmp141 = (int(hash) & int((int)1));
								bool tmp142 = (tmp141 == (int)0);
								Float tmp143;
								if ((tmp142)){
									bool tmp144 = (hash < (int)8);
									if ((tmp144)){
										tmp143 = x1;
									}
									else{
										tmp143 = y1;
									}
								}
								else{
									bool tmp144 = (hash < (int)8);
									if ((tmp144)){
										Float tmp145 = x1;
										tmp143 = -(tmp145);
									}
									else{
										Float tmp145 = y1;
										tmp143 = -(tmp145);
									}
								}
								int tmp144 = (int(hash) & int((int)2));
								bool tmp145 = (tmp144 == (int)0);
								Float tmp146;
								if ((tmp145)){
									bool tmp147 = (hash < (int)4);
									if ((tmp147)){
										tmp146 = y1;
									}
									else{
										bool tmp148 = (hash == (int)12);
										if ((tmp148)){
											tmp146 = x1;
										}
										else{
											tmp146 = z;
										}
									}
								}
								else{
									bool tmp147 = (hash < (int)4);
									if ((tmp147)){
										Float tmp148 = y1;
										tmp146 = -(tmp148);
									}
									else{
										bool tmp148 = (hash == (int)14);
										if ((tmp148)){
											Float tmp149 = x1;
											tmp146 = -(tmp149);
										}
										else{
											Float tmp149 = z;
											tmp146 = -(tmp149);
										}
									}
								}
								Float tmp147 = (tmp143 + tmp146);
								Float g5 = tmp147;
								int tmp148 = p->__get(AB);
								int tmp149 = (int(tmp148) & int((int)15));
								hash = tmp149;
								int tmp150 = (int(hash) & int((int)1));
								bool tmp151 = (tmp150 == (int)0);
								Float tmp152;
								if ((tmp151)){
									bool tmp153 = (hash < (int)8);
									if ((tmp153)){
										tmp152 = x;
									}
									else{
										tmp152 = y1;
									}
								}
								else{
									bool tmp153 = (hash < (int)8);
									if ((tmp153)){
										Float tmp154 = x;
										tmp152 = -(tmp154);
									}
									else{
										Float tmp154 = y1;
										tmp152 = -(tmp154);
									}
								}
								int tmp153 = (int(hash) & int((int)2));
								bool tmp154 = (tmp153 == (int)0);
								Float tmp155;
								if ((tmp154)){
									bool tmp156 = (hash < (int)4);
									if ((tmp156)){
										tmp155 = y1;
									}
									else{
										bool tmp157 = (hash == (int)12);
										if ((tmp157)){
											tmp155 = x;
										}
										else{
											tmp155 = z;
										}
									}
								}
								else{
									bool tmp156 = (hash < (int)4);
									if ((tmp156)){
										Float tmp157 = y1;
										tmp155 = -(tmp157);
									}
									else{
										bool tmp157 = (hash == (int)14);
										if ((tmp157)){
											Float tmp158 = x;
											tmp155 = -(tmp158);
										}
										else{
											Float tmp158 = z;
											tmp155 = -(tmp158);
										}
									}
								}
								Float tmp156 = (tmp152 + tmp155);
								Float g6 = tmp156;
								int tmp157 = p->__get(BA);
								int tmp158 = (int(tmp157) & int((int)15));
								hash = tmp158;
								int tmp159 = (int(hash) & int((int)1));
								bool tmp160 = (tmp159 == (int)0);
								Float tmp161;
								if ((tmp160)){
									bool tmp162 = (hash < (int)8);
									if ((tmp162)){
										tmp161 = x1;
									}
									else{
										tmp161 = y;
									}
								}
								else{
									bool tmp162 = (hash < (int)8);
									if ((tmp162)){
										Float tmp163 = x1;
										tmp161 = -(tmp163);
									}
									else{
										Float tmp163 = y;
										tmp161 = -(tmp163);
									}
								}
								int tmp162 = (int(hash) & int((int)2));
								bool tmp163 = (tmp162 == (int)0);
								Float tmp164;
								if ((tmp163)){
									bool tmp165 = (hash < (int)4);
									if ((tmp165)){
										tmp164 = y;
									}
									else{
										bool tmp166 = (hash == (int)12);
										if ((tmp166)){
											tmp164 = x1;
										}
										else{
											tmp164 = z;
										}
									}
								}
								else{
									bool tmp165 = (hash < (int)4);
									if ((tmp165)){
										Float tmp166 = y;
										tmp164 = -(tmp166);
									}
									else{
										bool tmp166 = (hash == (int)14);
										if ((tmp166)){
											Float tmp167 = x1;
											tmp164 = -(tmp167);
										}
										else{
											Float tmp167 = z;
											tmp164 = -(tmp167);
										}
									}
								}
								Float tmp165 = (tmp161 + tmp164);
								Float g7 = tmp165;
								int tmp166 = p->__get(AA);
								int tmp167 = (int(tmp166) & int((int)15));
								hash = tmp167;
								int tmp168 = (int(hash) & int((int)1));
								bool tmp169 = (tmp168 == (int)0);
								Float tmp170;
								if ((tmp169)){
									bool tmp171 = (hash < (int)8);
									if ((tmp171)){
										tmp170 = x;
									}
									else{
										tmp170 = y;
									}
								}
								else{
									bool tmp171 = (hash < (int)8);
									if ((tmp171)){
										Float tmp172 = x;
										tmp170 = -(tmp172);
									}
									else{
										Float tmp172 = y;
										tmp170 = -(tmp172);
									}
								}
								int tmp171 = (int(hash) & int((int)2));
								bool tmp172 = (tmp171 == (int)0);
								Float tmp173;
								if ((tmp172)){
									bool tmp174 = (hash < (int)4);
									if ((tmp174)){
										tmp173 = y;
									}
									else{
										bool tmp175 = (hash == (int)12);
										if ((tmp175)){
											tmp173 = x;
										}
										else{
											tmp173 = z;
										}
									}
								}
								else{
									bool tmp174 = (hash < (int)4);
									if ((tmp174)){
										Float tmp175 = y;
										tmp173 = -(tmp175);
									}
									else{
										bool tmp175 = (hash == (int)14);
										if ((tmp175)){
											Float tmp176 = x;
											tmp173 = -(tmp176);
										}
										else{
											Float tmp176 = z;
											tmp173 = -(tmp176);
										}
									}
								}
								Float tmp174 = (tmp170 + tmp173);
								Float g8 = tmp174;
								Float tmp175 = u;
								Float tmp176 = (g1 - g2);
								Float tmp177 = (tmp175 * tmp176);
								hx::AddEq(g2,tmp177);
								Float tmp178 = u;
								Float tmp179 = (g3 - g4);
								Float tmp180 = (tmp178 * tmp179);
								hx::AddEq(g4,tmp180);
								Float tmp181 = u;
								Float tmp182 = (g5 - g6);
								Float tmp183 = (tmp181 * tmp182);
								hx::AddEq(g6,tmp183);
								Float tmp184 = u;
								Float tmp185 = (g7 - g8);
								Float tmp186 = (tmp184 * tmp185);
								hx::AddEq(g8,tmp186);
								Float tmp187 = v;
								Float tmp188 = (g2 - g4);
								Float tmp189 = (tmp187 * tmp188);
								hx::AddEq(g4,tmp189);
								Float tmp190 = v;
								Float tmp191 = (g6 - g8);
								Float tmp192 = (tmp190 * tmp191);
								hx::AddEq(g8,tmp192);
								Float tmp193 = g8;
								Float tmp194 = w;
								Float tmp195 = (g4 - g8);
								Float tmp196 = (tmp194 * tmp195);
								Float tmp197 = (tmp193 + tmp196);
								Float tmp198 = fPers;
								Float tmp199 = (tmp197 * tmp198);
								hx::AddEq(s,tmp199);
							}
						}
						Float tmp22 = s;
						Float tmp23 = this->fPersMax;
						Float tmp24 = (tmp22 * tmp23);
						Float tmp25 = (tmp24 + (int)1);
						Float tmp26 = (tmp25 * (int)128);
						int tmp27 = ::Std_obj::_int(tmp26);
						int color = tmp27;
						int tmp28 = px;
						int tmp29 = py;
						int tmp30 = (int(color) << int((int)16));
						int tmp31 = (int((int)-16777216) | int(tmp30));
						int tmp32 = (int(color) << int((int)8));
						int tmp33 = (int(tmp31) | int(tmp32));
						int tmp34 = color;
						int tmp35 = (int(tmp33) | int(tmp34));
						bitmap->setPixel32(tmp28,tmp29,tmp35);
						Float tmp36 = this->baseFactor;
						hx::AddEq(_x,tmp36);
					}
				}
				Float tmp19 = this->baseFactor;
				hx::AddEq(_y,tmp19);
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC5(PerlinNoise_obj,fill,(void))

Void PerlinNoise_obj::octFreqPers( Float fPersistence){
{
		Float fFreq;
		Float fPers;
		this->aOctFreq = Array_obj< Float >::__new();
		this->aOctPers = Array_obj< Float >::__new();
		this->fPersMax = (int)0;
		{
			int _g1 = (int)0;
			int tmp = this->octaves;
			int _g = tmp;
			while((true)){
				bool tmp1 = (_g1 < _g);
				bool tmp2 = !(tmp1);
				if ((tmp2)){
					break;
				}
				int tmp3 = (_g1)++;
				int i = tmp3;
				int tmp4 = i;
				Float tmp5 = ::Math_obj::pow((int)2,tmp4);
				fFreq = tmp5;
				Float tmp6 = fPersistence;
				int tmp7 = i;
				Float tmp8 = ::Math_obj::pow(tmp6,tmp7);
				fPers = tmp8;
				hx::AddEq(this->fPersMax,fPers);
				Float tmp9 = fFreq;
				this->aOctFreq->push(tmp9);
				Float tmp10 = fPers;
				this->aOctPers->push(tmp10);
			}
		}
		Float tmp = this->fPersMax;
		Float tmp1 = (Float((int)1) / Float(tmp));
		this->fPersMax = tmp1;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(PerlinNoise_obj,octFreqPers,(void))

Void PerlinNoise_obj::seedOffset( int iSeed){
{
		Float tmp = (iSeed * ((Float)16807.));
		Float tmp1 = hx::Mod(tmp,(int)2147483647);
		int tmp2 = ::Std_obj::_int(tmp1);
		int tmp3 = iSeed = tmp2;
		this->iXoffset = tmp3;
		Float tmp4 = (iSeed * ((Float)16807.));
		Float tmp5 = hx::Mod(tmp4,(int)2147483647);
		int tmp6 = ::Std_obj::_int(tmp5);
		int tmp7 = iSeed = tmp6;
		this->iYoffset = tmp7;
		Float tmp8 = (iSeed * ((Float)16807.));
		Float tmp9 = hx::Mod(tmp8,(int)2147483647);
		int tmp10 = ::Std_obj::_int(tmp9);
		int tmp11 = iSeed = tmp10;
		this->iZoffset = tmp11;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(PerlinNoise_obj,seedOffset,(void))

Array< int > PerlinNoise_obj::P;


PerlinNoise_obj::PerlinNoise_obj()
{
}

void PerlinNoise_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(PerlinNoise);
	HX_MARK_MEMBER_NAME(octaves,"octaves");
	HX_MARK_MEMBER_NAME(aOctFreq,"aOctFreq");
	HX_MARK_MEMBER_NAME(aOctPers,"aOctPers");
	HX_MARK_MEMBER_NAME(fPersMax,"fPersMax");
	HX_MARK_MEMBER_NAME(iXoffset,"iXoffset");
	HX_MARK_MEMBER_NAME(iYoffset,"iYoffset");
	HX_MARK_MEMBER_NAME(iZoffset,"iZoffset");
	HX_MARK_MEMBER_NAME(baseFactor,"baseFactor");
	HX_MARK_END_CLASS();
}

void PerlinNoise_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(octaves,"octaves");
	HX_VISIT_MEMBER_NAME(aOctFreq,"aOctFreq");
	HX_VISIT_MEMBER_NAME(aOctPers,"aOctPers");
	HX_VISIT_MEMBER_NAME(fPersMax,"fPersMax");
	HX_VISIT_MEMBER_NAME(iXoffset,"iXoffset");
	HX_VISIT_MEMBER_NAME(iYoffset,"iYoffset");
	HX_VISIT_MEMBER_NAME(iZoffset,"iZoffset");
	HX_VISIT_MEMBER_NAME(baseFactor,"baseFactor");
}

Dynamic PerlinNoise_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"fill") ) { return fill_dyn(); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"octaves") ) { return octaves; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"aOctFreq") ) { return aOctFreq; }
		if (HX_FIELD_EQ(inName,"aOctPers") ) { return aOctPers; }
		if (HX_FIELD_EQ(inName,"fPersMax") ) { return fPersMax; }
		if (HX_FIELD_EQ(inName,"iXoffset") ) { return iXoffset; }
		if (HX_FIELD_EQ(inName,"iYoffset") ) { return iYoffset; }
		if (HX_FIELD_EQ(inName,"iZoffset") ) { return iZoffset; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"baseFactor") ) { return baseFactor; }
		if (HX_FIELD_EQ(inName,"seedOffset") ) { return seedOffset_dyn(); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"octFreqPers") ) { return octFreqPers_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

bool PerlinNoise_obj::__GetStatic(const ::String &inName, Dynamic &outValue, hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 1:
		if (HX_FIELD_EQ(inName,"P") ) { outValue = P; return true;  }
	}
	return false;
}

Dynamic PerlinNoise_obj::__SetField(const ::String &inName,const Dynamic &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 7:
		if (HX_FIELD_EQ(inName,"octaves") ) { octaves=inValue.Cast< int >(); return inValue; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"aOctFreq") ) { aOctFreq=inValue.Cast< Array< Float > >(); return inValue; }
		if (HX_FIELD_EQ(inName,"aOctPers") ) { aOctPers=inValue.Cast< Array< Float > >(); return inValue; }
		if (HX_FIELD_EQ(inName,"fPersMax") ) { fPersMax=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"iXoffset") ) { iXoffset=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"iYoffset") ) { iYoffset=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"iZoffset") ) { iZoffset=inValue.Cast< Float >(); return inValue; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"baseFactor") ) { baseFactor=inValue.Cast< Float >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

bool PerlinNoise_obj::__SetStatic(const ::String &inName,Dynamic &ioValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 1:
		if (HX_FIELD_EQ(inName,"P") ) { P=ioValue.Cast< Array< int > >(); return true; }
	}
	return false;
}

void PerlinNoise_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("octaves","\x83","\x15","\x16","\xa8"));
	outFields->push(HX_HCSTRING("aOctFreq","\x57","\xaf","\xa8","\x0f"));
	outFields->push(HX_HCSTRING("aOctPers","\x95","\xff","\x3a","\x16"));
	outFields->push(HX_HCSTRING("fPersMax","\x88","\x73","\xc6","\x1a"));
	outFields->push(HX_HCSTRING("iXoffset","\xa2","\x38","\x51","\x21"));
	outFields->push(HX_HCSTRING("iYoffset","\x63","\xaf","\xe6","\x4a"));
	outFields->push(HX_HCSTRING("iZoffset","\x24","\x26","\x7c","\x74"));
	outFields->push(HX_HCSTRING("baseFactor","\xc0","\xd7","\x3d","\xbc"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsInt,(int)offsetof(PerlinNoise_obj,octaves),HX_HCSTRING("octaves","\x83","\x15","\x16","\xa8")},
	{hx::fsObject /*Array< Float >*/ ,(int)offsetof(PerlinNoise_obj,aOctFreq),HX_HCSTRING("aOctFreq","\x57","\xaf","\xa8","\x0f")},
	{hx::fsObject /*Array< Float >*/ ,(int)offsetof(PerlinNoise_obj,aOctPers),HX_HCSTRING("aOctPers","\x95","\xff","\x3a","\x16")},
	{hx::fsFloat,(int)offsetof(PerlinNoise_obj,fPersMax),HX_HCSTRING("fPersMax","\x88","\x73","\xc6","\x1a")},
	{hx::fsFloat,(int)offsetof(PerlinNoise_obj,iXoffset),HX_HCSTRING("iXoffset","\xa2","\x38","\x51","\x21")},
	{hx::fsFloat,(int)offsetof(PerlinNoise_obj,iYoffset),HX_HCSTRING("iYoffset","\x63","\xaf","\xe6","\x4a")},
	{hx::fsFloat,(int)offsetof(PerlinNoise_obj,iZoffset),HX_HCSTRING("iZoffset","\x24","\x26","\x7c","\x74")},
	{hx::fsFloat,(int)offsetof(PerlinNoise_obj,baseFactor),HX_HCSTRING("baseFactor","\xc0","\xd7","\x3d","\xbc")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo sStaticStorageInfo[] = {
	{hx::fsObject /*Array< int >*/ ,(void *) &PerlinNoise_obj::P,HX_HCSTRING("P","\x50","\x00","\x00","\x00")},
	{ hx::fsUnknown, 0, null()}
};
#endif

static ::String sMemberFields[] = {
	HX_HCSTRING("octaves","\x83","\x15","\x16","\xa8"),
	HX_HCSTRING("aOctFreq","\x57","\xaf","\xa8","\x0f"),
	HX_HCSTRING("aOctPers","\x95","\xff","\x3a","\x16"),
	HX_HCSTRING("fPersMax","\x88","\x73","\xc6","\x1a"),
	HX_HCSTRING("iXoffset","\xa2","\x38","\x51","\x21"),
	HX_HCSTRING("iYoffset","\x63","\xaf","\xe6","\x4a"),
	HX_HCSTRING("iZoffset","\x24","\x26","\x7c","\x74"),
	HX_HCSTRING("baseFactor","\xc0","\xd7","\x3d","\xbc"),
	HX_HCSTRING("fill","\x83","\xce","\xbb","\x43"),
	HX_HCSTRING("octFreqPers","\xce","\x9e","\x7b","\xa2"),
	HX_HCSTRING("seedOffset","\xe4","\xbb","\xcf","\xfe"),
	::String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(PerlinNoise_obj::__mClass,"__mClass");
	HX_MARK_MEMBER_NAME(PerlinNoise_obj::P,"P");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(PerlinNoise_obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(PerlinNoise_obj::P,"P");
};

#endif

hx::Class PerlinNoise_obj::__mClass;

static ::String sStaticFields[] = {
	HX_HCSTRING("P","\x50","\x00","\x00","\x00"),
	::String(null()) };

void PerlinNoise_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("openfl._internal.utils.PerlinNoise","\x59","\xb2","\xee","\x42");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &PerlinNoise_obj::__GetStatic;
	__mClass->mSetStaticField = &PerlinNoise_obj::__SetStatic;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(sStaticFields);
	__mClass->mMembers = hx::Class_obj::dupFunctions(sMemberFields);
	__mClass->mCanCast = hx::TCanCast< PerlinNoise_obj >;
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

void PerlinNoise_obj::__boot()
{
	P= Array_obj< int >::__new().Add((int)151).Add((int)160).Add((int)137).Add((int)91).Add((int)90).Add((int)15).Add((int)131).Add((int)13).Add((int)201).Add((int)95).Add((int)96).Add((int)53).Add((int)194).Add((int)233).Add((int)7).Add((int)225).Add((int)140).Add((int)36).Add((int)103).Add((int)30).Add((int)69).Add((int)142).Add((int)8).Add((int)99).Add((int)37).Add((int)240).Add((int)21).Add((int)10).Add((int)23).Add((int)190).Add((int)6).Add((int)148).Add((int)247).Add((int)120).Add((int)234).Add((int)75).Add((int)0).Add((int)26).Add((int)197).Add((int)62).Add((int)94).Add((int)252).Add((int)219).Add((int)203).Add((int)117).Add((int)35).Add((int)11).Add((int)32).Add((int)57).Add((int)177).Add((int)33).Add((int)88).Add((int)237).Add((int)149).Add((int)56).Add((int)87).Add((int)174).Add((int)20).Add((int)125).Add((int)136).Add((int)171).Add((int)168).Add((int)68).Add((int)175).Add((int)74).Add((int)165).Add((int)71).Add((int)134).Add((int)139).Add((int)48).Add((int)27).Add((int)166).Add((int)77).Add((int)146).Add((int)158).Add((int)231).Add((int)83).Add((int)111).Add((int)229).Add((int)122).Add((int)60).Add((int)211).Add((int)133).Add((int)230).Add((int)220).Add((int)105).Add((int)92).Add((int)41).Add((int)55).Add((int)46).Add((int)245).Add((int)40).Add((int)244).Add((int)102).Add((int)143).Add((int)54).Add((int)65).Add((int)25).Add((int)63).Add((int)161).Add((int)1).Add((int)216).Add((int)80).Add((int)73).Add((int)209).Add((int)76).Add((int)132).Add((int)187).Add((int)208).Add((int)89).Add((int)18).Add((int)169).Add((int)200).Add((int)196).Add((int)135).Add((int)130).Add((int)116).Add((int)188).Add((int)159).Add((int)86).Add((int)164).Add((int)100).Add((int)109).Add((int)198).Add((int)173).Add((int)186).Add((int)3).Add((int)64).Add((int)52).Add((int)217).Add((int)226).Add((int)250).Add((int)124).Add((int)123).Add((int)5).Add((int)202).Add((int)38).Add((int)147).Add((int)118).Add((int)126).Add((int)255).Add((int)82).Add((int)85).Add((int)212).Add((int)207).Add((int)206).Add((int)59).Add((int)227).Add((int)47).Add((int)16).Add((int)58).Add((int)17).Add((int)182).Add((int)189).Add((int)28).Add((int)42).Add((int)223).Add((int)183).Add((int)170).Add((int)213).Add((int)119).Add((int)248).Add((int)152).Add((int)2).Add((int)44).Add((int)154).Add((int)163).Add((int)70).Add((int)221).Add((int)153).Add((int)101).Add((int)155).Add((int)167).Add((int)43).Add((int)172).Add((int)9).Add((int)129).Add((int)22).Add((int)39).Add((int)253).Add((int)19).Add((int)98).Add((int)108).Add((int)110).Add((int)79).Add((int)113).Add((int)224).Add((int)232).Add((int)178).Add((int)185).Add((int)112).Add((int)104).Add((int)218).Add((int)246).Add((int)97).Add((int)228).Add((int)251).Add((int)34).Add((int)242).Add((int)193).Add((int)238).Add((int)210).Add((int)144).Add((int)12).Add((int)191).Add((int)179).Add((int)162).Add((int)241).Add((int)81).Add((int)51).Add((int)145).Add((int)235).Add((int)249).Add((int)14).Add((int)239).Add((int)107).Add((int)49).Add((int)192).Add((int)214).Add((int)31).Add((int)181).Add((int)199).Add((int)106).Add((int)157).Add((int)184).Add((int)84).Add((int)204).Add((int)176).Add((int)115).Add((int)121).Add((int)50).Add((int)45).Add((int)127).Add((int)4).Add((int)150).Add((int)254).Add((int)138).Add((int)236).Add((int)205).Add((int)93).Add((int)222).Add((int)114).Add((int)67).Add((int)29).Add((int)24).Add((int)72).Add((int)243).Add((int)141).Add((int)128).Add((int)195).Add((int)78).Add((int)66).Add((int)215).Add((int)61).Add((int)156).Add((int)180).Add((int)151).Add((int)160).Add((int)137).Add((int)91).Add((int)90).Add((int)15).Add((int)131).Add((int)13).Add((int)201).Add((int)95).Add((int)96).Add((int)53).Add((int)194).Add((int)233).Add((int)7).Add((int)225).Add((int)140).Add((int)36).Add((int)103).Add((int)30).Add((int)69).Add((int)142).Add((int)8).Add((int)99).Add((int)37).Add((int)240).Add((int)21).Add((int)10).Add((int)23).Add((int)190).Add((int)6).Add((int)148).Add((int)247).Add((int)120).Add((int)234).Add((int)75).Add((int)0).Add((int)26).Add((int)197).Add((int)62).Add((int)94).Add((int)252).Add((int)219).Add((int)203).Add((int)117).Add((int)35).Add((int)11).Add((int)32).Add((int)57).Add((int)177).Add((int)33).Add((int)88).Add((int)237).Add((int)149).Add((int)56).Add((int)87).Add((int)174).Add((int)20).Add((int)125).Add((int)136).Add((int)171).Add((int)168).Add((int)68).Add((int)175).Add((int)74).Add((int)165).Add((int)71).Add((int)134).Add((int)139).Add((int)48).Add((int)27).Add((int)166).Add((int)77).Add((int)146).Add((int)158).Add((int)231).Add((int)83).Add((int)111).Add((int)229).Add((int)122).Add((int)60).Add((int)211).Add((int)133).Add((int)230).Add((int)220).Add((int)105).Add((int)92).Add((int)41).Add((int)55).Add((int)46).Add((int)245).Add((int)40).Add((int)244).Add((int)102).Add((int)143).Add((int)54).Add((int)65).Add((int)25).Add((int)63).Add((int)161).Add((int)1).Add((int)216).Add((int)80).Add((int)73).Add((int)209).Add((int)76).Add((int)132).Add((int)187).Add((int)208).Add((int)89).Add((int)18).Add((int)169).Add((int)200).Add((int)196).Add((int)135).Add((int)130).Add((int)116).Add((int)188).Add((int)159).Add((int)86).Add((int)164).Add((int)100).Add((int)109).Add((int)198).Add((int)173).Add((int)186).Add((int)3).Add((int)64).Add((int)52).Add((int)217).Add((int)226).Add((int)250).Add((int)124).Add((int)123).Add((int)5).Add((int)202).Add((int)38).Add((int)147).Add((int)118).Add((int)126).Add((int)255).Add((int)82).Add((int)85).Add((int)212).Add((int)207).Add((int)206).Add((int)59).Add((int)227).Add((int)47).Add((int)16).Add((int)58).Add((int)17).Add((int)182).Add((int)189).Add((int)28).Add((int)42).Add((int)223).Add((int)183).Add((int)170).Add((int)213).Add((int)119).Add((int)248).Add((int)152).Add((int)2).Add((int)44).Add((int)154).Add((int)163).Add((int)70).Add((int)221).Add((int)153).Add((int)101).Add((int)155).Add((int)167).Add((int)43).Add((int)172).Add((int)9).Add((int)129).Add((int)22).Add((int)39).Add((int)253).Add((int)19).Add((int)98).Add((int)108).Add((int)110).Add((int)79).Add((int)113).Add((int)224).Add((int)232).Add((int)178).Add((int)185).Add((int)112).Add((int)104).Add((int)218).Add((int)246).Add((int)97).Add((int)228).Add((int)251).Add((int)34).Add((int)242).Add((int)193).Add((int)238).Add((int)210).Add((int)144).Add((int)12).Add((int)191).Add((int)179).Add((int)162).Add((int)241).Add((int)81).Add((int)51).Add((int)145).Add((int)235).Add((int)249).Add((int)14).Add((int)239).Add((int)107).Add((int)49).Add((int)192).Add((int)214).Add((int)31).Add((int)181).Add((int)199).Add((int)106).Add((int)157).Add((int)184).Add((int)84).Add((int)204).Add((int)176).Add((int)115).Add((int)121).Add((int)50).Add((int)45).Add((int)127).Add((int)4).Add((int)150).Add((int)254).Add((int)138).Add((int)236).Add((int)205).Add((int)93).Add((int)222).Add((int)114).Add((int)67).Add((int)29).Add((int)24).Add((int)72).Add((int)243).Add((int)141).Add((int)128).Add((int)195).Add((int)78).Add((int)66).Add((int)215).Add((int)61).Add((int)156).Add((int)180);
}

} // end namespace openfl
} // end namespace _internal
} // end namespace utils
