#include <hxcpp.h>

#ifndef INCLUDED_lime_media_openal__ALContext_ALContext_Impl_
#include <lime/media/openal/_ALContext/ALContext_Impl_.h>
#endif
namespace lime{
namespace media{
namespace openal{
namespace _ALContext{

Void ALContext_Impl__obj::__construct()
{
	return null();
}

//ALContext_Impl__obj::~ALContext_Impl__obj() { }

Dynamic ALContext_Impl__obj::__CreateEmpty() { return  new ALContext_Impl__obj; }
hx::ObjectPtr< ALContext_Impl__obj > ALContext_Impl__obj::__new()
{  hx::ObjectPtr< ALContext_Impl__obj > _result_ = new ALContext_Impl__obj();
	_result_->__construct();
	return _result_;}

Dynamic ALContext_Impl__obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< ALContext_Impl__obj > _result_ = new ALContext_Impl__obj();
	_result_->__construct();
	return _result_;}

Dynamic ALContext_Impl__obj::_new( Dynamic handle){
	HX_STACK_FRAME("lime.media.openal._ALContext.ALContext_Impl_","_new",0x7c63ff3e,"lime.media.openal._ALContext.ALContext_Impl_._new","lime/media/openal/ALContext.hx",15,0x28b7a4af)
	HX_STACK_ARG(handle,"handle")
	HX_STACK_LINE(15)
	Dynamic tmp = handle;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(15)
	return tmp;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(ALContext_Impl__obj,_new,return )


ALContext_Impl__obj::ALContext_Impl__obj()
{
}

bool ALContext_Impl__obj::__GetStatic(const ::String &inName, Dynamic &outValue, hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"_new") ) { outValue = _new_dyn(); return true;  }
	}
	return false;
}

#if HXCPP_SCRIPTABLE
static hx::StorageInfo *sMemberStorageInfo = 0;
static hx::StaticInfo *sStaticStorageInfo = 0;
#endif

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(ALContext_Impl__obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(ALContext_Impl__obj::__mClass,"__mClass");
};

#endif

hx::Class ALContext_Impl__obj::__mClass;

static ::String sStaticFields[] = {
	HX_HCSTRING("_new","\x61","\x15","\x1f","\x3f"),
	::String(null()) };

void ALContext_Impl__obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("lime.media.openal._ALContext.ALContext_Impl_","\xb1","\xc3","\x11","\xfe");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &ALContext_Impl__obj::__GetStatic;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(sStaticFields);
	__mClass->mMembers = hx::Class_obj::dupFunctions(0 /* sMemberFields */);
	__mClass->mCanCast = hx::TCanCast< ALContext_Impl__obj >;
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
} // end namespace openal
} // end namespace _ALContext
