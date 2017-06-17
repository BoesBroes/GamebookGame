#include <hxcpp.h>

#ifndef INCLUDED_lime_utils_AssetLibrary
#include <lime/utils/AssetLibrary.h>
#endif
#ifndef INCLUDED_lime_utils_Assets
#include <lime/utils/Assets.h>
#endif
#ifndef INCLUDED_lime_utils__Assets_LibrarySymbol
#include <lime/utils/_Assets/LibrarySymbol.h>
#endif
namespace lime{
namespace utils{
namespace _Assets{

Void LibrarySymbol_obj::__construct(::String id)
{
HX_STACK_FRAME("lime.utils._Assets.LibrarySymbol","new",0x85584603,"lime.utils._Assets.LibrarySymbol.new","lime/utils/Assets.hx",645,0x95055f23)
HX_STACK_THIS(this)
HX_STACK_ARG(id,"id")
{
	HX_STACK_LINE(647)
	int tmp = id.indexOf(HX_HCSTRING(":","\x3a","\x00","\x00","\x00"),null());		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(647)
	int colonIndex = tmp;		HX_STACK_VAR(colonIndex,"colonIndex");
	HX_STACK_LINE(648)
	int tmp1 = colonIndex;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(648)
	::String tmp2 = id.substring((int)0,tmp1);		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(648)
	this->libraryName = tmp2;
	HX_STACK_LINE(649)
	int tmp3 = (colonIndex + (int)1);		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(649)
	::String tmp4 = id.substring(tmp3,null());		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(649)
	this->symbolName = tmp4;
	HX_STACK_LINE(650)
	::String tmp5 = this->libraryName;		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(650)
	::lime::utils::AssetLibrary tmp6 = ::lime::utils::Assets_obj::getLibrary(tmp5);		HX_STACK_VAR(tmp6,"tmp6");
	HX_STACK_LINE(650)
	this->library = tmp6;
}
;
	return null();
}

//LibrarySymbol_obj::~LibrarySymbol_obj() { }

Dynamic LibrarySymbol_obj::__CreateEmpty() { return  new LibrarySymbol_obj; }
hx::ObjectPtr< LibrarySymbol_obj > LibrarySymbol_obj::__new(::String id)
{  hx::ObjectPtr< LibrarySymbol_obj > _result_ = new LibrarySymbol_obj();
	_result_->__construct(id);
	return _result_;}

Dynamic LibrarySymbol_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< LibrarySymbol_obj > _result_ = new LibrarySymbol_obj();
	_result_->__construct(inArgs[0]);
	return _result_;}

bool LibrarySymbol_obj::isLocal( ::String type){
	HX_STACK_FRAME("lime.utils._Assets.LibrarySymbol","isLocal",0x28a9f044,"lime.utils._Assets.LibrarySymbol.isLocal","lime/utils/Assets.hx",655,0x95055f23)
	HX_STACK_THIS(this)
	HX_STACK_ARG(type,"type")
	HX_STACK_LINE(655)
	::lime::utils::AssetLibrary tmp = this->library;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(655)
	::String tmp1 = this->symbolName;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(655)
	::String tmp2 = type;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(655)
	bool tmp3 = tmp->isLocal(tmp1,tmp2);		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(655)
	return tmp3;
}


HX_DEFINE_DYNAMIC_FUNC1(LibrarySymbol_obj,isLocal,return )

bool LibrarySymbol_obj::exists( ::String type){
	HX_STACK_FRAME("lime.utils._Assets.LibrarySymbol","exists",0xf7109019,"lime.utils._Assets.LibrarySymbol.exists","lime/utils/Assets.hx",656,0x95055f23)
	HX_STACK_THIS(this)
	HX_STACK_ARG(type,"type")
	HX_STACK_LINE(656)
	::lime::utils::AssetLibrary tmp = this->library;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(656)
	::String tmp1 = this->symbolName;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(656)
	::String tmp2 = type;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(656)
	bool tmp3 = tmp->exists(tmp1,tmp2);		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(656)
	return tmp3;
}


HX_DEFINE_DYNAMIC_FUNC1(LibrarySymbol_obj,exists,return )


LibrarySymbol_obj::LibrarySymbol_obj()
{
}

void LibrarySymbol_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(LibrarySymbol);
	HX_MARK_MEMBER_NAME(library,"library");
	HX_MARK_MEMBER_NAME(libraryName,"libraryName");
	HX_MARK_MEMBER_NAME(symbolName,"symbolName");
	HX_MARK_END_CLASS();
}

void LibrarySymbol_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(library,"library");
	HX_VISIT_MEMBER_NAME(libraryName,"libraryName");
	HX_VISIT_MEMBER_NAME(symbolName,"symbolName");
}

Dynamic LibrarySymbol_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 6:
		if (HX_FIELD_EQ(inName,"exists") ) { return exists_dyn(); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"library") ) { return library; }
		if (HX_FIELD_EQ(inName,"isLocal") ) { return isLocal_dyn(); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"symbolName") ) { return symbolName; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"libraryName") ) { return libraryName; }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic LibrarySymbol_obj::__SetField(const ::String &inName,const Dynamic &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 7:
		if (HX_FIELD_EQ(inName,"library") ) { library=inValue.Cast< ::lime::utils::AssetLibrary >(); return inValue; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"symbolName") ) { symbolName=inValue.Cast< ::String >(); return inValue; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"libraryName") ) { libraryName=inValue.Cast< ::String >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void LibrarySymbol_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("library","\xfb","\x26","\x70","\x3f"));
	outFields->push(HX_HCSTRING("libraryName","\xe6","\x5e","\xe7","\xaa"));
	outFields->push(HX_HCSTRING("symbolName","\xc3","\xd9","\xfc","\x1f"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsObject /*::lime::utils::AssetLibrary*/ ,(int)offsetof(LibrarySymbol_obj,library),HX_HCSTRING("library","\xfb","\x26","\x70","\x3f")},
	{hx::fsString,(int)offsetof(LibrarySymbol_obj,libraryName),HX_HCSTRING("libraryName","\xe6","\x5e","\xe7","\xaa")},
	{hx::fsString,(int)offsetof(LibrarySymbol_obj,symbolName),HX_HCSTRING("symbolName","\xc3","\xd9","\xfc","\x1f")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo *sStaticStorageInfo = 0;
#endif

static ::String sMemberFields[] = {
	HX_HCSTRING("library","\xfb","\x26","\x70","\x3f"),
	HX_HCSTRING("libraryName","\xe6","\x5e","\xe7","\xaa"),
	HX_HCSTRING("symbolName","\xc3","\xd9","\xfc","\x1f"),
	HX_HCSTRING("isLocal","\x21","\x6d","\x76","\x15"),
	HX_HCSTRING("exists","\xdc","\x1d","\xe0","\xbf"),
	::String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(LibrarySymbol_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(LibrarySymbol_obj::__mClass,"__mClass");
};

#endif

hx::Class LibrarySymbol_obj::__mClass;

void LibrarySymbol_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("lime.utils._Assets.LibrarySymbol","\x91","\x88","\x9e","\x43");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = hx::Class_obj::dupFunctions(sMemberFields);
	__mClass->mCanCast = hx::TCanCast< LibrarySymbol_obj >;
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
} // end namespace utils
} // end namespace _Assets
