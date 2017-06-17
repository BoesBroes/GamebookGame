#include <hxcpp.h>

#ifndef INCLUDED_Reflect
#include <Reflect.h>
#endif
#ifndef INCLUDED_openfl__Vector_FunctionVector
#include <openfl/_Vector/FunctionVector.h>
#endif
#ifndef INCLUDED_openfl__Vector_IVector
#include <openfl/_Vector/IVector.h>
#endif
namespace openfl{
namespace _Vector{

Void FunctionVector_obj::__construct(Dynamic length,Dynamic fixed,cpp::ArrayBase array)
{
{
	bool tmp = (array == null());
	if ((tmp)){
		array = Dynamic( Array_obj<Dynamic>::__new() );
	}
	this->__array = array;
	bool tmp1 = (length != null());
	if ((tmp1)){
		Dynamic tmp2 = length;
		this->set_length(tmp2);
	}
	bool tmp2 = (fixed == true);
	this->fixed = tmp2;
}
;
	return null();
}

//FunctionVector_obj::~FunctionVector_obj() { }

Dynamic FunctionVector_obj::__CreateEmpty() { return  new FunctionVector_obj; }
hx::ObjectPtr< FunctionVector_obj > FunctionVector_obj::__new(Dynamic length,Dynamic fixed,cpp::ArrayBase array)
{  hx::ObjectPtr< FunctionVector_obj > _result_ = new FunctionVector_obj();
	_result_->__construct(length,fixed,array);
	return _result_;}

Dynamic FunctionVector_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< FunctionVector_obj > _result_ = new FunctionVector_obj();
	_result_->__construct(inArgs[0],inArgs[1],inArgs[2]);
	return _result_;}

hx::Object *FunctionVector_obj::__ToInterface(const hx::type_info &inType) {
	if (inType==typeid( ::openfl::_Vector::IVector_obj)) return operator ::openfl::_Vector::IVector_obj *();
	return super::__ToInterface(inType);
}

FunctionVector_obj::operator ::openfl::_Vector::IVector_obj *()
	{ return new ::openfl::_Vector::IVector_delegate_< FunctionVector_obj >(this); }
::openfl::_Vector::IVector FunctionVector_obj::concat( ::openfl::_Vector::IVector a){
	bool tmp = (a == null());
	if ((tmp)){
		::openfl::_Vector::FunctionVector tmp1 = ::openfl::_Vector::FunctionVector_obj::__new(null(),null(),this->__array->__Field(HX_HCSTRING("copy","\xb5","\xbb","\xc4","\x41"), hx::paccDynamic )());
		return tmp1;
	}
	else{
		::openfl::_Vector::FunctionVector tmp1;
		tmp1 = hx::TCast< ::openfl::_Vector::FunctionVector >::cast(a);
		::openfl::_Vector::FunctionVector tmp2 = ::openfl::_Vector::FunctionVector_obj::__new(null(),null(),this->__array->__Field(HX_HCSTRING("concat","\x14","\x09","\xd0","\xc7"), hx::paccDynamic )(tmp1->__array));
		return tmp2;
	}
	return null();
}


HX_DEFINE_DYNAMIC_FUNC1(FunctionVector_obj,concat,return )

::openfl::_Vector::IVector FunctionVector_obj::copy( ){
	bool tmp = this->fixed;
	::openfl::_Vector::FunctionVector tmp1 = ::openfl::_Vector::FunctionVector_obj::__new(null(),tmp,this->__array->__Field(HX_HCSTRING("copy","\xb5","\xbb","\xc4","\x41"), hx::paccDynamic )());
	return tmp1;
}


HX_DEFINE_DYNAMIC_FUNC0(FunctionVector_obj,copy,return )

Dynamic FunctionVector_obj::get( int index){
	int tmp = index;
	int tmp1 = this->__array->__Field(HX_HCSTRING("length","\xe6","\x94","\x07","\x9f"), hx::paccDynamic );
	bool tmp2 = (tmp >= tmp1);
	if ((tmp2)){
		return null();
	}
	else{
		Dynamic tmp3 = this->__array->__GetItem(index);
		return tmp3;
	}
	return null();
}


HX_DEFINE_DYNAMIC_FUNC1(FunctionVector_obj,get,return )

int FunctionVector_obj::indexOf( Dynamic x,Dynamic __o_from){
Dynamic from = __o_from.Default(0);
{
		{
			int _g1 = from;
			int tmp = this->__array->__Field(HX_HCSTRING("length","\xe6","\x94","\x07","\x9f"), hx::paccDynamic );
			int _g = tmp;
			while((true)){
				bool tmp1 = (_g1 < _g);
				bool tmp2 = !(tmp1);
				if ((tmp2)){
					break;
				}
				int tmp3 = (_g1)++;
				int i = tmp3;
				Dynamic tmp4 = this->__array->__GetItem(i);
				Dynamic tmp5 = x;
				bool tmp6 = ::Reflect_obj::compareMethods(tmp4,tmp5);
				if ((tmp6)){
					int tmp7 = i;
					return tmp7;
				}
			}
		}
		return (int)-1;
	}
}


HX_DEFINE_DYNAMIC_FUNC2(FunctionVector_obj,indexOf,return )

Void FunctionVector_obj::insertAt( int index,Dynamic element){
{
		bool tmp = this->fixed;
		bool tmp1 = tmp;
		bool tmp2 = !(tmp1);
		bool tmp3 = !(tmp2);
		bool tmp4;
		if ((tmp3)){
			int tmp5 = index;
			int tmp6 = this->__array->__Field(HX_HCSTRING("length","\xe6","\x94","\x07","\x9f"), hx::paccDynamic );
			int tmp7 = tmp6;
			tmp4 = (tmp5 < tmp7);
		}
		else{
			tmp4 = true;
		}
		if ((tmp4)){
			int tmp5 = index;
			Dynamic tmp6 = element;
			this->__array->__Field(HX_HCSTRING("insert","\x39","\x43","\xdd","\x9d"), hx::paccDynamic )(tmp5,tmp6);
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(FunctionVector_obj,insertAt,(void))

Dynamic FunctionVector_obj::iterator( ){
	Dynamic tmp = this->__array->__Field(HX_HCSTRING("iterator","\xee","\x49","\x9a","\x93"), hx::paccDynamic )();
	Dynamic tmp1 = tmp;
	return tmp1;
}


HX_DEFINE_DYNAMIC_FUNC0(FunctionVector_obj,iterator,return )

::String FunctionVector_obj::join( ::String sep){
	::String tmp = sep;
	::String tmp1 = this->__array->__Field(HX_HCSTRING("join","\xea","\x33","\x65","\x46"), hx::paccDynamic )(tmp);
	return tmp1;
}


HX_DEFINE_DYNAMIC_FUNC1(FunctionVector_obj,join,return )

int FunctionVector_obj::lastIndexOf( Dynamic x,Dynamic __o_from){
Dynamic from = __o_from.Default(0);
{
		int tmp = this->__array->__Field(HX_HCSTRING("length","\xe6","\x94","\x07","\x9f"), hx::paccDynamic );
		int tmp1 = (tmp - (int)1);
		int i = tmp1;
		while((true)){
			bool tmp2 = (i >= from);
			bool tmp3 = !(tmp2);
			if ((tmp3)){
				break;
			}
			Dynamic tmp4 = this->__array->__GetItem(i);
			Dynamic tmp5 = x;
			bool tmp6 = ::Reflect_obj::compareMethods(tmp4,tmp5);
			if ((tmp6)){
				int tmp7 = i;
				return tmp7;
			}
			(i)--;
		}
		return (int)-1;
	}
}


HX_DEFINE_DYNAMIC_FUNC2(FunctionVector_obj,lastIndexOf,return )

Dynamic FunctionVector_obj::pop( ){
	bool tmp = this->fixed;
	bool tmp1 = !(tmp);
	if ((tmp1)){
		Dynamic tmp2 = this->__array->__Field(HX_HCSTRING("pop","\x91","\x5d","\x55","\x00"), hx::paccDynamic )();
		return tmp2;
	}
	else{
		return null();
	}
	return null();
}


HX_DEFINE_DYNAMIC_FUNC0(FunctionVector_obj,pop,return )

int FunctionVector_obj::push( Dynamic x){
	bool tmp = this->fixed;
	bool tmp1 = !(tmp);
	if ((tmp1)){
		Dynamic tmp2 = x;
		int tmp3 = this->__array->__Field(HX_HCSTRING("push","\xda","\x11","\x61","\x4a"), hx::paccDynamic )(tmp2);
		return tmp3;
	}
	else{
		int tmp2 = this->__array->__Field(HX_HCSTRING("length","\xe6","\x94","\x07","\x9f"), hx::paccDynamic );
		return tmp2;
	}
	return (int)0;
}


HX_DEFINE_DYNAMIC_FUNC1(FunctionVector_obj,push,return )

::openfl::_Vector::IVector FunctionVector_obj::reverse( ){
	this->__array->__Field(HX_HCSTRING("reverse","\x22","\x39","\xfc","\x1a"), hx::paccDynamic )();
	return hx::ObjectPtr<OBJ_>(this);
}


HX_DEFINE_DYNAMIC_FUNC0(FunctionVector_obj,reverse,return )

Dynamic FunctionVector_obj::set( int index,Dynamic value){
	bool tmp = this->fixed;
	bool tmp1 = tmp;
	bool tmp2 = !(tmp1);
	bool tmp3 = !(tmp2);
	bool tmp4;
	if ((tmp3)){
		int tmp5 = index;
		int tmp6 = this->__array->__Field(HX_HCSTRING("length","\xe6","\x94","\x07","\x9f"), hx::paccDynamic );
		int tmp7 = tmp6;
		tmp4 = (tmp5 < tmp7);
	}
	else{
		tmp4 = true;
	}
	if ((tmp4)){
		Dynamic tmp5 = value;
		Dynamic tmp6 = hx::IndexRef((this->__array).mPtr,index) = tmp5;
		return tmp6;
	}
	else{
		Dynamic tmp5 = value;
		return tmp5;
	}
	return null();
}


HX_DEFINE_DYNAMIC_FUNC2(FunctionVector_obj,set,return )

Dynamic FunctionVector_obj::shift( ){
	bool tmp = this->fixed;
	bool tmp1 = !(tmp);
	if ((tmp1)){
		Dynamic tmp2 = this->__array->__Field(HX_HCSTRING("shift","\x82","\xec","\x22","\x7c"), hx::paccDynamic )();
		return tmp2;
	}
	else{
		return null();
	}
	return null();
}


HX_DEFINE_DYNAMIC_FUNC0(FunctionVector_obj,shift,return )

::openfl::_Vector::IVector FunctionVector_obj::slice( Dynamic __o_startIndex,Dynamic __o_endIndex){
Dynamic startIndex = __o_startIndex.Default(0);
Dynamic endIndex = __o_endIndex.Default(16777215);
{
		Dynamic tmp = startIndex;
		Dynamic tmp1 = endIndex;
		::openfl::_Vector::FunctionVector tmp2 = ::openfl::_Vector::FunctionVector_obj::__new(null(),null(),this->__array->__Field(HX_HCSTRING("slice","\x52","\xc4","\xc7","\x7e"), hx::paccDynamic )(tmp,tmp1));
		return tmp2;
	}
}


HX_DEFINE_DYNAMIC_FUNC2(FunctionVector_obj,slice,return )

Void FunctionVector_obj::sort( Dynamic f){
{
		Dynamic tmp = f;
		this->__array->__Field(HX_HCSTRING("sort","\x5e","\x27","\x58","\x4c"), hx::paccDynamic )(tmp);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(FunctionVector_obj,sort,(void))

::openfl::_Vector::IVector FunctionVector_obj::splice( int pos,int len){
	int tmp = pos;
	int tmp1 = len;
	::openfl::_Vector::FunctionVector tmp2 = ::openfl::_Vector::FunctionVector_obj::__new(null(),null(),this->__array->__Field(HX_HCSTRING("splice","\x7c","\x85","\x9e","\xbf"), hx::paccDynamic )(tmp,tmp1));
	return tmp2;
}


HX_DEFINE_DYNAMIC_FUNC2(FunctionVector_obj,splice,return )

::String FunctionVector_obj::toString( ){
	bool tmp = (this->__array != null());
	::String tmp1;
	if ((tmp)){
		tmp1 = this->__array->toString();
	}
	else{
		tmp1 = null();
	}
	return tmp1;
}


HX_DEFINE_DYNAMIC_FUNC0(FunctionVector_obj,toString,return )

Void FunctionVector_obj::unshift( Dynamic x){
{
		bool tmp = this->fixed;
		bool tmp1 = !(tmp);
		if ((tmp1)){
			Dynamic tmp2 = x;
			this->__array->__Field(HX_HCSTRING("unshift","\x89","\xe3","\xb3","\x78"), hx::paccDynamic )(tmp2);
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(FunctionVector_obj,unshift,(void))

int FunctionVector_obj::get_length( ){
	int tmp = this->__array->__Field(HX_HCSTRING("length","\xe6","\x94","\x07","\x9f"), hx::paccDynamic );
	return tmp;
}


HX_DEFINE_DYNAMIC_FUNC0(FunctionVector_obj,get_length,return )

int FunctionVector_obj::set_length( int value){
	bool tmp = this->fixed;
	bool tmp1 = !(tmp);
	if ((tmp1)){
		int tmp2 = value;
		this->__array->__Field(HX_HCSTRING("__SetSizeExact","\x7c","\x25","\xcd","\x82"), hx::paccDynamic )(tmp2);
	}
	int tmp2 = this->__array->__Field(HX_HCSTRING("length","\xe6","\x94","\x07","\x9f"), hx::paccDynamic );
	return tmp2;
}


HX_DEFINE_DYNAMIC_FUNC1(FunctionVector_obj,set_length,return )


FunctionVector_obj::FunctionVector_obj()
{
}

void FunctionVector_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(FunctionVector);
	HX_MARK_MEMBER_NAME(fixed,"fixed");
	HX_MARK_MEMBER_NAME(__array,"__array");
	HX_MARK_END_CLASS();
}

void FunctionVector_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(fixed,"fixed");
	HX_VISIT_MEMBER_NAME(__array,"__array");
}

Dynamic FunctionVector_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"get") ) { return get_dyn(); }
		if (HX_FIELD_EQ(inName,"pop") ) { return pop_dyn(); }
		if (HX_FIELD_EQ(inName,"set") ) { return set_dyn(); }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"copy") ) { return copy_dyn(); }
		if (HX_FIELD_EQ(inName,"join") ) { return join_dyn(); }
		if (HX_FIELD_EQ(inName,"push") ) { return push_dyn(); }
		if (HX_FIELD_EQ(inName,"sort") ) { return sort_dyn(); }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"fixed") ) { return fixed; }
		if (HX_FIELD_EQ(inName,"shift") ) { return shift_dyn(); }
		if (HX_FIELD_EQ(inName,"slice") ) { return slice_dyn(); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"length") ) { if (inCallProp == hx::paccAlways) return get_length(); }
		if (HX_FIELD_EQ(inName,"concat") ) { return concat_dyn(); }
		if (HX_FIELD_EQ(inName,"splice") ) { return splice_dyn(); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"__array") ) { return __array; }
		if (HX_FIELD_EQ(inName,"indexOf") ) { return indexOf_dyn(); }
		if (HX_FIELD_EQ(inName,"reverse") ) { return reverse_dyn(); }
		if (HX_FIELD_EQ(inName,"unshift") ) { return unshift_dyn(); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"insertAt") ) { return insertAt_dyn(); }
		if (HX_FIELD_EQ(inName,"iterator") ) { return iterator_dyn(); }
		if (HX_FIELD_EQ(inName,"toString") ) { return toString_dyn(); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"get_length") ) { return get_length_dyn(); }
		if (HX_FIELD_EQ(inName,"set_length") ) { return set_length_dyn(); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"lastIndexOf") ) { return lastIndexOf_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic FunctionVector_obj::__SetField(const ::String &inName,const Dynamic &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"fixed") ) { fixed=inValue.Cast< bool >(); return inValue; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"length") ) { if (inCallProp == hx::paccAlways) return set_length(inValue); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"__array") ) { __array=inValue.Cast< cpp::ArrayBase >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void FunctionVector_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("fixed","\x74","\xf9","\xa1","\x00"));
	outFields->push(HX_HCSTRING("length","\xe6","\x94","\x07","\x9f"));
	outFields->push(HX_HCSTRING("__array","\x79","\xc6","\xed","\x8f"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsBool,(int)offsetof(FunctionVector_obj,fixed),HX_HCSTRING("fixed","\x74","\xf9","\xa1","\x00")},
	{hx::fsObject /*cpp::ArrayBase*/ ,(int)offsetof(FunctionVector_obj,__array),HX_HCSTRING("__array","\x79","\xc6","\xed","\x8f")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo *sStaticStorageInfo = 0;
#endif

static ::String sMemberFields[] = {
	HX_HCSTRING("fixed","\x74","\xf9","\xa1","\x00"),
	HX_HCSTRING("__array","\x79","\xc6","\xed","\x8f"),
	HX_HCSTRING("concat","\x14","\x09","\xd0","\xc7"),
	HX_HCSTRING("copy","\xb5","\xbb","\xc4","\x41"),
	HX_HCSTRING("get","\x96","\x80","\x4e","\x00"),
	HX_HCSTRING("indexOf","\xc9","\x48","\xbf","\xe0"),
	HX_HCSTRING("insertAt","\x8c","\x7c","\x1f","\xc2"),
	HX_HCSTRING("iterator","\xee","\x49","\x9a","\x93"),
	HX_HCSTRING("join","\xea","\x33","\x65","\x46"),
	HX_HCSTRING("lastIndexOf","\x13","\xfd","\x6a","\x95"),
	HX_HCSTRING("pop","\x91","\x5d","\x55","\x00"),
	HX_HCSTRING("push","\xda","\x11","\x61","\x4a"),
	HX_HCSTRING("reverse","\x22","\x39","\xfc","\x1a"),
	HX_HCSTRING("set","\xa2","\x9b","\x57","\x00"),
	HX_HCSTRING("shift","\x82","\xec","\x22","\x7c"),
	HX_HCSTRING("slice","\x52","\xc4","\xc7","\x7e"),
	HX_HCSTRING("sort","\x5e","\x27","\x58","\x4c"),
	HX_HCSTRING("splice","\x7c","\x85","\x9e","\xbf"),
	HX_HCSTRING("toString","\xac","\xd0","\x6e","\x38"),
	HX_HCSTRING("unshift","\x89","\xe3","\xb3","\x78"),
	HX_HCSTRING("get_length","\xaf","\x04","\x8f","\x8f"),
	HX_HCSTRING("set_length","\x23","\xa3","\x0c","\x93"),
	::String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(FunctionVector_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(FunctionVector_obj::__mClass,"__mClass");
};

#endif

hx::Class FunctionVector_obj::__mClass;

void FunctionVector_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("openfl._Vector.FunctionVector","\xa5","\x07","\x75","\x4f");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = hx::Class_obj::dupFunctions(sMemberFields);
	__mClass->mCanCast = hx::TCanCast< FunctionVector_obj >;
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
} // end namespace _Vector
