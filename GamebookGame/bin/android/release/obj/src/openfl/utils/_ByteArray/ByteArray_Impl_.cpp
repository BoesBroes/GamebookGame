#include <hxcpp.h>

#ifndef INCLUDED_Std
#include <Std.h>
#endif
#ifndef INCLUDED_haxe_io_Bytes
#include <haxe/io/Bytes.h>
#endif
#ifndef INCLUDED_lime_utils_ArrayBufferView
#include <lime/utils/ArrayBufferView.h>
#endif
#ifndef INCLUDED_lime_utils_BytePointerData
#include <lime/utils/BytePointerData.h>
#endif
#ifndef INCLUDED_lime_utils__BytePointer_BytePointer_Impl_
#include <lime/utils/_BytePointer/BytePointer_Impl_.h>
#endif
#ifndef INCLUDED_lime_utils__Bytes_Bytes_Impl_
#include <lime/utils/_Bytes/Bytes_Impl_.h>
#endif
#ifndef INCLUDED_lime_utils__DataPointer_DataPointer_Impl_
#include <lime/utils/_DataPointer/DataPointer_Impl_.h>
#endif
#ifndef INCLUDED_openfl_utils_ByteArrayData
#include <openfl/utils/ByteArrayData.h>
#endif
#ifndef INCLUDED_openfl_utils_IDataInput
#include <openfl/utils/IDataInput.h>
#endif
#ifndef INCLUDED_openfl_utils_IDataOutput
#include <openfl/utils/IDataOutput.h>
#endif
#ifndef INCLUDED_openfl_utils__ByteArray_ByteArray_Impl_
#include <openfl/utils/_ByteArray/ByteArray_Impl_.h>
#endif
namespace openfl{
namespace utils{
namespace _ByteArray{

Void ByteArray_Impl__obj::__construct()
{
	return null();
}

//ByteArray_Impl__obj::~ByteArray_Impl__obj() { }

Dynamic ByteArray_Impl__obj::__CreateEmpty() { return  new ByteArray_Impl__obj; }
hx::ObjectPtr< ByteArray_Impl__obj > ByteArray_Impl__obj::__new()
{  hx::ObjectPtr< ByteArray_Impl__obj > _result_ = new ByteArray_Impl__obj();
	_result_->__construct();
	return _result_;}

Dynamic ByteArray_Impl__obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< ByteArray_Impl__obj > _result_ = new ByteArray_Impl__obj();
	_result_->__construct();
	return _result_;}

int ByteArray_Impl__obj::defaultObjectEncoding;

::lime::utils::BytePointerData ByteArray_Impl__obj::__bytePointer;

::openfl::utils::ByteArrayData ByteArray_Impl__obj::_new( hx::Null< int >  __o_length){
int length = __o_length.Default(0);
	HX_STACK_FRAME("openfl.utils._ByteArray.ByteArray_Impl_","_new",0x0c79e17f,"openfl.utils._ByteArray.ByteArray_Impl_._new","openfl/utils/ByteArray.hx",37,0xaa5cee4a)
	HX_STACK_ARG(length,"length")
{
		HX_STACK_LINE(37)
		::openfl::utils::ByteArrayData tmp = ::openfl::utils::ByteArrayData_obj::__new(length);		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(37)
		::openfl::utils::ByteArrayData tmp1 = tmp;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(37)
		return tmp1;
	}
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(ByteArray_Impl__obj,_new,return )

int ByteArray_Impl__obj::get( ::openfl::utils::ByteArrayData this1,int index){
	HX_STACK_FRAME("openfl.utils._ByteArray.ByteArray_Impl_","get",0x47412238,"openfl.utils._ByteArray.ByteArray_Impl_.get","openfl/utils/ByteArray.hx",43,0xaa5cee4a)
	HX_STACK_ARG(this1,"this1")
	HX_STACK_ARG(index,"index")
	HX_STACK_LINE(50)
	int tmp = this1->b->__get(index);		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(50)
	return tmp;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(ByteArray_Impl__obj,get,return )

int ByteArray_Impl__obj::set( ::openfl::utils::ByteArrayData this1,int index,int value){
	HX_STACK_FRAME("openfl.utils._ByteArray.ByteArray_Impl_","set",0x474a3d44,"openfl.utils._ByteArray.ByteArray_Impl_.set","openfl/utils/ByteArray.hx",56,0xaa5cee4a)
	HX_STACK_ARG(this1,"this1")
	HX_STACK_ARG(index,"index")
	HX_STACK_ARG(value,"value")
	HX_STACK_LINE(62)
	int tmp = (index + (int)1);		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(62)
	this1->__resize(tmp);
	HX_STACK_LINE(63)
	{
		HX_STACK_LINE(63)
		int tmp1 = value;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(63)
		this1->b[index] = tmp1;
	}
	HX_STACK_LINE(65)
	int tmp1 = value;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(65)
	return tmp1;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC3(ByteArray_Impl__obj,set,return )

::openfl::utils::ByteArrayData ByteArray_Impl__obj::fromArrayBuffer( ::haxe::io::Bytes buffer){
	HX_STACK_FRAME("openfl.utils._ByteArray.ByteArray_Impl_","fromArrayBuffer",0x09275ad1,"openfl.utils._ByteArray.ByteArray_Impl_.fromArrayBuffer","openfl/utils/ByteArray.hx",70,0xaa5cee4a)
	HX_STACK_ARG(buffer,"buffer")
	HX_STACK_LINE(72)
	bool tmp = (buffer == null());		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(72)
	if ((tmp)){
		HX_STACK_LINE(72)
		return null();
	}
	HX_STACK_LINE(81)
	::haxe::io::Bytes tmp1 = buffer;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(81)
	::openfl::utils::ByteArrayData tmp2 = ::openfl::utils::ByteArrayData_obj::fromBytes(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(81)
	return tmp2;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(ByteArray_Impl__obj,fromArrayBuffer,return )

::openfl::utils::ByteArrayData ByteArray_Impl__obj::fromBytes( ::haxe::io::Bytes bytes){
	HX_STACK_FRAME("openfl.utils._ByteArray.ByteArray_Impl_","fromBytes",0xcad779c3,"openfl.utils._ByteArray.ByteArray_Impl_.fromBytes","openfl/utils/ByteArray.hx",87,0xaa5cee4a)
	HX_STACK_ARG(bytes,"bytes")
	HX_STACK_LINE(89)
	bool tmp = (bytes == null());		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(89)
	if ((tmp)){
		HX_STACK_LINE(89)
		return null();
	}
	HX_STACK_LINE(97)
	::haxe::io::Bytes tmp1 = bytes;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(97)
	bool tmp2 = ::Std_obj::is(tmp1,hx::ClassOf< ::openfl::utils::ByteArrayData >());		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(97)
	if ((tmp2)){
		HX_STACK_LINE(99)
		::openfl::utils::ByteArrayData tmp3 = ((::openfl::utils::ByteArrayData)(bytes));		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(99)
		return tmp3;
	}
	else{
		HX_STACK_LINE(106)
		::haxe::io::Bytes tmp3 = bytes;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(106)
		::openfl::utils::ByteArrayData tmp4 = ::openfl::utils::ByteArrayData_obj::fromBytes(tmp3);		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(106)
		return tmp4;
	}
	HX_STACK_LINE(97)
	return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(ByteArray_Impl__obj,fromBytes,return )

::openfl::utils::ByteArrayData ByteArray_Impl__obj::fromBytesData( Array< unsigned char > bytesData){
	HX_STACK_FRAME("openfl.utils._ByteArray.ByteArray_Impl_","fromBytesData",0x72e7998d,"openfl.utils._ByteArray.ByteArray_Impl_.fromBytesData","openfl/utils/ByteArray.hx",116,0xaa5cee4a)
	HX_STACK_ARG(bytesData,"bytesData")
	HX_STACK_LINE(118)
	bool tmp = (bytesData == null());		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(118)
	if ((tmp)){
		HX_STACK_LINE(118)
		return null();
	}
	HX_STACK_LINE(125)
	::haxe::io::Bytes tmp1 = ::haxe::io::Bytes_obj::ofData(bytesData);		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(125)
	::openfl::utils::ByteArrayData tmp2 = ::openfl::utils::ByteArrayData_obj::fromBytes(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(125)
	return tmp2;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(ByteArray_Impl__obj,fromBytesData,return )

::openfl::utils::ByteArrayData ByteArray_Impl__obj::fromFile( ::String path){
	HX_STACK_FRAME("openfl.utils._ByteArray.ByteArray_Impl_","fromFile",0x283dd024,"openfl.utils._ByteArray.ByteArray_Impl_.fromFile","openfl/utils/ByteArray.hx",131,0xaa5cee4a)
	HX_STACK_ARG(path,"path")
	HX_STACK_LINE(133)
	::String tmp = path;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(133)
	::haxe::io::Bytes tmp1 = ::lime::utils::_Bytes::Bytes_Impl__obj::fromFile(tmp);		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(133)
	::openfl::utils::ByteArrayData tmp2 = ::openfl::utils::_ByteArray::ByteArray_Impl__obj::fromBytes(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(133)
	return tmp2;
	HX_STACK_LINE(133)
	return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(ByteArray_Impl__obj,fromFile,return )

::openfl::utils::ByteArrayData ByteArray_Impl__obj::fromLimeBytes( ::haxe::io::Bytes bytes){
	HX_STACK_FRAME("openfl.utils._ByteArray.ByteArray_Impl_","fromLimeBytes",0xe68c926e,"openfl.utils._ByteArray.ByteArray_Impl_.fromLimeBytes","openfl/utils/ByteArray.hx",138,0xaa5cee4a)
	HX_STACK_ARG(bytes,"bytes")
	HX_STACK_LINE(140)
	::haxe::io::Bytes tmp = bytes;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(140)
	::openfl::utils::ByteArrayData tmp1 = ::openfl::utils::_ByteArray::ByteArray_Impl__obj::fromBytes(tmp);		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(140)
	return tmp1;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(ByteArray_Impl__obj,fromLimeBytes,return )

::haxe::io::Bytes ByteArray_Impl__obj::toArrayBuffer( ::openfl::utils::ByteArrayData byteArray){
	HX_STACK_FRAME("openfl.utils._ByteArray.ByteArray_Impl_","toArrayBuffer",0x56ee15e0,"openfl.utils._ByteArray.ByteArray_Impl_.toArrayBuffer","openfl/utils/ByteArray.hx",145,0xaa5cee4a)
	HX_STACK_ARG(byteArray,"byteArray")
	HX_STACK_LINE(154)
	::openfl::utils::ByteArrayData tmp = byteArray;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(154)
	return tmp;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(ByteArray_Impl__obj,toArrayBuffer,return )

Float ByteArray_Impl__obj::toDataPointer( ::openfl::utils::ByteArrayData byteArray){
	HX_STACK_FRAME("openfl.utils._ByteArray.ByteArray_Impl_","toDataPointer",0x2c1eca1a,"openfl.utils._ByteArray.ByteArray_Impl_.toDataPointer","openfl/utils/ByteArray.hx",161,0xaa5cee4a)
	HX_STACK_ARG(byteArray,"byteArray")
	HX_STACK_LINE(163)
	::lime::utils::BytePointerData tmp = ::openfl::utils::_ByteArray::ByteArray_Impl__obj::__bytePointer;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(163)
	::openfl::utils::ByteArrayData tmp1 = byteArray;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(163)
	int tmp2 = byteArray->position;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(163)
	::lime::utils::_BytePointer::BytePointer_Impl__obj::set(tmp,tmp1,null(),null(),tmp2);
	HX_STACK_LINE(164)
	::lime::utils::BytePointerData tmp3 = ::openfl::utils::_ByteArray::ByteArray_Impl__obj::__bytePointer;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(164)
	Float tmp4 = ::lime::utils::_DataPointer::DataPointer_Impl__obj::fromBytesPointer(tmp3);		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(164)
	return tmp4;
	HX_STACK_LINE(164)
	return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(ByteArray_Impl__obj,toDataPointer,return )

::haxe::io::Bytes ByteArray_Impl__obj::toBytes( ::openfl::utils::ByteArrayData byteArray){
	HX_STACK_FRAME("openfl.utils._ByteArray.ByteArray_Impl_","toBytes",0xfc5d6f92,"openfl.utils._ByteArray.ByteArray_Impl_.toBytes","openfl/utils/ByteArray.hx",170,0xaa5cee4a)
	HX_STACK_ARG(byteArray,"byteArray")
	HX_STACK_LINE(177)
	::openfl::utils::ByteArrayData tmp = byteArray;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(177)
	return tmp;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(ByteArray_Impl__obj,toBytes,return )

Array< unsigned char > ByteArray_Impl__obj::toBytesData( ::openfl::utils::ByteArrayData byteArray){
	HX_STACK_FRAME("openfl.utils._ByteArray.ByteArray_Impl_","toBytesData",0xa6fe22dc,"openfl.utils._ByteArray.ByteArray_Impl_.toBytesData","openfl/utils/ByteArray.hx",191,0xaa5cee4a)
	HX_STACK_ARG(byteArray,"byteArray")
	HX_STACK_LINE(191)
	return byteArray->b;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(ByteArray_Impl__obj,toBytesData,return )

::haxe::io::Bytes ByteArray_Impl__obj::toLimeBytes( ::openfl::utils::ByteArrayData byteArray){
	HX_STACK_FRAME("openfl.utils._ByteArray.ByteArray_Impl_","toLimeBytes",0x1aa31bbd,"openfl.utils._ByteArray.ByteArray_Impl_.toLimeBytes","openfl/utils/ByteArray.hx",198,0xaa5cee4a)
	HX_STACK_ARG(byteArray,"byteArray")
	HX_STACK_LINE(200)
	::openfl::utils::ByteArrayData tmp = byteArray;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(200)
	::haxe::io::Bytes tmp1 = ::openfl::utils::_ByteArray::ByteArray_Impl__obj::toArrayBuffer(tmp);		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(200)
	::openfl::utils::ByteArrayData tmp2 = ::openfl::utils::_ByteArray::ByteArray_Impl__obj::fromBytes(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(200)
	::haxe::io::Bytes tmp3 = ::openfl::utils::_ByteArray::ByteArray_Impl__obj::toBytes(tmp2);		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(200)
	return tmp3;
	HX_STACK_LINE(200)
	return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(ByteArray_Impl__obj,toLimeBytes,return )

int ByteArray_Impl__obj::get_length( ::openfl::utils::ByteArrayData this1){
	HX_STACK_FRAME("openfl.utils._ByteArray.ByteArray_Impl_","get_length",0xd68ebb4d,"openfl.utils._ByteArray.ByteArray_Impl_.get_length","openfl/utils/ByteArray.hx",212,0xaa5cee4a)
	HX_STACK_ARG(this1,"this1")
	HX_STACK_LINE(217)
	int tmp = this1->length;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(217)
	return tmp;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(ByteArray_Impl__obj,get_length,return )

int ByteArray_Impl__obj::set_length( ::openfl::utils::ByteArrayData this1,int value){
	HX_STACK_FRAME("openfl.utils._ByteArray.ByteArray_Impl_","set_length",0xda0c59c1,"openfl.utils._ByteArray.ByteArray_Impl_.set_length","openfl/utils/ByteArray.hx",223,0xaa5cee4a)
	HX_STACK_ARG(this1,"this1")
	HX_STACK_ARG(value,"value")
	HX_STACK_LINE(229)
	bool tmp = (value > (int)0);		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(229)
	if ((tmp)){
		HX_STACK_LINE(231)
		int tmp1 = value;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(231)
		this1->__resize(tmp1);
	}
	HX_STACK_LINE(235)
	this1->length = value;
	HX_STACK_LINE(238)
	int tmp1 = value;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(238)
	return tmp1;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(ByteArray_Impl__obj,set_length,return )


ByteArray_Impl__obj::ByteArray_Impl__obj()
{
}

bool ByteArray_Impl__obj::__GetStatic(const ::String &inName, Dynamic &outValue, hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"get") ) { outValue = get_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"set") ) { outValue = set_dyn(); return true;  }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"_new") ) { outValue = _new_dyn(); return true;  }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"toBytes") ) { outValue = toBytes_dyn(); return true;  }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"fromFile") ) { outValue = fromFile_dyn(); return true;  }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"fromBytes") ) { outValue = fromBytes_dyn(); return true;  }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"get_length") ) { outValue = get_length_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"set_length") ) { outValue = set_length_dyn(); return true;  }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"toBytesData") ) { outValue = toBytesData_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"toLimeBytes") ) { outValue = toLimeBytes_dyn(); return true;  }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"fromBytesData") ) { outValue = fromBytesData_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"fromLimeBytes") ) { outValue = fromLimeBytes_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"toArrayBuffer") ) { outValue = toArrayBuffer_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"toDataPointer") ) { outValue = toDataPointer_dyn(); return true;  }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"fromArrayBuffer") ) { outValue = fromArrayBuffer_dyn(); return true;  }
	}
	return false;
}

#if HXCPP_SCRIPTABLE
static hx::StorageInfo *sMemberStorageInfo = 0;
static hx::StaticInfo sStaticStorageInfo[] = {
	{hx::fsInt,(void *) &ByteArray_Impl__obj::defaultObjectEncoding,HX_HCSTRING("defaultObjectEncoding","\x53","\xfb","\xeb","\xff")},
	{hx::fsObject /*::lime::utils::BytePointerData*/ ,(void *) &ByteArray_Impl__obj::__bytePointer,HX_HCSTRING("__bytePointer","\x75","\x7b","\x8d","\xc5")},
	{ hx::fsUnknown, 0, null()}
};
#endif

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(ByteArray_Impl__obj::__mClass,"__mClass");
	HX_MARK_MEMBER_NAME(ByteArray_Impl__obj::defaultObjectEncoding,"defaultObjectEncoding");
	HX_MARK_MEMBER_NAME(ByteArray_Impl__obj::__bytePointer,"__bytePointer");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(ByteArray_Impl__obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(ByteArray_Impl__obj::defaultObjectEncoding,"defaultObjectEncoding");
	HX_VISIT_MEMBER_NAME(ByteArray_Impl__obj::__bytePointer,"__bytePointer");
};

#endif

hx::Class ByteArray_Impl__obj::__mClass;

static ::String sStaticFields[] = {
	HX_HCSTRING("defaultObjectEncoding","\x53","\xfb","\xeb","\xff"),
	HX_HCSTRING("__bytePointer","\x75","\x7b","\x8d","\xc5"),
	HX_HCSTRING("_new","\x61","\x15","\x1f","\x3f"),
	HX_HCSTRING("get","\x96","\x80","\x4e","\x00"),
	HX_HCSTRING("set","\xa2","\x9b","\x57","\x00"),
	HX_HCSTRING("fromArrayBuffer","\x2f","\xce","\x77","\xec"),
	HX_HCSTRING("fromBytes","\xa1","\xf2","\x20","\x72"),
	HX_HCSTRING("fromBytesData","\x6b","\xd9","\x41","\xdb"),
	HX_HCSTRING("fromFile","\x06","\x9d","\x87","\xa1"),
	HX_HCSTRING("fromLimeBytes","\x4c","\xd2","\xe6","\x4e"),
	HX_HCSTRING("toArrayBuffer","\xbe","\x55","\x48","\xbf"),
	HX_HCSTRING("toDataPointer","\xf8","\x09","\x79","\x94"),
	HX_HCSTRING("toBytes","\xf0","\x54","\x1c","\x8a"),
	HX_HCSTRING("toBytesData","\x3a","\x0f","\x3e","\xce"),
	HX_HCSTRING("toLimeBytes","\x1b","\x08","\xe3","\x41"),
	HX_HCSTRING("get_length","\xaf","\x04","\x8f","\x8f"),
	HX_HCSTRING("set_length","\x23","\xa3","\x0c","\x93"),
	::String(null()) };

void ByteArray_Impl__obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("openfl.utils._ByteArray.ByteArray_Impl_","\x10","\x09","\x69","\x6e");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &ByteArray_Impl__obj::__GetStatic;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(sStaticFields);
	__mClass->mMembers = hx::Class_obj::dupFunctions(0 /* sMemberFields */);
	__mClass->mCanCast = hx::TCanCast< ByteArray_Impl__obj >;
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

void ByteArray_Impl__obj::__boot()
{
struct _Function_0_1{
	inline static ::lime::utils::BytePointerData Block( ){
		HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","openfl/utils/ByteArray.hx",26,0xaa5cee4a)
		{
			HX_STACK_LINE(26)
			int offset = (int)0;		HX_STACK_VAR(offset,"offset");
			HX_STACK_LINE(26)
			::lime::utils::BytePointerData tmp = ::lime::utils::BytePointerData_obj::__new(null(),offset);		HX_STACK_VAR(tmp,"tmp");
			HX_STACK_LINE(26)
			return tmp;
		}
		return null();
	}
};
	__bytePointer= _Function_0_1::Block();
}

} // end namespace openfl
} // end namespace utils
} // end namespace _ByteArray
