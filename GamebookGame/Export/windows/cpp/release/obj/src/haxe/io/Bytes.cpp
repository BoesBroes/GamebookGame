#include <hxcpp.h>

#ifndef INCLUDED_StringBuf
#include <StringBuf.h>
#endif
#ifndef INCLUDED_haxe_io_Bytes
#include <haxe/io/Bytes.h>
#endif
#ifndef INCLUDED_haxe_io_Error
#include <haxe/io/Error.h>
#endif
namespace haxe{
namespace io{

Void Bytes_obj::__construct(int length,Array< unsigned char > b)
{
{
	this->length = length;
	this->b = b;
}
;
	return null();
}

//Bytes_obj::~Bytes_obj() { }

Dynamic Bytes_obj::__CreateEmpty() { return  new Bytes_obj; }
hx::ObjectPtr< Bytes_obj > Bytes_obj::__new(int length,Array< unsigned char > b)
{  hx::ObjectPtr< Bytes_obj > _result_ = new Bytes_obj();
	_result_->__construct(length,b);
	return _result_;}

Dynamic Bytes_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< Bytes_obj > _result_ = new Bytes_obj();
	_result_->__construct(inArgs[0],inArgs[1]);
	return _result_;}

int Bytes_obj::get( int pos){
	int tmp = this->b->__get(pos);
	return tmp;
}


HX_DEFINE_DYNAMIC_FUNC1(Bytes_obj,get,return )

Void Bytes_obj::set( int pos,int v){
{
		int tmp = v;
		this->b[pos] = tmp;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(Bytes_obj,set,(void))

Void Bytes_obj::blit( int pos,::haxe::io::Bytes src,int srcpos,int len){
{
		bool tmp = (pos < (int)0);
		bool tmp1 = !(tmp);
		bool tmp2 = tmp1;
		bool tmp3;
		if ((tmp2)){
			tmp3 = (srcpos < (int)0);
		}
		else{
			tmp3 = true;
		}
		bool tmp4 = !(tmp3);
		bool tmp5 = tmp4;
		bool tmp6;
		if ((tmp5)){
			tmp6 = (len < (int)0);
		}
		else{
			tmp6 = true;
		}
		bool tmp7 = !(tmp6);
		bool tmp8 = tmp7;
		bool tmp9;
		if ((tmp8)){
			int tmp10 = (pos + len);
			int tmp11 = tmp10;
			int tmp12 = tmp11;
			int tmp13 = this->length;
			int tmp14 = tmp13;
			int tmp15 = tmp14;
			tmp9 = (tmp12 > tmp15);
		}
		else{
			tmp9 = true;
		}
		bool tmp10 = !(tmp9);
		bool tmp11;
		if ((tmp10)){
			int tmp12 = (srcpos + len);
			int tmp13 = tmp12;
			int tmp14 = src->length;
			tmp11 = (tmp13 > tmp14);
		}
		else{
			tmp11 = true;
		}
		if ((tmp11)){
			HX_STACK_DO_THROW(::haxe::io::Error_obj::OutsideBounds);
		}
		{
			int tmp12 = pos;
			int tmp13 = srcpos;
			int tmp14 = len;
			this->b->blit(tmp12,src->b,tmp13,tmp14);
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC4(Bytes_obj,blit,(void))

Void Bytes_obj::fill( int pos,int len,int value){
{
		::__hxcpp_memory_memset(this->b,pos,len,value);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC3(Bytes_obj,fill,(void))

::haxe::io::Bytes Bytes_obj::sub( int pos,int len){
	bool tmp = (pos < (int)0);
	bool tmp1 = !(tmp);
	bool tmp2 = tmp1;
	bool tmp3;
	if ((tmp2)){
		tmp3 = (len < (int)0);
	}
	else{
		tmp3 = true;
	}
	bool tmp4 = !(tmp3);
	bool tmp5;
	if ((tmp4)){
		int tmp6 = (pos + len);
		int tmp7 = tmp6;
		int tmp8 = this->length;
		int tmp9 = tmp8;
		tmp5 = (tmp7 > tmp9);
	}
	else{
		tmp5 = true;
	}
	if ((tmp5)){
		HX_STACK_DO_THROW(::haxe::io::Error_obj::OutsideBounds);
	}
	int tmp6 = pos;
	int tmp7 = (pos + len);
	::haxe::io::Bytes tmp8 = ::haxe::io::Bytes_obj::__new(len,this->b->slice(tmp6,tmp7));
	return tmp8;
}


HX_DEFINE_DYNAMIC_FUNC2(Bytes_obj,sub,return )

int Bytes_obj::compare( ::haxe::io::Bytes other){
	int tmp = this->b->memcmp(other->b);
	return tmp;
}


HX_DEFINE_DYNAMIC_FUNC1(Bytes_obj,compare,return )

Float Bytes_obj::getDouble( int pos){
	bool tmp = (pos < (int)0);
	bool tmp1 = !(tmp);
	bool tmp2;
	if ((tmp1)){
		int tmp3 = (pos + (int)8);
		int tmp4 = tmp3;
		int tmp5 = this->length;
		int tmp6 = tmp5;
		tmp2 = (tmp4 > tmp6);
	}
	else{
		tmp2 = true;
	}
	if ((tmp2)){
		HX_STACK_DO_THROW(::haxe::io::Error_obj::OutsideBounds);
	}
	Float tmp3 = ::__hxcpp_memory_get_double(this->b,pos);
	return tmp3;
}


HX_DEFINE_DYNAMIC_FUNC1(Bytes_obj,getDouble,return )

Float Bytes_obj::getFloat( int pos){
	bool tmp = (pos < (int)0);
	bool tmp1 = !(tmp);
	bool tmp2;
	if ((tmp1)){
		int tmp3 = (pos + (int)4);
		int tmp4 = tmp3;
		int tmp5 = this->length;
		int tmp6 = tmp5;
		tmp2 = (tmp4 > tmp6);
	}
	else{
		tmp2 = true;
	}
	if ((tmp2)){
		HX_STACK_DO_THROW(::haxe::io::Error_obj::OutsideBounds);
	}
	Float tmp3 = ::__hxcpp_memory_get_float(this->b,pos);
	return tmp3;
}


HX_DEFINE_DYNAMIC_FUNC1(Bytes_obj,getFloat,return )

Void Bytes_obj::setDouble( int pos,Float v){
{
		bool tmp = (pos < (int)0);
		bool tmp1 = !(tmp);
		bool tmp2;
		if ((tmp1)){
			int tmp3 = (pos + (int)8);
			int tmp4 = tmp3;
			int tmp5 = this->length;
			int tmp6 = tmp5;
			tmp2 = (tmp4 > tmp6);
		}
		else{
			tmp2 = true;
		}
		if ((tmp2)){
			HX_STACK_DO_THROW(::haxe::io::Error_obj::OutsideBounds);
		}
		::__hxcpp_memory_set_double(this->b,pos,v);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(Bytes_obj,setDouble,(void))

Void Bytes_obj::setFloat( int pos,Float v){
{
		bool tmp = (pos < (int)0);
		bool tmp1 = !(tmp);
		bool tmp2;
		if ((tmp1)){
			int tmp3 = (pos + (int)4);
			int tmp4 = tmp3;
			int tmp5 = this->length;
			int tmp6 = tmp5;
			tmp2 = (tmp4 > tmp6);
		}
		else{
			tmp2 = true;
		}
		if ((tmp2)){
			HX_STACK_DO_THROW(::haxe::io::Error_obj::OutsideBounds);
		}
		::__hxcpp_memory_set_float(this->b,pos,v);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(Bytes_obj,setFloat,(void))

int Bytes_obj::getUInt16( int pos){
	int tmp = this->b->__get(pos);
	int tmp1 = (pos + (int)1);
	int tmp2 = this->b->__get(tmp1);
	int tmp3 = (int(tmp2) << int((int)8));
	int tmp4 = (int(tmp) | int(tmp3));
	return tmp4;
}


HX_DEFINE_DYNAMIC_FUNC1(Bytes_obj,getUInt16,return )

Void Bytes_obj::setUInt16( int pos,int v){
{
		{
			int tmp = v;
			this->b[pos] = tmp;
		}
		{
			int tmp = (pos + (int)1);
			int tmp1 = (int(v) >> int((int)8));
			this->b[tmp] = tmp1;
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(Bytes_obj,setUInt16,(void))

int Bytes_obj::getInt32( int pos){
	int tmp = this->b->__get(pos);
	int tmp1 = (pos + (int)1);
	int tmp2 = this->b->__get(tmp1);
	int tmp3 = (int(tmp2) << int((int)8));
	int tmp4 = (int(tmp) | int(tmp3));
	int tmp5 = (pos + (int)2);
	int tmp6 = this->b->__get(tmp5);
	int tmp7 = (int(tmp6) << int((int)16));
	int tmp8 = (int(tmp4) | int(tmp7));
	int tmp9 = (pos + (int)3);
	int tmp10 = this->b->__get(tmp9);
	int tmp11 = (int(tmp10) << int((int)24));
	int tmp12 = (int(tmp8) | int(tmp11));
	return tmp12;
}


HX_DEFINE_DYNAMIC_FUNC1(Bytes_obj,getInt32,return )

cpp::Int64Struct Bytes_obj::getInt64( int pos){
	struct _Function_1_1{
		inline static int Block( int &pos,hx::ObjectPtr< ::haxe::io::Bytes_obj > __this){
			{
				int pos1 = (pos + (int)4);
				return (int((int((int(__this->b->__get(pos1)) | int((int(__this->b->__get((pos1 + (int)1))) << int((int)8))))) | int((int(__this->b->__get((pos1 + (int)2))) << int((int)16))))) | int((int(__this->b->__get((pos1 + (int)3))) << int((int)24))));
			}
			return null();
		}
	};
	return cpp::Int64Struct(( ( (cpp::Int64)((unsigned int)_Function_1_1::Block(pos,this)) ) << 32 ) | ((unsigned int)(int((int((int(this->b->__get(pos)) | int((int(this->b->__get((pos + (int)1))) << int((int)8))))) | int((int(this->b->__get((pos + (int)2))) << int((int)16))))) | int((int(this->b->__get((pos + (int)3))) << int((int)24))))));
}


HX_DEFINE_DYNAMIC_FUNC1(Bytes_obj,getInt64,return )

Void Bytes_obj::setInt32( int pos,int v){
{
		{
			int tmp = v;
			this->b[pos] = tmp;
		}
		{
			int tmp = (pos + (int)1);
			int tmp1 = (int(v) >> int((int)8));
			this->b[tmp] = tmp1;
		}
		{
			int tmp = (pos + (int)2);
			int tmp1 = (int(v) >> int((int)16));
			this->b[tmp] = tmp1;
		}
		{
			int tmp = (pos + (int)3);
			int tmp1 = hx::UShr(v,(int)24);
			this->b[tmp] = tmp1;
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(Bytes_obj,setInt32,(void))

Void Bytes_obj::setInt64( int pos,cpp::Int64Struct v){
{
		{
			int v1 = (int)((v)&0xffffffff);
			{
				int tmp = v1;
				this->b[pos] = tmp;
			}
			{
				int tmp = (pos + (int)1);
				int tmp1 = (int(v1) >> int((int)8));
				this->b[tmp] = tmp1;
			}
			{
				int tmp = (pos + (int)2);
				int tmp1 = (int(v1) >> int((int)16));
				this->b[tmp] = tmp1;
			}
			{
				int tmp = (pos + (int)3);
				int tmp1 = hx::UShr(v1,(int)24);
				this->b[tmp] = tmp1;
			}
		}
		{
			int tmp = (pos + (int)4);
			int pos1 = tmp;
			int v1 = (int)(((cpp::Int64)(v))>>32);
			{
				int tmp1 = v1;
				this->b[pos1] = tmp1;
			}
			{
				int tmp1 = (pos1 + (int)1);
				int tmp2 = (int(v1) >> int((int)8));
				this->b[tmp1] = tmp2;
			}
			{
				int tmp1 = (pos1 + (int)2);
				int tmp2 = (int(v1) >> int((int)16));
				this->b[tmp1] = tmp2;
			}
			{
				int tmp1 = (pos1 + (int)3);
				int tmp2 = hx::UShr(v1,(int)24);
				this->b[tmp1] = tmp2;
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(Bytes_obj,setInt64,(void))

::String Bytes_obj::getString( int pos,int len){
	bool tmp = (pos < (int)0);
	bool tmp1 = !(tmp);
	bool tmp2 = tmp1;
	bool tmp3;
	if ((tmp2)){
		tmp3 = (len < (int)0);
	}
	else{
		tmp3 = true;
	}
	bool tmp4 = !(tmp3);
	bool tmp5;
	if ((tmp4)){
		int tmp6 = (pos + len);
		int tmp7 = tmp6;
		int tmp8 = this->length;
		int tmp9 = tmp8;
		tmp5 = (tmp7 > tmp9);
	}
	else{
		tmp5 = true;
	}
	if ((tmp5)){
		HX_STACK_DO_THROW(::haxe::io::Error_obj::OutsideBounds);
	}
	::String result = HX_HCSTRING("","\x00","\x00","\x00","\x00");
	::__hxcpp_string_of_bytes(this->b,result,pos,len);
	::String tmp6 = result;
	return tmp6;
}


HX_DEFINE_DYNAMIC_FUNC2(Bytes_obj,getString,return )

::String Bytes_obj::readString( int pos,int len){
	int tmp = pos;
	int tmp1 = len;
	::String tmp2 = this->getString(tmp,tmp1);
	return tmp2;
}


HX_DEFINE_DYNAMIC_FUNC2(Bytes_obj,readString,return )

::String Bytes_obj::toString( ){
	int tmp = this->length;
	::String tmp1 = this->getString((int)0,tmp);
	return tmp1;
}


HX_DEFINE_DYNAMIC_FUNC0(Bytes_obj,toString,return )

::String Bytes_obj::toHex( ){
	::StringBuf tmp = ::StringBuf_obj::__new();
	::StringBuf s = tmp;
	Array< ::Dynamic > chars = Array_obj< ::Dynamic >::__new();
	::String str = HX_HCSTRING("0123456789abcdef","\x68","\x7e","\xd5","\xef");
	{
		int _g1 = (int)0;
		int _g = str.length;
		while((true)){
			bool tmp1 = (_g1 < _g);
			bool tmp2 = !(tmp1);
			if ((tmp2)){
				break;
			}
			int tmp3 = (_g1)++;
			int i = tmp3;
			int tmp4 = i;
			Dynamic tmp5 = str.charCodeAt(tmp4);
			chars->push(tmp5);
		}
	}
	{
		int _g1 = (int)0;
		int tmp1 = this->length;
		int _g = tmp1;
		while((true)){
			bool tmp2 = (_g1 < _g);
			bool tmp3 = !(tmp2);
			if ((tmp3)){
				break;
			}
			int tmp4 = (_g1)++;
			int i = tmp4;
			int tmp5 = this->b->__get(i);
			int c = tmp5;
			{
				int tmp6 = (int(c) >> int((int)4));
				Dynamic tmp7 = chars->__get(tmp6);
				int c1 = tmp7;
				int tmp8 = c1;
				::String tmp9 = ::String::fromCharCode(tmp8);
				s->b->push(tmp9);
			}
			{
				int tmp6 = (int(c) & int((int)15));
				Dynamic tmp7 = chars->__get(tmp6);
				int c1 = tmp7;
				int tmp8 = c1;
				::String tmp9 = ::String::fromCharCode(tmp8);
				s->b->push(tmp9);
			}
		}
	}
	::String tmp1 = s->b->join(HX_HCSTRING("","\x00","\x00","\x00","\x00"));
	return tmp1;
}


HX_DEFINE_DYNAMIC_FUNC0(Bytes_obj,toHex,return )

Array< unsigned char > Bytes_obj::getData( ){
	return this->b;
}


HX_DEFINE_DYNAMIC_FUNC0(Bytes_obj,getData,return )

::haxe::io::Bytes Bytes_obj::alloc( int length){
	Array< unsigned char > a = Array_obj< unsigned char >::__new();
	bool tmp = (length > (int)0);
	if ((tmp)){
		int tmp1 = length;
		a->__SetSizeExact(tmp1);
	}
	::haxe::io::Bytes tmp1 = ::haxe::io::Bytes_obj::__new(length,a);
	return tmp1;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Bytes_obj,alloc,return )

::haxe::io::Bytes Bytes_obj::ofString( ::String s){
	Array< unsigned char > a = Array_obj< unsigned char >::__new();
	::__hxcpp_bytes_of_string(a,s);
	::haxe::io::Bytes tmp = ::haxe::io::Bytes_obj::__new(a->length,a);
	return tmp;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Bytes_obj,ofString,return )

::haxe::io::Bytes Bytes_obj::ofData( Array< unsigned char > b){
	::haxe::io::Bytes tmp = ::haxe::io::Bytes_obj::__new(b->length,b);
	return tmp;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Bytes_obj,ofData,return )

int Bytes_obj::fastGet( Array< unsigned char > b,int pos){
	int tmp = pos;
	unsigned char tmp1 = b->__unsafe_get(tmp);
	int tmp2 = ((int)(tmp1));
	return tmp2;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(Bytes_obj,fastGet,return )


Bytes_obj::Bytes_obj()
{
}

void Bytes_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(Bytes);
	HX_MARK_MEMBER_NAME(length,"length");
	HX_MARK_MEMBER_NAME(b,"b");
	HX_MARK_END_CLASS();
}

void Bytes_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(length,"length");
	HX_VISIT_MEMBER_NAME(b,"b");
}

Dynamic Bytes_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 1:
		if (HX_FIELD_EQ(inName,"b") ) { return b; }
		break;
	case 3:
		if (HX_FIELD_EQ(inName,"get") ) { return get_dyn(); }
		if (HX_FIELD_EQ(inName,"set") ) { return set_dyn(); }
		if (HX_FIELD_EQ(inName,"sub") ) { return sub_dyn(); }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"blit") ) { return blit_dyn(); }
		if (HX_FIELD_EQ(inName,"fill") ) { return fill_dyn(); }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"toHex") ) { return toHex_dyn(); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"length") ) { return length; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"compare") ) { return compare_dyn(); }
		if (HX_FIELD_EQ(inName,"getData") ) { return getData_dyn(); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"getFloat") ) { return getFloat_dyn(); }
		if (HX_FIELD_EQ(inName,"setFloat") ) { return setFloat_dyn(); }
		if (HX_FIELD_EQ(inName,"getInt32") ) { return getInt32_dyn(); }
		if (HX_FIELD_EQ(inName,"getInt64") ) { return getInt64_dyn(); }
		if (HX_FIELD_EQ(inName,"setInt32") ) { return setInt32_dyn(); }
		if (HX_FIELD_EQ(inName,"setInt64") ) { return setInt64_dyn(); }
		if (HX_FIELD_EQ(inName,"toString") ) { return toString_dyn(); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"getDouble") ) { return getDouble_dyn(); }
		if (HX_FIELD_EQ(inName,"setDouble") ) { return setDouble_dyn(); }
		if (HX_FIELD_EQ(inName,"getUInt16") ) { return getUInt16_dyn(); }
		if (HX_FIELD_EQ(inName,"setUInt16") ) { return setUInt16_dyn(); }
		if (HX_FIELD_EQ(inName,"getString") ) { return getString_dyn(); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"readString") ) { return readString_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

bool Bytes_obj::__GetStatic(const ::String &inName, Dynamic &outValue, hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"alloc") ) { outValue = alloc_dyn(); return true;  }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"ofData") ) { outValue = ofData_dyn(); return true;  }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"fastGet") ) { outValue = fastGet_dyn(); return true;  }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"ofString") ) { outValue = ofString_dyn(); return true;  }
	}
	return false;
}

Dynamic Bytes_obj::__SetField(const ::String &inName,const Dynamic &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 1:
		if (HX_FIELD_EQ(inName,"b") ) { b=inValue.Cast< Array< unsigned char > >(); return inValue; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"length") ) { length=inValue.Cast< int >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void Bytes_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("length","\xe6","\x94","\x07","\x9f"));
	outFields->push(HX_HCSTRING("b","\x62","\x00","\x00","\x00"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsInt,(int)offsetof(Bytes_obj,length),HX_HCSTRING("length","\xe6","\x94","\x07","\x9f")},
	{hx::fsObject /*Array< unsigned char >*/ ,(int)offsetof(Bytes_obj,b),HX_HCSTRING("b","\x62","\x00","\x00","\x00")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo *sStaticStorageInfo = 0;
#endif

static ::String sMemberFields[] = {
	HX_HCSTRING("length","\xe6","\x94","\x07","\x9f"),
	HX_HCSTRING("b","\x62","\x00","\x00","\x00"),
	HX_HCSTRING("get","\x96","\x80","\x4e","\x00"),
	HX_HCSTRING("set","\xa2","\x9b","\x57","\x00"),
	HX_HCSTRING("blit","\x35","\x38","\x19","\x41"),
	HX_HCSTRING("fill","\x83","\xce","\xbb","\x43"),
	HX_HCSTRING("sub","\x80","\xa9","\x57","\x00"),
	HX_HCSTRING("compare","\xa5","\x18","\x69","\x83"),
	HX_HCSTRING("getDouble","\x47","\xb4","\x21","\xaf"),
	HX_HCSTRING("getFloat","\x26","\xd5","\x6d","\x62"),
	HX_HCSTRING("setDouble","\x53","\xa0","\x72","\x92"),
	HX_HCSTRING("setFloat","\x9a","\x2e","\xcb","\x10"),
	HX_HCSTRING("getUInt16","\x15","\xc2","\x65","\x95"),
	HX_HCSTRING("setUInt16","\x21","\xae","\xb6","\x78"),
	HX_HCSTRING("getInt32","\xd8","\xa2","\xf7","\x1d"),
	HX_HCSTRING("getInt64","\x77","\xa5","\xf7","\x1d"),
	HX_HCSTRING("setInt32","\x4c","\xfc","\x54","\xcc"),
	HX_HCSTRING("setInt64","\xeb","\xfe","\x54","\xcc"),
	HX_HCSTRING("getString","\x07","\xb2","\x86","\x8d"),
	HX_HCSTRING("readString","\xc7","\x0c","\xac","\x0a"),
	HX_HCSTRING("toString","\xac","\xd0","\x6e","\x38"),
	HX_HCSTRING("toHex","\x20","\xf4","\x10","\x14"),
	HX_HCSTRING("getData","\xe0","\x05","\xe6","\x14"),
	::String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(Bytes_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(Bytes_obj::__mClass,"__mClass");
};

#endif

hx::Class Bytes_obj::__mClass;

static ::String sStaticFields[] = {
	HX_HCSTRING("alloc","\x75","\xa4","\x93","\x21"),
	HX_HCSTRING("ofString","\x48","\x69","\x31","\xa4"),
	HX_HCSTRING("ofData","\xe1","\xba","\xb8","\x49"),
	HX_HCSTRING("fastGet","\x5a","\xff","\x22","\xde"),
	::String(null()) };

void Bytes_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("haxe.io.Bytes","\x0b","\x53","\x6f","\x9f");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &Bytes_obj::__GetStatic;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(sStaticFields);
	__mClass->mMembers = hx::Class_obj::dupFunctions(sMemberFields);
	__mClass->mCanCast = hx::TCanCast< Bytes_obj >;
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

} // end namespace haxe
} // end namespace io
