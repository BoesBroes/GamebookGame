#include <hxcpp.h>

#ifndef INCLUDED_Std
#include <Std.h>
#endif
#ifndef INCLUDED_haxe_io_Bytes
#include <haxe/io/Bytes.h>
#endif
#ifndef INCLUDED_lime_graphics_Image
#include <lime/graphics/Image.h>
#endif
#ifndef INCLUDED_lime_utils_ArrayBufferView
#include <lime/utils/ArrayBufferView.h>
#endif
#ifndef INCLUDED_openfl__internal_renderer_RenderSession
#include <openfl/_internal/renderer/RenderSession.h>
#endif
#ifndef INCLUDED_openfl_display_BitmapData
#include <openfl/display/BitmapData.h>
#endif
#ifndef INCLUDED_openfl_display_IBitmapDrawable
#include <openfl/display/IBitmapDrawable.h>
#endif
#ifndef INCLUDED_openfl_display_Shader
#include <openfl/display/Shader.h>
#endif
#ifndef INCLUDED_openfl_filters_BitmapFilter
#include <openfl/filters/BitmapFilter.h>
#endif
#ifndef INCLUDED_openfl_filters_ColorMatrixFilter
#include <openfl/filters/ColorMatrixFilter.h>
#endif
#ifndef INCLUDED_openfl_filters__ColorMatrixFilter_ColorMatrixShader
#include <openfl/filters/_ColorMatrixFilter/ColorMatrixShader.h>
#endif
#ifndef INCLUDED_openfl_geom_Point
#include <openfl/geom/Point.h>
#endif
#ifndef INCLUDED_openfl_geom_Rectangle
#include <openfl/geom/Rectangle.h>
#endif
namespace openfl{
namespace filters{

Void ColorMatrixFilter_obj::__construct(Array< Float > matrix)
{
HX_STACK_FRAME("openfl.filters.ColorMatrixFilter","new",0x2c3a675d,"openfl.filters.ColorMatrixFilter.new","openfl/filters/ColorMatrixFilter.hx",20,0xb64128b5)
HX_STACK_THIS(this)
HX_STACK_ARG(matrix,"matrix")
{
	HX_STACK_LINE(22)
	super::__construct();
	HX_STACK_LINE(24)
	this->set_matrix(matrix);
	HX_STACK_LINE(27)
	this->__numPasses = (int)0;
}
;
	return null();
}

//ColorMatrixFilter_obj::~ColorMatrixFilter_obj() { }

Dynamic ColorMatrixFilter_obj::__CreateEmpty() { return  new ColorMatrixFilter_obj; }
hx::ObjectPtr< ColorMatrixFilter_obj > ColorMatrixFilter_obj::__new(Array< Float > matrix)
{  hx::ObjectPtr< ColorMatrixFilter_obj > _result_ = new ColorMatrixFilter_obj();
	_result_->__construct(matrix);
	return _result_;}

Dynamic ColorMatrixFilter_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< ColorMatrixFilter_obj > _result_ = new ColorMatrixFilter_obj();
	_result_->__construct(inArgs[0]);
	return _result_;}

::openfl::filters::BitmapFilter ColorMatrixFilter_obj::clone( ){
	HX_STACK_FRAME("openfl.filters.ColorMatrixFilter","clone",0x2c5b239a,"openfl.filters.ColorMatrixFilter.clone","openfl/filters/ColorMatrixFilter.hx",32,0xb64128b5)
	HX_STACK_THIS(this)
	HX_STACK_LINE(34)
	::openfl::filters::ColorMatrixFilter tmp = ::openfl::filters::ColorMatrixFilter_obj::__new(this->matrix);		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(34)
	return tmp;
}


Void ColorMatrixFilter_obj::__applyFilter( ::openfl::display::BitmapData sourceBitmapData,::openfl::display::BitmapData destBitmapData,::openfl::geom::Rectangle sourceRect,::openfl::geom::Point destPoint){
{
		HX_STACK_FRAME("openfl.filters.ColorMatrixFilter","__applyFilter",0xffb635e3,"openfl.filters.ColorMatrixFilter.__applyFilter","openfl/filters/ColorMatrixFilter.hx",39,0xb64128b5)
		HX_STACK_THIS(this)
		HX_STACK_ARG(sourceBitmapData,"sourceBitmapData")
		HX_STACK_ARG(destBitmapData,"destBitmapData")
		HX_STACK_ARG(sourceRect,"sourceRect")
		HX_STACK_ARG(destPoint,"destPoint")
		HX_STACK_LINE(48)
		::lime::utils::ArrayBufferView tmp = sourceBitmapData->image->get_data();		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(48)
		::lime::utils::ArrayBufferView source = tmp;		HX_STACK_VAR(source,"source");
		HX_STACK_LINE(49)
		::lime::utils::ArrayBufferView tmp1 = destBitmapData->image->get_data();		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(49)
		::lime::utils::ArrayBufferView target = tmp1;		HX_STACK_VAR(target,"target");
		HX_STACK_LINE(51)
		Float tmp2 = (destPoint->x - sourceRect->x);		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(51)
		int tmp3 = ::Std_obj::_int(tmp2);		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(51)
		int offsetX = tmp3;		HX_STACK_VAR(offsetX,"offsetX");
		HX_STACK_LINE(52)
		Float tmp4 = (destPoint->y - sourceRect->y);		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(52)
		int tmp5 = ::Std_obj::_int(tmp4);		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(52)
		int offsetY = tmp5;		HX_STACK_VAR(offsetY,"offsetY");
		HX_STACK_LINE(53)
		int tmp6 = (sourceBitmapData->width * (int)4);		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(53)
		int sourceStride = tmp6;		HX_STACK_VAR(sourceStride,"sourceStride");
		HX_STACK_LINE(54)
		int tmp7 = (destBitmapData->width * (int)4);		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(54)
		int targetStride = tmp7;		HX_STACK_VAR(targetStride,"targetStride");
		HX_STACK_LINE(56)
		int sourceOffset;		HX_STACK_VAR(sourceOffset,"sourceOffset");
		HX_STACK_LINE(57)
		int targetOffset;		HX_STACK_VAR(targetOffset,"targetOffset");
		HX_STACK_LINE(59)
		{
			HX_STACK_LINE(59)
			Float tmp8 = sourceRect->y;		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(59)
			int tmp9 = ::Std_obj::_int(tmp8);		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(59)
			int _g1 = tmp9;		HX_STACK_VAR(_g1,"_g1");
			HX_STACK_LINE(59)
			Float tmp10 = sourceRect->height;		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(59)
			int tmp11 = ::Std_obj::_int(tmp10);		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(59)
			int _g = tmp11;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(59)
			while((true)){
				HX_STACK_LINE(59)
				bool tmp12 = (_g1 < _g);		HX_STACK_VAR(tmp12,"tmp12");
				HX_STACK_LINE(59)
				bool tmp13 = !(tmp12);		HX_STACK_VAR(tmp13,"tmp13");
				HX_STACK_LINE(59)
				if ((tmp13)){
					HX_STACK_LINE(59)
					break;
				}
				HX_STACK_LINE(59)
				int tmp14 = (_g1)++;		HX_STACK_VAR(tmp14,"tmp14");
				HX_STACK_LINE(59)
				int row = tmp14;		HX_STACK_VAR(row,"row");
				HX_STACK_LINE(61)
				{
					HX_STACK_LINE(61)
					Float tmp15 = sourceRect->x;		HX_STACK_VAR(tmp15,"tmp15");
					HX_STACK_LINE(61)
					int tmp16 = ::Std_obj::_int(tmp15);		HX_STACK_VAR(tmp16,"tmp16");
					HX_STACK_LINE(61)
					int _g3 = tmp16;		HX_STACK_VAR(_g3,"_g3");
					HX_STACK_LINE(61)
					Float tmp17 = sourceRect->width;		HX_STACK_VAR(tmp17,"tmp17");
					HX_STACK_LINE(61)
					int tmp18 = ::Std_obj::_int(tmp17);		HX_STACK_VAR(tmp18,"tmp18");
					HX_STACK_LINE(61)
					int _g2 = tmp18;		HX_STACK_VAR(_g2,"_g2");
					HX_STACK_LINE(61)
					while((true)){
						HX_STACK_LINE(61)
						bool tmp19 = (_g3 < _g2);		HX_STACK_VAR(tmp19,"tmp19");
						HX_STACK_LINE(61)
						bool tmp20 = !(tmp19);		HX_STACK_VAR(tmp20,"tmp20");
						HX_STACK_LINE(61)
						if ((tmp20)){
							HX_STACK_LINE(61)
							break;
						}
						HX_STACK_LINE(61)
						int tmp21 = (_g3)++;		HX_STACK_VAR(tmp21,"tmp21");
						HX_STACK_LINE(61)
						int column = tmp21;		HX_STACK_VAR(column,"column");
						HX_STACK_LINE(63)
						int tmp22 = (row * sourceStride);		HX_STACK_VAR(tmp22,"tmp22");
						HX_STACK_LINE(63)
						int tmp23 = (column * (int)4);		HX_STACK_VAR(tmp23,"tmp23");
						HX_STACK_LINE(63)
						int tmp24 = (tmp22 + tmp23);		HX_STACK_VAR(tmp24,"tmp24");
						HX_STACK_LINE(63)
						sourceOffset = tmp24;
						HX_STACK_LINE(64)
						int tmp25 = (row + offsetX);		HX_STACK_VAR(tmp25,"tmp25");
						HX_STACK_LINE(64)
						int tmp26 = targetStride;		HX_STACK_VAR(tmp26,"tmp26");
						HX_STACK_LINE(64)
						int tmp27 = (tmp25 * tmp26);		HX_STACK_VAR(tmp27,"tmp27");
						HX_STACK_LINE(64)
						int tmp28 = (column + offsetY);		HX_STACK_VAR(tmp28,"tmp28");
						HX_STACK_LINE(64)
						int tmp29 = (tmp28 * (int)4);		HX_STACK_VAR(tmp29,"tmp29");
						HX_STACK_LINE(64)
						int tmp30 = (tmp27 + tmp29);		HX_STACK_VAR(tmp30,"tmp30");
						HX_STACK_LINE(64)
						targetOffset = tmp30;
						HX_STACK_LINE(66)
						int tmp31 = ::__hxcpp_memory_get_byte(source->buffer->b,(source->byteOffset + sourceOffset));		HX_STACK_VAR(tmp31,"tmp31");
						HX_STACK_LINE(66)
						Dynamic tmp32 = (int(tmp31) & int((int)255));		HX_STACK_VAR(tmp32,"tmp32");
						HX_STACK_LINE(66)
						Dynamic srcR = tmp32;		HX_STACK_VAR(srcR,"srcR");
						HX_STACK_LINE(67)
						int tmp33 = ::__hxcpp_memory_get_byte(source->buffer->b,(source->byteOffset + ((sourceOffset + (int)1))));		HX_STACK_VAR(tmp33,"tmp33");
						HX_STACK_LINE(67)
						Dynamic tmp34 = (int(tmp33) & int((int)255));		HX_STACK_VAR(tmp34,"tmp34");
						HX_STACK_LINE(67)
						Dynamic srcG = tmp34;		HX_STACK_VAR(srcG,"srcG");
						HX_STACK_LINE(68)
						int tmp35 = ::__hxcpp_memory_get_byte(source->buffer->b,(source->byteOffset + ((sourceOffset + (int)2))));		HX_STACK_VAR(tmp35,"tmp35");
						HX_STACK_LINE(68)
						Dynamic tmp36 = (int(tmp35) & int((int)255));		HX_STACK_VAR(tmp36,"tmp36");
						HX_STACK_LINE(68)
						Dynamic srcB = tmp36;		HX_STACK_VAR(srcB,"srcB");
						HX_STACK_LINE(69)
						int tmp37 = ::__hxcpp_memory_get_byte(source->buffer->b,(source->byteOffset + ((sourceOffset + (int)3))));		HX_STACK_VAR(tmp37,"tmp37");
						HX_STACK_LINE(69)
						Dynamic tmp38 = (int(tmp37) & int((int)255));		HX_STACK_VAR(tmp38,"tmp38");
						HX_STACK_LINE(69)
						Dynamic srcA = tmp38;		HX_STACK_VAR(srcA,"srcA");
						HX_STACK_LINE(71)
						{
							HX_STACK_LINE(71)
							Float tmp39;		HX_STACK_VAR(tmp39,"tmp39");
							HX_STACK_LINE(71)
							{
								HX_STACK_LINE(71)
								int a = srcR;		HX_STACK_VAR(a,"a");
								HX_STACK_LINE(71)
								Float tmp40;		HX_STACK_VAR(tmp40,"tmp40");
								HX_STACK_LINE(71)
								{
									HX_STACK_LINE(71)
									int _int = a;		HX_STACK_VAR(_int,"int");
									HX_STACK_LINE(71)
									bool tmp41 = (_int < (int)0);		HX_STACK_VAR(tmp41,"tmp41");
									HX_STACK_LINE(71)
									if ((tmp41)){
										HX_STACK_LINE(71)
										tmp40 = (((Float)4294967296.0) + _int);
									}
									else{
										HX_STACK_LINE(71)
										tmp40 = (_int + ((Float)0.0));
									}
								}
								HX_STACK_LINE(71)
								Float tmp41 = this->matrix->__get((int)0);		HX_STACK_VAR(tmp41,"tmp41");
								HX_STACK_LINE(71)
								tmp39 = (tmp40 * tmp41);
							}
							HX_STACK_LINE(71)
							Float tmp40;		HX_STACK_VAR(tmp40,"tmp40");
							HX_STACK_LINE(71)
							{
								HX_STACK_LINE(71)
								int a = srcG;		HX_STACK_VAR(a,"a");
								HX_STACK_LINE(71)
								Float tmp41;		HX_STACK_VAR(tmp41,"tmp41");
								HX_STACK_LINE(71)
								{
									HX_STACK_LINE(71)
									int _int = a;		HX_STACK_VAR(_int,"int");
									HX_STACK_LINE(71)
									bool tmp42 = (_int < (int)0);		HX_STACK_VAR(tmp42,"tmp42");
									HX_STACK_LINE(71)
									if ((tmp42)){
										HX_STACK_LINE(71)
										tmp41 = (((Float)4294967296.0) + _int);
									}
									else{
										HX_STACK_LINE(71)
										tmp41 = (_int + ((Float)0.0));
									}
								}
								HX_STACK_LINE(71)
								Float tmp42 = this->matrix->__get((int)1);		HX_STACK_VAR(tmp42,"tmp42");
								HX_STACK_LINE(71)
								tmp40 = (tmp41 * tmp42);
							}
							HX_STACK_LINE(71)
							Float tmp41 = (tmp39 + tmp40);		HX_STACK_VAR(tmp41,"tmp41");
							HX_STACK_LINE(71)
							Float tmp42;		HX_STACK_VAR(tmp42,"tmp42");
							HX_STACK_LINE(71)
							{
								HX_STACK_LINE(71)
								int a = srcB;		HX_STACK_VAR(a,"a");
								HX_STACK_LINE(71)
								Float tmp43;		HX_STACK_VAR(tmp43,"tmp43");
								HX_STACK_LINE(71)
								{
									HX_STACK_LINE(71)
									int _int = a;		HX_STACK_VAR(_int,"int");
									HX_STACK_LINE(71)
									bool tmp44 = (_int < (int)0);		HX_STACK_VAR(tmp44,"tmp44");
									HX_STACK_LINE(71)
									if ((tmp44)){
										HX_STACK_LINE(71)
										tmp43 = (((Float)4294967296.0) + _int);
									}
									else{
										HX_STACK_LINE(71)
										tmp43 = (_int + ((Float)0.0));
									}
								}
								HX_STACK_LINE(71)
								Float tmp44 = this->matrix->__get((int)2);		HX_STACK_VAR(tmp44,"tmp44");
								HX_STACK_LINE(71)
								tmp42 = (tmp43 * tmp44);
							}
							HX_STACK_LINE(71)
							Float tmp43 = (tmp41 + tmp42);		HX_STACK_VAR(tmp43,"tmp43");
							HX_STACK_LINE(71)
							Float tmp44;		HX_STACK_VAR(tmp44,"tmp44");
							HX_STACK_LINE(71)
							{
								HX_STACK_LINE(71)
								int a = srcA;		HX_STACK_VAR(a,"a");
								HX_STACK_LINE(71)
								Float tmp45;		HX_STACK_VAR(tmp45,"tmp45");
								HX_STACK_LINE(71)
								{
									HX_STACK_LINE(71)
									int _int = a;		HX_STACK_VAR(_int,"int");
									HX_STACK_LINE(71)
									bool tmp46 = (_int < (int)0);		HX_STACK_VAR(tmp46,"tmp46");
									HX_STACK_LINE(71)
									if ((tmp46)){
										HX_STACK_LINE(71)
										tmp45 = (((Float)4294967296.0) + _int);
									}
									else{
										HX_STACK_LINE(71)
										tmp45 = (_int + ((Float)0.0));
									}
								}
								HX_STACK_LINE(71)
								Float tmp46 = this->matrix->__get((int)3);		HX_STACK_VAR(tmp46,"tmp46");
								HX_STACK_LINE(71)
								tmp44 = (tmp45 * tmp46);
							}
							HX_STACK_LINE(71)
							Float tmp45 = (tmp43 + tmp44);		HX_STACK_VAR(tmp45,"tmp45");
							HX_STACK_LINE(71)
							Float tmp46 = this->matrix->__get((int)4);		HX_STACK_VAR(tmp46,"tmp46");
							HX_STACK_LINE(71)
							Float tmp47 = (tmp45 + tmp46);		HX_STACK_VAR(tmp47,"tmp47");
							HX_STACK_LINE(71)
							int tmp48 = ::Std_obj::_int(tmp47);		HX_STACK_VAR(tmp48,"tmp48");
							HX_STACK_LINE(71)
							int val = tmp48;		HX_STACK_VAR(val,"val");
							HX_STACK_LINE(71)
							::__hxcpp_memory_set_byte(target->buffer->b,(target->byteOffset + targetOffset),val);
							HX_STACK_LINE(71)
							val;
						}
						HX_STACK_LINE(72)
						{
							HX_STACK_LINE(72)
							Float tmp39;		HX_STACK_VAR(tmp39,"tmp39");
							HX_STACK_LINE(72)
							{
								HX_STACK_LINE(72)
								int a = srcR;		HX_STACK_VAR(a,"a");
								HX_STACK_LINE(72)
								Float tmp40;		HX_STACK_VAR(tmp40,"tmp40");
								HX_STACK_LINE(72)
								{
									HX_STACK_LINE(72)
									int _int = a;		HX_STACK_VAR(_int,"int");
									HX_STACK_LINE(72)
									bool tmp41 = (_int < (int)0);		HX_STACK_VAR(tmp41,"tmp41");
									HX_STACK_LINE(72)
									if ((tmp41)){
										HX_STACK_LINE(72)
										tmp40 = (((Float)4294967296.0) + _int);
									}
									else{
										HX_STACK_LINE(72)
										tmp40 = (_int + ((Float)0.0));
									}
								}
								HX_STACK_LINE(72)
								Float tmp41 = this->matrix->__get((int)5);		HX_STACK_VAR(tmp41,"tmp41");
								HX_STACK_LINE(72)
								tmp39 = (tmp40 * tmp41);
							}
							HX_STACK_LINE(72)
							Float tmp40;		HX_STACK_VAR(tmp40,"tmp40");
							HX_STACK_LINE(72)
							{
								HX_STACK_LINE(72)
								int a = srcG;		HX_STACK_VAR(a,"a");
								HX_STACK_LINE(72)
								Float tmp41;		HX_STACK_VAR(tmp41,"tmp41");
								HX_STACK_LINE(72)
								{
									HX_STACK_LINE(72)
									int _int = a;		HX_STACK_VAR(_int,"int");
									HX_STACK_LINE(72)
									bool tmp42 = (_int < (int)0);		HX_STACK_VAR(tmp42,"tmp42");
									HX_STACK_LINE(72)
									if ((tmp42)){
										HX_STACK_LINE(72)
										tmp41 = (((Float)4294967296.0) + _int);
									}
									else{
										HX_STACK_LINE(72)
										tmp41 = (_int + ((Float)0.0));
									}
								}
								HX_STACK_LINE(72)
								Float tmp42 = this->matrix->__get((int)6);		HX_STACK_VAR(tmp42,"tmp42");
								HX_STACK_LINE(72)
								tmp40 = (tmp41 * tmp42);
							}
							HX_STACK_LINE(72)
							Float tmp41 = (tmp39 + tmp40);		HX_STACK_VAR(tmp41,"tmp41");
							HX_STACK_LINE(72)
							Float tmp42;		HX_STACK_VAR(tmp42,"tmp42");
							HX_STACK_LINE(72)
							{
								HX_STACK_LINE(72)
								int a = srcB;		HX_STACK_VAR(a,"a");
								HX_STACK_LINE(72)
								Float tmp43;		HX_STACK_VAR(tmp43,"tmp43");
								HX_STACK_LINE(72)
								{
									HX_STACK_LINE(72)
									int _int = a;		HX_STACK_VAR(_int,"int");
									HX_STACK_LINE(72)
									bool tmp44 = (_int < (int)0);		HX_STACK_VAR(tmp44,"tmp44");
									HX_STACK_LINE(72)
									if ((tmp44)){
										HX_STACK_LINE(72)
										tmp43 = (((Float)4294967296.0) + _int);
									}
									else{
										HX_STACK_LINE(72)
										tmp43 = (_int + ((Float)0.0));
									}
								}
								HX_STACK_LINE(72)
								Float tmp44 = this->matrix->__get((int)7);		HX_STACK_VAR(tmp44,"tmp44");
								HX_STACK_LINE(72)
								tmp42 = (tmp43 * tmp44);
							}
							HX_STACK_LINE(72)
							Float tmp43 = (tmp41 + tmp42);		HX_STACK_VAR(tmp43,"tmp43");
							HX_STACK_LINE(72)
							Float tmp44;		HX_STACK_VAR(tmp44,"tmp44");
							HX_STACK_LINE(72)
							{
								HX_STACK_LINE(72)
								int a = srcA;		HX_STACK_VAR(a,"a");
								HX_STACK_LINE(72)
								Float tmp45;		HX_STACK_VAR(tmp45,"tmp45");
								HX_STACK_LINE(72)
								{
									HX_STACK_LINE(72)
									int _int = a;		HX_STACK_VAR(_int,"int");
									HX_STACK_LINE(72)
									bool tmp46 = (_int < (int)0);		HX_STACK_VAR(tmp46,"tmp46");
									HX_STACK_LINE(72)
									if ((tmp46)){
										HX_STACK_LINE(72)
										tmp45 = (((Float)4294967296.0) + _int);
									}
									else{
										HX_STACK_LINE(72)
										tmp45 = (_int + ((Float)0.0));
									}
								}
								HX_STACK_LINE(72)
								Float tmp46 = this->matrix->__get((int)8);		HX_STACK_VAR(tmp46,"tmp46");
								HX_STACK_LINE(72)
								tmp44 = (tmp45 * tmp46);
							}
							HX_STACK_LINE(72)
							Float tmp45 = (tmp43 + tmp44);		HX_STACK_VAR(tmp45,"tmp45");
							HX_STACK_LINE(72)
							Float tmp46 = this->matrix->__get((int)9);		HX_STACK_VAR(tmp46,"tmp46");
							HX_STACK_LINE(72)
							Float tmp47 = (tmp45 + tmp46);		HX_STACK_VAR(tmp47,"tmp47");
							HX_STACK_LINE(72)
							int tmp48 = ::Std_obj::_int(tmp47);		HX_STACK_VAR(tmp48,"tmp48");
							HX_STACK_LINE(72)
							int val = tmp48;		HX_STACK_VAR(val,"val");
							HX_STACK_LINE(72)
							::__hxcpp_memory_set_byte(target->buffer->b,(target->byteOffset + ((targetOffset + (int)1))),val);
							HX_STACK_LINE(72)
							val;
						}
						HX_STACK_LINE(73)
						{
							HX_STACK_LINE(73)
							Float tmp39;		HX_STACK_VAR(tmp39,"tmp39");
							HX_STACK_LINE(73)
							{
								HX_STACK_LINE(73)
								int a = srcR;		HX_STACK_VAR(a,"a");
								HX_STACK_LINE(73)
								Float tmp40;		HX_STACK_VAR(tmp40,"tmp40");
								HX_STACK_LINE(73)
								{
									HX_STACK_LINE(73)
									int _int = a;		HX_STACK_VAR(_int,"int");
									HX_STACK_LINE(73)
									bool tmp41 = (_int < (int)0);		HX_STACK_VAR(tmp41,"tmp41");
									HX_STACK_LINE(73)
									if ((tmp41)){
										HX_STACK_LINE(73)
										tmp40 = (((Float)4294967296.0) + _int);
									}
									else{
										HX_STACK_LINE(73)
										tmp40 = (_int + ((Float)0.0));
									}
								}
								HX_STACK_LINE(73)
								Float tmp41 = this->matrix->__get((int)10);		HX_STACK_VAR(tmp41,"tmp41");
								HX_STACK_LINE(73)
								tmp39 = (tmp40 * tmp41);
							}
							HX_STACK_LINE(73)
							Float tmp40;		HX_STACK_VAR(tmp40,"tmp40");
							HX_STACK_LINE(73)
							{
								HX_STACK_LINE(73)
								int a = srcG;		HX_STACK_VAR(a,"a");
								HX_STACK_LINE(73)
								Float tmp41;		HX_STACK_VAR(tmp41,"tmp41");
								HX_STACK_LINE(73)
								{
									HX_STACK_LINE(73)
									int _int = a;		HX_STACK_VAR(_int,"int");
									HX_STACK_LINE(73)
									bool tmp42 = (_int < (int)0);		HX_STACK_VAR(tmp42,"tmp42");
									HX_STACK_LINE(73)
									if ((tmp42)){
										HX_STACK_LINE(73)
										tmp41 = (((Float)4294967296.0) + _int);
									}
									else{
										HX_STACK_LINE(73)
										tmp41 = (_int + ((Float)0.0));
									}
								}
								HX_STACK_LINE(73)
								Float tmp42 = this->matrix->__get((int)11);		HX_STACK_VAR(tmp42,"tmp42");
								HX_STACK_LINE(73)
								tmp40 = (tmp41 * tmp42);
							}
							HX_STACK_LINE(73)
							Float tmp41 = (tmp39 + tmp40);		HX_STACK_VAR(tmp41,"tmp41");
							HX_STACK_LINE(73)
							Float tmp42;		HX_STACK_VAR(tmp42,"tmp42");
							HX_STACK_LINE(73)
							{
								HX_STACK_LINE(73)
								int a = srcB;		HX_STACK_VAR(a,"a");
								HX_STACK_LINE(73)
								Float tmp43;		HX_STACK_VAR(tmp43,"tmp43");
								HX_STACK_LINE(73)
								{
									HX_STACK_LINE(73)
									int _int = a;		HX_STACK_VAR(_int,"int");
									HX_STACK_LINE(73)
									bool tmp44 = (_int < (int)0);		HX_STACK_VAR(tmp44,"tmp44");
									HX_STACK_LINE(73)
									if ((tmp44)){
										HX_STACK_LINE(73)
										tmp43 = (((Float)4294967296.0) + _int);
									}
									else{
										HX_STACK_LINE(73)
										tmp43 = (_int + ((Float)0.0));
									}
								}
								HX_STACK_LINE(73)
								Float tmp44 = this->matrix->__get((int)12);		HX_STACK_VAR(tmp44,"tmp44");
								HX_STACK_LINE(73)
								tmp42 = (tmp43 * tmp44);
							}
							HX_STACK_LINE(73)
							Float tmp43 = (tmp41 + tmp42);		HX_STACK_VAR(tmp43,"tmp43");
							HX_STACK_LINE(73)
							Float tmp44;		HX_STACK_VAR(tmp44,"tmp44");
							HX_STACK_LINE(73)
							{
								HX_STACK_LINE(73)
								int a = srcA;		HX_STACK_VAR(a,"a");
								HX_STACK_LINE(73)
								Float tmp45;		HX_STACK_VAR(tmp45,"tmp45");
								HX_STACK_LINE(73)
								{
									HX_STACK_LINE(73)
									int _int = a;		HX_STACK_VAR(_int,"int");
									HX_STACK_LINE(73)
									bool tmp46 = (_int < (int)0);		HX_STACK_VAR(tmp46,"tmp46");
									HX_STACK_LINE(73)
									if ((tmp46)){
										HX_STACK_LINE(73)
										tmp45 = (((Float)4294967296.0) + _int);
									}
									else{
										HX_STACK_LINE(73)
										tmp45 = (_int + ((Float)0.0));
									}
								}
								HX_STACK_LINE(73)
								Float tmp46 = this->matrix->__get((int)13);		HX_STACK_VAR(tmp46,"tmp46");
								HX_STACK_LINE(73)
								tmp44 = (tmp45 * tmp46);
							}
							HX_STACK_LINE(73)
							Float tmp45 = (tmp43 + tmp44);		HX_STACK_VAR(tmp45,"tmp45");
							HX_STACK_LINE(73)
							Float tmp46 = this->matrix->__get((int)14);		HX_STACK_VAR(tmp46,"tmp46");
							HX_STACK_LINE(73)
							Float tmp47 = (tmp45 + tmp46);		HX_STACK_VAR(tmp47,"tmp47");
							HX_STACK_LINE(73)
							int tmp48 = ::Std_obj::_int(tmp47);		HX_STACK_VAR(tmp48,"tmp48");
							HX_STACK_LINE(73)
							int val = tmp48;		HX_STACK_VAR(val,"val");
							HX_STACK_LINE(73)
							::__hxcpp_memory_set_byte(target->buffer->b,(target->byteOffset + ((targetOffset + (int)2))),val);
							HX_STACK_LINE(73)
							val;
						}
						HX_STACK_LINE(74)
						{
							HX_STACK_LINE(74)
							Float tmp39;		HX_STACK_VAR(tmp39,"tmp39");
							HX_STACK_LINE(74)
							{
								HX_STACK_LINE(74)
								int a = srcR;		HX_STACK_VAR(a,"a");
								HX_STACK_LINE(74)
								Float tmp40;		HX_STACK_VAR(tmp40,"tmp40");
								HX_STACK_LINE(74)
								{
									HX_STACK_LINE(74)
									int _int = a;		HX_STACK_VAR(_int,"int");
									HX_STACK_LINE(74)
									bool tmp41 = (_int < (int)0);		HX_STACK_VAR(tmp41,"tmp41");
									HX_STACK_LINE(74)
									if ((tmp41)){
										HX_STACK_LINE(74)
										tmp40 = (((Float)4294967296.0) + _int);
									}
									else{
										HX_STACK_LINE(74)
										tmp40 = (_int + ((Float)0.0));
									}
								}
								HX_STACK_LINE(74)
								Float tmp41 = this->matrix->__get((int)15);		HX_STACK_VAR(tmp41,"tmp41");
								HX_STACK_LINE(74)
								tmp39 = (tmp40 * tmp41);
							}
							HX_STACK_LINE(74)
							Float tmp40;		HX_STACK_VAR(tmp40,"tmp40");
							HX_STACK_LINE(74)
							{
								HX_STACK_LINE(74)
								int a = srcG;		HX_STACK_VAR(a,"a");
								HX_STACK_LINE(74)
								Float tmp41;		HX_STACK_VAR(tmp41,"tmp41");
								HX_STACK_LINE(74)
								{
									HX_STACK_LINE(74)
									int _int = a;		HX_STACK_VAR(_int,"int");
									HX_STACK_LINE(74)
									bool tmp42 = (_int < (int)0);		HX_STACK_VAR(tmp42,"tmp42");
									HX_STACK_LINE(74)
									if ((tmp42)){
										HX_STACK_LINE(74)
										tmp41 = (((Float)4294967296.0) + _int);
									}
									else{
										HX_STACK_LINE(74)
										tmp41 = (_int + ((Float)0.0));
									}
								}
								HX_STACK_LINE(74)
								Float tmp42 = this->matrix->__get((int)16);		HX_STACK_VAR(tmp42,"tmp42");
								HX_STACK_LINE(74)
								tmp40 = (tmp41 * tmp42);
							}
							HX_STACK_LINE(74)
							Float tmp41 = (tmp39 + tmp40);		HX_STACK_VAR(tmp41,"tmp41");
							HX_STACK_LINE(74)
							Float tmp42;		HX_STACK_VAR(tmp42,"tmp42");
							HX_STACK_LINE(74)
							{
								HX_STACK_LINE(74)
								int a = srcB;		HX_STACK_VAR(a,"a");
								HX_STACK_LINE(74)
								Float tmp43;		HX_STACK_VAR(tmp43,"tmp43");
								HX_STACK_LINE(74)
								{
									HX_STACK_LINE(74)
									int _int = a;		HX_STACK_VAR(_int,"int");
									HX_STACK_LINE(74)
									bool tmp44 = (_int < (int)0);		HX_STACK_VAR(tmp44,"tmp44");
									HX_STACK_LINE(74)
									if ((tmp44)){
										HX_STACK_LINE(74)
										tmp43 = (((Float)4294967296.0) + _int);
									}
									else{
										HX_STACK_LINE(74)
										tmp43 = (_int + ((Float)0.0));
									}
								}
								HX_STACK_LINE(74)
								Float tmp44 = this->matrix->__get((int)17);		HX_STACK_VAR(tmp44,"tmp44");
								HX_STACK_LINE(74)
								tmp42 = (tmp43 * tmp44);
							}
							HX_STACK_LINE(74)
							Float tmp43 = (tmp41 + tmp42);		HX_STACK_VAR(tmp43,"tmp43");
							HX_STACK_LINE(74)
							Float tmp44;		HX_STACK_VAR(tmp44,"tmp44");
							HX_STACK_LINE(74)
							{
								HX_STACK_LINE(74)
								int a = srcA;		HX_STACK_VAR(a,"a");
								HX_STACK_LINE(74)
								Float tmp45;		HX_STACK_VAR(tmp45,"tmp45");
								HX_STACK_LINE(74)
								{
									HX_STACK_LINE(74)
									int _int = a;		HX_STACK_VAR(_int,"int");
									HX_STACK_LINE(74)
									bool tmp46 = (_int < (int)0);		HX_STACK_VAR(tmp46,"tmp46");
									HX_STACK_LINE(74)
									if ((tmp46)){
										HX_STACK_LINE(74)
										tmp45 = (((Float)4294967296.0) + _int);
									}
									else{
										HX_STACK_LINE(74)
										tmp45 = (_int + ((Float)0.0));
									}
								}
								HX_STACK_LINE(74)
								Float tmp46 = this->matrix->__get((int)18);		HX_STACK_VAR(tmp46,"tmp46");
								HX_STACK_LINE(74)
								tmp44 = (tmp45 * tmp46);
							}
							HX_STACK_LINE(74)
							Float tmp45 = (tmp43 + tmp44);		HX_STACK_VAR(tmp45,"tmp45");
							HX_STACK_LINE(74)
							Float tmp46 = this->matrix->__get((int)19);		HX_STACK_VAR(tmp46,"tmp46");
							HX_STACK_LINE(74)
							Float tmp47 = (tmp45 + tmp46);		HX_STACK_VAR(tmp47,"tmp47");
							HX_STACK_LINE(74)
							int tmp48 = ::Std_obj::_int(tmp47);		HX_STACK_VAR(tmp48,"tmp48");
							HX_STACK_LINE(74)
							int val = tmp48;		HX_STACK_VAR(val,"val");
							HX_STACK_LINE(74)
							::__hxcpp_memory_set_byte(target->buffer->b,(target->byteOffset + ((targetOffset + (int)3))),val);
							HX_STACK_LINE(74)
							val;
						}
					}
				}
			}
		}
		HX_STACK_LINE(80)
		destBitmapData->image->dirty = true;
	}
return null();
}


::openfl::display::Shader ColorMatrixFilter_obj::__initShader( ::openfl::_internal::renderer::RenderSession renderSession,int pass){
	HX_STACK_FRAME("openfl.filters.ColorMatrixFilter","__initShader",0x2d28b6d8,"openfl.filters.ColorMatrixFilter.__initShader","openfl/filters/ColorMatrixFilter.hx",85,0xb64128b5)
	HX_STACK_THIS(this)
	HX_STACK_ARG(renderSession,"renderSession")
	HX_STACK_ARG(pass,"pass")
	HX_STACK_LINE(87)
	::openfl::filters::_ColorMatrixFilter::ColorMatrixShader tmp = ::openfl::filters::ColorMatrixFilter_obj::__colorMatrixShader;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(87)
	tmp->init(this->matrix);
	HX_STACK_LINE(88)
	::openfl::filters::_ColorMatrixFilter::ColorMatrixShader tmp1 = ::openfl::filters::ColorMatrixFilter_obj::__colorMatrixShader;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(88)
	return tmp1;
}


Array< Float > ColorMatrixFilter_obj::set_matrix( Array< Float > value){
	HX_STACK_FRAME("openfl.filters.ColorMatrixFilter","set_matrix",0x82603721,"openfl.filters.ColorMatrixFilter.set_matrix","openfl/filters/ColorMatrixFilter.hx",100,0xb64128b5)
	HX_STACK_THIS(this)
	HX_STACK_ARG(value,"value")
	HX_STACK_LINE(102)
	bool tmp = (value == null());		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(102)
	if ((tmp)){
		HX_STACK_LINE(104)
		value = Array_obj< Float >::__new().Add((int)1).Add((int)0).Add((int)0).Add((int)0).Add((int)0).Add((int)0).Add((int)1).Add((int)0).Add((int)0).Add((int)0).Add((int)0).Add((int)0).Add((int)1).Add((int)0).Add((int)0).Add((int)0).Add((int)0).Add((int)0).Add((int)1).Add((int)0);
	}
	HX_STACK_LINE(108)
	return this->matrix = value;
}


HX_DEFINE_DYNAMIC_FUNC1(ColorMatrixFilter_obj,set_matrix,return )

::openfl::filters::_ColorMatrixFilter::ColorMatrixShader ColorMatrixFilter_obj::__colorMatrixShader;


ColorMatrixFilter_obj::ColorMatrixFilter_obj()
{
}

void ColorMatrixFilter_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(ColorMatrixFilter);
	HX_MARK_MEMBER_NAME(matrix,"matrix");
	HX_MARK_END_CLASS();
}

void ColorMatrixFilter_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(matrix,"matrix");
}

Dynamic ColorMatrixFilter_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"clone") ) { return clone_dyn(); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"matrix") ) { return matrix; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"set_matrix") ) { return set_matrix_dyn(); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"__initShader") ) { return __initShader_dyn(); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"__applyFilter") ) { return __applyFilter_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

bool ColorMatrixFilter_obj::__GetStatic(const ::String &inName, Dynamic &outValue, hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 19:
		if (HX_FIELD_EQ(inName,"__colorMatrixShader") ) { outValue = __colorMatrixShader; return true;  }
	}
	return false;
}

Dynamic ColorMatrixFilter_obj::__SetField(const ::String &inName,const Dynamic &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 6:
		if (HX_FIELD_EQ(inName,"matrix") ) { if (inCallProp == hx::paccAlways) return set_matrix(inValue);matrix=inValue.Cast< Array< Float > >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

bool ColorMatrixFilter_obj::__SetStatic(const ::String &inName,Dynamic &ioValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 19:
		if (HX_FIELD_EQ(inName,"__colorMatrixShader") ) { __colorMatrixShader=ioValue.Cast< ::openfl::filters::_ColorMatrixFilter::ColorMatrixShader >(); return true; }
	}
	return false;
}

void ColorMatrixFilter_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("matrix","\x41","\x36","\xc8","\xbb"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsObject /*Array< Float >*/ ,(int)offsetof(ColorMatrixFilter_obj,matrix),HX_HCSTRING("matrix","\x41","\x36","\xc8","\xbb")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo sStaticStorageInfo[] = {
	{hx::fsObject /*::openfl::filters::_ColorMatrixFilter::ColorMatrixShader*/ ,(void *) &ColorMatrixFilter_obj::__colorMatrixShader,HX_HCSTRING("__colorMatrixShader","\x29","\xff","\xb1","\xf9")},
	{ hx::fsUnknown, 0, null()}
};
#endif

static ::String sMemberFields[] = {
	HX_HCSTRING("matrix","\x41","\x36","\xc8","\xbb"),
	HX_HCSTRING("clone","\x5d","\x13","\x63","\x48"),
	HX_HCSTRING("__applyFilter","\xa6","\x20","\xa8","\x09"),
	HX_HCSTRING("__initShader","\x75","\x95","\xf9","\x59"),
	HX_HCSTRING("set_matrix","\x7e","\x44","\xcd","\xaf"),
	::String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(ColorMatrixFilter_obj::__mClass,"__mClass");
	HX_MARK_MEMBER_NAME(ColorMatrixFilter_obj::__colorMatrixShader,"__colorMatrixShader");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(ColorMatrixFilter_obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(ColorMatrixFilter_obj::__colorMatrixShader,"__colorMatrixShader");
};

#endif

hx::Class ColorMatrixFilter_obj::__mClass;

static ::String sStaticFields[] = {
	HX_HCSTRING("__colorMatrixShader","\x29","\xff","\xb1","\xf9"),
	::String(null()) };

void ColorMatrixFilter_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("openfl.filters.ColorMatrixFilter","\xeb","\x74","\x0a","\x76");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &ColorMatrixFilter_obj::__GetStatic;
	__mClass->mSetStaticField = &ColorMatrixFilter_obj::__SetStatic;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(sStaticFields);
	__mClass->mMembers = hx::Class_obj::dupFunctions(sMemberFields);
	__mClass->mCanCast = hx::TCanCast< ColorMatrixFilter_obj >;
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

void ColorMatrixFilter_obj::__boot()
{
	__colorMatrixShader= ::openfl::filters::_ColorMatrixFilter::ColorMatrixShader_obj::__new();
}

} // end namespace openfl
} // end namespace filters
