#include <hxcpp.h>

#ifndef INCLUDED_lime_media_codecs_vorbis_VorbisInfo
#include <lime/media/codecs/vorbis/VorbisInfo.h>
#endif
namespace lime{
namespace media{
namespace codecs{
namespace vorbis{

Void VorbisInfo_obj::__construct()
{
HX_STACK_FRAME("lime.media.codecs.vorbis.VorbisInfo","new",0x2799e320,"lime.media.codecs.vorbis.VorbisInfo.new","lime/media/codecs/vorbis/VorbisInfo.hx",16,0x2b6452ae)
HX_STACK_THIS(this)
{
}
;
	return null();
}

//VorbisInfo_obj::~VorbisInfo_obj() { }

Dynamic VorbisInfo_obj::__CreateEmpty() { return  new VorbisInfo_obj; }
hx::ObjectPtr< VorbisInfo_obj > VorbisInfo_obj::__new()
{  hx::ObjectPtr< VorbisInfo_obj > _result_ = new VorbisInfo_obj();
	_result_->__construct();
	return _result_;}

Dynamic VorbisInfo_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< VorbisInfo_obj > _result_ = new VorbisInfo_obj();
	_result_->__construct();
	return _result_;}


VorbisInfo_obj::VorbisInfo_obj()
{
}

Dynamic VorbisInfo_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"rate") ) { return rate; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"version") ) { return version; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"channels") ) { return channels; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"bitrateLower") ) { return bitrateLower; }
		if (HX_FIELD_EQ(inName,"bitrateUpper") ) { return bitrateUpper; }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"bitrateNominal") ) { return bitrateNominal; }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic VorbisInfo_obj::__SetField(const ::String &inName,const Dynamic &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"rate") ) { rate=inValue.Cast< int >(); return inValue; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"version") ) { version=inValue.Cast< int >(); return inValue; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"channels") ) { channels=inValue.Cast< int >(); return inValue; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"bitrateLower") ) { bitrateLower=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"bitrateUpper") ) { bitrateUpper=inValue.Cast< int >(); return inValue; }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"bitrateNominal") ) { bitrateNominal=inValue.Cast< int >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void VorbisInfo_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("bitrateLower","\x94","\xf0","\xd0","\x09"));
	outFields->push(HX_HCSTRING("bitrateNominal","\x6f","\x84","\x28","\x68"));
	outFields->push(HX_HCSTRING("bitrateUpper","\xf5","\x0f","\x10","\x39"));
	outFields->push(HX_HCSTRING("channels","\x50","\xaa","\xee","\x6a"));
	outFields->push(HX_HCSTRING("rate","\xe0","\x52","\xa4","\x4b"));
	outFields->push(HX_HCSTRING("version","\x18","\xe7","\xf1","\x7c"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsInt,(int)offsetof(VorbisInfo_obj,bitrateLower),HX_HCSTRING("bitrateLower","\x94","\xf0","\xd0","\x09")},
	{hx::fsInt,(int)offsetof(VorbisInfo_obj,bitrateNominal),HX_HCSTRING("bitrateNominal","\x6f","\x84","\x28","\x68")},
	{hx::fsInt,(int)offsetof(VorbisInfo_obj,bitrateUpper),HX_HCSTRING("bitrateUpper","\xf5","\x0f","\x10","\x39")},
	{hx::fsInt,(int)offsetof(VorbisInfo_obj,channels),HX_HCSTRING("channels","\x50","\xaa","\xee","\x6a")},
	{hx::fsInt,(int)offsetof(VorbisInfo_obj,rate),HX_HCSTRING("rate","\xe0","\x52","\xa4","\x4b")},
	{hx::fsInt,(int)offsetof(VorbisInfo_obj,version),HX_HCSTRING("version","\x18","\xe7","\xf1","\x7c")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo *sStaticStorageInfo = 0;
#endif

static ::String sMemberFields[] = {
	HX_HCSTRING("bitrateLower","\x94","\xf0","\xd0","\x09"),
	HX_HCSTRING("bitrateNominal","\x6f","\x84","\x28","\x68"),
	HX_HCSTRING("bitrateUpper","\xf5","\x0f","\x10","\x39"),
	HX_HCSTRING("channels","\x50","\xaa","\xee","\x6a"),
	HX_HCSTRING("rate","\xe0","\x52","\xa4","\x4b"),
	HX_HCSTRING("version","\x18","\xe7","\xf1","\x7c"),
	::String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(VorbisInfo_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(VorbisInfo_obj::__mClass,"__mClass");
};

#endif

hx::Class VorbisInfo_obj::__mClass;

void VorbisInfo_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("lime.media.codecs.vorbis.VorbisInfo","\x2e","\x13","\x6a","\x72");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = hx::Class_obj::dupFunctions(sMemberFields);
	__mClass->mCanCast = hx::TCanCast< VorbisInfo_obj >;
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

} // end namespace lime
} // end namespace media
} // end namespace codecs
} // end namespace vorbis
