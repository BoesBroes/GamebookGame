#include <hxcpp.h>

#ifndef INCLUDED_openfl__Vector_IVector
#include <openfl/_Vector/IVector.h>
#endif
#ifndef INCLUDED_openfl__Vector_IntVector
#include <openfl/_Vector/IntVector.h>
#endif
namespace openfl{
namespace _Vector{

Void IntVector_obj::__construct(Dynamic length,Dynamic fixed,Array< int > array)
{
{
	bool tmp = (array == null());
	if ((tmp)){
		array = Array_obj< int >::__new();
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

//IntVector_obj::~IntVector_obj() { }

Dynamic IntVector_obj::__CreateEmpty() { return  new IntVector_obj; }
hx::ObjectPtr< IntVector_obj > IntVector_obj::__new(Dynamic length,Dynamic fixed,Array< int > array)
{  hx::ObjectPtr< IntVector_obj > _result_ = new IntVector_obj();
	_result_->__construct(length,fixed,array);
	return _result_;}

Dynamic IntVector_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< IntVector_obj > _result_ = new IntVector_obj();
	_result_->__construct(inArgs[0],inArgs[1],inArgs[2]);
	return _result_;}

hx::Object *IntVector_obj::__ToInterface(const hx::type_info &inType) {
	if (inType==typeid( ::openfl::_Vector::IVector_obj)) return operator ::openfl::_Vector::IVector_obj *();
	return super::__ToInterface(inType);
}

IntVector_obj::operator ::openfl::_Vector::IVector_obj *()
	{ return new ::openfl::_Vector::IVector_delegate_< IntVector_obj >(this); }
::openfl::_Vector::IVector IntVector_obj::concat( ::openfl::_Vector::IVector a){
	bool tmp = (a == null());
	if ((tmp)){
		::openfl::_Vector::IntVector tmp1 = ::openfl::_Vector::IntVector_obj::__new(null(),null(),this->__array->copy());
		return tmp1;
	}
	else{
		::openfl::_Vector::IntVector tmp1;
		tmp1 = hx::TCast< ::openfl::_Vector::IntVector >::cast(a);
		::openfl::_Vector::IntVector tmp2 = ::openfl::_Vector::IntVector_obj::__new(null(),null(),this->__array->concat(tmp1->__array));
		return tmp2;
	}
	return null();
}


HX_DEFINE_DYNAMIC_FUNC1(IntVector_obj,concat,return )

::openfl::_Vector::IVector IntVector_obj::copy( ){
	bool tmp = this->fixed;
	::openfl::_Vector::IntVector tmp1 = ::openfl::_Vector::IntVector_obj::__new(null(),tmp,this->__array->copy());
	return tmp1;
}


HX_DEFINE_DYNAMIC_FUNC0(IntVector_obj,copy,return )

int IntVector_obj::get( int index){
	int tmp = this->__array->__get(index);
	return tmp;
}


HX_DEFINE_DYNAMIC_FUNC1(IntVector_obj,get,return )

int IntVector_obj::indexOf( int x,Dynamic __o_from){
Dynamic from = __o_from.Default(0);
{
		{
			int _g1 = from;
			int tmp = this->__array->length;
			int _g = tmp;
			while((true)){
				bool tmp1 = (_g1 < _g);
				bool tmp2 = !(tmp1);
				if ((tmp2)){
					break;
				}
				int tmp3 = (_g1)++;
				int i = tmp3;
				int tmp4 = this->__array->__get(i);
				int tmp5 = x;
				bool tmp6 = (tmp4 == tmp5);
				if ((tmp6)){
					int tmp7 = i;
					return tmp7;
				}
			}
		}
		return (int)-1;
	}
}


HX_DEFINE_DYNAMIC_FUNC2(IntVector_obj,indexOf,return )

Void IntVector_obj::insertAt( int index,int element){
{
		bool tmp = this->fixed;
		bool tmp1 = tmp;
		bool tmp2 = !(tmp1);
		bool tmp3 = !(tmp2);
		bool tmp4;
		if ((tmp3)){
			int tmp5 = index;
			int tmp6 = this->__array->length;
			int tmp7 = tmp6;
			tmp4 = (tmp5 < tmp7);
		}
		else{
			tmp4 = true;
		}
		if ((tmp4)){
			int tmp5 = index;
			int tmp6 = element;
			this->__array->insert(tmp5,tmp6);
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(IntVector_obj,insertAt,(void))

Dynamic IntVector_obj::iterator( ){
	Dynamic tmp = this->__array->iterator();
	Dynamic tmp1 = tmp;
	return tmp1;
}


HX_DEFINE_DYNAMIC_FUNC0(IntVector_obj,iterator,return )

::String IntVector_obj::join( ::String sep){
	::String tmp = sep;
	::String tmp1 = this->__array->join(tmp);
	return tmp1;
}


HX_DEFINE_DYNAMIC_FUNC1(IntVector_obj,join,return )

int IntVector_obj::lastIndexOf( int x,Dynamic __o_from){
Dynamic from = __o_from.Default(0);
{
		int tmp = this->__array->length;
		int tmp1 = (tmp - (int)1);
		int i = tmp1;
		while((true)){
			bool tmp2 = (i >= from);
			bool tmp3 = !(tmp2);
			if ((tmp3)){
				break;
			}
			int tmp4 = this->__array->__get(i);
			int tmp5 = x;
			bool tmp6 = (tmp4 == tmp5);
			if ((tmp6)){
				int tmp7 = i;
				return tmp7;
			}
			(i)--;
		}
		return (int)-1;
	}
}


HX_DEFINE_DYNAMIC_FUNC2(IntVector_obj,lastIndexOf,return )

Dynamic IntVector_obj::pop( ){
	bool tmp = this->fixed;
	bool tmp1 = !(tmp);
	if ((tmp1)){
		Dynamic tmp2 = this->__array->pop();
		return tmp2;
	}
	else{
		return null();
	}
	return (int)0;
}


HX_DEFINE_DYNAMIC_FUNC0(IntVector_obj,pop,return )

int IntVector_obj::push( int x){
	bool tmp = this->fixed;
	bool tmp1 = !(tmp);
	if ((tmp1)){
		int tmp2 = x;
		int tmp3 = this->__array->push(tmp2);
		return tmp3;
	}
	else{
		int tmp2 = this->__array->length;
		return tmp2;
	}
	return (int)0;
}


HX_DEFINE_DYNAMIC_FUNC1(IntVector_obj,push,return )

::openfl::_Vector::IVector IntVector_obj::reverse( ){
	this->__array->reverse();
	return hx::ObjectPtr<OBJ_>(this);
}


HX_DEFINE_DYNAMIC_FUNC0(IntVector_obj,reverse,return )

int IntVector_obj::set( int index,int value){
	bool tmp = this->fixed;
	bool tmp1 = tmp;
	bool tmp2 = !(tmp1);
	bool tmp3 = !(tmp2);
	bool tmp4;
	if ((tmp3)){
		int tmp5 = index;
		int tmp6 = this->__array->length;
		int tmp7 = tmp6;
		tmp4 = (tmp5 < tmp7);
	}
	else{
		tmp4 = true;
	}
	if ((tmp4)){
		int tmp5 = value;
		int tmp6 = this->__array[index] = tmp5;
		return tmp6;
	}
	else{
		int tmp5 = value;
		return tmp5;
	}
	return (int)0;
}


HX_DEFINE_DYNAMIC_FUNC2(IntVector_obj,set,return )

Dynamic IntVector_obj::shift( ){
	bool tmp = this->fixed;
	bool tmp1 = !(tmp);
	if ((tmp1)){
		Dynamic tmp2 = this->__array->shift();
		return tmp2;
	}
	else{
		return null();
	}
	return (int)0;
}


HX_DEFINE_DYNAMIC_FUNC0(IntVector_obj,shift,return )

::openfl::_Vector::IVector IntVector_obj::slice( Dynamic __o_startIndex,Dynamic __o_endIndex){
Dynamic startIndex = __o_startIndex.Default(0);
Dynamic endIndex = __o_endIndex.Default(16777215);
{
		Dynamic tmp = startIndex;
		Dynamic tmp1 = endIndex;
		::openfl::_Vector::IntVector tmp2 = ::openfl::_Vector::IntVector_obj::__new(null(),null(),this->__array->slice(tmp,tmp1));
		return tmp2;
	}
}


HX_DEFINE_DYNAMIC_FUNC2(IntVector_obj,slice,return )

Void IntVector_obj::sort( Dynamic f){
{
		Dynamic tmp = f;
		this->__array->sort(tmp);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(IntVector_obj,sort,(void))

::openfl::_Vector::IVector IntVector_obj::splice( int pos,int len){
	int tmp = pos;
	int tmp1 = len;
	::openfl::_Vector::IntVector tmp2 = ::openfl::_Vector::IntVector_obj::__new(null(),null(),this->__array->splice(tmp,tmp1));
	return tmp2;
}


HX_DEFINE_DYNAMIC_FUNC2(IntVector_obj,splice,return )

::String IntVector_obj::toString( ){
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


HX_DEFINE_DYNAMIC_FUNC0(IntVector_obj,toString,return )

Void IntVector_obj::unshift( int x){
{
		bool tmp = this->fixed;
		bool tmp1 = !(tmp);
		if ((tmp1)){
			int tmp2 = x;
			this->__array->unshift(tmp2);
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(IntVector_obj,unshift,(void))

int IntVector_obj::get_length( ){
	int tmp = this->__array->length;
	return tmp;
}


HX_DEFINE_DYNAMIC_FUNC0(IntVector_obj,get_length,return )

int IntVector_obj::set_length( int value){
	bool tmp = this->fixed;
	bool tmp1 = !(tmp);
	if ((tmp1)){
		int tmp2 = value;
		this->__array->__SetSizeExact(tmp2);
	}
	int tmp2 = this->__array->length;
	return tmp2;
}


HX_DEFINE_DYNAMIC_FUNC1(IntVector_obj,set_length,return )


IntVector_obj::IntVector_obj()
{
}

void IntVector_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(IntVector);
	HX_MARK_MEMBER_NAME(fixed,"fixed");
	HX_MARK_MEMBER_NAME(__array,"__array");
	HX_MARK_END_CLASS();
}

void IntVector_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(fixed,"fixed");
	HX_VISIT_MEMBER_NAME(__array,"__array");
}

Dynamic IntVector_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
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

Dynamic IntVector_obj::__SetField(const ::String &inName,const Dynamic &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"fixed") ) { fixed=inValue.Cast< bool >(); return inValue; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"length") ) { if (inCallProp == hx::paccAlways) return set_length(inValue); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"__array") ) { __array=inValue.Cast< Array< int > >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void IntVector_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("fixed","\x74","\xf9","\xa1","\x00"));
	outFields->push(HX_HCSTRING("length","\xe6","\x94","\x07","\x9f"));
	outFields->push(HX_HCSTRING("__array","\x79","\xc6","\xed","\x8f"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsBool,(int)offsetof(IntVector_obj,fixed),HX_HCSTRING("fixed","\x74","\xf9","\xa1","\x00")},
	{hx::fsObject /*Array< int >*/ ,(int)offsetof(IntVector_obj,__array),HX_HCSTRING("__array","\x79","\xc6","\xed","\x8f")},
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
	HX_MARK_MEMBER_NAME(IntVector_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(IntVector_obj::__mClass,"__mClass");
};

#endif

hx::Class IntVector_obj::__mClass;

void IntVector_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("openfl._Vector.IntVector","\xa8","\x19","\x86","\x49");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = hx::Class_obj::dupFunctions(sMemberFields);
	__mClass->mCanCast = hx::TCanCast< IntVector_obj >;
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
