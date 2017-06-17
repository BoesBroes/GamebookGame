#include <hxcpp.h>

#ifndef INCLUDED_openfl__internal_renderer_DrawCommandBuffer
#include <openfl/_internal/renderer/DrawCommandBuffer.h>
#endif
#ifndef INCLUDED_openfl__internal_renderer_DrawCommandReader
#include <openfl/_internal/renderer/DrawCommandReader.h>
#endif
#ifndef INCLUDED_openfl__internal_renderer_DrawCommandType
#include <openfl/_internal/renderer/DrawCommandType.h>
#endif
namespace openfl{
namespace _internal{
namespace renderer{

Void DrawCommandReader_obj::__construct(::openfl::_internal::renderer::DrawCommandBuffer buffer)
{
{
	this->buffer = buffer;
	int tmp = this->tsPos = (int)0;
	int tmp1 = this->iiPos = tmp;
	int tmp2 = this->ffPos = tmp1;
	int tmp3 = this->oPos = tmp2;
	int tmp4 = this->fPos = tmp3;
	int tmp5 = this->iPos = tmp4;
	this->bPos = tmp5;
	this->prev = ::openfl::_internal::renderer::DrawCommandType_obj::UNKNOWN;
}
;
	return null();
}

//DrawCommandReader_obj::~DrawCommandReader_obj() { }

Dynamic DrawCommandReader_obj::__CreateEmpty() { return  new DrawCommandReader_obj; }
hx::ObjectPtr< DrawCommandReader_obj > DrawCommandReader_obj::__new(::openfl::_internal::renderer::DrawCommandBuffer buffer)
{  hx::ObjectPtr< DrawCommandReader_obj > _result_ = new DrawCommandReader_obj();
	_result_->__construct(buffer);
	return _result_;}

Dynamic DrawCommandReader_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< DrawCommandReader_obj > _result_ = new DrawCommandReader_obj();
	_result_->__construct(inArgs[0]);
	return _result_;}

Void DrawCommandReader_obj::advance( ){
{
		::openfl::_internal::renderer::DrawCommandType tmp = this->prev;
		::openfl::_internal::renderer::DrawCommandType _g = tmp;
		switch( (int)(_g->__Index())){
			case (int)0: {
				hx::AddEq(this->oPos,(int)2);
				hx::AddEq(this->bPos,(int)2);
			}
			;break;
			case (int)1: {
				hx::AddEq(this->iPos,(int)1);
				hx::AddEq(this->fPos,(int)1);
			}
			;break;
			case (int)2: {
				hx::AddEq(this->oPos,(int)4);
				hx::AddEq(this->iiPos,(int)2);
				hx::AddEq(this->ffPos,(int)1);
				hx::AddEq(this->fPos,(int)1);
			}
			;break;
			case (int)3: {
				hx::AddEq(this->fPos,(int)6);
			}
			;break;
			case (int)4: {
				hx::AddEq(this->fPos,(int)4);
			}
			;break;
			case (int)5: {
				hx::AddEq(this->fPos,(int)3);
			}
			;break;
			case (int)6: {
				hx::AddEq(this->fPos,(int)4);
			}
			;break;
			case (int)7: {
				hx::AddEq(this->fPos,(int)4);
			}
			;break;
			case (int)8: {
				hx::AddEq(this->fPos,(int)5);
				hx::AddEq(this->oPos,(int)1);
			}
			;break;
			case (int)10: {
				hx::AddEq(this->oPos,(int)4);
			}
			;break;
			case (int)11: {
			}
			;break;
			case (int)12: {
				hx::AddEq(this->oPos,(int)2);
				hx::AddEq(this->bPos,(int)2);
			}
			;break;
			case (int)13: {
				hx::AddEq(this->oPos,(int)4);
				hx::AddEq(this->iiPos,(int)2);
				hx::AddEq(this->ffPos,(int)1);
				hx::AddEq(this->fPos,(int)1);
			}
			;break;
			case (int)14: {
				hx::AddEq(this->oPos,(int)4);
				hx::AddEq(this->iPos,(int)1);
				hx::AddEq(this->fPos,(int)2);
				hx::AddEq(this->bPos,(int)1);
			}
			;break;
			case (int)15: {
				hx::AddEq(this->fPos,(int)2);
			}
			;break;
			case (int)16: {
				hx::AddEq(this->fPos,(int)2);
			}
			;break;
			case (int)17: {
				hx::AddEq(this->oPos,(int)1);
			}
			;break;
			default: {
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(DrawCommandReader_obj,advance,(void))

bool DrawCommandReader_obj::_bool( int index){
	::openfl::_internal::renderer::DrawCommandBuffer tmp = this->buffer;
	int tmp1 = this->bPos;
	int tmp2 = index;
	int tmp3 = (tmp1 + tmp2);
	bool tmp4 = tmp->b->__get(tmp3);
	return tmp4;
}


HX_DEFINE_DYNAMIC_FUNC1(DrawCommandReader_obj,_bool,return )

Void DrawCommandReader_obj::destroy( ){
{
		this->buffer = null();
		this->reset();
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(DrawCommandReader_obj,destroy,(void))

Array< Float > DrawCommandReader_obj::fArr( int index){
	::openfl::_internal::renderer::DrawCommandBuffer tmp = this->buffer;
	int tmp1 = this->ffPos;
	int tmp2 = index;
	int tmp3 = (tmp1 + tmp2);
	return tmp->ff->__get(tmp3).StaticCast< Array< Float > >();
}


HX_DEFINE_DYNAMIC_FUNC1(DrawCommandReader_obj,fArr,return )

Float DrawCommandReader_obj::_float( int index){
	::openfl::_internal::renderer::DrawCommandBuffer tmp = this->buffer;
	int tmp1 = this->fPos;
	int tmp2 = index;
	int tmp3 = (tmp1 + tmp2);
	Float tmp4 = tmp->f->__get(tmp3);
	return tmp4;
}


HX_DEFINE_DYNAMIC_FUNC1(DrawCommandReader_obj,_float,return )

Array< int > DrawCommandReader_obj::iArr( int index){
	::openfl::_internal::renderer::DrawCommandBuffer tmp = this->buffer;
	int tmp1 = this->iiPos;
	int tmp2 = index;
	int tmp3 = (tmp1 + tmp2);
	return tmp->ii->__get(tmp3).StaticCast< Array< int > >();
}


HX_DEFINE_DYNAMIC_FUNC1(DrawCommandReader_obj,iArr,return )

int DrawCommandReader_obj::_int( int index){
	::openfl::_internal::renderer::DrawCommandBuffer tmp = this->buffer;
	int tmp1 = this->iPos;
	int tmp2 = index;
	int tmp3 = (tmp1 + tmp2);
	int tmp4 = tmp->i->__get(tmp3);
	return tmp4;
}


HX_DEFINE_DYNAMIC_FUNC1(DrawCommandReader_obj,_int,return )

Dynamic DrawCommandReader_obj::obj( int index){
	::openfl::_internal::renderer::DrawCommandBuffer tmp = this->buffer;
	int tmp1 = this->oPos;
	int tmp2 = index;
	int tmp3 = (tmp1 + tmp2);
	Dynamic tmp4 = tmp->o->__GetItem(tmp3);
	return tmp4;
}


HX_DEFINE_DYNAMIC_FUNC1(DrawCommandReader_obj,obj,return )

::openfl::_internal::renderer::DrawCommandReader DrawCommandReader_obj::readBeginBitmapFill( ){
	{
		::openfl::_internal::renderer::DrawCommandType tmp = this->prev;
		::openfl::_internal::renderer::DrawCommandType _g = tmp;
		switch( (int)(_g->__Index())){
			case (int)0: {
				hx::AddEq(this->oPos,(int)2);
				hx::AddEq(this->bPos,(int)2);
			}
			;break;
			case (int)1: {
				hx::AddEq(this->iPos,(int)1);
				hx::AddEq(this->fPos,(int)1);
			}
			;break;
			case (int)2: {
				hx::AddEq(this->oPos,(int)4);
				hx::AddEq(this->iiPos,(int)2);
				hx::AddEq(this->ffPos,(int)1);
				hx::AddEq(this->fPos,(int)1);
			}
			;break;
			case (int)3: {
				hx::AddEq(this->fPos,(int)6);
			}
			;break;
			case (int)4: {
				hx::AddEq(this->fPos,(int)4);
			}
			;break;
			case (int)5: {
				hx::AddEq(this->fPos,(int)3);
			}
			;break;
			case (int)6: {
				hx::AddEq(this->fPos,(int)4);
			}
			;break;
			case (int)7: {
				hx::AddEq(this->fPos,(int)4);
			}
			;break;
			case (int)8: {
				hx::AddEq(this->fPos,(int)5);
				hx::AddEq(this->oPos,(int)1);
			}
			;break;
			case (int)10: {
				hx::AddEq(this->oPos,(int)4);
			}
			;break;
			case (int)11: {
				Dynamic();
			}
			;break;
			case (int)12: {
				hx::AddEq(this->oPos,(int)2);
				hx::AddEq(this->bPos,(int)2);
			}
			;break;
			case (int)13: {
				hx::AddEq(this->oPos,(int)4);
				hx::AddEq(this->iiPos,(int)2);
				hx::AddEq(this->ffPos,(int)1);
				hx::AddEq(this->fPos,(int)1);
			}
			;break;
			case (int)14: {
				hx::AddEq(this->oPos,(int)4);
				hx::AddEq(this->iPos,(int)1);
				hx::AddEq(this->fPos,(int)2);
				hx::AddEq(this->bPos,(int)1);
			}
			;break;
			case (int)15: {
				hx::AddEq(this->fPos,(int)2);
			}
			;break;
			case (int)16: {
				hx::AddEq(this->fPos,(int)2);
			}
			;break;
			case (int)17: {
				hx::AddEq(this->oPos,(int)1);
			}
			;break;
			default: {
				Dynamic();
			}
		}
	}
	this->prev = ::openfl::_internal::renderer::DrawCommandType_obj::BEGIN_BITMAP_FILL;
	return hx::ObjectPtr<OBJ_>(this);
}


HX_DEFINE_DYNAMIC_FUNC0(DrawCommandReader_obj,readBeginBitmapFill,return )

::openfl::_internal::renderer::DrawCommandReader DrawCommandReader_obj::readBeginFill( ){
	{
		::openfl::_internal::renderer::DrawCommandType tmp = this->prev;
		::openfl::_internal::renderer::DrawCommandType _g = tmp;
		switch( (int)(_g->__Index())){
			case (int)0: {
				hx::AddEq(this->oPos,(int)2);
				hx::AddEq(this->bPos,(int)2);
			}
			;break;
			case (int)1: {
				hx::AddEq(this->iPos,(int)1);
				hx::AddEq(this->fPos,(int)1);
			}
			;break;
			case (int)2: {
				hx::AddEq(this->oPos,(int)4);
				hx::AddEq(this->iiPos,(int)2);
				hx::AddEq(this->ffPos,(int)1);
				hx::AddEq(this->fPos,(int)1);
			}
			;break;
			case (int)3: {
				hx::AddEq(this->fPos,(int)6);
			}
			;break;
			case (int)4: {
				hx::AddEq(this->fPos,(int)4);
			}
			;break;
			case (int)5: {
				hx::AddEq(this->fPos,(int)3);
			}
			;break;
			case (int)6: {
				hx::AddEq(this->fPos,(int)4);
			}
			;break;
			case (int)7: {
				hx::AddEq(this->fPos,(int)4);
			}
			;break;
			case (int)8: {
				hx::AddEq(this->fPos,(int)5);
				hx::AddEq(this->oPos,(int)1);
			}
			;break;
			case (int)10: {
				hx::AddEq(this->oPos,(int)4);
			}
			;break;
			case (int)11: {
				Dynamic();
			}
			;break;
			case (int)12: {
				hx::AddEq(this->oPos,(int)2);
				hx::AddEq(this->bPos,(int)2);
			}
			;break;
			case (int)13: {
				hx::AddEq(this->oPos,(int)4);
				hx::AddEq(this->iiPos,(int)2);
				hx::AddEq(this->ffPos,(int)1);
				hx::AddEq(this->fPos,(int)1);
			}
			;break;
			case (int)14: {
				hx::AddEq(this->oPos,(int)4);
				hx::AddEq(this->iPos,(int)1);
				hx::AddEq(this->fPos,(int)2);
				hx::AddEq(this->bPos,(int)1);
			}
			;break;
			case (int)15: {
				hx::AddEq(this->fPos,(int)2);
			}
			;break;
			case (int)16: {
				hx::AddEq(this->fPos,(int)2);
			}
			;break;
			case (int)17: {
				hx::AddEq(this->oPos,(int)1);
			}
			;break;
			default: {
				Dynamic();
			}
		}
	}
	this->prev = ::openfl::_internal::renderer::DrawCommandType_obj::BEGIN_FILL;
	return hx::ObjectPtr<OBJ_>(this);
}


HX_DEFINE_DYNAMIC_FUNC0(DrawCommandReader_obj,readBeginFill,return )

::openfl::_internal::renderer::DrawCommandReader DrawCommandReader_obj::readBeginGradientFill( ){
	{
		::openfl::_internal::renderer::DrawCommandType tmp = this->prev;
		::openfl::_internal::renderer::DrawCommandType _g = tmp;
		switch( (int)(_g->__Index())){
			case (int)0: {
				hx::AddEq(this->oPos,(int)2);
				hx::AddEq(this->bPos,(int)2);
			}
			;break;
			case (int)1: {
				hx::AddEq(this->iPos,(int)1);
				hx::AddEq(this->fPos,(int)1);
			}
			;break;
			case (int)2: {
				hx::AddEq(this->oPos,(int)4);
				hx::AddEq(this->iiPos,(int)2);
				hx::AddEq(this->ffPos,(int)1);
				hx::AddEq(this->fPos,(int)1);
			}
			;break;
			case (int)3: {
				hx::AddEq(this->fPos,(int)6);
			}
			;break;
			case (int)4: {
				hx::AddEq(this->fPos,(int)4);
			}
			;break;
			case (int)5: {
				hx::AddEq(this->fPos,(int)3);
			}
			;break;
			case (int)6: {
				hx::AddEq(this->fPos,(int)4);
			}
			;break;
			case (int)7: {
				hx::AddEq(this->fPos,(int)4);
			}
			;break;
			case (int)8: {
				hx::AddEq(this->fPos,(int)5);
				hx::AddEq(this->oPos,(int)1);
			}
			;break;
			case (int)10: {
				hx::AddEq(this->oPos,(int)4);
			}
			;break;
			case (int)11: {
				Dynamic();
			}
			;break;
			case (int)12: {
				hx::AddEq(this->oPos,(int)2);
				hx::AddEq(this->bPos,(int)2);
			}
			;break;
			case (int)13: {
				hx::AddEq(this->oPos,(int)4);
				hx::AddEq(this->iiPos,(int)2);
				hx::AddEq(this->ffPos,(int)1);
				hx::AddEq(this->fPos,(int)1);
			}
			;break;
			case (int)14: {
				hx::AddEq(this->oPos,(int)4);
				hx::AddEq(this->iPos,(int)1);
				hx::AddEq(this->fPos,(int)2);
				hx::AddEq(this->bPos,(int)1);
			}
			;break;
			case (int)15: {
				hx::AddEq(this->fPos,(int)2);
			}
			;break;
			case (int)16: {
				hx::AddEq(this->fPos,(int)2);
			}
			;break;
			case (int)17: {
				hx::AddEq(this->oPos,(int)1);
			}
			;break;
			default: {
				Dynamic();
			}
		}
	}
	this->prev = ::openfl::_internal::renderer::DrawCommandType_obj::BEGIN_GRADIENT_FILL;
	return hx::ObjectPtr<OBJ_>(this);
}


HX_DEFINE_DYNAMIC_FUNC0(DrawCommandReader_obj,readBeginGradientFill,return )

::openfl::_internal::renderer::DrawCommandReader DrawCommandReader_obj::readCubicCurveTo( ){
	{
		::openfl::_internal::renderer::DrawCommandType tmp = this->prev;
		::openfl::_internal::renderer::DrawCommandType _g = tmp;
		switch( (int)(_g->__Index())){
			case (int)0: {
				hx::AddEq(this->oPos,(int)2);
				hx::AddEq(this->bPos,(int)2);
			}
			;break;
			case (int)1: {
				hx::AddEq(this->iPos,(int)1);
				hx::AddEq(this->fPos,(int)1);
			}
			;break;
			case (int)2: {
				hx::AddEq(this->oPos,(int)4);
				hx::AddEq(this->iiPos,(int)2);
				hx::AddEq(this->ffPos,(int)1);
				hx::AddEq(this->fPos,(int)1);
			}
			;break;
			case (int)3: {
				hx::AddEq(this->fPos,(int)6);
			}
			;break;
			case (int)4: {
				hx::AddEq(this->fPos,(int)4);
			}
			;break;
			case (int)5: {
				hx::AddEq(this->fPos,(int)3);
			}
			;break;
			case (int)6: {
				hx::AddEq(this->fPos,(int)4);
			}
			;break;
			case (int)7: {
				hx::AddEq(this->fPos,(int)4);
			}
			;break;
			case (int)8: {
				hx::AddEq(this->fPos,(int)5);
				hx::AddEq(this->oPos,(int)1);
			}
			;break;
			case (int)10: {
				hx::AddEq(this->oPos,(int)4);
			}
			;break;
			case (int)11: {
				Dynamic();
			}
			;break;
			case (int)12: {
				hx::AddEq(this->oPos,(int)2);
				hx::AddEq(this->bPos,(int)2);
			}
			;break;
			case (int)13: {
				hx::AddEq(this->oPos,(int)4);
				hx::AddEq(this->iiPos,(int)2);
				hx::AddEq(this->ffPos,(int)1);
				hx::AddEq(this->fPos,(int)1);
			}
			;break;
			case (int)14: {
				hx::AddEq(this->oPos,(int)4);
				hx::AddEq(this->iPos,(int)1);
				hx::AddEq(this->fPos,(int)2);
				hx::AddEq(this->bPos,(int)1);
			}
			;break;
			case (int)15: {
				hx::AddEq(this->fPos,(int)2);
			}
			;break;
			case (int)16: {
				hx::AddEq(this->fPos,(int)2);
			}
			;break;
			case (int)17: {
				hx::AddEq(this->oPos,(int)1);
			}
			;break;
			default: {
				Dynamic();
			}
		}
	}
	this->prev = ::openfl::_internal::renderer::DrawCommandType_obj::CUBIC_CURVE_TO;
	return hx::ObjectPtr<OBJ_>(this);
}


HX_DEFINE_DYNAMIC_FUNC0(DrawCommandReader_obj,readCubicCurveTo,return )

::openfl::_internal::renderer::DrawCommandReader DrawCommandReader_obj::readCurveTo( ){
	{
		::openfl::_internal::renderer::DrawCommandType tmp = this->prev;
		::openfl::_internal::renderer::DrawCommandType _g = tmp;
		switch( (int)(_g->__Index())){
			case (int)0: {
				hx::AddEq(this->oPos,(int)2);
				hx::AddEq(this->bPos,(int)2);
			}
			;break;
			case (int)1: {
				hx::AddEq(this->iPos,(int)1);
				hx::AddEq(this->fPos,(int)1);
			}
			;break;
			case (int)2: {
				hx::AddEq(this->oPos,(int)4);
				hx::AddEq(this->iiPos,(int)2);
				hx::AddEq(this->ffPos,(int)1);
				hx::AddEq(this->fPos,(int)1);
			}
			;break;
			case (int)3: {
				hx::AddEq(this->fPos,(int)6);
			}
			;break;
			case (int)4: {
				hx::AddEq(this->fPos,(int)4);
			}
			;break;
			case (int)5: {
				hx::AddEq(this->fPos,(int)3);
			}
			;break;
			case (int)6: {
				hx::AddEq(this->fPos,(int)4);
			}
			;break;
			case (int)7: {
				hx::AddEq(this->fPos,(int)4);
			}
			;break;
			case (int)8: {
				hx::AddEq(this->fPos,(int)5);
				hx::AddEq(this->oPos,(int)1);
			}
			;break;
			case (int)10: {
				hx::AddEq(this->oPos,(int)4);
			}
			;break;
			case (int)11: {
				Dynamic();
			}
			;break;
			case (int)12: {
				hx::AddEq(this->oPos,(int)2);
				hx::AddEq(this->bPos,(int)2);
			}
			;break;
			case (int)13: {
				hx::AddEq(this->oPos,(int)4);
				hx::AddEq(this->iiPos,(int)2);
				hx::AddEq(this->ffPos,(int)1);
				hx::AddEq(this->fPos,(int)1);
			}
			;break;
			case (int)14: {
				hx::AddEq(this->oPos,(int)4);
				hx::AddEq(this->iPos,(int)1);
				hx::AddEq(this->fPos,(int)2);
				hx::AddEq(this->bPos,(int)1);
			}
			;break;
			case (int)15: {
				hx::AddEq(this->fPos,(int)2);
			}
			;break;
			case (int)16: {
				hx::AddEq(this->fPos,(int)2);
			}
			;break;
			case (int)17: {
				hx::AddEq(this->oPos,(int)1);
			}
			;break;
			default: {
				Dynamic();
			}
		}
	}
	this->prev = ::openfl::_internal::renderer::DrawCommandType_obj::CURVE_TO;
	return hx::ObjectPtr<OBJ_>(this);
}


HX_DEFINE_DYNAMIC_FUNC0(DrawCommandReader_obj,readCurveTo,return )

::openfl::_internal::renderer::DrawCommandReader DrawCommandReader_obj::readDrawCircle( ){
	{
		::openfl::_internal::renderer::DrawCommandType tmp = this->prev;
		::openfl::_internal::renderer::DrawCommandType _g = tmp;
		switch( (int)(_g->__Index())){
			case (int)0: {
				hx::AddEq(this->oPos,(int)2);
				hx::AddEq(this->bPos,(int)2);
			}
			;break;
			case (int)1: {
				hx::AddEq(this->iPos,(int)1);
				hx::AddEq(this->fPos,(int)1);
			}
			;break;
			case (int)2: {
				hx::AddEq(this->oPos,(int)4);
				hx::AddEq(this->iiPos,(int)2);
				hx::AddEq(this->ffPos,(int)1);
				hx::AddEq(this->fPos,(int)1);
			}
			;break;
			case (int)3: {
				hx::AddEq(this->fPos,(int)6);
			}
			;break;
			case (int)4: {
				hx::AddEq(this->fPos,(int)4);
			}
			;break;
			case (int)5: {
				hx::AddEq(this->fPos,(int)3);
			}
			;break;
			case (int)6: {
				hx::AddEq(this->fPos,(int)4);
			}
			;break;
			case (int)7: {
				hx::AddEq(this->fPos,(int)4);
			}
			;break;
			case (int)8: {
				hx::AddEq(this->fPos,(int)5);
				hx::AddEq(this->oPos,(int)1);
			}
			;break;
			case (int)10: {
				hx::AddEq(this->oPos,(int)4);
			}
			;break;
			case (int)11: {
				Dynamic();
			}
			;break;
			case (int)12: {
				hx::AddEq(this->oPos,(int)2);
				hx::AddEq(this->bPos,(int)2);
			}
			;break;
			case (int)13: {
				hx::AddEq(this->oPos,(int)4);
				hx::AddEq(this->iiPos,(int)2);
				hx::AddEq(this->ffPos,(int)1);
				hx::AddEq(this->fPos,(int)1);
			}
			;break;
			case (int)14: {
				hx::AddEq(this->oPos,(int)4);
				hx::AddEq(this->iPos,(int)1);
				hx::AddEq(this->fPos,(int)2);
				hx::AddEq(this->bPos,(int)1);
			}
			;break;
			case (int)15: {
				hx::AddEq(this->fPos,(int)2);
			}
			;break;
			case (int)16: {
				hx::AddEq(this->fPos,(int)2);
			}
			;break;
			case (int)17: {
				hx::AddEq(this->oPos,(int)1);
			}
			;break;
			default: {
				Dynamic();
			}
		}
	}
	this->prev = ::openfl::_internal::renderer::DrawCommandType_obj::DRAW_CIRCLE;
	return hx::ObjectPtr<OBJ_>(this);
}


HX_DEFINE_DYNAMIC_FUNC0(DrawCommandReader_obj,readDrawCircle,return )

::openfl::_internal::renderer::DrawCommandReader DrawCommandReader_obj::readDrawEllipse( ){
	{
		::openfl::_internal::renderer::DrawCommandType tmp = this->prev;
		::openfl::_internal::renderer::DrawCommandType _g = tmp;
		switch( (int)(_g->__Index())){
			case (int)0: {
				hx::AddEq(this->oPos,(int)2);
				hx::AddEq(this->bPos,(int)2);
			}
			;break;
			case (int)1: {
				hx::AddEq(this->iPos,(int)1);
				hx::AddEq(this->fPos,(int)1);
			}
			;break;
			case (int)2: {
				hx::AddEq(this->oPos,(int)4);
				hx::AddEq(this->iiPos,(int)2);
				hx::AddEq(this->ffPos,(int)1);
				hx::AddEq(this->fPos,(int)1);
			}
			;break;
			case (int)3: {
				hx::AddEq(this->fPos,(int)6);
			}
			;break;
			case (int)4: {
				hx::AddEq(this->fPos,(int)4);
			}
			;break;
			case (int)5: {
				hx::AddEq(this->fPos,(int)3);
			}
			;break;
			case (int)6: {
				hx::AddEq(this->fPos,(int)4);
			}
			;break;
			case (int)7: {
				hx::AddEq(this->fPos,(int)4);
			}
			;break;
			case (int)8: {
				hx::AddEq(this->fPos,(int)5);
				hx::AddEq(this->oPos,(int)1);
			}
			;break;
			case (int)10: {
				hx::AddEq(this->oPos,(int)4);
			}
			;break;
			case (int)11: {
				Dynamic();
			}
			;break;
			case (int)12: {
				hx::AddEq(this->oPos,(int)2);
				hx::AddEq(this->bPos,(int)2);
			}
			;break;
			case (int)13: {
				hx::AddEq(this->oPos,(int)4);
				hx::AddEq(this->iiPos,(int)2);
				hx::AddEq(this->ffPos,(int)1);
				hx::AddEq(this->fPos,(int)1);
			}
			;break;
			case (int)14: {
				hx::AddEq(this->oPos,(int)4);
				hx::AddEq(this->iPos,(int)1);
				hx::AddEq(this->fPos,(int)2);
				hx::AddEq(this->bPos,(int)1);
			}
			;break;
			case (int)15: {
				hx::AddEq(this->fPos,(int)2);
			}
			;break;
			case (int)16: {
				hx::AddEq(this->fPos,(int)2);
			}
			;break;
			case (int)17: {
				hx::AddEq(this->oPos,(int)1);
			}
			;break;
			default: {
				Dynamic();
			}
		}
	}
	this->prev = ::openfl::_internal::renderer::DrawCommandType_obj::DRAW_ELLIPSE;
	return hx::ObjectPtr<OBJ_>(this);
}


HX_DEFINE_DYNAMIC_FUNC0(DrawCommandReader_obj,readDrawEllipse,return )

::openfl::_internal::renderer::DrawCommandReader DrawCommandReader_obj::readDrawRect( ){
	{
		::openfl::_internal::renderer::DrawCommandType tmp = this->prev;
		::openfl::_internal::renderer::DrawCommandType _g = tmp;
		switch( (int)(_g->__Index())){
			case (int)0: {
				hx::AddEq(this->oPos,(int)2);
				hx::AddEq(this->bPos,(int)2);
			}
			;break;
			case (int)1: {
				hx::AddEq(this->iPos,(int)1);
				hx::AddEq(this->fPos,(int)1);
			}
			;break;
			case (int)2: {
				hx::AddEq(this->oPos,(int)4);
				hx::AddEq(this->iiPos,(int)2);
				hx::AddEq(this->ffPos,(int)1);
				hx::AddEq(this->fPos,(int)1);
			}
			;break;
			case (int)3: {
				hx::AddEq(this->fPos,(int)6);
			}
			;break;
			case (int)4: {
				hx::AddEq(this->fPos,(int)4);
			}
			;break;
			case (int)5: {
				hx::AddEq(this->fPos,(int)3);
			}
			;break;
			case (int)6: {
				hx::AddEq(this->fPos,(int)4);
			}
			;break;
			case (int)7: {
				hx::AddEq(this->fPos,(int)4);
			}
			;break;
			case (int)8: {
				hx::AddEq(this->fPos,(int)5);
				hx::AddEq(this->oPos,(int)1);
			}
			;break;
			case (int)10: {
				hx::AddEq(this->oPos,(int)4);
			}
			;break;
			case (int)11: {
				Dynamic();
			}
			;break;
			case (int)12: {
				hx::AddEq(this->oPos,(int)2);
				hx::AddEq(this->bPos,(int)2);
			}
			;break;
			case (int)13: {
				hx::AddEq(this->oPos,(int)4);
				hx::AddEq(this->iiPos,(int)2);
				hx::AddEq(this->ffPos,(int)1);
				hx::AddEq(this->fPos,(int)1);
			}
			;break;
			case (int)14: {
				hx::AddEq(this->oPos,(int)4);
				hx::AddEq(this->iPos,(int)1);
				hx::AddEq(this->fPos,(int)2);
				hx::AddEq(this->bPos,(int)1);
			}
			;break;
			case (int)15: {
				hx::AddEq(this->fPos,(int)2);
			}
			;break;
			case (int)16: {
				hx::AddEq(this->fPos,(int)2);
			}
			;break;
			case (int)17: {
				hx::AddEq(this->oPos,(int)1);
			}
			;break;
			default: {
				Dynamic();
			}
		}
	}
	this->prev = ::openfl::_internal::renderer::DrawCommandType_obj::DRAW_RECT;
	return hx::ObjectPtr<OBJ_>(this);
}


HX_DEFINE_DYNAMIC_FUNC0(DrawCommandReader_obj,readDrawRect,return )

::openfl::_internal::renderer::DrawCommandReader DrawCommandReader_obj::readDrawRoundRect( ){
	{
		::openfl::_internal::renderer::DrawCommandType tmp = this->prev;
		::openfl::_internal::renderer::DrawCommandType _g = tmp;
		switch( (int)(_g->__Index())){
			case (int)0: {
				hx::AddEq(this->oPos,(int)2);
				hx::AddEq(this->bPos,(int)2);
			}
			;break;
			case (int)1: {
				hx::AddEq(this->iPos,(int)1);
				hx::AddEq(this->fPos,(int)1);
			}
			;break;
			case (int)2: {
				hx::AddEq(this->oPos,(int)4);
				hx::AddEq(this->iiPos,(int)2);
				hx::AddEq(this->ffPos,(int)1);
				hx::AddEq(this->fPos,(int)1);
			}
			;break;
			case (int)3: {
				hx::AddEq(this->fPos,(int)6);
			}
			;break;
			case (int)4: {
				hx::AddEq(this->fPos,(int)4);
			}
			;break;
			case (int)5: {
				hx::AddEq(this->fPos,(int)3);
			}
			;break;
			case (int)6: {
				hx::AddEq(this->fPos,(int)4);
			}
			;break;
			case (int)7: {
				hx::AddEq(this->fPos,(int)4);
			}
			;break;
			case (int)8: {
				hx::AddEq(this->fPos,(int)5);
				hx::AddEq(this->oPos,(int)1);
			}
			;break;
			case (int)10: {
				hx::AddEq(this->oPos,(int)4);
			}
			;break;
			case (int)11: {
				Dynamic();
			}
			;break;
			case (int)12: {
				hx::AddEq(this->oPos,(int)2);
				hx::AddEq(this->bPos,(int)2);
			}
			;break;
			case (int)13: {
				hx::AddEq(this->oPos,(int)4);
				hx::AddEq(this->iiPos,(int)2);
				hx::AddEq(this->ffPos,(int)1);
				hx::AddEq(this->fPos,(int)1);
			}
			;break;
			case (int)14: {
				hx::AddEq(this->oPos,(int)4);
				hx::AddEq(this->iPos,(int)1);
				hx::AddEq(this->fPos,(int)2);
				hx::AddEq(this->bPos,(int)1);
			}
			;break;
			case (int)15: {
				hx::AddEq(this->fPos,(int)2);
			}
			;break;
			case (int)16: {
				hx::AddEq(this->fPos,(int)2);
			}
			;break;
			case (int)17: {
				hx::AddEq(this->oPos,(int)1);
			}
			;break;
			default: {
				Dynamic();
			}
		}
	}
	this->prev = ::openfl::_internal::renderer::DrawCommandType_obj::DRAW_ROUND_RECT;
	return hx::ObjectPtr<OBJ_>(this);
}


HX_DEFINE_DYNAMIC_FUNC0(DrawCommandReader_obj,readDrawRoundRect,return )

::openfl::_internal::renderer::DrawCommandReader DrawCommandReader_obj::readDrawTriangles( ){
	{
		::openfl::_internal::renderer::DrawCommandType tmp = this->prev;
		::openfl::_internal::renderer::DrawCommandType _g = tmp;
		switch( (int)(_g->__Index())){
			case (int)0: {
				hx::AddEq(this->oPos,(int)2);
				hx::AddEq(this->bPos,(int)2);
			}
			;break;
			case (int)1: {
				hx::AddEq(this->iPos,(int)1);
				hx::AddEq(this->fPos,(int)1);
			}
			;break;
			case (int)2: {
				hx::AddEq(this->oPos,(int)4);
				hx::AddEq(this->iiPos,(int)2);
				hx::AddEq(this->ffPos,(int)1);
				hx::AddEq(this->fPos,(int)1);
			}
			;break;
			case (int)3: {
				hx::AddEq(this->fPos,(int)6);
			}
			;break;
			case (int)4: {
				hx::AddEq(this->fPos,(int)4);
			}
			;break;
			case (int)5: {
				hx::AddEq(this->fPos,(int)3);
			}
			;break;
			case (int)6: {
				hx::AddEq(this->fPos,(int)4);
			}
			;break;
			case (int)7: {
				hx::AddEq(this->fPos,(int)4);
			}
			;break;
			case (int)8: {
				hx::AddEq(this->fPos,(int)5);
				hx::AddEq(this->oPos,(int)1);
			}
			;break;
			case (int)10: {
				hx::AddEq(this->oPos,(int)4);
			}
			;break;
			case (int)11: {
				Dynamic();
			}
			;break;
			case (int)12: {
				hx::AddEq(this->oPos,(int)2);
				hx::AddEq(this->bPos,(int)2);
			}
			;break;
			case (int)13: {
				hx::AddEq(this->oPos,(int)4);
				hx::AddEq(this->iiPos,(int)2);
				hx::AddEq(this->ffPos,(int)1);
				hx::AddEq(this->fPos,(int)1);
			}
			;break;
			case (int)14: {
				hx::AddEq(this->oPos,(int)4);
				hx::AddEq(this->iPos,(int)1);
				hx::AddEq(this->fPos,(int)2);
				hx::AddEq(this->bPos,(int)1);
			}
			;break;
			case (int)15: {
				hx::AddEq(this->fPos,(int)2);
			}
			;break;
			case (int)16: {
				hx::AddEq(this->fPos,(int)2);
			}
			;break;
			case (int)17: {
				hx::AddEq(this->oPos,(int)1);
			}
			;break;
			default: {
				Dynamic();
			}
		}
	}
	this->prev = ::openfl::_internal::renderer::DrawCommandType_obj::DRAW_TRIANGLES;
	return hx::ObjectPtr<OBJ_>(this);
}


HX_DEFINE_DYNAMIC_FUNC0(DrawCommandReader_obj,readDrawTriangles,return )

::openfl::_internal::renderer::DrawCommandReader DrawCommandReader_obj::readEndFill( ){
	{
		::openfl::_internal::renderer::DrawCommandType tmp = this->prev;
		::openfl::_internal::renderer::DrawCommandType _g = tmp;
		switch( (int)(_g->__Index())){
			case (int)0: {
				hx::AddEq(this->oPos,(int)2);
				hx::AddEq(this->bPos,(int)2);
			}
			;break;
			case (int)1: {
				hx::AddEq(this->iPos,(int)1);
				hx::AddEq(this->fPos,(int)1);
			}
			;break;
			case (int)2: {
				hx::AddEq(this->oPos,(int)4);
				hx::AddEq(this->iiPos,(int)2);
				hx::AddEq(this->ffPos,(int)1);
				hx::AddEq(this->fPos,(int)1);
			}
			;break;
			case (int)3: {
				hx::AddEq(this->fPos,(int)6);
			}
			;break;
			case (int)4: {
				hx::AddEq(this->fPos,(int)4);
			}
			;break;
			case (int)5: {
				hx::AddEq(this->fPos,(int)3);
			}
			;break;
			case (int)6: {
				hx::AddEq(this->fPos,(int)4);
			}
			;break;
			case (int)7: {
				hx::AddEq(this->fPos,(int)4);
			}
			;break;
			case (int)8: {
				hx::AddEq(this->fPos,(int)5);
				hx::AddEq(this->oPos,(int)1);
			}
			;break;
			case (int)10: {
				hx::AddEq(this->oPos,(int)4);
			}
			;break;
			case (int)11: {
				Dynamic();
			}
			;break;
			case (int)12: {
				hx::AddEq(this->oPos,(int)2);
				hx::AddEq(this->bPos,(int)2);
			}
			;break;
			case (int)13: {
				hx::AddEq(this->oPos,(int)4);
				hx::AddEq(this->iiPos,(int)2);
				hx::AddEq(this->ffPos,(int)1);
				hx::AddEq(this->fPos,(int)1);
			}
			;break;
			case (int)14: {
				hx::AddEq(this->oPos,(int)4);
				hx::AddEq(this->iPos,(int)1);
				hx::AddEq(this->fPos,(int)2);
				hx::AddEq(this->bPos,(int)1);
			}
			;break;
			case (int)15: {
				hx::AddEq(this->fPos,(int)2);
			}
			;break;
			case (int)16: {
				hx::AddEq(this->fPos,(int)2);
			}
			;break;
			case (int)17: {
				hx::AddEq(this->oPos,(int)1);
			}
			;break;
			default: {
				Dynamic();
			}
		}
	}
	this->prev = ::openfl::_internal::renderer::DrawCommandType_obj::END_FILL;
	return hx::ObjectPtr<OBJ_>(this);
}


HX_DEFINE_DYNAMIC_FUNC0(DrawCommandReader_obj,readEndFill,return )

::openfl::_internal::renderer::DrawCommandReader DrawCommandReader_obj::readLineBitmapStyle( ){
	{
		::openfl::_internal::renderer::DrawCommandType tmp = this->prev;
		::openfl::_internal::renderer::DrawCommandType _g = tmp;
		switch( (int)(_g->__Index())){
			case (int)0: {
				hx::AddEq(this->oPos,(int)2);
				hx::AddEq(this->bPos,(int)2);
			}
			;break;
			case (int)1: {
				hx::AddEq(this->iPos,(int)1);
				hx::AddEq(this->fPos,(int)1);
			}
			;break;
			case (int)2: {
				hx::AddEq(this->oPos,(int)4);
				hx::AddEq(this->iiPos,(int)2);
				hx::AddEq(this->ffPos,(int)1);
				hx::AddEq(this->fPos,(int)1);
			}
			;break;
			case (int)3: {
				hx::AddEq(this->fPos,(int)6);
			}
			;break;
			case (int)4: {
				hx::AddEq(this->fPos,(int)4);
			}
			;break;
			case (int)5: {
				hx::AddEq(this->fPos,(int)3);
			}
			;break;
			case (int)6: {
				hx::AddEq(this->fPos,(int)4);
			}
			;break;
			case (int)7: {
				hx::AddEq(this->fPos,(int)4);
			}
			;break;
			case (int)8: {
				hx::AddEq(this->fPos,(int)5);
				hx::AddEq(this->oPos,(int)1);
			}
			;break;
			case (int)10: {
				hx::AddEq(this->oPos,(int)4);
			}
			;break;
			case (int)11: {
				Dynamic();
			}
			;break;
			case (int)12: {
				hx::AddEq(this->oPos,(int)2);
				hx::AddEq(this->bPos,(int)2);
			}
			;break;
			case (int)13: {
				hx::AddEq(this->oPos,(int)4);
				hx::AddEq(this->iiPos,(int)2);
				hx::AddEq(this->ffPos,(int)1);
				hx::AddEq(this->fPos,(int)1);
			}
			;break;
			case (int)14: {
				hx::AddEq(this->oPos,(int)4);
				hx::AddEq(this->iPos,(int)1);
				hx::AddEq(this->fPos,(int)2);
				hx::AddEq(this->bPos,(int)1);
			}
			;break;
			case (int)15: {
				hx::AddEq(this->fPos,(int)2);
			}
			;break;
			case (int)16: {
				hx::AddEq(this->fPos,(int)2);
			}
			;break;
			case (int)17: {
				hx::AddEq(this->oPos,(int)1);
			}
			;break;
			default: {
				Dynamic();
			}
		}
	}
	this->prev = ::openfl::_internal::renderer::DrawCommandType_obj::LINE_BITMAP_STYLE;
	return hx::ObjectPtr<OBJ_>(this);
}


HX_DEFINE_DYNAMIC_FUNC0(DrawCommandReader_obj,readLineBitmapStyle,return )

::openfl::_internal::renderer::DrawCommandReader DrawCommandReader_obj::readLineGradientStyle( ){
	{
		::openfl::_internal::renderer::DrawCommandType tmp = this->prev;
		::openfl::_internal::renderer::DrawCommandType _g = tmp;
		switch( (int)(_g->__Index())){
			case (int)0: {
				hx::AddEq(this->oPos,(int)2);
				hx::AddEq(this->bPos,(int)2);
			}
			;break;
			case (int)1: {
				hx::AddEq(this->iPos,(int)1);
				hx::AddEq(this->fPos,(int)1);
			}
			;break;
			case (int)2: {
				hx::AddEq(this->oPos,(int)4);
				hx::AddEq(this->iiPos,(int)2);
				hx::AddEq(this->ffPos,(int)1);
				hx::AddEq(this->fPos,(int)1);
			}
			;break;
			case (int)3: {
				hx::AddEq(this->fPos,(int)6);
			}
			;break;
			case (int)4: {
				hx::AddEq(this->fPos,(int)4);
			}
			;break;
			case (int)5: {
				hx::AddEq(this->fPos,(int)3);
			}
			;break;
			case (int)6: {
				hx::AddEq(this->fPos,(int)4);
			}
			;break;
			case (int)7: {
				hx::AddEq(this->fPos,(int)4);
			}
			;break;
			case (int)8: {
				hx::AddEq(this->fPos,(int)5);
				hx::AddEq(this->oPos,(int)1);
			}
			;break;
			case (int)10: {
				hx::AddEq(this->oPos,(int)4);
			}
			;break;
			case (int)11: {
				Dynamic();
			}
			;break;
			case (int)12: {
				hx::AddEq(this->oPos,(int)2);
				hx::AddEq(this->bPos,(int)2);
			}
			;break;
			case (int)13: {
				hx::AddEq(this->oPos,(int)4);
				hx::AddEq(this->iiPos,(int)2);
				hx::AddEq(this->ffPos,(int)1);
				hx::AddEq(this->fPos,(int)1);
			}
			;break;
			case (int)14: {
				hx::AddEq(this->oPos,(int)4);
				hx::AddEq(this->iPos,(int)1);
				hx::AddEq(this->fPos,(int)2);
				hx::AddEq(this->bPos,(int)1);
			}
			;break;
			case (int)15: {
				hx::AddEq(this->fPos,(int)2);
			}
			;break;
			case (int)16: {
				hx::AddEq(this->fPos,(int)2);
			}
			;break;
			case (int)17: {
				hx::AddEq(this->oPos,(int)1);
			}
			;break;
			default: {
				Dynamic();
			}
		}
	}
	this->prev = ::openfl::_internal::renderer::DrawCommandType_obj::LINE_GRADIENT_STYLE;
	return hx::ObjectPtr<OBJ_>(this);
}


HX_DEFINE_DYNAMIC_FUNC0(DrawCommandReader_obj,readLineGradientStyle,return )

::openfl::_internal::renderer::DrawCommandReader DrawCommandReader_obj::readLineStyle( ){
	{
		::openfl::_internal::renderer::DrawCommandType tmp = this->prev;
		::openfl::_internal::renderer::DrawCommandType _g = tmp;
		switch( (int)(_g->__Index())){
			case (int)0: {
				hx::AddEq(this->oPos,(int)2);
				hx::AddEq(this->bPos,(int)2);
			}
			;break;
			case (int)1: {
				hx::AddEq(this->iPos,(int)1);
				hx::AddEq(this->fPos,(int)1);
			}
			;break;
			case (int)2: {
				hx::AddEq(this->oPos,(int)4);
				hx::AddEq(this->iiPos,(int)2);
				hx::AddEq(this->ffPos,(int)1);
				hx::AddEq(this->fPos,(int)1);
			}
			;break;
			case (int)3: {
				hx::AddEq(this->fPos,(int)6);
			}
			;break;
			case (int)4: {
				hx::AddEq(this->fPos,(int)4);
			}
			;break;
			case (int)5: {
				hx::AddEq(this->fPos,(int)3);
			}
			;break;
			case (int)6: {
				hx::AddEq(this->fPos,(int)4);
			}
			;break;
			case (int)7: {
				hx::AddEq(this->fPos,(int)4);
			}
			;break;
			case (int)8: {
				hx::AddEq(this->fPos,(int)5);
				hx::AddEq(this->oPos,(int)1);
			}
			;break;
			case (int)10: {
				hx::AddEq(this->oPos,(int)4);
			}
			;break;
			case (int)11: {
				Dynamic();
			}
			;break;
			case (int)12: {
				hx::AddEq(this->oPos,(int)2);
				hx::AddEq(this->bPos,(int)2);
			}
			;break;
			case (int)13: {
				hx::AddEq(this->oPos,(int)4);
				hx::AddEq(this->iiPos,(int)2);
				hx::AddEq(this->ffPos,(int)1);
				hx::AddEq(this->fPos,(int)1);
			}
			;break;
			case (int)14: {
				hx::AddEq(this->oPos,(int)4);
				hx::AddEq(this->iPos,(int)1);
				hx::AddEq(this->fPos,(int)2);
				hx::AddEq(this->bPos,(int)1);
			}
			;break;
			case (int)15: {
				hx::AddEq(this->fPos,(int)2);
			}
			;break;
			case (int)16: {
				hx::AddEq(this->fPos,(int)2);
			}
			;break;
			case (int)17: {
				hx::AddEq(this->oPos,(int)1);
			}
			;break;
			default: {
				Dynamic();
			}
		}
	}
	this->prev = ::openfl::_internal::renderer::DrawCommandType_obj::LINE_STYLE;
	return hx::ObjectPtr<OBJ_>(this);
}


HX_DEFINE_DYNAMIC_FUNC0(DrawCommandReader_obj,readLineStyle,return )

::openfl::_internal::renderer::DrawCommandReader DrawCommandReader_obj::readLineTo( ){
	{
		::openfl::_internal::renderer::DrawCommandType tmp = this->prev;
		::openfl::_internal::renderer::DrawCommandType _g = tmp;
		switch( (int)(_g->__Index())){
			case (int)0: {
				hx::AddEq(this->oPos,(int)2);
				hx::AddEq(this->bPos,(int)2);
			}
			;break;
			case (int)1: {
				hx::AddEq(this->iPos,(int)1);
				hx::AddEq(this->fPos,(int)1);
			}
			;break;
			case (int)2: {
				hx::AddEq(this->oPos,(int)4);
				hx::AddEq(this->iiPos,(int)2);
				hx::AddEq(this->ffPos,(int)1);
				hx::AddEq(this->fPos,(int)1);
			}
			;break;
			case (int)3: {
				hx::AddEq(this->fPos,(int)6);
			}
			;break;
			case (int)4: {
				hx::AddEq(this->fPos,(int)4);
			}
			;break;
			case (int)5: {
				hx::AddEq(this->fPos,(int)3);
			}
			;break;
			case (int)6: {
				hx::AddEq(this->fPos,(int)4);
			}
			;break;
			case (int)7: {
				hx::AddEq(this->fPos,(int)4);
			}
			;break;
			case (int)8: {
				hx::AddEq(this->fPos,(int)5);
				hx::AddEq(this->oPos,(int)1);
			}
			;break;
			case (int)10: {
				hx::AddEq(this->oPos,(int)4);
			}
			;break;
			case (int)11: {
				Dynamic();
			}
			;break;
			case (int)12: {
				hx::AddEq(this->oPos,(int)2);
				hx::AddEq(this->bPos,(int)2);
			}
			;break;
			case (int)13: {
				hx::AddEq(this->oPos,(int)4);
				hx::AddEq(this->iiPos,(int)2);
				hx::AddEq(this->ffPos,(int)1);
				hx::AddEq(this->fPos,(int)1);
			}
			;break;
			case (int)14: {
				hx::AddEq(this->oPos,(int)4);
				hx::AddEq(this->iPos,(int)1);
				hx::AddEq(this->fPos,(int)2);
				hx::AddEq(this->bPos,(int)1);
			}
			;break;
			case (int)15: {
				hx::AddEq(this->fPos,(int)2);
			}
			;break;
			case (int)16: {
				hx::AddEq(this->fPos,(int)2);
			}
			;break;
			case (int)17: {
				hx::AddEq(this->oPos,(int)1);
			}
			;break;
			default: {
				Dynamic();
			}
		}
	}
	this->prev = ::openfl::_internal::renderer::DrawCommandType_obj::LINE_TO;
	return hx::ObjectPtr<OBJ_>(this);
}


HX_DEFINE_DYNAMIC_FUNC0(DrawCommandReader_obj,readLineTo,return )

::openfl::_internal::renderer::DrawCommandReader DrawCommandReader_obj::readMoveTo( ){
	{
		::openfl::_internal::renderer::DrawCommandType tmp = this->prev;
		::openfl::_internal::renderer::DrawCommandType _g = tmp;
		switch( (int)(_g->__Index())){
			case (int)0: {
				hx::AddEq(this->oPos,(int)2);
				hx::AddEq(this->bPos,(int)2);
			}
			;break;
			case (int)1: {
				hx::AddEq(this->iPos,(int)1);
				hx::AddEq(this->fPos,(int)1);
			}
			;break;
			case (int)2: {
				hx::AddEq(this->oPos,(int)4);
				hx::AddEq(this->iiPos,(int)2);
				hx::AddEq(this->ffPos,(int)1);
				hx::AddEq(this->fPos,(int)1);
			}
			;break;
			case (int)3: {
				hx::AddEq(this->fPos,(int)6);
			}
			;break;
			case (int)4: {
				hx::AddEq(this->fPos,(int)4);
			}
			;break;
			case (int)5: {
				hx::AddEq(this->fPos,(int)3);
			}
			;break;
			case (int)6: {
				hx::AddEq(this->fPos,(int)4);
			}
			;break;
			case (int)7: {
				hx::AddEq(this->fPos,(int)4);
			}
			;break;
			case (int)8: {
				hx::AddEq(this->fPos,(int)5);
				hx::AddEq(this->oPos,(int)1);
			}
			;break;
			case (int)10: {
				hx::AddEq(this->oPos,(int)4);
			}
			;break;
			case (int)11: {
				Dynamic();
			}
			;break;
			case (int)12: {
				hx::AddEq(this->oPos,(int)2);
				hx::AddEq(this->bPos,(int)2);
			}
			;break;
			case (int)13: {
				hx::AddEq(this->oPos,(int)4);
				hx::AddEq(this->iiPos,(int)2);
				hx::AddEq(this->ffPos,(int)1);
				hx::AddEq(this->fPos,(int)1);
			}
			;break;
			case (int)14: {
				hx::AddEq(this->oPos,(int)4);
				hx::AddEq(this->iPos,(int)1);
				hx::AddEq(this->fPos,(int)2);
				hx::AddEq(this->bPos,(int)1);
			}
			;break;
			case (int)15: {
				hx::AddEq(this->fPos,(int)2);
			}
			;break;
			case (int)16: {
				hx::AddEq(this->fPos,(int)2);
			}
			;break;
			case (int)17: {
				hx::AddEq(this->oPos,(int)1);
			}
			;break;
			default: {
				Dynamic();
			}
		}
	}
	this->prev = ::openfl::_internal::renderer::DrawCommandType_obj::MOVE_TO;
	return hx::ObjectPtr<OBJ_>(this);
}


HX_DEFINE_DYNAMIC_FUNC0(DrawCommandReader_obj,readMoveTo,return )

::openfl::_internal::renderer::DrawCommandReader DrawCommandReader_obj::readOverrideMatrix( ){
	{
		::openfl::_internal::renderer::DrawCommandType tmp = this->prev;
		::openfl::_internal::renderer::DrawCommandType _g = tmp;
		switch( (int)(_g->__Index())){
			case (int)0: {
				hx::AddEq(this->oPos,(int)2);
				hx::AddEq(this->bPos,(int)2);
			}
			;break;
			case (int)1: {
				hx::AddEq(this->iPos,(int)1);
				hx::AddEq(this->fPos,(int)1);
			}
			;break;
			case (int)2: {
				hx::AddEq(this->oPos,(int)4);
				hx::AddEq(this->iiPos,(int)2);
				hx::AddEq(this->ffPos,(int)1);
				hx::AddEq(this->fPos,(int)1);
			}
			;break;
			case (int)3: {
				hx::AddEq(this->fPos,(int)6);
			}
			;break;
			case (int)4: {
				hx::AddEq(this->fPos,(int)4);
			}
			;break;
			case (int)5: {
				hx::AddEq(this->fPos,(int)3);
			}
			;break;
			case (int)6: {
				hx::AddEq(this->fPos,(int)4);
			}
			;break;
			case (int)7: {
				hx::AddEq(this->fPos,(int)4);
			}
			;break;
			case (int)8: {
				hx::AddEq(this->fPos,(int)5);
				hx::AddEq(this->oPos,(int)1);
			}
			;break;
			case (int)10: {
				hx::AddEq(this->oPos,(int)4);
			}
			;break;
			case (int)11: {
				Dynamic();
			}
			;break;
			case (int)12: {
				hx::AddEq(this->oPos,(int)2);
				hx::AddEq(this->bPos,(int)2);
			}
			;break;
			case (int)13: {
				hx::AddEq(this->oPos,(int)4);
				hx::AddEq(this->iiPos,(int)2);
				hx::AddEq(this->ffPos,(int)1);
				hx::AddEq(this->fPos,(int)1);
			}
			;break;
			case (int)14: {
				hx::AddEq(this->oPos,(int)4);
				hx::AddEq(this->iPos,(int)1);
				hx::AddEq(this->fPos,(int)2);
				hx::AddEq(this->bPos,(int)1);
			}
			;break;
			case (int)15: {
				hx::AddEq(this->fPos,(int)2);
			}
			;break;
			case (int)16: {
				hx::AddEq(this->fPos,(int)2);
			}
			;break;
			case (int)17: {
				hx::AddEq(this->oPos,(int)1);
			}
			;break;
			default: {
				Dynamic();
			}
		}
	}
	this->prev = ::openfl::_internal::renderer::DrawCommandType_obj::OVERRIDE_MATRIX;
	return hx::ObjectPtr<OBJ_>(this);
}


HX_DEFINE_DYNAMIC_FUNC0(DrawCommandReader_obj,readOverrideMatrix,return )

Void DrawCommandReader_obj::reset( ){
{
		int tmp = this->tsPos = (int)0;
		int tmp1 = this->iiPos = tmp;
		int tmp2 = this->ffPos = tmp1;
		int tmp3 = this->oPos = tmp2;
		int tmp4 = this->fPos = tmp3;
		int tmp5 = this->iPos = tmp4;
		this->bPos = tmp5;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(DrawCommandReader_obj,reset,(void))

Void DrawCommandReader_obj::skip( ::openfl::_internal::renderer::DrawCommandType type){
{
		{
			::openfl::_internal::renderer::DrawCommandType tmp = this->prev;
			::openfl::_internal::renderer::DrawCommandType _g = tmp;
			switch( (int)(_g->__Index())){
				case (int)0: {
					hx::AddEq(this->oPos,(int)2);
					hx::AddEq(this->bPos,(int)2);
				}
				;break;
				case (int)1: {
					hx::AddEq(this->iPos,(int)1);
					hx::AddEq(this->fPos,(int)1);
				}
				;break;
				case (int)2: {
					hx::AddEq(this->oPos,(int)4);
					hx::AddEq(this->iiPos,(int)2);
					hx::AddEq(this->ffPos,(int)1);
					hx::AddEq(this->fPos,(int)1);
				}
				;break;
				case (int)3: {
					hx::AddEq(this->fPos,(int)6);
				}
				;break;
				case (int)4: {
					hx::AddEq(this->fPos,(int)4);
				}
				;break;
				case (int)5: {
					hx::AddEq(this->fPos,(int)3);
				}
				;break;
				case (int)6: {
					hx::AddEq(this->fPos,(int)4);
				}
				;break;
				case (int)7: {
					hx::AddEq(this->fPos,(int)4);
				}
				;break;
				case (int)8: {
					hx::AddEq(this->fPos,(int)5);
					hx::AddEq(this->oPos,(int)1);
				}
				;break;
				case (int)10: {
					hx::AddEq(this->oPos,(int)4);
				}
				;break;
				case (int)11: {
					Dynamic();
				}
				;break;
				case (int)12: {
					hx::AddEq(this->oPos,(int)2);
					hx::AddEq(this->bPos,(int)2);
				}
				;break;
				case (int)13: {
					hx::AddEq(this->oPos,(int)4);
					hx::AddEq(this->iiPos,(int)2);
					hx::AddEq(this->ffPos,(int)1);
					hx::AddEq(this->fPos,(int)1);
				}
				;break;
				case (int)14: {
					hx::AddEq(this->oPos,(int)4);
					hx::AddEq(this->iPos,(int)1);
					hx::AddEq(this->fPos,(int)2);
					hx::AddEq(this->bPos,(int)1);
				}
				;break;
				case (int)15: {
					hx::AddEq(this->fPos,(int)2);
				}
				;break;
				case (int)16: {
					hx::AddEq(this->fPos,(int)2);
				}
				;break;
				case (int)17: {
					hx::AddEq(this->oPos,(int)1);
				}
				;break;
				default: {
					Dynamic();
				}
			}
		}
		this->prev = type;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(DrawCommandReader_obj,skip,(void))


DrawCommandReader_obj::DrawCommandReader_obj()
{
}

void DrawCommandReader_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(DrawCommandReader);
	HX_MARK_MEMBER_NAME(buffer,"buffer");
	HX_MARK_MEMBER_NAME(bPos,"bPos");
	HX_MARK_MEMBER_NAME(iiPos,"iiPos");
	HX_MARK_MEMBER_NAME(iPos,"iPos");
	HX_MARK_MEMBER_NAME(ffPos,"ffPos");
	HX_MARK_MEMBER_NAME(fPos,"fPos");
	HX_MARK_MEMBER_NAME(oPos,"oPos");
	HX_MARK_MEMBER_NAME(prev,"prev");
	HX_MARK_MEMBER_NAME(tsPos,"tsPos");
	HX_MARK_END_CLASS();
}

void DrawCommandReader_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(buffer,"buffer");
	HX_VISIT_MEMBER_NAME(bPos,"bPos");
	HX_VISIT_MEMBER_NAME(iiPos,"iiPos");
	HX_VISIT_MEMBER_NAME(iPos,"iPos");
	HX_VISIT_MEMBER_NAME(ffPos,"ffPos");
	HX_VISIT_MEMBER_NAME(fPos,"fPos");
	HX_VISIT_MEMBER_NAME(oPos,"oPos");
	HX_VISIT_MEMBER_NAME(prev,"prev");
	HX_VISIT_MEMBER_NAME(tsPos,"tsPos");
}

Dynamic DrawCommandReader_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"int") ) { return _int_dyn(); }
		if (HX_FIELD_EQ(inName,"obj") ) { return obj_dyn(); }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"bPos") ) { return bPos; }
		if (HX_FIELD_EQ(inName,"iPos") ) { return iPos; }
		if (HX_FIELD_EQ(inName,"fPos") ) { return fPos; }
		if (HX_FIELD_EQ(inName,"oPos") ) { return oPos; }
		if (HX_FIELD_EQ(inName,"prev") ) { return prev; }
		if (HX_FIELD_EQ(inName,"bool") ) { return _bool_dyn(); }
		if (HX_FIELD_EQ(inName,"fArr") ) { return fArr_dyn(); }
		if (HX_FIELD_EQ(inName,"iArr") ) { return iArr_dyn(); }
		if (HX_FIELD_EQ(inName,"skip") ) { return skip_dyn(); }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"iiPos") ) { return iiPos; }
		if (HX_FIELD_EQ(inName,"ffPos") ) { return ffPos; }
		if (HX_FIELD_EQ(inName,"tsPos") ) { return tsPos; }
		if (HX_FIELD_EQ(inName,"float") ) { return _float_dyn(); }
		if (HX_FIELD_EQ(inName,"reset") ) { return reset_dyn(); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"buffer") ) { return buffer; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"advance") ) { return advance_dyn(); }
		if (HX_FIELD_EQ(inName,"destroy") ) { return destroy_dyn(); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"readLineTo") ) { return readLineTo_dyn(); }
		if (HX_FIELD_EQ(inName,"readMoveTo") ) { return readMoveTo_dyn(); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"readCurveTo") ) { return readCurveTo_dyn(); }
		if (HX_FIELD_EQ(inName,"readEndFill") ) { return readEndFill_dyn(); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"readDrawRect") ) { return readDrawRect_dyn(); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"readBeginFill") ) { return readBeginFill_dyn(); }
		if (HX_FIELD_EQ(inName,"readLineStyle") ) { return readLineStyle_dyn(); }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"readDrawCircle") ) { return readDrawCircle_dyn(); }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"readDrawEllipse") ) { return readDrawEllipse_dyn(); }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"readCubicCurveTo") ) { return readCubicCurveTo_dyn(); }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"readDrawRoundRect") ) { return readDrawRoundRect_dyn(); }
		if (HX_FIELD_EQ(inName,"readDrawTriangles") ) { return readDrawTriangles_dyn(); }
		break;
	case 18:
		if (HX_FIELD_EQ(inName,"readOverrideMatrix") ) { return readOverrideMatrix_dyn(); }
		break;
	case 19:
		if (HX_FIELD_EQ(inName,"readBeginBitmapFill") ) { return readBeginBitmapFill_dyn(); }
		if (HX_FIELD_EQ(inName,"readLineBitmapStyle") ) { return readLineBitmapStyle_dyn(); }
		break;
	case 21:
		if (HX_FIELD_EQ(inName,"readBeginGradientFill") ) { return readBeginGradientFill_dyn(); }
		if (HX_FIELD_EQ(inName,"readLineGradientStyle") ) { return readLineGradientStyle_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic DrawCommandReader_obj::__SetField(const ::String &inName,const Dynamic &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"bPos") ) { bPos=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"iPos") ) { iPos=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"fPos") ) { fPos=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"oPos") ) { oPos=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"prev") ) { prev=inValue.Cast< ::openfl::_internal::renderer::DrawCommandType >(); return inValue; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"iiPos") ) { iiPos=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"ffPos") ) { ffPos=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"tsPos") ) { tsPos=inValue.Cast< int >(); return inValue; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"buffer") ) { buffer=inValue.Cast< ::openfl::_internal::renderer::DrawCommandBuffer >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void DrawCommandReader_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("buffer","\x00","\xbd","\x94","\xd0"));
	outFields->push(HX_HCSTRING("bPos","\x52","\xfe","\x03","\x41"));
	outFields->push(HX_HCSTRING("iiPos","\x94","\x65","\xb7","\xba"));
	outFields->push(HX_HCSTRING("iPos","\xab","\x7c","\xa4","\x45"));
	outFields->push(HX_HCSTRING("ffPos","\x34","\x04","\x88","\xfe"));
	outFields->push(HX_HCSTRING("fPos","\xce","\xd8","\xa8","\x43"));
	outFields->push(HX_HCSTRING("oPos","\x65","\xc4","\x9b","\x49"));
	outFields->push(HX_HCSTRING("prev","\xf3","\xbe","\x5e","\x4a"));
	outFields->push(HX_HCSTRING("tsPos","\x55","\xe9","\xbb","\x16"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsObject /*::openfl::_internal::renderer::DrawCommandBuffer*/ ,(int)offsetof(DrawCommandReader_obj,buffer),HX_HCSTRING("buffer","\x00","\xbd","\x94","\xd0")},
	{hx::fsInt,(int)offsetof(DrawCommandReader_obj,bPos),HX_HCSTRING("bPos","\x52","\xfe","\x03","\x41")},
	{hx::fsInt,(int)offsetof(DrawCommandReader_obj,iiPos),HX_HCSTRING("iiPos","\x94","\x65","\xb7","\xba")},
	{hx::fsInt,(int)offsetof(DrawCommandReader_obj,iPos),HX_HCSTRING("iPos","\xab","\x7c","\xa4","\x45")},
	{hx::fsInt,(int)offsetof(DrawCommandReader_obj,ffPos),HX_HCSTRING("ffPos","\x34","\x04","\x88","\xfe")},
	{hx::fsInt,(int)offsetof(DrawCommandReader_obj,fPos),HX_HCSTRING("fPos","\xce","\xd8","\xa8","\x43")},
	{hx::fsInt,(int)offsetof(DrawCommandReader_obj,oPos),HX_HCSTRING("oPos","\x65","\xc4","\x9b","\x49")},
	{hx::fsObject /*::openfl::_internal::renderer::DrawCommandType*/ ,(int)offsetof(DrawCommandReader_obj,prev),HX_HCSTRING("prev","\xf3","\xbe","\x5e","\x4a")},
	{hx::fsInt,(int)offsetof(DrawCommandReader_obj,tsPos),HX_HCSTRING("tsPos","\x55","\xe9","\xbb","\x16")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo *sStaticStorageInfo = 0;
#endif

static ::String sMemberFields[] = {
	HX_HCSTRING("buffer","\x00","\xbd","\x94","\xd0"),
	HX_HCSTRING("bPos","\x52","\xfe","\x03","\x41"),
	HX_HCSTRING("iiPos","\x94","\x65","\xb7","\xba"),
	HX_HCSTRING("iPos","\xab","\x7c","\xa4","\x45"),
	HX_HCSTRING("ffPos","\x34","\x04","\x88","\xfe"),
	HX_HCSTRING("fPos","\xce","\xd8","\xa8","\x43"),
	HX_HCSTRING("oPos","\x65","\xc4","\x9b","\x49"),
	HX_HCSTRING("prev","\xf3","\xbe","\x5e","\x4a"),
	HX_HCSTRING("tsPos","\x55","\xe9","\xbb","\x16"),
	HX_HCSTRING("advance","\x82","\x08","\x0c","\xef"),
	HX_HCSTRING("bool","\x2a","\x84","\x1b","\x41"),
	HX_HCSTRING("destroy","\xfa","\x2c","\x86","\x24"),
	HX_HCSTRING("fArr","\x9b","\x79","\x9d","\x43"),
	HX_HCSTRING("float","\x9c","\xc5","\x96","\x02"),
	HX_HCSTRING("iArr","\x78","\x1d","\x99","\x45"),
	HX_HCSTRING("int","\xef","\x0c","\x50","\x00"),
	HX_HCSTRING("obj","\xf7","\x8f","\x54","\x00"),
	HX_HCSTRING("readBeginBitmapFill","\xe5","\xb6","\x06","\xb9"),
	HX_HCSTRING("readBeginFill","\x16","\x27","\x04","\x20"),
	HX_HCSTRING("readBeginGradientFill","\x26","\x90","\x8f","\x6c"),
	HX_HCSTRING("readCubicCurveTo","\x56","\x48","\x38","\x74"),
	HX_HCSTRING("readCurveTo","\x54","\xf3","\x73","\x21"),
	HX_HCSTRING("readDrawCircle","\x2a","\x04","\x0d","\x05"),
	HX_HCSTRING("readDrawEllipse","\x84","\x85","\x26","\x7c"),
	HX_HCSTRING("readDrawRect","\xbe","\x44","\x46","\x9b"),
	HX_HCSTRING("readDrawRoundRect","\xb8","\xea","\x3a","\x90"),
	HX_HCSTRING("readDrawTriangles","\xd1","\x6a","\xf8","\x8b"),
	HX_HCSTRING("readEndFill","\x48","\x1b","\xcc","\x78"),
	HX_HCSTRING("readLineBitmapStyle","\x78","\x2c","\x20","\x94"),
	HX_HCSTRING("readLineGradientStyle","\x57","\x78","\x7e","\x00"),
	HX_HCSTRING("readLineStyle","\x67","\x22","\x87","\x5e"),
	HX_HCSTRING("readLineTo","\x85","\x2a","\x1c","\xe6"),
	HX_HCSTRING("readMoveTo","\xe2","\xb6","\x28","\xc6"),
	HX_HCSTRING("readOverrideMatrix","\xa3","\x57","\x3b","\xea"),
	HX_HCSTRING("reset","\xcf","\x49","\xc8","\xe6"),
	HX_HCSTRING("skip","\x7f","\x16","\x55","\x4c"),
	::String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(DrawCommandReader_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(DrawCommandReader_obj::__mClass,"__mClass");
};

#endif

hx::Class DrawCommandReader_obj::__mClass;

void DrawCommandReader_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("openfl._internal.renderer.DrawCommandReader","\x6f","\xd6","\x3c","\xaa");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = hx::Class_obj::dupFunctions(sMemberFields);
	__mClass->mCanCast = hx::TCanCast< DrawCommandReader_obj >;
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
} // end namespace _internal
} // end namespace renderer
