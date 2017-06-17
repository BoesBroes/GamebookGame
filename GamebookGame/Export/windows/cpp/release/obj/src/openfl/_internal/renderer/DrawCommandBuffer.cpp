#include <hxcpp.h>

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
#ifndef INCLUDED_openfl_display_BitmapData
#include <openfl/display/BitmapData.h>
#endif
#ifndef INCLUDED_openfl_display_IBitmapDrawable
#include <openfl/display/IBitmapDrawable.h>
#endif
#ifndef INCLUDED_openfl_geom_Matrix
#include <openfl/geom/Matrix.h>
#endif
namespace openfl{
namespace _internal{
namespace renderer{

Void DrawCommandBuffer_obj::__construct()
{
{
	::openfl::_internal::renderer::DrawCommandBuffer tmp = ::openfl::_internal::renderer::DrawCommandBuffer_obj::empty;
	bool tmp1 = (tmp == null());
	if ((tmp1)){
		this->types = Array_obj< ::Dynamic >::__new();
		this->b = Array_obj< bool >::__new();
		this->i = Array_obj< int >::__new();
		this->f = Array_obj< Float >::__new();
		this->o = cpp::ArrayBase_obj::__new();
		this->ff = Array_obj< ::Dynamic >::__new();
		this->ii = Array_obj< ::Dynamic >::__new();
		this->copyOnWrite = true;
	}
	else{
		this->clear();
	}
}
;
	return null();
}

//DrawCommandBuffer_obj::~DrawCommandBuffer_obj() { }

Dynamic DrawCommandBuffer_obj::__CreateEmpty() { return  new DrawCommandBuffer_obj; }
hx::ObjectPtr< DrawCommandBuffer_obj > DrawCommandBuffer_obj::__new()
{  hx::ObjectPtr< DrawCommandBuffer_obj > _result_ = new DrawCommandBuffer_obj();
	_result_->__construct();
	return _result_;}

Dynamic DrawCommandBuffer_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< DrawCommandBuffer_obj > _result_ = new DrawCommandBuffer_obj();
	_result_->__construct();
	return _result_;}

::openfl::_internal::renderer::DrawCommandBuffer DrawCommandBuffer_obj::append( ::openfl::_internal::renderer::DrawCommandBuffer other){
	int tmp = this->get_length();
	bool tmp1 = (tmp == (int)0);
	if ((tmp1)){
		this->types = other->types;
		this->b = other->b;
		this->i = other->i;
		this->f = other->f;
		this->o = other->o;
		this->ff = other->ff;
		this->ii = other->ii;
		bool tmp2 = other->copyOnWrite = true;
		this->copyOnWrite = tmp2;
		::openfl::_internal::renderer::DrawCommandBuffer tmp3 = other;
		return tmp3;
	}
	::openfl::_internal::renderer::DrawCommandReader tmp2 = ::openfl::_internal::renderer::DrawCommandReader_obj::__new(other);
	::openfl::_internal::renderer::DrawCommandReader data = tmp2;
	{
		int _g = (int)0;
		Array< ::Dynamic > _g1 = other->types;
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
					::openfl::_internal::renderer::DrawCommandBuffer tmp7 = c->buffer;
					int tmp8 = c->oPos;
					int tmp9 = tmp8;
					Dynamic tmp10 = tmp7->o->__GetItem(tmp9);
					::openfl::display::BitmapData tmp11 = ((::openfl::display::BitmapData)(tmp10));
					::openfl::_internal::renderer::DrawCommandBuffer tmp12 = c->buffer;
					int tmp13 = c->oPos;
					int tmp14 = (tmp13 + (int)1);
					Dynamic tmp15 = tmp12->o->__GetItem(tmp14);
					::openfl::geom::Matrix tmp16 = ((::openfl::geom::Matrix)(tmp15));
					::openfl::_internal::renderer::DrawCommandBuffer tmp17 = c->buffer;
					int tmp18 = c->bPos;
					int tmp19 = tmp18;
					bool tmp20 = tmp17->b->__get(tmp19);
					::openfl::_internal::renderer::DrawCommandBuffer tmp21 = c->buffer;
					int tmp22 = c->bPos;
					int tmp23 = (tmp22 + (int)1);
					bool tmp24 = tmp21->b->__get(tmp23);
					this->beginBitmapFill(tmp11,tmp16,tmp20,tmp24);
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
					::openfl::_internal::renderer::DrawCommandBuffer tmp7 = c->buffer;
					int tmp8 = c->iPos;
					int tmp9 = tmp8;
					int tmp10 = tmp7->i->__get(tmp9);
					::openfl::_internal::renderer::DrawCommandBuffer tmp11 = c->buffer;
					int tmp12 = c->fPos;
					int tmp13 = tmp12;
					Float tmp14 = tmp11->f->__get(tmp13);
					this->beginFill(tmp10,tmp14);
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
					::openfl::_internal::renderer::DrawCommandBuffer tmp7 = c->buffer;
					int tmp8 = c->oPos;
					int tmp9 = tmp8;
					Dynamic tmp10 = tmp7->o->__GetItem(tmp9);
					Dynamic tmp11 = tmp10;
					::openfl::_internal::renderer::DrawCommandBuffer tmp12 = c->buffer;
					int tmp13 = c->iiPos;
					int tmp14 = tmp13;
					::openfl::_internal::renderer::DrawCommandBuffer tmp15 = c->buffer;
					int tmp16 = c->ffPos;
					int tmp17 = tmp16;
					::openfl::_internal::renderer::DrawCommandBuffer tmp18 = c->buffer;
					int tmp19 = c->iiPos;
					int tmp20 = (tmp19 + (int)1);
					::openfl::_internal::renderer::DrawCommandBuffer tmp21 = c->buffer;
					int tmp22 = c->oPos;
					int tmp23 = (tmp22 + (int)1);
					Dynamic tmp24 = tmp21->o->__GetItem(tmp23);
					::openfl::geom::Matrix tmp25 = ((::openfl::geom::Matrix)(tmp24));
					::openfl::_internal::renderer::DrawCommandBuffer tmp26 = c->buffer;
					int tmp27 = c->oPos;
					int tmp28 = (tmp27 + (int)2);
					Dynamic tmp29 = tmp26->o->__GetItem(tmp28);
					Dynamic tmp30 = tmp29;
					::openfl::_internal::renderer::DrawCommandBuffer tmp31 = c->buffer;
					int tmp32 = c->oPos;
					int tmp33 = (tmp32 + (int)3);
					Dynamic tmp34 = tmp31->o->__GetItem(tmp33);
					Dynamic tmp35 = tmp34;
					::openfl::_internal::renderer::DrawCommandBuffer tmp36 = c->buffer;
					int tmp37 = c->fPos;
					int tmp38 = tmp37;
					Float tmp39 = tmp36->f->__get(tmp38);
					Float tmp40 = tmp39;
					this->beginGradientFill(tmp11,tmp12->ii->__get(tmp14).StaticCast< Array< int > >(),tmp15->ff->__get(tmp17).StaticCast< Array< Float > >(),tmp18->ii->__get(tmp20).StaticCast< Array< int > >(),tmp25,tmp30,tmp35,tmp40);
				}
				;break;
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
					this->cubicCurveTo(tmp10,tmp14,tmp18,tmp22,tmp26,tmp30);
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
					this->curveTo(tmp10,tmp14,tmp18,tmp22);
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
					this->drawCircle(tmp10,tmp14,tmp18);
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
					this->drawEllipse(tmp10,tmp14,tmp18,tmp22);
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
					this->drawRect(tmp10,tmp14,tmp18,tmp22);
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
					this->drawRoundRect(tmp10,tmp14,tmp18,tmp22,tmp26,tmp31);
				}
				;break;
				case (int)10: {
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
						data->prev = ::openfl::_internal::renderer::DrawCommandType_obj::DRAW_TRIANGLES;
						tmp6 = data;
					}
					::openfl::_internal::renderer::DrawCommandReader c = tmp6;
					::openfl::_internal::renderer::DrawCommandBuffer tmp7 = c->buffer;
					int tmp8 = c->oPos;
					int tmp9 = tmp8;
					Dynamic tmp10 = tmp7->o->__GetItem(tmp9);
					::openfl::_Vector::FloatVector tmp11 = ((::openfl::_Vector::FloatVector)(tmp10));
					::openfl::_internal::renderer::DrawCommandBuffer tmp12 = c->buffer;
					int tmp13 = c->oPos;
					int tmp14 = (tmp13 + (int)1);
					Dynamic tmp15 = tmp12->o->__GetItem(tmp14);
					::openfl::_Vector::IntVector tmp16 = ((::openfl::_Vector::IntVector)(tmp15));
					::openfl::_internal::renderer::DrawCommandBuffer tmp17 = c->buffer;
					int tmp18 = c->oPos;
					int tmp19 = (tmp18 + (int)2);
					Dynamic tmp20 = tmp17->o->__GetItem(tmp19);
					::openfl::_Vector::FloatVector tmp21 = ((::openfl::_Vector::FloatVector)(tmp20));
					::openfl::_internal::renderer::DrawCommandBuffer tmp22 = c->buffer;
					int tmp23 = c->oPos;
					int tmp24 = (tmp23 + (int)3);
					Dynamic tmp25 = tmp22->o->__GetItem(tmp24);
					Dynamic tmp26 = tmp25;
					this->drawTriangles(tmp11,tmp16,tmp21,tmp26);
				}
				;break;
				case (int)11: {
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
						data->prev = ::openfl::_internal::renderer::DrawCommandType_obj::END_FILL;
						tmp6 = data;
					}
					::openfl::_internal::renderer::DrawCommandReader c = tmp6;
					this->endFill();
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
					::openfl::_internal::renderer::DrawCommandBuffer tmp7 = c->buffer;
					int tmp8 = c->oPos;
					int tmp9 = tmp8;
					Dynamic tmp10 = tmp7->o->__GetItem(tmp9);
					::openfl::display::BitmapData tmp11 = ((::openfl::display::BitmapData)(tmp10));
					::openfl::_internal::renderer::DrawCommandBuffer tmp12 = c->buffer;
					int tmp13 = c->oPos;
					int tmp14 = (tmp13 + (int)1);
					Dynamic tmp15 = tmp12->o->__GetItem(tmp14);
					::openfl::geom::Matrix tmp16 = ((::openfl::geom::Matrix)(tmp15));
					::openfl::_internal::renderer::DrawCommandBuffer tmp17 = c->buffer;
					int tmp18 = c->bPos;
					int tmp19 = tmp18;
					bool tmp20 = tmp17->b->__get(tmp19);
					bool tmp21 = tmp20;
					::openfl::_internal::renderer::DrawCommandBuffer tmp22 = c->buffer;
					int tmp23 = c->bPos;
					int tmp24 = (tmp23 + (int)1);
					bool tmp25 = tmp22->b->__get(tmp24);
					bool tmp26 = tmp25;
					this->lineBitmapStyle(tmp11,tmp16,tmp21,tmp26);
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
					::openfl::_internal::renderer::DrawCommandBuffer tmp7 = c->buffer;
					int tmp8 = c->oPos;
					int tmp9 = tmp8;
					Dynamic tmp10 = tmp7->o->__GetItem(tmp9);
					Dynamic tmp11 = tmp10;
					::openfl::_internal::renderer::DrawCommandBuffer tmp12 = c->buffer;
					int tmp13 = c->iiPos;
					int tmp14 = tmp13;
					::openfl::_internal::renderer::DrawCommandBuffer tmp15 = c->buffer;
					int tmp16 = c->ffPos;
					int tmp17 = tmp16;
					::openfl::_internal::renderer::DrawCommandBuffer tmp18 = c->buffer;
					int tmp19 = c->iiPos;
					int tmp20 = (tmp19 + (int)1);
					::openfl::_internal::renderer::DrawCommandBuffer tmp21 = c->buffer;
					int tmp22 = c->oPos;
					int tmp23 = (tmp22 + (int)1);
					Dynamic tmp24 = tmp21->o->__GetItem(tmp23);
					::openfl::geom::Matrix tmp25 = ((::openfl::geom::Matrix)(tmp24));
					::openfl::_internal::renderer::DrawCommandBuffer tmp26 = c->buffer;
					int tmp27 = c->oPos;
					int tmp28 = (tmp27 + (int)2);
					Dynamic tmp29 = tmp26->o->__GetItem(tmp28);
					Dynamic tmp30 = tmp29;
					::openfl::_internal::renderer::DrawCommandBuffer tmp31 = c->buffer;
					int tmp32 = c->oPos;
					int tmp33 = (tmp32 + (int)3);
					Dynamic tmp34 = tmp31->o->__GetItem(tmp33);
					Dynamic tmp35 = tmp34;
					::openfl::_internal::renderer::DrawCommandBuffer tmp36 = c->buffer;
					int tmp37 = c->fPos;
					int tmp38 = tmp37;
					Float tmp39 = tmp36->f->__get(tmp38);
					Float tmp40 = tmp39;
					this->lineGradientStyle(tmp11,tmp12->ii->__get(tmp14).StaticCast< Array< int > >(),tmp15->ff->__get(tmp17).StaticCast< Array< Float > >(),tmp18->ii->__get(tmp20).StaticCast< Array< int > >(),tmp25,tmp30,tmp35,tmp40);
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
					int tmp13 = c->iPos;
					int tmp14 = tmp13;
					int tmp15 = tmp12->i->__get(tmp14);
					int tmp16 = tmp15;
					::openfl::_internal::renderer::DrawCommandBuffer tmp17 = c->buffer;
					int tmp18 = c->fPos;
					int tmp19 = tmp18;
					Float tmp20 = tmp17->f->__get(tmp19);
					Float tmp21 = tmp20;
					::openfl::_internal::renderer::DrawCommandBuffer tmp22 = c->buffer;
					int tmp23 = c->bPos;
					int tmp24 = tmp23;
					bool tmp25 = tmp22->b->__get(tmp24);
					bool tmp26 = tmp25;
					::openfl::_internal::renderer::DrawCommandBuffer tmp27 = c->buffer;
					int tmp28 = c->oPos;
					int tmp29 = (tmp28 + (int)1);
					Dynamic tmp30 = tmp27->o->__GetItem(tmp29);
					Dynamic tmp31 = tmp30;
					::openfl::_internal::renderer::DrawCommandBuffer tmp32 = c->buffer;
					int tmp33 = c->oPos;
					int tmp34 = (tmp33 + (int)2);
					Dynamic tmp35 = tmp32->o->__GetItem(tmp34);
					Dynamic tmp36 = tmp35;
					::openfl::_internal::renderer::DrawCommandBuffer tmp37 = c->buffer;
					int tmp38 = c->oPos;
					int tmp39 = (tmp38 + (int)3);
					Dynamic tmp40 = tmp37->o->__GetItem(tmp39);
					Dynamic tmp41 = tmp40;
					::openfl::_internal::renderer::DrawCommandBuffer tmp42 = c->buffer;
					int tmp43 = c->fPos;
					int tmp44 = (tmp43 + (int)1);
					Float tmp45 = tmp42->f->__get(tmp44);
					Float tmp46 = tmp45;
					this->lineStyle(tmp11,tmp16,tmp21,tmp26,tmp31,tmp36,tmp41,tmp46);
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
					this->lineTo(tmp10,tmp14);
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
					this->moveTo(tmp10,tmp14);
				}
				;break;
				case (int)17: {
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
						data->prev = ::openfl::_internal::renderer::DrawCommandType_obj::OVERRIDE_MATRIX;
						tmp6 = data;
					}
					::openfl::_internal::renderer::DrawCommandReader c = tmp6;
					::openfl::_internal::renderer::DrawCommandBuffer tmp7 = c->buffer;
					int tmp8 = c->oPos;
					int tmp9 = tmp8;
					Dynamic tmp10 = tmp7->o->__GetItem(tmp9);
					::openfl::geom::Matrix tmp11 = ((::openfl::geom::Matrix)(tmp10));
					this->overrideMatrix(tmp11);
				}
				;break;
				default: {
				}
			}
		}
	}
	data->destroy();
	::openfl::_internal::renderer::DrawCommandBuffer tmp3 = other;
	return tmp3;
}


HX_DEFINE_DYNAMIC_FUNC1(DrawCommandBuffer_obj,append,return )

Void DrawCommandBuffer_obj::beginBitmapFill( ::openfl::display::BitmapData bitmap,::openfl::geom::Matrix matrix,bool repeat,bool smooth){
{
		this->prepareWrite();
		this->types->push(::openfl::_internal::renderer::DrawCommandType_obj::BEGIN_BITMAP_FILL);
		::openfl::display::BitmapData tmp = bitmap;
		this->o->__Field(HX_HCSTRING("push","\xda","\x11","\x61","\x4a"), hx::paccDynamic )(tmp);
		::openfl::geom::Matrix tmp1 = matrix;
		this->o->__Field(HX_HCSTRING("push","\xda","\x11","\x61","\x4a"), hx::paccDynamic )(tmp1);
		bool tmp2 = repeat;
		this->b->push(tmp2);
		bool tmp3 = smooth;
		this->b->push(tmp3);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC4(DrawCommandBuffer_obj,beginBitmapFill,(void))

Void DrawCommandBuffer_obj::beginFill( int color,Float alpha){
{
		this->prepareWrite();
		this->types->push(::openfl::_internal::renderer::DrawCommandType_obj::BEGIN_FILL);
		int tmp = color;
		this->i->push(tmp);
		Float tmp1 = alpha;
		this->f->push(tmp1);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(DrawCommandBuffer_obj,beginFill,(void))

Void DrawCommandBuffer_obj::beginGradientFill( Dynamic type,Array< int > colors,Array< Float > alphas,Array< int > ratios,::openfl::geom::Matrix matrix,Dynamic spreadMethod,Dynamic interpolationMethod,Float focalPointRatio){
{
		this->prepareWrite();
		this->types->push(::openfl::_internal::renderer::DrawCommandType_obj::BEGIN_GRADIENT_FILL);
		Dynamic tmp = type;
		this->o->__Field(HX_HCSTRING("push","\xda","\x11","\x61","\x4a"), hx::paccDynamic )(tmp);
		this->ii->push(colors);
		this->ff->push(alphas);
		this->ii->push(ratios);
		::openfl::geom::Matrix tmp1 = matrix;
		this->o->__Field(HX_HCSTRING("push","\xda","\x11","\x61","\x4a"), hx::paccDynamic )(tmp1);
		Dynamic tmp2 = spreadMethod;
		this->o->__Field(HX_HCSTRING("push","\xda","\x11","\x61","\x4a"), hx::paccDynamic )(tmp2);
		Dynamic tmp3 = interpolationMethod;
		this->o->__Field(HX_HCSTRING("push","\xda","\x11","\x61","\x4a"), hx::paccDynamic )(tmp3);
		Float tmp4 = focalPointRatio;
		this->f->push(tmp4);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC8(DrawCommandBuffer_obj,beginGradientFill,(void))

Void DrawCommandBuffer_obj::clear( ){
{
		::openfl::_internal::renderer::DrawCommandBuffer tmp = ::openfl::_internal::renderer::DrawCommandBuffer_obj::empty;
		this->types = tmp->types;
		::openfl::_internal::renderer::DrawCommandBuffer tmp1 = ::openfl::_internal::renderer::DrawCommandBuffer_obj::empty;
		this->b = tmp1->b;
		::openfl::_internal::renderer::DrawCommandBuffer tmp2 = ::openfl::_internal::renderer::DrawCommandBuffer_obj::empty;
		this->i = tmp2->i;
		::openfl::_internal::renderer::DrawCommandBuffer tmp3 = ::openfl::_internal::renderer::DrawCommandBuffer_obj::empty;
		this->f = tmp3->f;
		::openfl::_internal::renderer::DrawCommandBuffer tmp4 = ::openfl::_internal::renderer::DrawCommandBuffer_obj::empty;
		this->o = tmp4->o;
		::openfl::_internal::renderer::DrawCommandBuffer tmp5 = ::openfl::_internal::renderer::DrawCommandBuffer_obj::empty;
		this->ff = tmp5->ff;
		::openfl::_internal::renderer::DrawCommandBuffer tmp6 = ::openfl::_internal::renderer::DrawCommandBuffer_obj::empty;
		this->ii = tmp6->ii;
		this->copyOnWrite = true;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(DrawCommandBuffer_obj,clear,(void))

::openfl::_internal::renderer::DrawCommandBuffer DrawCommandBuffer_obj::copy( ){
	::openfl::_internal::renderer::DrawCommandBuffer tmp = ::openfl::_internal::renderer::DrawCommandBuffer_obj::__new();
	::openfl::_internal::renderer::DrawCommandBuffer copy = tmp;
	copy->append(hx::ObjectPtr<OBJ_>(this));
	::openfl::_internal::renderer::DrawCommandBuffer tmp1 = copy;
	return tmp1;
}


HX_DEFINE_DYNAMIC_FUNC0(DrawCommandBuffer_obj,copy,return )

Void DrawCommandBuffer_obj::cubicCurveTo( Float controlX1,Float controlY1,Float controlX2,Float controlY2,Float anchorX,Float anchorY){
{
		this->prepareWrite();
		this->types->push(::openfl::_internal::renderer::DrawCommandType_obj::CUBIC_CURVE_TO);
		Float tmp = controlX1;
		this->f->push(tmp);
		Float tmp1 = controlY1;
		this->f->push(tmp1);
		Float tmp2 = controlX2;
		this->f->push(tmp2);
		Float tmp3 = controlY2;
		this->f->push(tmp3);
		Float tmp4 = anchorX;
		this->f->push(tmp4);
		Float tmp5 = anchorY;
		this->f->push(tmp5);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC6(DrawCommandBuffer_obj,cubicCurveTo,(void))

Void DrawCommandBuffer_obj::curveTo( Float controlX,Float controlY,Float anchorX,Float anchorY){
{
		this->prepareWrite();
		this->types->push(::openfl::_internal::renderer::DrawCommandType_obj::CURVE_TO);
		Float tmp = controlX;
		this->f->push(tmp);
		Float tmp1 = controlY;
		this->f->push(tmp1);
		Float tmp2 = anchorX;
		this->f->push(tmp2);
		Float tmp3 = anchorY;
		this->f->push(tmp3);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC4(DrawCommandBuffer_obj,curveTo,(void))

Void DrawCommandBuffer_obj::destroy( ){
{
		this->clear();
		this->types = null();
		this->b = null();
		this->i = null();
		this->f = null();
		this->o = null();
		this->ff = null();
		this->ii = null();
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(DrawCommandBuffer_obj,destroy,(void))

Void DrawCommandBuffer_obj::drawCircle( Float x,Float y,Float radius){
{
		this->prepareWrite();
		this->types->push(::openfl::_internal::renderer::DrawCommandType_obj::DRAW_CIRCLE);
		Float tmp = x;
		this->f->push(tmp);
		Float tmp1 = y;
		this->f->push(tmp1);
		Float tmp2 = radius;
		this->f->push(tmp2);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC3(DrawCommandBuffer_obj,drawCircle,(void))

Void DrawCommandBuffer_obj::drawEllipse( Float x,Float y,Float width,Float height){
{
		this->prepareWrite();
		this->types->push(::openfl::_internal::renderer::DrawCommandType_obj::DRAW_ELLIPSE);
		Float tmp = x;
		this->f->push(tmp);
		Float tmp1 = y;
		this->f->push(tmp1);
		Float tmp2 = width;
		this->f->push(tmp2);
		Float tmp3 = height;
		this->f->push(tmp3);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC4(DrawCommandBuffer_obj,drawEllipse,(void))

Void DrawCommandBuffer_obj::drawRect( Float x,Float y,Float width,Float height){
{
		this->prepareWrite();
		this->types->push(::openfl::_internal::renderer::DrawCommandType_obj::DRAW_RECT);
		Float tmp = x;
		this->f->push(tmp);
		Float tmp1 = y;
		this->f->push(tmp1);
		Float tmp2 = width;
		this->f->push(tmp2);
		Float tmp3 = height;
		this->f->push(tmp3);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC4(DrawCommandBuffer_obj,drawRect,(void))

Void DrawCommandBuffer_obj::drawRoundRect( Float x,Float y,Float width,Float height,Float ellipseWidth,Dynamic ellipseHeight){
{
		this->prepareWrite();
		this->types->push(::openfl::_internal::renderer::DrawCommandType_obj::DRAW_ROUND_RECT);
		Float tmp = x;
		this->f->push(tmp);
		Float tmp1 = y;
		this->f->push(tmp1);
		Float tmp2 = width;
		this->f->push(tmp2);
		Float tmp3 = height;
		this->f->push(tmp3);
		Float tmp4 = ellipseWidth;
		this->f->push(tmp4);
		Dynamic tmp5 = ellipseHeight;
		this->o->__Field(HX_HCSTRING("push","\xda","\x11","\x61","\x4a"), hx::paccDynamic )(tmp5);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC6(DrawCommandBuffer_obj,drawRoundRect,(void))

Void DrawCommandBuffer_obj::drawTriangles( ::openfl::_Vector::FloatVector vertices,::openfl::_Vector::IntVector indices,::openfl::_Vector::FloatVector uvtData,Dynamic culling){
{
		this->prepareWrite();
		this->types->push(::openfl::_internal::renderer::DrawCommandType_obj::DRAW_TRIANGLES);
		::openfl::_Vector::FloatVector tmp = vertices;
		this->o->__Field(HX_HCSTRING("push","\xda","\x11","\x61","\x4a"), hx::paccDynamic )(tmp);
		::openfl::_Vector::IntVector tmp1 = indices;
		this->o->__Field(HX_HCSTRING("push","\xda","\x11","\x61","\x4a"), hx::paccDynamic )(tmp1);
		::openfl::_Vector::FloatVector tmp2 = uvtData;
		this->o->__Field(HX_HCSTRING("push","\xda","\x11","\x61","\x4a"), hx::paccDynamic )(tmp2);
		Dynamic tmp3 = culling;
		this->o->__Field(HX_HCSTRING("push","\xda","\x11","\x61","\x4a"), hx::paccDynamic )(tmp3);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC4(DrawCommandBuffer_obj,drawTriangles,(void))

Void DrawCommandBuffer_obj::endFill( ){
{
		this->prepareWrite();
		this->types->push(::openfl::_internal::renderer::DrawCommandType_obj::END_FILL);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(DrawCommandBuffer_obj,endFill,(void))

Void DrawCommandBuffer_obj::lineBitmapStyle( ::openfl::display::BitmapData bitmap,::openfl::geom::Matrix matrix,bool repeat,bool smooth){
{
		this->prepareWrite();
		this->types->push(::openfl::_internal::renderer::DrawCommandType_obj::LINE_BITMAP_STYLE);
		::openfl::display::BitmapData tmp = bitmap;
		this->o->__Field(HX_HCSTRING("push","\xda","\x11","\x61","\x4a"), hx::paccDynamic )(tmp);
		::openfl::geom::Matrix tmp1 = matrix;
		this->o->__Field(HX_HCSTRING("push","\xda","\x11","\x61","\x4a"), hx::paccDynamic )(tmp1);
		bool tmp2 = repeat;
		this->b->push(tmp2);
		bool tmp3 = smooth;
		this->b->push(tmp3);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC4(DrawCommandBuffer_obj,lineBitmapStyle,(void))

Void DrawCommandBuffer_obj::lineGradientStyle( Dynamic type,Array< int > colors,Array< Float > alphas,Array< int > ratios,::openfl::geom::Matrix matrix,Dynamic spreadMethod,Dynamic interpolationMethod,Float focalPointRatio){
{
		this->prepareWrite();
		this->types->push(::openfl::_internal::renderer::DrawCommandType_obj::LINE_GRADIENT_STYLE);
		Dynamic tmp = type;
		this->o->__Field(HX_HCSTRING("push","\xda","\x11","\x61","\x4a"), hx::paccDynamic )(tmp);
		this->ii->push(colors);
		this->ff->push(alphas);
		this->ii->push(ratios);
		::openfl::geom::Matrix tmp1 = matrix;
		this->o->__Field(HX_HCSTRING("push","\xda","\x11","\x61","\x4a"), hx::paccDynamic )(tmp1);
		Dynamic tmp2 = spreadMethod;
		this->o->__Field(HX_HCSTRING("push","\xda","\x11","\x61","\x4a"), hx::paccDynamic )(tmp2);
		Dynamic tmp3 = interpolationMethod;
		this->o->__Field(HX_HCSTRING("push","\xda","\x11","\x61","\x4a"), hx::paccDynamic )(tmp3);
		Float tmp4 = focalPointRatio;
		this->f->push(tmp4);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC8(DrawCommandBuffer_obj,lineGradientStyle,(void))

Void DrawCommandBuffer_obj::lineStyle( Dynamic thickness,int color,Float alpha,bool pixelHinting,Dynamic scaleMode,Dynamic caps,Dynamic joints,Float miterLimit){
{
		this->prepareWrite();
		this->types->push(::openfl::_internal::renderer::DrawCommandType_obj::LINE_STYLE);
		Dynamic tmp = thickness;
		this->o->__Field(HX_HCSTRING("push","\xda","\x11","\x61","\x4a"), hx::paccDynamic )(tmp);
		int tmp1 = color;
		this->i->push(tmp1);
		Float tmp2 = alpha;
		this->f->push(tmp2);
		bool tmp3 = pixelHinting;
		this->b->push(tmp3);
		Dynamic tmp4 = scaleMode;
		this->o->__Field(HX_HCSTRING("push","\xda","\x11","\x61","\x4a"), hx::paccDynamic )(tmp4);
		Dynamic tmp5 = caps;
		this->o->__Field(HX_HCSTRING("push","\xda","\x11","\x61","\x4a"), hx::paccDynamic )(tmp5);
		Dynamic tmp6 = joints;
		this->o->__Field(HX_HCSTRING("push","\xda","\x11","\x61","\x4a"), hx::paccDynamic )(tmp6);
		Float tmp7 = miterLimit;
		this->f->push(tmp7);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC8(DrawCommandBuffer_obj,lineStyle,(void))

Void DrawCommandBuffer_obj::lineTo( Float x,Float y){
{
		this->prepareWrite();
		this->types->push(::openfl::_internal::renderer::DrawCommandType_obj::LINE_TO);
		Float tmp = x;
		this->f->push(tmp);
		Float tmp1 = y;
		this->f->push(tmp1);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(DrawCommandBuffer_obj,lineTo,(void))

Void DrawCommandBuffer_obj::moveTo( Float x,Float y){
{
		this->prepareWrite();
		this->types->push(::openfl::_internal::renderer::DrawCommandType_obj::MOVE_TO);
		Float tmp = x;
		this->f->push(tmp);
		Float tmp1 = y;
		this->f->push(tmp1);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(DrawCommandBuffer_obj,moveTo,(void))

Void DrawCommandBuffer_obj::prepareWrite( ){
{
		bool tmp = this->copyOnWrite;
		if ((tmp)){
			this->types = this->types->copy();
			this->b = this->b->copy();
			this->i = this->i->copy();
			this->f = this->f->copy();
			this->o = this->o->__Field(HX_HCSTRING("copy","\xb5","\xbb","\xc4","\x41"), hx::paccDynamic )();
			this->ff = this->ff->copy();
			this->ii = this->ii->copy();
			this->copyOnWrite = false;
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(DrawCommandBuffer_obj,prepareWrite,(void))

Void DrawCommandBuffer_obj::overrideMatrix( ::openfl::geom::Matrix matrix){
{
		this->prepareWrite();
		this->types->push(::openfl::_internal::renderer::DrawCommandType_obj::OVERRIDE_MATRIX);
		::openfl::geom::Matrix tmp = matrix;
		this->o->__Field(HX_HCSTRING("push","\xda","\x11","\x61","\x4a"), hx::paccDynamic )(tmp);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(DrawCommandBuffer_obj,overrideMatrix,(void))

int DrawCommandBuffer_obj::get_length( ){
	int tmp = this->types->length;
	return tmp;
}


HX_DEFINE_DYNAMIC_FUNC0(DrawCommandBuffer_obj,get_length,return )

::openfl::_internal::renderer::DrawCommandBuffer DrawCommandBuffer_obj::empty;


DrawCommandBuffer_obj::DrawCommandBuffer_obj()
{
}

void DrawCommandBuffer_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(DrawCommandBuffer);
	HX_MARK_MEMBER_NAME(types,"types");
	HX_MARK_MEMBER_NAME(b,"b");
	HX_MARK_MEMBER_NAME(copyOnWrite,"copyOnWrite");
	HX_MARK_MEMBER_NAME(f,"f");
	HX_MARK_MEMBER_NAME(ff,"ff");
	HX_MARK_MEMBER_NAME(i,"i");
	HX_MARK_MEMBER_NAME(ii,"ii");
	HX_MARK_MEMBER_NAME(o,"o");
	HX_MARK_END_CLASS();
}

void DrawCommandBuffer_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(types,"types");
	HX_VISIT_MEMBER_NAME(b,"b");
	HX_VISIT_MEMBER_NAME(copyOnWrite,"copyOnWrite");
	HX_VISIT_MEMBER_NAME(f,"f");
	HX_VISIT_MEMBER_NAME(ff,"ff");
	HX_VISIT_MEMBER_NAME(i,"i");
	HX_VISIT_MEMBER_NAME(ii,"ii");
	HX_VISIT_MEMBER_NAME(o,"o");
}

Dynamic DrawCommandBuffer_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 1:
		if (HX_FIELD_EQ(inName,"b") ) { return b; }
		if (HX_FIELD_EQ(inName,"f") ) { return f; }
		if (HX_FIELD_EQ(inName,"i") ) { return i; }
		if (HX_FIELD_EQ(inName,"o") ) { return o; }
		break;
	case 2:
		if (HX_FIELD_EQ(inName,"ff") ) { return ff; }
		if (HX_FIELD_EQ(inName,"ii") ) { return ii; }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"copy") ) { return copy_dyn(); }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"types") ) { return types; }
		if (HX_FIELD_EQ(inName,"clear") ) { return clear_dyn(); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"length") ) { if (inCallProp == hx::paccAlways) return get_length(); }
		if (HX_FIELD_EQ(inName,"append") ) { return append_dyn(); }
		if (HX_FIELD_EQ(inName,"lineTo") ) { return lineTo_dyn(); }
		if (HX_FIELD_EQ(inName,"moveTo") ) { return moveTo_dyn(); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"curveTo") ) { return curveTo_dyn(); }
		if (HX_FIELD_EQ(inName,"destroy") ) { return destroy_dyn(); }
		if (HX_FIELD_EQ(inName,"endFill") ) { return endFill_dyn(); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"drawRect") ) { return drawRect_dyn(); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"beginFill") ) { return beginFill_dyn(); }
		if (HX_FIELD_EQ(inName,"lineStyle") ) { return lineStyle_dyn(); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"drawCircle") ) { return drawCircle_dyn(); }
		if (HX_FIELD_EQ(inName,"get_length") ) { return get_length_dyn(); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"copyOnWrite") ) { return copyOnWrite; }
		if (HX_FIELD_EQ(inName,"drawEllipse") ) { return drawEllipse_dyn(); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"cubicCurveTo") ) { return cubicCurveTo_dyn(); }
		if (HX_FIELD_EQ(inName,"prepareWrite") ) { return prepareWrite_dyn(); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"drawRoundRect") ) { return drawRoundRect_dyn(); }
		if (HX_FIELD_EQ(inName,"drawTriangles") ) { return drawTriangles_dyn(); }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"overrideMatrix") ) { return overrideMatrix_dyn(); }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"beginBitmapFill") ) { return beginBitmapFill_dyn(); }
		if (HX_FIELD_EQ(inName,"lineBitmapStyle") ) { return lineBitmapStyle_dyn(); }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"beginGradientFill") ) { return beginGradientFill_dyn(); }
		if (HX_FIELD_EQ(inName,"lineGradientStyle") ) { return lineGradientStyle_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

bool DrawCommandBuffer_obj::__GetStatic(const ::String &inName, Dynamic &outValue, hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"empty") ) { outValue = empty; return true;  }
	}
	return false;
}

Dynamic DrawCommandBuffer_obj::__SetField(const ::String &inName,const Dynamic &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 1:
		if (HX_FIELD_EQ(inName,"b") ) { b=inValue.Cast< Array< bool > >(); return inValue; }
		if (HX_FIELD_EQ(inName,"f") ) { f=inValue.Cast< Array< Float > >(); return inValue; }
		if (HX_FIELD_EQ(inName,"i") ) { i=inValue.Cast< Array< int > >(); return inValue; }
		if (HX_FIELD_EQ(inName,"o") ) { o=inValue.Cast< cpp::ArrayBase >(); return inValue; }
		break;
	case 2:
		if (HX_FIELD_EQ(inName,"ff") ) { ff=inValue.Cast< Array< ::Dynamic > >(); return inValue; }
		if (HX_FIELD_EQ(inName,"ii") ) { ii=inValue.Cast< Array< ::Dynamic > >(); return inValue; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"types") ) { types=inValue.Cast< Array< ::Dynamic > >(); return inValue; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"copyOnWrite") ) { copyOnWrite=inValue.Cast< bool >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

bool DrawCommandBuffer_obj::__SetStatic(const ::String &inName,Dynamic &ioValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"empty") ) { empty=ioValue.Cast< ::openfl::_internal::renderer::DrawCommandBuffer >(); return true; }
	}
	return false;
}

void DrawCommandBuffer_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("length","\xe6","\x94","\x07","\x9f"));
	outFields->push(HX_HCSTRING("types","\x79","\x70","\xcb","\x1a"));
	outFields->push(HX_HCSTRING("b","\x62","\x00","\x00","\x00"));
	outFields->push(HX_HCSTRING("copyOnWrite","\x0b","\x88","\xab","\xbc"));
	outFields->push(HX_HCSTRING("f","\x66","\x00","\x00","\x00"));
	outFields->push(HX_HCSTRING("ff","\x40","\x59","\x00","\x00"));
	outFields->push(HX_HCSTRING("i","\x69","\x00","\x00","\x00"));
	outFields->push(HX_HCSTRING("ii","\xe0","\x5b","\x00","\x00"));
	outFields->push(HX_HCSTRING("o","\x6f","\x00","\x00","\x00"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsObject /*Array< ::Dynamic >*/ ,(int)offsetof(DrawCommandBuffer_obj,types),HX_HCSTRING("types","\x79","\x70","\xcb","\x1a")},
	{hx::fsObject /*Array< bool >*/ ,(int)offsetof(DrawCommandBuffer_obj,b),HX_HCSTRING("b","\x62","\x00","\x00","\x00")},
	{hx::fsBool,(int)offsetof(DrawCommandBuffer_obj,copyOnWrite),HX_HCSTRING("copyOnWrite","\x0b","\x88","\xab","\xbc")},
	{hx::fsObject /*Array< Float >*/ ,(int)offsetof(DrawCommandBuffer_obj,f),HX_HCSTRING("f","\x66","\x00","\x00","\x00")},
	{hx::fsObject /*Array< ::Dynamic >*/ ,(int)offsetof(DrawCommandBuffer_obj,ff),HX_HCSTRING("ff","\x40","\x59","\x00","\x00")},
	{hx::fsObject /*Array< int >*/ ,(int)offsetof(DrawCommandBuffer_obj,i),HX_HCSTRING("i","\x69","\x00","\x00","\x00")},
	{hx::fsObject /*Array< ::Dynamic >*/ ,(int)offsetof(DrawCommandBuffer_obj,ii),HX_HCSTRING("ii","\xe0","\x5b","\x00","\x00")},
	{hx::fsObject /*cpp::ArrayBase*/ ,(int)offsetof(DrawCommandBuffer_obj,o),HX_HCSTRING("o","\x6f","\x00","\x00","\x00")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo sStaticStorageInfo[] = {
	{hx::fsObject /*::openfl::_internal::renderer::DrawCommandBuffer*/ ,(void *) &DrawCommandBuffer_obj::empty,HX_HCSTRING("empty","\x8d","\x3a","\xda","\x6f")},
	{ hx::fsUnknown, 0, null()}
};
#endif

static ::String sMemberFields[] = {
	HX_HCSTRING("types","\x79","\x70","\xcb","\x1a"),
	HX_HCSTRING("b","\x62","\x00","\x00","\x00"),
	HX_HCSTRING("copyOnWrite","\x0b","\x88","\xab","\xbc"),
	HX_HCSTRING("f","\x66","\x00","\x00","\x00"),
	HX_HCSTRING("ff","\x40","\x59","\x00","\x00"),
	HX_HCSTRING("i","\x69","\x00","\x00","\x00"),
	HX_HCSTRING("ii","\xe0","\x5b","\x00","\x00"),
	HX_HCSTRING("o","\x6f","\x00","\x00","\x00"),
	HX_HCSTRING("append","\xda","\xe1","\xd3","\x8f"),
	HX_HCSTRING("beginBitmapFill","\x9b","\xc9","\x07","\x6a"),
	HX_HCSTRING("beginFill","\x4c","\xad","\x95","\x8c"),
	HX_HCSTRING("beginGradientFill","\x5c","\x3c","\x03","\x2e"),
	HX_HCSTRING("clear","\x8d","\x71","\x5b","\x48"),
	HX_HCSTRING("copy","\xb5","\xbb","\xc4","\x41"),
	HX_HCSTRING("cubicCurveTo","\xe0","\x07","\x90","\x2e"),
	HX_HCSTRING("curveTo","\x0a","\x60","\x88","\xce"),
	HX_HCSTRING("destroy","\xfa","\x2c","\x86","\x24"),
	HX_HCSTRING("drawCircle","\x34","\xed","\xd0","\x97"),
	HX_HCSTRING("drawEllipse","\x3a","\x85","\xce","\x54"),
	HX_HCSTRING("drawRect","\x48","\xf7","\x10","\x60"),
	HX_HCSTRING("drawRoundRect","\xee","\xc3","\xaa","\xe2"),
	HX_HCSTRING("drawTriangles","\x07","\x44","\x68","\xde"),
	HX_HCSTRING("endFill","\xfe","\x87","\xe0","\x25"),
	HX_HCSTRING("lineBitmapStyle","\x2e","\x3f","\x21","\x45"),
	HX_HCSTRING("lineGradientStyle","\x8d","\x24","\xf2","\xc1"),
	HX_HCSTRING("lineStyle","\x9d","\xa8","\x18","\xcb"),
	HX_HCSTRING("lineTo","\x8f","\x46","\xa0","\xec"),
	HX_HCSTRING("moveTo","\xec","\xd2","\xac","\xcc"),
	HX_HCSTRING("prepareWrite","\xd8","\x61","\x09","\x44"),
	HX_HCSTRING("overrideMatrix","\xad","\x8d","\xa9","\xb9"),
	HX_HCSTRING("get_length","\xaf","\x04","\x8f","\x8f"),
	::String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(DrawCommandBuffer_obj::__mClass,"__mClass");
	HX_MARK_MEMBER_NAME(DrawCommandBuffer_obj::empty,"empty");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(DrawCommandBuffer_obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(DrawCommandBuffer_obj::empty,"empty");
};

#endif

hx::Class DrawCommandBuffer_obj::__mClass;

static ::String sStaticFields[] = {
	HX_HCSTRING("empty","\x8d","\x3a","\xda","\x6f"),
	::String(null()) };

void DrawCommandBuffer_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("openfl._internal.renderer.DrawCommandBuffer","\x2c","\xee","\x3f","\x7e");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &DrawCommandBuffer_obj::__GetStatic;
	__mClass->mSetStaticField = &DrawCommandBuffer_obj::__SetStatic;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(sStaticFields);
	__mClass->mMembers = hx::Class_obj::dupFunctions(sMemberFields);
	__mClass->mCanCast = hx::TCanCast< DrawCommandBuffer_obj >;
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

void DrawCommandBuffer_obj::__boot()
{
	empty= ::openfl::_internal::renderer::DrawCommandBuffer_obj::__new();
}

} // end namespace openfl
} // end namespace _internal
} // end namespace renderer
