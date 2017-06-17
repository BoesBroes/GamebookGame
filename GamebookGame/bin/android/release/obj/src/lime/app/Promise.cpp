#include <hxcpp.h>

#ifndef INCLUDED_lime_app_Future
#include <lime/app/Future.h>
#endif
#ifndef INCLUDED_lime_app_Promise
#include <lime/app/Promise.h>
#endif
namespace lime{
namespace app{

Void Promise_obj::__construct()
{
{
	::lime::app::Future tmp = ::lime::app::Future_obj::__new(null(),null());
	this->future = tmp;
}
;
	return null();
}

//Promise_obj::~Promise_obj() { }

Dynamic Promise_obj::__CreateEmpty() { return  new Promise_obj; }
hx::ObjectPtr< Promise_obj > Promise_obj::__new()
{  hx::ObjectPtr< Promise_obj > _result_ = new Promise_obj();
	_result_->__construct();
	return _result_;}

Dynamic Promise_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< Promise_obj > _result_ = new Promise_obj();
	_result_->__construct();
	return _result_;}

::lime::app::Promise Promise_obj::complete( Dynamic data){
	::lime::app::Future tmp = this->future;
	bool tmp1 = tmp->isError;
	bool tmp2 = !(tmp1);
	if ((tmp2)){
		::lime::app::Future tmp3 = this->future;
		tmp3->isComplete = true;
		::lime::app::Future tmp4 = this->future;
		tmp4->value = data;
		::lime::app::Future tmp5 = this->future;
		bool tmp6 = (tmp5->__completeListeners != null());
		if ((tmp6)){
			{
				int _g = (int)0;
				::lime::app::Future tmp7 = this->future;
				cpp::ArrayBase _g1 = tmp7->__completeListeners;
				while((true)){
					bool tmp8 = (_g < _g1->__Field(HX_HCSTRING("length","\xe6","\x94","\x07","\x9f"), hx::paccDynamic ));
					bool tmp9 = !(tmp8);
					if ((tmp9)){
						break;
					}
					Dynamic tmp10 = _g1->__GetItem(_g);
					Dynamic listener = tmp10;
					++(_g);
					Dynamic tmp11 = data;
					listener(tmp11).Cast< Void >();
				}
			}
			::lime::app::Future tmp7 = this->future;
			tmp7->__completeListeners = null();
		}
	}
	return hx::ObjectPtr<OBJ_>(this);
}


HX_DEFINE_DYNAMIC_FUNC1(Promise_obj,complete,return )

::lime::app::Promise Promise_obj::completeWith( ::lime::app::Future future){
	Dynamic tmp = this->complete_dyn();
	future->onComplete(tmp);
	Dynamic tmp1 = this->error_dyn();
	future->onError(tmp1);
	Dynamic tmp2 = this->progress_dyn();
	future->onProgress(tmp2);
	return hx::ObjectPtr<OBJ_>(this);
}


HX_DEFINE_DYNAMIC_FUNC1(Promise_obj,completeWith,return )

::lime::app::Promise Promise_obj::error( Dynamic msg){
	::lime::app::Future tmp = this->future;
	bool tmp1 = tmp->isComplete;
	bool tmp2 = !(tmp1);
	if ((tmp2)){
		::lime::app::Future tmp3 = this->future;
		tmp3->isError = true;
		::lime::app::Future tmp4 = this->future;
		tmp4->error = msg;
		::lime::app::Future tmp5 = this->future;
		bool tmp6 = (tmp5->__errorListeners != null());
		if ((tmp6)){
			{
				int _g = (int)0;
				::lime::app::Future tmp7 = this->future;
				cpp::ArrayBase _g1 = tmp7->__errorListeners;
				while((true)){
					bool tmp8 = (_g < _g1->__Field(HX_HCSTRING("length","\xe6","\x94","\x07","\x9f"), hx::paccDynamic ));
					bool tmp9 = !(tmp8);
					if ((tmp9)){
						break;
					}
					Dynamic tmp10 = _g1->__GetItem(_g);
					Dynamic listener = tmp10;
					++(_g);
					Dynamic tmp11 = msg;
					listener(tmp11).Cast< Void >();
				}
			}
			::lime::app::Future tmp7 = this->future;
			tmp7->__errorListeners = null();
		}
	}
	return hx::ObjectPtr<OBJ_>(this);
}


HX_DEFINE_DYNAMIC_FUNC1(Promise_obj,error,return )

::lime::app::Promise Promise_obj::progress( int progress,int total){
	::lime::app::Future tmp = this->future;
	bool tmp1 = tmp->isError;
	bool tmp2 = tmp1;
	bool tmp3 = !(tmp2);
	bool tmp4;
	if ((tmp3)){
		::lime::app::Future tmp5 = this->future;
		::lime::app::Future tmp6 = tmp5;
		bool tmp7 = tmp6->isComplete;
		bool tmp8 = tmp7;
		tmp4 = !(tmp8);
	}
	else{
		tmp4 = false;
	}
	if ((tmp4)){
		::lime::app::Future tmp5 = this->future;
		bool tmp6 = (tmp5->__progressListeners != null());
		if ((tmp6)){
			int _g = (int)0;
			::lime::app::Future tmp7 = this->future;
			cpp::ArrayBase _g1 = tmp7->__progressListeners;
			while((true)){
				bool tmp8 = (_g < _g1->__Field(HX_HCSTRING("length","\xe6","\x94","\x07","\x9f"), hx::paccDynamic ));
				bool tmp9 = !(tmp8);
				if ((tmp9)){
					break;
				}
				Dynamic tmp10 = _g1->__GetItem(_g);
				Dynamic listener = tmp10;
				++(_g);
				int tmp11 = progress;
				int tmp12 = total;
				listener(tmp11,tmp12).Cast< Void >();
			}
		}
	}
	return hx::ObjectPtr<OBJ_>(this);
}


HX_DEFINE_DYNAMIC_FUNC2(Promise_obj,progress,return )

bool Promise_obj::get_isComplete( ){
	::lime::app::Future tmp = this->future;
	bool tmp1 = tmp->isComplete;
	return tmp1;
}


HX_DEFINE_DYNAMIC_FUNC0(Promise_obj,get_isComplete,return )

bool Promise_obj::get_isError( ){
	::lime::app::Future tmp = this->future;
	bool tmp1 = tmp->isError;
	return tmp1;
}


HX_DEFINE_DYNAMIC_FUNC0(Promise_obj,get_isError,return )


Promise_obj::Promise_obj()
{
}

void Promise_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(Promise);
	HX_MARK_MEMBER_NAME(future,"future");
	HX_MARK_MEMBER_NAME(isComplete,"isComplete");
	HX_MARK_MEMBER_NAME(isError,"isError");
	HX_MARK_END_CLASS();
}

void Promise_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(future,"future");
	HX_VISIT_MEMBER_NAME(isComplete,"isComplete");
	HX_VISIT_MEMBER_NAME(isError,"isError");
}

Dynamic Promise_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"error") ) { return error_dyn(); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"future") ) { return future; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"isError") ) { return inCallProp == hx::paccAlways ? get_isError() : isError; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"complete") ) { return complete_dyn(); }
		if (HX_FIELD_EQ(inName,"progress") ) { return progress_dyn(); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"isComplete") ) { return inCallProp == hx::paccAlways ? get_isComplete() : isComplete; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"get_isError") ) { return get_isError_dyn(); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"completeWith") ) { return completeWith_dyn(); }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"get_isComplete") ) { return get_isComplete_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic Promise_obj::__SetField(const ::String &inName,const Dynamic &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 6:
		if (HX_FIELD_EQ(inName,"future") ) { future=inValue.Cast< ::lime::app::Future >(); return inValue; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"isError") ) { isError=inValue.Cast< bool >(); return inValue; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"isComplete") ) { isComplete=inValue.Cast< bool >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void Promise_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("future","\x43","\x98","\x4e","\x73"));
	outFields->push(HX_HCSTRING("isComplete","\xc3","\x12","\x77","\xfa"));
	outFields->push(HX_HCSTRING("isError","\x7e","\x6f","\xaf","\x0f"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsObject /*::lime::app::Future*/ ,(int)offsetof(Promise_obj,future),HX_HCSTRING("future","\x43","\x98","\x4e","\x73")},
	{hx::fsBool,(int)offsetof(Promise_obj,isComplete),HX_HCSTRING("isComplete","\xc3","\x12","\x77","\xfa")},
	{hx::fsBool,(int)offsetof(Promise_obj,isError),HX_HCSTRING("isError","\x7e","\x6f","\xaf","\x0f")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo *sStaticStorageInfo = 0;
#endif

static ::String sMemberFields[] = {
	HX_HCSTRING("future","\x43","\x98","\x4e","\x73"),
	HX_HCSTRING("isComplete","\xc3","\x12","\x77","\xfa"),
	HX_HCSTRING("isError","\x7e","\x6f","\xaf","\x0f"),
	HX_HCSTRING("complete","\xb9","\x00","\xc8","\x7f"),
	HX_HCSTRING("completeWith","\x5f","\xf3","\xba","\xc2"),
	HX_HCSTRING("error","\xc8","\xcb","\x29","\x73"),
	HX_HCSTRING("progress","\xad","\xf7","\x2a","\x86"),
	HX_HCSTRING("get_isComplete","\x0c","\x9b","\x6c","\x70"),
	HX_HCSTRING("get_isError","\x95","\xcf","\xa9","\x95"),
	::String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(Promise_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(Promise_obj::__mClass,"__mClass");
};

#endif

hx::Class Promise_obj::__mClass;

void Promise_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("lime.app.Promise","\xd5","\x11","\x6e","\xa7");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = hx::Class_obj::dupFunctions(sMemberFields);
	__mClass->mCanCast = hx::TCanCast< Promise_obj >;
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
} // end namespace app
