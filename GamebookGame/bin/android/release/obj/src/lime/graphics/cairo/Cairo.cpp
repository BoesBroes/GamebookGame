#include <hxcpp.h>

#ifndef INCLUDED_lime__backend_native_NativeCFFI
#include <lime/_backend/native/NativeCFFI.h>
#endif
#ifndef INCLUDED_lime_graphics_cairo_Cairo
#include <lime/graphics/cairo/Cairo.h>
#endif
#ifndef INCLUDED_lime_graphics_cairo_CairoGlyph
#include <lime/graphics/cairo/CairoGlyph.h>
#endif
#ifndef INCLUDED_lime_math_Matrix3
#include <lime/math/Matrix3.h>
#endif
#ifndef INCLUDED_lime_math_Vector2
#include <lime/math/Vector2.h>
#endif
namespace lime{
namespace graphics{
namespace cairo{

Void Cairo_obj::__construct(Dynamic surface)
{
{
	bool tmp = (surface != null());
	if ((tmp)){
		this->handle = ((Dynamic)(::lime::_backend::native::NativeCFFI_obj::cffi_lime_cairo_create.call(hx::DynamicPtr(surface))));
	}
}
;
	return null();
}

//Cairo_obj::~Cairo_obj() { }

Dynamic Cairo_obj::__CreateEmpty() { return  new Cairo_obj; }
hx::ObjectPtr< Cairo_obj > Cairo_obj::__new(Dynamic surface)
{  hx::ObjectPtr< Cairo_obj > _result_ = new Cairo_obj();
	_result_->__construct(surface);
	return _result_;}

Dynamic Cairo_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< Cairo_obj > _result_ = new Cairo_obj();
	_result_->__construct(inArgs[0]);
	return _result_;}

Void Cairo_obj::arc( Float xc,Float yc,Float radius,Float angle1,Float angle2){
{
		::lime::_backend::native::NativeCFFI_obj::cffi_lime_cairo_arc.call(hx::DynamicPtr(this->handle),xc,yc,radius,angle1,angle2);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC5(Cairo_obj,arc,(void))

Void Cairo_obj::arcNegative( Float xc,Float yc,Float radius,Float angle1,Float angle2){
{
		::lime::_backend::native::NativeCFFI_obj::cffi_lime_cairo_arc_negative.call(hx::DynamicPtr(this->handle),xc,yc,radius,angle1,angle2);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC5(Cairo_obj,arcNegative,(void))

Void Cairo_obj::clip( ){
{
		::lime::_backend::native::NativeCFFI_obj::cffi_lime_cairo_clip.call(hx::DynamicPtr(this->handle));
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(Cairo_obj,clip,(void))

Void Cairo_obj::clipExtents( Float x1,Float y1,Float x2,Float y2){
{
		::lime::_backend::native::NativeCFFI_obj::cffi_lime_cairo_clip_extents.call(hx::DynamicPtr(this->handle),x1,y1,x2,y2);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC4(Cairo_obj,clipExtents,(void))

Void Cairo_obj::clipPreserve( ){
{
		::lime::_backend::native::NativeCFFI_obj::cffi_lime_cairo_clip_preserve.call(hx::DynamicPtr(this->handle));
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(Cairo_obj,clipPreserve,(void))

Void Cairo_obj::closePath( ){
{
		::lime::_backend::native::NativeCFFI_obj::cffi_lime_cairo_close_path.call(hx::DynamicPtr(this->handle));
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(Cairo_obj,closePath,(void))

Void Cairo_obj::copyPage( ){
{
		::lime::_backend::native::NativeCFFI_obj::cffi_lime_cairo_copy_page.call(hx::DynamicPtr(this->handle));
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(Cairo_obj,copyPage,(void))

Void Cairo_obj::curveTo( Float x1,Float y1,Float x2,Float y2,Float x3,Float y3){
{
		::lime::_backend::native::NativeCFFI_obj::cffi_lime_cairo_curve_to.call(hx::DynamicPtr(this->handle),x1,y1,x2,y2,x3,y3);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC6(Cairo_obj,curveTo,(void))

Void Cairo_obj::fill( ){
{
		::lime::_backend::native::NativeCFFI_obj::cffi_lime_cairo_fill.call(hx::DynamicPtr(this->handle));
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(Cairo_obj,fill,(void))

Void Cairo_obj::fillExtents( Float x1,Float y1,Float x2,Float y2){
{
		::lime::_backend::native::NativeCFFI_obj::cffi_lime_cairo_fill_extents.call(hx::DynamicPtr(this->handle),x1,y1,x2,y2);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC4(Cairo_obj,fillExtents,(void))

Void Cairo_obj::fillPreserve( ){
{
		::lime::_backend::native::NativeCFFI_obj::cffi_lime_cairo_fill_preserve.call(hx::DynamicPtr(this->handle));
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(Cairo_obj,fillPreserve,(void))

Void Cairo_obj::identityMatrix( ){
{
		::lime::_backend::native::NativeCFFI_obj::cffi_lime_cairo_identity_matrix.call(hx::DynamicPtr(this->handle));
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(Cairo_obj,identityMatrix,(void))

bool Cairo_obj::inClip( Float x,Float y){
	return ::lime::_backend::native::NativeCFFI_obj::cffi_lime_cairo_in_clip.call(hx::DynamicPtr(this->handle),x,y);
}


HX_DEFINE_DYNAMIC_FUNC2(Cairo_obj,inClip,return )

bool Cairo_obj::inFill( Float x,Float y){
	return ::lime::_backend::native::NativeCFFI_obj::cffi_lime_cairo_in_fill.call(hx::DynamicPtr(this->handle),x,y);
}


HX_DEFINE_DYNAMIC_FUNC2(Cairo_obj,inFill,return )

bool Cairo_obj::inStroke( Float x,Float y){
	return ::lime::_backend::native::NativeCFFI_obj::cffi_lime_cairo_in_stroke.call(hx::DynamicPtr(this->handle),x,y);
}


HX_DEFINE_DYNAMIC_FUNC2(Cairo_obj,inStroke,return )

Void Cairo_obj::lineTo( Float x,Float y){
{
		::lime::_backend::native::NativeCFFI_obj::cffi_lime_cairo_line_to.call(hx::DynamicPtr(this->handle),x,y);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(Cairo_obj,lineTo,(void))

Void Cairo_obj::moveTo( Float x,Float y){
{
		::lime::_backend::native::NativeCFFI_obj::cffi_lime_cairo_move_to.call(hx::DynamicPtr(this->handle),x,y);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(Cairo_obj,moveTo,(void))

Void Cairo_obj::mask( Dynamic pattern){
{
		::lime::_backend::native::NativeCFFI_obj::cffi_lime_cairo_mask.call(hx::DynamicPtr(this->handle),hx::DynamicPtr(pattern));
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Cairo_obj,mask,(void))

Void Cairo_obj::maskSurface( Dynamic surface,Float x,Float y){
{
		::lime::_backend::native::NativeCFFI_obj::cffi_lime_cairo_mask_surface.call(hx::DynamicPtr(this->handle),hx::DynamicPtr(surface),x,y);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC3(Cairo_obj,maskSurface,(void))

Void Cairo_obj::newPath( ){
{
		::lime::_backend::native::NativeCFFI_obj::cffi_lime_cairo_new_path.call(hx::DynamicPtr(this->handle));
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(Cairo_obj,newPath,(void))

Void Cairo_obj::paint( ){
{
		::lime::_backend::native::NativeCFFI_obj::cffi_lime_cairo_paint.call(hx::DynamicPtr(this->handle));
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(Cairo_obj,paint,(void))

Void Cairo_obj::paintWithAlpha( Float alpha){
{
		::lime::_backend::native::NativeCFFI_obj::cffi_lime_cairo_paint_with_alpha.call(hx::DynamicPtr(this->handle),alpha);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Cairo_obj,paintWithAlpha,(void))

Dynamic Cairo_obj::popGroup( ){
	Dynamic tmp;
	{
		::hx::Object * inVal = ::lime::_backend::native::NativeCFFI_obj::cffi_lime_cairo_pop_group.call(hx::DynamicPtr(this->handle));
		::hx::Object * tmp1 = inVal;
		::hx::Object * tmp2 = hx::DynamicPtr(tmp1);
		tmp = Dynamic(tmp2);
	}
	return tmp;
	return null();
}


HX_DEFINE_DYNAMIC_FUNC0(Cairo_obj,popGroup,return )

Void Cairo_obj::popGroupToSource( ){
{
		::lime::_backend::native::NativeCFFI_obj::cffi_lime_cairo_pop_group_to_source.call(hx::DynamicPtr(this->handle));
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(Cairo_obj,popGroupToSource,(void))

Void Cairo_obj::pushGroup( ){
{
		::lime::_backend::native::NativeCFFI_obj::cffi_lime_cairo_push_group.call(hx::DynamicPtr(this->handle));
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(Cairo_obj,pushGroup,(void))

Void Cairo_obj::pushGroupWithContent( int content){
{
		::lime::_backend::native::NativeCFFI_obj::cffi_lime_cairo_push_group_with_content.call(hx::DynamicPtr(this->handle),content);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Cairo_obj,pushGroupWithContent,(void))

Void Cairo_obj::recreate( Dynamic surface){
{
		this->handle = ((Dynamic)(::lime::_backend::native::NativeCFFI_obj::cffi_lime_cairo_create.call(hx::DynamicPtr(surface))));
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Cairo_obj,recreate,(void))

Void Cairo_obj::rectangle( Float x,Float y,Float width,Float height){
{
		::lime::_backend::native::NativeCFFI_obj::cffi_lime_cairo_rectangle.call(hx::DynamicPtr(this->handle),x,y,width,height);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC4(Cairo_obj,rectangle,(void))

Void Cairo_obj::relCurveTo( Float dx1,Float dy1,Float dx2,Float dy2,Float dx3,Float dy3){
{
		::lime::_backend::native::NativeCFFI_obj::cffi_lime_cairo_rel_curve_to.call(hx::DynamicPtr(this->handle),dx1,dy1,dx2,dy2,dx3,dy3);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC6(Cairo_obj,relCurveTo,(void))

Void Cairo_obj::relLineTo( Float dx,Float dy){
{
		::lime::_backend::native::NativeCFFI_obj::cffi_lime_cairo_rel_line_to.call(hx::DynamicPtr(this->handle),dx,dy);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(Cairo_obj,relLineTo,(void))

Void Cairo_obj::relMoveTo( Float dx,Float dy){
{
		::lime::_backend::native::NativeCFFI_obj::cffi_lime_cairo_rel_move_to.call(hx::DynamicPtr(this->handle),dx,dy);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(Cairo_obj,relMoveTo,(void))

Void Cairo_obj::resetClip( ){
{
		::lime::_backend::native::NativeCFFI_obj::cffi_lime_cairo_reset_clip.call(hx::DynamicPtr(this->handle));
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(Cairo_obj,resetClip,(void))

Void Cairo_obj::restore( ){
{
		::lime::_backend::native::NativeCFFI_obj::cffi_lime_cairo_restore.call(hx::DynamicPtr(this->handle));
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(Cairo_obj,restore,(void))

Void Cairo_obj::save( ){
{
		::lime::_backend::native::NativeCFFI_obj::cffi_lime_cairo_save.call(hx::DynamicPtr(this->handle));
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(Cairo_obj,save,(void))

Void Cairo_obj::setFontSize( Float size){
{
		::lime::_backend::native::NativeCFFI_obj::cffi_lime_cairo_set_font_size.call(hx::DynamicPtr(this->handle),size);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Cairo_obj,setFontSize,(void))

Void Cairo_obj::setSourceRGB( Float r,Float g,Float b){
{
		::lime::_backend::native::NativeCFFI_obj::cffi_lime_cairo_set_source_rgb.call(hx::DynamicPtr(this->handle),r,g,b);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC3(Cairo_obj,setSourceRGB,(void))

Void Cairo_obj::setSourceRGBA( Float r,Float g,Float b,Float a){
{
		::lime::_backend::native::NativeCFFI_obj::cffi_lime_cairo_set_source_rgba.call(hx::DynamicPtr(this->handle),r,g,b,a);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC4(Cairo_obj,setSourceRGBA,(void))

Void Cairo_obj::setSourceSurface( Dynamic surface,Float x,Float y){
{
		::lime::_backend::native::NativeCFFI_obj::cffi_lime_cairo_set_source_surface.call(hx::DynamicPtr(this->handle),hx::DynamicPtr(surface),x,y);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC3(Cairo_obj,setSourceSurface,(void))

Void Cairo_obj::showGlyphs( Array< ::Dynamic > glyphs){
{
		::lime::_backend::native::NativeCFFI_obj::cffi_lime_cairo_show_glyphs.call(hx::DynamicPtr(this->handle),hx::DynamicPtr(glyphs));
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Cairo_obj,showGlyphs,(void))

Void Cairo_obj::showPage( ){
{
		::lime::_backend::native::NativeCFFI_obj::cffi_lime_cairo_show_page.call(hx::DynamicPtr(this->handle));
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(Cairo_obj,showPage,(void))

Void Cairo_obj::showText( ::String utf8){
{
		::lime::_backend::native::NativeCFFI_obj::cffi_lime_cairo_show_text.call(hx::DynamicPtr(this->handle),utf8);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Cairo_obj,showText,(void))

int Cairo_obj::status( ){
	return ::lime::_backend::native::NativeCFFI_obj::cffi_lime_cairo_status.call(hx::DynamicPtr(this->handle));
}


HX_DEFINE_DYNAMIC_FUNC0(Cairo_obj,status,return )

Void Cairo_obj::stroke( ){
{
		::lime::_backend::native::NativeCFFI_obj::cffi_lime_cairo_stroke.call(hx::DynamicPtr(this->handle));
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(Cairo_obj,stroke,(void))

Void Cairo_obj::strokeExtents( Float x1,Float y1,Float x2,Float y2){
{
		::lime::_backend::native::NativeCFFI_obj::cffi_lime_cairo_stroke_extents.call(hx::DynamicPtr(this->handle),x1,y1,x2,y2);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC4(Cairo_obj,strokeExtents,(void))

Void Cairo_obj::strokePreserve( ){
{
		::lime::_backend::native::NativeCFFI_obj::cffi_lime_cairo_stroke_preserve.call(hx::DynamicPtr(this->handle));
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(Cairo_obj,strokePreserve,(void))

Void Cairo_obj::textPath( ::String utf8){
{
		::lime::_backend::native::NativeCFFI_obj::cffi_lime_cairo_text_path.call(hx::DynamicPtr(this->handle),utf8);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Cairo_obj,textPath,(void))

Void Cairo_obj::transform( ::lime::math::Matrix3 matrix){
{
		::lime::_backend::native::NativeCFFI_obj::cffi_lime_cairo_transform.call(hx::DynamicPtr(this->handle),hx::DynamicPtr(matrix));
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Cairo_obj,transform,(void))

Void Cairo_obj::rotate( Float amount){
{
		::lime::_backend::native::NativeCFFI_obj::cffi_lime_cairo_rotate.call(hx::DynamicPtr(this->handle),amount);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Cairo_obj,rotate,(void))

Void Cairo_obj::scale( Float x,Float y){
{
		::lime::_backend::native::NativeCFFI_obj::cffi_lime_cairo_scale.call(hx::DynamicPtr(this->handle),x,y);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(Cairo_obj,scale,(void))

Void Cairo_obj::translate( Float x,Float y){
{
		::lime::_backend::native::NativeCFFI_obj::cffi_lime_cairo_translate.call(hx::DynamicPtr(this->handle),x,y);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(Cairo_obj,translate,(void))

int Cairo_obj::get_antialias( ){
	return ::lime::_backend::native::NativeCFFI_obj::cffi_lime_cairo_get_antialias.call(hx::DynamicPtr(this->handle));
	return (int)0;
}


HX_DEFINE_DYNAMIC_FUNC0(Cairo_obj,get_antialias,return )

int Cairo_obj::set_antialias( int value){
	::lime::_backend::native::NativeCFFI_obj::cffi_lime_cairo_set_antialias.call(hx::DynamicPtr(this->handle),value);
	int tmp = value;
	return tmp;
}


HX_DEFINE_DYNAMIC_FUNC1(Cairo_obj,set_antialias,return )

::lime::math::Vector2 Cairo_obj::get_currentPoint( ){
	Dynamic vec = ((Dynamic)(::lime::_backend::native::NativeCFFI_obj::cffi_lime_cairo_get_current_point.call(hx::DynamicPtr(this->handle))));
	::lime::math::Vector2 tmp = ::lime::math::Vector2_obj::__new(vec->__Field(HX_HCSTRING("x","\x78","\x00","\x00","\x00"), hx::paccDynamic ),vec->__Field(HX_HCSTRING("y","\x79","\x00","\x00","\x00"), hx::paccDynamic ));
	return tmp;
	return null();
}


HX_DEFINE_DYNAMIC_FUNC0(Cairo_obj,get_currentPoint,return )

Array< Float > Cairo_obj::get_dash( ){
	Dynamic result = ((Dynamic)(::lime::_backend::native::NativeCFFI_obj::cffi_lime_cairo_get_dash.call(hx::DynamicPtr(this->handle))));
	Dynamic tmp = result;
	return tmp;
	return Array_obj< Float >::__new();
}


HX_DEFINE_DYNAMIC_FUNC0(Cairo_obj,get_dash,return )

Array< Float > Cairo_obj::set_dash( Array< Float > value){
	::lime::_backend::native::NativeCFFI_obj::cffi_lime_cairo_set_dash.call(hx::DynamicPtr(this->handle),hx::DynamicPtr(value));
	return value;
}


HX_DEFINE_DYNAMIC_FUNC1(Cairo_obj,set_dash,return )

int Cairo_obj::get_dashCount( ){
	return ::lime::_backend::native::NativeCFFI_obj::cffi_lime_cairo_get_dash_count.call(hx::DynamicPtr(this->handle));
	return (int)0;
}


HX_DEFINE_DYNAMIC_FUNC0(Cairo_obj,get_dashCount,return )

int Cairo_obj::get_fillRule( ){
	return ::lime::_backend::native::NativeCFFI_obj::cffi_lime_cairo_get_fill_rule.call(hx::DynamicPtr(this->handle));
	return (int)0;
}


HX_DEFINE_DYNAMIC_FUNC0(Cairo_obj,get_fillRule,return )

int Cairo_obj::set_fillRule( int value){
	::lime::_backend::native::NativeCFFI_obj::cffi_lime_cairo_set_fill_rule.call(hx::DynamicPtr(this->handle),value);
	int tmp = value;
	return tmp;
}


HX_DEFINE_DYNAMIC_FUNC1(Cairo_obj,set_fillRule,return )

Dynamic Cairo_obj::get_fontFace( ){
	Dynamic tmp;
	{
		::hx::Object * inVal = ::lime::_backend::native::NativeCFFI_obj::cffi_lime_cairo_get_font_face.call(hx::DynamicPtr(this->handle));
		::hx::Object * tmp1 = inVal;
		::hx::Object * tmp2 = hx::DynamicPtr(tmp1);
		tmp = Dynamic(tmp2);
	}
	return tmp;
	return ((Dynamic)((int)0));
}


HX_DEFINE_DYNAMIC_FUNC0(Cairo_obj,get_fontFace,return )

Dynamic Cairo_obj::set_fontFace( Dynamic value){
	::lime::_backend::native::NativeCFFI_obj::cffi_lime_cairo_set_font_face.call(hx::DynamicPtr(this->handle),hx::DynamicPtr(value));
	Dynamic tmp = value;
	return tmp;
}


HX_DEFINE_DYNAMIC_FUNC1(Cairo_obj,set_fontFace,return )

Dynamic Cairo_obj::get_fontOptions( ){
	Dynamic tmp;
	{
		::hx::Object * inVal = ::lime::_backend::native::NativeCFFI_obj::cffi_lime_cairo_get_font_options.call(hx::DynamicPtr(this->handle));
		::hx::Object * tmp1 = inVal;
		::hx::Object * tmp2 = hx::DynamicPtr(tmp1);
		tmp = Dynamic(tmp2);
	}
	return tmp;
	return null();
}


HX_DEFINE_DYNAMIC_FUNC0(Cairo_obj,get_fontOptions,return )

Dynamic Cairo_obj::set_fontOptions( Dynamic value){
	::lime::_backend::native::NativeCFFI_obj::cffi_lime_cairo_set_font_options.call(hx::DynamicPtr(this->handle),hx::DynamicPtr(value));
	Dynamic tmp = value;
	return tmp;
}


HX_DEFINE_DYNAMIC_FUNC1(Cairo_obj,set_fontOptions,return )

Dynamic Cairo_obj::get_groupTarget( ){
	Dynamic tmp;
	{
		::hx::Object * inVal = ::lime::_backend::native::NativeCFFI_obj::cffi_lime_cairo_get_group_target.call(hx::DynamicPtr(this->handle));
		::hx::Object * tmp1 = inVal;
		::hx::Object * tmp2 = hx::DynamicPtr(tmp1);
		tmp = Dynamic(tmp2);
	}
	return tmp;
	return null();
}


HX_DEFINE_DYNAMIC_FUNC0(Cairo_obj,get_groupTarget,return )

bool Cairo_obj::get_hasCurrentPoint( ){
	return ::lime::_backend::native::NativeCFFI_obj::cffi_lime_cairo_has_current_point.call(hx::DynamicPtr(this->handle));
	return false;
}


HX_DEFINE_DYNAMIC_FUNC0(Cairo_obj,get_hasCurrentPoint,return )

int Cairo_obj::get_lineCap( ){
	return ::lime::_backend::native::NativeCFFI_obj::cffi_lime_cairo_get_line_cap.call(hx::DynamicPtr(this->handle));
	return (int)0;
}


HX_DEFINE_DYNAMIC_FUNC0(Cairo_obj,get_lineCap,return )

int Cairo_obj::set_lineCap( int value){
	::lime::_backend::native::NativeCFFI_obj::cffi_lime_cairo_set_line_cap.call(hx::DynamicPtr(this->handle),value);
	int tmp = value;
	return tmp;
}


HX_DEFINE_DYNAMIC_FUNC1(Cairo_obj,set_lineCap,return )

int Cairo_obj::get_lineJoin( ){
	return ::lime::_backend::native::NativeCFFI_obj::cffi_lime_cairo_get_line_join.call(hx::DynamicPtr(this->handle));
	return (int)0;
}


HX_DEFINE_DYNAMIC_FUNC0(Cairo_obj,get_lineJoin,return )

int Cairo_obj::set_lineJoin( int value){
	::lime::_backend::native::NativeCFFI_obj::cffi_lime_cairo_set_line_join.call(hx::DynamicPtr(this->handle),value);
	int tmp = value;
	return tmp;
}


HX_DEFINE_DYNAMIC_FUNC1(Cairo_obj,set_lineJoin,return )

Float Cairo_obj::get_lineWidth( ){
	return ::lime::_backend::native::NativeCFFI_obj::cffi_lime_cairo_get_line_width.call(hx::DynamicPtr(this->handle));
	return (int)0;
}


HX_DEFINE_DYNAMIC_FUNC0(Cairo_obj,get_lineWidth,return )

Float Cairo_obj::set_lineWidth( Float value){
	::lime::_backend::native::NativeCFFI_obj::cffi_lime_cairo_set_line_width.call(hx::DynamicPtr(this->handle),value);
	Float tmp = value;
	return tmp;
}


HX_DEFINE_DYNAMIC_FUNC1(Cairo_obj,set_lineWidth,return )

::lime::math::Matrix3 Cairo_obj::get_matrix( ){
	Dynamic m = ((Dynamic)(::lime::_backend::native::NativeCFFI_obj::cffi_lime_cairo_get_matrix.call(hx::DynamicPtr(this->handle))));
	::lime::math::Matrix3 tmp = ::lime::math::Matrix3_obj::__new(m->__Field(HX_HCSTRING("a","\x61","\x00","\x00","\x00"), hx::paccDynamic ),m->__Field(HX_HCSTRING("b","\x62","\x00","\x00","\x00"), hx::paccDynamic ),m->__Field(HX_HCSTRING("c","\x63","\x00","\x00","\x00"), hx::paccDynamic ),m->__Field(HX_HCSTRING("d","\x64","\x00","\x00","\x00"), hx::paccDynamic ),m->__Field(HX_HCSTRING("tx","\x84","\x65","\x00","\x00"), hx::paccDynamic ),m->__Field(HX_HCSTRING("ty","\x85","\x65","\x00","\x00"), hx::paccDynamic ));
	return tmp;
	return null();
}


HX_DEFINE_DYNAMIC_FUNC0(Cairo_obj,get_matrix,return )

::lime::math::Matrix3 Cairo_obj::set_matrix( ::lime::math::Matrix3 value){
	::lime::_backend::native::NativeCFFI_obj::cffi_lime_cairo_set_matrix.call(hx::DynamicPtr(this->handle),value->a,value->b,value->c,value->d,value->tx,value->ty);
	::lime::math::Matrix3 tmp = value;
	return tmp;
}


HX_DEFINE_DYNAMIC_FUNC1(Cairo_obj,set_matrix,return )

Float Cairo_obj::get_miterLimit( ){
	return ::lime::_backend::native::NativeCFFI_obj::cffi_lime_cairo_get_miter_limit.call(hx::DynamicPtr(this->handle));
	return (int)0;
}


HX_DEFINE_DYNAMIC_FUNC0(Cairo_obj,get_miterLimit,return )

Float Cairo_obj::set_miterLimit( Float value){
	::lime::_backend::native::NativeCFFI_obj::cffi_lime_cairo_set_miter_limit.call(hx::DynamicPtr(this->handle),value);
	Float tmp = value;
	return tmp;
}


HX_DEFINE_DYNAMIC_FUNC1(Cairo_obj,set_miterLimit,return )

int Cairo_obj::get_operator( ){
	return ::lime::_backend::native::NativeCFFI_obj::cffi_lime_cairo_get_operator.call(hx::DynamicPtr(this->handle));
	return (int)0;
}


HX_DEFINE_DYNAMIC_FUNC0(Cairo_obj,get_operator,return )

int Cairo_obj::set_operator( int value){
	::lime::_backend::native::NativeCFFI_obj::cffi_lime_cairo_set_operator.call(hx::DynamicPtr(this->handle),value);
	int tmp = value;
	return tmp;
}


HX_DEFINE_DYNAMIC_FUNC1(Cairo_obj,set_operator,return )

Dynamic Cairo_obj::get_source( ){
	Dynamic tmp;
	{
		::hx::Object * inVal = ::lime::_backend::native::NativeCFFI_obj::cffi_lime_cairo_get_source.call(hx::DynamicPtr(this->handle));
		::hx::Object * tmp1 = inVal;
		::hx::Object * tmp2 = hx::DynamicPtr(tmp1);
		tmp = Dynamic(tmp2);
	}
	return tmp;
	return ((Dynamic)((int)0));
}


HX_DEFINE_DYNAMIC_FUNC0(Cairo_obj,get_source,return )

Dynamic Cairo_obj::set_source( Dynamic value){
	::lime::_backend::native::NativeCFFI_obj::cffi_lime_cairo_set_source.call(hx::DynamicPtr(this->handle),hx::DynamicPtr(value));
	Dynamic tmp = value;
	return tmp;
}


HX_DEFINE_DYNAMIC_FUNC1(Cairo_obj,set_source,return )

Dynamic Cairo_obj::get_target( ){
	Dynamic tmp;
	{
		::hx::Object * inVal = ::lime::_backend::native::NativeCFFI_obj::cffi_lime_cairo_get_target.call(hx::DynamicPtr(this->handle));
		::hx::Object * tmp1 = inVal;
		::hx::Object * tmp2 = hx::DynamicPtr(tmp1);
		tmp = Dynamic(tmp2);
	}
	return tmp;
	return null();
}


HX_DEFINE_DYNAMIC_FUNC0(Cairo_obj,get_target,return )

Float Cairo_obj::get_tolerance( ){
	return ::lime::_backend::native::NativeCFFI_obj::cffi_lime_cairo_get_tolerance.call(hx::DynamicPtr(this->handle));
}


HX_DEFINE_DYNAMIC_FUNC0(Cairo_obj,get_tolerance,return )

Float Cairo_obj::set_tolerance( Float value){
	::lime::_backend::native::NativeCFFI_obj::cffi_lime_cairo_set_tolerance.call(hx::DynamicPtr(this->handle),value);
	Float tmp = value;
	return tmp;
}


HX_DEFINE_DYNAMIC_FUNC1(Cairo_obj,set_tolerance,return )

int Cairo_obj::version;

::String Cairo_obj::versionString;

int Cairo_obj::get_version( ){
	return ::lime::_backend::native::NativeCFFI_obj::cffi_lime_cairo_version.call();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(Cairo_obj,get_version,return )

::String Cairo_obj::get_versionString( ){
	return ::lime::_backend::native::NativeCFFI_obj::cffi_lime_cairo_version_string.call();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(Cairo_obj,get_versionString,return )


Cairo_obj::Cairo_obj()
{
}

void Cairo_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(Cairo);
	HX_MARK_MEMBER_NAME(target,"target");
	HX_MARK_MEMBER_NAME(userData,"userData");
	HX_MARK_MEMBER_NAME(handle,"handle");
	HX_MARK_END_CLASS();
}

void Cairo_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(target,"target");
	HX_VISIT_MEMBER_NAME(userData,"userData");
	HX_VISIT_MEMBER_NAME(handle,"handle");
}

Dynamic Cairo_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"arc") ) { return arc_dyn(); }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"dash") ) { if (inCallProp == hx::paccAlways) return get_dash(); }
		if (HX_FIELD_EQ(inName,"clip") ) { return clip_dyn(); }
		if (HX_FIELD_EQ(inName,"fill") ) { return fill_dyn(); }
		if (HX_FIELD_EQ(inName,"mask") ) { return mask_dyn(); }
		if (HX_FIELD_EQ(inName,"save") ) { return save_dyn(); }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"paint") ) { return paint_dyn(); }
		if (HX_FIELD_EQ(inName,"scale") ) { return scale_dyn(); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"matrix") ) { if (inCallProp == hx::paccAlways) return get_matrix(); }
		if (HX_FIELD_EQ(inName,"source") ) { if (inCallProp == hx::paccAlways) return get_source(); }
		if (HX_FIELD_EQ(inName,"target") ) { return inCallProp == hx::paccAlways ? get_target() : target; }
		if (HX_FIELD_EQ(inName,"handle") ) { return handle; }
		if (HX_FIELD_EQ(inName,"inClip") ) { return inClip_dyn(); }
		if (HX_FIELD_EQ(inName,"inFill") ) { return inFill_dyn(); }
		if (HX_FIELD_EQ(inName,"lineTo") ) { return lineTo_dyn(); }
		if (HX_FIELD_EQ(inName,"moveTo") ) { return moveTo_dyn(); }
		if (HX_FIELD_EQ(inName,"status") ) { return status_dyn(); }
		if (HX_FIELD_EQ(inName,"stroke") ) { return stroke_dyn(); }
		if (HX_FIELD_EQ(inName,"rotate") ) { return rotate_dyn(); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"lineCap") ) { if (inCallProp == hx::paccAlways) return get_lineCap(); }
		if (HX_FIELD_EQ(inName,"curveTo") ) { return curveTo_dyn(); }
		if (HX_FIELD_EQ(inName,"newPath") ) { return newPath_dyn(); }
		if (HX_FIELD_EQ(inName,"restore") ) { return restore_dyn(); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"fillRule") ) { if (inCallProp == hx::paccAlways) return get_fillRule(); }
		if (HX_FIELD_EQ(inName,"fontFace") ) { if (inCallProp == hx::paccAlways) return get_fontFace(); }
		if (HX_FIELD_EQ(inName,"lineJoin") ) { if (inCallProp == hx::paccAlways) return get_lineJoin(); }
		if (HX_FIELD_EQ(inName,"operator") ) { if (inCallProp == hx::paccAlways) return get_operator(); }
		if (HX_FIELD_EQ(inName,"userData") ) { return userData; }
		if (HX_FIELD_EQ(inName,"copyPage") ) { return copyPage_dyn(); }
		if (HX_FIELD_EQ(inName,"inStroke") ) { return inStroke_dyn(); }
		if (HX_FIELD_EQ(inName,"popGroup") ) { return popGroup_dyn(); }
		if (HX_FIELD_EQ(inName,"recreate") ) { return recreate_dyn(); }
		if (HX_FIELD_EQ(inName,"showPage") ) { return showPage_dyn(); }
		if (HX_FIELD_EQ(inName,"showText") ) { return showText_dyn(); }
		if (HX_FIELD_EQ(inName,"textPath") ) { return textPath_dyn(); }
		if (HX_FIELD_EQ(inName,"get_dash") ) { return get_dash_dyn(); }
		if (HX_FIELD_EQ(inName,"set_dash") ) { return set_dash_dyn(); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"antialias") ) { if (inCallProp == hx::paccAlways) return get_antialias(); }
		if (HX_FIELD_EQ(inName,"dashCount") ) { if (inCallProp == hx::paccAlways) return get_dashCount(); }
		if (HX_FIELD_EQ(inName,"lineWidth") ) { if (inCallProp == hx::paccAlways) return get_lineWidth(); }
		if (HX_FIELD_EQ(inName,"tolerance") ) { if (inCallProp == hx::paccAlways) return get_tolerance(); }
		if (HX_FIELD_EQ(inName,"closePath") ) { return closePath_dyn(); }
		if (HX_FIELD_EQ(inName,"pushGroup") ) { return pushGroup_dyn(); }
		if (HX_FIELD_EQ(inName,"rectangle") ) { return rectangle_dyn(); }
		if (HX_FIELD_EQ(inName,"relLineTo") ) { return relLineTo_dyn(); }
		if (HX_FIELD_EQ(inName,"relMoveTo") ) { return relMoveTo_dyn(); }
		if (HX_FIELD_EQ(inName,"resetClip") ) { return resetClip_dyn(); }
		if (HX_FIELD_EQ(inName,"transform") ) { return transform_dyn(); }
		if (HX_FIELD_EQ(inName,"translate") ) { return translate_dyn(); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"miterLimit") ) { if (inCallProp == hx::paccAlways) return get_miterLimit(); }
		if (HX_FIELD_EQ(inName,"relCurveTo") ) { return relCurveTo_dyn(); }
		if (HX_FIELD_EQ(inName,"showGlyphs") ) { return showGlyphs_dyn(); }
		if (HX_FIELD_EQ(inName,"get_matrix") ) { return get_matrix_dyn(); }
		if (HX_FIELD_EQ(inName,"set_matrix") ) { return set_matrix_dyn(); }
		if (HX_FIELD_EQ(inName,"get_source") ) { return get_source_dyn(); }
		if (HX_FIELD_EQ(inName,"set_source") ) { return set_source_dyn(); }
		if (HX_FIELD_EQ(inName,"get_target") ) { return get_target_dyn(); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"fontOptions") ) { if (inCallProp == hx::paccAlways) return get_fontOptions(); }
		if (HX_FIELD_EQ(inName,"groupTarget") ) { if (inCallProp == hx::paccAlways) return get_groupTarget(); }
		if (HX_FIELD_EQ(inName,"arcNegative") ) { return arcNegative_dyn(); }
		if (HX_FIELD_EQ(inName,"clipExtents") ) { return clipExtents_dyn(); }
		if (HX_FIELD_EQ(inName,"fillExtents") ) { return fillExtents_dyn(); }
		if (HX_FIELD_EQ(inName,"maskSurface") ) { return maskSurface_dyn(); }
		if (HX_FIELD_EQ(inName,"setFontSize") ) { return setFontSize_dyn(); }
		if (HX_FIELD_EQ(inName,"get_lineCap") ) { return get_lineCap_dyn(); }
		if (HX_FIELD_EQ(inName,"set_lineCap") ) { return set_lineCap_dyn(); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"currentPoint") ) { if (inCallProp == hx::paccAlways) return get_currentPoint(); }
		if (HX_FIELD_EQ(inName,"clipPreserve") ) { return clipPreserve_dyn(); }
		if (HX_FIELD_EQ(inName,"fillPreserve") ) { return fillPreserve_dyn(); }
		if (HX_FIELD_EQ(inName,"setSourceRGB") ) { return setSourceRGB_dyn(); }
		if (HX_FIELD_EQ(inName,"get_fillRule") ) { return get_fillRule_dyn(); }
		if (HX_FIELD_EQ(inName,"set_fillRule") ) { return set_fillRule_dyn(); }
		if (HX_FIELD_EQ(inName,"get_fontFace") ) { return get_fontFace_dyn(); }
		if (HX_FIELD_EQ(inName,"set_fontFace") ) { return set_fontFace_dyn(); }
		if (HX_FIELD_EQ(inName,"get_lineJoin") ) { return get_lineJoin_dyn(); }
		if (HX_FIELD_EQ(inName,"set_lineJoin") ) { return set_lineJoin_dyn(); }
		if (HX_FIELD_EQ(inName,"get_operator") ) { return get_operator_dyn(); }
		if (HX_FIELD_EQ(inName,"set_operator") ) { return set_operator_dyn(); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"setSourceRGBA") ) { return setSourceRGBA_dyn(); }
		if (HX_FIELD_EQ(inName,"strokeExtents") ) { return strokeExtents_dyn(); }
		if (HX_FIELD_EQ(inName,"get_antialias") ) { return get_antialias_dyn(); }
		if (HX_FIELD_EQ(inName,"set_antialias") ) { return set_antialias_dyn(); }
		if (HX_FIELD_EQ(inName,"get_dashCount") ) { return get_dashCount_dyn(); }
		if (HX_FIELD_EQ(inName,"get_lineWidth") ) { return get_lineWidth_dyn(); }
		if (HX_FIELD_EQ(inName,"set_lineWidth") ) { return set_lineWidth_dyn(); }
		if (HX_FIELD_EQ(inName,"get_tolerance") ) { return get_tolerance_dyn(); }
		if (HX_FIELD_EQ(inName,"set_tolerance") ) { return set_tolerance_dyn(); }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"identityMatrix") ) { return identityMatrix_dyn(); }
		if (HX_FIELD_EQ(inName,"paintWithAlpha") ) { return paintWithAlpha_dyn(); }
		if (HX_FIELD_EQ(inName,"strokePreserve") ) { return strokePreserve_dyn(); }
		if (HX_FIELD_EQ(inName,"get_miterLimit") ) { return get_miterLimit_dyn(); }
		if (HX_FIELD_EQ(inName,"set_miterLimit") ) { return set_miterLimit_dyn(); }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"hasCurrentPoint") ) { if (inCallProp == hx::paccAlways) return get_hasCurrentPoint(); }
		if (HX_FIELD_EQ(inName,"get_fontOptions") ) { return get_fontOptions_dyn(); }
		if (HX_FIELD_EQ(inName,"set_fontOptions") ) { return set_fontOptions_dyn(); }
		if (HX_FIELD_EQ(inName,"get_groupTarget") ) { return get_groupTarget_dyn(); }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"popGroupToSource") ) { return popGroupToSource_dyn(); }
		if (HX_FIELD_EQ(inName,"setSourceSurface") ) { return setSourceSurface_dyn(); }
		if (HX_FIELD_EQ(inName,"get_currentPoint") ) { return get_currentPoint_dyn(); }
		break;
	case 19:
		if (HX_FIELD_EQ(inName,"get_hasCurrentPoint") ) { return get_hasCurrentPoint_dyn(); }
		break;
	case 20:
		if (HX_FIELD_EQ(inName,"pushGroupWithContent") ) { return pushGroupWithContent_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

bool Cairo_obj::__GetStatic(const ::String &inName, Dynamic &outValue, hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 7:
		if (HX_FIELD_EQ(inName,"version") ) { outValue = inCallProp == hx::paccAlways ? get_version() : version; return true; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"get_version") ) { outValue = get_version_dyn(); return true;  }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"versionString") ) { outValue = inCallProp == hx::paccAlways ? get_versionString() : versionString; return true; }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"get_versionString") ) { outValue = get_versionString_dyn(); return true;  }
	}
	return false;
}

Dynamic Cairo_obj::__SetField(const ::String &inName,const Dynamic &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"dash") ) { if (inCallProp == hx::paccAlways) return set_dash(inValue); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"matrix") ) { if (inCallProp == hx::paccAlways) return set_matrix(inValue); }
		if (HX_FIELD_EQ(inName,"source") ) { if (inCallProp == hx::paccAlways) return set_source(inValue); }
		if (HX_FIELD_EQ(inName,"target") ) { target=inValue.Cast< Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"handle") ) { handle=inValue.Cast< Dynamic >(); return inValue; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"lineCap") ) { if (inCallProp == hx::paccAlways) return set_lineCap(inValue); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"fillRule") ) { if (inCallProp == hx::paccAlways) return set_fillRule(inValue); }
		if (HX_FIELD_EQ(inName,"fontFace") ) { if (inCallProp == hx::paccAlways) return set_fontFace(inValue); }
		if (HX_FIELD_EQ(inName,"lineJoin") ) { if (inCallProp == hx::paccAlways) return set_lineJoin(inValue); }
		if (HX_FIELD_EQ(inName,"operator") ) { if (inCallProp == hx::paccAlways) return set_operator(inValue); }
		if (HX_FIELD_EQ(inName,"userData") ) { userData=inValue.Cast< Dynamic >(); return inValue; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"antialias") ) { if (inCallProp == hx::paccAlways) return set_antialias(inValue); }
		if (HX_FIELD_EQ(inName,"lineWidth") ) { if (inCallProp == hx::paccAlways) return set_lineWidth(inValue); }
		if (HX_FIELD_EQ(inName,"tolerance") ) { if (inCallProp == hx::paccAlways) return set_tolerance(inValue); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"miterLimit") ) { if (inCallProp == hx::paccAlways) return set_miterLimit(inValue); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"fontOptions") ) { if (inCallProp == hx::paccAlways) return set_fontOptions(inValue); }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

bool Cairo_obj::__SetStatic(const ::String &inName,Dynamic &ioValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 7:
		if (HX_FIELD_EQ(inName,"version") ) { version=ioValue.Cast< int >(); return true; }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"versionString") ) { versionString=ioValue.Cast< ::String >(); return true; }
	}
	return false;
}

void Cairo_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("antialias","\xae","\xd6","\xe9","\x75"));
	outFields->push(HX_HCSTRING("currentPoint","\x57","\x99","\x9b","\x0d"));
	outFields->push(HX_HCSTRING("dash","\x52","\x55","\x63","\x42"));
	outFields->push(HX_HCSTRING("dashCount","\x1d","\xd6","\x3c","\x33"));
	outFields->push(HX_HCSTRING("fillRule","\x1f","\x71","\xc5","\x6c"));
	outFields->push(HX_HCSTRING("fontFace","\x0c","\xd2","\x33","\xc6"));
	outFields->push(HX_HCSTRING("fontOptions","\x4f","\xe5","\xce","\xf4"));
	outFields->push(HX_HCSTRING("groupTarget","\xf0","\x93","\x46","\x02"));
	outFields->push(HX_HCSTRING("hasCurrentPoint","\xd1","\xc3","\x0b","\x75"));
	outFields->push(HX_HCSTRING("lineCap","\x7e","\x84","\x90","\x1f"));
	outFields->push(HX_HCSTRING("lineJoin","\xfe","\x81","\x8e","\x83"));
	outFields->push(HX_HCSTRING("lineWidth","\x72","\xb9","\x5d","\x11"));
	outFields->push(HX_HCSTRING("matrix","\x41","\x36","\xc8","\xbb"));
	outFields->push(HX_HCSTRING("miterLimit","\xf6","\x5c","\x6a","\x54"));
	outFields->push(HX_HCSTRING("operator","\xa4","\x1b","\x73","\x44"));
	outFields->push(HX_HCSTRING("source","\xdb","\xb0","\x31","\x32"));
	outFields->push(HX_HCSTRING("target","\x51","\xf3","\xec","\x86"));
	outFields->push(HX_HCSTRING("tolerance","\x0d","\x3d","\x7c","\x33"));
	outFields->push(HX_HCSTRING("userData","\x15","\x96","\x28","\x05"));
	outFields->push(HX_HCSTRING("handle","\xa8","\x83","\xfd","\xb7"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsObject /*Dynamic*/ ,(int)offsetof(Cairo_obj,target),HX_HCSTRING("target","\x51","\xf3","\xec","\x86")},
	{hx::fsObject /*Dynamic*/ ,(int)offsetof(Cairo_obj,userData),HX_HCSTRING("userData","\x15","\x96","\x28","\x05")},
	{hx::fsObject /*Dynamic*/ ,(int)offsetof(Cairo_obj,handle),HX_HCSTRING("handle","\xa8","\x83","\xfd","\xb7")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo sStaticStorageInfo[] = {
	{hx::fsInt,(void *) &Cairo_obj::version,HX_HCSTRING("version","\x18","\xe7","\xf1","\x7c")},
	{hx::fsString,(void *) &Cairo_obj::versionString,HX_HCSTRING("versionString","\x09","\xe6","\xa0","\x51")},
	{ hx::fsUnknown, 0, null()}
};
#endif

static ::String sMemberFields[] = {
	HX_HCSTRING("target","\x51","\xf3","\xec","\x86"),
	HX_HCSTRING("userData","\x15","\x96","\x28","\x05"),
	HX_HCSTRING("handle","\xa8","\x83","\xfd","\xb7"),
	HX_HCSTRING("arc","\x52","\xfe","\x49","\x00"),
	HX_HCSTRING("arcNegative","\xe7","\x82","\xbf","\x33"),
	HX_HCSTRING("clip","\xd0","\x6e","\xc2","\x41"),
	HX_HCSTRING("clipExtents","\x59","\x0e","\x32","\xbe"),
	HX_HCSTRING("clipPreserve","\xbc","\xe6","\x91","\x33"),
	HX_HCSTRING("closePath","\x7d","\x65","\x20","\x14"),
	HX_HCSTRING("copyPage","\xa4","\x40","\xf0","\xce"),
	HX_HCSTRING("curveTo","\x0a","\x60","\x88","\xce"),
	HX_HCSTRING("fill","\x83","\xce","\xbb","\x43"),
	HX_HCSTRING("fillExtents","\x06","\x5b","\xf8","\x93"),
	HX_HCSTRING("fillPreserve","\x6f","\xb1","\x4e","\x6b"),
	HX_HCSTRING("identityMatrix","\x1f","\x72","\x00","\x92"),
	HX_HCSTRING("inClip","\x55","\x4d","\x28","\x7e"),
	HX_HCSTRING("inFill","\x08","\xad","\x21","\x80"),
	HX_HCSTRING("inStroke","\x7d","\xfd","\xb2","\x99"),
	HX_HCSTRING("lineTo","\x8f","\x46","\xa0","\xec"),
	HX_HCSTRING("moveTo","\xec","\xd2","\xac","\xcc"),
	HX_HCSTRING("mask","\xec","\x40","\x56","\x48"),
	HX_HCSTRING("maskSurface","\xa1","\x82","\x0d","\x90"),
	HX_HCSTRING("newPath","\x25","\x92","\x1e","\xfa"),
	HX_HCSTRING("paint","\x9e","\xb7","\x4e","\xbd"),
	HX_HCSTRING("paintWithAlpha","\xfa","\x4f","\xef","\x59"),
	HX_HCSTRING("popGroup","\xee","\xf7","\xfa","\x02"),
	HX_HCSTRING("popGroupToSource","\xc4","\xaa","\xdb","\xc8"),
	HX_HCSTRING("pushGroup","\x05","\x1b","\x10","\xde"),
	HX_HCSTRING("pushGroupWithContent","\xce","\x2c","\x09","\x98"),
	HX_HCSTRING("recreate","\xef","\x12","\x7e","\x5c"),
	HX_HCSTRING("rectangle","\x2f","\xd4","\x7c","\x19"),
	HX_HCSTRING("relCurveTo","\xb1","\x7b","\x89","\x97"),
	HX_HCSTRING("relLineTo","\xc8","\x9c","\xaa","\x2c"),
	HX_HCSTRING("relMoveTo","\x25","\x29","\xb7","\x0c"),
	HX_HCSTRING("resetClip","\x3f","\x78","\xae","\x87"),
	HX_HCSTRING("restore","\x4e","\x67","\xb0","\x6a"),
	HX_HCSTRING("save","\x3d","\x8b","\x4d","\x4c"),
	HX_HCSTRING("setFontSize","\xf2","\x87","\x32","\xff"),
	HX_HCSTRING("setSourceRGB","\xf0","\x40","\x4c","\x8d"),
	HX_HCSTRING("setSourceRGBA","\x51","\x91","\x6c","\x15"),
	HX_HCSTRING("setSourceSurface","\x90","\x15","\x89","\x6d"),
	HX_HCSTRING("showGlyphs","\x24","\x9e","\xcd","\x17"),
	HX_HCSTRING("showPage","\xec","\x9d","\xd8","\xb1"),
	HX_HCSTRING("showText","\x4a","\x90","\x80","\xb4"),
	HX_HCSTRING("status","\x32","\xe7","\xfb","\x05"),
	HX_HCSTRING("stroke","\xb8","\xb3","\x34","\x11"),
	HX_HCSTRING("strokeExtents","\x71","\xb6","\x07","\xdd"),
	HX_HCSTRING("strokePreserve","\xa4","\x53","\xaf","\x0f"),
	HX_HCSTRING("textPath","\xf2","\x38","\x4d","\x4d"),
	HX_HCSTRING("transform","\x6c","\x2d","\x93","\x45"),
	HX_HCSTRING("rotate","\x5b","\x46","\x20","\xcb"),
	HX_HCSTRING("scale","\x8a","\xce","\xce","\x78"),
	HX_HCSTRING("translate","\x4e","\xd7","\x7f","\x49"),
	HX_HCSTRING("get_antialias","\x85","\xaa","\x4d","\x37"),
	HX_HCSTRING("set_antialias","\x91","\x8c","\x53","\x7c"),
	HX_HCSTRING("get_currentPoint","\xe0","\x85","\x3a","\x12"),
	HX_HCSTRING("get_dash","\xdb","\x10","\x1e","\xc2"),
	HX_HCSTRING("set_dash","\x4f","\x6a","\x7b","\x70"),
	HX_HCSTRING("get_dashCount","\xf4","\xa9","\xa0","\xf4"),
	HX_HCSTRING("get_fillRule","\x28","\x25","\xdf","\x21"),
	HX_HCSTRING("set_fillRule","\x9c","\x48","\xd8","\x36"),
	HX_HCSTRING("get_fontFace","\x15","\x86","\x4d","\x7b"),
	HX_HCSTRING("set_fontFace","\x89","\xa9","\x46","\x90"),
	HX_HCSTRING("get_fontOptions","\xe6","\x9c","\xb0","\xb5"),
	HX_HCSTRING("set_fontOptions","\xf2","\x19","\x7c","\xb1"),
	HX_HCSTRING("get_groupTarget","\x87","\x4b","\x28","\xc3"),
	HX_HCSTRING("get_hasCurrentPoint","\xe8","\x92","\x16","\x00"),
	HX_HCSTRING("get_lineCap","\x95","\xe4","\x8a","\xa5"),
	HX_HCSTRING("set_lineCap","\xa1","\xeb","\xf7","\xaf"),
	HX_HCSTRING("get_lineJoin","\x07","\x36","\xa8","\x38"),
	HX_HCSTRING("set_lineJoin","\x7b","\x59","\xa1","\x4d"),
	HX_HCSTRING("get_lineWidth","\x49","\x8d","\xc1","\xd2"),
	HX_HCSTRING("set_lineWidth","\x55","\x6f","\xc7","\x17"),
	HX_HCSTRING("get_matrix","\x0a","\xa6","\x4f","\xac"),
	HX_HCSTRING("set_matrix","\x7e","\x44","\xcd","\xaf"),
	HX_HCSTRING("get_miterLimit","\x3f","\xe5","\x5f","\xca"),
	HX_HCSTRING("set_miterLimit","\xb3","\xcd","\x7f","\xea"),
	HX_HCSTRING("get_operator","\xad","\xcf","\x8c","\xf9"),
	HX_HCSTRING("set_operator","\x21","\xf3","\x85","\x0e"),
	HX_HCSTRING("get_source","\xa4","\x20","\xb9","\x22"),
	HX_HCSTRING("set_source","\x18","\xbf","\x36","\x26"),
	HX_HCSTRING("get_target","\x1a","\x63","\x74","\x77"),
	HX_HCSTRING("get_tolerance","\xe4","\x10","\xe0","\xf4"),
	HX_HCSTRING("set_tolerance","\xf0","\xf2","\xe5","\x39"),
	::String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(Cairo_obj::__mClass,"__mClass");
	HX_MARK_MEMBER_NAME(Cairo_obj::version,"version");
	HX_MARK_MEMBER_NAME(Cairo_obj::versionString,"versionString");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(Cairo_obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(Cairo_obj::version,"version");
	HX_VISIT_MEMBER_NAME(Cairo_obj::versionString,"versionString");
};

#endif

hx::Class Cairo_obj::__mClass;

static ::String sStaticFields[] = {
	HX_HCSTRING("version","\x18","\xe7","\xf1","\x7c"),
	HX_HCSTRING("versionString","\x09","\xe6","\xa0","\x51"),
	HX_HCSTRING("get_version","\x2f","\x47","\xec","\x02"),
	HX_HCSTRING("get_versionString","\x60","\xf1","\x10","\x58"),
	::String(null()) };

void Cairo_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("lime.graphics.cairo.Cairo","\xd8","\xbd","\x0e","\x04");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &Cairo_obj::__GetStatic;
	__mClass->mSetStaticField = &Cairo_obj::__SetStatic;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(sStaticFields);
	__mClass->mMembers = hx::Class_obj::dupFunctions(sMemberFields);
	__mClass->mCanCast = hx::TCanCast< Cairo_obj >;
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

} // end namespace lime
} // end namespace graphics
} // end namespace cairo
