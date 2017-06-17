#include <hxcpp.h>

#ifndef INCLUDED_lime_app_Future
#include <lime/app/Future.h>
#endif
#ifndef INCLUDED_lime_app_Promise_openfl_text_Font
#include <lime/app/Promise_openfl_text_Font.h>
#endif
#ifndef INCLUDED_lime_text_Font
#include <lime/text/Font.h>
#endif
#ifndef INCLUDED_openfl_text_Font
#include <openfl/text/Font.h>
#endif
namespace lime{
namespace app{

Void Promise_openfl_text_Font_obj::__construct()
{
HX_STACK_FRAME("lime.app.Promise_openfl_text_Font","new",0xe920a52e,"lime.app.Promise_openfl_text_Font.new","lime/app/Promise.hx",21,0x10ba4f0b)
HX_STACK_THIS(this)
{
	HX_STACK_LINE(23)
	::lime::app::Future tmp = ::lime::app::Future_obj::__new(null(),null());		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(23)
	this->future = tmp;
}
;
	return null();
}

//Promise_openfl_text_Font_obj::~Promise_openfl_text_Font_obj() { }

Dynamic Promise_openfl_text_Font_obj::__CreateEmpty() { return  new Promise_openfl_text_Font_obj; }
hx::ObjectPtr< Promise_openfl_text_Font_obj > Promise_openfl_text_Font_obj::__new()
{  hx::ObjectPtr< Promise_openfl_text_Font_obj > _result_ = new Promise_openfl_text_Font_obj();
	_result_->__construct();
	return _result_;}

Dynamic Promise_openfl_text_Font_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< Promise_openfl_text_Font_obj > _result_ = new Promise_openfl_text_Font_obj();
	_result_->__construct();
	return _result_;}

::lime::app::Promise_openfl_text_Font Promise_openfl_text_Font_obj::complete( ::openfl::text::Font data){
	HX_STACK_FRAME("lime.app.Promise_openfl_text_Font","complete",0x397f012b,"lime.app.Promise_openfl_text_Font.complete","lime/app/Promise.hx",28,0x10ba4f0b)
	HX_STACK_THIS(this)
	HX_STACK_ARG(data,"data")
	HX_STACK_LINE(30)
	::lime::app::Future tmp = this->future;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(30)
	bool tmp1 = tmp->isError;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(30)
	bool tmp2 = !(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(30)
	if ((tmp2)){
		HX_STACK_LINE(32)
		::lime::app::Future tmp3 = this->future;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(32)
		tmp3->isComplete = true;
		HX_STACK_LINE(33)
		::lime::app::Future tmp4 = this->future;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(33)
		tmp4->value = data;
		HX_STACK_LINE(35)
		::lime::app::Future tmp5 = this->future;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(35)
		bool tmp6 = (tmp5->__completeListeners != null());		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(35)
		if ((tmp6)){
			HX_STACK_LINE(37)
			{
				HX_STACK_LINE(37)
				int _g = (int)0;		HX_STACK_VAR(_g,"_g");
				HX_STACK_LINE(37)
				::lime::app::Future tmp7 = this->future;		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(37)
				cpp::ArrayBase _g1 = tmp7->__completeListeners;		HX_STACK_VAR(_g1,"_g1");
				HX_STACK_LINE(37)
				while((true)){
					HX_STACK_LINE(37)
					bool tmp8 = (_g < _g1->__Field(HX_HCSTRING("length","\xe6","\x94","\x07","\x9f"), hx::paccDynamic ));		HX_STACK_VAR(tmp8,"tmp8");
					HX_STACK_LINE(37)
					bool tmp9 = !(tmp8);		HX_STACK_VAR(tmp9,"tmp9");
					HX_STACK_LINE(37)
					if ((tmp9)){
						HX_STACK_LINE(37)
						break;
					}
					HX_STACK_LINE(37)
					Dynamic tmp10 = _g1->__GetItem(_g);		HX_STACK_VAR(tmp10,"tmp10");
					HX_STACK_LINE(37)
					Dynamic listener = tmp10;		HX_STACK_VAR(listener,"listener");
					HX_STACK_LINE(37)
					++(_g);
					HX_STACK_LINE(39)
					::openfl::text::Font tmp11 = data;		HX_STACK_VAR(tmp11,"tmp11");
					HX_STACK_LINE(39)
					listener(tmp11).Cast< Void >();
				}
			}
			HX_STACK_LINE(43)
			::lime::app::Future tmp7 = this->future;		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(43)
			tmp7->__completeListeners = null();
		}
	}
	HX_STACK_LINE(49)
	return hx::ObjectPtr<OBJ_>(this);
}


HX_DEFINE_DYNAMIC_FUNC1(Promise_openfl_text_Font_obj,complete,return )

::lime::app::Promise_openfl_text_Font Promise_openfl_text_Font_obj::completeWith( ::lime::app::Future future){
	HX_STACK_FRAME("lime.app.Promise_openfl_text_Font","completeWith",0xc7a014d1,"lime.app.Promise_openfl_text_Font.completeWith","lime/app/Promise.hx",54,0x10ba4f0b)
	HX_STACK_THIS(this)
	HX_STACK_ARG(future,"future")
	HX_STACK_LINE(56)
	Dynamic tmp = this->complete_dyn();		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(56)
	future->onComplete(tmp);
	HX_STACK_LINE(57)
	Dynamic tmp1 = this->error_dyn();		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(57)
	future->onError(tmp1);
	HX_STACK_LINE(58)
	Dynamic tmp2 = this->progress_dyn();		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(58)
	future->onProgress(tmp2);
	HX_STACK_LINE(60)
	return hx::ObjectPtr<OBJ_>(this);
}


HX_DEFINE_DYNAMIC_FUNC1(Promise_openfl_text_Font_obj,completeWith,return )

::lime::app::Promise_openfl_text_Font Promise_openfl_text_Font_obj::error( Dynamic msg){
	HX_STACK_FRAME("lime.app.Promise_openfl_text_Font","error",0xc86ff016,"lime.app.Promise_openfl_text_Font.error","lime/app/Promise.hx",66,0x10ba4f0b)
	HX_STACK_THIS(this)
	HX_STACK_ARG(msg,"msg")
	HX_STACK_LINE(68)
	::lime::app::Future tmp = this->future;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(68)
	bool tmp1 = tmp->isComplete;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(68)
	bool tmp2 = !(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(68)
	if ((tmp2)){
		HX_STACK_LINE(70)
		::lime::app::Future tmp3 = this->future;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(70)
		tmp3->isError = true;
		HX_STACK_LINE(71)
		::lime::app::Future tmp4 = this->future;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(71)
		tmp4->error = msg;
		HX_STACK_LINE(73)
		::lime::app::Future tmp5 = this->future;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(73)
		bool tmp6 = (tmp5->__errorListeners != null());		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(73)
		if ((tmp6)){
			HX_STACK_LINE(75)
			{
				HX_STACK_LINE(75)
				int _g = (int)0;		HX_STACK_VAR(_g,"_g");
				HX_STACK_LINE(75)
				::lime::app::Future tmp7 = this->future;		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(75)
				cpp::ArrayBase _g1 = tmp7->__errorListeners;		HX_STACK_VAR(_g1,"_g1");
				HX_STACK_LINE(75)
				while((true)){
					HX_STACK_LINE(75)
					bool tmp8 = (_g < _g1->__Field(HX_HCSTRING("length","\xe6","\x94","\x07","\x9f"), hx::paccDynamic ));		HX_STACK_VAR(tmp8,"tmp8");
					HX_STACK_LINE(75)
					bool tmp9 = !(tmp8);		HX_STACK_VAR(tmp9,"tmp9");
					HX_STACK_LINE(75)
					if ((tmp9)){
						HX_STACK_LINE(75)
						break;
					}
					HX_STACK_LINE(75)
					Dynamic tmp10 = _g1->__GetItem(_g);		HX_STACK_VAR(tmp10,"tmp10");
					HX_STACK_LINE(75)
					Dynamic listener = tmp10;		HX_STACK_VAR(listener,"listener");
					HX_STACK_LINE(75)
					++(_g);
					HX_STACK_LINE(77)
					Dynamic tmp11 = msg;		HX_STACK_VAR(tmp11,"tmp11");
					HX_STACK_LINE(77)
					listener(tmp11).Cast< Void >();
				}
			}
			HX_STACK_LINE(81)
			::lime::app::Future tmp7 = this->future;		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(81)
			tmp7->__errorListeners = null();
		}
	}
	HX_STACK_LINE(87)
	return hx::ObjectPtr<OBJ_>(this);
}


HX_DEFINE_DYNAMIC_FUNC1(Promise_openfl_text_Font_obj,error,return )

::lime::app::Promise_openfl_text_Font Promise_openfl_text_Font_obj::progress( int progress,int total){
	HX_STACK_FRAME("lime.app.Promise_openfl_text_Font","progress",0x3fe1f81f,"lime.app.Promise_openfl_text_Font.progress","lime/app/Promise.hx",92,0x10ba4f0b)
	HX_STACK_THIS(this)
	HX_STACK_ARG(progress,"progress")
	HX_STACK_ARG(total,"total")
	HX_STACK_LINE(94)
	::lime::app::Future tmp = this->future;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(94)
	bool tmp1 = tmp->isError;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(94)
	bool tmp2 = tmp1;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(94)
	bool tmp3 = !(tmp2);		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(94)
	bool tmp4;		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(94)
	if ((tmp3)){
		HX_STACK_LINE(94)
		::lime::app::Future tmp5 = this->future;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(94)
		::lime::app::Future tmp6 = tmp5;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(94)
		bool tmp7 = tmp6->isComplete;		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(94)
		bool tmp8 = tmp7;		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(94)
		tmp4 = !(tmp8);
	}
	else{
		HX_STACK_LINE(94)
		tmp4 = false;
	}
	HX_STACK_LINE(94)
	if ((tmp4)){
		HX_STACK_LINE(96)
		::lime::app::Future tmp5 = this->future;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(96)
		bool tmp6 = (tmp5->__progressListeners != null());		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(96)
		if ((tmp6)){
			HX_STACK_LINE(98)
			int _g = (int)0;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(98)
			::lime::app::Future tmp7 = this->future;		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(98)
			cpp::ArrayBase _g1 = tmp7->__progressListeners;		HX_STACK_VAR(_g1,"_g1");
			HX_STACK_LINE(98)
			while((true)){
				HX_STACK_LINE(98)
				bool tmp8 = (_g < _g1->__Field(HX_HCSTRING("length","\xe6","\x94","\x07","\x9f"), hx::paccDynamic ));		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(98)
				bool tmp9 = !(tmp8);		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(98)
				if ((tmp9)){
					HX_STACK_LINE(98)
					break;
				}
				HX_STACK_LINE(98)
				Dynamic tmp10 = _g1->__GetItem(_g);		HX_STACK_VAR(tmp10,"tmp10");
				HX_STACK_LINE(98)
				Dynamic listener = tmp10;		HX_STACK_VAR(listener,"listener");
				HX_STACK_LINE(98)
				++(_g);
				HX_STACK_LINE(100)
				int tmp11 = progress;		HX_STACK_VAR(tmp11,"tmp11");
				HX_STACK_LINE(100)
				int tmp12 = total;		HX_STACK_VAR(tmp12,"tmp12");
				HX_STACK_LINE(100)
				listener(tmp11,tmp12).Cast< Void >();
			}
		}
	}
	HX_STACK_LINE(108)
	return hx::ObjectPtr<OBJ_>(this);
}


HX_DEFINE_DYNAMIC_FUNC2(Promise_openfl_text_Font_obj,progress,return )

bool Promise_openfl_text_Font_obj::get_isComplete( ){
	HX_STACK_FRAME("lime.app.Promise_openfl_text_Font","get_isComplete",0x51f27cfe,"lime.app.Promise_openfl_text_Font.get_isComplete","lime/app/Promise.hx",120,0x10ba4f0b)
	HX_STACK_THIS(this)
	HX_STACK_LINE(122)
	::lime::app::Future tmp = this->future;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(122)
	bool tmp1 = tmp->isComplete;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(122)
	return tmp1;
}


HX_DEFINE_DYNAMIC_FUNC0(Promise_openfl_text_Font_obj,get_isComplete,return )

bool Promise_openfl_text_Font_obj::get_isError( ){
	HX_STACK_FRAME("lime.app.Promise_openfl_text_Font","get_isError",0xd3ad2263,"lime.app.Promise_openfl_text_Font.get_isError","lime/app/Promise.hx",127,0x10ba4f0b)
	HX_STACK_THIS(this)
	HX_STACK_LINE(129)
	::lime::app::Future tmp = this->future;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(129)
	bool tmp1 = tmp->isError;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(129)
	return tmp1;
}


HX_DEFINE_DYNAMIC_FUNC0(Promise_openfl_text_Font_obj,get_isError,return )


Promise_openfl_text_Font_obj::Promise_openfl_text_Font_obj()
{
}

void Promise_openfl_text_Font_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(Promise_openfl_text_Font);
	HX_MARK_MEMBER_NAME(future,"future");
	HX_MARK_MEMBER_NAME(isComplete,"isComplete");
	HX_MARK_MEMBER_NAME(isError,"isError");
	HX_MARK_END_CLASS();
}

void Promise_openfl_text_Font_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(future,"future");
	HX_VISIT_MEMBER_NAME(isComplete,"isComplete");
	HX_VISIT_MEMBER_NAME(isError,"isError");
}

Dynamic Promise_openfl_text_Font_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
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

Dynamic Promise_openfl_text_Font_obj::__SetField(const ::String &inName,const Dynamic &inValue,hx::PropertyAccess inCallProp)
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

void Promise_openfl_text_Font_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("future","\x43","\x98","\x4e","\x73"));
	outFields->push(HX_HCSTRING("isComplete","\xc3","\x12","\x77","\xfa"));
	outFields->push(HX_HCSTRING("isError","\x7e","\x6f","\xaf","\x0f"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsObject /*::lime::app::Future*/ ,(int)offsetof(Promise_openfl_text_Font_obj,future),HX_HCSTRING("future","\x43","\x98","\x4e","\x73")},
	{hx::fsBool,(int)offsetof(Promise_openfl_text_Font_obj,isComplete),HX_HCSTRING("isComplete","\xc3","\x12","\x77","\xfa")},
	{hx::fsBool,(int)offsetof(Promise_openfl_text_Font_obj,isError),HX_HCSTRING("isError","\x7e","\x6f","\xaf","\x0f")},
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
	HX_MARK_MEMBER_NAME(Promise_openfl_text_Font_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(Promise_openfl_text_Font_obj::__mClass,"__mClass");
};

#endif

hx::Class Promise_openfl_text_Font_obj::__mClass;

void Promise_openfl_text_Font_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("lime.app.Promise_openfl_text_Font","\x3c","\x36","\x87","\xcb");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = hx::Class_obj::dupFunctions(sMemberFields);
	__mClass->mCanCast = hx::TCanCast< Promise_openfl_text_Font_obj >;
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
