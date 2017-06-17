#include <hxcpp.h>

#ifndef INCLUDED_StringBuf
#include <StringBuf.h>
#endif
#ifndef INCLUDED_haxe_IMap
#include <haxe/IMap.h>
#endif
#ifndef INCLUDED_haxe_Log
#include <haxe/Log.h>
#endif
#ifndef INCLUDED_haxe_ds_ObjectMap
#include <haxe/ds/ObjectMap.h>
#endif
#ifndef INCLUDED_openfl__internal_stage3D_AGALConverter
#include <openfl/_internal/stage3D/AGALConverter.h>
#endif
#ifndef INCLUDED_openfl__internal_stage3D_RegisterMap
#include <openfl/_internal/stage3D/RegisterMap.h>
#endif
#ifndef INCLUDED_openfl__internal_stage3D__AGALConverter_DestRegister
#include <openfl/_internal/stage3D/_AGALConverter/DestRegister.h>
#endif
#ifndef INCLUDED_openfl__internal_stage3D__AGALConverter_ProgramType
#include <openfl/_internal/stage3D/_AGALConverter/ProgramType.h>
#endif
#ifndef INCLUDED_openfl__internal_stage3D__AGALConverter_RegisterMapEntry
#include <openfl/_internal/stage3D/_AGALConverter/RegisterMapEntry.h>
#endif
#ifndef INCLUDED_openfl__internal_stage3D__AGALConverter_RegisterUsage
#include <openfl/_internal/stage3D/_AGALConverter/RegisterUsage.h>
#endif
#ifndef INCLUDED_openfl__internal_stage3D__AGALConverter_SamplerRegister
#include <openfl/_internal/stage3D/_AGALConverter/SamplerRegister.h>
#endif
#ifndef INCLUDED_openfl__internal_stage3D__AGALConverter_SourceRegister
#include <openfl/_internal/stage3D/_AGALConverter/SourceRegister.h>
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

Void RegisterMap_obj::__construct()
{
HX_STACK_FRAME("openfl._internal.stage3D.RegisterMap","new",0xb81e399c,"openfl._internal.stage3D.RegisterMap.new","openfl/_internal/stage3D/AGALConverter.hx",585,0x0a35cc61)
HX_STACK_THIS(this)
{
	HX_STACK_LINE(588)
	this->mEntries = Array_obj< ::Dynamic >::__new();
}
;
	return null();
}

//RegisterMap_obj::~RegisterMap_obj() { }

Dynamic RegisterMap_obj::__CreateEmpty() { return  new RegisterMap_obj; }
hx::ObjectPtr< RegisterMap_obj > RegisterMap_obj::__new()
{  hx::ObjectPtr< RegisterMap_obj > _result_ = new RegisterMap_obj();
	_result_->__construct();
	return _result_;}

Dynamic RegisterMap_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< RegisterMap_obj > _result_ = new RegisterMap_obj();
	_result_->__construct();
	return _result_;}

Void RegisterMap_obj::add( int type,::String name,int number,::openfl::_internal::stage3D::_AGALConverter::RegisterUsage usage){
{
		HX_STACK_FRAME("openfl._internal.stage3D.RegisterMap","add",0xb8145b5d,"openfl._internal.stage3D.RegisterMap.add","openfl/_internal/stage3D/AGALConverter.hx",598,0x0a35cc61)
		HX_STACK_THIS(this)
		HX_STACK_ARG(type,"type")
		HX_STACK_ARG(name,"name")
		HX_STACK_ARG(number,"number")
		HX_STACK_ARG(usage,"usage")
		HX_STACK_LINE(600)
		{
			HX_STACK_LINE(600)
			int _g = (int)0;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(600)
			Array< ::Dynamic > _g1 = this->mEntries;		HX_STACK_VAR(_g1,"_g1");
			HX_STACK_LINE(600)
			while((true)){
				HX_STACK_LINE(600)
				bool tmp = (_g < _g1->length);		HX_STACK_VAR(tmp,"tmp");
				HX_STACK_LINE(600)
				bool tmp1 = !(tmp);		HX_STACK_VAR(tmp1,"tmp1");
				HX_STACK_LINE(600)
				if ((tmp1)){
					HX_STACK_LINE(600)
					break;
				}
				HX_STACK_LINE(600)
				::openfl::_internal::stage3D::_AGALConverter::RegisterMapEntry tmp2 = _g1->__get(_g).StaticCast< ::openfl::_internal::stage3D::_AGALConverter::RegisterMapEntry >();		HX_STACK_VAR(tmp2,"tmp2");
				HX_STACK_LINE(600)
				::openfl::_internal::stage3D::_AGALConverter::RegisterMapEntry entry = tmp2;		HX_STACK_VAR(entry,"entry");
				HX_STACK_LINE(600)
				++(_g);
				HX_STACK_LINE(602)
				bool tmp3 = (entry->type == type);		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(602)
				bool tmp4 = tmp3;		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(602)
				bool tmp5;		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(602)
				if ((tmp4)){
					HX_STACK_LINE(602)
					tmp5 = (entry->name == name);
				}
				else{
					HX_STACK_LINE(602)
					tmp5 = false;
				}
				HX_STACK_LINE(602)
				bool tmp6;		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(602)
				if ((tmp5)){
					HX_STACK_LINE(602)
					tmp6 = (entry->number == number);
				}
				else{
					HX_STACK_LINE(602)
					tmp6 = false;
				}
				HX_STACK_LINE(602)
				if ((tmp6)){
					HX_STACK_LINE(604)
					bool tmp7 = (entry->usage != usage);		HX_STACK_VAR(tmp7,"tmp7");
					HX_STACK_LINE(604)
					if ((tmp7)){
						HX_STACK_LINE(606)
						::openfl::errors::IllegalOperationError tmp8 = ::openfl::errors::IllegalOperationError_obj::__new(HX_HCSTRING("Cannot use register in multiple ways yet (mat4/vec4)","\x5e","\x30","\xe0","\x74"));		HX_STACK_VAR(tmp8,"tmp8");
						HX_STACK_LINE(606)
						HX_STACK_DO_THROW(tmp8);
					}
					HX_STACK_LINE(610)
					return null();
				}
			}
		}
		HX_STACK_LINE(616)
		::openfl::_internal::stage3D::_AGALConverter::RegisterMapEntry tmp = ::openfl::_internal::stage3D::_AGALConverter::RegisterMapEntry_obj::__new();		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(616)
		::openfl::_internal::stage3D::_AGALConverter::RegisterMapEntry entry = tmp;		HX_STACK_VAR(entry,"entry");
		HX_STACK_LINE(617)
		entry->type = type;
		HX_STACK_LINE(618)
		entry->name = name;
		HX_STACK_LINE(619)
		entry->number = number;
		HX_STACK_LINE(620)
		entry->usage = usage;
		HX_STACK_LINE(621)
		::openfl::_internal::stage3D::_AGALConverter::RegisterMapEntry tmp1 = entry;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(621)
		this->mEntries->push(tmp1);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC4(RegisterMap_obj,add,(void))

Void RegisterMap_obj::addDR( ::openfl::_internal::stage3D::_AGALConverter::DestRegister dr,::openfl::_internal::stage3D::_AGALConverter::RegisterUsage usage){
{
		HX_STACK_FRAME("openfl._internal.stage3D.RegisterMap","addDR",0x2a67e82b,"openfl._internal.stage3D.RegisterMap.addDR","openfl/_internal/stage3D/AGALConverter.hx",626,0x0a35cc61)
		HX_STACK_THIS(this)
		HX_STACK_ARG(dr,"dr")
		HX_STACK_ARG(usage,"usage")
		HX_STACK_LINE(628)
		int tmp = dr->type;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(628)
		::String tmp1 = dr->toGLSL(false);		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(628)
		int tmp2 = dr->n;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(628)
		::openfl::_internal::stage3D::_AGALConverter::RegisterUsage tmp3 = usage;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(628)
		this->add(tmp,tmp1,tmp2,tmp3);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(RegisterMap_obj,addDR,(void))

Void RegisterMap_obj::addSaR( ::openfl::_internal::stage3D::_AGALConverter::SamplerRegister sr,::openfl::_internal::stage3D::_AGALConverter::RegisterUsage usage){
{
		HX_STACK_FRAME("openfl._internal.stage3D.RegisterMap","addSaR",0xf08eaca7,"openfl._internal.stage3D.RegisterMap.addSaR","openfl/_internal/stage3D/AGALConverter.hx",633,0x0a35cc61)
		HX_STACK_THIS(this)
		HX_STACK_ARG(sr,"sr")
		HX_STACK_ARG(usage,"usage")
		HX_STACK_LINE(635)
		int tmp = sr->type;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(635)
		::String tmp1 = sr->toGLSL();		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(635)
		int tmp2 = sr->n;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(635)
		::openfl::_internal::stage3D::_AGALConverter::RegisterUsage tmp3 = usage;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(635)
		this->add(tmp,tmp1,tmp2,tmp3);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(RegisterMap_obj,addSaR,(void))

Void RegisterMap_obj::addSR( ::openfl::_internal::stage3D::_AGALConverter::SourceRegister sr,::openfl::_internal::stage3D::_AGALConverter::RegisterUsage usage,hx::Null< int >  __o_offset){
int offset = __o_offset.Default(0);
	HX_STACK_FRAME("openfl._internal.stage3D.RegisterMap","addSR",0x2a67f53c,"openfl._internal.stage3D.RegisterMap.addSR","openfl/_internal/stage3D/AGALConverter.hx",640,0x0a35cc61)
	HX_STACK_THIS(this)
	HX_STACK_ARG(sr,"sr")
	HX_STACK_ARG(usage,"usage")
	HX_STACK_ARG(offset,"offset")
{
		HX_STACK_LINE(642)
		bool tmp = (sr->d != (int)0);		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(642)
		if ((tmp)){
			HX_STACK_LINE(644)
			int tmp1 = sr->itype;		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(644)
			int tmp2 = sr->itype;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(644)
			::openfl::_internal::stage3D::_AGALConverter::ProgramType tmp3 = sr->programType;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(644)
			::String tmp4 = ::openfl::_internal::stage3D::AGALConverter_obj::prefixFromType(tmp2,tmp3);		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(644)
			int tmp5 = sr->n;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(644)
			::String tmp6 = (tmp4 + tmp5);		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(644)
			int tmp7 = sr->n;		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(644)
			this->add(tmp1,tmp6,tmp7,::openfl::_internal::stage3D::_AGALConverter::RegisterUsage_obj::VECTOR_4);
			HX_STACK_LINE(645)
			int tmp8 = sr->type;		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(645)
			int tmp9 = sr->type;		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(645)
			::openfl::_internal::stage3D::_AGALConverter::ProgramType tmp10 = sr->programType;		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(645)
			::String tmp11 = ::openfl::_internal::stage3D::AGALConverter_obj::prefixFromType(tmp9,tmp10);		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(645)
			int tmp12 = sr->o;		HX_STACK_VAR(tmp12,"tmp12");
			HX_STACK_LINE(645)
			::String tmp13 = (tmp11 + tmp12);		HX_STACK_VAR(tmp13,"tmp13");
			HX_STACK_LINE(645)
			int tmp14 = sr->o;		HX_STACK_VAR(tmp14,"tmp14");
			HX_STACK_LINE(645)
			this->add(tmp8,tmp13,tmp14,::openfl::_internal::stage3D::_AGALConverter::RegisterUsage_obj::VECTOR_4_ARRAY);
			HX_STACK_LINE(646)
			return null();
		}
		HX_STACK_LINE(650)
		int tmp1 = sr->type;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(650)
		int tmp2 = offset;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(650)
		::String tmp3 = sr->toGLSL(false,tmp2);		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(650)
		int tmp4 = (sr->n + offset);		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(650)
		::openfl::_internal::stage3D::_AGALConverter::RegisterUsage tmp5 = usage;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(650)
		this->add(tmp1,tmp3,tmp4,tmp5);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC3(RegisterMap_obj,addSR,(void))

::openfl::_internal::stage3D::_AGALConverter::RegisterUsage RegisterMap_obj::getRegisterUsage( ::openfl::_internal::stage3D::_AGALConverter::SourceRegister sr){
	HX_STACK_FRAME("openfl._internal.stage3D.RegisterMap","getRegisterUsage",0x73804a8c,"openfl._internal.stage3D.RegisterMap.getRegisterUsage","openfl/_internal/stage3D/AGALConverter.hx",655,0x0a35cc61)
	HX_STACK_THIS(this)
	HX_STACK_ARG(sr,"sr")
	HX_STACK_LINE(657)
	bool tmp = (sr->d != (int)0);		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(657)
	if ((tmp)){
		HX_STACK_LINE(659)
		return ::openfl::_internal::stage3D::_AGALConverter::RegisterUsage_obj::VECTOR_4_ARRAY;
	}
	HX_STACK_LINE(663)
	int tmp1 = sr->type;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(663)
	::String tmp2 = sr->toGLSL(false,null());		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(663)
	int tmp3 = sr->n;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(663)
	::openfl::_internal::stage3D::_AGALConverter::RegisterUsage tmp4 = this->getUsage(tmp1,tmp2,tmp3);		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(663)
	return tmp4;
}


HX_DEFINE_DYNAMIC_FUNC1(RegisterMap_obj,getRegisterUsage,return )

::openfl::_internal::stage3D::_AGALConverter::RegisterUsage RegisterMap_obj::getUsage( int type,::String name,int number){
	HX_STACK_FRAME("openfl._internal.stage3D.RegisterMap","getUsage",0x4c4909ef,"openfl._internal.stage3D.RegisterMap.getUsage","openfl/_internal/stage3D/AGALConverter.hx",668,0x0a35cc61)
	HX_STACK_THIS(this)
	HX_STACK_ARG(type,"type")
	HX_STACK_ARG(name,"name")
	HX_STACK_ARG(number,"number")
	HX_STACK_LINE(670)
	{
		HX_STACK_LINE(670)
		int _g = (int)0;		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(670)
		Array< ::Dynamic > _g1 = this->mEntries;		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(670)
		while((true)){
			HX_STACK_LINE(670)
			bool tmp = (_g < _g1->length);		HX_STACK_VAR(tmp,"tmp");
			HX_STACK_LINE(670)
			bool tmp1 = !(tmp);		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(670)
			if ((tmp1)){
				HX_STACK_LINE(670)
				break;
			}
			HX_STACK_LINE(670)
			::openfl::_internal::stage3D::_AGALConverter::RegisterMapEntry tmp2 = _g1->__get(_g).StaticCast< ::openfl::_internal::stage3D::_AGALConverter::RegisterMapEntry >();		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(670)
			::openfl::_internal::stage3D::_AGALConverter::RegisterMapEntry entry = tmp2;		HX_STACK_VAR(entry,"entry");
			HX_STACK_LINE(670)
			++(_g);
			HX_STACK_LINE(672)
			bool tmp3 = (entry->type == type);		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(672)
			bool tmp4 = tmp3;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(672)
			bool tmp5;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(672)
			if ((tmp4)){
				HX_STACK_LINE(672)
				tmp5 = (entry->name == name);
			}
			else{
				HX_STACK_LINE(672)
				tmp5 = false;
			}
			HX_STACK_LINE(672)
			bool tmp6;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(672)
			if ((tmp5)){
				HX_STACK_LINE(672)
				tmp6 = (entry->number == number);
			}
			else{
				HX_STACK_LINE(672)
				tmp6 = false;
			}
			HX_STACK_LINE(672)
			if ((tmp6)){
				HX_STACK_LINE(674)
				::openfl::_internal::stage3D::_AGALConverter::RegisterUsage tmp7 = entry->usage;		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(674)
				return tmp7;
			}
		}
	}
	HX_STACK_LINE(680)
	return ::openfl::_internal::stage3D::_AGALConverter::RegisterUsage_obj::UNUSED;
}


HX_DEFINE_DYNAMIC_FUNC3(RegisterMap_obj,getUsage,return )

::String RegisterMap_obj::toGLSL( bool tempRegistersOnly){
	HX_STACK_FRAME("openfl._internal.stage3D.RegisterMap","toGLSL",0xcb8e5d3d,"openfl._internal.stage3D.RegisterMap.toGLSL","openfl/_internal/stage3D/AGALConverter.hx",685,0x0a35cc61)
	HX_STACK_THIS(this)
	HX_STACK_ARG(tempRegistersOnly,"tempRegistersOnly")

	HX_BEGIN_LOCAL_FUNC_S0(hx::LocalFunc,_Function_1_1)
	int __ArgCount() const { return 2; }
	int run(::openfl::_internal::stage3D::_AGALConverter::RegisterMapEntry a,::openfl::_internal::stage3D::_AGALConverter::RegisterMapEntry b){
		HX_STACK_FRAME("*","_Function_1_1",0x5200ed37,"*._Function_1_1","openfl/_internal/stage3D/AGALConverter.hx",687,0x0a35cc61)
		HX_STACK_ARG(a,"a")
		HX_STACK_ARG(b,"b")
		{
			HX_STACK_LINE(689)
			int tmp = (a->number - b->number);		HX_STACK_VAR(tmp,"tmp");
			HX_STACK_LINE(689)
			return tmp;
		}
		return null();
	}
	HX_END_LOCAL_FUNC2(return)

	HX_STACK_LINE(687)
	this->mEntries->sort( Dynamic(new _Function_1_1()));
	HX_STACK_LINE(693)
	::haxe::ds::ObjectMap tmp;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(693)
	{
		HX_STACK_LINE(693)
		::haxe::ds::ObjectMap tmp1 = ::haxe::ds::ObjectMap_obj::__new();		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(693)
		::haxe::ds::ObjectMap tmp2 = tmp1;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(693)
		tmp = tmp2;
	}
	HX_STACK_LINE(693)
	::haxe::ds::ObjectMap arrayCount = tmp;		HX_STACK_VAR(arrayCount,"arrayCount");
	HX_STACK_LINE(694)
	::openfl::_internal::stage3D::_AGALConverter::RegisterMapEntry entry;		HX_STACK_VAR(entry,"entry");
	HX_STACK_LINE(696)
	{
		HX_STACK_LINE(696)
		int _g1 = (int)0;		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(696)
		int tmp1 = this->mEntries->length;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(696)
		int _g = tmp1;		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(696)
		while((true)){
			HX_STACK_LINE(696)
			bool tmp2 = (_g1 < _g);		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(696)
			bool tmp3 = !(tmp2);		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(696)
			if ((tmp3)){
				HX_STACK_LINE(696)
				break;
			}
			HX_STACK_LINE(696)
			int tmp4 = (_g1)++;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(696)
			int i = tmp4;		HX_STACK_VAR(i,"i");
			HX_STACK_LINE(698)
			::openfl::_internal::stage3D::_AGALConverter::RegisterMapEntry tmp5 = this->mEntries->__get(i).StaticCast< ::openfl::_internal::stage3D::_AGALConverter::RegisterMapEntry >();		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(698)
			entry = tmp5;
			HX_STACK_LINE(700)
			bool tmp6 = (entry->usage == ::openfl::_internal::stage3D::_AGALConverter::RegisterUsage_obj::VECTOR_4_ARRAY);		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(700)
			if ((tmp6)){
				HX_STACK_LINE(703)
				int tmp7 = i;		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(703)
				int tmp8 = this->mEntries->length;		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(703)
				int tmp9 = (tmp8 - (int)1);		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(703)
				bool tmp10 = (tmp7 < tmp9);		HX_STACK_VAR(tmp10,"tmp10");
				HX_STACK_LINE(703)
				if ((tmp10)){
					HX_STACK_LINE(705)
					int tmp11 = (i + (int)1);		HX_STACK_VAR(tmp11,"tmp11");
					HX_STACK_LINE(705)
					::openfl::_internal::stage3D::_AGALConverter::RegisterMapEntry tmp12 = this->mEntries->__get(tmp11).StaticCast< ::openfl::_internal::stage3D::_AGALConverter::RegisterMapEntry >();		HX_STACK_VAR(tmp12,"tmp12");
					HX_STACK_LINE(705)
					int tmp13 = tmp12->number;		HX_STACK_VAR(tmp13,"tmp13");
					HX_STACK_LINE(705)
					int tmp14 = entry->number;		HX_STACK_VAR(tmp14,"tmp14");
					HX_STACK_LINE(705)
					int tmp15 = (tmp13 - tmp14);		HX_STACK_VAR(tmp15,"tmp15");
					HX_STACK_LINE(705)
					int v = tmp15;		HX_STACK_VAR(v,"v");
					HX_STACK_LINE(705)
					::openfl::_internal::stage3D::_AGALConverter::RegisterMapEntry tmp16 = entry;		HX_STACK_VAR(tmp16,"tmp16");
					HX_STACK_LINE(705)
					int tmp17 = v;		HX_STACK_VAR(tmp17,"tmp17");
					HX_STACK_LINE(705)
					arrayCount->set(tmp16,tmp17);
					HX_STACK_LINE(705)
					v;
				}
				else{
					HX_STACK_LINE(709)
					int tmp11;		HX_STACK_VAR(tmp11,"tmp11");
					HX_STACK_LINE(709)
					{
						HX_STACK_LINE(709)
						::openfl::_internal::stage3D::_AGALConverter::RegisterMapEntry tmp12 = entry;		HX_STACK_VAR(tmp12,"tmp12");
						HX_STACK_LINE(709)
						arrayCount->set(tmp12,(int)128);
						HX_STACK_LINE(709)
						tmp11 = (int)128;
					}
					HX_STACK_LINE(709)
					tmp11;
				}
			}
		}
	}

	HX_BEGIN_LOCAL_FUNC_S0(hx::LocalFunc,_Function_1_2)
	int __ArgCount() const { return 2; }
	int run(::openfl::_internal::stage3D::_AGALConverter::RegisterMapEntry a,::openfl::_internal::stage3D::_AGALConverter::RegisterMapEntry b){
		HX_STACK_FRAME("*","_Function_1_2",0x5200ed38,"*._Function_1_2","openfl/_internal/stage3D/AGALConverter.hx",717,0x0a35cc61)
		HX_STACK_ARG(a,"a")
		HX_STACK_ARG(b,"b")
		{
			HX_STACK_LINE(719)
			int tmp1;		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(719)
			tmp1 = hx::TCast< ::Int >::cast(a->type);
			HX_STACK_LINE(719)
			int tmp2;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(719)
			tmp2 = hx::TCast< ::Int >::cast(b->type);
			HX_STACK_LINE(719)
			int tmp3 = (tmp1 - tmp2);		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(719)
			return tmp3;
		}
		return null();
	}
	HX_END_LOCAL_FUNC2(return)

	HX_STACK_LINE(717)
	this->mEntries->sort( Dynamic(new _Function_1_2()));
	HX_STACK_LINE(723)
	::StringBuf tmp1 = ::StringBuf_obj::__new();		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(723)
	::StringBuf sb = tmp1;		HX_STACK_VAR(sb,"sb");
	HX_STACK_LINE(725)
	{
		HX_STACK_LINE(725)
		int _g1 = (int)0;		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(725)
		int tmp2 = this->mEntries->length;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(725)
		int _g = tmp2;		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(725)
		while((true)){
			HX_STACK_LINE(725)
			bool tmp3 = (_g1 < _g);		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(725)
			bool tmp4 = !(tmp3);		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(725)
			if ((tmp4)){
				HX_STACK_LINE(725)
				break;
			}
			HX_STACK_LINE(725)
			int tmp5 = (_g1)++;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(725)
			int i = tmp5;		HX_STACK_VAR(i,"i");
			HX_STACK_LINE(727)
			::openfl::_internal::stage3D::_AGALConverter::RegisterMapEntry tmp6 = this->mEntries->__get(i).StaticCast< ::openfl::_internal::stage3D::_AGALConverter::RegisterMapEntry >();		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(727)
			entry = tmp6;
			HX_STACK_LINE(731)
			bool tmp7 = tempRegistersOnly;		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(731)
			bool tmp8 = tmp7;		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(731)
			bool tmp9;		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(731)
			if ((tmp8)){
				HX_STACK_LINE(731)
				tmp9 = (entry->type != (int)2);
			}
			else{
				HX_STACK_LINE(731)
				tmp9 = false;
			}
			HX_STACK_LINE(731)
			bool tmp10 = !(tmp9);		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(731)
			bool tmp11;		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(731)
			if ((tmp10)){
				HX_STACK_LINE(731)
				bool tmp12 = tempRegistersOnly;		HX_STACK_VAR(tmp12,"tmp12");
				HX_STACK_LINE(731)
				bool tmp13 = tmp12;		HX_STACK_VAR(tmp13,"tmp13");
				HX_STACK_LINE(731)
				bool tmp14 = tmp13;		HX_STACK_VAR(tmp14,"tmp14");
				HX_STACK_LINE(731)
				bool tmp15 = !(tmp14);		HX_STACK_VAR(tmp15,"tmp15");
				HX_STACK_LINE(731)
				bool tmp16 = tmp15;		HX_STACK_VAR(tmp16,"tmp16");
				HX_STACK_LINE(731)
				bool tmp17 = tmp16;		HX_STACK_VAR(tmp17,"tmp17");
				HX_STACK_LINE(731)
				if ((tmp17)){
					HX_STACK_LINE(731)
					tmp11 = (entry->type == (int)2);
				}
				else{
					HX_STACK_LINE(731)
					tmp11 = false;
				}
			}
			else{
				HX_STACK_LINE(731)
				tmp11 = true;
			}
			HX_STACK_LINE(731)
			if ((tmp11)){
				HX_STACK_LINE(733)
				continue;
			}
			HX_STACK_LINE(738)
			bool tmp12 = (entry->type == (int)3);		HX_STACK_VAR(tmp12,"tmp12");
			HX_STACK_LINE(738)
			if ((tmp12)){
				HX_STACK_LINE(740)
				continue;
			}
			HX_STACK_LINE(744)
			{
				HX_STACK_LINE(744)
				int _g2 = entry->type;		HX_STACK_VAR(_g2,"_g2");
				HX_STACK_LINE(744)
				int tmp13 = _g2;		HX_STACK_VAR(tmp13,"tmp13");
				HX_STACK_LINE(744)
				switch( (int)(tmp13)){
					case (int)0: {
						HX_STACK_LINE(749)
						sb->add(HX_HCSTRING("attribute ","\x84","\xa8","\x71","\x97"));
					}
					;break;
					case (int)1: {
						HX_STACK_LINE(754)
						sb->add(HX_HCSTRING("uniform ","\x6c","\xcc","\x54","\x02"));
					}
					;break;
					case (int)2: {
						HX_STACK_LINE(758)
						sb->add(HX_HCSTRING("\t","\x09","\x00","\x00","\x00"));
					}
					;break;
					case (int)3: {
					}
					;break;
					case (int)4: {
						HX_STACK_LINE(764)
						sb->add(HX_HCSTRING("varying ","\xb0","\x25","\xc9","\xa4"));
					}
					;break;
					case (int)5: {
						HX_STACK_LINE(768)
						sb->add(HX_HCSTRING("uniform ","\x6c","\xcc","\x54","\x02"));
					}
					;break;
					default: {
						HX_STACK_LINE(772)
						::openfl::errors::IllegalOperationError tmp14 = ::openfl::errors::IllegalOperationError_obj::__new(null());		HX_STACK_VAR(tmp14,"tmp14");
						HX_STACK_LINE(772)
						HX_STACK_DO_THROW(tmp14);
					}
				}
			}
			HX_STACK_LINE(776)
			{
				HX_STACK_LINE(776)
				::openfl::_internal::stage3D::_AGALConverter::RegisterUsage _g2 = entry->usage;		HX_STACK_VAR(_g2,"_g2");
				HX_STACK_LINE(776)
				switch( (int)(_g2->__Index())){
					case (int)1: {
						HX_STACK_LINE(780)
						sb->add(HX_HCSTRING("vec4 ","\xc0","\x4c","\x56","\x34"));
					}
					;break;
					case (int)6: {
						HX_STACK_LINE(784)
						sb->add(HX_HCSTRING("vec4 ","\xc0","\x4c","\x56","\x34"));
					}
					;break;
					case (int)2: {
						HX_STACK_LINE(788)
						sb->add(HX_HCSTRING("mat4 ","\x0c","\x20","\x23","\x03"));
					}
					;break;
					case (int)3: {
						HX_STACK_LINE(792)
						sb->add(HX_HCSTRING("sampler2D ","\x06","\x3c","\x4f","\x7c"));
					}
					;break;
					case (int)5: {
						HX_STACK_LINE(796)
						sb->add(HX_HCSTRING("samplerCube ","\x63","\x87","\x00","\x86"));
					}
					;break;
					case (int)0: {
						HX_STACK_LINE(800)
						Dynamic tmp13 = hx::SourceInfo(HX_HCSTRING("AGALConverter.hx","\x8f","\x36","\xcd","\xe2"),800,HX_HCSTRING("openfl._internal.stage3D.RegisterMap","\xaa","\x7b","\xea","\xb0"),HX_HCSTRING("toGLSL","\xf9","\x58","\x08","\x7a"));		HX_STACK_VAR(tmp13,"tmp13");
						HX_STACK_LINE(800)
						::haxe::Log_obj::trace(HX_HCSTRING("Missing switch patten: RegisterUsage.UNUSED","\x38","\x09","\xf6","\x02"),tmp13);
					}
					;break;
					case (int)4: {
						HX_STACK_LINE(804)
						Dynamic tmp13 = hx::SourceInfo(HX_HCSTRING("AGALConverter.hx","\x8f","\x36","\xcd","\xe2"),804,HX_HCSTRING("openfl._internal.stage3D.RegisterMap","\xaa","\x7b","\xea","\xb0"),HX_HCSTRING("toGLSL","\xf9","\x58","\x08","\x7a"));		HX_STACK_VAR(tmp13,"tmp13");
						HX_STACK_LINE(804)
						::haxe::Log_obj::trace(HX_HCSTRING("Missing switch patten: RegisterUsage.SAMPLER_2D_ALPHA","\xea","\xff","\x93","\x8e"),tmp13);
					}
					;break;
				}
			}
			HX_STACK_LINE(808)
			bool tmp13 = (entry->usage == ::openfl::_internal::stage3D::_AGALConverter::RegisterUsage_obj::SAMPLER_2D_ALPHA);		HX_STACK_VAR(tmp13,"tmp13");
			HX_STACK_LINE(808)
			if ((tmp13)){
				HX_STACK_LINE(810)
				sb->add(HX_HCSTRING("sampler2D ","\x06","\x3c","\x4f","\x7c"));
				HX_STACK_LINE(811)
				::String tmp14 = entry->name;		HX_STACK_VAR(tmp14,"tmp14");
				HX_STACK_LINE(811)
				sb->add(tmp14);
				HX_STACK_LINE(812)
				sb->add(HX_HCSTRING(";\n","\x6f","\x33","\x00","\x00"));
				HX_STACK_LINE(814)
				sb->add(HX_HCSTRING("uniform ","\x6c","\xcc","\x54","\x02"));
				HX_STACK_LINE(815)
				sb->add(HX_HCSTRING("sampler2D ","\x06","\x3c","\x4f","\x7c"));
				HX_STACK_LINE(816)
				::String tmp15 = (entry->name + HX_HCSTRING("_alpha","\x9f","\xee","\x7d","\x1d"));		HX_STACK_VAR(tmp15,"tmp15");
				HX_STACK_LINE(816)
				sb->add(tmp15);
				HX_STACK_LINE(817)
				sb->add(HX_HCSTRING(";\n","\x6f","\x33","\x00","\x00"));
			}
			else{
				HX_STACK_LINE(819)
				bool tmp14 = (entry->usage == ::openfl::_internal::stage3D::_AGALConverter::RegisterUsage_obj::VECTOR_4_ARRAY);		HX_STACK_VAR(tmp14,"tmp14");
				HX_STACK_LINE(819)
				if ((tmp14)){
					HX_STACK_LINE(821)
					::String tmp15 = (entry->name + HX_HCSTRING("[","\x5b","\x00","\x00","\x00"));		HX_STACK_VAR(tmp15,"tmp15");
					HX_STACK_LINE(821)
					::openfl::_internal::stage3D::_AGALConverter::RegisterMapEntry tmp16 = entry;		HX_STACK_VAR(tmp16,"tmp16");
					HX_STACK_LINE(821)
					Dynamic tmp17 = arrayCount->get(tmp16);		HX_STACK_VAR(tmp17,"tmp17");
					HX_STACK_LINE(821)
					Dynamic tmp18 = tmp17;		HX_STACK_VAR(tmp18,"tmp18");
					HX_STACK_LINE(821)
					::String tmp19 = (tmp15 + tmp18);		HX_STACK_VAR(tmp19,"tmp19");
					HX_STACK_LINE(821)
					::String tmp20 = (tmp19 + HX_HCSTRING("]","\x5d","\x00","\x00","\x00"));		HX_STACK_VAR(tmp20,"tmp20");
					HX_STACK_LINE(821)
					sb->add(tmp20);
					HX_STACK_LINE(822)
					sb->add(HX_HCSTRING(";\n","\x6f","\x33","\x00","\x00"));
				}
				else{
					HX_STACK_LINE(826)
					::String tmp15 = entry->name;		HX_STACK_VAR(tmp15,"tmp15");
					HX_STACK_LINE(826)
					sb->add(tmp15);
					HX_STACK_LINE(827)
					sb->add(HX_HCSTRING(";\n","\x6f","\x33","\x00","\x00"));
				}
			}
		}
	}
	HX_STACK_LINE(833)
	::String tmp2 = sb->b->join(HX_HCSTRING("","\x00","\x00","\x00","\x00"));		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(833)
	return tmp2;
}


HX_DEFINE_DYNAMIC_FUNC1(RegisterMap_obj,toGLSL,return )


RegisterMap_obj::RegisterMap_obj()
{
}

void RegisterMap_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(RegisterMap);
	HX_MARK_MEMBER_NAME(mEntries,"mEntries");
	HX_MARK_END_CLASS();
}

void RegisterMap_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(mEntries,"mEntries");
}

Dynamic RegisterMap_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"add") ) { return add_dyn(); }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"addDR") ) { return addDR_dyn(); }
		if (HX_FIELD_EQ(inName,"addSR") ) { return addSR_dyn(); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"addSaR") ) { return addSaR_dyn(); }
		if (HX_FIELD_EQ(inName,"toGLSL") ) { return toGLSL_dyn(); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"mEntries") ) { return mEntries; }
		if (HX_FIELD_EQ(inName,"getUsage") ) { return getUsage_dyn(); }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"getRegisterUsage") ) { return getRegisterUsage_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic RegisterMap_obj::__SetField(const ::String &inName,const Dynamic &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 8:
		if (HX_FIELD_EQ(inName,"mEntries") ) { mEntries=inValue.Cast< Array< ::Dynamic > >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void RegisterMap_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("mEntries","\x63","\xec","\x2a","\xa1"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsObject /*Array< ::Dynamic >*/ ,(int)offsetof(RegisterMap_obj,mEntries),HX_HCSTRING("mEntries","\x63","\xec","\x2a","\xa1")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo *sStaticStorageInfo = 0;
#endif

static ::String sMemberFields[] = {
	HX_HCSTRING("mEntries","\x63","\xec","\x2a","\xa1"),
	HX_HCSTRING("add","\x21","\xf2","\x49","\x00"),
	HX_HCSTRING("addDR","\xef","\xb7","\x43","\x1c"),
	HX_HCSTRING("addSaR","\x63","\xa8","\x08","\x9f"),
	HX_HCSTRING("addSR","\x00","\xc5","\x43","\x1c"),
	HX_HCSTRING("getRegisterUsage","\x48","\xc9","\xb8","\x09"),
	HX_HCSTRING("getUsage","\xab","\x6c","\x06","\x0a"),
	HX_HCSTRING("toGLSL","\xf9","\x58","\x08","\x7a"),
	::String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(RegisterMap_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(RegisterMap_obj::__mClass,"__mClass");
};

#endif

hx::Class RegisterMap_obj::__mClass;

void RegisterMap_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("openfl._internal.stage3D.RegisterMap","\xaa","\x7b","\xea","\xb0");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = hx::Class_obj::dupFunctions(sMemberFields);
	__mClass->mCanCast = hx::TCanCast< RegisterMap_obj >;
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
