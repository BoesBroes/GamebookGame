#include <hxcpp.h>

#ifndef INCLUDED_haxe__Int64_Int64_Impl_
#include <haxe/_Int64/Int64_Impl_.h>
#endif
#ifndef INCLUDED_openfl__internal_stage3D_AGALConverter
#include <openfl/_internal/stage3D/AGALConverter.h>
#endif
#ifndef INCLUDED_openfl__internal_stage3D__AGALConverter_ProgramType
#include <openfl/_internal/stage3D/_AGALConverter/ProgramType.h>
#endif
#ifndef INCLUDED_openfl__internal_stage3D__AGALConverter_SourceRegister
#include <openfl/_internal/stage3D/_AGALConverter/SourceRegister.h>
#endif
namespace openfl{
namespace _internal{
namespace stage3D{
namespace _AGALConverter{

Void SourceRegister_obj::__construct()
{
{
}
;
	return null();
}

//SourceRegister_obj::~SourceRegister_obj() { }

Dynamic SourceRegister_obj::__CreateEmpty() { return  new SourceRegister_obj; }
hx::ObjectPtr< SourceRegister_obj > SourceRegister_obj::__new()
{  hx::ObjectPtr< SourceRegister_obj > _result_ = new SourceRegister_obj();
	_result_->__construct();
	return _result_;}

Dynamic SourceRegister_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< SourceRegister_obj > _result_ = new SourceRegister_obj();
	_result_->__construct();
	return _result_;}

::String SourceRegister_obj::toGLSL( hx::Null< bool >  __o_emitSwizzle,hx::Null< int >  __o_offset){
bool emitSwizzle = __o_emitSwizzle.Default(true);
int offset = __o_offset.Default(0);
{
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
			return tmp4;
		}
		int tmp2 = this->s;
		bool tmp3 = (tmp2 == (int)228);
		bool tmp4;
		if ((tmp3)){
			int tmp5 = this->sourceMask;
			int tmp6 = tmp5;
			tmp4 = (tmp6 == (int)15);
		}
		else{
			tmp4 = false;
		}
		bool fullxyzw = tmp4;
		::String swizzle = HX_HCSTRING("","\x00","\x00","\x00","\x00");
		int tmp5 = this->type;
		bool tmp6 = (tmp5 != (int)5);
		bool tmp7;
		if ((tmp6)){
			bool tmp8 = fullxyzw;
			bool tmp9 = tmp8;
			tmp7 = !(tmp9);
		}
		else{
			tmp7 = false;
		}
		if ((tmp7)){
			int _g = (int)0;
			while((true)){
				bool tmp8 = (_g < (int)4);
				bool tmp9 = !(tmp8);
				if ((tmp9)){
					break;
				}
				int tmp10 = (_g)++;
				int i = tmp10;
				int tmp11 = this->sourceMask;
				int tmp12 = (int((int)1) << int(i));
				int tmp13 = (int(tmp11) & int(tmp12));
				bool tmp14 = (tmp13 != (int)0);
				if ((tmp14)){
					int tmp15 = this->s;
					int tmp16 = (i * (int)2);
					int tmp17 = (int(tmp15) >> int(tmp16));
					int tmp18 = (int(tmp17) & int((int)3));
					int _g1 = tmp18;
					int tmp19 = _g1;
					switch( (int)(tmp19)){
						case (int)0: {
							hx::AddEq(swizzle,HX_HCSTRING("x","\x78","\x00","\x00","\x00"));
						}
						;break;
						case (int)1: {
							hx::AddEq(swizzle,HX_HCSTRING("y","\x79","\x00","\x00","\x00"));
						}
						;break;
						case (int)2: {
							hx::AddEq(swizzle,HX_HCSTRING("z","\x7a","\x00","\x00","\x00"));
						}
						;break;
						case (int)3: {
							hx::AddEq(swizzle,HX_HCSTRING("w","\x77","\x00","\x00","\x00"));
						}
						;break;
					}
				}
			}
		}
		int tmp8 = this->type;
		::openfl::_internal::stage3D::_AGALConverter::ProgramType tmp9 = this->programType;
		::String tmp10 = ::openfl::_internal::stage3D::AGALConverter_obj::prefixFromType(tmp8,tmp9);
		::String str = tmp10;
		int tmp11 = this->d;
		bool tmp12 = (tmp11 == (int)0);
		if ((tmp12)){
			int tmp13 = this->n;
			int tmp14 = offset;
			int tmp15 = (tmp13 + tmp14);
			hx::AddEq(str,tmp15);
		}
		else{
			int tmp13 = this->o;
			hx::AddEq(str,tmp13);
			Dynamic tmp14 = HX_HCSTRING("x","\x78","\x00","\x00","\x00").charCodeAt((int)0);
			int tmp15 = this->q;
			int tmp16 = (tmp14 + tmp15);
			::String tmp17 = ::String::fromCharCode(tmp16);
			::String indexComponent = tmp17;
			int tmp18 = this->itype;
			::openfl::_internal::stage3D::_AGALConverter::ProgramType tmp19 = this->programType;
			::String tmp20 = ::openfl::_internal::stage3D::AGALConverter_obj::prefixFromType(tmp18,tmp19);
			int tmp21 = this->n;
			::String tmp22 = (tmp20 + tmp21);
			::String tmp23 = (tmp22 + HX_HCSTRING(".","\x2e","\x00","\x00","\x00"));
			::String tmp24 = indexComponent;
			::String tmp25 = (tmp23 + tmp24);
			::String indexRegister = tmp25;
			::String tmp26 = (HX_HCSTRING("[ int(","\x3e","\xaa","\x07","\x15") + indexRegister);
			::String tmp27 = (tmp26 + HX_HCSTRING(") +","\x74","\x38","\x1f","\x00"));
			int tmp28 = offset;
			::String tmp29 = (tmp27 + tmp28);
			::String tmp30 = (tmp29 + HX_HCSTRING("]","\x5d","\x00","\x00","\x00"));
			hx::AddEq(str,tmp30);
		}
		bool tmp13 = emitSwizzle;
		bool tmp14;
		if ((tmp13)){
			tmp14 = (swizzle != HX_HCSTRING("","\x00","\x00","\x00","\x00"));
		}
		else{
			tmp14 = false;
		}
		if ((tmp14)){
			::String tmp15 = (HX_HCSTRING(".","\x2e","\x00","\x00","\x00") + swizzle);
			hx::AddEq(str,tmp15);
		}
		::String tmp15 = str;
		return tmp15;
	}
}


HX_DEFINE_DYNAMIC_FUNC2(SourceRegister_obj,toGLSL,return )

::openfl::_internal::stage3D::_AGALConverter::SourceRegister SourceRegister_obj::parse( cpp::Int64Struct v,::openfl::_internal::stage3D::_AGALConverter::ProgramType programType,int sourceMask){
	::openfl::_internal::stage3D::_AGALConverter::SourceRegister tmp = ::openfl::_internal::stage3D::_AGALConverter::SourceRegister_obj::__new();
	::openfl::_internal::stage3D::_AGALConverter::SourceRegister sr = tmp;
	sr->programType = programType;
	int tmp1;
	{
		cpp::Int64Struct tmp2;
		{
			cpp::Int64Struct a = ((v) >> ((int)63));
			cpp::Int64Struct tmp3 = ::haxe::_Int64::Int64_Impl__obj::ofInt((int)1);
			cpp::Int64Struct b = tmp3;
			tmp2 = ((a) & (b));
		}
		cpp::Int64Struct this1 = tmp2;
		tmp1 = (int)((this1)&0xffffffff);
	}
	sr->d = tmp1;
	int tmp2;
	{
		cpp::Int64Struct tmp3;
		{
			cpp::Int64Struct a = ((v) >> ((int)48));
			cpp::Int64Struct tmp4 = ::haxe::_Int64::Int64_Impl__obj::ofInt((int)3);
			cpp::Int64Struct b = tmp4;
			tmp3 = ((a) & (b));
		}
		cpp::Int64Struct this1 = tmp3;
		tmp2 = (int)((this1)&0xffffffff);
	}
	sr->q = tmp2;
	int tmp3;
	{
		cpp::Int64Struct tmp4;
		{
			cpp::Int64Struct a = ((v) >> ((int)40));
			cpp::Int64Struct tmp5 = ::haxe::_Int64::Int64_Impl__obj::ofInt((int)15);
			cpp::Int64Struct b = tmp5;
			tmp4 = ((a) & (b));
		}
		cpp::Int64Struct this1 = tmp4;
		tmp3 = (int)((this1)&0xffffffff);
	}
	sr->itype = tmp3;
	int tmp4;
	{
		cpp::Int64Struct tmp5;
		{
			cpp::Int64Struct a = ((v) >> ((int)32));
			cpp::Int64Struct tmp6 = ::haxe::_Int64::Int64_Impl__obj::ofInt((int)15);
			cpp::Int64Struct b = tmp6;
			tmp5 = ((a) & (b));
		}
		cpp::Int64Struct this1 = tmp5;
		tmp4 = (int)((this1)&0xffffffff);
	}
	sr->type = tmp4;
	int tmp5;
	{
		cpp::Int64Struct tmp6;
		{
			cpp::Int64Struct a = ((v) >> ((int)24));
			cpp::Int64Struct tmp7 = ::haxe::_Int64::Int64_Impl__obj::ofInt((int)255);
			cpp::Int64Struct b = tmp7;
			tmp6 = ((a) & (b));
		}
		cpp::Int64Struct this1 = tmp6;
		tmp5 = (int)((this1)&0xffffffff);
	}
	sr->s = tmp5;
	int tmp6;
	{
		cpp::Int64Struct tmp7;
		{
			cpp::Int64Struct a = ((v) >> ((int)16));
			cpp::Int64Struct tmp8 = ::haxe::_Int64::Int64_Impl__obj::ofInt((int)255);
			cpp::Int64Struct b = tmp8;
			tmp7 = ((a) & (b));
		}
		cpp::Int64Struct this1 = tmp7;
		tmp6 = (int)((this1)&0xffffffff);
	}
	sr->o = tmp6;
	int tmp7;
	{
		cpp::Int64Struct tmp8;
		{
			cpp::Int64Struct tmp9 = ::haxe::_Int64::Int64_Impl__obj::ofInt((int)65535);
			cpp::Int64Struct b = tmp9;
			tmp8 = ((v) & (b));
		}
		cpp::Int64Struct this1 = tmp8;
		tmp7 = (int)((this1)&0xffffffff);
	}
	sr->n = tmp7;
	sr->sourceMask = sourceMask;
	::openfl::_internal::stage3D::_AGALConverter::SourceRegister tmp8 = sr;
	return tmp8;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC3(SourceRegister_obj,parse,return )


SourceRegister_obj::SourceRegister_obj()
{
}

void SourceRegister_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(SourceRegister);
	HX_MARK_MEMBER_NAME(d,"d");
	HX_MARK_MEMBER_NAME(itype,"itype");
	HX_MARK_MEMBER_NAME(n,"n");
	HX_MARK_MEMBER_NAME(o,"o");
	HX_MARK_MEMBER_NAME(programType,"programType");
	HX_MARK_MEMBER_NAME(q,"q");
	HX_MARK_MEMBER_NAME(s,"s");
	HX_MARK_MEMBER_NAME(sourceMask,"sourceMask");
	HX_MARK_MEMBER_NAME(type,"type");
	HX_MARK_END_CLASS();
}

void SourceRegister_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(d,"d");
	HX_VISIT_MEMBER_NAME(itype,"itype");
	HX_VISIT_MEMBER_NAME(n,"n");
	HX_VISIT_MEMBER_NAME(o,"o");
	HX_VISIT_MEMBER_NAME(programType,"programType");
	HX_VISIT_MEMBER_NAME(q,"q");
	HX_VISIT_MEMBER_NAME(s,"s");
	HX_VISIT_MEMBER_NAME(sourceMask,"sourceMask");
	HX_VISIT_MEMBER_NAME(type,"type");
}

Dynamic SourceRegister_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 1:
		if (HX_FIELD_EQ(inName,"d") ) { return d; }
		if (HX_FIELD_EQ(inName,"n") ) { return n; }
		if (HX_FIELD_EQ(inName,"o") ) { return o; }
		if (HX_FIELD_EQ(inName,"q") ) { return q; }
		if (HX_FIELD_EQ(inName,"s") ) { return s; }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"type") ) { return type; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"itype") ) { return itype; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"toGLSL") ) { return toGLSL_dyn(); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"sourceMask") ) { return sourceMask; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"programType") ) { return programType; }
	}
	return super::__Field(inName,inCallProp);
}

bool SourceRegister_obj::__GetStatic(const ::String &inName, Dynamic &outValue, hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"parse") ) { outValue = parse_dyn(); return true;  }
	}
	return false;
}

Dynamic SourceRegister_obj::__SetField(const ::String &inName,const Dynamic &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 1:
		if (HX_FIELD_EQ(inName,"d") ) { d=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"n") ) { n=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"o") ) { o=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"q") ) { q=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"s") ) { s=inValue.Cast< int >(); return inValue; }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"type") ) { type=inValue.Cast< int >(); return inValue; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"itype") ) { itype=inValue.Cast< int >(); return inValue; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"sourceMask") ) { sourceMask=inValue.Cast< int >(); return inValue; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"programType") ) { programType=inValue.Cast< ::openfl::_internal::stage3D::_AGALConverter::ProgramType >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void SourceRegister_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("d","\x64","\x00","\x00","\x00"));
	outFields->push(HX_HCSTRING("itype","\xa3","\xdb","\x1b","\xc2"));
	outFields->push(HX_HCSTRING("n","\x6e","\x00","\x00","\x00"));
	outFields->push(HX_HCSTRING("o","\x6f","\x00","\x00","\x00"));
	outFields->push(HX_HCSTRING("programType","\x5e","\xfb","\x2c","\xc4"));
	outFields->push(HX_HCSTRING("q","\x71","\x00","\x00","\x00"));
	outFields->push(HX_HCSTRING("s","\x73","\x00","\x00","\x00"));
	outFields->push(HX_HCSTRING("sourceMask","\x67","\x27","\xba","\x70"));
	outFields->push(HX_HCSTRING("type","\xba","\xf2","\x08","\x4d"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsInt,(int)offsetof(SourceRegister_obj,d),HX_HCSTRING("d","\x64","\x00","\x00","\x00")},
	{hx::fsInt,(int)offsetof(SourceRegister_obj,itype),HX_HCSTRING("itype","\xa3","\xdb","\x1b","\xc2")},
	{hx::fsInt,(int)offsetof(SourceRegister_obj,n),HX_HCSTRING("n","\x6e","\x00","\x00","\x00")},
	{hx::fsInt,(int)offsetof(SourceRegister_obj,o),HX_HCSTRING("o","\x6f","\x00","\x00","\x00")},
	{hx::fsObject /*::openfl::_internal::stage3D::_AGALConverter::ProgramType*/ ,(int)offsetof(SourceRegister_obj,programType),HX_HCSTRING("programType","\x5e","\xfb","\x2c","\xc4")},
	{hx::fsInt,(int)offsetof(SourceRegister_obj,q),HX_HCSTRING("q","\x71","\x00","\x00","\x00")},
	{hx::fsInt,(int)offsetof(SourceRegister_obj,s),HX_HCSTRING("s","\x73","\x00","\x00","\x00")},
	{hx::fsInt,(int)offsetof(SourceRegister_obj,sourceMask),HX_HCSTRING("sourceMask","\x67","\x27","\xba","\x70")},
	{hx::fsInt,(int)offsetof(SourceRegister_obj,type),HX_HCSTRING("type","\xba","\xf2","\x08","\x4d")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo *sStaticStorageInfo = 0;
#endif

static ::String sMemberFields[] = {
	HX_HCSTRING("d","\x64","\x00","\x00","\x00"),
	HX_HCSTRING("itype","\xa3","\xdb","\x1b","\xc2"),
	HX_HCSTRING("n","\x6e","\x00","\x00","\x00"),
	HX_HCSTRING("o","\x6f","\x00","\x00","\x00"),
	HX_HCSTRING("programType","\x5e","\xfb","\x2c","\xc4"),
	HX_HCSTRING("q","\x71","\x00","\x00","\x00"),
	HX_HCSTRING("s","\x73","\x00","\x00","\x00"),
	HX_HCSTRING("sourceMask","\x67","\x27","\xba","\x70"),
	HX_HCSTRING("type","\xba","\xf2","\x08","\x4d"),
	HX_HCSTRING("toGLSL","\xf9","\x58","\x08","\x7a"),
	::String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(SourceRegister_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(SourceRegister_obj::__mClass,"__mClass");
};

#endif

hx::Class SourceRegister_obj::__mClass;

static ::String sStaticFields[] = {
	HX_HCSTRING("parse","\x33","\x90","\x55","\xbd"),
	::String(null()) };

void SourceRegister_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("openfl._internal.stage3D._AGALConverter.SourceRegister","\x6d","\xc9","\x9f","\xcf");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &SourceRegister_obj::__GetStatic;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(sStaticFields);
	__mClass->mMembers = hx::Class_obj::dupFunctions(sMemberFields);
	__mClass->mCanCast = hx::TCanCast< SourceRegister_obj >;
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
