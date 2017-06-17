#include <hxcpp.h>

#ifndef INCLUDED_haxe__Int64_Int64_Impl_
#include <haxe/_Int64/Int64_Impl_.h>
#endif
#ifndef INCLUDED_openfl__internal_stage3D_AGALConverter
#include <openfl/_internal/stage3D/AGALConverter.h>
#endif
#ifndef INCLUDED_openfl__internal_stage3D_SamplerState
#include <openfl/_internal/stage3D/SamplerState.h>
#endif
#ifndef INCLUDED_openfl__internal_stage3D__AGALConverter_ProgramType
#include <openfl/_internal/stage3D/_AGALConverter/ProgramType.h>
#endif
#ifndef INCLUDED_openfl__internal_stage3D__AGALConverter_SamplerRegister
#include <openfl/_internal/stage3D/_AGALConverter/SamplerRegister.h>
#endif
#ifndef INCLUDED_openfl_errors_Error
#include <openfl/errors/Error.h>
#endif
#ifndef INCLUDED_openfl_errors_IllegalOperationError
#include <openfl/errors/IllegalOperationError.h>
#endif
namespace openfl{
namespace _internal{
namespace stage3D{
namespace _AGALConverter{

Void SamplerRegister_obj::__construct()
{
{
}
;
	return null();
}

//SamplerRegister_obj::~SamplerRegister_obj() { }

Dynamic SamplerRegister_obj::__CreateEmpty() { return  new SamplerRegister_obj; }
hx::ObjectPtr< SamplerRegister_obj > SamplerRegister_obj::__new()
{  hx::ObjectPtr< SamplerRegister_obj > _result_ = new SamplerRegister_obj();
	_result_->__construct();
	return _result_;}

Dynamic SamplerRegister_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< SamplerRegister_obj > _result_ = new SamplerRegister_obj();
	_result_->__construct();
	return _result_;}

::String SamplerRegister_obj::toGLSL( ){
	int tmp = this->type;
	::openfl::_internal::stage3D::_AGALConverter::ProgramType tmp1 = this->programType;
	::String tmp2 = ::openfl::_internal::stage3D::AGALConverter_obj::prefixFromType(tmp,tmp1);
	int tmp3 = this->n;
	::String tmp4 = (tmp2 + tmp3);
	::String str = tmp4;
	::String tmp5 = str;
	return tmp5;
}


HX_DEFINE_DYNAMIC_FUNC0(SamplerRegister_obj,toGLSL,return )

::openfl::_internal::stage3D::SamplerState SamplerRegister_obj::toSamplerState( ){
	int magFilter = (int)0;
	int minFilter = (int)0;
	int wrapModeS = (int)0;
	int wrapModeT = (int)0;
	{
		int tmp = this->f;
		int _g = tmp;
		int tmp1 = _g;
		switch( (int)(tmp1)){
			case (int)0: {
				magFilter = (int)9728;
			}
			;break;
			case (int)1: {
				magFilter = (int)9729;
			}
			;break;
			default: {
				::openfl::errors::IllegalOperationError tmp2 = ::openfl::errors::IllegalOperationError_obj::__new(null());
				HX_STACK_DO_THROW(tmp2);
			}
		}
	}
	{
		int tmp = this->m;
		int _g = tmp;
		int tmp1 = _g;
		switch( (int)(tmp1)){
			case (int)0: {
				int tmp2 = this->f;
				bool tmp3 = (tmp2 != (int)0);
				int tmp4;
				if ((tmp3)){
					tmp4 = (int)9729;
				}
				else{
					tmp4 = (int)9728;
				}
				minFilter = tmp4;
			}
			;break;
			case (int)1: {
				int tmp2 = this->f;
				bool tmp3 = (tmp2 != (int)0);
				int tmp4;
				if ((tmp3)){
					tmp4 = (int)9985;
				}
				else{
					tmp4 = (int)9984;
				}
				minFilter = tmp4;
			}
			;break;
			case (int)2: {
				int tmp2 = this->f;
				bool tmp3 = (tmp2 != (int)0);
				int tmp4;
				if ((tmp3)){
					tmp4 = (int)9987;
				}
				else{
					tmp4 = (int)9986;
				}
				minFilter = tmp4;
			}
			;break;
			default: {
				::openfl::errors::IllegalOperationError tmp2 = ::openfl::errors::IllegalOperationError_obj::__new(null());
				HX_STACK_DO_THROW(tmp2);
			}
		}
	}
	{
		int tmp = this->w;
		int _g = tmp;
		int tmp1 = _g;
		switch( (int)(tmp1)){
			case (int)0: {
				wrapModeS = (int)33071;
				wrapModeT = (int)33071;
			}
			;break;
			case (int)1: {
				wrapModeS = (int)10497;
				wrapModeT = (int)10497;
			}
			;break;
			default: {
				::openfl::errors::IllegalOperationError tmp2 = ::openfl::errors::IllegalOperationError_obj::__new(null());
				HX_STACK_DO_THROW(tmp2);
			}
		}
	}
	int tmp = this->s;
	int tmp1 = (int(tmp) & int((int)4));
	bool tmp2 = (tmp1 == (int)4);
	bool ignoreSampler = tmp2;
	int tmp3 = this->s;
	int tmp4 = (int(tmp3) & int((int)1));
	bool tmp5 = (tmp4 == (int)1);
	bool centroid = tmp5;
	int tmp6 = this->b;
	int tmp7 = (int(tmp6) << int((int)24));
	int tmp8 = (int(tmp7) >> int((int)24));
	Float tmp9 = (Float(tmp8) / Float(((Float)8.0)));
	Float lodBias = tmp9;
	Float maxAniso = ((Float)0.0);
	::openfl::_internal::stage3D::SamplerState tmp10 = ::openfl::_internal::stage3D::SamplerState_obj::__new(minFilter,magFilter,wrapModeS,wrapModeT,lodBias,maxAniso,ignoreSampler,centroid,null());
	return tmp10;
}


HX_DEFINE_DYNAMIC_FUNC0(SamplerRegister_obj,toSamplerState,return )

::openfl::_internal::stage3D::_AGALConverter::SamplerRegister SamplerRegister_obj::parse( cpp::Int64Struct v,::openfl::_internal::stage3D::_AGALConverter::ProgramType programType){
	::openfl::_internal::stage3D::_AGALConverter::SamplerRegister tmp = ::openfl::_internal::stage3D::_AGALConverter::SamplerRegister_obj::__new();
	::openfl::_internal::stage3D::_AGALConverter::SamplerRegister sr = tmp;
	sr->programType = programType;
	int tmp1;
	{
		cpp::Int64Struct tmp2;
		{
			cpp::Int64Struct a = ((v) >> ((int)60));
			cpp::Int64Struct tmp3 = ::haxe::_Int64::Int64_Impl__obj::ofInt((int)15);
			cpp::Int64Struct b = tmp3;
			tmp2 = ((a) & (b));
		}
		cpp::Int64Struct this1 = tmp2;
		tmp1 = (int)((this1)&0xffffffff);
	}
	sr->f = tmp1;
	int tmp2;
	{
		cpp::Int64Struct tmp3;
		{
			cpp::Int64Struct a = ((v) >> ((int)56));
			cpp::Int64Struct tmp4 = ::haxe::_Int64::Int64_Impl__obj::ofInt((int)15);
			cpp::Int64Struct b = tmp4;
			tmp3 = ((a) & (b));
		}
		cpp::Int64Struct this1 = tmp3;
		tmp2 = (int)((this1)&0xffffffff);
	}
	sr->m = tmp2;
	int tmp3;
	{
		cpp::Int64Struct tmp4;
		{
			cpp::Int64Struct a = ((v) >> ((int)52));
			cpp::Int64Struct tmp5 = ::haxe::_Int64::Int64_Impl__obj::ofInt((int)15);
			cpp::Int64Struct b = tmp5;
			tmp4 = ((a) & (b));
		}
		cpp::Int64Struct this1 = tmp4;
		tmp3 = (int)((this1)&0xffffffff);
	}
	sr->w = tmp3;
	int tmp4;
	{
		cpp::Int64Struct tmp5;
		{
			cpp::Int64Struct a = ((v) >> ((int)48));
			cpp::Int64Struct tmp6 = ::haxe::_Int64::Int64_Impl__obj::ofInt((int)15);
			cpp::Int64Struct b = tmp6;
			tmp5 = ((a) & (b));
		}
		cpp::Int64Struct this1 = tmp5;
		tmp4 = (int)((this1)&0xffffffff);
	}
	sr->s = tmp4;
	int tmp5;
	{
		cpp::Int64Struct tmp6;
		{
			cpp::Int64Struct a = ((v) >> ((int)44));
			cpp::Int64Struct tmp7 = ::haxe::_Int64::Int64_Impl__obj::ofInt((int)15);
			cpp::Int64Struct b = tmp7;
			tmp6 = ((a) & (b));
		}
		cpp::Int64Struct this1 = tmp6;
		tmp5 = (int)((this1)&0xffffffff);
	}
	sr->d = tmp5;
	int tmp6;
	{
		cpp::Int64Struct tmp7;
		{
			cpp::Int64Struct a = ((v) >> ((int)40));
			cpp::Int64Struct tmp8 = ::haxe::_Int64::Int64_Impl__obj::ofInt((int)15);
			cpp::Int64Struct b = tmp8;
			tmp7 = ((a) & (b));
		}
		cpp::Int64Struct this1 = tmp7;
		tmp6 = (int)((this1)&0xffffffff);
	}
	sr->t = tmp6;
	int tmp7;
	{
		cpp::Int64Struct tmp8;
		{
			cpp::Int64Struct a = ((v) >> ((int)32));
			cpp::Int64Struct tmp9 = ::haxe::_Int64::Int64_Impl__obj::ofInt((int)15);
			cpp::Int64Struct b = tmp9;
			tmp8 = ((a) & (b));
		}
		cpp::Int64Struct this1 = tmp8;
		tmp7 = (int)((this1)&0xffffffff);
	}
	sr->type = tmp7;
	int tmp8;
	{
		cpp::Int64Struct tmp9;
		{
			cpp::Int64Struct a = ((v) >> ((int)16));
			cpp::Int64Struct tmp10 = ::haxe::_Int64::Int64_Impl__obj::ofInt((int)255);
			cpp::Int64Struct b = tmp10;
			tmp9 = ((a) & (b));
		}
		cpp::Int64Struct this1 = tmp9;
		tmp8 = (int)((this1)&0xffffffff);
	}
	sr->b = tmp8;
	int tmp9;
	{
		cpp::Int64Struct tmp10;
		{
			cpp::Int64Struct tmp11 = ::haxe::_Int64::Int64_Impl__obj::ofInt((int)65535);
			cpp::Int64Struct b = tmp11;
			tmp10 = ((v) & (b));
		}
		cpp::Int64Struct this1 = tmp10;
		tmp9 = (int)((this1)&0xffffffff);
	}
	sr->n = tmp9;
	::openfl::_internal::stage3D::_AGALConverter::SamplerRegister tmp10 = sr;
	return tmp10;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(SamplerRegister_obj,parse,return )


SamplerRegister_obj::SamplerRegister_obj()
{
}

void SamplerRegister_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(SamplerRegister);
	HX_MARK_MEMBER_NAME(b,"b");
	HX_MARK_MEMBER_NAME(d,"d");
	HX_MARK_MEMBER_NAME(f,"f");
	HX_MARK_MEMBER_NAME(m,"m");
	HX_MARK_MEMBER_NAME(n,"n");
	HX_MARK_MEMBER_NAME(programType,"programType");
	HX_MARK_MEMBER_NAME(s,"s");
	HX_MARK_MEMBER_NAME(t,"t");
	HX_MARK_MEMBER_NAME(type,"type");
	HX_MARK_MEMBER_NAME(w,"w");
	HX_MARK_END_CLASS();
}

void SamplerRegister_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(b,"b");
	HX_VISIT_MEMBER_NAME(d,"d");
	HX_VISIT_MEMBER_NAME(f,"f");
	HX_VISIT_MEMBER_NAME(m,"m");
	HX_VISIT_MEMBER_NAME(n,"n");
	HX_VISIT_MEMBER_NAME(programType,"programType");
	HX_VISIT_MEMBER_NAME(s,"s");
	HX_VISIT_MEMBER_NAME(t,"t");
	HX_VISIT_MEMBER_NAME(type,"type");
	HX_VISIT_MEMBER_NAME(w,"w");
}

Dynamic SamplerRegister_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 1:
		if (HX_FIELD_EQ(inName,"b") ) { return b; }
		if (HX_FIELD_EQ(inName,"d") ) { return d; }
		if (HX_FIELD_EQ(inName,"f") ) { return f; }
		if (HX_FIELD_EQ(inName,"m") ) { return m; }
		if (HX_FIELD_EQ(inName,"n") ) { return n; }
		if (HX_FIELD_EQ(inName,"s") ) { return s; }
		if (HX_FIELD_EQ(inName,"t") ) { return t; }
		if (HX_FIELD_EQ(inName,"w") ) { return w; }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"type") ) { return type; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"toGLSL") ) { return toGLSL_dyn(); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"programType") ) { return programType; }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"toSamplerState") ) { return toSamplerState_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

bool SamplerRegister_obj::__GetStatic(const ::String &inName, Dynamic &outValue, hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"parse") ) { outValue = parse_dyn(); return true;  }
	}
	return false;
}

Dynamic SamplerRegister_obj::__SetField(const ::String &inName,const Dynamic &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 1:
		if (HX_FIELD_EQ(inName,"b") ) { b=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"d") ) { d=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"f") ) { f=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"m") ) { m=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"n") ) { n=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"s") ) { s=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"t") ) { t=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"w") ) { w=inValue.Cast< int >(); return inValue; }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"type") ) { type=inValue.Cast< int >(); return inValue; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"programType") ) { programType=inValue.Cast< ::openfl::_internal::stage3D::_AGALConverter::ProgramType >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void SamplerRegister_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("b","\x62","\x00","\x00","\x00"));
	outFields->push(HX_HCSTRING("d","\x64","\x00","\x00","\x00"));
	outFields->push(HX_HCSTRING("f","\x66","\x00","\x00","\x00"));
	outFields->push(HX_HCSTRING("m","\x6d","\x00","\x00","\x00"));
	outFields->push(HX_HCSTRING("n","\x6e","\x00","\x00","\x00"));
	outFields->push(HX_HCSTRING("programType","\x5e","\xfb","\x2c","\xc4"));
	outFields->push(HX_HCSTRING("s","\x73","\x00","\x00","\x00"));
	outFields->push(HX_HCSTRING("t","\x74","\x00","\x00","\x00"));
	outFields->push(HX_HCSTRING("type","\xba","\xf2","\x08","\x4d"));
	outFields->push(HX_HCSTRING("w","\x77","\x00","\x00","\x00"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsInt,(int)offsetof(SamplerRegister_obj,b),HX_HCSTRING("b","\x62","\x00","\x00","\x00")},
	{hx::fsInt,(int)offsetof(SamplerRegister_obj,d),HX_HCSTRING("d","\x64","\x00","\x00","\x00")},
	{hx::fsInt,(int)offsetof(SamplerRegister_obj,f),HX_HCSTRING("f","\x66","\x00","\x00","\x00")},
	{hx::fsInt,(int)offsetof(SamplerRegister_obj,m),HX_HCSTRING("m","\x6d","\x00","\x00","\x00")},
	{hx::fsInt,(int)offsetof(SamplerRegister_obj,n),HX_HCSTRING("n","\x6e","\x00","\x00","\x00")},
	{hx::fsObject /*::openfl::_internal::stage3D::_AGALConverter::ProgramType*/ ,(int)offsetof(SamplerRegister_obj,programType),HX_HCSTRING("programType","\x5e","\xfb","\x2c","\xc4")},
	{hx::fsInt,(int)offsetof(SamplerRegister_obj,s),HX_HCSTRING("s","\x73","\x00","\x00","\x00")},
	{hx::fsInt,(int)offsetof(SamplerRegister_obj,t),HX_HCSTRING("t","\x74","\x00","\x00","\x00")},
	{hx::fsInt,(int)offsetof(SamplerRegister_obj,type),HX_HCSTRING("type","\xba","\xf2","\x08","\x4d")},
	{hx::fsInt,(int)offsetof(SamplerRegister_obj,w),HX_HCSTRING("w","\x77","\x00","\x00","\x00")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo *sStaticStorageInfo = 0;
#endif

static ::String sMemberFields[] = {
	HX_HCSTRING("b","\x62","\x00","\x00","\x00"),
	HX_HCSTRING("d","\x64","\x00","\x00","\x00"),
	HX_HCSTRING("f","\x66","\x00","\x00","\x00"),
	HX_HCSTRING("m","\x6d","\x00","\x00","\x00"),
	HX_HCSTRING("n","\x6e","\x00","\x00","\x00"),
	HX_HCSTRING("programType","\x5e","\xfb","\x2c","\xc4"),
	HX_HCSTRING("s","\x73","\x00","\x00","\x00"),
	HX_HCSTRING("t","\x74","\x00","\x00","\x00"),
	HX_HCSTRING("type","\xba","\xf2","\x08","\x4d"),
	HX_HCSTRING("w","\x77","\x00","\x00","\x00"),
	HX_HCSTRING("toGLSL","\xf9","\x58","\x08","\x7a"),
	HX_HCSTRING("toSamplerState","\x04","\x62","\xd2","\xf8"),
	::String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(SamplerRegister_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(SamplerRegister_obj::__mClass,"__mClass");
};

#endif

hx::Class SamplerRegister_obj::__mClass;

static ::String sStaticFields[] = {
	HX_HCSTRING("parse","\x33","\x90","\x55","\xbd"),
	::String(null()) };

void SamplerRegister_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("openfl._internal.stage3D._AGALConverter.SamplerRegister","\x9c","\x39","\xf2","\x49");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &SamplerRegister_obj::__GetStatic;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(sStaticFields);
	__mClass->mMembers = hx::Class_obj::dupFunctions(sMemberFields);
	__mClass->mCanCast = hx::TCanCast< SamplerRegister_obj >;
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
