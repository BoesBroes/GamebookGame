#include <hxcpp.h>

#ifndef INCLUDED_List
#include <List.h>
#endif
#ifndef INCLUDED_lime_utils_ObjectPool_openfl_geom_Matrix
#include <lime/utils/ObjectPool_openfl_geom_Matrix.h>
#endif
#ifndef INCLUDED_openfl_geom_Matrix
#include <openfl/geom/Matrix.h>
#endif
namespace lime{
namespace utils{

Void ObjectPool_openfl_geom_Matrix_obj::__construct(Dynamic create,Dynamic clean,Dynamic size)
{
HX_STACK_FRAME("lime.utils.ObjectPool_openfl_geom_Matrix","new",0xf75d9395,"lime.utils.ObjectPool_openfl_geom_Matrix.new","lime/utils/ObjectPool.hx",22,0xc114d76b)
HX_STACK_THIS(this)
HX_STACK_ARG(create,"create")
HX_STACK_ARG(clean,"clean")
HX_STACK_ARG(size,"size")
{
	HX_STACK_LINE(24)
	bool tmp = (create != null());		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(24)
	if ((tmp)){
		HX_STACK_LINE(26)
		this->create = create;
	}
	HX_STACK_LINE(30)
	bool tmp1 = (clean != null());		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(30)
	if ((tmp1)){
		HX_STACK_LINE(32)
		this->clean = clean;
	}
	HX_STACK_LINE(36)
	bool tmp2 = (size != null());		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(36)
	if ((tmp2)){
		HX_STACK_LINE(38)
		Dynamic tmp3 = size;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(38)
		this->set_size(tmp3);
	}
	HX_STACK_LINE(42)
	::List tmp3 = ::List_obj::__new();		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(42)
	this->__activeObjects = tmp3;
	HX_STACK_LINE(43)
	::List tmp4 = ::List_obj::__new();		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(43)
	this->__inactiveObjects = tmp4;
}
;
	return null();
}

//ObjectPool_openfl_geom_Matrix_obj::~ObjectPool_openfl_geom_Matrix_obj() { }

Dynamic ObjectPool_openfl_geom_Matrix_obj::__CreateEmpty() { return  new ObjectPool_openfl_geom_Matrix_obj; }
hx::ObjectPtr< ObjectPool_openfl_geom_Matrix_obj > ObjectPool_openfl_geom_Matrix_obj::__new(Dynamic create,Dynamic clean,Dynamic size)
{  hx::ObjectPtr< ObjectPool_openfl_geom_Matrix_obj > _result_ = new ObjectPool_openfl_geom_Matrix_obj();
	_result_->__construct(create,clean,size);
	return _result_;}

Dynamic ObjectPool_openfl_geom_Matrix_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< ObjectPool_openfl_geom_Matrix_obj > _result_ = new ObjectPool_openfl_geom_Matrix_obj();
	_result_->__construct(inArgs[0],inArgs[1],inArgs[2]);
	return _result_;}

Void ObjectPool_openfl_geom_Matrix_obj::add( ::openfl::geom::Matrix object){
{
		HX_STACK_FRAME("lime.utils.ObjectPool_openfl_geom_Matrix","add",0xf753b556,"lime.utils.ObjectPool_openfl_geom_Matrix.add","lime/utils/ObjectPool.hx",48,0xc114d76b)
		HX_STACK_THIS(this)
		HX_STACK_ARG(object,"object")
		HX_STACK_LINE(50)
		bool tmp = (object != null());		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(50)
		if ((tmp)){
			HX_STACK_LINE(52)
			::List tmp1 = this->__activeObjects;		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(52)
			::openfl::geom::Matrix tmp2 = object;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(52)
			tmp1->remove(tmp2);
			HX_STACK_LINE(53)
			::List tmp3 = this->__inactiveObjects;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(53)
			::openfl::geom::Matrix tmp4 = object;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(53)
			tmp3->remove(tmp4);
			HX_STACK_LINE(55)
			::openfl::geom::Matrix tmp5 = object;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(55)
			this->clean(tmp5);
			HX_STACK_LINE(57)
			::List tmp6 = this->__inactiveObjects;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(57)
			::openfl::geom::Matrix tmp7 = object;		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(57)
			tmp6->add(tmp7);
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(ObjectPool_openfl_geom_Matrix_obj,add,(void))

HX_BEGIN_DEFAULT_FUNC(__default_clean,ObjectPool_openfl_geom_Matrix_obj)
Void run(::openfl::geom::Matrix object){
{
		HX_STACK_FRAME("lime.utils.ObjectPool_openfl_geom_Matrix","clean",0x67c42bfe,"lime.utils.ObjectPool_openfl_geom_Matrix.clean","lime/utils/ObjectPool.hx",64,0xc114d76b)
		HX_STACK_THIS(this)
		HX_STACK_ARG(object,"object")
	}
return null();
}
HX_END_LOCAL_FUNC1((void))
HX_END_DEFAULT_FUNC

Void ObjectPool_openfl_geom_Matrix_obj::clear( ){
{
		HX_STACK_FRAME("lime.utils.ObjectPool_openfl_geom_Matrix","clear",0x67c42c02,"lime.utils.ObjectPool_openfl_geom_Matrix.clear","lime/utils/ObjectPool.hx",71,0xc114d76b)
		HX_STACK_THIS(this)
		HX_STACK_LINE(73)
		::List tmp = this->__inactiveObjects;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(73)
		tmp->clear();
		HX_STACK_LINE(74)
		::List tmp1 = this->__activeObjects;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(74)
		tmp1->clear();
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(ObjectPool_openfl_geom_Matrix_obj,clear,(void))

HX_BEGIN_DEFAULT_FUNC(__default_create,ObjectPool_openfl_geom_Matrix_obj)
::openfl::geom::Matrix run(){
	HX_STACK_FRAME("lime.utils.ObjectPool_openfl_geom_Matrix","create",0xd849d2e7,"lime.utils.ObjectPool_openfl_geom_Matrix.create","lime/utils/ObjectPool.hx",81,0xc114d76b)
	HX_STACK_THIS(this)
	HX_STACK_LINE(81)
	return null();
}
HX_END_LOCAL_FUNC0(return )
HX_END_DEFAULT_FUNC

::openfl::geom::Matrix ObjectPool_openfl_geom_Matrix_obj::get( ){
	HX_STACK_FRAME("lime.utils.ObjectPool_openfl_geom_Matrix","get",0xf75843cb,"lime.utils.ObjectPool_openfl_geom_Matrix.get","lime/utils/ObjectPool.hx",86,0xc114d76b)
	HX_STACK_THIS(this)
	HX_STACK_LINE(88)
	::openfl::geom::Matrix object = null();		HX_STACK_VAR(object,"object");
	HX_STACK_LINE(90)
	::List tmp = this->__inactiveObjects;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(90)
	int tmp1 = tmp->length;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(90)
	bool tmp2 = (tmp1 > (int)0);		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(90)
	if ((tmp2)){
		HX_STACK_LINE(92)
		::List tmp3 = this->__inactiveObjects;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(92)
		::openfl::geom::Matrix tmp4 = tmp3->pop();		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(92)
		object = tmp4;
		HX_STACK_LINE(93)
		::List tmp5 = this->__activeObjects;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(93)
		::openfl::geom::Matrix tmp6 = object;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(93)
		tmp5->add(tmp6);
	}
	else{
		HX_STACK_LINE(95)
		Dynamic tmp3 = this->__size;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(95)
		bool tmp4 = (tmp3 == null());		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(95)
		bool tmp5 = !(tmp4);		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(95)
		bool tmp6;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(95)
		if ((tmp5)){
			HX_STACK_LINE(95)
			::List tmp7 = this->__activeObjects;		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(95)
			::List tmp8 = tmp7;		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(95)
			int tmp9 = tmp8->length;		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(95)
			Dynamic tmp10 = this->__size;		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(95)
			Dynamic tmp11 = tmp10;		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(95)
			tmp6 = (tmp9 < tmp11);
		}
		else{
			HX_STACK_LINE(95)
			tmp6 = true;
		}
		HX_STACK_LINE(95)
		if ((tmp6)){
			HX_STACK_LINE(97)
			::openfl::geom::Matrix tmp7 = this->create();		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(97)
			object = tmp7;
			HX_STACK_LINE(99)
			bool tmp8 = (object != null());		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(99)
			if ((tmp8)){
				HX_STACK_LINE(101)
				::List tmp9 = this->__activeObjects;		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(101)
				::openfl::geom::Matrix tmp10 = object;		HX_STACK_VAR(tmp10,"tmp10");
				HX_STACK_LINE(101)
				tmp9->add(tmp10);
			}
		}
	}
	HX_STACK_LINE(107)
	::openfl::geom::Matrix tmp3 = object;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(107)
	return tmp3;
}


HX_DEFINE_DYNAMIC_FUNC0(ObjectPool_openfl_geom_Matrix_obj,get,return )

Void ObjectPool_openfl_geom_Matrix_obj::release( ::openfl::geom::Matrix object){
{
		HX_STACK_FRAME("lime.utils.ObjectPool_openfl_geom_Matrix","release",0xafd1877c,"lime.utils.ObjectPool_openfl_geom_Matrix.release","lime/utils/ObjectPool.hx",112,0xc114d76b)
		HX_STACK_THIS(this)
		HX_STACK_ARG(object,"object")
		HX_STACK_LINE(114)
		::List tmp = this->__activeObjects;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(114)
		::openfl::geom::Matrix tmp1 = object;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(114)
		bool tmp2 = tmp->remove(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(114)
		if ((tmp2)){
			HX_STACK_LINE(116)
			::openfl::geom::Matrix tmp3 = object;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(116)
			this->clean(tmp3);
			HX_STACK_LINE(118)
			Dynamic tmp4 = this->__size;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(118)
			bool tmp5 = (tmp4 == null());		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(118)
			bool tmp6 = !(tmp5);		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(118)
			bool tmp7;		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(118)
			if ((tmp6)){
				HX_STACK_LINE(118)
				::List tmp8 = this->__activeObjects;		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(118)
				::List tmp9 = tmp8;		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(118)
				int tmp10 = tmp9->length;		HX_STACK_VAR(tmp10,"tmp10");
				HX_STACK_LINE(118)
				::List tmp11 = this->__inactiveObjects;		HX_STACK_VAR(tmp11,"tmp11");
				HX_STACK_LINE(118)
				::List tmp12 = tmp11;		HX_STACK_VAR(tmp12,"tmp12");
				HX_STACK_LINE(118)
				int tmp13 = tmp12->length;		HX_STACK_VAR(tmp13,"tmp13");
				HX_STACK_LINE(118)
				int tmp14 = (tmp10 + tmp13);		HX_STACK_VAR(tmp14,"tmp14");
				HX_STACK_LINE(118)
				int tmp15 = tmp14;		HX_STACK_VAR(tmp15,"tmp15");
				HX_STACK_LINE(118)
				Dynamic tmp16 = this->__size;		HX_STACK_VAR(tmp16,"tmp16");
				HX_STACK_LINE(118)
				Dynamic tmp17 = tmp16;		HX_STACK_VAR(tmp17,"tmp17");
				HX_STACK_LINE(118)
				tmp7 = (tmp15 < tmp17);
			}
			else{
				HX_STACK_LINE(118)
				tmp7 = true;
			}
			HX_STACK_LINE(118)
			if ((tmp7)){
				HX_STACK_LINE(120)
				::List tmp8 = this->__inactiveObjects;		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(120)
				::openfl::geom::Matrix tmp9 = object;		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(120)
				tmp8->add(tmp9);
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(ObjectPool_openfl_geom_Matrix_obj,release,(void))

int ObjectPool_openfl_geom_Matrix_obj::get_activeObjects( ){
	HX_STACK_FRAME("lime.utils.ObjectPool_openfl_geom_Matrix","get_activeObjects",0x9819d4fa,"lime.utils.ObjectPool_openfl_geom_Matrix.get_activeObjects","lime/utils/ObjectPool.hx",136,0xc114d76b)
	HX_STACK_THIS(this)
	HX_STACK_LINE(138)
	::List tmp = this->__activeObjects;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(138)
	int tmp1 = tmp->length;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(138)
	return tmp1;
}


HX_DEFINE_DYNAMIC_FUNC0(ObjectPool_openfl_geom_Matrix_obj,get_activeObjects,return )

int ObjectPool_openfl_geom_Matrix_obj::get_inactiveObjects( ){
	HX_STACK_FRAME("lime.utils.ObjectPool_openfl_geom_Matrix","get_inactiveObjects",0xb54c18f5,"lime.utils.ObjectPool_openfl_geom_Matrix.get_inactiveObjects","lime/utils/ObjectPool.hx",143,0xc114d76b)
	HX_STACK_THIS(this)
	HX_STACK_LINE(145)
	::List tmp = this->__inactiveObjects;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(145)
	int tmp1 = tmp->length;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(145)
	return tmp1;
}


HX_DEFINE_DYNAMIC_FUNC0(ObjectPool_openfl_geom_Matrix_obj,get_inactiveObjects,return )

Dynamic ObjectPool_openfl_geom_Matrix_obj::get_size( ){
	HX_STACK_FRAME("lime.utils.ObjectPool_openfl_geom_Matrix","get_size",0x7cabd8f5,"lime.utils.ObjectPool_openfl_geom_Matrix.get_size","lime/utils/ObjectPool.hx",150,0xc114d76b)
	HX_STACK_THIS(this)
	HX_STACK_LINE(152)
	Dynamic tmp = this->__size;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(152)
	return tmp;
}


HX_DEFINE_DYNAMIC_FUNC0(ObjectPool_openfl_geom_Matrix_obj,get_size,return )

Dynamic ObjectPool_openfl_geom_Matrix_obj::set_size( Dynamic value){
	HX_STACK_FRAME("lime.utils.ObjectPool_openfl_geom_Matrix","set_size",0x2b093269,"lime.utils.ObjectPool_openfl_geom_Matrix.set_size","lime/utils/ObjectPool.hx",157,0xc114d76b)
	HX_STACK_THIS(this)
	HX_STACK_ARG(value,"value")
	HX_STACK_LINE(159)
	bool tmp = (value == null());		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(159)
	if ((tmp)){
		HX_STACK_LINE(161)
		this->__size = null();
	}
	else{
		HX_STACK_LINE(165)
		::List tmp1 = this->__inactiveObjects;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(165)
		int tmp2 = tmp1->length;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(165)
		::List tmp3 = this->__activeObjects;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(165)
		int tmp4 = tmp3->length;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(165)
		int tmp5 = (tmp2 + tmp4);		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(165)
		int current = tmp5;		HX_STACK_VAR(current,"current");
		HX_STACK_LINE(166)
		this->__size = value;
		HX_STACK_LINE(168)
		while((true)){
			HX_STACK_LINE(168)
			bool tmp6 = (current > value);		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(168)
			bool tmp7 = !(tmp6);		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(168)
			if ((tmp7)){
				HX_STACK_LINE(168)
				break;
			}
			HX_STACK_LINE(170)
			::List tmp8 = this->__inactiveObjects;		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(170)
			int tmp9 = tmp8->length;		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(170)
			bool tmp10 = (tmp9 > (int)0);		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(170)
			if ((tmp10)){
				HX_STACK_LINE(172)
				::List tmp11 = this->__inactiveObjects;		HX_STACK_VAR(tmp11,"tmp11");
				HX_STACK_LINE(172)
				tmp11->pop();
				HX_STACK_LINE(173)
				(current)--;
			}
			else{
				HX_STACK_LINE(175)
				::List tmp11 = this->__activeObjects;		HX_STACK_VAR(tmp11,"tmp11");
				HX_STACK_LINE(175)
				int tmp12 = tmp11->length;		HX_STACK_VAR(tmp12,"tmp12");
				HX_STACK_LINE(175)
				bool tmp13 = (tmp12 > (int)0);		HX_STACK_VAR(tmp13,"tmp13");
				HX_STACK_LINE(175)
				if ((tmp13)){
					HX_STACK_LINE(177)
					::List tmp14 = this->__activeObjects;		HX_STACK_VAR(tmp14,"tmp14");
					HX_STACK_LINE(177)
					tmp14->pop();
					HX_STACK_LINE(178)
					(current)--;
				}
				else{
					HX_STACK_LINE(182)
					break;
				}
			}
		}
		HX_STACK_LINE(188)
		::openfl::geom::Matrix object;		HX_STACK_VAR(object,"object");
		HX_STACK_LINE(190)
		while((true)){
			HX_STACK_LINE(190)
			bool tmp6 = (value > current);		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(190)
			bool tmp7 = !(tmp6);		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(190)
			if ((tmp7)){
				HX_STACK_LINE(190)
				break;
			}
			HX_STACK_LINE(192)
			::openfl::geom::Matrix tmp8 = this->create();		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(192)
			object = tmp8;
			HX_STACK_LINE(194)
			bool tmp9 = (object != null());		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(194)
			if ((tmp9)){
				HX_STACK_LINE(196)
				::List tmp10 = this->__inactiveObjects;		HX_STACK_VAR(tmp10,"tmp10");
				HX_STACK_LINE(196)
				::openfl::geom::Matrix tmp11 = object;		HX_STACK_VAR(tmp11,"tmp11");
				HX_STACK_LINE(196)
				tmp10->add(tmp11);
				HX_STACK_LINE(197)
				(current)++;
			}
			else{
				HX_STACK_LINE(201)
				break;
			}
		}
	}
	HX_STACK_LINE(209)
	Dynamic tmp1 = value;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(209)
	return tmp1;
}


HX_DEFINE_DYNAMIC_FUNC1(ObjectPool_openfl_geom_Matrix_obj,set_size,return )


ObjectPool_openfl_geom_Matrix_obj::ObjectPool_openfl_geom_Matrix_obj()
{
	clean = new __default_clean(this);
	create = new __default_create(this);
}

void ObjectPool_openfl_geom_Matrix_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(ObjectPool_openfl_geom_Matrix);
	HX_MARK_MEMBER_NAME(__activeObjects,"__activeObjects");
	HX_MARK_MEMBER_NAME(__inactiveObjects,"__inactiveObjects");
	HX_MARK_MEMBER_NAME(__size,"__size");
	HX_MARK_MEMBER_NAME(clean,"clean");
	HX_MARK_MEMBER_NAME(create,"create");
	HX_MARK_END_CLASS();
}

void ObjectPool_openfl_geom_Matrix_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(__activeObjects,"__activeObjects");
	HX_VISIT_MEMBER_NAME(__inactiveObjects,"__inactiveObjects");
	HX_VISIT_MEMBER_NAME(__size,"__size");
	HX_VISIT_MEMBER_NAME(clean,"clean");
	HX_VISIT_MEMBER_NAME(create,"create");
}

Dynamic ObjectPool_openfl_geom_Matrix_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"add") ) { return add_dyn(); }
		if (HX_FIELD_EQ(inName,"get") ) { return get_dyn(); }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"size") ) { if (inCallProp == hx::paccAlways) return get_size(); }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"clean") ) { return clean; }
		if (HX_FIELD_EQ(inName,"clear") ) { return clear_dyn(); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"__size") ) { return __size; }
		if (HX_FIELD_EQ(inName,"create") ) { return create; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"release") ) { return release_dyn(); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"get_size") ) { return get_size_dyn(); }
		if (HX_FIELD_EQ(inName,"set_size") ) { return set_size_dyn(); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"activeObjects") ) { if (inCallProp == hx::paccAlways) return get_activeObjects(); }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"inactiveObjects") ) { if (inCallProp == hx::paccAlways) return get_inactiveObjects(); }
		if (HX_FIELD_EQ(inName,"__activeObjects") ) { return __activeObjects; }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"__inactiveObjects") ) { return __inactiveObjects; }
		if (HX_FIELD_EQ(inName,"get_activeObjects") ) { return get_activeObjects_dyn(); }
		break;
	case 19:
		if (HX_FIELD_EQ(inName,"get_inactiveObjects") ) { return get_inactiveObjects_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic ObjectPool_openfl_geom_Matrix_obj::__SetField(const ::String &inName,const Dynamic &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"size") ) { if (inCallProp == hx::paccAlways) return set_size(inValue); }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"clean") ) { clean=inValue.Cast< Dynamic >(); return inValue; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"__size") ) { __size=inValue.Cast< Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"create") ) { create=inValue.Cast< Dynamic >(); return inValue; }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"__activeObjects") ) { __activeObjects=inValue.Cast< ::List >(); return inValue; }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"__inactiveObjects") ) { __inactiveObjects=inValue.Cast< ::List >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void ObjectPool_openfl_geom_Matrix_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("activeObjects","\xae","\xb3","\x18","\x3a"));
	outFields->push(HX_HCSTRING("inactiveObjects","\xa9","\x0c","\xc7","\xfb"));
	outFields->push(HX_HCSTRING("size","\xc1","\xa0","\x53","\x4c"));
	outFields->push(HX_HCSTRING("__activeObjects","\x8e","\xec","\xca","\xc1"));
	outFields->push(HX_HCSTRING("__inactiveObjects","\x89","\x3d","\x21","\x7f"));
	outFields->push(HX_HCSTRING("__size","\xe1","\x03","\x4c","\xfb"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsObject /*::List*/ ,(int)offsetof(ObjectPool_openfl_geom_Matrix_obj,__activeObjects),HX_HCSTRING("__activeObjects","\x8e","\xec","\xca","\xc1")},
	{hx::fsObject /*::List*/ ,(int)offsetof(ObjectPool_openfl_geom_Matrix_obj,__inactiveObjects),HX_HCSTRING("__inactiveObjects","\x89","\x3d","\x21","\x7f")},
	{hx::fsObject /*Dynamic*/ ,(int)offsetof(ObjectPool_openfl_geom_Matrix_obj,__size),HX_HCSTRING("__size","\xe1","\x03","\x4c","\xfb")},
	{hx::fsObject /*Dynamic*/ ,(int)offsetof(ObjectPool_openfl_geom_Matrix_obj,clean),HX_HCSTRING("clean","\x89","\x71","\x5b","\x48")},
	{hx::fsObject /*Dynamic*/ ,(int)offsetof(ObjectPool_openfl_geom_Matrix_obj,create),HX_HCSTRING("create","\xfc","\x66","\x0f","\x7c")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo *sStaticStorageInfo = 0;
#endif

static ::String sMemberFields[] = {
	HX_HCSTRING("__activeObjects","\x8e","\xec","\xca","\xc1"),
	HX_HCSTRING("__inactiveObjects","\x89","\x3d","\x21","\x7f"),
	HX_HCSTRING("__size","\xe1","\x03","\x4c","\xfb"),
	HX_HCSTRING("add","\x21","\xf2","\x49","\x00"),
	HX_HCSTRING("clean","\x89","\x71","\x5b","\x48"),
	HX_HCSTRING("clear","\x8d","\x71","\x5b","\x48"),
	HX_HCSTRING("create","\xfc","\x66","\x0f","\x7c"),
	HX_HCSTRING("get","\x96","\x80","\x4e","\x00"),
	HX_HCSTRING("release","\xc7","\x85","\xed","\x58"),
	HX_HCSTRING("get_activeObjects","\x05","\xbf","\x88","\x40"),
	HX_HCSTRING("get_inactiveObjects","\xc0","\xdb","\xd1","\x86"),
	HX_HCSTRING("get_size","\x4a","\x5c","\x0e","\xcc"),
	HX_HCSTRING("set_size","\xbe","\xb5","\x6b","\x7a"),
	::String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(ObjectPool_openfl_geom_Matrix_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(ObjectPool_openfl_geom_Matrix_obj::__mClass,"__mClass");
};

#endif

hx::Class ObjectPool_openfl_geom_Matrix_obj::__mClass;

void ObjectPool_openfl_geom_Matrix_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("lime.utils.ObjectPool_openfl_geom_Matrix","\x23","\x25","\xa5","\xa7");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = hx::Class_obj::dupFunctions(sMemberFields);
	__mClass->mCanCast = hx::TCanCast< ObjectPool_openfl_geom_Matrix_obj >;
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
} // end namespace utils
