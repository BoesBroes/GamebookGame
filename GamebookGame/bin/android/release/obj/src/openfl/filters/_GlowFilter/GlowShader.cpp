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
#ifndef INCLUDED_openfl_filters__GlowFilter_GlowShader
#include <openfl/filters/_GlowFilter/GlowShader.h>
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
namespace _GlowFilter{

Void GlowShader_obj::__construct()
{
{
	::String tmp = this->__glFragmentSource;
	bool tmp1 = (tmp == null());
	if ((tmp1)){
		this->__glFragmentSource = HX_HCSTRING("varying float vAlpha;\n\t\tvarying vec2 vTexCoord;\n\t\tuniform sampler2D uImage0;\n\t\t\n\t\tuniform vec4 uColor;\n\t\t\n\t\tvarying vec2 vBlurCoords[7];\n\t\t\n\t\tvoid main(void) {\n\t\t\t\n\t\t\tfloat a = 0.0;\n\t\t\ta += texture2D(uImage0, vBlurCoords[0]).a * 0.00443;\n\t\t\ta += texture2D(uImage0, vBlurCoords[1]).a * 0.05399;\n\t\t\ta += texture2D(uImage0, vBlurCoords[2]).a * 0.24197;\n\t\t\ta += texture2D(uImage0, vBlurCoords[3]).a * 0.39894;\n\t\t\ta += texture2D(uImage0, vBlurCoords[4]).a * 0.24197;\n\t\t\ta += texture2D(uImage0, vBlurCoords[5]).a * 0.05399;\n\t\t\ta += texture2D(uImage0, vBlurCoords[6]).a * 0.00443;\n\t\t\ta *= uColor.a;\n\t\t\t\n\t\t\tgl_FragColor = vec4(uColor.rgb * a, a);\n\t\t\t\n\t\t}","\x9e","\x7e","\xf1","\xb7");
	}
	::String tmp2 = this->__glVertexSource;
	bool tmp3 = (tmp2 == null());
	if ((tmp3)){
		this->__glVertexSource = HX_HCSTRING("attribute float aAlpha;\n\t\tattribute vec4 aPosition;\n\t\tattribute vec2 aTexCoord;\n\t\tvarying float vAlpha;\n\t\tvarying vec2 vTexCoord;\n\t\t\n\t\tuniform mat4 uMatrix;\n\t\t\n\t\tuniform vec2 uRadius;\n\t\tvarying vec2 vBlurCoords[7];\n\t\tuniform vec2 uTextureSize;\n\t\t\n\t\tvoid main(void) {\n\t\t\t\n\t\t\tvAlpha = aAlpha;\n\t\t\tvTexCoord = aTexCoord;\n\t\t\tgl_Position = uMatrix * aPosition;\n\t\t\t\n\t\t\tvec2 r = uRadius / uTextureSize;\n\t\t\tvBlurCoords[0] = aTexCoord - r * 1.0;\n\t\t\tvBlurCoords[1] = aTexCoord - r * 0.75;\n\t\t\tvBlurCoords[2] = aTexCoord - r * 0.5;\n\t\t\tvBlurCoords[3] = aTexCoord;\n\t\t\tvBlurCoords[4] = aTexCoord + r * 0.5;\n\t\t\tvBlurCoords[5] = aTexCoord + r * 0.75;\n\t\t\tvBlurCoords[6] = aTexCoord + r * 1.0;\n\t\t\t\n\t\t}","\x76","\x1b","\x0f","\xea");
	}
	super::__construct(null());
	::openfl::display::ShaderData tmp4 = this->get_data();
	tmp4->__Field(HX_HCSTRING("uRadius","\xa7","\x8a","\xda","\xe6"), hx::paccDynamic )->__FieldRef(HX_HCSTRING("value","\x71","\x7f","\xb8","\x31")) = cpp::ArrayBase_obj::__new().Add((int)0).Add((int)0);
	::openfl::display::ShaderData tmp5 = this->get_data();
	tmp5->__Field(HX_HCSTRING("uColor","\xae","\x18","\x4b","\xa5"), hx::paccDynamic )->__FieldRef(HX_HCSTRING("value","\x71","\x7f","\xb8","\x31")) = cpp::ArrayBase_obj::__new().Add((int)0).Add((int)0).Add((int)0).Add((int)0);
}
;
	return null();
}

//GlowShader_obj::~GlowShader_obj() { }

Dynamic GlowShader_obj::__CreateEmpty() { return  new GlowShader_obj; }
hx::ObjectPtr< GlowShader_obj > GlowShader_obj::__new()
{  hx::ObjectPtr< GlowShader_obj > _result_ = new GlowShader_obj();
	_result_->__construct();
	return _result_;}

Dynamic GlowShader_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< GlowShader_obj > _result_ = new GlowShader_obj();
	_result_->__construct();
	return _result_;}

Void GlowShader_obj::__update( ){
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



GlowShader_obj::GlowShader_obj()
{
}

Dynamic GlowShader_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
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
	HX_MARK_MEMBER_NAME(GlowShader_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(GlowShader_obj::__mClass,"__mClass");
};

#endif

hx::Class GlowShader_obj::__mClass;

void GlowShader_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("openfl.filters._GlowFilter.GlowShader","\xed","\x81","\xce","\xa0");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = hx::Class_obj::dupFunctions(sMemberFields);
	__mClass->mCanCast = hx::TCanCast< GlowShader_obj >;
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
} // end namespace _GlowFilter
