#include <hxcpp.h>

#ifndef INCLUDED_haxe_io_Bytes
#include <haxe/io/Bytes.h>
#endif
#ifndef INCLUDED_openfl_display_ShaderData
#include <openfl/display/ShaderData.h>
#endif
#ifndef INCLUDED_openfl_display_ShaderParameter_Float
#include <openfl/display/ShaderParameter_Float.h>
#endif
#ifndef INCLUDED_openfl_filters__GlowShader_ShaderData
#include <openfl/filters/_GlowShader_ShaderData.h>
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

Void _GlowShader_ShaderData_obj::__construct(::openfl::utils::ByteArrayData byteArray)
{
HX_STACK_FRAME("openfl.filters._GlowShader_ShaderData","new",0x8be23560,"openfl.filters._GlowShader_ShaderData.new","openfl/display/Shader.hx",19,0xae8f5dcd)
HX_STACK_THIS(this)
HX_STACK_ARG(byteArray,"byteArray")
{
	HX_STACK_LINE(19)
	::openfl::utils::ByteArrayData tmp = byteArray;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(19)
	super::__construct(tmp);
}
;
	return null();
}

//_GlowShader_ShaderData_obj::~_GlowShader_ShaderData_obj() { }

Dynamic _GlowShader_ShaderData_obj::__CreateEmpty() { return  new _GlowShader_ShaderData_obj; }
hx::ObjectPtr< _GlowShader_ShaderData_obj > _GlowShader_ShaderData_obj::__new(::openfl::utils::ByteArrayData byteArray)
{  hx::ObjectPtr< _GlowShader_ShaderData_obj > _result_ = new _GlowShader_ShaderData_obj();
	_result_->__construct(byteArray);
	return _result_;}

Dynamic _GlowShader_ShaderData_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< _GlowShader_ShaderData_obj > _result_ = new _GlowShader_ShaderData_obj();
	_result_->__construct(inArgs[0]);
	return _result_;}


_GlowShader_ShaderData_obj::_GlowShader_ShaderData_obj()
{
}

void _GlowShader_ShaderData_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(_GlowShader_ShaderData);
	HX_MARK_MEMBER_NAME(uRadius,"uRadius");
	HX_MARK_MEMBER_NAME(uTextureSize,"uTextureSize");
	HX_MARK_MEMBER_NAME(uColor,"uColor");
	::openfl::display::ShaderData_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void _GlowShader_ShaderData_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(uRadius,"uRadius");
	HX_VISIT_MEMBER_NAME(uTextureSize,"uTextureSize");
	HX_VISIT_MEMBER_NAME(uColor,"uColor");
	::openfl::display::ShaderData_obj::__Visit(HX_VISIT_ARG);
}

Dynamic _GlowShader_ShaderData_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 6:
		if (HX_FIELD_EQ(inName,"uColor") ) { return uColor; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"uRadius") ) { return uRadius; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"uTextureSize") ) { return uTextureSize; }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic _GlowShader_ShaderData_obj::__SetField(const ::String &inName,const Dynamic &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 6:
		if (HX_FIELD_EQ(inName,"uColor") ) { uColor=inValue.Cast< ::openfl::display::ShaderParameter_Float >(); return inValue; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"uRadius") ) { uRadius=inValue.Cast< ::openfl::display::ShaderParameter_Float >(); return inValue; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"uTextureSize") ) { uTextureSize=inValue.Cast< ::openfl::display::ShaderParameter_Float >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void _GlowShader_ShaderData_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("uRadius","\xa7","\x8a","\xda","\xe6"));
	outFields->push(HX_HCSTRING("uTextureSize","\xc7","\x50","\x82","\xf3"));
	outFields->push(HX_HCSTRING("uColor","\xae","\x18","\x4b","\xa5"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsObject /*::openfl::display::ShaderParameter_Float*/ ,(int)offsetof(_GlowShader_ShaderData_obj,uRadius),HX_HCSTRING("uRadius","\xa7","\x8a","\xda","\xe6")},
	{hx::fsObject /*::openfl::display::ShaderParameter_Float*/ ,(int)offsetof(_GlowShader_ShaderData_obj,uTextureSize),HX_HCSTRING("uTextureSize","\xc7","\x50","\x82","\xf3")},
	{hx::fsObject /*::openfl::display::ShaderParameter_Float*/ ,(int)offsetof(_GlowShader_ShaderData_obj,uColor),HX_HCSTRING("uColor","\xae","\x18","\x4b","\xa5")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo *sStaticStorageInfo = 0;
#endif

static ::String sMemberFields[] = {
	HX_HCSTRING("uRadius","\xa7","\x8a","\xda","\xe6"),
	HX_HCSTRING("uTextureSize","\xc7","\x50","\x82","\xf3"),
	HX_HCSTRING("uColor","\xae","\x18","\x4b","\xa5"),
	::String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(_GlowShader_ShaderData_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(_GlowShader_ShaderData_obj::__mClass,"__mClass");
};

#endif

hx::Class _GlowShader_ShaderData_obj::__mClass;

void _GlowShader_ShaderData_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("openfl.filters._GlowShader_ShaderData","\x6e","\x45","\x0c","\xfb");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = hx::Class_obj::dupFunctions(sMemberFields);
	__mClass->mCanCast = hx::TCanCast< _GlowShader_ShaderData_obj >;
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
