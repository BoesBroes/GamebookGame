#include <hxcpp.h>

#ifndef INCLUDED_StringBuf
#include <StringBuf.h>
#endif
#ifndef INCLUDED_haxe_io_Bytes
#include <haxe/io/Bytes.h>
#endif
#ifndef INCLUDED_lime__backend_native_NativeGLRenderContext
#include <lime/_backend/native/NativeGLRenderContext.h>
#endif
#ifndef INCLUDED_lime_graphics_opengl_GL
#include <lime/graphics/opengl/GL.h>
#endif
#ifndef INCLUDED_openfl__internal_stage3D_AGALConverter
#include <openfl/_internal/stage3D/AGALConverter.h>
#endif
#ifndef INCLUDED_openfl__internal_stage3D_RegisterMap
#include <openfl/_internal/stage3D/RegisterMap.h>
#endif
#ifndef INCLUDED_openfl__internal_stage3D_SamplerState
#include <openfl/_internal/stage3D/SamplerState.h>
#endif
#ifndef INCLUDED_openfl__internal_stage3D__AGALConverter_DestRegister
#include <openfl/_internal/stage3D/_AGALConverter/DestRegister.h>
#endif
#ifndef INCLUDED_openfl__internal_stage3D__AGALConverter_ProgramType
#include <openfl/_internal/stage3D/_AGALConverter/ProgramType.h>
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
namespace _internal{
namespace stage3D{

Void AGALConverter_obj::__construct()
{
	return null();
}

//AGALConverter_obj::~AGALConverter_obj() { }

Dynamic AGALConverter_obj::__CreateEmpty() { return  new AGALConverter_obj; }
hx::ObjectPtr< AGALConverter_obj > AGALConverter_obj::__new()
{  hx::ObjectPtr< AGALConverter_obj > _result_ = new AGALConverter_obj();
	_result_->__construct();
	return _result_;}

Dynamic AGALConverter_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< AGALConverter_obj > _result_ = new AGALConverter_obj();
	_result_->__construct();
	return _result_;}

Dynamic AGALConverter_obj::limitedProfile;

::String AGALConverter_obj::prefixFromType( int regType,::openfl::_internal::stage3D::_AGALConverter::ProgramType programType){
	int tmp = regType;
	switch( (int)(tmp)){
		case (int)0: {
			return HX_HCSTRING("va","\x2b","\x67","\x00","\x00");
		}
		;break;
		case (int)1: {
			bool tmp1 = (programType == ::openfl::_internal::stage3D::_AGALConverter::ProgramType_obj::VERTEX);
			::String tmp2;
			if ((tmp1)){
				tmp2 = HX_HCSTRING("vc","\x2d","\x67","\x00","\x00");
			}
			else{
				tmp2 = HX_HCSTRING("fc","\x3d","\x59","\x00","\x00");
			}
			return tmp2;
		}
		;break;
		case (int)2: {
			bool tmp1 = (programType == ::openfl::_internal::stage3D::_AGALConverter::ProgramType_obj::VERTEX);
			::String tmp2;
			if ((tmp1)){
				tmp2 = HX_HCSTRING("vt","\x3e","\x67","\x00","\x00");
			}
			else{
				tmp2 = HX_HCSTRING("ft","\x4e","\x59","\x00","\x00");
			}
			return tmp2;
		}
		;break;
		case (int)3: {
			return HX_HCSTRING("output_","\x3e","\x12","\x6c","\xe4");
		}
		;break;
		case (int)4: {
			return HX_HCSTRING("v","\x76","\x00","\x00","\x00");
		}
		;break;
		case (int)5: {
			return HX_HCSTRING("sampler","\x08","\xc5","\xc9","\x83");
		}
		;break;
		default: {
			::openfl::errors::IllegalOperationError tmp1 = ::openfl::errors::IllegalOperationError_obj::__new(HX_HCSTRING("Invalid data!","\xae","\xd8","\xc0","\xb8"));
			HX_STACK_DO_THROW(tmp1);
		}
	}
	return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(AGALConverter_obj,prefixFromType,return )

cpp::Int64Struct AGALConverter_obj::readUInt64( ::openfl::utils::ByteArrayData byteArray){
	int tmp = byteArray->readInt();
	int low = tmp;
	int tmp1 = byteArray->readInt();
	int high = tmp1;
	return cpp::Int64Struct(( ( (cpp::Int64)((unsigned int)high) ) << 32 ) | ((unsigned int)low));
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(AGALConverter_obj,readUInt64,return )

::String AGALConverter_obj::convertToGLSL( ::openfl::utils::ByteArrayData agal,Array< ::Dynamic > samplerState){
	agal->position = (int)0;
	agal->__endian = ((Dynamic)((int)1));
	int tmp = agal->readByte();
	int tmp1 = (int(tmp) & int((int)255));
	int magic = tmp1;
	bool tmp2 = (magic == (int)176);
	if ((tmp2)){
		::String tmp3 = agal->readUTF();
		return tmp3;
	}
	bool tmp3 = (magic != (int)160);
	if ((tmp3)){
		::openfl::errors::IllegalOperationError tmp4 = ::openfl::errors::IllegalOperationError_obj::__new(HX_HCSTRING("Magic value must be 0xA0, may not be AGAL","\x33","\xcd","\xd9","\x2e"));
		HX_STACK_DO_THROW(tmp4);
	}
	int tmp4 = agal->readInt();
	int version = tmp4;
	bool tmp5 = (version != (int)1);
	if ((tmp5)){
		::openfl::errors::IllegalOperationError tmp6 = ::openfl::errors::IllegalOperationError_obj::__new(HX_HCSTRING("Version must be 1","\xe3","\xba","\xef","\x98"));
		HX_STACK_DO_THROW(tmp6);
	}
	int tmp6 = agal->readByte();
	int tmp7 = (int(tmp6) & int((int)255));
	int shaderTypeID = tmp7;
	bool tmp8 = (shaderTypeID != (int)161);
	if ((tmp8)){
		::openfl::errors::IllegalOperationError tmp9 = ::openfl::errors::IllegalOperationError_obj::__new(HX_HCSTRING("Shader type ID must be 0xA1","\x38","\x36","\x8f","\x05"));
		HX_STACK_DO_THROW(tmp9);
	}
	int tmp9 = agal->readByte();
	int tmp10 = (int(tmp9) & int((int)255));
	bool tmp11 = (tmp10 == (int)0);
	::openfl::_internal::stage3D::_AGALConverter::ProgramType tmp12;
	if ((tmp11)){
		tmp12 = ::openfl::_internal::stage3D::_AGALConverter::ProgramType_obj::VERTEX;
	}
	else{
		tmp12 = ::openfl::_internal::stage3D::_AGALConverter::ProgramType_obj::FRAGMENT;
	}
	::openfl::_internal::stage3D::_AGALConverter::ProgramType programType = tmp12;
	::openfl::_internal::stage3D::RegisterMap tmp13 = ::openfl::_internal::stage3D::RegisterMap_obj::__new();
	::openfl::_internal::stage3D::RegisterMap map = tmp13;
	::StringBuf tmp14 = ::StringBuf_obj::__new();
	::StringBuf sb = tmp14;
	while((true)){
		int tmp15 = agal->position;
		::openfl::utils::ByteArrayData tmp16 = agal;
		int tmp17 = ::openfl::utils::_ByteArray::ByteArray_Impl__obj::get_length(tmp16);
		bool tmp18 = (tmp15 < tmp17);
		bool tmp19 = !(tmp18);
		if ((tmp19)){
			break;
		}
		int tmp20 = agal->readInt();
		int opcode = tmp20;
		int tmp21 = agal->readUnsignedInt();
		int dest = tmp21;
		::openfl::utils::ByteArrayData tmp22 = agal;
		cpp::Int64Struct tmp23 = ::openfl::_internal::stage3D::AGALConverter_obj::readUInt64(tmp22);
		cpp::Int64Struct source1 = tmp23;
		::openfl::utils::ByteArrayData tmp24 = agal;
		cpp::Int64Struct tmp25 = ::openfl::_internal::stage3D::AGALConverter_obj::readUInt64(tmp24);
		cpp::Int64Struct source2 = tmp25;
		int tmp26 = dest;
		::openfl::_internal::stage3D::_AGALConverter::ProgramType tmp27 = programType;
		::openfl::_internal::stage3D::_AGALConverter::DestRegister tmp28 = ::openfl::_internal::stage3D::_AGALConverter::DestRegister_obj::parse(tmp26,tmp27);
		::openfl::_internal::stage3D::_AGALConverter::DestRegister dr = tmp28;
		cpp::Int64Struct tmp29 = source1;
		::openfl::_internal::stage3D::_AGALConverter::ProgramType tmp30 = programType;
		int tmp31 = dr->mask;
		::openfl::_internal::stage3D::_AGALConverter::SourceRegister tmp32 = ::openfl::_internal::stage3D::_AGALConverter::SourceRegister_obj::parse(tmp29,tmp30,tmp31);
		::openfl::_internal::stage3D::_AGALConverter::SourceRegister sr1 = tmp32;
		cpp::Int64Struct tmp33 = source2;
		::openfl::_internal::stage3D::_AGALConverter::ProgramType tmp34 = programType;
		int tmp35 = dr->mask;
		::openfl::_internal::stage3D::_AGALConverter::SourceRegister tmp36 = ::openfl::_internal::stage3D::_AGALConverter::SourceRegister_obj::parse(tmp33,tmp34,tmp35);
		::openfl::_internal::stage3D::_AGALConverter::SourceRegister sr2 = tmp36;
		sb->add(HX_HCSTRING("\t","\x09","\x00","\x00","\x00"));
		int tmp37 = opcode;
		switch( (int)(tmp37)){
			case (int)0: {
				::String tmp38 = dr->toGLSL(null());
				::String tmp39 = (tmp38 + HX_HCSTRING(" = ","\x63","\x7d","\x18","\x00"));
				::String tmp40 = sr1->toGLSL(null(),null());
				::String tmp41 = (tmp39 + tmp40);
				::String tmp42 = (tmp41 + HX_HCSTRING("; // mov","\x19","\x49","\x64","\x51"));
				sb->add(tmp42);
				::openfl::_internal::stage3D::_AGALConverter::DestRegister tmp43 = dr;
				map->addDR(tmp43,::openfl::_internal::stage3D::_AGALConverter::RegisterUsage_obj::VECTOR_4);
				::openfl::_internal::stage3D::_AGALConverter::SourceRegister tmp44 = sr1;
				map->addSR(tmp44,::openfl::_internal::stage3D::_AGALConverter::RegisterUsage_obj::VECTOR_4,null());
			}
			;break;
			case (int)1: {
				::String tmp38 = dr->toGLSL(null());
				::String tmp39 = (tmp38 + HX_HCSTRING(" = ","\x63","\x7d","\x18","\x00"));
				::String tmp40 = sr1->toGLSL(null(),null());
				::String tmp41 = (tmp39 + tmp40);
				::String tmp42 = (tmp41 + HX_HCSTRING(" + ","\xb5","\x6d","\x18","\x00"));
				::String tmp43 = sr2->toGLSL(null(),null());
				::String tmp44 = (tmp42 + tmp43);
				::String tmp45 = (tmp44 + HX_HCSTRING("; // add","\x66","\x24","\x5b","\x51"));
				sb->add(tmp45);
				::openfl::_internal::stage3D::_AGALConverter::DestRegister tmp46 = dr;
				map->addDR(tmp46,::openfl::_internal::stage3D::_AGALConverter::RegisterUsage_obj::VECTOR_4);
				::openfl::_internal::stage3D::_AGALConverter::SourceRegister tmp47 = sr1;
				map->addSR(tmp47,::openfl::_internal::stage3D::_AGALConverter::RegisterUsage_obj::VECTOR_4,null());
				::openfl::_internal::stage3D::_AGALConverter::SourceRegister tmp48 = sr2;
				map->addSR(tmp48,::openfl::_internal::stage3D::_AGALConverter::RegisterUsage_obj::VECTOR_4,null());
			}
			;break;
			case (int)2: {
				::String tmp38 = dr->toGLSL(null());
				::String tmp39 = (tmp38 + HX_HCSTRING(" = ","\x63","\x7d","\x18","\x00"));
				::String tmp40 = sr1->toGLSL(null(),null());
				::String tmp41 = (tmp39 + tmp40);
				::String tmp42 = (tmp41 + HX_HCSTRING(" - ","\x73","\x6f","\x18","\x00"));
				::String tmp43 = sr2->toGLSL(null(),null());
				::String tmp44 = (tmp42 + tmp43);
				::String tmp45 = (tmp44 + HX_HCSTRING("; // sub","\xc5","\xdb","\x68","\x51"));
				sb->add(tmp45);
				::openfl::_internal::stage3D::_AGALConverter::DestRegister tmp46 = dr;
				map->addDR(tmp46,::openfl::_internal::stage3D::_AGALConverter::RegisterUsage_obj::VECTOR_4);
				::openfl::_internal::stage3D::_AGALConverter::SourceRegister tmp47 = sr1;
				map->addSR(tmp47,::openfl::_internal::stage3D::_AGALConverter::RegisterUsage_obj::VECTOR_4,null());
				::openfl::_internal::stage3D::_AGALConverter::SourceRegister tmp48 = sr2;
				map->addSR(tmp48,::openfl::_internal::stage3D::_AGALConverter::RegisterUsage_obj::VECTOR_4,null());
			}
			;break;
			case (int)3: {
				::String tmp38 = dr->toGLSL(null());
				::String tmp39 = (tmp38 + HX_HCSTRING(" = ","\x63","\x7d","\x18","\x00"));
				::String tmp40 = sr1->toGLSL(null(),null());
				::String tmp41 = (tmp39 + tmp40);
				::String tmp42 = (tmp41 + HX_HCSTRING(" * ","\xd6","\x6c","\x18","\x00"));
				::String tmp43 = sr2->toGLSL(null(),null());
				::String tmp44 = (tmp42 + tmp43);
				::String tmp45 = (tmp44 + HX_HCSTRING("; // mul","\x49","\x4e","\x64","\x51"));
				sb->add(tmp45);
				::openfl::_internal::stage3D::_AGALConverter::DestRegister tmp46 = dr;
				map->addDR(tmp46,::openfl::_internal::stage3D::_AGALConverter::RegisterUsage_obj::VECTOR_4);
				::openfl::_internal::stage3D::_AGALConverter::SourceRegister tmp47 = sr1;
				map->addSR(tmp47,::openfl::_internal::stage3D::_AGALConverter::RegisterUsage_obj::VECTOR_4,null());
				::openfl::_internal::stage3D::_AGALConverter::SourceRegister tmp48 = sr2;
				map->addSR(tmp48,::openfl::_internal::stage3D::_AGALConverter::RegisterUsage_obj::VECTOR_4,null());
			}
			;break;
			case (int)4: {
				::String tmp38 = dr->toGLSL(null());
				::String tmp39 = (tmp38 + HX_HCSTRING(" = ","\x63","\x7d","\x18","\x00"));
				::String tmp40 = sr1->toGLSL(null(),null());
				::String tmp41 = (tmp39 + tmp40);
				::String tmp42 = (tmp41 + HX_HCSTRING(" / ","\x31","\x71","\x18","\x00"));
				::String tmp43 = sr2->toGLSL(null(),null());
				::String tmp44 = (tmp42 + tmp43);
				::String tmp45 = (tmp44 + HX_HCSTRING("; // div","\x96","\x6f","\x5d","\x51"));
				sb->add(tmp45);
				::openfl::_internal::stage3D::_AGALConverter::DestRegister tmp46 = dr;
				map->addDR(tmp46,::openfl::_internal::stage3D::_AGALConverter::RegisterUsage_obj::VECTOR_4);
				::openfl::_internal::stage3D::_AGALConverter::SourceRegister tmp47 = sr1;
				map->addSR(tmp47,::openfl::_internal::stage3D::_AGALConverter::RegisterUsage_obj::VECTOR_4,null());
				::openfl::_internal::stage3D::_AGALConverter::SourceRegister tmp48 = sr2;
				map->addSR(tmp48,::openfl::_internal::stage3D::_AGALConverter::RegisterUsage_obj::VECTOR_4,null());
			}
			;break;
			case (int)5: {
				::String tmp38 = dr->toGLSL(null());
				::String tmp39 = (tmp38 + HX_HCSTRING(" = vec4(1) / ","\xb4","\x32","\x05","\x3b"));
				::String tmp40 = sr1->toGLSL(null(),null());
				::String tmp41 = (tmp39 + tmp40);
				::String tmp42 = (tmp41 + HX_HCSTRING(", ","\x74","\x26","\x00","\x00"));
				::String tmp43 = sr2->toGLSL(null(),null());
				::String tmp44 = (tmp42 + tmp43);
				::String tmp45 = (tmp44 + HX_HCSTRING("; // rcp (untested)","\x33","\x14","\x36","\x02"));
				sb->add(tmp45);
				::openfl::_internal::stage3D::_AGALConverter::DestRegister tmp46 = dr;
				map->addDR(tmp46,::openfl::_internal::stage3D::_AGALConverter::RegisterUsage_obj::VECTOR_4);
				::openfl::_internal::stage3D::_AGALConverter::SourceRegister tmp47 = sr1;
				map->addSR(tmp47,::openfl::_internal::stage3D::_AGALConverter::RegisterUsage_obj::VECTOR_4,null());
			}
			;break;
			case (int)6: {
				::String tmp38 = dr->toGLSL(null());
				::String tmp39 = (tmp38 + HX_HCSTRING(" = min(","\x39","\xb9","\xa2","\x4b"));
				::String tmp40 = sr1->toGLSL(null(),null());
				::String tmp41 = (tmp39 + tmp40);
				::String tmp42 = (tmp41 + HX_HCSTRING(", ","\x74","\x26","\x00","\x00"));
				::String tmp43 = sr2->toGLSL(null(),null());
				::String tmp44 = (tmp42 + tmp43);
				::String tmp45 = (tmp44 + HX_HCSTRING("); // min","\x00","\x15","\x0e","\x1a"));
				sb->add(tmp45);
				::openfl::_internal::stage3D::_AGALConverter::DestRegister tmp46 = dr;
				map->addDR(tmp46,::openfl::_internal::stage3D::_AGALConverter::RegisterUsage_obj::VECTOR_4);
				::openfl::_internal::stage3D::_AGALConverter::SourceRegister tmp47 = sr1;
				map->addSR(tmp47,::openfl::_internal::stage3D::_AGALConverter::RegisterUsage_obj::VECTOR_4,null());
				::openfl::_internal::stage3D::_AGALConverter::SourceRegister tmp48 = sr2;
				map->addSR(tmp48,::openfl::_internal::stage3D::_AGALConverter::RegisterUsage_obj::VECTOR_4,null());
			}
			;break;
			case (int)7: {
				::String tmp38 = dr->toGLSL(null());
				::String tmp39 = (tmp38 + HX_HCSTRING(" = max(","\xe7","\xaf","\x9c","\x4b"));
				::String tmp40 = sr1->toGLSL(null(),null());
				::String tmp41 = (tmp39 + tmp40);
				::String tmp42 = (tmp41 + HX_HCSTRING(", ","\x74","\x26","\x00","\x00"));
				::String tmp43 = sr2->toGLSL(null(),null());
				::String tmp44 = (tmp42 + tmp43);
				::String tmp45 = (tmp44 + HX_HCSTRING("); // max","\x12","\x0e","\x0e","\x1a"));
				sb->add(tmp45);
				::openfl::_internal::stage3D::_AGALConverter::DestRegister tmp46 = dr;
				map->addDR(tmp46,::openfl::_internal::stage3D::_AGALConverter::RegisterUsage_obj::VECTOR_4);
				::openfl::_internal::stage3D::_AGALConverter::SourceRegister tmp47 = sr1;
				map->addSR(tmp47,::openfl::_internal::stage3D::_AGALConverter::RegisterUsage_obj::VECTOR_4,null());
				::openfl::_internal::stage3D::_AGALConverter::SourceRegister tmp48 = sr2;
				map->addSR(tmp48,::openfl::_internal::stage3D::_AGALConverter::RegisterUsage_obj::VECTOR_4,null());
			}
			;break;
			case (int)8: {
				::String tmp38 = dr->toGLSL(null());
				::String tmp39 = (tmp38 + HX_HCSTRING(" = fract(","\x85","\x4f","\x5f","\xde"));
				::String tmp40 = sr1->toGLSL(null(),null());
				::String tmp41 = (tmp39 + tmp40);
				::String tmp42 = (tmp41 + HX_HCSTRING("); // frc","\x05","\xcd","\x08","\x1a"));
				sb->add(tmp42);
				::openfl::_internal::stage3D::_AGALConverter::DestRegister tmp43 = dr;
				map->addDR(tmp43,::openfl::_internal::stage3D::_AGALConverter::RegisterUsage_obj::VECTOR_4);
				::openfl::_internal::stage3D::_AGALConverter::SourceRegister tmp44 = sr1;
				map->addSR(tmp44,::openfl::_internal::stage3D::_AGALConverter::RegisterUsage_obj::VECTOR_4,null());
			}
			;break;
			case (int)9: {
				::String tmp38 = dr->toGLSL(null());
				::String tmp39 = (tmp38 + HX_HCSTRING(" = sqrt(","\x05","\xd4","\x73","\x5c"));
				::String tmp40 = sr1->toGLSL(null(),null());
				::String tmp41 = (tmp39 + tmp40);
				::String tmp42 = (tmp41 + HX_HCSTRING("); // sqrt","\xb2","\xa8","\x41","\xb6"));
				sb->add(tmp42);
				::openfl::_internal::stage3D::_AGALConverter::DestRegister tmp43 = dr;
				map->addDR(tmp43,::openfl::_internal::stage3D::_AGALConverter::RegisterUsage_obj::VECTOR_4);
				::openfl::_internal::stage3D::_AGALConverter::SourceRegister tmp44 = sr1;
				map->addSR(tmp44,::openfl::_internal::stage3D::_AGALConverter::RegisterUsage_obj::VECTOR_4,null());
			}
			;break;
			case (int)10: {
				::String tmp38 = dr->toGLSL(null());
				::String tmp39 = (tmp38 + HX_HCSTRING(" = inversesqrt(","\x7b","\x94","\x3b","\xf8"));
				::String tmp40 = sr1->toGLSL(null(),null());
				::String tmp41 = (tmp39 + tmp40);
				::String tmp42 = (tmp41 + HX_HCSTRING("); // rsq","\xfe","\xe8","\x11","\x1a"));
				sb->add(tmp42);
				::openfl::_internal::stage3D::_AGALConverter::DestRegister tmp43 = dr;
				map->addDR(tmp43,::openfl::_internal::stage3D::_AGALConverter::RegisterUsage_obj::VECTOR_4);
				::openfl::_internal::stage3D::_AGALConverter::SourceRegister tmp44 = sr1;
				map->addSR(tmp44,::openfl::_internal::stage3D::_AGALConverter::RegisterUsage_obj::VECTOR_4,null());
			}
			;break;
			case (int)11: {
				::String tmp38 = dr->toGLSL(null());
				::String tmp39 = (tmp38 + HX_HCSTRING(" = pow(","\x73","\xf2","\xa2","\x4d"));
				::String tmp40 = sr1->toGLSL(null(),null());
				::String tmp41 = (tmp39 + tmp40);
				::String tmp42 = (tmp41 + HX_HCSTRING(", ","\x74","\x26","\x00","\x00"));
				::String tmp43 = sr2->toGLSL(null(),null());
				::String tmp44 = (tmp42 + tmp43);
				::String tmp45 = (tmp44 + HX_HCSTRING("); // pow","\x06","\x61","\x10","\x1a"));
				sb->add(tmp45);
				::openfl::_internal::stage3D::_AGALConverter::DestRegister tmp46 = dr;
				map->addDR(tmp46,::openfl::_internal::stage3D::_AGALConverter::RegisterUsage_obj::VECTOR_4);
				::openfl::_internal::stage3D::_AGALConverter::SourceRegister tmp47 = sr1;
				map->addSR(tmp47,::openfl::_internal::stage3D::_AGALConverter::RegisterUsage_obj::VECTOR_4,null());
				::openfl::_internal::stage3D::_AGALConverter::SourceRegister tmp48 = sr2;
				map->addSR(tmp48,::openfl::_internal::stage3D::_AGALConverter::RegisterUsage_obj::VECTOR_4,null());
			}
			;break;
			case (int)12: {
				::String tmp38 = dr->toGLSL(null());
				::String tmp39 = (tmp38 + HX_HCSTRING(" = log2(","\xf7","\xc4","\x4a","\x53"));
				::String tmp40 = sr1->toGLSL(null(),null());
				::String tmp41 = (tmp39 + tmp40);
				::String tmp42 = (tmp41 + HX_HCSTRING("); // log","\xf2","\x57","\x0d","\x1a"));
				sb->add(tmp42);
				::openfl::_internal::stage3D::_AGALConverter::DestRegister tmp43 = dr;
				map->addDR(tmp43,::openfl::_internal::stage3D::_AGALConverter::RegisterUsage_obj::VECTOR_4);
				::openfl::_internal::stage3D::_AGALConverter::SourceRegister tmp44 = sr1;
				map->addSR(tmp44,::openfl::_internal::stage3D::_AGALConverter::RegisterUsage_obj::VECTOR_4,null());
			}
			;break;
			case (int)13: {
				::String tmp38 = dr->toGLSL(null());
				::String tmp39 = (tmp38 + HX_HCSTRING(" = exp2(","\x50","\x75","\x76","\x51"));
				::String tmp40 = sr1->toGLSL(null(),null());
				::String tmp41 = (tmp39 + tmp40);
				::String tmp42 = (tmp41 + HX_HCSTRING("); // exp","\x0b","\x10","\x08","\x1a"));
				sb->add(tmp42);
				::openfl::_internal::stage3D::_AGALConverter::DestRegister tmp43 = dr;
				map->addDR(tmp43,::openfl::_internal::stage3D::_AGALConverter::RegisterUsage_obj::VECTOR_4);
				::openfl::_internal::stage3D::_AGALConverter::SourceRegister tmp44 = sr1;
				map->addSR(tmp44,::openfl::_internal::stage3D::_AGALConverter::RegisterUsage_obj::VECTOR_4,null());
			}
			;break;
			case (int)14: {
				::String tmp38 = dr->toGLSL(null());
				::String tmp39 = (tmp38 + HX_HCSTRING(" = normalize(","\x1e","\x9b","\xe9","\xff"));
				::String tmp40 = sr1->toGLSL(null(),null());
				::String tmp41 = (tmp39 + tmp40);
				::String tmp42 = (tmp41 + HX_HCSTRING("); // normalize","\x7b","\x81","\x39","\xe2"));
				sb->add(tmp42);
				::openfl::_internal::stage3D::_AGALConverter::DestRegister tmp43 = dr;
				map->addDR(tmp43,::openfl::_internal::stage3D::_AGALConverter::RegisterUsage_obj::VECTOR_4);
				::openfl::_internal::stage3D::_AGALConverter::SourceRegister tmp44 = sr1;
				map->addSR(tmp44,::openfl::_internal::stage3D::_AGALConverter::RegisterUsage_obj::VECTOR_4,null());
			}
			;break;
			case (int)15: {
				::String tmp38 = dr->toGLSL(null());
				::String tmp39 = (tmp38 + HX_HCSTRING(" = sin(","\xf3","\x00","\x9a","\x4f"));
				::String tmp40 = sr1->toGLSL(null(),null());
				::String tmp41 = (tmp39 + tmp40);
				::String tmp42 = (tmp41 + HX_HCSTRING("); // sin","\x86","\xa2","\x12","\x1a"));
				sb->add(tmp42);
				::openfl::_internal::stage3D::_AGALConverter::DestRegister tmp43 = dr;
				map->addDR(tmp43,::openfl::_internal::stage3D::_AGALConverter::RegisterUsage_obj::VECTOR_4);
				::openfl::_internal::stage3D::_AGALConverter::SourceRegister tmp44 = sr1;
				map->addSR(tmp44,::openfl::_internal::stage3D::_AGALConverter::RegisterUsage_obj::VECTOR_4,null());
			}
			;break;
			case (int)16: {
				::String tmp38 = dr->toGLSL(null());
				::String tmp39 = (tmp38 + HX_HCSTRING(" = cos(","\xe4","\x28","\x0b","\x45"));
				::String tmp40 = sr1->toGLSL(null(),null());
				::String tmp41 = (tmp39 + tmp40);
				::String tmp42 = (tmp41 + HX_HCSTRING("); // cos","\xb5","\x83","\x06","\x1a"));
				sb->add(tmp42);
				::openfl::_internal::stage3D::_AGALConverter::DestRegister tmp43 = dr;
				map->addDR(tmp43,::openfl::_internal::stage3D::_AGALConverter::RegisterUsage_obj::VECTOR_4);
				::openfl::_internal::stage3D::_AGALConverter::SourceRegister tmp44 = sr1;
				map->addSR(tmp44,::openfl::_internal::stage3D::_AGALConverter::RegisterUsage_obj::VECTOR_4,null());
			}
			;break;
			case (int)17: {
				int tmp38 = sr2->sourceMask = (int)7;
				sr1->sourceMask = tmp38;
				::String tmp39 = dr->toGLSL(null());
				::String tmp40 = (tmp39 + HX_HCSTRING(" = cross(vec3(","\xbe","\xc1","\xb9","\xac"));
				::String tmp41 = sr1->toGLSL(null(),null());
				::String tmp42 = (tmp40 + tmp41);
				::String tmp43 = (tmp42 + HX_HCSTRING("), vec3(","\xec","\x87","\x86","\x4e"));
				::String tmp44 = sr2->toGLSL(null(),null());
				::String tmp45 = (tmp43 + tmp44);
				::String tmp46 = (tmp45 + HX_HCSTRING(")); // crs","\x09","\xb9","\xf3","\xe5"));
				sb->add(tmp46);
				::openfl::_internal::stage3D::_AGALConverter::DestRegister tmp47 = dr;
				map->addDR(tmp47,::openfl::_internal::stage3D::_AGALConverter::RegisterUsage_obj::VECTOR_4);
				::openfl::_internal::stage3D::_AGALConverter::SourceRegister tmp48 = sr1;
				map->addSR(tmp48,::openfl::_internal::stage3D::_AGALConverter::RegisterUsage_obj::VECTOR_4,null());
				::openfl::_internal::stage3D::_AGALConverter::SourceRegister tmp49 = sr2;
				map->addSR(tmp49,::openfl::_internal::stage3D::_AGALConverter::RegisterUsage_obj::VECTOR_4,null());
			}
			;break;
			case (int)18: {
				int tmp38 = sr2->sourceMask = (int)7;
				sr1->sourceMask = tmp38;
				::String tmp39 = dr->toGLSL(null());
				::String tmp40 = (tmp39 + HX_HCSTRING(" = vec4(dot(vec3(","\xe5","\xe8","\x98","\x98"));
				::String tmp41 = sr1->toGLSL(null(),null());
				::String tmp42 = (tmp40 + tmp41);
				::String tmp43 = (tmp42 + HX_HCSTRING("), vec3(","\xec","\x87","\x86","\x4e"));
				::String tmp44 = sr2->toGLSL(null(),null());
				::String tmp45 = (tmp43 + tmp44);
				::String tmp46 = (tmp45 + HX_HCSTRING(")))","\x49","\x40","\x1f","\x00"));
				::String tmp47 = dr->getWriteMask();
				::String tmp48 = (tmp46 + tmp47);
				::String tmp49 = (tmp48 + HX_HCSTRING("; // dp3","\x6c","\x75","\x5d","\x51"));
				sb->add(tmp49);
				::openfl::_internal::stage3D::_AGALConverter::DestRegister tmp50 = dr;
				map->addDR(tmp50,::openfl::_internal::stage3D::_AGALConverter::RegisterUsage_obj::VECTOR_4);
				::openfl::_internal::stage3D::_AGALConverter::SourceRegister tmp51 = sr1;
				map->addSR(tmp51,::openfl::_internal::stage3D::_AGALConverter::RegisterUsage_obj::VECTOR_4,null());
				::openfl::_internal::stage3D::_AGALConverter::SourceRegister tmp52 = sr2;
				map->addSR(tmp52,::openfl::_internal::stage3D::_AGALConverter::RegisterUsage_obj::VECTOR_4,null());
			}
			;break;
			case (int)19: {
				int tmp38 = sr2->sourceMask = (int)15;
				sr1->sourceMask = tmp38;
				::String tmp39 = dr->toGLSL(null());
				::String tmp40 = (tmp39 + HX_HCSTRING(" = vec4(dot(vec4(","\xc4","\xe9","\x98","\x98"));
				::String tmp41 = sr1->toGLSL(null(),null());
				::String tmp42 = (tmp40 + tmp41);
				::String tmp43 = (tmp42 + HX_HCSTRING("), vec4(","\xcb","\x88","\x86","\x4e"));
				::String tmp44 = sr2->toGLSL(null(),null());
				::String tmp45 = (tmp43 + tmp44);
				::String tmp46 = (tmp45 + HX_HCSTRING(")))","\x49","\x40","\x1f","\x00"));
				::String tmp47 = dr->getWriteMask();
				::String tmp48 = (tmp46 + tmp47);
				::String tmp49 = (tmp48 + HX_HCSTRING("; // dp4","\x6d","\x75","\x5d","\x51"));
				sb->add(tmp49);
				::openfl::_internal::stage3D::_AGALConverter::DestRegister tmp50 = dr;
				map->addDR(tmp50,::openfl::_internal::stage3D::_AGALConverter::RegisterUsage_obj::VECTOR_4);
				::openfl::_internal::stage3D::_AGALConverter::SourceRegister tmp51 = sr1;
				map->addSR(tmp51,::openfl::_internal::stage3D::_AGALConverter::RegisterUsage_obj::VECTOR_4,null());
				::openfl::_internal::stage3D::_AGALConverter::SourceRegister tmp52 = sr2;
				map->addSR(tmp52,::openfl::_internal::stage3D::_AGALConverter::RegisterUsage_obj::VECTOR_4,null());
			}
			;break;
			case (int)20: {
				::String tmp38 = dr->toGLSL(null());
				::String tmp39 = (tmp38 + HX_HCSTRING(" = abs(","\x59","\xde","\xae","\x43"));
				::String tmp40 = sr1->toGLSL(null(),null());
				::String tmp41 = (tmp39 + tmp40);
				::String tmp42 = (tmp41 + HX_HCSTRING("); // abs","\xe0","\xf3","\x04","\x1a"));
				sb->add(tmp42);
				::openfl::_internal::stage3D::_AGALConverter::DestRegister tmp43 = dr;
				map->addDR(tmp43,::openfl::_internal::stage3D::_AGALConverter::RegisterUsage_obj::VECTOR_4);
				::openfl::_internal::stage3D::_AGALConverter::SourceRegister tmp44 = sr1;
				map->addSR(tmp44,::openfl::_internal::stage3D::_AGALConverter::RegisterUsage_obj::VECTOR_4,null());
			}
			;break;
			case (int)21: {
				::String tmp38 = dr->toGLSL(null());
				::String tmp39 = (tmp38 + HX_HCSTRING(" = -","\x6a","\x39","\x55","\x15"));
				::String tmp40 = sr1->toGLSL(null(),null());
				::String tmp41 = (tmp39 + tmp40);
				::String tmp42 = (tmp41 + HX_HCSTRING("; // neg","\x95","\x02","\x65","\x51"));
				sb->add(tmp42);
				::openfl::_internal::stage3D::_AGALConverter::DestRegister tmp43 = dr;
				map->addDR(tmp43,::openfl::_internal::stage3D::_AGALConverter::RegisterUsage_obj::VECTOR_4);
				::openfl::_internal::stage3D::_AGALConverter::SourceRegister tmp44 = sr1;
				map->addSR(tmp44,::openfl::_internal::stage3D::_AGALConverter::RegisterUsage_obj::VECTOR_4,null());
			}
			;break;
			case (int)22: {
				::String tmp38 = dr->toGLSL(null());
				::String tmp39 = (tmp38 + HX_HCSTRING(" = clamp(","\x70","\x52","\xed","\x36"));
				::String tmp40 = sr1->toGLSL(null(),null());
				::String tmp41 = (tmp39 + tmp40);
				::String tmp42 = (tmp41 + HX_HCSTRING(", 0.0, 1.0); // saturate","\x02","\xd7","\x59","\xd0"));
				sb->add(tmp42);
				::openfl::_internal::stage3D::_AGALConverter::DestRegister tmp43 = dr;
				map->addDR(tmp43,::openfl::_internal::stage3D::_AGALConverter::RegisterUsage_obj::VECTOR_4);
				::openfl::_internal::stage3D::_AGALConverter::SourceRegister tmp44 = sr1;
				map->addSR(tmp44,::openfl::_internal::stage3D::_AGALConverter::RegisterUsage_obj::VECTOR_4,null());
			}
			;break;
			case (int)23: {
				::openfl::_internal::stage3D::_AGALConverter::SourceRegister tmp38 = sr2;
				::openfl::_internal::stage3D::_AGALConverter::RegisterUsage tmp39 = map->getRegisterUsage(tmp38);
				::openfl::_internal::stage3D::_AGALConverter::RegisterUsage existingUsage = tmp39;
				bool tmp40 = (existingUsage != ::openfl::_internal::stage3D::_AGALConverter::RegisterUsage_obj::VECTOR_4);
				bool tmp41;
				if ((tmp40)){
					tmp41 = (existingUsage != ::openfl::_internal::stage3D::_AGALConverter::RegisterUsage_obj::VECTOR_4_ARRAY);
				}
				else{
					tmp41 = false;
				}
				if ((tmp41)){
					::String tmp42 = dr->toGLSL(null());
					::String tmp43 = (tmp42 + HX_HCSTRING(" = ","\x63","\x7d","\x18","\x00"));
					::String tmp44 = sr1->toGLSL(null(),null());
					::String tmp45 = (tmp43 + tmp44);
					::String tmp46 = (tmp45 + HX_HCSTRING(" * mat3(","\x9f","\x6a","\x62","\xc7"));
					::String tmp47 = sr2->toGLSL(false,null());
					::String tmp48 = (tmp46 + tmp47);
					::String tmp49 = (tmp48 + HX_HCSTRING("); // m33","\xbb","\xe5","\x0d","\x1a"));
					sb->add(tmp49);
					::openfl::_internal::stage3D::_AGALConverter::DestRegister tmp50 = dr;
					map->addDR(tmp50,::openfl::_internal::stage3D::_AGALConverter::RegisterUsage_obj::VECTOR_4);
					::openfl::_internal::stage3D::_AGALConverter::SourceRegister tmp51 = sr1;
					map->addSR(tmp51,::openfl::_internal::stage3D::_AGALConverter::RegisterUsage_obj::VECTOR_4,null());
					::openfl::_internal::stage3D::_AGALConverter::SourceRegister tmp52 = sr2;
					map->addSR(tmp52,::openfl::_internal::stage3D::_AGALConverter::RegisterUsage_obj::MATRIX_4_4,null());
				}
				else{
					int tmp42 = sr2->sourceMask = (int)7;
					sr1->sourceMask = tmp42;
					::String tmp43 = dr->toGLSL(null());
					::String tmp44 = (tmp43 + HX_HCSTRING(" = vec3(","\xa6","\x67","\xad","\x0e"));
					::String tmp45 = (tmp44 + HX_HCSTRING("dot(","\x7f","\xf5","\x6d","\x42"));
					::String tmp46 = sr1->toGLSL(true,null());
					::String tmp47 = (tmp45 + tmp46);
					::String tmp48 = (tmp47 + HX_HCSTRING(",","\x2c","\x00","\x00","\x00"));
					::String tmp49 = sr2->toGLSL(true,(int)0);
					::String tmp50 = (tmp48 + tmp49);
					::String tmp51 = (tmp50 + HX_HCSTRING("), ","\xdd","\x42","\x1f","\x00"));
					::String tmp52 = (tmp51 + HX_HCSTRING("dot(","\x7f","\xf5","\x6d","\x42"));
					::String tmp53 = sr1->toGLSL(true,null());
					::String tmp54 = (tmp52 + tmp53);
					::String tmp55 = (tmp54 + HX_HCSTRING(",","\x2c","\x00","\x00","\x00"));
					::String tmp56 = sr2->toGLSL(true,(int)1);
					::String tmp57 = (tmp55 + tmp56);
					::String tmp58 = (tmp57 + HX_HCSTRING("),","\xe3","\x23","\x00","\x00"));
					::String tmp59 = (tmp58 + HX_HCSTRING("dot(","\x7f","\xf5","\x6d","\x42"));
					::String tmp60 = sr1->toGLSL(true,null());
					::String tmp61 = (tmp59 + tmp60);
					::String tmp62 = (tmp61 + HX_HCSTRING(",","\x2c","\x00","\x00","\x00"));
					::String tmp63 = sr2->toGLSL(true,(int)2);
					::String tmp64 = (tmp62 + tmp63);
					::String tmp65 = (tmp64 + HX_HCSTRING(")); // m33","\x72","\x18","\xfb","\xe5"));
					sb->add(tmp65);
					::openfl::_internal::stage3D::_AGALConverter::DestRegister tmp66 = dr;
					map->addDR(tmp66,::openfl::_internal::stage3D::_AGALConverter::RegisterUsage_obj::VECTOR_4);
					::openfl::_internal::stage3D::_AGALConverter::SourceRegister tmp67 = sr1;
					map->addSR(tmp67,::openfl::_internal::stage3D::_AGALConverter::RegisterUsage_obj::VECTOR_4,null());
					::openfl::_internal::stage3D::_AGALConverter::SourceRegister tmp68 = sr2;
					map->addSR(tmp68,::openfl::_internal::stage3D::_AGALConverter::RegisterUsage_obj::VECTOR_4,(int)0);
					::openfl::_internal::stage3D::_AGALConverter::SourceRegister tmp69 = sr2;
					map->addSR(tmp69,::openfl::_internal::stage3D::_AGALConverter::RegisterUsage_obj::VECTOR_4,(int)1);
					::openfl::_internal::stage3D::_AGALConverter::SourceRegister tmp70 = sr2;
					map->addSR(tmp70,::openfl::_internal::stage3D::_AGALConverter::RegisterUsage_obj::VECTOR_4,(int)2);
				}
			}
			;break;
			case (int)24: {
				::openfl::_internal::stage3D::_AGALConverter::SourceRegister tmp38 = sr2;
				::openfl::_internal::stage3D::_AGALConverter::RegisterUsage tmp39 = map->getRegisterUsage(tmp38);
				::openfl::_internal::stage3D::_AGALConverter::RegisterUsage existingUsage = tmp39;
				bool tmp40 = (existingUsage != ::openfl::_internal::stage3D::_AGALConverter::RegisterUsage_obj::VECTOR_4);
				bool tmp41;
				if ((tmp40)){
					tmp41 = (existingUsage != ::openfl::_internal::stage3D::_AGALConverter::RegisterUsage_obj::VECTOR_4_ARRAY);
				}
				else{
					tmp41 = false;
				}
				if ((tmp41)){
					::String tmp42 = dr->toGLSL(null());
					::String tmp43 = (tmp42 + HX_HCSTRING(" = ","\x63","\x7d","\x18","\x00"));
					::String tmp44 = sr1->toGLSL(null(),null());
					::String tmp45 = (tmp43 + tmp44);
					::String tmp46 = (tmp45 + HX_HCSTRING(" * ","\xd6","\x6c","\x18","\x00"));
					::String tmp47 = sr2->toGLSL(false,null());
					::String tmp48 = (tmp46 + tmp47);
					::String tmp49 = (tmp48 + HX_HCSTRING("; // m44","\x72","\x15","\x64","\x51"));
					sb->add(tmp49);
					::openfl::_internal::stage3D::_AGALConverter::DestRegister tmp50 = dr;
					map->addDR(tmp50,::openfl::_internal::stage3D::_AGALConverter::RegisterUsage_obj::VECTOR_4);
					::openfl::_internal::stage3D::_AGALConverter::SourceRegister tmp51 = sr1;
					map->addSR(tmp51,::openfl::_internal::stage3D::_AGALConverter::RegisterUsage_obj::VECTOR_4,null());
					::openfl::_internal::stage3D::_AGALConverter::SourceRegister tmp52 = sr2;
					map->addSR(tmp52,::openfl::_internal::stage3D::_AGALConverter::RegisterUsage_obj::MATRIX_4_4,null());
				}
				else{
					int tmp42 = sr2->sourceMask = (int)15;
					sr1->sourceMask = tmp42;
					::String tmp43 = dr->toGLSL(null());
					::String tmp44 = (tmp43 + HX_HCSTRING(" = vec4(","\x85","\x68","\xad","\x0e"));
					::String tmp45 = (tmp44 + HX_HCSTRING("dot(","\x7f","\xf5","\x6d","\x42"));
					::String tmp46 = sr1->toGLSL(true,null());
					::String tmp47 = (tmp45 + tmp46);
					::String tmp48 = (tmp47 + HX_HCSTRING(",","\x2c","\x00","\x00","\x00"));
					::String tmp49 = sr2->toGLSL(true,(int)0);
					::String tmp50 = (tmp48 + tmp49);
					::String tmp51 = (tmp50 + HX_HCSTRING("), ","\xdd","\x42","\x1f","\x00"));
					::String tmp52 = (tmp51 + HX_HCSTRING("dot(","\x7f","\xf5","\x6d","\x42"));
					::String tmp53 = sr1->toGLSL(true,null());
					::String tmp54 = (tmp52 + tmp53);
					::String tmp55 = (tmp54 + HX_HCSTRING(",","\x2c","\x00","\x00","\x00"));
					::String tmp56 = sr2->toGLSL(true,(int)1);
					::String tmp57 = (tmp55 + tmp56);
					::String tmp58 = (tmp57 + HX_HCSTRING("), ","\xdd","\x42","\x1f","\x00"));
					::String tmp59 = (tmp58 + HX_HCSTRING("dot(","\x7f","\xf5","\x6d","\x42"));
					::String tmp60 = sr1->toGLSL(true,null());
					::String tmp61 = (tmp59 + tmp60);
					::String tmp62 = (tmp61 + HX_HCSTRING(",","\x2c","\x00","\x00","\x00"));
					::String tmp63 = sr2->toGLSL(true,(int)2);
					::String tmp64 = (tmp62 + tmp63);
					::String tmp65 = (tmp64 + HX_HCSTRING("), ","\xdd","\x42","\x1f","\x00"));
					::String tmp66 = (tmp65 + HX_HCSTRING("dot(","\x7f","\xf5","\x6d","\x42"));
					::String tmp67 = sr1->toGLSL(true,null());
					::String tmp68 = (tmp66 + tmp67);
					::String tmp69 = (tmp68 + HX_HCSTRING(",","\x2c","\x00","\x00","\x00"));
					::String tmp70 = sr2->toGLSL(true,(int)3);
					::String tmp71 = (tmp69 + tmp70);
					::String tmp72 = (tmp71 + HX_HCSTRING(")); // m44","\x52","\x19","\xfb","\xe5"));
					sb->add(tmp72);
					::openfl::_internal::stage3D::_AGALConverter::DestRegister tmp73 = dr;
					map->addDR(tmp73,::openfl::_internal::stage3D::_AGALConverter::RegisterUsage_obj::VECTOR_4);
					::openfl::_internal::stage3D::_AGALConverter::SourceRegister tmp74 = sr1;
					map->addSR(tmp74,::openfl::_internal::stage3D::_AGALConverter::RegisterUsage_obj::VECTOR_4,null());
					::openfl::_internal::stage3D::_AGALConverter::SourceRegister tmp75 = sr2;
					map->addSR(tmp75,::openfl::_internal::stage3D::_AGALConverter::RegisterUsage_obj::VECTOR_4,(int)0);
					::openfl::_internal::stage3D::_AGALConverter::SourceRegister tmp76 = sr2;
					map->addSR(tmp76,::openfl::_internal::stage3D::_AGALConverter::RegisterUsage_obj::VECTOR_4,(int)1);
					::openfl::_internal::stage3D::_AGALConverter::SourceRegister tmp77 = sr2;
					map->addSR(tmp77,::openfl::_internal::stage3D::_AGALConverter::RegisterUsage_obj::VECTOR_4,(int)2);
					::openfl::_internal::stage3D::_AGALConverter::SourceRegister tmp78 = sr2;
					map->addSR(tmp78,::openfl::_internal::stage3D::_AGALConverter::RegisterUsage_obj::VECTOR_4,(int)3);
				}
			}
			;break;
			case (int)25: {
				hx::AndEq(dr->mask,(int)7);
				::openfl::_internal::stage3D::_AGALConverter::SourceRegister tmp38 = sr2;
				::openfl::_internal::stage3D::_AGALConverter::RegisterUsage tmp39 = map->getRegisterUsage(tmp38);
				::openfl::_internal::stage3D::_AGALConverter::RegisterUsage existingUsage = tmp39;
				bool tmp40 = (existingUsage != ::openfl::_internal::stage3D::_AGALConverter::RegisterUsage_obj::VECTOR_4);
				bool tmp41;
				if ((tmp40)){
					tmp41 = (existingUsage != ::openfl::_internal::stage3D::_AGALConverter::RegisterUsage_obj::VECTOR_4_ARRAY);
				}
				else{
					tmp41 = false;
				}
				if ((tmp41)){
					::String tmp42 = dr->toGLSL(null());
					::String tmp43 = (tmp42 + HX_HCSTRING(" = ","\x63","\x7d","\x18","\x00"));
					::String tmp44 = sr1->toGLSL(null(),null());
					::String tmp45 = (tmp43 + tmp44);
					::String tmp46 = (tmp45 + HX_HCSTRING(" * ","\xd6","\x6c","\x18","\x00"));
					::String tmp47 = sr2->toGLSL(false,null());
					::String tmp48 = (tmp46 + tmp47);
					::String tmp49 = (tmp48 + HX_HCSTRING("; // m34","\x93","\x14","\x64","\x51"));
					sb->add(tmp49);
					::openfl::_internal::stage3D::_AGALConverter::DestRegister tmp50 = dr;
					map->addDR(tmp50,::openfl::_internal::stage3D::_AGALConverter::RegisterUsage_obj::VECTOR_4);
					::openfl::_internal::stage3D::_AGALConverter::SourceRegister tmp51 = sr1;
					map->addSR(tmp51,::openfl::_internal::stage3D::_AGALConverter::RegisterUsage_obj::VECTOR_4,null());
					::openfl::_internal::stage3D::_AGALConverter::SourceRegister tmp52 = sr2;
					map->addSR(tmp52,::openfl::_internal::stage3D::_AGALConverter::RegisterUsage_obj::MATRIX_4_4,null());
				}
				else{
					int tmp42 = sr2->sourceMask = (int)15;
					sr1->sourceMask = tmp42;
					::String tmp43 = dr->toGLSL(null());
					::String tmp44 = (tmp43 + HX_HCSTRING(" = vec3(","\xa6","\x67","\xad","\x0e"));
					::String tmp45 = (tmp44 + HX_HCSTRING("dot(","\x7f","\xf5","\x6d","\x42"));
					::String tmp46 = sr1->toGLSL(true,null());
					::String tmp47 = (tmp45 + tmp46);
					::String tmp48 = (tmp47 + HX_HCSTRING(",","\x2c","\x00","\x00","\x00"));
					::String tmp49 = sr2->toGLSL(true,(int)0);
					::String tmp50 = (tmp48 + tmp49);
					::String tmp51 = (tmp50 + HX_HCSTRING("), ","\xdd","\x42","\x1f","\x00"));
					::String tmp52 = (tmp51 + HX_HCSTRING("dot(","\x7f","\xf5","\x6d","\x42"));
					::String tmp53 = sr1->toGLSL(true,null());
					::String tmp54 = (tmp52 + tmp53);
					::String tmp55 = (tmp54 + HX_HCSTRING(",","\x2c","\x00","\x00","\x00"));
					::String tmp56 = sr2->toGLSL(true,(int)1);
					::String tmp57 = (tmp55 + tmp56);
					::String tmp58 = (tmp57 + HX_HCSTRING("),","\xe3","\x23","\x00","\x00"));
					::String tmp59 = (tmp58 + HX_HCSTRING("dot(","\x7f","\xf5","\x6d","\x42"));
					::String tmp60 = sr1->toGLSL(true,null());
					::String tmp61 = (tmp59 + tmp60);
					::String tmp62 = (tmp61 + HX_HCSTRING(",","\x2c","\x00","\x00","\x00"));
					::String tmp63 = sr2->toGLSL(true,(int)2);
					::String tmp64 = (tmp62 + tmp63);
					::String tmp65 = (tmp64 + HX_HCSTRING(")); // m34","\x73","\x18","\xfb","\xe5"));
					sb->add(tmp65);
					::openfl::_internal::stage3D::_AGALConverter::DestRegister tmp66 = dr;
					map->addDR(tmp66,::openfl::_internal::stage3D::_AGALConverter::RegisterUsage_obj::VECTOR_4);
					::openfl::_internal::stage3D::_AGALConverter::SourceRegister tmp67 = sr1;
					map->addSR(tmp67,::openfl::_internal::stage3D::_AGALConverter::RegisterUsage_obj::VECTOR_4,null());
					::openfl::_internal::stage3D::_AGALConverter::SourceRegister tmp68 = sr2;
					map->addSR(tmp68,::openfl::_internal::stage3D::_AGALConverter::RegisterUsage_obj::VECTOR_4,(int)0);
					::openfl::_internal::stage3D::_AGALConverter::SourceRegister tmp69 = sr2;
					map->addSR(tmp69,::openfl::_internal::stage3D::_AGALConverter::RegisterUsage_obj::VECTOR_4,(int)1);
					::openfl::_internal::stage3D::_AGALConverter::SourceRegister tmp70 = sr2;
					map->addSR(tmp70,::openfl::_internal::stage3D::_AGALConverter::RegisterUsage_obj::VECTOR_4,(int)2);
				}
			}
			;break;
			case (int)39: {
				sr1->sourceMask = (int)15;
				::String tmp38 = sr1->toGLSL(null(),null());
				::String tmp39 = (HX_HCSTRING("if (any(lessThan(","\x0d","\xa8","\x4d","\x9b") + tmp38);
				::String tmp40 = (tmp39 + HX_HCSTRING(", vec4(0)))) discard;","\x61","\xd7","\xc4","\xf0"));
				sb->add(tmp40);
				::openfl::_internal::stage3D::_AGALConverter::SourceRegister tmp41 = sr1;
				map->addSR(tmp41,::openfl::_internal::stage3D::_AGALConverter::RegisterUsage_obj::VECTOR_4,null());
			}
			;break;
			case (int)40: {
				cpp::Int64Struct tmp38 = source2;
				::openfl::_internal::stage3D::_AGALConverter::ProgramType tmp39 = programType;
				::openfl::_internal::stage3D::_AGALConverter::SamplerRegister tmp40 = ::openfl::_internal::stage3D::_AGALConverter::SamplerRegister_obj::parse(tmp38,tmp39);
				::openfl::_internal::stage3D::_AGALConverter::SamplerRegister sampler = tmp40;
				{
					int _g = sampler->d;
					int tmp41 = _g;
					switch( (int)(tmp41)){
						case (int)0: {
							sr1->sourceMask = (int)3;
							::openfl::_internal::stage3D::_AGALConverter::SamplerRegister tmp42 = sampler;
							map->addSaR(tmp42,::openfl::_internal::stage3D::_AGALConverter::RegisterUsage_obj::SAMPLER_2D);
							::String tmp43 = dr->toGLSL(null());
							::String tmp44 = (tmp43 + HX_HCSTRING(" = texture2D(","\x3e","\x55","\x2e","\x2f"));
							::String tmp45 = sampler->toGLSL();
							::String tmp46 = (tmp44 + tmp45);
							::String tmp47 = (tmp46 + HX_HCSTRING(", ","\x74","\x26","\x00","\x00"));
							::String tmp48 = sr1->toGLSL(null(),null());
							::String tmp49 = (tmp47 + tmp48);
							::String tmp50 = (tmp49 + HX_HCSTRING("); // tex","\x55","\x61","\x13","\x1a"));
							sb->add(tmp50);
						}
						;break;
						case (int)1: {
							sr1->sourceMask = (int)7;
							::String tmp42 = dr->toGLSL(null());
							::String tmp43 = (tmp42 + HX_HCSTRING(" = textureCube(","\x9b","\x4c","\xbc","\x01"));
							::String tmp44 = sampler->toGLSL();
							::String tmp45 = (tmp43 + tmp44);
							::String tmp46 = (tmp45 + HX_HCSTRING(", ","\x74","\x26","\x00","\x00"));
							::String tmp47 = sr1->toGLSL(null(),null());
							::String tmp48 = (tmp46 + tmp47);
							::String tmp49 = (tmp48 + HX_HCSTRING("); // tex","\x55","\x61","\x13","\x1a"));
							sb->add(tmp49);
							::openfl::_internal::stage3D::_AGALConverter::SamplerRegister tmp50 = sampler;
							map->addSaR(tmp50,::openfl::_internal::stage3D::_AGALConverter::RegisterUsage_obj::SAMPLER_CUBE);
						}
						;break;
					}
				}
				::openfl::_internal::stage3D::_AGALConverter::DestRegister tmp41 = dr;
				map->addDR(tmp41,::openfl::_internal::stage3D::_AGALConverter::RegisterUsage_obj::VECTOR_4);
				::openfl::_internal::stage3D::_AGALConverter::SourceRegister tmp42 = sr1;
				map->addSR(tmp42,::openfl::_internal::stage3D::_AGALConverter::RegisterUsage_obj::VECTOR_4,null());
				bool tmp43 = (samplerState != null());
				if ((tmp43)){
					::openfl::_internal::stage3D::SamplerState tmp44 = sampler->toSamplerState();
					samplerState[sampler->n] = tmp44;
				}
			}
			;break;
			case (int)41: {
				int tmp38 = sr2->sourceMask = (int)15;
				sr1->sourceMask = tmp38;
				::String tmp39 = dr->toGLSL(null());
				::String tmp40 = (tmp39 + HX_HCSTRING(" = vec4(greaterThanEqual(","\xaa","\xa3","\x51","\xec"));
				::String tmp41 = sr1->toGLSL(null(),null());
				::String tmp42 = (tmp40 + tmp41);
				::String tmp43 = (tmp42 + HX_HCSTRING(", ","\x74","\x26","\x00","\x00"));
				::String tmp44 = sr2->toGLSL(null(),null());
				::String tmp45 = (tmp43 + tmp44);
				::String tmp46 = (tmp45 + HX_HCSTRING("))","\xe0","\x23","\x00","\x00"));
				::String tmp47 = dr->getWriteMask();
				::String tmp48 = (tmp46 + tmp47);
				::String tmp49 = (tmp48 + HX_HCSTRING("; // ste","\xe9","\xda","\x68","\x51"));
				sb->add(tmp49);
				::openfl::_internal::stage3D::_AGALConverter::DestRegister tmp50 = dr;
				map->addDR(tmp50,::openfl::_internal::stage3D::_AGALConverter::RegisterUsage_obj::VECTOR_4);
				::openfl::_internal::stage3D::_AGALConverter::SourceRegister tmp51 = sr1;
				map->addSR(tmp51,::openfl::_internal::stage3D::_AGALConverter::RegisterUsage_obj::VECTOR_4,null());
				::openfl::_internal::stage3D::_AGALConverter::SourceRegister tmp52 = sr2;
				map->addSR(tmp52,::openfl::_internal::stage3D::_AGALConverter::RegisterUsage_obj::VECTOR_4,null());
			}
			;break;
			case (int)42: {
				int tmp38 = sr2->sourceMask = (int)15;
				sr1->sourceMask = tmp38;
				::String tmp39 = dr->toGLSL(null());
				::String tmp40 = (tmp39 + HX_HCSTRING(" = vec4(lessThan(","\x69","\xee","\xb4","\x35"));
				::String tmp41 = sr1->toGLSL(null(),null());
				::String tmp42 = (tmp40 + tmp41);
				::String tmp43 = (tmp42 + HX_HCSTRING(", ","\x74","\x26","\x00","\x00"));
				::String tmp44 = sr2->toGLSL(null(),null());
				::String tmp45 = (tmp43 + tmp44);
				::String tmp46 = (tmp45 + HX_HCSTRING("))","\xe0","\x23","\x00","\x00"));
				::String tmp47 = dr->getWriteMask();
				::String tmp48 = (tmp46 + tmp47);
				::String tmp49 = (tmp48 + HX_HCSTRING("; // slt","\x00","\xd4","\x68","\x51"));
				sb->add(tmp49);
				::openfl::_internal::stage3D::_AGALConverter::DestRegister tmp50 = dr;
				map->addDR(tmp50,::openfl::_internal::stage3D::_AGALConverter::RegisterUsage_obj::VECTOR_4);
				::openfl::_internal::stage3D::_AGALConverter::SourceRegister tmp51 = sr1;
				map->addSR(tmp51,::openfl::_internal::stage3D::_AGALConverter::RegisterUsage_obj::VECTOR_4,null());
				::openfl::_internal::stage3D::_AGALConverter::SourceRegister tmp52 = sr2;
				map->addSR(tmp52,::openfl::_internal::stage3D::_AGALConverter::RegisterUsage_obj::VECTOR_4,null());
			}
			;break;
			case (int)44: {
				int tmp38 = sr2->sourceMask = (int)15;
				sr1->sourceMask = tmp38;
				::String tmp39 = dr->toGLSL(null());
				::String tmp40 = (tmp39 + HX_HCSTRING(" = vec4(equal(","\x39","\x08","\x45","\xe1"));
				::String tmp41 = sr1->toGLSL(null(),null());
				::String tmp42 = (tmp40 + tmp41);
				::String tmp43 = (tmp42 + HX_HCSTRING(", ","\x74","\x26","\x00","\x00"));
				::String tmp44 = sr2->toGLSL(null(),null());
				::String tmp45 = (tmp43 + tmp44);
				::String tmp46 = (tmp45 + HX_HCSTRING("))","\xe0","\x23","\x00","\x00"));
				::String tmp47 = dr->getWriteMask();
				::String tmp48 = (tmp46 + tmp47);
				::String tmp49 = (tmp48 + HX_HCSTRING("; // seq","\xe4","\xcd","\x68","\x51"));
				sb->add(tmp49);
				::openfl::_internal::stage3D::_AGALConverter::DestRegister tmp50 = dr;
				map->addDR(tmp50,::openfl::_internal::stage3D::_AGALConverter::RegisterUsage_obj::VECTOR_4);
				::openfl::_internal::stage3D::_AGALConverter::SourceRegister tmp51 = sr1;
				map->addSR(tmp51,::openfl::_internal::stage3D::_AGALConverter::RegisterUsage_obj::VECTOR_4,null());
				::openfl::_internal::stage3D::_AGALConverter::SourceRegister tmp52 = sr2;
				map->addSR(tmp52,::openfl::_internal::stage3D::_AGALConverter::RegisterUsage_obj::VECTOR_4,null());
			}
			;break;
			case (int)45: {
				int tmp38 = sr2->sourceMask = (int)15;
				sr1->sourceMask = tmp38;
				::String tmp39 = dr->toGLSL(null());
				::String tmp40 = (tmp39 + HX_HCSTRING(" = vec4(notEqual(","\x42","\xaa","\xf1","\x97"));
				::String tmp41 = sr1->toGLSL(null(),null());
				::String tmp42 = (tmp40 + tmp41);
				::String tmp43 = (tmp42 + HX_HCSTRING(", ","\x74","\x26","\x00","\x00"));
				::String tmp44 = sr2->toGLSL(null(),null());
				::String tmp45 = (tmp43 + tmp44);
				::String tmp46 = (tmp45 + HX_HCSTRING("))","\xe0","\x23","\x00","\x00"));
				::String tmp47 = dr->getWriteMask();
				::String tmp48 = (tmp46 + tmp47);
				::String tmp49 = (tmp48 + HX_HCSTRING("; // sne","\xaf","\xd5","\x68","\x51"));
				sb->add(tmp49);
				::openfl::_internal::stage3D::_AGALConverter::DestRegister tmp50 = dr;
				map->addDR(tmp50,::openfl::_internal::stage3D::_AGALConverter::RegisterUsage_obj::VECTOR_4);
				::openfl::_internal::stage3D::_AGALConverter::SourceRegister tmp51 = sr1;
				map->addSR(tmp51,::openfl::_internal::stage3D::_AGALConverter::RegisterUsage_obj::VECTOR_4,null());
				::openfl::_internal::stage3D::_AGALConverter::SourceRegister tmp52 = sr2;
				map->addSR(tmp52,::openfl::_internal::stage3D::_AGALConverter::RegisterUsage_obj::VECTOR_4,null());
			}
			;break;
			default: {
				::String tmp38 = (HX_HCSTRING("Opcode ","\x72","\x65","\x6e","\xe7") + opcode);
				::openfl::errors::IllegalOperationError tmp39 = ::openfl::errors::IllegalOperationError_obj::__new(tmp38);
				HX_STACK_DO_THROW(tmp39);
			}
		}
		sb->add(HX_HCSTRING("\n","\x0a","\x00","\x00","\x00"));
	}
	Dynamic tmp15 = ::openfl::_internal::stage3D::AGALConverter_obj::limitedProfile;
	bool tmp16 = (tmp15 == null());
	if ((tmp16)){
		::lime::_backend::native::NativeGLRenderContext tmp17 = ::lime::graphics::opengl::GL_obj::context;
		Dynamic tmp18 = tmp17->getParameter((int)7938);
		::String version1 = tmp18;
		int tmp19 = version1.indexOf(HX_HCSTRING("OpenGL ES","\x5f","\xcb","\x92","\x95"),null());
		int tmp20 = (int)-1;
		bool tmp21 = (tmp19 > tmp20);
		bool tmp22 = !(tmp21);
		bool tmp23;
		if ((tmp22)){
			int tmp24 = version1.indexOf(HX_HCSTRING("WebGL","\x99","\x9f","\xe9","\x5a"),null());
			int tmp25 = tmp24;
			tmp23 = (tmp25 > (int)-1);
		}
		else{
			tmp23 = true;
		}
		::openfl::_internal::stage3D::AGALConverter_obj::limitedProfile = tmp23;
	}
	::StringBuf tmp17 = ::StringBuf_obj::__new();
	::StringBuf glsl = tmp17;
	bool tmp18 = (programType == ::openfl::_internal::stage3D::_AGALConverter::ProgramType_obj::VERTEX);
	::String tmp19;
	if ((tmp18)){
		tmp19 = HX_HCSTRING("vertex","\x64","\xdb","\x47","\xa1");
	}
	else{
		tmp19 = HX_HCSTRING("fragment","\xd0","\x5f","\xe5","\xad");
	}
	::String tmp20 = (HX_HCSTRING("// AGAL ","\xaf","\xbc","\x4a","\x8a") + tmp19);
	::String tmp21 = (tmp20 + HX_HCSTRING(" shader\n","\x25","\xc5","\xd4","\x85"));
	glsl->add(tmp21);
	Dynamic tmp22 = ::openfl::_internal::stage3D::AGALConverter_obj::limitedProfile;
	if ((tmp22)){
		glsl->add(HX_HCSTRING("#version 100\n","\x24","\x25","\x05","\x19"));
		glsl->add(HX_HCSTRING("precision highp float;\n","\x57","\x4a","\xf7","\x14"));
	}
	else{
		glsl->add(HX_HCSTRING("#version 120\n","\xa6","\xa9","\x06","\x19"));
	}
	::String tmp23 = map->toGLSL(false);
	glsl->add(tmp23);
	bool tmp24 = (programType == ::openfl::_internal::stage3D::_AGALConverter::ProgramType_obj::VERTEX);
	if ((tmp24)){
		glsl->add(HX_HCSTRING("uniform vec4 vcPositionScale;\n","\xcf","\xaa","\x4f","\x18"));
	}
	glsl->add(HX_HCSTRING("void main() {\n","\x49","\xb0","\xbf","\xfb"));
	::String tmp25 = map->toGLSL(true);
	glsl->add(tmp25);
	::String tmp26 = sb->b->join(HX_HCSTRING("","\x00","\x00","\x00","\x00"));
	glsl->add(tmp26);
	bool tmp27 = (programType == ::openfl::_internal::stage3D::_AGALConverter::ProgramType_obj::VERTEX);
	if ((tmp27)){
		glsl->add(HX_HCSTRING("\tgl_Position *= vcPositionScale;\n","\x7c","\xad","\x85","\x8d"));
	}
	glsl->add(HX_HCSTRING("}\n","\xed","\x6c","\x00","\x00"));
	::String tmp28 = glsl->b->join(HX_HCSTRING("","\x00","\x00","\x00","\x00"));
	return tmp28;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(AGALConverter_obj,convertToGLSL,return )


AGALConverter_obj::AGALConverter_obj()
{
}

bool AGALConverter_obj::__GetStatic(const ::String &inName, Dynamic &outValue, hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 10:
		if (HX_FIELD_EQ(inName,"readUInt64") ) { outValue = readUInt64_dyn(); return true;  }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"convertToGLSL") ) { outValue = convertToGLSL_dyn(); return true;  }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"limitedProfile") ) { outValue = limitedProfile; return true;  }
		if (HX_FIELD_EQ(inName,"prefixFromType") ) { outValue = prefixFromType_dyn(); return true;  }
	}
	return false;
}

bool AGALConverter_obj::__SetStatic(const ::String &inName,Dynamic &ioValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 14:
		if (HX_FIELD_EQ(inName,"limitedProfile") ) { limitedProfile=ioValue.Cast< Dynamic >(); return true; }
	}
	return false;
}

#if HXCPP_SCRIPTABLE
static hx::StorageInfo *sMemberStorageInfo = 0;
static hx::StaticInfo sStaticStorageInfo[] = {
	{hx::fsObject /*Dynamic*/ ,(void *) &AGALConverter_obj::limitedProfile,HX_HCSTRING("limitedProfile","\xef","\x13","\x1a","\x0a")},
	{ hx::fsUnknown, 0, null()}
};
#endif

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(AGALConverter_obj::__mClass,"__mClass");
	HX_MARK_MEMBER_NAME(AGALConverter_obj::limitedProfile,"limitedProfile");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(AGALConverter_obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(AGALConverter_obj::limitedProfile,"limitedProfile");
};

#endif

hx::Class AGALConverter_obj::__mClass;

static ::String sStaticFields[] = {
	HX_HCSTRING("limitedProfile","\xef","\x13","\x1a","\x0a"),
	HX_HCSTRING("prefixFromType","\xf6","\x38","\xec","\xc8"),
	HX_HCSTRING("readUInt64","\x2e","\x21","\x8b","\x12"),
	HX_HCSTRING("convertToGLSL","\x4c","\x43","\x62","\xb5"),
	::String(null()) };

void AGALConverter_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("openfl._internal.stage3D.AGALConverter","\xa0","\x2d","\xe2","\x9e");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &AGALConverter_obj::__GetStatic;
	__mClass->mSetStaticField = &AGALConverter_obj::__SetStatic;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(sStaticFields);
	__mClass->mMembers = hx::Class_obj::dupFunctions(0 /* sMemberFields */);
	__mClass->mCanCast = hx::TCanCast< AGALConverter_obj >;
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

void AGALConverter_obj::__boot()
{
	limitedProfile= true;
}

} // end namespace openfl
} // end namespace _internal
} // end namespace stage3D
