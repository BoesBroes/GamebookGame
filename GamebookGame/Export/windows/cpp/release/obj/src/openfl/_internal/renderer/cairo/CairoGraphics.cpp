#include <hxcpp.h>

#include "hxMath.h"
#ifndef INCLUDED_Std
#include <Std.h>
#endif
#ifndef INCLUDED_lime_graphics_Image
#include <lime/graphics/Image.h>
#endif
#ifndef INCLUDED_lime_graphics_cairo_Cairo
#include <lime/graphics/cairo/Cairo.h>
#endif
#ifndef INCLUDED_lime_graphics_cairo__CairoImageSurface_CairoImageSurface_Impl_
#include <lime/graphics/cairo/_CairoImageSurface/CairoImageSurface_Impl_.h>
#endif
#ifndef INCLUDED_lime_graphics_cairo__CairoPattern_CairoPattern_Impl_
#include <lime/graphics/cairo/_CairoPattern/CairoPattern_Impl_.h>
#endif
#ifndef INCLUDED_lime_math_Matrix3
#include <lime/math/Matrix3.h>
#endif
#ifndef INCLUDED_lime_math_Vector2
#include <lime/math/Vector2.h>
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
#ifndef INCLUDED_openfl__internal_renderer_DrawCommandBuffer
#include <openfl/_internal/renderer/DrawCommandBuffer.h>
#endif
#ifndef INCLUDED_openfl__internal_renderer_DrawCommandReader
#include <openfl/_internal/renderer/DrawCommandReader.h>
#endif
#ifndef INCLUDED_openfl__internal_renderer_DrawCommandType
#include <openfl/_internal/renderer/DrawCommandType.h>
#endif
#ifndef INCLUDED_openfl__internal_renderer_RenderSession
#include <openfl/_internal/renderer/RenderSession.h>
#endif
#ifndef INCLUDED_openfl__internal_renderer_cairo_CairoGraphics
#include <openfl/_internal/renderer/cairo/CairoGraphics.h>
#endif
#ifndef INCLUDED_openfl_display_BitmapData
#include <openfl/display/BitmapData.h>
#endif
#ifndef INCLUDED_openfl_display_Graphics
#include <openfl/display/Graphics.h>
#endif
#ifndef INCLUDED_openfl_display_IBitmapDrawable
#include <openfl/display/IBitmapDrawable.h>
#endif
#ifndef INCLUDED_openfl_geom_Matrix
#include <openfl/geom/Matrix.h>
#endif
#ifndef INCLUDED_openfl_geom_Point
#include <openfl/geom/Point.h>
#endif
#ifndef INCLUDED_openfl_geom_Rectangle
#include <openfl/geom/Rectangle.h>
#endif
namespace openfl{
namespace _internal{
namespace renderer{
namespace cairo{

Void CairoGraphics_obj::__construct()
{
	return null();
}

//CairoGraphics_obj::~CairoGraphics_obj() { }

Dynamic CairoGraphics_obj::__CreateEmpty() { return  new CairoGraphics_obj; }
hx::ObjectPtr< CairoGraphics_obj > CairoGraphics_obj::__new()
{  hx::ObjectPtr< CairoGraphics_obj > _result_ = new CairoGraphics_obj();
	_result_->__construct();
	return _result_;}

Dynamic CairoGraphics_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< CairoGraphics_obj > _result_ = new CairoGraphics_obj();
	_result_->__construct();
	return _result_;}

Float CairoGraphics_obj::SIN45;

Float CairoGraphics_obj::TAN22;

bool CairoGraphics_obj::allowSmoothing;

::openfl::display::BitmapData CairoGraphics_obj::bitmapFill;

bool CairoGraphics_obj::bitmapRepeat;

::openfl::geom::Rectangle CairoGraphics_obj::bounds;

::lime::graphics::cairo::Cairo CairoGraphics_obj::cairo;

::openfl::_internal::renderer::DrawCommandBuffer CairoGraphics_obj::fillCommands;

Dynamic CairoGraphics_obj::fillPattern;

::openfl::geom::Matrix CairoGraphics_obj::fillPatternMatrix;

::openfl::display::Graphics CairoGraphics_obj::graphics;

bool CairoGraphics_obj::hasFill;

bool CairoGraphics_obj::hasStroke;

bool CairoGraphics_obj::hitTesting;

::openfl::geom::Matrix CairoGraphics_obj::inversePendingMatrix;

::openfl::geom::Matrix CairoGraphics_obj::pendingMatrix;

::openfl::_internal::renderer::DrawCommandBuffer CairoGraphics_obj::strokeCommands;

Dynamic CairoGraphics_obj::strokePattern;

Void CairoGraphics_obj::closePath( hx::Null< bool >  __o_strokeBefore){
bool strokeBefore = __o_strokeBefore.Default(false);
{
		Dynamic tmp = ::openfl::_internal::renderer::cairo::CairoGraphics_obj::strokePattern;
		bool tmp1 = (tmp == null());
		if ((tmp1)){
			return null();
		}
		bool tmp2 = strokeBefore;
		bool tmp3 = !(tmp2);
		if ((tmp3)){
			::lime::graphics::cairo::Cairo tmp4 = ::openfl::_internal::renderer::cairo::CairoGraphics_obj::cairo;
			tmp4->closePath();
		}
		::lime::graphics::cairo::Cairo tmp4 = ::openfl::_internal::renderer::cairo::CairoGraphics_obj::cairo;
		Dynamic tmp5 = ::openfl::_internal::renderer::cairo::CairoGraphics_obj::strokePattern;
		tmp4->set_source(tmp5);
		bool tmp6 = ::openfl::_internal::renderer::cairo::CairoGraphics_obj::hitTesting;
		bool tmp7 = !(tmp6);
		if ((tmp7)){
			::lime::graphics::cairo::Cairo tmp8 = ::openfl::_internal::renderer::cairo::CairoGraphics_obj::cairo;
			tmp8->strokePreserve();
		}
		bool tmp8 = strokeBefore;
		if ((tmp8)){
			::lime::graphics::cairo::Cairo tmp9 = ::openfl::_internal::renderer::cairo::CairoGraphics_obj::cairo;
			tmp9->closePath();
		}
		::lime::graphics::cairo::Cairo tmp9 = ::openfl::_internal::renderer::cairo::CairoGraphics_obj::cairo;
		tmp9->newPath();
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(CairoGraphics_obj,closePath,(void))

Dynamic CairoGraphics_obj::createGradientPattern( Dynamic type,cpp::ArrayBase colors,cpp::ArrayBase alphas,cpp::ArrayBase ratios,::openfl::geom::Matrix matrix,Dynamic spreadMethod,Dynamic interpolationMethod,Float focalPointRatio){
	Dynamic pattern = null();
	Dynamic tmp = type;
	switch( (int)(tmp)){
		case (int)1: {
			bool tmp1 = (matrix == null());
			if ((tmp1)){
				::openfl::geom::Matrix tmp2 = ::openfl::geom::Matrix_obj::__new(null(),null(),null(),null(),null(),null());
				matrix = tmp2;
			}
			::openfl::geom::Point tmp2 = ::openfl::geom::Point_obj::__new(((Float)1638.4),(int)0);
			::openfl::geom::Point tmp3 = matrix->transformPoint(tmp2);
			::openfl::geom::Point point = tmp3;
			Float tmp4 = matrix->tx;
			::openfl::display::Graphics tmp5 = ::openfl::_internal::renderer::cairo::CairoGraphics_obj::graphics;
			Float tmp6 = tmp5->__bounds->x;
			Float tmp7 = (tmp4 + tmp6);
			Float x = tmp7;
			Float tmp8 = matrix->ty;
			::openfl::display::Graphics tmp9 = ::openfl::_internal::renderer::cairo::CairoGraphics_obj::graphics;
			Float tmp10 = tmp9->__bounds->y;
			Float tmp11 = (tmp8 + tmp10);
			Float y = tmp11;
			Float tmp12 = x;
			Float tmp13 = y;
			Float tmp14 = x;
			Float tmp15 = y;
			Float tmp16 = (point->x - matrix->tx);
			Float tmp17 = (Float(tmp16) / Float((int)2));
			Float tmp18 = ::Math_obj::abs(tmp17);
			Dynamic tmp19 = ::lime::graphics::cairo::_CairoPattern::CairoPattern_Impl__obj::createRadial(tmp12,tmp13,(int)0,tmp14,tmp15,tmp18);
			pattern = tmp19;
		}
		;break;
		case (int)0: {
			bool tmp1 = (matrix == null());
			if ((tmp1)){
				::openfl::geom::Matrix tmp2 = ::openfl::geom::Matrix_obj::__new(null(),null(),null(),null(),null(),null());
				matrix = tmp2;
			}
			::openfl::geom::Point tmp2 = ::openfl::geom::Point_obj::__new(((Float)-819.2),(int)0);
			::openfl::geom::Point tmp3 = matrix->transformPoint(tmp2);
			::openfl::geom::Point point1 = tmp3;
			::openfl::geom::Point tmp4 = ::openfl::geom::Point_obj::__new(((Float)819.2),(int)0);
			::openfl::geom::Point tmp5 = matrix->transformPoint(tmp4);
			::openfl::geom::Point point2 = tmp5;
			::openfl::display::Graphics tmp6 = ::openfl::_internal::renderer::cairo::CairoGraphics_obj::graphics;
			Float tmp7 = tmp6->__bounds->x;
			hx::AddEq(point1->x,tmp7);
			::openfl::display::Graphics tmp8 = ::openfl::_internal::renderer::cairo::CairoGraphics_obj::graphics;
			Float tmp9 = tmp8->__bounds->x;
			hx::AddEq(point2->x,tmp9);
			::openfl::display::Graphics tmp10 = ::openfl::_internal::renderer::cairo::CairoGraphics_obj::graphics;
			Float tmp11 = tmp10->__bounds->y;
			hx::AddEq(point1->y,tmp11);
			::openfl::display::Graphics tmp12 = ::openfl::_internal::renderer::cairo::CairoGraphics_obj::graphics;
			Float tmp13 = tmp12->__bounds->y;
			hx::AddEq(point2->y,tmp13);
			Float tmp14 = point1->x;
			Float tmp15 = point1->y;
			Float tmp16 = point2->x;
			Float tmp17 = point2->y;
			Dynamic tmp18 = ::lime::graphics::cairo::_CairoPattern::CairoPattern_Impl__obj::createLinear(tmp14,tmp15,tmp16,tmp17);
			pattern = tmp18;
		}
		;break;
	}
	{
		int _g1 = (int)0;
		int _g = colors->__Field(HX_HCSTRING("length","\xe6","\x94","\x07","\x9f"), hx::paccDynamic );
		while((true)){
			bool tmp1 = (_g1 < _g);
			bool tmp2 = !(tmp1);
			if ((tmp2)){
				break;
			}
			int tmp3 = (_g1)++;
			int i = tmp3;
			Dynamic tmp4 = colors->__GetItem(i);
			int rgb = tmp4;
			Dynamic tmp5 = alphas->__GetItem(i);
			Float alpha = tmp5;
			int tmp6 = (int(rgb) & int((int)16711680));
			int tmp7 = hx::UShr(tmp6,(int)16);
			Float tmp8 = (Float(tmp7) / Float((int)255));
			Float r = tmp8;
			int tmp9 = (int(rgb) & int((int)65280));
			int tmp10 = hx::UShr(tmp9,(int)8);
			Float tmp11 = (Float(tmp10) / Float((int)255));
			Float g = tmp11;
			int tmp12 = (int(rgb) & int((int)255));
			Float tmp13 = (Float(tmp12) / Float((int)255));
			Float b = tmp13;
			Dynamic tmp14 = ratios->__GetItem(i);
			Float tmp15 = (Float(tmp14) / Float((int)255));
			Float ratio = tmp15;
			bool tmp16 = (ratio < (int)0);
			if ((tmp16)){
				ratio = (int)0;
			}
			bool tmp17 = (ratio > (int)1);
			if ((tmp17)){
				ratio = (int)1;
			}
			Dynamic tmp18 = pattern;
			Float tmp19 = ratio;
			Float tmp20 = r;
			Float tmp21 = g;
			Float tmp22 = b;
			Float tmp23 = alpha;
			::lime::graphics::cairo::_CairoPattern::CairoPattern_Impl__obj::addColorStopRGBA(tmp18,tmp19,tmp20,tmp21,tmp22,tmp23);
		}
	}
	Dynamic tmp1 = pattern;
	::lime::math::Matrix3 tmp2 = ::lime::graphics::cairo::_CairoPattern::CairoPattern_Impl__obj::get_matrix(tmp1);
	::lime::math::Matrix3 mat = tmp2;
	::openfl::geom::Rectangle tmp3 = ::openfl::_internal::renderer::cairo::CairoGraphics_obj::bounds;
	mat->tx = tmp3->x;
	::openfl::geom::Rectangle tmp4 = ::openfl::_internal::renderer::cairo::CairoGraphics_obj::bounds;
	mat->ty = tmp4->y;
	Dynamic tmp5 = pattern;
	::lime::math::Matrix3 tmp6 = mat;
	::lime::graphics::cairo::_CairoPattern::CairoPattern_Impl__obj::set_matrix(tmp5,tmp6);
	Dynamic tmp7 = pattern;
	return tmp7;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC8(CairoGraphics_obj,createGradientPattern,return )

Dynamic CairoGraphics_obj::createImagePattern( ::openfl::display::BitmapData bitmapFill,::openfl::geom::Matrix matrix,bool bitmapRepeat,bool smooth){
	Dynamic tmp = bitmapFill->getSurface();
	Dynamic tmp1 = ::lime::graphics::cairo::_CairoPattern::CairoPattern_Impl__obj::createForSurface(tmp);
	Dynamic pattern = tmp1;
	Dynamic tmp2 = pattern;
	bool tmp3 = smooth;
	bool tmp4;
	if ((tmp3)){
		tmp4 = ::openfl::_internal::renderer::cairo::CairoGraphics_obj::allowSmoothing;
	}
	else{
		tmp4 = false;
	}
	int tmp5;
	if ((tmp4)){
		tmp5 = (int)1;
	}
	else{
		tmp5 = (int)3;
	}
	::lime::graphics::cairo::_CairoPattern::CairoPattern_Impl__obj::set_filter(tmp2,tmp5);
	bool tmp6 = bitmapRepeat;
	if ((tmp6)){
		Dynamic tmp7 = pattern;
		::lime::graphics::cairo::_CairoPattern::CairoPattern_Impl__obj::set_extend(tmp7,(int)1);
	}
	::openfl::_internal::renderer::cairo::CairoGraphics_obj::fillPatternMatrix = matrix;
	Dynamic tmp7 = pattern;
	return tmp7;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC4(CairoGraphics_obj,createImagePattern,return )

Void CairoGraphics_obj::drawRoundRect( Float x,Float y,Float width,Float height,Float ellipseWidth,Dynamic ellipseHeight){
{
		bool tmp = (ellipseHeight == null());
		if ((tmp)){
			ellipseHeight = ellipseWidth;
		}
		hx::MultEq(ellipseWidth,((Float)0.5));
		hx::MultEq(ellipseHeight,((Float)0.5));
		Float tmp1 = ellipseWidth;
		Float tmp2 = (Float(width) / Float((int)2));
		bool tmp3 = (tmp1 > tmp2);
		if ((tmp3)){
			Float tmp4 = (Float(width) / Float((int)2));
			ellipseWidth = tmp4;
		}
		Dynamic tmp4 = ellipseHeight;
		Float tmp5 = (Float(height) / Float((int)2));
		bool tmp6 = (tmp4 > tmp5);
		if ((tmp6)){
			Float tmp7 = (Float(height) / Float((int)2));
			ellipseHeight = tmp7;
		}
		Float tmp7 = (x + width);
		Float xe = tmp7;
		Float tmp8 = (y + height);
		Float ye = tmp8;
		Float tmp9 = ellipseWidth;
		Float tmp10 = -(tmp9);
		Float tmp11 = ellipseWidth;
		Float tmp12 = ::openfl::_internal::renderer::cairo::CairoGraphics_obj::SIN45;
		Float tmp13 = (tmp11 * tmp12);
		Float tmp14 = (tmp10 + tmp13);
		Float cx1 = tmp14;
		Float tmp15 = ellipseWidth;
		Float tmp16 = -(tmp15);
		Float tmp17 = ellipseWidth;
		Float tmp18 = ::openfl::_internal::renderer::cairo::CairoGraphics_obj::TAN22;
		Float tmp19 = (tmp17 * tmp18);
		Float tmp20 = (tmp16 + tmp19);
		Float cx2 = tmp20;
		Dynamic tmp21 = ellipseHeight;
		Float tmp22 = -(tmp21);
		Dynamic tmp23 = ellipseHeight;
		Float tmp24 = ::openfl::_internal::renderer::cairo::CairoGraphics_obj::SIN45;
		Float tmp25 = (tmp23 * tmp24);
		Float tmp26 = (tmp22 + tmp25);
		Float cy1 = tmp26;
		Dynamic tmp27 = ellipseHeight;
		Float tmp28 = -(tmp27);
		Dynamic tmp29 = ellipseHeight;
		Float tmp30 = ::openfl::_internal::renderer::cairo::CairoGraphics_obj::TAN22;
		Float tmp31 = (tmp29 * tmp30);
		Float tmp32 = (tmp28 + tmp31);
		Float cy2 = tmp32;
		::lime::graphics::cairo::Cairo tmp33 = ::openfl::_internal::renderer::cairo::CairoGraphics_obj::cairo;
		Float tmp34 = xe;
		Float tmp35 = (ye - ellipseHeight);
		tmp33->moveTo(tmp34,tmp35);
		Float tmp36 = xe;
		Float tmp37 = (ye + cy2);
		Float tmp38 = (xe + cx1);
		Float tmp39 = (ye + cy1);
		::openfl::_internal::renderer::cairo::CairoGraphics_obj::quadraticCurveTo(tmp36,tmp37,tmp38,tmp39);
		Float tmp40 = (xe + cx2);
		Float tmp41 = ye;
		Float tmp42 = (xe - ellipseWidth);
		Float tmp43 = ye;
		::openfl::_internal::renderer::cairo::CairoGraphics_obj::quadraticCurveTo(tmp40,tmp41,tmp42,tmp43);
		::lime::graphics::cairo::Cairo tmp44 = ::openfl::_internal::renderer::cairo::CairoGraphics_obj::cairo;
		Float tmp45 = (x + ellipseWidth);
		Float tmp46 = ye;
		tmp44->lineTo(tmp45,tmp46);
		Float tmp47 = (x - cx2);
		Float tmp48 = ye;
		Float tmp49 = (x - cx1);
		Float tmp50 = (ye + cy1);
		::openfl::_internal::renderer::cairo::CairoGraphics_obj::quadraticCurveTo(tmp47,tmp48,tmp49,tmp50);
		Float tmp51 = x;
		Float tmp52 = (ye + cy2);
		Float tmp53 = x;
		Float tmp54 = (ye - ellipseHeight);
		::openfl::_internal::renderer::cairo::CairoGraphics_obj::quadraticCurveTo(tmp51,tmp52,tmp53,tmp54);
		::lime::graphics::cairo::Cairo tmp55 = ::openfl::_internal::renderer::cairo::CairoGraphics_obj::cairo;
		Float tmp56 = x;
		Float tmp57 = (y + ellipseHeight);
		tmp55->lineTo(tmp56,tmp57);
		Float tmp58 = x;
		Float tmp59 = (y - cy2);
		Float tmp60 = (x - cx1);
		Float tmp61 = (y - cy1);
		::openfl::_internal::renderer::cairo::CairoGraphics_obj::quadraticCurveTo(tmp58,tmp59,tmp60,tmp61);
		Float tmp62 = (x - cx2);
		Float tmp63 = y;
		Float tmp64 = (x + ellipseWidth);
		Float tmp65 = y;
		::openfl::_internal::renderer::cairo::CairoGraphics_obj::quadraticCurveTo(tmp62,tmp63,tmp64,tmp65);
		::lime::graphics::cairo::Cairo tmp66 = ::openfl::_internal::renderer::cairo::CairoGraphics_obj::cairo;
		Float tmp67 = (xe - ellipseWidth);
		Float tmp68 = y;
		tmp66->lineTo(tmp67,tmp68);
		Float tmp69 = (xe + cx2);
		Float tmp70 = y;
		Float tmp71 = (xe + cx1);
		Float tmp72 = (y - cy1);
		::openfl::_internal::renderer::cairo::CairoGraphics_obj::quadraticCurveTo(tmp69,tmp70,tmp71,tmp72);
		Float tmp73 = xe;
		Float tmp74 = (y - cy2);
		Float tmp75 = xe;
		Float tmp76 = (y + ellipseHeight);
		::openfl::_internal::renderer::cairo::CairoGraphics_obj::quadraticCurveTo(tmp73,tmp74,tmp75,tmp76);
		::lime::graphics::cairo::Cairo tmp77 = ::openfl::_internal::renderer::cairo::CairoGraphics_obj::cairo;
		Float tmp78 = xe;
		Float tmp79 = (ye - ellipseHeight);
		tmp77->lineTo(tmp78,tmp79);
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC6(CairoGraphics_obj,drawRoundRect,(void))

Void CairoGraphics_obj::endFill( ){
{
		::lime::graphics::cairo::Cairo tmp = ::openfl::_internal::renderer::cairo::CairoGraphics_obj::cairo;
		tmp->newPath();
		::openfl::_internal::renderer::DrawCommandBuffer tmp1 = ::openfl::_internal::renderer::cairo::CairoGraphics_obj::fillCommands;
		::openfl::_internal::renderer::cairo::CairoGraphics_obj::playCommands(tmp1,false);
		::openfl::_internal::renderer::DrawCommandBuffer tmp2 = ::openfl::_internal::renderer::cairo::CairoGraphics_obj::fillCommands;
		tmp2->clear();
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(CairoGraphics_obj,endFill,(void))

Void CairoGraphics_obj::endStroke( ){
{
		::lime::graphics::cairo::Cairo tmp = ::openfl::_internal::renderer::cairo::CairoGraphics_obj::cairo;
		tmp->newPath();
		::openfl::_internal::renderer::DrawCommandBuffer tmp1 = ::openfl::_internal::renderer::cairo::CairoGraphics_obj::strokeCommands;
		::openfl::_internal::renderer::cairo::CairoGraphics_obj::playCommands(tmp1,true);
		::lime::graphics::cairo::Cairo tmp2 = ::openfl::_internal::renderer::cairo::CairoGraphics_obj::cairo;
		tmp2->closePath();
		::openfl::_internal::renderer::DrawCommandBuffer tmp3 = ::openfl::_internal::renderer::cairo::CairoGraphics_obj::strokeCommands;
		tmp3->clear();
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(CairoGraphics_obj,endStroke,(void))

bool CairoGraphics_obj::hitTest( ::openfl::display::Graphics graphics,Float x,Float y){
	::openfl::_internal::renderer::cairo::CairoGraphics_obj::graphics = graphics;
	::openfl::_internal::renderer::cairo::CairoGraphics_obj::bounds = graphics->__bounds;
	int tmp = graphics->__commands->get_length();
	bool tmp1 = (tmp == (int)0);
	bool tmp2 = !(tmp1);
	bool tmp3 = tmp2;
	bool tmp4;
	if ((tmp3)){
		::openfl::geom::Rectangle tmp5 = ::openfl::_internal::renderer::cairo::CairoGraphics_obj::bounds;
		::openfl::geom::Rectangle tmp6 = tmp5;
		::openfl::geom::Rectangle tmp7 = tmp6;
		tmp4 = (tmp7 == null());
	}
	else{
		tmp4 = true;
	}
	bool tmp5 = !(tmp4);
	bool tmp6 = tmp5;
	bool tmp7;
	if ((tmp6)){
		::openfl::geom::Rectangle tmp8 = ::openfl::_internal::renderer::cairo::CairoGraphics_obj::bounds;
		::openfl::geom::Rectangle tmp9 = tmp8;
		::openfl::geom::Rectangle tmp10 = tmp9;
		Float tmp11 = tmp10->width;
		tmp7 = (tmp11 == (int)0);
	}
	else{
		tmp7 = true;
	}
	bool tmp8 = !(tmp7);
	bool tmp9 = tmp8;
	bool tmp10;
	if ((tmp9)){
		::openfl::geom::Rectangle tmp11 = ::openfl::_internal::renderer::cairo::CairoGraphics_obj::bounds;
		::openfl::geom::Rectangle tmp12 = tmp11;
		::openfl::geom::Rectangle tmp13 = tmp12;
		Float tmp14 = tmp13->height;
		tmp10 = (tmp14 == (int)0);
	}
	else{
		tmp10 = true;
	}
	bool tmp11 = !(tmp10);
	bool tmp12;
	if ((tmp11)){
		::openfl::geom::Rectangle tmp13 = ::openfl::_internal::renderer::cairo::CairoGraphics_obj::bounds;
		::openfl::geom::Rectangle tmp14 = tmp13;
		Float tmp15 = x;
		Float tmp16 = y;
		Float tmp17 = tmp15;
		Float tmp18 = tmp16;
		bool tmp19 = tmp14->contains(tmp17,tmp18);
		bool tmp20 = tmp19;
		bool tmp21 = tmp20;
		tmp12 = !(tmp21);
	}
	else{
		tmp12 = true;
	}
	if ((tmp12)){
		return false;
	}
	else{
		::openfl::_internal::renderer::cairo::CairoGraphics_obj::hitTesting = true;
		::openfl::geom::Rectangle tmp13 = ::openfl::_internal::renderer::cairo::CairoGraphics_obj::bounds;
		hx::SubEq(x,tmp13->x);
		::openfl::geom::Rectangle tmp14 = ::openfl::_internal::renderer::cairo::CairoGraphics_obj::bounds;
		hx::SubEq(y,tmp14->y);
		bool tmp15 = (graphics->__cairo == null());
		if ((tmp15)){
			::openfl::geom::Rectangle tmp16 = ::openfl::_internal::renderer::cairo::CairoGraphics_obj::bounds;
			Float tmp17 = tmp16->width;
			int tmp18 = ::Math_obj::floor(tmp17);
			::openfl::geom::Rectangle tmp19 = ::openfl::_internal::renderer::cairo::CairoGraphics_obj::bounds;
			Float tmp20 = tmp19->height;
			int tmp21 = ::Math_obj::floor(tmp20);
			::openfl::display::BitmapData tmp22 = ::openfl::display::BitmapData_obj::__new(tmp18,tmp21,true,(int)0);
			::openfl::display::BitmapData bitmap = tmp22;
			Dynamic tmp23 = bitmap->getSurface();
			Dynamic surface = tmp23;
			::lime::graphics::cairo::Cairo tmp24 = ::lime::graphics::cairo::Cairo_obj::__new(surface);
			graphics->__cairo = tmp24;
		}
		::openfl::_internal::renderer::cairo::CairoGraphics_obj::cairo = graphics->__cairo;
		::openfl::_internal::renderer::DrawCommandBuffer tmp16 = ::openfl::_internal::renderer::cairo::CairoGraphics_obj::fillCommands;
		tmp16->clear();
		::openfl::_internal::renderer::DrawCommandBuffer tmp17 = ::openfl::_internal::renderer::cairo::CairoGraphics_obj::strokeCommands;
		tmp17->clear();
		::openfl::_internal::renderer::cairo::CairoGraphics_obj::hasFill = false;
		::openfl::_internal::renderer::cairo::CairoGraphics_obj::hasStroke = false;
		::openfl::_internal::renderer::cairo::CairoGraphics_obj::fillPattern = null();
		::openfl::_internal::renderer::cairo::CairoGraphics_obj::strokePattern = null();
		::lime::graphics::cairo::Cairo tmp18 = ::openfl::_internal::renderer::cairo::CairoGraphics_obj::cairo;
		tmp18->newPath();
		::openfl::_internal::renderer::DrawCommandReader tmp19 = ::openfl::_internal::renderer::DrawCommandReader_obj::__new(graphics->__commands);
		::openfl::_internal::renderer::DrawCommandReader data = tmp19;
		{
			int _g = (int)0;
			Array< ::Dynamic > _g1 = graphics->__commands->types;
			while((true)){
				bool tmp20 = (_g < _g1->length);
				bool tmp21 = !(tmp20);
				if ((tmp21)){
					break;
				}
				::openfl::_internal::renderer::DrawCommandType tmp22 = _g1->__get(_g).StaticCast< ::openfl::_internal::renderer::DrawCommandType >();
				::openfl::_internal::renderer::DrawCommandType type = tmp22;
				++(_g);
				switch( (int)(type->__Index())){
					case (int)3: {
						::openfl::_internal::renderer::DrawCommandReader tmp23;
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
							tmp23 = data;
						}
						::openfl::_internal::renderer::DrawCommandReader c = tmp23;
						::openfl::_internal::renderer::DrawCommandBuffer tmp24 = ::openfl::_internal::renderer::cairo::CairoGraphics_obj::fillCommands;
						::openfl::_internal::renderer::DrawCommandBuffer tmp25 = c->buffer;
						int tmp26 = c->fPos;
						int tmp27 = tmp26;
						Float tmp28 = tmp25->f->__get(tmp27);
						::openfl::_internal::renderer::DrawCommandBuffer tmp29 = c->buffer;
						int tmp30 = c->fPos;
						int tmp31 = (tmp30 + (int)1);
						Float tmp32 = tmp29->f->__get(tmp31);
						::openfl::_internal::renderer::DrawCommandBuffer tmp33 = c->buffer;
						int tmp34 = c->fPos;
						int tmp35 = (tmp34 + (int)2);
						Float tmp36 = tmp33->f->__get(tmp35);
						::openfl::_internal::renderer::DrawCommandBuffer tmp37 = c->buffer;
						int tmp38 = c->fPos;
						int tmp39 = (tmp38 + (int)3);
						Float tmp40 = tmp37->f->__get(tmp39);
						::openfl::_internal::renderer::DrawCommandBuffer tmp41 = c->buffer;
						int tmp42 = c->fPos;
						int tmp43 = (tmp42 + (int)4);
						Float tmp44 = tmp41->f->__get(tmp43);
						::openfl::_internal::renderer::DrawCommandBuffer tmp45 = c->buffer;
						int tmp46 = c->fPos;
						int tmp47 = (tmp46 + (int)5);
						Float tmp48 = tmp45->f->__get(tmp47);
						tmp24->cubicCurveTo(tmp28,tmp32,tmp36,tmp40,tmp44,tmp48);
						::openfl::_internal::renderer::DrawCommandBuffer tmp49 = ::openfl::_internal::renderer::cairo::CairoGraphics_obj::strokeCommands;
						::openfl::_internal::renderer::DrawCommandBuffer tmp50 = c->buffer;
						int tmp51 = c->fPos;
						int tmp52 = tmp51;
						Float tmp53 = tmp50->f->__get(tmp52);
						::openfl::_internal::renderer::DrawCommandBuffer tmp54 = c->buffer;
						int tmp55 = c->fPos;
						int tmp56 = (tmp55 + (int)1);
						Float tmp57 = tmp54->f->__get(tmp56);
						::openfl::_internal::renderer::DrawCommandBuffer tmp58 = c->buffer;
						int tmp59 = c->fPos;
						int tmp60 = (tmp59 + (int)2);
						Float tmp61 = tmp58->f->__get(tmp60);
						::openfl::_internal::renderer::DrawCommandBuffer tmp62 = c->buffer;
						int tmp63 = c->fPos;
						int tmp64 = (tmp63 + (int)3);
						Float tmp65 = tmp62->f->__get(tmp64);
						::openfl::_internal::renderer::DrawCommandBuffer tmp66 = c->buffer;
						int tmp67 = c->fPos;
						int tmp68 = (tmp67 + (int)4);
						Float tmp69 = tmp66->f->__get(tmp68);
						::openfl::_internal::renderer::DrawCommandBuffer tmp70 = c->buffer;
						int tmp71 = c->fPos;
						int tmp72 = (tmp71 + (int)5);
						Float tmp73 = tmp70->f->__get(tmp72);
						tmp49->cubicCurveTo(tmp53,tmp57,tmp61,tmp65,tmp69,tmp73);
					}
					;break;
					case (int)4: {
						::openfl::_internal::renderer::DrawCommandReader tmp23;
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
							tmp23 = data;
						}
						::openfl::_internal::renderer::DrawCommandReader c = tmp23;
						::openfl::_internal::renderer::DrawCommandBuffer tmp24 = ::openfl::_internal::renderer::cairo::CairoGraphics_obj::fillCommands;
						::openfl::_internal::renderer::DrawCommandBuffer tmp25 = c->buffer;
						int tmp26 = c->fPos;
						int tmp27 = tmp26;
						Float tmp28 = tmp25->f->__get(tmp27);
						::openfl::_internal::renderer::DrawCommandBuffer tmp29 = c->buffer;
						int tmp30 = c->fPos;
						int tmp31 = (tmp30 + (int)1);
						Float tmp32 = tmp29->f->__get(tmp31);
						::openfl::_internal::renderer::DrawCommandBuffer tmp33 = c->buffer;
						int tmp34 = c->fPos;
						int tmp35 = (tmp34 + (int)2);
						Float tmp36 = tmp33->f->__get(tmp35);
						::openfl::_internal::renderer::DrawCommandBuffer tmp37 = c->buffer;
						int tmp38 = c->fPos;
						int tmp39 = (tmp38 + (int)3);
						Float tmp40 = tmp37->f->__get(tmp39);
						tmp24->curveTo(tmp28,tmp32,tmp36,tmp40);
						::openfl::_internal::renderer::DrawCommandBuffer tmp41 = ::openfl::_internal::renderer::cairo::CairoGraphics_obj::strokeCommands;
						::openfl::_internal::renderer::DrawCommandBuffer tmp42 = c->buffer;
						int tmp43 = c->fPos;
						int tmp44 = tmp43;
						Float tmp45 = tmp42->f->__get(tmp44);
						::openfl::_internal::renderer::DrawCommandBuffer tmp46 = c->buffer;
						int tmp47 = c->fPos;
						int tmp48 = (tmp47 + (int)1);
						Float tmp49 = tmp46->f->__get(tmp48);
						::openfl::_internal::renderer::DrawCommandBuffer tmp50 = c->buffer;
						int tmp51 = c->fPos;
						int tmp52 = (tmp51 + (int)2);
						Float tmp53 = tmp50->f->__get(tmp52);
						::openfl::_internal::renderer::DrawCommandBuffer tmp54 = c->buffer;
						int tmp55 = c->fPos;
						int tmp56 = (tmp55 + (int)3);
						Float tmp57 = tmp54->f->__get(tmp56);
						tmp41->curveTo(tmp45,tmp49,tmp53,tmp57);
					}
					;break;
					case (int)15: {
						::openfl::_internal::renderer::DrawCommandReader tmp23;
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
							tmp23 = data;
						}
						::openfl::_internal::renderer::DrawCommandReader c = tmp23;
						::openfl::_internal::renderer::DrawCommandBuffer tmp24 = ::openfl::_internal::renderer::cairo::CairoGraphics_obj::fillCommands;
						::openfl::_internal::renderer::DrawCommandBuffer tmp25 = c->buffer;
						int tmp26 = c->fPos;
						int tmp27 = tmp26;
						Float tmp28 = tmp25->f->__get(tmp27);
						::openfl::_internal::renderer::DrawCommandBuffer tmp29 = c->buffer;
						int tmp30 = c->fPos;
						int tmp31 = (tmp30 + (int)1);
						Float tmp32 = tmp29->f->__get(tmp31);
						tmp24->lineTo(tmp28,tmp32);
						::openfl::_internal::renderer::DrawCommandBuffer tmp33 = ::openfl::_internal::renderer::cairo::CairoGraphics_obj::strokeCommands;
						::openfl::_internal::renderer::DrawCommandBuffer tmp34 = c->buffer;
						int tmp35 = c->fPos;
						int tmp36 = tmp35;
						Float tmp37 = tmp34->f->__get(tmp36);
						::openfl::_internal::renderer::DrawCommandBuffer tmp38 = c->buffer;
						int tmp39 = c->fPos;
						int tmp40 = (tmp39 + (int)1);
						Float tmp41 = tmp38->f->__get(tmp40);
						tmp33->lineTo(tmp37,tmp41);
					}
					;break;
					case (int)16: {
						::openfl::_internal::renderer::DrawCommandReader tmp23;
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
							tmp23 = data;
						}
						::openfl::_internal::renderer::DrawCommandReader c = tmp23;
						::openfl::_internal::renderer::DrawCommandBuffer tmp24 = ::openfl::_internal::renderer::cairo::CairoGraphics_obj::fillCommands;
						::openfl::_internal::renderer::DrawCommandBuffer tmp25 = c->buffer;
						int tmp26 = c->fPos;
						int tmp27 = tmp26;
						Float tmp28 = tmp25->f->__get(tmp27);
						::openfl::_internal::renderer::DrawCommandBuffer tmp29 = c->buffer;
						int tmp30 = c->fPos;
						int tmp31 = (tmp30 + (int)1);
						Float tmp32 = tmp29->f->__get(tmp31);
						tmp24->moveTo(tmp28,tmp32);
						::openfl::_internal::renderer::DrawCommandBuffer tmp33 = ::openfl::_internal::renderer::cairo::CairoGraphics_obj::strokeCommands;
						::openfl::_internal::renderer::DrawCommandBuffer tmp34 = c->buffer;
						int tmp35 = c->fPos;
						int tmp36 = tmp35;
						Float tmp37 = tmp34->f->__get(tmp36);
						::openfl::_internal::renderer::DrawCommandBuffer tmp38 = c->buffer;
						int tmp39 = c->fPos;
						int tmp40 = (tmp39 + (int)1);
						Float tmp41 = tmp38->f->__get(tmp40);
						tmp33->moveTo(tmp37,tmp41);
					}
					;break;
					case (int)14: {
						::openfl::_internal::renderer::DrawCommandReader tmp23;
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
							tmp23 = data;
						}
						::openfl::_internal::renderer::DrawCommandReader c = tmp23;
						::openfl::_internal::renderer::DrawCommandBuffer tmp24 = ::openfl::_internal::renderer::cairo::CairoGraphics_obj::strokeCommands;
						::openfl::_internal::renderer::DrawCommandBuffer tmp25 = c->buffer;
						int tmp26 = c->oPos;
						int tmp27 = tmp26;
						Dynamic tmp28 = tmp25->o->__GetItem(tmp27);
						Dynamic tmp29 = tmp28;
						::openfl::_internal::renderer::DrawCommandBuffer tmp30 = c->buffer;
						int tmp31 = c->iPos;
						int tmp32 = tmp31;
						int tmp33 = tmp30->i->__get(tmp32);
						int tmp34 = tmp33;
						::openfl::_internal::renderer::DrawCommandBuffer tmp35 = c->buffer;
						int tmp36 = c->bPos;
						int tmp37 = tmp36;
						bool tmp38 = tmp35->b->__get(tmp37);
						bool tmp39 = tmp38;
						::openfl::_internal::renderer::DrawCommandBuffer tmp40 = c->buffer;
						int tmp41 = c->oPos;
						int tmp42 = (tmp41 + (int)1);
						Dynamic tmp43 = tmp40->o->__GetItem(tmp42);
						Dynamic tmp44 = tmp43;
						::openfl::_internal::renderer::DrawCommandBuffer tmp45 = c->buffer;
						int tmp46 = c->oPos;
						int tmp47 = (tmp46 + (int)2);
						Dynamic tmp48 = tmp45->o->__GetItem(tmp47);
						Dynamic tmp49 = tmp48;
						::openfl::_internal::renderer::DrawCommandBuffer tmp50 = c->buffer;
						int tmp51 = c->oPos;
						int tmp52 = (tmp51 + (int)3);
						Dynamic tmp53 = tmp50->o->__GetItem(tmp52);
						Dynamic tmp54 = tmp53;
						::openfl::_internal::renderer::DrawCommandBuffer tmp55 = c->buffer;
						int tmp56 = c->fPos;
						int tmp57 = (tmp56 + (int)1);
						Float tmp58 = tmp55->f->__get(tmp57);
						Float tmp59 = tmp58;
						tmp24->lineStyle(tmp29,tmp34,(int)1,tmp39,tmp44,tmp49,tmp54,tmp59);
					}
					;break;
					case (int)13: {
						::openfl::_internal::renderer::DrawCommandReader tmp23;
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
							tmp23 = data;
						}
						::openfl::_internal::renderer::DrawCommandReader c = tmp23;
						::openfl::_internal::renderer::DrawCommandBuffer tmp24 = ::openfl::_internal::renderer::cairo::CairoGraphics_obj::strokeCommands;
						::openfl::_internal::renderer::DrawCommandBuffer tmp25 = c->buffer;
						int tmp26 = c->oPos;
						int tmp27 = tmp26;
						Dynamic tmp28 = tmp25->o->__GetItem(tmp27);
						Dynamic tmp29 = tmp28;
						::openfl::_internal::renderer::DrawCommandBuffer tmp30 = c->buffer;
						int tmp31 = c->iiPos;
						int tmp32 = tmp31;
						::openfl::_internal::renderer::DrawCommandBuffer tmp33 = c->buffer;
						int tmp34 = c->ffPos;
						int tmp35 = tmp34;
						::openfl::_internal::renderer::DrawCommandBuffer tmp36 = c->buffer;
						int tmp37 = c->iiPos;
						int tmp38 = (tmp37 + (int)1);
						::openfl::_internal::renderer::DrawCommandBuffer tmp39 = c->buffer;
						int tmp40 = c->oPos;
						int tmp41 = (tmp40 + (int)1);
						Dynamic tmp42 = tmp39->o->__GetItem(tmp41);
						::openfl::geom::Matrix tmp43 = ((::openfl::geom::Matrix)(tmp42));
						::openfl::_internal::renderer::DrawCommandBuffer tmp44 = c->buffer;
						int tmp45 = c->oPos;
						int tmp46 = (tmp45 + (int)2);
						Dynamic tmp47 = tmp44->o->__GetItem(tmp46);
						Dynamic tmp48 = tmp47;
						::openfl::_internal::renderer::DrawCommandBuffer tmp49 = c->buffer;
						int tmp50 = c->oPos;
						int tmp51 = (tmp50 + (int)3);
						Dynamic tmp52 = tmp49->o->__GetItem(tmp51);
						Dynamic tmp53 = tmp52;
						::openfl::_internal::renderer::DrawCommandBuffer tmp54 = c->buffer;
						int tmp55 = c->fPos;
						int tmp56 = tmp55;
						Float tmp57 = tmp54->f->__get(tmp56);
						Float tmp58 = tmp57;
						tmp24->lineGradientStyle(tmp29,tmp30->ii->__get(tmp32).StaticCast< Array< int > >(),tmp33->ff->__get(tmp35).StaticCast< Array< Float > >(),tmp36->ii->__get(tmp38).StaticCast< Array< int > >(),tmp43,tmp48,tmp53,tmp58);
					}
					;break;
					case (int)12: {
						::openfl::_internal::renderer::DrawCommandReader tmp23;
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
							tmp23 = data;
						}
						::openfl::_internal::renderer::DrawCommandReader c = tmp23;
						::openfl::_internal::renderer::DrawCommandBuffer tmp24 = ::openfl::_internal::renderer::cairo::CairoGraphics_obj::strokeCommands;
						::openfl::_internal::renderer::DrawCommandBuffer tmp25 = c->buffer;
						int tmp26 = c->oPos;
						int tmp27 = tmp26;
						Dynamic tmp28 = tmp25->o->__GetItem(tmp27);
						::openfl::display::BitmapData tmp29 = ((::openfl::display::BitmapData)(tmp28));
						::openfl::_internal::renderer::DrawCommandBuffer tmp30 = c->buffer;
						int tmp31 = c->oPos;
						int tmp32 = (tmp31 + (int)1);
						Dynamic tmp33 = tmp30->o->__GetItem(tmp32);
						::openfl::geom::Matrix tmp34 = ((::openfl::geom::Matrix)(tmp33));
						::openfl::_internal::renderer::DrawCommandBuffer tmp35 = c->buffer;
						int tmp36 = c->bPos;
						int tmp37 = tmp36;
						bool tmp38 = tmp35->b->__get(tmp37);
						bool tmp39 = tmp38;
						::openfl::_internal::renderer::DrawCommandBuffer tmp40 = c->buffer;
						int tmp41 = c->bPos;
						int tmp42 = (tmp41 + (int)1);
						bool tmp43 = tmp40->b->__get(tmp42);
						bool tmp44 = tmp43;
						tmp24->lineBitmapStyle(tmp29,tmp34,tmp39,tmp44);
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
						::openfl::_internal::renderer::cairo::CairoGraphics_obj::endFill();
						::openfl::_internal::renderer::cairo::CairoGraphics_obj::endStroke();
						bool tmp23 = ::openfl::_internal::renderer::cairo::CairoGraphics_obj::hasFill;
						bool tmp24;
						if ((tmp23)){
							::lime::graphics::cairo::Cairo tmp25 = ::openfl::_internal::renderer::cairo::CairoGraphics_obj::cairo;
							::lime::graphics::cairo::Cairo tmp26 = tmp25;
							Float tmp27 = x;
							Float tmp28 = y;
							Float tmp29 = tmp27;
							Float tmp30 = tmp28;
							tmp24 = tmp26->inFill(tmp29,tmp30);
						}
						else{
							tmp24 = false;
						}
						if ((tmp24)){
							data->destroy();
							return true;
						}
						bool tmp25 = ::openfl::_internal::renderer::cairo::CairoGraphics_obj::hasStroke;
						bool tmp26;
						if ((tmp25)){
							::lime::graphics::cairo::Cairo tmp27 = ::openfl::_internal::renderer::cairo::CairoGraphics_obj::cairo;
							::lime::graphics::cairo::Cairo tmp28 = tmp27;
							Float tmp29 = x;
							Float tmp30 = y;
							Float tmp31 = tmp29;
							Float tmp32 = tmp30;
							tmp26 = tmp28->inStroke(tmp31,tmp32);
						}
						else{
							tmp26 = false;
						}
						if ((tmp26)){
							data->destroy();
							return true;
						}
						::openfl::_internal::renderer::cairo::CairoGraphics_obj::hasFill = false;
						::openfl::_internal::renderer::cairo::CairoGraphics_obj::bitmapFill = null();
					}
					;break;
					case (int)0: case (int)1: case (int)2: {
						::openfl::_internal::renderer::cairo::CairoGraphics_obj::endFill();
						::openfl::_internal::renderer::cairo::CairoGraphics_obj::endStroke();
						bool tmp23 = ::openfl::_internal::renderer::cairo::CairoGraphics_obj::hasFill;
						bool tmp24;
						if ((tmp23)){
							::lime::graphics::cairo::Cairo tmp25 = ::openfl::_internal::renderer::cairo::CairoGraphics_obj::cairo;
							::lime::graphics::cairo::Cairo tmp26 = tmp25;
							Float tmp27 = x;
							Float tmp28 = y;
							Float tmp29 = tmp27;
							Float tmp30 = tmp28;
							tmp24 = tmp26->inFill(tmp29,tmp30);
						}
						else{
							tmp24 = false;
						}
						if ((tmp24)){
							data->destroy();
							return true;
						}
						bool tmp25 = ::openfl::_internal::renderer::cairo::CairoGraphics_obj::hasStroke;
						bool tmp26;
						if ((tmp25)){
							::lime::graphics::cairo::Cairo tmp27 = ::openfl::_internal::renderer::cairo::CairoGraphics_obj::cairo;
							::lime::graphics::cairo::Cairo tmp28 = tmp27;
							Float tmp29 = x;
							Float tmp30 = y;
							Float tmp31 = tmp29;
							Float tmp32 = tmp30;
							tmp26 = tmp28->inStroke(tmp31,tmp32);
						}
						else{
							tmp26 = false;
						}
						if ((tmp26)){
							data->destroy();
							return true;
						}
						bool tmp27 = (type == ::openfl::_internal::renderer::DrawCommandType_obj::BEGIN_BITMAP_FILL);
						if ((tmp27)){
							::openfl::_internal::renderer::DrawCommandReader tmp28;
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
								tmp28 = data;
							}
							::openfl::_internal::renderer::DrawCommandReader c = tmp28;
							::openfl::_internal::renderer::DrawCommandBuffer tmp29 = ::openfl::_internal::renderer::cairo::CairoGraphics_obj::fillCommands;
							::openfl::_internal::renderer::DrawCommandBuffer tmp30 = c->buffer;
							int tmp31 = c->oPos;
							int tmp32 = tmp31;
							Dynamic tmp33 = tmp30->o->__GetItem(tmp32);
							::openfl::display::BitmapData tmp34 = ((::openfl::display::BitmapData)(tmp33));
							::openfl::_internal::renderer::DrawCommandBuffer tmp35 = c->buffer;
							int tmp36 = c->oPos;
							int tmp37 = (tmp36 + (int)1);
							Dynamic tmp38 = tmp35->o->__GetItem(tmp37);
							::openfl::geom::Matrix tmp39 = ((::openfl::geom::Matrix)(tmp38));
							::openfl::_internal::renderer::DrawCommandBuffer tmp40 = c->buffer;
							int tmp41 = c->bPos;
							int tmp42 = tmp41;
							bool tmp43 = tmp40->b->__get(tmp42);
							::openfl::_internal::renderer::DrawCommandBuffer tmp44 = c->buffer;
							int tmp45 = c->bPos;
							int tmp46 = (tmp45 + (int)1);
							bool tmp47 = tmp44->b->__get(tmp46);
							tmp29->beginBitmapFill(tmp34,tmp39,tmp43,tmp47);
							::openfl::_internal::renderer::DrawCommandBuffer tmp48 = ::openfl::_internal::renderer::cairo::CairoGraphics_obj::strokeCommands;
							::openfl::_internal::renderer::DrawCommandBuffer tmp49 = c->buffer;
							int tmp50 = c->oPos;
							int tmp51 = tmp50;
							Dynamic tmp52 = tmp49->o->__GetItem(tmp51);
							::openfl::display::BitmapData tmp53 = ((::openfl::display::BitmapData)(tmp52));
							::openfl::_internal::renderer::DrawCommandBuffer tmp54 = c->buffer;
							int tmp55 = c->oPos;
							int tmp56 = (tmp55 + (int)1);
							Dynamic tmp57 = tmp54->o->__GetItem(tmp56);
							::openfl::geom::Matrix tmp58 = ((::openfl::geom::Matrix)(tmp57));
							::openfl::_internal::renderer::DrawCommandBuffer tmp59 = c->buffer;
							int tmp60 = c->bPos;
							int tmp61 = tmp60;
							bool tmp62 = tmp59->b->__get(tmp61);
							::openfl::_internal::renderer::DrawCommandBuffer tmp63 = c->buffer;
							int tmp64 = c->bPos;
							int tmp65 = (tmp64 + (int)1);
							bool tmp66 = tmp63->b->__get(tmp65);
							tmp48->beginBitmapFill(tmp53,tmp58,tmp62,tmp66);
						}
						else{
							bool tmp28 = (type == ::openfl::_internal::renderer::DrawCommandType_obj::BEGIN_GRADIENT_FILL);
							if ((tmp28)){
								::openfl::_internal::renderer::DrawCommandReader tmp29;
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
									tmp29 = data;
								}
								::openfl::_internal::renderer::DrawCommandReader c = tmp29;
								::openfl::_internal::renderer::DrawCommandBuffer tmp30 = ::openfl::_internal::renderer::cairo::CairoGraphics_obj::fillCommands;
								::openfl::_internal::renderer::DrawCommandBuffer tmp31 = c->buffer;
								int tmp32 = c->oPos;
								int tmp33 = tmp32;
								Dynamic tmp34 = tmp31->o->__GetItem(tmp33);
								Dynamic tmp35 = tmp34;
								::openfl::_internal::renderer::DrawCommandBuffer tmp36 = c->buffer;
								int tmp37 = c->iiPos;
								int tmp38 = tmp37;
								::openfl::_internal::renderer::DrawCommandBuffer tmp39 = c->buffer;
								int tmp40 = c->ffPos;
								int tmp41 = tmp40;
								::openfl::_internal::renderer::DrawCommandBuffer tmp42 = c->buffer;
								int tmp43 = c->iiPos;
								int tmp44 = (tmp43 + (int)1);
								::openfl::_internal::renderer::DrawCommandBuffer tmp45 = c->buffer;
								int tmp46 = c->oPos;
								int tmp47 = (tmp46 + (int)1);
								Dynamic tmp48 = tmp45->o->__GetItem(tmp47);
								::openfl::geom::Matrix tmp49 = ((::openfl::geom::Matrix)(tmp48));
								::openfl::_internal::renderer::DrawCommandBuffer tmp50 = c->buffer;
								int tmp51 = c->oPos;
								int tmp52 = (tmp51 + (int)2);
								Dynamic tmp53 = tmp50->o->__GetItem(tmp52);
								Dynamic tmp54 = tmp53;
								::openfl::_internal::renderer::DrawCommandBuffer tmp55 = c->buffer;
								int tmp56 = c->oPos;
								int tmp57 = (tmp56 + (int)3);
								Dynamic tmp58 = tmp55->o->__GetItem(tmp57);
								Dynamic tmp59 = tmp58;
								::openfl::_internal::renderer::DrawCommandBuffer tmp60 = c->buffer;
								int tmp61 = c->fPos;
								int tmp62 = tmp61;
								Float tmp63 = tmp60->f->__get(tmp62);
								Float tmp64 = tmp63;
								tmp30->beginGradientFill(tmp35,tmp36->ii->__get(tmp38).StaticCast< Array< int > >(),tmp39->ff->__get(tmp41).StaticCast< Array< Float > >(),tmp42->ii->__get(tmp44).StaticCast< Array< int > >(),tmp49,tmp54,tmp59,tmp64);
								::openfl::_internal::renderer::DrawCommandBuffer tmp65 = ::openfl::_internal::renderer::cairo::CairoGraphics_obj::strokeCommands;
								::openfl::_internal::renderer::DrawCommandBuffer tmp66 = c->buffer;
								int tmp67 = c->oPos;
								int tmp68 = tmp67;
								Dynamic tmp69 = tmp66->o->__GetItem(tmp68);
								Dynamic tmp70 = tmp69;
								::openfl::_internal::renderer::DrawCommandBuffer tmp71 = c->buffer;
								int tmp72 = c->iiPos;
								int tmp73 = tmp72;
								::openfl::_internal::renderer::DrawCommandBuffer tmp74 = c->buffer;
								int tmp75 = c->ffPos;
								int tmp76 = tmp75;
								::openfl::_internal::renderer::DrawCommandBuffer tmp77 = c->buffer;
								int tmp78 = c->iiPos;
								int tmp79 = (tmp78 + (int)1);
								::openfl::_internal::renderer::DrawCommandBuffer tmp80 = c->buffer;
								int tmp81 = c->oPos;
								int tmp82 = (tmp81 + (int)1);
								Dynamic tmp83 = tmp80->o->__GetItem(tmp82);
								::openfl::geom::Matrix tmp84 = ((::openfl::geom::Matrix)(tmp83));
								::openfl::_internal::renderer::DrawCommandBuffer tmp85 = c->buffer;
								int tmp86 = c->oPos;
								int tmp87 = (tmp86 + (int)2);
								Dynamic tmp88 = tmp85->o->__GetItem(tmp87);
								Dynamic tmp89 = tmp88;
								::openfl::_internal::renderer::DrawCommandBuffer tmp90 = c->buffer;
								int tmp91 = c->oPos;
								int tmp92 = (tmp91 + (int)3);
								Dynamic tmp93 = tmp90->o->__GetItem(tmp92);
								Dynamic tmp94 = tmp93;
								::openfl::_internal::renderer::DrawCommandBuffer tmp95 = c->buffer;
								int tmp96 = c->fPos;
								int tmp97 = tmp96;
								Float tmp98 = tmp95->f->__get(tmp97);
								Float tmp99 = tmp98;
								tmp65->beginGradientFill(tmp70,tmp71->ii->__get(tmp73).StaticCast< Array< int > >(),tmp74->ff->__get(tmp76).StaticCast< Array< Float > >(),tmp77->ii->__get(tmp79).StaticCast< Array< int > >(),tmp84,tmp89,tmp94,tmp99);
							}
							else{
								::openfl::_internal::renderer::DrawCommandReader tmp29;
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
									tmp29 = data;
								}
								::openfl::_internal::renderer::DrawCommandReader c = tmp29;
								::openfl::_internal::renderer::DrawCommandBuffer tmp30 = ::openfl::_internal::renderer::cairo::CairoGraphics_obj::fillCommands;
								::openfl::_internal::renderer::DrawCommandBuffer tmp31 = c->buffer;
								int tmp32 = c->iPos;
								int tmp33 = tmp32;
								int tmp34 = tmp31->i->__get(tmp33);
								tmp30->beginFill(tmp34,(int)1);
								::openfl::_internal::renderer::DrawCommandBuffer tmp35 = ::openfl::_internal::renderer::cairo::CairoGraphics_obj::strokeCommands;
								::openfl::_internal::renderer::DrawCommandBuffer tmp36 = c->buffer;
								int tmp37 = c->iPos;
								int tmp38 = tmp37;
								int tmp39 = tmp36->i->__get(tmp38);
								tmp35->beginFill(tmp39,(int)1);
							}
						}
					}
					;break;
					case (int)5: {
						::openfl::_internal::renderer::DrawCommandReader tmp23;
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
							tmp23 = data;
						}
						::openfl::_internal::renderer::DrawCommandReader c = tmp23;
						::openfl::_internal::renderer::DrawCommandBuffer tmp24 = ::openfl::_internal::renderer::cairo::CairoGraphics_obj::fillCommands;
						::openfl::_internal::renderer::DrawCommandBuffer tmp25 = c->buffer;
						int tmp26 = c->fPos;
						int tmp27 = tmp26;
						Float tmp28 = tmp25->f->__get(tmp27);
						::openfl::_internal::renderer::DrawCommandBuffer tmp29 = c->buffer;
						int tmp30 = c->fPos;
						int tmp31 = (tmp30 + (int)1);
						Float tmp32 = tmp29->f->__get(tmp31);
						::openfl::_internal::renderer::DrawCommandBuffer tmp33 = c->buffer;
						int tmp34 = c->fPos;
						int tmp35 = (tmp34 + (int)2);
						Float tmp36 = tmp33->f->__get(tmp35);
						tmp24->drawCircle(tmp28,tmp32,tmp36);
						::openfl::_internal::renderer::DrawCommandBuffer tmp37 = ::openfl::_internal::renderer::cairo::CairoGraphics_obj::strokeCommands;
						::openfl::_internal::renderer::DrawCommandBuffer tmp38 = c->buffer;
						int tmp39 = c->fPos;
						int tmp40 = tmp39;
						Float tmp41 = tmp38->f->__get(tmp40);
						::openfl::_internal::renderer::DrawCommandBuffer tmp42 = c->buffer;
						int tmp43 = c->fPos;
						int tmp44 = (tmp43 + (int)1);
						Float tmp45 = tmp42->f->__get(tmp44);
						::openfl::_internal::renderer::DrawCommandBuffer tmp46 = c->buffer;
						int tmp47 = c->fPos;
						int tmp48 = (tmp47 + (int)2);
						Float tmp49 = tmp46->f->__get(tmp48);
						tmp37->drawCircle(tmp41,tmp45,tmp49);
					}
					;break;
					case (int)6: {
						::openfl::_internal::renderer::DrawCommandReader tmp23;
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
							tmp23 = data;
						}
						::openfl::_internal::renderer::DrawCommandReader c = tmp23;
						::openfl::_internal::renderer::DrawCommandBuffer tmp24 = ::openfl::_internal::renderer::cairo::CairoGraphics_obj::fillCommands;
						::openfl::_internal::renderer::DrawCommandBuffer tmp25 = c->buffer;
						int tmp26 = c->fPos;
						int tmp27 = tmp26;
						Float tmp28 = tmp25->f->__get(tmp27);
						::openfl::_internal::renderer::DrawCommandBuffer tmp29 = c->buffer;
						int tmp30 = c->fPos;
						int tmp31 = (tmp30 + (int)1);
						Float tmp32 = tmp29->f->__get(tmp31);
						::openfl::_internal::renderer::DrawCommandBuffer tmp33 = c->buffer;
						int tmp34 = c->fPos;
						int tmp35 = (tmp34 + (int)2);
						Float tmp36 = tmp33->f->__get(tmp35);
						::openfl::_internal::renderer::DrawCommandBuffer tmp37 = c->buffer;
						int tmp38 = c->fPos;
						int tmp39 = (tmp38 + (int)3);
						Float tmp40 = tmp37->f->__get(tmp39);
						tmp24->drawEllipse(tmp28,tmp32,tmp36,tmp40);
						::openfl::_internal::renderer::DrawCommandBuffer tmp41 = ::openfl::_internal::renderer::cairo::CairoGraphics_obj::strokeCommands;
						::openfl::_internal::renderer::DrawCommandBuffer tmp42 = c->buffer;
						int tmp43 = c->fPos;
						int tmp44 = tmp43;
						Float tmp45 = tmp42->f->__get(tmp44);
						::openfl::_internal::renderer::DrawCommandBuffer tmp46 = c->buffer;
						int tmp47 = c->fPos;
						int tmp48 = (tmp47 + (int)1);
						Float tmp49 = tmp46->f->__get(tmp48);
						::openfl::_internal::renderer::DrawCommandBuffer tmp50 = c->buffer;
						int tmp51 = c->fPos;
						int tmp52 = (tmp51 + (int)2);
						Float tmp53 = tmp50->f->__get(tmp52);
						::openfl::_internal::renderer::DrawCommandBuffer tmp54 = c->buffer;
						int tmp55 = c->fPos;
						int tmp56 = (tmp55 + (int)3);
						Float tmp57 = tmp54->f->__get(tmp56);
						tmp41->drawEllipse(tmp45,tmp49,tmp53,tmp57);
					}
					;break;
					case (int)7: {
						::openfl::_internal::renderer::DrawCommandReader tmp23;
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
							tmp23 = data;
						}
						::openfl::_internal::renderer::DrawCommandReader c = tmp23;
						::openfl::_internal::renderer::DrawCommandBuffer tmp24 = ::openfl::_internal::renderer::cairo::CairoGraphics_obj::fillCommands;
						::openfl::_internal::renderer::DrawCommandBuffer tmp25 = c->buffer;
						int tmp26 = c->fPos;
						int tmp27 = tmp26;
						Float tmp28 = tmp25->f->__get(tmp27);
						::openfl::_internal::renderer::DrawCommandBuffer tmp29 = c->buffer;
						int tmp30 = c->fPos;
						int tmp31 = (tmp30 + (int)1);
						Float tmp32 = tmp29->f->__get(tmp31);
						::openfl::_internal::renderer::DrawCommandBuffer tmp33 = c->buffer;
						int tmp34 = c->fPos;
						int tmp35 = (tmp34 + (int)2);
						Float tmp36 = tmp33->f->__get(tmp35);
						::openfl::_internal::renderer::DrawCommandBuffer tmp37 = c->buffer;
						int tmp38 = c->fPos;
						int tmp39 = (tmp38 + (int)3);
						Float tmp40 = tmp37->f->__get(tmp39);
						tmp24->drawRect(tmp28,tmp32,tmp36,tmp40);
						::openfl::_internal::renderer::DrawCommandBuffer tmp41 = ::openfl::_internal::renderer::cairo::CairoGraphics_obj::strokeCommands;
						::openfl::_internal::renderer::DrawCommandBuffer tmp42 = c->buffer;
						int tmp43 = c->fPos;
						int tmp44 = tmp43;
						Float tmp45 = tmp42->f->__get(tmp44);
						::openfl::_internal::renderer::DrawCommandBuffer tmp46 = c->buffer;
						int tmp47 = c->fPos;
						int tmp48 = (tmp47 + (int)1);
						Float tmp49 = tmp46->f->__get(tmp48);
						::openfl::_internal::renderer::DrawCommandBuffer tmp50 = c->buffer;
						int tmp51 = c->fPos;
						int tmp52 = (tmp51 + (int)2);
						Float tmp53 = tmp50->f->__get(tmp52);
						::openfl::_internal::renderer::DrawCommandBuffer tmp54 = c->buffer;
						int tmp55 = c->fPos;
						int tmp56 = (tmp55 + (int)3);
						Float tmp57 = tmp54->f->__get(tmp56);
						tmp41->drawRect(tmp45,tmp49,tmp53,tmp57);
					}
					;break;
					case (int)8: {
						::openfl::_internal::renderer::DrawCommandReader tmp23;
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
							tmp23 = data;
						}
						::openfl::_internal::renderer::DrawCommandReader c = tmp23;
						::openfl::_internal::renderer::DrawCommandBuffer tmp24 = ::openfl::_internal::renderer::cairo::CairoGraphics_obj::fillCommands;
						::openfl::_internal::renderer::DrawCommandBuffer tmp25 = c->buffer;
						int tmp26 = c->fPos;
						int tmp27 = tmp26;
						Float tmp28 = tmp25->f->__get(tmp27);
						::openfl::_internal::renderer::DrawCommandBuffer tmp29 = c->buffer;
						int tmp30 = c->fPos;
						int tmp31 = (tmp30 + (int)1);
						Float tmp32 = tmp29->f->__get(tmp31);
						::openfl::_internal::renderer::DrawCommandBuffer tmp33 = c->buffer;
						int tmp34 = c->fPos;
						int tmp35 = (tmp34 + (int)2);
						Float tmp36 = tmp33->f->__get(tmp35);
						::openfl::_internal::renderer::DrawCommandBuffer tmp37 = c->buffer;
						int tmp38 = c->fPos;
						int tmp39 = (tmp38 + (int)3);
						Float tmp40 = tmp37->f->__get(tmp39);
						::openfl::_internal::renderer::DrawCommandBuffer tmp41 = c->buffer;
						int tmp42 = c->fPos;
						int tmp43 = (tmp42 + (int)4);
						Float tmp44 = tmp41->f->__get(tmp43);
						::openfl::_internal::renderer::DrawCommandBuffer tmp45 = c->buffer;
						int tmp46 = c->oPos;
						int tmp47 = tmp46;
						Dynamic tmp48 = tmp45->o->__GetItem(tmp47);
						Dynamic tmp49 = tmp48;
						tmp24->drawRoundRect(tmp28,tmp32,tmp36,tmp40,tmp44,tmp49);
						::openfl::_internal::renderer::DrawCommandBuffer tmp50 = ::openfl::_internal::renderer::cairo::CairoGraphics_obj::strokeCommands;
						::openfl::_internal::renderer::DrawCommandBuffer tmp51 = c->buffer;
						int tmp52 = c->fPos;
						int tmp53 = tmp52;
						Float tmp54 = tmp51->f->__get(tmp53);
						::openfl::_internal::renderer::DrawCommandBuffer tmp55 = c->buffer;
						int tmp56 = c->fPos;
						int tmp57 = (tmp56 + (int)1);
						Float tmp58 = tmp55->f->__get(tmp57);
						::openfl::_internal::renderer::DrawCommandBuffer tmp59 = c->buffer;
						int tmp60 = c->fPos;
						int tmp61 = (tmp60 + (int)2);
						Float tmp62 = tmp59->f->__get(tmp61);
						::openfl::_internal::renderer::DrawCommandBuffer tmp63 = c->buffer;
						int tmp64 = c->fPos;
						int tmp65 = (tmp64 + (int)3);
						Float tmp66 = tmp63->f->__get(tmp65);
						::openfl::_internal::renderer::DrawCommandBuffer tmp67 = c->buffer;
						int tmp68 = c->fPos;
						int tmp69 = (tmp68 + (int)4);
						Float tmp70 = tmp67->f->__get(tmp69);
						::openfl::_internal::renderer::DrawCommandBuffer tmp71 = c->buffer;
						int tmp72 = c->oPos;
						int tmp73 = tmp72;
						Dynamic tmp74 = tmp71->o->__GetItem(tmp73);
						Dynamic tmp75 = tmp74;
						tmp50->drawRoundRect(tmp54,tmp58,tmp62,tmp66,tmp70,tmp75);
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
		::openfl::_internal::renderer::DrawCommandBuffer tmp20 = ::openfl::_internal::renderer::cairo::CairoGraphics_obj::fillCommands;
		int tmp21 = tmp20->get_length();
		bool tmp22 = (tmp21 > (int)0);
		if ((tmp22)){
			::openfl::_internal::renderer::cairo::CairoGraphics_obj::endFill();
		}
		::openfl::_internal::renderer::DrawCommandBuffer tmp23 = ::openfl::_internal::renderer::cairo::CairoGraphics_obj::strokeCommands;
		int tmp24 = tmp23->get_length();
		bool tmp25 = (tmp24 > (int)0);
		if ((tmp25)){
			::openfl::_internal::renderer::cairo::CairoGraphics_obj::endStroke();
		}
		data->destroy();
		bool tmp26 = ::openfl::_internal::renderer::cairo::CairoGraphics_obj::hasFill;
		bool tmp27;
		if ((tmp26)){
			::lime::graphics::cairo::Cairo tmp28 = ::openfl::_internal::renderer::cairo::CairoGraphics_obj::cairo;
			::lime::graphics::cairo::Cairo tmp29 = tmp28;
			Float tmp30 = x;
			Float tmp31 = y;
			Float tmp32 = tmp30;
			Float tmp33 = tmp31;
			tmp27 = tmp29->inFill(tmp32,tmp33);
		}
		else{
			tmp27 = false;
		}
		if ((tmp27)){
			return true;
		}
		bool tmp28 = ::openfl::_internal::renderer::cairo::CairoGraphics_obj::hasStroke;
		bool tmp29;
		if ((tmp28)){
			::lime::graphics::cairo::Cairo tmp30 = ::openfl::_internal::renderer::cairo::CairoGraphics_obj::cairo;
			::lime::graphics::cairo::Cairo tmp31 = tmp30;
			Float tmp32 = x;
			Float tmp33 = y;
			Float tmp34 = tmp32;
			Float tmp35 = tmp33;
			tmp29 = tmp31->inStroke(tmp34,tmp35);
		}
		else{
			tmp29 = false;
		}
		if ((tmp29)){
			return true;
		}
	}
	return false;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC3(CairoGraphics_obj,hitTest,return )

bool CairoGraphics_obj::isCCW( Float x1,Float y1,Float x2,Float y2,Float x3,Float y3){
	Float tmp = (x2 - x1);
	Float tmp1 = (y3 - y1);
	Float tmp2 = (tmp * tmp1);
	Float tmp3 = (y2 - y1);
	Float tmp4 = (x3 - x1);
	Float tmp5 = (tmp3 * tmp4);
	Float tmp6 = (tmp2 - tmp5);
	bool tmp7 = (tmp6 < (int)0);
	return tmp7;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC6(CairoGraphics_obj,isCCW,return )

Dynamic CairoGraphics_obj::normalizeUVT( ::openfl::_Vector::FloatVector uvt,hx::Null< bool >  __o_skipT){
bool skipT = __o_skipT.Default(false);
{
		Float tmp = ::Math_obj::NEGATIVE_INFINITY;
		Float max = tmp;
		Float tmp1 = ::Math_obj::NEGATIVE_INFINITY;
		Float tmp2 = tmp1;
		int tmp3 = uvt->get_length();
		int len = tmp3;
		{
			int _g1 = (int)1;
			int tmp4 = (len + (int)1);
			int _g = tmp4;
			while((true)){
				bool tmp5 = (_g1 < _g);
				bool tmp6 = !(tmp5);
				if ((tmp6)){
					break;
				}
				int tmp7 = (_g1)++;
				int t = tmp7;
				bool tmp8 = skipT;
				bool tmp9;
				if ((tmp8)){
					int tmp10 = hx::Mod(t,(int)3);
					int tmp11 = tmp10;
					tmp9 = (tmp11 == (int)0);
				}
				else{
					tmp9 = false;
				}
				if ((tmp9)){
					continue;
				}
				int tmp10 = (t - (int)1);
				Float tmp11 = uvt->get(tmp10);
				tmp2 = tmp11;
				bool tmp12 = (max < tmp2);
				if ((tmp12)){
					max = tmp2;
				}
			}
		}
		bool tmp4 = skipT;
		bool tmp5 = !(tmp4);
		if ((tmp5)){
			struct _Function_2_1{
				inline static Dynamic Block( ::openfl::_Vector::FloatVector &uvt,Float &max){
					{
						hx::Anon __result = hx::Anon_obj::Create();
						__result->Add(HX_HCSTRING("max","\xa4","\x0a","\x53","\x00") , max,false);
						__result->Add(HX_HCSTRING("uvt","\xf3","\x2e","\x59","\x00") , uvt,false);
						return __result;
					}
					return null();
				}
			};
			Dynamic tmp6 = _Function_2_1::Block(uvt,max);
			return tmp6;
		}
		::openfl::_Vector::FloatVector tmp6;
		{
			int length = null();
			bool fixed = null();
			::openfl::_Vector::FloatVector tmp7 = ::openfl::_Vector::FloatVector_obj::__new(length,fixed,null());
			::openfl::_Vector::FloatVector tmp8 = tmp7;
			tmp6 = tmp8;
		}
		::openfl::_Vector::FloatVector result = tmp6;
		{
			int _g1 = (int)1;
			int tmp7 = (len + (int)1);
			int _g = tmp7;
			while((true)){
				bool tmp8 = (_g1 < _g);
				bool tmp9 = !(tmp8);
				if ((tmp9)){
					break;
				}
				int tmp10 = (_g1)++;
				int t = tmp10;
				bool tmp11 = skipT;
				bool tmp12;
				if ((tmp11)){
					int tmp13 = hx::Mod(t,(int)3);
					int tmp14 = tmp13;
					tmp12 = (tmp14 == (int)0);
				}
				else{
					tmp12 = false;
				}
				if ((tmp12)){
					continue;
				}
				{
					int tmp13 = (t - (int)1);
					Float tmp14 = uvt->get(tmp13);
					Float x = tmp14;
					Float tmp15 = x;
					result->push(tmp15);
				}
			}
		}
		struct _Function_1_1{
			inline static Dynamic Block( ::openfl::_Vector::FloatVector &result,Float &max){
				{
					hx::Anon __result = hx::Anon_obj::Create();
					__result->Add(HX_HCSTRING("max","\xa4","\x0a","\x53","\x00") , max,false);
					__result->Add(HX_HCSTRING("uvt","\xf3","\x2e","\x59","\x00") , result,false);
					return __result;
				}
				return null();
			}
		};
		Dynamic tmp7 = _Function_1_1::Block(result,max);
		return tmp7;
	}
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(CairoGraphics_obj,normalizeUVT,return )

Void CairoGraphics_obj::playCommands( ::openfl::_internal::renderer::DrawCommandBuffer commands,hx::Null< bool >  __o_stroke){
bool stroke = __o_stroke.Default(false);
{
		int tmp = commands->get_length();
		bool tmp1 = (tmp == (int)0);
		if ((tmp1)){
			return null();
		}
		::openfl::display::Graphics tmp2 = ::openfl::_internal::renderer::cairo::CairoGraphics_obj::graphics;
		::openfl::_internal::renderer::cairo::CairoGraphics_obj::bounds = tmp2->__bounds;
		::openfl::geom::Rectangle tmp3 = ::openfl::_internal::renderer::cairo::CairoGraphics_obj::bounds;
		Float offsetX = tmp3->x;
		::openfl::geom::Rectangle tmp4 = ::openfl::_internal::renderer::cairo::CairoGraphics_obj::bounds;
		Float offsetY = tmp4->y;
		Float positionX = ((Float)0.0);
		Float positionY = ((Float)0.0);
		bool closeGap = false;
		Float startX = ((Float)0.0);
		Float startY = ((Float)0.0);
		::lime::graphics::cairo::Cairo tmp5 = ::openfl::_internal::renderer::cairo::CairoGraphics_obj::cairo;
		tmp5->set_fillRule((int)1);
		::lime::graphics::cairo::Cairo tmp6 = ::openfl::_internal::renderer::cairo::CairoGraphics_obj::cairo;
		tmp6->set_antialias((int)3);
		bool hasPath = false;
		::openfl::_internal::renderer::DrawCommandReader tmp7 = ::openfl::_internal::renderer::DrawCommandReader_obj::__new(commands);
		::openfl::_internal::renderer::DrawCommandReader data = tmp7;
		{
			int _g = (int)0;
			Array< ::Dynamic > _g1 = commands->types;
			while((true)){
				bool tmp8 = (_g < _g1->length);
				bool tmp9 = !(tmp8);
				if ((tmp9)){
					break;
				}
				::openfl::_internal::renderer::DrawCommandType tmp10 = _g1->__get(_g).StaticCast< ::openfl::_internal::renderer::DrawCommandType >();
				::openfl::_internal::renderer::DrawCommandType type = tmp10;
				++(_g);
				int _switch_1 = (type->__Index());
				if (  ( _switch_1==(int)3)){
					::openfl::_internal::renderer::DrawCommandReader tmp11;
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
						tmp11 = data;
					}
					::openfl::_internal::renderer::DrawCommandReader c = tmp11;
					hasPath = true;
					::lime::graphics::cairo::Cairo tmp12 = ::openfl::_internal::renderer::cairo::CairoGraphics_obj::cairo;
					::openfl::_internal::renderer::DrawCommandBuffer tmp13 = c->buffer;
					int tmp14 = c->fPos;
					int tmp15 = tmp14;
					Float tmp16 = tmp13->f->__get(tmp15);
					Float tmp17 = offsetX;
					Float tmp18 = (tmp16 - tmp17);
					::openfl::_internal::renderer::DrawCommandBuffer tmp19 = c->buffer;
					int tmp20 = c->fPos;
					int tmp21 = (tmp20 + (int)1);
					Float tmp22 = tmp19->f->__get(tmp21);
					Float tmp23 = offsetY;
					Float tmp24 = (tmp22 - tmp23);
					::openfl::_internal::renderer::DrawCommandBuffer tmp25 = c->buffer;
					int tmp26 = c->fPos;
					int tmp27 = (tmp26 + (int)2);
					Float tmp28 = tmp25->f->__get(tmp27);
					Float tmp29 = offsetX;
					Float tmp30 = (tmp28 - tmp29);
					::openfl::_internal::renderer::DrawCommandBuffer tmp31 = c->buffer;
					int tmp32 = c->fPos;
					int tmp33 = (tmp32 + (int)3);
					Float tmp34 = tmp31->f->__get(tmp33);
					Float tmp35 = offsetY;
					Float tmp36 = (tmp34 - tmp35);
					::openfl::_internal::renderer::DrawCommandBuffer tmp37 = c->buffer;
					int tmp38 = c->fPos;
					int tmp39 = (tmp38 + (int)4);
					Float tmp40 = tmp37->f->__get(tmp39);
					Float tmp41 = offsetX;
					Float tmp42 = (tmp40 - tmp41);
					::openfl::_internal::renderer::DrawCommandBuffer tmp43 = c->buffer;
					int tmp44 = c->fPos;
					int tmp45 = (tmp44 + (int)5);
					Float tmp46 = tmp43->f->__get(tmp45);
					Float tmp47 = offsetY;
					Float tmp48 = (tmp46 - tmp47);
					tmp12->curveTo(tmp18,tmp24,tmp30,tmp36,tmp42,tmp48);
				}
				else if (  ( _switch_1==(int)4)){
					::openfl::_internal::renderer::DrawCommandReader tmp11;
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
						tmp11 = data;
					}
					::openfl::_internal::renderer::DrawCommandReader c = tmp11;
					hasPath = true;
					::openfl::_internal::renderer::DrawCommandBuffer tmp12 = c->buffer;
					int tmp13 = c->fPos;
					int tmp14 = tmp13;
					Float tmp15 = tmp12->f->__get(tmp14);
					Float tmp16 = offsetX;
					Float tmp17 = (tmp15 - tmp16);
					::openfl::_internal::renderer::DrawCommandBuffer tmp18 = c->buffer;
					int tmp19 = c->fPos;
					int tmp20 = (tmp19 + (int)1);
					Float tmp21 = tmp18->f->__get(tmp20);
					Float tmp22 = offsetY;
					Float tmp23 = (tmp21 - tmp22);
					::openfl::_internal::renderer::DrawCommandBuffer tmp24 = c->buffer;
					int tmp25 = c->fPos;
					int tmp26 = (tmp25 + (int)2);
					Float tmp27 = tmp24->f->__get(tmp26);
					Float tmp28 = offsetX;
					Float tmp29 = (tmp27 - tmp28);
					::openfl::_internal::renderer::DrawCommandBuffer tmp30 = c->buffer;
					int tmp31 = c->fPos;
					int tmp32 = (tmp31 + (int)3);
					Float tmp33 = tmp30->f->__get(tmp32);
					Float tmp34 = offsetY;
					Float tmp35 = (tmp33 - tmp34);
					::openfl::_internal::renderer::cairo::CairoGraphics_obj::quadraticCurveTo(tmp17,tmp23,tmp29,tmp35);
				}
				else if (  ( _switch_1==(int)5)){
					::openfl::_internal::renderer::DrawCommandReader tmp11;
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
						tmp11 = data;
					}
					::openfl::_internal::renderer::DrawCommandReader c = tmp11;
					hasPath = true;
					::lime::graphics::cairo::Cairo tmp12 = ::openfl::_internal::renderer::cairo::CairoGraphics_obj::cairo;
					::openfl::_internal::renderer::DrawCommandBuffer tmp13 = c->buffer;
					int tmp14 = c->fPos;
					int tmp15 = tmp14;
					Float tmp16 = tmp13->f->__get(tmp15);
					Float tmp17 = offsetX;
					Float tmp18 = (tmp16 - tmp17);
					::openfl::_internal::renderer::DrawCommandBuffer tmp19 = c->buffer;
					int tmp20 = c->fPos;
					int tmp21 = (tmp20 + (int)2);
					Float tmp22 = tmp19->f->__get(tmp21);
					Float tmp23 = (tmp18 + tmp22);
					::openfl::_internal::renderer::DrawCommandBuffer tmp24 = c->buffer;
					int tmp25 = c->fPos;
					int tmp26 = (tmp25 + (int)1);
					Float tmp27 = tmp24->f->__get(tmp26);
					Float tmp28 = offsetY;
					Float tmp29 = (tmp27 - tmp28);
					tmp12->moveTo(tmp23,tmp29);
					::lime::graphics::cairo::Cairo tmp30 = ::openfl::_internal::renderer::cairo::CairoGraphics_obj::cairo;
					::openfl::_internal::renderer::DrawCommandBuffer tmp31 = c->buffer;
					int tmp32 = c->fPos;
					int tmp33 = tmp32;
					Float tmp34 = tmp31->f->__get(tmp33);
					Float tmp35 = offsetX;
					Float tmp36 = (tmp34 - tmp35);
					::openfl::_internal::renderer::DrawCommandBuffer tmp37 = c->buffer;
					int tmp38 = c->fPos;
					int tmp39 = (tmp38 + (int)1);
					Float tmp40 = tmp37->f->__get(tmp39);
					Float tmp41 = offsetY;
					Float tmp42 = (tmp40 - tmp41);
					::openfl::_internal::renderer::DrawCommandBuffer tmp43 = c->buffer;
					int tmp44 = c->fPos;
					int tmp45 = (tmp44 + (int)2);
					Float tmp46 = tmp43->f->__get(tmp45);
					Float tmp47 = ::Math_obj::PI;
					Float tmp48 = (tmp47 * (int)2);
					tmp30->arc(tmp36,tmp42,tmp46,(int)0,tmp48);
				}
				else if (  ( _switch_1==(int)7)){
					::openfl::_internal::renderer::DrawCommandReader tmp11;
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
						tmp11 = data;
					}
					::openfl::_internal::renderer::DrawCommandReader c = tmp11;
					hasPath = true;
					::lime::graphics::cairo::Cairo tmp12 = ::openfl::_internal::renderer::cairo::CairoGraphics_obj::cairo;
					::openfl::_internal::renderer::DrawCommandBuffer tmp13 = c->buffer;
					int tmp14 = c->fPos;
					int tmp15 = tmp14;
					Float tmp16 = tmp13->f->__get(tmp15);
					Float tmp17 = offsetX;
					Float tmp18 = (tmp16 - tmp17);
					::openfl::_internal::renderer::DrawCommandBuffer tmp19 = c->buffer;
					int tmp20 = c->fPos;
					int tmp21 = (tmp20 + (int)1);
					Float tmp22 = tmp19->f->__get(tmp21);
					Float tmp23 = offsetY;
					Float tmp24 = (tmp22 - tmp23);
					::openfl::_internal::renderer::DrawCommandBuffer tmp25 = c->buffer;
					int tmp26 = c->fPos;
					int tmp27 = (tmp26 + (int)2);
					Float tmp28 = tmp25->f->__get(tmp27);
					::openfl::_internal::renderer::DrawCommandBuffer tmp29 = c->buffer;
					int tmp30 = c->fPos;
					int tmp31 = (tmp30 + (int)3);
					Float tmp32 = tmp29->f->__get(tmp31);
					tmp12->rectangle(tmp18,tmp24,tmp28,tmp32);
				}
				else if (  ( _switch_1==(int)6)){
					::openfl::_internal::renderer::DrawCommandReader tmp11;
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
						tmp11 = data;
					}
					::openfl::_internal::renderer::DrawCommandReader c = tmp11;
					hasPath = true;
					::openfl::_internal::renderer::DrawCommandBuffer tmp12 = c->buffer;
					int tmp13 = c->fPos;
					int tmp14 = tmp13;
					Float tmp15 = tmp12->f->__get(tmp14);
					Float x = tmp15;
					::openfl::_internal::renderer::DrawCommandBuffer tmp16 = c->buffer;
					int tmp17 = c->fPos;
					int tmp18 = (tmp17 + (int)1);
					Float tmp19 = tmp16->f->__get(tmp18);
					Float y = tmp19;
					::openfl::_internal::renderer::DrawCommandBuffer tmp20 = c->buffer;
					int tmp21 = c->fPos;
					int tmp22 = (tmp21 + (int)2);
					Float tmp23 = tmp20->f->__get(tmp22);
					Float width = tmp23;
					::openfl::_internal::renderer::DrawCommandBuffer tmp24 = c->buffer;
					int tmp25 = c->fPos;
					int tmp26 = (tmp25 + (int)3);
					Float tmp27 = tmp24->f->__get(tmp26);
					Float height = tmp27;
					hx::SubEq(x,offsetX);
					hx::SubEq(y,offsetY);
					Float kappa = ((Float).5522848);
					Float tmp28 = (Float(width) / Float((int)2));
					Float tmp29 = kappa;
					Float tmp30 = (tmp28 * tmp29);
					Float ox = tmp30;
					Float tmp31 = (Float(height) / Float((int)2));
					Float tmp32 = kappa;
					Float tmp33 = (tmp31 * tmp32);
					Float oy = tmp33;
					Float tmp34 = (x + width);
					Float xe = tmp34;
					Float tmp35 = (y + height);
					Float ye = tmp35;
					Float tmp36 = x;
					Float tmp37 = (Float(width) / Float((int)2));
					Float tmp38 = (tmp36 + tmp37);
					Float xm = tmp38;
					Float tmp39 = y;
					Float tmp40 = (Float(height) / Float((int)2));
					Float tmp41 = (tmp39 + tmp40);
					Float ym = tmp41;
					::lime::graphics::cairo::Cairo tmp42 = ::openfl::_internal::renderer::cairo::CairoGraphics_obj::cairo;
					Float tmp43 = x;
					Float tmp44 = ym;
					tmp42->moveTo(tmp43,tmp44);
					::lime::graphics::cairo::Cairo tmp45 = ::openfl::_internal::renderer::cairo::CairoGraphics_obj::cairo;
					Float tmp46 = x;
					Float tmp47 = (ym - oy);
					Float tmp48 = (xm - ox);
					Float tmp49 = y;
					Float tmp50 = xm;
					Float tmp51 = y;
					tmp45->curveTo(tmp46,tmp47,tmp48,tmp49,tmp50,tmp51);
					::lime::graphics::cairo::Cairo tmp52 = ::openfl::_internal::renderer::cairo::CairoGraphics_obj::cairo;
					Float tmp53 = (xm + ox);
					Float tmp54 = y;
					Float tmp55 = xe;
					Float tmp56 = (ym - oy);
					Float tmp57 = xe;
					Float tmp58 = ym;
					tmp52->curveTo(tmp53,tmp54,tmp55,tmp56,tmp57,tmp58);
					::lime::graphics::cairo::Cairo tmp59 = ::openfl::_internal::renderer::cairo::CairoGraphics_obj::cairo;
					Float tmp60 = xe;
					Float tmp61 = (ym + oy);
					Float tmp62 = (xm + ox);
					Float tmp63 = ye;
					Float tmp64 = xm;
					Float tmp65 = ye;
					tmp59->curveTo(tmp60,tmp61,tmp62,tmp63,tmp64,tmp65);
					::lime::graphics::cairo::Cairo tmp66 = ::openfl::_internal::renderer::cairo::CairoGraphics_obj::cairo;
					Float tmp67 = (xm - ox);
					Float tmp68 = ye;
					Float tmp69 = x;
					Float tmp70 = (ym + oy);
					Float tmp71 = x;
					Float tmp72 = ym;
					tmp66->curveTo(tmp67,tmp68,tmp69,tmp70,tmp71,tmp72);
				}
				else if (  ( _switch_1==(int)8)){
					::openfl::_internal::renderer::DrawCommandReader tmp11;
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
						tmp11 = data;
					}
					::openfl::_internal::renderer::DrawCommandReader c = tmp11;
					hasPath = true;
					::openfl::_internal::renderer::DrawCommandBuffer tmp12 = c->buffer;
					int tmp13 = c->fPos;
					int tmp14 = tmp13;
					Float tmp15 = tmp12->f->__get(tmp14);
					Float tmp16 = offsetX;
					Float tmp17 = (tmp15 - tmp16);
					::openfl::_internal::renderer::DrawCommandBuffer tmp18 = c->buffer;
					int tmp19 = c->fPos;
					int tmp20 = (tmp19 + (int)1);
					Float tmp21 = tmp18->f->__get(tmp20);
					Float tmp22 = offsetY;
					Float tmp23 = (tmp21 - tmp22);
					::openfl::_internal::renderer::DrawCommandBuffer tmp24 = c->buffer;
					int tmp25 = c->fPos;
					int tmp26 = (tmp25 + (int)2);
					Float tmp27 = tmp24->f->__get(tmp26);
					::openfl::_internal::renderer::DrawCommandBuffer tmp28 = c->buffer;
					int tmp29 = c->fPos;
					int tmp30 = (tmp29 + (int)3);
					Float tmp31 = tmp28->f->__get(tmp30);
					::openfl::_internal::renderer::DrawCommandBuffer tmp32 = c->buffer;
					int tmp33 = c->fPos;
					int tmp34 = (tmp33 + (int)4);
					Float tmp35 = tmp32->f->__get(tmp34);
					::openfl::_internal::renderer::DrawCommandBuffer tmp36 = c->buffer;
					int tmp37 = c->oPos;
					int tmp38 = tmp37;
					Dynamic tmp39 = tmp36->o->__GetItem(tmp38);
					Dynamic tmp40 = tmp39;
					::openfl::_internal::renderer::cairo::CairoGraphics_obj::drawRoundRect(tmp17,tmp23,tmp27,tmp31,tmp35,tmp40);
				}
				else if (  ( _switch_1==(int)15)){
					::openfl::_internal::renderer::DrawCommandReader tmp11;
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
						tmp11 = data;
					}
					::openfl::_internal::renderer::DrawCommandReader c = tmp11;
					hasPath = true;
					::lime::graphics::cairo::Cairo tmp12 = ::openfl::_internal::renderer::cairo::CairoGraphics_obj::cairo;
					::openfl::_internal::renderer::DrawCommandBuffer tmp13 = c->buffer;
					int tmp14 = c->fPos;
					int tmp15 = tmp14;
					Float tmp16 = tmp13->f->__get(tmp15);
					Float tmp17 = offsetX;
					Float tmp18 = (tmp16 - tmp17);
					::openfl::_internal::renderer::DrawCommandBuffer tmp19 = c->buffer;
					int tmp20 = c->fPos;
					int tmp21 = (tmp20 + (int)1);
					Float tmp22 = tmp19->f->__get(tmp21);
					Float tmp23 = offsetY;
					Float tmp24 = (tmp22 - tmp23);
					tmp12->lineTo(tmp18,tmp24);
					::openfl::_internal::renderer::DrawCommandBuffer tmp25 = c->buffer;
					int tmp26 = c->fPos;
					int tmp27 = tmp26;
					Float tmp28 = tmp25->f->__get(tmp27);
					positionX = tmp28;
					::openfl::_internal::renderer::DrawCommandBuffer tmp29 = c->buffer;
					int tmp30 = c->fPos;
					int tmp31 = (tmp30 + (int)1);
					Float tmp32 = tmp29->f->__get(tmp31);
					positionY = tmp32;
				}
				else if (  ( _switch_1==(int)16)){
					::openfl::_internal::renderer::DrawCommandReader tmp11;
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
						tmp11 = data;
					}
					::openfl::_internal::renderer::DrawCommandReader c = tmp11;
					::lime::graphics::cairo::Cairo tmp12 = ::openfl::_internal::renderer::cairo::CairoGraphics_obj::cairo;
					::openfl::_internal::renderer::DrawCommandBuffer tmp13 = c->buffer;
					int tmp14 = c->fPos;
					int tmp15 = tmp14;
					Float tmp16 = tmp13->f->__get(tmp15);
					Float tmp17 = offsetX;
					Float tmp18 = (tmp16 - tmp17);
					::openfl::_internal::renderer::DrawCommandBuffer tmp19 = c->buffer;
					int tmp20 = c->fPos;
					int tmp21 = (tmp20 + (int)1);
					Float tmp22 = tmp19->f->__get(tmp21);
					Float tmp23 = offsetY;
					Float tmp24 = (tmp22 - tmp23);
					tmp12->moveTo(tmp18,tmp24);
					::openfl::_internal::renderer::DrawCommandBuffer tmp25 = c->buffer;
					int tmp26 = c->fPos;
					int tmp27 = tmp26;
					Float tmp28 = tmp25->f->__get(tmp27);
					positionX = tmp28;
					::openfl::_internal::renderer::DrawCommandBuffer tmp29 = c->buffer;
					int tmp30 = c->fPos;
					int tmp31 = (tmp30 + (int)1);
					Float tmp32 = tmp29->f->__get(tmp31);
					positionY = tmp32;
					closeGap = true;
					::openfl::_internal::renderer::DrawCommandBuffer tmp33 = c->buffer;
					int tmp34 = c->fPos;
					int tmp35 = tmp34;
					Float tmp36 = tmp33->f->__get(tmp35);
					startX = tmp36;
					::openfl::_internal::renderer::DrawCommandBuffer tmp37 = c->buffer;
					int tmp38 = c->fPos;
					int tmp39 = (tmp38 + (int)1);
					Float tmp40 = tmp37->f->__get(tmp39);
					startY = tmp40;
				}
				else if (  ( _switch_1==(int)14)){
					::openfl::_internal::renderer::DrawCommandReader tmp11;
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
						tmp11 = data;
					}
					::openfl::_internal::renderer::DrawCommandReader c = tmp11;
					bool tmp12 = stroke;
					bool tmp13;
					if ((tmp12)){
						tmp13 = ::openfl::_internal::renderer::cairo::CairoGraphics_obj::hasStroke;
					}
					else{
						tmp13 = false;
					}
					if ((tmp13)){
						::openfl::_internal::renderer::cairo::CairoGraphics_obj::closePath(true);
					}
					::lime::graphics::cairo::Cairo tmp14 = ::openfl::_internal::renderer::cairo::CairoGraphics_obj::cairo;
					Float tmp15 = (positionX - offsetX);
					Float tmp16 = (positionY - offsetY);
					tmp14->moveTo(tmp15,tmp16);
					::openfl::_internal::renderer::DrawCommandBuffer tmp17 = c->buffer;
					int tmp18 = c->oPos;
					int tmp19 = tmp18;
					Dynamic tmp20 = tmp17->o->__GetItem(tmp19);
					Dynamic tmp21 = tmp20;
					bool tmp22 = (tmp21 == null());
					if ((tmp22)){
						::openfl::_internal::renderer::cairo::CairoGraphics_obj::hasStroke = false;
					}
					else{
						::openfl::_internal::renderer::cairo::CairoGraphics_obj::hasStroke = true;
						::lime::graphics::cairo::Cairo tmp23 = ::openfl::_internal::renderer::cairo::CairoGraphics_obj::cairo;
						::openfl::_internal::renderer::DrawCommandBuffer tmp24 = c->buffer;
						int tmp25 = c->oPos;
						int tmp26 = tmp25;
						Dynamic tmp27 = tmp24->o->__GetItem(tmp26);
						Dynamic tmp28 = tmp27;
						bool tmp29 = (tmp28 > (int)0);
						Float tmp30;
						if ((tmp29)){
							::openfl::_internal::renderer::DrawCommandBuffer tmp31 = c->buffer;
							int tmp32 = c->oPos;
							int tmp33 = tmp32;
							Dynamic tmp34 = tmp31->o->__GetItem(tmp33);
							tmp30 = tmp34;
						}
						else{
							tmp30 = (int)1;
						}
						tmp23->set_lineWidth(tmp30);
						::openfl::_internal::renderer::DrawCommandBuffer tmp31 = c->buffer;
						int tmp32 = c->oPos;
						int tmp33 = (tmp32 + (int)3);
						Dynamic tmp34 = tmp31->o->__GetItem(tmp33);
						Dynamic tmp35 = tmp34;
						bool tmp36 = (tmp35 == null());
						if ((tmp36)){
							::lime::graphics::cairo::Cairo tmp37 = ::openfl::_internal::renderer::cairo::CairoGraphics_obj::cairo;
							tmp37->set_lineJoin((int)1);
						}
						else{
							::lime::graphics::cairo::Cairo tmp37 = ::openfl::_internal::renderer::cairo::CairoGraphics_obj::cairo;
							int tmp38;
							{
								::openfl::_internal::renderer::DrawCommandBuffer tmp39 = c->buffer;
								int tmp40 = c->oPos;
								int tmp41 = (tmp40 + (int)3);
								Dynamic tmp42 = tmp39->o->__GetItem(tmp41);
								Dynamic _g2 = tmp42;
								Dynamic tmp43 = _g2;
								switch( (int)(tmp43)){
									case (int)1: {
										tmp38 = (int)0;
									}
									;break;
									case (int)0: {
										tmp38 = (int)2;
									}
									;break;
									default: {
										tmp38 = (int)1;
									}
								}
							}
							tmp37->set_lineJoin(tmp38);
						}
						::openfl::_internal::renderer::DrawCommandBuffer tmp37 = c->buffer;
						int tmp38 = c->oPos;
						int tmp39 = (tmp38 + (int)2);
						Dynamic tmp40 = tmp37->o->__GetItem(tmp39);
						Dynamic tmp41 = tmp40;
						bool tmp42 = (tmp41 == null());
						if ((tmp42)){
							::lime::graphics::cairo::Cairo tmp43 = ::openfl::_internal::renderer::cairo::CairoGraphics_obj::cairo;
							tmp43->set_lineCap((int)1);
						}
						else{
							::lime::graphics::cairo::Cairo tmp43 = ::openfl::_internal::renderer::cairo::CairoGraphics_obj::cairo;
							int tmp44;
							{
								::openfl::_internal::renderer::DrawCommandBuffer tmp45 = c->buffer;
								int tmp46 = c->oPos;
								int tmp47 = (tmp46 + (int)2);
								Dynamic tmp48 = tmp45->o->__GetItem(tmp47);
								Dynamic _g2 = tmp48;
								Dynamic tmp49 = _g2;
								switch( (int)(tmp49)){
									case (int)0: {
										tmp44 = (int)0;
									}
									;break;
									case (int)2: {
										tmp44 = (int)2;
									}
									;break;
									default: {
										tmp44 = (int)1;
									}
								}
							}
							tmp43->set_lineCap(tmp44);
						}
						::lime::graphics::cairo::Cairo tmp43 = ::openfl::_internal::renderer::cairo::CairoGraphics_obj::cairo;
						::openfl::_internal::renderer::DrawCommandBuffer tmp44 = c->buffer;
						int tmp45 = c->fPos;
						int tmp46 = (tmp45 + (int)1);
						Float tmp47 = tmp44->f->__get(tmp46);
						Float tmp48 = tmp47;
						tmp43->set_miterLimit(tmp48);
						::openfl::_internal::renderer::DrawCommandBuffer tmp49 = c->buffer;
						int tmp50 = c->iPos;
						int tmp51 = tmp50;
						int tmp52 = tmp49->i->__get(tmp51);
						int tmp53 = tmp52;
						int tmp54 = (int(tmp53) & int((int)16711680));
						int tmp55 = hx::UShr(tmp54,(int)16);
						Float tmp56 = (Float(tmp55) / Float((int)255));
						Float r = tmp56;
						::openfl::_internal::renderer::DrawCommandBuffer tmp57 = c->buffer;
						int tmp58 = c->iPos;
						int tmp59 = tmp58;
						int tmp60 = tmp57->i->__get(tmp59);
						int tmp61 = tmp60;
						int tmp62 = (int(tmp61) & int((int)65280));
						int tmp63 = hx::UShr(tmp62,(int)8);
						Float tmp64 = (Float(tmp63) / Float((int)255));
						Float g = tmp64;
						::openfl::_internal::renderer::DrawCommandBuffer tmp65 = c->buffer;
						int tmp66 = c->iPos;
						int tmp67 = tmp66;
						int tmp68 = tmp65->i->__get(tmp67);
						int tmp69 = tmp68;
						int tmp70 = (int(tmp69) & int((int)255));
						Float tmp71 = (Float(tmp70) / Float((int)255));
						Float b = tmp71;
						::openfl::_internal::renderer::DrawCommandBuffer tmp72 = c->buffer;
						int tmp73 = c->fPos;
						int tmp74 = tmp73;
						Float tmp75 = tmp72->f->__get(tmp74);
						Float tmp76 = tmp75;
						bool tmp77 = (tmp76 == (int)1);
						if ((tmp77)){
							Float tmp78 = r;
							Float tmp79 = g;
							Float tmp80 = b;
							Dynamic tmp81 = ::lime::graphics::cairo::_CairoPattern::CairoPattern_Impl__obj::createRGB(tmp78,tmp79,tmp80);
							::openfl::_internal::renderer::cairo::CairoGraphics_obj::strokePattern = tmp81;
						}
						else{
							Float tmp78 = r;
							Float tmp79 = g;
							Float tmp80 = b;
							::openfl::_internal::renderer::DrawCommandBuffer tmp81 = c->buffer;
							int tmp82 = c->fPos;
							int tmp83 = tmp82;
							Float tmp84 = tmp81->f->__get(tmp83);
							Float tmp85 = tmp84;
							Dynamic tmp86 = ::lime::graphics::cairo::_CairoPattern::CairoPattern_Impl__obj::createRGBA(tmp78,tmp79,tmp80,tmp85);
							::openfl::_internal::renderer::cairo::CairoGraphics_obj::strokePattern = tmp86;
						}
					}
				}
				else if (  ( _switch_1==(int)13)){
					::openfl::_internal::renderer::DrawCommandReader tmp11;
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
						tmp11 = data;
					}
					::openfl::_internal::renderer::DrawCommandReader c = tmp11;
					bool tmp12 = stroke;
					bool tmp13;
					if ((tmp12)){
						tmp13 = ::openfl::_internal::renderer::cairo::CairoGraphics_obj::hasStroke;
					}
					else{
						tmp13 = false;
					}
					if ((tmp13)){
						::openfl::_internal::renderer::cairo::CairoGraphics_obj::closePath(null());
					}
					::lime::graphics::cairo::Cairo tmp14 = ::openfl::_internal::renderer::cairo::CairoGraphics_obj::cairo;
					Float tmp15 = (positionX - offsetX);
					Float tmp16 = (positionY - offsetY);
					tmp14->moveTo(tmp15,tmp16);
					::openfl::_internal::renderer::DrawCommandBuffer tmp17 = c->buffer;
					int tmp18 = c->oPos;
					int tmp19 = tmp18;
					Dynamic tmp20 = tmp17->o->__GetItem(tmp19);
					Dynamic tmp21 = tmp20;
					::openfl::_internal::renderer::DrawCommandBuffer tmp22 = c->buffer;
					int tmp23 = c->iiPos;
					int tmp24 = tmp23;
					::openfl::_internal::renderer::DrawCommandBuffer tmp25 = c->buffer;
					int tmp26 = c->ffPos;
					int tmp27 = tmp26;
					::openfl::_internal::renderer::DrawCommandBuffer tmp28 = c->buffer;
					int tmp29 = c->iiPos;
					int tmp30 = (tmp29 + (int)1);
					::openfl::_internal::renderer::DrawCommandBuffer tmp31 = c->buffer;
					int tmp32 = c->oPos;
					int tmp33 = (tmp32 + (int)1);
					Dynamic tmp34 = tmp31->o->__GetItem(tmp33);
					::openfl::geom::Matrix tmp35 = ((::openfl::geom::Matrix)(tmp34));
					::openfl::_internal::renderer::DrawCommandBuffer tmp36 = c->buffer;
					int tmp37 = c->oPos;
					int tmp38 = (tmp37 + (int)2);
					Dynamic tmp39 = tmp36->o->__GetItem(tmp38);
					Dynamic tmp40 = tmp39;
					::openfl::_internal::renderer::DrawCommandBuffer tmp41 = c->buffer;
					int tmp42 = c->oPos;
					int tmp43 = (tmp42 + (int)3);
					Dynamic tmp44 = tmp41->o->__GetItem(tmp43);
					Dynamic tmp45 = tmp44;
					::openfl::_internal::renderer::DrawCommandBuffer tmp46 = c->buffer;
					int tmp47 = c->fPos;
					int tmp48 = tmp47;
					Float tmp49 = tmp46->f->__get(tmp48);
					Float tmp50 = tmp49;
					Dynamic tmp51 = ::openfl::_internal::renderer::cairo::CairoGraphics_obj::createGradientPattern(tmp21,tmp22->ii->__get(tmp24).StaticCast< Array< int > >(),tmp25->ff->__get(tmp27).StaticCast< Array< Float > >(),tmp28->ii->__get(tmp30).StaticCast< Array< int > >(),tmp35,tmp40,tmp45,tmp50);
					::openfl::_internal::renderer::cairo::CairoGraphics_obj::strokePattern = tmp51;
					::openfl::_internal::renderer::cairo::CairoGraphics_obj::hasStroke = true;
				}
				else if (  ( _switch_1==(int)12)){
					::openfl::_internal::renderer::DrawCommandReader tmp11;
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
						tmp11 = data;
					}
					::openfl::_internal::renderer::DrawCommandReader c = tmp11;
					bool tmp12 = stroke;
					bool tmp13;
					if ((tmp12)){
						tmp13 = ::openfl::_internal::renderer::cairo::CairoGraphics_obj::hasStroke;
					}
					else{
						tmp13 = false;
					}
					if ((tmp13)){
						::openfl::_internal::renderer::cairo::CairoGraphics_obj::closePath(null());
					}
					::lime::graphics::cairo::Cairo tmp14 = ::openfl::_internal::renderer::cairo::CairoGraphics_obj::cairo;
					Float tmp15 = (positionX - offsetX);
					Float tmp16 = (positionY - offsetY);
					tmp14->moveTo(tmp15,tmp16);
					::openfl::_internal::renderer::DrawCommandBuffer tmp17 = c->buffer;
					int tmp18 = c->oPos;
					int tmp19 = tmp18;
					Dynamic tmp20 = tmp17->o->__GetItem(tmp19);
					::openfl::display::BitmapData tmp21 = ((::openfl::display::BitmapData)(tmp20));
					::openfl::_internal::renderer::DrawCommandBuffer tmp22 = c->buffer;
					int tmp23 = c->oPos;
					int tmp24 = (tmp23 + (int)1);
					Dynamic tmp25 = tmp22->o->__GetItem(tmp24);
					::openfl::geom::Matrix tmp26 = ((::openfl::geom::Matrix)(tmp25));
					::openfl::_internal::renderer::DrawCommandBuffer tmp27 = c->buffer;
					int tmp28 = c->bPos;
					int tmp29 = tmp28;
					bool tmp30 = tmp27->b->__get(tmp29);
					bool tmp31 = tmp30;
					::openfl::_internal::renderer::DrawCommandBuffer tmp32 = c->buffer;
					int tmp33 = c->bPos;
					int tmp34 = (tmp33 + (int)1);
					bool tmp35 = tmp32->b->__get(tmp34);
					bool tmp36 = tmp35;
					Dynamic tmp37 = ::openfl::_internal::renderer::cairo::CairoGraphics_obj::createImagePattern(tmp21,tmp26,tmp31,tmp36);
					::openfl::_internal::renderer::cairo::CairoGraphics_obj::strokePattern = tmp37;
					::openfl::_internal::renderer::cairo::CairoGraphics_obj::hasStroke = true;
				}
				else if (  ( _switch_1==(int)0)){
					::openfl::_internal::renderer::DrawCommandReader tmp11;
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
						tmp11 = data;
					}
					::openfl::_internal::renderer::DrawCommandReader c = tmp11;
					::openfl::_internal::renderer::DrawCommandBuffer tmp12 = c->buffer;
					int tmp13 = c->oPos;
					int tmp14 = tmp13;
					Dynamic tmp15 = tmp12->o->__GetItem(tmp14);
					::openfl::display::BitmapData tmp16 = ((::openfl::display::BitmapData)(tmp15));
					::openfl::_internal::renderer::DrawCommandBuffer tmp17 = c->buffer;
					int tmp18 = c->oPos;
					int tmp19 = (tmp18 + (int)1);
					Dynamic tmp20 = tmp17->o->__GetItem(tmp19);
					::openfl::geom::Matrix tmp21 = ((::openfl::geom::Matrix)(tmp20));
					::openfl::_internal::renderer::DrawCommandBuffer tmp22 = c->buffer;
					int tmp23 = c->bPos;
					int tmp24 = tmp23;
					bool tmp25 = tmp22->b->__get(tmp24);
					::openfl::_internal::renderer::DrawCommandBuffer tmp26 = c->buffer;
					int tmp27 = c->bPos;
					int tmp28 = (tmp27 + (int)1);
					bool tmp29 = tmp26->b->__get(tmp28);
					Dynamic tmp30 = ::openfl::_internal::renderer::cairo::CairoGraphics_obj::createImagePattern(tmp16,tmp21,tmp25,tmp29);
					::openfl::_internal::renderer::cairo::CairoGraphics_obj::fillPattern = tmp30;
					::openfl::_internal::renderer::DrawCommandBuffer tmp31 = c->buffer;
					int tmp32 = c->oPos;
					int tmp33 = tmp32;
					Dynamic tmp34 = tmp31->o->__GetItem(tmp33);
					::openfl::_internal::renderer::cairo::CairoGraphics_obj::bitmapFill = ((::openfl::display::BitmapData)(tmp34));
					::openfl::_internal::renderer::DrawCommandBuffer tmp35 = c->buffer;
					int tmp36 = c->bPos;
					int tmp37 = tmp36;
					bool tmp38 = tmp35->b->__get(tmp37);
					::openfl::_internal::renderer::cairo::CairoGraphics_obj::bitmapRepeat = tmp38;
					::openfl::_internal::renderer::cairo::CairoGraphics_obj::hasFill = true;
				}
				else if (  ( _switch_1==(int)1)){
					::openfl::_internal::renderer::DrawCommandReader tmp11;
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
						tmp11 = data;
					}
					::openfl::_internal::renderer::DrawCommandReader c = tmp11;
					::openfl::_internal::renderer::DrawCommandBuffer tmp12 = c->buffer;
					int tmp13 = c->fPos;
					int tmp14 = tmp13;
					Float tmp15 = tmp12->f->__get(tmp14);
					bool tmp16 = (tmp15 < ((Float)0.005));
					if ((tmp16)){
						::openfl::_internal::renderer::cairo::CairoGraphics_obj::hasFill = false;
					}
					else{
						Dynamic tmp17 = ::openfl::_internal::renderer::cairo::CairoGraphics_obj::fillPattern;
						bool tmp18 = (tmp17 != null());
						if ((tmp18)){
							::openfl::_internal::renderer::cairo::CairoGraphics_obj::fillPatternMatrix = null();
						}
						::openfl::_internal::renderer::DrawCommandBuffer tmp19 = c->buffer;
						int tmp20 = c->iPos;
						int tmp21 = tmp20;
						int tmp22 = tmp19->i->__get(tmp21);
						int tmp23 = (int(tmp22) & int((int)16711680));
						int tmp24 = hx::UShr(tmp23,(int)16);
						Float tmp25 = (Float(tmp24) / Float((int)255));
						::openfl::_internal::renderer::DrawCommandBuffer tmp26 = c->buffer;
						int tmp27 = c->iPos;
						int tmp28 = tmp27;
						int tmp29 = tmp26->i->__get(tmp28);
						int tmp30 = (int(tmp29) & int((int)65280));
						int tmp31 = hx::UShr(tmp30,(int)8);
						Float tmp32 = (Float(tmp31) / Float((int)255));
						::openfl::_internal::renderer::DrawCommandBuffer tmp33 = c->buffer;
						int tmp34 = c->iPos;
						int tmp35 = tmp34;
						int tmp36 = tmp33->i->__get(tmp35);
						int tmp37 = (int(tmp36) & int((int)255));
						Float tmp38 = (Float(tmp37) / Float((int)255));
						::openfl::_internal::renderer::DrawCommandBuffer tmp39 = c->buffer;
						int tmp40 = c->fPos;
						int tmp41 = tmp40;
						Float tmp42 = tmp39->f->__get(tmp41);
						Dynamic tmp43 = ::lime::graphics::cairo::_CairoPattern::CairoPattern_Impl__obj::createRGBA(tmp25,tmp32,tmp38,tmp42);
						::openfl::_internal::renderer::cairo::CairoGraphics_obj::fillPattern = tmp43;
						::openfl::_internal::renderer::cairo::CairoGraphics_obj::hasFill = true;
					}
					::openfl::_internal::renderer::cairo::CairoGraphics_obj::bitmapFill = null();
				}
				else if (  ( _switch_1==(int)2)){
					::openfl::_internal::renderer::DrawCommandReader tmp11;
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
						tmp11 = data;
					}
					::openfl::_internal::renderer::DrawCommandReader c = tmp11;
					Dynamic tmp12 = ::openfl::_internal::renderer::cairo::CairoGraphics_obj::fillPattern;
					bool tmp13 = (tmp12 != null());
					if ((tmp13)){
						::openfl::_internal::renderer::cairo::CairoGraphics_obj::fillPatternMatrix = null();
					}
					::openfl::_internal::renderer::DrawCommandBuffer tmp14 = c->buffer;
					int tmp15 = c->oPos;
					int tmp16 = tmp15;
					Dynamic tmp17 = tmp14->o->__GetItem(tmp16);
					Dynamic tmp18 = tmp17;
					::openfl::_internal::renderer::DrawCommandBuffer tmp19 = c->buffer;
					int tmp20 = c->iiPos;
					int tmp21 = tmp20;
					::openfl::_internal::renderer::DrawCommandBuffer tmp22 = c->buffer;
					int tmp23 = c->ffPos;
					int tmp24 = tmp23;
					::openfl::_internal::renderer::DrawCommandBuffer tmp25 = c->buffer;
					int tmp26 = c->iiPos;
					int tmp27 = (tmp26 + (int)1);
					::openfl::_internal::renderer::DrawCommandBuffer tmp28 = c->buffer;
					int tmp29 = c->oPos;
					int tmp30 = (tmp29 + (int)1);
					Dynamic tmp31 = tmp28->o->__GetItem(tmp30);
					::openfl::geom::Matrix tmp32 = ((::openfl::geom::Matrix)(tmp31));
					::openfl::_internal::renderer::DrawCommandBuffer tmp33 = c->buffer;
					int tmp34 = c->oPos;
					int tmp35 = (tmp34 + (int)2);
					Dynamic tmp36 = tmp33->o->__GetItem(tmp35);
					Dynamic tmp37 = tmp36;
					::openfl::_internal::renderer::DrawCommandBuffer tmp38 = c->buffer;
					int tmp39 = c->oPos;
					int tmp40 = (tmp39 + (int)3);
					Dynamic tmp41 = tmp38->o->__GetItem(tmp40);
					Dynamic tmp42 = tmp41;
					::openfl::_internal::renderer::DrawCommandBuffer tmp43 = c->buffer;
					int tmp44 = c->fPos;
					int tmp45 = tmp44;
					Float tmp46 = tmp43->f->__get(tmp45);
					Float tmp47 = tmp46;
					Dynamic tmp48 = ::openfl::_internal::renderer::cairo::CairoGraphics_obj::createGradientPattern(tmp18,tmp19->ii->__get(tmp21).StaticCast< Array< int > >(),tmp22->ff->__get(tmp24).StaticCast< Array< Float > >(),tmp25->ii->__get(tmp27).StaticCast< Array< int > >(),tmp32,tmp37,tmp42,tmp47);
					::openfl::_internal::renderer::cairo::CairoGraphics_obj::fillPattern = tmp48;
					::openfl::_internal::renderer::cairo::CairoGraphics_obj::hasFill = true;
					::openfl::_internal::renderer::cairo::CairoGraphics_obj::bitmapFill = null();
				}
				else if (  ( _switch_1==(int)10)){
					::openfl::_internal::renderer::DrawCommandReader tmp11;
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
						data->prev = ::openfl::_internal::renderer::DrawCommandType_obj::DRAW_TRIANGLES;
						tmp11 = data;
					}
					::openfl::_internal::renderer::DrawCommandReader c = tmp11;
					::openfl::_internal::renderer::DrawCommandBuffer tmp12 = c->buffer;
					int tmp13 = c->oPos;
					int tmp14 = tmp13;
					Dynamic tmp15 = tmp12->o->__GetItem(tmp14);
					::openfl::_Vector::FloatVector v = ((::openfl::_Vector::FloatVector)(tmp15));
					::openfl::_internal::renderer::DrawCommandBuffer tmp16 = c->buffer;
					int tmp17 = c->oPos;
					int tmp18 = (tmp17 + (int)1);
					Dynamic tmp19 = tmp16->o->__GetItem(tmp18);
					::openfl::_Vector::IntVector ind = ((::openfl::_Vector::IntVector)(tmp19));
					::openfl::_internal::renderer::DrawCommandBuffer tmp20 = c->buffer;
					int tmp21 = c->oPos;
					int tmp22 = (tmp21 + (int)2);
					Dynamic tmp23 = tmp20->o->__GetItem(tmp22);
					::openfl::_Vector::FloatVector uvt = ((::openfl::_Vector::FloatVector)(tmp23));
					::openfl::display::BitmapData tmp24 = ::openfl::_internal::renderer::cairo::CairoGraphics_obj::bitmapFill;
					bool tmp25 = (tmp24 == null());
					bool colorFill = tmp25;
					bool tmp26 = colorFill;
					bool tmp27;
					if ((tmp26)){
						tmp27 = (uvt != null());
					}
					else{
						tmp27 = false;
					}
					if ((tmp27)){
						break;
					}
					int width = (int)0;
					int height = (int)0;
					::openfl::display::Graphics tmp28 = ::openfl::_internal::renderer::cairo::CairoGraphics_obj::graphics;
					::lime::math::Matrix3 tmp29 = tmp28->__renderTransform->__toMatrix3();
					::lime::math::Matrix3 currentMatrix = tmp29;
					bool tmp30 = colorFill;
					bool tmp31 = !(tmp30);
					if ((tmp31)){
						bool tmp32 = (uvt == null());
						if ((tmp32)){
							::openfl::_Vector::FloatVector tmp33;
							{
								int length = null();
								bool fixed = null();
								::openfl::_Vector::FloatVector tmp34 = ::openfl::_Vector::FloatVector_obj::__new(length,fixed,null());
								::openfl::_Vector::FloatVector tmp35 = tmp34;
								tmp33 = tmp35;
							}
							uvt = tmp33;
							{
								int _g3 = (int)0;
								int tmp34 = v->get_length();
								Float tmp35 = (Float(tmp34) / Float((int)2));
								int tmp36 = ::Std_obj::_int(tmp35);
								int _g2 = tmp36;
								while((true)){
									bool tmp37 = (_g3 < _g2);
									bool tmp38 = !(tmp37);
									if ((tmp38)){
										break;
									}
									int tmp39 = (_g3)++;
									int i = tmp39;
									{
										int tmp40 = (i * (int)2);
										Float tmp41 = v->get(tmp40);
										Float tmp42 = tmp41;
										::openfl::display::BitmapData tmp43 = ::openfl::_internal::renderer::cairo::CairoGraphics_obj::bitmapFill;
										int tmp44 = tmp43->width;
										Float tmp45 = (Float(tmp42) / Float(tmp44));
										Float x = tmp45;
										Float tmp46 = x;
										uvt->push(tmp46);
									}
									{
										int tmp40 = (i * (int)2);
										int tmp41 = (tmp40 + (int)1);
										Float tmp42 = v->get(tmp41);
										Float tmp43 = tmp42;
										::openfl::display::BitmapData tmp44 = ::openfl::_internal::renderer::cairo::CairoGraphics_obj::bitmapFill;
										int tmp45 = tmp44->height;
										Float tmp46 = (Float(tmp43) / Float(tmp45));
										Float x = tmp46;
										Float tmp47 = x;
										uvt->push(tmp47);
									}
								}
							}
						}
						::openfl::_internal::renderer::DrawCommandBuffer tmp33 = c->buffer;
						int tmp34 = c->oPos;
						int tmp35 = (tmp34 + (int)2);
						Dynamic tmp36 = tmp33->o->__GetItem(tmp35);
						int tmp37 = ((::openfl::_Vector::FloatVector)(tmp36))->get_length();
						int tmp38 = v->get_length();
						bool tmp39 = (tmp37 != tmp38);
						bool skipT = tmp39;
						::openfl::_Vector::FloatVector tmp40 = uvt;
						bool tmp41 = skipT;
						Dynamic tmp42 = ::openfl::_internal::renderer::cairo::CairoGraphics_obj::normalizeUVT(tmp40,tmp41);
						Dynamic normalizedUVT = tmp42;
						Float maxUVT = normalizedUVT->__Field(HX_HCSTRING("max","\xa4","\x0a","\x53","\x00"), hx::paccDynamic );
						uvt = normalizedUVT->__Field(HX_HCSTRING("uvt","\xf3","\x2e","\x59","\x00"), hx::paccDynamic );
						bool tmp43 = (maxUVT > (int)1);
						if ((tmp43)){
							::openfl::geom::Rectangle tmp44 = ::openfl::_internal::renderer::cairo::CairoGraphics_obj::bounds;
							Float tmp45 = tmp44->width;
							int tmp46 = ::Std_obj::_int(tmp45);
							width = tmp46;
							::openfl::geom::Rectangle tmp47 = ::openfl::_internal::renderer::cairo::CairoGraphics_obj::bounds;
							Float tmp48 = tmp47->height;
							int tmp49 = ::Std_obj::_int(tmp48);
							height = tmp49;
						}
						else{
							::openfl::display::BitmapData tmp44 = ::openfl::_internal::renderer::cairo::CairoGraphics_obj::bitmapFill;
							width = tmp44->width;
							::openfl::display::BitmapData tmp45 = ::openfl::_internal::renderer::cairo::CairoGraphics_obj::bitmapFill;
							height = tmp45->height;
						}
					}
					int i = (int)0;
					int tmp32 = ind->get_length();
					int l = tmp32;
					int a_;
					int b_;
					int c_;
					int iax;
					int iay;
					int ibx;
					int iby;
					int icx;
					int icy;
					Float x1;
					Float y1;
					Float x2;
					Float y2;
					Float x3;
					Float y3;
					Float uvx1;
					Float uvy1;
					Float uvx2;
					Float uvy2;
					Float uvx3;
					Float uvy3;
					Float denom;
					Float t1;
					Float t2;
					Float t3;
					Float t4;
					Float dx;
					Float dy;
					::lime::graphics::cairo::Cairo tmp33 = ::openfl::_internal::renderer::cairo::CairoGraphics_obj::cairo;
					tmp33->set_antialias((int)1);
					while((true)){
						bool tmp34 = (i < l);
						bool tmp35 = !(tmp34);
						if ((tmp35)){
							break;
						}
						a_ = i;
						int tmp36 = (i + (int)1);
						b_ = tmp36;
						int tmp37 = (i + (int)2);
						c_ = tmp37;
						int tmp38 = a_;
						int tmp39 = ind->get(tmp38);
						int tmp40 = tmp39;
						int tmp41 = (tmp40 * (int)2);
						iax = tmp41;
						int tmp42 = a_;
						int tmp43 = ind->get(tmp42);
						int tmp44 = tmp43;
						int tmp45 = (tmp44 * (int)2);
						int tmp46 = (tmp45 + (int)1);
						iay = tmp46;
						int tmp47 = b_;
						int tmp48 = ind->get(tmp47);
						int tmp49 = tmp48;
						int tmp50 = (tmp49 * (int)2);
						ibx = tmp50;
						int tmp51 = b_;
						int tmp52 = ind->get(tmp51);
						int tmp53 = tmp52;
						int tmp54 = (tmp53 * (int)2);
						int tmp55 = (tmp54 + (int)1);
						iby = tmp55;
						int tmp56 = c_;
						int tmp57 = ind->get(tmp56);
						int tmp58 = tmp57;
						int tmp59 = (tmp58 * (int)2);
						icx = tmp59;
						int tmp60 = c_;
						int tmp61 = ind->get(tmp60);
						int tmp62 = tmp61;
						int tmp63 = (tmp62 * (int)2);
						int tmp64 = (tmp63 + (int)1);
						icy = tmp64;
						int tmp65 = iax;
						Float tmp66 = v->get(tmp65);
						x1 = tmp66;
						int tmp67 = iay;
						Float tmp68 = v->get(tmp67);
						y1 = tmp68;
						int tmp69 = ibx;
						Float tmp70 = v->get(tmp69);
						x2 = tmp70;
						int tmp71 = iby;
						Float tmp72 = v->get(tmp71);
						y2 = tmp72;
						int tmp73 = icx;
						Float tmp74 = v->get(tmp73);
						x3 = tmp74;
						int tmp75 = icy;
						Float tmp76 = v->get(tmp75);
						y3 = tmp76;
						{
							::openfl::_internal::renderer::DrawCommandBuffer tmp77 = c->buffer;
							int tmp78 = c->oPos;
							int tmp79 = (tmp78 + (int)3);
							Dynamic tmp80 = tmp77->o->__GetItem(tmp79);
							Dynamic _g2 = tmp80;
							Dynamic tmp81 = _g2;
							switch( (int)(tmp81)){
								case (int)2: {
									Float tmp82 = (x2 - x1);
									Float tmp83 = (y3 - y1);
									Float tmp84 = (tmp82 * tmp83);
									Float tmp85 = (y2 - y1);
									Float tmp86 = (x3 - x1);
									Float tmp87 = (tmp85 * tmp86);
									Float tmp88 = (tmp84 - tmp87);
									bool tmp89 = (tmp88 < (int)0);
									bool tmp90 = !(tmp89);
									if ((tmp90)){
										hx::AddEq(i,(int)3);
										continue;
									}
								}
								;break;
								case (int)0: {
									Float tmp82 = (x2 - x1);
									Float tmp83 = (y3 - y1);
									Float tmp84 = (tmp82 * tmp83);
									Float tmp85 = (y2 - y1);
									Float tmp86 = (x3 - x1);
									Float tmp87 = (tmp85 * tmp86);
									Float tmp88 = (tmp84 - tmp87);
									bool tmp89 = (tmp88 < (int)0);
									if ((tmp89)){
										hx::AddEq(i,(int)3);
										continue;
									}
								}
								;break;
								default: {
								}
							}
						}
						bool tmp77 = colorFill;
						if ((tmp77)){
							::lime::graphics::cairo::Cairo tmp78 = ::openfl::_internal::renderer::cairo::CairoGraphics_obj::cairo;
							tmp78->newPath();
							::lime::graphics::cairo::Cairo tmp79 = ::openfl::_internal::renderer::cairo::CairoGraphics_obj::cairo;
							Float tmp80 = x1;
							Float tmp81 = y1;
							tmp79->moveTo(tmp80,tmp81);
							::lime::graphics::cairo::Cairo tmp82 = ::openfl::_internal::renderer::cairo::CairoGraphics_obj::cairo;
							Float tmp83 = x2;
							Float tmp84 = y2;
							tmp82->lineTo(tmp83,tmp84);
							::lime::graphics::cairo::Cairo tmp85 = ::openfl::_internal::renderer::cairo::CairoGraphics_obj::cairo;
							Float tmp86 = x3;
							Float tmp87 = y3;
							tmp85->lineTo(tmp86,tmp87);
							::lime::graphics::cairo::Cairo tmp88 = ::openfl::_internal::renderer::cairo::CairoGraphics_obj::cairo;
							tmp88->closePath();
							bool tmp89 = ::openfl::_internal::renderer::cairo::CairoGraphics_obj::hitTesting;
							bool tmp90 = !(tmp89);
							if ((tmp90)){
								::lime::graphics::cairo::Cairo tmp91 = ::openfl::_internal::renderer::cairo::CairoGraphics_obj::cairo;
								tmp91->fillPreserve();
							}
							hx::AddEq(i,(int)3);
							continue;
						}
						::lime::graphics::cairo::Cairo tmp78 = ::openfl::_internal::renderer::cairo::CairoGraphics_obj::cairo;
						::openfl::display::Graphics tmp79 = ::openfl::_internal::renderer::cairo::CairoGraphics_obj::graphics;
						::lime::math::Matrix3 tmp80 = tmp79->__renderTransform->__toMatrix3();
						tmp78->set_matrix(tmp80);
						::lime::graphics::cairo::Cairo tmp81 = ::openfl::_internal::renderer::cairo::CairoGraphics_obj::cairo;
						tmp81->newPath();
						::lime::graphics::cairo::Cairo tmp82 = ::openfl::_internal::renderer::cairo::CairoGraphics_obj::cairo;
						Float tmp83 = x1;
						Float tmp84 = y1;
						tmp82->moveTo(tmp83,tmp84);
						::lime::graphics::cairo::Cairo tmp85 = ::openfl::_internal::renderer::cairo::CairoGraphics_obj::cairo;
						Float tmp86 = x2;
						Float tmp87 = y2;
						tmp85->lineTo(tmp86,tmp87);
						::lime::graphics::cairo::Cairo tmp88 = ::openfl::_internal::renderer::cairo::CairoGraphics_obj::cairo;
						Float tmp89 = x3;
						Float tmp90 = y3;
						tmp88->lineTo(tmp89,tmp90);
						::lime::graphics::cairo::Cairo tmp91 = ::openfl::_internal::renderer::cairo::CairoGraphics_obj::cairo;
						tmp91->closePath();
						int tmp92 = iax;
						Float tmp93 = uvt->get(tmp92);
						Float tmp94 = tmp93;
						int tmp95 = width;
						Float tmp96 = (tmp94 * tmp95);
						uvx1 = tmp96;
						int tmp97 = ibx;
						Float tmp98 = uvt->get(tmp97);
						Float tmp99 = tmp98;
						int tmp100 = width;
						Float tmp101 = (tmp99 * tmp100);
						uvx2 = tmp101;
						int tmp102 = icx;
						Float tmp103 = uvt->get(tmp102);
						Float tmp104 = tmp103;
						int tmp105 = width;
						Float tmp106 = (tmp104 * tmp105);
						uvx3 = tmp106;
						int tmp107 = iay;
						Float tmp108 = uvt->get(tmp107);
						Float tmp109 = tmp108;
						int tmp110 = height;
						Float tmp111 = (tmp109 * tmp110);
						uvy1 = tmp111;
						int tmp112 = iby;
						Float tmp113 = uvt->get(tmp112);
						Float tmp114 = tmp113;
						int tmp115 = height;
						Float tmp116 = (tmp114 * tmp115);
						uvy2 = tmp116;
						int tmp117 = icy;
						Float tmp118 = uvt->get(tmp117);
						Float tmp119 = tmp118;
						int tmp120 = height;
						Float tmp121 = (tmp119 * tmp120);
						uvy3 = tmp121;
						Float tmp122 = uvx1;
						Float tmp123 = (uvy3 - uvy2);
						Float tmp124 = (tmp122 * tmp123);
						Float tmp125 = (uvx2 * uvy3);
						Float tmp126 = (tmp124 - tmp125);
						Float tmp127 = (uvx3 * uvy2);
						Float tmp128 = (tmp126 + tmp127);
						Float tmp129 = (uvx2 - uvx3);
						Float tmp130 = uvy1;
						Float tmp131 = (tmp129 * tmp130);
						Float tmp132 = (tmp128 + tmp131);
						denom = tmp132;
						bool tmp133 = (denom == (int)0);
						if ((tmp133)){
							hx::AddEq(i,(int)3);
							continue;
						}
						hx::MultEq(x1,currentMatrix->a);
						hx::MultEq(x2,currentMatrix->a);
						hx::MultEq(x3,currentMatrix->a);
						hx::MultEq(y1,currentMatrix->d);
						hx::MultEq(y2,currentMatrix->d);
						hx::MultEq(y3,currentMatrix->d);
						Float tmp134 = uvy1;
						Float tmp135 = (x3 - x2);
						Float tmp136 = (tmp134 * tmp135);
						Float tmp137 = (uvy2 * x3);
						Float tmp138 = (tmp136 - tmp137);
						Float tmp139 = (uvy3 * x2);
						Float tmp140 = (tmp138 + tmp139);
						Float tmp141 = (uvy2 - uvy3);
						Float tmp142 = x1;
						Float tmp143 = (tmp141 * tmp142);
						Float tmp144 = (tmp140 + tmp143);
						Float tmp145 = -(tmp144);
						Float tmp146 = denom;
						Float tmp147 = (Float(tmp145) / Float(tmp146));
						t1 = tmp147;
						Float tmp148 = (uvy2 * y3);
						Float tmp149 = uvy1;
						Float tmp150 = (y2 - y3);
						Float tmp151 = (tmp149 * tmp150);
						Float tmp152 = (tmp148 + tmp151);
						Float tmp153 = (uvy3 * y2);
						Float tmp154 = (tmp152 - tmp153);
						Float tmp155 = (uvy3 - uvy2);
						Float tmp156 = y1;
						Float tmp157 = (tmp155 * tmp156);
						Float tmp158 = (tmp154 + tmp157);
						Float tmp159 = denom;
						Float tmp160 = (Float(tmp158) / Float(tmp159));
						t2 = tmp160;
						Float tmp161 = uvx1;
						Float tmp162 = (x3 - x2);
						Float tmp163 = (tmp161 * tmp162);
						Float tmp164 = (uvx2 * x3);
						Float tmp165 = (tmp163 - tmp164);
						Float tmp166 = (uvx3 * x2);
						Float tmp167 = (tmp165 + tmp166);
						Float tmp168 = (uvx2 - uvx3);
						Float tmp169 = x1;
						Float tmp170 = (tmp168 * tmp169);
						Float tmp171 = (tmp167 + tmp170);
						Float tmp172 = denom;
						Float tmp173 = (Float(tmp171) / Float(tmp172));
						t3 = tmp173;
						Float tmp174 = (uvx2 * y3);
						Float tmp175 = uvx1;
						Float tmp176 = (y2 - y3);
						Float tmp177 = (tmp175 * tmp176);
						Float tmp178 = (tmp174 + tmp177);
						Float tmp179 = (uvx3 * y2);
						Float tmp180 = (tmp178 - tmp179);
						Float tmp181 = (uvx3 - uvx2);
						Float tmp182 = y1;
						Float tmp183 = (tmp181 * tmp182);
						Float tmp184 = (tmp180 + tmp183);
						Float tmp185 = -(tmp184);
						Float tmp186 = denom;
						Float tmp187 = (Float(tmp185) / Float(tmp186));
						t4 = tmp187;
						Float tmp188 = uvx1;
						Float tmp189 = (uvy3 * x2);
						Float tmp190 = (uvy2 * x3);
						Float tmp191 = (tmp189 - tmp190);
						Float tmp192 = (tmp188 * tmp191);
						Float tmp193 = uvy1;
						Float tmp194 = (uvx2 * x3);
						Float tmp195 = (uvx3 * x2);
						Float tmp196 = (tmp194 - tmp195);
						Float tmp197 = (tmp193 * tmp196);
						Float tmp198 = (tmp192 + tmp197);
						Float tmp199 = (uvx3 * uvy2);
						Float tmp200 = (uvx2 * uvy3);
						Float tmp201 = (tmp199 - tmp200);
						Float tmp202 = x1;
						Float tmp203 = (tmp201 * tmp202);
						Float tmp204 = (tmp198 + tmp203);
						Float tmp205 = denom;
						Float tmp206 = (Float(tmp204) / Float(tmp205));
						dx = tmp206;
						Float tmp207 = uvx1;
						Float tmp208 = (uvy3 * y2);
						Float tmp209 = (uvy2 * y3);
						Float tmp210 = (tmp208 - tmp209);
						Float tmp211 = (tmp207 * tmp210);
						Float tmp212 = uvy1;
						Float tmp213 = (uvx2 * y3);
						Float tmp214 = (uvx3 * y2);
						Float tmp215 = (tmp213 - tmp214);
						Float tmp216 = (tmp212 * tmp215);
						Float tmp217 = (tmp211 + tmp216);
						Float tmp218 = (uvx3 * uvy2);
						Float tmp219 = (uvx2 * uvy3);
						Float tmp220 = (tmp218 - tmp219);
						Float tmp221 = y1;
						Float tmp222 = (tmp220 * tmp221);
						Float tmp223 = (tmp217 + tmp222);
						Float tmp224 = denom;
						Float tmp225 = (Float(tmp223) / Float(tmp224));
						dy = tmp225;
						::lime::math::Matrix3 tmp226 = ::lime::math::Matrix3_obj::__new(t1,t2,t3,t4,dx,dy);
						::lime::math::Matrix3 matrix = tmp226;
						::lime::graphics::cairo::Cairo tmp227 = ::openfl::_internal::renderer::cairo::CairoGraphics_obj::cairo;
						::lime::math::Matrix3 tmp228 = matrix;
						tmp227->set_matrix(tmp228);
						::lime::graphics::cairo::Cairo tmp229 = ::openfl::_internal::renderer::cairo::CairoGraphics_obj::cairo;
						Dynamic tmp230 = ::openfl::_internal::renderer::cairo::CairoGraphics_obj::fillPattern;
						tmp229->set_source(tmp230);
						bool tmp231 = ::openfl::_internal::renderer::cairo::CairoGraphics_obj::hitTesting;
						bool tmp232 = !(tmp231);
						if ((tmp232)){
							::lime::graphics::cairo::Cairo tmp233 = ::openfl::_internal::renderer::cairo::CairoGraphics_obj::cairo;
							tmp233->fill();
						}
						hx::AddEq(i,(int)3);
					}
				}
				else  {
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
;
;
			}
		}
		data->destroy();
		bool tmp8 = hasPath;
		if ((tmp8)){
			bool tmp9 = stroke;
			bool tmp10;
			if ((tmp9)){
				tmp10 = ::openfl::_internal::renderer::cairo::CairoGraphics_obj::hasStroke;
			}
			else{
				tmp10 = false;
			}
			if ((tmp10)){
				bool tmp11 = ::openfl::_internal::renderer::cairo::CairoGraphics_obj::hasFill;
				bool tmp12;
				if ((tmp11)){
					tmp12 = closeGap;
				}
				else{
					tmp12 = false;
				}
				if ((tmp12)){
					::lime::graphics::cairo::Cairo tmp13 = ::openfl::_internal::renderer::cairo::CairoGraphics_obj::cairo;
					Float tmp14 = (startX - offsetX);
					Float tmp15 = (startY - offsetY);
					tmp13->lineTo(tmp14,tmp15);
				}
				else{
					bool tmp13 = closeGap;
					bool tmp14 = tmp13;
					bool tmp15;
					if ((tmp14)){
						tmp15 = (positionX == startX);
					}
					else{
						tmp15 = false;
					}
					bool tmp16;
					if ((tmp15)){
						tmp16 = (positionY == startY);
					}
					else{
						tmp16 = false;
					}
					if ((tmp16)){
						::openfl::_internal::renderer::cairo::CairoGraphics_obj::closePath(true);
					}
				}
				::lime::graphics::cairo::Cairo tmp13 = ::openfl::_internal::renderer::cairo::CairoGraphics_obj::cairo;
				Dynamic tmp14 = ::openfl::_internal::renderer::cairo::CairoGraphics_obj::strokePattern;
				tmp13->set_source(tmp14);
				bool tmp15 = ::openfl::_internal::renderer::cairo::CairoGraphics_obj::hitTesting;
				bool tmp16 = !(tmp15);
				if ((tmp16)){
					::lime::graphics::cairo::Cairo tmp17 = ::openfl::_internal::renderer::cairo::CairoGraphics_obj::cairo;
					tmp17->strokePreserve();
				}
			}
			bool tmp11 = stroke;
			bool tmp12 = tmp11;
			bool tmp13 = !(tmp12);
			bool tmp14;
			if ((tmp13)){
				tmp14 = ::openfl::_internal::renderer::cairo::CairoGraphics_obj::hasFill;
			}
			else{
				tmp14 = false;
			}
			if ((tmp14)){
				::lime::graphics::cairo::Cairo tmp15 = ::openfl::_internal::renderer::cairo::CairoGraphics_obj::cairo;
				::openfl::geom::Rectangle tmp16 = ::openfl::_internal::renderer::cairo::CairoGraphics_obj::bounds;
				Float tmp17 = tmp16->x;
				Float tmp18 = -(tmp17);
				::openfl::geom::Rectangle tmp19 = ::openfl::_internal::renderer::cairo::CairoGraphics_obj::bounds;
				Float tmp20 = tmp19->y;
				Float tmp21 = -(tmp20);
				tmp15->translate(tmp18,tmp21);
				::openfl::geom::Matrix tmp22 = ::openfl::_internal::renderer::cairo::CairoGraphics_obj::fillPatternMatrix;
				bool tmp23 = (tmp22 != null());
				if ((tmp23)){
					::openfl::geom::Matrix tmp24 = ::openfl::_internal::renderer::cairo::CairoGraphics_obj::fillPatternMatrix;
					::openfl::geom::Matrix tmp25 = tmp24->clone();
					::openfl::geom::Matrix matrix = tmp25;
					matrix->invert();
					::openfl::geom::Matrix tmp26 = ::openfl::_internal::renderer::cairo::CairoGraphics_obj::pendingMatrix;
					bool tmp27 = (tmp26 != null());
					if ((tmp27)){
						::openfl::geom::Matrix tmp28 = ::openfl::_internal::renderer::cairo::CairoGraphics_obj::pendingMatrix;
						matrix->concat(tmp28);
					}
					Dynamic tmp28 = ::openfl::_internal::renderer::cairo::CairoGraphics_obj::fillPattern;
					::lime::math::Matrix3 tmp29 = matrix->__toMatrix3();
					::lime::graphics::cairo::_CairoPattern::CairoPattern_Impl__obj::set_matrix(tmp28,tmp29);
				}
				::lime::graphics::cairo::Cairo tmp24 = ::openfl::_internal::renderer::cairo::CairoGraphics_obj::cairo;
				Dynamic tmp25 = ::openfl::_internal::renderer::cairo::CairoGraphics_obj::fillPattern;
				tmp24->set_source(tmp25);
				::openfl::geom::Matrix tmp26 = ::openfl::_internal::renderer::cairo::CairoGraphics_obj::pendingMatrix;
				bool tmp27 = (tmp26 != null());
				if ((tmp27)){
					::lime::graphics::cairo::Cairo tmp28 = ::openfl::_internal::renderer::cairo::CairoGraphics_obj::cairo;
					::openfl::geom::Matrix tmp29 = ::openfl::_internal::renderer::cairo::CairoGraphics_obj::pendingMatrix;
					::lime::math::Matrix3 tmp30 = tmp29->__toMatrix3();
					tmp28->transform(tmp30);
					bool tmp31 = ::openfl::_internal::renderer::cairo::CairoGraphics_obj::hitTesting;
					bool tmp32 = !(tmp31);
					if ((tmp32)){
						::lime::graphics::cairo::Cairo tmp33 = ::openfl::_internal::renderer::cairo::CairoGraphics_obj::cairo;
						tmp33->fillPreserve();
					}
					::lime::graphics::cairo::Cairo tmp33 = ::openfl::_internal::renderer::cairo::CairoGraphics_obj::cairo;
					::openfl::geom::Matrix tmp34 = ::openfl::_internal::renderer::cairo::CairoGraphics_obj::inversePendingMatrix;
					::lime::math::Matrix3 tmp35 = tmp34->__toMatrix3();
					tmp33->transform(tmp35);
				}
				else{
					bool tmp28 = ::openfl::_internal::renderer::cairo::CairoGraphics_obj::hitTesting;
					bool tmp29 = !(tmp28);
					if ((tmp29)){
						::lime::graphics::cairo::Cairo tmp30 = ::openfl::_internal::renderer::cairo::CairoGraphics_obj::cairo;
						tmp30->fillPreserve();
					}
				}
				::lime::graphics::cairo::Cairo tmp28 = ::openfl::_internal::renderer::cairo::CairoGraphics_obj::cairo;
				::openfl::geom::Rectangle tmp29 = ::openfl::_internal::renderer::cairo::CairoGraphics_obj::bounds;
				Float tmp30 = tmp29->x;
				::openfl::geom::Rectangle tmp31 = ::openfl::_internal::renderer::cairo::CairoGraphics_obj::bounds;
				Float tmp32 = tmp31->y;
				tmp28->translate(tmp30,tmp32);
				::lime::graphics::cairo::Cairo tmp33 = ::openfl::_internal::renderer::cairo::CairoGraphics_obj::cairo;
				tmp33->closePath();
			}
		}
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(CairoGraphics_obj,playCommands,(void))

Void CairoGraphics_obj::quadraticCurveTo( Float cx,Float cy,Float x,Float y){
{
		::lime::math::Vector2 current = null();
		::lime::graphics::cairo::Cairo tmp = ::openfl::_internal::renderer::cairo::CairoGraphics_obj::cairo;
		bool tmp1 = tmp->get_hasCurrentPoint();
		bool tmp2 = !(tmp1);
		if ((tmp2)){
			::lime::graphics::cairo::Cairo tmp3 = ::openfl::_internal::renderer::cairo::CairoGraphics_obj::cairo;
			Float tmp4 = cx;
			Float tmp5 = cy;
			tmp3->moveTo(tmp4,tmp5);
			::lime::math::Vector2 tmp6 = ::lime::math::Vector2_obj::__new(cx,cy);
			current = tmp6;
		}
		else{
			::lime::graphics::cairo::Cairo tmp3 = ::openfl::_internal::renderer::cairo::CairoGraphics_obj::cairo;
			::lime::math::Vector2 tmp4 = tmp3->get_currentPoint();
			current = tmp4;
		}
		Float tmp3 = current->x;
		Float tmp4 = ((Float)0.66666666666666663);
		Float tmp5 = (cx - current->x);
		Float tmp6 = (tmp4 * tmp5);
		Float tmp7 = (tmp3 + tmp6);
		Float cx1 = tmp7;
		Float tmp8 = current->y;
		Float tmp9 = ((Float)0.66666666666666663);
		Float tmp10 = (cy - current->y);
		Float tmp11 = (tmp9 * tmp10);
		Float tmp12 = (tmp8 + tmp11);
		Float cy1 = tmp12;
		Float tmp13 = x;
		Float tmp14 = ((Float)0.66666666666666663);
		Float tmp15 = (cx - x);
		Float tmp16 = (tmp14 * tmp15);
		Float tmp17 = (tmp13 + tmp16);
		Float cx2 = tmp17;
		Float tmp18 = y;
		Float tmp19 = ((Float)0.66666666666666663);
		Float tmp20 = (cy - y);
		Float tmp21 = (tmp19 * tmp20);
		Float tmp22 = (tmp18 + tmp21);
		Float cy2 = tmp22;
		::lime::graphics::cairo::Cairo tmp23 = ::openfl::_internal::renderer::cairo::CairoGraphics_obj::cairo;
		Float tmp24 = cx1;
		Float tmp25 = cy1;
		Float tmp26 = cx2;
		Float tmp27 = cy2;
		Float tmp28 = x;
		Float tmp29 = y;
		tmp23->curveTo(tmp24,tmp25,tmp26,tmp27,tmp28,tmp29);
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC4(CairoGraphics_obj,quadraticCurveTo,(void))

Void CairoGraphics_obj::render( ::openfl::display::Graphics graphics,::openfl::_internal::renderer::RenderSession renderSession,::openfl::geom::Matrix parentTransform){
{
		::openfl::_internal::renderer::cairo::CairoGraphics_obj::graphics = graphics;
		::openfl::_internal::renderer::cairo::CairoGraphics_obj::allowSmoothing = renderSession->allowSmoothing;
		graphics->__update();
		bool tmp = graphics->__dirty;
		bool tmp1 = tmp;
		bool tmp2 = !(tmp1);
		bool tmp3 = !(tmp2);
		bool tmp4;
		if ((tmp3)){
			tmp4 = graphics->__managed;
		}
		else{
			tmp4 = true;
		}
		if ((tmp4)){
			return null();
		}
		::openfl::_internal::renderer::cairo::CairoGraphics_obj::bounds = graphics->__bounds;
		int width = graphics->__width;
		int height = graphics->__height;
		bool tmp5 = graphics->__visible;
		bool tmp6 = tmp5;
		bool tmp7 = !(tmp6);
		bool tmp8 = !(tmp7);
		bool tmp9 = tmp8;
		bool tmp10;
		if ((tmp9)){
			int tmp11 = graphics->__commands->get_length();
			int tmp12 = tmp11;
			int tmp13 = tmp12;
			tmp10 = (tmp13 == (int)0);
		}
		else{
			tmp10 = true;
		}
		bool tmp11 = !(tmp10);
		bool tmp12 = tmp11;
		bool tmp13;
		if ((tmp12)){
			::openfl::geom::Rectangle tmp14 = ::openfl::_internal::renderer::cairo::CairoGraphics_obj::bounds;
			::openfl::geom::Rectangle tmp15 = tmp14;
			::openfl::geom::Rectangle tmp16 = tmp15;
			tmp13 = (tmp16 == null());
		}
		else{
			tmp13 = true;
		}
		bool tmp14 = !(tmp13);
		bool tmp15 = tmp14;
		bool tmp16;
		if ((tmp15)){
			tmp16 = (width < (int)1);
		}
		else{
			tmp16 = true;
		}
		bool tmp17 = !(tmp16);
		bool tmp18;
		if ((tmp17)){
			tmp18 = (height < (int)1);
		}
		else{
			tmp18 = true;
		}
		if ((tmp18)){
			graphics->__cairo = null();
			graphics->__bitmap = null();
		}
		else{
			::openfl::_internal::renderer::cairo::CairoGraphics_obj::hitTesting = false;
			bool tmp19 = (graphics->__cairo != null());
			if ((tmp19)){
				Dynamic tmp20 = graphics->__cairo->get_target();
				Dynamic surface = tmp20;
				int tmp21 = width;
				Dynamic tmp22 = surface;
				int tmp23 = ::lime::graphics::cairo::_CairoImageSurface::CairoImageSurface_Impl__obj::get_width(tmp22);
				bool tmp24 = (tmp21 != tmp23);
				bool tmp25 = !(tmp24);
				bool tmp26;
				if ((tmp25)){
					int tmp27 = height;
					Dynamic tmp28 = surface;
					Dynamic tmp29 = tmp28;
					int tmp30 = ::lime::graphics::cairo::_CairoImageSurface::CairoImageSurface_Impl__obj::get_height(tmp29);
					int tmp31 = tmp30;
					tmp26 = (tmp27 != tmp31);
				}
				else{
					tmp26 = true;
				}
				if ((tmp26)){
					graphics->__cairo = null();
				}
			}
			bool tmp20 = (graphics->__cairo == null());
			bool tmp21 = !(tmp20);
			bool tmp22;
			if ((tmp21)){
				tmp22 = (graphics->__bitmap == null());
			}
			else{
				tmp22 = true;
			}
			if ((tmp22)){
				::openfl::display::BitmapData tmp23 = ::openfl::display::BitmapData_obj::__new(width,height,true,(int)0);
				::openfl::display::BitmapData bitmap = tmp23;
				Dynamic tmp24 = bitmap->getSurface();
				Dynamic surface = tmp24;
				::lime::graphics::cairo::Cairo tmp25 = ::lime::graphics::cairo::Cairo_obj::__new(surface);
				graphics->__cairo = tmp25;
				graphics->__bitmap = bitmap;
			}
			::openfl::_internal::renderer::cairo::CairoGraphics_obj::cairo = graphics->__cairo;
			::lime::graphics::cairo::Cairo tmp23 = ::openfl::_internal::renderer::cairo::CairoGraphics_obj::cairo;
			::lime::math::Matrix3 tmp24 = graphics->__renderTransform->__toMatrix3();
			tmp23->set_matrix(tmp24);
			::lime::graphics::cairo::Cairo tmp25 = ::openfl::_internal::renderer::cairo::CairoGraphics_obj::cairo;
			tmp25->set_operator((int)0);
			::lime::graphics::cairo::Cairo tmp26 = ::openfl::_internal::renderer::cairo::CairoGraphics_obj::cairo;
			tmp26->paint();
			::lime::graphics::cairo::Cairo tmp27 = ::openfl::_internal::renderer::cairo::CairoGraphics_obj::cairo;
			tmp27->set_operator((int)2);
			::openfl::_internal::renderer::DrawCommandBuffer tmp28 = ::openfl::_internal::renderer::cairo::CairoGraphics_obj::fillCommands;
			tmp28->clear();
			::openfl::_internal::renderer::DrawCommandBuffer tmp29 = ::openfl::_internal::renderer::cairo::CairoGraphics_obj::strokeCommands;
			tmp29->clear();
			::openfl::_internal::renderer::cairo::CairoGraphics_obj::hasFill = false;
			::openfl::_internal::renderer::cairo::CairoGraphics_obj::hasStroke = false;
			::openfl::_internal::renderer::cairo::CairoGraphics_obj::fillPattern = null();
			::openfl::_internal::renderer::cairo::CairoGraphics_obj::strokePattern = null();
			::openfl::_internal::renderer::DrawCommandReader tmp30 = ::openfl::_internal::renderer::DrawCommandReader_obj::__new(graphics->__commands);
			::openfl::_internal::renderer::DrawCommandReader data = tmp30;
			{
				int _g = (int)0;
				Array< ::Dynamic > _g1 = graphics->__commands->types;
				while((true)){
					bool tmp31 = (_g < _g1->length);
					bool tmp32 = !(tmp31);
					if ((tmp32)){
						break;
					}
					::openfl::_internal::renderer::DrawCommandType tmp33 = _g1->__get(_g).StaticCast< ::openfl::_internal::renderer::DrawCommandType >();
					::openfl::_internal::renderer::DrawCommandType type = tmp33;
					++(_g);
					switch( (int)(type->__Index())){
						case (int)3: {
							::openfl::_internal::renderer::DrawCommandReader tmp34;
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
								tmp34 = data;
							}
							::openfl::_internal::renderer::DrawCommandReader c = tmp34;
							::openfl::_internal::renderer::DrawCommandBuffer tmp35 = ::openfl::_internal::renderer::cairo::CairoGraphics_obj::fillCommands;
							::openfl::_internal::renderer::DrawCommandBuffer tmp36 = c->buffer;
							int tmp37 = c->fPos;
							int tmp38 = tmp37;
							Float tmp39 = tmp36->f->__get(tmp38);
							::openfl::_internal::renderer::DrawCommandBuffer tmp40 = c->buffer;
							int tmp41 = c->fPos;
							int tmp42 = (tmp41 + (int)1);
							Float tmp43 = tmp40->f->__get(tmp42);
							::openfl::_internal::renderer::DrawCommandBuffer tmp44 = c->buffer;
							int tmp45 = c->fPos;
							int tmp46 = (tmp45 + (int)2);
							Float tmp47 = tmp44->f->__get(tmp46);
							::openfl::_internal::renderer::DrawCommandBuffer tmp48 = c->buffer;
							int tmp49 = c->fPos;
							int tmp50 = (tmp49 + (int)3);
							Float tmp51 = tmp48->f->__get(tmp50);
							::openfl::_internal::renderer::DrawCommandBuffer tmp52 = c->buffer;
							int tmp53 = c->fPos;
							int tmp54 = (tmp53 + (int)4);
							Float tmp55 = tmp52->f->__get(tmp54);
							::openfl::_internal::renderer::DrawCommandBuffer tmp56 = c->buffer;
							int tmp57 = c->fPos;
							int tmp58 = (tmp57 + (int)5);
							Float tmp59 = tmp56->f->__get(tmp58);
							tmp35->cubicCurveTo(tmp39,tmp43,tmp47,tmp51,tmp55,tmp59);
							::openfl::_internal::renderer::DrawCommandBuffer tmp60 = ::openfl::_internal::renderer::cairo::CairoGraphics_obj::strokeCommands;
							::openfl::_internal::renderer::DrawCommandBuffer tmp61 = c->buffer;
							int tmp62 = c->fPos;
							int tmp63 = tmp62;
							Float tmp64 = tmp61->f->__get(tmp63);
							::openfl::_internal::renderer::DrawCommandBuffer tmp65 = c->buffer;
							int tmp66 = c->fPos;
							int tmp67 = (tmp66 + (int)1);
							Float tmp68 = tmp65->f->__get(tmp67);
							::openfl::_internal::renderer::DrawCommandBuffer tmp69 = c->buffer;
							int tmp70 = c->fPos;
							int tmp71 = (tmp70 + (int)2);
							Float tmp72 = tmp69->f->__get(tmp71);
							::openfl::_internal::renderer::DrawCommandBuffer tmp73 = c->buffer;
							int tmp74 = c->fPos;
							int tmp75 = (tmp74 + (int)3);
							Float tmp76 = tmp73->f->__get(tmp75);
							::openfl::_internal::renderer::DrawCommandBuffer tmp77 = c->buffer;
							int tmp78 = c->fPos;
							int tmp79 = (tmp78 + (int)4);
							Float tmp80 = tmp77->f->__get(tmp79);
							::openfl::_internal::renderer::DrawCommandBuffer tmp81 = c->buffer;
							int tmp82 = c->fPos;
							int tmp83 = (tmp82 + (int)5);
							Float tmp84 = tmp81->f->__get(tmp83);
							tmp60->cubicCurveTo(tmp64,tmp68,tmp72,tmp76,tmp80,tmp84);
						}
						;break;
						case (int)4: {
							::openfl::_internal::renderer::DrawCommandReader tmp34;
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
								tmp34 = data;
							}
							::openfl::_internal::renderer::DrawCommandReader c = tmp34;
							::openfl::_internal::renderer::DrawCommandBuffer tmp35 = ::openfl::_internal::renderer::cairo::CairoGraphics_obj::fillCommands;
							::openfl::_internal::renderer::DrawCommandBuffer tmp36 = c->buffer;
							int tmp37 = c->fPos;
							int tmp38 = tmp37;
							Float tmp39 = tmp36->f->__get(tmp38);
							::openfl::_internal::renderer::DrawCommandBuffer tmp40 = c->buffer;
							int tmp41 = c->fPos;
							int tmp42 = (tmp41 + (int)1);
							Float tmp43 = tmp40->f->__get(tmp42);
							::openfl::_internal::renderer::DrawCommandBuffer tmp44 = c->buffer;
							int tmp45 = c->fPos;
							int tmp46 = (tmp45 + (int)2);
							Float tmp47 = tmp44->f->__get(tmp46);
							::openfl::_internal::renderer::DrawCommandBuffer tmp48 = c->buffer;
							int tmp49 = c->fPos;
							int tmp50 = (tmp49 + (int)3);
							Float tmp51 = tmp48->f->__get(tmp50);
							tmp35->curveTo(tmp39,tmp43,tmp47,tmp51);
							::openfl::_internal::renderer::DrawCommandBuffer tmp52 = ::openfl::_internal::renderer::cairo::CairoGraphics_obj::strokeCommands;
							::openfl::_internal::renderer::DrawCommandBuffer tmp53 = c->buffer;
							int tmp54 = c->fPos;
							int tmp55 = tmp54;
							Float tmp56 = tmp53->f->__get(tmp55);
							::openfl::_internal::renderer::DrawCommandBuffer tmp57 = c->buffer;
							int tmp58 = c->fPos;
							int tmp59 = (tmp58 + (int)1);
							Float tmp60 = tmp57->f->__get(tmp59);
							::openfl::_internal::renderer::DrawCommandBuffer tmp61 = c->buffer;
							int tmp62 = c->fPos;
							int tmp63 = (tmp62 + (int)2);
							Float tmp64 = tmp61->f->__get(tmp63);
							::openfl::_internal::renderer::DrawCommandBuffer tmp65 = c->buffer;
							int tmp66 = c->fPos;
							int tmp67 = (tmp66 + (int)3);
							Float tmp68 = tmp65->f->__get(tmp67);
							tmp52->curveTo(tmp56,tmp60,tmp64,tmp68);
						}
						;break;
						case (int)15: {
							::openfl::_internal::renderer::DrawCommandReader tmp34;
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
								tmp34 = data;
							}
							::openfl::_internal::renderer::DrawCommandReader c = tmp34;
							::openfl::_internal::renderer::DrawCommandBuffer tmp35 = ::openfl::_internal::renderer::cairo::CairoGraphics_obj::fillCommands;
							::openfl::_internal::renderer::DrawCommandBuffer tmp36 = c->buffer;
							int tmp37 = c->fPos;
							int tmp38 = tmp37;
							Float tmp39 = tmp36->f->__get(tmp38);
							::openfl::_internal::renderer::DrawCommandBuffer tmp40 = c->buffer;
							int tmp41 = c->fPos;
							int tmp42 = (tmp41 + (int)1);
							Float tmp43 = tmp40->f->__get(tmp42);
							tmp35->lineTo(tmp39,tmp43);
							::openfl::_internal::renderer::DrawCommandBuffer tmp44 = ::openfl::_internal::renderer::cairo::CairoGraphics_obj::strokeCommands;
							::openfl::_internal::renderer::DrawCommandBuffer tmp45 = c->buffer;
							int tmp46 = c->fPos;
							int tmp47 = tmp46;
							Float tmp48 = tmp45->f->__get(tmp47);
							::openfl::_internal::renderer::DrawCommandBuffer tmp49 = c->buffer;
							int tmp50 = c->fPos;
							int tmp51 = (tmp50 + (int)1);
							Float tmp52 = tmp49->f->__get(tmp51);
							tmp44->lineTo(tmp48,tmp52);
						}
						;break;
						case (int)16: {
							::openfl::_internal::renderer::DrawCommandReader tmp34;
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
								tmp34 = data;
							}
							::openfl::_internal::renderer::DrawCommandReader c = tmp34;
							::openfl::_internal::renderer::DrawCommandBuffer tmp35 = ::openfl::_internal::renderer::cairo::CairoGraphics_obj::fillCommands;
							::openfl::_internal::renderer::DrawCommandBuffer tmp36 = c->buffer;
							int tmp37 = c->fPos;
							int tmp38 = tmp37;
							Float tmp39 = tmp36->f->__get(tmp38);
							::openfl::_internal::renderer::DrawCommandBuffer tmp40 = c->buffer;
							int tmp41 = c->fPos;
							int tmp42 = (tmp41 + (int)1);
							Float tmp43 = tmp40->f->__get(tmp42);
							tmp35->moveTo(tmp39,tmp43);
							::openfl::_internal::renderer::DrawCommandBuffer tmp44 = ::openfl::_internal::renderer::cairo::CairoGraphics_obj::strokeCommands;
							::openfl::_internal::renderer::DrawCommandBuffer tmp45 = c->buffer;
							int tmp46 = c->fPos;
							int tmp47 = tmp46;
							Float tmp48 = tmp45->f->__get(tmp47);
							::openfl::_internal::renderer::DrawCommandBuffer tmp49 = c->buffer;
							int tmp50 = c->fPos;
							int tmp51 = (tmp50 + (int)1);
							Float tmp52 = tmp49->f->__get(tmp51);
							tmp44->moveTo(tmp48,tmp52);
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
							::openfl::_internal::renderer::cairo::CairoGraphics_obj::endFill();
							::openfl::_internal::renderer::cairo::CairoGraphics_obj::endStroke();
							::openfl::_internal::renderer::cairo::CairoGraphics_obj::hasFill = false;
							::openfl::_internal::renderer::cairo::CairoGraphics_obj::bitmapFill = null();
						}
						;break;
						case (int)13: {
							::openfl::_internal::renderer::DrawCommandReader tmp34;
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
								tmp34 = data;
							}
							::openfl::_internal::renderer::DrawCommandReader c = tmp34;
							::openfl::_internal::renderer::DrawCommandBuffer tmp35 = ::openfl::_internal::renderer::cairo::CairoGraphics_obj::strokeCommands;
							::openfl::_internal::renderer::DrawCommandBuffer tmp36 = c->buffer;
							int tmp37 = c->oPos;
							int tmp38 = tmp37;
							Dynamic tmp39 = tmp36->o->__GetItem(tmp38);
							Dynamic tmp40 = tmp39;
							::openfl::_internal::renderer::DrawCommandBuffer tmp41 = c->buffer;
							int tmp42 = c->iiPos;
							int tmp43 = tmp42;
							::openfl::_internal::renderer::DrawCommandBuffer tmp44 = c->buffer;
							int tmp45 = c->ffPos;
							int tmp46 = tmp45;
							::openfl::_internal::renderer::DrawCommandBuffer tmp47 = c->buffer;
							int tmp48 = c->iiPos;
							int tmp49 = (tmp48 + (int)1);
							::openfl::_internal::renderer::DrawCommandBuffer tmp50 = c->buffer;
							int tmp51 = c->oPos;
							int tmp52 = (tmp51 + (int)1);
							Dynamic tmp53 = tmp50->o->__GetItem(tmp52);
							::openfl::geom::Matrix tmp54 = ((::openfl::geom::Matrix)(tmp53));
							::openfl::_internal::renderer::DrawCommandBuffer tmp55 = c->buffer;
							int tmp56 = c->oPos;
							int tmp57 = (tmp56 + (int)2);
							Dynamic tmp58 = tmp55->o->__GetItem(tmp57);
							Dynamic tmp59 = tmp58;
							::openfl::_internal::renderer::DrawCommandBuffer tmp60 = c->buffer;
							int tmp61 = c->oPos;
							int tmp62 = (tmp61 + (int)3);
							Dynamic tmp63 = tmp60->o->__GetItem(tmp62);
							Dynamic tmp64 = tmp63;
							::openfl::_internal::renderer::DrawCommandBuffer tmp65 = c->buffer;
							int tmp66 = c->fPos;
							int tmp67 = tmp66;
							Float tmp68 = tmp65->f->__get(tmp67);
							Float tmp69 = tmp68;
							tmp35->lineGradientStyle(tmp40,tmp41->ii->__get(tmp43).StaticCast< Array< int > >(),tmp44->ff->__get(tmp46).StaticCast< Array< Float > >(),tmp47->ii->__get(tmp49).StaticCast< Array< int > >(),tmp54,tmp59,tmp64,tmp69);
						}
						;break;
						case (int)12: {
							::openfl::_internal::renderer::DrawCommandReader tmp34;
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
								tmp34 = data;
							}
							::openfl::_internal::renderer::DrawCommandReader c = tmp34;
							::openfl::_internal::renderer::DrawCommandBuffer tmp35 = ::openfl::_internal::renderer::cairo::CairoGraphics_obj::strokeCommands;
							::openfl::_internal::renderer::DrawCommandBuffer tmp36 = c->buffer;
							int tmp37 = c->oPos;
							int tmp38 = tmp37;
							Dynamic tmp39 = tmp36->o->__GetItem(tmp38);
							::openfl::display::BitmapData tmp40 = ((::openfl::display::BitmapData)(tmp39));
							::openfl::_internal::renderer::DrawCommandBuffer tmp41 = c->buffer;
							int tmp42 = c->oPos;
							int tmp43 = (tmp42 + (int)1);
							Dynamic tmp44 = tmp41->o->__GetItem(tmp43);
							::openfl::geom::Matrix tmp45 = ((::openfl::geom::Matrix)(tmp44));
							::openfl::_internal::renderer::DrawCommandBuffer tmp46 = c->buffer;
							int tmp47 = c->bPos;
							int tmp48 = tmp47;
							bool tmp49 = tmp46->b->__get(tmp48);
							bool tmp50 = tmp49;
							::openfl::_internal::renderer::DrawCommandBuffer tmp51 = c->buffer;
							int tmp52 = c->bPos;
							int tmp53 = (tmp52 + (int)1);
							bool tmp54 = tmp51->b->__get(tmp53);
							bool tmp55 = tmp54;
							tmp35->lineBitmapStyle(tmp40,tmp45,tmp50,tmp55);
						}
						;break;
						case (int)14: {
							::openfl::_internal::renderer::DrawCommandReader tmp34;
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
								tmp34 = data;
							}
							::openfl::_internal::renderer::DrawCommandReader c = tmp34;
							::openfl::_internal::renderer::DrawCommandBuffer tmp35 = ::openfl::_internal::renderer::cairo::CairoGraphics_obj::strokeCommands;
							::openfl::_internal::renderer::DrawCommandBuffer tmp36 = c->buffer;
							int tmp37 = c->oPos;
							int tmp38 = tmp37;
							Dynamic tmp39 = tmp36->o->__GetItem(tmp38);
							Dynamic tmp40 = tmp39;
							::openfl::_internal::renderer::DrawCommandBuffer tmp41 = c->buffer;
							int tmp42 = c->iPos;
							int tmp43 = tmp42;
							int tmp44 = tmp41->i->__get(tmp43);
							int tmp45 = tmp44;
							::openfl::_internal::renderer::DrawCommandBuffer tmp46 = c->buffer;
							int tmp47 = c->fPos;
							int tmp48 = tmp47;
							Float tmp49 = tmp46->f->__get(tmp48);
							Float tmp50 = tmp49;
							::openfl::_internal::renderer::DrawCommandBuffer tmp51 = c->buffer;
							int tmp52 = c->bPos;
							int tmp53 = tmp52;
							bool tmp54 = tmp51->b->__get(tmp53);
							bool tmp55 = tmp54;
							::openfl::_internal::renderer::DrawCommandBuffer tmp56 = c->buffer;
							int tmp57 = c->oPos;
							int tmp58 = (tmp57 + (int)1);
							Dynamic tmp59 = tmp56->o->__GetItem(tmp58);
							Dynamic tmp60 = tmp59;
							::openfl::_internal::renderer::DrawCommandBuffer tmp61 = c->buffer;
							int tmp62 = c->oPos;
							int tmp63 = (tmp62 + (int)2);
							Dynamic tmp64 = tmp61->o->__GetItem(tmp63);
							Dynamic tmp65 = tmp64;
							::openfl::_internal::renderer::DrawCommandBuffer tmp66 = c->buffer;
							int tmp67 = c->oPos;
							int tmp68 = (tmp67 + (int)3);
							Dynamic tmp69 = tmp66->o->__GetItem(tmp68);
							Dynamic tmp70 = tmp69;
							::openfl::_internal::renderer::DrawCommandBuffer tmp71 = c->buffer;
							int tmp72 = c->fPos;
							int tmp73 = (tmp72 + (int)1);
							Float tmp74 = tmp71->f->__get(tmp73);
							Float tmp75 = tmp74;
							tmp35->lineStyle(tmp40,tmp45,tmp50,tmp55,tmp60,tmp65,tmp70,tmp75);
						}
						;break;
						case (int)0: case (int)1: case (int)2: {
							::openfl::_internal::renderer::cairo::CairoGraphics_obj::endFill();
							::openfl::_internal::renderer::cairo::CairoGraphics_obj::endStroke();
							bool tmp34 = (type == ::openfl::_internal::renderer::DrawCommandType_obj::BEGIN_BITMAP_FILL);
							if ((tmp34)){
								::openfl::_internal::renderer::DrawCommandReader tmp35;
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
									tmp35 = data;
								}
								::openfl::_internal::renderer::DrawCommandReader c = tmp35;
								::openfl::_internal::renderer::DrawCommandBuffer tmp36 = ::openfl::_internal::renderer::cairo::CairoGraphics_obj::fillCommands;
								::openfl::_internal::renderer::DrawCommandBuffer tmp37 = c->buffer;
								int tmp38 = c->oPos;
								int tmp39 = tmp38;
								Dynamic tmp40 = tmp37->o->__GetItem(tmp39);
								::openfl::display::BitmapData tmp41 = ((::openfl::display::BitmapData)(tmp40));
								::openfl::_internal::renderer::DrawCommandBuffer tmp42 = c->buffer;
								int tmp43 = c->oPos;
								int tmp44 = (tmp43 + (int)1);
								Dynamic tmp45 = tmp42->o->__GetItem(tmp44);
								::openfl::geom::Matrix tmp46 = ((::openfl::geom::Matrix)(tmp45));
								::openfl::_internal::renderer::DrawCommandBuffer tmp47 = c->buffer;
								int tmp48 = c->bPos;
								int tmp49 = tmp48;
								bool tmp50 = tmp47->b->__get(tmp49);
								::openfl::_internal::renderer::DrawCommandBuffer tmp51 = c->buffer;
								int tmp52 = c->bPos;
								int tmp53 = (tmp52 + (int)1);
								bool tmp54 = tmp51->b->__get(tmp53);
								tmp36->beginBitmapFill(tmp41,tmp46,tmp50,tmp54);
								::openfl::_internal::renderer::DrawCommandBuffer tmp55 = ::openfl::_internal::renderer::cairo::CairoGraphics_obj::strokeCommands;
								::openfl::_internal::renderer::DrawCommandBuffer tmp56 = c->buffer;
								int tmp57 = c->oPos;
								int tmp58 = tmp57;
								Dynamic tmp59 = tmp56->o->__GetItem(tmp58);
								::openfl::display::BitmapData tmp60 = ((::openfl::display::BitmapData)(tmp59));
								::openfl::_internal::renderer::DrawCommandBuffer tmp61 = c->buffer;
								int tmp62 = c->oPos;
								int tmp63 = (tmp62 + (int)1);
								Dynamic tmp64 = tmp61->o->__GetItem(tmp63);
								::openfl::geom::Matrix tmp65 = ((::openfl::geom::Matrix)(tmp64));
								::openfl::_internal::renderer::DrawCommandBuffer tmp66 = c->buffer;
								int tmp67 = c->bPos;
								int tmp68 = tmp67;
								bool tmp69 = tmp66->b->__get(tmp68);
								::openfl::_internal::renderer::DrawCommandBuffer tmp70 = c->buffer;
								int tmp71 = c->bPos;
								int tmp72 = (tmp71 + (int)1);
								bool tmp73 = tmp70->b->__get(tmp72);
								tmp55->beginBitmapFill(tmp60,tmp65,tmp69,tmp73);
							}
							else{
								bool tmp35 = (type == ::openfl::_internal::renderer::DrawCommandType_obj::BEGIN_GRADIENT_FILL);
								if ((tmp35)){
									::openfl::_internal::renderer::DrawCommandReader tmp36;
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
										tmp36 = data;
									}
									::openfl::_internal::renderer::DrawCommandReader c = tmp36;
									::openfl::_internal::renderer::DrawCommandBuffer tmp37 = ::openfl::_internal::renderer::cairo::CairoGraphics_obj::fillCommands;
									::openfl::_internal::renderer::DrawCommandBuffer tmp38 = c->buffer;
									int tmp39 = c->oPos;
									int tmp40 = tmp39;
									Dynamic tmp41 = tmp38->o->__GetItem(tmp40);
									Dynamic tmp42 = tmp41;
									::openfl::_internal::renderer::DrawCommandBuffer tmp43 = c->buffer;
									int tmp44 = c->iiPos;
									int tmp45 = tmp44;
									::openfl::_internal::renderer::DrawCommandBuffer tmp46 = c->buffer;
									int tmp47 = c->ffPos;
									int tmp48 = tmp47;
									::openfl::_internal::renderer::DrawCommandBuffer tmp49 = c->buffer;
									int tmp50 = c->iiPos;
									int tmp51 = (tmp50 + (int)1);
									::openfl::_internal::renderer::DrawCommandBuffer tmp52 = c->buffer;
									int tmp53 = c->oPos;
									int tmp54 = (tmp53 + (int)1);
									Dynamic tmp55 = tmp52->o->__GetItem(tmp54);
									::openfl::geom::Matrix tmp56 = ((::openfl::geom::Matrix)(tmp55));
									::openfl::_internal::renderer::DrawCommandBuffer tmp57 = c->buffer;
									int tmp58 = c->oPos;
									int tmp59 = (tmp58 + (int)2);
									Dynamic tmp60 = tmp57->o->__GetItem(tmp59);
									Dynamic tmp61 = tmp60;
									::openfl::_internal::renderer::DrawCommandBuffer tmp62 = c->buffer;
									int tmp63 = c->oPos;
									int tmp64 = (tmp63 + (int)3);
									Dynamic tmp65 = tmp62->o->__GetItem(tmp64);
									Dynamic tmp66 = tmp65;
									::openfl::_internal::renderer::DrawCommandBuffer tmp67 = c->buffer;
									int tmp68 = c->fPos;
									int tmp69 = tmp68;
									Float tmp70 = tmp67->f->__get(tmp69);
									Float tmp71 = tmp70;
									tmp37->beginGradientFill(tmp42,tmp43->ii->__get(tmp45).StaticCast< Array< int > >(),tmp46->ff->__get(tmp48).StaticCast< Array< Float > >(),tmp49->ii->__get(tmp51).StaticCast< Array< int > >(),tmp56,tmp61,tmp66,tmp71);
									::openfl::_internal::renderer::DrawCommandBuffer tmp72 = ::openfl::_internal::renderer::cairo::CairoGraphics_obj::strokeCommands;
									::openfl::_internal::renderer::DrawCommandBuffer tmp73 = c->buffer;
									int tmp74 = c->oPos;
									int tmp75 = tmp74;
									Dynamic tmp76 = tmp73->o->__GetItem(tmp75);
									Dynamic tmp77 = tmp76;
									::openfl::_internal::renderer::DrawCommandBuffer tmp78 = c->buffer;
									int tmp79 = c->iiPos;
									int tmp80 = tmp79;
									::openfl::_internal::renderer::DrawCommandBuffer tmp81 = c->buffer;
									int tmp82 = c->ffPos;
									int tmp83 = tmp82;
									::openfl::_internal::renderer::DrawCommandBuffer tmp84 = c->buffer;
									int tmp85 = c->iiPos;
									int tmp86 = (tmp85 + (int)1);
									::openfl::_internal::renderer::DrawCommandBuffer tmp87 = c->buffer;
									int tmp88 = c->oPos;
									int tmp89 = (tmp88 + (int)1);
									Dynamic tmp90 = tmp87->o->__GetItem(tmp89);
									::openfl::geom::Matrix tmp91 = ((::openfl::geom::Matrix)(tmp90));
									::openfl::_internal::renderer::DrawCommandBuffer tmp92 = c->buffer;
									int tmp93 = c->oPos;
									int tmp94 = (tmp93 + (int)2);
									Dynamic tmp95 = tmp92->o->__GetItem(tmp94);
									Dynamic tmp96 = tmp95;
									::openfl::_internal::renderer::DrawCommandBuffer tmp97 = c->buffer;
									int tmp98 = c->oPos;
									int tmp99 = (tmp98 + (int)3);
									Dynamic tmp100 = tmp97->o->__GetItem(tmp99);
									Dynamic tmp101 = tmp100;
									::openfl::_internal::renderer::DrawCommandBuffer tmp102 = c->buffer;
									int tmp103 = c->fPos;
									int tmp104 = tmp103;
									Float tmp105 = tmp102->f->__get(tmp104);
									Float tmp106 = tmp105;
									tmp72->beginGradientFill(tmp77,tmp78->ii->__get(tmp80).StaticCast< Array< int > >(),tmp81->ff->__get(tmp83).StaticCast< Array< Float > >(),tmp84->ii->__get(tmp86).StaticCast< Array< int > >(),tmp91,tmp96,tmp101,tmp106);
								}
								else{
									::openfl::_internal::renderer::DrawCommandReader tmp36;
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
										tmp36 = data;
									}
									::openfl::_internal::renderer::DrawCommandReader c = tmp36;
									::openfl::_internal::renderer::DrawCommandBuffer tmp37 = ::openfl::_internal::renderer::cairo::CairoGraphics_obj::fillCommands;
									::openfl::_internal::renderer::DrawCommandBuffer tmp38 = c->buffer;
									int tmp39 = c->iPos;
									int tmp40 = tmp39;
									int tmp41 = tmp38->i->__get(tmp40);
									::openfl::_internal::renderer::DrawCommandBuffer tmp42 = c->buffer;
									int tmp43 = c->fPos;
									int tmp44 = tmp43;
									Float tmp45 = tmp42->f->__get(tmp44);
									tmp37->beginFill(tmp41,tmp45);
									::openfl::_internal::renderer::DrawCommandBuffer tmp46 = ::openfl::_internal::renderer::cairo::CairoGraphics_obj::strokeCommands;
									::openfl::_internal::renderer::DrawCommandBuffer tmp47 = c->buffer;
									int tmp48 = c->iPos;
									int tmp49 = tmp48;
									int tmp50 = tmp47->i->__get(tmp49);
									::openfl::_internal::renderer::DrawCommandBuffer tmp51 = c->buffer;
									int tmp52 = c->fPos;
									int tmp53 = tmp52;
									Float tmp54 = tmp51->f->__get(tmp53);
									tmp46->beginFill(tmp50,tmp54);
								}
							}
						}
						;break;
						case (int)5: {
							::openfl::_internal::renderer::DrawCommandReader tmp34;
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
								tmp34 = data;
							}
							::openfl::_internal::renderer::DrawCommandReader c = tmp34;
							::openfl::_internal::renderer::DrawCommandBuffer tmp35 = ::openfl::_internal::renderer::cairo::CairoGraphics_obj::fillCommands;
							::openfl::_internal::renderer::DrawCommandBuffer tmp36 = c->buffer;
							int tmp37 = c->fPos;
							int tmp38 = tmp37;
							Float tmp39 = tmp36->f->__get(tmp38);
							::openfl::_internal::renderer::DrawCommandBuffer tmp40 = c->buffer;
							int tmp41 = c->fPos;
							int tmp42 = (tmp41 + (int)1);
							Float tmp43 = tmp40->f->__get(tmp42);
							::openfl::_internal::renderer::DrawCommandBuffer tmp44 = c->buffer;
							int tmp45 = c->fPos;
							int tmp46 = (tmp45 + (int)2);
							Float tmp47 = tmp44->f->__get(tmp46);
							tmp35->drawCircle(tmp39,tmp43,tmp47);
							::openfl::_internal::renderer::DrawCommandBuffer tmp48 = ::openfl::_internal::renderer::cairo::CairoGraphics_obj::strokeCommands;
							::openfl::_internal::renderer::DrawCommandBuffer tmp49 = c->buffer;
							int tmp50 = c->fPos;
							int tmp51 = tmp50;
							Float tmp52 = tmp49->f->__get(tmp51);
							::openfl::_internal::renderer::DrawCommandBuffer tmp53 = c->buffer;
							int tmp54 = c->fPos;
							int tmp55 = (tmp54 + (int)1);
							Float tmp56 = tmp53->f->__get(tmp55);
							::openfl::_internal::renderer::DrawCommandBuffer tmp57 = c->buffer;
							int tmp58 = c->fPos;
							int tmp59 = (tmp58 + (int)2);
							Float tmp60 = tmp57->f->__get(tmp59);
							tmp48->drawCircle(tmp52,tmp56,tmp60);
						}
						;break;
						case (int)6: {
							::openfl::_internal::renderer::DrawCommandReader tmp34;
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
								tmp34 = data;
							}
							::openfl::_internal::renderer::DrawCommandReader c = tmp34;
							::openfl::_internal::renderer::DrawCommandBuffer tmp35 = ::openfl::_internal::renderer::cairo::CairoGraphics_obj::fillCommands;
							::openfl::_internal::renderer::DrawCommandBuffer tmp36 = c->buffer;
							int tmp37 = c->fPos;
							int tmp38 = tmp37;
							Float tmp39 = tmp36->f->__get(tmp38);
							::openfl::_internal::renderer::DrawCommandBuffer tmp40 = c->buffer;
							int tmp41 = c->fPos;
							int tmp42 = (tmp41 + (int)1);
							Float tmp43 = tmp40->f->__get(tmp42);
							::openfl::_internal::renderer::DrawCommandBuffer tmp44 = c->buffer;
							int tmp45 = c->fPos;
							int tmp46 = (tmp45 + (int)2);
							Float tmp47 = tmp44->f->__get(tmp46);
							::openfl::_internal::renderer::DrawCommandBuffer tmp48 = c->buffer;
							int tmp49 = c->fPos;
							int tmp50 = (tmp49 + (int)3);
							Float tmp51 = tmp48->f->__get(tmp50);
							tmp35->drawEllipse(tmp39,tmp43,tmp47,tmp51);
							::openfl::_internal::renderer::DrawCommandBuffer tmp52 = ::openfl::_internal::renderer::cairo::CairoGraphics_obj::strokeCommands;
							::openfl::_internal::renderer::DrawCommandBuffer tmp53 = c->buffer;
							int tmp54 = c->fPos;
							int tmp55 = tmp54;
							Float tmp56 = tmp53->f->__get(tmp55);
							::openfl::_internal::renderer::DrawCommandBuffer tmp57 = c->buffer;
							int tmp58 = c->fPos;
							int tmp59 = (tmp58 + (int)1);
							Float tmp60 = tmp57->f->__get(tmp59);
							::openfl::_internal::renderer::DrawCommandBuffer tmp61 = c->buffer;
							int tmp62 = c->fPos;
							int tmp63 = (tmp62 + (int)2);
							Float tmp64 = tmp61->f->__get(tmp63);
							::openfl::_internal::renderer::DrawCommandBuffer tmp65 = c->buffer;
							int tmp66 = c->fPos;
							int tmp67 = (tmp66 + (int)3);
							Float tmp68 = tmp65->f->__get(tmp67);
							tmp52->drawEllipse(tmp56,tmp60,tmp64,tmp68);
						}
						;break;
						case (int)7: {
							::openfl::_internal::renderer::DrawCommandReader tmp34;
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
								tmp34 = data;
							}
							::openfl::_internal::renderer::DrawCommandReader c = tmp34;
							::openfl::_internal::renderer::DrawCommandBuffer tmp35 = ::openfl::_internal::renderer::cairo::CairoGraphics_obj::fillCommands;
							::openfl::_internal::renderer::DrawCommandBuffer tmp36 = c->buffer;
							int tmp37 = c->fPos;
							int tmp38 = tmp37;
							Float tmp39 = tmp36->f->__get(tmp38);
							::openfl::_internal::renderer::DrawCommandBuffer tmp40 = c->buffer;
							int tmp41 = c->fPos;
							int tmp42 = (tmp41 + (int)1);
							Float tmp43 = tmp40->f->__get(tmp42);
							::openfl::_internal::renderer::DrawCommandBuffer tmp44 = c->buffer;
							int tmp45 = c->fPos;
							int tmp46 = (tmp45 + (int)2);
							Float tmp47 = tmp44->f->__get(tmp46);
							::openfl::_internal::renderer::DrawCommandBuffer tmp48 = c->buffer;
							int tmp49 = c->fPos;
							int tmp50 = (tmp49 + (int)3);
							Float tmp51 = tmp48->f->__get(tmp50);
							tmp35->drawRect(tmp39,tmp43,tmp47,tmp51);
							::openfl::_internal::renderer::DrawCommandBuffer tmp52 = ::openfl::_internal::renderer::cairo::CairoGraphics_obj::strokeCommands;
							::openfl::_internal::renderer::DrawCommandBuffer tmp53 = c->buffer;
							int tmp54 = c->fPos;
							int tmp55 = tmp54;
							Float tmp56 = tmp53->f->__get(tmp55);
							::openfl::_internal::renderer::DrawCommandBuffer tmp57 = c->buffer;
							int tmp58 = c->fPos;
							int tmp59 = (tmp58 + (int)1);
							Float tmp60 = tmp57->f->__get(tmp59);
							::openfl::_internal::renderer::DrawCommandBuffer tmp61 = c->buffer;
							int tmp62 = c->fPos;
							int tmp63 = (tmp62 + (int)2);
							Float tmp64 = tmp61->f->__get(tmp63);
							::openfl::_internal::renderer::DrawCommandBuffer tmp65 = c->buffer;
							int tmp66 = c->fPos;
							int tmp67 = (tmp66 + (int)3);
							Float tmp68 = tmp65->f->__get(tmp67);
							tmp52->drawRect(tmp56,tmp60,tmp64,tmp68);
						}
						;break;
						case (int)8: {
							::openfl::_internal::renderer::DrawCommandReader tmp34;
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
								tmp34 = data;
							}
							::openfl::_internal::renderer::DrawCommandReader c = tmp34;
							::openfl::_internal::renderer::DrawCommandBuffer tmp35 = ::openfl::_internal::renderer::cairo::CairoGraphics_obj::fillCommands;
							::openfl::_internal::renderer::DrawCommandBuffer tmp36 = c->buffer;
							int tmp37 = c->fPos;
							int tmp38 = tmp37;
							Float tmp39 = tmp36->f->__get(tmp38);
							::openfl::_internal::renderer::DrawCommandBuffer tmp40 = c->buffer;
							int tmp41 = c->fPos;
							int tmp42 = (tmp41 + (int)1);
							Float tmp43 = tmp40->f->__get(tmp42);
							::openfl::_internal::renderer::DrawCommandBuffer tmp44 = c->buffer;
							int tmp45 = c->fPos;
							int tmp46 = (tmp45 + (int)2);
							Float tmp47 = tmp44->f->__get(tmp46);
							::openfl::_internal::renderer::DrawCommandBuffer tmp48 = c->buffer;
							int tmp49 = c->fPos;
							int tmp50 = (tmp49 + (int)3);
							Float tmp51 = tmp48->f->__get(tmp50);
							::openfl::_internal::renderer::DrawCommandBuffer tmp52 = c->buffer;
							int tmp53 = c->fPos;
							int tmp54 = (tmp53 + (int)4);
							Float tmp55 = tmp52->f->__get(tmp54);
							::openfl::_internal::renderer::DrawCommandBuffer tmp56 = c->buffer;
							int tmp57 = c->oPos;
							int tmp58 = tmp57;
							Dynamic tmp59 = tmp56->o->__GetItem(tmp58);
							Dynamic tmp60 = tmp59;
							tmp35->drawRoundRect(tmp39,tmp43,tmp47,tmp51,tmp55,tmp60);
							::openfl::_internal::renderer::DrawCommandBuffer tmp61 = ::openfl::_internal::renderer::cairo::CairoGraphics_obj::strokeCommands;
							::openfl::_internal::renderer::DrawCommandBuffer tmp62 = c->buffer;
							int tmp63 = c->fPos;
							int tmp64 = tmp63;
							Float tmp65 = tmp62->f->__get(tmp64);
							::openfl::_internal::renderer::DrawCommandBuffer tmp66 = c->buffer;
							int tmp67 = c->fPos;
							int tmp68 = (tmp67 + (int)1);
							Float tmp69 = tmp66->f->__get(tmp68);
							::openfl::_internal::renderer::DrawCommandBuffer tmp70 = c->buffer;
							int tmp71 = c->fPos;
							int tmp72 = (tmp71 + (int)2);
							Float tmp73 = tmp70->f->__get(tmp72);
							::openfl::_internal::renderer::DrawCommandBuffer tmp74 = c->buffer;
							int tmp75 = c->fPos;
							int tmp76 = (tmp75 + (int)3);
							Float tmp77 = tmp74->f->__get(tmp76);
							::openfl::_internal::renderer::DrawCommandBuffer tmp78 = c->buffer;
							int tmp79 = c->fPos;
							int tmp80 = (tmp79 + (int)4);
							Float tmp81 = tmp78->f->__get(tmp80);
							::openfl::_internal::renderer::DrawCommandBuffer tmp82 = c->buffer;
							int tmp83 = c->oPos;
							int tmp84 = tmp83;
							Dynamic tmp85 = tmp82->o->__GetItem(tmp84);
							Dynamic tmp86 = tmp85;
							tmp61->drawRoundRect(tmp65,tmp69,tmp73,tmp77,tmp81,tmp86);
						}
						;break;
						case (int)10: {
							::openfl::_internal::renderer::DrawCommandReader tmp34;
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
								data->prev = ::openfl::_internal::renderer::DrawCommandType_obj::DRAW_TRIANGLES;
								tmp34 = data;
							}
							::openfl::_internal::renderer::DrawCommandReader c = tmp34;
							::openfl::_internal::renderer::DrawCommandBuffer tmp35 = ::openfl::_internal::renderer::cairo::CairoGraphics_obj::fillCommands;
							::openfl::_internal::renderer::DrawCommandBuffer tmp36 = c->buffer;
							int tmp37 = c->oPos;
							int tmp38 = tmp37;
							Dynamic tmp39 = tmp36->o->__GetItem(tmp38);
							::openfl::_Vector::FloatVector tmp40 = ((::openfl::_Vector::FloatVector)(tmp39));
							::openfl::_internal::renderer::DrawCommandBuffer tmp41 = c->buffer;
							int tmp42 = c->oPos;
							int tmp43 = (tmp42 + (int)1);
							Dynamic tmp44 = tmp41->o->__GetItem(tmp43);
							::openfl::_Vector::IntVector tmp45 = ((::openfl::_Vector::IntVector)(tmp44));
							::openfl::_internal::renderer::DrawCommandBuffer tmp46 = c->buffer;
							int tmp47 = c->oPos;
							int tmp48 = (tmp47 + (int)2);
							Dynamic tmp49 = tmp46->o->__GetItem(tmp48);
							::openfl::_Vector::FloatVector tmp50 = ((::openfl::_Vector::FloatVector)(tmp49));
							::openfl::_internal::renderer::DrawCommandBuffer tmp51 = c->buffer;
							int tmp52 = c->oPos;
							int tmp53 = (tmp52 + (int)3);
							Dynamic tmp54 = tmp51->o->__GetItem(tmp53);
							Dynamic tmp55 = tmp54;
							tmp35->drawTriangles(tmp40,tmp45,tmp50,tmp55);
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
			::openfl::_internal::renderer::DrawCommandBuffer tmp31 = ::openfl::_internal::renderer::cairo::CairoGraphics_obj::fillCommands;
			int tmp32 = tmp31->get_length();
			bool tmp33 = (tmp32 > (int)0);
			if ((tmp33)){
				::openfl::_internal::renderer::cairo::CairoGraphics_obj::endFill();
			}
			::openfl::_internal::renderer::DrawCommandBuffer tmp34 = ::openfl::_internal::renderer::cairo::CairoGraphics_obj::strokeCommands;
			int tmp35 = tmp34->get_length();
			bool tmp36 = (tmp35 > (int)0);
			if ((tmp36)){
				::openfl::_internal::renderer::cairo::CairoGraphics_obj::endStroke();
			}
			data->destroy();
			::lime::graphics::Image tmp37 = graphics->__bitmap->image;
			tmp37->dirty = true;
			::lime::graphics::Image tmp38 = graphics->__bitmap->image;
			(tmp38->version)++;
		}
		graphics->set___dirty(false);
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC3(CairoGraphics_obj,render,(void))

Void CairoGraphics_obj::renderMask( ::openfl::display::Graphics graphics,::openfl::_internal::renderer::RenderSession renderSession){
{
		int tmp = graphics->__commands->get_length();
		bool tmp1 = (tmp != (int)0);
		if ((tmp1)){
			::lime::graphics::cairo::Cairo cairo = renderSession->cairo;
			Float positionX = ((Float)0.0);
			Float positionY = ((Float)0.0);
			int offsetX = (int)0;
			int offsetY = (int)0;
			::openfl::_internal::renderer::DrawCommandReader tmp2 = ::openfl::_internal::renderer::DrawCommandReader_obj::__new(graphics->__commands);
			::openfl::_internal::renderer::DrawCommandReader data = tmp2;
			{
				int _g = (int)0;
				Array< ::Dynamic > _g1 = graphics->__commands->types;
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
							int tmp11 = offsetX;
							Float tmp12 = (tmp10 - tmp11);
							::openfl::_internal::renderer::DrawCommandBuffer tmp13 = c->buffer;
							int tmp14 = c->fPos;
							int tmp15 = (tmp14 + (int)1);
							Float tmp16 = tmp13->f->__get(tmp15);
							int tmp17 = offsetY;
							Float tmp18 = (tmp16 - tmp17);
							::openfl::_internal::renderer::DrawCommandBuffer tmp19 = c->buffer;
							int tmp20 = c->fPos;
							int tmp21 = (tmp20 + (int)2);
							Float tmp22 = tmp19->f->__get(tmp21);
							int tmp23 = offsetX;
							Float tmp24 = (tmp22 - tmp23);
							::openfl::_internal::renderer::DrawCommandBuffer tmp25 = c->buffer;
							int tmp26 = c->fPos;
							int tmp27 = (tmp26 + (int)3);
							Float tmp28 = tmp25->f->__get(tmp27);
							int tmp29 = offsetY;
							Float tmp30 = (tmp28 - tmp29);
							::openfl::_internal::renderer::DrawCommandBuffer tmp31 = c->buffer;
							int tmp32 = c->fPos;
							int tmp33 = (tmp32 + (int)4);
							Float tmp34 = tmp31->f->__get(tmp33);
							int tmp35 = offsetX;
							Float tmp36 = (tmp34 - tmp35);
							::openfl::_internal::renderer::DrawCommandBuffer tmp37 = c->buffer;
							int tmp38 = c->fPos;
							int tmp39 = (tmp38 + (int)5);
							Float tmp40 = tmp37->f->__get(tmp39);
							int tmp41 = offsetY;
							Float tmp42 = (tmp40 - tmp41);
							cairo->curveTo(tmp12,tmp18,tmp24,tmp30,tmp36,tmp42);
							::openfl::_internal::renderer::DrawCommandBuffer tmp43 = c->buffer;
							int tmp44 = c->fPos;
							int tmp45 = (tmp44 + (int)4);
							Float tmp46 = tmp43->f->__get(tmp45);
							positionX = tmp46;
							::openfl::_internal::renderer::DrawCommandBuffer tmp47 = c->buffer;
							int tmp48 = c->fPos;
							int tmp49 = (tmp48 + (int)4);
							Float tmp50 = tmp47->f->__get(tmp49);
							positionY = tmp50;
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
							int tmp11 = offsetX;
							Float tmp12 = (tmp10 - tmp11);
							::openfl::_internal::renderer::DrawCommandBuffer tmp13 = c->buffer;
							int tmp14 = c->fPos;
							int tmp15 = (tmp14 + (int)1);
							Float tmp16 = tmp13->f->__get(tmp15);
							int tmp17 = offsetY;
							Float tmp18 = (tmp16 - tmp17);
							::openfl::_internal::renderer::DrawCommandBuffer tmp19 = c->buffer;
							int tmp20 = c->fPos;
							int tmp21 = (tmp20 + (int)2);
							Float tmp22 = tmp19->f->__get(tmp21);
							int tmp23 = offsetX;
							Float tmp24 = (tmp22 - tmp23);
							::openfl::_internal::renderer::DrawCommandBuffer tmp25 = c->buffer;
							int tmp26 = c->fPos;
							int tmp27 = (tmp26 + (int)3);
							Float tmp28 = tmp25->f->__get(tmp27);
							int tmp29 = offsetY;
							Float tmp30 = (tmp28 - tmp29);
							::openfl::_internal::renderer::cairo::CairoGraphics_obj::quadraticCurveTo(tmp12,tmp18,tmp24,tmp30);
							::openfl::_internal::renderer::DrawCommandBuffer tmp31 = c->buffer;
							int tmp32 = c->fPos;
							int tmp33 = (tmp32 + (int)2);
							Float tmp34 = tmp31->f->__get(tmp33);
							positionX = tmp34;
							::openfl::_internal::renderer::DrawCommandBuffer tmp35 = c->buffer;
							int tmp36 = c->fPos;
							int tmp37 = (tmp36 + (int)3);
							Float tmp38 = tmp35->f->__get(tmp37);
							positionY = tmp38;
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
							int tmp11 = offsetX;
							Float tmp12 = (tmp10 - tmp11);
							::openfl::_internal::renderer::DrawCommandBuffer tmp13 = c->buffer;
							int tmp14 = c->fPos;
							int tmp15 = (tmp14 + (int)1);
							Float tmp16 = tmp13->f->__get(tmp15);
							int tmp17 = offsetY;
							Float tmp18 = (tmp16 - tmp17);
							::openfl::_internal::renderer::DrawCommandBuffer tmp19 = c->buffer;
							int tmp20 = c->fPos;
							int tmp21 = (tmp20 + (int)2);
							Float tmp22 = tmp19->f->__get(tmp21);
							Float tmp23 = ::Math_obj::PI;
							Float tmp24 = (tmp23 * (int)2);
							cairo->arc(tmp12,tmp18,tmp22,(int)0,tmp24);
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
							Float x = tmp10;
							::openfl::_internal::renderer::DrawCommandBuffer tmp11 = c->buffer;
							int tmp12 = c->fPos;
							int tmp13 = (tmp12 + (int)1);
							Float tmp14 = tmp11->f->__get(tmp13);
							Float y = tmp14;
							::openfl::_internal::renderer::DrawCommandBuffer tmp15 = c->buffer;
							int tmp16 = c->fPos;
							int tmp17 = (tmp16 + (int)2);
							Float tmp18 = tmp15->f->__get(tmp17);
							Float width = tmp18;
							::openfl::_internal::renderer::DrawCommandBuffer tmp19 = c->buffer;
							int tmp20 = c->fPos;
							int tmp21 = (tmp20 + (int)3);
							Float tmp22 = tmp19->f->__get(tmp21);
							Float height = tmp22;
							hx::SubEq(x,offsetX);
							hx::SubEq(y,offsetY);
							Float kappa = ((Float).5522848);
							Float tmp23 = (Float(width) / Float((int)2));
							Float tmp24 = kappa;
							Float tmp25 = (tmp23 * tmp24);
							Float ox = tmp25;
							Float tmp26 = (Float(height) / Float((int)2));
							Float tmp27 = kappa;
							Float tmp28 = (tmp26 * tmp27);
							Float oy = tmp28;
							Float tmp29 = (x + width);
							Float xe = tmp29;
							Float tmp30 = (y + height);
							Float ye = tmp30;
							Float tmp31 = x;
							Float tmp32 = (Float(width) / Float((int)2));
							Float tmp33 = (tmp31 + tmp32);
							Float xm = tmp33;
							Float tmp34 = y;
							Float tmp35 = (Float(height) / Float((int)2));
							Float tmp36 = (tmp34 + tmp35);
							Float ym = tmp36;
							Float tmp37 = x;
							Float tmp38 = ym;
							cairo->moveTo(tmp37,tmp38);
							Float tmp39 = x;
							Float tmp40 = (ym - oy);
							Float tmp41 = (xm - ox);
							Float tmp42 = y;
							Float tmp43 = xm;
							Float tmp44 = y;
							cairo->curveTo(tmp39,tmp40,tmp41,tmp42,tmp43,tmp44);
							Float tmp45 = (xm + ox);
							Float tmp46 = y;
							Float tmp47 = xe;
							Float tmp48 = (ym - oy);
							Float tmp49 = xe;
							Float tmp50 = ym;
							cairo->curveTo(tmp45,tmp46,tmp47,tmp48,tmp49,tmp50);
							Float tmp51 = xe;
							Float tmp52 = (ym + oy);
							Float tmp53 = (xm + ox);
							Float tmp54 = ye;
							Float tmp55 = xm;
							Float tmp56 = ye;
							cairo->curveTo(tmp51,tmp52,tmp53,tmp54,tmp55,tmp56);
							Float tmp57 = (xm - ox);
							Float tmp58 = ye;
							Float tmp59 = x;
							Float tmp60 = (ym + oy);
							Float tmp61 = x;
							Float tmp62 = ym;
							cairo->curveTo(tmp57,tmp58,tmp59,tmp60,tmp61,tmp62);
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
							int tmp11 = offsetX;
							Float tmp12 = (tmp10 - tmp11);
							::openfl::_internal::renderer::DrawCommandBuffer tmp13 = c->buffer;
							int tmp14 = c->fPos;
							int tmp15 = (tmp14 + (int)1);
							Float tmp16 = tmp13->f->__get(tmp15);
							int tmp17 = offsetY;
							Float tmp18 = (tmp16 - tmp17);
							::openfl::_internal::renderer::DrawCommandBuffer tmp19 = c->buffer;
							int tmp20 = c->fPos;
							int tmp21 = (tmp20 + (int)2);
							Float tmp22 = tmp19->f->__get(tmp21);
							::openfl::_internal::renderer::DrawCommandBuffer tmp23 = c->buffer;
							int tmp24 = c->fPos;
							int tmp25 = (tmp24 + (int)3);
							Float tmp26 = tmp23->f->__get(tmp25);
							cairo->rectangle(tmp12,tmp18,tmp22,tmp26);
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
							int tmp11 = offsetX;
							Float tmp12 = (tmp10 - tmp11);
							::openfl::_internal::renderer::DrawCommandBuffer tmp13 = c->buffer;
							int tmp14 = c->fPos;
							int tmp15 = (tmp14 + (int)1);
							Float tmp16 = tmp13->f->__get(tmp15);
							int tmp17 = offsetY;
							Float tmp18 = (tmp16 - tmp17);
							::openfl::_internal::renderer::DrawCommandBuffer tmp19 = c->buffer;
							int tmp20 = c->fPos;
							int tmp21 = (tmp20 + (int)2);
							Float tmp22 = tmp19->f->__get(tmp21);
							::openfl::_internal::renderer::DrawCommandBuffer tmp23 = c->buffer;
							int tmp24 = c->fPos;
							int tmp25 = (tmp24 + (int)3);
							Float tmp26 = tmp23->f->__get(tmp25);
							::openfl::_internal::renderer::DrawCommandBuffer tmp27 = c->buffer;
							int tmp28 = c->fPos;
							int tmp29 = (tmp28 + (int)4);
							Float tmp30 = tmp27->f->__get(tmp29);
							::openfl::_internal::renderer::DrawCommandBuffer tmp31 = c->buffer;
							int tmp32 = c->oPos;
							int tmp33 = tmp32;
							Dynamic tmp34 = tmp31->o->__GetItem(tmp33);
							Dynamic tmp35 = tmp34;
							::openfl::_internal::renderer::cairo::CairoGraphics_obj::drawRoundRect(tmp12,tmp18,tmp22,tmp26,tmp30,tmp35);
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
							int tmp11 = offsetX;
							Float tmp12 = (tmp10 - tmp11);
							::openfl::_internal::renderer::DrawCommandBuffer tmp13 = c->buffer;
							int tmp14 = c->fPos;
							int tmp15 = (tmp14 + (int)1);
							Float tmp16 = tmp13->f->__get(tmp15);
							int tmp17 = offsetY;
							Float tmp18 = (tmp16 - tmp17);
							cairo->lineTo(tmp12,tmp18);
							::openfl::_internal::renderer::DrawCommandBuffer tmp19 = c->buffer;
							int tmp20 = c->fPos;
							int tmp21 = tmp20;
							Float tmp22 = tmp19->f->__get(tmp21);
							positionX = tmp22;
							::openfl::_internal::renderer::DrawCommandBuffer tmp23 = c->buffer;
							int tmp24 = c->fPos;
							int tmp25 = (tmp24 + (int)1);
							Float tmp26 = tmp23->f->__get(tmp25);
							positionY = tmp26;
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
							int tmp11 = offsetX;
							Float tmp12 = (tmp10 - tmp11);
							::openfl::_internal::renderer::DrawCommandBuffer tmp13 = c->buffer;
							int tmp14 = c->fPos;
							int tmp15 = (tmp14 + (int)1);
							Float tmp16 = tmp13->f->__get(tmp15);
							int tmp17 = offsetY;
							Float tmp18 = (tmp16 - tmp17);
							cairo->moveTo(tmp12,tmp18);
							::openfl::_internal::renderer::DrawCommandBuffer tmp19 = c->buffer;
							int tmp20 = c->fPos;
							int tmp21 = tmp20;
							Float tmp22 = tmp19->f->__get(tmp21);
							positionX = tmp22;
							::openfl::_internal::renderer::DrawCommandBuffer tmp23 = c->buffer;
							int tmp24 = c->fPos;
							int tmp25 = (tmp24 + (int)1);
							Float tmp26 = tmp23->f->__get(tmp25);
							positionY = tmp26;
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
			data->destroy();
		}
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(CairoGraphics_obj,renderMask,(void))


CairoGraphics_obj::CairoGraphics_obj()
{
}

bool CairoGraphics_obj::__GetStatic(const ::String &inName, Dynamic &outValue, hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"SIN45") ) { outValue = SIN45; return true;  }
		if (HX_FIELD_EQ(inName,"TAN22") ) { outValue = TAN22; return true;  }
		if (HX_FIELD_EQ(inName,"cairo") ) { outValue = cairo; return true;  }
		if (HX_FIELD_EQ(inName,"isCCW") ) { outValue = isCCW_dyn(); return true;  }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"bounds") ) { outValue = bounds; return true;  }
		if (HX_FIELD_EQ(inName,"render") ) { outValue = render_dyn(); return true;  }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"hasFill") ) { outValue = hasFill; return true;  }
		if (HX_FIELD_EQ(inName,"endFill") ) { outValue = endFill_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"hitTest") ) { outValue = hitTest_dyn(); return true;  }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"graphics") ) { outValue = graphics; return true;  }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"hasStroke") ) { outValue = hasStroke; return true;  }
		if (HX_FIELD_EQ(inName,"closePath") ) { outValue = closePath_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"endStroke") ) { outValue = endStroke_dyn(); return true;  }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"bitmapFill") ) { outValue = bitmapFill; return true;  }
		if (HX_FIELD_EQ(inName,"hitTesting") ) { outValue = hitTesting; return true;  }
		if (HX_FIELD_EQ(inName,"renderMask") ) { outValue = renderMask_dyn(); return true;  }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"fillPattern") ) { outValue = fillPattern; return true;  }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"bitmapRepeat") ) { outValue = bitmapRepeat; return true;  }
		if (HX_FIELD_EQ(inName,"fillCommands") ) { outValue = fillCommands; return true;  }
		if (HX_FIELD_EQ(inName,"normalizeUVT") ) { outValue = normalizeUVT_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"playCommands") ) { outValue = playCommands_dyn(); return true;  }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"pendingMatrix") ) { outValue = pendingMatrix; return true;  }
		if (HX_FIELD_EQ(inName,"strokePattern") ) { outValue = strokePattern; return true;  }
		if (HX_FIELD_EQ(inName,"drawRoundRect") ) { outValue = drawRoundRect_dyn(); return true;  }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"allowSmoothing") ) { outValue = allowSmoothing; return true;  }
		if (HX_FIELD_EQ(inName,"strokeCommands") ) { outValue = strokeCommands; return true;  }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"quadraticCurveTo") ) { outValue = quadraticCurveTo_dyn(); return true;  }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"fillPatternMatrix") ) { outValue = fillPatternMatrix; return true;  }
		break;
	case 18:
		if (HX_FIELD_EQ(inName,"createImagePattern") ) { outValue = createImagePattern_dyn(); return true;  }
		break;
	case 20:
		if (HX_FIELD_EQ(inName,"inversePendingMatrix") ) { outValue = inversePendingMatrix; return true;  }
		break;
	case 21:
		if (HX_FIELD_EQ(inName,"createGradientPattern") ) { outValue = createGradientPattern_dyn(); return true;  }
	}
	return false;
}

bool CairoGraphics_obj::__SetStatic(const ::String &inName,Dynamic &ioValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"SIN45") ) { SIN45=ioValue.Cast< Float >(); return true; }
		if (HX_FIELD_EQ(inName,"TAN22") ) { TAN22=ioValue.Cast< Float >(); return true; }
		if (HX_FIELD_EQ(inName,"cairo") ) { cairo=ioValue.Cast< ::lime::graphics::cairo::Cairo >(); return true; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"bounds") ) { bounds=ioValue.Cast< ::openfl::geom::Rectangle >(); return true; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"hasFill") ) { hasFill=ioValue.Cast< bool >(); return true; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"graphics") ) { graphics=ioValue.Cast< ::openfl::display::Graphics >(); return true; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"hasStroke") ) { hasStroke=ioValue.Cast< bool >(); return true; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"bitmapFill") ) { bitmapFill=ioValue.Cast< ::openfl::display::BitmapData >(); return true; }
		if (HX_FIELD_EQ(inName,"hitTesting") ) { hitTesting=ioValue.Cast< bool >(); return true; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"fillPattern") ) { fillPattern=ioValue.Cast< Dynamic >(); return true; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"bitmapRepeat") ) { bitmapRepeat=ioValue.Cast< bool >(); return true; }
		if (HX_FIELD_EQ(inName,"fillCommands") ) { fillCommands=ioValue.Cast< ::openfl::_internal::renderer::DrawCommandBuffer >(); return true; }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"pendingMatrix") ) { pendingMatrix=ioValue.Cast< ::openfl::geom::Matrix >(); return true; }
		if (HX_FIELD_EQ(inName,"strokePattern") ) { strokePattern=ioValue.Cast< Dynamic >(); return true; }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"allowSmoothing") ) { allowSmoothing=ioValue.Cast< bool >(); return true; }
		if (HX_FIELD_EQ(inName,"strokeCommands") ) { strokeCommands=ioValue.Cast< ::openfl::_internal::renderer::DrawCommandBuffer >(); return true; }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"fillPatternMatrix") ) { fillPatternMatrix=ioValue.Cast< ::openfl::geom::Matrix >(); return true; }
		break;
	case 20:
		if (HX_FIELD_EQ(inName,"inversePendingMatrix") ) { inversePendingMatrix=ioValue.Cast< ::openfl::geom::Matrix >(); return true; }
	}
	return false;
}

#if HXCPP_SCRIPTABLE
static hx::StorageInfo *sMemberStorageInfo = 0;
static hx::StaticInfo sStaticStorageInfo[] = {
	{hx::fsFloat,(void *) &CairoGraphics_obj::SIN45,HX_HCSTRING("SIN45","\x79","\x16","\xbe","\xfa")},
	{hx::fsFloat,(void *) &CairoGraphics_obj::TAN22,HX_HCSTRING("TAN22","\x41","\xf4","\xda","\x88")},
	{hx::fsBool,(void *) &CairoGraphics_obj::allowSmoothing,HX_HCSTRING("allowSmoothing","\xab","\xb7","\x66","\x68")},
	{hx::fsObject /*::openfl::display::BitmapData*/ ,(void *) &CairoGraphics_obj::bitmapFill,HX_HCSTRING("bitmapFill","\x12","\x2e","\x19","\x35")},
	{hx::fsBool,(void *) &CairoGraphics_obj::bitmapRepeat,HX_HCSTRING("bitmapRepeat","\xaa","\x38","\x9c","\x11")},
	{hx::fsObject /*::openfl::geom::Rectangle*/ ,(void *) &CairoGraphics_obj::bounds,HX_HCSTRING("bounds","\x75","\x86","\x1d","\x66")},
	{hx::fsObject /*::lime::graphics::cairo::Cairo*/ ,(void *) &CairoGraphics_obj::cairo,HX_HCSTRING("cairo","\x88","\x30","\x19","\x41")},
	{hx::fsObject /*::openfl::_internal::renderer::DrawCommandBuffer*/ ,(void *) &CairoGraphics_obj::fillCommands,HX_HCSTRING("fillCommands","\x6b","\xf6","\xc9","\xc2")},
	{hx::fsObject /*Dynamic*/ ,(void *) &CairoGraphics_obj::fillPattern,HX_HCSTRING("fillPattern","\x0d","\x86","\x12","\x35")},
	{hx::fsObject /*::openfl::geom::Matrix*/ ,(void *) &CairoGraphics_obj::fillPatternMatrix,HX_HCSTRING("fillPatternMatrix","\x2e","\xb8","\xae","\x97")},
	{hx::fsObject /*::openfl::display::Graphics*/ ,(void *) &CairoGraphics_obj::graphics,HX_HCSTRING("graphics","\xcb","\xf8","\x67","\x12")},
	{hx::fsBool,(void *) &CairoGraphics_obj::hasFill,HX_HCSTRING("hasFill","\xfd","\xee","\xff","\x12")},
	{hx::fsBool,(void *) &CairoGraphics_obj::hasStroke,HX_HCSTRING("hasStroke","\xb2","\x66","\x1d","\x52")},
	{hx::fsBool,(void *) &CairoGraphics_obj::hitTesting,HX_HCSTRING("hitTesting","\xbd","\x65","\x48","\x19")},
	{hx::fsObject /*::openfl::geom::Matrix*/ ,(void *) &CairoGraphics_obj::inversePendingMatrix,HX_HCSTRING("inversePendingMatrix","\x28","\x14","\x8c","\xbb")},
	{hx::fsObject /*::openfl::geom::Matrix*/ ,(void *) &CairoGraphics_obj::pendingMatrix,HX_HCSTRING("pendingMatrix","\xf8","\x9d","\x96","\xb5")},
	{hx::fsObject /*::openfl::_internal::renderer::DrawCommandBuffer*/ ,(void *) &CairoGraphics_obj::strokeCommands,HX_HCSTRING("strokeCommands","\xa0","\x98","\x2a","\x67")},
	{hx::fsObject /*Dynamic*/ ,(void *) &CairoGraphics_obj::strokePattern,HX_HCSTRING("strokePattern","\x78","\xe1","\x21","\x7e")},
	{ hx::fsUnknown, 0, null()}
};
#endif

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(CairoGraphics_obj::__mClass,"__mClass");
	HX_MARK_MEMBER_NAME(CairoGraphics_obj::SIN45,"SIN45");
	HX_MARK_MEMBER_NAME(CairoGraphics_obj::TAN22,"TAN22");
	HX_MARK_MEMBER_NAME(CairoGraphics_obj::allowSmoothing,"allowSmoothing");
	HX_MARK_MEMBER_NAME(CairoGraphics_obj::bitmapFill,"bitmapFill");
	HX_MARK_MEMBER_NAME(CairoGraphics_obj::bitmapRepeat,"bitmapRepeat");
	HX_MARK_MEMBER_NAME(CairoGraphics_obj::bounds,"bounds");
	HX_MARK_MEMBER_NAME(CairoGraphics_obj::cairo,"cairo");
	HX_MARK_MEMBER_NAME(CairoGraphics_obj::fillCommands,"fillCommands");
	HX_MARK_MEMBER_NAME(CairoGraphics_obj::fillPattern,"fillPattern");
	HX_MARK_MEMBER_NAME(CairoGraphics_obj::fillPatternMatrix,"fillPatternMatrix");
	HX_MARK_MEMBER_NAME(CairoGraphics_obj::graphics,"graphics");
	HX_MARK_MEMBER_NAME(CairoGraphics_obj::hasFill,"hasFill");
	HX_MARK_MEMBER_NAME(CairoGraphics_obj::hasStroke,"hasStroke");
	HX_MARK_MEMBER_NAME(CairoGraphics_obj::hitTesting,"hitTesting");
	HX_MARK_MEMBER_NAME(CairoGraphics_obj::inversePendingMatrix,"inversePendingMatrix");
	HX_MARK_MEMBER_NAME(CairoGraphics_obj::pendingMatrix,"pendingMatrix");
	HX_MARK_MEMBER_NAME(CairoGraphics_obj::strokeCommands,"strokeCommands");
	HX_MARK_MEMBER_NAME(CairoGraphics_obj::strokePattern,"strokePattern");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(CairoGraphics_obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(CairoGraphics_obj::SIN45,"SIN45");
	HX_VISIT_MEMBER_NAME(CairoGraphics_obj::TAN22,"TAN22");
	HX_VISIT_MEMBER_NAME(CairoGraphics_obj::allowSmoothing,"allowSmoothing");
	HX_VISIT_MEMBER_NAME(CairoGraphics_obj::bitmapFill,"bitmapFill");
	HX_VISIT_MEMBER_NAME(CairoGraphics_obj::bitmapRepeat,"bitmapRepeat");
	HX_VISIT_MEMBER_NAME(CairoGraphics_obj::bounds,"bounds");
	HX_VISIT_MEMBER_NAME(CairoGraphics_obj::cairo,"cairo");
	HX_VISIT_MEMBER_NAME(CairoGraphics_obj::fillCommands,"fillCommands");
	HX_VISIT_MEMBER_NAME(CairoGraphics_obj::fillPattern,"fillPattern");
	HX_VISIT_MEMBER_NAME(CairoGraphics_obj::fillPatternMatrix,"fillPatternMatrix");
	HX_VISIT_MEMBER_NAME(CairoGraphics_obj::graphics,"graphics");
	HX_VISIT_MEMBER_NAME(CairoGraphics_obj::hasFill,"hasFill");
	HX_VISIT_MEMBER_NAME(CairoGraphics_obj::hasStroke,"hasStroke");
	HX_VISIT_MEMBER_NAME(CairoGraphics_obj::hitTesting,"hitTesting");
	HX_VISIT_MEMBER_NAME(CairoGraphics_obj::inversePendingMatrix,"inversePendingMatrix");
	HX_VISIT_MEMBER_NAME(CairoGraphics_obj::pendingMatrix,"pendingMatrix");
	HX_VISIT_MEMBER_NAME(CairoGraphics_obj::strokeCommands,"strokeCommands");
	HX_VISIT_MEMBER_NAME(CairoGraphics_obj::strokePattern,"strokePattern");
};

#endif

hx::Class CairoGraphics_obj::__mClass;

static ::String sStaticFields[] = {
	HX_HCSTRING("SIN45","\x79","\x16","\xbe","\xfa"),
	HX_HCSTRING("TAN22","\x41","\xf4","\xda","\x88"),
	HX_HCSTRING("allowSmoothing","\xab","\xb7","\x66","\x68"),
	HX_HCSTRING("bitmapFill","\x12","\x2e","\x19","\x35"),
	HX_HCSTRING("bitmapRepeat","\xaa","\x38","\x9c","\x11"),
	HX_HCSTRING("bounds","\x75","\x86","\x1d","\x66"),
	HX_HCSTRING("cairo","\x88","\x30","\x19","\x41"),
	HX_HCSTRING("fillCommands","\x6b","\xf6","\xc9","\xc2"),
	HX_HCSTRING("fillPattern","\x0d","\x86","\x12","\x35"),
	HX_HCSTRING("fillPatternMatrix","\x2e","\xb8","\xae","\x97"),
	HX_HCSTRING("graphics","\xcb","\xf8","\x67","\x12"),
	HX_HCSTRING("hasFill","\xfd","\xee","\xff","\x12"),
	HX_HCSTRING("hasStroke","\xb2","\x66","\x1d","\x52"),
	HX_HCSTRING("hitTesting","\xbd","\x65","\x48","\x19"),
	HX_HCSTRING("inversePendingMatrix","\x28","\x14","\x8c","\xbb"),
	HX_HCSTRING("pendingMatrix","\xf8","\x9d","\x96","\xb5"),
	HX_HCSTRING("strokeCommands","\xa0","\x98","\x2a","\x67"),
	HX_HCSTRING("strokePattern","\x78","\xe1","\x21","\x7e"),
	HX_HCSTRING("closePath","\x7d","\x65","\x20","\x14"),
	HX_HCSTRING("createGradientPattern","\xa4","\xee","\x44","\xf6"),
	HX_HCSTRING("createImagePattern","\x51","\xbd","\x5d","\xfb"),
	HX_HCSTRING("drawRoundRect","\xee","\xc3","\xaa","\xe2"),
	HX_HCSTRING("endFill","\xfe","\x87","\xe0","\x25"),
	HX_HCSTRING("endStroke","\xf3","\x01","\x17","\x51"),
	HX_HCSTRING("hitTest","\x45","\x60","\x7f","\xe2"),
	HX_HCSTRING("isCCW","\x0d","\x84","\x49","\xc1"),
	HX_HCSTRING("normalizeUVT","\x66","\x09","\x2f","\x47"),
	HX_HCSTRING("playCommands","\xdc","\xae","\xee","\x49"),
	HX_HCSTRING("quadraticCurveTo","\x12","\x48","\xc3","\x82"),
	HX_HCSTRING("render","\x56","\x6b","\x29","\x05"),
	HX_HCSTRING("renderMask","\x62","\x3b","\x60","\xe5"),
	::String(null()) };

void CairoGraphics_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("openfl._internal.renderer.cairo.CairoGraphics","\x72","\x72","\xef","\x3c");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &CairoGraphics_obj::__GetStatic;
	__mClass->mSetStaticField = &CairoGraphics_obj::__SetStatic;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(sStaticFields);
	__mClass->mMembers = hx::Class_obj::dupFunctions(0 /* sMemberFields */);
	__mClass->mCanCast = hx::TCanCast< CairoGraphics_obj >;
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

void CairoGraphics_obj::__boot()
{
	SIN45= ((Float)0.70710678118654752440084436210485);
	TAN22= ((Float)0.4142135623730950488016887242097);
	fillCommands= ::openfl::_internal::renderer::DrawCommandBuffer_obj::__new();
	strokeCommands= ::openfl::_internal::renderer::DrawCommandBuffer_obj::__new();
}

} // end namespace openfl
} // end namespace _internal
} // end namespace renderer
} // end namespace cairo
