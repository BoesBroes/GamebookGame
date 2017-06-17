#include <hxcpp.h>

#ifndef INCLUDED_Reflect
#include <Reflect.h>
#endif
#ifndef INCLUDED_openfl__Vector_IVector
#include <openfl/_Vector/IVector.h>
#endif
#ifndef INCLUDED_openfl__Vector_ObjectVector
#include <openfl/_Vector/ObjectVector.h>
#endif
#ifndef INCLUDED_openfl_display3D__Program3D_Uniform
#include <openfl/display3D/_Program3D/Uniform.h>
#endif
#ifndef INCLUDED_openfl_display3D__Program3D_UniformMap
#include <openfl/display3D/_Program3D/UniformMap.h>
#endif
namespace openfl{
namespace display3D{
namespace _Program3D{

Void UniformMap_obj::__construct(Array< ::Dynamic > list)
{
{
	this->__uniforms = list;

	HX_BEGIN_LOCAL_FUNC_S0(hx::LocalFunc,_Function_1_1)
	int __ArgCount() const { return 2; }
	int run(::openfl::display3D::_Program3D::Uniform a,::openfl::display3D::_Program3D::Uniform b){
		{
			int tmp = a->regIndex;
			int tmp1 = b->regIndex;
			int tmp2 = ::Reflect_obj::compare(tmp,tmp1);
			return tmp2;
		}
		return null();
	}
	HX_END_LOCAL_FUNC2(return)

	this->__uniforms->sort( Dynamic(new _Function_1_1()));
	int total = (int)0;
	{
		int _g = (int)0;
		Array< ::Dynamic > _g1 = this->__uniforms;
		while((true)){
			bool tmp = (_g < _g1->length);
			bool tmp1 = !(tmp);
			if ((tmp1)){
				break;
			}
			::openfl::display3D::_Program3D::Uniform tmp2 = _g1->__get(_g).StaticCast< ::openfl::display3D::_Program3D::Uniform >();
			::openfl::display3D::_Program3D::Uniform uniform = tmp2;
			++(_g);
			int tmp3 = (uniform->regIndex + uniform->regCount);
			int tmp4 = total;
			bool tmp5 = (tmp3 > tmp4);
			if ((tmp5)){
				int tmp6 = (uniform->regIndex + uniform->regCount);
				total = tmp6;
			}
		}
	}
	::openfl::_Vector::ObjectVector tmp;
	{
		bool fixed = null();
		::openfl::_Vector::ObjectVector tmp1 = ::openfl::_Vector::ObjectVector_obj::__new(total,fixed,null());
		::openfl::_Vector::ObjectVector tmp2 = tmp1;
		tmp = tmp2;
	}
	this->__registerLookup = tmp;
	{
		int _g = (int)0;
		Array< ::Dynamic > _g1 = this->__uniforms;
		while((true)){
			bool tmp1 = (_g < _g1->length);
			bool tmp2 = !(tmp1);
			if ((tmp2)){
				break;
			}
			::openfl::display3D::_Program3D::Uniform tmp3 = _g1->__get(_g).StaticCast< ::openfl::display3D::_Program3D::Uniform >();
			::openfl::display3D::_Program3D::Uniform uniform = tmp3;
			++(_g);
			{
				int _g3 = (int)0;
				int _g2 = uniform->regCount;
				while((true)){
					bool tmp4 = (_g3 < _g2);
					bool tmp5 = !(tmp4);
					if ((tmp5)){
						break;
					}
					int tmp6 = (_g3)++;
					int i = tmp6;
					::openfl::_Vector::ObjectVector tmp7 = this->__registerLookup;
					int tmp8 = (uniform->regIndex + i);
					::openfl::display3D::_Program3D::Uniform tmp9 = uniform;
					::openfl::display3D::_Program3D::Uniform tmp10 = tmp7->set(tmp8,tmp9);
					tmp10;
				}
			}
		}
	}
	bool tmp1 = this->__allDirty = true;
	this->__anyDirty = tmp1;
}
;
	return null();
}

//UniformMap_obj::~UniformMap_obj() { }

Dynamic UniformMap_obj::__CreateEmpty() { return  new UniformMap_obj; }
hx::ObjectPtr< UniformMap_obj > UniformMap_obj::__new(Array< ::Dynamic > list)
{  hx::ObjectPtr< UniformMap_obj > _result_ = new UniformMap_obj();
	_result_->__construct(list);
	return _result_;}

Dynamic UniformMap_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< UniformMap_obj > _result_ = new UniformMap_obj();
	_result_->__construct(inArgs[0]);
	return _result_;}

Void UniformMap_obj::flush( ){
{
		bool tmp = this->__anyDirty;
		if ((tmp)){
			{
				int _g = (int)0;
				Array< ::Dynamic > _g1 = this->__uniforms;
				while((true)){
					bool tmp1 = (_g < _g1->length);
					bool tmp2 = !(tmp1);
					if ((tmp2)){
						break;
					}
					::openfl::display3D::_Program3D::Uniform tmp3 = _g1->__get(_g).StaticCast< ::openfl::display3D::_Program3D::Uniform >();
					::openfl::display3D::_Program3D::Uniform uniform = tmp3;
					++(_g);
					bool tmp4 = this->__allDirty;
					bool tmp5 = !(tmp4);
					bool tmp6;
					if ((tmp5)){
						tmp6 = uniform->isDirty;
					}
					else{
						tmp6 = true;
					}
					if ((tmp6)){
						uniform->flush();
						uniform->isDirty = false;
					}
				}
			}
			bool tmp1 = this->__allDirty = false;
			this->__anyDirty = tmp1;
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(UniformMap_obj,flush,(void))

Void UniformMap_obj::markAllDirty( ){
{
		this->__allDirty = true;
		this->__anyDirty = true;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(UniformMap_obj,markAllDirty,(void))

Void UniformMap_obj::markDirty( int start,int count){
{
		bool tmp = this->__allDirty;
		if ((tmp)){
			return null();
		}
		int tmp1 = (start + count);
		int end = tmp1;
		int tmp2 = end;
		::openfl::_Vector::ObjectVector tmp3 = this->__registerLookup;
		int tmp4 = tmp3->get_length();
		bool tmp5 = (tmp2 > tmp4);
		if ((tmp5)){
			::openfl::_Vector::ObjectVector tmp6 = this->__registerLookup;
			int tmp7 = tmp6->get_length();
			end = tmp7;
		}
		int index = start;
		while((true)){
			bool tmp6 = (index < end);
			bool tmp7 = !(tmp6);
			if ((tmp7)){
				break;
			}
			::openfl::_Vector::ObjectVector tmp8 = this->__registerLookup;
			int tmp9 = index;
			::openfl::display3D::_Program3D::Uniform tmp10 = tmp8->get(tmp9);
			::openfl::display3D::_Program3D::Uniform uniform = tmp10;
			bool tmp11 = (uniform != null());
			if ((tmp11)){
				uniform->isDirty = true;
				this->__anyDirty = true;
				int tmp12 = (uniform->regIndex + uniform->regCount);
				index = tmp12;
			}
			else{
				(index)++;
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(UniformMap_obj,markDirty,(void))


UniformMap_obj::UniformMap_obj()
{
}

void UniformMap_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(UniformMap);
	HX_MARK_MEMBER_NAME(__allDirty,"__allDirty");
	HX_MARK_MEMBER_NAME(__anyDirty,"__anyDirty");
	HX_MARK_MEMBER_NAME(__registerLookup,"__registerLookup");
	HX_MARK_MEMBER_NAME(__uniforms,"__uniforms");
	HX_MARK_END_CLASS();
}

void UniformMap_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(__allDirty,"__allDirty");
	HX_VISIT_MEMBER_NAME(__anyDirty,"__anyDirty");
	HX_VISIT_MEMBER_NAME(__registerLookup,"__registerLookup");
	HX_VISIT_MEMBER_NAME(__uniforms,"__uniforms");
}

Dynamic UniformMap_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"flush") ) { return flush_dyn(); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"markDirty") ) { return markDirty_dyn(); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"__allDirty") ) { return __allDirty; }
		if (HX_FIELD_EQ(inName,"__anyDirty") ) { return __anyDirty; }
		if (HX_FIELD_EQ(inName,"__uniforms") ) { return __uniforms; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"markAllDirty") ) { return markAllDirty_dyn(); }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"__registerLookup") ) { return __registerLookup; }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic UniformMap_obj::__SetField(const ::String &inName,const Dynamic &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 10:
		if (HX_FIELD_EQ(inName,"__allDirty") ) { __allDirty=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"__anyDirty") ) { __anyDirty=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"__uniforms") ) { __uniforms=inValue.Cast< Array< ::Dynamic > >(); return inValue; }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"__registerLookup") ) { __registerLookup=inValue.Cast< ::openfl::_Vector::ObjectVector >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void UniformMap_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("__allDirty","\x51","\x82","\xec","\x75"));
	outFields->push(HX_HCSTRING("__anyDirty","\xa6","\x20","\xbb","\xfb"));
	outFields->push(HX_HCSTRING("__registerLookup","\x5d","\xb4","\x36","\x5c"));
	outFields->push(HX_HCSTRING("__uniforms","\xdf","\x3f","\x8d","\xa5"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsBool,(int)offsetof(UniformMap_obj,__allDirty),HX_HCSTRING("__allDirty","\x51","\x82","\xec","\x75")},
	{hx::fsBool,(int)offsetof(UniformMap_obj,__anyDirty),HX_HCSTRING("__anyDirty","\xa6","\x20","\xbb","\xfb")},
	{hx::fsObject /*::openfl::_Vector::ObjectVector*/ ,(int)offsetof(UniformMap_obj,__registerLookup),HX_HCSTRING("__registerLookup","\x5d","\xb4","\x36","\x5c")},
	{hx::fsObject /*Array< ::Dynamic >*/ ,(int)offsetof(UniformMap_obj,__uniforms),HX_HCSTRING("__uniforms","\xdf","\x3f","\x8d","\xa5")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo *sStaticStorageInfo = 0;
#endif

static ::String sMemberFields[] = {
	HX_HCSTRING("__allDirty","\x51","\x82","\xec","\x75"),
	HX_HCSTRING("__anyDirty","\xa6","\x20","\xbb","\xfb"),
	HX_HCSTRING("__registerLookup","\x5d","\xb4","\x36","\x5c"),
	HX_HCSTRING("__uniforms","\xdf","\x3f","\x8d","\xa5"),
	HX_HCSTRING("flush","\xc4","\x62","\x9b","\x02"),
	HX_HCSTRING("markAllDirty","\x5e","\x60","\x3e","\x4b"),
	HX_HCSTRING("markDirty","\xc5","\x30","\xa3","\x36"),
	::String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(UniformMap_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(UniformMap_obj::__mClass,"__mClass");
};

#endif

hx::Class UniformMap_obj::__mClass;

void UniformMap_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("openfl.display3D._Program3D.UniformMap","\x67","\x0d","\x51","\x34");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = hx::Class_obj::dupFunctions(sMemberFields);
	__mClass->mCanCast = hx::TCanCast< UniformMap_obj >;
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
} // end namespace display3D
} // end namespace _Program3D
