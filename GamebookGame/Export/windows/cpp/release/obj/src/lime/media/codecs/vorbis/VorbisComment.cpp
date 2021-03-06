#include <hxcpp.h>

#ifndef INCLUDED_lime_media_codecs_vorbis_VorbisComment
#include <lime/media/codecs/vorbis/VorbisComment.h>
#endif
namespace lime{
namespace media{
namespace codecs{
namespace vorbis{

Void VorbisComment_obj::__construct()
{
HX_STACK_FRAME("lime.media.codecs.vorbis.VorbisComment","new",0x6e183411,"lime.media.codecs.vorbis.VorbisComment.new","lime/media/codecs/vorbis/VorbisComment.hx",11,0xaf8d94e1)
HX_STACK_THIS(this)
{
}
;
	return null();
}

//VorbisComment_obj::~VorbisComment_obj() { }

Dynamic VorbisComment_obj::__CreateEmpty() { return  new VorbisComment_obj; }
hx::ObjectPtr< VorbisComment_obj > VorbisComment_obj::__new()
{  hx::ObjectPtr< VorbisComment_obj > _result_ = new VorbisComment_obj();
	_result_->__construct();
	return _result_;}

Dynamic VorbisComment_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< VorbisComment_obj > _result_ = new VorbisComment_obj();
	_result_->__construct();
	return _result_;}


VorbisComment_obj::VorbisComment_obj()
{
}

void VorbisComment_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(VorbisComment);
	HX_MARK_MEMBER_NAME(userComments,"userComments");
	HX_MARK_MEMBER_NAME(vendor,"vendor");
	HX_MARK_END_CLASS();
}

void VorbisComment_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(userComments,"userComments");
	HX_VISIT_MEMBER_NAME(vendor,"vendor");
}

Dynamic VorbisComment_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 6:
		if (HX_FIELD_EQ(inName,"vendor") ) { return vendor; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"userComments") ) { return userComments; }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic VorbisComment_obj::__SetField(const ::String &inName,const Dynamic &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 6:
		if (HX_FIELD_EQ(inName,"vendor") ) { vendor=inValue.Cast< ::String >(); return inValue; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"userComments") ) { userComments=inValue.Cast< Array< ::String > >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void VorbisComment_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("userComments","\x9f","\xaa","\xf5","\x57"));
	outFields->push(HX_HCSTRING("vendor","\x88","\xe5","\x96","\x9e"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsObject /*Array< ::String >*/ ,(int)offsetof(VorbisComment_obj,userComments),HX_HCSTRING("userComments","\x9f","\xaa","\xf5","\x57")},
	{hx::fsString,(int)offsetof(VorbisComment_obj,vendor),HX_HCSTRING("vendor","\x88","\xe5","\x96","\x9e")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo *sStaticStorageInfo = 0;
#endif

static ::String sMemberFields[] = {
	HX_HCSTRING("userComments","\x9f","\xaa","\xf5","\x57"),
	HX_HCSTRING("vendor","\x88","\xe5","\x96","\x9e"),
	::String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(VorbisComment_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(VorbisComment_obj::__mClass,"__mClass");
};

#endif

hx::Class VorbisComment_obj::__mClass;

void VorbisComment_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("lime.media.codecs.vorbis.VorbisComment","\x9f","\xd7","\xee","\x8c");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = hx::Class_obj::dupFunctions(sMemberFields);
	__mClass->mCanCast = hx::TCanCast< VorbisComment_obj >;
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
