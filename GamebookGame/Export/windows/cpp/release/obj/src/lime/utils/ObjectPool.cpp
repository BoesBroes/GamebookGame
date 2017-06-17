#include <hxcpp.h>

#ifndef INCLUDED_List
#include <List.h>
#endif
#ifndef INCLUDED_lime_utils_ObjectPool
#include <lime/utils/ObjectPool.h>
#endif
namespace lime{
namespace utils{

Void ObjectPool_obj::__construct(Dynamic create,Dynamic clean,Dynamic size)
{
{
	bool tmp = (create != null());
	if ((tmp)){
		this->create = create;
	}
	bool tmp1 = (clean != null());
	if ((tmp1)){
		this->clean = clean;
	}
	bool tmp2 = (size != null());
	if ((tmp2)){
		Dynamic tmp3 = size;
		this->set_size(tmp3);
	}
	::List tmp3 = ::List_obj::__new();
	this->__activeObjects = tmp3;
	::List tmp4 = ::List_obj::__new();
	this->__inactiveObjects = tmp4;
}
;
	return null();
}

//ObjectPool_obj::~ObjectPool_obj() { }

Dynamic ObjectPool_obj::__CreateEmpty() { return  new ObjectPool_obj; }
hx::ObjectPtr< ObjectPool_obj > ObjectPool_obj::__new(Dynamic create,Dynamic clean,Dynamic size)
{  hx::ObjectPtr< ObjectPool_obj > _result_ = new ObjectPool_obj();
	_result_->__construct(create,clean,size);
	return _result_;}

Dynamic ObjectPool_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< ObjectPool_obj > _result_ = new ObjectPool_obj();
	_result_->__construct(inArgs[0],inArgs[1],inArgs[2]);
	return _result_;}

Void ObjectPool_obj::add( Dynamic object){
{
		bool tmp = (object != null());
		if ((tmp)){
			::List tmp1 = this->__activeObjects;
			Dynamic tmp2 = object;
			tmp1->remove(tmp2);
			::List tmp3 = this->__inactiveObjects;
			Dynamic tmp4 = object;
			tmp3->remove(tmp4);
			Dynamic tmp5 = object;
			this->clean(tmp5);
			::List tmp6 = this->__inactiveObjects;
			Dynamic tmp7 = object;
			tmp6->add(tmp7);
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(ObjectPool_obj,add,(void))

HX_BEGIN_DEFAULT_FUNC(__default_clean,ObjectPool_obj)
Void run(Dynamic object){
{
	}
return null();
}
HX_END_LOCAL_FUNC1((void))
HX_END_DEFAULT_FUNC

Void ObjectPool_obj::clear( ){
{
		::List tmp = this->__inactiveObjects;
		tmp->clear();
		::List tmp1 = this->__activeObjects;
		tmp1->clear();
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(ObjectPool_obj,clear,(void))

HX_BEGIN_DEFAULT_FUNC(__default_create,ObjectPool_obj)
Dynamic run(){
	return null();
}
HX_END_LOCAL_FUNC0(return )
HX_END_DEFAULT_FUNC

Dynamic ObjectPool_obj::get( ){
	Dynamic object = null();
	::List tmp = this->__inactiveObjects;
	int tmp1 = tmp->length;
	bool tmp2 = (tmp1 > (int)0);
	if ((tmp2)){
		::List tmp3 = this->__inactiveObjects;
		Dynamic tmp4 = tmp3->pop();
		object = tmp4;
		::List tmp5 = this->__activeObjects;
		Dynamic tmp6 = object;
		tmp5->add(tmp6);
	}
	else{
		Dynamic tmp3 = this->__size;
		bool tmp4 = (tmp3 == null());
		bool tmp5 = !(tmp4);
		bool tmp6;
		if ((tmp5)){
			::List tmp7 = this->__activeObjects;
			::List tmp8 = tmp7;
			int tmp9 = tmp8->length;
			Dynamic tmp10 = this->__size;
			Dynamic tmp11 = tmp10;
			tmp6 = (tmp9 < tmp11);
		}
		else{
			tmp6 = true;
		}
		if ((tmp6)){
			Dynamic tmp7 = this->create();
			object = tmp7;
			bool tmp8 = (object != null());
			if ((tmp8)){
				::List tmp9 = this->__activeObjects;
				Dynamic tmp10 = object;
				tmp9->add(tmp10);
			}
		}
	}
	Dynamic tmp3 = object;
	return tmp3;
}


HX_DEFINE_DYNAMIC_FUNC0(ObjectPool_obj,get,return )

Void ObjectPool_obj::release( Dynamic object){
{
		::List tmp = this->__activeObjects;
		Dynamic tmp1 = object;
		bool tmp2 = tmp->remove(tmp1);
		if ((tmp2)){
			Dynamic tmp3 = object;
			this->clean(tmp3);
			Dynamic tmp4 = this->__size;
			bool tmp5 = (tmp4 == null());
			bool tmp6 = !(tmp5);
			bool tmp7;
			if ((tmp6)){
				::List tmp8 = this->__activeObjects;
				::List tmp9 = tmp8;
				int tmp10 = tmp9->length;
				::List tmp11 = this->__inactiveObjects;
				::List tmp12 = tmp11;
				int tmp13 = tmp12->length;
				int tmp14 = (tmp10 + tmp13);
				int tmp15 = tmp14;
				Dynamic tmp16 = this->__size;
				Dynamic tmp17 = tmp16;
				tmp7 = (tmp15 < tmp17);
			}
			else{
				tmp7 = true;
			}
			if ((tmp7)){
				::List tmp8 = this->__inactiveObjects;
				Dynamic tmp9 = object;
				tmp8->add(tmp9);
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(ObjectPool_obj,release,(void))

int ObjectPool_obj::get_activeObjects( ){
	::List tmp = this->__activeObjects;
	int tmp1 = tmp->length;
	return tmp1;
}


HX_DEFINE_DYNAMIC_FUNC0(ObjectPool_obj,get_activeObjects,return )

int ObjectPool_obj::get_inactiveObjects( ){
	::List tmp = this->__inactiveObjects;
	int tmp1 = tmp->length;
	return tmp1;
}


HX_DEFINE_DYNAMIC_FUNC0(ObjectPool_obj,get_inactiveObjects,return )

Dynamic ObjectPool_obj::get_size( ){
	Dynamic tmp = this->__size;
	return tmp;
}


HX_DEFINE_DYNAMIC_FUNC0(ObjectPool_obj,get_size,return )

Dynamic ObjectPool_obj::set_size( Dynamic value){
	bool tmp = (value == null());
	if ((tmp)){
		this->__size = null();
	}
	else{
		::List tmp1 = this->__inactiveObjects;
		int tmp2 = tmp1->length;
		::List tmp3 = this->__activeObjects;
		int tmp4 = tmp3->length;
		int tmp5 = (tmp2 + tmp4);
		int current = tmp5;
		this->__size = value;
		while((true)){
			bool tmp6 = (current > value);
			bool tmp7 = !(tmp6);
			if ((tmp7)){
				break;
			}
			::List tmp8 = this->__inactiveObjects;
			int tmp9 = tmp8->length;
			bool tmp10 = (tmp9 > (int)0);
			if ((tmp10)){
				::List tmp11 = this->__inactiveObjects;
				tmp11->pop();
				(current)--;
			}
			else{
				::List tmp11 = this->__activeObjects;
				int tmp12 = tmp11->length;
				bool tmp13 = (tmp12 > (int)0);
				if ((tmp13)){
					::List tmp14 = this->__activeObjects;
					tmp14->pop();
					(current)--;
				}
				else{
					break;
				}
			}
		}
		Dynamic object;
		while((true)){
			bool tmp6 = (value > current);
			bool tmp7 = !(tmp6);
			if ((tmp7)){
				break;
			}
			Dynamic tmp8 = this->create();
			object = tmp8;
			bool tmp9 = (object != null());
			if ((tmp9)){
				::List tmp10 = this->__inactiveObjects;
				Dynamic tmp11 = object;
				tmp10->add(tmp11);
				(current)++;
			}
			else{
				break;
			}
		}
	}
	Dynamic tmp1 = value;
	return tmp1;
}


HX_DEFINE_DYNAMIC_FUNC1(ObjectPool_obj,set_size,return )


ObjectPool_obj::ObjectPool_obj()
{
	clean = new __default_clean(this);
	create = new __default_create(this);
}

void ObjectPool_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(ObjectPool);
	HX_MARK_MEMBER_NAME(__activeObjects,"__activeObjects");
	HX_MARK_MEMBER_NAME(__inactiveObjects,"__inactiveObjects");
	HX_MARK_MEMBER_NAME(__size,"__size");
	HX_MARK_MEMBER_NAME(clean,"clean");
	HX_MARK_MEMBER_NAME(create,"create");
	HX_MARK_END_CLASS();
}

void ObjectPool_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(__activeObjects,"__activeObjects");
	HX_VISIT_MEMBER_NAME(__inactiveObjects,"__inactiveObjects");
	HX_VISIT_MEMBER_NAME(__size,"__size");
	HX_VISIT_MEMBER_NAME(clean,"clean");
	HX_VISIT_MEMBER_NAME(create,"create");
}

Dynamic ObjectPool_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
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

Dynamic ObjectPool_obj::__SetField(const ::String &inName,const Dynamic &inValue,hx::PropertyAccess inCallProp)
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

void ObjectPool_obj::__GetFields(Array< ::String> &outFields)
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
	{hx::fsObject /*::List*/ ,(int)offsetof(ObjectPool_obj,__activeObjects),HX_HCSTRING("__activeObjects","\x8e","\xec","\xca","\xc1")},
	{hx::fsObject /*::List*/ ,(int)offsetof(ObjectPool_obj,__inactiveObjects),HX_HCSTRING("__inactiveObjects","\x89","\x3d","\x21","\x7f")},
	{hx::fsObject /*Dynamic*/ ,(int)offsetof(ObjectPool_obj,__size),HX_HCSTRING("__size","\xe1","\x03","\x4c","\xfb")},
	{hx::fsObject /*Dynamic*/ ,(int)offsetof(ObjectPool_obj,clean),HX_HCSTRING("clean","\x89","\x71","\x5b","\x48")},
	{hx::fsObject /*Dynamic*/ ,(int)offsetof(ObjectPool_obj,create),HX_HCSTRING("create","\xfc","\x66","\x0f","\x7c")},
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
	HX_MARK_MEMBER_NAME(ObjectPool_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(ObjectPool_obj::__mClass,"__mClass");
};

#endif

hx::Class ObjectPool_obj::__mClass;

void ObjectPool_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("lime.utils.ObjectPool","\xf1","\x2f","\xf4","\x28");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = hx::Class_obj::dupFunctions(sMemberFields);
	__mClass->mCanCast = hx::TCanCast< ObjectPool_obj >;
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
