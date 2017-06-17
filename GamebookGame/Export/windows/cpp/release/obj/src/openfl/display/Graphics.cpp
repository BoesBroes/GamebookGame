#include <hxcpp.h>

#include "hxMath.h"
#ifndef INCLUDED_Std
#include <Std.h>
#endif
#ifndef INCLUDED_lime_graphics_cairo_Cairo
#include <lime/graphics/cairo/Cairo.h>
#endif
#ifndef INCLUDED_lime_utils_ObjectPool_openfl_geom_Rectangle
#include <lime/utils/ObjectPool_openfl_geom_Rectangle.h>
#endif
#ifndef INCLUDED_openfl__Vector_FloatVector
#include <openfl/_Vector/FloatVector.h>
#endif
#ifndef INCLUDED_openfl__Vector_IVector
#include <openfl/_Vector/IVector.h>
#endif
#ifndef INCLUDED_openfl__Vector_IntVector
#include <openfl/_Vector/IntVector.h>
#endif
#ifndef INCLUDED_openfl__Vector_ObjectVector
#include <openfl/_Vector/ObjectVector.h>
#endif
#ifndef INCLUDED_openfl__internal_renderer_DrawCommandBuffer
#include <openfl/_internal/renderer/DrawCommandBuffer.h>
#endif
#ifndef INCLUDED_openfl__internal_renderer_DrawCommandReader
#include <openfl/_internal/renderer/DrawCommandReader.h>
#endif
#ifndef INCLUDED_openfl__internal_renderer_DrawCommandType
#include <openfl/_internal/renderer/DrawCommandType.h>
#endif
#ifndef INCLUDED_openfl__internal_renderer_cairo_CairoGraphics
#include <openfl/_internal/renderer/cairo/CairoGraphics.h>
#endif
#ifndef INCLUDED_openfl_display_BitmapData
#include <openfl/display/BitmapData.h>
#endif
#ifndef INCLUDED_openfl_display_DisplayObject
#include <openfl/display/DisplayObject.h>
#endif
#ifndef INCLUDED_openfl_display_Graphics
#include <openfl/display/Graphics.h>
#endif
#ifndef INCLUDED_openfl_display_GraphicsBitmapFill
#include <openfl/display/GraphicsBitmapFill.h>
#endif
#ifndef INCLUDED_openfl_display_GraphicsDataType
#include <openfl/display/GraphicsDataType.h>
#endif
#ifndef INCLUDED_openfl_display_GraphicsEndFill
#include <openfl/display/GraphicsEndFill.h>
#endif
#ifndef INCLUDED_openfl_display_GraphicsFillType
#include <openfl/display/GraphicsFillType.h>
#endif
#ifndef INCLUDED_openfl_display_GraphicsGradientFill
#include <openfl/display/GraphicsGradientFill.h>
#endif
#ifndef INCLUDED_openfl_display_GraphicsPath
#include <openfl/display/GraphicsPath.h>
#endif
#ifndef INCLUDED_openfl_display_GraphicsSolidFill
#include <openfl/display/GraphicsSolidFill.h>
#endif
#ifndef INCLUDED_openfl_display_GraphicsStroke
#include <openfl/display/GraphicsStroke.h>
#endif
#ifndef INCLUDED_openfl_display_GraphicsTrianglePath
#include <openfl/display/GraphicsTrianglePath.h>
#endif
#ifndef INCLUDED_openfl_display_IBitmapDrawable
#include <openfl/display/IBitmapDrawable.h>
#endif
#ifndef INCLUDED_openfl_display_IGraphicsData
#include <openfl/display/IGraphicsData.h>
#endif
#ifndef INCLUDED_openfl_display_IGraphicsFill
#include <openfl/display/IGraphicsFill.h>
#endif
#ifndef INCLUDED_openfl_display_IGraphicsPath
#include <openfl/display/IGraphicsPath.h>
#endif
#ifndef INCLUDED_openfl_display_IGraphicsStroke
#include <openfl/display/IGraphicsStroke.h>
#endif
#ifndef INCLUDED_openfl_errors_ArgumentError
#include <openfl/errors/ArgumentError.h>
#endif
#ifndef INCLUDED_openfl_errors_Error
#include <openfl/errors/Error.h>
#endif
#ifndef INCLUDED_openfl_events_EventDispatcher
#include <openfl/events/EventDispatcher.h>
#endif
#ifndef INCLUDED_openfl_events_IEventDispatcher
#include <openfl/events/IEventDispatcher.h>
#endif
#ifndef INCLUDED_openfl_geom_Matrix
#include <openfl/geom/Matrix.h>
#endif
#ifndef INCLUDED_openfl_geom_Rectangle
#include <openfl/geom/Rectangle.h>
#endif
namespace openfl{
namespace display{

Void Graphics_obj::__construct(::openfl::display::DisplayObject owner)
{
{
	this->__dirty = true;
	this->__owner = owner;
	::openfl::_internal::renderer::DrawCommandBuffer tmp = ::openfl::_internal::renderer::DrawCommandBuffer_obj::__new();
	this->__commands = tmp;
	this->__strokePadding = (int)0;
	this->__positionX = (int)0;
	this->__positionY = (int)0;
	::openfl::geom::Matrix tmp1 = ::openfl::geom::Matrix_obj::__new(null(),null(),null(),null(),null(),null());
	this->__renderTransform = tmp1;
	::openfl::geom::Matrix tmp2 = ::openfl::geom::Matrix_obj::__new(null(),null(),null(),null(),null(),null());
	this->__worldTransform = tmp2;
	this->__width = (int)0;
	this->__height = (int)0;
}
;
	return null();
}

//Graphics_obj::~Graphics_obj() { }

Dynamic Graphics_obj::__CreateEmpty() { return  new Graphics_obj; }
hx::ObjectPtr< Graphics_obj > Graphics_obj::__new(::openfl::display::DisplayObject owner)
{  hx::ObjectPtr< Graphics_obj > _result_ = new Graphics_obj();
	_result_->__construct(owner);
	return _result_;}

Dynamic Graphics_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< Graphics_obj > _result_ = new Graphics_obj();
	_result_->__construct(inArgs[0]);
	return _result_;}

Void Graphics_obj::beginBitmapFill( ::openfl::display::BitmapData bitmap,::openfl::geom::Matrix matrix,hx::Null< bool >  __o_repeat,hx::Null< bool >  __o_smooth){
bool repeat = __o_repeat.Default(true);
bool smooth = __o_smooth.Default(false);
{
		::openfl::_internal::renderer::DrawCommandBuffer tmp = this->__commands;
		::openfl::display::BitmapData tmp1 = bitmap;
		bool tmp2 = (matrix != null());
		::openfl::geom::Matrix tmp3;
		if ((tmp2)){
			tmp3 = matrix->clone();
		}
		else{
			tmp3 = null();
		}
		bool tmp4 = repeat;
		bool tmp5 = smooth;
		tmp->beginBitmapFill(tmp1,tmp3,tmp4,tmp5);
		this->__visible = true;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC4(Graphics_obj,beginBitmapFill,(void))

Void Graphics_obj::beginFill( hx::Null< int >  __o_color,hx::Null< Float >  __o_alpha){
int color = __o_color.Default(0);
Float alpha = __o_alpha.Default(1);
{
		::openfl::_internal::renderer::DrawCommandBuffer tmp = this->__commands;
		int tmp1 = (int(color) & int((int)16777215));
		Float tmp2 = alpha;
		tmp->beginFill(tmp1,tmp2);
		bool tmp3 = (alpha > (int)0);
		if ((tmp3)){
			this->__visible = true;
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(Graphics_obj,beginFill,(void))

Void Graphics_obj::beginGradientFill( Dynamic type,Array< int > colors,Array< Float > alphas,Array< int > ratios,::openfl::geom::Matrix matrix,Dynamic __o_spreadMethod,Dynamic __o_interpolationMethod,hx::Null< Float >  __o_focalPointRatio){
Dynamic spreadMethod = __o_spreadMethod.Default(0);
Dynamic interpolationMethod = __o_interpolationMethod.Default(1);
Float focalPointRatio = __o_focalPointRatio.Default(0);
{
		::openfl::_internal::renderer::DrawCommandBuffer tmp = this->__commands;
		Dynamic tmp1 = type;
		::openfl::geom::Matrix tmp2 = matrix;
		Dynamic tmp3 = spreadMethod;
		Dynamic tmp4 = interpolationMethod;
		Float tmp5 = focalPointRatio;
		tmp->beginGradientFill(tmp1,colors,alphas,ratios,tmp2,tmp3,tmp4,tmp5);
		{
			int _g = (int)0;
			while((true)){
				bool tmp6 = (_g < alphas->length);
				bool tmp7 = !(tmp6);
				if ((tmp7)){
					break;
				}
				Float tmp8 = alphas->__get(_g);
				Float alpha = tmp8;
				++(_g);
				bool tmp9 = (alpha > (int)0);
				if ((tmp9)){
					this->__visible = true;
					break;
				}
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC8(Graphics_obj,beginGradientFill,(void))

Void Graphics_obj::clear( ){
{
		::openfl::_internal::renderer::DrawCommandBuffer tmp = this->__commands;
		tmp->clear();
		this->__strokePadding = (int)0;
		::openfl::geom::Rectangle tmp1 = this->__bounds;
		bool tmp2 = (tmp1 != null());
		if ((tmp2)){
			this->set___dirty(true);
			this->__transformDirty = true;
			this->__bounds = null();
		}
		this->__visible = false;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(Graphics_obj,clear,(void))

Void Graphics_obj::copyFrom( ::openfl::display::Graphics sourceGraphics){
{
		bool tmp = (sourceGraphics->__bounds != null());
		::openfl::geom::Rectangle tmp1;
		if ((tmp)){
			tmp1 = sourceGraphics->__bounds->clone();
		}
		else{
			tmp1 = null();
		}
		this->__bounds = tmp1;
		::openfl::_internal::renderer::DrawCommandBuffer tmp2 = sourceGraphics->__commands->copy();
		this->__commands = tmp2;
		this->set___dirty(true);
		this->__strokePadding = sourceGraphics->__strokePadding;
		this->__positionX = sourceGraphics->__positionX;
		this->__positionY = sourceGraphics->__positionY;
		this->__transformDirty = true;
		this->__visible = sourceGraphics->__visible;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Graphics_obj,copyFrom,(void))

Void Graphics_obj::cubicCurveTo( Float controlX1,Float controlY1,Float controlX2,Float controlY2,Float anchorX,Float anchorY){
{
		Float tmp = this->__positionX;
		Float tmp1 = this->__strokePadding;
		Float tmp2 = (tmp - tmp1);
		Float tmp3 = this->__positionY;
		Float tmp4 = this->__strokePadding;
		Float tmp5 = (tmp3 - tmp4);
		this->__inflateBounds(tmp2,tmp5);
		Float tmp6 = this->__positionX;
		Float tmp7 = this->__strokePadding;
		Float tmp8 = (tmp6 + tmp7);
		Float tmp9 = this->__positionY;
		Float tmp10 = this->__strokePadding;
		Float tmp11 = (tmp9 + tmp10);
		this->__inflateBounds(tmp8,tmp11);
		Float ix1;
		Float iy1;
		Float ix2;
		Float iy2;
		ix1 = anchorX;
		ix2 = anchorX;
		bool tmp12 = (controlX1 < anchorX);
		bool tmp13 = tmp12;
		bool tmp14;
		if ((tmp13)){
			Float tmp15 = controlX1;
			Float tmp16 = this->__positionX;
			Float tmp17 = tmp16;
			Float tmp18 = tmp17;
			tmp14 = (tmp15 > tmp18);
		}
		else{
			tmp14 = false;
		}
		bool tmp15 = !(tmp14);
		bool tmp16 = tmp15;
		bool tmp17;
		if ((tmp16)){
			bool tmp18 = (controlX1 > anchorX);
			bool tmp19 = tmp18;
			bool tmp20 = tmp19;
			bool tmp21 = tmp20;
			bool tmp22 = tmp21;
			if ((tmp22)){
				Float tmp23 = controlX1;
				Float tmp24 = this->__positionX;
				Float tmp25 = tmp24;
				Float tmp26 = tmp25;
				Float tmp27 = tmp26;
				tmp17 = (tmp23 < tmp27);
			}
			else{
				tmp17 = false;
			}
		}
		else{
			tmp17 = true;
		}
		bool tmp18;
		if ((tmp17)){
			bool tmp19 = (controlX2 < anchorX);
			bool tmp20 = tmp19;
			bool tmp21 = tmp20;
			bool tmp22;
			bool tmp23 = tmp21;
			if ((tmp23)){
				Float tmp24 = controlX2;
				Float tmp25 = this->__positionX;
				Float tmp26 = tmp25;
				Float tmp27 = tmp26;
				Float tmp28 = tmp27;
				bool tmp29 = (tmp24 > tmp28);
				tmp22 = tmp29;
			}
			else{
				tmp22 = false;
			}
			bool tmp24 = tmp22;
			bool tmp25 = !(tmp24);
			bool tmp26 = tmp25;
			bool tmp27 = tmp26;
			if ((tmp27)){
				bool tmp28 = (controlX2 > anchorX);
				bool tmp29 = tmp28;
				bool tmp30 = tmp29;
				bool tmp31 = tmp30;
				bool tmp32 = tmp31;
				if ((tmp32)){
					Float tmp33 = controlX2;
					Float tmp34 = this->__positionX;
					Float tmp35 = tmp34;
					Float tmp36 = tmp35;
					Float tmp37 = tmp36;
					tmp18 = (tmp33 < tmp37);
				}
				else{
					tmp18 = false;
				}
			}
			else{
				tmp18 = true;
			}
		}
		else{
			tmp18 = false;
		}
		bool tmp19 = !(tmp18);
		if ((tmp19)){
			Float tmp20 = this->__positionX;
			Float tmp21 = ((int)2 * tmp20);
			Float tmp22 = ((int)4 * controlX1);
			Float tmp23 = (tmp21 - tmp22);
			Float tmp24 = ((int)2 * controlX2);
			Float tmp25 = (tmp23 + tmp24);
			Float u = tmp25;
			Float tmp26 = controlX1;
			Float tmp27 = this->__positionX;
			Float tmp28 = (tmp26 - tmp27);
			Float v = tmp28;
			Float tmp29 = this->__positionX;
			Float tmp30 = -(tmp29);
			Float tmp31 = ((int)3 * controlX1);
			Float tmp32 = (tmp30 + tmp31);
			Float tmp33 = anchorX;
			Float tmp34 = (tmp32 + tmp33);
			Float tmp35 = ((int)3 * controlX2);
			Float tmp36 = (tmp34 - tmp35);
			Float w = tmp36;
			Float tmp37 = u;
			Float tmp38 = -(tmp37);
			Float tmp39 = (u * u);
			Float tmp40 = ((int)4 * v);
			Float tmp41 = w;
			Float tmp42 = (tmp40 * tmp41);
			Float tmp43 = (tmp39 - tmp42);
			Float tmp44 = ::Math_obj::sqrt(tmp43);
			Float tmp45 = (tmp38 + tmp44);
			Float tmp46 = ((int)2 * w);
			Float tmp47 = (Float(tmp45) / Float(tmp46));
			Float t1 = tmp47;
			Float tmp48 = u;
			Float tmp49 = -(tmp48);
			Float tmp50 = (u * u);
			Float tmp51 = ((int)4 * v);
			Float tmp52 = w;
			Float tmp53 = (tmp51 * tmp52);
			Float tmp54 = (tmp50 - tmp53);
			Float tmp55 = ::Math_obj::sqrt(tmp54);
			Float tmp56 = (tmp49 - tmp55);
			Float tmp57 = ((int)2 * w);
			Float tmp58 = (Float(tmp56) / Float(tmp57));
			Float t2 = tmp58;
			bool tmp59 = (t1 > (int)0);
			bool tmp60;
			if ((tmp59)){
				tmp60 = (t1 < (int)1);
			}
			else{
				tmp60 = false;
			}
			if ((tmp60)){
				Float tmp61 = t1;
				Float tmp62 = this->__positionX;
				Float tmp63 = controlX1;
				Float tmp64 = controlX2;
				Float tmp65 = anchorX;
				Float tmp66 = this->__calculateBezierCubicPoint(tmp61,tmp62,tmp63,tmp64,tmp65);
				ix1 = tmp66;
			}
			bool tmp61 = (t2 > (int)0);
			bool tmp62;
			if ((tmp61)){
				tmp62 = (t2 < (int)1);
			}
			else{
				tmp62 = false;
			}
			if ((tmp62)){
				Float tmp63 = t2;
				Float tmp64 = this->__positionX;
				Float tmp65 = controlX1;
				Float tmp66 = controlX2;
				Float tmp67 = anchorX;
				Float tmp68 = this->__calculateBezierCubicPoint(tmp63,tmp64,tmp65,tmp66,tmp67);
				ix2 = tmp68;
			}
		}
		iy1 = anchorY;
		iy2 = anchorY;
		bool tmp20 = (controlY1 < anchorY);
		bool tmp21 = tmp20;
		bool tmp22;
		if ((tmp21)){
			Float tmp23 = controlY1;
			Float tmp24 = this->__positionX;
			Float tmp25 = tmp24;
			Float tmp26 = tmp25;
			tmp22 = (tmp23 > tmp26);
		}
		else{
			tmp22 = false;
		}
		bool tmp23 = !(tmp22);
		bool tmp24 = tmp23;
		bool tmp25;
		if ((tmp24)){
			bool tmp26 = (controlY1 > anchorY);
			bool tmp27 = tmp26;
			bool tmp28 = tmp27;
			bool tmp29 = tmp28;
			bool tmp30 = tmp29;
			if ((tmp30)){
				Float tmp31 = controlY1;
				Float tmp32 = this->__positionX;
				Float tmp33 = tmp32;
				Float tmp34 = tmp33;
				Float tmp35 = tmp34;
				tmp25 = (tmp31 < tmp35);
			}
			else{
				tmp25 = false;
			}
		}
		else{
			tmp25 = true;
		}
		bool tmp26;
		if ((tmp25)){
			bool tmp27 = (controlY2 < anchorY);
			bool tmp28 = tmp27;
			bool tmp29 = tmp28;
			bool tmp30;
			bool tmp31 = tmp29;
			if ((tmp31)){
				Float tmp32 = controlY2;
				Float tmp33 = this->__positionX;
				Float tmp34 = tmp33;
				Float tmp35 = tmp34;
				Float tmp36 = tmp35;
				bool tmp37 = (tmp32 > tmp36);
				tmp30 = tmp37;
			}
			else{
				tmp30 = false;
			}
			bool tmp32 = tmp30;
			bool tmp33 = !(tmp32);
			bool tmp34 = tmp33;
			bool tmp35 = tmp34;
			if ((tmp35)){
				bool tmp36 = (controlY2 > anchorY);
				bool tmp37 = tmp36;
				bool tmp38 = tmp37;
				bool tmp39 = tmp38;
				bool tmp40 = tmp39;
				if ((tmp40)){
					Float tmp41 = controlY2;
					Float tmp42 = this->__positionX;
					Float tmp43 = tmp42;
					Float tmp44 = tmp43;
					Float tmp45 = tmp44;
					tmp26 = (tmp41 < tmp45);
				}
				else{
					tmp26 = false;
				}
			}
			else{
				tmp26 = true;
			}
		}
		else{
			tmp26 = false;
		}
		bool tmp27 = !(tmp26);
		if ((tmp27)){
			Float tmp28 = this->__positionX;
			Float tmp29 = ((int)2 * tmp28);
			Float tmp30 = ((int)4 * controlY1);
			Float tmp31 = (tmp29 - tmp30);
			Float tmp32 = ((int)2 * controlY2);
			Float tmp33 = (tmp31 + tmp32);
			Float u = tmp33;
			Float tmp34 = controlY1;
			Float tmp35 = this->__positionX;
			Float tmp36 = (tmp34 - tmp35);
			Float v = tmp36;
			Float tmp37 = this->__positionX;
			Float tmp38 = -(tmp37);
			Float tmp39 = ((int)3 * controlY1);
			Float tmp40 = (tmp38 + tmp39);
			Float tmp41 = anchorY;
			Float tmp42 = (tmp40 + tmp41);
			Float tmp43 = ((int)3 * controlY2);
			Float tmp44 = (tmp42 - tmp43);
			Float w = tmp44;
			Float tmp45 = u;
			Float tmp46 = -(tmp45);
			Float tmp47 = (u * u);
			Float tmp48 = ((int)4 * v);
			Float tmp49 = w;
			Float tmp50 = (tmp48 * tmp49);
			Float tmp51 = (tmp47 - tmp50);
			Float tmp52 = ::Math_obj::sqrt(tmp51);
			Float tmp53 = (tmp46 + tmp52);
			Float tmp54 = ((int)2 * w);
			Float tmp55 = (Float(tmp53) / Float(tmp54));
			Float t1 = tmp55;
			Float tmp56 = u;
			Float tmp57 = -(tmp56);
			Float tmp58 = (u * u);
			Float tmp59 = ((int)4 * v);
			Float tmp60 = w;
			Float tmp61 = (tmp59 * tmp60);
			Float tmp62 = (tmp58 - tmp61);
			Float tmp63 = ::Math_obj::sqrt(tmp62);
			Float tmp64 = (tmp57 - tmp63);
			Float tmp65 = ((int)2 * w);
			Float tmp66 = (Float(tmp64) / Float(tmp65));
			Float t2 = tmp66;
			bool tmp67 = (t1 > (int)0);
			bool tmp68;
			if ((tmp67)){
				tmp68 = (t1 < (int)1);
			}
			else{
				tmp68 = false;
			}
			if ((tmp68)){
				Float tmp69 = t1;
				Float tmp70 = this->__positionX;
				Float tmp71 = controlY1;
				Float tmp72 = controlY2;
				Float tmp73 = anchorY;
				Float tmp74 = this->__calculateBezierCubicPoint(tmp69,tmp70,tmp71,tmp72,tmp73);
				iy1 = tmp74;
			}
			bool tmp69 = (t2 > (int)0);
			bool tmp70;
			if ((tmp69)){
				tmp70 = (t2 < (int)1);
			}
			else{
				tmp70 = false;
			}
			if ((tmp70)){
				Float tmp71 = t2;
				Float tmp72 = this->__positionX;
				Float tmp73 = controlY1;
				Float tmp74 = controlY2;
				Float tmp75 = anchorY;
				Float tmp76 = this->__calculateBezierCubicPoint(tmp71,tmp72,tmp73,tmp74,tmp75);
				iy2 = tmp76;
			}
		}
		Float tmp28 = ix1;
		Float tmp29 = this->__strokePadding;
		Float tmp30 = (tmp28 - tmp29);
		Float tmp31 = iy1;
		Float tmp32 = this->__strokePadding;
		Float tmp33 = (tmp31 - tmp32);
		this->__inflateBounds(tmp30,tmp33);
		Float tmp34 = ix1;
		Float tmp35 = this->__strokePadding;
		Float tmp36 = (tmp34 + tmp35);
		Float tmp37 = iy1;
		Float tmp38 = this->__strokePadding;
		Float tmp39 = (tmp37 + tmp38);
		this->__inflateBounds(tmp36,tmp39);
		Float tmp40 = ix2;
		Float tmp41 = this->__strokePadding;
		Float tmp42 = (tmp40 - tmp41);
		Float tmp43 = iy2;
		Float tmp44 = this->__strokePadding;
		Float tmp45 = (tmp43 - tmp44);
		this->__inflateBounds(tmp42,tmp45);
		Float tmp46 = ix2;
		Float tmp47 = this->__strokePadding;
		Float tmp48 = (tmp46 + tmp47);
		Float tmp49 = iy2;
		Float tmp50 = this->__strokePadding;
		Float tmp51 = (tmp49 + tmp50);
		this->__inflateBounds(tmp48,tmp51);
		this->__positionX = anchorX;
		this->__positionY = anchorY;
		Float tmp52 = this->__positionX;
		Float tmp53 = this->__strokePadding;
		Float tmp54 = (tmp52 - tmp53);
		Float tmp55 = this->__positionY;
		Float tmp56 = this->__strokePadding;
		Float tmp57 = (tmp55 - tmp56);
		this->__inflateBounds(tmp54,tmp57);
		Float tmp58 = this->__positionX;
		Float tmp59 = this->__strokePadding;
		Float tmp60 = (tmp58 + tmp59);
		Float tmp61 = this->__positionY;
		Float tmp62 = this->__strokePadding;
		Float tmp63 = (tmp61 + tmp62);
		this->__inflateBounds(tmp60,tmp63);
		::openfl::_internal::renderer::DrawCommandBuffer tmp64 = this->__commands;
		Float tmp65 = controlX1;
		Float tmp66 = controlY1;
		Float tmp67 = controlX2;
		Float tmp68 = controlY2;
		Float tmp69 = anchorX;
		Float tmp70 = anchorY;
		tmp64->cubicCurveTo(tmp65,tmp66,tmp67,tmp68,tmp69,tmp70);
		this->set___dirty(true);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC6(Graphics_obj,cubicCurveTo,(void))

Void Graphics_obj::curveTo( Float controlX,Float controlY,Float anchorX,Float anchorY){
{
		Float tmp = this->__positionX;
		Float tmp1 = this->__strokePadding;
		Float tmp2 = (tmp - tmp1);
		Float tmp3 = this->__positionY;
		Float tmp4 = this->__strokePadding;
		Float tmp5 = (tmp3 - tmp4);
		this->__inflateBounds(tmp2,tmp5);
		Float tmp6 = this->__positionX;
		Float tmp7 = this->__strokePadding;
		Float tmp8 = (tmp6 + tmp7);
		Float tmp9 = this->__positionY;
		Float tmp10 = this->__strokePadding;
		Float tmp11 = (tmp9 + tmp10);
		this->__inflateBounds(tmp8,tmp11);
		Float ix;
		Float iy;
		bool tmp12 = (controlX < anchorX);
		bool tmp13 = tmp12;
		bool tmp14;
		if ((tmp13)){
			Float tmp15 = controlX;
			Float tmp16 = this->__positionX;
			Float tmp17 = tmp16;
			Float tmp18 = tmp17;
			tmp14 = (tmp15 > tmp18);
		}
		else{
			tmp14 = false;
		}
		bool tmp15 = !(tmp14);
		bool tmp16;
		if ((tmp15)){
			bool tmp17 = (controlX > anchorX);
			bool tmp18 = tmp17;
			bool tmp19 = tmp18;
			if ((tmp19)){
				Float tmp20 = controlX;
				Float tmp21 = this->__positionX;
				Float tmp22 = tmp21;
				Float tmp23 = tmp22;
				tmp16 = (tmp20 < tmp23);
			}
			else{
				tmp16 = false;
			}
		}
		else{
			tmp16 = true;
		}
		if ((tmp16)){
			ix = anchorX;
		}
		else{
			Float tmp17 = this->__positionX;
			Float tmp18 = controlX;
			Float tmp19 = (tmp17 - tmp18);
			Float tmp20 = this->__positionX;
			Float tmp21 = ((int)2 * controlX);
			Float tmp22 = (tmp20 - tmp21);
			Float tmp23 = anchorX;
			Float tmp24 = (tmp22 + tmp23);
			Float tmp25 = (Float(tmp19) / Float(tmp24));
			Float tx = tmp25;
			Float tmp26 = tx;
			Float tmp27 = this->__positionX;
			Float tmp28 = controlX;
			Float tmp29 = anchorX;
			Float tmp30 = this->__calculateBezierQuadPoint(tmp26,tmp27,tmp28,tmp29);
			ix = tmp30;
		}
		bool tmp17 = (controlY < anchorY);
		bool tmp18 = tmp17;
		bool tmp19;
		if ((tmp18)){
			Float tmp20 = controlY;
			Float tmp21 = this->__positionY;
			Float tmp22 = tmp21;
			Float tmp23 = tmp22;
			tmp19 = (tmp20 > tmp23);
		}
		else{
			tmp19 = false;
		}
		bool tmp20 = !(tmp19);
		bool tmp21;
		if ((tmp20)){
			bool tmp22 = (controlY > anchorY);
			bool tmp23 = tmp22;
			bool tmp24 = tmp23;
			if ((tmp24)){
				Float tmp25 = controlY;
				Float tmp26 = this->__positionY;
				Float tmp27 = tmp26;
				Float tmp28 = tmp27;
				tmp21 = (tmp25 < tmp28);
			}
			else{
				tmp21 = false;
			}
		}
		else{
			tmp21 = true;
		}
		if ((tmp21)){
			iy = anchorY;
		}
		else{
			Float tmp22 = this->__positionY;
			Float tmp23 = controlY;
			Float tmp24 = (tmp22 - tmp23);
			Float tmp25 = this->__positionY;
			Float tmp26 = ((int)2 * controlY);
			Float tmp27 = (tmp25 - tmp26);
			Float tmp28 = anchorY;
			Float tmp29 = (tmp27 + tmp28);
			Float tmp30 = (Float(tmp24) / Float(tmp29));
			Float ty = tmp30;
			Float tmp31 = ty;
			Float tmp32 = this->__positionY;
			Float tmp33 = controlY;
			Float tmp34 = anchorY;
			Float tmp35 = this->__calculateBezierQuadPoint(tmp31,tmp32,tmp33,tmp34);
			iy = tmp35;
		}
		Float tmp22 = ix;
		Float tmp23 = this->__strokePadding;
		Float tmp24 = (tmp22 - tmp23);
		Float tmp25 = iy;
		Float tmp26 = this->__strokePadding;
		Float tmp27 = (tmp25 - tmp26);
		this->__inflateBounds(tmp24,tmp27);
		Float tmp28 = ix;
		Float tmp29 = this->__strokePadding;
		Float tmp30 = (tmp28 + tmp29);
		Float tmp31 = iy;
		Float tmp32 = this->__strokePadding;
		Float tmp33 = (tmp31 + tmp32);
		this->__inflateBounds(tmp30,tmp33);
		this->__positionX = anchorX;
		this->__positionY = anchorY;
		::openfl::_internal::renderer::DrawCommandBuffer tmp34 = this->__commands;
		Float tmp35 = controlX;
		Float tmp36 = controlY;
		Float tmp37 = anchorX;
		Float tmp38 = anchorY;
		tmp34->curveTo(tmp35,tmp36,tmp37,tmp38);
		this->set___dirty(true);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC4(Graphics_obj,curveTo,(void))

Void Graphics_obj::drawCircle( Float x,Float y,Float radius){
{
		bool tmp = (radius <= (int)0);
		if ((tmp)){
			return null();
		}
		Float tmp1 = (x - radius);
		Float tmp2 = this->__strokePadding;
		Float tmp3 = (tmp1 - tmp2);
		Float tmp4 = (y - radius);
		Float tmp5 = this->__strokePadding;
		Float tmp6 = (tmp4 - tmp5);
		this->__inflateBounds(tmp3,tmp6);
		Float tmp7 = (x + radius);
		Float tmp8 = this->__strokePadding;
		Float tmp9 = (tmp7 + tmp8);
		Float tmp10 = (y + radius);
		Float tmp11 = this->__strokePadding;
		Float tmp12 = (tmp10 + tmp11);
		this->__inflateBounds(tmp9,tmp12);
		::openfl::_internal::renderer::DrawCommandBuffer tmp13 = this->__commands;
		Float tmp14 = x;
		Float tmp15 = y;
		Float tmp16 = radius;
		tmp13->drawCircle(tmp14,tmp15,tmp16);
		this->set___dirty(true);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC3(Graphics_obj,drawCircle,(void))

Void Graphics_obj::drawEllipse( Float x,Float y,Float width,Float height){
{
		bool tmp = (width <= (int)0);
		bool tmp1 = !(tmp);
		bool tmp2;
		if ((tmp1)){
			tmp2 = (height <= (int)0);
		}
		else{
			tmp2 = true;
		}
		if ((tmp2)){
			return null();
		}
		Float tmp3 = x;
		Float tmp4 = this->__strokePadding;
		Float tmp5 = (tmp3 - tmp4);
		Float tmp6 = y;
		Float tmp7 = this->__strokePadding;
		Float tmp8 = (tmp6 - tmp7);
		this->__inflateBounds(tmp5,tmp8);
		Float tmp9 = (x + width);
		Float tmp10 = this->__strokePadding;
		Float tmp11 = (tmp9 + tmp10);
		Float tmp12 = (y + height);
		Float tmp13 = this->__strokePadding;
		Float tmp14 = (tmp12 + tmp13);
		this->__inflateBounds(tmp11,tmp14);
		::openfl::_internal::renderer::DrawCommandBuffer tmp15 = this->__commands;
		Float tmp16 = x;
		Float tmp17 = y;
		Float tmp18 = width;
		Float tmp19 = height;
		tmp15->drawEllipse(tmp16,tmp17,tmp18,tmp19);
		this->set___dirty(true);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC4(Graphics_obj,drawEllipse,(void))

Void Graphics_obj::drawGraphicsData( ::openfl::_Vector::ObjectVector graphicsData){
{
		::openfl::display::GraphicsSolidFill fill;
		::openfl::display::GraphicsBitmapFill bitmapFill;
		::openfl::display::GraphicsGradientFill gradientFill;
		::openfl::display::GraphicsStroke stroke;
		::openfl::display::GraphicsPath path;
		::openfl::display::GraphicsTrianglePath trianglePath;
		{
			int _g = (int)0;
			while((true)){
				int tmp = _g;
				int tmp1 = graphicsData->get_length();
				bool tmp2 = (tmp < tmp1);
				bool tmp3 = !(tmp2);
				if ((tmp3)){
					break;
				}
				int tmp4 = _g;
				::openfl::display::IGraphicsData tmp5 = graphicsData->get(tmp4);
				::openfl::display::IGraphicsData graphics = tmp5;
				++(_g);
				::openfl::display::GraphicsDataType tmp6 = graphics->__Field(HX_HCSTRING("__graphicsDataType","\x0f","\x5d","\x4d","\x46"), hx::paccDynamic );
				::openfl::display::GraphicsDataType _switch_1 = (tmp6);
				if (  ( _switch_1==::openfl::display::GraphicsDataType_obj::SOLID)){
					fill = ((::openfl::display::GraphicsSolidFill)(graphics));
					int tmp7 = fill->color;
					Float tmp8 = fill->alpha;
					this->beginFill(tmp7,tmp8);
				}
				else if (  ( _switch_1==::openfl::display::GraphicsDataType_obj::BITMAP)){
					bitmapFill = ((::openfl::display::GraphicsBitmapFill)(graphics));
					::openfl::display::BitmapData tmp7 = bitmapFill->bitmapData;
					::openfl::geom::Matrix tmp8 = bitmapFill->matrix;
					bool tmp9 = bitmapFill->repeat;
					bool tmp10 = bitmapFill->smooth;
					this->beginBitmapFill(tmp7,tmp8,tmp9,tmp10);
				}
				else if (  ( _switch_1==::openfl::display::GraphicsDataType_obj::GRADIENT)){
					gradientFill = ((::openfl::display::GraphicsGradientFill)(graphics));
					Dynamic tmp7 = gradientFill->type;
					::openfl::geom::Matrix tmp8 = gradientFill->matrix;
					Dynamic tmp9 = gradientFill->spreadMethod;
					Dynamic tmp10 = gradientFill->interpolationMethod;
					Float tmp11 = gradientFill->focalPointRatio;
					this->beginGradientFill(tmp7,gradientFill->colors,gradientFill->alphas,gradientFill->ratios,tmp8,tmp9,tmp10,tmp11);
				}
				else if (  ( _switch_1==::openfl::display::GraphicsDataType_obj::STROKE)){
					stroke = ((::openfl::display::GraphicsStroke)(graphics));
					bool tmp7 = (stroke->fill != null());
					if ((tmp7)){
						Dynamic thickness = stroke->thickness;
						Dynamic tmp8 = thickness;
						bool tmp9 = ::Math_obj::isNaN(tmp8);
						if ((tmp9)){
							thickness = null();
						}
						::openfl::display::GraphicsFillType tmp10 = stroke->fill->__Field(HX_HCSTRING("__graphicsFillType","\xe8","\x75","\xeb","\x27"), hx::paccDynamic );
						::openfl::display::GraphicsFillType _switch_2 = (tmp10);
						if (  ( _switch_2==::openfl::display::GraphicsFillType_obj::SOLID_FILL)){
							fill = ((::openfl::display::GraphicsSolidFill)(stroke->fill));
							Dynamic tmp11 = thickness;
							int tmp12 = fill->color;
							Float tmp13 = fill->alpha;
							bool tmp14 = stroke->pixelHinting;
							Dynamic tmp15 = stroke->scaleMode;
							Dynamic tmp16 = stroke->caps;
							Dynamic tmp17 = stroke->joints;
							Float tmp18 = stroke->miterLimit;
							this->lineStyle(tmp11,tmp12,tmp13,tmp14,tmp15,tmp16,tmp17,tmp18);
						}
						else if (  ( _switch_2==::openfl::display::GraphicsFillType_obj::BITMAP_FILL)){
							bitmapFill = ((::openfl::display::GraphicsBitmapFill)(stroke->fill));
							Dynamic tmp11 = thickness;
							bool tmp12 = stroke->pixelHinting;
							Dynamic tmp13 = stroke->scaleMode;
							Dynamic tmp14 = stroke->caps;
							Dynamic tmp15 = stroke->joints;
							Float tmp16 = stroke->miterLimit;
							this->lineStyle(tmp11,(int)0,(int)1,tmp12,tmp13,tmp14,tmp15,tmp16);
							::openfl::display::BitmapData tmp17 = bitmapFill->bitmapData;
							::openfl::geom::Matrix tmp18 = bitmapFill->matrix;
							bool tmp19 = bitmapFill->repeat;
							bool tmp20 = bitmapFill->smooth;
							this->lineBitmapStyle(tmp17,tmp18,tmp19,tmp20);
						}
						else if (  ( _switch_2==::openfl::display::GraphicsFillType_obj::GRADIENT_FILL)){
							gradientFill = ((::openfl::display::GraphicsGradientFill)(stroke->fill));
							Dynamic tmp11 = thickness;
							bool tmp12 = stroke->pixelHinting;
							Dynamic tmp13 = stroke->scaleMode;
							Dynamic tmp14 = stroke->caps;
							Dynamic tmp15 = stroke->joints;
							Float tmp16 = stroke->miterLimit;
							this->lineStyle(tmp11,(int)0,(int)1,tmp12,tmp13,tmp14,tmp15,tmp16);
							Dynamic tmp17 = gradientFill->type;
							::openfl::geom::Matrix tmp18 = gradientFill->matrix;
							Dynamic tmp19 = gradientFill->spreadMethod;
							Dynamic tmp20 = gradientFill->interpolationMethod;
							Float tmp21 = gradientFill->focalPointRatio;
							this->lineGradientStyle(tmp17,gradientFill->colors,gradientFill->alphas,gradientFill->ratios,tmp18,tmp19,tmp20,tmp21);
						}
						else  {
						}
;
;
					}
					else{
						this->lineStyle(null(),null(),null(),null(),null(),null(),null(),null());
					}
				}
				else if (  ( _switch_1==::openfl::display::GraphicsDataType_obj::PATH)){
					path = ((::openfl::display::GraphicsPath)(graphics));
					::openfl::_Vector::IntVector tmp7 = path->commands;
					::openfl::_Vector::FloatVector tmp8 = path->data;
					Dynamic tmp9 = path->winding;
					this->drawPath(tmp7,tmp8,tmp9);
				}
				else if (  ( _switch_1==::openfl::display::GraphicsDataType_obj::TRIANGLE_PATH)){
					trianglePath = ((::openfl::display::GraphicsTrianglePath)(graphics));
					::openfl::_Vector::FloatVector tmp7 = trianglePath->vertices;
					::openfl::_Vector::IntVector tmp8 = trianglePath->indices;
					::openfl::_Vector::FloatVector tmp9 = trianglePath->uvtData;
					Dynamic tmp10 = trianglePath->culling;
					this->drawTriangles(tmp7,tmp8,tmp9,tmp10);
				}
				else if (  ( _switch_1==::openfl::display::GraphicsDataType_obj::END)){
					this->endFill();
				}
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Graphics_obj,drawGraphicsData,(void))

Void Graphics_obj::drawPath( ::openfl::_Vector::IntVector commands,::openfl::_Vector::FloatVector data,Dynamic __o_winding){
Dynamic winding = __o_winding.Default(0);
{
		int dataIndex = (int)0;
		{
			int _g = (int)0;
			while((true)){
				int tmp = _g;
				int tmp1 = commands->get_length();
				bool tmp2 = (tmp < tmp1);
				bool tmp3 = !(tmp2);
				if ((tmp3)){
					break;
				}
				int tmp4 = _g;
				int tmp5 = commands->get(tmp4);
				int command = tmp5;
				++(_g);
				int tmp6 = command;
				int _switch_3 = (tmp6);
				if (  ( _switch_3==(int)1)){
					int tmp7 = dataIndex;
					Float tmp8 = data->get(tmp7);
					Float tmp9 = tmp8;
					int tmp10 = (dataIndex + (int)1);
					Float tmp11 = data->get(tmp10);
					Float tmp12 = tmp11;
					this->moveTo(tmp9,tmp12);
					hx::AddEq(dataIndex,(int)2);
				}
				else if (  ( _switch_3==(int)2)){
					int tmp7 = dataIndex;
					Float tmp8 = data->get(tmp7);
					Float tmp9 = tmp8;
					int tmp10 = (dataIndex + (int)1);
					Float tmp11 = data->get(tmp10);
					Float tmp12 = tmp11;
					this->lineTo(tmp9,tmp12);
					hx::AddEq(dataIndex,(int)2);
				}
				else if (  ( _switch_3==(int)4)){
					int tmp7 = (dataIndex + (int)2);
					Float tmp8 = data->get(tmp7);
					Float tmp9 = tmp8;
					int tmp10 = (dataIndex + (int)3);
					Float tmp11 = data->get(tmp10);
					Float tmp12 = tmp11;
					this->moveTo(tmp9,tmp12);
					break;
					hx::AddEq(dataIndex,(int)4);
				}
				else if (  ( _switch_3==(int)5)){
					int tmp7 = (dataIndex + (int)2);
					Float tmp8 = data->get(tmp7);
					Float tmp9 = tmp8;
					int tmp10 = (dataIndex + (int)3);
					Float tmp11 = data->get(tmp10);
					Float tmp12 = tmp11;
					this->lineTo(tmp9,tmp12);
					break;
					hx::AddEq(dataIndex,(int)4);
				}
				else if (  ( _switch_3==(int)3)){
					int tmp7 = dataIndex;
					Float tmp8 = data->get(tmp7);
					Float tmp9 = tmp8;
					int tmp10 = (dataIndex + (int)1);
					Float tmp11 = data->get(tmp10);
					Float tmp12 = tmp11;
					int tmp13 = (dataIndex + (int)2);
					Float tmp14 = data->get(tmp13);
					Float tmp15 = tmp14;
					int tmp16 = (dataIndex + (int)3);
					Float tmp17 = data->get(tmp16);
					Float tmp18 = tmp17;
					this->curveTo(tmp9,tmp12,tmp15,tmp18);
					hx::AddEq(dataIndex,(int)4);
				}
				else if (  ( _switch_3==(int)6)){
					int tmp7 = dataIndex;
					Float tmp8 = data->get(tmp7);
					Float tmp9 = tmp8;
					int tmp10 = (dataIndex + (int)1);
					Float tmp11 = data->get(tmp10);
					Float tmp12 = tmp11;
					int tmp13 = (dataIndex + (int)2);
					Float tmp14 = data->get(tmp13);
					Float tmp15 = tmp14;
					int tmp16 = (dataIndex + (int)3);
					Float tmp17 = data->get(tmp16);
					Float tmp18 = tmp17;
					int tmp19 = (dataIndex + (int)4);
					Float tmp20 = data->get(tmp19);
					Float tmp21 = tmp20;
					int tmp22 = (dataIndex + (int)5);
					Float tmp23 = data->get(tmp22);
					Float tmp24 = tmp23;
					this->cubicCurveTo(tmp9,tmp12,tmp15,tmp18,tmp21,tmp24);
					hx::AddEq(dataIndex,(int)6);
				}
				else  {
				}
;
;
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC3(Graphics_obj,drawPath,(void))

Void Graphics_obj::drawRect( Float x,Float y,Float width,Float height){
{
		bool tmp = (width <= (int)0);
		bool tmp1 = !(tmp);
		bool tmp2;
		if ((tmp1)){
			tmp2 = (height <= (int)0);
		}
		else{
			tmp2 = true;
		}
		if ((tmp2)){
			return null();
		}
		Float tmp3 = x;
		Float tmp4 = this->__strokePadding;
		Float tmp5 = (tmp3 - tmp4);
		Float tmp6 = y;
		Float tmp7 = this->__strokePadding;
		Float tmp8 = (tmp6 - tmp7);
		this->__inflateBounds(tmp5,tmp8);
		Float tmp9 = (x + width);
		Float tmp10 = this->__strokePadding;
		Float tmp11 = (tmp9 + tmp10);
		Float tmp12 = (y + height);
		Float tmp13 = this->__strokePadding;
		Float tmp14 = (tmp12 + tmp13);
		this->__inflateBounds(tmp11,tmp14);
		::openfl::_internal::renderer::DrawCommandBuffer tmp15 = this->__commands;
		Float tmp16 = x;
		Float tmp17 = y;
		Float tmp18 = width;
		Float tmp19 = height;
		tmp15->drawRect(tmp16,tmp17,tmp18,tmp19);
		this->set___dirty(true);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC4(Graphics_obj,drawRect,(void))

Void Graphics_obj::drawRoundRect( Float x,Float y,Float width,Float height,Float ellipseWidth,Dynamic ellipseHeight){
{
		bool tmp = (width <= (int)0);
		bool tmp1 = !(tmp);
		bool tmp2;
		if ((tmp1)){
			tmp2 = (height <= (int)0);
		}
		else{
			tmp2 = true;
		}
		if ((tmp2)){
			return null();
		}
		Float tmp3 = x;
		Float tmp4 = this->__strokePadding;
		Float tmp5 = (tmp3 - tmp4);
		Float tmp6 = y;
		Float tmp7 = this->__strokePadding;
		Float tmp8 = (tmp6 - tmp7);
		this->__inflateBounds(tmp5,tmp8);
		Float tmp9 = (x + width);
		Float tmp10 = this->__strokePadding;
		Float tmp11 = (tmp9 + tmp10);
		Float tmp12 = (y + height);
		Float tmp13 = this->__strokePadding;
		Float tmp14 = (tmp12 + tmp13);
		this->__inflateBounds(tmp11,tmp14);
		::openfl::_internal::renderer::DrawCommandBuffer tmp15 = this->__commands;
		Float tmp16 = x;
		Float tmp17 = y;
		Float tmp18 = width;
		Float tmp19 = height;
		Float tmp20 = ellipseWidth;
		Dynamic tmp21 = ellipseHeight;
		tmp15->drawRoundRect(tmp16,tmp17,tmp18,tmp19,tmp20,tmp21);
		this->set___dirty(true);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC6(Graphics_obj,drawRoundRect,(void))

Void Graphics_obj::drawRoundRectComplex( Float x,Float y,Float width,Float height,Float topLeftRadius,Float topRightRadius,Float bottomLeftRadius,Float bottomRightRadius){
{
		bool tmp = (width <= (int)0);
		bool tmp1 = !(tmp);
		bool tmp2;
		if ((tmp1)){
			tmp2 = (height <= (int)0);
		}
		else{
			tmp2 = true;
		}
		if ((tmp2)){
			return null();
		}
		Float tmp3 = x;
		Float tmp4 = this->__strokePadding;
		Float tmp5 = (tmp3 - tmp4);
		Float tmp6 = y;
		Float tmp7 = this->__strokePadding;
		Float tmp8 = (tmp6 - tmp7);
		this->__inflateBounds(tmp5,tmp8);
		Float tmp9 = (x + width);
		Float tmp10 = this->__strokePadding;
		Float tmp11 = (tmp9 + tmp10);
		Float tmp12 = (y + height);
		Float tmp13 = this->__strokePadding;
		Float tmp14 = (tmp12 + tmp13);
		this->__inflateBounds(tmp11,tmp14);
		Float tmp15 = (x + width);
		Float xw = tmp15;
		Float tmp16 = (y + height);
		Float yh = tmp16;
		bool tmp17 = (width < height);
		Float tmp18;
		if ((tmp17)){
			tmp18 = (width * (int)2);
		}
		else{
			tmp18 = (height * (int)2);
		}
		Float minSize = tmp18;
		bool tmp19 = (topLeftRadius < minSize);
		Float tmp20;
		if ((tmp19)){
			tmp20 = topLeftRadius;
		}
		else{
			tmp20 = minSize;
		}
		topLeftRadius = tmp20;
		bool tmp21 = (topRightRadius < minSize);
		Float tmp22;
		if ((tmp21)){
			tmp22 = topRightRadius;
		}
		else{
			tmp22 = minSize;
		}
		topRightRadius = tmp22;
		bool tmp23 = (bottomLeftRadius < minSize);
		Float tmp24;
		if ((tmp23)){
			tmp24 = bottomLeftRadius;
		}
		else{
			tmp24 = minSize;
		}
		bottomLeftRadius = tmp24;
		bool tmp25 = (bottomRightRadius < minSize);
		Float tmp26;
		if ((tmp25)){
			tmp26 = bottomRightRadius;
		}
		else{
			tmp26 = minSize;
		}
		bottomRightRadius = tmp26;
		Float tmp27 = ::Math_obj::PI;
		Float tmp28 = (Float(tmp27) / Float((int)180));
		Float tmp29 = ((int)45 * tmp28);
		Float tmp30 = ::Math_obj::sin(tmp29);
		Float tmp31 = ((int)1 - tmp30);
		Float anchor = tmp31;
		Float tmp32 = ::Math_obj::PI;
		Float tmp33 = (Float(tmp32) / Float((int)180));
		Float tmp34 = (((Float)22.5) * tmp33);
		Float tmp35 = ::Math_obj::tan(tmp34);
		Float tmp36 = ((int)1 - tmp35);
		Float control = tmp36;
		Float tmp37 = (bottomRightRadius * anchor);
		Float a = tmp37;
		Float tmp38 = (bottomRightRadius * control);
		Float s = tmp38;
		Float tmp39 = xw;
		Float tmp40 = (yh - bottomRightRadius);
		this->moveTo(tmp39,tmp40);
		Float tmp41 = xw;
		Float tmp42 = (yh - s);
		Float tmp43 = (xw - a);
		Float tmp44 = (yh - a);
		this->curveTo(tmp41,tmp42,tmp43,tmp44);
		Float tmp45 = (xw - s);
		Float tmp46 = yh;
		Float tmp47 = (xw - bottomRightRadius);
		Float tmp48 = yh;
		this->curveTo(tmp45,tmp46,tmp47,tmp48);
		Float tmp49 = (bottomLeftRadius * anchor);
		a = tmp49;
		Float tmp50 = (bottomLeftRadius * control);
		s = tmp50;
		Float tmp51 = (x + bottomLeftRadius);
		Float tmp52 = yh;
		this->lineTo(tmp51,tmp52);
		Float tmp53 = (x + s);
		Float tmp54 = yh;
		Float tmp55 = (x + a);
		Float tmp56 = (yh - a);
		this->curveTo(tmp53,tmp54,tmp55,tmp56);
		Float tmp57 = x;
		Float tmp58 = (yh - s);
		Float tmp59 = x;
		Float tmp60 = (yh - bottomLeftRadius);
		this->curveTo(tmp57,tmp58,tmp59,tmp60);
		Float tmp61 = (topLeftRadius * anchor);
		a = tmp61;
		Float tmp62 = (topLeftRadius * control);
		s = tmp62;
		Float tmp63 = x;
		Float tmp64 = (y + topLeftRadius);
		this->lineTo(tmp63,tmp64);
		Float tmp65 = x;
		Float tmp66 = (y + s);
		Float tmp67 = (x + a);
		Float tmp68 = (y + a);
		this->curveTo(tmp65,tmp66,tmp67,tmp68);
		Float tmp69 = (x + s);
		Float tmp70 = y;
		Float tmp71 = (x + topLeftRadius);
		Float tmp72 = y;
		this->curveTo(tmp69,tmp70,tmp71,tmp72);
		Float tmp73 = (topRightRadius * anchor);
		a = tmp73;
		Float tmp74 = (topRightRadius * control);
		s = tmp74;
		Float tmp75 = (xw - topRightRadius);
		Float tmp76 = y;
		this->lineTo(tmp75,tmp76);
		Float tmp77 = (xw - s);
		Float tmp78 = y;
		Float tmp79 = (xw - a);
		Float tmp80 = (y + a);
		this->curveTo(tmp77,tmp78,tmp79,tmp80);
		Float tmp81 = xw;
		Float tmp82 = (y + s);
		Float tmp83 = xw;
		Float tmp84 = (y + topRightRadius);
		this->curveTo(tmp81,tmp82,tmp83,tmp84);
		Float tmp85 = xw;
		Float tmp86 = (yh - bottomRightRadius);
		this->lineTo(tmp85,tmp86);
		this->set___dirty(true);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC8(Graphics_obj,drawRoundRectComplex,(void))

Void Graphics_obj::drawTriangles( ::openfl::_Vector::FloatVector vertices,::openfl::_Vector::IntVector indices,::openfl::_Vector::FloatVector uvtData,Dynamic __o_culling){
Dynamic culling = __o_culling.Default(1);
{
		bool tmp = (vertices == null());
		bool tmp1 = !(tmp);
		bool tmp2 = tmp1;
		bool tmp3;
		if ((tmp2)){
			tmp3 = (indices == null());
		}
		else{
			tmp3 = true;
		}
		bool tmp4 = !(tmp3);
		bool tmp5;
		if ((tmp4)){
			tmp5 = (uvtData == null());
		}
		else{
			tmp5 = true;
		}
		if ((tmp5)){
			return null();
		}
		int tmp6 = vertices->get_length();
		Float tmp7 = (Float(tmp6) / Float((int)2));
		int tmp8 = ::Std_obj::_int(tmp7);
		int vlen = tmp8;
		bool tmp9 = (culling == null());
		if ((tmp9)){
			culling = ((Dynamic)((int)1));
		}
		bool tmp10 = (indices == null());
		if ((tmp10)){
			int tmp11 = hx::Mod(vlen,(int)3);
			bool tmp12 = (tmp11 != (int)0);
			if ((tmp12)){
				::openfl::errors::ArgumentError tmp13 = ::openfl::errors::ArgumentError_obj::__new(HX_HCSTRING("Not enough vertices to close a triangle.","\xfe","\xc6","\x58","\x0d"));
				HX_STACK_DO_THROW(tmp13);
			}
			::openfl::_Vector::IntVector tmp13;
			{
				int length = null();
				bool fixed = null();
				::openfl::_Vector::IntVector tmp14 = ::openfl::_Vector::IntVector_obj::__new(length,fixed,null());
				::openfl::_Vector::IntVector tmp15 = tmp14;
				tmp13 = tmp15;
			}
			indices = tmp13;
			{
				int _g = (int)0;
				while((true)){
					bool tmp14 = (_g < vlen);
					bool tmp15 = !(tmp14);
					if ((tmp15)){
						break;
					}
					int tmp16 = (_g)++;
					int i = tmp16;
					int tmp17 = i;
					indices->push(tmp17);
				}
			}
		}
		this->__inflateBounds((int)0,(int)0);
		Float tmp11 = ::Math_obj::NEGATIVE_INFINITY;
		Float tmpx = tmp11;
		Float tmp12 = ::Math_obj::NEGATIVE_INFINITY;
		Float tmpy = tmp12;
		Float tmp13 = ::Math_obj::NEGATIVE_INFINITY;
		Float maxX = tmp13;
		Float tmp14 = ::Math_obj::NEGATIVE_INFINITY;
		Float maxY = tmp14;
		{
			int _g = (int)0;
			while((true)){
				bool tmp15 = (_g < vlen);
				bool tmp16 = !(tmp15);
				if ((tmp16)){
					break;
				}
				int tmp17 = (_g)++;
				int i = tmp17;
				int tmp18 = (i * (int)2);
				Float tmp19 = vertices->get(tmp18);
				tmpx = tmp19;
				int tmp20 = (i * (int)2);
				int tmp21 = (tmp20 + (int)1);
				Float tmp22 = vertices->get(tmp21);
				tmpy = tmp22;
				bool tmp23 = (maxX < tmpx);
				if ((tmp23)){
					maxX = tmpx;
				}
				bool tmp24 = (maxY < tmpy);
				if ((tmp24)){
					maxY = tmpy;
				}
			}
		}
		Float tmp15 = maxX;
		Float tmp16 = maxY;
		this->__inflateBounds(tmp15,tmp16);
		::openfl::_internal::renderer::DrawCommandBuffer tmp17 = this->__commands;
		::openfl::_Vector::FloatVector tmp18 = vertices;
		::openfl::_Vector::IntVector tmp19 = indices;
		::openfl::_Vector::FloatVector tmp20 = uvtData;
		Dynamic tmp21 = culling;
		tmp17->drawTriangles(tmp18,tmp19,tmp20,tmp21);
		this->set___dirty(true);
		this->__visible = true;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC4(Graphics_obj,drawTriangles,(void))

Void Graphics_obj::endFill( ){
{
		::openfl::_internal::renderer::DrawCommandBuffer tmp = this->__commands;
		tmp->endFill();
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(Graphics_obj,endFill,(void))

Void Graphics_obj::lineBitmapStyle( ::openfl::display::BitmapData bitmap,::openfl::geom::Matrix matrix,hx::Null< bool >  __o_repeat,hx::Null< bool >  __o_smooth){
bool repeat = __o_repeat.Default(true);
bool smooth = __o_smooth.Default(false);
{
		::openfl::_internal::renderer::DrawCommandBuffer tmp = this->__commands;
		::openfl::display::BitmapData tmp1 = bitmap;
		bool tmp2 = (matrix != null());
		::openfl::geom::Matrix tmp3;
		if ((tmp2)){
			tmp3 = matrix->clone();
		}
		else{
			tmp3 = null();
		}
		bool tmp4 = repeat;
		bool tmp5 = smooth;
		tmp->lineBitmapStyle(tmp1,tmp3,tmp4,tmp5);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC4(Graphics_obj,lineBitmapStyle,(void))

Void Graphics_obj::lineGradientStyle( Dynamic type,Array< int > colors,Array< Float > alphas,Array< int > ratios,::openfl::geom::Matrix matrix,Dynamic __o_spreadMethod,Dynamic __o_interpolationMethod,hx::Null< Float >  __o_focalPointRatio){
Dynamic spreadMethod = __o_spreadMethod.Default(0);
Dynamic interpolationMethod = __o_interpolationMethod.Default(1);
Float focalPointRatio = __o_focalPointRatio.Default(0);
{
		::openfl::_internal::renderer::DrawCommandBuffer tmp = this->__commands;
		Dynamic tmp1 = type;
		::openfl::geom::Matrix tmp2 = matrix;
		Dynamic tmp3 = spreadMethod;
		Dynamic tmp4 = interpolationMethod;
		Float tmp5 = focalPointRatio;
		tmp->lineGradientStyle(tmp1,colors,alphas,ratios,tmp2,tmp3,tmp4,tmp5);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC8(Graphics_obj,lineGradientStyle,(void))

Void Graphics_obj::lineStyle( Dynamic thickness,hx::Null< int >  __o_color,hx::Null< Float >  __o_alpha,hx::Null< bool >  __o_pixelHinting,Dynamic __o_scaleMode,Dynamic caps,Dynamic joints,hx::Null< Float >  __o_miterLimit){
int color = __o_color.Default(0);
Float alpha = __o_alpha.Default(1);
bool pixelHinting = __o_pixelHinting.Default(false);
Dynamic scaleMode = __o_scaleMode.Default(2);
Float miterLimit = __o_miterLimit.Default(3);
{
		bool tmp = (thickness != null());
		if ((tmp)){
			bool tmp1 = (joints == ((Dynamic)((int)1)));
			if ((tmp1)){
				Dynamic tmp2 = thickness;
				Float tmp3 = this->__strokePadding;
				bool tmp4 = (tmp2 > tmp3);
				if ((tmp4)){
					this->__strokePadding = thickness;
				}
			}
			else{
				Float tmp2 = (Float(thickness) / Float((int)2));
				Float tmp3 = this->__strokePadding;
				bool tmp4 = (tmp2 > tmp3);
				if ((tmp4)){
					Float tmp5 = (Float(thickness) / Float((int)2));
					this->__strokePadding = tmp5;
				}
			}
		}
		::openfl::_internal::renderer::DrawCommandBuffer tmp1 = this->__commands;
		Dynamic tmp2 = thickness;
		int tmp3 = color;
		Float tmp4 = alpha;
		bool tmp5 = pixelHinting;
		Dynamic tmp6 = scaleMode;
		Dynamic tmp7 = caps;
		Dynamic tmp8 = joints;
		Float tmp9 = miterLimit;
		tmp1->lineStyle(tmp2,tmp3,tmp4,tmp5,tmp6,tmp7,tmp8,tmp9);
		bool tmp10 = (thickness != null());
		if ((tmp10)){
			this->__visible = true;
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC8(Graphics_obj,lineStyle,(void))

Void Graphics_obj::lineTo( Float x,Float y){
{
		Float tmp = x;
		bool tmp1 = ::Math_obj::isFinite(tmp);
		bool tmp2 = tmp1;
		bool tmp3 = !(tmp2);
		bool tmp4 = !(tmp3);
		bool tmp5;
		if ((tmp4)){
			Float tmp6 = y;
			Float tmp7 = tmp6;
			bool tmp8 = ::Math_obj::isFinite(tmp7);
			bool tmp9 = tmp8;
			bool tmp10 = tmp9;
			tmp5 = !(tmp10);
		}
		else{
			tmp5 = true;
		}
		if ((tmp5)){
			return null();
		}
		Float tmp6 = this->__positionX;
		Float tmp7 = this->__strokePadding;
		Float tmp8 = (tmp6 - tmp7);
		Float tmp9 = this->__positionY;
		Float tmp10 = this->__strokePadding;
		Float tmp11 = (tmp9 - tmp10);
		this->__inflateBounds(tmp8,tmp11);
		Float tmp12 = this->__positionX;
		Float tmp13 = this->__strokePadding;
		Float tmp14 = (tmp12 + tmp13);
		Float tmp15 = this->__positionY;
		Float tmp16 = this->__strokePadding;
		Float tmp17 = (tmp15 + tmp16);
		this->__inflateBounds(tmp14,tmp17);
		this->__positionX = x;
		this->__positionY = y;
		Float tmp18 = this->__positionX;
		Float tmp19 = this->__strokePadding;
		Float tmp20 = (tmp18 - tmp19);
		Float tmp21 = this->__positionY;
		Float tmp22 = this->__strokePadding;
		Float tmp23 = (tmp21 - tmp22);
		this->__inflateBounds(tmp20,tmp23);
		Float tmp24 = this->__positionX;
		Float tmp25 = this->__strokePadding;
		Float tmp26 = (tmp25 * (int)2);
		Float tmp27 = (tmp24 + tmp26);
		Float tmp28 = this->__positionY;
		Float tmp29 = this->__strokePadding;
		Float tmp30 = (tmp28 + tmp29);
		this->__inflateBounds(tmp27,tmp30);
		::openfl::_internal::renderer::DrawCommandBuffer tmp31 = this->__commands;
		Float tmp32 = x;
		Float tmp33 = y;
		tmp31->lineTo(tmp32,tmp33);
		this->set___dirty(true);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(Graphics_obj,lineTo,(void))

Void Graphics_obj::moveTo( Float x,Float y){
{
		this->__positionX = x;
		this->__positionY = y;
		::openfl::_internal::renderer::DrawCommandBuffer tmp = this->__commands;
		Float tmp1 = x;
		Float tmp2 = y;
		tmp->moveTo(tmp1,tmp2);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(Graphics_obj,moveTo,(void))

::openfl::_Vector::ObjectVector Graphics_obj::readGraphicsData( hx::Null< bool >  __o_recurse){
bool recurse = __o_recurse.Default(true);
{
		::openfl::_Vector::ObjectVector tmp;
		{
			int length = null();
			bool fixed = null();
			::openfl::_Vector::ObjectVector tmp1 = ::openfl::_Vector::ObjectVector_obj::__new(length,fixed,null());
			::openfl::_Vector::ObjectVector tmp2 = tmp1;
			tmp = tmp2;
		}
		::openfl::_Vector::ObjectVector graphicsData = tmp;
		::openfl::display::DisplayObject tmp1 = this->__owner;
		::openfl::_Vector::ObjectVector tmp2 = graphicsData;
		bool tmp3 = recurse;
		tmp1->__readGraphicsData(tmp2,tmp3);
		::openfl::_Vector::ObjectVector tmp4 = graphicsData;
		return tmp4;
	}
}


HX_DEFINE_DYNAMIC_FUNC1(Graphics_obj,readGraphicsData,return )

Float Graphics_obj::__calculateBezierCubicPoint( Float t,Float p1,Float p2,Float p3,Float p4){
	Float tmp = ((int)1 - t);
	Float iT = tmp;
	Float tmp1 = p1;
	Float tmp2 = (iT * iT);
	Float tmp3 = iT;
	Float tmp4 = (tmp2 * tmp3);
	Float tmp5 = (tmp1 * tmp4);
	Float tmp6 = ((int)3 * p2);
	Float tmp7 = t;
	Float tmp8 = (tmp6 * tmp7);
	Float tmp9 = (iT * iT);
	Float tmp10 = (tmp8 * tmp9);
	Float tmp11 = (tmp5 + tmp10);
	Float tmp12 = ((int)3 * p3);
	Float tmp13 = iT;
	Float tmp14 = (tmp12 * tmp13);
	Float tmp15 = (t * t);
	Float tmp16 = (tmp14 * tmp15);
	Float tmp17 = (tmp11 + tmp16);
	Float tmp18 = p4;
	Float tmp19 = (t * t);
	Float tmp20 = t;
	Float tmp21 = (tmp19 * tmp20);
	Float tmp22 = (tmp18 * tmp21);
	Float tmp23 = (tmp17 + tmp22);
	return tmp23;
}


HX_DEFINE_DYNAMIC_FUNC5(Graphics_obj,__calculateBezierCubicPoint,return )

Float Graphics_obj::__calculateBezierQuadPoint( Float t,Float p1,Float p2,Float p3){
	Float tmp = ((int)1 - t);
	Float iT = tmp;
	Float tmp1 = (iT * iT);
	Float tmp2 = p1;
	Float tmp3 = (tmp1 * tmp2);
	Float tmp4 = ((int)2 * iT);
	Float tmp5 = t;
	Float tmp6 = (tmp4 * tmp5);
	Float tmp7 = p2;
	Float tmp8 = (tmp6 * tmp7);
	Float tmp9 = (tmp3 + tmp8);
	Float tmp10 = (t * t);
	Float tmp11 = p3;
	Float tmp12 = (tmp10 * tmp11);
	Float tmp13 = (tmp9 + tmp12);
	return tmp13;
}


HX_DEFINE_DYNAMIC_FUNC4(Graphics_obj,__calculateBezierQuadPoint,return )

Void Graphics_obj::__cleanup( ){
{
		::openfl::geom::Rectangle tmp = this->__bounds;
		bool tmp1 = (tmp != null());
		if ((tmp1)){
			this->set___dirty(true);
			this->__transformDirty = true;
		}
		this->__bitmap = null();
		this->__cairo = null();
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(Graphics_obj,__cleanup,(void))

Void Graphics_obj::__getBounds( ::openfl::geom::Rectangle rect,::openfl::geom::Matrix matrix){
{
		::openfl::geom::Rectangle tmp = this->__bounds;
		bool tmp1 = (tmp == null());
		if ((tmp1)){
			return null();
		}
		::lime::utils::ObjectPool_openfl_geom_Rectangle tmp2 = ::openfl::geom::Rectangle_obj::__pool;
		::openfl::geom::Rectangle tmp3 = tmp2->get();
		::openfl::geom::Rectangle bounds = tmp3;
		::openfl::geom::Rectangle tmp4 = this->__bounds;
		::openfl::geom::Rectangle tmp5 = bounds;
		::openfl::geom::Matrix tmp6 = matrix;
		tmp4->__transform(tmp5,tmp6);
		Float tmp7 = bounds->x;
		Float tmp8 = bounds->y;
		Float tmp9 = bounds->width;
		Float tmp10 = bounds->height;
		rect->__expand(tmp7,tmp8,tmp9,tmp10);
		::lime::utils::ObjectPool_openfl_geom_Rectangle tmp11 = ::openfl::geom::Rectangle_obj::__pool;
		::openfl::geom::Rectangle tmp12 = bounds;
		tmp11->release(tmp12);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(Graphics_obj,__getBounds,(void))

bool Graphics_obj::__hitTest( Float x,Float y,bool shapeFlag,::openfl::geom::Matrix matrix){
	::openfl::geom::Rectangle tmp = this->__bounds;
	bool tmp1 = (tmp == null());
	if ((tmp1)){
		return false;
	}
	Float tmp2;
	{
		Float tmp3 = (matrix->a * matrix->d);
		Float tmp4 = (matrix->b * matrix->c);
		Float tmp5 = (tmp3 - tmp4);
		Float norm = tmp5;
		bool tmp6 = (norm == (int)0);
		if ((tmp6)){
			Float tmp7 = matrix->tx;
			tmp2 = -(tmp7);
		}
		else{
			Float tmp7 = (Float(((Float)1.0)) / Float(norm));
			Float tmp8 = matrix->c;
			Float tmp9 = (matrix->ty - y);
			Float tmp10 = (tmp8 * tmp9);
			Float tmp11 = matrix->d;
			Float tmp12 = (x - matrix->tx);
			Float tmp13 = (tmp11 * tmp12);
			Float tmp14 = (tmp10 + tmp13);
			tmp2 = (tmp7 * tmp14);
		}
	}
	Float px = tmp2;
	Float tmp3;
	{
		Float tmp4 = (matrix->a * matrix->d);
		Float tmp5 = (matrix->b * matrix->c);
		Float tmp6 = (tmp4 - tmp5);
		Float norm = tmp6;
		bool tmp7 = (norm == (int)0);
		if ((tmp7)){
			Float tmp8 = matrix->ty;
			tmp3 = -(tmp8);
		}
		else{
			Float tmp8 = (Float(((Float)1.0)) / Float(norm));
			Float tmp9 = matrix->a;
			Float tmp10 = (y - matrix->ty);
			Float tmp11 = (tmp9 * tmp10);
			Float tmp12 = matrix->b;
			Float tmp13 = (matrix->tx - x);
			Float tmp14 = (tmp12 * tmp13);
			Float tmp15 = (tmp11 + tmp14);
			tmp3 = (tmp8 * tmp15);
		}
	}
	Float py = tmp3;
	Float tmp4 = px;
	::openfl::geom::Rectangle tmp5 = this->__bounds;
	Float tmp6 = tmp5->x;
	bool tmp7 = (tmp4 > tmp6);
	bool tmp8 = tmp7;
	bool tmp9;
	if ((tmp8)){
		Float tmp10 = py;
		::openfl::geom::Rectangle tmp11 = this->__bounds;
		::openfl::geom::Rectangle tmp12 = tmp11;
		::openfl::geom::Rectangle tmp13 = tmp12;
		Float tmp14 = tmp13->y;
		tmp9 = (tmp10 > tmp14);
	}
	else{
		tmp9 = false;
	}
	bool tmp10;
	if ((tmp9)){
		::openfl::geom::Rectangle tmp11 = this->__bounds;
		::openfl::geom::Rectangle tmp12 = tmp11;
		Float tmp13 = px;
		Float tmp14 = py;
		Float tmp15 = tmp13;
		Float tmp16 = tmp14;
		tmp10 = tmp12->contains(tmp15,tmp16);
	}
	else{
		tmp10 = false;
	}
	if ((tmp10)){
		bool tmp11 = shapeFlag;
		if ((tmp11)){
			Float tmp12 = px;
			Float tmp13 = py;
			bool tmp14 = ::openfl::_internal::renderer::cairo::CairoGraphics_obj::hitTest(hx::ObjectPtr<OBJ_>(this),tmp12,tmp13);
			return tmp14;
		}
		return true;
	}
	return false;
}


HX_DEFINE_DYNAMIC_FUNC4(Graphics_obj,__hitTest,return )

Void Graphics_obj::__inflateBounds( Float x,Float y){
{
		::openfl::geom::Rectangle tmp = this->__bounds;
		bool tmp1 = (tmp == null());
		if ((tmp1)){
			::openfl::geom::Rectangle tmp2 = ::openfl::geom::Rectangle_obj::__new(x,y,(int)0,(int)0);
			this->__bounds = tmp2;
			this->__transformDirty = true;
			return null();
		}
		Float tmp2 = x;
		::openfl::geom::Rectangle tmp3 = this->__bounds;
		Float tmp4 = tmp3->x;
		bool tmp5 = (tmp2 < tmp4);
		if ((tmp5)){
			::openfl::geom::Rectangle tmp6 = this->__bounds;
			Float tmp7 = tmp6->x;
			Float tmp8 = x;
			Float tmp9 = (tmp7 - tmp8);
			::openfl::geom::Rectangle tmp10 = this->__bounds;
			hx::AddEq(tmp10->width,tmp9);
			::openfl::geom::Rectangle tmp11 = this->__bounds;
			tmp11->x = x;
			this->__transformDirty = true;
		}
		Float tmp6 = y;
		::openfl::geom::Rectangle tmp7 = this->__bounds;
		Float tmp8 = tmp7->y;
		bool tmp9 = (tmp6 < tmp8);
		if ((tmp9)){
			::openfl::geom::Rectangle tmp10 = this->__bounds;
			Float tmp11 = tmp10->y;
			Float tmp12 = y;
			Float tmp13 = (tmp11 - tmp12);
			::openfl::geom::Rectangle tmp14 = this->__bounds;
			hx::AddEq(tmp14->height,tmp13);
			::openfl::geom::Rectangle tmp15 = this->__bounds;
			tmp15->y = y;
			this->__transformDirty = true;
		}
		Float tmp10 = x;
		::openfl::geom::Rectangle tmp11 = this->__bounds;
		Float tmp12 = tmp11->x;
		::openfl::geom::Rectangle tmp13 = this->__bounds;
		Float tmp14 = tmp13->width;
		Float tmp15 = (tmp12 + tmp14);
		bool tmp16 = (tmp10 > tmp15);
		if ((tmp16)){
			Float tmp17 = x;
			::openfl::geom::Rectangle tmp18 = this->__bounds;
			Float tmp19 = tmp18->x;
			Float tmp20 = (tmp17 - tmp19);
			::openfl::geom::Rectangle tmp21 = this->__bounds;
			tmp21->width = tmp20;
		}
		Float tmp17 = y;
		::openfl::geom::Rectangle tmp18 = this->__bounds;
		Float tmp19 = tmp18->y;
		::openfl::geom::Rectangle tmp20 = this->__bounds;
		Float tmp21 = tmp20->height;
		Float tmp22 = (tmp19 + tmp21);
		bool tmp23 = (tmp17 > tmp22);
		if ((tmp23)){
			Float tmp24 = y;
			::openfl::geom::Rectangle tmp25 = this->__bounds;
			Float tmp26 = tmp25->y;
			Float tmp27 = (tmp24 - tmp26);
			::openfl::geom::Rectangle tmp28 = this->__bounds;
			tmp28->height = tmp27;
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(Graphics_obj,__inflateBounds,(void))

Void Graphics_obj::__readGraphicsData( ::openfl::_Vector::ObjectVector graphicsData){
{
		::openfl::_internal::renderer::DrawCommandBuffer tmp = this->__commands;
		::openfl::_internal::renderer::DrawCommandReader tmp1 = ::openfl::_internal::renderer::DrawCommandReader_obj::__new(tmp);
		::openfl::_internal::renderer::DrawCommandReader data = tmp1;
		::openfl::display::GraphicsPath path = null();
		::openfl::display::GraphicsStroke stroke;
		{
			int _g = (int)0;
			::openfl::_internal::renderer::DrawCommandBuffer tmp2 = this->__commands;
			Array< ::Dynamic > _g1 = tmp2->types;
			while((true)){
				bool tmp3 = (_g < _g1->length);
				bool tmp4 = !(tmp3);
				if ((tmp4)){
					break;
				}
				::openfl::_internal::renderer::DrawCommandType tmp5 = _g1->__get(_g).StaticCast< ::openfl::_internal::renderer::DrawCommandType >();
				::openfl::_internal::renderer::DrawCommandType type = tmp5;
				++(_g);
				switch( (int)(type->__Index())){
					case (int)3: case (int)4: case (int)15: case (int)16: case (int)5: case (int)6: case (int)7: case (int)8: {
						bool tmp6 = (path == null());
						if ((tmp6)){
							::openfl::display::GraphicsPath tmp7 = ::openfl::display::GraphicsPath_obj::__new(null(),null(),null());
							path = tmp7;
						}
					}
					;break;
					default: {
						bool tmp6 = (path != null());
						if ((tmp6)){
							::openfl::display::GraphicsPath tmp7 = path;
							graphicsData->push(tmp7);
							path = null();
						}
					}
				}
				switch( (int)(type->__Index())){
					case (int)3: {
						::openfl::_internal::renderer::DrawCommandReader tmp6;
						{
							{
								::openfl::_internal::renderer::DrawCommandType _g2 = data->prev;
								switch( (int)(_g2->__Index())){
									case (int)0: {
										hx::AddEq(data->oPos,(int)2);
										hx::AddEq(data->bPos,(int)2);
									}
									;break;
									case (int)1: {
										hx::AddEq(data->iPos,(int)1);
										hx::AddEq(data->fPos,(int)1);
									}
									;break;
									case (int)2: {
										hx::AddEq(data->oPos,(int)4);
										hx::AddEq(data->iiPos,(int)2);
										hx::AddEq(data->ffPos,(int)1);
										hx::AddEq(data->fPos,(int)1);
									}
									;break;
									case (int)3: {
										hx::AddEq(data->fPos,(int)6);
									}
									;break;
									case (int)4: {
										hx::AddEq(data->fPos,(int)4);
									}
									;break;
									case (int)5: {
										hx::AddEq(data->fPos,(int)3);
									}
									;break;
									case (int)6: {
										hx::AddEq(data->fPos,(int)4);
									}
									;break;
									case (int)7: {
										hx::AddEq(data->fPos,(int)4);
									}
									;break;
									case (int)8: {
										hx::AddEq(data->fPos,(int)5);
										hx::AddEq(data->oPos,(int)1);
									}
									;break;
									case (int)10: {
										hx::AddEq(data->oPos,(int)4);
									}
									;break;
									case (int)11: {
										Dynamic();
									}
									;break;
									case (int)12: {
										hx::AddEq(data->oPos,(int)2);
										hx::AddEq(data->bPos,(int)2);
									}
									;break;
									case (int)13: {
										hx::AddEq(data->oPos,(int)4);
										hx::AddEq(data->iiPos,(int)2);
										hx::AddEq(data->ffPos,(int)1);
										hx::AddEq(data->fPos,(int)1);
									}
									;break;
									case (int)14: {
										hx::AddEq(data->oPos,(int)4);
										hx::AddEq(data->iPos,(int)1);
										hx::AddEq(data->fPos,(int)2);
										hx::AddEq(data->bPos,(int)1);
									}
									;break;
									case (int)15: {
										hx::AddEq(data->fPos,(int)2);
									}
									;break;
									case (int)16: {
										hx::AddEq(data->fPos,(int)2);
									}
									;break;
									case (int)17: {
										hx::AddEq(data->oPos,(int)1);
									}
									;break;
									default: {
										Dynamic();
									}
								}
							}
							data->prev = ::openfl::_internal::renderer::DrawCommandType_obj::CUBIC_CURVE_TO;
							tmp6 = data;
						}
						::openfl::_internal::renderer::DrawCommandReader c = tmp6;
						::openfl::_internal::renderer::DrawCommandBuffer tmp7 = c->buffer;
						int tmp8 = c->fPos;
						int tmp9 = tmp8;
						Float tmp10 = tmp7->f->__get(tmp9);
						::openfl::_internal::renderer::DrawCommandBuffer tmp11 = c->buffer;
						int tmp12 = c->fPos;
						int tmp13 = (tmp12 + (int)1);
						Float tmp14 = tmp11->f->__get(tmp13);
						::openfl::_internal::renderer::DrawCommandBuffer tmp15 = c->buffer;
						int tmp16 = c->fPos;
						int tmp17 = (tmp16 + (int)2);
						Float tmp18 = tmp15->f->__get(tmp17);
						::openfl::_internal::renderer::DrawCommandBuffer tmp19 = c->buffer;
						int tmp20 = c->fPos;
						int tmp21 = (tmp20 + (int)3);
						Float tmp22 = tmp19->f->__get(tmp21);
						::openfl::_internal::renderer::DrawCommandBuffer tmp23 = c->buffer;
						int tmp24 = c->fPos;
						int tmp25 = (tmp24 + (int)4);
						Float tmp26 = tmp23->f->__get(tmp25);
						::openfl::_internal::renderer::DrawCommandBuffer tmp27 = c->buffer;
						int tmp28 = c->fPos;
						int tmp29 = (tmp28 + (int)5);
						Float tmp30 = tmp27->f->__get(tmp29);
						path->cubicCurveTo(tmp10,tmp14,tmp18,tmp22,tmp26,tmp30);
					}
					;break;
					case (int)4: {
						::openfl::_internal::renderer::DrawCommandReader tmp6;
						{
							{
								::openfl::_internal::renderer::DrawCommandType _g2 = data->prev;
								switch( (int)(_g2->__Index())){
									case (int)0: {
										hx::AddEq(data->oPos,(int)2);
										hx::AddEq(data->bPos,(int)2);
									}
									;break;
									case (int)1: {
										hx::AddEq(data->iPos,(int)1);
										hx::AddEq(data->fPos,(int)1);
									}
									;break;
									case (int)2: {
										hx::AddEq(data->oPos,(int)4);
										hx::AddEq(data->iiPos,(int)2);
										hx::AddEq(data->ffPos,(int)1);
										hx::AddEq(data->fPos,(int)1);
									}
									;break;
									case (int)3: {
										hx::AddEq(data->fPos,(int)6);
									}
									;break;
									case (int)4: {
										hx::AddEq(data->fPos,(int)4);
									}
									;break;
									case (int)5: {
										hx::AddEq(data->fPos,(int)3);
									}
									;break;
									case (int)6: {
										hx::AddEq(data->fPos,(int)4);
									}
									;break;
									case (int)7: {
										hx::AddEq(data->fPos,(int)4);
									}
									;break;
									case (int)8: {
										hx::AddEq(data->fPos,(int)5);
										hx::AddEq(data->oPos,(int)1);
									}
									;break;
									case (int)10: {
										hx::AddEq(data->oPos,(int)4);
									}
									;break;
									case (int)11: {
										Dynamic();
									}
									;break;
									case (int)12: {
										hx::AddEq(data->oPos,(int)2);
										hx::AddEq(data->bPos,(int)2);
									}
									;break;
									case (int)13: {
										hx::AddEq(data->oPos,(int)4);
										hx::AddEq(data->iiPos,(int)2);
										hx::AddEq(data->ffPos,(int)1);
										hx::AddEq(data->fPos,(int)1);
									}
									;break;
									case (int)14: {
										hx::AddEq(data->oPos,(int)4);
										hx::AddEq(data->iPos,(int)1);
										hx::AddEq(data->fPos,(int)2);
										hx::AddEq(data->bPos,(int)1);
									}
									;break;
									case (int)15: {
										hx::AddEq(data->fPos,(int)2);
									}
									;break;
									case (int)16: {
										hx::AddEq(data->fPos,(int)2);
									}
									;break;
									case (int)17: {
										hx::AddEq(data->oPos,(int)1);
									}
									;break;
									default: {
										Dynamic();
									}
								}
							}
							data->prev = ::openfl::_internal::renderer::DrawCommandType_obj::CURVE_TO;
							tmp6 = data;
						}
						::openfl::_internal::renderer::DrawCommandReader c = tmp6;
						::openfl::_internal::renderer::DrawCommandBuffer tmp7 = c->buffer;
						int tmp8 = c->fPos;
						int tmp9 = tmp8;
						Float tmp10 = tmp7->f->__get(tmp9);
						::openfl::_internal::renderer::DrawCommandBuffer tmp11 = c->buffer;
						int tmp12 = c->fPos;
						int tmp13 = (tmp12 + (int)1);
						Float tmp14 = tmp11->f->__get(tmp13);
						::openfl::_internal::renderer::DrawCommandBuffer tmp15 = c->buffer;
						int tmp16 = c->fPos;
						int tmp17 = (tmp16 + (int)2);
						Float tmp18 = tmp15->f->__get(tmp17);
						::openfl::_internal::renderer::DrawCommandBuffer tmp19 = c->buffer;
						int tmp20 = c->fPos;
						int tmp21 = (tmp20 + (int)3);
						Float tmp22 = tmp19->f->__get(tmp21);
						path->curveTo(tmp10,tmp14,tmp18,tmp22);
					}
					;break;
					case (int)15: {
						::openfl::_internal::renderer::DrawCommandReader tmp6;
						{
							{
								::openfl::_internal::renderer::DrawCommandType _g2 = data->prev;
								switch( (int)(_g2->__Index())){
									case (int)0: {
										hx::AddEq(data->oPos,(int)2);
										hx::AddEq(data->bPos,(int)2);
									}
									;break;
									case (int)1: {
										hx::AddEq(data->iPos,(int)1);
										hx::AddEq(data->fPos,(int)1);
									}
									;break;
									case (int)2: {
										hx::AddEq(data->oPos,(int)4);
										hx::AddEq(data->iiPos,(int)2);
										hx::AddEq(data->ffPos,(int)1);
										hx::AddEq(data->fPos,(int)1);
									}
									;break;
									case (int)3: {
										hx::AddEq(data->fPos,(int)6);
									}
									;break;
									case (int)4: {
										hx::AddEq(data->fPos,(int)4);
									}
									;break;
									case (int)5: {
										hx::AddEq(data->fPos,(int)3);
									}
									;break;
									case (int)6: {
										hx::AddEq(data->fPos,(int)4);
									}
									;break;
									case (int)7: {
										hx::AddEq(data->fPos,(int)4);
									}
									;break;
									case (int)8: {
										hx::AddEq(data->fPos,(int)5);
										hx::AddEq(data->oPos,(int)1);
									}
									;break;
									case (int)10: {
										hx::AddEq(data->oPos,(int)4);
									}
									;break;
									case (int)11: {
										Dynamic();
									}
									;break;
									case (int)12: {
										hx::AddEq(data->oPos,(int)2);
										hx::AddEq(data->bPos,(int)2);
									}
									;break;
									case (int)13: {
										hx::AddEq(data->oPos,(int)4);
										hx::AddEq(data->iiPos,(int)2);
										hx::AddEq(data->ffPos,(int)1);
										hx::AddEq(data->fPos,(int)1);
									}
									;break;
									case (int)14: {
										hx::AddEq(data->oPos,(int)4);
										hx::AddEq(data->iPos,(int)1);
										hx::AddEq(data->fPos,(int)2);
										hx::AddEq(data->bPos,(int)1);
									}
									;break;
									case (int)15: {
										hx::AddEq(data->fPos,(int)2);
									}
									;break;
									case (int)16: {
										hx::AddEq(data->fPos,(int)2);
									}
									;break;
									case (int)17: {
										hx::AddEq(data->oPos,(int)1);
									}
									;break;
									default: {
										Dynamic();
									}
								}
							}
							data->prev = ::openfl::_internal::renderer::DrawCommandType_obj::LINE_TO;
							tmp6 = data;
						}
						::openfl::_internal::renderer::DrawCommandReader c = tmp6;
						::openfl::_internal::renderer::DrawCommandBuffer tmp7 = c->buffer;
						int tmp8 = c->fPos;
						int tmp9 = tmp8;
						Float tmp10 = tmp7->f->__get(tmp9);
						::openfl::_internal::renderer::DrawCommandBuffer tmp11 = c->buffer;
						int tmp12 = c->fPos;
						int tmp13 = (tmp12 + (int)1);
						Float tmp14 = tmp11->f->__get(tmp13);
						path->lineTo(tmp10,tmp14);
					}
					;break;
					case (int)16: {
						::openfl::_internal::renderer::DrawCommandReader tmp6;
						{
							{
								::openfl::_internal::renderer::DrawCommandType _g2 = data->prev;
								switch( (int)(_g2->__Index())){
									case (int)0: {
										hx::AddEq(data->oPos,(int)2);
										hx::AddEq(data->bPos,(int)2);
									}
									;break;
									case (int)1: {
										hx::AddEq(data->iPos,(int)1);
										hx::AddEq(data->fPos,(int)1);
									}
									;break;
									case (int)2: {
										hx::AddEq(data->oPos,(int)4);
										hx::AddEq(data->iiPos,(int)2);
										hx::AddEq(data->ffPos,(int)1);
										hx::AddEq(data->fPos,(int)1);
									}
									;break;
									case (int)3: {
										hx::AddEq(data->fPos,(int)6);
									}
									;break;
									case (int)4: {
										hx::AddEq(data->fPos,(int)4);
									}
									;break;
									case (int)5: {
										hx::AddEq(data->fPos,(int)3);
									}
									;break;
									case (int)6: {
										hx::AddEq(data->fPos,(int)4);
									}
									;break;
									case (int)7: {
										hx::AddEq(data->fPos,(int)4);
									}
									;break;
									case (int)8: {
										hx::AddEq(data->fPos,(int)5);
										hx::AddEq(data->oPos,(int)1);
									}
									;break;
									case (int)10: {
										hx::AddEq(data->oPos,(int)4);
									}
									;break;
									case (int)11: {
										Dynamic();
									}
									;break;
									case (int)12: {
										hx::AddEq(data->oPos,(int)2);
										hx::AddEq(data->bPos,(int)2);
									}
									;break;
									case (int)13: {
										hx::AddEq(data->oPos,(int)4);
										hx::AddEq(data->iiPos,(int)2);
										hx::AddEq(data->ffPos,(int)1);
										hx::AddEq(data->fPos,(int)1);
									}
									;break;
									case (int)14: {
										hx::AddEq(data->oPos,(int)4);
										hx::AddEq(data->iPos,(int)1);
										hx::AddEq(data->fPos,(int)2);
										hx::AddEq(data->bPos,(int)1);
									}
									;break;
									case (int)15: {
										hx::AddEq(data->fPos,(int)2);
									}
									;break;
									case (int)16: {
										hx::AddEq(data->fPos,(int)2);
									}
									;break;
									case (int)17: {
										hx::AddEq(data->oPos,(int)1);
									}
									;break;
									default: {
										Dynamic();
									}
								}
							}
							data->prev = ::openfl::_internal::renderer::DrawCommandType_obj::MOVE_TO;
							tmp6 = data;
						}
						::openfl::_internal::renderer::DrawCommandReader c = tmp6;
						::openfl::_internal::renderer::DrawCommandBuffer tmp7 = c->buffer;
						int tmp8 = c->fPos;
						int tmp9 = tmp8;
						Float tmp10 = tmp7->f->__get(tmp9);
						::openfl::_internal::renderer::DrawCommandBuffer tmp11 = c->buffer;
						int tmp12 = c->fPos;
						int tmp13 = (tmp12 + (int)1);
						Float tmp14 = tmp11->f->__get(tmp13);
						path->moveTo(tmp10,tmp14);
					}
					;break;
					case (int)5: {
						::openfl::_internal::renderer::DrawCommandReader tmp6;
						{
							{
								::openfl::_internal::renderer::DrawCommandType _g2 = data->prev;
								switch( (int)(_g2->__Index())){
									case (int)0: {
										hx::AddEq(data->oPos,(int)2);
										hx::AddEq(data->bPos,(int)2);
									}
									;break;
									case (int)1: {
										hx::AddEq(data->iPos,(int)1);
										hx::AddEq(data->fPos,(int)1);
									}
									;break;
									case (int)2: {
										hx::AddEq(data->oPos,(int)4);
										hx::AddEq(data->iiPos,(int)2);
										hx::AddEq(data->ffPos,(int)1);
										hx::AddEq(data->fPos,(int)1);
									}
									;break;
									case (int)3: {
										hx::AddEq(data->fPos,(int)6);
									}
									;break;
									case (int)4: {
										hx::AddEq(data->fPos,(int)4);
									}
									;break;
									case (int)5: {
										hx::AddEq(data->fPos,(int)3);
									}
									;break;
									case (int)6: {
										hx::AddEq(data->fPos,(int)4);
									}
									;break;
									case (int)7: {
										hx::AddEq(data->fPos,(int)4);
									}
									;break;
									case (int)8: {
										hx::AddEq(data->fPos,(int)5);
										hx::AddEq(data->oPos,(int)1);
									}
									;break;
									case (int)10: {
										hx::AddEq(data->oPos,(int)4);
									}
									;break;
									case (int)11: {
										Dynamic();
									}
									;break;
									case (int)12: {
										hx::AddEq(data->oPos,(int)2);
										hx::AddEq(data->bPos,(int)2);
									}
									;break;
									case (int)13: {
										hx::AddEq(data->oPos,(int)4);
										hx::AddEq(data->iiPos,(int)2);
										hx::AddEq(data->ffPos,(int)1);
										hx::AddEq(data->fPos,(int)1);
									}
									;break;
									case (int)14: {
										hx::AddEq(data->oPos,(int)4);
										hx::AddEq(data->iPos,(int)1);
										hx::AddEq(data->fPos,(int)2);
										hx::AddEq(data->bPos,(int)1);
									}
									;break;
									case (int)15: {
										hx::AddEq(data->fPos,(int)2);
									}
									;break;
									case (int)16: {
										hx::AddEq(data->fPos,(int)2);
									}
									;break;
									case (int)17: {
										hx::AddEq(data->oPos,(int)1);
									}
									;break;
									default: {
										Dynamic();
									}
								}
							}
							data->prev = ::openfl::_internal::renderer::DrawCommandType_obj::DRAW_CIRCLE;
							tmp6 = data;
						}
						::openfl::_internal::renderer::DrawCommandReader c = tmp6;
						::openfl::_internal::renderer::DrawCommandBuffer tmp7 = c->buffer;
						int tmp8 = c->fPos;
						int tmp9 = tmp8;
						Float tmp10 = tmp7->f->__get(tmp9);
						::openfl::_internal::renderer::DrawCommandBuffer tmp11 = c->buffer;
						int tmp12 = c->fPos;
						int tmp13 = (tmp12 + (int)1);
						Float tmp14 = tmp11->f->__get(tmp13);
						::openfl::_internal::renderer::DrawCommandBuffer tmp15 = c->buffer;
						int tmp16 = c->fPos;
						int tmp17 = (tmp16 + (int)2);
						Float tmp18 = tmp15->f->__get(tmp17);
						path->__drawCircle(tmp10,tmp14,tmp18);
					}
					;break;
					case (int)6: {
						::openfl::_internal::renderer::DrawCommandReader tmp6;
						{
							{
								::openfl::_internal::renderer::DrawCommandType _g2 = data->prev;
								switch( (int)(_g2->__Index())){
									case (int)0: {
										hx::AddEq(data->oPos,(int)2);
										hx::AddEq(data->bPos,(int)2);
									}
									;break;
									case (int)1: {
										hx::AddEq(data->iPos,(int)1);
										hx::AddEq(data->fPos,(int)1);
									}
									;break;
									case (int)2: {
										hx::AddEq(data->oPos,(int)4);
										hx::AddEq(data->iiPos,(int)2);
										hx::AddEq(data->ffPos,(int)1);
										hx::AddEq(data->fPos,(int)1);
									}
									;break;
									case (int)3: {
										hx::AddEq(data->fPos,(int)6);
									}
									;break;
									case (int)4: {
										hx::AddEq(data->fPos,(int)4);
									}
									;break;
									case (int)5: {
										hx::AddEq(data->fPos,(int)3);
									}
									;break;
									case (int)6: {
										hx::AddEq(data->fPos,(int)4);
									}
									;break;
									case (int)7: {
										hx::AddEq(data->fPos,(int)4);
									}
									;break;
									case (int)8: {
										hx::AddEq(data->fPos,(int)5);
										hx::AddEq(data->oPos,(int)1);
									}
									;break;
									case (int)10: {
										hx::AddEq(data->oPos,(int)4);
									}
									;break;
									case (int)11: {
										Dynamic();
									}
									;break;
									case (int)12: {
										hx::AddEq(data->oPos,(int)2);
										hx::AddEq(data->bPos,(int)2);
									}
									;break;
									case (int)13: {
										hx::AddEq(data->oPos,(int)4);
										hx::AddEq(data->iiPos,(int)2);
										hx::AddEq(data->ffPos,(int)1);
										hx::AddEq(data->fPos,(int)1);
									}
									;break;
									case (int)14: {
										hx::AddEq(data->oPos,(int)4);
										hx::AddEq(data->iPos,(int)1);
										hx::AddEq(data->fPos,(int)2);
										hx::AddEq(data->bPos,(int)1);
									}
									;break;
									case (int)15: {
										hx::AddEq(data->fPos,(int)2);
									}
									;break;
									case (int)16: {
										hx::AddEq(data->fPos,(int)2);
									}
									;break;
									case (int)17: {
										hx::AddEq(data->oPos,(int)1);
									}
									;break;
									default: {
										Dynamic();
									}
								}
							}
							data->prev = ::openfl::_internal::renderer::DrawCommandType_obj::DRAW_ELLIPSE;
							tmp6 = data;
						}
						::openfl::_internal::renderer::DrawCommandReader c = tmp6;
						::openfl::_internal::renderer::DrawCommandBuffer tmp7 = c->buffer;
						int tmp8 = c->fPos;
						int tmp9 = tmp8;
						Float tmp10 = tmp7->f->__get(tmp9);
						::openfl::_internal::renderer::DrawCommandBuffer tmp11 = c->buffer;
						int tmp12 = c->fPos;
						int tmp13 = (tmp12 + (int)1);
						Float tmp14 = tmp11->f->__get(tmp13);
						::openfl::_internal::renderer::DrawCommandBuffer tmp15 = c->buffer;
						int tmp16 = c->fPos;
						int tmp17 = (tmp16 + (int)2);
						Float tmp18 = tmp15->f->__get(tmp17);
						::openfl::_internal::renderer::DrawCommandBuffer tmp19 = c->buffer;
						int tmp20 = c->fPos;
						int tmp21 = (tmp20 + (int)3);
						Float tmp22 = tmp19->f->__get(tmp21);
						path->__drawEllipse(tmp10,tmp14,tmp18,tmp22);
					}
					;break;
					case (int)7: {
						::openfl::_internal::renderer::DrawCommandReader tmp6;
						{
							{
								::openfl::_internal::renderer::DrawCommandType _g2 = data->prev;
								switch( (int)(_g2->__Index())){
									case (int)0: {
										hx::AddEq(data->oPos,(int)2);
										hx::AddEq(data->bPos,(int)2);
									}
									;break;
									case (int)1: {
										hx::AddEq(data->iPos,(int)1);
										hx::AddEq(data->fPos,(int)1);
									}
									;break;
									case (int)2: {
										hx::AddEq(data->oPos,(int)4);
										hx::AddEq(data->iiPos,(int)2);
										hx::AddEq(data->ffPos,(int)1);
										hx::AddEq(data->fPos,(int)1);
									}
									;break;
									case (int)3: {
										hx::AddEq(data->fPos,(int)6);
									}
									;break;
									case (int)4: {
										hx::AddEq(data->fPos,(int)4);
									}
									;break;
									case (int)5: {
										hx::AddEq(data->fPos,(int)3);
									}
									;break;
									case (int)6: {
										hx::AddEq(data->fPos,(int)4);
									}
									;break;
									case (int)7: {
										hx::AddEq(data->fPos,(int)4);
									}
									;break;
									case (int)8: {
										hx::AddEq(data->fPos,(int)5);
										hx::AddEq(data->oPos,(int)1);
									}
									;break;
									case (int)10: {
										hx::AddEq(data->oPos,(int)4);
									}
									;break;
									case (int)11: {
										Dynamic();
									}
									;break;
									case (int)12: {
										hx::AddEq(data->oPos,(int)2);
										hx::AddEq(data->bPos,(int)2);
									}
									;break;
									case (int)13: {
										hx::AddEq(data->oPos,(int)4);
										hx::AddEq(data->iiPos,(int)2);
										hx::AddEq(data->ffPos,(int)1);
										hx::AddEq(data->fPos,(int)1);
									}
									;break;
									case (int)14: {
										hx::AddEq(data->oPos,(int)4);
										hx::AddEq(data->iPos,(int)1);
										hx::AddEq(data->fPos,(int)2);
										hx::AddEq(data->bPos,(int)1);
									}
									;break;
									case (int)15: {
										hx::AddEq(data->fPos,(int)2);
									}
									;break;
									case (int)16: {
										hx::AddEq(data->fPos,(int)2);
									}
									;break;
									case (int)17: {
										hx::AddEq(data->oPos,(int)1);
									}
									;break;
									default: {
										Dynamic();
									}
								}
							}
							data->prev = ::openfl::_internal::renderer::DrawCommandType_obj::DRAW_RECT;
							tmp6 = data;
						}
						::openfl::_internal::renderer::DrawCommandReader c = tmp6;
						::openfl::_internal::renderer::DrawCommandBuffer tmp7 = c->buffer;
						int tmp8 = c->fPos;
						int tmp9 = tmp8;
						Float tmp10 = tmp7->f->__get(tmp9);
						::openfl::_internal::renderer::DrawCommandBuffer tmp11 = c->buffer;
						int tmp12 = c->fPos;
						int tmp13 = (tmp12 + (int)1);
						Float tmp14 = tmp11->f->__get(tmp13);
						::openfl::_internal::renderer::DrawCommandBuffer tmp15 = c->buffer;
						int tmp16 = c->fPos;
						int tmp17 = (tmp16 + (int)2);
						Float tmp18 = tmp15->f->__get(tmp17);
						::openfl::_internal::renderer::DrawCommandBuffer tmp19 = c->buffer;
						int tmp20 = c->fPos;
						int tmp21 = (tmp20 + (int)3);
						Float tmp22 = tmp19->f->__get(tmp21);
						path->__drawRect(tmp10,tmp14,tmp18,tmp22);
					}
					;break;
					case (int)8: {
						::openfl::_internal::renderer::DrawCommandReader tmp6;
						{
							{
								::openfl::_internal::renderer::DrawCommandType _g2 = data->prev;
								switch( (int)(_g2->__Index())){
									case (int)0: {
										hx::AddEq(data->oPos,(int)2);
										hx::AddEq(data->bPos,(int)2);
									}
									;break;
									case (int)1: {
										hx::AddEq(data->iPos,(int)1);
										hx::AddEq(data->fPos,(int)1);
									}
									;break;
									case (int)2: {
										hx::AddEq(data->oPos,(int)4);
										hx::AddEq(data->iiPos,(int)2);
										hx::AddEq(data->ffPos,(int)1);
										hx::AddEq(data->fPos,(int)1);
									}
									;break;
									case (int)3: {
										hx::AddEq(data->fPos,(int)6);
									}
									;break;
									case (int)4: {
										hx::AddEq(data->fPos,(int)4);
									}
									;break;
									case (int)5: {
										hx::AddEq(data->fPos,(int)3);
									}
									;break;
									case (int)6: {
										hx::AddEq(data->fPos,(int)4);
									}
									;break;
									case (int)7: {
										hx::AddEq(data->fPos,(int)4);
									}
									;break;
									case (int)8: {
										hx::AddEq(data->fPos,(int)5);
										hx::AddEq(data->oPos,(int)1);
									}
									;break;
									case (int)10: {
										hx::AddEq(data->oPos,(int)4);
									}
									;break;
									case (int)11: {
										Dynamic();
									}
									;break;
									case (int)12: {
										hx::AddEq(data->oPos,(int)2);
										hx::AddEq(data->bPos,(int)2);
									}
									;break;
									case (int)13: {
										hx::AddEq(data->oPos,(int)4);
										hx::AddEq(data->iiPos,(int)2);
										hx::AddEq(data->ffPos,(int)1);
										hx::AddEq(data->fPos,(int)1);
									}
									;break;
									case (int)14: {
										hx::AddEq(data->oPos,(int)4);
										hx::AddEq(data->iPos,(int)1);
										hx::AddEq(data->fPos,(int)2);
										hx::AddEq(data->bPos,(int)1);
									}
									;break;
									case (int)15: {
										hx::AddEq(data->fPos,(int)2);
									}
									;break;
									case (int)16: {
										hx::AddEq(data->fPos,(int)2);
									}
									;break;
									case (int)17: {
										hx::AddEq(data->oPos,(int)1);
									}
									;break;
									default: {
										Dynamic();
									}
								}
							}
							data->prev = ::openfl::_internal::renderer::DrawCommandType_obj::DRAW_ROUND_RECT;
							tmp6 = data;
						}
						::openfl::_internal::renderer::DrawCommandReader c = tmp6;
						::openfl::_internal::renderer::DrawCommandBuffer tmp7 = c->buffer;
						int tmp8 = c->fPos;
						int tmp9 = tmp8;
						Float tmp10 = tmp7->f->__get(tmp9);
						::openfl::_internal::renderer::DrawCommandBuffer tmp11 = c->buffer;
						int tmp12 = c->fPos;
						int tmp13 = (tmp12 + (int)1);
						Float tmp14 = tmp11->f->__get(tmp13);
						::openfl::_internal::renderer::DrawCommandBuffer tmp15 = c->buffer;
						int tmp16 = c->fPos;
						int tmp17 = (tmp16 + (int)2);
						Float tmp18 = tmp15->f->__get(tmp17);
						::openfl::_internal::renderer::DrawCommandBuffer tmp19 = c->buffer;
						int tmp20 = c->fPos;
						int tmp21 = (tmp20 + (int)3);
						Float tmp22 = tmp19->f->__get(tmp21);
						::openfl::_internal::renderer::DrawCommandBuffer tmp23 = c->buffer;
						int tmp24 = c->fPos;
						int tmp25 = (tmp24 + (int)4);
						Float tmp26 = tmp23->f->__get(tmp25);
						::openfl::_internal::renderer::DrawCommandBuffer tmp27 = c->buffer;
						int tmp28 = c->oPos;
						int tmp29 = tmp28;
						Dynamic tmp30 = tmp27->o->__GetItem(tmp29);
						Dynamic tmp31 = tmp30;
						bool tmp32 = (tmp31 != null());
						Float tmp33;
						if ((tmp32)){
							::openfl::_internal::renderer::DrawCommandBuffer tmp34 = c->buffer;
							int tmp35 = c->oPos;
							int tmp36 = tmp35;
							Dynamic tmp37 = tmp34->o->__GetItem(tmp36);
							tmp33 = tmp37;
						}
						else{
							::openfl::_internal::renderer::DrawCommandBuffer tmp34 = c->buffer;
							int tmp35 = c->fPos;
							int tmp36 = (tmp35 + (int)4);
							tmp33 = tmp34->f->__get(tmp36);
						}
						path->__drawRoundRect(tmp10,tmp14,tmp18,tmp22,tmp26,tmp33);
					}
					;break;
					case (int)13: {
						::openfl::_internal::renderer::DrawCommandReader tmp6;
						{
							{
								::openfl::_internal::renderer::DrawCommandType _g2 = data->prev;
								switch( (int)(_g2->__Index())){
									case (int)0: {
										hx::AddEq(data->oPos,(int)2);
										hx::AddEq(data->bPos,(int)2);
									}
									;break;
									case (int)1: {
										hx::AddEq(data->iPos,(int)1);
										hx::AddEq(data->fPos,(int)1);
									}
									;break;
									case (int)2: {
										hx::AddEq(data->oPos,(int)4);
										hx::AddEq(data->iiPos,(int)2);
										hx::AddEq(data->ffPos,(int)1);
										hx::AddEq(data->fPos,(int)1);
									}
									;break;
									case (int)3: {
										hx::AddEq(data->fPos,(int)6);
									}
									;break;
									case (int)4: {
										hx::AddEq(data->fPos,(int)4);
									}
									;break;
									case (int)5: {
										hx::AddEq(data->fPos,(int)3);
									}
									;break;
									case (int)6: {
										hx::AddEq(data->fPos,(int)4);
									}
									;break;
									case (int)7: {
										hx::AddEq(data->fPos,(int)4);
									}
									;break;
									case (int)8: {
										hx::AddEq(data->fPos,(int)5);
										hx::AddEq(data->oPos,(int)1);
									}
									;break;
									case (int)10: {
										hx::AddEq(data->oPos,(int)4);
									}
									;break;
									case (int)11: {
										Dynamic();
									}
									;break;
									case (int)12: {
										hx::AddEq(data->oPos,(int)2);
										hx::AddEq(data->bPos,(int)2);
									}
									;break;
									case (int)13: {
										hx::AddEq(data->oPos,(int)4);
										hx::AddEq(data->iiPos,(int)2);
										hx::AddEq(data->ffPos,(int)1);
										hx::AddEq(data->fPos,(int)1);
									}
									;break;
									case (int)14: {
										hx::AddEq(data->oPos,(int)4);
										hx::AddEq(data->iPos,(int)1);
										hx::AddEq(data->fPos,(int)2);
										hx::AddEq(data->bPos,(int)1);
									}
									;break;
									case (int)15: {
										hx::AddEq(data->fPos,(int)2);
									}
									;break;
									case (int)16: {
										hx::AddEq(data->fPos,(int)2);
									}
									;break;
									case (int)17: {
										hx::AddEq(data->oPos,(int)1);
									}
									;break;
									default: {
										Dynamic();
									}
								}
							}
							data->prev = ::openfl::_internal::renderer::DrawCommandType_obj::LINE_GRADIENT_STYLE;
							tmp6 = data;
						}
						::openfl::_internal::renderer::DrawCommandReader c = tmp6;
					}
					;break;
					case (int)12: {
						::openfl::_internal::renderer::DrawCommandReader tmp6;
						{
							{
								::openfl::_internal::renderer::DrawCommandType _g2 = data->prev;
								switch( (int)(_g2->__Index())){
									case (int)0: {
										hx::AddEq(data->oPos,(int)2);
										hx::AddEq(data->bPos,(int)2);
									}
									;break;
									case (int)1: {
										hx::AddEq(data->iPos,(int)1);
										hx::AddEq(data->fPos,(int)1);
									}
									;break;
									case (int)2: {
										hx::AddEq(data->oPos,(int)4);
										hx::AddEq(data->iiPos,(int)2);
										hx::AddEq(data->ffPos,(int)1);
										hx::AddEq(data->fPos,(int)1);
									}
									;break;
									case (int)3: {
										hx::AddEq(data->fPos,(int)6);
									}
									;break;
									case (int)4: {
										hx::AddEq(data->fPos,(int)4);
									}
									;break;
									case (int)5: {
										hx::AddEq(data->fPos,(int)3);
									}
									;break;
									case (int)6: {
										hx::AddEq(data->fPos,(int)4);
									}
									;break;
									case (int)7: {
										hx::AddEq(data->fPos,(int)4);
									}
									;break;
									case (int)8: {
										hx::AddEq(data->fPos,(int)5);
										hx::AddEq(data->oPos,(int)1);
									}
									;break;
									case (int)10: {
										hx::AddEq(data->oPos,(int)4);
									}
									;break;
									case (int)11: {
										Dynamic();
									}
									;break;
									case (int)12: {
										hx::AddEq(data->oPos,(int)2);
										hx::AddEq(data->bPos,(int)2);
									}
									;break;
									case (int)13: {
										hx::AddEq(data->oPos,(int)4);
										hx::AddEq(data->iiPos,(int)2);
										hx::AddEq(data->ffPos,(int)1);
										hx::AddEq(data->fPos,(int)1);
									}
									;break;
									case (int)14: {
										hx::AddEq(data->oPos,(int)4);
										hx::AddEq(data->iPos,(int)1);
										hx::AddEq(data->fPos,(int)2);
										hx::AddEq(data->bPos,(int)1);
									}
									;break;
									case (int)15: {
										hx::AddEq(data->fPos,(int)2);
									}
									;break;
									case (int)16: {
										hx::AddEq(data->fPos,(int)2);
									}
									;break;
									case (int)17: {
										hx::AddEq(data->oPos,(int)1);
									}
									;break;
									default: {
										Dynamic();
									}
								}
							}
							data->prev = ::openfl::_internal::renderer::DrawCommandType_obj::LINE_BITMAP_STYLE;
							tmp6 = data;
						}
						::openfl::_internal::renderer::DrawCommandReader c = tmp6;
						path = null();
					}
					;break;
					case (int)14: {
						::openfl::_internal::renderer::DrawCommandReader tmp6;
						{
							{
								::openfl::_internal::renderer::DrawCommandType _g2 = data->prev;
								switch( (int)(_g2->__Index())){
									case (int)0: {
										hx::AddEq(data->oPos,(int)2);
										hx::AddEq(data->bPos,(int)2);
									}
									;break;
									case (int)1: {
										hx::AddEq(data->iPos,(int)1);
										hx::AddEq(data->fPos,(int)1);
									}
									;break;
									case (int)2: {
										hx::AddEq(data->oPos,(int)4);
										hx::AddEq(data->iiPos,(int)2);
										hx::AddEq(data->ffPos,(int)1);
										hx::AddEq(data->fPos,(int)1);
									}
									;break;
									case (int)3: {
										hx::AddEq(data->fPos,(int)6);
									}
									;break;
									case (int)4: {
										hx::AddEq(data->fPos,(int)4);
									}
									;break;
									case (int)5: {
										hx::AddEq(data->fPos,(int)3);
									}
									;break;
									case (int)6: {
										hx::AddEq(data->fPos,(int)4);
									}
									;break;
									case (int)7: {
										hx::AddEq(data->fPos,(int)4);
									}
									;break;
									case (int)8: {
										hx::AddEq(data->fPos,(int)5);
										hx::AddEq(data->oPos,(int)1);
									}
									;break;
									case (int)10: {
										hx::AddEq(data->oPos,(int)4);
									}
									;break;
									case (int)11: {
										Dynamic();
									}
									;break;
									case (int)12: {
										hx::AddEq(data->oPos,(int)2);
										hx::AddEq(data->bPos,(int)2);
									}
									;break;
									case (int)13: {
										hx::AddEq(data->oPos,(int)4);
										hx::AddEq(data->iiPos,(int)2);
										hx::AddEq(data->ffPos,(int)1);
										hx::AddEq(data->fPos,(int)1);
									}
									;break;
									case (int)14: {
										hx::AddEq(data->oPos,(int)4);
										hx::AddEq(data->iPos,(int)1);
										hx::AddEq(data->fPos,(int)2);
										hx::AddEq(data->bPos,(int)1);
									}
									;break;
									case (int)15: {
										hx::AddEq(data->fPos,(int)2);
									}
									;break;
									case (int)16: {
										hx::AddEq(data->fPos,(int)2);
									}
									;break;
									case (int)17: {
										hx::AddEq(data->oPos,(int)1);
									}
									;break;
									default: {
										Dynamic();
									}
								}
							}
							data->prev = ::openfl::_internal::renderer::DrawCommandType_obj::LINE_STYLE;
							tmp6 = data;
						}
						::openfl::_internal::renderer::DrawCommandReader c = tmp6;
						::openfl::_internal::renderer::DrawCommandBuffer tmp7 = c->buffer;
						int tmp8 = c->oPos;
						int tmp9 = tmp8;
						Dynamic tmp10 = tmp7->o->__GetItem(tmp9);
						Dynamic tmp11 = tmp10;
						::openfl::_internal::renderer::DrawCommandBuffer tmp12 = c->buffer;
						int tmp13 = c->bPos;
						int tmp14 = tmp13;
						bool tmp15 = tmp12->b->__get(tmp14);
						bool tmp16 = tmp15;
						::openfl::_internal::renderer::DrawCommandBuffer tmp17 = c->buffer;
						int tmp18 = c->oPos;
						int tmp19 = (tmp18 + (int)1);
						Dynamic tmp20 = tmp17->o->__GetItem(tmp19);
						Dynamic tmp21 = tmp20;
						::openfl::_internal::renderer::DrawCommandBuffer tmp22 = c->buffer;
						int tmp23 = c->oPos;
						int tmp24 = (tmp23 + (int)2);
						Dynamic tmp25 = tmp22->o->__GetItem(tmp24);
						Dynamic tmp26 = tmp25;
						::openfl::_internal::renderer::DrawCommandBuffer tmp27 = c->buffer;
						int tmp28 = c->oPos;
						int tmp29 = (tmp28 + (int)3);
						Dynamic tmp30 = tmp27->o->__GetItem(tmp29);
						Dynamic tmp31 = tmp30;
						::openfl::_internal::renderer::DrawCommandBuffer tmp32 = c->buffer;
						int tmp33 = c->fPos;
						int tmp34 = (tmp33 + (int)1);
						Float tmp35 = tmp32->f->__get(tmp34);
						Float tmp36 = tmp35;
						::openfl::display::GraphicsStroke tmp37 = ::openfl::display::GraphicsStroke_obj::__new(tmp11,tmp16,tmp21,tmp26,tmp31,tmp36,null());
						stroke = tmp37;
						::openfl::_internal::renderer::DrawCommandBuffer tmp38 = c->buffer;
						int tmp39 = c->iPos;
						int tmp40 = tmp39;
						int tmp41 = tmp38->i->__get(tmp40);
						int tmp42 = tmp41;
						::openfl::_internal::renderer::DrawCommandBuffer tmp43 = c->buffer;
						int tmp44 = c->fPos;
						int tmp45 = tmp44;
						Float tmp46 = tmp43->f->__get(tmp45);
						Float tmp47 = tmp46;
						::openfl::display::GraphicsSolidFill tmp48 = ::openfl::display::GraphicsSolidFill_obj::__new(tmp42,tmp47);
						stroke->fill = tmp48;
						::openfl::display::GraphicsStroke tmp49 = stroke;
						graphicsData->push(tmp49);
					}
					;break;
					case (int)11: {
						{
							{
								::openfl::_internal::renderer::DrawCommandType _g2 = data->prev;
								switch( (int)(_g2->__Index())){
									case (int)0: {
										hx::AddEq(data->oPos,(int)2);
										hx::AddEq(data->bPos,(int)2);
									}
									;break;
									case (int)1: {
										hx::AddEq(data->iPos,(int)1);
										hx::AddEq(data->fPos,(int)1);
									}
									;break;
									case (int)2: {
										hx::AddEq(data->oPos,(int)4);
										hx::AddEq(data->iiPos,(int)2);
										hx::AddEq(data->ffPos,(int)1);
										hx::AddEq(data->fPos,(int)1);
									}
									;break;
									case (int)3: {
										hx::AddEq(data->fPos,(int)6);
									}
									;break;
									case (int)4: {
										hx::AddEq(data->fPos,(int)4);
									}
									;break;
									case (int)5: {
										hx::AddEq(data->fPos,(int)3);
									}
									;break;
									case (int)6: {
										hx::AddEq(data->fPos,(int)4);
									}
									;break;
									case (int)7: {
										hx::AddEq(data->fPos,(int)4);
									}
									;break;
									case (int)8: {
										hx::AddEq(data->fPos,(int)5);
										hx::AddEq(data->oPos,(int)1);
									}
									;break;
									case (int)10: {
										hx::AddEq(data->oPos,(int)4);
									}
									;break;
									case (int)11: {
										Dynamic();
									}
									;break;
									case (int)12: {
										hx::AddEq(data->oPos,(int)2);
										hx::AddEq(data->bPos,(int)2);
									}
									;break;
									case (int)13: {
										hx::AddEq(data->oPos,(int)4);
										hx::AddEq(data->iiPos,(int)2);
										hx::AddEq(data->ffPos,(int)1);
										hx::AddEq(data->fPos,(int)1);
									}
									;break;
									case (int)14: {
										hx::AddEq(data->oPos,(int)4);
										hx::AddEq(data->iPos,(int)1);
										hx::AddEq(data->fPos,(int)2);
										hx::AddEq(data->bPos,(int)1);
									}
									;break;
									case (int)15: {
										hx::AddEq(data->fPos,(int)2);
									}
									;break;
									case (int)16: {
										hx::AddEq(data->fPos,(int)2);
									}
									;break;
									case (int)17: {
										hx::AddEq(data->oPos,(int)1);
									}
									;break;
									default: {
										Dynamic();
									}
								}
							}
							data->prev = ::openfl::_internal::renderer::DrawCommandType_obj::END_FILL;
							data;
						}
						{
							::openfl::display::GraphicsEndFill tmp6 = ::openfl::display::GraphicsEndFill_obj::__new();
							::openfl::display::IGraphicsData x = tmp6;
							::openfl::display::IGraphicsData tmp7 = x;
							graphicsData->push(tmp7);
						}
					}
					;break;
					case (int)0: {
						::openfl::_internal::renderer::DrawCommandReader tmp6;
						{
							{
								::openfl::_internal::renderer::DrawCommandType _g2 = data->prev;
								switch( (int)(_g2->__Index())){
									case (int)0: {
										hx::AddEq(data->oPos,(int)2);
										hx::AddEq(data->bPos,(int)2);
									}
									;break;
									case (int)1: {
										hx::AddEq(data->iPos,(int)1);
										hx::AddEq(data->fPos,(int)1);
									}
									;break;
									case (int)2: {
										hx::AddEq(data->oPos,(int)4);
										hx::AddEq(data->iiPos,(int)2);
										hx::AddEq(data->ffPos,(int)1);
										hx::AddEq(data->fPos,(int)1);
									}
									;break;
									case (int)3: {
										hx::AddEq(data->fPos,(int)6);
									}
									;break;
									case (int)4: {
										hx::AddEq(data->fPos,(int)4);
									}
									;break;
									case (int)5: {
										hx::AddEq(data->fPos,(int)3);
									}
									;break;
									case (int)6: {
										hx::AddEq(data->fPos,(int)4);
									}
									;break;
									case (int)7: {
										hx::AddEq(data->fPos,(int)4);
									}
									;break;
									case (int)8: {
										hx::AddEq(data->fPos,(int)5);
										hx::AddEq(data->oPos,(int)1);
									}
									;break;
									case (int)10: {
										hx::AddEq(data->oPos,(int)4);
									}
									;break;
									case (int)11: {
										Dynamic();
									}
									;break;
									case (int)12: {
										hx::AddEq(data->oPos,(int)2);
										hx::AddEq(data->bPos,(int)2);
									}
									;break;
									case (int)13: {
										hx::AddEq(data->oPos,(int)4);
										hx::AddEq(data->iiPos,(int)2);
										hx::AddEq(data->ffPos,(int)1);
										hx::AddEq(data->fPos,(int)1);
									}
									;break;
									case (int)14: {
										hx::AddEq(data->oPos,(int)4);
										hx::AddEq(data->iPos,(int)1);
										hx::AddEq(data->fPos,(int)2);
										hx::AddEq(data->bPos,(int)1);
									}
									;break;
									case (int)15: {
										hx::AddEq(data->fPos,(int)2);
									}
									;break;
									case (int)16: {
										hx::AddEq(data->fPos,(int)2);
									}
									;break;
									case (int)17: {
										hx::AddEq(data->oPos,(int)1);
									}
									;break;
									default: {
										Dynamic();
									}
								}
							}
							data->prev = ::openfl::_internal::renderer::DrawCommandType_obj::BEGIN_BITMAP_FILL;
							tmp6 = data;
						}
						::openfl::_internal::renderer::DrawCommandReader c = tmp6;
						{
							::openfl::_internal::renderer::DrawCommandBuffer tmp7 = c->buffer;
							int tmp8 = c->oPos;
							Dynamic tmp9 = tmp7->o->__GetItem(tmp8);
							::openfl::display::BitmapData tmp10 = ((::openfl::display::BitmapData)(tmp9));
							::openfl::_internal::renderer::DrawCommandBuffer tmp11 = c->buffer;
							int tmp12 = c->oPos;
							int tmp13 = (tmp12 + (int)1);
							Dynamic tmp14 = tmp11->o->__GetItem(tmp13);
							::openfl::geom::Matrix tmp15 = ((::openfl::geom::Matrix)(tmp14));
							::openfl::_internal::renderer::DrawCommandBuffer tmp16 = c->buffer;
							int tmp17 = c->bPos;
							bool tmp18 = tmp16->b->__get(tmp17);
							::openfl::_internal::renderer::DrawCommandBuffer tmp19 = c->buffer;
							int tmp20 = c->bPos;
							int tmp21 = (tmp20 + (int)1);
							bool tmp22 = tmp19->b->__get(tmp21);
							::openfl::display::GraphicsBitmapFill tmp23 = ::openfl::display::GraphicsBitmapFill_obj::__new(tmp10,tmp15,tmp18,tmp22);
							::openfl::display::IGraphicsData x = tmp23;
							::openfl::display::IGraphicsData tmp24 = x;
							graphicsData->push(tmp24);
						}
					}
					;break;
					case (int)1: {
						::openfl::_internal::renderer::DrawCommandReader tmp6;
						{
							{
								::openfl::_internal::renderer::DrawCommandType _g2 = data->prev;
								switch( (int)(_g2->__Index())){
									case (int)0: {
										hx::AddEq(data->oPos,(int)2);
										hx::AddEq(data->bPos,(int)2);
									}
									;break;
									case (int)1: {
										hx::AddEq(data->iPos,(int)1);
										hx::AddEq(data->fPos,(int)1);
									}
									;break;
									case (int)2: {
										hx::AddEq(data->oPos,(int)4);
										hx::AddEq(data->iiPos,(int)2);
										hx::AddEq(data->ffPos,(int)1);
										hx::AddEq(data->fPos,(int)1);
									}
									;break;
									case (int)3: {
										hx::AddEq(data->fPos,(int)6);
									}
									;break;
									case (int)4: {
										hx::AddEq(data->fPos,(int)4);
									}
									;break;
									case (int)5: {
										hx::AddEq(data->fPos,(int)3);
									}
									;break;
									case (int)6: {
										hx::AddEq(data->fPos,(int)4);
									}
									;break;
									case (int)7: {
										hx::AddEq(data->fPos,(int)4);
									}
									;break;
									case (int)8: {
										hx::AddEq(data->fPos,(int)5);
										hx::AddEq(data->oPos,(int)1);
									}
									;break;
									case (int)10: {
										hx::AddEq(data->oPos,(int)4);
									}
									;break;
									case (int)11: {
										Dynamic();
									}
									;break;
									case (int)12: {
										hx::AddEq(data->oPos,(int)2);
										hx::AddEq(data->bPos,(int)2);
									}
									;break;
									case (int)13: {
										hx::AddEq(data->oPos,(int)4);
										hx::AddEq(data->iiPos,(int)2);
										hx::AddEq(data->ffPos,(int)1);
										hx::AddEq(data->fPos,(int)1);
									}
									;break;
									case (int)14: {
										hx::AddEq(data->oPos,(int)4);
										hx::AddEq(data->iPos,(int)1);
										hx::AddEq(data->fPos,(int)2);
										hx::AddEq(data->bPos,(int)1);
									}
									;break;
									case (int)15: {
										hx::AddEq(data->fPos,(int)2);
									}
									;break;
									case (int)16: {
										hx::AddEq(data->fPos,(int)2);
									}
									;break;
									case (int)17: {
										hx::AddEq(data->oPos,(int)1);
									}
									;break;
									default: {
										Dynamic();
									}
								}
							}
							data->prev = ::openfl::_internal::renderer::DrawCommandType_obj::BEGIN_FILL;
							tmp6 = data;
						}
						::openfl::_internal::renderer::DrawCommandReader c = tmp6;
						{
							::openfl::_internal::renderer::DrawCommandBuffer tmp7 = c->buffer;
							int tmp8 = c->iPos;
							int tmp9 = tmp7->i->__get(tmp8);
							::openfl::display::GraphicsSolidFill tmp10 = ::openfl::display::GraphicsSolidFill_obj::__new(tmp9,(int)1);
							::openfl::display::IGraphicsData x = tmp10;
							::openfl::display::IGraphicsData tmp11 = x;
							graphicsData->push(tmp11);
						}
					}
					;break;
					case (int)2: {
						::openfl::_internal::renderer::DrawCommandReader tmp6;
						{
							{
								::openfl::_internal::renderer::DrawCommandType _g2 = data->prev;
								switch( (int)(_g2->__Index())){
									case (int)0: {
										hx::AddEq(data->oPos,(int)2);
										hx::AddEq(data->bPos,(int)2);
									}
									;break;
									case (int)1: {
										hx::AddEq(data->iPos,(int)1);
										hx::AddEq(data->fPos,(int)1);
									}
									;break;
									case (int)2: {
										hx::AddEq(data->oPos,(int)4);
										hx::AddEq(data->iiPos,(int)2);
										hx::AddEq(data->ffPos,(int)1);
										hx::AddEq(data->fPos,(int)1);
									}
									;break;
									case (int)3: {
										hx::AddEq(data->fPos,(int)6);
									}
									;break;
									case (int)4: {
										hx::AddEq(data->fPos,(int)4);
									}
									;break;
									case (int)5: {
										hx::AddEq(data->fPos,(int)3);
									}
									;break;
									case (int)6: {
										hx::AddEq(data->fPos,(int)4);
									}
									;break;
									case (int)7: {
										hx::AddEq(data->fPos,(int)4);
									}
									;break;
									case (int)8: {
										hx::AddEq(data->fPos,(int)5);
										hx::AddEq(data->oPos,(int)1);
									}
									;break;
									case (int)10: {
										hx::AddEq(data->oPos,(int)4);
									}
									;break;
									case (int)11: {
										Dynamic();
									}
									;break;
									case (int)12: {
										hx::AddEq(data->oPos,(int)2);
										hx::AddEq(data->bPos,(int)2);
									}
									;break;
									case (int)13: {
										hx::AddEq(data->oPos,(int)4);
										hx::AddEq(data->iiPos,(int)2);
										hx::AddEq(data->ffPos,(int)1);
										hx::AddEq(data->fPos,(int)1);
									}
									;break;
									case (int)14: {
										hx::AddEq(data->oPos,(int)4);
										hx::AddEq(data->iPos,(int)1);
										hx::AddEq(data->fPos,(int)2);
										hx::AddEq(data->bPos,(int)1);
									}
									;break;
									case (int)15: {
										hx::AddEq(data->fPos,(int)2);
									}
									;break;
									case (int)16: {
										hx::AddEq(data->fPos,(int)2);
									}
									;break;
									case (int)17: {
										hx::AddEq(data->oPos,(int)1);
									}
									;break;
									default: {
										Dynamic();
									}
								}
							}
							data->prev = ::openfl::_internal::renderer::DrawCommandType_obj::BEGIN_GRADIENT_FILL;
							tmp6 = data;
						}
						::openfl::_internal::renderer::DrawCommandReader c = tmp6;
						{
							::openfl::_internal::renderer::DrawCommandBuffer tmp7 = c->buffer;
							int tmp8 = c->oPos;
							Dynamic tmp9 = tmp7->o->__GetItem(tmp8);
							Dynamic tmp10 = tmp9;
							::openfl::_internal::renderer::DrawCommandBuffer tmp11 = c->buffer;
							int tmp12 = c->iiPos;
							::openfl::_internal::renderer::DrawCommandBuffer tmp13 = c->buffer;
							int tmp14 = c->ffPos;
							::openfl::_internal::renderer::DrawCommandBuffer tmp15 = c->buffer;
							int tmp16 = c->iiPos;
							int tmp17 = (tmp16 + (int)1);
							::openfl::_internal::renderer::DrawCommandBuffer tmp18 = c->buffer;
							int tmp19 = c->oPos;
							int tmp20 = (tmp19 + (int)1);
							Dynamic tmp21 = tmp18->o->__GetItem(tmp20);
							::openfl::geom::Matrix tmp22 = ((::openfl::geom::Matrix)(tmp21));
							::openfl::_internal::renderer::DrawCommandBuffer tmp23 = c->buffer;
							int tmp24 = c->oPos;
							int tmp25 = (tmp24 + (int)2);
							Dynamic tmp26 = tmp23->o->__GetItem(tmp25);
							Dynamic tmp27 = tmp26;
							::openfl::_internal::renderer::DrawCommandBuffer tmp28 = c->buffer;
							int tmp29 = c->oPos;
							int tmp30 = (tmp29 + (int)3);
							Dynamic tmp31 = tmp28->o->__GetItem(tmp30);
							Dynamic tmp32 = tmp31;
							::openfl::_internal::renderer::DrawCommandBuffer tmp33 = c->buffer;
							int tmp34 = c->fPos;
							Float tmp35 = tmp33->f->__get(tmp34);
							Float tmp36 = tmp35;
							::openfl::display::GraphicsGradientFill tmp37 = ::openfl::display::GraphicsGradientFill_obj::__new(tmp10,tmp11->ii->__get(tmp12).StaticCast< Array< int > >(),tmp13->ff->__get(tmp14).StaticCast< Array< Float > >(),tmp15->ii->__get(tmp17).StaticCast< Array< int > >(),tmp22,tmp27,tmp32,tmp36);
							::openfl::display::IGraphicsData x = tmp37;
							::openfl::display::IGraphicsData tmp38 = x;
							graphicsData->push(tmp38);
						}
					}
					;break;
					default: {
						{
							::openfl::_internal::renderer::DrawCommandType _g2 = data->prev;
							switch( (int)(_g2->__Index())){
								case (int)0: {
									hx::AddEq(data->oPos,(int)2);
									hx::AddEq(data->bPos,(int)2);
								}
								;break;
								case (int)1: {
									hx::AddEq(data->iPos,(int)1);
									hx::AddEq(data->fPos,(int)1);
								}
								;break;
								case (int)2: {
									hx::AddEq(data->oPos,(int)4);
									hx::AddEq(data->iiPos,(int)2);
									hx::AddEq(data->ffPos,(int)1);
									hx::AddEq(data->fPos,(int)1);
								}
								;break;
								case (int)3: {
									hx::AddEq(data->fPos,(int)6);
								}
								;break;
								case (int)4: {
									hx::AddEq(data->fPos,(int)4);
								}
								;break;
								case (int)5: {
									hx::AddEq(data->fPos,(int)3);
								}
								;break;
								case (int)6: {
									hx::AddEq(data->fPos,(int)4);
								}
								;break;
								case (int)7: {
									hx::AddEq(data->fPos,(int)4);
								}
								;break;
								case (int)8: {
									hx::AddEq(data->fPos,(int)5);
									hx::AddEq(data->oPos,(int)1);
								}
								;break;
								case (int)10: {
									hx::AddEq(data->oPos,(int)4);
								}
								;break;
								case (int)11: {
									Dynamic();
								}
								;break;
								case (int)12: {
									hx::AddEq(data->oPos,(int)2);
									hx::AddEq(data->bPos,(int)2);
								}
								;break;
								case (int)13: {
									hx::AddEq(data->oPos,(int)4);
									hx::AddEq(data->iiPos,(int)2);
									hx::AddEq(data->ffPos,(int)1);
									hx::AddEq(data->fPos,(int)1);
								}
								;break;
								case (int)14: {
									hx::AddEq(data->oPos,(int)4);
									hx::AddEq(data->iPos,(int)1);
									hx::AddEq(data->fPos,(int)2);
									hx::AddEq(data->bPos,(int)1);
								}
								;break;
								case (int)15: {
									hx::AddEq(data->fPos,(int)2);
								}
								;break;
								case (int)16: {
									hx::AddEq(data->fPos,(int)2);
								}
								;break;
								case (int)17: {
									hx::AddEq(data->oPos,(int)1);
								}
								;break;
								default: {
									Dynamic();
								}
							}
						}
						data->prev = type;
					}
				}
			}
		}
		bool tmp2 = (path != null());
		if ((tmp2)){
			::openfl::display::GraphicsPath tmp3 = path;
			graphicsData->push(tmp3);
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Graphics_obj,__readGraphicsData,(void))

Void Graphics_obj::__update( ){
{
		::openfl::geom::Rectangle tmp = this->__bounds;
		bool tmp1 = (tmp == null());
		bool tmp2 = !(tmp1);
		bool tmp3 = tmp2;
		bool tmp4;
		if ((tmp3)){
			::openfl::geom::Rectangle tmp5 = this->__bounds;
			::openfl::geom::Rectangle tmp6 = tmp5;
			::openfl::geom::Rectangle tmp7 = tmp6;
			Float tmp8 = tmp7->width;
			tmp4 = (tmp8 <= (int)0);
		}
		else{
			tmp4 = true;
		}
		bool tmp5 = !(tmp4);
		bool tmp6;
		if ((tmp5)){
			::openfl::geom::Rectangle tmp7 = this->__bounds;
			::openfl::geom::Rectangle tmp8 = tmp7;
			Float tmp9 = tmp8->height;
			tmp6 = (tmp9 <= (int)0);
		}
		else{
			tmp6 = true;
		}
		if ((tmp6)){
			return null();
		}
		::openfl::display::DisplayObject tmp7 = this->__owner;
		::openfl::geom::Matrix parentTransform = tmp7->__renderTransform;
		Float scaleX = ((Float)1.0);
		Float scaleY = ((Float)1.0);
		bool tmp8 = (parentTransform != null());
		if ((tmp8)){
			bool tmp9 = (parentTransform->b == (int)0);
			if ((tmp9)){
				Float tmp10 = parentTransform->a;
				Float tmp11 = ::Math_obj::abs(tmp10);
				scaleX = tmp11;
			}
			else{
				Float tmp10 = (parentTransform->a * parentTransform->a);
				Float tmp11 = (parentTransform->b * parentTransform->b);
				Float tmp12 = (tmp10 + tmp11);
				Float tmp13 = ::Math_obj::sqrt(tmp12);
				scaleX = tmp13;
			}
			bool tmp10 = (parentTransform->c == (int)0);
			if ((tmp10)){
				Float tmp11 = parentTransform->d;
				Float tmp12 = ::Math_obj::abs(tmp11);
				scaleY = tmp12;
			}
			else{
				Float tmp11 = (parentTransform->c * parentTransform->c);
				Float tmp12 = (parentTransform->d * parentTransform->d);
				Float tmp13 = (tmp11 + tmp12);
				Float tmp14 = ::Math_obj::sqrt(tmp13);
				scaleY = tmp14;
			}
		}
		else{
			return null();
		}
		::openfl::geom::Rectangle tmp9 = this->__bounds;
		Float tmp10 = tmp9->width;
		Float tmp11 = scaleX;
		Float tmp12 = (tmp10 * tmp11);
		Float width = tmp12;
		::openfl::geom::Rectangle tmp13 = this->__bounds;
		Float tmp14 = tmp13->height;
		Float tmp15 = scaleY;
		Float tmp16 = (tmp14 * tmp15);
		Float height = tmp16;
		bool tmp17 = (width < (int)1);
		bool tmp18 = !(tmp17);
		bool tmp19;
		if ((tmp18)){
			tmp19 = (height < (int)1);
		}
		else{
			tmp19 = true;
		}
		if ((tmp19)){
			int tmp20 = this->__width;
			bool tmp21 = (tmp20 >= (int)1);
			bool tmp22 = !(tmp21);
			bool tmp23;
			if ((tmp22)){
				int tmp24 = this->__height;
				int tmp25 = tmp24;
				tmp23 = (tmp25 >= (int)1);
			}
			else{
				tmp23 = true;
			}
			if ((tmp23)){
				this->set___dirty(true);
			}
			this->__width = (int)0;
			this->__height = (int)0;
			return null();
		}
		Float tmp20 = width;
		::openfl::geom::Rectangle tmp21 = this->__bounds;
		Float tmp22 = tmp21->width;
		Float tmp23 = (Float(tmp20) / Float(tmp22));
		::openfl::geom::Matrix tmp24 = this->__renderTransform;
		tmp24->a = tmp23;
		Float tmp25 = height;
		::openfl::geom::Rectangle tmp26 = this->__bounds;
		Float tmp27 = tmp26->height;
		Float tmp28 = (Float(tmp25) / Float(tmp27));
		::openfl::geom::Matrix tmp29 = this->__renderTransform;
		tmp29->d = tmp28;
		::openfl::geom::Matrix tmp30 = this->__renderTransform;
		Float tmp31 = tmp30->a;
		Float tmp32 = (Float((int)1) / Float(tmp31));
		Float inverseA = tmp32;
		::openfl::geom::Matrix tmp33 = this->__renderTransform;
		Float tmp34 = tmp33->d;
		Float tmp35 = (Float((int)1) / Float(tmp34));
		Float inverseD = tmp35;
		Float tmp36 = (inverseA * parentTransform->a);
		::openfl::geom::Matrix tmp37 = this->__worldTransform;
		tmp37->a = tmp36;
		Float tmp38 = (inverseA * parentTransform->b);
		::openfl::geom::Matrix tmp39 = this->__worldTransform;
		tmp39->b = tmp38;
		Float tmp40 = (inverseD * parentTransform->c);
		::openfl::geom::Matrix tmp41 = this->__worldTransform;
		tmp41->c = tmp40;
		Float tmp42 = (inverseD * parentTransform->d);
		::openfl::geom::Matrix tmp43 = this->__worldTransform;
		tmp43->d = tmp42;
		::openfl::geom::Rectangle tmp44 = this->__bounds;
		Float x = tmp44->x;
		::openfl::geom::Rectangle tmp45 = this->__bounds;
		Float y = tmp45->y;
		Float tmp46 = (x * parentTransform->a);
		Float tmp47 = (y * parentTransform->c);
		Float tmp48 = (tmp46 + tmp47);
		Float tmp49 = parentTransform->tx;
		Float tmp50 = (tmp48 + tmp49);
		Float tx = tmp50;
		Float tmp51 = (x * parentTransform->b);
		Float tmp52 = (y * parentTransform->d);
		Float tmp53 = (tmp51 + tmp52);
		Float tmp54 = parentTransform->ty;
		Float tmp55 = (tmp53 + tmp54);
		Float ty = tmp55;
		Float tmp56 = tx;
		Float tmp57 = ::Math_obj::ffloor(tmp56);
		::openfl::geom::Matrix tmp58 = this->__worldTransform;
		tmp58->tx = tmp57;
		Float tmp59 = ty;
		Float tmp60 = ::Math_obj::ffloor(tmp59);
		::openfl::geom::Matrix tmp61 = this->__worldTransform;
		tmp61->ty = tmp60;
		Float tmp62;
		{
			::openfl::geom::Matrix tmp63 = this->__worldTransform;
			::openfl::geom::Matrix _this = tmp63;
			Float tmp64 = (_this->a * _this->d);
			Float tmp65 = (_this->b * _this->c);
			Float tmp66 = (tmp64 - tmp65);
			Float norm = tmp66;
			bool tmp67 = (norm == (int)0);
			if ((tmp67)){
				Float tmp68 = _this->tx;
				tmp62 = -(tmp68);
			}
			else{
				Float tmp68 = (Float(((Float)1.0)) / Float(norm));
				Float tmp69 = _this->c;
				Float tmp70 = (_this->ty - ty);
				Float tmp71 = (tmp69 * tmp70);
				Float tmp72 = _this->d;
				Float tmp73 = (tx - _this->tx);
				Float tmp74 = (tmp72 * tmp73);
				Float tmp75 = (tmp71 + tmp74);
				tmp62 = (tmp68 * tmp75);
			}
		}
		::openfl::geom::Matrix tmp63 = this->__renderTransform;
		tmp63->tx = tmp62;
		Float tmp64;
		{
			::openfl::geom::Matrix tmp65 = this->__worldTransform;
			::openfl::geom::Matrix _this = tmp65;
			Float tmp66 = (_this->a * _this->d);
			Float tmp67 = (_this->b * _this->c);
			Float tmp68 = (tmp66 - tmp67);
			Float norm = tmp68;
			bool tmp69 = (norm == (int)0);
			if ((tmp69)){
				Float tmp70 = _this->ty;
				tmp64 = -(tmp70);
			}
			else{
				Float tmp70 = (Float(((Float)1.0)) / Float(norm));
				Float tmp71 = _this->a;
				Float tmp72 = (ty - _this->ty);
				Float tmp73 = (tmp71 * tmp72);
				Float tmp74 = _this->b;
				Float tmp75 = (_this->tx - tx);
				Float tmp76 = (tmp74 * tmp75);
				Float tmp77 = (tmp73 + tmp76);
				tmp64 = (tmp70 * tmp77);
			}
		}
		::openfl::geom::Matrix tmp65 = this->__renderTransform;
		tmp65->ty = tmp64;
		Float tmp66 = width;
		::openfl::geom::Matrix tmp67 = this->__renderTransform;
		Float tmp68 = tmp67->tx;
		Float tmp69 = (tmp66 + tmp68);
		int tmp70 = ::Math_obj::ceil(tmp69);
		int newWidth = tmp70;
		Float tmp71 = height;
		::openfl::geom::Matrix tmp72 = this->__renderTransform;
		Float tmp73 = tmp72->ty;
		Float tmp74 = (tmp71 + tmp73);
		int tmp75 = ::Math_obj::ceil(tmp74);
		int newHeight = tmp75;
		int tmp76 = newWidth;
		int tmp77 = this->__width;
		bool tmp78 = (tmp76 != tmp77);
		bool tmp79 = !(tmp78);
		bool tmp80;
		if ((tmp79)){
			int tmp81 = newHeight;
			int tmp82 = this->__height;
			int tmp83 = tmp82;
			tmp80 = (tmp81 != tmp83);
		}
		else{
			tmp80 = true;
		}
		if ((tmp80)){
			this->set___dirty(true);
		}
		this->__width = newWidth;
		this->__height = newHeight;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(Graphics_obj,__update,(void))

bool Graphics_obj::set___dirty( bool value){
	bool tmp = value;
	bool tmp1;
	if ((tmp)){
		::openfl::display::DisplayObject tmp2 = this->__owner;
		::openfl::display::DisplayObject tmp3 = tmp2;
		tmp1 = (tmp3 != null());
	}
	else{
		tmp1 = false;
	}
	if ((tmp1)){
		::openfl::display::DisplayObject tmp2 = this->__owner;
		::openfl::display::DisplayObject _this = tmp2;
		bool tmp3 = _this->__renderDirty;
		bool tmp4 = !(tmp3);
		if ((tmp4)){
			_this->__renderDirty = true;
			_this->__setParentRenderDirty();
		}
	}
	bool tmp2 = this->__dirty = value;
	return tmp2;
}


HX_DEFINE_DYNAMIC_FUNC1(Graphics_obj,set___dirty,return )


Graphics_obj::Graphics_obj()
{
}

void Graphics_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(Graphics);
	HX_MARK_MEMBER_NAME(__bounds,"__bounds");
	HX_MARK_MEMBER_NAME(__commands,"__commands");
	HX_MARK_MEMBER_NAME(__dirty,"__dirty");
	HX_MARK_MEMBER_NAME(__height,"__height");
	HX_MARK_MEMBER_NAME(__managed,"__managed");
	HX_MARK_MEMBER_NAME(__positionX,"__positionX");
	HX_MARK_MEMBER_NAME(__positionY,"__positionY");
	HX_MARK_MEMBER_NAME(__renderTransform,"__renderTransform");
	HX_MARK_MEMBER_NAME(__strokePadding,"__strokePadding");
	HX_MARK_MEMBER_NAME(__transformDirty,"__transformDirty");
	HX_MARK_MEMBER_NAME(__visible,"__visible");
	HX_MARK_MEMBER_NAME(__owner,"__owner");
	HX_MARK_MEMBER_NAME(__width,"__width");
	HX_MARK_MEMBER_NAME(__worldTransform,"__worldTransform");
	HX_MARK_MEMBER_NAME(__cairo,"__cairo");
	HX_MARK_MEMBER_NAME(__bitmap,"__bitmap");
	HX_MARK_END_CLASS();
}

void Graphics_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(__bounds,"__bounds");
	HX_VISIT_MEMBER_NAME(__commands,"__commands");
	HX_VISIT_MEMBER_NAME(__dirty,"__dirty");
	HX_VISIT_MEMBER_NAME(__height,"__height");
	HX_VISIT_MEMBER_NAME(__managed,"__managed");
	HX_VISIT_MEMBER_NAME(__positionX,"__positionX");
	HX_VISIT_MEMBER_NAME(__positionY,"__positionY");
	HX_VISIT_MEMBER_NAME(__renderTransform,"__renderTransform");
	HX_VISIT_MEMBER_NAME(__strokePadding,"__strokePadding");
	HX_VISIT_MEMBER_NAME(__transformDirty,"__transformDirty");
	HX_VISIT_MEMBER_NAME(__visible,"__visible");
	HX_VISIT_MEMBER_NAME(__owner,"__owner");
	HX_VISIT_MEMBER_NAME(__width,"__width");
	HX_VISIT_MEMBER_NAME(__worldTransform,"__worldTransform");
	HX_VISIT_MEMBER_NAME(__cairo,"__cairo");
	HX_VISIT_MEMBER_NAME(__bitmap,"__bitmap");
}

Dynamic Graphics_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"clear") ) { return clear_dyn(); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"lineTo") ) { return lineTo_dyn(); }
		if (HX_FIELD_EQ(inName,"moveTo") ) { return moveTo_dyn(); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"__dirty") ) { return __dirty; }
		if (HX_FIELD_EQ(inName,"__owner") ) { return __owner; }
		if (HX_FIELD_EQ(inName,"__width") ) { return __width; }
		if (HX_FIELD_EQ(inName,"__cairo") ) { return __cairo; }
		if (HX_FIELD_EQ(inName,"curveTo") ) { return curveTo_dyn(); }
		if (HX_FIELD_EQ(inName,"endFill") ) { return endFill_dyn(); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"__bounds") ) { return __bounds; }
		if (HX_FIELD_EQ(inName,"__height") ) { return __height; }
		if (HX_FIELD_EQ(inName,"__bitmap") ) { return __bitmap; }
		if (HX_FIELD_EQ(inName,"copyFrom") ) { return copyFrom_dyn(); }
		if (HX_FIELD_EQ(inName,"drawPath") ) { return drawPath_dyn(); }
		if (HX_FIELD_EQ(inName,"drawRect") ) { return drawRect_dyn(); }
		if (HX_FIELD_EQ(inName,"__update") ) { return __update_dyn(); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"__managed") ) { return __managed; }
		if (HX_FIELD_EQ(inName,"__visible") ) { return __visible; }
		if (HX_FIELD_EQ(inName,"beginFill") ) { return beginFill_dyn(); }
		if (HX_FIELD_EQ(inName,"lineStyle") ) { return lineStyle_dyn(); }
		if (HX_FIELD_EQ(inName,"__cleanup") ) { return __cleanup_dyn(); }
		if (HX_FIELD_EQ(inName,"__hitTest") ) { return __hitTest_dyn(); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"__commands") ) { return __commands; }
		if (HX_FIELD_EQ(inName,"drawCircle") ) { return drawCircle_dyn(); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"__positionX") ) { return __positionX; }
		if (HX_FIELD_EQ(inName,"__positionY") ) { return __positionY; }
		if (HX_FIELD_EQ(inName,"drawEllipse") ) { return drawEllipse_dyn(); }
		if (HX_FIELD_EQ(inName,"__getBounds") ) { return __getBounds_dyn(); }
		if (HX_FIELD_EQ(inName,"set___dirty") ) { return set___dirty_dyn(); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"cubicCurveTo") ) { return cubicCurveTo_dyn(); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"drawRoundRect") ) { return drawRoundRect_dyn(); }
		if (HX_FIELD_EQ(inName,"drawTriangles") ) { return drawTriangles_dyn(); }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"__strokePadding") ) { return __strokePadding; }
		if (HX_FIELD_EQ(inName,"beginBitmapFill") ) { return beginBitmapFill_dyn(); }
		if (HX_FIELD_EQ(inName,"lineBitmapStyle") ) { return lineBitmapStyle_dyn(); }
		if (HX_FIELD_EQ(inName,"__inflateBounds") ) { return __inflateBounds_dyn(); }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"__transformDirty") ) { return __transformDirty; }
		if (HX_FIELD_EQ(inName,"__worldTransform") ) { return __worldTransform; }
		if (HX_FIELD_EQ(inName,"drawGraphicsData") ) { return drawGraphicsData_dyn(); }
		if (HX_FIELD_EQ(inName,"readGraphicsData") ) { return readGraphicsData_dyn(); }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"__renderTransform") ) { return __renderTransform; }
		if (HX_FIELD_EQ(inName,"beginGradientFill") ) { return beginGradientFill_dyn(); }
		if (HX_FIELD_EQ(inName,"lineGradientStyle") ) { return lineGradientStyle_dyn(); }
		break;
	case 18:
		if (HX_FIELD_EQ(inName,"__readGraphicsData") ) { return __readGraphicsData_dyn(); }
		break;
	case 20:
		if (HX_FIELD_EQ(inName,"drawRoundRectComplex") ) { return drawRoundRectComplex_dyn(); }
		break;
	case 26:
		if (HX_FIELD_EQ(inName,"__calculateBezierQuadPoint") ) { return __calculateBezierQuadPoint_dyn(); }
		break;
	case 27:
		if (HX_FIELD_EQ(inName,"__calculateBezierCubicPoint") ) { return __calculateBezierCubicPoint_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic Graphics_obj::__SetField(const ::String &inName,const Dynamic &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 7:
		if (HX_FIELD_EQ(inName,"__dirty") ) { if (inCallProp == hx::paccAlways) return set___dirty(inValue);__dirty=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"__owner") ) { __owner=inValue.Cast< ::openfl::display::DisplayObject >(); return inValue; }
		if (HX_FIELD_EQ(inName,"__width") ) { __width=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"__cairo") ) { __cairo=inValue.Cast< ::lime::graphics::cairo::Cairo >(); return inValue; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"__bounds") ) { __bounds=inValue.Cast< ::openfl::geom::Rectangle >(); return inValue; }
		if (HX_FIELD_EQ(inName,"__height") ) { __height=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"__bitmap") ) { __bitmap=inValue.Cast< ::openfl::display::BitmapData >(); return inValue; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"__managed") ) { __managed=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"__visible") ) { __visible=inValue.Cast< bool >(); return inValue; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"__commands") ) { __commands=inValue.Cast< ::openfl::_internal::renderer::DrawCommandBuffer >(); return inValue; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"__positionX") ) { __positionX=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"__positionY") ) { __positionY=inValue.Cast< Float >(); return inValue; }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"__strokePadding") ) { __strokePadding=inValue.Cast< Float >(); return inValue; }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"__transformDirty") ) { __transformDirty=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"__worldTransform") ) { __worldTransform=inValue.Cast< ::openfl::geom::Matrix >(); return inValue; }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"__renderTransform") ) { __renderTransform=inValue.Cast< ::openfl::geom::Matrix >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void Graphics_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("__bounds","\x95","\xf1","\x4c","\x0e"));
	outFields->push(HX_HCSTRING("__commands","\xe8","\x23","\x8e","\x61"));
	outFields->push(HX_HCSTRING("__dirty","\xf2","\xa8","\x2e","\x44"));
	outFields->push(HX_HCSTRING("__height","\x07","\x73","\x7b","\xaa"));
	outFields->push(HX_HCSTRING("__managed","\x3f","\xe3","\x0f","\x95"));
	outFields->push(HX_HCSTRING("__positionX","\x6f","\x3c","\x7e","\xfe"));
	outFields->push(HX_HCSTRING("__positionY","\x70","\x3c","\x7e","\xfe"));
	outFields->push(HX_HCSTRING("__renderTransform","\x16","\xb8","\x95","\xb1"));
	outFields->push(HX_HCSTRING("__strokePadding","\xd9","\x6d","\xda","\xc4"));
	outFields->push(HX_HCSTRING("__transformDirty","\x26","\xf6","\x91","\x84"));
	outFields->push(HX_HCSTRING("__visible","\x52","\xc9","\x72","\x24"));
	outFields->push(HX_HCSTRING("__owner","\x13","\xf1","\xd4","\xa2"));
	outFields->push(HX_HCSTRING("__width","\xe6","\x0e","\xc1","\x34"));
	outFields->push(HX_HCSTRING("__worldTransform","\xda","\xa7","\xd8","\x9a"));
	outFields->push(HX_HCSTRING("__cairo","\x68","\x89","\x77","\xab"));
	outFields->push(HX_HCSTRING("__bitmap","\x0f","\x7b","\x3b","\x99"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsObject /*::openfl::geom::Rectangle*/ ,(int)offsetof(Graphics_obj,__bounds),HX_HCSTRING("__bounds","\x95","\xf1","\x4c","\x0e")},
	{hx::fsObject /*::openfl::_internal::renderer::DrawCommandBuffer*/ ,(int)offsetof(Graphics_obj,__commands),HX_HCSTRING("__commands","\xe8","\x23","\x8e","\x61")},
	{hx::fsBool,(int)offsetof(Graphics_obj,__dirty),HX_HCSTRING("__dirty","\xf2","\xa8","\x2e","\x44")},
	{hx::fsInt,(int)offsetof(Graphics_obj,__height),HX_HCSTRING("__height","\x07","\x73","\x7b","\xaa")},
	{hx::fsBool,(int)offsetof(Graphics_obj,__managed),HX_HCSTRING("__managed","\x3f","\xe3","\x0f","\x95")},
	{hx::fsFloat,(int)offsetof(Graphics_obj,__positionX),HX_HCSTRING("__positionX","\x6f","\x3c","\x7e","\xfe")},
	{hx::fsFloat,(int)offsetof(Graphics_obj,__positionY),HX_HCSTRING("__positionY","\x70","\x3c","\x7e","\xfe")},
	{hx::fsObject /*::openfl::geom::Matrix*/ ,(int)offsetof(Graphics_obj,__renderTransform),HX_HCSTRING("__renderTransform","\x16","\xb8","\x95","\xb1")},
	{hx::fsFloat,(int)offsetof(Graphics_obj,__strokePadding),HX_HCSTRING("__strokePadding","\xd9","\x6d","\xda","\xc4")},
	{hx::fsBool,(int)offsetof(Graphics_obj,__transformDirty),HX_HCSTRING("__transformDirty","\x26","\xf6","\x91","\x84")},
	{hx::fsBool,(int)offsetof(Graphics_obj,__visible),HX_HCSTRING("__visible","\x52","\xc9","\x72","\x24")},
	{hx::fsObject /*::openfl::display::DisplayObject*/ ,(int)offsetof(Graphics_obj,__owner),HX_HCSTRING("__owner","\x13","\xf1","\xd4","\xa2")},
	{hx::fsInt,(int)offsetof(Graphics_obj,__width),HX_HCSTRING("__width","\xe6","\x0e","\xc1","\x34")},
	{hx::fsObject /*::openfl::geom::Matrix*/ ,(int)offsetof(Graphics_obj,__worldTransform),HX_HCSTRING("__worldTransform","\xda","\xa7","\xd8","\x9a")},
	{hx::fsObject /*::lime::graphics::cairo::Cairo*/ ,(int)offsetof(Graphics_obj,__cairo),HX_HCSTRING("__cairo","\x68","\x89","\x77","\xab")},
	{hx::fsObject /*::openfl::display::BitmapData*/ ,(int)offsetof(Graphics_obj,__bitmap),HX_HCSTRING("__bitmap","\x0f","\x7b","\x3b","\x99")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo *sStaticStorageInfo = 0;
#endif

static ::String sMemberFields[] = {
	HX_HCSTRING("__bounds","\x95","\xf1","\x4c","\x0e"),
	HX_HCSTRING("__commands","\xe8","\x23","\x8e","\x61"),
	HX_HCSTRING("__dirty","\xf2","\xa8","\x2e","\x44"),
	HX_HCSTRING("__height","\x07","\x73","\x7b","\xaa"),
	HX_HCSTRING("__managed","\x3f","\xe3","\x0f","\x95"),
	HX_HCSTRING("__positionX","\x6f","\x3c","\x7e","\xfe"),
	HX_HCSTRING("__positionY","\x70","\x3c","\x7e","\xfe"),
	HX_HCSTRING("__renderTransform","\x16","\xb8","\x95","\xb1"),
	HX_HCSTRING("__strokePadding","\xd9","\x6d","\xda","\xc4"),
	HX_HCSTRING("__transformDirty","\x26","\xf6","\x91","\x84"),
	HX_HCSTRING("__visible","\x52","\xc9","\x72","\x24"),
	HX_HCSTRING("__owner","\x13","\xf1","\xd4","\xa2"),
	HX_HCSTRING("__width","\xe6","\x0e","\xc1","\x34"),
	HX_HCSTRING("__worldTransform","\xda","\xa7","\xd8","\x9a"),
	HX_HCSTRING("__cairo","\x68","\x89","\x77","\xab"),
	HX_HCSTRING("__bitmap","\x0f","\x7b","\x3b","\x99"),
	HX_HCSTRING("beginBitmapFill","\x9b","\xc9","\x07","\x6a"),
	HX_HCSTRING("beginFill","\x4c","\xad","\x95","\x8c"),
	HX_HCSTRING("beginGradientFill","\x5c","\x3c","\x03","\x2e"),
	HX_HCSTRING("clear","\x8d","\x71","\x5b","\x48"),
	HX_HCSTRING("copyFrom","\xbf","\x0b","\x61","\xc8"),
	HX_HCSTRING("cubicCurveTo","\xe0","\x07","\x90","\x2e"),
	HX_HCSTRING("curveTo","\x0a","\x60","\x88","\xce"),
	HX_HCSTRING("drawCircle","\x34","\xed","\xd0","\x97"),
	HX_HCSTRING("drawEllipse","\x3a","\x85","\xce","\x54"),
	HX_HCSTRING("drawGraphicsData","\xb9","\xaa","\x6e","\x60"),
	HX_HCSTRING("drawPath","\xc9","\x8f","\xbb","\x5e"),
	HX_HCSTRING("drawRect","\x48","\xf7","\x10","\x60"),
	HX_HCSTRING("drawRoundRect","\xee","\xc3","\xaa","\xe2"),
	HX_HCSTRING("drawRoundRectComplex","\xe2","\x43","\x2c","\x11"),
	HX_HCSTRING("drawTriangles","\x07","\x44","\x68","\xde"),
	HX_HCSTRING("endFill","\xfe","\x87","\xe0","\x25"),
	HX_HCSTRING("lineBitmapStyle","\x2e","\x3f","\x21","\x45"),
	HX_HCSTRING("lineGradientStyle","\x8d","\x24","\xf2","\xc1"),
	HX_HCSTRING("lineStyle","\x9d","\xa8","\x18","\xcb"),
	HX_HCSTRING("lineTo","\x8f","\x46","\xa0","\xec"),
	HX_HCSTRING("moveTo","\xec","\xd2","\xac","\xcc"),
	HX_HCSTRING("readGraphicsData","\x0b","\x7d","\x00","\x87"),
	HX_HCSTRING("__calculateBezierCubicPoint","\x0b","\xc2","\xaf","\xf4"),
	HX_HCSTRING("__calculateBezierQuadPoint","\x44","\x46","\xe8","\x5e"),
	HX_HCSTRING("__cleanup","\x04","\x5d","\x90","\x2c"),
	HX_HCSTRING("__getBounds","\x8b","\x58","\xa0","\x10"),
	HX_HCSTRING("__hitTest","\x25","\xb1","\xcd","\x63"),
	HX_HCSTRING("__inflateBounds","\x3c","\x6f","\xee","\xb6"),
	HX_HCSTRING("__readGraphicsData","\x2b","\x10","\x91","\xf2"),
	HX_HCSTRING("__update","\x29","\xf1","\x34","\x2f"),
	HX_HCSTRING("set___dirty","\x15","\x10","\x96","\xd4"),
	::String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(Graphics_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(Graphics_obj::__mClass,"__mClass");
};

#endif

hx::Class Graphics_obj::__mClass;

void Graphics_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("openfl.display.Graphics","\x35","\x67","\x20","\x87");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = hx::Class_obj::dupFunctions(sMemberFields);
	__mClass->mCanCast = hx::TCanCast< Graphics_obj >;
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
} // end namespace display
