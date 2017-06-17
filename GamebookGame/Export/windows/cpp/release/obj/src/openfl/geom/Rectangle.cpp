#include <hxcpp.h>

#ifndef INCLUDED_lime_math_Rectangle
#include <lime/math/Rectangle.h>
#endif
#ifndef INCLUDED_lime_utils_ObjectPool_openfl_geom_Rectangle
#include <lime/utils/ObjectPool_openfl_geom_Rectangle.h>
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
namespace geom{

Void Rectangle_obj::__construct(hx::Null< Float >  __o_x,hx::Null< Float >  __o_y,hx::Null< Float >  __o_width,hx::Null< Float >  __o_height)
{
Float x = __o_x.Default(0);
Float y = __o_y.Default(0);
Float width = __o_width.Default(0);
Float height = __o_height.Default(0);
{
	this->x = x;
	this->y = y;
	this->width = width;
	this->height = height;
}
;
	return null();
}

//Rectangle_obj::~Rectangle_obj() { }

Dynamic Rectangle_obj::__CreateEmpty() { return  new Rectangle_obj; }
hx::ObjectPtr< Rectangle_obj > Rectangle_obj::__new(hx::Null< Float >  __o_x,hx::Null< Float >  __o_y,hx::Null< Float >  __o_width,hx::Null< Float >  __o_height)
{  hx::ObjectPtr< Rectangle_obj > _result_ = new Rectangle_obj();
	_result_->__construct(__o_x,__o_y,__o_width,__o_height);
	return _result_;}

Dynamic Rectangle_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< Rectangle_obj > _result_ = new Rectangle_obj();
	_result_->__construct(inArgs[0],inArgs[1],inArgs[2],inArgs[3]);
	return _result_;}

::openfl::geom::Rectangle Rectangle_obj::clone( ){
	Float tmp = this->x;
	Float tmp1 = this->y;
	Float tmp2 = this->width;
	Float tmp3 = this->height;
	::openfl::geom::Rectangle tmp4 = ::openfl::geom::Rectangle_obj::__new(tmp,tmp1,tmp2,tmp3);
	return tmp4;
}


HX_DEFINE_DYNAMIC_FUNC0(Rectangle_obj,clone,return )

bool Rectangle_obj::contains( Float x,Float y){
	Float tmp = x;
	Float tmp1 = this->x;
	bool tmp2 = (tmp >= tmp1);
	bool tmp3 = tmp2;
	bool tmp4;
	if ((tmp3)){
		Float tmp5 = y;
		Float tmp6 = this->y;
		Float tmp7 = tmp6;
		Float tmp8 = tmp7;
		tmp4 = (tmp5 >= tmp8);
	}
	else{
		tmp4 = false;
	}
	bool tmp5 = tmp4;
	bool tmp6;
	if ((tmp5)){
		Float tmp7 = x;
		Float tmp8 = this->get_right();
		Float tmp9 = tmp8;
		Float tmp10 = tmp9;
		tmp6 = (tmp7 < tmp10);
	}
	else{
		tmp6 = false;
	}
	bool tmp7;
	if ((tmp6)){
		Float tmp8 = y;
		Float tmp9 = this->get_bottom();
		Float tmp10 = tmp9;
		tmp7 = (tmp8 < tmp10);
	}
	else{
		tmp7 = false;
	}
	return tmp7;
}


HX_DEFINE_DYNAMIC_FUNC2(Rectangle_obj,contains,return )

bool Rectangle_obj::containsPoint( ::openfl::geom::Point point){
	Float tmp = point->x;
	Float tmp1 = point->y;
	bool tmp2 = this->contains(tmp,tmp1);
	return tmp2;
}


HX_DEFINE_DYNAMIC_FUNC1(Rectangle_obj,containsPoint,return )

bool Rectangle_obj::containsRect( ::openfl::geom::Rectangle rect){
	bool tmp = (rect->width <= (int)0);
	bool tmp1 = !(tmp);
	bool tmp2;
	if ((tmp1)){
		tmp2 = (rect->height <= (int)0);
	}
	else{
		tmp2 = true;
	}
	if ((tmp2)){
		Float tmp3 = rect->x;
		Float tmp4 = this->x;
		bool tmp5 = (tmp3 > tmp4);
		bool tmp6 = tmp5;
		bool tmp7;
		if ((tmp6)){
			Float tmp8 = rect->y;
			Float tmp9 = this->y;
			Float tmp10 = tmp9;
			Float tmp11 = tmp10;
			tmp7 = (tmp8 > tmp11);
		}
		else{
			tmp7 = false;
		}
		bool tmp8 = tmp7;
		bool tmp9;
		if ((tmp8)){
			Float tmp10 = rect->get_right();
			Float tmp11 = tmp10;
			Float tmp12 = tmp11;
			Float tmp13 = this->get_right();
			Float tmp14 = tmp13;
			Float tmp15 = tmp14;
			tmp9 = (tmp12 < tmp15);
		}
		else{
			tmp9 = false;
		}
		bool tmp10;
		if ((tmp9)){
			Float tmp11 = rect->get_bottom();
			Float tmp12 = tmp11;
			Float tmp13 = this->get_bottom();
			Float tmp14 = tmp13;
			tmp10 = (tmp12 < tmp14);
		}
		else{
			tmp10 = false;
		}
		return tmp10;
	}
	else{
		Float tmp3 = rect->x;
		Float tmp4 = this->x;
		bool tmp5 = (tmp3 >= tmp4);
		bool tmp6 = tmp5;
		bool tmp7;
		if ((tmp6)){
			Float tmp8 = rect->y;
			Float tmp9 = this->y;
			Float tmp10 = tmp9;
			Float tmp11 = tmp10;
			tmp7 = (tmp8 >= tmp11);
		}
		else{
			tmp7 = false;
		}
		bool tmp8 = tmp7;
		bool tmp9;
		if ((tmp8)){
			Float tmp10 = rect->get_right();
			Float tmp11 = tmp10;
			Float tmp12 = tmp11;
			Float tmp13 = this->get_right();
			Float tmp14 = tmp13;
			Float tmp15 = tmp14;
			tmp9 = (tmp12 <= tmp15);
		}
		else{
			tmp9 = false;
		}
		bool tmp10;
		if ((tmp9)){
			Float tmp11 = rect->get_bottom();
			Float tmp12 = tmp11;
			Float tmp13 = this->get_bottom();
			Float tmp14 = tmp13;
			tmp10 = (tmp12 <= tmp14);
		}
		else{
			tmp10 = false;
		}
		return tmp10;
	}
	return false;
}


HX_DEFINE_DYNAMIC_FUNC1(Rectangle_obj,containsRect,return )

Void Rectangle_obj::copyFrom( ::openfl::geom::Rectangle sourceRect){
{
		this->x = sourceRect->x;
		this->y = sourceRect->y;
		this->width = sourceRect->width;
		this->height = sourceRect->height;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Rectangle_obj,copyFrom,(void))

bool Rectangle_obj::equals( ::openfl::geom::Rectangle toCompare){
	bool tmp = (toCompare == hx::ObjectPtr<OBJ_>(this));
	if ((tmp)){
		return true;
	}
	else{
		bool tmp1 = (toCompare != null());
		bool tmp2 = tmp1;
		bool tmp3;
		if ((tmp2)){
			Float tmp4 = this->x;
			Float tmp5 = tmp4;
			Float tmp6 = tmp5;
			Float tmp7 = toCompare->x;
			tmp3 = (tmp6 == tmp7);
		}
		else{
			tmp3 = false;
		}
		bool tmp4 = tmp3;
		bool tmp5;
		if ((tmp4)){
			Float tmp6 = this->y;
			Float tmp7 = tmp6;
			Float tmp8 = tmp7;
			Float tmp9 = toCompare->y;
			tmp5 = (tmp8 == tmp9);
		}
		else{
			tmp5 = false;
		}
		bool tmp6 = tmp5;
		bool tmp7;
		if ((tmp6)){
			Float tmp8 = this->width;
			Float tmp9 = tmp8;
			Float tmp10 = tmp9;
			Float tmp11 = toCompare->width;
			tmp7 = (tmp10 == tmp11);
		}
		else{
			tmp7 = false;
		}
		bool tmp8;
		if ((tmp7)){
			Float tmp9 = this->height;
			Float tmp10 = tmp9;
			Float tmp11 = toCompare->height;
			tmp8 = (tmp10 == tmp11);
		}
		else{
			tmp8 = false;
		}
		return tmp8;
	}
	return false;
}


HX_DEFINE_DYNAMIC_FUNC1(Rectangle_obj,equals,return )

Void Rectangle_obj::inflate( Float dx,Float dy){
{
		hx::SubEq(this->x,dx);
		Float tmp = (dx * (int)2);
		hx::AddEq(this->width,tmp);
		hx::SubEq(this->y,dy);
		Float tmp1 = (dy * (int)2);
		hx::AddEq(this->height,tmp1);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(Rectangle_obj,inflate,(void))

Void Rectangle_obj::inflatePoint( ::openfl::geom::Point point){
{
		Float tmp = point->x;
		Float tmp1 = point->y;
		this->inflate(tmp,tmp1);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Rectangle_obj,inflatePoint,(void))

::openfl::geom::Rectangle Rectangle_obj::intersection( ::openfl::geom::Rectangle toIntersect){
	Float tmp = this->x;
	Float tmp1 = toIntersect->x;
	bool tmp2 = (tmp < tmp1);
	Float tmp3;
	if ((tmp2)){
		tmp3 = toIntersect->x;
	}
	else{
		tmp3 = this->x;
	}
	Float x0 = tmp3;
	Float tmp4 = this->get_right();
	Float tmp5 = toIntersect->get_right();
	bool tmp6 = (tmp4 > tmp5);
	Float tmp7;
	if ((tmp6)){
		tmp7 = toIntersect->get_right();
	}
	else{
		tmp7 = this->get_right();
	}
	Float x1 = tmp7;
	bool tmp8 = (x1 <= x0);
	if ((tmp8)){
		::openfl::geom::Rectangle tmp9 = ::openfl::geom::Rectangle_obj::__new(null(),null(),null(),null());
		return tmp9;
	}
	Float tmp9 = this->y;
	Float tmp10 = toIntersect->y;
	bool tmp11 = (tmp9 < tmp10);
	Float tmp12;
	if ((tmp11)){
		tmp12 = toIntersect->y;
	}
	else{
		tmp12 = this->y;
	}
	Float y0 = tmp12;
	Float tmp13 = this->get_bottom();
	Float tmp14 = toIntersect->get_bottom();
	bool tmp15 = (tmp13 > tmp14);
	Float tmp16;
	if ((tmp15)){
		tmp16 = toIntersect->get_bottom();
	}
	else{
		tmp16 = this->get_bottom();
	}
	Float y1 = tmp16;
	bool tmp17 = (y1 <= y0);
	if ((tmp17)){
		::openfl::geom::Rectangle tmp18 = ::openfl::geom::Rectangle_obj::__new(null(),null(),null(),null());
		return tmp18;
	}
	Float tmp18 = x0;
	Float tmp19 = y0;
	Float tmp20 = (x1 - x0);
	Float tmp21 = (y1 - y0);
	::openfl::geom::Rectangle tmp22 = ::openfl::geom::Rectangle_obj::__new(tmp18,tmp19,tmp20,tmp21);
	return tmp22;
}


HX_DEFINE_DYNAMIC_FUNC1(Rectangle_obj,intersection,return )

bool Rectangle_obj::intersects( ::openfl::geom::Rectangle toIntersect){
	Float tmp = this->x;
	Float tmp1 = toIntersect->x;
	bool tmp2 = (tmp < tmp1);
	Float tmp3;
	if ((tmp2)){
		tmp3 = toIntersect->x;
	}
	else{
		tmp3 = this->x;
	}
	Float x0 = tmp3;
	Float tmp4 = this->get_right();
	Float tmp5 = toIntersect->get_right();
	bool tmp6 = (tmp4 > tmp5);
	Float tmp7;
	if ((tmp6)){
		tmp7 = toIntersect->get_right();
	}
	else{
		tmp7 = this->get_right();
	}
	Float x1 = tmp7;
	bool tmp8 = (x1 <= x0);
	if ((tmp8)){
		return false;
	}
	Float tmp9 = this->y;
	Float tmp10 = toIntersect->y;
	bool tmp11 = (tmp9 < tmp10);
	Float tmp12;
	if ((tmp11)){
		tmp12 = toIntersect->y;
	}
	else{
		tmp12 = this->y;
	}
	Float y0 = tmp12;
	Float tmp13 = this->get_bottom();
	Float tmp14 = toIntersect->get_bottom();
	bool tmp15 = (tmp13 > tmp14);
	Float tmp16;
	if ((tmp15)){
		tmp16 = toIntersect->get_bottom();
	}
	else{
		tmp16 = this->get_bottom();
	}
	Float y1 = tmp16;
	bool tmp17 = (y1 > y0);
	return tmp17;
}


HX_DEFINE_DYNAMIC_FUNC1(Rectangle_obj,intersects,return )

bool Rectangle_obj::isEmpty( ){
	Float tmp = this->width;
	bool tmp1 = (tmp <= (int)0);
	bool tmp2 = !(tmp1);
	bool tmp3;
	if ((tmp2)){
		Float tmp4 = this->height;
		Float tmp5 = tmp4;
		tmp3 = (tmp5 <= (int)0);
	}
	else{
		tmp3 = true;
	}
	return tmp3;
}


HX_DEFINE_DYNAMIC_FUNC0(Rectangle_obj,isEmpty,return )

Void Rectangle_obj::offset( Float dx,Float dy){
{
		hx::AddEq(this->x,dx);
		hx::AddEq(this->y,dy);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(Rectangle_obj,offset,(void))

Void Rectangle_obj::offsetPoint( ::openfl::geom::Point point){
{
		hx::AddEq(this->x,point->x);
		hx::AddEq(this->y,point->y);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Rectangle_obj,offsetPoint,(void))

Void Rectangle_obj::setEmpty( ){
{
		Float tmp = this->height = (int)0;
		Float tmp1 = this->width = tmp;
		Float tmp2 = this->y = tmp1;
		this->x = tmp2;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(Rectangle_obj,setEmpty,(void))

Void Rectangle_obj::setTo( Float xa,Float ya,Float widtha,Float heighta){
{
		this->x = xa;
		this->y = ya;
		this->width = widtha;
		this->height = heighta;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC4(Rectangle_obj,setTo,(void))

::String Rectangle_obj::toString( ){
	Float tmp = this->x;
	::String tmp1 = (HX_HCSTRING("(x=","\xed","\xc2","\x1e","\x00") + tmp);
	::String tmp2 = (tmp1 + HX_HCSTRING(", y=","\x18","\x15","\x2e","\x1d"));
	Float tmp3 = this->y;
	::String tmp4 = (tmp2 + tmp3);
	::String tmp5 = (tmp4 + HX_HCSTRING(", width=","\xeb","\x04","\x57","\x53"));
	Float tmp6 = this->width;
	::String tmp7 = (tmp5 + tmp6);
	::String tmp8 = (tmp7 + HX_HCSTRING(", height=","\x82","\x32","\x07","\x68"));
	Float tmp9 = this->height;
	::String tmp10 = (tmp8 + tmp9);
	::String tmp11 = (tmp10 + HX_HCSTRING(")","\x29","\x00","\x00","\x00"));
	return tmp11;
}


HX_DEFINE_DYNAMIC_FUNC0(Rectangle_obj,toString,return )

::openfl::geom::Rectangle Rectangle_obj::_union( ::openfl::geom::Rectangle toUnion){
	Float tmp = this->width;
	bool tmp1 = (tmp == (int)0);
	bool tmp2 = !(tmp1);
	bool tmp3;
	if ((tmp2)){
		Float tmp4 = this->height;
		Float tmp5 = tmp4;
		tmp3 = (tmp5 == (int)0);
	}
	else{
		tmp3 = true;
	}
	if ((tmp3)){
		::openfl::geom::Rectangle tmp4 = toUnion->clone();
		return tmp4;
	}
	else{
		bool tmp4 = (toUnion->width == (int)0);
		bool tmp5 = !(tmp4);
		bool tmp6;
		if ((tmp5)){
			tmp6 = (toUnion->height == (int)0);
		}
		else{
			tmp6 = true;
		}
		if ((tmp6)){
			::openfl::geom::Rectangle tmp7 = this->clone();
			return tmp7;
		}
	}
	Float tmp4 = this->x;
	Float tmp5 = toUnion->x;
	bool tmp6 = (tmp4 > tmp5);
	Float tmp7;
	if ((tmp6)){
		tmp7 = toUnion->x;
	}
	else{
		tmp7 = this->x;
	}
	Float x0 = tmp7;
	Float tmp8 = this->get_right();
	Float tmp9 = toUnion->get_right();
	bool tmp10 = (tmp8 < tmp9);
	Float tmp11;
	if ((tmp10)){
		tmp11 = toUnion->get_right();
	}
	else{
		tmp11 = this->get_right();
	}
	Float x1 = tmp11;
	Float tmp12 = this->y;
	Float tmp13 = toUnion->y;
	bool tmp14 = (tmp12 > tmp13);
	Float tmp15;
	if ((tmp14)){
		tmp15 = toUnion->y;
	}
	else{
		tmp15 = this->y;
	}
	Float y0 = tmp15;
	Float tmp16 = this->get_bottom();
	Float tmp17 = toUnion->get_bottom();
	bool tmp18 = (tmp16 < tmp17);
	Float tmp19;
	if ((tmp18)){
		tmp19 = toUnion->get_bottom();
	}
	else{
		tmp19 = this->get_bottom();
	}
	Float y1 = tmp19;
	Float tmp20 = x0;
	Float tmp21 = y0;
	Float tmp22 = (x1 - x0);
	Float tmp23 = (y1 - y0);
	::openfl::geom::Rectangle tmp24 = ::openfl::geom::Rectangle_obj::__new(tmp20,tmp21,tmp22,tmp23);
	return tmp24;
}


HX_DEFINE_DYNAMIC_FUNC1(Rectangle_obj,_union,return )

Void Rectangle_obj::__contract( Float x,Float y,Float width,Float height){
{
		Float tmp = this->width;
		bool tmp1 = (tmp == (int)0);
		bool tmp2;
		if ((tmp1)){
			Float tmp3 = this->height;
			Float tmp4 = tmp3;
			tmp2 = (tmp4 == (int)0);
		}
		else{
			tmp2 = false;
		}
		if ((tmp2)){
			return null();
		}
		Float offsetX = ((Float)0.0);
		Float offsetY = ((Float)0.0);
		Float offsetRight = ((Float)0.0);
		Float offsetBottom = ((Float)0.0);
		Float tmp3 = this->x;
		Float tmp4 = x;
		bool tmp5 = (tmp3 < tmp4);
		if ((tmp5)){
			Float tmp6 = x;
			Float tmp7 = this->x;
			Float tmp8 = (tmp6 - tmp7);
			offsetX = tmp8;
		}
		Float tmp6 = this->y;
		Float tmp7 = y;
		bool tmp8 = (tmp6 < tmp7);
		if ((tmp8)){
			Float tmp9 = y;
			Float tmp10 = this->y;
			Float tmp11 = (tmp9 - tmp10);
			offsetY = tmp11;
		}
		Float tmp9 = this->get_right();
		Float tmp10 = (x + width);
		bool tmp11 = (tmp9 > tmp10);
		if ((tmp11)){
			Float tmp12 = (x + width);
			Float tmp13 = this->get_right();
			Float tmp14 = (tmp12 - tmp13);
			offsetRight = tmp14;
		}
		Float tmp12 = this->get_bottom();
		Float tmp13 = (y + height);
		bool tmp14 = (tmp12 > tmp13);
		if ((tmp14)){
			Float tmp15 = (y + height);
			Float tmp16 = this->get_bottom();
			Float tmp17 = (tmp15 - tmp16);
			offsetBottom = tmp17;
		}
		hx::AddEq(this->x,offsetX);
		hx::AddEq(this->y,offsetY);
		Float tmp15 = (offsetRight - offsetX);
		hx::AddEq(this->width,tmp15);
		Float tmp16 = (offsetBottom - offsetY);
		hx::AddEq(this->height,tmp16);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC4(Rectangle_obj,__contract,(void))

Void Rectangle_obj::__expand( Float x,Float y,Float width,Float height){
{
		Float tmp = this->width;
		bool tmp1 = (tmp == (int)0);
		bool tmp2;
		if ((tmp1)){
			Float tmp3 = this->height;
			Float tmp4 = tmp3;
			tmp2 = (tmp4 == (int)0);
		}
		else{
			tmp2 = false;
		}
		if ((tmp2)){
			this->x = x;
			this->y = y;
			this->width = width;
			this->height = height;
			return null();
		}
		Float tmp3 = this->get_right();
		Float cacheRight = tmp3;
		Float tmp4 = this->get_bottom();
		Float cacheBottom = tmp4;
		Float tmp5 = this->x;
		Float tmp6 = x;
		bool tmp7 = (tmp5 > tmp6);
		if ((tmp7)){
			this->x = x;
			Float tmp8 = (cacheRight - x);
			this->width = tmp8;
		}
		Float tmp8 = this->y;
		Float tmp9 = y;
		bool tmp10 = (tmp8 > tmp9);
		if ((tmp10)){
			this->y = y;
			Float tmp11 = (cacheBottom - y);
			this->height = tmp11;
		}
		Float tmp11 = cacheRight;
		Float tmp12 = (x + width);
		bool tmp13 = (tmp11 < tmp12);
		if ((tmp13)){
			Float tmp14 = (x + width);
			Float tmp15 = this->x;
			Float tmp16 = (tmp14 - tmp15);
			this->width = tmp16;
		}
		Float tmp14 = cacheBottom;
		Float tmp15 = (y + height);
		bool tmp16 = (tmp14 < tmp15);
		if ((tmp16)){
			Float tmp17 = (y + height);
			Float tmp18 = this->y;
			Float tmp19 = (tmp17 - tmp18);
			this->height = tmp19;
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC4(Rectangle_obj,__expand,(void))

::lime::math::Rectangle Rectangle_obj::__toLimeRectangle( ){
	::lime::math::Rectangle tmp = ::openfl::geom::Rectangle_obj::__limeRectangle;
	bool tmp1 = (tmp == null());
	if ((tmp1)){
		::lime::math::Rectangle tmp2 = ::lime::math::Rectangle_obj::__new(null(),null(),null(),null());
		::openfl::geom::Rectangle_obj::__limeRectangle = tmp2;
	}
	::lime::math::Rectangle tmp2 = ::openfl::geom::Rectangle_obj::__limeRectangle;
	Float tmp3 = this->x;
	Float tmp4 = this->y;
	Float tmp5 = this->width;
	Float tmp6 = this->height;
	tmp2->setTo(tmp3,tmp4,tmp5,tmp6);
	::lime::math::Rectangle tmp7 = ::openfl::geom::Rectangle_obj::__limeRectangle;
	return tmp7;
}


HX_DEFINE_DYNAMIC_FUNC0(Rectangle_obj,__toLimeRectangle,return )

Void Rectangle_obj::__transform( ::openfl::geom::Rectangle rect,::openfl::geom::Matrix m){
{
		Float tmp = m->a;
		Float tmp1 = this->x;
		Float tmp2 = (tmp * tmp1);
		Float tmp3 = m->c;
		Float tmp4 = this->y;
		Float tmp5 = (tmp3 * tmp4);
		Float tmp6 = (tmp2 + tmp5);
		Float tx0 = tmp6;
		Float tx1 = tx0;
		Float tmp7 = m->b;
		Float tmp8 = this->x;
		Float tmp9 = (tmp7 * tmp8);
		Float tmp10 = m->d;
		Float tmp11 = this->y;
		Float tmp12 = (tmp10 * tmp11);
		Float tmp13 = (tmp9 + tmp12);
		Float ty0 = tmp13;
		Float ty1 = ty0;
		Float tmp14 = m->a;
		Float tmp15 = this->x;
		Float tmp16 = this->width;
		Float tmp17 = (tmp15 + tmp16);
		Float tmp18 = (tmp14 * tmp17);
		Float tmp19 = m->c;
		Float tmp20 = this->y;
		Float tmp21 = (tmp19 * tmp20);
		Float tmp22 = (tmp18 + tmp21);
		Float tx = tmp22;
		Float tmp23 = m->b;
		Float tmp24 = this->x;
		Float tmp25 = this->width;
		Float tmp26 = (tmp24 + tmp25);
		Float tmp27 = (tmp23 * tmp26);
		Float tmp28 = m->d;
		Float tmp29 = this->y;
		Float tmp30 = (tmp28 * tmp29);
		Float tmp31 = (tmp27 + tmp30);
		Float ty = tmp31;
		bool tmp32 = (tx < tx0);
		if ((tmp32)){
			tx0 = tx;
		}
		bool tmp33 = (ty < ty0);
		if ((tmp33)){
			ty0 = ty;
		}
		bool tmp34 = (tx > tx1);
		if ((tmp34)){
			tx1 = tx;
		}
		bool tmp35 = (ty > ty1);
		if ((tmp35)){
			ty1 = ty;
		}
		Float tmp36 = m->a;
		Float tmp37 = this->x;
		Float tmp38 = this->width;
		Float tmp39 = (tmp37 + tmp38);
		Float tmp40 = (tmp36 * tmp39);
		Float tmp41 = m->c;
		Float tmp42 = this->y;
		Float tmp43 = this->height;
		Float tmp44 = (tmp42 + tmp43);
		Float tmp45 = (tmp41 * tmp44);
		Float tmp46 = (tmp40 + tmp45);
		tx = tmp46;
		Float tmp47 = m->b;
		Float tmp48 = this->x;
		Float tmp49 = this->width;
		Float tmp50 = (tmp48 + tmp49);
		Float tmp51 = (tmp47 * tmp50);
		Float tmp52 = m->d;
		Float tmp53 = this->y;
		Float tmp54 = this->height;
		Float tmp55 = (tmp53 + tmp54);
		Float tmp56 = (tmp52 * tmp55);
		Float tmp57 = (tmp51 + tmp56);
		ty = tmp57;
		bool tmp58 = (tx < tx0);
		if ((tmp58)){
			tx0 = tx;
		}
		bool tmp59 = (ty < ty0);
		if ((tmp59)){
			ty0 = ty;
		}
		bool tmp60 = (tx > tx1);
		if ((tmp60)){
			tx1 = tx;
		}
		bool tmp61 = (ty > ty1);
		if ((tmp61)){
			ty1 = ty;
		}
		Float tmp62 = m->a;
		Float tmp63 = this->x;
		Float tmp64 = (tmp62 * tmp63);
		Float tmp65 = m->c;
		Float tmp66 = this->y;
		Float tmp67 = this->height;
		Float tmp68 = (tmp66 + tmp67);
		Float tmp69 = (tmp65 * tmp68);
		Float tmp70 = (tmp64 + tmp69);
		tx = tmp70;
		Float tmp71 = m->b;
		Float tmp72 = this->x;
		Float tmp73 = (tmp71 * tmp72);
		Float tmp74 = m->d;
		Float tmp75 = this->y;
		Float tmp76 = this->height;
		Float tmp77 = (tmp75 + tmp76);
		Float tmp78 = (tmp74 * tmp77);
		Float tmp79 = (tmp73 + tmp78);
		ty = tmp79;
		bool tmp80 = (tx < tx0);
		if ((tmp80)){
			tx0 = tx;
		}
		bool tmp81 = (ty < ty0);
		if ((tmp81)){
			ty0 = ty;
		}
		bool tmp82 = (tx > tx1);
		if ((tmp82)){
			tx1 = tx;
		}
		bool tmp83 = (ty > ty1);
		if ((tmp83)){
			ty1 = ty;
		}
		Float tmp84 = (tx0 + m->tx);
		Float tmp85 = (ty0 + m->ty);
		Float tmp86 = (tx1 - tx0);
		Float tmp87 = (ty1 - ty0);
		rect->setTo(tmp84,tmp85,tmp86,tmp87);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(Rectangle_obj,__transform,(void))

Float Rectangle_obj::get_bottom( ){
	Float tmp = this->y;
	Float tmp1 = this->height;
	Float tmp2 = (tmp + tmp1);
	return tmp2;
}


HX_DEFINE_DYNAMIC_FUNC0(Rectangle_obj,get_bottom,return )

Float Rectangle_obj::set_bottom( Float b){
	Float tmp = b;
	Float tmp1 = this->y;
	Float tmp2 = (tmp - tmp1);
	this->height = tmp2;
	Float tmp3 = b;
	return tmp3;
}


HX_DEFINE_DYNAMIC_FUNC1(Rectangle_obj,set_bottom,return )

::openfl::geom::Point Rectangle_obj::get_bottomRight( ){
	Float tmp = this->x;
	Float tmp1 = this->width;
	Float tmp2 = (tmp + tmp1);
	Float tmp3 = this->y;
	Float tmp4 = this->height;
	Float tmp5 = (tmp3 + tmp4);
	::openfl::geom::Point tmp6 = ::openfl::geom::Point_obj::__new(tmp2,tmp5);
	return tmp6;
}


HX_DEFINE_DYNAMIC_FUNC0(Rectangle_obj,get_bottomRight,return )

::openfl::geom::Point Rectangle_obj::set_bottomRight( ::openfl::geom::Point p){
	Float tmp = p->x;
	Float tmp1 = this->x;
	Float tmp2 = (tmp - tmp1);
	this->width = tmp2;
	Float tmp3 = p->y;
	Float tmp4 = this->y;
	Float tmp5 = (tmp3 - tmp4);
	this->height = tmp5;
	::openfl::geom::Point tmp6 = p->clone();
	return tmp6;
}


HX_DEFINE_DYNAMIC_FUNC1(Rectangle_obj,set_bottomRight,return )

Float Rectangle_obj::get_left( ){
	Float tmp = this->x;
	return tmp;
}


HX_DEFINE_DYNAMIC_FUNC0(Rectangle_obj,get_left,return )

Float Rectangle_obj::set_left( Float l){
	Float tmp = l;
	Float tmp1 = this->x;
	Float tmp2 = (tmp - tmp1);
	hx::SubEq(this->width,tmp2);
	this->x = l;
	Float tmp3 = l;
	return tmp3;
}


HX_DEFINE_DYNAMIC_FUNC1(Rectangle_obj,set_left,return )

Float Rectangle_obj::get_right( ){
	Float tmp = this->x;
	Float tmp1 = this->width;
	Float tmp2 = (tmp + tmp1);
	return tmp2;
}


HX_DEFINE_DYNAMIC_FUNC0(Rectangle_obj,get_right,return )

Float Rectangle_obj::set_right( Float r){
	Float tmp = r;
	Float tmp1 = this->x;
	Float tmp2 = (tmp - tmp1);
	this->width = tmp2;
	Float tmp3 = r;
	return tmp3;
}


HX_DEFINE_DYNAMIC_FUNC1(Rectangle_obj,set_right,return )

::openfl::geom::Point Rectangle_obj::get_size( ){
	Float tmp = this->width;
	Float tmp1 = this->height;
	::openfl::geom::Point tmp2 = ::openfl::geom::Point_obj::__new(tmp,tmp1);
	return tmp2;
}


HX_DEFINE_DYNAMIC_FUNC0(Rectangle_obj,get_size,return )

::openfl::geom::Point Rectangle_obj::set_size( ::openfl::geom::Point p){
	this->width = p->x;
	this->height = p->y;
	::openfl::geom::Point tmp = p->clone();
	return tmp;
}


HX_DEFINE_DYNAMIC_FUNC1(Rectangle_obj,set_size,return )

Float Rectangle_obj::get_top( ){
	Float tmp = this->y;
	return tmp;
}


HX_DEFINE_DYNAMIC_FUNC0(Rectangle_obj,get_top,return )

Float Rectangle_obj::set_top( Float t){
	Float tmp = t;
	Float tmp1 = this->y;
	Float tmp2 = (tmp - tmp1);
	hx::SubEq(this->height,tmp2);
	this->y = t;
	Float tmp3 = t;
	return tmp3;
}


HX_DEFINE_DYNAMIC_FUNC1(Rectangle_obj,set_top,return )

::openfl::geom::Point Rectangle_obj::get_topLeft( ){
	Float tmp = this->x;
	Float tmp1 = this->y;
	::openfl::geom::Point tmp2 = ::openfl::geom::Point_obj::__new(tmp,tmp1);
	return tmp2;
}


HX_DEFINE_DYNAMIC_FUNC0(Rectangle_obj,get_topLeft,return )

::openfl::geom::Point Rectangle_obj::set_topLeft( ::openfl::geom::Point p){
	this->x = p->x;
	this->y = p->y;
	::openfl::geom::Point tmp = p->clone();
	return tmp;
}


HX_DEFINE_DYNAMIC_FUNC1(Rectangle_obj,set_topLeft,return )

::lime::math::Rectangle Rectangle_obj::__limeRectangle;

::lime::utils::ObjectPool_openfl_geom_Rectangle Rectangle_obj::__pool;


Rectangle_obj::Rectangle_obj()
{
}

Dynamic Rectangle_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 1:
		if (HX_FIELD_EQ(inName,"x") ) { return x; }
		if (HX_FIELD_EQ(inName,"y") ) { return y; }
		break;
	case 3:
		if (HX_FIELD_EQ(inName,"top") ) { if (inCallProp == hx::paccAlways) return get_top(); }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"left") ) { if (inCallProp == hx::paccAlways) return get_left(); }
		if (HX_FIELD_EQ(inName,"size") ) { if (inCallProp == hx::paccAlways) return get_size(); }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"right") ) { if (inCallProp == hx::paccAlways) return get_right(); }
		if (HX_FIELD_EQ(inName,"width") ) { return width; }
		if (HX_FIELD_EQ(inName,"clone") ) { return clone_dyn(); }
		if (HX_FIELD_EQ(inName,"setTo") ) { return setTo_dyn(); }
		if (HX_FIELD_EQ(inName,"union") ) { return _union_dyn(); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"bottom") ) { if (inCallProp == hx::paccAlways) return get_bottom(); }
		if (HX_FIELD_EQ(inName,"height") ) { return height; }
		if (HX_FIELD_EQ(inName,"equals") ) { return equals_dyn(); }
		if (HX_FIELD_EQ(inName,"offset") ) { return offset_dyn(); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"topLeft") ) { if (inCallProp == hx::paccAlways) return get_topLeft(); }
		if (HX_FIELD_EQ(inName,"inflate") ) { return inflate_dyn(); }
		if (HX_FIELD_EQ(inName,"isEmpty") ) { return isEmpty_dyn(); }
		if (HX_FIELD_EQ(inName,"get_top") ) { return get_top_dyn(); }
		if (HX_FIELD_EQ(inName,"set_top") ) { return set_top_dyn(); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"contains") ) { return contains_dyn(); }
		if (HX_FIELD_EQ(inName,"copyFrom") ) { return copyFrom_dyn(); }
		if (HX_FIELD_EQ(inName,"setEmpty") ) { return setEmpty_dyn(); }
		if (HX_FIELD_EQ(inName,"toString") ) { return toString_dyn(); }
		if (HX_FIELD_EQ(inName,"__expand") ) { return __expand_dyn(); }
		if (HX_FIELD_EQ(inName,"get_left") ) { return get_left_dyn(); }
		if (HX_FIELD_EQ(inName,"set_left") ) { return set_left_dyn(); }
		if (HX_FIELD_EQ(inName,"get_size") ) { return get_size_dyn(); }
		if (HX_FIELD_EQ(inName,"set_size") ) { return set_size_dyn(); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"get_right") ) { return get_right_dyn(); }
		if (HX_FIELD_EQ(inName,"set_right") ) { return set_right_dyn(); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"intersects") ) { return intersects_dyn(); }
		if (HX_FIELD_EQ(inName,"__contract") ) { return __contract_dyn(); }
		if (HX_FIELD_EQ(inName,"get_bottom") ) { return get_bottom_dyn(); }
		if (HX_FIELD_EQ(inName,"set_bottom") ) { return set_bottom_dyn(); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"bottomRight") ) { if (inCallProp == hx::paccAlways) return get_bottomRight(); }
		if (HX_FIELD_EQ(inName,"offsetPoint") ) { return offsetPoint_dyn(); }
		if (HX_FIELD_EQ(inName,"__transform") ) { return __transform_dyn(); }
		if (HX_FIELD_EQ(inName,"get_topLeft") ) { return get_topLeft_dyn(); }
		if (HX_FIELD_EQ(inName,"set_topLeft") ) { return set_topLeft_dyn(); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"containsRect") ) { return containsRect_dyn(); }
		if (HX_FIELD_EQ(inName,"inflatePoint") ) { return inflatePoint_dyn(); }
		if (HX_FIELD_EQ(inName,"intersection") ) { return intersection_dyn(); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"containsPoint") ) { return containsPoint_dyn(); }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"get_bottomRight") ) { return get_bottomRight_dyn(); }
		if (HX_FIELD_EQ(inName,"set_bottomRight") ) { return set_bottomRight_dyn(); }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"__toLimeRectangle") ) { return __toLimeRectangle_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

bool Rectangle_obj::__GetStatic(const ::String &inName, Dynamic &outValue, hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 6:
		if (HX_FIELD_EQ(inName,"__pool") ) { outValue = __pool; return true;  }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"__limeRectangle") ) { outValue = __limeRectangle; return true;  }
	}
	return false;
}

Dynamic Rectangle_obj::__SetField(const ::String &inName,const Dynamic &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 1:
		if (HX_FIELD_EQ(inName,"x") ) { x=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"y") ) { y=inValue.Cast< Float >(); return inValue; }
		break;
	case 3:
		if (HX_FIELD_EQ(inName,"top") ) { if (inCallProp == hx::paccAlways) return set_top(inValue); }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"left") ) { if (inCallProp == hx::paccAlways) return set_left(inValue); }
		if (HX_FIELD_EQ(inName,"size") ) { if (inCallProp == hx::paccAlways) return set_size(inValue); }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"right") ) { if (inCallProp == hx::paccAlways) return set_right(inValue); }
		if (HX_FIELD_EQ(inName,"width") ) { width=inValue.Cast< Float >(); return inValue; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"bottom") ) { if (inCallProp == hx::paccAlways) return set_bottom(inValue); }
		if (HX_FIELD_EQ(inName,"height") ) { height=inValue.Cast< Float >(); return inValue; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"topLeft") ) { if (inCallProp == hx::paccAlways) return set_topLeft(inValue); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"bottomRight") ) { if (inCallProp == hx::paccAlways) return set_bottomRight(inValue); }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

bool Rectangle_obj::__SetStatic(const ::String &inName,Dynamic &ioValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 6:
		if (HX_FIELD_EQ(inName,"__pool") ) { __pool=ioValue.Cast< ::lime::utils::ObjectPool_openfl_geom_Rectangle >(); return true; }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"__limeRectangle") ) { __limeRectangle=ioValue.Cast< ::lime::math::Rectangle >(); return true; }
	}
	return false;
}

void Rectangle_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("bottom","\xeb","\xe6","\x78","\x65"));
	outFields->push(HX_HCSTRING("bottomRight","\xf1","\xa0","\xf4","\x4e"));
	outFields->push(HX_HCSTRING("height","\xe7","\x07","\x4c","\x02"));
	outFields->push(HX_HCSTRING("left","\x07","\x08","\xb0","\x47"));
	outFields->push(HX_HCSTRING("right","\xdc","\x0b","\x64","\xe9"));
	outFields->push(HX_HCSTRING("size","\xc1","\xa0","\x53","\x4c"));
	outFields->push(HX_HCSTRING("top","\x95","\x66","\x58","\x00"));
	outFields->push(HX_HCSTRING("topLeft","\x3c","\x09","\xc1","\xe8"));
	outFields->push(HX_HCSTRING("width","\x06","\xb6","\x62","\xca"));
	outFields->push(HX_HCSTRING("x","\x78","\x00","\x00","\x00"));
	outFields->push(HX_HCSTRING("y","\x79","\x00","\x00","\x00"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsFloat,(int)offsetof(Rectangle_obj,height),HX_HCSTRING("height","\xe7","\x07","\x4c","\x02")},
	{hx::fsFloat,(int)offsetof(Rectangle_obj,width),HX_HCSTRING("width","\x06","\xb6","\x62","\xca")},
	{hx::fsFloat,(int)offsetof(Rectangle_obj,x),HX_HCSTRING("x","\x78","\x00","\x00","\x00")},
	{hx::fsFloat,(int)offsetof(Rectangle_obj,y),HX_HCSTRING("y","\x79","\x00","\x00","\x00")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo sStaticStorageInfo[] = {
	{hx::fsObject /*::lime::math::Rectangle*/ ,(void *) &Rectangle_obj::__limeRectangle,HX_HCSTRING("__limeRectangle","\x3a","\xcb","\xcf","\x63")},
	{hx::fsObject /*::lime::utils::ObjectPool_openfl_geom_Rectangle*/ ,(void *) &Rectangle_obj::__pool,HX_HCSTRING("__pool","\xfc","\xe3","\x54","\xf9")},
	{ hx::fsUnknown, 0, null()}
};
#endif

static ::String sMemberFields[] = {
	HX_HCSTRING("height","\xe7","\x07","\x4c","\x02"),
	HX_HCSTRING("width","\x06","\xb6","\x62","\xca"),
	HX_HCSTRING("x","\x78","\x00","\x00","\x00"),
	HX_HCSTRING("y","\x79","\x00","\x00","\x00"),
	HX_HCSTRING("clone","\x5d","\x13","\x63","\x48"),
	HX_HCSTRING("contains","\x1f","\x5a","\x7b","\x2c"),
	HX_HCSTRING("containsPoint","\xb1","\xb9","\xeb","\x92"),
	HX_HCSTRING("containsRect","\xe3","\xce","\x1c","\xa6"),
	HX_HCSTRING("copyFrom","\xbf","\x0b","\x61","\xc8"),
	HX_HCSTRING("equals","\x3f","\xee","\xf2","\xbf"),
	HX_HCSTRING("inflate","\x87","\x9c","\x1b","\x0c"),
	HX_HCSTRING("inflatePoint","\x49","\xbe","\x39","\x32"),
	HX_HCSTRING("intersection","\x49","\xa2","\x61","\x88"),
	HX_HCSTRING("intersects","\xb4","\xc2","\xeb","\xe3"),
	HX_HCSTRING("isEmpty","\x43","\xde","\x5f","\x0c"),
	HX_HCSTRING("offset","\x93","\x97","\x3f","\x60"),
	HX_HCSTRING("offsetPoint","\xbd","\x37","\x10","\x5f"),
	HX_HCSTRING("setEmpty","\x8b","\xa3","\x0e","\x7e"),
	HX_HCSTRING("setTo","\xbd","\x91","\x2f","\x7a"),
	HX_HCSTRING("toString","\xac","\xd0","\x6e","\x38"),
	HX_HCSTRING("union","\x0f","\x65","\xe7","\xa6"),
	HX_HCSTRING("__contract","\x32","\x52","\xea","\xda"),
	HX_HCSTRING("__expand","\x7a","\x59","\xa2","\x6c"),
	HX_HCSTRING("__toLimeRectangle","\xbf","\x9c","\x93","\x92"),
	HX_HCSTRING("__transform","\x4c","\x76","\xbf","\x73"),
	HX_HCSTRING("get_bottom","\xb4","\x56","\x00","\x56"),
	HX_HCSTRING("set_bottom","\x28","\xf5","\x7d","\x59"),
	HX_HCSTRING("get_bottomRight","\x88","\x58","\xd6","\x0f"),
	HX_HCSTRING("set_bottomRight","\x94","\xd5","\xa1","\x0b"),
	HX_HCSTRING("get_left","\x90","\xc3","\x6a","\xc7"),
	HX_HCSTRING("set_left","\x04","\x1d","\xc8","\x75"),
	HX_HCSTRING("get_right","\x33","\x68","\x0d","\x2d"),
	HX_HCSTRING("set_right","\x3f","\x54","\x5e","\x10"),
	HX_HCSTRING("get_size","\x4a","\x5c","\x0e","\xcc"),
	HX_HCSTRING("set_size","\xbe","\xb5","\x6b","\x7a"),
	HX_HCSTRING("get_top","\x2c","\x2f","\xcd","\x26"),
	HX_HCSTRING("set_top","\x38","\xc0","\xce","\x19"),
	HX_HCSTRING("get_topLeft","\x53","\x69","\xbb","\x6e"),
	HX_HCSTRING("set_topLeft","\x5f","\x70","\x28","\x79"),
	::String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(Rectangle_obj::__mClass,"__mClass");
	HX_MARK_MEMBER_NAME(Rectangle_obj::__limeRectangle,"__limeRectangle");
	HX_MARK_MEMBER_NAME(Rectangle_obj::__pool,"__pool");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(Rectangle_obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(Rectangle_obj::__limeRectangle,"__limeRectangle");
	HX_VISIT_MEMBER_NAME(Rectangle_obj::__pool,"__pool");
};

#endif

hx::Class Rectangle_obj::__mClass;

static ::String sStaticFields[] = {
	HX_HCSTRING("__limeRectangle","\x3a","\xcb","\xcf","\x63"),
	HX_HCSTRING("__pool","\xfc","\xe3","\x54","\xf9"),
	::String(null()) };

void Rectangle_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("openfl.geom.Rectangle","\xfb","\x52","\x34","\xb7");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &Rectangle_obj::__GetStatic;
	__mClass->mSetStaticField = &Rectangle_obj::__SetStatic;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(sStaticFields);
	__mClass->mMembers = hx::Class_obj::dupFunctions(sMemberFields);
	__mClass->mCanCast = hx::TCanCast< Rectangle_obj >;
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

void Rectangle_obj::__boot()
{

HX_BEGIN_LOCAL_FUNC_S0(hx::LocalFunc,_Function_0_1)
int __ArgCount() const { return 0; }
::openfl::geom::Rectangle run(){
	{
		::openfl::geom::Rectangle tmp = ::openfl::geom::Rectangle_obj::__new(null(),null(),null(),null());
		return tmp;
	}
	return null();
}
HX_END_LOCAL_FUNC0(return)


HX_BEGIN_LOCAL_FUNC_S0(hx::LocalFunc,_Function_0_2)
int __ArgCount() const { return 1; }
Void run(::openfl::geom::Rectangle r){
	{
		r->setTo((int)0,(int)0,(int)0,(int)0);
	}
	return null();
}
HX_END_LOCAL_FUNC1((void))

	__pool= ::lime::utils::ObjectPool_openfl_geom_Rectangle_obj::__new( Dynamic(new _Function_0_1()), Dynamic(new _Function_0_2()),null());
}

} // end namespace openfl
} // end namespace geom
