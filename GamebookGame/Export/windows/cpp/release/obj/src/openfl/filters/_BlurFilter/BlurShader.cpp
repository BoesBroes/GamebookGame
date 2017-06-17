#include <hxcpp.h>

#ifndef INCLUDED_haxe_io_Bytes
#include <haxe/io/Bytes.h>
#endif
#ifndef INCLUDED_openfl_display_BitmapData
#include <openfl/display/BitmapData.h>
#endif
#ifndef INCLUDED_openfl_display_IBitmapDrawable
#include <openfl/display/IBitmapDrawable.h>
#endif
#ifndef INCLUDED_openfl_display_Shader
#include <openfl/display/Shader.h>
#endif
#ifndef INCLUDED_openfl_display_ShaderData
#include <openfl/display/ShaderData.h>
#endif
#ifndef INCLUDED_openfl_display_ShaderInput_openfl_display_BitmapData
#include <openfl/display/ShaderInput_openfl_display_BitmapData.h>
#endif
#ifndef INCLUDED_openfl_filters__BlurFilter_BlurShader
#include <openfl/filters/_BlurFilter/BlurShader.h>
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
namespace _BlurFilter{

Void BlurShader_obj::__construct()
{
{
	::String tmp = this->__glFragmentSource;
	bool tmp1 = (tmp == null());
	if ((tmp1)){
		this->__glFragmentSource = HX_HCSTRING("varying float vAlpha;\n\t\tvarying vec2 vTexCoord;\n\t\tuniform sampler2D uImage0;\n\t\t\n\t\tvarying vec2 vBlurCoords[7];\n\t\t\n\t\tvoid main(void) {\n\t\t\t\n\t\t\tvec4 sum = vec4(0.0);\n\t\t\tsum += texture2D(uImage0, vBlurCoords[0]) * 0.00443;\n\t\t\tsum += texture2D(uImage0, vBlurCoords[1]) * 0.05399;\n\t\t\tsum += texture2D(uImage0, vBlurCoords[2]) * 0.24197;\n\t\t\tsum += texture2D(uImage0, vBlurCoords[3]) * 0.39894;\n\t\t\tsum += texture2D(uImage0, vBlurCoords[4]) * 0.24197;\n\t\t\tsum += texture2D(uImage0, vBlurCoords[5]) * 0.05399;\n\t\t\tsum += texture2D(uImage0, vBlurCoords[6]) * 0.00443;\n\t\t\t\n\t\t\tgl_FragColor = sum;\n\t\t\t\n\t\t}","\xcf","\x19","\x0b","\x19");
	}
	::String tmp2 = this->__glVertexSource;
	bool tmp3 = (tmp2 == null());
	if ((tmp3)){
		this->__glVertexSource = HX_HCSTRING("attribute float aAlpha;\n\t\tattribute vec4 aPosition;\n\t\tattribute vec2 aTexCoord;\n\t\tvarying float vAlpha;\n\t\tvarying vec2 vTexCoord;\n\t\t\n\t\tuniform mat4 uMatrix;\n\t\t\n\t\tuniform vec2 uRadius;\n\t\tvarying vec2 vBlurCoords[7];\n\t\tuniform vec2 uTextureSize;\n\t\t\n\t\tvoid main(void) {\n\t\t\t\n\t\t\tvAlpha = aAlpha;\n\t\t\tvTexCoord = aTexCoord;\n\t\t\tgl_Position = uMatrix * aPosition;\n\t\t\t\n\t\t\tvec2 r = uRadius / uTextureSize;\n\t\t\tvBlurCoords[0] = aTexCoord - r * 1.0;\n\t\t\tvBlurCoords[1] = aTexCoord - r * 0.75;\n\t\t\tvBlurCoords[2] = aTexCoord - r * 0.5;\n\t\t\tvBlurCoords[3] = aTexCoord;\n\t\t\tvBlurCoords[4] = aTexCoord + r * 0.5;\n\t\t\tvBlurCoords[5] = aTexCoord + r * 0.75;\n\t\t\tvBlurCoords[6] = aTexCoord + r * 1.0;\n\t\t\t\n\t\t}","\x76","\x1b","\x0f","\xea");
	}
	super::__construct(null());
	::openfl::display::ShaderData tmp4 = this->get_data();
	tmp4->__Field(HX_HCSTRING("uRadius","\xa7","\x8a","\xda","\xe6"), hx::paccDynamic )->__FieldRef(HX_HCSTRING("value","\x71","\x7f","\xb8","\x31")) = cpp::ArrayBase_obj::__new().Add((int)0).Add((int)0);
}
;
	return null();
}

//BlurShader_obj::~BlurShader_obj() { }

Dynamic BlurShader_obj::__CreateEmpty() { return  new BlurShader_obj; }
hx::ObjectPtr< BlurShader_obj > BlurShader_obj::__new()
{  hx::ObjectPtr< BlurShader_obj > _result_ = new BlurShader_obj();
	_result_->__construct();
	return _result_;}

Dynamic BlurShader_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< BlurShader_obj > _result_ = new BlurShader_obj();
	_result_->__construct();
	return _result_;}

Void BlurShader_obj::__update( ){
{
		::openfl::display::ShaderData tmp = this->get_data();
		::openfl::display::BitmapData tmp1 = tmp->uImage0->input;
		int tmp2 = tmp1->width;
		::openfl::display::ShaderData tmp3 = this->get_data();
		::openfl::display::BitmapData tmp4 = tmp3->uImage0->input;
		int tmp5 = tmp4->height;
		::openfl::display::ShaderData tmp6 = this->get_data();
		tmp6->__Field(HX_HCSTRING("uTextureSize","\xc7","\x50","\x82","\xf3"), hx::paccDynamic )->__FieldRef(HX_HCSTRING("value","\x71","\x7f","\xb8","\x31")) = cpp::ArrayBase_obj::__new().Add(tmp2).Add(tmp5);
		this->super::__update();
	}
return null();
}



BlurShader_obj::BlurShader_obj()
{
}

Dynamic BlurShader_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 8:
		if (HX_FIELD_EQ(inName,"__update") ) { return __update_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

#if HXCPP_SCRIPTABLE
static hx::StorageInfo *sMemberStorageInfo = 0;
static hx::StaticInfo *sStaticStorageInfo = 0;
#endif

static ::String sMemberFields[] = {
	HX_HCSTRING("__update","\x29","\xf1","\x34","\x2f"),
	::String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(BlurShader_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(BlurShader_obj::__mClass,"__mClass");
};

#endif

hx::Class BlurShader_obj::__mClass;

void BlurShader_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("openfl.filters._BlurFilter.BlurShader","\x2d","\x54","\x9f","\x30");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = hx::Class_obj::dupFunctions(sMemberFields);
	__mClass->mCanCast = hx::TCanCast< BlurShader_obj >;
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
} // end namespace _BlurFilter
