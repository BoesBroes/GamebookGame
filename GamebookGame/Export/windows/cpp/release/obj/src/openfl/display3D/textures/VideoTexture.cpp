#include <hxcpp.h>

#ifndef INCLUDED_lime_graphics_opengl_GLObject
#include <lime/graphics/opengl/GLObject.h>
#endif
#ifndef INCLUDED_openfl_display3D_Context3D
#include <openfl/display3D/Context3D.h>
#endif
#ifndef INCLUDED_openfl_display3D_textures_TextureBase
#include <openfl/display3D/textures/TextureBase.h>
#endif
#ifndef INCLUDED_openfl_display3D_textures_VideoTexture
#include <openfl/display3D/textures/VideoTexture.h>
#endif
#ifndef INCLUDED_openfl_events_Event
#include <openfl/events/Event.h>
#endif
#ifndef INCLUDED_openfl_events_EventDispatcher
#include <openfl/events/EventDispatcher.h>
#endif
#ifndef INCLUDED_openfl_events_IEventDispatcher
#include <openfl/events/IEventDispatcher.h>
#endif
#ifndef INCLUDED_openfl_net_NetStream
#include <openfl/net/NetStream.h>
#endif
namespace openfl{
namespace display3D{
namespace textures{

Void VideoTexture_obj::__construct(::openfl::display3D::Context3D context)
{
{
	::openfl::display3D::Context3D tmp = context;
	super::__construct(tmp,(int)3553);
}
;
	return null();
}

//VideoTexture_obj::~VideoTexture_obj() { }

Dynamic VideoTexture_obj::__CreateEmpty() { return  new VideoTexture_obj; }
hx::ObjectPtr< VideoTexture_obj > VideoTexture_obj::__new(::openfl::display3D::Context3D context)
{  hx::ObjectPtr< VideoTexture_obj > _result_ = new VideoTexture_obj();
	_result_->__construct(context);
	return _result_;}

Dynamic VideoTexture_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< VideoTexture_obj > _result_ = new VideoTexture_obj();
	_result_->__construct(inArgs[0]);
	return _result_;}

Void VideoTexture_obj::attachNetStream( ::openfl::net::NetStream netStream){
{
		this->__netStream = netStream;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(VideoTexture_obj,attachNetStream,(void))

::lime::graphics::opengl::GLObject VideoTexture_obj::__getTexture( ){
	::lime::graphics::opengl::GLObject tmp = this->__textureID;
	return tmp;
}


Void VideoTexture_obj::__textureReady( ){
{
		::openfl::events::Event tmp = ::openfl::events::Event_obj::__new(HX_HCSTRING("textureReady","\x88","\x4d","\x5a","\xdf"),null(),null());
		this->dispatchEvent(tmp);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(VideoTexture_obj,__textureReady,(void))


VideoTexture_obj::VideoTexture_obj()
{
}

void VideoTexture_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(VideoTexture);
	HX_MARK_MEMBER_NAME(videoHeight,"videoHeight");
	HX_MARK_MEMBER_NAME(videoWidth,"videoWidth");
	HX_MARK_MEMBER_NAME(__netStream,"__netStream");
	::openfl::display3D::textures::TextureBase_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void VideoTexture_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(videoHeight,"videoHeight");
	HX_VISIT_MEMBER_NAME(videoWidth,"videoWidth");
	HX_VISIT_MEMBER_NAME(__netStream,"__netStream");
	::openfl::display3D::textures::TextureBase_obj::__Visit(HX_VISIT_ARG);
}

Dynamic VideoTexture_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 10:
		if (HX_FIELD_EQ(inName,"videoWidth") ) { return videoWidth; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"videoHeight") ) { return videoHeight; }
		if (HX_FIELD_EQ(inName,"__netStream") ) { return __netStream; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"__getTexture") ) { return __getTexture_dyn(); }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"__textureReady") ) { return __textureReady_dyn(); }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"attachNetStream") ) { return attachNetStream_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic VideoTexture_obj::__SetField(const ::String &inName,const Dynamic &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 10:
		if (HX_FIELD_EQ(inName,"videoWidth") ) { videoWidth=inValue.Cast< int >(); return inValue; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"videoHeight") ) { videoHeight=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"__netStream") ) { __netStream=inValue.Cast< ::openfl::net::NetStream >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void VideoTexture_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("videoHeight","\xc2","\x9e","\xf3","\x7a"));
	outFields->push(HX_HCSTRING("videoWidth","\x8b","\xf3","\x30","\xa6"));
	outFields->push(HX_HCSTRING("__netStream","\x9d","\xc5","\x49","\x80"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsInt,(int)offsetof(VideoTexture_obj,videoHeight),HX_HCSTRING("videoHeight","\xc2","\x9e","\xf3","\x7a")},
	{hx::fsInt,(int)offsetof(VideoTexture_obj,videoWidth),HX_HCSTRING("videoWidth","\x8b","\xf3","\x30","\xa6")},
	{hx::fsObject /*::openfl::net::NetStream*/ ,(int)offsetof(VideoTexture_obj,__netStream),HX_HCSTRING("__netStream","\x9d","\xc5","\x49","\x80")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo *sStaticStorageInfo = 0;
#endif

static ::String sMemberFields[] = {
	HX_HCSTRING("videoHeight","\xc2","\x9e","\xf3","\x7a"),
	HX_HCSTRING("videoWidth","\x8b","\xf3","\x30","\xa6"),
	HX_HCSTRING("__netStream","\x9d","\xc5","\x49","\x80"),
	HX_HCSTRING("attachNetStream","\x38","\x40","\xd7","\x16"),
	HX_HCSTRING("__getTexture","\x05","\xca","\xd5","\x26"),
	HX_HCSTRING("__textureReady","\xa8","\xd0","\x1a","\x00"),
	::String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(VideoTexture_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(VideoTexture_obj::__mClass,"__mClass");
};

#endif

hx::Class VideoTexture_obj::__mClass;

void VideoTexture_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("openfl.display3D.textures.VideoTexture","\x9d","\x72","\x4f","\xe9");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = hx::Class_obj::dupFunctions(sMemberFields);
	__mClass->mCanCast = hx::TCanCast< VideoTexture_obj >;
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
} // end namespace textures
