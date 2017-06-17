#include <hxcpp.h>

#ifndef INCLUDED_openfl__internal_stage3D_AGALConverter
#include <openfl/_internal/stage3D/AGALConverter.h>
#endif
#ifndef INCLUDED_openfl__internal_stage3D__AGALConverter_DestRegister
#include <openfl/_internal/stage3D/_AGALConverter/DestRegister.h>
#endif
#ifndef INCLUDED_openfl__internal_stage3D__AGALConverter_ProgramType
#include <openfl/_internal/stage3D/_AGALConverter/ProgramType.h>
#endif
namespace openfl{
namespace _internal{
namespace stage3D{
namespace _AGALConverter{

Void DestRegister_obj::__construct()
{
{
}
;
	return null();
}

//DestRegister_obj::~DestRegister_obj() { }

Dynamic DestRegister_obj::__CreateEmpty() { return  new DestRegister_obj; }
hx::ObjectPtr< DestRegister_obj > DestRegister_obj::__new()
{  hx::ObjectPtr< DestRegister_obj > _result_ = new DestRegister_obj();
	_result_->__construct();
	return _result_;}

Dynamic DestRegister_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< DestRegister_obj > _result_ = new DestRegister_obj();
	_result_->__construct();
	return _result_;}

::String DestRegister_obj::getWriteMask( ){
	::String str = HX_HCSTRING(".","\x2e","\x00","\x00","\x00");
	int tmp = this->mask;
	int tmp1 = (int(tmp) & int((int)1));
	bool tmp2 = (tmp1 != (int)0);
	if ((tmp2)){
		hx::AddEq(str,HX_HCSTRING("x","\x78","\x00","\x00","\x00"));
	}
	int tmp3 = this->mask;
	int tmp4 = (int(tmp3) & int((int)2));
	bool tmp5 = (tmp4 != (int)0);
	if ((tmp5)){
		hx::AddEq(str,HX_HCSTRING("y","\x79","\x00","\x00","\x00"));
	}
	int tmp6 = this->mask;
	int tmp7 = (int(tmp6) & int((int)4));
	bool tmp8 = (tmp7 != (int)0);
	if ((tmp8)){
		hx::AddEq(str,HX_HCSTRING("z","\x7a","\x00","\x00","\x00"));
	}
	int tmp9 = this->mask;
	int tmp10 = (int(tmp9) & int((int)8));
	bool tmp11 = (tmp10 != (int)0);
	if ((tmp11)){
		hx::AddEq(str,HX_HCSTRING("w","\x77","\x00","\x00","\x00"));
	}
	::String tmp12 = str;
	return tmp12;
}


HX_DEFINE_DYNAMIC_FUNC0(DestRegister_obj,getWriteMask,return )

::String DestRegister_obj::toGLSL( hx::Null< bool >  __o_useMask){
bool useMask = __o_useMask.Default(true);
{
		::String str;
		int tmp = this->type;
		bool tmp1 = (tmp == (int)3);
		if ((tmp1)){
			::openfl::_internal::stage3D::_AGALConverter::ProgramType tmp2 = this->programType;
			bool tmp3 = (tmp2 == ::openfl::_internal::stage3D::_AGALConverter::ProgramType_obj::VERTEX);
			::String tmp4;
			if ((tmp3)){
				tmp4 = HX_HCSTRING("gl_Position","\x63","\x0d","\x2a","\xe5");
			}
			else{
				tmp4 = HX_HCSTRING("gl_FragColor","\xd7","\x68","\xe4","\x21");
			}
			str = tmp4;
		}
		else{
			int tmp2 = this->type;
			::openfl::_internal::stage3D::_AGALConverter::ProgramType tmp3 = this->programType;
			::String tmp4 = ::openfl::_internal::stage3D::AGALConverter_obj::prefixFromType(tmp2,tmp3);
			int tmp5 = this->n;
			::String tmp6 = (tmp4 + tmp5);
			str = tmp6;
		}
		bool tmp2 = useMask;
		bool tmp3;
		if ((tmp2)){
			int tmp4 = this->mask;
			int tmp5 = tmp4;
			tmp3 = (tmp5 != (int)15);
		}
		else{
			tmp3 = false;
		}
		if ((tmp3)){
			::String tmp4 = this->getWriteMask();
			hx::AddEq(str,tmp4);
		}
		::String tmp4 = str;
		return tmp4;
	}
}


HX_DEFINE_DYNAMIC_FUNC1(DestRegister_obj,toGLSL,return )

::openfl::_internal::stage3D::_AGALConverter::DestRegister DestRegister_obj::parse( int v,::openfl::_internal::stage3D::_AGALConverter::ProgramType programType){
	::openfl::_internal::stage3D::_AGALConverter::DestRegister tmp = ::openfl::_internal::stage3D::_AGALConverter::DestRegister_obj::__new();
	::openfl::_internal::stage3D::_AGALConverter::DestRegister dr = tmp;
	dr->programType = programType;
	int tmp1 = (int(v) >> int((int)24));
	int tmp2 = tmp1;
	int tmp3 = (int(tmp2) & int((int)15));
	dr->type = tmp3;
	int tmp4 = (int(v) >> int((int)16));
	int tmp5 = tmp4;
	int tmp6 = (int(tmp5) & int((int)15));
	dr->mask = tmp6;
	int tmp7 = (int(v) & int((int)65535));
	dr->n = tmp7;
	::openfl::_internal::stage3D::_AGALConverter::DestRegister tmp8 = dr;
	return tmp8;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(DestRegister_obj,parse,return )


DestRegister_obj::DestRegister_obj()
{
}

void DestRegister_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(DestRegister);
	HX_MARK_MEMBER_NAME(mask,"mask");
	HX_MARK_MEMBER_NAME(n,"n");
	HX_MARK_MEMBER_NAME(programType,"programType");
	HX_MARK_MEMBER_NAME(type,"type");
	HX_MARK_END_CLASS();
}

void DestRegister_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(mask,"mask");
	HX_VISIT_MEMBER_NAME(n,"n");
	HX_VISIT_MEMBER_NAME(programType,"programType");
	HX_VISIT_MEMBER_NAME(type,"type");
}

Dynamic DestRegister_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 1:
		if (HX_FIELD_EQ(inName,"n") ) { return n; }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"mask") ) { return mask; }
		if (HX_FIELD_EQ(inName,"type") ) { return type; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"toGLSL") ) { return toGLSL_dyn(); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"programType") ) { return programType; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"getWriteMask") ) { return getWriteMask_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

bool DestRegister_obj::__GetStatic(const ::String &inName, Dynamic &outValue, hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"parse") ) { outValue = parse_dyn(); return true;  }
	}
	return false;
}

Dynamic DestRegister_obj::__SetField(const ::String &inName,const Dynamic &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 1:
		if (HX_FIELD_EQ(inName,"n") ) { n=inValue.Cast< int >(); return inValue; }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"mask") ) { mask=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"type") ) { type=inValue.Cast< int >(); return inValue; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"programType") ) { programType=inValue.Cast< ::openfl::_internal::stage3D::_AGALConverter::ProgramType >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void DestRegister_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("mask","\xec","\x40","\x56","\x48"));
	outFields->push(HX_HCSTRING("n","\x6e","\x00","\x00","\x00"));
	outFields->push(HX_HCSTRING("programType","\x5e","\xfb","\x2c","\xc4"));
	outFields->push(HX_HCSTRING("type","\xba","\xf2","\x08","\x4d"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsInt,(int)offsetof(DestRegister_obj,mask),HX_HCSTRING("mask","\xec","\x40","\x56","\x48")},
	{hx::fsInt,(int)offsetof(DestRegister_obj,n),HX_HCSTRING("n","\x6e","\x00","\x00","\x00")},
	{hx::fsObject /*::openfl::_internal::stage3D::_AGALConverter::ProgramType*/ ,(int)offsetof(DestRegister_obj,programType),HX_HCSTRING("programType","\x5e","\xfb","\x2c","\xc4")},
	{hx::fsInt,(int)offsetof(DestRegister_obj,type),HX_HCSTRING("type","\xba","\xf2","\x08","\x4d")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo *sStaticStorageInfo = 0;
#endif

static ::String sMemberFields[] = {
	HX_HCSTRING("mask","\xec","\x40","\x56","\x48"),
	HX_HCSTRING("n","\x6e","\x00","\x00","\x00"),
	HX_HCSTRING("programType","\x5e","\xfb","\x2c","\xc4"),
	HX_HCSTRING("type","\xba","\xf2","\x08","\x4d"),
	HX_HCSTRING("getWriteMask","\xf5","\xd1","\x60","\x60"),
	HX_HCSTRING("toGLSL","\xf9","\x58","\x08","\x7a"),
	::String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(DestRegister_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(DestRegister_obj::__mClass,"__mClass");
};

#endif

hx::Class DestRegister_obj::__mClass;

static ::String sStaticFields[] = {
	HX_HCSTRING("parse","\x33","\x90","\x55","\xbd"),
	::String(null()) };

void DestRegister_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("openfl._internal.stage3D._AGALConverter.DestRegister","\x34","\xa4","\x4d","\xad");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &DestRegister_obj::__GetStatic;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(sStaticFields);
	__mClass->mMembers = hx::Class_obj::dupFunctions(sMemberFields);
	__mClass->mCanCast = hx::TCanCast< DestRegister_obj >;
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
} // end namespace stage3D
} // end namespace _AGALConverter
