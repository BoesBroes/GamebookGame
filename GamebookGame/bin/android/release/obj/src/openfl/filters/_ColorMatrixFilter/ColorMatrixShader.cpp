#include <hxcpp.h>

#ifndef INCLUDED_haxe_io_Bytes
#include <haxe/io/Bytes.h>
#endif
#ifndef INCLUDED_openfl_display_Shader
#include <openfl/display/Shader.h>
#endif
#ifndef INCLUDED_openfl_display_ShaderData
#include <openfl/display/ShaderData.h>
#endif
#ifndef INCLUDED_openfl_filters__ColorMatrixFilter_ColorMatrixShader
#include <openfl/filters/_ColorMatrixFilter/ColorMatrixShader.h>
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
namespace openfl{
namespace filters{
namespace _ColorMatrixFilter{

Void ColorMatrixShader_obj::__construct()
{
{
	::String tmp = this->__glFragmentSource;
	bool tmp1 = (tmp == null());
	if ((tmp1)){
		this->__glFragmentSource = HX_HCSTRING("varying float vAlpha;\n\t\tvarying vec2 vTexCoord;\n\t\tuniform sampler2D uImage0;\n\t\t\n\t\tuniform mat4 uMultipliers;\n\t\tuniform vec4 uOffsets;\n\t\t\n\t\tvoid main(void) {\n\t\t\t\n\t\t\tvec4 color = texture2D (uImage0, vTexCoord);\n\t\t\t\n\t\t\tif (color.a == 0.0) {\n\t\t\t\t\n\t\t\t\tgl_FragColor = vec4 (0.0, 0.0, 0.0, 0.0);\n\t\t\t\t\n\t\t\t} else {\n\t\t\t\t\n\t\t\t\tcolor = vec4 (color.rgb / color.a, color.a);\n\t\t\t\tcolor = uOffsets + color * uMultipliers;\n\t\t\t\t\n\t\t\t\tgl_FragColor = vec4 (color.rgb * color.a * vAlpha, color.a * vAlpha);\n\t\t\t\t\n\t\t\t}\n\t\t\t\n\t\t}","\x82","\xf3","\x21","\x4e");
	}
	super::__construct(null());
	::openfl::display::ShaderData tmp2 = this->get_data();
	tmp2->__Field(HX_HCSTRING("uMultipliers","\x5d","\x5b","\x61","\xe5"), hx::paccDynamic )->__FieldRef(HX_HCSTRING("value","\x71","\x7f","\xb8","\x31")) = cpp::ArrayBase_obj::__new().Add((int)1).Add((int)0).Add((int)0).Add((int)0).Add((int)0).Add((int)1).Add((int)0).Add((int)0).Add((int)0).Add((int)0).Add((int)1).Add((int)0).Add((int)0).Add((int)0).Add((int)0).Add((int)1);
	::openfl::display::ShaderData tmp3 = this->get_data();
	tmp3->__Field(HX_HCSTRING("uOffsets","\x8b","\x59","\xc4","\xc8"), hx::paccDynamic )->__FieldRef(HX_HCSTRING("value","\x71","\x7f","\xb8","\x31")) = cpp::ArrayBase_obj::__new().Add((int)0).Add((int)0).Add((int)0).Add((int)0);
}
;
	return null();
}

//ColorMatrixShader_obj::~ColorMatrixShader_obj() { }

Dynamic ColorMatrixShader_obj::__CreateEmpty() { return  new ColorMatrixShader_obj; }
hx::ObjectPtr< ColorMatrixShader_obj > ColorMatrixShader_obj::__new()
{  hx::ObjectPtr< ColorMatrixShader_obj > _result_ = new ColorMatrixShader_obj();
	_result_->__construct();
	return _result_;}

Dynamic ColorMatrixShader_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< ColorMatrixShader_obj > _result_ = new ColorMatrixShader_obj();
	_result_->__construct();
	return _result_;}

Void ColorMatrixShader_obj::init( Array< Float > matrix){
{
		::openfl::display::ShaderData tmp = this->get_data();
		Array< Float > multipliers = tmp->__Field(HX_HCSTRING("uMultipliers","\x5d","\x5b","\x61","\xe5"), hx::paccDynamic )->__Field(HX_HCSTRING("value","\x71","\x7f","\xb8","\x31"), hx::paccDynamic );
		::openfl::display::ShaderData tmp1 = this->get_data();
		Array< Float > offsets = tmp1->__Field(HX_HCSTRING("uOffsets","\x8b","\x59","\xc4","\xc8"), hx::paccDynamic )->__Field(HX_HCSTRING("value","\x71","\x7f","\xb8","\x31"), hx::paccDynamic );
		Float tmp2 = matrix->__get((int)0);
		multipliers[(int)0] = tmp2;
		Float tmp3 = matrix->__get((int)1);
		multipliers[(int)1] = tmp3;
		Float tmp4 = matrix->__get((int)2);
		multipliers[(int)2] = tmp4;
		Float tmp5 = matrix->__get((int)3);
		multipliers[(int)3] = tmp5;
		Float tmp6 = matrix->__get((int)5);
		multipliers[(int)4] = tmp6;
		Float tmp7 = matrix->__get((int)6);
		multipliers[(int)5] = tmp7;
		Float tmp8 = matrix->__get((int)7);
		multipliers[(int)6] = tmp8;
		Float tmp9 = matrix->__get((int)8);
		multipliers[(int)7] = tmp9;
		Float tmp10 = matrix->__get((int)10);
		multipliers[(int)8] = tmp10;
		Float tmp11 = matrix->__get((int)11);
		multipliers[(int)9] = tmp11;
		Float tmp12 = matrix->__get((int)12);
		multipliers[(int)10] = tmp12;
		Float tmp13 = matrix->__get((int)13);
		multipliers[(int)11] = tmp13;
		Float tmp14 = matrix->__get((int)15);
		multipliers[(int)12] = tmp14;
		Float tmp15 = matrix->__get((int)16);
		multipliers[(int)13] = tmp15;
		Float tmp16 = matrix->__get((int)17);
		multipliers[(int)14] = tmp16;
		Float tmp17 = matrix->__get((int)18);
		multipliers[(int)15] = tmp17;
		Float tmp18 = matrix->__get((int)4);
		Float tmp19 = (Float(tmp18) / Float(((Float)255.0)));
		offsets[(int)0] = tmp19;
		Float tmp20 = matrix->__get((int)9);
		Float tmp21 = (Float(tmp20) / Float(((Float)255.0)));
		offsets[(int)1] = tmp21;
		Float tmp22 = matrix->__get((int)14);
		Float tmp23 = (Float(tmp22) / Float(((Float)255.0)));
		offsets[(int)2] = tmp23;
		Float tmp24 = matrix->__get((int)19);
		Float tmp25 = (Float(tmp24) / Float(((Float)255.0)));
		offsets[(int)3] = tmp25;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(ColorMatrixShader_obj,init,(void))


ColorMatrixShader_obj::ColorMatrixShader_obj()
{
}

Dynamic ColorMatrixShader_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"init") ) { return init_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

#if HXCPP_SCRIPTABLE
static hx::StorageInfo *sMemberStorageInfo = 0;
static hx::StaticInfo *sStaticStorageInfo = 0;
#endif

static ::String sMemberFields[] = {
	HX_HCSTRING("init","\x10","\x3b","\xbb","\x45"),
	::String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(ColorMatrixShader_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(ColorMatrixShader_obj::__mClass,"__mClass");
};

#endif

hx::Class ColorMatrixShader_obj::__mClass;

void ColorMatrixShader_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("openfl.filters._ColorMatrixFilter.ColorMatrixShader","\x29","\x3c","\x26","\xa1");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = hx::Class_obj::dupFunctions(sMemberFields);
	__mClass->mCanCast = hx::TCanCast< ColorMatrixShader_obj >;
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
} // end namespace filters
} // end namespace _ColorMatrixFilter
